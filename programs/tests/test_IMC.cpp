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
// IMC XML MD5: 8ceccab312f86ca95954ac370389e9f3                            *
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
    msg.setTimeStamp(0.46334175168443537);
    msg.setSource(43970U);
    msg.setSourceEntity(206U);
    msg.setDestination(45176U);
    msg.setDestinationEntity(190U);
    msg.state = 7U;
    msg.flags = 84U;
    msg.description.assign("BWNSTQMIWRX");

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
    msg.setTimeStamp(0.06007546778075368);
    msg.setSource(62925U);
    msg.setSourceEntity(110U);
    msg.setDestination(59224U);
    msg.setDestinationEntity(136U);
    msg.state = 251U;
    msg.flags = 4U;
    msg.description.assign("GVGLBMMEIDTRQBMOTVLQHATJUUFXJDRFJIYPQTAYNQJXENZQOIVJAYZEMWHDUEWWMCLKVNOPAIOQRAKGKZNPMSYXFCSHOGCTBFKZZTKBYIBVNPRAWGGKAKWXDDILNOVBLZSNGFXUUCUPXSJPXUFYVWWHLASETUWKVDR");

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
    msg.setTimeStamp(0.6500090878796767);
    msg.setSource(19894U);
    msg.setSourceEntity(34U);
    msg.setDestination(61837U);
    msg.setDestinationEntity(239U);
    msg.state = 135U;
    msg.flags = 215U;
    msg.description.assign("FBSCCQWCEYGWKSOFJKJPQGFLOVOZDMYDTESXHBZUPRVVJSZDSJSHITWIZBYYAMO");

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
    msg.setTimeStamp(0.4083715129505533);
    msg.setSource(19480U);
    msg.setSourceEntity(6U);
    msg.setDestination(58891U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.3594301841835196);
    msg.setSource(38754U);
    msg.setSourceEntity(126U);
    msg.setDestination(12986U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.15569903363945914);
    msg.setSource(2150U);
    msg.setSourceEntity(157U);
    msg.setDestination(56614U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.6830408512636365);
    msg.setSource(44594U);
    msg.setSourceEntity(12U);
    msg.setDestination(39425U);
    msg.setDestinationEntity(223U);
    msg.id = 218U;
    msg.label.assign("VXRWFHVJBGTGEITCMHICQXWJAIYKEPUNPYVNDSUBNHXCFURTKDWWEVSRSMIEYIRRYTLCXVIABLKVMONSFHAKYXQYMZAFSJOQECABVOMKSUTDFLULQKCPTBQNGGEDZHQFIB");
    msg.component.assign("KTEZKZPHZRCVOWVJYPPIGRLRBBSDOYSCTUYMMINEJF");
    msg.act_time = 32645U;
    msg.deact_time = 7670U;

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
    msg.setTimeStamp(0.18590087453225157);
    msg.setSource(26859U);
    msg.setSourceEntity(221U);
    msg.setDestination(29940U);
    msg.setDestinationEntity(130U);
    msg.id = 25U;
    msg.label.assign("BRDRMDLSFEZYRBWCHOAQPGLZMBCQNLJCJJWEUWAMRITVIKOAZMTXVUNJNEBGDFSXKRXEBMLXILFXCNWKWWGNEZZPUQVPAOIXISBOORFEXYLVY");
    msg.component.assign("QBXEDMWPKWCGHLSLFFEGVHTMGPWHQVEUARCGQDJOEJKZEBMDNSQBOCWUNMWPRVSLZUVWUXJQOUTGNFOLYJJTCYTRHSNBQJIZEAGHGMAXBCFSBSRXCNVCPIWWKMVFWDYUPIPZLYWFVAKGJAYZKSPHUDDOVANULTYZHHTECHERXOQNDIXXNPDHSTJEZIARBUCQCMELTQLJKXSZVNYZXDKFLAOYTXFARQYRVKZTPAIIISUL");
    msg.act_time = 54245U;
    msg.deact_time = 44437U;

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
    msg.setTimeStamp(0.911872066104348);
    msg.setSource(28965U);
    msg.setSourceEntity(94U);
    msg.setDestination(32230U);
    msg.setDestinationEntity(88U);
    msg.id = 36U;
    msg.label.assign("HBQSHEWOZQWDXYRDRBELIUCMHFJJNQAOSLEOZCCHXC");
    msg.component.assign("JAFKHIPZJXKJFMPNUXKFUORSYJWIACWMWCMAFARMDIRJPZUZYNLRBNDQIVRTGLAQPOBTMBQHHFZSTCXARLHWSGGXUNSJBAWSVIDEVOJDECQVLDYFLWHYAZZYYKDVKGGIOCGSEWDYPFHBRSLMKUCAVXZRFNJEHWQOHPTNYTVPMCBWTXITJXZCQKRVOUEBXSKOVMCSDPE");
    msg.act_time = 2937U;
    msg.deact_time = 47772U;

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
    msg.setTimeStamp(0.4480773505348653);
    msg.setSource(51512U);
    msg.setSourceEntity(115U);
    msg.setDestination(55999U);
    msg.setDestinationEntity(249U);
    msg.id = 30U;

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
    msg.setTimeStamp(0.8199344135537351);
    msg.setSource(17098U);
    msg.setSourceEntity(177U);
    msg.setDestination(17569U);
    msg.setDestinationEntity(131U);
    msg.id = 244U;

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
    msg.setTimeStamp(0.3896994964781164);
    msg.setSource(32701U);
    msg.setSourceEntity(182U);
    msg.setDestination(5256U);
    msg.setDestinationEntity(84U);
    msg.id = 152U;

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
    msg.setTimeStamp(0.7585206583939976);
    msg.setSource(19395U);
    msg.setSourceEntity(154U);
    msg.setDestination(22098U);
    msg.setDestinationEntity(188U);
    msg.op = 205U;
    msg.list.assign("EBTYMTZEQCGCJEETORIUYBKRYXRCXOQDPINDIOHOXKLUFMHMGFDEDWAUBHWGFLSMIPHCYEQBCOTASVYWWNXZGUGMXDMLVXOZSEWZXBPEHSDGJFCPNGTWVKUIQOMRSRZYLNRIBYVRDTSTJYUROPPNWKSGRKAAFWQTJLJABIPFWJFNBK");

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
    msg.setTimeStamp(0.7523829362827948);
    msg.setSource(27847U);
    msg.setSourceEntity(248U);
    msg.setDestination(49603U);
    msg.setDestinationEntity(128U);
    msg.op = 250U;
    msg.list.assign("BKMZFEDOPXQPTWOUVKSMWYXXVLUNADHLYZECZXRWRKYFYCUGLMQKXTRSFRKYYXOGCEVNGLSIDSQEFEDUGVNMNXJZOTKMUGBICUBGABEGFKIBXZONNHLQAWJGPETMWDILUELHYHSLIQJVONTCNTKEJBIKUMSOIMVRLCFPQZPFJTDWDEHLDPATVUARWFSCQVHWZHZIAJAYBGXHFJIHRWMXVJTBJRKCSDZSJTDYIYRPBAFPVSHQNRPAB");

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
    msg.setTimeStamp(0.2276622142951693);
    msg.setSource(64108U);
    msg.setSourceEntity(24U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(39U);
    msg.op = 150U;
    msg.list.assign("MXFSDKCPMPYHHGXUXXFEUAZCGAEJBGXKNFHYFTXVZAHTZOUPOLNLSRPWBEYNJMCSNTWCJNSIUXWISBRKIRUQGTOMHYUJOGELOEGZSDUHUQMIXAIKENLWEZGQBNDJBSTFVHYAZQGDYIOZCUCJCKORRFWEGPAAKBZQKBVVLKCMJVWCVDDNFHNCSDLJ");

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
    msg.setTimeStamp(0.5716745897714843);
    msg.setSource(16945U);
    msg.setSourceEntity(8U);
    msg.setDestination(22098U);
    msg.setDestinationEntity(177U);
    msg.value = 163U;

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
    msg.setTimeStamp(0.5465710906094728);
    msg.setSource(42149U);
    msg.setSourceEntity(202U);
    msg.setDestination(2094U);
    msg.setDestinationEntity(200U);
    msg.value = 138U;

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
    msg.setTimeStamp(0.285019807122874);
    msg.setSource(24770U);
    msg.setSourceEntity(101U);
    msg.setDestination(14393U);
    msg.setDestinationEntity(216U);
    msg.value = 79U;

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
    msg.setTimeStamp(0.6709755011499078);
    msg.setSource(43663U);
    msg.setSourceEntity(125U);
    msg.setDestination(39960U);
    msg.setDestinationEntity(30U);
    msg.consumer.assign("RXTNJDXDFMIZWOQWRNMJOUIFHFEMLVOUYCWKAGGRVPXVRLVCVIYOSABEFKXKQMDPZAGBYXTUAGHLHSJTHDPQHGDYTLAUGSBVNZZEKTIPTHUUCAPFXOKUBIRIOWYSDLPXJIBQCKURQUYHYSBMDZSWHSFKHBKNWTWLBISOQZJPAMWFMCTZJYPPRGGUCTRVYLEDQLXTANCFYEEJDNECSLBGMQIEZNXWFRJKODAVNJOCCXBIF");
    msg.message_id = 116U;

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
    msg.setTimeStamp(0.7964391997111917);
    msg.setSource(37891U);
    msg.setSourceEntity(130U);
    msg.setDestination(46498U);
    msg.setDestinationEntity(6U);
    msg.consumer.assign("LRRERCHZCFESQDGANQZFZTMSFXJQLMWYUNGPOUYDNGNOYJATDSHHDYLVOIHMHCEHRWXDVJPPIUVGAQZQUFATIOOSMSXDFXPPKCRIRAKTBZWUULGVOMTBCVXNSKSTQFWVKSIPEADNGJOEWXLWTKEQBALKYTBRLAZQJDQSJRZNVVUTHWNBGDCNVEQYDWFIYKRYMYTKMLCMXJIE");
    msg.message_id = 15791U;

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
    msg.setTimeStamp(0.5383062222724889);
    msg.setSource(43249U);
    msg.setSourceEntity(182U);
    msg.setDestination(40584U);
    msg.setDestinationEntity(132U);
    msg.consumer.assign("SOCXAVRVHUIPSMPR");
    msg.message_id = 55718U;

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
    msg.setTimeStamp(0.38335224377331634);
    msg.setSource(48836U);
    msg.setSourceEntity(142U);
    msg.setDestination(56767U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.908585505822081);
    msg.setSource(24449U);
    msg.setSourceEntity(221U);
    msg.setDestination(37113U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.6709338450669543);
    msg.setSource(31087U);
    msg.setSourceEntity(163U);
    msg.setDestination(5038U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.00730055905787641);
    msg.setSource(10871U);
    msg.setSourceEntity(151U);
    msg.setDestination(39925U);
    msg.setDestinationEntity(178U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.7536081292923427);
    msg.setSource(49604U);
    msg.setSourceEntity(63U);
    msg.setDestination(13182U);
    msg.setDestinationEntity(146U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.02708325317627802);
    msg.setSource(57643U);
    msg.setSourceEntity(206U);
    msg.setDestination(52417U);
    msg.setDestinationEntity(74U);
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
    msg.setTimeStamp(0.48948600891040184);
    msg.setSource(35426U);
    msg.setSourceEntity(152U);
    msg.setDestination(46228U);
    msg.setDestinationEntity(244U);
    msg.total_steps = 230U;
    msg.step_number = 1U;
    msg.step.assign("ZSBQXWXIHBFKFEAKYQQRNVZDSISNCEJIOBUTRDQHPEJUHPZOMBELSAZRFLEYBYGCXXTATIVLYWIHDOAVKXDITCKGNWEBKWSOOWGPPUCTECCZKHZFDMUGJJGLKNFDAOJPQXVQSRBCGUTUZO");
    msg.flags = 38U;

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
    msg.setTimeStamp(0.7527260852013895);
    msg.setSource(31290U);
    msg.setSourceEntity(239U);
    msg.setDestination(20845U);
    msg.setDestinationEntity(245U);
    msg.total_steps = 19U;
    msg.step_number = 140U;
    msg.step.assign("ILONTFLIJTZYLRHPMDWEMBBSBZFHFXDIHOZYENHEYESQATAADMGONGTKGDAURCSQFXXXPKCVREJPETOOVZLAOILRRGCGJHQUPGZJWWDURYIMWANDQFGWFK");
    msg.flags = 217U;

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
    msg.setTimeStamp(0.6520389353783737);
    msg.setSource(40977U);
    msg.setSourceEntity(159U);
    msg.setDestination(50130U);
    msg.setDestinationEntity(215U);
    msg.total_steps = 200U;
    msg.step_number = 229U;
    msg.step.assign("DSYDEMVKYQFXPQXGNALRYNLGHSEWFPDRBSIEAHPRRMMHCJBCTNOWIHJNCOXJVRMYWTPCAQSLEEQULYUSOBCXFNQZEXFLIITYJP");
    msg.flags = 55U;

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
    msg.setTimeStamp(0.7815522381415716);
    msg.setSource(19176U);
    msg.setSourceEntity(53U);
    msg.setDestination(47545U);
    msg.setDestinationEntity(73U);
    msg.state = 133U;
    msg.error.assign("VIVDGYAVJAUTFRMAYIZSYGQDDAMYXJEQZTVEPYIXIQTZHZCKTRDEOGJUNCHGKQSEFFCHGGPLLRHPCGYQIJPMKLKGWYWJOQUSSOXIKLSXWWAKDJNMUUNFWDETNTOEFGEKJABKHR");

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
    msg.setTimeStamp(0.5163583424116017);
    msg.setSource(56451U);
    msg.setSourceEntity(132U);
    msg.setDestination(19564U);
    msg.setDestinationEntity(207U);
    msg.state = 34U;
    msg.error.assign("FUODCNMDCUGXKFHHLHBBZTLJGQIZYYPDWSOPIYVJGAKXFRYRGQHOULERSPKSJITAEZZCTOCALEIOSHTSQITEPWOBBJKVWRANZNSXUFWEWPTSCJUFX");

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
    msg.setTimeStamp(0.055040843675831286);
    msg.setSource(62968U);
    msg.setSourceEntity(231U);
    msg.setDestination(49325U);
    msg.setDestinationEntity(180U);
    msg.state = 223U;
    msg.error.assign("AWBETLRICCFEQVTFMFEURULYFTTAINSOFECRGVGJ");

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
    msg.setTimeStamp(0.1822319204567887);
    msg.setSource(12993U);
    msg.setSourceEntity(71U);
    msg.setDestination(12548U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.002954968268152114);
    msg.setSource(21783U);
    msg.setSourceEntity(149U);
    msg.setDestination(49822U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.6018490169457208);
    msg.setSource(19103U);
    msg.setSourceEntity(111U);
    msg.setDestination(22372U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.3487696188020599);
    msg.setSource(43422U);
    msg.setSourceEntity(54U);
    msg.setDestination(14137U);
    msg.setDestinationEntity(64U);
    msg.op = 119U;
    msg.speed_min = 0.28231523537799474;
    msg.speed_max = 0.7081621157545027;
    msg.long_accel = 0.5240972133471793;
    msg.alt_max_msl = 0.8842677045872047;
    msg.dive_fraction_max = 0.39004984517033225;
    msg.climb_fraction_max = 0.4338806462011848;
    msg.bank_max = 0.9833286787228129;
    msg.p_max = 0.3310378381566662;
    msg.pitch_min = 0.36862099740771037;
    msg.pitch_max = 0.4211123173432224;
    msg.q_max = 0.629464587553645;
    msg.g_min = 0.3050436412784111;
    msg.g_max = 0.5502830646998026;
    msg.g_lat_max = 0.19614296888401273;
    msg.rpm_min = 0.7020400926473701;
    msg.rpm_max = 0.5524204754509909;
    msg.rpm_rate_max = 0.5253329640777746;

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
    msg.setTimeStamp(0.05767907746941292);
    msg.setSource(61378U);
    msg.setSourceEntity(38U);
    msg.setDestination(63613U);
    msg.setDestinationEntity(165U);
    msg.op = 225U;
    msg.speed_min = 0.06655502566041216;
    msg.speed_max = 0.83384339233024;
    msg.long_accel = 0.5561559082998504;
    msg.alt_max_msl = 0.4149009631043118;
    msg.dive_fraction_max = 0.6416148760623536;
    msg.climb_fraction_max = 0.25972474683575497;
    msg.bank_max = 0.9223152285165257;
    msg.p_max = 0.17788913417562235;
    msg.pitch_min = 0.6801128345737921;
    msg.pitch_max = 0.6728952483786388;
    msg.q_max = 0.09004942168572694;
    msg.g_min = 0.685026472039598;
    msg.g_max = 0.17037877469193186;
    msg.g_lat_max = 0.2603146149042126;
    msg.rpm_min = 0.7326471674170518;
    msg.rpm_max = 0.25310225535116293;
    msg.rpm_rate_max = 0.9798142511563617;

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
    msg.setTimeStamp(0.3293422284100609);
    msg.setSource(21632U);
    msg.setSourceEntity(111U);
    msg.setDestination(54643U);
    msg.setDestinationEntity(33U);
    msg.op = 142U;
    msg.speed_min = 0.6772653674436601;
    msg.speed_max = 0.02977525327007957;
    msg.long_accel = 0.803546971349424;
    msg.alt_max_msl = 0.2286808570877995;
    msg.dive_fraction_max = 0.726966722091763;
    msg.climb_fraction_max = 0.013970927852932857;
    msg.bank_max = 0.912390098203963;
    msg.p_max = 0.40139813488956955;
    msg.pitch_min = 0.12347621413988852;
    msg.pitch_max = 0.08512712196100636;
    msg.q_max = 0.6246004488689785;
    msg.g_min = 0.6877018244396907;
    msg.g_max = 0.8236406167106066;
    msg.g_lat_max = 0.9339864544771296;
    msg.rpm_min = 0.3586496514376699;
    msg.rpm_max = 0.9863003623613392;
    msg.rpm_rate_max = 0.01838464366882575;

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
    msg.setTimeStamp(0.654963228467791);
    msg.setSource(13630U);
    msg.setSourceEntity(6U);
    msg.setDestination(55647U);
    msg.setDestinationEntity(74U);
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 159U;
    tmp_msg_0.step_number = 251U;
    tmp_msg_0.step.assign("HDLMIMOBQMOYAYXZJKEPEILVAOXEAKSBJJMTVGUOHARHBDVENLVJVJESSWUTFCHGMTGUGDNWFQKZCDWJITDMXFGYUKUZPOMALUQURJUZQLRRDTPHCXDYLCIIAYSQEVPCGKWTTGRPRLRDUPWQEDSRLZTJYYVPZBBXSNOSVPKCEGQHAOCVYTQCGANZKZBUCJMQHFBOFLKAZT");
    tmp_msg_0.flags = 225U;
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
    msg.setTimeStamp(0.6375104738736175);
    msg.setSource(39034U);
    msg.setSourceEntity(151U);
    msg.setDestination(15963U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.47507679981330986);
    msg.setSource(64333U);
    msg.setSourceEntity(211U);
    msg.setDestination(27935U);
    msg.setDestinationEntity(169U);
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.7640522165562221;
    tmp_msg_0.speed = 0.29396464371965214;
    tmp_msg_0.turbulence = 0.9754198664155695;
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
    msg.setTimeStamp(0.9086529261657933);
    msg.setSource(45200U);
    msg.setSourceEntity(87U);
    msg.setDestination(48616U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.13720456291778216;
    msg.lon = 0.49579069732466874;
    msg.height = 0.48928800036431475;
    msg.x = 0.557636836796348;
    msg.y = 0.26581272998347394;
    msg.z = 0.014582923846865659;
    msg.phi = 0.781052131724447;
    msg.theta = 0.3639823645864435;
    msg.psi = 0.8968901055456392;
    msg.u = 0.9367777994285185;
    msg.v = 0.09906630523188464;
    msg.w = 0.5258577785521903;
    msg.p = 0.2521457871822227;
    msg.q = 0.46192819631387594;
    msg.r = 0.7057000397979565;
    msg.svx = 0.08037565618969544;
    msg.svy = 0.29533246925282697;
    msg.svz = 0.27436273281785795;

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
    msg.setTimeStamp(0.8004637208019678);
    msg.setSource(42502U);
    msg.setSourceEntity(158U);
    msg.setDestination(27393U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.9293969330033504;
    msg.lon = 0.7757716116016995;
    msg.height = 0.30926538275912807;
    msg.x = 0.2988078886205796;
    msg.y = 0.788003526476162;
    msg.z = 0.354004973351577;
    msg.phi = 0.41395893217430346;
    msg.theta = 0.8676959717344973;
    msg.psi = 0.2642988247187219;
    msg.u = 0.007283029116191275;
    msg.v = 0.5172408562622991;
    msg.w = 0.7247407061444517;
    msg.p = 0.26396958137557514;
    msg.q = 0.08925394689875654;
    msg.r = 0.817320606188796;
    msg.svx = 0.0436103912977982;
    msg.svy = 0.35727471976566594;
    msg.svz = 0.7892805547640724;

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
    msg.setTimeStamp(0.6905793675929316);
    msg.setSource(48961U);
    msg.setSourceEntity(239U);
    msg.setDestination(45555U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.5327923958540176;
    msg.lon = 0.11526339712209843;
    msg.height = 0.3886099952289406;
    msg.x = 0.6042028030677212;
    msg.y = 0.4677186813641302;
    msg.z = 0.8189209232255906;
    msg.phi = 0.07769238304148585;
    msg.theta = 0.41678677639701667;
    msg.psi = 0.7160072614649771;
    msg.u = 0.2303835102419296;
    msg.v = 0.3417023446755806;
    msg.w = 0.8347868844802458;
    msg.p = 0.3523801578031609;
    msg.q = 0.4566861126772227;
    msg.r = 0.3260765238721196;
    msg.svx = 0.8160807639677815;
    msg.svy = 0.556469673157606;
    msg.svz = 0.9382503970601047;

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
    msg.setTimeStamp(0.5024444405886169);
    msg.setSource(58925U);
    msg.setSourceEntity(210U);
    msg.setDestination(4791U);
    msg.setDestinationEntity(244U);
    msg.op = 112U;
    msg.entities.assign("DYIBGWFBGSWZFCOKGGUSYWCJPXF");

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
    msg.setTimeStamp(0.7048513552008601);
    msg.setSource(60058U);
    msg.setSourceEntity(40U);
    msg.setDestination(8686U);
    msg.setDestinationEntity(65U);
    msg.op = 50U;
    msg.entities.assign("EILGCRVJBKJSSFIMNAIVIHSDBWZHIUTZBNUYEZCJJGAGPRYXAFTYVFCMEDAPILPPAGTFASQJIUXHUYPVDYBYEKRUHAKDTFEKHQWGFBMDKOSFWXRDECNQWHRRNVRZHLFLBTOGIUHKJVSYMIMNTRQZCOXNRACLNSQNSZOLXUOWZBASIM");

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
    msg.setTimeStamp(0.4019319541463059);
    msg.setSource(21602U);
    msg.setSourceEntity(186U);
    msg.setDestination(44255U);
    msg.setDestinationEntity(98U);
    msg.op = 82U;
    msg.entities.assign("SJAXHUTYBVKWYRDJKKNDYFNYYNVSOLBTOCDJXJCTTSGGIXFLALBJTNQQKEZCPV");

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
    msg.setTimeStamp(0.4056803111972763);
    msg.setSource(45244U);
    msg.setSourceEntity(160U);
    msg.setDestination(39036U);
    msg.setDestinationEntity(55U);
    msg.type = 214U;
    msg.speed = 28377U;
    const char tmp_msg_0[] = {-40, -46, 118, -90, -87, 89, -24, -113, -6, 69, -86, -8, -59, 6, -75, -72, 23, 109, 57, -93, -74, 106, -77, 116, -113, 89, 76, 125, -61, 92, -86, -4, 7, -89, 111, 18, 23, -71, 114, 29, -68, 46, 36, -97, 76, -82, -68, -9, 35, 41, -94, 119, -3, -118, -124, 63, -98, -111, 101, 113, 27, -97, -126, -45, 88, 85, -44, -58, 34, 68, 53, 2, 90, 25, -43, -96, -89, -108, -77, 16, 126, 18, 122, -109, -21, -121, 80, -43, -105, 46, 59, 60, 55, -83, -27, 16, -18, 96, -38, -94, -101, -32, 74, -4, -110, -78, -125, 119, -5, -105, 46, 44, 81, 70, -43, -28, -49, 117, 49, -101, -62, -91, 85, 104, -125, -113, 33, 58, 27, -61, -32, 32, -4, -82, 31, -82, -13, -23, 121, -94, 96, -111, 38, 120, -62, 81, 2, 125, -72, 15, -114, 70, -3, -31, 124, 27, -114, 101, -61, -10, -22, 82, 98, -116, 111, -58, 12, -92, 56, -33, 69, 103, -40, 113, -108, -46, -69, -107, -124, -23, 57, -1, -43, -29, 75, -19, 92, -26, -71, 97, -38, 8, -60, 41, -58, 99, 41, 19, 41, 63, -1, 46, -8, 118, -5, -126, 93, 79, 123, 38, -101, 46, -115};
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
    msg.setTimeStamp(0.8439700920101355);
    msg.setSource(44012U);
    msg.setSourceEntity(24U);
    msg.setDestination(53104U);
    msg.setDestinationEntity(105U);
    msg.type = 155U;
    msg.speed = 27828U;
    const char tmp_msg_0[] = {-36, -64, -82, -28, 43, 31, 95, -115, 123, 110, 61, -93, -111};
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
    msg.setTimeStamp(0.88146740763108);
    msg.setSource(13846U);
    msg.setSourceEntity(246U);
    msg.setDestination(38231U);
    msg.setDestinationEntity(8U);
    msg.type = 65U;
    msg.speed = 63776U;
    const char tmp_msg_0[] = {88, 95, 11, -59, -50, -10, -94, 85, 56, 86, 66, 125, -35, -48, -46, 75, -110, 64, 51};
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
    msg.setTimeStamp(0.4829797815464201);
    msg.setSource(5706U);
    msg.setSourceEntity(236U);
    msg.setDestination(54536U);
    msg.setDestinationEntity(73U);
    msg.op = 13U;
    msg.tas2acc_pgain = 0.2681901981788537;
    msg.bank2p_pgain = 0.9149883794260393;

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
    msg.setTimeStamp(0.7685882142064676);
    msg.setSource(53271U);
    msg.setSourceEntity(46U);
    msg.setDestination(19952U);
    msg.setDestinationEntity(222U);
    msg.op = 246U;
    msg.tas2acc_pgain = 0.9649003827372049;
    msg.bank2p_pgain = 0.2657162523261728;

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
    msg.setTimeStamp(0.8597590242416169);
    msg.setSource(12638U);
    msg.setSourceEntity(44U);
    msg.setDestination(2976U);
    msg.setDestinationEntity(13U);
    msg.op = 8U;
    msg.tas2acc_pgain = 0.3789531250093352;
    msg.bank2p_pgain = 0.9986641854311478;

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
    msg.setTimeStamp(0.7227779881096423);
    msg.setSource(59722U);
    msg.setSourceEntity(32U);
    msg.setDestination(22849U);
    msg.setDestinationEntity(190U);
    msg.available = 2080698874U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.8407934466700784);
    msg.setSource(40141U);
    msg.setSourceEntity(155U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(8U);
    msg.available = 2827890919U;
    msg.value = 200U;

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
    msg.setTimeStamp(0.816161456375399);
    msg.setSource(33184U);
    msg.setSourceEntity(156U);
    msg.setDestination(814U);
    msg.setDestinationEntity(240U);
    msg.available = 49322631U;
    msg.value = 215U;

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
    msg.setTimeStamp(0.22438014480213098);
    msg.setSource(54073U);
    msg.setSourceEntity(218U);
    msg.setDestination(48769U);
    msg.setDestinationEntity(94U);
    msg.op = 83U;
    msg.snapshot.assign("OSHIGLOQUHMWTSZZKDKABCCAZKJQXZVBLPWKBSHTWCAMREDYHAVKDFYECGYMFPHDGFAXUIMNSFYGTQXNBXAWOETNXJYEDOXVXRVPTOAMCUZONSWLCCWJRSHOHWFLEWQQIDZBKBGIFAVRTYXEPBUPQVNNOJDQWZCDIZLXRYSMJRIJIIRNTUFOHVZYGMLSUERRN");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.36103433393129025;
    tmp_msg_0.m = 0.00489121878107579;
    tmp_msg_0.n = 0.4523146099976507;
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
    msg.setTimeStamp(0.5142127809175813);
    msg.setSource(45467U);
    msg.setSourceEntity(226U);
    msg.setDestination(49709U);
    msg.setDestinationEntity(231U);
    msg.op = 93U;
    msg.snapshot.assign("IEHAADNVKSAFELQEBGXUHTGVKIWZJCTYZJNKXLOJKWOPRCEEZSMAYFCHTTUZROJTUOKSVIZMIARGUEQHHWAOWZXLWDRPCMQPNPFRRNMIWZZSXDJQVLRIVLVHSQYFKMPBGJVOAAGPCGRIISUWOCAVQAJSWGWRSMGUFSNLLQIDVTHGP");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 46670U;
    tmp_msg_0.rpm = 0.7344734037909315;
    tmp_msg_0.direction = 114U;
    tmp_msg_0.custom.assign("KQMPFDLGZSNXJPDSZOAELKWFGXJUY");
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
    msg.setTimeStamp(0.3216795085069325);
    msg.setSource(38399U);
    msg.setSourceEntity(173U);
    msg.setDestination(4830U);
    msg.setDestinationEntity(185U);
    msg.op = 60U;
    msg.snapshot.assign("FHQCNJBSSAUQVWKPLEHCZLGVGURLEVDKGDYPIHOIWIEIBXXERUFSNOPJUZETIKOPDBOYQXAIFMWYUCGDXEKYBYMZZKZRRTLNTJMUSFWEPENTCSRNUZPSBTIOJULZBGCLUBGODYGSLQNAHKPBOCCNWT");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.011460232192788355;
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
    msg.setTimeStamp(0.6179402849972174);
    msg.setSource(39559U);
    msg.setSourceEntity(39U);
    msg.setDestination(14725U);
    msg.setDestinationEntity(236U);
    msg.op = 155U;
    msg.name.assign("QOABVGAVUNCSDMINWTXCCYUFHJIJQTMOZMJAEBRQASYQYHFWTWSDSUZWDGSEDJFFGUYGKOWHCHTGFQYGXVYMTDRBMIQHVJCVOCFRUBIBDBREUDQGMCSJAMVPTIICXLKYYSWKFKKLKZRNCSMNLELTDPIJEHJSINLVMNOUJXTXAOPBKZZPHLZQBCKGELRZAEWFEPNVELKQZGORYWPLHXRAFUXBZWOPWYVUTHDTZPNNOIXXNQJRSUVLHP");

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
    msg.setTimeStamp(0.341291103761597);
    msg.setSource(9191U);
    msg.setSourceEntity(30U);
    msg.setDestination(34399U);
    msg.setDestinationEntity(43U);
    msg.op = 83U;
    msg.name.assign("PBJGJOGTTLNVWPJXJJDMOVZADELZFSVMWDVQVWBNHKNCNAMYBHTZHXELQKMNPUAVGRPTGIWSLCKGTNWUVAMERGUMNQPYOVJFXQKONTREFQKHCSWDKDSMUGQYNJBCDHLIBDELOFMQKJTXMVICWDUHYOBGHLCWAGPOIRZRBZJAUBUEWEALJOSFUXSXEYIXYQZFZHKIIVCZZTAZDYFRQFRBCHPFBASAORTKLFIE");

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
    msg.setTimeStamp(0.15638212922379258);
    msg.setSource(57131U);
    msg.setSourceEntity(142U);
    msg.setDestination(16279U);
    msg.setDestinationEntity(154U);
    msg.op = 159U;
    msg.name.assign("CTAJFCIIHLKENTOOAYVMBBBLZTUVJGZUEOUNHIAEEXYKWKLVFVISJKKGOFTOVAYBZTCSMXXAKHDGDLCLWKCLGXCUXFISWFHRONMASFFTVAWCYQXEXXBFJMNIWGNDGCEHOYQPPYACNVQODIROPHZLZXZBSSOUSBQJPZJPUIEYUXPGJKDZDJGWHGMPGMEDSQZWRHURDRFIMFQPIURQTHESLKRJLZKMQLYYTQNNWDTDY");

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
    msg.setTimeStamp(0.5710253963229185);
    msg.setSource(54608U);
    msg.setSourceEntity(124U);
    msg.setDestination(22271U);
    msg.setDestinationEntity(249U);
    msg.type = 161U;
    msg.htime = 0.8038336684737709;
    msg.context.assign("CHOUKQNEFJNTPBRSXYKFYYRJJMVEVJR");
    msg.text.assign("GFKUHUECSRSEFUTOJXOOAVWAKTNICSDZPCNBMEDGPJRCBXHYARXHGKKIBXCIJEDHZYFLFQZOYMLLUCKVPXIZJVTDDS");

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
    msg.setTimeStamp(0.7398859882853375);
    msg.setSource(59028U);
    msg.setSourceEntity(172U);
    msg.setDestination(39486U);
    msg.setDestinationEntity(172U);
    msg.type = 15U;
    msg.htime = 0.5450513507653321;
    msg.context.assign("FPGFXODWLMFLXZXISHUWCMUVJQLHPMYXGJPHFKQRVSCHMYGYLWUGZZSVSAVMYTIXWSHERWWTMRBAIDGOZXJRLVIKMOAMFEK");
    msg.text.assign("SOCWGRYEESFARKOYDELPEGNYRDKDKUTVIFYQOHMEDJAQQYJMKHZRPWLAJTCOULICDAVXBCBOAJWTZBYQSNDTUZEJIXZXOZWCVTVJIBHOBGHVYMAZPLTBCEJFZTZMIEDMPBHLYSLNRHGFNWKONPKHGCVZICQMSYAXVUOTIJFCEMKDTRBPKQXFZSGVGWRLCHPFWSBXNILTQWJGOVHUBKDSMNUIULWQNDGQKGNFAIPUXVPX");

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
    msg.setTimeStamp(0.24458188158230032);
    msg.setSource(15044U);
    msg.setSourceEntity(232U);
    msg.setDestination(49041U);
    msg.setDestinationEntity(36U);
    msg.type = 216U;
    msg.htime = 0.35089577570019814;
    msg.context.assign("PKNMYPZXOOXLLXZGOQLUJVYWINIEZUBOMHDHXWLSQESUKUPJDQXXJKGLCDVXBNTJAZFICMYMPISMPRVTYTAAVAFWSLDEASHRDGENKYJDWCGEEIECIHKFQIBJVAFPRZCWMGCWFSUQRVMBUWFIDTLFETRPQKGBYKBKRNYWSQGQHLAJNCTJFNGHBLOHTOSTBFWIVPVDUCOUTHXSWNQERYVCMJYRARAVCZQEKOHNPYZZKHLTMIO");
    msg.text.assign("MKOIYSSNCPL");

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
    msg.setTimeStamp(0.9948441744941352);
    msg.setSource(7356U);
    msg.setSourceEntity(235U);
    msg.setDestination(10199U);
    msg.setDestinationEntity(13U);
    msg.command = 151U;
    msg.htime = 0.4850343500306564;

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
    msg.setTimeStamp(0.2795146430481241);
    msg.setSource(33620U);
    msg.setSourceEntity(18U);
    msg.setDestination(27989U);
    msg.setDestinationEntity(175U);
    msg.command = 117U;
    msg.htime = 0.17290400595949995;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 178U;
    tmp_msg_0.htime = 0.4398361707772285;
    tmp_msg_0.context.assign("KJQAPIOHQSIUBDZPYQMWEMZFQDNAMYOBHSGRNHVVOTKYXQNNGENLBYRDPLQXHFTVCLBPORUXMLBHBUBZLULITKJWXNQAYSCMQKWFSBWKCACAEICZVPEFAOWYXGJAZXTFDRTOUZAGO");
    tmp_msg_0.text.assign("YWYAZVNUVSUGUXFXZSABAPBFHELZQQEIZOYFCXDMTWDMNBGWCPABUWOQDIYQHCSHXOEYIOLR");
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
    msg.setTimeStamp(0.6918864818148935);
    msg.setSource(56356U);
    msg.setSourceEntity(153U);
    msg.setDestination(43782U);
    msg.setDestinationEntity(160U);
    msg.command = 183U;
    msg.htime = 0.18044962548077115;

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
    msg.setTimeStamp(0.2002118756530722);
    msg.setSource(34258U);
    msg.setSourceEntity(19U);
    msg.setDestination(42340U);
    msg.setDestinationEntity(64U);
    msg.op = 178U;
    msg.file.assign("WPLETCXNVUHKDOCJAGZCLCBINMBR");

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
    msg.setTimeStamp(0.005334569415757606);
    msg.setSource(52859U);
    msg.setSourceEntity(58U);
    msg.setDestination(36592U);
    msg.setDestinationEntity(98U);
    msg.op = 62U;
    msg.file.assign("BIWMAEZARMVOHLCLSGEEGTIQEGTNEEAVGKQJLBNCO");

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
    msg.setTimeStamp(0.24942964043828542);
    msg.setSource(55075U);
    msg.setSourceEntity(147U);
    msg.setDestination(37741U);
    msg.setDestinationEntity(185U);
    msg.op = 179U;
    msg.file.assign("ZBKPAHYYXHHKTIMGPFOKRUHSWSKFEIWROMALENUZSRQAFCMQONYQXUGFINQQLVXGUBLFNMDOWOYQHIVREUBDWXSKETJEPVXDQZTMPGVVJIIZWFBFYCNKYKQC");

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
    msg.setTimeStamp(0.9282973811912096);
    msg.setSource(37881U);
    msg.setSourceEntity(75U);
    msg.setDestination(55810U);
    msg.setDestinationEntity(181U);
    msg.op = 113U;
    msg.clock = 0.6825946261067355;
    msg.tz = -107;

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
    msg.setTimeStamp(0.09219808076221525);
    msg.setSource(63919U);
    msg.setSourceEntity(131U);
    msg.setDestination(23479U);
    msg.setDestinationEntity(5U);
    msg.op = 209U;
    msg.clock = 0.7966799758758201;
    msg.tz = 50;

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
    msg.setTimeStamp(0.8541267559852657);
    msg.setSource(8428U);
    msg.setSourceEntity(244U);
    msg.setDestination(34298U);
    msg.setDestinationEntity(157U);
    msg.op = 9U;
    msg.clock = 0.09855801786233143;
    msg.tz = 86;

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
    msg.setTimeStamp(0.8197495675118158);
    msg.setSource(54554U);
    msg.setSourceEntity(38U);
    msg.setDestination(24966U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.4180460379990173);
    msg.setSource(40044U);
    msg.setSourceEntity(201U);
    msg.setDestination(34586U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.49826280929333777);
    msg.setSource(37008U);
    msg.setSourceEntity(30U);
    msg.setDestination(62029U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.1281435614086498);
    msg.setSource(4235U);
    msg.setSourceEntity(183U);
    msg.setDestination(9278U);
    msg.setDestinationEntity(55U);
    msg.sys_name.assign("OHAOXTLBSKJIQDBXTZWNAVVDPOIJMGXYODYAJZRYYTEEJUWCSICAZUIFSQUURGFMQFGWUJHLSPIIRXKMJBYYOMDORCHJPUKMYRTEVCLYTMJADMPGS");
    msg.sys_type = 162U;
    msg.owner = 8523U;
    msg.lat = 0.3676266122685319;
    msg.lon = 0.7550641353015589;
    msg.height = 0.5715748387857884;
    msg.services.assign("IXXKSNLBUEHNACPMIS");

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
    msg.setTimeStamp(0.9876622840423381);
    msg.setSource(7903U);
    msg.setSourceEntity(170U);
    msg.setDestination(57841U);
    msg.setDestinationEntity(25U);
    msg.sys_name.assign("NAUDQSLCSVLSQOWAPHWNLUVXJLPEKANPCQWYDMDTFJRVYAXUGBMRHHCHOYUXHKNBJQTTCANXTGHKSXKEOVFKPYKLEOQUZYRMTZBHSGADEJBAUGEUAAHYFZGVKQHDWYEJNMPKVRJHIQIZCSAEYIRDROFWOGW");
    msg.sys_type = 15U;
    msg.owner = 39993U;
    msg.lat = 0.34401587439962167;
    msg.lon = 0.482780889205251;
    msg.height = 0.7497258711933935;
    msg.services.assign("EJZLSKHZGDXUKNALWKRZPVJ");

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
    msg.setTimeStamp(0.4310959600792428);
    msg.setSource(34975U);
    msg.setSourceEntity(130U);
    msg.setDestination(10603U);
    msg.setDestinationEntity(14U);
    msg.sys_name.assign("NSDRAJTOFOVVKFTVCLDIPJGIPRUQYWEFJUCIIKAETTCXUOHDDBLWGGMLDSJUDCALWZCAPXZWIDZBYKAZIQSEMPZLSMVPABEHXNCPMZTXNGOOHKHBGWFQWYRSXRUTUNDFJEBRHJIDSRMJYQBAMUXXMCJNHTXRSFKBNZH");
    msg.sys_type = 237U;
    msg.owner = 37492U;
    msg.lat = 0.6775338532580129;
    msg.lon = 0.9887751096726553;
    msg.height = 0.4097535153025804;
    msg.services.assign("CXZRJZTVUWZSLGOVGWJ");

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
    msg.setTimeStamp(0.09413674895216473);
    msg.setSource(31698U);
    msg.setSourceEntity(29U);
    msg.setDestination(64944U);
    msg.setDestinationEntity(137U);
    msg.service.assign("KQDWAIEFOIJSFNQCPQVEQFQOFBGTBGAKPZAOZBDVCHEWNCEHXYOWPWREZXQPSUFGHLTXYHIZIETMRYQJHMOCVPXXTYNRZGFGUJJWIDSXROBGZLEMTSRUKDDMPVXMPWZSJCRVFKMDSJYHVLGACKEQMPLWLFOSUHSNMKBNYQXJKVRKTAUUIPOLINBPJANJXBGNMVXFLTRWYTFVCCSOIYWDBKIARUOGNLVKATRDDUACNTZHIM");
    msg.service_type = 91U;

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
    msg.setTimeStamp(0.5102931002953749);
    msg.setSource(18828U);
    msg.setSourceEntity(148U);
    msg.setDestination(34818U);
    msg.setDestinationEntity(88U);
    msg.service.assign("HILVSWABWAUNSNKMIELVQDLETJSWF");
    msg.service_type = 189U;

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
    msg.setTimeStamp(0.5299259824305182);
    msg.setSource(16228U);
    msg.setSourceEntity(207U);
    msg.setDestination(42959U);
    msg.setDestinationEntity(197U);
    msg.service.assign("AYZBAVUPGRYNSHANVKQZIAXRJMOMIKBHXLUQJTQCMBEJHUHPLCBRZTVDWMCOLXJYPPJNRGOXIQFQLXWWKTWVJDSCAAIFXONGGAJNFOYULEKEPADCZSMDLKOHCRUGNBTJIZQDQPCGFXDWVZEFYRNLNRXPYLZHBPKBIYSWVSTTPXDWEEOEJHMVPUSZLDIAUSTFYHFZBENOVMKMUCVSZCBWIYSGFOQYBMHVOKIFQFDCGGWAWKMLIQUERHETTJ");
    msg.service_type = 47U;

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
    msg.setTimeStamp(0.5514390218364149);
    msg.setSource(36002U);
    msg.setSourceEntity(185U);
    msg.setDestination(19703U);
    msg.setDestinationEntity(211U);
    msg.value = 0.768495938885155;

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
    msg.setTimeStamp(0.04657272254678413);
    msg.setSource(13920U);
    msg.setSourceEntity(56U);
    msg.setDestination(36613U);
    msg.setDestinationEntity(192U);
    msg.value = 0.6524699183304089;

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
    msg.setTimeStamp(0.4829094538664651);
    msg.setSource(3268U);
    msg.setSourceEntity(34U);
    msg.setDestination(28654U);
    msg.setDestinationEntity(34U);
    msg.value = 0.47885827180900864;

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
    msg.setTimeStamp(0.45837972021133644);
    msg.setSource(19057U);
    msg.setSourceEntity(10U);
    msg.setDestination(19715U);
    msg.setDestinationEntity(6U);
    msg.value = 0.4325570926913598;

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
    msg.setTimeStamp(0.21951417728628253);
    msg.setSource(5335U);
    msg.setSourceEntity(204U);
    msg.setDestination(11340U);
    msg.setDestinationEntity(167U);
    msg.value = 0.0592518358080919;

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
    msg.setTimeStamp(0.11136541572242031);
    msg.setSource(59601U);
    msg.setSourceEntity(115U);
    msg.setDestination(403U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8643060419062248;

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
    msg.setTimeStamp(0.6572492091216275);
    msg.setSource(19908U);
    msg.setSourceEntity(81U);
    msg.setDestination(30005U);
    msg.setDestinationEntity(76U);
    msg.value = 0.22797230082400088;

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
    msg.setTimeStamp(0.5785942104920612);
    msg.setSource(23561U);
    msg.setSourceEntity(218U);
    msg.setDestination(44830U);
    msg.setDestinationEntity(12U);
    msg.value = 0.7495104802961703;

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
    msg.setTimeStamp(0.9631354334176695);
    msg.setSource(25467U);
    msg.setSourceEntity(95U);
    msg.setDestination(18850U);
    msg.setDestinationEntity(67U);
    msg.value = 0.3417313202903173;

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
    msg.setTimeStamp(0.2809630095109469);
    msg.setSource(19764U);
    msg.setSourceEntity(153U);
    msg.setDestination(58487U);
    msg.setDestinationEntity(193U);
    msg.number.assign("VOTIFJWWXQWGAVJWCNPPAHOXODGCYHCGTFJNKENXGXUCTSWNEQYIYFLVESYDDOGOFXQOBAYUIIDJBIXGNKTLBYMSZUZKPDBRQQEPUSFFPYJTWVKVFEXZEWZXRJLMIPSKKUTQSVRDKMINDRPZBBNILAVZTHOXLIQHWRALSYOLAKMQBNMXTSAEGLMFBMCPWAFBWSKTJY");
    msg.timeout = 32685U;
    msg.contents.assign("EXHOTTRGFPXEYOCQCEEIOQBVGBMLXWKQXWYBAJJVKQNSXCDMCHOIDYPPAFK");

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
    msg.setTimeStamp(0.34948780261223933);
    msg.setSource(49407U);
    msg.setSourceEntity(151U);
    msg.setDestination(44348U);
    msg.setDestinationEntity(242U);
    msg.number.assign("VMMXFMVYZKOJCKACZYMUNWHFGULJXHECIPZUDDTVGNITWIERQIKRRSA");
    msg.timeout = 14137U;
    msg.contents.assign("SVZQCKNFDGJGLOOLVTOQHKRWATXWBUDKCIKVHMDXRKLTQYIBFJEPCWATNTMFJULJFXYWCIQMMJEYRLY");

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
    msg.setTimeStamp(0.1784197592248019);
    msg.setSource(41008U);
    msg.setSourceEntity(104U);
    msg.setDestination(24977U);
    msg.setDestinationEntity(69U);
    msg.number.assign("SBMEKKJAARHIMEUKNBCQOPLMVPRTTSYXEAWXTCHDNZGHDYBIUDBVEHNKAYLSNBCFVPLUIGQAEEGYIXIWHDXSCKRDBVBAVPOMHTODGUZMFHHLLGFZCNGYYWXITTZUUJUTQ");
    msg.timeout = 31677U;
    msg.contents.assign("TLIEUTFAXCSOPWUUEDGFBUU");

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
    msg.setTimeStamp(0.1387758483704412);
    msg.setSource(7831U);
    msg.setSourceEntity(165U);
    msg.setDestination(19333U);
    msg.setDestinationEntity(219U);
    msg.seq = 4012953943U;
    msg.destination.assign("BELEMTZJROTHVEMAGESYLJCRTQJYTRYNPXROYNZXGVNGKDZJLOXAFCKNXPW");
    msg.timeout = 49695U;
    const char tmp_msg_0[] = {26, 105, 119, -122, 117, -95, 97, -49, -51, 30, -9, -86, 57, 48, -56, 103, 84, -120, -103, -108, 85, -98, 77, -5, 37, -18, 36, 40, 8, -8, -115, 50, -55, -49, 73, 14, 87, -23, -29, -102, 124, 23, 117, 10, -50, -98, 73, 94, 92, 3, 47, -107, -37, -58, 34, 39, -118, 90, -42, -65, 110, 83, -101, 49, 32, -113, -87, -81, 98, -52, -34, -70, -54, 108, -118, -48, -116, -15, -66, 60, -63, 118, 111, -114, 119, -54, 33, -80, -62, 11, -41, -3, -125, 43, 29, -58, 82, -10, -38, 32, -34, -3, 16, -23, -45, -72, -56, 110, 6, 63, -23, -24, -10, 66, 88, -60, 27, 61, 69, 9, -10, 9, 46, 120, -97, 32, -95, -49, -68, 103};
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
    msg.setTimeStamp(0.7392689551651721);
    msg.setSource(41589U);
    msg.setSourceEntity(67U);
    msg.setDestination(64754U);
    msg.setDestinationEntity(212U);
    msg.seq = 3820564086U;
    msg.destination.assign("STNKDJFTQDYNJYDNCPBTXGAEB");
    msg.timeout = 47715U;
    const char tmp_msg_0[] = {-125, 83, -12, 74, 74, 48, 27, 14, -70, -38, -9, 97, -57, 29, 79, -115, -28, -4, 85, -35, 66, -51, -123, -18, -13, -97, 8, 67, 29, 105, 83, 27, 69, -73, 5, -121, 102, -16, -111, 115, -32, 63, 111, -127, -53, -81, -106, -68, 47, -74, -89, -15, 87, 48, 112, 100, -83, 103, 1, 9, -116, -25, -99, 115, 67, -3, 10, -79, 16, -93, 93, -79, 18, 52, 26, 111, 10, -94, 34, -24, -77, 2, -63, 104, 98, -69, 86, -52, -118, 111, -109, 108, 79, 58, -17, 81, -41, 52, -93, -95, 107, 123, -87, 85, -69, 1, 83, -105, 43, -49, -118, -63, 104, -77, 79, 98, -128, 33, 58, 107, -25, -53, 36, 62, -27, -41, 69, -118, 100, 45, -63, 110, -45, 56, 83, -105, 37, -92, 119, 109, -5, -103, -10, 89, 16, 86, -84, 125, -36, 99, -71, 116, -48};
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
    msg.setTimeStamp(0.24565257631698822);
    msg.setSource(11395U);
    msg.setSourceEntity(120U);
    msg.setDestination(3271U);
    msg.setDestinationEntity(25U);
    msg.seq = 4199352333U;
    msg.destination.assign("EVESWCFMBBTEDVEZYQTRQGJJMLTWZDHQUGWEHKHSBAMCQNZJDRQANKAHAXXZKDESONNWVZTXWOCBQUUKBRSELJNHBDRMZCBJPWHLPOTXFUMOXWGLNQUXFVJVFOK");
    msg.timeout = 58526U;
    const char tmp_msg_0[] = {72, 54, -105, 31, 65, -34, -7, 86, 118, 45, 118, -58, 78, 91, 76, -91, -113, 58, -64, -55, -91, -74, -103, -13, 107, -52, 34, -106, -59, -44, 81, -104, 112, 31, 3, -25, -95, 24, 49, 80, -72, 30, 44, -29, 44, 96, -57, 116, 100, -26, 125, -101, -104, 84, -85, -103, 118, -58, 117, 73, -9, -80, -43, -75, 110, 0, -26, -92, 60, 79, -11, 22, 126, 65, 25, 67, 38, 30, 105, -9, 39, -65, 9, -31, 18, 86, -28, -81, 3, -30, -11, 109, 125, -56, -98, 2, 99, 57, 122, -60, 94, 96, 31, -47, 69, 90, 104, -94, -58, 99, 54, -90, 27, -73, 11, -32, -107, -68, -2, -9, -79, 30, -95, -61, -2, -74, -57, -91, 69, 24, -38, -88, -1, -18, 39, 82, 53, -12, -26, 40, -5, -112, 51, 60, 67, -68, 55, 37, 112, -24, 24, -61, 45, 68, -98, -29, 3, -109, -49, 34};
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
    msg.setTimeStamp(0.08304306321030175);
    msg.setSource(50406U);
    msg.setSourceEntity(106U);
    msg.setDestination(59833U);
    msg.setDestinationEntity(83U);
    msg.source.assign("UOBRELMCVRVUWNXDUIHWFFDHBHTNSIVJUCAEEEFXDRTFQNLZLKQQWBVAXLKHXVOKYYKSOYFXCDZG");
    const char tmp_msg_0[] = {120, -51, 125, 45, -59, 84, -44, -64, -113, 6, -4, -90, -100, -36, -71, -102, 103, -67, 13, -77, -67, -35, 103, 9, -45, 120, -16, -27, -10, 92, -57, -121, 121, 32, 81, -84, -101, 118, -44, 26, -40, 17, -114, 57, 35, -94, 25, -23, -37, 125, -64, 58, -96, 93, -116, -62, 16, 25, 47, -64, 28, 78, 105, -27, 43, 36, 51, -70, 19, -91, 58, 27, -69, -51, 106, 48, -128, -110, -40, -53, -8, -20, -106, 24, 44, -117, 106, -10, -65, 13, 67, 93, -34, -95, 89, 105, -70, -120, 88, 27, 49, 100, -6, 49, -119, 52, -58, -39, 109, 20, -85, -29, 41, 126, -80, -51, -94, -51, 104, 32, -88, -16, -77, -94, -15, -122, -54, 22, -113};
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
    msg.setTimeStamp(0.17526939278252074);
    msg.setSource(29147U);
    msg.setSourceEntity(6U);
    msg.setDestination(36245U);
    msg.setDestinationEntity(197U);
    msg.source.assign("MUEUQNJOLJBLUJUFQIRFVWHXYSWYOWHMTXDTICCXBCCJLSJFAPIKARHQMNZQMCCAPBVFIAIPDOEZEWDWXDLSKMTTFTPNQEQUJNLFHQAVVXXAZRMQVOTSDJTHTIBOJRZEPDWKGGZKKRZPLNUMPRIHARYNKOZGZTGIESSRFFFWGCFX");
    const char tmp_msg_0[] = {6, 93, 28, -90, 63, -88, 48, -109, -114, -47, -10, -77, 3, -62, -5, -106, -21, -71, 2, 93, 35, 25, 52, -105, -74, -61, -71, 59, 58, -33, -36, -110, -12, 19, -31, 89, 120, 34, 40, -11, 20, -86, 10, -12, -27, -110, 122, 101, 100, -128, 116, -108, -94, -43, 39, 61, -69, 86, 6, -78, 63, 4, -40, 34, 27, -128, 110, 25, 111, 63, -84, 83, 61, -34, -58, -89, 79, 22, -71, 21, -47, -108, 30, 3, 8, 70, 56, -34, -87, -70, 64, -93, -22, -17, -5, 42, 3, -22, 103, -81, -82, -35, -69, -31, -31, 100, -46, 88, -80, 55, -126, -117, 11, 85, 118, 87, -30, -79, -105, -57, -43, -4, -116, -104, -125, -18, 99, -79, 60, 19, 43, 11, -69, -50, 56, 9, -71, -86, 67, -102, 101, 34, -10, -105, -93, -47, -57, -14, 56, -122, 58, -97, 21, 69, -10, -106, 32, -60, -89, -81, 69, 44, -105, -97, -88, 77, -64, 84, 126};
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
    msg.setTimeStamp(0.6469610011952902);
    msg.setSource(17878U);
    msg.setSourceEntity(90U);
    msg.setDestination(64344U);
    msg.setDestinationEntity(242U);
    msg.source.assign("OARMXBWOIRWOYMQWVISNDSNCCKPUXJQZHGWZMESMVSIKAUVHOJEEAPPLQJNCCUSFVNZBBPQWVRGTJCYPMTEOQWCYSFBPWBHMQFEVCRSILWZSEGGQQBAJFIFTJRAORDVHKBYGNLDAZYXEFRAXOKHHYPKKDYLJEHTEPBUIYDZOARGCJGXUIVDNPBTOUINHXZDZIFNMF");
    const char tmp_msg_0[] = {69, -45, -17, -81, 4, 20, -114, 92, -7, -40, -18, 75, -53, 47, -31, 71, 118, -78, 118, -24, -125, 71, 6, -13, 93, -106, 53, 92, 10, 84, 32, -104, 123, -104, -23, -16, 95, -114, 126, -36, 125, 87, 11, -81, 65, -106, -23, 50, -81, -87, 61, 89, 101, -71, 52, -24, -88, 43, 23, 52, -121, 107, 82, -117, -2, -88, 88, -101, 103, -5, 109, -19, -109, -116, -7, -15, -62, -4, 56, 92, -1, 100, 53, -44, 113, -93, 74, 107, -72, -76, 119, -60, 49, 37, -27, 69, -55, -17, -7, 31, 46, 93, 71, -57, 16, -56, 106, 93, 98, 12, -113, 94, -118, -72, 84, -8, 82, 16, 89, 52, 11, 14, -83, 1, 8, 57, -79, -79, -31, 83, -87, 16, -110, 34, 24, -112, 75, -52, -126, -24, -10, -66, -128, -10, -15, -15, 124, -125, -60, -9, -42, -84, 17, -28, 108, 30, 83, -17, 82, 29, 36, -68, 110};
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
    msg.setTimeStamp(0.7308209052685719);
    msg.setSource(59451U);
    msg.setSourceEntity(186U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(250U);
    msg.seq = 4035608423U;
    msg.state = 227U;
    msg.error.assign("JMJLVXEIIMYULPSDRJZOZROPVCDTXPGODROYLTTUIPNHYGVWYEBUYKZKBVLLVETFUSTKHMQJXNGTNNOISTWHSGZDNRCXH");

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
    msg.setTimeStamp(0.5667786308411179);
    msg.setSource(50166U);
    msg.setSourceEntity(109U);
    msg.setDestination(28632U);
    msg.setDestinationEntity(24U);
    msg.seq = 3983301114U;
    msg.state = 125U;
    msg.error.assign("EUBRRDEUXTLQOUGEJMNUOOXYVDTFKWJOPHSBMQDUMTPNLVYCDMVSLAATBGQDQQCXAYSCHBUDOGVYIUPIKYSFEMYNPNZDZPBIOXCMQTGLFAVASSPTSVZXKMIEKBHUCXHPRVZNIRJJKBJCXRIJWSHBTZOWHSFIYITKPQJOHRKMVAUYLMWOWPLRXYNH");

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
    msg.setTimeStamp(0.45136874767399804);
    msg.setSource(35471U);
    msg.setSourceEntity(45U);
    msg.setDestination(3555U);
    msg.setDestinationEntity(196U);
    msg.seq = 3755946750U;
    msg.state = 18U;
    msg.error.assign("IFUWSAJNFGAIHCUFJTGPWXWLHYBOLGLRYBLLQTNQMNVPKKAZPHXZLDZRKLNNRDXRDHWQHKUQXOKVCHKUUNCDRSTOANIXMFBDWHCRGBRGSUBHBBDSKEZIXMOVAFQPEGVTVYHSKFCEXIDTDYYVNTSJMEQRAEQOMZEWDUUOYTWICHPFQYTVIENLXLBZSWAEWOTNUBYFZVJFSFYSCJAJPBQLPDZZU");

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
    msg.setTimeStamp(0.5953154165505422);
    msg.setSource(31974U);
    msg.setSourceEntity(50U);
    msg.setDestination(40978U);
    msg.setDestinationEntity(16U);
    msg.origin.assign("DOSASBMYUETIVGZSHXBMDRMUQFBBSGJCTLZKLXVMTXLVIQNPYGBYNNGPBJWNXPYWTCDNFKPOKAUQQAQPKTAKPQJYJUEPNDHHYYDRIEJXZXIBHRTSEWJWEYZEPFCOZSQBGSVGTJMHHLRWNRGRWCCAIRNXEXMMTFARKOKSGXVASFGFMLHNLHNIORLHYACEUDUSMFCYPHUMJCVKUJUZCTEOBEKQDD");
    msg.text.assign("MFNVXVKSCNISNKZR");

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
    msg.setTimeStamp(0.16665233014992753);
    msg.setSource(57392U);
    msg.setSourceEntity(189U);
    msg.setDestination(42526U);
    msg.setDestinationEntity(78U);
    msg.origin.assign("LGCGXMNFKUWDTWBPSQPAAWABHHHDD");
    msg.text.assign("LMEHMITWEIUUYWOGWQQPXDPXLCAZETONNKSERWLFGHDIFZUCGUNPALMJYBVDMRBDHFWBEIQDDBKWOBVTPEJSHRQFTCRGWGASSTBVPVVODMMXMIHJNLJJGZWCWNLKANGPACNKTLFPUAZKPOQBAXSGCCYFQVNXKROZVYEBYDRFBYUTGMRQOKZVEJUWEJNEYU");

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
    msg.setTimeStamp(0.2381246097599956);
    msg.setSource(63722U);
    msg.setSourceEntity(141U);
    msg.setDestination(54325U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("RRAEFDHEPOZFYYOOSMRPHCPUIQZWXFAVAKNJRRFZFYNKJMYBUTUKJOZZPKBPQGRMZUIBQGFZKIFHITEEGYAMXERIX");
    msg.text.assign("QVCZDWVTSBQ");

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
    msg.setTimeStamp(0.31922470118897606);
    msg.setSource(51619U);
    msg.setSourceEntity(154U);
    msg.setDestination(43787U);
    msg.setDestinationEntity(163U);
    msg.origin.assign("BZLLUWNMLDMFACJNZBDXWWWRYNMMMFNZEUWVPSKIMJVK");
    msg.htime = 0.8680787130867471;
    msg.lat = 0.03079774851403483;
    msg.lon = 0.12042462491398886;
    const char tmp_msg_0[] = {-128, 78, 80, 50, 63, -92, 97, -89, -51, -35, -68, 83, 105, -45, 84, -93, 5, -124, -119, -41, -47, 119, 72, -98, -46, 31, -7, -107, 105, -121, -12, -8, 63, -98, -62, 115, 62, -26, -72, -12, -26, 36, 64, 115, -49, 55, -36, -67, 2, 61, 32, 31, 74, -117, -94, 7, -73, 11, -61, -61, 3, -66, 72, 109, 97, 21, 21, -64, 42, -113, 39, -84, 98, -40, 68, 93, 27, -111, -95, -91, -60, 100, 103, 56, -67, 38, -25, -9, -22, -8, 35, -21, 122, 100, -103, -63, -92, 66, -48, -93, 11, 101, 1, -6, -101, 36, -12, 59, -48, 59, 42, 113, -76, -3, 92, 90, 77, 89, 30, -101, -23, -34, 27, -70, -127, 48, 96, -116, -26, 38, 120, 15, 74, 111, -72, 79, -43, 25, -5, 74, -92, 106, -73, -17, 99, -23, 73, -111, -117, 88, -123, -33, -45, 123, 8, 20, 68, 3, 92, -118, 103, -66, 64, -67, 36, 21, -73, -97, 26, 83, 113, -21, -70, 70, -85, 116, -49, -123, -84, 107, -103, 23, 50, -58, -52, -104, -115, -19, 115, -56, 109, 9, 28, -62, -102, -9, -45, 80, 117, -95, -73, -49, -96, 84, -60, 49, 23, 86, 27, 51, -116, -28, -84, 126, 75, -64, -25, 28, -47, 70, 93, 126, -128, -85, 9, 58, 26, -46, -19, -112, -94, 90, 50, -9, -26, -24, 39, 110};
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
    msg.setTimeStamp(0.9235028143741455);
    msg.setSource(24841U);
    msg.setSourceEntity(206U);
    msg.setDestination(28095U);
    msg.setDestinationEntity(205U);
    msg.origin.assign("ICPWODVYHXCQXCBVZYAUHMNFZLWBHDDUTMKELVSRPVJFRXNLAHPTPMHOUALVRLGOSB");
    msg.htime = 0.7204955089240399;
    msg.lat = 0.651791988368925;
    msg.lon = 0.6181982760098145;
    const char tmp_msg_0[] = {-80, 73, -5, -85, -123, -54, 20, -127, -54, 20, 7, -6, -80, -20, 29, -88, -99, 78, -104, 3, 1, -10, 9, -1, 13, -29, 67, -97, -126, 81, -80, 72, 101, -74, 126, 29, -12, -78, -95, -98, -115, 54, 30, -64, -47, -94, -87, -17, 15, -10, -50, -37, -98, -71, 82, 126, -31, 87, 62, -29, 33, -41, -62, 20, 56, 42, -44, 0, 63, -93, -89, 92, -60, 51, -42, -30, -67, -69, 22, -72, 73, -50, 107, 115, 98, 49, 40, 110, 110, -7, -103, 117, -101, 30, 56, -112, -81, 20, 90, -95, -27, -65};
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
    msg.setTimeStamp(0.689831088595779);
    msg.setSource(36649U);
    msg.setSourceEntity(18U);
    msg.setDestination(14715U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("CHEKRDAHKJZUHYAPDXLTHLGMCRPSQWYFXSTTQVNFOGTTCZAZGOPGWIRXIWVOHJEFCBJJSBFKNAM");
    msg.htime = 0.12190989276168418;
    msg.lat = 0.9989961587810927;
    msg.lon = 0.08030361117614015;
    const char tmp_msg_0[] = {-3, 125, 43, -125, -64, 29, 38, -116, -18, 34, -119, 2, 89, -76, 120, -29, -13, 18, -60, -57, -38, 108, -88, -47, 15, -60, 55, -12, 8, 81, -51, 125, 89, 83, 9, 17, 99, 126, 6, 106, -16, 34, 61, -33, 78, 37, 48, -102, 24, -5, 109, 79, -120, 80, -32, -103, 92, -110, 33, -34, -21, -51, 65, -95, -26, 18, -10, 111, 37, 112, 100, 95, 61, -3, -94, 68, -16, -90, 120, -119, -82, -92, -41, 52, 49, -95, 19, -38, -28, -36, -8, -57, 126, 72, -1, -77, -52, 56, -54, -84, -61, -88, -27, 30, 58, -128, 96, 31, -116, 68, -51, 40, 11, -10, -24, 81, 26, -2, -108, 105, -122, 83, -53, -43, 36, 6, -113, 63, -77, -12, 29, -53, -48, -40, 105, -6, -78, -39, 121, -58, -2, -104, -19, -45, 23, -125, -11, 29, -56, -10, 96, -97, -10, 35, -63, -79, -64, -119, 50, 121, -3, -87, 115, -115, -51, 2, 50, 114, -31, 19, 19, 92, 35, 26, -67, 23, 31, 97, -89, 1, -55, 7, 111, -99, 9, -8, -1, 111, 29, -35, 68, 118, 27, -50, -122, -71, 7, 28, 122, 93, -82, -92, 98, -32, -68, 118, 0, -25, 38, -48, 122, -60, 62, 27, 95, -48};
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
    msg.setTimeStamp(0.4818438145160753);
    msg.setSource(49312U);
    msg.setSourceEntity(215U);
    msg.setDestination(48620U);
    msg.setDestinationEntity(153U);
    msg.req_id = 1523U;
    msg.ttl = 41901U;
    msg.destination.assign("QDTUPBGYOLKBISECSWTWMEIHJQHRHJXFBMCGSLPZYRAXKVLMXDQDNKVZXIWHKHTBLVANHFJLMPYVEBJAYZYNQOFOXSMOLUCGBCEJECXCRWAJETAI");
    const char tmp_msg_0[] = {-81, 104, 94, -72, 55, -120, -50, 125, -123, 15, 29, 58, -15, -103, -1, -113, -46, -59, -16, -34, -109, -75, -25, -89, 111, 48, 19, 4, -31, -127, -63, -17, -118, -78, 120, -121};
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
    msg.setTimeStamp(0.4450733939315309);
    msg.setSource(4351U);
    msg.setSourceEntity(44U);
    msg.setDestination(63841U);
    msg.setDestinationEntity(64U);
    msg.req_id = 36801U;
    msg.ttl = 45408U;
    msg.destination.assign("GCFSYYSDEXVIBNVBQWMUCWMKUJMEWIOCIUZPOPPWSYKGKDTBFSYTWWWROJDARPQOKZLHOJXOGMKZDTXICMZBUNPGIJZTMHYCYGNCLTSDLUKYUBHFCHQTWAEHAQERQRVH");
    const char tmp_msg_0[] = {-54, -86, 13, 118, -95, 125, 49, -44, 54, -56, -110, -117, -18, -103, -65, -84, -25, -73, 7, -112, 4, 65, -60, -95, 31, 109, -66, 85, 8, -32, 79, -108, -78, -67, 119, 78, -44, -80, -107, 117, 119, -23, -68, 113, 2, -108, -24, 96, -127, -18, -87, -7, -4, 36, -124, -61, 23, -2, 64, -105, 108, -96, -7, -115, -55, -117, -72, 69, 100, 121, -123, 94, -78, -26, -54, -111, -54, -42, 118, 58, -76, 25, -14, 122, -71, 124, -88, 54, 80, -11, -82, -21, -111, 27, -119, 88, 54, 117, 87, -62, 105, -56, -92, -3, -37, 95, -49, -81, 38, 50, 37, 69, -126, 13, -107, 41, -39, 38, 73, -11, 34, -23, -36, 103, 47, 47, 74, -19, 125, 43, -56, 78, -44, 58, 120, 21, 53, -10, -51, 80, -115, -126, -119, 94, 105, -92, 120, -108, 81, 25, 83, -52, 89, -36, -125, -4, -64, 1, -37, 72, 13, -47, 36};
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
    msg.setTimeStamp(0.2419452073412668);
    msg.setSource(23579U);
    msg.setSourceEntity(79U);
    msg.setDestination(48665U);
    msg.setDestinationEntity(46U);
    msg.req_id = 40493U;
    msg.ttl = 32450U;
    msg.destination.assign("OHEZVDNHWSNVSAPUIABMNGBCSFYRVIKPOEXFANXWPRFMJNQDYOPWJXBCECWFRZTLBFBNRSXDYFYVLJIGQMUNIQOOJMFORDLNAQIKTUHVXSZLUJSSZTGEFPIQLPKWCBBLBKUQKVUZKIDMYGDXAQYCAMZCUMHHH");
    const char tmp_msg_0[] = {26, 116, -48, 121, -3, 68, -3, -126, -24, 2, -120, 32, -106, -104, 102, 102, 65, -55, -126, 3, 92, -109, -64, -105, 116, 3, -56, -78, 98, -22, 105, 112, -73, -60, -35, 14, 23, 72, -30, -5, 17, 41, -1, 26, -77, 15, -80, -17, -95, -104, -101, -52, 16, -31, 49, 30, -103, 99, -120, 11, -81, 121, -35, -107, -57, 73, -21, -28, -38, 85, 33, -33, 104, 59, 123, 94, -61, 25, 110, 59, -11, 124, -104, 93, -92, 99, 59, 73, -82, 44, 121, 72, -97, 22, -17, 19, 51, -104, -38, -99, -32, 93, 52, -71, 5, 28, 66, -119, 97, -112, 109, -84, -54, -79, 94, -81, -39, -63, 22, -48, -54, -32, -67, 44, -40, 54, 111, 61, 105, -20, 70, 33, 124, 86, 92, -91, 80, -10, -91, 92, -21, -99, -47, -1, 113, 9, 118, -95, 34, -39, 18, 19, -29, 73, 80, -96, 88, -111, -44, 74, -4, 94, 26, -49, -19, -67, 27, 116, 84, -78, -87, -34, 79, -47, 36, -86, -122, 0, 27, 121, 116, -83, -30, -46, -1, -41, 98, 111, -20, -100, 57, 17, 100, -74, 116, -18, -110, -39, -66, -68, -27, 18, -35, -76, -68, 3, -55, -22, 105, -11, 6, 1, 71, 87, 119, -54, -120, -9, -75, 59, 9, -45, -19, -4, -98, 85, -128, 17, 100, -98, 71, 81, 14, -101, 26, -69, -84, 117, 42, -77, -12, 102, 75};
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
    msg.setTimeStamp(0.5192735987459844);
    msg.setSource(10433U);
    msg.setSourceEntity(9U);
    msg.setDestination(19560U);
    msg.setDestinationEntity(181U);
    msg.req_id = 37164U;
    msg.status = 108U;
    msg.text.assign("OOWNIZRUFFWGTFZETFLSWVCWORBAKMQSAQLEIBRVVDUVXREPGEJYIXYLHCYGZ");

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
    msg.setTimeStamp(0.5896337987059765);
    msg.setSource(55411U);
    msg.setSourceEntity(102U);
    msg.setDestination(13730U);
    msg.setDestinationEntity(198U);
    msg.req_id = 7605U;
    msg.status = 70U;
    msg.text.assign("WWZURCLRVZJGRNDNPUKYMCWQSQPSKZYDQBUAQOXDPMZRIONEOGNGVWLRAIJWYFLBMHQPRNJJHVAZKFSHQHEAWISNYQKQKSUQAZIOLGHVTAXMVGRTEVJCXECZUSOYPSHHFYEBADDCZPZYKYVVMARCJVZHONEGPUNPFTIEMOXRTCUFITJKLIBBBXOKWYTUICKWRLTXFWFJLGNAXAW");

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
    msg.setTimeStamp(0.6540996545200307);
    msg.setSource(2684U);
    msg.setSourceEntity(73U);
    msg.setDestination(13446U);
    msg.setDestinationEntity(46U);
    msg.req_id = 55490U;
    msg.status = 79U;
    msg.text.assign("OURJHFJLJEYBKKWJYFCKJHUALEKPYFEACJHPICWOCVPPWEQOXSKEWZVQNDAEEBNFDQWJZBMZKZOPQMKRBXVQVXVTJZOIMQCJEBSGWRXNGRZNHNGSNGYSSLYGYSKVYUQKLZHXATOWPRFQMPRMUGG");

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
    msg.setTimeStamp(0.023551414925957137);
    msg.setSource(15978U);
    msg.setSourceEntity(70U);
    msg.setDestination(9719U);
    msg.setDestinationEntity(58U);
    msg.group_name.assign("JTABWEURXAPVNXHZPODHACCMSIAFDYUJYQHNUHOUUXXFQVTNZZJWWJMYCQZIZYPMRKLQLWPGKLWIBBAZMSLQVELSBUCBNTMUWNHGDVSXDEWKLXVFRTMVHUGSCKAIGRDDXVZUBIGGYHNFVWDMATPMJSQITNFTQDFDELENYJPZPW");
    msg.links = 1658827713U;

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
    msg.setTimeStamp(0.656327973438933);
    msg.setSource(13655U);
    msg.setSourceEntity(138U);
    msg.setDestination(31005U);
    msg.setDestinationEntity(193U);
    msg.group_name.assign("GXXWAODEKTFULJRHYPYDSMUDASNJTZKKQSIDHBMTQDAQLPICWSHFUHZVTIQCFYTVSWGXVNFXWQMGDWEDMDPTAFFLRRPVZXYZMGEARBJVASXDRHKIWBAMTXZE");
    msg.links = 1391333191U;

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
    msg.setTimeStamp(0.4258014471482311);
    msg.setSource(55295U);
    msg.setSourceEntity(101U);
    msg.setDestination(6817U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("ASSOCRGOXCDHZUMKONRDROIPTHDQPFRJSPBFCZKESURPMKYBIUVHMGIABAPLNQVMBCXYZPBYOKODXIEXXMFXEZSTGHURIWSDLRJZVUIMXWSWNGKTKBMOGUJBHGYEHXHVDNWHJVOLHYEVLPYTTAQXWIIQYNEYEZORNFUQZURWFLVQUGLINFWGAPQGONVTRFHCDYCJGJMUPCBSZNJFKKJDPQKZCTALBAVFDLEAYAEVSTFMTIK");
    msg.links = 2714659210U;

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
    msg.setTimeStamp(0.7416052452385665);
    msg.setSource(12560U);
    msg.setSourceEntity(35U);
    msg.setDestination(63479U);
    msg.setDestinationEntity(28U);
    msg.groupname.assign("JMAHHNZUVVOGIZEOHDIGJKGGJLKFCLDAUUCVQTKGOPAQKPDDUHSCFKSZZEXNRSQIBFKAVHYMOYKRCHFZFWQTQRQJAMCHCXGACYZDFEDLFXTKMUONQESYABLVAVRLSDCHAPXSGVRVDTMCGZHIPTOMIWXWYWIZWUKVBELSXTJYVARFJMPZIOUTSIUTNWPUDLQMPJIFNZBNWREMCQK");
    msg.action = 116U;
    msg.grouplist.assign("ABROCUJRTCVJXXQFFWRPAV");

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
    msg.setTimeStamp(0.03109990580176769);
    msg.setSource(26664U);
    msg.setSourceEntity(25U);
    msg.setDestination(5581U);
    msg.setDestinationEntity(162U);
    msg.groupname.assign("OMQLAREKZNJKKGCACJNIDMIFKGMYEULUSBSCOGQBWURSTPTBCDENAMHXCXAMQHFAGLWHZIDNSIUEQYBWTSBYVEUXWKZTDRICFLEDRPNRAZWYGLAFVWUIENVKUTWVODFQMXHWXNWSTNFMKGRCZVEPKPLIHXYLFOYRMRVHJATWOOAPCQAQPXCYECIPNFBYFMOSTVLBHDBZQMZQGZNJJ");
    msg.action = 0U;
    msg.grouplist.assign("ONYIEJGHDLRAXXHHIZBVISEMRVZLUBIXTKGTLBHDQCCVQLCYNUJJNMSHTFMFJKSQYGWTARGYPDBFWFPGXHBUZTXOGFUSJQPESOXVXTNKSHXWTFMUULIQCFPSXURGYUCJPNHWRJKYCVZWZCEJQVPEENWRKVNLAQS");

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
    msg.setTimeStamp(0.758617055365556);
    msg.setSource(60714U);
    msg.setSourceEntity(121U);
    msg.setDestination(32792U);
    msg.setDestinationEntity(186U);
    msg.groupname.assign("EDHSUIMGZDTXXZOUUUWSADFBALPHBFFINMQPGARKHERFLVZRCVCY");
    msg.action = 58U;
    msg.grouplist.assign("NZXDIJXZQZPTBBNSOBQSWFVLEFGXVLHBVRWMQETCWAVXJEALEBBMALTCUCRXCNNENSYBGUSOWAFPXFCNJPNSNUDKUAJVXHXEKGFYIURIHOJDYEWGLAZBYPTUCWQYYKMEROKYIXZRJOAUVDKZBSTQHHPHSNTJOHFILKXWNRCFWPVIDPOFPCZIIMECUGTBDGFZUHOLOESYRJSZQFWQZVGQRCGKI");

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
    msg.setTimeStamp(0.2871224962057619);
    msg.setSource(16356U);
    msg.setSourceEntity(61U);
    msg.setDestination(797U);
    msg.setDestinationEntity(222U);
    msg.id = 228U;
    msg.range = 0.08553401318616294;

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
    msg.setTimeStamp(0.6372723471621972);
    msg.setSource(62131U);
    msg.setSourceEntity(0U);
    msg.setDestination(57548U);
    msg.setDestinationEntity(132U);
    msg.id = 232U;
    msg.range = 0.3875197795744244;

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
    msg.setTimeStamp(0.8211015833959759);
    msg.setSource(64811U);
    msg.setSourceEntity(11U);
    msg.setDestination(12233U);
    msg.setDestinationEntity(66U);
    msg.id = 237U;
    msg.range = 0.4541371922512092;

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
    msg.setTimeStamp(0.6986069167787535);
    msg.setSource(56293U);
    msg.setSourceEntity(42U);
    msg.setDestination(49904U);
    msg.setDestinationEntity(88U);
    msg.beacon.assign("KRSNDIFZXKVWFVEMQQMCBJXLZBEYGMJTRIHMPYWZAWKPWZCRQRMIOEFUHMIHYYHPDQIPPWWKAVUMLFSOVCBEKNAIHXAUDOUHQW");
    msg.lat = 0.6832868662674161;
    msg.lon = 0.4770767159503274;
    msg.depth = 0.8591285967424808;
    msg.query_channel = 77U;
    msg.reply_channel = 98U;
    msg.transponder_delay = 231U;

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
    msg.setTimeStamp(0.867729821080625);
    msg.setSource(34911U);
    msg.setSourceEntity(118U);
    msg.setDestination(60355U);
    msg.setDestinationEntity(173U);
    msg.beacon.assign("WPCXKGGSLVYTBEQFJXLYXTEUHZGOMASRQAFGDZOEDVHWFSQUJDRUHUABRNNBDHIRWOMRAJBQBGNEYZYLJGSLELDDAGXKPYCOMJMIPWZXAANQWIKQCRPETFILIJIUFCYWKVKYZZJSBVMCKUVJWSXQRTQDAMKKVYLBRYFOCHTOBDNLBTUSMNTOFXBUHXLKGNKZGTSWUWWCDCPAPHSRSFIIMVMZHEEXPHLDFQVAEVZTHPONPFYNPJOI");
    msg.lat = 0.9239000160433644;
    msg.lon = 0.5810692395145459;
    msg.depth = 0.7947742630679602;
    msg.query_channel = 235U;
    msg.reply_channel = 34U;
    msg.transponder_delay = 159U;

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
    msg.setTimeStamp(0.9637281883769914);
    msg.setSource(43154U);
    msg.setSourceEntity(18U);
    msg.setDestination(51262U);
    msg.setDestinationEntity(219U);
    msg.beacon.assign("JCBDLODGEWTOCEGNADSEXKOBDATMPHZIQMNQRABHEBGVLXUDMMXAGLVKTXZKSQVEU");
    msg.lat = 0.2848373582691546;
    msg.lon = 0.17255971863201103;
    msg.depth = 0.869754587955402;
    msg.query_channel = 142U;
    msg.reply_channel = 216U;
    msg.transponder_delay = 169U;

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
    msg.setTimeStamp(0.9951000110581214);
    msg.setSource(51451U);
    msg.setSourceEntity(71U);
    msg.setDestination(37727U);
    msg.setDestinationEntity(141U);
    msg.op = 23U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WNJFLJLPCEMGBTBLJMVJVKNCPOLBUAIGWWFMIRERRGHQZUMQVNIHSAJOXVVJQSALOFWISJXKAYTWGFASVQOKCCCSYXASHYFWKZHWPNLYQZXDNHMLZBFTBZDLUDHXVREMSSNGEGCWVONTDFITPUAUUHEOZGTFQMOSQCCDNTOEJTYRACICQPUDBDWINLXUTMSRIZPOBKKRAXPYBYHKDRRGZHZJDPDIEPQJUXYFKKXEBEVV");
    tmp_msg_0.lat = 0.2501584737741587;
    tmp_msg_0.lon = 0.08966932069540534;
    tmp_msg_0.depth = 0.14581142026457772;
    tmp_msg_0.query_channel = 38U;
    tmp_msg_0.reply_channel = 3U;
    tmp_msg_0.transponder_delay = 23U;
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
    msg.setTimeStamp(0.41070726136609115);
    msg.setSource(12748U);
    msg.setSourceEntity(227U);
    msg.setDestination(4148U);
    msg.setDestinationEntity(107U);
    msg.op = 239U;

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
    msg.setTimeStamp(0.030914804406090957);
    msg.setSource(15581U);
    msg.setSourceEntity(67U);
    msg.setDestination(2409U);
    msg.setDestinationEntity(205U);
    msg.op = 252U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JPHGHAZXSWQJFTGLYIQROPYHXBVJIBAWXMGSKQSJUPNTTZWOJHPWZIBGYLBNKHFEONDVFVFWXJDGGQREWJNCLDUY");
    tmp_msg_0.lat = 0.897123771660346;
    tmp_msg_0.lon = 0.9140827135413188;
    tmp_msg_0.depth = 0.6446626404685345;
    tmp_msg_0.query_channel = 109U;
    tmp_msg_0.reply_channel = 1U;
    tmp_msg_0.transponder_delay = 254U;
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
    msg.setTimeStamp(0.6015785338849986);
    msg.setSource(370U);
    msg.setSourceEntity(8U);
    msg.setDestination(25311U);
    msg.setDestinationEntity(161U);
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 155U;
    tmp_msg_0.longain = 0.3707428009304984;
    tmp_msg_0.latgain = 0.7066434135773777;
    tmp_msg_0.bondthick = 1352209893U;
    tmp_msg_0.leadgain = 0.366525497947754;
    tmp_msg_0.deconflgain = 0.3840258727493341;
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
    msg.setTimeStamp(0.5569597101797076);
    msg.setSource(15398U);
    msg.setSourceEntity(135U);
    msg.setDestination(51784U);
    msg.setDestinationEntity(227U);
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 16523U;
    tmp_msg_0.lat = 0.440092342377451;
    tmp_msg_0.lon = 0.42824633456633043;
    tmp_msg_0.z = 0.12563237691891183;
    tmp_msg_0.z_units = 57U;
    tmp_msg_0.pitch = 0.36008603933547256;
    tmp_msg_0.amplitude = 0.7966839654092991;
    tmp_msg_0.duration = 51753U;
    tmp_msg_0.speed = 0.9070091520521538;
    tmp_msg_0.speed_units = 79U;
    tmp_msg_0.radius = 0.26778674647428724;
    tmp_msg_0.direction = 245U;
    tmp_msg_0.custom.assign("IGFEOOTVNTBEWHSRLDAUYJPMLMERYQQFQJSFAGKONYGPVKIZRRGDSXVGGENXUKVIKUCPWBPMHNFHNTXMFEJCKYRGFWVIBTQOTQSPEYOR");
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
    msg.setTimeStamp(0.13449077194378056);
    msg.setSource(11414U);
    msg.setSourceEntity(149U);
    msg.setDestination(26564U);
    msg.setDestinationEntity(13U);
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.548948872098342);
    msg.setSource(23653U);
    msg.setSourceEntity(144U);
    msg.setDestination(64316U);
    msg.setDestinationEntity(221U);
    msg.op = 197U;
    msg.system.assign("CMZAFABFTPKKRUQCGGBPDVVSHVJPYKAUOTAPREIJZQKDRSFKGCNGNBDVMWSOJEWJAFWUAHYQORPXXXWFTCKDIGUSZELT");
    msg.range = 0.0739845673607602;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 191U;
    tmp_msg_0.list.assign("MGLFCJGRGUNROXJHGGRZZIDWQUMEZTZBXNHDHISWIICNDHKFSFRAWVSONAGXVKLNGCOHCBEUYOZPGBJY");
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
    msg.setTimeStamp(0.8950652117046859);
    msg.setSource(21066U);
    msg.setSourceEntity(180U);
    msg.setDestination(17167U);
    msg.setDestinationEntity(7U);
    msg.op = 218U;
    msg.system.assign("XPENEPIYYDWVYXNOUUVWJCUSOEADHRCBWQIIIQLWMZGRCWENKHHMRWYGTDZRKGMOEFZNAYFCGBFKFDFPUACRRNTHZUOPEIUSNNJMGKVCQV");
    msg.range = 0.7108922155584828;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 31858U;
    tmp_msg_0.lat = 0.6968600818529643;
    tmp_msg_0.lon = 0.5225123690902127;
    tmp_msg_0.z = 0.3105546799647868;
    tmp_msg_0.z_units = 192U;
    tmp_msg_0.pitch = 0.4248270487257886;
    tmp_msg_0.amplitude = 0.49248701559058095;
    tmp_msg_0.duration = 575U;
    tmp_msg_0.speed = 0.6971474031161409;
    tmp_msg_0.speed_units = 24U;
    tmp_msg_0.radius = 0.25114957924070125;
    tmp_msg_0.direction = 30U;
    tmp_msg_0.custom.assign("DTHCRZVYHOFYQUDNSUXRLTRHYMEXGVKFYPEUUVN");
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
    msg.setTimeStamp(0.6608912782384774);
    msg.setSource(11416U);
    msg.setSourceEntity(200U);
    msg.setDestination(47058U);
    msg.setDestinationEntity(21U);
    msg.op = 162U;
    msg.system.assign("BBRGLVTUZXAMMAXEVPLLDITSJUYMYRJKRUNBQOGIKYQRFLAPVDFFXAUJLCHRJGPDYECQZWMCYWCVPVEAFHMAVSLPJTKFICQHOWIMUCSPKBNTTTVOSFUFCOUEPGHGIWFXBDHLJRZKKTCXAZOWQHVWOMQRGHDNDGZJIWBEYOLMQRXPXWUEZAHGSZNBJNYMQASDJR");
    msg.range = 0.350300963079891;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("YAYBAMVSOHGKFRZJTSQKRQWUDUHQFCBFMEDJXZMCPVEZYNWUBCDXSQPROPGVNOYJJLPTAFMFXOGICMZCMA");
    tmp_msg_0.type = 74U;
    tmp_msg_0.op = 180U;
    tmp_msg_0.group_name.assign("OCRWHLSDXROEZZBISQQGIHRAINUUIPQAARBZRVZEONJDSLNEBEDFFVAFZWIKZEBNDOXAMRKWDTTORHPPXDSVSHLSPWVNSDQ");
    tmp_msg_0.plan_id.assign("PANGRZJYZTHLCX");
    tmp_msg_0.description.assign("GTCLPQHBCKDZECLADVHYVTHBK");
    tmp_msg_0.reference_frame = 30U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 29525U;
    tmp_tmp_msg_0_0.off_x = 0.2632895982804271;
    tmp_tmp_msg_0_0.off_y = 0.04871002649293943;
    tmp_tmp_msg_0_0.off_z = 0.3612933294140016;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.591567694557032;
    tmp_msg_0.leader_speed_min = 0.03327287261445011;
    tmp_msg_0.leader_speed_max = 0.6346980543906814;
    tmp_msg_0.leader_alt_min = 0.5844069322204495;
    tmp_msg_0.leader_alt_max = 0.23133804215654397;
    tmp_msg_0.pos_sim_err_lim = 0.3096217652586237;
    tmp_msg_0.pos_sim_err_wrn = 0.724844930524563;
    tmp_msg_0.pos_sim_err_timeout = 50015U;
    tmp_msg_0.converg_max = 0.9108961531496674;
    tmp_msg_0.converg_timeout = 44707U;
    tmp_msg_0.comms_timeout = 56965U;
    tmp_msg_0.turb_lim = 0.6274392018596149;
    tmp_msg_0.custom.assign("FEVAYCDMUGYASYAXOZFPFROXUNZBJNFGIZXKIPZEOJEOPLBVULMWIGMTEZIAHTWFRXJXMOTUJBTUHXPWKSRCQTQQECVWZJCYKALSCDQUXLGDVDNBDSTYRTKABILODOSJHMGVDHIBBRGRQQXDGNPRMMWGVWUCGLEILNRAHYGJOTDBFWFMFULKVXTIQVKVCEMNQMKKSDOYQSAHNNBJHUIWYLWJNRKVNEHQPYISPY");
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
    msg.setTimeStamp(0.4317016272832518);
    msg.setSource(36981U);
    msg.setSourceEntity(114U);
    msg.setDestination(53440U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.7380962835346957);
    msg.setSource(6563U);
    msg.setSourceEntity(80U);
    msg.setDestination(5586U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.7156638326274891);
    msg.setSource(39968U);
    msg.setSourceEntity(122U);
    msg.setDestination(30046U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.6870589737167918);
    msg.setSource(948U);
    msg.setSourceEntity(75U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(29U);
    msg.list.assign("ONYIPVTYXXSQJMCGWMCAJUERFDDVCTXWSKDRTZJHAVYTXLNZYLYHKBAMELPOBGKYMQKNTWSDBYIOGNHQTQAVWGKIZZCGUKSBAASSAGOMJXBVVSJKHDEROGD");

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
    msg.setTimeStamp(0.6705913406939736);
    msg.setSource(54217U);
    msg.setSourceEntity(120U);
    msg.setDestination(51362U);
    msg.setDestinationEntity(36U);
    msg.list.assign("URLDHWLKTINRJFAFYALVGJUP");

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
    msg.setTimeStamp(0.6195588368238537);
    msg.setSource(49531U);
    msg.setSourceEntity(101U);
    msg.setDestination(10846U);
    msg.setDestinationEntity(250U);
    msg.list.assign("DQZHAFLHCMGLDBKUCVVOEVGORCWIPXXCKYMSINSXXFNEXELQMZRAQKOFJAOEWVCPYILGSUSEYOJHDTMCRWIWHYJJQSNLTQZSNHZNARPPHYAENZYKMFNTRBUEASVPO");

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
    msg.setTimeStamp(0.990972203830359);
    msg.setSource(9252U);
    msg.setSourceEntity(40U);
    msg.setDestination(29299U);
    msg.setDestinationEntity(53U);
    msg.value = 19500;

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
    msg.setTimeStamp(0.10124134022436448);
    msg.setSource(39614U);
    msg.setSourceEntity(39U);
    msg.setDestination(56470U);
    msg.setDestinationEntity(225U);
    msg.value = -28325;

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
    msg.setTimeStamp(0.5325753987116748);
    msg.setSource(32459U);
    msg.setSourceEntity(129U);
    msg.setDestination(41930U);
    msg.setDestinationEntity(63U);
    msg.value = -4790;

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
    msg.setTimeStamp(0.6941720137085144);
    msg.setSource(4709U);
    msg.setSourceEntity(169U);
    msg.setDestination(59701U);
    msg.setDestinationEntity(142U);
    msg.value = 0.9939489550210339;

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
    msg.setTimeStamp(0.4909691441529589);
    msg.setSource(32687U);
    msg.setSourceEntity(48U);
    msg.setDestination(58847U);
    msg.setDestinationEntity(173U);
    msg.value = 0.5349282675670567;

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
    msg.setTimeStamp(0.7174249762781391);
    msg.setSource(30422U);
    msg.setSourceEntity(207U);
    msg.setDestination(204U);
    msg.setDestinationEntity(127U);
    msg.value = 0.8285208528944391;

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
    msg.setTimeStamp(0.9451587039890861);
    msg.setSource(15668U);
    msg.setSourceEntity(194U);
    msg.setDestination(30394U);
    msg.setDestinationEntity(212U);
    msg.value = 0.30744065462700576;

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
    msg.setTimeStamp(0.8664128830533162);
    msg.setSource(5774U);
    msg.setSourceEntity(0U);
    msg.setDestination(49810U);
    msg.setDestinationEntity(159U);
    msg.value = 0.8084523926354465;

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
    msg.setTimeStamp(0.8579184451916845);
    msg.setSource(48343U);
    msg.setSourceEntity(180U);
    msg.setDestination(30050U);
    msg.setDestinationEntity(81U);
    msg.value = 0.4247341359975487;

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
    msg.setTimeStamp(0.2849875681714158);
    msg.setSource(34171U);
    msg.setSourceEntity(8U);
    msg.setDestination(49937U);
    msg.setDestinationEntity(175U);
    msg.validity = 18727U;
    msg.type = 178U;
    msg.utc_year = 55398U;
    msg.utc_month = 136U;
    msg.utc_day = 214U;
    msg.utc_time = 0.021863611491275137;
    msg.lat = 0.956599598624402;
    msg.lon = 0.39505284461117707;
    msg.height = 0.1295048827587434;
    msg.satellites = 145U;
    msg.cog = 0.16976436483442148;
    msg.sog = 0.29830166920850676;
    msg.hdop = 0.42857477005918043;
    msg.vdop = 0.9269019331985227;
    msg.hacc = 0.6087552494832202;
    msg.vacc = 0.2564715167034527;

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
    msg.setTimeStamp(0.8594748621580857);
    msg.setSource(64254U);
    msg.setSourceEntity(214U);
    msg.setDestination(27232U);
    msg.setDestinationEntity(116U);
    msg.validity = 53589U;
    msg.type = 224U;
    msg.utc_year = 8917U;
    msg.utc_month = 145U;
    msg.utc_day = 122U;
    msg.utc_time = 0.39972115636945915;
    msg.lat = 0.6433964642387249;
    msg.lon = 0.0082723483918552;
    msg.height = 0.9014640219747009;
    msg.satellites = 19U;
    msg.cog = 0.1862633266556588;
    msg.sog = 0.6375127889481831;
    msg.hdop = 0.32927221775391147;
    msg.vdop = 0.2354305555424775;
    msg.hacc = 0.024566902183076;
    msg.vacc = 0.90331176928424;

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
    msg.setTimeStamp(0.5696513364141572);
    msg.setSource(45841U);
    msg.setSourceEntity(110U);
    msg.setDestination(22462U);
    msg.setDestinationEntity(38U);
    msg.validity = 62560U;
    msg.type = 170U;
    msg.utc_year = 50456U;
    msg.utc_month = 170U;
    msg.utc_day = 205U;
    msg.utc_time = 0.5966924189707927;
    msg.lat = 0.7342021484679885;
    msg.lon = 0.9589912680973312;
    msg.height = 0.331871223951797;
    msg.satellites = 41U;
    msg.cog = 0.7332661228995258;
    msg.sog = 0.08948455061154625;
    msg.hdop = 0.9670183449337159;
    msg.vdop = 0.047451534384108984;
    msg.hacc = 0.30738827441671346;
    msg.vacc = 0.3447161279294484;

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
    msg.setTimeStamp(0.20502627446461896);
    msg.setSource(16991U);
    msg.setSourceEntity(195U);
    msg.setDestination(44501U);
    msg.setDestinationEntity(29U);
    msg.time = 0.4618039800324245;
    msg.phi = 0.4440757831277;
    msg.theta = 0.3909784748188222;
    msg.psi = 0.22211773342354668;
    msg.psi_magnetic = 0.11625654420273557;

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
    msg.setTimeStamp(0.08913488879927445);
    msg.setSource(43949U);
    msg.setSourceEntity(34U);
    msg.setDestination(59789U);
    msg.setDestinationEntity(145U);
    msg.time = 0.810867200725066;
    msg.phi = 0.6783867718664947;
    msg.theta = 0.6051165681764286;
    msg.psi = 0.6145626568779393;
    msg.psi_magnetic = 0.6459549987416113;

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
    msg.setTimeStamp(0.4635025171256051);
    msg.setSource(32549U);
    msg.setSourceEntity(244U);
    msg.setDestination(33845U);
    msg.setDestinationEntity(42U);
    msg.time = 0.2023186860855739;
    msg.phi = 0.16342051196277763;
    msg.theta = 0.6075019130214551;
    msg.psi = 0.12762029832628252;
    msg.psi_magnetic = 0.49828835337603683;

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
    msg.setTimeStamp(0.12100942135698867);
    msg.setSource(34794U);
    msg.setSourceEntity(236U);
    msg.setDestination(30690U);
    msg.setDestinationEntity(24U);
    msg.time = 0.4366582112887134;
    msg.x = 0.621862793231421;
    msg.y = 0.2638870208910199;
    msg.z = 0.9875142018662691;
    msg.timestep = 0.990083353163696;

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
    msg.setTimeStamp(0.20178281112743557);
    msg.setSource(34259U);
    msg.setSourceEntity(114U);
    msg.setDestination(55082U);
    msg.setDestinationEntity(163U);
    msg.time = 0.6383246859998846;
    msg.x = 0.2929475740466295;
    msg.y = 0.47119357201124756;
    msg.z = 0.7050917413971395;
    msg.timestep = 0.993528536868645;

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
    msg.setTimeStamp(0.7521412478716651);
    msg.setSource(63865U);
    msg.setSourceEntity(90U);
    msg.setDestination(10362U);
    msg.setDestinationEntity(79U);
    msg.time = 0.1304355179534451;
    msg.x = 0.43537215161325493;
    msg.y = 0.8526466235856078;
    msg.z = 0.9436895139553201;
    msg.timestep = 0.9362945602336314;

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
    msg.setTimeStamp(0.7794228956731922);
    msg.setSource(38872U);
    msg.setSourceEntity(57U);
    msg.setDestination(24236U);
    msg.setDestinationEntity(120U);
    msg.time = 0.29191910373691665;
    msg.x = 0.9259239489831601;
    msg.y = 0.5458163424462109;
    msg.z = 0.5416536561297695;

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
    msg.setTimeStamp(0.5349958967100183);
    msg.setSource(47668U);
    msg.setSourceEntity(102U);
    msg.setDestination(13928U);
    msg.setDestinationEntity(123U);
    msg.time = 0.9844240633250139;
    msg.x = 0.9825477556402573;
    msg.y = 0.5355718002365415;
    msg.z = 0.1186076843343985;

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
    msg.setTimeStamp(0.8228557777288542);
    msg.setSource(11837U);
    msg.setSourceEntity(144U);
    msg.setDestination(25101U);
    msg.setDestinationEntity(131U);
    msg.time = 0.5442797366295558;
    msg.x = 0.5436642342018051;
    msg.y = 0.8585901850341952;
    msg.z = 0.415522882573394;

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
    msg.setTimeStamp(0.08140635101368987);
    msg.setSource(20589U);
    msg.setSourceEntity(95U);
    msg.setDestination(30695U);
    msg.setDestinationEntity(83U);
    msg.time = 0.4785151183732813;
    msg.x = 0.32133298197929294;
    msg.y = 0.3556056566840149;
    msg.z = 0.3073524607446496;

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
    msg.setTimeStamp(0.031371933357922765);
    msg.setSource(11574U);
    msg.setSourceEntity(248U);
    msg.setDestination(15238U);
    msg.setDestinationEntity(112U);
    msg.time = 0.458212234075698;
    msg.x = 0.7319263610906024;
    msg.y = 0.7130323241889555;
    msg.z = 0.1014130542248417;

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
    msg.setTimeStamp(0.07690524110465602);
    msg.setSource(34872U);
    msg.setSourceEntity(155U);
    msg.setDestination(50715U);
    msg.setDestinationEntity(64U);
    msg.time = 0.15441662739142448;
    msg.x = 0.11255862280424433;
    msg.y = 0.7364522494832285;
    msg.z = 0.10770615468369915;

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
    msg.setTimeStamp(0.6576788068539696);
    msg.setSource(32646U);
    msg.setSourceEntity(216U);
    msg.setDestination(11688U);
    msg.setDestinationEntity(15U);
    msg.time = 0.5516646875070959;
    msg.x = 0.9107168970386867;
    msg.y = 0.19497403169904215;
    msg.z = 0.20015548393680183;

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
    msg.setTimeStamp(0.5645295687036145);
    msg.setSource(43298U);
    msg.setSourceEntity(21U);
    msg.setDestination(57443U);
    msg.setDestinationEntity(106U);
    msg.time = 0.310637080967484;
    msg.x = 0.1270104931565318;
    msg.y = 0.8667287005599739;
    msg.z = 0.6471364628277535;

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
    msg.setTimeStamp(0.6535520847605337);
    msg.setSource(16505U);
    msg.setSourceEntity(83U);
    msg.setDestination(5267U);
    msg.setDestinationEntity(41U);
    msg.time = 0.6332173803394842;
    msg.x = 0.5912243293103633;
    msg.y = 0.6266605588794187;
    msg.z = 0.08576340110787983;

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
    msg.setTimeStamp(0.7637841766140371);
    msg.setSource(51587U);
    msg.setSourceEntity(20U);
    msg.setDestination(56773U);
    msg.setDestinationEntity(56U);
    msg.validity = 192U;
    msg.x = 0.9244806292398421;
    msg.y = 0.3398958076978852;
    msg.z = 0.9987499949519215;

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
    msg.setTimeStamp(0.5918837545141954);
    msg.setSource(36653U);
    msg.setSourceEntity(3U);
    msg.setDestination(58736U);
    msg.setDestinationEntity(36U);
    msg.validity = 162U;
    msg.x = 0.3258190692358591;
    msg.y = 0.6091653982182721;
    msg.z = 0.1894172656611559;

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
    msg.setTimeStamp(0.53259082972232);
    msg.setSource(5831U);
    msg.setSourceEntity(191U);
    msg.setDestination(44420U);
    msg.setDestinationEntity(212U);
    msg.validity = 37U;
    msg.x = 0.7658712485282998;
    msg.y = 0.17605633942946886;
    msg.z = 0.19751639960300282;

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
    msg.setTimeStamp(0.04035628018997417);
    msg.setSource(2768U);
    msg.setSourceEntity(95U);
    msg.setDestination(24067U);
    msg.setDestinationEntity(119U);
    msg.validity = 40U;
    msg.x = 0.36369791227999315;
    msg.y = 0.1418745183188691;
    msg.z = 0.11593391890213889;

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
    msg.setTimeStamp(0.9868535354071348);
    msg.setSource(59080U);
    msg.setSourceEntity(155U);
    msg.setDestination(36134U);
    msg.setDestinationEntity(42U);
    msg.validity = 224U;
    msg.x = 0.7136882775258412;
    msg.y = 0.23556404853120638;
    msg.z = 0.6049066183485994;

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
    msg.setTimeStamp(0.7196658566572595);
    msg.setSource(11242U);
    msg.setSourceEntity(224U);
    msg.setDestination(3159U);
    msg.setDestinationEntity(195U);
    msg.validity = 191U;
    msg.x = 0.0020941593550285464;
    msg.y = 0.5831502158782651;
    msg.z = 0.26610675205192547;

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
    msg.setTimeStamp(0.5618589116309484);
    msg.setSource(44142U);
    msg.setSourceEntity(210U);
    msg.setDestination(47214U);
    msg.setDestinationEntity(8U);
    msg.time = 0.8907840340715601;
    msg.x = 0.707420853912355;
    msg.y = 0.7147750620019256;
    msg.z = 0.2200277183563516;

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
    msg.setTimeStamp(0.17174099206894877);
    msg.setSource(32297U);
    msg.setSourceEntity(166U);
    msg.setDestination(33857U);
    msg.setDestinationEntity(0U);
    msg.time = 0.3126219271041064;
    msg.x = 0.8215949991537447;
    msg.y = 0.31677237072955744;
    msg.z = 0.021601793620761867;

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
    msg.setTimeStamp(0.33915796529915176);
    msg.setSource(57042U);
    msg.setSourceEntity(197U);
    msg.setDestination(46855U);
    msg.setDestinationEntity(99U);
    msg.time = 0.8656835960012663;
    msg.x = 0.4695065789688515;
    msg.y = 0.9808293658714671;
    msg.z = 0.40672274364205874;

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
    msg.setTimeStamp(0.7475786289738529);
    msg.setSource(29716U);
    msg.setSourceEntity(72U);
    msg.setDestination(10927U);
    msg.setDestinationEntity(183U);
    msg.validity = 221U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4802628521952119;
    tmp_msg_0.y = 0.15594075962510057;
    tmp_msg_0.z = 0.7484497912036526;
    tmp_msg_0.phi = 0.7678981743771682;
    tmp_msg_0.theta = 0.5023206179878171;
    tmp_msg_0.psi = 0.1446055916876544;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.45796033819454185;

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
    msg.setTimeStamp(0.9498113535069822);
    msg.setSource(1113U);
    msg.setSourceEntity(185U);
    msg.setDestination(54247U);
    msg.setDestinationEntity(190U);
    msg.validity = 133U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7923561565874966;
    tmp_msg_0.beam_height = 0.3373042544065933;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.2485836746295491;

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
    msg.setTimeStamp(0.621184945609936);
    msg.setSource(19647U);
    msg.setSourceEntity(194U);
    msg.setDestination(14393U);
    msg.setDestinationEntity(121U);
    msg.validity = 73U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.57885105248582;
    tmp_msg_0.y = 0.3322098793544759;
    tmp_msg_0.z = 0.3712293804101917;
    tmp_msg_0.phi = 0.017483251756709173;
    tmp_msg_0.theta = 0.3919139639276913;
    tmp_msg_0.psi = 0.9151145856190289;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.2793193932520526;

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
    msg.setTimeStamp(0.25348705586069076);
    msg.setSource(11186U);
    msg.setSourceEntity(159U);
    msg.setDestination(54428U);
    msg.setDestinationEntity(242U);
    msg.value = 0.07191474360283856;

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
    msg.setTimeStamp(0.4451357199369349);
    msg.setSource(26798U);
    msg.setSourceEntity(95U);
    msg.setDestination(44755U);
    msg.setDestinationEntity(101U);
    msg.value = 0.7977146294357488;

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
    msg.setTimeStamp(0.7294546883057867);
    msg.setSource(26930U);
    msg.setSourceEntity(248U);
    msg.setDestination(12651U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9040190029585287;

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
    msg.setTimeStamp(0.3935196878467334);
    msg.setSource(60717U);
    msg.setSourceEntity(160U);
    msg.setDestination(7371U);
    msg.setDestinationEntity(188U);
    msg.value = 0.1934140761161096;

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
    msg.setTimeStamp(0.46807458376491307);
    msg.setSource(30698U);
    msg.setSourceEntity(58U);
    msg.setDestination(45097U);
    msg.setDestinationEntity(127U);
    msg.value = 0.2557488104292658;

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
    msg.setTimeStamp(0.6651360604663766);
    msg.setSource(8566U);
    msg.setSourceEntity(13U);
    msg.setDestination(18513U);
    msg.setDestinationEntity(244U);
    msg.value = 0.32168297333603835;

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
    msg.setTimeStamp(0.849460594068898);
    msg.setSource(56301U);
    msg.setSourceEntity(128U);
    msg.setDestination(12015U);
    msg.setDestinationEntity(176U);
    msg.value = 0.4851857806487163;

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
    msg.setTimeStamp(0.92267521758901);
    msg.setSource(22225U);
    msg.setSourceEntity(240U);
    msg.setDestination(11822U);
    msg.setDestinationEntity(45U);
    msg.value = 0.2186499657784603;

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
    msg.setTimeStamp(0.375076594484388);
    msg.setSource(65207U);
    msg.setSourceEntity(25U);
    msg.setDestination(46862U);
    msg.setDestinationEntity(231U);
    msg.value = 0.7974525910521524;

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
    msg.setTimeStamp(0.6653282118859459);
    msg.setSource(63866U);
    msg.setSourceEntity(228U);
    msg.setDestination(13604U);
    msg.setDestinationEntity(181U);
    msg.value = 0.8778337708671067;

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
    msg.setTimeStamp(0.3494052021559093);
    msg.setSource(62415U);
    msg.setSourceEntity(121U);
    msg.setDestination(13037U);
    msg.setDestinationEntity(126U);
    msg.value = 0.21740529603758063;

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
    msg.setTimeStamp(0.43642003112681305);
    msg.setSource(37682U);
    msg.setSourceEntity(177U);
    msg.setDestination(10228U);
    msg.setDestinationEntity(219U);
    msg.value = 0.6133466358032278;

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
    msg.setTimeStamp(0.8216206588197577);
    msg.setSource(53911U);
    msg.setSourceEntity(72U);
    msg.setDestination(17570U);
    msg.setDestinationEntity(59U);
    msg.value = 0.3250974435579044;

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
    msg.setTimeStamp(0.9120279001778072);
    msg.setSource(10554U);
    msg.setSourceEntity(188U);
    msg.setDestination(53570U);
    msg.setDestinationEntity(158U);
    msg.value = 0.5114018166971694;

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
    msg.setTimeStamp(0.14786871653369849);
    msg.setSource(5578U);
    msg.setSourceEntity(139U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(188U);
    msg.value = 0.7303636235082166;

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
    msg.setTimeStamp(0.2167106787654255);
    msg.setSource(42607U);
    msg.setSourceEntity(113U);
    msg.setDestination(58834U);
    msg.setDestinationEntity(107U);
    msg.value = 0.683288517822869;

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
    msg.setTimeStamp(0.49819048220779216);
    msg.setSource(43822U);
    msg.setSourceEntity(101U);
    msg.setDestination(9273U);
    msg.setDestinationEntity(141U);
    msg.value = 0.2690979115962109;

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
    msg.setTimeStamp(0.24862176649146972);
    msg.setSource(14781U);
    msg.setSourceEntity(217U);
    msg.setDestination(9468U);
    msg.setDestinationEntity(120U);
    msg.value = 0.9676726289479932;

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
    msg.setTimeStamp(0.5183780341131685);
    msg.setSource(16682U);
    msg.setSourceEntity(157U);
    msg.setDestination(46538U);
    msg.setDestinationEntity(239U);
    msg.value = 0.4097215990254457;

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
    msg.setTimeStamp(0.7838935527802867);
    msg.setSource(58773U);
    msg.setSourceEntity(239U);
    msg.setDestination(16214U);
    msg.setDestinationEntity(125U);
    msg.value = 0.3826997662711661;

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
    msg.setTimeStamp(0.3296731410529661);
    msg.setSource(18926U);
    msg.setSourceEntity(72U);
    msg.setDestination(30168U);
    msg.setDestinationEntity(47U);
    msg.value = 0.9229125780389139;

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
    msg.setTimeStamp(0.3882157738220048);
    msg.setSource(12204U);
    msg.setSourceEntity(181U);
    msg.setDestination(24710U);
    msg.setDestinationEntity(178U);
    msg.value = 0.35238090774665143;

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
    msg.setTimeStamp(0.02384176211459066);
    msg.setSource(19326U);
    msg.setSourceEntity(31U);
    msg.setDestination(45478U);
    msg.setDestinationEntity(248U);
    msg.value = 0.015839227823867263;

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
    msg.setTimeStamp(0.8878901744578043);
    msg.setSource(24316U);
    msg.setSourceEntity(91U);
    msg.setDestination(59271U);
    msg.setDestinationEntity(221U);
    msg.value = 0.18751326362259446;

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
    msg.setTimeStamp(0.9037043106194229);
    msg.setSource(40367U);
    msg.setSourceEntity(58U);
    msg.setDestination(20056U);
    msg.setDestinationEntity(185U);
    msg.direction = 0.4298422917910679;
    msg.speed = 0.45732491776481865;
    msg.turbulence = 0.8127462206407049;

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
    msg.setTimeStamp(0.8031727437225742);
    msg.setSource(23421U);
    msg.setSourceEntity(6U);
    msg.setDestination(28067U);
    msg.setDestinationEntity(244U);
    msg.direction = 0.992780695882973;
    msg.speed = 0.8220611587018317;
    msg.turbulence = 0.28805376074785105;

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
    msg.setTimeStamp(0.3341697528828408);
    msg.setSource(405U);
    msg.setSourceEntity(173U);
    msg.setDestination(14914U);
    msg.setDestinationEntity(115U);
    msg.direction = 0.5102733522687097;
    msg.speed = 0.022740415915104117;
    msg.turbulence = 0.49064928150681164;

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
    msg.setTimeStamp(0.22913365049748857);
    msg.setSource(37270U);
    msg.setSourceEntity(176U);
    msg.setDestination(24819U);
    msg.setDestinationEntity(94U);
    msg.value = 0.0707822806024403;

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
    msg.setTimeStamp(0.4818300974856461);
    msg.setSource(15194U);
    msg.setSourceEntity(56U);
    msg.setDestination(35040U);
    msg.setDestinationEntity(68U);
    msg.value = 0.6745366524310413;

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
    msg.setTimeStamp(0.6983604516426817);
    msg.setSource(45821U);
    msg.setSourceEntity(75U);
    msg.setDestination(43258U);
    msg.setDestinationEntity(9U);
    msg.value = 0.8319394692103391;

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
    msg.setTimeStamp(0.3502150449683239);
    msg.setSource(27715U);
    msg.setSourceEntity(241U);
    msg.setDestination(30051U);
    msg.setDestinationEntity(34U);
    msg.value.assign("VGBGXBMYBJFDDGTTDRVLVAOJHFVEH");

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
    msg.setTimeStamp(0.1754411757590918);
    msg.setSource(29868U);
    msg.setSourceEntity(201U);
    msg.setDestination(34516U);
    msg.setDestinationEntity(177U);
    msg.value.assign("ENUKCWUVKJ");

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
    msg.setTimeStamp(0.8259182921068797);
    msg.setSource(8884U);
    msg.setSourceEntity(117U);
    msg.setDestination(59496U);
    msg.setDestinationEntity(208U);
    msg.value.assign("SCIUPAEFZNIBVKLOSGSKBPZJQTPMGVGGNJBAJRANGHHXUUPCFZSBNWCNQDIFJUJASHVVYIECWZNHGEDZYYHKHZLSXVWDLDQVNURBTQODERRY");

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
    msg.setTimeStamp(0.505074370487799);
    msg.setSource(11573U);
    msg.setSourceEntity(6U);
    msg.setDestination(57619U);
    msg.setDestinationEntity(206U);
    const char tmp_msg_0[] = {-102, 76, -118, -10, -98, 85, -83, 57, 106, 100, -6, 3, 102, -59, -102, 70, -68, -31, -24, -14, -63, 116, -91, -73, -90, -88, -64, -97, -124, -65, -4, 24, -85, -71, 7, 40, -41, -121, -22, 67, -69, 8, 107, -127, -51, -73, 83, 70, 68, -35, -9, -34, 34, 123, -79, -102, 1, -72, -70, -82, -43, 19, 92, 12, 107, -1, -91, -17, 120, -122, 76, -49, -26, -63, -117, -17, -106, -13, -43, -46, -28, 103, 83, 94, 110, -18, 5, -109, -21, 74, 79, -73, 33, 106, -68, 91, -62, -12, 92, 63, -9, -105, 82, 115, -48, 36, 62, -16, 76, 52, -76, 113, 10, 45, 122, -126, 73, 17, -94, 110, -43, 34, -4, -23, 117, -94, -56, -112, -37, 125, -73, 46, -13, -82, -114, -103, -48, -92, 110, -124, 26, -12, 85, -72, 14, -81, -12, 87, 19, -9, 36, 7, 101, -61, 110, -99, -1, -94, 103, 59, -70, -93, -94, -68};
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
    msg.setTimeStamp(0.5182242986712826);
    msg.setSource(48452U);
    msg.setSourceEntity(162U);
    msg.setDestination(42603U);
    msg.setDestinationEntity(212U);
    const char tmp_msg_0[] = {61, 19, 102, 18, -21, -53, 112, 117, 104, 107, 15, 0, -69, 27, -51, 125, 90};
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
    msg.setTimeStamp(0.3841832933183549);
    msg.setSource(56864U);
    msg.setSourceEntity(128U);
    msg.setDestination(13197U);
    msg.setDestinationEntity(71U);
    const char tmp_msg_0[] = {-33, 56, 108, -121, 64, -113, -77, 53, -34, -101, -89, 123, -69, 121, 62, -75, 106, -96, -48, 91, 17, 20, -81, -10, -5, -72, -29, -7, -81, 8, 108, 22, 13, 41, -66, 22, -98, -122, -7, 122, -82, -127, -16, -122, -85, -118, 74, -33, -89, -70, -56, -107, 3, 10, 11, -51, 57, -17, -86, -97, 47, 14, -120, 37, -94, 54, -41, 76, 106, 125, -104, 34, -100, 32, -114, -4, -116, -86, -23, -128, 101, -39, -52, 54, 39, -5, -25, -118, -29, 77, -38, 103, 115, -77, 35, -88, -111, 122, -67, -45, 126, -104, -103, -32, -121, 76, 98, -72, -80, -8, 122, -21, 2, -11, -108, -88, -125, 75, -14, 108, -44, -65, 49, 24, -60, 35, -13, -104, -85, -46, 108, 97, -119, 111, 105, -16, -122, 28, 59, 70, -66, 37, 42, -52, 24, 14, -49, -110, 48, 49, -29, -21, 100, -97, -67, 95, -93, 5, -108, -43, 77, -68, -15, 115, 73, 9, 103, 78, -82, 38, 123, -11, 38, -55, -75, -45, 74, 29, 31, -16, -50, 120, -44, 108, -105, -6, 25, -104, -121, -28, 48, -43, -78, 59, -97, 48, -6, -41, 80, -5, 31, 58, -42, -26, 60, 74, -42, 42, 61, -117, -22, -13, 75, -75, 3, 65, -100, 58, -127, 24, -108, 93, -20, 45, -111, -91, 107, -2, -28, -43, 69, -101, -121, -77, 103, 55, 92, -93, -47, -73, -50, 45, 38, -16, -61, 98, -114, -124, -116, -47, 52, -117};
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
    msg.setTimeStamp(0.6311508947016503);
    msg.setSource(29511U);
    msg.setSourceEntity(125U);
    msg.setDestination(22753U);
    msg.setDestinationEntity(23U);
    msg.type = 48U;
    msg.frequency = 4094818224U;
    msg.min_range = 31052U;
    msg.max_range = 12608U;
    msg.bits_per_point = 66U;
    msg.scale_factor = 0.2689203357455887;
    const char tmp_msg_0[] = {98, 19, -62, -44, 49, -123, -128, -113, 0, -58, -124, -125, 18, 30, -44, 72, -113, 5, 32, -94, -75, 24, 43, -64, -109, 107, 78, -121, -118, 55, 23, -72, 117, 112, 52, -99, -90, 100, 86, -45, 18, 37, 80, 55, 54, 111, 112, 116, -2, 41, 59, 83, -122, -21, -121, -5, -23, -90, -9, -23, 45, 102, -125, 84, 37, -114, 97, -108, -79, 46, -15, 124, -24, -59, 81, -99, 2, 8, -122, 94, -64, 90, -93, -117, -35, -14, -18, 51, 116, 94, -28, -19, -66, 32, -119, 82, 34, -83, -68, 88, -59, -77, -25, -62, 23, -20, 29, 23, -121, -128, 100, -119, -29, 21, -31, 119, 72, 51, 7, -34, -31, 39, 74, -127, -12, -55, -41, -119, -90, 110, 113, 69};
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
    msg.setTimeStamp(0.7856576997650038);
    msg.setSource(42739U);
    msg.setSourceEntity(79U);
    msg.setDestination(55695U);
    msg.setDestinationEntity(132U);
    msg.type = 149U;
    msg.frequency = 1778197770U;
    msg.min_range = 32658U;
    msg.max_range = 46310U;
    msg.bits_per_point = 181U;
    msg.scale_factor = 0.7975337666180042;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8288177964384349;
    tmp_msg_0.beam_height = 0.3602801973433205;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-65, -38, -111, 94, -44, -91, -16, -10, -29, -88, -76, 99, 90, 34, 36, 34, -88, -23, 8, 33, 109, -66, -115, -63, -104, 49, -119, 111, 51, 2, 105, 117, 46, -32, -66, -31, 110, 90, 100, 112, -33, 20, 96, 41, 25, -102, -36, 14, -25, -100, 20, 46, -17, -10, 61, -49, 1, -108, 75, -54, 11, 72, 72, -125, 68, -14, -49, -44, 100, -19, 50, -104, 110, 99, 59, 84, 113, 38, 119, -70, -51, -64, 54, 76, 30, 56, 13, -42, 4, -2, -92, -36, 100, -59, -118, 20, -83, 58, 109, 116, -89, -77, -121, 126, 125, -50, -2, -122, -101, -125, 38, -87, -69, 33, -15, 125, -32, -58, 23, -7, 101, 94, -45, -83, -123, 94, 14, 20, -16, 112, 97, -93, -53, -78, -91, 92, 35, -120, -99, -64, -25, 116, -35, 104, 4, -66, 13, 88, -59, 87, -67, 65, -29, -103, -71, 126, 24, 61, -118, 10, 73, 33, -84, 107, 95, -96, 59, -75, -1, 28, -81, 101, -65, -87, -61, 0, 56, -123};
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
    msg.setTimeStamp(0.6096308155779014);
    msg.setSource(4941U);
    msg.setSourceEntity(222U);
    msg.setDestination(22240U);
    msg.setDestinationEntity(157U);
    msg.type = 163U;
    msg.frequency = 2527536558U;
    msg.min_range = 63531U;
    msg.max_range = 35U;
    msg.bits_per_point = 142U;
    msg.scale_factor = 0.04814846684410312;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3082746570887507;
    tmp_msg_0.beam_height = 0.4079338004070324;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-29, 37, 108, 80, -84, 58, -7, -102, 60, 81, -79, -24, -85, 66, 120, 120, 31, 80, -19, -117, -101, 85, -115, 75, -12, -9, 45, 124, -31, 12, -120, 43, -36, -84, -46, 124, 34, 88, 62, 82, 115, 124, -22, 125, 65, 122, -88, -10, 63, -128, -62, -44, 72, 45, 52, -53, -8, -111, -3, -57, 103, 11, 88, 71, -110, 7, -60, 70, 72, 31, -24, -16, -50, 20, -127, 87, 119, -16, -110, 83, 92, -60, -82, 82, -32, 63, 111, 33, 60, -90, 0, 38, 19, 46, 49, -26, 46, 35, 119, -85, 70, 66, -64, 124, 77, 59, 121, 56, -53, 31, 5, 36, -114, -88, 43, 123, 84, 14, -6, -33, -51, -88, -31, 63, 7, 78, -109, -79, -52, -128, -86, 34, -124, 99, 5, 117, 5, -64, 104, 51, 71, -32, -20, -30, 72, 81, -3, -20, -107, 68, 14, 53, -49, -62, 120, -54, 71, -66, 57, -18, 3, -102, 103, 94, 39, 81, -104, -67, 68, 84, -128, -70, 46, 83, 4, -43, 126, -50, 102, -98, -114, -57, -84};
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
    msg.setTimeStamp(0.6116801469007754);
    msg.setSource(14477U);
    msg.setSourceEntity(36U);
    msg.setDestination(37593U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.7066898882742678);
    msg.setSource(44656U);
    msg.setSourceEntity(195U);
    msg.setDestination(35950U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.9476721657729692);
    msg.setSource(24935U);
    msg.setSourceEntity(228U);
    msg.setDestination(24789U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.5213072301777303);
    msg.setSource(46836U);
    msg.setSourceEntity(186U);
    msg.setDestination(15982U);
    msg.setDestinationEntity(180U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.7604160063077708);
    msg.setSource(61168U);
    msg.setSourceEntity(123U);
    msg.setDestination(39045U);
    msg.setDestinationEntity(144U);
    msg.op = 118U;

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
    msg.setTimeStamp(0.5951576479823962);
    msg.setSource(32855U);
    msg.setSourceEntity(68U);
    msg.setDestination(43034U);
    msg.setDestinationEntity(219U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.3892734648263967);
    msg.setSource(21244U);
    msg.setSourceEntity(54U);
    msg.setDestination(824U);
    msg.setDestinationEntity(154U);
    msg.value = 0.5411629380444275;
    msg.confidence = 0.4135079746190766;
    msg.opmodes.assign("WESGLAITXHNUTJWKKABSDUVRLPQIUWEOZYXDBPYWQEPHETVDNKOEBMQZDFHTB");

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
    msg.setTimeStamp(0.04251550019351402);
    msg.setSource(4367U);
    msg.setSourceEntity(91U);
    msg.setDestination(53349U);
    msg.setDestinationEntity(175U);
    msg.value = 0.7558498696887734;
    msg.confidence = 0.9393749784662879;
    msg.opmodes.assign("MRSEUEQKOEOMPUOKMUJSEZLFCFOZQAXNONHQNUCMAWFUIEPRWFJIMGXXPABEMKTHIBPEERQXVRWCBGGCIYQDISYZTFINLAUJZQTTAWAJDCHMLLQKBWY");

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
    msg.setTimeStamp(0.5483206143253208);
    msg.setSource(57725U);
    msg.setSourceEntity(231U);
    msg.setDestination(15094U);
    msg.setDestinationEntity(24U);
    msg.value = 0.5378050148444785;
    msg.confidence = 0.7743796634319475;
    msg.opmodes.assign("LIQILRSTKWYXUJWPQPATIVMUCYQPIVRHLHERWLSQKMBMDOJFYEMCHFOZXWRQKMHTXRJIZNSJNJGXLVEPRCURHEORKXAQJKBOWWAVDTVHSGVOSABZGQYYNZUUPQKODPVFJUKVFFTASICCEXLVYFOBXERHVJJBJXWKMHDNRUKIYSZAGQYEIPDLAGBGNTCFNDBZCCM");

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
    msg.setTimeStamp(0.7725209073329004);
    msg.setSource(1440U);
    msg.setSourceEntity(131U);
    msg.setDestination(32085U);
    msg.setDestinationEntity(225U);
    msg.itow = 3832611731U;
    msg.lat = 0.3765579627613106;
    msg.lon = 0.2248932105642818;
    msg.height_ell = 0.39019782137383185;
    msg.height_sea = 0.6734669269613657;
    msg.hacc = 0.038175922007677054;
    msg.vacc = 0.22545142028252452;
    msg.vel_n = 0.3873644824659306;
    msg.vel_e = 0.6124467130437014;
    msg.vel_d = 0.630203035394569;
    msg.speed = 0.2854670173023862;
    msg.gspeed = 0.5175460421319173;
    msg.heading = 0.7250013304929565;
    msg.sacc = 0.8730249492973284;
    msg.cacc = 0.8615965358063619;

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
    msg.setTimeStamp(0.7020194992428814);
    msg.setSource(51692U);
    msg.setSourceEntity(67U);
    msg.setDestination(21996U);
    msg.setDestinationEntity(23U);
    msg.itow = 1346004223U;
    msg.lat = 0.4508099928105218;
    msg.lon = 0.8148131703708233;
    msg.height_ell = 0.010703316525456974;
    msg.height_sea = 0.9853295917973445;
    msg.hacc = 0.955585400735264;
    msg.vacc = 0.10934896814560302;
    msg.vel_n = 0.3250502078401438;
    msg.vel_e = 0.23844612192120063;
    msg.vel_d = 0.6176465536505592;
    msg.speed = 0.8190537856952708;
    msg.gspeed = 0.6705944707081214;
    msg.heading = 0.13556838944278282;
    msg.sacc = 0.5660825580719749;
    msg.cacc = 0.8002677276653255;

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
    msg.setTimeStamp(0.6261810133603845);
    msg.setSource(55596U);
    msg.setSourceEntity(28U);
    msg.setDestination(58671U);
    msg.setDestinationEntity(156U);
    msg.itow = 1288816856U;
    msg.lat = 0.6978517745529033;
    msg.lon = 0.7177567077467184;
    msg.height_ell = 0.05350445359755851;
    msg.height_sea = 0.5112970615570558;
    msg.hacc = 0.40364673079701086;
    msg.vacc = 0.26459816853764717;
    msg.vel_n = 0.8757397756931613;
    msg.vel_e = 0.6848063813042878;
    msg.vel_d = 0.03961101976446402;
    msg.speed = 0.5273725518020627;
    msg.gspeed = 0.36745979560163056;
    msg.heading = 0.5534952338202066;
    msg.sacc = 0.013577016248500051;
    msg.cacc = 0.8479973195853783;

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
    msg.setTimeStamp(0.3001051984163329);
    msg.setSource(27609U);
    msg.setSourceEntity(234U);
    msg.setDestination(52771U);
    msg.setDestinationEntity(47U);
    msg.id = 98U;
    msg.value = 0.31154627496618315;

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
    msg.setTimeStamp(0.3193246131969465);
    msg.setSource(7534U);
    msg.setSourceEntity(253U);
    msg.setDestination(51011U);
    msg.setDestinationEntity(7U);
    msg.id = 92U;
    msg.value = 0.2675692353150293;

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
    msg.setTimeStamp(0.9312165076133216);
    msg.setSource(6760U);
    msg.setSourceEntity(74U);
    msg.setDestination(9237U);
    msg.setDestinationEntity(211U);
    msg.id = 103U;
    msg.value = 0.682167064229677;

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
    msg.setTimeStamp(0.5531179227151397);
    msg.setSource(43933U);
    msg.setSourceEntity(103U);
    msg.setDestination(11307U);
    msg.setDestinationEntity(212U);
    msg.x = 0.8878628949616094;
    msg.y = 0.8984131828017312;
    msg.z = 0.5314787496686227;
    msg.phi = 0.040845133538473966;
    msg.theta = 0.21786744951375303;
    msg.psi = 0.8465001680712435;

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
    msg.setTimeStamp(0.6912830093533597);
    msg.setSource(9514U);
    msg.setSourceEntity(10U);
    msg.setDestination(9983U);
    msg.setDestinationEntity(210U);
    msg.x = 0.044916949670614326;
    msg.y = 0.28311749821313137;
    msg.z = 0.8586236682005915;
    msg.phi = 0.061476576277800565;
    msg.theta = 0.2703383196435968;
    msg.psi = 0.7861075018111935;

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
    msg.setTimeStamp(0.03954750842491073);
    msg.setSource(64311U);
    msg.setSourceEntity(44U);
    msg.setDestination(37846U);
    msg.setDestinationEntity(11U);
    msg.x = 0.4837038920740645;
    msg.y = 0.996970301018141;
    msg.z = 0.5536123494366194;
    msg.phi = 0.997560089386588;
    msg.theta = 0.5590756856749263;
    msg.psi = 0.17984094208195467;

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
    msg.setTimeStamp(0.7544729354195686);
    msg.setSource(43409U);
    msg.setSourceEntity(74U);
    msg.setDestination(26521U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.7560497046863613;
    msg.beam_height = 0.44953365343294616;

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
    msg.setTimeStamp(0.7610749501064236);
    msg.setSource(34184U);
    msg.setSourceEntity(157U);
    msg.setDestination(1913U);
    msg.setDestinationEntity(233U);
    msg.beam_width = 0.9875911296419436;
    msg.beam_height = 0.2680590316991045;

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
    msg.setTimeStamp(0.0014347202068283327);
    msg.setSource(51680U);
    msg.setSourceEntity(173U);
    msg.setDestination(44237U);
    msg.setDestinationEntity(201U);
    msg.beam_width = 0.7396674782295457;
    msg.beam_height = 0.9158532868553917;

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
    msg.setTimeStamp(0.5391342667096205);
    msg.setSource(8681U);
    msg.setSourceEntity(132U);
    msg.setDestination(46949U);
    msg.setDestinationEntity(29U);
    msg.sane = 40U;

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
    msg.setTimeStamp(0.14219848740804053);
    msg.setSource(36594U);
    msg.setSourceEntity(175U);
    msg.setDestination(37696U);
    msg.setDestinationEntity(33U);
    msg.sane = 73U;

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
    msg.setTimeStamp(0.06355956693189835);
    msg.setSource(14296U);
    msg.setSourceEntity(224U);
    msg.setDestination(13322U);
    msg.setDestinationEntity(247U);
    msg.sane = 14U;

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
    msg.setTimeStamp(0.06185399076161646);
    msg.setSource(21512U);
    msg.setSourceEntity(247U);
    msg.setDestination(16304U);
    msg.setDestinationEntity(58U);
    msg.value = 0.9708096748915322;

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
    msg.setTimeStamp(0.8519393490883658);
    msg.setSource(13145U);
    msg.setSourceEntity(194U);
    msg.setDestination(31354U);
    msg.setDestinationEntity(37U);
    msg.value = 0.18568860514483854;

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
    msg.setTimeStamp(0.28706748889206546);
    msg.setSource(46524U);
    msg.setSourceEntity(226U);
    msg.setDestination(28459U);
    msg.setDestinationEntity(150U);
    msg.value = 0.4212863946558779;

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
    msg.setTimeStamp(0.8167826594018857);
    msg.setSource(29970U);
    msg.setSourceEntity(139U);
    msg.setDestination(19581U);
    msg.setDestinationEntity(11U);
    msg.value = 0.6274444527959664;

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
    msg.setTimeStamp(0.8870435618011153);
    msg.setSource(2912U);
    msg.setSourceEntity(170U);
    msg.setDestination(16579U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9814382416358007;

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
    msg.setTimeStamp(0.7292059323430575);
    msg.setSource(13234U);
    msg.setSourceEntity(42U);
    msg.setDestination(41753U);
    msg.setDestinationEntity(118U);
    msg.value = 0.7645728517477427;

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
    msg.setTimeStamp(0.7138415358952072);
    msg.setSource(28338U);
    msg.setSourceEntity(93U);
    msg.setDestination(26190U);
    msg.setDestinationEntity(62U);
    msg.value = 0.03197458981340928;

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
    msg.setTimeStamp(0.35204240172010604);
    msg.setSource(16985U);
    msg.setSourceEntity(72U);
    msg.setDestination(19353U);
    msg.setDestinationEntity(3U);
    msg.value = 0.8872846128543358;

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
    msg.setTimeStamp(0.34693759234590327);
    msg.setSource(55532U);
    msg.setSourceEntity(197U);
    msg.setDestination(581U);
    msg.setDestinationEntity(185U);
    msg.value = 0.9412235166051813;

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
    msg.setTimeStamp(0.018603898212311343);
    msg.setSource(23887U);
    msg.setSourceEntity(147U);
    msg.setDestination(33630U);
    msg.setDestinationEntity(242U);
    msg.value = 0.23082389274984283;

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
    msg.setTimeStamp(0.2306987634375568);
    msg.setSource(943U);
    msg.setSourceEntity(249U);
    msg.setDestination(57142U);
    msg.setDestinationEntity(220U);
    msg.value = 0.7000615359695289;

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
    msg.setTimeStamp(0.4456390495502447);
    msg.setSource(17086U);
    msg.setSourceEntity(252U);
    msg.setDestination(46498U);
    msg.setDestinationEntity(174U);
    msg.value = 0.8289982914908809;

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
    msg.setTimeStamp(0.10809118541671703);
    msg.setSource(54794U);
    msg.setSourceEntity(173U);
    msg.setDestination(32842U);
    msg.setDestinationEntity(221U);
    msg.value = 0.23377619539848782;

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
    msg.setTimeStamp(0.16552042935737876);
    msg.setSource(36620U);
    msg.setSourceEntity(207U);
    msg.setDestination(19673U);
    msg.setDestinationEntity(251U);
    msg.value = 0.2506826355201093;

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
    msg.setTimeStamp(0.13111490787009306);
    msg.setSource(16447U);
    msg.setSourceEntity(98U);
    msg.setDestination(18927U);
    msg.setDestinationEntity(173U);
    msg.value = 0.4527081683895273;

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
    msg.setTimeStamp(0.7799144557620677);
    msg.setSource(16400U);
    msg.setSourceEntity(206U);
    msg.setDestination(35905U);
    msg.setDestinationEntity(195U);
    msg.id = 5U;
    msg.zoom = 13U;
    msg.action = 247U;

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
    msg.setTimeStamp(0.011425804902678638);
    msg.setSource(47518U);
    msg.setSourceEntity(231U);
    msg.setDestination(53959U);
    msg.setDestinationEntity(87U);
    msg.id = 181U;
    msg.zoom = 76U;
    msg.action = 75U;

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
    msg.setTimeStamp(0.411794222492742);
    msg.setSource(37408U);
    msg.setSourceEntity(72U);
    msg.setDestination(56489U);
    msg.setDestinationEntity(144U);
    msg.id = 199U;
    msg.zoom = 148U;
    msg.action = 7U;

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
    msg.setTimeStamp(0.21559364178923845);
    msg.setSource(53298U);
    msg.setSourceEntity(138U);
    msg.setDestination(63769U);
    msg.setDestinationEntity(143U);
    msg.id = 27U;
    msg.value = 0.6532635792322511;

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
    msg.setTimeStamp(0.19941722444845433);
    msg.setSource(46913U);
    msg.setSourceEntity(46U);
    msg.setDestination(54874U);
    msg.setDestinationEntity(112U);
    msg.id = 25U;
    msg.value = 0.4804651966611415;

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
    msg.setTimeStamp(0.5978876505167233);
    msg.setSource(16613U);
    msg.setSourceEntity(66U);
    msg.setDestination(26602U);
    msg.setDestinationEntity(70U);
    msg.id = 43U;
    msg.value = 0.08552141048023809;

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
    msg.setTimeStamp(0.34333179716752127);
    msg.setSource(44531U);
    msg.setSourceEntity(58U);
    msg.setDestination(28892U);
    msg.setDestinationEntity(204U);
    msg.id = 10U;
    msg.value = 0.3486150797300065;

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
    msg.setTimeStamp(0.0696683237619663);
    msg.setSource(735U);
    msg.setSourceEntity(88U);
    msg.setDestination(24462U);
    msg.setDestinationEntity(173U);
    msg.id = 215U;
    msg.value = 0.5200592179793856;

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
    msg.setTimeStamp(0.5978763075450483);
    msg.setSource(10199U);
    msg.setSourceEntity(71U);
    msg.setDestination(33503U);
    msg.setDestinationEntity(249U);
    msg.id = 213U;
    msg.value = 0.9216845994563875;

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
    msg.setTimeStamp(0.4954223847453548);
    msg.setSource(19130U);
    msg.setSourceEntity(63U);
    msg.setDestination(22807U);
    msg.setDestinationEntity(106U);
    msg.id = 19U;
    msg.angle = 0.5386219167567934;

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
    msg.setTimeStamp(0.8841273150403521);
    msg.setSource(29410U);
    msg.setSourceEntity(79U);
    msg.setDestination(39936U);
    msg.setDestinationEntity(115U);
    msg.id = 152U;
    msg.angle = 0.030676026166476023;

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
    msg.setTimeStamp(0.5994069307054246);
    msg.setSource(2404U);
    msg.setSourceEntity(151U);
    msg.setDestination(56253U);
    msg.setDestinationEntity(128U);
    msg.id = 40U;
    msg.angle = 0.0839471238341798;

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
    msg.setTimeStamp(0.7188954983280095);
    msg.setSource(45874U);
    msg.setSourceEntity(71U);
    msg.setDestination(42838U);
    msg.setDestinationEntity(5U);
    msg.op = 175U;
    msg.actions.assign("LRTBYHNURBLSBKFXEBSAA");

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
    msg.setTimeStamp(0.2981675258236729);
    msg.setSource(25588U);
    msg.setSourceEntity(143U);
    msg.setDestination(55483U);
    msg.setDestinationEntity(187U);
    msg.op = 111U;
    msg.actions.assign("PBZFHNFGYQPRNTXBDUKVUWAYMFSMIWJHYJEMFOULGAAMZVUMZYFTNBCZCBHWOSYXQGITSUOPVYXJFKSSPERZEFTVKMBAPLROGIFJQTVKOYLNUDLPXXJCNEDZADBDKFMCQEGILFQACRKSVARZLEDANWODIUTWSGLCJOQ");

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
    msg.setTimeStamp(0.02336651643830201);
    msg.setSource(20480U);
    msg.setSourceEntity(29U);
    msg.setDestination(57052U);
    msg.setDestinationEntity(124U);
    msg.op = 120U;
    msg.actions.assign("VKRTTLLJZKRMVAUZJSMAGQITPWAUJBHHTZIDCIXSMLCJSXZQPNISKJRMQJWXEHLVKFKOOYGGOBKYGDIVZNEYDGPFWTTDLYHMYJYKAVA");

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
    msg.setTimeStamp(0.20823727354945087);
    msg.setSource(2064U);
    msg.setSourceEntity(46U);
    msg.setDestination(35202U);
    msg.setDestinationEntity(231U);
    msg.actions.assign("SATWJAOSNCZYEQTABAGZLIPJFNBZSYCYZCYRQKIVRVMWC");

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
    msg.setTimeStamp(0.6315062966001043);
    msg.setSource(58018U);
    msg.setSourceEntity(253U);
    msg.setDestination(7482U);
    msg.setDestinationEntity(97U);
    msg.actions.assign("AMFRMMMRDMMJOWHSZXBKWMYBZTBOOFUNIDOORCSWGHFHCGUIVTHZUKTYFKXDWZQQYXTIGQLDFEPOHZHINEIRSUYPFAPLJLVYYVLGSCVDCJGSPCLYACMNOVXDPBYAVVJESTRAFVJFSJUXLEZWRXAQBDCBNGBWFEGULTKZMHNKKXIGIPNCQJEVEEZOKQIXJRRNFAUWNNABASOARGLPTKXNWSSJ");

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
    msg.setTimeStamp(0.3078399249237277);
    msg.setSource(62146U);
    msg.setSourceEntity(180U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(38U);
    msg.actions.assign("RSZCDVDAJCKVUVATXVBEBPXTTBJMLVRAQVZOGSDISKAGLUJGNJIHHRYADOLJWFXVQCQXIBFOGYMCRUSEGTAFLYVCJGFIEBZUXMSCYSIMUWJNAKRFKSKURHKSDYHIEWQWTZZTEBWQFQXXDCOMRMQIIZGIQNUOWGRJYLH");

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
    msg.setTimeStamp(0.1440416900715088);
    msg.setSource(595U);
    msg.setSourceEntity(225U);
    msg.setDestination(48439U);
    msg.setDestinationEntity(220U);
    msg.button = 37U;
    msg.value = 49U;

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
    msg.setTimeStamp(0.343056021090531);
    msg.setSource(3896U);
    msg.setSourceEntity(113U);
    msg.setDestination(37130U);
    msg.setDestinationEntity(114U);
    msg.button = 183U;
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
    msg.setTimeStamp(0.27118053868271286);
    msg.setSource(37228U);
    msg.setSourceEntity(186U);
    msg.setDestination(26687U);
    msg.setDestinationEntity(110U);
    msg.button = 215U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.6888055756119215);
    msg.setSource(20185U);
    msg.setSourceEntity(193U);
    msg.setDestination(1245U);
    msg.setDestinationEntity(188U);
    msg.op = 54U;
    msg.text.assign("CMOSCMCLADNZAGVUMXCISKLYDLHYIOLKGUMDTYVPJWRFCZJTFCKDPWSOF");

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
    msg.setTimeStamp(0.9378953619182666);
    msg.setSource(23801U);
    msg.setSourceEntity(178U);
    msg.setDestination(20717U);
    msg.setDestinationEntity(190U);
    msg.op = 165U;
    msg.text.assign("XUTYSYMESWDIZNMBZQPBAMMCCIMVTDNZXUDUXSERCPZBRKVELDKBGFQA");

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
    msg.setTimeStamp(0.34387303377350065);
    msg.setSource(49127U);
    msg.setSourceEntity(191U);
    msg.setDestination(34699U);
    msg.setDestinationEntity(15U);
    msg.op = 182U;
    msg.text.assign("IFDXPCNQZEXLKJDUJRMIQRBLJKPYUNNKJGUSMNRCONAMXFSGRHVANBUICRBALX");

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
    msg.setTimeStamp(0.8925113307572163);
    msg.setSource(65279U);
    msg.setSourceEntity(73U);
    msg.setDestination(1008U);
    msg.setDestinationEntity(62U);
    msg.op = 39U;
    msg.time_remain = 0.4993993069740531;
    msg.sched_time = 0.9935440582148972;

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
    msg.setTimeStamp(0.5341565808675214);
    msg.setSource(13624U);
    msg.setSourceEntity(81U);
    msg.setDestination(39944U);
    msg.setDestinationEntity(108U);
    msg.op = 198U;
    msg.time_remain = 0.10206433538309634;
    msg.sched_time = 0.7108251626853204;

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
    msg.setTimeStamp(0.9244928488246749);
    msg.setSource(28473U);
    msg.setSourceEntity(69U);
    msg.setDestination(25321U);
    msg.setDestinationEntity(191U);
    msg.op = 155U;
    msg.time_remain = 0.08212341906713083;
    msg.sched_time = 0.3641015853892162;

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
    msg.setTimeStamp(0.19306110434354884);
    msg.setSource(42243U);
    msg.setSourceEntity(164U);
    msg.setDestination(47679U);
    msg.setDestinationEntity(159U);
    msg.name.assign("SUMIHOCHDANUVPDHKTLUALPWQXEPRZVGGVEQNAXDZONTIQEMMEODZGCSELDZDTUYAICNCIPRROKFHXYWXJMSRWYNKIGISYKXBBKWBCCLHFRKXQAQMETWRJNAYRWSYTUZXGBWWFVEPGTCGCHBVNBKPULMXUMPTASFTXRCMUONMZFCNHYKFHLIOJFIREGGQAOONVIBSP");
    msg.op = 118U;
    msg.sched_time = 0.4409082316727526;

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
    msg.setTimeStamp(0.8487564790681035);
    msg.setSource(6299U);
    msg.setSourceEntity(92U);
    msg.setDestination(3651U);
    msg.setDestinationEntity(98U);
    msg.name.assign("URSDKNQTMSMFONOFEMBIIVNGSXZGPSNUDPBTODXPKTJHBHKAORFSEJLCVDTKUBYSIUSLWLQXRBFPCMXNCGWFWPUKXNKETAOIWYAIJMGHTJEGARIKTCC");
    msg.op = 36U;
    msg.sched_time = 0.5034566725825227;

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
    msg.setTimeStamp(0.715014777193411);
    msg.setSource(16495U);
    msg.setSourceEntity(33U);
    msg.setDestination(53268U);
    msg.setDestinationEntity(214U);
    msg.name.assign("ZAMUTKMSGNUUKEUYRECJWXZUCYJGKKBAGWFNQQKTOMYWJAORSJPWDVXENVOENTPYXRUYFCXAWLSPIYVLBXAODTMQCEYKQHKIOPRJINBERMDDMGXWDLZCWCIAABTFBUYBH");
    msg.op = 41U;
    msg.sched_time = 0.7396842601291177;

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
    msg.setTimeStamp(0.11857105823768277);
    msg.setSource(30749U);
    msg.setSourceEntity(115U);
    msg.setDestination(14186U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.5597024117114707);
    msg.setSource(7088U);
    msg.setSourceEntity(67U);
    msg.setDestination(50191U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.2861849739983867);
    msg.setSource(50005U);
    msg.setSourceEntity(224U);
    msg.setDestination(28023U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.517594028204148);
    msg.setSource(57158U);
    msg.setSourceEntity(253U);
    msg.setDestination(8396U);
    msg.setDestinationEntity(92U);
    msg.name.assign("AMALKYCQXVNLFSVPGNZQPBIEMOAJBZRPDHZSHQJLQGXXITUFZZUDAEFNCPVTRMPUUEBBVKUTTXROPDHUJAHUWAQPIFREFDO");
    msg.state = 254U;

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
    msg.setTimeStamp(0.07512515203539272);
    msg.setSource(62051U);
    msg.setSourceEntity(40U);
    msg.setDestination(13456U);
    msg.setDestinationEntity(184U);
    msg.name.assign("MEYNHEFHRSNFSFVCAZWDPQEDACNMXHTVQDRLKFZRTLQUBDVDCARHFCKOGTPPOLXDPICXJCLIVFPSMKZIQYZBFUIQVKOXKNHASSXBEPYSOQTEADMQPOMLFYTMPBGBZNZBVNJEHJOXTYQYKVBJCXNEGM");
    msg.state = 210U;

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
    msg.setTimeStamp(0.4720937604208789);
    msg.setSource(28650U);
    msg.setSourceEntity(83U);
    msg.setDestination(21265U);
    msg.setDestinationEntity(56U);
    msg.name.assign("KSELBSWHUHODITQPYKKJHHVFBQOOIVIZJGZDSTEGDMPCJVOMSCCSDFEPNHJNVWISNWZGGXEXPKEQPLSRAYUBLXZQPTDTWVWCQRMXBKUNNAGPWERFEBGKNMAQTXCRXHURUWPMF");
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
    msg.setTimeStamp(0.6336347580901441);
    msg.setSource(64978U);
    msg.setSourceEntity(76U);
    msg.setDestination(13032U);
    msg.setDestinationEntity(185U);
    msg.name.assign("NBLCPTBDPYNYVEBLNFEAGKOFQGURKMJOUDAUAYGJDKSUNKICFEQRZXXD");
    msg.value = 33U;

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
    msg.setTimeStamp(0.20384488049519023);
    msg.setSource(40410U);
    msg.setSourceEntity(249U);
    msg.setDestination(14513U);
    msg.setDestinationEntity(183U);
    msg.name.assign("GIVYIMMLRGUCFGBMXWQMMDUHAXYYCJRCXVLOORJTIQFBQBPKWQXNNEAEBCWUYWHGLUGESTZYJDVJWURDQCZNKDVTBSLDROTLTUVKSTIODDXJKERKOSPZFKHSZKMCDPLAABZQIXENCQKSGUMOIHUWJZZJLYFCJADGBPQNJHEGKRNXVOZEMFZLTNVITMHRYXOHDANECFPHPREKS");
    msg.value = 51U;

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
    msg.setTimeStamp(0.36379116384549226);
    msg.setSource(54516U);
    msg.setSourceEntity(211U);
    msg.setDestination(61045U);
    msg.setDestinationEntity(188U);
    msg.name.assign("DULNSUYCJQWQKNKTSWGFENDWVJWOHHVOWBUGCPRRSVONCODIEIXEKECEMINIDBBCMMLWAXNHFBUZXIVEBYTOJYLSGKYJWZPQTZAPPPPHVYAJJPGESGALIUKSYVXEICSBCLXRJTXBEQDBVTXMMZKWOVURFCKRL");
    msg.value = 242U;

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
    msg.setTimeStamp(0.46579997567945586);
    msg.setSource(16994U);
    msg.setSourceEntity(203U);
    msg.setDestination(36987U);
    msg.setDestinationEntity(64U);
    msg.name.assign("EIOYWBQMWKHOLCDGQUUQZWXXVNSSJPOVDMEWOTHNYUJPTBBHKUCEQEVDERTITLMDLYEISJUCFRCCFILYQHFMTSRRNFENMOD");

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
    msg.setTimeStamp(0.31754374819295805);
    msg.setSource(24455U);
    msg.setSourceEntity(164U);
    msg.setDestination(35704U);
    msg.setDestinationEntity(61U);
    msg.name.assign("DPDCEIGYBAMMMPZETPVYWAKULMNQABAYIHTASKVBWTJYHAHYQZTZQHOXKGQWIERRNRKZMHFEUHTNFFZDYYJNAPJIMDRQUUTRUQEXZPDPQKUZROTCYAFNROGDXOIMIBSXZGVLGF");

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
    msg.setTimeStamp(0.05650343982948436);
    msg.setSource(25598U);
    msg.setSourceEntity(137U);
    msg.setDestination(9449U);
    msg.setDestinationEntity(90U);
    msg.name.assign("CGUHSONQERVOEHTAFZAHSYBTGANXWDAEOHLRKYRKICIMVO");

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
    msg.setTimeStamp(0.048009911898177715);
    msg.setSource(53274U);
    msg.setSourceEntity(147U);
    msg.setDestination(40981U);
    msg.setDestinationEntity(35U);
    msg.name.assign("MWKBQOYEVLBMRQNQDEUOVMNZZZFPOTRKOSUSYFIVYPAGXWEXPWUMOHRZKIZRUGSMZAJLCZGMNJODFWLDYGECEJZDXBPXKZDWTJYUELVVKOJTXQORADPYRVTNCRWISVXFAEQRNKAEDLITBLHHQYFQPCGSVGGWOJ");
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
    msg.setTimeStamp(0.2532707980453395);
    msg.setSource(925U);
    msg.setSourceEntity(244U);
    msg.setDestination(41289U);
    msg.setDestinationEntity(108U);
    msg.name.assign("NWXHKPMBIZFAWUJGQOGERUUGKGSLODIUTSRTRQHBEJRLHIOLTALNFANSTESCKHH");
    msg.value = 56U;

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
    msg.setTimeStamp(0.07163639178602121);
    msg.setSource(61733U);
    msg.setSourceEntity(215U);
    msg.setDestination(45820U);
    msg.setDestinationEntity(54U);
    msg.name.assign("XGXWMPRKTKZEAZOLPCBVOGRNDISYQNURQXRQECVDMRWVFWZPWQDIYIBCQOFTHHPJSXWBZZKYTHFEUWVNVAUUHSGGTTZMIDNTBYMARXSSCJRBLULHDKVICRLAOJKXOYKJVTIUTMGZIAENVZYFLDNMYFEYCAOHJHEFOK");
    msg.value = 246U;

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
    msg.setTimeStamp(0.8651565502688535);
    msg.setSource(21375U);
    msg.setSourceEntity(12U);
    msg.setDestination(54303U);
    msg.setDestinationEntity(21U);
    msg.id = 140U;
    msg.period = 976923243U;
    msg.duty_cycle = 1243963542U;

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
    msg.setTimeStamp(0.8974389241176668);
    msg.setSource(42447U);
    msg.setSourceEntity(54U);
    msg.setDestination(12023U);
    msg.setDestinationEntity(33U);
    msg.id = 208U;
    msg.period = 1987448247U;
    msg.duty_cycle = 2782007958U;

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
    msg.setTimeStamp(0.32225906463173515);
    msg.setSource(3561U);
    msg.setSourceEntity(231U);
    msg.setDestination(43231U);
    msg.setDestinationEntity(65U);
    msg.id = 161U;
    msg.period = 2973031121U;
    msg.duty_cycle = 367685209U;

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
    msg.setTimeStamp(0.1753586214330085);
    msg.setSource(51602U);
    msg.setSourceEntity(108U);
    msg.setDestination(141U);
    msg.setDestinationEntity(15U);
    msg.id = 67U;
    msg.period = 3304703659U;
    msg.duty_cycle = 1411732337U;

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
    msg.setTimeStamp(0.7315195448987853);
    msg.setSource(44029U);
    msg.setSourceEntity(37U);
    msg.setDestination(24758U);
    msg.setDestinationEntity(18U);
    msg.id = 28U;
    msg.period = 3441212853U;
    msg.duty_cycle = 2412684011U;

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
    msg.setTimeStamp(0.22811674073113242);
    msg.setSource(62185U);
    msg.setSourceEntity(67U);
    msg.setDestination(4085U);
    msg.setDestinationEntity(94U);
    msg.id = 5U;
    msg.period = 4098112114U;
    msg.duty_cycle = 4289254397U;

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
    msg.setTimeStamp(0.8677286089561399);
    msg.setSource(11974U);
    msg.setSourceEntity(104U);
    msg.setDestination(5527U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.2684480419888817;
    msg.lon = 0.929843161520581;
    msg.height = 0.1351729793839197;
    msg.x = 0.9413591161686672;
    msg.y = 0.23982739116858653;
    msg.z = 0.18531314757251027;
    msg.phi = 0.24295627989274582;
    msg.theta = 0.19035287774009002;
    msg.psi = 0.5396927476086532;
    msg.u = 0.24692561586475825;
    msg.v = 0.43958583443502997;
    msg.w = 0.31990331002971684;
    msg.vx = 0.6435064780792304;
    msg.vy = 0.1095992690400901;
    msg.vz = 0.3104812934965526;
    msg.p = 0.09822956254219761;
    msg.q = 0.05353966335744753;
    msg.r = 0.43888903770878995;
    msg.depth = 0.06479392381866078;
    msg.alt = 0.24064490368878755;

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
    msg.setTimeStamp(0.5771676959576092);
    msg.setSource(40440U);
    msg.setSourceEntity(236U);
    msg.setDestination(57042U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.9248879258620962;
    msg.lon = 0.8677774271400269;
    msg.height = 0.5368998539488155;
    msg.x = 0.321733170025294;
    msg.y = 0.5354905144098229;
    msg.z = 0.6469739756958082;
    msg.phi = 0.03908575182701435;
    msg.theta = 0.44455368627920966;
    msg.psi = 0.9427938464959041;
    msg.u = 0.22227281312633917;
    msg.v = 0.3692359686981689;
    msg.w = 0.1616495307135103;
    msg.vx = 0.814362602803856;
    msg.vy = 0.31235420102903566;
    msg.vz = 0.28994730735589525;
    msg.p = 0.5595527179454467;
    msg.q = 0.9105977512353144;
    msg.r = 0.22697440595885343;
    msg.depth = 0.5186198765336285;
    msg.alt = 0.0629746247154035;

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
    msg.setTimeStamp(0.7070927486679466);
    msg.setSource(12745U);
    msg.setSourceEntity(222U);
    msg.setDestination(1806U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.7398166216519189;
    msg.lon = 0.7993992311411503;
    msg.height = 0.5263330381004657;
    msg.x = 0.15683107471571278;
    msg.y = 0.8912963869971822;
    msg.z = 0.9427341447497358;
    msg.phi = 0.39638639270820974;
    msg.theta = 0.6883131270765026;
    msg.psi = 0.2529850847537781;
    msg.u = 0.5150112643147391;
    msg.v = 0.9290414312549136;
    msg.w = 0.33799326617818415;
    msg.vx = 0.3415399247984716;
    msg.vy = 0.49612342725722236;
    msg.vz = 0.7615006791285833;
    msg.p = 0.10705875696977663;
    msg.q = 0.9767368130493237;
    msg.r = 0.20332392266979993;
    msg.depth = 0.1114074347212951;
    msg.alt = 0.3989076054812086;

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
    msg.setTimeStamp(0.6368151878976928);
    msg.setSource(36672U);
    msg.setSourceEntity(43U);
    msg.setDestination(48864U);
    msg.setDestinationEntity(142U);
    msg.x = 0.6632421197944164;
    msg.y = 0.5106776553017165;
    msg.z = 0.8557561135499717;

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
    msg.setTimeStamp(0.3192258933463098);
    msg.setSource(43449U);
    msg.setSourceEntity(104U);
    msg.setDestination(44074U);
    msg.setDestinationEntity(83U);
    msg.x = 0.42972686768788204;
    msg.y = 0.9121760532621992;
    msg.z = 0.23517394180404627;

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
    msg.setTimeStamp(0.1306213518903705);
    msg.setSource(52189U);
    msg.setSourceEntity(236U);
    msg.setDestination(15309U);
    msg.setDestinationEntity(225U);
    msg.x = 0.46018478800903295;
    msg.y = 0.34744782844487876;
    msg.z = 0.38527484675862367;

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
    msg.setTimeStamp(0.7815428055465589);
    msg.setSource(57040U);
    msg.setSourceEntity(138U);
    msg.setDestination(50444U);
    msg.setDestinationEntity(150U);
    msg.value = 0.4255604116660704;

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
    msg.setTimeStamp(0.7260252862766868);
    msg.setSource(62870U);
    msg.setSourceEntity(148U);
    msg.setDestination(48135U);
    msg.setDestinationEntity(250U);
    msg.value = 0.1673956759637728;

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
    msg.setTimeStamp(0.39286388431288255);
    msg.setSource(33782U);
    msg.setSourceEntity(164U);
    msg.setDestination(2916U);
    msg.setDestinationEntity(90U);
    msg.value = 0.38408045607318564;

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
    msg.setTimeStamp(0.487176486162075);
    msg.setSource(28031U);
    msg.setSourceEntity(18U);
    msg.setDestination(2638U);
    msg.setDestinationEntity(48U);
    msg.value = 0.08906755262594135;

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
    msg.setTimeStamp(0.8111588618553429);
    msg.setSource(33652U);
    msg.setSourceEntity(247U);
    msg.setDestination(43099U);
    msg.setDestinationEntity(94U);
    msg.value = 0.03570354946515808;

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
    msg.setTimeStamp(0.39256640823626954);
    msg.setSource(30179U);
    msg.setSourceEntity(54U);
    msg.setDestination(11614U);
    msg.setDestinationEntity(39U);
    msg.value = 0.9521246293956181;

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
    msg.setTimeStamp(0.4018030569047164);
    msg.setSource(10101U);
    msg.setSourceEntity(214U);
    msg.setDestination(18369U);
    msg.setDestinationEntity(35U);
    msg.x = 0.8078256112198381;
    msg.y = 0.897720957934955;
    msg.z = 0.14207930769343435;
    msg.phi = 0.06554062202458877;
    msg.theta = 0.5986944815548672;
    msg.psi = 0.48912525128645923;
    msg.p = 0.7499857500092504;
    msg.q = 0.3749065427169076;
    msg.r = 0.1707954197723447;
    msg.u = 0.29520781824405484;
    msg.v = 0.6794270847595099;
    msg.w = 0.8904523013938227;
    msg.bias_psi = 0.38868179763338984;
    msg.bias_r = 0.3013187560421564;

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
    msg.setTimeStamp(0.5751880306135299);
    msg.setSource(27711U);
    msg.setSourceEntity(139U);
    msg.setDestination(60691U);
    msg.setDestinationEntity(202U);
    msg.x = 0.2962980394627487;
    msg.y = 0.6833480648866129;
    msg.z = 0.49022244556458594;
    msg.phi = 0.6539109700353061;
    msg.theta = 0.9766054986725484;
    msg.psi = 0.9493976882448809;
    msg.p = 0.17742235878790202;
    msg.q = 0.7656004951679308;
    msg.r = 0.3177206824850335;
    msg.u = 0.2793311819031131;
    msg.v = 0.08162383526863648;
    msg.w = 0.2420351642826517;
    msg.bias_psi = 0.02383163335496119;
    msg.bias_r = 0.19619036395111356;

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
    msg.setTimeStamp(0.35645623806809523);
    msg.setSource(47299U);
    msg.setSourceEntity(167U);
    msg.setDestination(18382U);
    msg.setDestinationEntity(113U);
    msg.x = 0.4365952144824695;
    msg.y = 0.4029240349392854;
    msg.z = 0.5986396886671185;
    msg.phi = 0.17661480629782844;
    msg.theta = 0.3336939121558128;
    msg.psi = 0.5636622388706669;
    msg.p = 0.9298828878851421;
    msg.q = 0.3847732245006126;
    msg.r = 0.9525564560332012;
    msg.u = 0.7212626327327246;
    msg.v = 0.4816006535237104;
    msg.w = 0.05655205169675226;
    msg.bias_psi = 0.4368453106916588;
    msg.bias_r = 0.43916499370691675;

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
    msg.setTimeStamp(0.24170177461981135);
    msg.setSource(11843U);
    msg.setSourceEntity(5U);
    msg.setDestination(37265U);
    msg.setDestinationEntity(60U);
    msg.bias_psi = 0.7121959494241578;
    msg.bias_r = 0.4849158849262276;
    msg.cog = 0.611805998859459;
    msg.cyaw = 0.471127179211021;
    msg.lbl_rej_level = 0.79771662517164;
    msg.gps_rej_level = 0.40226058820806787;
    msg.custom_x = 0.2720136590801865;
    msg.custom_y = 0.7145495569615881;
    msg.custom_z = 0.6198757193339087;

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
    msg.setTimeStamp(0.3617139042072355);
    msg.setSource(23188U);
    msg.setSourceEntity(66U);
    msg.setDestination(21903U);
    msg.setDestinationEntity(222U);
    msg.bias_psi = 0.775468176380612;
    msg.bias_r = 0.9576775114466093;
    msg.cog = 0.9283020300345637;
    msg.cyaw = 0.38368444757855735;
    msg.lbl_rej_level = 0.6309307612780855;
    msg.gps_rej_level = 0.5252360583459452;
    msg.custom_x = 0.2957368381502874;
    msg.custom_y = 0.44541243732921;
    msg.custom_z = 0.30254999075557576;

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
    msg.setTimeStamp(0.3584608655070828);
    msg.setSource(29440U);
    msg.setSourceEntity(239U);
    msg.setDestination(5507U);
    msg.setDestinationEntity(134U);
    msg.bias_psi = 0.32899889259832804;
    msg.bias_r = 0.4510289259632647;
    msg.cog = 0.3045748080740689;
    msg.cyaw = 0.0652488492871004;
    msg.lbl_rej_level = 0.020207782688029252;
    msg.gps_rej_level = 0.6879121425448574;
    msg.custom_x = 0.25692976544467416;
    msg.custom_y = 0.4273299571177762;
    msg.custom_z = 0.9155760796850536;

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
    msg.setTimeStamp(0.8887115828310164);
    msg.setSource(28913U);
    msg.setSourceEntity(228U);
    msg.setDestination(64599U);
    msg.setDestinationEntity(132U);
    msg.utc_time = 0.23051344989289058;
    msg.reason = 214U;

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
    msg.setTimeStamp(0.8165897412909888);
    msg.setSource(30073U);
    msg.setSourceEntity(41U);
    msg.setDestination(20265U);
    msg.setDestinationEntity(23U);
    msg.utc_time = 0.6299024056222393;
    msg.reason = 86U;

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
    msg.setTimeStamp(0.6359379994726491);
    msg.setSource(58114U);
    msg.setSourceEntity(200U);
    msg.setDestination(20571U);
    msg.setDestinationEntity(78U);
    msg.utc_time = 0.2476263438029529;
    msg.reason = 225U;

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
    msg.setTimeStamp(0.6873293780262518);
    msg.setSource(55245U);
    msg.setSourceEntity(253U);
    msg.setDestination(29174U);
    msg.setDestinationEntity(117U);
    msg.id = 108U;
    msg.range = 0.6587142332684697;
    msg.acceptance = 146U;

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
    msg.setTimeStamp(0.14389534295371031);
    msg.setSource(13102U);
    msg.setSourceEntity(79U);
    msg.setDestination(45506U);
    msg.setDestinationEntity(171U);
    msg.id = 136U;
    msg.range = 0.20196725304689978;
    msg.acceptance = 134U;

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
    msg.setTimeStamp(0.9939626920737947);
    msg.setSource(30751U);
    msg.setSourceEntity(237U);
    msg.setDestination(15643U);
    msg.setDestinationEntity(193U);
    msg.id = 84U;
    msg.range = 0.6203211813897809;
    msg.acceptance = 209U;

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
    msg.setTimeStamp(0.02870526628263792);
    msg.setSource(63563U);
    msg.setSourceEntity(202U);
    msg.setDestination(25842U);
    msg.setDestinationEntity(219U);
    msg.type = 252U;
    msg.reason = 208U;
    msg.value = 0.3819267975989533;
    msg.timestep = 0.14816688984035442;

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
    msg.setTimeStamp(0.43525007653627124);
    msg.setSource(14016U);
    msg.setSourceEntity(123U);
    msg.setDestination(13610U);
    msg.setDestinationEntity(74U);
    msg.type = 217U;
    msg.reason = 229U;
    msg.value = 0.7085426431408349;
    msg.timestep = 0.5888568243441828;

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
    msg.setTimeStamp(0.8832759291429387);
    msg.setSource(1885U);
    msg.setSourceEntity(191U);
    msg.setDestination(31701U);
    msg.setDestinationEntity(233U);
    msg.type = 64U;
    msg.reason = 77U;
    msg.value = 0.20808632145170292;
    msg.timestep = 0.5986449442711952;

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
    msg.setTimeStamp(0.6662873781753901);
    msg.setSource(62965U);
    msg.setSourceEntity(182U);
    msg.setDestination(32375U);
    msg.setDestinationEntity(65U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DCEHVDDYXLQOJLOWROAZTSUJPKSELVRVIRUCIDSHZBPXOSSULWCMNQNRGFLNRNYYCTZQBMZEFZGUHWTANVG");
    tmp_msg_0.lat = 0.40287183097041757;
    tmp_msg_0.lon = 0.3582966591708462;
    tmp_msg_0.depth = 0.903638666151239;
    tmp_msg_0.query_channel = 179U;
    tmp_msg_0.reply_channel = 112U;
    tmp_msg_0.transponder_delay = 116U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.06777414996207598;
    msg.y = 0.6919993401764778;
    msg.var_x = 0.7619736334203947;
    msg.var_y = 0.7130294036170025;
    msg.distance = 0.8894656852086017;

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
    msg.setTimeStamp(0.08164383912123752);
    msg.setSource(22346U);
    msg.setSourceEntity(109U);
    msg.setDestination(25961U);
    msg.setDestinationEntity(111U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MGSKKDUIBYXQWJQTMLMJCWIWARJACKLZRLJZHUWLSBKHCN");
    tmp_msg_0.lat = 0.2604653409442592;
    tmp_msg_0.lon = 0.9336736734812978;
    tmp_msg_0.depth = 0.29679741621784317;
    tmp_msg_0.query_channel = 20U;
    tmp_msg_0.reply_channel = 72U;
    tmp_msg_0.transponder_delay = 148U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6499407955089477;
    msg.y = 0.977469256035975;
    msg.var_x = 0.6946876057197778;
    msg.var_y = 0.00847741873228347;
    msg.distance = 0.71086135591128;

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
    msg.setTimeStamp(0.5030619828610932);
    msg.setSource(33439U);
    msg.setSourceEntity(53U);
    msg.setDestination(25506U);
    msg.setDestinationEntity(195U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FOBBUGAKNRKFIVFIOBWMFZKYXIYLQCNJDKXREDSMPUBMINOQUHEHOYKZYCDANMPXJLJEXVJXSTGRBTPFLUYWAXUMMAEHAZXAGTOCCYFQGBEDACIAETHVGSOLHWNU");
    tmp_msg_0.lat = 0.9810103700299334;
    tmp_msg_0.lon = 0.5206807427664512;
    tmp_msg_0.depth = 0.04376782787268951;
    tmp_msg_0.query_channel = 148U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 207U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6854206999168769;
    msg.y = 0.526646374944822;
    msg.var_x = 0.24404048677350432;
    msg.var_y = 0.7928639928431567;
    msg.distance = 0.25352440899257433;

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
    msg.setTimeStamp(0.7472613455599764);
    msg.setSource(13594U);
    msg.setSourceEntity(188U);
    msg.setDestination(10388U);
    msg.setDestinationEntity(216U);
    msg.state = 101U;

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
    msg.setTimeStamp(0.4874379189193734);
    msg.setSource(33080U);
    msg.setSourceEntity(227U);
    msg.setDestination(37374U);
    msg.setDestinationEntity(108U);
    msg.state = 16U;

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
    msg.setTimeStamp(0.23644123553214658);
    msg.setSource(37904U);
    msg.setSourceEntity(28U);
    msg.setDestination(12483U);
    msg.setDestinationEntity(190U);
    msg.state = 161U;

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
    msg.setTimeStamp(0.09969842619531688);
    msg.setSource(7440U);
    msg.setSourceEntity(169U);
    msg.setDestination(54078U);
    msg.setDestinationEntity(142U);
    msg.x = 0.0068326471733650695;
    msg.y = 0.25543326094723495;
    msg.z = 0.2768000560965431;

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
    msg.setTimeStamp(0.6863562012905873);
    msg.setSource(43695U);
    msg.setSourceEntity(46U);
    msg.setDestination(60319U);
    msg.setDestinationEntity(223U);
    msg.x = 0.16535280474918046;
    msg.y = 0.4464706104759051;
    msg.z = 0.7664885364625561;

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
    msg.setTimeStamp(0.14011369495157344);
    msg.setSource(56981U);
    msg.setSourceEntity(90U);
    msg.setDestination(32053U);
    msg.setDestinationEntity(24U);
    msg.x = 0.6258619871587192;
    msg.y = 0.8110723499018436;
    msg.z = 0.3777616884733347;

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
    msg.setTimeStamp(0.24646001901336467);
    msg.setSource(60616U);
    msg.setSourceEntity(150U);
    msg.setDestination(11877U);
    msg.setDestinationEntity(50U);
    msg.value = 0.9581051562456319;

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
    msg.setTimeStamp(0.5293950751556743);
    msg.setSource(56591U);
    msg.setSourceEntity(228U);
    msg.setDestination(55051U);
    msg.setDestinationEntity(101U);
    msg.value = 0.37778056031229046;

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
    msg.setTimeStamp(0.21339139691442588);
    msg.setSource(36734U);
    msg.setSourceEntity(143U);
    msg.setDestination(53280U);
    msg.setDestinationEntity(213U);
    msg.value = 0.12747131482578045;

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
    msg.setTimeStamp(0.7426735363970952);
    msg.setSource(15751U);
    msg.setSourceEntity(110U);
    msg.setDestination(10721U);
    msg.setDestinationEntity(9U);
    msg.value = 0.2914729928142067;
    msg.z_units = 208U;

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
    msg.setTimeStamp(0.07884613042972433);
    msg.setSource(33466U);
    msg.setSourceEntity(51U);
    msg.setDestination(64509U);
    msg.setDestinationEntity(141U);
    msg.value = 0.2718065262967191;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.41239038813479445);
    msg.setSource(55441U);
    msg.setSourceEntity(94U);
    msg.setDestination(18564U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5675179994211322;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.33385448662035355);
    msg.setSource(54225U);
    msg.setSourceEntity(77U);
    msg.setDestination(23830U);
    msg.setDestinationEntity(130U);
    msg.value = 0.009518522019307474;
    msg.speed_units = 5U;

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
    msg.setTimeStamp(0.5416792839070901);
    msg.setSource(18747U);
    msg.setSourceEntity(122U);
    msg.setDestination(36135U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7769685656819674;
    msg.speed_units = 214U;

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
    msg.setTimeStamp(0.8612407652910736);
    msg.setSource(18466U);
    msg.setSourceEntity(59U);
    msg.setDestination(7313U);
    msg.setDestinationEntity(15U);
    msg.value = 0.2750544211444277;
    msg.speed_units = 44U;

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
    msg.setTimeStamp(0.4574485086175847);
    msg.setSource(13538U);
    msg.setSourceEntity(134U);
    msg.setDestination(53697U);
    msg.setDestinationEntity(151U);
    msg.value = 0.6462347150814635;

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
    msg.setTimeStamp(0.3729226813737323);
    msg.setSource(39489U);
    msg.setSourceEntity(60U);
    msg.setDestination(53780U);
    msg.setDestinationEntity(74U);
    msg.value = 0.15094250840160783;

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
    msg.setTimeStamp(0.4143968116343134);
    msg.setSource(60831U);
    msg.setSourceEntity(196U);
    msg.setDestination(61680U);
    msg.setDestinationEntity(129U);
    msg.value = 0.4130020761183494;

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
    msg.setTimeStamp(0.4082401008923474);
    msg.setSource(11682U);
    msg.setSourceEntity(194U);
    msg.setDestination(10356U);
    msg.setDestinationEntity(180U);
    msg.value = 0.2874880884271591;

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
    msg.setTimeStamp(0.30488705906050584);
    msg.setSource(15735U);
    msg.setSourceEntity(214U);
    msg.setDestination(37954U);
    msg.setDestinationEntity(105U);
    msg.value = 0.23534807154460802;

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
    msg.setTimeStamp(0.5889977886323149);
    msg.setSource(2661U);
    msg.setSourceEntity(168U);
    msg.setDestination(12457U);
    msg.setDestinationEntity(218U);
    msg.value = 0.8331144934441762;

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
    msg.setTimeStamp(0.5626486049423595);
    msg.setSource(24154U);
    msg.setSourceEntity(208U);
    msg.setDestination(22503U);
    msg.setDestinationEntity(204U);
    msg.value = 0.7132347017854108;

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
    msg.setTimeStamp(0.6533988952551977);
    msg.setSource(56626U);
    msg.setSourceEntity(168U);
    msg.setDestination(59837U);
    msg.setDestinationEntity(39U);
    msg.value = 0.8953282432779504;

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
    msg.setTimeStamp(0.8984330741471517);
    msg.setSource(1030U);
    msg.setSourceEntity(189U);
    msg.setDestination(50583U);
    msg.setDestinationEntity(57U);
    msg.value = 0.4230220737448549;

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
    msg.setTimeStamp(0.027174953754222075);
    msg.setSource(49786U);
    msg.setSourceEntity(72U);
    msg.setDestination(59104U);
    msg.setDestinationEntity(228U);
    msg.path_ref = 2001748153U;
    msg.start_lat = 0.4367287424747226;
    msg.start_lon = 0.18932513047953625;
    msg.start_z = 0.5305275432219976;
    msg.start_z_units = 128U;
    msg.end_lat = 0.9611193311397561;
    msg.end_lon = 0.913892975332782;
    msg.end_z = 0.4455465524945965;
    msg.end_z_units = 29U;
    msg.speed = 0.19413904003827032;
    msg.speed_units = 170U;
    msg.lradius = 0.6913713366269878;
    msg.flags = 87U;

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
    msg.setTimeStamp(0.3164798261688745);
    msg.setSource(37508U);
    msg.setSourceEntity(245U);
    msg.setDestination(41713U);
    msg.setDestinationEntity(66U);
    msg.path_ref = 1038445439U;
    msg.start_lat = 0.7789402026821142;
    msg.start_lon = 0.1754340136432898;
    msg.start_z = 0.05442184508883996;
    msg.start_z_units = 176U;
    msg.end_lat = 0.010138179454677543;
    msg.end_lon = 0.5677928399661635;
    msg.end_z = 0.13305275168882447;
    msg.end_z_units = 226U;
    msg.speed = 0.27918325606464134;
    msg.speed_units = 46U;
    msg.lradius = 0.19808795840313465;
    msg.flags = 242U;

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
    msg.setTimeStamp(0.9522626182567646);
    msg.setSource(44880U);
    msg.setSourceEntity(92U);
    msg.setDestination(65071U);
    msg.setDestinationEntity(113U);
    msg.path_ref = 3737043061U;
    msg.start_lat = 0.07136919541350273;
    msg.start_lon = 0.87591782802003;
    msg.start_z = 0.3977434753660928;
    msg.start_z_units = 159U;
    msg.end_lat = 0.5544694330443315;
    msg.end_lon = 0.8546759647522472;
    msg.end_z = 0.2529035690766527;
    msg.end_z_units = 112U;
    msg.speed = 0.28384253481008437;
    msg.speed_units = 33U;
    msg.lradius = 0.20896689813691172;
    msg.flags = 191U;

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
    msg.setTimeStamp(0.3842704689978941);
    msg.setSource(52368U);
    msg.setSourceEntity(150U);
    msg.setDestination(44627U);
    msg.setDestinationEntity(120U);
    msg.x = 0.966242964742675;
    msg.y = 0.994463694032673;
    msg.z = 0.7335696406863785;
    msg.k = 0.6766205784746816;
    msg.m = 0.7740022088283416;
    msg.n = 0.2745476771819131;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.5351211963974879);
    msg.setSource(32981U);
    msg.setSourceEntity(57U);
    msg.setDestination(42067U);
    msg.setDestinationEntity(244U);
    msg.x = 0.2531535078378787;
    msg.y = 0.22602689862303782;
    msg.z = 0.3037167644564164;
    msg.k = 0.6898765918086205;
    msg.m = 0.011276430697486406;
    msg.n = 0.4643795404671681;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.4681288130684328);
    msg.setSource(41552U);
    msg.setSourceEntity(103U);
    msg.setDestination(1809U);
    msg.setDestinationEntity(83U);
    msg.x = 0.9494749945137969;
    msg.y = 0.7557052129673241;
    msg.z = 0.09743770346719749;
    msg.k = 0.1003749682901347;
    msg.m = 0.6411947537162764;
    msg.n = 0.9581867971796947;
    msg.flags = 84U;

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
    msg.setTimeStamp(0.338287097975989);
    msg.setSource(63778U);
    msg.setSourceEntity(88U);
    msg.setDestination(9794U);
    msg.setDestinationEntity(105U);
    msg.value = 0.3697309390829103;

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
    msg.setTimeStamp(0.15862726724856324);
    msg.setSource(50033U);
    msg.setSourceEntity(249U);
    msg.setDestination(24998U);
    msg.setDestinationEntity(61U);
    msg.value = 0.9592208517190154;

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
    msg.setTimeStamp(0.46306421456351143);
    msg.setSource(30335U);
    msg.setSourceEntity(225U);
    msg.setDestination(42515U);
    msg.setDestinationEntity(99U);
    msg.value = 0.3032897643157859;

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
    msg.setTimeStamp(0.020753129588028885);
    msg.setSource(54691U);
    msg.setSourceEntity(11U);
    msg.setDestination(62593U);
    msg.setDestinationEntity(213U);
    msg.u = 0.41980187493138166;
    msg.v = 0.317440150040075;
    msg.w = 0.402199861882933;
    msg.p = 0.7115303043509255;
    msg.q = 0.2771653571254268;
    msg.r = 0.5637148945355047;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.9122294865973536);
    msg.setSource(27367U);
    msg.setSourceEntity(93U);
    msg.setDestination(39114U);
    msg.setDestinationEntity(201U);
    msg.u = 0.21166085582704297;
    msg.v = 0.9398219612467161;
    msg.w = 0.39777408706238804;
    msg.p = 0.42866674144059513;
    msg.q = 0.6832877140452731;
    msg.r = 0.8955200526312771;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.7669687106556797);
    msg.setSource(57886U);
    msg.setSourceEntity(86U);
    msg.setDestination(42179U);
    msg.setDestinationEntity(234U);
    msg.u = 0.06881572515847811;
    msg.v = 0.052899475856512224;
    msg.w = 0.9333886553463627;
    msg.p = 0.8131272366460454;
    msg.q = 0.4967953445636626;
    msg.r = 0.4392080409156984;
    msg.flags = 101U;

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
    msg.setTimeStamp(0.8152441063361718);
    msg.setSource(11695U);
    msg.setSourceEntity(61U);
    msg.setDestination(12237U);
    msg.setDestinationEntity(75U);
    msg.path_ref = 446584309U;
    msg.start_lat = 0.6349006887014829;
    msg.start_lon = 0.48267784012465986;
    msg.start_z = 0.3611658259088859;
    msg.start_z_units = 223U;
    msg.end_lat = 0.08323904343149668;
    msg.end_lon = 0.9957304787635964;
    msg.end_z = 0.14013253013731974;
    msg.end_z_units = 151U;
    msg.lradius = 0.02170120996656899;
    msg.flags = 89U;
    msg.x = 0.47460973232595605;
    msg.y = 0.2760688787424579;
    msg.z = 0.5384468722241924;
    msg.vx = 0.062226888136437286;
    msg.vy = 0.9480797149578931;
    msg.vz = 0.4194835162395314;
    msg.course_error = 0.95093867143745;
    msg.eta = 1902U;

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
    msg.setTimeStamp(0.3766776687222493);
    msg.setSource(65317U);
    msg.setSourceEntity(128U);
    msg.setDestination(24309U);
    msg.setDestinationEntity(168U);
    msg.path_ref = 1671194638U;
    msg.start_lat = 0.3441546809380114;
    msg.start_lon = 0.594779284663699;
    msg.start_z = 0.8342927797012564;
    msg.start_z_units = 164U;
    msg.end_lat = 0.11262459621957743;
    msg.end_lon = 0.8115304179731088;
    msg.end_z = 0.6246206229560176;
    msg.end_z_units = 221U;
    msg.lradius = 0.9285827988996455;
    msg.flags = 0U;
    msg.x = 0.09455349651191747;
    msg.y = 0.24106630806943274;
    msg.z = 0.28645748040463603;
    msg.vx = 0.2512438609623525;
    msg.vy = 0.5883994779113878;
    msg.vz = 0.08846868370324168;
    msg.course_error = 0.38911579706453114;
    msg.eta = 52005U;

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
    msg.setTimeStamp(0.847579362858808);
    msg.setSource(45930U);
    msg.setSourceEntity(14U);
    msg.setDestination(36793U);
    msg.setDestinationEntity(99U);
    msg.path_ref = 3267496449U;
    msg.start_lat = 0.147926304701956;
    msg.start_lon = 0.19398529419228805;
    msg.start_z = 0.11845698172370878;
    msg.start_z_units = 213U;
    msg.end_lat = 0.9687139541827283;
    msg.end_lon = 0.2823343572586886;
    msg.end_z = 0.7104713757674482;
    msg.end_z_units = 226U;
    msg.lradius = 0.06660100338964159;
    msg.flags = 23U;
    msg.x = 0.001398410922512583;
    msg.y = 0.9326268829527737;
    msg.z = 0.9948265602672438;
    msg.vx = 0.16069697446192632;
    msg.vy = 0.7183991712649668;
    msg.vz = 0.5766396663535722;
    msg.course_error = 0.6461787213351466;
    msg.eta = 22551U;

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
    msg.setTimeStamp(0.2810626869760382);
    msg.setSource(50354U);
    msg.setSourceEntity(50U);
    msg.setDestination(59674U);
    msg.setDestinationEntity(1U);
    msg.k = 0.8485531269227262;
    msg.m = 0.2455704657074912;
    msg.n = 0.7616577004863297;

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
    msg.setTimeStamp(0.1192774079296628);
    msg.setSource(1076U);
    msg.setSourceEntity(29U);
    msg.setDestination(2420U);
    msg.setDestinationEntity(128U);
    msg.k = 0.7333570373833983;
    msg.m = 0.9120998516001071;
    msg.n = 0.5499357521192001;

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
    msg.setTimeStamp(0.91982171129353);
    msg.setSource(20312U);
    msg.setSourceEntity(146U);
    msg.setDestination(42745U);
    msg.setDestinationEntity(218U);
    msg.k = 0.26565762073277976;
    msg.m = 0.3552434646002758;
    msg.n = 0.6839657540713905;

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
    msg.setTimeStamp(0.14425091037999094);
    msg.setSource(17062U);
    msg.setSourceEntity(227U);
    msg.setDestination(16308U);
    msg.setDestinationEntity(69U);
    msg.p = 0.9666235057360207;
    msg.i = 0.7862797383731065;
    msg.d = 0.5697684001496279;
    msg.a = 0.265259393290616;

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
    msg.setTimeStamp(0.3652729030030172);
    msg.setSource(43746U);
    msg.setSourceEntity(18U);
    msg.setDestination(5950U);
    msg.setDestinationEntity(21U);
    msg.p = 0.34340043155205835;
    msg.i = 0.7341968750835974;
    msg.d = 0.4659614575145832;
    msg.a = 0.9865361723524777;

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
    msg.setTimeStamp(0.6650612155523178);
    msg.setSource(32013U);
    msg.setSourceEntity(151U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(176U);
    msg.p = 0.8012843757112137;
    msg.i = 0.8117751200109928;
    msg.d = 0.3382112007873834;
    msg.a = 0.28474585970087407;

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
    msg.setTimeStamp(0.796848973662278);
    msg.setSource(35445U);
    msg.setSourceEntity(228U);
    msg.setDestination(36425U);
    msg.setDestinationEntity(76U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.5748378281131894);
    msg.setSource(50868U);
    msg.setSourceEntity(125U);
    msg.setDestination(49853U);
    msg.setDestinationEntity(17U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.9003223437080512);
    msg.setSource(52836U);
    msg.setSourceEntity(35U);
    msg.setDestination(16912U);
    msg.setDestinationEntity(82U);
    msg.op = 7U;

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
    msg.setTimeStamp(0.14876612563251634);
    msg.setSource(12872U);
    msg.setSourceEntity(57U);
    msg.setDestination(63168U);
    msg.setDestinationEntity(127U);
    msg.timeout = 10388U;
    msg.lat = 0.913943730036671;
    msg.lon = 0.23617608960307757;
    msg.z = 0.0386139455885075;
    msg.z_units = 73U;
    msg.speed = 0.7872458088542346;
    msg.speed_units = 211U;
    msg.roll = 0.4079440188509419;
    msg.pitch = 0.9245445685688121;
    msg.yaw = 0.40990750415551025;
    msg.custom.assign("MYVCAQCLIDOTPSVEXUKSPBEBDNABMDWUTQTIVOKWPQSHTMSNYTMTVHJHGRUZCEYYOKNMWADDOZELYQCEOMLJBPHTISOQJVFXFBLWRJLSNDVLJJXRHXTZWYKCFPLJVRWGUPIXCGAJBRFMTFGHMZXNSFLOXUJFSRVHLGAPDEZROYCPQMYNKIWKUXGOL");

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
    msg.setTimeStamp(0.13039414789813253);
    msg.setSource(60378U);
    msg.setSourceEntity(211U);
    msg.setDestination(17669U);
    msg.setDestinationEntity(10U);
    msg.timeout = 19685U;
    msg.lat = 0.40548476236010456;
    msg.lon = 0.5217809828157794;
    msg.z = 0.41522657513865435;
    msg.z_units = 227U;
    msg.speed = 0.4957274600868442;
    msg.speed_units = 104U;
    msg.roll = 0.06866616496519962;
    msg.pitch = 0.8584087005499972;
    msg.yaw = 0.9134830901043574;
    msg.custom.assign("GNOESGWCWKLJNUQSFUVSHKAWMTJTTCUAAGTJSVYXRUKKQOSWBYFPAOTNDLLQCEOTXLWDQQDKFDPRIACHWAJHHUOOAYZZRXB");

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
    msg.setTimeStamp(0.4550704215481799);
    msg.setSource(29844U);
    msg.setSourceEntity(150U);
    msg.setDestination(23308U);
    msg.setDestinationEntity(135U);
    msg.timeout = 30913U;
    msg.lat = 0.15888763089328928;
    msg.lon = 0.9632013801670505;
    msg.z = 0.5385096973343725;
    msg.z_units = 137U;
    msg.speed = 0.3674726561091929;
    msg.speed_units = 192U;
    msg.roll = 0.4571836959391967;
    msg.pitch = 0.6177977341390835;
    msg.yaw = 0.19685825986171812;
    msg.custom.assign("VPXDGTVWJZTAETOYTFNPSWFJNMAGHYXHUGXWYAEAZWLRKSKIILANDXNJQWJKEGMBBXDMCICMRUOSPRHVDMQCCENXUCYUOJCZQHHINUGDJZEDWRAXYRMGOTLDLYEQLHVEULPWZDZBQOAQFKHQMXSV");

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
    msg.setTimeStamp(0.7916436840721223);
    msg.setSource(41745U);
    msg.setSourceEntity(51U);
    msg.setDestination(41676U);
    msg.setDestinationEntity(24U);
    msg.timeout = 64083U;
    msg.lat = 0.6115229146845594;
    msg.lon = 0.26203294258982457;
    msg.z = 0.4289156968565786;
    msg.z_units = 195U;
    msg.speed = 0.9670119765751712;
    msg.speed_units = 241U;
    msg.duration = 63785U;
    msg.radius = 0.09527764606688305;
    msg.flags = 122U;
    msg.custom.assign("QWPZRYDDOBPJHYDMYJPATUXLGIKHSIBATZXFSILZGVBQTZRWJFJVOSDPMRNKUSKSEPASDBLDLGAGMLIJRBTUJFQBIGCUDNNOJPXRNUFEQVETYFVXHQGCHEVYOWFZSXZACWKEJWXOPFNQPNTBFRTNLHKMIO");

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
    msg.setTimeStamp(0.5280344717803951);
    msg.setSource(7766U);
    msg.setSourceEntity(7U);
    msg.setDestination(18281U);
    msg.setDestinationEntity(191U);
    msg.timeout = 42209U;
    msg.lat = 0.15247895159556213;
    msg.lon = 0.2158850215022795;
    msg.z = 0.41048690925610776;
    msg.z_units = 231U;
    msg.speed = 0.2856551478524416;
    msg.speed_units = 2U;
    msg.duration = 2539U;
    msg.radius = 0.0678985863524263;
    msg.flags = 146U;
    msg.custom.assign("NLOOXXEIBGVPTCEBUFQVRVAOPLLZEZOBQMNUKGPSVUDIJMTXHCNKTGWCYKTGRWADHXSWXEPBBVUQYJJEAAJKVTFQBHMREYCDJAECTFWGYNHVRSRAPHCFPDKENKHBNONWBBIFDYSFLWLPTYYRIXKVQAFVQFIKLQARZPTHOJOYDLDJSRSQPBIGOAWZMNVQUKUSGJGJZTJXZYUQMWZDEICRUSCSI");

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
    msg.setTimeStamp(0.39192122526893314);
    msg.setSource(3511U);
    msg.setSourceEntity(169U);
    msg.setDestination(23967U);
    msg.setDestinationEntity(94U);
    msg.timeout = 41U;
    msg.lat = 0.34716969178021184;
    msg.lon = 0.9268627685288654;
    msg.z = 0.45495550980719346;
    msg.z_units = 129U;
    msg.speed = 0.4506667156337484;
    msg.speed_units = 113U;
    msg.duration = 62525U;
    msg.radius = 0.15784642484480915;
    msg.flags = 225U;
    msg.custom.assign("ATONKMSGEENKLJUJVYZFYSQBELEAKXQUIPDGCNVGWITSHKXKOJDDMSHBMDWBRMVYXPGVFWFAXUMSKTIAYUTELDAHHZRBWLAIRZJLL");

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
    msg.setTimeStamp(0.7315242220174515);
    msg.setSource(18112U);
    msg.setSourceEntity(117U);
    msg.setDestination(48279U);
    msg.setDestinationEntity(14U);
    msg.custom.assign("YYGHSBCKUTJLUTUNHJBQYAEPKOMAWGHFVMMXFRQCJZDTELFEUSAKXIOHKLQFOWOQDBOVERUFYRACNTSWHVEHSLYRDGIYWOZKUSZGDXZVABMDTJWMPZEOWMSGPLFCPQIUTMTXDEBNZGBCLRENWSVALVSDFGTPHRVGKXRGJBCPPEVYWKKJYLAIICPUNINIMQDBDAUNPANCV");

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
    msg.setTimeStamp(0.3374800596684395);
    msg.setSource(37885U);
    msg.setSourceEntity(119U);
    msg.setDestination(27626U);
    msg.setDestinationEntity(203U);
    msg.custom.assign("ZAFZQWUJCDESCUAJTCQYMMFMNFHBWQSPBIVYAWSYLWMRTRXGOOVCENLHQYKFRUZZAXEHDXPUZOREAGJCKQBVUYGHLHTUGYFZM");

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
    msg.setTimeStamp(0.4000075622171717);
    msg.setSource(2078U);
    msg.setSourceEntity(135U);
    msg.setDestination(20943U);
    msg.setDestinationEntity(173U);
    msg.custom.assign("JSOAGKNLYYERLJWICPYTNCEQJYZXWPLTUKHRNBZDVIXCCCVQYYFZYFQEQHHE");

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
    msg.setTimeStamp(0.1265124099757048);
    msg.setSource(6823U);
    msg.setSourceEntity(110U);
    msg.setDestination(23701U);
    msg.setDestinationEntity(232U);
    msg.timeout = 61765U;
    msg.lat = 0.8710076092799304;
    msg.lon = 0.8469563063983417;
    msg.z = 0.7181082354637821;
    msg.z_units = 213U;
    msg.duration = 49953U;
    msg.speed = 0.32521988015773484;
    msg.speed_units = 154U;
    msg.type = 12U;
    msg.radius = 0.8530366833341444;
    msg.length = 0.41147104452092886;
    msg.bearing = 0.7915093128631424;
    msg.direction = 233U;
    msg.custom.assign("OCLWAKLFZLFUAPXNYWAIXMBIYDETNESHPKRFUMWJUOBWXNTOMELIGXULDBQOVNBVLAXHKMEVOSFBMRKXKRYMEQJYSSHBCTUZVJYXGPHUCVGNZADGZXPQDPYVISUAJUFQEIOQODECGNPDDCTCTRHROSVZWHR");

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
    msg.setTimeStamp(0.03323630585792947);
    msg.setSource(10514U);
    msg.setSourceEntity(52U);
    msg.setDestination(23480U);
    msg.setDestinationEntity(8U);
    msg.timeout = 43996U;
    msg.lat = 0.5600588149411067;
    msg.lon = 0.32722552250374837;
    msg.z = 0.6474107167969612;
    msg.z_units = 212U;
    msg.duration = 62010U;
    msg.speed = 0.00417287383071685;
    msg.speed_units = 241U;
    msg.type = 35U;
    msg.radius = 0.9616027968105403;
    msg.length = 0.9058057166644162;
    msg.bearing = 0.0343907364935071;
    msg.direction = 214U;
    msg.custom.assign("GIJXPTEZLICNYXOBJDFAHXKAFHJXATAPGIRUGNOMTGSVOFOBDAQQHRMXGBUDEVSFWVCCPYSSNQTGJHIXVOPRNBBDDQUHWDYRJDEPORKYEAVXMWZNMGLSKINISYHEZUMVYGLFKWCNIZJNBPVGKBFYACCTJNUPCROKYORXDQCRLVXKZUOUTYMEZFWEQEHQHUVAQWRSFZHCKWKRMJUPUPQSSSVOLMWAKGTBJWFNQEJHTZYLMCZEITLLLBDFLPT");

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
    msg.setTimeStamp(0.9521587797805316);
    msg.setSource(28344U);
    msg.setSourceEntity(160U);
    msg.setDestination(41728U);
    msg.setDestinationEntity(140U);
    msg.timeout = 56495U;
    msg.lat = 0.3951013136361149;
    msg.lon = 0.5234912623063097;
    msg.z = 0.5037308703943304;
    msg.z_units = 247U;
    msg.duration = 54077U;
    msg.speed = 0.3042907116258986;
    msg.speed_units = 145U;
    msg.type = 223U;
    msg.radius = 0.03655964136383294;
    msg.length = 0.6693874186410064;
    msg.bearing = 0.3921109471870906;
    msg.direction = 231U;
    msg.custom.assign("RIKYOKEAVXUHQPJWTUPBFDBOALLWNWXJBXIYRSOAISKXTETQGLUBMGOJIUVUBWCNJZMFAFXMBYMZQROVRRWJSANQWYNMLAGALOCTLYDEAZNXMRMIGPRIOUYVWAFLLWDI");

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
    msg.setTimeStamp(0.9532524749277353);
    msg.setSource(11171U);
    msg.setSourceEntity(126U);
    msg.setDestination(12003U);
    msg.setDestinationEntity(54U);
    msg.duration = 37625U;
    msg.custom.assign("VOSQMWQBMIAWAEPGWKUXQEKXJWWNLRFLMZEXBBHAGHVPUGMIGRBVXXNWSLFFNEARPNDQNTEYBVCKIIHCYDEQYMHGLVCWIFIKRUUFWETDRFANCSHJBQSDKPJIOHFYDKZHURUUZA");

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
    msg.setTimeStamp(0.09132140958508006);
    msg.setSource(36567U);
    msg.setSourceEntity(75U);
    msg.setDestination(33025U);
    msg.setDestinationEntity(179U);
    msg.duration = 42965U;
    msg.custom.assign("MDIOUZMHXPHKQYQPZGPLTATHJZYUVKNIUGTSLVOBBGIEQ");

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
    msg.setTimeStamp(0.6361227601722383);
    msg.setSource(33143U);
    msg.setSourceEntity(171U);
    msg.setDestination(42705U);
    msg.setDestinationEntity(149U);
    msg.duration = 11642U;
    msg.custom.assign("UXRETVOIEYYNWFYFNKRVFZAINPAGAUJLBISWTLVKVTWQMLUBYCFOFKKFBLPQNADPANPTHTMDSBSAZNUKBVQGWHNQUCCOPTHJRRMWLBQMROZABUHTUTQZYEDJRRSOJFKMSMRXOXCXCWDKJPHPSMIHPELYPJUEYEXHWSYALSCIYNXGIDIGWCXGDWOF");

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
    msg.setTimeStamp(0.2040501260338382);
    msg.setSource(17058U);
    msg.setSourceEntity(93U);
    msg.setDestination(36318U);
    msg.setDestinationEntity(214U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.09650024757480546;
    tmp_msg_0.z_units = 166U;
    msg.control.set(tmp_msg_0);
    msg.duration = 37485U;
    msg.custom.assign("PHLSKSUHNZUQLFISMWFOQVMQBUZBMLTUMCFVEITZJGGSXKJAWCMTBFCXZGRSSRIXNYYQNFBXKUCZEKVDGCELRWIBDBKVWJQQSGCHLGKCLKHJZEDDAOXWUGMLWYYRQXAMKJFGPKEYLWDDITAPVYVIQDOPOTPBUEABWXMUFEARSNASXRSTYGTTRWJYPETFRWGFYLHHQORJ");

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
    msg.setTimeStamp(0.8578452705186496);
    msg.setSource(706U);
    msg.setSourceEntity(156U);
    msg.setDestination(32454U);
    msg.setDestinationEntity(13U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.11358742665789723;
    msg.control.set(tmp_msg_0);
    msg.duration = 21515U;
    msg.custom.assign("YKVZSJMEFC");

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
    msg.setTimeStamp(0.8151540375980164);
    msg.setSource(26259U);
    msg.setSourceEntity(201U);
    msg.setDestination(59809U);
    msg.setDestinationEntity(211U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.9644471812418977;
    msg.control.set(tmp_msg_0);
    msg.duration = 11688U;
    msg.custom.assign("UCAJOBAZZJYMQKNFJHAOSWXPWZGZJDVPYBGCKUXTUHLIOVHCOKYQNGIGDRAAHEDLKLWEWMPSZWIIVNQWDSRBKGRPKTLXGQJDNCPY");

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
    msg.setTimeStamp(0.490546019305681);
    msg.setSource(58142U);
    msg.setSourceEntity(248U);
    msg.setDestination(64639U);
    msg.setDestinationEntity(101U);
    msg.timeout = 6505U;
    msg.lat = 0.7900969066902962;
    msg.lon = 0.7703254537531684;
    msg.z = 0.0585823816490495;
    msg.z_units = 198U;
    msg.speed = 0.0852886126786202;
    msg.speed_units = 143U;
    msg.bearing = 0.009352447187228718;
    msg.cross_angle = 0.944563661824814;
    msg.width = 0.8641932463872578;
    msg.length = 0.0971772722496832;
    msg.hstep = 0.18552583802594702;
    msg.coff = 94U;
    msg.alternation = 89U;
    msg.flags = 164U;
    msg.custom.assign("XVCSEQTGWGSDEPBP");

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
    msg.setTimeStamp(0.9622162803756866);
    msg.setSource(3589U);
    msg.setSourceEntity(19U);
    msg.setDestination(10609U);
    msg.setDestinationEntity(36U);
    msg.timeout = 42045U;
    msg.lat = 0.1911110460049138;
    msg.lon = 0.27581611377302695;
    msg.z = 0.6929812154175287;
    msg.z_units = 159U;
    msg.speed = 0.36657148904822623;
    msg.speed_units = 202U;
    msg.bearing = 0.5675317117796511;
    msg.cross_angle = 0.9650862117887578;
    msg.width = 0.9780840676142325;
    msg.length = 0.7875868253313302;
    msg.hstep = 0.3377935225014832;
    msg.coff = 34U;
    msg.alternation = 192U;
    msg.flags = 116U;
    msg.custom.assign("IXZHPBFULWZTXVZEQGQBJPBLAYFFCOMUDZEOFMCBJQRKSZYOVLSGOIJMKQXWEBJYTQJWRDXNGIBSXEGYNXBIDHPTDYZELCOPQRHPAIHXFJZWGNHONSKVJMKLMAHPWKALNSDVOAGHIPCCWNVVFSKIEFOQERSFCICAUFUGTURSJOLPLTMBMHPYWIVSGDIWKHTYLQZTWNAYLCTQRJORZABTUUYEKXRQNVUZFK");

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
    msg.setTimeStamp(0.4196142479791607);
    msg.setSource(27814U);
    msg.setSourceEntity(96U);
    msg.setDestination(18595U);
    msg.setDestinationEntity(228U);
    msg.timeout = 64156U;
    msg.lat = 0.5724370856902457;
    msg.lon = 0.6397100359729214;
    msg.z = 0.7881473955537366;
    msg.z_units = 86U;
    msg.speed = 0.8877073363172737;
    msg.speed_units = 174U;
    msg.bearing = 0.7191030298674636;
    msg.cross_angle = 0.9279231748764377;
    msg.width = 0.7108501078607584;
    msg.length = 0.8918734891418921;
    msg.hstep = 0.9927493221659915;
    msg.coff = 36U;
    msg.alternation = 56U;
    msg.flags = 80U;
    msg.custom.assign("WLWHAIZKJXMTGAYLGFSJMLFFWBEKOJIVAYBWENMALGYJVWSRNXDXOSUNYUVOPQIEAMZYGQNRMLYGEGPOTCOHASFISDQANMVTTFHIFUZCDAHUEEMTMUIT");

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
    msg.setTimeStamp(0.2783370741011304);
    msg.setSource(1361U);
    msg.setSourceEntity(92U);
    msg.setDestination(5930U);
    msg.setDestinationEntity(115U);
    msg.timeout = 30078U;
    msg.lat = 0.42539425038617773;
    msg.lon = 0.4029938165099404;
    msg.z = 0.5985428190269787;
    msg.z_units = 2U;
    msg.speed = 0.050692947584024095;
    msg.speed_units = 167U;
    msg.custom.assign("FBSNAVCENBTWUFQWHOPEIVRQGNOVHJSXBNGJUMOLUHTVYAFMHWZPKKSYXXHMNUMZRAZPHQWFJUDBOQEEZ");

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
    msg.setTimeStamp(0.9618419232144815);
    msg.setSource(28674U);
    msg.setSourceEntity(13U);
    msg.setDestination(40438U);
    msg.setDestinationEntity(97U);
    msg.timeout = 2178U;
    msg.lat = 0.663292669400251;
    msg.lon = 0.7936093641081261;
    msg.z = 0.7245319462314024;
    msg.z_units = 240U;
    msg.speed = 0.058590105822796446;
    msg.speed_units = 242U;
    msg.custom.assign("XEHJVGZPIKIJFDTFNIRUDKTDUTIGPWZPGYFMBSUZYADLJLVBHEWCZDGJ");

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
    msg.setTimeStamp(0.6236281761266903);
    msg.setSource(54610U);
    msg.setSourceEntity(121U);
    msg.setDestination(12822U);
    msg.setDestinationEntity(31U);
    msg.timeout = 11287U;
    msg.lat = 0.47157196134562473;
    msg.lon = 0.08173294938719466;
    msg.z = 0.6136742991518839;
    msg.z_units = 102U;
    msg.speed = 0.7304576353317824;
    msg.speed_units = 178U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5332900340755858;
    tmp_msg_0.y = 0.4583537081882346;
    tmp_msg_0.z = 0.9006519415360841;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IJYBTHRRKJUOLRCOMRHVDHBSBPYFGCQZJIBFTUICEIRBVSOLRNJNPTLMFTLMLAKZJ");

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
    msg.setTimeStamp(0.34781268953864697);
    msg.setSource(55058U);
    msg.setSourceEntity(202U);
    msg.setDestination(26685U);
    msg.setDestinationEntity(241U);
    msg.x = 0.4433603696876852;
    msg.y = 0.3495473701592441;
    msg.z = 0.8631703222989425;

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
    msg.setTimeStamp(0.1826573808827453);
    msg.setSource(55524U);
    msg.setSourceEntity(136U);
    msg.setDestination(2893U);
    msg.setDestinationEntity(70U);
    msg.x = 0.9249742979688329;
    msg.y = 0.7523306918273488;
    msg.z = 0.2878767601352875;

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
    msg.setTimeStamp(0.4431834809436598);
    msg.setSource(50118U);
    msg.setSourceEntity(12U);
    msg.setDestination(5125U);
    msg.setDestinationEntity(16U);
    msg.x = 0.6057397144403409;
    msg.y = 0.17171554816264034;
    msg.z = 0.9820995829342388;

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
    msg.setTimeStamp(0.7185719974289421);
    msg.setSource(33682U);
    msg.setSourceEntity(224U);
    msg.setDestination(56103U);
    msg.setDestinationEntity(242U);
    msg.timeout = 31867U;
    msg.lat = 0.16675569883456343;
    msg.lon = 0.9000246708382952;
    msg.z = 0.26578571211467716;
    msg.z_units = 231U;
    msg.amplitude = 0.8224073708161146;
    msg.pitch = 0.02403512346274328;
    msg.speed = 0.11910180901734158;
    msg.speed_units = 126U;
    msg.custom.assign("INPOPTEEOAJTHRBAZCKOZQXDTITJVYCGUKSPNJAKXH");

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
    msg.setTimeStamp(0.4185755037772817);
    msg.setSource(16169U);
    msg.setSourceEntity(201U);
    msg.setDestination(64819U);
    msg.setDestinationEntity(247U);
    msg.timeout = 49084U;
    msg.lat = 0.3245873351060685;
    msg.lon = 0.6053462083819557;
    msg.z = 0.4481798571924822;
    msg.z_units = 244U;
    msg.amplitude = 0.4335092328523339;
    msg.pitch = 0.3930956402582473;
    msg.speed = 0.2595812844164679;
    msg.speed_units = 46U;
    msg.custom.assign("YYIHMLWOFTCFTQWINMJXFTHKJSFERCPUMWLGBLYTZIZXTWKYOCDKMZAAAH");

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
    msg.setTimeStamp(0.34895849615125196);
    msg.setSource(22422U);
    msg.setSourceEntity(210U);
    msg.setDestination(36148U);
    msg.setDestinationEntity(49U);
    msg.timeout = 56857U;
    msg.lat = 0.1497521997457364;
    msg.lon = 0.13225175538386358;
    msg.z = 0.942326614890674;
    msg.z_units = 125U;
    msg.amplitude = 0.8698272259284676;
    msg.pitch = 0.8265823781560483;
    msg.speed = 0.09953333638927708;
    msg.speed_units = 228U;
    msg.custom.assign("LJMASUQMVMXCKKTGHLGVCWWUEYZRODHLYSJQPBNSZAGCSMIQNQXPOMWWJOVCTSCGUWVSXOPXRBBTHQFBTYOCAIBDMLVNBHYATRAZTZYNIFZLXLDJBFQZYGLOIJPGICNMWDNPZLOADEJTHIHGUMADCKBVKNVCMFOPTURHUEKDYQQU");

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
    msg.setTimeStamp(0.9249135944892533);
    msg.setSource(31889U);
    msg.setSourceEntity(230U);
    msg.setDestination(63104U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.15912292033098285);
    msg.setSource(63845U);
    msg.setSourceEntity(200U);
    msg.setDestination(27029U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.40157188496907603);
    msg.setSource(9087U);
    msg.setSourceEntity(97U);
    msg.setDestination(52085U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.4096579776215179);
    msg.setSource(24282U);
    msg.setSourceEntity(74U);
    msg.setDestination(2036U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.6742811404632807;
    msg.lon = 0.2054429176949697;
    msg.z = 0.3513777133989975;
    msg.z_units = 187U;
    msg.radius = 0.9918159216703757;
    msg.duration = 36147U;
    msg.speed = 0.16122134972271918;
    msg.speed_units = 69U;
    msg.custom.assign("VGDAEACZMFCOTBIHWZGKILHZFDFZNIKUTXWJIRHXVAKELZGMQPVQUFAENNTPQOQVWQQELEKTJRAKFKSUJYGQRGUMX");

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
    msg.setTimeStamp(0.05626635938566682);
    msg.setSource(34585U);
    msg.setSourceEntity(31U);
    msg.setDestination(39390U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.2044210269514869;
    msg.lon = 0.9090848038801834;
    msg.z = 0.18271563605820074;
    msg.z_units = 226U;
    msg.radius = 0.9322368735722211;
    msg.duration = 24773U;
    msg.speed = 0.6448205100005754;
    msg.speed_units = 31U;
    msg.custom.assign("EBGQQMSLFXKHNOELFYYQEJUVPWADNMFIXVPFSIBVFDVFHQNUPJYKIVQJIKXMARVSVZZWGXIPNKTPTIKZZXCDLHZDRFSAUMTCQWLAXYCXCATRKRWVUBOERDJAUEIXJCSCMZJHEEKDPE");

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
    msg.setTimeStamp(0.14367120681867995);
    msg.setSource(6697U);
    msg.setSourceEntity(25U);
    msg.setDestination(10578U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.9393431223783114;
    msg.lon = 0.10912255123580372;
    msg.z = 0.5071221503483407;
    msg.z_units = 63U;
    msg.radius = 0.7107501847228997;
    msg.duration = 9977U;
    msg.speed = 0.47990941771316065;
    msg.speed_units = 93U;
    msg.custom.assign("SXMOTARZYZUFGRIVICKLRQRNXQYHTTNFBQIRZYCI");

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
    msg.setTimeStamp(0.3061604303113874);
    msg.setSource(30011U);
    msg.setSourceEntity(124U);
    msg.setDestination(33089U);
    msg.setDestinationEntity(223U);
    msg.timeout = 47275U;
    msg.flags = 179U;
    msg.lat = 0.9069814802549309;
    msg.lon = 0.8875459775062523;
    msg.start_z = 0.9270836511070529;
    msg.start_z_units = 230U;
    msg.end_z = 0.4061282226189479;
    msg.end_z_units = 28U;
    msg.radius = 0.6666936803541262;
    msg.speed = 0.38900404745352224;
    msg.speed_units = 240U;
    msg.custom.assign("GXMDESOKFSYPSWEIYXHGGGWUPPVLAVZALJMRBTYCIMKPESVIGBHUHKIXPVXDXQLBFFLYRZJZNXCCXPRGMJKEYEBQSHUKYNMRPNQI");

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
    msg.setTimeStamp(0.9777487082463111);
    msg.setSource(45085U);
    msg.setSourceEntity(83U);
    msg.setDestination(9166U);
    msg.setDestinationEntity(179U);
    msg.timeout = 12573U;
    msg.flags = 242U;
    msg.lat = 0.33699241727117535;
    msg.lon = 0.06269232845078254;
    msg.start_z = 0.6360861241337821;
    msg.start_z_units = 30U;
    msg.end_z = 0.07167517147853564;
    msg.end_z_units = 229U;
    msg.radius = 0.9731744309437763;
    msg.speed = 0.2821608656715978;
    msg.speed_units = 245U;
    msg.custom.assign("NHPSAPQXETMNKFDYLDLWKJCDGMOIDGBCKJXWEGBDHRVEYSVQZRRHPRSBOVNELHAZAWEJGIYKCYFOLUXNMCQIPQBABKBPWSZYDVSTVSDWMCZUROJQGNZINHEJHIAILGLZVSWUIQTBYIXJURRLWLQSZTVFPMXZXUXIHFMXBXADTIEOCDBAEUOTR");

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
    msg.setTimeStamp(0.4936864962999845);
    msg.setSource(56010U);
    msg.setSourceEntity(151U);
    msg.setDestination(51040U);
    msg.setDestinationEntity(59U);
    msg.timeout = 63581U;
    msg.flags = 158U;
    msg.lat = 0.2657961484513788;
    msg.lon = 0.37511242936042655;
    msg.start_z = 0.9209770085368674;
    msg.start_z_units = 137U;
    msg.end_z = 0.21349332956086686;
    msg.end_z_units = 113U;
    msg.radius = 0.9574837821954679;
    msg.speed = 0.9120730194494301;
    msg.speed_units = 33U;
    msg.custom.assign("MNUZACOXABCHKTZXOJJSBYROHVSGMCWXSMYBQVWPMOOYPHDTTNLUOQIGOUYFEMZEUSGSFLBPLEYTRWPJFLZYLTHFLJFCNIMYXAVRLZLYPUZEGHHCERVZNVIKMDPPQXSCOSNRBRJVIQIHUGYGCYUVTDEAKJKGXNOHKQACKIDGNRWZTVFBKPFDJUPCIKCRFXTDHVEJBMZZJKGORWDDQFWEAMFGNWQWLKEQN");

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
    msg.setTimeStamp(0.7989026526240104);
    msg.setSource(1874U);
    msg.setSourceEntity(33U);
    msg.setDestination(51240U);
    msg.setDestinationEntity(45U);
    msg.timeout = 65217U;
    msg.lat = 0.862833691022397;
    msg.lon = 0.7781775148119017;
    msg.z = 0.551404026962963;
    msg.z_units = 210U;
    msg.speed = 0.3404689918462216;
    msg.speed_units = 12U;
    msg.custom.assign("FUAEWUXYNEWYQWMVZLOJLVCPPFPEOWQZJOVNYRXZOCHXZQEMBKWOBUIETHFFJQONPTJQKOSHXNDYRAKBJLZZPUSAIDNAHIDRKZIPFGKIXGCZLJMMSNDWOUPSVDFGMSAEDAQHSEREDRLGPABHCDAMYYNAKGJCEFXFFTBJUNXLSKWKCBLRTQD");

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
    msg.setTimeStamp(0.41498427887490386);
    msg.setSource(6522U);
    msg.setSourceEntity(218U);
    msg.setDestination(65492U);
    msg.setDestinationEntity(75U);
    msg.timeout = 23686U;
    msg.lat = 0.8577910641044912;
    msg.lon = 0.32745120577677944;
    msg.z = 0.3371524451278758;
    msg.z_units = 108U;
    msg.speed = 0.09258469113615242;
    msg.speed_units = 55U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8266619715669036;
    tmp_msg_0.y = 0.14298539963869972;
    tmp_msg_0.z = 0.3784127349189377;
    tmp_msg_0.t = 0.6165501634145917;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ECHPVUYPVKACRQS");

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
    msg.setTimeStamp(0.6798690604765365);
    msg.setSource(50751U);
    msg.setSourceEntity(226U);
    msg.setDestination(43705U);
    msg.setDestinationEntity(98U);
    msg.timeout = 22014U;
    msg.lat = 0.17244346711726688;
    msg.lon = 0.2698478782346606;
    msg.z = 0.6596901454601071;
    msg.z_units = 72U;
    msg.speed = 0.8288814121757653;
    msg.speed_units = 192U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9024349709242859;
    tmp_msg_0.y = 0.5643965946175373;
    tmp_msg_0.z = 0.2878974371849864;
    tmp_msg_0.t = 0.6980339576090462;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JMQXKBHIVOANRAENFENMLEPCHYBDWSOAMPKDSWCSPTKLGHIVGEJJPTTCXWBZOIAXVTLNCMKCVZKLODPVJGQKFKGOUXXUSFJOYJYODFUNDSWDYAFLIFULHXUTUSDFUMLBJBBHOFCKKRDTPZMEUXNQGWBANRMSRFIZIUSQTWTJJBQXEGILQNIWGVWPRDCZHFQXQRPOZMCVLPHVTYTEZBSIWVZPAYYOYAWZ");

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
    msg.setTimeStamp(0.14499781462519967);
    msg.setSource(18759U);
    msg.setSourceEntity(170U);
    msg.setDestination(56084U);
    msg.setDestinationEntity(85U);
    msg.x = 0.11685265886702356;
    msg.y = 0.03257228436894655;
    msg.z = 0.568176994813607;
    msg.t = 0.7045965214088559;

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
    msg.setTimeStamp(0.8388949833476017);
    msg.setSource(47670U);
    msg.setSourceEntity(207U);
    msg.setDestination(29340U);
    msg.setDestinationEntity(253U);
    msg.x = 0.16038744198635402;
    msg.y = 0.5343331196921368;
    msg.z = 0.8503727294305038;
    msg.t = 0.8409011669737054;

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
    msg.setTimeStamp(0.3514671471436739);
    msg.setSource(42323U);
    msg.setSourceEntity(85U);
    msg.setDestination(56209U);
    msg.setDestinationEntity(68U);
    msg.x = 0.09341449003805369;
    msg.y = 0.8128187957144238;
    msg.z = 0.3457327871301611;
    msg.t = 0.663311913756563;

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
    msg.setTimeStamp(0.28489613320204743);
    msg.setSource(35493U);
    msg.setSourceEntity(71U);
    msg.setDestination(36208U);
    msg.setDestinationEntity(101U);
    msg.timeout = 54473U;
    msg.name.assign("NKEIDMXLZGKNCKQTORGGDPMQRDILPJYLSYDZUISQMFTJWBCAYDOWCIERSCOIHOAWYOHESJUYZNCDWVFKHXFLHHVUVPQBEAUYJGDLDXNGTTISQVVNRZPQWVTKZGRZTEUURDEGSWLJZMTVFCYXFNG");
    msg.custom.assign("MGPMBMENWZYTKPXORHQWRUQRTNJNOPHDNBLYSJSMAMFWLBSGZZYZTBIDTTBFXINJCAZFWMKABCLXBKYXNEUSFZIMNKDXQACKGRKJEZPAFKQEWEFCYHNOQLPLZCCGBIBYYFCGXFJHRNPJMQ");

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
    msg.setTimeStamp(0.43577131101139754);
    msg.setSource(9067U);
    msg.setSourceEntity(194U);
    msg.setDestination(40624U);
    msg.setDestinationEntity(227U);
    msg.timeout = 11152U;
    msg.name.assign("FJTLXTLDIGZEWSURRBANHCPVBYPLXOBZWLIPWVIAZJRSCWBRJKBCDAQSXYVVQEMTZYKUDIPOWHZMYTCFVBWNGCGRHETFDMPALTRDEUBQQTWAXOUJQBOSUIFGDKHUOHXRBQSDRTIERPNBVJIZYPXPAOOVYJNMMUJNOEUYKUYFHGLDLZSSDCXILEKXMVWGMZXENQNLQSYOGQNDJSKKEGKMCVXFHHYICFENPGZZPASNAQUCWFFW");
    msg.custom.assign("RTPJOYLIYXAIVHNUHUOSBBKNRR");

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
    msg.setTimeStamp(0.09193282705837391);
    msg.setSource(65003U);
    msg.setSourceEntity(210U);
    msg.setDestination(34961U);
    msg.setDestinationEntity(94U);
    msg.timeout = 28221U;
    msg.name.assign("JRWLIFDWZSOYZRXNRPGCULXMMQQSHFTAVMLPOAWYFAFXNYNHUIZULOSPEJKNZBKQVUMBVXTIWYVPVMVFLBIWOHVRPBYIWRJUDEFJCGIJLEHUJAWGFQKKBTTSJALYCYAIDTXYSPNZTCHNEDRKODIGSRCXFQEBQRAUQCLEQMTGTXKBRGEOCWZZPJKZDNYS");
    msg.custom.assign("EGHQVPNAZMLENJDQUNJLWPSQKOSUJMKOSOTOSRUNWPICVCYBDPDNBMFRKUUXTF");

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
    msg.setTimeStamp(0.31686984134097274);
    msg.setSource(62773U);
    msg.setSourceEntity(222U);
    msg.setDestination(14208U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.3567406336666865;
    msg.lon = 0.5974873292256816;
    msg.z = 0.9264114287177467;
    msg.z_units = 7U;
    msg.speed = 0.9948303608339291;
    msg.speed_units = 86U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.01058761776398398;
    tmp_msg_0.y = 0.9086667171050771;
    tmp_msg_0.z = 0.5328079331674745;
    tmp_msg_0.t = 0.43649344495492315;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 39020U;
    tmp_msg_1.off_x = 0.057236244053989194;
    tmp_msg_1.off_y = 0.4792169940501916;
    tmp_msg_1.off_z = 0.6279298452400857;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.7533929459597433;
    msg.custom.assign("IOITUNLPDNECCGXQKFXEOTZEOHXWNPJHQIGJSJMMDUUGCOLNHWRJJIOXZLESVFCXHVTZYVYNOEXJFHBRZRTUJAVREREFGGSVFTKZPUWBYEHQPZXSFKHKCMVOUINMZQMALHDIMXQYSTIDLUAKPETQEHYCDSPVAQNFFVKBOYCZUSBACPTAXBQNCMJOZNPLSJULSDYWSKGTYWWBJWRRNMFAZBDRQWA");

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
    msg.setTimeStamp(0.3519426363939785);
    msg.setSource(25882U);
    msg.setSourceEntity(245U);
    msg.setDestination(9697U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.3259923606459262;
    msg.lon = 0.9877528232663407;
    msg.z = 0.5349267487588323;
    msg.z_units = 139U;
    msg.speed = 0.8817836976552171;
    msg.speed_units = 224U;
    msg.start_time = 0.7922019512459031;
    msg.custom.assign("VGAGEPFKFNIASZIHQM");

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
    msg.setTimeStamp(0.7000457749210327);
    msg.setSource(46959U);
    msg.setSourceEntity(83U);
    msg.setDestination(29008U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.2546759154488544;
    msg.lon = 0.3150180916495411;
    msg.z = 0.29388017702098024;
    msg.z_units = 122U;
    msg.speed = 0.9229704139406947;
    msg.speed_units = 66U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8318325941496076;
    tmp_msg_0.y = 0.6547547385595164;
    tmp_msg_0.z = 0.7594885592108103;
    tmp_msg_0.t = 0.05717637999153158;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5767157309873084;
    msg.custom.assign("VNDFULDWCTZBKBAEGPXMXASWFUKXUGRRJMXDOPGPNKIMYNTMPIFWVVZOHVCPMUJETRVOQDOT");

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
    msg.setTimeStamp(0.6393537763533942);
    msg.setSource(1762U);
    msg.setSourceEntity(5U);
    msg.setDestination(45203U);
    msg.setDestinationEntity(127U);
    msg.vid = 61610U;
    msg.off_x = 0.7201655352976147;
    msg.off_y = 0.8716979578131415;
    msg.off_z = 0.873373650848543;

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
    msg.setTimeStamp(0.49375599214500665);
    msg.setSource(2966U);
    msg.setSourceEntity(157U);
    msg.setDestination(16468U);
    msg.setDestinationEntity(111U);
    msg.vid = 63173U;
    msg.off_x = 0.24322455505027052;
    msg.off_y = 0.22919640915330175;
    msg.off_z = 0.740274447202096;

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
    msg.setTimeStamp(0.18676258661537837);
    msg.setSource(55901U);
    msg.setSourceEntity(42U);
    msg.setDestination(38403U);
    msg.setDestinationEntity(170U);
    msg.vid = 24322U;
    msg.off_x = 0.3068779094583781;
    msg.off_y = 0.32963648186854877;
    msg.off_z = 0.673066840944587;

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
    msg.setTimeStamp(0.5698061300749112);
    msg.setSource(27274U);
    msg.setSourceEntity(37U);
    msg.setDestination(24584U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.33846725068343464);
    msg.setSource(3197U);
    msg.setSourceEntity(138U);
    msg.setDestination(3567U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.5805864745194138);
    msg.setSource(25949U);
    msg.setSourceEntity(80U);
    msg.setDestination(9868U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.5859504738722556);
    msg.setSource(50070U);
    msg.setSourceEntity(2U);
    msg.setDestination(7841U);
    msg.setDestinationEntity(183U);
    msg.mid = 31139U;

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
    msg.setTimeStamp(0.702365387515228);
    msg.setSource(3737U);
    msg.setSourceEntity(249U);
    msg.setDestination(30574U);
    msg.setDestinationEntity(146U);
    msg.mid = 19905U;

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
    msg.setTimeStamp(0.21220162496714667);
    msg.setSource(1462U);
    msg.setSourceEntity(2U);
    msg.setDestination(8289U);
    msg.setDestinationEntity(15U);
    msg.mid = 1684U;

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
    msg.setTimeStamp(0.5009918134869312);
    msg.setSource(54887U);
    msg.setSourceEntity(73U);
    msg.setDestination(25835U);
    msg.setDestinationEntity(123U);
    msg.state = 89U;
    msg.eta = 43056U;
    msg.info.assign("BLYEOEPHQGEUTYIBQDASKFG");

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
    msg.setTimeStamp(0.6790277696648318);
    msg.setSource(28581U);
    msg.setSourceEntity(114U);
    msg.setDestination(65153U);
    msg.setDestinationEntity(86U);
    msg.state = 88U;
    msg.eta = 21615U;
    msg.info.assign("YVJBVQHBBNKNCUVBOXHKNXPSGCMPIITFKJZMBFFZIYCVFQVDUZABONPPSLNZWFWARAIRVTJMHOMVSQQHLSDGZJYGJTLNJDFPBKYUWDPEIQSSOLPRQGTAMAXUKWEQVGEHYUWDFECCSUCICSJYCYAWNZEBEXLKMRPJOZULWOWFTSGBMJSVLAKRIKMNHZMEJWICOOPGZ");

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
    msg.setTimeStamp(0.9827645892205483);
    msg.setSource(53380U);
    msg.setSourceEntity(108U);
    msg.setDestination(54433U);
    msg.setDestinationEntity(8U);
    msg.state = 92U;
    msg.eta = 14731U;
    msg.info.assign("TBZGQPNPHFSLTTIYEFKKYUMFXQKAGNOVOOCPEXKLPKCDTIGFTDHHJBUIPCZMBHJVYWSGQLUMAGLNRZQMVMVWINVWRFOPSASINZDIOROBXLDGYMYMJCKLENGXWJUHTNRSJXYFCVDWMAHLRYVLSXOVAJXXZTBWES");

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
    msg.setTimeStamp(0.965030960447887);
    msg.setSource(31446U);
    msg.setSourceEntity(56U);
    msg.setDestination(21760U);
    msg.setDestinationEntity(22U);
    msg.system = 22864U;
    msg.duration = 27698U;
    msg.speed = 0.25109492866926664;
    msg.speed_units = 64U;
    msg.x = 0.4134293268747937;
    msg.y = 0.9945963010988489;
    msg.z = 0.47487215003454497;
    msg.z_units = 9U;

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
    msg.setTimeStamp(0.5262291922564718);
    msg.setSource(4676U);
    msg.setSourceEntity(243U);
    msg.setDestination(14550U);
    msg.setDestinationEntity(111U);
    msg.system = 45419U;
    msg.duration = 62053U;
    msg.speed = 0.9049085280650482;
    msg.speed_units = 218U;
    msg.x = 0.9639091752357135;
    msg.y = 0.40731609633270516;
    msg.z = 0.9004294434150153;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.8577502400867019);
    msg.setSource(6864U);
    msg.setSourceEntity(51U);
    msg.setDestination(47113U);
    msg.setDestinationEntity(221U);
    msg.system = 32077U;
    msg.duration = 37494U;
    msg.speed = 0.9502410622127597;
    msg.speed_units = 230U;
    msg.x = 0.11468327833578962;
    msg.y = 0.1612472622291734;
    msg.z = 0.009418296328812303;
    msg.z_units = 135U;

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
    msg.setTimeStamp(0.07807402126604013);
    msg.setSource(4116U);
    msg.setSourceEntity(137U);
    msg.setDestination(20167U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.5253303529295982;
    msg.lon = 0.5470222132844492;
    msg.speed = 0.009063027505171628;
    msg.speed_units = 218U;
    msg.duration = 37151U;
    msg.sys_a = 44398U;
    msg.sys_b = 9858U;
    msg.move_threshold = 0.06780702470553712;

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
    msg.setTimeStamp(0.4608819214818233);
    msg.setSource(38124U);
    msg.setSourceEntity(136U);
    msg.setDestination(1995U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.7281018385225916;
    msg.lon = 0.5516346736970315;
    msg.speed = 0.48672582420825194;
    msg.speed_units = 156U;
    msg.duration = 3456U;
    msg.sys_a = 2474U;
    msg.sys_b = 15486U;
    msg.move_threshold = 0.1859686043908424;

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
    msg.setTimeStamp(0.0478657937919158);
    msg.setSource(33048U);
    msg.setSourceEntity(209U);
    msg.setDestination(9813U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.4576777507061899;
    msg.lon = 0.3527819716156363;
    msg.speed = 0.8353443927375623;
    msg.speed_units = 8U;
    msg.duration = 46006U;
    msg.sys_a = 23728U;
    msg.sys_b = 61617U;
    msg.move_threshold = 0.9719723314727953;

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
    msg.setTimeStamp(0.47725562069536764);
    msg.setSource(22515U);
    msg.setSourceEntity(32U);
    msg.setDestination(2835U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.530152761973892;
    msg.lon = 0.03855693675239469;
    msg.z = 0.5936103724213069;
    msg.z_units = 91U;
    msg.speed = 0.11780918947695584;
    msg.speed_units = 63U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.22665171942924311;
    tmp_msg_0.lon = 0.7398992345259221;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KGPIOCBYBARXGYEVHNDRLBDBOMLTOLUMCUZDZTOJGIHXOXNJXPGTXSMQTZJXJVNBHFHQCFIYBRRULVAYQJCKIMCQYFNLMEKQUNJSLEGPFEULDFFOVLEUAMLWDHRTHKNSPGDYHSECRYSPJOWMDZYNMIIZEUSGNRTKYKBGVDABXSOFIAXQKIQHJPWQGDKHKFZXATAJKWPIEGVWQWZRCYOVMRXCCWW");

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
    msg.setTimeStamp(0.8611143301006745);
    msg.setSource(10789U);
    msg.setSourceEntity(66U);
    msg.setDestination(60836U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.5771750289004316;
    msg.lon = 0.2722877721515543;
    msg.z = 0.031718887946921015;
    msg.z_units = 87U;
    msg.speed = 0.6644428932201836;
    msg.speed_units = 139U;
    msg.custom.assign("WWPRBIPPHWVVKSMIRIQJSJTBGMCLLUZCUMZTVATJJRJRATPYEUWLAOKYTDXSOHJOUPFQEKYOCUXHFIIDOSBZPROKJG");

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
    msg.setTimeStamp(0.36288046192141643);
    msg.setSource(29325U);
    msg.setSourceEntity(106U);
    msg.setDestination(35444U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.5792638170805042;
    msg.lon = 0.014704275884411144;
    msg.z = 0.7582692563277164;
    msg.z_units = 52U;
    msg.speed = 0.42813976852922153;
    msg.speed_units = 127U;
    msg.custom.assign("POLZSDCEMZNGVUBIWUMLSYBLBGMXN");

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
    msg.setTimeStamp(0.03975843154105463);
    msg.setSource(36164U);
    msg.setSourceEntity(164U);
    msg.setDestination(45952U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.1730427401162511;
    msg.lon = 0.6852301980177605;

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
    msg.setTimeStamp(0.8178390847286885);
    msg.setSource(39820U);
    msg.setSourceEntity(163U);
    msg.setDestination(42668U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.7003046837708434;
    msg.lon = 0.18089685027797775;

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
    msg.setTimeStamp(0.21539963888083702);
    msg.setSource(19611U);
    msg.setSourceEntity(100U);
    msg.setDestination(58658U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.21277057215807815;
    msg.lon = 0.656296011633837;

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
    msg.setTimeStamp(0.6089166472497259);
    msg.setSource(27577U);
    msg.setSourceEntity(75U);
    msg.setDestination(25022U);
    msg.setDestinationEntity(22U);
    msg.timeout = 6069U;
    msg.lat = 0.5238750055734283;
    msg.lon = 0.2262523922013957;
    msg.z = 0.33410208881521275;
    msg.z_units = 182U;
    msg.pitch = 0.9645889558300019;
    msg.amplitude = 0.9262020094660518;
    msg.duration = 58101U;
    msg.speed = 0.4136498801437244;
    msg.speed_units = 198U;
    msg.radius = 0.6355845596013933;
    msg.direction = 133U;
    msg.custom.assign("RZCLBXSTJOIHUGMKJSCNLKZZUSRHZHBCQXBRITEXGGAMPKIBCYOOBQVREYFAWSHAFOAFCFJHONTRKDJDQOYDGZFPEVHVKGVSAMEUHQNTZDZLJEGQEJUVGACIBWKSWXDXWGCVLUMMNKWVVLMIRIPTZCKNVTBWPLAIWXUHPTXQPUSSHSNJQZBEN");

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
    msg.setTimeStamp(0.8023880113390529);
    msg.setSource(60615U);
    msg.setSourceEntity(155U);
    msg.setDestination(40690U);
    msg.setDestinationEntity(236U);
    msg.timeout = 17340U;
    msg.lat = 0.9371970944206159;
    msg.lon = 0.9889173854138917;
    msg.z = 0.40847669489261806;
    msg.z_units = 225U;
    msg.pitch = 0.24371602621508037;
    msg.amplitude = 0.5206771116186368;
    msg.duration = 52491U;
    msg.speed = 0.4715875200505948;
    msg.speed_units = 239U;
    msg.radius = 0.4268592874154111;
    msg.direction = 0U;
    msg.custom.assign("NYTRNUZPAROEGSLYULUXJOVLUOPNDIQMQOSTOQZLPVFRBUCKKSAYFINUTKWNXLWQYGXFIAVJJTEUMPNBODGAUHESDRGBMESCDWIPZQMPTCMRCCJGERXALYZKBUYBXAADIDWNKAGRBDWJLKYYHVVKXBXCHZFYZHZWNGGSIFIIJMXHSEXEKIEZMPLTHYEMHRQPJENBCHKMQQHLWIDRAZFHOCBJWSVJWDOAOVZ");

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
    msg.setTimeStamp(0.814992496373819);
    msg.setSource(64586U);
    msg.setSourceEntity(8U);
    msg.setDestination(41838U);
    msg.setDestinationEntity(215U);
    msg.timeout = 37062U;
    msg.lat = 0.6817674580928241;
    msg.lon = 0.4773189273238747;
    msg.z = 0.7285815883077066;
    msg.z_units = 100U;
    msg.pitch = 0.7397168024832872;
    msg.amplitude = 0.3284912878708476;
    msg.duration = 45520U;
    msg.speed = 0.07505711900689904;
    msg.speed_units = 239U;
    msg.radius = 0.4734791922070112;
    msg.direction = 101U;
    msg.custom.assign("KJNRSOLFFSQYHRPEUUHTZBMCQRBUQJXGSENGBKOQNVJWOSIVFWSULJDXGGXNUOMPXMSHXVXAJDFDIGESPXBEWTMQVFHMAOXUCDYKZAVINBUVNQLHCWBKLFEISVDPGATBHBLZGXTXWGOKHYTACYWLUIYRFCJL");

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
    msg.setTimeStamp(0.3520228520440223);
    msg.setSource(50153U);
    msg.setSourceEntity(74U);
    msg.setDestination(17822U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("HGTJZQJESBRRBDXBCYDQAPTQUZJRLTOOPGRNJKFUVGGWLSDMDJSHIRMPYCWCWLVMDTMJQBAXADETZLYBZQPPPCLUEEVXPYKFGHRHWYTZIXUARWIMRGNMUBDUQQYZWGIOVNYMSAEFBHUBVUBDIWPPHNDAJVUMETOCSNVIXNSEAUWOMRGSAI");
    msg.reference_frame = 205U;
    msg.custom.assign("AVISWRTCBBJUILELWGODZLYBOI");

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
    msg.setTimeStamp(0.042949342979731076);
    msg.setSource(19423U);
    msg.setSourceEntity(164U);
    msg.setDestination(24889U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("VSZKDVHOKNENDXXRFAWUPQKAQIHJNHTAAUATOAULMFMPFXPCSXKHMFAFZGJBFRRNHSTJWPPDBSFRRQACYTHXCZHPNCYBOELWI");
    msg.reference_frame = 70U;
    msg.custom.assign("FCGGGJOXJRDVMLZOZRQDMCXSPMABCDYCHHDPICTMEHOTSXZWHTHWJNEPXAYUQAV");

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
    msg.setTimeStamp(0.6810286694857336);
    msg.setSource(28574U);
    msg.setSourceEntity(25U);
    msg.setDestination(218U);
    msg.setDestinationEntity(149U);
    msg.formation_name.assign("UXKSUSKBHSTETIDCLZXZDEIVUEMWOTKEP");
    msg.reference_frame = 48U;
    msg.custom.assign("LOGYYVYEZZPTOBWWLUBWUDARRKBDYDXASKEHKXOVXEMJFUMWIGEXWIZOSMUVXNDVDDXVIZQXYCPKMSPKROLFQJLPGIZGXAGPOSDBFEJDQBVATCLRIKRHNGWSJQNVMCFADJCTJGLHNO");

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
    msg.setTimeStamp(0.8163936906689556);
    msg.setSource(5135U);
    msg.setSourceEntity(113U);
    msg.setDestination(10589U);
    msg.setDestinationEntity(222U);
    msg.group_name.assign("NXULGWMEJPUJZTPXKMZACVJGIQWLWWEEDSSXBZCPCEFMUPMTFQOIKCSHHAWBUIYOBRRHVTLOKAHYJTMQPELNZHTHTXPDBNVUKADKBHSIMLFSPBHDKDYPAXLWUBDTAFJKGQYJNKJQKLBJUPOAVNZQOIMSDCDXGUWCKEVXEWYFGHFXMJOGOCAXQRCXLVGCOGQQTBEFINQDNYNWIAFYYNURERSFZZARYGZROI");
    msg.formation_name.assign("NVFUZDSNHWWOUCLRKTXASBBRUGLHZHEHFTIQTUOYLABAZOPNALHUKWSWPVYVTHASTTZFKGJRVLWPDEQEXGFDBMHCEDFOVCUCYJPIBIWUEBFVXXNJDQQUKRBNAJIXBDIFNMISZIHPPCAFCLMYWMJNKQMGPRBNZYHNOLQKGCRGSWADDQMOYOQZTGERECEVYXXIJXYZZPWBKJXUFGDMLTORYFISKTRXUAADKJVYVCHOMJ");
    msg.plan_id.assign("WNSCWRPALHRDKA");
    msg.description.assign("YSYFTKZNOUIJFXJXCDMHKEFWUSASGLHQLEQZNSSEOKAIJIDGVTJZWVPLAKFDMPCVIQMWU");
    msg.leader_speed = 0.0191214417292781;
    msg.leader_bank_lim = 0.8111758331555865;
    msg.pos_sim_err_lim = 0.05510417327319672;
    msg.pos_sim_err_wrn = 0.48276614074059265;
    msg.pos_sim_err_timeout = 2861U;
    msg.converg_max = 0.7962477422326176;
    msg.converg_timeout = 50119U;
    msg.comms_timeout = 38468U;
    msg.turb_lim = 0.9941105337078567;
    msg.custom.assign("EGVMYHDINJJNYGOCWSNFTIIQUYBOHWEPCHBJSGUAQMNVZKTMFSBQKKCZO");

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
    msg.setTimeStamp(0.3656985222067116);
    msg.setSource(32125U);
    msg.setSourceEntity(225U);
    msg.setDestination(44145U);
    msg.setDestinationEntity(61U);
    msg.group_name.assign("LHVKTLBINIVXYZLDKRUEHADJQPYHLWDMUFBZH");
    msg.formation_name.assign("USTLOTEFOKXACIVKDIJG");
    msg.plan_id.assign("ZPOOTXEKISZTNWYHPGKZRTGOIDZXALKCWTXFUAMFPVDVFSPHMHAREUAGPUSLTXRFHEDLKTYZEEYYZQWYAEMMBBWSLGIJHSPMCOBCCAIILLSVJNLAOHQSODNPFTGKQFYPVUVPWNXVUAIBHDSKEKXWJRMHQLSUWDDHCXXQUJYCGDJUQRZZVDICKNERCJVBODRZICRFBYWJGMRNPUNYFEVLQJHUTEGBCOKWJG");
    msg.description.assign("YXKKICEVDDQNYBSTDHBMZGLAWRPONHEJMDGONKOYVZKITEFDCOVPDCJFKLDVISDRRMIUALHGSPYFVFYZQ");
    msg.leader_speed = 0.8334745901028475;
    msg.leader_bank_lim = 0.5682090167895563;
    msg.pos_sim_err_lim = 0.40749224829305164;
    msg.pos_sim_err_wrn = 0.9806177060065676;
    msg.pos_sim_err_timeout = 44440U;
    msg.converg_max = 0.22988164681493706;
    msg.converg_timeout = 19871U;
    msg.comms_timeout = 61108U;
    msg.turb_lim = 0.7971172301383209;
    msg.custom.assign("ZSCTJLZUPOULGVHBAHDFEA");

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
    msg.setTimeStamp(0.9076963165182546);
    msg.setSource(47328U);
    msg.setSourceEntity(141U);
    msg.setDestination(27991U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("NRCDMCSKSGYEKSXIELFOYFNTICXIZGNMCNBGSMFAZEGKACRSOQXBTMAHPDIFZTZINWDIPDOPPJBNTWYMEBXRTZQXDWYXPF");
    msg.formation_name.assign("BKLQCONQZJCIFBGQUTMAJYJWQLNAHDZRBYGEPUBVGTKYEDFSHAIZJOERLPAPJOMBBNFLPRANRLKXFLZXENTMXZWUJIVMRKIBSRPSGONTH");
    msg.plan_id.assign("VGPEXFPCNKYIEPCBZJYHKPQLPNBXCUFOIXQNEKPLBLMDIRAGAOOKFTVJXUEBOWSSEIBWLFGJFMZQVADZRQUQAYTJKKIVVDKFNMEXNJRSRDQYLWNRJTIWROHMYBAWCAGLTIDAUNGYAGQSPXTQTGUCTKWMOZHOFFVMHRZIWQRUSVMWBGJYLWUFKUROSYZTMMLLARZJHSVBMXLDUCJPPWZVFANSCNPZXKBYXDOJCCHTISXCSZBU");
    msg.description.assign("HVWACKFEWXKKTLTJRLHT");
    msg.leader_speed = 0.16700594336960806;
    msg.leader_bank_lim = 0.9181716945784405;
    msg.pos_sim_err_lim = 0.07742431204308464;
    msg.pos_sim_err_wrn = 0.2852876054398996;
    msg.pos_sim_err_timeout = 46451U;
    msg.converg_max = 0.41069846808435584;
    msg.converg_timeout = 5831U;
    msg.comms_timeout = 65308U;
    msg.turb_lim = 0.8415868168653612;
    msg.custom.assign("GDYALCIQFRAERMIVTXKQECBIWSSALNCZEEUDETRQPWHQUDALUQHCGXXWKPEMSWXUJTXHDZOTVVGVHCMTVVIEHBTFQOYKIZQZGDTBSKBWFLEFOZNBDRBOXWLHGUANNTJSAPQINIYGXEDOJPDKCOINKGFGCXRYFOHBRKLDXHRGCZOVBSASJUZWPRWWBOKVNAYLLMPSJJMNUFHILFFVYIJQWCAZCYTAPYGFZYB");

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
    msg.setTimeStamp(0.5374393699906809);
    msg.setSource(15210U);
    msg.setSourceEntity(213U);
    msg.setDestination(10561U);
    msg.setDestinationEntity(227U);
    msg.control_src = 54076U;
    msg.control_ent = 52U;
    msg.timeout = 0.41877526000124543;
    msg.loiter_radius = 0.27095518366100113;
    msg.altitude_interval = 0.9462379432149198;

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
    msg.setTimeStamp(0.79125454696234);
    msg.setSource(47306U);
    msg.setSourceEntity(224U);
    msg.setDestination(11240U);
    msg.setDestinationEntity(14U);
    msg.control_src = 29617U;
    msg.control_ent = 249U;
    msg.timeout = 0.9218722130540555;
    msg.loiter_radius = 0.15277040304176237;
    msg.altitude_interval = 0.4121370994834349;

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
    msg.setTimeStamp(0.12591984966889036);
    msg.setSource(48258U);
    msg.setSourceEntity(118U);
    msg.setDestination(44222U);
    msg.setDestinationEntity(69U);
    msg.control_src = 39297U;
    msg.control_ent = 68U;
    msg.timeout = 0.8283632889756085;
    msg.loiter_radius = 0.6914027462573858;
    msg.altitude_interval = 0.32935773156576764;

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
    msg.setTimeStamp(0.8320807964594581);
    msg.setSource(56792U);
    msg.setSourceEntity(148U);
    msg.setDestination(53594U);
    msg.setDestinationEntity(123U);
    msg.flags = 83U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8304044988733511;
    tmp_msg_0.speed_units = 60U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8285388398144209;
    tmp_msg_1.z_units = 194U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.43721185688378006;
    msg.lon = 0.09536411883688889;
    msg.radius = 0.5448378853762506;

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
    msg.setTimeStamp(0.8841213073193509);
    msg.setSource(34329U);
    msg.setSourceEntity(170U);
    msg.setDestination(48178U);
    msg.setDestinationEntity(126U);
    msg.flags = 157U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5537812377431004;
    tmp_msg_0.speed_units = 172U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.29455381308504336;
    tmp_msg_1.z_units = 50U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0043481738561053085;
    msg.lon = 0.6948948082480794;
    msg.radius = 0.7466758236827237;

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
    msg.setTimeStamp(0.09347814392166054);
    msg.setSource(10091U);
    msg.setSourceEntity(54U);
    msg.setDestination(17405U);
    msg.setDestinationEntity(210U);
    msg.flags = 90U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6213592160371387;
    tmp_msg_0.speed_units = 184U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.038316054440623026;
    tmp_msg_1.z_units = 119U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9549928388329929;
    msg.lon = 0.43210585561242276;
    msg.radius = 0.9952286233571962;

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
    msg.setTimeStamp(0.9882345965080835);
    msg.setSource(52025U);
    msg.setSourceEntity(121U);
    msg.setDestination(63042U);
    msg.setDestinationEntity(101U);
    msg.control_src = 4628U;
    msg.control_ent = 104U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 178U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.44081674009097094;
    tmp_tmp_msg_0_0.speed_units = 69U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9472186167529862;
    tmp_tmp_msg_0_1.z_units = 110U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.17822714305860632;
    tmp_msg_0.lon = 0.9108617423039899;
    tmp_msg_0.radius = 0.523616816045665;
    msg.reference.set(tmp_msg_0);
    msg.state = 160U;
    msg.proximity = 198U;

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
    msg.setTimeStamp(0.1403640510409081);
    msg.setSource(539U);
    msg.setSourceEntity(156U);
    msg.setDestination(12476U);
    msg.setDestinationEntity(249U);
    msg.control_src = 53130U;
    msg.control_ent = 118U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 201U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8399854873022536;
    tmp_tmp_msg_0_0.speed_units = 143U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5602042145125073;
    tmp_tmp_msg_0_1.z_units = 243U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7863356854041157;
    tmp_msg_0.lon = 0.13960050349488518;
    tmp_msg_0.radius = 0.1161359396595325;
    msg.reference.set(tmp_msg_0);
    msg.state = 249U;
    msg.proximity = 111U;

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
    msg.setTimeStamp(0.1584692905054227);
    msg.setSource(57588U);
    msg.setSourceEntity(209U);
    msg.setDestination(39236U);
    msg.setDestinationEntity(113U);
    msg.control_src = 9135U;
    msg.control_ent = 125U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 254U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8997905427127267;
    tmp_tmp_msg_0_0.speed_units = 6U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.4664885878087456;
    tmp_tmp_msg_0_1.z_units = 89U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.674544117083548;
    tmp_msg_0.lon = 0.3875900554061391;
    tmp_msg_0.radius = 0.02189362010814866;
    msg.reference.set(tmp_msg_0);
    msg.state = 94U;
    msg.proximity = 151U;

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
    msg.setTimeStamp(0.8618029692876689);
    msg.setSource(30671U);
    msg.setSourceEntity(175U);
    msg.setDestination(42403U);
    msg.setDestinationEntity(169U);
    msg.ax_cmd = 0.6314602676065459;
    msg.ay_cmd = 0.18851509414779966;
    msg.az_cmd = 0.6192198504620492;
    msg.ax_des = 0.07093247673591074;
    msg.ay_des = 0.9175284498137926;
    msg.az_des = 0.6303476620988898;
    msg.virt_err_x = 0.5610311242702329;
    msg.virt_err_y = 0.952889125306147;
    msg.virt_err_z = 0.9502900076185894;
    msg.surf_fdbk_x = 0.8828427050368627;
    msg.surf_fdbk_y = 0.07917880378530529;
    msg.surf_fdbk_z = 0.8852936040053399;
    msg.surf_unkn_x = 0.7299403332781096;
    msg.surf_unkn_y = 0.09648714151566962;
    msg.surf_unkn_z = 0.6797309510820208;
    msg.ss_x = 0.7124139883555999;
    msg.ss_y = 0.26236733929110123;
    msg.ss_z = 0.41063122029436394;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TSJKLUBDEBAMOGRYMOBJQAMKVBKHKENGWLIPQIYOATCJOHDKYCLOMUIXUPVXAVOMGSOCLZTYTVDOQDZHMLAGTRZDIVCLWAKLRBZSDEUICBHZOJTQNEYKLDFYQKNWUSDFPEHIAZXBMENCRVUSODSQJNXVQZUJSIHIPSFNWHJXEARFWNYZEQFRLXXWHINXMJXSGAPWCYKTFGGYTUJMTFALUQBZCPDKGQSEIXUYNFRWFVPWEVBHTGRC");
    tmp_msg_0.dist = 0.22558967461390045;
    tmp_msg_0.err = 0.8099606317832503;
    tmp_msg_0.ctrl_imp = 0.15550687378781392;
    tmp_msg_0.rel_dir_x = 0.7067004005187876;
    tmp_msg_0.rel_dir_y = 0.7255103430669769;
    tmp_msg_0.rel_dir_z = 0.9664587749018873;
    tmp_msg_0.err_x = 0.01306809930020969;
    tmp_msg_0.err_y = 0.5168139738602966;
    tmp_msg_0.err_z = 0.7442322391615473;
    tmp_msg_0.rf_err_x = 0.10713800213482394;
    tmp_msg_0.rf_err_y = 0.7262223870253166;
    tmp_msg_0.rf_err_z = 0.7618703266042374;
    tmp_msg_0.rf_err_vx = 0.7484417537215158;
    tmp_msg_0.rf_err_vy = 0.800860819864066;
    tmp_msg_0.rf_err_vz = 0.46221601503309184;
    tmp_msg_0.ss_x = 0.20239510780596492;
    tmp_msg_0.ss_y = 0.1626733933316541;
    tmp_msg_0.ss_z = 0.05794003401021164;
    tmp_msg_0.virt_err_x = 0.5371645210830652;
    tmp_msg_0.virt_err_y = 0.8318758598403806;
    tmp_msg_0.virt_err_z = 0.42424284385107336;
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
    msg.setTimeStamp(0.019313503802139365);
    msg.setSource(36657U);
    msg.setSourceEntity(50U);
    msg.setDestination(8356U);
    msg.setDestinationEntity(223U);
    msg.ax_cmd = 0.39154444358133245;
    msg.ay_cmd = 0.7933263393796836;
    msg.az_cmd = 0.9165423599712857;
    msg.ax_des = 0.15378762417143144;
    msg.ay_des = 0.5828533317943986;
    msg.az_des = 0.2960666349394445;
    msg.virt_err_x = 0.6370095878301631;
    msg.virt_err_y = 0.6671475277676022;
    msg.virt_err_z = 0.6293176607335738;
    msg.surf_fdbk_x = 0.8593052599261687;
    msg.surf_fdbk_y = 0.43336739169390714;
    msg.surf_fdbk_z = 0.5029078654395961;
    msg.surf_unkn_x = 0.0960112113925089;
    msg.surf_unkn_y = 0.73459446413226;
    msg.surf_unkn_z = 0.37778352487884304;
    msg.ss_x = 0.5412554554744746;
    msg.ss_y = 0.3393130118029829;
    msg.ss_z = 0.5066727411013077;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SWHFAZHSKVTCMHLLJQPDROARVCSPLWNQNXEIGWRIVZGWFCUXQMOKNYQSSWMRULGOINFPDEHDBGVTGJQKUZTDFZGGMTIKQCTYPVZAGBUAQFAJIREEJPMXILBWOUHHKKZ");
    tmp_msg_0.dist = 0.19590936554155503;
    tmp_msg_0.err = 0.17436809763247418;
    tmp_msg_0.ctrl_imp = 0.5219846672264724;
    tmp_msg_0.rel_dir_x = 0.9603090747028925;
    tmp_msg_0.rel_dir_y = 0.9185574381119826;
    tmp_msg_0.rel_dir_z = 0.028848484545976105;
    tmp_msg_0.err_x = 0.5480283818561604;
    tmp_msg_0.err_y = 0.09312013811338005;
    tmp_msg_0.err_z = 0.4117785319344537;
    tmp_msg_0.rf_err_x = 0.08881489255498165;
    tmp_msg_0.rf_err_y = 0.3910022196550421;
    tmp_msg_0.rf_err_z = 0.4540218624686322;
    tmp_msg_0.rf_err_vx = 0.3724702060808591;
    tmp_msg_0.rf_err_vy = 0.21520951696256252;
    tmp_msg_0.rf_err_vz = 0.1159033974106013;
    tmp_msg_0.ss_x = 0.44577870425439525;
    tmp_msg_0.ss_y = 0.16322358734749143;
    tmp_msg_0.ss_z = 0.3052681041842037;
    tmp_msg_0.virt_err_x = 0.8903146878361707;
    tmp_msg_0.virt_err_y = 0.3703041185476873;
    tmp_msg_0.virt_err_z = 0.7251461517068956;
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
    msg.setTimeStamp(0.9028397106649906);
    msg.setSource(5835U);
    msg.setSourceEntity(226U);
    msg.setDestination(7580U);
    msg.setDestinationEntity(12U);
    msg.ax_cmd = 0.14464453721928483;
    msg.ay_cmd = 0.7730377640455733;
    msg.az_cmd = 0.9994956578790885;
    msg.ax_des = 0.014641783380036744;
    msg.ay_des = 0.8257143464801355;
    msg.az_des = 0.06923029499632072;
    msg.virt_err_x = 0.7857498506442417;
    msg.virt_err_y = 0.8480553387745766;
    msg.virt_err_z = 0.5772309814721363;
    msg.surf_fdbk_x = 0.8408590828986084;
    msg.surf_fdbk_y = 0.47213062495208113;
    msg.surf_fdbk_z = 0.03256001778299933;
    msg.surf_unkn_x = 0.71993326809101;
    msg.surf_unkn_y = 0.2928368933744291;
    msg.surf_unkn_z = 0.40243758366162186;
    msg.ss_x = 0.8607302517755128;
    msg.ss_y = 0.2947112875146569;
    msg.ss_z = 0.8266177069015597;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NGUDADASPBEQBILVXMJOPOEUJXVNFPMBYUCQFZOZXQGGIJRRJKECRJGEJOTHXXYFASAZJXDBVSJVDXFPZGYRQNIWFPOFGAZCSVTWRWPILHLOXAICCDZNAPBRSEGISLMATYNKUWHHVQPOLCPKKMEILMLQVVTDXTFUIHSTYUGUKKSUWYWKEMNCQEVYOHDAWIBETUSMOLHCQBJNWRKRPFRTUMBVWCHFK");
    tmp_msg_0.dist = 0.8617485415634263;
    tmp_msg_0.err = 0.18689202913806624;
    tmp_msg_0.ctrl_imp = 0.2493142723375581;
    tmp_msg_0.rel_dir_x = 0.5823384890398653;
    tmp_msg_0.rel_dir_y = 0.3071593112499077;
    tmp_msg_0.rel_dir_z = 0.4157373928927869;
    tmp_msg_0.err_x = 0.3634969257282431;
    tmp_msg_0.err_y = 0.46335647269017677;
    tmp_msg_0.err_z = 0.42959511216764057;
    tmp_msg_0.rf_err_x = 0.6672183590850745;
    tmp_msg_0.rf_err_y = 0.5158929322991781;
    tmp_msg_0.rf_err_z = 0.04497889038846714;
    tmp_msg_0.rf_err_vx = 0.6356446204509156;
    tmp_msg_0.rf_err_vy = 0.6233652434850033;
    tmp_msg_0.rf_err_vz = 0.34870797353675;
    tmp_msg_0.ss_x = 0.5825265472867954;
    tmp_msg_0.ss_y = 0.2672263740831924;
    tmp_msg_0.ss_z = 0.7379371282040197;
    tmp_msg_0.virt_err_x = 0.24174817293012307;
    tmp_msg_0.virt_err_y = 0.25942779297751195;
    tmp_msg_0.virt_err_z = 0.05526542609366181;
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
    msg.setTimeStamp(0.41604203186215927);
    msg.setSource(35615U);
    msg.setSourceEntity(120U);
    msg.setDestination(9702U);
    msg.setDestinationEntity(160U);
    msg.s_id.assign("IKBYVCJDIENEQSECYHYAGQEFQHCGPSUWMGGDYZIJWVFYUKSMKSUNRXWAKQDICEZACTZVPDXWTBQUURHJOMW");
    msg.dist = 0.7111747237454694;
    msg.err = 0.7776635914144975;
    msg.ctrl_imp = 0.5032992915975769;
    msg.rel_dir_x = 0.8562554465525837;
    msg.rel_dir_y = 0.6861392626597702;
    msg.rel_dir_z = 0.5983765937538483;
    msg.err_x = 0.14258720975552885;
    msg.err_y = 0.7584845293906213;
    msg.err_z = 0.2713814932872336;
    msg.rf_err_x = 0.10450861882539475;
    msg.rf_err_y = 0.7061038817179277;
    msg.rf_err_z = 0.12668949088506276;
    msg.rf_err_vx = 0.6905796944315791;
    msg.rf_err_vy = 0.8568783844121687;
    msg.rf_err_vz = 0.11183888851393509;
    msg.ss_x = 0.8704080551799948;
    msg.ss_y = 0.5052774229866475;
    msg.ss_z = 0.8859766537057449;
    msg.virt_err_x = 0.7773534560099848;
    msg.virt_err_y = 0.4178631782238974;
    msg.virt_err_z = 0.22853589296141008;

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
    msg.setTimeStamp(0.2619101511780212);
    msg.setSource(62482U);
    msg.setSourceEntity(105U);
    msg.setDestination(53138U);
    msg.setDestinationEntity(19U);
    msg.s_id.assign("NCPUMRVJPAXDLZFRUXAAFFUJZBZVCEBGNLQDGYJGEUGGKKWRCUGVPZYWDSZIMXASNDAHCLCCHOAOOMWAWWRWVIEMROXVIPQ");
    msg.dist = 0.103051279888691;
    msg.err = 0.15784157385143938;
    msg.ctrl_imp = 0.15464905726834632;
    msg.rel_dir_x = 0.15702958203346784;
    msg.rel_dir_y = 0.41066489476137424;
    msg.rel_dir_z = 0.8396872900948682;
    msg.err_x = 0.5975832784751584;
    msg.err_y = 0.5105439623912396;
    msg.err_z = 0.6283847080053019;
    msg.rf_err_x = 0.9124332429781045;
    msg.rf_err_y = 0.007968752935413659;
    msg.rf_err_z = 0.3012221539811617;
    msg.rf_err_vx = 0.5048673240917899;
    msg.rf_err_vy = 0.19736853177939717;
    msg.rf_err_vz = 0.12069912257654514;
    msg.ss_x = 0.36186570993373945;
    msg.ss_y = 0.25117289681900457;
    msg.ss_z = 0.10965841620937489;
    msg.virt_err_x = 0.9336180629221876;
    msg.virt_err_y = 0.8703814040888667;
    msg.virt_err_z = 0.896990350651032;

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
    msg.setTimeStamp(0.6624995467790934);
    msg.setSource(42024U);
    msg.setSourceEntity(127U);
    msg.setDestination(32112U);
    msg.setDestinationEntity(109U);
    msg.s_id.assign("VZPEPTNXYFFFNIUWIRKMQHQEJSXKDTFOAJICBMSGLRNBUMAVJYJTPUYDZIBYAIKOOGCVXGSYRKWXOZUDLFRFAUEQKWMMPZGQTTECHVKTCXUCDFILILCLJCZUNNJMQKDRBNAJEYAREXHBGPUQNWWMAX");
    msg.dist = 0.711086151076935;
    msg.err = 0.6625480953880283;
    msg.ctrl_imp = 0.42590741013628264;
    msg.rel_dir_x = 0.9901085111926111;
    msg.rel_dir_y = 0.059573027095436104;
    msg.rel_dir_z = 0.3655237542044818;
    msg.err_x = 0.6928683295926963;
    msg.err_y = 0.6471681350200412;
    msg.err_z = 0.9721440955781758;
    msg.rf_err_x = 0.365859222529452;
    msg.rf_err_y = 0.6462322281439782;
    msg.rf_err_z = 0.9857084901325148;
    msg.rf_err_vx = 0.8926746696501484;
    msg.rf_err_vy = 0.05879103992729695;
    msg.rf_err_vz = 0.5801987264099366;
    msg.ss_x = 0.514087997289886;
    msg.ss_y = 0.10370141036433678;
    msg.ss_z = 0.03638967846986241;
    msg.virt_err_x = 0.23178019803178562;
    msg.virt_err_y = 0.9977946372818817;
    msg.virt_err_z = 0.5658143159419822;

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
    msg.setTimeStamp(0.8710520905676714);
    msg.setSource(48677U);
    msg.setSourceEntity(80U);
    msg.setDestination(50626U);
    msg.setDestinationEntity(41U);
    msg.timeout = 56682U;
    msg.rpm = 0.47280922241684453;
    msg.direction = 54U;
    msg.custom.assign("JQCYSGLFQTIABRXEYBWOSIOLQSNQSVBIBSWKVORUUZBHKCOIMAVUZOYKHKTMZNQWUWYYRSNBZJSFBFWKDJILPZXSEZCHXOFZPKCTPPMNGRHTCBDDRRCIACXOWMAYJQLCLIMOKKXGSWGGUPRSGUPMEEDDCJLIKJIUWPEFNLLZRUFWUHMVNROGEQHWEADOMTAXANEVZTILJEGVMFZHEJKQ");

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
    msg.setTimeStamp(0.034403567822929526);
    msg.setSource(46995U);
    msg.setSourceEntity(122U);
    msg.setDestination(11713U);
    msg.setDestinationEntity(122U);
    msg.timeout = 11808U;
    msg.rpm = 0.6275714075607038;
    msg.direction = 148U;
    msg.custom.assign("OJVCUNCFTCZUYTBSWEPILGAJULNUGCXGFWPPNRNSDRMDXJPOMDAWHBQTQTCQTOIZNEYPGRLQXXQYWNZVURWDURAEKBSKLEIOHTOKLTYNSRAUHZABDBLKGMODQGYJQPGNLDOMKYMXVSWCYLJXAGVSIREEEAAZQNBFJOIJTSWOIUHERXWFILHKAXTYBYFVRRZPCJWPFZFZVSPIKMMVCJ");

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
    msg.setTimeStamp(0.7973479024032276);
    msg.setSource(37426U);
    msg.setSourceEntity(172U);
    msg.setDestination(25285U);
    msg.setDestinationEntity(46U);
    msg.timeout = 23707U;
    msg.rpm = 0.9262932312476586;
    msg.direction = 208U;
    msg.custom.assign("KZSLUSETWFRGOSZRGQQTPYHHQOIVPWDKANHCVRYVCGJWBMQDPPVCNPAHBXRDI");

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
    msg.setTimeStamp(0.5388016654230527);
    msg.setSource(28042U);
    msg.setSourceEntity(236U);
    msg.setDestination(2938U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("NIBGTNJAXJJRVGQKKLUIEG");
    msg.type = 93U;
    msg.op = 236U;
    msg.group_name.assign("CQZZONRDGFFCPSEXIAGFI");
    msg.plan_id.assign("TONITEPVXDIXWVUYYQGJHVGYDFBNUNDVOKEBOCACIPHNEWUKGGIYLGLNCYUMOI");
    msg.description.assign("EHECNTPJHHFUISKRSTUKUMGXQAOYEAIPGWVSKDDIQFMAMDNEJZZRCNIKJKVMMZXSGLHFYCVXBEWFTKPDCTDLXTOPOYRGVMHYPMIHHJQWI");
    msg.reference_frame = 215U;
    msg.leader_bank_lim = 0.03094153241049491;
    msg.leader_speed_min = 0.9367553689925833;
    msg.leader_speed_max = 0.0706590269990709;
    msg.leader_alt_min = 0.03718311234372318;
    msg.leader_alt_max = 0.1735133597814943;
    msg.pos_sim_err_lim = 0.4782133603405673;
    msg.pos_sim_err_wrn = 0.09389954784277121;
    msg.pos_sim_err_timeout = 47274U;
    msg.converg_max = 0.4299678161398903;
    msg.converg_timeout = 6763U;
    msg.comms_timeout = 45062U;
    msg.turb_lim = 0.279867420486273;
    msg.custom.assign("POXBSENQRDOHNIJMHNENKEMTXGRZCASKRGPPQCHXTQZEKCCVKVIIRUEBOVGTBVWEKQFSNFMZPTFSUHZRWKLPYDOMY");

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
    msg.setTimeStamp(0.819831999810051);
    msg.setSource(28165U);
    msg.setSourceEntity(27U);
    msg.setDestination(3049U);
    msg.setDestinationEntity(194U);
    msg.formation_name.assign("NSENXIXBWFILGPSMGWAOFATDKLVJWEDNDGMDLKHTDYREPAPQKCLCQSLQVUPFFYIHD");
    msg.type = 41U;
    msg.op = 121U;
    msg.group_name.assign("NXTGMKYTUOINBGQAIKFZCFRXDHGROEOMICWCCBBJXMGWNPHKJZINJMWWKONMTNSKKTHSPAKRLFSRZOCVPILUBLIERELYRETBAOUPRTYEYHFIGWUZXIHQQEDPEUSULHTDEKFQYRMJLBLZPQFMNGZDVGGWYZGRBVAAQHSSNXWFJYDISJKULSQIWLBXSVVAKPTSCZOOVUXYJPHDUEAHEXCQCPJPXLVORNUMHWFZJJQAMWVOAYGVXMFC");
    msg.plan_id.assign("DTUPDIGUXBOGSQGVDCJZXHGMEPVJQRWGYIEPEPRUNTDXHRZLTDIRDOTTLSIFMWXXIAQPUSSJKJVMAZPTMFLKLXVETZBKAFFVOQBWBWUXKERBBEPALYRYZUQPTZKCXWRAWHFEUIJBMISCHMMTEIOYEKRUPKDYURNYQFWZGJOHCCNNWLHOVBLMWKVSHQFLBXIHFYYKOACPDOZASQNBHDGWMNGFIQVKYVN");
    msg.description.assign("SIQGTHOHOJYRCXOVGJYIQOJHUWNKIHDCCSIAIIANSEBIBQZRIFL");
    msg.reference_frame = 158U;
    msg.leader_bank_lim = 0.9427036509570018;
    msg.leader_speed_min = 0.30375310409550715;
    msg.leader_speed_max = 0.5363419729539064;
    msg.leader_alt_min = 0.5085825351079503;
    msg.leader_alt_max = 0.017175435534107053;
    msg.pos_sim_err_lim = 0.14229152750835838;
    msg.pos_sim_err_wrn = 0.5614739315940233;
    msg.pos_sim_err_timeout = 20711U;
    msg.converg_max = 0.28344159028394944;
    msg.converg_timeout = 30836U;
    msg.comms_timeout = 53334U;
    msg.turb_lim = 0.4468191716682445;
    msg.custom.assign("EBLHDZYNWASAPBFMKAHOXUMJMCZQKGUQNVDRJKTEHYAQLXSSIVCCIUYTTGQJNXPZRUGJYRQLCRZOVVDPEIKBBZIXQFDVGYXIYHLEJALZBHWHVSDIGRSFKZYOCUEHXMBRYSOOMJAGGCGPEUVFQXGJDFXHWQNETIKNJQHUJKOUEPICNYXMBTPTDPLLRZRTSBNQDGLEPMTKAXVIYA");

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
    msg.setTimeStamp(0.6191616912910399);
    msg.setSource(24187U);
    msg.setSourceEntity(32U);
    msg.setDestination(14949U);
    msg.setDestinationEntity(138U);
    msg.formation_name.assign("RXFWGFUGTFSSYGUYXRRFYDXJLVEUZCOQVLDDEVQEBJLCACJUMMYACN");
    msg.type = 216U;
    msg.op = 89U;
    msg.group_name.assign("QAGKKXEMYBLHKRPLHKIVMFSUJITWALJWLSFEKSQGFVNDMOOFXJEFCWMLQDUBOADTCXVIRYPIHRFEEWAEUKZWNMTJCHOBCSIGILNNFZJB");
    msg.plan_id.assign("YFQNSZLVFVGOHLVMXRPJGKEMBWSVNXDRTUDAJZEYTFCWNTGUQBUPFIEKQMIOMHYICOATBZHEPLPHQXKKSXREKRNBHIABBSIMSSRJDDEMDWGSLUQWJXDIGDFTNKWGCAQOMUANQWFPWVCLTUXLORVAAYPIMEXZOCATCPHUZBVXJQYVBUTSJVGYKTROZXDHQJNUYWBTZSGRAOMCWCZEIYZKDCZJXNCSWMHJRNEILLPJB");
    msg.description.assign("WUXSHOKFJTUJLPWQSWDPLSANQROWNOCBFEBQIPYCPYSJQFGWHFEWDXTMYSPVRQDBWIIWAWDARHTUFVHVVGKK");
    msg.reference_frame = 20U;
    msg.leader_bank_lim = 0.2838592072995495;
    msg.leader_speed_min = 0.6008808923633724;
    msg.leader_speed_max = 0.14586525810912188;
    msg.leader_alt_min = 0.18990088740369726;
    msg.leader_alt_max = 0.4871477871949459;
    msg.pos_sim_err_lim = 0.5046093828560663;
    msg.pos_sim_err_wrn = 0.6131507842345051;
    msg.pos_sim_err_timeout = 24018U;
    msg.converg_max = 0.5253063983083817;
    msg.converg_timeout = 16069U;
    msg.comms_timeout = 53694U;
    msg.turb_lim = 0.8860228166896404;
    msg.custom.assign("YMPRVXFSGOVTTKWKDGYVIQEMUEPQNJTKBFTUTZSMHCWQZZCQLLBWRTAAJOLXNPIW");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.4736049207840336);
    msg.setSource(16237U);
    msg.setSourceEntity(191U);
    msg.setDestination(25189U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 132U;
    msg.error_count = 39U;
    msg.error_ents.assign("FXIFKPQMRDCEKQNULGOZISBBJGXMJEYAMATBFHYFTZYZQGHSQPVZCPGCHICT");
    msg.maneuver_type = 60705U;
    msg.maneuver_stime = 0.134640449490379;
    msg.maneuver_eta = 53720U;
    msg.control_loops = 4223934560U;
    msg.flags = 209U;
    msg.last_error.assign("CNGUWHWJWWMZKIYTDKMCNFEZKMAKUSKAWVOOVXZMDQUTBRULKHDTZFEVYNLEYYWTTAMGPNYNXUBVOJZMOXRPUZYHSCADDUMSFTJFAGGEBGHLTRLZKBSSINQLIEXRODAVOLFJHLYCPGDXWCNVJATJ");
    msg.last_error_time = 0.20240037943342393;

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
    msg.setTimeStamp(0.8225103137207994);
    msg.setSource(47973U);
    msg.setSourceEntity(223U);
    msg.setDestination(16920U);
    msg.setDestinationEntity(204U);
    msg.op_mode = 20U;
    msg.error_count = 158U;
    msg.error_ents.assign("GOBZIJTSEIIVMLXQBQHPNXMAVNFEGNZTCNAFEALJPKIMCZOOVFIYRRAWSTXKMGSIZRPPFCAVIHTYTZTKQDVLDLZJIJGLHTIESEYWZRXEJVWYOBODAOSFWBXKHOBHCGJFQXDHGSIZELHJALHXPHWDLADNVWNWUSWEF");
    msg.maneuver_type = 34963U;
    msg.maneuver_stime = 0.4786675476909996;
    msg.maneuver_eta = 11199U;
    msg.control_loops = 3546644531U;
    msg.flags = 182U;
    msg.last_error.assign("SZVWLQLHUJICHVYEHLOZFIXFGCLUDBCVWYMHOOVEIOVXSWFAIIORJPYTWNWYCGHK");
    msg.last_error_time = 0.321473335765856;

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
    msg.setTimeStamp(0.4529735941628158);
    msg.setSource(357U);
    msg.setSourceEntity(243U);
    msg.setDestination(1374U);
    msg.setDestinationEntity(77U);
    msg.op_mode = 54U;
    msg.error_count = 62U;
    msg.error_ents.assign("OGWICBWOROYIGFSHHTJQLYXEBZJLACVKFOBVWVTAYECKSBMPZXABJPUHGAQGYCUIEWRPQVSIZGFWAKPIRSXFUUNYIRFZNCUTSMDXJOLBQBHXPKAUNVSGKITDAKKTEJTHJZEFDIMQMPPFRCEADFPTVRYPNMLMOTKOJYEFACSLWWMAZ");
    msg.maneuver_type = 56678U;
    msg.maneuver_stime = 0.697488929208232;
    msg.maneuver_eta = 46790U;
    msg.control_loops = 2862401589U;
    msg.flags = 157U;
    msg.last_error.assign("LJMSGKDDGKUASMLLNNJPAZIKWBTEDPTCNHNOGJHMU");
    msg.last_error_time = 0.7879754311090591;

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
    msg.setTimeStamp(0.9686659356048317);
    msg.setSource(64043U);
    msg.setSourceEntity(72U);
    msg.setDestination(31099U);
    msg.setDestinationEntity(43U);
    msg.type = 98U;
    msg.request_id = 289U;
    msg.command = 44U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 57455U;
    tmp_msg_0.lat = 0.07550399336092695;
    tmp_msg_0.lon = 0.29122171518860285;
    tmp_msg_0.z = 0.27634337578924384;
    tmp_msg_0.z_units = 161U;
    tmp_msg_0.amplitude = 0.41444988220444;
    tmp_msg_0.pitch = 0.1952667778558177;
    tmp_msg_0.speed = 0.5018192443125035;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.custom.assign("QHNRFOUHWGSINJIFFJVJBSUYUXTDITAQWSEEBN");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8624U;
    msg.info.assign("OXHWLEURAHWJWVRAZZMMJMEPQUKBKVMXRAJRMZOUIJSAOIABBMUQLGHUQLOGQACTATSQRGZWWBVWTUVJRPTGQMVSYJCFKYXBFXOSJFYAIXKSJFVHTLKDWHREE");

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
    msg.setTimeStamp(0.06503414583966372);
    msg.setSource(38186U);
    msg.setSourceEntity(213U);
    msg.setDestination(26471U);
    msg.setDestinationEntity(58U);
    msg.type = 5U;
    msg.request_id = 51381U;
    msg.command = 41U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.39633003417731494;
    tmp_msg_0.lon = 0.8676431110290163;
    tmp_msg_0.z = 0.5518415654845822;
    tmp_msg_0.z_units = 27U;
    tmp_msg_0.speed = 0.32942477537216885;
    tmp_msg_0.speed_units = 250U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8436614121645427;
    tmp_tmp_msg_0_0.lon = 0.5387322202688493;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("KFPZKDTMQHCEVZWYRZUICOZSLYTPDYMNVOCJJJBHXDMGHQLOCFURJDRLNRSAIPUJJBQIHDHWCGPOFVERGYHQGJNADCXPIYXOHHFFSEUFVZIIPOHLSARVQBVLUMXIWQFQPUMMITSJJEXGANMAMZWSCOITVVUBJTAWFBK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39802U;
    msg.info.assign("LESKUJBVVTICYHKXIIETMOYJLTGNTZZXWHHUSDHDPSGCOMAPROKFPFHWBZKHCDIBQUWBFGAVFFDOHWLLNAZXXBFJCKKJMECTVUKXQYFAEPSPUBBWONURFQNVBWNGZHSUDSPUWQATVRVAKSRIWMAMWVIIEPNROZTUGFGKJZYXUYPJLSDLMCEGGNNHSNVE");

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
    msg.setTimeStamp(0.9047747009780853);
    msg.setSource(22363U);
    msg.setSourceEntity(137U);
    msg.setDestination(14997U);
    msg.setDestinationEntity(32U);
    msg.type = 209U;
    msg.request_id = 6908U;
    msg.command = 31U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 42126U;
    tmp_msg_0.flags = 174U;
    tmp_msg_0.lat = 0.09620983939528283;
    tmp_msg_0.lon = 0.9222886325283902;
    tmp_msg_0.start_z = 0.3576297677794119;
    tmp_msg_0.start_z_units = 175U;
    tmp_msg_0.end_z = 0.22894691012181223;
    tmp_msg_0.end_z_units = 102U;
    tmp_msg_0.radius = 0.10796633130230926;
    tmp_msg_0.speed = 0.6449589767925562;
    tmp_msg_0.speed_units = 82U;
    tmp_msg_0.custom.assign("RQKMQCAORIYAOTQXXSJDQSMUFKNDPUMGOLEHFHWONULNIORMCKGBPXEJQDTBKAMEHIDKXHBEZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10567U;
    msg.info.assign("QRCCESBKTVKZTTPKJOSZGRAEQCRQWQDNHXHKAKQHDPXUCFGSWVZWMJGAIDDNZLFGZEPRHBTONAMRLE");

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
    msg.setTimeStamp(0.06064677736675017);
    msg.setSource(42225U);
    msg.setSourceEntity(161U);
    msg.setDestination(30242U);
    msg.setDestinationEntity(177U);
    msg.command = 98U;
    msg.entities.assign("XVTBLNTCMWGKGIJABTGSHOKDEWUFDWPVPYWGUPYTHSQZIKRXDMDVZFUENHHZSTEYFVWNISHFBLRQXYQIJLRGEWMAFBJTQBUVSJPFTAJJNIYAPBIDVSVOZJYQMBDLSSNOVLMZIHLPHMGXMACROAOBZXUOTCERIDMLMKANNTHNYHZURCWRSPDBELYQXEBILZCXK");

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
    msg.setTimeStamp(0.5205707664650451);
    msg.setSource(49069U);
    msg.setSourceEntity(62U);
    msg.setDestination(25873U);
    msg.setDestinationEntity(131U);
    msg.command = 143U;
    msg.entities.assign("LOUXYXKIVHEWVBOIANTGCXITTSUZBABZTLXFAASWWEYQENTKCWDVG");

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
    msg.setTimeStamp(0.8461248841265635);
    msg.setSource(17484U);
    msg.setSourceEntity(248U);
    msg.setDestination(61443U);
    msg.setDestinationEntity(136U);
    msg.command = 248U;
    msg.entities.assign("IOMCJLNCRBGTEOZPBHXMSWFVCYGGGKBZODQCTOFDCXMZBFWEUZDWFNMQPXYDILMI");

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
    msg.setTimeStamp(0.10758909249720683);
    msg.setSource(61793U);
    msg.setSourceEntity(177U);
    msg.setDestination(53737U);
    msg.setDestinationEntity(31U);
    msg.mcount = 124U;
    msg.mnames.assign("YRTXAOSLBHIBZQFONKRTFJSJVFLCMYEC");
    msg.ecount = 158U;
    msg.enames.assign("MNADFPWTYVEPIXSHBGEIFLKPEZLCEIVOMYCHUZOFNJDNQSAQRYCLDJHIGYZRSTWGWQYJQFGFPWHKHARKMBAHICTEJVFKJVYZXFDKIMUPUVJRXRGRSVZVYZUNWAPXNBSAOOEQSQVDSWUKICHESLEBTP");
    msg.ccount = 151U;
    msg.cnames.assign("UARVRDOJQILQPJUJAAZRYDPDFBXMZHKDXNAEQAPUXJLMHBQGVIAXUGSOKVTPRJSOXSHYAETLZSVXZOYYXGZCNETHTSKQWHFEGRGCYG");
    msg.last_error.assign("PCSWHWGEMWTVIYNAOBHKRMADGCUMZZVONMNJRPPEUOVSJHDEFJOPLKAWGWZBQXYGITWSCKAVRYPKZBPEVXVBFCXLWCSNXQBBDTARHJIIGSZQSWBPYRAGQEZAFHZXBNNTERUQOLTJ");
    msg.last_error_time = 0.8629462817980175;

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
    msg.setTimeStamp(0.9190365524033522);
    msg.setSource(39349U);
    msg.setSourceEntity(240U);
    msg.setDestination(50634U);
    msg.setDestinationEntity(25U);
    msg.mcount = 101U;
    msg.mnames.assign("DWXZOBIPAKPQKBURVMVPLPRSLFVXQXAJQACCCNKAQBCGDUFROINLTTXIFGLJFGBDNTKRDHCLZPJUOCAHIIVXEQOEGIMKWZWKRUMUBRGCPGUVZSTLATZFHQGVOFSUVQRIIOLOZAWJMNIENJJHYVEKJAELWXJQRHHPWDZAMDCMVKWBZTDNDMBOSLYCSNOXUWXEGNTKITSUYFMHGYLYPKQYSSGTEHYRMDPMECDXTFVNAJHYBNEJYESUF");
    msg.ecount = 201U;
    msg.enames.assign("RTGDZPIIGZWQQAJVHRSPBYIXKSXHCSFVPAFGOLYYAMDELKUW");
    msg.ccount = 11U;
    msg.cnames.assign("MRZBFMCVSYKOBT");
    msg.last_error.assign("ARQOAXMIUAJQAVFLHXQMYHDQBVCLHKBWZLDPOKRZNEJBACZNENRSDYUWJTMRQ");
    msg.last_error_time = 0.26674085252800606;

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
    msg.setTimeStamp(0.7482020545531776);
    msg.setSource(51789U);
    msg.setSourceEntity(244U);
    msg.setDestination(51694U);
    msg.setDestinationEntity(160U);
    msg.mcount = 201U;
    msg.mnames.assign("HOXPUOEFJBREMXMZJVYRCWBFHNKJIIKVCQIZOWTNNNAZZNYZXZNHDZBEPKVOSDBJDPLFIDKAPRBEFMEKYRGGZTJXCVXVFELHGWGDARLEYLJWJPOTIFWLWUDZITBYBFLFCAJWYTVHPMGASCOBNQQIVUMRKDQPSQYYTFPVWXAEUDXMGTSBTUMHIGQSKSXACRPINNBUEPU");
    msg.ecount = 54U;
    msg.enames.assign("JKJJFGFKCYOMAQTSPEYPHZCCYDWEMZYWGXXDHYSVSIZGSQTBOUNKYOXVRMTYDKENZGRTUFXZGQNPLXNKBKDABRVRGOETQHHURVSPCKTRWAQVKWGBWEQLQHAOEUZAWERJIEXXIDBZSMNISGFOAUPNUVDFBQQDMYMMXUVBJBSIHACV");
    msg.ccount = 116U;
    msg.cnames.assign("OQQYIFDGVQRQZAMCZVMACHYGKSLNGILAPLWCPKPHOQWNIJOMRNBZFKHPJVVJWTXMRHEIHBPNUGVBYEIKRMMDFHQJUOZYGDAUZDTADVCUTFIQSGYFEYPWNXYLKSCWNAROXTUVVTLSSMJRJLTHQUBZUNBDQZDKBWOOXSGIFASCKPGUSXALEELC");
    msg.last_error.assign("QAGWIFSTCNTMTNHBCAMKALZTYHWDOSTCZSNCLYSMFDFMCUPVRIKJWYSAACWJXYBGOEULVUQHIZHVGEGJEARDZYITVWIYLPNSCDQUKOWXDFCLJONZXQGOEFKDIJWVBEMQMVPQORMFGUIAJZXELKNRMHHLBXWOGIYS");
    msg.last_error_time = 0.6578724904618164;

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
    msg.setTimeStamp(0.15076155318103135);
    msg.setSource(38285U);
    msg.setSourceEntity(133U);
    msg.setDestination(39142U);
    msg.setDestinationEntity(35U);
    msg.mask = 48U;
    msg.max_depth = 0.7973369548058057;
    msg.min_altitude = 0.567229876193793;
    msg.max_altitude = 0.3510550909900738;
    msg.min_speed = 0.4869263131141145;
    msg.max_speed = 0.3992906433917961;
    msg.max_vrate = 0.6612111525741204;
    msg.lat = 0.5581956046093708;
    msg.lon = 0.2791543426477334;
    msg.orientation = 0.7011003504514832;
    msg.width = 0.4163125518510251;
    msg.length = 0.33794741717948007;

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
    msg.setTimeStamp(0.27765142714584456);
    msg.setSource(43247U);
    msg.setSourceEntity(232U);
    msg.setDestination(20380U);
    msg.setDestinationEntity(28U);
    msg.mask = 233U;
    msg.max_depth = 0.6954393264034069;
    msg.min_altitude = 0.07613855421050364;
    msg.max_altitude = 0.989869392853006;
    msg.min_speed = 0.5690605903054711;
    msg.max_speed = 0.9769035062686007;
    msg.max_vrate = 0.7857529156527975;
    msg.lat = 0.32703071641924686;
    msg.lon = 0.3871058874210114;
    msg.orientation = 0.15254444819091073;
    msg.width = 0.06979943936146316;
    msg.length = 0.29351096290217893;

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
    msg.setTimeStamp(0.9643149025098539);
    msg.setSource(59321U);
    msg.setSourceEntity(206U);
    msg.setDestination(65531U);
    msg.setDestinationEntity(55U);
    msg.mask = 72U;
    msg.max_depth = 0.08325546047495092;
    msg.min_altitude = 0.5118797562223256;
    msg.max_altitude = 0.5716040418626518;
    msg.min_speed = 0.7015029242994437;
    msg.max_speed = 0.5994712897413239;
    msg.max_vrate = 0.1990073061281814;
    msg.lat = 0.5945707256771854;
    msg.lon = 0.9962443561131518;
    msg.orientation = 0.0021205461663196257;
    msg.width = 0.12538225601077324;
    msg.length = 0.6732169697776007;

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
    msg.setTimeStamp(0.8959317232298308);
    msg.setSource(20790U);
    msg.setSourceEntity(199U);
    msg.setDestination(32776U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.6303759875655691);
    msg.setSource(2775U);
    msg.setSourceEntity(107U);
    msg.setDestination(45426U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.4134021529267611);
    msg.setSource(22962U);
    msg.setSourceEntity(173U);
    msg.setDestination(8134U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.9682521029913281);
    msg.setSource(36476U);
    msg.setSourceEntity(190U);
    msg.setDestination(53445U);
    msg.setDestinationEntity(208U);
    msg.duration = 52367U;

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
    msg.setTimeStamp(0.18469008098836126);
    msg.setSource(38895U);
    msg.setSourceEntity(105U);
    msg.setDestination(9443U);
    msg.setDestinationEntity(210U);
    msg.duration = 26725U;

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
    msg.setTimeStamp(0.16025158229197933);
    msg.setSource(19787U);
    msg.setSourceEntity(12U);
    msg.setDestination(43168U);
    msg.setDestinationEntity(31U);
    msg.duration = 62156U;

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
    msg.setTimeStamp(0.6830147002400969);
    msg.setSource(16156U);
    msg.setSourceEntity(106U);
    msg.setDestination(52744U);
    msg.setDestinationEntity(8U);
    msg.enable = 3U;
    msg.mask = 4050579698U;
    msg.scope_ref = 1162153229U;

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
    msg.setTimeStamp(0.1728694905586743);
    msg.setSource(1804U);
    msg.setSourceEntity(124U);
    msg.setDestination(7227U);
    msg.setDestinationEntity(194U);
    msg.enable = 61U;
    msg.mask = 24834668U;
    msg.scope_ref = 4003625803U;

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
    msg.setTimeStamp(0.20581696443219688);
    msg.setSource(50945U);
    msg.setSourceEntity(92U);
    msg.setDestination(55064U);
    msg.setDestinationEntity(11U);
    msg.enable = 184U;
    msg.mask = 555757238U;
    msg.scope_ref = 1157542194U;

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
    msg.setTimeStamp(0.41106807496360454);
    msg.setSource(62789U);
    msg.setSourceEntity(249U);
    msg.setDestination(7649U);
    msg.setDestinationEntity(251U);
    msg.medium = 199U;

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
    msg.setTimeStamp(0.1546528830859344);
    msg.setSource(57200U);
    msg.setSourceEntity(58U);
    msg.setDestination(14057U);
    msg.setDestinationEntity(94U);
    msg.medium = 193U;

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
    msg.setTimeStamp(0.35472078665582896);
    msg.setSource(55246U);
    msg.setSourceEntity(52U);
    msg.setDestination(55267U);
    msg.setDestinationEntity(228U);
    msg.medium = 59U;

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
    msg.setTimeStamp(0.5382695088733214);
    msg.setSource(51483U);
    msg.setSourceEntity(73U);
    msg.setDestination(52485U);
    msg.setDestinationEntity(156U);
    msg.value = 0.5698791852823648;
    msg.type = 108U;

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
    msg.setTimeStamp(0.6337787049597557);
    msg.setSource(39367U);
    msg.setSourceEntity(222U);
    msg.setDestination(55767U);
    msg.setDestinationEntity(76U);
    msg.value = 0.2830023859897849;
    msg.type = 214U;

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
    msg.setTimeStamp(0.6353518371878448);
    msg.setSource(55778U);
    msg.setSourceEntity(109U);
    msg.setDestination(30238U);
    msg.setDestinationEntity(113U);
    msg.value = 0.9652660551681923;
    msg.type = 175U;

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
    msg.setTimeStamp(0.8930125749002361);
    msg.setSource(45371U);
    msg.setSourceEntity(233U);
    msg.setDestination(17620U);
    msg.setDestinationEntity(111U);
    msg.possimerr = 0.37946194023500923;
    msg.converg = 0.48910364717946486;
    msg.turbulence = 0.18040125685215813;
    msg.possimmon = 150U;
    msg.commmon = 69U;
    msg.convergmon = 234U;

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
    msg.setTimeStamp(0.11151788203524615);
    msg.setSource(49032U);
    msg.setSourceEntity(27U);
    msg.setDestination(14591U);
    msg.setDestinationEntity(105U);
    msg.possimerr = 0.6552589199326379;
    msg.converg = 0.7841233959766845;
    msg.turbulence = 0.26240661913121277;
    msg.possimmon = 69U;
    msg.commmon = 107U;
    msg.convergmon = 184U;

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
    msg.setTimeStamp(0.1389236109167037);
    msg.setSource(26804U);
    msg.setSourceEntity(57U);
    msg.setDestination(47873U);
    msg.setDestinationEntity(191U);
    msg.possimerr = 0.572329770768718;
    msg.converg = 0.21762926416163908;
    msg.turbulence = 0.6986033109229379;
    msg.possimmon = 222U;
    msg.commmon = 226U;
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
    msg.setTimeStamp(0.0093642240162497);
    msg.setSource(64134U);
    msg.setSourceEntity(253U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(5U);
    msg.autonomy = 161U;
    msg.mode.assign("VLCYDGQDNWWEPHSRNKDJCJHZXDKCBLYVWWAGRGAPWFFCCHBNZNMAMISORULSXKLPUDIZUQHIDNTCEBSAOTSMLQVEMSWXVZEXSXJHCHGRPBAUTODNICDMJZEYQBQFOFT");

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
    msg.setTimeStamp(0.08869422185160203);
    msg.setSource(11273U);
    msg.setSourceEntity(116U);
    msg.setDestination(18632U);
    msg.setDestinationEntity(155U);
    msg.autonomy = 100U;
    msg.mode.assign("ISHRXNZCSAVWIWKEFGLGGQTIXMVJQQRAEKDLDBCGPVMSTOVIHOJFXBUCFGR");

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
    msg.setTimeStamp(0.3186735065519871);
    msg.setSource(55319U);
    msg.setSourceEntity(25U);
    msg.setDestination(33027U);
    msg.setDestinationEntity(65U);
    msg.autonomy = 154U;
    msg.mode.assign("WPJRKTIPUWIPDELHTNOUCEQIBFKDSOBJGQYABWXOKRMFADTLDESOWEYFIQQWXZIOJKZMLASANIMTXRGNKHNQFAYHIWGSDASVBXINDNLMVYJBHVMJUCGNOJEHQLPBFTRRNKLDJGPZDQFHXCVCHEOBPEULVOMAUZYZYQKGSHRGULTXKBPZWKVONVFGEUCTYSXCHLZBCPVC");

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
    msg.setTimeStamp(0.9083053184966527);
    msg.setSource(31037U);
    msg.setSourceEntity(4U);
    msg.setDestination(7908U);
    msg.setDestinationEntity(241U);
    msg.type = 171U;
    msg.op = 35U;
    msg.possimerr = 0.675420315864751;
    msg.converg = 0.48218670257133756;
    msg.turbulence = 0.48912841143512475;
    msg.possimmon = 245U;
    msg.commmon = 7U;
    msg.convergmon = 254U;

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
    msg.setTimeStamp(0.2238151971083212);
    msg.setSource(54216U);
    msg.setSourceEntity(206U);
    msg.setDestination(23359U);
    msg.setDestinationEntity(60U);
    msg.type = 115U;
    msg.op = 245U;
    msg.possimerr = 0.4006602375572552;
    msg.converg = 0.49622367918568844;
    msg.turbulence = 0.45882626967355167;
    msg.possimmon = 254U;
    msg.commmon = 50U;
    msg.convergmon = 94U;

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
    msg.setTimeStamp(0.5677645474493429);
    msg.setSource(46052U);
    msg.setSourceEntity(213U);
    msg.setDestination(52476U);
    msg.setDestinationEntity(121U);
    msg.type = 86U;
    msg.op = 168U;
    msg.possimerr = 0.8042473319468157;
    msg.converg = 0.31953629338022593;
    msg.turbulence = 0.44114464237082984;
    msg.possimmon = 137U;
    msg.commmon = 56U;
    msg.convergmon = 208U;

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
    msg.setTimeStamp(0.7549331922962917);
    msg.setSource(61182U);
    msg.setSourceEntity(251U);
    msg.setDestination(21285U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.62161820180538);
    msg.setSource(28755U);
    msg.setSourceEntity(18U);
    msg.setDestination(40831U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.23413173886772043);
    msg.setSource(50485U);
    msg.setSourceEntity(180U);
    msg.setDestination(9697U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.04533576507808901);
    msg.setSource(26942U);
    msg.setSourceEntity(198U);
    msg.setDestination(3839U);
    msg.setDestinationEntity(246U);
    msg.plan_id.assign("SIYCOGUPWQQUBRLUZNYGAWPYSKLRMVLCZSQZMDIOAOWKBAFFLUTOSIEIYZJUZGXMLQAVSRDIVMNOCNWYCDRPXNHCYWSNQCFCHELXAUVMDEONQSSQGMDAXIVURFJKTVGCXYJJUPPOJPKJEFRNYJAELKDRVMXPHFWCHHMFVWEQLZENEBRHSBZXMGLJKGETHWOPHEKJBPKZARDKAHTVIPNYTWFTBIHOKDXYAMTQFIOFZTVZTLJGXTBC");
    msg.description.assign("ZABJTUBDECMZGOPOGYUILKALHHAONIOCFVFRSDYQWXREXQWYMHDHRCVFRNEKNBTEFULFVAFXZOHPPQIMMFONWGUMMWGHLPZXANJWSONAQPRYJIQLKSAZTERDJDYBGYFGVWKNQDOTEMNSBZUTCKPKLITITLXOESJBVCKBNDHSKMBJTVCYHBRGUXSJRVHMDTZPXWMGIJKZQCDYUCFYZAFXITRGAXEAQSXWCWR");
    msg.vnamespace.assign("TMLTAMBFKTQGXZELEFFUBYJLCV");
    msg.start_man_id.assign("ARSWTGKFUYCPMFOPKSTWUEQONUCEPCYXEOTNIEYYZNSRLLHGXVWPKYLBJRMDBAQADISUFTQTIFIGYCXUEQJXJPAXHLFJFDXUIZYFPZZDJHSVXSDKGBZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MYQFTWLMMDPDDNUFNPFMNFIUKLSXCKGHZOWCVFPBWJSRRVCRPSXEORDPEIZQIAOGAVRZZRMKVXVOAEYSHLXGUCPTMSLROCAXWEGNZVNDXQZWFGSQHCEYOLAUSBHBLYNJPRQQNQZTMTTUPWFTUJLQLHCEQDRBGXBJCDZAVIAGYVYOIMGBNKEBTZDNGWIMJVKSLHAWCCWLIHKJOKKGPYY");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 62850U;
    tmp_tmp_msg_0_0.control_ent = 250U;
    tmp_tmp_msg_0_0.timeout = 0.18485631300564165;
    tmp_tmp_msg_0_0.loiter_radius = 0.9377874683101487;
    tmp_tmp_msg_0_0.altitude_interval = 0.05063616305373597;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("INYKVIMRVCDQVOSVXJVDDKXEZQHRCWQMTNUUTYYMKERHPNOYVJKKIGGLGVLHXCQAQEARRWSDQIQBDTGBDKXGYOLZCBGMOICTNOROIJHAKJSAZEFTNYHYANOJBELZFPNBCAFEPCRWKWFBFFPHKHFXZVWAJAEZZCMILLHELTOJLKUIVZQMCZBOJVJUEPBUGFQXMPFBYPXSDYPGMPTXNSQSWXHIORP");
    tmp_tmp_msg_0_1.plan_size = 24893U;
    tmp_tmp_msg_0_1.change_time = 0.6973627448893452;
    tmp_tmp_msg_0_1.change_sid = 1887U;
    tmp_tmp_msg_0_1.change_sname.assign("AFFJXYQYSSJZMPNULBGNDEKFHPFDMKYHLENZEKJABGQJ");
    const char tmp_tmp_tmp_msg_0_1_0[] = {19, 61, -57, 83, 82, -52, 69, -93, 63, 31, 5, 122, -6, -117, -113, -51, -115, -22, 88, 37, 28, -43, 80, -32, 93, -18, 104, 104, -31, -77, -79, -46, -91, 33, -5, 14, 69, -74, -11, 9, 107, -114, 119, -33, 73, -68, 43, -105, 88, -86, -126, -71, 19, 126, 40, 37, 118, -26, 124, 72, 16, -35, -74, 34, 21, -8, -20, -115, 113, 40, -73, 0, 23, 31, 24, -119, 20, -115, 40, -56, 40, 103, 40, -72, -29, 92, -33, -72, -10, 68, 28, -28, -32, -55, 81, -6, -95, -54, -113, 70, 49, 28, -88, 25, -82, -105, -65, 33, 77, -31, 117, -20, -86, -41, 74, -124, -96, -18, 112, 9, -31, -56, -113, -98, 22, 123, -51, -5, 95, -115, 98, 44, -5, -105, 99, 51, -10, 120, -10, 112, -101, 50, -33, -14, -92, 23, 36, -124, -114, 13, 96, 34, -8, 104, -70, 45, 80, 105, 65, 8, 77, -91, 67, 58, -70, 25, 81, -87};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("HUGOABNZMXXWHAMKYUGQVRIOHFVSTVVQBERNNTHAEVXKJSYFKBNWHBYITFHYVMJHXACSCQHAMGYKSTKVMOIQSOBIDGEZOJYQLMINODWEDBWPNZEMZNJXTCSQYEEZDEFBPTAMLUJLGQFCSAIBUTL");
    tmp_msg_1.dest_man.assign("NSJHMAASBSGAKMPINDGLDVMCFQCORLTDABIHSXWQGNUTZLWEGGIUWXWNNKTYPBBQYTIDGCBVAMHUFCBAOZOKRMRKLMKQQTUMURVQFOPHLOJJJFCCWFEKYXPTIYWUYEUPHQNOTNVHCFSJDLZEWZTXVFLAFPWLSXVYRIBPVXPDJVDOGZRDPOTBJEKPLWHROGIYEXSZIBBXSHUYGHACSUJRCTRXJIEKRAFXGVEDZDWHZQNZASOQKVMEFZJIKCQM");
    tmp_msg_1.conditions.assign("HFSZDNORGWKSOFYZABZYVSFVHUZHVRMUXMUFDCAHBP");
    IMC::TextMessage tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.origin.assign("POUKANBWJJAVOUVTFWWARILGXGHQUDGUZLEIRRIDWCYHFYLISIBCZQEUXNLZCLRYYHJSDZFSJWDOJMKXFECCVVXDQLFMSTWXQUM");
    tmp_tmp_msg_1_0.text.assign("LEIRNUTFNGSXOMWHJSCYNDEJTJPFJRZGUFSDRYTEFXTLVPKR");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::FineOil tmp_msg_2;
    tmp_msg_2.value = 0.6793831999158794;
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
    msg.setTimeStamp(0.684452700580162);
    msg.setSource(43811U);
    msg.setSourceEntity(239U);
    msg.setDestination(34473U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("LKRVRCHGVXTTCNEHJRPJIEQJZFDSM");
    msg.description.assign("HYNELNMGJXNDDLJWKRNQEONNIYEXKPCCTJDSGWWS");
    msg.vnamespace.assign("KYBIMQVPBVYGKPJMUQAXEGANKFNDZMOVLSGQMQNXCLVKFNEINYHWTQLSBTOULCZRQXUEJOXJGRGWTTLVUVIYOQFMRHEBSLYKRLUAWURPCPCTPJZBRWIEWCDUMTWFZUGEXNMVOF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QMLPRYHTEBRELUDQYAGWNWVRJMKWPUHMCBKJFGJTLVZBUFPKTHCDMOMBMIEYTEUZXAJGXCSEQKZZLCWIVAGTLGEIJEJCFKUFQETLORVIJMOYIQQCUWKGIKVJWKQGNONAZBSNWUATSVUYJSNDPXDQNUGRVHRPAIGACAXNBRAXYPBDIZMLRYPSZTFIGK");
    tmp_msg_0.value.assign("OPCJZMJCGTJFKOYEHPTOEZWVLCUJGYBCLLIZLNSNADSOGEUQMAKHDBFCWRSCAJJXTWDNNF");
    tmp_msg_0.type = 111U;
    tmp_msg_0.access = 70U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZLRYOZHDRVZQTCFPGKTYEILCYZUPTTGCVTDVISOASZMZOPWLTRNDNLAMEIVFAODFHZMSMBABOUWTQSVUMYIHKJPNJWCUNEYAGQZZWPHJGJOHWVVLCKUGNWGLQRXRHHSBNZYHTXBIXPFBLFWOGCJAEBQCIERBXKWNCKPEGFSBDDVBFSOIKIUKMJFDMVXGXBXQEYJTHQLOPRYCYMXMAWEGKRWOKDIAJYHNCXRISUNSELDAQUNXSPUQRPKLEUMJFJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZIGMNOIMUGLHAKSIZQPBHZSMXGTXZOIWVAVXYFWIODDENVWXCTNFRLTUGATHEJCCOBRBEVGAYCPETA");
    IMC::FollowPath tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 12705U;
    tmp_tmp_msg_1_0.lat = 0.9702454772283944;
    tmp_tmp_msg_1_0.lon = 0.6459834503728292;
    tmp_tmp_msg_1_0.z = 0.3256814451757425;
    tmp_tmp_msg_1_0.z_units = 188U;
    tmp_tmp_msg_1_0.speed = 0.6586331142517889;
    tmp_tmp_msg_1_0.speed_units = 44U;
    tmp_tmp_msg_1_0.custom.assign("HIDCTZYAVYNLKFPXOVRIKWGMBZFQAKMGXGGLXFGXHKSUJHLWWMZPURCTEEYTOQIDTCPUIPDVNDVXKIOYEREBAVAB");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Conductivity tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.6187966016545248;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::VehicleMedium tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.medium = 177U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::RemoteActions tmp_msg_2;
    tmp_msg_2.actions.assign("EMHAXZSIMDSTLBYROHRXET");
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
    msg.setTimeStamp(0.26927357270965047);
    msg.setSource(3228U);
    msg.setSourceEntity(198U);
    msg.setDestination(62367U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("JHSCTGJWYXQRQTVTWXOTOKQRHPJLMGXFLCGNAQDSVRKHGLXVYGLZZQZAXKRZOIPTTMUXBJMIJONKOHRHADRWDMYYVGSQAYWYDLFWNLBPVEYUKXJGFBHLNSKPVIIPBSCFPMSEIVWWKFHGPBGMYIEQTVKLAACDCUQJ");
    msg.description.assign("VPLYWCBVMBCPOALPXZNUMJBZJFSRYUXJNKTIKAWXERSDDTRCQIJSJATHGCPAEZSPKCLWFNMZABQYHNGVBETPFOSEZBITWLJHOVXWODLMPBPEYKUSYYNSIQBWXTNROOQYENXOROSRQMIJFAXZDSANODCGMDRIGIUEVHUDLJJTMQGDEUYVEFHHIGYNIKYXCKZCDHQWXV");
    msg.vnamespace.assign("NSHPLFIXPRYCNWASHUBZNYGNXBUDHOMOXWDOJPLZBYDBBETRHSFXUWAEXTUOJZMCDILLIEQWRCOPSAYJDMAVRYAQSRZMAVZPTGHWFIFPVLGZEOOSZUQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AENELMQJTBMKDC");
    tmp_msg_0.value.assign("TZIGLWQETNVENIAXYNZSMRMZIQJDTEGJCBPLRYJTOMLIUDBUPX");
    tmp_msg_0.type = 12U;
    tmp_msg_0.access = 65U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NWKRPNJGVFLDKUYZIJHPNXHYOOBBQWMPIHXKCVPALQMMMWIFINLLSJTBFQQHTMUYLGWADBGYHNXPCZGPDUUWEYJPHTBYNLEOINFXXIATORUEDCJKMVDSIZRQJSSXRRNLHCBFIYZGQDFAWROECKJTQGVMVNVHDBTUXKGOJADKWHSUROCYCGNGCYROMQMQSEKAXKVXFSILGVSUWEFZBVDAW");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("TSCSDGQCZOOFOZGYUIILUOFUJBUNPBZSSICZOXXEOWBJSITWAVSVPZWQXJFDOMKKZMPHEMTJRYTAUDVREUMUBGWFRNMYXKHYKJQCNHTQMPTHXQIKCBAFLPPIGBDQGQDYCSUYRWNNPADPKVKKCFXBNDAVTWTZJH");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.5316135523398593;
    tmp_tmp_msg_1_0.lon = 0.32616934501996564;
    tmp_tmp_msg_1_0.z = 0.9498524806401583;
    tmp_tmp_msg_1_0.z_units = 236U;
    tmp_tmp_msg_1_0.radius = 0.28023622614066235;
    tmp_tmp_msg_1_0.duration = 17411U;
    tmp_tmp_msg_1_0.speed = 0.17027165197724303;
    tmp_tmp_msg_1_0.speed_units = 173U;
    tmp_tmp_msg_1_0.custom.assign("QXRRXPTGLJLUBWQPONTNKCHGHBOHZSKWYCFPD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::IoEvent tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.type = 38U;
    tmp_tmp_msg_1_1.error.assign("GSRGTUEAMLBEYNPCICMRVJWCJXNQCFTKVHYOAXLGFPICUKDTFWVMBDQONRBWVRZWQBLHWERPKOKXJYOYADLHWZYFTKBQAQIG");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::LedBrightness tmp_msg_2;
    tmp_msg_2.name.assign("LMXVDKDGAKYBUPYQCHMRWNYJDMFOUHIZMLXWXJBQCZJPOXNUKHVTTVSAITUITJQWCW");
    tmp_msg_2.value = 249U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::DesiredPitch tmp_msg_3;
    tmp_msg_3.value = 0.21431037062993408;
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
    msg.setTimeStamp(0.09012383127562451);
    msg.setSource(3761U);
    msg.setSourceEntity(236U);
    msg.setDestination(32457U);
    msg.setDestinationEntity(156U);
    msg.maneuver_id.assign("FESYXMOVLMZBPIMREW");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4715390789232815;
    tmp_tmp_msg_0_0.speed_units = 145U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 63405U;
    tmp_msg_0.custom.assign("TILZIYEMYLWWKFJSDGAZSNUHPCELNIINQBQBSURIIVYWMQLSSVFVPGBCCXF");
    msg.data.set(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.18583347416449203;
    tmp_msg_1.beam_height = 0.4490517955597234;
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
    msg.setTimeStamp(0.4943220653150271);
    msg.setSource(17799U);
    msg.setSourceEntity(254U);
    msg.setDestination(50486U);
    msg.setDestinationEntity(230U);
    msg.maneuver_id.assign("RHYIPBTBQTKCNNNDNUYESMZVOQCWGYTOHAZJPIRQAUECBFDRHNZRTBOWOOYKVENCQAUULJVKSLCVWLACFPGQCXEWQDJBPLFDOFTPVZMEGARSGITDJXHMOXRHUPEGGNBXSJLJWIZCSTVWIYDIUUHHVRTOEJYZMOHLZMIVLYV");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 19900U;
    tmp_msg_0.lat = 0.26012266200472567;
    tmp_msg_0.lon = 0.31425013715847006;
    tmp_msg_0.z = 0.8964788686157057;
    tmp_msg_0.z_units = 75U;
    tmp_msg_0.amplitude = 0.24097997897084333;
    tmp_msg_0.pitch = 0.5998839733979318;
    tmp_msg_0.speed = 0.814158306351086;
    tmp_msg_0.speed_units = 113U;
    tmp_msg_0.custom.assign("SQSHMTOWGWXXKXPBEEKPGHMFAORYLGFCQPGDTUALYYAECZMTBWJPVEOLDQRRFSZQBHPNOJVIGGYFNEOEOIVDCMIODDIANSSWSQLAZJDVRHJHXXLLNS");
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
    msg.setTimeStamp(0.6390145247628728);
    msg.setSource(38757U);
    msg.setSourceEntity(160U);
    msg.setDestination(48483U);
    msg.setDestinationEntity(64U);
    msg.maneuver_id.assign("DCLPHMAXIDBCBHJANUZUPNUECQKUQMZNUGKYJAGDLLBTBKPRXSVKTBCLOCYDRCOSHWI");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.44979511371208847;
    tmp_msg_0.lon = 0.6608537496833453;
    tmp_msg_0.z = 0.07252335860582737;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.radius = 0.3795608004087948;
    tmp_msg_0.duration = 29755U;
    tmp_msg_0.speed = 0.33745064952298787;
    tmp_msg_0.speed_units = 206U;
    tmp_msg_0.custom.assign("VMXRGUMPWTQLHBQBCJNAOSXALUZWEOSTYINRMEZJGOZNUIFBILCBRTEYSFVQXIIDKKWZIEEBXDQXKAVUNCLYHPSRLUYPJLXHDRZJBAROCDDGPPZIWZTJWTDGV");
    msg.data.set(tmp_msg_0);
    IMC::FormationControlParams tmp_msg_1;
    tmp_msg_1.action = 162U;
    tmp_msg_1.lon_gain = 0.49094018838918185;
    tmp_msg_1.lat_gain = 0.2918632925574667;
    tmp_msg_1.bond_thick = 0.36395093218278785;
    tmp_msg_1.lead_gain = 0.56902339983778;
    tmp_msg_1.deconfl_gain = 0.05087883489303491;
    tmp_msg_1.accel_switch_gain = 0.38800378713780626;
    tmp_msg_1.safe_dist = 0.507908049556479;
    tmp_msg_1.deconflict_offset = 0.04036670115585905;
    tmp_msg_1.accel_safe_margin = 0.17108322279575927;
    tmp_msg_1.accel_lim_x = 0.6057613305105994;
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
    msg.setTimeStamp(0.5001600786638195);
    msg.setSource(58636U);
    msg.setSourceEntity(152U);
    msg.setDestination(33526U);
    msg.setDestinationEntity(70U);
    msg.source_man.assign("ZXPJMUTDFKIWITBYRPPWRBONCOADUIDLJTKOLDHRQNCIAWYYSOGQILEJKCSBPBZLHVENETWIXHXZCSLBWAIVUOCSERJRVJGIBDOUTTOZXSKXJPULHQCZJTBHDFIVAYKTFOGZURFHVAVLFDGJZNGCECAVXNEMQHMNDHSWCRGLAQSLPZPEAWIJENERVYEKDSKK");
    msg.dest_man.assign("ECHQMLXCLXWZHHQRSJMDUHCGSKREYVEZIDFQWRLXYOFUMEXPONVHYYMIWUZVLNESESBYWCJFPDXJXZOVFSTATUNYYHSQGPATMLNBFGTBMCKTAVAARSCRGHOKBNLPNKINJYIJCQAXCWGHRZWGTYEAOOIOVMPLZTJKSWQQDBPRIOSIKIGAGAPPBQUVMDKDDZKOFNFFBEPOIK");
    msg.conditions.assign("HSYPOCIBMKXERMNCVOZNRWBCWQILMKWJPKKTXYZULATAPPFBCEAJKUGVFETDZJUZDKSCUCVHGQLJRAJULLRBFEPJMGXTQZFLFWABMMTUWBJSCBBSXGAADKOQPINHGTIGDUEFIXQLJWBLICVDGYMHWFOUOHNVNGMSLXZQZHIV");

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
    msg.setTimeStamp(0.23252419790407708);
    msg.setSource(6425U);
    msg.setSourceEntity(230U);
    msg.setDestination(22650U);
    msg.setDestinationEntity(69U);
    msg.source_man.assign("DULELOAPXTLBUQAFKRHHHKXAZZBRJPOXVCCZOVFQZPCIGOZHZRTIWJLHCYJHUGKHEYDOJXQVJYLEQTNGISOKNCJVZJSDFSNQEAVYPEEYNJTCARIQRFJKCBNCUNLKPZXBUMMVWDMFYQGTMZSUUQSYKVCTGYAGALBSXNCFXBWGGMSBOGBFPTDFMXAVNWXXQRWKWSNYEUPJDATUWPBLRZREDOLFVBHUPDAPYSTMDRGMHHIILKFQSMW");
    msg.dest_man.assign("XIDOQRBOIYUXYFFEOEFJVKKFGDCZCBMUVUUEHKKOPWSALJWRPAQCRWVKHRXLDEQIRMHUBNC");
    msg.conditions.assign("JNMCEUKAUBYADNRPPMTMJDMWAEIJXSAOPXGKJNJHTLRZYCHOTCXUOVBVUSFZPILHIPSGNVRYIHMDSBXVAIOSVGKKNMRCBSNHVVPRSMMZFDLEOLIQHQCGEFYQEJHKJYLUCFQOWULYYWIHDFUTXCTPVZMKKATF");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("BGLOLVTYCCAGEMASRMEFWPZVRRVGVFHANHLHKRMO");
    tmp_msg_0.value = 188U;
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
    msg.setTimeStamp(0.8253678294796709);
    msg.setSource(34079U);
    msg.setSourceEntity(147U);
    msg.setDestination(930U);
    msg.setDestinationEntity(49U);
    msg.source_man.assign("ZJXBAVNLGBEYKRHKHSTILLJGFMSQWLNKOERHNJP");
    msg.dest_man.assign("SIWNRKUOOLFRWCWIFHPKJAETTQCEFLJFJYZCZHXNN");
    msg.conditions.assign("TWUSLACEGEPJNGFALZVKPRCZZQQABPIGKIMJOIXDXYVCDEDFYUBYBJQPKNZSAECFGNDLTUOBQWXNMDTIXRTKEEQNUDCHSLSYIIUFTYLRAVXHQYXWMFPBZCFHIKULAMTGMWBVTMHNIRVBSAGJOTAKSLOZHDHOJJQSCKHCJPEDYMSVWOEFVVZNGLRNWXGMYXPMLUOQUBWDU");

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
    msg.setTimeStamp(0.11450579157020724);
    msg.setSource(20747U);
    msg.setSourceEntity(130U);
    msg.setDestination(29215U);
    msg.setDestinationEntity(0U);
    msg.command = 75U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VZCQRTXSWCKOREGRMGIJXDWFIFLDJZZIDQCYZHXJJCFHFNBHQTAFJMEOBYHPTTSFQJBNKOKJMBFXGLJVHXWBOIPWCSSYLSKUMGDMQOVAYLNRPRERULYDVAIEQWIMVZSPATUKLOXCOJGNI");
    tmp_msg_0.description.assign("WZMUNXIGOJXCLRQSHGCUKTFYGERHAWYIZXIGBVFLGEOJPXQLTSJRGHKVVPFVVSIJCMGGHSNWNVKCSCBMBBAFYEXCKWKOQZPDTQHANFIJMTLIEPKZFZXPODTYZLMHAUATPHRVTDL");
    tmp_msg_0.vnamespace.assign("PONDYOVPJXYHMEVVLIPDDIEGYWRZHUVTHOISFRIQBVUXGUMDROVEYIXDROIQQCCZCNTSCBQBDFPRUJVZFHQCXEKHXNJILUHBTTQYTPSAJSNBYUBYIWGKUNRGEBWMZWEFCYFCANGHFYMDXGOOEXUWCULMVBNEPXXNHZFDDBKOJSIKPLTVASRLAWPQSHMJMWGLTCQWZJKZZRWUKSAFPTLPTGAANKESHKJLBMVOQGAAMXKWL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LLEPOOLDALJWYXJNQTDNFBMWRPQCSEMDTPECJXHMFINCNKXZFOORPZRMMPGLKISDBCHUIANZMOYTRZOQMIUKYWQXNSFOTWJVAUUIZVVUJEIDF");
    tmp_tmp_msg_0_0.value.assign("RYWTHQSKYWJMDINTEZLCLCZGRKIANKPMLDIGZPJB");
    tmp_tmp_msg_0_0.type = 117U;
    tmp_tmp_msg_0_0.access = 181U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OAMPNRUQMAQHSADDZGHOTADKGLLIBQPWYVHHPMHFXSEEYMKDLOFEJMFAPZIPGPICWFKIBRSIUXNVSCVZHAFCTSCOQMCJMTXQVORKZEJDQYKDEDBYHEXNEXWDNINTLZKSLBJGRVTROLJOWJQYVZEEGVBYCJZRALBBGNFUWKMTUGPDMKIYUFTMXRSYCTUL");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DYGHABTQSFYERMMXYILQNGRWJZEFKOZXBCCIQOZNSHULFVMGKQUDBBVDXGRNOCKATMYJDDYQVWEWZOQABBBIAHPBSLWOGLUCOKVGMNUARZIATYJSHMIZGLTGYMPNFFYTHUXEZSRERENDWJSPIOPLVJVWPNVMCADBLGQKKNFEOUPPSCTAJHNXVIIJU");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("MYIXPWRKQQZHWUOZMBRMZNOHFXBKDTTKVPCI");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.7855696898450361);
    msg.setSource(3543U);
    msg.setSourceEntity(160U);
    msg.setDestination(6638U);
    msg.setDestinationEntity(186U);
    msg.command = 171U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZBJQNUDIVIVIOGHFLHQGLZSLYSMHQNREIVTOXTRTQHQKWWTYZNSPTSFPCHVXOFWBUWWXONGUJWCGDYFUCRHVNIFFKTAZSZLYIAJZPSCJEAEBFHWAZEALKJZPDYFRPNJDOQTVDBXKLMVSJLKGMOECYSMDIRHUGKCKJKCLEAHZUD");
    tmp_msg_0.description.assign("CNMMTMXESAMGEWFXOYJPIRCDLARNITFZYTCCDQNSTEDLMEKRGHQMQGHYHRLSISKYRHEATIXUNVTMCEMPNXDYZBJXYUQDDHJZFQPAIXSFPTQROJWCZAGZCKBTAEBMPAGUHYOKBUOCHOWGUTUFLGSNJRVWVVKSURPADVLQGVDXWEMBZXVHBZSQVDKYBNJFJLKFLITLKWZWKOCXAUNPJEUZWFQHPRJWIBCDGIEPVJNOQRNUZHFOKISG");
    tmp_msg_0.vnamespace.assign("KUPFYIILXCBXIXANTCUERXXTSPBVWADWWKXSRTMHJFGQHIYLJNGYPVTZNTQWZYUSUFYHEHZCZCLMVMBDNRNIGSDPMOVLUOVJPEQHAZDZESKEKOKXISQWXZYQRZEZSKWQQSNWUKRUAWSCDZBBMFQWGACLMVQGBLAFDKNMTTEEAMJIDPAAHUCEGBLETDHFPGKJYFCLTYBLMDRIOIVGCJXXSHROPFTGOHPMNUL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AWCZFFTINAIYZXIYOUTWJVTIKHEJRMNBSSDMKCVSPTGZNGADVXDSIDBPPUNLMDTJDQYCPQHGQMPUBNXEQAZSXORDAENONOHRIWJXVBXUTVQQHOGWIXUKKZAUWBHECZZAOOQLIYLLRIBYREAZJRQKWKXNOUMWUCVYGSSGPFFCDEBNXR");
    tmp_tmp_msg_0_0.value.assign("IUKROGCPAUIUKQADUCEZRKOCSDGHKIUELOMQALMJCYVGBVLTYZVYL");
    tmp_tmp_msg_0_0.type = 148U;
    tmp_tmp_msg_0_0.access = 162U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OHABFBQRNWOJVGQETDLKVMPODEXYUCUVECEIJISPMHYPQYUHMXZQSCINBTYRXSUSRGGFJNFPIFPKTNTECONCGXKZJKYZOVRWRMCFVYLJNDJEVZAOSZXLTNNKWWACMKGGAIWPRHXEHDDTNBYAHZSKZDTQIARLTQWKUTSBIXBIFBAHYVJDDMCABZGULHWEDWFVWQVIAFFSJZKMOMQKPGBEBQUFHPRWCSREPXGIZXAL");
    IMC::Event tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.topic.assign("ELODUNLNICFKYAYCYUVGXJFFNTBRYEBIOYJRGVEGMEPZHOFZULWLRZCPMTTBPWKWUEISUVHXPREOJNKTBYWBPAPMIXEKVJOADZDFHGTQPJHJCFQVSSRCBIWTINGQIMKODDTOZONOWCLYHGSUAFVMXIEJXTFJCJVTASRXWCAGIFZXXMPLWBQARBUZVBZDSAHKMGVSMRNAMGVQQGWUINJKXLMRDAQYELTRYDCPYCZ");
    tmp_tmp_msg_0_1.data.assign("JWXOHARHGLSOUBAVZVPNBTS");
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
    msg.setTimeStamp(0.5242513361269064);
    msg.setSource(19148U);
    msg.setSourceEntity(16U);
    msg.setDestination(31432U);
    msg.setDestinationEntity(66U);
    msg.command = 23U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GTRNDHIHEJEOCGFCTMFSZOZOCMHKBQPNUYXUOKBKWLDVMEFVXPQICMWZDZC");
    tmp_msg_0.description.assign("ZNTAHGDLIBDJEBBZAKETHXFEFATFVFIDTWTXAGUL");
    tmp_msg_0.vnamespace.assign("QTGUCKHSWLRCBNLTBWLDFCWFBSZCXLWOEFVIOEAUXJNYRRXOKAHNEUVREVSGXAOOZGNMTFJRQATDBEFHFYSQKGZLVEHJTIVGVWPTGJWMPAKPYVGYHQFESOVBCPQNQDRPMFIMY");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JJADLPNRBUDMGPWHRKXQYOCHTAWFFUENVCBEGTKFYJLWPYVNOUGBOPSDFIPEFMEZLRQBDXQBZVXUTVLIVWOPKSNDZHWHPAWTPIYAVCXNQXAREJXDOXITLNLBYNMZB");
    tmp_tmp_msg_0_0.value.assign("YBQGAMRYWOHROIVPERGKRAHBWSEEHXXPSLTYDPUCMQMZNFWFINJRTXHMBQRMAWGZDUTIQNNPLNZZAUBZAUZGOXMNNNSTVCPWKPOMHEGCUDAECSTOIVCLMGVIFDXHIKSFIYHKEDOSSLYGYNOUCBPELHHXTLNMJRYZID");
    tmp_tmp_msg_0_0.type = 143U;
    tmp_tmp_msg_0_0.access = 181U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("IKBUEPVXDUNQJWXCLOZOJBFWRIWAGYKLFXVUCRFCHKFISCPUWSJATQYSOKEFLZETICNCIMLDPKMUKAMXQXGCHEOPTUYYYIOEUBDTTMJDSBLCNDJEVHOBPXBQYSFDOTTYVN");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YIUVBPFAJZKELYEJESZRWDSDATHPUTPSMQGXNSQYNAOKBXBTPVDOLYCUTRHWQIFNGJBWXMSYHTGBWZBDSHQVKSPIJWDOBJGRDZTMAVHADOUVMMAPILEEZOCRLVKARBQXGUIAPMWAGIDXHIIOPTQKOICCGZVHCNCEOZJMDKJGXEXRCXJBFNFNPJAXZRLLLBRSLLWEKFYHTKIFNLDUSEQVKUQ");
    IMC::Rows tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 28116U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.11330814325049221;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.2598160307464331;
    tmp_tmp_tmp_msg_0_1_0.z = 0.614619912720562;
    tmp_tmp_tmp_msg_0_1_0.z_units = 239U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.034622522832417624;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 18U;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.5089371936832171;
    tmp_tmp_tmp_msg_0_1_0.cross_angle = 0.21995253668310633;
    tmp_tmp_tmp_msg_0_1_0.width = 0.9594453965468638;
    tmp_tmp_tmp_msg_0_1_0.length = 0.06839941268070981;
    tmp_tmp_tmp_msg_0_1_0.hstep = 0.6427201671743725;
    tmp_tmp_tmp_msg_0_1_0.coff = 105U;
    tmp_tmp_tmp_msg_0_1_0.alternation = 121U;
    tmp_tmp_tmp_msg_0_1_0.flags = 249U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("HQWECYUGOWPJVXIXWUAGKBIJQEKCOWSAZCZKDCYSSBIYYFDETKHVQZ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::MessagePart tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.uid = 211U;
    tmp_tmp_tmp_msg_0_1_1.frag_number = 247U;
    tmp_tmp_tmp_msg_0_1_1.num_frags = 211U;
    const char tmp_tmp_tmp_tmp_msg_0_1_1_0[] = {-65, -24, 4, -18, -79, 39, -83, 79, -26, 9, -54, -94, 99, -27, 110, 122, 81, 41, 112, 9, -98, -112, 113, -38, 5, -46, -117, -116, 126, 40, 70, -31, 16, -6, 78, 39, 109, -99, 23, 109, 80, 45, 37, -102, 83, 79, -25, -63, 36, 90, -125, -38, -60, 48, -117, 112, 68, -31, -18, -13, 108, 41, 56, 64, -121, 108, 26, -127, -121, -127, -88, -128, 91, 115, -48, 122, -120, -114, -124, 6, 118, 122, 1, -66, -109, 99, 93, -55, -34, -98, 120, -26, -2, -88, 54, -105, -117, 41, 42, -36, -13, -61, 42, 40, -8, 97, -77, 41, -47, 6, -100, -68, -45, 16, -69, -60, 79, -50, 109, 63, -62, 25, 62, 91, -33, 126, -50, -22, -96, -84, 68, 60, -88, -41, 95, 34, 99, 47, 100, -110, 123, -61, -47, 39, 121, -64, -76, -6, -46, -71, -100, 61, -85, 108, 23, 100, -63, 7, 122, -24, 8, -65, 47, 76, -26, 3, -120, 29, 95, 122, -95, 120, -95, 87, 31, -61, 116, -76, -120, -39, 119, -115, -52, 99, 47, -24, 87, -120, 79, 118, -121, 92, 50, -10, 9, -81, -34, 5, -46, 102, 28, -99, 12, -3, -107, -37, -48, -105, 13, -30, -13, -30, -61, -125, -11, 1};
    tmp_tmp_tmp_msg_0_1_1.data.assign(tmp_tmp_tmp_tmp_msg_0_1_1_0, tmp_tmp_tmp_tmp_msg_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_1_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanControlState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 197U;
    tmp_tmp_msg_0_2.plan_id.assign("BXUDRNTVAGFMERHVLIJVYGUWQSNZFQSKAPFXFIDUSKXUYQEETEFGZDUJFNIUUCYISZDMKHCQXWBTOAMQINOKZZO");
    tmp_tmp_msg_0_2.plan_eta = 420132130;
    tmp_tmp_msg_0_2.plan_progress = 0.8378011255454321;
    tmp_tmp_msg_0_2.man_id.assign("RIETCRZGLJWUKNLQGAOKACHJNELKOLEPYTPQHERGWQNASSDRVZFOTBZPXTDJHQFVCZWYIVTBIBZAGOUKGLFSPPDBAMCJGRYEINEVNVPVOYXTZWOBAJXKQIMSDUJPGFVCWOZCBYNJHVHBXTTUHHTBMUGLA");
    tmp_tmp_msg_0_2.man_type = 40379U;
    tmp_tmp_msg_0_2.man_eta = 1890593698;
    tmp_tmp_msg_0_2.last_outcome = 227U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Brake tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 45U;
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
    msg.setTimeStamp(0.28932081943841015);
    msg.setSource(15244U);
    msg.setSourceEntity(62U);
    msg.setDestination(795U);
    msg.setDestinationEntity(53U);
    msg.state = 25U;
    msg.plan_id.assign("DZRTLRHSOLMFWHTTJVVWINGDKIECPRTUSDXZUEWIPSEFXPYZTQCJWYAXJOLZKLHGYIMHKSBEEEXIFEDBHCETBPZRBQAEMAGJLVQUAZXQVSIHWXJGUYGRVHNLKXHCWTDUKXJIOLNGGORQOZNIKBAFRDNJAFYKZWMAHDYLLNWSPPBCRCKIQCAFPORTPBUKONMCZDFCGZEUPFSQFBASYPNTMUGUJXWURDVVFNMGMLYKCASVJNTMODBWVSYHJYQ");
    msg.comm_level = 96U;

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
    msg.setTimeStamp(0.6541990787742477);
    msg.setSource(54847U);
    msg.setSourceEntity(158U);
    msg.setDestination(27158U);
    msg.setDestinationEntity(222U);
    msg.state = 214U;
    msg.plan_id.assign("NWCTOMZOIQAWNFRYELUQWANDYPQVWOYAMRPPBSDQOIGCXYHLUTSHXERATARMHJSZBTFZBPEETXIBDNTAXIGBKOIEIKSIMZJQJZGWKMVSVKXQSLEXKHMBFFDNKBAGHFMSYHSOMACUNRWMCZGZ");
    msg.comm_level = 22U;

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
    msg.setTimeStamp(0.6477848508253783);
    msg.setSource(31405U);
    msg.setSourceEntity(72U);
    msg.setDestination(41301U);
    msg.setDestinationEntity(245U);
    msg.state = 64U;
    msg.plan_id.assign("EFLGPKQTIHDDZOKXFVIBNIVROTFJXQKQBNPXNWNWQAHBUAHRXBGUYWOSPDGLFDQRZBTADYZGAZTFLAKSMMDCNRQUIHOPEVOECLVIHCMTYOIPBLPYVGSYTYBCKWPZSURJIKDBIVSPQMWFJOEHEOXARDZTMXAEWFGFGBMKOYNXYZWYZUBHPNCHHZ");
    msg.comm_level = 243U;

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
    msg.setTimeStamp(0.7973239099959871);
    msg.setSource(23660U);
    msg.setSourceEntity(157U);
    msg.setDestination(48376U);
    msg.setDestinationEntity(0U);
    msg.type = 67U;
    msg.op = 76U;
    msg.request_id = 37789U;
    msg.plan_id.assign("LDKRMDCXFMASGVLVNFFVICOOZKLSZBJSZTXXNUCIOQWXTIJUMWUYHAUJSNQFCAGRNTQLHQNMAHLOGLAKTIZAFBKERKRJYCWKMTGULAXEDEKRPSSOQCSQFZFPHDFKJOIETDEEONAYVUYDFRDIELZBGXMWLPKBNAGQHQMPOBOGQYTVPFRUBVUPVGXBYZWHXWWDCBRBDHHIUP");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.1343826189372661;
    tmp_msg_0.type = 216U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HZLZPYMNOHZSGNSXFPJUQNAWRPVKKNTZPTHSOBNFLDUPTIKGKBCOQDTAYPABDSUFKUJYZSHJYUXCCVLGWDGBERHZPDQZIBCDQTXIEAGMKXVJDEHBHYCFLOZGYPSBMCLCJFNA");

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
    msg.setTimeStamp(0.16684065886269317);
    msg.setSource(19653U);
    msg.setSourceEntity(249U);
    msg.setDestination(43397U);
    msg.setDestinationEntity(143U);
    msg.type = 68U;
    msg.op = 34U;
    msg.request_id = 53497U;
    msg.plan_id.assign("TNXQVLDUWMJRBJLREGLJRTXTMCVZKCAJMQNVSPIDKHVXPQCUOFXLNYTAUNQUYLEVBJYZG");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 144U;
    tmp_msg_0.text.assign("ENFIKSLBQVPYQDJJNCBAJWRBVUFCCCLTRJTFWHPAWKKVIVDJBQWJQVDZNTYAIAUTHQZDIOHIERKWHXNXZXOBISYEYFOHSFRFSBTCEVXXCPDAHQYINLYTXAUEYUGNSTLQLMEMMSKQZCGGUZKPFTCEMRYMSUOUIAKWEVQLGLXVLKPCDENDVIZGUYOZBNEGZMOGMHAPORWZGDRHMPHFHUXJDBNPJLKSRPYILOXPJSZOR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BPBLSYHGWSDRZGIVSK");

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
    msg.setTimeStamp(0.39959548705355286);
    msg.setSource(22099U);
    msg.setSourceEntity(30U);
    msg.setDestination(9153U);
    msg.setDestinationEntity(147U);
    msg.type = 147U;
    msg.op = 185U;
    msg.request_id = 9511U;
    msg.plan_id.assign("RXNPXLIQFREBLVULOBSRMJNZKMPUVSZFAFWOKKEZAFZCZFXHWOHSBQWBJBAUDYOAWZRHSZVJPHUKTQNGSDBYNMBRIGKCYREXEMYHBFTCXQJOHJYHPORPJZOWTKZCYYNYOZJAXKMVJAGGQXVFLANXLLMODIQBPDMCWLQDELHNLNTCCLCUQFTUADNSMSPTUWMVYE");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 209U;
    tmp_msg_0.op = 243U;
    tmp_msg_0.plan_id.assign("UHVXTEGVACMBWRBCJWSPGGUJHFWNYTGTJLEAVWCLQSSJYKGRLRFRYRDWZLHFJVBWNLUVGODHMYZOEFIRXPCNCRYTYXQHIHPUSRTONQXDBIXHWKCDYDOOIJPBUENPVENTSXLWXUBIINTWQZPEJVTFKKEAPLOHGCKBZCHQFEZZMSKMSMBWDKJZZJYZKAYGAXLMDNVROMDYMAIQNFVEHITQGXEMUPSFAQQCOIDOASMOXKBUQBCUDKSFTRJL");
    tmp_msg_0.params.assign("KRVVXMSZLBWYHLNKIXZOWOYJKONTTVOUWHRKQSYGVTMVXCQAJSACJYQEYPTHBONXVUAMXCZQIDUFXJHSPOETQQXATZBSKHPVFRIOKPJGGBFEKQDUQNPBFLEIBBLCHRRMTSAJNAALW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CAXHGTRIBIBVWTTSNBFCBCSMGDMPKYVGIRRZITOVPQGXKDFHQHEKGMQZZT");

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
    msg.setTimeStamp(0.5615812791889998);
    msg.setSource(20368U);
    msg.setSourceEntity(225U);
    msg.setDestination(19016U);
    msg.setDestinationEntity(122U);
    msg.plan_count = 8321U;
    msg.plan_size = 1560733707U;
    msg.change_time = 0.9333284540333882;
    msg.change_sid = 25190U;
    msg.change_sname.assign("OXUBMFQLBEIZLZTCQUXICDGDCLWLCEZPQPFGGPFMNSCRBUXSYNEEPYSWTVYTHKRKQXAOPALNOTAFGBNIUWIUUXOREWTQ");
    const char tmp_msg_0[] = {53, 40, 19, -97, -86, 108, -54, -94, 110, 106, -74, -111, -62, -90, 86, 45, -119, 26, 17, -77, -99, -104, 14, 11, -41, -100, -16, 94, 78, 96, 97, -37, 126, 18, -123, 22, -31, -20, 33, -11, 7, -110, 83, 9, -15, 103, 20, 39, -26, -114, -75, 108, -118, 34, 47, -92, -47, -102, 16, -57, 65, -22, 118, -97, -10, 91, -88, -73, 69, 49, -70, 115, 71, 104, 8, 28, -31, 107, 110, -106, 26, -37, -85, -37, -8, -6, 25, -123, 41, -93, 45, -118, 69, 83, -63, -21, -92, -1, -29, -67, -114, -70, 85, -18, -25, 109, 126, 36, 74, 114, -67, 101, 1, 89, 116, -24, -60, -8, -117, 25, 117, -111, -124, 17, 74, -123, -19, -32, 26, -60, 66, 1, 31, -113, -12, 70, -95, 17, -3, -38, -59, 29, 98, 47, -95, -85, 5, -119, -70, -24, 121, -18, 72, 27, -109, 55, 107, 77, -93, -31, -51, -51, 73, -107, -46, -49, -61, 72, -70, -3, 97, 16, 3, -58, 37, -36, 71, 35, 81, -20, -37, 56, 101, -32, -37, 6, -109, -37, 13, -87, 71, 11, 31, -4, -33, 74, 0, 99, 40, 115, 43, 123, 84, -53, -101, 38, 58, -112, -65, -105, -15, -68, 99, -70, 13, -108, -11, -1, -6, 2, -24, -102, 63, 22, -31, 106, 93, -23, -40, -21, -51, -23, 82, -109, 58, -116, 45, -18, 38, -76, 42, 8, 16};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WEFZUKFQPUTTNJQEWELKRQTCFINAXYQSZGNGUNDUWXVGYVWDEGQUOSLZKLOELCNZLYIRVFFNPDCEHLBMOTICXHQOBWEKBUPFRPQHZHWKAVAHJDDMFDSQFDCFHPOOEGIJMISXREJJACMDINCQTGVNRAJBLBQVXHOKDHYBBWBTPXTPZPSWZROXDMTBEMKMYGIRKSMOCTMAAARFYBZUGNSLIUNHYRKAVLUJWSXSZYJCZRMIWJGHPXVTASCLJOVIGY");
    tmp_msg_1.plan_size = 55938U;
    tmp_msg_1.change_time = 0.8582971050293345;
    tmp_msg_1.change_sid = 9749U;
    tmp_msg_1.change_sname.assign("NSOWXWXGJTTBMQBWQDLQRIWLHMAERLLCXZOCYPLYPHHVPOSRACJYTZKKKMDVCEANNLCXIKIAMPFWDRFREYHVVZITWAZAEFUKJTFOIHDJHUUBPFFVCKDFFZXHIJMXQC");
    const char tmp_tmp_msg_1_0[] = {-117, 94, 54, 61, -49, 8, -72, -87, 61, 126, -89, 22, 11, -89, 67, -37, 5, -62, -3, -74, -67, -19, 95, -32, -73, 24, -100, 20, 107, 25};
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
    msg.setTimeStamp(0.6566797421731102);
    msg.setSource(22600U);
    msg.setSourceEntity(172U);
    msg.setDestination(4029U);
    msg.setDestinationEntity(237U);
    msg.plan_count = 57949U;
    msg.plan_size = 3045229239U;
    msg.change_time = 0.14373989322450265;
    msg.change_sid = 16350U;
    msg.change_sname.assign("WTPAOICSRECPFADHSEPOBJVGSLOHVBJQGPRLMDTGGFAZMYYDXEVLTKWVDUNTQHHTWHTCRLEMXKDQJRNTZFDANUTPNPQKZLCODFOHUZGGFCQJVFKREQXBIOJBLTUXBVMMSMXNJUYPHMBEUALYHVDARZGXOYFUMESQIFKGRIURVYWYIHTNGJWOURAOQMZQHNYPCKSLNNIQAKZMEBIXXCBWALCKBYOEZZLJIPSDKZSKJWVXREICJDWBPSWUCW");
    const char tmp_msg_0[] = {0, 40, 24, 99, -81, -17, -93, -12, 16, 65, -91, -47, 24, 49, 53, -39, -91, 74, -10, -2, -13, -102, -84, 38, -11, -2, 2, 112, -75, 20, 60, -70, 103, 88, 11, -4, 99, -95, 91, 9, 26, 93, 126, 38, 11, 91, 9, 11, 31, -25, 96, 48, 97, 96, 4, 53, 45, -124, 55, -82, 17, 7, 15, -57, 26, -65, -18, -44, -48, 56, 53, 84, 75, 120, -69, 102, 70, 113, -19, -60, 93};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LMYPWLFMVATHSLWULVEFJMRHTKENBBKBOFFBRJQVTPGNAJSWRHYOYMVQUIRWSYJCBTZASKSPZEIRGWYIQQBLGB");
    tmp_msg_1.plan_size = 63076U;
    tmp_msg_1.change_time = 0.06427714715016941;
    tmp_msg_1.change_sid = 36734U;
    tmp_msg_1.change_sname.assign("HEUKKQJHQXBCKJVYAANHIWTSCPQGATXMDXZLBYUSSOOFXLYJYTWEFSEWVOGLBNYOEWIYMTSIMQMZHUJMGERZDSGDJOHXOEKYZGHATKPNRNPBNFLSBVQBQIKJULRCKBPZRUSKMUQDDACRMOLIKCWVNSTNXGDLPUDATSZEVBONRXDUROPVHPRVXPWWLBBZFMAJZIJCUPTYVFQFRDGCLRHYTM");
    const char tmp_tmp_msg_1_0[] = {-36, -23, -57, 124, 72, -25, 26, -54, -56, 89, -126, -64, 111, -124, -74, -8, -112, -98, 100, -102, -90, -101, 41, 9, 56, 28, -68, -92, 38, -123, -37, 38, 67, 110, 46, -11, 115, 60, -58, 52, -4, 92, -69, 44, -54, -108, -17, 73, -6, 112, 74, 58, -88, 33, 91, -26, -62, -92, 24, -10, -68, 69, 62, -113, 20, -19, 17, -28, 70, 32, 19, 42, -115, -103, 10, 94, -89, 54, -34, -43, 94, -58, 94, 107, 25, 0, 123, -78, 85, 76, -67, -117, 66, -82, 80, -96, -27, 66, -118, -82, -64, -12, 11, -41, 53, 63, 61, 29, -34, 122, 80, -106, 93, -58, -16, -5, 34, -99, -4, -45, -100, 44, -82, -109, 49, -47, 93, -107, 45, 98, 29, -77, -6, 44, 2, 90, -79, 50, -94, 4, -94, -110, -66, -28, -59, 118, -57, 99, 79, -64, -61, -64, -114, 2, 88, -120, -37, 76, 98, -47, -91, 99, -98, -22, 81, 100};
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
    msg.setTimeStamp(0.6651696719475602);
    msg.setSource(36615U);
    msg.setSourceEntity(180U);
    msg.setDestination(50846U);
    msg.setDestinationEntity(35U);
    msg.plan_count = 735U;
    msg.plan_size = 2961414412U;
    msg.change_time = 0.7698066407026243;
    msg.change_sid = 41187U;
    msg.change_sname.assign("AJDHIKJWNLFTEIYSJYKYNPZCXSCKZEDGOYBPGJXAIDBCPVWDNTIAVTTXGFKCZMIQDVEKOZPKMWHLGSRARWTTMEQUFFJDIBGYGEBPUGWOFOCWPYWGYMAHVUNTDRIBMC");
    const char tmp_msg_0[] = {-15, -9, 105, 37, 13, -38, 21, -103, 121, -27, 13, -111, 103, 85, -83, 14, 69, 0, 24, -21, 125, 89, 12, -21, -91, 19, 24, -63, 125, -71, -80, -105, 108, -50, 100, 34, -104, -125, 42, -67, -26, 86, 88, -46, 21, 25, -45, 125, 9, -122, -45, 115, -66, 61, 17, -128, -6, 77, 89, 68, 117, -127, 80, -50, 5, -80, -59, 67, 72, -23, -57, -126, 109, -110, 33, 15, 2, 97, -74, 63, -34, -25, 18, 78, -9};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("DIEPJIJSUQFIWCVAGYVKCUACYSACJZXLLQGOTPTOPWHFASKQTRIVVLLSJCOXTYWHZKSXNIHMTUSTQNWFFVEGAIJQRHTZCUXDBBCHZDDCREPBWJ");
    tmp_msg_1.plan_size = 51480U;
    tmp_msg_1.change_time = 0.9642775425346254;
    tmp_msg_1.change_sid = 63047U;
    tmp_msg_1.change_sname.assign("XTEYFEAWWZNMUERFNSOJPAQKFETYMJHUPSJMFGGNGDILHVGLBCCMZVJKJYRAURDBQVSSNDEBLXWGHD");
    const char tmp_tmp_msg_1_0[] = {56, -80, 22, -82, 83, -52, -81, 45, 99, -99, -123, -68, 88, -117, -39, -103, 63, 12, -103, -80, 123, -120, 63, 65, -125, 116, 86, 78, -9, -87, 72, 18, -32, -44, 97, -13, 108, 117, -93, 8, -115, 113, 103, 75, -44, -19, 114, 92, -54, -64, 94, 64, 33, -17, 71, -50, 75, 70, 117, -3, -39, -18, -83, 123, 84, 104, -69, -106, -113, 96, -97, 124, -95, -31, 122, 12, 121, -18, -58, -88, 0, 125, -29, 22, 45, -128, -79, -21, -73, -111, -128, -4, 31, -127, -77, 53, 44, -60, 37, -38, -41, -14, 1, 15, -77, 87};
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
    msg.setTimeStamp(0.41654385675705696);
    msg.setSource(38562U);
    msg.setSourceEntity(191U);
    msg.setDestination(60618U);
    msg.setDestinationEntity(127U);
    msg.plan_id.assign("VKRPQLYNITEACZOTRIHTVUQXCCABEGLZDPVSCHLEHYCXSUNUAJGLPVMXTRGSZIABKWMVLWV");
    msg.plan_size = 60296U;
    msg.change_time = 0.5652883683634843;
    msg.change_sid = 31208U;
    msg.change_sname.assign("MINKFVEPJYBBSCWAAXLMCHKORIVNECQXHAOEHQGOTXMBWPVLYPONFOBMQXQTIDCAXHLHHDKYBGOTWOJZZTJWU");
    const char tmp_msg_0[] = {-118, 102, 53, 60, -25, 78, -115, 100, 61, -76, 11, 116, -66, -123, -123, -96, 43, 74, -38, -88, -34, 52, 66, 15, -124, 27, 6, 112, 68, 81, -81, 11, 122, -2, 44, -6, -11, -34, -52, -126, 48, -126, -44, 43, 123, 66, 64, 92, -96, -16, -85, -58, -3, -33, 27, -85, -66, 34, -73, 11, 121, -118, 77, -45, -29, -71, 118, -116, 1, -30, -114, 3, -122, -30, -28, 81, 50, -120, -125, -52, -109, -84, -85, 82, 97, -121, 112, -24, -66, -33, 96, 114, 88, -51, 34, 64, 39, 112, -67, 43, 16, 113, -43, -104, 78, 96, -47, -101, -99, 104, -115, 98, -6, -13, 19, 8, 47, 17, -31, -51, -1, 47, 70, 113, 119, -1, 85, 43, 25, 11, -119, -93, -101, -94, -75, 71, -24, -110, 76, 42, 97, -56, 29, -126, 119, 3, 76, 108, -72, 99, 34, -114, -23, -69};
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
    msg.setTimeStamp(0.06456396843742829);
    msg.setSource(27947U);
    msg.setSourceEntity(177U);
    msg.setDestination(48618U);
    msg.setDestinationEntity(108U);
    msg.plan_id.assign("EUTAKODWZVRXCIPKHGWQPARXPTNTLIWMCWJELJMNRRMFOVYDGJDGJEFZTBOJHWOANXEQCFHITJPSYQ");
    msg.plan_size = 30172U;
    msg.change_time = 0.27335898244743817;
    msg.change_sid = 48521U;
    msg.change_sname.assign("CIELCWCGDUIEEVOAPBCGQW");
    const char tmp_msg_0[] = {91, -31, -1, 45, 72, 98, -55, -89, -46, -117, -47, 83, 113, 78, 111, -56, -46, -99, 54, 7, 19, 70, -6, -87, 88, 88, -26, 42, 96, 79, -3, 15, -62, 101, 73, -79, 85, 42, -32, 6, 102, -122, -118, -94, -1, -19, -91, -49, 99, 87, 44, -83, 53, 114, -14, 53, -124, 71, -61, 33, -105, 125, 84, -7, -70, 61, 6, 19, -120, 16, 85, 77, -95, -17, -74, -2, -125, 15, -91, -113, -83, -64, 78, -47, 110, 23, -80, 37, -41, -41, -75, -75, -118, -21, 7, 114, -32, -73, 122, 99, 31, -27, 11, 7, 55, 86, -101, -96, 11, -49, -69, 100, 26, -12, -25, -98, -119, 34, -100, -51, -78, -5, -14, 42, -117, -34, 53, 90, 51, 96, -25, 115, 6};
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
    msg.setTimeStamp(0.559567915830305);
    msg.setSource(27185U);
    msg.setSourceEntity(231U);
    msg.setDestination(21014U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("VFNUQBUBUIRGEOVLUYTLNHMBZSAEEQTVYCRGISAFDXHETFHRJNWXDPGYSCFVZWXHATDMHKHMMHRPUKFLNQPIRKQDJRJMFGLJZLWWASTDGAAVXKWQXAVCWTPKSJKINOBHSCBETMUBHTIJFXWLLEXFDZGYXCCNLKWBSYMJQDAVGPKOXJVKOJRINUWCOR");
    msg.plan_size = 27125U;
    msg.change_time = 0.6117034677982501;
    msg.change_sid = 31859U;
    msg.change_sname.assign("MGSGKWCBRAKCZMSGITIXXFCOISJEAFLOWNYAKEXBRZYGDBXASPHGUVLIHLDSCXKRUKSBZIHJOYYRVOZVNCHK");
    const char tmp_msg_0[] = {-88, -61, -85, 56, -97, 99, 12, 4, 94, -128, -8, 21, -96, -98, 81, -45, 9, 109, 40, -78, -72, -24, -84, -80, 17, -19, 102, 49, 84, -77, 93, -99, 64, 1, 87, -114, 34, 35, 96, 85, 55, -8, 79, -18, -21, 97, -110, 79, -43, 20, -44, -116, -48, 34, -24, 62, -76, -56, 84, 90, 92, -81, -40, -30, 70, 91, -28, -10, -38, 124, -71, 47, -70, 83, 67, 16, -65, 32, 18, -47, -98, -19, -34, 18, -21, -99, 96, -79, 34, 97, -110, -105, 101, 69, -126, -101, 106, -8, 95, 96, 117, -95, -55, -26, -121, 74, 7, 51, 83, 52, -103, -26, -118, -100, -14, -94, -39, 84, -72, 120, 97, -2, 123, 81, 59, 100, -51, 106};
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
    msg.setTimeStamp(0.5729086418336728);
    msg.setSource(51652U);
    msg.setSourceEntity(146U);
    msg.setDestination(57006U);
    msg.setDestinationEntity(44U);
    msg.type = 137U;
    msg.op = 145U;
    msg.request_id = 38113U;
    msg.plan_id.assign("VKBJACEQDCDHUJJWZLKRWZETNJSGRMQYLYEVDFNPINUPPJESXCFQGZRMYUVBOREXFJSVRZDLUGVCAWMHTSXHBXKHQUDYZGTVSCYONUSYOPTEERTFQSCHTHLZIKXWQZVMRUQHRNKAXFDAMWNIBFORATKNHZ");
    msg.flags = 41096U;
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CQEVWWCNSNBKXFJYOGRNWRZSLLMEZQVFETMUOHSEOUWAKZLVKWVPEGJFOTTWWEDXLPTYMQIRUPFPBBZOJFRNYLKBYHQNDCKGZZBCXTUHGXSPDSRMPXLVGJSPU");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8245703209824184;
    tmp_tmp_msg_0_0.lon = 0.08538770762935999;
    tmp_tmp_msg_0_0.z = 0.7858834995353181;
    tmp_tmp_msg_0_0.z_units = 197U;
    tmp_tmp_msg_0_0.speed = 0.3991925721480736;
    tmp_tmp_msg_0_0.speed_units = 5U;
    tmp_tmp_msg_0_0.start_time = 0.7515699999447679;
    tmp_tmp_msg_0_0.custom.assign("HQWCUWOCWPTFFQGSKLSMLGDOGKBFTUNXXQVELBSHKVGALJTENFLYHSRTAONIYBOPAWEVJBYMUWUHEAWKGZTAFICGKNWAOSSRXYQXJDMPJBBWEZORCAQCKXUXURDVFILAZPBDZPEZETJHNAVNCVSZRQPDGGDMSLXCTJKOAUICQQIJHISKFDIYNPDOZYZGRJBPEXHHYVMFHREJVCMQYMS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PKDWROTWBTFXEXGIVLANNMBZWLQHFCEIFZVSCICODJSSWGQZFHADZWJKMDZEZPIXOJYUZPJFORIJMVCOVTYMSTFOEYUUCHFRMTLGGEUQLKAKITALIUVIWXBKQBKQWSNEAWEGNJCCDOMKKARPYYRIUZSNBDPMYGWPHBXUNXJNCQSDTUUYIRJHQCGEGLTHQ");

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
    msg.setTimeStamp(0.8684124649562945);
    msg.setSource(4667U);
    msg.setSourceEntity(228U);
    msg.setDestination(42210U);
    msg.setDestinationEntity(173U);
    msg.type = 66U;
    msg.op = 133U;
    msg.request_id = 48769U;
    msg.plan_id.assign("PQAVOSWZJYVMLBXXYYSPTUVLDNRGAIIAVFWPHTMYAJTCZZBGOWSNSTFSGZDPOPJSGUCQHDWUKJVTKWDDADXKRVNHOJAGYOFGQBYUYSNNCXCPFEINIIIRBKCBKTGAMXFFZLNRUNBETVJHLGBYUEQAOAOBQJMWRVMPNKZJPMNRHIWFHHEIELRGCMCKHCQTXDBZSZDMGHLUIFEYTLRWVOEKYRELUWEIQCDEPLOJMWXAQSZVFX");
    msg.flags = 38113U;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 49U;
    tmp_msg_0.error.assign("AWYODOXORZMHTBASHRTXKDHPNWMQPKCADFZS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GVVWNXBLWBERFABDJ");

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
    msg.setTimeStamp(0.8742495669047949);
    msg.setSource(55388U);
    msg.setSourceEntity(224U);
    msg.setDestination(55506U);
    msg.setDestinationEntity(91U);
    msg.type = 13U;
    msg.op = 68U;
    msg.request_id = 17809U;
    msg.plan_id.assign("QHKWZQCYBZQCPNZXFWWTMCLDJVKYHPPCUBDVCKILHUUVXGQVLBEWIJUQMCERKGNRJLLVEIYGP");
    msg.flags = 23996U;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.35496507547973155;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QFFDOHIHFVOHLAMUFSJCOWSVUYQDAQRXXUYXSRATWEXFMINUVDOYPIUZCBAENTPYQGAHCEBTJKKLHX");

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
    msg.setTimeStamp(0.5191891668880001);
    msg.setSource(45500U);
    msg.setSourceEntity(242U);
    msg.setDestination(37095U);
    msg.setDestinationEntity(176U);
    msg.state = 89U;
    msg.plan_id.assign("SPPHEPVPYGVECSZVNWTEBWLDHKVTCQTQRUFDBOKMGITDAQFMNQJZLATURZNCZWFUHUOCXOBUMDPJCCVROXEKANJUVHVCTI");
    msg.plan_eta = 1073781466;
    msg.plan_progress = 0.3484357918336335;
    msg.man_id.assign("OVVBEBQJJPVWOBHPQKGPAKTZXCLSOIREXSCADDYCUXOESWUJLEQFPVITVZSBFSNNMOEKTLYCQTSWWZZLNZGRCIEJMVAEBFWJI");
    msg.man_type = 124U;
    msg.man_eta = 88546054;
    msg.last_outcome = 27U;

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
    msg.setTimeStamp(0.09298034117183751);
    msg.setSource(56811U);
    msg.setSourceEntity(216U);
    msg.setDestination(64465U);
    msg.setDestinationEntity(135U);
    msg.state = 50U;
    msg.plan_id.assign("WBPDNXOKJFDBGFSCYBCLAKERIISCDXVMFTHNYNYTQLSPZAHWDTHLVJOZWMPQRPEZFTCGLPGDGSRM");
    msg.plan_eta = 1133252760;
    msg.plan_progress = 0.8026469698600024;
    msg.man_id.assign("XUMMEKOUZXPSZEMEVOBCOBGTBFRKJSRDDQGVRCBECXQKHHJHYEQMRXSYLVRDTENUDBAQQDKIANUETVLFPPAGXWSQYOAWDLZAWLZLPLHITKFTPSWTGEGUKYIFYLQYNALOBSCXNNIBMHPMUY");
    msg.man_type = 5476U;
    msg.man_eta = -1431938709;
    msg.last_outcome = 179U;

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
    msg.setTimeStamp(0.9223250586443966);
    msg.setSource(35843U);
    msg.setSourceEntity(194U);
    msg.setDestination(23836U);
    msg.setDestinationEntity(165U);
    msg.state = 247U;
    msg.plan_id.assign("LGEQBQFYWAFRRXUSWDOAUQTKXBVETUYVZPMSHKGQSTGYVRZPIRLTGIELNNIFCCDQWSJYMCWIYEFOMDAEAJTYPNZBSIBMQAUZZPALLIYXNQILGNLRESOVNVOXCXGKOGSAHUREUPKXMWCHURJVKFFYRNRKGDPWHJ");
    msg.plan_eta = -1093690875;
    msg.plan_progress = 0.5524627003974333;
    msg.man_id.assign("KHMZDQRFRYHYPDJZNUYNTPVSXSQWYOVXMAMVKVPRAZBMZIABDKGLWSOPRHEYSUDNFJUKWOYFGTGOFUWLZAZQBVBT");
    msg.man_type = 40875U;
    msg.man_eta = 774981706;
    msg.last_outcome = 57U;

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
    msg.setTimeStamp(0.28279801787555026);
    msg.setSource(28499U);
    msg.setSourceEntity(126U);
    msg.setDestination(9098U);
    msg.setDestinationEntity(228U);
    msg.name.assign("KPLNMXKGPBFTZZKOZSLLICAZYCNBQNJOPRWJYMERAHUYWDOFKWEWHUXNPIZVLQPZXWYZWIVVGMQTRNDKVMFXHLOOGDOQUJBGTOHJAZBIT");
    msg.value.assign("XWZFMJRFSTWECCLYJGVSUGYPGOJFYBHHGKTJUMNSZXAAMCIWAQCVXWMYRAEPJLGTMYJVIPKVVGNEKNKVCPRXJJIDQZUESEORXPJRTWHOGXPJQTZKWDWLPKWKIVZMFDNEAULQBLHHKAB");
    msg.type = 206U;
    msg.access = 214U;

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
    msg.setTimeStamp(0.02771952103110875);
    msg.setSource(26443U);
    msg.setSourceEntity(43U);
    msg.setDestination(54881U);
    msg.setDestinationEntity(194U);
    msg.name.assign("VAANYYVNXETLEEWKCHHMRDBWRVQXJXEAXSFRAGYKALMSPSJCDSPUNCWZUUWXEPUCJHJRQODCSFIOLYIQOCPVXWGLHNYMJCDBQWHGGBWGZEQKQVZCQUIK");
    msg.value.assign("RMLBEFBYTWUTPFIOOJOOCNLPIXDKZKWVHOGTKEJDNOHALJYWULCUVYKFYRQVXFLZVLNGDURJJQAGMGKFNQCMPKICKTDNWRPUCRIYJGZYHIWPXEBEFEWJMRZBDSYFZAUIZGYTMTTHWVSELMOQIPECHYGCASXQVNDPCHZHROJSDFXLSTUZKLGSEISRXAVBGKNDXMXCOZPXIRBUBVJAABXARQHTEDLAHIMYAQWSNVJDWTKEFPHWCF");
    msg.type = 169U;
    msg.access = 37U;

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
    msg.setTimeStamp(0.24566470866778944);
    msg.setSource(6619U);
    msg.setSourceEntity(194U);
    msg.setDestination(14117U);
    msg.setDestinationEntity(27U);
    msg.name.assign("GLAAEGKVWTOJCWYLXAZGYQRIWFNDIPQBZEODSZMAFZFMQUVLNHHXBZRCFJMXJWMDNKTIPVYPXJJDSQUUVQUWLBTLITSVKGPLKBUNBJEYHZLBDRQFPLMRXWCUWVBKQFRCHOIFOXHBGFAAAYKEGVUJOET");
    msg.value.assign("HRKQSOIZAO");
    msg.type = 217U;
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
    msg.setTimeStamp(0.8888029564990689);
    msg.setSource(64142U);
    msg.setSourceEntity(26U);
    msg.setDestination(51601U);
    msg.setDestinationEntity(212U);
    msg.cmd = 177U;
    msg.op = 197U;
    msg.plan_id.assign("QSWXFMVRPYBESWTPEZCDGGXLWDDNMJWKKWTHIBVFGJKNXRUFOHEUZJTFKGDSKUONWEZJRNCAPVBHSPMYOLCNQMNPLYCUQFQPZUALZJSJKASXLQBEJRMXOIBFAFLBPITUXTWCXHYFUPPVDKNMREANAERRYWHGXZWALHZOIOCTKTXBYNMZMCYDFQOJIGUQRDVMIXZZKDISYDVOGLIQROCHBRTLQSHUOANICVFEYQBLBSDGVGTIHATKSWE");
    msg.params.assign("SWFLVJMHCPEQZQOAOGVAMSLALZVMTMGMAUBIZNEYLIIROIYKOYTRQSGFROFTENOXWJHJINJZTRVCLCPULDBHCBPYHFCAGVCWNFCTSEXDLQOADXTODWNUDD");

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
    msg.setTimeStamp(0.42898893918795256);
    msg.setSource(44833U);
    msg.setSourceEntity(197U);
    msg.setDestination(61792U);
    msg.setDestinationEntity(100U);
    msg.cmd = 108U;
    msg.op = 12U;
    msg.plan_id.assign("MJTBWBZZAHQPRZMKFMBRFSDMXASNXPUSOTUOYIWVETKGHEMFCCAJKTOKDAWVVNSZTVWVQCFHBW");
    msg.params.assign("DKBEJFNFPPLJIJRMXMUPKYCPMEYLUIJBXWUIEOPAQTEZOVOADYKIJLIWMDQVMZLFSQDTHCXCQDFFYPQWBNAADYXQMTNDOXURVNTCWVZZBYKMNVFTSUHJYNEXTCSOXJPEHWRWKAFMQBZZTZGTVPOGMGSISQGSVNZNLUCGZBTGGCDILEPWXJGRCWOIYPABOSXRAJSXLNVEDDBHMSZAHHRIVWSOFQNLYLBRKBJHGKFAKYETRKG");

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
    msg.setTimeStamp(0.250144956407374);
    msg.setSource(36567U);
    msg.setSourceEntity(43U);
    msg.setDestination(30974U);
    msg.setDestinationEntity(175U);
    msg.cmd = 121U;
    msg.op = 13U;
    msg.plan_id.assign("YWUHIXRMXQCDAULOAYIEFHPIPVPHGEQIWTNHLOKNRUBHFUBKAGLERUXNICQKPVFCBSMOAMHWTMKNGTJYKLXRJSFJMBVZHQKZQMFXUOLZBWYPEXTYWYZTGJYZJRFQOMPQHZTOZBMDJVLWJABU");
    msg.params.assign("PVUDSMRRIJDZZSGYWEFUOTDAAKRPAWXDNESYQBQJPTIKNWPSJXEFAOJXGXSCOHXWBJJMPZXKGXLVRFMEERARSBHHGDCIUQNMHRJZHDMRWISIKFAFMHKIUFZPAQFTZLYITOTVKYWUWTMVSXYQYNANWSBTGHVFQYCGKTSNNHCXDAKGUZYJYCIIPBZTNXJLWANGQCLDVPFOOEMEOQHLQQBUE");

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
    msg.setTimeStamp(0.41466323064474253);
    msg.setSource(38642U);
    msg.setSourceEntity(115U);
    msg.setDestination(1751U);
    msg.setDestinationEntity(85U);
    msg.group_name.assign("CPFIWASQYWQJOQXSWLDZAQRDBTWSOUOUWSPXHRCOGSZFHDFQUUDJDXTLMEOAFEGCVRFTVYYFXRNMDVIYCVLRNGZCWPPTLZNBPHJKIXFEYG");
    msg.op = 25U;
    msg.lat = 0.9581783157517474;
    msg.lon = 0.24054925483880474;
    msg.height = 0.08413624215977233;
    msg.x = 0.7642568749753015;
    msg.y = 0.9975611839206012;
    msg.z = 0.5043176454658472;
    msg.phi = 0.49767225597956244;
    msg.theta = 0.2707172620275451;
    msg.psi = 0.4826699542650812;
    msg.vx = 0.388059307775962;
    msg.vy = 0.09071368824225468;
    msg.vz = 0.4773175299596366;
    msg.p = 0.6384259222631316;
    msg.q = 0.7218235936592746;
    msg.r = 0.04175884661843032;
    msg.svx = 0.21047576768999277;
    msg.svy = 0.8543180510420438;
    msg.svz = 0.29054743396326943;

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
    msg.setTimeStamp(0.12438271637588905);
    msg.setSource(21793U);
    msg.setSourceEntity(49U);
    msg.setDestination(36321U);
    msg.setDestinationEntity(35U);
    msg.group_name.assign("QHVDWMLGGVVXDPYYNKUWIDMBFCRLEAFPBWGBZCXADYNSDMYZLTTXUUNHERJUOQOWIQMJIDRHYQSMRMFCHZEUWPPWFQUTRAFMAOBKUNTKNEBAPZHALZZKLKLEFEQLWFQPFSCHCUXZRG");
    msg.op = 195U;
    msg.lat = 0.4602628784475419;
    msg.lon = 0.5989556309754437;
    msg.height = 0.31485718506432236;
    msg.x = 0.8921766958574804;
    msg.y = 0.6760822285695482;
    msg.z = 0.27214715701465786;
    msg.phi = 0.9011780413464114;
    msg.theta = 0.6333174024283431;
    msg.psi = 0.9354035882691414;
    msg.vx = 0.3874190767705403;
    msg.vy = 0.6610115129913082;
    msg.vz = 0.7155982454773331;
    msg.p = 0.20652609394021793;
    msg.q = 0.48621827419550523;
    msg.r = 0.30367324936610807;
    msg.svx = 0.5594632008069653;
    msg.svy = 0.9273784010183592;
    msg.svz = 0.27628465363835986;

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
    msg.setTimeStamp(0.5048903285930018);
    msg.setSource(37085U);
    msg.setSourceEntity(4U);
    msg.setDestination(42399U);
    msg.setDestinationEntity(29U);
    msg.group_name.assign("GQHNMDJNRVJBSOZHKBENRCEQGIWQZMNYQWFVBLAAXLULNDWXIMKUUSS");
    msg.op = 138U;
    msg.lat = 0.21827552366842073;
    msg.lon = 0.160134441762681;
    msg.height = 0.5584820169587037;
    msg.x = 0.0879836400961177;
    msg.y = 0.991363709134463;
    msg.z = 0.5545602750164579;
    msg.phi = 0.5300086234570586;
    msg.theta = 0.0409519040014279;
    msg.psi = 0.32099895002112866;
    msg.vx = 0.2368637656800685;
    msg.vy = 0.1702509586262937;
    msg.vz = 0.9235965196675957;
    msg.p = 0.7190620886897177;
    msg.q = 0.6251285476780426;
    msg.r = 0.07159176086380115;
    msg.svx = 0.5128967141483451;
    msg.svy = 0.6093744090460345;
    msg.svz = 0.7400807354019348;

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
    msg.setTimeStamp(0.0702143237340116);
    msg.setSource(30808U);
    msg.setSourceEntity(245U);
    msg.setDestination(50772U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("NQCFPMJCTSFPQJUBGFTYMPKXZEWQCEDYDEP");
    msg.type = 178U;
    msg.properties = 183U;
    msg.durations.assign("WBRFPACARYVFTSAMVPASXLTIMRZWLZKQCPWYLNVMKIJEBXPKENSXRUVQGFXBUMPCLCWYURRSUDFNRHWJGTUOWCOUEWLDNXDR");
    msg.distances.assign("CBJVTDRVBHCYCNSMUQTJPYRHEEDOEWBOEUFTQIRWFZYRKOXAXXPZZUYKFREHZJYVIMQZENXSWMWJNXJFSVESUDPOFHBRKWCKOOKPYVKIMTXYJYKXIEFAAHLQMOZI");
    msg.actions.assign("UXOCAWTZAYNUSOBLQBZXMRLWDRHGSNAZLHWTCFPXXPPKDVXYGEBIMJPGRXLJZWYCHUSLLSYMONWWLYHRHRDDCIKQGPAKTZRTWQHZDBZGMABBQCYKFYQCFFAOKVOGWHRIBODQSVXFEVNDIVHEIMVNSQSLSERTAGFMXPIWSJKIXRVVAGKMAGMJQDRBAFGCUVLNNUCDJYTEKTXUFWZU");
    msg.fuel.assign("UPVIPJLVBAFYBIJJDRHAVNXPDRIWDIOMTVOGFLOWIURNMEAJRFKSV");

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
    msg.setTimeStamp(0.2731847568281732);
    msg.setSource(48406U);
    msg.setSourceEntity(66U);
    msg.setDestination(62300U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("MNXWEUWYXNPPHRVAQMVCCVJOCAFYVIZFPBZSXAKBHPAKTYAQOCCISTRKER");
    msg.type = 100U;
    msg.properties = 81U;
    msg.durations.assign("SAOZKRCUJYGLLDTTZVLSFXXQFXTCOPOTFJIJZIAMWWFCIODOQQNWQIFUIZHCVWXOINCWMALDUMERYEDQMNFPZQGJPQSDLRURWBPMKQBGMEXKUDPHCGVMPUUPKRBQTIVWDYGKEJCCJXXUVDBDWJYMVGOQSAVYYNLILACHYYDBSJCELTTIXRFERZXLVEASYNNHWORZKGHOPBHFJMTSYUKEBPBGBFLAMAHSKIAGKNGNRHSX");
    msg.distances.assign("DIQYFCXNMAQMJKGPEPPOVRFTWEURMIENHSXGGJCNWEJITOQWSTIIEZDMNFZAVBSSOCBPVCNEFBUXRNGAOZSXFDKFAGWGUTMRXRUSYRIORLJWNZPATVDCKMPDDAOUMBBSW");
    msg.actions.assign("SCGBSPFRHBPHQMUXPYVJCFRENDVEJWTCZLWFLWYEFJOEGYXLQVGVBJZITBNKZWTMFBOAQGITASKEWLQHOWNTUGTNOIDFXQKNULAF");
    msg.fuel.assign("ZRBRNRFUASLBAPAJPDXVFIGKGOLOWOQWFGXAZTEUDSSP");

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
    msg.setTimeStamp(0.75731771612785);
    msg.setSource(6674U);
    msg.setSourceEntity(52U);
    msg.setDestination(48400U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("HKHNVKQXKCDVZHTGHISRCDLGT");
    msg.type = 238U;
    msg.properties = 133U;
    msg.durations.assign("JFYFJCERQQNNNKVEVXMRHSIEJQPLJVNKSUTYDMQIHFWOBWSVSSHWLNWVKCFHBUDWDEBCTHFIHMIRWDNYBUWKQGRYTGICPKEJHMFKJOOTKAESPLSRMPDUMSQVNGYZSOABWAZOOOZULBXORWSUAHGPCCGGQDBBYADUCKQRQFIVYI");
    msg.distances.assign("LYDMWZFMIUPCCRCNHRYSTODJOPUAPPSRFNQVWGQPCMIQITJTANSYKMFXCWPSYIWCKLMRXPGMEPMDREBZHOUNOVFAIZDDUVKRLTQRNDHJGVOXFLTDRWFNGJEHVZNQMGFEIVNKAKEYOCHGPRQLONWDGABQLCLGJCTTZVU");
    msg.actions.assign("MFLPBZKZHUMEUMILBRPPAOUWNGPCRSYRYJXFHNKNFTAULZGIJFKFRRTZSKDBWNCSTZOCJAQPCMNWVRNQGWYBMAZQKOBTVYETVEHOSCLOFCPGCEXXYHAMSEIQBBKIZTJDXIVVOZEDTOJYLYXRZDGHWDQOMOGEPPESXXQMIMYVIUFANDUSXSGDHHDHMTFIWDUFWBDUYCNJSVRUABLB");
    msg.fuel.assign("QQJYVGYQZRNDCVNIPPHAAZXQWOYAZKEJGROEYRDZXAQLYBKXIDYOYMUHEXCKBNHOPCBKXISLXMWTSCNCPFJOUNEAJVDMSTTGCTYPMAVQTBUEJNVLRIEUMLJQXSWLSSOXIRDQKAIBMPVEDRLNLMAWBSJTPFRNXSCNHEUBIWFCLVOTNXAGJVZKWJAZDZSWG");

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
    msg.setTimeStamp(0.8109519086198727);
    msg.setSource(10321U);
    msg.setSourceEntity(152U);
    msg.setDestination(11342U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.8448050577649997;
    msg.lon = 0.4916884197651036;
    msg.depth = 0.5977351873935982;
    msg.roll = 0.7584349148665271;
    msg.pitch = 0.25835226816587753;
    msg.yaw = 0.4706500689140497;
    msg.rcp_time = 0.3774958055518375;
    msg.sid.assign("ELWRNTWXDGUQSZDKOXEHRKPJO");
    msg.s_type = 9U;

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
    msg.setTimeStamp(0.48899513202330935);
    msg.setSource(32074U);
    msg.setSourceEntity(33U);
    msg.setDestination(64960U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.11073209212483726;
    msg.lon = 0.9120297528450204;
    msg.depth = 0.8036392380761265;
    msg.roll = 0.9041445433939036;
    msg.pitch = 0.4029002560791928;
    msg.yaw = 0.07424372809279833;
    msg.rcp_time = 0.7247767370804794;
    msg.sid.assign("EYISUQMDZTDQOWWTXBWUVNKSRXYWXWUTDEWIGBMCJFZMKOYPDJGCKAXFSQSHQMDUEFFGFJIOJCZCSZSVOVCARTMRHTKWIMCIBIVNPEGODHGBLPABOVGKLCALKFQWYUXAMKEMCDUPUTELJRLONUGROYLBKUHZXIKPLQNWUNIPTVNXKJBLZLZPHQPRHFXPZNEXTAYYMYSCTVCH");
    msg.s_type = 29U;

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
    msg.setTimeStamp(0.7440155344794134);
    msg.setSource(13656U);
    msg.setSourceEntity(176U);
    msg.setDestination(11091U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.44124787710888724;
    msg.lon = 0.40844488788420974;
    msg.depth = 0.04471637972691678;
    msg.roll = 0.6007841596674361;
    msg.pitch = 0.28838963963225783;
    msg.yaw = 0.3285777704437104;
    msg.rcp_time = 0.9083383709062516;
    msg.sid.assign("TGDVPJQBTOBTYFCIXXMPQMSAZSGFBMVCYXIGQQKKZMLPOYRJDHMAAGWZGJWDNWTRNKARZLYXTKKDUAWWCFBXHPSUALQWGIQGDCFAXBPXIVBDRJCLJDEUPBLJJWTXWUTIUINZKXOSOSLHTAEVBMRFFEUOMEUHAWYOCKEGBMJKBTGNWVJZFPQUKESHZHPEMVVLKQDVSSMFCDEUYHFRCTNQHVZELLLYINEUNROOPHYNN");
    msg.s_type = 4U;

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
    msg.setTimeStamp(0.767052011642363);
    msg.setSource(26035U);
    msg.setSourceEntity(49U);
    msg.setDestination(41666U);
    msg.setDestinationEntity(51U);
    msg.id.assign("CKEEACBEXGNWJJWUFBOSSOELTQIZQIEJWWCFNXVGFIELPQNHFKSEKPAATKOJCXQRMKVGSVKDGYPJGQGBYWGYSPFTDQOHDQUPLTDMNFKBWTWPKIZAQFPLKMLVLHVXNWRZAKDXXLQAXSJREUOCTMSJDEBDHCIPCRULYNITVHEASAZYRHFTBCVSBFMLMMGY");
    msg.sensor_class.assign("BCYVJDONOEOCNUGMSPGSOJYNCFNGWFPSQTJZXLVWHUGMMQQXLOVZWSZEYGNRLFUZDJTFZTZDPISPXNJNEXOCLUAWJIWMUGEPLGKEVVAL");
    msg.lat = 0.9291900730742968;
    msg.lon = 0.07418574473893369;
    msg.alt = 0.8721260846537434;
    msg.heading = 0.7508108846456684;
    msg.data.assign("KZSLFUKOMLLBJFMUOAACNHYEFQQFZCENKLRJWKPCTEZXHTGQEOCASUPWQKWDGZZDTGYGNNMPBNHKEDTFQBXWVQHYZRCPLQVIZFNWJ");

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
    msg.setTimeStamp(0.8613694602986757);
    msg.setSource(24932U);
    msg.setSourceEntity(130U);
    msg.setDestination(53918U);
    msg.setDestinationEntity(74U);
    msg.id.assign("VBCUVZEUOXKRFZOFVXSHKXMBJCVLURMGBZMBTZNEJYFHEJAWJMINNAPWUOUJFFSEQEKSPWAEAQKGWZUFGJGEQVMXMQSEBYHVTTOOCNONRWXCLXVCNIDMGDGIX");
    msg.sensor_class.assign("CGFIHACIKAJEKUZYJHLEKWRQGXVJRRATYNQEQMZFUOWXOXGYYBULHYQZXUIOFJGZERZJMVXN");
    msg.lat = 0.007690644202630437;
    msg.lon = 0.6271058406876773;
    msg.alt = 0.6159152388275123;
    msg.heading = 0.8977888340514417;
    msg.data.assign("LPNFXSQUXAFCCAKKPUYNOAOSZJXDEIZDFUBRXQXBVVYRMHWCCBUQKVNNLRC");

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
    msg.setTimeStamp(0.740798403581563);
    msg.setSource(26733U);
    msg.setSourceEntity(100U);
    msg.setDestination(18041U);
    msg.setDestinationEntity(65U);
    msg.id.assign("DEDHFQQLDFSWPTNXWYJBLHOFJUUZEKWXGCNUQPFRKFEYZEIIMUGLPKOMYKVIAEEYTZRSJTKFKGTIJXSXXCRFDCJVPYXWLGQCYMTDBMAZNQIIJWGHGRZKVTXUZAPOSCYAVBPTOAAVKHIVHRQPRUHPHOEGJXVEOOOQAXHNONAVDZJSDL");
    msg.sensor_class.assign("KTIAUIUHFQSPSCXH");
    msg.lat = 0.909976352768291;
    msg.lon = 0.3581688442064451;
    msg.alt = 0.022442975978993474;
    msg.heading = 0.8954367595357224;
    msg.data.assign("JEOEGGAYXZUUBTCGASKHXFHBJMTLBDZPLJG");

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
    msg.setTimeStamp(0.9241059780053534);
    msg.setSource(195U);
    msg.setSourceEntity(44U);
    msg.setDestination(4209U);
    msg.setDestinationEntity(158U);
    msg.id.assign("JRISIVXKFMVETAGBXYTEWXOKZDKVLAHBLWRYNMHKZOCVVLURNI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SUZDBNAIEYLXAXWPGULXBNYQBFPRUZKFEQTDFDYSTUOJFIOOWZSMOOHCKUKZXSTPIOEFASFIQCQT");
    tmp_msg_0.feature_type = 51U;
    tmp_msg_0.rgb_red = 51U;
    tmp_msg_0.rgb_green = 163U;
    tmp_msg_0.rgb_blue = 130U;
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
    msg.setTimeStamp(0.6633578802560589);
    msg.setSource(20295U);
    msg.setSourceEntity(107U);
    msg.setDestination(63322U);
    msg.setDestinationEntity(159U);
    msg.id.assign("RCKYXZBLKALGWNRKBHRSFNWFYHLUGUADOXBSQTFQAGYVBKELLENCTUMRYPHPXPYMWXLFHKRVVOQDUFTTDIVNCALMEAUTIOOHWBSGLZYEAKTNBDOQUSRHXWJWSPNLUSCKXMQOXVISZNVNWUZZQIGHOGYFWSDEHMADDMXMGJMBRTJBQDCXOKSTUIEWABJYWVICIUFEICH");

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
    msg.setTimeStamp(0.765358974610666);
    msg.setSource(43867U);
    msg.setSourceEntity(211U);
    msg.setDestination(36628U);
    msg.setDestinationEntity(179U);
    msg.id.assign("XWBJNTDPXRYFZZPFZGWDTUSJALHSXKTRFNTGOKBPARLFGJZDLBVVSMMPMEHDZCUDVMYETLCHXFGECFXPLYHIOCNFNAPVUHFVCIRI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OIYVWYTTLLJPKXXSEYXPYMAOJXQSUKJLWIHMNDOMQADGOVQYPYDZIAMQFXZJOFIOEVHIBVSTJYZOCGBNUZAFTYNEEQRFWNCXRICIBVDHHJVKCRRNRGJIZMRULPXHGKEAKTBXVSFEWAKMXDBLMMACHCCMLSGPRYGBGLCEVOZSWSDVUNLTBLJNDZUUONDQQTPQBJNWGHBLPEUURXKSAUFKQPTJIZMWFGRPZEFYFTSKDCTQCWASGW");
    tmp_msg_0.feature_type = 49U;
    tmp_msg_0.rgb_red = 154U;
    tmp_msg_0.rgb_green = 178U;
    tmp_msg_0.rgb_blue = 253U;
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
    msg.setTimeStamp(0.19701463516858675);
    msg.setSource(27502U);
    msg.setSourceEntity(215U);
    msg.setDestination(1563U);
    msg.setDestinationEntity(3U);
    msg.id.assign("VVQSZIHIOGDVLRXTYDADWSFVTKKGXWMHNHYDQOSYOVOZKPYPYDGXPFJUODZQUDACSYMQJCQBHQCAONENWAJWBEWSZTIEXVRMTBZEJYLEMDNRHIUDTU");
    msg.feature_type = 219U;
    msg.rgb_red = 211U;
    msg.rgb_green = 235U;
    msg.rgb_blue = 119U;

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
    msg.setTimeStamp(0.49279671726827834);
    msg.setSource(34154U);
    msg.setSourceEntity(71U);
    msg.setDestination(20754U);
    msg.setDestinationEntity(36U);
    msg.id.assign("GOJUIPWMJERYEFDPISGNEQVREYIPTTZYEIOLYYVHWUCQTZYLAUZJOKOXRMBRFMJLVTXBSSJWHAXNRKBPRQLSNAKUMUOOSXCFWNADUZPGGZB");
    msg.feature_type = 219U;
    msg.rgb_red = 178U;
    msg.rgb_green = 9U;
    msg.rgb_blue = 213U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7254353676592527;
    tmp_msg_0.lon = 0.09753684278219643;
    tmp_msg_0.alt = 0.40160404759081614;
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
    msg.setTimeStamp(0.4131862139405137);
    msg.setSource(59833U);
    msg.setSourceEntity(5U);
    msg.setDestination(62993U);
    msg.setDestinationEntity(223U);
    msg.id.assign("CRQLBZLVYDTQJKPFGBPKZQNNWUOZXDAHLZPDWXIPDSHJKEWVOJMBHARJPIBNFTDXLQYYBENMUEWSMTZ");
    msg.feature_type = 173U;
    msg.rgb_red = 231U;
    msg.rgb_green = 203U;
    msg.rgb_blue = 230U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0223414476835313;
    tmp_msg_0.lon = 0.017449835975206995;
    tmp_msg_0.alt = 0.69331200126713;
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
    msg.setTimeStamp(0.4410914023418838);
    msg.setSource(6085U);
    msg.setSourceEntity(0U);
    msg.setDestination(27252U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.7118888091264755;
    msg.lon = 0.741263107870272;
    msg.alt = 0.012246458592795162;

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
    msg.setTimeStamp(0.527922549582144);
    msg.setSource(63316U);
    msg.setSourceEntity(190U);
    msg.setDestination(18628U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.9373242169186065;
    msg.lon = 0.5527940980005005;
    msg.alt = 0.9060363045551507;

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
    msg.setTimeStamp(0.5060996837174534);
    msg.setSource(59178U);
    msg.setSourceEntity(94U);
    msg.setDestination(46264U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.7978469878911875;
    msg.lon = 0.9751114409118457;
    msg.alt = 0.41542104879202146;

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
    msg.setTimeStamp(0.7429037267228051);
    msg.setSource(20261U);
    msg.setSourceEntity(69U);
    msg.setDestination(36434U);
    msg.setDestinationEntity(219U);
    msg.type = 235U;
    msg.id.assign("UDWWZYMFNNHGPECEBAPYQBWCJUPZHGQERFAXCZXBRTOGFEKKHM");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 72U;
    tmp_msg_0.reason = 42U;
    tmp_msg_0.value = 0.5314909961216958;
    tmp_msg_0.timestep = 0.19258154000092131;
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
    msg.setTimeStamp(0.992066663115233);
    msg.setSource(18086U);
    msg.setSourceEntity(104U);
    msg.setDestination(38919U);
    msg.setDestinationEntity(155U);
    msg.type = 178U;
    msg.id.assign("OQKXRIKLROPVYNTLFQMGOXCBNCZDXEJNMLPUSCGLBOYXHOWRFSCOZJEMMBCKBHPWBZAJYCNITBBHIPSGPTDVSILVNEFFGKQENIWWRHWTLUPLDRUWQJQIVFJMELAUSLTAYAVWVYUPISEGEZNJAOEVFXTSHDTDJUQEHOMYKSXYZABTGDYYXHQRMEWJCFTXLHJR");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 49U;
    tmp_msg_0.angle = 0.9445971298659068;
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
    msg.setTimeStamp(0.05269756576347384);
    msg.setSource(38768U);
    msg.setSourceEntity(147U);
    msg.setDestination(51091U);
    msg.setDestinationEntity(203U);
    msg.type = 128U;
    msg.id.assign("RYMKFSRWLBIVHWZJXLFQSUBPBQMIINOJJGGHNCWODTIRJWPXQLPVBXFKPNLMZARSYTHFTWAEVZMATUSGKDDFYEUORUENJUVNUEZKSPEAATYPGTKKRGMZNATXYNDYPQVGIJQZVVQXLLEEGFWVTASLWNBQLPDAQCXBYTFEMUJQDMOZZOIIBZCTA");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4740643829458465;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 46691U;
    tmp_msg_0.custom.assign("NSCVQVBVNWUFBQHPPZMCKSIJNRFTORVABYXFPXWVYUWWVQZDWEKFCRLWBELPYRVZXZHYQUEOFHEEYVZSBLVMUSDBTMCRGGHJXBHSDYAZFMTALKWCCEASFMNJQCHLDIKBGOKUGAAPIRNDQZCHISXSDAILHFDOQUCRKSEIKPOTXPKAMDEQYFNEGTOKLEWDZCLTMXWGTBONJTGOJBPMXNJALZAUFIXIGPDRHZISLYUNUHWMP");
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
    msg.setTimeStamp(0.7153335388246773);
    msg.setSource(20649U);
    msg.setSourceEntity(212U);
    msg.setDestination(54076U);
    msg.setDestinationEntity(252U);
    msg.localname.assign("XYPUEQILZVYRMLVHXZURUSSQSWYMHFQAQWHKMBKLTCTZDJGKMRGORXCUFDYEIHSXSDF");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TRVKJQPSGNSLZLJUBAOPWZCKPADHQFHGBEEVGJBYCETFZXMHIJBPNCZCPBWATWPDHEQNQLQKLCXOWUJMJZUFBQVFVHTCDNLMRAZOSUKYKDREGIRJXNGNITEMWEGFIMSNHWWNDJQOTGIGXTKSRYPSBVXXADCUHFIWYWIZNRPLJTOKRALVGOOMRVOZYLIJQQMYYAXXXFSGMVUBUHDPDHYHXMRPLFDIKKOCRFOAEYLVEUVTIMAWUBEZDZF");
    tmp_msg_0.sys_type = 16U;
    tmp_msg_0.owner = 37455U;
    tmp_msg_0.lat = 0.7191509612167498;
    tmp_msg_0.lon = 0.5335917412790784;
    tmp_msg_0.height = 0.7030034362931163;
    tmp_msg_0.services.assign("EDQNHVSNXUTICXGEEMHDDYUSXLUWMIIGDCZMKFXUSRUSIEQCPFLANFTCLZFZFKGOAGKRMBELARHFAFBVYVJKHWTYVWZYPASUVCXBDUYTAOERXZPTNELQTAEOVQRFNAJFDWKAYNWQJRDYMXBHHHPPJCRGVQPKIRONSPYBGMRIUGITOCJWEFLVOBVUMZTHKSQSXWWBABIXOO");
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
    msg.setTimeStamp(0.17037642418103005);
    msg.setSource(6972U);
    msg.setSourceEntity(55U);
    msg.setDestination(14368U);
    msg.setDestinationEntity(84U);
    msg.localname.assign("UPVAYBDXZZODRINIUKUHIBFVWSONBTHWJTHFXDGQXEELBREUGSLKZBJKTRVJMSJFCMRFUKTZYUHANOCZTUWVCPXPVFSLAMXBOAPIDGPUBTOUSNDQGSGNRMWJJQVQZOEJYXQWSMXFZDAMTJDAOCQAHPJOAIYPLWNYGIEWGJFLGLEDISL");

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
    msg.setTimeStamp(0.9678853422134289);
    msg.setSource(32021U);
    msg.setSourceEntity(145U);
    msg.setDestination(25232U);
    msg.setDestinationEntity(27U);
    msg.localname.assign("BNCWFATPXPUMOJWCCRZYJRPRZWPGBKKMEQBOXDKXZV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BTACXJTQVZBMOOBRQLAFMDXMSSVVMMUGVCBIMHEKGPKEGZCEBDQOBAJZNNWISEPSQZKTDUHTPWXGLXFOXXYPRRKEKGYQRGUUAHYBNJZ");
    tmp_msg_0.sys_type = 147U;
    tmp_msg_0.owner = 46055U;
    tmp_msg_0.lat = 0.10004667052865435;
    tmp_msg_0.lon = 0.06526784867923063;
    tmp_msg_0.height = 0.09635616316358464;
    tmp_msg_0.services.assign("QVZQFDDSIHRXMMSGMIMNHEDNRNF");
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
    msg.setTimeStamp(0.7252456231371145);
    msg.setSource(35880U);
    msg.setSourceEntity(10U);
    msg.setDestination(669U);
    msg.setDestinationEntity(143U);
    msg.timeline.assign("QIOXWXMHMJZEBPYCSIVSAUPJHBEQYJPRNVZVSATEYWPGUKNOAWONJXZRTICJKIXHJHIBHNVHQKMXGROZRPIKFCENLBIEDUXJCKCOFYDFSLWUMNGKXAGDTGGJRYUKLOEVLLIXDDFFAWCZHTMGTLUSMZTOSDCQAATFWQGKVRPNQRYZQRFHRKYNVVAEHDJFAVAGBUECMOWROWMFMETIUSZDQLZLK");
    msg.predicate.assign("ZUADWQWBEHZIGKVHJBXEJESACUPQKSOODZWKIEHLESJURCPVXZEMZALKARQDKIWBWSTP");
    msg.attributes.assign("KOEQIEPUXKVYLUHJJSBBMCRLWMMOZTFHNQRODFTFCUNNRFHAINROVUWXWZLZNEGBFOTVMTMFUXRWZFEBZENLGSPXTGECJEOYVIHMPRSJMMSBQLPWEKXBFVRDDRJAHGDBUCIHOUBLIAYVWJCHEHRQAAKYGFYBITKUNUSYJNPCWIQMIGSPSICDTJYESTNIPPKXVYKHAAQDVCQXPACWXJDUXZYQMOLZBHQXFKWO");

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
    msg.setTimeStamp(0.8229768533166378);
    msg.setSource(19480U);
    msg.setSourceEntity(48U);
    msg.setDestination(7350U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("IWGNDXHLVZAJVUUPTPXYOEEFDAOOTWEWWXRHWQQUVCCNTTNAAIFIPQDAYOXCWYSXHSPESDHFWOLICJINATKNRJOJYFMZRPQYKCTZLMMARBBGYOVVXMMFVHEFGBQJUEPCQMGYXCDEZOLDBIHZNSYJJJRSEDBVPJHRLWVCPQG");
    msg.predicate.assign("KYMUSANLBMTQWNCIHIROZLQEQBYVQVEGFGCGOLLCJZKEMWYVQCKVFAFCJCWFYNSDKFSSXNJKYUOVIETAYFNLGRKFWATHTJPDTDUCUBWWSLMWZMTMXUIXDGXRWAZDOJKDIUXQROGCOPHIEIEJIVFLCRKZQJHVQFVXBOMA");
    msg.attributes.assign("SGWZBVHMHPDPQTXANFKJGRJLINCVTZZEUECTKDHJSMESFOQZMQXJCYWZYIFWOQPVUMYBTRPLOQOLOGGTXKYGQXVEKXTVJHCCMWUWPNSABFUBCROYZGSXDZPCTKAZHUZFIFNSIDBRJYNSDNVFLHRWEUIBKZTDHVQQ");

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
    msg.setTimeStamp(0.16496755016651898);
    msg.setSource(16709U);
    msg.setSourceEntity(16U);
    msg.setDestination(11601U);
    msg.setDestinationEntity(109U);
    msg.timeline.assign("BWEIQLTFJQNJROTGAI");
    msg.predicate.assign("MBWUNRFVKKIGCXMJXMYFGPQPBERBMLNZJDGPTHSZDEIOYUAPKHAWXBKHV");
    msg.attributes.assign("KVMGJJZHNHRIBZDWDEPXLGXVNNYDTOCZVKVCXUUBMRWHEFVSIMQPRHNWFSQCPHBKFFTZEBURQSNRQFWIPYLHJNWEGYRIEEGTZOEXCNQLYDMIHLEVWDALPHBUXWGOFDGWXJMQYITSUYLKJLUGZSCUONSBD");

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
    msg.setTimeStamp(0.3108214894220708);
    msg.setSource(26420U);
    msg.setSourceEntity(104U);
    msg.setDestination(33998U);
    msg.setDestinationEntity(184U);
    msg.command = 64U;
    msg.goal_id.assign("DXLVVURDEUWTJFYEIWREASZQKETZWDZPNGXCMUNROCGQPRSAKKAHPXKNOHCKIGCYHRNUYLBZVGTYXSPJXATZAFBQZUTAFVXCPINDLJTQFWCMOVRDMASVLKQKNLOVAFVBEIWGMHWQYJTJCFJRQDHDBXLWDIEVGTNEHIZTCONKYGKLSMSPQOCZEIMLRGBUSPJYYMHXUSFYSJOT");
    msg.goal_xml.assign("CDQEZEWWBLMAYIJSWJHSWUBJFGXKVTNIQPLDMQFHERYPMNQABLRODSBNHXKBTAZHPCRIISFPXWCGOGZUIZJVXOCYLUVUPHADFJOJWADNMKWMZMISZUXFZCEHEJKXLODBPGTIAKVSVGLNYZGCASYPIRXIDUQUOUVTHDH");

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
    msg.setTimeStamp(0.5199861672264028);
    msg.setSource(5607U);
    msg.setSourceEntity(15U);
    msg.setDestination(63051U);
    msg.setDestinationEntity(38U);
    msg.command = 37U;
    msg.goal_id.assign("VHYFLKWPIDDESYKOKZZYFBZDIVARRAGUWUORGXXYAWBGGFMQYUPPDBTKFKMCICLZRIHXTTHRUFSCFQZMZARQVACYLXJBQTAOVBVJEXLCMAREUWHUNJOCDMJPWODDTZGYQCFLPCTUPNAENLRWJIRMMOXSTSRTEGYJNGOUIPMFQBSKGBGKNHFCWPQEAPQZIVSUHTWAMKZXFPVWD");
    msg.goal_xml.assign("XVVGHDJTFHXAMGSOADXBCGYJJJASDAVQM");

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
    msg.setTimeStamp(0.532567821793678);
    msg.setSource(21301U);
    msg.setSourceEntity(186U);
    msg.setDestination(11429U);
    msg.setDestinationEntity(53U);
    msg.command = 186U;
    msg.goal_id.assign("SZHLQSWJHEUMLTSAOROWDEHCRFIGMLXACDOQZX");
    msg.goal_xml.assign("FYQDTJBAZCULIRCWMHBJGDREMILOMICHZFVHRFFXKIZGXKKIYGKUXHDJCUPEYWOPWFMBDFLKENIAKRLWIJPBJNVANSSIGNMUZCEDKKH");

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
    msg.setTimeStamp(0.16331302300994088);
    msg.setSource(61640U);
    msg.setSourceEntity(158U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(62U);
    msg.op = 40U;
    msg.goal_id.assign("NCEPOLWBXDIIREBIQFBRZEAAUJLMXYMIVVW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BHBCBKSJEKSVBTLCNRDFLYUVTDEKKJGQCQIPJDLIHFAIKPYDZEBZEISYHLXTFNUAAMMSWTLHSXXOREFVYAMIAJERPPPXQRRVTNHJJFZKWMHJXCSZRQCTWNNVIFUVMHBGWFUDKZAW");
    tmp_msg_0.predicate.assign("KKJCLWTPKLQZUWNVDPYGIIJAUWJEJBJZXCNZKTDYXXUQONRIYFRQQSAZHEBOTYVGOACQXSNGQVBSAPLFBFSUGNFODRVMDXY");
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
    msg.setTimeStamp(0.06924905643131607);
    msg.setSource(17255U);
    msg.setSourceEntity(4U);
    msg.setDestination(63391U);
    msg.setDestinationEntity(131U);
    msg.op = 216U;
    msg.goal_id.assign("UIHGZTBDPODDEWHUCQTOUIKCJOSBCABLVMHIKDJAMLZDJXMPCXCORLKRAAIPRWAUXLKOLQAETOVXQHLQASMFOFQVKBHXMUMLMRNTGAOWSTFS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KOSFVNUZTUOQGNJZRLFZDVSJADVLUYDBCJCDPQTXZMPSGCXPKOICJMJ");
    tmp_msg_0.predicate.assign("VPSESHYCJUGZYXGBLTBTVHGEFYSIDEDWCCOJSNDYKUOTMRPSPUUOVBTFAPGWNYHOLDJZICFMOIRZLYJUHMJXPLXNQVYNDVQIGZOSLRTELWXUDTFCWPLKJMKAQVGYSAQKRXBW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EPFGDUFMUCJKCRQYHDOHXIVSFHIHBWHTKNDZGYZDEZZOBDZSMEGFTYULHQXXLTGEQJKEWSACXANVQEFAGLRYBYVRAASS");
    tmp_tmp_msg_0_0.attr_type = 31U;
    tmp_tmp_msg_0_0.min.assign("SVFALPUQGRZRMQ");
    tmp_tmp_msg_0_0.max.assign("HSLQNFCZBOIOTGUTKDPGJURCOVXGDQEBWWEJJFCARTNJZDYGZMQTPMWRXFTKTIOIWJMJNEZITHIZZDOCRKMDVFXWDLCVTCZEAQYYPILSLUHRTIKKBAKVSYWHQJUQHYKUUEPSSLMYNWRMFZPVSBGHVLFVXRGPMGUGQFDZWNBSLCMAOBXISLYRFIYEUPOQDEXXINXXQARKOMPHFBQSAFPBDMJ");
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
    msg.setTimeStamp(0.0935939854421235);
    msg.setSource(37459U);
    msg.setSourceEntity(22U);
    msg.setDestination(43819U);
    msg.setDestinationEntity(226U);
    msg.op = 191U;
    msg.goal_id.assign("OBSLCHGHFKQDIAUKEXKCFSYULLYP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HORWXXDKTUZUHIENMFVNHSPCOEIYZDITBLVASRYAKNDFEZPKPCBIWVUQHLVQKNNTQGWYYGANIUYCVHXMTJWBDBKAOOOJSLRQMJTFZQMKZFYXFKPDOPVEOEGUJSJJWFRXHMITJPUPBISYPTHUBGWWLFZMDLSWAISQYDYCEKVZGDARULUVXBETFRONNQPKKFXVECHSGIWZAARCOWSXNECRYDLJAVDUMFRSGGNQOTHLXJPBAZQQBECI");
    tmp_msg_0.predicate.assign("JITOYXUTMLISGVZSRRABSGAFWGRRTFMEWDCSEPKAXPGPODUATKYGXZDMSKYZCHMZOEVKGPMQUSOPVHWNSUYUINABJBLVSUVPWFBNIIGMNHXZYUQARRLVYOTXZEMRN");
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
    msg.setTimeStamp(0.09922979252793784);
    msg.setSource(12948U);
    msg.setSourceEntity(123U);
    msg.setDestination(16737U);
    msg.setDestinationEntity(32U);
    msg.name.assign("KCQSWWQKELLPKRLFASNRTCXBNNKYVFDRNXTETAHDYZTSVCSHTEYRSXLSVVHSKFOWPPNMJZZWRAGWJEDUJUNJQWROTIFBZVM");
    msg.attr_type = 197U;
    msg.min.assign("VNXAWAKVAGESEILLSWCEDCRMUELGNJBFIHLUZRTOPCCWWXADDTUJQMYYUGYTRBQBNVSKLBFCJZRROFQIFCNZXZXWORTIORXGHGHQFIJHUDWZTPBXYKJVSKVUQHJDWQKMZFUNJHYEVBBVAYAOVNCZTWSDKMPKUQOGYYKYLIEXRETXOAHPSGTPIQPMKGFCXXIMCAOFMVPULHABSMHBDGQOJUDWJPITYATSMPFLNSRDEFGLWRZHKPE");
    msg.max.assign("BPZRPGDPHPVHUGCAASIJRRHATAFMHDUKTYRONBBNHDXUPBREVXLONDFVVHLVSYSZTEXVYMLJ");

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
    msg.setTimeStamp(0.03003101013277021);
    msg.setSource(2502U);
    msg.setSourceEntity(154U);
    msg.setDestination(26088U);
    msg.setDestinationEntity(189U);
    msg.name.assign("KKWGNMJEPCGAIIRYIMUUWZELHNYOOVYLBFSZCCTJRCSCQQFNXTGTWBTINGUXWWTLXBRIVOQAPJZOIOHXBZKEMAPQHEOXZPATSRRZYRQMZFSXWXAQVGXWJYBJIIMFUUPFLCPDVZBJQXSMKYGADVCDESEBQOGLTQIENZLYGDBMHSTFPVEWVYMFQNUWKUJJHAHPOFDFDKHCYOPNVUKVLTKBNARKHCGAHEOULNSSWVINDGJUMFLARSYZXP");
    msg.attr_type = 41U;
    msg.min.assign("XETSUJQYBJQOUZFZXAWMFQBPYVHAIWYYBFCGTNAVZEKRODLDDYBCKPFKRKZMHGGIIEPDJMYRBARUMHXJISQMZPCKVVWELXEXNVBCNNGXHJAOUJOBHTTZMOOLKOIKVUQYPDQYUGREALVCSYIFZIKZWXCDETUF");
    msg.max.assign("ZCRFJKLSUYSDKTOYOQEMJGDFSLEAUEUIELGNZGFCSMNGOQHEPDNAMSTIKVNFOWXAWWYEXX");

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
    msg.setTimeStamp(0.30100234590329);
    msg.setSource(53476U);
    msg.setSourceEntity(81U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(153U);
    msg.name.assign("JUBGHZPBHPWPJKPRBYKRDRSBOKQGPQRLVFGSMZFORTMWMXGAXM");
    msg.attr_type = 71U;
    msg.min.assign("NJNZBWEIYFQIKVKTQZLFCRRHKWJPWKVJSNLDM");
    msg.max.assign("ZPNGRBZKFUHRMFAMGJHQXJURUIUAMCUCGEFVAAKXEEYGZHLFJWRIPFNKLDZCDASDAKTOKIEVRNNLXNJKYGNHDTGROYFILOXBQUIEUPXMKXXKEUGMMMMXBPTPTYJWCZVCVIBLTRRSBDSYBEWDOBRYLETCPYJVFXQFANHDVWIGCQWVBLSZAIOPYJSPEHNUQHWWVCTYQSLTQMIOSZSNBWYOJTPCDONHBKTMQJLIGHSZFQULZDCDHEXOOAPZQVVWW");

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
    msg.setTimeStamp(0.16084835811448606);
    msg.setSource(59864U);
    msg.setSourceEntity(104U);
    msg.setDestination(26681U);
    msg.setDestinationEntity(47U);
    msg.timeline.assign("UCPIHKNGZJGECLWZVLUJVHSBFVASBTPTSLKZQAKCTHENOUNSRIKWMUMJLGIABPDCIQQRIYEEZEWECNBQCPIJBRPROXMDLDNHRFM");
    msg.predicate.assign("OHHYSMFUDHHRWPZKNMNLVJSFWQENKISWIHPITKLUJSFWQZCTTONIZVZFBBXNDGRAHUKONSRQWBVPOEMKEYMTANUIXFBPXYUMBGJDUIVEXQBJVFRSCBL");

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
    msg.setTimeStamp(0.24769959252762308);
    msg.setSource(37954U);
    msg.setSourceEntity(96U);
    msg.setDestination(55464U);
    msg.setDestinationEntity(117U);
    msg.timeline.assign("AOOFRINNYRMZDMGHPBZHVYUFYFAZVKBATWJVPVVXMRZXTRXKEIBIZPZFELCLNOXJKXFDKUOAGZRJBCVJNOBYSEUSSYLCUTWALICHTNINMDBADIJFIKFWTEWKOAQIWLER");
    msg.predicate.assign("BSKXZJVHBTGSMBHTMVRXQYAWJSTFSQYGVI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("NHWSMTEJVCGXMQODNPTUJZAYKYOLBFZIWOFJPBVRUYKVINQCEDMDSBAZIVFEEVOAVQNNGEKQNSBQMUNXCOZSCHDHLRGUIOUKWYVWZLQDQGMPWJGTGPFRHKBITXFZPDTHJQRLMMKYDTZQLAJBFZBBAGXCBEEELYHLIFTWXOBARTYERPZRCWHWPUNYDUVVXTDHIUPMXAGPIOIOXFNAUSFGMRSHLERKVWPSK");
    tmp_msg_0.attr_type = 44U;
    tmp_msg_0.min.assign("GJHKMNMHNNFAJDULXNWOPIGNZWMZQZX");
    tmp_msg_0.max.assign("IOYLAIUXDCNGDFUTCYKIBKFDOOWVTKRUBXIWXRUFAJJPLWDJGXNSLJHGEVSEZPGDEVZGGPTAFCVABSYTIQP");
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
    msg.setTimeStamp(0.009660108285023727);
    msg.setSource(18274U);
    msg.setSourceEntity(42U);
    msg.setDestination(47245U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("TLXBVEZIOLDESOTMVAICTZDJYWOXBIRFSXLSIGKYGUVFCVNTKCQFUJBXXFJHWOAPPRAUZVOPVWRXCPDT");
    msg.predicate.assign("MABLDIKXTGUZJTVHHSDZWLDXOCZOASVCQXCBEPHPVXAKEKAYXWYUDTFKWEUGAELJEZXNWYKUBFHRVWUVMLAKYVHGNUYDLNYJMJZMXJDLJIZTXROKFLCNEFRHAGBOLONFDMCJGRXQKNBRIUAGSFFQSRSBIXHFWKWPTGYRTIVREMZBQPJVGZQTRRHASCGDLNCSZPPNIQUGOHCDQPPQYWFMOVO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("DMXZNGTZJQGJQLSWVEUSBAJPYZELKRNVYNEHFKDXIPFLVZHSAOAAUZ");
    tmp_msg_0.attr_type = 122U;
    tmp_msg_0.min.assign("AZRWCBYGIGMFHHJFYUFEERNBOFUDFJLUVPQWDCMBYSRXZSXHJGWFYDKEZJBPAINKIAQCVTCLUUZTOZN");
    tmp_msg_0.max.assign("SYVFWRTZCLHNNGSMLRSVEBRSEDNLDMFMRNQWZQWVOICHZVAARCDQKWDHPOWLDUBYGRBVOEGTPZWCHXIECJIFKPVZFXIJIKRPOQLHFXVJOAWGQUDIWZMADTKHQJFEFYKLCUNSSZKTJG");
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
    msg.setTimeStamp(0.37337315736403764);
    msg.setSource(62457U);
    msg.setSourceEntity(11U);
    msg.setDestination(33865U);
    msg.setDestinationEntity(119U);
    msg.reactor.assign("SGUPFDUQQGQHCJXIUJQAZFKXWKZIGAWCASJAYAIWSUMCZUOEUEZXCYEQWDCJAWTRZGHHALGHIZNJWIOOTKHBPBNMPSHRFDIMPLVOVTMKOLKSVEXVEFFCXKUQOUMQUNJKRDLSNCZORD");

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
    msg.setTimeStamp(0.5660254863663888);
    msg.setSource(19512U);
    msg.setSourceEntity(36U);
    msg.setDestination(10198U);
    msg.setDestinationEntity(229U);
    msg.reactor.assign("JHKHVMYEEFZ");

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
    msg.setTimeStamp(0.524415815610453);
    msg.setSource(55183U);
    msg.setSourceEntity(121U);
    msg.setDestination(10004U);
    msg.setDestinationEntity(111U);
    msg.reactor.assign("VFOFKQOHXBAVNZZSPBJDDQWVXSKWQIFYMLKCKTKFJGYINSCBREWIFYEXHHGILWMOSTXUWDLAHMOQMSBQTNRXHYWLXUAUHNGJVQWRQ");

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
    msg.setTimeStamp(0.5617804410828403);
    msg.setSource(29517U);
    msg.setSourceEntity(209U);
    msg.setDestination(2974U);
    msg.setDestinationEntity(161U);
    msg.topic.assign("SPKWHCYBOHUVIOOPOEMONWOKQUVNIGGSDJKFTULIXYRIXSDIKBJSZPSLDKQJQGD");
    msg.data.assign("UYWPXKOJPJWAQXMNIRDHMPJQAQJTLPSQMFSIDIKAUVIUYPYZKLCLDCJNKUNVANSFRSOTWZMXIVDFIILHGDYSLHYQGJJRELOAOVRVQSWTGKRHCBZOCELSGPKMKZZJTAJVFVGVROEXWNBNYTFYKFEBTHCKUYGBNOTGWWPFEJHLUFZDLGQIDXEZIZSDANFZGCCXUVMDOBRQTBNAUSEYMCMICMBKDAXWQZVCTRGFTOQULBRUBMEPXBPOHWXSWR");

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
    msg.setTimeStamp(0.7565578887740938);
    msg.setSource(2494U);
    msg.setSourceEntity(86U);
    msg.setDestination(65167U);
    msg.setDestinationEntity(162U);
    msg.topic.assign("PMGCMMINGSCVXDVRGHRRIXNDZMJUZWMKMUJVWRJUVEHZLRMAHMQVNOCALKTFPMAFSHRSAWBGAWVZQAJEZGEQJJTXSSZUXPLNKWQIYKDRFOIYFGETQOIFFTIHYVNLQNCTKVYKXDDCIWXEUIACTREIOFSUQLPLGOSYFSPVQKBDNSW");
    msg.data.assign("UTQHBPUTNKIJUKLPFIWUCDRETNDJVSSPQIEOANDBNXYXNSWIQBTMQRHHMHPURCUOAOTQREKZRJVLUQYLOKZMCIRZFRSBGFLGYAQJJXATKJKFELTAOPLUKGUVMTOMFWGDFZIMQERSIPYXYWYMXLJJMDCBPASGPXWFBVAEDCXOWPQKGHCVDLDU");

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
    msg.setTimeStamp(0.023344464718924596);
    msg.setSource(21458U);
    msg.setSourceEntity(223U);
    msg.setDestination(27518U);
    msg.setDestinationEntity(166U);
    msg.topic.assign("DWIVOFDAVLMBYBCNNXHWWBHVBRBLQRZPBJSQWDHEYQXSDSXZJTFQGDOKWPDYTCPIEYAHUMDHKOIRPNGPRZIKCETFUFWZJKRAYRHEHPKKLKNGPVMAVUUWEBUTY");
    msg.data.assign("MUSXBGERQKCGLYEEQXYZDYWWYFHDDABQJTLBBAIQBKVTUDDVOCSVZOGRHGUROXPJQUMNSTHQTQFLGMSSNXLSLMCZILEJWZSDSEKWLHPFYUFDYXHGYKIEDPBHAMNRNPQYTIOUPIJGSZAECUKNJHCCFORRVWBZBWWAP");

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
    msg.setTimeStamp(0.7672926471421965);
    msg.setSource(42925U);
    msg.setSourceEntity(226U);
    msg.setDestination(33576U);
    msg.setDestinationEntity(204U);
    msg.frameid = 10U;
    const char tmp_msg_0[] = {70, 19, -66, -37, -112, -119, 5, 82, -90, -120, -35, -114, 21, -25, -8, -54, -81, 107, 56, 73, 89, 124, -126, 72, -117, 48, 75, -101, -114, -36, 50, -59, -63, -120, -82, 7, 43, -2, -119, -89, -38, -78, 78, 51, -89, -45, -109, 63, -70, -39, 46, 105, 118, -9, -48, -119, 61, 57, -49, 112, 38, -11, 59, 87, -35, -18, 57, 17, 117, -19, 11, 120, 103, 118, 63, 89, 9, -55, 9, -84, -71, 35, -122, -52, 117, 7, 83, -2, -57, -52, -69, -15, -45, -3, -52, -34, -120, -108, -94, 0, -58, 107, -16, -48, 36, -51, 5, -105, 44, -125, 92, 5, 51, 46, -21, -106, -116, -63, 91, -99, -101, -13, 91, -98, -53, -64, -61, 0, -87, 32, -67, 86, 68, -24, 35, 68, -28, -122, -85, -43, -62, -74, 58, -111, 16, 64, 36, -12, 0, -125, -96, 56, 126, 60, 75, 126, 13, 94, -117, -86, 29, 81, 106, 35, 69, -46, -122, -123, 68, -68, 61, -26, -61, 7, 85, -34, 12, 21, -119, 20, -32, -63, -43, -24, -86, 9, -84, 99, 52, -9, -73, -105, 71, -58, 102, 21, 43, 96, -39, 63, 66, -79, 113, -90, 113, 35, 104, 100, 19, 4};
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
    msg.setTimeStamp(0.9904158988871523);
    msg.setSource(39493U);
    msg.setSourceEntity(134U);
    msg.setDestination(34788U);
    msg.setDestinationEntity(93U);
    msg.frameid = 76U;
    const char tmp_msg_0[] = {-114, 69, 43, 58, -29, -30, 12, -104, -117, -122, -1, -114, 5, -33, 56, 71, 100, -78, -66, 93, -48, -111, -126, -122, -115, -49, -29, -4, 105, 18, -80, 89, -32, -51, 2, 3, 41, 117, 16, -14, -21, -89, -57, -107, -3, -120, 123, 105, 54, -87, 98, -48, -93, -51, 65, 93, -97, 6, -70, -58, 84, 84, 44, -51, 100, 63, -81, 66, 110, 22, 106, 77, 24, -81, -105, -84, 12, 77, 90, 6, -58, 86, -121, 117, 41, -84, -122, -37, 48, 84, -111, -68, -13, -91, -53, -126, 111, -29, -24, -61, -67, -37, -25, -128, 126, -106, -18, -25, -122, 120, -66, 74, 25, 21, -91, -26, 107, -59, -84, -102, 34, 99, -12, -63, -36, 107, -51, -75, 98, -43, 98, -12, -118, 92, 95, -12, -94, 42, -57, -101, 28, 84, 84, 9, -67, 108, 78, 117, 18, 119, -107, 120, -28, -102, 89, 114, -118, 38, -71, -71, 73, 111, -49, 79, 25, -71, 90, 49, -90, -90, 2, 118, -79, 70, -52, 49, 71, 49, -30, -38, -42, -128, 43, -75, -76, -114, -72, 91, 69, -25, 61, 11, -69, -18, -84, -47, -3, -44, 29, -79};
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
    msg.setTimeStamp(0.9327965900149131);
    msg.setSource(46461U);
    msg.setSourceEntity(65U);
    msg.setDestination(15873U);
    msg.setDestinationEntity(90U);
    msg.frameid = 68U;
    const char tmp_msg_0[] = {42, -10, -81, -75, -84, 82, -19, -62, -30, -65, -87, 10, -88, -88, -23, -25, -121, -100, 33, -18, -75, 63, -56, -31, -111, -33, 35, 34, -89, -30, -67, 61, -2, 29, -31, -7, -88, -45, 25, -43, -108, 18, 100, -120, 34, -20, 0, -70, 98, 104, 51, -108, -33, -68, -89, 3, 126, -127, -114, 62, -111, -32, -14, -30, 114, -20, 98, -26, -52, -60, 50, 42, 123, 100, -41, -48, -124, 0, -11, 16, 11, 21, 14, 30, 25, 46, -42, 84, 101, -103, -26, -122, 14, 66, 5, 29, -46, 9, -99, -114, -54, 110, 52, 41, -124, 80, 2, 66, -23, 94, 73, -114, -112, -15, 47, -24, 81, 17, 122, 99, 42, -39, 69, 47, 45, -99, -11, 116, 8, 45, -35, 17, -123, 39, -117, 25, 4, -16, -40, 98, -116, 4, 13, 95, 31, 15, 16, -97, 100, -23, 23, -13, 117, 8, 9, 31, 31, -55, 7, -107, -63, -122, 112};
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
    msg.setTimeStamp(0.809507683747203);
    msg.setSource(51109U);
    msg.setSourceEntity(132U);
    msg.setDestination(289U);
    msg.setDestinationEntity(196U);
    msg.fps = 211U;
    msg.quality = 110U;
    msg.reps = 84U;
    msg.tsize = 189U;

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
    msg.setTimeStamp(0.7193833804252016);
    msg.setSource(60533U);
    msg.setSourceEntity(191U);
    msg.setDestination(17686U);
    msg.setDestinationEntity(68U);
    msg.fps = 243U;
    msg.quality = 96U;
    msg.reps = 137U;
    msg.tsize = 168U;

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
    msg.setTimeStamp(0.02522112755560224);
    msg.setSource(43876U);
    msg.setSourceEntity(138U);
    msg.setDestination(56674U);
    msg.setDestinationEntity(17U);
    msg.fps = 68U;
    msg.quality = 71U;
    msg.reps = 202U;
    msg.tsize = 238U;

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
    msg.setTimeStamp(0.7757474619102956);
    msg.setSource(63503U);
    msg.setSourceEntity(171U);
    msg.setDestination(47956U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.12102133753985611;
    msg.lon = 0.2718047024838869;
    msg.depth = 115U;
    msg.speed = 0.09681475768350611;
    msg.psi = 0.9777093822935898;

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
    msg.setTimeStamp(0.5441665416124496);
    msg.setSource(12833U);
    msg.setSourceEntity(94U);
    msg.setDestination(9080U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.9300244514554646;
    msg.lon = 0.6674344621524162;
    msg.depth = 19U;
    msg.speed = 0.2510149147198062;
    msg.psi = 0.2676957179405286;

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
    msg.setTimeStamp(0.2097502616911271);
    msg.setSource(29631U);
    msg.setSourceEntity(34U);
    msg.setDestination(53197U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.09339273670925274;
    msg.lon = 0.10825391414977492;
    msg.depth = 220U;
    msg.speed = 0.11102776904892608;
    msg.psi = 0.19314862523054066;

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
    msg.setTimeStamp(0.2109118279230704);
    msg.setSource(52722U);
    msg.setSourceEntity(243U);
    msg.setDestination(20813U);
    msg.setDestinationEntity(40U);
    msg.label.assign("UDGBVFMCVTWCBFNYFGRZORONUIYKFALRTHWCPGHDWTNWHBOTMETLDLCNQRXTWKMACLMZJFKSXPKYIHUSYAVCTAPMYOAMEUTWJCJFILIY");
    msg.lat = 0.21458884215508678;
    msg.lon = 0.1363253153391072;
    msg.z = 0.6814807308678008;
    msg.z_units = 104U;
    msg.cog = 0.9966717014807832;
    msg.sog = 0.2833669165955012;

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
    msg.setTimeStamp(0.005426911180452909);
    msg.setSource(34595U);
    msg.setSourceEntity(115U);
    msg.setDestination(64815U);
    msg.setDestinationEntity(173U);
    msg.label.assign("UKJEGHEGGBADAKWQVUOXCVVYXNDKQBNVYRJXURAYZZFPNPBEZNKBBQMVAHIMOOEQQAYTHIHEOIXAKBSTEKNZTCTBAWQIMQWYGSYZI");
    msg.lat = 0.6487734809381198;
    msg.lon = 0.5856865261961507;
    msg.z = 0.5526942915172832;
    msg.z_units = 165U;
    msg.cog = 0.43068683478607594;
    msg.sog = 0.8000414783332618;

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
    msg.setTimeStamp(0.35583377368390157);
    msg.setSource(38657U);
    msg.setSourceEntity(58U);
    msg.setDestination(62895U);
    msg.setDestinationEntity(20U);
    msg.label.assign("OCZBXKTEMNJVDM");
    msg.lat = 0.3256751574150447;
    msg.lon = 0.5506046512365711;
    msg.z = 0.3815277960289192;
    msg.z_units = 199U;
    msg.cog = 0.14420766991797618;
    msg.sog = 0.47262850253690136;

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
    msg.setTimeStamp(0.5273476936310417);
    msg.setSource(37185U);
    msg.setSourceEntity(239U);
    msg.setDestination(65216U);
    msg.setDestinationEntity(161U);
    msg.name.assign("EEFVGZYSSHONJMUMRCXTYYFPHQHZLMOQIZTOFUSDWBYGCVBDDCWGRANUMYXDTPAUZJRSWFBYCLUZHDBJACMEELJA");
    msg.value.assign("CCVBAXFASJYLRNHCMPQDPPFUPRNLJFFNVLDBJTJIXYWFZJATYQODLPOVBUWWUFNGIJVRZLYNXMVPEMONHOXIYDHCEPMJMTYZSHURQRQETKEDGHABYGXKKQUSJPGXBSSAJWVLEXHHRKTLADNHIOAGQCZUCAIRTVZYTZTFOTMGMHLIMSKBKIVJVKICZAOUGDEB");

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
    msg.setTimeStamp(0.31355529128167214);
    msg.setSource(10939U);
    msg.setSourceEntity(152U);
    msg.setDestination(57351U);
    msg.setDestinationEntity(93U);
    msg.name.assign("TATDAIONBPMIJVNXSCVHPUWEZICHGAOKCLUAWNLSNJXSOLWQJWYTQEDGXCGRIXGOYWBBTHKOSGRDMWZYYZZKUARIGTTEYOBRWMUXWRQQMBVHYWRKERELYMDLYVBTPZFDUSPUNFUPDCZFILXMFFHZHSPJNGJRBDONOVFNBUFQAKJQCGZXMFSHEETLYKRPRKCADQXTJJCOAJSQP");
    msg.value.assign("NJBECGIVZKJPEYWAPKDQEBLRJFZKOJOHKKDTIQLVBVAGJWICIJTFRHUSNVMVWBKXTVEQESAOMXNODDYLUFPRUZPTAGHDLWMDNGIXFDTMYMREQMUCIRNQUGZRSNFPSBVVLXXKAYBIXEFLHBAUSMWXHPPPCUMOEPJEYJRLHBYKQTIHNKTDKDGCGJYRCJOBQZHOPSUWUXMIGBOLAFAWSXZNFFDZV");

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
    msg.setTimeStamp(0.26637944667871183);
    msg.setSource(50323U);
    msg.setSourceEntity(100U);
    msg.setDestination(20028U);
    msg.setDestinationEntity(69U);
    msg.name.assign("MHJJRHDDRPGVDSKCMEUDTVC");
    msg.value.assign("HKRGJMQPGDAHAFQVHXYCVROGXRYPBOSMASNYHEZRLKQANYFLJWEWMDSCRSXOKZDZIDFJXMBOERXMXSTJSFQAMEYPBDHOKMBJGGEIISVECUVWCZCGLZPCUWVNCULJNIKYBUYAZWPTWHAXOVLDBZNNNGLAEWFTSLHPYUMRHJPQPCRHUSLTKPLAPJIHTWJCLEIWTTOGTDQMXZQFWVNUODQRYAKFEJCVNXTUSIITOBKFVMZVFYOKIUFBEZBBDG");

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
    msg.setTimeStamp(0.44458076850918127);
    msg.setSource(14456U);
    msg.setSourceEntity(29U);
    msg.setDestination(20553U);
    msg.setDestinationEntity(96U);
    msg.name.assign("YJZPYEHHFDORBTERBDDFCKFGNKRUVEUXOPLTCPHFSVAGYHVIXDZZBVWJAFRPIGYOUZZYLKYJBEWCKQIJSRGMCUZANBQQLZAUINBSMOXDADXYIHWSPTCQRERBFJENCTQDPKQVYEXYOCSTXJVCKQUIQXGWMNYOLRILQLXMNFUOHTSNWVZGRPLRTGIHVGCKN");

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
    msg.setTimeStamp(0.5802633855020369);
    msg.setSource(63052U);
    msg.setSourceEntity(219U);
    msg.setDestination(29059U);
    msg.setDestinationEntity(228U);
    msg.name.assign("QPBYUNBLEYMXCZEOHGJAXQDTMXVWYAUPBNIJQNAYWNPKOIDZPUFOTVLCZPIOTJIGHXUSQRYHFYK");

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
    msg.setTimeStamp(0.19466491083911452);
    msg.setSource(15626U);
    msg.setSourceEntity(154U);
    msg.setDestination(18730U);
    msg.setDestinationEntity(85U);
    msg.name.assign("JJNAIIFAGMASAQRIZNHPOQNXPDTJSOJOOJQYBXRDMNTOINSOIXGLYEXZVJSENYQKASCREMVVLZZBRWVKGAPQGCYYENIKZFUGUXNKVLFGOWLGW");

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
    msg.setTimeStamp(0.5713134678711124);
    msg.setSource(8316U);
    msg.setSourceEntity(215U);
    msg.setDestination(7883U);
    msg.setDestinationEntity(9U);
    msg.name.assign("OMZEEJDJXDQDUGYAVYYWTNRZEXFSVPHGXHRLVZBCEKNKOWFCRKFFNRQKFFJATTVHHIJHXZURQMOVPTQUSLMSBRERYBDNZOUAKVBFALCRTAGMISVSKIJWDIZSIWGPUYMGPPJGISEKCOCZTJGNECIJX");
    msg.visibility.assign("HTEEGGZFSSHZJLFIAJSIBBGSNMXALTPDUYDVGTCLFTEGHUVCWLONVNVMLCXPDGVNPRNCHJYIESSKIBOUOJEWPYJHSAMSQMIDVPZKSKAKAKJQMUMXNDJBYGYTATWWFUNZWMXUQKOVVFQUYPDRHOWQXNDFHKLYZBFXTFIZWXFAYXHLRQCHOVCCRJXMZGR");
    msg.scope.assign("MDJIOXNUUNQCDNSPRIKAQPSPARWYEVVFHTOBABBSFKFMMKTIWGLCBEJVBDPHWNVIXXOXXKQLVNOGFBDIUPYGXWUJFDMAWKFLRBNHKZVFQSVIJWHPBEOSZCDIZQHYEUNQAAAVTHRVLQCDRJTYSZARMZKYJYJWWESEISWRDMYGSXJUPCAZGCZHODTGEGRCGZUQHTCNUGZOZLSCJAFIKELTLVEHMUPPOYCBNGMXRTQXFJUYOELQFKWRLDBIHXTLYO");

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
    msg.setTimeStamp(0.5578646510324764);
    msg.setSource(24934U);
    msg.setSourceEntity(67U);
    msg.setDestination(60993U);
    msg.setDestinationEntity(219U);
    msg.name.assign("QDMUEZCFOUKXTNZOCTNMBKRRHAPCKWKMBFRFOYGLKCCMVHHYXPVEFYYIKOXGEKEXVE");
    msg.visibility.assign("DVPZANTETNIMEYIZTEXWHDDLLSKCNSZZPPOLMKYIURIVF");
    msg.scope.assign("KPVOWCEMKZACDNLWUFHS");

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
    msg.setTimeStamp(0.5620639458025438);
    msg.setSource(49501U);
    msg.setSourceEntity(243U);
    msg.setDestination(18692U);
    msg.setDestinationEntity(6U);
    msg.name.assign("IJCNXHBTDTBACUEHINRDEKSCCUDBQKFDTFRYYGUNNRWEKPVRNJZYXMWUXRVMSMLSZXBGYVKZWBLOYPCZUHDEOODQMABWHAQLHJOHKFSOXXBIYLAQWXTANQJJVAJMWYSUVGZEPEHDFQIDRSEFZMGKAPXUOTHFMSFUAQKETXFBPUNRLHCVTNWVLBIPJGZLOLHIPRDOQPKEUIOVX");
    msg.visibility.assign("BBAQCPLORMQWPZLXFYPHQMSDOZXFVLDYPKDQRRJIDNOUYLITVKTWYMEMWWEUBREWPFZUQC");
    msg.scope.assign("SSUZEAWZSFDTHPIBIUBXQIMULXEWTFHJGYFQVCYSRBQNFTQBFHXJDKLZWPLPRGRKXLPOHEJXGUQCPMKAJSLTYAWFVNAYBXIMLXVVEUORNJDOPGYSVROQQRIXGCPDQZATJNWGRTXNODPCPTFFQIIKCWECACHXUVIEKWZWZYFPHGJCLAHKJODVHBKONHRMFBCGYRTMYDMBVMVJZWNZLYDACMTQIOHGMKNNONSEKKDRZSBAESTUGEVU");

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
    msg.setTimeStamp(0.820993645841122);
    msg.setSource(13200U);
    msg.setSourceEntity(245U);
    msg.setDestination(51287U);
    msg.setDestinationEntity(166U);
    msg.name.assign("EAGDFRYGYXRSFLJAGTDUGVZISVTZEQNFWFAMNMHWPAWWQVUCGELRDBPTDDBJHBELHKABOWUZQIMFLOYOMALJNLKKSYQOSXJBJOYSGHKNLNREZXIKZEDHXMNWCZCUEETVTKYLAFBRCCKAXKSPOPGNCIIZQDPPPMXZJBCXSMTUBXGIBWVQZQDTRONV");

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
    msg.setTimeStamp(0.857820092394138);
    msg.setSource(39778U);
    msg.setSourceEntity(108U);
    msg.setDestination(832U);
    msg.setDestinationEntity(126U);
    msg.name.assign("MNYSBGHYEAHOBEATXVWQWVIISYXLJIQNXSZGJVMCDTZJOLTQQWMPEKJQCBSLOKYFGGPWZQOPUHSBUQIUGZMELSIMCGUYJPDQHAPTFRRREVZKFXLAQLAXCTYIRYHFEFHXYMVDWVOKRKXTRDXWKBBHNWEGUSGRYBADZNOWWQNZEJSKHVDCCIOLFMBPCLLSIBUKIAJDOANJEUTZCR");

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
    msg.setTimeStamp(0.06242499537632973);
    msg.setSource(57266U);
    msg.setSourceEntity(242U);
    msg.setDestination(41686U);
    msg.setDestinationEntity(228U);
    msg.name.assign("QNQZGASVJLZUIQKXKLXICKZDYWECTZQYAXFABEUMBFNWJTQCHNMJIRGUUBKYEBAADQWNSVKTLFERFOIGERWDZOMSZYOGXUSVUKWBGQPHLMPDSZXDJIUQBTRLPDP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZNPLQZSMDVLHFNDMLMCKQXOUPJGLCAMQRYDWWOJIEZTTZNRVVWIDYUQSAQZQBVETAYNGRJULXMDOEJPNXAIQKCFMATNZOWIRFCKCJRPPULSSELPQKLWHFSRFKGEXEBSNGXHXJRUWWGHZHSYIBABZHYYGFOYCSFVXTIIDG");
    tmp_msg_0.value.assign("MFPTLHUEKACSFGIMRSKVNCONHUSDKNRRDTFJBYSEUMZHPDXPWGZJJOQXBUSIPVOBWOUPXNMDSLGCVKJFN");
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
    msg.setTimeStamp(0.8409928343847836);
    msg.setSource(61527U);
    msg.setSourceEntity(99U);
    msg.setDestination(4590U);
    msg.setDestinationEntity(22U);
    msg.name.assign("OTXNXAXDJAMMEBBVYNDCQIRZDHRADTQIOUMXONBHDVFEPGKMWYCWKQQAYVMUCRQGCAZLCTPECOUBIEKDSVCEWSKUPILBWTXGHFIBEZDYSWPGWTSBHOZQSVVLDMPVIJEBLESYJNCXPIGHNVRLZPCAAXFMJNGQHINZOJJRHZTZUOTXWQOYFLSUNOFKBKLYYTKAVLGNDIWFQUHYERQIZU");

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
    msg.setTimeStamp(0.21471792763703335);
    msg.setSource(7111U);
    msg.setSourceEntity(129U);
    msg.setDestination(36270U);
    msg.setDestinationEntity(188U);
    msg.name.assign("KZRSQQSXPOZEFGKHVMKTWSBDJNFYKBYSCMMP");

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
    msg.setTimeStamp(0.901820968183648);
    msg.setSource(46891U);
    msg.setSourceEntity(154U);
    msg.setDestination(51270U);
    msg.setDestinationEntity(241U);
    msg.name.assign("KXYVOUXZJEJTVVUWDMNCKDXHFDHNTVVLFTKLLAUFDWCIGHYCIOFJMZWHHRQELDSCROJSOLXVOPLXRRFNMYMXBHEGZYGENUFVCZUEOAMYUNPOABHONFHIZLKRKQOCLAVUYTELIJIBSFBTQDLVBYTXJAWGNCQPOPAXNSSIZSRFHGMQUVQMMKHWNAKDSE");

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
    msg.setTimeStamp(0.09891408301565818);
    msg.setSource(8416U);
    msg.setSourceEntity(15U);
    msg.setDestination(50467U);
    msg.setDestinationEntity(125U);
    msg.timeout = 2259331623U;

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
    msg.setTimeStamp(0.7482606365172029);
    msg.setSource(20731U);
    msg.setSourceEntity(28U);
    msg.setDestination(34860U);
    msg.setDestinationEntity(237U);
    msg.timeout = 3687350631U;

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
    msg.setTimeStamp(0.21717055587230982);
    msg.setSource(29034U);
    msg.setSourceEntity(157U);
    msg.setDestination(411U);
    msg.setDestinationEntity(168U);
    msg.timeout = 263164697U;

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
    msg.setTimeStamp(0.5076437209552755);
    msg.setSource(59258U);
    msg.setSourceEntity(72U);
    msg.setDestination(51604U);
    msg.setDestinationEntity(168U);
    msg.sessid = 3193839080U;

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
    msg.setTimeStamp(0.06271937557281282);
    msg.setSource(57108U);
    msg.setSourceEntity(74U);
    msg.setDestination(43398U);
    msg.setDestinationEntity(170U);
    msg.sessid = 1367701780U;

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
    msg.setTimeStamp(0.029331910093558955);
    msg.setSource(26444U);
    msg.setSourceEntity(30U);
    msg.setDestination(47164U);
    msg.setDestinationEntity(51U);
    msg.sessid = 1195514009U;

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
    msg.setTimeStamp(0.13003654380890906);
    msg.setSource(25332U);
    msg.setSourceEntity(154U);
    msg.setDestination(13901U);
    msg.setDestinationEntity(79U);
    msg.sessid = 820313294U;
    msg.messages.assign("OJRVTHAKUVPWEASZFJRYSQCWXTRPOVAFHUMUZUDSUTJQXGXBASBWBZVSSHOBFZWICAGURJPNTCMGYXKMRPMFRPLMUMDOXEKYFGUNNYIYGHIFJQCIQNNDDOTKISDXCTUHTBLZVTADVTRRDIANFHBIBEOMRWWXJBNQLMZXRQGQKPCYFHKEJCVVPLYCESAKNZSELMDEFKYPCKNIV");

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
    msg.setTimeStamp(0.6665578465018941);
    msg.setSource(24914U);
    msg.setSourceEntity(223U);
    msg.setDestination(26345U);
    msg.setDestinationEntity(16U);
    msg.sessid = 1404184633U;
    msg.messages.assign("OIDKSZNIDJWWEKKWGLCZRCRNVREEXDWYAPQPOBSPQHNHPYBBMFHLWAISDUMCNHPUD");

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
    msg.setTimeStamp(0.3785529171296219);
    msg.setSource(26311U);
    msg.setSourceEntity(230U);
    msg.setDestination(506U);
    msg.setDestinationEntity(234U);
    msg.sessid = 3244236650U;
    msg.messages.assign("IYHWRFTXSYWXEJHUVMSSECFQGSAWRTZLJXQDLJDSHARNPNQQKIOYUQOCMOXPWEJHEUKGXLZWOYF");

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
    msg.setTimeStamp(0.6945984298093142);
    msg.setSource(23264U);
    msg.setSourceEntity(12U);
    msg.setDestination(31570U);
    msg.setDestinationEntity(148U);
    msg.sessid = 4039764000U;

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
    msg.setTimeStamp(0.5045256114425889);
    msg.setSource(38412U);
    msg.setSourceEntity(232U);
    msg.setDestination(9388U);
    msg.setDestinationEntity(2U);
    msg.sessid = 3441308907U;

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
    msg.setTimeStamp(0.05898416260545081);
    msg.setSource(39312U);
    msg.setSourceEntity(85U);
    msg.setDestination(52883U);
    msg.setDestinationEntity(147U);
    msg.sessid = 4010578576U;

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
    msg.setTimeStamp(0.7183555366446326);
    msg.setSource(65227U);
    msg.setSourceEntity(116U);
    msg.setDestination(20299U);
    msg.setDestinationEntity(86U);
    msg.sessid = 3924173697U;
    msg.status = 130U;

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
    msg.setTimeStamp(0.20976627551329186);
    msg.setSource(50168U);
    msg.setSourceEntity(181U);
    msg.setDestination(52326U);
    msg.setDestinationEntity(35U);
    msg.sessid = 38879443U;
    msg.status = 175U;

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
    msg.setTimeStamp(0.24802391089618891);
    msg.setSource(56775U);
    msg.setSourceEntity(158U);
    msg.setDestination(38834U);
    msg.setDestinationEntity(33U);
    msg.sessid = 1757612353U;
    msg.status = 145U;

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
    msg.setTimeStamp(0.6599665757060682);
    msg.setSource(61089U);
    msg.setSourceEntity(43U);
    msg.setDestination(49618U);
    msg.setDestinationEntity(202U);
    msg.name.assign("YDPUFEGUDOMHGYJKEAZEVSGSUXXQKTEXCUQYRCKNAYVGGNHARWWFZEWAIDRSOIXQPSCRYOOLMWHNXMTFUVHKVBEGDQJOJJTUOKOINMNTCAEDSPVDPIECWFSTBVIURMQMZPLRBIAIVFRZNZANPLUSDGCYFQFQOFNBHKWPCMIBPTIXWYHBYQPBJSHSAFLJUBJUNPBWTGSXKGILHDLKXJMVOZHTYZDMJVNKWAQYVRCHRZCDTQ");

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
    msg.setTimeStamp(0.39107020857975616);
    msg.setSource(32186U);
    msg.setSourceEntity(230U);
    msg.setDestination(12908U);
    msg.setDestinationEntity(177U);
    msg.name.assign("TRBCTTHIWXNXEMQZKLJWRYDAQREOSRMOJAP");

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
    msg.setTimeStamp(0.9276443046589601);
    msg.setSource(35368U);
    msg.setSourceEntity(199U);
    msg.setDestination(59060U);
    msg.setDestinationEntity(185U);
    msg.name.assign("KWRHXYYOZTBQGLRUKUIATKSGQJRNUEQGRZBMDLVOSMAEKEDAEOZQAUJOOYHTNUFWUNXVZPUCSGHYFMPZJIVNJOPXQFFOVIUARUQYAATXCVNCVOIEXCDQVIPBELCIFAWEQKZSYRPG");

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
    msg.setTimeStamp(0.41842473729435703);
    msg.setSource(39604U);
    msg.setSourceEntity(204U);
    msg.setDestination(50723U);
    msg.setDestinationEntity(216U);
    msg.name.assign("PIAIWWOLWOJUWBUDHNPJCEHTHYKMQJZIMLGAUXNYQCNGAOCXBJGLRXPMQDYDURGLSSIXDZOMBNKERYEXNPJVYSXZTWFORYONISFFYDMBBCKAZF");

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
    msg.setTimeStamp(0.9257908928240123);
    msg.setSource(50783U);
    msg.setSourceEntity(158U);
    msg.setDestination(14135U);
    msg.setDestinationEntity(200U);
    msg.name.assign("PFUANCSJLLXPDUFGSXSOBPYZCFQDTAKGYROVUOVHKIDNIXXKHFVAAZMYARJECDZXMOPTJTDECLISPWHIPQXBLRMFNRCTOOVIKVZHMAFRTWZKGPGCGCINIDULBENVPSZAWYPGMTCWJYHCNTBNKLUHKOHIUGDTBNRRZSMQENMVEBDZQKWGBMKVUEWLXB");

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
    msg.setTimeStamp(0.3792700087702352);
    msg.setSource(43940U);
    msg.setSourceEntity(244U);
    msg.setDestination(3654U);
    msg.setDestinationEntity(16U);
    msg.name.assign("HWFFKHUSSNPLZNTOSQVBTFAVPFUXPMUUIHZYBMGQESZPQSJDLAQYCLHBBONIVETSSBGZEDOXVBFXKJDZDFKDREMNHDWXFRNXPGYMGPXAIEUACDTLTGSWCYKJZMDERXHNHFINRBOCUACVWACEZCXISVTXFLOICWMVEGJKYXRPPKVAIUTJKYKDLESQRWLDUGRWYVHTGGQGLYHHEJMQWZOTQBMBIOWIPQJNROYJLNJPZIM");

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
    msg.setTimeStamp(0.028229014015455745);
    msg.setSource(12712U);
    msg.setSourceEntity(40U);
    msg.setDestination(47064U);
    msg.setDestinationEntity(135U);
    msg.type = 68U;
    msg.error.assign("MCUSWRHKXBCCITKXIUWFRLTVMLQWNUFIETOEYPAFCISYUGCFURGVDLFOBYKJABIQKXIZFSUKLKHBIBCZDTLHTJDSHMFGAPQOSCTQIRKZMTOJDRUJZWMXELMRPNYYMYQXPAWJOYZWPR");

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
    msg.setTimeStamp(0.9969284580767426);
    msg.setSource(39132U);
    msg.setSourceEntity(231U);
    msg.setDestination(10245U);
    msg.setDestinationEntity(191U);
    msg.type = 198U;
    msg.error.assign("LLJUEUZWPQOZZJKPXWEYFBXYUWLHFFBLYDRNAOJUFGSFQOIRDTPJPOWKVAGQGCAZFYIRBEHAXMXIHNHNTIECKUVGANLWOJMEVDAEOSSWKKIRQMZXRDUMDPHOYBGTMVGOKAIWCSHDONQNTGVTYMXSEXVCUJXLRPBQWZPUNKSGPLCCEKVIAICSHGDZQ");

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
    msg.setTimeStamp(0.9437580616807487);
    msg.setSource(19484U);
    msg.setSourceEntity(67U);
    msg.setDestination(60979U);
    msg.setDestinationEntity(146U);
    msg.type = 151U;
    msg.error.assign("HWCSVHQHNTVITCUUCJQXEIBQDRSWEFKSPKKQUYVKQLKTJWVZPXZDSTASQPUHMNWUAYIFYRRCDMWDDELKOQNXAENMHTUEZIBTKCHYAIFFGGIYVUABYXIZXLNVMFZXYNPJDBGJKQEPRYFJRRGSYOBATQXJSECVPKJCSAZJCHLFBBUTZBIZO");

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
    msg.setTimeStamp(0.5945918868916152);
    msg.setSource(59958U);
    msg.setSourceEntity(65U);
    msg.setDestination(26593U);
    msg.setDestinationEntity(85U);
    msg.seq = 15658U;
    msg.sys_dst.assign("KESESJITHKFOQCVQHIJZWFUTSWXQXPTORBBWVWPHGMEYMQRXYCQHMWOLSNCMHDPIAXBNWUVSJAEGYUQADWASCSALJKTDLYSBZDENVJ");
    msg.flags = 63U;
    const char tmp_msg_0[] = {9, -50, -38, 122, -16, 6, 38, 111, -76, -96, 69, -15, -12, -3, 89, 76, -42, 26, 71, -40, 114, -57, -36, -30, 5, 49, -110, 92, -91, 65, 90, -93, -44, -81, -26, 78, -101, 78, -14, -76, -43, 11, -106, 67, -88, -63, 77, -14, -36, -123, 33, -106, -22, -12, 62, -103, -105, -93, 77, -23, -29, -79, -67, 106, -120, 118, 73, 78, 62, 10, -34, 96, -40, -33, 28, 43, -7, -24, -113, -17, -83, -124, 24, -25, 56, 86, 99, -88, -34, 14, 102, -92, -72, 74, 112, -27, 84, 23, -92, 0, -59, -69, -108, -107, 71, -69, -24, 102, -76, -81, 69, -93, 99, -70, -61, -80, -18, -89, 74, 13, -45, 86, -13, -109, -48, 111, -14, -43, -59, 71, -106, 57, -55, -110, -19, -112, 90, -37, 92, -10, -110, 18, 107, 61, -112, 72, 70, 38, -116, 94, 67, -98, 90, 9, -86, 119, -31, -28, 34, -46, -72};
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
    msg.setTimeStamp(0.49805549249004544);
    msg.setSource(12441U);
    msg.setSourceEntity(134U);
    msg.setDestination(53979U);
    msg.setDestinationEntity(33U);
    msg.seq = 45725U;
    msg.sys_dst.assign("LJNBBOLJGBHBHGLIDFKOVJTBIOJJXPCYPGUVRXSHZQYNSMODIXNZBDNGCPBHCWMLHAHGARYEAQLLDPJQLFZAIWNZJXLUJMPGSSPAQIHRSDKURKPMNS");
    msg.flags = 80U;
    const char tmp_msg_0[] = {8, -74, -122, 102, -46, -83, -107, -35, 64, 99, 77, -118, 85, -67, -59, -112, -61, 119, -37, 105, 21, 47, 21, -11, 17};
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
    msg.setTimeStamp(0.4546792958118575);
    msg.setSource(50669U);
    msg.setSourceEntity(248U);
    msg.setDestination(50097U);
    msg.setDestinationEntity(133U);
    msg.seq = 2933U;
    msg.sys_dst.assign("ZXYETRIRFMWZQVMHKHGHJGTWQNDZKVBUQCXLZDSKQUVNQP");
    msg.flags = 93U;
    const char tmp_msg_0[] = {21, -122, 61, -25, -16, -61, -71, -66, 55, -32, -76, -96, -87, 47, -57, 36, -90, 2, 121, -77, -114, -93, -4, 104, -125, -50, 38, 29, -67, 95, -5, -112, 66, 80, 63, -111, 119, -28, 102, 62, -74, 41, -63, -50, -51, -55, 41, -24, -19, 38, -90, -75, -108, 16, 32, -23, 111, 105, -70, -3, -127, -95, -103, 77, -68, 100, -6, -93, -16, -57, 98, 0, 6, 75, 84, 77, 64, 104, -58, -90, -61, 50, 36, 47, 109, 103, -78, 48, -97, -120, 67, -72, 97, -46, 121, 113, 23, 17, -52, -44, -8, 118, 40, -98, -27, 51, -108, 15, 27, 4, 65, -49, -44, -93, 115, 11, -4, -106, 60, 87, -80, 2, -124, 72, -82, -24, -30, -38, 123, 45, -76, -100, 125, 59, 35, 37, -86, -68, -66, 80, -96, 37, -25, -85, 45, 42, -56, -97, -48, 113, 47, -107, 41, 116, 79, -5, 76, 44, -81, 88, -81, 112, -118, 68, -71, -109, 35, 9, -59, 41, 50, 111, -2, -103, 54, 123, -83, -50, 55, -108, -108, 42, -83, 117, 115, 124, -15, -96, 33, -38, -103, -42, -53, -94, -74, -74, 76, -122, 90, -74, 75, 111, 88, 65, 116, -55, -30, -16, 120, -63, -91, -33, -44, 17, 116, -103, -54, -83, -45, 55, 57, -76, 66, 35, -43, -31, 46, 76, 98, 84, 78, -7, -14, 25, -7, -96, -78, 42, -88, -98, 104, -18, -59, 22, 72};
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
    msg.setTimeStamp(0.37331318588420226);
    msg.setSource(3426U);
    msg.setSourceEntity(95U);
    msg.setDestination(17672U);
    msg.setDestinationEntity(5U);
    msg.sys_src.assign("PRYOEZSOKMYURDRJQOXYGSUFMVDTRTOEWZJHTGBBGGPTIGCVAWTVVOZJVBUQWKQREMWMLZXGUNMACXUYAGZBDEDQIPTYSKLEIAUTHBAYCEFCLGPEKAHHIRFGCIYKHHFCJWJKNKVXKE");
    msg.sys_dst.assign("XYWMRIUHZHMOCAINLYAELVHGGMQQRTNDVXJJJZPKGIOZFJZNOHYSHTYRLUVKCMGJSPQRQCIFUECETQHDXRGPFFOBWCTWWRFDCDAHAECZRAGVQQUTMUPMBNJUNFQKPMBWVFWAUYWTDXOJGXKWBLIOBGSSTLIUAFTCOBKBSDAPYVVIJPAZKPFISHEJTGIZKLBXXULVMKFSLWQYSUNRCDKHKLYNXBRHNEBXGPOZP");
    msg.flags = 180U;
    const char tmp_msg_0[] = {-61, 33, 92, 69, 21, 12, -81, -89, 112, -24, 40, 15, 49, -10, 72, -93, -64, -99, 112, 65, 43, 7, 74, -96, 36, -82, 123, -108, -10, -52, -1, 126, -104, 124, -31, 53, -78, -109, 112, -30, 85, 78, 125, 103, 47, -34, -6, 19, 7, 15, -56, -76, -39, -105, -82, 26, -107, 108, -112, -55, 31, 108, -2, -47, 54, -38, -87, 114, -25, -55, -39, 8, -69, 125, 72, -66, -71, -125, -117, 102, -109, 20, -56, -13, -61, 14, 71, 98, 85, -51, -81, -60, -11, -6, -124, 90, 103, -81, -25, 121, 48, -89, -80, 63, 97, -114, 84, 67, 19, 16, 23, -109, 107, 88, 114, 94, -35, -43, 91, -94, 110, -90, -60, 4, -58, 2, 12, 31, -8, -7, 87, -35, 96, 99, 104, 102, 3, -21, 73, -25, 24, 13, -115, -95, -15, -85, -16, -90, -12, -30, -78, 27, -53, -93, -81, 31, 20, -33, -95, 81, -98, 56, 123, -39, -88};
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
    msg.setTimeStamp(0.04703498274488338);
    msg.setSource(46991U);
    msg.setSourceEntity(16U);
    msg.setDestination(50832U);
    msg.setDestinationEntity(155U);
    msg.sys_src.assign("WQLLOETHDAFDUBRHKKBXXMRSNHEOCZSKNHXJCDAEISZAGCATWSKLNYCUAPRZBZWWKHTYIHMNBZFSRFPWVVIXEXOVZI");
    msg.sys_dst.assign("DRUXQLWCTMHLINZYWNFVNJYFTFLVTYJCOYKXBEGVHIIWGGOSBXU");
    msg.flags = 134U;
    const char tmp_msg_0[] = {103, -112, -47, -7, -9, -83, 61, -82, 85, -25, -26, -19, -13, 48, 76, -11, -33, 73, -111, -68, 28, -26, -120, -18, -63, 80, -53, 83, 40, 96, 64, 46, -95, 69, -107, -29, 112, 68, 86, 4, -49, 34, -55, -33, -107, 48, -116, -96, 63, -100, -64, -83, 126, 36, 34, -37, 113, 19, 27, -73, 97, -39, 56, 99, -65, 1, 123, 6, 9, -5, -95, -71, -83, -87, -27, 11, 59, 15, 20, 56, -113, -105, 38, -80};
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
    msg.setTimeStamp(0.9842621082475782);
    msg.setSource(29443U);
    msg.setSourceEntity(49U);
    msg.setDestination(64073U);
    msg.setDestinationEntity(122U);
    msg.sys_src.assign("IZALWLNDBRCOFZKRAQSLXBSKOVNLSSGONJVPJYGMYXPMQGQULHFGOUEZRHU");
    msg.sys_dst.assign("AUGYOSLTNPGPYOWTPJIOAWBUZYRIHANHEHRYQHNQUKFEPCUHOTKDRKWQXLVSJUDFJDIHPRZQENIXTZXDWAFEUCDHRFWOCFAFJBGBLCUWZKNEEMYXBWKMBFBASRCOPKZP");
    msg.flags = 92U;
    const char tmp_msg_0[] = {-115, 72, -126, 7, 79, -73, -42, 39, -112, 31, -40, -34, -113, -22, -66, 55, 4, -105, 85, -77, 11, 121, 123, 38, 58, 40, -17, 69, -85, 34, -86, -113, 31, 126, -4, -18, -32, -111, 116, 44, -24, -112, 75, 59, -55, 120, -104, 48, 29, 119, 112, 37, -119, -34, -13, 62, -35, 115, 50, 14, 104, 6, -9, 82, -55, 99, -108, -116, 75, 123, 84, 55, -111, -86, 17, -73, -100, 122, -114, 118};
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
    msg.setTimeStamp(0.6617915978837913);
    msg.setSource(13400U);
    msg.setSourceEntity(169U);
    msg.setDestination(13740U);
    msg.setDestinationEntity(197U);
    msg.seq = 42198U;
    msg.value = 174U;
    msg.error.assign("JNNTHHEDOFIUYHKQIPVNFSBKWQNKKKHBKZDWTZCVBZTDXJCJCOUJYFWKMVLLDXXZRVMTIEVXVNUCOCDONJYWTKDALBPUPXMGPWLAQEXOROEQWYAWHRUAUIMT");

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
    msg.setTimeStamp(0.3559651536595302);
    msg.setSource(18748U);
    msg.setSourceEntity(116U);
    msg.setDestination(62194U);
    msg.setDestinationEntity(56U);
    msg.seq = 36737U;
    msg.value = 246U;
    msg.error.assign("AEDTNPMEFNPLEWDKVQFTSKGNVYRURWQLUFLLFGJNHGPRPAGSYEZPRLPTUEKKFFEMQXXITFIEVCVRAPHWGVZCICFYBZSAQPRTCMMTLCZWHKLEIWSMJILTKZXGICXUSVHRAHWXDQQZXUVDRTYYJMQMZSOXGDGBWJPINKZJAEQAXHOBZIOMALNUWKBWVPVSHY");

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
    msg.setTimeStamp(0.8386053773385235);
    msg.setSource(12631U);
    msg.setSourceEntity(155U);
    msg.setDestination(40437U);
    msg.setDestinationEntity(105U);
    msg.seq = 28118U;
    msg.value = 14U;
    msg.error.assign("PWGQXUNDQHNIAGRZSVPIEHEKMYRQIIJHJTEIZOSKUICGXMONCNYOAKYSTRVRZPOSPFFSCWZMXCJYMBAWGQPQFMDNAVVHYYEVMBQVQPOVMMRUBTFDEXGDOXLJIZZHJDNCKLDWWDNLJHREECBTBQNXOHAFTUFNEAIVUKRTFUYYBNQWFJLGP");

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
    msg.setTimeStamp(0.17728248714796147);
    msg.setSource(13963U);
    msg.setSourceEntity(203U);
    msg.setDestination(33425U);
    msg.setDestinationEntity(161U);
    msg.seq = 27146U;
    msg.sys.assign("RQEQWDJGWNBIRWZSHKMSOEJTMYCPPGDVGEYUKHXFHLLI");
    msg.value = 0.6582131458819801;

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
    msg.setTimeStamp(0.9301301448933061);
    msg.setSource(25203U);
    msg.setSourceEntity(65U);
    msg.setDestination(63838U);
    msg.setDestinationEntity(93U);
    msg.seq = 8714U;
    msg.sys.assign("ZSZXQTECPPS");
    msg.value = 0.996978099685552;

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
    msg.setTimeStamp(0.30834546878879887);
    msg.setSource(14483U);
    msg.setSourceEntity(172U);
    msg.setDestination(1698U);
    msg.setDestinationEntity(67U);
    msg.seq = 30529U;
    msg.sys.assign("MRLSKAZIAZIMVJURLYEGXPTRMGCEDXZMCRKOWAFQITSIBBIBDVIPDUKRRP");
    msg.value = 0.6686715686275265;

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
    msg.setTimeStamp(0.27597894909069554);
    msg.setSource(3810U);
    msg.setSourceEntity(236U);
    msg.setDestination(32705U);
    msg.setDestinationEntity(233U);
    msg.action = 249U;
    msg.longain = 0.2776754460189097;
    msg.latgain = 0.7297478248298259;
    msg.bondthick = 2183951989U;
    msg.leadgain = 0.1469317362995426;
    msg.deconflgain = 0.8843434804966074;

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
    msg.setTimeStamp(0.7011363141132512);
    msg.setSource(33632U);
    msg.setSourceEntity(199U);
    msg.setDestination(9859U);
    msg.setDestinationEntity(73U);
    msg.action = 61U;
    msg.longain = 0.5344456210838452;
    msg.latgain = 0.6200778765022473;
    msg.bondthick = 1612127870U;
    msg.leadgain = 0.08539626122179211;
    msg.deconflgain = 0.36816561694195804;

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
    msg.setTimeStamp(0.06275869281564539);
    msg.setSource(546U);
    msg.setSourceEntity(26U);
    msg.setDestination(39267U);
    msg.setDestinationEntity(198U);
    msg.action = 28U;
    msg.longain = 0.6157673358072708;
    msg.latgain = 0.05352697813369156;
    msg.bondthick = 101833996U;
    msg.leadgain = 0.7734104152948887;
    msg.deconflgain = 0.7253811297528564;

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
    msg.setTimeStamp(0.2502447200008654);
    msg.setSource(57571U);
    msg.setSourceEntity(247U);
    msg.setDestination(55739U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.2261956619439116;
    msg.dist_min_abs = 0.9734813429633763;
    msg.dist_min_mean = 0.8207368048263696;

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
    msg.setTimeStamp(0.9978549612840653);
    msg.setSource(56108U);
    msg.setSourceEntity(192U);
    msg.setDestination(1159U);
    msg.setDestinationEntity(151U);
    msg.err_mean = 0.15187940628525087;
    msg.dist_min_abs = 0.2677909298657314;
    msg.dist_min_mean = 0.34194575004630623;

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
    msg.setTimeStamp(0.34512404920170214);
    msg.setSource(59475U);
    msg.setSourceEntity(116U);
    msg.setDestination(61516U);
    msg.setDestinationEntity(47U);
    msg.err_mean = 0.4958225350613513;
    msg.dist_min_abs = 0.9067239190093813;
    msg.dist_min_mean = 0.8609916847406546;

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
    msg.setTimeStamp(0.8005830452813061);
    msg.setSource(45987U);
    msg.setSourceEntity(148U);
    msg.setDestination(39567U);
    msg.setDestinationEntity(218U);
    msg.action = 15U;
    msg.lon_gain = 0.11235303609116021;
    msg.lat_gain = 0.13656337123719997;
    msg.bond_thick = 0.3562655629888408;
    msg.lead_gain = 0.12853230778257485;
    msg.deconfl_gain = 0.6104887538885563;
    msg.accel_switch_gain = 0.8126014396930735;
    msg.safe_dist = 0.40993016307175634;
    msg.deconflict_offset = 0.19222130587999886;
    msg.accel_safe_margin = 0.1454580276247962;
    msg.accel_lim_x = 0.8630969861564033;

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
    msg.setTimeStamp(0.7941105329873309);
    msg.setSource(6902U);
    msg.setSourceEntity(84U);
    msg.setDestination(44766U);
    msg.setDestinationEntity(228U);
    msg.action = 19U;
    msg.lon_gain = 0.7270011308785396;
    msg.lat_gain = 0.8754950771503363;
    msg.bond_thick = 0.8780629251209179;
    msg.lead_gain = 0.5314766005770378;
    msg.deconfl_gain = 0.32614008305452036;
    msg.accel_switch_gain = 0.1680977595024632;
    msg.safe_dist = 0.5201244088237379;
    msg.deconflict_offset = 0.1934948970626904;
    msg.accel_safe_margin = 0.7929210907582401;
    msg.accel_lim_x = 0.513538452181633;

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
    msg.setTimeStamp(0.8651198488303733);
    msg.setSource(3690U);
    msg.setSourceEntity(114U);
    msg.setDestination(1351U);
    msg.setDestinationEntity(103U);
    msg.action = 23U;
    msg.lon_gain = 0.08140612383279155;
    msg.lat_gain = 0.2587988761942942;
    msg.bond_thick = 0.8748068422682143;
    msg.lead_gain = 0.9722922799135764;
    msg.deconfl_gain = 0.8758922243473317;
    msg.accel_switch_gain = 0.7278897620445907;
    msg.safe_dist = 0.14823542974497395;
    msg.deconflict_offset = 0.4184121586256617;
    msg.accel_safe_margin = 0.3932114718635312;
    msg.accel_lim_x = 0.5552249276137488;

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
    msg.setTimeStamp(0.2713940839871394);
    msg.setSource(47251U);
    msg.setSourceEntity(199U);
    msg.setDestination(26391U);
    msg.setDestinationEntity(46U);
    msg.type = 48U;
    msg.op = 53U;
    msg.err_mean = 0.9192798634369435;
    msg.dist_min_abs = 0.593619592262875;
    msg.dist_min_mean = 0.3418534278839672;
    msg.roll_rate_mean = 0.7981141412457846;
    msg.time = 0.9128020135197682;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 69U;
    tmp_msg_0.lon_gain = 0.19653312561353098;
    tmp_msg_0.lat_gain = 0.46610062409726727;
    tmp_msg_0.bond_thick = 0.07041778162030388;
    tmp_msg_0.lead_gain = 0.1383122837533728;
    tmp_msg_0.deconfl_gain = 0.24169954848048902;
    tmp_msg_0.accel_switch_gain = 0.0029524939438447806;
    tmp_msg_0.safe_dist = 0.5972395436353677;
    tmp_msg_0.deconflict_offset = 0.9038995322054059;
    tmp_msg_0.accel_safe_margin = 0.05532893471183886;
    tmp_msg_0.accel_lim_x = 0.8929425400102451;
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
    msg.setTimeStamp(0.8404138956388817);
    msg.setSource(6880U);
    msg.setSourceEntity(204U);
    msg.setDestination(43501U);
    msg.setDestinationEntity(206U);
    msg.type = 83U;
    msg.op = 16U;
    msg.err_mean = 0.6575020482803811;
    msg.dist_min_abs = 0.5655895432719016;
    msg.dist_min_mean = 0.8001088991935172;
    msg.roll_rate_mean = 0.400016321560408;
    msg.time = 0.8525997222713956;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 196U;
    tmp_msg_0.lon_gain = 0.9254224593600818;
    tmp_msg_0.lat_gain = 0.9511445034640061;
    tmp_msg_0.bond_thick = 0.7188913476429825;
    tmp_msg_0.lead_gain = 0.5017195690889407;
    tmp_msg_0.deconfl_gain = 0.9320173618106007;
    tmp_msg_0.accel_switch_gain = 0.09076234502119163;
    tmp_msg_0.safe_dist = 0.663956931747404;
    tmp_msg_0.deconflict_offset = 0.16584045833193006;
    tmp_msg_0.accel_safe_margin = 0.3051564015075492;
    tmp_msg_0.accel_lim_x = 0.5766217948078173;
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
    msg.setTimeStamp(0.12788442085794383);
    msg.setSource(7661U);
    msg.setSourceEntity(230U);
    msg.setDestination(25932U);
    msg.setDestinationEntity(180U);
    msg.type = 160U;
    msg.op = 80U;
    msg.err_mean = 0.2753089836356706;
    msg.dist_min_abs = 0.8828315031926793;
    msg.dist_min_mean = 0.37372514785468536;
    msg.roll_rate_mean = 0.5095098875363613;
    msg.time = 0.804091335973066;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 2U;
    tmp_msg_0.lon_gain = 0.7828390997254424;
    tmp_msg_0.lat_gain = 0.7075595468875182;
    tmp_msg_0.bond_thick = 0.6030275842112768;
    tmp_msg_0.lead_gain = 0.20396688198689805;
    tmp_msg_0.deconfl_gain = 0.7909154861396721;
    tmp_msg_0.accel_switch_gain = 0.7800823211092588;
    tmp_msg_0.safe_dist = 0.24871810853477716;
    tmp_msg_0.deconflict_offset = 0.9203822932784113;
    tmp_msg_0.accel_safe_margin = 0.9699010275857398;
    tmp_msg_0.accel_lim_x = 0.535886516842112;
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
    msg.setTimeStamp(0.669529518228161);
    msg.setSource(34283U);
    msg.setSourceEntity(41U);
    msg.setDestination(61396U);
    msg.setDestinationEntity(75U);
    msg.uid = 221U;
    msg.frag_number = 138U;
    msg.num_frags = 62U;
    const char tmp_msg_0[] = {31, -30, -70, 58, 94, -23, 59, 112, 82, 125};
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
    msg.setTimeStamp(0.5670941046715802);
    msg.setSource(52985U);
    msg.setSourceEntity(72U);
    msg.setDestination(789U);
    msg.setDestinationEntity(209U);
    msg.uid = 111U;
    msg.frag_number = 61U;
    msg.num_frags = 209U;
    const char tmp_msg_0[] = {-86, -127, -72, -36, 3, -19, -104, 4, 34, -128, -6, -13, 76, 121, 125, 14, -64, -80, -51, -65, -68, 112, 39, -77, 57, 88, -41, -71, 5, 78, -113, -27, 70, -43, 116, 37, -7, 59, 71, -124, 92, -28, 31, -46, 26, -30, -102, 121, 70, 67, -16, 33, -73, -21, 92, -91, -106, 31, 55, 60, -12, 32, 5, 114, -57, -123, -12, 87, -108, -83, -84, 10, 24, -104, 122, -68, 30, -106, -90, -11, -27, -113, 21, -124, -76, 117, 51, 33, -87, 28, 55, -24, 98, -26, 55, -88, 11, 106, 24, 89, -56, -54, -37, -21, -39, 59, 89, -78, -62, -3, 47, -110, 0, 78, 44, -95, 59, 34, 68};
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
    msg.setTimeStamp(0.43510500554208464);
    msg.setSource(22099U);
    msg.setSourceEntity(100U);
    msg.setDestination(10780U);
    msg.setDestinationEntity(43U);
    msg.uid = 114U;
    msg.frag_number = 191U;
    msg.num_frags = 115U;
    const char tmp_msg_0[] = {22, 98, 83, -32, -44, 119, -12, -85, -36, -10, 71, -79, 75, -77, -123, 87, -77, -117, -25, 15, 6, -1, -38, 29, -54, -87, 4, 112, 76, 56, 79, -17, -6, -41, -49, -8, -112, 12, 105, 104, -118, -9, -37, -119, -70, -8, 52, -26, -63, -122, 3, 78, -9, -63, 34, -88, 82, -70, 56, -52, -114, -99, -116, 11, 19, -14, 45, 24, 4, -10, 61, 14, -126, -4, 94, -18, -89, 113, 119, 30, -127, -118, 45, 126, 125, 58, -14, 21, -11, -41, -16, -108, -33, -50, -8, -73, 19, -21, -92, -49, 103, -63, 9, 68, -52, 90, 114, 122, 63, -72, -76, 84, -23, -85, 45, 89, 111, -69, 6, -53, 63, -3, 82, 45, -77, 42, -61, 126, 81, -95, 119, 81, -107, 17, -88, 33, -94, -57, -118, 120, 11, -62, -58, -29, -99, -30, 6, -38, 74, -72, 73, -56, -16, -63, 62, 13, -55, -27, -81, -43, 17, -74, -122, -72, 33, -114, -76, 77, -21, -116, 14, -43, 94, 21, 4, -73, 45, -12, -22, 31, 13, 46, -126, 68, -93, 16, -70, 95, 19, 65, 124, 58, 15, 96, 93, 23, -18, 110, 110, 25, 44, 57, 10, 90};
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
    msg.setTimeStamp(0.38658693647456444);
    msg.setSource(4969U);
    msg.setSourceEntity(0U);
    msg.setDestination(57690U);
    msg.setDestinationEntity(204U);
    msg.content_type.assign("EDHLZQIXZDYNPAAQCJTYPHWWRNJDGPDRIPFQOTEMQPHVNHFSAZFGKOVALORBFICUBDXBMLERTJOOTSWFESJWMXLAYNSGYYKOUSALOHGWBZJRIG");
    const char tmp_msg_0[] = {62, -45, 60, -68, -95, -93, -103, 39, 104, 92, -33, 50, -91, -34, -61, 40, 20, -72, 74, -108, 12, 6, 32, -117, 94, -1, -124, -68, -97, 33, 11, -38, -24, 58, 111, -58, -35, 53, 125, -58, -92, -97, 113, 100, -114, 49, -24, 41, -112, -115, -50, -119, 43, 12, 66, -82, 90, -110, 58, 11, 42, -120, 9, -48, -87, 98, -119, 19, 37, 36, -12, 15, -45, -59, -111, -22, -11, 92, -20, -104, 18, -5, 44, 54, -51, -102, 25, 36, -105, 97, -47, -28, 12, 106, 35, -84, -97, -123, 6, -28, 84, -108, -61, 66, 31, 76, -13, -56, 113, -82, 94, 126, -36, -97, -42, 1, 110, 60, -50, 120, -126, 77, 120, -124, -45, -56, 57, 69, -116, 58, 116, -31, 12, -104, 19, -68, 10, 72, 116, -62, 28, -68, 22, 6, -46, 107, 66, 61, -16, -45, -38, -22, -61, 72, 66, 64, 63, -72, 99, -50, -106, 76, -1, -115, -100, 77, 121, -86, -11, 52, -1, -124, 72, -51, -39, 121, 87, -122, 50, -89, -31, -14, 57, 12, 59, -74, 95, 97, 9, 62, -30, 7, 53, -2, -124, -31, 52, 92, -26, -94, -91, -90, -18, 69, -59, 74, 116, 53, -94, 6, -118, 36, -11, -104, -11, -26, -13, -87, 105, 123, -13, 102, -72, 38, -103, 124, -77, 27, 28};
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
    msg.setTimeStamp(0.6958106730420147);
    msg.setSource(32924U);
    msg.setSourceEntity(137U);
    msg.setDestination(41913U);
    msg.setDestinationEntity(42U);
    msg.content_type.assign("DXUFDVLVPGDMPRSWSPMBBEEPQHGMYVTTDTUWEPPGALRKTVYBXEH");
    const char tmp_msg_0[] = {-35, 35, -23, -60, -59, -76, -85, -97, -54, 48, 9, 22, 112, -56, 114, -11, -5, -34, 58, -84, 4, 109, -62, 0, 11, -87, 69, -76, -98, 32, 82, 103, -61, -124, 16, -63, -10, 72, -18, -97, -111, 80, -25, -75, -104, -97, -98, -31, 9, -23, -88, -29, -119, 21, -124, -9, 17, 75, 77, 75, -122, 15, -104, -78, 95, -44, -42, 120, 58, 49, -46, 112, 99, -84, 126, -5, 75, -83, 41, -90, -44, 85, -84, -88, -94, -77, 44, -66, -121, 33, 7, -20, -60, -95, -68, 34, -11, -99, -60, 94, 13, 33, -119, -120, -5, -43, 12, 70, 78, 93, 46, -110, -24, -66, -92, -31, -66, 85};
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
    msg.setTimeStamp(0.5563171928445505);
    msg.setSource(19943U);
    msg.setSourceEntity(143U);
    msg.setDestination(19018U);
    msg.setDestinationEntity(2U);
    msg.content_type.assign("FXXYNRAGINHWKAZLVDTNQBIFWRCVFSFFXOSXNT");
    const char tmp_msg_0[] = {-87, 70, -45, -3, 1, -36, -89, 54, -87, -68, -110, -120, 111, -38, -100, -44, 111, -5, -102, -48, 60, 32, 62, 125, 58, 118, -128, -122, -8, -64, 1, 58, 50, 72, 110, 36, 60, 3, 103, 32, -1, -44, -16, 14, -27, 7, 115, 19, 95, -124, -56, 13, -58, -99, -2, 3, -106, 41, -61, 27, -68, -29, 81, -21, -40, 51, 23, 121, -92, 122, -26, -44, 125, 39, 74, 47, 116, -93, -128, -117, -111, -120, -66, -106, -64, -27, 20, -59, -125, -32, 59, -61, 1, -70, 67, 90, 54, -79, -61, -121, 20, 118, -33, 95, -91, -45, -73, -111, 84, -47, 69, -78, 47, 41, -90, -125, 18, -76, -38, 74, -8, -3, 31, -85, -123, 84, -41, 54, 125, 96, 49, -97, 81, 66, -49, -33, 6, -38, 103, -75, 67, -20, 57, -115, 75, 26, 74, -73, -84, 18, -11, -36, -54, 34, -43, -60, 70, 73, 22, 17, -112, 15, 116, 76, -103, 97, 125, -61, 68, 95, 93, 26, -68, -18, -80, -120, -106, -49, -58, -78, 118, 64, 30, -59, 19, -80, 93, 22, -30, -97, 29, -59, -26, 70, 117, -82, -24, -57, 107, 82, 86, 19, -10, -4, -93, 47, -118, 86, -34, 81, -2, -73, -20, -2, 17, 17, -75, -93, -45, 111, 75, 80, -66, 95, 4, -54, -74, -32, -114, 60, -43, -112, 25, -116, 101, -47, -78, -47, 42, 36, 123, -56, -44, 98, -44};
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
    msg.setTimeStamp(0.49742917298771927);
    msg.setSource(25878U);
    msg.setSourceEntity(45U);
    msg.setDestination(11102U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.14833260646736635);
    msg.setSource(12372U);
    msg.setSourceEntity(35U);
    msg.setDestination(23616U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.5906237018454833);
    msg.setSource(1850U);
    msg.setSourceEntity(126U);
    msg.setDestination(23855U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.7859797437076361);
    msg.setSource(37121U);
    msg.setSourceEntity(189U);
    msg.setDestination(38574U);
    msg.setDestinationEntity(73U);
    msg.target = 31507U;
    msg.bearing = 0.9932098475229237;
    msg.elevation = 0.13295498783611426;

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
    msg.setTimeStamp(0.5843821380031415);
    msg.setSource(46022U);
    msg.setSourceEntity(216U);
    msg.setDestination(64341U);
    msg.setDestinationEntity(165U);
    msg.target = 58543U;
    msg.bearing = 0.46394953693210694;
    msg.elevation = 0.4310725447379805;

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
    msg.setTimeStamp(0.9282624349491658);
    msg.setSource(25239U);
    msg.setSourceEntity(210U);
    msg.setDestination(37193U);
    msg.setDestinationEntity(46U);
    msg.target = 23710U;
    msg.bearing = 0.6633002332721584;
    msg.elevation = 0.8123034017990064;

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
    msg.setTimeStamp(0.9242248158509803);
    msg.setSource(23193U);
    msg.setSourceEntity(184U);
    msg.setDestination(8380U);
    msg.setDestinationEntity(1U);
    msg.target = 9473U;
    msg.x = 0.4297367873446847;
    msg.y = 0.9348919739120796;
    msg.z = 0.2915153799832897;

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
    msg.setTimeStamp(0.9206026628603036);
    msg.setSource(52749U);
    msg.setSourceEntity(116U);
    msg.setDestination(38092U);
    msg.setDestinationEntity(158U);
    msg.target = 19165U;
    msg.x = 0.30947854471092817;
    msg.y = 0.6097555395323703;
    msg.z = 0.7962276840217153;

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
    msg.setTimeStamp(0.3212556990231299);
    msg.setSource(24669U);
    msg.setSourceEntity(99U);
    msg.setDestination(35978U);
    msg.setDestinationEntity(197U);
    msg.target = 27712U;
    msg.x = 0.6241096342358513;
    msg.y = 0.8294344913828079;
    msg.z = 0.23374361093393248;

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
    msg.setTimeStamp(0.5487822427284098);
    msg.setSource(21477U);
    msg.setSourceEntity(31U);
    msg.setDestination(10397U);
    msg.setDestinationEntity(74U);
    msg.target = 42625U;
    msg.lat = 0.7130873426375609;
    msg.lon = 0.6032166054554519;
    msg.z_units = 63U;
    msg.z = 0.30881756761881096;

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
    msg.setTimeStamp(0.7887227281116376);
    msg.setSource(54504U);
    msg.setSourceEntity(196U);
    msg.setDestination(57929U);
    msg.setDestinationEntity(183U);
    msg.target = 57566U;
    msg.lat = 0.7038010106143691;
    msg.lon = 0.5498256691110767;
    msg.z_units = 14U;
    msg.z = 0.5612907621925287;

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
    msg.setTimeStamp(0.7947845053086678);
    msg.setSource(9585U);
    msg.setSourceEntity(71U);
    msg.setDestination(21107U);
    msg.setDestinationEntity(63U);
    msg.target = 14441U;
    msg.lat = 0.42222928465966725;
    msg.lon = 0.2882560783747876;
    msg.z_units = 236U;
    msg.z = 0.9708810079998714;

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
    msg.setTimeStamp(0.3491334171854136);
    msg.setSource(7573U);
    msg.setSourceEntity(155U);
    msg.setDestination(15493U);
    msg.setDestinationEntity(66U);
    msg.locale.assign("GHRNQTQQVKBRGZBMILPKUDOSHEEOAJWPJTYGTIROUYFZDSYGYGCSSCYLJFQCZEJTMHOOHRCIRXKKIJMLJVLXPVODWZHDLAFF");
    const char tmp_msg_0[] = {7, 84, 17, 88, 31, -28, 100, 9, 121, 1, -123, -83, -20, -88, -15, 55, 108, -69, -32, -75, -10, 77, 119, 30, 91, -4, -30, 39, -3, 103, -21, -23, 65, 22, 8, 88, 21, 107, 65, -10, -84, 19, 26, 78, -85, 112, -100, -40, -2, 117, 55, 58, -46, 55, -122, -45, -51, 65, 111, 40, 104, -8, 62, 53, -26, -79, -55, 80, 80, 19, -124, 112, 69, 95, -87, -34, 60, -34, -125, 112, -5, 27, -90, -86, 68, 36, 74, 125, -102, 19, -86, -94, 58, -103, -40, 104, -20, -24, -120, -41, 87, 71, -21, -2, -17, 84, -4, 33, -16, -34, -75, -109, 51, -126, 20, 56, 63, -4, -122, -76, 76, 21, 9, -28, 47, 70, 89, 94, 86, 114, -11, 12, -123, 54, -12, -23, -48, -96, 74, 107, -102, 68, 42, 104};
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
    msg.setTimeStamp(0.5251767286927257);
    msg.setSource(26656U);
    msg.setSourceEntity(85U);
    msg.setDestination(19792U);
    msg.setDestinationEntity(64U);
    msg.locale.assign("HTXMQQKAJJYWYUGSQIEWQOPVFLVBMUUXEGRATEROERPVB");
    const char tmp_msg_0[] = {-84, 34, 92, -121, -69, -77, 9, 69, 47, -43, 64, -104, -32, -40, -85, -96, 81, 72, -90, -9, -63, -2, -44, 102, -125, 104, -21, -92, 61, 107, 86, -92, 87, -90, 11, -113, 11, 8, 59, 40, 105, 74, -96, -60, 21, 109, -12, 110, -46, -4, -24, 72, 30, -37, 35, 39, -78, -123, -69, 31, 98, 91, -16, -126, 64, -5, -52, -13, -71, -54, 112, -111, 120, -103, 64, -53, -40, 89, -75, -91, 7, -108, 25, -27, -28, -91, -105, 44, -95, 1, 36, -5, 68, 100, -61, 29, -102, -99, -72, -76, -75, 37, -47, 98, 72, 68, -89, 126, -64, -62, 78, -76, -94, -109, -66, 14, 60, -66, 62, 54, -117, 58, 14, 81, 97, -59, -110, -78, 116, 84, 74, -88, -53, 8, 124, -29, -107, -58, 77, 62, -106, -41, 36, 79, 2, 41, -59, 5, -22, -5, -50, -52, -79, -14, 1, -109, 1, -87, 20, -70, 118, 92, 99, 68, -105, -16, -20, 55, 62, 44, -79, -95, 48, 101, -111, 7, -103, -79};
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
    msg.setTimeStamp(0.23598032611464015);
    msg.setSource(19178U);
    msg.setSourceEntity(181U);
    msg.setDestination(25588U);
    msg.setDestinationEntity(46U);
    msg.locale.assign("ZHMZXBQOVHYEFPSLPUYOKKEJDCIQUDGSQUFNPMTTQZIYHI");
    const char tmp_msg_0[] = {35, 68, -71, 93, 33, -32, 122, 103, -112, 105, 57, 60, 44, 100, -17, 84, -42, 71, 108, -35, 111, -93, 81, -12, -95, -125, -105, 80, -71, 33, -85, -101, -127};
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
    msg.setTimeStamp(0.9757035374003588);
    msg.setSource(18088U);
    msg.setSourceEntity(160U);
    msg.setDestination(3318U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.9940653578431975);
    msg.setSource(55967U);
    msg.setSourceEntity(202U);
    msg.setDestination(61578U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.45421897392290467);
    msg.setSource(4241U);
    msg.setSourceEntity(70U);
    msg.setDestination(61136U);
    msg.setDestinationEntity(171U);

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

  return test.getReturnValue();
}
