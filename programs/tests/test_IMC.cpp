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
// IMC XML MD5: 807c1609684a0d5f35e9001a58fc3135                            *
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
    msg.setTimeStamp(0.4326875207835885);
    msg.setSource(21804U);
    msg.setSourceEntity(237U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(82U);
    msg.state = 120U;
    msg.flags = 229U;
    msg.description.assign("MIWVDJJPMHNQQFVAQEMKXGODGMLDYHDOQSZNTOBBJJFYQYYVQACFLMMOQLIARNBAYTIBCCKDTEGKBINSDGNHZLKEFTPWIUCXKBVUPKKLJBEOQUREBZWRYGHGEXMWSHLXCORYRFCXKYDKXFKNXZTWADSOERUCTJUAJGCNPZTBMZGCXLAFGXVIYZGMPJFHLBOSRDSSIXJVHICQRRUZUEHOPHIMTWVNUPNV");

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
    msg.setTimeStamp(0.030951725260319085);
    msg.setSource(45663U);
    msg.setSourceEntity(199U);
    msg.setDestination(61782U);
    msg.setDestinationEntity(249U);
    msg.state = 137U;
    msg.flags = 93U;
    msg.description.assign("GDTFAUPPQNXIPNWRL");

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
    msg.setTimeStamp(0.4693696642119397);
    msg.setSource(27621U);
    msg.setSourceEntity(64U);
    msg.setDestination(5671U);
    msg.setDestinationEntity(137U);
    msg.state = 11U;
    msg.flags = 201U;
    msg.description.assign("NACVSPMGYBLUISBTUOALCBQIWAEKQUTMIVYJSOPLIUJYREPWRPGPHRVUEHFCQHIVNWNEPOATXYZDXYNHGKSZVSECCRZGDJQKNMWHTGLRCCKMABHCHUABHMNLOENEGBZXTTGODDUXLMJIUYZSJNEONSIJTZCANYQTKZTWDJMKJWDLPOVSXRIKFF");

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
    msg.setTimeStamp(0.9029431601124254);
    msg.setSource(20736U);
    msg.setSourceEntity(52U);
    msg.setDestination(33562U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.20685710098752452);
    msg.setSource(26238U);
    msg.setSourceEntity(232U);
    msg.setDestination(48437U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.3098429620690337);
    msg.setSource(40141U);
    msg.setSourceEntity(253U);
    msg.setDestination(10256U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.9369930368263082);
    msg.setSource(64611U);
    msg.setSourceEntity(126U);
    msg.setDestination(29477U);
    msg.setDestinationEntity(218U);
    msg.id = 173U;
    msg.label.assign("CWRNVXSYDSZOPYCWAZMIUIEBNHAVWJLOWUUBNIUEYETKBQGSPIAOKLVLUOMQNIODYLZFEELRRTPJVMCULYHGDDJCESDKXRGKDNTDSHVIBPXOINFHJRSLTFBNXYRTAAPZQPMIEARJETGJEYFQFJCBPGBDGRKHUVQWXLOXMXCOYGOTCFNSVHZMJMMAHSETGJVXMHAPN");
    msg.component.assign("NWLHTEJJMDEGSUQRVMUQXSKVULILDSAELYNMPQODSNXVBHGYAVAEBYAHXCSVBCGPKRCLTEHWFHDFVBZLPKHOHCUBHKWJBOZUQOZTNFAIARQPLXYNCWFEDCMEIXDGTUGZUGZBWXNMIKJHMZJMVQRNFZZBTOVWWFICIIJDFPPSRTFTJCTYSLOMATWINKGSXRQQEBDJYDRAKDJPFSRWZEVGUUAOYFLOAXLORQYGYKZBJTKYPVCPOXNIMSW");
    msg.act_time = 24525U;
    msg.deact_time = 8382U;

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
    msg.setTimeStamp(0.2509886136369046);
    msg.setSource(65477U);
    msg.setSourceEntity(143U);
    msg.setDestination(56355U);
    msg.setDestinationEntity(9U);
    msg.id = 219U;
    msg.label.assign("XRIDBIVMDMJTOFCNQSYJZRWVUCHZEZUTSDLKKUH");
    msg.component.assign("LZIJNCPDONQBRKJPHJVHVZRDQMQEYYFVXRLAYWXZGFIKUCVSBECLLWQJGCFLUHQTELPTMESUJKOFWUUDVLFN");
    msg.act_time = 36462U;
    msg.deact_time = 19164U;

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
    msg.setTimeStamp(0.0705666974128325);
    msg.setSource(12637U);
    msg.setSourceEntity(99U);
    msg.setDestination(48304U);
    msg.setDestinationEntity(135U);
    msg.id = 169U;
    msg.label.assign("BIBLUBQNZMTGHYMLYDJOAVYABEATBLSKCOYHHUZOQBSXHDDOOUIXAQFCIGZKLTKTZJTONAPWWVWASHKGFEUSMPUXNQQWUXFPDEQLPAKUFXHXMDLZHQVEVFHCVDXMYBXIIGEKFEWAQRQWNWCTTVFEPTDPNCOGIRNPLWNZIJCJWMRLINKYRFHSVZOFIPBVSEPUGJMCHSDDSOLSJCBURIGKRUJLDYZPJMTOYQRGZRAVCNXR");
    msg.component.assign("JONZMYHPNIYDDOWINPBTJHTFZGTCGZOGLVVKAJBEBKETNRAIIFRVLJUTXPPESELPYSGGHFUXWXHIAYIAAGDPLCQRBCLSCXITYOQQIDAVZVSENKFBPPOVPWFWODJMJWJGMBSRCKSFMQIVFBKQLHBANSUWYXYDAKIMRFYN");
    msg.act_time = 62462U;
    msg.deact_time = 8504U;

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
    msg.setTimeStamp(0.34995570350257355);
    msg.setSource(22599U);
    msg.setSourceEntity(217U);
    msg.setDestination(14005U);
    msg.setDestinationEntity(211U);
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
    msg.setTimeStamp(0.5475286778049743);
    msg.setSource(7550U);
    msg.setSourceEntity(175U);
    msg.setDestination(28342U);
    msg.setDestinationEntity(112U);
    msg.id = 40U;

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
    msg.setTimeStamp(0.6693306164708357);
    msg.setSource(24229U);
    msg.setSourceEntity(116U);
    msg.setDestination(33439U);
    msg.setDestinationEntity(11U);
    msg.id = 178U;

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
    msg.setTimeStamp(0.8317524124849832);
    msg.setSource(48796U);
    msg.setSourceEntity(228U);
    msg.setDestination(24974U);
    msg.setDestinationEntity(244U);
    msg.op = 211U;
    msg.list.assign("SYEXPSSOYJQQFSWTUYAVVDVNGAFNZXIGHQUPEQCLLTDZMWVWZSGJIDWPUMJREBSTFKLPXVRSBQIGQLIXOOGBSHHCKCLXNDCXZJXHTPUJKXAVMVKKOBBOGQFCZKSZUSDNMWWRMMHRVDAUYN");

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
    msg.setTimeStamp(0.7391024517740418);
    msg.setSource(7091U);
    msg.setSourceEntity(215U);
    msg.setDestination(3007U);
    msg.setDestinationEntity(204U);
    msg.op = 95U;
    msg.list.assign("MSYISUAALHYWEUIFJKIJMVWRTPAAZLURIVKKOEKHIBCQRTKJDNBXUEQDTLNCWMEUTRK");

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
    msg.setTimeStamp(0.5721396541610163);
    msg.setSource(39471U);
    msg.setSourceEntity(216U);
    msg.setDestination(19603U);
    msg.setDestinationEntity(163U);
    msg.op = 212U;
    msg.list.assign("MHEPGWFDROUISWIIEQGPNPXUBDDKYBUKDFJNOTYFUTEKMSOLWCOKJCWHQAQZYVUFAQDRJNXNXVSXRPRJOGBHVIYJCSAHBLQIXKTTKZSCUVOTTCXTZPKININLFYJUWSRRABRCCPILGKZGYVRYZUMDEXGCVHIETMYMRDMVVZWACSFPJPFPXDBZ");

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
    msg.setTimeStamp(0.6951446873442207);
    msg.setSource(32716U);
    msg.setSourceEntity(201U);
    msg.setDestination(27289U);
    msg.setDestinationEntity(64U);
    msg.value = 42U;

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
    msg.setTimeStamp(0.08819400845763181);
    msg.setSource(39186U);
    msg.setSourceEntity(44U);
    msg.setDestination(38012U);
    msg.setDestinationEntity(183U);
    msg.value = 180U;

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
    msg.setTimeStamp(0.3602969014861096);
    msg.setSource(19263U);
    msg.setSourceEntity(71U);
    msg.setDestination(5765U);
    msg.setDestinationEntity(123U);
    msg.value = 178U;

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
    msg.setTimeStamp(0.07829546850746061);
    msg.setSource(48444U);
    msg.setSourceEntity(229U);
    msg.setDestination(21329U);
    msg.setDestinationEntity(163U);
    msg.consumer.assign("BRSTUUZYVXVTJHBKYDKEBUJCSVKGIRILLDFQRIMNTLGWVLYTEJWSMENETVPWSZZYAEQWJGDAAGWZYFXPLANNKFPF");
    msg.message_id = 17446U;

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
    msg.setTimeStamp(0.5797739245264791);
    msg.setSource(24266U);
    msg.setSourceEntity(90U);
    msg.setDestination(22494U);
    msg.setDestinationEntity(131U);
    msg.consumer.assign("CEZBECDVZSAHZCPVFMMFCUPPXVGJGKKARTSTNLXDSTYOHXZBGVRTDKFIXWPUUWXNPDNJIDJRFUBMCQGTDGQEPINLLWOZQNRXLYKEFJRWUGZYWQANCOJSBECSMKQSGYIOBAPLKHBDVEHJAMUMVCBFUHBIHNDIERISOPFROGODETLAKXPMZWNEUKRKJTYSSYVQWGSJWAIWOOTBHIQLXFAZUBXQYETMFCRYMNVHYVKVJALTCQL");
    msg.message_id = 51360U;

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
    msg.setTimeStamp(0.13786860315812177);
    msg.setSource(59985U);
    msg.setSourceEntity(108U);
    msg.setDestination(22011U);
    msg.setDestinationEntity(209U);
    msg.consumer.assign("RXXYYLOPEDOKLEDQNJDOTWHUZSZQARCGXSKCKGHZWIKTCVLHPDMCFKBKFNIOIUXNLQFJBHJIJYWEDFCCVWKBYAZVQTAYFRWWBRPYIGWVPRRPXBJMFZMYISYD");
    msg.message_id = 49928U;

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
    msg.setTimeStamp(0.4115181430030431);
    msg.setSource(65330U);
    msg.setSourceEntity(123U);
    msg.setDestination(2374U);
    msg.setDestinationEntity(1U);
    msg.type = 5U;

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
    msg.setTimeStamp(0.9342441218105871);
    msg.setSource(15422U);
    msg.setSourceEntity(23U);
    msg.setDestination(25154U);
    msg.setDestinationEntity(208U);
    msg.type = 116U;

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
    msg.setTimeStamp(0.6335395078560104);
    msg.setSource(27989U);
    msg.setSourceEntity(23U);
    msg.setDestination(52188U);
    msg.setDestinationEntity(230U);
    msg.type = 80U;

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
    msg.setTimeStamp(0.08721673869892088);
    msg.setSource(47061U);
    msg.setSourceEntity(226U);
    msg.setDestination(132U);
    msg.setDestinationEntity(37U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.3657412402908615);
    msg.setSource(35614U);
    msg.setSourceEntity(143U);
    msg.setDestination(49246U);
    msg.setDestinationEntity(88U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.23780261380759393);
    msg.setSource(8822U);
    msg.setSourceEntity(111U);
    msg.setDestination(16181U);
    msg.setDestinationEntity(250U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.7275815182906731);
    msg.setSource(48557U);
    msg.setSourceEntity(17U);
    msg.setDestination(50103U);
    msg.setDestinationEntity(199U);
    msg.total_steps = 121U;
    msg.step_number = 132U;
    msg.step.assign("IAHTGDJWWXRSILPDIHNOEBKVKRYVYAULQMMVGVZJLUZQAHTUNPVNCYNRVGSFHGTDMEXVKCKMMMVPYMTWDJKPKQPDRSIARJCXWGBFAYCAPLHBZUZCEXSCRZFMGPNEOISEJXLCRAPAKWDIXOAEWFDSTWKBLSNHYNZQQOKFQUFBOFNYWSJOEBLTHWLRQQXXJGXENVOBTSPIXFJHUTZCJZADGMWHPRJZUIHCQCUIOFYB");
    msg.flags = 126U;

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
    msg.setTimeStamp(0.44587985599480673);
    msg.setSource(46211U);
    msg.setSourceEntity(173U);
    msg.setDestination(42511U);
    msg.setDestinationEntity(236U);
    msg.total_steps = 193U;
    msg.step_number = 137U;
    msg.step.assign("OKZLQXHSOZJJTNWXKEJIRRAZMFVSDXQNBAMCPVEYREXCEFHYHOHJIWONSNPVMZGUUIDRQGQHAFHEPWGIOHGCLNYUBLQWQTRUQBZRTVOITVGKYDYEJWBZMUOBYKXKASFG");
    msg.flags = 252U;

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
    msg.setTimeStamp(0.8981556324364959);
    msg.setSource(22456U);
    msg.setSourceEntity(36U);
    msg.setDestination(10476U);
    msg.setDestinationEntity(232U);
    msg.total_steps = 31U;
    msg.step_number = 113U;
    msg.step.assign("AWDADKIGJKEJRCPLBSESVKNRMMNYVNAXRTDBREGFDPQSSKWUJELWVAHRDVKQRLZGOTBRFGZKTTFQKOHOSWNIUUIBDTZCXCJVJFYPARXLGJTGVYWMDMKXSETPFLVGHJJYZGIHCQAJXLXUCBFPSSVPTIBBYBIDHBQVTBOAHWMZTGXMIFAREQFJPLYQNPKCOYZKQOOEXYEHPXLUUWWRSNIUCMZ");
    msg.flags = 30U;

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
    msg.setTimeStamp(0.3413503925926521);
    msg.setSource(63595U);
    msg.setSourceEntity(163U);
    msg.setDestination(60918U);
    msg.setDestinationEntity(230U);
    msg.state = 179U;
    msg.error.assign("CKVPYDCFYMGHIWHAYEUMPQEZNBZQNCLQGGUBMJFFVGSIWCYUJCMAXOWXXDSIBGNNTTDRSORLDQJMCMQGVIUOTJFIWVDLWAQYPNJDIXJZNBTNYSNTJXFXKWVKHZZLOUGDQHESAHI");

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
    msg.setTimeStamp(0.862932694339365);
    msg.setSource(30579U);
    msg.setSourceEntity(118U);
    msg.setDestination(30886U);
    msg.setDestinationEntity(107U);
    msg.state = 13U;
    msg.error.assign("SWXZZIOHAPCHJEDGLURHPGPOMLVOFYERLQREFTASVUNVQLPYKUBSYONXITKXCYGZFGTQKENAIXZCOMVGIAWLWTJMUDCWOFLMHMPF");

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
    msg.setTimeStamp(0.44352521400170497);
    msg.setSource(35819U);
    msg.setSourceEntity(75U);
    msg.setDestination(44527U);
    msg.setDestinationEntity(94U);
    msg.state = 28U;
    msg.error.assign("BHCUXEJLMKQLNGTAHIWCYCKVPUTRIHKEZEDPBKASLRUBBQMMKCHKKHUFOZXXRFDFDOAZZVPDRASJGZNNNCWNHEFXJOSXUWSWMCCAJAZOLCGZFTJYONMGEBPTHYONVL");

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
    msg.setTimeStamp(0.29777442569238555);
    msg.setSource(56546U);
    msg.setSourceEntity(129U);
    msg.setDestination(40653U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.38982666776154984);
    msg.setSource(4891U);
    msg.setSourceEntity(113U);
    msg.setDestination(19429U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.33899760381575383);
    msg.setSource(31597U);
    msg.setSourceEntity(159U);
    msg.setDestination(55897U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.02341785811692909);
    msg.setSource(44366U);
    msg.setSourceEntity(113U);
    msg.setDestination(12669U);
    msg.setDestinationEntity(202U);
    msg.op = 15U;
    msg.speed_min = 0.11173042503500441;
    msg.speed_max = 0.3120736879606796;
    msg.long_accel = 0.326053390062664;
    msg.alt_max_msl = 0.9507436239358069;
    msg.dive_fraction_max = 0.7132083343399542;
    msg.climb_fraction_max = 0.44296788505683293;
    msg.bank_max = 0.5849705613001089;
    msg.p_max = 0.41836971386557786;
    msg.pitch_min = 0.2055890917791251;
    msg.pitch_max = 0.5851412272314411;
    msg.q_max = 0.06344495296122077;
    msg.g_min = 0.7353564095739111;
    msg.g_max = 0.9337194840581897;
    msg.g_lat_max = 0.1676688519823093;
    msg.rpm_min = 0.003091014586954488;
    msg.rpm_max = 0.7008541393842674;
    msg.rpm_rate_max = 0.9518987535733683;

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
    msg.setTimeStamp(0.5295942983411793);
    msg.setSource(20726U);
    msg.setSourceEntity(10U);
    msg.setDestination(21868U);
    msg.setDestinationEntity(61U);
    msg.op = 127U;
    msg.speed_min = 0.6074114692410727;
    msg.speed_max = 0.3566852705996113;
    msg.long_accel = 0.2994280892049471;
    msg.alt_max_msl = 0.017760759050543085;
    msg.dive_fraction_max = 0.217104646982476;
    msg.climb_fraction_max = 0.31563339696086135;
    msg.bank_max = 0.3168522193412958;
    msg.p_max = 0.19424609424163441;
    msg.pitch_min = 0.031957314303698414;
    msg.pitch_max = 0.4953661270278914;
    msg.q_max = 0.8017158409145226;
    msg.g_min = 0.840762622469454;
    msg.g_max = 0.0905443054293329;
    msg.g_lat_max = 0.9198045651877127;
    msg.rpm_min = 0.33925915575626997;
    msg.rpm_max = 0.8394493008409243;
    msg.rpm_rate_max = 0.494890724628264;

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
    msg.setTimeStamp(0.3340056160967949);
    msg.setSource(23483U);
    msg.setSourceEntity(236U);
    msg.setDestination(58659U);
    msg.setDestinationEntity(94U);
    msg.op = 100U;
    msg.speed_min = 0.010744841950096506;
    msg.speed_max = 0.545261695021721;
    msg.long_accel = 0.29240152497013006;
    msg.alt_max_msl = 0.35335033791679793;
    msg.dive_fraction_max = 0.5701306429498717;
    msg.climb_fraction_max = 0.024601324243734846;
    msg.bank_max = 0.7069192468144894;
    msg.p_max = 0.36021773914503685;
    msg.pitch_min = 0.7774716912565262;
    msg.pitch_max = 0.8183794600339248;
    msg.q_max = 0.5945789739199528;
    msg.g_min = 0.5400979866267143;
    msg.g_max = 0.17428193359237465;
    msg.g_lat_max = 0.8365798900110742;
    msg.rpm_min = 0.98199235017971;
    msg.rpm_max = 0.9280516067086767;
    msg.rpm_rate_max = 0.5012653822748534;

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
    msg.setTimeStamp(0.01693463776495696);
    msg.setSource(64170U);
    msg.setSourceEntity(155U);
    msg.setDestination(4351U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.9738572947133826);
    msg.setSource(42443U);
    msg.setSourceEntity(89U);
    msg.setDestination(12651U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.7303214077540079);
    msg.setSource(53775U);
    msg.setSourceEntity(199U);
    msg.setDestination(30206U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.9109122095465478);
    msg.setSource(3906U);
    msg.setSourceEntity(47U);
    msg.setDestination(5262U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.37286744838343067;
    msg.lon = 0.5639714303025015;
    msg.height = 0.39881301771348165;
    msg.x = 0.7830111986959288;
    msg.y = 0.4862949339256687;
    msg.z = 0.9868976824420617;
    msg.phi = 0.13831740440587548;
    msg.theta = 0.06423581705666026;
    msg.psi = 0.8022183068856323;
    msg.u = 0.9201615820763736;
    msg.v = 0.20975172359327465;
    msg.w = 0.02765698120965021;
    msg.p = 0.34092711887131444;
    msg.q = 0.029207251489620112;
    msg.r = 0.11758219928295832;
    msg.svx = 0.7292333961203041;
    msg.svy = 0.24520458751921204;
    msg.svz = 0.6713907075740014;

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
    msg.setTimeStamp(0.6632772669789763);
    msg.setSource(16614U);
    msg.setSourceEntity(201U);
    msg.setDestination(22084U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.9786252482396441;
    msg.lon = 0.14114662483744211;
    msg.height = 0.5482946375083498;
    msg.x = 0.03394725961877276;
    msg.y = 0.6801276693860836;
    msg.z = 0.9846224784961843;
    msg.phi = 0.618270106609065;
    msg.theta = 0.6462957135399431;
    msg.psi = 0.9656241816641882;
    msg.u = 0.8356312353490231;
    msg.v = 0.8190150738228729;
    msg.w = 0.647907314709948;
    msg.p = 0.25340168066341495;
    msg.q = 0.6318146790540462;
    msg.r = 0.3075342991804818;
    msg.svx = 0.11273619308703742;
    msg.svy = 0.6110857192194439;
    msg.svz = 0.3098346808843344;

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
    msg.setTimeStamp(0.7680240641134304);
    msg.setSource(27077U);
    msg.setSourceEntity(63U);
    msg.setDestination(5524U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.12202679141437245;
    msg.lon = 0.7014674421702386;
    msg.height = 0.7823685790606079;
    msg.x = 0.9431741899470969;
    msg.y = 0.7907025438883232;
    msg.z = 0.6128491536428138;
    msg.phi = 0.44497156842592034;
    msg.theta = 0.007041188827708322;
    msg.psi = 0.20913539530712955;
    msg.u = 0.3529796753191434;
    msg.v = 0.3756274478856463;
    msg.w = 0.0812202612324332;
    msg.p = 0.6725429044656509;
    msg.q = 0.5713913884048362;
    msg.r = 0.7850189350323268;
    msg.svx = 0.5594219862860343;
    msg.svy = 0.7091365165521825;
    msg.svz = 0.961794282013577;

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
    msg.setTimeStamp(0.35317626010240677);
    msg.setSource(37559U);
    msg.setSourceEntity(143U);
    msg.setDestination(39457U);
    msg.setDestinationEntity(124U);
    msg.op = 211U;
    msg.entities.assign("SVFCPFGLPKOJXMQOKIBMIHGVYBQHZHPTLCYFSOGIRHPRSWYVJQHXDZPBPVMADFRXVXAKBLVDMNKMEMESZIOHMKZTQGUDCAKAFNVKGXJGWBLRVSLBBSJPE");

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
    msg.setTimeStamp(0.0818042680157639);
    msg.setSource(5059U);
    msg.setSourceEntity(33U);
    msg.setDestination(41283U);
    msg.setDestinationEntity(200U);
    msg.op = 227U;
    msg.entities.assign("COFVEBAXORVVGPRKKXXFKLSAKOVCFWGWPQHGJJVEGFQCAUPNNLMNRZTUUEEYJMAMGSLNKUPZIOSBUFIBZZYCSWDICWBDEPPHERRJWSGRHCVOTTNKJMCZRMSMCYOXPLZURBFBKYTYLVVPKBMMFLIYTIVIYSINAPALHGWOZAWDJAMKHHGHZLDIPDQGBQJLTREQNXNNQYRJFZSOJVHWGWXTZDEJCXSTYSXUTYDUEIDQBHFO");

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
    msg.setTimeStamp(0.5410967410939734);
    msg.setSource(40745U);
    msg.setSourceEntity(92U);
    msg.setDestination(20119U);
    msg.setDestinationEntity(133U);
    msg.op = 228U;
    msg.entities.assign("PGNZATDCSQFEAKYKSPPTRTEKPBFJOBUPPEVXBOMSCNEZSNHWATKHCRMIWUJVTOAEQUXWDOVGYOTLVWIYBMCQRIHLVHCTISUAZSAUZKLL");

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
    msg.setTimeStamp(0.8462674860778308);
    msg.setSource(38018U);
    msg.setSourceEntity(204U);
    msg.setDestination(10859U);
    msg.setDestinationEntity(155U);
    msg.type = 254U;
    msg.speed = 20021U;
    const signed char tmp_msg_0[] = {105, -46, -35, 7, -100, -86, -60, 63, 62, 117, 80, 125, 70, 47, -128, 100, 38, 66, -53, -54, 66, -83, -39, -21, -119, -84, -122, 26, 0, -6, -64, 101, 6, -74, 118, 5, -103, 43, -67};
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
    msg.setTimeStamp(0.32036843704337736);
    msg.setSource(64501U);
    msg.setSourceEntity(169U);
    msg.setDestination(50716U);
    msg.setDestinationEntity(156U);
    msg.type = 252U;
    msg.speed = 22048U;
    const signed char tmp_msg_0[] = {104, 98, 3, -16, 54, 57, -111, 28, 20, -91, -117, 126, 85, 122, 10, -23, 76, -115, -113, 63, 60, -39, 71, -30, -54, 48, 37, 126, -58, -6, -33, -107, -23, 17, -80, -37, 16, 76, 13, 2, -39, -18, 52, -85, 96, 53, -123, 106, -80, 71, 55, 124, -118, -111, -33, 21, -6, -89, 52, -83, 85, 29, -16, -91, 116, -114, -45, 45, 26, -119, -46, -20, 69, 124, -99, 37, -92, -32, 1, 65, -52, -13, -68, 32, 33, -124, -59, -95, -95, 119, -50, -35, -1, -64, 61, 112, -38, -105, 120, -62, -7, 29, 123, -67, 12, 106, 16, 57, 16, -50, 94, -61, -78, -32, -89, -123, 29, 86, -91, -58, -21, -24, -119, -126, 59, -38, -106, -40, -68, 28, -48, 102, -77, -73, -106, 46, 91, -105, 122, -122, -107, 87, 101, 109, 65, 102, -68, 5, 41, -91, -34, 30, -70, 116, -54, 38, -58, 79, -72, 114, -91, 83, 12, -74, -83, -33, -71, 62, -116, -16, 16, 108, -43, 106, 16, -108, -16, -35, -54, 37, -111, 100, 48, 54, -85, 55, -86, 88, -14, 17, 11, 97, -67, -39, -101, -94, 26, -16, 9, -59, 15, 79, -54, -100, 89, -79, 0, -30, -12, 76, -88, 121, 27, -76, 32, 27, 108, 106, 31, -76, -110, 27, -76, 115};
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
    msg.setTimeStamp(0.2589251371361124);
    msg.setSource(19563U);
    msg.setSourceEntity(65U);
    msg.setDestination(22910U);
    msg.setDestinationEntity(8U);
    msg.type = 39U;
    msg.speed = 54641U;
    const signed char tmp_msg_0[] = {-92, -33, -86, 2, 125, 65, 122, 54, -2, 59, -65, -101, 88, -116, 26, -67, 103, -32, -101, -54, -42, 23, 58, -35, 4, -33, 60, -127, 102, 125, -32, -76, 19, 91, -53, -83, -109, -108, -21, 67, 125, 80, 15, 8, 79, -128, -79, -110, 64, -64, 96, 86, -29, 97, -69, -49, -88, 56, 0, -117, 26, -103, 88, -126, -108, -52, -29, -9, 116, -103, 85, 92, -7, 79, -68, 117, 15, 74, 111, 39, -58};
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
    msg.setTimeStamp(0.39821079519279257);
    msg.setSource(16542U);
    msg.setSourceEntity(120U);
    msg.setDestination(40038U);
    msg.setDestinationEntity(147U);
    msg.op = 156U;
    msg.tas2acc_pgain = 0.1871525710614338;
    msg.bank2p_pgain = 0.7965033284668834;

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
    msg.setTimeStamp(0.7755645669087347);
    msg.setSource(15956U);
    msg.setSourceEntity(3U);
    msg.setDestination(59813U);
    msg.setDestinationEntity(244U);
    msg.op = 61U;
    msg.tas2acc_pgain = 0.8433659497797724;
    msg.bank2p_pgain = 0.2975522701797999;

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
    msg.setTimeStamp(0.6760705361320658);
    msg.setSource(9863U);
    msg.setSourceEntity(249U);
    msg.setDestination(59845U);
    msg.setDestinationEntity(222U);
    msg.op = 72U;
    msg.tas2acc_pgain = 0.4606601746816953;
    msg.bank2p_pgain = 0.5342808570817595;

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
    msg.setTimeStamp(0.9907318095324007);
    msg.setSource(22169U);
    msg.setSourceEntity(227U);
    msg.setDestination(61095U);
    msg.setDestinationEntity(69U);
    msg.available = 1016901585U;
    msg.value = 200U;

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
    msg.setTimeStamp(0.4796976367362854);
    msg.setSource(20555U);
    msg.setSourceEntity(165U);
    msg.setDestination(17183U);
    msg.setDestinationEntity(160U);
    msg.available = 865562690U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.9664958122884897);
    msg.setSource(50262U);
    msg.setSourceEntity(253U);
    msg.setDestination(33727U);
    msg.setDestinationEntity(178U);
    msg.available = 146961689U;
    msg.value = 162U;

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
    msg.setTimeStamp(0.8654012570673766);
    msg.setSource(33411U);
    msg.setSourceEntity(227U);
    msg.setDestination(62770U);
    msg.setDestinationEntity(72U);
    msg.op = 47U;
    msg.snapshot.assign("VYODSUXGYPWOHHEZVEJQGCBYJVSNRWUKWZOWOKZXIYXCZCQRLTKDUJNJWRNCIWRKFPOMXVMQNBQRINEASQXNIORQZDEHQGBORTCPDVWYMBPEAYSGPNLMTCQPGSYMTCZFZDVYPNUNBHBSSRIQMOHDFLLXAWBKXTIEOTLQKZDFKHJFCGZSAXAHGPRFHMLGFDNCJYWBUAPAUIXBJWIVLRLUFHLEZSDGAMHLKKJFEJCIDIMAMJUBVTT");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8751591032297605;
    tmp_msg_0.lon = 0.19900598387805835;
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
    msg.setTimeStamp(0.7356144905340478);
    msg.setSource(50009U);
    msg.setSourceEntity(126U);
    msg.setDestination(57782U);
    msg.setDestinationEntity(38U);
    msg.op = 218U;
    msg.snapshot.assign("RAXQHCSZEAUDJPVNJYXNTQOIPCTSEMGYCKSPYRRAQJB");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.9658577553206936;
    tmp_msg_0.x = 0.8276687352661918;
    tmp_msg_0.y = 0.764600315568197;
    tmp_msg_0.z = 0.36256162020591853;
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
    msg.setTimeStamp(0.8896843998501399);
    msg.setSource(36613U);
    msg.setSourceEntity(169U);
    msg.setDestination(13709U);
    msg.setDestinationEntity(44U);
    msg.op = 79U;
    msg.snapshot.assign("LDBWFRVKBUSOPODJVZYGLLRKSZIGYVJXFNJSFRPCGDOIPEJIUWHMBPHXIFPLPNMVUTEPARREFCCSNYYJJKBCIOS");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("MDNINHSHTIQRUYDWVAGFJXBZCURNTAJFQHNRZZAUUCXSXYHKIBPSYSRKEWOFUYFTTVDEHP");
    tmp_msg_0.reference_frame = 189U;
    tmp_msg_0.custom.assign("IFRXIERLADRJBNUWRTOHUPCSGFJCIOKFASSARNTGSJVKXPLRFFZNBZVAPKDGXROJUFLAMLQUCGYEDAXKIHCTNOMXKMACZYENGZITPWXBQQXGYMYKBPTSHUGJBPFMELRJEBAFHSUKVJDWLEGVKIZQQEMFQHZOCU");
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
    msg.setTimeStamp(0.9998019134863231);
    msg.setSource(59746U);
    msg.setSourceEntity(126U);
    msg.setDestination(55462U);
    msg.setDestinationEntity(106U);
    msg.op = 48U;
    msg.name.assign("QUMREOOCJACWTZRSGHQDVARHAQLDJKPLNPGADXGGFEIBKXMTKPKKINQBZHEIVGRZASNFRZEBLSNWHFSKSIICZXMVYIJLERLDQLCRHVNSYPALVFCYXMXNPJUNJTBQAGHOOMNSKWSTGTVWJMCSBOTLHRUXACEZERCODQFTLQOVYUJXAJLDPPBMKDFKYDMJOQPYVDFGEXWCGOBMWCWUTIBHOZDIHUZPRVITZYWESXWYVFTBKMZNBXUIHAUPYUF");

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
    msg.setTimeStamp(0.09410507370038002);
    msg.setSource(41848U);
    msg.setSourceEntity(47U);
    msg.setDestination(9257U);
    msg.setDestinationEntity(119U);
    msg.op = 20U;
    msg.name.assign("AWFRMMTCFNWIPZDORKGSZSAZPEFAVOCQJDYHEDCVHKRQDYGUIKTQSTLJHJPAXXHJOUDOZVXXTMVYGRSLWDUVAQDMACOIFWTKSECXPYBEJVAKMHYWGGZIYWFUOYTUMOSIXCCFJCEZPKWAMBYVNSNSCJHGALHPTLBPQLNXNOBWILCJWHKQXOQHDXKWDSQVBBFRBZFNPGFRRUUTNUPKGSY");

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
    msg.setTimeStamp(0.12584688613942108);
    msg.setSource(23891U);
    msg.setSourceEntity(166U);
    msg.setDestination(5748U);
    msg.setDestinationEntity(218U);
    msg.op = 99U;
    msg.name.assign("ZACZOUDWQMGLCNHLBYHVNRQJBZUOFBZIQWIMBFSPUNHCYLFYKTZFJGOTNCVZSQBIHVVCPYUTDXGIEAVZL");

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
    msg.setTimeStamp(0.9890352751706016);
    msg.setSource(30105U);
    msg.setSourceEntity(173U);
    msg.setDestination(39760U);
    msg.setDestinationEntity(226U);
    msg.type = 165U;
    msg.htime = 0.7919757181540211;
    msg.context.assign("TJNJHOCYXITQQANQDHPXYZULBALWHGTCACFCMAKBEQXGGNGQRCISHFQOHETLDMXUVDJVAUBVJHDZOJGKSFJDLWFUOPFKRRKYAIEGSDSPHIBUEJZWCIOVHPUOYPGGNVVS");
    msg.text.assign("QKHJMWGEAWXRYHOBVZOKKSVCHZUWDSCGKLIRKGDSIHDJFSUAXWISCQLLUVFYCYSJLVMDJQPHLIUTGNVDDGOFVLFXOYMFPMMVPLPNBLSIPKVMYDCCR");

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
    msg.setTimeStamp(0.1977430554175944);
    msg.setSource(3417U);
    msg.setSourceEntity(236U);
    msg.setDestination(33345U);
    msg.setDestinationEntity(145U);
    msg.type = 198U;
    msg.htime = 0.49365204900141646;
    msg.context.assign("USFKXPBTIOLUUFZNODSVDFSATVIMYIZKTOKVMTLIKRAHRCIXLMIJBWVFSWESGSGDGUBANOMHYCEMVPQUBCWJSRPBUAKDZFWCDZONLPWPQREQXYKRFNSRPGYXJUXPUAJDGVEJYJNYTASBAQNGHCKTORNOKFDPOMGXKEORMSWIWGCZLFEQVZHHUQPZWNDDXEHYZEZFCMMALNEBYYYRQ");
    msg.text.assign("HJOMPOYEWGXGXWECFCVMFKJZOFUUBZWJMKXEAPZYJMOVRZQOTDXGLSEVCJSGIVRQKUWGLCYSNXDUEOZYPSYCKYDQTFZXAERZDSBN");

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
    msg.setTimeStamp(0.7251711996026307);
    msg.setSource(50426U);
    msg.setSourceEntity(93U);
    msg.setDestination(48953U);
    msg.setDestinationEntity(78U);
    msg.type = 84U;
    msg.htime = 0.532035822242149;
    msg.context.assign("ERJVHTJBUYMCKLUOQFXWTUFUJUYPGDUOOFBIAVNYZWGHLYJKQ");
    msg.text.assign("WYVZZKQWQVZUYKELSPRPARAQKAOHHOVLFBUXKOBGNLVURDH");

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
    msg.setTimeStamp(0.6351056243761593);
    msg.setSource(34862U);
    msg.setSourceEntity(236U);
    msg.setDestination(57849U);
    msg.setDestinationEntity(152U);
    msg.command = 158U;
    msg.htime = 0.6957916945448616;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 132U;
    tmp_msg_0.htime = 0.29823656555194666;
    tmp_msg_0.context.assign("VNXNVFYQADAKKQVPXGASKNGBBOILWUEJDITKYXULOTGJLXCQHFZMBACMERZZBXFZOZLRABQJFGYDRPVWBZLXOYGDCSMPFMOCWPZTQYXGIJRKWQVXZZCSFBJTRUNAWYLRKATXISBEJMNKHEHMTHCHZPUWDVFUP");
    tmp_msg_0.text.assign("KKBWIORXSVZVJFIHGVBSTFNG");
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
    msg.setTimeStamp(0.6220402926420504);
    msg.setSource(21794U);
    msg.setSourceEntity(151U);
    msg.setDestination(15231U);
    msg.setDestinationEntity(63U);
    msg.command = 51U;
    msg.htime = 0.19772773049247871;

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
    msg.setTimeStamp(0.6098548007078878);
    msg.setSource(64553U);
    msg.setSourceEntity(66U);
    msg.setDestination(54893U);
    msg.setDestinationEntity(45U);
    msg.command = 74U;
    msg.htime = 0.6375314435693004;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 182U;
    tmp_msg_0.htime = 0.9203645139932736;
    tmp_msg_0.context.assign("CTTVDJBULDSMOKWURLNZPFVXQRQPIPSWVMCOIUJHMKGVIFOWWZVTRDTLQFOKGXRVVMYREKAINJHPYOMILHNKVTCEBCTBUQTLSFGAACRKOEJOQPZWHJLXNEBAIOEZCVHRKAUZEIDZUYNZFFGFJGNGSKDXNRPYGPJYFTNIYKCSYHXXDEGQDSRSHBMWPWHMOSHBADUBTRHPLSQVOXIQ");
    tmp_msg_0.text.assign("JWLVSPQABLMAKEPWWIRFPUEUHRRTPOIGRACZAGLFHOBYSMZSNSHDQKKATWBPSMNSKCEYX");
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
    msg.setTimeStamp(0.19247758582831587);
    msg.setSource(11727U);
    msg.setSourceEntity(216U);
    msg.setDestination(1895U);
    msg.setDestinationEntity(78U);
    msg.op = 230U;
    msg.file.assign("JJMPBZHLLVRMKMMPWCJGJTGHSMUZICLTLQVSJMPJFCWOENGCWKUUSUTBGDZHAFOQVFUAXWFLDQQEFYHGYELFWYJUEHFQSVBHAIZQVTWVWEIDOCYRZYJLRBOONNOZXIHEKASXSGNDYTNZPUKCIMUAIXRMCHNKHOJFQKAOBTP");

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
    msg.setTimeStamp(0.4534406633938409);
    msg.setSource(4563U);
    msg.setSourceEntity(43U);
    msg.setDestination(18602U);
    msg.setDestinationEntity(244U);
    msg.op = 136U;
    msg.file.assign("WMSSREQUNNZDTQLFZBFOCLDVDZXPOLHZTRDCMCDBRLQOEJIUGUYXFXLPKRCZFLTWNHVIQITXJHHISQTKGLMKFANMGAHYHROGMSXKRRUGEYTKPIBPZKQSTEANJESNTJQOYDWEXPPWVIAFDNUMBJKDAQOCHZWCGMWVGFZYJWAFOKYCEAPPUDABCEKJMEXWSZT");

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
    msg.setTimeStamp(0.1552200392406874);
    msg.setSource(4930U);
    msg.setSourceEntity(78U);
    msg.setDestination(33184U);
    msg.setDestinationEntity(89U);
    msg.op = 183U;
    msg.file.assign("BISNNHODFFUOHHIPGNGFPHSCTDWLLEBDAROARZFCYXQOMCJGJAIPMWYPSZVJXKRQQRMWBSTDJJKGEMONFVLLUHXLTGXOPJWEYSPTUGUKIFCOXKPJMEJWVRDKUGQUDAZWSHQSFDXVKBAXCVRHILINLNOSEIMEYMUQVLKEPOQZCQGYCBYAJFZBKIYBMVBUWPFWXZTNASTZDDNZYCMLWUBPZYGHENACRTHRQRXFLETTEYBQKIDWOVUVNKTS");

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
    msg.setTimeStamp(0.8529149357435694);
    msg.setSource(27403U);
    msg.setSourceEntity(13U);
    msg.setDestination(65404U);
    msg.setDestinationEntity(254U);
    msg.op = 185U;
    msg.clock = 0.35953806358529483;
    msg.tz = 26;

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
    msg.setTimeStamp(0.23077956294804747);
    msg.setSource(23377U);
    msg.setSourceEntity(92U);
    msg.setDestination(35223U);
    msg.setDestinationEntity(219U);
    msg.op = 228U;
    msg.clock = 0.8965648179141973;
    msg.tz = -4;

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
    msg.setTimeStamp(0.9531942171230955);
    msg.setSource(52133U);
    msg.setSourceEntity(6U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(165U);
    msg.op = 91U;
    msg.clock = 0.060001412576611846;
    msg.tz = -31;

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
    msg.setTimeStamp(0.44347020866395226);
    msg.setSource(17637U);
    msg.setSourceEntity(20U);
    msg.setDestination(34802U);
    msg.setDestinationEntity(47U);
    msg.conductivity = 0.6438265000124715;
    msg.temperature = 0.45415027885625403;
    msg.depth = 0.6271299851985758;

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
    msg.setTimeStamp(0.20462158474324676);
    msg.setSource(4349U);
    msg.setSourceEntity(42U);
    msg.setDestination(4667U);
    msg.setDestinationEntity(23U);
    msg.conductivity = 0.34659557652106143;
    msg.temperature = 0.38548376343553625;
    msg.depth = 0.8419362918244193;

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
    msg.setTimeStamp(0.7727980094649172);
    msg.setSource(26279U);
    msg.setSourceEntity(19U);
    msg.setDestination(3780U);
    msg.setDestinationEntity(122U);
    msg.conductivity = 0.7683828549240252;
    msg.temperature = 0.20080148847015167;
    msg.depth = 0.24475822925047597;

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
    msg.setTimeStamp(0.7212813855225437);
    msg.setSource(12212U);
    msg.setSourceEntity(94U);
    msg.setDestination(6747U);
    msg.setDestinationEntity(234U);
    msg.altitude = 0.9837658158540851;
    msg.roll = 31860U;
    msg.pitch = 21384U;
    msg.yaw = 21553U;
    msg.speed = 16679;

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
    msg.setTimeStamp(0.9708915925267081);
    msg.setSource(49286U);
    msg.setSourceEntity(127U);
    msg.setDestination(44996U);
    msg.setDestinationEntity(188U);
    msg.altitude = 0.08649011062827883;
    msg.roll = 9483U;
    msg.pitch = 3540U;
    msg.yaw = 59846U;
    msg.speed = 10979;

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
    msg.setTimeStamp(0.9447853389295158);
    msg.setSource(21643U);
    msg.setSourceEntity(30U);
    msg.setDestination(14676U);
    msg.setDestinationEntity(168U);
    msg.altitude = 0.8423458047162466;
    msg.roll = 53882U;
    msg.pitch = 53901U;
    msg.yaw = 19353U;
    msg.speed = -29913;

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
    msg.setTimeStamp(0.7177730222770388);
    msg.setSource(54625U);
    msg.setSourceEntity(156U);
    msg.setDestination(6983U);
    msg.setDestinationEntity(6U);
    msg.altitude = 0.6524705822552007;
    msg.width = 0.15983922044898924;
    msg.length = 0.022649614092021375;
    msg.bearing = 0.4666086295223514;
    msg.pxl = 22333;
    msg.encoding = 118U;
    const signed char tmp_msg_0[] = {63, 116, 111, 59, 66, 63, 86, -13, 42, 109, -16, 34, -95, -33, -68, -9, -98, -55, 26, -125, -48, -8, 77, 66, -58, -107, 7, 15, 65, -12, -45, 34, 101, -65, -70, -57, -88, 82, 56, -93, -6, -118, -82, -9, -85, -7, 62, -88, -51, -44, -109, -103, -75, -22, -104, -70, -41, -22, 13, -53, 48, -101, 36, -5, -115, -115, -112, -12, 125, -103, 110, -45, 71, 4, 78, 9, 52, 109, 115, 122, -95, 108, 97, 111, -14, 95, 106, -88, 70, 83, -122, -54, 18, 18, -92, -20, 36, 51, 94, 26, -46, 86, 35, -124, -31, 86, 106, 28, 118, -83, 66, 111, -31, -72, 14, -9, 110, -51, 78, 81, -25, -48, 81, 59, 30, -73, 18, -80, 103, -123, -27, -80, -57, 122, 36, -16, -62, -68, 90, -3, 64, -89, 12, 69, 122, 8, 123, 45, 36, 64, -103, -30, 81, 94, 67, 122, -107, 10, -117, -24, -19, 82, 98, 108, 29, 53, -21, 15, 93, -39, 77, 103, -77, 75, -127, 68, -38, -110, -32, 103, 77, 24, -42, 85, 56, -9, -110, -105, -75, 56, 25, 85, -24, 34, 55, -39, 8, -74, -58, 94, -117, 75, -86, -44, 92, -71, -58, -31, -83, 56, -75, 106, 45, 2, -84, -79, -36, 5, 33, 81, 88, 52, 22};
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
    msg.setTimeStamp(0.01967521763866653);
    msg.setSource(34384U);
    msg.setSourceEntity(70U);
    msg.setDestination(65356U);
    msg.setDestinationEntity(254U);
    msg.altitude = 0.1623093462811257;
    msg.width = 0.3924851163137896;
    msg.length = 0.7266485991331193;
    msg.bearing = 0.4499941283937402;
    msg.pxl = 21307;
    msg.encoding = 173U;
    const signed char tmp_msg_0[] = {-70, -68, -45, 49, 13, -61, 55, -71, -7, 74, 95, -17, 94, -62, -31, -7, -104, -69, 50, 4, -78, 13, -53, 15, -13, -51, 86, 98, 78, 74, 113, -80, 44, -107, -73, -27, 112, -108, 87, 56, 108, 73, -30, -51, 50, -94, -71, 122, 81, -116, -53, -55, 66, -54, 89, 87, -28, 100, 113, 36, -74, -124, 23, 32, 118, -31, -109, 123, 90, -97, 19, -2, -91, 70, -13, 0, -107, -95, -63, -24, -73, 113, 102, -59, -5, -41, -46, 82, 82, -62, 47, 121, 94, -47, 63, -40, -103, 9, 45, -82, 97, 86, 64, 111, -31, 4, -91, 114, 124, -4, 68, 60, -100, -110, -108, 88, -59, 21, 106, 96, 114, -90, 33, -96, 13, -28, -9, 33, -53, -121, -70, -47, -105, 34, -60, 42, -109, 6, -11, 87, 126, -95, 110, -56, -74, -41, 17, -122, -30, 118, -15, 75, 77, 93, 15, 12};
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
    msg.setTimeStamp(0.7009886213027529);
    msg.setSource(9564U);
    msg.setSourceEntity(136U);
    msg.setDestination(28839U);
    msg.setDestinationEntity(184U);
    msg.altitude = 0.028206786152230823;
    msg.width = 0.8772619224729862;
    msg.length = 0.3711666643078704;
    msg.bearing = 0.9081340850507499;
    msg.pxl = -17700;
    msg.encoding = 172U;
    const signed char tmp_msg_0[] = {-94, 97, 17, -52, 0, 102, -123, -83, 63, -95, -91, -121, 11, -76, 126, -33, 41, -16, 75, -92, 43, -46, 80, -127, 76, -19, -110};
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
    msg.setTimeStamp(0.7442219241439989);
    msg.setSource(50575U);
    msg.setSourceEntity(95U);
    msg.setDestination(15208U);
    msg.setDestinationEntity(136U);
    msg.text.assign("QSCVYCVKVJERROJBOFQEANZMEINIWTDJNFKLFIUEXHBQKWKIBACYKLOVQAGHXTDRMLDLYUPZOPLLZEWMFC");
    msg.type = 165U;

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
    msg.setTimeStamp(0.771628707118074);
    msg.setSource(24446U);
    msg.setSourceEntity(197U);
    msg.setDestination(46824U);
    msg.setDestinationEntity(227U);
    msg.text.assign("CXHHUBPAHKBVEI");
    msg.type = 251U;

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
    msg.setTimeStamp(0.5937962984856426);
    msg.setSource(14832U);
    msg.setSourceEntity(34U);
    msg.setDestination(32908U);
    msg.setDestinationEntity(18U);
    msg.text.assign("IJSAYOFEYJMJNWBNUBTGUFCKLAVRYITEYRZSVTQCJFMPEUBVBWGHQCGXWEXFIWDOIXHLHSPVKJLTLZEBOCVMYHSCQRXQVHLMWILNOMQIPGTZVHDCNZWLEENDBOQPUDABPYMZOJDXUARDJGNGCYOIOFTRNYJRGWKVBRKUNHXVIPPPOFDU");
    msg.type = 171U;

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
    msg.setTimeStamp(0.8720887160546921);
    msg.setSource(5054U);
    msg.setSourceEntity(20U);
    msg.setDestination(41553U);
    msg.setDestinationEntity(1U);
    msg.parameter = 123U;
    msg.numsamples = 183U;
    msg.lat = 0.1317571279377323;
    msg.lon = 0.7376311281574366;

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
    msg.setTimeStamp(0.6224842122775206);
    msg.setSource(45411U);
    msg.setSourceEntity(70U);
    msg.setDestination(27559U);
    msg.setDestinationEntity(200U);
    msg.parameter = 122U;
    msg.numsamples = 204U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 28797U;
    tmp_msg_0.avg = 0.5453394086783007;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.2734384396397712;
    msg.lon = 0.3062805386372809;

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
    msg.setTimeStamp(0.29170275406761037);
    msg.setSource(2087U);
    msg.setSourceEntity(221U);
    msg.setDestination(35992U);
    msg.setDestinationEntity(12U);
    msg.parameter = 101U;
    msg.numsamples = 79U;
    msg.lat = 0.9121605729750387;
    msg.lon = 0.34035306218357686;

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
    msg.setTimeStamp(0.6544439707754488);
    msg.setSource(27265U);
    msg.setSourceEntity(60U);
    msg.setDestination(31156U);
    msg.setDestinationEntity(189U);
    msg.depth = 50543U;
    msg.avg = 0.9812970663707954;

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
    msg.setTimeStamp(0.6072769263941341);
    msg.setSource(12880U);
    msg.setSourceEntity(145U);
    msg.setDestination(22962U);
    msg.setDestinationEntity(69U);
    msg.depth = 17660U;
    msg.avg = 0.28190259468567325;

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
    msg.setTimeStamp(0.7021654660094017);
    msg.setSource(15797U);
    msg.setSourceEntity(29U);
    msg.setDestination(24102U);
    msg.setDestinationEntity(177U);
    msg.depth = 49269U;
    msg.avg = 0.9678011202002839;

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
    msg.setTimeStamp(0.16376113020987937);
    msg.setSource(35082U);
    msg.setSourceEntity(74U);
    msg.setDestination(9540U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.2351039749142616);
    msg.setSource(44167U);
    msg.setSourceEntity(39U);
    msg.setDestination(53967U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.13646773853812566);
    msg.setSource(25792U);
    msg.setSourceEntity(112U);
    msg.setDestination(24351U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.7698924402084825);
    msg.setSource(37111U);
    msg.setSourceEntity(172U);
    msg.setDestination(28007U);
    msg.setDestinationEntity(72U);
    msg.sys_name.assign("UYCXSVHUZITDYRMHCBXBROKMVFGDVCIMJHPDTTQFIEJKVVOQXZWZRVCNTNKPUWUGGRFSLOJNKHACYPCBFXORHEBWYHRQYQBGJWSYIXVA");
    msg.sys_type = 27U;
    msg.owner = 687U;
    msg.lat = 0.42487737547155746;
    msg.lon = 0.10550419620691631;
    msg.height = 0.3884663497018359;
    msg.services.assign("RTOMISDMGKAGKPXDTQGPBZDOFLTPYVIBNUBHHDWG");

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
    msg.setTimeStamp(0.23538617221561509);
    msg.setSource(39292U);
    msg.setSourceEntity(51U);
    msg.setDestination(20806U);
    msg.setDestinationEntity(99U);
    msg.sys_name.assign("PVXLLTPKEMBKASKNFHDMWIPHUUOTZRXOMRAQQIXZFMEQJOPCKPDYYOCQLGCLYSNMUTMDJJGNVNUVLPAALGAHUJXQCPYXAHUDFGWZVENJDEUSJJDMTAGOWVBPGIILINIGPOYWCWQCTJZTYEEFZBYDCBKONQTKEUKUFUBIRGZCMPKHFBBMRBZETVRSXFWRJBOHBHRYDOWVHQTYFLSVXVVXIOKGXZSLKHASWSICRDHSLRNQAWJWEMXZNTFYNZIAED");
    msg.sys_type = 229U;
    msg.owner = 41127U;
    msg.lat = 0.15047756231491893;
    msg.lon = 0.8033816920223898;
    msg.height = 0.6385757641282012;
    msg.services.assign("EKARNZDRHRBOVSUMNBMZMZKQFQVQIMEXGKBFCAPREWKQTUDJXXYOBAITXCUJEMMXVQGGEZ");

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
    msg.setTimeStamp(0.13950656938774275);
    msg.setSource(32669U);
    msg.setSourceEntity(166U);
    msg.setDestination(51870U);
    msg.setDestinationEntity(125U);
    msg.sys_name.assign("YRENGRMBJNAUQSWFVMGLSIOJFBUDQLXCYMXBIKKFSBMAMBOFJUSJZPZNFOWFVLPRSLXKVNTHOKJSORBIZMHAEZDO");
    msg.sys_type = 178U;
    msg.owner = 7614U;
    msg.lat = 0.910760048554576;
    msg.lon = 0.690014958093337;
    msg.height = 0.3946265299475945;
    msg.services.assign("IJAADCTPZNOHOJJPJBJFLPFDSFYYGLQCECSPUDASJLQWOCJLYKSCZLVZGETMMTVZJSVIUKADRTPYSAIRGGMGTVOZNBZRZOEFHLQGXETKWAIQUMRXTOQVYEFNF");

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
    msg.setTimeStamp(0.3760064633174044);
    msg.setSource(57506U);
    msg.setSourceEntity(43U);
    msg.setDestination(40614U);
    msg.setDestinationEntity(218U);
    msg.service.assign("DPTLCRMUJNNJXKDXMXNOKVFLHXABAVVZOMIOSNDYGJNOKTUWPMGTINHYLSTIIFEQEXUHYGNJMVQGGBTSQVVPZIXZGUHPUXHPEYYKBERZLVYUZSXOCGUAGRW");
    msg.service_type = 176U;

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
    msg.setTimeStamp(0.7875294987733963);
    msg.setSource(38391U);
    msg.setSourceEntity(46U);
    msg.setDestination(32030U);
    msg.setDestinationEntity(0U);
    msg.service.assign("IONSFVGQOJBVSPEQQTKARUTCXWZHDCPJLIMIHJHYYGUCMGTHMYIMZSVMGPYEJBSBSYTYSQXHXXUJEWJSGEWKIVGIAQNNLUUIVVKDUHLGYNKI");
    msg.service_type = 12U;

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
    msg.setTimeStamp(0.08921804446556825);
    msg.setSource(45711U);
    msg.setSourceEntity(167U);
    msg.setDestination(28492U);
    msg.setDestinationEntity(154U);
    msg.service.assign("FWFYDEVRMVUABRUQVDRRIXITTLAARSWEHPOSENM");
    msg.service_type = 220U;

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
    msg.setTimeStamp(0.2732911062817115);
    msg.setSource(48357U);
    msg.setSourceEntity(87U);
    msg.setDestination(35818U);
    msg.setDestinationEntity(159U);
    msg.value = 0.9190944733005787;

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
    msg.setTimeStamp(0.7739067073658947);
    msg.setSource(6370U);
    msg.setSourceEntity(238U);
    msg.setDestination(61892U);
    msg.setDestinationEntity(151U);
    msg.value = 0.13964230339344286;

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
    msg.setTimeStamp(0.41915898550389363);
    msg.setSource(36336U);
    msg.setSourceEntity(56U);
    msg.setDestination(43205U);
    msg.setDestinationEntity(2U);
    msg.value = 0.945939482075571;

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
    msg.setTimeStamp(0.08883834929243062);
    msg.setSource(28933U);
    msg.setSourceEntity(60U);
    msg.setDestination(34801U);
    msg.setDestinationEntity(57U);
    msg.value = 0.624960725170728;

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
    msg.setTimeStamp(0.8455327929623573);
    msg.setSource(65069U);
    msg.setSourceEntity(157U);
    msg.setDestination(39542U);
    msg.setDestinationEntity(150U);
    msg.value = 0.7228310321123373;

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
    msg.setTimeStamp(0.0171619292066596);
    msg.setSource(16382U);
    msg.setSourceEntity(103U);
    msg.setDestination(3791U);
    msg.setDestinationEntity(2U);
    msg.value = 0.33146862215694206;

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
    msg.setTimeStamp(0.5478675097651541);
    msg.setSource(55738U);
    msg.setSourceEntity(199U);
    msg.setDestination(46267U);
    msg.setDestinationEntity(170U);
    msg.value = 0.31223866970839376;

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
    msg.setTimeStamp(0.7385798060446461);
    msg.setSource(6583U);
    msg.setSourceEntity(59U);
    msg.setDestination(20041U);
    msg.setDestinationEntity(4U);
    msg.value = 0.002901699728294571;

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
    msg.setTimeStamp(0.16512987861855166);
    msg.setSource(1490U);
    msg.setSourceEntity(219U);
    msg.setDestination(18094U);
    msg.setDestinationEntity(50U);
    msg.value = 0.8224790716100718;

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
    msg.setTimeStamp(0.8352304954666232);
    msg.setSource(1779U);
    msg.setSourceEntity(205U);
    msg.setDestination(37494U);
    msg.setDestinationEntity(119U);
    msg.number.assign("DHQXKCOLWFJLVIFWOQGXCYINPFZDMUGWITMHPBMKBTXMEKBRKAUGQKUHWYRKPXXO");
    msg.timeout = 56015U;
    msg.contents.assign("NPCFOLDSUUQVZCRETEJNTRXQPZNGOEASCAQUGRJGJKYUXNFGTNIWKZJKHFCMVBKEKZIGSDAZSPTWUEXDPIXXKDISZAVWJLFALENWAHAHUCLQDIPBZDZODLEKJISNFGWYIWHOHRKQWYDXVDVVTRFNFYSFHYSBGUNBMBTEPLYQIG");

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
    msg.setTimeStamp(0.7892802287677971);
    msg.setSource(21930U);
    msg.setSourceEntity(107U);
    msg.setDestination(60734U);
    msg.setDestinationEntity(196U);
    msg.number.assign("KOAVODOLNKDEOGHXOJKITBCKWVZJRKYEZKMFUQAXNIAANDASQTCDGPGJEHFJAUHDMDUEIFPROYBITYQBTBMJFGCWHQMEBYJULEPOOC");
    msg.timeout = 15879U;
    msg.contents.assign("GNBNFAXNMQAMHOZTSPVRUXAYQNRZRMZ");

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
    msg.setTimeStamp(0.26518837270832385);
    msg.setSource(8487U);
    msg.setSourceEntity(142U);
    msg.setDestination(11177U);
    msg.setDestinationEntity(50U);
    msg.number.assign("XVXGNOAHYAZWWVJEYSFCTMZIRQVQDHDTMQBYNSIQQOKSWPJKNSNHLWHPOLBFKLDEDEUICMABXGVRBMEWNCCOEZABCFDZVFJDNUWA");
    msg.timeout = 38480U;
    msg.contents.assign("LHJYLUAUWQFPOWSAQITIAELTVAUBGSMOZFJSTBMXKLFGOXQJODEJIKCEXKVBPZFFKZGPBTRTKOVFHVRJDAHRPSNRDHELVECPHZNMNXRSVMNCWTIMTAWCRUPUNVDOWKFLMRXWNFJZYWCPUEQDGLYLXKSAOUHSOUISVQYUTQYQBPXPFEDLDRHZZGIUYJMNDDRWJKLCBEBAHZBCEBXAMVADTXYG");

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
    msg.setTimeStamp(0.14046116928452024);
    msg.setSource(40741U);
    msg.setSourceEntity(79U);
    msg.setDestination(3304U);
    msg.setDestinationEntity(129U);
    msg.seq = 4041030243U;
    msg.destination.assign("IJCXGGUTDDTYEEKHXYOBMTQPFIZZICZIGFHBZWXCDRSKMZVHOQORQHOPXWUXPRPKUKILGOAQWVOCDUXEHUFHYTMFORVMORYSDLVKOJIJVCNUAYXJTWFQENCNJYUBMPQYCKDTHNLXUHINRDAPKWRJHNNSXLYLBDCJA");
    msg.timeout = 19915U;
    const signed char tmp_msg_0[] = {58, -22, -60, 106, 80, 93, -47, -100, 14, -53, -118, -29, -32, 4, 93, 64, 16, 29, -123, 116, 116, -116, -114, 0, -2, 21, -35, -30, 120, -98, 124, 21, 93, 115, -123, 29, 99, 3, -14, -84, 45, 38, 47, -60, -97, 54, -109, -103, -94, 92, 45, 86, 47, 63, 94, -68, 92, 51, -43, -125, -90, 100, 109, 10, -86, -9, 80, 102, -17, 1, 10, 89, 46, -121, 3, -55, 82, -55, 62, -64, 3, 113, 45, 91, -17, 30, -87, 104, 98, -32, -74, -18, 76, -113, 37, -61, -8, 99, -74, 126, 104, -18, -10, 59, 111, -13, -10, 40, -79, 119, 82, -101, 115, 3, 46, -110, 34, 2};
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
    msg.setTimeStamp(0.7086315100295847);
    msg.setSource(33592U);
    msg.setSourceEntity(27U);
    msg.setDestination(59915U);
    msg.setDestinationEntity(85U);
    msg.seq = 2487416655U;
    msg.destination.assign("UPXJNAKOJGKFYVLYFZRMBTDWVVPTHZPBBELIEMJANVLPYVTJOURSVNTZDOKNLVUDNQFKZPQUMAHQCRSICYFTXAZDUCVXEZZYDESYHS");
    msg.timeout = 50624U;
    const signed char tmp_msg_0[] = {-83, -92, 16, -23, -23, 84, -74, 67, -109, 23, -53, 36, 25, 41, -104, 18, -12, 104, -126, 10, -10, -2, 101, -2, -27, 93, -77, -5, -59, -39, -73, -22, -24, -61, 57, 20, -45, -66, 43, -100, -99, -34, 9, -82, 118, -10, -64, -9, 62, -45, 83, 41, -83, 46, 88, -5, 51, 45, 114, 126, -124, -1, 54, 49, -23, 17, 106, 80, -107, -59, -115, 64, -73, 64, 29, -101, 69, 56, -14, -96, -29, 63, 90, -116, 106, 86, -50, 43, 52, -76, -98, -83, -38, 80, 10, -28, -65, -65, 42, 4, -74, -4, 89, -26, 119, -99, -1, 72, -80, -49, 1, -24, 43, 75, 119, 54, -110, -11, 69, 107, -66, -7, 53, -29, -87, 43, -81, -79, 22, 31, -96, 103, 62, 96, -2, -25, 125, -57, -95, 52, -31, -36, -71, 111, -102, -64, 87, -71, 82, -25, 98, 80, 3, 56, -101, 14, -41, -115, 89};
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
    msg.setTimeStamp(0.11210880582328009);
    msg.setSource(31777U);
    msg.setSourceEntity(84U);
    msg.setDestination(56856U);
    msg.setDestinationEntity(207U);
    msg.seq = 198072127U;
    msg.destination.assign("GUVHOHIYCVTIBRHSZYXKGMRNVFWEHLVDAYPEGZFMURQSTQKQESMXKCZGOZFGHNXCOBFEQBMRKFPNPKYESPKMUAYUCGLSVLEAOURTBXHDDNXLPALJDIYDGDJSXUVYQISQWLZFGMNCJTGZIKAOJZHLFWOJCHOBNXDMYJSHRBCITOAJTGNEQHY");
    msg.timeout = 9131U;
    const signed char tmp_msg_0[] = {-50, 64, 19, 0, -71, 34, 123, 70, 33, 101, 103, 88, -44, 64, 73, -77, -29, -37, 42, -28, -121, 28, 104, -42, -9, 85, -19, -92, -82, 100, 50, 47, -85, 96, -57, -31, 86, 17, 61, -78, -39, 22, -8, 62, -70, 2, -50, 123, 14, -105, -110, 78, -11, 67, -100, 17, -65, 21, 116, 88, 35, 67, -44, -125, 72, -7, 119, -125, 79, -88, 102, 53, 6, 89, -92, -116, 70, -99, -3, -11, 98, -121, 8, 93, -121, 28, 34, 3, -103, -45, 22, -51, 32, -11, -116, 112, 19, 103, 27, 92, 66, -32, -68, -95, -27, -95, 81, -93, 36, -57, 34, -7, -70, 10, -22, 84, 37, 49, 66, 85, -62, 83, -19, 106, -111, -69, -124, -84, 64, -62, 73, 6, 10, -20, -11, -99, -56, -50, -38, 81, -104, -121, -57, -46, 10, 108, -44, 59, 26, 22, 117, -74, 70, -18, -123, -21, 21, 10, -93, -79, 70, -13, -56, 100, -47, -34, -118, -106, -115, -105, 34, -90, 20, -111, -96, -120, -93, 89, -63, 40, -60, -91, 75, 33, -4, -32, -111, -17, 56, 5, 54, 117, -96, -29, 26, 1, 45, 63, 79, 27, 24, 84, 38, 44, 0, -84, 87, 99, -16, -15, 18, -128, -8, 8, -3, -115, -117, -60, -99, -3, -2, -47, 64, 66, 64, -76, 9, 83, -103, 49, -41, 62};
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
    msg.setTimeStamp(0.535502861561665);
    msg.setSource(19566U);
    msg.setSourceEntity(111U);
    msg.setDestination(25011U);
    msg.setDestinationEntity(153U);
    msg.source.assign("NHLHOORZQGEVJWUMJQXPGATZGKOHHRDSQAGLGWVONDEERFFYZWSNGJMXVVLIKRQCUAJOCVFVRBQFGXAKDPDBIDTKJZAIJMANUBUUCFTBPLSQEANDCQLBENYCXFZMRSYTPOSHHWTEZIMATRIXJQZCADUIJG");
    const signed char tmp_msg_0[] = {8, -7, -13, 65, 19, -58, -120, -59, -4, -50, -118, 37, 91, 28, 45, 4, -23, -32, 86, -34, -13, -37, -81, -49, -92, 88, 25, 27, -100, 126};
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
    msg.setTimeStamp(0.8303301951470037);
    msg.setSource(59621U);
    msg.setSourceEntity(147U);
    msg.setDestination(8365U);
    msg.setDestinationEntity(159U);
    msg.source.assign("HCAMGLWEWJPEPAVTQIOIQBYRUMOKYSZJEDFSLJYSIDKNNNGJESRYJFFBPFAKXBQPTUCSXOBRVYYLGTLETHRAJKODNLATCPQPFFL");
    const signed char tmp_msg_0[] = {-5, 44, -59, -28, 90, -52, -32, 36, -78, 60, -101, 40, 74, -113, -109, 87, 100, -59, 106, -113, -10, -10, -108, 118, 11, -93, 116, -120, -48, -52, 101, -122, 86, -123, -3, -51, 29, -70, 58, -24, 107, 63, -99, 31, 100};
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
    msg.setTimeStamp(0.9512630620090425);
    msg.setSource(25762U);
    msg.setSourceEntity(20U);
    msg.setDestination(3931U);
    msg.setDestinationEntity(206U);
    msg.source.assign("DVXXLSFLURRNRGZHSMTRUGRBINACQGPVQGYUGUOYDIKUZALQBQFHEFFANSATSJZDGCFEFVQLYOWEPUIGSJMYMBNTHPHVGOZEJPDWPXKVJGSCDOCVOKUDYVMQOLZTSMXBFYWOPIPXEJQIURQXWEWNAXILHDKJXAXOHPBBPTEFHUZKXDQMJREZZLT");
    const signed char tmp_msg_0[] = {-12, -125, 85, 69, 13, 64, -113, 57, -32, -38, 57, -74, -20, 85, 118, -39, 18, 78, 116, -98, 52, 61, -71, -4, -79, 7, 18, -42, 60, 22, -3, 93, -117, -13, -62, 110, -63, -32, 59, -81, 88, -39, 7, -20, -121, -40, 78, 46, 88, -14, 41, 67, -53, 41, -25, -102, -90, -85, -61, -111, -75, -80, 68, -72, 48, -31, -16, -2, -112, -74, 78, -100, 55, -49, -92, 114, 83, -18, -88, 45, -96, -94, 36, -99, -21, -101, -72, -125, -125, -27, -114, 89, 63, 23, 51, -16, -105, 4, 58, -122, 25, 107, 53, -12, -59, -65, -98, 17, -19, 82, 62, -126};
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
    msg.setTimeStamp(0.0030823119254406173);
    msg.setSource(37994U);
    msg.setSourceEntity(123U);
    msg.setDestination(46531U);
    msg.setDestinationEntity(130U);
    msg.seq = 223821819U;
    msg.state = 228U;
    msg.error.assign("SYULLAIDIAUKSOEKFXGEMELIQCRWPOKIIWZMQZHZWTUFMAASHUYJOFYBZBJYGVDWDEKGIJBXVHDVCZAKXZCDLYDTSFNTRSSGNPQRQBCGLSXOKCPXPGPJQDNUXSFETEKRZRYOLKGLVWUUWQYJRNZ");

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
    msg.setTimeStamp(0.908777860889906);
    msg.setSource(19928U);
    msg.setSourceEntity(10U);
    msg.setDestination(40439U);
    msg.setDestinationEntity(153U);
    msg.seq = 1278783103U;
    msg.state = 26U;
    msg.error.assign("XOWRJAARYNNDMLCYFVRBMZBLKXTTFVZGUREIOMPGEYNMQPQKDVZWSUWRMAUPLVRXDGRNTASUBIOZSWBULVSIKYKQJGZDTYQOEQISDNHMQTGYBKPHDJFZFVCTKPQZMBDETSGPAETMMJRYGWNHINUQBJCZGCUWJJFFFYSSESIKUPOJRHCYNHGALAJSVHLHHCVPQMOWXFOCTOLIVDYEKBWBNKWXXPLHZXWRICDPVLJ");

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
    msg.setTimeStamp(0.0590325479399858);
    msg.setSource(53591U);
    msg.setSourceEntity(35U);
    msg.setDestination(41020U);
    msg.setDestinationEntity(171U);
    msg.seq = 2737701030U;
    msg.state = 195U;
    msg.error.assign("HMGYOCRMXERLILLSBCDEJSEDKAAZEIHNDXBUFYVVTYWSHZRWLHPZJZNIMJWKYBJRIYLAMXJPATCWFNOPZOQFLWBHQCASXVQGKDZGANHFLBISONKMSFRVQFLTKQENQJAZOSQKYWOUFPMTQRBNIDSPTIYQI");

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
    msg.setTimeStamp(0.6584617638072457);
    msg.setSource(21214U);
    msg.setSourceEntity(80U);
    msg.setDestination(52409U);
    msg.setDestinationEntity(113U);
    msg.origin.assign("DEIPJFGQUUUJCEBFCLLBBUODKVRZTIZGPEBXPYDMKCMVPGDJEEHYLEPLSCOASUSXTSIKDPNREQFYHHWEIKWMXN");
    msg.text.assign("OTZUYSCNZWVROSPAXUHQZXOYUBWTVHKEMMMFLUAWVIRLXBUDEJUNUYDLPQCMANTHFIX");

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
    msg.setTimeStamp(0.43911812692852215);
    msg.setSource(56696U);
    msg.setSourceEntity(225U);
    msg.setDestination(52250U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("UQEAKJQRNXDMDCLVYPSIUPYBHUZMFTPYRPDISYZRWJTBPFHDVDCKSHDVPEZBAWDAGAOOCOCCTZJNSXCGEZWW");
    msg.text.assign("DMZENTHQDPSRSLUFSOOQMHMJFMVSQKTNCKSCORPAVWVKHFAHFDGEMHNXGOXEGGOUSTXIKMAVIMJPBJXWUFQAPJXINEFAGWEKLLWLHKTGLYRYBDBTKZJOJBXAGHIRTUKYTSEVQOGYYVGBXJHBNQVIZMNRL");

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
    msg.setTimeStamp(0.37341326864451696);
    msg.setSource(11891U);
    msg.setSourceEntity(46U);
    msg.setDestination(62826U);
    msg.setDestinationEntity(27U);
    msg.origin.assign("KMCMJKPNUOBVTWGJVKSGVJLFD");
    msg.text.assign("ZSMAKTPMCWJKTXWHHDBXBLKWKQDWQIGRUGXGVRBNVZJJFUMGPDCKREFISBJJOMORMJQWSEGZABWCQQAEPSNSBNOBCZVCDWWFFCYYOAHVQVWLZKXDIZKOAQAAPMEELZLPUYSGHDRUCGGTQGLQVXOZSAOPUUVVXNTIPIHIRL");

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
    msg.setTimeStamp(0.9549577038977722);
    msg.setSource(53843U);
    msg.setSourceEntity(179U);
    msg.setDestination(42726U);
    msg.setDestinationEntity(224U);
    msg.origin.assign("PEZJDTEKKTGVWHNOURUYSWKMALXKPULGQQBCXWEGCOQDJNKJQVZDVICOMYDGSNACOYZYJOHDQNOSXWSQKIXUXISWRHDG");
    msg.htime = 0.18545687695465474;
    msg.lat = 0.17256370625315642;
    msg.lon = 0.205155838967224;
    const signed char tmp_msg_0[] = {78, 23, 9, -127, -83, -15, -31, -8, -118, 36, 74, -42, -124, -51, 124, -18, -122, -112, 59, -34, -103, 111, 3, -56, 35, 119, -60, 17, -51, 49, -35, -79, -126, -40, 109, -117, -95, 2, 34, -102, -113, -8, 38, 31, 36, -18, 82, -95, 77, -16, -6, 43, 33, 122, -5, -73, -117, -52, -84, 75, -71, 122, 91, -38, 74, 43, -1, 60};
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
    msg.setTimeStamp(0.8228690096502017);
    msg.setSource(10395U);
    msg.setSourceEntity(26U);
    msg.setDestination(56272U);
    msg.setDestinationEntity(226U);
    msg.origin.assign("CQRDIPXQLVGJKCYNEEJJLCCMUZOVNYFTFTGZJLNIQUKCHKARYPDOARRRVOFQVSSGTWPBOTUXOHYIKPQALZJFTCUHMHYACZGPDVJAFTXFGYRLNRAKBVMWUNKYJBZETHSOEGLJRTLZHZGKNWMKBSIQABTRBPCLTMDNOWE");
    msg.htime = 0.9839552410610187;
    msg.lat = 0.09913332512161221;
    msg.lon = 0.8171316526150965;
    const signed char tmp_msg_0[] = {123, -37, 28, 118, 72, -91, -9, 74, 66, 97, -48, -83, 113, -94, -52, 31, -1, 22, 0, 69, -41, 68, -108, 39, -80, 20, 69, -21, -66, 83, -125, -44, -10, -5, 38, 115, -85, -94, 114};
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
    msg.setTimeStamp(0.38935060417520273);
    msg.setSource(40670U);
    msg.setSourceEntity(118U);
    msg.setDestination(39746U);
    msg.setDestinationEntity(107U);
    msg.origin.assign("CJTXCMXJZCLSRGYUGRWUQNWSMZJNJTFDSICVMNPJGVGAYMYLLBHOXUJCVUYVTWAIGFZOKHKIHDCTVURTF");
    msg.htime = 0.2406275638077906;
    msg.lat = 0.9747800562489107;
    msg.lon = 0.9065510180518185;
    const signed char tmp_msg_0[] = {8, -80, -4, 96, 114, 8, -91, 87, -66, -60, 5, 79, -3, 47, -128, 10, -113, 78, 39, -7, -43, -108, 1, 31, 109, 81, 104, -117, -124, 114, 66, 32, -24, 68, -82, 13, -70, 34, 72, -42, 24, -125, 7, 40, 72, 113, -8, -103, 25, 87, 126, -97, 65, -103, -82, 24, -80, 10, 37, 24, 46, -85, 118, 55, -93, -15, -42, -96, 84, 22, -10, 98, -38, -6, -91, -117, 71, 119, 19, -117, -76, 115, 65, 3, 5, -64, -53, -105, 113, 54, -16, 14, -24, -20, 58, 68, -23, -81, -78, -46, -25, 5, -45, 77, 59, -65, 45, 67, -24, -11, 79, -108, -67, 98, -48, -67, 104, 97, -84, -38, 50, 107, 107, 73, 41, -83, 23, 126, -83, -33, -27, -82, 34};
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
    msg.setTimeStamp(0.5123482901082815);
    msg.setSource(28540U);
    msg.setSourceEntity(62U);
    msg.setDestination(52311U);
    msg.setDestinationEntity(191U);
    msg.req_id = 53954U;
    msg.ttl = 36358U;
    msg.destination.assign("FGENKGQOIXHUHAWQPRATEAPDHCPUSHGIYGJIMSNYJFWRKVOYVZIBLNQ");
    const signed char tmp_msg_0[] = {100, -110, 64, -42, 18, -66, -69, 8, -118, -29, 54, -70, -19, 120, -106, -23, -109, -7, 29, -72, 10, 65, -68, 118, 92, -103, 61, 36, -95, 119, 108, -4, 75, 42, -112, 19, -118, 103, 0, -73, 9, -107, 77, -104, -82, 20, -95, 43, 47, -107, -117, -8, -11, -82, 92, 4, 30, 67, -5, -95, -111, 11, -8, -108, 38, -124, 84, -25, -62, 97, 50, 11, 78, -49, 105};
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
    msg.setTimeStamp(0.4538677059372451);
    msg.setSource(7365U);
    msg.setSourceEntity(136U);
    msg.setDestination(42426U);
    msg.setDestinationEntity(19U);
    msg.req_id = 36650U;
    msg.ttl = 8840U;
    msg.destination.assign("LUERMEEKFXNPKBIAAYFXFEOQMCVWCNAZDGAZKDOBUUIBLGKLTHSQRJRLYHOWFDXRVIAVSMZVUCVTKRCNQGRQSOCDTVRHXSEYXNJIHOELMOXWMOAZYNETZVV");
    const signed char tmp_msg_0[] = {32, -57, 90, 5, 10, 59, -85, -90, -95, 16, 6, 125, 65, 3, 89, 37, 95, -80, 111, 51, -10, 45, -70, -74, 63, -33, -113, 113, -123, 25, -126, 86, 39, -118, 36, 23, -112, -62, -82, -74, -128, -54, 114, 125, 30, -122, 42, -17, -9, -65, 123, -33, 28, -16, -55, 99, -114, -46, -55, -109, 101, 87, -1, -68, -127, -87, 61, 110, -113, -25, -73, 84, -106, 22, -100, 124, 19, -43, -85, -100, -114, -75, -67, -106, 8, -66, -25, -8, 108, -92, -27, 20, 40, 16, 19, -66, 107, -18, -101, 93, 44, -49, 79, 38, 88, 49, 48, -76, -99, -24, -10, -10, -7, 77, 126, -38, -23, -58, 15, 11, 1};
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
    msg.setTimeStamp(0.1672583750001757);
    msg.setSource(13131U);
    msg.setSourceEntity(61U);
    msg.setDestination(13619U);
    msg.setDestinationEntity(87U);
    msg.req_id = 36435U;
    msg.ttl = 39257U;
    msg.destination.assign("ULSGKIGYGCHODCLWAIVKIORLVEHUEHEACIELITFDKRMWUVHBASHTPQRDVSXBSULIVLRRYWTHKRXBHMFMAJGMSJECNXOFWFKWTDCCPOKIUNOYKMZZPQNENBJLBZ");
    const signed char tmp_msg_0[] = {35, -33, -96, 42, 79, 64, 121, -23, 13, -90, -35, 95, 105, -110, -49, 55, 108, -124, 105, 24, 122, -14, 18, -77, 20, 91, -41, -24, 42, -64, 45, -128, 115, -115, 6, -15, -119, 122, 100, -108, -120, 53, 52, -41, -17, 92, 46, -99, 11, -12, 62, -68, 36, -5, 40, -62, 90, 47, -114, 47, -112, -15, 75, -118, 18, -53, -62, 55, -24, -5, -90, -26, -83, -81, -84, 8, -33, 17, 74, -73, -47, -93, 88, -29, 121, 103, -94, -101, -60, -37, 76, 116, -3, -111, -19, 29, 81, 97, -128, 78, 104, -99, 9, -53, -13, -29, 49, 42, 98, -29, 112, -22, 71, 100, 34, -94, -28, -72, 20, 102, -41, -98, 125, 76, -44, 126, -42, 26, 99, 79, 44, 23, 26, 126, 94, 78, -64, -125, -1, -16, -103, 22, 26, 13, 21, -27, -123, 108, -64, -75, 58, 118, 119, 75, 21, 44, -107, 35, -15, 49, -55, -109, 124, 101, -45, 8, 112};
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
    msg.setTimeStamp(0.7906739306457735);
    msg.setSource(21772U);
    msg.setSourceEntity(48U);
    msg.setDestination(23185U);
    msg.setDestinationEntity(72U);
    msg.req_id = 16400U;
    msg.status = 91U;
    msg.text.assign("YAYTADGGUJKRRQZEZHIXINVOAOADQLCBCSHWCUNKTEJOREAJDGLUBZOMSQDDDMNKNTYIBZTBAGOJXXLFEVUYPTIHCJYXWCWVMOWCWYONADFAXPHPBGKVEPEIQPVBQPZEXFWPVFGASFLHJDEDLRUKFJSBNSMMYZXOQWJVHPRBIIIHQSYSJSHBSGTLTJGNPKLUGKQKYRXTMFTCFQNTHRFCOVVCZY");

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
    msg.setTimeStamp(0.5767103299734491);
    msg.setSource(41697U);
    msg.setSourceEntity(105U);
    msg.setDestination(35822U);
    msg.setDestinationEntity(208U);
    msg.req_id = 61272U;
    msg.status = 151U;
    msg.text.assign("PAZPGLJXIUTACPYQMBJJUECAXSKLHZFUAOQMAFLAEYXIHOEEBUORLBIAKVQFUURJYBKVLJVTWXKFSNRAVSVZCPUQBFQSSNLDKBRXWRXOWPJMPRESTKNVGECSNJIRSYHYJRWNFRYGGTIHDOCGMLGWHNFXRGLNBQZMTIJBODKQWQFEKMTWYDOEHVFHOTSHPYNGDIXCNMCVQOSPZ");

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
    msg.setTimeStamp(0.30421616741117785);
    msg.setSource(28159U);
    msg.setSourceEntity(40U);
    msg.setDestination(51734U);
    msg.setDestinationEntity(181U);
    msg.req_id = 26855U;
    msg.status = 215U;
    msg.text.assign("QPJIAJNVLVOGRWXQVAEVHWKCOPHQVQWFBHAOKYZNCBMJTDVPPWFTJZTHXTKFUSIBIIITCPOWNZCSUZZQBNEJSGVPYKHKTURHJLCHMWDABXFUSAHLAYEQFTOZYSWUFRRBGBPEDADZIOJNCJDKBMGMBKTPRERWMRNZ");

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
    msg.setTimeStamp(0.9049844861521593);
    msg.setSource(544U);
    msg.setSourceEntity(207U);
    msg.setDestination(39464U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("KKWZEQLFXXLXNJFXQYSPTFJLXWAQLUCATESYNMTMQBWCEZYUHAAHVFQZVRQFSKGORWRTKIZMJFXPBWUARCYOFPOKSBNLSGRBZYCGWYTEZSKSZCGXDRHYA");
    msg.links = 1826613616U;

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
    msg.setTimeStamp(0.12207335534022357);
    msg.setSource(54778U);
    msg.setSourceEntity(170U);
    msg.setDestination(43550U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("UYEYQHVVRSURGIPABCDTRHKVBJEDJWQESFCFZPBSAZCYVFEDWZSRNVKNZIKLLBQTHPRQPKDJDEHMVJVQTPTGNKZPBPTIWLWOOUMMQYPVYLQJQGSPCKOWDJLIHHGUIZCYGNOJUFTUAZWBCJOJJGOUEHAFLHXXLVTGOEWBYDAFIACGIUEDXFRMEWXWMVSSNUZORSKXXSL");
    msg.links = 29088484U;

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
    msg.setTimeStamp(0.8188375894186505);
    msg.setSource(55777U);
    msg.setSourceEntity(125U);
    msg.setDestination(60749U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("QSASSKDZDRQZLSFLPQCUAYWMI");
    msg.links = 112767589U;

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
    msg.setTimeStamp(0.01654001130439897);
    msg.setSource(15221U);
    msg.setSourceEntity(91U);
    msg.setDestination(4644U);
    msg.setDestinationEntity(170U);
    msg.groupname.assign("SEDVRUURBOORLJAEPMSLYTZJHKAPBBLTIMJDRWDMZDEVSBWZZHBEVEOWFYQBHMYQYD");
    msg.action = 144U;
    msg.grouplist.assign("IJJMPWNSVSCAWSOAMVATNWEJKSDAUPUUFUTQQWDKTYEDDQAWJWHSGYSMXECEIXRIQOWEXKAYH");

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
    msg.setTimeStamp(0.4764486913166157);
    msg.setSource(38437U);
    msg.setSourceEntity(95U);
    msg.setDestination(22518U);
    msg.setDestinationEntity(70U);
    msg.groupname.assign("RJPAEILOEBXWTKVXPQEGXSCALJZYSTPXXRCCFNYSIOZGMFEJOQYOEDWHAGAMIURKGKRPEBZW");
    msg.action = 246U;
    msg.grouplist.assign("GTIVRVXUTYCMNPOGSJNGEZYZKNHMSFWPCFRARIIUFTMETAUHNJMNAHTFYGSCJUULCNPQ");

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
    msg.setTimeStamp(0.7907594274017987);
    msg.setSource(63288U);
    msg.setSourceEntity(30U);
    msg.setDestination(40751U);
    msg.setDestinationEntity(137U);
    msg.groupname.assign("TFZEOMKDAIPYJOHUAEBCVEQRFWKDVMPLHMWICNYJRTBEINYFVDZGBOWBGYNFWVCR");
    msg.action = 223U;
    msg.grouplist.assign("OFAIRLEJQHEHXYMTIWNLNVNBTGDZALMDDUYCPACZMLQYKPGKPXPKCWBZYKB");

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
    msg.setTimeStamp(0.0778326001364732);
    msg.setSource(6674U);
    msg.setSourceEntity(0U);
    msg.setDestination(59871U);
    msg.setDestinationEntity(252U);
    msg.value = 0.9754946801984232;
    msg.sys_src = 62691U;

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
    msg.setTimeStamp(0.8365183829882711);
    msg.setSource(44635U);
    msg.setSourceEntity(176U);
    msg.setDestination(20024U);
    msg.setDestinationEntity(232U);
    msg.value = 0.07704194745002158;
    msg.sys_src = 59719U;

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
    msg.setTimeStamp(0.04492500793097709);
    msg.setSource(14348U);
    msg.setSourceEntity(78U);
    msg.setDestination(5923U);
    msg.setDestinationEntity(160U);
    msg.value = 0.37870761278737874;
    msg.sys_src = 3696U;

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
    msg.setTimeStamp(0.01852426864514556);
    msg.setSource(57048U);
    msg.setSourceEntity(10U);
    msg.setDestination(62723U);
    msg.setDestinationEntity(196U);
    msg.value = 0.2417369377163221;
    msg.units = 11U;

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
    msg.setTimeStamp(0.19354308624040284);
    msg.setSource(56581U);
    msg.setSourceEntity(98U);
    msg.setDestination(3371U);
    msg.setDestinationEntity(230U);
    msg.value = 0.8849391585946451;
    msg.units = 38U;

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
    msg.setTimeStamp(0.23768788393602858);
    msg.setSource(16088U);
    msg.setSourceEntity(20U);
    msg.setDestination(17630U);
    msg.setDestinationEntity(234U);
    msg.value = 0.10171848088297575;
    msg.units = 62U;

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
    msg.setTimeStamp(0.36121475486378785);
    msg.setSource(25497U);
    msg.setSourceEntity(227U);
    msg.setDestination(36312U);
    msg.setDestinationEntity(137U);
    msg.base_lat = 0.9365119062945766;
    msg.base_lon = 0.24283049658066758;
    msg.base_time = 0.5185397411609235;

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
    msg.setTimeStamp(0.6205053109408245);
    msg.setSource(28440U);
    msg.setSourceEntity(138U);
    msg.setDestination(62477U);
    msg.setDestinationEntity(221U);
    msg.base_lat = 0.04351531690125954;
    msg.base_lon = 0.8623398729448626;
    msg.base_time = 0.6363855561656558;

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
    msg.setTimeStamp(0.24671876935828518);
    msg.setSource(6398U);
    msg.setSourceEntity(174U);
    msg.setDestination(47473U);
    msg.setDestinationEntity(39U);
    msg.base_lat = 0.5774991008877539;
    msg.base_lon = 0.11538811562436546;
    msg.base_time = 0.6981537908746953;

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
    msg.setTimeStamp(0.5548807791254241);
    msg.setSource(34203U);
    msg.setSourceEntity(71U);
    msg.setDestination(14804U);
    msg.setDestinationEntity(83U);
    msg.base_lat = 0.45254423205815986;
    msg.base_lon = 0.6970434765505144;
    msg.base_time = 0.7033072820409509;
    const signed char tmp_msg_0[] = {-14, -7, -116, 114, 99, 70, 35, -110, 62, 12, 105, -107, 99, -43, -116, 111, 72, -4, -98, 116, 65, -67, -17, -104, -41, -121, -93, 55, 4, 58, -96, -51, -76, 8, 78, 67, -58, -123, -93, 53, 45, -89, -83, -63, -30, -87, -119, -80, 18, -120, 77};
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
    msg.setTimeStamp(0.43002411360796067);
    msg.setSource(20325U);
    msg.setSourceEntity(121U);
    msg.setDestination(57858U);
    msg.setDestinationEntity(125U);
    msg.base_lat = 0.25485335445406965;
    msg.base_lon = 0.5008802226617045;
    msg.base_time = 0.3319566540389124;
    const signed char tmp_msg_0[] = {-57, 49, -125, -110, 79, -9, 52, 99, 93, -28, 98, -66, 51, 79, 52, 2, 113, -32, -47, -71, -68, -7, -95, -12, 80, 46, 122, 96, -109, 100, 75, -53, -13, -80, 62, -69, -90, -112, 101, 12, -44, 106, -24, 126, -57, -80, 28, -81, 1, -115, 115, -35, 42, 57, 6, -73, -47, -25, 69, 123, 88, 36, 3, 90, 103, 45, 70, -90, -110, 115, -7, 30, 64, -108, -78, -78, 39, 92, 49, 8, -11, -6, -98, -43, 4, 65, 112, 58, -23, -61, -34, -27, 53, 30, -90, 24, -39, -22, -48, -46, 109, 106, 56, 121, -72, -93, -100, -70, 56, -101, -68, -57, -35, 28, -22, -72, 82, 57, 110, 4, -15, -51, -76, 35, -89, -104, -67, 1, -73, 85, 76, -83, -24, 80, -99, -37, -86, -82, -125, -93, -28, -128, 99, 54, 5, 6, 94, 22, -74, -111, 8, -10, -110, -121, -40, 53, 48, -91, 17, 9, -109, -3};
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
    msg.setTimeStamp(0.2582906222103105);
    msg.setSource(16602U);
    msg.setSourceEntity(160U);
    msg.setDestination(21587U);
    msg.setDestinationEntity(116U);
    msg.base_lat = 0.3498500548852983;
    msg.base_lon = 0.037468512177931124;
    msg.base_time = 0.45963337784117153;
    const signed char tmp_msg_0[] = {-95, 97, -46, -112, -54, 99, -91, 39, -56, -71, 44, -22, 101, -55, -23, -115, 108, -8, 41, -120, -96, 42, -124, 124, 86, -125, 8, -71, -36, -42, 13, 86, -125, -54, -66, -65, -14, -9, 64, 27, -65, -18, -43, 106, -52, 84, 37, 9, -87, 4, -125, -40, -122, 96, -59, 0, 28, -48, -52, -8, 7, 104, 113, 61, 83, -59, -98, -113, -1, 59, 67, 81, 17, -8, 53, 65, 28, -18, 97, 29, -2, 52, -25, 60, -74, -18, 19, 126, 5, -29, 33, 8, 53, -58, 115, -82, -51, 59, -121, -16, 64, -106, -40, 105, 70, -72, -79, -20, 63, -44, 111, -34, 55, -54, 2, 60, -93, -98, -92, -74, 24, 63, 27, 82, 71, -59, 124, 24, 96, 22, -13, 69, 81, 48, -61, -71, -11, -62, 109, 32, 103, -106, -75, -88, 97, -32, 2, -50, -94, 12, 6, -84, -108, -89, 121, -4, 51, -107, -92, 12, 82, 59, 42, 103, 10, -42, -49, -36, 78, 121, -79, -11, -57, 50, -40, 114, -14, -31, -36, 60, 60, -39, 22, -46, -39, -44, 3, 118, 94, -43, 76, -40, -118, -8, 64, -121, 18, -66, 74, 124, 93, 27, -25, -89, -41, 113, 108, -96, -72, -11, 87, 46, 70, 35, 73, -26, -112, -112, -116, -52, -111, 22, 100, -75, -109, 56, -124, -37, 26, 26, 7, -17, -6, -106, -55};
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
    msg.setTimeStamp(0.4934949467268692);
    msg.setSource(42031U);
    msg.setSourceEntity(21U);
    msg.setDestination(28752U);
    msg.setDestinationEntity(100U);
    msg.sys_id = 5811U;
    msg.priority = -110;
    msg.x = 29793;
    msg.y = 23365;
    msg.z = -29003;
    msg.t = 3785;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 121U;
    tmp_msg_0.mnames.assign("GEDOCCQZFBCHIJIFPZLFGAIQDSLWGMRYBFEISEPIUCKZJAVLWXCUDHMUZRJAUOWSNPXDABMVUPGKOJWNF");
    tmp_msg_0.ecount = 155U;
    tmp_msg_0.enames.assign("JQYDMLSHWMUOTJOFSVANWFQOZPLSHJTLMWOCKADCQPNLDTLRZCTHSMIWQOTBJMIOICVWQIAXSEQZPLCFSPKGZBGVERVAYXBIWXNCUUTTUNKFGDDISIERAEFUHBSZUJNWJTZZFLBVCXKUFTQYGXNKTOANYRPXSSFERKBECKEHPPMY");
    tmp_msg_0.ccount = 92U;
    tmp_msg_0.cnames.assign("OINWSFABGYZXPXIEPOTHVCOBJDUJIYRUMDRITPWXUANXDHOVXMYXHNSKMJKRYCDCRNUQAMPJBHMQSWTEINZFWLGTRVQRVEYDTJBALXYAOEKBPOKHSRGVVVLFFNAIEJBWUTWYJODARUOGGIWQLUQBZBEJXKXMCYINPRNLBKUJXFOYKZGTSEKGGAGLYQBCQULQPDZMTMDVWFDHKCSZSGFFHFIPIHJQHVLDHSFWKNC");
    tmp_msg_0.last_error.assign("KTNSWKBQPEXRCMLPWEKYIYATHKJWTTTPXVOKDCIPKJNPNIACBPDQAWRBVGDHXKZLJFXUJCWZKDQAAEQSIRZOCSEZQJXXBWUVBFMLMRUZSFLEEQOHYGHLUSUPVGFMIRAJGTIZNBWBEOHNHVVHUOYAQGQUVGMNLLPOYLZVITXUISVDTIDQJNCFKVNJJFKZAFRQUOMBMCXGFFSASGFCWYDRDDHMNEHCGSEPYJDNPZOATREOWHXOTSXI");
    tmp_msg_0.last_error_time = 0.17998401759008953;
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
    msg.setTimeStamp(0.47461581433788025);
    msg.setSource(17678U);
    msg.setSourceEntity(120U);
    msg.setDestination(47704U);
    msg.setDestinationEntity(148U);
    msg.sys_id = 54742U;
    msg.priority = -121;
    msg.x = 2892;
    msg.y = 6939;
    msg.z = -25475;
    msg.t = -19111;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 253U;
    tmp_msg_0.x = 0.47522354648590626;
    tmp_msg_0.y = 0.21448838015142924;
    tmp_msg_0.z = 0.7688037881430647;
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
    msg.setTimeStamp(0.9073476699282342);
    msg.setSource(8783U);
    msg.setSourceEntity(123U);
    msg.setDestination(61763U);
    msg.setDestinationEntity(240U);
    msg.sys_id = 55880U;
    msg.priority = -13;
    msg.x = 27020;
    msg.y = 4818;
    msg.z = -19505;
    msg.t = -12094;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 44;
    tmp_msg_0.value = -1645064887;
    tmp_msg_0.gain = 240U;
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
    msg.setTimeStamp(0.4684751393289939);
    msg.setSource(6696U);
    msg.setSourceEntity(211U);
    msg.setDestination(36784U);
    msg.setDestinationEntity(118U);
    msg.req_id = 59018U;
    msg.type = 102U;
    msg.max_size = 44952U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.11147136044687156;
    tmp_msg_0.base_lon = 0.6198412896190624;
    tmp_msg_0.base_time = 0.5209437626990893;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 26957U;
    tmp_tmp_msg_0_0.destination = 39287U;
    tmp_tmp_msg_0_0.timeout = 0.42588321058034473;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.27283528708890326;
    tmp_tmp_tmp_msg_0_0_0.y = 0.985044788578586;
    tmp_tmp_tmp_msg_0_0_0.z = 0.5881770246708727;
    tmp_tmp_tmp_msg_0_0_0.t = 0.0021128159896309784;
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
    msg.setTimeStamp(0.9762314175665989);
    msg.setSource(1433U);
    msg.setSourceEntity(154U);
    msg.setDestination(44579U);
    msg.setDestinationEntity(224U);
    msg.req_id = 6365U;
    msg.type = 246U;
    msg.max_size = 57951U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5215742941194287;
    tmp_msg_0.base_lon = 0.6160545386143375;
    tmp_msg_0.base_time = 0.05064690680816275;
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
    msg.setTimeStamp(0.7181729826048359);
    msg.setSource(23397U);
    msg.setSourceEntity(247U);
    msg.setDestination(56376U);
    msg.setDestinationEntity(66U);
    msg.req_id = 7516U;
    msg.type = 219U;
    msg.max_size = 2755U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5293747339791834;
    tmp_msg_0.base_lon = 0.030356721809930987;
    tmp_msg_0.base_time = 0.7586719953001437;
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
    msg.setTimeStamp(0.04499177295792667);
    msg.setSource(15719U);
    msg.setSourceEntity(209U);
    msg.setDestination(63020U);
    msg.setDestinationEntity(156U);
    msg.original_source = 25239U;
    msg.destination = 49923U;
    msg.timeout = 0.008184650775600821;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 95U;
    tmp_msg_0.text.assign("NFUXDAIRQJUVNOIBXCUUZMZCSXYI");
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
    msg.setTimeStamp(0.10875561444901227);
    msg.setSource(63102U);
    msg.setSourceEntity(12U);
    msg.setDestination(8865U);
    msg.setDestinationEntity(155U);
    msg.original_source = 29764U;
    msg.destination = 40809U;
    msg.timeout = 0.23244977982800952;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 56U;
    tmp_msg_0.reason = 148U;
    tmp_msg_0.value = 0.2860698618220723;
    tmp_msg_0.timestep = 0.0010810568461930847;
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
    msg.setTimeStamp(0.06789142257351422);
    msg.setSource(23882U);
    msg.setSourceEntity(99U);
    msg.setDestination(61966U);
    msg.setDestinationEntity(186U);
    msg.original_source = 61580U;
    msg.destination = 23975U;
    msg.timeout = 0.6817176416636536;
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.4903235264975496;
    tmp_msg_0.y = 0.8987984075019211;
    tmp_msg_0.z = 0.5911763523943555;
    tmp_msg_0.phi = 0.2860612131822501;
    tmp_msg_0.theta = 0.9616364402641407;
    tmp_msg_0.psi = 0.1839932260546644;
    tmp_msg_0.p = 0.00043050154027102217;
    tmp_msg_0.q = 0.7695023605695084;
    tmp_msg_0.r = 0.4154247762615362;
    tmp_msg_0.u = 0.05056804833206041;
    tmp_msg_0.v = 0.18078100543982745;
    tmp_msg_0.w = 0.9124979910958669;
    tmp_msg_0.bias_psi = 0.3277375561538558;
    tmp_msg_0.bias_r = 0.28072699022312364;
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
    msg.setTimeStamp(0.6572323407451973);
    msg.setSource(44588U);
    msg.setSourceEntity(164U);
    msg.setDestination(13400U);
    msg.setDestinationEntity(200U);
    msg.type = 129U;
    msg.comm_interface = 47040U;
    msg.model = 26824U;
    msg.list.assign("IMGIWWETPRAGORZJUIHCHLUFZITDXHQLMKPQQOQNQGLKFQTMCXJWXGSJGGGETYTWOVBRAJWLBBBHEUXEVPIEOHQCYZZNNLFORMASMXKVLNNRGRASYPDAFFTLQBFYNCTYNONHXBUZSEBAZTLWGUBOEUUKYHYMKFACRXSXDGIHVFJKZDMKSTJCZKIVBNKOWUHAQCS");

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
    msg.setTimeStamp(0.3916991186846265);
    msg.setSource(11185U);
    msg.setSourceEntity(166U);
    msg.setDestination(51271U);
    msg.setDestinationEntity(128U);
    msg.type = 245U;
    msg.comm_interface = 21641U;
    msg.model = 55472U;
    msg.list.assign("JSSKSRTJKWMBEBRMYCOUAPGIBICWSKBUGSXHGQJMQCFNOVUCLJUTCWDCPYDZYYMXRDEZYWRUEHJRWSRNCEYFOMMTHSXNULZXYFWLZVDHEOKFXBEKMGTBLPCZAQSBPCMEVIIQUWLJSFDANOYJQPIVDRIQLTJOTQLWWLTYZTJZJYHDAQHKVIIGA");

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
    msg.setTimeStamp(0.2762877665282235);
    msg.setSource(6385U);
    msg.setSourceEntity(1U);
    msg.setDestination(41798U);
    msg.setDestinationEntity(215U);
    msg.type = 153U;
    msg.comm_interface = 24544U;
    msg.model = 22623U;
    msg.list.assign("CBGJVRTUGNMYNQRXUXEMYJCYPWHHZDGYYLXBFHFSMCOKBFDSOVOZPQWEMDSKJYHVHJABPGTWLEJQEIEISMUGULRBNZHDFSBFJOUDLIGZCOXXKOPSWSWNQKZPVEOVRMB");

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
    msg.setTimeStamp(0.5586126616864395);
    msg.setSource(37855U);
    msg.setSourceEntity(243U);
    msg.setDestination(58417U);
    msg.setDestinationEntity(137U);
    msg.type = 31U;
    msg.req_id = 1885536216U;
    msg.ttl = 54703U;
    msg.code = 112U;
    msg.destination.assign("FVOJYZXFOMDTEBTCMFGWCQSVYHKYSPTIQLGZYIXQGVVNKPUBJACPFRWBHLOIENXRUSOZBNLQJMKVJFNECBDBCXEEYORBRUXRZIGYVSAAVWNYUGYHUNPCCRNILLDBLCTJITUKSQMA");
    msg.source.assign("PEKRTFFXFMADSX");
    msg.acknowledge = 6U;
    msg.status = 203U;
    const signed char tmp_msg_0[] = {-25, -8, -106, -65, -79, -49, -70, -79, 8, -39, 112, 50, -66, 85, 80, 109, 56, 42, 92, -121, -20, -66, -16, -116, 45, -125, 47, 16, 35, 28, -118, -54, 91, -91, -41, 75, -39, -85, -30, -4, -21, -97, 99, -52, 61, -107, 122, 23, 78, -70, 34, 108, 111, -119, 122, -38, 33, 112, -47, 89, -70, -120, 84, 63, 53, -43, 59, 108, -67, -115, -113, 114, -65, 71, -56, 76, -60, 77, 13, -48, 99, -31, 25, -57, 24, -102, 12, 124, -49, 15, 124, -114, -105, 87, 49, -120, 57, 100, -36, -2, 93, -27, 3, -38, 121, -37, 18, -91, 22, -3, 13, 93, -35, -37, 66, -112, -73, -85, 57, -91, -81, -38, -83, -39, -81, -12, 79, 26, 39, 13, 25, 11, -107, -10, -24, 23, 95, 87, 86, -3, -92, 29, -88, -42, -51, -15, -50, -56, 45, -79, 31, 72, 48, -45, -37, -62, -111, 61, -52, 96, 120, 82, -28, 51, -32, -97, 102, -58, -7, -31, 13, -36, -128, 50, -72, 95, 26, 111, 113, -63, 20, 23, -18, -100, -35, 60, -124, -50, -94, -8, 14, 45, 59, 39, 77, 10, -49, -47, -54, 76, 93, -35, -11, 106, 20, 79, 22, 2, -105, 96, 111, -91, 46, 36, 74, -49, -35, 32, 71, -15, 84, 40, -89, 98, -45, -73, 85, -4, 1, 38, 51, 107, -31, 16};
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
    msg.setTimeStamp(0.7467246022285149);
    msg.setSource(17257U);
    msg.setSourceEntity(62U);
    msg.setDestination(4329U);
    msg.setDestinationEntity(21U);
    msg.type = 181U;
    msg.req_id = 2315537602U;
    msg.ttl = 28498U;
    msg.code = 43U;
    msg.destination.assign("HXJUJNFPCSSDYRXUQFSNUBPBOAGRAETEBAVCLWGKFNMKMXBHTNRUCSYNFDKDSBGCZNZIOQEBZJIQRZCTIHEWXEYOERDBJOWZUXPZPCHYFTCUJLWCMSIEDVXWTKQXQNVZFAFLVPYKPGANJWQLWGMSHOLIHZIQDGTUSFXIKRL");
    msg.source.assign("YSQKXRJKZBNUZGTGBDVJXNDUYENGVICEHEYTMYNFBOZPMMBLVLPJSHVIRJOMTLAFQEOIGGRYLEXQFBEKCEPKXRDMYKRHTOSWFZVUKSWRAVFBJCDAUTDWMOCBWZGFSQPTQADOINVVEPIZHUAKDQJPXZDYHJWWCAXURFBOP");
    msg.acknowledge = 116U;
    msg.status = 151U;
    const signed char tmp_msg_0[] = {107, 115, -100, 45, -106, -119, -7, 63, -26, 67, -43, 22, 93, -127, -128, 123, 12, 1, 30, -126, -58, -95, -62, 1, 15, 7, 1, 47, -67, 101, 77, -41, -48, 104, 43, 76, -31, 27, -117, 69, -104, 117, 53, 76, 77, 32, 36, 101, 9, 79, 110, -83, 87, 56, -78, 54, 65, -19, -115, 53, 65, -98, -20, 106, -16, 117, -40, -116, -91, -26, 51, -66, -53, -68, -36, -128, 96, -10, 74, -12, -47, -40, 45, 34, 65, -50, 80, -24, 104, 90, -30, -121, -86, -111, 118, 23, 103, -105, -31};
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
    msg.setTimeStamp(0.4041878414754593);
    msg.setSource(12911U);
    msg.setSourceEntity(123U);
    msg.setDestination(8306U);
    msg.setDestinationEntity(94U);
    msg.type = 150U;
    msg.req_id = 3773365183U;
    msg.ttl = 3647U;
    msg.code = 61U;
    msg.destination.assign("TYMHNVXIPDZTWUSITTIKHPLCENYEEAYXAUDNMVIFDLEAYLTLWCSFNEZWXWZFHRKURJQMWJLXJVIDVOOKOSNCBOGHJHKEVNSUWBYKNKUERFJXTGCRQBCSVGGCGWQSUJWPXRMWYXGJEQNLOZSOPAOGSHLVZCSBIKBCOAVKAAAMITZJICP");
    msg.source.assign("YKVOTAGICSWOGGVAWHWLDHFUERLNERDZFZRLGBULMQFINBAKQFTARQZPXNNEBQOTDSTPVJLFGYERCQJZAUYXBWKSIZWZRMHKIKAQGJUPYVGJRKCBCEBMXXPYRFYOZTWVCYLFRRVIHXPLESEHMVSPNDXCUENOXIITPTJKCVWPJKWLVHPZINDOHABIJJVNKMABDSJPOMFEX");
    msg.acknowledge = 9U;
    msg.status = 130U;
    const signed char tmp_msg_0[] = {-73, -85, 72, 33, 10, -94, 79, -91, -103, -43, -107, -65, 23, 122, 84, -22, -28, 45, -34, -107, 126, 60, -120, -6, -7, 67, 120, 105, 88, 78, -26, -87, 26, -100, -18, -22, -124, -42, -126, -33, -34, -36, 70, 122, 42, -90, -65, 52, -79, -113, 126, 96, -58, 48, 121, -85, -6, -60, -98, 44, 96, -4, 45, 122, 121};
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
    msg.setTimeStamp(0.14778695708782652);
    msg.setSource(24818U);
    msg.setSourceEntity(36U);
    msg.setDestination(6535U);
    msg.setDestinationEntity(198U);
    msg.id = 231U;
    msg.range = 0.015534219156507767;

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
    msg.setTimeStamp(0.4099235401594904);
    msg.setSource(53629U);
    msg.setSourceEntity(61U);
    msg.setDestination(39838U);
    msg.setDestinationEntity(1U);
    msg.id = 51U;
    msg.range = 0.925879261896008;

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
    msg.setTimeStamp(0.02333975057040083);
    msg.setSource(8342U);
    msg.setSourceEntity(178U);
    msg.setDestination(39274U);
    msg.setDestinationEntity(196U);
    msg.id = 78U;
    msg.range = 0.7364893166186827;

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
    msg.setTimeStamp(0.11874438985578673);
    msg.setSource(9152U);
    msg.setSourceEntity(37U);
    msg.setDestination(13080U);
    msg.setDestinationEntity(158U);
    msg.beacon.assign("JQCUYQZXFKCHLRPHCLZJJNDPLETYVFBKTJYSWTBPGGIGRWDYGEPNIOBOUEODCZSRFMMIYEWRWAYCZWTVIBUKHWJTZKAQUJRADAVWNPADKFNRSREFVHYRBJBNBGJTQXAS");
    msg.lat = 0.985348641319311;
    msg.lon = 0.5916688319891409;
    msg.depth = 0.04553405208673722;
    msg.query_channel = 18U;
    msg.reply_channel = 93U;
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
    msg.setTimeStamp(0.8427214459500191);
    msg.setSource(30285U);
    msg.setSourceEntity(194U);
    msg.setDestination(18454U);
    msg.setDestinationEntity(197U);
    msg.beacon.assign("KZQEEKWSTDKUFOMVSWBTQCAWESGLZSMGLEYFNLOOHVYATHYLAUMBDWBDHDZZIKOISOTLBRRJFYJGRCPHNOUVQBSEDUVXGTKPJACUGVRPKBFLGUXJAWXJODJCXWIGYEKPYBPIVGPRDENHDW");
    msg.lat = 0.5895769918726393;
    msg.lon = 0.15933148974180888;
    msg.depth = 0.9199169911432798;
    msg.query_channel = 146U;
    msg.reply_channel = 114U;
    msg.transponder_delay = 5U;

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
    msg.setTimeStamp(0.02705789024816796);
    msg.setSource(36421U);
    msg.setSourceEntity(182U);
    msg.setDestination(13985U);
    msg.setDestinationEntity(74U);
    msg.beacon.assign("TIDHOBEJTFQCPUZQSLSQ");
    msg.lat = 0.17608237224429302;
    msg.lon = 0.961760062338475;
    msg.depth = 0.19621833841645475;
    msg.query_channel = 179U;
    msg.reply_channel = 181U;
    msg.transponder_delay = 109U;

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
    msg.setTimeStamp(0.252503347362122);
    msg.setSource(24959U);
    msg.setSourceEntity(227U);
    msg.setDestination(20843U);
    msg.setDestinationEntity(121U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.5015981550856566);
    msg.setSource(48710U);
    msg.setSourceEntity(103U);
    msg.setDestination(43441U);
    msg.setDestinationEntity(134U);
    msg.op = 153U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PYIMYFVWLWDZZPWFOXMCEHALSVEHMSHPNRJAQBDEJFVBRBCELUULOUXEXJLLLT");
    tmp_msg_0.lat = 0.6549963612233937;
    tmp_msg_0.lon = 0.8142915558791749;
    tmp_msg_0.depth = 0.4559411504772245;
    tmp_msg_0.query_channel = 120U;
    tmp_msg_0.reply_channel = 169U;
    tmp_msg_0.transponder_delay = 221U;
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
    msg.setTimeStamp(0.5673412175145679);
    msg.setSource(20552U);
    msg.setSourceEntity(61U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(1U);
    msg.op = 170U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NQDGGABOINCHKGRHSBCTYYLATXNDBUFYBEEXYHDCJWQZNXZIHHWFSMOJCXPSGPCJSZCLHWOMGYUKHIMCSKYVDKFNAFOIOEHJDUXWQNCVOUMSDFUQHZNXQLRSQYJEVFPBU");
    tmp_msg_0.lat = 0.24275716261946256;
    tmp_msg_0.lon = 0.18805041896732044;
    tmp_msg_0.depth = 0.8656152734983023;
    tmp_msg_0.query_channel = 141U;
    tmp_msg_0.reply_channel = 171U;
    tmp_msg_0.transponder_delay = 46U;
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
    msg.setTimeStamp(0.7320887162128721);
    msg.setSource(34179U);
    msg.setSourceEntity(227U);
    msg.setDestination(54797U);
    msg.setDestinationEntity(172U);
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 55654U;
    tmp_msg_0.lat = 0.6997952262029059;
    tmp_msg_0.lon = 0.2843329665355264;
    tmp_msg_0.z = 0.1765737605654657;
    tmp_msg_0.z_units = 214U;
    tmp_msg_0.pitch = 0.5067589349224482;
    tmp_msg_0.amplitude = 0.15253054612393735;
    tmp_msg_0.duration = 5704U;
    tmp_msg_0.speed = 0.8063878290055877;
    tmp_msg_0.speed_units = 235U;
    tmp_msg_0.radius = 0.3884452431400861;
    tmp_msg_0.direction = 38U;
    tmp_msg_0.custom.assign("SJVCIHTZXPYPKTXSZOYHGINCMIWMWOLDGJKJWQULLADLCXVCQRWYHTMMDUUARMIDPYGHODAHZFUJJYCNRXVYVNUQVDBSZEXL");
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
    msg.setTimeStamp(0.7371168918754256);
    msg.setSource(27387U);
    msg.setSourceEntity(58U);
    msg.setDestination(35271U);
    msg.setDestinationEntity(132U);
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 98U;
    tmp_msg_0.entities.assign("OTGCDBSEKDHAUCKMLDTPREPWOZECKNVFFAJFUITASXUHMNOPGUQEQODPQOERIVERRMZSCOHVTYHDXCSCSDKRXDGLJKAKCYZALUXYBHIKKLENOMIUIXHSYBFMMLDWOBFCISLQDQJPZSCVLBURJTPMYKJIFTBXHLIRGTJXRXVJWOMPQFULXNCHBHPIYTHVZYIDUAZUAWVRQYWNGSJZBFGRJGZQMWWLEGASGNNBJNAYZABGQPVETN");
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
    msg.setTimeStamp(0.4845550995934167);
    msg.setSource(19184U);
    msg.setSourceEntity(214U);
    msg.setDestination(15674U);
    msg.setDestinationEntity(191U);
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.005996469694734885;
    tmp_msg_0.lon = 0.7347746847962369;
    tmp_msg_0.z = 0.30266747679707773;
    tmp_msg_0.z_units = 73U;
    tmp_msg_0.speed = 0.6327686079485595;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.takeoff_pitch = 0.5695339782028388;
    tmp_msg_0.custom.assign("OJHMLESSDZALRQRNMFZJWTEWYDHHHVOUGYJLMSGCVCVQXJBLAVZCLJEUPNFEIMIOWQFKMDJRVTCGJIZQPWWFHJIJKQRSLXTDTKZZAGAACDFN");
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
    msg.setTimeStamp(0.5577924659693194);
    msg.setSource(15726U);
    msg.setSourceEntity(159U);
    msg.setDestination(46922U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.9622964549450037;
    msg.lon = 0.06843593387726432;
    msg.depth = 0.8406502219825148;
    msg.sentence.assign("JWOEBCWSVNTXAZKQMGSKOSXTMLMEZMWAIYUNEKPFDVUVGCVVOOJQDJHISABPDEFLAWHGCVPLCAXPUYBIADHTWRRIJDSYBGMHWBTGKKQIFCMSQUGRKQZXNF");
    msg.txtime = 0.5743167562847411;
    msg.modem_type.assign("KBEBLJFCCARAELCGYPSZUJBIWBSRSYSHZFBRJQDMTCSOJWTSBLAONUGHEYDDYHNSEGQWOLARTXFXWFZWPYKXEIOFKHIMFXGJUVWNXOETQXLDNUBTPRFJYZTVMRXUSNKXAPRUZMPPROKMMCIVAEVUVWPKWCQHAGVWIUSOVINKSNQVIUHZQCLMYQEEGGNTPCHQAMXDGBDJNZJDFCYDWTJGNLTMD");
    msg.sys_src.assign("LPVGBXNSBYSBYBIBHLCBDKFOJBKTRJEWKYRHKUWEWWFIFXKJMOMKFFILMTESTOUDXGEDFNNUSGJSIRYOQKHNCAVGHSMDMUSHSDXXQEYLTRVCQGTQPMDOCXXYEQGIRCWMRIFWCZOLROYCAQHFNGZNNQHJVOYQWJFUMUTAGJLZTWXOBMKGVYWULAUJZJTEVJXHQAGURAPLWVHCPUNESIAIPZ");
    msg.seq = 23407U;
    msg.sys_dst.assign("GCYLOURHLADBPBKSFIPPKFBHXWPDVHNXXQBUUROTMTTZQXOYVNBMTYJEYINVGQPLSSBZXDUGAGPEIKNSYCJLCZQNWFLGVRNAKRSSMYIPFVIIWDPQFXEKWRQTDNCGIHZUBYXLJCKQTTWZRSOWXUVVNDUOSXLAQOEKWPFMHHYUKRZA");
    msg.flags = 198U;
    const signed char tmp_msg_0[] = {-12, 69, -11, -104, -128, -96, 92, 123, -39, 89, 114, 83, -21, 17, 20, 25, 68, 31, -54, -17, 28, -125, -101, 14, -46, -97, -45, 73, 75, -35, 46, -73, -20, -105, -15, 80, -85, 24, -91, 126, -36, -58, 14, -50, 82, 94, 95, 45, -51, -113, -80, -70, -5, 12, -11, 61, -48, 40, 70, 97, 126, 38, -98, 89, -49, -86, 11, -65, -110, 34, 45, 7, -109, 60, -50, 112, 21, -71, -73, -76, -59, -98, 24, 62, 84, -80, -94, -76, 81, -46, 53, -63, -87, -94, -118, 10, 66, 5, 68, -98, 47, -51, 39, -29, -82, -24, 65, -7, -55, -111, -90, -48, 26, 119, 12, 62, -27, 99, -67, 93, -64, -49, -38, -100, 81, 20, -94, -74, 115, -4, 79, -121, -35, 39, -4, 64, -92, 87, 67, 7, -96, -46, 8, 59, -30, 112, 61, 18, -88, -63, 21, 0, 7, -85, -73, -128, -94, -26, 48, 98, -74, 103, -87, 32, 114, -5, 4, 109, 20};
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
    msg.setTimeStamp(0.08860503882480497);
    msg.setSource(8274U);
    msg.setSourceEntity(82U);
    msg.setDestination(17259U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.6461467844508665;
    msg.lon = 0.1357993781316651;
    msg.depth = 0.996121494521884;
    msg.sentence.assign("RSJNZHRFVRRNDMLGXGSDJWLUDNOERGAYFOEPGLZIHFGHUUKVBXSNIGWBEPUQMTVQSWJHQQQLSKKGUKVXNLHANMQWSAHCVUWOZTKYHHDBZPKLTIXUEAUJEWLBVCPYTCJRWBBPGXSPMBCEQPXCRIOJPCDHKYQTDCDXFNIPWKYDCBHYCNFWMIAOMMVZCVJTELRUOTZMXNI");
    msg.txtime = 0.9938740940847636;
    msg.modem_type.assign("ZNHXREJMQFPSYIAPUCKGMBXAQLXCABHFYETNVIRYBLSGKFOSVIBPHXKUIVOOFCXBULVMWFRCDUPQIEZIUNTZEVPJTWIQPDKXNQIJKYDHYZGQWOVMJGAEQVUUYTZNCSASNOCNHPXGHTLLRWRVFYASBYKDDWOTLMMQMGFOEZB");
    msg.sys_src.assign("EUQGZJBBWSOZMVWGJDFXREFJALRWIZIGUVNGSPEEKKLKIKHZIRHONSYYMLDXPRDRVAMCOQQBRXFCSOYPUKMCDKBYHRO");
    msg.seq = 8003U;
    msg.sys_dst.assign("YOHGMZCKAGHQPFSEXGAMIWWUTBXAZFUMHRCUWLIOKNQSEPUMAJBFNMYXZDIEHSDIYKJFZIFZSGQLGDXTGSPFQJRANBDVITXVUDVCHTVTPQENBJYGROXRZUBWRJHJXQOXOSMDSQZRKCVTISWWYCGKNDLVSUDKRUCDMSLYHLBOXDWEIALJJAQUMERULTGRNPCVYBYGEHKFPZOQRVOEFACQXIBLBYWKTBINYF");
    msg.flags = 161U;
    const signed char tmp_msg_0[] = {-124, -64, 31, 31, 116, 69, 2, 70, 14, -9, 114, -120, -127, -118, -116, -45, -52, -17, 12, 40, -121, 110, -6, 56, 87, 48, -42, -115, -73, -8, 111, 50, 57, -36, 57, 89, -123, 51, 21, 1, 113};
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
    msg.setTimeStamp(0.6563872344985325);
    msg.setSource(62956U);
    msg.setSourceEntity(109U);
    msg.setDestination(1100U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.7480158313213597;
    msg.lon = 0.3405919018292435;
    msg.depth = 0.7595395735296525;
    msg.sentence.assign("IGPSSVOQTZGYOUYOPVXQGLKJZFLATNWHWNUIIKAPQLXRNFOXTWREGVSPDMMFHSEDBDFQMHAGYCGUIZGIRAFZEWXKTJKJMIHRMKPNRSAALTNZUQKALIEQHNTTM");
    msg.txtime = 0.9472011886849485;
    msg.modem_type.assign("NKXZNBOEMPTDNFVEZJURVATSQGAWFGHJZHHACRYAMHQGWUZQXOBGEIQBVIOTLUQOJLZWTISIEUXICKUDU");
    msg.sys_src.assign("FMQTOPBYNJKLKYOXTGDAUZVGCUSEJIJBGWNYYTABRPIPZQFFALNXIZUOVRMJNUDNCMWGEHLIMKJAALIPSBSPWFLFBCUKRCSOTLQKXDDGAAYEPBKEUSCLRWMJTUNNHNGUXDHZMOSWRAOIBNVXMSJTHJXEYHIEOYWUQXZTQQEHQWVHKIDMPTHEZMLCPOCVGYOEDKZWTLXBOIFQAFRIFDDREJYXBWXTGFKJYQUPVN");
    msg.seq = 61897U;
    msg.sys_dst.assign("RMILCGEMYFNNTXCOFFRYAPDEGXUTGUNBPBEZYHEBXODIHOTTMPWABMRKMQUVPUCHJDZQVZCPTLAMTSPUZYQDHNP");
    msg.flags = 217U;
    const signed char tmp_msg_0[] = {-76, 59, -92, 63, 74, 109, -114, 41, 75, -39, -24, 68, 99, 67, 51, -87, 16, -53, -110, 37, -11, -10, 53, -89, -50, -71, 88, 16, -68, 6, 21, 73, -83, 109, -123, -89, -43, -103, 44, 118, -9, 29, 125, -11, -61, -69, 93, -81, 7, 108, 76, -96, 35, -70, -66, -97, -43, 46, 126, 50, 13, -8, 35, 11, -127, 58, 0, 11, -17, 36, 76, -91, 22, 88, 72, 96, -28, -26, -2, -74, -96, -107, -48, 13, -64, -15, 85, -113, 69, -69, 44, -86, 54, 69, 1, -62, -59, -118, -95, 33, -24, -1, -76, -90, 11, 38, -40, 32, -109, -123, -5, -107, -74, -123, 26, 77, 61, -26, -40, -65, 44, 16, -28, -27, 113, -99, -101, 107, 86, 75, 76, 103, -9, -116, 121, -8, 28, -83, 122, 38, 105, 119, 71, -103, -104, -21, 33, -105, -107, 12, 124, 15, -116, -52, -4, -6, 41, 94, -84, -39, -45, -124, -10, -38, 53, 47, 75, 68, -38, -51, 20, -111, -85, -80, 26, 99, 66, -2, -60, 33, 81, 49, 17, -83, -85, 1, 88, -3, 1, 102, 64, -20, 49, -44, -47, -66, -116, 22, 110, 109, 17, 104, -66, 33, -21, -83, -84, -33, -31, 41, 120, -115, 93, -33, 34, -82, -57, -46, 118, -30, -105, 29, 38};
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
    msg.setTimeStamp(0.9864608266641014);
    msg.setSource(128U);
    msg.setSourceEntity(135U);
    msg.setDestination(63057U);
    msg.setDestinationEntity(107U);
    msg.op = 211U;
    msg.system.assign("ZBSGBRHSSBRVNRVFZRYAKZOEXNRJXMKBIILDXFPDTABKLWMVHWLCHGORTQFCZELKKMQHDCXGTJOSYHXONKVIMERYEFAEZHANAXIJGPEUMPXQVNTAGSJVWDQUSGKOGWYFSQUQPSOUJZCOCLEOTYZTIRTDTWCZCXYJEHHBHBVRPKPNMIARGJYJLNEZNOBLQPFIOVJWCUEZIUTDBVMCIDDFGDFMKSDNIWJXYKQLYUQSAFLWGAYMUXMV");
    msg.range = 0.23379262527079958;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.592498334686474;
    tmp_msg_0.lon = 0.6488534307567998;
    tmp_msg_0.z = 0.4959229270777782;
    tmp_msg_0.z_units = 120U;
    tmp_msg_0.radius = 0.8623917970831826;
    tmp_msg_0.duration = 4005U;
    tmp_msg_0.speed = 0.1891323666460203;
    tmp_msg_0.speed_units = 185U;
    tmp_msg_0.popup_period = 52533U;
    tmp_msg_0.popup_duration = 19263U;
    tmp_msg_0.flags = 89U;
    tmp_msg_0.custom.assign("CQBTELNEZASKFQBOFMOWNVHRRUOERVJGNTIQABSTOZXMQPHSLLGBFGPWYDNPNABBITUTVERCHMJGUYYWZFMNLVHTNOZOKYHLUZEXUKSAGKXUJJIEWQJRHWRRLKUX");
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
    msg.setTimeStamp(0.5773839253340979);
    msg.setSource(10955U);
    msg.setSourceEntity(160U);
    msg.setDestination(57234U);
    msg.setDestinationEntity(11U);
    msg.op = 217U;
    msg.system.assign("VUOIUCFFWNRGUNWIHBTPLYTJWFVTLJDVZOBUDRZJPEVNQVXGALSUHOTTWZLYUIGFNQMZXUKYHYEPWLIHRFDEQFIKMAWCPTMLCDZPSXGJGPCAAVHKGVVEFWSKSTEJRBHWCSORMMMRSXHDNAUJGXQZSDKTGJSYRHOAFDIDBYMIZ");
    msg.range = 0.33670918276097217;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.6444545180969934;
    tmp_msg_0.y = 0.6461526684830426;
    tmp_msg_0.z = 0.5501802001879406;
    tmp_msg_0.k = 0.20359646554549438;
    tmp_msg_0.m = 0.5165661744726953;
    tmp_msg_0.n = 0.7578365297050864;
    tmp_msg_0.flags = 136U;
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
    msg.setTimeStamp(0.5507421267245037);
    msg.setSource(65419U);
    msg.setSourceEntity(155U);
    msg.setDestination(50698U);
    msg.setDestinationEntity(229U);
    msg.op = 143U;
    msg.system.assign("UAXNTRRXMWCSDTNWCEJKLNXCCXWAWPVHQIZYERJYNNNFUGOXBBVMSHZYFFOSDMTEMXBXHBSOUJHJDUEEQUCZKRGLMKYIBMFGIEQAYKAQOASLHVWJFRDFPQVTIEOLUKPXMAUQGBOJKTHTCNRYZFKITBXUDARVSZDZHSIQJNKKGTXELYOFCVDRVWLZWPCDPY");
    msg.range = 0.8416598842900955;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.19877516552633945;
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
    msg.setTimeStamp(0.3386386212477198);
    msg.setSource(38153U);
    msg.setSourceEntity(190U);
    msg.setDestination(31285U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.7536727247399946);
    msg.setSource(33354U);
    msg.setSourceEntity(13U);
    msg.setDestination(1803U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.47407114074739576);
    msg.setSource(8465U);
    msg.setSourceEntity(46U);
    msg.setDestination(54506U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.05055138460171926);
    msg.setSource(16522U);
    msg.setSourceEntity(152U);
    msg.setDestination(5812U);
    msg.setDestinationEntity(137U);
    msg.list.assign("SYUPPIQLWTQWCBEXCTHVICYSRWFZLWBGZPVKMNAKEGDMUVZSROXQWGD");

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
    msg.setTimeStamp(0.6544415709369561);
    msg.setSource(7495U);
    msg.setSourceEntity(147U);
    msg.setDestination(49035U);
    msg.setDestinationEntity(245U);
    msg.list.assign("MUETOXYBTJSUTQSJINFBIZULHAKKCOIMYBDOMWUKGQVYMCBRXVRYAPPHMSXSANOVLJFNMBPCXDPVEJEWAZDWPORWOINPRGMLVMSKLXRPDEDWTFEZDQMMUJJDGUVTFXQKXYUOXXIQOKEJ");

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
    msg.setTimeStamp(0.5972590279467828);
    msg.setSource(1657U);
    msg.setSourceEntity(54U);
    msg.setDestination(51733U);
    msg.setDestinationEntity(5U);
    msg.list.assign("HJQQAWNIIOBEMLQD");

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
    msg.setTimeStamp(0.982692634750466);
    msg.setSource(22399U);
    msg.setSourceEntity(44U);
    msg.setDestination(6150U);
    msg.setDestinationEntity(248U);
    msg.peer.assign("XXUGXFCVRTLMBOQFJFWILZBSYWNBSVKODEUVMQUTDOLATFLEOKMRSAMOPJUJAJYGFKZENHRVCLGZLPFNAMHIAMKBLHKSCEVJFZVWUECHRLJYPTBGPYYWGNRGBOTDGTLNVPVCQDPIUPR");
    msg.rssi = 0.8001878953234928;
    msg.integrity = 23068U;

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
    msg.setTimeStamp(0.5099670343565427);
    msg.setSource(50889U);
    msg.setSourceEntity(125U);
    msg.setDestination(13002U);
    msg.setDestinationEntity(48U);
    msg.peer.assign("ALUAHSZGKZNLOVWWNMGZIYRTGJRKHDXRMSNGIBEEPBZLWYHRHXEIUBLDSCOGWWNBOUAXWVDFNFTMVUAICIMSCMPZYHHWIPSZNXE");
    msg.rssi = 0.3800595224551656;
    msg.integrity = 39438U;

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
    msg.setTimeStamp(0.06960993429712603);
    msg.setSource(46823U);
    msg.setSourceEntity(186U);
    msg.setDestination(17604U);
    msg.setDestinationEntity(244U);
    msg.peer.assign("BCFFBVTJOOXIYRMVQOMWOKGATPLKZUYANEYVLAXNSCPHWYFQ");
    msg.rssi = 0.4911025263144654;
    msg.integrity = 52023U;

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
    msg.setTimeStamp(0.9384850056991965);
    msg.setSource(9241U);
    msg.setSourceEntity(86U);
    msg.setDestination(40914U);
    msg.setDestinationEntity(229U);
    msg.req_id = 54878U;
    msg.destination.assign("UMOEEGAOGTNBV");
    msg.timeout = 0.6482091008798898;
    msg.range = 0.8861209068514733;
    msg.type = 154U;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.9610741169436275;
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
    msg.setTimeStamp(0.08061815631979918);
    msg.setSource(5505U);
    msg.setSourceEntity(144U);
    msg.setDestination(54411U);
    msg.setDestinationEntity(214U);
    msg.req_id = 44299U;
    msg.destination.assign("FLMBRFCJXCRUINRFUBMCIFXQURMWAPNENTGAQUDCNRGOXYYNYOPFXJGBLUZMIKBHKICXRKKYGSOSQRMCSAFUHWDAVTCSQEJTKIWIMWPEAXBVUEEWOZVTMZWEHIYJDZKWXINMLMCWTRQZDHUOTULLUHZ");
    msg.timeout = 0.00600256212603778;
    msg.range = 0.18732876544285526;
    msg.type = 197U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55038U;
    tmp_msg_0.off_x = 0.1579286981678194;
    tmp_msg_0.off_y = 0.5973252072760409;
    tmp_msg_0.off_z = 0.7345623876468199;
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
    msg.setTimeStamp(0.7289789636516674);
    msg.setSource(51323U);
    msg.setSourceEntity(149U);
    msg.setDestination(12096U);
    msg.setDestinationEntity(23U);
    msg.req_id = 54082U;
    msg.destination.assign("GWRMWHMXNVLWFHXTGCLDEVDIQWKIKYJDZUZPOKCYRBIZOYFYKEDJARACKXNLQBSKQJMWZUZONPGYQPTG");
    msg.timeout = 0.2623054749665512;
    msg.range = 0.43042860729434385;
    msg.type = 116U;
    IMC::CommRestriction tmp_msg_0;
    tmp_msg_0.restriction = 94U;
    tmp_msg_0.reason.assign("QKMADRAMVTYNTBBSFUCTCJSJYZPUHFZUZIAGZFUYCHPTAWGTBGNINGCQBDJWQXBANRYWXUBMJREOEHZFJEUPUVRKDHRBWKYNLSEQPWDSQNZXRSVDMTNZGQVHTVVINBDOVIXDRJLCWYBLVWQEKJQJAEGSYFTQHCMWPIKALDXXXOOGWKPEMHZDICRPXLJPWPOCGUIOILRJERDFZMEMGULYYOXHKAENUFSMMYXKKFOT");
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
    msg.setTimeStamp(0.536495447435272);
    msg.setSource(36195U);
    msg.setSourceEntity(51U);
    msg.setDestination(3213U);
    msg.setDestinationEntity(55U);
    msg.req_id = 32635U;
    msg.type = 211U;
    msg.status = 114U;
    msg.info.assign("OTSYSTRVGZMTHHEPJJZMYMJQHIGFQKWZUFISDLJHKZB");
    msg.range = 0.896170058863085;

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
    msg.setTimeStamp(0.7542278714931594);
    msg.setSource(39956U);
    msg.setSourceEntity(175U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(234U);
    msg.req_id = 61053U;
    msg.type = 235U;
    msg.status = 165U;
    msg.info.assign("EFXEWZLKXGVOQASSHPVQPLFREDHUKNXNSQKBTOKPBGJZWQYCRYREHWIULFILTGTBXSSEJANURWWFPADGIDHBVKUYOUPKMYRJMJAHHQFZRTSPFDMWVUBRZYDPVZEFMDTQVKAXUZISHBVIEDTJONOPXJORBNJYAICLZICPLYUHTSUMGYXNPZXLCGGQWLYECDIITHDCCQ");
    msg.range = 0.9587711789066745;

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
    msg.setTimeStamp(0.9929093443675268);
    msg.setSource(9899U);
    msg.setSourceEntity(84U);
    msg.setDestination(60168U);
    msg.setDestinationEntity(99U);
    msg.req_id = 60165U;
    msg.type = 246U;
    msg.status = 148U;
    msg.info.assign("MWEIIAZLJDGQXLLNOSONDHAXQHBVCBBYKYZZHFGSJOVNJDYFYHEABDKQEUKRNFVKHIZYIKQSPRXACTNFROZIXSJUBEFLSPTCYZITHWSCBMNSNGTPYILWSVCQHTPPWTRDATUNAZJEOQWLFVQ");
    msg.range = 0.3374814215883266;

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
    msg.setTimeStamp(0.18385453582301725);
    msg.setSource(52646U);
    msg.setSourceEntity(183U);
    msg.setDestination(14500U);
    msg.setDestinationEntity(179U);
    msg.system.assign("QAPKJVDMPJOFAKNTPLEQTCFJSUCDVWOYEFEDGGQVGKIZLSMCRNVJYUNUUAWENAFFDMZYJYKYTLZGXHFUJINPRZWSWHXTWPSODBVXEZWHYWOKZSZIOCMBMAYRDYTBUHHQMBVMABHHHMZLOODIUGWSLFAJHTTDLCJPACRGLZRTCRADBQXJIGGXVEBONVQSQFLKLPNBWQJLKRBFEEMIXGIPZUDKV");
    msg.op = 98U;

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
    msg.setTimeStamp(0.4069256326905647);
    msg.setSource(38827U);
    msg.setSourceEntity(108U);
    msg.setDestination(19019U);
    msg.setDestinationEntity(90U);
    msg.system.assign("MUWJAIZPXBWNOOMCDKBXQOUCYHJLIFDIKQYMOONYWABXTCAYSXENTWOCXZZKYLTKPCZXFHHLRULTBPEN");
    msg.op = 253U;

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
    msg.setTimeStamp(0.5491966865515479);
    msg.setSource(26508U);
    msg.setSourceEntity(190U);
    msg.setDestination(35083U);
    msg.setDestinationEntity(164U);
    msg.system.assign("CMSYDESIQPYNWPYTKRUGLYKOBOLRGKSDPUVYALKFYVGVPKGSPDVIPWYNEKHQQZXAKMTKFLXWQEPMMQRRQSZJFIAXSCHWMEYFCDCMHHVWQWPDWFUNVESSUABYNLRHETZGILWRDTDZHGBJLIMXFVIQFNJCCULUIVZDOWVNNDPQA");
    msg.op = 60U;

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
    msg.setTimeStamp(0.4802113661988151);
    msg.setSource(27031U);
    msg.setSourceEntity(41U);
    msg.setDestination(55536U);
    msg.setDestinationEntity(152U);
    msg.value = 22742;

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
    msg.setTimeStamp(0.8231671455460756);
    msg.setSource(18815U);
    msg.setSourceEntity(178U);
    msg.setDestination(11250U);
    msg.setDestinationEntity(226U);
    msg.value = 18546;

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
    msg.setTimeStamp(0.06151791855038313);
    msg.setSource(38837U);
    msg.setSourceEntity(146U);
    msg.setDestination(4912U);
    msg.setDestinationEntity(138U);
    msg.value = -10217;

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
    msg.setTimeStamp(0.4035050536198298);
    msg.setSource(45653U);
    msg.setSourceEntity(42U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(204U);
    msg.value = 0.4469920620968788;

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
    msg.setTimeStamp(0.7147405373574629);
    msg.setSource(52581U);
    msg.setSourceEntity(161U);
    msg.setDestination(12446U);
    msg.setDestinationEntity(217U);
    msg.value = 0.6668096434773281;

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
    msg.setTimeStamp(0.46330638627150444);
    msg.setSource(42525U);
    msg.setSourceEntity(178U);
    msg.setDestination(50513U);
    msg.setDestinationEntity(239U);
    msg.value = 0.6173431684645343;

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
    msg.setTimeStamp(0.1648654747195768);
    msg.setSource(30044U);
    msg.setSourceEntity(8U);
    msg.setDestination(31360U);
    msg.setDestinationEntity(213U);
    msg.value = 0.006380162716491222;

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
    msg.setTimeStamp(0.6135550989585494);
    msg.setSource(53608U);
    msg.setSourceEntity(29U);
    msg.setDestination(4861U);
    msg.setDestinationEntity(49U);
    msg.value = 0.41282394434491787;

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
    msg.setTimeStamp(0.4089134629734734);
    msg.setSource(5087U);
    msg.setSourceEntity(107U);
    msg.setDestination(52159U);
    msg.setDestinationEntity(19U);
    msg.value = 0.10740367530486328;

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
    msg.setTimeStamp(0.22783960981942641);
    msg.setSource(39057U);
    msg.setSourceEntity(141U);
    msg.setDestination(40133U);
    msg.setDestinationEntity(205U);
    msg.validity = 25304U;
    msg.type = 66U;
    msg.utc_year = 8763U;
    msg.utc_month = 188U;
    msg.utc_day = 107U;
    msg.utc_time = 0.5811055259300689;
    msg.lat = 0.5452924363299515;
    msg.lon = 0.7565770039695333;
    msg.height = 0.48547595511575725;
    msg.satellites = 189U;
    msg.cog = 0.9549248339559724;
    msg.sog = 0.9413481706581345;
    msg.hdop = 0.9302825594467097;
    msg.vdop = 0.7055963149666319;
    msg.hacc = 0.2689197218935948;
    msg.vacc = 0.4844177580616974;

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
    msg.setTimeStamp(0.9447808582249382);
    msg.setSource(4090U);
    msg.setSourceEntity(152U);
    msg.setDestination(63042U);
    msg.setDestinationEntity(174U);
    msg.validity = 36403U;
    msg.type = 4U;
    msg.utc_year = 42817U;
    msg.utc_month = 81U;
    msg.utc_day = 21U;
    msg.utc_time = 0.011956277590712938;
    msg.lat = 0.5569000694259174;
    msg.lon = 0.6694353511415821;
    msg.height = 0.2930157295040309;
    msg.satellites = 172U;
    msg.cog = 0.3149637910177624;
    msg.sog = 0.5836147379575379;
    msg.hdop = 0.8197943534342957;
    msg.vdop = 0.9341059559049328;
    msg.hacc = 0.6650613450027335;
    msg.vacc = 0.06528746683265052;

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
    msg.setTimeStamp(0.9204401652653861);
    msg.setSource(64449U);
    msg.setSourceEntity(118U);
    msg.setDestination(1722U);
    msg.setDestinationEntity(179U);
    msg.validity = 54021U;
    msg.type = 91U;
    msg.utc_year = 49645U;
    msg.utc_month = 160U;
    msg.utc_day = 4U;
    msg.utc_time = 0.40741408503851495;
    msg.lat = 0.4234143845245868;
    msg.lon = 0.17028163651042294;
    msg.height = 0.9383945457950069;
    msg.satellites = 93U;
    msg.cog = 0.30304968473504057;
    msg.sog = 0.9139336861203983;
    msg.hdop = 0.02631313744696584;
    msg.vdop = 0.1814571673894999;
    msg.hacc = 0.7762188769090964;
    msg.vacc = 0.5132300594958373;

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
    msg.setTimeStamp(0.8284841871282559);
    msg.setSource(35550U);
    msg.setSourceEntity(183U);
    msg.setDestination(55320U);
    msg.setDestinationEntity(246U);
    msg.time = 0.5587427499432338;
    msg.phi = 0.4303271828565849;
    msg.theta = 0.6766887877590051;
    msg.psi = 0.3546986291599985;
    msg.psi_magnetic = 0.21214089479757814;

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
    msg.setTimeStamp(0.5118821320804909);
    msg.setSource(63288U);
    msg.setSourceEntity(213U);
    msg.setDestination(20412U);
    msg.setDestinationEntity(201U);
    msg.time = 0.9212358579372466;
    msg.phi = 0.9247464692099431;
    msg.theta = 0.8082345749185222;
    msg.psi = 0.13876981816323097;
    msg.psi_magnetic = 0.47261898704565386;

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
    msg.setTimeStamp(0.5129092875968081);
    msg.setSource(9003U);
    msg.setSourceEntity(16U);
    msg.setDestination(38265U);
    msg.setDestinationEntity(92U);
    msg.time = 0.780314146200791;
    msg.phi = 0.09043280705414625;
    msg.theta = 0.7549280146730172;
    msg.psi = 0.12790828359586393;
    msg.psi_magnetic = 0.506939189111981;

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
    msg.setTimeStamp(0.43753217313646675);
    msg.setSource(51604U);
    msg.setSourceEntity(91U);
    msg.setDestination(36261U);
    msg.setDestinationEntity(21U);
    msg.time = 0.8085984586793232;
    msg.x = 0.5473873516712611;
    msg.y = 0.8877977457890441;
    msg.z = 0.6905809581850676;
    msg.timestep = 0.313863052246659;

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
    msg.setTimeStamp(0.08218634525753754);
    msg.setSource(56353U);
    msg.setSourceEntity(154U);
    msg.setDestination(57816U);
    msg.setDestinationEntity(93U);
    msg.time = 0.4500012674745605;
    msg.x = 0.464825609261032;
    msg.y = 0.46761224427663284;
    msg.z = 0.5313874652789234;
    msg.timestep = 0.033171579728330514;

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
    msg.setTimeStamp(0.5601114206033657);
    msg.setSource(53520U);
    msg.setSourceEntity(114U);
    msg.setDestination(12881U);
    msg.setDestinationEntity(157U);
    msg.time = 0.10331871157011219;
    msg.x = 0.16012004528644352;
    msg.y = 0.5932731162739842;
    msg.z = 0.6385545939613008;
    msg.timestep = 0.6902358493415839;

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
    msg.setTimeStamp(0.9832975214543875);
    msg.setSource(62687U);
    msg.setSourceEntity(184U);
    msg.setDestination(46534U);
    msg.setDestinationEntity(191U);
    msg.time = 0.7662057600242913;
    msg.x = 0.2724207929828427;
    msg.y = 0.10094028475388395;
    msg.z = 0.06074655570848231;

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
    msg.setTimeStamp(0.7857576088672299);
    msg.setSource(32572U);
    msg.setSourceEntity(143U);
    msg.setDestination(35832U);
    msg.setDestinationEntity(196U);
    msg.time = 0.8450171962751681;
    msg.x = 0.10593967088684964;
    msg.y = 0.7856433209215186;
    msg.z = 0.9456334717618449;

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
    msg.setTimeStamp(0.08873399619621092);
    msg.setSource(10276U);
    msg.setSourceEntity(105U);
    msg.setDestination(29497U);
    msg.setDestinationEntity(163U);
    msg.time = 0.529583435327974;
    msg.x = 0.4434060959556716;
    msg.y = 0.7799649524265352;
    msg.z = 0.9206556311317212;

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
    msg.setTimeStamp(0.817853413104723);
    msg.setSource(25583U);
    msg.setSourceEntity(85U);
    msg.setDestination(16747U);
    msg.setDestinationEntity(112U);
    msg.time = 0.17985648582602065;
    msg.x = 0.1476419147715392;
    msg.y = 0.564512441451337;
    msg.z = 0.6140111047439589;

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
    msg.setTimeStamp(0.42769312035824114);
    msg.setSource(37863U);
    msg.setSourceEntity(100U);
    msg.setDestination(44946U);
    msg.setDestinationEntity(212U);
    msg.time = 0.9116323744330112;
    msg.x = 0.10102181056543491;
    msg.y = 0.0744402436504007;
    msg.z = 0.8488220469324664;

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
    msg.setTimeStamp(0.6150742669085066);
    msg.setSource(4284U);
    msg.setSourceEntity(165U);
    msg.setDestination(19477U);
    msg.setDestinationEntity(60U);
    msg.time = 0.5168015387168317;
    msg.x = 0.5898285778484846;
    msg.y = 0.6636239497466278;
    msg.z = 0.9217910744036091;

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
    msg.setTimeStamp(0.42330750225441516);
    msg.setSource(37412U);
    msg.setSourceEntity(127U);
    msg.setDestination(19402U);
    msg.setDestinationEntity(134U);
    msg.time = 0.6918841112111622;
    msg.x = 0.6424486085491874;
    msg.y = 0.423823120471584;
    msg.z = 0.28497249253799883;

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
    msg.setTimeStamp(0.35969876475585727);
    msg.setSource(4732U);
    msg.setSourceEntity(26U);
    msg.setDestination(23790U);
    msg.setDestinationEntity(98U);
    msg.time = 0.684393516076214;
    msg.x = 0.5665709316169824;
    msg.y = 0.14071181289612356;
    msg.z = 0.5092053793398373;

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
    msg.setTimeStamp(0.9778123100318923);
    msg.setSource(13024U);
    msg.setSourceEntity(47U);
    msg.setDestination(54183U);
    msg.setDestinationEntity(120U);
    msg.time = 0.9611060464286637;
    msg.x = 0.20866735035313744;
    msg.y = 0.6952652064534992;
    msg.z = 0.3716805860136274;

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
    msg.setTimeStamp(0.09031567204402213);
    msg.setSource(47941U);
    msg.setSourceEntity(31U);
    msg.setDestination(49720U);
    msg.setDestinationEntity(230U);
    msg.validity = 211U;
    msg.x = 0.12841014535595074;
    msg.y = 0.9355714913297292;
    msg.z = 0.5777909198147;

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
    msg.setTimeStamp(0.8996373245934534);
    msg.setSource(8378U);
    msg.setSourceEntity(230U);
    msg.setDestination(2696U);
    msg.setDestinationEntity(67U);
    msg.validity = 222U;
    msg.x = 0.2842660453397138;
    msg.y = 0.5729238592188138;
    msg.z = 0.4002169947752944;

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
    msg.setTimeStamp(0.13801399241154133);
    msg.setSource(25957U);
    msg.setSourceEntity(22U);
    msg.setDestination(35849U);
    msg.setDestinationEntity(62U);
    msg.validity = 163U;
    msg.x = 0.7756075911795925;
    msg.y = 0.2536673656041345;
    msg.z = 0.7343464915155419;

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
    msg.setTimeStamp(0.988573557474165);
    msg.setSource(59806U);
    msg.setSourceEntity(38U);
    msg.setDestination(50608U);
    msg.setDestinationEntity(4U);
    msg.validity = 125U;
    msg.x = 0.22839183602378832;
    msg.y = 0.9251912422573203;
    msg.z = 0.9312424433710949;

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
    msg.setTimeStamp(0.17591080810103166);
    msg.setSource(54639U);
    msg.setSourceEntity(173U);
    msg.setDestination(18848U);
    msg.setDestinationEntity(180U);
    msg.validity = 13U;
    msg.x = 0.7354880158202726;
    msg.y = 0.1832662733445659;
    msg.z = 0.9048454335135517;

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
    msg.setTimeStamp(0.45825182270925424);
    msg.setSource(17236U);
    msg.setSourceEntity(239U);
    msg.setDestination(17881U);
    msg.setDestinationEntity(234U);
    msg.validity = 128U;
    msg.x = 0.30669300055011783;
    msg.y = 0.48760696251432056;
    msg.z = 0.821790060800219;

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
    msg.setTimeStamp(0.7748854565281661);
    msg.setSource(50755U);
    msg.setSourceEntity(61U);
    msg.setDestination(54135U);
    msg.setDestinationEntity(182U);
    msg.time = 0.8452210208734121;
    msg.x = 0.7634184420208164;
    msg.y = 0.3104403541579064;
    msg.z = 0.5489516033270475;

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
    msg.setTimeStamp(0.6276981694018928);
    msg.setSource(21183U);
    msg.setSourceEntity(127U);
    msg.setDestination(44626U);
    msg.setDestinationEntity(231U);
    msg.time = 0.7344235079383591;
    msg.x = 0.5988980629628778;
    msg.y = 0.6736847778920029;
    msg.z = 0.4430383686176613;

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
    msg.setTimeStamp(0.601516603812807);
    msg.setSource(30222U);
    msg.setSourceEntity(55U);
    msg.setDestination(2606U);
    msg.setDestinationEntity(66U);
    msg.time = 0.4012590999212857;
    msg.x = 0.2610947897672524;
    msg.y = 0.7393203086947032;
    msg.z = 0.07358323672926914;

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
    msg.setTimeStamp(0.0386253794129614);
    msg.setSource(27301U);
    msg.setSourceEntity(117U);
    msg.setDestination(25078U);
    msg.setDestinationEntity(149U);
    msg.validity = 236U;
    msg.value = 0.19013585846919523;

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
    msg.setTimeStamp(0.5320923024623059);
    msg.setSource(16786U);
    msg.setSourceEntity(35U);
    msg.setDestination(26215U);
    msg.setDestinationEntity(7U);
    msg.validity = 121U;
    msg.value = 0.5132399131294441;

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
    msg.setTimeStamp(0.8608705282125086);
    msg.setSource(26594U);
    msg.setSourceEntity(106U);
    msg.setDestination(17258U);
    msg.setDestinationEntity(152U);
    msg.validity = 55U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.81516078086509;
    tmp_msg_0.y = 0.6405468575135489;
    tmp_msg_0.z = 0.8472631636244137;
    tmp_msg_0.phi = 0.9810386237215214;
    tmp_msg_0.theta = 0.18689466636871666;
    tmp_msg_0.psi = 0.11644515580397108;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.2907171390410467;
    tmp_msg_1.beam_height = 0.8255299117065378;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.033803912477524234;

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
    msg.setTimeStamp(0.4149468961216566);
    msg.setSource(12421U);
    msg.setSourceEntity(61U);
    msg.setDestination(19485U);
    msg.setDestinationEntity(215U);
    msg.value = 0.33939458330373085;

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
    msg.setTimeStamp(0.9157549992987766);
    msg.setSource(65308U);
    msg.setSourceEntity(108U);
    msg.setDestination(24648U);
    msg.setDestinationEntity(14U);
    msg.value = 0.26882867807244293;

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
    msg.setTimeStamp(0.0028262114924109127);
    msg.setSource(31452U);
    msg.setSourceEntity(15U);
    msg.setDestination(65220U);
    msg.setDestinationEntity(142U);
    msg.value = 0.4487452141906879;

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
    msg.setTimeStamp(0.8183959850008279);
    msg.setSource(51959U);
    msg.setSourceEntity(33U);
    msg.setDestination(2812U);
    msg.setDestinationEntity(87U);
    msg.value = 0.03632672192963604;

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
    msg.setTimeStamp(0.12134801640341597);
    msg.setSource(63621U);
    msg.setSourceEntity(183U);
    msg.setDestination(17150U);
    msg.setDestinationEntity(15U);
    msg.value = 0.33970875932862155;

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
    msg.setTimeStamp(0.2027771188573705);
    msg.setSource(50116U);
    msg.setSourceEntity(163U);
    msg.setDestination(45040U);
    msg.setDestinationEntity(54U);
    msg.value = 0.5871833640237625;

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
    msg.setTimeStamp(0.11532513093872832);
    msg.setSource(36357U);
    msg.setSourceEntity(157U);
    msg.setDestination(30590U);
    msg.setDestinationEntity(94U);
    msg.value = 0.1965561881719461;

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
    msg.setTimeStamp(0.24614356783405122);
    msg.setSource(11178U);
    msg.setSourceEntity(97U);
    msg.setDestination(26424U);
    msg.setDestinationEntity(139U);
    msg.value = 0.2747670945754095;

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
    msg.setTimeStamp(0.7525553411130227);
    msg.setSource(40109U);
    msg.setSourceEntity(48U);
    msg.setDestination(1256U);
    msg.setDestinationEntity(240U);
    msg.value = 0.7415791676795067;

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
    msg.setTimeStamp(0.9045960080537144);
    msg.setSource(55126U);
    msg.setSourceEntity(177U);
    msg.setDestination(3156U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8567181447431991;

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
    msg.setTimeStamp(0.8802109228231151);
    msg.setSource(37851U);
    msg.setSourceEntity(203U);
    msg.setDestination(50794U);
    msg.setDestinationEntity(40U);
    msg.value = 0.5643241409334712;

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
    msg.setTimeStamp(0.035561192144651366);
    msg.setSource(53440U);
    msg.setSourceEntity(194U);
    msg.setDestination(51100U);
    msg.setDestinationEntity(108U);
    msg.value = 0.567860471966326;

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
    msg.setTimeStamp(0.9304953149278824);
    msg.setSource(33914U);
    msg.setSourceEntity(142U);
    msg.setDestination(49675U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5403222506001499;

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
    msg.setTimeStamp(0.921459877050893);
    msg.setSource(12360U);
    msg.setSourceEntity(48U);
    msg.setDestination(16651U);
    msg.setDestinationEntity(84U);
    msg.value = 0.02454334039622208;

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
    msg.setTimeStamp(0.726775202294531);
    msg.setSource(28082U);
    msg.setSourceEntity(157U);
    msg.setDestination(53366U);
    msg.setDestinationEntity(243U);
    msg.value = 0.3862296347411527;

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
    msg.setTimeStamp(0.513812994924611);
    msg.setSource(2553U);
    msg.setSourceEntity(89U);
    msg.setDestination(56184U);
    msg.setDestinationEntity(250U);
    msg.value = 0.25354115532328036;

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
    msg.setTimeStamp(0.7657093209765016);
    msg.setSource(48441U);
    msg.setSourceEntity(225U);
    msg.setDestination(49225U);
    msg.setDestinationEntity(138U);
    msg.value = 0.5050224826924319;

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
    msg.setTimeStamp(0.7337904719553421);
    msg.setSource(24152U);
    msg.setSourceEntity(74U);
    msg.setDestination(49919U);
    msg.setDestinationEntity(40U);
    msg.value = 0.15430886066841687;

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
    msg.setTimeStamp(0.21782549801297313);
    msg.setSource(43001U);
    msg.setSourceEntity(85U);
    msg.setDestination(46189U);
    msg.setDestinationEntity(100U);
    msg.value = 0.27867661956575307;

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
    msg.setTimeStamp(0.927051886317943);
    msg.setSource(50875U);
    msg.setSourceEntity(231U);
    msg.setDestination(1211U);
    msg.setDestinationEntity(103U);
    msg.value = 0.5945719977450445;

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
    msg.setTimeStamp(0.44781382369508216);
    msg.setSource(51926U);
    msg.setSourceEntity(101U);
    msg.setDestination(37725U);
    msg.setDestinationEntity(50U);
    msg.value = 0.2272225618287147;

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
    msg.setTimeStamp(0.7991864896454111);
    msg.setSource(42289U);
    msg.setSourceEntity(192U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(188U);
    msg.value = 0.8426386620530918;

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
    msg.setTimeStamp(0.06622097494951384);
    msg.setSource(61723U);
    msg.setSourceEntity(49U);
    msg.setDestination(4100U);
    msg.setDestinationEntity(209U);
    msg.value = 0.9851577480952927;

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
    msg.setTimeStamp(0.8612000251649736);
    msg.setSource(9291U);
    msg.setSourceEntity(106U);
    msg.setDestination(25889U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6677976416921737;

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
    msg.setTimeStamp(0.8410393474801569);
    msg.setSource(12258U);
    msg.setSourceEntity(215U);
    msg.setDestination(43436U);
    msg.setDestinationEntity(224U);
    msg.direction = 0.6159088220292609;
    msg.speed = 0.31106827070058785;
    msg.turbulence = 0.9483444136419963;

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
    msg.setTimeStamp(0.2624626220294256);
    msg.setSource(1486U);
    msg.setSourceEntity(98U);
    msg.setDestination(10278U);
    msg.setDestinationEntity(113U);
    msg.direction = 0.8971007157736705;
    msg.speed = 0.6676179685493083;
    msg.turbulence = 0.3239379162806275;

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
    msg.setTimeStamp(0.19792800493693352);
    msg.setSource(16389U);
    msg.setSourceEntity(127U);
    msg.setDestination(32346U);
    msg.setDestinationEntity(198U);
    msg.direction = 0.9824097483982541;
    msg.speed = 0.6703137181488034;
    msg.turbulence = 0.7259071578247661;

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
    msg.setTimeStamp(0.5535767903981713);
    msg.setSource(65445U);
    msg.setSourceEntity(44U);
    msg.setDestination(9528U);
    msg.setDestinationEntity(203U);
    msg.value = 0.956185828720144;

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
    msg.setTimeStamp(0.7649050719128216);
    msg.setSource(61364U);
    msg.setSourceEntity(126U);
    msg.setDestination(55399U);
    msg.setDestinationEntity(126U);
    msg.value = 0.2148239509231985;

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
    msg.setTimeStamp(0.8791210005610357);
    msg.setSource(55621U);
    msg.setSourceEntity(108U);
    msg.setDestination(43064U);
    msg.setDestinationEntity(241U);
    msg.value = 0.7178436292261748;

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
    msg.setTimeStamp(0.16973442785950588);
    msg.setSource(60750U);
    msg.setSourceEntity(59U);
    msg.setDestination(5451U);
    msg.setDestinationEntity(244U);
    msg.value.assign("CMKCFGWTDYDFSMPEXAJXMIDVEEYYTKSPKNQNJCUGANHTAZXYXRVMPTECFFZXUOHSFRGHKKIZFFDUKDBWZTE");

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
    msg.setTimeStamp(0.5895107439520002);
    msg.setSource(25192U);
    msg.setSourceEntity(241U);
    msg.setDestination(35540U);
    msg.setDestinationEntity(98U);
    msg.value.assign("TKQPPBIRGMDVLBKBHJFQGFVJNVGQQXNYHVKDDBOOGHHCCSOKXUBAFGTHFKJHCUIQTFYKNRYPDALESVQGQZVDNPDUJFYSAWZJCUAKZOWIPLRUNUUWPCAMUNFCAENZXSPIMOTDIBTZAZXTIYTEKGXZVJLNGUZVXEWPOFYFWNSWHHBDEBYLCSHNMYMTPLLWJBKEAEFIUXJKOSRRJCGWMDACSLTLOLVRCYZMYDHXAIRRWVEQSRIB");

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
    msg.setTimeStamp(0.31423815954039314);
    msg.setSource(46987U);
    msg.setSourceEntity(222U);
    msg.setDestination(32400U);
    msg.setDestinationEntity(210U);
    msg.value.assign("BJEHBSRUVKJYNKPLFVUIRYHCUSDWLFSQJMBPXNOPGQKEDJOVWOZHAAWGLXFOUQDWHNZQEJNWJFLGCKHBMDYDPSXBHEIYLTGSEXZUQPSHAXRQFOYZTHYFSOMXNE");

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
    msg.setTimeStamp(0.6118663329466585);
    msg.setSource(4156U);
    msg.setSourceEntity(173U);
    msg.setDestination(30951U);
    msg.setDestinationEntity(148U);
    const signed char tmp_msg_0[] = {2, -113, -68, 7, 67, 40, 110, 19, 67, -3, -81, -2, -31, 91, -114, 65, 7, -22, 61, -81, 37, -81, -113, -100, -15, -45, -26, 55, -121, 1, -110, 95, -11, -115, 21, 17, -29, -76, -35, -121, -98, -112, 124, -73, 13, 77, 104, 75, 75, 46, -46, -29, -63, -85, 80, 13, 50, 122, -26, -15, -63, -110, 15, 114, -45, -67, -56, -70, -127, 41, 93, 15, -100, 79, -67, -48, -96, -103, -88, 45, 107, 31, -63, -85, -127, 12, -106, 89, -8, 27, -56, -82, 13, 83, -53, -62, 68, -50, 43, 53, -89, 84, -41, 86, 98, 98, 116, -106, -6, 48, -8, 112, -20, -121, 39, 53, 35, -6, 21, 3, -39, -102, -47, -108, -49, 39, 11, -125, 91, 37, 63, -16, 61, -27, 115, -86, 118, 123, -38, 13, -87, -15, 51, 28, 23, 75, -73, 8, 78, 96, -79, -34, 79, -83, 116, 14, 62, 51, -102, -76, 82, 4, 114, -29, 118, -58, -127, 33, 27, 37, -74, -5, -121};
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
    msg.setTimeStamp(0.29612388374995413);
    msg.setSource(32925U);
    msg.setSourceEntity(211U);
    msg.setDestination(7455U);
    msg.setDestinationEntity(95U);
    const signed char tmp_msg_0[] = {-47, -113, 54, -101, 58, 68, 44, -57, -125, -71, 80, 45, -125, 43, 92, -29, 79, -2, -18, 58, 63, 48, -125, 38, 47, -23, 66, 66, -75, -24, -93, 28, 3, 84, 70, 79, 116, -33, -91, -74, -101, 79, 6, 64, 80, -61, -36, -35, -66, 112, 119, 78, -19, -96, -31, -38, -95, 82, 108, 36, 81, -39, 21, -68, 103, 64, 60, 4, -68, -78};
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
    msg.setTimeStamp(0.6742772398140112);
    msg.setSource(64656U);
    msg.setSourceEntity(229U);
    msg.setDestination(63016U);
    msg.setDestinationEntity(40U);
    const signed char tmp_msg_0[] = {86, 85, -106, 112, 75, 1, 90, 102, 39, 64, -12, -95, -56, -49, -77, -68, 5, 54, -53, -89, -72, -104, -69, 1, 117, 100, -105, 69, -32, 28, -74, -109, 93, 15, -101, 92, 109, 33, 38, -91, 61, 51, -45, 106, 59, -67, -84, -76, 45, -56, 37, -38, 95, -67, -99, -95, 24, -110, 23, -8, -88, -25, -95, 4, -119, -21, -74, -90, 124, -25, 11, -50, -97, -7, -8, -112, -97, -77, 0, 115, -37, 53, 45, -43, -81, 109, -62, 116, 107, -55, -1, -47, 66, 94, -58, -122, -69, -2, 17, 120, 67, -19, -70, -61, -55, 57, 85, 35, 51, 76, -123, 13, 20, -64, -63, 115, -118, 12, 36, 83, 95, 27, 24, -105, -51, -85, -41, -13, 121, 104, 63, -22, 123, -43, 5, -27, -61, 106, -41, -124, -23, -6, -39, -57, -43, -124, 70, 24, 99};
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
    msg.setTimeStamp(0.1603840628915747);
    msg.setSource(53598U);
    msg.setSourceEntity(81U);
    msg.setDestination(55116U);
    msg.setDestinationEntity(148U);
    msg.value = 0.3194576565652444;

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
    msg.setTimeStamp(0.422502717839779);
    msg.setSource(43118U);
    msg.setSourceEntity(72U);
    msg.setDestination(1385U);
    msg.setDestinationEntity(221U);
    msg.value = 0.8090124662181922;

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
    msg.setTimeStamp(0.454528664417008);
    msg.setSource(31231U);
    msg.setSourceEntity(79U);
    msg.setDestination(613U);
    msg.setDestinationEntity(203U);
    msg.value = 0.25128129314177994;

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
    msg.setTimeStamp(0.16386487189563737);
    msg.setSource(8523U);
    msg.setSourceEntity(248U);
    msg.setDestination(40448U);
    msg.setDestinationEntity(231U);
    msg.type = 168U;
    msg.frequency = 3658997138U;
    msg.min_range = 35751U;
    msg.max_range = 42243U;
    msg.bits_per_point = 40U;
    msg.scale_factor = 0.6757250653829804;
    const signed char tmp_msg_0[] = {-22, -127, -105, -23, 88, 103, -92, 22, 17, -55, -45, -107, 45, 91, 103, 77, -102, 20, 27, 42, -6, -121, 21, 8, -53, -106, 117, 86, 124, -6, 82, -70, 40, 44, 107, -2, -83, -67, -84, 6, -17, -80, 114, 48, 45, 125, -23, -6, 112, 25, 107, -76, -83, 98, -44, -87, 15, 28, 106, 60, -43, -127, -86, 43, -76, 25, 3, 18, 6, 98, 123, 90, 23, -86, 124, -43, 42, 79, -107, 87, -21, 25, -117, -77, 87, -1, -116, -64, 125, -77, -43, -118, -108, 67, 6, -60, -102, 25, -60, 73, 82, 125, -66, -53, -52, -57, -88, -86, 49, -82, -30, 42, -91, -5, -120, -16};
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
    msg.setTimeStamp(0.012801990351903103);
    msg.setSource(36758U);
    msg.setSourceEntity(107U);
    msg.setDestination(31921U);
    msg.setDestinationEntity(221U);
    msg.type = 91U;
    msg.frequency = 786105607U;
    msg.min_range = 34306U;
    msg.max_range = 42537U;
    msg.bits_per_point = 35U;
    msg.scale_factor = 0.517486804710207;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3153118654843299;
    tmp_msg_0.beam_height = 0.5224382880709533;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-38, 80, 85, -57, 97, 124, -46, -63, 117, 20, 92, 85, -5, 39, -81, -62, -38, -124, -49, -22, -24};
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
    msg.setTimeStamp(0.725144700473677);
    msg.setSource(55216U);
    msg.setSourceEntity(73U);
    msg.setDestination(13217U);
    msg.setDestinationEntity(116U);
    msg.type = 171U;
    msg.frequency = 2864929506U;
    msg.min_range = 33836U;
    msg.max_range = 35168U;
    msg.bits_per_point = 34U;
    msg.scale_factor = 0.7238010375269001;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.838645057138107;
    tmp_msg_0.beam_height = 0.10737033561346454;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {104, 62, -86, -17, 92, 90, 83, 5, -124, -118, -80, -115, -113, 120, -99, -28, 63, 52, 11, 44, -108, -88, 4, -15, 39, -26, 44, 22, -56, -106, -85, 112, 37, 13, -122, -31, 63, -14, 11, 33, 88, 69, -24, -94, 28, -14, -47, 70, 69, 30, -90, 29, 64, 126, -82, 1, 102, -30, -11, 81, -36, -41, 81, 21, 116, 41, 124, -10, 39, 63, 124, 82, -13, -56, -65, 68, -84, -20, 98, 48, 35, 47, 121, -73, -50, -17, 86, 42, -27, 113, -55, -100, -54, 75, -3, 9, -3, 90, 123, 42, 109, 9, -54, 88, -93, 8, -75, -93, -8, 79, -21, -67, -98, -34, -17, -10, 3, 5, 102, 77, -7, 124, 65, -64, -28, -88, -11, -109, 11, -34, 49, -18, -45, -93, -121};
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
    msg.setTimeStamp(0.9735011442131566);
    msg.setSource(14470U);
    msg.setSourceEntity(156U);
    msg.setDestination(39463U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.5722048222330862);
    msg.setSource(11763U);
    msg.setSourceEntity(129U);
    msg.setDestination(29186U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.2750593686824847);
    msg.setSource(55430U);
    msg.setSourceEntity(116U);
    msg.setDestination(370U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.9150633955908936);
    msg.setSource(60025U);
    msg.setSourceEntity(95U);
    msg.setDestination(61445U);
    msg.setDestinationEntity(83U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.17015669569325276);
    msg.setSource(58124U);
    msg.setSourceEntity(251U);
    msg.setDestination(36965U);
    msg.setDestinationEntity(139U);
    msg.op = 181U;

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
    msg.setTimeStamp(0.07258431414463007);
    msg.setSource(6389U);
    msg.setSourceEntity(112U);
    msg.setDestination(36053U);
    msg.setDestinationEntity(5U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.5986733965687866);
    msg.setSource(37140U);
    msg.setSourceEntity(74U);
    msg.setDestination(28594U);
    msg.setDestinationEntity(237U);
    msg.value = 0.27527074156852216;
    msg.confidence = 0.49209319636149984;
    msg.opmodes.assign("TVGKEQIMNCNYFGDPXGFUQTPMWKESSLJSEEHWUZRGTXMTLQUHUGTJTUGFVQIZIWQJCJWOXVYRENNPZOZJKMCLZGDAUAKLWRZWHSDGUYADOOPSPAIFLKRJIAXHLVBLTQIJVWKBWASNNLSRUAUXMYTSFNDFRHMVROWYYMFBZPHRCEYBQIZPEPVCZMDEIQBCLRWMPJYOKNOBHTFDAJDXZEXRHGJDSBOYCHKBGKXVNTXQFNCYBIXCFVSAUKDP");

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
    msg.setTimeStamp(0.160458089145201);
    msg.setSource(56075U);
    msg.setSourceEntity(222U);
    msg.setDestination(35900U);
    msg.setDestinationEntity(24U);
    msg.value = 0.8808923470057494;
    msg.confidence = 0.71384292094147;
    msg.opmodes.assign("JPTUSFRJHBGIDWHSKVXCQBZBCWLXHCHDPFATLKVYFBMDQSLYOIQUGMSSFUJVNNRMNXZCYYOIPMZMLYEPFUQAEIYEBATZLLEVWAZWVLW");

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
    msg.setTimeStamp(0.6743523384937372);
    msg.setSource(10274U);
    msg.setSourceEntity(254U);
    msg.setDestination(52156U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9330327377649476;
    msg.confidence = 0.9940059696290854;
    msg.opmodes.assign("ZRPBQSBUBZGYUAMCVWBUZKFXLTHPMMMHZXEVDNJTVMFHGSIRKWNYVQHTMPJNRITRXCPTCKKPDBTMCQAQICIUCGPRWFOLAOPJGFQOGSEYJSFBQJKTSBDEFWSVQTXHHBLIVEZXNDGZPGDJOLUCDBMHSGRVLKCOWZCRASHYPWFNLIWEXOKE");

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
    msg.setTimeStamp(0.6758864740953603);
    msg.setSource(9699U);
    msg.setSourceEntity(45U);
    msg.setDestination(97U);
    msg.setDestinationEntity(105U);
    msg.itow = 2089502606U;
    msg.lat = 0.5778773233520015;
    msg.lon = 0.9582700021577246;
    msg.height_ell = 0.24409016863428623;
    msg.height_sea = 0.17925201371698396;
    msg.hacc = 0.8974246050988498;
    msg.vacc = 0.37944691968656885;
    msg.vel_n = 0.783818693178773;
    msg.vel_e = 0.7576823212722076;
    msg.vel_d = 0.21077155385459534;
    msg.speed = 0.01726483580464555;
    msg.gspeed = 0.9769918831891454;
    msg.heading = 0.027135717711697316;
    msg.sacc = 0.5588951794799492;
    msg.cacc = 0.594818167823981;

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
    msg.setTimeStamp(0.050635227163784324);
    msg.setSource(15663U);
    msg.setSourceEntity(228U);
    msg.setDestination(15676U);
    msg.setDestinationEntity(195U);
    msg.itow = 3885106351U;
    msg.lat = 0.13104020626242863;
    msg.lon = 0.09129232302276802;
    msg.height_ell = 0.35952966933559327;
    msg.height_sea = 0.6795903659685373;
    msg.hacc = 0.15567833118625907;
    msg.vacc = 0.44866859105840284;
    msg.vel_n = 0.6218973879454759;
    msg.vel_e = 0.116428842790407;
    msg.vel_d = 0.010799224158557053;
    msg.speed = 0.5928294910857954;
    msg.gspeed = 0.3865296403203532;
    msg.heading = 0.9834035525545567;
    msg.sacc = 0.47390709151086796;
    msg.cacc = 0.3757231694588311;

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
    msg.setTimeStamp(0.22764218724415675);
    msg.setSource(37134U);
    msg.setSourceEntity(113U);
    msg.setDestination(12161U);
    msg.setDestinationEntity(106U);
    msg.itow = 2042430752U;
    msg.lat = 0.45609213325494247;
    msg.lon = 0.9287395184390191;
    msg.height_ell = 0.9880648800897719;
    msg.height_sea = 0.11936392338344248;
    msg.hacc = 0.6047315962376376;
    msg.vacc = 0.8926573773933896;
    msg.vel_n = 0.3159457331172917;
    msg.vel_e = 0.650672278540914;
    msg.vel_d = 0.6830018868904841;
    msg.speed = 0.7947013192950225;
    msg.gspeed = 0.9061061252478075;
    msg.heading = 0.5406504978996346;
    msg.sacc = 0.10824686121082006;
    msg.cacc = 0.7026673223567922;

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
    msg.setTimeStamp(0.8261662691673017);
    msg.setSource(59559U);
    msg.setSourceEntity(119U);
    msg.setDestination(557U);
    msg.setDestinationEntity(182U);
    msg.id = 181U;
    msg.value = 0.6964434761913885;

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
    msg.setTimeStamp(0.7995932666185841);
    msg.setSource(31533U);
    msg.setSourceEntity(94U);
    msg.setDestination(19422U);
    msg.setDestinationEntity(112U);
    msg.id = 11U;
    msg.value = 0.4506417386378937;

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
    msg.setTimeStamp(0.7301462356391749);
    msg.setSource(1651U);
    msg.setSourceEntity(101U);
    msg.setDestination(22431U);
    msg.setDestinationEntity(18U);
    msg.id = 155U;
    msg.value = 0.7081376487322278;

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
    msg.setTimeStamp(0.9495611397455946);
    msg.setSource(37001U);
    msg.setSourceEntity(34U);
    msg.setDestination(43429U);
    msg.setDestinationEntity(150U);
    msg.x = 0.3775927563269992;
    msg.y = 0.10910421517333957;
    msg.z = 0.9042466508155137;
    msg.phi = 0.2597425671092404;
    msg.theta = 0.1599410787993113;
    msg.psi = 0.08834643623328842;

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
    msg.setTimeStamp(0.4635265057429173);
    msg.setSource(19940U);
    msg.setSourceEntity(203U);
    msg.setDestination(59242U);
    msg.setDestinationEntity(84U);
    msg.x = 0.13731943122122015;
    msg.y = 0.2243506639858468;
    msg.z = 0.9264344655126643;
    msg.phi = 0.5283533308559102;
    msg.theta = 0.4427548722969913;
    msg.psi = 0.9749801426793266;

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
    msg.setTimeStamp(0.39502633575109747);
    msg.setSource(5435U);
    msg.setSourceEntity(89U);
    msg.setDestination(22290U);
    msg.setDestinationEntity(64U);
    msg.x = 0.8219729390740114;
    msg.y = 0.09406262393314391;
    msg.z = 0.486746414630556;
    msg.phi = 0.6907688314992375;
    msg.theta = 0.10363202899073876;
    msg.psi = 0.012350093681960495;

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
    msg.setTimeStamp(0.4141487931159329);
    msg.setSource(23149U);
    msg.setSourceEntity(228U);
    msg.setDestination(41202U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.11399110914949695;
    msg.beam_height = 0.2802277136224621;

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
    msg.setTimeStamp(0.10377188038025098);
    msg.setSource(7483U);
    msg.setSourceEntity(132U);
    msg.setDestination(23639U);
    msg.setDestinationEntity(115U);
    msg.beam_width = 0.9340446390671169;
    msg.beam_height = 0.739841908992963;

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
    msg.setTimeStamp(0.6128707275166456);
    msg.setSource(4106U);
    msg.setSourceEntity(121U);
    msg.setDestination(23543U);
    msg.setDestinationEntity(202U);
    msg.beam_width = 0.9682773930525826;
    msg.beam_height = 0.043368446229673174;

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
    msg.setTimeStamp(0.2847435085111124);
    msg.setSource(55771U);
    msg.setSourceEntity(180U);
    msg.setDestination(18941U);
    msg.setDestinationEntity(235U);
    msg.sane = 128U;

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
    msg.setTimeStamp(0.5664284969929799);
    msg.setSource(52108U);
    msg.setSourceEntity(176U);
    msg.setDestination(5653U);
    msg.setDestinationEntity(234U);
    msg.sane = 143U;

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
    msg.setTimeStamp(0.0561390411134427);
    msg.setSource(46852U);
    msg.setSourceEntity(168U);
    msg.setDestination(9304U);
    msg.setDestinationEntity(211U);
    msg.sane = 100U;

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
    msg.setTimeStamp(0.204528618744947);
    msg.setSource(7218U);
    msg.setSourceEntity(244U);
    msg.setDestination(21846U);
    msg.setDestinationEntity(250U);
    msg.value = 0.06680155614816508;

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
    msg.setTimeStamp(0.5454072814008506);
    msg.setSource(34440U);
    msg.setSourceEntity(106U);
    msg.setDestination(41625U);
    msg.setDestinationEntity(173U);
    msg.value = 0.40398731939598953;

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
    msg.setTimeStamp(0.6269805623576689);
    msg.setSource(39148U);
    msg.setSourceEntity(36U);
    msg.setDestination(12588U);
    msg.setDestinationEntity(108U);
    msg.value = 0.28270354824331123;

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
    msg.setTimeStamp(0.1096377556399677);
    msg.setSource(18968U);
    msg.setSourceEntity(212U);
    msg.setDestination(12087U);
    msg.setDestinationEntity(222U);
    msg.value = 0.8351921170666989;

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
    msg.setTimeStamp(0.5366299424395674);
    msg.setSource(40164U);
    msg.setSourceEntity(65U);
    msg.setDestination(6987U);
    msg.setDestinationEntity(180U);
    msg.value = 0.9320601134487674;

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
    msg.setTimeStamp(0.25144883353080494);
    msg.setSource(6710U);
    msg.setSourceEntity(1U);
    msg.setDestination(22897U);
    msg.setDestinationEntity(252U);
    msg.value = 0.8950196656956534;

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
    msg.setTimeStamp(0.8361090299229962);
    msg.setSource(12466U);
    msg.setSourceEntity(199U);
    msg.setDestination(5725U);
    msg.setDestinationEntity(7U);
    msg.value = 0.02862601466419823;

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
    msg.setTimeStamp(0.9396035565900898);
    msg.setSource(63209U);
    msg.setSourceEntity(80U);
    msg.setDestination(53004U);
    msg.setDestinationEntity(103U);
    msg.value = 0.8939252543388658;

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
    msg.setTimeStamp(0.016083408865903315);
    msg.setSource(62839U);
    msg.setSourceEntity(92U);
    msg.setDestination(32484U);
    msg.setDestinationEntity(29U);
    msg.value = 0.4432521388072498;

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
    msg.setTimeStamp(0.03781848677431232);
    msg.setSource(59226U);
    msg.setSourceEntity(250U);
    msg.setDestination(33690U);
    msg.setDestinationEntity(74U);
    msg.value = 0.6755354365763973;

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
    msg.setTimeStamp(0.8208553499917278);
    msg.setSource(4887U);
    msg.setSourceEntity(138U);
    msg.setDestination(53752U);
    msg.setDestinationEntity(200U);
    msg.value = 0.315149183044401;

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
    msg.setTimeStamp(0.5674098219401881);
    msg.setSource(18373U);
    msg.setSourceEntity(231U);
    msg.setDestination(47973U);
    msg.setDestinationEntity(104U);
    msg.value = 0.07994918192488065;

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
    msg.setTimeStamp(0.124974581077542);
    msg.setSource(23312U);
    msg.setSourceEntity(8U);
    msg.setDestination(59530U);
    msg.setDestinationEntity(201U);
    msg.value = 0.5322546130093526;

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
    msg.setTimeStamp(0.797370752200069);
    msg.setSource(45990U);
    msg.setSourceEntity(254U);
    msg.setDestination(27275U);
    msg.setDestinationEntity(251U);
    msg.value = 0.3129288720963016;

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
    msg.setTimeStamp(0.27295983339234053);
    msg.setSource(7273U);
    msg.setSourceEntity(124U);
    msg.setDestination(12046U);
    msg.setDestinationEntity(73U);
    msg.value = 0.24126319375986394;

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
    msg.setTimeStamp(0.17601893464391793);
    msg.setSource(18808U);
    msg.setSourceEntity(53U);
    msg.setDestination(35836U);
    msg.setDestinationEntity(184U);
    msg.value = 0.6436972991339058;

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
    msg.setTimeStamp(0.11248979357440714);
    msg.setSource(34359U);
    msg.setSourceEntity(8U);
    msg.setDestination(34082U);
    msg.setDestinationEntity(31U);
    msg.value = 0.06536344145412998;

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
    msg.setTimeStamp(0.7371949376125543);
    msg.setSource(9250U);
    msg.setSourceEntity(196U);
    msg.setDestination(64412U);
    msg.setDestinationEntity(41U);
    msg.value = 0.7200159050911221;

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
    msg.setTimeStamp(0.9507310298947147);
    msg.setSource(49386U);
    msg.setSourceEntity(148U);
    msg.setDestination(50512U);
    msg.setDestinationEntity(138U);
    msg.value = 0.6808931333825949;

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
    msg.setTimeStamp(0.03906723687991609);
    msg.setSource(49101U);
    msg.setSourceEntity(99U);
    msg.setDestination(16617U);
    msg.setDestinationEntity(25U);
    msg.value = 0.6894984875640376;

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
    msg.setTimeStamp(0.10986979436833177);
    msg.setSource(41082U);
    msg.setSourceEntity(118U);
    msg.setDestination(65420U);
    msg.setDestinationEntity(140U);
    msg.value = 0.6523393643827613;

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
    msg.setTimeStamp(0.5818915776722957);
    msg.setSource(57911U);
    msg.setSourceEntity(110U);
    msg.setDestination(3447U);
    msg.setDestinationEntity(217U);
    msg.value = 0.5290673453425969;

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
    msg.setTimeStamp(0.22721595198600997);
    msg.setSource(18727U);
    msg.setSourceEntity(189U);
    msg.setDestination(34559U);
    msg.setDestinationEntity(74U);
    msg.value = 0.12086566282784306;

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
    msg.setTimeStamp(0.9713242381725918);
    msg.setSource(47162U);
    msg.setSourceEntity(49U);
    msg.setDestination(58246U);
    msg.setDestinationEntity(81U);
    msg.value = 0.028929017552554948;

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
    msg.setTimeStamp(0.34772826646891297);
    msg.setSource(57888U);
    msg.setSourceEntity(249U);
    msg.setDestination(44934U);
    msg.setDestinationEntity(210U);
    msg.validity = 64391U;
    msg.type = 202U;
    msg.tow = 686774299U;
    msg.base_lat = 0.8560020237678335;
    msg.base_lon = 0.9663201929679127;
    msg.base_height = 0.48018784836935813;
    msg.n = 0.39834792535177566;
    msg.e = 0.6219976740249857;
    msg.d = 0.12913893977198687;
    msg.v_n = 0.8829291431515324;
    msg.v_e = 0.223254935007555;
    msg.v_d = 0.03574479780620432;
    msg.satellites = 15U;
    msg.iar_hyp = 3090U;
    msg.iar_ratio = 0.8128079131583151;

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
    msg.setTimeStamp(0.5890893569179935);
    msg.setSource(56663U);
    msg.setSourceEntity(180U);
    msg.setDestination(41881U);
    msg.setDestinationEntity(102U);
    msg.validity = 44238U;
    msg.type = 33U;
    msg.tow = 4190374193U;
    msg.base_lat = 0.8692547753570492;
    msg.base_lon = 0.6189984959706104;
    msg.base_height = 0.2911255316707936;
    msg.n = 0.6011571485000361;
    msg.e = 0.681967030282524;
    msg.d = 0.30513544146094906;
    msg.v_n = 0.8591330509258153;
    msg.v_e = 0.5589183499965523;
    msg.v_d = 0.3316218787422125;
    msg.satellites = 87U;
    msg.iar_hyp = 4197U;
    msg.iar_ratio = 0.027528128892205683;

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
    msg.setTimeStamp(0.5299615121130253);
    msg.setSource(4729U);
    msg.setSourceEntity(202U);
    msg.setDestination(27400U);
    msg.setDestinationEntity(72U);
    msg.validity = 25782U;
    msg.type = 150U;
    msg.tow = 4155737401U;
    msg.base_lat = 0.2569382118327632;
    msg.base_lon = 0.41119460182533796;
    msg.base_height = 0.23028536184193305;
    msg.n = 0.6056850008775891;
    msg.e = 0.9951603187885436;
    msg.d = 0.45768021366239264;
    msg.v_n = 0.34693533918688935;
    msg.v_e = 0.02563491530376638;
    msg.v_d = 0.8432431565004999;
    msg.satellites = 13U;
    msg.iar_hyp = 7021U;
    msg.iar_ratio = 0.194981841129785;

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
    msg.setTimeStamp(0.5052373661461343);
    msg.setSource(51233U);
    msg.setSourceEntity(107U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(45U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5416597252943863;
    tmp_msg_0.lon = 0.47578592013016596;
    tmp_msg_0.height = 0.3039585854447968;
    tmp_msg_0.x = 0.5087776678956882;
    tmp_msg_0.y = 0.6483965945833418;
    tmp_msg_0.z = 0.7195343792877666;
    tmp_msg_0.phi = 0.2330419070726275;
    tmp_msg_0.theta = 0.36971985183795675;
    tmp_msg_0.psi = 0.9245457474720197;
    tmp_msg_0.u = 0.576586476188368;
    tmp_msg_0.v = 0.4780968833122917;
    tmp_msg_0.w = 0.5638539339099273;
    tmp_msg_0.vx = 0.8424064124296302;
    tmp_msg_0.vy = 0.24261447246468748;
    tmp_msg_0.vz = 0.5243414106866331;
    tmp_msg_0.p = 0.18590467612845196;
    tmp_msg_0.q = 0.6051205218705069;
    tmp_msg_0.r = 0.9879242378264486;
    tmp_msg_0.depth = 0.0001387897259458315;
    tmp_msg_0.alt = 0.08389655603592283;
    msg.state.set(tmp_msg_0);
    msg.type = 212U;

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
    msg.setTimeStamp(0.6323907313058674);
    msg.setSource(51433U);
    msg.setSourceEntity(148U);
    msg.setDestination(45596U);
    msg.setDestinationEntity(22U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8491984542656897;
    tmp_msg_0.lon = 0.33996419343663964;
    tmp_msg_0.height = 0.08589471693961181;
    tmp_msg_0.x = 0.8019728714277935;
    tmp_msg_0.y = 0.3026847412647845;
    tmp_msg_0.z = 0.5697105159689182;
    tmp_msg_0.phi = 0.37546898358024394;
    tmp_msg_0.theta = 0.6776891517377368;
    tmp_msg_0.psi = 0.7764201883980912;
    tmp_msg_0.u = 0.3301196800552678;
    tmp_msg_0.v = 0.23647635295110936;
    tmp_msg_0.w = 0.7684864270077614;
    tmp_msg_0.vx = 0.712325418778447;
    tmp_msg_0.vy = 0.026095217665367265;
    tmp_msg_0.vz = 0.37165087665262697;
    tmp_msg_0.p = 0.8904073416938355;
    tmp_msg_0.q = 0.15559038275152282;
    tmp_msg_0.r = 0.021010636098796276;
    tmp_msg_0.depth = 0.9393521317583694;
    tmp_msg_0.alt = 0.7225984026295462;
    msg.state.set(tmp_msg_0);
    msg.type = 245U;

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
    msg.setTimeStamp(0.819449852178301);
    msg.setSource(34468U);
    msg.setSourceEntity(173U);
    msg.setDestination(43590U);
    msg.setDestinationEntity(240U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5318331045153366;
    tmp_msg_0.lon = 0.993341394244751;
    tmp_msg_0.height = 0.48044767741275474;
    tmp_msg_0.x = 0.14173477807128287;
    tmp_msg_0.y = 0.27446743972390675;
    tmp_msg_0.z = 0.4913360547755785;
    tmp_msg_0.phi = 0.18041079181132869;
    tmp_msg_0.theta = 0.7753078717652049;
    tmp_msg_0.psi = 0.4081431825436126;
    tmp_msg_0.u = 0.3434088670263663;
    tmp_msg_0.v = 0.6684626546764635;
    tmp_msg_0.w = 0.2597367813962854;
    tmp_msg_0.vx = 0.5852454852724566;
    tmp_msg_0.vy = 0.038216748507841514;
    tmp_msg_0.vz = 0.4493284895554944;
    tmp_msg_0.p = 0.987005353368271;
    tmp_msg_0.q = 0.9765015921436281;
    tmp_msg_0.r = 0.4906811795261127;
    tmp_msg_0.depth = 0.4158175539498844;
    tmp_msg_0.alt = 0.9113037233510831;
    msg.state.set(tmp_msg_0);
    msg.type = 87U;

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
    msg.setTimeStamp(0.7799832347436876);
    msg.setSource(34582U);
    msg.setSourceEntity(124U);
    msg.setDestination(61485U);
    msg.setDestinationEntity(27U);
    msg.value = 0.388200975495926;

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
    msg.setTimeStamp(0.1012018422253641);
    msg.setSource(7325U);
    msg.setSourceEntity(26U);
    msg.setDestination(13118U);
    msg.setDestinationEntity(238U);
    msg.value = 0.7509445119538076;

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
    msg.setTimeStamp(0.6618737754089054);
    msg.setSource(53600U);
    msg.setSourceEntity(251U);
    msg.setDestination(23549U);
    msg.setDestinationEntity(93U);
    msg.value = 0.6804624610862702;

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
    msg.setTimeStamp(0.24847310632883035);
    msg.setSource(5681U);
    msg.setSourceEntity(88U);
    msg.setDestination(24879U);
    msg.setDestinationEntity(197U);
    msg.value = 0.5121992265409601;

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
    msg.setTimeStamp(0.001458022418247218);
    msg.setSource(22722U);
    msg.setSourceEntity(1U);
    msg.setDestination(60654U);
    msg.setDestinationEntity(18U);
    msg.value = 0.9794378618204883;

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
    msg.setTimeStamp(0.7447883612794863);
    msg.setSource(30523U);
    msg.setSourceEntity(200U);
    msg.setDestination(39405U);
    msg.setDestinationEntity(40U);
    msg.value = 0.5325048079687807;

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
    msg.setTimeStamp(0.30042621961958815);
    msg.setSource(35226U);
    msg.setSourceEntity(171U);
    msg.setDestination(62535U);
    msg.setDestinationEntity(58U);
    msg.value = 0.1757407308422505;

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
    msg.setTimeStamp(0.03501544425357428);
    msg.setSource(41392U);
    msg.setSourceEntity(17U);
    msg.setDestination(4196U);
    msg.setDestinationEntity(117U);
    msg.value = 0.7537401486531937;

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
    msg.setTimeStamp(0.5746469771891465);
    msg.setSource(47769U);
    msg.setSourceEntity(143U);
    msg.setDestination(43741U);
    msg.setDestinationEntity(92U);
    msg.value = 0.3889321108371666;

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
    msg.setTimeStamp(0.6214105302451133);
    msg.setSource(45308U);
    msg.setSourceEntity(38U);
    msg.setDestination(45062U);
    msg.setDestinationEntity(116U);
    msg.value = 0.31647023801103447;

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
    msg.setTimeStamp(0.012485721192175836);
    msg.setSource(28663U);
    msg.setSourceEntity(183U);
    msg.setDestination(41508U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5667338439021097;

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
    msg.setTimeStamp(0.08419540492269584);
    msg.setSource(55845U);
    msg.setSourceEntity(227U);
    msg.setDestination(47786U);
    msg.setDestinationEntity(1U);
    msg.value = 0.8988547727801594;

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
    msg.setTimeStamp(0.7311323348520372);
    msg.setSource(4057U);
    msg.setSourceEntity(118U);
    msg.setDestination(44488U);
    msg.setDestinationEntity(142U);
    msg.value = 0.08565297979198572;

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
    msg.setTimeStamp(0.6752560465133723);
    msg.setSource(13987U);
    msg.setSourceEntity(84U);
    msg.setDestination(26386U);
    msg.setDestinationEntity(226U);
    msg.value = 0.9365246551210059;

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
    msg.setTimeStamp(0.9990642655961198);
    msg.setSource(16993U);
    msg.setSourceEntity(23U);
    msg.setDestination(8637U);
    msg.setDestinationEntity(64U);
    msg.value = 0.06414970688425714;

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
    msg.setTimeStamp(0.12501086865712596);
    msg.setSource(51107U);
    msg.setSourceEntity(5U);
    msg.setDestination(8708U);
    msg.setDestinationEntity(235U);
    msg.id = 5U;
    msg.zoom = 168U;
    msg.action = 175U;

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
    msg.setTimeStamp(0.7643808746431787);
    msg.setSource(7120U);
    msg.setSourceEntity(193U);
    msg.setDestination(62190U);
    msg.setDestinationEntity(241U);
    msg.id = 135U;
    msg.zoom = 112U;
    msg.action = 92U;

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
    msg.setTimeStamp(0.30722767637393544);
    msg.setSource(26342U);
    msg.setSourceEntity(72U);
    msg.setDestination(14216U);
    msg.setDestinationEntity(168U);
    msg.id = 194U;
    msg.zoom = 213U;
    msg.action = 153U;

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
    msg.setTimeStamp(0.7130421004491921);
    msg.setSource(3439U);
    msg.setSourceEntity(155U);
    msg.setDestination(51301U);
    msg.setDestinationEntity(144U);
    msg.id = 239U;
    msg.value = 0.1278208196581052;

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
    msg.setTimeStamp(0.5410654532285695);
    msg.setSource(1193U);
    msg.setSourceEntity(163U);
    msg.setDestination(8053U);
    msg.setDestinationEntity(188U);
    msg.id = 10U;
    msg.value = 0.6930831410978633;

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
    msg.setTimeStamp(0.11844152397876417);
    msg.setSource(29856U);
    msg.setSourceEntity(28U);
    msg.setDestination(21300U);
    msg.setDestinationEntity(252U);
    msg.id = 165U;
    msg.value = 0.7980033663599908;

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
    msg.setTimeStamp(0.9117825402422773);
    msg.setSource(46767U);
    msg.setSourceEntity(127U);
    msg.setDestination(5288U);
    msg.setDestinationEntity(146U);
    msg.id = 11U;
    msg.value = 0.0694375922424938;

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
    msg.setTimeStamp(0.4537509634795607);
    msg.setSource(15017U);
    msg.setSourceEntity(92U);
    msg.setDestination(57142U);
    msg.setDestinationEntity(139U);
    msg.id = 136U;
    msg.value = 0.4568842128777243;

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
    msg.setTimeStamp(0.9251389075731218);
    msg.setSource(34776U);
    msg.setSourceEntity(104U);
    msg.setDestination(42284U);
    msg.setDestinationEntity(93U);
    msg.id = 213U;
    msg.value = 0.7071898939540611;

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
    msg.setTimeStamp(0.1918432331953318);
    msg.setSource(44952U);
    msg.setSourceEntity(211U);
    msg.setDestination(64340U);
    msg.setDestinationEntity(89U);
    msg.id = 227U;
    msg.angle = 0.9973526280937434;

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
    msg.setTimeStamp(0.0033794041402258612);
    msg.setSource(23715U);
    msg.setSourceEntity(109U);
    msg.setDestination(33561U);
    msg.setDestinationEntity(109U);
    msg.id = 160U;
    msg.angle = 0.9505260745655354;

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
    msg.setTimeStamp(0.46768282185244214);
    msg.setSource(26398U);
    msg.setSourceEntity(8U);
    msg.setDestination(46894U);
    msg.setDestinationEntity(109U);
    msg.id = 81U;
    msg.angle = 0.42713959499452003;

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
    msg.setTimeStamp(0.1382505722482471);
    msg.setSource(1458U);
    msg.setSourceEntity(34U);
    msg.setDestination(968U);
    msg.setDestinationEntity(125U);
    msg.op = 24U;
    msg.actions.assign("YVWLAMWLDFKJVCCZZDWLFNIXGTGZLGMXAAWHLWOFJDEERBJFHDYEXMMPNBUIYIAMKNJNOTTIQTBQCJGTHZUGJSPOJSPPSRZYNEABCRZPXXZZSUCQSFHDCYYKEGECYHVHIIQRMVAOROVFOKQLGCVESVAHNYDWJZXPLBUNERINYKQXNRIIMXPFGBQOPXAMOHTSYUWLDRGDSTANWLEUPDVUQVKKJKUBQVTMUSCGXFLKMSBEKZIOQF");

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
    msg.setTimeStamp(0.028457443370554114);
    msg.setSource(20751U);
    msg.setSourceEntity(43U);
    msg.setDestination(55007U);
    msg.setDestinationEntity(204U);
    msg.op = 176U;
    msg.actions.assign("UGNAUFHOFGMEHZZZPOVWZIYDQVRNAIGMMSLTOTCYOWLLINGQGOPCLQUCHAYXJEBXDQLB");

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
    msg.setTimeStamp(0.1874585475472662);
    msg.setSource(56046U);
    msg.setSourceEntity(152U);
    msg.setDestination(37244U);
    msg.setDestinationEntity(142U);
    msg.op = 64U;
    msg.actions.assign("KSSARRVBKEIPZL");

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
    msg.setTimeStamp(0.887717644258704);
    msg.setSource(32077U);
    msg.setSourceEntity(5U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(224U);
    msg.actions.assign("WPVZLQGHDPNVIHMBSJIMQMQRMHMLYXWQFXJLLYIFUQGWVRKRENIGTAEPMPCABJRFFYMFBBWJXPHLDYNSFBHZFLOSLXNRYSIOUKJAOQQSGCGBCECQJTRUHBFEYKTJCVBUIPWWNLRNLSIAADKRUXARUEDDSBDNDUEZGXVOMKVTJPOFVUCPDKXYUAZ");

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
    msg.setTimeStamp(0.245887522333878);
    msg.setSource(4575U);
    msg.setSourceEntity(79U);
    msg.setDestination(45636U);
    msg.setDestinationEntity(112U);
    msg.actions.assign("RWSMWTXWZCKBFVIAKYMIVARHPADBXWSBYJQXZRNKBGGIGMKLMJGOIWGLYIBCOXCFOKQFUUTYJLWXFAKPGQOGMNZJSGXLVDPHXAFKEYZPQELCMDHFTUIGEBFLLOVTHUTSRNTCCEPBZRFZQRPZQUNNFQVLCUQDJYVJJ");

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
    msg.setTimeStamp(0.9508261141266929);
    msg.setSource(47874U);
    msg.setSourceEntity(65U);
    msg.setDestination(42001U);
    msg.setDestinationEntity(73U);
    msg.actions.assign("PPGNYPQEHDLTKUNGUKTUEZNOFGMSNSBOMOTBLLPNVCJAHSVDYWXRAJQGQFKJOENGUFDEDKRWCWXVOMHVETIHRPBTDLHSOOAXJPYXSWKTGGZBFVXFBXZHSRWTYNTGUPDCPEASCAIAGBNCZHRVQKRKIFKPTLIZEJJZPHYHIKOYCMDILRUJCZXFKBMBDACDBXQFRQLVIVAUMBOOXAEZQMSSYAWGWSUJCEYJ");

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
    msg.setTimeStamp(0.7362844468405741);
    msg.setSource(32480U);
    msg.setSourceEntity(145U);
    msg.setDestination(34737U);
    msg.setDestinationEntity(82U);
    msg.button = 1U;
    msg.value = 173U;

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
    msg.setTimeStamp(0.5373222889120659);
    msg.setSource(6385U);
    msg.setSourceEntity(226U);
    msg.setDestination(16494U);
    msg.setDestinationEntity(223U);
    msg.button = 43U;
    msg.value = 175U;

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
    msg.setTimeStamp(0.5476139353108355);
    msg.setSource(7476U);
    msg.setSourceEntity(66U);
    msg.setDestination(55621U);
    msg.setDestinationEntity(59U);
    msg.button = 11U;
    msg.value = 194U;

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
    msg.setTimeStamp(0.03291546900952569);
    msg.setSource(58269U);
    msg.setSourceEntity(129U);
    msg.setDestination(40383U);
    msg.setDestinationEntity(170U);
    msg.op = 159U;
    msg.text.assign("PTTFULHIJUGCSSVQZPKLDUUKSPPOMJAXWNZFCLWVPEIQUAIWABOAEWLGDXIZOVDYSKTEYYYWBFSRIAPVZAOYOENKLQNIIMHROGDOVRDGJWGTFTEDKCRBVEBYMFBTHXUMUEJFUBXQWIVZRAJXLLDBXDGQRCCUHRRFTSCQVYSIGKNZCGLSSPGNJUKNYCVJHHJZPAGRQBAKRBCONNPLMFHVHZIQWNTXWJJBMYXKA");

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
    msg.setTimeStamp(0.03658008009758884);
    msg.setSource(30197U);
    msg.setSourceEntity(139U);
    msg.setDestination(46406U);
    msg.setDestinationEntity(23U);
    msg.op = 118U;
    msg.text.assign("QECVXWDJXTEGSHXCIRZKNOKKOURDEZUOAOLPGMWNZPLVTHJWDEVLHJCPRYFTXBEUIZJOUYBJPPNRAPBAQJHOTKXNSFSIVIICGTPEGWUUYNARYSSHQNXFAYZGGMKRDYBDWSJNHNZQPIIHWRPJYLUSXGUAIUAJQZLSVWVDLEQIRNFFGMDLETQAEXKTBRQYTEOFNKQSGKCVSDLBODCMKVX");

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
    msg.setTimeStamp(0.8609092519950248);
    msg.setSource(17729U);
    msg.setSourceEntity(166U);
    msg.setDestination(10879U);
    msg.setDestinationEntity(59U);
    msg.op = 39U;
    msg.text.assign("TVQRXWPADUSSNJYWXXYNLWVEUEDIOYSZLSSFKCNIOJBWZKGDDCUSGTJRPBAIGPIFZQWBFAAEBPODKMTHFGVFKZJPUAGIUBZBDRZJTXOLBJRLVEYZKNYGQCCHEHHSOOFSUWXIJFXIMMYBUHWHXTDTECMQVRHFQINYXXNIPCZKVLBDLCPYQTNEROEUPGWWJGXOQROMTACRERQCYJPLFMMIWDVGPNOAFALTQHHNKMVMVNTBUVUQKCG");

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
    msg.setTimeStamp(0.9222777107165896);
    msg.setSource(34548U);
    msg.setSourceEntity(29U);
    msg.setDestination(8019U);
    msg.setDestinationEntity(75U);
    msg.op = 23U;
    msg.time_remain = 0.5755336283313651;
    msg.sched_time = 0.9098993206765145;

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
    msg.setTimeStamp(0.610816352370668);
    msg.setSource(15857U);
    msg.setSourceEntity(245U);
    msg.setDestination(27547U);
    msg.setDestinationEntity(222U);
    msg.op = 231U;
    msg.time_remain = 0.2051007947503274;
    msg.sched_time = 0.29503797108218177;

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
    msg.setTimeStamp(0.7233016741979077);
    msg.setSource(49986U);
    msg.setSourceEntity(14U);
    msg.setDestination(52470U);
    msg.setDestinationEntity(144U);
    msg.op = 139U;
    msg.time_remain = 0.3991549742443883;
    msg.sched_time = 0.39519319585164003;

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
    msg.setTimeStamp(0.38177273192435335);
    msg.setSource(58202U);
    msg.setSourceEntity(63U);
    msg.setDestination(47959U);
    msg.setDestinationEntity(167U);
    msg.name.assign("FNAXDVMBCJKHVBKFPTQHRLBOCARJUOOKAIJCUTWONDBGTSPKXHCRZMOACCDUZXARVXRFBWPEOTPJFYQYPWSQPTHSDSJWCJFFZYYQZUWYGZETLCAINBEHIJZKXADE");
    msg.op = 97U;
    msg.sched_time = 0.4775578468137007;

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
    msg.setTimeStamp(0.7149853270158446);
    msg.setSource(21210U);
    msg.setSourceEntity(105U);
    msg.setDestination(37814U);
    msg.setDestinationEntity(230U);
    msg.name.assign("GPJFHESCRJUEWGCAYOKCHLYRNSNPZSVRGDHMKQFWRGZXFCJWABUWIGQSBVLEWQTBZJIPXFATVAMOKFMFMMFKQDMZUDELHWIVWQAHAERORCPLUNTGGBYYBOKKFUWGUISXGZFILLOVC");
    msg.op = 165U;
    msg.sched_time = 0.03592979257275386;

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
    msg.setTimeStamp(0.8999811508987337);
    msg.setSource(49569U);
    msg.setSourceEntity(5U);
    msg.setDestination(64354U);
    msg.setDestinationEntity(200U);
    msg.name.assign("UQVBSJDYICOOBMGYRUWYNBMUCFWUSJRNBQUGBPSBDMUVCFXKXIJTYJTCLEHCYDPRTPAKTCZEORWIQKWZOOXLGLAARDXBDOZYAIMGLEMWGSTDDIPIZVTPLLOTOYQTENHIQKFFFMZSL");
    msg.op = 113U;
    msg.sched_time = 0.11109172020489089;

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
    msg.setTimeStamp(0.7818234899299026);
    msg.setSource(20694U);
    msg.setSourceEntity(190U);
    msg.setDestination(51782U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.19750252261372037);
    msg.setSource(31240U);
    msg.setSourceEntity(73U);
    msg.setDestination(20799U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.8838511493940558);
    msg.setSource(37268U);
    msg.setSourceEntity(252U);
    msg.setDestination(20831U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.5180161150046215);
    msg.setSource(14955U);
    msg.setSourceEntity(21U);
    msg.setDestination(48817U);
    msg.setDestinationEntity(203U);
    msg.name.assign("NXKKQWHPYMBZHDLWTUWTNXFONVDWZBRQ");
    msg.state = 96U;

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
    msg.setTimeStamp(0.7270111415579624);
    msg.setSource(58441U);
    msg.setSourceEntity(19U);
    msg.setDestination(34797U);
    msg.setDestinationEntity(223U);
    msg.name.assign("JEZMKIGTNQUWIQXJIKPMZFVBVFOJFHLPDVBJTJVPUWAPFGANHEVMZOXLNAKHBLGUHZRKTICLABHQTOLRFFOOOCGLWXGJQERKRKYGYFOOMJMSQIRJZAPMELJVUDYWTSRYCEWEUNFCPUCNCWZIWGTSYIMZKXWNPHOFYTMQTSQYNQSIIWZDEYAAMVLOKEAEGMDXUVLXQNTYSWIBJCKXDRHRGSCZAUFCBSPAXQCGSNBXDUHBNTDDBRBHVZVSR");
    msg.state = 143U;

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
    msg.setTimeStamp(0.6219289116713003);
    msg.setSource(426U);
    msg.setSourceEntity(22U);
    msg.setDestination(19908U);
    msg.setDestinationEntity(37U);
    msg.name.assign("JCAKTTGGWXUJZYTGB");
    msg.state = 63U;

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
    msg.setTimeStamp(0.46768536975437425);
    msg.setSource(8914U);
    msg.setSourceEntity(104U);
    msg.setDestination(30570U);
    msg.setDestinationEntity(39U);
    msg.name.assign("VKJCHLVPRPENSHPOKWRSFHLSXGDFSWJZJLTZQWYLSBAKEYSTPMCQDRENIVVJXMWEDBCR");
    msg.value = 74U;

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
    msg.setTimeStamp(0.7496310709756113);
    msg.setSource(44004U);
    msg.setSourceEntity(1U);
    msg.setDestination(36491U);
    msg.setDestinationEntity(130U);
    msg.name.assign("YRUHLMZSYDFZKXSYMDRZKUOEJRQBDBHWTNDHWMWOLZAJXAIIWQEOSOYSYLUGMKBZVVBMJOUXQTUPUABFZVZGGRLIIVCHBWNESPRPWNBQNPGGKMLVQZTSAJECBKXOFBVSQJFXHTQHQPFLDVTXCCWJRHNXFDEAIZHCGEQIIKGGPADLLYIX");
    msg.value = 202U;

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
    msg.setTimeStamp(0.6241282669180518);
    msg.setSource(27167U);
    msg.setSourceEntity(209U);
    msg.setDestination(51184U);
    msg.setDestinationEntity(67U);
    msg.name.assign("RYWPMNTCBGYXFBGAEMSXUUZXQSPJWPIJTUXLTMFMQONFKHBFNOTKHQDFALYGGYGMSBODTKCAHHQQEFDVSJBVFAMWYXDBIDZAWEUNSQCQWZPAELYFZIFZTUVWQTKRYLLJJHGPDKBXGVNVIQXAJIBNISERJNYWGERORYSQ");
    msg.value = 184U;

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
    msg.setTimeStamp(0.07349562284906641);
    msg.setSource(49133U);
    msg.setSourceEntity(74U);
    msg.setDestination(1776U);
    msg.setDestinationEntity(239U);
    msg.name.assign("DFBIPHYWXECDQCOOIDMRSPDKRHDWEMXMIGCVROTVGAJGSQJHCRLPDUTXDHYAVTTIEFKJIZMEEXNEJUSEWQRMULYYERWAWYXDACZZJUNGAJTGVVNAHXJJHBNDOWTSHQLNEBRUHRBWBSWTUPZBPQFPZQXLHKDIIFROSMQYPMVBNOAKUGZSKULFJPNMQOKPUCICKAFIGV");

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
    msg.setTimeStamp(0.013121001289295164);
    msg.setSource(21559U);
    msg.setSourceEntity(137U);
    msg.setDestination(14715U);
    msg.setDestinationEntity(78U);
    msg.name.assign("PHBYGJQBVSZKHAGDDQDRNCWMVDMVKEBUMFJJIXPRXZNTTBSCFBDSORXZWOZLNOYZYKMAUFQULHEVCEIKSXYRTGEUXLCKUKGKHSFEUAIRZEYPTBFNGZWZYFVXNRYLNUCPCLXAAMFHDHEPFDQKHTMTGMYPJCISLWFIMLRHRDNSCYGURQIIQEBJHV");

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
    msg.setTimeStamp(0.07540516939181607);
    msg.setSource(64211U);
    msg.setSourceEntity(203U);
    msg.setDestination(18445U);
    msg.setDestinationEntity(168U);
    msg.name.assign("HOBKUDJRVSWMGFHYPFCCAJQFZKEPNUZGMREQUTSWKECJXOMTYTSSICABUIWKNAVRFLKIZFOXXVADKODZBGKZIBEHJVLVAPHCCNNHRAXGUBEBNQIOL");

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
    msg.setTimeStamp(0.41190544694762665);
    msg.setSource(24525U);
    msg.setSourceEntity(221U);
    msg.setDestination(21491U);
    msg.setDestinationEntity(121U);
    msg.name.assign("UGMTYHHZCRFIEGZSTDZDMJCLUKISPVFCRZJKNAPGWHODTWJZFBSLXHXWRDFDXCGTQINQDIXNRJFYARMQETHNXVABXYIQFJLUSMQBEGJOEDHSPAQBHEPATWMIAWKKQMNNWAH");
    msg.value = 195U;

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
    msg.setTimeStamp(0.5398392278827769);
    msg.setSource(6332U);
    msg.setSourceEntity(143U);
    msg.setDestination(2443U);
    msg.setDestinationEntity(240U);
    msg.name.assign("EFYMBKFEPQBHBHAKEWOSUKZDIGWTQNKMVUXIIKLCICCZHHWSRLEUZWEPAOQWVJNGEYOPF");
    msg.value = 118U;

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
    msg.setTimeStamp(0.17724599063570134);
    msg.setSource(47304U);
    msg.setSourceEntity(185U);
    msg.setDestination(35881U);
    msg.setDestinationEntity(169U);
    msg.name.assign("CNOEGYFHVOTWBIDYDVQXXNPKQITRSWZYLFNVCYDUNLOJVWDLLFWSPAZFXSGXPRHEBZGGIUFAPEXYDDJWKYKMIZAGIRXRVTQWGIQ");
    msg.value = 0U;

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
    msg.setTimeStamp(0.8255811245170303);
    msg.setSource(7210U);
    msg.setSourceEntity(65U);
    msg.setDestination(40808U);
    msg.setDestinationEntity(245U);
    msg.id = 195U;
    msg.period = 2681397542U;
    msg.duty_cycle = 1872513790U;

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
    msg.setTimeStamp(0.5621121737177912);
    msg.setSource(59155U);
    msg.setSourceEntity(183U);
    msg.setDestination(42059U);
    msg.setDestinationEntity(184U);
    msg.id = 246U;
    msg.period = 778893313U;
    msg.duty_cycle = 2076747281U;

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
    msg.setTimeStamp(0.7889859575316481);
    msg.setSource(58226U);
    msg.setSourceEntity(116U);
    msg.setDestination(26154U);
    msg.setDestinationEntity(83U);
    msg.id = 73U;
    msg.period = 223945561U;
    msg.duty_cycle = 511448154U;

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
    msg.setTimeStamp(0.20771579862906808);
    msg.setSource(64141U);
    msg.setSourceEntity(162U);
    msg.setDestination(42632U);
    msg.setDestinationEntity(121U);
    msg.id = 70U;
    msg.period = 1958494392U;
    msg.duty_cycle = 2667281980U;

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
    msg.setTimeStamp(0.6654556356951361);
    msg.setSource(14274U);
    msg.setSourceEntity(169U);
    msg.setDestination(43277U);
    msg.setDestinationEntity(244U);
    msg.id = 131U;
    msg.period = 3620231847U;
    msg.duty_cycle = 4200628866U;

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
    msg.setTimeStamp(0.45929911938219414);
    msg.setSource(23850U);
    msg.setSourceEntity(212U);
    msg.setDestination(65010U);
    msg.setDestinationEntity(141U);
    msg.id = 40U;
    msg.period = 2648981236U;
    msg.duty_cycle = 3344361205U;

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
    msg.setTimeStamp(0.91226945266038);
    msg.setSource(39497U);
    msg.setSourceEntity(105U);
    msg.setDestination(40706U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.023741312208048204;
    msg.lon = 0.6816642217716338;
    msg.height = 0.7841776200964884;
    msg.x = 0.9540143479537185;
    msg.y = 0.05903909346950387;
    msg.z = 0.9874974667877061;
    msg.phi = 0.884243927515072;
    msg.theta = 0.8544774647526349;
    msg.psi = 0.31206044098625274;
    msg.u = 0.26980627557514336;
    msg.v = 0.270717282845621;
    msg.w = 0.5493625400711101;
    msg.vx = 0.3667470516957636;
    msg.vy = 0.27558574917656065;
    msg.vz = 0.758686185177051;
    msg.p = 0.6704936509038;
    msg.q = 0.23357595796694297;
    msg.r = 0.4577227738235842;
    msg.depth = 0.789159466564526;
    msg.alt = 0.20131326721225373;

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
    msg.setTimeStamp(0.8571191386543838);
    msg.setSource(5260U);
    msg.setSourceEntity(109U);
    msg.setDestination(40674U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.3962912906648599;
    msg.lon = 0.3302679823473216;
    msg.height = 0.6579972362952297;
    msg.x = 0.2173018041073742;
    msg.y = 0.22913283385541572;
    msg.z = 0.892932986971772;
    msg.phi = 0.6131968427837147;
    msg.theta = 0.9828887324816887;
    msg.psi = 0.6118061825921676;
    msg.u = 0.3402217309350559;
    msg.v = 0.7178509335178798;
    msg.w = 0.37349062867106264;
    msg.vx = 0.4857174044744115;
    msg.vy = 0.44164923468091977;
    msg.vz = 0.2292542092784794;
    msg.p = 0.6645939252314971;
    msg.q = 0.6921612590596358;
    msg.r = 0.2754101525490513;
    msg.depth = 0.17303939144434388;
    msg.alt = 0.6970414624032731;

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
    msg.setTimeStamp(0.6625106711235459);
    msg.setSource(21559U);
    msg.setSourceEntity(244U);
    msg.setDestination(49241U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.02667509956462011;
    msg.lon = 0.1340801065618612;
    msg.height = 0.3979814436633552;
    msg.x = 0.10203541722287424;
    msg.y = 0.4614213232161448;
    msg.z = 0.8389290823521394;
    msg.phi = 0.7102625754192399;
    msg.theta = 0.9219078257658462;
    msg.psi = 0.196761683209413;
    msg.u = 0.7305808273187916;
    msg.v = 0.8090954967729364;
    msg.w = 0.8642081422669715;
    msg.vx = 0.8455901143601897;
    msg.vy = 0.9424550007026741;
    msg.vz = 0.4001646314924576;
    msg.p = 0.07343977788878486;
    msg.q = 0.056507543937871274;
    msg.r = 0.5475595788576982;
    msg.depth = 0.3796928839656839;
    msg.alt = 0.39751030010797805;

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
    msg.setTimeStamp(0.35847737463643636);
    msg.setSource(1229U);
    msg.setSourceEntity(170U);
    msg.setDestination(64463U);
    msg.setDestinationEntity(0U);
    msg.x = 0.6341795118261236;
    msg.y = 0.1899287564493055;
    msg.z = 0.6988733495914692;

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
    msg.setTimeStamp(0.3845162852940267);
    msg.setSource(12433U);
    msg.setSourceEntity(118U);
    msg.setDestination(54162U);
    msg.setDestinationEntity(177U);
    msg.x = 0.1926564916081812;
    msg.y = 0.5927923642280523;
    msg.z = 0.3075368315416518;

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
    msg.setTimeStamp(0.9469433876879245);
    msg.setSource(41111U);
    msg.setSourceEntity(183U);
    msg.setDestination(9237U);
    msg.setDestinationEntity(171U);
    msg.x = 0.4349534007594479;
    msg.y = 0.003902249331116603;
    msg.z = 0.36282868169038174;

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
    msg.setTimeStamp(0.738548976432579);
    msg.setSource(36089U);
    msg.setSourceEntity(97U);
    msg.setDestination(51797U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5583616808748171;

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
    msg.setTimeStamp(0.3280579120165178);
    msg.setSource(58954U);
    msg.setSourceEntity(207U);
    msg.setDestination(63433U);
    msg.setDestinationEntity(98U);
    msg.value = 0.2350271393376786;

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
    msg.setTimeStamp(0.9465057014616644);
    msg.setSource(43622U);
    msg.setSourceEntity(7U);
    msg.setDestination(27992U);
    msg.setDestinationEntity(197U);
    msg.value = 0.4306576866893086;

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
    msg.setTimeStamp(0.7200010952069827);
    msg.setSource(14229U);
    msg.setSourceEntity(34U);
    msg.setDestination(44368U);
    msg.setDestinationEntity(107U);
    msg.value = 0.9614526318633493;

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
    msg.setTimeStamp(0.29524188801700724);
    msg.setSource(45378U);
    msg.setSourceEntity(112U);
    msg.setDestination(9627U);
    msg.setDestinationEntity(147U);
    msg.value = 0.08031008185924982;

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
    msg.setTimeStamp(0.6082484913785762);
    msg.setSource(47157U);
    msg.setSourceEntity(55U);
    msg.setDestination(19755U);
    msg.setDestinationEntity(195U);
    msg.value = 0.8117104974014906;

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
    msg.setTimeStamp(0.8688299033590464);
    msg.setSource(44287U);
    msg.setSourceEntity(179U);
    msg.setDestination(57021U);
    msg.setDestinationEntity(113U);
    msg.x = 0.37090187722949397;
    msg.y = 0.6609557487298942;
    msg.z = 0.26344200036431675;
    msg.phi = 0.17298749658679358;
    msg.theta = 0.8222742495023652;
    msg.psi = 0.9957347158886618;
    msg.p = 0.6828202976684428;
    msg.q = 0.11456729813789468;
    msg.r = 0.563329529109569;
    msg.u = 0.35101616702136174;
    msg.v = 0.2805013767863094;
    msg.w = 0.214257672510777;
    msg.bias_psi = 0.07199295173651754;
    msg.bias_r = 0.3947303306409641;

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
    msg.setTimeStamp(0.33692634022490275);
    msg.setSource(35650U);
    msg.setSourceEntity(253U);
    msg.setDestination(30752U);
    msg.setDestinationEntity(51U);
    msg.x = 0.5196150609303801;
    msg.y = 0.20264272363672897;
    msg.z = 0.5335624683302054;
    msg.phi = 0.9025725470189981;
    msg.theta = 0.8786335114947077;
    msg.psi = 0.518319572438323;
    msg.p = 0.08565426302502632;
    msg.q = 0.45939156751404586;
    msg.r = 0.8613061272957578;
    msg.u = 0.30568692297097766;
    msg.v = 0.5586507239739779;
    msg.w = 0.8244634058804515;
    msg.bias_psi = 0.5223641588638328;
    msg.bias_r = 0.5008444230839197;

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
    msg.setTimeStamp(0.3905447848443787);
    msg.setSource(46557U);
    msg.setSourceEntity(13U);
    msg.setDestination(22374U);
    msg.setDestinationEntity(251U);
    msg.x = 0.5963676082023212;
    msg.y = 0.53613158111408;
    msg.z = 0.7927024129382086;
    msg.phi = 0.5811363874678073;
    msg.theta = 0.6995076348747932;
    msg.psi = 0.21106393344419327;
    msg.p = 0.2937808903215334;
    msg.q = 0.13414557623186918;
    msg.r = 0.2744846308048511;
    msg.u = 0.9334400350913405;
    msg.v = 0.2866724173675267;
    msg.w = 0.009487079853185643;
    msg.bias_psi = 0.7346172881266918;
    msg.bias_r = 0.9791665058265158;

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
    msg.setTimeStamp(0.496346834435883);
    msg.setSource(4846U);
    msg.setSourceEntity(185U);
    msg.setDestination(48698U);
    msg.setDestinationEntity(87U);
    msg.bias_psi = 0.9840091801005754;
    msg.bias_r = 0.04705800799759008;
    msg.cog = 0.044765800411601275;
    msg.cyaw = 0.6714887049178584;
    msg.lbl_rej_level = 0.2326224996394437;
    msg.gps_rej_level = 0.5452746066101686;
    msg.custom_x = 0.9940095189554496;
    msg.custom_y = 0.40090825134902863;
    msg.custom_z = 0.1921611749938681;

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
    msg.setTimeStamp(0.6368693260975609);
    msg.setSource(61111U);
    msg.setSourceEntity(138U);
    msg.setDestination(41962U);
    msg.setDestinationEntity(203U);
    msg.bias_psi = 0.46358045060949493;
    msg.bias_r = 0.7774798141800376;
    msg.cog = 0.16225634794934407;
    msg.cyaw = 0.5818999047557224;
    msg.lbl_rej_level = 0.015204081336567699;
    msg.gps_rej_level = 0.3417697772146234;
    msg.custom_x = 0.08159368905065834;
    msg.custom_y = 0.880783168552658;
    msg.custom_z = 0.709490049688048;

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
    msg.setTimeStamp(0.5380449436488495);
    msg.setSource(45227U);
    msg.setSourceEntity(251U);
    msg.setDestination(17747U);
    msg.setDestinationEntity(78U);
    msg.bias_psi = 0.13545829296367617;
    msg.bias_r = 0.16434087505860018;
    msg.cog = 0.3496566852746824;
    msg.cyaw = 0.5865675683136415;
    msg.lbl_rej_level = 0.2401393498777148;
    msg.gps_rej_level = 0.3959329546186159;
    msg.custom_x = 0.3253602667459091;
    msg.custom_y = 0.26492081323957095;
    msg.custom_z = 0.37802785011161155;

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
    msg.setTimeStamp(0.15535216308907596);
    msg.setSource(6570U);
    msg.setSourceEntity(135U);
    msg.setDestination(22812U);
    msg.setDestinationEntity(147U);
    msg.utc_time = 0.7061428112221114;
    msg.reason = 38U;

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
    msg.setTimeStamp(0.753300934511757);
    msg.setSource(5776U);
    msg.setSourceEntity(115U);
    msg.setDestination(23075U);
    msg.setDestinationEntity(66U);
    msg.utc_time = 0.13934434982101584;
    msg.reason = 183U;

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
    msg.setTimeStamp(0.9725505352086761);
    msg.setSource(50098U);
    msg.setSourceEntity(39U);
    msg.setDestination(63788U);
    msg.setDestinationEntity(80U);
    msg.utc_time = 0.32794466563569524;
    msg.reason = 20U;

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
    msg.setTimeStamp(0.15303091508877664);
    msg.setSource(20392U);
    msg.setSourceEntity(85U);
    msg.setDestination(51855U);
    msg.setDestinationEntity(118U);
    msg.id = 29U;
    msg.range = 0.46446087571288364;
    msg.acceptance = 237U;

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
    msg.setTimeStamp(0.051391532420833386);
    msg.setSource(47051U);
    msg.setSourceEntity(8U);
    msg.setDestination(36468U);
    msg.setDestinationEntity(135U);
    msg.id = 7U;
    msg.range = 0.648547123728877;
    msg.acceptance = 136U;

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
    msg.setTimeStamp(0.9485273356755085);
    msg.setSource(10043U);
    msg.setSourceEntity(47U);
    msg.setDestination(5383U);
    msg.setDestinationEntity(53U);
    msg.id = 252U;
    msg.range = 0.6153164327728461;
    msg.acceptance = 116U;

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
    msg.setTimeStamp(0.5951081997367017);
    msg.setSource(7499U);
    msg.setSourceEntity(20U);
    msg.setDestination(33404U);
    msg.setDestinationEntity(99U);
    msg.type = 45U;
    msg.reason = 8U;
    msg.value = 0.984342254226404;
    msg.timestep = 0.2826678467865398;

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
    msg.setTimeStamp(0.4027906261259163);
    msg.setSource(6632U);
    msg.setSourceEntity(182U);
    msg.setDestination(58166U);
    msg.setDestinationEntity(124U);
    msg.type = 37U;
    msg.reason = 238U;
    msg.value = 0.9615795629959071;
    msg.timestep = 0.09286611112775534;

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
    msg.setTimeStamp(0.798072339458941);
    msg.setSource(56101U);
    msg.setSourceEntity(60U);
    msg.setDestination(15705U);
    msg.setDestinationEntity(199U);
    msg.type = 148U;
    msg.reason = 165U;
    msg.value = 0.6910695002770373;
    msg.timestep = 0.35564967986487217;

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
    msg.setTimeStamp(0.6495604203513521);
    msg.setSource(34773U);
    msg.setSourceEntity(243U);
    msg.setDestination(45373U);
    msg.setDestinationEntity(23U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CNMCCYBDBZDOPBFWWBVAZCPPRRDJUXPDTZPNMYOMWTWIIXOUSJLMPVNEJRQWIEQRCFMGBLGVDVQCHYYJJCKJIFOVOFJDLMXZODUWTNCXVTEKQAULTBUNSDACTMSWEANETYEJYAXPSGWRXEHPAUIQRRGHMLAHBIRVLFNIYSKGAXGQPUGOWFTRLKEKHDDXIZYPKTNLHMUOFSALNZZZRKHNGHISFVQEUTSUQMSBBBXKEFZXKQSLWVHGZVHI");
    tmp_msg_0.lat = 0.07558064642183038;
    tmp_msg_0.lon = 0.03590254219508171;
    tmp_msg_0.depth = 0.2546638294310821;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 161U;
    tmp_msg_0.transponder_delay = 139U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.315791936220583;
    msg.y = 0.5170548827333843;
    msg.var_x = 0.4927868879108227;
    msg.var_y = 0.777335709370143;
    msg.distance = 0.29586894981817646;

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
    msg.setTimeStamp(0.8991928622052154);
    msg.setSource(46982U);
    msg.setSourceEntity(132U);
    msg.setDestination(51615U);
    msg.setDestinationEntity(23U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OCVBTDOQQALZQOMBZAAWJEPNXSOHZRKXBCIMLVMPLHXFNDXSOINYLBRAEEFFVATIVJCQJBFFEAQPIPCQKJMGVDMNPWIPIXRGGRSTOUGJCLPCFQMTYXYSKXRKYSRUDBINYWJGEZSZJDQMJOJSUZSYHBXDFPTENEMVXLHVUKULSMWLDKAWTDGFJBTQNVGTUIOGNDCHIGRZKKXSUYR");
    tmp_msg_0.lat = 0.1644567146965391;
    tmp_msg_0.lon = 0.4746595266745859;
    tmp_msg_0.depth = 0.034397337363373026;
    tmp_msg_0.query_channel = 225U;
    tmp_msg_0.reply_channel = 192U;
    tmp_msg_0.transponder_delay = 162U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0077375449924940165;
    msg.y = 0.836174241844264;
    msg.var_x = 0.0071631354339214415;
    msg.var_y = 0.5462420540049238;
    msg.distance = 0.2213198732343733;

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
    msg.setTimeStamp(0.8914482875978634);
    msg.setSource(2137U);
    msg.setSourceEntity(125U);
    msg.setDestination(15663U);
    msg.setDestinationEntity(21U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HQKTZZBJSTVVJOMRICXDVZVTBWOQRSBZKIZXHYTWDJWFGBYEIKUSJQLCGPKTXCVBCSCMUCRFRVGAIWYHEXYOZZEYZGQBLPRQIVTJHXHUXNMNDISOVIICEYSLKOPFYFAWUQSHPPEEMLFANG");
    tmp_msg_0.lat = 0.5957598761562723;
    tmp_msg_0.lon = 0.2484597785189604;
    tmp_msg_0.depth = 0.8895682965664757;
    tmp_msg_0.query_channel = 12U;
    tmp_msg_0.reply_channel = 214U;
    tmp_msg_0.transponder_delay = 252U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3896020721409854;
    msg.y = 0.3975520483030449;
    msg.var_x = 0.6740992442011764;
    msg.var_y = 0.6511324403242426;
    msg.distance = 0.3055184591015587;

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
    msg.setTimeStamp(0.27423982357551635);
    msg.setSource(49379U);
    msg.setSourceEntity(111U);
    msg.setDestination(41412U);
    msg.setDestinationEntity(93U);
    msg.state = 70U;

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
    msg.setTimeStamp(0.770878081811947);
    msg.setSource(23867U);
    msg.setSourceEntity(170U);
    msg.setDestination(6427U);
    msg.setDestinationEntity(124U);
    msg.state = 14U;

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
    msg.setTimeStamp(0.9582346093981923);
    msg.setSource(44716U);
    msg.setSourceEntity(71U);
    msg.setDestination(24017U);
    msg.setDestinationEntity(241U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.5017819071934778);
    msg.setSource(64645U);
    msg.setSourceEntity(231U);
    msg.setDestination(9125U);
    msg.setDestinationEntity(2U);
    msg.x = 0.2669498703565941;
    msg.y = 0.18345501957632704;
    msg.z = 0.47557753710847583;

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
    msg.setTimeStamp(0.8383062360043234);
    msg.setSource(60481U);
    msg.setSourceEntity(118U);
    msg.setDestination(61014U);
    msg.setDestinationEntity(80U);
    msg.x = 0.9398519934726041;
    msg.y = 0.17324022361743674;
    msg.z = 0.9549580490769624;

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
    msg.setTimeStamp(0.6814962795675967);
    msg.setSource(34055U);
    msg.setSourceEntity(94U);
    msg.setDestination(383U);
    msg.setDestinationEntity(128U);
    msg.x = 0.8540769159400503;
    msg.y = 0.2689557025481305;
    msg.z = 0.6718123605686638;

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
    msg.setTimeStamp(0.8831475143281873);
    msg.setSource(10485U);
    msg.setSourceEntity(215U);
    msg.setDestination(46145U);
    msg.setDestinationEntity(221U);
    msg.va = 0.8537644614503883;
    msg.aoa = 0.31228531867539067;
    msg.ssa = 0.2434811765738374;

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
    msg.setTimeStamp(0.6700895189202177);
    msg.setSource(47018U);
    msg.setSourceEntity(151U);
    msg.setDestination(1812U);
    msg.setDestinationEntity(61U);
    msg.va = 0.533922325664616;
    msg.aoa = 0.14034361261718098;
    msg.ssa = 0.7077276508467294;

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
    msg.setTimeStamp(0.01891767642337383);
    msg.setSource(2434U);
    msg.setSourceEntity(97U);
    msg.setDestination(59874U);
    msg.setDestinationEntity(216U);
    msg.va = 0.4146228938017955;
    msg.aoa = 0.7127506036801197;
    msg.ssa = 0.14073473185006802;

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
    msg.setTimeStamp(0.14152496208085874);
    msg.setSource(35863U);
    msg.setSourceEntity(201U);
    msg.setDestination(17622U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6294720821353709;

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
    msg.setTimeStamp(0.7468432681316135);
    msg.setSource(11013U);
    msg.setSourceEntity(140U);
    msg.setDestination(42001U);
    msg.setDestinationEntity(16U);
    msg.value = 0.6474115473654376;

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
    msg.setTimeStamp(0.5079157943169433);
    msg.setSource(62753U);
    msg.setSourceEntity(183U);
    msg.setDestination(56754U);
    msg.setDestinationEntity(30U);
    msg.value = 0.15907650166862275;

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
    msg.setTimeStamp(0.1843590052554307);
    msg.setSource(18679U);
    msg.setSourceEntity(100U);
    msg.setDestination(23007U);
    msg.setDestinationEntity(211U);
    msg.value = 0.2785607738552819;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.043476226889239244);
    msg.setSource(26596U);
    msg.setSourceEntity(230U);
    msg.setDestination(46202U);
    msg.setDestinationEntity(107U);
    msg.value = 0.08000530179756593;
    msg.z_units = 240U;

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
    msg.setTimeStamp(0.6429027837177711);
    msg.setSource(63964U);
    msg.setSourceEntity(108U);
    msg.setDestination(55947U);
    msg.setDestinationEntity(219U);
    msg.value = 0.08676506492884573;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.2312928742461825);
    msg.setSource(54018U);
    msg.setSourceEntity(230U);
    msg.setDestination(20882U);
    msg.setDestinationEntity(19U);
    msg.value = 0.5379607797769516;
    msg.speed_units = 243U;

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
    msg.setTimeStamp(0.2675205555707284);
    msg.setSource(38186U);
    msg.setSourceEntity(99U);
    msg.setDestination(32907U);
    msg.setDestinationEntity(170U);
    msg.value = 0.8337424691194047;
    msg.speed_units = 145U;

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
    msg.setTimeStamp(0.6936115301397341);
    msg.setSource(57129U);
    msg.setSourceEntity(10U);
    msg.setDestination(33448U);
    msg.setDestinationEntity(209U);
    msg.value = 0.7404585031061595;
    msg.speed_units = 13U;

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
    msg.setTimeStamp(0.6342008959118647);
    msg.setSource(40469U);
    msg.setSourceEntity(176U);
    msg.setDestination(55867U);
    msg.setDestinationEntity(202U);
    msg.value = 0.9760981389287865;

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
    msg.setTimeStamp(0.5895065672628025);
    msg.setSource(17778U);
    msg.setSourceEntity(4U);
    msg.setDestination(18765U);
    msg.setDestinationEntity(48U);
    msg.value = 0.9151340604877092;

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
    msg.setTimeStamp(0.095230578812589);
    msg.setSource(25283U);
    msg.setSourceEntity(203U);
    msg.setDestination(14108U);
    msg.setDestinationEntity(9U);
    msg.value = 0.21550805141410245;

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
    msg.setTimeStamp(0.3224022359389791);
    msg.setSource(46959U);
    msg.setSourceEntity(172U);
    msg.setDestination(43292U);
    msg.setDestinationEntity(216U);
    msg.value = 0.046077587756470306;

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
    msg.setTimeStamp(0.15898376956683158);
    msg.setSource(64918U);
    msg.setSourceEntity(251U);
    msg.setDestination(44612U);
    msg.setDestinationEntity(35U);
    msg.value = 0.7963582491391511;

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
    msg.setTimeStamp(0.02519718334739174);
    msg.setSource(15622U);
    msg.setSourceEntity(239U);
    msg.setDestination(8549U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7751151417303933;

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
    msg.setTimeStamp(0.5369175037487856);
    msg.setSource(17450U);
    msg.setSourceEntity(132U);
    msg.setDestination(22207U);
    msg.setDestinationEntity(231U);
    msg.value = 0.6758557385734059;

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
    msg.setTimeStamp(0.21208433288153283);
    msg.setSource(33792U);
    msg.setSourceEntity(146U);
    msg.setDestination(17593U);
    msg.setDestinationEntity(34U);
    msg.value = 0.6708894553149499;

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
    msg.setTimeStamp(0.0326503436128287);
    msg.setSource(38716U);
    msg.setSourceEntity(97U);
    msg.setDestination(14680U);
    msg.setDestinationEntity(59U);
    msg.value = 0.8528225336474845;

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
    msg.setTimeStamp(0.33881966330518787);
    msg.setSource(16340U);
    msg.setSourceEntity(131U);
    msg.setDestination(21519U);
    msg.setDestinationEntity(213U);
    msg.path_ref = 2338970248U;
    msg.start_lat = 0.8952752852996394;
    msg.start_lon = 0.8092952546734666;
    msg.start_z = 0.09907222311339825;
    msg.start_z_units = 167U;
    msg.end_lat = 0.28043933325916226;
    msg.end_lon = 0.9901914024956371;
    msg.end_z = 0.11305366331893785;
    msg.end_z_units = 229U;
    msg.speed = 0.2866408838893538;
    msg.speed_units = 114U;
    msg.lradius = 0.6050975999301142;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.8479648993097173);
    msg.setSource(29631U);
    msg.setSourceEntity(68U);
    msg.setDestination(57690U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 4283210613U;
    msg.start_lat = 0.47475675912631166;
    msg.start_lon = 0.4308963282837295;
    msg.start_z = 0.1833989447388129;
    msg.start_z_units = 23U;
    msg.end_lat = 0.7748287253240518;
    msg.end_lon = 0.8752424629718937;
    msg.end_z = 0.28199101560768947;
    msg.end_z_units = 136U;
    msg.speed = 0.2011324483058966;
    msg.speed_units = 200U;
    msg.lradius = 0.7109519743293592;
    msg.flags = 162U;

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
    msg.setTimeStamp(0.15775202775749542);
    msg.setSource(46708U);
    msg.setSourceEntity(173U);
    msg.setDestination(56676U);
    msg.setDestinationEntity(85U);
    msg.path_ref = 1829968029U;
    msg.start_lat = 0.8642115532973931;
    msg.start_lon = 0.6880658274917436;
    msg.start_z = 0.8873673801503958;
    msg.start_z_units = 182U;
    msg.end_lat = 0.5652968963111656;
    msg.end_lon = 0.39798944657940805;
    msg.end_z = 0.29285158119596133;
    msg.end_z_units = 232U;
    msg.speed = 0.7169772870509848;
    msg.speed_units = 5U;
    msg.lradius = 0.8076965157319008;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.40357914735955513);
    msg.setSource(47089U);
    msg.setSourceEntity(150U);
    msg.setDestination(44008U);
    msg.setDestinationEntity(118U);
    msg.x = 0.5424445432836165;
    msg.y = 0.8474541102161524;
    msg.z = 0.7494744026352526;
    msg.k = 0.3428766914633298;
    msg.m = 0.4074309354515072;
    msg.n = 0.21929981842261093;
    msg.flags = 148U;

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
    msg.setTimeStamp(0.04747417995340586);
    msg.setSource(53989U);
    msg.setSourceEntity(40U);
    msg.setDestination(1710U);
    msg.setDestinationEntity(169U);
    msg.x = 0.930846713417519;
    msg.y = 0.3516552487371827;
    msg.z = 0.03830122933032032;
    msg.k = 0.8675375248474112;
    msg.m = 0.3085162849005072;
    msg.n = 0.4768172518584326;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.3375151772570567);
    msg.setSource(24142U);
    msg.setSourceEntity(164U);
    msg.setDestination(17934U);
    msg.setDestinationEntity(17U);
    msg.x = 0.32079255651736305;
    msg.y = 0.85662959139894;
    msg.z = 0.7593296414145837;
    msg.k = 0.845206860369081;
    msg.m = 0.3326319162867235;
    msg.n = 0.5137387194257946;
    msg.flags = 184U;

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
    msg.setTimeStamp(0.4280940373043265);
    msg.setSource(40188U);
    msg.setSourceEntity(249U);
    msg.setDestination(39842U);
    msg.setDestinationEntity(96U);
    msg.value = 0.634312679081254;

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
    msg.setTimeStamp(0.12450588324184364);
    msg.setSource(37749U);
    msg.setSourceEntity(43U);
    msg.setDestination(44843U);
    msg.setDestinationEntity(247U);
    msg.value = 0.007535747583539698;

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
    msg.setTimeStamp(0.09825090431153438);
    msg.setSource(10337U);
    msg.setSourceEntity(177U);
    msg.setDestination(28689U);
    msg.setDestinationEntity(213U);
    msg.value = 0.9086872623697159;

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
    msg.setTimeStamp(0.057156308914498966);
    msg.setSource(44520U);
    msg.setSourceEntity(230U);
    msg.setDestination(36710U);
    msg.setDestinationEntity(206U);
    msg.u = 0.03194264249701695;
    msg.v = 0.35682076109075844;
    msg.w = 0.22367006379616905;
    msg.p = 0.18233092208062807;
    msg.q = 0.34493149614174146;
    msg.r = 0.7768419409365757;
    msg.flags = 219U;

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
    msg.setTimeStamp(0.9547574738779575);
    msg.setSource(11969U);
    msg.setSourceEntity(48U);
    msg.setDestination(28593U);
    msg.setDestinationEntity(170U);
    msg.u = 0.9644323520986496;
    msg.v = 0.2866093983991562;
    msg.w = 0.5364023515014752;
    msg.p = 0.2552477394043464;
    msg.q = 0.25036602757072035;
    msg.r = 0.5485934718989768;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.5357657074860549);
    msg.setSource(2587U);
    msg.setSourceEntity(76U);
    msg.setDestination(38403U);
    msg.setDestinationEntity(37U);
    msg.u = 0.7810942023380403;
    msg.v = 0.8787131570050791;
    msg.w = 0.09023778886000267;
    msg.p = 0.4803497880451476;
    msg.q = 0.9555449655310272;
    msg.r = 0.8453694647751119;
    msg.flags = 57U;

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
    msg.setTimeStamp(0.03802810029093229);
    msg.setSource(1395U);
    msg.setSourceEntity(208U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(166U);
    msg.path_ref = 1668391866U;
    msg.start_lat = 0.568397658238254;
    msg.start_lon = 0.715522362843461;
    msg.start_z = 0.6710950458500015;
    msg.start_z_units = 71U;
    msg.end_lat = 0.7775470828312538;
    msg.end_lon = 0.10261778899849094;
    msg.end_z = 0.8363928977584156;
    msg.end_z_units = 240U;
    msg.lradius = 0.32976301315285605;
    msg.flags = 157U;
    msg.x = 0.4890894824804748;
    msg.y = 0.5671432324083997;
    msg.z = 0.03068235255633367;
    msg.vx = 0.2023935785313561;
    msg.vy = 0.3876299002676695;
    msg.vz = 0.628313120099464;
    msg.course_error = 0.03855197355681306;
    msg.eta = 1046U;

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
    msg.setTimeStamp(0.4311108707425112);
    msg.setSource(26492U);
    msg.setSourceEntity(48U);
    msg.setDestination(35723U);
    msg.setDestinationEntity(227U);
    msg.path_ref = 2464842209U;
    msg.start_lat = 0.9751180248430095;
    msg.start_lon = 0.2535234473779965;
    msg.start_z = 0.5336673598159073;
    msg.start_z_units = 51U;
    msg.end_lat = 0.679908888035089;
    msg.end_lon = 0.37846994673547885;
    msg.end_z = 0.04527052403366838;
    msg.end_z_units = 147U;
    msg.lradius = 0.0454336814473989;
    msg.flags = 241U;
    msg.x = 0.2725638007058043;
    msg.y = 0.9724318157518224;
    msg.z = 0.02682219589252066;
    msg.vx = 0.26285719485563586;
    msg.vy = 0.07471738377111392;
    msg.vz = 0.7857334091826065;
    msg.course_error = 0.40679529570962547;
    msg.eta = 52699U;

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
    msg.setTimeStamp(0.3621180778848958);
    msg.setSource(22577U);
    msg.setSourceEntity(142U);
    msg.setDestination(14958U);
    msg.setDestinationEntity(170U);
    msg.path_ref = 2261650664U;
    msg.start_lat = 0.716448274886874;
    msg.start_lon = 0.3809226872362842;
    msg.start_z = 0.418272946472973;
    msg.start_z_units = 50U;
    msg.end_lat = 0.9490482147066464;
    msg.end_lon = 0.3673013698408477;
    msg.end_z = 0.8576499411207001;
    msg.end_z_units = 119U;
    msg.lradius = 0.6153410154030727;
    msg.flags = 158U;
    msg.x = 0.5089521835291437;
    msg.y = 0.8460057778411852;
    msg.z = 0.7719209792094746;
    msg.vx = 0.9656916697557157;
    msg.vy = 0.7802192996135714;
    msg.vz = 0.4267319500472785;
    msg.course_error = 0.6851240803192005;
    msg.eta = 4454U;

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
    msg.setTimeStamp(0.5846853421933129);
    msg.setSource(612U);
    msg.setSourceEntity(59U);
    msg.setDestination(43520U);
    msg.setDestinationEntity(207U);
    msg.k = 0.8301647690491418;
    msg.m = 0.830657609868718;
    msg.n = 0.0038097420365843515;

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
    msg.setTimeStamp(0.9808623946477557);
    msg.setSource(9044U);
    msg.setSourceEntity(211U);
    msg.setDestination(43750U);
    msg.setDestinationEntity(18U);
    msg.k = 0.24257657038840463;
    msg.m = 0.9124525239908561;
    msg.n = 0.49521246950805076;

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
    msg.setTimeStamp(0.6244736570149928);
    msg.setSource(30058U);
    msg.setSourceEntity(171U);
    msg.setDestination(50272U);
    msg.setDestinationEntity(239U);
    msg.k = 0.5529935862839999;
    msg.m = 0.3256650126414842;
    msg.n = 0.862115728720474;

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
    msg.setTimeStamp(0.09421134663230257);
    msg.setSource(60930U);
    msg.setSourceEntity(75U);
    msg.setDestination(59802U);
    msg.setDestinationEntity(189U);
    msg.p = 0.7956141489586515;
    msg.i = 0.12967788319021667;
    msg.d = 0.29718017020455545;
    msg.a = 0.1739004703734781;

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
    msg.setTimeStamp(0.4143182159157236);
    msg.setSource(32845U);
    msg.setSourceEntity(153U);
    msg.setDestination(21766U);
    msg.setDestinationEntity(64U);
    msg.p = 0.18623314007393232;
    msg.i = 0.7272477197406563;
    msg.d = 0.3941900553556793;
    msg.a = 0.9628539673460467;

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
    msg.setTimeStamp(0.6820277471449488);
    msg.setSource(6970U);
    msg.setSourceEntity(27U);
    msg.setDestination(25466U);
    msg.setDestinationEntity(87U);
    msg.p = 0.6347321694436984;
    msg.i = 0.4143397333364417;
    msg.d = 0.15069745524090572;
    msg.a = 0.4118457370915296;

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
    msg.setTimeStamp(0.4658109833240741);
    msg.setSource(53686U);
    msg.setSourceEntity(118U);
    msg.setDestination(13677U);
    msg.setDestinationEntity(177U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.21037220857843109);
    msg.setSource(14913U);
    msg.setSourceEntity(135U);
    msg.setDestination(43090U);
    msg.setDestinationEntity(171U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.7618938715755559);
    msg.setSource(63051U);
    msg.setSourceEntity(240U);
    msg.setDestination(42368U);
    msg.setDestinationEntity(23U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.8207889675923679);
    msg.setSource(21164U);
    msg.setSourceEntity(56U);
    msg.setDestination(755U);
    msg.setDestinationEntity(42U);
    msg.x = 0.7057035492990268;
    msg.y = 0.7518417354399755;
    msg.z = 0.6839986393266316;
    msg.vx = 0.25154643919161856;
    msg.vy = 0.632375229058748;
    msg.vz = 0.8843260686017262;
    msg.ax = 0.11145652426246566;
    msg.ay = 0.5500596661058255;
    msg.az = 0.9132791186551052;
    msg.flags = 49504U;

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
    msg.setTimeStamp(0.869898114187522);
    msg.setSource(59645U);
    msg.setSourceEntity(199U);
    msg.setDestination(23448U);
    msg.setDestinationEntity(70U);
    msg.x = 0.1507371614309072;
    msg.y = 0.9000835827451172;
    msg.z = 0.13780146937129778;
    msg.vx = 0.1286820066859543;
    msg.vy = 0.9087780943992088;
    msg.vz = 0.24850300468829534;
    msg.ax = 0.669885573420009;
    msg.ay = 0.9172077145964961;
    msg.az = 0.2927856236473817;
    msg.flags = 13905U;

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
    msg.setTimeStamp(0.8905415282911701);
    msg.setSource(43081U);
    msg.setSourceEntity(89U);
    msg.setDestination(47660U);
    msg.setDestinationEntity(9U);
    msg.x = 0.56570175447708;
    msg.y = 0.9273471514848813;
    msg.z = 0.432368239033631;
    msg.vx = 0.9903365054367127;
    msg.vy = 0.056463480870832417;
    msg.vz = 0.4840991997360947;
    msg.ax = 0.9773893285237086;
    msg.ay = 0.8918663740846694;
    msg.az = 0.31281659756807056;
    msg.flags = 33198U;

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
    msg.setTimeStamp(0.9574339634868583);
    msg.setSource(65477U);
    msg.setSourceEntity(217U);
    msg.setDestination(575U);
    msg.setDestinationEntity(0U);
    msg.value = 0.7881416657200194;

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
    msg.setTimeStamp(0.2733111892428087);
    msg.setSource(47077U);
    msg.setSourceEntity(252U);
    msg.setDestination(52799U);
    msg.setDestinationEntity(220U);
    msg.value = 0.8262083335662334;

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
    msg.setTimeStamp(0.7320913870935786);
    msg.setSource(29399U);
    msg.setSourceEntity(65U);
    msg.setDestination(52954U);
    msg.setDestinationEntity(207U);
    msg.value = 0.9429501535495651;

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
    msg.setTimeStamp(0.8786405165224435);
    msg.setSource(22711U);
    msg.setSourceEntity(249U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(160U);
    msg.timeout = 29390U;
    msg.lat = 0.6944768249818416;
    msg.lon = 0.1342294513070008;
    msg.z = 0.07650025426548335;
    msg.z_units = 170U;
    msg.speed = 0.2955804760829419;
    msg.speed_units = 183U;
    msg.roll = 0.5400782108498142;
    msg.pitch = 0.8042213227426919;
    msg.yaw = 0.16862843549235984;
    msg.custom.assign("YALVAKTAILYUIJTDYGTQMXJOVPHQUOJQAHLFJNOJZRKGQFNLTKZCCSVEFBDKMHGOSALITAYUKUKPVFCMNRCYUXUWHMCHOUSBESRBSPZFKIFWQHWYBQUSMCIRFNVYXGCBEPONXRHZALXPIZZIWGOOVZBSJYRWLGPRFSIQJJSEDNGCJIPXTKBMBTHAXQSFXCDGDXVOAELED");

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
    msg.setTimeStamp(0.18831793687915055);
    msg.setSource(17309U);
    msg.setSourceEntity(146U);
    msg.setDestination(38777U);
    msg.setDestinationEntity(56U);
    msg.timeout = 8679U;
    msg.lat = 0.5996015748814997;
    msg.lon = 0.049867020894628133;
    msg.z = 0.7919058895204619;
    msg.z_units = 246U;
    msg.speed = 0.5440200747323739;
    msg.speed_units = 20U;
    msg.roll = 0.8745361465943531;
    msg.pitch = 0.2463422922414059;
    msg.yaw = 0.9394670873374977;
    msg.custom.assign("NFYXVQUDLKAFAIIWBAGDNGYYIZXSRAQTOXNMERGVMXBDGBQBLITMOKYYZSEGNVCJAUUDDOEBGIPPFOFQAX");

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
    msg.setTimeStamp(0.7975335130815122);
    msg.setSource(7655U);
    msg.setSourceEntity(39U);
    msg.setDestination(14298U);
    msg.setDestinationEntity(58U);
    msg.timeout = 31913U;
    msg.lat = 0.04175637182424918;
    msg.lon = 0.2652109331261233;
    msg.z = 0.4635296650867662;
    msg.z_units = 123U;
    msg.speed = 0.9611916363519086;
    msg.speed_units = 130U;
    msg.roll = 0.9258560046876068;
    msg.pitch = 0.5083404025209662;
    msg.yaw = 0.05079965594415492;
    msg.custom.assign("MTDFESLYTZYFDGGDNTIKEJREBQVMPHXDYQTISMRD");

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
    msg.setTimeStamp(0.9651240764565628);
    msg.setSource(39594U);
    msg.setSourceEntity(32U);
    msg.setDestination(62106U);
    msg.setDestinationEntity(149U);
    msg.timeout = 58669U;
    msg.lat = 0.8018067663452298;
    msg.lon = 0.5189916785127865;
    msg.z = 0.7096248637226551;
    msg.z_units = 152U;
    msg.speed = 0.457815709870835;
    msg.speed_units = 192U;
    msg.duration = 6781U;
    msg.radius = 0.06751492513454238;
    msg.flags = 25U;
    msg.custom.assign("IKWHWKVHHDBWQSSYTOVCDXVBRLTVZELXBYAOZQYRAVSPMHMLNANWMFXXIQDJT");

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
    msg.setTimeStamp(0.6784770221090083);
    msg.setSource(25845U);
    msg.setSourceEntity(27U);
    msg.setDestination(6012U);
    msg.setDestinationEntity(168U);
    msg.timeout = 8605U;
    msg.lat = 0.698355620631612;
    msg.lon = 0.3343860551081369;
    msg.z = 0.08778917765982563;
    msg.z_units = 58U;
    msg.speed = 0.3323033235278635;
    msg.speed_units = 170U;
    msg.duration = 61198U;
    msg.radius = 0.7127000698397826;
    msg.flags = 87U;
    msg.custom.assign("JMUQOQAFODSNZKNBXLBGRKJKRCMVDJPWSBCNHVFWFXHSTSGLLNTXMNUFCYWATHVZYIJYQROBUXOOJZEWWILRQOAYZNTLYHIVHMECZZXPSGMQUDIIYBGCYDALAYQLKLUJCVPZQOVPQSEQKSBODMRICVXMYAZWBUJHEPRWPSSZMSVIEIXTE");

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
    msg.setTimeStamp(0.10192637251405468);
    msg.setSource(43335U);
    msg.setSourceEntity(204U);
    msg.setDestination(42507U);
    msg.setDestinationEntity(73U);
    msg.timeout = 44820U;
    msg.lat = 0.05475067905887465;
    msg.lon = 0.15325816324764419;
    msg.z = 0.3279586557899443;
    msg.z_units = 179U;
    msg.speed = 0.34481138862337135;
    msg.speed_units = 226U;
    msg.duration = 63695U;
    msg.radius = 0.8316844454615363;
    msg.flags = 213U;
    msg.custom.assign("DOCXFXACMJQDNNZAKEUXZWEPJMCTQQYHSPWGLQVPUHMVFHRYJOVBEUHVQVBEHZFMTPOSJWSAJU");

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
    msg.setTimeStamp(0.7050216675715176);
    msg.setSource(1385U);
    msg.setSourceEntity(85U);
    msg.setDestination(2997U);
    msg.setDestinationEntity(31U);
    msg.custom.assign("XTCRCQINCAMBKVPZWKBGKBXDYUUPWYJQOMJEJJVUBHRHUKJHWDTYECQCULFDKJIEEVZPHSTHTKALNDSIGNHAODIVJOJBWFLTLBGWSXOMQXXOBMOQEZNFGMWSUZVPRIQLCMCZXZUJTEUSDPHUAAVLELFGIMYOTFTCFQRAAFZDASXPMTGFNZKMCGVDYJSWRIWNDLSCLDVOAFFPVHZNGRPNW");

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
    msg.setTimeStamp(0.9582661456052773);
    msg.setSource(28732U);
    msg.setSourceEntity(233U);
    msg.setDestination(61919U);
    msg.setDestinationEntity(248U);
    msg.custom.assign("HOGBAKQXYYDBRD");

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
    msg.setTimeStamp(0.36432239601977423);
    msg.setSource(4946U);
    msg.setSourceEntity(87U);
    msg.setDestination(44703U);
    msg.setDestinationEntity(233U);
    msg.custom.assign("XQREUWDDSKLFWOCGRKUUECOLRATQMSZUFQFOJAKCFZLMZTULXILJVHOFZTFXDYMVYMEHNEWADQYEMEBDHZRYDZULTDPNWTXAAIFEVBKBVKWXOGNHQVXSYJSJASPNIPPFNHHWOTJIQBJZJQZWLHVQLXRDWWARVGRCPIZGNBKKNJE");

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
    msg.setTimeStamp(0.9864285402300335);
    msg.setSource(4160U);
    msg.setSourceEntity(85U);
    msg.setDestination(40994U);
    msg.setDestinationEntity(203U);
    msg.timeout = 23826U;
    msg.lat = 0.1958009450489161;
    msg.lon = 0.892480065894763;
    msg.z = 0.49937148639549234;
    msg.z_units = 67U;
    msg.duration = 2009U;
    msg.speed = 0.6269961224559335;
    msg.speed_units = 172U;
    msg.type = 215U;
    msg.radius = 0.9990957996692408;
    msg.length = 0.9458970706446002;
    msg.bearing = 0.842016757062693;
    msg.direction = 173U;
    msg.custom.assign("KGWWJWBYRQXVXFFFCFUXNNKCFXLFBKFDITERTCZJYNCQQUTSGZJAKNWVIRLJYKVDTUTOPVJXBYIAYDAUZHGJMPDTZUZARLUAEESLHVLBPNQFIMBPWNRZHQKRMSXQMWIOURCITWOEQHDRTWY");

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
    msg.setTimeStamp(0.23264816401316257);
    msg.setSource(32315U);
    msg.setSourceEntity(219U);
    msg.setDestination(53812U);
    msg.setDestinationEntity(90U);
    msg.timeout = 760U;
    msg.lat = 0.19572806950070998;
    msg.lon = 0.5828170868127127;
    msg.z = 0.2919719394721335;
    msg.z_units = 203U;
    msg.duration = 23019U;
    msg.speed = 0.6481038880290374;
    msg.speed_units = 2U;
    msg.type = 19U;
    msg.radius = 0.42336989777462253;
    msg.length = 0.8645079045894591;
    msg.bearing = 0.8606617472575246;
    msg.direction = 253U;
    msg.custom.assign("VEGHANJQFDDRGLTACNEPGWMCKVPUILVEYKWDUFAVYMISNSZSCDVPZIDZEKSRINUZLHDOVURWPOTGUXZCOMAPYMNQIVSHKGYUTBBSXKYHAVCBQVRHWUDPCMGRWKLUXFLIXNGEECUEGTIHLQZLJBBKKLATBOIPOYFDEQPSWDSOHHRSJMYCZYJASJCYFFMQPNLB");

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
    msg.setTimeStamp(0.8895390657272128);
    msg.setSource(47172U);
    msg.setSourceEntity(131U);
    msg.setDestination(41996U);
    msg.setDestinationEntity(63U);
    msg.timeout = 21804U;
    msg.lat = 0.5540015987608908;
    msg.lon = 0.39879154384694726;
    msg.z = 0.7748596948266535;
    msg.z_units = 146U;
    msg.duration = 34651U;
    msg.speed = 0.19613404164281778;
    msg.speed_units = 245U;
    msg.type = 227U;
    msg.radius = 0.842545891438261;
    msg.length = 0.1981667285939308;
    msg.bearing = 0.7282479517184082;
    msg.direction = 4U;
    msg.custom.assign("NXZUHZBEPNIDHBPTXFSGRBTMUDAFNQFNGYCZVVLFIWWKVHQMQPLPPGXLWFIVLXIJFONMUCRXAECRQBGAHZGZYOTR");

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
    msg.setTimeStamp(0.5242825679661097);
    msg.setSource(4184U);
    msg.setSourceEntity(217U);
    msg.setDestination(3064U);
    msg.setDestinationEntity(16U);
    msg.duration = 19243U;
    msg.custom.assign("AAISBXTFTYDXZMWNEQITFPUWFRXQXFQXLNLBRHACYBMPGDPPRPQKLFFVHJJHSKYPCAFVEXZGEBBHIKCQQRLALXWLEICCMIEYAUXSHSNDWJJ");

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
    msg.setTimeStamp(0.87273828520671);
    msg.setSource(42621U);
    msg.setSourceEntity(30U);
    msg.setDestination(44339U);
    msg.setDestinationEntity(170U);
    msg.duration = 10728U;
    msg.custom.assign("FASMTYPSWETSVAWXUYOWYDURETVUWZDPJXNFBOUAQJLDDAUCPMCNILACQSWBGUFXTHINWAQDXLYJJKJDRGZRDFEQDBNKOQKIRMIRBLBCXGPKKTKOFBBTHGZVYZTQHAHLZLHHOAHVPMCKXENUAXYJPYFCFLWNAUGW");

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
    msg.setTimeStamp(0.48031142826891626);
    msg.setSource(44685U);
    msg.setSourceEntity(129U);
    msg.setDestination(3709U);
    msg.setDestinationEntity(195U);
    msg.duration = 6679U;
    msg.custom.assign("KQVDRCERPYPAXXBAJRWXFLJYVLEZPKBTVKUENDTBDMRDNNQSTVPYDKNAHPAOBBPOAAFLTCJCWMJGGMBOFPYXRL");

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
    msg.setTimeStamp(0.5787120298928);
    msg.setSource(55094U);
    msg.setSourceEntity(149U);
    msg.setDestination(18078U);
    msg.setDestinationEntity(196U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.01847171197877384;
    msg.control.set(tmp_msg_0);
    msg.duration = 18465U;
    msg.custom.assign("XLKVFOJPORKRJIGKEJOZCCYDWHFZOYLIAWDLBFULUYJMWOVRPCZSBTXSOVXEISTCXEUGUEMWYARBMQF");

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
    msg.setTimeStamp(0.45666942370353325);
    msg.setSource(41397U);
    msg.setSourceEntity(127U);
    msg.setDestination(13948U);
    msg.setDestinationEntity(15U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.06561026847083506;
    tmp_msg_0.z_units = 19U;
    msg.control.set(tmp_msg_0);
    msg.duration = 53923U;
    msg.custom.assign("CJYMSMAGRLEQRVJDHKSRITGPCTPEYALNNNNKMMXDXZQCDDJWKDFHBVPATAVJTJGXSQAZYWWIREMDXASFKGTBQHOBPOTLIRHBVWNIEWFBZONCGPI");

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
    msg.setTimeStamp(0.15880290686009402);
    msg.setSource(4502U);
    msg.setSourceEntity(22U);
    msg.setDestination(5112U);
    msg.setDestinationEntity(145U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.828241625675051;
    msg.control.set(tmp_msg_0);
    msg.duration = 5017U;
    msg.custom.assign("OHDAIJKHKZVEKBWLVFKIKYMAMGYPZLVUJAFYXTLNZKVRBOHYCXTJQXUPDUVSDGSOIBAXCMGMOUNEZVRDOQPLEADJROARBSAISFPDMOQUHOAIYNZUYCDUQWXEHEWYOWBHPPRQQLQLXCHMEQHXKKNJTMQSTCPBBGNTDIUKWEJJEAVRWRTMPTVZTSSFNFGNNFPRUJWGESJZLSNBIGFCFRGCZDMOCTZIMZBWGPWHTFGRLYYISKLUCWBXVXNFQVACXY");

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
    msg.setTimeStamp(0.018853097944244057);
    msg.setSource(37142U);
    msg.setSourceEntity(93U);
    msg.setDestination(4899U);
    msg.setDestinationEntity(73U);
    msg.timeout = 26831U;
    msg.lat = 0.5905564887752166;
    msg.lon = 0.3227344314203645;
    msg.z = 0.019504593154904604;
    msg.z_units = 79U;
    msg.speed = 0.7361365263075413;
    msg.speed_units = 86U;
    msg.bearing = 0.16277012833457727;
    msg.cross_angle = 0.05333139561876166;
    msg.width = 0.3252296632008812;
    msg.length = 0.6516327095911195;
    msg.hstep = 0.19328000447671478;
    msg.coff = 89U;
    msg.alternation = 144U;
    msg.flags = 116U;
    msg.custom.assign("JVMGAFSFLKUSZVREWKULSGYXNFZYMIZRLNPSWCPWFNFFKTLTMHBAAMPNZNJFAROBXWVJORAXVOOPUMIDIIGFNXTHNTSKEYCPQ");

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
    msg.setTimeStamp(0.9039562041180635);
    msg.setSource(16667U);
    msg.setSourceEntity(224U);
    msg.setDestination(665U);
    msg.setDestinationEntity(139U);
    msg.timeout = 54238U;
    msg.lat = 0.13727822732939587;
    msg.lon = 0.8730240834843742;
    msg.z = 0.9002731646198116;
    msg.z_units = 103U;
    msg.speed = 0.1838930492886076;
    msg.speed_units = 27U;
    msg.bearing = 0.5693085013742508;
    msg.cross_angle = 0.0435261476838571;
    msg.width = 0.3888576117125737;
    msg.length = 0.49761490299236466;
    msg.hstep = 0.9891678327843543;
    msg.coff = 146U;
    msg.alternation = 216U;
    msg.flags = 238U;
    msg.custom.assign("GYSAAGHJRTMEEBBMILPVFSVISHDZFOFNZNXOEHODDMGLFAACMHSUGGPWTLUYJKYJYQQSARUFBOWINUQZRCXMZ");

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
    msg.setTimeStamp(0.5825484766666962);
    msg.setSource(41889U);
    msg.setSourceEntity(94U);
    msg.setDestination(1995U);
    msg.setDestinationEntity(106U);
    msg.timeout = 8739U;
    msg.lat = 0.34339519816042996;
    msg.lon = 0.9714942837230277;
    msg.z = 0.9352601986950487;
    msg.z_units = 172U;
    msg.speed = 0.4474477823850871;
    msg.speed_units = 5U;
    msg.bearing = 0.21910360262810136;
    msg.cross_angle = 0.5434787268613349;
    msg.width = 0.7471268103457097;
    msg.length = 0.9679459601260825;
    msg.hstep = 0.27622443517354045;
    msg.coff = 48U;
    msg.alternation = 24U;
    msg.flags = 197U;
    msg.custom.assign("BSFIYKPWZP");

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
    msg.setTimeStamp(0.35776642599342057);
    msg.setSource(9555U);
    msg.setSourceEntity(48U);
    msg.setDestination(9862U);
    msg.setDestinationEntity(115U);
    msg.timeout = 24923U;
    msg.lat = 0.42758877131808515;
    msg.lon = 0.7559996378538659;
    msg.z = 0.8800665020734787;
    msg.z_units = 24U;
    msg.speed = 0.1515762007313417;
    msg.speed_units = 17U;
    msg.custom.assign("PALNKXFYUZEWOQYIZDMSPXBHRKEUBOMPJRCRRSXMBDDWZZDJHAAPQLCFSGZFVJQAUIQLGINETALYCOKLDAOTYGDUOLIAGMYLYWLUNINYHHCOCTSBKVECGTAMXQAFNHIHCRUWZXXGBMNBHOVVATQDWRGLTFGIYUFNSXPWTPMVMZRTEIGBOFUIXINWJOZQPVOSRPYFHKQUCVDJSHNKJEEWXQTSVJHZKBSJYMVPDERTEPFGMERSQLBWJ");

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
    msg.setTimeStamp(0.8213527826580178);
    msg.setSource(14962U);
    msg.setSourceEntity(157U);
    msg.setDestination(29793U);
    msg.setDestinationEntity(6U);
    msg.timeout = 37622U;
    msg.lat = 0.6196712707015589;
    msg.lon = 0.09438661387027492;
    msg.z = 0.8305150571083829;
    msg.z_units = 20U;
    msg.speed = 0.437810433497969;
    msg.speed_units = 109U;
    msg.custom.assign("VHHICFZECJAKCOATZXQDLIBABBYLBVWLSPFJQBURCKRBWHTE");

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
    msg.setTimeStamp(0.9496568962664172);
    msg.setSource(32028U);
    msg.setSourceEntity(215U);
    msg.setDestination(36963U);
    msg.setDestinationEntity(0U);
    msg.timeout = 59217U;
    msg.lat = 0.18432172821303183;
    msg.lon = 0.35021974353711627;
    msg.z = 0.5797586776759204;
    msg.z_units = 195U;
    msg.speed = 0.9040873475734886;
    msg.speed_units = 6U;
    msg.custom.assign("FBMSZDJPSELLXKQSYDBCGVSKJXDVQW");

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
    msg.setTimeStamp(0.7972350504985202);
    msg.setSource(64524U);
    msg.setSourceEntity(48U);
    msg.setDestination(41224U);
    msg.setDestinationEntity(184U);
    msg.x = 0.8202991341281308;
    msg.y = 0.7500905288900742;
    msg.z = 0.915317239417955;

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
    msg.setTimeStamp(0.38984402679290364);
    msg.setSource(51410U);
    msg.setSourceEntity(225U);
    msg.setDestination(51634U);
    msg.setDestinationEntity(34U);
    msg.x = 0.7529674394093706;
    msg.y = 0.8233658297745666;
    msg.z = 0.5052179593563138;

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
    msg.setTimeStamp(0.5930844310879405);
    msg.setSource(44091U);
    msg.setSourceEntity(222U);
    msg.setDestination(24855U);
    msg.setDestinationEntity(33U);
    msg.x = 0.025087039733541205;
    msg.y = 0.7979950493689236;
    msg.z = 0.22549545633584356;

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
    msg.setTimeStamp(0.2805545273882716);
    msg.setSource(53158U);
    msg.setSourceEntity(115U);
    msg.setDestination(45252U);
    msg.setDestinationEntity(230U);
    msg.timeout = 38730U;
    msg.lat = 0.8944550741995962;
    msg.lon = 0.3974136930579123;
    msg.z = 0.21601545790477727;
    msg.z_units = 195U;
    msg.amplitude = 0.09275357408720797;
    msg.pitch = 0.9140209302495236;
    msg.speed = 0.859646360260798;
    msg.speed_units = 223U;
    msg.custom.assign("YDYEQLZUKJTIVTDRUXAIZLDKFNAQRANHXBAQSICJNVAOINGFFPFJDBSGHWBNCVSGWVDWZNPORZJWMSBRMSTMLISPIEYELZKOAUXVZJXYSXLGCXLEHJMNCMPPCRWMZQBCOPMOGOYNTJVEBIGFEZNLAGZUQYWWITPUPRHRKKUOFYRAWIFYKXVREJQIESBTHHVDZUQTFBBGLAXUMFVHWHCCNTXJLSRQCEQDADOJHSTB");

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
    msg.setTimeStamp(0.39333705447784395);
    msg.setSource(1865U);
    msg.setSourceEntity(202U);
    msg.setDestination(30177U);
    msg.setDestinationEntity(5U);
    msg.timeout = 39812U;
    msg.lat = 0.5767956615988227;
    msg.lon = 0.6214050471519769;
    msg.z = 0.09809088875634686;
    msg.z_units = 204U;
    msg.amplitude = 0.3133276943670159;
    msg.pitch = 0.01907549731549829;
    msg.speed = 0.13980105901859874;
    msg.speed_units = 172U;
    msg.custom.assign("CUWEGDKJQJPFOUMKKTNAHWQAOOKPKVVOZTMGNZPBLPPASLNWPFBVUVCXUYXTBYXSUGINVXFGTCNV");

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
    msg.setTimeStamp(0.12082747644164749);
    msg.setSource(19828U);
    msg.setSourceEntity(137U);
    msg.setDestination(30856U);
    msg.setDestinationEntity(198U);
    msg.timeout = 57370U;
    msg.lat = 0.5436283682992956;
    msg.lon = 0.9920171873758669;
    msg.z = 0.4176906936468715;
    msg.z_units = 146U;
    msg.amplitude = 0.03760973992787564;
    msg.pitch = 0.1548628776491745;
    msg.speed = 0.5671107687186037;
    msg.speed_units = 199U;
    msg.custom.assign("FSAHAOGVUYPKYLRDMDFBUKIHKZSCVNVOVYHWZXJGYBHEUIHSZJZSRFPKRHBETNVDQAUPHWQMWDJHJQAPXGXOMCISGAUDYYWNVXTYLBUKV");

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
    msg.setTimeStamp(0.7041724794087967);
    msg.setSource(61077U);
    msg.setSourceEntity(237U);
    msg.setDestination(15440U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.26269240858639187);
    msg.setSource(4323U);
    msg.setSourceEntity(241U);
    msg.setDestination(28397U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.8412597833267985);
    msg.setSource(36951U);
    msg.setSourceEntity(168U);
    msg.setDestination(17022U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.5530516890215363);
    msg.setSource(22371U);
    msg.setSourceEntity(117U);
    msg.setDestination(49885U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.3489348270375833;
    msg.lon = 0.14018505686621618;
    msg.z = 0.19482179872857408;
    msg.z_units = 173U;
    msg.radius = 0.8069866235624715;
    msg.duration = 46373U;
    msg.speed = 0.8076915764826271;
    msg.speed_units = 40U;
    msg.custom.assign("BBSWSECSIJWAEKVQUVHCGDFMZKMXMNVJHVWFWCHBMYUOLWHYOQIG");

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
    msg.setTimeStamp(0.25747497611153336);
    msg.setSource(36402U);
    msg.setSourceEntity(213U);
    msg.setDestination(30888U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.8306126775420485;
    msg.lon = 0.21768307375466656;
    msg.z = 0.47530296225908386;
    msg.z_units = 227U;
    msg.radius = 0.7739905905647952;
    msg.duration = 38507U;
    msg.speed = 0.639043897690383;
    msg.speed_units = 51U;
    msg.custom.assign("RFLGJEJQCTRMWRURUENFZICUQBILFTABQFSAUQABAZXTEFAQMIWIHLUSDGNTBTHSSLJCGTZBGNPYOYYZKREXVWRTOKPQNRXSFRZHTPBOQPZFICWSNCSQHDPRCHKVNVDVDE");

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
    msg.setTimeStamp(0.19591548648988732);
    msg.setSource(60579U);
    msg.setSourceEntity(52U);
    msg.setDestination(1011U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.19487111349538233;
    msg.lon = 0.4984973751997104;
    msg.z = 0.20432171484415385;
    msg.z_units = 160U;
    msg.radius = 0.9396374571048446;
    msg.duration = 4150U;
    msg.speed = 0.4235255653268084;
    msg.speed_units = 112U;
    msg.custom.assign("FJSYXOBPZOLUKNJTBSXQZMIAFFRXRFTYJQNZUWBSKGIHPRMFJTKVOXNWLIEKWCPVLRDMGGKGAEWCYDLOCGROPVWUQDYLACOVBXCHEIAFSATWAFDINBVPBSZRPTPMNBJFZPAGHMABHXLHOFGVRZSYMQQLUKJVESMUATNDMDSOCCIJTJYYINHKFIELECQEWEHHGDRMPDBHIUKDNAWGVTCYQJQBZXVIUUSTOYU");

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
    msg.setTimeStamp(0.6594213569053444);
    msg.setSource(20089U);
    msg.setSourceEntity(138U);
    msg.setDestination(54759U);
    msg.setDestinationEntity(214U);
    msg.timeout = 58214U;
    msg.flags = 33U;
    msg.lat = 0.49388377574943665;
    msg.lon = 0.8057321517208627;
    msg.start_z = 0.22462086733044073;
    msg.start_z_units = 196U;
    msg.end_z = 0.0532098394613314;
    msg.end_z_units = 215U;
    msg.radius = 0.44776892863934015;
    msg.speed = 0.19986777917437482;
    msg.speed_units = 160U;
    msg.custom.assign("UYNGPGVCHRBKIXZKHQHKTIJPDLGU");

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
    msg.setTimeStamp(0.5090616444121561);
    msg.setSource(49357U);
    msg.setSourceEntity(111U);
    msg.setDestination(12005U);
    msg.setDestinationEntity(240U);
    msg.timeout = 30476U;
    msg.flags = 43U;
    msg.lat = 0.00466752097112455;
    msg.lon = 0.5092628390482484;
    msg.start_z = 0.37524819823104827;
    msg.start_z_units = 31U;
    msg.end_z = 0.21084433830979654;
    msg.end_z_units = 54U;
    msg.radius = 0.29708013134229116;
    msg.speed = 0.4220996304542247;
    msg.speed_units = 2U;
    msg.custom.assign("NHDNZEGQMMPYIQQWCXNPUGRPDUYZYVUCCYENASBDOFEOEKOKVVMIVLIOKRAILFHVFNMQTLBTAMHWSQDUZZVFXJJFCRRSCEEBJLWJUDIEXPHMUGNLHTRRAXIASGAOSOAWDYWFHOLYKCCIJRGVVTRZLLJIGEYLNWGZKRJPBWXAEGGNWPOCBJBSUKNUPTHTQDMBTZFASFKTZ");

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
    msg.setTimeStamp(0.11948416990679334);
    msg.setSource(51056U);
    msg.setSourceEntity(132U);
    msg.setDestination(9692U);
    msg.setDestinationEntity(114U);
    msg.timeout = 39636U;
    msg.flags = 229U;
    msg.lat = 0.5464886255349906;
    msg.lon = 0.669171657447158;
    msg.start_z = 0.6962679442637707;
    msg.start_z_units = 159U;
    msg.end_z = 0.19029769043447264;
    msg.end_z_units = 239U;
    msg.radius = 0.8593191300072377;
    msg.speed = 0.8036588393095391;
    msg.speed_units = 108U;
    msg.custom.assign("LJLKLTTUEPMQC");

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
    msg.setTimeStamp(0.32966849378184515);
    msg.setSource(15528U);
    msg.setSourceEntity(203U);
    msg.setDestination(62417U);
    msg.setDestinationEntity(80U);
    msg.timeout = 40749U;
    msg.lat = 0.5320285155728108;
    msg.lon = 0.3694992244037607;
    msg.z = 0.8198923543289048;
    msg.z_units = 231U;
    msg.speed = 0.026893928207493367;
    msg.speed_units = 160U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7388179371855109;
    tmp_msg_0.y = 0.8445567591892881;
    tmp_msg_0.z = 0.13821572264234627;
    tmp_msg_0.t = 0.4436064987409426;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JIAECKPPVREXLWKDFWVXUZPSYQMFJRLZIVHAORTXTDFJLOELLWAWTYCDPQFSONYJHJUQLCYQAVGJHEEWFGHPGXNOXUYHAQUIVVC");

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
    msg.setTimeStamp(0.8160666233454544);
    msg.setSource(28138U);
    msg.setSourceEntity(120U);
    msg.setDestination(16379U);
    msg.setDestinationEntity(99U);
    msg.timeout = 18626U;
    msg.lat = 0.8746138064436084;
    msg.lon = 0.807824461648228;
    msg.z = 0.4500282918207804;
    msg.z_units = 60U;
    msg.speed = 0.4501167191398786;
    msg.speed_units = 135U;
    msg.custom.assign("NRLGJQXYSFYUHPNIPPVDNDYYDYQXPXFJTMDQWMRWKKNBWQBLLAVLUASNCZTTHQOMWJQCAANQHYMNDLOCTKKTBBWJHPIXJFMSPIJRUFRVDED");

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
    msg.setTimeStamp(0.24604599594638488);
    msg.setSource(34214U);
    msg.setSourceEntity(252U);
    msg.setDestination(6744U);
    msg.setDestinationEntity(98U);
    msg.timeout = 8247U;
    msg.lat = 0.40024832989874815;
    msg.lon = 0.7825541795585191;
    msg.z = 0.11286163533118188;
    msg.z_units = 228U;
    msg.speed = 0.13101141466700061;
    msg.speed_units = 184U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.36696811751791647;
    tmp_msg_0.y = 0.3269564832416354;
    tmp_msg_0.z = 0.5996144145600646;
    tmp_msg_0.t = 0.06663247402356498;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NQRDEXWAHQCJORUFMKPFDVDYWOPGBONMPOLJSLNFFBIHCKOYXXECJKSJPKPZGHGTHJTORQNI");

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
    msg.setTimeStamp(0.9607658225429745);
    msg.setSource(7781U);
    msg.setSourceEntity(51U);
    msg.setDestination(30716U);
    msg.setDestinationEntity(126U);
    msg.x = 0.3067169649638931;
    msg.y = 0.8766726847182323;
    msg.z = 0.20448832385853588;
    msg.t = 0.38258908878399966;

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
    msg.setTimeStamp(0.45694395256857934);
    msg.setSource(12818U);
    msg.setSourceEntity(66U);
    msg.setDestination(50710U);
    msg.setDestinationEntity(141U);
    msg.x = 0.24886832857329266;
    msg.y = 0.11911923879958941;
    msg.z = 0.20708282232343933;
    msg.t = 0.2031560550349707;

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
    msg.setTimeStamp(0.28835374436737393);
    msg.setSource(42744U);
    msg.setSourceEntity(112U);
    msg.setDestination(23730U);
    msg.setDestinationEntity(179U);
    msg.x = 0.29808632236028265;
    msg.y = 0.24926302514854126;
    msg.z = 0.3436793984396822;
    msg.t = 0.52211555644983;

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
    msg.setTimeStamp(0.08731520879651844);
    msg.setSource(256U);
    msg.setSourceEntity(246U);
    msg.setDestination(10022U);
    msg.setDestinationEntity(61U);
    msg.timeout = 57015U;
    msg.name.assign("SLNNQMCEMLOUZWMTWIDCFACOZGGIGMXGVRMDYXBINTRWUJTWGZRQGKFDBBYDCPAZYDXDJPHTVSBIHHVVCAZSPGVBYJNLODORAUVZUIHXAVLEPEXNWQMOYDTAMAJIQYAXSCORPBXJKHRMBQFLYAOSZFCFIKHHTOEPSJKDKFKLSQIEJKCHNPHRUXWYYOQWKWKLEFJNKBFLDUZGQEJCFRTQLVVVTERPYURZXSSUAIEHNUILGTCUWNBSX");
    msg.custom.assign("RXZOSQTBNUHMDMIUXAPISAWGWRZLZUFGLQEAAQOHBJFUHJICDTKEHNSCKTVKYQWDCHNCGWYKUZOJVPUWPBNOPZAENERNUEPTRXNSVYIISD");

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
    msg.setTimeStamp(0.10175794054751741);
    msg.setSource(8487U);
    msg.setSourceEntity(71U);
    msg.setDestination(5101U);
    msg.setDestinationEntity(128U);
    msg.timeout = 30261U;
    msg.name.assign("GMSMQCGJBKEFMJCRRRTZQAZBAPGBXTKBGLDCLJPIAJASNXHHMSZSIPWQIGFWOVITNHECJMDDBAYAXLCVSNPVKHOAZYWVSDGZRIXSOPQFNQTDXNHUKQFSGAIMUKKNQWWKWLFWKTHJO");
    msg.custom.assign("CCFPJGGVQMXTSPTAVSXRKJQRZABTSCZUXPVIDNW");

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
    msg.setTimeStamp(0.9157863605729021);
    msg.setSource(47552U);
    msg.setSourceEntity(236U);
    msg.setDestination(42936U);
    msg.setDestinationEntity(37U);
    msg.timeout = 42036U;
    msg.name.assign("KQGCNLSWOYSRBRVQJVPEHYBJFBGNUDIOJUSMVJKPBKHMOCZPADRXQCBKPMXWXTIHDFKXFTFNYCFAVEAOAKEMVSDDFGORVWZRFWHJDGLUYEOLFVQIMOMPYZMYTLJAWDQUBKOTTRCHSUGCYFCMNYAEWOSFLKROMUPYBJEEXBEGUYRLITUNKSXHQLNTIVHZXJSPQTQUPCWHXSTRAMQNDZEWXHIZAZPAZZNGNLI");
    msg.custom.assign("HULKUCMCDIHPDMLELKHBYJKCYYCSHPMEFOCJWJNVSOSRSYAPUFYABQOABRXHDDQFSGZZAIQQCNPQNRJWEXKTIYACWYRHTKHKAN");

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
    msg.setTimeStamp(0.22841199851161198);
    msg.setSource(13293U);
    msg.setSourceEntity(200U);
    msg.setDestination(20750U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.056175286796548596;
    msg.lon = 0.8835660166289384;
    msg.z = 0.7001250191011836;
    msg.z_units = 205U;
    msg.speed = 0.20749228699979516;
    msg.speed_units = 101U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4378483529630359;
    tmp_msg_0.y = 0.9276973462828199;
    tmp_msg_0.z = 0.9746441195765374;
    tmp_msg_0.t = 0.13262387984323976;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7467690908870245;
    msg.custom.assign("TPFIPVYZXCOMNDYYWIIYHAWZONBTGEJQVHSZCHUCPHMXTJLANCNXSNBTJHHUOXDWVQJABTAJACKHUQPXPRRJZSOHESMLPDSUZXKXRSAREKHSUWFIKIMGEKTRUFRQAYWFMNVKREMNPOLRQLYYHG");

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
    msg.setTimeStamp(0.09899950353987597);
    msg.setSource(61918U);
    msg.setSourceEntity(220U);
    msg.setDestination(16189U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.00945769429954535;
    msg.lon = 0.16579717439008246;
    msg.z = 0.0753001402372584;
    msg.z_units = 213U;
    msg.speed = 0.6155813722833359;
    msg.speed_units = 73U;
    msg.start_time = 0.8575926999282951;
    msg.custom.assign("DNXJQQUWPTKBIHMMJTRVFYIGVTIMJOSSJSERGAKAXEETPVIYNPRCWIIFRTGXCSYCVBEWCYKZODRHMNJCXPDJLHGD");

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
    msg.setTimeStamp(0.7049086034301025);
    msg.setSource(41629U);
    msg.setSourceEntity(113U);
    msg.setDestination(42106U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.034368577035856274;
    msg.lon = 0.3770195507910309;
    msg.z = 0.6643450106344997;
    msg.z_units = 147U;
    msg.speed = 0.40627578388124186;
    msg.speed_units = 67U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.38400853028842585;
    tmp_msg_0.y = 0.0933237890324552;
    tmp_msg_0.z = 0.8592010299253253;
    tmp_msg_0.t = 0.0019159746041251813;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.013438998422030224;
    msg.custom.assign("EHDGWFSBNDLIXBFLYJEQYOKPVWTVUDZEKBLXKJUOLMUEIYRUVGJTAXBISVXPORMRNSKOZKOKOQMRDITLBYEVEXHJJCPRPXDZVOOTCICHDWWZMLOIIDRAJUKUYIZTXFNLBEQFAECTLPPNHDACWXGRFWTKMMNSSMTZRZSYGKMUQVHACCIZJWDEDYHUONKCUAEPVTQVJTAMCBSGPSGMZIBJHALQCVAHFQF");

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
    msg.setTimeStamp(0.5579141434890954);
    msg.setSource(47532U);
    msg.setSourceEntity(147U);
    msg.setDestination(38276U);
    msg.setDestinationEntity(62U);
    msg.vid = 59730U;
    msg.off_x = 0.7192397664239278;
    msg.off_y = 0.45804737561810405;
    msg.off_z = 0.13913948629920048;

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
    msg.setTimeStamp(0.08579225456786843);
    msg.setSource(26933U);
    msg.setSourceEntity(140U);
    msg.setDestination(23428U);
    msg.setDestinationEntity(193U);
    msg.vid = 47327U;
    msg.off_x = 0.04887772582163852;
    msg.off_y = 0.6175088652747184;
    msg.off_z = 0.850524776706182;

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
    msg.setTimeStamp(0.37201157020207887);
    msg.setSource(57839U);
    msg.setSourceEntity(27U);
    msg.setDestination(60798U);
    msg.setDestinationEntity(8U);
    msg.vid = 27785U;
    msg.off_x = 0.8262102422969654;
    msg.off_y = 0.4202902344453966;
    msg.off_z = 0.09977862235946999;

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
    msg.setTimeStamp(0.9387995026391938);
    msg.setSource(26413U);
    msg.setSourceEntity(67U);
    msg.setDestination(26893U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.025181742018041353);
    msg.setSource(7283U);
    msg.setSourceEntity(64U);
    msg.setDestination(23704U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.49488128003840426);
    msg.setSource(65068U);
    msg.setSourceEntity(5U);
    msg.setDestination(14001U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.06946804113595773);
    msg.setSource(10451U);
    msg.setSourceEntity(209U);
    msg.setDestination(60402U);
    msg.setDestinationEntity(89U);
    msg.mid = 54216U;

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
    msg.setTimeStamp(0.7991404196761986);
    msg.setSource(58942U);
    msg.setSourceEntity(212U);
    msg.setDestination(56947U);
    msg.setDestinationEntity(8U);
    msg.mid = 57434U;

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
    msg.setTimeStamp(0.6970585280333425);
    msg.setSource(48156U);
    msg.setSourceEntity(78U);
    msg.setDestination(10601U);
    msg.setDestinationEntity(241U);
    msg.mid = 12013U;

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
    msg.setTimeStamp(0.345848420743582);
    msg.setSource(57670U);
    msg.setSourceEntity(151U);
    msg.setDestination(34434U);
    msg.setDestinationEntity(151U);
    msg.state = 160U;
    msg.eta = 11151U;
    msg.info.assign("IYLMZYFZKZQIMAKNRQQHGJUTHXBOMNVURKXCCRMUIYTCWTUXNZAHALRNGPODOJUQSUBPYXAONZGZMZYIRGHDHVHEXFZGVRPJEWOOFTXOXSKXEFVYNTFEKQVWJETCIHAGHJOCSVDGPQSYGYVVKRJBNIHP");

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
    msg.setTimeStamp(0.9674366546665303);
    msg.setSource(32629U);
    msg.setSourceEntity(67U);
    msg.setDestination(12209U);
    msg.setDestinationEntity(215U);
    msg.state = 25U;
    msg.eta = 58785U;
    msg.info.assign("NBOKSTCGWHCHLWFIMTTIGJCFCJCWHSAMSNKLDUSPFHIYLULDQKBPAOXQXZLOVXQDZQYZNRMRFTFVXKTIMUKYAUEDCBOPHKFZWLSRJSDVDGBLTTEKUFNWEYXJJWZMURQAZLNAEBQEGGHMLHXPXBF");

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
    msg.setTimeStamp(0.08819204659359337);
    msg.setSource(2383U);
    msg.setSourceEntity(146U);
    msg.setDestination(56451U);
    msg.setDestinationEntity(160U);
    msg.state = 156U;
    msg.eta = 36554U;
    msg.info.assign("NWLZCZNYJOXTKIMTQRSWQSZRHPUUVTAXM");

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
    msg.setTimeStamp(0.9119164625225221);
    msg.setSource(25846U);
    msg.setSourceEntity(103U);
    msg.setDestination(19137U);
    msg.setDestinationEntity(135U);
    msg.system = 64533U;
    msg.duration = 31401U;
    msg.speed = 0.537277234508505;
    msg.speed_units = 67U;
    msg.x = 0.8703097311530441;
    msg.y = 0.9607515061352814;
    msg.z = 0.16579504386037602;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.9945177427203137);
    msg.setSource(9524U);
    msg.setSourceEntity(169U);
    msg.setDestination(62652U);
    msg.setDestinationEntity(79U);
    msg.system = 31104U;
    msg.duration = 32826U;
    msg.speed = 0.37455722278170844;
    msg.speed_units = 32U;
    msg.x = 0.9749080229439249;
    msg.y = 0.20250663820975578;
    msg.z = 0.11015816675969214;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.4590554310258672);
    msg.setSource(64204U);
    msg.setSourceEntity(63U);
    msg.setDestination(14628U);
    msg.setDestinationEntity(73U);
    msg.system = 44559U;
    msg.duration = 7550U;
    msg.speed = 0.9718494037031112;
    msg.speed_units = 221U;
    msg.x = 0.9495709611977733;
    msg.y = 0.5208264235815803;
    msg.z = 0.7004373779370887;
    msg.z_units = 124U;

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
    msg.setTimeStamp(0.8142993313387141);
    msg.setSource(11141U);
    msg.setSourceEntity(11U);
    msg.setDestination(45772U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.6715356555059712;
    msg.lon = 0.9027746911876813;
    msg.speed = 0.17649031955127048;
    msg.speed_units = 125U;
    msg.duration = 22521U;
    msg.sys_a = 60985U;
    msg.sys_b = 53121U;
    msg.move_threshold = 0.756597686471343;

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
    msg.setTimeStamp(0.7416903409951187);
    msg.setSource(16891U);
    msg.setSourceEntity(58U);
    msg.setDestination(15583U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.5752428075743713;
    msg.lon = 0.7812010822098265;
    msg.speed = 0.32133004330775117;
    msg.speed_units = 218U;
    msg.duration = 4275U;
    msg.sys_a = 29770U;
    msg.sys_b = 17433U;
    msg.move_threshold = 0.9036321544681409;

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
    msg.setTimeStamp(0.6310770226151251);
    msg.setSource(25464U);
    msg.setSourceEntity(41U);
    msg.setDestination(34511U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.023943720108037914;
    msg.lon = 0.10275119161675483;
    msg.speed = 0.3649201946392082;
    msg.speed_units = 149U;
    msg.duration = 58350U;
    msg.sys_a = 32978U;
    msg.sys_b = 28982U;
    msg.move_threshold = 0.42297641596199564;

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
    msg.setTimeStamp(0.2186749158329666);
    msg.setSource(34789U);
    msg.setSourceEntity(158U);
    msg.setDestination(18296U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.27719302087253916;
    msg.lon = 0.7712104501069973;
    msg.z = 0.3760733222248832;
    msg.z_units = 112U;
    msg.speed = 0.1847051923402072;
    msg.speed_units = 248U;
    msg.custom.assign("AUOIDMMLEMAKUIOIDJDTLZRSYNGQHJVGCQQMESMEUNIYAWHUVLKLEFZXIIOFHRYLHVHFXPAVOXFIOGZFUSCTDS");

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
    msg.setTimeStamp(0.18951263433914123);
    msg.setSource(46998U);
    msg.setSourceEntity(17U);
    msg.setDestination(44935U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.005729938814183266;
    msg.lon = 0.23341855315658744;
    msg.z = 0.6897677653778311;
    msg.z_units = 71U;
    msg.speed = 0.1258368100625208;
    msg.speed_units = 72U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5377193667268051;
    tmp_msg_0.lon = 0.6077368139411952;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AVWNOJBKCPYGFZDPUNBYBQSSXLIYDUNWXZOZFIYLERVZFEPHJNJCWQPJRXMFEEHECGCKEUAXKDRKMTZTIFGUPZMTIMMQJZBKFWPVHMVMXRHGCPDFSSBEVNUXCYANSAHLVHRZOJIDQAVNOURYMYDKZZCIUQHCCGLXGALOOWIHPBKIDQBTRMXJTVYWOGSWBRWASFETBXQQLDHCPQVEGWSLPDRWNDEKTQU");

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
    msg.setTimeStamp(0.9527530501979997);
    msg.setSource(9033U);
    msg.setSourceEntity(49U);
    msg.setDestination(1389U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.7505069899663951;
    msg.lon = 0.43412824425459395;
    msg.z = 0.9010243277865746;
    msg.z_units = 239U;
    msg.speed = 0.6499095114903185;
    msg.speed_units = 206U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8900326478568;
    tmp_msg_0.lon = 0.6816064293556742;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DROGUWGTFLVJNQAJFROIAOXBUPIOCORNHMSWEVSBSVMHAKTJDOZTDDOXMFCLUQFQOZJVBQMESJNRRGYLAWSFUVIBYCPWEDLEXGFTZWLKHIHHOCREABQRXNXBBRAXJPGCTLBEQEMEDKTWULSAFTDIKBKAPASNSCVPCAHQPMHYZMN");

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
    msg.setTimeStamp(0.038378976541550536);
    msg.setSource(21194U);
    msg.setSourceEntity(150U);
    msg.setDestination(63421U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.23719448034933188;
    msg.lon = 0.10514577351328713;

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
    msg.setTimeStamp(0.030529351179017117);
    msg.setSource(62717U);
    msg.setSourceEntity(195U);
    msg.setDestination(45910U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.6160706592868377;
    msg.lon = 0.7471787296502741;

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
    msg.setTimeStamp(0.8691503247912514);
    msg.setSource(26047U);
    msg.setSourceEntity(84U);
    msg.setDestination(45508U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.0877471784016487;
    msg.lon = 0.32293919732915144;

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
    msg.setTimeStamp(0.6771103502160024);
    msg.setSource(57439U);
    msg.setSourceEntity(53U);
    msg.setDestination(4958U);
    msg.setDestinationEntity(117U);
    msg.timeout = 26101U;
    msg.lat = 0.8934794776621049;
    msg.lon = 0.8462146654598919;
    msg.z = 0.21568454638986978;
    msg.z_units = 210U;
    msg.pitch = 0.44670866862532865;
    msg.amplitude = 0.25066005619303533;
    msg.duration = 49670U;
    msg.speed = 0.04540237488503562;
    msg.speed_units = 130U;
    msg.radius = 0.23758114607497716;
    msg.direction = 213U;
    msg.custom.assign("RYNUWQLPDXOKIVZHKZKCAXCZFJLIWURXBQFCEMENQIBDHLJPITLRJRMAJLLTTWQANDKPACJVGUJBEJSPC");

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
    msg.setTimeStamp(0.32482262568924536);
    msg.setSource(5616U);
    msg.setSourceEntity(193U);
    msg.setDestination(4489U);
    msg.setDestinationEntity(85U);
    msg.timeout = 39351U;
    msg.lat = 0.2513759324892135;
    msg.lon = 0.8294956557849964;
    msg.z = 0.4907696241547247;
    msg.z_units = 120U;
    msg.pitch = 0.3253669291433059;
    msg.amplitude = 0.17535939972934866;
    msg.duration = 38942U;
    msg.speed = 0.8231170016022011;
    msg.speed_units = 78U;
    msg.radius = 0.6678852761619201;
    msg.direction = 101U;
    msg.custom.assign("OTTVUIDAIEZKRGZEOTDJBJZVCJPJKRQSVOYULCDQILRVCHFEUHXGHZTYDBNRIVMFLHBSTRGWWYPANEQZMWPNTLGSOKQPAPISXKBHGZYKXHNNXOWCMMSQDJBWAGRUUTYWFZGBABIITZDNRVUCPEEBRQCWEABJFKMLJAPPIKJWOIINFXKESMRFOECCUHFVXFGMDKNOUXMXXDJSGYQOQOJSWYPYAAYZLYL");

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
    msg.setTimeStamp(0.9005874237103659);
    msg.setSource(45999U);
    msg.setSourceEntity(118U);
    msg.setDestination(13440U);
    msg.setDestinationEntity(195U);
    msg.timeout = 20087U;
    msg.lat = 0.4764365033745901;
    msg.lon = 0.3849227796822977;
    msg.z = 0.47143660475703053;
    msg.z_units = 20U;
    msg.pitch = 0.7227374746252714;
    msg.amplitude = 0.27699883387576485;
    msg.duration = 63283U;
    msg.speed = 0.22368232247017972;
    msg.speed_units = 220U;
    msg.radius = 0.45617853173500456;
    msg.direction = 221U;
    msg.custom.assign("PCJVNIFFTZFJONZQCTZJISNJZDVRNOWTIQBPHVMUPDWOCBRMQXKEYVZMLRMPYWGDNAZXUGAXTIESAQMHLTBDDGOCVTWGXDIKAUQQKKERPOQRJXUGLRIYKYJCIXPLHULZXWSMHURWAEEFEGPGKJKSFRUQYSOYNYICTUDNCPHBJVHBFRQFAVNLMBOHHBLZWKDWQOHOMXATSPSDYWKFBVDUTNTCIZMJUNCKGOIAALBGESYWGCFXZELHBEVRPVYJSE");

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
    msg.setTimeStamp(0.009702476478226196);
    msg.setSource(65514U);
    msg.setSourceEntity(116U);
    msg.setDestination(37952U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("FKRCXKTQIZGSESOSFDJRGQBEAINOPZDWGYYWCWQSMIMEBLHVLQNHEKFPVEWLDFKCZPMFAWTVDPDNQKJGQHLXRSKYGBRPVNAHTIXRKCPNLBNJOYBBRGZUUKMOUCUNHPGVVMSHLXOGXZRBKMYFDLJXJYMNIEUGAHFLOFSAXQIYSNZIAZWYTTUDAZYJJEQUDSTVOTFBJQTIRCUBMEKPWMMLTRLBJNHWAPAXIVOWVUHCYRVCZAIPWHQCDCDSJFTEOZ");
    msg.reference_frame = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53674U;
    tmp_msg_0.off_x = 0.7582857527087234;
    tmp_msg_0.off_y = 0.20174358309253948;
    tmp_msg_0.off_z = 0.7002737600668251;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JKHWGLNQEKNNBKPCYCERQEOBHMJRCAYNHOGRDZKJBAZIDLVYFUMOCIIPUVPLVNSMOQJGJZHWUBMQVDIBGQ");

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
    msg.setTimeStamp(0.43306655334441635);
    msg.setSource(29809U);
    msg.setSourceEntity(188U);
    msg.setDestination(36410U);
    msg.setDestinationEntity(112U);
    msg.formation_name.assign("RXDNZUXCJKFBLUIJXWCKADCLSLXEOGNHNNYLZRLVACMETYZPLDLMYPNNJEWYIHUUYKQHNBCHRHEPEQKKPVZUYSAAGGOHBTIBVMWAKXOPERPTQFFGASVWXBLMOGFCVROOCKDUILWXYDXGTQUGBUYSZCSZKDNDGWRTERFIVIMTQKSKODJSGPTIUZQJHBJQWCJMPMOZFLGAZIHFNSJRHYIQAUVTRXQRSEBFMXPYE");
    msg.reference_frame = 77U;
    msg.custom.assign("NPXIODZFUCXAVYDUTGDUCVAASTMIAPAWNNGNKODFTWBLSVJOCYZEFDMQSSPGWCDLMJYZMLLXYAYAWQXRNHNPSTORHTYCKQSOLKUXPUKEBWQBZWHZDQCGFCTDGJLEEKIXRRHUEWNXWZAIVYOLJMTHRBMBNFRLJCPYALDJSQQIPGXYHMMCVBZTRPGZXGYWJWMIRJZHBJRUUJLVOOVIFHESVITKUOKFEXEROGKQDHFSPFFMZKKVGBATEVQIEQ");

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
    msg.setTimeStamp(0.07427068606123288);
    msg.setSource(31379U);
    msg.setSourceEntity(11U);
    msg.setDestination(38334U);
    msg.setDestinationEntity(72U);
    msg.formation_name.assign("PRHFBSDPJFCPTCNXBMFOMHEQMTESNOKZWYNHWYNSATUKNILRQUCXVIQUQCXWIQALATKYJVQISZVPFUJYRYLETZDOWPIPCGQRFMTLHVLYVZVUOIGJMWYBYCDCEQSIHMEGMMBAEOXGNBWDGDHGDDIPXAUGRJXWFZOKUYLVBSLNRKOWKIRJV");
    msg.reference_frame = 252U;
    msg.custom.assign("PCUIUVZJETBADONTUSWNAHHMYXCUMISWYDMQJVCBFQARIBNTQIUXUJJWAPENGVKUOWLPVZDBFOGGXZZSEDRTPFICIKHOMOGAPRSGRAFWRQGPOOWHVALRPMSDGOAQGBZCSCPFBDJRVCYLBBWHFEKNCXLPNQKKIOTFRBKJDYYEGTXMXSLZNXIZEDZHCQJHXFQYLUIFBLHJETDPKSEXYAKQTNVWSZENAHMDYHYKNFGKWMMLWTMOUC");

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
    msg.setTimeStamp(0.6619947938938279);
    msg.setSource(140U);
    msg.setSourceEntity(164U);
    msg.setDestination(37789U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("KVLRTXREOCBXCNRKXFQMONPRVSRIJKDIOJHZZWMJGISKEZGEZSXUAKWAULLBVFMKZSWYAIIMWDJOMTBCTYOICUZAVYPICYGKZNCHGKNIFMOZVQTOQEDENHJAXUQDSZTQBHFDCVUWUVSGCPSFGQMBRAMNPOQFHVBGKAAQATEULOWGLTFHBTTULDYEIJBBSYEJXBPRFLYYLQVXPJP");
    msg.formation_name.assign("FMHBQULZFCHNMXZQNRNYUOVXAURCNKCLORQDPLFJAEKFCSFWYTO");
    msg.plan_id.assign("JLMHETLWQFBUQPSZAIAJIXKRJXKEVEUNXCZYPIOMFGXQKUGJLGWXQRDEAGBMFWGVAENRQPOKCRULLXZXCJGVXZFMVHTZTLUMKTABAOQOIFBSVVITARLYWTOCTWSKFEZUGNUVNYCDTAFAHWNFFYJSYRVXHSNSVRBGWKAMDMODRHETPHDSQNUPEPHCWMDNZSNIVDZOLDSCQGBHYLZRKPNPBGUWERJQKXIYEYSOMBDOP");
    msg.description.assign("BLSHSJOGCHWTPJGBNOQQUXLFHBKOGFQEBPINCSBTCIYDRPAKMUURLMMUMEHWBZDLDMOYZFCKRRRLCDTXTJYWVIEXMPXJFSGIPAAVD");
    msg.leader_speed = 0.9202844661939571;
    msg.leader_bank_lim = 0.42710481862441885;
    msg.pos_sim_err_lim = 0.02383263289591242;
    msg.pos_sim_err_wrn = 0.257106142968193;
    msg.pos_sim_err_timeout = 38712U;
    msg.converg_max = 0.15875075571815056;
    msg.converg_timeout = 48372U;
    msg.comms_timeout = 52593U;
    msg.turb_lim = 0.934995793299673;
    msg.custom.assign("XCKKAKUHXODDLFINOCATDTECDDBMFUNUYDXFMEJGVVSUKAICZVPHQIMVWZPHMPTCKHJJOBPNTTUFAGKBOMVXBRRDGIJXSLZUWVTLHLIQFXEJEWSAGQVEMSPYSFCRZXMAKSEKRUBCGQFJVABOWWFQPICOQOS");

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
    msg.setTimeStamp(0.14833028411518545);
    msg.setSource(56776U);
    msg.setSourceEntity(226U);
    msg.setDestination(49936U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("RLSWTBICMWHYLDUHFFJKSXXUGQWFWKUTBWHBELNUAINUPEISAZQSJZEUAGCEVZNOGJYATYTIKHCPTMOKZCEBUEZAQBANUZKMAVXMESIZHQXQTFRYDLTHXDFNYPHSMYPNZMVPEXIAWRCJXOQDINYDCSBPOYULIPOOZMWSVQFWHDCEGQVVT");
    msg.formation_name.assign("QPUSLIQHEMVEJGNHTRDAFVHJXTFOFKDIAVRTCWLADCYJKHFDUCDOBMOYTOEZFYOMCSYKUGIANVFXE");
    msg.plan_id.assign("AKHAQGDEBSXMRNEQWLGEPLJISSMUMOOBFGHCYDVMNEJBTXRDANECHUXTEKFTUMICEWJODOSHRVKBQPKYTCRMGFLQZUCGDPLKJYXPBJPTIILQAVPQXPFVEIQAOFFLUKUNKDLRZFDIVNAWNSBEKTVZHMGGAVZSABHRWYAZTOTFHLHFIDYHWQTNYEGJNLMXKSYRUVYYYUMOSXCZIQVZCUDWUXDZPZLZVQFJWRCCTXJBJBBHIIWSOW");
    msg.description.assign("AVJOXLCXCSLGFAFBZVGYIRFAQGAJQGQIGRLDDZDAHKBXOAKEGBLDNNSITEYQNOWEXUPIAMQJWDIXRORZMBESHUCAFZFNVNOTTJQMDHEOWCQLTJNWGWYUTHPLVBYMUHUBYPHAKNKLUBFZTSSRPCSLEWJSAHVMFZGVDDESTGQOLRXCIILPEKIBFVJZCJWERXFJPVPMNO");
    msg.leader_speed = 0.17717808646509225;
    msg.leader_bank_lim = 0.9273738665113952;
    msg.pos_sim_err_lim = 0.9108522734382974;
    msg.pos_sim_err_wrn = 0.28460988214535965;
    msg.pos_sim_err_timeout = 46317U;
    msg.converg_max = 0.21418635941269415;
    msg.converg_timeout = 31556U;
    msg.comms_timeout = 42017U;
    msg.turb_lim = 0.6507724009782706;
    msg.custom.assign("OSKLGMTSBGWSKDVVUSRVBQMDZZOAVSPENYYJPKRWROAIUQADLJYUAWFXGWNVZXXQVBTVIZVQRIMQQBDLHMXJMKZUCQOJGCKPNKHOVNWVSPTPUMQNAKYKFWBGMLCCWFBNRHPCZUTOFNIYSCXAIDGJEJFRZLGBPLFTOTDDNIXRDNALFOLUZ");

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
    msg.setTimeStamp(0.3065607442244833);
    msg.setSource(60266U);
    msg.setSourceEntity(170U);
    msg.setDestination(433U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("ZWUBXVTVJFMJCDNGYGSDARKESFVOGSKYSHDWQTHZIYPWOTJQOBZFGKHQZOECUPODSKMZERAVAUXOENQLIPGXPESZRSWAJMYDXCQBAEEDJRCHWTXIXRPXYHFJHVDUZBKBPEQMPVIWLHOUTINSOCXAVMLKYCFGTMEHTLKIYBQAAULWRMGJDJHMWITVDUBCFFNVAPIEHBZOGLDY");
    msg.formation_name.assign("FEKEUYQTBCZXXBNHADTPOSJCRBNMUQZLUHIYIOYMORWKSXMXWNESWIZESVNWCVESCBDBLOKGMBGLKFCIADDVNGIKPORDWZXUEVSKAQHOYLLPJKABIGCTERHJJNUQDCE");
    msg.plan_id.assign("BCUIRRMPXBNREZSOWLOYXTNGDMGPBJOKXJWVVLKFKQCQIDJHUYZGDFIVMUWWSXZNGZGNIXGBAEZYBCHECBLUHZMTJMFDMMPUAYSPIXQMQWTDTXVBVQCUEWOMKHNUGIZPROGXQXFVKUFSNQQLW");
    msg.description.assign("HJHEAGFAUCZHQYMDOMRYYLZYEPKDNYOKWPFDTOCYCOXRX");
    msg.leader_speed = 0.44884214045450466;
    msg.leader_bank_lim = 0.33937779764221765;
    msg.pos_sim_err_lim = 0.04956528599898613;
    msg.pos_sim_err_wrn = 0.9203482545686579;
    msg.pos_sim_err_timeout = 6226U;
    msg.converg_max = 0.6782244080941013;
    msg.converg_timeout = 15136U;
    msg.comms_timeout = 25614U;
    msg.turb_lim = 0.256072060308967;
    msg.custom.assign("QTGXHXPPRYIKVIAFEELAZCSHFDMOHZPMLMJFUVQZXCJTIHYSHKSDEGKNQNEONCZPMDWNRLDTRRHQQFOIPYKHXG");

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
    msg.setTimeStamp(0.04286505150491016);
    msg.setSource(16645U);
    msg.setSourceEntity(205U);
    msg.setDestination(58211U);
    msg.setDestinationEntity(133U);
    msg.control_src = 16222U;
    msg.control_ent = 96U;
    msg.timeout = 0.04449001628733318;
    msg.loiter_radius = 0.44654762761562605;
    msg.altitude_interval = 0.8681062164646154;

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
    msg.setTimeStamp(0.8700424976168671);
    msg.setSource(44886U);
    msg.setSourceEntity(126U);
    msg.setDestination(23361U);
    msg.setDestinationEntity(224U);
    msg.control_src = 35551U;
    msg.control_ent = 73U;
    msg.timeout = 0.6773142483200487;
    msg.loiter_radius = 0.8514518426772307;
    msg.altitude_interval = 0.6324163005139569;

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
    msg.setTimeStamp(0.5840745168641687);
    msg.setSource(249U);
    msg.setSourceEntity(102U);
    msg.setDestination(57813U);
    msg.setDestinationEntity(46U);
    msg.control_src = 29301U;
    msg.control_ent = 186U;
    msg.timeout = 0.8303361485921544;
    msg.loiter_radius = 0.24938829420968656;
    msg.altitude_interval = 0.3556300095700311;

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
    msg.setTimeStamp(0.5241301374853103);
    msg.setSource(65475U);
    msg.setSourceEntity(20U);
    msg.setDestination(19574U);
    msg.setDestinationEntity(242U);
    msg.flags = 149U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.18743469263203427;
    tmp_msg_0.speed_units = 250U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8807487714949412;
    tmp_msg_1.z_units = 43U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.43603435416646474;
    msg.lon = 0.7085925916519568;
    msg.radius = 0.294372846078671;

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
    msg.setTimeStamp(0.42756135950166996);
    msg.setSource(60285U);
    msg.setSourceEntity(164U);
    msg.setDestination(7382U);
    msg.setDestinationEntity(166U);
    msg.flags = 63U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.567726682451206;
    tmp_msg_0.speed_units = 87U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6884743549548221;
    tmp_msg_1.z_units = 66U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6352849732020368;
    msg.lon = 0.6125079891288617;
    msg.radius = 0.3906728427011795;

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
    msg.setTimeStamp(0.2991433731007337);
    msg.setSource(31245U);
    msg.setSourceEntity(103U);
    msg.setDestination(15998U);
    msg.setDestinationEntity(138U);
    msg.flags = 152U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.013479093457911095;
    tmp_msg_0.speed_units = 61U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9237621137765034;
    tmp_msg_1.z_units = 184U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.263450762241594;
    msg.lon = 0.9115840694087034;
    msg.radius = 0.1940235852730453;

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
    msg.setTimeStamp(0.6349801340936976);
    msg.setSource(11059U);
    msg.setSourceEntity(37U);
    msg.setDestination(54850U);
    msg.setDestinationEntity(120U);
    msg.control_src = 46926U;
    msg.control_ent = 107U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 40U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4447205857372102;
    tmp_tmp_msg_0_0.speed_units = 58U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.04624822575395304;
    tmp_tmp_msg_0_1.z_units = 36U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.20075805907363886;
    tmp_msg_0.lon = 0.9409358864711179;
    tmp_msg_0.radius = 0.5775154293944611;
    msg.reference.set(tmp_msg_0);
    msg.state = 113U;
    msg.proximity = 129U;

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
    msg.setTimeStamp(0.12242944016386326);
    msg.setSource(44199U);
    msg.setSourceEntity(205U);
    msg.setDestination(16036U);
    msg.setDestinationEntity(230U);
    msg.control_src = 37624U;
    msg.control_ent = 188U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 176U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6421836367216346;
    tmp_tmp_msg_0_0.speed_units = 68U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8829777524559652;
    tmp_tmp_msg_0_1.z_units = 242U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.12357816783902775;
    tmp_msg_0.lon = 0.7121739632845101;
    tmp_msg_0.radius = 0.30367939555574175;
    msg.reference.set(tmp_msg_0);
    msg.state = 250U;
    msg.proximity = 199U;

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
    msg.setTimeStamp(0.5347702313593616);
    msg.setSource(13898U);
    msg.setSourceEntity(114U);
    msg.setDestination(44819U);
    msg.setDestinationEntity(15U);
    msg.control_src = 21155U;
    msg.control_ent = 77U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 193U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8265564239259124;
    tmp_tmp_msg_0_0.speed_units = 200U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6168599727428364;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.43922069730299484;
    tmp_msg_0.lon = 0.005633831432239056;
    tmp_msg_0.radius = 0.9384904823932206;
    msg.reference.set(tmp_msg_0);
    msg.state = 144U;
    msg.proximity = 108U;

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
    msg.setTimeStamp(0.8815622764010818);
    msg.setSource(17699U);
    msg.setSourceEntity(49U);
    msg.setDestination(35360U);
    msg.setDestinationEntity(162U);
    msg.ax_cmd = 0.655466016686261;
    msg.ay_cmd = 0.6841116689150588;
    msg.az_cmd = 0.7049735104311743;
    msg.ax_des = 0.9258661000299512;
    msg.ay_des = 0.6283566506687652;
    msg.az_des = 0.3987482613750819;
    msg.virt_err_x = 0.5288553320834269;
    msg.virt_err_y = 0.3761945414313509;
    msg.virt_err_z = 0.14606404895748937;
    msg.surf_fdbk_x = 0.3905834520802801;
    msg.surf_fdbk_y = 0.675652725278973;
    msg.surf_fdbk_z = 0.4176517703169904;
    msg.surf_unkn_x = 0.25259755184229327;
    msg.surf_unkn_y = 0.7951637416489933;
    msg.surf_unkn_z = 0.30225579135701675;
    msg.ss_x = 0.38363456067236623;
    msg.ss_y = 0.4701503331641863;
    msg.ss_z = 0.10763147519649863;

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
    msg.setTimeStamp(0.8263889713491913);
    msg.setSource(22203U);
    msg.setSourceEntity(52U);
    msg.setDestination(6700U);
    msg.setDestinationEntity(78U);
    msg.ax_cmd = 0.30548662517212377;
    msg.ay_cmd = 0.7676235268905768;
    msg.az_cmd = 0.2789013941205236;
    msg.ax_des = 0.1816032036180677;
    msg.ay_des = 0.2682060324859069;
    msg.az_des = 0.31634801369594945;
    msg.virt_err_x = 0.3881552407800204;
    msg.virt_err_y = 0.0868019124229501;
    msg.virt_err_z = 0.22534272512405396;
    msg.surf_fdbk_x = 0.49465137177996266;
    msg.surf_fdbk_y = 0.8827220925219378;
    msg.surf_fdbk_z = 0.40194869670543865;
    msg.surf_unkn_x = 0.16512251142150114;
    msg.surf_unkn_y = 0.8921590500433435;
    msg.surf_unkn_z = 0.597230524962239;
    msg.ss_x = 0.09209654663753442;
    msg.ss_y = 0.6176544856927699;
    msg.ss_z = 0.9505165688452311;

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
    msg.setTimeStamp(0.9859143424679032);
    msg.setSource(46930U);
    msg.setSourceEntity(92U);
    msg.setDestination(29933U);
    msg.setDestinationEntity(238U);
    msg.ax_cmd = 0.6597009564191028;
    msg.ay_cmd = 0.6672604418312175;
    msg.az_cmd = 0.28250816557183867;
    msg.ax_des = 0.21982071095609368;
    msg.ay_des = 0.38398438207354035;
    msg.az_des = 0.9895735734180903;
    msg.virt_err_x = 0.2610570599177314;
    msg.virt_err_y = 0.883223862715494;
    msg.virt_err_z = 0.10202209202876544;
    msg.surf_fdbk_x = 0.9115762151576634;
    msg.surf_fdbk_y = 0.12168116654496652;
    msg.surf_fdbk_z = 0.7788001713533018;
    msg.surf_unkn_x = 0.8918407063355105;
    msg.surf_unkn_y = 0.11889278107731216;
    msg.surf_unkn_z = 0.8882245051184893;
    msg.ss_x = 0.5177358804812607;
    msg.ss_y = 0.6936865573255282;
    msg.ss_z = 0.5496618586779652;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XALSOOKESC");
    tmp_msg_0.dist = 0.44487302873761214;
    tmp_msg_0.err = 0.429731437559714;
    tmp_msg_0.ctrl_imp = 0.0033960147754551473;
    tmp_msg_0.rel_dir_x = 0.5241279034371219;
    tmp_msg_0.rel_dir_y = 0.8922611940414994;
    tmp_msg_0.rel_dir_z = 0.4166515132887044;
    tmp_msg_0.err_x = 0.6186720538098405;
    tmp_msg_0.err_y = 0.3720843191019919;
    tmp_msg_0.err_z = 0.07321733692258592;
    tmp_msg_0.rf_err_x = 0.5076537880098267;
    tmp_msg_0.rf_err_y = 0.14526045341795824;
    tmp_msg_0.rf_err_z = 0.23533608578867704;
    tmp_msg_0.rf_err_vx = 0.8712650941294393;
    tmp_msg_0.rf_err_vy = 0.6355623924847033;
    tmp_msg_0.rf_err_vz = 0.11060374689815289;
    tmp_msg_0.ss_x = 0.23118903447543138;
    tmp_msg_0.ss_y = 0.9371985294295837;
    tmp_msg_0.ss_z = 0.7734100729180364;
    tmp_msg_0.virt_err_x = 0.5479442786831401;
    tmp_msg_0.virt_err_y = 0.5319712684381143;
    tmp_msg_0.virt_err_z = 0.44325321152107877;
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
    msg.setTimeStamp(0.4692546454099984);
    msg.setSource(40921U);
    msg.setSourceEntity(120U);
    msg.setDestination(30938U);
    msg.setDestinationEntity(218U);
    msg.s_id.assign("KKCVMTLXOALLXLVEROTWEB");
    msg.dist = 0.5916156978961639;
    msg.err = 0.7443680979079854;
    msg.ctrl_imp = 0.9654317583653989;
    msg.rel_dir_x = 0.09992892164248457;
    msg.rel_dir_y = 0.8142217286986544;
    msg.rel_dir_z = 0.2527061732223368;
    msg.err_x = 0.9371010754336887;
    msg.err_y = 0.4754080954362475;
    msg.err_z = 0.643578292948692;
    msg.rf_err_x = 0.7380017467765766;
    msg.rf_err_y = 0.8355221830250361;
    msg.rf_err_z = 0.2776533488105307;
    msg.rf_err_vx = 0.9385617994219901;
    msg.rf_err_vy = 0.6017265292850141;
    msg.rf_err_vz = 0.9114585480379608;
    msg.ss_x = 0.22703784813789762;
    msg.ss_y = 0.9092621111191933;
    msg.ss_z = 0.49497151389998173;
    msg.virt_err_x = 0.9726897339471183;
    msg.virt_err_y = 0.7368924540742251;
    msg.virt_err_z = 0.6476271800747927;

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
    msg.setTimeStamp(0.5243744947950196);
    msg.setSource(55595U);
    msg.setSourceEntity(129U);
    msg.setDestination(1115U);
    msg.setDestinationEntity(35U);
    msg.s_id.assign("NWJZPUOFIEHGQBCKGMNVGT");
    msg.dist = 0.7435291961527463;
    msg.err = 0.450602303506472;
    msg.ctrl_imp = 0.0032057529725852962;
    msg.rel_dir_x = 0.4791740457351302;
    msg.rel_dir_y = 0.9618423196718742;
    msg.rel_dir_z = 0.5603367157947571;
    msg.err_x = 0.9850686479392806;
    msg.err_y = 0.2506907581766219;
    msg.err_z = 0.308787027185938;
    msg.rf_err_x = 0.26319261782183223;
    msg.rf_err_y = 0.5261639876609281;
    msg.rf_err_z = 0.025271967267840978;
    msg.rf_err_vx = 0.35767283542459194;
    msg.rf_err_vy = 0.24601904747418413;
    msg.rf_err_vz = 0.39056703843072904;
    msg.ss_x = 0.38431687686706806;
    msg.ss_y = 0.6223130162270528;
    msg.ss_z = 0.27666548651276757;
    msg.virt_err_x = 0.9995529136943194;
    msg.virt_err_y = 0.7366981163121046;
    msg.virt_err_z = 0.035189634365467626;

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
    msg.setTimeStamp(0.36385813315158044);
    msg.setSource(22885U);
    msg.setSourceEntity(25U);
    msg.setDestination(59282U);
    msg.setDestinationEntity(36U);
    msg.s_id.assign("FXKSAMRILSTSINFVHATYGPA");
    msg.dist = 0.4324060857842139;
    msg.err = 0.12904386852149907;
    msg.ctrl_imp = 0.7466249991932058;
    msg.rel_dir_x = 0.11907435452125092;
    msg.rel_dir_y = 0.2629745041356656;
    msg.rel_dir_z = 0.11182315745370441;
    msg.err_x = 0.18923110652117558;
    msg.err_y = 0.540777737256551;
    msg.err_z = 0.8221980017868977;
    msg.rf_err_x = 0.8854056862953583;
    msg.rf_err_y = 0.7363285950685611;
    msg.rf_err_z = 0.8953772081459713;
    msg.rf_err_vx = 0.2991563405756583;
    msg.rf_err_vy = 0.23084036119602802;
    msg.rf_err_vz = 0.2294150661055172;
    msg.ss_x = 0.7475111717125765;
    msg.ss_y = 0.7393579209024224;
    msg.ss_z = 0.8402648739338657;
    msg.virt_err_x = 0.6442751034948218;
    msg.virt_err_y = 0.4766061217681393;
    msg.virt_err_z = 0.16637904769608625;

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
    msg.setTimeStamp(0.7241536045510624);
    msg.setSource(2929U);
    msg.setSourceEntity(79U);
    msg.setDestination(61601U);
    msg.setDestinationEntity(226U);
    msg.timeout = 60578U;
    msg.rpm = 0.5765528708081153;
    msg.direction = 137U;
    msg.custom.assign("SDANXJHKDKZXMTQQVHBMSFYTMBZPCPSJNMBLLPCGGQLVGJFBNESBSWPPRDWKFYOHODOZPMOTMBYCRVYIUWMXGAOGKUWHZNHIQEXFCVANLTRQWWTPVULAJHDZCNLTFIXFHOQDUSCEMFSGXYAUKZWLKLKRQERRYGTUBUVVJYGFFVXDEKCWUBVCCDRBYIOQIKXBARUAOHJVMEGSNOSLWXEZJPICYDTTIOJKIFAQZRPDJZGXUNTPWEHNRIMQ");

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
    msg.setTimeStamp(0.6082714705937659);
    msg.setSource(30945U);
    msg.setSourceEntity(204U);
    msg.setDestination(50300U);
    msg.setDestinationEntity(122U);
    msg.timeout = 48088U;
    msg.rpm = 0.41483955648178206;
    msg.direction = 194U;
    msg.custom.assign("APSWSNNPQBZFJOQUJPCLTZHXVBZFTYBGZDGWLKETCVNIQUXJUSVYWYGHMASKVVDKTLUVRGZCRWDNOCXLBUGOANIKXYCVACNFLBCAYREIMFQYYBXZKMZNMRQJFPHWEZAQCEPUSAMMDJMDWDHVTQWHTJIUJMFXIEJOKBS");

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
    msg.setTimeStamp(0.6963669887671108);
    msg.setSource(20290U);
    msg.setSourceEntity(32U);
    msg.setDestination(14146U);
    msg.setDestinationEntity(212U);
    msg.timeout = 54300U;
    msg.rpm = 0.9658628281229037;
    msg.direction = 153U;
    msg.custom.assign("JUAJCSBKAFRPJMLMVFWIKHGEBDAKPAMMPQZSELCTPGZOUAZEYHOZWGEUPAELYNZIQVXRYZIBCVFTSKCLZRQWXYXHLUVPLQDENRFFVWONDIYQWKBSZWDJCXANVIGOUPVRNXGIIANSCLORUBYJSAKBIVJTFMHWHWFXODIEPGONTKYSCNQJKBAJMGZPTRKETMLZURRXDMYCQNWBBCHDUXGGVUBFVWDQTXFEH");

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
    msg.setTimeStamp(0.1134975235471336);
    msg.setSource(44355U);
    msg.setSourceEntity(75U);
    msg.setDestination(43069U);
    msg.setDestinationEntity(51U);
    msg.formation_name.assign("BSROBBFNTJZGPZENSCOVDBJXYWQVIHBZMMSNOCWLNPFQBNFKOYJKSIRRJALSUCTMMTKCTYQMCZCQOCNXLJNADIWQDHUSDFHGW");
    msg.type = 31U;
    msg.op = 183U;
    msg.group_name.assign("JMBCRQIGPYRIPITLYZTWEPFLPDPYNFCUYEFKLKGSNXAALQMTVMQXZTZVKQHAHIWOVEXVPESKYAIXJHZJBCIRUQOCZASYDJDCRFLXLMLUMFRDURDBTNYGWGZJHGBLAHVLUNCXFOZMHRMSTKYAOJQBMTFACWKBSHXJPTKSEWHSGGHYBFHDWODPEXQUQJ");
    msg.plan_id.assign("TSQOVRXRHFFGUPIHKWSSGWGVXGQBLBHFGIIRIUUCNRULAXOMVFYDXD");
    msg.description.assign("RJTCVESGBNDAEOICWDFELELPHBKWSYXFTKMSOGVGFMPIOWVMUPJTBVFZQDLWAPTASZSVNUFMTUZJNWJDYDZNMQLYRQDUNKHRKUFZHCUCRQZGOIWVDLRTQAYQLNUOCGQBKLAADVUEYBQVTSWUXIXEOMVOBAYRNTLYWTJPMQYSJAZKEJXWBAPPBHGEGJHPCXGEHLQCSTFNZKOSEFNUHS");
    msg.reference_frame = 91U;
    msg.leader_bank_lim = 0.7566295941665058;
    msg.leader_speed_min = 0.8738258801567553;
    msg.leader_speed_max = 0.46596508344207166;
    msg.leader_alt_min = 0.15454642970940047;
    msg.leader_alt_max = 0.7966562813764937;
    msg.pos_sim_err_lim = 0.18496046741913974;
    msg.pos_sim_err_wrn = 0.941619055305999;
    msg.pos_sim_err_timeout = 54490U;
    msg.converg_max = 0.6781816116501029;
    msg.converg_timeout = 21328U;
    msg.comms_timeout = 63008U;
    msg.turb_lim = 0.47390101245997596;
    msg.custom.assign("WWBLJRADXZMNZZHUKKDQAYAABLEVKTWTDQFGWXWCZLCPGJAWTJVVKZEBPSOCQDXZMTDGGOXTYHKSLRZVWPJMIFIOVAILLRPGROEJJUEPUIOFGXNISKEFTXGNNHCLIZBNUAVRSVWRUEXVCGCVCXMHSPUFLKNCBUDAYAHMNWZGYTGOXQBDZMSNIMKYQTHBYQRFHYLJRJNREFMMPPPOPHLEJQSVC");

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
    msg.setTimeStamp(0.8610644715603554);
    msg.setSource(63706U);
    msg.setSourceEntity(201U);
    msg.setDestination(53508U);
    msg.setDestinationEntity(224U);
    msg.formation_name.assign("EMTGVIURCLDGPJLFGHDDRGPSNHFICWDJTJMDLLEAAEARUAYPIFCMFOVDUBGFOJMHEXUZQOVGKDSSEYEASMQB");
    msg.type = 50U;
    msg.op = 158U;
    msg.group_name.assign("OEYLTGYZPHJUGWIAAUCLSFPBBBNWJNZKJWHCMJJND");
    msg.plan_id.assign("CHSPABUGUHXXZMGFFWOJMMKVRZBOZDENGXGYREQSDSYEIAXYVIHQAUCHAZWDYYAOKJMUTNYTHITFTVKUDIEBQGNJCSIBKLCSPCDEERDAEOYMQSOPKSBLIQNPWJULQNLUQRVKLVGJXNSRPSRJBQJKVRPOKZYQTCKDFYFNANZXCFJDDFOXBLHPGKBHZUTETALMW");
    msg.description.assign("TFGRPQZFDPZACTCBSUUYLRUXQJROKWBKYHTHQKUCONHNKVYCGLKZIXTJKPYLEEXIUSVLSXAZQCVFEJDHNGBEIYJSRINTVZOPBQOSBMJZYGSNPODYEWHJUEFDWCJDDWLEPATWBUANZVIXIPULMHGDKRDUTTEDIAOVWHVPBAGORELRXBPBCOKDWSRYSGXQRFHTMCBOXNLYJFSMGLCLAZNEVVGIVNQMQMFZOKTKHHFMSAFWZFNPQUXIC");
    msg.reference_frame = 204U;
    msg.leader_bank_lim = 0.49163151063358357;
    msg.leader_speed_min = 0.48978613109266056;
    msg.leader_speed_max = 0.5245242350832129;
    msg.leader_alt_min = 0.8588714412497801;
    msg.leader_alt_max = 0.6656529517609848;
    msg.pos_sim_err_lim = 0.8385758008573779;
    msg.pos_sim_err_wrn = 0.3862920616213755;
    msg.pos_sim_err_timeout = 47721U;
    msg.converg_max = 0.8517359141057207;
    msg.converg_timeout = 63472U;
    msg.comms_timeout = 24593U;
    msg.turb_lim = 0.04526280293714102;
    msg.custom.assign("FSRSHQLDXVHHLFQIPNJKSKGJMJLBNLYVJCSSYXREHTGPYWOMFJJRUDO");

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
    msg.setTimeStamp(0.25599213623864414);
    msg.setSource(32236U);
    msg.setSourceEntity(10U);
    msg.setDestination(23656U);
    msg.setDestinationEntity(9U);
    msg.formation_name.assign("DYQUJSFKGOISZJOUYICLAYHAVMTNGRRLGOWEPWPBJDKMVAUHPBRBUMXTHNOOJSFERQIUDBGNVJBQQYWAQUGQVXSGCGLEZYKQPXEHTJUNFPPHKWYOIDALWXMNTMGXFIAYSMOQYYERJXJZCCTWPIYZJBEZTFCMTLSXODXKHFISGRNPDUZQECZVOUFXLJBAKLEOCNTMVANHIDGUHSQNLNXSSCL");
    msg.type = 131U;
    msg.op = 118U;
    msg.group_name.assign("WTLTUDHCEQCEZVVKHPXMCIPFZGTJWKRSXGUMYPBMYXROXWAZZJFURJHYIXGJBCEUKEXTJIVHNCQGWZDKYARQGBNDGALBLGQPVMOTQYZLSEYBRNSYLUOQKWZUIWKKLTRWZNAYWBYOCSHFQQWVNJFQIHNSYHHMNJTTGFICMFUARTFEDBIREZAVFGI");
    msg.plan_id.assign("LAHNRGFNWOKERWHMTWTOGCTUYMIDNQGQFITQFPYUKLLTBUVIQUDNSCVCUDSIBDSEEVLFULJABOEVYBLLYGONBNJXXLRZRFWKFFIDCCXPYVOEUPSMHWKPAFXRTRABEUJGZJSIJIJQCWPSJMZZHQODIUXKYAMDMRHCEWYCQZTSPHQYHQPBRGXJGVYXTNJNOPAEOBVSGZVTNKBXCREPSAMAOIRMEHTZWVKDQDZSKAXM");
    msg.description.assign("EWYKGADKROCZZCVIDGQGPOACHHIRWHSRUVTASWXYNUZADGHZZXZEEOMQCBPRUJADKYHQQCXXMLMSXYUZYNVYVJSIAMEBKWWTVDGJWEBGSHVKMLMAJHTNJMOOCSPPFFDBDRCPCSALRIIGHKOJPOWENXJVVKLFDKHLRFQFBUAJIUVLJLICPIEUYUSGOJZZTYZTLXPONRQNTSQMVQDDXFBNE");
    msg.reference_frame = 66U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25528U;
    tmp_msg_0.off_x = 0.2312238565099769;
    tmp_msg_0.off_y = 0.6167913315229911;
    tmp_msg_0.off_z = 0.5256111782068553;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4264184945964187;
    msg.leader_speed_min = 0.4550429260295329;
    msg.leader_speed_max = 0.04641020652182415;
    msg.leader_alt_min = 0.17849110923419764;
    msg.leader_alt_max = 0.7155342328164932;
    msg.pos_sim_err_lim = 0.8348146808201008;
    msg.pos_sim_err_wrn = 0.04628796441670857;
    msg.pos_sim_err_timeout = 6945U;
    msg.converg_max = 0.6201755051883934;
    msg.converg_timeout = 38318U;
    msg.comms_timeout = 33152U;
    msg.turb_lim = 0.9284947388055279;
    msg.custom.assign("MLJPUNPCOJCFSBBVGXFEUB");

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
    msg.setTimeStamp(0.3651281457547174);
    msg.setSource(14936U);
    msg.setSourceEntity(84U);
    msg.setDestination(22112U);
    msg.setDestinationEntity(14U);
    msg.timeout = 61943U;
    msg.lat = 0.8204356451825051;
    msg.lon = 0.7876044744649259;
    msg.z = 0.668158780714892;
    msg.z_units = 19U;
    msg.speed = 0.40112961652455026;
    msg.speed_units = 157U;
    msg.custom.assign("AYONJVWSBIRUQTCFAJCIUXFHWWBGACHIEGMOEAQYHBDCSXKKUMEJNFELSTDRKLTNDQLLEVGNVRQPUVCHGZZDXVBDDSJLZGLZWUVUTZSZJKFIYHTUMTJYEMQHNDVSISWXGNOYFOAIWGWETPAEPBIDGFYSBYQJQGMCOLPXICPPBVZPMMCHXYSEARRPMICOMGBDYRFYFPOTTXRNNVEQHKJHWLZKOBIJ");

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
    msg.setTimeStamp(0.17171544860654797);
    msg.setSource(19543U);
    msg.setSourceEntity(254U);
    msg.setDestination(51672U);
    msg.setDestinationEntity(111U);
    msg.timeout = 27453U;
    msg.lat = 0.1590410709181902;
    msg.lon = 0.8577558142589726;
    msg.z = 0.5022757237861647;
    msg.z_units = 235U;
    msg.speed = 0.5580712485740561;
    msg.speed_units = 119U;
    msg.custom.assign("WZGNIEWFRTQWERYHYYNFQFLHVEODNIURBUHIOVDBVWCRDMQYEJPXTGTQXUJNGDYKIPTDNVOKTQHXADPVXSAOAJ");

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
    msg.setTimeStamp(0.0870559353743312);
    msg.setSource(35462U);
    msg.setSourceEntity(136U);
    msg.setDestination(60300U);
    msg.setDestinationEntity(84U);
    msg.timeout = 45318U;
    msg.lat = 0.136370514707858;
    msg.lon = 0.7446368346552955;
    msg.z = 0.7873755734947606;
    msg.z_units = 109U;
    msg.speed = 0.5022829862005314;
    msg.speed_units = 103U;
    msg.custom.assign("MKIJWCEORVODTKSWKUOHBYIDHBTGMKXSXDPIZNKYEVLCEQNIMZJVLZEDFFFWOPOSXCDCYENQSQMOACXTPJULIUCYSFOKROPAQSIGJGZFLCBTWZGRJPQSEBQFRENDODYRULHYQORHAZLAHKGLAPZVNJIUPFVDHSTAWRNTPZHEVFTCAKYBUDRD");

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
    msg.setTimeStamp(0.224148967179451);
    msg.setSource(51200U);
    msg.setSourceEntity(248U);
    msg.setDestination(44829U);
    msg.setDestinationEntity(199U);
    msg.timeout = 21758U;
    msg.lat = 0.7162648744082261;
    msg.lon = 0.49173767980601835;
    msg.z = 0.2587414190883267;
    msg.z_units = 234U;
    msg.speed = 0.2824234506053318;
    msg.speed_units = 23U;
    msg.custom.assign("VWMNIMCBYTQFZXGYZTCNHEWQYMPQDLMJYWUYZQMTGNBVGYORESMZUGWARIVIEORKODFRFDJTJHLDXZNAJANVHODCGXOCLVIKPX");

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
    msg.setTimeStamp(0.8047143764366422);
    msg.setSource(29877U);
    msg.setSourceEntity(94U);
    msg.setDestination(17813U);
    msg.setDestinationEntity(194U);
    msg.timeout = 56542U;
    msg.lat = 0.5669546069956652;
    msg.lon = 0.4195318426996245;
    msg.z = 0.20808472758258012;
    msg.z_units = 153U;
    msg.speed = 0.5173405537527348;
    msg.speed_units = 128U;
    msg.custom.assign("EZDXADIEOAZXGZNHNMJKLISFLYHEMFMEBMNAX");

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
    msg.setTimeStamp(0.889049992052501);
    msg.setSource(63672U);
    msg.setSourceEntity(1U);
    msg.setDestination(2983U);
    msg.setDestinationEntity(128U);
    msg.timeout = 31632U;
    msg.lat = 0.7179951151420744;
    msg.lon = 0.5359556785511354;
    msg.z = 0.13193937306130954;
    msg.z_units = 93U;
    msg.speed = 0.5856877294167059;
    msg.speed_units = 11U;
    msg.custom.assign("KMIQXFTGYGYLLNTRPOZLQXHPOSWBTBOBFMBNCWZGKWFIJDAQBKOCKPZACVROVSPLYCYHFXGOUKBMKVCRXFVWLYEDUHKXFDKKSZBSMCOUDXTJIIUPHBVVFOXNMEFGCNHZXJNRDEOJHGERRYUXJXQLHISVQZIUQYDUJRQAEHNZIAVZVWMTSEPAMDLDCDYSYJMAPELFEMNRJGGUHYMAGARWQKCPUZPWHAWDWLQNCJGTRVALSTJSNEBF");

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
    msg.setTimeStamp(0.5216123117504659);
    msg.setSource(25899U);
    msg.setSourceEntity(246U);
    msg.setDestination(13675U);
    msg.setDestinationEntity(38U);
    msg.arrival_time = 0.9814728281507953;
    msg.lat = 0.07799960920996507;
    msg.lon = 0.0033717189160680228;
    msg.z = 0.8088089978966744;
    msg.z_units = 57U;
    msg.travel_z = 0.33867080555126305;
    msg.travel_z_units = 67U;
    msg.delayed = 170U;

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
    msg.setTimeStamp(0.8325024425898538);
    msg.setSource(7843U);
    msg.setSourceEntity(11U);
    msg.setDestination(46809U);
    msg.setDestinationEntity(207U);
    msg.arrival_time = 0.16129673121565846;
    msg.lat = 0.49750450054167306;
    msg.lon = 0.5055567616953556;
    msg.z = 0.003890861118496791;
    msg.z_units = 227U;
    msg.travel_z = 0.10182933786495696;
    msg.travel_z_units = 222U;
    msg.delayed = 158U;

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
    msg.setTimeStamp(0.39654246906865276);
    msg.setSource(34681U);
    msg.setSourceEntity(62U);
    msg.setDestination(59721U);
    msg.setDestinationEntity(95U);
    msg.arrival_time = 0.30791259266592286;
    msg.lat = 0.291865610725874;
    msg.lon = 0.50668755567381;
    msg.z = 0.23122722710725419;
    msg.z_units = 35U;
    msg.travel_z = 0.41727559206218745;
    msg.travel_z_units = 248U;
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
    msg.setTimeStamp(0.5910638822734815);
    msg.setSource(38446U);
    msg.setSourceEntity(12U);
    msg.setDestination(65516U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.9731008871094087;
    msg.lon = 0.7059044309188647;
    msg.z = 0.8922102545392158;
    msg.z_units = 1U;
    msg.speed = 0.9069352834837582;
    msg.speed_units = 28U;
    msg.bearing = 0.674525611565348;
    msg.cross_angle = 0.5386427908167322;
    msg.width = 0.5152534345725046;
    msg.length = 0.5772983274662123;
    msg.coff = 24U;
    msg.angaperture = 0.3580426504037555;
    msg.range = 62206U;
    msg.overlap = 248U;
    msg.flags = 198U;
    msg.custom.assign("LGCCOSLJCIBMBFRQKKSIHVULBFUVBUQOMGWPRWDZEZWQZJQTMNOYDAPNGJTATMEKVKCFENKIGTUEHROGRQVGPDRAJZYXOTXEFOWLWYGAOMVDRHDDJQWXDVPCROPEKNHLAMNZYSDCTHUWILPHMFHBYFCXIGXAKTJAIPTUIQVFVXACZESWNASYVPSENCBFBIK");

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
    msg.setTimeStamp(0.4761670821120324);
    msg.setSource(49390U);
    msg.setSourceEntity(237U);
    msg.setDestination(14894U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.16179433580940783;
    msg.lon = 0.5022288816426871;
    msg.z = 0.13320330618727827;
    msg.z_units = 37U;
    msg.speed = 0.4014524314122543;
    msg.speed_units = 161U;
    msg.bearing = 0.8240287878362927;
    msg.cross_angle = 0.6788941408956434;
    msg.width = 0.9849362375423485;
    msg.length = 0.5323156104609202;
    msg.coff = 25U;
    msg.angaperture = 0.07452347580899155;
    msg.range = 10233U;
    msg.overlap = 247U;
    msg.flags = 213U;
    msg.custom.assign("MQVWHENENMAIQGSUHBOWGXCXIUDKYKPTSPWDJWTOHYWVCVBHBOLRSLXSIBXQIQZRDWDUJQYKIZ");

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
    msg.setTimeStamp(0.208489277968541);
    msg.setSource(40594U);
    msg.setSourceEntity(0U);
    msg.setDestination(31133U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.7301555358311903;
    msg.lon = 0.3597093205192333;
    msg.z = 0.901037469851364;
    msg.z_units = 9U;
    msg.speed = 0.8053986503088799;
    msg.speed_units = 30U;
    msg.bearing = 0.6728826834370248;
    msg.cross_angle = 0.7736842290319079;
    msg.width = 0.7195613531226881;
    msg.length = 0.07502680238206305;
    msg.coff = 152U;
    msg.angaperture = 0.14351774199151546;
    msg.range = 58028U;
    msg.overlap = 169U;
    msg.flags = 119U;
    msg.custom.assign("UYDHXSKAHMPZADQRKILRAMSOUCXRAJUCMTVIMLSCBZFJZLXKBMODHIUJKEEMXQVLPAO");

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
    msg.setTimeStamp(0.7471976323308203);
    msg.setSource(63139U);
    msg.setSourceEntity(133U);
    msg.setDestination(61572U);
    msg.setDestinationEntity(140U);
    msg.timeout = 16677U;
    msg.lat = 0.8893478332516034;
    msg.lon = 0.8752897134796973;
    msg.z = 0.9631175282885195;
    msg.z_units = 224U;
    msg.speed = 0.4116224246148089;
    msg.speed_units = 180U;
    msg.syringe0 = 162U;
    msg.syringe1 = 133U;
    msg.syringe2 = 24U;
    msg.custom.assign("KZCIEGFQSRDZUNQEDNNNHNZIGOLVHBPSWIMGLJIGAMODPNKBVUKPJPERHYPHZOKZVDCQSEZSRAAXOKIGEUOOVYTWCHBPKVBUHAAPJUYBBABBJ");

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
    msg.setTimeStamp(0.48713472675643454);
    msg.setSource(32767U);
    msg.setSourceEntity(93U);
    msg.setDestination(11795U);
    msg.setDestinationEntity(183U);
    msg.timeout = 32706U;
    msg.lat = 0.45866946802680075;
    msg.lon = 0.40836213605408167;
    msg.z = 0.7695843695184603;
    msg.z_units = 201U;
    msg.speed = 0.45190351470296064;
    msg.speed_units = 37U;
    msg.syringe0 = 198U;
    msg.syringe1 = 203U;
    msg.syringe2 = 164U;
    msg.custom.assign("DHBKGLLDSAGIXCAHIGFSQTHMOSEDJDCZKRBKWNZJWXOEBYFPUWZLWUUPOTKUPAXSPSPZMXFKJBRLUIWZFVFZOXIYENTRFSPDSCDIYTSYDNVOHXANTQPJHCJDCJHAOP");

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
    msg.setTimeStamp(0.1629829924003009);
    msg.setSource(43028U);
    msg.setSourceEntity(144U);
    msg.setDestination(60838U);
    msg.setDestinationEntity(48U);
    msg.timeout = 44872U;
    msg.lat = 0.09258431612619245;
    msg.lon = 0.5994736836131895;
    msg.z = 0.52379946618618;
    msg.z_units = 187U;
    msg.speed = 0.843622938251895;
    msg.speed_units = 203U;
    msg.syringe0 = 167U;
    msg.syringe1 = 161U;
    msg.syringe2 = 196U;
    msg.custom.assign("LHPYKRSWVMUEYWNTJUPOQMMRVKXOWFBSIFHDKFEKYVCLWOPBUWYMRD");

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
    msg.setTimeStamp(0.46760939058913986);
    msg.setSource(4464U);
    msg.setSourceEntity(119U);
    msg.setDestination(33368U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.5143238129915457);
    msg.setSource(24053U);
    msg.setSourceEntity(31U);
    msg.setDestination(2631U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.40742015892921857);
    msg.setSource(65339U);
    msg.setSourceEntity(102U);
    msg.setDestination(58271U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.33838064320472583);
    msg.setSource(14033U);
    msg.setSourceEntity(233U);
    msg.setDestination(57998U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.6566001827967599;
    msg.lon = 0.42464340683527446;
    msg.z = 0.337700921498039;
    msg.z_units = 116U;
    msg.speed = 0.17584744838528465;
    msg.speed_units = 123U;
    msg.takeoff_pitch = 0.4565749201028413;
    msg.custom.assign("NBEEWRAPFXPHDWGLHULJDLRRXRVGBVJSQAFBSXMPCZSAPIQGTSFOTFTOMFPRIQSYYYCIDQZXQWUJZDVIMXBKZHLUGHBQYFEHZJOTTKXYOPBONKTOAVSNMUADYMNKLKAXJZRGQCEMHMGI");

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
    msg.setTimeStamp(0.6461400380990167);
    msg.setSource(61026U);
    msg.setSourceEntity(101U);
    msg.setDestination(32764U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.4593449371497994;
    msg.lon = 0.49083620449610965;
    msg.z = 0.7905363445068525;
    msg.z_units = 4U;
    msg.speed = 0.4933705239332056;
    msg.speed_units = 167U;
    msg.takeoff_pitch = 0.6953954396248045;
    msg.custom.assign("VNEMSLGSZHSWXSPMJPYGZKGEWCMKRCLBQOHXJQJDHZGVNCAFENJRYQNWHAZNGZULRHAOXHXBSPTIRKCPTWMXDAFYBOKITUWQNTQUGJMRFRNXYWCNUUCAKGLISUHOVCNOLDEDSOYFWBYLKAVBMEEULNMKSJYBIJDQDIPUGRGPMRWPEQIHFTQKXDZFXJCWTADIAREXJBVVCTQFBDOATCKPQPLIHZVZOJBEISOVDWPOZLZKUFVETHYFYGI");

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
    msg.setTimeStamp(0.5681982975291153);
    msg.setSource(62785U);
    msg.setSourceEntity(70U);
    msg.setDestination(32795U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.5582996440667249;
    msg.lon = 0.6709000132866767;
    msg.z = 0.40036258792572454;
    msg.z_units = 62U;
    msg.speed = 0.7102080226165639;
    msg.speed_units = 162U;
    msg.takeoff_pitch = 0.671039825450064;
    msg.custom.assign("WWZSRPYZDYYSQTBHOYEXPTTTOCYYTKFDCGAKJAENZDZJBKCCMRUAWLXAMERAH");

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
    msg.setTimeStamp(0.34021647205862604);
    msg.setSource(64582U);
    msg.setSourceEntity(141U);
    msg.setDestination(64522U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.6003498465790624;
    msg.lon = 0.739033483862295;
    msg.z = 0.9321031979603195;
    msg.z_units = 8U;
    msg.speed = 0.06913496980786693;
    msg.speed_units = 254U;
    msg.abort_z = 0.1370067723889905;
    msg.bearing = 0.8945530716873508;
    msg.glide_slope = 105U;
    msg.glide_slope_alt = 0.40047192578540625;
    msg.custom.assign("PQZJCGNZFTKLOTAOYCLROFDVFBKMFBRQGVPAJJNHAHHVYXATYOAIBEENLYTZNVWXNRXPYZFIWEYNGSMGDUAZOCP");

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
    msg.setTimeStamp(0.37029188178954586);
    msg.setSource(5309U);
    msg.setSourceEntity(210U);
    msg.setDestination(14961U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.009457128719216668;
    msg.lon = 0.1273401436460092;
    msg.z = 0.3663806865920469;
    msg.z_units = 245U;
    msg.speed = 0.11019276042635873;
    msg.speed_units = 184U;
    msg.abort_z = 0.8996013737334517;
    msg.bearing = 0.9101356340155125;
    msg.glide_slope = 57U;
    msg.glide_slope_alt = 0.05719435545877105;
    msg.custom.assign("IRUZGFIYLIPOXNKZDPDBXNCTOTASHJFDWCZXHSQYINCOHOCSYXJ");

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
    msg.setTimeStamp(0.42601676278180667);
    msg.setSource(1779U);
    msg.setSourceEntity(222U);
    msg.setDestination(59801U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.346890017259447;
    msg.lon = 0.3755186810807515;
    msg.z = 0.26514526779090575;
    msg.z_units = 154U;
    msg.speed = 0.2989414329291188;
    msg.speed_units = 209U;
    msg.abort_z = 0.022329855412696942;
    msg.bearing = 0.39320704578876986;
    msg.glide_slope = 201U;
    msg.glide_slope_alt = 0.88848842912636;
    msg.custom.assign("ZXHYKWPAIKKNREYJORMRPTJFKMZGROSOXU");

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
    msg.setTimeStamp(0.8934462742540967);
    msg.setSource(18409U);
    msg.setSourceEntity(152U);
    msg.setDestination(46624U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.3703567213601058;
    msg.lon = 0.800609384428083;
    msg.speed = 0.9046654359143799;
    msg.speed_units = 8U;
    msg.limits = 103U;
    msg.max_depth = 0.3576938145759776;
    msg.min_alt = 0.4050593181875558;
    msg.time_limit = 0.4617067082268911;
    msg.controller.assign("WPHFBWHGCRZNSKHALAPWPUERHWYUGCJVMGDJENUNOSYJZCPRIIONMKKFESGRDLUQLPZNSVXDEBQSFTTAMRZYACSVVOOASBDJWUEJSNPYPDVLPXJIBDLYXYPRQQPXVXFKJQHXFBGEUFTSACOHDBQLANFUMMWLDOKLYKNUHN");
    msg.custom.assign("MNROOQWTXLJKBHWRLCFGINJDAOFGURITVMQUKFLBBKVGCHWMJZMOMCVNKFDIXBCWDUEEGJJETHTDOCALXIRAVBUHXZSUZAEYWPDLNOCSSOCDBVPNMZRQDAYUNLQJUMVPHSPWHDAIVYCIQYAKZHRVFWCHTEBNZJKXAVSTXPRRFIJRPKTLPZDGXFJPSLBRIUNEWYUXOYSOQLMEZXMEASNYQFVGMJLUZPTATCQBYSQIKTIQHYKO");

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
    msg.setTimeStamp(0.3610014530348721);
    msg.setSource(9142U);
    msg.setSourceEntity(171U);
    msg.setDestination(31064U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.4337362016207458;
    msg.lon = 0.754920477714162;
    msg.speed = 0.0641644871349143;
    msg.speed_units = 100U;
    msg.limits = 179U;
    msg.max_depth = 0.7699941719558733;
    msg.min_alt = 0.6410837495387108;
    msg.time_limit = 0.48901193550020206;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3728058061348327;
    tmp_msg_0.lon = 0.2213886772231468;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("QEXDQIJLFERHIADGSOLHNJEUKFIUDNKKMWSGTOFXOXPONNOSMFEIUNCXVBYQLAPAWZRBZKYVGDEGNRQYSMJUCADLPYPQFCZISQCCPBDIWURSFBWQVLMHHYIRFGWULIJIXLRABZHCMCXH");
    msg.custom.assign("LSNWMRETUTSYETWVCCGMWHOYUBQOBUBQP");

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
    msg.setTimeStamp(0.6532739268306621);
    msg.setSource(54990U);
    msg.setSourceEntity(32U);
    msg.setDestination(2082U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.8075096303296514;
    msg.lon = 0.16270741799117838;
    msg.speed = 0.0013004800858238408;
    msg.speed_units = 235U;
    msg.limits = 159U;
    msg.max_depth = 0.20573117902625382;
    msg.min_alt = 0.9945905796150517;
    msg.time_limit = 0.16306155378535925;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5999578422396634;
    tmp_msg_0.lon = 0.3723179276889429;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("XQVNKUMRGGQGMXDGUTRJFURWAZPKNCODRBLNXLWSRLCPSDFEBXVDEWYQSDATBAFYHBJQFJWQLCNZXLEOQUAFEEJSBVKEDAOJWPVKZMJFEIKNYWIZCOQOLEUXHUPXNRJGAXCHZARHDIUGMNZYVLKFRTVOIZTQUYNIDEBSXSJNWBLHSMUCGTFYLKQOTHFAIIZMLG");
    msg.custom.assign("OSQNDTTXLMJQJFNCUAGLUCDNVWLPECBPYZVFRARNHBTADCYAWOFNIBIVWUKRXDZQEOGPJOLPDYNEXOZVMLVXKVBADLWHZCBCSBXPWA");

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
    msg.setTimeStamp(0.6614427895996465);
    msg.setSource(44700U);
    msg.setSourceEntity(86U);
    msg.setDestination(17226U);
    msg.setDestinationEntity(128U);
    msg.target.assign("HNKQKFLGYIODEIHQ");
    msg.max_speed = 0.1638844099735446;
    msg.speed_units = 30U;
    msg.lat = 0.27035414382344203;
    msg.lon = 0.2635198817961356;
    msg.z = 0.33475954377145134;
    msg.z_units = 231U;
    msg.custom.assign("QPTVTLWPJHRIZOMPJCVXFWWGWWRHKUGSTVLZSYREYOQWQBXARINSDELEHIQCLENHRVBVBAQUCBKFRWFCITKTMFUXKRPGSWRFIPAYEYFSUDTARBXCNPGNBZUFXSKOUDUJSAMDEKVIGDNTNCCGUDNWMIMTYEAYY");

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
    msg.setTimeStamp(0.7631106712858828);
    msg.setSource(27885U);
    msg.setSourceEntity(247U);
    msg.setDestination(53164U);
    msg.setDestinationEntity(157U);
    msg.target.assign("KZGCYUTHUMHADXUXECMVJYCWMLEVJQDABJZALZWSYNAGCCEQRVFGDDFGMPUYSEOMJQCFJSQESDTEMXLHLJOQPOLLKDSNBTWJHFPVIPWUVGGIFRNKBERYGDUF");
    msg.max_speed = 0.5214415503146588;
    msg.speed_units = 87U;
    msg.lat = 0.5486401957426824;
    msg.lon = 0.6447914427277744;
    msg.z = 0.2629414746678991;
    msg.z_units = 73U;
    msg.custom.assign("EKCJXPWMUBROWPRETJWOZZXMJJURWOFICLRYDEUIHOMHVCXMIKNVFAQKJGDRRKAJF");

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
    msg.setTimeStamp(0.4639449040613417);
    msg.setSource(38521U);
    msg.setSourceEntity(12U);
    msg.setDestination(60260U);
    msg.setDestinationEntity(53U);
    msg.target.assign("QIDKFXERHKGZADOGTMDVYBPLTXYNPSGAJTFHXBIQRBMXBNEJPGVLMVWRQAMHDWFBOWABLPVMVWWQLLHUCZIMDPITDLLAVCEKEVZWKSRGYPYGNBSSGFHKJTZJSJFRZIOKDFWPNUNLCAALNCAAMMGQOYEPTDUREJLGFNQVTEEQPBXBKKFUIYXTNMWXVRQHXKHBTJYUH");
    msg.max_speed = 0.6399180095034328;
    msg.speed_units = 167U;
    msg.lat = 0.7767436545199338;
    msg.lon = 0.2723922700905793;
    msg.z = 0.6623820282869447;
    msg.z_units = 192U;
    msg.custom.assign("MALSFKQVTTNILEZDHIEAGMNUCOMDLQJQXRDKHGUVXBPSYPJV");

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
    msg.setTimeStamp(0.07050614766871699);
    msg.setSource(14893U);
    msg.setSourceEntity(139U);
    msg.setDestination(26065U);
    msg.setDestinationEntity(50U);
    msg.timeout = 36556U;
    msg.lat = 0.5646372539062707;
    msg.lon = 0.6321010398611899;
    msg.speed = 0.1371110194369749;
    msg.speed_units = 10U;
    msg.custom.assign("GCKBTVANXAIVATHJWOQHRPTKNXSEWSDRLHZNUVPDFZZYDUSZGLNPZGCZFKYCSKEMCDPRUMOGAFBXNSYSAIWRDMHJQZMDCBCHZYDSTFLPKWLIVIJFUXDVWIKYQABLEMIKHWYLWJEPYVTQRDUVRKHOMQFXTJKEMFIJHYAFBWZZJJNGBUXWROPUFAGQACHQTGE");

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
    msg.setTimeStamp(0.8097491089729439);
    msg.setSource(60688U);
    msg.setSourceEntity(249U);
    msg.setDestination(65520U);
    msg.setDestinationEntity(212U);
    msg.timeout = 42788U;
    msg.lat = 0.2665733740654692;
    msg.lon = 0.1808488298334604;
    msg.speed = 0.7180074784077765;
    msg.speed_units = 119U;
    msg.custom.assign("CMTHVKWIDXPKBZBALNJQLSXWUCHGKEWHLCIHTGMMVOLDPXJJQZUDPIOJZCTESUBFOQTAYWYZ");

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
    msg.setTimeStamp(0.015451541791451695);
    msg.setSource(62384U);
    msg.setSourceEntity(216U);
    msg.setDestination(50803U);
    msg.setDestinationEntity(195U);
    msg.timeout = 9460U;
    msg.lat = 0.38605825282710293;
    msg.lon = 0.3824078460090088;
    msg.speed = 0.44512002352025937;
    msg.speed_units = 67U;
    msg.custom.assign("NEXQXLQFWCFOGXGOIP");

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
    msg.setTimeStamp(0.02232740391018151);
    msg.setSource(21089U);
    msg.setSourceEntity(235U);
    msg.setDestination(56508U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.6312040140733226;
    msg.lon = 0.5343656023698692;
    msg.z = 0.037578748579482624;
    msg.z_units = 142U;
    msg.radius = 0.07199141522802888;
    msg.duration = 19598U;
    msg.speed = 0.8468568219466263;
    msg.speed_units = 47U;
    msg.popup_period = 61084U;
    msg.popup_duration = 30845U;
    msg.flags = 132U;
    msg.custom.assign("YWHUPMFUMNTIRXRPBPJYWVZQWLBCAPXUX");

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
    msg.setTimeStamp(0.124141566439404);
    msg.setSource(40221U);
    msg.setSourceEntity(214U);
    msg.setDestination(38106U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.5840837834797373;
    msg.lon = 0.031803222764331784;
    msg.z = 0.06196803628632708;
    msg.z_units = 135U;
    msg.radius = 0.7312241121328198;
    msg.duration = 61679U;
    msg.speed = 0.8328408999910665;
    msg.speed_units = 193U;
    msg.popup_period = 41165U;
    msg.popup_duration = 36122U;
    msg.flags = 172U;
    msg.custom.assign("NVSQQUXIRCJZASHHENYRRBZSPEYIGTHPPCXKMBNMGRGREDKLNJAITJJFIUWYMDGCQUUVYEJTFODICYMMYKOKASXLCWYNHXFISWNCZ");

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
    msg.setTimeStamp(0.2993693791166848);
    msg.setSource(13275U);
    msg.setSourceEntity(109U);
    msg.setDestination(47618U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.6900034687421149;
    msg.lon = 0.15673424606117226;
    msg.z = 0.6559845456619534;
    msg.z_units = 213U;
    msg.radius = 0.4383947307929661;
    msg.duration = 57524U;
    msg.speed = 0.6858519970785851;
    msg.speed_units = 215U;
    msg.popup_period = 55630U;
    msg.popup_duration = 2630U;
    msg.flags = 46U;
    msg.custom.assign("ZDEWSZFVZKTALRJXTLPOELZJAIQAJCFQOPDAJSKWUPSTBHQPNTYOGJDZNDCBUDINXEVLIJZHKMIOIDCSVIGFIXYQUXEKHXGBCKGEPTNWGMLHQUSVYYGVICEOBJYAXMONKOADUXDKSYLKEWRQGMZXVLRTWVURNECVABAQHKWMJJBCWANXEWHRYNOMBELZNSBFMHJPPXCDRNVWLFUUHRYKYHCLAUGOWSTIBQMPFVYQUFGBPZRFITRHFT");

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
    msg.setTimeStamp(0.7344311837304801);
    msg.setSource(28850U);
    msg.setSourceEntity(184U);
    msg.setDestination(5355U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.8535516221617401);
    msg.setSource(2009U);
    msg.setSourceEntity(203U);
    msg.setDestination(29607U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.7003033412925268);
    msg.setSource(40802U);
    msg.setSourceEntity(9U);
    msg.setDestination(29574U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.31388705620016966);
    msg.setSource(54488U);
    msg.setSourceEntity(197U);
    msg.setDestination(17738U);
    msg.setDestinationEntity(17U);
    msg.timeout = 13260U;
    msg.lat = 0.0053018290384270195;
    msg.lon = 0.26977654828294373;
    msg.z = 0.5652073396840297;
    msg.z_units = 176U;
    msg.speed = 0.9769146094362584;
    msg.speed_units = 82U;
    msg.bearing = 0.5836472683588927;
    msg.width = 0.39865807323836433;
    msg.direction = 47U;
    msg.custom.assign("BDNXUQFJARVXPEKJVSVJLFQZNEVRWJTONHDAFZTMEULGODXCEHHCLYVSGNNMBZXINDOAWUGJWKLLGKGAZUCJJVOSRPSRLISWBJFKYQPHIVRCGSPTMIUZYWEMLMIXBHKVYOKXWUNFCYISBXXDVZTUUIMGCETYWMTQAINBLQ");

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
    msg.setTimeStamp(0.44038133539163127);
    msg.setSource(48725U);
    msg.setSourceEntity(38U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(214U);
    msg.timeout = 22761U;
    msg.lat = 0.47154542295632607;
    msg.lon = 0.9032574128323755;
    msg.z = 0.7667407481177436;
    msg.z_units = 14U;
    msg.speed = 0.9652054553103814;
    msg.speed_units = 184U;
    msg.bearing = 0.6803671843247381;
    msg.width = 0.7626036530598821;
    msg.direction = 56U;
    msg.custom.assign("LLYBAKRHEOEBPFGVLEQMJRDUUABQVPTPIFGDWYJDCGILZUXMCNFFIHCVLZPOEUZIVDYVXCRSOORXATENBKMZPBZQIONXSYSCAEWUGSMXNOSAAJNXNZHEDKC");

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
    msg.setTimeStamp(0.19133737656872396);
    msg.setSource(7848U);
    msg.setSourceEntity(92U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(112U);
    msg.timeout = 40943U;
    msg.lat = 0.23279911268225462;
    msg.lon = 0.3156903358768368;
    msg.z = 0.8606458497421279;
    msg.z_units = 128U;
    msg.speed = 0.6036923213645052;
    msg.speed_units = 20U;
    msg.bearing = 0.48782581593186247;
    msg.width = 0.6851983190437478;
    msg.direction = 124U;
    msg.custom.assign("XQZBIEDRFSXKDBJTOVVJVPZFEFEKXJCMTGTSTBBQPLVONJOHBBZALRRALZINHZUMKWLYUWZCTYCYHNEGGSKLQXFJRWJQPRPMKGSUQLLDFJXDEOHWCLCJINAIDGFZVRLVMSYYBWOYPMNKVRTFQARXNFVL");

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
    msg.setTimeStamp(0.04913769074933649);
    msg.setSource(32523U);
    msg.setSourceEntity(134U);
    msg.setDestination(15523U);
    msg.setDestinationEntity(252U);
    msg.op_mode = 117U;
    msg.error_count = 72U;
    msg.error_ents.assign("RZCXVTMXRIDGKGPSYBTHVCFMOENWIHEKLPTWCF");
    msg.maneuver_type = 38623U;
    msg.maneuver_stime = 0.28319582241845787;
    msg.maneuver_eta = 27543U;
    msg.control_loops = 3381445143U;
    msg.flags = 35U;
    msg.last_error.assign("PVDKFLSNNHDZWYZLJZFEKKSCVYJUAJUOVJXRWBERUTQKLAPCSEELVIRZWXQWIWTDWGQEOOMOKFOF");
    msg.last_error_time = 0.7466742688568225;

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
    msg.setTimeStamp(0.8139061927274388);
    msg.setSource(14956U);
    msg.setSourceEntity(39U);
    msg.setDestination(53998U);
    msg.setDestinationEntity(175U);
    msg.op_mode = 211U;
    msg.error_count = 198U;
    msg.error_ents.assign("CREPIJMLEIFTCDZZNISPYWCVTBG");
    msg.maneuver_type = 7574U;
    msg.maneuver_stime = 0.5452917509994233;
    msg.maneuver_eta = 48483U;
    msg.control_loops = 3465386614U;
    msg.flags = 111U;
    msg.last_error.assign("QXUINFWHPKDUUBEHEBXNGCDCTEGAKUBZUPFWOBOKAAEAHRCJYQPRGKNDGXLRVSPQWG");
    msg.last_error_time = 0.9323990273256667;

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
    msg.setTimeStamp(0.5546363867101586);
    msg.setSource(64287U);
    msg.setSourceEntity(91U);
    msg.setDestination(10366U);
    msg.setDestinationEntity(186U);
    msg.op_mode = 181U;
    msg.error_count = 10U;
    msg.error_ents.assign("XHUWFOEPHLRAPEVVOKYRYPRGUQZQJHQAGBYMFDZAKYGITSHYZUTFAMILMBUUCWWXQNYZBSGTRJSRQZQVGWYNKDCPLAGRSPPUSNUZAGBFVNABFNXFOHWIFBPTDXFPZOEOLS");
    msg.maneuver_type = 60158U;
    msg.maneuver_stime = 0.7194894292629275;
    msg.maneuver_eta = 812U;
    msg.control_loops = 1282026732U;
    msg.flags = 182U;
    msg.last_error.assign("HURSOBANAJFCRYPIMOHLASTKGGVHDDMXFNSSLJTLUNECQHGJPZGNXCWWCCIHFKLEVCWEMFFSLOKTTPPYQMVTKKPIXNTSXSDJXKVZQBYBTLAGEDOMIELZYXIFKAHRYJKPRMOBZZYQQWRGUCDAFQO");
    msg.last_error_time = 0.3622789662905246;

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
    msg.setTimeStamp(0.5074553498799731);
    msg.setSource(29449U);
    msg.setSourceEntity(44U);
    msg.setDestination(45798U);
    msg.setDestinationEntity(151U);
    msg.type = 63U;
    msg.request_id = 35548U;
    msg.command = 18U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("FDHKBWCNJBMVKFSETHKVQBQUXAQUZCAJZZDOZXEPDFKBPIOALWTPQALPHGQXZABFKFNTYLSMLSGYMUIWARWYHFIXTAIQNEKYBZVREDSDHGSEBFDAOXDJMLKJFSNLLUYUJMRVEIEVHCUMMNLSVJGIXNADXCTCNRZWIHYQPCRQSRYGXMWNTXTHUOZDBDMOZWWCYAURBMOPVPFEPWNSKRWESNYIKEGOUVLFYTBOZORITPLGHKUIQV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62667U;
    msg.info.assign("JBZACWPVXEFGIXXRHEUNLXZEZCUVPWONMJDGAVHPLTSPDLWNOCVHYEWARBVMPOAYBENKMEYUFYEAIFFOQAYBACXIMSKVQJGLSHULDGJROQFIOHYSTFMYHDGMFOEFCKNBUBITIDGYJQIEXGCKAPTDLABHCHJYBVEXTUSDXIFTTVCWPYSWGKNKCZOKWTUMRI");

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
    msg.setTimeStamp(0.45054605629794464);
    msg.setSource(35603U);
    msg.setSourceEntity(27U);
    msg.setDestination(17117U);
    msg.setDestinationEntity(155U);
    msg.type = 115U;
    msg.request_id = 14793U;
    msg.command = 173U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 54251U;
    tmp_msg_0.lat = 0.16687882627560469;
    tmp_msg_0.lon = 0.11124305636003473;
    tmp_msg_0.z = 0.7485567630773103;
    tmp_msg_0.z_units = 63U;
    tmp_msg_0.speed = 0.9894998904995408;
    tmp_msg_0.speed_units = 156U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8865627513141926;
    tmp_tmp_msg_0_0.y = 0.4913328505689629;
    tmp_tmp_msg_0_0.z = 0.33464345094339665;
    tmp_tmp_msg_0_0.t = 0.7972204772794315;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("RVDIQKYFALAGIIJGGHWTBUDUEQWCHHSFTHXCUOONOLZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24450U;
    msg.info.assign("WLEKQTVCRACYDTUBOBAFMNUXILYYSDRWJTISGCXCEXUOAMBPJSQNESFAFPGZWSGZLHOHVLXRSPZHJVOLJDKPGTYHTAYLYWNZPKPNJSGNQRZJBHQAZTOHKDABCKGGRWMKMZIVUUMBQNMLJQIDJFOHSTFZGQLMLWUCHWIKNJHMEAIOEINWVFSPOKZCVLTXFIRYCDXZST");

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
    msg.setTimeStamp(0.9282014405083912);
    msg.setSource(3788U);
    msg.setSourceEntity(96U);
    msg.setDestination(35587U);
    msg.setDestinationEntity(36U);
    msg.type = 238U;
    msg.request_id = 56438U;
    msg.command = 55U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.16878329427626937;
    tmp_msg_0.lon = 0.6395561304252014;
    tmp_msg_0.z = 0.5258665518551421;
    tmp_msg_0.z_units = 49U;
    tmp_msg_0.speed = 0.6559900851622835;
    tmp_msg_0.speed_units = 122U;
    tmp_msg_0.abort_z = 0.23994401207666194;
    tmp_msg_0.bearing = 0.3923418561258095;
    tmp_msg_0.glide_slope = 196U;
    tmp_msg_0.glide_slope_alt = 0.1568656280533789;
    tmp_msg_0.custom.assign("LQAISBUPLRUOWPHNAOVLFDEUIYVPQHFQFCSWBLURVHWQSXRTTVHIMJJRGCXUOGCTAPPCGOTEWTDJYLWHAYYTNYIBOOJRLPNTZDGLBKWDXBAMIFOERDSIKKLYTNCGXSDUWMWMASRQJOPWXOJTBXEBKZRGIRJQZEMHGMXUNYFEAMPBGIFDOKAWYUQMVMKMIKI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 34904U;
    msg.info.assign("MVGHPSCCVCIZZEFMSGPTNGVNCVKZFHXSJEFTWTKXAGOSTXLRPLPFBTERCLWLHPLUIQDQXTLZWELARYMROLOTGYAVBWDEZREDEPBMBEQDSPNTUENHZHDVVQUYYOSBDJBWVIQUZQQOYAESOMASNDURKOHISAANRNBKTKHCYGYVBULFIJJFJGIKKKBMJPMFVMNJZQOCILFYIMWFNQJZW");

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
    msg.setTimeStamp(0.24962250927370422);
    msg.setSource(39723U);
    msg.setSourceEntity(175U);
    msg.setDestination(5387U);
    msg.setDestinationEntity(230U);
    msg.command = 250U;
    msg.entities.assign("VBBSXVWETWZXKKWPOKAFQMOZLMTQCVKLOLIZQIRONFAIXICCHRAPEPLDOXTTUCXWPLYKBULIFGMENFDODYFQBXMUKTZZMATDZJHQTGVKKTIBSWEHYRSQOAEGQUGDUYVYJEKRXCSRQJMZRMHQGYGINDVHZPXUVYYMPO");

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
    msg.setTimeStamp(0.04472554208697321);
    msg.setSource(27523U);
    msg.setSourceEntity(84U);
    msg.setDestination(29444U);
    msg.setDestinationEntity(239U);
    msg.command = 87U;
    msg.entities.assign("HRJKZGYKVDWPDYCBJUDFXLBOJUEZQBMRHYNNLMXSLFHLHOYIDYXOIZPTAZWSNFFLCJLHVQZKSXFPBOTSVUVPRADKRWAGNVCPGGMKLJSWOIREOEKCKTEBNXREGWAEXMQIUMSUPVAHHFEYATVCBRJMJUTKDDKHCSPXXTBOYCPEAWZNILSMZIQOREYARNORQGWAUVDYFTSFJVPIMJQQIQBBQQHPGZSXMLFBTUZWFGTLZCKTWMVGJ");

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
    msg.setTimeStamp(0.0638980550018694);
    msg.setSource(58741U);
    msg.setSourceEntity(88U);
    msg.setDestination(60765U);
    msg.setDestinationEntity(155U);
    msg.command = 245U;
    msg.entities.assign("DIZCOQQGIEGSCYELIDUASBVSXBZJLFVQFUFIKIKDYJQNCHKVXXGAKSURPADGMNFEXBAZWEDSLVQQYNKWHERTEYPKQGOQAJPFJOQLKWEHKONMATHHRBFZLSZUQEVZZJOOSJINHXYFCHMYPVPUPNDCICXUGWZROMTERRNSVFTDTDTJCBIJBWNUETNBYVHUTCNXGTXSBVFAUMXTLHKWYRAOLWAZWICDLJYRPWBMCPLZOSMRLXVY");

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
    msg.setTimeStamp(0.6201545740914497);
    msg.setSource(47699U);
    msg.setSourceEntity(55U);
    msg.setDestination(33414U);
    msg.setDestinationEntity(165U);
    msg.mcount = 4U;
    msg.mnames.assign("OKUJHZVHLYGEATJPCSDKTWASPFJXYRNQEACMLAIICNKNJQRNHWGNGWGDHNOXIPCQFEBUCSAOFGGYFRRZTYCXVZVQZDAMXCJMJFRCDGFLJVKUVRBIBAVEOIIGSWOWJEPSTIQBRTUHBPWUOXLTZNWPAJERNBDFMDVANQMXKUOEKQHLDSPZLLO");
    msg.ecount = 28U;
    msg.enames.assign("VBKREWXGDDVTPUEYGYKGWNBIDCYRIKNY");
    msg.ccount = 134U;
    msg.cnames.assign("GTORXHQDFUDUCJHMNAHSLLLMFMXWGBQXVBUTEOYTDWCZJHYKNIJKZJDLCHBIAGUPBWRVZUWWROUJXCBFMGRAPKSDILLFYRJQFESIQGNQQMWOSPSEPXJXYZNBKRKBKWGEJFBVMCYEXIRGLRIJYMTZCZK");
    msg.last_error.assign("MKJGSTAGEGKWQNQKPXAOKRHAZBTEFVALXKXCVDOOJGIOCMZTLCWAURAASRVYGQIHIBOPWHDMRXSDSHNPQOYYFIRNOYUBTYIIJLWPXSMIFMKWCPUQDJBELNAALXSDFCRVYZQGAJVPFEQXXBRQLENSHRTELFIEJRMSWWYJZUXMJJWZHQUOMOOBUBZTVJBZTDCSIUTFLPGELNUPUKN");
    msg.last_error_time = 0.38853401160592105;

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
    msg.setTimeStamp(0.2038707197547981);
    msg.setSource(40278U);
    msg.setSourceEntity(134U);
    msg.setDestination(53785U);
    msg.setDestinationEntity(219U);
    msg.mcount = 198U;
    msg.mnames.assign("KJEXJCBHCLLASGSFOEXHXWYFKH");
    msg.ecount = 147U;
    msg.enames.assign("PLQGQSTYLLHHPIYGCIB");
    msg.ccount = 140U;
    msg.cnames.assign("QUPTEAIMCGSHPVJIXUVBTUAELWBZMGEVWEEPOEKKOYLRFGUAVKNZORJYCDFZHWGLZWQGGQMXNDQDYMBPXREIFJFDUZDZYLIYRZJNNXSCNMPFSIHACKUZAGPXYABADIGBHHJOMNQLLKBFCTIBQSSIEVQSWLBFRRPDJYGEQSCCOFWTDKRXANZODYPPWUTCPLGFBUMJSWVYYQXHQXNVORIVCJHSEXMHTSTAKAXWTKNOVKOMHU");
    msg.last_error.assign("JCFNJOQDSOWETGCXEZTXHFYIRIDNQWWJDNAVFEJHQSWRYPIMEBOXZECGOQVXPNPMWETMRLLDRSCYQXKKJYQWKORJTFLBIRMJVQPTFVWRGQOHMHIKQYYHFSDKXSACLWMKUANBKAUPZPNIEALXOBSSNMRSOTFRUYNZVTDKBBZHUFICJVXCWFHXAZESJOYKTYPPVALIVGGNUTBPBANIGDGC");
    msg.last_error_time = 0.2739437646349886;

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
    msg.setTimeStamp(0.6095111402798526);
    msg.setSource(31312U);
    msg.setSourceEntity(211U);
    msg.setDestination(35510U);
    msg.setDestinationEntity(143U);
    msg.mcount = 127U;
    msg.mnames.assign("EHVPMIDKZVPCYTTIBUNWVHOBVJMJMNUTWKDORJRLLDMSPGYJFKWTYPBMLURZPWKQYAYFHYQJSJLWVZTSSYUQXLGMXBFWWGXBDOCVBKFHLPKUXUZUQVMHHEATWETGNKKENAQCIFYIFNNPJAAPSQROYNBEQDQRITRZOAJESJFDZFXIEUXTOMLVWOIGRHUZUGSKAONLKBEHLZMLDCGRMNOWPIREX");
    msg.ecount = 181U;
    msg.enames.assign("RNUTYKLQFHZFNLBBHQSJBCDCWPGOJLIYKESJXVCTKWDAOPJATKTUEEIIMCAMLYCDODEWNZMBFUXVVBKUARLRPKDFSIAQRHTXKYPIUHQSYNWXPLVWZVUYVIWHZMZWJUSRLOMURSMBJTAXEYQWXNXDUJAIGX");
    msg.ccount = 36U;
    msg.cnames.assign("MXIRUZLHJISPJIABTYWNONWSWJWEDBABNITUSBEWLKMAADFVYUPGMFTKCHGIMRUBOBNQMCQHERDUKSDJSUDOAGKEHYKHLXRBMVPJTQMXYKZTOOJDQCGPXCRNKEPZIEWCXTHAGATFPFMVGUPYQNBBUVXVVPQHLEFZXCOLOMHDUKGYUI");
    msg.last_error.assign("MJCFYXPZMCMVZDSXSDRGPEFHXTDAXJBYKJTTYJYOKZRKMYIULHPMBOSPNTFKEBTZSUVWISZXKOYCCYCRERIUDWVVYGUKZHXFQDNEVSRRTEGJGUHPTVAAGZHAJRDROBAASPILABWQHUOLOMRBWHNEXMGHTEIXXQDOOFZYECNKQWLGUNGVJBWCLHVDMFAQEPAQINSUWWCVENINQMJUBLOLBLBKPWKSCFYXATZHTCSFJGIFKGQDUM");
    msg.last_error_time = 0.25587922300837895;

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
    msg.setTimeStamp(0.2539432602964157);
    msg.setSource(40068U);
    msg.setSourceEntity(104U);
    msg.setDestination(30957U);
    msg.setDestinationEntity(16U);
    msg.mask = 182U;
    msg.max_depth = 0.9821945669860206;
    msg.min_altitude = 0.7952247078332667;
    msg.max_altitude = 0.9465873537997616;
    msg.min_speed = 0.03057893417593993;
    msg.max_speed = 0.8891626036630903;
    msg.max_vrate = 0.6237048133172696;
    msg.lat = 0.7753727358887167;
    msg.lon = 0.5718012916385877;
    msg.orientation = 0.4551710580956756;
    msg.width = 0.5938181734254925;
    msg.length = 0.5458234437744441;

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
    msg.setTimeStamp(0.3036411500881646);
    msg.setSource(42643U);
    msg.setSourceEntity(198U);
    msg.setDestination(16872U);
    msg.setDestinationEntity(25U);
    msg.mask = 117U;
    msg.max_depth = 0.5883430192900154;
    msg.min_altitude = 0.2285583708123956;
    msg.max_altitude = 0.5303660666278804;
    msg.min_speed = 0.5076998509815241;
    msg.max_speed = 0.23022858633385435;
    msg.max_vrate = 0.9978580591210982;
    msg.lat = 0.6508979579762453;
    msg.lon = 0.3530226564704685;
    msg.orientation = 0.2217944482296984;
    msg.width = 0.8107549596379593;
    msg.length = 0.5506549686849361;

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
    msg.setTimeStamp(0.4247853879592729);
    msg.setSource(59175U);
    msg.setSourceEntity(57U);
    msg.setDestination(41673U);
    msg.setDestinationEntity(208U);
    msg.mask = 214U;
    msg.max_depth = 0.29512260826284875;
    msg.min_altitude = 0.32586012250920293;
    msg.max_altitude = 0.2377588545400381;
    msg.min_speed = 0.1612164201637193;
    msg.max_speed = 0.7975822201035089;
    msg.max_vrate = 0.751266226254144;
    msg.lat = 0.6982733587962849;
    msg.lon = 0.549650041175953;
    msg.orientation = 0.26159616152154397;
    msg.width = 0.9382264558249149;
    msg.length = 0.8131492305568508;

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
    msg.setTimeStamp(0.1062769896721878);
    msg.setSource(24000U);
    msg.setSourceEntity(167U);
    msg.setDestination(40081U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.7288217886305146);
    msg.setSource(11085U);
    msg.setSourceEntity(115U);
    msg.setDestination(27588U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.1157183378980251);
    msg.setSource(60597U);
    msg.setSourceEntity(186U);
    msg.setDestination(63034U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.767648394911409);
    msg.setSource(8750U);
    msg.setSourceEntity(9U);
    msg.setDestination(55680U);
    msg.setDestinationEntity(151U);
    msg.duration = 33651U;

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
    msg.setTimeStamp(0.8104460294611651);
    msg.setSource(45913U);
    msg.setSourceEntity(37U);
    msg.setDestination(58346U);
    msg.setDestinationEntity(223U);
    msg.duration = 37824U;

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
    msg.setTimeStamp(0.887764670097982);
    msg.setSource(51298U);
    msg.setSourceEntity(130U);
    msg.setDestination(51135U);
    msg.setDestinationEntity(60U);
    msg.duration = 50465U;

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
    msg.setTimeStamp(0.7667412667778875);
    msg.setSource(9087U);
    msg.setSourceEntity(58U);
    msg.setDestination(60217U);
    msg.setDestinationEntity(254U);
    msg.enable = 105U;
    msg.mask = 3167919722U;
    msg.scope_ref = 1728908370U;

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
    msg.setTimeStamp(0.7189036011508192);
    msg.setSource(48849U);
    msg.setSourceEntity(30U);
    msg.setDestination(60424U);
    msg.setDestinationEntity(231U);
    msg.enable = 60U;
    msg.mask = 1977511214U;
    msg.scope_ref = 1457955478U;

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
    msg.setTimeStamp(0.15907229841781556);
    msg.setSource(52006U);
    msg.setSourceEntity(251U);
    msg.setDestination(28250U);
    msg.setDestinationEntity(253U);
    msg.enable = 173U;
    msg.mask = 1219187425U;
    msg.scope_ref = 2172878909U;

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
    msg.setTimeStamp(0.5502622862829991);
    msg.setSource(52139U);
    msg.setSourceEntity(10U);
    msg.setDestination(50936U);
    msg.setDestinationEntity(39U);
    msg.medium = 249U;

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
    msg.setTimeStamp(0.6162425581222538);
    msg.setSource(60364U);
    msg.setSourceEntity(223U);
    msg.setDestination(13540U);
    msg.setDestinationEntity(0U);
    msg.medium = 137U;

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
    msg.setTimeStamp(0.33093284980635285);
    msg.setSource(20257U);
    msg.setSourceEntity(7U);
    msg.setDestination(32778U);
    msg.setDestinationEntity(48U);
    msg.medium = 136U;

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
    msg.setTimeStamp(0.7195111547943936);
    msg.setSource(47106U);
    msg.setSourceEntity(183U);
    msg.setDestination(44944U);
    msg.setDestinationEntity(225U);
    msg.value = 0.28891852712858956;
    msg.type = 140U;

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
    msg.setTimeStamp(0.7645396166792461);
    msg.setSource(64681U);
    msg.setSourceEntity(191U);
    msg.setDestination(517U);
    msg.setDestinationEntity(149U);
    msg.value = 0.02135599026391044;
    msg.type = 104U;

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
    msg.setTimeStamp(0.39722080041218044);
    msg.setSource(35048U);
    msg.setSourceEntity(179U);
    msg.setDestination(18737U);
    msg.setDestinationEntity(242U);
    msg.value = 0.6080109889403654;
    msg.type = 159U;

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
    msg.setTimeStamp(0.5748163104099893);
    msg.setSource(51062U);
    msg.setSourceEntity(173U);
    msg.setDestination(14490U);
    msg.setDestinationEntity(79U);
    msg.possimerr = 0.9943927047072785;
    msg.converg = 0.17788920357721572;
    msg.turbulence = 0.8554914023468507;
    msg.possimmon = 116U;
    msg.commmon = 251U;
    msg.convergmon = 104U;

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
    msg.setTimeStamp(0.41201357645083225);
    msg.setSource(17170U);
    msg.setSourceEntity(56U);
    msg.setDestination(13716U);
    msg.setDestinationEntity(17U);
    msg.possimerr = 0.7448222517556624;
    msg.converg = 0.49042264323273776;
    msg.turbulence = 0.7669814579191191;
    msg.possimmon = 101U;
    msg.commmon = 35U;
    msg.convergmon = 22U;

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
    msg.setTimeStamp(0.6894256248112257);
    msg.setSource(64034U);
    msg.setSourceEntity(183U);
    msg.setDestination(18413U);
    msg.setDestinationEntity(239U);
    msg.possimerr = 0.6213521487692888;
    msg.converg = 0.673534516181341;
    msg.turbulence = 0.9664295564499588;
    msg.possimmon = 76U;
    msg.commmon = 204U;
    msg.convergmon = 245U;

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
    msg.setTimeStamp(0.7683303342951877);
    msg.setSource(14302U);
    msg.setSourceEntity(21U);
    msg.setDestination(30263U);
    msg.setDestinationEntity(131U);
    msg.autonomy = 174U;
    msg.mode.assign("MGLSNTVNWPUNCLCBHLFRDVGQMVLOCIAHTJERNDZZOZPKWZXRYPCPJVCIDBAKGKXJVAQJNDWLFMBINTNPMYFAHSGOYKYYLMJTHYWRFVFXGMCUPWDOSWABTOEKAQIHEIQRUSMOEQOMUXIBRVJFJOZFPMZKINBUOBUXYCPAVDLHHZXXRGQLSESZVTGISTFTFSTTC");

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
    msg.setTimeStamp(0.9506234784713408);
    msg.setSource(41615U);
    msg.setSourceEntity(65U);
    msg.setDestination(11995U);
    msg.setDestinationEntity(158U);
    msg.autonomy = 238U;
    msg.mode.assign("QGOKZTFLBTGHTBAOMERANBIEPZ");

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
    msg.setTimeStamp(0.49878241758846376);
    msg.setSource(8502U);
    msg.setSourceEntity(105U);
    msg.setDestination(43760U);
    msg.setDestinationEntity(251U);
    msg.autonomy = 189U;
    msg.mode.assign("EUQQJIZIYEXPGAHRZLGZIDIUBFWKDMULNABIUDRBHMNCKGJPRXCLNCTPLWAVXKRQTWGLTBZTQJBFAXSGHEKVFGDKFVQHQAKGDELUPOMXNVGYSTUROVEXEMWCWSWJJYPDMVCMAMVATLEOEIOQBZUACYOTINCBZLPSZFYDUONBFSRITKHNRYRQAPNYFDKWSYXSUZEGLWWTKJUJXCMPOBFLFSQWVJHVHYV");

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
    msg.setTimeStamp(0.6846036591346738);
    msg.setSource(23325U);
    msg.setSourceEntity(156U);
    msg.setDestination(53207U);
    msg.setDestinationEntity(38U);
    msg.type = 249U;
    msg.op = 248U;
    msg.possimerr = 0.23922396853199834;
    msg.converg = 0.2066886513347641;
    msg.turbulence = 0.6461487434863122;
    msg.possimmon = 247U;
    msg.commmon = 173U;
    msg.convergmon = 173U;

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
    msg.setTimeStamp(0.4080439838689459);
    msg.setSource(46437U);
    msg.setSourceEntity(97U);
    msg.setDestination(42059U);
    msg.setDestinationEntity(5U);
    msg.type = 155U;
    msg.op = 197U;
    msg.possimerr = 0.8995580376510736;
    msg.converg = 0.3288766236797016;
    msg.turbulence = 0.7145263704990265;
    msg.possimmon = 24U;
    msg.commmon = 96U;
    msg.convergmon = 100U;

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
    msg.setTimeStamp(0.4292347508815515);
    msg.setSource(14058U);
    msg.setSourceEntity(175U);
    msg.setDestination(6175U);
    msg.setDestinationEntity(89U);
    msg.type = 254U;
    msg.op = 17U;
    msg.possimerr = 0.6518805283797224;
    msg.converg = 0.19146934768600066;
    msg.turbulence = 0.6337591722299167;
    msg.possimmon = 250U;
    msg.commmon = 111U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.9514039607005594);
    msg.setSource(10266U);
    msg.setSourceEntity(151U);
    msg.setDestination(25225U);
    msg.setDestinationEntity(102U);
    msg.op = 239U;
    msg.comm_interface = 246U;
    msg.period = 20070U;
    msg.sys_dst.assign("UICONDYTLRZJIHQWHUNLHWEWGJBQNISTGXVTLVHTWNXFQSSRPMOYFGBDSPOGBUUNPHTCJWSMYPAANWKLEMACOMGAJDLWJHDUHEBIDXRBWYDCATUELYHGVYCLTIRJLQMEVDWKYPOVXVKASBFQGOZKZFQAKZFATXMIRFPNUUKLDJRRROXHSEVMXKIPZJYZVAXIAWIXGUFUMZOBKHNBPPQEBCDICJBCCMLYPQOEDN");

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
    msg.setTimeStamp(0.9260502304607715);
    msg.setSource(54554U);
    msg.setSourceEntity(136U);
    msg.setDestination(33851U);
    msg.setDestinationEntity(125U);
    msg.op = 19U;
    msg.comm_interface = 158U;
    msg.period = 19858U;
    msg.sys_dst.assign("DWCKKPNJXBTGENEIGMEMIFCAWJNXLLRBSBXDUHYGKGTKNWCIZJWEZNHPKILQTOEYHHRUEFTXFTYHWFMDOFUCEYVGNDZPHEQSZFRPZBBMCOAVMJCARUIPBIITULKQDMLPQDOUMTYKXTREAMCVUKXOSLIAWJFSQIXFOLXSSLRYSYGFTBVCGBRV");

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
    msg.setTimeStamp(0.03775177785107786);
    msg.setSource(43183U);
    msg.setSourceEntity(70U);
    msg.setDestination(41447U);
    msg.setDestinationEntity(149U);
    msg.op = 100U;
    msg.comm_interface = 204U;
    msg.period = 59175U;
    msg.sys_dst.assign("EPOSKTAHDSIPXGUOMTDCTPHNSRGPALSXSQNUZDLAPKMWQYBVTDNJZQFFFJSQVWAUSZJHLFLYEVEJXANTQJQCDNXZHULDNPDHWLGFRIKGZVECRJIDBBKHSGFJYUIIZFNVFHJNIYLE");

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
    msg.setTimeStamp(0.6122244894585985);
    msg.setSource(22193U);
    msg.setSourceEntity(249U);
    msg.setDestination(61401U);
    msg.setDestinationEntity(122U);
    msg.stime = 4101615505U;
    msg.latitude = 0.12450199271989704;
    msg.longitude = 0.3358814039156418;
    msg.altitude = 8145U;
    msg.depth = 6871U;
    msg.heading = 35527U;
    msg.speed = -1015;
    msg.fuel = -111;
    msg.exec_state = -34;
    msg.plan_checksum = 27610U;

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
    msg.setTimeStamp(0.660567760221236);
    msg.setSource(17988U);
    msg.setSourceEntity(68U);
    msg.setDestination(34069U);
    msg.setDestinationEntity(222U);
    msg.stime = 1708843960U;
    msg.latitude = 0.13404181350864142;
    msg.longitude = 0.20339477098685754;
    msg.altitude = 18474U;
    msg.depth = 37951U;
    msg.heading = 34665U;
    msg.speed = -12416;
    msg.fuel = -24;
    msg.exec_state = 26;
    msg.plan_checksum = 2637U;

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
    msg.setTimeStamp(0.6950582228746286);
    msg.setSource(41479U);
    msg.setSourceEntity(0U);
    msg.setDestination(39969U);
    msg.setDestinationEntity(208U);
    msg.stime = 1363003411U;
    msg.latitude = 0.874622281418105;
    msg.longitude = 0.055578996858529184;
    msg.altitude = 32978U;
    msg.depth = 29470U;
    msg.heading = 31440U;
    msg.speed = 5609;
    msg.fuel = 71;
    msg.exec_state = 16;
    msg.plan_checksum = 44246U;

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
    msg.setTimeStamp(0.009178033569390176);
    msg.setSource(18292U);
    msg.setSourceEntity(94U);
    msg.setDestination(1677U);
    msg.setDestinationEntity(31U);
    msg.req_id = 2044U;
    msg.comm_mean = 42U;
    msg.destination.assign("PIQWDAMKWFRNHMMTZVHFMTZZUKNCWUKNOJAWTXWHZPERYJTVPJXSFIIRZMQEGDPJYNIPUJWDYUCORTGYCGFQIVRWSVYBHKFLPAXDDXESOPJBBSVBBRZOLTNPDA");
    msg.deadline = 0.9359012443753042;
    msg.range = 0.4607626932269592;
    msg.data_mode = 232U;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.298104914333859;
    tmp_msg_0.x = 0.4411492601573036;
    tmp_msg_0.y = 0.6084002416246727;
    tmp_msg_0.z = 0.33402478061517893;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TAPXNBLUASOZIQRUGNZBYUJFZXEYITGUEWPWLJGSDLTKSVZWRFDJHENMKOVPAVODOXQGYJONYIKUMYRRAHEPAWXKDOYCMTLLWQVLIJIAMGBALHLFJOFCNQAUSXHHNPYBFEWIHXEPBKBGJFWVLXRYSKOPQCDIVNMONMVDFSGTCCFETSSDYZUZWFKREGHTCPHRDZZDAAJRIBQHCNQPISUKMXCCDSEUVYBVMQQMZGJM");
    const signed char tmp_msg_1[] = {57, 94, -126, 75, 29, 25, 112, -32, 64, -122, 78, -3, -34, -36, 4, -20, -85, -5, 126, -33, -61, -13, -57, 106, 3, -120, 15, 13, 28, 14, 98, -115, -35, 27, -21, -37, 119, 68, -117, 18, 101, 101, -89, 118, 22, -43, -48, -76, 52, 25, 110, 97, 21, -103, -19, -125, -42, 10, -38, 42, 14, 66, -26, -70, -19, 17, -101, -5, 71, -80, 117, -58, -99, 45, 57, -71, 86, -20, 122, 113, -30, 2, 45, 41, 2, 46, -82, 68, 75, 45, -103, -95, -121, 60, 35, 80, -65, -105, -112, 102, 71, -89, 0, 107, -31, -96, -1, 99, 6, 21, 74, 81, 126, -115, -63, -58, -73, -26, -89, 89, 6, 81, 18, -76, 81, -40, -87, -61, -6, -97, -111, -21, 28, -8, 30, -79, 29, 112, 83, 3, -5, 25, -101, 42, 77, -99, -127, 16, 67, 108, 22, -84, 117, -109, -7, 57, 38, -106, 1, -70, 119, 48, 38, -92, 9, 88, -57, -62, -4, -68, -42, 31, 25, 103, 2, 101, -31, 82};
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
    msg.setTimeStamp(0.777349548125936);
    msg.setSource(48338U);
    msg.setSourceEntity(217U);
    msg.setDestination(11568U);
    msg.setDestinationEntity(90U);
    msg.req_id = 52685U;
    msg.comm_mean = 121U;
    msg.destination.assign("WTCJPIBBBTJZCSAMNHVUTYZAEHNIOUWNQZYCWHZMWGIHQSLPUNCMGWEBVYOPCAFTEIZKKAKHAARMNPRJGMRQMNSPQVTNCUBEGGTFEKSSPGBGEOGFUFLUZJZOLPFQIQVRAMTQAZYTUXUFOESFJIYHRQGTIDXDYNFJXXQELHVXSURUHKDYRLJDSEDDKJFDKGVNROTCKDJADLXEYISBYLBJCWVCWYAZNMLWHLPZVXBOPOSWMRF");
    msg.deadline = 0.2836040504478249;
    msg.range = 0.27335057350030056;
    msg.data_mode = 79U;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("GLZIUDCFICWKNXRXXJBNNWEOVJXHSFJZQHQHSCZPYDDYIINWTSUXTZKBKLZKOJRNOFRASNGTZQIJYNWBOLPQNPOXGWIPTVWHUMBPDVETOCBVGKKDYSVISODQOCLMCICUEWAMVCTBNAHWMLFARGZENAMGPKASAHLUWKMBAAEUXGUQTDULXPMGFDTJCBHODRVYTTEZXJUHFL");
    tmp_msg_0.sys_dst.assign("NBCJURTVVLXBTNGMYCUQELIMJGANIFYFMVLG");
    tmp_msg_0.flags = 89U;
    const signed char tmp_tmp_msg_0_0[] = {-33, -59, 81, 115, 56, -6, -30, -30, -72, 77, -13, 43, -4, -29, 82, 48, 87, 45, -56, 65, -116, -57, 65, 23, -44, -103, -1, 9, -15, 116, -125, -80, 60, -121, -54, 16, 51, 104, 23, 108, -111, 75, 48, -82, -10, -127, 123, -47, 120, -116, 2, 23, 124, 24, 83, -93, 19, -15, -56, -58, 23, 2, 64, -60, -27, 105, -110, -27, -30, 106, 40, 51, 112, -93, -58, -57, -46, 32, 126, 42, -21, -68, -122, -85, 68, 77, -78, 72, -99, -108, 55, -5, 16, 101, 124, -99, 54, -73, 56, -80, -2, 75, -74, -117, 110, 92, -2, 46, 96, -90, 69, 102, -90, 72, 120, -92, -41, 25, 41, 24, 21, 51, -23, -14, 80, -28, -90, -125, -95, 90, 82, -58, -69, -105, 23, 82, -125, -51, 102, 67, -82, -112, 113, 75, 32, 53, 11, -65, 64, -21, -125, -125, 56, 4, -39, -61, -77, -25, -127, 61, 53, -122, 75, -54, -25, 60, -45, -29, 17, -47, 117, 102, -17, 42, 104, -6, 22, -49, -99, 61, -68, -67, 115, 6, 123, 120, -12, 5, 19, 87, -1, -40, -58, 122, 19, -97, 116, 78, -13, -61, 37, 13, -53, -29, 81, 8, 48};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TGOYNKMZZKWCUUASMATUMZXZVYRHQDNI");
    const signed char tmp_msg_1[] = {58, -123, -23, -71, -94, 126, -11, -48, 56, -93, -64, -66, 54, -61, -52, 48, 57, -2, 116, 32, 46, -35};
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
    msg.setTimeStamp(0.25751176091556727);
    msg.setSource(50479U);
    msg.setSourceEntity(226U);
    msg.setDestination(55106U);
    msg.setDestinationEntity(245U);
    msg.req_id = 57756U;
    msg.comm_mean = 108U;
    msg.destination.assign("DUMOQUVJVXSJBAYNIVHHPJYQQXNUAKMWPWAHXQYFTUPNUDNQYONZBEXHDPMGWYVDBNKNRCISXBPXMHSCBVKEAHQMSYTTGHBTZFWEEIMABHZDRRECJLIIJWSSXVFZOCADLAOGGTJDFMCEBUJASDJVSCPPOVWOQFPTQCFCLGGGSZDEKIRYYUHXLRTNBEQFZGUNLLRPVOWIFD");
    msg.deadline = 0.11156206361647392;
    msg.range = 0.7630347348802489;
    msg.data_mode = 196U;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 30U;
    tmp_msg_0.op = 9U;
    tmp_msg_0.err_mean = 0.5642104207449175;
    tmp_msg_0.dist_min_abs = 0.5482653195058962;
    tmp_msg_0.dist_min_mean = 0.4355751767301689;
    tmp_msg_0.roll_rate_mean = 0.47771629819596995;
    tmp_msg_0.time = 0.8199384639030362;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 195U;
    tmp_tmp_msg_0_0.lon_gain = 0.4402813288638159;
    tmp_tmp_msg_0_0.lat_gain = 0.25140985006160277;
    tmp_tmp_msg_0_0.bond_thick = 0.6158225787043318;
    tmp_tmp_msg_0_0.lead_gain = 0.9039924807645051;
    tmp_tmp_msg_0_0.deconfl_gain = 0.791156347265713;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.4624492031958639;
    tmp_tmp_msg_0_0.safe_dist = 0.4200017696698197;
    tmp_tmp_msg_0_0.deconflict_offset = 0.6253368642453974;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.7438324505855791;
    tmp_tmp_msg_0_0.accel_lim_x = 0.7664544136580345;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("CWGEIAZVAQWSBELQOHGIXZAPONGJDYLZUTWSTOXEOLTZNSHENZJGAVSAIXKKOCXTXRARTKUSPBXJVIFRUUIHFNMVQZEVVCOSCYYDIJFFRCMKDWXQZSBPOHCFPMMKZSFRVRJGQUGTKPEEBJHZHGMDNJUYCHRTAKBSGQMXBVMDCWYEAVUTIDYWPGKXHCFFLNLWRLOLEJLBWFXINPWFAJOTDIMZGYMKYWOAYNQUURPDBDQKLSPJUPRNCTBLBDIH");
    const signed char tmp_msg_1[] = {-77, 112, 49, 74, -95, -114, 68, 58, 75, 50, 121, 9, -118, -84, -70, 123, 111, 121};
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
    msg.setTimeStamp(0.17054667633540532);
    msg.setSource(30718U);
    msg.setSourceEntity(203U);
    msg.setDestination(35893U);
    msg.setDestinationEntity(60U);
    msg.req_id = 1969U;
    msg.status = 117U;
    msg.range = 0.007560096701765273;
    msg.info.assign("VSQZTISARCJXRVUXNZZTGOQGIBYPLFKHOCZMTMKDJBXXDZDORYAYYPYIJHZVNIGYVCJLOXUAJIGWRBCFNCXPNSKGBNVHFNUUJKZWCVTLBQNOXPUAHLPWHPQMATDYEEWBKACFFWFLNEIBDQXFBZLUHKUPHJRSJWKZGLJZR");

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
    msg.setTimeStamp(0.8027139176404731);
    msg.setSource(54865U);
    msg.setSourceEntity(76U);
    msg.setDestination(35983U);
    msg.setDestinationEntity(107U);
    msg.req_id = 5547U;
    msg.status = 175U;
    msg.range = 0.1403373162076743;
    msg.info.assign("ODIRQEKCSQRDIBSYZRBLCBWEAGBGQHSIXJTRXXWMXECMAFFENTQVVLXOUDHVPWWUOMUGNNDLSABPNFNTZPJSQJTFDQFUFYEXYVWJTJMKPDWPNFHCRKGMFADHCROCQUKRJGVIGUHBEZZPTLUIKEPEIVCCYUQHUWNROMNEOVTAAYYJJYSBDKSISDLLRQHLBXVGRZINAYMPTAOGZZZXMZ");

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
    msg.setTimeStamp(0.14197834224974648);
    msg.setSource(56548U);
    msg.setSourceEntity(89U);
    msg.setDestination(34483U);
    msg.setDestinationEntity(232U);
    msg.req_id = 50061U;
    msg.status = 197U;
    msg.range = 0.11302978314984469;
    msg.info.assign("WXGEORXRMSTLOEVKCHYGESPRVTWEWLXBBRVSAVQOQVNGCTPHDHTFNGIUELVFZUDSNILEJBNKRKEYJLJPDCNZLMOFLPIF");

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
    msg.setTimeStamp(0.8481226927229881);
    msg.setSource(31823U);
    msg.setSourceEntity(1U);
    msg.setDestination(37954U);
    msg.setDestinationEntity(216U);
    msg.req_id = 36759U;
    msg.destination.assign("EPSOUQFBNCFOMYKIGYVCKWUCLUZLVVFXQASWEYNBFTWUDYKIEOSACKPHFUHGOZTJGRGHTVOPWMQCOFTOFKTDAXJBXHJTIRZIEZJEMWKESXVBGRLDCRJGTJUEREKWQTYRRPPQKJNMCCIQDBRUYWXCAQSHKKDFVLXZWJAFLQAUEHGMASZMDAILNBZSDOIPQOTVDDSXYMLZERPLATHUXYMVNJHVINXUINHRFA");
    msg.timeout = 0.8422662914633084;
    msg.sms_text.assign("DFVEEDZGPJTBCVSHQUFSKAWYMAUTWEPEELOIUOODXACYUNQBBMLPCAPFVQREQKYSOWRKBOBJCTWIKIFLIJUFIFMRHUNOQVIQFRIYRCMUOSOAQZEZSGBEMZMJLZMQDRFBRZYBMLKKTQTQXAPHKNTZFGXPDUHXJWORSYHDSGLHBUANBGXKYWAGZPPCLRWGGGDKCXIDXIXPCDJVNNLNHZIAVVVYRSTSTCNUWZMPLNGVYEJHOWXAVHHTJMKFCNWXT");

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
    msg.setTimeStamp(0.5064716553451843);
    msg.setSource(42681U);
    msg.setSourceEntity(180U);
    msg.setDestination(50924U);
    msg.setDestinationEntity(88U);
    msg.req_id = 6800U;
    msg.destination.assign("PLXDOYXXWCVSYXAYUOKBWMKHWIKVDSIPTEULTRJSVCELHIPBAKRJMIILOVHJDNNLGRDMFWKENAWYFLPGTQABLYEUOQDQJWUWNHZTZBYHPPUMYHZJWZEUQOLNBFCVJIVCMDGEKOUOWTANXGPTMVHTKGXINIABZKQAGLSFVIYSXPOMDINYCYZHNGREFZEMQBFQQKPHVJSCRRESBCZGRSRGAGQHTFXRADLDCJODMXSEXBOJTF");
    msg.timeout = 0.0075234586893353494;
    msg.sms_text.assign("QAKJZDWKYOUKXTGHBFVQTVGUGRZGTJIAQHKLPFAQBANHGYYEINCBVGLJCFERYOBGXDSYBSRVFRGUPLVJXGFFLUZ");

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
    msg.setTimeStamp(0.7541608518059617);
    msg.setSource(921U);
    msg.setSourceEntity(84U);
    msg.setDestination(50322U);
    msg.setDestinationEntity(159U);
    msg.req_id = 18332U;
    msg.destination.assign("VFNWXWZCRMOJHYVTIQADRMHUPBFMBEQNJDCTOAUNUPHHQXUIQCKTXLPOIJTMCSPATODYSSZGKZHSAHWLPJCRZWBGPARNNXFZD");
    msg.timeout = 0.9199441476195446;
    msg.sms_text.assign("NCWGHZZTGNITYGFIMKXRYQHUXFHRJDLEZJIPFIJKSAAPLXYDKQQXEWLXBBCVFISSAXEGNXHWMVPWCWBSTFZQHKNICCTVKMMSWNCSARPPYYVQBBXPCIOVOEFUBUAFRTTXJDBVUFZURHQEYAOTHZLAWRRZVEBNUZGEFLJDQGGAMGXOTMRSUNJYYVPJNDKHKYKICRZSAWJALELJOIWBOWVNDNVDCBKOHPQMULSZM");

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
    msg.setTimeStamp(0.3296926031359274);
    msg.setSource(27846U);
    msg.setSourceEntity(85U);
    msg.setDestination(3612U);
    msg.setDestinationEntity(0U);
    msg.req_id = 42572U;
    msg.status = 112U;
    msg.info.assign("NPAYOQLTGLIMEZKKTYKCRGUNESGCQWGYHOOFWBCJJZAZETHVDAOOHRFRXKUCHXSWSLIJDRGTHGPWITVYCTDANYNVMFSLNVKWTSJKQDYTBYQUDFMZDVQESZRVDIBAQHOWZYJBSHVROEHJKPXGTPAKVNDIO");

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
    msg.setTimeStamp(0.5769139135521698);
    msg.setSource(2456U);
    msg.setSourceEntity(107U);
    msg.setDestination(5181U);
    msg.setDestinationEntity(134U);
    msg.req_id = 44933U;
    msg.status = 162U;
    msg.info.assign("EPQSAAKURSUJYGBTCDTONQMIHPVIZBHUONWDZRLHEJUFRKFLMVLGMGCXPNVBSOGXWAOJJXOZFPMKZWBVWXVARBFIUKSKYEMHMPRQKOIHBNXTQWJIZULJGIQEECHGDXDHTTUCDSTOYAQAPKVNQQCSEWLICWNPAUTJHCVVFTFYDGCLYWCBDXZWDLYZDROSGMBJDLIXTPUQWMFQMJYRGFRABFNNKRVNSYYESEHIKBANUXLHOZ");

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
    msg.setTimeStamp(0.2594273692254494);
    msg.setSource(4628U);
    msg.setSourceEntity(25U);
    msg.setDestination(41207U);
    msg.setDestinationEntity(12U);
    msg.req_id = 25828U;
    msg.status = 154U;
    msg.info.assign("QPHFOLTQVKLEUNIAUIEKWTGTBMKEHPHVSBKGDPEUISTQQWMNZIMVMCWLCUIXI");

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
    msg.setTimeStamp(0.003549431765649813);
    msg.setSource(30086U);
    msg.setSourceEntity(106U);
    msg.setDestination(38336U);
    msg.setDestinationEntity(34U);
    msg.state = 31U;

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
    msg.setTimeStamp(0.40944546109806246);
    msg.setSource(16269U);
    msg.setSourceEntity(177U);
    msg.setDestination(52595U);
    msg.setDestinationEntity(116U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.07304075217644346);
    msg.setSource(3882U);
    msg.setSourceEntity(21U);
    msg.setDestination(48364U);
    msg.setDestinationEntity(86U);
    msg.state = 182U;

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
    msg.setTimeStamp(0.14352317712636975);
    msg.setSource(3447U);
    msg.setSourceEntity(101U);
    msg.setDestination(64716U);
    msg.setDestinationEntity(123U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.1696408836971346);
    msg.setSource(62189U);
    msg.setSourceEntity(184U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(90U);
    msg.state = 144U;

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
    msg.setTimeStamp(0.37039700232473505);
    msg.setSource(58652U);
    msg.setSourceEntity(184U);
    msg.setDestination(54409U);
    msg.setDestinationEntity(24U);
    msg.state = 24U;

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
    msg.setTimeStamp(0.786274137820179);
    msg.setSource(54672U);
    msg.setSourceEntity(163U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(123U);
    msg.req_id = 31045U;
    msg.destination.assign("UBZJVMVDZSKKQZRZJMGSSPINABNXWQHGXPKJWHCMMZPEHBJPUIUELPEOGDWTGARAIGVHBCXKIAYBDBWRXDIGNMQQMWJLAFRHVGMNGCIXVWEJDLHTCHYKHYUMZCEPYNHKAGWXTLRUYLZCLFFPZOSRFULZEVQRUREDOEOXKYBXXFTQWTBJRYQAFFZASAIUYKBDVPFSEDUCTQSPT");
    msg.timeout = 0.24291157456423573;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 70U;
    tmp_msg_0.mask = 1045073966U;
    tmp_msg_0.scope_ref = 4094153159U;
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
    msg.setTimeStamp(0.42792505732940644);
    msg.setSource(56474U);
    msg.setSourceEntity(173U);
    msg.setDestination(50230U);
    msg.setDestinationEntity(147U);
    msg.req_id = 18419U;
    msg.destination.assign("ITZOYNVYEIBBZJVQADPXRAQGWYTOCXXCDUQBCARGURVCAJFWGIVGGMGGJUWSWL");
    msg.timeout = 0.8499462592137492;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.3570304681048043;
    tmp_msg_0.temperature = 0.6960148804160384;
    tmp_msg_0.depth = 0.36068549609910605;
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
    msg.setTimeStamp(0.6510570150535688);
    msg.setSource(35633U);
    msg.setSourceEntity(158U);
    msg.setDestination(38198U);
    msg.setDestinationEntity(21U);
    msg.req_id = 7610U;
    msg.destination.assign("BWMKXVGENIJSBNWPLOHSUSAUWDDRWJMCZFAEADCQXSNXMFOELWWKHNWRHVGPADHCTPBZEUPONQTMFFSKD");
    msg.timeout = 0.0778160855359652;
    IMC::AcousticMessage tmp_msg_0;
    IMC::Redox tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9068397443888886;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.36748540736985014);
    msg.setSource(17178U);
    msg.setSourceEntity(92U);
    msg.setDestination(17843U);
    msg.setDestinationEntity(108U);
    msg.req_id = 36262U;
    msg.status = 128U;
    msg.info.assign("ZIXPRDUBQGLKDIVTMCVRQTZRNRZGPHTADTXTRMWZSLJOYNUZFWEIOUFVPINGFANQLWPKUYQAMBOSZSAWHJXEYKTNMDCYVLWOQOJHQJHUFEX");

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
    msg.setTimeStamp(0.6364855319380522);
    msg.setSource(63511U);
    msg.setSourceEntity(247U);
    msg.setDestination(61824U);
    msg.setDestinationEntity(67U);
    msg.req_id = 1975U;
    msg.status = 102U;
    msg.info.assign("WLGNXUULNJDZNCVBAGHWXWNZKMZMFVGSRITNDQQOHIEPJPASWLYGWRSQDWFWBQSZVUSSLRHFXJMBZYAXTHGKPMMWDTKMRELYHHSEFUXTTYFDBOUYFYJTMXKSCVITVYJQIILPMZJATFOJNDQMBIDUKREQCPRRYVLAPNGPOCBBNJNKWMDOJPKTDIGAVZRZRUABZOEDVZEABEX");

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
    msg.setTimeStamp(0.7298667423126994);
    msg.setSource(8698U);
    msg.setSourceEntity(61U);
    msg.setDestination(27465U);
    msg.setDestinationEntity(111U);
    msg.req_id = 26854U;
    msg.status = 59U;
    msg.info.assign("ENYWQGFJLGXUJROICQSALKUVPHDOBAYUZRUMIHCGE");

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
    msg.setTimeStamp(0.677992734658248);
    msg.setSource(56908U);
    msg.setSourceEntity(244U);
    msg.setDestination(13317U);
    msg.setDestinationEntity(118U);
    msg.name.assign("LUOEIDESFHZVLHQZVOVIKPRRSPVRTAWKKDRYMHUSFWMDVEZJTBGTNAKNPLIUPJDSADGVARWNCXOYWUXYYDRCJCITJJLBCHPSMUHVFIMOYJSZVWBFKAZVWYQMMAIRNDQQJTZTKONOCCGEHDZIJUGHBOZAKEWNGAPZ");
    msg.report_time = 0.35581985665390725;
    msg.medium = 198U;
    msg.lat = 0.6690034374766054;
    msg.lon = 0.11124930406785394;
    msg.depth = 0.9614918797325661;
    msg.alt = 0.6772322760218991;
    msg.sog = 0.9348583975811458;
    msg.cog = 0.47980194587553904;
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.22108943345761178;
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
    msg.setTimeStamp(0.24315932250715055);
    msg.setSource(18703U);
    msg.setSourceEntity(142U);
    msg.setDestination(43648U);
    msg.setDestinationEntity(132U);
    msg.name.assign("HMGFSBKRDPTVIRJWSCUFPGCGBTQNOXAECGKJKQWMBQOXVQRENNFZOKIJVXYJBGLIM");
    msg.report_time = 0.29454612226322285;
    msg.medium = 68U;
    msg.lat = 0.25960458970377387;
    msg.lon = 0.8816276936741032;
    msg.depth = 0.7053724048621537;
    msg.alt = 0.6413306764077898;
    msg.sog = 0.6500220035806116;
    msg.cog = 0.04576623516244893;

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
    msg.setTimeStamp(0.0036866591915823976);
    msg.setSource(34027U);
    msg.setSourceEntity(224U);
    msg.setDestination(7969U);
    msg.setDestinationEntity(46U);
    msg.name.assign("JXKMFUQXUNEHLMAWXBWWOTNXITHUROHIDMFJWJLZTNHRCYRPTKFWBDGUILENKVVWGIDZLUGTGLVRAIAUCAPQOABFJJKEMVRYEXNGBGNKUIPFEIRYZGBDZCKSSQHGXMOVJCONQSDMYERTHVDXMAYODKIPLHOCDOMOGQADFCDBUWXYPSETKKSBCKXFXQLSPSLNWZTTPQHZVFSZACRMUNWBENHQBZF");
    msg.report_time = 0.6343161777675885;
    msg.medium = 30U;
    msg.lat = 0.23392024844979697;
    msg.lon = 0.4470120103687405;
    msg.depth = 0.8578602596044503;
    msg.alt = 0.6463690941513544;
    msg.sog = 0.9021686524671957;
    msg.cog = 0.7991306091486691;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.15522078677772022;
    tmp_tmp_msg_0_0.lon = 0.020298921139980552;
    tmp_tmp_msg_0_0.height = 0.2668776318434487;
    tmp_tmp_msg_0_0.x = 0.3579736774310598;
    tmp_tmp_msg_0_0.y = 0.7698842668263194;
    tmp_tmp_msg_0_0.z = 0.5312048033480443;
    tmp_tmp_msg_0_0.phi = 0.3850201520395067;
    tmp_tmp_msg_0_0.theta = 0.7105001948446044;
    tmp_tmp_msg_0_0.psi = 0.796125985734923;
    tmp_tmp_msg_0_0.u = 0.5920073047702457;
    tmp_tmp_msg_0_0.v = 0.30273655583825154;
    tmp_tmp_msg_0_0.w = 0.942069632149686;
    tmp_tmp_msg_0_0.vx = 0.6794103933532069;
    tmp_tmp_msg_0_0.vy = 0.2117638616747245;
    tmp_tmp_msg_0_0.vz = 0.24170350916730043;
    tmp_tmp_msg_0_0.p = 0.050928205552491;
    tmp_tmp_msg_0_0.q = 0.2965802962650843;
    tmp_tmp_msg_0_0.r = 0.20978835189497214;
    tmp_tmp_msg_0_0.depth = 0.7041524398973316;
    tmp_tmp_msg_0_0.alt = 0.8006773596509974;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 37U;
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
    msg.setTimeStamp(0.6591212846302815);
    msg.setSource(60086U);
    msg.setSourceEntity(3U);
    msg.setDestination(22331U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.32432334726670997);
    msg.setSource(17807U);
    msg.setSourceEntity(40U);
    msg.setDestination(2247U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.4229271521397263);
    msg.setSource(60130U);
    msg.setSourceEntity(90U);
    msg.setDestination(36017U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.5664954274322146);
    msg.setSource(42610U);
    msg.setSourceEntity(4U);
    msg.setDestination(32892U);
    msg.setDestinationEntity(39U);
    msg.plan_id.assign("HTRABCZYYFFMVCWMIRXLPQKLJELIHQWSTTJWZVODQFZEDTWCGPKB");
    msg.description.assign("YISQESNMQECNLGAJJZJWQAEETEUWQYWHMIIMJTWCIEKBRHHTSWUUPASZMGVNKJYPLFCQIPJYUJILHXTLZOLNDJNGDHCZRQMDJAVRLQGMBPABHNRXTAPVOFIOZBW");
    msg.vnamespace.assign("KCIZPWWHLSUEFDPDAHISMXMJOEBBKOUXEVTNUYMXQIPGXFPWGCELQDSBSUHSQJGCUCYWKXOHJAOFZPDKRDIYJNZYVRSBNPTOMYMFIIULGULDBSKODTHWGJHTCMORWAMTOBWFLHZBIZIGUGVJVQXLVFTKVYETSCEWRVHEMDRTLYEYONGAIQEWFKZEATLOXJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZRYGFCWZEMADQCNDAAJTQWEHPYHWDAGAPWOCYTJLWFPFIKKLVONUBPPFQUDMTMYVNHGNKLAIOFZQVFILJEQTKPDXITFPIUBRFPBUXCSYBJRAHFQWVLNWZKGKQVPIBBDYLTMRYIMRCRSQEUBSGOSNXZXEBSDGRZAOPYMOOBHOGKHKSHTUAKXXCHUSHBCVXNTSIQSZDEYMXMEIOETNWLJRETENMWAJVFHGSVL");
    tmp_msg_0.value.assign("JJKMMJILUNJISPKRHHCSYYDAIASXQVBRQMSYVZATAVWPYJNLMRLLPIEBPZFBBRVZQGSIXJNZOCLZOUXPSIFFPFOIHGLZMATGAFTABOXNSHNTKSUWXCDPECROVFFMQYUWMRKBDZDUONMCZHGXMTODAHOVRUXXFWUNYYQKQDGBWHSEJKGKEIRWUNTGTHTEQUCCQXVDYKJJXKWLGKDLWEDNECNR");
    tmp_msg_0.type = 70U;
    tmp_msg_0.access = 142U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JQHLPYDHCACUFXCILLVUXNEIVKSSUZKUCZXTSLGDTMPHAURTHFRSUNROSPXTANLPVEZNVRWMMMDCYEDGHRCBENWEJMKBZOJFWAHHRBUAFDWKQQYQQVBIFTFIGSWZIPEGJTOAAJOGULKIOFUWVKONNYJYRBTEJIXHWHBPQIBODMJDEDDYWZPXQCAOUZXFGOFLYTMWB");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ADEVKWNXECTDHMGXQFCXMULUUARMWAFHOPOEZEVLIKIDGTVNIJBNXKLBESQTUWMCZOMSSDATNWAXCNKYNWHNORSPMJGJVVFAKYQNATWRPJFXDTPVKQDLIZGFCFEGBEXZKRIHCIMLGUCQMC");
    tmp_msg_1.dest_man.assign("ZXEAIDYPANWUURGAHEJCASXITJGSTWIQVTKYPBYIQNXYWDLRIARDCUQUXJPOCFBCFVZHMHYHMQNROCFDUUBLJNZLLWJZWPIKCWGOGKBSMIIAYEBPGNVGNQFVXROPGEXMQFBMNBVJKMEYNIKTWSDNOHHQYESXKFPPOKZAVPJCCDIT");
    tmp_msg_1.conditions.assign("RAMOSMTHBUYAQXGDWZTOCL");
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.33590008739646116);
    msg.setSource(4796U);
    msg.setSourceEntity(47U);
    msg.setDestination(43248U);
    msg.setDestinationEntity(75U);
    msg.plan_id.assign("BBKIQZDPWLNDDKEKXWPXPTFSYTSGLFQFJRIEEVCCHOZNUZHHNXIZFQYHTFMOOKPLLANRXVDXMJXAPYKMOEOTZQIGENJJRKAISCMZEW");
    msg.description.assign("BPILWLXVLSQBQJQLROEQUGXBKKLQOMRMCEGJHIK");
    msg.vnamespace.assign("TLGQMUCLJRFUECSCILTTVFSEQHNDPXBNOCWMOCBFNWURGKFKHXVNRWKXYZEMALLZTHHPZNCVTRSHDEQPJIIBYFPBDXWYYZVFMSBUYAWMMLJRVRFGWPAFDHAAQKPVZLNKHOIWMTQPIGPYLKILPTXVUEKZDSIJDYOZAORXJJQTMXZNXBSPOMNX");
    msg.start_man_id.assign("HFMHGEYMIPBRHIFSVXNADHVQUDTYGRBFCRQSGKHECTCBHSEZXHBDROOGLGZNEQKXLVWMUFWIZZNXIOHYGTVBCFAINLQJWYQFAWPVYKLIMUKOIPLMWJZVECBTRUDODOYMTZZUQJN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WTUVFXGAOZWMIYMBEPVCSIBWWYVYOLANGFDLUZRNNZNHPNEMFJEWYGAWNTGYKZMYQBKGZCXHVQLUORPIMDLXVRRKURLIYBQKDAMBZLNZDXCGMCVYSTDGOWJICDYBAZIAHDWKTMVKNSXGUFMEFDPJHBAVUJRJSHT");
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 59977U;
    tmp_tmp_msg_0_0.flags = 133U;
    tmp_tmp_msg_0_0.lat = 0.203822189128124;
    tmp_tmp_msg_0_0.lon = 0.30811630036375726;
    tmp_tmp_msg_0_0.start_z = 0.38529616073429684;
    tmp_tmp_msg_0_0.start_z_units = 251U;
    tmp_tmp_msg_0_0.end_z = 0.493358432334455;
    tmp_tmp_msg_0_0.end_z_units = 25U;
    tmp_tmp_msg_0_0.radius = 0.37512295625796077;
    tmp_tmp_msg_0_0.speed = 0.519218623758054;
    tmp_tmp_msg_0_0.speed_units = 137U;
    tmp_tmp_msg_0_0.custom.assign("BAAFODEUYSMKHWEHPHVTFENBJYYHXJIFQAQXTKTZOQFILLSZRRKGOJBDOONXXBZJBLNPVHBRGTZSGUPPEYUFWACJARDWMFFMNQUCGQGBWCRTZPPWDKVUKQXIYWXPTUTMAVXGCAHPLDVKKUADYICFWSE");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AlignmentState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.state = 63U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SmsRequest tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.req_id = 20679U;
    tmp_tmp_msg_0_2.destination.assign("RKASSPBKSXGYQWYEHUUEOAFPFMQAQEOBDHSATYIDFCDQIKHUKRFPAFJJLFNBKGTCXDZDWLEMZYAWRIUQZCJWRLLPNJRTCADZJBXKWTGGZHEXWNWGBGERNPIYDNXOQSFLTLUJPTXVNUCCZKOOD");
    tmp_tmp_msg_0_2.timeout = 0.034598158127769896;
    tmp_tmp_msg_0_2.sms_text.assign("KPYKSOQURWOMEPNBGUZFLCHNUCNMHSKRISAMDHXOHQRMABWYQRNSCQNWVITDJPPWJDIJZICHDTYJSXAKBNAPJOOFTGCJTRHZTBBCDGFAMNXYZVWYGNSRKYLEUHXXXSEMPKELWGRGKWQLFIURJIMWNGESXCLCIQZFTPZROZEVKAY");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::NavigationData tmp_msg_1;
    tmp_msg_1.bias_psi = 0.5045781283922901;
    tmp_msg_1.bias_r = 0.0189217591606039;
    tmp_msg_1.cog = 0.6615574629133387;
    tmp_msg_1.cyaw = 0.7588885462368058;
    tmp_msg_1.lbl_rej_level = 0.5804259299458554;
    tmp_msg_1.gps_rej_level = 0.905768897617593;
    tmp_msg_1.custom_x = 0.7285138130591584;
    tmp_msg_1.custom_y = 0.7075392570158034;
    tmp_msg_1.custom_z = 0.3180900865992168;
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
    msg.setTimeStamp(0.09646193851314888);
    msg.setSource(42302U);
    msg.setSourceEntity(152U);
    msg.setDestination(19866U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("ASLVJOSCTZIMWSJXTXGCETIGNXZOQBESHHZJSDSRAWVRVSURUIMDYQBCCDKYFMRWMZVIBVHTSTBN");
    msg.description.assign("LUEQPZILLXAITGJFPSWNNWADVRBJHHZKTOGCTUHLXDEVG");
    msg.vnamespace.assign("KBIXPSOUBAUYVVCSJLTDZSHXKATPHKTVZNHLGRECSWTUOQRZGHSIMKTIWBRMLZCR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BAGSACTFZGNMQKNQKSJOMVHWJRKIBTYWEYCTPVUIHCSFCAMHVXOESGVPFNAXSDLJXNJCIJUDVUDYMOPBWNGOHFDSLCEUPKKETQKODQLUHHELOQHWCSOWRQZZXJJQMBMRBGI");
    tmp_msg_0.value.assign("PIWCPDRZRURRLKAZYTLIXJACNYIWZTRGGICAGONRDQSINDWPKNVHVFBEBFBMQXLFFOKKGYJLPCQOIYSOUIYUNBTPW");
    tmp_msg_0.type = 137U;
    tmp_msg_0.access = 66U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZTIHCEBSPNNMFQFSJGIOBQPKSDXXNENHQWUOLVYXRZDLAIGSALQMHWICSXAMPWINZHWVJAKEIYECRASXOJCL");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("CJHYTOFAECAEEDQZFPLKXIYRPNFSJZYQYWXNKJGQPAIXULZWTVULNTDQGLAJDHDZCVQRGXBOBIRMFOWJSMGEPJON");
    tmp_msg_1.dest_man.assign("RQVFASGDGJLBNBQTYYFZUHHSWGETIWTOZEGMCCTLNQS");
    tmp_msg_1.conditions.assign("EXCEOTBRRDOYYQPNRWHSDHMGN");
    IMC::Pulse tmp_tmp_msg_1_0;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::EntityActivationState tmp_msg_2;
    tmp_msg_2.state = 23U;
    tmp_msg_2.error.assign("HMEXNUMWYQIIPTBFEXGTGBCDCSPTOSYUFMWKKWQHGJPXFQGNRGHNVQQWHZIMOPNOLHJQRSCBALDIZKEXROCZQRDCGTBTTFJVABNMYNHYYIICWYGYVKKOEUZKFDLZHJSIBJFYODKKMNTZFLDUAACLHRVHEPRMWJTVJXUPQXFAXVPSGCLLUBIR");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::LinkLatency tmp_msg_3;
    tmp_msg_3.value = 0.9480622368070781;
    tmp_msg_3.sys_src = 44009U;
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
    msg.setTimeStamp(0.24043194901218612);
    msg.setSource(32490U);
    msg.setSourceEntity(199U);
    msg.setDestination(14746U);
    msg.setDestinationEntity(85U);
    msg.maneuver_id.assign("NDALPTPSNZZBVIKHJYQJCICODXPQSBLSLUMPZJLQFGLQZHSODYYJLESOXEQOHRCMSTVNCMYYXURZFEGXKNOFXUNDTNMGKUYP");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.9227678134565399);
    msg.setSource(39394U);
    msg.setSourceEntity(58U);
    msg.setDestination(23832U);
    msg.setDestinationEntity(168U);
    msg.maneuver_id.assign("QUKLWHDYKWSSJNCJQKXMYBNMHANO");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("DESABHNVLVLKNPAT");
    tmp_msg_0.formation_name.assign("HSRJKPMNPPHCFIXKDUGETEHBKNSIZKEEOOWHSRBUKANZAIRBGCLADGWMBEVWJCXTAVHYJFZOOQCSODDYAWMCYDIZQSJYNOVDPUCDTARHRWSNOPHSFSPNZQBTSEIKVBYJYMRECNXXCAFYZVERVBRTFFQTWUOVVMOBQRFMQUFIAKQKNMKKILLNXPVQQIPBUHTIU");
    tmp_msg_0.plan_id.assign("YNGIXRPBCBVQWXXIWKCLFPXOBUIBOUBP");
    tmp_msg_0.description.assign("DNCONAFZMVZWZQCPUILSDBVRAEIFTXHRNKHVDIOKOKWUVUYVJFPHYNSMHIXZJTSPMBIL");
    tmp_msg_0.leader_speed = 0.9143505011444769;
    tmp_msg_0.leader_bank_lim = 0.19093054803348652;
    tmp_msg_0.pos_sim_err_lim = 0.6493629064418617;
    tmp_msg_0.pos_sim_err_wrn = 0.6457909618778718;
    tmp_msg_0.pos_sim_err_timeout = 41862U;
    tmp_msg_0.converg_max = 0.46048782892745865;
    tmp_msg_0.converg_timeout = 5468U;
    tmp_msg_0.comms_timeout = 20041U;
    tmp_msg_0.turb_lim = 0.24603197048823766;
    tmp_msg_0.custom.assign("TOCFSRJYIUOUGKECRAXQYFXGPRXQIZQJFFSEXNFLWNJDYBDVZLJIWUTAHPDPQBOTVMCZWJVWGEQALZPRBSUHDMVWIBLKFIEXTWRDKNMHOLXKZGGISPVJEBMVEWATJSXZWENQNSSQQNNUC");
    msg.data.set(tmp_msg_0);
    IMC::AcousticLink tmp_msg_1;
    tmp_msg_1.peer.assign("HSZBCZSQHUVMBZCUTIZDOMTFSUNPYMEQIUYDTCQBODQWYLWTJYDYQRMNASYGZZFKNVJAHYKHBNLGRTMSPPFQNNOKWVRJJLERMYHEWMQVRTUBLXCOMTPGXIQPAQ");
    tmp_msg_1.rssi = 0.6880036582791019;
    tmp_msg_1.integrity = 61675U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Pressure tmp_msg_2;
    tmp_msg_2.value = 0.5006209394859421;
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
    msg.setTimeStamp(0.4114571803072976);
    msg.setSource(51441U);
    msg.setSourceEntity(208U);
    msg.setDestination(32903U);
    msg.setDestinationEntity(25U);
    msg.maneuver_id.assign("XJGLCBNSXTCCQKOWMILGARKTCRFVAPWHAWFEWOCVVEORCWDBHDRPWJIJZQELEAOLNZQFOZYYKCZBFPIUSNHVVUJPARTQKIFBTSLJEUGVUKIZVUWRNXZTUOANPMTKEGPMFNZYQEUMVD");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 4313U;
    tmp_msg_0.lat = 0.8512151200400172;
    tmp_msg_0.lon = 0.002287754509263551;
    tmp_msg_0.z = 0.5601528073951554;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.speed = 0.011994720178121643;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.custom.assign("SAIBWQVXJMPMRNRLDGQYZMCZJYUARRXXHROVPFVPNBHYWIEVDWLWLHBAILMSZLGDGKXYEXFFZJMEOFEHYQXSTAGOHAWDBTIYPWBTEUONZAJXGETNNNPAFJUBLVVKBCTCJRXDDKCB");
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
    msg.setTimeStamp(0.8850711325488836);
    msg.setSource(12405U);
    msg.setSourceEntity(93U);
    msg.setDestination(41872U);
    msg.setDestinationEntity(74U);
    msg.source_man.assign("RZWYUBHRGVJRIFQQRALYGZGUWEIBLBVWNWDEHT");
    msg.dest_man.assign("MZDOZMGCIIAXRUXXWIFFCXZVDTNUKBYNQSCPDTZTWJCZGEISDULBGTVJFJVLMLXMZQZLFEPLFOCWASKQROMOPIMQZPRKOHHIBQFCKWYNQXYDBYPPFUECTUBJVSEKIPUYRWJSVYEDNTOHTPDOTAARGWQBTMRYEASEBFFVGUXMPLAEJGAWYKGCQXVOHPVNRHKLDNIKHNASW");
    msg.conditions.assign("JMIZPUZFGMKUFLWMIHEZENXMDXYSHKPLSBZWYXJRDRKJOHFMJXALQDGSMPTLSPKCSVXJLCLNZPGBYQKTOEOEBQUAENICAIFQOJCCRDRWNWQBZXTFSRDYOVGQUCZSUMPPFRTVIVAWDKAQNNYUIHNWMGCYFKIHKGLHXMTPGBWNTVBBAATHTVEDEUINELZHFDPBL");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 145U;
    tmp_msg_0.plan_id.assign("RGFVVWQEWSHBHUVHMLCPKRKXJZIHQYRNSPNRGRYOAPOFOIEFIGAUWFJUKDLADSCZBQ");
    tmp_msg_0.comm_level = 172U;
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
    msg.setTimeStamp(0.2890400249794738);
    msg.setSource(17731U);
    msg.setSourceEntity(84U);
    msg.setDestination(32313U);
    msg.setDestinationEntity(27U);
    msg.source_man.assign("PRUELMAFBXRARWQYAZNNFHGQVQNSKZHYMEUOEOTRJKBXFAMNGMYDPZTZHCVRWPHLCDUSXJNIILKEKFSCBVDCXZKPWDKSXEIIUTGKCYPTRPLBO");
    msg.dest_man.assign("SVPPWHTXHZSXFCXJKVEGAYQXKROLHWTADXHZDWHIZNJGEDCCVNOJMRWVRJYLJWTPYLSMYPULQQREDKIMTFQTROPSRHQVUVZBNXGJDALGYXKDBXFFMBBNKSEEFZGVNUSEKUZMVFATNCLSEHKIYPONHCOPEOCHYBZNMILGOGWQKOUVSNKLUUPDZCNIJGCUPTELCITJGOZABWRBMTQYYZAAGFMPBIRERUQ");
    msg.conditions.assign("ZNEJBWAXFLGBKHCCOULORZUJUYKKIZGMBRHDHSMXEPXOTISDAYETYLQBVZLJFDPGUKFQCCSVBGBYWUTDMNDWFM");

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
    msg.setTimeStamp(0.25624769873657605);
    msg.setSource(42260U);
    msg.setSourceEntity(181U);
    msg.setDestination(37322U);
    msg.setDestinationEntity(158U);
    msg.source_man.assign("YCGFGJGKAVLALNHYMABKNHNMTVXXDRLVMUKDIVYISQRRPOFFQZGWKACGOLFIZZPSRYHTKRXEIQHBSHZAKUCWXFIMPMMQHCYBWTCCYBESKVPRAORIIJOKXDTJCPRPDYEJTOEDQHWEVAXGTZWJQAPXLZMCFWSZHADMVVZSMQUENUUBRVSYWPO");
    msg.dest_man.assign("MJPQKGTOSCNRISHBURIEQLTBEOLCRYRNTFOOUZUHVCMYXWFNEZJXYQKQBRKFVGMHISHHJADRWAWUPVJQBAWMQMNXBDZLGTYPJPVWTJULJCNCFFNBXTLZAFLDEJZOEDVGAXOVDTUKHNTWUSRKNBDTOGIPYIHGULAJMEIBGACYIICSFNDZSBZWWMHVJZFPWOCRWOZNUMVSYQPYDFIAIXLMBGGFAKQKLSPYLSPKPZKYCCRXGMUHHQEVOKXEXR");
    msg.conditions.assign("DHFCTOYRLQAJCVCVXJVKQQCTVVJCKJBHZIHMESCYWOPZBZZHFPRGNCEYPWZKHBTA");
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.858713257555874;
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
    msg.setTimeStamp(0.7992422459445411);
    msg.setSource(43006U);
    msg.setSourceEntity(57U);
    msg.setDestination(17610U);
    msg.setDestinationEntity(149U);
    msg.command = 249U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MCJYUTGXKPRGPZLGRL");
    tmp_msg_0.description.assign("JSBDUYCJPPLMPSXOPHQHORSSHMAKFIXKFUNWDORGROTARXVABMPIDDITAFEEBFHKBADOMSHLKOGRZADUXZLWILJBSVSVZLFMMZFUYGNLFTCXWYFNKYEGIUMPDZLVEONSQ");
    tmp_msg_0.vnamespace.assign("KCBOSAWFKVJUNIQPNGIDWFCRRYZWDQDORXMTANOXRPHEBWVNILHRNKZUAGUMOPMDACWFIC");
    tmp_msg_0.start_man_id.assign("GCAFVVCSBNNKRLLMHXEMUQRZLNAKEMEJOKISPSWMVVVYYWABAUPFGGFKZNWLHCTXLXJAMWDZWIUSCSYADMPANYQYYZKOHMRLJBUGYQZGJCHWUDQRCKUJSJNNOKXGNGDLZFCFWGRQIDJFVDTQJPGLSIJYMPXZRTIBBUOLGPOIEQODUTBOBBEFPOAXHERPPTXZAPHDOTVSEHRIIWVTKWQAMQCUIHODFQV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("OKZPYISJXGAXULDLVSXDKJXDZORJBYGQMTQKILHPIIMFGYZDSRCYQRMAQCOXQWWWUBHEBCCVUESEFLVXDSYZJRHRXQMFOQWBIVLGHTGCNPKMZGHMJCYNTVHUFIKYBDLNDXZTREKGNLWOGJFFTARGUBXVMACIIAEBYFWBWOSCEFZPMNJIDLJNAABVZDELDVKHOPPKPEPJRLYXTAPIVFNQBTOCGHZSYQCFNHNQSKOT");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.duration = 30091U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NDWOLIJSPXSZPDXPMASJUNBZYLPAEZEHHCRRVHWVGGWWUXCMILPTVDOUOXLCBGVKTMEFPYZXASEFVB");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Chlorophyll tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.7563678135215769;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BDVZORIMCOUIPYTDEKZKOARJXZPIQYFNELLKGFQHYGIHCPUINVEFUXFMAVMZABOSEBSITAXEYWTBLLQYHSMPNZMNHZD");
    tmp_tmp_msg_0_1.dest_man.assign("MOTRPJEKBZMSGAJNPDJPNESLXCJLBDWMHOFLGJJQD");
    tmp_tmp_msg_0_1.conditions.assign("LFBGHNFGLFZPVCOWPJJAICYYYUOFNKEXGUVHEVRSOYMWRUKN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LowLevelControl tmp_tmp_msg_0_2;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.5045120277064393;
    tmp_tmp_tmp_msg_0_2_0.speed_units = 22U;
    tmp_tmp_msg_0_2.control.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.duration = 30810U;
    tmp_tmp_msg_0_2.custom.assign("KPPGSBUIVRKMBOANDLPJTGARJDCOZUOIQPTQGHRFXNBYNIIBHNALAHBMSEMHZLQOTVXOSXCKCGRDTHERYQJNGQTSINZDYXYXJMVAAMEBLGE");
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
    msg.setTimeStamp(0.6400538574619398);
    msg.setSource(32832U);
    msg.setSourceEntity(64U);
    msg.setDestination(46248U);
    msg.setDestinationEntity(60U);
    msg.command = 34U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NHPELRHLSUYTUXYYEACPNJTUDJRMCDBLQFMK");
    tmp_msg_0.description.assign("GWDETUNKHJEZJVGAAQUMIFJGHBPHJAILBSPAYSYGRFVNMSRDVYZFLVOZEWODIVDBDXBHNMPKROCDNRDNRYMCDWGPRMBJACMBLTQSHIXQMASISKNKZITQSWGYAFTTIEBJGYUFMMLUGWFAUGJCITEHZYUYTETJKBCHCKKJW");
    tmp_msg_0.vnamespace.assign("MGJXHTZKDFMJZHRBZRQBDVVPMRYLJINXIGLKFQTACAXFONYTRBBPA");
    tmp_msg_0.start_man_id.assign("CYABVWXOMLHDAOEVVICLLQUYTXGFKLFAQZHVADGTWUYSUMOFEGGQZZBWOECRIQPJTRUBFSNQQRDRD");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("PAMNUMSPWEFZRMVKGDESDHOGMHYFQNTEVAOOQCMVUWPNYBIJEDSCCFILVLPHTKLBMAITBKTMOKDWWMFRAVAWUHJBUPZJNLSVJCFGBNGRBJUYJYXFKIGLLYGPVVJYWKKRCJSEQKSDHSBZRBRHEOMTQCQDTPCNRWYIWHQLHIUCQYPRIEFQDKURMJTVDIIQZPTTVGAQNYZSWWPUKOCYBXOTXSZLNXHZZN");
    IMC::Goto tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 42674U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3239196211561972;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8984733593405756;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7766399634166149;
    tmp_tmp_tmp_msg_0_0_0.z_units = 18U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.9657194998908877;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 192U;
    tmp_tmp_tmp_msg_0_0_0.roll = 0.06299745254761269;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.7199297639480019;
    tmp_tmp_tmp_msg_0_0_0.yaw = 0.3381299274427466;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DQQXDCHQJEISSYINYOYGFDABECGJRHCPKUNNLEYPTZVWVINHIURCAWGAOBVQTCPXIYABTVEFYLWXRHBCRMDBDAKHETOLLLEMTCYQGCMLRZJLRMFBSQKTTJDBOPYWUZZZMFPNHTKNXATSQACKJYPJIZMFBKWEXJPNNMGGZAKPHRHLHXRGRSSKSDITOCUSXGVZEVNDPDHASOFEXVLFUXQBLOJUOIFJVWUKDWEMPQOZVNSVMOGM");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::IridiumTxStatus tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.req_id = 38383U;
    tmp_tmp_tmp_msg_0_0_1.status = 53U;
    tmp_tmp_tmp_msg_0_0_1.text.assign("RSKWDLKOJJBBYMZMDYNWSAPBBHECWUTSRFHKZNCRPUELZKTUQQTXIHLPEUOVJQMXIORKBYIOQBUXJHAWGRPTAGALLWZJII");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JYLIIWYQMUFMPTSUXBASWRJGZYXCYZDKSMQJGNAPJCMKKCOLAIFRGLQYMAUC");
    tmp_tmp_msg_0_1.dest_man.assign("UWBPMPKHGMSBZIKRLJMGPZVBGXAGLTNQRDCGSWFDDLAERGKXGFSVAVWQUHIVFNKHUNJHITKZTMXATOH");
    tmp_tmp_msg_0_1.conditions.assign("SXNVCXLAGSHPGAHIRSFZDVEJZMMYLQOKQIUEUKJBCRNTOZXIHJQBHRNVTRLXGFCQWSDWEACOADMSTFBETHDUBSKQPGHHNMIFCOVLTOVIX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::EulerAngles tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.9191729405872948;
    tmp_tmp_msg_0_2.phi = 0.5309890634959095;
    tmp_tmp_msg_0_2.theta = 0.34559037124959147;
    tmp_tmp_msg_0_2.psi = 0.7562247854450099;
    tmp_tmp_msg_0_2.psi_magnetic = 0.48269913081384963;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::AutonomousSection tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.8104938085683437;
    tmp_tmp_msg_0_3.lon = 0.6013007114485455;
    tmp_tmp_msg_0_3.speed = 0.3079927783019121;
    tmp_tmp_msg_0_3.speed_units = 175U;
    tmp_tmp_msg_0_3.limits = 201U;
    tmp_tmp_msg_0_3.max_depth = 0.3753832409848302;
    tmp_tmp_msg_0_3.min_alt = 0.8160846359467752;
    tmp_tmp_msg_0_3.time_limit = 0.8778846764418085;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.lat = 0.9395070878726961;
    tmp_tmp_tmp_msg_0_3_0.lon = 0.2489172374427676;
    tmp_tmp_msg_0_3.area_limits.push_back(tmp_tmp_tmp_msg_0_3_0);
    tmp_tmp_msg_0_3.controller.assign("XZQEHLJBMCMFTPGAZSLXURWOAKBBNYRUFXNDHSIRSXKNRUYDUSSCWCBELTVAJEVPHGQIYEJDLBHDIWAMVCOXOCIOBJCRTZPWUSLNCNGCDLNYZVFMZZXTTOOIJIYONZMJSDKVEVCODKHDLMXYYZPPIGGBKAGAFXMTHBXQYQLTVQWHURJNGMWKQDWYLJFOTFSPYEQQESPABCFNPQFUGIUFBPGWKJGTSMKRRLVHOIIRWAVDZEW");
    tmp_tmp_msg_0_3.custom.assign("VMTVFNYOGVECNKDBHBEOGCUJWAMTSZBJXASSIGNCWDUTNSQXEJKXQIMLRYSPNIOFROFNTUPGGCFVLDQTPWLCNJSCQLEDUDWDFLGWAUYCKBXVNIPTHJHQ");
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
    msg.setTimeStamp(0.9178188045039514);
    msg.setSource(41462U);
    msg.setSourceEntity(171U);
    msg.setDestination(36356U);
    msg.setDestinationEntity(0U);
    msg.command = 22U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YQZIEHTHPUYRNXHCSSIOLMMGBSWBYAFONFLTDIQPJLEMBDLCIJLFGWQPGFHSTBLRWZVMUAKSABLGLKVPKKFOFEXRUAPNCCEEERMZDPSBQQNNCOYOXWJKUXYIRWZQ");
    tmp_msg_0.description.assign("ABSYISTLGGJWBDEJBONHZFTUBGRAHODZHEQHMXIOGOWBEBHDUEISPTFAI");
    tmp_msg_0.vnamespace.assign("ZQDAOVRVFEDZMYVTOZOJPIETNGSZLYFGTRLEOQLHIXOJGCYMPAHAGBJYYNR");
    tmp_msg_0.start_man_id.assign("AKXBLONUJKRJPPDTKIRVRMXXCFNPCUIVLSIXTEVZFZUWMAQQCLMXYNDSVVAZYPCAKMDOZTLOIKYUHYEPBEHEZWOHGCWYHOAVSBFOQUGQOJAVTJXENBGVFFMGWIHKYKJDOXZENPIIUDFLYREERSJUB");
    IMC::EntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QJETACULVXKGWXAQGXZRXUPBIWEDDDFTYJJETIEIZNARDSZOXOBQNEVTXRZFCSBKYRCPATTMMMCJMGKKNPRSVEKTGWIOUXIJGJRDYWSJGWOBFDHLPMMDCYLWLYHORDFXUHGKFIJHQUOYQFLRHDJBEKDNIBTZAVWLKVSAIIBFORBULUCEELMZVMXNNYMNQHVVXUYUKQSJWWPFIOVLSPBCECAGCNZTGFBSSPH");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("RFBYPGUBHJVYWJVEONSMANASKSUFKAMVODLPXYMJNWFCKDDRXWRQNIEYYLXMQHUJAHWVIXMXQORPPWTPILDJGBJAAQLXFGRHAELTQGCZMWTBKAMIXTOTSQGZQTHKRZYIVNDPVCTHXORJCULEBCPEESBHJFDIZOUEFTDVOPSCNPOC");
    tmp_tmp_tmp_msg_0_0_0.value.assign("QHFVRZYLFTLHRMEWDDETIRSUESSHMODUESHTQICRUGXVLVKIHWXELDKGDUMYAFOIPKPFARCNXSDOPBYGPVWOJOCFWZZUMJYNNWQFVNAHYPNIQTZSGMOXPDXAVABCIYJKQZQMUVFAISTGRKZZWLABXQCZKULFSXLVJEECRNOSJIXFGKRWEAHJ");
    tmp_tmp_msg_0_0.params.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::AcousticSystemsQuery tmp_tmp_msg_0_1;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.35832700273422025);
    msg.setSource(8730U);
    msg.setSourceEntity(92U);
    msg.setDestination(26299U);
    msg.setDestinationEntity(70U);
    msg.state = 146U;
    msg.plan_id.assign("ADFTSPWMNMJGFIYIRJRQWNDGKOAUGYCVLMREZARSSBXXBNPZMFDASKRMYAPGHDLWWDBTLGICPGGBLSWHGETOQEJKVOHUXVWCYFYDLBWDIABQLHCHCSRSFQCXEOOFXMXLMUPWTENLOXHJIHCENVRUBRQJMCZAFUQPIIVUVEGUBEETYBSHTNGSDTJTZOFFYJWKNZRDXIAKZJZPPDUTVOANUAIQKTFQYHWZNOKKQM");
    msg.comm_level = 163U;

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
    msg.setTimeStamp(0.059635746536901735);
    msg.setSource(36558U);
    msg.setSourceEntity(104U);
    msg.setDestination(18286U);
    msg.setDestinationEntity(100U);
    msg.state = 202U;
    msg.plan_id.assign("DEPIKEPLPWOCDTELPSOIXUDTHBUVBMFCVKAXBHHJLFDAZHABZVEISKZUFFYPGNSTDYQFWFMSCNBSXPANLSCJZISZYKJHTCNZXZMDQTB");
    msg.comm_level = 205U;

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
    msg.setTimeStamp(0.9526960321894721);
    msg.setSource(46757U);
    msg.setSourceEntity(145U);
    msg.setDestination(1535U);
    msg.setDestinationEntity(182U);
    msg.state = 132U;
    msg.plan_id.assign("GNBYHMWIWFMTSGGGJWUXAXSWBTBNYKORMOZPXIIFYPLVTPNRZFNIVEYWFGXABGJMWIMOHCIEACYGSCZJDEEEGSDXVEJAXVELDMUJBHJDRZECSMHE");
    msg.comm_level = 100U;

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
    msg.setTimeStamp(0.9531941764823272);
    msg.setSource(15372U);
    msg.setSourceEntity(197U);
    msg.setDestination(13324U);
    msg.setDestinationEntity(51U);
    msg.type = 248U;
    msg.op = 37U;
    msg.request_id = 31612U;
    msg.plan_id.assign("EUYJIQRVGSJKRMVUKSAXUGWBATOBLDEZOURKZKHGVVAXAIVGLUPLMCNSSOWFRPFEDBCCQ");
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 90U;
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YXDJZJHCTGYCLAIVIJTPWVBETGEXVLBNJQJURKNMNXNUHPO");
    tmp_tmp_msg_0_0.lat = 0.46799616424661616;
    tmp_tmp_msg_0_0.lon = 0.25522880488809707;
    tmp_tmp_msg_0_0.z = 0.7808413830779111;
    tmp_tmp_msg_0_0.z_units = 241U;
    tmp_msg_0.modems.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TMBPYYHRCYUFUFHBHTVXFEJBSGNXMOANSVZJCBESIFXAEQUDDABUJPVTIPXZTIRDMKWZQQTUHJSKFRVXLPAAQXWTWOBIDCLPNLDZKIWIJNYWJYFPAEWXEQLRDMLHMYGGOPKHVNNUFLHGZGEVOZRHJRVPRWALPECVBOQKOYYZWJUYDWWUKIOGXCCHMTQLRIERIJDCVOUKCMACTAMZCIDKKBSTXQNBZSNBGOQG");

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
    msg.setTimeStamp(0.19347770228840122);
    msg.setSource(51902U);
    msg.setSourceEntity(236U);
    msg.setDestination(12815U);
    msg.setDestinationEntity(124U);
    msg.type = 118U;
    msg.op = 20U;
    msg.request_id = 27271U;
    msg.plan_id.assign("PZMIZCGOTCVQNOZSRPCYYIWMWCCWIOEEGUFIMETPHLGQAHHBNMYMKDDSCVQHLHBRNPLKZNYGILHDMYUOLXJSKSRUZXVTMXBZFXWW");
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("XIFHBBOYCNSLVOJEMFHUWHYOBBTYGSOPERQITJVDPQGNDRBZYWPQGMQXENEUSPZJRRDYHESSGNXVTRDBJPZNSAPYDEXSJUOQNNUHKUFDCUILZQMYQHZCFYLPGXBRBUMKFNJIDZKODSEBRLWSZVJATJKZOJAWLVLATTRLYXMBTKCTFWCJAOVSWTVPEHYTADVAIKLCEXCGRPKVHGFCHARMLMCQZFIKCXANEAIFMOX");
    tmp_msg_0.action = 185U;
    tmp_msg_0.grouplist.assign("ZTODXURQMNYUGYYQNQFIHMFSGACAECUNROMWITWZHSJEMTSBJHNBPRDXMSQHUWBDPJXZOHUVEIMLVYKLJZAFYOEULCFLHKT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ECNHWFVHMSYTSAQRJMZZEPNSEIMWOZGBRKWHSVUOOXCVLTRBIFCHTXNKGXWXCJUESQGAPNIGIDYAFPPLQHOXRQVUPJECVYSKOHBTDNBDNTUPHKQAKTYIZXHYQLEAKIGDBFDYHBQP");

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
    msg.setTimeStamp(0.09420951064668259);
    msg.setSource(52902U);
    msg.setSourceEntity(5U);
    msg.setDestination(2023U);
    msg.setDestinationEntity(227U);
    msg.type = 86U;
    msg.op = 82U;
    msg.request_id = 13087U;
    msg.plan_id.assign("EQUQUXFFVLDMODGQGKPOIFTGQRHTNHFIBAJDORWHVPHTKDXEXZOPCZOZAVNHMJLCETSXCJZWUVZGXAPMKRRMEPMQTVBQZMYSCRIIBUCDDHDLGANSOJOVIVGDNFYSFLMQKFYHPPJQZJUSCQQGRLP");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("PIIWSVFMCRBTRXFPHYBINZOAZREGHZKCECNQSDXYCSKTQCGAWIGMDYAUVLIUPLGDODQSAWZRAXTHQKBJXKFPNBDNZHIN");
    tmp_msg_0.links = 3457478156U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WDOSIATRBYSNMAUQPSYBZQAHVALGEYANC");

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
    msg.setTimeStamp(0.17503239106949975);
    msg.setSource(64624U);
    msg.setSourceEntity(80U);
    msg.setDestination(37488U);
    msg.setDestinationEntity(123U);
    msg.plan_count = 16536U;
    msg.plan_size = 1055823342U;
    msg.change_time = 0.7393239703438729;
    msg.change_sid = 58103U;
    msg.change_sname.assign("ZYOMEDJIYVBLNTD");
    const signed char tmp_msg_0[] = {-48, -102, -68, 59, 63, 18, -85, -17, 119, 93, 83, 12, -89, 121, -43, -93, -77, -121, -5, -23, -3, 40, 100, -92, -93, -28, -1, -40, 4, 112, -2, -77, 99, 97, -116, 95, -120, -51, -34, 25, 3, -57, 59, 72, 6, -122, 26, -116, 4};
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
    msg.setTimeStamp(0.5150968447669959);
    msg.setSource(755U);
    msg.setSourceEntity(5U);
    msg.setDestination(61534U);
    msg.setDestinationEntity(161U);
    msg.plan_count = 40481U;
    msg.plan_size = 1603973136U;
    msg.change_time = 0.8951777931492998;
    msg.change_sid = 44884U;
    msg.change_sname.assign("CXVEVTKVJLZSEAUARYFMJIGD");
    const signed char tmp_msg_0[] = {98, -122, -4, -52, 83, 5, 37, 123, -19, -108, 7, -71, -86, -108, -124, -106, 17, 73, 106, 34, -122, -66, -4, 23, -76, 22, 98, -80, -118, 29, 32, -91, -111, 101, -9, -83, -36, -114, 68, 11, 96, -108, -117, -50, 39, -95, -95, -14, -85, 86, -128, 35, -104, 53, 23, 72, -37, 68, -58, 11, 61, 98, 115, 74, 49, -88, -27, -3, -114, -92, -44, 13, 9, 113, 34, 89, -108, 5, 39, -59, -67, 21, -16, -121, 73, -18, 66, 67, 125, -117, 1, 3, 59, 68, 26, -25, 126, -24, -81, -124, 88, 38, -127, -40, -107, 5, 69, -44, -13, 81, 76, 40, -25, -34, 20, 78, -88, 117, 55, 115, -61, 57, -64, 39, -13, 59, 116, -4, -73, -89, 73, -39, 48, 105, -27, 122, 115, 21, -96, -43, -114, -58, -74, 115, 58, 14, 120, -1, -12, 30, -55, 71, -92, 55, 60, -54, -42, -67, -52, 125, -126, -20, -119, 20, 126, -22, -67, -21, -2, -113, 92, -87, 88, 49, 72, -9, -113, -93, 103, -63, 113, -74, -45, 85, 24, 43, -107, 60, -11, 1, -35, 76, 120, -7, 111, 106, -94, -45, -58, -79, 94, -62, 60, 20, 37, 52, 105, 113, -38, 19, 103, -22, 22, 111, 67, -68, 52, 27, -125, -42, 89, 14, 69, -28, 84, 21, 82, -17, 38, 72, 5, -27, -59, -111, 107, 12, -127, -7, -28, 76, -91, 42, 116, 43, 55, -61, 45, -87, 106, 10};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GTUSYGYQPFHIZXASWTYFKTUVWHFGRRXFCCXQIKODHBSOJWVGRAKLPSYCQRCAXTACDCLXMB");
    tmp_msg_1.plan_size = 50976U;
    tmp_msg_1.change_time = 0.003188519262734446;
    tmp_msg_1.change_sid = 52990U;
    tmp_msg_1.change_sname.assign("EBALSUMUTPAKCNJAFDNKVTMLKGHLFNORHPLGBTVVNDTMXCVPNJFSRYEKWHRMNKPBLBCXJXXQVUJWKNEQJPDYEBZAUFZZHIODDNIIHZQMRJSZFLKQTDYUEZWHZTODBXVUORIIGSRYXJPMHPBJDFEWOGRPLVFHZSIOBGEYLWOYOCHTZQPKIECFOEWYGCYJVGAXWVYMGSQMUMUYXRICQFGRUVCAQRZSSPMNAWXIC");
    const signed char tmp_tmp_msg_1_0[] = {92, 76, 62, 86, -80, -35, 34, -5, 16, -26, 116, -12, -114, 86, 33, 4, 119, -21, -44, -59, 27, 109, -40, 33, -64, -46, -102, -101, 79, 50, -1, 22, -59, -118, -5, 31, 109, 34, -116, 0, -27, -23, -31, -62, 85, 28, 30, 24, 121, -100, -111, -71, 109, -95, -119, 37, -34, -46, -94, 82, -109, -118, 76, -40, 70, -126, 79, -97, 87, 99, 116, -43, 104, -45, 44, -72, 38, -71, 62, 8, -102, -80, 69, -2, -108, 77, -111, -96, -53, 125, 37, -119, -77, -69, 0, 62, 116, 90, 93, 6, 85, 27, 11, 81, 11, -98, -56, -52, 32, -35, -3, 3, -40, 104, -9, 12, 90, 19, 92, 56, 12, -53, -15, -83, 64, 54, -123, -2, 125, -100, 116, -32, -49, -111, -60, 10, 39, -69, 100, 125, 73, 49};
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
    msg.setTimeStamp(0.9882535730971695);
    msg.setSource(14130U);
    msg.setSourceEntity(114U);
    msg.setDestination(50964U);
    msg.setDestinationEntity(79U);
    msg.plan_count = 27625U;
    msg.plan_size = 1481845605U;
    msg.change_time = 0.09130885376770737;
    msg.change_sid = 50956U;
    msg.change_sname.assign("APBYDLDDFV");
    const signed char tmp_msg_0[] = {-3, 96, 76, -23, -19, -12, -44, 60, 20, -86, -74, -121, 52, 115, 117, 38, -24, -128, 73, -78, 81, 9, -53, -97, 75, 39, 11, 56, 13, 11, -60, -115, -1, 40, -71, -54, 49, -62, 4, 103, -39, -121, 77, 16, 73, -60, 65, -14, 34, -118, -113, -20, -16, 110, 121, -66, 115, -51, -34, 97, 28, -30, 100, -47, -9, -112, 14, -126, -21, -115, 20, -31, -116, -37, -98, -18, -93, -81, -113, 14, -97, 14, 118, -64, 2, 36, -27, 39, -99, -90, -93, -128, 70, 61, 24, -91, -69, 84, -85, 109, 54, -89, -98, 11, -76, 36, 90, 91, -53, -10, 42, -65, -46, 48, -83, 52, 45, 88, -46, -21, -23, -40, -74, 26, -72, 103, 98, 60, 6, -48, 2, 8, 6, 5, -72, 0, -124, -12, 29, -96, -77, 98, 52, -56, 75, -11, 76, -14, 19, 27, 75, 82, -42, -7, -61, -14, -22, -111, 73, 4, -15, -74, 43, 36, 115, 99, -69, 100, 65, 69, -105, 90, 29, 21, 32, -30, -17, 82, -3, 70, 52, 89, 101, 97, 83, 103, -49, -25, 104, -128, 0, -39, -88, 57, 112, 89, 55, 117, 96, 72};
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
    msg.setTimeStamp(0.6583131611375664);
    msg.setSource(13089U);
    msg.setSourceEntity(123U);
    msg.setDestination(54280U);
    msg.setDestinationEntity(28U);
    msg.plan_id.assign("WTZHJMFNYSSTWZQWDYBNEDHENIPTMURABPMXKPPVGLFOFFKJXSXNIDWBMXDWIQSGDJZHSNYGQQAVBIZBCLWAQIZWFGJJBFEIJDLCZKNOMTFMUQVRWNULIZVAZPVETYNERZUVXOCKFCYRXA");
    msg.plan_size = 13702U;
    msg.change_time = 0.49280000240961896;
    msg.change_sid = 55151U;
    msg.change_sname.assign("LFBOFGSMWWOWLZPQMDIEYSAFWNJTAUKPLBPHVRDPOVQVRWXESMZZEJKYEYMAIGQLMDSHHCMUFCUNMJKNHYJQIXGCPWXSXBOQEIBXODXOEAYBZZDTZHNRKAJAOTIKWBRETGIHGTEUYLPNFOGNVITJQLDQOZMMSCANBZGYJ");
    const signed char tmp_msg_0[] = {-110, -27, 101, -52, 16, 104, 101, -38, 75, 9, 48, -65, 93, -27, 120, -15, 24, 4, 27, -120, 71, -112, 89, -81, 40, -46, -125, 73, -15, -33, 112, 120, 100, 10, -6, -33, 102, 25, -111, 55, -52, 28, 109, -54, 98, -34, -64, -114, -127, 42, -16, -73, 16, -5, 120, 70, -58, 23, 22, -100, -10, -86, 5, 43, -16, 73, 103, 113, -123, 11, 34, -72, -93, -6, 8, 29, -119, -26, -1, -84, 40, -45, 113, -97, 113, -119, 44, 57, -123, -67, 15, -1, 97, 7, 79, 77, 44, -54, -32, 92, 94, 59, -123, 53, -117, -126, -66, -97, 114, 58, 51, -98, 69, 68, 99, -116, 65, -81, -29, -41, -112, 68, -31, -53, 101, -59, 55, -111, -100, -116, -62, 114, 122, -102, 69, 60, 4, -6, -38, 109, 94, 62, -64, 72, 38, 103, -85, -101, 82, -71, 85, -32, 57, -90, -83, 40, 53, -110, 126, -61, 87, 88, 75, -64, -87, -49, -68, 74, 82, -119, -106, 59, -71, -100, -38, 6, 45, -40, -110, 47, 55, -95, 14, -8, 53, 102, -57, -104, -47, -67, -98, 7, -77, -51, -48, 46, -107, 113, -52, 36, 59, 32, -85, -123, 16, 54, -61, -27, -42, -54, 92, 108};
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
    msg.setTimeStamp(0.13435619764139062);
    msg.setSource(51406U);
    msg.setSourceEntity(206U);
    msg.setDestination(13061U);
    msg.setDestinationEntity(81U);
    msg.plan_id.assign("ZRYNTHKJJOLRUVQBDUADZOKIPASKURHNECDXNVUNWOKQEWGRRNDEWYSCFLXKQBDEBSDMHHKSJJBOILYJMCQVMUFLGGYFAALPAMTFZEGLXLHUNAYCJTQPAYWCJDQVIBOABGBJKPFOMCRLYXWIIBOYHYSVXFDTOPTBNUTPXG");
    msg.plan_size = 76U;
    msg.change_time = 0.2715257476253776;
    msg.change_sid = 32151U;
    msg.change_sname.assign("QFEMTEXLAAALAAOGQWFWCAZPZSJMMXQPWJXDWPCCCIRNKKTRDIFNUXLZKHRNBHSYJBGOBZOHHFMRBSXHKISOBUKODERGZVUEPYMYDSYUKJLHYNIZVEIUYSHTJIYICSJEEJZJQFIOBVXGHKPXANWUMLPPPMFNVYGZVVFDTSBULTMLTTNRDBUZCFJLPWNBQXKLIEPXTCBSGKAGVCYQVNFEWAROWZTSLRVXJQCVDGQERODGUHMDGHAW");
    const signed char tmp_msg_0[] = {72, -103, 55, -53, 18, -47, -103, -96, 104, 16, -92, -40, -54, -21, -12, 52, 82, -73, 90, 14, -96, -98, -103, 45, -122, 107, -1, 49, -97, 15, -104, 68, 35, 90, 61, 75, 34, -83, -13, -107, -125, -68, -32, 22, -30, -31, 122, -108, -45, -46, -7, -117, -18, 40, 53, -111, 34, -66, 85, 31, -29, 90, -114, -104, 36, 64, 62, 67, 55, 42, -91, -75, -27, -123, -48, -92, 53, -90, 54, 100, 17, -127, -103, -80, -68, -67, 83, 121, 104, -61, -75, -59, 48, 1, 8, 42, -109, -11, -46, -92, 26, -5, -118, 33, -92, 78, -86, -112, 90, -120, 31, -107, 94};
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
    msg.setTimeStamp(0.2033282067507005);
    msg.setSource(27355U);
    msg.setSourceEntity(173U);
    msg.setDestination(22057U);
    msg.setDestinationEntity(191U);
    msg.plan_id.assign("YYNQIQSAOOVMKUZKVWCMDNBFFEWVXOKBQQXMEASUJNSASHQHXWZDZYVWWEJMGHYIVUZTMBBUDAMVRJFAZCSHTHIFBYGGLMYPNARRCPCGZRWIXWLTUPRHJBLVLXKOKLYAJDBBTNQITNGKAUCHRFPNNEESTDRETKIMIMCIADCVOQJJTFSVLZPNOGEIHCPYRHUQRWXZXESPFNTPYEW");
    msg.plan_size = 32801U;
    msg.change_time = 0.5874451545983427;
    msg.change_sid = 8992U;
    msg.change_sname.assign("KALYZEXMRJIFVXRYYDSPGVUHQFMBSWUMVLATDHAOUPGBFHKYBLXSGGCLWAEPMHQJNFYQZTNARIKXADOOYHNRCJNGRSRWCCRGCQMLQJODAOTKTWRVCPTVBBXPNBIDNYIFLGQQYVIHSCNVUHQLDEZKVPZGEIPWMJBPMZJGEHBKSTOJKFAEIAFOTUNNWSYHQJWATWTDBBLOVWEXXFMHEUDZC");
    const signed char tmp_msg_0[] = {9, 27, 55, 106, 10, -82, 7, 126, 9, 82, 93, -101, 102, 17, -67, 26, 42, 106, -63, -111, -89, 11, 31, 71, 99, -31, 90, -7, 9, 122, 104, -105, 75, -60, -38, 58, -125, 125, 26, -83, 125, -40, 88, 89, 6, 125, 16, 33, 118, -112, 81, 70, 121, -117, 75, -118, -80, 87, -49, 43, -122, 18, -48, 25, 89, -51, 104, -113};
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
    msg.setTimeStamp(0.9367053602095847);
    msg.setSource(22518U);
    msg.setSourceEntity(5U);
    msg.setDestination(42106U);
    msg.setDestinationEntity(12U);
    msg.type = 53U;
    msg.op = 3U;
    msg.request_id = 22565U;
    msg.plan_id.assign("LRBKCPTSTDWWBKSCTVUZNWECBTEJKQVCEHHPRZDXXVQIYTOERFYUQKRLTLPJNDAAVV");
    msg.flags = 46370U;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 3253513089U;
    tmp_msg_0.messages.assign("YCXCFQRHQGWBTPDMZRXOJDEDUBXMGHYTLSLKEUIBTUAWNOTXRTNKAGPAAMIGWYWBXJWDROIEOHRBLUSZXTVCLDCJBBMURYQFQDCVOCOVNPIJTKSHNPNMBKSHVMLMQEGGR");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JSAXRSMOZCSYTANAAQXWEUFSOQKJVBIGEBJVGYBLMGRHKUWVPQJISFWUNGIRASNAFUPCDFWXJZMYPOTVNPUQLBZORRMOJHXPFAZOLANKIICYTNUYXXVBITGXKWEGGMTLGVVODKDXCEHHFZXROYUELRWPNMWPOTVIHTDCMCKEBWELL");

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
    msg.setTimeStamp(0.017844081561203207);
    msg.setSource(8378U);
    msg.setSourceEntity(91U);
    msg.setDestination(64397U);
    msg.setDestinationEntity(231U);
    msg.type = 108U;
    msg.op = 218U;
    msg.request_id = 12222U;
    msg.plan_id.assign("ADLEZBNHKQAHRWJPOBGZBWMDQYOVWWMINBKQCRNWHINZGHZQIKLXZVSPQRLXSJLRJICVPHCJSTCPTKSTLDCEQUQELPEDDRRDGSVFDNEPXYAGMQIVRMDSJJNBEVSSXNYUYHTUEXYYAGJKBOZANAXROYVATG");
    msg.flags = 4804U;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("FTVPBJXBDSCEJUNJCZRINSWTEIVYGWVHRTYC");
    tmp_msg_0.lat = 0.736921301707679;
    tmp_msg_0.lon = 0.8180738640255226;
    tmp_msg_0.z_units = 55U;
    tmp_msg_0.z = 0.9883710209031952;
    tmp_msg_0.accuracy = 0.15746619342141865;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UAGGZJAJEYDYBFDFUKYLXDAIBNMOGCIECGUIQMCVQFLQRVEMBBEDTBPIPARVJMVWVKNOIDYXPSSHEWZVUWOHRXX");

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
    msg.setTimeStamp(0.5985578960374526);
    msg.setSource(47121U);
    msg.setSourceEntity(245U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(86U);
    msg.type = 31U;
    msg.op = 131U;
    msg.request_id = 35729U;
    msg.plan_id.assign("DLHNYPTFLXVLDJRNZINFUJNEURZKGPCNKHKTCLYBJHFUTBBPDLVBEYJDYXQHWOGIXABEHCZOXDIOGMWIAMJSYLHRXYASFCCMZGOLUPRXZKSQKJCWFOSDIAPPDREURPUKQAMGGEIYOQHAAUOVXBWOHWNIS");
    msg.flags = 14977U;
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.588804095991701;
    tmp_msg_0.y = 0.5914820211833081;
    tmp_msg_0.z = 0.6877705262806881;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QYSGXUKVADURYDAKAHURVIYWGBLRORIHJCSLWLHQSVGAJVXRWXGNYSIYUEIGIUEAWTCLTWVSUTEZNMJPZMJWEGXCWBJRIGMECKZDZAMCTWUNYEZF");

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
    msg.setTimeStamp(0.7866052953281084);
    msg.setSource(4669U);
    msg.setSourceEntity(231U);
    msg.setDestination(58914U);
    msg.setDestinationEntity(6U);
    msg.state = 87U;
    msg.plan_id.assign("SHERAMPOZWHYOYYXDQNQKMQEDHQSX");
    msg.plan_eta = -2138381109;
    msg.plan_progress = 0.68051183023215;
    msg.man_id.assign("EHHQJEOCILFLQODHWJTJJUMPPGKJOIKZYKCTHKNVGLCBIMTILRAVGRKPMUHLDACGRTLDQTXYRPOHWB");
    msg.man_type = 2131U;
    msg.man_eta = 6268478;
    msg.last_outcome = 172U;

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
    msg.setTimeStamp(0.09666793101116122);
    msg.setSource(50474U);
    msg.setSourceEntity(58U);
    msg.setDestination(18929U);
    msg.setDestinationEntity(47U);
    msg.state = 21U;
    msg.plan_id.assign("NSPFGBHDTLXBXCNRXWCQMYHQZMJJEAEQKNCHZFNIKALDFXYXFQVWPXMXZCADBMQSBAFJOUFGPCLAH");
    msg.plan_eta = 1422006193;
    msg.plan_progress = 0.4914643391917739;
    msg.man_id.assign("MMDULRXCOGODVWQSTVIIOIKEGYIVCLXOMPWRAZEUQFKUQTTXCVOSBSYUMVTNDFQAEYYHUGCUZIBCAILGCDXGQYKEIAIZBLQQDNTTZXCKZRZFFNXXBKCBOGWLNNQGAEWADBDCAFYNEPFQSWXMINHJULVYPVVPMKPWHKZHLNKFMTWLSWPFSP");
    msg.man_type = 23628U;
    msg.man_eta = 1191371972;
    msg.last_outcome = 120U;

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
    msg.setTimeStamp(0.45300468052671594);
    msg.setSource(34519U);
    msg.setSourceEntity(164U);
    msg.setDestination(35691U);
    msg.setDestinationEntity(134U);
    msg.state = 69U;
    msg.plan_id.assign("RRHSDWJTGBFYGPAZKXPNBONWCNLDPIDIZBGDVXFRFEFMKOWNCPQHVBZFSDIJJEBYSWSXJTBWVUPCOVNWWESQUKDCLRPWAXVYLLEE");
    msg.plan_eta = -1985450445;
    msg.plan_progress = 0.7913769590710092;
    msg.man_id.assign("WPRZEAMPGUPIZXDYYHHLCUQYPOWDBISZKUXKCLTJLLJGMDWDLEGTXHWKJFBOMYQKFFIWXQROJWNODCHIMZIWZEUBTSQGXCUNSTYZUWIBTVBSMEFAUCGETRCJLGKRYTOPZMVYFLJNRPUPOABAXKCFZNAZTCDUIRWDFMAYVNXVIRQKBVSQSOWUROMYKZJXFXBLNBANHDEVPYVDPIVORRHSFGEVTSGIQBGHKAJTHVNCMGEJCAKNSPEOMQJLSHNLX");
    msg.man_type = 3792U;
    msg.man_eta = 705777631;
    msg.last_outcome = 117U;

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
    msg.setTimeStamp(0.013649501131520081);
    msg.setSource(56063U);
    msg.setSourceEntity(153U);
    msg.setDestination(42832U);
    msg.setDestinationEntity(129U);
    msg.name.assign("CKHDNBIOVISFCKJXSKGKGVUYCURRUKJRFMWUZAGPMIEYPWYJNGCGBGNUQLVPCFZIQBAYMEIRQXTISKLKGTSOMVSTHFJXDYJUXZDCJANDMTWSITYOYWLTRCAIMPSQAMHYTOHNFDEPXYPWTZRWXHHEJRZLBBSQULMLEHRHYWKWEEPMIBXADWDQNO");
    msg.value.assign("KZQJHRMMYTSCSDBAABDEXHOEIVZFXPXFELCQDQCXOYOCXQEOTJNNMOBJYLVWXRLCDKNEPUCRKAKKKLPAUPMWVSGTSDYJSTFWUOGDIIJZWMLBQPUUZUETFYOABGPIBGFHDREKCQTXZIMUUZWEVPZIXZDQAACYHVTFQGWSRNGQWDVBPOHLOVPRAPRGKNSWYVIGNKNGHRB");
    msg.type = 212U;
    msg.access = 209U;

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
    msg.setTimeStamp(0.7804918579513984);
    msg.setSource(62092U);
    msg.setSourceEntity(206U);
    msg.setDestination(22147U);
    msg.setDestinationEntity(9U);
    msg.name.assign("WHWUWORCSWTOIJKPZQNIEIEDACENMJCLWGVYXPAHYVCVLJALEUTAOJMXMCDCSOBFTLPNRJFBRRTEXFUHLQQPSJAFEJXQIUOZSKDHNCVYIJHXHDMCQIGDGFSEEHARZYVGZQUPXPIWZKBNUTTXSMSMFEYKJMPULTARZDYNTIWBHUBOSHIZYZLCZXXWNAMCQDUWDQYPUYSGGBDPFBPGLVDGFKOVQIXBBTRNOJWFKAMATRVMZKSVBNKKREFYGVHG");
    msg.value.assign("PZCYVJPDLYEASEHRGMXXWDFZIGWCKQWFZUPKELEFEJADBWSODYKHFRAMBM");
    msg.type = 26U;
    msg.access = 230U;

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
    msg.setTimeStamp(0.7946989968347591);
    msg.setSource(1511U);
    msg.setSourceEntity(33U);
    msg.setDestination(23760U);
    msg.setDestinationEntity(106U);
    msg.name.assign("FBMWRTYLCSFSOBTZZTWKTHRQTOXYYYCLIGXFPUGAEMIGSLHSQRVWYEMLHQUJHRAUKOSCPJTPQDDMOAZCDEFILQAAYJNCLSEGNVFKGVY");
    msg.value.assign("WBFYHTVWOQABTCEDMTAZWZLKDCSDPXGTZJTKYBQRBMDLFQEWUJUBFVQZMPPSQVIZUFWGJKUGVHHWHXCEONWCCTTVYNLEXFNMKLTEJISALLGWVOLRFIURIRHARPIJOMCKADFGBYPJIFPUDEEQSNNYKPCRLRVCHGDJHNXZKLORYDWSEPDNMXJGRVQOEZP");
    msg.type = 241U;
    msg.access = 42U;

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
    msg.setTimeStamp(0.611874663283592);
    msg.setSource(10553U);
    msg.setSourceEntity(204U);
    msg.setDestination(30248U);
    msg.setDestinationEntity(207U);
    msg.cmd = 236U;
    msg.op = 172U;
    msg.plan_id.assign("PUZCNGAHKFEVKVKULKGNOQOHSIKIGBMMXLWEJLEPKVBABCBENYTYSXWDPCYFZIWRVTDLONOTHCRTWMBCAMRFRSTNOYYENUDEMRJPJVKVQHGAQEMYPJKXFUSDSFPQXAXVSOTBKZAYEXQCURBENNCHASZLODVU");
    msg.params.assign("FSNIRRMQSOIYCIJHFEOAGKWCARQUERWRNKIIHSGZZNRXGVKDGCYTQROSGSFTTUNMTCDMXSEMFVQVITFHLMSQQSLIJJPDBKJYZPDOBE");

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
    msg.setTimeStamp(0.9478264917801724);
    msg.setSource(8354U);
    msg.setSourceEntity(29U);
    msg.setDestination(29042U);
    msg.setDestinationEntity(61U);
    msg.cmd = 245U;
    msg.op = 120U;
    msg.plan_id.assign("DVGLTPSRFWDBPOUII");
    msg.params.assign("FILTJZDBZJVPVFPGCXDRHUPKONQYGOCAHCFQVOSJTTECZMVRGSPAUNAHDBEXAMPWVPMSVJKQMDF");

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
    msg.setTimeStamp(0.9093304752659747);
    msg.setSource(2594U);
    msg.setSourceEntity(242U);
    msg.setDestination(48848U);
    msg.setDestinationEntity(117U);
    msg.cmd = 252U;
    msg.op = 148U;
    msg.plan_id.assign("ORVLZGFZSRWXPZAKCSPINXVMPKXXIFEWSLXVUPAQFQCSMOFZNTXGVABDEWTZZJJHXJZDIYDLLTYKFFECUCHCRTNJIPPKZDKSWLMKLYGCWEFB");
    msg.params.assign("MUCCDENTZQAGAQYVWVOGL");

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
    msg.setTimeStamp(0.19190785413856049);
    msg.setSource(47090U);
    msg.setSourceEntity(234U);
    msg.setDestination(59738U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("LNWFPSBRRGTKTXKOFCPAJQAZRIWKRJCGSMSEYNIGPECUUMBYAULXHDDSQMITVOPTHJLZOXVQJEVXHDDOBAVKSKVOJTCSKOWXLJHARNVUGXKFBABELCRDLLEZQXLTTHZHMQMCMPUNYESZPUNYNOFEHQEDYAQQIDUJPGBLAROHNJZZWZCIFGYGAHGBJKECSEPDMLBS");
    msg.op = 193U;
    msg.lat = 0.21720564152357724;
    msg.lon = 0.7368030791545543;
    msg.height = 0.4954272685747828;
    msg.x = 0.17419649940563608;
    msg.y = 0.974030616255943;
    msg.z = 0.5709853697837254;
    msg.phi = 0.7094809093788631;
    msg.theta = 0.4772397424116479;
    msg.psi = 0.7378482761144662;
    msg.vx = 0.5337433098244688;
    msg.vy = 0.30951896793324607;
    msg.vz = 0.4559435562502082;
    msg.p = 0.9914441576206644;
    msg.q = 0.9106161769494464;
    msg.r = 0.04363156397636858;
    msg.svx = 0.4006286416212991;
    msg.svy = 0.48404683986533503;
    msg.svz = 0.6385546239198624;

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
    msg.setTimeStamp(0.770341153429358);
    msg.setSource(28236U);
    msg.setSourceEntity(245U);
    msg.setDestination(35423U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("HAOYLWZAFVHETHXOETFMIUMLDFFSULL");
    msg.op = 45U;
    msg.lat = 0.4097167280971796;
    msg.lon = 0.33831304774906434;
    msg.height = 0.23197446844580216;
    msg.x = 0.9782731662932181;
    msg.y = 0.0809248454896484;
    msg.z = 0.9958350051500834;
    msg.phi = 0.45568953321014083;
    msg.theta = 0.9156510009397888;
    msg.psi = 0.5383545901364329;
    msg.vx = 0.512524476638359;
    msg.vy = 0.03844343754256041;
    msg.vz = 0.7146610189459633;
    msg.p = 0.8884825140559298;
    msg.q = 0.6684174083905848;
    msg.r = 0.6608415079104376;
    msg.svx = 0.6594364668876492;
    msg.svy = 0.778353257244351;
    msg.svz = 0.7763649889658273;

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
    msg.setTimeStamp(0.7569930966176117);
    msg.setSource(37812U);
    msg.setSourceEntity(34U);
    msg.setDestination(47961U);
    msg.setDestinationEntity(104U);
    msg.group_name.assign("OBYPRWHKKDAKBGKVVYQTOPPAXFVKDZCHGZZUUIQHUJXCMWGMQJENBWDACPMCUPOGHYGSEUNLEZUZNQJWMTHVEFTAORJTDOQLOCUKRB");
    msg.op = 246U;
    msg.lat = 0.6519351330026463;
    msg.lon = 0.8339480765444842;
    msg.height = 0.38182479208593867;
    msg.x = 0.6563089075368089;
    msg.y = 0.592052078885911;
    msg.z = 0.27383318132946666;
    msg.phi = 0.1995695472858492;
    msg.theta = 0.7231311160138437;
    msg.psi = 0.23722014765172672;
    msg.vx = 0.31584636433922464;
    msg.vy = 0.012723728438009618;
    msg.vz = 0.6961263728402936;
    msg.p = 0.17327473018187933;
    msg.q = 0.15388668159317853;
    msg.r = 0.9708702395481663;
    msg.svx = 0.08720743205294845;
    msg.svy = 0.42950413863421666;
    msg.svz = 0.8450453125856174;

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
    msg.setTimeStamp(0.43259431135380044);
    msg.setSource(61125U);
    msg.setSourceEntity(190U);
    msg.setDestination(4847U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("JVQWJVAKDYSPOINWBK");
    msg.type = 124U;
    msg.properties = 126U;
    msg.durations.assign("FYDGWDEXPNZNQJCPGRNRANYUFSKXLEHDBOTVCDZLZCMAODWYEVIGZGBJJCZJYNPKCIAZQCITBXHTLDHURSPGDIEAUIVFXOZBLRPSYVZQXOLEKH");
    msg.distances.assign("SMJZCKVXORARKTJRLQSEHMJFNUCVDTDNIHRLTJIZQSKINOPTAYJQMDZQUBCLHNJYTRWPXEAFJEPUAWGGXQGABBYNBVDSCKEYIYRRIMMMDOOHQDBOKQKJZFUHOLCOZYPSROLXUVPDDOKHLKYAYNHPBRUQJGV");
    msg.actions.assign("GYJBIWPKJFYUYVORLWKBQCKWXHRDSBPGZXTIEAARLENHEMRWPVDANHAVCSCHPCIWYRDVPAYOZAJZQVFVHKTUONRFPGILQJCMTXIBSOQYUBWZXSCOFNOMTQMXCFVMDFNWKZIHJRORXVDHRVXNKE");
    msg.fuel.assign("WPKUVTFLBDZYSCEDMRPRHFVDXTLHFKEZUEAOCOUGHKTIOGYCRJAYFJMVEULCGBEOMDXOMHPJLWTHHSGKMIUNFOQJXZZYTJPQSUQBDPMGXEJD");

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
    msg.setTimeStamp(0.13117728788627203);
    msg.setSource(31765U);
    msg.setSourceEntity(18U);
    msg.setDestination(31164U);
    msg.setDestinationEntity(102U);
    msg.plan_id.assign("NBLTHGIOKTJHFFELOOXUWZMEHEUFSAUNWAIYVJGXDLDPJVAXMLGBXUPYROLGDTAUWMCPVRBRRTSZOTVIGZXQIIFMSEMTJONAEWZBILEBXUQCMICWXFKSVYBDYJFKYNNGZPFSYPMVQZULSLWNBALHOZKQNU");
    msg.type = 15U;
    msg.properties = 84U;
    msg.durations.assign("DNQNMADGKGMASTIPSNXSHGJINPPRIREULQXRIVBSRTDOPFXXGBHWOSVWVFFCUAYBZYARVXMFOVPWLZOKFXQJMECEBYCTPHZIIQWJ");
    msg.distances.assign("YICCCOSEGYSQQZMYRZKARJXVYNQBTRVFPVJZOSLGWPQSLINXTJUSFBAV");
    msg.actions.assign("MADGVFERIXOJDSPNKDYTMXR");
    msg.fuel.assign("XWSTLGYMXDMKGYMJLGEEBQZUOBMEZQZOLNAZKADHNDVQQICVAGYYJNPHBDUHIONTWNTYENDROGHQBOGMSTVJXFGRUEPWKDUZJUQIOJFGUWEMLXXRKLJINUEPFHFLSNBHGOYXRNLRMFRUWNBCOYVKLRPHCWCYTRKTBIZBKTMVZU");

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
    msg.setTimeStamp(0.8304366194493598);
    msg.setSource(42860U);
    msg.setSourceEntity(97U);
    msg.setDestination(926U);
    msg.setDestinationEntity(42U);
    msg.plan_id.assign("SDJPPCRVWKJKLNRWFQSVLPEWMXZPRAYMBTT");
    msg.type = 203U;
    msg.properties = 235U;
    msg.durations.assign("JVKNRCQBCHNFQMSTCOBKEPJXTOPPWUGYYJMNZZOFZIXLDBQAZQJOUKYHNDAFRFCMVOELLCSHJJDTOAILVPERKIKKLDUFOGUQQESGAROMLTIIVBZY");
    msg.distances.assign("DPXTRRKVFPVKIQVVGIFJBSZQGFKTYBZWNQHOVVYYFAJEGSLUGPXRSOYNOQOMIROLQXFUMAJSNARMHGFGGZWDXDILECONUJFEHMEVUAXYNSSMSEKBZJKVXIZIKCRSLCTHZTMUFUIXXOEEMQNPWANQACMNT");
    msg.actions.assign("AFDHTGFNNRHTAMWAXGTXYFAFZWWTLMFHCBSNNGDGWOEDTRYVKYCLOYEYZNIPVLELKABDXKPBGOXPWUQJQHIFHCNUQQBQXUIWVLEKTJUQECZQGSVDJMZJXTUONSDMKRVJBDMAGYZOTM");
    msg.fuel.assign("SPLWGICQNPSEPKHPTPAFJRCKVXXXWFONTWXBWYDKLRVCMXXNDHZBTBVTFNUKYJPEVRDHMFSBCWEDTBVRNBJAZCDZMOILUNZIZSDYBYGAPYPGLUYJFIMOMSOMUCURUEYYFQHRZYRZJAIZVOAVEIMIQWAIEVGLYOXLNJTRWEKHKQXOUJDUNKSGWFOLXNQCLRQTVIALPSAEBGBHJNHSLHS");

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
    msg.setTimeStamp(0.14283669792531062);
    msg.setSource(33190U);
    msg.setSourceEntity(114U);
    msg.setDestination(61124U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.6604500439095072;
    msg.lon = 0.2646545785262149;
    msg.depth = 0.35812040193404204;
    msg.roll = 0.7515990386823378;
    msg.pitch = 0.17945370112581982;
    msg.yaw = 0.9651678765005305;
    msg.rcp_time = 0.8008399926805978;
    msg.sid.assign("HQPTRIWRXYMRHDKDBUCDFWQVUMALNQNZNFWSMRZSPITLGFBQEGXXYHJGUDMENWCYKNAAIJBGMZVOOXAUBWLADPJKQVBHXCKJHREVUOIVRTCBNKNSYVTJ");
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
    msg.setTimeStamp(0.9378821553241706);
    msg.setSource(61377U);
    msg.setSourceEntity(153U);
    msg.setDestination(37794U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.1766906748016982;
    msg.lon = 0.29718476947798367;
    msg.depth = 0.583616062002139;
    msg.roll = 0.3006952369291618;
    msg.pitch = 0.8417885014032889;
    msg.yaw = 0.5880565007907197;
    msg.rcp_time = 0.7200776629924821;
    msg.sid.assign("UYDCIWOCTCSBUGIRAPLXTWAANTDSEGIXHWCOAVKQRSIYNIJCYCPFQLSBXEFFTLMCQUICYKWFVIBGRSGZJDCKYEVVGNGBUMGOKRWKSVLXAFQNYOFNBDTTLNQTPXKUMWVTHZHSHPEZUZLKUDBDZOERJDDPOMOVLRQZOJWVPSAYHXEFODVLSAXZRMMGZZNBUAOYTBNMXHZDVPNQHJLC");
    msg.s_type = 198U;

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
    msg.setTimeStamp(0.9316118328132447);
    msg.setSource(61572U);
    msg.setSourceEntity(107U);
    msg.setDestination(39565U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.24963405727465315;
    msg.lon = 0.6210828162294838;
    msg.depth = 0.06127548481776379;
    msg.roll = 0.9229245508107131;
    msg.pitch = 0.40166034147122065;
    msg.yaw = 0.21696903984980698;
    msg.rcp_time = 0.09096625475334574;
    msg.sid.assign("TJJUEKDFWCSRUCRPXWGKXZMVKFKBRECXLJVIAPJGVBAAMSWOSTQBPLRSDTC");
    msg.s_type = 64U;

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
    msg.setTimeStamp(0.38234865094290105);
    msg.setSource(48733U);
    msg.setSourceEntity(193U);
    msg.setDestination(2520U);
    msg.setDestinationEntity(116U);
    msg.id.assign("OQSXLHVROCOVUHMHWRERBYFZVXDWNEMGNLZKKREFYXSPNVSURBJDBCPNQADTHMIBBGOZHUXPEJLDTDGIXLUAQGZSZSOHFNLCCPMOFHICVDTKUEMXPEBQTLHFPLFAJBCIVRM");
    msg.sensor_class.assign("BVJSLYCUGEXVDBAPRUCEQWUYQKNMTEGMCIVFYPKMQCHNADRYDJCMIKIVELHFMIWBGXM");
    msg.lat = 0.07194141558024947;
    msg.lon = 0.7964760942489689;
    msg.alt = 0.766460201093254;
    msg.heading = 0.07848865116703707;
    msg.data.assign("SAMEXYQFOHDGIAPHJUWAXGVMVIDXHPBIGBXEPRBBRPWRLLESBWYZSTFSEJORMDQNHURUYYWJSVTQXGRBLPKTUFPKLKYLBBWSBLNOEZMEBCAMTXDFDLVZNGTXVKVNNASKQQXWYNZVVZISZCNFJYCQIHTGMCOPOCMUSRZHQPCHTNYGLARFKHCROZYIUONFHJZOCWKIKDTCAAHJMWTNVQJRWOGEYKIEFULFXA");

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
    msg.setTimeStamp(0.5921924157724053);
    msg.setSource(3516U);
    msg.setSourceEntity(151U);
    msg.setDestination(23524U);
    msg.setDestinationEntity(137U);
    msg.id.assign("BWDHDBIHZMEQYGSWQOIWLVPTJNSVQUHQUYMEYJQETEQVLJWHPPOEFRRMMKVTTMMVXSFCSJKGGQONLTJXDQSOFWULCZODXRCLKSUOTLJTWAZHMVBUWKXBNBTNHAYGDGYLZMKUDQZOCNTALBFISGSGEEPOFWICIAPCRCNAVBHZUKXVHINUXDZOKXYHAKGLIYBAICRAHCASLPJTYXPFVBKRAGRMZNDWDFJVERYONEXWXJQMYCEJDFZFGPRINUFUZK");
    msg.sensor_class.assign("BBJUZCRUJUYVLZUFWZDEAXBGOSGTUORRSIJQIGJDESMEIFVRRQANNFUYWBWKPEKMXODZCGCIDRYBTYHMZHVMBCNWJLLCVIXKPPOJDFVLCHJG");
    msg.lat = 0.023161370229849765;
    msg.lon = 0.10760827810803952;
    msg.alt = 0.2997654778110541;
    msg.heading = 0.7116267375675118;
    msg.data.assign("AJPTIVYFMISWASVBDMCZLONZLZGBOHBTUZAKMFHLCYRYVRTDSOSUKABQULXHSWJXVUXFBFRNANUPXQSEIELSXYWEHWJKYKFFDRZXQLOBCJOLGNYIKAUJEBTSNEZRGKJGJGCMIDWDECLKGTOPIVPTRVYNQXZPJOVLQFRVVYAWFMTSZDRBEPMMNDBNODUCCWPTJVGFOHXHUHIIQFXH");

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
    msg.setTimeStamp(0.8226903539666626);
    msg.setSource(65103U);
    msg.setSourceEntity(52U);
    msg.setDestination(56678U);
    msg.setDestinationEntity(150U);
    msg.id.assign("TMVNLUPDJKQISVQOKRGTIJMBYNUZFUMPXFKJHPRIKZUWHJHIGWDAENGJVQWXQZDLUEKRGRYTOCASJDQYPKKOVCZSHJOCVBHDQXNNEJIWMCPFNFPTLFVCLMUMMWASAIXRKGBIATMSYETJVZLXSOFLTKGWDWAGWSOIFZL");
    msg.sensor_class.assign("FHOSLGXPEUPNYQHHMBSVUC");
    msg.lat = 0.5392230190054432;
    msg.lon = 0.43740874907515515;
    msg.alt = 0.6761242447767639;
    msg.heading = 0.25351127960152986;
    msg.data.assign("DYGXABBVDKULKYOYIEWUESHVFTQKQWXZIXLIYOECNFIXGBSTOFCUGMBPFGIPBXEEHRUGWRQ");

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
    msg.setTimeStamp(0.8507219276117317);
    msg.setSource(46134U);
    msg.setSourceEntity(140U);
    msg.setDestination(21603U);
    msg.setDestinationEntity(180U);
    msg.id.assign("ZZGJLBNPUJMKWEBATJBCCGPTQAUPHKIGKIVADRXKUHDPYMSSXCTVVXHWMGIYEMBSZHXJIOIKCOSUGEHMGYRUVDKRPLVGZONFRA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RIMCYKDEMPUWMAF");
    tmp_msg_0.feature_type = 154U;
    tmp_msg_0.rgb_red = 151U;
    tmp_msg_0.rgb_green = 223U;
    tmp_msg_0.rgb_blue = 238U;
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
    msg.setTimeStamp(0.5590519626106808);
    msg.setSource(12168U);
    msg.setSourceEntity(229U);
    msg.setDestination(33869U);
    msg.setDestinationEntity(96U);
    msg.id.assign("XWINLUBRAQRZBZSRXPSZPGEMHPBCETFFSAHZSVTEGSCXDEJNXODDHHNIQTKJQMWCGLDYOLLTKKFVJKHQ");

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
    msg.setTimeStamp(0.49451509593052456);
    msg.setSource(34264U);
    msg.setSourceEntity(28U);
    msg.setDestination(34703U);
    msg.setDestinationEntity(191U);
    msg.id.assign("NEZTOBAMPFBLYYNKRTRQWIFARJHZCQPJASUROCOJYNJPUQWMLOUKZEVMSHIMVXBUIMPWNIOSHMUJQKHRXNCXJSOHCFUI");

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
    msg.setTimeStamp(0.43502114363004085);
    msg.setSource(7396U);
    msg.setSourceEntity(215U);
    msg.setDestination(62957U);
    msg.setDestinationEntity(47U);
    msg.id.assign("UIJDZEFIPULNXGFADARDRYLXRKEHBCTUUTYZGQJUQFMTLNKHZVETSKSBAJPDGHDNMQBYVKWNUFPJMELRAFWRWQHRQCVNETBQKEJBCZRTAOMLJJCYCBYUBMOWKDLAHXHVNGIOOTPOHWADLRGWIVVKWKVFGXFXNISCMPUDPKWQEDGZLXBVHKNEV");
    msg.feature_type = 43U;
    msg.rgb_red = 130U;
    msg.rgb_green = 180U;
    msg.rgb_blue = 195U;

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
    msg.setTimeStamp(0.2167376544534173);
    msg.setSource(9678U);
    msg.setSourceEntity(11U);
    msg.setDestination(11322U);
    msg.setDestinationEntity(63U);
    msg.id.assign("QJWWPZTZKZJWNDHOYQEFRAXNDMYNSCKXRFFKXSLDUASDZNQPXJTTHHMNUQE");
    msg.feature_type = 159U;
    msg.rgb_red = 64U;
    msg.rgb_green = 6U;
    msg.rgb_blue = 5U;

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
    msg.setTimeStamp(0.9944300876505928);
    msg.setSource(44018U);
    msg.setSourceEntity(187U);
    msg.setDestination(6723U);
    msg.setDestinationEntity(4U);
    msg.id.assign("DNNCUXXGZGJTYWJORPILXPPDCNHTGRZZFOXGSBEVTSEETUEZQDZVANXNPYXMRXGQHGKFNIHWLLRQTKSTBWTRHIEIKJUUVZJCQSUWBFRMYTDKDGFGISRFUUKEVTAYKHRIVSFMOMWZIPKOWHAXINWWWKZHUCXVFAPMDDQGYINSPSALDSQOCOAVQAMKAD");
    msg.feature_type = 120U;
    msg.rgb_red = 14U;
    msg.rgb_green = 149U;
    msg.rgb_blue = 209U;

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
    msg.setTimeStamp(0.1796385814348208);
    msg.setSource(48358U);
    msg.setSourceEntity(69U);
    msg.setDestination(52484U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.6055899397014318;
    msg.lon = 0.7065243174814912;
    msg.alt = 0.9057790877452133;

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
    msg.setTimeStamp(0.8378329608186189);
    msg.setSource(45975U);
    msg.setSourceEntity(149U);
    msg.setDestination(6750U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.27193020499030895;
    msg.lon = 0.9808449267102892;
    msg.alt = 0.6969848455935017;

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
    msg.setTimeStamp(0.4822577675646035);
    msg.setSource(15099U);
    msg.setSourceEntity(26U);
    msg.setDestination(65008U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.2034082678124879;
    msg.lon = 0.09784374325299305;
    msg.alt = 0.7837542969312816;

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
    msg.setTimeStamp(0.3736896735266706);
    msg.setSource(4690U);
    msg.setSourceEntity(118U);
    msg.setDestination(26731U);
    msg.setDestinationEntity(16U);
    msg.type = 198U;
    msg.id.assign("GZSJFNIZZDGUYPIQYOIKRDBSODYYFQAMKBSHQJXJHHXWSWBTDDMXJQEYBTDUVUPTGBBPTULPVXIDMNJKEGWSFPIFZCMELBZCLVXFECULHLJBSONURMKSWAKMZYPCNQKCEWQLOKALGNTRRNREAAEOGEXTCUSWIRLGFL");
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4052743275099988;
    tmp_msg_0.beam_height = 0.448502973465735;
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
    msg.setTimeStamp(0.7612209885256864);
    msg.setSource(16864U);
    msg.setSourceEntity(24U);
    msg.setDestination(2028U);
    msg.setDestinationEntity(8U);
    msg.type = 56U;
    msg.id.assign("PSOXYKYAOSWLZMAXLCRYHOIZCDTAXCJLWVARCCFFBOFOTTWWOIJAKEXYFVSXVAWSQUIPGGFJOMVBTIHKLZXXDVQTGKFJVHJEWDYLGKMUOPCYDJUTVTNZUQISRAYWZIDQXIGENMHNKRHZHDAUXYILAPVLUFJBMRWSLMKGPNHMUSBJNPRWULQSGHUDOE");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QVSMYOVGQEGARUQRKRFXGMCXWSCWRTVKSTQSZVUXQUKCOIBHPVSCIPZJWRRGHRIULGJNSAABBNBZLUNZVHVJHFKEWEQIWQBHTTLXXZHHNKJFNPYGUNDKWAALXQGJBWDTZPTPDVFJISBFUJYOUIDXILMOYVAYPSBLDMABYQKXPAYLDSFOUROFPXEEDEZDXNNEGPCLTBOTMSGANCKZMMZYEWJIFTTIMDCOLWKLA");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SDOELVQQNJTEBWKRHCRYOGQHNLOAUIVHIIBCUNOZ");
    tmp_tmp_msg_0_0.value.assign("YLTSXSZGJVZLCNKBARPPUEAMHOHUPFEKOLSSAXPKUXTAXVVSLZNYOIMFUOKKAQBGIWYRFRKQFRFKQREECJXYJNDMIGPDBMXNEQELZACYKGDUEZJYNPVDBGTYCJTCLMNWBYZJUTXSBSIRO");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.20279160657154616);
    msg.setSource(14069U);
    msg.setSourceEntity(111U);
    msg.setDestination(45477U);
    msg.setDestinationEntity(178U);
    msg.type = 198U;
    msg.id.assign("WSUXTHRBYMLEPUQWYRXRXUSIHHAJBVXMCIOZFFUFGWEDTBYNTMGRVDADFNUYSPKEKAAZARTHPBHITI");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.5266818060176987;
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
    msg.setTimeStamp(0.06802283531679343);
    msg.setSource(29370U);
    msg.setSourceEntity(249U);
    msg.setDestination(54403U);
    msg.setDestinationEntity(105U);
    msg.localname.assign("KSWNTPVBJENSFIWGRPNQGNYBWPWRPHQQEQG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XPQCTFHMZTIOIHQRLYYZGDRCPRDMLOLDEWVNZWWUPKNYXPXEEZDTELXIMFLSRFJCNKKGURGRCSVDRSPWLGIOWSJSTQVQHU");
    tmp_msg_0.sys_type = 208U;
    tmp_msg_0.owner = 60618U;
    tmp_msg_0.lat = 0.2341087722996854;
    tmp_msg_0.lon = 0.6350270628439486;
    tmp_msg_0.height = 0.9824487730568656;
    tmp_msg_0.services.assign("ERQKDUCNBIQAMCTYUXADVCZFQSZFEUIVIFLBRUFVQXPPLCYMZSXOJLUSJNAOEKWZZPRSFIADWUGYJVVHHPYOWRNLBOAAGLZMGGZBWRNIKJHTQONRWGCVKITBDFMTUYZJIXABSZUWLYXMGKNOGVGWJTCHTAPJMMPYSLEWTQRJPJZOCXKAYQCCADHUPQEDNKNYBNLFXKVXQLESQSFXIRT");
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
    msg.setTimeStamp(0.5283192090905878);
    msg.setSource(37735U);
    msg.setSourceEntity(29U);
    msg.setDestination(65371U);
    msg.setDestinationEntity(51U);
    msg.localname.assign("FNDTZFISXQEZJGCANDCVVUQJYCRQWQDRTEMBUDFFUCEKMUZNNZBPGJJRXENSXWIJFUOHGLABRJMYKDHPSLHMYTZODKILIANOOMKWYVHHZYSRZEXEGSHCASDXGUWYRAQDBZUPNDSHVWVPKPSLDUTPPSPHEFVTPKXCFWNXNGTQRBJKCZZYTBAYACOTEGJAYGXBVWRNOKTVURPUL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SARBPLCPKINKXEKPWZT");
    tmp_msg_0.sys_type = 103U;
    tmp_msg_0.owner = 28307U;
    tmp_msg_0.lat = 0.16405566136919192;
    tmp_msg_0.lon = 0.9509113947613619;
    tmp_msg_0.height = 0.559041631187876;
    tmp_msg_0.services.assign("FDFSJRTEMOSHHUOBZMJEKZYKRLTHULRKACAIFFRLXKULFOWROWLBYWRDDYRGCUJLPFVGHQDJGFMQKIUBNONITGUQNYMMBYNANXQAEIQYMIVHRJKWXDUWSDCWPNZLTEVNZNACDJDRAKHLOLPFINE");
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
    msg.setTimeStamp(0.9471347477634973);
    msg.setSource(1916U);
    msg.setSourceEntity(87U);
    msg.setDestination(30769U);
    msg.setDestinationEntity(224U);
    msg.localname.assign("HCOKQYDJHRYQTOHMJQWFRTBEOEDKWAKWAVZVERKKPQBLLREXAQXWTYRVCYPIACNXFSCGUCBLSIHXBSCOFATDMXMUEUSHMKLGTSEZYXLVVJAJPRTGOIDKCPXUDNDERJYGRIUBXNTG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KKTOOCKXNKTOOUBYKRMEJUHNNEOZVQLWYCCSDKSDJLLXDZHQGOMWAXNHMHVNZZQBWUBMYXCYJIZBIRYDVIUYJTQEEAYVVFKXNEUFEAFRJTNGIMLAGYEHVXUDCLQPEAFPBQHNXHPQKZNCDRPRXFSRIWTPTILLUBBZWFWPABGLFAYTPGMCXWCIEKQFHMSZARWHCSBDUSXIQSMVKOAREWRUJADGTLJGLV");
    tmp_msg_0.sys_type = 25U;
    tmp_msg_0.owner = 49254U;
    tmp_msg_0.lat = 0.7443321433317058;
    tmp_msg_0.lon = 0.3198894660466143;
    tmp_msg_0.height = 0.46901330116999607;
    tmp_msg_0.services.assign("FXUPJBDYWLAIGJRVYKQCPFBXLAQGWBEHDSDPPHMJERUZXGDRBILMIFDFZETTEFRYVHJDXCRFRXTZAEWOTYMUEGUPHWMAZGKNNCZRLIXMYSHBYTNVQQMTUZSCYUKEKCWZAUFIVAWDLOUCPUSCWMPCIJWBTJNVLGCFJSFMLNUAKPORDQMVRJEQZSQOVXIPKFJZGNGQXVZTXQDXIACLAIHYRVABEVNHTWKSSDELOKOMYHYHBONWBTGHGISN");
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
    msg.setTimeStamp(0.4327869547350296);
    msg.setSource(37079U);
    msg.setSourceEntity(106U);
    msg.setDestination(754U);
    msg.setDestinationEntity(121U);
    msg.timeline.assign("LNEAJCFPHEDIFRKHJNPYTYHQZRXZSYZPSDHCMHLXEUUQFPOKRBJGVEPBRPHZRRZDYXBTHYEKIHIMZOUJAAFSGVAPFCDWFNXIZWKMCALGQIBMWCPNLVM");
    msg.predicate.assign("TODJLENPMXRRWPHBQQSNVRPBGSEJEHDWCNPVYSGYJSONPFKRJOJDUYGAVMITEIJBADLWHKCLZTICAUKUNYKSHXVIFGWIQWAMZMAFKBUKXIRJYXWVRUORHWFDUSZNPQZVCDTUTHNYUJCEYLCKPRDKRPENMFKUTFMCLFXMADBXXGGKLJHIGLBSWVCM");
    msg.attributes.assign("QCXSHDVDFBKYCTMJYPVIQLVVAFXGKBMLTJWLFDDHWQPRZFEZXBALOJHHMQIXVMGGVDTNAKIZKRBVGYMMNTTEFJOLXKXOYBSBINGWRIZYGXPWNKZRIRQOHBFNJTPREWXCEJAWBBTYEUOLLJNFYFHCKFRDSDJNQBZLTXEYZVMINCRIS");

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
    msg.setTimeStamp(0.04322159360562039);
    msg.setSource(57729U);
    msg.setSourceEntity(71U);
    msg.setDestination(56258U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("DUBWLENQKU");
    msg.predicate.assign("PTMUMDWQQDUFFVRDLOAPUUCTNJPTBHPMYTESOIHWXFAVXFPUMKGKPNAHJEQTYBKOPAKVZDZLVSZAZHYDXIZURHPEXWLNWCMGXJJCJZUSUFFWTFEZPVKYKTHOMQLRWZOYGLJQNNFSRECWKGSYYMYGSIJLWOBAJXQYCXNGNMBAEBLCMGNXWRDMOVSYGBHOXVHRVTRGHAQUNQLEGLKIIWLTC");
    msg.attributes.assign("VHMZMOWNVIRUWOQTGTNHOMJERLKTHXBGNXQPYKJWABEIJASDULDTAPUJSXWJKEWMXYWQVLMDMENTMIZCBXCYBKFOSPPRROCTTEFOUYQYZSXYFUVFCTLDXBBLOVHKNAVDDALSYYPGUTLRFCGFJHNINUPZFOAFRQJMIWZQEUVHIMECVHIXXZNGBMPSGSDFZREUVWBOKACNCYEPSAEDKWPDZQGK");

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
    msg.setTimeStamp(0.37166296533617615);
    msg.setSource(25780U);
    msg.setSourceEntity(234U);
    msg.setDestination(16425U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("RYJNSSXXLKBXLUMFVWEXBBKIQYVBZRLBOQDGCPHZQJUSEGTNCRJIHTZVNJKRWCSIFHMZOQZZCTSYVMOYMNKIDAOIUOCNAPQCPZLHCOAAFUVJHWKHVEFGPXCTJXDXDAZDMKIBFFINHQ");
    msg.predicate.assign("TJKSLVQPTGXXQFVVJUBLPRKTAQBJCQDYNHMNDZSMONZJGRAPLLZPQHUHRZITYGECLRIADAXD");
    msg.attributes.assign("MFCUUNZIXNVVJBKBZQXEDMYCCLVEERGXRZLLAXXXSPSSCBKNBGPNHUJXIYTUKYRWSNHQYVLZSZSSUNEYCOKBR");

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
    msg.setTimeStamp(0.21703790315031735);
    msg.setSource(54504U);
    msg.setSourceEntity(85U);
    msg.setDestination(29U);
    msg.setDestinationEntity(36U);
    msg.command = 218U;
    msg.goal_id.assign("LRSUPNCYUHYYAOKMZLQTOVPYXSSDZMFXVOHKWCZENJLCQCFQOWUDZHQADRTHFLQQNISLZDWRZGYPZEHIZAOBRLURUCSLEVGIHGRYNUDKJLXUDVTGEMIUSMJJAWPJCDOXKEJGTXIQVNOZJWNEWAMAWNBGXYMBEVQXIAPFX");
    msg.goal_xml.assign("GNXEFCTROUXLLQPTUWJAMFPPIZOQQAHLWLFQRGEDPVDXKUPLTVKVCGVMFLGXLGCRNXPEOZQWRQ");

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
    msg.setTimeStamp(0.859307002991144);
    msg.setSource(2937U);
    msg.setSourceEntity(141U);
    msg.setDestination(59629U);
    msg.setDestinationEntity(143U);
    msg.command = 152U;
    msg.goal_id.assign("KTXFUBRWDRAWUNEDZPMYOECMZPICXMVGIFPNBKOEPAGNQSRT");
    msg.goal_xml.assign("CCQFWYEDXJXKVJDEFDRNPKQADKGAKIZEHILWDUXISHFUTILBWRILBFKHMSEAMGHKELBCRDBZTNTPYLTLOMTPMZGWSFZYEAJOSQJUAJJYJNOICOJLZUNPSMNYQDMLPLVQTSEVOBOZBQAVYHACLNGUSSBXWCWTVAKPOIMBVHCFUICG");

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
    msg.setTimeStamp(0.15687831047064926);
    msg.setSource(33862U);
    msg.setSourceEntity(53U);
    msg.setDestination(4002U);
    msg.setDestinationEntity(247U);
    msg.command = 8U;
    msg.goal_id.assign("JMUFYUALVPHUPSCJQGBHRQOLIIEYJRIUYAJUTQIBTEFWJGPBMHICOERTVWBSKKXGSNIXZKRNDHGLFWHMLVGQIEFJZSBQBMKIZGDGVASCPPEXRYYFAQDACRYXOUMQTAZWCMHDGWKWKPNLNEGSWXFJKEDNVVUNHSCTHRLMVKEOIGAZKVWZRCXECZ");
    msg.goal_xml.assign("GTXOBPVOHGLEAJCFETOUAOZQISMXEDKFUGFIKJOICADOKYQQIMZ");

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
    msg.setTimeStamp(0.0527698282356478);
    msg.setSource(29260U);
    msg.setSourceEntity(14U);
    msg.setDestination(45988U);
    msg.setDestinationEntity(49U);
    msg.op = 205U;
    msg.goal_id.assign("KEWKGZEIQPWMYFRFLAXLQHXHRLMJTHYKYSRDRNXVZANLODHUVTJSNPUBCASHZGJIEPTCGFUQTTOUKJYBZZJBFASXILNQPISZRQEYWYMPQQJRAZCHXTPKLDCAQGVWGFDCEVVMUJGIWOBGFBKAYGXRIXITWDNSYYXAOAFNNFIGHMJFBPDQXQOTKYSPDROU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HCENASRRMZMAXRXXTMDDUJMXVYAVMDBWHPKASWEZGOKLYBHVQSUTEVBQRQXQCIHPBBHIZUMHPVNICFKNYQANGGFHAZWLMTLTYDKIBTVKFVOLYXVTIDTJFQPAJZPVULIHOWHNZJRNDOFKGOOCGFZEGRURQZUOOBQWFPJFZENXROTFUCPEYWWCEIDSLJIKQVWXEFXQRCTDLBYYLPNILAJMSSKAZNKYRTCHDSCDNOISB");
    tmp_msg_0.predicate.assign("FTEMMOGUQFBEWRQCDNLXLTKHQWKPEAIXDSZKEHXMFLHYBAUHBPAWVCOKKJC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XAUWJBACSNXBILGECMKTYDYAGUIBNHJLINARKLDITGFQPMBGOCOPNWWXCUTDZVVSIKEZDHUXABFYHFQVIYPDAAOPJLC");
    tmp_tmp_msg_0_0.attr_type = 1U;
    tmp_tmp_msg_0_0.min.assign("CRZILNJJZYEZKMIXCEAGYFBJAIPXGQSGOZGMVOQRDJLHVLBAFAXNDMBPIJUTVBQHZVUFEWBTEOEHHSQVRODCKFZBPYUEKUUWNLYHSLFFWUKPCGGAACZGGNCXGBXTRPQLKFCQWPPSAEVWUKHTSBFTRXEYIIPWJSHZXWSLMDKRXNFNEBDTDKMWDDOOVZNWOYMICEAPTKSXVIHBQLWIJQFQMJLMYRHAMUOYTONDJ");
    tmp_tmp_msg_0_0.max.assign("POYMAKTKDSIBNHTFZJYGLQYIDOWUWKSICXCPOVFQMPSYIMNFUYVTRDHKDCEXLATZVCTGIMVCRJXMQBAWIYEUNLZECWYJAIVLDMPXHDODNVTSYKBQEPZZUTVUJCRGHWWSRPTNZNRFOBJVXJIBURARXAZZRPJUSBGBWEUOIEHOFQGXPHYULMHJFKSAXWVJNCBJQIWTKFEQFSHWEXCHMQFQGHPOXLNZGEN");
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
    msg.setTimeStamp(0.9981603020376307);
    msg.setSource(46580U);
    msg.setSourceEntity(0U);
    msg.setDestination(32564U);
    msg.setDestinationEntity(41U);
    msg.op = 159U;
    msg.goal_id.assign("BHSQUGIXTFFGIWNEOJGIKPASUM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QNMQFAYEWOBSIZFVCGINZNUEKSACOMLAXBEMKBWPNSOJPGLPFUWVRYRIOQRCTABPJMPOOSKCTFLPBIN");
    tmp_msg_0.predicate.assign("ATJTLPWPFAFJDIXBXGJKHVNHLVQYWCLUZPJQOYJGT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XAGUZTBJMQWPYGLJYIJRIVSXNMEBMFIJVTDGWDASZZFOXRFZZSWOACQLWPRRSKO");
    tmp_tmp_msg_0_0.attr_type = 116U;
    tmp_tmp_msg_0_0.min.assign("IUAEYBHGIMHGHJDCSVKKHFVUKSGBQWR");
    tmp_tmp_msg_0_0.max.assign("CMRKFUDTJURYQDUHSXVZCCQVRWMAIWAQHDFTPDBKBSPHAEWSVGPTZNOZMTCDTNPNAECOIUNAJJIEYGTCYZUOBSH");
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
    msg.setTimeStamp(0.24576310691158487);
    msg.setSource(21018U);
    msg.setSourceEntity(122U);
    msg.setDestination(15223U);
    msg.setDestinationEntity(16U);
    msg.op = 155U;
    msg.goal_id.assign("FDSQKGSTUSNXWMECEMFLBKDQHIUZWALUNXXKDYZZXMELUFATNJZXPGRRZNVHCVKZBQVTMF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CNPXEESVRJZVWXGHHNYRUHIJOWEFZEPWXRNIBMERXOCRJTUHUONMVJBKZTBYAXZZYIIKMAIQVAJMYGCWFMDKEJUNNWDMZBVTVGIAIDPDKYRQTAHGZSDDLDWBJGPLXNOAESYHZTESSSQQUHPALX");
    tmp_msg_0.predicate.assign("XZGHLZTKJRVPDKXMMLHVCCRUOENZRPAYSIKMFRHSONBYYUGQEVFPXZJDKASUTNIXELKNOGQTRSFNJHPLWZIDMYCFAOBJRFSQCLDAMESFWWUNTFRAAWQPMFHFWURUXKTDRIQQKVNGWTVJFOOICK");
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
    msg.setTimeStamp(0.9822151595214316);
    msg.setSource(57919U);
    msg.setSourceEntity(231U);
    msg.setDestination(9281U);
    msg.setDestinationEntity(34U);
    msg.name.assign("VRQYPKRDCUKSJTBZQPGPCBYTGXJL");
    msg.attr_type = 143U;
    msg.min.assign("SXNYPLNRZQC");
    msg.max.assign("KHYRXTPUOAEHXGSFBNXHBXQMDYBMDGNGCBSSJKOEIHZDQDXIINXZTRWRJQJUNVOZCZZPRWGMWEQEHZNTOVBBYGYQEJSSVAUFEJLVQXLJU");

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
    msg.setTimeStamp(0.9692250468316769);
    msg.setSource(35619U);
    msg.setSourceEntity(75U);
    msg.setDestination(36317U);
    msg.setDestinationEntity(132U);
    msg.name.assign("LCFFNEWHDOYBYQUMHQYWAHIUQGJYAVTKRNQWDXEDPHTNVGIEYERBPSNVXTIROKTEKICLIHGDRAGCRUFYJSNFMDGUJDUJVVOHXRJRRKPJGTIIBFPTPAFBYGYZSCRZUTBJMXFPNMQOEMDUFBAJVBWLDMCOSENBXPIZSNTFEZMKZQTVAHOQV");
    msg.attr_type = 18U;
    msg.min.assign("LNZDCDNIFMCOPIWPLGQPUNNANNGMACAFUFGKILGQCVLQRRSRSBUKZTTAWZHSGOJCOYFRTWQVQKETZNEASPNFMVJUVGHCFIYGZAYAUXRLBHGBZORTPUZQFWWHYKEODLHZEFOULKGTCYGDJXPYORTXIVJJHQWPSYWFJEVSVHXUPXSVCBBRDNDNFJYIM");
    msg.max.assign("LFEOKOPNYFMFBFTNMXKITPUJGPAROMCUXTFZAQAWHINEUREGGFMTQKBASTSDVBDHNRZ");

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
    msg.setTimeStamp(0.837814591627492);
    msg.setSource(41943U);
    msg.setSourceEntity(107U);
    msg.setDestination(9500U);
    msg.setDestinationEntity(235U);
    msg.name.assign("BMTJVTNYIYHGCUUBYTHJJRPQHJCXRQOQBERDAVZTCNTXXCLGWWMHMJVOJVFGXIZMXGWLXKAHXQQWDPQBMPLVWTDPSYSFZVSCOFDDF");
    msg.attr_type = 126U;
    msg.min.assign("PUKLEDCTXEUPMECZQVDKADIQMBRKVTARFUCIPFNXLHNUZSIAVUGFMBXRWWOZ");
    msg.max.assign("PHCDHRGXDVQASTICCUUUAG");

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
    msg.setTimeStamp(0.8170983353946756);
    msg.setSource(29015U);
    msg.setSourceEntity(207U);
    msg.setDestination(30688U);
    msg.setDestinationEntity(223U);
    msg.timeline.assign("VTNQKJYLBWGRMXQGCKBFZCMRMDRQSBPYAZDLWZWKGQSAIBMDIWYSSSLZYBTENCKMAOJZBJLOTNUAZKOXLSEBWOCCWDVXVNCHORELRVYG");
    msg.predicate.assign("LUXWRXAGSQVWSQIKFVYNOFZNNRIIFSAGOLQZQDTPEJAHGYLEKIRFOICIAUQFNRCYPTECAHVJGYALCYRNPGTIUGUXDPLWXWUWZQNZMJIBFYPDADOYEMICZKUSMHXOVTKLKBVAXBROONMJZDGIPHBEZGCWTFJWUCPPDOURNKCAJVLYSBMLMRQVDLHTVFHPBJRPVSEHEZMEUWJHHJSCZTYBGT");

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
    msg.setTimeStamp(0.4020367007690854);
    msg.setSource(59563U);
    msg.setSourceEntity(203U);
    msg.setDestination(30934U);
    msg.setDestinationEntity(51U);
    msg.timeline.assign("MZEVRAFDGLODBJAHEAOQLCHBHXRZCTEMJKTRKPACEHGFISQWGOVMOQESUIRIZYQCUNJYWRTROGNPXTWXRYJUZ");
    msg.predicate.assign("TGNLRIBOLAEZYLFINKQVNKFMSJNOSJFDOHHTWXDGOIAMKIXOKXRXTBZLSNFTJDCDSPESQDAHWWXMHAVLRCKOGMEAHBBWLAJYEOGSLBRMZUYCNYRQOWBBYVKPJZSTDCFPGPSYIQUKZMJSCPCUHXJTPCIOLVOVGLFUFVAWMUHZHAHDPFXUEITTMQLMFCEJQRWJBJQDECWVPBVPZWSUNQYYXRWXI");

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
    msg.setTimeStamp(0.04888461933274224);
    msg.setSource(50432U);
    msg.setSourceEntity(133U);
    msg.setDestination(12327U);
    msg.setDestinationEntity(47U);
    msg.timeline.assign("ZWOVXBULIIHVUJTVWOFOSSZTJLSXAXAXLRNDTCSSYFGMFIMZBIKJKKETUFXZPXVIRHGAICHKMGPOERKIBPWQYAGDWTBLNBKQNDL");
    msg.predicate.assign("PPXIPYRHFZKOWWXFLGBAKIIEFMZUDRJBQGJLDXAXQKSQMAXHABMTNOTLCUCVACXDVPQCJVKYGNQCCYQHMLMFTZOSSGJJSSWXTPBYMDGRJDNPNADBKTNWZGOVODIRYRBNEGJCPZWWLCTQJNITLXNBBRPUAOEYLRYMIZFVCSHGYMXXHSQQGUNZLOHUZTZKEKEDOUHKLMRFFZHFKAIQWRTMFU");

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
    msg.setTimeStamp(0.24195974434174727);
    msg.setSource(22417U);
    msg.setSourceEntity(164U);
    msg.setDestination(37769U);
    msg.setDestinationEntity(37U);
    msg.reactor.assign("MVWJVUXZFQUJSIZMNJCBCBGQAEOPLKCUZAFKJJRHWCIASWYYYGRSVGQYJGMYADWKFOAUUZPRZLKPTTFKPHENVALQQLWLILLTOLXBNSAXZYEMIPXZKMEYBJEXRCRGDVOIBBNCCLIIHDGOBBIGXVJBFGIUDCDSYWQKEVUUGPSJRPKJHARTFTRMUQOAFTLXZTIMOYV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YGQVXUTKQLFHIEFNLJVJOUKINPLSSRSSRBHVZGHMEHVUCKRFRBLXSCPG");
    tmp_msg_0.predicate.assign("ZXYNHAFTQYENQSUGMUHGOAABLQAXCPSHGGZUJMPXLBHPMOEMZIAXGXFAVQHIDFIKJPVDNQUAMDQEMCZRBLF");
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
    msg.setTimeStamp(0.26371238180735734);
    msg.setSource(39084U);
    msg.setSourceEntity(117U);
    msg.setDestination(45057U);
    msg.setDestinationEntity(245U);
    msg.reactor.assign("RQXQZQLESNCKWSAKZKGHOAZZMABPWGKMFSTAWQJXRPUIUILHMZTFICWNPYMUHSORLPEGBNHFWUBNNWSAKJYZJYHYB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PNOAGCAMZYVQJNUDGNBVCXRVTJSBJTIEMKLQXUUFQZWHAOXSRPMFZCSULHDNPRDBIZCRZWHRDMSNKIHYMYPRQBLTGVBEKTKUFWBQWDARSKKPBQLOVSZERDHLPCGGGXQIYNWBIVT");
    tmp_msg_0.predicate.assign("UEVZQETCNIVNLCDXKPSJRFSKOFHZLHBOBGZNLIMTNETWQNJGBHXIVKVCSUFSGETUBAIVMQMGWUMWAYXRUKRABUEWOODOFMWUPZOVHYXAIMAFPYOWFBMZPJYZVZLEXKXHPHQGSQDROMWBPWQIHSNJDNPKHKJJWM");
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
    msg.setTimeStamp(0.10939844333948057);
    msg.setSource(56595U);
    msg.setSourceEntity(89U);
    msg.setDestination(39240U);
    msg.setDestinationEntity(237U);
    msg.reactor.assign("GXUDENDBRMPYTOFGBDEZWTLAVYMNAVQINHXJSDOKWRCDFINOOPREUQBWKGRGBKF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZBCWESDXRGSOIHNBHIYEFTYUCAJYWVRUCWAXCZW");
    tmp_msg_0.predicate.assign("AASCJRPAHYLIQPOXLZSJYFZBMQNDDLLGGOT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HTBAAFCBQUTRXUZYSQCWQCFTTAWMEXWVDATLRYSVQNGIKSRVCOURUMAXYXSDSHSYCKITPDKLRFBKDYXGXVLBWOPUDGKKKATIPBRJVNFDFYHRSZLXQVMFDSFNUQQTJKOYZYPFSHBNDZLAHPDGIPRTZNBGIAZMUNJOOM");
    tmp_tmp_msg_0_0.attr_type = 168U;
    tmp_tmp_msg_0_0.min.assign("BBALDJDIPITAAMJEPRXXNHLGCVRQCALEVMLZCQCPZALSCFNDTMFGAVWWMICOLMWDGQWHULCHDRFOFVWFHNFYRDZLSFKEJVIDKAGVYOUDIXKSEPYGGGESKUZIBJRPELHZHURXEMTRXKTFVXVXPGNOMTRYWTKB");
    tmp_tmp_msg_0_0.max.assign("TKLMEVDKWTCOVYLHNCKCGVDTFLZRCZYGAGWVQWQKAFPYTXENGEXBHMEZPOIKBXXNJUMPCSLOFBJMYXIFMTBUESORVXFPZIWXHRDJWPULJSJMQRQVEILDZSUCLPYXFZEMJRRYQDTIHAUOFNCHHCQMGWEASAHGOQWKADHZPZGRGRIYYQDUHIJTKLNSSUTRXDIOXWPSNIVHBLANMFBLEBSVVABZKTNBJQWDWVGYJOOEAKFFRUOQCUJAMKBP");
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
    msg.setTimeStamp(0.36256443898574164);
    msg.setSource(22318U);
    msg.setSourceEntity(21U);
    msg.setDestination(32989U);
    msg.setDestinationEntity(107U);
    msg.topic.assign("XGEKXNCJLUPUJPAPKYMTZMUEEHFTGOWFPFUDNXMXIETOBBK");
    msg.data.assign("MOZGXMATQSBUPNGRCNUQFLFVKFORHLCOTHWVCMTVYBAIZPUFHMQUJKCIDNFROUQTBLVRKPQPGGHJ");

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
    msg.setTimeStamp(0.821824119314154);
    msg.setSource(65057U);
    msg.setSourceEntity(65U);
    msg.setDestination(44921U);
    msg.setDestinationEntity(254U);
    msg.topic.assign("LKQRVVSVOPCKDANFJICRQCAQOWVPAAHUVFSYCZFZLAHSPOQLKYVWRDZTJQKBXASPZSCVPWLJQFKVOZOTICXBQQATRMBWTJHKUBENGHBBMQJMYJJNILOUXPOKGEFMZRGGSAHXEOFWKNPUIGHDUEAHNEZXIFMPNRKBDVKCXSMETY");
    msg.data.assign("XNFVLRHUQWIEAOBOOSBZNXIQCHQTTMSMWUTHGNBWWRJPIODOAAIHLEYVESGIUKPOMNXXAWGQIXMFFOEDXPUYOVMNKLKUJGKVAKSZZLUMHYDJHUTJDCBZPIDVEGXKQGHF");

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
    msg.setTimeStamp(0.8288992705527607);
    msg.setSource(4556U);
    msg.setSourceEntity(139U);
    msg.setDestination(21606U);
    msg.setDestinationEntity(124U);
    msg.topic.assign("LIXBNCEWFUKRQPSGWFGXGONCASLKRBKREDAKVRZBXXOIAQDUQNRSEZMRGMBCBKYZHVYXLTJEAMUUFRLUUFOLJYCSVPMQHYWJDPXVLXQXSAOSIEGAFVUIDPEYTTIHMHPROHTHNEGHOLSIJN");
    msg.data.assign("YPXDMHLWJMUSNONIFHIGWSAQHAMEEKJGNTPBOOXCDFCLWBQGCHUIJJGAGSZEYITQFKLSYHEYRDMNNHSEEQPVUBZWIGCWGLNNRFOCJIUMAUUARQFCLHKFLKFYXZDPVRELBBTQBWVNZMAAQWVYXYZGVSIRKHKCVDTLJXPPUYZMHJEZZDXOMDGJKKFFXYO");

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
    msg.setTimeStamp(0.9713388547069174);
    msg.setSource(64922U);
    msg.setSourceEntity(180U);
    msg.setDestination(65167U);
    msg.setDestinationEntity(14U);
    msg.frameid = 248U;
    const signed char tmp_msg_0[] = {-60, -15, 55, 81, -44, 52, -124, 35, -15, 56, 52, -80, -118, -53, 27, 36, -101, 6, 92, 97, -27, -76, -124, 20, 90, 9, -38, -20, 104, -35, 35, 37, 57, 31, 65, -16, -36, 111, 105, -117, 12, -116, -96, 124, 42, 83, -102, 81, 67, 25, 101, -35, -83, 59, -113, 116, -4, 32, -32, -81, 48, -97, -14, 29, -84, -16, -47, -58, 64, 60, -110, -125, -97, 71, 78, 94, -17, 78, 11, -81, -116, -3, 38, 44, -22, 75, -4, -116, -36, -4, -38, 76};
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
    msg.setTimeStamp(0.6588530180997254);
    msg.setSource(52474U);
    msg.setSourceEntity(79U);
    msg.setDestination(29414U);
    msg.setDestinationEntity(246U);
    msg.frameid = 170U;
    const signed char tmp_msg_0[] = {-39, 92, -50, 80, -23, 18, -47, 73, -41, 92, -5, -61, -102, -121, -8, -53, 18, 111, -113, 112, -104, -28, 103, 81, -99, 66, 100, 117, 78, 95, 0, 3, -92, -79, 105, -58, -120, -9, 123, -71, -100, 1, 31, -98, 36, -95, 42, -88, -117, -10, 97, -85, 69, -10, 103, 118, 46, -73, 124, 94, -61, -12, 55, -11, -39, 85, -75, 93, -51, 72, 70, -39, 28, 118, -4, 22, 106, -62, -78, -13, -119, 6, 40, -92, 120, 61, -85, 5, 122, 21, 97, -1, 7, -50, 94, 33, -42, 94, -70, -79, -56, 115, -25, 74, -66, 25, 23, -1, 108, -43, 25, -9, -61, 7, -98, 69, 112, 65, 15, -43, -38, -18, -44, -9, 74, -111, -92, 74, 15, -74, -25, -54, 60, -50, 75, -35, 91, 125, -102, 80, -61, -18, -69, 56, -90, -80, 44, -59, 36, 115, -18, -98, 89, -56, 112, 14, -21, -34, -105, -100, -6, 98, 57, 125, -77, -128, -41, 116, -90, 104, -104, 95, 95, -29, -88, -104, 64, 44, -28, -46, -27, -105, 120, -128, 27, 125, -110, -104, -71, 38, -35};
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
    msg.setTimeStamp(0.9683322347207344);
    msg.setSource(10052U);
    msg.setSourceEntity(92U);
    msg.setDestination(21985U);
    msg.setDestinationEntity(173U);
    msg.frameid = 247U;
    const signed char tmp_msg_0[] = {113, -127, -70, 100, -123, 43, -93, 48, -15, 34, -6, -1, -59, -108, 7, 121, 116, 92, 67, -12, -101, -106, 111, -65, -4, 41, 35, -86, -78, -81, 57, 41, -59, 93, 91, 115, 101, -3, -119, -20, -74, -109, -22, 34, 37, -57, -104, -89, 22, -6, 100, 121, -122, 100, 78, 63, -79, -55, 28, -86, 64, 21, 38, -91, 56, 53, 10, -71, 79, -15, 76, -46, 83, -127, -5, 34, -20, -78, 34, -38, 45, -114, -41, -121, -73, 98, 43, 92, -86, 118, -80, -81, 96, -27, -49, -116, -102, -108, -76, -95, -113, 125, -32, 116, -46, 98, -35, -12, 2, 37, 72, 35, 89, 17, -85, -39, -69, -15, 100, 86, 2, -89, 106, -21, -65, 11, 107, 50, 89, -5, 50, 7, -106, 111, -75, 78, 25, 100, -51, -104, -102, -115, 121, 123, -40, 20, 105, 50, 16, 115, -14, 91, 41, 73, 79, -64, 93, 102, -15, -80, -22, 67, -52, 108, -31, -52, 38, -112, 30, -15, 8, -89, 61, 25, 39, 75, -102, 9, 25, 82, -76, 95, -33, 8, 104, -11, -101, -48, 62, -122, -42, 34, 73, -92, -5, -92, 122, 120, -92, -57, -99, -70, -120, -36, -92, 68, -118, 62, 123, -76, -52, 40, -47, 31, -69, 8, 24, -100, 98, 43, -79, -32, -67, 98, -111, 19};
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
    msg.setTimeStamp(0.11800536510297399);
    msg.setSource(48105U);
    msg.setSourceEntity(235U);
    msg.setDestination(27607U);
    msg.setDestinationEntity(173U);
    msg.fps = 16U;
    msg.quality = 38U;
    msg.reps = 4U;
    msg.tsize = 193U;

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
    msg.setTimeStamp(0.6424377283410261);
    msg.setSource(25863U);
    msg.setSourceEntity(57U);
    msg.setDestination(30760U);
    msg.setDestinationEntity(253U);
    msg.fps = 69U;
    msg.quality = 28U;
    msg.reps = 225U;
    msg.tsize = 195U;

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
    msg.setTimeStamp(0.48308545151316984);
    msg.setSource(21262U);
    msg.setSourceEntity(120U);
    msg.setDestination(12410U);
    msg.setDestinationEntity(167U);
    msg.fps = 10U;
    msg.quality = 77U;
    msg.reps = 2U;
    msg.tsize = 101U;

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
    msg.setTimeStamp(0.7828023111731007);
    msg.setSource(34490U);
    msg.setSourceEntity(208U);
    msg.setDestination(27553U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.5880805682727507;
    msg.lon = 0.5730299074131247;
    msg.depth = 160U;
    msg.speed = 0.8123122726642246;
    msg.psi = 0.7620086928174186;

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
    msg.setTimeStamp(0.21794712554398188);
    msg.setSource(6555U);
    msg.setSourceEntity(22U);
    msg.setDestination(12567U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.8729393713339314;
    msg.lon = 0.015380476925568098;
    msg.depth = 225U;
    msg.speed = 0.5163894707126672;
    msg.psi = 0.7038618421037283;

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
    msg.setTimeStamp(0.22590672542586143);
    msg.setSource(30811U);
    msg.setSourceEntity(30U);
    msg.setDestination(26634U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.5462357919198653;
    msg.lon = 0.8498491733069169;
    msg.depth = 143U;
    msg.speed = 0.7039036276702393;
    msg.psi = 0.009922793406870856;

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
    msg.setTimeStamp(0.43227698981603324);
    msg.setSource(12925U);
    msg.setSourceEntity(253U);
    msg.setDestination(12039U);
    msg.setDestinationEntity(201U);
    msg.label.assign("PJDAFXKTQNTTWUWUGYOYMCFQXRRGCNYPPRKXSEICABMQZPNRBAVONPUZFEVDEDUXCODTNQHSLSSZXGYLFFOHLMUQQZIOHBELVGLYXNFQQHWSFEJIGGSZWSBPAIOKHALAOTZGVXXIJJBDXYFOTILEBMBTSIHOB");
    msg.lat = 0.11069481685831972;
    msg.lon = 0.266376304744952;
    msg.z = 0.557682803596413;
    msg.z_units = 117U;
    msg.cog = 0.48948524733914145;
    msg.sog = 0.36494311924516987;

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
    msg.setTimeStamp(0.46387856676728123);
    msg.setSource(44861U);
    msg.setSourceEntity(118U);
    msg.setDestination(51856U);
    msg.setDestinationEntity(106U);
    msg.label.assign("VBHIMTTEMVDGEUKBVBWNVSOCQWUJNVNINKMLWHHBBCSPPPSLKYGKCFMYVNXDRACSLFEFHNPDCATBLARLQTDGHCFPKMJYIUIOWZVWRYBKTUPOWIYPQDXGMVQDOJRYOYJWKENWRJJHZZZYMFQGZXXLASLSQICEQQIANYPTGTXSUCDFEARRCRGTJOMKHIAARXB");
    msg.lat = 0.7017791719787128;
    msg.lon = 0.34741927546161033;
    msg.z = 0.36723230246593286;
    msg.z_units = 82U;
    msg.cog = 0.5277050488476428;
    msg.sog = 0.6794090847816286;

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
    msg.setTimeStamp(0.933721301615373);
    msg.setSource(37987U);
    msg.setSourceEntity(167U);
    msg.setDestination(4668U);
    msg.setDestinationEntity(231U);
    msg.label.assign("EVLRAHQQFPBZHYREAQPZQFHUJOTZTQBPAURCDUGWNZDBBMXLKMPYXVHEUZYRHGEATYQMDJLPMODKTJRCSQQLHHLOVWNVGBCXCNYOANSKCBSVMROWAUHXYNTIYLASVVNYMISKZWFVGBOKJJMCUIUXIAJIKZLTPTJIZCRMUJSGCGREHWYEOCVWOGPESBQYEWSDTUNNOXDPMENIPZFLRGHFLFUSFILIKK");
    msg.lat = 0.27764124031121973;
    msg.lon = 0.44805383271146115;
    msg.z = 0.24274594674681493;
    msg.z_units = 189U;
    msg.cog = 0.015576808937977749;
    msg.sog = 0.3503592747877722;

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
    msg.setTimeStamp(0.9231939988239432);
    msg.setSource(6535U);
    msg.setSourceEntity(44U);
    msg.setDestination(40612U);
    msg.setDestinationEntity(3U);
    msg.name.assign("UDZVBPGLAQYKDLDSGFKJALEUWYDXRTQXFFZPPWKKEYNWTIVXWMEJMVIFCBFROOXASAXSZIKPBVVKQYVLOZVCGFQCWCJTTTAJXITHEBMVUPUEHZMFOOSCIRMHGIOMANLBLNYHLSJF");
    msg.value.assign("QTALXTNUABKVWDNRDDPNSANMIJRCPFEEKXSWPSAHQMQKQWDFVZZGSSOELSACBUXFHFRAZNIFFMOBWGRSTEBOGXNVPRBWFWELTCICHNHXHWRMKCJOLHJJUOVFXNIYTYPFCDZOYYYPT");

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
    msg.setTimeStamp(0.530654106199005);
    msg.setSource(15681U);
    msg.setSourceEntity(150U);
    msg.setDestination(9992U);
    msg.setDestinationEntity(177U);
    msg.name.assign("YWNGQEWCAMVHOQZXTQEVRYXZKVPDFHGFIPLPEXDUCXBUWTUZRSNCJAOAYGTQBCDYMGZXWHDKOPJVVYRDYNWQAGWNUNYNTMVQRQUAXKEEOEIZFCCMSHKUFFFIKKIOBLRPMODBPLDRYKXKHJCHLBZJBEWCAZKPSSMMFEKUGIUAYPLTDLSGTBSSQX");
    msg.value.assign("XHQSDVNQQLAOAYEEYKVSUCKRGCFMXJOIMJSXQBMPWTHHPVIITWAXLDLNPUEAZXVNTQZMDFKAOCSEVJDYFBHUNXMLUAWHDQTCJFFRZBBFLQLBFNANCEPSNRPWBSJKZGJQKIOTXERQJH");

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
    msg.setTimeStamp(0.9772908039662859);
    msg.setSource(60265U);
    msg.setSourceEntity(105U);
    msg.setDestination(8268U);
    msg.setDestinationEntity(92U);
    msg.name.assign("HBTQVGNUXSYNBYMREONMBQXSQURTVXLZPLGASLDDIISKEUCVCKOMUSKQLNAADJCWFKPHWEVUVTJ");
    msg.value.assign("OSQHKTOGUZANHWTNBGWFPLNSJRYIAOZUETPGZFXCPSQVLDBRMJVROTHNAWRMJYIPMXVKJBQBAHOYIQHJOEICGBGUTRBHHFGCWKCSFALQUTZWVPNRHZAEMMLMFRRZKXUCPNYSCWQWSLQSGXEOPXDOCRBVOYTZCNDWTJDSAYVGWEYOJNXVJUEVXIBYSMPUDWRDFPCZKKKXZUQDVCGHPBLUDJNEBIIHFLNIEFIEUEA");

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
    msg.setTimeStamp(0.3857422453372822);
    msg.setSource(28648U);
    msg.setSourceEntity(14U);
    msg.setDestination(43730U);
    msg.setDestinationEntity(237U);
    msg.name.assign("HZHUZAJEAS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IRFOMDBJNEYPBTSKNQAAGRSPJEG");
    tmp_msg_0.value.assign("VCSJDHASBUEWEJYPIHBLGVFBAROZHUMQBUBODLCIUSPVIBUIGCGIABOYBUXKVJLGCHJXXUAZWWWYGNYZDSWCRJVENJCAKZOHDWRPZWMLISDMRTVNTCTGWRRHZEQHTMQZSJAMHTKDKFR");
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
    msg.setTimeStamp(0.1784449157790562);
    msg.setSource(52753U);
    msg.setSourceEntity(161U);
    msg.setDestination(4457U);
    msg.setDestinationEntity(221U);
    msg.name.assign("XLWJCFLTCYAMIRMHKZZREKMLYLOWKXPFZKMQCBUMRZEJKBUOTINTDLEKSVXPVVEPHSMDEDUCIIXSNNQENBGZOINTYAVWDFWRAJOOBCAVJZZVDBUUQREPMSUFAFOTJCRJIYIYGJUPBNQWTTCOTTQZWBRWAVSOEPHXJNUFZRUGJGHDBRGNMQLCYKHOQXNXSWEABGALFOYJBGHWYAYKWSQHKFSQHDPHXAMGK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TLBRUAQHRLFGDTIWCWRSFVOGYZJXCXABBVOLDOHMECCTNMZJHREETZGLEPEPQRUCTPKYKZZBBVWDIYGGWDDOFDWNBDSKPAOJQUHHCTDXKCFQUULFIAGSSXOVMUEY");
    tmp_msg_0.value.assign("QGBFZXXNRYQIIEPXDCK");
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
    msg.setTimeStamp(0.6100630952615781);
    msg.setSource(51611U);
    msg.setSourceEntity(147U);
    msg.setDestination(11367U);
    msg.setDestinationEntity(168U);
    msg.name.assign("LHQXKIPBWMYCYYEKDCPKUHQTTHJDODRCTJAHJLOSSGVBQLUKBGOMVOXLKJHXTDFXCKPYWNQTIEAJVWRSZWHYACPQNLULWUVKIYAPUINPINCSAFSVDGOYOCEJSDSQTTHIMMFGJWUAVVERJBBQNVUEBGGAERQZTYBXM");

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
    msg.setTimeStamp(0.7728263202627231);
    msg.setSource(41102U);
    msg.setSourceEntity(3U);
    msg.setDestination(47000U);
    msg.setDestinationEntity(72U);
    msg.name.assign("FYIHYZMTHKUHCGJYLARNQSJSGJFYSAGXLVKZLLFDTVIJTVSYNVDOENZZBVBNSIQDMMJWBOLINZXACMUCPTUZBXZRXROSQCNMELQUGFBGASYAQEDEECOVYHWADVXBNWKRZPPRVGSNOGVFWMFCCKINTEOJZOGLMPEWNOXDARAPH");
    msg.visibility.assign("MRFZOPKRIZRZYFGYSYUFGDWEDQABUNSMKJSXIIBBCA");
    msg.scope.assign("EYIJEOEXNABZSMVUJQAIKBNRHNOBWMPLGWXARDLNGRQJMLUDRYUZBPYMOQFGQGOOQYFUCKVPUDJUXAOVRLXZNTXHEALNHMWRCAVPTJOJITGWJIFMSAOHDLQZBYOPRHXMJCHIQDQICQZSMLGXXFBDD");

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
    msg.setTimeStamp(0.7844345854033152);
    msg.setSource(56618U);
    msg.setSourceEntity(41U);
    msg.setDestination(36530U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ORIABDWJDHKRQBRIUWHRFURITXMEMT");
    msg.visibility.assign("HVQXYQLDLKPGZGXFHSTPEZOFJDCFOYKLFELMYIWZSKUZUMDMZGUCYXBXAHPMAIVFPHWZISSJBPBCURVEFWVITTWKEOTCOGSPNJVBCTEMAQESVECZWHWPZSWOKRWIATOMQLTCRDSDLQJXUAAJDFCNANWRVRHHTBYENBAJERTMXLYRMG");
    msg.scope.assign("ZATPSQNAEVUZBNJBHFLCPXMMBJGWIELMGGWQRWZOLPAIRAXPSBDXKKSYTIJEDRZGCUXCOFFQYRDHKFFILBBPBYIRPXVLKJZIWGUHFZOCSKVRFDUQYKTXFTTWFTIPCJKWOCSDELNGEADLURDUPEGJVDOAEMCSNWLMBVMGQQWLXOGMJIQNEVERWHSHYSJQCKSHOGUYBISTVQRHTDVZBOPOXMHNJYITUAAYXORLUUAKHPJDNVZCMWKVQMZEFX");

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
    msg.setTimeStamp(0.14377099073842237);
    msg.setSource(14584U);
    msg.setSourceEntity(40U);
    msg.setDestination(30506U);
    msg.setDestinationEntity(126U);
    msg.name.assign("GUAQTLIAAVMWBFFMUKILGKPTCDHXHVMLPNZKBXQNKPITKVALJPEERLDKEJCVBKZDAIJCPVAROOXEYYWRSVYWWNGXEIOUCBDRQCMLEFFXHQNNXGWFCWSPJZMQRQZVJUHRZDNZWXFUIIBETVUDSYXMJZSCAOUUJFTYFSMBAKTZOHSHXNQVHOJYSOTBDDWHAWMFPBDYLLCGVQSGTYRMRJOYHNSIN");
    msg.visibility.assign("MZQGETKJRDNNXITNECVZZXXWWPCMINQSQJKR");
    msg.scope.assign("XUGIVRIILPOGORRZUDSIRNZYQKDVLLNJHOEQBVTYFNRSZJMVE");

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
    msg.setTimeStamp(0.2660371291961898);
    msg.setSource(27052U);
    msg.setSourceEntity(62U);
    msg.setDestination(65348U);
    msg.setDestinationEntity(22U);
    msg.name.assign("ZLCBNXITKEUKWSPBFBAWJACJHARQEDZJWPDPIVEEFXRIWUOAXOMHVTQUYPEGWHYO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CHMIDNYYEXXNRFNHBKBVVJGBHLQWWDIWMKFZSSTYBRKJTOGSRUZJVAMRGHWVNCGYFIVCIHQMXPPCDZYNTKITTXHWRLAOTQZKKEYDVUFIEBYCQSONMPZUJNCSZOTXDEEGGUEPRLUOAIBIYZAMFUJQVOCASSWTXBGFLLPLZUBLZPUDLAJDYCQHIWHIJOHPKAEJFGQBXZXCAWVSQTRFWRMBEPPSMVTDNNALDCPDRYEGFOKHOSXQMQUJOGJWFUR");
    tmp_msg_0.value.assign("FFSMDSWUINAL");
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
    msg.setTimeStamp(0.3970698272174986);
    msg.setSource(47108U);
    msg.setSourceEntity(233U);
    msg.setDestination(37108U);
    msg.setDestinationEntity(55U);
    msg.name.assign("TVLLZIAABMESRLFNNBGMKLAGQJAJAYRVZIHELJRNPGPYVNUXECLVCKOWP");

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
    msg.setTimeStamp(0.16558428840304984);
    msg.setSource(26846U);
    msg.setSourceEntity(26U);
    msg.setDestination(26742U);
    msg.setDestinationEntity(47U);
    msg.name.assign("OFOLJSWTNTYTPQWMFXKTCFZNHEYCNPOVIIJJVZVRAETNENCUCIXRUCASHIMTZHNGOVENHEZYZCWBGKSQYOWLIFJSQCHGTQWQXDTORCXUDARAXAQUTULGIPRJMLMZAJVBKZMGMADLKILNDHGPAVBUESARSXYWYUPOXSQCUSVGQRITDYCBELJGBBDFAYLJP");

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
    msg.setTimeStamp(0.6916508535516434);
    msg.setSource(25908U);
    msg.setSourceEntity(23U);
    msg.setDestination(51486U);
    msg.setDestinationEntity(109U);
    msg.name.assign("CUJHJLIMUBFVSKFTBGKTEBHQYMMHQRAVNHDLNKOLYCGMLYDYOEMVXAERPASOWLGXQUXIKQTLKSAVJBZBSZXIQKWOOKZYLPGPNGRKOGLJNDPPE");

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
    msg.setTimeStamp(0.0705804119837149);
    msg.setSource(9393U);
    msg.setSourceEntity(240U);
    msg.setDestination(49447U);
    msg.setDestinationEntity(244U);
    msg.name.assign("MEAYUIWXTIPULGPRAWMJXBKKUXRTZYOKBXIKSLRNDCCPOCKLJZJOGXZIISTAFNGYAEOSLBJBYTQEKOMQHBABWDHQBCWDLAFCACVOMIAOVUVIHMOXFBQCUBQYPSEDVHXUYFGVONQXDWEUWYAIFDTDFZCFTOHTBPHGZETYDNVRSNXZCSTKZKGANGQGEKVYJIQTPNVVLLLLHURGHXPJSYREPZWDJEFSSJMNFQZVEMQHPJRJZMMRRHM");

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
    msg.setTimeStamp(0.4539293550209884);
    msg.setSource(1983U);
    msg.setSourceEntity(18U);
    msg.setDestination(59782U);
    msg.setDestinationEntity(5U);
    msg.name.assign("DYDTAHKWKYTVCQEFHJXLBTMTUYOLQGRORIAWIUVEIPZL");

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
    msg.setTimeStamp(0.7924161139046924);
    msg.setSource(39785U);
    msg.setSourceEntity(224U);
    msg.setDestination(45757U);
    msg.setDestinationEntity(243U);
    msg.timeout = 3406012955U;

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
    msg.setTimeStamp(0.3004344304351976);
    msg.setSource(65446U);
    msg.setSourceEntity(242U);
    msg.setDestination(44375U);
    msg.setDestinationEntity(194U);
    msg.timeout = 1801946774U;

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
    msg.setTimeStamp(0.6161209159083835);
    msg.setSource(64863U);
    msg.setSourceEntity(138U);
    msg.setDestination(34290U);
    msg.setDestinationEntity(76U);
    msg.timeout = 2709687588U;

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
    msg.setTimeStamp(0.7580158450518485);
    msg.setSource(57871U);
    msg.setSourceEntity(59U);
    msg.setDestination(24413U);
    msg.setDestinationEntity(18U);
    msg.sessid = 3368888590U;

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
    msg.setTimeStamp(0.204918147158055);
    msg.setSource(38035U);
    msg.setSourceEntity(115U);
    msg.setDestination(38869U);
    msg.setDestinationEntity(153U);
    msg.sessid = 1624776841U;

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
    msg.setTimeStamp(0.6187727537147396);
    msg.setSource(29806U);
    msg.setSourceEntity(48U);
    msg.setDestination(30425U);
    msg.setDestinationEntity(203U);
    msg.sessid = 2144012344U;

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
    msg.setTimeStamp(0.1700021001262838);
    msg.setSource(25747U);
    msg.setSourceEntity(77U);
    msg.setDestination(44744U);
    msg.setDestinationEntity(65U);
    msg.sessid = 2378634913U;
    msg.messages.assign("TVHHYDSWLGFLZUQKQDDZWUBYKWPEQZXOPBLMKWAHLCMSZZOURSVUTGHAPWYBOCWQJNDFGTWWLFXUUITIQPARUFRNJMRIQCYJCFHANBRHEGUFMBVXPJWOZYLGUTAVRTTXNKMMFPOHCLOAMPYXPKAVVJETEZLASJFCOYOEYKLKAMENDSBXTONJRIQCFVUGDYEZDNZBGSEGRMXNGILBIGZEHMYVFIXJNDCIOXNPSRCJHCKS");

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
    msg.setTimeStamp(0.6118156954073527);
    msg.setSource(63235U);
    msg.setSourceEntity(19U);
    msg.setDestination(53929U);
    msg.setDestinationEntity(75U);
    msg.sessid = 2658056033U;
    msg.messages.assign("PCESCIBAUOXYQWLXUSQCGBVAWTEIDZMPUIWJRZDOWLKUDLALNAOMGVGVPQAETUSDDRXYTCUAWIBQDJEQGEWTOYVKZXTSBIRHKLIOHRZHBHWFLKAGLGGSXMZSFKRZMKVNJPYZDACNZVSZVFIAU");

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
    msg.setTimeStamp(0.2785845377657875);
    msg.setSource(37323U);
    msg.setSourceEntity(136U);
    msg.setDestination(57693U);
    msg.setDestinationEntity(39U);
    msg.sessid = 2969515292U;
    msg.messages.assign("ONSFXQUXQNBEXOTIHWPFEKLNLBIOONMAPLGDHPKMCOXAENZNKDYUIYEGMYVQUGZWGXYOCJARPVDJSITLYFQFCDLEYPEFXQKHKGIUAHCTQMIZXCATZKUDJVVZAJMNWWPSPMSXVBJDAILVE");

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
    msg.setTimeStamp(0.31824146429010824);
    msg.setSource(41995U);
    msg.setSourceEntity(55U);
    msg.setDestination(50641U);
    msg.setDestinationEntity(180U);
    msg.sessid = 1170248003U;

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
    msg.setTimeStamp(0.11743015580901073);
    msg.setSource(14052U);
    msg.setSourceEntity(112U);
    msg.setDestination(33104U);
    msg.setDestinationEntity(30U);
    msg.sessid = 2712641201U;

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
    msg.setTimeStamp(0.4611706672003587);
    msg.setSource(41990U);
    msg.setSourceEntity(0U);
    msg.setDestination(31865U);
    msg.setDestinationEntity(209U);
    msg.sessid = 1989250395U;

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
    msg.setTimeStamp(0.8347996561315002);
    msg.setSource(44805U);
    msg.setSourceEntity(44U);
    msg.setDestination(59088U);
    msg.setDestinationEntity(132U);
    msg.sessid = 2493704229U;
    msg.status = 56U;

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
    msg.setTimeStamp(0.13504969400082567);
    msg.setSource(34101U);
    msg.setSourceEntity(171U);
    msg.setDestination(15270U);
    msg.setDestinationEntity(15U);
    msg.sessid = 411758505U;
    msg.status = 191U;

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
    msg.setTimeStamp(0.32241669374369386);
    msg.setSource(34773U);
    msg.setSourceEntity(236U);
    msg.setDestination(63686U);
    msg.setDestinationEntity(136U);
    msg.sessid = 3704510289U;
    msg.status = 87U;

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
    msg.setTimeStamp(0.17353696334541402);
    msg.setSource(23423U);
    msg.setSourceEntity(178U);
    msg.setDestination(54664U);
    msg.setDestinationEntity(54U);
    msg.name.assign("XFVNISPCNPDMSVNXWCWMHGKXNYGIRLQJQTTULZAGYRNILRLVFBFPSVBGEXDVHWLVRUTWQSMYBNFYVRURXMOPYJAZWFIYHTGAQMAFNMJOVCWMFXKNPQTAHHQFXZKOG");

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
    msg.setTimeStamp(0.8009530047740188);
    msg.setSource(18732U);
    msg.setSourceEntity(218U);
    msg.setDestination(14199U);
    msg.setDestinationEntity(135U);
    msg.name.assign("RLJLCHHRXWGAEZVXAMKQIEZPHAPAQTOQYPSUEZCDEUBFSROZSRTVYZPYWTHJAHCWWXRWNIMOCNGUFYCIUHISZVFIJUTLGCUTWOQFNKWBOEOMDBKUVDHQFNMNBDNLMAPHSDKHVFPVZZHBKCUXIEEMJMKQTDBFPYQIELJ");

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
    msg.setTimeStamp(0.15982517430188936);
    msg.setSource(61084U);
    msg.setSourceEntity(209U);
    msg.setDestination(59265U);
    msg.setDestinationEntity(20U);
    msg.name.assign("YJXWGXZUKEVOOMQEUNVRKPSBBEZJXPEAZRZBMHOPJHLLNTOTWYMEHDRMQLFQPCVSDCMKARBCJKQHGRWUFYASQNNADFNTZOVXZDMTPUQA");

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
    msg.setTimeStamp(0.3693810843258327);
    msg.setSource(35926U);
    msg.setSourceEntity(41U);
    msg.setDestination(17808U);
    msg.setDestinationEntity(63U);
    msg.name.assign("MMCGCKRYSEXWUGYINHWOKOUGSJIHXRHBFYBVQLCZHILCVGWLJTRBPZZPMSBOOKKIPXFIZBVTBFVSUQOXSRBWDMDIREUHCZRJVTJUDMDFFKMETPQNLYYQOMRJQLVNTSWKKONOAANGMFAZPWIEBGVDUTFAYAOUOFQZND");

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
    msg.setTimeStamp(0.6307607183533813);
    msg.setSource(41406U);
    msg.setSourceEntity(203U);
    msg.setDestination(2474U);
    msg.setDestinationEntity(205U);
    msg.name.assign("DVOXXSBDZGTYGTUAVFIYJEPVDAAFPXC");

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
    msg.setTimeStamp(0.14685112952815293);
    msg.setSource(2857U);
    msg.setSourceEntity(75U);
    msg.setDestination(11910U);
    msg.setDestinationEntity(234U);
    msg.name.assign("TIYAKVAVEWDKNKBBRWZMGUVHRBJHXOVFNDJXXPEKAGEYZULBICFBKVZQSPUDCVREEJXDZEH");

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
    msg.setTimeStamp(0.24905055367967932);
    msg.setSource(4229U);
    msg.setSourceEntity(206U);
    msg.setDestination(17197U);
    msg.setDestinationEntity(229U);
    msg.type = 172U;
    msg.error.assign("TKDINZQGOHEMTRVUIFNUIEECVWZGPFBKUFRMTFHAXMQXXKRNONWOLSXWYQAQTKAFEPEJKSEFDQACMQTYKBPJRSWCBYLCIBLMCHBLSPINUPOZJTRUGOLZNKZJXPCUPHOWJZCSZIFILYVQWVGZXMVAONSSTJKDIJGGHEUAHTVMFHKSCVAHZYRWYKYWBIRRDBBXXLGDPMRYMGWHMVSCNRAUZNODFFPLWAJTSPVDYAVLNGQQXOEQELBXIJUHUYCBD");

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
    msg.setTimeStamp(0.35929734792360013);
    msg.setSource(63024U);
    msg.setSourceEntity(110U);
    msg.setDestination(62352U);
    msg.setDestinationEntity(96U);
    msg.type = 53U;
    msg.error.assign("TEUFKXDZGZNBYEAWILXVYRJUVAVEHQCTECQTGUDNMCBXDWFCIIKVUFODQFT");

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
    msg.setTimeStamp(0.003197745062520463);
    msg.setSource(15780U);
    msg.setSourceEntity(47U);
    msg.setDestination(29253U);
    msg.setDestinationEntity(225U);
    msg.type = 122U;
    msg.error.assign("JJLUBBFAKUWIICTDXVXTOFCTNBORVYGSQGYAUQKOIMOZNFEPXNJMDYLECCYTVSQHHFJHMZSBGJGERWBYVSQWMAUVERGMJRBLZCVGNYHZZVYRKINXVCSGHELCADPBTJPFMHEMADXKTVWENREFQDTAJZU");

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
    msg.setTimeStamp(0.4896230833743903);
    msg.setSource(27844U);
    msg.setSourceEntity(133U);
    msg.setDestination(16715U);
    msg.setDestinationEntity(36U);
    msg.seq = 19440U;
    msg.sys_dst.assign("TTWVXZZORKXIJEYSNAFVPMKVAOPFUOJKIKZUEMENHAZKMSLBLVOQLJDROQIETFRKOZQAFVGBUQSYBMEJPXBLWICALYLIGCLRKEHOTHXHBCYOJMBCGFUXCGEHKGVGHCPETQMWMTGWCAKVAUZPISKMZSFJJLDJPZBDQGMUZJNRPYPOHXNGWEFNNNWSQRCUDECHDDUVWBWLSFTTHXDSRASTYVXXRFLBHXBUQRRAPYGJZWTYDINC");
    msg.flags = 242U;
    const signed char tmp_msg_0[] = {31, -15, -113, -84, -104, -12, -57, 33, -54, -85, 47, -120, -89, -36, 9, 108, -80, 21, -65, 52, -69, -23, -104, -115, 10, -40, -62, -128, -88, -44, 87, 104, -104, -41, 120, 91, -6, 63, -78, -60, -19, -87, -120, 36, 90, -77, 24, 39, 76, 36, 59, 62, -83, 45, -19, 97, -63, 92, -114, 75, 20, -1, -87, 39, -47, -54, -115, 53, -34, 121, -87, 79, -128, -48, 9, 41, 120};
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
    msg.setTimeStamp(0.16646999846826338);
    msg.setSource(32246U);
    msg.setSourceEntity(30U);
    msg.setDestination(12735U);
    msg.setDestinationEntity(113U);
    msg.seq = 23243U;
    msg.sys_dst.assign("PAFVMOJKBJTXGSOCZYPOPARKAWELUEPDRFMLTIDRSUMXLRHCSWCGWGNZHSWTEIGASVKMFTQIYDRRFUWNHZQHHKVUKYAVLMDJPFCEOJHEMVAFDFZGRLOTBGUHKVDBABJCGQZYNYXZJMSYBEVQLQPESISBKTPWOXLISIBDOUCJMWWFHYFOOPXYEHNIJYNOTZCUNTNQXCRXBWUUTGUPWIMDKDQYRXKZCR");
    msg.flags = 141U;
    const signed char tmp_msg_0[] = {66, 117, -10, -51, 61, -55, 91, -126, 32, 1, 92, -128, 53, -76, 91, -119, -31, -94, 104, 36, -20, -58, 6, -85, -122, -57, 55, -23, -121, -117, -84, 22, 87, -115, 37, -120, 61, -81, -55, -77, -40, 98, 25, 44, -29, -22, 53, 71, 94, 87, 56, 101, -25, 97, 60, -97, -51, 114, 2, -7, -64, -110, 18, 113, -41, -127, -74, -125, -37, -72, -93, -101, -67, 30, -85, 2, -102, 65, 100, 21, 38, 78, 102, 126, 11, 28, 11, 79, 84, 114, -44, -20, 48, 126, -14, 46, 91, -55, 68, 33, 57, 67, -64, -71, 69, 67, -115, -92, 86, -56, 97, 44, -106, 20, 67, -53, 39, 82, -96, -23, -105, 32, 112, 98, -122, 28, -113, -30, -107, 23, 101, -59, 2, -49, 45, -112, -84, -88, -35, -23, -29, 32, -111, -9, 0, -41, -48, 117, -39, 69, 7, 38, 46, 83, -103, -55, 55, 61, 72, -97, -121, -64, -54, 90, -38, 39, -2, -107, 51, 25, -67, 29, -18, -52, 2, -53, -57, -37, 118, -124, 46, -115, 79, -1, 11, 30, 96, -119, 124, -2, -96, -34, -81, -91, 18, -63, -98, 67, -59, -62, -54, 39, 61, 11, 110, -35, 112, 43, -5, -4, 120, 43, 23, -53, -30, -117, 71, 76, 119, -14, -11, 65, -127, -105, -73, -50};
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
    msg.setTimeStamp(0.06990292925998243);
    msg.setSource(45648U);
    msg.setSourceEntity(200U);
    msg.setDestination(3596U);
    msg.setDestinationEntity(192U);
    msg.seq = 15554U;
    msg.sys_dst.assign("ONKAFHIREYQJYBRKJGWPTEESMWPJIRBONXEKZQXRTYVVWKANLPTODMJYFSWDTMSUVUTECUGIVMFQZRFMNUYQRAODGLJJAQYXGSVQBSXHJMHNCLWXLWABPHCRRBOMYXGGWXBNLAQXZYBVQBPUPVKUOGPFZUXHLDOICZQNETHHJOHLEEVIJFHFSTDICU");
    msg.flags = 126U;
    const signed char tmp_msg_0[] = {75, -22, 77, 96, -17, 53, -107, -69, -76, -90, -120, 21, -66, -114, 61, 40, -117, 8, 6, -120, -105, 101, 28, 46, -56, -80, 114, -7, -23, 50, -96, 86, -48, 85, 109, -117, -43, -119, -125, 9, -18, 66, -53, -83, 28, 53, -90, 91, 97, -36, -102, 92, 15, -92, 70, -69, 44, 111, -56, -90, 1, 106, -122, -22, 75, 94, 112, 16, -54, -73, 73, 39, -83, -82, 101, -51, 2, -86, 126, -87, 44, -13, 63, 87, 48, 101};
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
    msg.setTimeStamp(0.4918485624128096);
    msg.setSource(10696U);
    msg.setSourceEntity(3U);
    msg.setDestination(10927U);
    msg.setDestinationEntity(8U);
    msg.sys_src.assign("UCDBPUHUPXX");
    msg.sys_dst.assign("LKUHUREIWDQRAOQQQILIGLXGBWYJRWGAVXLZTCALXFBFJLYCZYGLSOJJPH");
    msg.flags = 19U;
    const signed char tmp_msg_0[] = {-37, -47, -1, -101, -45, -20, 38, 113, -93, 106, 119, -17, 59, -63, -44, 70, -109, -100, -126, -95, 11, -78, -31, 42, -89, 10, 70, 108, -108, -38, -19, 19, -77};
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
    msg.setTimeStamp(0.3895790696383139);
    msg.setSource(51747U);
    msg.setSourceEntity(210U);
    msg.setDestination(56067U);
    msg.setDestinationEntity(246U);
    msg.sys_src.assign("FCHOEWYMRDIXAFPXDMKEEKDYGZEQCOPZUKQPOITAINRJQCNGUASAWBKVKBCRYHJPSLOACWJGPTFIVKDRQOSMQNWOHQWBVUMGAHMPPVGPQSEZVRDLRNRNAXJZTJ");
    msg.sys_dst.assign("CYFDVPCYXVEOITHPYYNULJRIPVLJLUPJVMNTLOYUEDFQJMAPBQRQ");
    msg.flags = 97U;
    const signed char tmp_msg_0[] = {117, 19, -99, 39, -10, -68, 56, 5, 75, -38, 0, -96, -28, 39, 102, -1, -82, 112, 3, -23, -89, -110, -96, -56, 50, -39, -82, 120, 118, 97, -97, -67, -34, -54, 15, 40, 123, 15, -116, 49, -94, -78, -20, 93, -78, 73, 78, -69, -9, 50, -84, 95, -44, -49, 75, -29, 22, 16, -39, 18, -72, 37, 108, -29, 84, 28, -47, -114, -64, 70, -99, -45, -57, 36, 63, -53, 111, 39, 3, 53, 38, -72, -23, 109, 18, 96, 40, 42, 72, 2, -40, 16, -8, 69, 61, 82, 104, 35, 54, 65, 56, 56, -12, -72, 21, 1, -96, 23, -78, 19, -93, 67, -99, -23, -17, 44, -112, -101, 8, -14, 36, -63, -73, 108, -70, -116, 52, -65, -29, -78, -71, -36, -30, -17, -84, 113, 40, 17, 2, 43, 44, -76, -117, -15, 69, -34, -99, 54, 42, 116, -81, 72, 25, -106, -87, -63, 10, -65, -60, -18, 74, 90, 66, -42, 28, -95, -52, -111, 83, -6, 77, -53, -128, 90, 59, 3, -112, 39, -97, 10, 68, 96, -55, -22, 50, -25, -64, -69, -34, 22, -27, 70, -78, -77, 11, 21, -109, 45, 87, -37, 39, 90, -88, 52, -106, -40, -126, 111, 70, -38, -57, -101, -66, -53, 21, -114, -26, 68, -122};
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
    msg.setTimeStamp(0.28076406737070303);
    msg.setSource(43110U);
    msg.setSourceEntity(186U);
    msg.setDestination(21741U);
    msg.setDestinationEntity(215U);
    msg.sys_src.assign("VEWYDBOWGMDPGORENTETYQTYWMVUTUIFMKMEQVIACHQMNDB");
    msg.sys_dst.assign("XLGOMFHVCHXPRHIESYQWBQWLJVUVOZFVDKFKATPKXYWLWFXBJCJYPZDNTVQPMXTPZFIYDLLCSXFEATYZOEUFVYRTHKSZIJMVOTUIJRNRMKPCXWQSTRUHHNRCLESODSVBXBEQUGBCIKMEDNKJAHOAPWGYIVCLBBRQPNGQTYMDZOWNFTQXHJLCBKMNEUZGMANEJWHFRE");
    msg.flags = 33U;
    const signed char tmp_msg_0[] = {-67, 99, 66, -98, 11, 42, 73, -37, -1, 83, -2, -71, -106, -4, 36, 69, 106, 72, 66, -60, 27, 64, 49, 68, 20, -78, 62, -96, 88, 46, 15, 52, 30, 122, -114, -62, 54, 8, -6, -84, -17, -76, 29, 26, -26, 88, -41, -99, 111, -49, 18, 85, -95, -35, -117, 44, 111, 80, -60, 45, -82, 95, -73, -73, 90, -26, 102, -75, -120, 32, 25, -33, 88, -101, -4, 56, -46, 117, -81, -42, -54, -72, -66, 92, -116, -14, 63, -123, -20, -32, 17, 51, 92, -34, -45, -118, -98, 76, -52, 22, 104, 38, -78, -83, -55, -122, -116, 124, -82, -10, -106, -118, 58, -28, 72, 79, 121, -128, 15, 16, 68, -28, -65, 82, -72, 122, 66, 35, 50, 22, -41, -59, 113, -62, 90, 13, 80, -13, 44, -74, -56, -5, -66, 77, 83, -19, -111, -25, -82, 51, 123, -26, -12, -103, 75, 115, -96, -113, -120, 116, -103, -53, 98, -1, 1, -94, 120};
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
    msg.setTimeStamp(0.04671013691838444);
    msg.setSource(61844U);
    msg.setSourceEntity(65U);
    msg.setDestination(45269U);
    msg.setDestinationEntity(29U);
    msg.seq = 5674U;
    msg.value = 124U;
    msg.error.assign("TVYZNGNFTXMQOETCUAAABYKAHHDYJAWVYEWNQRRYRJPABLOPXKQKDKEGWAXDM");

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
    msg.setTimeStamp(0.9781330266495855);
    msg.setSource(58279U);
    msg.setSourceEntity(175U);
    msg.setDestination(52843U);
    msg.setDestinationEntity(12U);
    msg.seq = 54051U;
    msg.value = 74U;
    msg.error.assign("IQAXGQVUPTBTIDMOFOXSTKQLSRATBDWPZBUVHYYNYSUIHQMMHLEDNCLEKUFX");

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
    msg.setTimeStamp(0.9503870084330706);
    msg.setSource(10344U);
    msg.setSourceEntity(34U);
    msg.setDestination(481U);
    msg.setDestinationEntity(113U);
    msg.seq = 41100U;
    msg.value = 171U;
    msg.error.assign("VFDHVAIWTUDBZARBIXCEJMCHUIXKOCUMQPJWKYRGJHWDSBNRTTEWYLQQNBOLB");

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
    msg.setTimeStamp(0.10501997514747119);
    msg.setSource(34480U);
    msg.setSourceEntity(181U);
    msg.setDestination(41590U);
    msg.setDestinationEntity(218U);
    msg.seq = 23082U;
    msg.sys.assign("ZGYOWEIPGUSWJVEZTEGFZHBSLXYORPRRAFYBQJISLQHYKFKMBRLMJNRFZGSOUULCHCTNZOBJNDPWOROWPXPNMLI");
    msg.value = 0.9427772350468699;

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
    msg.setTimeStamp(0.15094090886446476);
    msg.setSource(30722U);
    msg.setSourceEntity(188U);
    msg.setDestination(58785U);
    msg.setDestinationEntity(192U);
    msg.seq = 44207U;
    msg.sys.assign("FLRQFSKGRKXPYZJCYSKQFMVKCRECZLTJOMARNRNODRJPLILQOAFEWJHAJTTHZGHNGFJATDPSUZMQTCPASTVHWHBFZYNFPBMUTDKYIKSOFYGCXORUEZZQWOMDWV");
    msg.value = 0.6611546415201135;

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
    msg.setTimeStamp(0.7164374236515326);
    msg.setSource(30130U);
    msg.setSourceEntity(238U);
    msg.setDestination(50501U);
    msg.setDestinationEntity(153U);
    msg.seq = 27147U;
    msg.sys.assign("CWIZZCSXAZHXPULZRWYRXHIBPIYHCDKEOPWGJPBEIKF");
    msg.value = 0.07089773993954596;

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
    msg.setTimeStamp(0.9089404828559404);
    msg.setSource(46900U);
    msg.setSourceEntity(31U);
    msg.setDestination(3983U);
    msg.setDestinationEntity(175U);
    msg.seq = 61294U;
    msg.sys_dst.assign("PPSVULELMIHRXY");
    msg.timeout = 0.22792763515056869;

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
    msg.setTimeStamp(0.43608643852068096);
    msg.setSource(64024U);
    msg.setSourceEntity(30U);
    msg.setDestination(26499U);
    msg.setDestinationEntity(50U);
    msg.seq = 7372U;
    msg.sys_dst.assign("HBBULJIUMNPLOUSPZOWBZYZMQOXTNKTDWSGNANBINPQFMFRHJFTEFAWMIVHWHXJSLYDSELWCKTIUDEDSZOQGPCRVVUBKYCCEFDCLMASGSDAENTXQRWDKWXWHYQOQMJSXOTGQXYVSVMNXTAQXJMHGFLZTLRROYYUVUVGIGPAPMAJRIVKQAVMEYKOP");
    msg.timeout = 0.5018397006166192;

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
    msg.setTimeStamp(0.942248441274057);
    msg.setSource(54251U);
    msg.setSourceEntity(149U);
    msg.setDestination(34098U);
    msg.setDestinationEntity(201U);
    msg.seq = 4481U;
    msg.sys_dst.assign("VDMIVCYKZIJTQRROYQBSHTAGUMBHTKFYWNBEGRYTKNLNOSVAGDVNUBPFCRXFLBSOIYZMUORPYSVPJCNFMRLKZE");
    msg.timeout = 0.4280850887912262;

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
    msg.setTimeStamp(0.4397274060357306);
    msg.setSource(28011U);
    msg.setSourceEntity(84U);
    msg.setDestination(58001U);
    msg.setDestinationEntity(162U);
    msg.action = 20U;
    msg.longain = 0.03035476297174322;
    msg.latgain = 0.07384674374116929;
    msg.bondthick = 4116715167U;
    msg.leadgain = 0.6031442936403544;
    msg.deconflgain = 0.9817818252551143;

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
    msg.setTimeStamp(0.09215097715942833);
    msg.setSource(62858U);
    msg.setSourceEntity(148U);
    msg.setDestination(55676U);
    msg.setDestinationEntity(53U);
    msg.action = 5U;
    msg.longain = 0.8230064983248764;
    msg.latgain = 0.3826863623449931;
    msg.bondthick = 1613504976U;
    msg.leadgain = 0.9258795983771886;
    msg.deconflgain = 0.9568480574670738;

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
    msg.setTimeStamp(0.6809803392377578);
    msg.setSource(47035U);
    msg.setSourceEntity(131U);
    msg.setDestination(10617U);
    msg.setDestinationEntity(12U);
    msg.action = 202U;
    msg.longain = 0.7748155646442764;
    msg.latgain = 0.9070314963379918;
    msg.bondthick = 1897072343U;
    msg.leadgain = 0.8033998121768937;
    msg.deconflgain = 0.5030479753214974;

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
    msg.setTimeStamp(0.5887607039635646);
    msg.setSource(58777U);
    msg.setSourceEntity(171U);
    msg.setDestination(62160U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.18007353807931425;
    msg.dist_min_abs = 0.8378680792268137;
    msg.dist_min_mean = 0.9941579360865375;

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
    msg.setTimeStamp(0.379384383611859);
    msg.setSource(37632U);
    msg.setSourceEntity(138U);
    msg.setDestination(33018U);
    msg.setDestinationEntity(21U);
    msg.err_mean = 0.016676451640530776;
    msg.dist_min_abs = 0.39250507166924764;
    msg.dist_min_mean = 0.7614888647860911;

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
    msg.setTimeStamp(0.8551681767735387);
    msg.setSource(24398U);
    msg.setSourceEntity(74U);
    msg.setDestination(46629U);
    msg.setDestinationEntity(137U);
    msg.err_mean = 0.8483932073809682;
    msg.dist_min_abs = 0.46850172805600143;
    msg.dist_min_mean = 0.34484925412266176;

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
    msg.setTimeStamp(0.5566643755148625);
    msg.setSource(13988U);
    msg.setSourceEntity(120U);
    msg.setDestination(108U);
    msg.setDestinationEntity(145U);
    msg.action = 180U;
    msg.lon_gain = 0.8901012978927539;
    msg.lat_gain = 0.6289355917949864;
    msg.bond_thick = 0.7284124946026014;
    msg.lead_gain = 0.813532905219655;
    msg.deconfl_gain = 0.03819353563398109;
    msg.accel_switch_gain = 0.7336454327978355;
    msg.safe_dist = 0.7511696060934887;
    msg.deconflict_offset = 0.3188836688333846;
    msg.accel_safe_margin = 0.06860134344434388;
    msg.accel_lim_x = 0.8753842203630485;

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
    msg.setTimeStamp(0.06622749724432886);
    msg.setSource(57409U);
    msg.setSourceEntity(238U);
    msg.setDestination(27256U);
    msg.setDestinationEntity(213U);
    msg.action = 79U;
    msg.lon_gain = 0.68282124128531;
    msg.lat_gain = 0.3234511258275732;
    msg.bond_thick = 0.24949897087912076;
    msg.lead_gain = 0.6953517646612067;
    msg.deconfl_gain = 0.08791600124494203;
    msg.accel_switch_gain = 0.2301072366094279;
    msg.safe_dist = 0.2911537451223737;
    msg.deconflict_offset = 0.22971379819965843;
    msg.accel_safe_margin = 0.2275666719771542;
    msg.accel_lim_x = 0.8749010346845537;

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
    msg.setTimeStamp(0.3004083862643381);
    msg.setSource(65402U);
    msg.setSourceEntity(223U);
    msg.setDestination(59710U);
    msg.setDestinationEntity(47U);
    msg.action = 214U;
    msg.lon_gain = 0.5890069015693312;
    msg.lat_gain = 0.7763730723758867;
    msg.bond_thick = 0.7898932867428797;
    msg.lead_gain = 0.030306181220256967;
    msg.deconfl_gain = 0.8802087368233695;
    msg.accel_switch_gain = 0.48201426785944623;
    msg.safe_dist = 0.8663495920979899;
    msg.deconflict_offset = 0.785802204573699;
    msg.accel_safe_margin = 0.6021858202780401;
    msg.accel_lim_x = 0.5804010153324167;

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
    msg.setTimeStamp(0.22464240561123627);
    msg.setSource(22718U);
    msg.setSourceEntity(10U);
    msg.setDestination(6410U);
    msg.setDestinationEntity(65U);
    msg.type = 47U;
    msg.op = 70U;
    msg.err_mean = 0.8456875758677947;
    msg.dist_min_abs = 0.09615129291927127;
    msg.dist_min_mean = 0.3844985882378471;
    msg.roll_rate_mean = 0.24863490636287977;
    msg.time = 0.046508142888818105;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 86U;
    tmp_msg_0.lon_gain = 0.7547673755855421;
    tmp_msg_0.lat_gain = 0.7380180643508893;
    tmp_msg_0.bond_thick = 0.4243069954617581;
    tmp_msg_0.lead_gain = 0.23214733480119598;
    tmp_msg_0.deconfl_gain = 0.46663121306927335;
    tmp_msg_0.accel_switch_gain = 0.3315053277183234;
    tmp_msg_0.safe_dist = 0.054585315887825225;
    tmp_msg_0.deconflict_offset = 0.8469349652390433;
    tmp_msg_0.accel_safe_margin = 0.8885071720623806;
    tmp_msg_0.accel_lim_x = 0.059704056929654414;
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
    msg.setTimeStamp(0.3859297388715738);
    msg.setSource(31950U);
    msg.setSourceEntity(166U);
    msg.setDestination(59939U);
    msg.setDestinationEntity(198U);
    msg.type = 124U;
    msg.op = 155U;
    msg.err_mean = 0.8192672262722662;
    msg.dist_min_abs = 0.1632275161888469;
    msg.dist_min_mean = 0.5187876336092216;
    msg.roll_rate_mean = 0.6963918644027893;
    msg.time = 0.2617565944550281;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 4U;
    tmp_msg_0.lon_gain = 0.6742923727352749;
    tmp_msg_0.lat_gain = 0.6981934926289128;
    tmp_msg_0.bond_thick = 0.34904099825128176;
    tmp_msg_0.lead_gain = 0.8493191918468864;
    tmp_msg_0.deconfl_gain = 0.1220416209805224;
    tmp_msg_0.accel_switch_gain = 0.6650329125292012;
    tmp_msg_0.safe_dist = 0.8594051099048019;
    tmp_msg_0.deconflict_offset = 0.5715794119855415;
    tmp_msg_0.accel_safe_margin = 0.6208678366811731;
    tmp_msg_0.accel_lim_x = 0.18484498340488842;
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
    msg.setTimeStamp(0.41951964283700516);
    msg.setSource(38302U);
    msg.setSourceEntity(140U);
    msg.setDestination(8812U);
    msg.setDestinationEntity(192U);
    msg.type = 204U;
    msg.op = 162U;
    msg.err_mean = 0.10989375619769115;
    msg.dist_min_abs = 0.1288180413234542;
    msg.dist_min_mean = 0.56898159076682;
    msg.roll_rate_mean = 0.3377917961804453;
    msg.time = 0.8575789070176;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 199U;
    tmp_msg_0.lon_gain = 0.5370671199272709;
    tmp_msg_0.lat_gain = 0.6223593029718615;
    tmp_msg_0.bond_thick = 0.526220479078493;
    tmp_msg_0.lead_gain = 0.8392594951345733;
    tmp_msg_0.deconfl_gain = 0.36307653163657927;
    tmp_msg_0.accel_switch_gain = 0.9313765472718262;
    tmp_msg_0.safe_dist = 0.44828528543684343;
    tmp_msg_0.deconflict_offset = 0.056418565738866056;
    tmp_msg_0.accel_safe_margin = 0.9715028471602603;
    tmp_msg_0.accel_lim_x = 0.019785645341413582;
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
    msg.setTimeStamp(0.6591106661496594);
    msg.setSource(60452U);
    msg.setSourceEntity(140U);
    msg.setDestination(51518U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.17077038925262145;
    msg.lon = 0.23789050863493666;
    msg.eta = 1808607341U;
    msg.duration = 45690U;

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
    msg.setTimeStamp(0.3451288261583909);
    msg.setSource(12722U);
    msg.setSourceEntity(225U);
    msg.setDestination(33664U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.8911437810886962;
    msg.lon = 0.1837354539171886;
    msg.eta = 1922500471U;
    msg.duration = 14800U;

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
    msg.setTimeStamp(0.4836859434581017);
    msg.setSource(17937U);
    msg.setSourceEntity(26U);
    msg.setDestination(17389U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.4351341580589112;
    msg.lon = 0.054634813141130834;
    msg.eta = 3870283794U;
    msg.duration = 14614U;

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
    msg.setTimeStamp(0.4982228288298324);
    msg.setSource(60163U);
    msg.setSourceEntity(150U);
    msg.setDestination(22255U);
    msg.setDestinationEntity(114U);
    msg.plan_id = 60066U;

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
    msg.setTimeStamp(0.6706166347659895);
    msg.setSource(17086U);
    msg.setSourceEntity(125U);
    msg.setDestination(60960U);
    msg.setDestinationEntity(176U);
    msg.plan_id = 11371U;

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
    msg.setTimeStamp(0.35991520004877564);
    msg.setSource(65397U);
    msg.setSourceEntity(211U);
    msg.setDestination(31343U);
    msg.setDestinationEntity(224U);
    msg.plan_id = 19285U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.30558452578753714;
    tmp_msg_0.lon = 0.6681459816850068;
    tmp_msg_0.eta = 579627752U;
    tmp_msg_0.duration = 28958U;
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
    msg.setTimeStamp(0.6171099411139896);
    msg.setSource(33156U);
    msg.setSourceEntity(248U);
    msg.setDestination(18576U);
    msg.setDestinationEntity(120U);
    msg.type = 192U;
    msg.command = 21U;
    msg.settings.assign("VMCXBJAUHZ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 8102U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DLRVUIANXARRUQVVNVGQXLUMYARWEQWQBLTAXH");

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
    msg.setTimeStamp(0.8097128986459773);
    msg.setSource(22129U);
    msg.setSourceEntity(239U);
    msg.setDestination(34208U);
    msg.setDestinationEntity(95U);
    msg.type = 73U;
    msg.command = 192U;
    msg.settings.assign("XJMQQWRIUAXJSXALKLSZCGRFKIJGRGBBQULCDSRYJLIVPCJPGSEKSTFYHOLOUZVXTYZVEAKINEEJWYWNHMKJMJRQCYGDPVIM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 64245U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7310539041005808;
    tmp_tmp_msg_0_0.lon = 0.26833570697988596;
    tmp_tmp_msg_0_0.eta = 916668252U;
    tmp_tmp_msg_0_0.duration = 36104U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DRYNAVMRUOVAVXDPQOWIOLFDTJDRZUFBLTHGGFQJNCVCJENRHJMEYXODPIDDHZKQFLMIGBEHLJVSFZXSVERK");

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
    msg.setTimeStamp(0.1388076778327748);
    msg.setSource(45361U);
    msg.setSourceEntity(161U);
    msg.setDestination(16516U);
    msg.setDestinationEntity(62U);
    msg.type = 236U;
    msg.command = 249U;
    msg.settings.assign("WXYBVWOWNKLRSPOQDCPESREBRHJHPYLUAWYQCEEWHDNYJWEGNAILQLMZRBDMXKSNLJICUFFJMRTTTJKQTMXUOLUHSUNOHZQPPSIGQYUHZBMKPAKASSXUZTGDEIFSJYGUFDPCITMIWLGQXOPRVZYOZNRWWCDFMNUNJOKSQTDAHMTEYJBGMOLVBFXEBBIPRBAAOGKTGPVAUQXVGBVEDFXFZKODTSJCCWCFAZHMKRZCVIKILAX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 40426U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KEQBYCCGMLHYUVXAWELXIURGWYTMGCUINGXFZGUZQ");

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
    msg.setTimeStamp(0.019441686814266723);
    msg.setSource(54001U);
    msg.setSourceEntity(240U);
    msg.setDestination(19609U);
    msg.setDestinationEntity(56U);
    msg.state = 181U;
    msg.plan_id = 53048U;
    msg.wpt_id = 141U;
    msg.settings_chk = 28933U;

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
    msg.setTimeStamp(0.44799060569568794);
    msg.setSource(22883U);
    msg.setSourceEntity(237U);
    msg.setDestination(20125U);
    msg.setDestinationEntity(236U);
    msg.state = 227U;
    msg.plan_id = 27479U;
    msg.wpt_id = 0U;
    msg.settings_chk = 63289U;

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
    msg.setTimeStamp(0.6382717937853021);
    msg.setSource(41929U);
    msg.setSourceEntity(245U);
    msg.setDestination(39012U);
    msg.setDestinationEntity(232U);
    msg.state = 187U;
    msg.plan_id = 44252U;
    msg.wpt_id = 61U;
    msg.settings_chk = 60519U;

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
    msg.setTimeStamp(0.20772209816840403);
    msg.setSource(37806U);
    msg.setSourceEntity(249U);
    msg.setDestination(57434U);
    msg.setDestinationEntity(135U);
    msg.uid = 249U;
    msg.frag_number = 68U;
    msg.num_frags = 180U;
    const signed char tmp_msg_0[] = {63, 20, -65, -121, 72, -90, 29, -100, 4, 107, 107, 55, -95, 67, -117, -112, -106, 106, -66, 64, -41, 0, 40, -72, 13, -93, -86, 57, 75, -72, 126, -114, 110, 56, -41, 69, 120, 9, -27, 86, -124, -103, 18, -100, -60, 43, 122, -2, 66, -79, 5, 112, -21, -56, 40, -88, 121, 9, 101, 7, -17, 116, 105, 80, -12, -76, 82, -1, 32, 11, -124, 31, 61, 52, 79, 90, -119, -93, 105, -99, -46, 6, -97, -50, -106, -119};
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
    msg.setTimeStamp(0.020202723558699787);
    msg.setSource(38224U);
    msg.setSourceEntity(7U);
    msg.setDestination(49735U);
    msg.setDestinationEntity(1U);
    msg.uid = 23U;
    msg.frag_number = 23U;
    msg.num_frags = 109U;
    const signed char tmp_msg_0[] = {-108, -22, -115, -42, -58, 21, -31, -92, -79, -73, -44, 52, 6, -31, 59, 3, -30, -106, 31, -42, 2, 120, -22, 17, -78, 125, 103, -27, 13, 44, -88, 74, 56, 72, 27, 76, -107, 99, 119, 29, -127, 53, 47, 67, -53, 75, -16, -69, 95, 49, -82, -117, -3, 48, 53, 78, 49, -90, 77, 5, -118, -78, -54, -120, 63, 62, 40, -17, 119, 65, 75, -107, 64, 20, -41, 82, -122, -25, -70, -116, 97, -113, 84, 18, 61, -53, -3, 86, -49, 66, -54, 57, 95, -73, -77, -22, -46, 104, -63, -9, -85, 17, -103, 4, -103, 120, 98, 102, -43, -30, 7, -41, -123, 109, 58, -26, 30, 113, -55, 10, -9};
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
    msg.setTimeStamp(0.3747049650913913);
    msg.setSource(56974U);
    msg.setSourceEntity(151U);
    msg.setDestination(64485U);
    msg.setDestinationEntity(95U);
    msg.uid = 217U;
    msg.frag_number = 169U;
    msg.num_frags = 97U;
    const signed char tmp_msg_0[] = {-98, -13, -106, 94, -94, -9, -113, -125, 12, -59, -125, -23, -117, 43, 32, 70, 58, 53, -72, -11, 74, 119, 59, -30, 112, 111, 86, -8, 112, 20, 26, -50, -84, -15, 19, 69, -6, 12, 15, 8, -121, 81, -93, 30, 123, -125, -126, 39, 57, -127, -77, -82, 57, -107, -77, 2, -120, 126, 35, -21, -20, 104, 104, -121, 114, 15, -75, -74, -6, 20, -83, -29, -74, -115, 72, 79, 94, 36, 48, 43, 32, 72, 7, -90, -2, 19, 71, 28, 95, 9, -69, -58, 93, -118, -112, 63, -113, -22, 34, 28, 83, 1, 27, 123, -106, 101, 10, 121, 32, -72, -90, 40, -52, 113, -108, 121, 28, 17, 34, -54, -11, -14, 19, -38, 27, 77, -88, 94, 37, 104, 92, -61, 30, 97, -14, 125, 66, 74, -28, -44, -125, -42, 72, -115, 11, 19, 97, 116, 31, 34, 29, 42, -43, -31, -105, -11, -106, 111, -44, -31, -79, -37, 19, 92, -66, -92, -77, 96, 2, 32, -71, 96, 55, 115, -52, -10, -123, -110, 31, -121, -74, 102, 18, 52, -72, -99, -108, -89, -111, -35, -79, 82, -40, -106, 56, -14, -86, -66, 95, -35, -84, 24, -114, -25, 54, -19, 67, -60, -50, -92, 30, 69, 109, 63, -17, 85, -115, -32, 92, -49, 7, -127, 116, 66, -69, 51, 53, 97, -54, -96, 92, -112, 112, -8, 110, -69, 57, -102, 97, -33, -38, 83, -87, 6, 38, 16, 117, -30, 93, 47, 119};
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
    msg.setTimeStamp(0.5526164903874973);
    msg.setSource(15240U);
    msg.setSourceEntity(54U);
    msg.setDestination(12900U);
    msg.setDestinationEntity(224U);
    msg.content_type.assign("CSAEQHUYSDQQUNHUIQVMEWFNSREWCFEAXJHQXNRRUATYCWRCOXJAUWNPUMZOOBLFOTQUPJHYDPLZBWNDGVEKZVHEVBYZNROCCGWHGTOLGMRLRDKOGINPXMSMMIFSXWHSGBTGQTAYLPATORBBIPHBLSSACPFUAJYPLVZWGXMECQBJCDEZUJKWVIDYBOHRQA");
    const signed char tmp_msg_0[] = {104, -90, -68, 87, 66, -125, -95, 58, -104, -26, 74, 48, 97, -91, 83, -70, -67, 13, 25, 59, -122, -14, -38, -31, 46, -3, -109, 110, 2, 25, 105, -113, -14, 125, -99, -115, -27, -121, 62, 89, -59, -77, -49, 69, -87, 94, -73, 62, 87, -85, -109, -116, 50, 30, -97, -83, 120, -99, -30, 124, 123, 103, 30, 14, 11, -128, -123, 62, -8, -6, -29, -80, 6, 97, 7, -5, -123, -52, -16, -13, -69, -3, -95, 36, 21, -103, -1, -91, 100, 116, 33, 56, -56, -13, -42, -41, -83, -78, 73, 26, -1, -16, 101, 5, 118, 76, -87, -44, 65, -78, -115, 42, 83, 60, 111, 25, 126, 69, 23, 110, 21, 1, -107, -50, 10, 88, -22, 42, -30, 110, 48, -89, 111, -12, 106, -57, -118, -93, 73, -106, -45, 99, -57, 84, 110, 65, 16, 97, 29, -47, -28, 19, 59, -90, -9, 45, 97, -117, 11, -64, 7, 100, -107, -75, -74, -122, -38, -79, 12, 50, -49, 11, 109, 59, 66, 98, -114, 91, -86, 100, 67, -83, 97, 114, -39, 49, -45, -34, 37, 3, -88, -29, 58, -9, -90, 118, -104, 40, 81, 36, 98, -85, -91, 25, -112, 99, -60, 33, -125, 46, -6, 65, 3, -34, 9, 25, -118, -12, -39, -122, -58, 126, 52, -34, -51, -85, 31, -57, -122, 50, -114, -107, -128, -30, 124};
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
    msg.setTimeStamp(0.888284527334439);
    msg.setSource(49419U);
    msg.setSourceEntity(132U);
    msg.setDestination(45800U);
    msg.setDestinationEntity(90U);
    msg.content_type.assign("VUEQPSHBMXDQJZDYNMLCBHKJDIGFSMQJXZYAZZUEVPACOEGSZVCBKAICRUGKZHALFWZZOJQPRAJKWWZOFLLVUJQTZSYEAGTJGXJIUR");
    const signed char tmp_msg_0[] = {85, 74, 48, 101, 106, -2, 30, 79, -17, -35, -99, 71, -29, -74, 47, 75, -3, -93, -15, 67, 56, -49, 58, -95, 50, -125, 67, -124, 124, 71, -70, 67, -29, -52, -47, -96, -39, -85, -7, 63, 89, 76, -27, 59, -99, 83, -6, -122, -113, -66, 19, -30, -44, 12, -121, 118, -19, 18, -85, -125, 125};
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
    msg.setTimeStamp(0.8177016739878546);
    msg.setSource(25286U);
    msg.setSourceEntity(224U);
    msg.setDestination(59220U);
    msg.setDestinationEntity(118U);
    msg.content_type.assign("GYDAZYOANVTRPVPCYWQYJYMFDJARCDEZDPLHRCHYLMJWOVODLRLNAQZKUIFUSXSHDPBHAUYNRGKIQWCJOMZMLRKTWLJPZGVSAEGXLFKVODWOUQMSHXOWXIZHFIKNJPNWMKHPDREUSWLIQCBNMOQFRGFSOCPQUCXTTHXNDJTY");
    const signed char tmp_msg_0[] = {41, -16, 101, 17, -113, 92, -125, 13, 93, 58, 0, -111, 99, -80, 103, -128, -3, -47, 15, 20, 17, 56, -19, 3, -79, -113, -74, -69, 99, -64, 66, -120, -117, -104, 97, 109, -65, -13, -68, -21, -18, -25, 86, -36, 103, -45, 28, 77, 35, 88, -41, 95, -62, -28, -73, -51, 65, -100, 64, 63, 72, -79, 68, -119, 120, 72, 122, 83, 58, -69, -54, -118, -114, 41, 4, -24, -125, 31, 1, 98, 15, 12, 84, 35, 37, -121, -18, -30, -69, 18, -60, -43, 11, -61, -124, 68, -89, 33, -98, 19, -61, -59, -30};
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
    msg.setTimeStamp(0.7096035617886044);
    msg.setSource(56476U);
    msg.setSourceEntity(75U);
    msg.setDestination(53331U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.2788011294288202);
    msg.setSource(33735U);
    msg.setSourceEntity(201U);
    msg.setDestination(30557U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.10225817721750641);
    msg.setSource(35477U);
    msg.setSourceEntity(75U);
    msg.setDestination(45254U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.19180889430832926);
    msg.setSource(8583U);
    msg.setSourceEntity(237U);
    msg.setDestination(59819U);
    msg.setDestinationEntity(252U);
    msg.target = 42694U;
    msg.bearing = 0.039268456632252646;
    msg.elevation = 0.5665787227988838;

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
    msg.setTimeStamp(0.3374767900510037);
    msg.setSource(61534U);
    msg.setSourceEntity(85U);
    msg.setDestination(25956U);
    msg.setDestinationEntity(253U);
    msg.target = 42138U;
    msg.bearing = 0.5251732084414323;
    msg.elevation = 0.45544478855465853;

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
    msg.setTimeStamp(0.03373641644114311);
    msg.setSource(45876U);
    msg.setSourceEntity(76U);
    msg.setDestination(14805U);
    msg.setDestinationEntity(191U);
    msg.target = 14009U;
    msg.bearing = 0.9650533141008193;
    msg.elevation = 0.9862164817983465;

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
    msg.setTimeStamp(0.4498679053361454);
    msg.setSource(26922U);
    msg.setSourceEntity(120U);
    msg.setDestination(50957U);
    msg.setDestinationEntity(145U);
    msg.target = 53601U;
    msg.x = 0.48844990607541927;
    msg.y = 0.10602754886150534;
    msg.z = 0.05323179380974574;

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
    msg.setTimeStamp(0.5638870788369654);
    msg.setSource(58232U);
    msg.setSourceEntity(210U);
    msg.setDestination(11140U);
    msg.setDestinationEntity(120U);
    msg.target = 22539U;
    msg.x = 0.8155493784717529;
    msg.y = 0.41615765962305873;
    msg.z = 0.5626473080848584;

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
    msg.setTimeStamp(0.6122990873124566);
    msg.setSource(53083U);
    msg.setSourceEntity(108U);
    msg.setDestination(15976U);
    msg.setDestinationEntity(212U);
    msg.target = 29836U;
    msg.x = 0.5407482919216836;
    msg.y = 0.3236808278367368;
    msg.z = 0.9395143261015739;

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
    msg.setTimeStamp(0.3375847747476636);
    msg.setSource(60586U);
    msg.setSourceEntity(159U);
    msg.setDestination(59305U);
    msg.setDestinationEntity(123U);
    msg.target = 52697U;
    msg.lat = 0.7187169703737751;
    msg.lon = 0.22379984269892506;
    msg.z_units = 156U;
    msg.z = 0.04761574102536137;

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
    msg.setTimeStamp(0.3552956266212546);
    msg.setSource(18213U);
    msg.setSourceEntity(58U);
    msg.setDestination(56872U);
    msg.setDestinationEntity(239U);
    msg.target = 14097U;
    msg.lat = 0.6747042751133816;
    msg.lon = 0.2955295367147541;
    msg.z_units = 176U;
    msg.z = 0.8984143389783308;

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
    msg.setTimeStamp(0.4044236296346273);
    msg.setSource(28892U);
    msg.setSourceEntity(49U);
    msg.setDestination(24226U);
    msg.setDestinationEntity(97U);
    msg.target = 35197U;
    msg.lat = 0.7715518019826269;
    msg.lon = 0.7204615186061237;
    msg.z_units = 196U;
    msg.z = 0.6709882549962631;

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
    msg.setTimeStamp(0.40894409587042235);
    msg.setSource(15271U);
    msg.setSourceEntity(167U);
    msg.setDestination(15904U);
    msg.setDestinationEntity(15U);
    msg.locale.assign("MYOKXNVJNWNUPXEJBXRTUEHZFMFCMQADMKNBLVBOQJTADTMCRWKCCGJLHPVNRWFKXRLZBWAVFWTHUAEPFDECHPVUXIMTGZULAICFQWWMBHZKLJHSTYSROZZFOXXTPAUPTSECVKHKQQEPSGEYBMYOLUGJRYYPLNCYNRUQQIVPGGIJDKESISSBPNIISAVORIZXREDMWSGXO");
    const signed char tmp_msg_0[] = {85, -35, 42, 72, -22, -55, 77, -46, -128, -95, 112, -113, 81, -128, -66, -70, -23, -32, 75, -79, -57, 52, -107, 53, -121, 27, 56, 62, -122, -79, -95, -10, 0, -43, 63, -52, -120, 56, -127, 122, 68, 99, 75, 4, 1, 90, 32, 83, -1, -72, -50, -31, 66, 13, 85, 49, -82, 64, 94, -92, -13, 116, -13, -23, -58, 103, -94, -77, -54, -46, -81, -121, 126, 77, 103, 44, 50, 65, -87, 6, -124, 115, 55, 5, 50, 114, 1, -68, 78, 86, -17, 95, 68, 85, -46, -103, 23, -100, -72, -73, 56, 80, -44, -54, -44, -40, -75, -1, 8, -45, -114, 116, 18, 99, 86, 97, -45};
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
    msg.setTimeStamp(0.7551179326017486);
    msg.setSource(3589U);
    msg.setSourceEntity(244U);
    msg.setDestination(1123U);
    msg.setDestinationEntity(129U);
    msg.locale.assign("TYXFTGOCTXFVOKWQECNPWALKRCNFIJSDHRBNJRAPQHQAKREUJWYKOF");
    const signed char tmp_msg_0[] = {-124, -75, -55, -64, 21, 31, -52, 47, -108, 54, 26, -66, -122, -101, -15, 119, -109, -71, 74, 50, -99, 20, 21, -111, 69, -6, -5, -67, -13, 61, -45, 123, 124, -25, -55, -26, -9, 20, 76, 34, -3, 55, 115, 47, -125, -42, -32, -12, -75, 106, -12, 79, 66, -16, 78, -1, -117, -114, 9, -19, 3, 19, -127, -10, -29, 31, 75, 28, 105, -98, 0, 74, 108, -49, 17, 96, 57, -20, 99, -77, 47, 43, -6, 18, -74, -5, 115, 42, -66, -53, -2, 43, 107, -89, 65, 4, -59, -82, -54, -27, -76, -126, -90, 87, 21, 38, -98, 93, -86, -69, 47, 90, 89, 72, 93, -56, -86, 77, 31, -55, 6, -126, 109, 69, 109, 6, 13, 20, -89, -1, 21, 33, 83, 62, 73, 108, 19, -102, 60, 7, -3, 105, 57, 80, -21, 88, 90, 15, -39, -115, 112, 48, -115, -70, -62, -43, -98, -47, 41, -23, 27, 39, 108, -23, -37, -110, 117, 29, -39};
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
    msg.setTimeStamp(0.6662685235747487);
    msg.setSource(59871U);
    msg.setSourceEntity(247U);
    msg.setDestination(20636U);
    msg.setDestinationEntity(86U);
    msg.locale.assign("CGVJHBKYHRVQPTDYOYNNIBHCCYOLWREWHDIGHEOIHJUGRNDKLWBTVNEJQLLUJQOTLPVSWJWDMPXPPAOSSXCEZJAORYGQXUEKGMDOVSAKXKRLZIECFMPEBHPNJWDQSAUBTIFZFIJUNEFOLUWMYDLHMYSKXCUIRIYTY");
    const signed char tmp_msg_0[] = {61, 61, -25, -60, -113, 117, -30, -79, 105, 49, 3, -9, -97, 90, -69, 102, -117, -25, -81, 89, 34, -110, 13, -127, -34, 13, -10, -91, 0, -99, -33, -33, -29, 36, -112, 74, 111, 39, 33, 4, 94, -5, 106, 61, -51, -71, -125, -10, 27, -19, 105, 0, 69, -64, 27, -32, -35, 121, -105, 23, -9, 39, -98, 24, -83, -78, 63, 61, -83, 73, 81, 35, 90, 105, 19, -32, -27, 119, -100, -114, -28, 83, -92, -73, 58, 44, -65, 21, 17, 42, 71, -23, -15, 17, -124, -95, 70, -52, -18, -76, 114, -57, -37, 17, 69, -92, -22, -128, 56, 124, 81, -11, 31, 105, 30, -88, -62, -96, -114, -75, -50, 94, -51, 56, -33, -38, -107, 42, 16, -46, -44, -18, 123, 101, 88, 42, -25, -81, -46, -49, -85, 44, -13, -104, 61, 104, -98, 54, 15, 122, 105, -49, -87, 21, -62, -21, -79, 81, 77, -48, 116, 67, 52, -99, 5, 25, -13, -20, 73, 69, 7, -54, -100, -58, 94, -37, 73, 37, -15, -53, 71, 47, 57, 9, 47, 76, 21, -94, -4, -101, -108, 116, -61, 102, -94, 103, 61, 18, -23, -114, 75, 10, 33, -79, 35, -33, 80, 23, -123, -126, 37, 62, 19, 22, 29, -75, 96, 104, -17, -18, 100, -89, 4, 119, 119, -85, 29, -48, -89, 61, -3, -30, -117, 52, 56, -81, 103, -67, -34, 94, 25, -10, 122, 66, 50, -27, -27, -91, 12, 120, 58, -103};
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
    msg.setTimeStamp(0.7316882653196642);
    msg.setSource(35166U);
    msg.setSourceEntity(49U);
    msg.setDestination(38776U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.899765893484414);
    msg.setSource(7293U);
    msg.setSourceEntity(192U);
    msg.setDestination(44535U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.3229415423526698);
    msg.setSource(46074U);
    msg.setSourceEntity(15U);
    msg.setDestination(30844U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.7634004843740142);
    msg.setSource(54446U);
    msg.setSourceEntity(132U);
    msg.setDestination(64384U);
    msg.setDestinationEntity(156U);
    msg.camid = 210U;
    msg.x = 58933U;
    msg.y = 51394U;

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
    msg.setTimeStamp(0.4896136287790107);
    msg.setSource(24051U);
    msg.setSourceEntity(139U);
    msg.setDestination(45865U);
    msg.setDestinationEntity(145U);
    msg.camid = 236U;
    msg.x = 34261U;
    msg.y = 49099U;

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
    msg.setTimeStamp(0.2616344605294805);
    msg.setSource(56256U);
    msg.setSourceEntity(38U);
    msg.setDestination(54186U);
    msg.setDestinationEntity(54U);
    msg.camid = 95U;
    msg.x = 37831U;
    msg.y = 14316U;

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
    msg.setTimeStamp(0.6117236514650791);
    msg.setSource(21219U);
    msg.setSourceEntity(173U);
    msg.setDestination(59181U);
    msg.setDestinationEntity(140U);
    msg.camid = 91U;
    msg.x = 14144U;
    msg.y = 8129U;

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
    msg.setTimeStamp(0.023404048720536252);
    msg.setSource(44598U);
    msg.setSourceEntity(52U);
    msg.setDestination(22226U);
    msg.setDestinationEntity(50U);
    msg.camid = 29U;
    msg.x = 58084U;
    msg.y = 33424U;

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
    msg.setTimeStamp(0.8948919247308237);
    msg.setSource(8821U);
    msg.setSourceEntity(160U);
    msg.setDestination(21760U);
    msg.setDestinationEntity(80U);
    msg.camid = 19U;
    msg.x = 1899U;
    msg.y = 1622U;

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
    msg.setTimeStamp(0.5553477087147384);
    msg.setSource(8031U);
    msg.setSourceEntity(184U);
    msg.setDestination(19602U);
    msg.setDestinationEntity(187U);
    msg.tracking = 253U;
    msg.lat = 0.5795102730023489;
    msg.lon = 0.3207790944300313;
    msg.x = 0.5116288841583707;
    msg.y = 0.6326495218616548;
    msg.z = 0.508963731821845;

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
    msg.setTimeStamp(0.2422652351277379);
    msg.setSource(32543U);
    msg.setSourceEntity(218U);
    msg.setDestination(35011U);
    msg.setDestinationEntity(253U);
    msg.tracking = 104U;
    msg.lat = 0.4317806815385077;
    msg.lon = 0.46094211108740424;
    msg.x = 0.697760089255963;
    msg.y = 0.5548301489342783;
    msg.z = 0.7535295504076374;

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
    msg.setTimeStamp(0.7590159995258762);
    msg.setSource(19612U);
    msg.setSourceEntity(98U);
    msg.setDestination(9020U);
    msg.setDestinationEntity(208U);
    msg.tracking = 1U;
    msg.lat = 0.5471291986987632;
    msg.lon = 0.8969208806525334;
    msg.x = 0.8329231216972292;
    msg.y = 0.502211000606418;
    msg.z = 0.21253283669632161;

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
    msg.setTimeStamp(0.41475633135764245);
    msg.setSource(54420U);
    msg.setSourceEntity(195U);
    msg.setDestination(16962U);
    msg.setDestinationEntity(190U);
    msg.target.assign("QIFEPOCSXDQTLPIHILPMYENHAYXAWAKBKDRAUBUTXLETMDEEUNJNGJIMXDWBJUIYZWEHOHDAFSVHZRSPKYOWCJERBRRVYLKVLGMTSWWXITBGMJEZBHHCUCODUQPJAQULQQSJQESAIIPL");
    msg.lbearing = 0.34420115400055706;
    msg.lelevation = 0.667027265281559;
    msg.bearing = 0.5467329244153307;
    msg.elevation = 0.8866471629922765;
    msg.phi = 0.674291594680857;
    msg.theta = 0.5276430035381804;
    msg.psi = 0.012450186976427191;
    msg.accuracy = 0.9705914125817073;

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
    msg.setTimeStamp(0.24147690514132525);
    msg.setSource(14079U);
    msg.setSourceEntity(13U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(139U);
    msg.target.assign("CZNEXRUSCIUMLRZFYGIGUGBNXEAVELGNJYBHKQVWUQGJTILGFVNMHOFWERIFUQXXMSQZTYBBNEJPBSBRFOGAZJLQPCWKACXXCQTTJJXDWNSSEAMFUZJYDZW");
    msg.lbearing = 0.777918356761288;
    msg.lelevation = 0.7073573532625791;
    msg.bearing = 0.3094428982408861;
    msg.elevation = 0.694105072008127;
    msg.phi = 0.8707618359878644;
    msg.theta = 0.016391796264962233;
    msg.psi = 0.6533110775002763;
    msg.accuracy = 0.30090305690421715;

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
    msg.setTimeStamp(0.4800637770548858);
    msg.setSource(56544U);
    msg.setSourceEntity(7U);
    msg.setDestination(6267U);
    msg.setDestinationEntity(234U);
    msg.target.assign("CLTPGYYGJCWZEZURXNOQKDIPGIRDCAQAWXVZNBPGBSWDNFGSAOHTEKZYODTCUVFMFPZMYJYYFSKHQVKMHNUBSHERPUOWJWSNAEWLLBMGKCBQURBVWIFJBSLRJKPNEWSRARILDLUVJEHHZEJLTOCBXLQXWGGCMOCEQHIMKPYOZRZFIPDGHUOJXFXBMECCNDXYAUZAINDM");
    msg.lbearing = 0.26430349797062946;
    msg.lelevation = 0.40128883711300434;
    msg.bearing = 0.21961741431524773;
    msg.elevation = 0.8737211279815978;
    msg.phi = 0.5236561903094288;
    msg.theta = 0.5255807644852125;
    msg.psi = 0.9921893854179649;
    msg.accuracy = 0.2881632400241254;

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
    msg.setTimeStamp(0.9905041296063427);
    msg.setSource(43794U);
    msg.setSourceEntity(56U);
    msg.setDestination(31836U);
    msg.setDestinationEntity(112U);
    msg.target.assign("OMUFRITMKLIQYLJJYTSGEGXSWZBPTQACIRZJAZQBEQJIU");
    msg.x = 0.11348185462415306;
    msg.y = 0.6795324093137376;
    msg.z = 0.49619301962230167;
    msg.n = 0.4155096391977028;
    msg.e = 0.6097305242470191;
    msg.d = 0.9989210146690123;
    msg.phi = 0.39139542746143685;
    msg.theta = 0.11810423766130018;
    msg.psi = 0.17715199457207376;
    msg.accuracy = 0.6405434160175618;

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
    msg.setTimeStamp(0.7867151420303);
    msg.setSource(1539U);
    msg.setSourceEntity(246U);
    msg.setDestination(23326U);
    msg.setDestinationEntity(63U);
    msg.target.assign("HHMCWWYSZZBRYZYGBKZCOSCQPAKTEMEYNHJWVQVSBGTIHXJAIIYXRXNAXUVCPOAHOIQADWBR");
    msg.x = 0.546273204789396;
    msg.y = 0.5965580458100825;
    msg.z = 0.45571175359098615;
    msg.n = 0.2745853481132128;
    msg.e = 0.4255745459157576;
    msg.d = 0.6357382753592495;
    msg.phi = 0.9697370921763016;
    msg.theta = 0.2413475718655933;
    msg.psi = 0.06187336419837863;
    msg.accuracy = 0.2496507384188824;

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
    msg.setTimeStamp(0.49381266671896196);
    msg.setSource(42572U);
    msg.setSourceEntity(119U);
    msg.setDestination(55037U);
    msg.setDestinationEntity(205U);
    msg.target.assign("NUSYOLQAWFHYLDGNHOFTUETBXXGIAEUCZWFHWPIYXIMAEKVSMQSNBAXQKDYXBNRUIHFXXVYRTUPWLZJBKWHCUCXAACWOPUVMJH");
    msg.x = 0.18280342492868218;
    msg.y = 0.6235198301093434;
    msg.z = 0.35895431804667;
    msg.n = 0.05144215412954989;
    msg.e = 0.9237181044972106;
    msg.d = 0.5884925880336969;
    msg.phi = 0.9994166212322185;
    msg.theta = 0.3597238618433831;
    msg.psi = 0.11640814829292889;
    msg.accuracy = 0.4557795346211786;

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
    msg.setTimeStamp(0.08605450206610743);
    msg.setSource(32754U);
    msg.setSourceEntity(50U);
    msg.setDestination(25681U);
    msg.setDestinationEntity(114U);
    msg.target.assign("ZWFACDOBNPRIZRSUVZXUGYVCEDRIGJDMJUHTGZVVWFWGEAPEDUEOWVJJFOUKVKGYTHNLLCFQWPMSKPBMSFYMJBTDVOXSATCKMVGAYYVJKIYNIOBJXUUTSEODXRSSZZCLNWVHWHNYGWLNYNQICQSPMBDRKENKDPAMLWCWEDGYHAPQLHBTXMZUIIAPTQAEINLC");
    msg.lat = 0.4081319497258489;
    msg.lon = 0.1904960879342733;
    msg.z_units = 153U;
    msg.z = 0.31879146332525554;
    msg.accuracy = 0.5579143667129335;

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
    msg.setTimeStamp(0.24530949861767237);
    msg.setSource(26987U);
    msg.setSourceEntity(184U);
    msg.setDestination(40155U);
    msg.setDestinationEntity(7U);
    msg.target.assign("EXFRLANWESHUTLULEMGI");
    msg.lat = 0.5399664105382994;
    msg.lon = 0.3979183656359777;
    msg.z_units = 192U;
    msg.z = 0.8594732601177025;
    msg.accuracy = 0.832891357860748;

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
    msg.setTimeStamp(0.49336537622524756);
    msg.setSource(4177U);
    msg.setSourceEntity(1U);
    msg.setDestination(9142U);
    msg.setDestinationEntity(159U);
    msg.target.assign("ZVGXIGLESFZQCYNDRLIKXCYAXZUVMLOGVGSHHEZCVHEFOHRGSSXOHHASQBOKCTJDTOTAFPQFICDDWTMXDJUKWKNRQFZMNERLPPJYKBEBLWCPHJUYZNOGJECIYVNVRGBPRZDHCWRMXWIBKYQBGFIEOZYFMKLJSMSUGOIWIXLBLVDLBSVQRNNJRNUMTAMBHSWZEITSZETDIAWACPMMYYAYQQVPXRTPBJFTEOPLCJQWTKFPDAUNWXUGFUAOQDJKKA");
    msg.lat = 0.8227008342455874;
    msg.lon = 0.15041901944045288;
    msg.z_units = 14U;
    msg.z = 0.6012944388953079;
    msg.accuracy = 0.3638605092231251;

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
    msg.setTimeStamp(0.014902067488090753);
    msg.setSource(38179U);
    msg.setSourceEntity(156U);
    msg.setDestination(21589U);
    msg.setDestinationEntity(66U);
    msg.name.assign("URVDQJWWPJSUSXBPVZOVFRAKJUSYTKQKGWVETDMRSJCENZXYMZEBLBNIYCHFMKWNBKAAMKBGDPFNWPQBKAEMWQCFGARDDSSYOAVYCHERGKDHUFXFZCILR");
    msg.lat = 0.09248416561651418;
    msg.lon = 0.7735229183421926;
    msg.z = 0.8997655324207301;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.19607458430215308);
    msg.setSource(64571U);
    msg.setSourceEntity(48U);
    msg.setDestination(3889U);
    msg.setDestinationEntity(55U);
    msg.name.assign("HISHBUIMXOMLBSJLZUDIKSJDDTELTWWNPGWRJNQJEGVYNEKBTQOSTIHKVBMFYCLZFTCZKAVNGRMKPJXJKCUUBOASZZUPKHWCBRPQXXHBUSCIFHUFZNFIDGCYVDVAQLYBALHIVBKTFGQEAWWJWATOQZQXIAUMSVKPDRTYWZPUCXRYEOXXVAURNYIOFGFLZGS");
    msg.lat = 0.876859642120849;
    msg.lon = 0.5627929383181175;
    msg.z = 0.08428577644957413;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.32871853196640943);
    msg.setSource(11449U);
    msg.setSourceEntity(99U);
    msg.setDestination(3385U);
    msg.setDestinationEntity(176U);
    msg.name.assign("ANHQRIWPVYSBSIJHPVORRWTRENXDWCFTFIBNBGQVHDCVXOZNIYGVXSDBFDMJUJNWEPOEZSLEPQJJJTCWUELYELQVEKLHTUIAHVPURGWLYPLLTAMD");
    msg.lat = 0.7479826703975256;
    msg.lon = 0.6051050447262709;
    msg.z = 0.5996953056232803;
    msg.z_units = 22U;

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
    msg.setTimeStamp(0.3485155803712837);
    msg.setSource(1239U);
    msg.setSourceEntity(154U);
    msg.setDestination(24107U);
    msg.setDestinationEntity(211U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.38000591828328967);
    msg.setSource(29572U);
    msg.setSourceEntity(100U);
    msg.setDestination(35302U);
    msg.setDestinationEntity(50U);
    msg.op = 1U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EICHRZWDEWQGDZXULINXEROUMYLXXXAWVCUJRKIMBJIQCSZWAQEHOUYJURYVBFVJGYXWTXBMFVL");
    tmp_msg_0.lat = 0.3468681868263306;
    tmp_msg_0.lon = 0.6035739221805952;
    tmp_msg_0.z = 0.7570929668593958;
    tmp_msg_0.z_units = 94U;
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
    msg.setTimeStamp(0.3342835098641582);
    msg.setSource(6646U);
    msg.setSourceEntity(172U);
    msg.setDestination(22421U);
    msg.setDestinationEntity(233U);
    msg.op = 188U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("OYCDLGLWFYHCTJFCDRQEPJHBJPRPEKVNNDTRTSLJIUCNXXUBLLIBOKLAGGSHSAPWVNZSOENVFNFMBXIHKEQYWEAMLZSFOSVZKTADQBGERESZMTFMUJKXFIXCXGXZQHWMBPGIEZEWYYKIQGPQZBTYSDBLIASOKJCLMRZMKOWPATGGOWXOKHDYRNVJRXJJUTLNUACPQUQDHH");
    tmp_msg_0.lat = 0.06556342714116237;
    tmp_msg_0.lon = 0.24906259293081612;
    tmp_msg_0.z = 0.27237488983319247;
    tmp_msg_0.z_units = 235U;
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
    msg.setTimeStamp(0.8909707194660411);
    msg.setSource(63109U);
    msg.setSourceEntity(213U);
    msg.setDestination(684U);
    msg.setDestinationEntity(32U);
    msg.value = 0.6741436397219075;
    msg.type = 16U;

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
    msg.setTimeStamp(0.1765848053913187);
    msg.setSource(12329U);
    msg.setSourceEntity(3U);
    msg.setDestination(4081U);
    msg.setDestinationEntity(111U);
    msg.value = 0.31180588722661406;
    msg.type = 234U;

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
    msg.setTimeStamp(0.7114923617791263);
    msg.setSource(51072U);
    msg.setSourceEntity(112U);
    msg.setDestination(60682U);
    msg.setDestinationEntity(116U);
    msg.value = 0.9821774379599232;
    msg.type = 17U;

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
    msg.setTimeStamp(0.8577587666489783);
    msg.setSource(6786U);
    msg.setSourceEntity(87U);
    msg.setDestination(43881U);
    msg.setDestinationEntity(217U);
    msg.value = 0.43964802818419824;

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
    msg.setTimeStamp(0.12387363718574584);
    msg.setSource(47677U);
    msg.setSourceEntity(120U);
    msg.setDestination(51627U);
    msg.setDestinationEntity(178U);
    msg.value = 0.1699253198545264;

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
    msg.setTimeStamp(0.29627760331928055);
    msg.setSource(36919U);
    msg.setSourceEntity(86U);
    msg.setDestination(61692U);
    msg.setDestinationEntity(100U);
    msg.value = 0.24456523048727086;

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
    msg.setTimeStamp(0.9804165079290799);
    msg.setSource(26598U);
    msg.setSourceEntity(200U);
    msg.setDestination(49257U);
    msg.setDestinationEntity(21U);
    msg.timestamp_last_service = 0.05671469014052832;
    msg.time_next_service = 0.0817766646692355;
    msg.time_motor_next_service = 0.05542798272742444;
    msg.time_idle_ground = 0.2278912947863727;
    msg.time_idle_air = 0.04056443488030237;
    msg.time_idle_water = 0.38541531677978247;
    msg.time_idle_underwater = 0.5329460686616272;
    msg.time_idle_unknown = 0.5830013748336592;
    msg.time_motor_ground = 0.5866767574007956;
    msg.time_motor_air = 0.04373788741015705;
    msg.time_motor_water = 0.91317212119026;
    msg.time_motor_underwater = 0.3890841022769621;
    msg.time_motor_unknown = 0.09177898018608455;
    msg.rpm_min = 24851;
    msg.rpm_max = -1201;
    msg.depth_max = 0.037378684406906726;

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
    msg.setTimeStamp(0.34622640351332545);
    msg.setSource(2487U);
    msg.setSourceEntity(10U);
    msg.setDestination(18087U);
    msg.setDestinationEntity(102U);
    msg.timestamp_last_service = 0.8340221621676394;
    msg.time_next_service = 0.530742398600351;
    msg.time_motor_next_service = 0.40693144014156213;
    msg.time_idle_ground = 0.5035136093731744;
    msg.time_idle_air = 0.34116306926231155;
    msg.time_idle_water = 0.5837255707025025;
    msg.time_idle_underwater = 0.8759798668548435;
    msg.time_idle_unknown = 0.5452227867097659;
    msg.time_motor_ground = 0.1437389138665066;
    msg.time_motor_air = 0.07610480260571373;
    msg.time_motor_water = 0.6816132931767116;
    msg.time_motor_underwater = 0.9324075823951714;
    msg.time_motor_unknown = 0.7243607459917307;
    msg.rpm_min = -4698;
    msg.rpm_max = 26387;
    msg.depth_max = 0.6114192189515829;

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
    msg.setTimeStamp(0.7908812501971004);
    msg.setSource(38142U);
    msg.setSourceEntity(155U);
    msg.setDestination(8597U);
    msg.setDestinationEntity(112U);
    msg.timestamp_last_service = 0.3124937212484843;
    msg.time_next_service = 0.6805148151046255;
    msg.time_motor_next_service = 0.9614648637761166;
    msg.time_idle_ground = 0.14088467494311352;
    msg.time_idle_air = 0.233361818130581;
    msg.time_idle_water = 0.001605127349997626;
    msg.time_idle_underwater = 0.742888064830053;
    msg.time_idle_unknown = 0.009282635616720047;
    msg.time_motor_ground = 0.09933524856690812;
    msg.time_motor_air = 0.5879246096229398;
    msg.time_motor_water = 0.8716848610918291;
    msg.time_motor_underwater = 0.09002394572478023;
    msg.time_motor_unknown = 0.047893194023017616;
    msg.rpm_min = 10694;
    msg.rpm_max = 4551;
    msg.depth_max = 0.47622338105952045;

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
    msg.setTimeStamp(0.8236528484657925);
    msg.setSource(42457U);
    msg.setSourceEntity(227U);
    msg.setDestination(47760U);
    msg.setDestinationEntity(223U);
    msg.severity = 57U;
    msg.text.assign("LXZZNBZZYWUQMCARJILUSUJDXGDPNOLPFOTTZUQXFEKWNUEBZAGYYWCJVNHRVWLXCGJVSTXIBPBKOZVWAAESAXDNHLJHQNQAWIOMOAIJCGMBPCMYYRDTUAPQNQRWPFURGZIYXORTHGGKNGFUHICVVWQGFVCPYKFUMMELHNMCSHPJRGQSKDFNMDAOZJYRXEKOKTERRTKVPEOTHDIFSIDFPAMQCTSYSSSLXUQKYBC");

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
    msg.setTimeStamp(0.8062791539329007);
    msg.setSource(7093U);
    msg.setSourceEntity(37U);
    msg.setDestination(39133U);
    msg.setDestinationEntity(188U);
    msg.severity = 96U;
    msg.text.assign("JIVCNQXKKZMDXPPHOXVACLFREHWWTYPTKWOEROHJUSHZEIUTVUSXXWJIRLBYMLLZRLVGBKDAWPQJROTNTFMMVMMQIDKFMOMRBEECQHSOFKSNYTBGWQZAYCGZGPPNPZJWOTDRPNNBEDUQUVKXSMILJQVVSPCJHFCYSWSJGSEWINEFRGTBXERXMAGWHAQBQOJOOBDZLFYUUFIRHNUCBDPCKKVEAGFTAAVCANXDQTIZINYGHJLLZGAFCKUYSIYU");

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
    msg.setTimeStamp(0.7773797748172058);
    msg.setSource(29205U);
    msg.setSourceEntity(228U);
    msg.setDestination(47977U);
    msg.setDestinationEntity(77U);
    msg.severity = 204U;
    msg.text.assign("YZSMXTWHVKJZIELZIBMZJMXTMXGLQPTWDAKPLBTOTJAKXPFOZYEEUHDDGXHMKHRQVPFWANLMLPSFYRUQFCVYQMYMEOQVCUVUZYUNGVGBRRZCDTESOKIWTCAUDFKFHFBHGXBGAEHJQXJRPCBYTWHRESDSOVIVXCKOSVNAIQSAPXNBWZYUPAUOFFRJNIMIKNTCYAJQPVWXLBKIJWBQGRAQLDSERYNWICJHGCJSETD");

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
    msg.setTimeStamp(0.3195116400460175);
    msg.setSource(52164U);
    msg.setSourceEntity(112U);
    msg.setDestination(40158U);
    msg.setDestinationEntity(147U);
    msg.channel = 105;
    msg.value = 477193122;
    msg.gain = 157U;

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
    msg.setTimeStamp(0.6168154222818084);
    msg.setSource(39248U);
    msg.setSourceEntity(49U);
    msg.setDestination(26243U);
    msg.setDestinationEntity(233U);
    msg.channel = -57;
    msg.value = 1800006562;
    msg.gain = 2U;

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
    msg.setTimeStamp(0.5975205170268757);
    msg.setSource(41280U);
    msg.setSourceEntity(122U);
    msg.setDestination(60038U);
    msg.setDestinationEntity(167U);
    msg.channel = 92;
    msg.value = -452873697;
    msg.gain = 116U;

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
    msg.setTimeStamp(0.09487296135010859);
    msg.setSource(11070U);
    msg.setSourceEntity(7U);
    msg.setDestination(33031U);
    msg.setDestinationEntity(100U);
    msg.ch01 = 0.2902709240827217;
    msg.ch02 = 0.6342409316365979;
    msg.ch03 = 0.8121756717494109;
    msg.ch04 = 0.9728278391595668;
    msg.ch05 = 0.8920602850971905;
    msg.ch06 = 0.05070438328149096;
    msg.ch07 = 0.2286798617368454;
    msg.ch08 = 0.3172598242990289;
    msg.ch09 = 0.8986420338929065;
    msg.ch10 = 0.14261526682932768;
    msg.ch11 = 0.657940267811942;
    msg.ch12 = 0.7720566589952256;
    msg.ch13 = 0.6278392233089892;
    msg.ch14 = 0.0387545458931301;
    msg.ch15 = 0.05889588324131445;
    msg.ch16 = 0.6030931722578015;

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
    msg.setTimeStamp(0.43878303277984687);
    msg.setSource(47042U);
    msg.setSourceEntity(167U);
    msg.setDestination(6350U);
    msg.setDestinationEntity(173U);
    msg.ch01 = 0.9147393920193326;
    msg.ch02 = 0.6992621524801468;
    msg.ch03 = 0.24284874144566737;
    msg.ch04 = 0.5102891534266779;
    msg.ch05 = 0.9596174474881608;
    msg.ch06 = 0.21247283820385543;
    msg.ch07 = 0.20500058146497002;
    msg.ch08 = 0.48260851570396934;
    msg.ch09 = 0.049480387428340045;
    msg.ch10 = 0.4994751485149279;
    msg.ch11 = 0.3451360052379572;
    msg.ch12 = 0.26431569607325756;
    msg.ch13 = 0.652494680551777;
    msg.ch14 = 0.6098939533318769;
    msg.ch15 = 0.9426021040055514;
    msg.ch16 = 0.5139026582840168;

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
    msg.setTimeStamp(0.4918409941120421);
    msg.setSource(46393U);
    msg.setSourceEntity(22U);
    msg.setDestination(17898U);
    msg.setDestinationEntity(210U);
    msg.ch01 = 0.493580102017922;
    msg.ch02 = 0.5224763139339657;
    msg.ch03 = 0.5385861185621883;
    msg.ch04 = 0.9506157800768477;
    msg.ch05 = 0.10873855854299463;
    msg.ch06 = 0.8786995166823214;
    msg.ch07 = 0.707016809036343;
    msg.ch08 = 0.5058165071931624;
    msg.ch09 = 0.19890691027448004;
    msg.ch10 = 0.648799673989186;
    msg.ch11 = 0.040222486890723275;
    msg.ch12 = 0.7971321748234469;
    msg.ch13 = 0.003121562485477347;
    msg.ch14 = 0.6313799691844412;
    msg.ch15 = 0.30861398790677685;
    msg.ch16 = 0.9554908620452095;

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
    msg.setTimeStamp(0.5019905648120249);
    msg.setSource(42470U);
    msg.setSourceEntity(12U);
    msg.setDestination(53616U);
    msg.setDestinationEntity(52U);
    msg.op = 183U;
    msg.lat = 0.24523459933491576;
    msg.lon = 0.5025181477327645;
    msg.height = 0.6987392570841279;
    msg.depth = 0.5417906968461366;
    msg.alt = 0.09128813083651988;

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
    msg.setTimeStamp(0.1695825774250056);
    msg.setSource(60747U);
    msg.setSourceEntity(73U);
    msg.setDestination(8526U);
    msg.setDestinationEntity(61U);
    msg.op = 2U;
    msg.lat = 0.5916489407525318;
    msg.lon = 0.3066715713661843;
    msg.height = 0.4588879434297327;
    msg.depth = 0.782494389428176;
    msg.alt = 0.581884977792028;

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
    msg.setTimeStamp(0.20335967133084076);
    msg.setSource(19208U);
    msg.setSourceEntity(183U);
    msg.setDestination(56838U);
    msg.setDestinationEntity(207U);
    msg.op = 228U;
    msg.lat = 0.009104545688967569;
    msg.lon = 0.14859232637885844;
    msg.height = 0.14646070437663727;
    msg.depth = 0.46236547371070813;
    msg.alt = 0.1087143883524545;

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
    msg.setTimeStamp(0.5247810845141144);
    msg.setSource(2190U);
    msg.setSourceEntity(210U);
    msg.setDestination(11804U);
    msg.setDestinationEntity(177U);
    msg.direction = 0.6286951292825308;
    msg.speed = 0.9270771175602651;
    msg.turbulence = 0.08264884326228383;

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
    msg.setTimeStamp(0.04401954188536228);
    msg.setSource(45329U);
    msg.setSourceEntity(8U);
    msg.setDestination(16979U);
    msg.setDestinationEntity(59U);
    msg.direction = 0.9089138520924561;
    msg.speed = 0.2697059278569339;
    msg.turbulence = 0.8567599994128572;

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
    msg.setTimeStamp(0.6384303059801479);
    msg.setSource(29388U);
    msg.setSourceEntity(155U);
    msg.setDestination(219U);
    msg.setDestinationEntity(18U);
    msg.direction = 0.9867770307848647;
    msg.speed = 0.4377390991324831;
    msg.turbulence = 0.6679755730861217;

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
    msg.setTimeStamp(0.9681387145764436);
    msg.setSource(768U);
    msg.setSourceEntity(101U);
    msg.setDestination(56754U);
    msg.setDestinationEntity(24U);
    msg.msg_type.assign("XXZVTJNFEJXQZJVGSDPTAMDLNLOPOLGRTCBAVSGOEVYUREHDFMYBSWNLELELANIFXUGRBRVKWGHIJZXZRDLNJMAWUMEWNAPSTYQUHAKQCQDERSBFUKKWRJJPFQWRVMCFSAJKWBHXHOOWHF");
    msg.sensor_class.assign("BYOWYAFNUOZYMTTYKSIUXNLKBZGAEXQWPCWHJVBFURJHXHJCIQLQBPXAOTTDYRUPOQZIXJKWFBHKCSMVXJELNNPFGFVDQUTVACANRTUPBKFLVPUCKEBLATQIPCGEJFELHOJGSIOFXGZZZESRJDQWTHMMPDMZBWPMIGEARYUXEHNEKOYKDUMSQVLNBIWPNWUC");
    msg.mmsi.assign("MFVMFYEYDYULDALEQOPUWIUVENGPOAJAORWUQXNNNMVDMXCEAGWQRJVUEOHVYWZHDRQYXFA");
    msg.callsign.assign("DHGLEHKLQSLNXBWZRTACOTEWQMQLJFPAORVSMVWDYWVIXVVYTMABJQCIMPNDUEDIWKTPNNHABJXXRNTESUPMYOOYEZKXMNXFLTRMSEPVFDHWMY");
    msg.name.assign("PXFIFDRMYQZMEOQGUHMNLOYBPGKBGPBHHKKVSZNXCAAFVOTSKUTCICRKBRHXPWFEBVAWVNWDHIRGJDJGGEAKAOINUNCGESTMFGDVQAXXYVSYEDORUYDEZFVLMOJHZLJLZXXSSWCXYNAIWBUMTPIRFVZZPYMKCUHHKTDNL");
    msg.nav_status = 44U;
    msg.type_and_cargo = 31U;
    msg.lat = 0.4152447470526881;
    msg.lon = 0.5979101191454607;
    msg.course = 0.3647219189802281;
    msg.speed = 0.07711508129334677;
    msg.dist = 0.1485706629720983;
    msg.a = 0.8556356252774724;
    msg.b = 0.661579254159699;
    msg.c = 0.7081748641864953;
    msg.d = 0.45186772341265913;
    msg.draught = 0.22313778164257891;

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
    msg.setTimeStamp(0.2796560084162477);
    msg.setSource(45206U);
    msg.setSourceEntity(7U);
    msg.setDestination(57958U);
    msg.setDestinationEntity(14U);
    msg.msg_type.assign("XWQNZDJZZJIPNHBGQTZOQXWXSTGOQSSPJCHNXKDYFKHGRRUEXULWBXMMDDGCBREMTCYVLPQOCBPVRSYOMNKBBLPTQEWEWXEZCAQIGDZIFZINLHDSXMTRFSVBNKZYYDAITRNERLUNIULYWLRVTOJZMAPCKFVCUHLBKEAAMFBAKOHMTUDXGNEFDKVAAKAOQHGPWMOVEQWYPPVWSCSCTHGLAUCORHRDQJVP");
    msg.sensor_class.assign("UEECJCKOXUTINDKAYGQTBHCLAEAGRSMFNRFZHQVFCPZFKVAQBMSQARKTWUAWQLTIWGDXPRTBOBXDEUAWLTODXHDIXYMUJJDWCPLJSTSYLPHNSMTSGQEBUMJKWPQNGEZHZXIMLLXPVPIGXHEJCHWHFVVLOWSIDKTEDBPNKYGHOEFCZIYVFPQOASEMOOBRFXVQJVJGRNGBUMHGCKZWCUOZZAUAWLKMPKSC");
    msg.mmsi.assign("FKHTKZIHMIEZFWJUXOBGECXVCLIJTFVBVUWBUSIFBLSRWDJPWGTMFFKZGFLZJTGQMOJVLDODNPEYTXAOLVQJOYWHWANPKJULRLPIQJNDAUHVQEAWOMXUBQCTNVKRRNPZASYAHRLPWKVCQKBPXSMXNYZMZIIYWTQYEBAPHZSCTDK");
    msg.callsign.assign("LVVXLBATQFZJRHISJZIGPGUCZUWFJIWWCDGNJRXKCTMXIEAQHXTSW");
    msg.name.assign("UMTCOIKCNX");
    msg.nav_status = 149U;
    msg.type_and_cargo = 54U;
    msg.lat = 0.8159217729832728;
    msg.lon = 0.8657768431807301;
    msg.course = 0.7652299533505307;
    msg.speed = 0.9533451327855039;
    msg.dist = 0.3567101267034991;
    msg.a = 0.43651318733779365;
    msg.b = 0.24128092513224675;
    msg.c = 0.5132829898040626;
    msg.d = 0.0003966234310193162;
    msg.draught = 0.1253109969380004;

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
    msg.setTimeStamp(0.445505801019344);
    msg.setSource(62183U);
    msg.setSourceEntity(180U);
    msg.setDestination(37935U);
    msg.setDestinationEntity(143U);
    msg.msg_type.assign("NPCKPKWMGCPJSFDSGQZJYDNJUEVHOWRHPTDCHIYAVXPRSLPOWSQDYKEBDHDTSRUURAHWMBLZIRYGOFELFIHUVTOVXVQUDFYHZIWTGEJAFONZKNPCCMAFOACJWMFIMLTEKEUIWJZJLXBRGQAYDBONXZNCBLRQXKOFZXWRTKQQGTNIUPYPSVCTZWBXBQHCWYJYAKLLLGHIOLPDMYSEJN");
    msg.sensor_class.assign("XSAQKBECXTIXNCQGJUMFKIXMGJ");
    msg.mmsi.assign("SUQOWIELMYYQKJPIUFOHVKHXDRVVOXEPZMHBACAQFOGIVYAPWYWKETUJQTZUSSTPTQSFIRDNCQHIZKBRBCTBBMDWEOCURRNGGCYXGLHSKIZAKWFPTEKCHGZCXULKDXBHVAQVTSZDIFWBXVWOJQZZNSJLWFWLNFUBPRGLLESJNOEYHJPSXMVQUPMKGEJXWIFRCYKSDTJALCMZAGLGMTRDFBIOHPTFMJNNEONMVMDYQPGYIAOVJNEHB");
    msg.callsign.assign("WCVAVBZJVBGAZKPOJXNALJIDQYTTYYROZSTVLHZWHWCPWXUDEAWMDAUQLSPUUPIPQPOATSLMRFNTEYXDWIJISDVLGLDNGIPOLIOJBUEBGFWNNFFEHCRZPZLKVSKWIGEGQCVMTZZBWBCXUQCTY");
    msg.name.assign("ZRGFEXBUDMBXOJFDSFSYWGNDLZPKFPWIPDFTZGMCWBQHDIEEFUIDKTBZWCMNXPYUSVRTRVYRPSYCOYIAXMXVRBANUAQYKCLPJZEMPSKTLJERQKZPMZLUEXFINDMVXTWKZVRQWYOOVZSMQJOVCMGIXLGLLABTAY");
    msg.nav_status = 248U;
    msg.type_and_cargo = 72U;
    msg.lat = 0.3896558429811462;
    msg.lon = 0.461638532373572;
    msg.course = 0.7189701450519612;
    msg.speed = 0.19179062189633533;
    msg.dist = 0.29572419288501595;
    msg.a = 0.602796429470342;
    msg.b = 0.538117383273003;
    msg.c = 0.3103880220632982;
    msg.d = 0.8450631836064679;
    msg.draught = 0.8896685118249797;

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
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.5914797413955397);
    msg.setSource(42946U);
    msg.setSourceEntity(211U);
    msg.setDestination(13152U);
    msg.setDestinationEntity(123U);
    msg.depth_at_loc.assign("XVWNJUAQQPZQJAHLSVWVZXGMZCKIFAJEFMRVZRHDGCBX");
    msg.danger.assign("YGPIVVYUNLZBBRABJIOBQFYAIDXTIHQAPNTWPLPJRHSWUHGFNMNXBAKJBOVIBXZRNOIIEMTEDFMAOFAHCCQNYCDHDDLDTUPPDITNGHYXFSREXUQGNGKTIDOQKYTVUEJEQNKJLGWULCCRUAECHLCVQMKRMZQOKSZGYVWRGMFWPSESQKXJZERJVM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.08257480263852857);
    msg.setSource(59632U);
    msg.setSourceEntity(56U);
    msg.setDestination(34808U);
    msg.setDestinationEntity(199U);
    msg.depth_at_loc.assign("LYLESBNRQJHBEJGMDAGADWBJCEWOMONHNMUYRAWCZXOXWFFPRMHOFSPYTHDSRZXVIIUFJPGIDCSXLUEGBSJYQWTECTPFXQHWBRVPNCAPV");
    msg.danger.assign("QCVIMZENOIRROBKQRYBZXIIRQKPXNWTKFEODGZOSEMBTULVKDSRCVDGXZOIWATNIRZGNZIYHYDZMGUXNJPTSBYWLLACXNFWNPSQUDPVMFVJFFYXZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.8425089596160246);
    msg.setSource(12586U);
    msg.setSourceEntity(223U);
    msg.setDestination(48737U);
    msg.setDestinationEntity(112U);
    msg.depth_at_loc.assign("EOTGCYCKKCBHBJSYPSDETYPNXXPJWJJJRJORUZDUBPFTLRBFBPMTZHFTNOJGYRAHWFWRRVQCAUXAZEFZHWHSINCECMORJGDXKNVJASNUYEZLNMYOGFPLNC");
    msg.danger.assign("BIQXMAAUZTBPWRRWOKQVYLZDHNSILZPTSZILEYXBHEPSBCDQLUYCJNSRQKFMVGFOWOHBKCVZYPTZEEMAGXOYTWHHXTKMSXMZSHVRPGYJKSEMGLJCCKDRWIJDBNGGBBRJITKJDXFVALRZRAMXJCKGZNAFYGVFGNOUKUOVRQDEJOETOQIPVUTCUPNHANHDPTWUWJISWXUVNAUKLOQFXCCWPYNWPIEFYZFSECDEUALADTFLQBSYQGHIMF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.726260259603746);
    msg.setSource(50544U);
    msg.setSourceEntity(17U);
    msg.setDestination(29352U);
    msg.setDestinationEntity(222U);
    msg.time = 0.013339328189350463;
    msg.x = 0.8170840794428784;
    msg.y = 0.40182056303322755;
    msg.z = 0.9608806737085283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.7508543071726868);
    msg.setSource(58504U);
    msg.setSourceEntity(36U);
    msg.setDestination(10145U);
    msg.setDestinationEntity(199U);
    msg.time = 0.19586720757666298;
    msg.x = 0.8249525223366815;
    msg.y = 0.42477444127034514;
    msg.z = 0.8771416820671463;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.016807319597240022);
    msg.setSource(15316U);
    msg.setSourceEntity(146U);
    msg.setDestination(3944U);
    msg.setDestinationEntity(43U);
    msg.time = 0.7684982455283361;
    msg.x = 0.6244699046674445;
    msg.y = 0.9484795821911582;
    msg.z = 0.9105857718106938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #2", msg == *msg_d);
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
    msg.setTimeStamp(0.004233952299936838);
    msg.setSource(14885U);
    msg.setSourceEntity(150U);
    msg.setDestination(47500U);
    msg.setDestinationEntity(60U);
    msg.nbeams = 235U;
    msg.ncells = 139U;
    msg.coord_sys = 9U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.9210472466682558;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.48139161180535206;
    tmp_tmp_msg_0_0.amp = 0.81639284878675;
    tmp_tmp_msg_0_0.cor = 36;
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
    msg.setTimeStamp(0.6583561478403971);
    msg.setSource(26547U);
    msg.setSourceEntity(168U);
    msg.setDestination(34677U);
    msg.setDestinationEntity(29U);
    msg.nbeams = 1U;
    msg.ncells = 217U;
    msg.coord_sys = 45U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.23240727066022782;
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
    msg.setTimeStamp(0.0005932834835341572);
    msg.setSource(43406U);
    msg.setSourceEntity(200U);
    msg.setDestination(38805U);
    msg.setDestinationEntity(129U);
    msg.nbeams = 152U;
    msg.ncells = 128U;
    msg.coord_sys = 109U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.26725989773601866;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.8160635467124083;
    tmp_tmp_msg_0_0.amp = 0.13132028695231857;
    tmp_tmp_msg_0_0.cor = 51;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.44994100964262074);
    msg.setSource(22907U);
    msg.setSourceEntity(174U);
    msg.setDestination(12009U);
    msg.setDestinationEntity(23U);
    msg.cell_position = 0.2070067209110834;

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
    msg.setTimeStamp(0.4365258706823375);
    msg.setSource(39900U);
    msg.setSourceEntity(251U);
    msg.setDestination(43918U);
    msg.setDestinationEntity(201U);
    msg.cell_position = 0.33055872415888243;

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
    msg.setTimeStamp(0.6820998584301333);
    msg.setSource(17443U);
    msg.setSourceEntity(94U);
    msg.setDestination(45749U);
    msg.setDestinationEntity(30U);
    msg.cell_position = 0.8777336735219314;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.12203855508962158;
    tmp_msg_0.amp = 0.17615793451553963;
    tmp_msg_0.cor = 103;
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
    msg.setTimeStamp(0.5426128099599327);
    msg.setSource(33667U);
    msg.setSourceEntity(15U);
    msg.setDestination(19688U);
    msg.setDestinationEntity(51U);
    msg.vel = 0.7962250352905283;
    msg.amp = 0.08139854783736211;
    msg.cor = 82;

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
    msg.setTimeStamp(0.8563640167377905);
    msg.setSource(19648U);
    msg.setSourceEntity(70U);
    msg.setDestination(39838U);
    msg.setDestinationEntity(148U);
    msg.vel = 0.26811975931414755;
    msg.amp = 0.7606815563791854;
    msg.cor = -48;

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
    msg.setTimeStamp(0.6538365651356055);
    msg.setSource(61878U);
    msg.setSourceEntity(18U);
    msg.setDestination(46198U);
    msg.setDestinationEntity(128U);
    msg.vel = 0.6764526173571962;
    msg.amp = 0.72031863011404;
    msg.cor = 27;

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
    IMC::Frequency msg;
    msg.setTimeStamp(0.7419993860827754);
    msg.setSource(45739U);
    msg.setSourceEntity(101U);
    msg.setDestination(27216U);
    msg.setDestinationEntity(233U);
    msg.value = 0.4319125505541883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.021520869356271177);
    msg.setSource(34191U);
    msg.setSourceEntity(14U);
    msg.setDestination(44980U);
    msg.setDestinationEntity(100U);
    msg.value = 0.8854890851960191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.9173676852965255);
    msg.setSource(3712U);
    msg.setSourceEntity(47U);
    msg.setDestination(4524U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5810229407443726;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3086511856695112);
    msg.setSource(57306U);
    msg.setSourceEntity(122U);
    msg.setDestination(36600U);
    msg.setDestinationEntity(80U);
    msg.name.assign("TAJYYYXVGIWZVBWNYJDSUOTLEOZEPRIURXQEOZOQTJQHLQKZWMDZHRBTUSAXBWSROKGAOWGSMAPQNJDVVLKEVFVWTDWQJAZLBVDLHRYTKOAXIJREPUSPSGDJEIGLNYXSRVSCLCFKJNFVIHJPBMIIDBWPUBANCAHBUWACDPSGFXPTERRHZOUXMYXQUNNMFMHKQMIHUMHMF");
    msg.value = 54U;

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
    msg.setTimeStamp(0.7746991126511589);
    msg.setSource(30460U);
    msg.setSourceEntity(150U);
    msg.setDestination(36061U);
    msg.setDestinationEntity(93U);
    msg.name.assign("YJEOSSCOUFBSTUHZKIFCZWOCMVUGOWXWDAADHWUMJXPZQBGFMFMNGLYEKMCPVPSRLLSEHVHZYJOVVNYOZFGIDOIRBMHJYADAUNCGRJIMRJXKJQMKGITNZHFWFBJLZDUXRUSGHZTJIEVVRCKNOWBYVBCEHSXVQQAGXEXFYCDOPRRKUPGRZAQWTC");
    msg.value = 24U;

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
    msg.setTimeStamp(0.6508208581402781);
    msg.setSource(27018U);
    msg.setSourceEntity(169U);
    msg.setDestination(9445U);
    msg.setDestinationEntity(226U);
    msg.name.assign("IERDZQQNGYXDYDZPCMDVWOTJAFUUZQAYIJRNOIERSSKCVULEBCPMCCGHIWZFEUROOPXGHPCQDWGBPXFFLLKGYJLJPEAITQXYFYQVVJYFLUIJFKFKZAAVRWYAADMURHBUENNVHHXDWGEJUIHRPAHTKDKBHDXJCGKSX");
    msg.value = 249U;

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
    msg.setTimeStamp(0.7223261248382026);
    msg.setSource(11520U);
    msg.setSourceEntity(183U);
    msg.setDestination(65236U);
    msg.setDestinationEntity(9U);
    msg.name.assign("PKSMSDFNBCJNHQV");

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
    msg.setTimeStamp(0.8794849875291604);
    msg.setSource(12664U);
    msg.setSourceEntity(179U);
    msg.setDestination(24791U);
    msg.setDestinationEntity(141U);
    msg.name.assign("JTLSMGDWAATWPRATNCCPDGGZOFBEGLHBMNVJCFJQDFJJMNZWXFYBCBQMRPNNWVHUHALBRRDABHKUZFIKYIDWBWXAUUDUYUMEXZYQSECCYJRIKZERYIFQWHGTNPTVFNXGUMWUOKXYXEKSSKLYVJIWVPXLWTMVJASBLMIGYZYDSTJNBSHBUGSCNQUPNCHXRELFFERHCIDOKOOMIGRKVZJKOOEDVEQLPTHZCMLVPTEXOPXZGQFOHTSPA");

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
    msg.setTimeStamp(0.49602937217680343);
    msg.setSource(33584U);
    msg.setSourceEntity(119U);
    msg.setDestination(62595U);
    msg.setDestinationEntity(57U);
    msg.name.assign("XMTAFNUADIHZJNQIVOBHMPYBRQFOFNLDCXXZMFAMQRRIOVJVWWVSHAVKZCUHAYNSCYGCOFIK");

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
    msg.setTimeStamp(0.5568877509501989);
    msg.setSource(48269U);
    msg.setSourceEntity(227U);
    msg.setDestination(54328U);
    msg.setDestinationEntity(124U);
    msg.name.assign("WSTXESKRNWJEBDHIKLFHXLCPLVNBEDNYRAACDZBYUTQDIJBEHJCEYZHSFSQRPSMABYGXWDZAPNNBLWCXBOGEXMHPHNVOJKSNRKGRGSEDTOTWRGKTXALUZZEZTCUKFKVOMHYODCWIGQPZMHZZBKOFRUWQJZRJUDMKUMJNQOPFKTQXUUSAMGWALCOCVFWVIMTSGIIYQIQMUVCQCGQYLTAPRBFEINOEFLVFDVUGIRYXJ");
    msg.value = 233U;

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
    msg.setTimeStamp(0.8470996014543586);
    msg.setSource(6491U);
    msg.setSourceEntity(100U);
    msg.setDestination(4007U);
    msg.setDestinationEntity(126U);
    msg.name.assign("IJFILZWZLVFAWKUJTQBEK");
    msg.value = 90U;

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
    msg.setTimeStamp(0.2862447858222015);
    msg.setSource(21563U);
    msg.setSourceEntity(102U);
    msg.setDestination(35787U);
    msg.setDestinationEntity(62U);
    msg.name.assign("CEFKLNZJHWTBSJHIOZUILPGLZZWWIAHPPRBQOXMXNTDSOYCNKWZQGWHYPCQRVBYEJXHXSLMPYRABTODKQFVQKJBMDHPSMI");
    msg.value = 107U;

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
    msg.setTimeStamp(0.33390588413287925);
    msg.setSource(5853U);
    msg.setSourceEntity(89U);
    msg.setDestination(5468U);
    msg.setDestinationEntity(142U);
    msg.value = 0.3836363552725459;

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
    msg.setTimeStamp(0.9012189798098662);
    msg.setSource(50971U);
    msg.setSourceEntity(193U);
    msg.setDestination(13655U);
    msg.setDestinationEntity(100U);
    msg.value = 0.7081441649346472;

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
    msg.setTimeStamp(0.362014733306404);
    msg.setSource(43592U);
    msg.setSourceEntity(216U);
    msg.setDestination(517U);
    msg.setDestinationEntity(16U);
    msg.value = 0.7891429495658996;

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
    msg.setTimeStamp(0.045393126846712595);
    msg.setSource(45206U);
    msg.setSourceEntity(239U);
    msg.setDestination(17499U);
    msg.setDestinationEntity(59U);
    msg.value = 0.9062279623222909;

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
    msg.setTimeStamp(0.039900638429052004);
    msg.setSource(21300U);
    msg.setSourceEntity(27U);
    msg.setDestination(23829U);
    msg.setDestinationEntity(15U);
    msg.value = 0.28101010587599806;

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
    msg.setTimeStamp(0.16205341252063377);
    msg.setSource(57146U);
    msg.setSourceEntity(51U);
    msg.setDestination(41238U);
    msg.setDestinationEntity(169U);
    msg.value = 0.6319666959306393;

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
    msg.setTimeStamp(0.1749855580444517);
    msg.setSource(25909U);
    msg.setSourceEntity(0U);
    msg.setDestination(51572U);
    msg.setDestinationEntity(141U);
    msg.value = 0.9894824566342459;

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
    msg.setTimeStamp(0.09028502124535975);
    msg.setSource(28839U);
    msg.setSourceEntity(137U);
    msg.setDestination(2998U);
    msg.setDestinationEntity(101U);
    msg.value = 0.8639101060045169;

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
    msg.setTimeStamp(0.8970942074955114);
    msg.setSource(64976U);
    msg.setSourceEntity(168U);
    msg.setDestination(20000U);
    msg.setDestinationEntity(234U);
    msg.value = 0.890092622157277;

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
    msg.setTimeStamp(0.07793636631041712);
    msg.setSource(39343U);
    msg.setSourceEntity(61U);
    msg.setDestination(40741U);
    msg.setDestinationEntity(233U);
    msg.restriction = 70U;
    msg.reason.assign("LIHTZYPQWWIEYBXECWGSCOGUNIOWEURMOWUDRVAFAWQIVVYAMSZDEPKKXNYXNDKBSXZWKCCRNJCJUUDNQZLLRAPGUFQDLAJLKVGYKBVMTEKTCCXNXPHWFPBMPBBUQEEUFMUHHHAZRAVHEBNRFZTOWFZXVFJYCVDDPLMIVJZITFMGVHRJYXMOATJQZSIOCGIQOBDHOPTMFGAYCWLKZHAKBBXSESQSQGYQ");

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
    msg.setTimeStamp(0.7604131437084855);
    msg.setSource(41300U);
    msg.setSourceEntity(63U);
    msg.setDestination(20478U);
    msg.setDestinationEntity(89U);
    msg.restriction = 6U;
    msg.reason.assign("SUJVLPOWRXZTOWABZGNSSQIYKWTJUBDKUQNBFCCZMMRFNCXZADIZPSBQHSOKKLMVDRFGVVACQZUINAPNEWAKMLRWJZZGJIFLRXEQYBMSFLUXPBCESH");

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
    msg.setTimeStamp(0.5031763583220865);
    msg.setSource(45974U);
    msg.setSourceEntity(89U);
    msg.setDestination(23610U);
    msg.setDestinationEntity(112U);
    msg.restriction = 19U;
    msg.reason.assign("SSAOVTFYXQOKDCGZQLVABEIPACSZDIGEXRKIIPAMWYRGBDWZWHMVWZJLQO");

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
