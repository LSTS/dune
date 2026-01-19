//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 23a262146c5f6e7c1f5cb7c7d0d41d98                            *
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
    msg.setTimeStamp(0.6774806636279419);
    msg.setSource(18306U);
    msg.setSourceEntity(53U);
    msg.setDestination(60859U);
    msg.setDestinationEntity(156U);
    msg.state = 190U;
    msg.flags = 23U;
    msg.description.assign("FZIVRLANITWDUFCDTEWJUEXYFGNNCIGAOSBQYVYPUPHZPQSMHPSOKHQOAXTPKCYBXHZUGHNJUPXZQVPKMVJADWTLRUMRLMLAFLRIVKIHBTLSGJRZCNSNWFRQZGWNGXKVUFBJMRJMOENEKJWSFQGKMQXNOKWXY");

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
    msg.setTimeStamp(0.3538275367346172);
    msg.setSource(59791U);
    msg.setSourceEntity(36U);
    msg.setDestination(21993U);
    msg.setDestinationEntity(80U);
    msg.state = 237U;
    msg.flags = 240U;
    msg.description.assign("IAOICKWNMWSQDUOEPGDDEUCBIWLKAYKHQCYHHTWZNBBAQHRSJDBUBYURXQTSTYZWAOUMMELFFEFJBDXQRDXIDDRZSAXQRVEP");

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
    msg.setTimeStamp(0.3598273039008435);
    msg.setSource(51601U);
    msg.setSourceEntity(105U);
    msg.setDestination(32780U);
    msg.setDestinationEntity(230U);
    msg.state = 201U;
    msg.flags = 74U;
    msg.description.assign("KYFPPWOASZGYTLTSJWCOMLOFPWYNUQSZWFXWC");

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
    msg.setTimeStamp(0.7909652983058535);
    msg.setSource(55237U);
    msg.setSourceEntity(185U);
    msg.setDestination(27063U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.7696031075993093);
    msg.setSource(14542U);
    msg.setSourceEntity(150U);
    msg.setDestination(58449U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.28507488440712625);
    msg.setSource(46575U);
    msg.setSourceEntity(206U);
    msg.setDestination(11774U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.8008982409277058);
    msg.setSource(32353U);
    msg.setSourceEntity(175U);
    msg.setDestination(55958U);
    msg.setDestinationEntity(240U);
    msg.id = 215U;
    msg.label.assign("LSSWFHKQUPSWNHGJWLRYGCEVSKQGJYPBUGBYLUCQKMMMXXQOVDOEJBKJYKHDGSDCVEBJTLUWLIDOABDAVNNZMUWTEOTTYSLNVWOIFUOIDXZTYJRICIDHOWNXNSMCXMECBBAJXSYRPRIANUOYUKLCXLZVMZHGUPLNQIEKYPFRIRVWJQHMPPRWSTQMWOHTZ");
    msg.component.assign("JTYRGVOMMFFYVHCMKYURPSHZUXOINOLTMMSAUGCNBFCKJEQRPBPLSRCCQFDFQBSDTEVNUNELUMVEVIPJKCFWLSYSOJXJRJEXMDTGJGHWRKNNTBAWAVHTXBVHESLCADXKPLNHGOXYZILFDPDXMAIWBJPMLBAZWJWRKBOEYFQRZKZVBPKVEBJT");
    msg.act_time = 65353U;
    msg.deact_time = 51003U;

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
    msg.setTimeStamp(0.734141919290844);
    msg.setSource(55499U);
    msg.setSourceEntity(52U);
    msg.setDestination(54982U);
    msg.setDestinationEntity(243U);
    msg.id = 244U;
    msg.label.assign("SKTHMMIOYNZATUCDWUHBWRXZTXSYMITIZGLXCYBUFQTSXKBRXMEXOEOHVRBPAGQAPHEZKYVLYIETTPKHMWBWDFBPJWTODMGECLAOOVZGISHCEJPSRINAGDSBEERVBDQFVQJWYJFDOWURVPGSAFJPZHKFGSLAKHVIOPCZMNKEYKDDHXNIBRNQNYDOLUAZWVUPQQJLRNABXXIWJCLXZCNTVASRLQMJCVFKRDFTC");
    msg.component.assign("YBHAJCVOBEJPVJMRLSPNFBCZVXOELIWAIHQZIIXFDAPRNZZKGFTCURIPLTTWZYTQKLMLENKXXOVIULKCOZLNKAKIUPGHIDWLWHSMNXXPKANGDOOUSTNYHQDJQUEDEDVVSDKPVNUKMNTB");
    msg.act_time = 31202U;
    msg.deact_time = 11766U;

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
    msg.setTimeStamp(0.2150691884348147);
    msg.setSource(28505U);
    msg.setSourceEntity(30U);
    msg.setDestination(6361U);
    msg.setDestinationEntity(113U);
    msg.id = 216U;
    msg.label.assign("BXTULLWEBRRKPGKBMGFYUDDOUNWPNSHGICFEIAIHMAKXZFBQOCSSPKGONMWYRNUNLBPTNVAKNKAMPLLOODPZAOAPBUMHACQVUJUXLPZXEKFTBGAOYQCGVYMSRRVCDBTVYCJEBDLZQQEGUDYFVEXXUXIGQDEAZRDRMQZZMUXDHKSWTWZKYWWVPHWVTCTIXJFNEGITCFKIHTQBCLNCXEOSVWNMLRVDPYJZ");
    msg.component.assign("XERUAJRRFDZLNSEWMUOCWDVENNPMYFYAMEZOGLXIXTPDUKUTVLBJVVRBHSUIQAMLHKDQJKBFZIDJXQQSHFTANLDDQRK");
    msg.act_time = 43796U;
    msg.deact_time = 61347U;

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
    msg.setTimeStamp(0.3017117687660935);
    msg.setSource(25243U);
    msg.setSourceEntity(210U);
    msg.setDestination(38396U);
    msg.setDestinationEntity(192U);
    msg.id = 180U;

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
    msg.setTimeStamp(0.8068141556431173);
    msg.setSource(62306U);
    msg.setSourceEntity(42U);
    msg.setDestination(62888U);
    msg.setDestinationEntity(126U);
    msg.id = 186U;

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
    msg.setTimeStamp(0.4753926939286808);
    msg.setSource(23210U);
    msg.setSourceEntity(134U);
    msg.setDestination(18726U);
    msg.setDestinationEntity(48U);
    msg.id = 150U;

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
    msg.setTimeStamp(0.4962020302366261);
    msg.setSource(18015U);
    msg.setSourceEntity(242U);
    msg.setDestination(7615U);
    msg.setDestinationEntity(103U);
    msg.op = 135U;
    msg.list.assign("ANXRCPQQTZSGMQQIGFEECBHDBECNJTGYZVGNEEVVYNQCMXZHSOSYPWCZGOOBQXMOBGXPJTLPOMVFTMSPJVWLFFBVKWREEUBJKMAKAYQMFQRUOJEIURJIDVXJPTMIRSHTDLGSLVBAP");

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
    msg.setTimeStamp(0.08828436337859102);
    msg.setSource(6099U);
    msg.setSourceEntity(205U);
    msg.setDestination(37705U);
    msg.setDestinationEntity(147U);
    msg.op = 90U;
    msg.list.assign("VLECINLFQOCEXMJBMKUNDUFHYVSFDYZYZRILSZUPSYMMHPSEVIVQHXCPSJKKKBEXJQOGPGRHZTHUKBAHRPWJXKTTXMTYEQEQFWUPOBARQUHGAOIJUINGXKMAVDU");

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
    msg.setTimeStamp(0.20223559822671988);
    msg.setSource(56359U);
    msg.setSourceEntity(62U);
    msg.setDestination(19227U);
    msg.setDestinationEntity(54U);
    msg.op = 170U;
    msg.list.assign("KVMCCXDAHVQOBWDHGJZKLJVUEQKOPQOCEMTEHTKPKPPYRUZIBHNSYUWLGYWLTKRYXPKEBLDCTASAOZTCXRUYICXWRFGWYRRIZBXEENMHSBHOSGEZSIEXBNZRRDXNJSFFYHHDECFSCFJVDZQNTMYQFUAATPMLBIGMANKFBTFWFVFOPLTYJLWGZUWQPMUBEXASVNIKUGNGIRGPUDWROGCQYQIJXDWAUCOALAMISJMTLNXJBOMQPDZHNOVJQ");

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
    msg.setTimeStamp(0.35542229462253583);
    msg.setSource(1947U);
    msg.setSourceEntity(200U);
    msg.setDestination(17219U);
    msg.setDestinationEntity(251U);
    msg.value = 180U;

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
    msg.setTimeStamp(0.4160869378176899);
    msg.setSource(32499U);
    msg.setSourceEntity(217U);
    msg.setDestination(50796U);
    msg.setDestinationEntity(27U);
    msg.value = 248U;

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
    msg.setTimeStamp(0.5596723453521203);
    msg.setSource(32418U);
    msg.setSourceEntity(192U);
    msg.setDestination(62595U);
    msg.setDestinationEntity(194U);
    msg.value = 175U;

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
    msg.setTimeStamp(0.08037892667588342);
    msg.setSource(41570U);
    msg.setSourceEntity(121U);
    msg.setDestination(19756U);
    msg.setDestinationEntity(230U);
    msg.consumer.assign("RNAZAOFTWOBYYDBSGVDNGHJZXMB");
    msg.message_id = 21934U;

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
    msg.setTimeStamp(0.06704859778402272);
    msg.setSource(41899U);
    msg.setSourceEntity(182U);
    msg.setDestination(64947U);
    msg.setDestinationEntity(146U);
    msg.consumer.assign("AEKLBABBYUSTXREWFWAEKBZXBEVKPCZSJSUCRVHZXNFGHTBIYQMJXXXZLOZVNEDSTAPBICFODQTOGIYD");
    msg.message_id = 48086U;

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
    msg.setTimeStamp(0.1541692560690051);
    msg.setSource(5221U);
    msg.setSourceEntity(72U);
    msg.setDestination(45181U);
    msg.setDestinationEntity(19U);
    msg.consumer.assign("FXTGTIZABVRVWUOWTLZMOBYAERCDYTUZMQPIYIUSCYSMHYZSBVEPQXGCJAUHRDNQPPMMQHSZWBFCEXMGSQFZJQEFXJUDXYSBLOOOPHJB");
    msg.message_id = 43084U;

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
    msg.setTimeStamp(0.5522547089647553);
    msg.setSource(20342U);
    msg.setSourceEntity(169U);
    msg.setDestination(64011U);
    msg.setDestinationEntity(181U);
    msg.type = 128U;

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
    msg.setTimeStamp(0.5110972149306829);
    msg.setSource(5133U);
    msg.setSourceEntity(86U);
    msg.setDestination(52513U);
    msg.setDestinationEntity(101U);
    msg.type = 222U;

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
    msg.setTimeStamp(0.19848793335866666);
    msg.setSource(62066U);
    msg.setSourceEntity(87U);
    msg.setDestination(2326U);
    msg.setDestinationEntity(52U);
    msg.type = 32U;

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
    msg.setTimeStamp(0.3159204437615424);
    msg.setSource(65459U);
    msg.setSourceEntity(184U);
    msg.setDestination(50981U);
    msg.setDestinationEntity(168U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.17336351793914195);
    msg.setSource(31892U);
    msg.setSourceEntity(239U);
    msg.setDestination(19135U);
    msg.setDestinationEntity(85U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.4120937339258238);
    msg.setSource(2531U);
    msg.setSourceEntity(39U);
    msg.setDestination(3968U);
    msg.setDestinationEntity(172U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.057698900819789345);
    msg.setSource(14882U);
    msg.setSourceEntity(75U);
    msg.setDestination(33255U);
    msg.setDestinationEntity(67U);
    msg.total_steps = 36U;
    msg.step_number = 192U;
    msg.step.assign("PMARRUIRDYLZWDAJJMMABHDIEMKVPCHSWFWARHYQLEPSBLZZYJZJBGLFDHZCBRWUBGZXTUJUTXSZTNIKTDDOZHTXFXYOOAUMXIVEAJEMWOLDNKGRPMYGQPKVDYAYGCWOFQVNSPFQQCQLCNRQ");
    msg.flags = 115U;

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
    msg.setTimeStamp(0.9256499776452957);
    msg.setSource(25728U);
    msg.setSourceEntity(185U);
    msg.setDestination(54903U);
    msg.setDestinationEntity(106U);
    msg.total_steps = 125U;
    msg.step_number = 39U;
    msg.step.assign("KHIAAUVIMYVSTJROPUCAKPFWTJNTPEURREBFAQSYEOKGDSQHAOIBWHFUVMSIWTLYAQFIYMBJAGRXBWMLHIDTZNOLCRRRMPOYOFBEDVLPIUYDJPBGVEFXBLRLTQJEHWGDYNCXQZZUGBKZYEZQZRGSWQFKZOMMPFFSOINHXHFNASXATOQEHVJ");
    msg.flags = 212U;

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
    msg.setTimeStamp(0.9213871254910336);
    msg.setSource(60887U);
    msg.setSourceEntity(121U);
    msg.setDestination(13337U);
    msg.setDestinationEntity(195U);
    msg.total_steps = 213U;
    msg.step_number = 77U;
    msg.step.assign("PUHNVMPGTZWAHSSCMODYLAXLMCWCBQDIEUBJEMVHSCVFKZGTXKNAFIPRZLQTQMYZBCMFNNIDDXGGVSBRJIZURBDAEVBAGOZLHQJFGPHWLWPQJSWKEYKCQPYTMQHZNORMDJORUPYGFQOVJTTQMN");
    msg.flags = 49U;

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
    msg.setTimeStamp(0.15242324294590348);
    msg.setSource(54611U);
    msg.setSourceEntity(52U);
    msg.setDestination(17306U);
    msg.setDestinationEntity(149U);
    msg.state = 214U;
    msg.error.assign("TQMWNRYKNCKVMWIBSEVYUSVTIPJZRXEZVAUSEDMQOEJWIBWPSKVRNFOOCKAXFXTAALADDXUJW");

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
    msg.setTimeStamp(0.5820239125077691);
    msg.setSource(51334U);
    msg.setSourceEntity(67U);
    msg.setDestination(65263U);
    msg.setDestinationEntity(103U);
    msg.state = 186U;
    msg.error.assign("CBYYKRYVGXTRZRMHBAVLNALGLCMGHCXCGPZPIRTTWQHBCCEHVAMCQJGMKKIROABHZSQYZMJUFSARPTUVWSOXEBPNAEIQLKENZYVQULFSIOZJJLHGINDTCQIFPSYVPBEEUFVFAPXIQRUSIJVEWTIBRJGAKLDSDPOWFNCLLIOKSCSMKRJ");

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
    msg.setTimeStamp(0.5703106921449811);
    msg.setSource(59240U);
    msg.setSourceEntity(240U);
    msg.setDestination(6546U);
    msg.setDestinationEntity(44U);
    msg.state = 152U;
    msg.error.assign("OZAUKDKXOJLYUQBMQVWSGDPZBNBCZLNMGWHEMDPRSHCXELYSKDWEVFFVTHLJGAJRDDXMIPNDNQVYTPHACIAFXWWBNTVJVULBGTQFJRXTTOGPBHQQZSYVKFRWBLLEGRBNQHIDYXIQXUORTETQSCKFZZUMCDISUMNFJPPMLSXKYVXWARMCCWPFAGHJUMQN");

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
    msg.setTimeStamp(0.2769782513030721);
    msg.setSource(52310U);
    msg.setSourceEntity(166U);
    msg.setDestination(58158U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.2824868068108052);
    msg.setSource(29044U);
    msg.setSourceEntity(235U);
    msg.setDestination(32595U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.43394236627030136);
    msg.setSource(62700U);
    msg.setSourceEntity(6U);
    msg.setDestination(55906U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.9818808314789851);
    msg.setSource(44635U);
    msg.setSourceEntity(234U);
    msg.setDestination(58373U);
    msg.setDestinationEntity(90U);
    msg.op = 144U;
    msg.speed_min = 0.5919806965612011;
    msg.speed_max = 0.3612163987657184;
    msg.long_accel = 0.6555899304212981;
    msg.alt_max_msl = 0.9850624848862015;
    msg.dive_fraction_max = 0.1895239162265614;
    msg.climb_fraction_max = 0.2198532066966291;
    msg.bank_max = 0.4232772640607998;
    msg.p_max = 0.45655230150283155;
    msg.pitch_min = 0.8309432201504389;
    msg.pitch_max = 0.060136339606528644;
    msg.q_max = 0.5146917528255773;
    msg.g_min = 0.040452516549560835;
    msg.g_max = 0.17183189467540116;
    msg.g_lat_max = 0.9856317028219231;
    msg.rpm_min = 0.4099492491891361;
    msg.rpm_max = 0.03201793629849192;
    msg.rpm_rate_max = 0.6942490703097794;

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
    msg.setTimeStamp(0.4691884135882569);
    msg.setSource(39452U);
    msg.setSourceEntity(93U);
    msg.setDestination(42707U);
    msg.setDestinationEntity(85U);
    msg.op = 42U;
    msg.speed_min = 0.4345588203793873;
    msg.speed_max = 0.12902720984428195;
    msg.long_accel = 0.5564090654210904;
    msg.alt_max_msl = 0.18020714975722696;
    msg.dive_fraction_max = 0.8877373944191358;
    msg.climb_fraction_max = 0.3064391689564958;
    msg.bank_max = 0.650339188069709;
    msg.p_max = 0.6576763271877782;
    msg.pitch_min = 0.3380738853947124;
    msg.pitch_max = 0.2540365520420611;
    msg.q_max = 0.9740074411421594;
    msg.g_min = 0.3164076002642413;
    msg.g_max = 0.6515321517469983;
    msg.g_lat_max = 0.1575241098134138;
    msg.rpm_min = 0.6112988168088173;
    msg.rpm_max = 0.8426821811072972;
    msg.rpm_rate_max = 0.8504232841525248;

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
    msg.setTimeStamp(0.22005617993869409);
    msg.setSource(12847U);
    msg.setSourceEntity(171U);
    msg.setDestination(10419U);
    msg.setDestinationEntity(207U);
    msg.op = 235U;
    msg.speed_min = 0.022359633070608953;
    msg.speed_max = 0.625394225959433;
    msg.long_accel = 0.8011002224997401;
    msg.alt_max_msl = 0.8059197401455411;
    msg.dive_fraction_max = 0.23673015822515797;
    msg.climb_fraction_max = 0.85365575403374;
    msg.bank_max = 0.10389674812092464;
    msg.p_max = 0.993169075709882;
    msg.pitch_min = 0.9013565641995599;
    msg.pitch_max = 0.032573797839131724;
    msg.q_max = 0.1972527116248275;
    msg.g_min = 0.0338352888436918;
    msg.g_max = 0.9628493411644972;
    msg.g_lat_max = 0.663330315543614;
    msg.rpm_min = 0.279047533426923;
    msg.rpm_max = 0.7929489905673004;
    msg.rpm_rate_max = 0.5397752523946748;

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
    msg.setTimeStamp(0.0575559960443669);
    msg.setSource(60363U);
    msg.setSourceEntity(32U);
    msg.setDestination(63001U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.9433044305075916);
    msg.setSource(40546U);
    msg.setSourceEntity(21U);
    msg.setDestination(41779U);
    msg.setDestinationEntity(225U);
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.1872508138409541;
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
    msg.setTimeStamp(0.4515815980837772);
    msg.setSource(4052U);
    msg.setSourceEntity(232U);
    msg.setDestination(1941U);
    msg.setDestinationEntity(115U);

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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.9035618508064316);
    msg.setSource(51521U);
    msg.setSourceEntity(23U);
    msg.setDestination(7628U);
    msg.setDestinationEntity(126U);
    msg.value = 0.1627305262338402;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.9254813475620852);
    msg.setSource(55480U);
    msg.setSourceEntity(84U);
    msg.setDestination(60055U);
    msg.setDestinationEntity(140U);
    msg.value = 0.5972746603076385;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.13902598654465226);
    msg.setSource(60324U);
    msg.setSourceEntity(85U);
    msg.setDestination(10166U);
    msg.setDestinationEntity(87U);
    msg.value = 0.6692699569987092;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6414207109077219);
    msg.setSource(28231U);
    msg.setSourceEntity(108U);
    msg.setDestination(36489U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.9895558226155152;
    msg.lon = 0.3209476170455513;
    msg.height = 0.1142641228922967;
    msg.x = 0.1739005911744017;
    msg.y = 0.48526606109360737;
    msg.z = 0.24277175372938942;
    msg.phi = 0.6844324864479987;
    msg.theta = 0.37150095364883085;
    msg.psi = 0.772693940824855;
    msg.u = 0.8458329208644684;
    msg.v = 0.7149903586598538;
    msg.w = 0.6610669269422231;
    msg.p = 0.8483875605833654;
    msg.q = 0.6119974509612448;
    msg.r = 0.26946408963322466;
    msg.svx = 0.011977451300898334;
    msg.svy = 0.4588738069655851;
    msg.svz = 0.9670487475243403;

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
    msg.setTimeStamp(0.9990711666281136);
    msg.setSource(27662U);
    msg.setSourceEntity(226U);
    msg.setDestination(32378U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.806378845403287;
    msg.lon = 0.9617949889911801;
    msg.height = 0.1341709314210615;
    msg.x = 0.8223039941243481;
    msg.y = 0.49728516624122887;
    msg.z = 0.3533143020684286;
    msg.phi = 0.42363235490680007;
    msg.theta = 0.5962886036516305;
    msg.psi = 0.7352213066739225;
    msg.u = 0.9443875813584103;
    msg.v = 0.6155375009660611;
    msg.w = 0.5012688545941684;
    msg.p = 0.9018464921893804;
    msg.q = 0.07376651724722805;
    msg.r = 0.7587898672762093;
    msg.svx = 0.34613775891361354;
    msg.svy = 0.5402466590003758;
    msg.svz = 0.5851487800439705;

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
    msg.setTimeStamp(0.10823088737641828);
    msg.setSource(43825U);
    msg.setSourceEntity(107U);
    msg.setDestination(45371U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.5563186875095526;
    msg.lon = 0.8813766349462401;
    msg.height = 0.42995862079000546;
    msg.x = 0.9300803409383687;
    msg.y = 0.32201372441536324;
    msg.z = 0.5321501851045043;
    msg.phi = 0.8813807667789813;
    msg.theta = 0.6405690664358532;
    msg.psi = 0.7716521378500901;
    msg.u = 0.023370688943798568;
    msg.v = 0.5197393762955373;
    msg.w = 0.5690943938958887;
    msg.p = 0.018352166710665863;
    msg.q = 0.8953389526743176;
    msg.r = 0.3698881525250409;
    msg.svx = 0.596655477446842;
    msg.svy = 0.9771683271390291;
    msg.svz = 0.8930583251411471;

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
    msg.setTimeStamp(0.45855023394138583);
    msg.setSource(58975U);
    msg.setSourceEntity(72U);
    msg.setDestination(17825U);
    msg.setDestinationEntity(93U);
    msg.op = 45U;
    msg.entities.assign("JFXFPKPJEXMNDMXCSCQAYLGXWOYLMXBZIYZOUKKIEHWWJAHHXWECZATZQHQPYRQVLVGSPXJGJIKRVFMKSNPDLOOTJYRCHURQSIYOQXNMQUCDVGFVHVNLJKGHKRRTLWSIOSWEERUTMTJIZURPETHMVIFKCZFJGNBYWPWDTMYFDFSDKBUVLNBIHYABADUPEVNLDKNRZALSLEMSDGYBXAQUBHOXTUAOSWMECCD");

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
    msg.setTimeStamp(0.4517905944205848);
    msg.setSource(43977U);
    msg.setSourceEntity(59U);
    msg.setDestination(6274U);
    msg.setDestinationEntity(150U);
    msg.op = 62U;
    msg.entities.assign("IDYNJPENWQMPFTGLQPWCKOQWARDLZFSAYXHTGTNIPBQGMBZ");

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
    msg.setTimeStamp(0.7971732816483047);
    msg.setSource(53042U);
    msg.setSourceEntity(181U);
    msg.setDestination(47760U);
    msg.setDestinationEntity(35U);
    msg.op = 34U;
    msg.entities.assign("PKBQCFSHAVNGZBHFAXWQZLUMRYOJMVDALMTQHFPINVILBMWJ");

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
    msg.setTimeStamp(0.1630388528428629);
    msg.setSource(25406U);
    msg.setSourceEntity(241U);
    msg.setDestination(29109U);
    msg.setDestinationEntity(223U);
    msg.type = 101U;
    msg.speed = 41873U;
    const signed char tmp_msg_0[] = {17, 82, -19, -66, -22, 103, 110, 89, -11, 10, 51, 121, 71, 55, 10, 16, -25, -88, 102, 79, -8, -62, -59, -15, 11, 3, 22, 28, 122, -64, -50, -50, -59, 73, -81, 9, 80, 31, 4, -115, -44, -79, 30, -117, -53, 102, 77, -21, 100, -28, -122, -102, -5, 118, 107, -83, -82, 74, -23, -1, -25, 34, 37, -121, 94, -127, -124, 52, 35, 106, -77, -93, -2, 80, 31, -84, -92, -4, -75, -64, -110, 100, 96, 18, -41, 100, 113, 49, 106, -109, -69, -13, 9, -61, 97, 67, 69, 90, 18, 85, -19, 0, 105, 122, -60, -72, 115, 96, 29, -88, -42, 41, 44, -51, -22, 48, 21, -56, 52, -78, -3, -52, -16, 119, -63, 10, -3, -52, 115, -40, 66, 105, 111, -95, -110, 71, 0, -27, 73, -89, 61, -87, -19, 76, -124, 122, -66, 125, -59, -101, 30, 63, -123, 57, 27, 14, -79, 30, -109, 115, -87, -59, 28, -1, 66, -80, 50, -92, 36, -40, -40, -99, 96, -79, -124, 113, -96, 35, -106, 46, -97, 87, 106, -11, 112, -3, 46, 102, 61, -88, 18, 101, -55, -38, -126, 112, -90, 79, 72, 15, -44, 74, -8, -118, 2, 61, -33, -63, 56, 6, 9, -18, 5, 113, -2, 56};
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
    msg.setTimeStamp(0.48366796592731176);
    msg.setSource(34874U);
    msg.setSourceEntity(155U);
    msg.setDestination(60768U);
    msg.setDestinationEntity(199U);
    msg.type = 56U;
    msg.speed = 56253U;
    const signed char tmp_msg_0[] = {-115, 9, -114, 73, 27, -85, -86, 93, -64, -65, 83, 124, 83, -63, -9, 110, -68, -98, 63, 118, 5, -6, -18, -41, -67, 28, -26, 21, 108, 110, -86, 29, -58, 2, 124, -128, 100, 7, 78, -41, -4, 24, 41, -57, 120, -7, -112, -119, -128, 67, 21, 7, -62, 44, 24, 114, 53, -88, -64, 95, 1, -25, -126, 45, 63, 3, 33, 101, 88, -111, -17, -67, -67, -39, -108, 73, 99, 121, -108, 24, -76, 103, -53, -73, -66, -34, -74, 72, 63, 52, -35, 63, -106, -81, -81, 124, -94, -60};
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
    msg.setTimeStamp(0.8815398786080074);
    msg.setSource(42883U);
    msg.setSourceEntity(197U);
    msg.setDestination(12647U);
    msg.setDestinationEntity(3U);
    msg.type = 245U;
    msg.speed = 17631U;
    const signed char tmp_msg_0[] = {125, 69, -14, -92, 26, -64, 49, -71, -60, 27, 46, -40, 88, 62, -77, -6, 118, 99, -57, 99, 11, -19, -125, 110, 19, 96, 111, 14, 34, -82, 99, 9, 11, 5, -2, -115, -50, 2, 25, -35, -93, -121, 46, 10, -100, 100, -69, -121, 126, 0, -99, -58, 15, 108, -60, -117, -107, -107, -25, 94, -127};
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
    msg.setTimeStamp(0.8630034646543796);
    msg.setSource(10888U);
    msg.setSourceEntity(37U);
    msg.setDestination(41253U);
    msg.setDestinationEntity(35U);
    msg.op = 177U;
    msg.tas2acc_pgain = 0.5272775422856587;
    msg.bank2p_pgain = 0.4497161127109568;

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
    msg.setTimeStamp(0.18049064657433456);
    msg.setSource(15759U);
    msg.setSourceEntity(227U);
    msg.setDestination(54078U);
    msg.setDestinationEntity(176U);
    msg.op = 56U;
    msg.tas2acc_pgain = 0.13559759284564243;
    msg.bank2p_pgain = 0.8623087683779704;

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
    msg.setTimeStamp(0.5470882107807513);
    msg.setSource(32684U);
    msg.setSourceEntity(234U);
    msg.setDestination(61556U);
    msg.setDestinationEntity(145U);
    msg.op = 138U;
    msg.tas2acc_pgain = 0.20397440638609587;
    msg.bank2p_pgain = 0.7170423743958501;

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
    msg.setTimeStamp(0.09350274029468197);
    msg.setSource(8986U);
    msg.setSourceEntity(184U);
    msg.setDestination(53511U);
    msg.setDestinationEntity(182U);
    msg.available = 404843339U;
    msg.value = 126U;

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
    msg.setTimeStamp(0.638486370697261);
    msg.setSource(39512U);
    msg.setSourceEntity(243U);
    msg.setDestination(16964U);
    msg.setDestinationEntity(148U);
    msg.available = 4209603585U;
    msg.value = 82U;

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
    msg.setTimeStamp(0.2511776331511506);
    msg.setSource(7223U);
    msg.setSourceEntity(22U);
    msg.setDestination(22728U);
    msg.setDestinationEntity(184U);
    msg.available = 2569406681U;
    msg.value = 190U;

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
    msg.setTimeStamp(0.24789293811389657);
    msg.setSource(742U);
    msg.setSourceEntity(68U);
    msg.setDestination(47031U);
    msg.setDestinationEntity(157U);
    msg.op = 94U;
    msg.snapshot.assign("YVQZJZNATKZMFOSEKASSFTDPVXSPLHZRKOVLXQREOILTCBQZIFXHHXIJWFPTKHUTRJRKEEHALXIWLGMFYLQPRGWYOOZXV");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.19318005520965853;
    tmp_msg_0.y = 0.10531383090915936;
    tmp_msg_0.z = 0.28505671299229907;
    tmp_msg_0.phi = 0.11150938030632596;
    tmp_msg_0.theta = 0.4446689814625012;
    tmp_msg_0.psi = 0.5281426978817928;
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
    msg.setTimeStamp(0.14750606165912272);
    msg.setSource(54602U);
    msg.setSourceEntity(189U);
    msg.setDestination(3473U);
    msg.setDestinationEntity(94U);
    msg.op = 249U;
    msg.snapshot.assign("JQOSILSWHNSZBAJOVKVZNTUTGQCIIDTUEDGPOXILUEEXCHJHZTDYKSMLVIPRUYFAFAPSYYVIQNEZVCLDDXGYSDXWWVOSBUGFVXCAKOBLFBRDKKCJFQNPTDISOSLBW");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 31507U;
    tmp_msg_0.name.assign("RUQKMPNESXOHHPFFNJUDVLATYCIRBIECOAFYRCNBGKMCFIFQTSAJRIZUJHNHPAWDAWVUUAZEPKZROYSFZKVMDKRQZRACLMZJWPOXELZOUPVZSLWHTJATBWUFYOBQDGQTENJIAJSXUPWBXXZGLHEVLPQBBBKOLCCNCVGBSMLEAYFQMDITFNLYLMVPIXQYKWCOXKVHGQJWPRGHGH");
    tmp_msg_0.custom.assign("OUDNOBNPJJPDRNZFLUYVEDDXTCCKTRNVBMMQSOJNGKDKJAHVYSOGKFMZBBPUNTVZTDISDTBKOMGSJIGBHCZGJYHQWEBOSNNZEACVUEOMWHAZLRRISTXHLPEI");
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
    msg.setTimeStamp(0.988511046450229);
    msg.setSource(52692U);
    msg.setSourceEntity(189U);
    msg.setDestination(44084U);
    msg.setDestinationEntity(180U);
    msg.op = 5U;
    msg.snapshot.assign("WUUXVAZNWSECFSOMDCVZATIGEQWTIBHXXBKRLWGLWQGYHCFPNJYJQEMMOIEUHRFPLJBWKYGGTIDTDISZNRSFLVUDSRGICEGNIGFOAZFLEXAZTWFJMQNRBQOQPSHCKXYKJLPBNJQQPFYVDXKUSJXLOEPSFKYNMUKVAVXAMTHIOETKWMYDDIHCYUZAXUPJMVMKBKYCIDPNDLDBAHZROSZOFTVOQRWBNGGNEURVTMLYBSLA");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.869184536340574;
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
    msg.setTimeStamp(0.8631044016641309);
    msg.setSource(38255U);
    msg.setSourceEntity(20U);
    msg.setDestination(45104U);
    msg.setDestinationEntity(231U);
    msg.op = 20U;
    msg.name.assign("RQWLMPYJNFMHAUDQTJFVPLGCCPKZWBVOGWNVSNOJUZKQGUPCTNWZSQCHJTRYEGUMEKLEJNPANZDWDTOBPQWAJAWTFXRDVZTQSYVXDCGTISEFAHDUMVSECBYXWUGOYOHNHIMXUIEVTXBIKL");

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
    msg.setTimeStamp(0.298809097718597);
    msg.setSource(55239U);
    msg.setSourceEntity(66U);
    msg.setDestination(54097U);
    msg.setDestinationEntity(60U);
    msg.op = 116U;
    msg.name.assign("ZMCEUTYTJHOYVWUAGRGSRHPRIQDAAZAOQVQGXBWCVUPXUSDDVKKYULPWFSEESKBFGZEFYJPBWINHKREPNCGITMEVMNHQPQPFJLD");

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
    msg.setTimeStamp(0.2655380988615119);
    msg.setSource(57521U);
    msg.setSourceEntity(167U);
    msg.setDestination(290U);
    msg.setDestinationEntity(123U);
    msg.op = 203U;
    msg.name.assign("IWVANFOQWIPXKRUXBXQZYLUUGEWMOZAZKAIEXGPQQBMOLGAXIFPESTMNTPXPUZXDEMZSADNJKYDVUDCYHRFUZZWLVFUDBLMVYOKVBGTAKSMCBCVZNBSUPCFECFHZWSIBOPLHRVDOCHHVRQYQGTPWIHIQLTJCSEAFMNNUYYGRJHTOAYJORW");

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
    msg.setTimeStamp(0.582422733598313);
    msg.setSource(21443U);
    msg.setSourceEntity(36U);
    msg.setDestination(14046U);
    msg.setDestinationEntity(219U);
    msg.type = 195U;
    msg.htime = 0.9231996163623125;
    msg.context.assign("AFZKPKCAOCMQIHZQBVPOIRGLSN");
    msg.text.assign("STRYBJIZIKVZPZQVMACCFOQUXPKZKDIJJHCVQNUNSFWPQAXWMVRYHYQUDXNBYJVFAYBFRUTNZRIITC");

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
    msg.setTimeStamp(0.7052137432464005);
    msg.setSource(33095U);
    msg.setSourceEntity(119U);
    msg.setDestination(28276U);
    msg.setDestinationEntity(108U);
    msg.type = 135U;
    msg.htime = 0.9524674736045872;
    msg.context.assign("ZZBUIEXYPXTSHFGBWOMAGFWHQKPPLOPAORSIJDKUFTKWVRZTMAXHXCVFNZLRDNXDSVOZAKPURLGQIVTRBFXJTHMDKSSTXNFQJVMIIHAWZCELFYENMGCDSVRETNOPQHKIKFGLEQBJLPNMDYXPJUYBGJCWMVXLFOREYWJSPIJQHDXJNJLAGQPSSTDHWG");
    msg.text.assign("EEVJWBIFSOXBJXWKHPSGWAXQHWUYTYRLEVUNRBRLJTNHGRLNLZHEHDTHKNXWAXKAPDIUCXDDSUMWSHKHUCTYZOZTMXSNOIYPNCGAOWZMACFMZEOORPQBMWGJKQBF");

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
    msg.setTimeStamp(0.1599067771410837);
    msg.setSource(59069U);
    msg.setSourceEntity(45U);
    msg.setDestination(34996U);
    msg.setDestinationEntity(178U);
    msg.type = 243U;
    msg.htime = 0.8856433020899711;
    msg.context.assign("HOKQPLWNOMPYJBBXPAWQNCYDCKMJPFQMIMSVZPLRJODAAYSLVPYOWZCHWSPXAHNYCVCBDAOLRCDFCEGRGIJIUIPEITURTDQTWPKVGDLSIYUWXZJZRAJECBZNVXKTKNKMSJKUWHWJUDFZRVLSUANZAHUFONMEECHWHBXFTQEQZKQNONOV");
    msg.text.assign("YQKOHHSBACQIKLKVCPSXLHNFXCOVZBMLJBGNNPJGIATKRTOLFDFFEXNIJYTSYNVGFAZBXCYJNCEDEXCFMGTKBDSXCWDWHWJIZMKUMRKPQHJOQADUBMAGTHFIWPKANHGMWQODSOCTUMTQAWRWHJBQXEMZNTAESGUYKAJOPEBUWSQSZMLPURLECGWGVRIEUJXILJPODOPZXRGRWXRRVNHPZC");

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
    msg.setTimeStamp(0.6961742999312127);
    msg.setSource(7487U);
    msg.setSourceEntity(46U);
    msg.setDestination(5566U);
    msg.setDestinationEntity(202U);
    msg.command = 137U;
    msg.htime = 0.21764254428632646;

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
    msg.setTimeStamp(0.9556187362639026);
    msg.setSource(52287U);
    msg.setSourceEntity(58U);
    msg.setDestination(50728U);
    msg.setDestinationEntity(102U);
    msg.command = 139U;
    msg.htime = 0.3384914458908709;

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
    msg.setTimeStamp(0.8625303691941612);
    msg.setSource(52004U);
    msg.setSourceEntity(245U);
    msg.setDestination(62229U);
    msg.setDestinationEntity(134U);
    msg.command = 152U;
    msg.htime = 0.9688871598905445;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 113U;
    tmp_msg_0.htime = 0.16059945007419185;
    tmp_msg_0.context.assign("TFGEOPUAPWNZQFDJCTYKBXPWVRJEEPKVQMVTOJSLGWZHIQH");
    tmp_msg_0.text.assign("SOTKDVUBSRQZIRQCRKABZUURZFOCLXVPWLAWFDIYXMABPCTIGMBNHVPCDPJGMCEKQRWQFCALTBYLAHIMEHRSLUNSAMKHZDDUIZYEMQYSTAIQHOUHEOTUEWDJKPXKBGXCBIWJBQOZFVYONAICVXFLOFWTAHGPZFMQGL");
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
    msg.setTimeStamp(0.6794964257037569);
    msg.setSource(52875U);
    msg.setSourceEntity(244U);
    msg.setDestination(21969U);
    msg.setDestinationEntity(180U);
    msg.op = 192U;
    msg.file.assign("TUJPANOCZLEYRZLJAWBRTTBCNGOSKMKTDRUISKYXJEXGUGSIEZKQMPMOIMDWLBVXJTATSPKHCSIBRKLLYQZLBFRIKPDMRHAACUCOFHHPHKJOJFFJFADMIQLALOVBEEPNFUCZODMNTYVGNMPGWQGQWPAZXFBFVCRLEIJNGQWMOZEGSANHPTKYGSWBSQEHUUMDVYJLSRXCCCZJTZFXRVBNZGFKXSOIHVDYWXIVQDVYNENUOXWYD");

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
    msg.setTimeStamp(0.27011072634602984);
    msg.setSource(29470U);
    msg.setSourceEntity(173U);
    msg.setDestination(17510U);
    msg.setDestinationEntity(24U);
    msg.op = 111U;
    msg.file.assign("XBQBIOMFDGRNKSFSBNRCHPQSJMMGLHFZCCKNURUNVVEWYIZPSBOOETTYD");

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
    msg.setTimeStamp(0.22832510222415836);
    msg.setSource(56401U);
    msg.setSourceEntity(60U);
    msg.setDestination(16649U);
    msg.setDestinationEntity(183U);
    msg.op = 4U;
    msg.file.assign("FORQLYJVQYMKVKSWGGCBUGXRZSNXYBFCNYHXXVHAEPWUMZKMZITAAJBFAEHLMAYKYEUOCIIWHBYABIULSCGOONZMXDFSAJBETKNWUVMJAXQBHPQVPMSGDFOQJTQZWKJLERUXNWUSWXSWLCTVHCBIZRSRDPYPCUDVZIDKOHN");

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
    msg.setTimeStamp(0.22354356967346345);
    msg.setSource(50393U);
    msg.setSourceEntity(34U);
    msg.setDestination(51468U);
    msg.setDestinationEntity(35U);
    msg.op = 159U;
    msg.clock = 0.24412913201556485;
    msg.tz = 70;

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
    msg.setTimeStamp(0.7689685328464885);
    msg.setSource(48468U);
    msg.setSourceEntity(19U);
    msg.setDestination(1816U);
    msg.setDestinationEntity(198U);
    msg.op = 48U;
    msg.clock = 0.9972336409551683;
    msg.tz = 95;

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
    msg.setTimeStamp(0.6212774665755665);
    msg.setSource(26372U);
    msg.setSourceEntity(151U);
    msg.setDestination(59648U);
    msg.setDestinationEntity(46U);
    msg.op = 158U;
    msg.clock = 0.794860836436481;
    msg.tz = 33;

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
    msg.setTimeStamp(0.5943856406451151);
    msg.setSource(65322U);
    msg.setSourceEntity(11U);
    msg.setDestination(58775U);
    msg.setDestinationEntity(61U);
    msg.conductivity = 0.1636703625729673;
    msg.temperature = 0.6878750796451815;
    msg.depth = 0.5008477597239734;

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
    msg.setTimeStamp(0.40037462060723716);
    msg.setSource(52349U);
    msg.setSourceEntity(209U);
    msg.setDestination(59286U);
    msg.setDestinationEntity(24U);
    msg.conductivity = 0.455979121447452;
    msg.temperature = 0.3692658527593934;
    msg.depth = 0.5405447655391052;

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
    msg.setTimeStamp(0.8905004516788741);
    msg.setSource(16764U);
    msg.setSourceEntity(34U);
    msg.setDestination(38431U);
    msg.setDestinationEntity(95U);
    msg.conductivity = 0.5183942956149608;
    msg.temperature = 0.48665540786660133;
    msg.depth = 0.3955159344219945;

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
    msg.setTimeStamp(0.6932664572617285);
    msg.setSource(57580U);
    msg.setSourceEntity(30U);
    msg.setDestination(34076U);
    msg.setDestinationEntity(115U);
    msg.altitude = 0.759203468950623;
    msg.roll = 5918U;
    msg.pitch = 51560U;
    msg.yaw = 20855U;
    msg.speed = -30409;

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
    msg.setTimeStamp(0.10019743990685759);
    msg.setSource(18365U);
    msg.setSourceEntity(216U);
    msg.setDestination(12965U);
    msg.setDestinationEntity(184U);
    msg.altitude = 0.09377380490458354;
    msg.roll = 29674U;
    msg.pitch = 14166U;
    msg.yaw = 65025U;
    msg.speed = -15904;

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
    msg.setTimeStamp(0.5741115782881365);
    msg.setSource(6732U);
    msg.setSourceEntity(228U);
    msg.setDestination(46735U);
    msg.setDestinationEntity(126U);
    msg.altitude = 0.9457909754150194;
    msg.roll = 45636U;
    msg.pitch = 18832U;
    msg.yaw = 43973U;
    msg.speed = 8792;

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
    msg.setTimeStamp(0.3660593140125843);
    msg.setSource(40375U);
    msg.setSourceEntity(226U);
    msg.setDestination(37791U);
    msg.setDestinationEntity(224U);
    msg.altitude = 0.9155737549247567;
    msg.width = 0.2134776131226397;
    msg.length = 0.9656259676238718;
    msg.bearing = 0.45869249573873594;
    msg.pxl = -15883;
    msg.encoding = 30U;
    const signed char tmp_msg_0[] = {71, -42, 41, -50, 107, 55, -90, 3, 22, 90, 15, 50, -4, -85, 112, -55, -80, 73, 19, 81, 99, 26, 13, 59, 104, -60, -60, -77, -84, 84, -85, 37, 83, 59, -53, 91, -87, 88, -3, -83, -25, -53, -104, 17, 12, -63, 36, -5, 15, 55, -116, 112, 56, 50, 1, -117, 90, -7, -98, 2, -45, -5, -61, 77, 63, 109, -98, -76, 4, -1, -121, 120, -43, 33, -64, -84, 29, 68, -90, 110, 120, 38, -39, 4, -11, 124, 50, -116, -54, 61, -41, 122, 91, -28, 33, -57, -33, -37, 10, -114, 95, -98, 105, 36, 117, -73, -110, 126, -62, -70, -43, -75, 32, 96, 93, -53, -71, -120, -5, 81, 8, 7, -1, 1, -104, -117, -74, 54, 41, -66, -8, 76, 17, -123, 59, -98, -1, 14, -63, -116, -39, 92, 33, 9, -59, 70, -18, 52, -105, -68, -99, 18, -125, -89, 81, -51, -87, 113, -53, 29, 112, 12, 102, 83, 46, 0, 64, 28, 77, -10, -55, 78, 35, 119, -114, 40, 77, -19, -65, 15, -4, -94, -61, -11, -126, -81, 24, 19, 110, -84, 64, 39, 76, -90, -119, 41, 104, -22, 121, 116, -101, -95, -103, -80, 110, -58, 11, -125, 7, 121, -59, -11, -3};
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
    msg.setTimeStamp(0.8383097680048757);
    msg.setSource(46303U);
    msg.setSourceEntity(130U);
    msg.setDestination(20031U);
    msg.setDestinationEntity(85U);
    msg.altitude = 0.14209626574083722;
    msg.width = 0.95683384012176;
    msg.length = 0.17438493098838437;
    msg.bearing = 0.13104188548414952;
    msg.pxl = -24411;
    msg.encoding = 149U;
    const signed char tmp_msg_0[] = {91, 64, 88, -40, 26, 49, -83, -105, 19, 13, -67, -59, 17, 107, -55, -16, -54, -115, -62, -125, -54, 46, 3, -29, 98, 102, -55, -101, 120, 93, 77, -126, -15, -6, -72, -57, 124, -22, -98, 41, -21, -49, -24, -47, 8, -127, 22, 77, 14, 25, 126, -49, 111, 25, 62, -23, -103, 48, 65, 21, 3, 25, 64, -20, 57, -87, 73, -61, 60, -78, 122, 39, -96, 84, -118, -90, -92, 38, -62, -97, 43, 48, -116, -29, -19, 105, -90, -89, -51, 59, 73, -87, -104, 76, -59, -32, 69, -116, -40, -115, -117, -108, 34, -96, 71, 46, -125, -5, 46, -128, -1, -76, 117, 116, 75, 97, 110, -57, -124, -14, -5, 114, -1, 30, -65, 126, -47, 99, -126, -50, 10, -79, 71, -113, -13, 107, 28, 64, -74, -114, -19, -33, -60, 19, -122, 19, 21, -78, -52, -111, 54, -69, 90, 115, -84, -18, -100, -2, -62, -2, -84, -86, -111, -23, -31, -38, -3, -45, -8, 57, -108, 51, 101, 94, -104, 103, 36, -35, 112, -86, -16, -83, -58, 32, -95, -125, -64, -29, -71, -90, -107, -31, -25, -79, -113, -61, -102, -117, 60, -124, 55, -102, -46, 98, 106, 29, -43, 55, -116, 7, -34, -17, -72, -76, 101, 100, -2, 56, -91, 53, -35, 42, -46, -23, -22, -40, 8};
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
    msg.setTimeStamp(0.484233135875511);
    msg.setSource(5438U);
    msg.setSourceEntity(115U);
    msg.setDestination(39346U);
    msg.setDestinationEntity(59U);
    msg.altitude = 0.19030501356836316;
    msg.width = 0.038246924695348294;
    msg.length = 0.22029769636167573;
    msg.bearing = 0.8112550684149222;
    msg.pxl = -26718;
    msg.encoding = 247U;
    const signed char tmp_msg_0[] = {40, -32, -65, -118, 102, 58, 40, 99, -41, -43, 54, 109, 20, -36, -89, -73, -61, -104, -77, 51, -81, 38, -48, 92, -94, 20, -100, 125, -127, -49, 122, 124, -106, 29, 123, 126, 23, -42, 99, -34, -68, 118, -128, 88, 23, -74, 121, 39, 39, 112, 20, 123, 13, 62, -39, -124, 62, -32, 119, -11, 34, 93, 65, -73, -8, -17, -106, -124, 124, -65, 124, -77, 30, -16, -30, -45, 16, 87, -24, 59, -39, -93, -23, 82, -34, -33, -65, -91, -90, 80, 1, -79, 57, -71, -16, 120};
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
    msg.setTimeStamp(0.32208256353894593);
    msg.setSource(61540U);
    msg.setSourceEntity(118U);
    msg.setDestination(63594U);
    msg.setDestinationEntity(157U);
    msg.text.assign("VYBTZXLJUKNFPOTDPMIXLTFPGOKLMPSRUCLLQWNVIKLJYXGJDLIDSKULHUOSFTZHGYDSJHDTEMFIQHPRAFUZFGEYKWWRXEUBTDPHZJYBVAAXMAZBLQRVUEHDFBZWWAHWRANHXNSQGCVYBMQQPRGUOBAXFVVIRGTAYYEGDSWZTICOPONXCKVNZKGPMQCOFULMHGIMZAIISICDJJWSSDSZMKWACPYREBBXTUKWCEEOXC");
    msg.type = 204U;

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
    msg.setTimeStamp(0.8916369464154447);
    msg.setSource(28554U);
    msg.setSourceEntity(245U);
    msg.setDestination(9916U);
    msg.setDestinationEntity(78U);
    msg.text.assign("KYHXMMMKJFCDTINZIZELNMVAVKOSPXDCSYTQTKUMQNLQLYVWHJOTNGWXAFKHLBFCJCSYSIFFXSIMDZZIIDSEFYXVYJBVBTAJHWGBQVRKFJYCONORSNP");
    msg.type = 87U;

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
    msg.setTimeStamp(0.7484768529224216);
    msg.setSource(20676U);
    msg.setSourceEntity(135U);
    msg.setDestination(60771U);
    msg.setDestinationEntity(38U);
    msg.text.assign("FYBQASRBOITXWGRGKXKCZBBTAYYSHLKDQYJDWPPYBBOTDCMLFXACUENODIZNJZDXWATOYLQVRNIOUGRRQXFGZXUGDGELWGPECTLMTMDERAIJYHZHNWMUOVSNZWPBZPUMENUNYSVHCTNZRVZTQIIHSYSLXWFMHKGEEPOWVPKJBOPWFSRFKUVADPMFNJUQKELCVKASEJPHFJCOIFYBHHNOUDVDKCILMQZXGI");
    msg.type = 34U;

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
    msg.setTimeStamp(0.29524308800956933);
    msg.setSource(55406U);
    msg.setSourceEntity(16U);
    msg.setDestination(38289U);
    msg.setDestinationEntity(40U);
    msg.parameter = 125U;
    msg.numsamples = 99U;
    msg.lat = 0.10367457669763447;
    msg.lon = 0.7470674351510407;

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
    msg.setTimeStamp(0.38569798682947865);
    msg.setSource(38624U);
    msg.setSourceEntity(226U);
    msg.setDestination(34143U);
    msg.setDestinationEntity(38U);
    msg.parameter = 124U;
    msg.numsamples = 242U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 13537U;
    tmp_msg_0.avg = 0.34339159146985565;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7110737629032481;
    msg.lon = 0.27428454261545443;

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
    msg.setTimeStamp(0.3089470352046604);
    msg.setSource(25349U);
    msg.setSourceEntity(77U);
    msg.setDestination(33276U);
    msg.setDestinationEntity(123U);
    msg.parameter = 112U;
    msg.numsamples = 172U;
    msg.lat = 0.3829111355248328;
    msg.lon = 0.599458002725243;

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
    msg.setTimeStamp(0.44818981164569527);
    msg.setSource(18116U);
    msg.setSourceEntity(218U);
    msg.setDestination(51830U);
    msg.setDestinationEntity(83U);
    msg.depth = 40170U;
    msg.avg = 0.767089231314597;

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
    msg.setTimeStamp(0.9931303147594938);
    msg.setSource(15061U);
    msg.setSourceEntity(128U);
    msg.setDestination(10933U);
    msg.setDestinationEntity(83U);
    msg.depth = 17050U;
    msg.avg = 0.1432204839815614;

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
    msg.setTimeStamp(0.5285694368817581);
    msg.setSource(4896U);
    msg.setSourceEntity(80U);
    msg.setDestination(9909U);
    msg.setDestinationEntity(188U);
    msg.depth = 61672U;
    msg.avg = 0.31444701168357136;

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
    msg.setTimeStamp(0.6444675743220835);
    msg.setSource(3567U);
    msg.setSourceEntity(10U);
    msg.setDestination(23246U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.2581026305973976);
    msg.setSource(51639U);
    msg.setSourceEntity(115U);
    msg.setDestination(20832U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.7787581115049118);
    msg.setSource(46059U);
    msg.setSourceEntity(140U);
    msg.setDestination(51713U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.8915161680595837);
    msg.setSource(17844U);
    msg.setSourceEntity(239U);
    msg.setDestination(6773U);
    msg.setDestinationEntity(16U);
    msg.sys_name.assign("WQUHVBYDGKBGOTFMAAEIREQSPEHJPBMQCJJUFLTWTCDIWYNMJCZSMTKANDCMRWFFYSX");
    msg.sys_type = 166U;
    msg.owner = 38945U;
    msg.lat = 0.7925966956364697;
    msg.lon = 0.36362104114416827;
    msg.height = 0.7374312438371958;
    msg.services.assign("GYJQAQDNOFTPXWHUSNMCHROFTJAJNYRMPXEJWDCECHLTMRYOFPSTXZINKFOJTMBDLGGNWHL");

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
    msg.setTimeStamp(0.7026994803307667);
    msg.setSource(28206U);
    msg.setSourceEntity(225U);
    msg.setDestination(2048U);
    msg.setDestinationEntity(9U);
    msg.sys_name.assign("ABEHPQKLDCDRPGANNZYTWQHZIOZVSWKPKPTJQFHCWVXWVY");
    msg.sys_type = 93U;
    msg.owner = 41812U;
    msg.lat = 0.9464687125293008;
    msg.lon = 0.6540941408434378;
    msg.height = 0.1591285993801086;
    msg.services.assign("XYYVCIAKTXNDLVIVUYFDREAFGXQRJCQOSTKJEMEELSRCTSCOOMQNDUZOBBKKHADHCBQTJGAQGJMWWMIYYKFYDSWHZXELILINHMMVZBFCAEKTWRMUMXJVNQGLSUQOPGEOIKUVK");

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
    msg.setTimeStamp(0.6918386931582231);
    msg.setSource(11190U);
    msg.setSourceEntity(137U);
    msg.setDestination(13648U);
    msg.setDestinationEntity(13U);
    msg.sys_name.assign("WXNVPQXUGMPHUSBWWXMEHSUMPOPUHFFIHYICNPAFVANZCTCGYFITJXBEDNVCVRNETYDJYSUKBFBTZJALUNCASYKLGKQTVPGYRXKROGFEGUCBTHTZQCJDGZOBVLWLXKDFLZOSVIWKEGNFRSFETAGEMHJDOWIZHYXBILKJMAMNKRSRMQGLYOCAZOZUIPIANXULUEWVORPQYEBSQHMJTMOIDVITADWKJQDESQQFSDKHRBZPYXPNLJWJC");
    msg.sys_type = 155U;
    msg.owner = 8553U;
    msg.lat = 0.0400603050511813;
    msg.lon = 0.3972124319098257;
    msg.height = 0.05964363482838264;
    msg.services.assign("WFCZCDQTUUCIVTLEDRUBLVKJPRZHQGSONIXVEJHDUSESZRYRXTHLPEVAGAOBEKQRWVFXJJIDHUGPWKPDJMADOHSOTHUQVKMFBAXQBZCAZNZSGZGDXHSMJQTPACNSYYYIQNPDVSUHTKRLFAILYTQUMPMWMVNFVEEELWBCFIKCDMOFT");

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
    msg.setTimeStamp(0.687611777535362);
    msg.setSource(37477U);
    msg.setSourceEntity(174U);
    msg.setDestination(42443U);
    msg.setDestinationEntity(131U);
    msg.service.assign("AJRYOCMYWZRZJAKDDAFDJDMZCZYUHHAGKKATFPDQLHXDJYJUTFJLQOIPZNWHXXQGWPOKXRSTUSANSOFQBSWAVFIGFDTELLZAKPXGDMMJGHWCWOEVQKCYEVTUWNYTIPSCPBOUIDQBEFREEXMIPNCQKEVTERAZHJCHGAKVNCWS");
    msg.service_type = 114U;

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
    msg.setTimeStamp(0.9384679444110331);
    msg.setSource(20733U);
    msg.setSourceEntity(206U);
    msg.setDestination(29141U);
    msg.setDestinationEntity(189U);
    msg.service.assign("ZDWBJYBZOHQDHQISUCMOIZJMEPPPEAANEYFDKUSRFGGKZYLXJPJWJFRTXAVERNHTWQCCYJL");
    msg.service_type = 1U;

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
    msg.setTimeStamp(0.7757524827613383);
    msg.setSource(60015U);
    msg.setSourceEntity(9U);
    msg.setDestination(2302U);
    msg.setDestinationEntity(231U);
    msg.service.assign("AIOEZBEDHAMBZPNCTNBKVWUZSONRLBNGYERSISYHPJBSRFJLGIMNQNEQOEHMJJSAAXYUISFELCUZDWJBPKYTCLVICWQVZJTBGKIAVQUHIVWDHFLRZCUMEFSNWMLGYTACTVFYWAQQNZWXZPJIXFCVH");
    msg.service_type = 94U;

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
    msg.setTimeStamp(0.9613843343372391);
    msg.setSource(61919U);
    msg.setSourceEntity(208U);
    msg.setDestination(8846U);
    msg.setDestinationEntity(102U);
    msg.value = 0.19178170833515273;

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
    msg.setTimeStamp(0.0785467240079607);
    msg.setSource(49949U);
    msg.setSourceEntity(38U);
    msg.setDestination(52791U);
    msg.setDestinationEntity(228U);
    msg.value = 0.5187701610211682;

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
    msg.setTimeStamp(0.9649421655313691);
    msg.setSource(27241U);
    msg.setSourceEntity(30U);
    msg.setDestination(48029U);
    msg.setDestinationEntity(85U);
    msg.value = 0.4986116264366661;

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
    msg.setTimeStamp(0.47300199086180683);
    msg.setSource(31269U);
    msg.setSourceEntity(50U);
    msg.setDestination(483U);
    msg.setDestinationEntity(192U);
    msg.value = 0.9898452136777238;

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
    msg.setTimeStamp(0.81272456500381);
    msg.setSource(45122U);
    msg.setSourceEntity(170U);
    msg.setDestination(62130U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6288722555546089;

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
    msg.setTimeStamp(0.45474593807324437);
    msg.setSource(1256U);
    msg.setSourceEntity(80U);
    msg.setDestination(51137U);
    msg.setDestinationEntity(66U);
    msg.value = 0.3861146130978831;

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
    msg.setTimeStamp(0.6011701784983544);
    msg.setSource(45520U);
    msg.setSourceEntity(179U);
    msg.setDestination(39327U);
    msg.setDestinationEntity(42U);
    msg.value = 0.7096020702871044;

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
    msg.setTimeStamp(0.28235424160068556);
    msg.setSource(219U);
    msg.setSourceEntity(121U);
    msg.setDestination(8286U);
    msg.setDestinationEntity(183U);
    msg.value = 0.038059356414645196;

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
    msg.setTimeStamp(0.6561845770784387);
    msg.setSource(31354U);
    msg.setSourceEntity(11U);
    msg.setDestination(48576U);
    msg.setDestinationEntity(76U);
    msg.value = 0.17239466600566156;

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
    msg.setTimeStamp(0.8274724280965141);
    msg.setSource(5843U);
    msg.setSourceEntity(104U);
    msg.setDestination(43089U);
    msg.setDestinationEntity(234U);
    msg.number.assign("ELDMNJGBSFAJCRKMSUVJPAWJITYDOJCZSWTMQZVVGRSLSNNVTZZFZABLBRQWTAUBNDDLFKWEWCJAYUXAYUGSXPQOTKCPFCPHHMTSLOCPE");
    msg.timeout = 31716U;
    msg.contents.assign("YZCTSVVDHIYNPBKWWSIAHMEOOZQCRVUDAWTQMPJEGPWOSLUZBFNAARYVYMQUTGFKGBJGUIFWAUZZCGROXJYRRJAIHKOPXOFLWQRSMXQLEYQVNBTNEMDPLCAZJDJITBSFQPBIECVCVIWRETHNHXKXORJHAUHRUHDGSVAQKNEPLKIARINZZNMKDGBFIUPJLUXUZFXQXOCWWBYONWLSTVYEDXBSCHHMZTG");

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
    msg.setTimeStamp(0.8875548293406997);
    msg.setSource(12284U);
    msg.setSourceEntity(37U);
    msg.setDestination(43727U);
    msg.setDestinationEntity(178U);
    msg.number.assign("PLTGZDTVOSUEOENTFKXHXWRWEOSSVQMICJWVUKESJHPLAHQHNZSYAVMFPJBOIBPGPWDZDLYJWZCUHQVAKATNBXKKQFNRZLTDGFFFMHZMXBBJVABJ");
    msg.timeout = 42668U;
    msg.contents.assign("PAQUEZAWYQNPUIUAMLJYUPKTNCKRYQPWCMERVXVBOTJBZTKRACAJNCYXJWVCDZNNLOJRZAEBTNXSOHKSDZXCWHLTJQTGQTWQDPEMWFUDVGZOPIDSESSPIFHLKTIWHODFIOOVZI");

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
    msg.setTimeStamp(0.09350000044959128);
    msg.setSource(40996U);
    msg.setSourceEntity(177U);
    msg.setDestination(58839U);
    msg.setDestinationEntity(111U);
    msg.number.assign("JMWJSMNIWTQGVELEZFNRKRSVSUXSLYZGGBFZZBKHBFUZEERHCBEPLBFDXIMVWDWUBMKOJDKCGDKXCXJUTHXVTXDYLGKNPYHHBYR");
    msg.timeout = 33397U;
    msg.contents.assign("DNMWISGFGAVOUSTZRWFFXUJSIKZUHPKASUIK");

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
    msg.setTimeStamp(0.4113491465117931);
    msg.setSource(58687U);
    msg.setSourceEntity(251U);
    msg.setDestination(42094U);
    msg.setDestinationEntity(86U);
    msg.seq = 3397280579U;
    msg.destination.assign("MQCEHOLGENAKVEKDBFJWZSWBLIZADYDLCYNJPXEHEIFTYSWASMAWHVMOFCZVXSKLCKGVXEXAOQWQRMNPMYZPIQRBJDYYMBWVHWJTXREGRCTRLMSVQRQRHGKITGBSLDZGVFOAJPPJUJGHWFPTOKNCRKQTMVIELFRUIJBUIQHNLPIXZUUPNUZOEFHYF");
    msg.timeout = 22107U;
    const signed char tmp_msg_0[] = {-52, -54, -104, -94, 61, 7, -122, -22, -27, -48, 80, 2, -124, -125, -98, 72, 124, 11, 36, -99, -94, -77, -30, 121, -26, 48, 38, -58, -47, -11, -88, 63, -70, -6, 90, 19, -101, 90, -109, -13, -27, 62, -109, -8, 38, 22, 70, -105, 50, -37, 62, 68, -85, -94, -7, -13, 44, 97, 116, -86, -32, 70, -109, -67, -38, 52, -4, -110, 100, 96, -109, -66, 50, 37, 112, 36, -25, -112};
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
    msg.setTimeStamp(0.7880860875991469);
    msg.setSource(51980U);
    msg.setSourceEntity(31U);
    msg.setDestination(30043U);
    msg.setDestinationEntity(124U);
    msg.seq = 1771787797U;
    msg.destination.assign("QFPGOZOSDSUBWHWCPZADJNUOFEVMITEILZCFIHMTCQEZRKRUURLEMJXKKRQIVETDKPCDLOCQUFNXQBNFWPCRLKFLEDCHSTHPZ");
    msg.timeout = 33086U;
    const signed char tmp_msg_0[] = {63, 21, -93, -73, 25, 39, 96, 94, -45, 80, 48, -70, 80, 91, 11, -63, 118, -104, 117, -98, 66, 9, 64, -123, 68, 120, 86, -73, -73, -69, -48, -81, -73, 81, 59, 2, 63, -32, -46, -68, -46, 113, -60, -49, -77, 126, 81, -47, -78, -56, -91, 96, 70, -94, 91, -114, -44, 124, 122, 32, 93, 69, -28, 39, -58, -32, -16, 61, -52, -79, -96, -77, -12, -100, 72, -106, -33, 42, 117, -51, -16, -77, 38, -40, -21, 38, -122, -11, 20, -41, -104, -21, 67, 53, -98, -5, -28, -9, 57, 113, -118, 84, -71, -28, 98, 92, 12, -71, 74, 82, 57, 46, -47, -111, 112, 11, -115, 53, 105, -72, 49, 100, 103, -122, -35, -98, 34, 27, 58, -102, 115, 103, -65, -44, 14, 32, -58, 61, -101, -102, -21, 116, 111, 95, -13};
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
    msg.setTimeStamp(0.4051642712113579);
    msg.setSource(31355U);
    msg.setSourceEntity(173U);
    msg.setDestination(794U);
    msg.setDestinationEntity(211U);
    msg.seq = 2897891429U;
    msg.destination.assign("DBXEOFTMBQJWWHZNSEJGUYPPZKJRXYVKRSV");
    msg.timeout = 1285U;
    const signed char tmp_msg_0[] = {-73, -77, 6, -34, 80, 21, 70, -69, 107, -98, 22, -61, 37, -90, -28, -123};
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
    msg.setTimeStamp(0.6610428303964716);
    msg.setSource(16514U);
    msg.setSourceEntity(21U);
    msg.setDestination(52797U);
    msg.setDestinationEntity(4U);
    msg.source.assign("VLRBECZNEOHANFRGDEUKMTRKBLB");
    const signed char tmp_msg_0[] = {-112, -119, -9, 94, -73, -89, -11, 33, 81, -55, -116, 104, -19, -92, 73, 87, -125, -13, -28, 115, -128, -42, 50, 52, 118, -100, 104, 8, -33, 38, -76, -80, 93, -62, 44, -22, 77, -83, -60, 49, -4, -30, 19, 42, -53, -82, 116, -117, -15, -3, 86, -73, 97, -11, -53, -70, 50, 103, -26, 15, -77, -99, -48, 81, -28, 82, -87, -4, -128, 94, 32, -82, -90, -28, -92, 38, 1, 78, 55, -114, 16, -69, 46, -9, -79, 113, -14, 27, -79, 120, -94, 88, 95, -37, -110, 8, -73, -61, 89};
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
    msg.setTimeStamp(0.8068788809623653);
    msg.setSource(21703U);
    msg.setSourceEntity(98U);
    msg.setDestination(9310U);
    msg.setDestinationEntity(50U);
    msg.source.assign("UYZQTYOAFJPSEQKEPTSRTTOCGVCTRQXTEUOTGNIGJKBECJYIRGWYMBQRRWXFDJHYQBUZLCUDFLEVMBWAVWZJCOFTIMQXHZURHPUPAHWXYNRDNQRUSUYHPHGXXKUDZBSFDDHIQKGCDGSDTZNXEYMICMASCINFLIVKQNVHCHRGSEFZJZDLLNBXOPPKAUVVOI");
    const signed char tmp_msg_0[] = {-42, 37, -56, 45, 28, 26, 104, 109, -5, 99, -80, -31, -16, 22, -63, 117, -124, -55, -17, -34, 49, -31, -26, -118, -107, 113, 63, 54, 73, -49, 10, -122, 93, 95, 16, -60, -99, -75, 31, -53, -10, -112, -39, -68, -97, 53, 33, 39, 24, -8, 78, -99, -98, 11, 82, -50, 117, 114, 67, -118, -59, 58, -63, 47, 66, 13, 53, -26, 64, 78, -11, 11, 30, -21, -101, 126, 107, -38, -92, -65, -121, 122, 19, 35, -15, -61, -65, 107, -119, 114, -91, 18, -67, -25, 41, -41, -25, -48, 94, -11, 41, -118, 98, -58, -47, -66, -20, 123, 102, -12, -74, 104, 86, 52, -45, 110, -25, 55, 52, 33, 94, 23, 97, -119, 72, -53, -66, 6, -85, -7, -105, -122, -19, -104, 31, -7, 64, 64, -91, 41, -37, 120, 112, 124, -71, 20, 29, -61, -119, -32, -7, -42, 53, 79, 110, -51, -27, 90, -100, -9};
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
    msg.setTimeStamp(0.48277244443074896);
    msg.setSource(31255U);
    msg.setSourceEntity(85U);
    msg.setDestination(11784U);
    msg.setDestinationEntity(116U);
    msg.source.assign("NIWGRADXPZDKLUQNUJJOPTHREOOHMEHBNTZKELQLWONDSVDAWNQFTXLHHUQLJXSCTEITGUZLMYLXAQYUGVCYGFVBSNZ");
    const signed char tmp_msg_0[] = {-47, -109, -125, -6, -6, -5, -40, 29, 78, 126, -32, 71, -27, -89, 40, 112, 57, -115, 39, -7, -16, 93, 73, -102, -29, -91, 9, 123, 54, -81, -54, 95, -23, -128, 109, -24, 49, 114, 67, 112, 31, 5, -8, 85, -89, 21, 18, -114, 36, 69, 126, -18, -45, 19, -23, 74, 51, -34, 37, -2, -22, -50, 96, -33, 91, -39, -91, -51, 13, 22, -46, 35, 125, -127, -61, -61, 9, -73, 108, -36, -42, 65, -70, 54, -127, 74, -35, -106, -67, 71, -15, -68, -71, 53, 114, -10, 58, 95, -115, 53, -112, -37, -32, 99, 111, 9, 3, 18, 99, -63, 102, 107, -90, 121, 82, -14, -13, -100, -36, -94, -66, -9, -16, -16, 92, 53, -26, -54, 68, 114, 6, 87, 101, -84};
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
    msg.setTimeStamp(0.05836432414344117);
    msg.setSource(28276U);
    msg.setSourceEntity(173U);
    msg.setDestination(21281U);
    msg.setDestinationEntity(233U);
    msg.seq = 412435373U;
    msg.state = 25U;
    msg.error.assign("TRLPLWBQRIKCSQWTJZFBXSNNQKNOPLGIXBZQZYBMJSRLYYHZLIUFAOHMVGRYCFUILCDLTHHLYOAQBIJGXCDAHGASRSRMMGHEVVDUSWHJJLRMKODGOFPXVDNTYGVJWDBWOMKKWEZKKREVEVYZEQCTDPJDHPOTCORPT");

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
    msg.setTimeStamp(0.4903425629370848);
    msg.setSource(62111U);
    msg.setSourceEntity(148U);
    msg.setDestination(65272U);
    msg.setDestinationEntity(2U);
    msg.seq = 2274620111U;
    msg.state = 184U;
    msg.error.assign("LSTOQJTZAEKJXDLHFIWEKCRXADRGULGUGWTEDYYMZEPROMUQTJSLQZBEGODMJWBHGLCBOCUQESDUNPXVZRPAIUKEVKGFCWHPSPIKTKGHUXENMSLROAAORPEBWRBTXJHRIFPAXDUHVAYTPYZMVDVZLFNYSFHNHTNITWXCSOBYXYQDSFMZMUBGCMRMBNFACXJJPPNLYFQNLBZVIBNOVWRZFKFSKDILHWECDJYZOIKHGIJQKVQCOAUMCYXSVGWI");

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
    msg.setTimeStamp(0.040031680744716525);
    msg.setSource(27412U);
    msg.setSourceEntity(189U);
    msg.setDestination(46571U);
    msg.setDestinationEntity(79U);
    msg.seq = 1249180074U;
    msg.state = 100U;
    msg.error.assign("YDEKUEBJQRWZCBBQSSQNYETOVDKDHPYGQYYKKLWONLGRZPPQASZMHSYSPTWFDWQNETROMKXGNVUPFIIJRWXVGTMCBMGECAWRLLSOUADBVBATJQIFKHCZDSIUEZNTDBSLWCUCBHLZRYRLXFMMXJBIAVFOIACBOOXMTHMNNXRVTEQVZPFOVQVOSVOKIYFLNUNFIJJUHGCPHJHGWCZUAGLZIJDIXGNFYWEJXPKLSDZUKAXGRKPQFTAX");

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
    msg.setTimeStamp(0.5065146495089847);
    msg.setSource(29889U);
    msg.setSourceEntity(167U);
    msg.setDestination(56632U);
    msg.setDestinationEntity(242U);
    msg.origin.assign("WTIQJNGXIPQUWFDECYVTUUCVIMTTZDNSQTLOXIELIGCQGTGMVZHBKAGGCHDQTFGYBZKSWOUQLDLEYYRNSOGSNXEUSUPOYHSKJOPRDRPZXENJHCYEXRHMIRNHURVDJQMXMZCHUDVOXTLRJSFZTKKDYIKWPCOYMBBCSRBUINDAPFHPMHFFMPWHSXRNXFCOPMEKVKBVEVMAJLSVABZNYE");
    msg.text.assign("ALOBTEPBIKPYTENXHMQOZWINJQMBCRLCRXNIIAVJKUASDCGYRQCTLJSOHOUHWZAENILYMWGZPDOCTXCOEZRHSPGJCBMYNESKOYVAWQEXLXUVZKWNPZFGKSXFJ");

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
    msg.setTimeStamp(0.02153866123195136);
    msg.setSource(43220U);
    msg.setSourceEntity(90U);
    msg.setDestination(30061U);
    msg.setDestinationEntity(211U);
    msg.origin.assign("KZXHPZWPMHHVVSXDZPTKYVGFXQWQREGCAZKSCGUTVBJFBPELLHORDRIZNRBDYPJCTKCFVOMLRDUTORNAYUEXBDINPXWEFOISOJMRNXEYAQYMUIHSBEMAJKBADWUJLSOQMULEBZFDWBJGSPJVEWJWNEGKHMVGPFCWIMGQBFDAARMAKDPUISYQ");
    msg.text.assign("LYAEEUNXXTWLKRGNHHEBIWHQZPBBCHYXNXYRGJIUZFZDRLATOQKMSTFYZHSVJVZJHBIIQAWMJDJUFDMALVOQOEJLTPULVBSBYDMLVVTVWSCDEFCIOAXKMPSTVSGWEDZBQMKTDRQTCRLVTPKXWEEUCKCFYRQDJAYHOJBMEMMUSXROPANGPURLFSQZKINHU");

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
    msg.setTimeStamp(0.7103976832579472);
    msg.setSource(19115U);
    msg.setSourceEntity(57U);
    msg.setDestination(63354U);
    msg.setDestinationEntity(13U);
    msg.origin.assign("YVILEBRXIHGXPACSBXTUJTUQJNLVPQ");
    msg.text.assign("VCVCOFIBROFXYOBOAYPDVCFDPRETAMLKEVCGSBPTTQGYQINHANFWJHZBQVPOKJOXWDLCQLBWWDARMPHVMEUGSGGYWPLGBAKNHRGGTSHOUBUJTDEOXZQ");

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
    msg.setTimeStamp(0.8589478511147006);
    msg.setSource(25780U);
    msg.setSourceEntity(175U);
    msg.setDestination(52235U);
    msg.setDestinationEntity(82U);
    msg.origin.assign("DRTMVHKMBGSPRAUAEZCRALQPULPSSWVVQBPIQFHZIFKGHLWTYCGBOYMRYVFAILSSRJANKNPXYJM");
    msg.htime = 0.24585396893192824;
    msg.lat = 0.3398618260135359;
    msg.lon = 0.2604401645616815;
    const signed char tmp_msg_0[] = {-45, 126, 115, -126, 32, -20, 24, -50, 96, -51, -46, 76, 97, -56, -14, 68, -92, -123, 26, -101, -87, -67, -88, 119, 80, -17, 122, -126, 27, -121, -128, 7, -24, 25, -105, -112, -83, -105, -67, 94, -26, 98, 21, 68, -112, -71, -52, 101, 100, -90, -115, 68, 120, 26, -29, 69, -54, 4, -89, -88, 63, -23, 19, -64, -88, 81, 113, 105, -59, 109, -63, -79, -80, 35, -27};
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
    msg.setTimeStamp(0.0019765724365525816);
    msg.setSource(5486U);
    msg.setSourceEntity(89U);
    msg.setDestination(5145U);
    msg.setDestinationEntity(110U);
    msg.origin.assign("XHYOJVKVMEGDGGVXSNOEMRLVRFTKBFOWTMKMGJWLWZLDCMBKHEMGBHYZQRPAKHTQYEBPWNKRQIAAWYVZQHAZGJAVDRVTYNVCIMYETITNDFOIZRRBHNOIPSXZJGEOCAJGJSFYBIUZHKBMZTDEQFUNNDFFMCSKPQXRUCKSMCPSUUHEAWLSRGTUSUXJDFBYZYLIQUCUHLE");
    msg.htime = 0.9503562351751086;
    msg.lat = 0.3809743670419865;
    msg.lon = 0.7221419030584492;
    const signed char tmp_msg_0[] = {92, -93, 70, -16, -55, 73, 7, 33, 117, -85, 95, -109, -128, -103, -114, 55};
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
    msg.setTimeStamp(0.5579704403996286);
    msg.setSource(32796U);
    msg.setSourceEntity(27U);
    msg.setDestination(28113U);
    msg.setDestinationEntity(35U);
    msg.origin.assign("XCTINEKPGOVJLVZORBRLQJWVLSYUMPKDNOIPLNWJCHZMTUCNTSKIAEXLIFALYTSQAWTUOHGWFLVYMCQUQKJMEDYRRZICVPQSXBSWFDSTHROHNZIMOJUJLFKBELRKHAIJ");
    msg.htime = 0.7715452286946837;
    msg.lat = 0.37877439409061553;
    msg.lon = 0.0714400940345522;
    const signed char tmp_msg_0[] = {-41, 21, -44, -40, 46, 125, 108, 43, 3, -40, 123, -68, 102, -50, 13, 15, 3, 61, -1, 58, -127, 34, -63, 116, -24, -9, 36, -122, 50, 16, 73, -3, -16, -119, 104, 9, 56, -115, 123, -24, 122, 84, 13, 5, -119, 70, -74, 76, -128, -35, 67, -88, -54, -51, 87, -10, -52, -15, -113, -28, -15, 42, 107, 34, 16, -125, 56, 113, -90, -125, 72, 78, -89, -37, -9, -81, 13, 4, -21, -76, -27, 65, 100, 32, 56, -66, -125, -44, -83, -81, -104, -116, 66, 97, -101, 106, 89, -57, -14, 66, -113, 20, -14, -121, 76, 88, -23, -80, 51, -115, -13, -25, -127, -66, 16, -49, -96, -9, -67, -109, 75, -101, 48, 100, -91, 46, -43, 84, 100, -84, -23, -124, 35, -125, -23, 111, 21, 108, -58, 101, -27, 124, -84, -17, 97, -113, -46, -23, 98, -82, -23, 45, -20, -69, -90, 20, -55, 21, 39, 4, 67, -128, 97, 125, 55, 11, -124, -59, 100, 8, -41};
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
    msg.setTimeStamp(0.38640854629842913);
    msg.setSource(23390U);
    msg.setSourceEntity(29U);
    msg.setDestination(20181U);
    msg.setDestinationEntity(9U);
    msg.req_id = 33856U;
    msg.ttl = 24399U;
    msg.destination.assign("JBBOGNJENRCRZASYLMDBXYVRPEFZHPBUDTHKVSWNDZAHOTTCVVICKNMLHGAZZYGGXUCKGJADASGHHOOJVONDSNIQZFMASQBAFPSREPCLJEITXUFJMOOPKBYYSTWOPXYQELQELMKCHIQFKLMKNRSFLYGTWNHHZIDHGRUQTVSJMTZDWEFWWMBJNDAVBUCLRQXMQIUTXEKPNLOESXRCYUICPFYDXUFMWGIAKZT");
    const signed char tmp_msg_0[] = {45, 57, 9, -38, 34, 71, 63, 34, 74, -67, 58, -104, 113, -21, 73, 60, -51, -66, -51, 76, -17, 16, -60, -42, -94, 7, 96, 111, 114, -77, 73, -30, -89, -110, -61, -81, -117, 2, -122, 103, 125, -85, 72, -123, -24, -28, -110, -25, 44, -71, 2, -45, -111, -79, -45, 82, 94, -53, 115, 55, -91, -54, 26, 30, -81, -49, -91, -66, -101, -10, 55, -17, 110, 1, -6, -49, 124, -20, -125, 57, 33, -68, 80, 60, 118, -61, -24, -87, 104};
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
    msg.setTimeStamp(0.5508811439514251);
    msg.setSource(53917U);
    msg.setSourceEntity(224U);
    msg.setDestination(59126U);
    msg.setDestinationEntity(64U);
    msg.req_id = 44877U;
    msg.ttl = 4775U;
    msg.destination.assign("HBSCOFNKETDOQRRSYXLOYVBZJLTJRAUJKLMABEPXMSHCVMMIUDDDISENGUKFUQPFTCAUVVZRCFALQTKKHLYWCQNVQTFIVYGLDZJDSUMAXGGKJPYHELOYDJOFZLVAONNMWDCTPSBZCXFYULYNHYIRREIYCOZIXKDEXWAQMMHCINGZUZBKOJBRGQMQSNBGIWBVTOXIRPBRUGWAETWPRVVWSJQHESOXKGHTEGFJMZWNJFXQAWXHSFT");
    const signed char tmp_msg_0[] = {57, -124, 124, -17, -116, -56, 59, -20, -61, 100, 107, 79, -80, 105, 117, -123, -49, -78, -57, 0, -68, 105, 123, 63, 0, 106, 44, 96, -18, -74, -3, 62, 60, -107, -113, -23, -56, 25, 84, -100, 1, 121, 99, -24, 41, -121, -50, 89, -123, -80, 122, 69, -30, 33, -38, 125, 106, 114, 41, -118, 79, -49, 17, -10, -25, -84, 9, 125, 40, 15, 101, -125, 115, 119, 16, 125, 111, 62, 118, -90, 95, -117, -124, 84, 55, 85, -59, -116, -70, -10, -36, -47, -105, -62, -43, -16, -58, -122, -66, -45, -42, 60, 2, -69, 35, -38, 62, -96, 90, 52, -3, 31, -106, 112, 92, -119, 102, -115, 55, 2, -97, 9, -13, 109, -50, 122, 116, -114, -111, 82, -107, -124, 122, 80, 100, -26, 117, -20, -121, 99, -109, -79, 31, 41, -128, -23, 18, -76, -116, -60, 68, -119, 32, -1, -123, 68, 57, 61, 14, 10, 99, 7, 12, 61, -82, -5, 101, 64, 95, -85, -66, -55, -40, -103, -76, -116, 6, -45, 10, -17, 25, -83, -74, -124, -56, 95, -74, 31, -8, -106, -27, 124, 38, -40, 0, -100, -13, -111, -104, -5};
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
    msg.setTimeStamp(0.06538049811086832);
    msg.setSource(897U);
    msg.setSourceEntity(252U);
    msg.setDestination(5166U);
    msg.setDestinationEntity(127U);
    msg.req_id = 55759U;
    msg.ttl = 34699U;
    msg.destination.assign("DJVFRPLODFLTUZKGZAQVHVKWDJAXIKQFEMKDLCUGCGPEOBCZTYXLZFBQEBRQXOYMIFZGSUIPSIUSHDAOKBAQGSGQNINAAEPOYZRSLWMRJTCWDDLGHPXXUEMTLPAWNYGADMOEOOKTVWGTWNVBFWVUEUKQHJYJM");
    const signed char tmp_msg_0[] = {-120, -79, -113, 60, -54, 63, 5, -54, -110, -62, 36, -98, 10, -64, 71, 1, -21, -18, 98, -107, -66, -28, -96, 51, -33, -83, -52, 17, 72, -36, 95, 20, -32, 52, -12, -12, -14, -124, 124, 92, 92, 80, -39, -66, 9, -21, 39, -106, -67, -8, 29, -57, 26, 115, -15, 45, 101, -8, 102, -63, 14, -103, 58, 111, 115, -18, 100, 11, -101, 33, 62, -98, 102, -13, -76, 22, -121, 0, -43, 12, -94, -73, -53, -97, -118, 14, 104, 39, -3, 95, 93, 95, 3, 112, -95, 17, 25, 124, -58, 4, -15, 46, -110, -106, -103};
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
    msg.setTimeStamp(0.12659734063679617);
    msg.setSource(48265U);
    msg.setSourceEntity(50U);
    msg.setDestination(40165U);
    msg.setDestinationEntity(37U);
    msg.req_id = 10714U;
    msg.status = 45U;
    msg.text.assign("AZRGFERYOVDNFOMQVZFCUGMXWSBATFYDZFWAOLQNCAGUUERCKNTHXJEMMKXOENSPJPEZVYKWTRDDHHV");

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
    msg.setTimeStamp(0.7163943936853969);
    msg.setSource(56709U);
    msg.setSourceEntity(174U);
    msg.setDestination(53840U);
    msg.setDestinationEntity(230U);
    msg.req_id = 10954U;
    msg.status = 230U;
    msg.text.assign("IVJXLKPVAUZGHRZGLFTSKAJYBTUMBHIXYHSOLQGQMILBSJLXYEWJRWNHBWYQKYSHXTNSWUFMBPOBPLKSEPEQOMOJVMINCARECNJDZAKWLHRCIJQFBJMDKUJYQUHWFTYZDZAVDMXFEYAANNOQAINWZODRDZ");

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
    msg.setTimeStamp(0.6861171496297527);
    msg.setSource(41138U);
    msg.setSourceEntity(242U);
    msg.setDestination(58399U);
    msg.setDestinationEntity(141U);
    msg.req_id = 5471U;
    msg.status = 235U;
    msg.text.assign("ORZVNXSWUOURGJOBASZI");

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
    msg.setTimeStamp(0.7025675120448537);
    msg.setSource(51042U);
    msg.setSourceEntity(129U);
    msg.setDestination(55919U);
    msg.setDestinationEntity(205U);
    msg.group_name.assign("NZCKUAVXWYUOFBJYJCQYTPNCBZXHMANKBCJXJGZATKPFMFTVWLRKNWXZIFDHGDBDOOMWTMTSEZDGILAAEQASPUZPUFGPJSVRIMYHNVJYPTTUNEBQGRGODDYNSQUERULIHQXYONNDKCFGPMMSOWZLTLLYUVLR");
    msg.links = 1091676795U;

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
    msg.setTimeStamp(0.978312773148962);
    msg.setSource(37225U);
    msg.setSourceEntity(59U);
    msg.setDestination(36104U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("OOUCKNVEYEXTUAUIQCJWYTKXNRXRNULGBWEHMKEAXYFLUIYGLVRZLYHCGXJFOHOHLRLVCNKPDPPLHDDUTEMFNITDZQWPE");
    msg.links = 2739400676U;

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
    msg.setTimeStamp(0.3846146401426982);
    msg.setSource(60007U);
    msg.setSourceEntity(204U);
    msg.setDestination(5246U);
    msg.setDestinationEntity(162U);
    msg.group_name.assign("NVCXMKTLJMJEHOZOVKCCNBYKPSUQPHNXNTHPACKUEXYHAKDUXQZRDVYFAPRILVDJDGFITPUYNBFZHBGSNWRUYDWXGLXMOKKWSRNGBWJQKSVGOVKHHJDOASKQALRRRZEMWMCWFNZBTU");
    msg.links = 1599875350U;

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
    msg.setTimeStamp(0.015229133494586211);
    msg.setSource(14290U);
    msg.setSourceEntity(203U);
    msg.setDestination(47443U);
    msg.setDestinationEntity(17U);
    msg.groupname.assign("CBZRGCJUMWRIIBLPONCLKBRIIJDOSVRLONGLANPGUXPHHXUNJIQQKQLDZGTDCHDJJZSGQQHZWEJGECJXKBUUONA");
    msg.action = 135U;
    msg.grouplist.assign("XJGPAMVMMYPDWYRQRTKIAPUEWHSPSZGJDLODREUKYQRYXNEKJBIVFPPADYBGBKBFKNZUGW");

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
    msg.setTimeStamp(0.6847525505420197);
    msg.setSource(25372U);
    msg.setSourceEntity(188U);
    msg.setDestination(4224U);
    msg.setDestinationEntity(6U);
    msg.groupname.assign("OLPJCIMAFMXZZTXYKYXCJEUVWCSPFDGNLOSXHEENPQVDFOKBGDBXDZUEGIYSLDVAAWGPBMWGIDEJGZNLMWZHYZKKGBFMQLAZKSPQJAQQJAIHNHHEQNRYKKAFYGJLJWFAFWNVKOHSXMVTRUMGJMKIARCSRXISZDIUTWSUXUCVRRTCNGUTNHTFXHVOYPFMCESHYEKWLZQBTC");
    msg.action = 45U;
    msg.grouplist.assign("PKJZHZYTBJNHUDQDPTOWXNCYUXENDXPFXDARMIVOZHGHMQJWUIESOTFXJNGYZBPOCMHKZMKBSEGTEXQLKJVVBFBGFRFKFYICDPUAOKYAFGNQNWQGWOTHBQVPRLAZEGSDDHUMHKZLPSWMWCBJVAZSSUTOTVFAKCSVXCNYJQQCVBELRSINJYLDJIAWRJHTEAKRYIVIEMNKWHIRLFMZQBPUGUQRUUPLXWZBOVMPIARENSICLYSOYWLO");

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
    msg.setTimeStamp(0.1156539348728679);
    msg.setSource(64231U);
    msg.setSourceEntity(98U);
    msg.setDestination(13004U);
    msg.setDestinationEntity(135U);
    msg.groupname.assign("HZHCCFPTCURPJNRJZREWKYVJXVHIWJTBILDVLKONCXBBOKWUGLTFJATNLQGUPVFXHVHNFXAFEYKJDHSLLEHPQKNPLGYDSWBPGQMMMDAZTWMSWPUYGVOKETXVEQKIPYQWNGEUMDBDZFRNIFNCAXIBUFPTYAQSCRGAXYRWHDERUQJGKWQBTOXNCNJLEB");
    msg.action = 75U;
    msg.grouplist.assign("FSKEDIGFZRDDCUIMYQTEVQECTZPWEIPWNUYAQHNYXVWJSQYVEUJQQOARICKBLOJTCDYEGLTLHNPJMJNXMKVWGBOPLUPZSDTSQBOMBVNFTTNFFLLZFOQOUFCHU");

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
    msg.setTimeStamp(0.20082247477159665);
    msg.setSource(5298U);
    msg.setSourceEntity(158U);
    msg.setDestination(3038U);
    msg.setDestinationEntity(180U);
    msg.value = 0.15601614473237224;
    msg.sys_src = 47628U;

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
    msg.setTimeStamp(0.8074437457475399);
    msg.setSource(1827U);
    msg.setSourceEntity(43U);
    msg.setDestination(41136U);
    msg.setDestinationEntity(76U);
    msg.value = 0.4958161312306424;
    msg.sys_src = 42788U;

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
    msg.setTimeStamp(0.1304923050988448);
    msg.setSource(50836U);
    msg.setSourceEntity(136U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(59U);
    msg.value = 0.3141532560408692;
    msg.sys_src = 32944U;

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
    msg.setTimeStamp(0.06821445302094642);
    msg.setSource(23744U);
    msg.setSourceEntity(5U);
    msg.setDestination(49684U);
    msg.setDestinationEntity(9U);
    msg.value = 0.8910201693014796;
    msg.units = 186U;

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
    msg.setTimeStamp(0.7604397178217993);
    msg.setSource(14477U);
    msg.setSourceEntity(205U);
    msg.setDestination(43953U);
    msg.setDestinationEntity(182U);
    msg.value = 0.42867788395326667;
    msg.units = 134U;

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
    msg.setTimeStamp(0.6253338339135506);
    msg.setSource(16991U);
    msg.setSourceEntity(237U);
    msg.setDestination(9285U);
    msg.setDestinationEntity(101U);
    msg.value = 0.9419393451519539;
    msg.units = 86U;

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
    msg.setTimeStamp(0.4624679984182749);
    msg.setSource(34294U);
    msg.setSourceEntity(248U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(204U);
    msg.base_lat = 0.6987167159234307;
    msg.base_lon = 0.15812006559043512;
    msg.base_time = 0.25536288587005895;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 53205U;
    tmp_msg_0.priority = 16;
    tmp_msg_0.x = -13692;
    tmp_msg_0.y = 18265;
    tmp_msg_0.z = -15325;
    tmp_msg_0.t = 18036;
    IMC::PlanDBState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_count = 961U;
    tmp_tmp_msg_0_0.plan_size = 1603917093U;
    tmp_tmp_msg_0_0.change_time = 0.8018843330766916;
    tmp_tmp_msg_0_0.change_sid = 2502U;
    tmp_tmp_msg_0_0.change_sname.assign("UNXYJDANPZUVLVSYGXEHIJMSIPDOVRGRFMXLWPTVBPCOHTUCWKAJBICSFOGSCNBMBXUDZUDDESWYMFCWXAXQABRCHXKBKWLIMKMOEEYLIRJGUILGNXUKUHDUWXYRQTCKINMZQYOQPRSFQNNEHB");
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {-60, 126, 56, 106, 65, 12, 20, -31, 91, -54, -108, 79, 39, -95, 23, 97, -54, 23, -69, -12, 39, -118, -95, -19, -127, -79, -83, -51, -47, 35, 25, -122, 31, 66, 109, -95, 39, 86, 2, 65, 119, 11, -84, 71, 115, -77, -50, 86, -112, -13, -42, 17, 50, -53, -114, -123, -109, 73, 6, -73, -28, 61, -104, -47, 35, -126, 120, 97, -128, -18, 9, -82, 101, 59, -40, -32, -62, 59, 4, 48, 113, 19, -13, -92, 101, 110, -98, -78, -102, 11, -101, 27, -72, -73, 4, 60, -3, -87, 115, -80, -50, 5, 56, -24, 88, -82, -39, -110, -30, -39, 63, -5, -50, 70, -122, 121, 42, 81, 1, 13, 10, -78, 38, -24, 89, 112, 31, 35, -1, 41, -25, 45, -58, 1, -110, 107, -21, -11, 90, -79, -88, -75, -2, 23, 95, -63, 80, -122, 0, -27, -49, 60, -63, -97, 112, -28, -55, 116, -36, 47, 120, -106, -69, -128, -78, 95, -108, 96, 28, -37, -39, 12, -116, -8, -59, 120, 77, 94, -13, -33, 79, -22, -11, 102, -76, -88, -97, 49, -45, -111, 14, -81, -107, 57, 123, 28, 118, 92, 47, 81, 124, -106, -94, -40, -66, 45, -86, -109, 100, -73, 94, 121, -10, -110, -31, 42, -109, 112, 93, 35, -52, 24, -100, 101, -8, -119, 63, 40, -87, -111, -51, 8, -42, 42, -60};
    tmp_tmp_msg_0_0.md5.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7022933111995406);
    msg.setSource(25967U);
    msg.setSourceEntity(132U);
    msg.setDestination(46844U);
    msg.setDestinationEntity(112U);
    msg.base_lat = 0.17670114752119637;
    msg.base_lon = 0.34360604395651173;
    msg.base_time = 0.042248835007799745;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 53585U;
    tmp_msg_0.priority = 103;
    tmp_msg_0.x = 24885;
    tmp_msg_0.y = 31006;
    tmp_msg_0.z = -21979;
    tmp_msg_0.t = 27460;
    IMC::GroupStreamVelocity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8572819490711994;
    tmp_tmp_msg_0_0.y = 0.20604879328670167;
    tmp_tmp_msg_0_0.z = 0.19930894156724221;
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
    msg.setTimeStamp(0.11546611660585204);
    msg.setSource(63515U);
    msg.setSourceEntity(29U);
    msg.setDestination(47929U);
    msg.setDestinationEntity(210U);
    msg.base_lat = 0.7675274094378619;
    msg.base_lon = 0.08044765106802565;
    msg.base_time = 0.20053405861669182;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 9653U;
    tmp_msg_0.priority = 40;
    tmp_msg_0.x = 17177;
    tmp_msg_0.y = 21119;
    tmp_msg_0.z = 848;
    tmp_msg_0.t = -27587;
    IMC::IridiumMsgRx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.origin.assign("NEMCILBJXZFOAYGYQPAOPTKKCVZDEOVSZYHSYRMHGEDJARWXGHFILKMKTFQYZTVWMWXGOUGVTNIHNOOJWCSBTTMANRPEHKKUUDRRLJLQNIXDBDUZSGRCHKCNWPVYAHAWNDLBPLSGMFAVQUJVLFCBMTZFUV");
    tmp_tmp_msg_0_0.htime = 0.6947551721927958;
    tmp_tmp_msg_0_0.lat = 0.6104231913947176;
    tmp_tmp_msg_0_0.lon = 0.10694873021270601;
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {-97, 119, 91, 47, 56, 68, 119, 95, 67, -54, 9, -54, 11, -110, 19, -28, -115, 32, 108, -32, -78, -44, 122, -125, -45, -18, 72, 86, 57, 66, 110, -104, -111, -39, 19, -65, 102, -28, -16, -50, 86, -1, -122, 116, -46, -35, -83, -43, 17, -120, 89, 53, -122, -63, 117, -85, 18, -39, -1, 57, 76, 91, 14, -27, -76, 9, 80, -38, 100, -11, 76, -41, -53, 47, -77, -40, 110, 124, -95, 97, -90, -63, 55, 62, -110, 94, -105, 108, 2, 117, -86, -67, -3, 112, 16, 9, 40, 126, 21, 119, -92, -45};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.4936747744621258);
    msg.setSource(3310U);
    msg.setSourceEntity(148U);
    msg.setDestination(43909U);
    msg.setDestinationEntity(89U);
    msg.base_lat = 0.9720277786649436;
    msg.base_lon = 0.4357555080767296;
    msg.base_time = 0.06645075611201334;
    const signed char tmp_msg_0[] = {-18, 11, 18, -124, 81, -12, 28, 14, -100, 10, 66, -63, 122, 70, -40, 85, 122, 38, -48, -98, -84, 41, -68, -80, 86, 76, 23, -32, 119, -39, -49, -77, 52, -106, 101, -44, 122, 89, 110, -78, 121, -38, -109, 52, -118, 17, -30, -1, -106, -112, -79, -12, 72, 106, -24, -76, -53, -120, 121, 49, 35, -23, 86, -89, -39, -37, -109, 65, 54, -45, -2, 120, -15, 68, -121, 90, 46, 109, -128, -118, -102, 31, -64, -35, -7, 64, 31, -86, -55, -93, 55, -123, -26, 27, -103, -64, -62, 94, 23, 81, 70, -119, 8, 11, 1, -128, 23, -127, 88, -10, -43, -73, -74, 102, 50, -27, -55, 27, -27, 52, 11, -31, 39, -49};
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
    msg.setTimeStamp(0.5792817098185616);
    msg.setSource(19895U);
    msg.setSourceEntity(211U);
    msg.setDestination(5871U);
    msg.setDestinationEntity(19U);
    msg.base_lat = 0.22990710302206985;
    msg.base_lon = 0.9380175630717225;
    msg.base_time = 0.9824402538486036;
    const signed char tmp_msg_0[] = {-21, 30, 61, -1, 78, -17, -10, 79, -52, 8, 85, -111, -32, -83, -73, 122, -5, -24, 77, -76, -25, 115, -43, 38, 53, 13, -116, -19, 102, -127, 93, -5, -40, -12, 117, -16, -74, -56, 32, -70, -36, 53, -31, -101, -67, -43, 75, 39, -95, 122, -61, -95, 119, -46, -20, 57, -78, -114, -123, 96, -51, -2, 73, 50, -25, -74, -99, 103, 60, -1, 85, -65, -63, -49, -123, -117, 39, -109, 75, 55, 6, 29, 52, -84, 21, 104, 52, 111, -53, -19, -128, -108, 36, -114, 123, -87, 48, 65, 94, 90, 63, 88, 93, -10, 48, 82, -70, -42, -68, 33, 86, -74, -29, 29, -65, 17, 36, -12, 93, 61, -58, -82, 2, 25, -20, 85, 99, -63, -126, 94, -123, 102, 44, 101, 100, 100, 24, -15, -106, 96, 65, 70, 109, -109, 96, -71, 58, 115, -62, 68, -11, -117, 6, 4, 90, 97, 117, 53, -70, 83, -40, -98, 97, -21, 5, 98, 103, 8, 28, 13, -64, -19, 113, -36, 121, 10, -15, -15, 93, 85, 48, 110, -35, 28, -18, 82, -57, -50, -6, -17, -42, 113, 81, 70, -110, -124, 39, 76, -109, 46, -126, -63, -81, -18};
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
    msg.setTimeStamp(0.6341524252945119);
    msg.setSource(1677U);
    msg.setSourceEntity(101U);
    msg.setDestination(25103U);
    msg.setDestinationEntity(69U);
    msg.base_lat = 0.22692309296804813;
    msg.base_lon = 0.48199030866251935;
    msg.base_time = 0.7967431543191508;
    const signed char tmp_msg_0[] = {-66, 76, 103, -66, 89, 6, -114, 59, 97, -67, -18, 26, -15, -62, -120, 47, 98, 122, 11, -30, -124, -20, 21, 108, -100, 90, 117, -35, 47, 3, 61, 124, -65, -3, -24, -92, -65, -91, -61, -85, -55, -51, -34, 76, -62, -5, 18, 76, 96, 106, 57, 0, 69, -2, -119, 116, -87, 90, -83, -57, 55, 68, -115, -35, -46, -87, 8, -48, 103, 14, 16, -36, 26, 97, -66, -33, -7, -31, -15, 77, -71, -38, -89, -121, -74, 106, 33, 43, -99, 12, -68, -22, -122, -16, 109, -19, 123, -86, -79, 7, -128, 27, 17, 125, -103, 84, -70, -10, -23, 79, 66, 19, -76, 111, 78, -31, 63, 42, -38, 17, 11, -88, -75, 67, 116, 4, 9, -37, -123, 38, 120, -128, -43, 95, -128, 90, 63, -80, -45, -9, -106, -59, -73, -51, -91, 4, 120, 100, 68, 30, 124, -44, -54, 20, 55, 10, 51, -24, -78, -59, 9, -26, 84, -98, 65, -81, 30, -55, 73, -115, -107, -17, 24, 25, -38, 31, 32, 95, -63, -35, -18, 54, -59, -114, -93, 42, 7, -3, -91, 64, -7, 104, 68, 38, -17, -28, 74, 74, -85, -6, -45, 0, 120, 12, -54, 77, 121, 36, 97, 55, -4, -35, -120, 29, -107, 98, 96, 86, -83, -16, -42, -6, 70, -44, -39, 6, -36, 123, -125, 98, 63, -9, -26, 71, -116, 121, -86, -110, -87, 6, 57, -68};
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
    msg.setTimeStamp(0.26320198446087417);
    msg.setSource(43598U);
    msg.setSourceEntity(75U);
    msg.setDestination(51000U);
    msg.setDestinationEntity(188U);
    msg.sys_id = 42308U;
    msg.priority = -75;
    msg.x = 23066;
    msg.y = -2052;
    msg.z = -7426;
    msg.t = 2438;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("PDSBKTGVQDJAWBMMCCZEYLIIBSRFBANZQHOJKPRAAVRNALFOOEGTWKUFSCXKXYPJZQXXNEAZHFNXBOIJWPUDSBTNETQBYLQKZFKLXYDLLIPPWVMGMKWKMILXWQUTZNSUQRZQHMOBYMRGUEWVLOJFCYVLEHRAQMJBRGSHUFESSWGFACEWKSUTCVXSDMETJFZGVWONUZCJDYGNFTHOJHJDRDCEVHAPCONPVYZDXLTIYRKIHGHTB");
    const signed char tmp_tmp_msg_0_0[] = {11, -94, -91, 27, 43, -45, 88, 101, -33, -101, -48, -91, -25, 106, 13, -117, -23, 56, -73, 83, 77, -63, 65, -2, 103, 121, 89, 48, 48, 19, 50, 76, 29, -85, 28, -29, 120, 80, 63, -74, 4, 74, -19, -118, 100, 73, -11, 73, -46, -71, 73, -48, 126, 38, 100, 58, -85, -1, 56, 119, 63, 13, -112, 116, 56};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.49863716442359385);
    msg.setSource(39831U);
    msg.setSourceEntity(38U);
    msg.setDestination(48733U);
    msg.setDestinationEntity(192U);
    msg.sys_id = 61430U;
    msg.priority = 120;
    msg.x = -17022;
    msg.y = -5949;
    msg.z = -18953;
    msg.t = 25749;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("KDTQPKLAKQYHOZCQMQLSTXBQMCZEATCXSTKXPIOKEDMGZHIIIAVLQRLYRACULNYTNDIULXNATQXUGSBLATOBGYFVFYJPJCULXWHMJGWEWZWCTHMKFLD");
    tmp_msg_0.state = 125U;
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
    msg.setTimeStamp(0.5252356984209714);
    msg.setSource(64811U);
    msg.setSourceEntity(148U);
    msg.setDestination(62017U);
    msg.setDestinationEntity(209U);
    msg.sys_id = 34443U;
    msg.priority = 24;
    msg.x = 27147;
    msg.y = 27722;
    msg.z = -26181;
    msg.t = -11753;
    IMC::SadcReadings tmp_msg_0;
    tmp_msg_0.channel = 17;
    tmp_msg_0.value = -954485096;
    tmp_msg_0.gain = 79U;
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
    msg.setTimeStamp(0.41135860955725945);
    msg.setSource(49187U);
    msg.setSourceEntity(164U);
    msg.setDestination(53191U);
    msg.setDestinationEntity(104U);
    msg.req_id = 56316U;
    msg.type = 35U;
    msg.max_size = 30535U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.2485839274724685;
    tmp_msg_0.base_lon = 0.36986572786594174;
    tmp_msg_0.base_time = 0.9709099549447973;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 63571U;
    tmp_tmp_msg_0_0.priority = -120;
    tmp_tmp_msg_0_0.x = -325;
    tmp_tmp_msg_0_0.y = -25747;
    tmp_tmp_msg_0_0.z = 32113;
    tmp_tmp_msg_0_0.t = 14465;
    IMC::PWM tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 119U;
    tmp_tmp_tmp_msg_0_0_0.period = 3769960829U;
    tmp_tmp_tmp_msg_0_0_0.duty_cycle = 2637284973U;
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
    msg.setTimeStamp(0.8231187026111099);
    msg.setSource(14997U);
    msg.setSourceEntity(206U);
    msg.setDestination(49198U);
    msg.setDestinationEntity(37U);
    msg.req_id = 59568U;
    msg.type = 141U;
    msg.max_size = 21408U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8201301450613738;
    tmp_msg_0.base_lon = 0.30924573156934954;
    tmp_msg_0.base_time = 0.22792182728909738;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 12728U;
    tmp_tmp_msg_0_0.priority = 37;
    tmp_tmp_msg_0_0.x = -9220;
    tmp_tmp_msg_0_0.y = -21727;
    tmp_tmp_msg_0_0.z = 21698;
    tmp_tmp_msg_0_0.t = -13712;
    IMC::ClockControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 34U;
    tmp_tmp_tmp_msg_0_0_0.clock = 0.23276724272974691;
    tmp_tmp_tmp_msg_0_0_0.tz = 71;
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
    msg.setTimeStamp(0.880928322529276);
    msg.setSource(58730U);
    msg.setSourceEntity(187U);
    msg.setDestination(1179U);
    msg.setDestinationEntity(109U);
    msg.req_id = 50514U;
    msg.type = 108U;
    msg.max_size = 14622U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.44125636611790164;
    tmp_msg_0.base_lon = 0.7537866332574801;
    tmp_msg_0.base_time = 0.5866245149367612;
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
    msg.setTimeStamp(0.07448875439200842);
    msg.setSource(51127U);
    msg.setSourceEntity(192U);
    msg.setDestination(44655U);
    msg.setDestinationEntity(85U);
    msg.original_source = 59398U;
    msg.destination = 35478U;
    msg.timeout = 0.4682465234537635;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 48806U;
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
    msg.setTimeStamp(0.4103455858962216);
    msg.setSource(22089U);
    msg.setSourceEntity(15U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(229U);
    msg.original_source = 57591U;
    msg.destination = 22257U;
    msg.timeout = 0.41062582578007345;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.7239470058632694;
    tmp_msg_0.v = 0.8183159352690234;
    tmp_msg_0.w = 0.653859643470888;
    tmp_msg_0.p = 0.9627028506371224;
    tmp_msg_0.q = 0.0041884891974587335;
    tmp_msg_0.r = 0.4145492001257284;
    tmp_msg_0.flags = 235U;
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
    msg.setTimeStamp(0.00925649739481782);
    msg.setSource(2245U);
    msg.setSourceEntity(89U);
    msg.setDestination(20003U);
    msg.setDestinationEntity(188U);
    msg.original_source = 432U;
    msg.destination = 20297U;
    msg.timeout = 0.5504411810572098;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 12324U;
    tmp_msg_0.lat = 0.2807016106688922;
    tmp_msg_0.lon = 0.7593077340240372;
    tmp_msg_0.z = 0.5511061899296236;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.speed = 0.4818549316863536;
    tmp_msg_0.speed_units = 114U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7191581952001164;
    tmp_tmp_msg_0_0.y = 0.5862703768542522;
    tmp_tmp_msg_0_0.z = 0.6452079638839592;
    tmp_tmp_msg_0_0.t = 0.735289699804458;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("PZKDFHBEOXGUSQJQHSKNATZSNEVHYCAEGMLHKNMMNLEGIRACIPYWRLFHPAPDIQHCFDCOTSUUOJWNFXXOTIWUMVTWVALSWEIOBTALFVNMQZJTYFWRVLAOKFHDGXZAPRZGHVBWUGKYCGLQ");
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
    msg.setTimeStamp(0.41703508610844);
    msg.setSource(3874U);
    msg.setSourceEntity(225U);
    msg.setDestination(22632U);
    msg.setDestinationEntity(62U);
    msg.type = 222U;
    msg.comm_interface = 53405U;
    msg.model = 5640U;
    msg.list.assign("LJPZESXLNDBZROBTPWQBVUMERRSPHFVFXDVWVHGIMZESOONKPAXTILSMBJAGBKEYNVVAYGGGICJTLNJWMVJTYLQYPGDQUSFUNRHPCQRLATECMNRYZIETYKFSWDLTONQUFXHXACOQGHBBHOFCPEBKKQNWZUVXOOAJITQGIGDSAKJJM");

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
    msg.setTimeStamp(0.5813038909957585);
    msg.setSource(40931U);
    msg.setSourceEntity(113U);
    msg.setDestination(16505U);
    msg.setDestinationEntity(185U);
    msg.type = 21U;
    msg.comm_interface = 41776U;
    msg.model = 62616U;
    msg.list.assign("SRQPTYCUICEHVQOFQMUJLQVAKMIHIYAMRXPLDUXWDSORVRORBOZY");

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
    msg.setTimeStamp(0.2620468019886093);
    msg.setSource(55510U);
    msg.setSourceEntity(107U);
    msg.setDestination(54820U);
    msg.setDestinationEntity(37U);
    msg.type = 110U;
    msg.comm_interface = 46722U;
    msg.model = 40109U;
    msg.list.assign("CXWXRPJDKEWQQXDNMFTVDIGGWFUIPLSPGMEACCTNPCRBOOLQJNXLPSQLWREJRYGLJYRUKEOCDZHEGOVSVZTYEHLKRAIZXL");

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
    msg.setTimeStamp(0.4970680012622317);
    msg.setSource(13194U);
    msg.setSourceEntity(84U);
    msg.setDestination(11637U);
    msg.setDestinationEntity(107U);
    msg.type = 81U;
    msg.req_id = 2008146021U;
    msg.ttl = 63228U;
    msg.code = 148U;
    msg.destination.assign("OOYXTVQATERICRXPYXPDBICQRFCPVNMMBHLDLKBCJDMRQYWMAOBAFVFSEZUXJNAUUXZMPPICJYUEAODDKGUPGTVREBIMHFDKIXUIHEJWFCLMYQWDYMFWAILZVNUENTKAZRWBWGBOWNFZBJGKRLWFFAZPOTYBLHMYQQUSTMVLLZHOVWKRJXAHOSCHSGUVETTSJIQIGSJDQLXRIFZCCOQYKVKHKZ");
    msg.source.assign("IYQXCCAXWTAIFWIEBPJYAADTIUKLZKTSNQPNROXZTEXWPBSGOWVFSBSVCCGGPQHKIJ");
    msg.acknowledge = 149U;
    msg.status = 5U;
    const signed char tmp_msg_0[] = {70, -72, -57, -31, -89, 23, -62, 44, -41, -63, 73, 63, -49, -48, -106, -77, -70, 87, 41, -46, 30, 123, -43, 75, 107, -81, -39, 59, 17, -94, -75, 117, -6, -86, 15, -67, 59, 126, 119, 38, 116, -38, 75, 24, -58, -28, 40, 121, 81, -88, -45, -47, 57, 13, -28, -25, -94, -120, -108, 83, -119, -83, -11, -32, 27, 90, -128, -112, 30, 70, -119, -91, 64, 126, 102, -72, -82, -110, 82, 87, -4, 37, -77, 114, 5, 41, -25, -95, -76, 78, -46, -2, -60, 44, 58, 25, -74, 41, -123, 121, -90, 83, 33, 45, 29, -11, -105, -110, -50, -10, 15, 67, 5, 13, 95, -30, -98, -107, 107, 105, -80, 10, 52, 12, -119, -93, 74, -1, 125, 13, 89, 61, 59, 73, 20, -120, 17, 10, 92, 101, 49, 82, -40, -70, -45, -97, -12, -116, 105, 87, 8, -100, 126, -65, 79, 89, 25, 81, -106, 67, 20, -121, -128, -91, -25, 37, 87, -68, 53, 115, 27, 29, -34, -53, -109, -26, 72, -57, -3};
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
    msg.setTimeStamp(0.20096945458608817);
    msg.setSource(20961U);
    msg.setSourceEntity(126U);
    msg.setDestination(19780U);
    msg.setDestinationEntity(189U);
    msg.type = 223U;
    msg.req_id = 866088030U;
    msg.ttl = 42457U;
    msg.code = 220U;
    msg.destination.assign("SIFUJZQFJTKHYCXHFOLUITTAKGCPIDKVP");
    msg.source.assign("VVKRRZTBVRBJZSNWOLZOXWGOOZSZFUWNMXEKRCAGMFBFXRDUGAWIMTCIGVVEJXWVHOYJPETSDSZNPAPYJSHEPNGFGZTBPNPGFDNMPABEUWIUNZNHCOSVMGDJBLMZHMIDCTHLFGQLYKTYKWFJCUWRQMNGKAQFATOQQIVKITQWYMRVLEQYMJCAPJTEXUCJKXYNEFDHOBAAQKILPDBWRYSHESCQVJSBHFCPBCUDUXI");
    msg.acknowledge = 247U;
    msg.status = 112U;
    const signed char tmp_msg_0[] = {-115, -4, -101, 21, 97, -115, 31, 12, -19, -59, 27, 85, 103, -122, 27, -108, 13, -106, 121, -102, -49, 47, -21, -9, 41, 37, -124, 110, -88, 32, 95, 71, 110, -101, 120, -10, 17, 83, 45, 32, 92, 93, 97, -117, -106, 67, 13, 75, -56, 91, 100, -24, -31, -85, 3, 38, -45, -35, 43, -13, -10, -82, 88, -99, -91, -25, 17, 104, 34, -121, 90, 9, 36, -97, -60, 99, 50, 24, -47, 88, 116, -62, -21, -6, 76, -120, -86, -53, 35, -111, 110, -88, 47, 103, -92, 62, 59, -126, -115, 42, 96, -68, 64, 92, 12, -9, -14, 53, -2, 102, -55, -63, -56, -83, -115, -9, 94, 116, 82, 28, -7, -104, -92, 22, -101, 61, -6, -71, 64, 20, 3, 82, 57, 67, 88, 94, -61, -106, 27, -122, -66, 50, 68, 36, 80, -81, 114, 54, 16, 8, 59, 98, 120, 117, 34, -5, 10, -18, 68, -36, 41, 13, 50, 90, -88, 38, 50, 116, 64, -88, 32, 28, -20, 47, -83, -103, 98, -17, -82, -25, 60, 35, 123, -71, -1, -83, 92, -6, 50, -41, 65, -103, -94, 83, -13, -64, 34, -18, -11, 69, -24, -2, -94, 2, 44, 6, -4, 31, -24, 66, -82, -63, 15, -28, -63, 61};
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
    msg.setTimeStamp(0.6935362474401412);
    msg.setSource(53214U);
    msg.setSourceEntity(23U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(165U);
    msg.type = 156U;
    msg.req_id = 3064022779U;
    msg.ttl = 11048U;
    msg.code = 195U;
    msg.destination.assign("AYJRGEKLTTZFHIPNYLCPIF");
    msg.source.assign("RIUFQTOGZFP");
    msg.acknowledge = 76U;
    msg.status = 148U;
    const signed char tmp_msg_0[] = {-41, -98, 52, -20, -98, 15, -128, 6, 88, -114, 91, 7, 43, 54, 114, -128, -69, -75, -36, 41, 73, -100, 35, -118, 48, -83, 98, -58, -41, -47, -109, 6, -8, -14, 122, 83, -54, 68, 47, -110, -17, -98, -34, -88, 118, -26, -114, 26, -33, -71, 95, 93, -8, 4, -124, 46, -32, -43, 42, -30, 41, -120, -101, -114, -93, 102, -8, 37, -33, 7, -63, -16, -71, -64, 45, 47, -60, -101, -10, -61, 63, 0, -123, 35, -21, -2, 79, -84, 44, -104, -101, -10, -22, -40, -120, 85, -94, 65, -113, -72, -10, 104, -81, -116, 114, 52, -123, 120, -59, 75, 105, 112, -47, -78, -127, 80, -71, 106, -113, -118, -2, 96, -68, 92, 17, 59, -46, -28, -89, 45, -13, -35, -96, -91, 105, -19, 24, -58, -65, -70, 3, -123, -103, -123, 113, 22, -38, -71, 103, 109, -50, 117, -14, 123, -78, 59, -44, 111, -123, -28, 48, 33, -54, 7, -7, 102, -111, 52, 31, 48, -66, 107, -14, 37, 0, -126, 69, -89, 35, -76, 37, -108, 120, -54, -45, 119, -19, -83, 106, 44, 116, 5, -67, 85, -101, 98};
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
    msg.setTimeStamp(0.9080099191465416);
    msg.setSource(43858U);
    msg.setSourceEntity(233U);
    msg.setDestination(58124U);
    msg.setDestinationEntity(97U);
    msg.id = 193U;
    msg.range = 0.7035743667871688;

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
    msg.setTimeStamp(0.27587276819099427);
    msg.setSource(28802U);
    msg.setSourceEntity(244U);
    msg.setDestination(30419U);
    msg.setDestinationEntity(83U);
    msg.id = 114U;
    msg.range = 0.4246746052035987;

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
    msg.setTimeStamp(0.4462301072610261);
    msg.setSource(52322U);
    msg.setSourceEntity(133U);
    msg.setDestination(64030U);
    msg.setDestinationEntity(1U);
    msg.id = 205U;
    msg.range = 0.12449302194951006;

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
    msg.setTimeStamp(0.7101326880769344);
    msg.setSource(22388U);
    msg.setSourceEntity(213U);
    msg.setDestination(52221U);
    msg.setDestinationEntity(103U);
    msg.beacon.assign("STMPYNBIQNANJTEVZXPOQPJYTGDLEAPODNBMIHFLUHKMLYQSJQAUSGNSVVJYFJGFAQXCWYQKIADSUUCBRIVMZGKJYRIROHEOCWOPKOMVCVSWSFFYVXOCZGWLBBLIZYFRAUVWLUIUSFKOTLCBWJGWPYEBLSCRHPRZAMWYTEDIXRUIQHFFZCEDOEOXZZUKTKGUKHHGAVVLAXDPDTRGFBHINHXRGJRMBMNNMZEMWQAHJDEQXNNTCE");
    msg.lat = 0.08964070865949547;
    msg.lon = 0.8718610086513604;
    msg.depth = 0.2069199081739369;
    msg.query_channel = 239U;
    msg.reply_channel = 214U;
    msg.transponder_delay = 137U;

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
    msg.setTimeStamp(0.049702011165558724);
    msg.setSource(54519U);
    msg.setSourceEntity(12U);
    msg.setDestination(59965U);
    msg.setDestinationEntity(30U);
    msg.beacon.assign("XQCNEOLGADOQPMGSORWZWVARNTOFJDGVQICLIVXFDFXXUBYHLPWSFJJYSBSCREOCESYITIMTTWRNZHZDFPWVYWQUGLNBTKZIMGBEOEVYATHPPBEGESCNLANAATJBIDXNADKWQJUJJVZAMEQCRDASSJMYVKSQHYGEEUQKFINWSIIMPMHFTBZYXYGUPIJHGHOYBMDKPVUORTGFXRLLXNUTBHZRFZO");
    msg.lat = 0.9502833703329533;
    msg.lon = 0.8247040587780098;
    msg.depth = 0.19214202912643685;
    msg.query_channel = 212U;
    msg.reply_channel = 155U;
    msg.transponder_delay = 189U;

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
    msg.setTimeStamp(0.7307422072089051);
    msg.setSource(45880U);
    msg.setSourceEntity(190U);
    msg.setDestination(10466U);
    msg.setDestinationEntity(208U);
    msg.beacon.assign("CUVWBSIOGQCNSXLOCYQSQKWKBSYYJKMXQQFSMIGNULUSQTGBKLOPNUGFPYXEMLOAFHVUZWLREBENMVBXVXHGDPDRZYHDFIIQJMTHJKPFAHABIPWTKQDOHJXTCEURENBXGAKBNMNKWJIBYCPVOEFVTATOPCMLWQDLVRQCDRYVABZSWRATGOWWCACHNCKEFGLEDPXOZMHPAZZUGXYFFRJMFSJOEDKIDIHEZLZXHVYUJJTIRGTAZUR");
    msg.lat = 0.6488970045268848;
    msg.lon = 0.3814086652311124;
    msg.depth = 0.5160776357369881;
    msg.query_channel = 193U;
    msg.reply_channel = 134U;
    msg.transponder_delay = 68U;

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
    msg.setTimeStamp(0.9281934626576847);
    msg.setSource(48654U);
    msg.setSourceEntity(229U);
    msg.setDestination(62996U);
    msg.setDestinationEntity(195U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.24770515833751472);
    msg.setSource(60352U);
    msg.setSourceEntity(219U);
    msg.setDestination(5190U);
    msg.setDestinationEntity(229U);
    msg.op = 242U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LFNDMLLYJHSXIYIHEKVAPPNDNZILNCSALXHMZHYTRNRZQGBTOJZVCPQHZYVPCNHSJTXDTQXALOEULGEVRBUSXAOGPFQYKCZKCMKWNFMDNFMQTRWKDQZGEPPVGOUSJIDVARAZXUCEYJIWVEGMQHDTOJBMEFULWORWGWNYQCXVBAIOEJIXOKFMTFKJMSLWZPJVTIFBQDGDKGIOEWUTXUYBNB");
    tmp_msg_0.lat = 0.7631298785252579;
    tmp_msg_0.lon = 0.49810238131345896;
    tmp_msg_0.depth = 0.2795207924163283;
    tmp_msg_0.query_channel = 188U;
    tmp_msg_0.reply_channel = 167U;
    tmp_msg_0.transponder_delay = 150U;
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
    msg.setTimeStamp(0.9003669902306821);
    msg.setSource(5855U);
    msg.setSourceEntity(217U);
    msg.setDestination(37880U);
    msg.setDestinationEntity(36U);
    msg.op = 61U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BCKADLQNDSOROFVEUPWTAYDXWDNZEIHBDHGACRQPAMECNHMWKKHDGKHIWIDFBEXIIOUNZPXNIOVUYMZLKHEWHFQINSGYVTFFMGJFBULYHXRJSOTOLRVEZAJTIOCDSNMAPJAZSPLTMVLWDLNUCLMZBGFFZXJMPBCXOQUZIRWFQVUQQSHQYEJGWJKBGXYKSPUOMNX");
    tmp_msg_0.lat = 0.6583957582944436;
    tmp_msg_0.lon = 0.13538114963452286;
    tmp_msg_0.depth = 0.19006062463979134;
    tmp_msg_0.query_channel = 35U;
    tmp_msg_0.reply_channel = 162U;
    tmp_msg_0.transponder_delay = 224U;
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
    msg.setTimeStamp(0.7891837036744738);
    msg.setSource(42320U);
    msg.setSourceEntity(142U);
    msg.setDestination(26059U);
    msg.setDestinationEntity(22U);
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 121U;
    tmp_msg_0.command = 131U;
    tmp_msg_0.settings.assign("QYLWAULMVWJ");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 18978U;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.16712118625127848;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.033741966676176016;
    tmp_tmp_tmp_msg_0_0_0.eta = 429116030U;
    tmp_tmp_tmp_msg_0_0_0.duration = 14563U;
    tmp_tmp_msg_0_0.waypoints.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("FPSUXJGQOQUNCRFXNCWSEAPIJXBNCHAG");
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
    msg.setTimeStamp(0.1920900323474889);
    msg.setSource(50021U);
    msg.setSourceEntity(216U);
    msg.setDestination(49508U);
    msg.setDestinationEntity(189U);
    IMC::Displacement tmp_msg_0;
    tmp_msg_0.time = 0.7840955463264494;
    tmp_msg_0.x = 0.8327726175085088;
    tmp_msg_0.y = 0.07661585282013705;
    tmp_msg_0.z = 0.8349574299083983;
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
    msg.setTimeStamp(0.20535905603533644);
    msg.setSource(15714U);
    msg.setSourceEntity(241U);
    msg.setDestination(33029U);
    msg.setDestinationEntity(148U);
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9711252335047144;
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
    msg.setTimeStamp(0.670556607019677);
    msg.setSource(17815U);
    msg.setSourceEntity(152U);
    msg.setDestination(39507U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.5767287354726083;
    msg.lon = 0.6341589722306666;
    msg.depth = 0.7572016852014942;
    msg.sentence.assign("XVQKUADJTZJCVALHKZIMFZPETIOVBDFWUAGSCUQCBRPXNDEDIGKONIJNHKWSACQLOIUSZAUXHMOMJBSOSEPFVPTKENCLECYNAGXRUBMERHGPJLLZZNOFRUIBGIYGRJVSWXYOKBBQGAHZGATHPDXYQYPWOKSDLUQFNMCRGSZLO");
    msg.txtime = 0.7628074514660942;
    msg.modem_type.assign("DDZLPYAAAJFTIFQPMZZXUOUIOMPWWPQXRQFRMYNTBUOGNLLVAWEVIUHWBHSTZRFHFYSOHLOISAEJAMYMCNEGPSGJBLKMYYQVGNDIIQXIGRNZUMLWYUVTCBUVCQAGWSICNVRZJTSQEXNWOWMKVPTSJECBQFMTBSONEVYCDXJDCDLKWBDBUXLKAKTIOKRGAXSKPFHHTJNMQZGZGXRJETYJEK");
    msg.sys_src.assign("ALJCMVLYTSWOXKFGHUEBBWTNGVLKKWQTEJIFWTIZIDKBAVSIZUSVQWBEFBMXCFHXOASJXYCSGUH");
    msg.seq = 37067U;
    msg.sys_dst.assign("ZQILIFYTZCKJIKTVBVXUMNVMEYGPBNPMSEBCSXEXPWEFJNMDWWSQUAMCU");
    msg.flags = 145U;
    const signed char tmp_msg_0[] = {30, -60, 92, 64, -80, -29, 64, -17, -95, 22, 17, -72, -63, 38, -124, -126, 30, -111, -119, 2, 54, -119, 66, -23, 73, -66, -57, 25, 19, 45, -85, -116, 95, -26, -56, 0, -77, 71, 49, -113, -93, 79, 90, 49, 54, -4, -114, 18, -79, -57, -30, 109, -44, 58, 93, 11, 108, -81, 78, 98, 120, 47, -9, -32, -126, 97, -68, 110, 91, -77, -53, -24, 7, -65, 27, 32, -128, -14, -98, -18, -19, -104, -94, -4, -114, -21, -120, 61, 113, 117, -92, 70, 56, 44, -122, 56, 124, -101, -80, -115, -42, -77, 78, -41, 68, 50, -115, 56, 39, -115, 74, 23, -6, 87, 89, -114, 79, 73, 95, 10, -125, -24, 102, 97, 98, 10, 31, -7, -28, 39, -115, -125, 113, -81, 74, -101, 67, 33, 100, -12, -104, 84, 60, -73, 60, 76, -111, 51, -63, -6, 73, -124, 80, 5, -96, 41, 63, 114, -110, 92, -38, 19, 17, -114, -107, -91, 111, -121, -23, -64, 0, 67, -99, 91, -42, -75, -13, -67, 2, -9, -115, 17, -102, -109, -87, -66, 93, 123, 37, -104, -27, 108, -108, 101, -81, 6, -25, 31, -13, -125, 30, -113, 72, -29, 76, -53, 78, 93, 100, 82, -10, 19, 17, 73, 52, -99, -79, 13, -58, -25, -6, 9, 89, -105, -79};
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
    msg.setTimeStamp(0.0516908570658976);
    msg.setSource(49742U);
    msg.setSourceEntity(223U);
    msg.setDestination(23540U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.42450032475447264;
    msg.lon = 0.8289404296872251;
    msg.depth = 0.5135300245191616;
    msg.sentence.assign("XIKPZAQAMWCREDQHBLAFAGIRJFCBZUFZUVTXBHWZCJSBVYQSQSZJSXWXJADRNPGSCXUYHWMBVVSWOIPMIAFYRNFUANWIHDKSFNKKHIPYVAGQEXCXMRCLTNKOUKPHLJMGXIZQDBQSMWTUTUGOQFDOERRBLKLIETKC");
    msg.txtime = 0.6088012143584937;
    msg.modem_type.assign("ZFLVKNQXOHGIPHIJCEKNSIUCYEPGOJODGBLAFBUODZWKCDJPWBRJTBTVCXEZZVRVSNDOLJMAFETNYNQFTRBYGXMDVBQHMDXBUSLGRRPASHNPCLAMQIQSKIOVDZHSYAJONUCTSZFTALGSAULHFVMXBQJLQXSUKKCMXIQCXMPTNCYOBVYDFUYPJPZEPGNEHXFWYIHFSRVBUTKLIYEILARCHD");
    msg.sys_src.assign("TVVVNSXFRHBOJBQZHPDOSIWEJWZYHKWYNYBUQESLOYOSTIFBRMCJJJAPUOHTRARJFZVDLOXVLXCMNMPBEGNMBQWYIMNPLIGW");
    msg.seq = 22454U;
    msg.sys_dst.assign("OYWNRGITKVKQTMQJUKSHMRYUVUMHICEQJBDGJBRRCTDCWZAQAFHGLFZZWNOHFTMJGYNUMNPNHMYXW");
    msg.flags = 144U;
    const signed char tmp_msg_0[] = {-114, 111, -34, -119, -22, 11, -115, 90, -41, 106, 116, -42, 55, 33, 50, -96, 74, -89, 106, 54, -7, 4, -96, -13, -46, 56, 72, 95, -30, -42, 78, 65, -26, 66, -113, -116, 57, 76, 85, 27, 100, -44, -126, 10, -10, 53, -90, 100};
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
    msg.setTimeStamp(0.30907837141238304);
    msg.setSource(23602U);
    msg.setSourceEntity(6U);
    msg.setDestination(1296U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.42004220839709194;
    msg.lon = 0.4809589929149388;
    msg.depth = 0.3112027410850663;
    msg.sentence.assign("SSWZUIVBSUQBXDZDOEMGONAIEPLYTDHWXQWYIBMDTXPPJCXSLRZTUVTPVPUGDVTORCLHMLKZNXDHEDEYKWBMHOS");
    msg.txtime = 0.6125317731682588;
    msg.modem_type.assign("BAPBRVPGLVDYDIXOTRNVHTYJEEOSGAYGIYKYHLGFQCRNDSZSRQNGVLYEMYDWJPXICBJWSKZNFQZRLQUMKDOJNNXNASZMLCC");
    msg.sys_src.assign("EEJCMFNWLVOUGOYKKHLSKBURTISUWKGZVQEDOFZWCPGZTVFMQIBTAMPAWMIJLCCGFNFKBVTTCPNWZHWSHDSQGWXFHORTCMAIIVUOSBBTHMNNTVFXJBEXPQRQRMGKEGMRUHSCDHDSSDRLWAZXEOVLINJQYKNOJLGXBPLZMQOHYIBPQYPBCUYBUAJXGIKWPZWEXYNQRNXEADFYSNARJJUDGAUTPXFVIULOVDHSLAJID");
    msg.seq = 31227U;
    msg.sys_dst.assign("KFSYQFLOIXDAQADEBTNKURWDLQJHNDQSTFANKOMXHAJSDJADHBTWCAMXTQEVOWFDFSMBPWRHDIHZZVOVUTPWYVZEOMHGYUACSLYBVKXLRUPTPTCHKIAMEXQXLCCVRVCYSHYOZGEVRZUKJIFQJZARWTNIPEMNBWMEFSPPZLIWJLYICNYKBBDJJQOBRKOGFLYXUHEULEPPQVWIRXJGSGZTBINBNQRCHMCFMKPSSFUCEGGWZXUIGNTGGYAJDZO");
    msg.flags = 166U;
    const signed char tmp_msg_0[] = {-13, 54, 34, 60, -82, -103, 123, -107, -52, -127, -53, 108, -23, 69, -103, -12, -35, -96, -115, -54};
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
    msg.setTimeStamp(0.09056469703679448);
    msg.setSource(1724U);
    msg.setSourceEntity(118U);
    msg.setDestination(3459U);
    msg.setDestinationEntity(1U);
    msg.op = 64U;
    msg.system.assign("NGMTUXHDANUKCXOICTSLHFAMCXFSLJBEGKUQLODGYMJEIYZSNDGOBELYIRFVWOKSIAVPPWWYZMYZCYDBVKNS");
    msg.range = 0.7249219333763236;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.8378454255380714;
    tmp_msg_0.z_units = 220U;
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
    msg.setTimeStamp(0.1656118791877973);
    msg.setSource(52416U);
    msg.setSourceEntity(174U);
    msg.setDestination(25921U);
    msg.setDestinationEntity(238U);
    msg.op = 52U;
    msg.system.assign("JRNXWSSCOAVHAFNXWFRBXYHLKRKQGRIGGCYWXYYKLUDASFEEXNXZUEOPTVNULWUQMKGRBOOBOJKTMCTKIKLPSBPNRJGXBTBURVTHZIEQUDQQVCCFDIMDMVHLYMM");
    msg.range = 0.44638240007781615;
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.8007429277291266;
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
    msg.setTimeStamp(0.785407071393967);
    msg.setSource(60532U);
    msg.setSourceEntity(206U);
    msg.setDestination(46364U);
    msg.setDestinationEntity(193U);
    msg.op = 229U;
    msg.system.assign("DLWSYICQWXRVQYQRIMFDOICCGTMNRBIXJXPVUJNCZMVYLEOTQVBUOYZMHKLFOIATNBYFSNEMKVBBNAWTYAISGETRSRJDUGDIPCPUPROALMHTZBYWNUEPQCVIXKXFRMICQAVQHLWGDZODCGEJKFFZTQAGJHFXDNRCUWZHLHVFXWJKSBSKAEFLQWKOTHIZJFQBMYONM");
    msg.range = 0.0016641371040374553;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 21335U;
    tmp_msg_0.lat = 0.9682624384216822;
    tmp_msg_0.lon = 0.5222661522015801;
    tmp_msg_0.z = 0.49954882956791635;
    tmp_msg_0.z_units = 67U;
    tmp_msg_0.speed = 0.8139454357107702;
    tmp_msg_0.speed_units = 179U;
    tmp_msg_0.custom.assign("PRJRCSORFDOXUYOVPLQVUFVIEBHZWTFFDJMEEPVEJHTCUYLPROVWRSZMNJHUTZSZSBVXKKVHAKOTUWWTPTXZJLZRIPXWLXCTDMTFCJCUYRQFA");
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
    msg.setTimeStamp(0.004234095057601306);
    msg.setSource(50146U);
    msg.setSourceEntity(200U);
    msg.setDestination(59795U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.42145475915835595);
    msg.setSource(52211U);
    msg.setSourceEntity(171U);
    msg.setDestination(21696U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.40205063673481267);
    msg.setSource(2353U);
    msg.setSourceEntity(65U);
    msg.setDestination(21020U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.7498682150480568);
    msg.setSource(62697U);
    msg.setSourceEntity(184U);
    msg.setDestination(7972U);
    msg.setDestinationEntity(191U);
    msg.list.assign("XWVDNHYFSSPFWGUJZTKXQILBVUJISBOYIEXISXXAZFTOUDDVBCCBIFVYUUSDYUTSXIIMOJPHNMSZQZYCBPEESVZEMGKONCJRTKVVLWWQDNKCRQKSXMMCIRTOWCBRUAFUTRLKKZEKGMLMHPEEOGTGLAIQGSPYPUYBTFPOOWLRQAGJVXUAODAAWCKNRQATWRJDBFKCMZFTZQHIDMJJJ");

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
    msg.setTimeStamp(0.755151811730622);
    msg.setSource(2466U);
    msg.setSourceEntity(108U);
    msg.setDestination(38329U);
    msg.setDestinationEntity(220U);
    msg.list.assign("QNDRMSEJWFDVGNBYHYRHNBSQMFEPHLPMRCAWRMLVHMBTIIZYVOJHFQJTBGYEHLKYNFGMXIIQCCDKXWEAUUUUDMLXRACOAZJVGAZSWJEOFTJGKQC");

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
    msg.setTimeStamp(0.7475451119940915);
    msg.setSource(57352U);
    msg.setSourceEntity(87U);
    msg.setDestination(35514U);
    msg.setDestinationEntity(185U);
    msg.list.assign("GEDXJOSZVRMFKALROIJGXMJBOQMLEJNPFFBHSZNOIDSTGTKYUCIUOGAVBGWQENZNCRBXBHHUCAAPUDMDYNGFU");

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
    msg.setTimeStamp(0.7508126745568781);
    msg.setSource(2168U);
    msg.setSourceEntity(232U);
    msg.setDestination(62542U);
    msg.setDestinationEntity(28U);
    msg.peer.assign("CXVPNGFKEVRMYCAXKKTMRTYSTFRIBKSUUQPBQADIMXZHZDALEPOHHPIRJZMBUONRWLNEQQFLYVMIXEHCGDSDBNNGFHHWRWTOYWTCOJIGOZTNWJGJIVYHWRWGWKNVZZBTRHXXUMMDRSEIBXQVBBMUSAOALHFWRLAJVQOKJCOPPFSYQLMTIDEXSUEAGSCCJSHEBVFFKPOFP");
    msg.rssi = 0.22981989048427665;
    msg.integrity = 62118U;

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
    msg.setTimeStamp(0.9087880732440695);
    msg.setSource(21748U);
    msg.setSourceEntity(144U);
    msg.setDestination(65109U);
    msg.setDestinationEntity(9U);
    msg.peer.assign("BUIJIDIOTSBOCYKDBCNEVKMXPCZSTYJQSIOWOBHNSSHPKDLKQANNVJWKTFZLHHD");
    msg.rssi = 0.4209151849467262;
    msg.integrity = 35367U;

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
    msg.setTimeStamp(0.9731577764614713);
    msg.setSource(31205U);
    msg.setSourceEntity(99U);
    msg.setDestination(15327U);
    msg.setDestinationEntity(17U);
    msg.peer.assign("PIIUZBGSFGNENVPBTZMCAIQNWCHGIXYZNJUFDNYBVTOVUQRBXPLJKPEZBYUJECTRXSRNACKHQRAMQDMPTUPXYJWTTOZMEWECHTERHVZPZBITYFDAUFAIGMTCHQPEXAYLFRNWJBMWCODFALNNVLUQLYIOQPAAFWSJZGLMBSPGGQERORVTNKOHXVASMKWKOXJBECLYFGKDMZXYUSM");
    msg.rssi = 0.42537495858797714;
    msg.integrity = 60008U;

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
    msg.setTimeStamp(0.8716985398502585);
    msg.setSource(23785U);
    msg.setSourceEntity(5U);
    msg.setDestination(7955U);
    msg.setDestinationEntity(8U);
    msg.req_id = 33644U;
    msg.destination.assign("IHOBNEVGQFAVMIRGROPNPHURXKSLIYVNHONUFZAIWATHSZVZGANBAYZYUQZNEWCLCKTGLBMTWLKUICCGYXRDGOTXEMXABLJVCIJKJKWZGSMSSHZM");
    msg.timeout = 0.3798483163675612;
    msg.range = 0.37291153615757644;
    msg.type = 225U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.8555178876573061;
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
    msg.setTimeStamp(0.11250244850471669);
    msg.setSource(21206U);
    msg.setSourceEntity(33U);
    msg.setDestination(60883U);
    msg.setDestinationEntity(54U);
    msg.req_id = 37392U;
    msg.destination.assign("BQPNXMVFSKBPHPDDQZTAVELFYMMYIHJKDWDUERHUZFBVBGIVGAHUIQLHYBAUFUNJPGOXPMXZRLSILTAQOLMUOYGSIMWYVEGAAOXURHXOSXYIGZV");
    msg.timeout = 0.21611215657145166;
    msg.range = 0.23307107719829212;
    msg.type = 105U;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.8678194080586382;
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
    msg.setTimeStamp(0.9555159315061497);
    msg.setSource(39454U);
    msg.setSourceEntity(84U);
    msg.setDestination(16318U);
    msg.setDestinationEntity(22U);
    msg.req_id = 32481U;
    msg.destination.assign("QPDLHERLIPKVXGEFSMFDXOUPYGCEIYVYDZUOVKUMXRMPRSQLHBFWOWTTPHUTEKEIPDKOWCZQUAPLXEQSVILALIIMNHZFHGODCGETUXIRFBYGLSUYXQHDJXA");
    msg.timeout = 0.7072381149180816;
    msg.range = 0.9671727134621547;
    msg.type = 153U;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.9403775451569018;
    tmp_msg_0.lon = 0.4773773629880851;
    tmp_msg_0.depth = 0.7363754668409128;
    tmp_msg_0.roll = 0.20549054399102784;
    tmp_msg_0.pitch = 0.31609748809389004;
    tmp_msg_0.yaw = 0.6906577132369505;
    tmp_msg_0.rcp_time = 0.8199877735059758;
    tmp_msg_0.sid.assign("TUZPVTMUQALNIXRXPSWRKNKDJVQCSALJMBJATPZILMRZRYVDCIFMEFIIQKEXCXEWARQZVKMDAJXYGGAQFQOJHOZXZBSQWXGYBTUOYISXGVWLWDASYXVVPBEMLNELGHSMWOVKKJLDNZBCJHHIBK");
    tmp_msg_0.s_type = 2U;
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
    msg.setTimeStamp(0.993168648939273);
    msg.setSource(11479U);
    msg.setSourceEntity(92U);
    msg.setDestination(51864U);
    msg.setDestinationEntity(237U);
    msg.req_id = 51097U;
    msg.type = 249U;
    msg.status = 124U;
    msg.info.assign("NPTKLRDCDQSXAFIYZWB");
    msg.range = 0.0876335421657426;

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
    msg.setTimeStamp(0.656580660165222);
    msg.setSource(15186U);
    msg.setSourceEntity(40U);
    msg.setDestination(29424U);
    msg.setDestinationEntity(207U);
    msg.req_id = 34430U;
    msg.type = 99U;
    msg.status = 169U;
    msg.info.assign("RLAGHBXFKENACUERQJXFRZBSCOBLYNXDYPNIELXOICNDAROLJMGABKWNIVHUGSUMIOUEZDDKKHURNWDQCGSOYJEXFVBDGQMJYSVVPSHHIJONPGYNUTEVOPMTPJFEFIBPQSMLMGKANCFWPTVFQLKTDWCMSYTIQXMULVSMTVEKZRCBIXVOHIBZAULSYURWOLFTAHBJTTNBQYWTF");
    msg.range = 0.7609674983193351;

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
    msg.setTimeStamp(0.8591262040390644);
    msg.setSource(19644U);
    msg.setSourceEntity(82U);
    msg.setDestination(35064U);
    msg.setDestinationEntity(24U);
    msg.req_id = 55181U;
    msg.type = 190U;
    msg.status = 30U;
    msg.info.assign("LQQUVKKEFUYYVSEOQNXXNYGVIEHLKCGSMMQRPFHRIZHBVDETGJDQCG");
    msg.range = 0.05761042588939835;

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
    msg.setTimeStamp(0.38684372705404946);
    msg.setSource(35288U);
    msg.setSourceEntity(201U);
    msg.setDestination(21111U);
    msg.setDestinationEntity(31U);
    msg.system.assign("JQGLCFSRZBCQFJAKLFHUHZVLITNVYGPRXINZLEMJAGFGTJOAHIVTWTWUNHXRPZABKBUPKFXMAJYORK");
    msg.op = 117U;

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
    msg.setTimeStamp(0.1630117903787054);
    msg.setSource(1546U);
    msg.setSourceEntity(133U);
    msg.setDestination(65068U);
    msg.setDestinationEntity(122U);
    msg.system.assign("ENJKYMOHQBVRUBZIRPRGCIPTAMRTKTCTNLOEFTVAAOFDJNLGLRKGCWYWVUGIJKJQQHBIJYDAUJBUMHJREQYLLMBNXZVJCURXDWOIQGZAPWSNNAPMPQUFWPADJRDTBKKCGHSLVFZTEVZRCEMBUXKLXII");
    msg.op = 37U;

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
    msg.setTimeStamp(0.5728573936918261);
    msg.setSource(44670U);
    msg.setSourceEntity(44U);
    msg.setDestination(58871U);
    msg.setDestinationEntity(65U);
    msg.system.assign("QPJUOTNLTWHCKMFKUODEJCYFEMLITHEEFYBSGCCCBCKVMQTSD");
    msg.op = 87U;

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
    msg.setTimeStamp(0.4566493564177567);
    msg.setSource(49397U);
    msg.setSourceEntity(170U);
    msg.setDestination(27427U);
    msg.setDestinationEntity(41U);
    msg.value = -16318;

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
    msg.setTimeStamp(0.8574564906149725);
    msg.setSource(48950U);
    msg.setSourceEntity(241U);
    msg.setDestination(19825U);
    msg.setDestinationEntity(105U);
    msg.value = -4543;

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
    msg.setTimeStamp(0.6320707018239987);
    msg.setSource(17548U);
    msg.setSourceEntity(160U);
    msg.setDestination(49411U);
    msg.setDestinationEntity(8U);
    msg.value = 31588;

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
    msg.setTimeStamp(0.9567568972284766);
    msg.setSource(20220U);
    msg.setSourceEntity(248U);
    msg.setDestination(43581U);
    msg.setDestinationEntity(91U);
    msg.value = 0.07498374975884314;

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
    msg.setTimeStamp(0.5028066908242335);
    msg.setSource(10730U);
    msg.setSourceEntity(67U);
    msg.setDestination(32591U);
    msg.setDestinationEntity(21U);
    msg.value = 0.8174209982831042;

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
    msg.setTimeStamp(0.35395586044529304);
    msg.setSource(39856U);
    msg.setSourceEntity(174U);
    msg.setDestination(21066U);
    msg.setDestinationEntity(149U);
    msg.value = 0.5767619799442514;

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
    msg.setTimeStamp(0.4887697573634906);
    msg.setSource(46417U);
    msg.setSourceEntity(110U);
    msg.setDestination(34306U);
    msg.setDestinationEntity(144U);
    msg.value = 0.43246286431249426;

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
    msg.setTimeStamp(0.9136798719480324);
    msg.setSource(33082U);
    msg.setSourceEntity(37U);
    msg.setDestination(52588U);
    msg.setDestinationEntity(2U);
    msg.value = 0.5811924522542158;

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
    msg.setTimeStamp(0.3947720684352005);
    msg.setSource(36490U);
    msg.setSourceEntity(59U);
    msg.setDestination(44383U);
    msg.setDestinationEntity(171U);
    msg.value = 0.656717704120868;

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
    msg.setTimeStamp(0.4264327757890166);
    msg.setSource(56498U);
    msg.setSourceEntity(228U);
    msg.setDestination(48305U);
    msg.setDestinationEntity(75U);
    msg.validity = 55716U;
    msg.type = 19U;
    msg.utc_year = 20081U;
    msg.utc_month = 232U;
    msg.utc_day = 6U;
    msg.utc_time = 0.5324948974544396;
    msg.lat = 0.28215891588157993;
    msg.lon = 0.025820590337814364;
    msg.height = 0.8592199374531323;
    msg.satellites = 39U;
    msg.cog = 0.12221418214585644;
    msg.sog = 0.33562511486636504;
    msg.hdop = 0.19058554988247045;
    msg.vdop = 0.17394551471476605;
    msg.hacc = 0.6455019051997228;
    msg.vacc = 0.7894515298360869;

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
    msg.setTimeStamp(0.5770740965796634);
    msg.setSource(61745U);
    msg.setSourceEntity(146U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(214U);
    msg.validity = 18328U;
    msg.type = 225U;
    msg.utc_year = 13652U;
    msg.utc_month = 118U;
    msg.utc_day = 128U;
    msg.utc_time = 0.14089943460188892;
    msg.lat = 0.2489124149484574;
    msg.lon = 0.05702755050886754;
    msg.height = 0.42908760694867476;
    msg.satellites = 173U;
    msg.cog = 0.618580541232006;
    msg.sog = 0.6413602348236404;
    msg.hdop = 0.3059260699604449;
    msg.vdop = 0.11815846228316285;
    msg.hacc = 0.08618954812161639;
    msg.vacc = 0.5300860584331759;

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
    msg.setTimeStamp(0.7718745715345856);
    msg.setSource(31706U);
    msg.setSourceEntity(239U);
    msg.setDestination(48743U);
    msg.setDestinationEntity(203U);
    msg.validity = 64089U;
    msg.type = 79U;
    msg.utc_year = 49440U;
    msg.utc_month = 146U;
    msg.utc_day = 94U;
    msg.utc_time = 0.6821660719896141;
    msg.lat = 0.12932901748871528;
    msg.lon = 0.483946687538388;
    msg.height = 0.8354572395550889;
    msg.satellites = 164U;
    msg.cog = 0.9632557716934378;
    msg.sog = 0.5125124210889268;
    msg.hdop = 0.2075594377415403;
    msg.vdop = 0.08485471368064756;
    msg.hacc = 0.5342917449262264;
    msg.vacc = 0.1188827628903274;

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
    msg.setTimeStamp(0.26463717643210294);
    msg.setSource(9761U);
    msg.setSourceEntity(113U);
    msg.setDestination(32542U);
    msg.setDestinationEntity(53U);
    msg.time = 0.6494618011325106;
    msg.phi = 0.17173030539704892;
    msg.theta = 0.13746732701304654;
    msg.psi = 0.14217140284067276;
    msg.psi_magnetic = 0.28347772562992113;

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
    msg.setTimeStamp(0.6420654360016089);
    msg.setSource(51742U);
    msg.setSourceEntity(171U);
    msg.setDestination(62502U);
    msg.setDestinationEntity(240U);
    msg.time = 0.20047163175046223;
    msg.phi = 0.8968702915814087;
    msg.theta = 0.4247922228106291;
    msg.psi = 0.4789871119675557;
    msg.psi_magnetic = 0.2456654436644935;

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
    msg.setTimeStamp(0.5975088286380671);
    msg.setSource(25646U);
    msg.setSourceEntity(83U);
    msg.setDestination(44627U);
    msg.setDestinationEntity(36U);
    msg.time = 0.5283270755970076;
    msg.phi = 0.7299709020621741;
    msg.theta = 0.8937610434951867;
    msg.psi = 0.31374435479625207;
    msg.psi_magnetic = 0.9080686247857238;

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
    msg.setTimeStamp(0.7135757128485735);
    msg.setSource(16982U);
    msg.setSourceEntity(239U);
    msg.setDestination(15687U);
    msg.setDestinationEntity(204U);
    msg.time = 0.5386698727535537;
    msg.x = 0.5868050968428674;
    msg.y = 0.8736500744360045;
    msg.z = 0.3188725230918483;
    msg.timestep = 0.05235220153214026;

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
    msg.setTimeStamp(0.8085754002001472);
    msg.setSource(1450U);
    msg.setSourceEntity(239U);
    msg.setDestination(37561U);
    msg.setDestinationEntity(14U);
    msg.time = 0.7278721414079434;
    msg.x = 0.22821626194010336;
    msg.y = 0.1571605547178334;
    msg.z = 0.027078698139613278;
    msg.timestep = 0.2664768802247882;

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
    msg.setTimeStamp(0.19955692926059942);
    msg.setSource(47829U);
    msg.setSourceEntity(141U);
    msg.setDestination(51806U);
    msg.setDestinationEntity(88U);
    msg.time = 0.15759445453634136;
    msg.x = 0.3917100326170331;
    msg.y = 0.1802703073120644;
    msg.z = 0.21593086876495926;
    msg.timestep = 0.695148883274984;

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
    msg.setTimeStamp(0.9242108534701834);
    msg.setSource(36U);
    msg.setSourceEntity(61U);
    msg.setDestination(51615U);
    msg.setDestinationEntity(18U);
    msg.time = 0.10743974111125909;
    msg.x = 0.4403954553883871;
    msg.y = 0.2791658167022192;
    msg.z = 0.7942062759801555;

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
    msg.setTimeStamp(0.47228380361646116);
    msg.setSource(42130U);
    msg.setSourceEntity(126U);
    msg.setDestination(51053U);
    msg.setDestinationEntity(218U);
    msg.time = 0.829782292746696;
    msg.x = 0.284410920098334;
    msg.y = 0.2557756495194018;
    msg.z = 0.7206905422397706;

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
    msg.setTimeStamp(0.4202370713456929);
    msg.setSource(28365U);
    msg.setSourceEntity(192U);
    msg.setDestination(28586U);
    msg.setDestinationEntity(186U);
    msg.time = 0.06956643081487757;
    msg.x = 0.3438982680828303;
    msg.y = 0.8458702998252905;
    msg.z = 0.179491776382814;

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
    msg.setTimeStamp(0.7483871065388621);
    msg.setSource(15259U);
    msg.setSourceEntity(117U);
    msg.setDestination(37288U);
    msg.setDestinationEntity(66U);
    msg.time = 0.624136211931071;
    msg.x = 0.17651504944809204;
    msg.y = 0.7849527661571092;
    msg.z = 0.6036210093661577;

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
    msg.setTimeStamp(0.83428550709335);
    msg.setSource(50919U);
    msg.setSourceEntity(122U);
    msg.setDestination(14592U);
    msg.setDestinationEntity(240U);
    msg.time = 0.29903737534031294;
    msg.x = 0.5997792647092968;
    msg.y = 0.7889603307384532;
    msg.z = 0.24651920190511845;

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
    msg.setTimeStamp(0.13972036660798315);
    msg.setSource(25981U);
    msg.setSourceEntity(86U);
    msg.setDestination(36477U);
    msg.setDestinationEntity(43U);
    msg.time = 0.40291257307528694;
    msg.x = 0.018961981057730837;
    msg.y = 0.24462406614243326;
    msg.z = 0.9526747059255936;

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
    msg.setTimeStamp(0.15856911464227397);
    msg.setSource(7726U);
    msg.setSourceEntity(91U);
    msg.setDestination(8635U);
    msg.setDestinationEntity(83U);
    msg.time = 0.4882102305338166;
    msg.x = 0.4267754863518608;
    msg.y = 0.8218870026427213;
    msg.z = 0.7411746341086111;

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
    msg.setTimeStamp(0.7197556833541076);
    msg.setSource(43465U);
    msg.setSourceEntity(184U);
    msg.setDestination(26354U);
    msg.setDestinationEntity(70U);
    msg.time = 0.9214651414504491;
    msg.x = 0.1915474905581792;
    msg.y = 0.040899315135976666;
    msg.z = 0.3873574176634178;

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
    msg.setTimeStamp(0.7660906491220987);
    msg.setSource(6907U);
    msg.setSourceEntity(243U);
    msg.setDestination(13160U);
    msg.setDestinationEntity(176U);
    msg.time = 0.5581348977084053;
    msg.x = 0.6018630626781565;
    msg.y = 0.5485119179315932;
    msg.z = 0.10978395918316364;

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
    msg.setTimeStamp(0.19735693247854302);
    msg.setSource(15083U);
    msg.setSourceEntity(210U);
    msg.setDestination(43987U);
    msg.setDestinationEntity(40U);
    msg.validity = 88U;
    msg.x = 0.18242146820091043;
    msg.y = 0.886878430546877;
    msg.z = 0.9354017653751885;

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
    msg.setTimeStamp(0.28036826327045083);
    msg.setSource(50987U);
    msg.setSourceEntity(136U);
    msg.setDestination(60834U);
    msg.setDestinationEntity(93U);
    msg.validity = 124U;
    msg.x = 0.7000215309957016;
    msg.y = 0.8271550778294977;
    msg.z = 0.18085165057086627;

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
    msg.setTimeStamp(0.15588628761170376);
    msg.setSource(23748U);
    msg.setSourceEntity(3U);
    msg.setDestination(61518U);
    msg.setDestinationEntity(85U);
    msg.validity = 21U;
    msg.x = 0.2991866085529722;
    msg.y = 0.4943905885764054;
    msg.z = 0.37841910305333804;

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
    msg.setTimeStamp(0.24036118664988726);
    msg.setSource(18832U);
    msg.setSourceEntity(193U);
    msg.setDestination(7142U);
    msg.setDestinationEntity(197U);
    msg.validity = 160U;
    msg.x = 0.44973282098979406;
    msg.y = 0.5161448767428759;
    msg.z = 0.8292362493959649;

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
    msg.setTimeStamp(0.47974979400535933);
    msg.setSource(11880U);
    msg.setSourceEntity(54U);
    msg.setDestination(33750U);
    msg.setDestinationEntity(251U);
    msg.validity = 177U;
    msg.x = 0.9226555938233829;
    msg.y = 0.13805058723836972;
    msg.z = 0.39215864231844977;

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
    msg.setTimeStamp(0.7859734663982794);
    msg.setSource(41488U);
    msg.setSourceEntity(57U);
    msg.setDestination(27759U);
    msg.setDestinationEntity(93U);
    msg.validity = 13U;
    msg.x = 0.7245104250191158;
    msg.y = 0.588036322529831;
    msg.z = 0.2997319435884408;

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
    msg.setTimeStamp(0.40556422305888584);
    msg.setSource(22182U);
    msg.setSourceEntity(99U);
    msg.setDestination(17128U);
    msg.setDestinationEntity(106U);
    msg.time = 0.9004489408734627;
    msg.x = 0.6712364577847041;
    msg.y = 0.14058552665982593;
    msg.z = 0.7310225557267709;

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
    msg.setTimeStamp(0.8351348539852261);
    msg.setSource(62853U);
    msg.setSourceEntity(180U);
    msg.setDestination(12392U);
    msg.setDestinationEntity(19U);
    msg.time = 0.41655469368638487;
    msg.x = 0.2383185548835839;
    msg.y = 0.37577954309214656;
    msg.z = 0.8976402041775889;

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
    msg.setTimeStamp(0.39747582463880193);
    msg.setSource(2095U);
    msg.setSourceEntity(55U);
    msg.setDestination(1850U);
    msg.setDestinationEntity(142U);
    msg.time = 0.8414188856574883;
    msg.x = 0.3258512394387889;
    msg.y = 0.6863021636500208;
    msg.z = 0.40823645749802395;

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
    msg.setTimeStamp(0.19522176050939333);
    msg.setSource(13082U);
    msg.setSourceEntity(69U);
    msg.setDestination(58595U);
    msg.setDestinationEntity(27U);
    msg.validity = 227U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5432794117276935;
    tmp_msg_0.y = 0.600870270082791;
    tmp_msg_0.z = 0.7658900325450545;
    tmp_msg_0.phi = 0.9119802701031959;
    tmp_msg_0.theta = 0.3390015386458063;
    tmp_msg_0.psi = 0.9530727788642318;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.1266596786242683;
    tmp_msg_1.beam_height = 0.9917533858393313;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9976529704779008;

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
    msg.setTimeStamp(0.8984575604740853);
    msg.setSource(58666U);
    msg.setSourceEntity(160U);
    msg.setDestination(1957U);
    msg.setDestinationEntity(155U);
    msg.validity = 42U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3508615818111689;
    tmp_msg_0.y = 0.6158706760142406;
    tmp_msg_0.z = 0.40838628268742183;
    tmp_msg_0.phi = 0.5557654415713992;
    tmp_msg_0.theta = 0.547953034363808;
    tmp_msg_0.psi = 0.4506417742465627;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.6631186125910787;

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
    msg.setTimeStamp(0.6789587204721429);
    msg.setSource(61411U);
    msg.setSourceEntity(225U);
    msg.setDestination(4663U);
    msg.setDestinationEntity(72U);
    msg.validity = 49U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8955025498320617;
    tmp_msg_0.y = 0.10036892481178505;
    tmp_msg_0.z = 0.7566618385850798;
    tmp_msg_0.phi = 0.8420935686316222;
    tmp_msg_0.theta = 0.7891137775694992;
    tmp_msg_0.psi = 0.37084187144605785;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8211779027775631;
    tmp_msg_1.beam_height = 0.7684490425377719;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5951481422000782;

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
    msg.setTimeStamp(0.597682461277544);
    msg.setSource(12610U);
    msg.setSourceEntity(96U);
    msg.setDestination(25178U);
    msg.setDestinationEntity(225U);
    msg.value = 0.5058891166628404;

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
    msg.setTimeStamp(0.4024962878213476);
    msg.setSource(14741U);
    msg.setSourceEntity(137U);
    msg.setDestination(60101U);
    msg.setDestinationEntity(236U);
    msg.value = 0.17602657814696354;

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
    msg.setTimeStamp(0.02443604185152648);
    msg.setSource(10390U);
    msg.setSourceEntity(0U);
    msg.setDestination(19084U);
    msg.setDestinationEntity(211U);
    msg.value = 0.07404764526799335;

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
    msg.setTimeStamp(0.7435020839999602);
    msg.setSource(37925U);
    msg.setSourceEntity(9U);
    msg.setDestination(34523U);
    msg.setDestinationEntity(19U);
    msg.value = 0.9238686470244151;

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
    msg.setTimeStamp(0.19792923566970655);
    msg.setSource(36212U);
    msg.setSourceEntity(72U);
    msg.setDestination(29300U);
    msg.setDestinationEntity(3U);
    msg.value = 0.2773132213176124;

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
    msg.setTimeStamp(0.10673769972902325);
    msg.setSource(21747U);
    msg.setSourceEntity(138U);
    msg.setDestination(1108U);
    msg.setDestinationEntity(205U);
    msg.value = 0.14710827182945996;

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
    msg.setTimeStamp(0.9787115787257625);
    msg.setSource(26039U);
    msg.setSourceEntity(131U);
    msg.setDestination(10491U);
    msg.setDestinationEntity(130U);
    msg.value = 0.9583621841329053;

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
    msg.setTimeStamp(0.41701305517093856);
    msg.setSource(23943U);
    msg.setSourceEntity(253U);
    msg.setDestination(48887U);
    msg.setDestinationEntity(36U);
    msg.value = 0.6471646505170413;

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
    msg.setTimeStamp(0.636180766902931);
    msg.setSource(47936U);
    msg.setSourceEntity(66U);
    msg.setDestination(47175U);
    msg.setDestinationEntity(78U);
    msg.value = 0.23429636156760159;

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
    msg.setTimeStamp(0.007806831661675284);
    msg.setSource(64763U);
    msg.setSourceEntity(32U);
    msg.setDestination(54489U);
    msg.setDestinationEntity(75U);
    msg.value = 0.24566945329743572;

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
    msg.setTimeStamp(0.10422531039949612);
    msg.setSource(8279U);
    msg.setSourceEntity(114U);
    msg.setDestination(48037U);
    msg.setDestinationEntity(129U);
    msg.value = 0.32364378003836747;

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
    msg.setTimeStamp(0.26230323861029825);
    msg.setSource(21335U);
    msg.setSourceEntity(108U);
    msg.setDestination(19390U);
    msg.setDestinationEntity(52U);
    msg.value = 0.2847817147285877;

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
    msg.setTimeStamp(0.07280709945622221);
    msg.setSource(15113U);
    msg.setSourceEntity(67U);
    msg.setDestination(535U);
    msg.setDestinationEntity(29U);
    msg.value = 0.12011599585381383;

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
    msg.setTimeStamp(0.3620841252193383);
    msg.setSource(17802U);
    msg.setSourceEntity(120U);
    msg.setDestination(1795U);
    msg.setDestinationEntity(79U);
    msg.value = 0.8666861304193572;

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
    msg.setTimeStamp(0.0430074165879204);
    msg.setSource(51002U);
    msg.setSourceEntity(20U);
    msg.setDestination(36337U);
    msg.setDestinationEntity(133U);
    msg.value = 0.20345399831226785;

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
    msg.setTimeStamp(0.8072948253704639);
    msg.setSource(51299U);
    msg.setSourceEntity(50U);
    msg.setDestination(20428U);
    msg.setDestinationEntity(65U);
    msg.value = 0.9897836124215856;

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
    msg.setTimeStamp(0.6425534242590236);
    msg.setSource(11820U);
    msg.setSourceEntity(100U);
    msg.setDestination(43803U);
    msg.setDestinationEntity(206U);
    msg.value = 0.07806032356893788;

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
    msg.setTimeStamp(0.9617615754441197);
    msg.setSource(31636U);
    msg.setSourceEntity(232U);
    msg.setDestination(40221U);
    msg.setDestinationEntity(5U);
    msg.value = 0.9102186959169011;

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
    msg.setTimeStamp(0.29502256955632);
    msg.setSource(63294U);
    msg.setSourceEntity(26U);
    msg.setDestination(8482U);
    msg.setDestinationEntity(74U);
    msg.value = 0.2300088713483679;

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
    msg.setTimeStamp(0.7195714706455799);
    msg.setSource(7562U);
    msg.setSourceEntity(54U);
    msg.setDestination(33486U);
    msg.setDestinationEntity(29U);
    msg.value = 0.13436130391505274;

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
    msg.setTimeStamp(0.5766615402284263);
    msg.setSource(7316U);
    msg.setSourceEntity(204U);
    msg.setDestination(32666U);
    msg.setDestinationEntity(102U);
    msg.value = 0.9988261846661088;

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
    msg.setTimeStamp(0.7650508774699862);
    msg.setSource(45425U);
    msg.setSourceEntity(221U);
    msg.setDestination(48782U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8348846729908558;

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
    msg.setTimeStamp(0.7624894876076916);
    msg.setSource(9222U);
    msg.setSourceEntity(130U);
    msg.setDestination(26457U);
    msg.setDestinationEntity(208U);
    msg.value = 0.9106563118654937;

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
    msg.setTimeStamp(0.7744226428798152);
    msg.setSource(42341U);
    msg.setSourceEntity(173U);
    msg.setDestination(45192U);
    msg.setDestinationEntity(150U);
    msg.value = 0.696257536716929;

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
    msg.setTimeStamp(0.22644362856380806);
    msg.setSource(16976U);
    msg.setSourceEntity(158U);
    msg.setDestination(1613U);
    msg.setDestinationEntity(36U);
    msg.direction = 0.6971866784275162;
    msg.speed = 0.14481840294973514;
    msg.turbulence = 0.699353243069394;

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
    msg.setTimeStamp(0.9711423533285448);
    msg.setSource(27110U);
    msg.setSourceEntity(27U);
    msg.setDestination(59130U);
    msg.setDestinationEntity(0U);
    msg.direction = 0.46730603091872946;
    msg.speed = 0.8436456039463665;
    msg.turbulence = 0.4275030482267077;

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
    msg.setTimeStamp(0.7362913338802591);
    msg.setSource(17534U);
    msg.setSourceEntity(140U);
    msg.setDestination(43671U);
    msg.setDestinationEntity(65U);
    msg.direction = 0.5186103653439;
    msg.speed = 0.7704772056319109;
    msg.turbulence = 0.33578360212691527;

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
    msg.setTimeStamp(0.545581034376089);
    msg.setSource(32758U);
    msg.setSourceEntity(169U);
    msg.setDestination(5519U);
    msg.setDestinationEntity(50U);
    msg.value = 0.13455845979603298;

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
    msg.setTimeStamp(0.26764483715056697);
    msg.setSource(30076U);
    msg.setSourceEntity(88U);
    msg.setDestination(2577U);
    msg.setDestinationEntity(249U);
    msg.value = 0.23754791113796214;

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
    msg.setTimeStamp(0.36242939185722134);
    msg.setSource(14011U);
    msg.setSourceEntity(121U);
    msg.setDestination(19943U);
    msg.setDestinationEntity(64U);
    msg.value = 0.8174198692702164;

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
    msg.setTimeStamp(0.3869528223009461);
    msg.setSource(17937U);
    msg.setSourceEntity(112U);
    msg.setDestination(59682U);
    msg.setDestinationEntity(46U);
    msg.value.assign("PMJICXNFMPRDIHLSTQNVOUZXOKFZOGRFWJRUHOADEAZVCYEIHCGFPVMEDVENLRIOUXDJJLOSZWDPIIJMLABQSZGVHVBWIVXAZEUQBTROJYYKGGYUAHCYAFINWKNOZVRTHTOQKKABNDKMYDXJTZRRCHN");

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
    msg.setTimeStamp(0.27890706830003786);
    msg.setSource(35415U);
    msg.setSourceEntity(230U);
    msg.setDestination(63829U);
    msg.setDestinationEntity(228U);
    msg.value.assign("UNNNXPNVGRYAEXKOUCLAPSKYDMEHZDIMOQLFUICVREDJRGRNDQAJLPUOPKHBKQIVVGBBGSSIQQWOLCBRXJPPGFEQDGJZAV");

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
    msg.setTimeStamp(0.5846998388513219);
    msg.setSource(27634U);
    msg.setSourceEntity(97U);
    msg.setDestination(47266U);
    msg.setDestinationEntity(2U);
    msg.value.assign("JWYAIEKTSXDOMNEONHFXGLGGZZTUJQKZSYAQDXCFTWJOERMMBDHBRQGSCSINOEBQIKPSKLRYJZPILCMHSWSIBGENLWMYKVKJQCAUYWCCLFRXRBTMRATEUJPQJUGQGPVHKBWXXGHOPMYAKNFUVZKPAWPOVQTDABDDQNFLHIOXUISNOZYTSAZC");

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
    msg.setTimeStamp(0.6599720027882708);
    msg.setSource(55485U);
    msg.setSourceEntity(203U);
    msg.setDestination(62209U);
    msg.setDestinationEntity(218U);
    const signed char tmp_msg_0[] = {48, -44, 103, -58, 85, -77, 16, -28, 30, -20, -41, 41, -53, -67, -116, 77, -123, 29, 67, 63, -55, 70, -89, -88, 7, -106, 116, -85, 89, 24, 111, -88, -107, -113, 123, 90, -79, 120, -11, -83, -22, 5, -53, -68, -22, -84, -91, 24, -99, 30, -54, -126, 12, 20, -63, 98, -99, -117, -50, 62, 15, -45, -37, 55, 20};
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
    msg.setTimeStamp(0.5932889918228297);
    msg.setSource(56405U);
    msg.setSourceEntity(68U);
    msg.setDestination(36320U);
    msg.setDestinationEntity(32U);
    const signed char tmp_msg_0[] = {56, -6, 22, 56, 10, 31, -63, 116, 95, -32, -62, -122, 83, 64, 25, -127, 3, 100, -77, -69, 108, -59, 49, 0, 111, 28, 85, -77, 22, 65, -106, -116};
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
    msg.setTimeStamp(0.9015953399070313);
    msg.setSource(51777U);
    msg.setSourceEntity(130U);
    msg.setDestination(6405U);
    msg.setDestinationEntity(99U);
    const signed char tmp_msg_0[] = {11, -23, 112, -75, 113, 16, 24, -61, 97, -90, 87, 100, 25, 125, 124, 3, -105, -95, 69, 124, 12, 27, -1, 123, 111, -21, -126, 55, 86, 85, -69, 19, 66, -21, -35, -35, 100, -93, 55, 29, 104, -44, 80, 23, 121, -73, 25, 70, -12, 104, -71, -62, 27, 41, -85, -112, 84, 56, 60, 64, 67, 121, -78, 66, -50, 50, -88, -55, 105, -22, -76, -41, -42, 76, 87, 110, -112, 10, 32, 86, 4, -28, 83, -115, 126, -71, 58, -96, -38, 121, 111, 77, 9, 22, -6, -127, 93, 121, 24, 8, -124, 1, 44, -117, -66, 117, 99, 111, -46, -7, 116, -31, 22, 111, 35, -6, -35, -89, -53, -23, 30, -88, -6, -58, 21, 48, 67, -6, -117, -125, -33, -100, -11, -1, -116, -32, 4, 106, -64, 88, 83, -12, 11, 73, -64, -83, 117, -7, -74, -67, -108, -6, 65, -37, 112, 43, -102, -127, 7, 22, -1, 0, -60, 43, 29, -103, -80, -42, -85, -122, 21, 103, -106, -8, 79, -41, -5, 77, 42, -19, -34, 67, 76, 96, -7, 82, -72, 55, 42, -14, -26, -6, -73, 30, 69, 24, 80, -61, -20, 86, 62, 98, 82, 62, 47, -115, -87, 31, 19, 106, -55, -33, -56, 93, -90, -80, -108, 33, 79, 113, -89, 41, 119, -101, 9, -116, 79, -8, -112, 62, -118, -91, 105, 1, -18, -15, 77, -90, 104, -54};
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
    msg.setTimeStamp(0.2805251479886147);
    msg.setSource(20525U);
    msg.setSourceEntity(42U);
    msg.setDestination(34844U);
    msg.setDestinationEntity(26U);
    msg.value = 0.5930960378456441;

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
    msg.setTimeStamp(0.2354547789730882);
    msg.setSource(15245U);
    msg.setSourceEntity(181U);
    msg.setDestination(34185U);
    msg.setDestinationEntity(94U);
    msg.value = 0.21538359469689972;

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
    msg.setTimeStamp(0.6165841768249527);
    msg.setSource(16056U);
    msg.setSourceEntity(208U);
    msg.setDestination(35335U);
    msg.setDestinationEntity(158U);
    msg.value = 0.7521990326844883;

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
    msg.setTimeStamp(0.757669776283495);
    msg.setSource(25452U);
    msg.setSourceEntity(187U);
    msg.setDestination(7480U);
    msg.setDestinationEntity(146U);
    msg.type = 135U;
    msg.frequency = 1823364159U;
    msg.min_range = 44692U;
    msg.max_range = 46695U;
    msg.bits_per_point = 87U;
    msg.scale_factor = 0.27377429475846216;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6278183477451047;
    tmp_msg_0.beam_height = 0.31382464893295836;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {56, 70, -79, 32, -50, 99, 51, 110, 28, -75, 118, -93, 102, 64, 73, 84, -54, -39, -91, -11, 4, 46, -94, -112, -74, 80, 15, -103, -98, -17, 69, 2, -110, -102, 0, -45, 50, 117, -59, 8, 50, 60, -122, -13, -88, 79, -18, -47, -78, 59, 59, -7, -17, -10, -101, 120, 88, -27, -57, 94, 101, 62, 37, -50, 115, -56, 76, 118, 4, 102, 52, -11, 19, 123, -53, -57, -125, 6, -34, 111, 124, -116, 93, 7, 2, 34, 87, -111, 60, -10, -57, -40, 99, 77, 85, -50, -10, 78, 68, -67, 35, -76, 79, 122, 39, -99, 21, 6, 16, 41, -10, -16, -52, -7, -102, 8, -61, 62, 14, 32, 38, -96, 5, 23, 36, 65, 46, 56, 123, 79, 1, -12, -107, -108, 28, 11, 77, -76, 84, 23, 28, 61, -70, 46, -6, -40, 45, 36, 73, 102, 87, -33, 9, -67, -106, -38, 9, -113, 1, 95, -15, 84, -12, 90, -87, -92, -108, -48, 25, -10, -100, -125, 101, 14, 126, -40, 54, -34, 87, -15, 71, 20, -106, -34, 39, -4, 104, 16, -125, -99, 27, -125, -15, 106, 76, -112, -41, -112, 107, -82, -107, 114, 92, 114, 118, 75, -54, -98, 122, 30, -108, -94, -104, -127, 41, 28, -68, -97, 40, 12, 16, -55, -11, -86, -76, 87};
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
    msg.setTimeStamp(0.2659610487925813);
    msg.setSource(28692U);
    msg.setSourceEntity(209U);
    msg.setDestination(27408U);
    msg.setDestinationEntity(18U);
    msg.type = 29U;
    msg.frequency = 3886947817U;
    msg.min_range = 47856U;
    msg.max_range = 30259U;
    msg.bits_per_point = 143U;
    msg.scale_factor = 0.7276325731566371;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.33669360599860243;
    tmp_msg_0.beam_height = 0.9590659721048443;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-128, -26, -4, -32, 21, 104, 59, 80, -108, -40, -94, 30, 101, -44, -22, -113, -128, -99, 98, -95, 104, -34, -121, 117, 103, -65, -98, -99, -17, -46, 60, 26, 119, 4, 113, 44, 58, 105, -68, 111, 47, -37, -33, -119, 68, -106, 12, -84, 53};
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
    msg.setTimeStamp(0.4259919376130833);
    msg.setSource(16698U);
    msg.setSourceEntity(3U);
    msg.setDestination(54484U);
    msg.setDestinationEntity(146U);
    msg.type = 106U;
    msg.frequency = 635887085U;
    msg.min_range = 44033U;
    msg.max_range = 47620U;
    msg.bits_per_point = 225U;
    msg.scale_factor = 0.12053513719163056;
    const signed char tmp_msg_0[] = {-14, 0, -126, -106, -84, -89, 83, 29, -125, -67, 54, -118, -39, 81, -107, 120, -14, -11, -46, -120, 63, -77, 101, -76, -107, 49, 120, 2, -89, 9, 6, -60, 52, 60, -25, 76, -63, 34, -64, 16, -29, 84, -111, -120, -43, 51, -6, 49};
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
    msg.setTimeStamp(0.008133070580004675);
    msg.setSource(50626U);
    msg.setSourceEntity(214U);
    msg.setDestination(38615U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.245053006495358);
    msg.setSource(60469U);
    msg.setSourceEntity(185U);
    msg.setDestination(18207U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.33056613462688134);
    msg.setSource(12625U);
    msg.setSourceEntity(41U);
    msg.setDestination(16724U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.2731020249701974);
    msg.setSource(52258U);
    msg.setSourceEntity(59U);
    msg.setDestination(34500U);
    msg.setDestinationEntity(227U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.5576922993380496);
    msg.setSource(7241U);
    msg.setSourceEntity(122U);
    msg.setDestination(60460U);
    msg.setDestinationEntity(85U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.8073331992980018);
    msg.setSource(6056U);
    msg.setSourceEntity(136U);
    msg.setDestination(30227U);
    msg.setDestinationEntity(196U);
    msg.op = 117U;

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
    msg.setTimeStamp(0.5622165648090999);
    msg.setSource(23743U);
    msg.setSourceEntity(216U);
    msg.setDestination(53196U);
    msg.setDestinationEntity(204U);
    msg.value = 0.8866209246159078;
    msg.confidence = 0.2778113721398807;
    msg.opmodes.assign("IBVGLFKMSFARKZZDYUJHBVZYFRQRTVQAADIEPTBZYCOQYEMJRWGLCRNYAVTVOBCWERWGVDSBGHZVOXKCLMGJGINVJGZPQUSXGTMADIPREOFWVAMPKBUENIWOHCQBYRANUIJPSGMJKHFQTDLIFNCHXRYRXKQUQHLTWWDESCTFZHUSFLMUAN");

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
    msg.setTimeStamp(0.32796147110354523);
    msg.setSource(35995U);
    msg.setSourceEntity(160U);
    msg.setDestination(33312U);
    msg.setDestinationEntity(254U);
    msg.value = 0.4506217876638049;
    msg.confidence = 0.31059854340676885;
    msg.opmodes.assign("IDAZXVLSFPIXTNZZNOFWWAOEPJOBBBEANUIDDMBYRUVAJYOHNHXRPQMUOGXGBPRDVEYSJZOGGWLLKFCUUXNKJIYXCOMJBVUSARTQQDHRHELSJDKYNGCKTMWAPTHHPATMFUTFZEIYERGUCTYEJJBKPGZXALWIPDXQLUPVZVZSQPFQZNJTVMNWEQHQESSQWIKFTYWHITCXHGMKODLUXYMDKLVSRGRGBKSNCFFIZDIVCNRSL");

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
    msg.setTimeStamp(0.27465886930672057);
    msg.setSource(25737U);
    msg.setSourceEntity(95U);
    msg.setDestination(6160U);
    msg.setDestinationEntity(215U);
    msg.value = 0.5506590060438256;
    msg.confidence = 0.12732207604069834;
    msg.opmodes.assign("DEFJLYVHAPTUBLOFUSFOVBYLUJHFOYZLTMDJPDRDMKDEIZUATRQYKMIBJZFSONKHVXTEHMLSRHVOMQICPTZZQCGWJR");

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
    msg.setTimeStamp(0.9324127144786876);
    msg.setSource(6885U);
    msg.setSourceEntity(41U);
    msg.setDestination(25796U);
    msg.setDestinationEntity(116U);
    msg.itow = 318643425U;
    msg.lat = 0.9703961523907151;
    msg.lon = 0.8704767638325784;
    msg.height_ell = 0.5162931438066486;
    msg.height_sea = 0.9783768978763142;
    msg.hacc = 0.2524648801816127;
    msg.vacc = 0.5857871830961754;
    msg.vel_n = 0.830574864156984;
    msg.vel_e = 0.319227134739395;
    msg.vel_d = 0.47055169018619514;
    msg.speed = 0.02557632644934771;
    msg.gspeed = 0.07100373625007406;
    msg.heading = 0.7197246808730101;
    msg.sacc = 0.6375198381257319;
    msg.cacc = 0.4398433934009822;

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
    msg.setTimeStamp(0.2015176095323562);
    msg.setSource(10333U);
    msg.setSourceEntity(98U);
    msg.setDestination(64306U);
    msg.setDestinationEntity(225U);
    msg.itow = 3780039871U;
    msg.lat = 0.9773459517666164;
    msg.lon = 0.28519540874117233;
    msg.height_ell = 0.880751599715495;
    msg.height_sea = 0.6496369892485578;
    msg.hacc = 0.3883562496311058;
    msg.vacc = 0.44454812642346575;
    msg.vel_n = 0.5117113082158657;
    msg.vel_e = 0.3513663713934234;
    msg.vel_d = 0.06713183811936174;
    msg.speed = 0.903112215513834;
    msg.gspeed = 0.18021952458145996;
    msg.heading = 0.5465855989045698;
    msg.sacc = 0.17371092401632826;
    msg.cacc = 0.7103451572658673;

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
    msg.setTimeStamp(0.32176609674196743);
    msg.setSource(61301U);
    msg.setSourceEntity(225U);
    msg.setDestination(35481U);
    msg.setDestinationEntity(111U);
    msg.itow = 734529355U;
    msg.lat = 0.6158729327963234;
    msg.lon = 0.692043820913465;
    msg.height_ell = 0.8312673195711089;
    msg.height_sea = 0.565814344560363;
    msg.hacc = 0.10976679167020553;
    msg.vacc = 0.7002914461970516;
    msg.vel_n = 0.5445950913312627;
    msg.vel_e = 0.9893192793991424;
    msg.vel_d = 0.6130703552855867;
    msg.speed = 0.5742917080740263;
    msg.gspeed = 0.10300266947043779;
    msg.heading = 0.9331388957886673;
    msg.sacc = 0.2830586305893801;
    msg.cacc = 0.12157908443880261;

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
    msg.setTimeStamp(0.8116423242916821);
    msg.setSource(13706U);
    msg.setSourceEntity(102U);
    msg.setDestination(55405U);
    msg.setDestinationEntity(149U);
    msg.id = 72U;
    msg.value = 0.1947448517849072;

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
    msg.setTimeStamp(0.39977026963179596);
    msg.setSource(35227U);
    msg.setSourceEntity(189U);
    msg.setDestination(12553U);
    msg.setDestinationEntity(58U);
    msg.id = 119U;
    msg.value = 0.6714217733848805;

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
    msg.setTimeStamp(0.16818885526232719);
    msg.setSource(62222U);
    msg.setSourceEntity(44U);
    msg.setDestination(36200U);
    msg.setDestinationEntity(136U);
    msg.id = 15U;
    msg.value = 0.5955910772085357;

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
    msg.setTimeStamp(0.734410601945231);
    msg.setSource(4086U);
    msg.setSourceEntity(239U);
    msg.setDestination(28267U);
    msg.setDestinationEntity(87U);
    msg.x = 0.5282038723422123;
    msg.y = 0.801980703819494;
    msg.z = 0.15054057397653753;
    msg.phi = 0.4991331262921127;
    msg.theta = 0.56088125610805;
    msg.psi = 0.03481236160300283;

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
    msg.setTimeStamp(0.5968060367494595);
    msg.setSource(19050U);
    msg.setSourceEntity(45U);
    msg.setDestination(20629U);
    msg.setDestinationEntity(147U);
    msg.x = 0.8294768125426828;
    msg.y = 0.7289916975681037;
    msg.z = 0.8152778700754311;
    msg.phi = 0.513922650771313;
    msg.theta = 0.3020097901150077;
    msg.psi = 0.4194985163941679;

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
    msg.setTimeStamp(0.52056481612536);
    msg.setSource(33157U);
    msg.setSourceEntity(48U);
    msg.setDestination(56929U);
    msg.setDestinationEntity(178U);
    msg.x = 0.023605890667207974;
    msg.y = 0.7437158257933899;
    msg.z = 0.14308193119928092;
    msg.phi = 0.06041080846416391;
    msg.theta = 0.29103286048564514;
    msg.psi = 0.013610253876426559;

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
    msg.setTimeStamp(0.023413175649184437);
    msg.setSource(27593U);
    msg.setSourceEntity(161U);
    msg.setDestination(4935U);
    msg.setDestinationEntity(203U);
    msg.beam_width = 0.2624665728771316;
    msg.beam_height = 0.8078290986391488;

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
    msg.setTimeStamp(0.24828566180372813);
    msg.setSource(58094U);
    msg.setSourceEntity(213U);
    msg.setDestination(477U);
    msg.setDestinationEntity(16U);
    msg.beam_width = 0.8200613301710259;
    msg.beam_height = 0.6258105392289722;

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
    msg.setTimeStamp(0.5824514335170953);
    msg.setSource(37525U);
    msg.setSourceEntity(51U);
    msg.setDestination(27525U);
    msg.setDestinationEntity(225U);
    msg.beam_width = 0.12150940456363213;
    msg.beam_height = 0.542405043495534;

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
    msg.setTimeStamp(0.6407447626931593);
    msg.setSource(35261U);
    msg.setSourceEntity(247U);
    msg.setDestination(43131U);
    msg.setDestinationEntity(225U);
    msg.sane = 98U;

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
    msg.setTimeStamp(0.050598837896121074);
    msg.setSource(4021U);
    msg.setSourceEntity(50U);
    msg.setDestination(49130U);
    msg.setDestinationEntity(154U);
    msg.sane = 214U;

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
    msg.setTimeStamp(0.6389221764173711);
    msg.setSource(6521U);
    msg.setSourceEntity(217U);
    msg.setDestination(63583U);
    msg.setDestinationEntity(244U);
    msg.sane = 108U;

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
    msg.setTimeStamp(0.5731924294353233);
    msg.setSource(8671U);
    msg.setSourceEntity(40U);
    msg.setDestination(54712U);
    msg.setDestinationEntity(126U);
    msg.value = 0.1886529801608955;

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
    msg.setTimeStamp(0.8709597933026502);
    msg.setSource(1707U);
    msg.setSourceEntity(26U);
    msg.setDestination(34952U);
    msg.setDestinationEntity(96U);
    msg.value = 0.1712169246451598;

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
    msg.setTimeStamp(0.06408255064506796);
    msg.setSource(26245U);
    msg.setSourceEntity(31U);
    msg.setDestination(23870U);
    msg.setDestinationEntity(254U);
    msg.value = 0.44385300730512356;

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
    msg.setTimeStamp(0.4275479644816019);
    msg.setSource(28288U);
    msg.setSourceEntity(18U);
    msg.setDestination(42967U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5261886697030014;

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
    msg.setTimeStamp(0.4391173399894177);
    msg.setSource(24695U);
    msg.setSourceEntity(188U);
    msg.setDestination(25986U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8504529791521201;

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
    msg.setTimeStamp(0.07638030552771868);
    msg.setSource(33487U);
    msg.setSourceEntity(252U);
    msg.setDestination(36664U);
    msg.setDestinationEntity(223U);
    msg.value = 0.3068854226047081;

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
    msg.setTimeStamp(0.506867916223566);
    msg.setSource(55971U);
    msg.setSourceEntity(131U);
    msg.setDestination(47220U);
    msg.setDestinationEntity(146U);
    msg.value = 0.11063275604979506;

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
    msg.setTimeStamp(0.34487074004988594);
    msg.setSource(27924U);
    msg.setSourceEntity(102U);
    msg.setDestination(39583U);
    msg.setDestinationEntity(59U);
    msg.value = 0.010237381518226063;

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
    msg.setTimeStamp(0.1940071227696032);
    msg.setSource(40163U);
    msg.setSourceEntity(222U);
    msg.setDestination(14976U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5135967660625633;

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
    msg.setTimeStamp(0.34801118432783396);
    msg.setSource(57933U);
    msg.setSourceEntity(157U);
    msg.setDestination(64472U);
    msg.setDestinationEntity(113U);
    msg.value = 0.22990231446351939;

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
    msg.setTimeStamp(0.1859634879120854);
    msg.setSource(19259U);
    msg.setSourceEntity(245U);
    msg.setDestination(50286U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6924395032416996;

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
    msg.setTimeStamp(0.514681095891612);
    msg.setSource(9806U);
    msg.setSourceEntity(70U);
    msg.setDestination(23196U);
    msg.setDestinationEntity(179U);
    msg.value = 0.693532118642032;

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
    msg.setTimeStamp(0.17773135065816925);
    msg.setSource(11420U);
    msg.setSourceEntity(173U);
    msg.setDestination(47985U);
    msg.setDestinationEntity(153U);
    msg.value = 0.7584730800595241;

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
    msg.setTimeStamp(0.16083983684076952);
    msg.setSource(9065U);
    msg.setSourceEntity(187U);
    msg.setDestination(53284U);
    msg.setDestinationEntity(230U);
    msg.value = 0.6264400620790693;

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
    msg.setTimeStamp(0.96242411956757);
    msg.setSource(62133U);
    msg.setSourceEntity(225U);
    msg.setDestination(1970U);
    msg.setDestinationEntity(69U);
    msg.value = 0.4743451226424439;

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
    msg.setTimeStamp(0.8441355089366576);
    msg.setSource(56378U);
    msg.setSourceEntity(122U);
    msg.setDestination(41012U);
    msg.setDestinationEntity(196U);
    msg.value = 0.3354620466435494;

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
    msg.setTimeStamp(0.8162712238129569);
    msg.setSource(52271U);
    msg.setSourceEntity(251U);
    msg.setDestination(2627U);
    msg.setDestinationEntity(223U);
    msg.value = 0.011740829210915571;

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
    msg.setTimeStamp(0.8997039535014763);
    msg.setSource(62457U);
    msg.setSourceEntity(230U);
    msg.setDestination(27505U);
    msg.setDestinationEntity(247U);
    msg.value = 0.19187734159559366;

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
    msg.setTimeStamp(0.3812087200453441);
    msg.setSource(20826U);
    msg.setSourceEntity(4U);
    msg.setDestination(20893U);
    msg.setDestinationEntity(199U);
    msg.value = 0.507985838389436;

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
    msg.setTimeStamp(0.562855823425359);
    msg.setSource(29197U);
    msg.setSourceEntity(185U);
    msg.setDestination(64987U);
    msg.setDestinationEntity(15U);
    msg.value = 0.23152821715008232;

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
    msg.setTimeStamp(0.46463837381265494);
    msg.setSource(48931U);
    msg.setSourceEntity(58U);
    msg.setDestination(35865U);
    msg.setDestinationEntity(6U);
    msg.value = 0.47263547370657943;

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
    msg.setTimeStamp(0.6153546344991171);
    msg.setSource(10881U);
    msg.setSourceEntity(227U);
    msg.setDestination(63843U);
    msg.setDestinationEntity(28U);
    msg.value = 0.43146644799442235;

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
    msg.setTimeStamp(0.5276565472775261);
    msg.setSource(16466U);
    msg.setSourceEntity(232U);
    msg.setDestination(52694U);
    msg.setDestinationEntity(190U);
    msg.value = 0.00849418932164936;

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
    msg.setTimeStamp(0.08170032622888945);
    msg.setSource(48526U);
    msg.setSourceEntity(250U);
    msg.setDestination(44803U);
    msg.setDestinationEntity(16U);
    msg.value = 0.031075862419792655;

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
    msg.setTimeStamp(0.6916392920865558);
    msg.setSource(40422U);
    msg.setSourceEntity(61U);
    msg.setDestination(61367U);
    msg.setDestinationEntity(162U);
    msg.validity = 16269U;
    msg.type = 136U;
    msg.tow = 424014741U;
    msg.base_lat = 0.09780555966467197;
    msg.base_lon = 0.09445370475563897;
    msg.base_height = 0.7745839592168725;
    msg.n = 0.7422151032445938;
    msg.e = 0.9399440976992954;
    msg.d = 0.11382392148090592;
    msg.v_n = 0.09772574767707376;
    msg.v_e = 0.04736689578611597;
    msg.v_d = 0.5877128425910229;
    msg.satellites = 169U;
    msg.iar_hyp = 5524U;
    msg.iar_ratio = 0.6965514216940072;

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
    msg.setTimeStamp(0.6823969397766337);
    msg.setSource(48994U);
    msg.setSourceEntity(186U);
    msg.setDestination(45672U);
    msg.setDestinationEntity(8U);
    msg.validity = 33632U;
    msg.type = 123U;
    msg.tow = 1661180661U;
    msg.base_lat = 0.8050398446921302;
    msg.base_lon = 0.24883355994960143;
    msg.base_height = 0.4527561482109158;
    msg.n = 0.3287173385770268;
    msg.e = 0.048329221738757644;
    msg.d = 0.48968509702399243;
    msg.v_n = 0.4477675603544947;
    msg.v_e = 0.32301988736678966;
    msg.v_d = 0.2521623964600075;
    msg.satellites = 165U;
    msg.iar_hyp = 28598U;
    msg.iar_ratio = 0.615424288229735;

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
    msg.setTimeStamp(0.38230939296478517);
    msg.setSource(5219U);
    msg.setSourceEntity(30U);
    msg.setDestination(21910U);
    msg.setDestinationEntity(151U);
    msg.validity = 6166U;
    msg.type = 36U;
    msg.tow = 2963806634U;
    msg.base_lat = 0.5108691597027409;
    msg.base_lon = 0.9345114116718878;
    msg.base_height = 0.3505680690398647;
    msg.n = 0.5245751780744758;
    msg.e = 0.34305646779141674;
    msg.d = 0.9827631509370296;
    msg.v_n = 0.7164879968369694;
    msg.v_e = 0.422830538099052;
    msg.v_d = 0.18165252578612412;
    msg.satellites = 218U;
    msg.iar_hyp = 403U;
    msg.iar_ratio = 0.4867771712199861;

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
    msg.setTimeStamp(0.11262473201698553);
    msg.setSource(39582U);
    msg.setSourceEntity(252U);
    msg.setDestination(65133U);
    msg.setDestinationEntity(167U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.796050034737149;
    tmp_msg_0.lon = 0.9571288257268763;
    tmp_msg_0.height = 0.22934385363945886;
    tmp_msg_0.x = 0.8362661270827719;
    tmp_msg_0.y = 0.033753376642642;
    tmp_msg_0.z = 0.09977324838014223;
    tmp_msg_0.phi = 0.030132485734839953;
    tmp_msg_0.theta = 0.880243550159941;
    tmp_msg_0.psi = 0.5904005760086489;
    tmp_msg_0.u = 0.9837898065253751;
    tmp_msg_0.v = 0.050955649151362636;
    tmp_msg_0.w = 0.7141486153268515;
    tmp_msg_0.vx = 0.853233826983552;
    tmp_msg_0.vy = 0.7962083693473335;
    tmp_msg_0.vz = 0.31666660198666285;
    tmp_msg_0.p = 0.6804363282394499;
    tmp_msg_0.q = 0.6309297286556803;
    tmp_msg_0.r = 0.6474513900870588;
    tmp_msg_0.depth = 0.04308964441486485;
    tmp_msg_0.alt = 0.38331388365306907;
    msg.state.set(tmp_msg_0);
    msg.type = 31U;

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
    msg.setTimeStamp(0.04240343918351519);
    msg.setSource(20102U);
    msg.setSourceEntity(146U);
    msg.setDestination(30664U);
    msg.setDestinationEntity(221U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4311399552089983;
    tmp_msg_0.lon = 0.7466005295436748;
    tmp_msg_0.height = 0.15338145367432976;
    tmp_msg_0.x = 0.8126546907520074;
    tmp_msg_0.y = 0.5948241113619211;
    tmp_msg_0.z = 0.46686801491035146;
    tmp_msg_0.phi = 0.020436391138421106;
    tmp_msg_0.theta = 0.7234005929063456;
    tmp_msg_0.psi = 0.04828767284303359;
    tmp_msg_0.u = 0.21647578726510253;
    tmp_msg_0.v = 0.3894148853258086;
    tmp_msg_0.w = 0.9503922636182153;
    tmp_msg_0.vx = 0.6251243957618511;
    tmp_msg_0.vy = 0.849292559512008;
    tmp_msg_0.vz = 0.9989951620101373;
    tmp_msg_0.p = 0.3300698633603196;
    tmp_msg_0.q = 0.6584718644124026;
    tmp_msg_0.r = 0.9861859864150249;
    tmp_msg_0.depth = 0.6851955044947743;
    tmp_msg_0.alt = 0.6888717172111316;
    msg.state.set(tmp_msg_0);
    msg.type = 0U;

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
    msg.setTimeStamp(0.017048913841134494);
    msg.setSource(23718U);
    msg.setSourceEntity(115U);
    msg.setDestination(52305U);
    msg.setDestinationEntity(184U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.15596099325400403;
    tmp_msg_0.lon = 0.9944085889982696;
    tmp_msg_0.height = 0.5810392144004543;
    tmp_msg_0.x = 0.9684936295404141;
    tmp_msg_0.y = 0.47221179582603456;
    tmp_msg_0.z = 0.2803681959322497;
    tmp_msg_0.phi = 0.25323822682436803;
    tmp_msg_0.theta = 0.17619055727729693;
    tmp_msg_0.psi = 0.39648207858034956;
    tmp_msg_0.u = 0.6255545285751163;
    tmp_msg_0.v = 0.6124324242069694;
    tmp_msg_0.w = 0.4139893196830404;
    tmp_msg_0.vx = 0.18643222073959742;
    tmp_msg_0.vy = 0.6279166167358079;
    tmp_msg_0.vz = 0.8950607086287818;
    tmp_msg_0.p = 0.5345222036213394;
    tmp_msg_0.q = 0.750727986143713;
    tmp_msg_0.r = 0.7755177759693574;
    tmp_msg_0.depth = 0.24619613011128305;
    tmp_msg_0.alt = 0.4800281097121225;
    msg.state.set(tmp_msg_0);
    msg.type = 108U;

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
    msg.setTimeStamp(0.658984524617094);
    msg.setSource(14176U);
    msg.setSourceEntity(6U);
    msg.setDestination(24326U);
    msg.setDestinationEntity(251U);
    msg.value = 0.4921622446507563;

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
    msg.setTimeStamp(0.9710328921958121);
    msg.setSource(5722U);
    msg.setSourceEntity(177U);
    msg.setDestination(28422U);
    msg.setDestinationEntity(190U);
    msg.value = 0.3812241816956483;

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
    msg.setTimeStamp(0.07708307784670554);
    msg.setSource(3710U);
    msg.setSourceEntity(128U);
    msg.setDestination(32424U);
    msg.setDestinationEntity(61U);
    msg.value = 0.34575164493907695;

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
    msg.setTimeStamp(0.1466502945074487);
    msg.setSource(6448U);
    msg.setSourceEntity(104U);
    msg.setDestination(56394U);
    msg.setDestinationEntity(31U);
    msg.value = 0.4021396854666386;

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
    msg.setTimeStamp(0.16890765269017105);
    msg.setSource(59665U);
    msg.setSourceEntity(243U);
    msg.setDestination(36258U);
    msg.setDestinationEntity(175U);
    msg.value = 0.8341140452674977;

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
    msg.setTimeStamp(0.8101473614233644);
    msg.setSource(46559U);
    msg.setSourceEntity(136U);
    msg.setDestination(50139U);
    msg.setDestinationEntity(83U);
    msg.value = 0.09038363892711021;

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
    msg.setTimeStamp(0.558446304138105);
    msg.setSource(9945U);
    msg.setSourceEntity(229U);
    msg.setDestination(27219U);
    msg.setDestinationEntity(9U);
    msg.value = 0.2682101510299236;

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
    msg.setTimeStamp(0.8891962902582425);
    msg.setSource(5109U);
    msg.setSourceEntity(138U);
    msg.setDestination(15946U);
    msg.setDestinationEntity(40U);
    msg.value = 0.17959782296674165;

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
    msg.setTimeStamp(0.7777901892964668);
    msg.setSource(40641U);
    msg.setSourceEntity(103U);
    msg.setDestination(38842U);
    msg.setDestinationEntity(50U);
    msg.value = 0.963225089241673;

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
    msg.setTimeStamp(0.10265713956826272);
    msg.setSource(43066U);
    msg.setSourceEntity(81U);
    msg.setDestination(62214U);
    msg.setDestinationEntity(74U);
    msg.value = 0.04189820016119972;

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
    msg.setTimeStamp(0.46203401089841334);
    msg.setSource(56153U);
    msg.setSourceEntity(145U);
    msg.setDestination(11949U);
    msg.setDestinationEntity(238U);
    msg.value = 0.39880506989628406;

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
    msg.setTimeStamp(0.915824990909626);
    msg.setSource(29589U);
    msg.setSourceEntity(48U);
    msg.setDestination(49753U);
    msg.setDestinationEntity(185U);
    msg.value = 0.7694719815960702;

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
    msg.setTimeStamp(0.07948086085150663);
    msg.setSource(13509U);
    msg.setSourceEntity(63U);
    msg.setDestination(3340U);
    msg.setDestinationEntity(154U);
    msg.value = 0.1450182930807119;

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
    msg.setTimeStamp(0.8794934989638183);
    msg.setSource(65349U);
    msg.setSourceEntity(43U);
    msg.setDestination(4951U);
    msg.setDestinationEntity(220U);
    msg.value = 0.3038401315132696;

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
    msg.setTimeStamp(0.6351039222778669);
    msg.setSource(54509U);
    msg.setSourceEntity(159U);
    msg.setDestination(28416U);
    msg.setDestinationEntity(226U);
    msg.value = 0.397326376297953;

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
    msg.setTimeStamp(0.6402596901960479);
    msg.setSource(23797U);
    msg.setSourceEntity(122U);
    msg.setDestination(23416U);
    msg.setDestinationEntity(152U);
    msg.id = 169U;
    msg.zoom = 217U;
    msg.action = 100U;

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
    msg.setTimeStamp(0.33794140007877116);
    msg.setSource(40552U);
    msg.setSourceEntity(201U);
    msg.setDestination(36997U);
    msg.setDestinationEntity(67U);
    msg.id = 12U;
    msg.zoom = 203U;
    msg.action = 59U;

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
    msg.setTimeStamp(0.10520882247008267);
    msg.setSource(60563U);
    msg.setSourceEntity(98U);
    msg.setDestination(42169U);
    msg.setDestinationEntity(94U);
    msg.id = 108U;
    msg.zoom = 185U;
    msg.action = 53U;

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
    msg.setTimeStamp(0.18499804728490032);
    msg.setSource(35657U);
    msg.setSourceEntity(90U);
    msg.setDestination(14423U);
    msg.setDestinationEntity(211U);
    msg.id = 44U;
    msg.value = 0.4166058187827726;

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
    msg.setTimeStamp(0.5783332060340505);
    msg.setSource(5801U);
    msg.setSourceEntity(21U);
    msg.setDestination(24462U);
    msg.setDestinationEntity(34U);
    msg.id = 132U;
    msg.value = 0.723647223713167;

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
    msg.setTimeStamp(0.27961791366045763);
    msg.setSource(10465U);
    msg.setSourceEntity(119U);
    msg.setDestination(11299U);
    msg.setDestinationEntity(27U);
    msg.id = 137U;
    msg.value = 0.4783420450578909;

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
    msg.setTimeStamp(0.4741410887333687);
    msg.setSource(15410U);
    msg.setSourceEntity(112U);
    msg.setDestination(20197U);
    msg.setDestinationEntity(48U);
    msg.id = 250U;
    msg.value = 0.3609647982029317;

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
    msg.setTimeStamp(0.5378701575178538);
    msg.setSource(11097U);
    msg.setSourceEntity(203U);
    msg.setDestination(59127U);
    msg.setDestinationEntity(58U);
    msg.id = 135U;
    msg.value = 0.11608875575405675;

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
    msg.setTimeStamp(0.26639762113850707);
    msg.setSource(51170U);
    msg.setSourceEntity(191U);
    msg.setDestination(9884U);
    msg.setDestinationEntity(193U);
    msg.id = 26U;
    msg.value = 0.3629528920315951;

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
    msg.setTimeStamp(0.736421620005871);
    msg.setSource(57374U);
    msg.setSourceEntity(75U);
    msg.setDestination(33112U);
    msg.setDestinationEntity(66U);
    msg.id = 202U;
    msg.angle = 0.5507411092204392;

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
    msg.setTimeStamp(0.9413583587365547);
    msg.setSource(41386U);
    msg.setSourceEntity(116U);
    msg.setDestination(3644U);
    msg.setDestinationEntity(45U);
    msg.id = 106U;
    msg.angle = 0.9407626249163319;

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
    msg.setTimeStamp(0.1523514504108724);
    msg.setSource(39634U);
    msg.setSourceEntity(101U);
    msg.setDestination(45432U);
    msg.setDestinationEntity(170U);
    msg.id = 169U;
    msg.angle = 0.04631426330522148;

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
    msg.setTimeStamp(0.13518456137282198);
    msg.setSource(27601U);
    msg.setSourceEntity(147U);
    msg.setDestination(43175U);
    msg.setDestinationEntity(140U);
    msg.op = 4U;
    msg.actions.assign("ZTDDRXHSUWVMZNKJY");

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
    msg.setTimeStamp(0.5336080912944934);
    msg.setSource(17698U);
    msg.setSourceEntity(237U);
    msg.setDestination(49813U);
    msg.setDestinationEntity(68U);
    msg.op = 38U;
    msg.actions.assign("GROKMMWRIDHZPSRBKNAVUQLMPVAWSKEPASAKRSTUXLOTZNTJUZQWZVWFYCHGRBTTZGXCAPBDJIQFOKHCYAORIFQDQZFLNVDLJEYQSMEEKPNWHJIBMYLFNUNESBGJXNNCYHXVLELQDWXIUAOBTYJXSUMPGNNXVECXMVHHXPAWHMDQZIGVKJKOPYOJYKLATGXVWAYCTWFQBTPPKCVRSUBMJDJFO");

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
    msg.setTimeStamp(0.67710697515146);
    msg.setSource(45190U);
    msg.setSourceEntity(168U);
    msg.setDestination(53138U);
    msg.setDestinationEntity(133U);
    msg.op = 152U;
    msg.actions.assign("EIVJHPJPYOI");

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
    msg.setTimeStamp(0.3414544515477067);
    msg.setSource(20827U);
    msg.setSourceEntity(236U);
    msg.setDestination(56126U);
    msg.setDestinationEntity(217U);
    msg.actions.assign("DSOVAGQACUPJRKQNGGTFRFHQENHJHBOFSERTIMEWWEPVNLOOKXNRPKPNVVQCCSREAPWZDUKMHKTGPSGNKIXGEDICLJWWPMTQVICVZTSPU");

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
    msg.setTimeStamp(0.8230698288913854);
    msg.setSource(62055U);
    msg.setSourceEntity(213U);
    msg.setDestination(22023U);
    msg.setDestinationEntity(105U);
    msg.actions.assign("AOULPDAJUDZQ");

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
    msg.setTimeStamp(0.7709204183701011);
    msg.setSource(56479U);
    msg.setSourceEntity(15U);
    msg.setDestination(3100U);
    msg.setDestinationEntity(226U);
    msg.actions.assign("AEMVZTPNEZDEEVHFAUQASHQRDKBHSMUMFHXYXNAMRFAQKTILRUXSBQOLXSTQIPWPNJASGPSOLWSCIATBTDOTZWDNPEPOQGJOVMUSZXWYZOHNGWCFQUMVBZDZM");

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
    msg.setTimeStamp(0.9236335613667787);
    msg.setSource(50062U);
    msg.setSourceEntity(238U);
    msg.setDestination(41915U);
    msg.setDestinationEntity(210U);
    msg.button = 142U;
    msg.value = 12U;

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
    msg.setTimeStamp(0.5875639423621041);
    msg.setSource(61437U);
    msg.setSourceEntity(207U);
    msg.setDestination(7892U);
    msg.setDestinationEntity(197U);
    msg.button = 12U;
    msg.value = 135U;

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
    msg.setTimeStamp(0.2504859963328442);
    msg.setSource(30910U);
    msg.setSourceEntity(185U);
    msg.setDestination(38857U);
    msg.setDestinationEntity(14U);
    msg.button = 160U;
    msg.value = 135U;

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
    msg.setTimeStamp(0.1886250034424649);
    msg.setSource(11273U);
    msg.setSourceEntity(126U);
    msg.setDestination(5657U);
    msg.setDestinationEntity(207U);
    msg.op = 56U;
    msg.text.assign("LNIGBCWJPSORRPJGYSCQEHPAGOWVCMEBYHANHWITRZEHCKVKDNCMHJQEQOQDYZODIXWBBYJEMNZRYPTDUZUBXUJBIIADTTISKKEEDDCHTMOMNZLFAPIQVGRPKRUQQLSHAFZLLGAJOGSUOLWJUMUHPFFMVFXNXGF");

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
    msg.setTimeStamp(0.23620953765261798);
    msg.setSource(18781U);
    msg.setSourceEntity(210U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(96U);
    msg.op = 64U;
    msg.text.assign("DLGNHGCRTOADNDVECFXFAVTMUPSUHZVGJHHWOUSCDQKARZCRNYIXXVCL");

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
    msg.setTimeStamp(0.02172976697056217);
    msg.setSource(46202U);
    msg.setSourceEntity(219U);
    msg.setDestination(34500U);
    msg.setDestinationEntity(72U);
    msg.op = 172U;
    msg.text.assign("CUYZGLPOVTRFGNNTAQVJTFSIDDWXBSLJZOSKZEDERALZRQLOYITADSDQANMHQKQINCGCIBIMRUJRCXVMCCKDVHSWJDPYKYUSESWTZLFEGNZNXIIPNMLPQBTWBMXNAGKVYFYBWXYTVGJHOUBUPOBOHCJGJRRZOPKWGMEWOTUBJ");

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
    msg.setTimeStamp(0.7764955963192127);
    msg.setSource(6539U);
    msg.setSourceEntity(22U);
    msg.setDestination(48505U);
    msg.setDestinationEntity(44U);
    msg.op = 47U;
    msg.time_remain = 0.973241206697878;
    msg.sched_time = 0.988221901891108;

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
    msg.setTimeStamp(0.5769232638451901);
    msg.setSource(38889U);
    msg.setSourceEntity(123U);
    msg.setDestination(50326U);
    msg.setDestinationEntity(121U);
    msg.op = 70U;
    msg.time_remain = 0.09297470967552868;
    msg.sched_time = 0.3800042171012852;

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
    msg.setTimeStamp(0.58409990689737);
    msg.setSource(8922U);
    msg.setSourceEntity(78U);
    msg.setDestination(35400U);
    msg.setDestinationEntity(18U);
    msg.op = 112U;
    msg.time_remain = 0.5864652084101915;
    msg.sched_time = 0.3865425631135494;

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
    msg.setTimeStamp(0.3712263917860503);
    msg.setSource(64486U);
    msg.setSourceEntity(116U);
    msg.setDestination(24948U);
    msg.setDestinationEntity(247U);
    msg.name.assign("VDAACEUPPFDTYMOIMLRQRFPLEUGMFZXVXTSAQVCVSDWQXTBOYASAYKGGZJTNMPCJJCPMKRFQQMWWQDIKUXEGINJKUNHHPAOLGJUENOTMKGUBRZJBEQGGDWHYUHHMFVSCEOZKYFSBMLXDRCGWQWAPTNVYHOZVZJXNEHUBTLATSPIBXRUOONFW");
    msg.op = 5U;
    msg.sched_time = 0.3023327192780858;

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
    msg.setTimeStamp(0.4403374306176193);
    msg.setSource(28475U);
    msg.setSourceEntity(225U);
    msg.setDestination(16762U);
    msg.setDestinationEntity(165U);
    msg.name.assign("GYDFUNHREWUOWDTMZHHAQYZKUVFOPRPGHHLAPZJDOYHNPYBQMFIZWUTOQSALVLKWXKECQMSYSULMDAIRIBXJGRQFMCLFYBPHZHLIJMTNTTDVKAVTYLPBVONTJXEIGWUVEDNNSXQQFZQXJEIBRFVOBNPKICPYLMARKABTJSREFTLWUSBHDWBCSJAWCEMVXELVOKNXSXGXOHNMKADIUYJGRDZCGWJZKDIFISCCKGANUGMPEBCRC");
    msg.op = 9U;
    msg.sched_time = 0.015131508154093032;

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
    msg.setTimeStamp(0.29684248871820507);
    msg.setSource(13102U);
    msg.setSourceEntity(4U);
    msg.setDestination(52891U);
    msg.setDestinationEntity(146U);
    msg.name.assign("OKGTLMPXHMJXRKWTFQZNVMNFXAWJKFUFEPFVGRZGJVZSDIBWCXBADGXKHKAXIZQYFUYPJRIEQQNBVABCLMBWNGRVRHHVODJSWZQMOPRIWOMYTSCALCLEKXFKFEYPIEYMQYYXYHEFSIIEQDWORCTTUPHMZLJGNOGUBOYBXND");
    msg.op = 180U;
    msg.sched_time = 0.36536503555395683;

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
    msg.setTimeStamp(0.5549129096342943);
    msg.setSource(6546U);
    msg.setSourceEntity(187U);
    msg.setDestination(32765U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.49259481696275864);
    msg.setSource(56852U);
    msg.setSourceEntity(233U);
    msg.setDestination(37396U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.8804936050289599);
    msg.setSource(47164U);
    msg.setSourceEntity(246U);
    msg.setDestination(31190U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.07383091874529002);
    msg.setSource(61355U);
    msg.setSourceEntity(108U);
    msg.setDestination(38681U);
    msg.setDestinationEntity(187U);
    msg.name.assign("FTOZMYIIIASBEPDOEWXMIDELRLMXFKAGMLDNMJJMPBSGAQCSPFICHKNUHPQKTHADUNWXTZPJFPBSUBGZHFGVNDVCBXBNBOVOGDCSZRYYOHHGFEYXZEQEFPNJNCJZTKSKWGXCMWTWLICKXYWFAJAYYCJQOROQRVQJEYUYVSZWQDCIUKNETZAPLETVSTJIBAQOBLHKKXWUPIMSHRULFIKRDTLAVXUUWNHMDJSFWLQGRHRGRAOGXBDE");
    msg.state = 112U;

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
    msg.setTimeStamp(0.5849440508838678);
    msg.setSource(17803U);
    msg.setSourceEntity(169U);
    msg.setDestination(19752U);
    msg.setDestinationEntity(183U);
    msg.name.assign("VHRGWSQKAPFCANUZHOCODXFYDPNWPBTECMVBCTFZUKSIJQVKWIWZGUHXIAKSOEYXBWGNVYIFJRSCOMBAQEYZSKDBBTEYHAXXBKSKBIFQCRJMYPGTABPBEUCFZTGLSAUXYZCRLJVEGSOJNENDUYZMNGIOWECTKILWGGQTQNOSDUNRYLWUMNLDMVODTRXQPJINRHCFKHMFXDEVJFUHDMFOIRPLZS");
    msg.state = 233U;

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
    msg.setTimeStamp(0.28048622354664576);
    msg.setSource(59958U);
    msg.setSourceEntity(101U);
    msg.setDestination(13032U);
    msg.setDestinationEntity(159U);
    msg.name.assign("CZULGQKSYXUEEBOQZLPPWVFUFVXRHQTHNBPEQJDHCFOKIWAFPUYMYRKQRRHSTNXYSCLCHBYEYPAJUDIPOBTZJMNAVGPPYWUJWGNZNMSWTYDCECONF");
    msg.state = 18U;

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
    msg.setTimeStamp(0.40253099571469486);
    msg.setSource(30779U);
    msg.setSourceEntity(20U);
    msg.setDestination(8209U);
    msg.setDestinationEntity(185U);
    msg.name.assign("TJINWVTPKCKHGRWMTTUZITGVHGPCPBWUP");
    msg.value = 254U;

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
    msg.setTimeStamp(0.45823059908136443);
    msg.setSource(22980U);
    msg.setSourceEntity(184U);
    msg.setDestination(43434U);
    msg.setDestinationEntity(53U);
    msg.name.assign("WFEVIKDHUPPTWUYPRHIJIKLJDDTVQNEIWUJTBVGBWRLOSWIWKMRABAVSKMBYLYOKANYRRZXBKIULJXVCTAAV");
    msg.value = 216U;

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
    msg.setTimeStamp(0.8154494954549718);
    msg.setSource(39077U);
    msg.setSourceEntity(172U);
    msg.setDestination(61888U);
    msg.setDestinationEntity(21U);
    msg.name.assign("UDYKNMIAJVNQYJCBEJZOBZUGPSSATGXSAJWKYCFRGQCPAHJUUSHWOLUMBJGIXLKCGVCDYXNWYQEFMSKELBRRETABJLUYZBPOCPHXMHHDDQFXBRMNENNEWYLRTFIJUAZVCYPWGOOXXLQAEIJVFEISWIUHRXQNWTVMPXNGTUHKLBPPCKSSPQQBCAOORFFVRVUMDWCDBVRSDIZDAESGIVYTMWLKQIZZHXTDWLIFYZHZLPZV");
    msg.value = 249U;

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
    msg.setTimeStamp(0.011226218312869629);
    msg.setSource(18791U);
    msg.setSourceEntity(189U);
    msg.setDestination(46670U);
    msg.setDestinationEntity(160U);
    msg.name.assign("BIWZQULTTOPEWJCABVEXOOFLTWMMOHRXIHPTVCSNEIMFHZPRLMUGRGBKCJYDDBDJFIPBQASWYGREUOOINLSJDYSUUYCJGZKHLSAICAQZDKYQVVVKXOMFPCNUBHRNRDNSTBXNZYXWTCLUXFWGDKLVZXSAMJOHKWCPSGATPCPBCWQIYPZJKJOZTHIBYTROKSUFGJUVHZAXFAREGMKVDWHJVAQZFKNVSFNEGEERBTE");

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
    msg.setTimeStamp(0.42904350344088216);
    msg.setSource(21720U);
    msg.setSourceEntity(145U);
    msg.setDestination(5524U);
    msg.setDestinationEntity(187U);
    msg.name.assign("OXCCBEZNMOGBLPSTQDWFGXMGBBYYRBKKDFHAGVYWDBEFBIBNKUJZRHVHJACHYFSLTLXSIMKRYTNMTOYGXHYQUZSEOHDIWPWLEJJHCOLVPCWWKRFQOCJIXUDOASXGQALTVTSKJVPKQTWKAAPAYFLXWGDAPVHIIYGFGFUPIDJHTIB");

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
    msg.setTimeStamp(0.5908072972579628);
    msg.setSource(64861U);
    msg.setSourceEntity(118U);
    msg.setDestination(24334U);
    msg.setDestinationEntity(121U);
    msg.name.assign("XNHGTSLUDMWIIDQVCWAMWOHPCFJSUPKLARZIFPTKPNPNIFYRFQVBGTMMTTGGELSBVZGMPYTIXGQBDLBDEHAJLZKQWDOMOJRVCPJRFEUECHATJFWMMNCQCATUWYGHCXZRTRLEBFMZVDJIEQGDYYWEXYZFZHXAQNXEEOENYVIQQFRGHDNKOIPKHWAZSOPKNOVFILLSNKDNJ");

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
    msg.setTimeStamp(0.37975469885595803);
    msg.setSource(41131U);
    msg.setSourceEntity(242U);
    msg.setDestination(22410U);
    msg.setDestinationEntity(59U);
    msg.name.assign("NMSXZSFGKYQIQTTEJZTCLUPERLNJHFOMZDXWORPYLRUWWQZBUKETOUXNZPXHGSOCPCNMLLAIPWEICXJF");
    msg.value = 119U;

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
    msg.setTimeStamp(0.8557760988942207);
    msg.setSource(34542U);
    msg.setSourceEntity(52U);
    msg.setDestination(33539U);
    msg.setDestinationEntity(111U);
    msg.name.assign("ZTLFGXYJRBSXATRCLJAYNZXLLTLHQXEXAIUBJHPBMZEGQODTYWSNWVLZNMEJOHNWPEOFQOAMFWLHKEHDZIKWVNHQCGBZBKFIUXJDGRPJPTFWQETVSASAIAPUDMQCRNVQYCEWSUXEDFJOMIHEZVRWGZXTTUOK");
    msg.value = 40U;

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
    msg.setTimeStamp(0.044118064122115386);
    msg.setSource(22880U);
    msg.setSourceEntity(55U);
    msg.setDestination(27386U);
    msg.setDestinationEntity(124U);
    msg.name.assign("EBXATQNAVCOHPRLGXSVFXMYLRQPPNLYBPRJIXMKJDBQKIZKJJCIVPTHFVGRYWBQLUAMFJCLZGGUPBHMEYOIZADBMFKUQSWFLTWBTANEJXAMHBIDXYETKOHSIFJYUAEIEQGKSZWQVRHLWVHYNGVAJW");
    msg.value = 141U;

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
    msg.setTimeStamp(0.6652964978914909);
    msg.setSource(57460U);
    msg.setSourceEntity(213U);
    msg.setDestination(53520U);
    msg.setDestinationEntity(107U);
    msg.id = 21U;
    msg.period = 1581391328U;
    msg.duty_cycle = 3246059282U;

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
    msg.setTimeStamp(0.18849287621316801);
    msg.setSource(50969U);
    msg.setSourceEntity(240U);
    msg.setDestination(41913U);
    msg.setDestinationEntity(14U);
    msg.id = 130U;
    msg.period = 2676078401U;
    msg.duty_cycle = 783652144U;

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
    msg.setTimeStamp(0.1519105513464616);
    msg.setSource(43234U);
    msg.setSourceEntity(233U);
    msg.setDestination(44724U);
    msg.setDestinationEntity(188U);
    msg.id = 95U;
    msg.period = 2971307427U;
    msg.duty_cycle = 1325223965U;

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
    msg.setTimeStamp(0.9527598914571624);
    msg.setSource(27557U);
    msg.setSourceEntity(128U);
    msg.setDestination(36257U);
    msg.setDestinationEntity(155U);
    msg.id = 236U;
    msg.period = 1599508790U;
    msg.duty_cycle = 899942020U;

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
    msg.setTimeStamp(0.8757346660408865);
    msg.setSource(52005U);
    msg.setSourceEntity(220U);
    msg.setDestination(43607U);
    msg.setDestinationEntity(178U);
    msg.id = 5U;
    msg.period = 1124502298U;
    msg.duty_cycle = 3114742508U;

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
    msg.setTimeStamp(0.3673455449314911);
    msg.setSource(11363U);
    msg.setSourceEntity(76U);
    msg.setDestination(16340U);
    msg.setDestinationEntity(20U);
    msg.id = 252U;
    msg.period = 760771802U;
    msg.duty_cycle = 2188520609U;

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
    msg.setTimeStamp(0.48155651300461366);
    msg.setSource(18305U);
    msg.setSourceEntity(195U);
    msg.setDestination(18107U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.07488817062407849;
    msg.lon = 0.07009828316083799;
    msg.height = 0.20721029314922212;
    msg.x = 0.7155695357581094;
    msg.y = 0.23786575077226912;
    msg.z = 0.5922507052150188;
    msg.phi = 0.7702842873817183;
    msg.theta = 0.08289000135061553;
    msg.psi = 0.7158935356962007;
    msg.u = 0.1250239774115428;
    msg.v = 0.23656566582563232;
    msg.w = 0.4260815786643305;
    msg.vx = 0.2147965591381149;
    msg.vy = 0.06630459713363424;
    msg.vz = 0.418699798504093;
    msg.p = 0.13546664952942689;
    msg.q = 0.5744080163735492;
    msg.r = 0.0655504749315653;
    msg.depth = 0.20529704870926502;
    msg.alt = 0.7544636655031968;

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
    msg.setTimeStamp(0.8473510674620885);
    msg.setSource(57868U);
    msg.setSourceEntity(149U);
    msg.setDestination(8791U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.3696061236267476;
    msg.lon = 0.9752674001946547;
    msg.height = 0.4970095309641481;
    msg.x = 0.39913276562363287;
    msg.y = 0.37350024052932895;
    msg.z = 0.22874875678867146;
    msg.phi = 0.1496398224454385;
    msg.theta = 0.16166362910553334;
    msg.psi = 0.1472726436369547;
    msg.u = 0.17722821608494987;
    msg.v = 0.38267841175991857;
    msg.w = 0.6167399260647696;
    msg.vx = 0.5470384424645435;
    msg.vy = 0.9135517040620479;
    msg.vz = 0.3750266231403505;
    msg.p = 0.30304026670708206;
    msg.q = 0.2876159819643428;
    msg.r = 0.9419243247299695;
    msg.depth = 0.8261772762177372;
    msg.alt = 0.9798544021017387;

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
    msg.setTimeStamp(0.4510587673411651);
    msg.setSource(59616U);
    msg.setSourceEntity(113U);
    msg.setDestination(22261U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.21695223088269155;
    msg.lon = 0.33865872356866233;
    msg.height = 0.21470708944662875;
    msg.x = 0.6075042724098442;
    msg.y = 0.2811283367426496;
    msg.z = 0.15327725641060885;
    msg.phi = 0.436381763916006;
    msg.theta = 0.8084405765321847;
    msg.psi = 0.08338359521800665;
    msg.u = 0.8107373622677907;
    msg.v = 0.709320597715108;
    msg.w = 0.848330840725356;
    msg.vx = 0.7870522684531209;
    msg.vy = 0.6408427735541944;
    msg.vz = 0.8292914605256375;
    msg.p = 0.4373684878743036;
    msg.q = 0.5631472682691147;
    msg.r = 0.38503786257470907;
    msg.depth = 0.5464951745616947;
    msg.alt = 0.23979922188274905;

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
    msg.setTimeStamp(0.7249385619583123);
    msg.setSource(32218U);
    msg.setSourceEntity(15U);
    msg.setDestination(61627U);
    msg.setDestinationEntity(125U);
    msg.x = 0.6609395133724411;
    msg.y = 0.4371766383219926;
    msg.z = 0.15454885502753113;

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
    msg.setTimeStamp(0.7408915370017032);
    msg.setSource(26598U);
    msg.setSourceEntity(82U);
    msg.setDestination(7807U);
    msg.setDestinationEntity(62U);
    msg.x = 0.32395806808761207;
    msg.y = 0.7642436086287501;
    msg.z = 0.8484158612996846;

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
    msg.setTimeStamp(0.2963988241125888);
    msg.setSource(29052U);
    msg.setSourceEntity(83U);
    msg.setDestination(65479U);
    msg.setDestinationEntity(252U);
    msg.x = 0.8655013692538188;
    msg.y = 0.2539272050887392;
    msg.z = 0.6459012268126937;

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
    msg.setTimeStamp(0.5125338471745423);
    msg.setSource(32213U);
    msg.setSourceEntity(15U);
    msg.setDestination(61760U);
    msg.setDestinationEntity(10U);
    msg.value = 0.5117185751051143;

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
    msg.setTimeStamp(0.9777689796479248);
    msg.setSource(62168U);
    msg.setSourceEntity(9U);
    msg.setDestination(44654U);
    msg.setDestinationEntity(47U);
    msg.value = 0.22561316287488886;

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
    msg.setTimeStamp(0.2051573944941758);
    msg.setSource(57684U);
    msg.setSourceEntity(139U);
    msg.setDestination(15424U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0017083661502328429;

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
    msg.setTimeStamp(0.717031196509902);
    msg.setSource(30410U);
    msg.setSourceEntity(218U);
    msg.setDestination(58892U);
    msg.setDestinationEntity(248U);
    msg.value = 0.7638797339045418;

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
    msg.setTimeStamp(0.1795004173414726);
    msg.setSource(54632U);
    msg.setSourceEntity(185U);
    msg.setDestination(42961U);
    msg.setDestinationEntity(246U);
    msg.value = 0.26453213981987833;

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
    msg.setTimeStamp(0.31054732509015726);
    msg.setSource(39559U);
    msg.setSourceEntity(156U);
    msg.setDestination(53930U);
    msg.setDestinationEntity(234U);
    msg.value = 0.2609780728291179;

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
    msg.setTimeStamp(0.3798330043910595);
    msg.setSource(5578U);
    msg.setSourceEntity(69U);
    msg.setDestination(47459U);
    msg.setDestinationEntity(109U);
    msg.x = 0.2623290420225465;
    msg.y = 0.20930195023842213;
    msg.z = 0.18315860714018395;
    msg.phi = 0.28419839175000217;
    msg.theta = 0.323559065009416;
    msg.psi = 0.7358586260441676;
    msg.p = 0.48471008959132067;
    msg.q = 0.6377288422291999;
    msg.r = 0.48094302706216063;
    msg.u = 0.5317317749166539;
    msg.v = 0.09016319267143136;
    msg.w = 0.8396008685632833;
    msg.bias_psi = 0.6355255229384652;
    msg.bias_r = 0.0053757354047282435;

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
    msg.setTimeStamp(0.6067394020918261);
    msg.setSource(55273U);
    msg.setSourceEntity(217U);
    msg.setDestination(3617U);
    msg.setDestinationEntity(81U);
    msg.x = 0.8001260718596415;
    msg.y = 0.12497430905156437;
    msg.z = 0.1782300623020392;
    msg.phi = 0.015698516000148488;
    msg.theta = 0.3998534889561052;
    msg.psi = 0.30436914946945637;
    msg.p = 0.361161279492602;
    msg.q = 0.13995059348650174;
    msg.r = 0.12865032285315126;
    msg.u = 0.6715620440049623;
    msg.v = 0.15389336569493894;
    msg.w = 0.02069387269118428;
    msg.bias_psi = 0.1634609889166897;
    msg.bias_r = 0.6777607422853287;

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
    msg.setTimeStamp(0.903518480904577);
    msg.setSource(54077U);
    msg.setSourceEntity(99U);
    msg.setDestination(41638U);
    msg.setDestinationEntity(166U);
    msg.x = 0.7427188681420329;
    msg.y = 0.18362750720928067;
    msg.z = 0.6606769909694035;
    msg.phi = 0.9749772035509915;
    msg.theta = 0.8005301376576393;
    msg.psi = 0.5070643692289576;
    msg.p = 0.9107761974897057;
    msg.q = 0.4230573695022011;
    msg.r = 0.2495609382603976;
    msg.u = 0.6977724880219502;
    msg.v = 0.5187760317732115;
    msg.w = 0.08682637532705373;
    msg.bias_psi = 0.20751546503921958;
    msg.bias_r = 0.49359692333739813;

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
    msg.setTimeStamp(0.6105635917213945);
    msg.setSource(14547U);
    msg.setSourceEntity(197U);
    msg.setDestination(34914U);
    msg.setDestinationEntity(93U);
    msg.bias_psi = 0.590237665826127;
    msg.bias_r = 0.7567003646804498;
    msg.cog = 0.8264757739878563;
    msg.cyaw = 0.1672403668679896;
    msg.lbl_rej_level = 0.1565839750146404;
    msg.gps_rej_level = 0.33710769742810087;
    msg.custom_x = 0.583270590957091;
    msg.custom_y = 0.6518432622054141;
    msg.custom_z = 0.8759822157995453;

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
    msg.setTimeStamp(0.36857038074292325);
    msg.setSource(36246U);
    msg.setSourceEntity(69U);
    msg.setDestination(54723U);
    msg.setDestinationEntity(10U);
    msg.bias_psi = 0.6644795894165714;
    msg.bias_r = 0.299333953329354;
    msg.cog = 0.15277894243895163;
    msg.cyaw = 0.81326815907812;
    msg.lbl_rej_level = 0.8613686514887625;
    msg.gps_rej_level = 0.7825321444977844;
    msg.custom_x = 0.30023279674936;
    msg.custom_y = 0.06247471501045032;
    msg.custom_z = 0.8412493848738632;

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
    msg.setTimeStamp(0.6573140334134431);
    msg.setSource(31302U);
    msg.setSourceEntity(186U);
    msg.setDestination(33930U);
    msg.setDestinationEntity(156U);
    msg.bias_psi = 0.05295969623912322;
    msg.bias_r = 0.23635991068510243;
    msg.cog = 0.28815224134776674;
    msg.cyaw = 0.213007051913933;
    msg.lbl_rej_level = 0.4300630360283434;
    msg.gps_rej_level = 0.039821078574683755;
    msg.custom_x = 0.48023174846074623;
    msg.custom_y = 0.8780200603328844;
    msg.custom_z = 0.6315601478582977;

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
    msg.setTimeStamp(0.8749990873613636);
    msg.setSource(15131U);
    msg.setSourceEntity(235U);
    msg.setDestination(7592U);
    msg.setDestinationEntity(78U);
    msg.utc_time = 0.8173976858015439;
    msg.reason = 41U;

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
    msg.setTimeStamp(0.1933643190171881);
    msg.setSource(39151U);
    msg.setSourceEntity(36U);
    msg.setDestination(7397U);
    msg.setDestinationEntity(188U);
    msg.utc_time = 0.14363287598808694;
    msg.reason = 222U;

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
    msg.setTimeStamp(0.8077190419365347);
    msg.setSource(2888U);
    msg.setSourceEntity(91U);
    msg.setDestination(50920U);
    msg.setDestinationEntity(85U);
    msg.utc_time = 0.8266808184090862;
    msg.reason = 23U;

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
    msg.setTimeStamp(0.9138410175528106);
    msg.setSource(29188U);
    msg.setSourceEntity(5U);
    msg.setDestination(39907U);
    msg.setDestinationEntity(77U);
    msg.id = 96U;
    msg.range = 0.35982345754796174;
    msg.acceptance = 33U;

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
    msg.setTimeStamp(0.3521904230712244);
    msg.setSource(54784U);
    msg.setSourceEntity(95U);
    msg.setDestination(5558U);
    msg.setDestinationEntity(165U);
    msg.id = 178U;
    msg.range = 0.21810020012992393;
    msg.acceptance = 184U;

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
    msg.setTimeStamp(0.004157252583699811);
    msg.setSource(10703U);
    msg.setSourceEntity(253U);
    msg.setDestination(31192U);
    msg.setDestinationEntity(111U);
    msg.id = 172U;
    msg.range = 0.025170403350641468;
    msg.acceptance = 167U;

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
    msg.setTimeStamp(0.6020139313833845);
    msg.setSource(1779U);
    msg.setSourceEntity(124U);
    msg.setDestination(38674U);
    msg.setDestinationEntity(105U);
    msg.type = 210U;
    msg.reason = 139U;
    msg.value = 0.704024518220424;
    msg.timestep = 0.5458491888423728;

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
    msg.setTimeStamp(0.850454767417118);
    msg.setSource(36984U);
    msg.setSourceEntity(241U);
    msg.setDestination(46022U);
    msg.setDestinationEntity(144U);
    msg.type = 96U;
    msg.reason = 40U;
    msg.value = 0.6359408896699764;
    msg.timestep = 0.9404888374275522;

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
    msg.setTimeStamp(0.4395769603025389);
    msg.setSource(24447U);
    msg.setSourceEntity(160U);
    msg.setDestination(41735U);
    msg.setDestinationEntity(67U);
    msg.type = 227U;
    msg.reason = 183U;
    msg.value = 0.1782867898979631;
    msg.timestep = 0.6843567272520709;

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
    msg.setTimeStamp(0.2596522880883467);
    msg.setSource(48206U);
    msg.setSourceEntity(204U);
    msg.setDestination(45233U);
    msg.setDestinationEntity(43U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EHDSFIJNJPOGFEAHCVDWUGBZXVHRSCIGBILZCHEBTWSUMJXNZNFWPQMUBHMFEXIEGCRJLTKQEFDMVFBEIIRONADNAUNNJAKUITYZP");
    tmp_msg_0.lat = 0.7879367866712855;
    tmp_msg_0.lon = 0.3872985439383668;
    tmp_msg_0.depth = 0.9122808039496281;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 65U;
    tmp_msg_0.transponder_delay = 19U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.35749532530672523;
    msg.y = 0.6836916050919607;
    msg.var_x = 0.3330840674888089;
    msg.var_y = 0.6894481340456288;
    msg.distance = 0.39376057621345695;

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
    msg.setTimeStamp(0.21888398358930194);
    msg.setSource(4605U);
    msg.setSourceEntity(216U);
    msg.setDestination(20803U);
    msg.setDestinationEntity(68U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DQMRCOAFLPYBLXBXTULSGFGEEIPMMTVXAHSGXCAOUOKUQYUNGQMKYFVRHUJFQPCRPNBJHWXYOHHIVDNNPICWOGXONIVKYNDTRICZSMHRUHEMXTFSUGRUGLCZZGAQAKIATGEVUETJKSFDKWJIKDBZOTLFDLRPSVLSQVKDNXVDAWALZORWWDFFXP");
    tmp_msg_0.lat = 0.9033840795574695;
    tmp_msg_0.lon = 0.9706246834981945;
    tmp_msg_0.depth = 0.2778695131683314;
    tmp_msg_0.query_channel = 177U;
    tmp_msg_0.reply_channel = 210U;
    tmp_msg_0.transponder_delay = 34U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4402650559524385;
    msg.y = 0.3722495891179757;
    msg.var_x = 0.1246933843809318;
    msg.var_y = 0.5232981482426265;
    msg.distance = 0.41163811870729794;

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
    msg.setTimeStamp(0.2754632741887789);
    msg.setSource(7847U);
    msg.setSourceEntity(218U);
    msg.setDestination(27054U);
    msg.setDestinationEntity(44U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DWZDGUTIUUKGKEVVCFQZDFVTOBPYUJHLZVCJRJHVRALQWMIEUMJDFNWHTBUZSHXKJZDEWFFOQUXIRLLSOYJTABYTEOQRFZNCKESXESMBXKDJWBWLNLHHCGGXJBVSYTEBCIMBVPMMBDVFVRQJGONTMPAQIRYZRQQIKSHPLCDAIMHFUSXOATANAOCWYDLMGJOHSGSIEFSNIQACOWYRWDPXXREZLPRWFBXUGANN");
    tmp_msg_0.lat = 0.7024639806566452;
    tmp_msg_0.lon = 0.1454172782078058;
    tmp_msg_0.depth = 0.31510480960032616;
    tmp_msg_0.query_channel = 120U;
    tmp_msg_0.reply_channel = 254U;
    tmp_msg_0.transponder_delay = 41U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.18728263941704382;
    msg.y = 0.43723863438707167;
    msg.var_x = 0.7019983740381056;
    msg.var_y = 0.4919921740426826;
    msg.distance = 0.6358657387870326;

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
    msg.setTimeStamp(0.7208485498290782);
    msg.setSource(23508U);
    msg.setSourceEntity(102U);
    msg.setDestination(16105U);
    msg.setDestinationEntity(166U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.9065569737564126);
    msg.setSource(15523U);
    msg.setSourceEntity(209U);
    msg.setDestination(3371U);
    msg.setDestinationEntity(8U);
    msg.state = 238U;

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
    msg.setTimeStamp(0.5486173636763874);
    msg.setSource(62961U);
    msg.setSourceEntity(151U);
    msg.setDestination(43091U);
    msg.setDestinationEntity(48U);
    msg.state = 164U;

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
    msg.setTimeStamp(0.8308014898918377);
    msg.setSource(45069U);
    msg.setSourceEntity(50U);
    msg.setDestination(5802U);
    msg.setDestinationEntity(9U);
    msg.x = 0.6647270258802798;
    msg.y = 0.021433725829100636;
    msg.z = 0.45684184858541055;

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
    msg.setTimeStamp(0.07165523142212371);
    msg.setSource(59063U);
    msg.setSourceEntity(104U);
    msg.setDestination(64329U);
    msg.setDestinationEntity(164U);
    msg.x = 0.8366634400959765;
    msg.y = 0.459421600540194;
    msg.z = 0.5662228411683449;

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
    msg.setTimeStamp(0.027916865366462873);
    msg.setSource(43717U);
    msg.setSourceEntity(86U);
    msg.setDestination(33417U);
    msg.setDestinationEntity(203U);
    msg.x = 0.33415696713716647;
    msg.y = 0.6644245541533705;
    msg.z = 0.6460828709906673;

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
    msg.setTimeStamp(0.7119917973813418);
    msg.setSource(19081U);
    msg.setSourceEntity(207U);
    msg.setDestination(42440U);
    msg.setDestinationEntity(168U);
    msg.va = 0.6430644891761574;
    msg.aoa = 0.3342349220934244;
    msg.ssa = 0.5461204155842742;

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
    msg.setTimeStamp(0.767873332557267);
    msg.setSource(26570U);
    msg.setSourceEntity(12U);
    msg.setDestination(52269U);
    msg.setDestinationEntity(109U);
    msg.va = 0.446512377478285;
    msg.aoa = 0.5108048450150026;
    msg.ssa = 0.6737727095560578;

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
    msg.setTimeStamp(0.20019840462093752);
    msg.setSource(14287U);
    msg.setSourceEntity(236U);
    msg.setDestination(40824U);
    msg.setDestinationEntity(213U);
    msg.va = 0.49841544528274284;
    msg.aoa = 0.12980561805653712;
    msg.ssa = 0.040807545421834845;

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
    msg.setTimeStamp(0.47342901672862003);
    msg.setSource(18940U);
    msg.setSourceEntity(111U);
    msg.setDestination(4612U);
    msg.setDestinationEntity(248U);
    msg.value = 0.9134803811055208;

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
    msg.setTimeStamp(0.1656980200765037);
    msg.setSource(29201U);
    msg.setSourceEntity(95U);
    msg.setDestination(24836U);
    msg.setDestinationEntity(71U);
    msg.value = 0.19977036911824497;

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
    msg.setTimeStamp(0.5346010689919197);
    msg.setSource(1962U);
    msg.setSourceEntity(141U);
    msg.setDestination(61191U);
    msg.setDestinationEntity(128U);
    msg.value = 0.8307391066712185;

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
    msg.setTimeStamp(0.9805667254217896);
    msg.setSource(9788U);
    msg.setSourceEntity(172U);
    msg.setDestination(17726U);
    msg.setDestinationEntity(53U);
    msg.value = 0.903635928655366;
    msg.z_units = 245U;

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
    msg.setTimeStamp(0.6396297094064607);
    msg.setSource(28327U);
    msg.setSourceEntity(130U);
    msg.setDestination(31394U);
    msg.setDestinationEntity(92U);
    msg.value = 0.3147263312646712;
    msg.z_units = 207U;

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
    msg.setTimeStamp(0.3879889247474655);
    msg.setSource(41195U);
    msg.setSourceEntity(72U);
    msg.setDestination(55343U);
    msg.setDestinationEntity(86U);
    msg.value = 0.08349021354325226;
    msg.z_units = 43U;

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
    msg.setTimeStamp(0.8170172242434447);
    msg.setSource(40719U);
    msg.setSourceEntity(53U);
    msg.setDestination(26647U);
    msg.setDestinationEntity(56U);
    msg.value = 0.8074562178410517;
    msg.speed_units = 66U;

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
    msg.setTimeStamp(0.8701902615640537);
    msg.setSource(51460U);
    msg.setSourceEntity(168U);
    msg.setDestination(8337U);
    msg.setDestinationEntity(182U);
    msg.value = 0.775207749980095;
    msg.speed_units = 41U;

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
    msg.setTimeStamp(0.4581722071265584);
    msg.setSource(39192U);
    msg.setSourceEntity(196U);
    msg.setDestination(59790U);
    msg.setDestinationEntity(14U);
    msg.value = 0.9363969748460884;
    msg.speed_units = 6U;

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
    msg.setTimeStamp(0.6813872250825578);
    msg.setSource(41987U);
    msg.setSourceEntity(87U);
    msg.setDestination(46866U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9975348553283196;

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
    msg.setTimeStamp(0.8935695739530511);
    msg.setSource(37247U);
    msg.setSourceEntity(49U);
    msg.setDestination(8984U);
    msg.setDestinationEntity(233U);
    msg.value = 0.57776316846081;

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
    msg.setTimeStamp(0.25008262304482);
    msg.setSource(35459U);
    msg.setSourceEntity(164U);
    msg.setDestination(19496U);
    msg.setDestinationEntity(3U);
    msg.value = 0.0017889466958370681;

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
    msg.setTimeStamp(0.9005139641303509);
    msg.setSource(57606U);
    msg.setSourceEntity(134U);
    msg.setDestination(29873U);
    msg.setDestinationEntity(57U);
    msg.value = 0.7347311955467445;

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
    msg.setTimeStamp(0.22081798474073422);
    msg.setSource(58122U);
    msg.setSourceEntity(45U);
    msg.setDestination(56571U);
    msg.setDestinationEntity(114U);
    msg.value = 0.2556883048804388;

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
    msg.setTimeStamp(0.981019896818737);
    msg.setSource(10611U);
    msg.setSourceEntity(119U);
    msg.setDestination(59486U);
    msg.setDestinationEntity(94U);
    msg.value = 0.2733942560590855;

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
    msg.setTimeStamp(0.3034137382656765);
    msg.setSource(58653U);
    msg.setSourceEntity(82U);
    msg.setDestination(52864U);
    msg.setDestinationEntity(13U);
    msg.value = 0.6851994559855419;

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
    msg.setTimeStamp(0.13559102504770348);
    msg.setSource(8018U);
    msg.setSourceEntity(210U);
    msg.setDestination(9525U);
    msg.setDestinationEntity(24U);
    msg.value = 0.4794471539086361;

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
    msg.setTimeStamp(0.48668627509705886);
    msg.setSource(54289U);
    msg.setSourceEntity(253U);
    msg.setDestination(34715U);
    msg.setDestinationEntity(91U);
    msg.value = 0.027399258491264677;

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
    msg.setTimeStamp(0.9565397242204007);
    msg.setSource(59176U);
    msg.setSourceEntity(185U);
    msg.setDestination(33522U);
    msg.setDestinationEntity(5U);
    msg.path_ref = 3014021725U;
    msg.start_lat = 0.4787565554284603;
    msg.start_lon = 0.5801165388370579;
    msg.start_z = 0.49780371348739705;
    msg.start_z_units = 179U;
    msg.end_lat = 0.1348352833066998;
    msg.end_lon = 0.7613963014763745;
    msg.end_z = 0.40276903087282445;
    msg.end_z_units = 88U;
    msg.speed = 0.09666291985268138;
    msg.speed_units = 30U;
    msg.lradius = 0.5310372442646487;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.34919949134599426);
    msg.setSource(55049U);
    msg.setSourceEntity(11U);
    msg.setDestination(15035U);
    msg.setDestinationEntity(96U);
    msg.path_ref = 414277500U;
    msg.start_lat = 0.4524038104651916;
    msg.start_lon = 0.9537771960614055;
    msg.start_z = 0.2068343943914852;
    msg.start_z_units = 214U;
    msg.end_lat = 0.9025462949733855;
    msg.end_lon = 0.20238987729598035;
    msg.end_z = 0.38868383584532495;
    msg.end_z_units = 10U;
    msg.speed = 0.13278741245256143;
    msg.speed_units = 229U;
    msg.lradius = 0.9802773815605172;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.18928717156533414);
    msg.setSource(41265U);
    msg.setSourceEntity(92U);
    msg.setDestination(3489U);
    msg.setDestinationEntity(39U);
    msg.path_ref = 2868141763U;
    msg.start_lat = 0.7521028498891962;
    msg.start_lon = 0.6716160415213401;
    msg.start_z = 0.8822575990878958;
    msg.start_z_units = 74U;
    msg.end_lat = 0.9560568315182624;
    msg.end_lon = 0.6511652110982035;
    msg.end_z = 0.0030257741884535116;
    msg.end_z_units = 173U;
    msg.speed = 0.7009304108945211;
    msg.speed_units = 156U;
    msg.lradius = 0.325858031245696;
    msg.flags = 249U;

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
    msg.setTimeStamp(0.6691894315810453);
    msg.setSource(29028U);
    msg.setSourceEntity(186U);
    msg.setDestination(33997U);
    msg.setDestinationEntity(75U);
    msg.x = 0.4206645772791313;
    msg.y = 0.14286342852629197;
    msg.z = 0.5940842843298212;
    msg.k = 0.9978633249540599;
    msg.m = 0.1084100690123525;
    msg.n = 0.0996243036153911;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.300887281450548);
    msg.setSource(22175U);
    msg.setSourceEntity(223U);
    msg.setDestination(65041U);
    msg.setDestinationEntity(128U);
    msg.x = 0.9783987391706492;
    msg.y = 0.6747566429699086;
    msg.z = 0.0040868041749655415;
    msg.k = 0.7193811314852605;
    msg.m = 0.25857810197697173;
    msg.n = 0.4336711048453289;
    msg.flags = 110U;

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
    msg.setTimeStamp(0.48538272224639);
    msg.setSource(12212U);
    msg.setSourceEntity(48U);
    msg.setDestination(57922U);
    msg.setDestinationEntity(118U);
    msg.x = 0.4695150875591265;
    msg.y = 0.835132982457903;
    msg.z = 0.4998143965174142;
    msg.k = 0.9468856387831966;
    msg.m = 0.9876850701237808;
    msg.n = 0.1699169614655497;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.04943575437129222);
    msg.setSource(34740U);
    msg.setSourceEntity(68U);
    msg.setDestination(2149U);
    msg.setDestinationEntity(25U);
    msg.value = 0.013258215849546895;

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
    msg.setTimeStamp(0.04703908592820849);
    msg.setSource(43968U);
    msg.setSourceEntity(143U);
    msg.setDestination(42453U);
    msg.setDestinationEntity(206U);
    msg.value = 0.0967933184946449;

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
    msg.setTimeStamp(0.17391683906545174);
    msg.setSource(58408U);
    msg.setSourceEntity(166U);
    msg.setDestination(58147U);
    msg.setDestinationEntity(126U);
    msg.value = 0.24029261261879542;

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
    msg.setTimeStamp(0.22636562747446054);
    msg.setSource(5752U);
    msg.setSourceEntity(59U);
    msg.setDestination(58022U);
    msg.setDestinationEntity(75U);
    msg.u = 0.2935093794606951;
    msg.v = 0.6371551548268901;
    msg.w = 0.9351484972301152;
    msg.p = 0.3560324991424857;
    msg.q = 0.21044063981493366;
    msg.r = 0.1481892895812007;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.21068976562997155);
    msg.setSource(64632U);
    msg.setSourceEntity(12U);
    msg.setDestination(2325U);
    msg.setDestinationEntity(239U);
    msg.u = 0.8328678553740924;
    msg.v = 0.9452267508296792;
    msg.w = 0.10030277483333339;
    msg.p = 0.7712734978211769;
    msg.q = 0.539137742357502;
    msg.r = 0.30202834261643074;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.27125487070985044);
    msg.setSource(8824U);
    msg.setSourceEntity(84U);
    msg.setDestination(34496U);
    msg.setDestinationEntity(214U);
    msg.u = 0.8864141973013897;
    msg.v = 0.24521537032912066;
    msg.w = 0.9001461525704613;
    msg.p = 0.9344145763354669;
    msg.q = 0.21517990760406036;
    msg.r = 0.544411546921277;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.7092964422878553);
    msg.setSource(59353U);
    msg.setSourceEntity(246U);
    msg.setDestination(32268U);
    msg.setDestinationEntity(191U);
    msg.path_ref = 1789764687U;
    msg.start_lat = 0.8659562491994026;
    msg.start_lon = 0.33583388268340064;
    msg.start_z = 0.5057443094934507;
    msg.start_z_units = 163U;
    msg.end_lat = 0.6525121187239479;
    msg.end_lon = 0.491287821516622;
    msg.end_z = 0.6198040803550638;
    msg.end_z_units = 62U;
    msg.lradius = 0.7519910059661256;
    msg.flags = 113U;
    msg.x = 0.19653274795391074;
    msg.y = 0.05402074363240239;
    msg.z = 0.6776339811604453;
    msg.vx = 0.5275162303014993;
    msg.vy = 0.4959411262548701;
    msg.vz = 0.9504206447032258;
    msg.course_error = 0.8876684451669853;
    msg.eta = 52173U;

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
    msg.setTimeStamp(0.311892234579637);
    msg.setSource(9969U);
    msg.setSourceEntity(41U);
    msg.setDestination(51611U);
    msg.setDestinationEntity(24U);
    msg.path_ref = 1530494750U;
    msg.start_lat = 0.12406118153204093;
    msg.start_lon = 0.49948470109342813;
    msg.start_z = 0.6345861782232436;
    msg.start_z_units = 236U;
    msg.end_lat = 0.5004414756509711;
    msg.end_lon = 0.06816176178340627;
    msg.end_z = 0.4669100194011936;
    msg.end_z_units = 68U;
    msg.lradius = 0.2970746220000633;
    msg.flags = 3U;
    msg.x = 0.7362903116809889;
    msg.y = 0.4986912276535578;
    msg.z = 0.2959566641966892;
    msg.vx = 0.017405083495836138;
    msg.vy = 0.9453907494861371;
    msg.vz = 0.7689326994525569;
    msg.course_error = 0.37784382193998345;
    msg.eta = 41580U;

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
    msg.setTimeStamp(0.679912524251458);
    msg.setSource(37767U);
    msg.setSourceEntity(107U);
    msg.setDestination(42035U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 780007531U;
    msg.start_lat = 0.6648288357750765;
    msg.start_lon = 0.024044652568971592;
    msg.start_z = 0.8858000527876502;
    msg.start_z_units = 107U;
    msg.end_lat = 0.41502036251839103;
    msg.end_lon = 0.08579964821287911;
    msg.end_z = 0.6690252366469424;
    msg.end_z_units = 137U;
    msg.lradius = 0.8300913297666488;
    msg.flags = 151U;
    msg.x = 0.006570184710293803;
    msg.y = 0.1727440278311595;
    msg.z = 0.9330200607423279;
    msg.vx = 0.6962856902403199;
    msg.vy = 0.24597833538052738;
    msg.vz = 0.8440730000127502;
    msg.course_error = 0.9755526103103804;
    msg.eta = 18175U;

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
    msg.setTimeStamp(0.31879825441482346);
    msg.setSource(4738U);
    msg.setSourceEntity(55U);
    msg.setDestination(63374U);
    msg.setDestinationEntity(182U);
    msg.k = 0.1875688312581505;
    msg.m = 0.0606063497471685;
    msg.n = 0.7187798695452217;

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
    msg.setTimeStamp(0.7559657295064284);
    msg.setSource(26256U);
    msg.setSourceEntity(87U);
    msg.setDestination(45605U);
    msg.setDestinationEntity(81U);
    msg.k = 0.7525508429149435;
    msg.m = 0.19053599087757989;
    msg.n = 0.9691550670114754;

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
    msg.setTimeStamp(0.07886908580101659);
    msg.setSource(8795U);
    msg.setSourceEntity(33U);
    msg.setDestination(11609U);
    msg.setDestinationEntity(129U);
    msg.k = 0.33167808518980735;
    msg.m = 0.0030504518192937535;
    msg.n = 0.5954364161528566;

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
    msg.setTimeStamp(0.19101432551885533);
    msg.setSource(29102U);
    msg.setSourceEntity(40U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(227U);
    msg.p = 0.7910047418906628;
    msg.i = 0.6041633762085834;
    msg.d = 0.20492049486481434;
    msg.a = 0.7941537664719795;

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
    msg.setTimeStamp(0.5214687006453287);
    msg.setSource(38743U);
    msg.setSourceEntity(26U);
    msg.setDestination(46172U);
    msg.setDestinationEntity(142U);
    msg.p = 0.16055521124574346;
    msg.i = 0.22615393323733435;
    msg.d = 0.09283416985457205;
    msg.a = 0.9020183784232179;

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
    msg.setTimeStamp(0.1823242324821721);
    msg.setSource(61537U);
    msg.setSourceEntity(60U);
    msg.setDestination(7621U);
    msg.setDestinationEntity(105U);
    msg.p = 0.7121766086219581;
    msg.i = 0.8125227777576016;
    msg.d = 0.46052270241270676;
    msg.a = 0.870993641581253;

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
    msg.setTimeStamp(0.5726083725002076);
    msg.setSource(53758U);
    msg.setSourceEntity(221U);
    msg.setDestination(47820U);
    msg.setDestinationEntity(15U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.47161194328478173);
    msg.setSource(46746U);
    msg.setSourceEntity(127U);
    msg.setDestination(57473U);
    msg.setDestinationEntity(8U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.14046226160439035);
    msg.setSource(13103U);
    msg.setSourceEntity(160U);
    msg.setDestination(3545U);
    msg.setDestinationEntity(208U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.0894698745241218);
    msg.setSource(5688U);
    msg.setSourceEntity(18U);
    msg.setDestination(25319U);
    msg.setDestinationEntity(75U);
    msg.x = 0.2999181689451281;
    msg.y = 0.12024365529129744;
    msg.z = 0.4861733926139884;
    msg.vx = 0.3084519192813556;
    msg.vy = 0.20461549151169878;
    msg.vz = 0.930471979914655;
    msg.ax = 0.07519730282113501;
    msg.ay = 0.29979880225794375;
    msg.az = 0.08091696942615079;
    msg.flags = 60963U;

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
    msg.setTimeStamp(0.005625696580378703);
    msg.setSource(45431U);
    msg.setSourceEntity(10U);
    msg.setDestination(18479U);
    msg.setDestinationEntity(195U);
    msg.x = 0.29497965237092894;
    msg.y = 0.16632241507807455;
    msg.z = 0.8465172734342369;
    msg.vx = 0.1712424893244292;
    msg.vy = 0.16569115938832757;
    msg.vz = 0.9698715322625793;
    msg.ax = 0.1513694577640574;
    msg.ay = 0.8280845072306129;
    msg.az = 0.6134312515908337;
    msg.flags = 21414U;

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
    msg.setTimeStamp(0.93235453264545);
    msg.setSource(49911U);
    msg.setSourceEntity(85U);
    msg.setDestination(40122U);
    msg.setDestinationEntity(7U);
    msg.x = 0.4781681197049641;
    msg.y = 0.31431847111491606;
    msg.z = 0.7779671323830628;
    msg.vx = 0.5191701213685995;
    msg.vy = 0.1689445326347696;
    msg.vz = 0.39627813175671023;
    msg.ax = 0.29866166355001855;
    msg.ay = 0.5418407813625447;
    msg.az = 0.04654055275066116;
    msg.flags = 18887U;

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
    msg.setTimeStamp(0.5491569400264102);
    msg.setSource(61957U);
    msg.setSourceEntity(72U);
    msg.setDestination(26441U);
    msg.setDestinationEntity(75U);
    msg.value = 0.15655617798695665;

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
    msg.setTimeStamp(0.4124787065142633);
    msg.setSource(50183U);
    msg.setSourceEntity(129U);
    msg.setDestination(60370U);
    msg.setDestinationEntity(174U);
    msg.value = 0.19650814096444857;

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
    msg.setTimeStamp(0.6443702424088694);
    msg.setSource(57569U);
    msg.setSourceEntity(199U);
    msg.setDestination(49747U);
    msg.setDestinationEntity(44U);
    msg.value = 0.5763299433370371;

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
    msg.setTimeStamp(0.8881216162172877);
    msg.setSource(60268U);
    msg.setSourceEntity(246U);
    msg.setDestination(17017U);
    msg.setDestinationEntity(172U);
    msg.timeout = 61460U;
    msg.lat = 0.7814283633144876;
    msg.lon = 0.2992579441536821;
    msg.z = 0.6324830658932874;
    msg.z_units = 214U;
    msg.speed = 0.23981890246539128;
    msg.speed_units = 184U;
    msg.roll = 0.5283998972940163;
    msg.pitch = 0.9357505859645759;
    msg.yaw = 0.8596402174203202;
    msg.custom.assign("KJTTYBWDXFPHACLDGAPXPZZZQFUVXJQRONOMRCMPZFPZHVJWHLUXLPRBDCXNBAFNYCVVTEUYTOGLOEMEGLRFYPKSMARGWHHDGONOOTUXCPEZMNJHQDMMYUNDGQVPLWNLII");

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
    msg.setTimeStamp(0.6752502503204456);
    msg.setSource(29110U);
    msg.setSourceEntity(89U);
    msg.setDestination(4855U);
    msg.setDestinationEntity(19U);
    msg.timeout = 2325U;
    msg.lat = 0.5290109274698727;
    msg.lon = 0.2688979832944429;
    msg.z = 0.8344220609050429;
    msg.z_units = 109U;
    msg.speed = 0.4334167231496957;
    msg.speed_units = 155U;
    msg.roll = 0.6511869998210864;
    msg.pitch = 0.00514729341744502;
    msg.yaw = 0.10063012019898132;
    msg.custom.assign("ZOICSJSLXUOPQYILUSYGHRCGJXEWWKZTOFZAGONRTDNWKGWIZPOAWRMNLLOWAMCSUTOJDLAQRRVMXOSGPIVMLIRQKFTDCTFKCNJDQFFHPTQMOPVYHUEIJBYJEEVBXNJEDGDAJPBJUYELZYYBWBTPGRYCCXNGBFCXVALAMHNHATEHMZMHQTSNKNOFBDSMVIXSMEUQVKWVUHXKVSZRZTZZGAQFREBFJDRKCYLAXIIKLVHHQWQIDCPPXU");

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
    msg.setTimeStamp(0.9191227332148774);
    msg.setSource(25931U);
    msg.setSourceEntity(37U);
    msg.setDestination(42874U);
    msg.setDestinationEntity(8U);
    msg.timeout = 24024U;
    msg.lat = 0.7371843525735271;
    msg.lon = 0.006103124802955606;
    msg.z = 0.8140481029233151;
    msg.z_units = 182U;
    msg.speed = 0.06770463365198509;
    msg.speed_units = 86U;
    msg.roll = 0.6883836424559218;
    msg.pitch = 0.5635067961546665;
    msg.yaw = 0.34262934557022784;
    msg.custom.assign("QRVUAVKJCOTSGGUTOXRVQQMIDAQJZRRJWWHXUKKHTEGNIGZNUYSDYUEKWMJBXOCQRHJELDJXSMEUUALGXWRDPDUBOJZFVPXWWMKFNKQYOTKUZLFFSYHHIHMKNTZLHDIIXVWTFPNTQWRDZQADPBDOFXHVRVPLSYGPJCPICKBNLSBSQOOLC");

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
    msg.setTimeStamp(0.5905548800782505);
    msg.setSource(14208U);
    msg.setSourceEntity(41U);
    msg.setDestination(44599U);
    msg.setDestinationEntity(212U);
    msg.timeout = 30150U;
    msg.lat = 0.41252254886378226;
    msg.lon = 0.21109629400876084;
    msg.z = 0.47140397878741347;
    msg.z_units = 206U;
    msg.speed = 0.7508805760639744;
    msg.speed_units = 143U;
    msg.duration = 50870U;
    msg.radius = 0.7876022634156661;
    msg.flags = 156U;
    msg.custom.assign("POYHDHINSBDWLAQGSUDUAQXRTXZJJJYTFIPMRHOKUXUKJOIQJUEJDIT");

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
    msg.setTimeStamp(0.09308252699733766);
    msg.setSource(9823U);
    msg.setSourceEntity(158U);
    msg.setDestination(31589U);
    msg.setDestinationEntity(192U);
    msg.timeout = 56320U;
    msg.lat = 0.6822172474746283;
    msg.lon = 0.8507004619528458;
    msg.z = 0.03784708525061409;
    msg.z_units = 111U;
    msg.speed = 0.4711025102193205;
    msg.speed_units = 151U;
    msg.duration = 41691U;
    msg.radius = 0.05372652677901624;
    msg.flags = 173U;
    msg.custom.assign("QNLCIVXHYTFXOALFMHMJESXUAMYEZHEOQMPQBJWAVQIIRZYSPDDOBBQNNUTDTPLSTNN");

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
    msg.setTimeStamp(0.6056378201946269);
    msg.setSource(9159U);
    msg.setSourceEntity(23U);
    msg.setDestination(33179U);
    msg.setDestinationEntity(30U);
    msg.timeout = 45155U;
    msg.lat = 0.19303342029858717;
    msg.lon = 0.8732779686928884;
    msg.z = 0.7843706825821753;
    msg.z_units = 190U;
    msg.speed = 0.06483788866662743;
    msg.speed_units = 106U;
    msg.duration = 27375U;
    msg.radius = 0.45204434803944105;
    msg.flags = 230U;
    msg.custom.assign("MTHRUJGXENPUNOWKARUCQUHQQEKNCOAAPYRTYLSQXAZGDRFFRVMIOMQPROFETPGFBTTVZIPVSBLKDFKKAQFSCXWSBSAJLNACOGMLPZLKOBULYLDZGELPVLSOZFBXMNYHTJDMRACDNYYIJBDDIEGKQCQ");

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
    msg.setTimeStamp(0.9102649821068628);
    msg.setSource(42195U);
    msg.setSourceEntity(230U);
    msg.setDestination(38483U);
    msg.setDestinationEntity(229U);
    msg.custom.assign("TCRGYXPFOLQVKXXDJTGPVMMJGYPFIOSWUUKRQAHEYAVZRASCWXESAWAVIDWPTUBFBPBSPZLFDVMHOTEIUPGKWCYAFNEBNPRYKECNIRYKEERJWLHMAQBHELRZFXXVTBNEASFDCDZZQKTIWQSCD");

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
    msg.setTimeStamp(0.8749806069434787);
    msg.setSource(3016U);
    msg.setSourceEntity(16U);
    msg.setDestination(44062U);
    msg.setDestinationEntity(192U);
    msg.custom.assign("KCJHJNJEBZLLQIAABKCDTZORRUEVUNFTRWGXRQPDBJYSKBIQMCPDMFIZTGXGJHFHNYUFTEPSQYNNDEPUVQKVSOVCJVWIJNGSNDIEHIATDUSTKGYOZEVWCKBZEEMXGPAZQVBRSZLOMMMAQUTWIDWOTLCHTYLRVX");

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
    msg.setTimeStamp(0.6049196603661692);
    msg.setSource(9553U);
    msg.setSourceEntity(56U);
    msg.setDestination(32773U);
    msg.setDestinationEntity(81U);
    msg.custom.assign("TWZDIBYPYJGLFXXKXJMSOLDCYVTRECZIKTEUBBWVAMACHKDLNEMVZKXWRBTCALROJDIWJRKMMVNAQAQJUHHUUZGVXPHIPOBPUOGDXGWOHWSPUSSUXSUKQIELBFWVWMCIYMNEQVFTSHJFQZGDLZKFTMVNBZJKQTHLLBFRNODFCXGGJGIRPCYIIPEZZGXMCOOYCN");

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
    msg.setTimeStamp(0.40007566002828043);
    msg.setSource(37215U);
    msg.setSourceEntity(202U);
    msg.setDestination(44765U);
    msg.setDestinationEntity(89U);
    msg.timeout = 50615U;
    msg.lat = 0.989783633175388;
    msg.lon = 0.5410233186921222;
    msg.z = 0.34747279883788473;
    msg.z_units = 60U;
    msg.duration = 35780U;
    msg.speed = 0.5084979974970543;
    msg.speed_units = 116U;
    msg.type = 213U;
    msg.radius = 0.4887960499341132;
    msg.length = 0.60726636463837;
    msg.bearing = 0.8903412836297613;
    msg.direction = 80U;
    msg.custom.assign("DUPKGCXCGJJLXRGSNYBMMHKQIMURAAMTBZRSNQCYEZDOZASMMBZOZAUJTFISZEWQVUWELGPWNSYJVCGNXFIZKAKEFDBL");

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
    msg.setTimeStamp(0.7938830439172962);
    msg.setSource(12948U);
    msg.setSourceEntity(136U);
    msg.setDestination(58271U);
    msg.setDestinationEntity(131U);
    msg.timeout = 3204U;
    msg.lat = 0.13912614868695172;
    msg.lon = 0.3123132064448547;
    msg.z = 0.7433306430936989;
    msg.z_units = 83U;
    msg.duration = 26834U;
    msg.speed = 0.6250615462320361;
    msg.speed_units = 189U;
    msg.type = 6U;
    msg.radius = 0.6766891268696733;
    msg.length = 0.20446272374445562;
    msg.bearing = 0.06214783233861121;
    msg.direction = 79U;
    msg.custom.assign("UDHXJEBJMBIRVTRQEVCMSRAATITTWLLPLQAUOKYJDVBSRODWKHSPBXFU");

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
    msg.setTimeStamp(0.9045784795146248);
    msg.setSource(4451U);
    msg.setSourceEntity(139U);
    msg.setDestination(52937U);
    msg.setDestinationEntity(156U);
    msg.timeout = 19065U;
    msg.lat = 0.24450456598770354;
    msg.lon = 0.008507113415456291;
    msg.z = 0.2897355073135093;
    msg.z_units = 234U;
    msg.duration = 6175U;
    msg.speed = 0.8442567915660065;
    msg.speed_units = 215U;
    msg.type = 222U;
    msg.radius = 0.5990580790732644;
    msg.length = 0.24707868586673765;
    msg.bearing = 0.7003809263954395;
    msg.direction = 201U;
    msg.custom.assign("GMKJPHNBIRIZDGJYGGUSWDHILPUWMEGBNMWOIVJUXIZSEXAHGSKRZ");

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
    msg.setTimeStamp(0.2016310794302283);
    msg.setSource(17321U);
    msg.setSourceEntity(245U);
    msg.setDestination(61445U);
    msg.setDestinationEntity(102U);
    msg.duration = 47065U;
    msg.custom.assign("FXQWBMNDMUHJZBOG");

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
    msg.setTimeStamp(0.9831939162801347);
    msg.setSource(62368U);
    msg.setSourceEntity(152U);
    msg.setDestination(21644U);
    msg.setDestinationEntity(126U);
    msg.duration = 25776U;
    msg.custom.assign("TLRPWUCDNZOTFAYSBQFJREPUSJCKXIZYKYBNNECI");

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
    msg.setTimeStamp(0.3697408991093353);
    msg.setSource(51381U);
    msg.setSourceEntity(241U);
    msg.setDestination(25291U);
    msg.setDestinationEntity(132U);
    msg.duration = 43332U;
    msg.custom.assign("GHUOAJUTEBLEDJWXRBAYLJRWMUVORMVCIZNSIYISXPHMJWDXZBLDFZOCVNAHHRJVWSEQAZ");

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
    msg.setTimeStamp(0.9288277771519698);
    msg.setSource(3619U);
    msg.setSourceEntity(93U);
    msg.setDestination(516U);
    msg.setDestinationEntity(180U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.33382832279891583;
    tmp_msg_0.speed_units = 99U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42747U;
    msg.custom.assign("UKYDYDFJFOKBLWBRTHPRGDJPXXXSACGACVRZDAAOFQZXLWTPQHEMZFGMQOPCQDDQROQVSETIHQVWNMCCKWIZN");

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
    msg.setTimeStamp(0.5017347621500087);
    msg.setSource(36310U);
    msg.setSourceEntity(113U);
    msg.setDestination(44187U);
    msg.setDestinationEntity(243U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.5296273648288429;
    msg.control.set(tmp_msg_0);
    msg.duration = 55131U;
    msg.custom.assign("UAOESDORSQCLQUTRIRNIKHOQCWYLFTRHUCHILTGBHOMZHMSJPEABLOJWPCVEDFAZWLLLYQRRZWRGAF");

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
    msg.setTimeStamp(0.2848535148323089);
    msg.setSource(7367U);
    msg.setSourceEntity(19U);
    msg.setDestination(25786U);
    msg.setDestinationEntity(186U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.4141609839358501;
    msg.control.set(tmp_msg_0);
    msg.duration = 24261U;
    msg.custom.assign("MLZELPTIEZWFYQIHXPCSBUNWSTCQJKVFQDIWBDDZDKJOOHYCENBPPGVCFCJEBBEQRFFAQIVSQKSKMCWRMAIOWJIGYJXHDSPXJXZBAVLXPUNULTNBDEIXKGSBVUCIBJWYLTQRMYYSVZXULHHEUIMFARWRNENLDAKJPFZPXGTTPMFVRYOHFOLMGSRAGZTN");

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
    msg.setTimeStamp(0.293384541807871);
    msg.setSource(25528U);
    msg.setSourceEntity(21U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(245U);
    msg.timeout = 13326U;
    msg.lat = 0.30645127181265885;
    msg.lon = 0.5359806338455596;
    msg.z = 0.7394762602847297;
    msg.z_units = 191U;
    msg.speed = 0.19678982578484128;
    msg.speed_units = 23U;
    msg.bearing = 0.9631605155244598;
    msg.cross_angle = 0.8771070111556029;
    msg.width = 0.30232342885143737;
    msg.length = 0.17274184191232433;
    msg.hstep = 0.5826380816681567;
    msg.coff = 83U;
    msg.alternation = 2U;
    msg.flags = 223U;
    msg.custom.assign("SOFYJBSUVRGQKHZCUDMFPICJIDYUSPMMQTYEEDQIZKAZLXIXALPHDADGVOURVWGOFZXCEXLRLZOLFCASTTKKVXWJXQPJQGLDNGOCYKPJJXRUIYFWVZENCBQZMNCIHESMLOBSTQUMMHNAWAEHRRN");

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
    msg.setTimeStamp(0.793256642268555);
    msg.setSource(20685U);
    msg.setSourceEntity(211U);
    msg.setDestination(44861U);
    msg.setDestinationEntity(120U);
    msg.timeout = 47207U;
    msg.lat = 0.9089086075678843;
    msg.lon = 0.5024533932008097;
    msg.z = 0.12779711463812227;
    msg.z_units = 17U;
    msg.speed = 0.8188587502493514;
    msg.speed_units = 18U;
    msg.bearing = 0.082837536959804;
    msg.cross_angle = 0.6503606327867714;
    msg.width = 0.41554529594898626;
    msg.length = 0.2561701691325877;
    msg.hstep = 0.4970327233026064;
    msg.coff = 85U;
    msg.alternation = 109U;
    msg.flags = 128U;
    msg.custom.assign("JPDCEWRSEHUMCRXPRKTGKEGYBQNTLFTDSUCQBLDGLBOBZPZAEFIWIABDANUCKFMHRNLHFWXQIWNQHRXCTMLNKAOGIUIFNJGBCASPUTIGHIYWBEKIROVVBZXACBESPOJYYJOIWAKSKMDQVEKMLBDJOVXUJT");

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
    msg.setTimeStamp(0.8787450421145578);
    msg.setSource(41645U);
    msg.setSourceEntity(113U);
    msg.setDestination(4239U);
    msg.setDestinationEntity(254U);
    msg.timeout = 30623U;
    msg.lat = 0.7035860677972341;
    msg.lon = 0.6780698680136216;
    msg.z = 0.38854434578054164;
    msg.z_units = 174U;
    msg.speed = 0.49176108630109505;
    msg.speed_units = 230U;
    msg.bearing = 0.9243061268990586;
    msg.cross_angle = 0.8926825305308893;
    msg.width = 0.03840938587376608;
    msg.length = 0.5581432437679105;
    msg.hstep = 0.1402001663743525;
    msg.coff = 163U;
    msg.alternation = 196U;
    msg.flags = 25U;
    msg.custom.assign("XVIUKUFHXNDUNQAUGRCARXOSMLHLYAFNHQTHBTTMJIWZTLYRTMSBDRQDPNZYXIDRVESKGOEKIZJCJRRPDLVUXEEJYEH");

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
    msg.setTimeStamp(0.940779446166362);
    msg.setSource(55938U);
    msg.setSourceEntity(226U);
    msg.setDestination(2456U);
    msg.setDestinationEntity(131U);
    msg.timeout = 17196U;
    msg.lat = 0.2807935261734933;
    msg.lon = 0.36087312868824795;
    msg.z = 0.43621854050726694;
    msg.z_units = 200U;
    msg.speed = 0.7785323695343904;
    msg.speed_units = 11U;
    msg.custom.assign("XFIQKIXFTBUGUABHUDKPLVLRVZENJAJOLGHZYTWBSMJQXDTKGJZLYFWYTBTRSQWWMVWWJYUDWCZXDZHSKIXBYJPRMYZCKZEBTONMHHPRHTBYGBMQDICQDEJBOBPMKAMHXEAYFPRUWQQLOUNODNLIPZHENNRQPLDUASOLKTCAUSEXIFFWAOGNPQLCOIORSVXQEIENXPCVKYHFJJPGTADEGVKICRRXCVCWUZNVD");

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
    msg.setTimeStamp(0.8377469368186359);
    msg.setSource(27257U);
    msg.setSourceEntity(46U);
    msg.setDestination(29199U);
    msg.setDestinationEntity(9U);
    msg.timeout = 48576U;
    msg.lat = 0.21285459265794082;
    msg.lon = 0.468297519393268;
    msg.z = 0.8807772182745568;
    msg.z_units = 144U;
    msg.speed = 0.2762393655449704;
    msg.speed_units = 238U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6369523366678588;
    tmp_msg_0.y = 0.05106846451997438;
    tmp_msg_0.z = 0.38233233180105597;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GSJNBWWKLKRKNNJDNCRUXYETOIBWUWPZOELMPRLTAIVZGISIYZMQADTMMSIDJECUSVURAH");

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
    msg.setTimeStamp(0.5746971693252785);
    msg.setSource(41339U);
    msg.setSourceEntity(146U);
    msg.setDestination(24516U);
    msg.setDestinationEntity(102U);
    msg.timeout = 51301U;
    msg.lat = 0.6149213902431341;
    msg.lon = 0.31260564925144885;
    msg.z = 0.2982927917841487;
    msg.z_units = 11U;
    msg.speed = 0.5589511424598952;
    msg.speed_units = 125U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.745069113974834;
    tmp_msg_0.y = 0.7210670693859895;
    tmp_msg_0.z = 0.4162779894040065;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LUNTSNAJAGRCUGSOT");

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
    msg.setTimeStamp(0.9780194174710395);
    msg.setSource(62943U);
    msg.setSourceEntity(212U);
    msg.setDestination(61119U);
    msg.setDestinationEntity(221U);
    msg.x = 0.32940459870770855;
    msg.y = 0.9746509981617352;
    msg.z = 0.15178861778122832;

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
    msg.setTimeStamp(0.22592708547621942);
    msg.setSource(222U);
    msg.setSourceEntity(21U);
    msg.setDestination(2147U);
    msg.setDestinationEntity(6U);
    msg.x = 0.6457226429947993;
    msg.y = 0.543514408342137;
    msg.z = 0.459241009465322;

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
    msg.setTimeStamp(0.9191697283254274);
    msg.setSource(7757U);
    msg.setSourceEntity(142U);
    msg.setDestination(18657U);
    msg.setDestinationEntity(173U);
    msg.x = 0.13674166239969443;
    msg.y = 0.869111810280199;
    msg.z = 0.5324074818241885;

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
    msg.setTimeStamp(0.9741265186656187);
    msg.setSource(36475U);
    msg.setSourceEntity(163U);
    msg.setDestination(7115U);
    msg.setDestinationEntity(64U);
    msg.timeout = 799U;
    msg.lat = 0.985503503199616;
    msg.lon = 0.07930461258979749;
    msg.z = 0.8191560369629012;
    msg.z_units = 142U;
    msg.amplitude = 0.7651889295547866;
    msg.pitch = 0.6795379241009031;
    msg.speed = 0.9480103512417896;
    msg.speed_units = 250U;
    msg.custom.assign("WROYYBHLDVCMDHSHXIFXNUIMARBSJVUZLNJRSGZGKPCRPFWHJDIHVTPHXABSLKOMPBGHZDOJZRCQALEDWIDZYEQEMAOLTNMQWTACIKAWUVAKZZCJFRXSGNRGJZEVDKT");

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
    msg.setTimeStamp(0.9039743816737541);
    msg.setSource(14593U);
    msg.setSourceEntity(110U);
    msg.setDestination(61190U);
    msg.setDestinationEntity(149U);
    msg.timeout = 25377U;
    msg.lat = 0.4413711780404328;
    msg.lon = 0.5915774602659387;
    msg.z = 0.5678137139899533;
    msg.z_units = 33U;
    msg.amplitude = 0.5901701396351665;
    msg.pitch = 0.46824275916470803;
    msg.speed = 0.3251704169769223;
    msg.speed_units = 133U;
    msg.custom.assign("AQLUHFIRVYOTQIEFKIVQZYDAOHMNLHMPKVRQDCBIZNPTJWJENQQTEBHFEZFWSITRCOEWWHXYOUBSFIZGQXABXLHFXCZCGTMYQMAJNJCIYNPURPYALEUHCGWDVCHVZOOKJSDVXXVROKYOPYQMZXDLZSZAGIWBRKOIWUBDMUFVRWLNURBSKUSPNBJGGALTNMKLEFTBJHD");

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
    msg.setTimeStamp(0.04022549638259221);
    msg.setSource(26898U);
    msg.setSourceEntity(90U);
    msg.setDestination(10848U);
    msg.setDestinationEntity(229U);
    msg.timeout = 53814U;
    msg.lat = 0.19046381080134067;
    msg.lon = 0.23517002816465515;
    msg.z = 0.3982280888256392;
    msg.z_units = 22U;
    msg.amplitude = 0.734402701985663;
    msg.pitch = 0.005029892629243693;
    msg.speed = 0.43004547238194757;
    msg.speed_units = 140U;
    msg.custom.assign("FOOGNLWJUGXGZBTRAVVLYLDEEAYWRJLQWYOSLEAKVCUFUWLGNJGNYKYURADJBMWZQDYJPNNOMAMAYFHIPBFEBEXQRMTOVOFMHRQOSQBOZPMGZXITEBLFRVISCROWVJITSEYXRPDSECGYFAHWRXCGCSZEDDCUCULXZSQKWPHJNHZSMQBHTTKWKBXQPTBKMJUVKHPSJNVDVUKPBHUFPFIGXRPKAQIUXMFCHNHDLCADTOSWCINI");

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
    msg.setTimeStamp(0.713836179014067);
    msg.setSource(37302U);
    msg.setSourceEntity(41U);
    msg.setDestination(19340U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.6249640754044345);
    msg.setSource(16645U);
    msg.setSourceEntity(190U);
    msg.setDestination(906U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.7575306520165941);
    msg.setSource(3337U);
    msg.setSourceEntity(254U);
    msg.setDestination(24573U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.006741035827853348);
    msg.setSource(27555U);
    msg.setSourceEntity(142U);
    msg.setDestination(46524U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.23733600106776498;
    msg.lon = 0.7353665995252268;
    msg.z = 0.72293762388437;
    msg.z_units = 37U;
    msg.radius = 0.6979379873458079;
    msg.duration = 33014U;
    msg.speed = 0.4294088082623425;
    msg.speed_units = 29U;
    msg.custom.assign("ZPBAYSMYVTKFCGLFDPFGTTMSSDALFIPHSYUCFDILORKNIXJXUNKXVZDOWCIJYJCVXYVHXZWTPGSRJRPCTBTHEMNUJEQLWOGHFGSAQLUZZQPLMAJBKAWMUPAWOYZQMANWCAHCXG");

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
    msg.setTimeStamp(0.7715923159864818);
    msg.setSource(57770U);
    msg.setSourceEntity(153U);
    msg.setDestination(54936U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.8502329159946939;
    msg.lon = 0.26816979483278136;
    msg.z = 0.545409255378518;
    msg.z_units = 59U;
    msg.radius = 0.34553334712666917;
    msg.duration = 30679U;
    msg.speed = 0.1824100589064308;
    msg.speed_units = 17U;
    msg.custom.assign("KBSDJUCAAFBDJKXDNPKDWZVNLZIOLYSELHXVURFVNEVKKDKNHGXXRYAJLPZHTPBBMMQOZHFVCMJISWECDEGYYELDSZTPHXGMMMQWURYZMUFGGURIOTGGOOHBVCSJLCRQSPPVYXYOBBGXWVZFTOEIJDIIRAWIJTCBPFTIENDBZYEGLRUYIZRSHHGRFQMTKKYXTICTKUDCAWQWOXWCUNOWUPCMSFQXVJSNQAHNQ");

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
    msg.setTimeStamp(0.6360611242036478);
    msg.setSource(30269U);
    msg.setSourceEntity(107U);
    msg.setDestination(29835U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.531466600882181;
    msg.lon = 0.9219378351789111;
    msg.z = 0.020063054302579708;
    msg.z_units = 177U;
    msg.radius = 0.013082825638185636;
    msg.duration = 61329U;
    msg.speed = 0.06830793619440156;
    msg.speed_units = 239U;
    msg.custom.assign("BPRTKEFKKYCIOZDELIGAHCXMBXVCQKDCREVFGANCUKKZMPJRMTMEBISMUBULYXDOAPZTSAVODSQWELYDNXCQPZVYAVFDZLNUPDPQQXYBQFYMRXVTTJGELBAESWGCKAOEYUWWPNRFOBFWKJSMUONASONCRJSJUTF");

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
    msg.setTimeStamp(0.2252963644791368);
    msg.setSource(46835U);
    msg.setSourceEntity(136U);
    msg.setDestination(26358U);
    msg.setDestinationEntity(9U);
    msg.timeout = 52589U;
    msg.flags = 222U;
    msg.lat = 0.4718852476727593;
    msg.lon = 0.09427383504256559;
    msg.start_z = 0.5061463748696752;
    msg.start_z_units = 54U;
    msg.end_z = 0.08438817831620338;
    msg.end_z_units = 58U;
    msg.radius = 0.8573628139886473;
    msg.speed = 0.20118851470861554;
    msg.speed_units = 5U;
    msg.custom.assign("WZMKLVEECQXVKOCGAHCRUXDMHFOQXYKIMYIGKOUGYJUUAMAZRKNAGBJRESJSDVOXPHJYEDDOXGUIBMOAKRUTRQWFTUNDEAEZIZNGVBZFKSKNESBPRDSJZNZAYWJLCZMKCQINVCPIQQQFSDLIPPUOEHTMPDLHJWLIOQCWUYCBMNTJTFPHIFSFVHJTGXSGMBWFYEIHDLLYEYGVRVZTWADT");

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
    msg.setTimeStamp(0.39469870264640305);
    msg.setSource(58586U);
    msg.setSourceEntity(45U);
    msg.setDestination(41830U);
    msg.setDestinationEntity(210U);
    msg.timeout = 811U;
    msg.flags = 50U;
    msg.lat = 0.17835181365751507;
    msg.lon = 0.7722750769672917;
    msg.start_z = 0.8922467979435335;
    msg.start_z_units = 125U;
    msg.end_z = 0.9874144178455009;
    msg.end_z_units = 68U;
    msg.radius = 0.03783534350077844;
    msg.speed = 0.24627217600487283;
    msg.speed_units = 103U;
    msg.custom.assign("DFTGNSWINQJYIYHIPZSHLOFNQFQUKYJVCTMRHSWRAYROPRDGYWKEHAZWXDVBHUDODPAXEMNKCBLDQTAFKILXZRPOYZAGTJMOFSTPMBKWHUKGTLVUUJZBVESXQRNEVHJJAQKERCQZXGOLUUNVSJJFGHWDFIYOBXLIGDXPMLLUKV");

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
    msg.setTimeStamp(0.2678974879004855);
    msg.setSource(56734U);
    msg.setSourceEntity(15U);
    msg.setDestination(29341U);
    msg.setDestinationEntity(175U);
    msg.timeout = 36278U;
    msg.flags = 120U;
    msg.lat = 0.41073060831326025;
    msg.lon = 0.4661713081989257;
    msg.start_z = 0.495242392509611;
    msg.start_z_units = 240U;
    msg.end_z = 0.3671645085236641;
    msg.end_z_units = 36U;
    msg.radius = 0.15575940987632308;
    msg.speed = 0.5517560723485505;
    msg.speed_units = 120U;
    msg.custom.assign("IEJXDEMSXUELHSNHQLDIJYAODQNNZLLOPTUGZTDQEAZWUXKCGVFPVFGOPAXEEKPHUDRHPGKRBJIDVVFJGICVYSSQULSEWXRYGYSUQZSVJPDYRINXLTMBKAGBHYATWZZKNFBUJXHNHODWCFMBUSFTYNCMEOPZTQYMCWTHMKHRQAAULBLBLJBWKFRQVCTUCXXYBKAVETNVWPGPAQWBFMQOROMRJOGOIZFDVDNPIWSLZCIACSKRTMXI");

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
    msg.setTimeStamp(0.7537355778280758);
    msg.setSource(16252U);
    msg.setSourceEntity(169U);
    msg.setDestination(55143U);
    msg.setDestinationEntity(233U);
    msg.timeout = 32771U;
    msg.lat = 0.7025763587054412;
    msg.lon = 0.1492887653155065;
    msg.z = 0.8677956670855858;
    msg.z_units = 242U;
    msg.speed = 0.3748910214751693;
    msg.speed_units = 33U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8577770527435196;
    tmp_msg_0.y = 0.017169730322656007;
    tmp_msg_0.z = 0.8395334410001567;
    tmp_msg_0.t = 0.22013558442751346;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FYRMXHPKGWYHRZNIOBUATCSCLVAZSWRKFIYJZEOMNNYOAYJHAANJZYXCRZTXFLPFCQEBUNPCIOWSIMCINLNQILUJYMNCQIABGXWTXENXHBHGIOVQZMWSKDSBRHEVEUOHGVDKVXKRHGDYVYJDJKSCRAGGTQESZQRCLJZMOQPVVMUSQWZXXFCDGMWENPBFBEDLTXWPVLUPEZPAATBQOFUYAJTDWMSSGKKKO");

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
    msg.setTimeStamp(0.8019208194983755);
    msg.setSource(46095U);
    msg.setSourceEntity(40U);
    msg.setDestination(16915U);
    msg.setDestinationEntity(40U);
    msg.timeout = 40788U;
    msg.lat = 0.8079715428782658;
    msg.lon = 0.835437899538793;
    msg.z = 0.6511578633352471;
    msg.z_units = 61U;
    msg.speed = 0.6989467328611217;
    msg.speed_units = 217U;
    msg.custom.assign("IPTCGLXGMWJYKNJQDOILNWXONGBVHUSQTOKLJPSZHMBGRQEPXIIZCJPEUTPKCRQEULMTKIBRUNJWKMQSMVFPFFUDFVCAJDFYTDDIENWCMZHGDVRRUMSWVZETQRILXBATRBPOAWEAFBCHOXNGGUSHXOPHTGJRVUOYYNXVEZMSFANKLRZUQPLEYVDZXIJ");

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
    msg.setTimeStamp(0.3785605095707064);
    msg.setSource(16188U);
    msg.setSourceEntity(158U);
    msg.setDestination(10949U);
    msg.setDestinationEntity(123U);
    msg.timeout = 47888U;
    msg.lat = 0.6266141324768919;
    msg.lon = 0.4690106562745938;
    msg.z = 0.3729105657040226;
    msg.z_units = 118U;
    msg.speed = 0.21008768103501596;
    msg.speed_units = 184U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3823928585086711;
    tmp_msg_0.y = 0.026516473061716783;
    tmp_msg_0.z = 0.2553807165019396;
    tmp_msg_0.t = 0.12781144248955634;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NHUVJWRGVZQFKECJBMDDDGLJRWLUIHBKDUUOWASQAJCCFMFMTUOATKAAJNERUSWJQPGFLRNNQYYIIANKZDIWRCMWHVQSUTQCADCLSSJLGEXQOZPECWQPGN");

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
    msg.setTimeStamp(0.19031478496961485);
    msg.setSource(3683U);
    msg.setSourceEntity(108U);
    msg.setDestination(56987U);
    msg.setDestinationEntity(141U);
    msg.x = 0.8960302572802543;
    msg.y = 0.9892511861786735;
    msg.z = 0.048606433824753714;
    msg.t = 0.21340633678071097;

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
    msg.setTimeStamp(0.8150075347212856);
    msg.setSource(39884U);
    msg.setSourceEntity(31U);
    msg.setDestination(14703U);
    msg.setDestinationEntity(147U);
    msg.x = 0.4579636285899289;
    msg.y = 0.3603611941279826;
    msg.z = 0.7140767351912055;
    msg.t = 0.11427648867055828;

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
    msg.setTimeStamp(0.2382636378189361);
    msg.setSource(40126U);
    msg.setSourceEntity(20U);
    msg.setDestination(14404U);
    msg.setDestinationEntity(187U);
    msg.x = 0.21807056320976503;
    msg.y = 0.6203731245584785;
    msg.z = 0.8707209179670493;
    msg.t = 0.6238365961246344;

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
    msg.setTimeStamp(0.6123215434637784);
    msg.setSource(55823U);
    msg.setSourceEntity(75U);
    msg.setDestination(23875U);
    msg.setDestinationEntity(105U);
    msg.timeout = 38049U;
    msg.name.assign("AYALIWDJOHFNLLRBLVFHZASQGOSOXRPTCCBSIRDSPNTXFDSWNOVGSAAKBNCGMEIEKZYNEDIHMMWDSCDFOTYDJOSKWYZGHZRQQJTBPJHKHXUGENZMQXAROUCBBAPBMGTELKEJWNXMUMVEZTUNMRWDLZCLCAPUPLFYULYTRFBDJTTXYIUPAWCRZEEFKQKKQNUPCPVVBKHZGVHFSTFCYIRJEW");
    msg.custom.assign("FVKUUJLTUMPQTKMGBFYBWESXDHHDVZAQGICXNKEQKBMINGDNZDAYNKYVLYGTZHHEIXCVIOSOW");

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
    msg.setTimeStamp(0.3315620470716596);
    msg.setSource(39562U);
    msg.setSourceEntity(221U);
    msg.setDestination(8596U);
    msg.setDestinationEntity(81U);
    msg.timeout = 23255U;
    msg.name.assign("SJPJCRJCTEUKTEAEKYWMOJCKZRJWMSGJLORCBGVHAIV");
    msg.custom.assign("ABWSCUNLIUOQPGEGLSNDHWUBDCEUYVZKLMCQRPSRVSLDLOTAFWWJYOPTIWAMEUGUCRKHTTEHXG");

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
    msg.setTimeStamp(0.3589688551034059);
    msg.setSource(1198U);
    msg.setSourceEntity(125U);
    msg.setDestination(7399U);
    msg.setDestinationEntity(196U);
    msg.timeout = 40631U;
    msg.name.assign("GBLXESCDUQSGBRZISOECTJHKGJRQLTYBDMOJQAYYWEBWBAFZNIHRNNWVZPCOTIPUNODIRDPYQDMXVVKCCPCAEMBVULNIIAJK");
    msg.custom.assign("KPUHASFHYXNURDRVPXYCOLDTROMIMKLZKRNNCTNEDFXBNZYKVUWMUQZJUSALQGXPBGIMUIACBVSJVAQZGZIWBDTIGLHYPKVFEUOYIQDFYGINCKEYURJSDUCVCHOXTMTIFXEAETOOOSGJSJKMYPQRWPLYHGVFCGLCSFXSA");

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
    msg.setTimeStamp(0.4491573478468337);
    msg.setSource(34247U);
    msg.setSourceEntity(243U);
    msg.setDestination(34634U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.9548566312449096;
    msg.lon = 0.4804251685750178;
    msg.z = 0.2964920076848693;
    msg.z_units = 232U;
    msg.speed = 0.1090343795599662;
    msg.speed_units = 56U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28385U;
    tmp_msg_0.off_x = 0.828616055143421;
    tmp_msg_0.off_y = 0.204587240607914;
    tmp_msg_0.off_z = 0.27639158230988414;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.9139207763264681;
    msg.custom.assign("QGODYJVLFSUJNUXJNZMQCWFXCGBAMHGQYLQOABOHZNBLIYZPMUBAPKDXWJGNASXRMENAARJTPSTBTTCBLLENWSUTCCDTVUPIORHFCQWNJZPZYPVQPYHKMCXYYEFRGGHKGRKXEKGRFDDYMMCHDSOIJJOUINIEZBAVCFWBMP");

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
    msg.setTimeStamp(0.1913937851571117);
    msg.setSource(9757U);
    msg.setSourceEntity(56U);
    msg.setDestination(17697U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.34549072720547047;
    msg.lon = 0.4345602143084597;
    msg.z = 0.24857369550925013;
    msg.z_units = 47U;
    msg.speed = 0.17001924826758774;
    msg.speed_units = 235U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58578U;
    tmp_msg_0.off_x = 0.6940277927004382;
    tmp_msg_0.off_y = 0.9766494048712749;
    tmp_msg_0.off_z = 0.31470774943313984;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8525277926467149;
    msg.custom.assign("CDZMXEMAJRRAFZYFMKLLNZHJQLLYEDVCPGWEXSHVIZWCJSJHPYVCPXAWYEUHLXOOSCLKTJMRQMRPSWBGCPUAKVTXYDEXZSOFFTKUIWEELISFRUROPQBNHBGITLQZJFVSXN");

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
    msg.setTimeStamp(0.24978397832006083);
    msg.setSource(60360U);
    msg.setSourceEntity(211U);
    msg.setDestination(40736U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.8573227806588353;
    msg.lon = 0.9772581990963681;
    msg.z = 0.7230521159069425;
    msg.z_units = 250U;
    msg.speed = 0.04538216400050299;
    msg.speed_units = 49U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4624U;
    tmp_msg_0.off_x = 0.1692936163064006;
    tmp_msg_0.off_y = 0.5986926808524359;
    tmp_msg_0.off_z = 0.8331640255620342;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.9877740856252121;
    msg.custom.assign("TFPWFEQRAVTAPJKTZBTINNDXNZYAEDWPMRZFOYDUEAQSMXSUKWEWIOEZL");

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
    msg.setTimeStamp(0.09777167578121781);
    msg.setSource(42635U);
    msg.setSourceEntity(152U);
    msg.setDestination(12897U);
    msg.setDestinationEntity(193U);
    msg.vid = 4659U;
    msg.off_x = 0.4554767529440845;
    msg.off_y = 0.6086910616300912;
    msg.off_z = 0.7277099230455069;

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
    msg.setTimeStamp(0.5930365729679348);
    msg.setSource(31464U);
    msg.setSourceEntity(112U);
    msg.setDestination(15325U);
    msg.setDestinationEntity(148U);
    msg.vid = 40122U;
    msg.off_x = 0.56528758289564;
    msg.off_y = 0.771618871302473;
    msg.off_z = 0.9243250020010428;

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
    msg.setTimeStamp(0.9277131664964885);
    msg.setSource(1466U);
    msg.setSourceEntity(212U);
    msg.setDestination(28107U);
    msg.setDestinationEntity(249U);
    msg.vid = 52274U;
    msg.off_x = 0.5552422199778105;
    msg.off_y = 0.14524874559404988;
    msg.off_z = 0.2406345982526079;

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
    msg.setTimeStamp(0.45935524168393405);
    msg.setSource(63463U);
    msg.setSourceEntity(3U);
    msg.setDestination(11342U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.801296259381049);
    msg.setSource(11579U);
    msg.setSourceEntity(203U);
    msg.setDestination(15936U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.054200019288384915);
    msg.setSource(62818U);
    msg.setSourceEntity(168U);
    msg.setDestination(18205U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.45812086920001227);
    msg.setSource(51309U);
    msg.setSourceEntity(55U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(183U);
    msg.mid = 26222U;

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
    msg.setTimeStamp(0.6291225137715507);
    msg.setSource(50187U);
    msg.setSourceEntity(138U);
    msg.setDestination(46312U);
    msg.setDestinationEntity(10U);
    msg.mid = 1227U;

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
    msg.setTimeStamp(0.8088867550695177);
    msg.setSource(47554U);
    msg.setSourceEntity(125U);
    msg.setDestination(9171U);
    msg.setDestinationEntity(107U);
    msg.mid = 55U;

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
    msg.setTimeStamp(0.7465762250146923);
    msg.setSource(13828U);
    msg.setSourceEntity(63U);
    msg.setDestination(24483U);
    msg.setDestinationEntity(167U);
    msg.state = 72U;
    msg.eta = 41468U;
    msg.info.assign("GKLRMOHCMCJTFSLDMCEEULICXDYTDOODBFHCPSZXRVWVBHHNEHWRFGVPHLJOYEYWPSTQLMHYHMAFTQANZFNNCVORODBUGFTUSVVFKBZPTMYOVKRAPNWTMRIGXYHWXROJSZQSDPIGLXBAPXVPMSJKRWKYQSPUUNTJQBRNSADEUAWJZWQTYMXIEIZLITKAEJGACB");

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
    msg.setTimeStamp(0.5497574505443299);
    msg.setSource(19203U);
    msg.setSourceEntity(236U);
    msg.setDestination(569U);
    msg.setDestinationEntity(110U);
    msg.state = 214U;
    msg.eta = 32631U;
    msg.info.assign("VCJOGPFSADS");

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
    msg.setTimeStamp(0.9737602921373021);
    msg.setSource(6180U);
    msg.setSourceEntity(202U);
    msg.setDestination(57983U);
    msg.setDestinationEntity(91U);
    msg.state = 118U;
    msg.eta = 15110U;
    msg.info.assign("ZNTESCHWNCPFIXVKNUNTPKDCMRMHDRMWPWSZSPUOJGBQQGVKPAVJFYYIQBWRJBSIUJDQDMNLFABXXTSOXHCZDZ");

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
    msg.setTimeStamp(0.2659397442041068);
    msg.setSource(63061U);
    msg.setSourceEntity(62U);
    msg.setDestination(36034U);
    msg.setDestinationEntity(159U);
    msg.system = 10027U;
    msg.duration = 47146U;
    msg.speed = 0.2793150414651351;
    msg.speed_units = 217U;
    msg.x = 0.05418491385617574;
    msg.y = 0.9743354520728835;
    msg.z = 0.4984682452138838;
    msg.z_units = 251U;

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
    msg.setTimeStamp(0.5655374146767876);
    msg.setSource(37609U);
    msg.setSourceEntity(84U);
    msg.setDestination(39482U);
    msg.setDestinationEntity(190U);
    msg.system = 40013U;
    msg.duration = 7467U;
    msg.speed = 0.9285451837529074;
    msg.speed_units = 128U;
    msg.x = 0.40331172653885417;
    msg.y = 0.19028127200216682;
    msg.z = 0.056886302724525994;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.2268078933659602);
    msg.setSource(17907U);
    msg.setSourceEntity(46U);
    msg.setDestination(29965U);
    msg.setDestinationEntity(214U);
    msg.system = 8701U;
    msg.duration = 5198U;
    msg.speed = 0.8152760816709558;
    msg.speed_units = 121U;
    msg.x = 0.6942018693047496;
    msg.y = 0.7560226754153759;
    msg.z = 0.8629651125712866;
    msg.z_units = 241U;

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
    msg.setTimeStamp(0.6900438911539035);
    msg.setSource(1290U);
    msg.setSourceEntity(220U);
    msg.setDestination(1362U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.9538149489610047;
    msg.lon = 0.5347920467317349;
    msg.speed = 0.06424252428562915;
    msg.speed_units = 38U;
    msg.duration = 36007U;
    msg.sys_a = 62181U;
    msg.sys_b = 43223U;
    msg.move_threshold = 0.21958049126467227;

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
    msg.setTimeStamp(0.020868438153380242);
    msg.setSource(18067U);
    msg.setSourceEntity(75U);
    msg.setDestination(51173U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.8061390380062492;
    msg.lon = 0.5599368951975592;
    msg.speed = 0.7763473073231719;
    msg.speed_units = 227U;
    msg.duration = 47716U;
    msg.sys_a = 60498U;
    msg.sys_b = 26751U;
    msg.move_threshold = 0.6445606447604044;

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
    msg.setTimeStamp(0.4230531644248695);
    msg.setSource(6008U);
    msg.setSourceEntity(35U);
    msg.setDestination(43281U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.8935886727119886;
    msg.lon = 0.27450415414491225;
    msg.speed = 0.179427462824453;
    msg.speed_units = 101U;
    msg.duration = 50768U;
    msg.sys_a = 9936U;
    msg.sys_b = 33685U;
    msg.move_threshold = 0.42683049879282686;

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
    msg.setTimeStamp(0.7347008958752381);
    msg.setSource(56497U);
    msg.setSourceEntity(199U);
    msg.setDestination(7134U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.1375144455816183;
    msg.lon = 0.5869397754726463;
    msg.z = 0.6178136530457289;
    msg.z_units = 173U;
    msg.speed = 0.775232122702446;
    msg.speed_units = 171U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.15719678524233116;
    tmp_msg_0.lon = 0.7051245458752019;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TGTLGUMEBGOHPIQJLYNTCNYAMMCFNQWPANJTFVZMCEHDKBBAXSLDSLSYUEDFKEFPIOKQNZIBXRWGWSBBGZWTZMNPTUIWPKHWXJIOZFWRSFVJVKKJCSGJBFCJLHERORHPYLDLPAMGYDMQYDOJSUSQRIAUQSCXCYHAHNDRPXAYNTOBWXDYHGZEYFTAUKCRTEQWDOZLXMZIKJCBPDNZCSXOMPRXVJTIUBVVVLRGEKRHGNQOHOUIFZ");

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
    msg.setTimeStamp(0.7771835184550034);
    msg.setSource(27409U);
    msg.setSourceEntity(187U);
    msg.setDestination(54604U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.6425242364287096;
    msg.lon = 0.08429974700593379;
    msg.z = 0.8649953151408695;
    msg.z_units = 69U;
    msg.speed = 0.9485856726129086;
    msg.speed_units = 42U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.41262983644005535;
    tmp_msg_0.lon = 0.8588042412597334;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HLKZOAWLJJHPHHPQDA");

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
    msg.setTimeStamp(0.5563743172997325);
    msg.setSource(57844U);
    msg.setSourceEntity(90U);
    msg.setDestination(735U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.054766561140620396;
    msg.lon = 0.024306448740638142;
    msg.z = 0.6301515131606644;
    msg.z_units = 45U;
    msg.speed = 0.6650932807582551;
    msg.speed_units = 8U;
    msg.custom.assign("MBAZVWKTEUHZMCFDHPAXGHTCCWJIMMMWYNVYIDJFSYUERFXDKGBFVMDFKTQALRACQFLKYRSBECGEZRTJNZLLOAJBSWCPALVXLGVTWZOYNRPUWXOZQXJHVAUZPFATWZKIVUUPAEBDHCQORLRZNBCSWFCBMMIOBBPKKNNXHJPSUOUZWXGE");

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
    msg.setTimeStamp(0.26320302603467893);
    msg.setSource(54448U);
    msg.setSourceEntity(179U);
    msg.setDestination(53168U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.6777723917751137;
    msg.lon = 0.793310561373741;

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
    msg.setTimeStamp(0.17560683361207852);
    msg.setSource(20081U);
    msg.setSourceEntity(76U);
    msg.setDestination(3499U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.5306005378713454;
    msg.lon = 0.0660825942647475;

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
    msg.setTimeStamp(0.5009108317606942);
    msg.setSource(29767U);
    msg.setSourceEntity(105U);
    msg.setDestination(41445U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.727762159200083;
    msg.lon = 0.8551162406728203;

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
    msg.setTimeStamp(0.9781088655586202);
    msg.setSource(33177U);
    msg.setSourceEntity(162U);
    msg.setDestination(62157U);
    msg.setDestinationEntity(106U);
    msg.timeout = 12447U;
    msg.lat = 0.20943648140403948;
    msg.lon = 0.027533481361694756;
    msg.z = 0.668132370741541;
    msg.z_units = 226U;
    msg.pitch = 0.14833551201184625;
    msg.amplitude = 0.264853217420816;
    msg.duration = 9560U;
    msg.speed = 0.766923819396751;
    msg.speed_units = 0U;
    msg.radius = 0.7589810739812992;
    msg.direction = 146U;
    msg.custom.assign("ZJFUQOLNWMYBDNOHVJGQEWKEZKXCEDOKIZBSTAGVTVWMPBXCKWEDTANTUWLPDREKRFECIPNYGZPPKOYSSFZYFDFXXUHNMHMCPWKGSNRRLRBMPBRIJNOZZLDONILLIDGXBJCSYSFAHNUYRFQINYXM");

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
    msg.setTimeStamp(0.4043996645964203);
    msg.setSource(51436U);
    msg.setSourceEntity(52U);
    msg.setDestination(50368U);
    msg.setDestinationEntity(75U);
    msg.timeout = 45450U;
    msg.lat = 0.6518081611062428;
    msg.lon = 0.30230352040137043;
    msg.z = 0.15488539150029512;
    msg.z_units = 80U;
    msg.pitch = 0.3963196808608255;
    msg.amplitude = 0.18714514377076885;
    msg.duration = 48342U;
    msg.speed = 0.20074533061132138;
    msg.speed_units = 178U;
    msg.radius = 0.4040700556911717;
    msg.direction = 189U;
    msg.custom.assign("EHIDAFMSTXRDDOHFQHXQJCVSACXTPFXJMDSUDFLNVEHKDMYSSYYGVOFVEKAAJGKMNJWPMPZZCOBXEUETAZWBDGRIVKVXYPHHQUQYJXMOZFEYISJCIQLMOMWTIYPLZTAUPQLQEKYUNBRNZUKJRCGZITIHCNWKRGGGBFCBZPLBNOALTVBIIZSXXSFPPQYCEDRMBVJLRHLNLABKRZQRCOSPFWVNRWFINDYQUOWTAWUGDKTJCWVUKOWNXAGTGHUJ");

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
    msg.setTimeStamp(0.27950039578056285);
    msg.setSource(23200U);
    msg.setSourceEntity(114U);
    msg.setDestination(48367U);
    msg.setDestinationEntity(125U);
    msg.timeout = 10342U;
    msg.lat = 0.3145861340410434;
    msg.lon = 0.8971890198745958;
    msg.z = 0.3373194486082295;
    msg.z_units = 231U;
    msg.pitch = 0.5609881523061346;
    msg.amplitude = 0.8683297574453359;
    msg.duration = 47546U;
    msg.speed = 0.01506032844424443;
    msg.speed_units = 80U;
    msg.radius = 0.6629248206086716;
    msg.direction = 157U;
    msg.custom.assign("MCOKUETKTTYXETZW");

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
    msg.setTimeStamp(0.6372300915898386);
    msg.setSource(62679U);
    msg.setSourceEntity(1U);
    msg.setDestination(52586U);
    msg.setDestinationEntity(83U);
    msg.formation_name.assign("UYBWTBDRFKHQLKELISQGRTCDMRYMSVZOJCSDPEIKGCFFXMOZIEZHJBARHRDRJDZWOFTAVMYWBQZNJVMILEINRFZBMVOQMEZEPNGVTUJYVOGTMAXGMVCLFQWGEUTOZJVGNBIDWYNHPSILWKLFKVIANAOBNQTUFYQSGWPYJXSZJJJLKROCPKBZIGUCXAXEHUDXUKKODCAPRVSLPSTPYUWXUXXEXAKPHPCCLNNHHR");
    msg.reference_frame = 156U;
    msg.custom.assign("CGJJYXJGVTUHSUYSKSYIGQGVUOAWEWHBZGEX");

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
    msg.setTimeStamp(0.5797488865326978);
    msg.setSource(41679U);
    msg.setSourceEntity(141U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(118U);
    msg.formation_name.assign("WEZIASOKVSONAYVHZFGTIYZZFKYLYNXDAZIJKBLXLQRVROICVUNTTDXICSOEXDGDYMCXAKJU");
    msg.reference_frame = 179U;
    msg.custom.assign("QLHTGSZFCIGBIDZLZMUCVTTDUHVXHZUCZRHALXPFXTEEKLDZDMNRJKXEGEOMPKIYPPCPQKSQWFNEWKRWRTPPBBVJYVLDBRALHQKSRKONXEEHQYADAPKIFUXZGSTSVCWQGNIAQISPHXNUJJWXJRCSBUWORLGBMOWWONRFEPVTCZNOAJOWSDBYVMUNAQFUIMEXVVMIITAUJDLKYYHYFFENJFNCMIYZGKAOSCQYXFGBOGGCJMRBHABLVQJWUDM");

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
    msg.setTimeStamp(0.799360186799091);
    msg.setSource(31280U);
    msg.setSourceEntity(1U);
    msg.setDestination(57855U);
    msg.setDestinationEntity(238U);
    msg.formation_name.assign("CFBOOGHSDJNKYORVICTXNPSSUQIYPDKRGEHCYNTIVEIAGIBOCBFAJJKWTGRBALTMLPZQMNZEYWVVMFFRVYTGYOTANHPOYPLWHTUIBUXZAZUFAZZBYUSDWSMFLHBRXQLRMHXJEQNTGZFQGGMNAUPJWMXDXPHCXOEPDWRPQHQJOZAVAXWINXVQLFEUGG");
    msg.reference_frame = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61434U;
    tmp_msg_0.off_x = 0.8822809035648668;
    tmp_msg_0.off_y = 0.4269398732971039;
    tmp_msg_0.off_z = 0.9357791078878165;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WJCCRIEQSIZPZCIATSBYWBWBCFOYSUXAJNZL");

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
    msg.setTimeStamp(0.3390186640758047);
    msg.setSource(46150U);
    msg.setSourceEntity(159U);
    msg.setDestination(40976U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("HIOKDLUYLICETMYCHMDTNFFYQVZTARZFLECEOSNCYIJOSEGBPCRKGFXSIEHBJOPBPDFBUAUPTKWYUMKAMOQWQXWJVXHRNQELRHZSELAJFOKINKFAANRBMYBUAYZJLLNJEWMCNQHPRQEDDPHWBVVQXEBOSUKWGODXTZUZSRPVGOVIXSDAINPUGFGMGTVWHWWJQRZVPZSYRSRIODFGYJXNLL");
    msg.formation_name.assign("WPLYIBBMVQYHXAFEMRTZNHRAIMBPRVRYYUDLXBSNPUPYFFOOLUDIOFTDKZMSFWKUMEXHYJHCVZBKWGRQETIHOIGMZYNKSSWGFCDVQILGBAWAPTUHJNNPZJHU");
    msg.plan_id.assign("ZLWBMMPKZPUKVLIFDJFBMERQCMTGKIWWGZFBMHUYYYVRIDHKQEZUDRQA");
    msg.description.assign("KCLMLVHTKTIFMOCU");
    msg.leader_speed = 0.47119049914129085;
    msg.leader_bank_lim = 0.04273382109341306;
    msg.pos_sim_err_lim = 0.058032594488707456;
    msg.pos_sim_err_wrn = 0.6347966479199099;
    msg.pos_sim_err_timeout = 33645U;
    msg.converg_max = 0.30652979838001215;
    msg.converg_timeout = 5241U;
    msg.comms_timeout = 41876U;
    msg.turb_lim = 0.8747506166740667;
    msg.custom.assign("UNNLCSJLOXARNUJREJBITQNNYZGUPAYKTUIIXOBCQBJFPZXHWGCVHIQNCMQHELJMDVROKZQSWTUCLVRDXWEKFDBKGFCJVKYMRM");

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
    msg.setTimeStamp(0.9356742492048958);
    msg.setSource(21963U);
    msg.setSourceEntity(147U);
    msg.setDestination(38320U);
    msg.setDestinationEntity(104U);
    msg.group_name.assign("WTJXWQCESHQDTBIMDZAKPLQDABXSGZZNZKEUEDVAZZJKSCYRUNLHVZHUOQKRFYVUEQFFSTWYFQBGIOIYDPWYXUAIHGLFIOIMTZKAJWLGLQFHMAPLOTRMXHTYOGRYTDOJFEXPNIGTXYPFZDGSJKHCCGACCNDNAWSRYXNXETVBOOWZLTBHNVVLHPJWGEUVOVRCCOBBJEAYUEBJSRXMWEMIBPS");
    msg.formation_name.assign("TWDCXRNGCJPJQATCBXJUHSIKPESVKILYTRIWGZGQZOLEOXOUGZXXHRQVVBYFUIYFNRREULKLILHTNMJOCMWJJBNWXASNSCBYBOKAWITHLMXOVTRCWSVERXDHQQZKZPLYBBEGPGCFQUPQFPPGT");
    msg.plan_id.assign("MCIZVMXNRICVNVHWTDSEILCXATAANDVPUDWZKFBUIIYZBUHNGKNWMUCEONBPELFZYKZWSPJUJXTW");
    msg.description.assign("EWHSWPHENGVQBZLQLYYWWVEFAUTCOWBNFCTEZGQUSEHHXDBGPYLNYNMEZJIJBMCSKPCAFSNJXCPVTFHJWSOKYYZYIKTTNBCILQRKBVOGOJILEPGVFDSPRSBUBMFQOMDXIXPNOXWGFQVIUMVTHEHWKTKPNPOUEILWSUZMIARUGLUGRCQDBJDDGVILCIAYSHWXFSYLZXNDHACKDZTVJXBAGXDKUFKRDZA");
    msg.leader_speed = 0.11331720735078632;
    msg.leader_bank_lim = 0.16651923749007125;
    msg.pos_sim_err_lim = 0.07552610388636494;
    msg.pos_sim_err_wrn = 0.1946238664526121;
    msg.pos_sim_err_timeout = 37706U;
    msg.converg_max = 0.46699654113098077;
    msg.converg_timeout = 61231U;
    msg.comms_timeout = 32265U;
    msg.turb_lim = 0.9938494881434335;
    msg.custom.assign("LMXGKHGVYZBFJMDGRTPPHUWOCHZTEDHBYJAABLEYERTPXIEVRDTFAHHCCHYQCQRTNSQLZZHOVO");

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
    msg.setTimeStamp(0.0666384012705784);
    msg.setSource(29785U);
    msg.setSourceEntity(60U);
    msg.setDestination(48637U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("BCPAQODRJIXMLWYOQZMLYKWQUSLTGGGTHBBNWYPVMVYEUFHDVYTKYCULDJVNPVVNABOXPSHLHCEDIKNITXJUINZMUAWKCZORIEBIVAPROXOKPPXORFCFFEGSQTOMDPLXGUQHGMAREBZJCRDULQTHWHSSEJVMI");
    msg.formation_name.assign("GSGYQEASYMKZBOXCFINYRCOEBVGQTQPLMPCXFJTFNEBECEJTLZRRUWHQXBSCZWHIVRMTDHATVCXDDWRRLXSRNHFVPJBWQANLFKMPUGELHIFUJHQFYPYOSKIMJXFTOIWNNCIGUYBNUAOWILUKASYEZBTMJBAT");
    msg.plan_id.assign("CBNXAHRHVXWMGRGEXTYTLEPJNVAZJFQVWGZIOOVWFMLOZLHWUYTPIPTKBIYYHVLBFGWHBBGCQNMCGCIZERDETJFYWRKWNNFDDCSOADHTEOIULADHIORANQBZNXLSFAJOVKZXKSHEGIRPACMDVQVTSFOGMMTQZRJFKBUUQWGSIJGWXSRZBUBSYCXRZAWLKTEQIUVKPTDEJEKEANUYQUMZPYPLDPMSPFNO");
    msg.description.assign("CUVBHONDWDOKJIEYAQKGVXWRZSWQSOEMVZOMSDDJTKVEVYNZLITLNLXEBXGKPCBYWLIKRTQXNFXYQFPRMIERTWHAHBUDRPERKYHETCMWSNIBCRVWLTOZIDPUKQLLNFGZSJOMCJFCMZRDLYRJMUBCWIBEYGFVTLXHZBK");
    msg.leader_speed = 0.501129597778823;
    msg.leader_bank_lim = 0.3235647358712056;
    msg.pos_sim_err_lim = 0.7242487961919961;
    msg.pos_sim_err_wrn = 0.8280547372013479;
    msg.pos_sim_err_timeout = 24649U;
    msg.converg_max = 0.894015452269169;
    msg.converg_timeout = 49188U;
    msg.comms_timeout = 19103U;
    msg.turb_lim = 0.05615732029235254;
    msg.custom.assign("QLASDMBPBSSQLOPVSUKZFKSZBNBQJAKKOJRLGYNTZYLJGDYCFOTMUQDOLBEIADFFTYBHAQTCUAQNKENYAGCKTOKDJCSPTHRWPEHWOBVUCRLMXDZANEVZVECITRTIXWEXUQWGLOEZWEQX");

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
    msg.setTimeStamp(0.003338642352779919);
    msg.setSource(35939U);
    msg.setSourceEntity(74U);
    msg.setDestination(16037U);
    msg.setDestinationEntity(71U);
    msg.control_src = 13476U;
    msg.control_ent = 131U;
    msg.timeout = 0.6723318352475748;
    msg.loiter_radius = 0.4051355560996859;
    msg.altitude_interval = 0.49309232046571183;

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
    msg.setTimeStamp(0.5360099768433637);
    msg.setSource(31777U);
    msg.setSourceEntity(185U);
    msg.setDestination(12405U);
    msg.setDestinationEntity(251U);
    msg.control_src = 7794U;
    msg.control_ent = 25U;
    msg.timeout = 0.8509108231462883;
    msg.loiter_radius = 0.6179972923459655;
    msg.altitude_interval = 0.7106767268609886;

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
    msg.setTimeStamp(0.9548436306676825);
    msg.setSource(47178U);
    msg.setSourceEntity(227U);
    msg.setDestination(31992U);
    msg.setDestinationEntity(160U);
    msg.control_src = 58313U;
    msg.control_ent = 3U;
    msg.timeout = 0.11423547428419356;
    msg.loiter_radius = 0.320063280837095;
    msg.altitude_interval = 0.6060889707866429;

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
    msg.setTimeStamp(0.35756856927444525);
    msg.setSource(51726U);
    msg.setSourceEntity(31U);
    msg.setDestination(34491U);
    msg.setDestinationEntity(143U);
    msg.flags = 7U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.06048259971203884;
    tmp_msg_0.speed_units = 219U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8536630330358306;
    tmp_msg_1.z_units = 104U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.17236452894931464;
    msg.lon = 0.31960145447020394;
    msg.radius = 0.9939430737893918;

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
    msg.setTimeStamp(0.10512286070950849);
    msg.setSource(42019U);
    msg.setSourceEntity(57U);
    msg.setDestination(43998U);
    msg.setDestinationEntity(140U);
    msg.flags = 126U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8619155170252196;
    tmp_msg_0.speed_units = 117U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.30059113142819294;
    tmp_msg_1.z_units = 243U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.657874352605067;
    msg.lon = 0.7188690733406657;
    msg.radius = 0.7649718403539644;

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
    msg.setTimeStamp(0.7803479024632668);
    msg.setSource(2776U);
    msg.setSourceEntity(117U);
    msg.setDestination(55576U);
    msg.setDestinationEntity(210U);
    msg.flags = 172U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6825204722961569;
    tmp_msg_0.speed_units = 157U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6658495178142453;
    tmp_msg_1.z_units = 238U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.12833501276083614;
    msg.lon = 0.7007240370840859;
    msg.radius = 0.11667329857598141;

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
    msg.setTimeStamp(0.04295389078121559);
    msg.setSource(56630U);
    msg.setSourceEntity(69U);
    msg.setDestination(63160U);
    msg.setDestinationEntity(51U);
    msg.control_src = 53880U;
    msg.control_ent = 60U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 183U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8180858107642238;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5797212130990015;
    tmp_tmp_msg_0_1.z_units = 102U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.015551526703984186;
    tmp_msg_0.lon = 0.21564062246251292;
    tmp_msg_0.radius = 0.537809846077281;
    msg.reference.set(tmp_msg_0);
    msg.state = 146U;
    msg.proximity = 17U;

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
    msg.setTimeStamp(0.3915100678964596);
    msg.setSource(64981U);
    msg.setSourceEntity(37U);
    msg.setDestination(30752U);
    msg.setDestinationEntity(117U);
    msg.control_src = 17309U;
    msg.control_ent = 181U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 113U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3946058617561705;
    tmp_tmp_msg_0_0.speed_units = 136U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3031441353314124;
    tmp_tmp_msg_0_1.z_units = 187U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.013331604252460938;
    tmp_msg_0.lon = 0.4998990328835551;
    tmp_msg_0.radius = 0.5981214366511416;
    msg.reference.set(tmp_msg_0);
    msg.state = 142U;
    msg.proximity = 223U;

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
    msg.setTimeStamp(0.30917980857764316);
    msg.setSource(64680U);
    msg.setSourceEntity(165U);
    msg.setDestination(19289U);
    msg.setDestinationEntity(228U);
    msg.control_src = 54462U;
    msg.control_ent = 147U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 151U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.49169209475816833;
    tmp_tmp_msg_0_0.speed_units = 225U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2657063780396247;
    tmp_tmp_msg_0_1.z_units = 232U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9598650379742667;
    tmp_msg_0.lon = 0.6019637452920159;
    tmp_msg_0.radius = 0.8024579724306122;
    msg.reference.set(tmp_msg_0);
    msg.state = 79U;
    msg.proximity = 130U;

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
    msg.setTimeStamp(0.07489417313224178);
    msg.setSource(64542U);
    msg.setSourceEntity(14U);
    msg.setDestination(8351U);
    msg.setDestinationEntity(247U);
    msg.ax_cmd = 0.43471161162444594;
    msg.ay_cmd = 0.6890910583592856;
    msg.az_cmd = 0.3339850223292894;
    msg.ax_des = 0.4860032795956156;
    msg.ay_des = 0.9177730649933785;
    msg.az_des = 0.44943484047506366;
    msg.virt_err_x = 0.27993563317249814;
    msg.virt_err_y = 0.9772369917132696;
    msg.virt_err_z = 0.4241822947987034;
    msg.surf_fdbk_x = 0.6491409864995116;
    msg.surf_fdbk_y = 0.9854972134401504;
    msg.surf_fdbk_z = 0.4885240324795521;
    msg.surf_unkn_x = 0.6423955472905837;
    msg.surf_unkn_y = 0.13576066275556842;
    msg.surf_unkn_z = 0.49677820026763597;
    msg.ss_x = 0.6553372535265761;
    msg.ss_y = 0.11366977670265721;
    msg.ss_z = 0.177493254401633;

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
    msg.setTimeStamp(0.7507728140668484);
    msg.setSource(31951U);
    msg.setSourceEntity(206U);
    msg.setDestination(3311U);
    msg.setDestinationEntity(221U);
    msg.ax_cmd = 0.5687623954325495;
    msg.ay_cmd = 0.9970880425362617;
    msg.az_cmd = 0.5700574149330723;
    msg.ax_des = 0.6648197473267176;
    msg.ay_des = 0.34539957532591536;
    msg.az_des = 0.7474671061836651;
    msg.virt_err_x = 0.21830755346686326;
    msg.virt_err_y = 0.4518625742347403;
    msg.virt_err_z = 0.3577628272849108;
    msg.surf_fdbk_x = 0.8192326885655824;
    msg.surf_fdbk_y = 0.9395149582722239;
    msg.surf_fdbk_z = 0.3441753152544058;
    msg.surf_unkn_x = 0.2810244164761472;
    msg.surf_unkn_y = 0.7749453575873892;
    msg.surf_unkn_z = 0.9220343593405291;
    msg.ss_x = 0.27348258441267526;
    msg.ss_y = 0.15137918372649906;
    msg.ss_z = 0.5422775140314668;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XLDRLYCEGDWUNNIOOBXLPPUEWUEQWJLTTBNBFJCTDMFJCEKZGTXUZFUDKHTSPHSOZWJBIRIWTYPTVJRUWQCMYIGQBDKVAOHMAKMWLXRWTTOHNNSXLXHJIGBOHRHCSIMPYXGSXESYKQNVBVPYWAUR");
    tmp_msg_0.dist = 0.1844563293408592;
    tmp_msg_0.err = 0.8089090345086754;
    tmp_msg_0.ctrl_imp = 0.31505809348720215;
    tmp_msg_0.rel_dir_x = 0.2816727004419578;
    tmp_msg_0.rel_dir_y = 0.7278037057242185;
    tmp_msg_0.rel_dir_z = 0.7764263387731536;
    tmp_msg_0.err_x = 0.7643449075197885;
    tmp_msg_0.err_y = 0.9532367276763508;
    tmp_msg_0.err_z = 0.6543293012949325;
    tmp_msg_0.rf_err_x = 0.041731049380067;
    tmp_msg_0.rf_err_y = 0.07200236689796602;
    tmp_msg_0.rf_err_z = 0.35830063079790087;
    tmp_msg_0.rf_err_vx = 0.44581640414837764;
    tmp_msg_0.rf_err_vy = 0.42871247591534367;
    tmp_msg_0.rf_err_vz = 0.874874426841921;
    tmp_msg_0.ss_x = 0.7997680410471044;
    tmp_msg_0.ss_y = 0.07618481455001036;
    tmp_msg_0.ss_z = 0.13791219613305628;
    tmp_msg_0.virt_err_x = 0.1688381757184494;
    tmp_msg_0.virt_err_y = 0.30924878665945266;
    tmp_msg_0.virt_err_z = 0.8008285722534779;
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
    msg.setTimeStamp(0.9873373234493984);
    msg.setSource(16142U);
    msg.setSourceEntity(99U);
    msg.setDestination(28421U);
    msg.setDestinationEntity(75U);
    msg.ax_cmd = 0.6554396765655721;
    msg.ay_cmd = 0.22482001120526474;
    msg.az_cmd = 0.3333242986612016;
    msg.ax_des = 0.25709735286079083;
    msg.ay_des = 0.08721422935201051;
    msg.az_des = 0.31405055414456307;
    msg.virt_err_x = 0.07962158452234702;
    msg.virt_err_y = 0.7192824496346247;
    msg.virt_err_z = 0.5809194015917728;
    msg.surf_fdbk_x = 0.7676528791226523;
    msg.surf_fdbk_y = 0.7025391685873351;
    msg.surf_fdbk_z = 0.7641488896568511;
    msg.surf_unkn_x = 0.3208378645299338;
    msg.surf_unkn_y = 0.9676319814559886;
    msg.surf_unkn_z = 0.322770371274544;
    msg.ss_x = 0.11540042686537089;
    msg.ss_y = 0.9250323829190362;
    msg.ss_z = 0.36390840368217037;

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
    msg.setTimeStamp(0.3310043723372478);
    msg.setSource(54990U);
    msg.setSourceEntity(128U);
    msg.setDestination(24142U);
    msg.setDestinationEntity(246U);
    msg.s_id.assign("MCDBUHAQXQSCVOTWQJJNIDILVVQKYKMWEFCCTDSKLXMIWLZCFZZPCDADNSFLAFRINILJTYDHHYYMOGTRROUMAQXPXYVSGKDOXMPHBPMOYFAQNWOBPMNDEROEKEVGLKUKCWSHWXNSR");
    msg.dist = 0.5452162184411934;
    msg.err = 0.7816570944387018;
    msg.ctrl_imp = 0.907151123183773;
    msg.rel_dir_x = 0.8918928701780683;
    msg.rel_dir_y = 0.8890414855843778;
    msg.rel_dir_z = 0.24438254841539653;
    msg.err_x = 0.9752366329197786;
    msg.err_y = 0.005825444073759067;
    msg.err_z = 0.6585725190917728;
    msg.rf_err_x = 0.5984644116975991;
    msg.rf_err_y = 0.647242374908773;
    msg.rf_err_z = 0.3143362535858296;
    msg.rf_err_vx = 0.8070658085058138;
    msg.rf_err_vy = 0.0830585024893934;
    msg.rf_err_vz = 0.33598624377463226;
    msg.ss_x = 0.9345137929977505;
    msg.ss_y = 0.07994218464659486;
    msg.ss_z = 0.6011258265077523;
    msg.virt_err_x = 0.46425505046060844;
    msg.virt_err_y = 0.9590339221041176;
    msg.virt_err_z = 0.34449645014060015;

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
    msg.setTimeStamp(0.188486291780248);
    msg.setSource(61651U);
    msg.setSourceEntity(120U);
    msg.setDestination(42178U);
    msg.setDestinationEntity(178U);
    msg.s_id.assign("TJFNWWFEKRTUFXZIMABWDJUYOOEHBOVPHJGLVJGRLVNEVSISDHNLIPJWBPTTMHXTLUFVBNGAWSMGVZMYHUKTXLRGRTFRZOECJMNCIOKZFZBMUVKPSMNEUDVJAYKUQEXDQSISCUQWEHPADLCVBZGDQVNWXLXYQYTWIRMPQNRXIANCALYKQMPXK");
    msg.dist = 0.3962916983054655;
    msg.err = 0.7134725322052705;
    msg.ctrl_imp = 0.4411673926807054;
    msg.rel_dir_x = 0.4742498452722871;
    msg.rel_dir_y = 0.5585080355786796;
    msg.rel_dir_z = 0.6414391170933708;
    msg.err_x = 0.9532810317376863;
    msg.err_y = 0.4888560886862987;
    msg.err_z = 0.05238852652214765;
    msg.rf_err_x = 0.6018045585356282;
    msg.rf_err_y = 0.9528726466806022;
    msg.rf_err_z = 0.029031758528973772;
    msg.rf_err_vx = 0.5374942512168067;
    msg.rf_err_vy = 0.4212712342769822;
    msg.rf_err_vz = 0.879560389533785;
    msg.ss_x = 0.6776474677409763;
    msg.ss_y = 0.03715419569185974;
    msg.ss_z = 0.8144761575603859;
    msg.virt_err_x = 0.07663244782497614;
    msg.virt_err_y = 0.33694819013755384;
    msg.virt_err_z = 0.725518455904331;

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
    msg.setTimeStamp(0.46134142007195433);
    msg.setSource(38896U);
    msg.setSourceEntity(4U);
    msg.setDestination(62571U);
    msg.setDestinationEntity(206U);
    msg.s_id.assign("GXNOACVWFYKITMBVYCIARRFIHBPUSXKQLHEQMSFYTQCZJZYFESJAUEXMDILPOMXBRYODBNUHGVKLHUWKQQTBBATEPQTN");
    msg.dist = 0.8298560462420361;
    msg.err = 0.4345549308807608;
    msg.ctrl_imp = 0.21156451945132027;
    msg.rel_dir_x = 0.345209449145752;
    msg.rel_dir_y = 0.010580805451726571;
    msg.rel_dir_z = 0.45032320356958744;
    msg.err_x = 0.9038653750808866;
    msg.err_y = 0.9173195698329383;
    msg.err_z = 0.06844241270935736;
    msg.rf_err_x = 0.46643236004316924;
    msg.rf_err_y = 0.6117500708921318;
    msg.rf_err_z = 0.1321039992729791;
    msg.rf_err_vx = 0.810995072785872;
    msg.rf_err_vy = 0.37558004001949163;
    msg.rf_err_vz = 0.276931077166804;
    msg.ss_x = 0.7598521839958621;
    msg.ss_y = 0.19830807426822783;
    msg.ss_z = 0.760416644671467;
    msg.virt_err_x = 0.4663437671606123;
    msg.virt_err_y = 0.6705217889688966;
    msg.virt_err_z = 0.20802523130101502;

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
    msg.setTimeStamp(0.8646458504409303);
    msg.setSource(53211U);
    msg.setSourceEntity(168U);
    msg.setDestination(13028U);
    msg.setDestinationEntity(231U);
    msg.timeout = 26807U;
    msg.rpm = 0.8998471560960095;
    msg.direction = 244U;
    msg.custom.assign("MMJYLVSDFJEGMKRSXWUQBBMBELZUCDDPICIVJDBSNJXULEPMORAQGKWZFXFWZCNWTFQC");

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
    msg.setTimeStamp(0.8708282273479283);
    msg.setSource(56544U);
    msg.setSourceEntity(21U);
    msg.setDestination(49345U);
    msg.setDestinationEntity(37U);
    msg.timeout = 62299U;
    msg.rpm = 0.46710052468050955;
    msg.direction = 69U;
    msg.custom.assign("DHORTUJXTYOVVILQCMPSZZMZYLKETUZOYUZHTPRWCNJSKAXOFRZHEIRNDPVTIXVJDLMBFCLSFFMYEGQAAHAKSZBWQOTUANLWNRLYTBMYNSNSYVXDABBKZKGBBKRWIPWDDLFZPWYDQPGUHQSEDGOCXVJAIQFCLUCAMSVKBMYVCEHUINHOLFNXWERPQTUPHXIFXEMBPTTOF");

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
    msg.setTimeStamp(0.8966584968950446);
    msg.setSource(53710U);
    msg.setSourceEntity(243U);
    msg.setDestination(55929U);
    msg.setDestinationEntity(156U);
    msg.timeout = 57364U;
    msg.rpm = 0.8662848050376835;
    msg.direction = 149U;
    msg.custom.assign("OEHQINWHACWEH");

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
    msg.setTimeStamp(0.8836019304377676);
    msg.setSource(58859U);
    msg.setSourceEntity(131U);
    msg.setDestination(55876U);
    msg.setDestinationEntity(83U);
    msg.formation_name.assign("LMXXESKSLACEUONYIHGWUGPUBMCZZAQPGFMNMTSEZQVIFGDKJYLJNGPDMWUHPLLYXPFRNCAWISTOSVKHBBINOJWVTGCOWXLZKRWTPJHTLBWRWECTSVAVAJPYQWSAIJMFMFNQUZZFHXLUOAIKXUOTRDYSKRRIDFWPYNUETABEPCFYSMXXRZRBDDAJKOLXELTIBGQRUHVDJCQGCEATJKMPQZCDDIMDOVXUJ");
    msg.type = 188U;
    msg.op = 191U;
    msg.group_name.assign("RFAMEXNDFOCYSNZFYUEXSCTXVAWWGRDOLBBLXTYLYRBZTPSFHDRMHIJDNVIKDXWONJSMRZJCCVOEIACZSRTCTFALDQWOO");
    msg.plan_id.assign("FICLARZGQFXVHNWWHHJVJOZIVMUBJQHNSANBWDKAEWQPUCERBSFZCALUOZMQDMDNDSSHUBGWNOGOWURFDIKZWRUAZXRGAVYJGVYIQHLKSJYPOKEJTLVPIMBATENEERGAXKKSQJH");
    msg.description.assign("HGBWMMGWQKDBVICOISHDLC");
    msg.reference_frame = 74U;
    msg.leader_bank_lim = 0.11350543702701121;
    msg.leader_speed_min = 0.8561388349232035;
    msg.leader_speed_max = 0.428189150166124;
    msg.leader_alt_min = 0.8849305506382912;
    msg.leader_alt_max = 0.5334609352870736;
    msg.pos_sim_err_lim = 0.9562035414004434;
    msg.pos_sim_err_wrn = 0.3595585807520997;
    msg.pos_sim_err_timeout = 18137U;
    msg.converg_max = 0.8599322215616173;
    msg.converg_timeout = 18077U;
    msg.comms_timeout = 27421U;
    msg.turb_lim = 0.9221981795100441;
    msg.custom.assign("WLAFCEVSSHOVBQOGURN");

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
    msg.setTimeStamp(0.8851872075854292);
    msg.setSource(11142U);
    msg.setSourceEntity(120U);
    msg.setDestination(23094U);
    msg.setDestinationEntity(77U);
    msg.formation_name.assign("PBNAQLJSGNDUTCXKAJHMQNOLLXKHWGWCNTQCKAAEWWXNADBALYIYEOYXTBGFYEVFWEEAVVCQHEIBTHUQOSHPVRPDRZGLXH");
    msg.type = 68U;
    msg.op = 251U;
    msg.group_name.assign("YBPSJAPHISEBKOXUVBZALZFIWIJLNCMIOCUQPAGDUEOSJYYDHWEKMUGQPDNSMIHUWUDRHZDMGANRMAPLFXNTBYVVZSBXHZKBVYVWTWEQCUODDFPIUHWDGMZYPTEZNGKSAOLCALITFRZXUXABZLJNMYEJLTVTFGNLHSIVNPRKXOYYSZNEKRHSCEAMIDDKTQRVLQGJMGROQFMTIAXOVKCJXPCBFJWBSXLEOO");
    msg.plan_id.assign("ELZBTLYSOYVFRYBFWMJKQLXRMJNDHXUWGXPROWQFKEZNGLOATMHGFIGFHTTIZUBUZOHVQGMLJPONLCKZSSZHUAHKXZISKSHPCNWVPUTSDJTBIXRIUCUENZFSQXJUEGYJGDUAXTQZZDKILWVKAFYIPAFPPDTNCRFBCDKMJCAXRDYYNSQJAIKDESLMICMNOQEGBDUXWQPNRPEYWVXEYCECWOSOBIWHAGR");
    msg.description.assign("OQHMIPZUBMSQIHODDYEUIKXDEJBKGVLTTKPKEXGJJGQXBOHSJCNWRLNGPEXWFIEBOBQJFYFILQFLVPMPPLHXNHBUKHZZPSJOEAABINTUGJVGTCRIJTHYYYFZZYCVWYOHLNCSTSEDMXYXUSDRMRRZUEZLWZVFWVTGOKTBCFADCMBNQCZCWVSUDRXLTNKUJVOLOICVORARDAWMQFWFBISYFADYKPAXMPKSUVZJDAGQNLRQGCH");
    msg.reference_frame = 95U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22481U;
    tmp_msg_0.off_x = 0.7570940588276959;
    tmp_msg_0.off_y = 0.5952629724936348;
    tmp_msg_0.off_z = 0.6386006172250994;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9712953787756728;
    msg.leader_speed_min = 0.3000440130702199;
    msg.leader_speed_max = 0.08023904972996232;
    msg.leader_alt_min = 0.10356646461639862;
    msg.leader_alt_max = 0.42571402974739525;
    msg.pos_sim_err_lim = 0.3506763548813264;
    msg.pos_sim_err_wrn = 0.2366287969134786;
    msg.pos_sim_err_timeout = 51579U;
    msg.converg_max = 0.6707656928184421;
    msg.converg_timeout = 55667U;
    msg.comms_timeout = 20736U;
    msg.turb_lim = 0.0013676729925252706;
    msg.custom.assign("IEDNCJDGZXZVTFJMPJRCFNIKQHNWECKDJBJ");

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
    msg.setTimeStamp(0.8719882268663517);
    msg.setSource(19727U);
    msg.setSourceEntity(149U);
    msg.setDestination(39559U);
    msg.setDestinationEntity(44U);
    msg.formation_name.assign("CNPOCIIGJRWTZDWTBFBJJRNWTEVMZIJQHITKBESDOXQVPTJZYJTASRGXAQDKBESUZTA");
    msg.type = 5U;
    msg.op = 108U;
    msg.group_name.assign("YEQRJXHYGJDRFVVMWMZGCBPXVKEYALJBWFXNCNRGBNUTMCPWSNDCHZOWTIZAPADUGIHPCRPNLXUWAFKSEKWOYHRJ");
    msg.plan_id.assign("RMEVGKFZFTKLDMLSFSEHWFFUYDAKALEUDPHNPXAYVGAYVXICXPYOEANHBURXBQREYNCRHUMQPMHVZBJKJWPQZBLTNZBDSZGKVOUKXEQZKJDXVJBOFHTIQRMRFPGPKIJNZRJCVZZMNMBPDCCQQLVGRMWEGQHIKOGBYJSLYUXBJWSI");
    msg.description.assign("MQPZWUZRLZUGWWDKPTAOLJMMOXMIHYHZWAVVKTZWPUJODGYGAAEJFBNUJCQLXFCYNFHEKQDVSHMCRLTZYZBNDQMBQBMKFJUDLCTFHYVRERYFECPUNRNJQTWDTNJNABLSAQNRBFHOHLQATCPDHOKHASYDIKVXIGRNJWPSGXDKEIQVIQMBSEACAEBOT");
    msg.reference_frame = 160U;
    msg.leader_bank_lim = 0.04432999357648626;
    msg.leader_speed_min = 0.03011252661495889;
    msg.leader_speed_max = 0.6050260973755023;
    msg.leader_alt_min = 0.29842321385328585;
    msg.leader_alt_max = 0.5077721878517063;
    msg.pos_sim_err_lim = 0.8635859234774725;
    msg.pos_sim_err_wrn = 0.10534499422015964;
    msg.pos_sim_err_timeout = 13029U;
    msg.converg_max = 0.4320076096766805;
    msg.converg_timeout = 2873U;
    msg.comms_timeout = 19917U;
    msg.turb_lim = 0.6815866726834343;
    msg.custom.assign("IJTNAXVAYHBVEIBEJFCESESXNBFHPECWUUGLZTTTWXISXNFAZZDZDUFAJBSOZTERSODIGUPAYONTYYIHMJSAKDCQANRKLWCDMSJXELXDICDHPVMCKBNRNQLQEQHQKOJJYOELIWGYDZMJVCXYFPQXTPSPVCBUGOKBLMBLVRREOPYTUZVPGDJMSNFMRZMHKWWROWFOMUKPKYBZQRFHIWHLBHQAOVNUUXACFQVFGZDVGIWIJYGASWG");

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
    msg.setTimeStamp(0.8350227021271257);
    msg.setSource(21555U);
    msg.setSourceEntity(73U);
    msg.setDestination(47955U);
    msg.setDestinationEntity(115U);
    msg.timeout = 57771U;
    msg.lat = 0.28315778367930367;
    msg.lon = 0.5368086945367496;
    msg.z = 0.05648342457754907;
    msg.z_units = 35U;
    msg.speed = 0.34532308084404717;
    msg.speed_units = 165U;
    msg.custom.assign("MZAYOTIKPWSLOXWAUIILIGKDLTKENVJYRCVYENOAPS");

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
    msg.setTimeStamp(0.2987021105977268);
    msg.setSource(54374U);
    msg.setSourceEntity(119U);
    msg.setDestination(52740U);
    msg.setDestinationEntity(135U);
    msg.timeout = 44928U;
    msg.lat = 0.29640590419788193;
    msg.lon = 0.3228038427191162;
    msg.z = 0.4546295106745265;
    msg.z_units = 232U;
    msg.speed = 0.4348810287409801;
    msg.speed_units = 81U;
    msg.custom.assign("CIWHJATKHTVYLOJQPFHMRBUMJPCTBCHEXIMWGZGUREFNPNOXIQEJGUSWAYPKQAR");

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
    msg.setTimeStamp(0.09370153036210915);
    msg.setSource(2656U);
    msg.setSourceEntity(32U);
    msg.setDestination(41885U);
    msg.setDestinationEntity(86U);
    msg.timeout = 33921U;
    msg.lat = 0.5317016729647155;
    msg.lon = 0.43828067884605215;
    msg.z = 0.9876751968354185;
    msg.z_units = 146U;
    msg.speed = 0.4939918867775781;
    msg.speed_units = 150U;
    msg.custom.assign("MXEXQTLSEAOXZCKYWXKUOCGRGGKJUVPOF");

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
    msg.setTimeStamp(0.577301469140027);
    msg.setSource(34481U);
    msg.setSourceEntity(154U);
    msg.setDestination(52537U);
    msg.setDestinationEntity(53U);
    msg.timeout = 23382U;
    msg.lat = 0.2805338942286433;
    msg.lon = 0.8899547582642044;
    msg.z = 0.4187076197560843;
    msg.z_units = 237U;
    msg.speed = 0.7444015653324866;
    msg.speed_units = 133U;
    msg.custom.assign("QFZEQUCBBTKCRFDQQSIWBGTPUTAUVKDYXJYOPQKFAJIFQXPTAAQPVVWIRAWZTYNVLRHFZGJCBZOZEGYGHUHNKTSTJWHLGJIUMYYCDODNLMPXYMXCVFJGUSOBYRSXQWIBTRJXGMIBDBKUEWROUZSEHKJFJOMKHSORTNDWGKLVNKZDMFOZPKEWMTENXXGECGAXLLCSERWH");

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
    msg.setTimeStamp(0.17322291445540527);
    msg.setSource(40237U);
    msg.setSourceEntity(140U);
    msg.setDestination(23816U);
    msg.setDestinationEntity(106U);
    msg.timeout = 40240U;
    msg.lat = 0.009099628634344548;
    msg.lon = 0.9030683932010183;
    msg.z = 0.27886603670955945;
    msg.z_units = 245U;
    msg.speed = 0.05221476553837412;
    msg.speed_units = 159U;
    msg.custom.assign("CWYJXCYFJUWAPOVWFNCYFMHMIQHQJKLELRVPYUOCSUCIQGCXWCNBEAMPVQPKZTYLFSGFVWZQWXDPHSWITRXYESNGMWPKVEAJOPLXKQSRAJFITJTKBNSKCZBTRKIZLEJFACZOYFNHGYOMRHGNODMHRDCVPBALOGHMTDRBH");

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
    msg.setTimeStamp(0.8948269984377077);
    msg.setSource(38026U);
    msg.setSourceEntity(98U);
    msg.setDestination(33809U);
    msg.setDestinationEntity(113U);
    msg.timeout = 46546U;
    msg.lat = 0.1961352599418137;
    msg.lon = 0.9891058282748607;
    msg.z = 0.5330929540604153;
    msg.z_units = 101U;
    msg.speed = 0.7572942003666887;
    msg.speed_units = 44U;
    msg.custom.assign("FKFCPRAIOLBOISFUFJWCCRPVIWBJJXWYZOLKBOTQQVZSVXPDECRAXKRDRYPGLHULWIFSXWVIQZEVPUWKDUBNAINHXMKBGONOILIAEVNNMZSYUJYDJGYLYFHKPNUDMSRCWFFEOJLGGRQYVENEFQVXJDAMXBAQVUSABKHRLGYZSXLSONEOBXCUTJZRBNMCWTJWLYXPZSMZTDCGKEMPYAHGNUTKTTHSMKQTCJAVQUBQHZTGMHHIFHPGPWCQOID");

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
    msg.setTimeStamp(0.20254726096778253);
    msg.setSource(13752U);
    msg.setSourceEntity(44U);
    msg.setDestination(30812U);
    msg.setDestinationEntity(199U);
    msg.arrival_time = 0.2416446535070348;
    msg.lat = 0.8964433337622741;
    msg.lon = 0.9222252324730982;
    msg.z = 0.9872891944135133;
    msg.z_units = 125U;
    msg.travel_z = 0.8243672869534029;
    msg.travel_z_units = 13U;
    msg.delayed = 234U;

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
    msg.setTimeStamp(0.11055156259697885);
    msg.setSource(14589U);
    msg.setSourceEntity(71U);
    msg.setDestination(21405U);
    msg.setDestinationEntity(211U);
    msg.arrival_time = 0.04298817975319036;
    msg.lat = 0.46499239970263506;
    msg.lon = 0.7132504772337811;
    msg.z = 0.27989686812412384;
    msg.z_units = 100U;
    msg.travel_z = 0.7121922685987148;
    msg.travel_z_units = 138U;
    msg.delayed = 70U;

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
    msg.setTimeStamp(0.10309975446922226);
    msg.setSource(55867U);
    msg.setSourceEntity(21U);
    msg.setDestination(26858U);
    msg.setDestinationEntity(101U);
    msg.arrival_time = 0.4850105307965158;
    msg.lat = 0.6136527342992002;
    msg.lon = 0.9352347433552739;
    msg.z = 0.7325351568882937;
    msg.z_units = 202U;
    msg.travel_z = 0.033807752923172285;
    msg.travel_z_units = 80U;
    msg.delayed = 182U;

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
    msg.setTimeStamp(0.5494320017363612);
    msg.setSource(30274U);
    msg.setSourceEntity(106U);
    msg.setDestination(15651U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.07784657049980737;
    msg.lon = 0.5116267146410868;
    msg.z = 0.07370127084703482;
    msg.z_units = 185U;
    msg.speed = 0.588304533771945;
    msg.speed_units = 223U;
    msg.bearing = 0.9646208405669594;
    msg.cross_angle = 0.2993933227682417;
    msg.width = 0.07320035136600178;
    msg.length = 0.9447837572496323;
    msg.coff = 175U;
    msg.angaperture = 0.34419344382060013;
    msg.range = 43778U;
    msg.overlap = 163U;
    msg.flags = 81U;
    msg.custom.assign("ISKTARFMVRCXMFWIJLCAMSQOSXNCELMBUAEFCLQQWCJDYZBLGFZGWGOZQUWYUOIGHCTRPWXDJRXRHKPEMKIHTOPUJTEDLNOLKSTVGHUYOWZ");

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
    msg.setTimeStamp(0.20698778985452537);
    msg.setSource(65332U);
    msg.setSourceEntity(98U);
    msg.setDestination(63773U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.9494469593792173;
    msg.lon = 0.08487623333314676;
    msg.z = 0.2305107707529529;
    msg.z_units = 145U;
    msg.speed = 0.2185280263612699;
    msg.speed_units = 228U;
    msg.bearing = 0.3865684395911746;
    msg.cross_angle = 0.03308899969327317;
    msg.width = 0.6881472276913729;
    msg.length = 0.9901093543788286;
    msg.coff = 163U;
    msg.angaperture = 0.2458014249745396;
    msg.range = 61497U;
    msg.overlap = 145U;
    msg.flags = 97U;
    msg.custom.assign("XZMWNVGHLVSREPYKWDZNCCYJQBHTDHULUYRUNRBJQAVYOYMWPEJVZKUCVITEVTDSKZNOXYYEMIMQFXJLIAWUFQT");

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
    msg.setTimeStamp(0.5211775953016761);
    msg.setSource(5393U);
    msg.setSourceEntity(234U);
    msg.setDestination(56886U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.4868776986796701;
    msg.lon = 0.8569392269160779;
    msg.z = 0.5539858207699361;
    msg.z_units = 69U;
    msg.speed = 0.3242728854044984;
    msg.speed_units = 250U;
    msg.bearing = 0.10196870988237627;
    msg.cross_angle = 0.6471603917974431;
    msg.width = 0.42825389618690357;
    msg.length = 0.9111408433830849;
    msg.coff = 87U;
    msg.angaperture = 0.9996590064973072;
    msg.range = 14067U;
    msg.overlap = 201U;
    msg.flags = 163U;
    msg.custom.assign("AHBUNUUTDXOORNDCILJQMITDQWBUJUDOVMTRUVPKBHEFMVZHCTZXFMZRPEAQWGDNOKYELZPPRRSWNOQCYQEZCJMBLYGVWD");

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
    msg.setTimeStamp(0.18844911884350413);
    msg.setSource(20868U);
    msg.setSourceEntity(215U);
    msg.setDestination(51404U);
    msg.setDestinationEntity(19U);
    msg.timeout = 1379U;
    msg.lat = 0.23841416603371124;
    msg.lon = 0.1004129030053943;
    msg.z = 0.26150205059179055;
    msg.z_units = 201U;
    msg.speed = 0.9074138117977363;
    msg.speed_units = 218U;
    msg.syringe0 = 215U;
    msg.syringe1 = 248U;
    msg.syringe2 = 243U;
    msg.custom.assign("UDNKJOWEFSSZWVDGJCZGGDAVLXUENVPYOEMHIHNWMXBBYPFWRZCWTAGYPPPOXCGQVLAEELYKHYUKRALXBQNZHBKSJGIGJVZDOQMWIRUPFYLSIETFCXWMDUBRQEWOGUMYSAOATNMTVPTPGXRRYRXZZULO");

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
    msg.setTimeStamp(0.46915887924830213);
    msg.setSource(2014U);
    msg.setSourceEntity(88U);
    msg.setDestination(39990U);
    msg.setDestinationEntity(247U);
    msg.timeout = 53149U;
    msg.lat = 0.27630392344575083;
    msg.lon = 0.8571003748398583;
    msg.z = 0.8222832521028806;
    msg.z_units = 121U;
    msg.speed = 0.3634847507430582;
    msg.speed_units = 63U;
    msg.syringe0 = 20U;
    msg.syringe1 = 17U;
    msg.syringe2 = 126U;
    msg.custom.assign("PMBFQJLPJEEVGQTMCFVDZVXNPEOLCBFWULCSRYNXZNCMMQCFOJTFJJFBLPUYIUVJTSOYSATXOSKHTVONIMLCEPDNHHZHXXQGBRAZAWWYJARGZWUXTQQEWIWWZZBNMVHWGRNKAJHWXYPEIMCETNNYHKRCSDDFYWLSEDUOXAYFGBKVMZKYOKCASGFIQKVYHBCOSMIRUKTOUIKRQGHDKEGBDJTPMAIIBPQVPZL");

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
    msg.setTimeStamp(0.7690839169737859);
    msg.setSource(33671U);
    msg.setSourceEntity(9U);
    msg.setDestination(18860U);
    msg.setDestinationEntity(103U);
    msg.timeout = 50606U;
    msg.lat = 0.9777137942318459;
    msg.lon = 0.2739518271452125;
    msg.z = 0.9469379931065861;
    msg.z_units = 155U;
    msg.speed = 0.3465415227791162;
    msg.speed_units = 225U;
    msg.syringe0 = 157U;
    msg.syringe1 = 194U;
    msg.syringe2 = 112U;
    msg.custom.assign("IMJALWSGAWFNKCFXLSYIJZRWTYBTQGZDBCVNNJQYPVSAPGUNDGEUHHUBURQWZOPUYSUHFBGXDYMFDJCHBHFIJZIK");

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
    msg.setTimeStamp(0.20234937131621733);
    msg.setSource(24101U);
    msg.setSourceEntity(42U);
    msg.setDestination(21832U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.26361711492641293);
    msg.setSource(14697U);
    msg.setSourceEntity(246U);
    msg.setDestination(62975U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.6302370357737787);
    msg.setSource(4532U);
    msg.setSourceEntity(176U);
    msg.setDestination(40344U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.17623148846642223);
    msg.setSource(57577U);
    msg.setSourceEntity(168U);
    msg.setDestination(62629U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.6488218722429665;
    msg.lon = 0.8166322619535008;
    msg.z = 0.5692960852146827;
    msg.z_units = 134U;
    msg.speed = 0.84943321490465;
    msg.speed_units = 184U;
    msg.takeoff_pitch = 0.1822894900299391;
    msg.custom.assign("YKJTHHQZRPGLLZNNELNLPHQ");

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
    msg.setTimeStamp(0.7242021990455114);
    msg.setSource(20567U);
    msg.setSourceEntity(70U);
    msg.setDestination(61368U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.2077238486394094;
    msg.lon = 0.4250114743921829;
    msg.z = 0.6452102200160738;
    msg.z_units = 242U;
    msg.speed = 0.414747076216498;
    msg.speed_units = 56U;
    msg.takeoff_pitch = 0.4019494011080481;
    msg.custom.assign("KJOOLYDPLWGCWRRECKGFZJWPOHMQODOQSCPPNJREHBQWIKFYIQMBJUA");

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
    msg.setTimeStamp(0.44756774593897786);
    msg.setSource(44018U);
    msg.setSourceEntity(175U);
    msg.setDestination(16652U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.9527275503676633;
    msg.lon = 0.6722444121633906;
    msg.z = 0.10683712035578219;
    msg.z_units = 169U;
    msg.speed = 0.9958543420653416;
    msg.speed_units = 46U;
    msg.takeoff_pitch = 0.6574900556238608;
    msg.custom.assign("CKPXHFEPEKZETHVZSCTDLDOTASOAQAEWBDIGSSJNQBVOJPEELFAMIFJYLKLWAWCYJEKXBAGHRPMWVAKNVMPMCEOHNXWMYMAKJBSBMTVIRYWFZJBTDPUZKCBNULZSMTGRWIFD");

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
    msg.setTimeStamp(0.376384132167617);
    msg.setSource(20664U);
    msg.setSourceEntity(92U);
    msg.setDestination(11757U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.6448812930241564;
    msg.lon = 0.4923793730246392;
    msg.z = 0.031212086417684914;
    msg.z_units = 116U;
    msg.speed = 0.5888431599294652;
    msg.speed_units = 96U;
    msg.abort_z = 0.6808961270915811;
    msg.bearing = 0.023570557582726526;
    msg.glide_slope = 33U;
    msg.glide_slope_alt = 0.7390560305977207;
    msg.custom.assign("UKLLMBCGHMSWOVUIIAINSSXOQPZOWSPFDZZJDXYCHWJWBWPBSWJCZQKZDZDWPOHQLQXIGERBVVTGVXCEVIQPRYFVHQDEPXOPTNYJQCOLERHWBKVMBRMFXEMUGKWTFMLBGIYNMHPQKDMAJCTZOETJRDFJCAHWGISSHALKBFRNYBQURXNXKZUJUMHDJTUKKAMLRG");

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
    msg.setTimeStamp(0.22614738522940114);
    msg.setSource(34062U);
    msg.setSourceEntity(84U);
    msg.setDestination(31496U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.9277594202964591;
    msg.lon = 0.7306943749646168;
    msg.z = 0.17214014767146124;
    msg.z_units = 141U;
    msg.speed = 0.3484752133073542;
    msg.speed_units = 202U;
    msg.abort_z = 0.1538512577511556;
    msg.bearing = 0.4867118332732966;
    msg.glide_slope = 24U;
    msg.glide_slope_alt = 0.04353665429078024;
    msg.custom.assign("MLCFVWKUMRGCXPXRBUXDLBQMEENWSOIPQENCUKLVSFGRISQATDJKPIBYPGVJONRASVVWXICKLMYKNTNWJZXFHWRYHDEDBAOJMZHFBZVUBOOLWENUAIQBEILMABTLBORDYKTHQHKJGYGIMFLUDRDQYAINJHZFYMVDLDZPRANHZOQIJPPVQSCVAQXJEFHGCUUOPIATFFCDQJVZEXFWBUWUZXCGTRSSPATCSEHKZPNKNTMEXRGKOWHOCGGMSZLXY");

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
    msg.setTimeStamp(0.7708523260230922);
    msg.setSource(31626U);
    msg.setSourceEntity(128U);
    msg.setDestination(35259U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.026210678046447944;
    msg.lon = 0.10433521955681657;
    msg.z = 0.04850019050172083;
    msg.z_units = 119U;
    msg.speed = 0.19168140262230404;
    msg.speed_units = 243U;
    msg.abort_z = 0.002135369592554781;
    msg.bearing = 0.45554371917275127;
    msg.glide_slope = 39U;
    msg.glide_slope_alt = 0.12979929341406093;
    msg.custom.assign("IQMOZBLLYVLYHWTSWVASDFEFYGNLHWFOEDFRO");

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
    msg.setTimeStamp(0.2031100786871476);
    msg.setSource(11907U);
    msg.setSourceEntity(207U);
    msg.setDestination(58680U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.824207571147384;
    msg.lon = 0.5808706904289171;
    msg.speed = 0.09734940763781452;
    msg.speed_units = 158U;
    msg.limits = 140U;
    msg.max_depth = 0.21275554101829242;
    msg.min_alt = 0.13024665860575213;
    msg.time_limit = 0.46319095002991595;
    msg.controller.assign("CGHNPKXTQQEMPBLKHAABIRKZXAHNPCDMDYNXRFINNXTOUGHHGYVCSMNSIOPZZOIAMEFEOILKNXVTAWTLQWVTDJMVBUJBYYFAZWZNUPELVCZDEIYPXGILDDJUUIGLUXVJVQWCCELXLQWOJAFTYHYWWTMSJLOKTSUUFAVKRPAMJUSSORZFV");
    msg.custom.assign("EHRNJUQGCMBURPGKWZDRMWRRWKMQO");

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
    msg.setTimeStamp(0.037384247315647934);
    msg.setSource(44800U);
    msg.setSourceEntity(247U);
    msg.setDestination(40137U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.27699526901835947;
    msg.lon = 0.449593612460642;
    msg.speed = 0.3200171836857737;
    msg.speed_units = 75U;
    msg.limits = 210U;
    msg.max_depth = 0.30503242417823784;
    msg.min_alt = 0.5560857266256896;
    msg.time_limit = 0.7986332827798901;
    msg.controller.assign("RINWYLRMBFXNLETIXSTNDJFVHXZZHPDCPNBQKKVCTJLXMESIPWFVGPSKKVPJQOZAMDPRBAXGYTAFDLAFSJQDXVSTZRRPDETQQGYQJJPNLGAVYUKYWKMOZOMJWIWSVNWHWNGHRSFDCKEHOBQOTFMCCUGOZHTALYMOKMXGQKCCHNBK");
    msg.custom.assign("WNALEGVHPFZDMAWWASCYJZMUKTPXI");

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
    msg.setTimeStamp(0.7255755182050828);
    msg.setSource(21486U);
    msg.setSourceEntity(154U);
    msg.setDestination(41527U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.9662139212488202;
    msg.lon = 0.9862490348933753;
    msg.speed = 0.4539435427000177;
    msg.speed_units = 144U;
    msg.limits = 211U;
    msg.max_depth = 0.2810571056074199;
    msg.min_alt = 0.9240477548909631;
    msg.time_limit = 0.30785763931036747;
    msg.controller.assign("NCZQUIWWOHAGAPVBZXVEERKFPOGPRGXVFEXCVZQLCSWYHMJBTWPHIYCCFSRZMVGJCBVLZNSOJLGKMNKXEIMGNJHBULEZLTYBKVHWXNDVLTAOPUGJNYSWZMDGHUKEECUXABATNYKOPTBFEXALPOOTFIBJUIKSPU");
    msg.custom.assign("KSRPBNZWEFVCBNHHOHGMNDBUMYBFQJHALKFDRPMGBWHUVOOLXZRBZHAUYOIHGGSSKDPTUWTEAFMJEWKXWVFKCQQUIFMDRSDEGCOOZKAXLEYYVMBZIISXURDZPNDYTUTXENTPAZQFXDLTUARXEFMVYNVJBZCJCWS");

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
    msg.setTimeStamp(0.05805872734930917);
    msg.setSource(63608U);
    msg.setSourceEntity(188U);
    msg.setDestination(60539U);
    msg.setDestinationEntity(121U);
    msg.target.assign("LWLNHBMHIPCARGCLTWZFKVMLDYDUPBQFDZUYPHBETIVBWKKIQTKDQNGWJLPVMNZAOCJCZNHKEPCVBNXEUOTWSDROHEZYTRASSAVFGQLXAOGYEMFZIIMJJGMTGUTQAEKAYDVSIHMBLCZVHVXBPOCZCOZXYUEVQWDRFETPSRGFQONLDSVSUIUGBZOPNDOKQRBWCPNSGYJ");
    msg.max_speed = 0.3232932010303847;
    msg.speed_units = 116U;
    msg.lat = 0.5552926023550895;
    msg.lon = 0.38448465078005134;
    msg.z = 0.3325978893781303;
    msg.z_units = 95U;
    msg.custom.assign("VSYZMDFPLUZAGJOUGFLPSAMYSKLRJEGSATXKYYEEHVBYMIBIEWMCCBAVSKJPRNXTJQRCHOCEYORVIDHGACJBTFVWKLDHIPHVGTQQMNGNKPJWLFBYFLWWMWSPGCMPFAINQZURPTZCOULEHFNRNACDZUFRDLGODBYXMRKAOQXISHUZQWNXIKRMSBZTOWDJXCQAUIBT");

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
    msg.setTimeStamp(0.561853262376033);
    msg.setSource(35236U);
    msg.setSourceEntity(127U);
    msg.setDestination(22723U);
    msg.setDestinationEntity(109U);
    msg.target.assign("LGRYWXJEYKB");
    msg.max_speed = 0.13255837989115882;
    msg.speed_units = 63U;
    msg.lat = 0.18968419538177883;
    msg.lon = 0.8009429950200891;
    msg.z = 0.5957527595017973;
    msg.z_units = 242U;
    msg.custom.assign("BVXIXHKWDSQPDVDIXCHOJOXXWFIVYQUTURKOGONRPGSQKUINQEMTJMTJDRLZLCGGTXJCZNIACKHTUPBYQUGDPYZJLAQKORWZROULLXAIKEDYSDFQMRZAWCSSBZHSDWBOGESYFBYEITOVQBTEFALLBFNBEHPWMTYPUNMDVZQYAAUPSJMPCMIJUEMYHLGNQEOCNXTCVFKIORHRTWGESZBICHGAEAVFMFJRLNMDFKXHVV");

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
    msg.setTimeStamp(0.6415689866270993);
    msg.setSource(25477U);
    msg.setSourceEntity(41U);
    msg.setDestination(51798U);
    msg.setDestinationEntity(78U);
    msg.target.assign("RIREOSWYSHNTWQMXNXJTAEFYDUHWZPRJVLQRFBEWLRMKJBKXJBCCRQIXYVVGJZKCSCFLOGTINNCLPZMEZENONVBQVHQTPPRYAFUISHJSBUURDIODAMVHQTBHYLGGQPYTPDB");
    msg.max_speed = 0.655410600860398;
    msg.speed_units = 152U;
    msg.lat = 0.7028777246412792;
    msg.lon = 0.4594308962081203;
    msg.z = 0.2888828538691369;
    msg.z_units = 58U;
    msg.custom.assign("CKPLNZMZFWICUBAWLVGLWZQHXQPTCEHIXUPFTOIPDWCIAQTVEVPKDTCXUCQNELMGDXCJTVQUKCPHIHMISAGXMDXMFOCKERHJONARSOKSSAAJHZALWHUHKTTZEURRN");

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
    msg.setTimeStamp(0.6800197762471015);
    msg.setSource(7047U);
    msg.setSourceEntity(77U);
    msg.setDestination(31931U);
    msg.setDestinationEntity(139U);
    msg.timeout = 60440U;
    msg.lat = 0.7959950591702576;
    msg.lon = 0.15823739550139493;
    msg.speed = 0.25337257341284003;
    msg.speed_units = 240U;
    msg.custom.assign("KPROEUESDPXKFCHVDXUPEQIJGZUAEGREIYQNJAHQDORTWBFXITLHTWHVLIFKVOCULWRIZLDZMN");

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
    msg.setTimeStamp(0.4205467530021547);
    msg.setSource(133U);
    msg.setSourceEntity(149U);
    msg.setDestination(42877U);
    msg.setDestinationEntity(122U);
    msg.timeout = 14109U;
    msg.lat = 0.7020884223103557;
    msg.lon = 0.20643836978767738;
    msg.speed = 0.7280348768160338;
    msg.speed_units = 64U;
    msg.custom.assign("OUNTFJUXNYQNWMMHCCJYTDUMYJXFEGSDEPCTAS");

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
    msg.setTimeStamp(0.18356931661766496);
    msg.setSource(47568U);
    msg.setSourceEntity(31U);
    msg.setDestination(1168U);
    msg.setDestinationEntity(203U);
    msg.timeout = 23008U;
    msg.lat = 0.8838460412754977;
    msg.lon = 0.540908128617066;
    msg.speed = 0.2991196330005753;
    msg.speed_units = 49U;
    msg.custom.assign("YJUVOHHGLOKMUTOQYBXEEMDHJKBWUVMYZAHEMQKLPKSACDGDAXCPAWCYNRPMTBSUJZIJULTBENCJTPJIAPBQCHQFWTBHNEKXYGRURSQSFGQKYPFTGKEWVALD");

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
    msg.setTimeStamp(0.23920716845082823);
    msg.setSource(24645U);
    msg.setSourceEntity(22U);
    msg.setDestination(18281U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.8312145361407728;
    msg.lon = 0.91543281409125;
    msg.z = 0.6685459105977376;
    msg.z_units = 103U;
    msg.radius = 0.048531993989335054;
    msg.duration = 24007U;
    msg.speed = 0.804635815427024;
    msg.speed_units = 101U;
    msg.popup_period = 58965U;
    msg.popup_duration = 21550U;
    msg.flags = 176U;
    msg.custom.assign("NZRGIZLXHVZAOJBOGIEOCAEJKFLILTTXRTUUUANLEXODGAUJEFWNREZQMTWQPUSTYHATCAAUFKCVMVVZGPGMQFKXCDAWVICSZNLBODMUKALMWEKFMZHLSOPNYSCDKYQDHICNRDSULICVBEVKSPHOITQCGYHBMXJVYWFFDWESRLPLFRJBYVQGQXRMPAWYMYBZIDKJBQGQNDOJR");

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
    msg.setTimeStamp(0.008235507520324203);
    msg.setSource(7074U);
    msg.setSourceEntity(219U);
    msg.setDestination(21521U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.8138103236469475;
    msg.lon = 0.36539260730699585;
    msg.z = 0.5185227613480807;
    msg.z_units = 152U;
    msg.radius = 0.3296481712397694;
    msg.duration = 31412U;
    msg.speed = 0.751699889677864;
    msg.speed_units = 152U;
    msg.popup_period = 34719U;
    msg.popup_duration = 56728U;
    msg.flags = 50U;
    msg.custom.assign("CXUZXXYFFTZMTWGZHKDMYLACXWBUYCTARWQLQCJOQRDEHZJRFUWGPPAYIFVMMFNEJWYJGTXJCCQNXJSZIXQLAWOBVYYVAOINORSCIXBUNTBLOBVGDFEKHKQLPKWSGRTJDELMSMPZPJCBGURTPRPGSZIYIEKURSKYZHNDONUETIVWAVMDKFMMIENJBLZUURGLSHFNHVHGHKSEKVPWQEZCBNLDGI");

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
    msg.setTimeStamp(0.027836846564486928);
    msg.setSource(25151U);
    msg.setSourceEntity(96U);
    msg.setDestination(24100U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.4187361230373574;
    msg.lon = 0.10799376960145002;
    msg.z = 0.3609597655487896;
    msg.z_units = 122U;
    msg.radius = 0.3995060867872997;
    msg.duration = 17502U;
    msg.speed = 0.93867655800514;
    msg.speed_units = 86U;
    msg.popup_period = 43732U;
    msg.popup_duration = 56107U;
    msg.flags = 200U;
    msg.custom.assign("EZZLHVAVPDNORRCIUWCZEIFKNVGCQCBXXJHJRGZDXKKLXSGYVJMDQQNNARPMGAWDHBGCLVBZQIDKTDPPWCSFXOOIOPGFMBEPENAEATUGUNRSWNAGVTSDMLLBNZBTYXCFBDJTQUOSCUMEJGMV");

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
    msg.setTimeStamp(0.5469111289050382);
    msg.setSource(33315U);
    msg.setSourceEntity(66U);
    msg.setDestination(14739U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.2597666032841143);
    msg.setSource(58446U);
    msg.setSourceEntity(75U);
    msg.setDestination(51217U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.34364920285285827);
    msg.setSource(27060U);
    msg.setSourceEntity(156U);
    msg.setDestination(42998U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.9927786407926932);
    msg.setSource(18970U);
    msg.setSourceEntity(43U);
    msg.setDestination(52151U);
    msg.setDestinationEntity(201U);
    msg.timeout = 11093U;
    msg.lat = 0.10713812390041422;
    msg.lon = 0.1799408304355724;
    msg.z = 0.8608341216204929;
    msg.z_units = 190U;
    msg.speed = 0.6514512046962182;
    msg.speed_units = 194U;
    msg.bearing = 0.9931300887040194;
    msg.width = 0.569883701759749;
    msg.direction = 70U;
    msg.custom.assign("LYVLNVOWXMQOLCMNTYBDXOXNGPZOHRAWGLFJRSYXIWMAJCFTJYFMNSSRCEJPJWQFAMVBBGEJEXULWEVEQUUIXGGKSCBFYRMEIOCJNFNATAGQUCZSKEFKXZIPUAHTBLJZDAPBRBWNZICADYEZNMQHYTYCRAHRCTWPSVWXVIBTIJZK");

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
    msg.setTimeStamp(0.7511642569634583);
    msg.setSource(18759U);
    msg.setSourceEntity(119U);
    msg.setDestination(37658U);
    msg.setDestinationEntity(39U);
    msg.timeout = 18319U;
    msg.lat = 0.6544489568325078;
    msg.lon = 0.29798203516186794;
    msg.z = 0.4373547068220526;
    msg.z_units = 41U;
    msg.speed = 0.2891801577167905;
    msg.speed_units = 26U;
    msg.bearing = 0.7839580749537645;
    msg.width = 0.390559908933631;
    msg.direction = 242U;
    msg.custom.assign("RYGHLZDXKOBHOODIUIENGQNYZKFOSWCCMHVDCXXJONTBZWGJSJTFRLALGZELMHFZPRWFSQSFJFDEQNSWMOIMWABMDXOAVBZYBTJR");

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
    msg.setTimeStamp(0.06884386477264737);
    msg.setSource(9283U);
    msg.setSourceEntity(72U);
    msg.setDestination(43318U);
    msg.setDestinationEntity(44U);
    msg.timeout = 64921U;
    msg.lat = 0.35010566424655476;
    msg.lon = 0.003781890635867202;
    msg.z = 0.6846610563877815;
    msg.z_units = 46U;
    msg.speed = 0.038684528374950844;
    msg.speed_units = 169U;
    msg.bearing = 0.04871218751848183;
    msg.width = 0.30661952612908805;
    msg.direction = 211U;
    msg.custom.assign("IKTTRTEWUMYPYFGZIJBSXFRAVSVMACQKUFTVGWVBECAIBALMJSIYGWSNNKFHOOZTTHVJCJMKINQRHITUQDCJOWSVJGAKCHYPJDTAVEDROAQOFJKBP");

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
    msg.setTimeStamp(0.32051837080202294);
    msg.setSource(50015U);
    msg.setSourceEntity(84U);
    msg.setDestination(65317U);
    msg.setDestinationEntity(77U);
    msg.op_mode = 210U;
    msg.error_count = 33U;
    msg.error_ents.assign("EBFKVHWJERXMWWSBRXRAISNSDFRSJHGGXLZWNQDBIXQBYUAFVPOIXQXSWSFFJPIQAUPTVKLREPKWBIVZDWSXCONOCAYKUIDVMAAADVMSUGHJCCJZMGBNYPZUGYOJWEIMROPTEHUTNZWJTQLCDYTH");
    msg.maneuver_type = 28142U;
    msg.maneuver_stime = 0.8206314335032558;
    msg.maneuver_eta = 1092U;
    msg.control_loops = 2052057851U;
    msg.flags = 90U;
    msg.last_error.assign("DCIRVWZHGMPVTUIPMVVFAOTMVZAJC");
    msg.last_error_time = 0.8288711653222355;

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
    msg.setTimeStamp(0.7182074564738546);
    msg.setSource(56978U);
    msg.setSourceEntity(173U);
    msg.setDestination(34595U);
    msg.setDestinationEntity(83U);
    msg.op_mode = 128U;
    msg.error_count = 115U;
    msg.error_ents.assign("LPEEHJWPFHOYHOJBNHFPMVMOZEIDDNAGHRXUQRFKPEZJCFHMCZLXZSYWYJGZLVJHRUJDBGOKNEILSGVMKEHVCUNTSABBLBWWAGTSSIYMMLUTQQAKDQFPAPVCBOXMLVDCLJKOQMYRANPJWIQTWDZJIIOGBSAKTSAXYWPBGMGBHXVZIFXKUYXTXDRZFCOJSSAOUNINGTCDUNUXMBDTXVZRUQQSYLYETLIRR");
    msg.maneuver_type = 46287U;
    msg.maneuver_stime = 0.7557698566907473;
    msg.maneuver_eta = 60524U;
    msg.control_loops = 2135911646U;
    msg.flags = 99U;
    msg.last_error.assign("ZPSKMKLZYJOBCHOOVGNZEECCSEKXSBFZJJSDCPIICRKYMSPAKXVQQEPYBGWDUAWMRRDRTWDDNNRTJHGHYULRZIJUTUTDEXLCQLFUFQJDVFURLOHTGPFVZQNWNISYECLGSHXHFXIAMJ");
    msg.last_error_time = 0.6471305635925507;

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
    msg.setTimeStamp(0.7292482949518269);
    msg.setSource(11014U);
    msg.setSourceEntity(161U);
    msg.setDestination(15285U);
    msg.setDestinationEntity(230U);
    msg.op_mode = 146U;
    msg.error_count = 55U;
    msg.error_ents.assign("TLAFPWGTUAAHOKENCRLFTVIUSZPSBICYTYTHLVDGPSJAJHNMFPCKCGMIQGQDSNBABDAOECQVMRDGKQXPRJWGUOQFWJJFOBWCGKLJSVUOEIUOGTKTZLOSZHRIMTMXYEDWVAJDZWHIYHNPYRXNV");
    msg.maneuver_type = 49732U;
    msg.maneuver_stime = 0.9594306743887525;
    msg.maneuver_eta = 60336U;
    msg.control_loops = 2720295846U;
    msg.flags = 114U;
    msg.last_error.assign("OKNZVLIBICIVFMURBCWPOJKDDSXRRCFKIUQRNDHBIMPJDQLSVWIWVFAFAMENXDNTHQPTXTRCOPYQSFEMPQFZSJONFXHAIKKLVRRYGSWATYGDAEWTLJUESYCELFTMZAPCLQHDQKRHNZRIOBZXLWG");
    msg.last_error_time = 0.1421646942950775;

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
    msg.setTimeStamp(0.0028444204643792714);
    msg.setSource(2516U);
    msg.setSourceEntity(116U);
    msg.setDestination(10381U);
    msg.setDestinationEntity(137U);
    msg.type = 51U;
    msg.request_id = 49934U;
    msg.command = 115U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 43410U;
    tmp_msg_0.lat = 0.2869942751214575;
    tmp_msg_0.lon = 0.22917686091116107;
    tmp_msg_0.z = 0.48496771007005035;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.duration = 65244U;
    tmp_msg_0.speed = 0.8939339792112713;
    tmp_msg_0.speed_units = 136U;
    tmp_msg_0.type = 168U;
    tmp_msg_0.radius = 0.4441428003832273;
    tmp_msg_0.length = 0.5750566826543416;
    tmp_msg_0.bearing = 0.7805706208027008;
    tmp_msg_0.direction = 154U;
    tmp_msg_0.custom.assign("AQNXDFTFHPZOFOLIVPSWXREUSUMKQPJYTZTHEQPKOSHTOKLGVOUSBABIZHDMSVEHZYKVJAQKFMUELYRTNAWNADZCENHJGJWKBLVTOEXHGKRYQIRMENQDFJBMSSPIPCVCUWUSJIRXGGQXOLPFATWXZBWZKYDFCUMFDJTEIAMBFHDOQRSEJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58499U;
    msg.info.assign("KXPCDTMIQVLZTUZYZXIRJDGUHOFHLQJSVTWJMXBFRRIZTMBZXZ");

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
    msg.setTimeStamp(0.7644259497813543);
    msg.setSource(1423U);
    msg.setSourceEntity(59U);
    msg.setDestination(24900U);
    msg.setDestinationEntity(32U);
    msg.type = 204U;
    msg.request_id = 61429U;
    msg.command = 137U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.2205072637224449;
    tmp_msg_0.lon = 0.613232188733574;
    tmp_msg_0.z = 0.8812213491931743;
    tmp_msg_0.z_units = 38U;
    tmp_msg_0.radius = 0.47433367448597685;
    tmp_msg_0.duration = 25952U;
    tmp_msg_0.speed = 0.2754001830665952;
    tmp_msg_0.speed_units = 226U;
    tmp_msg_0.popup_period = 49855U;
    tmp_msg_0.popup_duration = 6719U;
    tmp_msg_0.flags = 65U;
    tmp_msg_0.custom.assign("LMTVXQUEBMQPWHPDNMFQXABCUSVYBJCYEIGCKJEQIKAKSCSDBDDVIGRJMVLHYMZISJLFCKVEPQCHZLJZALAPOYGPWIDOOUMVBNBAASSWWAXUAPLLTZKTKTPCROJBHHQOYDKDJBGLRFMZOQNCUGD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25209U;
    msg.info.assign("TPPLUZGZNXCVFDBZHTNCNRQRTSUDJURYNCGWYORFOGSVLWORBSIXSYKRCCPATMWOUSSHZQSJJCFKCGATKHTJAFJIBUANJDGAANOOUIDC");

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
    msg.setTimeStamp(0.5657799588060635);
    msg.setSource(28819U);
    msg.setSourceEntity(176U);
    msg.setDestination(20019U);
    msg.setDestinationEntity(147U);
    msg.type = 6U;
    msg.request_id = 60692U;
    msg.command = 80U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 33919U;
    tmp_msg_0.lat = 0.12273571789286197;
    tmp_msg_0.lon = 0.9897679870575993;
    tmp_msg_0.z = 0.14454726645708316;
    tmp_msg_0.z_units = 156U;
    tmp_msg_0.speed = 0.41190596012113123;
    tmp_msg_0.speed_units = 177U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.9208274489866416;
    tmp_tmp_msg_0_0.y = 0.08541583040788714;
    tmp_tmp_msg_0_0.z = 0.41311123632697033;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("KQVFEBQQGCGDBMOAQVMLLFAZQMJHBKLSZUP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32018U;
    msg.info.assign("WBAQUSRBAGEJVVTASKJOXHMTNTZCXVWMDEYCMKVJQOTZBXSRRYRAZPMDPAWGFKLMKHJYBKZIXUZBODOFYVFELTNTKIUCFXEUVUHFWPCXCYBERWMEUICNCKNNQXPJSSGELGULQZNIPPJTVNYMHQSDXFOGLKDBDRQZELNSELJWC");

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
    msg.setTimeStamp(0.8408348533318185);
    msg.setSource(34103U);
    msg.setSourceEntity(22U);
    msg.setDestination(54620U);
    msg.setDestinationEntity(184U);
    msg.command = 221U;
    msg.entities.assign("SMLDRYAQRCPWBAGEGXKQYUIYVRGOUSBGQOBNPECIPHKZSAOXJXZSHHQDKKICOJLOZGLCHINJMSCRBARUNTBJZFRNVWYOLETUITVDDQDMLVXNGVMSIZZNGCMJVHJBPECOKNSAPFQUKWPHWVZTTY");

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
    msg.setTimeStamp(0.22776130667813577);
    msg.setSource(23941U);
    msg.setSourceEntity(90U);
    msg.setDestination(50674U);
    msg.setDestinationEntity(252U);
    msg.command = 1U;
    msg.entities.assign("KJJBTOKPCUFGGYZSVFXLJXNEPXPUSBQWZNEIZXOAHMSSZEUJWCLEMTVORJNFBZNAOZVKREYPZSYRBXCWKIJMXWPTTIEAHOQGEQQHCYVNTGIDLABPRMHGKRJONVYKGKMHOVCLFTNBKHYAHMMLUNMBYXPFWIRVHTWXWRWQQCRVUGLFUUCDSMACUDWGQWFDSYPQYLIFADQLSVEDAHFTCJOESZKITLZGDMATIAOYVJI");

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
    msg.setTimeStamp(0.967604595405447);
    msg.setSource(37622U);
    msg.setSourceEntity(22U);
    msg.setDestination(54042U);
    msg.setDestinationEntity(143U);
    msg.command = 123U;
    msg.entities.assign("FRGHNIQKRJDQUXTZEIVAZEOLBOOFZMMFBGLLQCMOZOHXHHYWYURSBEUIOCNSNZCCGMSIBHKVJMVRKMUBPTYYVJERDTGIAFAQDRSWMYIAOQLGKUYQBFTFZCKSIRBWPSDSEVKQDDUJCSPXJIYYGHFXRKAKKUGJDCBTMXBAKNLTNMWBGCQHYJDXE");

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
    msg.setTimeStamp(0.7488016482386933);
    msg.setSource(51013U);
    msg.setSourceEntity(19U);
    msg.setDestination(26901U);
    msg.setDestinationEntity(143U);
    msg.mcount = 62U;
    msg.mnames.assign("IALUUWEPUQPJIWXDZMXWHNYWHYPBEEQFQONOFHUXVXTYEBZTXVNZVQDOMGRQJZWRQTFKGHBGIOULJRTFXHSVVUKEDKGRDIIRJIXIUOOFTRLSRYXWMBLMMZIOZMYLWSSUUDDYNSWEKSENJJETLHVGSWYKBJJJCMCDNNLHDDFKPTINGZCHLQTECVNBTAREXCYTCFOABAMCGQAPSFVKLYBAZCGBYDFKKAPIMLMFPOQBPVCAZXCAUSGHZSJGAWV");
    msg.ecount = 95U;
    msg.enames.assign("AKLXCQPQABFRWGOLLARGZXUNPQVKVYCBAVQKRQCDGEHHJYVORWBLOJMLQUDKDMCAIZNFNMQRWGTSUYMWRSXCWWYPZJUTGCVEHNYZBLUIBJDFIVIYUCNPDKPZPXRMAKNDNVIFQNNBGOR");
    msg.ccount = 183U;
    msg.cnames.assign("VEJETOIFOBYYTOKTJDGAFHWOCQOZPYQ");
    msg.last_error.assign("ZPFUVHDQAUTOAZQDOQGHQUGMBRNVXYIVRINGZDNCUWLEGAEPXMJENRCWVGLYZOXHYSTIGKGKPCPJURW");
    msg.last_error_time = 0.6677063048196877;

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
    msg.setTimeStamp(0.03975367635013616);
    msg.setSource(64889U);
    msg.setSourceEntity(116U);
    msg.setDestination(8536U);
    msg.setDestinationEntity(139U);
    msg.mcount = 216U;
    msg.mnames.assign("YMQYEQWIFQPXPDRMUGNSRSOZPLZKAZEXGGOVUEPHEMZNPGNIQCILUPHBWMDNWXVSUQMFKVMTFJAZVEMQKCBRATLYHNOQEGWYJSIHHWHISNBFGOJXLORADCZLYLREOVTGWSNJTINXYOKHOPIDAUCJIOVARKCEHDXCBSTECXAWJVSITEMSSVWLDMCJUFXDKGDUFZKTFKBBGQBHLYPPXIAOMJQY");
    msg.ecount = 148U;
    msg.enames.assign("PUSOZRYZRDGIQQVUNJEPXWRSBUBIYUWKWHXRZEPYNVHETCNWXGORHGBJJMXSAFFMMEPFJOXDLZKLTTURMDEIPNDQ");
    msg.ccount = 100U;
    msg.cnames.assign("VRETFTHMPRULAXZMKASMLFRBBNPXVVHIYLDJXAHCWDQGPIMEZHODSQBOUAKMTTCHUPUOUFKYROJIZVYBDJLIJGLEAOBSEWDKBGGPNGYBPQMQPZYIOUDXNCZMQQWIYNVWZLREMIZBGIXSCCGMOHNONORFSCDJDRBUW");
    msg.last_error.assign("ULZXQUYKRVDIFKGSJNMEAOQUBSJZSXVRGTTFIRFZYNRZOEYXASIHLYFDNMXZSHPMHJYLIHVODBAXEUILBFBNQLEYTIBGIWOBMEJJKOYXTWDCZPWJUAHGCARCVGNKHPOCROHYKRQSDUSFJCCZTXLPWVFOMPKBXMAH");
    msg.last_error_time = 0.4364622543051837;

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
    msg.setTimeStamp(0.05249038174279819);
    msg.setSource(14564U);
    msg.setSourceEntity(114U);
    msg.setDestination(16355U);
    msg.setDestinationEntity(153U);
    msg.mcount = 32U;
    msg.mnames.assign("DOTVRBDWEFPAEOEVAKXVLAAUNSQOKUVEQAKGXIBTWHNOMMTGXRXUZFNJSHPMSNFPBIFEMMKCZBWVTJLQXXZFFBNPIVXGTIGLWUROWBTYPFJDCHGELRDMZCJASXHEICKGU");
    msg.ecount = 27U;
    msg.enames.assign("HBKCOANMFVNDLYWTRKULFWDK");
    msg.ccount = 231U;
    msg.cnames.assign("DDLUVGGFQOBDETXVVAJKFNCWKYJUOMGRHLYRZRICNHPWDTAEANKOAAXTSCYOCTVACZRINZEDBIODRTFCPXXJJIQKLJZIQHQQSMBPD");
    msg.last_error.assign("HBWDCJUQSMSPGZUIRARPCUVAFHVPWJUCEDQSZMHDCEOPSMAOQCWNLZMSWYHATMNOMEDXZFWIBOYMR");
    msg.last_error_time = 0.0002088593460831678;

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
    msg.setTimeStamp(0.1301508717009109);
    msg.setSource(36249U);
    msg.setSourceEntity(177U);
    msg.setDestination(31807U);
    msg.setDestinationEntity(130U);
    msg.mask = 26U;
    msg.max_depth = 0.7953112739841445;
    msg.min_altitude = 0.8382999259701572;
    msg.max_altitude = 0.8123671451216249;
    msg.min_speed = 0.17217906534330663;
    msg.max_speed = 0.19907698144914054;
    msg.max_vrate = 0.0818204218850973;
    msg.lat = 0.4022513704353615;
    msg.lon = 0.44385330107240806;
    msg.orientation = 0.7745505644463779;
    msg.width = 0.295967408655067;
    msg.length = 0.27900687201670915;

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
    msg.setTimeStamp(0.8392565117040021);
    msg.setSource(39561U);
    msg.setSourceEntity(243U);
    msg.setDestination(41584U);
    msg.setDestinationEntity(20U);
    msg.mask = 129U;
    msg.max_depth = 0.6311699408952379;
    msg.min_altitude = 0.34099754014090833;
    msg.max_altitude = 0.2614720267011057;
    msg.min_speed = 0.11007594320875846;
    msg.max_speed = 0.2770105866966883;
    msg.max_vrate = 0.7295876416132864;
    msg.lat = 0.16255082376605356;
    msg.lon = 0.08354254172953701;
    msg.orientation = 0.158486591334562;
    msg.width = 0.8440417840578717;
    msg.length = 0.10219424261909615;

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
    msg.setTimeStamp(0.6226147089370762);
    msg.setSource(1843U);
    msg.setSourceEntity(114U);
    msg.setDestination(48684U);
    msg.setDestinationEntity(187U);
    msg.mask = 158U;
    msg.max_depth = 0.29904593363719034;
    msg.min_altitude = 0.6935364233616605;
    msg.max_altitude = 0.6440204094686202;
    msg.min_speed = 0.42136826825823404;
    msg.max_speed = 0.3930958841937717;
    msg.max_vrate = 0.6351205988770182;
    msg.lat = 0.9843899917984619;
    msg.lon = 0.2745262428743316;
    msg.orientation = 0.8730374020204663;
    msg.width = 0.5012096790613999;
    msg.length = 0.9920763570712527;

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
    msg.setTimeStamp(0.1642711229266588);
    msg.setSource(62268U);
    msg.setSourceEntity(84U);
    msg.setDestination(40680U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.07951826707965215);
    msg.setSource(64808U);
    msg.setSourceEntity(154U);
    msg.setDestination(35213U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.4116839880132356);
    msg.setSource(9837U);
    msg.setSourceEntity(95U);
    msg.setDestination(930U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.7554481962412783);
    msg.setSource(27303U);
    msg.setSourceEntity(65U);
    msg.setDestination(16729U);
    msg.setDestinationEntity(228U);
    msg.duration = 2997U;

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
    msg.setTimeStamp(0.8844790439958633);
    msg.setSource(27066U);
    msg.setSourceEntity(35U);
    msg.setDestination(26692U);
    msg.setDestinationEntity(183U);
    msg.duration = 48627U;

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
    msg.setTimeStamp(0.4364534322421626);
    msg.setSource(31841U);
    msg.setSourceEntity(182U);
    msg.setDestination(37570U);
    msg.setDestinationEntity(98U);
    msg.duration = 21643U;

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
    msg.setTimeStamp(0.3964437397500712);
    msg.setSource(14640U);
    msg.setSourceEntity(86U);
    msg.setDestination(36792U);
    msg.setDestinationEntity(204U);
    msg.enable = 159U;
    msg.mask = 737789816U;
    msg.scope_ref = 96750343U;

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
    msg.setTimeStamp(0.2558517087750939);
    msg.setSource(11873U);
    msg.setSourceEntity(42U);
    msg.setDestination(46666U);
    msg.setDestinationEntity(2U);
    msg.enable = 136U;
    msg.mask = 3823709235U;
    msg.scope_ref = 826493400U;

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
    msg.setTimeStamp(0.4920963953090598);
    msg.setSource(60122U);
    msg.setSourceEntity(229U);
    msg.setDestination(27489U);
    msg.setDestinationEntity(241U);
    msg.enable = 81U;
    msg.mask = 3422288334U;
    msg.scope_ref = 3645799162U;

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
    msg.setTimeStamp(0.7738432703255146);
    msg.setSource(41927U);
    msg.setSourceEntity(0U);
    msg.setDestination(12668U);
    msg.setDestinationEntity(168U);
    msg.medium = 97U;

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
    msg.setTimeStamp(0.27023566710183355);
    msg.setSource(12570U);
    msg.setSourceEntity(207U);
    msg.setDestination(4022U);
    msg.setDestinationEntity(253U);
    msg.medium = 241U;

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
    msg.setTimeStamp(0.29745245727285263);
    msg.setSource(21644U);
    msg.setSourceEntity(40U);
    msg.setDestination(63818U);
    msg.setDestinationEntity(123U);
    msg.medium = 194U;

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
    msg.setTimeStamp(0.1815024780393687);
    msg.setSource(2740U);
    msg.setSourceEntity(217U);
    msg.setDestination(2653U);
    msg.setDestinationEntity(6U);
    msg.value = 0.39469679069044594;
    msg.type = 40U;

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
    msg.setTimeStamp(0.46628544128966787);
    msg.setSource(20301U);
    msg.setSourceEntity(55U);
    msg.setDestination(36432U);
    msg.setDestinationEntity(15U);
    msg.value = 0.35184999632959446;
    msg.type = 89U;

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
    msg.setTimeStamp(0.15403270827123727);
    msg.setSource(64715U);
    msg.setSourceEntity(185U);
    msg.setDestination(56933U);
    msg.setDestinationEntity(16U);
    msg.value = 0.9629693342353468;
    msg.type = 254U;

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
    msg.setTimeStamp(0.09303580499311792);
    msg.setSource(38886U);
    msg.setSourceEntity(163U);
    msg.setDestination(11362U);
    msg.setDestinationEntity(241U);
    msg.possimerr = 0.9351216026166946;
    msg.converg = 0.20654441443136728;
    msg.turbulence = 0.3688374900871436;
    msg.possimmon = 250U;
    msg.commmon = 5U;
    msg.convergmon = 21U;

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
    msg.setTimeStamp(0.3553590117456624);
    msg.setSource(56423U);
    msg.setSourceEntity(82U);
    msg.setDestination(50389U);
    msg.setDestinationEntity(201U);
    msg.possimerr = 0.6517147056547147;
    msg.converg = 0.6415646164427367;
    msg.turbulence = 0.09358264790122095;
    msg.possimmon = 1U;
    msg.commmon = 33U;
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
    msg.setTimeStamp(0.1858615155054666);
    msg.setSource(26850U);
    msg.setSourceEntity(216U);
    msg.setDestination(54641U);
    msg.setDestinationEntity(11U);
    msg.possimerr = 0.17283156277737965;
    msg.converg = 0.4145399384157168;
    msg.turbulence = 0.389647391238502;
    msg.possimmon = 119U;
    msg.commmon = 160U;
    msg.convergmon = 246U;

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
    msg.setTimeStamp(0.3582012616270127);
    msg.setSource(60033U);
    msg.setSourceEntity(161U);
    msg.setDestination(45342U);
    msg.setDestinationEntity(95U);
    msg.autonomy = 178U;
    msg.mode.assign("MPGJDFCNFDLEKXRSLICTPRFGWAHXYBZAUGPWRTNJNJWIFSVZSMUTWHZHODTUUKOEXQUGABZKWFMOMNQDVROCPIZYVWVKRLVZEKDLEHOQVZJ");

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
    msg.setTimeStamp(0.6284929019861559);
    msg.setSource(10502U);
    msg.setSourceEntity(54U);
    msg.setDestination(58167U);
    msg.setDestinationEntity(67U);
    msg.autonomy = 98U;
    msg.mode.assign("SSZDBQGADGNRBRCKALONAKIMVOSSTGPXHSBFTVQLSPDRRYKJPIEACEWGVYJFVDWUVOMTJTPLYRNRPXJKTWNADUJWZSMGUFADOFUBVOHZAXHTKWQIXLEXJCUHMVIQRRMGUCMYJIQXVCGHZUSNGNWLBEAOPQQOAXYOKWTJXFWTFCHIFYUXEVKYUCQYQMCHZZBPMQZHJSOTDEEUZWPBPJCFLRXWYALHTLMVIFRIISLYBBDKONHZNIEEBMLDKDC");

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
    msg.setTimeStamp(0.9924242875064159);
    msg.setSource(13883U);
    msg.setSourceEntity(6U);
    msg.setDestination(48838U);
    msg.setDestinationEntity(250U);
    msg.autonomy = 4U;
    msg.mode.assign("LDCEDRPJRUBGJCCYYMTBOLWWZHORMCOUGNQNAIHQPDOKTEFUEBQYG");

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
    msg.setTimeStamp(0.013823011239893601);
    msg.setSource(17989U);
    msg.setSourceEntity(1U);
    msg.setDestination(11399U);
    msg.setDestinationEntity(208U);
    msg.type = 181U;
    msg.op = 6U;
    msg.possimerr = 0.3897247271253025;
    msg.converg = 0.21240799966236734;
    msg.turbulence = 0.9069480372697954;
    msg.possimmon = 250U;
    msg.commmon = 219U;
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
    msg.setTimeStamp(0.3924163656842501);
    msg.setSource(52078U);
    msg.setSourceEntity(60U);
    msg.setDestination(3277U);
    msg.setDestinationEntity(75U);
    msg.type = 69U;
    msg.op = 169U;
    msg.possimerr = 0.6928723950586303;
    msg.converg = 0.004555098753072251;
    msg.turbulence = 0.14807034051984758;
    msg.possimmon = 173U;
    msg.commmon = 156U;
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
    msg.setTimeStamp(0.031173022681776352);
    msg.setSource(60768U);
    msg.setSourceEntity(20U);
    msg.setDestination(5888U);
    msg.setDestinationEntity(40U);
    msg.type = 168U;
    msg.op = 124U;
    msg.possimerr = 0.9324358874920546;
    msg.converg = 0.3581403003984617;
    msg.turbulence = 0.9997761717278313;
    msg.possimmon = 19U;
    msg.commmon = 82U;
    msg.convergmon = 253U;

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
    msg.setTimeStamp(0.39935027684565305);
    msg.setSource(4952U);
    msg.setSourceEntity(66U);
    msg.setDestination(41835U);
    msg.setDestinationEntity(144U);
    msg.op = 206U;
    msg.comm_interface = 240U;
    msg.period = 1193U;
    msg.sys_dst.assign("FKOARRABVKJNFVOUPUKADLEXMUTCHQMBCPEDFDLRQXFXGBCISHKXTMXRENPZGWYYHAKASJVOOZLZOJHASLDKBTUNPXWYJWGWGIDNWAORLRUBQHWHD");

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
    msg.setTimeStamp(0.43342082490455935);
    msg.setSource(21668U);
    msg.setSourceEntity(142U);
    msg.setDestination(13102U);
    msg.setDestinationEntity(29U);
    msg.op = 219U;
    msg.comm_interface = 33U;
    msg.period = 27402U;
    msg.sys_dst.assign("VCPEASHSFIRBWRREGNWHDAUTVFDHFUVNLZWYICCJWSJZWCMZCKBJZRNEFOGDWYUXZXAIFFOJNDVBIDLUQDOMBRQCMQPFYMWPHGSLJCHZUMBGNKKTLOBSYUAKBTHDORIQMAAKGKSMXPZUFXVDWZNGKBTFRIAPYLJWQTBV");

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
    msg.setTimeStamp(0.6865540596192156);
    msg.setSource(30659U);
    msg.setSourceEntity(224U);
    msg.setDestination(16873U);
    msg.setDestinationEntity(104U);
    msg.op = 43U;
    msg.comm_interface = 197U;
    msg.period = 4913U;
    msg.sys_dst.assign("WTPGKVHGSQSCXMZITOYNWYMECHUZHHCFZUJRBFULCNFJLAGQGPGPJKBWANIZZHKFUOJNRILDXUKUGEKLOPFDRMHVTZIRINQXBYOLXESUJKEYHWSNVDIOOKRDGHQZIUQFJVLOJLIHFTCDBUXEGDMZYTAWTOMTPBKGYMMVMJN");

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
    msg.setTimeStamp(0.11872290346920122);
    msg.setSource(25127U);
    msg.setSourceEntity(55U);
    msg.setDestination(23926U);
    msg.setDestinationEntity(142U);
    msg.stime = 100843673U;
    msg.latitude = 0.4443764937979827;
    msg.longitude = 0.3903299125298241;
    msg.altitude = 16636U;
    msg.depth = 45049U;
    msg.heading = 46061U;
    msg.speed = 1229;
    msg.fuel = 69;
    msg.exec_state = 77;
    msg.plan_checksum = 38385U;

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
    msg.setTimeStamp(0.37270682208012007);
    msg.setSource(806U);
    msg.setSourceEntity(246U);
    msg.setDestination(57852U);
    msg.setDestinationEntity(223U);
    msg.stime = 2985822271U;
    msg.latitude = 0.11150627753521725;
    msg.longitude = 0.27653844305800546;
    msg.altitude = 50046U;
    msg.depth = 57798U;
    msg.heading = 9396U;
    msg.speed = -32376;
    msg.fuel = -89;
    msg.exec_state = 47;
    msg.plan_checksum = 61978U;

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
    msg.setTimeStamp(0.5147448193141791);
    msg.setSource(54601U);
    msg.setSourceEntity(85U);
    msg.setDestination(15787U);
    msg.setDestinationEntity(110U);
    msg.stime = 715048847U;
    msg.latitude = 0.024748775364439646;
    msg.longitude = 0.21479122431725106;
    msg.altitude = 18218U;
    msg.depth = 10603U;
    msg.heading = 41594U;
    msg.speed = 6506;
    msg.fuel = -49;
    msg.exec_state = -113;
    msg.plan_checksum = 7304U;

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
    msg.setTimeStamp(0.6243915457318159);
    msg.setSource(24233U);
    msg.setSourceEntity(131U);
    msg.setDestination(62136U);
    msg.setDestinationEntity(69U);
    msg.req_id = 1602U;
    msg.comm_mean = 109U;
    msg.destination.assign("RWWIRBGRCMZDVJIZCTPSSHNSVSLNHXRLFGCTOCUTRTAKWCSDATXBQEHEKGVPBPOXUFPVPOEQJXSRQTYAYCWNNKLKNUIJEHDBANQHHWJMHAKYWIKBFDJTYFFDJMEIFSUYBCENRQXAFMOBTDFGJGBJXTWIRSCGLLEZFAKZUHMEMDND");
    msg.deadline = 0.7464809106421467;
    msg.range = 0.604841047891739;
    msg.data_mode = 240U;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 48593U;
    tmp_msg_0.status = 147U;
    tmp_msg_0.info.assign("CRZJVEVZGYKZLQSDLNWWHCMGFMOGYDTBEYTDRPPCCWCJBIQHUVQJAIONYMLWHBHGBTKIPLZOSFHGZASADVUYPKPHOQGRKKIYFMCUCOAJIYEURDXSLXIZEJVQJQFNNEGYRWQXFPWDEXZWMLXA");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VCBUJBRUBPAJWZJACYHHADPBSZACLHINTATRZMBTRZFHGNSQYSHYWLKWJEDUWUZYCFMAWQLGXXBMIUHEGJU");
    const signed char tmp_msg_1[] = {29, -5, 99, -63, 38, 122, -44, -128, 72, -44, 36, -124, -104, -5, 2, 67, -39, -102, -126, 65, -92, 119, -74, -13, -4, -122, -79, -70, -75, -52, -13, -25, 31};
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
    msg.setTimeStamp(0.16116149157330129);
    msg.setSource(40270U);
    msg.setSourceEntity(121U);
    msg.setDestination(37388U);
    msg.setDestinationEntity(105U);
    msg.req_id = 34249U;
    msg.comm_mean = 44U;
    msg.destination.assign("HJBRKEEEKWTDFNGLFXPEZZAOEBXQMOPDPCUDVBADIXDNJAGTDJDZYMTNECPCATZYXON");
    msg.deadline = 0.6521373230389526;
    msg.range = 0.8653498479004146;
    msg.data_mode = 100U;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6118995155339969;
    tmp_tmp_msg_0_0.lon = 0.5446031033430305;
    tmp_tmp_msg_0_0.height = 0.3164133650581714;
    tmp_tmp_msg_0_0.x = 0.21974639608508417;
    tmp_tmp_msg_0_0.y = 0.29162103429966835;
    tmp_tmp_msg_0_0.z = 0.8615300347088164;
    tmp_tmp_msg_0_0.phi = 0.18904137284806;
    tmp_tmp_msg_0_0.theta = 0.7787574925601632;
    tmp_tmp_msg_0_0.psi = 0.23187550096015308;
    tmp_tmp_msg_0_0.u = 0.14408386790828365;
    tmp_tmp_msg_0_0.v = 0.7610703540919701;
    tmp_tmp_msg_0_0.w = 0.38275484021300976;
    tmp_tmp_msg_0_0.vx = 0.018504557047785863;
    tmp_tmp_msg_0_0.vy = 0.03237804299081182;
    tmp_tmp_msg_0_0.vz = 0.9846340519856015;
    tmp_tmp_msg_0_0.p = 0.21698392053986226;
    tmp_tmp_msg_0_0.q = 0.0506480566153682;
    tmp_tmp_msg_0_0.r = 0.8620520679765487;
    tmp_tmp_msg_0_0.depth = 0.6695233982319692;
    tmp_tmp_msg_0_0.alt = 0.5277174654138763;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 249U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KNJYGMWILFXSXVUXHIPTWMIVDWDPGVFKRYCOIZNRXAGGCBKBBILGXUHVDSLYNYNYKRUGASEVYYTOEZVJHGMSPQZNSARNIWDHOZNYXAEFHWOLDSIUPKUBVKTGULJUNYAHJKAACRQRBSJQKVOQXPSZMQETPWZOCYIFHRBZTPMACAOZCDHKJGDCXXIRIDCWGTOHAJFQJPVPLWKDHZEXMLMWLBBFWEQMNEECFSDTJTFOURLQFSNBQTZBJTELRUP");
    const signed char tmp_msg_1[] = {30, -37, 65, 27, 92, 7, -58, -39, 72, -83, 112, 56, -18, 101, -44, -95, -67, -101, -119, 39, 19, 89, 50, -71, -58, -93, 92, -4, 52, 82, -52, 109, -57, 40, 55, -37, 2, -43, 13, -68, -76, -7, -26, 0, -23, 110, -128, 9, -4, -58, -97, -72, 104, -18, -118, 106, 67, 90, -89, -73, -27, 77, -16, 60, -63, -104, 54, -73, 74, 66, -95, -48, -23, 51, 119, 70, -9, 35, 61, -49, -95, 109, -19, -125, 71, -67, 115, 116, -26, 63, -41, -69, 94, -81, -119, -8, 94, 113, 1, -102, 52, -110, -92, 118, -76, 56, -24, -114, 50, 101, -89, 3, 31, -24, -114, 118, -48, -83, 33, 18, -100, -121, -94, 16, 47, -69, 6, -81, 6, 96, 122, 5, 113, -53, 55, 82, -99, 62, -83, 0, 33, -122, 92, -52, 75, 5, 113, -34, -114, -47, 16, -31, 114, 79, -1, 61, -67, -115, -17, -4, 44, -95, 35, 54, -60, -56, -121, -22, 4, 119, -58, -9, 124, 73, -48, 66, -9, 9};
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
    msg.setTimeStamp(0.15023184488603125);
    msg.setSource(46651U);
    msg.setSourceEntity(109U);
    msg.setDestination(24066U);
    msg.setDestinationEntity(240U);
    msg.req_id = 26077U;
    msg.comm_mean = 73U;
    msg.destination.assign("QHANLOGJCBCYFSVGMEEICDYYTDDFHOJMKHKKVDQEBTFLHUKMPHJABVBEAINNNAZEMROAWJOOMSFGWRFRXZEBWLTDZPXRQWCZSKGHAHISYGJLBJVHRQAYVGZTYGPDWSPCGPZOWIXXUQFYRNCMDJWNXFSKULURRUNXUXEBIMNPUEKZXLMTPDSQJOTALFTCMZWNXNQLVZBOSGJPTRQJSTIFCYTAVGIBHXKCSDLYLWEMQIKYQZWECBKAPFIRDIUUVP");
    msg.deadline = 0.1661533837661382;
    msg.range = 0.6231165436983029;
    msg.data_mode = 184U;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.7719724200027362;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IUKZLTMMNOKYILLWCWDBWRHZQGTSFQBSTSXDSCSYITGATOBWVFHNQUPTQRFRXHLBOHNJYKZXGEUYGVGVXAQMXAMUGLMKZAUDTNCKPSHKJXMJFWOVQWGBZUBFNCKIKSQNTFXFNKHBYTJBMOUVPDIREIKLIWCMDXXHONUGJSVSWZARFRQRJPAQBNCZCOMWDE");
    const signed char tmp_msg_1[] = {-93, 114, -60, -24, 9, 98, -86, -90, -31, 121, 37, 13, 77, -29, 102, 9, -72, 4, -109, 44, 54, -55, 16, -67, -93, 31, 11, 117, -98, -62, -49, -24, -59, -39, -51, 42, -13, -73, 0, -46, 105, -29, 6, 110, 85, 70, -66, 62, -11, -115, -69, 120, 75, -50, 84, -53, 79, 113, 21, -78, -46, 57, 31, -46, -42, 80, 64, -95, -32, 85, -115, 53, -9, 67, 12, -8, -1, 121, 84, -11, 65, 98, 73, 31, 39, 19, 31, 5, -8, 28, 118, -116, 50, -91, -123, -118, -47, 77, -128, 29, 41, 87, -118, 97, 31, 52, -20, 19, 11, -100, -14, -103, 79, -112, -81, -109, -65, -6, 95, 36, -91, -72, 3, 25, 67, -4, 90, -116, 11, -43, -7, -89, 2, -20, 109, -103, -115, 77, 83, -97, -20, -119, 107, -90};
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
    msg.setTimeStamp(0.2016761518071265);
    msg.setSource(2436U);
    msg.setSourceEntity(158U);
    msg.setDestination(2052U);
    msg.setDestinationEntity(124U);
    msg.req_id = 24838U;
    msg.status = 153U;
    msg.range = 0.7079280491785104;
    msg.info.assign("KKYSMPCYUCDIYJOQCEICXRIMFBAQTXPWUYATWITNNNUJJHYQJMIPWYKCOETEIXCJSNOHBRSHNQNAEZXBADCQJXBVSREHEWVUZUGWPYLSBMMKBNOOWFKUPJHRTUASZLFLHMGSEGQQBSOM");

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
    msg.setTimeStamp(0.6828032182113772);
    msg.setSource(52759U);
    msg.setSourceEntity(43U);
    msg.setDestination(19701U);
    msg.setDestinationEntity(166U);
    msg.req_id = 3525U;
    msg.status = 111U;
    msg.range = 0.8774608739625128;
    msg.info.assign("CYHWOQVJCWCHHGSCQUZAYNAJXOKQJXGFIUFRINRGLTWXDBCTEHQVLAJRFUTNTVHAFKXWVUGN");

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
    msg.setTimeStamp(0.38460392020767387);
    msg.setSource(35974U);
    msg.setSourceEntity(224U);
    msg.setDestination(10063U);
    msg.setDestinationEntity(212U);
    msg.req_id = 59416U;
    msg.status = 222U;
    msg.range = 0.8488775074247484;
    msg.info.assign("PMIZYSEUSQACQJYBCMSDNYNABZPVAZZAOIBDAVQLWVKXTMYXSWENMIKGWF");

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
    msg.setTimeStamp(0.056431647508642935);
    msg.setSource(4662U);
    msg.setSourceEntity(57U);
    msg.setDestination(13366U);
    msg.setDestinationEntity(145U);
    msg.req_id = 5107U;
    msg.destination.assign("UFEESTZWGJUIEXDXHHPOIKOBYCSJOYOGHVJUJCPLCYEBILQUQCKSN");
    msg.timeout = 0.09929195964482129;
    msg.sms_text.assign("YMHHCPICHCBUPCYBLKDVWLUSJYLBNVQFYMIFJSQLPZVQOTRPBJNRNGATDWFFYHDPGCCCNQORGJHFWCKOEUMTSXVNUVO");

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
    msg.setTimeStamp(0.9494521069576926);
    msg.setSource(12059U);
    msg.setSourceEntity(120U);
    msg.setDestination(15841U);
    msg.setDestinationEntity(227U);
    msg.req_id = 31458U;
    msg.destination.assign("VIJKYFVFRGTWZNUMPPEAKRMEPFZNTSHBQULXQLQJWSOCDVXQVNQMTUWGIGTOYKBZHMLVNFYJSMHDIXCOJUKKZMJNZQJIUUDBAFWDWLAORLDCNRPOSPGAAISHDHIEWJUXGFLWMZKXKHOCFMLZYQRSDPYGAOGLSIWJIFEFKQNKBBRXHAOIVEAZGEAVPTLYJFOVSZBJTEGCVTBPHTY");
    msg.timeout = 0.5175437107409124;
    msg.sms_text.assign("LJYBYSJGCGFNJDNGAS");

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
    msg.setTimeStamp(0.6983032166836546);
    msg.setSource(45934U);
    msg.setSourceEntity(122U);
    msg.setDestination(51307U);
    msg.setDestinationEntity(37U);
    msg.req_id = 21016U;
    msg.destination.assign("QEAXNGSZFEZSHKHHBPCTBFRSDQLBMJTWIQJRWTYZPXIMMCNNIPTCCRZDZGQDATZZVXOUIOVZRVLWXKJXHHIXWNKJYMOMAUQXETAOXKUXJLCGFBQAFQJCUEMOFDGKLTUPTLMSAODEENNJONJYUVWFAIDBMPKYEGCVU");
    msg.timeout = 0.8024288407321443;
    msg.sms_text.assign("FZTXKCKDSSKMJUJN");

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
    msg.setTimeStamp(0.8562960794221552);
    msg.setSource(64173U);
    msg.setSourceEntity(213U);
    msg.setDestination(13821U);
    msg.setDestinationEntity(48U);
    msg.req_id = 58580U;
    msg.status = 107U;
    msg.info.assign("JUCPTZVLCTGZTKLMRPEMYADLVJLXHV");

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
    msg.setTimeStamp(0.771083420310931);
    msg.setSource(7248U);
    msg.setSourceEntity(73U);
    msg.setDestination(3386U);
    msg.setDestinationEntity(165U);
    msg.req_id = 48195U;
    msg.status = 179U;
    msg.info.assign("QGCADMBTUTUIUPGNGIAJVGPURYMKUTNFIMRVMBSJFXDYOHXKWQEPYBXSVRPDOXDJENBNASRPYGOBABRHTWIFYXKWOLQGEQCKTHACGWUYCWFKLUTYOVWPTLOFDWMQVUAJILVCFSLCMHVSZJKHYWKJZXDDZXVIJSBMPDOICSNYCLEJNNRAMGRBSMHDJACRZZPQZQRPFNIX");

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
    msg.setTimeStamp(0.820143401043664);
    msg.setSource(41215U);
    msg.setSourceEntity(85U);
    msg.setDestination(49590U);
    msg.setDestinationEntity(211U);
    msg.req_id = 12724U;
    msg.status = 48U;
    msg.info.assign("OFXGGWYQPEGWCJXNTWZAAHPVACMQBZRODUKYTYIVDODIUYCEJKDUEDEVPDCTUSJIGAYJHRFORUCQNFQOVKVATRJIBZPNJWOGEULOWDIIFJNHVSAOMWXMBMLGFPKMPYKMZVVBMRCPRLWXNRIYEUJGLETMURSSETBXMCLYQDLHKAHFNUTUSPSSOJWYICGQZHZQSZTQQPWQFHNEFHBCYXOXKBIBAVLKTWDZNTBBZANAGREXXSDSPXJZNV");

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
    msg.setTimeStamp(0.7474413601688098);
    msg.setSource(12888U);
    msg.setSourceEntity(210U);
    msg.setDestination(52495U);
    msg.setDestinationEntity(10U);
    msg.state = 52U;

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
    msg.setTimeStamp(0.5277963277403855);
    msg.setSource(2226U);
    msg.setSourceEntity(171U);
    msg.setDestination(20299U);
    msg.setDestinationEntity(141U);
    msg.state = 175U;

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
    msg.setTimeStamp(0.6448935869252744);
    msg.setSource(59910U);
    msg.setSourceEntity(148U);
    msg.setDestination(48935U);
    msg.setDestinationEntity(121U);
    msg.state = 111U;

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
    msg.setTimeStamp(0.12079452044991335);
    msg.setSource(21077U);
    msg.setSourceEntity(146U);
    msg.setDestination(13973U);
    msg.setDestinationEntity(132U);
    msg.state = 174U;

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
    msg.setTimeStamp(0.13249853156472213);
    msg.setSource(55680U);
    msg.setSourceEntity(11U);
    msg.setDestination(22535U);
    msg.setDestinationEntity(14U);
    msg.state = 60U;

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
    msg.setTimeStamp(0.33898708325073346);
    msg.setSource(31562U);
    msg.setSourceEntity(42U);
    msg.setDestination(27088U);
    msg.setDestinationEntity(195U);
    msg.state = 60U;

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
    msg.setTimeStamp(0.2958144272366938);
    msg.setSource(65200U);
    msg.setSourceEntity(70U);
    msg.setDestination(1531U);
    msg.setDestinationEntity(193U);
    msg.req_id = 37217U;
    msg.destination.assign("ZEYLFCKMEZXSXBNIDOCIMKBQFBOWZ");
    msg.timeout = 0.919725904441459;
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 61809U;
    tmp_msg_0.type = 94U;
    tmp_msg_0.max_size = 4439U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.15627993461167244;
    tmp_tmp_msg_0_0.base_lon = 0.28747297342887146;
    tmp_tmp_msg_0_0.base_time = 0.9568273418550128;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4022235965706821);
    msg.setSource(22263U);
    msg.setSourceEntity(18U);
    msg.setDestination(20559U);
    msg.setDestinationEntity(206U);
    msg.req_id = 27052U;
    msg.destination.assign("KZTFJXBOMMRRPIRSNAQCPHTMDQECLHNZAZQAGWFUFLXSHFLCMTLDEDALEWNURKVDLJZVJNWOLYXARSGUHUQXBGRJFCTEBJKESQVWCSTKDMQFUUZZDWXRVFVGTHUFEMKREWLDMOYKRHDHJIVRYYHWUIHOYVKVUMGJWXPMFNBWYABOTCQTPQEEVAXJTYKCGIOYGCPAJBNQAPHZGPSKYLIZOGBSTJPQINSCXOFSDXXDZEUOKS");
    msg.timeout = 0.9081719708844048;
    IMC::TransmissionRequest tmp_msg_0;
    tmp_msg_0.req_id = 12418U;
    tmp_msg_0.comm_mean = 70U;
    tmp_msg_0.destination.assign("CDLESEDHJDUAILQPXAKRNFEQOPMCRMGKESMACKUNQYJHVDNEZDBBNIFWZLQEOVVUGIMYBRVAZFLIRLZTDZTIQAHQCJNS");
    tmp_msg_0.deadline = 0.8524052093464952;
    tmp_msg_0.range = 0.9777504026807696;
    tmp_msg_0.data_mode = 103U;
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 40549U;
    tmp_tmp_msg_0_0.control_ent = 76U;
    tmp_tmp_msg_0_0.timeout = 0.8198722359422623;
    tmp_tmp_msg_0_0.loiter_radius = 0.031294366012122765;
    tmp_tmp_msg_0_0.altitude_interval = 0.48628903351953323;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
    tmp_msg_0.txt_data.assign("CXZOEJVVFAANSPYUNMBQHFMKYZFQNMPNXDLFVHWMFFHDOIJUTLCKXKHDHTOZUCKTXLIEHOQMGSUDBJTPJFMEBSGCSAOBLWXPWHVLOZVZHTUSWDXXQYEDKEMUEVEISWROGRLBXDTMWMDEIUTKNAJVJGDSTSOJOZNUZIKAQIYCAPNGQGXAIDKHNMJWRYIWLGVNQPKZCCWBCUYZQQRAPXPYIO");
    const signed char tmp_tmp_msg_0_1[] = {48, 62, 84, 72, 49, 107, 118, -38, -65, -87, 38, 28, -53, 108, 30, -127, -1, -69, 95, -120, 115, 96, -70, 9, 75, 79, 107, -34, -56, 74, 50, 31, 103, -17, 85, -59, -113, 38, -93, 111, 68, 5, 4, 93, -50, 68, 112, 93, 58, 40, 36, 114, -122, 59, -118, -52, 53, -78, -114, -44, 88, 81, 99, 76, 100, -42, -82, -111, -54, -50, -92, -83, 119, -109, 79, 106, -103, 98, -2, 21, -52, 14, 121, -91, 33, -101, -4, -123, -84, -75, 1, -123, 95, 115, -112, 30, -22, -6, 40, -46, -2, -102, -28, -20, 66, 58, 100, -73, -38, 69, 90, 126, -110, 20, -38, 125, 112, 60, 37, -17, -35, 59, 39, -74, -25, -7, -128, -29, -59, -56, -1, 92, 43, 121, 84, -67, -65, -114, -49, 64, -70, -53, -117, 95, 85, 47, 68, -95, -105, -23, 76, -123, 47, 103, -69, -45, -117, -59, -87, -42};
    tmp_msg_0.raw_data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.6383349956808441);
    msg.setSource(40956U);
    msg.setSourceEntity(105U);
    msg.setDestination(57631U);
    msg.setDestinationEntity(58U);
    msg.req_id = 37538U;
    msg.destination.assign("BJWEGIFFHDCESHLCSNOTQSYWIMCQTFVKFRTJXDOLLPKIVOJYNLFUNOONBYFHKAJUZGXQQSNMLGGFSIBISGWLHWCWJSMMJXDEEQZPATVGKERCVRTVPCHRHSTMXJAWHRXQJSDFGYIUDPQVIN");
    msg.timeout = 0.17506993571741225;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 23U;
    tmp_msg_0.error_count = 28U;
    tmp_msg_0.error_ents.assign("BTEPTWXXELZSRAOFJCNNUOKAELXOOZYQYXZYAVMDTYBPMKDXMKZSFCZTRIEVPSLRKPOVPNAKAXVFYFBBXDACZBBRKVLCWQFSHIVZRWDSNSHNQPGHUHXGSCREVNUTP");
    tmp_msg_0.maneuver_type = 36839U;
    tmp_msg_0.maneuver_stime = 0.9199125495183752;
    tmp_msg_0.maneuver_eta = 38179U;
    tmp_msg_0.control_loops = 1696561755U;
    tmp_msg_0.flags = 98U;
    tmp_msg_0.last_error.assign("TPYAGKHLOJTBEWDDHAKAIECOWDDFGMNJHSPHQOQKPTIOESYWXZBHLCDMRBZNOMRZOHQZZHGTAQKVNAMVRJIRRIAQAXMYVJCLLSCCWETHTGSSVHLBWNURPDWYUMYNQFUOZJWPNQQSEJGJIBOFXXTVLUSFIMBXUPPIPRCNLSUASFQVRJPIBITMUHCTKUXNENGYFOZZVVJVKAYFTLRPEECJCWG");
    tmp_msg_0.last_error_time = 0.9923811392587034;
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
    msg.setTimeStamp(0.503192035068626);
    msg.setSource(4077U);
    msg.setSourceEntity(180U);
    msg.setDestination(64374U);
    msg.setDestinationEntity(96U);
    msg.req_id = 1182U;
    msg.status = 167U;
    msg.info.assign("ZWAQGHHYRLTLNBEDSVSPYVDPDXYXVKHPCPUAJXNNRGERLPOANMDAKVXQWDBGFITXVGTFQIAUMIVMWYVJ");

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
    msg.setTimeStamp(0.5972569974401828);
    msg.setSource(42376U);
    msg.setSourceEntity(223U);
    msg.setDestination(33804U);
    msg.setDestinationEntity(7U);
    msg.req_id = 36983U;
    msg.status = 47U;
    msg.info.assign("VGKTYDNXJEDPXBJXNFBMKSCUIGXGPEHGMAEHMUFZQUBHLZYECZOEABALDKJRWIQQUBUKKKWNOHLOTDQSCVEFGPNYKWEVNBMIDLH");

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
    msg.setTimeStamp(0.9308405135196494);
    msg.setSource(63391U);
    msg.setSourceEntity(127U);
    msg.setDestination(4069U);
    msg.setDestinationEntity(153U);
    msg.req_id = 55962U;
    msg.status = 42U;
    msg.info.assign("QWKLMSVXBRCILBLQASKNLJUVPOUFEWIXBAOWRFEAFQJHIEDZHEFWADBLNRDRCLUCGCGJORZEDBUSYB");

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
    msg.setTimeStamp(0.9837309506018344);
    msg.setSource(43356U);
    msg.setSourceEntity(165U);
    msg.setDestination(10596U);
    msg.setDestinationEntity(151U);
    msg.name.assign("LPKTKWMKHXZFWHELEANVAQTSESAVSCQOITKNFPGNFDFUAIDONNIOYTZLRKUGQICQPLBNBYJLASSTBOWWYOBOVIUWEWPEZHZETYKWMAKTVWIYZLOUCNSXBCCRHDUXVFYAVRSDNRFTRPMQXFGDVNQOKFGJLXJIFALMMUHPRUBIWGBKJXPSPSIMLAQZJKLJX");
    msg.report_time = 0.2308087506110601;
    msg.medium = 154U;
    msg.lat = 0.8441823635377054;
    msg.lon = 0.35943178497972295;
    msg.depth = 0.5702143488819377;
    msg.alt = 0.7252328338036174;
    msg.sog = 0.2838482805765127;
    msg.cog = 0.27346163978267946;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.29768007922866524;
    tmp_msg_0.y = 0.6401750277689583;
    tmp_msg_0.z = 0.07356235961926483;
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
    msg.setTimeStamp(0.5877691220720823);
    msg.setSource(8441U);
    msg.setSourceEntity(142U);
    msg.setDestination(38356U);
    msg.setDestinationEntity(179U);
    msg.name.assign("UNOEXGVYPQEYNKQJGMOGREAEL");
    msg.report_time = 0.08259486948707351;
    msg.medium = 249U;
    msg.lat = 0.5410194290601181;
    msg.lon = 0.30787243567152256;
    msg.depth = 0.8934122753808945;
    msg.alt = 0.591784160881369;
    msg.sog = 0.30607468787529546;
    msg.cog = 0.2580389447040059;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6670243532875847;
    tmp_msg_0.y = 0.0644013267239113;
    tmp_msg_0.z = 0.722172268685811;
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
    msg.setTimeStamp(0.8467747439928616);
    msg.setSource(3245U);
    msg.setSourceEntity(45U);
    msg.setDestination(56662U);
    msg.setDestinationEntity(80U);
    msg.name.assign("DEMQDGNSOPNOUGHYQWPTJJOWCQNYEBUCVQYQMWMQHWZRIKSPTTSGQFZRFRILCTCSLPXJAMUEJBTXXIYBFXTNNCMWGLLRHZHKXEAETYCKSBKEJTGDSULOKFGVKVRSJOTAJCXMVEESBZDQJLWSRFVAZAIXFHPMNHDCIUBZIVHMFDGABBWIZRYXOQRAWZWFIBXYPOPKEUDOAWYPDNLIKFYSXBJULDUNOVQIFNHG");
    msg.report_time = 0.38918713557454243;
    msg.medium = 131U;
    msg.lat = 0.9449993326472146;
    msg.lon = 0.33308849988594524;
    msg.depth = 0.05139779037810266;
    msg.alt = 0.8662976309632257;
    msg.sog = 0.021731174312289436;
    msg.cog = 0.3795874238479763;

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
    msg.setTimeStamp(0.7897602365294834);
    msg.setSource(37068U);
    msg.setSourceEntity(181U);
    msg.setDestination(34355U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.586802733226964);
    msg.setSource(30432U);
    msg.setSourceEntity(175U);
    msg.setDestination(22274U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.24484120037244372);
    msg.setSource(33814U);
    msg.setSourceEntity(134U);
    msg.setDestination(51213U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.029402266501443064);
    msg.setSource(37697U);
    msg.setSourceEntity(147U);
    msg.setDestination(38511U);
    msg.setDestinationEntity(183U);
    msg.plan_id.assign("CMVDETJIIVBLNWVORPTMWPXOFTAAVOXVZNBXOFWSMVTYWZJLHMINTNWWCDNSRRFGSXOHEYPLLOAMLCXOLQYEPQDOBQMWSMJEYEUJY");
    msg.description.assign("PSECBBSPADIXYZGCUDFVZXJHQFKDLBAJRLXJSHYLBJUKRKZRHTMWOTHWCWPKCDFNFNXYRJEYUEBITXDNJPKPFUHFASIZZUQZCGYSCPHQGHLGMPVHPTCSTWOYFHDOPIBWRBIVAVLRGSANAZNOLQTWKENXORV");
    msg.vnamespace.assign("UOPWPNKCNVKT");
    msg.start_man_id.assign("IRTDGSPUVEBMFDJEBQGXGPHPVLOTDTPDSALMAOGYDZHQNXXZFRBSIXZDVPOFUAMKMTBAIMUINOONEPLRWAGGCRKXSNHLZHIFXWPSV");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("KMMETQPKCSSXWOQCHAOWKBDQCJ");
    tmp_msg_0.dest_man.assign("VBJQWBTPGVNCTIGVYCQOJQWETMXVFWZOVSVHVQJZZDJUNFKDNQGNXSZEYKTOOASTWLFK");
    tmp_msg_0.conditions.assign("UPCILQVTDSVRNEMTMNFGANAGWZFLZDSWPRKKDPYTOJQFNWWLMKQMZKLLOHBAHIXVXTRXONJCFYGUONPXYZIHXEMDOJOUIUEQTIWFCJASVBZHIJHQUIEESNVSRFJUVVXEYNUOQYXIASCR");
    msg.transitions.push_back(tmp_msg_0);
    IMC::HistoricDataQuery tmp_msg_1;
    tmp_msg_1.req_id = 26383U;
    tmp_msg_1.type = 132U;
    tmp_msg_1.max_size = 4852U;
    IMC::HistoricData tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.base_lat = 0.2999026750399121;
    tmp_tmp_msg_1_0.base_lon = 0.8408313793650752;
    tmp_tmp_msg_1_0.base_time = 0.0022453082482505327;
    IMC::HistoricSample tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.sys_id = 23507U;
    tmp_tmp_tmp_msg_1_0_0.priority = -28;
    tmp_tmp_tmp_msg_1_0_0.x = -26944;
    tmp_tmp_tmp_msg_1_0_0.y = 31595;
    tmp_tmp_tmp_msg_1_0_0.z = -14466;
    tmp_tmp_tmp_msg_1_0_0.t = 17608;
    IMC::DesiredPitch tmp_tmp_tmp_tmp_msg_1_0_0_0;
    tmp_tmp_tmp_tmp_msg_1_0_0_0.value = 0.04779217227003285;
    tmp_tmp_tmp_msg_1_0_0.sample.set(tmp_tmp_tmp_tmp_msg_1_0_0_0);
    tmp_tmp_msg_1_0.data.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.6089355809403157);
    msg.setSource(4450U);
    msg.setSourceEntity(51U);
    msg.setDestination(34475U);
    msg.setDestinationEntity(231U);
    msg.plan_id.assign("SOFNRNJXIKUGLJREZBFDJHQVRGMQDKQRPLAZIYFHCJHJQRLFWUQXOCNIEEPNLQPCYNHZSXKDVTBSSPTABHHVCVUTQVUPUVAWGGMOKTAKUTEDMCBOCELTIWVBCYXXCUFHDNOWDHODFWDEVBKMKSREIGXVHCIZYLTUBKTJLRHBOWGASPATNWYCMWZYFIAFZBR");
    msg.description.assign("EWBHRJGEJEYRGSBUFCIVSJCPLVOKOPNBNIDGPVOMQFAENARDHTROSTFUULODMZPSIAXYFZCCEILTQYZIKPHLNVWXVYUTMEUEBAKRKCKYDZTH");
    msg.vnamespace.assign("ROYWIYVWSHGHQMHQVTAECBDNSEURPQAMWCMZHVMRHSELTJJCMCXSQHJLXAUNYVZTILYTXTZSVXFG");
    msg.start_man_id.assign("MNLNHKNLTEOZDYYAOIAPPZVLEAUJZLFXYFVPJQLKDYHTLMEWPSVQJTSMBRZIGSQHXZTXLIEUWSFIDFBPITWNXIFQXRVNXDJGZMJRQQUAHIQUJCYEMRYGVRVUHVARICEUPRMMOLEFOJHZGOGCCAJABMQSSVKZBTWOLZGBWFKAKUAMQYWSBTDNSRDNNQURY");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZWURWBBORDIXOMXZEPBEQSTYGOJBUVPKLJJYCLFSTSNNTWAIG");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 54597U;
    tmp_tmp_msg_0_0.lat = 0.2663077759240736;
    tmp_tmp_msg_0_0.lon = 0.8951154458424604;
    tmp_tmp_msg_0_0.z = 0.07893381482606876;
    tmp_tmp_msg_0_0.z_units = 175U;
    tmp_tmp_msg_0_0.speed = 0.9460935805006778;
    tmp_tmp_msg_0_0.speed_units = 149U;
    tmp_tmp_msg_0_0.duration = 57218U;
    tmp_tmp_msg_0_0.radius = 0.05891969023990551;
    tmp_tmp_msg_0_0.flags = 92U;
    tmp_tmp_msg_0_0.custom.assign("TQDZIJZDWMMVUCDQPUUBSGGNZZCJRCSUSOFJPCIXGFYHUGJGUISENMCWVHJMICZVYHIKRBKAZIWDNUFVVYURGLEYBXZYGQDQAYBKIURFQNZQXMWXWPLPYHNSBOWSIDAQVRJBSCXXTPHKDSIK");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SetServoPosition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 74U;
    tmp_tmp_msg_0_1.value = 0.7105073626257635;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZGIPCWDDGGFQNNIGNRCTVALZIWEUKSHDKRLUJERAUJCPRNVSFPXCIGQXSRFPHPKCLUBXZNMUJQYMZZZKZJNDFBLMUIRHQFREATOAWMOM");
    tmp_msg_1.dest_man.assign("IONWXTZKPPRHRRTLYSRVFVBAUIMELLZ");
    tmp_msg_1.conditions.assign("DFFWMGKDUPHEUBGXYLGEYXUFPPDCMGXRDLEFIJDO");
    IMC::DesiredPitch tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.19769756161731478;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::PlanStatistics tmp_msg_2;
    tmp_msg_2.plan_id.assign("BHMSFJZOGEBDZHOBSENPRAKBNLJLLRDJQCGCHPJTVYVRQSRWBAKONKPYIMYLCQZC");
    tmp_msg_2.type = 68U;
    tmp_msg_2.properties = 104U;
    tmp_msg_2.durations.assign("LARZBOTXQXTBPFVOSVISCXCCQFJWGMLKDLNNHLKAVMPTHEERXWFPGILSDHNZIOODZPMDTGCWNQFK");
    tmp_msg_2.distances.assign("XBCWDYQFXFOMHOQMCHUCOHYDPEITMHATLBPWYVNZRDWTVHFYEKLMJANBKVKAZWOPGSTX");
    tmp_msg_2.actions.assign("CYIJZPSQQY");
    tmp_msg_2.fuel.assign("JBRETUUQWMPLHGPHNTPNIICHCDYWFRNFTSPIJO");
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
    msg.setTimeStamp(0.9390067423766988);
    msg.setSource(20221U);
    msg.setSourceEntity(45U);
    msg.setDestination(60969U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("NVCJHTFXIWJQGTLPLNINQXDRWLFZLEJKCNZHLJLVAMIAFSGOFBCSSONYHNIJYPHNKTVEYDUEXKOXFRGZCEULPCQPBKQATURJBCYATMBGNRGXQOWMZZUJSHIMASXVGYDJIZWSWGKBERLKITNEQAQUOUKSIIRPBTCOCWYDGRCHFAHEWLSZENPQ");
    msg.description.assign("SSKCSNXTYUMSFHJDSAYBMLATCPFKIHXGMYICRIBPFGGJ");
    msg.vnamespace.assign("QHFRRRBWDPTMECWIFQGTZQQOLVNMGVZZTJZYUURDKDPYGNMQJBALNXWHAXWLPHXKCBSXWSFFVVSLQAIUHLTSZIUJKABDXFNHGRYAXTYEKCX");
    msg.start_man_id.assign("OEXKSZBVMFBBZGHLXHNGPTBLPIASQZWTZSUNYEOHYTYRFWQUCOPUJOGETXLALFICLUITGJKWHALTWIJZBOWBFGBKOCIQDNQVQMOZXJVHCYLPDTVNGXFAAOASCTPHEOHFQIIVCDQWTNDSVKXUXRMIFNDKKRKPCMYGMPMWSEBZXYCKVNVVFJLRNQTBDHRPAWYYDAZBSPYKFUERMOQURDSCXHESGREK");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("XMKIUVZHUKMSUG");
    tmp_msg_0.dest_man.assign("QLIYCFFPDLGALXENGUDECCM");
    tmp_msg_0.conditions.assign("KMUJUQMVRGLXACGLRMTWEMHJDMFWPKLZKSHETBYAGNOOGNGLKIWIHPOGKMEDOZISLSOIJHZQVITFFKXHHCFMUPZZOEYIEHYCDLUBDNJVPNWZBURYORFUPNIXAJYEFFLPTUWXLVBWWTAUBEPXAQGQXPXWPOKBNDNSHTZVBDKYXEMMUWDEMFICZRJNCCITKYKTQSEGSCG");
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
    msg.setTimeStamp(0.13801468631711644);
    msg.setSource(55869U);
    msg.setSourceEntity(16U);
    msg.setDestination(40960U);
    msg.setDestinationEntity(134U);
    msg.maneuver_id.assign("BHRLPSADOMWQHSMANGYXVKCGXAFIXZOIOFUJHDFVHFITCYMWIGXABMZBLUCUQNXDBVVOEAFSSWKHPXUZDEPPKKYVEDERWPUXHBTRAKOZGNEIFGTRNYGHZDHSJJEFUXNNLYZVRMZTIEOTQBNJELSCJLMWNOFBYJLQCCDYKMKGKAAYUDQLSGULKOBPVZBOURPIQO");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.8647867361504609;
    tmp_msg_0.lat = 0.8397420826450956;
    tmp_msg_0.lon = 0.35431764666707477;
    tmp_msg_0.z = 0.3493279953066418;
    tmp_msg_0.z_units = 66U;
    tmp_msg_0.travel_z = 0.2645921030465852;
    tmp_msg_0.travel_z_units = 95U;
    tmp_msg_0.delayed = 25U;
    msg.data.set(tmp_msg_0);
    IMC::EntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("TKJAIQGPDUGMCANPGLCBPIMXFOQSKXAAOPWVLKCJQPJITRLPQUKWRSOBHVMAKSRNNQYXTPHGEMJUVRNAGGSUZGOKSFLXUJCMNTUTRMZGUCLTFEJDINBHDWBIXHQLVVUNTSFEKDETKGSIZECBZ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::MsgList tmp_msg_2;
    IMC::TrexAttribute tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.name.assign("PJBINJPKTFJBKEOZRIRFDYSCLWZHOHTLLYZBNLIQSQQEWGHKSGIKCMCNMNVUSAJPPRMEGXLXUVGCODWZXKKRXAKVYIFATZZUFCGHASJVBOLDLDMCNCEFABECKMGQNBADMBQFEWSQWOFHXTSVUIBDNDEWIMRFPQVQTUTNMKPSAGP");
    tmp_tmp_msg_2_0.attr_type = 70U;
    tmp_tmp_msg_2_0.min.assign("JXHYQPHVRPVZXTHJXGLMFRFWOEDZYTXJHKYZJNDUIFHANANEMDQCCHNKVROSUIOQQYEVPDPKICTDQHQSIPGNTPFUMXGYERZGEAVSEBRLPTOUFQVXXTSFHQSHJMXLYOZYC");
    tmp_tmp_msg_2_0.max.assign("GXNFNRUVSFWEXNQWHNXUOKKJQUZICCMYHBWJJYGXLBPOGDKZRYFIXIZUACUGDKFQMDISNQJCDBFWEKPP");
    tmp_msg_2.msgs.push_back(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.5881623207808971);
    msg.setSource(3081U);
    msg.setSourceEntity(169U);
    msg.setDestination(34439U);
    msg.setDestinationEntity(127U);
    msg.maneuver_id.assign("YTPMRMHNYRQRVNKISCWZDODOPBKIMXUWVCOCZAEWJVAWYRIBVNPDATMFFVNKALXYXQPPJBQDUJYBIIESJKLTTZTSBAJTZLCULHIKXG");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("BATZBBFQNWJEUWMIYNQVHPFRCHUNVWTJHDXUNOEXNTVXGXHARVXSYBEMJLCAUVVIIOVRDDNMQE");
    tmp_msg_0.formation_name.assign("XYZFDEBVQPPOWFOUSQEXRDEVBLVUTMHHRGQTZVUOTUQWFYXURATIRNXDZNLHKSXMYOLSJGVGHPJYHMIBYRWUJSCXCPZCBMTTKZIIKXGAKASHMHZWZFEUSZBICJPPGWLDNPIQTTKBJGEOEMRUQMQDSDXYGJMPXLCI");
    tmp_msg_0.plan_id.assign("GFQNNZOSSSLFVTPEJOVCLGYPZSTAUENYHLHKLTVVRZWROJEIYBWFQNFOSRLAHWMSBGQWNHVJKDHKRBDRGXOCBDJUSFOIGLJGBUWZFVLSRDJRIQKWNNQAOIPYLIYTJNDXPHCHYKECMNMLYHTQUDZXZRYVPYDMHJPTX");
    tmp_msg_0.description.assign("VMGPVPAVDWKINKAKPPGJKJBLRVAECQEYUVTLGUCOVLHLWOSVQUMSKDXFMQXEODUCTBHZWWXRPIGSHRTFRASFPIZYUXUWRNWEYXCDBFSCLCHGZTMUOWMAFDCLEEWGRYHKUTYPZTRASHYFKBKICFNYRIQXIZQXLMOJTJQMXXZLDEHPVOFOQBPSZVDPSNJWCLJESMABZJCBVTUNIFMGZHNESZXAHKBINGJOALJEYYQGDTFNOB");
    tmp_msg_0.leader_speed = 0.4593260121032353;
    tmp_msg_0.leader_bank_lim = 0.3661267376767853;
    tmp_msg_0.pos_sim_err_lim = 0.6249750604976966;
    tmp_msg_0.pos_sim_err_wrn = 0.6477443806778949;
    tmp_msg_0.pos_sim_err_timeout = 44135U;
    tmp_msg_0.converg_max = 0.010705568733536341;
    tmp_msg_0.converg_timeout = 54153U;
    tmp_msg_0.comms_timeout = 13405U;
    tmp_msg_0.turb_lim = 0.24730308728775374;
    tmp_msg_0.custom.assign("UIRLDSZXBKDTRPJIGSWLLHKHBTHSMPAFEPXEPNOEIRMRHECZON");
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
    msg.setTimeStamp(0.7504214474968093);
    msg.setSource(24282U);
    msg.setSourceEntity(79U);
    msg.setDestination(11260U);
    msg.setDestinationEntity(194U);
    msg.maneuver_id.assign("AGDGRJHCMSBWOYDADLVWLTXOTLBRKINFPKLUGLMAQAMYFOOCNNEEIXZYMBZPIOVKOZSUTXXPDCARSNHEQJIXASPKBUJOLHAZZAMFYDIPXAQVAGQRLRXERYQYWPBZBORIHVSWDIZVSDMWTDHSGJWECKBRXFBK");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.9341082688193973;
    tmp_msg_0.lon = 0.6346220267769209;
    tmp_msg_0.z = 0.7590451002027024;
    tmp_msg_0.z_units = 150U;
    tmp_msg_0.speed = 0.8600434047212235;
    tmp_msg_0.speed_units = 102U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 20272U;
    tmp_tmp_msg_0_0.off_x = 0.8384041563795196;
    tmp_tmp_msg_0_0.off_y = 0.002663428138490742;
    tmp_tmp_msg_0_0.off_z = 0.7843307578453457;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.23128319474152415;
    tmp_msg_0.custom.assign("WRQAVXCHJYXKLTU");
    msg.data.set(tmp_msg_0);
    IMC::MapFeature tmp_msg_1;
    tmp_msg_1.id.assign("GCLFGMRCWVZKVLGQYQDVWBWZPDKCLSOWMBYWJVMTDSSHATZLTQJDBFNLFNBFBGYOHSKPFXKRPURNIEQMJKIDDMEUYBYESESOBIVBAAFKOMNOLHMXLCNLTSUGYAYTXXFVWBGVEQTZTDHHUXZRNIJZTQNOPVNQAHOPZCRBOJXVJWYDUIHKCRAWKXFRYQHMRDJLP");
    tmp_msg_1.feature_type = 167U;
    tmp_msg_1.rgb_red = 72U;
    tmp_msg_1.rgb_green = 111U;
    tmp_msg_1.rgb_blue = 76U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Tachograph tmp_msg_2;
    tmp_msg_2.timestamp_last_service = 0.0004462431454953508;
    tmp_msg_2.time_next_service = 0.8031519129719195;
    tmp_msg_2.time_motor_next_service = 0.903926858261874;
    tmp_msg_2.time_idle_ground = 0.3109501652447033;
    tmp_msg_2.time_idle_air = 0.9060146518721748;
    tmp_msg_2.time_idle_water = 0.09310047701496993;
    tmp_msg_2.time_idle_underwater = 0.4950773277458279;
    tmp_msg_2.time_idle_unknown = 0.1486087598543283;
    tmp_msg_2.time_motor_ground = 0.5879288124861037;
    tmp_msg_2.time_motor_air = 0.3632736718052877;
    tmp_msg_2.time_motor_water = 0.0461658265222189;
    tmp_msg_2.time_motor_underwater = 0.7126834583486675;
    tmp_msg_2.time_motor_unknown = 0.8329768273467942;
    tmp_msg_2.rpm_min = 3418;
    tmp_msg_2.rpm_max = 13325;
    tmp_msg_2.depth_max = 0.5770703784265638;
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
    msg.setTimeStamp(0.11073758501709774);
    msg.setSource(25594U);
    msg.setSourceEntity(69U);
    msg.setDestination(42128U);
    msg.setDestinationEntity(237U);
    msg.source_man.assign("ELXBOGWWQEZKMCDCQTAWGEOXJVWXDQFZADDGNSSTVOPONVJZFGPYRKNFBROFQHVNDDJRZAXEUEBWAQXHYSEAGLDZEVWHKBIMNJSYTQOVYCOOPKRGUVVYGHLMULMLKOPHCCKZSTCEUXZW");
    msg.dest_man.assign("CPUCTTKBMCZJJXUFKXRAFPAJNSNYHWLPICUMUI");
    msg.conditions.assign("LIHYQFQKPMSBWUOWDHDJBOQLMPMIZCZBABCFFBGMLUMVDOTTJMXWXCXYBURMLJGVCIVGPQTYYUKUEKSOHVWLANGIEZIDATUGPROROJIPYWCNOELJJEIKESFHNTHMTDXNGPYIESUDHRHMRZTGVIWSQPAAHEXTRYSLD");
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("KHDBMNFDWNFJVATAUZAEFXUVJRFUGBAPSIMOVKEDJKPWIIYXUPKQXPBREZBVDXTIGIXMSBHKLGPSENLVNEHKBNJDZCIKVLDJOZHLOQMBSANRILW");
    tmp_msg_0.type = 130U;
    tmp_msg_0.op = 35U;
    tmp_msg_0.group_name.assign("KMEPMIJZKWURBHJCRF");
    tmp_msg_0.plan_id.assign("SVWQAGSDQLHPRQIEYFCSAZZXBMKWLHANVULFMBIZGWLGDUQTTAOIONEUEKNOLCSSCEQXKZVRYYJJDTAPW");
    tmp_msg_0.description.assign("UMKNQBQNXPINYNSRAUCFSOZILBNKCWXARZUJTXULWZTKZNRSGZWHKOMCXUCPNBYPECOCGQNQJDDTNABLSGMCGYDALJEOVMMOUTFPIVKIRYZLWJALZDTNHJEKZXJSEXODQVQKMQFCMHHXAEFWZVDTOVGBQGBBHRHPDIWIAZPPRFIJWYRYSLRQVUTAOJRULVBMPOYBFGFJLISVBSHHAGXHDICJDSTFKEKYDUWHPPOASVTFXWMEYFKQW");
    tmp_msg_0.reference_frame = 213U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 5309U;
    tmp_tmp_msg_0_0.off_x = 0.012846857145473844;
    tmp_tmp_msg_0_0.off_y = 0.5691133070613295;
    tmp_tmp_msg_0_0.off_z = 0.49397645607904206;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.leader_bank_lim = 0.9501137190638242;
    tmp_msg_0.leader_speed_min = 0.6194483677249859;
    tmp_msg_0.leader_speed_max = 0.11422962347401455;
    tmp_msg_0.leader_alt_min = 0.7902051111664089;
    tmp_msg_0.leader_alt_max = 0.9320370814986123;
    tmp_msg_0.pos_sim_err_lim = 0.3022843509416222;
    tmp_msg_0.pos_sim_err_wrn = 0.22080371939805932;
    tmp_msg_0.pos_sim_err_timeout = 47522U;
    tmp_msg_0.converg_max = 0.89110656953574;
    tmp_msg_0.converg_timeout = 23723U;
    tmp_msg_0.comms_timeout = 32817U;
    tmp_msg_0.turb_lim = 0.8374194093115894;
    tmp_msg_0.custom.assign("PTMAHYZBQIA");
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
    msg.setTimeStamp(0.9108096117360733);
    msg.setSource(37295U);
    msg.setSourceEntity(138U);
    msg.setDestination(61186U);
    msg.setDestinationEntity(72U);
    msg.source_man.assign("YTQTOHIBJKMXBPHVWODZJAEDXHBDIKOCGWMRIMPRGRRSACIVHTZMYVULBUVLNSATVDMOPRUHDEKOQXRXDWLHQGYFYSPXDGITEUFIWRNEYYIEXLKBCHSSVBDQJXRYNFLPIRZMWJGZUGVKGNJBAQFKPCAXQMNKUSSPWLWEIIRFLYSCZEAHZFDCGQWVCQONEJEA");
    msg.dest_man.assign("EYEQNUFFKAPVSWUKJOZYTTNPMGYERAKNNSENFBZLKWPKERAYXPEUCFXQLTANOELIMLIOKFQBBRCBHASNHUMLJXCJTIDUNWXXSHXBGIMVRBRARDDOWHMOPQZDWCZGCGAJ");
    msg.conditions.assign("IDDMPJPCWCZTJAKJJTQMAEDFKVBIXFNARVCZXOWMURRLBEKZACAPLBSINGBXUBHIVCSWRITARPFNMNYLJLBGFTERQRLRVHHFGLGOOGNTKYMTJQEZJTWSEWDOVTJOWXYYADKUZITYWUFDHXWQZRPFGYRHNKXFHQPOIBMXQGSHLSIIOQSDVEGYBIZVCUYPSEKCLYWMJTDDCQQWEVNHYUUCEZULXUH");
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 1255553250U;
    tmp_msg_0.latitude = 0.44310130568563566;
    tmp_msg_0.longitude = 0.6182625554479119;
    tmp_msg_0.altitude = 58490U;
    tmp_msg_0.depth = 62752U;
    tmp_msg_0.heading = 30187U;
    tmp_msg_0.speed = 11113;
    tmp_msg_0.fuel = -107;
    tmp_msg_0.exec_state = 65;
    tmp_msg_0.plan_checksum = 37777U;
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
    msg.setTimeStamp(0.5068721164580894);
    msg.setSource(23921U);
    msg.setSourceEntity(113U);
    msg.setDestination(22025U);
    msg.setDestinationEntity(64U);
    msg.source_man.assign("GEUNSGGGWZLKYE");
    msg.dest_man.assign("UBALLCTHRQXGLXIMZCZDTYXNWNYKDSSPQM");
    msg.conditions.assign("ZSYIKOXSVUWTHLMAELJZGYDVHFHRVYYHGJFNEGCUEJOGKRLNQPJXCXYHHDYWTXRSRNTQYJLDZUHABOEDIJFCOAXTGIDREGIWXSWMAYLRJSSZMCPOZVCEFPOVLFNBBLDWAAYYULLRUVKJHMWOVCQRTSKDCNCWZPWZZLMMTXGPUROUQNIDNPTVNNIWQAUBQKGQAIASTWPXMV");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 205U;
    tmp_msg_0.plan_id.assign("LAEAWEBVNJBMHPSBITVPRTMIANPZHWRKYUNICZTFSCOPOLWUJTNFXJIVWOHCFQKUKCXDEQOSWHIEGAQMCYNEJQVGNBYGXIBMZSDOHHCCOKDWFXDIJSMFWGLEKCZXFAEQPEIVYUYVVVOBGUNAPWDMLAOQSNDRDLLQFRRTZUULXWPNZFXSSVZTTFEKJZQGPAPGKYUIHLEIKKYUJBYGMSHDRHHJJRRUALYOCOZLPRBTNZSAXXMKDMCTGWDXGVQQ");
    tmp_msg_0.comm_level = 58U;
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
    msg.setTimeStamp(0.21810106909802873);
    msg.setSource(17588U);
    msg.setSourceEntity(37U);
    msg.setDestination(15364U);
    msg.setDestinationEntity(254U);
    msg.command = 221U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YSJLVLBVJGWJHRTRWJSOLFFWGPSZNFADXNVRHMVAKNEGVCIFMGOOPCPIC");
    tmp_msg_0.description.assign("QXSDXMYCCVSIEVSSMHXYGKRWBBPDLKTAIKOAQNFVOFSNHGLIGQAPOZVGNRETHZJWWLPJRWULSVZBBPGPBQEVJDYBNKVBUICTQHZUFDTYOYZHRIOTKIMMQOYNCOQMRMTEDKWSTLPAJBYCCTMPFJOYDRUUULIQKUVUYZSFGLLDFCDMWGFSJXTHGLXXKNFWRHZAWUIEIWAJVGRCNNAZFCHXJHZZPOTEDUEWLYRXBCENXQABKMPEJQAD");
    tmp_msg_0.vnamespace.assign("VDBIDWCLGAQPBLNNDYFBPGVULEEPXXWJTYNZQULDIQJDHQOOTCNYAYHBSBXAXMWHLAHLQAQPEPEBLXZRNKKZWCIZYURVJQUTFETEHKNHJJJBAWITJEFQSRXCHUDGSWGRZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WTDPUTYFMRQPHWHWAFXFYREYDNKFTEONAXLUOIDSIZGBCYEBOICKUBHWKBLSPIFHSADYMNPJNFXAYIWEOKRHJVNMUSITIXSSEFPRJMALGLSQCRWYPQHNLNUOXUZEKKCYODMECMLIGBJKHQCFVQBWHPCFRFVBQRLJZXEIAXTOQUJDMCEVSITNJZJCDOETRATPGWZVX");
    tmp_tmp_msg_0_0.value.assign("QLGXBVEIERJCWKVQNUGLUFHRBSTPIBAYRRCNWEXRJGUUQTMMKNWUMADCJIHBIOZCWKAAZGVXFSZBJXWTFYPYHYHZYWHSIIKOLCXCZEDFOOQRHXQKMYEIXNEDOYJDMDZUPRDGVGGMELNPDOHJWTXJZRHGTANAKWCSRLPICGFBLLUZFHLLXDJYMMBSNPTQNDPEARFQCZSTVMLNVVKVUZTOGEKHIOPX");
    tmp_tmp_msg_0_0.type = 206U;
    tmp_tmp_msg_0_0.access = 1U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("YKNTUQJZRBYWDDQSDONHCFIUMDDNDPFXLDGPAIPWYLBUOHGJJYMNAHUALXMGAOYFPYXVLRINDRZJFUBVVGACSBXZMKLKBCWGODLXJSWNOTFZMXNECPAEUUGNEKHITQKHXOHFKABIGWVTRSBPCFZMPSHMTJRECEOQKUWKRERXVZJNQSMLQVLIVWVPBJNTKGXEQAYMEORLZWVGHGZBS");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("UTUDHMFXXMIVCATVRBMLYVOLTAEPEYVQONONNWTBKNFAIPIUFJKEJHXPLCRHIYRQHDSTZLKXSQMVQEGKQVVWYJRDHYYPNLEUBRWBKHKFPDOKLGZGKWZFSMNVUJQJHOHMT");
    tmp_tmp_msg_0_1.dest_man.assign("IEFONKDIIEOWXQYCPJ");
    tmp_tmp_msg_0_1.conditions.assign("JYMURRFQUKKUVTXSFEVFOZNRNVXVXIUZFTAGWQCHEHQM");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryLedBrightness tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("OIWPHYABRGODFFANIZMULOADKKOTLXFIJJCYVNXKBM");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::PowerOperation tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 35U;
    tmp_tmp_msg_0_3.time_remain = 0.7294291939726126;
    tmp_tmp_msg_0_3.sched_time = 0.002729176134531497;
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
    msg.setTimeStamp(0.2546966464031045);
    msg.setSource(14543U);
    msg.setSourceEntity(94U);
    msg.setDestination(38549U);
    msg.setDestinationEntity(218U);
    msg.command = 111U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LMOGPSUWPJRIVDKLOEFLFWHATUBDSEMKWYYLMGJAELRTDUNZOXMVNCABUKCCJNSBPJIHESRKWBZSWYQHFOBSVGFLVPKVBWAGRRKNYYFXVFHQDORTAYNCKEEPVBTHJQWIJZBEZYSYSGNTCJMGWIONCTSFDZMRXHDDAPVFAUZTURCCXJNIKBCVXDPOTRIQEMRQPGUWHIIKFUPXCFXVAHLLQZZNWSUMYDOIZEQQGMJJMOYBKUGXHOHDLGTXPA");
    tmp_msg_0.description.assign("ZWSTRVDRTAWOYBHYQSNYMDBCULWKWXRLEVZPJQMOZEUFNWEMPSWQYSADFXTOTITFVYAXSNGDQJOBUOGRGHSEHBCLHMRPOJGCBTXJCREBZLEIAWVFCTLNAJBGSOLCIKQPMOKXGZZICIRANBXEYWVKBFNHCPPMGKRMLPWRUHXULAUFVKNKZPCXGHLSPMHUDQDHAVGTMINO");
    tmp_msg_0.vnamespace.assign("RPUASKKWTYWAVTRGIDPAHRDCLLGOJCZDQJYMAQCSBCYOJRKPQTIHNNLNSJNBWOSOPUBJWZXJ");
    tmp_msg_0.start_man_id.assign("NHNAYCKVXJALGPDFXHJZZPAVWQYYSOEJVPWZFQPRPKNCMCYSATWJHELNBHPLQEISHKFTXFIITCZZNDCFBWMULUFVRSFYWJEAEEVCNULMNXOBAGLAQDSYRMQCAGUSGJGOIKMTYTGHDGJOJBZUWCTRPEBNVYXIZSOOOAXKQDNUUUBFEHODVKFWWSIOWSWVXXIRRLZTQH");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("MBGJSCZMHZDCNZEGZOZFBMDPIVCVAEENCQWALZNRHYFQPPGLFOIASUHOCKEFQUXTJXWDRIFRUQOLNHTKJREERKSVUZTSBHYRISUKNWDQVZLHAJMWDKJOHDAGXNCWODKTFRXSQVVFSBPXZVDWPXJYCIUPMYWJSOCFUNOS");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 60352U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("MIJWQZUOWUDPOTAUKOARCLAQCONGOPMJAZZLTBFPVSLVPWUWRHCDYGUCBXBTZRXMZMPFBCTMBFMYGZPWALJXHQNSE");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BRACFCKZCAYZARMYWEZLTTULTYDBECGFSXLJKCVZJFISAHXAVEDMXSJEMYOGOEJXFLFXITDWDLIADRTJPTWJRWQNQJZMOIGPOOPJLERCZPKPIQBSEWIKLSUDKMUHNCPPTQEHSENKZDCHUQBXUFBFIHIUHQTXRWDORDUMXBHEZNAQXCCAQGYWSVKMVNVYRSMTGGXNIUFFVOAVQWFKYPNYQHIMGZW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.vid = 46183U;
    tmp_tmp_tmp_msg_0_0_1.off_x = 0.4324838216521648;
    tmp_tmp_tmp_msg_0_0_1.off_y = 0.8515420262363977;
    tmp_tmp_tmp_msg_0_0_1.off_z = 0.7410108949977093;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::RegisterManeuver tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.mid = 47664U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("ASYLEEEEVTYBNJOICLXVHEYTICMTUAIGLDQMPRBRXAAYHRMTNVLMIUOPJCWWQKJWRSXTNMAZKMVO");
    tmp_tmp_msg_0_1.dest_man.assign("TEIPAFDJUCHLQAUBPSAORUCHGRRYZLDHBRFEHYUFXUGFTOTQFYBSOOTZSSHWFKNTRCPQGYUUVXJNTNMEZMMIHQLVODLKRPYBRGDOCQHGJZJUVFQNSXAJWXKPGTJGPBTMAMWWOPIYLLVEEV");
    tmp_tmp_msg_0_1.conditions.assign("IOHPMKNOGNPICWPVARYMZESNUXLZOLFYNGISROELNYUETJVOTTFQZKVZOJHQEVPVRROQMGNQIVTWPNGVAHSHDMFQTBCXLMGDRASINKDHWKWWCEYTCUBZTBQQOSAYJYOFVAJWXFVFGWDLBKQKHMTBJMESEYIZWFCYG");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::LowLevelControl tmp_tmp_msg_0_2;
    IMC::DesiredZ tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.9937906671955921;
    tmp_tmp_tmp_msg_0_2_0.z_units = 83U;
    tmp_tmp_msg_0_2.control.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.duration = 28832U;
    tmp_tmp_msg_0_2.custom.assign("AEDFBDDKWWHCCSYTSONUOEUNHNSRMYHLRJNOORUIRPBWAGWTHNVFBQUMEJTUGIXGVPTUWFVZVFZDRAHKTDHMMHCJPFJRICFCRABZHNDTFUTJIVKQKVFLCOXQQAVLGZQXQPVPIGOMCYAMISEKBNSKPOSICVCBMLXQKPSWDSIYGZIJKGFEJXQDKHGJYDILGXLWQL");
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
    msg.setTimeStamp(0.29015912201783167);
    msg.setSource(6025U);
    msg.setSourceEntity(45U);
    msg.setDestination(55220U);
    msg.setDestinationEntity(205U);
    msg.command = 229U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UTOLFHHMNCFH");
    tmp_msg_0.description.assign("FPIWLXCGLBCDOIHJFZARMIWAEHYKKSCZCZDSBUTNDAFVVGYUYYQDXPNSUSDOZRRRMHHEDFMXJFLGEZCZQYQXYTJJNMHRYQXQNTBUOKGYITVBITYEDUTKVAYSLHJWIMBPJXTKNHBOIKWQUXLXIWLECKOEPFQSECZKQCFAMWRABJGDPNPRQOP");
    tmp_msg_0.vnamespace.assign("OCDGQOITJBLXMX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DJHLVQVSSGCZFATDUNRYGTMQHIJYPDAFSM");
    tmp_tmp_msg_0_0.value.assign("EFGEPNZXYHYKQORHOARVDXVHIYNWKSHZZKPIEAWFLLWCXTNCABHARKEWKULKDZQUSLRIMTRLUYLDLVPKTLYZWIOHJSUUCTTUVHZXSANBFPNQBAEJAYZTORPCOQZXMGRAIGDDWILIZQBOOWGVMDSRMSGMICDEFKCVBQKMXFVTQKJZP");
    tmp_tmp_msg_0_0.type = 22U;
    tmp_tmp_msg_0_0.access = 43U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RUWGSAWUCJDMDABP");
    IMC::DesiredPitch tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8611579900681042;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::GetOperationalLimits tmp_tmp_msg_0_2;
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
    msg.setTimeStamp(0.22634633330232834);
    msg.setSource(57552U);
    msg.setSourceEntity(32U);
    msg.setDestination(1054U);
    msg.setDestinationEntity(8U);
    msg.state = 72U;
    msg.plan_id.assign("ELAWEZPLPIHOGNVXJHXDYJXMBROZBOKRFUSBODTQYBYTKBZVZIJJADHVZBHBRXUDTUYMEZTLGPCSTWCQSRWMJ");
    msg.comm_level = 4U;

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
    msg.setTimeStamp(0.830178730947777);
    msg.setSource(22377U);
    msg.setSourceEntity(142U);
    msg.setDestination(28944U);
    msg.setDestinationEntity(232U);
    msg.state = 172U;
    msg.plan_id.assign("PRZWSNAQTNZFTOMRSVBTWKRHSPAFBIUNNMORJPEKXECSOUQVCAWFWOKFLJOZUFLHZXJMBCYTGSSDIVLZBLXGCAAPCAXRGZCDDBNWYMOSUGSSKCHYZELWYLOFBQNJZCDJTUDO");
    msg.comm_level = 84U;

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
    msg.setTimeStamp(0.59894811847102);
    msg.setSource(29523U);
    msg.setSourceEntity(187U);
    msg.setDestination(47171U);
    msg.setDestinationEntity(4U);
    msg.state = 170U;
    msg.plan_id.assign("ZVEUSICHKPTNUOXQQXPWNTMNPKWGMHISMGSAYLUWUBRRGKFTLSQQXPPDGVAUZFLMIPFDSWRDEDUWGOZCLREHLGVJLRAZBSODYHFYFDTBXOSZWEDFKKXFHQHEJZPGRPVFIKAYHEBMIRJOYCLJYEGYSBJNGQNTRAQXUNJZGXLJPVNAUESKZUIRTJJPA");
    msg.comm_level = 7U;

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
    msg.setTimeStamp(0.4861804050877725);
    msg.setSource(26555U);
    msg.setSourceEntity(100U);
    msg.setDestination(36355U);
    msg.setDestinationEntity(106U);
    msg.type = 25U;
    msg.op = 141U;
    msg.request_id = 46846U;
    msg.plan_id.assign("UOJQGWVCVPJRDIBVCALYANKYVECQIRRJRTHNSHOBHDOEZFBFPKYDQWKOUKKZBMTWLTUFSDSHDKAWUISQEVWHNIZCAEOPRTYRELNPVUNQXTLIJXOETVQXJGZFZYDKDUATBQQOXWINLCRWZVFXGHLPYQOQWJSUACLVCENDAXFMBRGUCDYSOTVHRMMXETGPXPILFBGNUKMBEAFIYSFMMGLZUNS");
    IMC::AcousticRelease tmp_msg_0;
    tmp_msg_0.system.assign("UNEGBDXQAEYTZZIPJXWSUPBLBQYKDLAGEWJH");
    tmp_msg_0.op = 56U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AIJLXPSHXLWQSACNFDWUPFYBDBMJXRTUXZZYIZKFTXZHFJNPBIWFUVTYRVGNZDGEOAGOCFIYKMMRDTKDZJQCQDWARWTOJASIDUSJWOCEUCLTYKXZIGFEKNLGBYSOHVYNMQJNUTDEGJICZPTLPRHVMBNTEKBIGOJWSIAVZRMLQHVPNBYFC");

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
    msg.setTimeStamp(0.9461381940919107);
    msg.setSource(2995U);
    msg.setSourceEntity(22U);
    msg.setDestination(44196U);
    msg.setDestinationEntity(59U);
    msg.type = 139U;
    msg.op = 25U;
    msg.request_id = 7467U;
    msg.plan_id.assign("DOTCMDNIHLMWYEPZIYFSROUCZYHJSLFGBHQJGBXLUPOTKPKDOTNXTTXZXWAAUGMFJPAFMGOAYZIDZBFVKANHVFKUIJITVSBGHVFKICWEEQZMWVLXDMEEFNZNCLNJGDHGKJSNAEHGFQDBDURITQJSWYVBJPXSKLLIWPTXVQWXYTEUYCWUO");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("HABFCTXVEKNFGIRARJPCLTURZPWTXWWEYFG");
    tmp_msg_0.links = 3035500293U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DMIMUHMRAIFQZPOKJPOATDJOXHHUREWITLASMSKPBIWHSDYQZWAIXZGBSPFUCEVMBMDPHGBVWEFMDHENQJHOCALCFMQLZBBBRYEASJKEXVKIOXJXENCYETHGJFCWYSUWUUDWCQLILPTWZDVGPKDONGYOERDNZRZLXRQLSPH");

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
    msg.setTimeStamp(0.3961317086236683);
    msg.setSource(47612U);
    msg.setSourceEntity(205U);
    msg.setDestination(30562U);
    msg.setDestinationEntity(49U);
    msg.type = 43U;
    msg.op = 152U;
    msg.request_id = 54584U;
    msg.plan_id.assign("DTWOGVJBRRRITVGWUAVNXLBJOK");
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.5345139836584589;
    tmp_msg_0.v = 0.6214582099065841;
    tmp_msg_0.w = 0.7625312566789744;
    tmp_msg_0.p = 0.3837423828176625;
    tmp_msg_0.q = 0.17330524590646945;
    tmp_msg_0.r = 0.44910582402041;
    tmp_msg_0.flags = 251U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GZESFUXCLUQDWBMXGOKCQPTQTKJURGVVSHIQZVRVXJFPEBUECIYRUOVDFBCAJTMBKUCQAGIPFCWAWRWSSBJOOYLPOEUQMXQDPKHJIZBLWRTHCMVFRLXHVASFHGROZHPAXWGPAGFNRHNSDTAYISNVOXASWTBMKMYHFCBEZDZCMDLHLLKKJLUCIYTISNJYLYN");

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
    msg.setTimeStamp(0.7676537985105907);
    msg.setSource(2937U);
    msg.setSourceEntity(104U);
    msg.setDestination(25991U);
    msg.setDestinationEntity(107U);
    msg.plan_count = 38235U;
    msg.plan_size = 2528029286U;
    msg.change_time = 0.3422178658464129;
    msg.change_sid = 13739U;
    msg.change_sname.assign("LZBHULFJZRBEKVQXVLJVRAYDNCTIYYZLGLI");
    const signed char tmp_msg_0[] = {-40, 107, 99, -103, 11, -96, 3, 106, -18, -90, 71, 112, -27, -88, 120, -64, -123, -61, -40, 36, -17, -103, -22, -48, 26, 121, -96, 0, -51, -79, 99, -94, 89, -123, -4, -7, -20, -21, 60, -100, 35, 0, -96, -84, -105, -110, 78, 79, 22, 8, 114, -79, -45, -122, 94, 31, 119, -73, -8, 9, 53, -24, -95, 70, -45, 43, 14, -108, 34, 6, -56, -45, -99, -66, 76, -11, 106, -55, 88, -10, 23, 67, -100, 75, -22, -78, -25, -84, 59, -117, -113, -41, 17, 101, -116, 9, 19, -108, -55, -110, -47, 28, 2, 43, 84, -34, -92, -69, 3, 102, 50, -42, -3, -80, -48, 38, -66, -42, 34, -123, -3, -92, 2, 0, -48, 10, 70, 89, -67, -95, 109, 81, 82, -95, -42, -112, 93, 111, 117, -6, -31, -123, 93, 74, 38, -25, -44, -81, 64, 47, 2, -35, -64, -83, -18, -5, 31, -104, -59, -38, 61, -37, 43, 100, 70, 52, -128, 27, 124, 21, 14, 99, -44, 77, 123, 108, 18, 119, -1};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RNXAZHGTYYBVFDDMSZGLBOUCUXZSMSKLDYWIZHOPIKGOJXDMFGHTFUDMNJFPTHSLQW");
    tmp_msg_1.plan_size = 1608U;
    tmp_msg_1.change_time = 0.6784727023535929;
    tmp_msg_1.change_sid = 5590U;
    tmp_msg_1.change_sname.assign("KPJMPXVPKEEDFTOGLXDMJCFOJNPYATCTUFADLTDPGQZVSZFIVNMSYCNFEBYGNIJYLJABHHKSLMAACEKZAHRBEJBEYHHBYNWLHMYVGUFUVOIOUTNCWRGZRF");
    const signed char tmp_tmp_msg_1_0[] = {-19, 54, 28, 76, -2, -71, 37, 94, 108, 42, -84, -5, -122, 51, -94, 16, 104, -5, -11, 33, 105, 65, -124, -1, -56, 14, -119, 27, 84, -24, -71, 33, 105, 47, 100, 47, -30, 76, -100, -59, -52, -66, 97, 1, 88, -83, 71, -81, 24, 111, -44, 15, -93, -44, 32, 32, 122, 106, -33, -3, 61, 121, -68, 7, 88, 121, 76, -107, 50, 16, -36, 7, 51, -16, 26, -27, 106, 17, 105, -31, -105, -69, 24, 123, -100, -89, 77, 53, -74, -25, 66, 29, 53, -49, 69, -46, 88, 122, 116, 9, 95, -95, 4, 19, 23, -7, -40, 73, -91, -34, 54, -2, -114, 72, -54, 66, 35, -17, -22, -31, 39, 108, -42, 35, -27, 89, -65, 119, -14, -49, 11, 4, 82, 23, 33, -26, -21, 106, -41, 124, 98, 102, 5, 19, 21, -39, -115, 106, -92, 8, -82, -113, 22, -100, 76, -97, -43, -97, 83, 0, -100, -65, 74, 114, -11, -35, 99, -77, 48, -66, 7, 121, 44, 49, -110, -36, -64, -71, -57, 3, -53, 83, -66, 110, 119, -68, 23, 89, 43, 30, 92};
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
    msg.setTimeStamp(0.4558794260354626);
    msg.setSource(43248U);
    msg.setSourceEntity(51U);
    msg.setDestination(43829U);
    msg.setDestinationEntity(96U);
    msg.plan_count = 10272U;
    msg.plan_size = 3841904486U;
    msg.change_time = 0.7239443060574574;
    msg.change_sid = 14921U;
    msg.change_sname.assign("FRVPDWGYCIK");
    const signed char tmp_msg_0[] = {-7, -17, -26, -126, 93, 108, -48, 86, 2, 39, -24, -10, 85, 53, -28, 12, -123, 55, -37, -23, -44, 5, 46, 93, 75, 40, -77, 121, 121, -87, 119, -12, -95, 43, -78, 99, 117, -44, -7, 96, -34, -76, -47, -119, -11, 58, -58, 6, -13, -70, 8, 10, -45, 66, -107, -98, -113, -66, 85, 101, 58, 25, 107, -4, 98, -41, -56, -59, -5, -77};
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
    msg.setTimeStamp(0.5061036165966913);
    msg.setSource(29728U);
    msg.setSourceEntity(113U);
    msg.setDestination(19882U);
    msg.setDestinationEntity(234U);
    msg.plan_count = 57481U;
    msg.plan_size = 454913466U;
    msg.change_time = 0.16708884967645043;
    msg.change_sid = 22202U;
    msg.change_sname.assign("KFMJJQSDIGHNNJBFRYIXTEAOVYEKCHPPPZBIBVQSYUUFXMQJOVMCYYRHNNXQYMNRZAQKWACUWGERRTEHEJFSVNFBRCPODSGDEAUCERIRWHJPTLOZFGNGMULDBDXZSMQMLXIEJCKVTPNGAAQSPKCTLFIYIGVWKWZLLCWDJQYSTFWSLJBBOUKAKZDPFIADBEVXPAXQOHULLXTWUKFZLUSBIAXDSZIBWVKHYGHYPCGVT");
    const signed char tmp_msg_0[] = {-118, -89, 1, -19, -16, -22, -35, 30, -115, -23, -62, -16, 100, 22, -97, -103, 104, 79, -101, -117, 123, -83, 5, 84, -49, -25, -48, -90, -41, -124, -12, -9, 66, -24, 59, 5, -103, 49, 102, 98, 53, 114, -91, -45, -58, 89, -109, -28, -19, 6, -51, 122, -70, 22, -33, -36, 4, -1, 46, 118, -14, -53, 81, 27, 126, -95, 72, 11, -35, 75, 17, -54, -66, -128, 84, -47, -103, 28, -103, 113, 50, -89, -87, -72, 68, -13, 47, 122, -68, -105, 64, -14, -96, -54, 80, -82, -87, -73, -52, 109, -110, -51, -67, 64, -9, -122, 7, 94, -77, -116, 36, 6, -65, -109, -84, -89, -84, 28, 67, -122, 108, 33, -13, 122, -9, -92, 47, 104, -111, 37, -113, 49, 79, -11, -85, 5, -21, -91, -88, -35, -86, -104, -122, 67, -128, -96, -25, -12, 75, 65, -69, 27, 35, -33, 100, -102, -124, 78, -13, -74, 89, 21, -61, -111, -113, 49, 104, -19, -10, -118, -3, -50, -43, 123, 53, -124, -111, -119, -53, 17, 112, 125, 122, 109, -110, 13, -95, -79, -75, 59, 42, -113, -27, -27, -75, -36, 34, -57, 16, 117, 16, 81, 110, 109, 33, 62, -96, 40, 0, -27, 64, -46, 106, -117, -116, -45, 51, -18, -111, -41, -75, 112, 13, 113, 35, -100, 101, -46, 81, 56, -1, 50, 94, -61, 91, -41, -67, -17};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KOXYKKWGCMIBQRMEJQUMXYXIEPJJOOLRTDINNZADW");
    tmp_msg_1.plan_size = 48313U;
    tmp_msg_1.change_time = 0.5039380356239839;
    tmp_msg_1.change_sid = 39182U;
    tmp_msg_1.change_sname.assign("CLEORYZCMTIDGBFLSEIWJXYPDICBMHVA");
    const signed char tmp_tmp_msg_1_0[] = {100, -67, -32, -101, -43, -63, 122, -128, 41, -13, -1, 53, -2, 44, -126, 62, -99, 81, -19, -16, -47, 102, -69, 11, -73, 98, 121, 89, -44, 18, -95, 71, -95, -59, -19, 37, 64, 88, -117, -8, -116, 63, -105, 87, -127, 7, -2, 117, -3, -9, 40, 105, 98, -87, -95, 25, -94, -39, -86, 106, -60, -83, 8, 26, -109, -100, -49, -3, -114, 1, -55, 104, 90, 44, -84, 84, -102, -105, 23, -126, -52, -108, -54, -12, -106, 44, 37, -25, 113, 60, 40, -30, 40, 18, -27, -112, -23, 2, -88, 124, -74, 18, -106, 60, -11};
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
    msg.setTimeStamp(0.8583550963468581);
    msg.setSource(2728U);
    msg.setSourceEntity(120U);
    msg.setDestination(61675U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("RDWQSQYWCEJGGYMJOMEUSIKPPUAGMZBRLFHJXSMGVJGXLRAMBVZHWIKAYPFUOFRJDRKSFETVWYARJHTMZUCUTEMNNWWAXVSZXNBTYCRCLNDELZHWQHFMXFNQTOZQXUKFHNTVXJVCLORTDBBFDJBYCTIOKLBMGOKPSHVQDAZSIKKGQYRHPNBVBGYCPWLUNHYEDSFKZOGLNPWPREQVXJBDQIYSTMEOWL");
    msg.plan_size = 65041U;
    msg.change_time = 0.7340337071355075;
    msg.change_sid = 51579U;
    msg.change_sname.assign("HOISZZLCCJRLRPUXZQVTQZYBHJRAMUOHNRWJRJCFSSQUWZEGHOZCLDIPFIBPOTMJVXUEXNONMSXGDZYVXWMPWBDHQHYTHLNOVTTOTBMDYUERITUKXGXATKLQRUDCKEGVRSPOSEXOPGDAWJYFBICNMILPBHCIWDDYFFSONVVPQEZITHFLAFBJNEQYUYEA");
    const signed char tmp_msg_0[] = {103, 4, 113, 114, 115, -58, 106, 27, -95, -27, -5, 14, -127, -108, 30, -116, 25, 60, -92, 52, -37, -19, 25, 72, 110, 8, 5, 57, -17, 2, 122, 85, 118, 49, 85, -73, 9, 87, 52, 81, 101, 44, 125, -89, 36, -14, 13, 111, -21, -67, 42, 105, -17, 29, -31, 46, -33, -107, 95, 63, 102, 50, -93, -6, 53, 101, 29, 50, 84, -121, -45, 95, 41, -64, -37, 126, -62, 28, 33, 52, -62, 78, -22, -123, 25, 89, 49, 85, 114, 74, 8, -50, 117, -54, 50, -33, -107, -73, 114, 56, 6, -46, 43, -113, 55, -44, -11, -36, -86, 32, -72, -41, 30, -58, 66, -58, 34, 25, -65, -97, -41, 45, -16, 68, -85, 37, 38, 92, 33, -9, -82, 91, 64, -70, -27, -84, -36, -73, -28, 88, -88, -4, 32, -123, 91, -25, 90, -95, 93, -128, -125, 25, -27, -5, 17, 52, 115, 60, -125, -10, -49, -101, 116, 111, 11, -69, 109, -111, 87, 77, -97, 64, 123, -23, -18, -33, 99, -63, -5, 62, -9, -79, 32, 79, 45, -67, 17, 85, 21, 13, 55, -90, 107, -100, -117, -22, -74, 116, 114, -55, -112, 85, 113, -81, 124, -62, 29, -111, -124, 11, 80, 42, 118, 29};
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
    msg.setTimeStamp(0.9290217751846696);
    msg.setSource(25499U);
    msg.setSourceEntity(5U);
    msg.setDestination(4377U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("JFJETQZVQEPDPKNKAUWIIUROZPPPJSIUPIHXECHMDLTLDKLTOWJWNLKEFDRKBVMCUMCHAXRDRUSYCNXXDBIGORMSUNBMJBUFASNVETQLTTWQYIQNWAUERPGSBVIGBIBMAQMAHR");
    msg.plan_size = 24973U;
    msg.change_time = 0.12035019050329121;
    msg.change_sid = 10017U;
    msg.change_sname.assign("XUSOQGDHOOMNDEHRYHORXUIRHRLZBEDXCDPLKWFAITTZPLQZSBDLGMYBNFOVTZQKWXZVKUSIPDGBAPMNYXXYAUELPVRRXIBKTHPTLWSXNFEODWKBURVPWGTTZHFNTAKEHMJBQXGQSKKCTMYCJGCSBRRUXVJJRNIFAUOEITDWLIUCUMHEYWSUVBJGPOAFFPEVCZMASVENFMJJQHVZSAFYEWLQGZJCKFCNJBYWKQLSQDZYGNI");
    const signed char tmp_msg_0[] = {115, 51, -5, 74, 90, -63, -44, -94, 110, 10, 100, -93, 80, -36, 31, 43, 9, 52, -77, 84, -105, 33, 68, -86, 23, -67, -108, -76, 33, -15, 115, -45, -75, 32, -127, 85, -125, 107, 24, -62, -80, -6, -78, 112, 70, 99, -117, -13, -123, -18, -119, -45, 53, 119, -108, 11, 38, 108, 81, 75, -53, -111, 80, -73, -57, -44, 92, -2, 55, 40, -114, 48, 79, 123, -34, 119, -64, 28, -24, 29, -111, -101, -106, 98, 70, -15, 79, 63, 10, 123, 7, -105, -123, 37, 2, -88, -10, 125, 2, 118, 74, -61, 9, -123, -64, -23, -57, 9, -14, 93, 53, -106, 97, 51, 119, 85, -100, -91, -99, -26, -41, 30, -30, -60, -82, 44, -20, 6, 69, 108, -30, -40, 81, 35, -114, -9, 118, 118, 31};
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
    msg.setTimeStamp(0.5001981839592099);
    msg.setSource(59387U);
    msg.setSourceEntity(136U);
    msg.setDestination(21018U);
    msg.setDestinationEntity(151U);
    msg.plan_id.assign("ZYBJHWOONUSERICPOUWGARIASLNXCWNLDLFOQJIVRETTPNTEVPDIYVJAXDXKKSAEHZWRSTOJHFMOLHRABBCCDTKQVGQNCQFVTDNGJKPRMVNEYWDUCFSKKUYBJIXYHSRBNVZHFSFQTFEYMKAVJLKL");
    msg.plan_size = 64142U;
    msg.change_time = 0.06188609495511199;
    msg.change_sid = 47633U;
    msg.change_sname.assign("QMEAXTCEYAYPCL");
    const signed char tmp_msg_0[] = {-48, 84, -44, 66, 59, 53, -26, 71, -58, -57, 62, -47, 55, 104, -77, 23, 96, 38, 25, -57, 67, 70, -49, -116, 105, 110, -117, -61, -39, -97, -97, 33, 61, -34, 7, 96, 100, -11, 6, -35, -88, 7, 20, -99, 93, -51, -10, 124, 10, -27, -51, -6, -64, 44, -105, 77, -109, -63, 45, 0, 84, -27, -60, 71, 58, -62, 123, 36, 25, -33, 32, 71, 19, 91, -121, -23, 63, 84, 82, 62, -95, 125, 88, -4, -23, 16, -16, 27, -42, -93, -42, -44, -104, 120, -96, -53, -15, -41, 55, 91, 80, 1, -83, 72, -30, -21, 0, -55, 46, 115, -94, -27, -127, -110, 45, 105, -103, -75, -14, 61, -82, 45, 55, -34, -45, -121, 103, -67, 61, 7, -81, -108, 97, -12, -56, 118, -33, -91, -7, -37, -81, 100, 12, -49, -105, -44, -90, 60, 41, -43, -33, 97, -17, -90, -9, -21, -59, -57, 10, 47, 28, 41, 67, -38, -61, -95, -12, -8, 54, -107, -13, 9, -73, 58, -87, -9, 80, 72, -68, 112, 8, -9, 29, 78, 34, -13, -100, -15, 112, 28, -108, 80, -127, 37, 54, 71, -110, -70, 30, -53, 63, -125, 90, 116, -49, 92, -112, 56, -60, -94, 49, 53, -28, 108, -8, 118, 119, 102, -20, -79, 97, -12, -1, -56, 23, -119, 122, -109, -45, -27, 103, -58, 28, -66, 120, 24, -23, -62, 41, 65, -43, 15, 38};
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
    msg.setTimeStamp(0.013042321724932249);
    msg.setSource(12053U);
    msg.setSourceEntity(128U);
    msg.setDestination(45299U);
    msg.setDestinationEntity(150U);
    msg.type = 67U;
    msg.op = 201U;
    msg.request_id = 29586U;
    msg.plan_id.assign("BELLJGXUFRLMSANYETEQHLBHSLFDHKCUABTTHUEVKFEMTVEZVQYHOJRFVJSDVRZSWBMVUCKALZWXIICHRIMOZFNGSJQKFKCUBDECOXMXSRQHWXGYQIWMIVTRPFQONDIGRRLLUPACUUFGPVGHRKOZMWRNXJPDKWZOLYXBJQDC");
    msg.flags = 17968U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7974144102501008;
    tmp_msg_0.beam_height = 0.12315700580340516;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SWNXAQCPLGWLDEVONUZJJGCQNMJJUFLCAPVAZQTXJELQYBXUDHHICAVMYDPYAVSRQCFMVDKGTWDVTDDNSWLMUXHTYFXSIARXIOWUHQXZYYXSUMUYBDRVRKREJABGLNIQHNPRUPKAPKTYLXQRHOTONUZZURCYFHMGJCNGSIKWPWLOZRBAXGCPEAIGINMTFTKFHSEQOIJHBBDGHQTEISKJPIBSYLOMGCDZOEMSTPBKVVEOLNV");

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
    msg.setTimeStamp(0.650061151662222);
    msg.setSource(50284U);
    msg.setSourceEntity(203U);
    msg.setDestination(48114U);
    msg.setDestinationEntity(91U);
    msg.type = 254U;
    msg.op = 242U;
    msg.request_id = 15468U;
    msg.plan_id.assign("YGTFLCLMEDKFLLVTLTVZPYGMNSBSAKOBFDKFZCSEJCZUANMQGUSWRZXDVAUPPEALVQDACKOWJMNSJNIFBUGDCZQUVECCXXHXUONDPTIFVXYLRSMCWURYHFBNVSYUMGGBJQJQEYJREJOXGTPFKKZYEGWUMOIHTBUYQORBXQJILHPFSWWFOZSWTKOKXHIKPDYXQ");
    msg.flags = 40294U;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 174U;
    const signed char tmp_tmp_msg_0_0[] = {54, -68, 116, -65, 27, -118, -1, -125, -46, -42, 117, 73, 126, 82, -16, 89, -94, -83, 60, -25, -28, -59, 87, 78, 115, -96, 103, 92, 28, -114, -89, -128, 117, 112, -49, -108, -51, 42, 4, 36, -3, 37, 92, -118, 76, -60, -82, -67, -58, 12, 93, 120, -72, -74, 5, 10, -20, -68, 49, 91, 20, -10, -59, -112, 24, 6, 77, 110, -115, -73, -24, -15, 109, 111, 85, 12, 52, -31, 24, 123, 88, 85, -121, 79, -96, -50, 0, -47, -31, 78, 20, 89, -11, -122, 69, 0, -86, 28, 102, 116, -19, -27, -49, -17, -45, -49, 45, 63, 81, -20, -115, -9, -92, 39, -40, -104, -75, -107, -98, -93, -12, 50, 53, 85, -49, 20, -84, -2, -118, 68, 88, 118, -103, -57, -99, 10, 73, -95, 23, -58, -26, -94, -84, -18, 71, 13, 44, -97, 108, 18, 55, 57, 46, 48, -102, 5, -128, -93, 64, 116, -34};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SFWPRLMRTMORPHWSTAYIMZFJOTIPAPUKMYZNIIBYYUKWCNXGOVKIBADGQSEWVQURXCMLAOCNDADNKKCVSLRUSVJHTNDXGILKLASMDYJNJLGFGKLOORTDNBCPLINVZFGMEEYSIZFIQHCVWEKQCOFSBBBMCHYBEHEFAJQXSFROHWGZRXBUJDRTUXGTPUD");

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
    msg.setTimeStamp(0.37470093422627926);
    msg.setSource(43840U);
    msg.setSourceEntity(206U);
    msg.setDestination(41589U);
    msg.setDestinationEntity(220U);
    msg.type = 210U;
    msg.op = 140U;
    msg.request_id = 52423U;
    msg.plan_id.assign("ZZNREFAWIXMREKT");
    msg.flags = 8542U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 42883U;
    tmp_msg_0.lat = 0.06228427749002785;
    tmp_msg_0.lon = 0.9220141839937855;
    tmp_msg_0.speed = 0.3439392662537084;
    tmp_msg_0.speed_units = 13U;
    tmp_msg_0.custom.assign("CXWWLPZXHTOMGFNBNSNLNSOHWHIOOUHPMMFUVYZQZBICRANNRLQWXEKWCMJNFJIAJULNBQOMIEDJHLYVRDXFBKDXIIWOEOWVZBZWOSKYVPDABPMKHQEUSFZBYUGYVSHXYEJQVVRXDHDRGXEYSUKGFNCX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZTAKVCGIFNNRJLATWQHYGBSPXUMZLKEHXOBVVNVELRSDUJTJMOYQMPOJSMEQPAIEUIBAIMKRMRWGMSHVTMJ");

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
    msg.setTimeStamp(0.7890207660932389);
    msg.setSource(58564U);
    msg.setSourceEntity(117U);
    msg.setDestination(56868U);
    msg.setDestinationEntity(248U);
    msg.state = 105U;
    msg.plan_id.assign("PXVNPZQLBLTKUWFUTMIKWGFTWQHHUOBECDCUAMNKMNXCAASKYIVZRDIHZJLVLIWFRSWYVHRSCHDJHBHIDQEIEQRFQPZKGXJNEWXUMGOGDLZLIQYNJPDDFEWAKXMRSKBXFGVLYTGFTSPSOWCSQRAVNNXAVDHSYZHDKOKIQTRYEVAZYZMMTUVGYTXMSODFPMVBOPLQUJCWGBFFBKZORJXURBJBUALQJGTEPEUOCZECONTWLCBGYHXIJJNYMI");
    msg.plan_eta = 1010668985;
    msg.plan_progress = 0.7995783703782327;
    msg.man_id.assign("MQHIANGGELYXGQIOMKUQZHRJJWTGHLIEJPSDTKDIYUJHIMDBVEBXASSOKJUWYOBHUPJMRBFSFVYTNICTAUSHYUKYBQRXBVZZNRZLUAQONCHGOSCQTVXLDLILJEEOEVR");
    msg.man_type = 32592U;
    msg.man_eta = 751018201;
    msg.last_outcome = 99U;

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
    msg.setTimeStamp(0.20795587913172608);
    msg.setSource(40068U);
    msg.setSourceEntity(68U);
    msg.setDestination(26885U);
    msg.setDestinationEntity(2U);
    msg.state = 106U;
    msg.plan_id.assign("ZQWCIMQHMFHTRRTCMRAGODKPKALYPCSOKGWODUPOMKWSTWGYRFGMSTVEFUJREPNOXZVYLKPFYCFDGGNIBGLIZHCECSNYUBNZKLEMXQOTZWHCAFEYQTSXTIDBNABMLXDCFRHJYVOXLRAKQLXWNIENCASTUPBJTUBDJKIOXWZQHBEEURTVNVSIIUAZJLPZYGWZHUGHZEQMQUVYSVLWMDARWDBAJBAVRHJ");
    msg.plan_eta = -1279603152;
    msg.plan_progress = 0.12674231378601641;
    msg.man_id.assign("PLAROLXIYVUBZBTMFDSWMZQYCTPBUJZECSPIBGBHTXKICMOYXDKHUWPZTPBSKMZXSAJCIAXJONWIOHLAAWNNKOVRXHNLNNVUQEGAZSGRZSATJWHEYRTCKJWEQDMMPFEMURHHMDTJIVUDNJN");
    msg.man_type = 42548U;
    msg.man_eta = 681212347;
    msg.last_outcome = 204U;

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
    msg.setTimeStamp(0.23282844613569598);
    msg.setSource(19986U);
    msg.setSourceEntity(230U);
    msg.setDestination(16905U);
    msg.setDestinationEntity(75U);
    msg.state = 107U;
    msg.plan_id.assign("SHEQCPTYPBNELZZUHXRWXBLTKYLYTFPKFRIPIDHFCUQVBREIYBIGYYWGGSDARAOVNUAMMOIGNKOMOWBXBNUAWMJKVXDASJDZYULSCTZQTPQCHARPCWINULBJEGSSFGOHUE");
    msg.plan_eta = -614616733;
    msg.plan_progress = 0.5268548932574897;
    msg.man_id.assign("NJETHZVFOYMGTUYZBJIRTCFFVJSMRXOZMKNDMRRDMHWVZAAEOLQYLAHWRGJULGCOPVUYRSIINQAHQRSIGHWZKXGYQ");
    msg.man_type = 5758U;
    msg.man_eta = 1633406403;
    msg.last_outcome = 208U;

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
    msg.setTimeStamp(0.32911286292541475);
    msg.setSource(11267U);
    msg.setSourceEntity(10U);
    msg.setDestination(26800U);
    msg.setDestinationEntity(0U);
    msg.name.assign("JTAFQIVTONCPDVUTMNRUZEJWVLEISPIOAOARWJYGRHFBXMMBBBWGIBDPVLPINOVCGIYKFKOPRGTZDBDSAFEJCZNGTPSRXYKZCDHHATTBQYLPHXZIRUYAXFWLRLPBKQAOMSCIGZISSMBXYMTYSLUQKVJQXFKLZZKJVWCPUQHPNDJAOLTMYXTQJBXKYGXCDWEJCCIOGDNLDEMGFVJNEVZRRUFMSWEUMHNEQHSQKWERAGFUEYKNOAFSOHHND");
    msg.value.assign("NEAIGEPCMPRGZEHNTKDVJTHDZVLWYEQNCBCQTFWFRUOSXXEBTMXSIGNQJBPZMICRWELJDYBLMYVBUXYFCAREKKPOBDXYIHFSJGHSMUKQZCYM");
    msg.type = 176U;
    msg.access = 221U;

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
    msg.setTimeStamp(0.508587302724701);
    msg.setSource(9303U);
    msg.setSourceEntity(166U);
    msg.setDestination(19131U);
    msg.setDestinationEntity(189U);
    msg.name.assign("JKKEQPGPZGIBNGSDVIJWFLMTCEFMJIYAJQUXJUAHIUFTIRNKVLACSITPARDWLZPRTMGLRMQNFUBESDRXLIZTNZYQUVWSBXEFHLYPWGQSAFHRCHCYV");
    msg.value.assign("ERVPRJGCOFFWZMTVEUNRBAYVFBWIKQKJNWVJUUJGHBJCDHIACPELMDCZXBWEHXAOVSXVLNHXNOSKTKDZMMCRXTSADCQWQYBNHEJREVQLAVRWHGKVXZGFFSLLUYPPLCLSJMOGDJUTRWISGMOXMYUJEADDESZUNPPBMVGOHZUEWNYPDOFQTEIFLOKTUIKCIKPHBHYJZXPRXLTNQMBZDQDTCKWWGGTCFNHXKLUOTIZOPRFYBBSQZYNMAG");
    msg.type = 81U;
    msg.access = 126U;

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
    msg.setTimeStamp(0.48612806267066433);
    msg.setSource(16850U);
    msg.setSourceEntity(1U);
    msg.setDestination(50025U);
    msg.setDestinationEntity(78U);
    msg.name.assign("DKLEIXHTVPLTTYDVHCUIPWFIZSTXOIBOHMCZBDVUTAQXKYNJARSOZRMQEVXFRWTKHYQOBPVTFZUJOKYJPECLCGMGAMEUUIGSWWSAURVNNQRHXPSZPAOZQBNIEKVYMENIPLFDMCZJCRVWFHYQYYVEUNFNPXGHZATBTNYPSFGGRLDORMCWBNLEBVKJIJMUW");
    msg.value.assign("CRKJLJFQJCLEVTGQBMFKGVVVVSXUZWISQLFBANGOJKTQZHTUKFKNRETADKHCUMLSWAVZETZBLSFSRLYPDIREBPICHUNAQECWCHDDZTELEMUMRHAPLIZLWXHDIPDDMMJZWEOORXVCTYDVFPWKHOBSAPYUQQAELAMBSGHJOFGHQOAIYBOOAQJJVRBMERYNSCNMVDYPQKSKJDOOFGIZHXGPZNUGUZRNPYXNWBGJWPKXCXXUR");
    msg.type = 223U;
    msg.access = 43U;

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
    msg.setTimeStamp(0.9913499667911356);
    msg.setSource(37485U);
    msg.setSourceEntity(200U);
    msg.setDestination(3341U);
    msg.setDestinationEntity(15U);
    msg.cmd = 111U;
    msg.op = 192U;
    msg.plan_id.assign("IMKGGCIXMBETKBXJIPZPDNKIKUXUMZOCSYVTUPJTPYVUOSWZJVFATJNEDZHHPESSLFUEHYTMTOXWSLFPLUH");
    msg.params.assign("LAOUGEHXQJURPMEVILPEOQQHUYQIWJMGCGLOURNNOHDDOPXNHUUSIFLCXHYERUDYGWILE");

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
    msg.setTimeStamp(0.18819128842878652);
    msg.setSource(42049U);
    msg.setSourceEntity(137U);
    msg.setDestination(11386U);
    msg.setDestinationEntity(171U);
    msg.cmd = 228U;
    msg.op = 162U;
    msg.plan_id.assign("ZMOIPBEUFHHSAENKXRTAW");
    msg.params.assign("CLOAYYQGRTCUMNPOZSDKTWHFEMKNDPXGRYYFWVH");

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
    msg.setTimeStamp(0.1941775478186789);
    msg.setSource(31910U);
    msg.setSourceEntity(106U);
    msg.setDestination(29787U);
    msg.setDestinationEntity(38U);
    msg.cmd = 38U;
    msg.op = 191U;
    msg.plan_id.assign("CGGPWSJKVIASMYAVLEVJTEYCRQSUPFMTQIWXGKTLCOZLURUEYGNVYZOAWYLQOXBSQECLJKMVDSRKRJQOFXOUGIGEMQAARFUBVUPPZWZKHKWRDWCLHWJHZHTDEWAFSEFLMSRBBUNTBSIJFHXGIPCX");
    msg.params.assign("QGAPTUMZNWVRWCLWBMOADIWWUBNKRKJWZTOXSUOEFDKERQGYKZILXOZMYQSDUDZEIHDQHFCQPRSQJSHGYROEOGNCGX");

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
    msg.setTimeStamp(0.5072195235257055);
    msg.setSource(10203U);
    msg.setSourceEntity(67U);
    msg.setDestination(11877U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("PDUUUDXAORGVCBKUFHPXAGGPQWSAVSXMKBXTWVIFMQJWHHLRTRGOMOEEETVDWVRYBBKEFBPBXOESECZLTNYFMLGKNLSHENYWDAXSOBSQGROKPZPQAHYRHZHHLWIIDYBSJYHJNFCGCCZLDXXZQREJJFQPZADVOBDKNVWMSONRIOPXSIFUWYFTMFDZJADUTP");
    msg.op = 105U;
    msg.lat = 0.08944457822069196;
    msg.lon = 0.2671031678313397;
    msg.height = 0.8793350481616194;
    msg.x = 0.021558449490433618;
    msg.y = 0.3505336526609182;
    msg.z = 0.8043513045655375;
    msg.phi = 0.12807573168585218;
    msg.theta = 0.6754296851729339;
    msg.psi = 0.19314997841041426;
    msg.vx = 0.4413989949041919;
    msg.vy = 0.928209062385439;
    msg.vz = 0.05098486256617374;
    msg.p = 0.12274725870373504;
    msg.q = 0.38488155805729485;
    msg.r = 0.6933387882593757;
    msg.svx = 0.4503931670127873;
    msg.svy = 0.1714396184717346;
    msg.svz = 0.06202648463889149;

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
    msg.setTimeStamp(0.034123259333029954);
    msg.setSource(19139U);
    msg.setSourceEntity(182U);
    msg.setDestination(37024U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("ZRROMCXSBHQLTFWCBVPIYNFGDECFOKKYGFSSAWPHVVTASSPAUUDSKZNECFNMEQNIVDQLWIVGKJTFDYNKAECJKENLSPXBQTT");
    msg.op = 131U;
    msg.lat = 0.5862188478701246;
    msg.lon = 0.17361746146617052;
    msg.height = 0.44466642219784247;
    msg.x = 0.07110953540897391;
    msg.y = 0.9117405456656713;
    msg.z = 0.5752183211782144;
    msg.phi = 0.9451949783574981;
    msg.theta = 0.3195622826392712;
    msg.psi = 0.6388954417783401;
    msg.vx = 0.9578818411581308;
    msg.vy = 0.1906018841412318;
    msg.vz = 0.2115283655419583;
    msg.p = 0.03571662775500284;
    msg.q = 0.7407633874333437;
    msg.r = 0.5636406341223215;
    msg.svx = 0.39699934867922415;
    msg.svy = 0.40830471988144235;
    msg.svz = 0.20603587435544646;

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
    msg.setTimeStamp(0.44416513080541853);
    msg.setSource(51548U);
    msg.setSourceEntity(161U);
    msg.setDestination(51432U);
    msg.setDestinationEntity(101U);
    msg.group_name.assign("NSORLXOZYAIBDGVYRXBLBKRYIRJEWJVZJCHESPMJQISCZDBWTECHYNCPRNLCSQQLQWCBHURKDHMUYNSPXGPINQXDRKNEUVPTFCTHZUEXFMYSVMJLDSTXXZBFOHSHWIFZNAOKJFZUWYLVXOFMGLEPOXGNGNYXDFIWEVTMBGSTG");
    msg.op = 97U;
    msg.lat = 0.2651401185878338;
    msg.lon = 0.11503942087631713;
    msg.height = 0.5795764752297504;
    msg.x = 0.8914033032607055;
    msg.y = 0.08710961591202349;
    msg.z = 0.8335917164164559;
    msg.phi = 0.6432981479367964;
    msg.theta = 0.4444552002151788;
    msg.psi = 0.15915045222615987;
    msg.vx = 0.9601408382795602;
    msg.vy = 0.4511005605062136;
    msg.vz = 0.10730450166375471;
    msg.p = 0.5238317107555294;
    msg.q = 0.4661251427511538;
    msg.r = 0.9237479700824959;
    msg.svx = 0.49142572500393156;
    msg.svy = 0.8139675767499605;
    msg.svz = 0.6780423106427149;

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
    msg.setTimeStamp(0.19657233016041287);
    msg.setSource(65463U);
    msg.setSourceEntity(208U);
    msg.setDestination(25383U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("XTLOBUWLSKFEYNPXWNKPXYPAXSJKSFGTGCVBZVLITIKAXMULHAEOIKVRAVBSH");
    msg.type = 52U;
    msg.properties = 216U;
    msg.durations.assign("JAQXUKNVIZETUFIIKZECOURBLFBQZVHBRMPYVUYNMWWGBLFAPGYVWTMBTJKUOMMSCBZKWXUDCALLRCLBPAWTJZCBDFUOSDO");
    msg.distances.assign("BADAZJIZZMCMDLCDGNQLGUBRVUJLMOHQZWXKZGZGNWVKIDBTPQPBTWBCGGQELAYDRJJCYGRAOZDMSICUJXKIAIKDGHWOEEWOERETRWAMSYNNWVUQKTJXLSUYLXKXOBPLSTKNPPHIFHDGQFCVNSCCVMHPSSDICFRXLAFXQVETYPOUEJNPWO");
    msg.actions.assign("DGKLJSADQGZITWYOVFBRBXEUMCZAMIEBITEKMRAENLBDQNHOIEUXZJRQCUQTYHJWRDIAZMSCPOCQPOSUDMVFVWFLODANCWUKXGRKBHS");
    msg.fuel.assign("FFSZQGVEFVNSEYEILBAGQPBWGNCUIDKTSLNYCPZHMNYTYZJRDLHOSYXUWGGFWIBMUXHQSXHXLRPIOWUTAOJHPBTQZUWUQTRVWTDBWSGSLMDYILIYPHMHDGOPNLCQPSAUMOGTJYVUKTXDVLEFHHOWZAKEBXSPQCVNKZKMVRJNYJNNXBKNWAGJCCTXPFORCOJZEEFCMDYHDLSREZKVKDVEIJBQRIKBUIAOOGRMRMVBJCXQWUTPD");

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
    msg.setTimeStamp(0.6843946722407289);
    msg.setSource(42246U);
    msg.setSourceEntity(139U);
    msg.setDestination(8857U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("AZHRRNAOKEROCL");
    msg.type = 215U;
    msg.properties = 130U;
    msg.durations.assign("RUZRLOAWAYEOAKUYWANLAXZHGKYAQFKVBIIXDNRPOIHHHXPCIIJQNANLXDXWSCUSBMRQFVZQPBBERWYHFGWVXFSCSZQKJBEINYRVLRTMOGFMFRMDVSSNNLNWZMEUEJXEOQTDETUJPKDZDKTRTTPGYQZINBXQIPJDQPOYLJJUMCKPSJTGOWLYKPYCAWUDBHXFIMHXSGCSWFEUPZABVFYQTCG");
    msg.distances.assign("VMGIBDKZYDZDLUNQWJVRNYVRESXTHFSJOBURMFXZONLXNPOHSYWFIWDBOVNIDOFAHGYURNYGOZZOCJPQWALZHPVPGNCEMZGJQMEQZUGFCSXCJKWKJGMTZLKUHXFYWCHNYTQLTMBQVSCFHYSKHRHACIFIIAVXKDLWSSTWEWABSEKGTNR");
    msg.actions.assign("WNTXDOCZIDBOERNFHQERCNZNHKSAXXEGISMGIIUCZQIKMQDQAUSMFEULYCOOKJGVCJOKWQDKKULKTVWEDETYALVFRMTIDPUJNILABHJXWREHNDOTNSRVISYJJUDHACLZGZKXYQQUYHBQCUPZUOYRPSVZANLJSNODAGBXLACRBZCPIAMYOPEFTVVXBEPHMGTGQFVBVLFFNPKZL");
    msg.fuel.assign("PVRYBKSWXAOAWRSWUYLKLQAJHIRPHROEZUPDTKLIOSJICIDRPATXVWHKHECJGPMFNMYPORMDPMIFYDZVTGTKXOCARZCLEELBWGIMBZFBFXDQQDVCDZGOEOGJVHAUUWLQCENSKBCBAGLNMBQZAILGEF");

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
    msg.setTimeStamp(0.06105194501930589);
    msg.setSource(38499U);
    msg.setSourceEntity(48U);
    msg.setDestination(50117U);
    msg.setDestinationEntity(101U);
    msg.plan_id.assign("AAJRYKUUGZLVPSXHORMXOQZZRTTJBDENUFAWXJJUIRQOHMXUWJQMXDWEGHZCIKIPJNMMRLWZBSGRMWNOTYLKLUPZTDJIEIDFFTHBYACZTVBVYBICJUDNYSCBLFXVQQMPVNBFGSRPJHNTKDZYEPQPT");
    msg.type = 231U;
    msg.properties = 75U;
    msg.durations.assign("MLMWTCMBSEQOHEJYGUZTVSOTJCWBYBRPXRYAHONLFXXWZLLNVVCJQTTHPOCBNLDJGAMXDKXNNSJUUQMPRKGTSZYYGDALJHOMGHJZRQQIIZSYNPDUIZIEFODTLHQAFDARQRFLFGFDCYXPCAZTWJELPTWCZKXX");
    msg.distances.assign("ISKESFBUNAVAOGBXKIWHSDDHBNLQYOFATLRJDBA");
    msg.actions.assign("KRUGCMJIHRAVBZDXDCODBOTOOJYRIRIGQ");
    msg.fuel.assign("FQEDYUWNVDXVNQAYXGAEJBAJHUCKWESFTDHFNXKLXFIGIITVZQYOWCGPPBQNMMFGXEAHSMPCOZDRYNCZRYZBAVXTLBTJAHFRKJRDEATMMUSNBLTGELKGODIQVIMNDHWXVHCAWDOHE");

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
    msg.setTimeStamp(0.32180397650404857);
    msg.setSource(4480U);
    msg.setSourceEntity(201U);
    msg.setDestination(19825U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.8967835373962849;
    msg.lon = 0.8066136015084059;
    msg.depth = 0.5442162149366709;
    msg.roll = 0.6247652458518735;
    msg.pitch = 0.9825722812975721;
    msg.yaw = 0.6963314983493767;
    msg.rcp_time = 0.8761003966442359;
    msg.sid.assign("OVWOQDJYBSUERMPIEOSLSMHLRGVNJZKWOCFGCGMGBPLPUALOCVUSKIPEYBVIENLSJNTLZYKMRWAQZYEAFWQHZRCUAXUHCJTHQHNXJVXTZGPSYFIIAONRCSNVIOQYZAQKAWGXIFBTWCQNGDFJFPPRDUYDVFXJMHDPJFRRYSORDTBBNMOHLZXKFQBEVETPUCAQBAXZHHSZETGWFPGBITIVDKXHWDLEMZODJKVILJTBSLRXKGKCNKDUEUAQNYM");
    msg.s_type = 32U;

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
    msg.setTimeStamp(0.4521110023981577);
    msg.setSource(58931U);
    msg.setSourceEntity(227U);
    msg.setDestination(3893U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.4071621012679656;
    msg.lon = 0.11127354866441619;
    msg.depth = 0.4348128174223773;
    msg.roll = 0.2710787357138147;
    msg.pitch = 0.6501856801036878;
    msg.yaw = 0.5709846551584623;
    msg.rcp_time = 0.6004999577574065;
    msg.sid.assign("RLDIDACTTRJSXGJOAGGCWVYNNPUMQFPFPJIMXOTYZZWOVUDBDUMAKOJEHMZQIWLLEHPEBEJWSQKJAKWHNSGZUQMPPKMISUBKJUPYYOKXSTNROZHHOFNOSX");
    msg.s_type = 56U;

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
    msg.setTimeStamp(0.7276224818754363);
    msg.setSource(38329U);
    msg.setSourceEntity(84U);
    msg.setDestination(22718U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.9519562403844027;
    msg.lon = 0.20980235298485694;
    msg.depth = 0.621442716787613;
    msg.roll = 0.9944170650308534;
    msg.pitch = 0.2955855798829614;
    msg.yaw = 0.85525759426493;
    msg.rcp_time = 0.605695516382233;
    msg.sid.assign("TTXSQAYUIQHEGGDNBSTMYVQIMPNABQOGJUSAYVNJXZASSNSDHFXWTHRWEJCDBMAPJTCHOCIYQWOAFHHKLFJIGZYXEXNACTFLRBYFBZUCEWRGWFELYKZLAYEVPJUFKRDITWGGDOVPFKQMJCVQMEVCRMXPCCUOOJRFBANLRTNZZNXFXVIDNWNRQORWLKPKWVKUXSS");
    msg.s_type = 90U;

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
    msg.setTimeStamp(0.48222965806328155);
    msg.setSource(64528U);
    msg.setSourceEntity(2U);
    msg.setDestination(14238U);
    msg.setDestinationEntity(220U);
    msg.id.assign("KKELBMEHPDQSKJNBBDFYFMKWCBCIFEFGXOVPLOVASSCUYSE");
    msg.sensor_class.assign("AXAKGGFWMDCUJHPZLDIDRKQTEHZ");
    msg.lat = 0.8981924353840487;
    msg.lon = 0.40505560660627393;
    msg.alt = 0.16208343068377562;
    msg.heading = 0.5547397208338662;
    msg.data.assign("GZXUBMZWOTEUUVEAJIXFNIFDVEQSMTTXGWQPBOZOYIBTGWPNQRQCVCDYVDDUMMVQSWGKFZH");

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
    msg.setTimeStamp(0.9030493206085651);
    msg.setSource(64489U);
    msg.setSourceEntity(118U);
    msg.setDestination(8704U);
    msg.setDestinationEntity(93U);
    msg.id.assign("CFJOXRPEJQXAMGHHELZZZTACMDFWLICIBAQJPBGLLRNBKMBKMAOYNZYWKOGKMWAFWTVQASTYPCMTDEJTDFNERPAZHHWYCGUOWOVFNUYRTQDGGBLVNJZIBLMC");
    msg.sensor_class.assign("ZIHXSGIWAQSFCHPCJTXHAOTYDUPELWYSWJNQWGBCOIDOPDCVNQAUNSWRAOXCHMQYKJSZZRRHMHKEAZLIEHVVIVBOGQTBVKDFWXYLYLXXKXJMOKSMFEJFWZEFRDBZYBLUADKPMSIHLGLGTUVRKPJOIMGMCHXJRQCAUZIFTKAEPJEHBNQMRKROLVQLSSPQZGQDFYTWZUIUOTUCTRYAFWFPGNBNVVRDXYDJEBIVEZGNCXPJPMYABBDK");
    msg.lat = 0.055045379159810115;
    msg.lon = 0.77747328230216;
    msg.alt = 0.4406841893128721;
    msg.heading = 0.06111983120932374;
    msg.data.assign("JWUGMJSWFMGYEFVSAANZHGREVPLIBFQPMOAWBYTRHDKDRZKCVLIUGWQZHMKLBWYIXHLXPYTNIQNUPBTMBUBXFKSSTEBRAKORWNFGYDWYORXBEVBNLTNQYPUDNCOVOSFOGQZKPVDTPZRCXHEEEEMZLJCEVJDIAUFFAPPZSJJTHJC");

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
    msg.setTimeStamp(0.5853435291013824);
    msg.setSource(13144U);
    msg.setSourceEntity(82U);
    msg.setDestination(40347U);
    msg.setDestinationEntity(128U);
    msg.id.assign("RGLPFUXZJORPRJPRZWMIWXIWSHPVHKYKKQRKHFOZUJFTPIIVZIFNXOPAMSMTBZOJELMHSY");
    msg.sensor_class.assign("JXJHCULITSMCTQYQBWRELMOTERIWTSFEJNYQLQQVIWZMSQVFQNVRJBIUPMQWOTURJBYFRCMTENRAUDBDSYZGKJWKXZTHUWRGGFJHKCAOZLNUCAP");
    msg.lat = 0.17103866735540374;
    msg.lon = 0.6643352322504026;
    msg.alt = 0.6373612970127546;
    msg.heading = 0.6744049723086188;
    msg.data.assign("FKGNFNLRCMBADSWHXLJVUAHGJOPDZCJXBIXBGDGVCWBVZOAQTEZSZTXOJMWSAPECWRXJJJRNERCBIAUPQMFHRNHORXZSFWQDUPXWEHLFDVNDMAMECCKVFIKFRY");

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
    msg.setTimeStamp(0.7462834961997162);
    msg.setSource(4750U);
    msg.setSourceEntity(72U);
    msg.setDestination(54345U);
    msg.setDestinationEntity(70U);
    msg.id.assign("AOZPRMQMIBCG");

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
    msg.setTimeStamp(0.8336735970597989);
    msg.setSource(58025U);
    msg.setSourceEntity(191U);
    msg.setDestination(8903U);
    msg.setDestinationEntity(152U);
    msg.id.assign("PVXBCPQYSUMXHHOVMDYHVXJWJEOMIDXOKXUEQLCPIBYSELEDKHWIPOWBSOPZECZRGMAFRQBQMPZTIKIOWSPZRGHZAAQUEJSUDXOGJKGBUSLQTKXEVMCWNEIKTMFWBBYNWALRRSGTJDYNSTLVUJAUFTZFLEQEDJXF");

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
    msg.setTimeStamp(0.1502796291155294);
    msg.setSource(46010U);
    msg.setSourceEntity(185U);
    msg.setDestination(64578U);
    msg.setDestinationEntity(213U);
    msg.id.assign("MJNAEALMOCTQEYTTFTZHNJADPMOYCCQPIXFBPRMZSUMOULWCXVVZBAYSCGGGIWRGBCVYFXFVLANSZAJIKIYGNBOYWZRSYNNSAUUTQKETYGPWHYCVWBJLWZRPKDCJBWZDETIDFGNFUOXKQDGXURRZRVVHQAXLVSQIMDMMHINWTOSPJSGHUXFKERHELKOBB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PPIYBFHTJBLBJFFJDCSVEZGFQPASEXMBFZAZBAOJNTYJMVKESFVAQVYGUTSTQKAWZWMIIXZOMIWREWPIGCQWVAPHDWKEOZIMTCURGFFUARJVYNBDCVOXUYFKRYRLELUALXTPDECDCQCTNNDUJQOXEZFPJDTIMXJEBJNNTULGLCRVRGWMOHONQKWQBXDRPNRKHSX");
    tmp_msg_0.feature_type = 25U;
    tmp_msg_0.rgb_red = 127U;
    tmp_msg_0.rgb_green = 177U;
    tmp_msg_0.rgb_blue = 72U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7669398576661683;
    tmp_tmp_msg_0_0.lon = 0.11996692172194523;
    tmp_tmp_msg_0_0.alt = 0.4386924402519188;
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
    msg.setTimeStamp(0.052804615383194586);
    msg.setSource(16458U);
    msg.setSourceEntity(164U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(141U);
    msg.id.assign("UOFDQUOKEOEGYCNJJYFXZEWMVTUHNITSNFYEADVFLU");
    msg.feature_type = 72U;
    msg.rgb_red = 140U;
    msg.rgb_green = 209U;
    msg.rgb_blue = 110U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.26247938898131973;
    tmp_msg_0.lon = 0.005604314292416923;
    tmp_msg_0.alt = 0.9452899902911531;
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
    msg.setTimeStamp(0.3703578799539755);
    msg.setSource(18876U);
    msg.setSourceEntity(172U);
    msg.setDestination(38220U);
    msg.setDestinationEntity(69U);
    msg.id.assign("IHJGVCOBASTEDKTLBRJDUQSCFGNMKHSWSSLQBBHXYKZXVLBOTEQILPEABRERBMVHLQOULKIDBAWYJFMGNXHWFYL");
    msg.feature_type = 156U;
    msg.rgb_red = 36U;
    msg.rgb_green = 48U;
    msg.rgb_blue = 208U;

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
    msg.setTimeStamp(0.559271781052603);
    msg.setSource(15757U);
    msg.setSourceEntity(140U);
    msg.setDestination(20713U);
    msg.setDestinationEntity(198U);
    msg.id.assign("KNRGPQGPENFDIU");
    msg.feature_type = 40U;
    msg.rgb_red = 242U;
    msg.rgb_green = 239U;
    msg.rgb_blue = 103U;

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
    msg.setTimeStamp(0.08874299913573869);
    msg.setSource(25904U);
    msg.setSourceEntity(86U);
    msg.setDestination(11112U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.8474644942716281;
    msg.lon = 0.03877005497543162;
    msg.alt = 0.8565371378514666;

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
    msg.setTimeStamp(0.4816983162446167);
    msg.setSource(16522U);
    msg.setSourceEntity(233U);
    msg.setDestination(2433U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.9531887387826949;
    msg.lon = 0.18134090962225358;
    msg.alt = 0.5679309988125043;

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
    msg.setTimeStamp(0.7475518567010845);
    msg.setSource(51602U);
    msg.setSourceEntity(94U);
    msg.setDestination(51013U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.6814203670528806;
    msg.lon = 0.7723380657887058;
    msg.alt = 0.18494968475102802;

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
    msg.setTimeStamp(0.8801516755008125);
    msg.setSource(48195U);
    msg.setSourceEntity(151U);
    msg.setDestination(23220U);
    msg.setDestinationEntity(184U);
    msg.type = 165U;
    msg.id.assign("ZNVVTKGIRLEFQRIQUJLKORZFTDKRPQCHESWATYHHEUKWDMQMSQVCUTHLFMFDAGYOHOFECRGRBDWPDSNWSBKOWSRYWOXBMSELYVMVIZF");
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.854921843306541;
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
    msg.setTimeStamp(0.06986477558848325);
    msg.setSource(53040U);
    msg.setSourceEntity(48U);
    msg.setDestination(52405U);
    msg.setDestinationEntity(86U);
    msg.type = 221U;
    msg.id.assign("QTXVEWNUOXWJPOKCJKJMPOTXMUEKVFXBZOCAOHDLDQCYLAHEZEMNFMZRFJGSCXPQABMGXWENNGMKYIISRAGWSELMRFYQVUTPXCJBIHVZFYHTYHDBZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LKWJTKDBZGRWZCSJOHQQFBAXQRVAHPMAGJXXZAPSCBIZTTXFISHDZNCTYZVZCFJINECBSNYYXULJVKZCMKFCYJPJFCYLEVMVGALHHHPHRDMTKMRMFKPXOPWODRLWSBUWURIVIETLDLAGNMOHAPTJPWGOBIYDIQVIQMGCCEGNKBBYOAGUFHPZIOUMFRLIAVWJDYNLEZYSEOUKLSGVNWRBRASHOTEEPSMWXQRKQBOQTSYXNTDGUUD");
    tmp_msg_0.value.assign("BQIMKGHAJBIREHFCILFMJKVCVFSYQUFSIICFXRRGBP");
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
    msg.setTimeStamp(0.7668168791780228);
    msg.setSource(4488U);
    msg.setSourceEntity(56U);
    msg.setDestination(58080U);
    msg.setDestinationEntity(77U);
    msg.type = 21U;
    msg.id.assign("VXLDMISIJNGDQTLYFYRESGPMHOQHWFOJCGLGUCIFQEDAHDDACWEBXIWSOLSDAPRVBKFBMRHHQAJEKQIOQAQECXVZQMZRDOVNXISGBOYHFYLTOAJFSPLTJTSBXBVAABUZZCOLEUZNIUNCIYHTEDHSEFZIZTHKKEBGJJFWGPJPCXNNVFSKWBVLTHWZCMYTGU");
    IMC::VersionInfo tmp_msg_0;
    tmp_msg_0.op = 11U;
    tmp_msg_0.version.assign("QQYAXWKSODUYPKPOZBPTFVAAGIJDUEJWMXEKKKJKXDPQXHOFEZFVAMCCVMPROCUETGVYHQFTSHWGKYCYDQTALINXDZYACGCNIQDNXFSLPFBHWBBKLXBIVLCXENZKBSMG");
    tmp_msg_0.description.assign("RMAYOLAZSRCZKJTOVGMTZIFAAWFWGQKTPRRGMJHBKWPYNWTNCWZPJYVWTEXQRVGGIRMTVLECHXNBKCLLJQPDHIIANLBNDRCMSNGJQMHGSVIKVJONKEWEUJYDVDSIMFSCFNFAFYUOQJOEXCUYXHBVWUDPDAEFPNGDLQXXURZWQIPXPCUSEFSSYEOKPIUWZBBYHZAPHOQOTL");
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
    msg.setTimeStamp(0.7931793363723647);
    msg.setSource(38066U);
    msg.setSourceEntity(231U);
    msg.setDestination(7070U);
    msg.setDestinationEntity(7U);
    msg.localname.assign("PCKGFCBHLFDEFBQLWSRKMHXJMEDVMXNVAPZRQEAMEZTBMGJYRBNYFYEMZLHTUPEQGABKZAJYGMXNBJADWOKPMXWNLFNJAQZRUZVHPELVXVXSFJTJBYGCCE");

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
    msg.setTimeStamp(0.36146929987047727);
    msg.setSource(48612U);
    msg.setSourceEntity(161U);
    msg.setDestination(6036U);
    msg.setDestinationEntity(116U);
    msg.localname.assign("QMPZEBGRGVHWJKJJRGDDYGRHLDCFKGXZFCPYHQYVNEXFTBMNYODEIMKBKHKCLCRJXTYMQNMEAEBITCQLSSUNUGKFFMVVJOQWXPUSOWLWTZMPUAPNMDWGEZYOLFAQJRZTWLZRXTBWLFIAWUONTSRVDUZNZCSTABXSCKNXBACZWXSPXRFHVKQARSPATIEIIEPQJKITYDYILICVHWCYPLHYVOXUGFUDBEBOERJVPUDJGUNQDSHOFHJZQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PWBMRWYHQGPVCAOMZRZLAXJQAILCKVMOUWXDKRYKHWAKGAUIRBSEYGFVLTDMNNVXFSEOHPXYTYGBLEPAPHNWHADZVBKZUCKOBEJNDZDHECBRNOSZLXTINZMYYSMVTSHGJICBYVJMADRJMOXFP");
    tmp_msg_0.sys_type = 122U;
    tmp_msg_0.owner = 56750U;
    tmp_msg_0.lat = 0.2854012457413697;
    tmp_msg_0.lon = 0.45633795798610954;
    tmp_msg_0.height = 0.8853649650422877;
    tmp_msg_0.services.assign("JJLMEILBWTASSUXLIYACMBDLABCORUIIDGXFHFATFCSZZXYFVPZRLTNWWVCBWGMODEEWLIALRURPRLZNXYTCMPFQIFB");
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
    msg.setTimeStamp(0.7471769632156706);
    msg.setSource(60915U);
    msg.setSourceEntity(14U);
    msg.setDestination(37823U);
    msg.setDestinationEntity(142U);
    msg.localname.assign("UVXIMWLPPHSRFSGUTMYGXDZLGSLLPNQZSPNJUUJSOQEBPUVUSZQUBMDNLMIOVIFHHJTGFHHSAFTBXUHJZIKYNSIFCOORPYWJZGCYPMQMADBDBSRZTLY");

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
    msg.setTimeStamp(0.20854481985578077);
    msg.setSource(64990U);
    msg.setSourceEntity(111U);
    msg.setDestination(35585U);
    msg.setDestinationEntity(112U);
    msg.timeline.assign("HNOMXXHDLOQHRIRCWBNMGCJLEKTEPVYDRQKCRGUWCLHYJOPIVEXPSAFJMWRPIQAYDFCSLQEHJZDYKQIAVNRWJJZKNJYZASJCITUXBLDTUCAAVBZJGZGOBVTYQHEUI");
    msg.predicate.assign("IELSDPTDHOFYFOWJYWSUUCVEYZBMYWSHPJRRRDMPQLAOGAJNCFNVARTRSCCNGVZFHIBPTDAFZYSJEVMAUCNIGEOMPHYXQEUUXZGTCBTQPBKIKKRVZMJYWBWZBZFITLSNQQYZUZKBXDVKPMGNMQOFHRIALJWPVHBPVJAUJJAXHADIFQKWWGNLGHVZSWVIXFDLE");
    msg.attributes.assign("BOLFGDVPUQDTCAPQHFOLGZ");

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
    msg.setTimeStamp(0.6013264826625075);
    msg.setSource(40848U);
    msg.setSourceEntity(57U);
    msg.setDestination(47410U);
    msg.setDestinationEntity(126U);
    msg.timeline.assign("NPLZSVFPLGFHBLLKEOJKSCUTTISCRVHUXUDKZUTXXOWEEVVAHRQFSUGIJIHNCGEIWDYKNTRXBBXAWBYCLXRGBSKGNPDTIIJIOKMPNUFQOPRCAEDVYAIGPXIKQSMMZOMASNWZXLKVYSZBYFWMMEBQXCLTL");
    msg.predicate.assign("SHDNAGNXJMPHQCDXMBWLBNMXMNLPLIDLDUSMXKUGLMVFWOWCAVATXELYRGLGVHICEABFJRXWCNVOIEEAMVTZTQIY");
    msg.attributes.assign("HKSQWPCTBKEZQCGYQJVZRCKIHSGUAZIOPTYBXYDACIXGDEOJUIEHKGUFCVVJDKEJYEWDZXNMZHAAYPZHOTWULRAYHELOHNAIMAQNGPIAVSGOEBKHNMIARIHQFZPJHJRFJDRGYRKLGGURXXMTBOMVBGBIXPDWYFZSZCQVPRVTUDNKMUOTMXFLCXDU");

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
    msg.setTimeStamp(0.6949379271870533);
    msg.setSource(26645U);
    msg.setSourceEntity(28U);
    msg.setDestination(37826U);
    msg.setDestinationEntity(50U);
    msg.timeline.assign("DKWYWKNNVGETXHYGLPRKVYRUIEAYLQBEEJXQZMXLGHIHKSMHDWUCPFJJAQDTWUQMRQGTAPBBSCSSTYNWLZVRJZFJTBLRHVGPLBQMYKNPPUIFFKGDCWVJYCXAITLSSRIUROINXKGIAJAMMSTUKUSCEO");
    msg.predicate.assign("XOIZJHYDPITTKBJJBLSLNHUKLSGIOCWWWHEMXOLQPNPTIOVGCUHOUOJVRYWPRDGKEG");
    msg.attributes.assign("EMQKOJFQPJGMHV");

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
    msg.setTimeStamp(0.39772202627119224);
    msg.setSource(11248U);
    msg.setSourceEntity(203U);
    msg.setDestination(39327U);
    msg.setDestinationEntity(27U);
    msg.command = 214U;
    msg.goal_id.assign("IQVUIFCJEPBRVDYODYEXYGXSJBLFSYZJKFVZJVYFMCXATSWXOBFYPFADLFEDZIHOZQEGKBILXNEGLSVWAXCGTYAHWZSHCTZMILDVPXTURBEQQDDGORBNMNKTNTUWHEHXOUCWNPONNJIKGZUODRMWHVHXXAJSPBEKPMMCAAKUFURWHYIUZMUMIRSVQTCKLGQBSTTMZALDRJMQEBOKPA");
    msg.goal_xml.assign("IIRZHEKKCNAOVDUADLZDBTUAFFWTJJUQQQHXQFMISTLXELIOVYFNQGLXHUTNKNKCOGDRLXKNABYPDCYVOZXJHOYEUNSFFZACXQCUWETRMERUMGZLKAYIDVATDIMSASEOGLMZZHXNZKWMTSPBRGQKPPAITLCYMQWSWMWWHHWRSVHJHZGBYI");

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
    msg.setTimeStamp(0.10146157743943995);
    msg.setSource(21569U);
    msg.setSourceEntity(215U);
    msg.setDestination(16899U);
    msg.setDestinationEntity(61U);
    msg.command = 240U;
    msg.goal_id.assign("BDLCEYOMNJAJHMRMLSQLUXDIYOFRAMWFIYFANWCPLSOUKEBDVCQJURNIMWHOSRJHKFZIDTJHCVMRCNOPRAEHBOEYGFXFOWLTFUZVVBTXSZNXPQYNHLQYVEEMGAILFGBNIRUXAPTDVOKXBPIQRKBJUFUQPWGRZZHZXTQWSNTNGTAAAVXEEUVSEVRJGGXZWWCIHQH");
    msg.goal_xml.assign("BHWBNTBFCIRYRVOGKVXCLYBCBJRAELXHLBJVUERDUFXGJIMQVHLGZQOENPVZZMTYCEWQSCKAMNLGXXYWFUJBTEGSYCWKXITADOJHCTZHMWRJDECJLPSRHQ");

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
    msg.setTimeStamp(0.6060336418961472);
    msg.setSource(24401U);
    msg.setSourceEntity(159U);
    msg.setDestination(42265U);
    msg.setDestinationEntity(227U);
    msg.command = 58U;
    msg.goal_id.assign("OQJLAJVQVHDBCJWUPHPISWXSFCXASGKANPWKGBWQDRQVUUYQLEFSBAVCEXIPOBWLNMZEDXFNPDTBNXWUNEAXEXPYRIRDLJZKYHHMHZVCPETHWMCQQRVNKYAKIUHWSQISNISHLNAZFOGKCKTBUPRBG");
    msg.goal_xml.assign("QQYOWSQUEWBOCLWIHPTICUNFTXX");

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
    msg.setTimeStamp(0.012754022392704067);
    msg.setSource(37549U);
    msg.setSourceEntity(232U);
    msg.setDestination(41220U);
    msg.setDestinationEntity(251U);
    msg.op = 179U;
    msg.goal_id.assign("PLXTQVMWSLJGRGWNBNQFLWYZPURGRXNTQOKRMLOKXDWMBSCHJCXLBLLROZVCAWBGJTVJVYGKUOFIMHSPQQEZIMCRYIXHAYYAXZAFZYOEEWAZCUAMZDFHCUHRYJNBFWPCTQNIUQLBNCAQEBAEETGDBTOTSKDNKMEABKFRSBPTJRPVMJILZHUVTTSQDSQDLOEOK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ETAQDHHANXEIOADRNNHJWAMZDIRQZXPFVPFKTSUYJVCBCOYPFVIPTJQDKESUKRKQWQYWGZLYGVGKURLESSKQOCOYIZWFMQOTMCNGUEVPORIRBEUCVNAZWNSNDUBNYLMVSEMHZRFFYSXWMIHBDMGPXIIEPTKZXBKBKXGLTXUNDATAJTDQLWHJOGHDXVRHPLPSYXFVQRTZLJOUWFABMPMSCAOJBVIFNCG");
    tmp_msg_0.predicate.assign("RPGTMRNRIENPJZKFLYPRTHOZHPXCLNEZJBOYAUWOPPGMFDEZFUFLLTUTDHVLDGHZJACJVPXSXPYIJSPYYIGMKQUCDVREVFBVLEKVBQBGUHKQDLSVWOLXMZQQAYFYGCWWQHKIQRJBFDHRRIHAHOZHENOCLWSYWPXIRCAUAIGSYXTBJETXZISDOWDWAZJZNXKTVMEBMECDGBELMQJCDIKXNKKSTWYSIACBUGCSQOFTUUNSMKFXJMVAUOBV");
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
    msg.setTimeStamp(0.8394718125487267);
    msg.setSource(29144U);
    msg.setSourceEntity(217U);
    msg.setDestination(38686U);
    msg.setDestinationEntity(182U);
    msg.op = 155U;
    msg.goal_id.assign("GZJYAFTSYABFXAMNXECKZBAXYFJKVMBXVTJRKZJTMCAGC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VYCYHVDVWQLRMJNUKBSYHTFNEZFGUUXTNAMXSRAIVSUZIVKYZDCURFZOPFYG");
    tmp_msg_0.predicate.assign("VLRYAGMELVNTLRIKDOBPYYBFURIZRILDHZGFMKUCMKDNVWNSVGLUBXXIVKCQMXAKTLFAOGQZKMVM");
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
    msg.setTimeStamp(0.08389223581620309);
    msg.setSource(47365U);
    msg.setSourceEntity(33U);
    msg.setDestination(764U);
    msg.setDestinationEntity(172U);
    msg.op = 31U;
    msg.goal_id.assign("IDKQFEERIPJUSXAJJQOTHSWZRSQHKEJYMVVMXQKBFPTEJEHBLQTKWOXNWKHNOYSGJURHDXCFDOTGHKANWCGYSYVIHSXUPPYCNDADVRAMBQAXRBUVOFOMCCGUTZCKTBWXIHR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QYZVPOUYKPKYJZVUHQQCKUOOUYXROEVIFFNCLTJOXTAHHUIZDAVZGVCMSMJGGXKWYRBSSNBOXRTYMLCRCTCFIHNPUYJDGLJXQSRHEESGRATBRAITOWDVKABZPUNXKPICTTNQJDFXWUHQEJDAEJNEHWDFJMC");
    tmp_msg_0.predicate.assign("YHUTEVCNVQHNBPYIAGEKQEMQSCAXESRHCWYBUMHVNPIUDWXRJYJWOLJGXTPXGFFOZKVCLBKNJCIWTSUDCPVWYKLABPNDMZBRGPETGLFEFIIDMRFYIQSEOYXHXTQUXABVMMAYVDSIKDNEZVOKLTPWGXRMHCLPZCRTWQZSJFZBZYJAEKZNXRCZWSUEDZJMGIWSCLUO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YTFCJZARMHAJFPBKZPYBHFRYZWYENLAXQVQEMSZWCIPNSHWBNWDQDHYYLVZZOYDNQYIOCZBITCQJFRPLRXUTSOKBRMJXIJDULVA");
    tmp_tmp_msg_0_0.attr_type = 123U;
    tmp_tmp_msg_0_0.min.assign("JZURZNYOVMOVMQRAXSDKCYIEBHAXUWVJAXHBHTYXZZZUGIEEHJRGKITSGQMEEPPHBFUQWDGMFTUJWSWFYVEOFDLXJGGYCNQBI");
    tmp_tmp_msg_0_0.max.assign("CNDMUQXSDMNCJTQTXXUWJIBNHKLUDVVSEPDBOGSXJBBZMWTYBQYJGTVJHLOLENEGUVPEGLKZAHISBMDUZVEWRRXFVRMYLFNJIHACTGIQYIAVYOHLQIVRHDKSCAFYECAANNYWGTABWUKFPLWTILOFROOUCONBZGAMUDPZOQOFPRQTJA");
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
    msg.setTimeStamp(0.251122966217878);
    msg.setSource(20798U);
    msg.setSourceEntity(230U);
    msg.setDestination(27699U);
    msg.setDestinationEntity(85U);
    msg.name.assign("YFUMXBEUQAAAMICJXPBRVYGDHIQWROKUZSZF");
    msg.attr_type = 120U;
    msg.min.assign("LWNDCGESCUYDIDNHGYPQTOVIDIQXHPPFDTSGVPMWVSSINJBPDNZRQGJEGATPZLAFCNWBOLERREMCXCUMTVOLLZSAZVTWSRJQTNQXEFMZFLDHIBRFBLBHQTFRWJJBGMYZSAKZJLXLTKJVUYFBWGONEYWAAUFMXVUOUCMDCCVJTHSTVHOPOUORBSMKLFZADVAAYXIFXBMAEKIOGKZRRNJUNKHWHBUYNIOKQKEW");
    msg.max.assign("AEAYUPFZZZVAXDABYIAYNWBFDHBGNSGHIZNCNOSQWHVBKVE");

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
    msg.setTimeStamp(0.06796218306036372);
    msg.setSource(6127U);
    msg.setSourceEntity(220U);
    msg.setDestination(60877U);
    msg.setDestinationEntity(80U);
    msg.name.assign("RPRRWSHAQNZWOBIMYYENLDPFBOHTVBADJCVODZMFCUJEWFRXWLVRGRAPPNTAHBFHDMBKALYEPEOXLOCII");
    msg.attr_type = 220U;
    msg.min.assign("HFAAGHMAXBMOERCNPWGEPVYQEHKOSJHCGKTYPDNAFFTQGCIUZAQSSWYHKBFUVPWKRAFVRQWJDPQUMZNOWQIQJXVYLUCWGWHVGNTYDXLRBRFTHBTZQMGEDVDYFIGUVMXITPPYLCCIKPSSQEXTSRSDIIIRLBDN");
    msg.max.assign("RUTUAGUXHOMEXDTDSSPRPYOSLPDYMHLUFYWVWZBYVLLOKVMRZWCZFVNBZWKLZJO");

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
    msg.setTimeStamp(0.5339177486189095);
    msg.setSource(33148U);
    msg.setSourceEntity(138U);
    msg.setDestination(32083U);
    msg.setDestinationEntity(49U);
    msg.name.assign("TGIDIDGHAOGMWORUUTKTJDPSRQSXIKNCKLTBKHDKMWWGDHBWJTTOJXFBQXEBKMLIHIIJOAIWXLVJZRNSXMZMUKUNAUYQVCZWLVFLBZBGYXDYQGFYNREUBQPOBVRFOAMRVNCNWDSV");
    msg.attr_type = 171U;
    msg.min.assign("YIVXRSGSOFPJCFNJFZOLXVFZJLECANMGELAHYGQYOPVQFZTDQGUKUBTOEYUJDMLNIQTCUVQLKFEMSGAZXJSLRCURFRNANUDKGMHQHXHLGSSMRWFYDWSPYTHZWTMBNBZYWREXUDWZCIRNBPDELEAJQOQRNOPMTYXPCDKINBQAPJISSLFVCPZVTJGHATK");
    msg.max.assign("IDZAQXZNPLRJFBK");

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
    msg.setTimeStamp(0.22915618541084537);
    msg.setSource(26878U);
    msg.setSourceEntity(39U);
    msg.setDestination(55148U);
    msg.setDestinationEntity(206U);
    msg.timeline.assign("XXZVMRHMULEUDQUOOQYTTKEILAMNHZDLLZHTHBFFUFNWGVTITJCKSUGGMXBGAKZORCYLDFYIHGFFNYLRLRQCOFWYMNRZBQCBIMCMEKJRNSOHAKDTVXOCHYOEOSGDACEPJQFUXBCHMIPUKRDSSGXPWOJUSNVJWTZYWELAKPVJABVIZZYJJWBEPISJBQFGACXZBAVRQIKNIGAYZPPLGN");
    msg.predicate.assign("MKRVMNUBCRCDDWMETZHDOWVZOJLAKNBELDBCLCRKWNDWIFFMBHYUTOUAGUGWOVXYRLGUJMNCXHGDEURZSHKPLDBTGFITLEIJQVGFISCUFUBXWCFOYPSXSJJRYHGGUXKQTVVEOLITJVEAYLRNSQONZWZNC");

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
    msg.setTimeStamp(0.4074124382525527);
    msg.setSource(39876U);
    msg.setSourceEntity(213U);
    msg.setDestination(21120U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("JQMXLLRAXBVYKCELGZEMYBZIPTGALGIJBWKTCMGUB");
    msg.predicate.assign("CLLURERAXJMIBOUSWKYJUXOPLHGRZOZIVEVLHIIEFQKIYPYPSJMFWAVBPAUKDGPFQCBJUOMGCYZEXGGAOCWUHKFWNUNSJDRXKZTMMVFQFOPZLBABPCNKIVFDHQKBWYITZIEBTHHDFGMOGNSMOESZLENQNRK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IEFTDGJUYJJQZADAWECNDBQCLXBOVDSJBYZXVLEAXRSBMAHHTNZOOFZBZVHRFBIUVLFGVXDZSFQHKFRXBWVOCSQQDLNWQSMMTUFNBMQHTCGEBAWKDCUNXXOITB");
    tmp_msg_0.attr_type = 101U;
    tmp_msg_0.min.assign("TUMUHVKBKDSJADNOSXIWTGFITIEHJZKGFROWJMVLXMYCYHWYPZCAUVSDWHPXFUQWBUBIYAHYNOHWJNCAVZJPRXTUXIDMADCEZNTMHMUJOCCALYSAIRNOPXLMEOFLFDPZCBWEQZYIQQPQSJKRUWLRXQDNBLKSZCFXGQKEJBVTZYEXKSVKNJINGIUYAETLRXSWGMRMOQFVATPRDVQJFNBCLKWKVLOVMGGRZOPQPAGELDETDGFRZHISEBTYP");
    tmp_msg_0.max.assign("FZFKXAJINGQFABDJGOYTLWMZIMOSFBLNWNDYARMNTBYCYRLVXWQHMEGBTAUWVEQZZOFWHLNGQIGQZVNEA");
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
    msg.setTimeStamp(0.8508380662836279);
    msg.setSource(5876U);
    msg.setSourceEntity(237U);
    msg.setDestination(33256U);
    msg.setDestinationEntity(119U);
    msg.timeline.assign("XJOUJZCAOCNKHFMDGAYZFJGMYPONIPORLQRILCNDBTVIMBHRHPYSMJWGVDNDXUKGZPWWXCCTUJWOSUODPVRFLKFITVRVTHESGBUSLMBZQJMZTTHHKNHXZFEPNEPLIDLAMQVNQBGXTFOLUECUITZWQRDSBYXCJKHFAWEYASHVREUSEUHDAGBGSMKRVDFOCYNULIJKEYBPNRYYVFFPXCLCTOQPBJAXQVDTGZ");
    msg.predicate.assign("SELKFMJPPFRXCADWUQWQBJWEHKVBOCKWSJMTMYSLSUJVHAKNOEZIXVZBVFLTTYBGTE");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YBMBYWULENWPOAXRPKBTRKGNDGFZESQVRDQ");
    tmp_msg_0.attr_type = 20U;
    tmp_msg_0.min.assign("UMLBZXIYGODDHDHZDQGKEENPUYPWITD");
    tmp_msg_0.max.assign("UGRXPEPRYSOAXNBJNYNFRKTTWMIAQKGPMBTOOJZBFVLABXRSCZKPOJVALTWCECTIEAEZADVHHSLEUJFIXQNVNYRMSOGACINWCPPHGUFNFYUDQHDVKWIZTCYHSXYJGHLVYEQKPZCLDAKGMSTUZOLRLZJHXOQNTERKGHJIRTDVIMYDYXABOIUDKRJFUWSNWWCUXQCMLLSVAMFMQGGQDZDVHU");
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
    msg.setTimeStamp(0.7366559743468392);
    msg.setSource(24016U);
    msg.setSourceEntity(132U);
    msg.setDestination(29410U);
    msg.setDestinationEntity(220U);
    msg.reactor.assign("HVDWJMWSDXBNVVUTOPARWPPLMQYNAZDCKGIJYYGTLICOEDXWLWAHNZJLEPULXNCCJWVUCJROJJJGHTTRFRUYMUJQAQXVUFFCENMLZIJZDOIKQENOTYZQEROPCTPI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CZIDGHQTSHWCKWPOIUQZORNNGUBBBHIHCOBESDGXIFAVKJLNLKPHRFEFATLS");
    tmp_msg_0.predicate.assign("SAKTBXFTTVQASXAWGRYCKLCHDPICYNSVOUZNEVZQBIYJICXQIDTJBIZVDWLEMLJIALLZWGCWAVZSDZMGITNEJRKFNEMGMK");
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
    msg.setTimeStamp(0.10809328424882736);
    msg.setSource(39473U);
    msg.setSourceEntity(47U);
    msg.setDestination(9105U);
    msg.setDestinationEntity(238U);
    msg.reactor.assign("FYEIHXHKFXYBJLKBUKZUGAQIUKNDKAECMVIQGAMSWQDYQBOKUJNWDAWDGSSWZQIBSYRGBPVSJYOPUHPFCPLJIIEUQAP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FZKVMLHLXSYSMDFSNBNYNXUHZYPJGJEQRVABJZTMUEOTUZBKRTLFFMOCAGUDA");
    tmp_msg_0.predicate.assign("SIDIFLDQOMICOZJRHLCTYZQINQCPWVDDFBAMWSHFRMLWUZKLJBMNYOTPZNY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BUPNCFQJOMVEGXNSKCDKCMGXSROCDVPJQGMVBHBYPPWYSLPQQNOWDUWXEDGLHKJIRHZPAAFUVUOTHWSKJKKIAVDWZVJLRRIJQCMFSRFFWLLBAGNBFECRBLDKFWPXDZWNHICNWYUCRQYHOPUYGTJALOIVUCOBYOBYAKJELEYHZXRSGSNNSVONUEUZMVETAYLARATPGQYZMDJESXMWPIGJGBTXELFQTNZBSXIKUIMMXXI");
    tmp_tmp_msg_0_0.attr_type = 236U;
    tmp_tmp_msg_0_0.min.assign("BNRXIKWCGUOVBBQXEXTIUNPFNIFBOEIFORYZJGCOPBLDWTCITEHDJQMRQSLTIRQOSQPEZKUEDTBWFEAVNLGDCKKVJUMWSAVCJRPSYDMBLIXZMVJEKDXZJUUGPVHSOMGUSJSBCQFUJIXYRPBTBLOLHZSGGNXSRNGFYWKDFHMM");
    tmp_tmp_msg_0_0.max.assign("DACFFJHJMSGVOYKLXEJXM");
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
    msg.setTimeStamp(0.13538637080561988);
    msg.setSource(60933U);
    msg.setSourceEntity(29U);
    msg.setDestination(54147U);
    msg.setDestinationEntity(248U);
    msg.reactor.assign("JABALWMSBVQJGGAOULAEKRXOWNVBOIQUACFQPRMEZMDOZTFHZNXZFZXCYHJIQJDPDQRUTSHEEXDMKCJASYVAHDQGVBPIDCLAMFCBFRPFFYKQQXSVKFEDYJEVUSRWXHITHYBSLYTADOVWFNLMLKD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GCLGCBQUDOMCAEVGMAFOKQCMXHFHYJSALMGYEMSDWSOHVTIRFHWLZVRXRLVNSWNFOMDKYQCIIFYTTNMDQSZCTPKARGSONKBGXPPSTHIEEVMYUZAKLKUUGHRBBGEXWTUICQCIXPWEYLHLZFEVSDZBZDFMEXKDQWBV");
    tmp_msg_0.predicate.assign("GUQBOGBVYDXUPKEXHKSDIEBZWVQVLMTANIUCQRWDDDLFOSNGUZDRWQETPLMLKSFURTBJTKHRVYGEIWKUMJVTNJXNZEFLTPSWYAGFRKAXKPSCHI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NYZHPMLUACEWEIRIYFSYNUAVTXDWWFEDLNHREXAIDMSXZIRJJUBPJLBXOPQSNPOUZCYSHECPZBALUQVBKUXVJETOLBGVGWWJQYXNZMLTFLJNBDAZSMBTCCKXIKKPHISVGZOTPMEGKERXGLBNHPTTUVGAFQMTAGTYDKCDOOYFYFQMHQUSRSMRJRVNOQBEWQDNWRLWQAWSHKMPUOUXPSRDJDOKFNDCAZGILGFFHGOBV");
    tmp_tmp_msg_0_0.attr_type = 31U;
    tmp_tmp_msg_0_0.min.assign("HKZKUHHVZNZEDMWLMJOTFOQJCFGPLIJ");
    tmp_tmp_msg_0_0.max.assign("WUCHMELGZKBNAAHGYMHQWCFMVVZSODFUEEPXZDPJUZEUQOYBRSSFCNNGJRUKALHTIMKXPJPHQRICGDTAUTPPRQOFRUJFWPSBSZGVLYNNHVLOJTKTDBHRMRBVNRBEPKLBRIFWJFIBXTZQLOTEFSILAUCBDQNGXRWUIXYOWMWISQPJFAEPHFNGCUSDCXAXKMYKSNNVKEWCZJEZIYLCMYQLQZXWGYGYZWITHMCOOVKOVSAXLODMGTJQBAVDKJT");
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
    msg.setTimeStamp(0.09059189083972563);
    msg.setSource(16009U);
    msg.setSourceEntity(61U);
    msg.setDestination(26203U);
    msg.setDestinationEntity(16U);
    msg.topic.assign("VEJVSCHKUQLASITQBJCIKTZQNWCFQLTOGWJVLYHTQWVAGJKVQGYXRRBFTDKOWOVORGBMKMMAUPMQDNAHNIYNMZEXYGEXLVHRPFSRBQXGLOMWVCXXLBXCRBSLUIKNOFEGDDLSHCGMBHRSHIFYXNUSXABDJHJWEZAWWUEJPAMPWDAZTXGMPEQNEUDANEFBPFRIJHKCTYZVNDUIQIFSIKMSKYJTZFSO");
    msg.data.assign("QDXJMFARLWHMKAGNSVJVHXNQNGUEROVYOQEVTMIPWMKMRSSYRIOBTZIDZKGSITZPASHO");

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
    msg.setTimeStamp(0.4369624333820693);
    msg.setSource(10687U);
    msg.setSourceEntity(101U);
    msg.setDestination(54137U);
    msg.setDestinationEntity(134U);
    msg.topic.assign("VPLOBYFWYUFAARUJOKIZCDFVWLKTJTSFONOUZAOHMKQWIFADSUHCIIAJWKOJRFMVZGQBQNQYLCKXPVBSQNBBVQMONDBKTTNJCTXHUSFQLJBFUJMVSYRYPEXSDKEKZMWPVROLTNAGVCEYMPZUZPVXQHLIHEMMHPNQNDWLXDGGIATIYJGXRIXSBNTSHUWFWXCBREZZHSHFDVEGMALGLZCXARCDLSRNGDDACRKCKBOEJXWGUUPZOIPEEMW");
    msg.data.assign("CXYGOFOKYIOHBWAACPOETASQCJHJQJRLTVKZPEVLTFCASLGEYBPMZSIRUJVIIQDNDGDG");

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
    msg.setTimeStamp(0.5640788249797808);
    msg.setSource(14770U);
    msg.setSourceEntity(231U);
    msg.setDestination(52395U);
    msg.setDestinationEntity(191U);
    msg.topic.assign("LYVPMCVSJJZQJGHHZVJCUKDFPHYKIQKLFOFMIATRJBOWZRLHFUUPMASOUHCGYEMAYDKUIHLBADROTGCXNBNPXYUTMVAYPSZXPULMGWPGVQQFAYQCSWKTCFSGEWPITUXOZWNGNBMLSJSEKGQVCRIMERAEDEXLGWEAOKZSYHFXINOQCCFYXDBKVTRNBOBPRTBSZHIAZGLXFBQUDSPJUWNXXLITRWWRHJVKNIZRJEJWZNOVFLDCMDTDAEVQKH");
    msg.data.assign("VSEPJQZEWWCVEKBYKQZWOHDPDNTLKJEVTQGYBFPJROCFVDWSQEIHJOYWPBKLECUPUPVQWMUNXTLIYSFTJSYDOYRUTTMCONASNIFBPVUNMPEIYIFHULKAZAHXHHNFDAAZQHBISZKOBLDICCYGXADBALRYNWOJDDIDFPJCJGUGSZLKFLUFMUQZXJXLNKGRC");

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
    msg.setTimeStamp(0.763807667785648);
    msg.setSource(28422U);
    msg.setSourceEntity(39U);
    msg.setDestination(63551U);
    msg.setDestinationEntity(139U);
    msg.frameid = 106U;
    const signed char tmp_msg_0[] = {-102, 64, -8, -23, -85, -64, -113, 95, 82, 76, 120, 116, 85, 111, 8, 68, -73, -19, -76, -110, 105, -57, 30, -98, -126, -5, -39, 94, -1, 7, 110, 43, -98, 100, 81, -14, 85, 16, 82, -67, -71, 97, -120, -77, -89, -17, -81, -58, -87, -128, 42, -103, -75, -59, -14, 91, 102, 19, 22, 97, 44, 13, -114, 66, -8, 68, 23, 95, -5, 21, 79, 50, 120, 94, 19, 37, 34, 65, -86, 117, -9, 4, -121, 106, 115, 120, 91};
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
    msg.setTimeStamp(0.7928283859959104);
    msg.setSource(1559U);
    msg.setSourceEntity(141U);
    msg.setDestination(1270U);
    msg.setDestinationEntity(179U);
    msg.frameid = 240U;
    const signed char tmp_msg_0[] = {11, -74, -106, 54, 86, -62, 72, 39, -74, -63, 20, -33, 16, 86, 119, -19, -102, -92, 126, -4, -22, -10, -46, 117, -90, -116, 19, 3, -84, 126, -51, -20, -92, -111, 80, -115, 47, -35, 29, 29, -104, 60, 64, 12, -94, 55, -69, 66, 8, -59, -127, -126, 83, -26, 83, -73, -123, 119, 60, 49, 6, 19, -122, -47, 98, 122, -116, 64, -128, 53, 111, 65, -46, 30, -87, -67, 81, -122, 95, 71, 4, 37, -40, 66, 5, 119, 21, -47, -62, 69, -89, -3, 48, 51, 114, -15, -58, -26, 18, -70, 28, 32, 78, 36, 78, 41, -109, 45, 126, 66, 101, 106, 11, 98, 20, -13, -65, 13, -125, 41, -119, 52, 73, -73, -29, -72, 51, 101, 86};
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
    msg.setTimeStamp(0.5159727278473977);
    msg.setSource(27814U);
    msg.setSourceEntity(192U);
    msg.setDestination(19790U);
    msg.setDestinationEntity(114U);
    msg.frameid = 40U;
    const signed char tmp_msg_0[] = {-25, 5, 103, 117, -45, 86, 73, 95, -31, -52, 88, -30, 93, -46, -8, -88, 93, -125, -14, -101, -116, -3, -103, 33, 35, -88, -85, 27, -13, 11, -84, -46, -10, 8, 78, -22, -75, -128, 28, -36, -9, 60, -108, 73, -104, 80, -80, -110, -104, 6, -74, 111, -15, -118, 109, 62, -34, -46, 107, 120, -32, 43, 58, -71, -41, 44, 99, -98, -65, -125, 43, -61, 37, -85, -97, -36, 112, 68, -67, -1, 8, 83, -56, -88, -123, 125, 40, -56, 97, -58, -31, 86, -118, 91, -100, 100, -101, -20, -90, 103, 31, -71, 118, 57, -43, -44, 15, -44, -35, -126, 119, 98, 25, 88, -82, 35, -100, -40, -16, -36, -61, 109, 100, 47, -31, -18, -2, 66, -107, 97, -12, -52, 58, 25, -56, -121, 32, 113, -97, 62, 71, -47, 33, 32, -14, -80, 71, 75, 78, 33, 3, 81, 83, 92, 9, -14, -21, -111, -23, 115, -37, 16, -10, 56, -114, -33, -20, -38, 47, -24, 38, 81, 79, -60, 79, -78, -2, -83, -99, -100, 120, 88, -57, -76, -77, 53, 13, -109, -81, 76, 13, 21, 63, 49, 27, -35, -71, -37, -92, 47, -40, -66, -52, -32, 107, 9, -69, 108, 18, -111, 47, -47, -84, -74, 3, -49, -93, -124, -128, -15, 72, 119, -94, 54, 41, 66, -30, 32, 115, 39, 17, 87, 108, -66, -71, -97, -19, 9, 21, 105, 88, 68, 76, -125};
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
    msg.setTimeStamp(0.569202741498612);
    msg.setSource(44213U);
    msg.setSourceEntity(156U);
    msg.setDestination(12769U);
    msg.setDestinationEntity(127U);
    msg.fps = 136U;
    msg.quality = 70U;
    msg.reps = 37U;
    msg.tsize = 150U;

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
    msg.setTimeStamp(0.3120976726081489);
    msg.setSource(22751U);
    msg.setSourceEntity(27U);
    msg.setDestination(59026U);
    msg.setDestinationEntity(134U);
    msg.fps = 4U;
    msg.quality = 203U;
    msg.reps = 129U;
    msg.tsize = 69U;

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
    msg.setTimeStamp(0.8285992593458296);
    msg.setSource(4843U);
    msg.setSourceEntity(10U);
    msg.setDestination(49381U);
    msg.setDestinationEntity(205U);
    msg.fps = 178U;
    msg.quality = 204U;
    msg.reps = 194U;
    msg.tsize = 83U;

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
    msg.setTimeStamp(0.0948421337407861);
    msg.setSource(56458U);
    msg.setSourceEntity(201U);
    msg.setDestination(4094U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.5394001617118585;
    msg.lon = 0.8844508025166157;
    msg.depth = 70U;
    msg.speed = 0.2376816142698468;
    msg.psi = 0.8973373785183216;

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
    msg.setTimeStamp(0.5610642879908742);
    msg.setSource(34954U);
    msg.setSourceEntity(158U);
    msg.setDestination(59369U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.18126916717477282;
    msg.lon = 0.8139487439007103;
    msg.depth = 254U;
    msg.speed = 0.44850222715944743;
    msg.psi = 0.2905331945082026;

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
    msg.setTimeStamp(0.8935247442553235);
    msg.setSource(49781U);
    msg.setSourceEntity(52U);
    msg.setDestination(42081U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.9063951990385981;
    msg.lon = 0.24083866971681323;
    msg.depth = 139U;
    msg.speed = 0.771242271680012;
    msg.psi = 0.8688925257234542;

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
    msg.setTimeStamp(0.18546946345071058);
    msg.setSource(56003U);
    msg.setSourceEntity(82U);
    msg.setDestination(61165U);
    msg.setDestinationEntity(59U);
    msg.label.assign("SDQKUPXUNOBYZUDUXCQNWCHSVLOBYAUFQFEBNTMIRVIAQDNMHLSSJBETHVPRODERKVJKGUVPNQCJLMIYTKDMWYLARXRNGOBBQZXLPYYZOFEXXGCPKPVZAAZ");
    msg.lat = 0.6705531859678009;
    msg.lon = 0.1856302773990952;
    msg.z = 0.03821953398982558;
    msg.z_units = 90U;
    msg.cog = 0.059314752642555924;
    msg.sog = 0.3564567848275242;

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
    msg.setTimeStamp(0.02137399379749294);
    msg.setSource(29105U);
    msg.setSourceEntity(85U);
    msg.setDestination(45577U);
    msg.setDestinationEntity(16U);
    msg.label.assign("NAORDIVDRSVYQAXKUGZBEJDAMCAETHHGKVMZWDYJFLZPYGOAMWTLUTMLOXIZJNNEOUQPZLPHVTFHGMTSZJSUCYIDWSDUVEBYGEZGMCNMMKSTRVJPJKULYLIAZFWOIRSGCBIPVMFMEOJLPQXKVBYCXEHOYESFZDAFJPYHQOWFHUKXIRSXAXGQTCRPZFHKIQOPWCNCKKBXTSNPFRQAINEEUGGRFLLRQSHVCDKICWBNBVTBQOLTYXWBADUJJXWNRB");
    msg.lat = 0.7168326440116352;
    msg.lon = 0.8122013373271226;
    msg.z = 0.7368540508185911;
    msg.z_units = 246U;
    msg.cog = 0.33380920048397245;
    msg.sog = 0.2507357050352569;

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
    msg.setTimeStamp(0.007200278403035498);
    msg.setSource(55923U);
    msg.setSourceEntity(185U);
    msg.setDestination(54462U);
    msg.setDestinationEntity(157U);
    msg.label.assign("ZSEQDSAVVAXPCKWLLUFDTQYMCOSGXHZSKPAHOIXKJMLGMNOCAUJEJNCPVSRCOPMMCEIBWHYAAQQFIEGCNNXJSPYRXVYTIFDCGOORGXASOVLGOTNLZRVYWMHZONWLRXVUIXKGOYTZTUXYKWIEWNLZFKTMNHBPHSJBNRKQY");
    msg.lat = 0.11435617767729278;
    msg.lon = 0.6696290785151937;
    msg.z = 0.18319555247975006;
    msg.z_units = 164U;
    msg.cog = 0.058406712539203376;
    msg.sog = 0.28734444516833546;

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
    msg.setTimeStamp(0.9317860536565832);
    msg.setSource(17113U);
    msg.setSourceEntity(17U);
    msg.setDestination(57038U);
    msg.setDestinationEntity(185U);
    msg.name.assign("ICKMODKUXDADBQTDYDNOBEEJDWYXVXCWLQK");
    msg.value.assign("VQSRJMZCCYVNBBZIMSYGPQEENODMNHRMOTRQWUVTZPXSFKXFPHQRFVAHTTUCJVALKLMAYPFEVNCHRACOIIFSXFDYUBFNJYPOYWAJKIDEZLHGHPYCYSODXDITSPBHXGJLOCMRKWXLKHBAAIGAEZLSXZOWRWWDNGGQDNOBVIUXTPAIJWKDLKSLBAWUBSJEZVTKUEFVMQJCBZROZNNGNF");

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
    msg.setTimeStamp(0.3463218983817764);
    msg.setSource(25918U);
    msg.setSourceEntity(52U);
    msg.setDestination(4731U);
    msg.setDestinationEntity(93U);
    msg.name.assign("RURTXGJHFCGEXEUSCENUCZAMQCWAVFZADLPMLVCOHWTBMIGOQOHBRSXFDTYNDOBHDWLPRNDWBEWQKEBJSIC");
    msg.value.assign("UPVNKFWGLBOELYQWKZDXAXXAUBRVDDBEPHEZQWRAJXRRRYQFLUVHCGWWLASWVTWAPUIVLIREXCBVMSFMPIMHJOGMXBXWJIYOYZYCFQLDOPHADIPCARSYOSCSCYOZZUPSYBDJUTIUAVNABTFMOEKDCNBJETGKDMSDULZJTCKZXMGPXBQFRQYUSYROKGNQEN");

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
    msg.setTimeStamp(0.16841859900845513);
    msg.setSource(29563U);
    msg.setSourceEntity(196U);
    msg.setDestination(23437U);
    msg.setDestinationEntity(51U);
    msg.name.assign("YJHIGGEVOCYFONZJWCKDBRPWILSKFOJYWQDNTLQGQLVGBVPIRETIATSKOHIAXXVHDUMQSNHKEM");
    msg.value.assign("VAAYOKENXLDSLWPXXUAMUZGRFGVNUZBTQVDHLUCZIIDHTGNOMFHGVPKZKVOUYBZYPTVGFJQFMQZKLPBRTYAPSFWMLETPTONADFEVXVJKNDIMCGLTSYMFUAXMZLJCWUVRAUHJLHEJXCNDCWOJSBJCICHNXIKCGQEUGIYILFQECJERGHIBZLOQWPSWHSRZXPFXRADQNREPYWWUTOWZO");

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
    msg.setTimeStamp(0.5869653545609458);
    msg.setSource(36765U);
    msg.setSourceEntity(204U);
    msg.setDestination(23632U);
    msg.setDestinationEntity(31U);
    msg.name.assign("JGCKLWHOMJDUGKAQSHBZZKORHKKVWXBPIVIAILPFFSQTXUYUGDFOJPXMBJAGSBPCHEGBSZCQPXUWYHOCYYRHTHPEWFDJVIUXMMOOWTDQNOXRLEWLDLPDEQIIFWYCJJMRLAXMKLFMHYTNMUNQEALQQSYERZXGADVCNOQTQCRVVFRONBKZXKAFGIZCZJHZSRDYHSIBWGBATYUVJIVZAWZSORTKIVPCENEYEUNGRBNNTBFSDJUMKDGPVMS");

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
    msg.setTimeStamp(0.9489710489961343);
    msg.setSource(14038U);
    msg.setSourceEntity(251U);
    msg.setDestination(438U);
    msg.setDestinationEntity(188U);
    msg.name.assign("CTPADDVWZLFFMWXBRZEODHVDCMLURPYMYBGSQLETMYYUUJSMBRRSSMBKXY");

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
    msg.setTimeStamp(0.9355925547386876);
    msg.setSource(2951U);
    msg.setSourceEntity(2U);
    msg.setDestination(34504U);
    msg.setDestinationEntity(241U);
    msg.name.assign("YJTNDDCWYJPCSKJEQVVISEDUTHBGOPJFEERWAJFJTTVGXWQACWZYEAKARSHWDWHTRYFQMJNLGBFILSQUFLZIHGVQQYSQDHMQRWRZBIUAUIQAZBDUNGZBOSWNPSFDRRTFGYXOWLAZPFPEEXXEBKNP");

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
    msg.setTimeStamp(0.8039530573340433);
    msg.setSource(41134U);
    msg.setSourceEntity(126U);
    msg.setDestination(59115U);
    msg.setDestinationEntity(198U);
    msg.name.assign("LGVAXOUQARYKKYNKLDWUWHNESBUMTFSXNYGBOKTKZKIZWBWMCHRTXXSRFQGQNJPDWRQVMVQXEWBBDOEQDZSNJAAQUMUTSLIRCOIH");
    msg.visibility.assign("SOVRNQZOYZYDXVNBJBQCDBGYNPXQNAYNWCGGADZFKUSZMJPYEWRYTRBURHXIPEPJXXJXRTSDZKFAHCNULCKSOHEQAOLTLCRFORKOICIRMFBGKMAITVYLFKHGGJBVKHSFHEQYIQWUOLWGXMTAOFPVWDZLNMPAE");
    msg.scope.assign("TCLQYSYUZOWZNFIBHXADRNLHNEYUFACO");

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
    msg.setTimeStamp(0.2877328172736646);
    msg.setSource(7157U);
    msg.setSourceEntity(180U);
    msg.setDestination(29799U);
    msg.setDestinationEntity(245U);
    msg.name.assign("JTODKTURACPUHSJNSZXTKQTLWOIXZUTNRBQMVMFNRAKKYWZVZPDMYMDAQYCCOGPGUAUCXDFVTHMSURNWLZSNEFGXGLYJCYVTBTKVHTBOXPWMFDVRZLEUVQBECHFRGWDKJKZBGONJIIRHMFKLXPEUCPSJLWWYYWSGIPIIQWBAODOBQXIHCEXDQIPIJEHNES");
    msg.visibility.assign("LGVIQFHMEDTKLJSYIFDXQHZSNGBJGIZOIVPJYQBXWNXPTLYXUDLQGNHOGFGAYXWUQSLUMKVTEJ");
    msg.scope.assign("THVLHXFPKMZISVQOFKNARGKBNXGEURODOOCTFJHZCJGYDHDLJCBJBAZOSGJUUYZVGJDASHTXMFTBMTXEALWYEKFIDKPUQCCZRITXPABCOUBTFQEPOIYMRGFNDMSMIAKPWMSLKEJWVNZGWUWZXAVOUSQWDDVLZCGQLXIUQQQWYKOYEJHGITCVAMLWHVVPNELULFKFHGSPBYNBVSQORBLSCNSKCUXAEXMPRFWTRIDE");

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
    msg.setTimeStamp(0.5122405175616888);
    msg.setSource(20595U);
    msg.setSourceEntity(45U);
    msg.setDestination(48868U);
    msg.setDestinationEntity(38U);
    msg.name.assign("ULDRLCMUUVTMNUUGTQQVZMNTCJEHLXALINGVHABYBZEYNMFRUTECXPEXKSKOKAEVYKXLYGQSVPFDYUKIWCLSHMDARDPXOICQPOXGCUHCOHDLVMIVMHGJOIPVPNDQYCRRSODJIJRFENOQQZJKLWNTZKZMKPOPBOTVFMAASKZQX");
    msg.visibility.assign("JELPCOVJAISDZWQFSSDEHNORAGEOLYXSPNYETHTSZZWXKQBIZOTUCFIBALCXAKMJWWQVIORRFMDEQONTOAGOFVHTYECYVZIFTXHUYIUZ");
    msg.scope.assign("RTUUGXALLFGYZPFLMWTAJSLYOYHVQLKFJWEDQTQJGBZFBJFEABERWIXEPACZMARRKAAYIOJYGZC");

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
    msg.setTimeStamp(0.6169553361827509);
    msg.setSource(19721U);
    msg.setSourceEntity(75U);
    msg.setDestination(58198U);
    msg.setDestinationEntity(68U);
    msg.name.assign("OJFBMPYEBYSGPMQGWMIDSKUNXHHINUFBOJQYSGRCTJYHSHRDDVKCKVZCJJSIQTDBZLRNVFMVOHBYZJDMMPCESEQGXLAAGOITHRTOCNPHEEUXKIMFVISXMRJTPOZWLZBMAQKRXNKQPBTIVXZDZGPZQNOLLCEEAYADBWKKRWWDEEFAANFZRWKKCJITEVHHJOWALLUYFITPQRCG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XYWJIVUHKVBXMILWWEDDVDOYQYPSWXUQVOUNNSFJWTUCMNIJHXLDUSYNBYZKPSPBLIAHRCRMFCTLGWYFUIKEAUAVTNORBBOETQAGTQGQERZFBLDDQVSMCVHXFTEAOEIRTMEZMLRKYJEMIRNHPTRKOSSFNDTNVHUITEXCVJYFPIXWGCBOIGHDWFQCWCASMRLDVQGGMZSBGZXHXXPHBCKQOQAHYFELJANGZZWAKAJBZGOPPKPUZPLYORKMLD");
    tmp_msg_0.value.assign("TZGELUKACCRLNQDXFOKJPBZWFQFABXKBBJMHKCNDACMBRFBNROWCKSVMRMUTGIMJTAHDTYQZI");
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
    msg.setTimeStamp(0.4548353744170852);
    msg.setSource(856U);
    msg.setSourceEntity(2U);
    msg.setDestination(53042U);
    msg.setDestinationEntity(78U);
    msg.name.assign("AQDSQDJOVXNCWENMCTEXIFBGCINBGCHIDSEJUTPCPYWONVKFHLALJVROQIRQNRHKGEHHDKOIBFHPQAYRYGMVTDEWGURCDZZKMDBSMYSXKRBYJWUPTGYRZSBKIBFCNMKEZCLRVOAAQRMXBFHZJNRFUBUDYLBJUKPVDFXSUZMWWGSKJEGVNEPOZYELUFSYIXQOZXHPUAITZTAAHTXLZWQUDJTMLPNMJN");

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
    msg.setTimeStamp(0.8131883899379557);
    msg.setSource(51871U);
    msg.setSourceEntity(240U);
    msg.setDestination(26432U);
    msg.setDestinationEntity(70U);
    msg.name.assign("KOGGHGLPGLDTWCXNKXJKABWYRRLMFZVWXRKTAHXBSWPPIIBOEALUNCLDONNXJVYJFBVMHJLVTIAPMTHPDCGSKTANMXETZMAZORJVLIOKU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LPBHKIRKVSEITALWKMWLYFXYVQKPXMAXPHTGVEFXZQNVNDOMOUHZDTFEOKKVEJRGOLSDKQCYLZDLSUIMHLWICEAAHQNBUPMIRQUZCBNQNJXOEPRVAPDYJWGSJJREVCFYETWFLISXJFYUQTOAHMTDHZNPCWBTPIQDRHNRSBJMZSGQHYAGMBEWJPTCCAGITDUIKJKGBHUDAT");
    tmp_msg_0.value.assign("WSTOJEIGKMJQCSPATORZQEONLGAAHHNXKPMDMMQFPHQGOZLJUCDAVORYVCJOGVRKFABENRWGUPQXSDZPHRPBGKLICPMTYUJSVWTLFWSYXQIYTSIGZBFBQNOANJROMJCTNDEIFZYHFDJSMGLHWSVEFVYSUWBKRBBHVMZWLAZROXCZGUMSFBPBNIKYEDQJCPCQCNKTBXNUKEDHAEIHRUHIFDWXAUCEXVXUENTLWUYFZRDL");
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
    msg.setTimeStamp(0.8258900272147197);
    msg.setSource(55631U);
    msg.setSourceEntity(243U);
    msg.setDestination(41808U);
    msg.setDestinationEntity(145U);
    msg.name.assign("FFIJXUNBKHHLQLXOIDSEUHIOEZFVSMBFAKRZOLQWTCODLPQRJVQPDCNZO");

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
    msg.setTimeStamp(0.8501626696626614);
    msg.setSource(53759U);
    msg.setSourceEntity(105U);
    msg.setDestination(62178U);
    msg.setDestinationEntity(85U);
    msg.name.assign("ZITDKAZEFNLJGLVEUDYXSNZDATWZCONXOWYINGCZFFSDMSEFCRLPEVQRMAHYBTLJTUSTRBNKTGJJPDOSAXLKOVAQIFICCLMEZOXIUWYTSXYGQQOATUJFAHIAXJCYUPNIMCHBPDLJKYHXEBKTPZNDLPJZJHBCRNXRMDYGXSPVTHGKVRWGOQBHVUZUKRKQGVQHPKFDQBJPGNWKEVAOYWUCIQFWHFEISWLRRRMVYGMFUDWHVWSQOSZOBNMXPLBUB");

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
    msg.setTimeStamp(0.2043204764995049);
    msg.setSource(32580U);
    msg.setSourceEntity(205U);
    msg.setDestination(51516U);
    msg.setDestinationEntity(201U);
    msg.name.assign("GLYSTZFRRRWJFKVECKIIPEMGEGOHPOMQRKAVDAZPFDDHYPXZARFSQCFOVNBWYQBUGCISTJDWBLJUNMODZFXPMQYCQNBQPPOSVTSUNQVKDHXCWXSWGLFKIVZJKUCBZEAVXWDEOIKXOBAGESVAXMIYCYLWDNUWZUANHYLNHRWNTYZGECKBBRYVAMUWBTXTHSTZNOLRLJJOOJJIMDXQDMSUHTIUGIVRHQEINEPFQSPKJML");

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
    msg.setTimeStamp(0.901813506977473);
    msg.setSource(62869U);
    msg.setSourceEntity(51U);
    msg.setDestination(28205U);
    msg.setDestinationEntity(81U);
    msg.timeout = 3479777011U;

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
    msg.setTimeStamp(0.2226970672052775);
    msg.setSource(12356U);
    msg.setSourceEntity(159U);
    msg.setDestination(22118U);
    msg.setDestinationEntity(1U);
    msg.timeout = 2651591388U;

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
    msg.setTimeStamp(0.74808699685612);
    msg.setSource(35800U);
    msg.setSourceEntity(175U);
    msg.setDestination(35160U);
    msg.setDestinationEntity(43U);
    msg.timeout = 2380876233U;

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
    msg.setTimeStamp(0.007634367989753477);
    msg.setSource(53859U);
    msg.setSourceEntity(52U);
    msg.setDestination(27601U);
    msg.setDestinationEntity(146U);
    msg.sessid = 2020720920U;

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
    msg.setTimeStamp(0.9291332142280101);
    msg.setSource(50628U);
    msg.setSourceEntity(155U);
    msg.setDestination(32396U);
    msg.setDestinationEntity(68U);
    msg.sessid = 1188091270U;

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
    msg.setTimeStamp(0.050803698108345285);
    msg.setSource(37029U);
    msg.setSourceEntity(61U);
    msg.setDestination(35102U);
    msg.setDestinationEntity(2U);
    msg.sessid = 2153090959U;

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
    msg.setTimeStamp(0.8631150987173298);
    msg.setSource(32938U);
    msg.setSourceEntity(175U);
    msg.setDestination(6284U);
    msg.setDestinationEntity(8U);
    msg.sessid = 1553325452U;
    msg.messages.assign("OLZHAENERIVZUUHQMNYYCCFDVLYXWYGMIJWOMXMOWLJQLMKWXUG");

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
    msg.setTimeStamp(0.8980477772358969);
    msg.setSource(38324U);
    msg.setSourceEntity(205U);
    msg.setDestination(31943U);
    msg.setDestinationEntity(80U);
    msg.sessid = 2812915106U;
    msg.messages.assign("OVDQZFVSNKWMWYZJXBNMZSWNSYQCXVMBPJAIGCHFLFVEQVLALXHSREOUUCZJJXOPEPAIOQ");

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
    msg.setTimeStamp(0.37830851985531144);
    msg.setSource(34973U);
    msg.setSourceEntity(250U);
    msg.setDestination(30042U);
    msg.setDestinationEntity(60U);
    msg.sessid = 178024122U;
    msg.messages.assign("TKSHHNGIXMAJFTWYVODKSCQJKPXVSMYDYTXIDAYOWLHILRSPFEEWWXMDOSQSOPWFLIAXNEOYDPQLGVQMOBAQRQLVXPURBCQIUGBRGHSKYRQKBKFAFEJRIMBFPYWIZTAZJWDGUKZYLLZDXMHNNWAUGENVVXZOMNOYRUKWETJTGIOANDCBOHBCIZGVLCHJKRZCCFUICUREERCUUSJPSJQBHTBLXH");

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
    msg.setTimeStamp(0.3617912612539582);
    msg.setSource(36100U);
    msg.setSourceEntity(253U);
    msg.setDestination(51976U);
    msg.setDestinationEntity(113U);
    msg.sessid = 2665032268U;

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
    msg.setTimeStamp(0.5255768267604576);
    msg.setSource(13526U);
    msg.setSourceEntity(122U);
    msg.setDestination(1368U);
    msg.setDestinationEntity(77U);
    msg.sessid = 502991615U;

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
    msg.setTimeStamp(0.9020049392547316);
    msg.setSource(26483U);
    msg.setSourceEntity(79U);
    msg.setDestination(10525U);
    msg.setDestinationEntity(202U);
    msg.sessid = 1023982398U;

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
    msg.setTimeStamp(0.8028240221965214);
    msg.setSource(47938U);
    msg.setSourceEntity(148U);
    msg.setDestination(4441U);
    msg.setDestinationEntity(95U);
    msg.sessid = 945083952U;
    msg.status = 63U;

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
    msg.setTimeStamp(0.2917694029274388);
    msg.setSource(52220U);
    msg.setSourceEntity(72U);
    msg.setDestination(40524U);
    msg.setDestinationEntity(182U);
    msg.sessid = 560470202U;
    msg.status = 125U;

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
    msg.setTimeStamp(0.31416429030875725);
    msg.setSource(14623U);
    msg.setSourceEntity(191U);
    msg.setDestination(60311U);
    msg.setDestinationEntity(103U);
    msg.sessid = 700932978U;
    msg.status = 220U;

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
    msg.setTimeStamp(0.47440379449501613);
    msg.setSource(57124U);
    msg.setSourceEntity(128U);
    msg.setDestination(47453U);
    msg.setDestinationEntity(248U);
    msg.name.assign("KXBWNFSITBUGZHXSYPENZHIGYCXDMXPWQGUAWCQLFPMJTJHIQBLXICIZWVDCXAGGZJJQSBYSPHDOCNRGDGDUOAMEUMSRGFDPUAWQK");

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
    msg.setTimeStamp(0.9729372888722679);
    msg.setSource(23379U);
    msg.setSourceEntity(157U);
    msg.setDestination(48324U);
    msg.setDestinationEntity(124U);
    msg.name.assign("CTPXFJXZJJKUIMSWJVAIWJKMWRKVTRBXGKEUZTQPUEGXRDYKOLVAG");

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
    msg.setTimeStamp(0.8282774866946515);
    msg.setSource(6656U);
    msg.setSourceEntity(113U);
    msg.setDestination(27375U);
    msg.setDestinationEntity(9U);
    msg.name.assign("XLIWTMMAUXTSONKZPGOKPGYKLUFFJNIBOLPCQFXHDPKCNZCLBMDTUBJQRDH");

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
    msg.setTimeStamp(0.31253157957446165);
    msg.setSource(35444U);
    msg.setSourceEntity(69U);
    msg.setDestination(29176U);
    msg.setDestinationEntity(46U);
    msg.name.assign("FKWEJBXVAXIVSQKIHASZNFUILPOJEXNMMGPDUQJHKRDLIYNYHVWWBDJGVDFSGZLOPPPQOYCYXZWTAKHWDWRBPT");

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
    msg.setTimeStamp(0.3426517082244668);
    msg.setSource(49609U);
    msg.setSourceEntity(34U);
    msg.setDestination(17948U);
    msg.setDestinationEntity(87U);
    msg.name.assign("XHLRNWVYZVHDEJFUAYIQIQGFALWAVKUOIWSOZHLXKBUJTSTHBGEZBNWRPHAXFUNBIDZFZYBQWTVNAPZOTGSKTZKRITYELIADSUMLUBENRRRFMFBPPNTUUXQJMPEIIMKMMOQACMJVRGUCCDWAJEVJZXKUDLKCGGMDGROKTVZKYFVPVTTQQQLYPCEAVEYZJRGFFCSBNXXWIQSOXDMOEDDLN");

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
    msg.setTimeStamp(0.9169561856206694);
    msg.setSource(36097U);
    msg.setSourceEntity(44U);
    msg.setDestination(9315U);
    msg.setDestinationEntity(130U);
    msg.name.assign("VCDTZYDADMUOMCPPVZYWSAWMUVBIGYIISPPOGJICOQORTUEOEHYQYTJRNMPLUKLKZFFHXNGQAVBFVZTLZXFBIBUWXFRUNIRMPPGVCAKUTNJVKDZGMIVFGODBXAQLLSJYLMIFKOPIFPHDZMDGMNFAXVEMZCBBBBPQKUWHHUOOSXJCAOWRFECCQXNCGLDJXWLWRSSKTEYVNYYENJGCALWJUXBXSSHTYEND");

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
    msg.setTimeStamp(0.358456623233254);
    msg.setSource(13122U);
    msg.setSourceEntity(123U);
    msg.setDestination(18811U);
    msg.setDestinationEntity(232U);
    msg.type = 37U;
    msg.error.assign("QSQOQEXLIXNHODJZXKFWMBUUVMPNSDSYXBUZXPAKKYNLMJCCWLQFTKAEHBRJGVQNKRVNJTROCMVRYXLYTHVMAWSNMDFOWTYZTEJVIHCOPMCQFNTBGBXGNRFAPEUBG");

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
    msg.setTimeStamp(0.06301257182942455);
    msg.setSource(32827U);
    msg.setSourceEntity(106U);
    msg.setDestination(1872U);
    msg.setDestinationEntity(215U);
    msg.type = 25U;
    msg.error.assign("YTDSATGQKADYSQUYNDRTKZITKAFBHQWZMFXNLVNXSZTKUCUPWOZHHRUOCMGLBSNALSFPHCBGSCMOJRZMERAOJFOKTBPGJHWUQXTIZXVQJOEENJPCBCIKRBJHPSII");

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
    msg.setTimeStamp(0.8358961392576733);
    msg.setSource(17416U);
    msg.setSourceEntity(56U);
    msg.setDestination(56495U);
    msg.setDestinationEntity(44U);
    msg.type = 38U;
    msg.error.assign("IDFNBNJBKPMLZSNDFOOQRPSWUXZFQJKYQVBUTNLFOLCDYBSTEXDIVRSUBKVNULVHWDEKFBLMWUXGDIAERLQKLGRREWCOTADLTQLYPOCSEQMYAFYVBVNZXJYGMPQTITXCMTRLUCZAXRPPGFBSUQOHFCWNUGCUDFFVIRJPSBMSIOKKXMJIJTMAACZGCYYWMPYSRWHUXEPYXZZHNHQWHPANHD");

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
    msg.setTimeStamp(0.3130244562796689);
    msg.setSource(39805U);
    msg.setSourceEntity(108U);
    msg.setDestination(19054U);
    msg.setDestinationEntity(174U);
    msg.seq = 23216U;
    msg.sys_dst.assign("OGBAXPITIQRTTXZWCWVDUZGZBLWAMUIHKEVHKQIVAXAIKCQDLBOQTPYMFMBJENAHKFGUZULJBIBJAYDGLAOYNICLCBGHGKIOENZHRQQBGMEWUHNKEWYLETZZBCTDCPLVNADTVSKEWUFPZICAYXRDWJOARXRSXJXKODDIVNZJJLHMPUKEXOFYYPSHSMSRQEMYRWPCOKCG");
    msg.flags = 4U;
    const signed char tmp_msg_0[] = {-67, -17, -47, 9, 10, 40, -37, 3, 37, 51, 22, -12, -94, -73, 44, 90, -19, -91, 1, -13, 37, 80, -114, -24, -48, 14, 112, -24, -99, -65, 20, -105, 122, 95, -35, 112, 83, -89, 57, 64, 80, 2, -127, -17, -41, -1, -6, -15, -5, -53, 83, -12, -38, 52, -51, 38, 91, -52, -102, 3, -16, 35, 91, -44, 109, -121, 91, 77, 101, 101, -12, 8, 48, -28, -25, -82, 77, 91, 72, -43, 59, 90, 51, 65, 100, -118, -128, -97, -43, -68, -126, 117, 58, 2, 22, -115, -22, -42, -74, -76, -46, 76, 34, -126, -77, -10, -41, -127, -35, -41, -121, -37, 114, 68, 6, 26, 111, 59, -113, 115, 48, -5, -96, -76, -50, -84, 31, 52, -115, -36, 114, -78, 72, 25, 100, -79, 51, -3, -71, 42, 47, 78, -75, -49, 25, -9, 51, 87, -70, 41, 104, -72, -80, 78, -91, -56, -30, 28, -105, 96, 125, -103, 105, 83, -74, 54, -5, -63, 82, 124, -56, -65, 10, -31, 56, 68, -125, 62, -28, 57, 68, -77, 72, 19, -5, 17, -124, 97, 74, 100, -86, -117, -101, 47, 30, -73, -105, 125, -122, -72, 83, 87, 21};
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
    msg.setTimeStamp(0.8782166689780907);
    msg.setSource(3790U);
    msg.setSourceEntity(89U);
    msg.setDestination(33655U);
    msg.setDestinationEntity(156U);
    msg.seq = 8507U;
    msg.sys_dst.assign("QDCDPSKXVSKDQEYCTUTNSHHTYGPIHFIIAZBSJXYUZMLXQFADTLERIMQOOMWVWVDBFZHWAGPEBLGRKNZDWHQPFSZFTBOYACMRPUHKJNGCBZOPTGSOAHRICNMUCLWJGXEOEKWNIJMFEOQURHEWMUKJNIRAPISKMJMLBTGXCDTRTNSV");
    msg.flags = 235U;
    const signed char tmp_msg_0[] = {-109, 107, 114, 5, 44, 61, 101, -39, -90, 0, -110, 92, 45, 106, 15, 0, -72, -121, -12, 53, -17, 62, -106, 18, -83, -113, -33, -62, 103, 64, 124, 118, 36, -69, -5, 91, 72, -108, 110, 33, -14, -58, -76, 39, -111, 126, -56, -76, 4, -128, -101, -18, 81, 112, 44, -119, 48, 15, -30, 125, -116, -33, -104, -91, 55, -76, -97, -96, -20, 103, -66, 108, -58, -120, 94, 19, 114, 93, 75, 46, -46, -50, -90, 63, 28, -64, -45, 54, -26, -77, -49, 29, -125, 0, -30, -7, 71, -69, -93, -39, -32, -84, 31, 21, -9, -103, 42, 34, -31, 51, 20, -56, 118, -92, 65, -80, -86, -9, -99, -104, 80, -79, -29, -87, -31, -59, -50, -100, -94, -74, -26, -5, -87, 91, -16, 27, -9, -123, 6, 66, -35, -4, -36, 69, 93, 16};
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
    msg.setTimeStamp(0.7705027578258575);
    msg.setSource(50724U);
    msg.setSourceEntity(203U);
    msg.setDestination(43398U);
    msg.setDestinationEntity(55U);
    msg.seq = 42120U;
    msg.sys_dst.assign("KBKRKMOLUSJGSNPASPVIYQAWASPLIARCTUMOHFSRPKDLVHDFEJMUWHYMAFFXKBOGBCGWYBDRTPOMOWFOUJVOXYVMIFCFGHPPTTNIGNQKQAHZMTOAZEBHDEEFZEBYPBURZLRHWQKRUQ");
    msg.flags = 72U;
    const signed char tmp_msg_0[] = {-49, -103, -128, -53, -70, 111, -126, 47, -69, -101, -107, 78, 12, -50, -58, 30, -79, 38, -67, 125, 74, -97, 59, -90, -31, -108, 27, -102, 112, 72, 65, -39, 31, 60, -48, -112, -4, -62, -119, -124, 102, -96, -18, -66, 87, 124, 79, -110, 114, -71, -75, -51, -42, 58, -18, 97, -54, 120, -62, -23, -68, 43, -12, 88, 12, -54, 118, 51, -5, -73, 54, -60, -42, -97, 23, -15, 0, 73, -89, -64, -98, 48, 99, -80, -47, 77, -47, 57, -44, 16, -123, 46, -58, -93, 93, 58, 93, 115, 91, -115, -40, -127, 69, -24, -79, 79, -34, 21, -34, -31, 68, 65, -20, -47, -80, -76, -122, -113, 7, -115, 25, -25, -53, -75, 116, -79, 24, 126, 70, 10, 66, -121, 97, 110, -62, -24, -111, 45, 2, 56, -41, 54, -100, 39, -89, -73, -102, 33, 88, -88, -34, -89, 34, -97, -127, -87, -70, 97, -19, -86, -124, 7, -88, 98, -88, 27, -53, 37, 9, 66, -19, -25, -12, -37, 29, 90, 120, -98, -86, -62, -81, 66, -117, 83, 29, -48, 52, -72, -75, 2, -107, 30, 49, -88, -4, -53, -104, 38, 51, -128, 63, 106, 93, -9, 13, 117, -27, -128, -79, -116, -51, -76, -88, -128, 73, 47, -106, -113, -75, 10, 115, 1, 111, -99, 57, -27, 79, -49};
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
    msg.setTimeStamp(0.4612023136125726);
    msg.setSource(10708U);
    msg.setSourceEntity(81U);
    msg.setDestination(48677U);
    msg.setDestinationEntity(48U);
    msg.sys_src.assign("SMLKACEISXOKWGKQUREKGFUCAEYGQOVAQERFYTTTIHZZYHDRSZHMZRAIAPDQKTLHGQZTTMBGBQHGHOUPWMXUEESPPFOLKSMVJVQANIKVTJUDOIUPNSIKOFFWNSBTHMUBOZZNLJLFGMNFSWVNEUXWXNJBDVEYWUYSFKCBKDELLBMTCCYXANWGLCPXVVRZID");
    msg.sys_dst.assign("UFSXHOADIJESGDJLRSHJSZFKMGZVYDMMDFCFOCPYLWKSUJPY");
    msg.flags = 196U;
    const signed char tmp_msg_0[] = {-6, 81, 48, 82, 75, 64, 28, 115, 51, -81, 49, 103, 67, -105, -50, -68, 64, -5, 86, -71, -1, -67, 78, -28, 48, 50, -20, 30, -67, 44, -94, -78, -54, 10, 3, -4, -20, -3, 67, 111, -77, -55, 75, -52, 116, -47, -100, -69, 119, -121, 40, 87, 7, -97, -52, 119, -60, -92, 121, -10, -69, -126, -16, -107, 120, -91, 26, 22, 90, 23, 119, -9, -40, -83, 98, -36, 42, -60, 84, 32, 0, -95, -11, -19, -126, 20, -75, -31, -28, 54, 34, -80, 57, -37, 8, 120, -64, 2, 56, 35, 17, -120, 82, -47, -3, -10, 69, -83, 104, -68, -111, 77, -46, 30, 116, -59, -104, 11, -50, -24, -81, -17, 10, -46, -104, -100, 29, -21, -13, 41, -108, 22, -84, -99, 74, 100, -45, -124, -116, -39, -29, 35, 76, -36, 60, -115, 28, -128, 49, -81, 121, -67, -104, 18, -57, -67, 63, 99, -49, 18, -71, 60, 31, 100, 55, 75, -114, -23, 100};
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
    msg.setTimeStamp(0.9724382949965613);
    msg.setSource(11449U);
    msg.setSourceEntity(216U);
    msg.setDestination(41519U);
    msg.setDestinationEntity(184U);
    msg.sys_src.assign("POVJYJMTTBAVJRAYTFXNLICHBFUYNHDXQVOOGFGEBTGOIUDXXDQIPWROMFHHSSDPIDVLDYKENOKINJHRAVHGBSTSZPDLLKXCRWZWMVATAUKLUUZALQIMBBRBNUKYRCPZGMMWKIJJZKYQSQYEFTWERJCNMCARDGQXXBWJXHZIPQN");
    msg.sys_dst.assign("PHJSATKIBIQMOFAZBLOHQLDNZATLUAUGDRNIDWENSWUJMWYMCPFZUNRMRELXFKMETZIUPYF");
    msg.flags = 0U;
    const signed char tmp_msg_0[] = {28, -126, -66, 103, 92, 78, 16, -56, -18, -119, -93, 26, -40, 51, -111, -17, 98, -51, -95, 96, 93, -66, 103, 42, 3, 34, 66, -126, -11, -7, -32, 90, 61, 11, -68, -45, 39, -81, 2, 113, 121, 85, 50, -116, 113, 99, 73, 84, -10, -5, -42, -73, -101, -127, 95, 114, -127, -6, -65, -121, -30, -8, -109, 75, -91, -19, 16, -4, 90, 8, -32, -40, 106, -60, 123, -121, 123, 86, 22, -1, 100, 34, -106, 50, 63, -2, 125, 85, 3, -87, -106, 83, 30};
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
    msg.setTimeStamp(0.20956388982107454);
    msg.setSource(24924U);
    msg.setSourceEntity(93U);
    msg.setDestination(11284U);
    msg.setDestinationEntity(9U);
    msg.sys_src.assign("QJKOTTJOKDMDWLP");
    msg.sys_dst.assign("ZGZDXLHAZKMFVDYCBDUTNVIRIOERVUBFIHYXEBBZFVPGOPYNTYPBHBKSJXHEAGX");
    msg.flags = 211U;
    const signed char tmp_msg_0[] = {-43, -121, -105, 103, -39, 63, -53, -75, -105, 112, 109, -107, -55, -99, 77, 111, 9, -102, 63, -88, 96, 64, -60, -119, 97, -103, 67, -70, 20, 13, -121, 66, 57, 37, 40, -64, -7, -108, -125, -57, -69, 3, -58, 16, -41, -27, -97, -2, -124, -6, 62, -2, -94, 124, 106, -40, -87, -24, 122, -108, 117, -61, -106, -71, -22, -39, 107, 92, -5, 44, -14, 97, -101, -16, 0, 49, -30, -59, -19, 63, 44, 72, 124, -84, 115, -100, -122, 28, 104, 18, -24, 90, -40, 53, -46, -3, 8, -44, 81, -50, 50, 36, -53, -33, -38, -42, 117, -17, -9, 122, 80, 18, 111, 85, -16, -60, 50, -78, 90, 112, 90, 26, -66, 67, -124, -97, -20, 22, -47, 77, -23, 77, 111, -59, 99, -83, 64, 73, 110, 84, 112, -36, -109, 61, 82, -71, 17, -91, 118, 82, -32, 0, 93, 93, 30, -4, 31, -111, -92, 24, -124, -19, 88, -65, -21, -61, 105, 50, 23, 78, -17, 27, 45, 103, 65, 95, 90, -122, 80, -70, 103};
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
    msg.setTimeStamp(0.31964854037408785);
    msg.setSource(35370U);
    msg.setSourceEntity(226U);
    msg.setDestination(21244U);
    msg.setDestinationEntity(43U);
    msg.seq = 53263U;
    msg.value = 63U;
    msg.error.assign("TMMANQKZSTFRVYBGDXJLWGBKZFHYDDGBXWPZQBGFLFMRBWXLASSJKUMCTNQFQNVCAPUUETZEOMADJCELYVEHVZFUYHIJTQIOJIYGGLICISDXOMVGVIEEWEAXDRPHNOJHQBLTWUSOVPPWNGYHOAJBHYRJO");

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
    msg.setTimeStamp(0.6296154840091113);
    msg.setSource(21459U);
    msg.setSourceEntity(95U);
    msg.setDestination(16072U);
    msg.setDestinationEntity(187U);
    msg.seq = 238U;
    msg.value = 23U;
    msg.error.assign("JYGNBITXDBHEZYHNEYIRSPABCRLXTFTLFBUYQUVQTPWEGRZSUNFWRVEGILHNKQVPHGOSJQFJZZYMMNIZFPLIDXXSBUDZQTPWJOMEDJLODOBMUWDAFKHONDSZPCRGLFOSKDCIBQQJNZMSILAKTCASYXGWQIRVUXKMSOLAHKTRWIGYAKRYPTUUXMMVVKEYCRPRUOEEYLAVNHZAQVKXGBGHOTWM");

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
    msg.setTimeStamp(0.15915113642430911);
    msg.setSource(7405U);
    msg.setSourceEntity(170U);
    msg.setDestination(62186U);
    msg.setDestinationEntity(167U);
    msg.seq = 11761U;
    msg.value = 250U;
    msg.error.assign("QLIEMXKMUOFHRJEYGSIWFZALZXGLOSTALTKCLRYUDJIGEHLDFPPZGCNMDTSAXXNCNKYUXIAJEUFXRFSGUOJKPCEKYPTSLMETDQBOZFDQNSLVMPRNUVBHCRGZQEEVYSSCWXLDGACHYHNJAKJXPAMWBSOPHOFBHICJDHWRMBOWRRFWPKISFIQQNHGDYOMWBVAIABDCZMRTNQKXUPVQJJEDMBYI");

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
    msg.setTimeStamp(0.11138496246689877);
    msg.setSource(2009U);
    msg.setSourceEntity(31U);
    msg.setDestination(20267U);
    msg.setDestinationEntity(41U);
    msg.seq = 18433U;
    msg.sys.assign("MEUFFYPJVDCVVRUALIKFUOQHDELCLTSHPJNCCTMIDENWXDQYNKM");
    msg.value = 0.11378280255677586;

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
    msg.setTimeStamp(0.8265032866515731);
    msg.setSource(26713U);
    msg.setSourceEntity(22U);
    msg.setDestination(33440U);
    msg.setDestinationEntity(46U);
    msg.seq = 58978U;
    msg.sys.assign("FJDLCVQZSZXIBLVQAMGGYJTKQVDHRNXDRUDWOHKZKCVWVGYRUBJIEZIWFNERYCXUUBBGMFSXCWWDAXRONPYCBWMLYMNXSFSOCDQAUKWHVL");
    msg.value = 0.8647006341696896;

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
    msg.setTimeStamp(0.8503080958631604);
    msg.setSource(20125U);
    msg.setSourceEntity(47U);
    msg.setDestination(1372U);
    msg.setDestinationEntity(170U);
    msg.seq = 49302U;
    msg.sys.assign("XJYJPRLPLSCQPJXMZADGKAVRFAQZYINUEOOZAQEUNVZMSYWEWTIKEIORUBWLHAGCIGERRJKFTYIO");
    msg.value = 0.4277333638404208;

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
    msg.setTimeStamp(0.7281229565444449);
    msg.setSource(64032U);
    msg.setSourceEntity(166U);
    msg.setDestination(30499U);
    msg.setDestinationEntity(249U);
    msg.seq = 48820U;
    msg.sys_dst.assign("BFYVGHPKTEAAHNPYDZEUXOMEXOIFTTFUAEOSBGCIOGRCOXVWCDBGVFLBTNYNKJBTZXLTBKDHDJWUQUSNSW");
    msg.timeout = 0.8369160642471388;

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
    msg.setTimeStamp(0.08274916042950764);
    msg.setSource(8261U);
    msg.setSourceEntity(21U);
    msg.setDestination(56471U);
    msg.setDestinationEntity(134U);
    msg.seq = 41426U;
    msg.sys_dst.assign("LBCYXEJDGENOLWZEHZTBCLMRMOWDKOJWEERJQTUDNFWLRATLSADBXDRIIUFDVNCINZOCVFGJPGMSYKUTSVWTOSTUFQSVKGEARMCJDPPKFBSXYQ");
    msg.timeout = 0.5315610945070994;

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
    msg.setTimeStamp(0.11123257642966844);
    msg.setSource(64361U);
    msg.setSourceEntity(166U);
    msg.setDestination(15775U);
    msg.setDestinationEntity(77U);
    msg.seq = 29404U;
    msg.sys_dst.assign("OBCHPLDQAVY");
    msg.timeout = 0.4993926521403935;

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
    msg.setTimeStamp(0.08157462656190173);
    msg.setSource(59204U);
    msg.setSourceEntity(113U);
    msg.setDestination(63100U);
    msg.setDestinationEntity(216U);
    msg.action = 103U;
    msg.longain = 0.13109701504182725;
    msg.latgain = 0.23045635063100267;
    msg.bondthick = 425542102U;
    msg.leadgain = 0.13694518164232572;
    msg.deconflgain = 0.10304043708690336;

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
    msg.setTimeStamp(0.46201532618971597);
    msg.setSource(5065U);
    msg.setSourceEntity(2U);
    msg.setDestination(2312U);
    msg.setDestinationEntity(237U);
    msg.action = 125U;
    msg.longain = 0.9224392905622204;
    msg.latgain = 0.8083805622322654;
    msg.bondthick = 307702020U;
    msg.leadgain = 0.12109024888722952;
    msg.deconflgain = 0.7719007543737253;

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
    msg.setTimeStamp(0.3927270719974547);
    msg.setSource(35534U);
    msg.setSourceEntity(64U);
    msg.setDestination(8247U);
    msg.setDestinationEntity(157U);
    msg.action = 194U;
    msg.longain = 0.020985167902280555;
    msg.latgain = 0.05929479541551774;
    msg.bondthick = 2604913661U;
    msg.leadgain = 0.6478667252308141;
    msg.deconflgain = 0.11559081471609634;

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
    msg.setTimeStamp(0.24531573110413496);
    msg.setSource(14656U);
    msg.setSourceEntity(220U);
    msg.setDestination(43042U);
    msg.setDestinationEntity(216U);
    msg.err_mean = 0.7919618427005854;
    msg.dist_min_abs = 0.4653757587903189;
    msg.dist_min_mean = 0.9185173414844041;

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
    msg.setTimeStamp(0.09126150991174542);
    msg.setSource(25332U);
    msg.setSourceEntity(219U);
    msg.setDestination(52800U);
    msg.setDestinationEntity(225U);
    msg.err_mean = 0.7255866541675013;
    msg.dist_min_abs = 0.010433122102882608;
    msg.dist_min_mean = 0.12317971886966117;

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
    msg.setTimeStamp(0.822910556191996);
    msg.setSource(54255U);
    msg.setSourceEntity(82U);
    msg.setDestination(3650U);
    msg.setDestinationEntity(99U);
    msg.err_mean = 0.28937258185789516;
    msg.dist_min_abs = 0.34041048669735996;
    msg.dist_min_mean = 0.12693589398944027;

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
    msg.setTimeStamp(0.9611598191729588);
    msg.setSource(27505U);
    msg.setSourceEntity(200U);
    msg.setDestination(6050U);
    msg.setDestinationEntity(155U);
    msg.action = 71U;
    msg.lon_gain = 0.33325427805173535;
    msg.lat_gain = 0.40799271424348593;
    msg.bond_thick = 0.5162546125727328;
    msg.lead_gain = 0.7690622812876285;
    msg.deconfl_gain = 0.36225033149576424;
    msg.accel_switch_gain = 0.44199464688870227;
    msg.safe_dist = 0.6916876330877281;
    msg.deconflict_offset = 0.44996180024979926;
    msg.accel_safe_margin = 0.3522494134217702;
    msg.accel_lim_x = 0.5283919439206141;

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
    msg.setTimeStamp(0.16706072331758492);
    msg.setSource(35250U);
    msg.setSourceEntity(112U);
    msg.setDestination(629U);
    msg.setDestinationEntity(237U);
    msg.action = 191U;
    msg.lon_gain = 0.8405538914539261;
    msg.lat_gain = 0.455418694517173;
    msg.bond_thick = 0.3343251706016508;
    msg.lead_gain = 0.056755683678135216;
    msg.deconfl_gain = 0.463037646749039;
    msg.accel_switch_gain = 0.6546813120330021;
    msg.safe_dist = 0.21282785975497132;
    msg.deconflict_offset = 0.041595790259346344;
    msg.accel_safe_margin = 0.5085874251399619;
    msg.accel_lim_x = 0.6268101005243396;

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
    msg.setTimeStamp(0.32758788396855376);
    msg.setSource(13543U);
    msg.setSourceEntity(32U);
    msg.setDestination(42529U);
    msg.setDestinationEntity(101U);
    msg.action = 234U;
    msg.lon_gain = 0.8025406801923972;
    msg.lat_gain = 0.8847231682487342;
    msg.bond_thick = 0.05621047703586157;
    msg.lead_gain = 0.10484027021805364;
    msg.deconfl_gain = 0.6350838934195913;
    msg.accel_switch_gain = 0.6304616648110363;
    msg.safe_dist = 0.13264509488033327;
    msg.deconflict_offset = 0.24593902378556154;
    msg.accel_safe_margin = 0.41460027958341716;
    msg.accel_lim_x = 0.5209423292202399;

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
    msg.setTimeStamp(0.4855065604538734);
    msg.setSource(12351U);
    msg.setSourceEntity(73U);
    msg.setDestination(27617U);
    msg.setDestinationEntity(11U);
    msg.type = 2U;
    msg.op = 184U;
    msg.err_mean = 0.09308152429657834;
    msg.dist_min_abs = 0.4532750547908281;
    msg.dist_min_mean = 0.0958102594849477;
    msg.roll_rate_mean = 0.9336409474360916;
    msg.time = 0.14794994670413952;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 74U;
    tmp_msg_0.lon_gain = 0.6341246641538212;
    tmp_msg_0.lat_gain = 0.2312366404116749;
    tmp_msg_0.bond_thick = 0.9603365729430713;
    tmp_msg_0.lead_gain = 0.5983176736187418;
    tmp_msg_0.deconfl_gain = 0.5478020275606307;
    tmp_msg_0.accel_switch_gain = 0.06184957050862261;
    tmp_msg_0.safe_dist = 0.7342754163587831;
    tmp_msg_0.deconflict_offset = 0.07882351633439966;
    tmp_msg_0.accel_safe_margin = 0.3227285598105416;
    tmp_msg_0.accel_lim_x = 0.8524151494055769;
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
    msg.setTimeStamp(0.7263026753106345);
    msg.setSource(53853U);
    msg.setSourceEntity(132U);
    msg.setDestination(60144U);
    msg.setDestinationEntity(244U);
    msg.type = 51U;
    msg.op = 36U;
    msg.err_mean = 0.5490871180079443;
    msg.dist_min_abs = 0.8907625086119344;
    msg.dist_min_mean = 0.1516002996208986;
    msg.roll_rate_mean = 0.20711184101994873;
    msg.time = 0.8714088878187503;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 21U;
    tmp_msg_0.lon_gain = 0.9643420316580719;
    tmp_msg_0.lat_gain = 0.47830591635512;
    tmp_msg_0.bond_thick = 0.28997463390526934;
    tmp_msg_0.lead_gain = 0.22052308453319047;
    tmp_msg_0.deconfl_gain = 0.6557148913615671;
    tmp_msg_0.accel_switch_gain = 0.7753606186373618;
    tmp_msg_0.safe_dist = 0.08892292539880564;
    tmp_msg_0.deconflict_offset = 0.9896707539293885;
    tmp_msg_0.accel_safe_margin = 0.9994743287986281;
    tmp_msg_0.accel_lim_x = 0.26991802949332633;
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
    msg.setTimeStamp(0.19907809035860824);
    msg.setSource(56570U);
    msg.setSourceEntity(83U);
    msg.setDestination(26621U);
    msg.setDestinationEntity(82U);
    msg.type = 177U;
    msg.op = 161U;
    msg.err_mean = 0.8808377228085973;
    msg.dist_min_abs = 0.3744940435062123;
    msg.dist_min_mean = 0.6661155204565744;
    msg.roll_rate_mean = 0.9540651524347415;
    msg.time = 0.31487026522051964;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 199U;
    tmp_msg_0.lon_gain = 0.16742864006122793;
    tmp_msg_0.lat_gain = 0.31303319730323864;
    tmp_msg_0.bond_thick = 0.7151119443600865;
    tmp_msg_0.lead_gain = 0.041737526412873316;
    tmp_msg_0.deconfl_gain = 0.25480901110016685;
    tmp_msg_0.accel_switch_gain = 0.5735717175356915;
    tmp_msg_0.safe_dist = 0.3523601846724448;
    tmp_msg_0.deconflict_offset = 0.983183711094789;
    tmp_msg_0.accel_safe_margin = 0.6465678854424484;
    tmp_msg_0.accel_lim_x = 0.7808772692049847;
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
    msg.setTimeStamp(0.834335943211886);
    msg.setSource(46918U);
    msg.setSourceEntity(206U);
    msg.setDestination(36915U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.4581784105914367;
    msg.lon = 0.013785736061529885;
    msg.eta = 3247991415U;
    msg.duration = 48981U;

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
    msg.setTimeStamp(0.06619390895730137);
    msg.setSource(4761U);
    msg.setSourceEntity(146U);
    msg.setDestination(2190U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.5384736578181288;
    msg.lon = 0.9170059966821328;
    msg.eta = 930733801U;
    msg.duration = 41581U;

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
    msg.setTimeStamp(0.03387248855933622);
    msg.setSource(33772U);
    msg.setSourceEntity(22U);
    msg.setDestination(28951U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.633893112328573;
    msg.lon = 0.42076137802566804;
    msg.eta = 865260620U;
    msg.duration = 30155U;

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
    msg.setTimeStamp(0.6603412102381148);
    msg.setSource(43496U);
    msg.setSourceEntity(13U);
    msg.setDestination(24133U);
    msg.setDestinationEntity(0U);
    msg.plan_id = 27357U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6656760057302524;
    tmp_msg_0.lon = 0.5063167407060447;
    tmp_msg_0.eta = 4176527760U;
    tmp_msg_0.duration = 11815U;
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
    msg.setTimeStamp(0.867150906888091);
    msg.setSource(34770U);
    msg.setSourceEntity(76U);
    msg.setDestination(32023U);
    msg.setDestinationEntity(167U);
    msg.plan_id = 25024U;

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
    msg.setTimeStamp(0.08635110816709679);
    msg.setSource(56069U);
    msg.setSourceEntity(183U);
    msg.setDestination(19134U);
    msg.setDestinationEntity(241U);
    msg.plan_id = 61274U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8807410206413662;
    tmp_msg_0.lon = 0.7143837002722996;
    tmp_msg_0.eta = 1350590123U;
    tmp_msg_0.duration = 49728U;
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
    msg.setTimeStamp(0.9298727222154002);
    msg.setSource(16441U);
    msg.setSourceEntity(48U);
    msg.setDestination(35964U);
    msg.setDestinationEntity(162U);
    msg.type = 224U;
    msg.command = 32U;
    msg.settings.assign("SHBDCTGKWPEEBMRWEUCKSCVGRNXEGDBGNBCEAJQCQCQYVEFGSGETBRMTHZEXSDKVAJCVVSUMSJTRISNAWALJYKWMTZICGLXAFHIULNZVFIFFGRTMRVPKNUBPFZZFOWQULDWOKIDQYBOOILFBUVFGQOTURLJODHLLKBNVYGIPAXDMPSKOZXBYTNWPPUFLQJXAPMCYXXMEEDJSTOHRIWZMHYORYZYNJSXCHDKHQUHWJUPADZXLANZYPWHTQOJ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 12042U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DEDWYMCUBXGTSPDXEHTZXFAENNTVNBYMNSEZPBAMVDTASSEXJZTXOQXAPMRMIGOLWSKDCFVUUZLNEKCGUKHJLQIFXBLOFOOVBCECOVHGSNURPAFHSGMYRRKVPPRBZIPNPCOQPMSKXMZJWBYLDLFTUDRYQTLAWJTTFJHJDQILBWIKUYCVRVRWGEALVYI");

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
    msg.setTimeStamp(0.45334710323734473);
    msg.setSource(456U);
    msg.setSourceEntity(88U);
    msg.setDestination(46497U);
    msg.setDestinationEntity(151U);
    msg.type = 17U;
    msg.command = 54U;
    msg.settings.assign("JTXMINZSWMHYFZZNWNSKAQGWINQOZSLDYDBUNFDRFGBBLDYOPMYJCIFBUVAGXQVMKLYGUQKIHYGIGRZOMFJPXXAMMXQZBMPAGBJMQOQJRGCCNCDTEUTOFHPBXENRCLLLTQRKYWZEZZJTMOLIDUNFLUKPPRWUTVUWFPYBCEGVQFESJVJIKEXTEDGJKHERRCK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 47581U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8999652870703913;
    tmp_tmp_msg_0_0.lon = 0.31948893393736577;
    tmp_tmp_msg_0_0.eta = 3942411493U;
    tmp_tmp_msg_0_0.duration = 11430U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OQDQQIXNBSXFGTEQVWARJQUINMBLVPKK");

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
    msg.setTimeStamp(0.3423729914437077);
    msg.setSource(34583U);
    msg.setSourceEntity(154U);
    msg.setDestination(17440U);
    msg.setDestinationEntity(19U);
    msg.type = 30U;
    msg.command = 70U;
    msg.settings.assign("DCFWRJKSPASLRSBYTUD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 16263U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.30062967263225127;
    tmp_tmp_msg_0_0.lon = 0.21043578922894013;
    tmp_tmp_msg_0_0.eta = 594517471U;
    tmp_tmp_msg_0_0.duration = 29585U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VTFYNXSTTNFPAJPANLEHNBQVRMPXTRIWBSDOUWRZXGFWMYLSKDLYGLKVOTXXCWRWAMZJCRKEJAQLZDCIZCSIQZEADVGETCMOQDAUFNAKWFUXKKWIYCYPHNIHJMKQUUNRDTTPPQDRKDIEJHLHJKWLVWCFYOHUJMDZNXOVLEZBEPJVIGIYVLYUFRMGBHJNDGSTBZC");

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
    msg.setTimeStamp(0.25932871009843483);
    msg.setSource(61978U);
    msg.setSourceEntity(8U);
    msg.setDestination(7817U);
    msg.setDestinationEntity(104U);
    msg.state = 148U;
    msg.plan_id = 58617U;
    msg.wpt_id = 7U;
    msg.settings_chk = 63241U;

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
    msg.setTimeStamp(0.6170620288424932);
    msg.setSource(34035U);
    msg.setSourceEntity(147U);
    msg.setDestination(26488U);
    msg.setDestinationEntity(118U);
    msg.state = 145U;
    msg.plan_id = 64371U;
    msg.wpt_id = 151U;
    msg.settings_chk = 49176U;

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
    msg.setTimeStamp(0.5404105939946581);
    msg.setSource(18734U);
    msg.setSourceEntity(62U);
    msg.setDestination(55623U);
    msg.setDestinationEntity(252U);
    msg.state = 143U;
    msg.plan_id = 25852U;
    msg.wpt_id = 87U;
    msg.settings_chk = 46019U;

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
    msg.setTimeStamp(0.9426368721559337);
    msg.setSource(41919U);
    msg.setSourceEntity(49U);
    msg.setDestination(13116U);
    msg.setDestinationEntity(241U);
    msg.uid = 144U;
    msg.frag_number = 221U;
    msg.num_frags = 136U;
    const signed char tmp_msg_0[] = {64, -24, 49, -106, 59, 2, 84, -79, -41, 126, -4, 68, 118, 48, -77, 10, -112, -72, -86, -59, -114, 2, -29, 18, -55, -112, 45, -11, 117, 61, -120, -77, 10, 32, -31, -5, -105, 15, 65, -85, 115, -13, 90, 49, 22, -125, -114, -97, 124, -19, -98, 35, 14, 41, 5, 115, -46, 11, 99, 124, -115, -80, -82, -39, 112, 73, -124, -125, 64, 97, -83, -100, -70, -19, 97, 114, 67, 94, 9, 85, 88, -61, 106, 32, -85, 33, -116, -102, 79, 112, -34, 106, -36, 90, 36, -40, 88, -23, 34, 93, -75, 22, 32, 9, -14, 89, 18, -124, -26, 85, -47, 75, -62, 45, -83, 100, 84, -47, -75, -9, 37, 10, -74, -12, -72, -47, 74, 33, -55, -20, 123, -114, -81, -2, 2, 23, 110, -43, 80, 116, -125, -111, 38, 75, 76, -7, 41, -15, 9, -108, 97, 7, -5, 99, -16, -88, 21, -124, 10, 95, -43, -31, 103};
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
    msg.setTimeStamp(0.7744931008110142);
    msg.setSource(10650U);
    msg.setSourceEntity(113U);
    msg.setDestination(10157U);
    msg.setDestinationEntity(94U);
    msg.uid = 203U;
    msg.frag_number = 24U;
    msg.num_frags = 41U;
    const signed char tmp_msg_0[] = {126, -108, 3, 46, -14, -42, 104, 8, -84, 122, 75, 21, 107, 89, 22, -16, -83, -102, 69, 59, 102, -72, -84, 91, 117, -22, -100, 111, -124, -112, 4, 19, 21, -55, -79, 23, -119, 92, 82, -64, -35, 110, -115, -117, 85, 8, 104, 89, -90, 21, 17, 19, 21, -106, -100, 82, -124, -79, -37, 29, -88, -34, 85, -122, -106, -42, -19, -124, 120, -95, -17, -33};
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
    msg.setTimeStamp(0.1391355155824926);
    msg.setSource(2244U);
    msg.setSourceEntity(224U);
    msg.setDestination(16612U);
    msg.setDestinationEntity(154U);
    msg.uid = 1U;
    msg.frag_number = 140U;
    msg.num_frags = 165U;
    const signed char tmp_msg_0[] = {-13, 66, 43, -34, 88, -118, -14, 6, 96, -20, 73, -22, 26, -82, -72, 105, -13, -6, 115, -78, -17, 35, 54, 110, -39, -91, -31, -18, -114, 25, -116, -8, 58, -79, 23, -116, -66, -5, -122, -98, -64, -93, -96, 33, -58, -61, 10, 74, 56, -98, 29, -98, -116, 21, 113, 86, -32, 64, 21, -109, 113, 22, -10};
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
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.022842541075323575);
    msg.setSource(3596U);
    msg.setSourceEntity(38U);
    msg.setDestination(26526U);
    msg.setDestinationEntity(208U);
    msg.uid = 195U;
    msg.op = 181U;
    msg.frag_ids.assign("UQUNASJXIVKXDQJGMFZMFCVRHHOCGQYBBHPUQFJJWZLYOOBZLDLPHVXJMRQEVYCCFBAWNTHDTEOEIKNTONXGEBPSDVKVIQZKLFMSJMRSQIXHUQHXTPNWUXKAMLSVTFBZPTDVUPPPKQRZYBZSQFWYROJP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.005874283033261873);
    msg.setSource(57616U);
    msg.setSourceEntity(78U);
    msg.setDestination(30184U);
    msg.setDestinationEntity(12U);
    msg.uid = 9U;
    msg.op = 218U;
    msg.frag_ids.assign("BCJCBLEPZHZFMBVFGNOADELBRZQSFZNLYSMFLAAPDMZTWEXHXPXRGOKKQKJCDCCJNFBJTRBORLWUQGOIRNUSIQYLWJINGYHDNWZHWOYBFTRENMHZHUKRIZRYCDKYKFKUTQKAIZTQYJACVGFSCWEVYTSXIOXMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.9766636532915897);
    msg.setSource(8396U);
    msg.setSourceEntity(33U);
    msg.setDestination(26278U);
    msg.setDestinationEntity(63U);
    msg.uid = 174U;
    msg.op = 63U;
    msg.frag_ids.assign("PMVEVOAYWFTRYFMKPBQOTKPUAOXNNVKCXTCNWPEBFEVKUGJYUSRWSZVJLIZHJDNVIBZXCMGWTMZCHVMAQJOTOYSGEFAYOFGATMXGHU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7131547596491196);
    msg.setSource(46077U);
    msg.setSourceEntity(249U);
    msg.setDestination(37151U);
    msg.setDestinationEntity(240U);
    msg.content_type.assign("NFXCSYDDFZMOSNZJJDGKISEJHLBZAVAUVNXWZGOIFQRUANNCVHIGZBYVLWXELWOWEADKHLGLDLJARPDTMFEMOOPPJTIFKOHYUMURHRJMPWXFMKSPFQSPDDKHVRXOCWVVRIWUTTIBQRYXCW");
    const signed char tmp_msg_0[] = {-38, -109, 114, 94, 41, -92, -43, 55, 66, 93, -36, -64, -59, -78, -125, -58, -121, -54, -117, 39};
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
    msg.setTimeStamp(0.5238774825339617);
    msg.setSource(47925U);
    msg.setSourceEntity(19U);
    msg.setDestination(4480U);
    msg.setDestinationEntity(48U);
    msg.content_type.assign("HHKWJRBXTWGDBBZVVWKTEANDGFEVYDYONZGQDXUNWJFWFLTTYXYOZCRVJLRGOYUUZFHQOWJAKHVKUFHKYARNCTPQSGEESJPJHOJDIRPLTNCQIBVOJYUETQMSSRXMUPMNINSQCLSZTFSXLVMRGHBEMOZXCFDSQLAXIZPPKMISCFPUHRKAQIFFEXYS");
    const signed char tmp_msg_0[] = {80, -82, -40, -83, -29, -69, 67, 98, -16, 73, -4, 76, -12, -93, 78, -69, 54, -98, 40, 3, -2, 56, -85, -68, 17, -22, 68, -16, 71, -56, -103, -79, -111, -9, 78, -46, -76, 58, -56, -65, 3, 35, 97, -78, -76, -17, 43, -73, 100, -7, 46, -101, 96, -111, 35, 113, 121, -22, 52, -64, 117, -18, 47, -88, -15, 42, -66, 3, 85, 121, 13, 1, 92, -3, 36, -37, -96, 7, 122, -19, -18, 97, -99, 95, 116, 125, 76, 115, -97, -89, 23, 39, 105, 43, -101, 86, -128, -111, -52, -119, -86, 76, 114, -30, -122, 120, 1, -97, 82, -8, -47, 82, 97, 75, 50, 120, -41, -67, 66, -37, 91, -113, -77, -36, -29, -124, 42, 85, -82, -8, -116, 97, 84, -24, -121, -38, -26, -75, -76, 111, -6, 22, 43, 122, -102, 3, -27, 49, 126, -84, 45, -115, -83, 104, -48, -83, 106, 112, -27, -123, 69, -112, 84, -67, 14, -7, 108, -121, -57, 56, 33, -70, 16, 52, 78, 84, 122, -76, 18, -87, 95, 98, -124, 68, 59, 77, 77, -73, 106, 83, -22, 77, -20, -65, 10, 13, 31, -28, -60, 125};
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
    msg.setTimeStamp(0.2252730991693901);
    msg.setSource(57702U);
    msg.setSourceEntity(118U);
    msg.setDestination(41596U);
    msg.setDestinationEntity(229U);
    msg.content_type.assign("EMVRRSQFDHCZOYGTMIPCIRRBDNOXDZNGMRBHQSQYPTIULRHNCOEQFMRRIPMGOUFYHTXQAICQKVCKHFOPZAOUXYDLAXBNNJVSBPXNOTAKIVFWEUSSEJKVGTXWAGPDMBJJYUXKCYTYATSFJLWEWNWYOQCANALLAWKVDEHIKS");
    const signed char tmp_msg_0[] = {78, -115, 115, 19, -127, 105, -127, 119, 52, 126, -2, -80, -118, -104, 89, 80, 67, 37, 110, -90, 51, -17, -93, -69, 0, -94, 5, 77, 75, 115, -2, -93, -88, 51, 118, 55, 89, 49, 69, -97, 65, -48, 96, 68, -51, 126, -30, -61, 46, 101, -39, 84, 15, 68, 101, 52, 15, -35, -23, -42, -117, -79, -21, -51, 31, -75, 28, 64, -58, 97, 114, 7, -49, 88, 42, -52, 27, 88, -78, -34, 112, -122, -62, 30, 97, -82, -110, 77, -124, -29, 53, 32, -61, 103, -69, -112, -120, -62, 68, -17, 13, 82, -65, 100, 118, 43, -66, 77, -74, -32, -114, 58, 119, 14, -79, -4, -115, 28, -82, 70, -11, 13, 91, 120, -77, 31, 66, 86, -77, 57, 54, -72, -38, -70, -79, 15, 122, 68, -34, -35, -109, -94, -71, -83, 58, 122, -107, 79, 59, 52, 112, 77, 98, -34};
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
    msg.setTimeStamp(0.3131137054714844);
    msg.setSource(59194U);
    msg.setSourceEntity(171U);
    msg.setDestination(47701U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.8983904419157491);
    msg.setSource(58161U);
    msg.setSourceEntity(175U);
    msg.setDestination(16641U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.30651490744351984);
    msg.setSource(61996U);
    msg.setSourceEntity(117U);
    msg.setDestination(51577U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.2253755783087914);
    msg.setSource(53766U);
    msg.setSourceEntity(63U);
    msg.setDestination(39302U);
    msg.setDestinationEntity(26U);
    msg.target = 13948U;
    msg.bearing = 0.809323958892454;
    msg.elevation = 0.10311420143487349;

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
    msg.setTimeStamp(0.5884375675391049);
    msg.setSource(23262U);
    msg.setSourceEntity(7U);
    msg.setDestination(26860U);
    msg.setDestinationEntity(171U);
    msg.target = 5544U;
    msg.bearing = 0.4234653624592226;
    msg.elevation = 0.8691933356070685;

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
    msg.setTimeStamp(0.6357045290249823);
    msg.setSource(52197U);
    msg.setSourceEntity(133U);
    msg.setDestination(22249U);
    msg.setDestinationEntity(239U);
    msg.target = 54707U;
    msg.bearing = 0.9715347659236122;
    msg.elevation = 0.25229696088345854;

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
    msg.setTimeStamp(0.7913867216644487);
    msg.setSource(59547U);
    msg.setSourceEntity(236U);
    msg.setDestination(20104U);
    msg.setDestinationEntity(11U);
    msg.target = 34191U;
    msg.x = 0.6428945363829953;
    msg.y = 0.1233346150871224;
    msg.z = 0.9165484183708587;

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
    msg.setTimeStamp(0.9139603880844884);
    msg.setSource(46277U);
    msg.setSourceEntity(71U);
    msg.setDestination(16226U);
    msg.setDestinationEntity(112U);
    msg.target = 51557U;
    msg.x = 0.9022664053628742;
    msg.y = 0.6569298727810615;
    msg.z = 0.6265113827438978;

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
    msg.setTimeStamp(0.31392542549064706);
    msg.setSource(32786U);
    msg.setSourceEntity(33U);
    msg.setDestination(39596U);
    msg.setDestinationEntity(34U);
    msg.target = 62562U;
    msg.x = 0.9657004023815247;
    msg.y = 0.2901173368574128;
    msg.z = 0.7283995823242477;

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
    msg.setTimeStamp(0.07130898331894187);
    msg.setSource(16410U);
    msg.setSourceEntity(83U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(136U);
    msg.target = 24820U;
    msg.lat = 0.47541390157783214;
    msg.lon = 0.8311749945612443;
    msg.z_units = 106U;
    msg.z = 0.9791608175930586;

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
    msg.setTimeStamp(0.5796216351434599);
    msg.setSource(54912U);
    msg.setSourceEntity(121U);
    msg.setDestination(3394U);
    msg.setDestinationEntity(84U);
    msg.target = 42282U;
    msg.lat = 0.5357407237690339;
    msg.lon = 0.8820877668799791;
    msg.z_units = 249U;
    msg.z = 0.6932674952219052;

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
    msg.setTimeStamp(0.07525538189671355);
    msg.setSource(59967U);
    msg.setSourceEntity(145U);
    msg.setDestination(56749U);
    msg.setDestinationEntity(172U);
    msg.target = 4722U;
    msg.lat = 0.6198257750900523;
    msg.lon = 0.2634927515576111;
    msg.z_units = 105U;
    msg.z = 0.3287966735769283;

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
    msg.setTimeStamp(0.1695499321236541);
    msg.setSource(29181U);
    msg.setSourceEntity(203U);
    msg.setDestination(10704U);
    msg.setDestinationEntity(55U);
    msg.locale.assign("QCOHIGYENXGWZXWWJNRYVZXNSISBTQMXEZNDSLITUIUSYKHJEKRCMCQKMBIKQPIHOLARFPKY");
    const signed char tmp_msg_0[] = {-66, 3, 116, 59, -121, 36, 90, -30, -54, -36, -105, -61, -25, -97, 73, 26, 73, -113, -121, -12, -51, 63, 4, 101, 73, -8, -124, -45, 61, -100, -128, 9, 72, -46, -125, 117, 99, -13, 101, 52, -99, 117, -114, -27, 100, -117, -91, -51, -81, 61, 58, -32, 32, 46, -50, 21, 49, -122, 42, 96, 97, 8, 75, 3, -80, 44, 68, -64, 59, 24, 19, 7, 39, 123, -22, 26, 51, 36, 12, 52, 94, -73, 28, -84, -124, -85, -79, 15, 116, 62, 23, -37, -125, 117, 48, 63, -23, 2, 31, 41, 83, -89, 5, -79, -94, -89, 28, 124, 60, 99, -65, -25, 76, -37, 125, 23, -89, 8, -65, -41, 5, 33, -43, 68, 35, -52, -63, -5, 19, -124, -24, -45, 81, 89, 123, -113, -82, -128, 44, -96, 20, 99, -13, -88, -6, 65, -81, 100, 59, -59, -25, -59, 70, -81, 86, 72, 22, 8, -80, 85, 66, 6, 102, 43, 0, -101, -66, 125, 38, 84, -11, 48, 19, 28, 27, -11, -11, 53, 89, 119, 59, 50, 3, -93, 43, -123, 106, -96, -45, -97, 37, 16, -33, 120};
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
    msg.setTimeStamp(0.26012652721204454);
    msg.setSource(4170U);
    msg.setSourceEntity(223U);
    msg.setDestination(49436U);
    msg.setDestinationEntity(143U);
    msg.locale.assign("DWTNPWUUFBHALQDUNOKLMTZRGGJHBDCUEFZSVMPJOMLDZRKFEMZVBSOHOC");
    const signed char tmp_msg_0[] = {0, 27, 18, -87, 5, 56, -120, 40, -26, -85, 75, -90, -25, -39, -10, -41, 27, 34, -18, 3, 63, -19, 102, -114, 117, 123, 36, 91, -2, -33, -120, 105, -46, 95, 46, 12, -32, 58, 123, -121, -37, -92, -6, -62, -68, 4, -111, -66, -113, -73, 72, -26, 99, 94, 103, 16, -107, -89, 66, -95, -93, -124, 115, 117, 20, -29, 22, 30, -29, 63, -88, -87, -71, -74, -25, -76, 74, -77, 10, -72, -87, 121, 40, -88, -31, -70, -99, 1, 96, -3, -46, 83, 54, -81, -51, 22, -115, 13, -11, -90, 80, 58, -59, 22, -99, 56, -11, -61, 6, -62, -20, -60, 121, 41, -55, 75, -59, -22, -95, -114, 43, 45, -11, 30, 22, -69, -115, -70, 97, 2, 42, 78, -17, -28, -103, -42, -43, -91, -39, -46, -123, -103, 105, -32, -90, 37, 88, 4, 101, 3, -72, -21, 20, -125, 50, 119, 61, -38, -79, -92, 64, -95, 113, -8, -17, -34, 47, -94, 114, -117, 104, 121, 28, 112, 119, 51, -92, 29, -32, -3, 81, 77, -67, -54, 22};
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
    msg.setTimeStamp(0.585343674407283);
    msg.setSource(6512U);
    msg.setSourceEntity(178U);
    msg.setDestination(29517U);
    msg.setDestinationEntity(248U);
    msg.locale.assign("ZSUDNVHNJYSATFBFBWADCJUMSLFEZRXVYERMCQODIIIOHROJQXAPKSXLFZVXRQKKYFXGWJXRYLBNWJUEPITCWKDYNUENSTORCGSVMHERMRUSHXQLXYDQPBJYWGCH");
    const signed char tmp_msg_0[] = {-101, -40, -7, -115, -120, -126, 79, -66, -44, -126, -104, 124, -13, 97, 13, 30, -21, 55, -125, 70, -52, -114, 46, 26, -24, -56, -67, -81, 63, 10, -98, 3, 57, 18, -31, 44, -40, -64, 112, 70, 41, 70, -55, 61, 126, -63, -87, -111, 93, -95, -49, -78, 33, 103, 14, 101, 19, -97, 97, 6, -31, 19, 109, -49, 107, -60, -57, -94, -26, 89, -86, 49, 97, 57, -121, -102, -10, -63, -72, -66, 35, -37, 67, 103, -71, 125, -37, -46, 45, -125, -2, 31, -91, -122, -38, 18, 76, -82, 64, 102, -35, -114, 33, 19, -111, -3, 80, 72, -121, 97, -2, 10, -77, -100, -102, 1, -23, -8, 87, 1, -104, -49, 82, 86, 30, 41, -87, -95, -125, -34, 6, 32, 34, 108, 10, -89, 88, 13, -125, 62, -112, -110, 81, -78, -43, -93, 110, -98, -105, 44, 111, 84, 103, -76, 123, -65, -58, 56, -19, -119, 83, 126, 97, 20, -2, 100};
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
    msg.setTimeStamp(0.10709064269212809);
    msg.setSource(28237U);
    msg.setSourceEntity(254U);
    msg.setDestination(64250U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.06629719190343131);
    msg.setSource(30432U);
    msg.setSourceEntity(159U);
    msg.setDestination(4581U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.39814636184627894);
    msg.setSource(55577U);
    msg.setSourceEntity(118U);
    msg.setDestination(63202U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.5443939002964304);
    msg.setSource(44514U);
    msg.setSourceEntity(223U);
    msg.setDestination(10955U);
    msg.setDestinationEntity(194U);
    msg.camid = 249U;
    msg.x = 26614U;
    msg.y = 33680U;

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
    msg.setTimeStamp(0.1701419995110084);
    msg.setSource(57717U);
    msg.setSourceEntity(254U);
    msg.setDestination(63274U);
    msg.setDestinationEntity(224U);
    msg.camid = 144U;
    msg.x = 13612U;
    msg.y = 54372U;

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
    msg.setTimeStamp(0.8924418988273377);
    msg.setSource(7550U);
    msg.setSourceEntity(53U);
    msg.setDestination(61402U);
    msg.setDestinationEntity(0U);
    msg.camid = 217U;
    msg.x = 24245U;
    msg.y = 56699U;

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
    msg.setTimeStamp(0.02088144474657061);
    msg.setSource(43689U);
    msg.setSourceEntity(219U);
    msg.setDestination(30486U);
    msg.setDestinationEntity(70U);
    msg.camid = 69U;
    msg.x = 49724U;
    msg.y = 58345U;

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
    msg.setTimeStamp(0.683855039977164);
    msg.setSource(21305U);
    msg.setSourceEntity(11U);
    msg.setDestination(27083U);
    msg.setDestinationEntity(68U);
    msg.camid = 130U;
    msg.x = 11135U;
    msg.y = 51094U;

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
    msg.setTimeStamp(0.5184783100642404);
    msg.setSource(45904U);
    msg.setSourceEntity(114U);
    msg.setDestination(8488U);
    msg.setDestinationEntity(135U);
    msg.camid = 225U;
    msg.x = 29338U;
    msg.y = 20950U;

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
    msg.setTimeStamp(0.6522243871133491);
    msg.setSource(23876U);
    msg.setSourceEntity(45U);
    msg.setDestination(51246U);
    msg.setDestinationEntity(6U);
    msg.tracking = 21U;
    msg.lat = 0.9740326827885505;
    msg.lon = 0.37600264085272483;
    msg.x = 0.6583685020070706;
    msg.y = 0.798845731391302;
    msg.z = 0.41458956719740947;

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
    msg.setTimeStamp(0.8835338068472667);
    msg.setSource(24330U);
    msg.setSourceEntity(197U);
    msg.setDestination(20433U);
    msg.setDestinationEntity(111U);
    msg.tracking = 125U;
    msg.lat = 0.1330849815264994;
    msg.lon = 0.5093397783583224;
    msg.x = 0.04447384616577188;
    msg.y = 0.6682176759899354;
    msg.z = 0.07914225068956082;

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
    msg.setTimeStamp(0.3382810109427069);
    msg.setSource(62069U);
    msg.setSourceEntity(159U);
    msg.setDestination(47050U);
    msg.setDestinationEntity(224U);
    msg.tracking = 134U;
    msg.lat = 0.753539196568513;
    msg.lon = 0.24031521647038911;
    msg.x = 0.995316778783464;
    msg.y = 0.3475878728375489;
    msg.z = 0.3633648321925229;

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
    msg.setTimeStamp(0.5809423572823665);
    msg.setSource(26387U);
    msg.setSourceEntity(230U);
    msg.setDestination(3195U);
    msg.setDestinationEntity(30U);
    msg.target.assign("MYWSKJZOQJYZNLGKUKXUPMFWUMZMRGFNJMPFYCFSHFQXUXCNGZDWLXUEJLCOFSDHSLQAVRBMGCWUENAOLARBYHEVYOFITSYXOKKDGVDNNEZGQALPNSRSABCQHCHWIMSIDUCIPNFCVPXIJQBRBDKGCPTJNOKTSMQERWZNIHFKIWGVAHWXBKBVETBPFOPZJWJQHIOBTPRRSEEGRTDAJTIZWKQAXOTIEAZYHTLQYUDMLURVAGXEHDCYVOZTLBX");
    msg.lbearing = 0.607550890941671;
    msg.lelevation = 0.10314606904038282;
    msg.bearing = 0.9304501751571397;
    msg.elevation = 0.9802660830260793;
    msg.phi = 0.40597471244758887;
    msg.theta = 0.37135119341026424;
    msg.psi = 0.31331413111946416;
    msg.accuracy = 0.04867530396407094;

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
    msg.setTimeStamp(0.23995640945648433);
    msg.setSource(5194U);
    msg.setSourceEntity(253U);
    msg.setDestination(7191U);
    msg.setDestinationEntity(57U);
    msg.target.assign("OCBJWTBVMQRXSYMZXVSLWTPSDVCEXRWRWZPPBWVHSJONFEWZXEIUYGQSDDTMGFZDNHMUSTRKEJAVOHYFFWKUNJTMJLRJKHLFQWLXKGUAEOCTFEYNIOTAAPGUYGZNGQCLJHMLQCMDBPSCGULGYSOIYZCIKQQDFBRAFJQEVFULCBXPYOTDBQVYJOXRMFWQKMZIBNHPORAXURDWMVHAUVEHCTNANGKYCXESVIT");
    msg.lbearing = 0.15953295651621646;
    msg.lelevation = 0.060965847169505816;
    msg.bearing = 0.6668747598422345;
    msg.elevation = 0.5523787983122204;
    msg.phi = 0.500317691945507;
    msg.theta = 0.058198320614868626;
    msg.psi = 0.09921052612530279;
    msg.accuracy = 0.3373831208400122;

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
    msg.setTimeStamp(0.7667836629408903);
    msg.setSource(24901U);
    msg.setSourceEntity(47U);
    msg.setDestination(55107U);
    msg.setDestinationEntity(28U);
    msg.target.assign("MEEBCWTGUZQFVCGALYKKEUCPIZURDTQCJVJOOQNFODHDHBOXGFPKIEEBMWNWBAKGWFDNWSKUOIKYSOUJVHLSLMRZ");
    msg.lbearing = 0.706479882956418;
    msg.lelevation = 0.44189743596792175;
    msg.bearing = 0.6645101648532441;
    msg.elevation = 0.7960449537018102;
    msg.phi = 0.6552674985105745;
    msg.theta = 0.9763521887365969;
    msg.psi = 0.12257170066086875;
    msg.accuracy = 0.6903585890505067;

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
    msg.setTimeStamp(0.3693852666666435);
    msg.setSource(63763U);
    msg.setSourceEntity(173U);
    msg.setDestination(23225U);
    msg.setDestinationEntity(223U);
    msg.target.assign("BLQYSIWBXOZCCXWMAPJBEPXRLMUGSOVQWMBHUHHRLTWVYAZCLOINFQNDZHEZDWSVNHXGGUGUCYEPQIKWNLMEGSLTABZKVTVQYJEQFNHZIJFCKUJOJZINRKUXXFQTUBDBJSKRPPEOLMVABYRDSWILLSIOYVXXTTZOMIXAXTMFAUWBYCGTAGDAVCCSARQQMJKWPNPNNPEAVYHRFDFGGOUDYDKJFWSGEVCICMBLQOTRJSKFIPZNKDFMYU");
    msg.x = 0.25357607471987254;
    msg.y = 0.506152781657384;
    msg.z = 0.8115314267569683;
    msg.n = 0.5584845541376846;
    msg.e = 0.16771389392739522;
    msg.d = 0.030566010173623814;
    msg.phi = 0.9874639950376062;
    msg.theta = 0.5918513394221167;
    msg.psi = 0.6360385380022218;
    msg.accuracy = 0.637926953965842;

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
    msg.setTimeStamp(0.22436734013865356);
    msg.setSource(62544U);
    msg.setSourceEntity(22U);
    msg.setDestination(3728U);
    msg.setDestinationEntity(9U);
    msg.target.assign("JBVBKJKISLMBFWIXMJKCCTGUDXWTFJHXGADCYWOOTKDJPTQMBWPTYCDNBLEV");
    msg.x = 0.8224755381975175;
    msg.y = 0.15834343837983544;
    msg.z = 0.8327481294413024;
    msg.n = 0.3743642277410838;
    msg.e = 0.2726925471878382;
    msg.d = 0.025057995743663075;
    msg.phi = 0.2993707600762472;
    msg.theta = 0.3745630063432145;
    msg.psi = 0.40435311441440025;
    msg.accuracy = 0.7755357712218196;

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
    msg.setTimeStamp(0.7973908069439473);
    msg.setSource(2629U);
    msg.setSourceEntity(145U);
    msg.setDestination(63535U);
    msg.setDestinationEntity(47U);
    msg.target.assign("XQGCTAVUGJFBDVZGDFITKDAYEGJZVHXSPPAWLFZJDSRMLAQKWLBVMMYNDTCXKEYRDZL");
    msg.x = 0.04085823658294385;
    msg.y = 0.24991137417886422;
    msg.z = 0.6730400173134672;
    msg.n = 0.40211822413480125;
    msg.e = 0.5445239037815227;
    msg.d = 0.1048011178801449;
    msg.phi = 0.041158964209623394;
    msg.theta = 0.5313553846575136;
    msg.psi = 0.05713611614815717;
    msg.accuracy = 0.9166171928823551;

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
    msg.setTimeStamp(0.08873687163322941);
    msg.setSource(55217U);
    msg.setSourceEntity(112U);
    msg.setDestination(22778U);
    msg.setDestinationEntity(108U);
    msg.target.assign("FMHEKTMVFMNAIAFFFBYJRTBOSUIKFVMWGKVTJUGCNICYJXHOYBSZFETFBNPRCLIGBTRKV");
    msg.lat = 0.14987584156877554;
    msg.lon = 0.7367664552483829;
    msg.z_units = 46U;
    msg.z = 0.4621923657378644;
    msg.accuracy = 0.7497958182177404;

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
    msg.setTimeStamp(0.7007690886259961);
    msg.setSource(15276U);
    msg.setSourceEntity(167U);
    msg.setDestination(32716U);
    msg.setDestinationEntity(114U);
    msg.target.assign("XMWZPUKASDUCXQCUQONNHTXJGBRKZFOSLBHASEASFJOFGWJYOEEMZGNZJMJDFGOMBRAANRCHSWEFJTIQMKSODORTLPUIQUOLXGEYINNYJLLCPXIBXBLAWCGZFPKLHVVIESGNOMWKPFUZETTWJBVCINZKBBWAVPRMKZEHPPMREZDHDRQIXWVHFYQTKDVGUSYTLLYXLVYQWGBYFPJCDOCAXDVDASHTRFUKZUTSWMNNVYYXH");
    msg.lat = 0.5011766462269183;
    msg.lon = 0.2678069204922857;
    msg.z_units = 75U;
    msg.z = 0.020764347293680707;
    msg.accuracy = 0.6703777253724742;

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
    msg.setTimeStamp(0.2671771201370561);
    msg.setSource(57217U);
    msg.setSourceEntity(109U);
    msg.setDestination(19487U);
    msg.setDestinationEntity(217U);
    msg.target.assign("YOGLMSHHSTNHHNBDULDYTEWGXCZXSRUCYUYQFKDNDYSTTEVNJLBAWNOBFKGPVCIAVMZWBBAKNOCGOO");
    msg.lat = 0.819044447573569;
    msg.lon = 0.12163821107109096;
    msg.z_units = 74U;
    msg.z = 0.0335815809622666;
    msg.accuracy = 0.4193475983886388;

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
    msg.setTimeStamp(0.949633597045499);
    msg.setSource(29767U);
    msg.setSourceEntity(224U);
    msg.setDestination(63165U);
    msg.setDestinationEntity(54U);
    msg.name.assign("VLJHTCPCLQEZTOBMHSXNVQJQIYLBYQYTRHILQTJDUZEYEBPQDREUCKNLGSWRURTAXDKVGGOWCKMKFAMDZVWBUZIGQUIESJXRIJIODKISZFOMSNCQWMPRVFUTYHKNGQSSKFMHJKGSYRWWHCPGBLZXAIFPVOCXCFXYAZAVOPKMAUBRPOALJPYJFLNHVXATZUAHBOLDNYSCXYMLHEPHEFTGD");
    msg.lat = 0.6840615447610904;
    msg.lon = 0.7126541719647919;
    msg.z = 0.8213307301837515;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.820570191415879);
    msg.setSource(32516U);
    msg.setSourceEntity(248U);
    msg.setDestination(13953U);
    msg.setDestinationEntity(143U);
    msg.name.assign("EKOQDLKOFJAXASEBHMZOZCTBJVITBMDKQQXTZTXCJYOPDJIDNHAIXVUFUAXZUMVPCVFAEDWHXOBYQRKZQJCFRUNULQQTIEZHHSMRGBHRCHHOYECKYGG");
    msg.lat = 0.8662063886065776;
    msg.lon = 0.8510367682476281;
    msg.z = 0.37964591671280556;
    msg.z_units = 71U;

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
    msg.setTimeStamp(0.43944282702475024);
    msg.setSource(13043U);
    msg.setSourceEntity(192U);
    msg.setDestination(36791U);
    msg.setDestinationEntity(242U);
    msg.name.assign("RDNKIBOLWGDL");
    msg.lat = 0.946811997033503;
    msg.lon = 0.2861981396719253;
    msg.z = 0.20291329128637592;
    msg.z_units = 143U;

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
    msg.setTimeStamp(0.5131443823221747);
    msg.setSource(50267U);
    msg.setSourceEntity(137U);
    msg.setDestination(57621U);
    msg.setDestinationEntity(68U);
    msg.op = 93U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JACTOLSCOTMAVGZKLCJMMTFGHBSBPXESNNVMTNJGHVANSQZEOKMQWIIPOLNTKUIZERSEVUYZZGNZIQZTYJREKDA");
    tmp_msg_0.lat = 0.3277229958766056;
    tmp_msg_0.lon = 0.8113387672166006;
    tmp_msg_0.z = 0.08404380555805546;
    tmp_msg_0.z_units = 189U;
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
    msg.setTimeStamp(0.19567524636843558);
    msg.setSource(8733U);
    msg.setSourceEntity(181U);
    msg.setDestination(12410U);
    msg.setDestinationEntity(133U);
    msg.op = 5U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HFODVTLRYNTMVHPJWFFCALNFZIZUSLMFXDSLCXCTPCVDUAMJORBNADXCVEGVLSNMQRXVIDASVOIXQBSPDKJGECZMGNYEBIWHZAUOEEUGQSJBZHUZIWWJYXKABMAZYBULKPLOUPKYATAHIJOFRHWKXXZUTEEPFFSWUCEGNIDMJTQINIBJWQHLDCWNTBRMFTDVFHQRXOXYNBGOJ");
    tmp_msg_0.lat = 0.06977478453816255;
    tmp_msg_0.lon = 0.5205668578908277;
    tmp_msg_0.z = 0.2147922366776135;
    tmp_msg_0.z_units = 244U;
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
    msg.setTimeStamp(0.641478001859223);
    msg.setSource(45895U);
    msg.setSourceEntity(33U);
    msg.setDestination(64951U);
    msg.setDestinationEntity(214U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.9468065768998225);
    msg.setSource(59566U);
    msg.setSourceEntity(61U);
    msg.setDestination(9205U);
    msg.setDestinationEntity(162U);
    msg.value = 0.2456782479420847;
    msg.type = 127U;

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
    msg.setTimeStamp(0.23506736094871694);
    msg.setSource(49842U);
    msg.setSourceEntity(158U);
    msg.setDestination(5083U);
    msg.setDestinationEntity(103U);
    msg.value = 0.9712102486012164;
    msg.type = 134U;

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
    msg.setTimeStamp(0.20107878065850793);
    msg.setSource(23183U);
    msg.setSourceEntity(140U);
    msg.setDestination(24052U);
    msg.setDestinationEntity(113U);
    msg.value = 0.49778310704741;
    msg.type = 174U;

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
    msg.setTimeStamp(0.7072440621530433);
    msg.setSource(2448U);
    msg.setSourceEntity(89U);
    msg.setDestination(36951U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7081816263633213;

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
    msg.setTimeStamp(0.7942781563550896);
    msg.setSource(63830U);
    msg.setSourceEntity(81U);
    msg.setDestination(45954U);
    msg.setDestinationEntity(27U);
    msg.value = 0.6302633382519939;

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
    msg.setTimeStamp(0.8955062792933806);
    msg.setSource(65058U);
    msg.setSourceEntity(128U);
    msg.setDestination(3849U);
    msg.setDestinationEntity(158U);
    msg.value = 0.6850965989687176;

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
    msg.setTimeStamp(0.15229040100055002);
    msg.setSource(60457U);
    msg.setSourceEntity(66U);
    msg.setDestination(12672U);
    msg.setDestinationEntity(250U);
    msg.timestamp_last_service = 0.8724408575391984;
    msg.time_next_service = 0.18316312090614462;
    msg.time_motor_next_service = 0.12414086170617789;
    msg.time_idle_ground = 0.8761356450681372;
    msg.time_idle_air = 0.3291822197606742;
    msg.time_idle_water = 0.6130632238892206;
    msg.time_idle_underwater = 0.2202874434052423;
    msg.time_idle_unknown = 0.30103731852052806;
    msg.time_motor_ground = 0.8469082473986356;
    msg.time_motor_air = 0.21972992780670852;
    msg.time_motor_water = 0.804103764009302;
    msg.time_motor_underwater = 0.8520764091516443;
    msg.time_motor_unknown = 0.7863316664369204;
    msg.rpm_min = 9537;
    msg.rpm_max = -25880;
    msg.depth_max = 0.2240944394890415;

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
    msg.setTimeStamp(0.6641506237521454);
    msg.setSource(40763U);
    msg.setSourceEntity(236U);
    msg.setDestination(46172U);
    msg.setDestinationEntity(44U);
    msg.timestamp_last_service = 0.062287956922502;
    msg.time_next_service = 0.6817663424244833;
    msg.time_motor_next_service = 0.9219673770658885;
    msg.time_idle_ground = 0.9596418520017661;
    msg.time_idle_air = 0.9029995265665337;
    msg.time_idle_water = 0.03678240804206756;
    msg.time_idle_underwater = 0.28785920986031266;
    msg.time_idle_unknown = 0.29411035446765244;
    msg.time_motor_ground = 0.21361260695435857;
    msg.time_motor_air = 0.06386014626075265;
    msg.time_motor_water = 0.41162241993203075;
    msg.time_motor_underwater = 0.08216494843094035;
    msg.time_motor_unknown = 0.2472178372398912;
    msg.rpm_min = -9942;
    msg.rpm_max = -3786;
    msg.depth_max = 0.7156812502549988;

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
    msg.setTimeStamp(0.59598208358627);
    msg.setSource(27348U);
    msg.setSourceEntity(107U);
    msg.setDestination(7369U);
    msg.setDestinationEntity(229U);
    msg.timestamp_last_service = 0.7982866669448766;
    msg.time_next_service = 0.7941206152002103;
    msg.time_motor_next_service = 0.43338388983065146;
    msg.time_idle_ground = 0.5550008895324349;
    msg.time_idle_air = 0.9232738218576076;
    msg.time_idle_water = 0.07151454924080591;
    msg.time_idle_underwater = 0.47619217826099836;
    msg.time_idle_unknown = 0.6862256406604502;
    msg.time_motor_ground = 0.00284059176442375;
    msg.time_motor_air = 0.20807340254837037;
    msg.time_motor_water = 0.9033524532847461;
    msg.time_motor_underwater = 0.3354043598660237;
    msg.time_motor_unknown = 0.03323724441679354;
    msg.rpm_min = -4567;
    msg.rpm_max = -19295;
    msg.depth_max = 0.7210296642676631;

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
    msg.setTimeStamp(0.05407558182079153);
    msg.setSource(57726U);
    msg.setSourceEntity(80U);
    msg.setDestination(25286U);
    msg.setDestinationEntity(3U);
    msg.severity = 46U;
    msg.text.assign("RXZFRCBYOWWESERQPPQBELPSBGOKASBEGZJAAZHFFUNJWYCTUOXLKWKADWPRKTIYCLVJYCTAKWQZVUYZMELXFQMVGTJPQIBXAHFJHMRGMVENNXJVXZBYCOLPOZUUNQDFNTRHSTSHTFFSAMDLSUTQVQUNECXVOVOBPUCWMIJGGGPLIMHMHLZXDEONDPKSAIJGWBAIYMSHNKADGMKCQVHYLTZYWNHDBRTSPFDFI");

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
    msg.setTimeStamp(0.2884853948428674);
    msg.setSource(20180U);
    msg.setSourceEntity(138U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(78U);
    msg.severity = 60U;
    msg.text.assign("YTKCJTQTWXBSPCEBURYPOCGXHXHZRJIMTEDFZIRSRKRTLMOVZTDELZCQUYYEQDITAFOKMVFLFRJBVKSYFVHSENQHMCLVLMUZWNKQIHMNVCFSZGIMOKJEQLSUOAVWXENXPWIWUKDGXRMWZDJOHSSWQAWPSZMALXYDPMVWXBGSLKKOOPABFHGYZBHBVYPNKQPFJGJNIFBGDATPRPUNXGAHEBAEW");

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
    msg.setTimeStamp(0.6723923966494868);
    msg.setSource(376U);
    msg.setSourceEntity(56U);
    msg.setDestination(12571U);
    msg.setDestinationEntity(16U);
    msg.severity = 187U;
    msg.text.assign("CCHQNBWUGTTVUFGHNMLBRTCCBDQVWZGGFZXAMNROJVLLYJXGYIXWVFAWMZWPFSHXNVKKDDJDJCPHVMVNTUTGPBJQDEQHFETTX");

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
    msg.setTimeStamp(0.49033827211269887);
    msg.setSource(35558U);
    msg.setSourceEntity(45U);
    msg.setDestination(10523U);
    msg.setDestinationEntity(149U);
    msg.channel = 112;
    msg.value = -4128687;
    msg.gain = 74U;

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
    msg.setTimeStamp(0.3137747612920896);
    msg.setSource(13452U);
    msg.setSourceEntity(169U);
    msg.setDestination(12606U);
    msg.setDestinationEntity(1U);
    msg.channel = 80;
    msg.value = -1426084828;
    msg.gain = 172U;

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
    msg.setTimeStamp(0.8689109702826838);
    msg.setSource(17279U);
    msg.setSourceEntity(75U);
    msg.setDestination(40204U);
    msg.setDestinationEntity(167U);
    msg.channel = -71;
    msg.value = -1893033274;
    msg.gain = 58U;

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
    msg.setTimeStamp(0.7107328952054975);
    msg.setSource(31754U);
    msg.setSourceEntity(240U);
    msg.setDestination(58187U);
    msg.setDestinationEntity(148U);
    msg.ch01 = 0.7541807130603774;
    msg.ch02 = 0.9769952768451332;
    msg.ch03 = 0.913826321954336;
    msg.ch04 = 0.38229901496911156;
    msg.ch05 = 0.07259493118406346;
    msg.ch06 = 0.16184004614897474;
    msg.ch07 = 0.09596781102014096;
    msg.ch08 = 0.7255510424933113;
    msg.ch09 = 0.788242566878704;
    msg.ch10 = 0.6674451311271379;
    msg.ch11 = 0.3283571541002478;
    msg.ch12 = 0.901193987382765;
    msg.ch13 = 0.6678633532975005;
    msg.ch14 = 0.612153073059802;
    msg.ch15 = 0.08350899210863272;
    msg.ch16 = 0.552652293878607;

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
    msg.setTimeStamp(0.4785110933978558);
    msg.setSource(41913U);
    msg.setSourceEntity(240U);
    msg.setDestination(6680U);
    msg.setDestinationEntity(208U);
    msg.ch01 = 0.8768018998544707;
    msg.ch02 = 0.709667905172782;
    msg.ch03 = 0.8840048157896624;
    msg.ch04 = 0.002968073398086024;
    msg.ch05 = 0.7935490595654708;
    msg.ch06 = 0.24031380107274802;
    msg.ch07 = 0.7667583474116527;
    msg.ch08 = 0.44813285456599894;
    msg.ch09 = 0.005241667327167021;
    msg.ch10 = 0.25422698924583453;
    msg.ch11 = 0.5550977002335639;
    msg.ch12 = 0.6275926982366353;
    msg.ch13 = 0.7350933130104328;
    msg.ch14 = 0.15492433629085411;
    msg.ch15 = 0.5085446727381939;
    msg.ch16 = 0.4973402194196166;

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
    msg.setTimeStamp(0.35952568286734066);
    msg.setSource(24001U);
    msg.setSourceEntity(77U);
    msg.setDestination(58122U);
    msg.setDestinationEntity(84U);
    msg.ch01 = 0.7962863050093688;
    msg.ch02 = 0.01756446715929505;
    msg.ch03 = 0.7619282156716002;
    msg.ch04 = 0.30359608659657356;
    msg.ch05 = 0.018231535906897856;
    msg.ch06 = 0.5552500517605372;
    msg.ch07 = 0.772030957788738;
    msg.ch08 = 0.8730347809214579;
    msg.ch09 = 0.7012181510942094;
    msg.ch10 = 0.8530727627903677;
    msg.ch11 = 0.9337632913097927;
    msg.ch12 = 0.16315852301376166;
    msg.ch13 = 0.9507593210011233;
    msg.ch14 = 0.2987758601319018;
    msg.ch15 = 0.7543337468351639;
    msg.ch16 = 0.41265372229955877;

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
    msg.setTimeStamp(0.9215601163231107);
    msg.setSource(6804U);
    msg.setSourceEntity(78U);
    msg.setDestination(45188U);
    msg.setDestinationEntity(23U);
    msg.op = 79U;
    msg.lat = 0.5229465554756465;
    msg.lon = 0.673669290848953;
    msg.height = 0.5036820352860923;
    msg.depth = 0.20557184121521588;
    msg.alt = 0.4804618812766591;

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
    msg.setTimeStamp(0.9481037387126431);
    msg.setSource(59762U);
    msg.setSourceEntity(87U);
    msg.setDestination(19731U);
    msg.setDestinationEntity(6U);
    msg.op = 61U;
    msg.lat = 0.027494666469167983;
    msg.lon = 0.6699340953656275;
    msg.height = 0.5199192460186702;
    msg.depth = 0.5012394889932816;
    msg.alt = 0.7744574032446545;

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
    msg.setTimeStamp(0.9149947365991898);
    msg.setSource(9144U);
    msg.setSourceEntity(104U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(193U);
    msg.op = 132U;
    msg.lat = 0.630065704587565;
    msg.lon = 0.39038653187093475;
    msg.height = 0.2129480865295883;
    msg.depth = 0.2160246412964557;
    msg.alt = 0.8168414766096384;

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
    msg.setTimeStamp(0.19096687064414664);
    msg.setSource(37978U);
    msg.setSourceEntity(184U);
    msg.setDestination(18094U);
    msg.setDestinationEntity(67U);
    msg.direction = 0.772534297079427;
    msg.speed = 0.08772042913217304;
    msg.turbulence = 0.759637815269117;

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
    msg.setTimeStamp(0.319285045743376);
    msg.setSource(5457U);
    msg.setSourceEntity(222U);
    msg.setDestination(41528U);
    msg.setDestinationEntity(72U);
    msg.direction = 0.48993546271889743;
    msg.speed = 0.9293821626427089;
    msg.turbulence = 0.6544803764800066;

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
    msg.setTimeStamp(0.9799635813510287);
    msg.setSource(65469U);
    msg.setSourceEntity(47U);
    msg.setDestination(12597U);
    msg.setDestinationEntity(177U);
    msg.direction = 0.12567278038758645;
    msg.speed = 0.31750401930144156;
    msg.turbulence = 0.7672943395184305;

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
    msg.setTimeStamp(0.8594569871914268);
    msg.setSource(41847U);
    msg.setSourceEntity(215U);
    msg.setDestination(44562U);
    msg.setDestinationEntity(2U);
    msg.msg_type.assign("VBJJOHRYGCZSQDNYCBYLEBNIDNGIIDRXHLGPVADGJXAOPOFFFRUOMZCUVCIAQUXUWPFJGLNKPOTWCOPKAHKYMOWNZLAZQVQHVXSVCMKPBTBYFIZRQYRWLNSGTIJXJGDSKKZLVHSMQKVRLJIMXPEEFSURNYEUXKNEBTSTTZUTXFDBZCMCQDJAWFDQVWOFITALETHRRPEPBHKQNULYUWMQFYESWHUOMEWX");
    msg.sensor_class.assign("MIEFDCIJGIIPMUPHZSTPEVPLOQVPMVOMFHGFEFUBYBRXYWIPIJQXKESMNKVLJJNDYFLOWEUGQQKOPUBGHSHXZVPDDWAOTZAFYCNMEAOHBWSBTWJLRRTZTULGBYLCS");
    msg.mmsi.assign("XTFZYBIYARJROIQPAOXMSVDGYZQWRRDUWCETBUSEMFDZTEMQLNQGFFTGRQFVMDCRAPYNWCYYBNABKCLKLUSOHVXRVPJEJSPUPUMYICQBSGLLPUEIJHHLVRKBJIXIGKVKKNHFPSQNGGAWSOMZPFDDPZZNTTKNNOXFEMCFXLZIWYMWLWMGAVVZWFEDOCUDRLYWJEQOHHNUSUNGWVBKGTCJEXOXATAZTHYHBJLKMOPUXIHITAJDI");
    msg.callsign.assign("ULYPJLBHDWMORZWQFKUNEXTTBNDAJVDMHGZONAFEGSJCXHJSKNLUSHUKEIXZMRIHQDJZIXEYIFMJICHNHGYJWLVAVRLJS");
    msg.name.assign("XJHREIRMTIHGHRDWXZGASHOXSITYTCYJMENYLZGHJTMJEUQRVOFLNPARVKCPHASHDMUWSSQWBICTKWNSRXPERJVAYKKEPAVFDYUYKBBNGXGFQYJIZFLMNNFMFHJXTZSCSMRIHWGCCOZXSUOLAUPQKLYUMTOZDWWIVAGJQO");
    msg.nav_status = 57U;
    msg.type_and_cargo = 97U;
    msg.lat = 0.8545718944447914;
    msg.lon = 0.03750504250975728;
    msg.course = 0.8847620656409585;
    msg.speed = 0.10392276091732788;
    msg.dist = 0.8744463155586412;
    msg.a = 0.3462217911058545;
    msg.b = 0.27146510485151887;
    msg.c = 0.6380123884145779;
    msg.d = 0.16030296191853777;
    msg.draught = 0.3579970235820088;

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
    msg.setTimeStamp(0.6809132435625115);
    msg.setSource(48548U);
    msg.setSourceEntity(196U);
    msg.setDestination(464U);
    msg.setDestinationEntity(53U);
    msg.msg_type.assign("FUXMDIMEHRFXBUQTPGPBPLNZDVYGAAKWPNGCZCQNYMGDKRDLUIE");
    msg.sensor_class.assign("LNPAWOLYDUBETFFJPITMUONKLHBPWNRCMUTBSYJSGEBSRMSWBVCAHSGRIXTZIZDDKLMGNKRYTVZYARXYZANEQVNPQLCMVLEASNREDFISDLZ");
    msg.mmsi.assign("FQYVSUTRXHKRFSWBENWHOKZGPTXZELHFABBGYRKXVIWCSGCYNQVOKLANJTLNHPRUVCVCLSILENXSZHIUQCJYSOQQPQGKSKWMAGRFIHDYOVWAOEVJIYXXMQKTFSRBGESVRBDPWZUJIIZEWLSZGYQAFKDGBU");
    msg.callsign.assign("DKDLCNPDBLJZFNEUXBMSOWNGPLEBCFLVMVUZTBRDNQHALGRVSEMNRWYTCXPJKGSFEMOKUFTFGWHALFVAFQZIJKASUSKAAQHVTNYABYDOWHQRHOWNFUPBGQJRMVHIQMZJUTRIPTMPVIRPJEWALBSUJICTYOYZDEARTYPPLSBZVTVIUXECCDXOHVZHWEZNCBNPEJKNLATOYOXHUC");
    msg.name.assign("VAPLEJRQRAUNAFBQEYLOTCINMNKNUFPBDENJYNFRQAXIJHLKCROSMSGWHRSEUTMDBCIQWEKIZMTDISENPTCKQTUKFZHIOGHXIYWGECXDVU");
    msg.nav_status = 45U;
    msg.type_and_cargo = 193U;
    msg.lat = 0.13321474850844417;
    msg.lon = 0.5928541999501464;
    msg.course = 0.2541687347666395;
    msg.speed = 0.7852494492955033;
    msg.dist = 0.3568842022531712;
    msg.a = 0.5479310317633636;
    msg.b = 0.5381606180271634;
    msg.c = 0.2128337406204105;
    msg.d = 0.9749339971447754;
    msg.draught = 0.18617862055118783;

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
    msg.setTimeStamp(0.7682776574023318);
    msg.setSource(11863U);
    msg.setSourceEntity(3U);
    msg.setDestination(51512U);
    msg.setDestinationEntity(33U);
    msg.msg_type.assign("UZYMIPYODXNZVXUGYROTZRFTKKYZXWNJBIPPLWJOIKNIIFUGXVSWHJYHKKSAGZDLYCJWRQWDJYQCYAUGHFQOAXMBWQVUTCPGVDONQQROHCOTAPLYMSTIAIJUUSMVDKICSAVTPDKDOVDBGZAJNCDHXFAVEMFLDRCILNFEEBOMGJBHXTEKCRUYQMREKZSKURUGAGINQLPSQWJBRZAELZG");
    msg.sensor_class.assign("YAHHLRSFRSJUAJDYUVPDSJYWGOYNXTXCMIBJLQSCDOIBPXDPXIWPSCTUKXRYVPHKBHODSZVXEKTCVTVICQ");
    msg.mmsi.assign("HPRMTBMMNLTOSRYHUURFOFFPUDXJFEWITOUGLXDFGHVBCBGEIYNMJSKIHZRBUAJVQTSJIZLGCEUVCVRPTXHQFMQSSKLSXUNVWEZBJBLIQZIAFYDKUUHBNWRQVRFVQYOZEGZAZOELKLOJBGSGTAQENJWMDIYGWDFCJOZSTAPXEAJXPQCXOCMCKPRDNGIZNHGCDYMVNXSHLKCPKYOHXPDVYABMITWVEHEDROQNYTAWTCLDAUJWFM");
    msg.callsign.assign("HRGTMAPIFIMCDTLTHAGAEPSQXATHYUHQXAPWSTGJDGOLNWPUOPYNBZKIQLIZPBLXQEQRXKVDQOKDFSVYFXWAJURFNDUKUN");
    msg.name.assign("EHYBZMBGBNIAMMQTZODSNFBLGEKEOQTQFRNMSFVUPZTYCYRRZAWYGJCWAQGIVKWXMRZKGATJYCAKOCJBRAQIPNWGMPFDMGGOCKBSUVFDOVDHLWUUFQWYHDVVHREMV");
    msg.nav_status = 167U;
    msg.type_and_cargo = 244U;
    msg.lat = 0.8374682823094594;
    msg.lon = 0.48021299713634036;
    msg.course = 0.49245592786801706;
    msg.speed = 0.6291091299389224;
    msg.dist = 0.19225048596358396;
    msg.a = 0.09381045584046632;
    msg.b = 0.07718117435900662;
    msg.c = 0.6636452330522917;
    msg.d = 0.6385502284829981;
    msg.draught = 0.14672649921451186;

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
    msg.setTimeStamp(0.5692285728777864);
    msg.setSource(58253U);
    msg.setSourceEntity(76U);
    msg.setDestination(36155U);
    msg.setDestinationEntity(115U);
    msg.depth_at_loc.assign("SCTLSRTAGCWQMMCAEVOKVGYAXWKVWIVSJCEPCWKPBHNRTLZFETDOJUFGRIVHHMDHZXNAHQROWPONFYL");
    msg.danger.assign("LYEWQLAEXZIEEKWZNDAUGEFSJFXTKNTUVSHUFTEQHZCLFWVOQFWJYYSLBPYPUDISQCUSSNESNZDAOQFBNERVPTKCOLFORWODMPOIVWIIJJKWARTRXCWDZURJGJEUGGDQZCOIBLTTVMKWFKUUXYVRUMVBBCZXVDARAZCZBNKJEJHATXRSXZMNXCMAQLGYIPNGQIKDNKOOYMSGWGHRCFDMHPPGXYHQLTSBNMMHHPIPDCBLBYVKPHXJFHGYLRVM");

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
    msg.setTimeStamp(0.9112570560478621);
    msg.setSource(48990U);
    msg.setSourceEntity(98U);
    msg.setDestination(59449U);
    msg.setDestinationEntity(40U);
    msg.depth_at_loc.assign("JUHPIPRRMTMSWWFSDZVGZNXHHXHZUESZPUOJIDNOZQPJBQOSTNUOAETDFTMMYNNJPGOGRBJGTYKLXFWJXLKNZXFCTAEEOPDMNMNCURSLFSBPLYKJOFPSQFGDKGVZZHYVQRBFWWIIXIBBCDPQDJMQTVMMTRQUGCKVYRLUKDIL");
    msg.danger.assign("XNEFWPRTLLYZECKLQCRIDHKUSMDOZLMSZZVGGBDVAIASSHEVTQKBRAATHFBETPTNNBCZGJOJXFQOCJKIMSWTWGBPGFLCBPVTJJMDNEIYWUTPLMDFZTDEZRRHGIHVBHIMIYPSNQWEWYWVOUANYUNOMULHKFVXXXYQRFVYFUPZKBOLXAOTSRYEKXNUUHWYMGPHCDXXMCWAUMJZREKVQ");

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
    msg.setTimeStamp(0.7408665124718096);
    msg.setSource(11787U);
    msg.setSourceEntity(141U);
    msg.setDestination(9580U);
    msg.setDestinationEntity(93U);
    msg.depth_at_loc.assign("SWTMVDHKJIAIBDMDJXYDCDVLHSLXBSOKXQSVVHJCBWEMAEUTDITRBUPDOVBWYEYTHCOVZHGOZGEQGFUZRSIMKYNNWZFHDSRWVKYHGMDXOSWYRYKXIPSAYXCNXCTFHNUIFKENAGQVPLXJXERZOCLTCAUFPKRKPKDJRHSRJQEEUPUBTLMAY");
    msg.danger.assign("CFYVGWRCEJGBIHSGFIFFMABYJJBORWMSIQODAMTYVJHHXYURCTJFZYUKILKRWTJKPTZPQVDNFEFTWWMKOTEBAXTIRRUKGUHQCDVLIHDEWNBPWCZSGPUBOALALKNBQUZCVJYZMFNYYBPEQZRYNUOXVAXOSDDWIPQPXZHDLRZNNTANDVVWKOMSGHUJRKGVEQSQSXIXFITXOHLZACDXA");

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
    msg.setTimeStamp(0.07282047800083735);
    msg.setSource(32919U);
    msg.setSourceEntity(131U);
    msg.setDestination(27226U);
    msg.setDestinationEntity(206U);
    msg.time = 0.2579377349520786;
    msg.x = 0.9974898212781891;
    msg.y = 0.625686818386119;
    msg.z = 0.36436776711830354;

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
    msg.setTimeStamp(0.9437153813937222);
    msg.setSource(7768U);
    msg.setSourceEntity(3U);
    msg.setDestination(22509U);
    msg.setDestinationEntity(39U);
    msg.time = 0.94308579781108;
    msg.x = 0.47626833295771875;
    msg.y = 0.07526315080810508;
    msg.z = 0.5351856518260473;

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
    msg.setTimeStamp(0.17977737529305227);
    msg.setSource(24023U);
    msg.setSourceEntity(68U);
    msg.setDestination(11552U);
    msg.setDestinationEntity(111U);
    msg.time = 0.833336603271267;
    msg.x = 0.1173330084953047;
    msg.y = 0.5048405867190084;
    msg.z = 0.6298458525975756;

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
    msg.setTimeStamp(0.0887914161467328);
    msg.setSource(36089U);
    msg.setSourceEntity(222U);
    msg.setDestination(44659U);
    msg.setDestinationEntity(46U);
    msg.nbeams = 94U;
    msg.ncells = 134U;
    msg.coord_sys = 204U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.7942068618000087;
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
    msg.setTimeStamp(0.7873517706102893);
    msg.setSource(47771U);
    msg.setSourceEntity(90U);
    msg.setDestination(37420U);
    msg.setDestinationEntity(120U);
    msg.nbeams = 150U;
    msg.ncells = 21U;
    msg.coord_sys = 138U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.48750961384796854;
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
    msg.setTimeStamp(0.833692902234533);
    msg.setSource(48325U);
    msg.setSourceEntity(81U);
    msg.setDestination(46718U);
    msg.setDestinationEntity(22U);
    msg.nbeams = 134U;
    msg.ncells = 170U;
    msg.coord_sys = 100U;

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
    msg.setTimeStamp(0.002625652887813801);
    msg.setSource(64424U);
    msg.setSourceEntity(83U);
    msg.setDestination(12705U);
    msg.setDestinationEntity(215U);
    msg.cell_position = 0.8079233413493809;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.14789618577966568;
    tmp_msg_0.amp = 0.953282661677963;
    tmp_msg_0.cor = 186U;
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
    msg.setTimeStamp(0.4008422688605182);
    msg.setSource(42639U);
    msg.setSourceEntity(187U);
    msg.setDestination(48410U);
    msg.setDestinationEntity(237U);
    msg.cell_position = 0.14044344478354986;

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
    msg.setTimeStamp(0.07786752785171847);
    msg.setSource(42348U);
    msg.setSourceEntity(32U);
    msg.setDestination(4950U);
    msg.setDestinationEntity(64U);
    msg.cell_position = 0.4477526497822918;

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
    msg.setTimeStamp(0.6325236175037295);
    msg.setSource(62810U);
    msg.setSourceEntity(95U);
    msg.setDestination(54055U);
    msg.setDestinationEntity(41U);
    msg.vel = 0.44948534202680834;
    msg.amp = 0.9622206765860409;
    msg.cor = 60U;

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
    msg.setTimeStamp(0.17229963643123491);
    msg.setSource(16481U);
    msg.setSourceEntity(129U);
    msg.setDestination(31013U);
    msg.setDestinationEntity(93U);
    msg.vel = 0.9292473421631168;
    msg.amp = 0.9950468664523306;
    msg.cor = 213U;

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
    msg.setTimeStamp(0.9687475864480576);
    msg.setSource(45458U);
    msg.setSourceEntity(212U);
    msg.setDestination(15973U);
    msg.setDestinationEntity(73U);
    msg.vel = 0.0033269070388942668;
    msg.amp = 0.3949167239651361;
    msg.cor = 164U;

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
    msg.setTimeStamp(0.6430801046172705);
    msg.setSource(25603U);
    msg.setSourceEntity(250U);
    msg.setDestination(49409U);
    msg.setDestinationEntity(21U);
    msg.value = 0.9758151387844575;

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
    msg.setTimeStamp(0.35597318873138006);
    msg.setSource(31136U);
    msg.setSourceEntity(189U);
    msg.setDestination(17151U);
    msg.setDestinationEntity(153U);
    msg.value = 0.595992611918259;

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
    msg.setTimeStamp(0.6232594870645168);
    msg.setSource(37387U);
    msg.setSourceEntity(179U);
    msg.setDestination(60283U);
    msg.setDestinationEntity(63U);
    msg.value = 0.07778821474750519;

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
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.25144400855820626);
    msg.setSource(5940U);
    msg.setSourceEntity(106U);
    msg.setDestination(10207U);
    msg.setDestinationEntity(224U);
    msg.sig_wave_height_hm0 = 0.8630611541725398;
    msg.wave_peak_direction = 0.8592776083974765;
    msg.wave_peak_period = 0.24791500877358785;
    msg.wave_height_wind_hm0 = 0.8589590680837488;
    msg.wave_height_swell_hm0 = 0.6521033531480734;
    msg.wave_peak_period_wind = 0.23650062272478034;
    msg.wave_peak_period_swell = 0.6404316764791089;
    msg.wave_peak_direction_wind = 0.37785618835837265;
    msg.wave_peak_direction_swell = 0.9742271029593434;
    msg.wave_mean_direction = 0.8959613204004933;
    msg.wave_mean_period_tm02 = 0.45970884461629513;
    msg.wave_height_hmax = 0.7009959687671027;
    msg.wave_height_crest = 0.24534349576590087;
    msg.wave_height_trough = 0.349606122868486;
    msg.wave_period_tmax = 0.5482485388468858;
    msg.wave_period_tz = 0.9039931741592276;
    msg.significant_wave_height_h1_3 = 0.8938618067280916;
    msg.mean_spreading_angle = 0.31630845863575086;
    msg.first_order_spread = 0.6062437742507192;
    msg.long_crestedness_parameters = 0.4653023791093036;
    msg.heading = 0.43108578680096077;
    msg.pitch = 0.5349157955393238;
    msg.roll = 0.8860473362028376;
    msg.external_heading = 0.979605441792199;
    msg.stdev_heading = 0.12798616417252673;
    msg.stdev_pitch = 0.10555136629721495;
    msg.stdev_roll = 0.7035255086365781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.5978228122217608);
    msg.setSource(48519U);
    msg.setSourceEntity(178U);
    msg.setDestination(25095U);
    msg.setDestinationEntity(117U);
    msg.sig_wave_height_hm0 = 0.9499849156693287;
    msg.wave_peak_direction = 0.4392281686656072;
    msg.wave_peak_period = 0.9533328926821314;
    msg.wave_height_wind_hm0 = 0.3614706082647059;
    msg.wave_height_swell_hm0 = 0.4891849122435663;
    msg.wave_peak_period_wind = 0.1120360586697049;
    msg.wave_peak_period_swell = 0.33633109985191223;
    msg.wave_peak_direction_wind = 0.6489506884036488;
    msg.wave_peak_direction_swell = 0.5812545983357005;
    msg.wave_mean_direction = 0.9013103888826789;
    msg.wave_mean_period_tm02 = 0.44673659786743236;
    msg.wave_height_hmax = 0.06509690540072577;
    msg.wave_height_crest = 0.1758688449414968;
    msg.wave_height_trough = 0.9670525739243496;
    msg.wave_period_tmax = 0.08398181600825039;
    msg.wave_period_tz = 0.10457048691466297;
    msg.significant_wave_height_h1_3 = 0.812757956734267;
    msg.mean_spreading_angle = 0.04464568919676626;
    msg.first_order_spread = 0.4363986029645536;
    msg.long_crestedness_parameters = 0.6922237644558178;
    msg.heading = 0.8982473301298224;
    msg.pitch = 0.5491547359949243;
    msg.roll = 0.8161083052216391;
    msg.external_heading = 0.4093738877061065;
    msg.stdev_heading = 0.6666551182442926;
    msg.stdev_pitch = 0.8540907264245345;
    msg.stdev_roll = 0.9451126242465171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.411845661922564);
    msg.setSource(21551U);
    msg.setSourceEntity(83U);
    msg.setDestination(14503U);
    msg.setDestinationEntity(172U);
    msg.sig_wave_height_hm0 = 0.57993750427562;
    msg.wave_peak_direction = 0.23205629709674036;
    msg.wave_peak_period = 0.28404395029608565;
    msg.wave_height_wind_hm0 = 0.5836415738119972;
    msg.wave_height_swell_hm0 = 0.8078411516597278;
    msg.wave_peak_period_wind = 0.166658197981159;
    msg.wave_peak_period_swell = 0.29732835812686575;
    msg.wave_peak_direction_wind = 0.49586509314828875;
    msg.wave_peak_direction_swell = 0.26400969336301217;
    msg.wave_mean_direction = 0.17235608333121877;
    msg.wave_mean_period_tm02 = 0.40301237652382316;
    msg.wave_height_hmax = 0.5864875928539985;
    msg.wave_height_crest = 0.07506782379453203;
    msg.wave_height_trough = 0.23780926382393563;
    msg.wave_period_tmax = 0.11304016945402451;
    msg.wave_period_tz = 0.7497988229863668;
    msg.significant_wave_height_h1_3 = 0.4624517372958119;
    msg.mean_spreading_angle = 0.7897766884321823;
    msg.first_order_spread = 0.620550668969224;
    msg.long_crestedness_parameters = 0.5772769420585214;
    msg.heading = 0.2674070503473849;
    msg.pitch = 0.46934806073546376;
    msg.roll = 0.32744316186116507;
    msg.external_heading = 0.6553576270309651;
    msg.stdev_heading = 0.7070858466828622;
    msg.stdev_pitch = 0.7061031775428708;
    msg.stdev_roll = 0.07024054477902797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8369202468992244);
    msg.setSource(15868U);
    msg.setSourceEntity(63U);
    msg.setDestination(24482U);
    msg.setDestinationEntity(28U);
    msg.name.assign("KFXWREOOSKRMMUUXNVKJLGLBKHDNHWJAHALSJIUDAYQCVFNCOEPZPDEIKJOTBLQLZHVSQVLXTFNTCWHDGOBBADNUUBPYSAJZLXNDXRCQMFRGKOERYGQEXWIGVBTPVWJZBYRNMWYXKPYGRNRFLYMWTTKQETFGLGDBJSRVIQADIFUANZLQBAIWMJMHDTIPCEFNXVUGHMQUICSFDMBOZZUTCQP");
    msg.value = 27U;

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
    msg.setTimeStamp(0.8322994648690559);
    msg.setSource(12609U);
    msg.setSourceEntity(135U);
    msg.setDestination(27680U);
    msg.setDestinationEntity(51U);
    msg.name.assign("NCSWIYGGCPFFYHOKRBADXNBWCVFLMBEFMDQPCEOGMSRGIPIJZEHRKONBJJWPXZPXBYEATGOKINUPCNIURTEHBHCNVPYOLFVVZUDOAJFNQXMTQVLSUWHGBOGTZEPSUZJKWRZ");
    msg.value = 156U;

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
    msg.setTimeStamp(0.32889215111073433);
    msg.setSource(23169U);
    msg.setSourceEntity(236U);
    msg.setDestination(10349U);
    msg.setDestinationEntity(131U);
    msg.name.assign("WEQNOOIAOJNEHTGWPGFAGQVDOTACFFAVZEWUPDWDMJQKEESYELRIYQXBCSIZQJPSDRVVRRMTDNQCIUOBFBEWIBJWVZBDMXTBNIPIRTCRCVYEZVLUNAPJHYICHHPRQEAMSAWYXMAYXUUQ");
    msg.value = 107U;

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
    msg.setTimeStamp(0.42208654690745306);
    msg.setSource(27328U);
    msg.setSourceEntity(174U);
    msg.setDestination(42552U);
    msg.setDestinationEntity(127U);
    msg.name.assign("WADDTIKMRJGJXBHNEGFVWKKMIXITPBZLOANMPZMFVDFPNCGWWUEPVJVZZTRIESSHKYZXCXJJRFVTCFKDISIYNLRIBZCORBDRVHODFQJSIUCADUUHUUSQBTTNPYGWMJFFPMQLYEARQLKTVGOYCOVABEDXCIEBBHDMYNEQPPWBQXETHNUQLYJXNFZZS");

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
    msg.setTimeStamp(0.7041566929620611);
    msg.setSource(31939U);
    msg.setSourceEntity(250U);
    msg.setDestination(21054U);
    msg.setDestinationEntity(66U);
    msg.name.assign("WWYAAEYYRCYTZJAYQMIJUMFZKXWLVNIPAWRHUVHLA");

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
    msg.setTimeStamp(0.25282541553040894);
    msg.setSource(55016U);
    msg.setSourceEntity(32U);
    msg.setDestination(41074U);
    msg.setDestinationEntity(153U);
    msg.name.assign("HCFXMIAVDURMMLXQGXZLJXICOSOQJZNYUAJHEXNQMBSXKWKEFYAHKZPGMMYGEFPNWBOMOLYVCTT");

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
    msg.setTimeStamp(0.4911891487931166);
    msg.setSource(18857U);
    msg.setSourceEntity(51U);
    msg.setDestination(19536U);
    msg.setDestinationEntity(140U);
    msg.name.assign("ZQWVTKCFIA");
    msg.value = 6U;

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
    msg.setTimeStamp(0.6726191647567071);
    msg.setSource(52876U);
    msg.setSourceEntity(48U);
    msg.setDestination(18206U);
    msg.setDestinationEntity(31U);
    msg.name.assign("YAHSSAKMWZBIZAYINFLEUBKTUCJJMZAZLFPTLXDQHODLABTTOHHTH");
    msg.value = 248U;

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
    msg.setTimeStamp(0.84790710699239);
    msg.setSource(7206U);
    msg.setSourceEntity(79U);
    msg.setDestination(16338U);
    msg.setDestinationEntity(43U);
    msg.name.assign("RQHAVCWAPPZDPMSFTXJGYDULFOUWKBWAHWNRKEXELQTVRGXPDBYOZAEJQBICFZERLEMXKLSVVWEVIWXRTDQQNHGWIZXN");
    msg.value = 53U;

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
    msg.setTimeStamp(0.024294789315266963);
    msg.setSource(61073U);
    msg.setSourceEntity(102U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(37U);
    msg.value = 0.2215937011870509;

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
    msg.setTimeStamp(0.9855215184924528);
    msg.setSource(51029U);
    msg.setSourceEntity(25U);
    msg.setDestination(9543U);
    msg.setDestinationEntity(167U);
    msg.value = 0.04262864996899718;

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
    msg.setTimeStamp(0.5189226925552967);
    msg.setSource(13117U);
    msg.setSourceEntity(96U);
    msg.setDestination(53460U);
    msg.setDestinationEntity(247U);
    msg.value = 0.26939002699951264;

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
    msg.setTimeStamp(0.20886003378610718);
    msg.setSource(41806U);
    msg.setSourceEntity(240U);
    msg.setDestination(5328U);
    msg.setDestinationEntity(243U);
    msg.value = 0.846761061282621;

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
    msg.setTimeStamp(0.05800616679200876);
    msg.setSource(22329U);
    msg.setSourceEntity(217U);
    msg.setDestination(37337U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8125831763941457;

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
    msg.setTimeStamp(0.01564130092781879);
    msg.setSource(23934U);
    msg.setSourceEntity(80U);
    msg.setDestination(59553U);
    msg.setDestinationEntity(50U);
    msg.value = 0.28594033855769185;

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
    msg.setTimeStamp(0.6503306723265783);
    msg.setSource(30423U);
    msg.setSourceEntity(205U);
    msg.setDestination(60492U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7970380394297862;

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
    msg.setTimeStamp(0.6960599234433561);
    msg.setSource(44194U);
    msg.setSourceEntity(19U);
    msg.setDestination(46505U);
    msg.setDestinationEntity(19U);
    msg.value = 0.03838879517145355;

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
    msg.setTimeStamp(0.49099913889422364);
    msg.setSource(60987U);
    msg.setSourceEntity(150U);
    msg.setDestination(39980U);
    msg.setDestinationEntity(98U);
    msg.value = 0.6788130121890638;

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
    msg.setTimeStamp(0.9548256609719696);
    msg.setSource(18588U);
    msg.setSourceEntity(216U);
    msg.setDestination(62940U);
    msg.setDestinationEntity(246U);
    msg.restriction = 144U;
    msg.reason.assign("OTARXRBHYPXUVZMYWSRLJIJRYSHLDMYNLVXDEGMEXAOJEXSRGSLUMJFBFWLTFWUNEQZRIJEPWFWNMEFZCEUOHNZOQZFAZKSLUDAIEODKIJRYO");

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
    msg.setTimeStamp(0.08521168374608978);
    msg.setSource(49984U);
    msg.setSourceEntity(160U);
    msg.setDestination(53002U);
    msg.setDestinationEntity(195U);
    msg.restriction = 216U;
    msg.reason.assign("QLAFSFACJMTEUJEQDFVOYWNWAFXQCIDMWOBIXQYTKTCDYIKZPPMWAQAKJQHBHCNOUMLHQLZQKEDHDWSSKYFYUOHESHCVMRINLKKAOVSKXAIYJMFZXUJTLGHGUIQETDKPDEZYXEBZYVBRRGWJJIRZGLDC");

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
    msg.setTimeStamp(0.9407299474549942);
    msg.setSource(27939U);
    msg.setSourceEntity(239U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(190U);
    msg.restriction = 188U;
    msg.reason.assign("QTCNPGVXIRVMFRQFFVMAEEMEPYCSIOEXMHNJ");

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
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.1886035393693234);
    msg.setSource(28036U);
    msg.setSourceEntity(56U);
    msg.setDestination(49803U);
    msg.setDestinationEntity(97U);
    msg.op = 114U;
    msg.request_id = 1986716527U;
    msg.entity_name.assign("UHWDEMEVDYPYCRGKOYJOIUXZKFXPTIDHMBLMXMBMVXPRAFWKJWIHNICVWQCQVFWTZIYVFQHQVZJUHRSXWQILUYBXHPEYUGRPATILWDYPOAYFPLGENJOQOAVTTRKQOWSPLTBSTJNGAXEZKHOEB");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VYOPSXPWOFMUWSALWKZXDQFEGJCSZZMSDAVLEMQBBEKGWPGSBUWVRQROHGUMYTJUCDHRFJECRNMZBIDWAGXITBSFANVEIJHUDLLNFFAZINSHDQBRSOWTCXYYJIR");
    tmp_msg_0.type = 130U;
    tmp_msg_0.default_value.assign("QBHSPGHMCKQHNRMBDIPUBUYCRTKLBTPBUJWXZKBQOATSNQHKFYLDQCGDLVUGFSZVNXOEOKIWXCXWOGHTBEIFJZULVT");
    tmp_msg_0.units.assign("JRGSZTFMBUGYJQHONWYFBEMOQGDJKCJMTQQZEMSOYPARLWMCOOZAWKLKVCNBAVIQIUDIETWFGISWRVSDCMTLNCTUMKYOUA");
    tmp_msg_0.description.assign("HLNUJQSYHSMLQJXZUJIVWPILDLHLMOARDMJJUSSVSSYIPDUCPFBNRBUDM");
    tmp_msg_0.values_list.assign("VSSRGUCQBZBXBBHKECMVYPKGLOXGNBDFJZAIWALBTONSFZSFCGCGYIYTYRLRLWTZUSZVZLFKUJMDLJKPPADRNPXITUYWTUWLEPEFQWPLJDZJEPIJDVVTKVOMHQVFCYXNUBLZRYDUCCSFKSGWIMUHMIZKEYUSQAKRINZLNPEERKHFQFRHEVWBYCWBCJQOGTXWPJMVSCOAQAIDYIABEOJJMAQHVFMPKOAUGGNAQMOTRHH");
    tmp_msg_0.min_value = 0.015683538598654234;
    tmp_msg_0.max_value = 0.3469112621876018;
    tmp_msg_0.list_min_size = 1U;
    tmp_msg_0.list_max_size = 169U;
    tmp_msg_0.visibility = 247U;
    tmp_msg_0.scope = 241U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.9283563400816469);
    msg.setSource(16741U);
    msg.setSourceEntity(56U);
    msg.setDestination(47196U);
    msg.setDestinationEntity(251U);
    msg.op = 150U;
    msg.request_id = 979704042U;
    msg.entity_name.assign("IRZLXIKIKGCYTMBJTLFAYRUHFTDZEHJNRCOVUCFAFSUMGQAMZROQNEV");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GWRXLIUSKZFIOHKCPWAYPWUKDNHKCFJEIFNTQVADSZKALJQTSBEWQOZWYV");
    tmp_msg_0.type = 144U;
    tmp_msg_0.default_value.assign("GMNQXRKLMXGFSMDNGDFTVXCKZQOKEDQCWQLLPVYIJRBRRDPZNQXSMOYTMBJWHZVGKWFWLOHUBRBQBLBWAVTMOQFMDHHWZJNHAQCCVCBSYTDXTOXUFLIGJVPTSUUONJXVCSXNYSJGJZZHVZYHJZFEIQGATIDTFKCGOIXPIWRCLYRDRJXIFKGKDABMOLNUIEPIREFUAWPSWNKAKHBGFLAEUCMNEAUYEYNUPPEZHRHABSECADLMYOZTYEP");
    tmp_msg_0.units.assign("WRDOYQGSVWBOCWENMPQZHMGFRYONXGUPETRWTMWFBCTEXILZQJJYUSWOYLDSPYOCUSMDZHHMNTYXIKVEJIVDUKVWOHTNJFQCUZXKPRYGISHROJETZHFUNSWFXVURLQKGCASHGHIKSABKYKMP");
    tmp_msg_0.description.assign("LEFNCFHRADMWXOUIKBMGLCUMSXZVIBWYGKTYFJBZLWGIKMKIPUSQPBQGRTGXRJCBVLFDYJWZDMNBHFNDNSASAEZPXSKTTMYOQQFZVVMLMZQJSNCYUPEOAHRGHEDLEFQPLGLPIJGLRKUATTOUPXWUHH");
    tmp_msg_0.values_list.assign("PNRWHDTXIYXNGEBJGZZYSETCMDETWITDFFAMRRISXGDPEWICPMHUPTEGVRQXIISJSDDQUBURFQSRAPJKUBFZSVATOGSMNEWBJNTCCUYAUPOKHGFOLHVWTCEQWCONKNMLDRLUHKKZYXTLYJBPERHULJYAOAGBBXPFDWIIKO");
    tmp_msg_0.min_value = 0.08146347668276566;
    tmp_msg_0.max_value = 0.03495505016613831;
    tmp_msg_0.list_min_size = 137U;
    tmp_msg_0.list_max_size = 61U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("USCGFCPGCOZZMELOKTQKYFTJDVMNGUIXRPZUVV");
    tmp_tmp_msg_0_0.value.assign("QCIHSUCRHIWJERV");
    tmp_tmp_msg_0_0.values_list.assign("VSADCMLSKHIUDTGXLIQEMREBRGAQZBBOGQCGNQNISNKOXLHZEBEFGCHJTEPDUSOEHZWCULOFYVDFKWHICRZQZXNXZWWVBENXADNTJGNYIYBPIZYPAFOFMPMRWRYWFZVFFHXYTLTKCAELADOMPXCJVITQKFCDTRDSNUVZJHOSCQEYKWXYLGXWMTSVMRXPVDQEAVQHAOLZNTPGBJCPLFAJHKLUHWUNUWKIKSJTBUBYOMMOJRQAMPJU");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 178U;
    tmp_msg_0.scope = 58U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.03685420355782165);
    msg.setSource(18185U);
    msg.setSourceEntity(140U);
    msg.setDestination(826U);
    msg.setDestinationEntity(181U);
    msg.op = 108U;
    msg.request_id = 1324778681U;
    msg.entity_name.assign("GSWVAVIAZYKHICWKZFYYFKQRLSNTDUUZAHSMULCPQBEBUQIIHHEJROGCTRNFZXQSJKFAMVMURXBQVAJWQOWZVNFNPTTWZKNERJMTLZWSMBOJMVXBGFNNUEZXRMGFKWQUSANLBGMYVIOIHHBFSXCEUMTJLYCWPYSJKCCVIVRODUOGKCDPXWFZBN");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DFGBBWSOJASDZUPYHSATRPCILCGJVQDHSDIRUSORVJMCVLZJCLBJZKEYQWPNREVPMDYCZKWGMJRWOPFVNNNAEHXMZKZDTVFBWWOAQMHXQDXVTGNRBBVXIIPTEKUSUEJHBGEWLXGXPJBZFJKIGOOGAGQKLLNIMQYHCARMTJMXQVTRLHYTCZCULUKBFAFMNIYGTNTNLHYBOAU");
    tmp_msg_0.type = 13U;
    tmp_msg_0.default_value.assign("KARZWLIIWACANBCIGKPXBHTPNKNJUHYVATJNNGWAFFELRRBOMMNFTJYJWWPUUDBPBCMDRORDWLPUEVICOWHTAYYTMASTDPBDDFVEZOUAQQGOBIMJHGKSMQSKMLYDNMZXIRJFOFVYEZSLZYWFQGHEVHHECMLUEOVNXPZYOEOPHROCSMTYNWJVCJQZXKTUUFKVRLKXHXBUIQ");
    tmp_msg_0.units.assign("JXWSDFEKCXXPQYMYKECUZDDNFHVWRXWWHPCZFQZNHCIPGKEUOQLPBCYIPFHJLUGTYMIUBKEQQKOODSVAFXTTLPSIVIUAHQOAIRTCGJT");
    tmp_msg_0.description.assign("EAFCZJWGGXMPLDHXQUKKPSROXYGPTTONLJZLEEADPJNFHRKHZZTHKUOFOUTQEBKWKWVBDGYIZZYJDKOIXSMDHRFAMAGYQXVUOKEKNMRBEFWYB");
    tmp_msg_0.values_list.assign("MNRBTHPBBZSOPFHGHWDTULBWCVMFPURCSEJATKANMDMNYEFILEBTGMYWDIHALAGWSPQFLVZPXJVZRYKKXIIGOQDAYCTAQHKEIWNIXNXUCFXPPHQWGZKJBAUDFUYFRBRLLQWTMTKEEDNZNDHLJSQEVXIOVSAFKKUYXTFMPVSGZQUTOIDAJJSLRNCMZAMHIHXWGCJMBQUKJHZOLFDROYZGVSVY");
    tmp_msg_0.min_value = 0.33994061353495464;
    tmp_msg_0.max_value = 0.351362407425166;
    tmp_msg_0.list_min_size = 66U;
    tmp_msg_0.list_max_size = 81U;
    tmp_msg_0.visibility = 25U;
    tmp_msg_0.scope = 134U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.24664085253688317);
    msg.setSource(9004U);
    msg.setSourceEntity(254U);
    msg.setDestination(19169U);
    msg.setDestinationEntity(121U);
    msg.name.assign("AWPJDUTOCWPMUTJXXAFIHRYPNCTLPAXYTPDFRUHNTJUGZGLRJJOSVVXQPHKOYFWKWV");
    msg.type = 151U;
    msg.default_value.assign("EHJDOHBSAXJIBOMVFHUWLVSCVEJVHRTKBAOJBDAIQDWZGYBFEMNYCSFEXWJINIKGAFBSIJD");
    msg.units.assign("NQHMYQQGSXYLDSEZPAZIREIREUTDBMNACIUWOFEICNMHYHTGYKFBLRUQJJWSUONIBQWXBIPXURZFKBMBBLAFUJXODYEEITKTJWRXEOSXKYHHZIGCGMQJUAGDPYXOVOMVJFMZSLEUDJCKYBXWOOUHTSMQJKHANGGVFOOFTARSKZQCSKZZVHWVPITKVXADSFDBZVNPLTQCKEMGWNRQTYHCDDNWLPDWNRCENLLAZGIPHALCR");
    msg.description.assign("JZVEUGBAOTXITXPKXUQWLLWZJVGDDJZQQZYHHMHOPTXUDTJRFLANHRWFKPNMUWIMFYONWDEXPJESDMOAWMUCIHFNFQPJBBYEEHHJLGCCRKOWTIISXIHANVWDNKYBPSQORQGVIJWHZIUOCPYNRXZOIFTFABGYEDRBPFKTVSG");
    msg.values_list.assign("FIUNHOCLCZQKFBCLZEMWGZTOISTTUPEESKHFUDILGDYTKUAYSXHFGUOXBHSZMYTESNRNROSMNXBZZAFXKPQDDJJOIGTUACFYGFRKXQJZADPXCMBAAUIWQIVXFJHPVHDLBUFYBXPGDJSXTMPWVVVOAABJGKWMPHWPEROCEIDSQAJLKYBQWJNCTYZVQGFYHRJQIACKUYRRB");
    msg.min_value = 0.2596428273027327;
    msg.max_value = 0.46573553445742155;
    msg.list_min_size = 154U;
    msg.list_max_size = 254U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("KAUCTSYPEXRQTAWUZQMQRUWOFNROBSUJYECRBLIGEWXQXMUAZDZDVBSBQCPKQDHMBJIZZQKKJHUXTMGDSXGVWFOYF");
    tmp_msg_0.value.assign("EOEVBQQXWMYGCPXNDYUVYMKIHEVMBIFTEFTXOMNYFWAGUABBWUZFTJHKSCNALXAJJOPIWCLDSAPVXEPDVDJDMPARKPLUZIJGDBAVCJYLYKCJTKEBJYCRQMCXWTXFBQNVCPRVDNWIOIOM");
    tmp_msg_0.values_list.assign("XVULJYOLNCFRHQGCNUXEVJXIWTRXANIGAZHEKWFUEFLPRSLYFIFMHBWJRHSPEWOZJESWHDTZ");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 28U;
    msg.scope = 15U;

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
    msg.setTimeStamp(0.31192067682118274);
    msg.setSource(20033U);
    msg.setSourceEntity(110U);
    msg.setDestination(49157U);
    msg.setDestinationEntity(143U);
    msg.name.assign("GIFBMMRDGYXPEQWQMSRLKZBFEPOVODJVSKIEYDCMKHDGGHHZBUUV");
    msg.type = 241U;
    msg.default_value.assign("DKADXOMCZNQCGQPZADRDYJKBPSZUPVPKWWVGHTKHQJHRKAXEDKJURPUXHHZZEOBBRSUQHWHXREWIPRGIUISGKFFJCJZLIBWVNVCLDFSLCDGBETODSFOOSFANGLXLNFERZNQIGNUBMIIOAUMNMXLLTBVFZHYXEQMYLYJPJASMUJXBMGMSBQADAXIKOVEKATTJTETXRWCFHYOQARVYWPKQLWCYYNMCNTUBVFTQLMONITD");
    msg.units.assign("ZOPXKTVBKTTIXIHMPQWKWIBQCGXIONLFGLWPXBRQLWIGNQTFAIARGOLHILZUBFXEJQJXHAJMHRCNCRINOTUUNFGUZJTKACSAVJWRVHKXM");
    msg.description.assign("CHSKSOQZQNPRDDZQMEWNMOYOSLKEYRKVTTTSHPPDUPNRMXUAVMINYUKAALLGTSIVOJLQXMPQFTLPIXNYBKSEGJHDCGBMBCLLANVHPLVWWBJAQGQTJGHCWKNFYFHYIMXRYEIHDJCPAGFDUCIFHEO");
    msg.values_list.assign("BFSHGFJIRCVKRZYTEPAXDXYGCDDJNQSZCFLDOQCHLYTRHGTINKKMUXTRWTLASRHVOHPVZHJIQSEPAUFJVCZGCZWBSVVQZJOSCNGUNFNMIBHLXDTWR");
    msg.min_value = 0.2606854147489006;
    msg.max_value = 0.46083527156116144;
    msg.list_min_size = 41U;
    msg.list_max_size = 176U;
    msg.visibility = 120U;
    msg.scope = 181U;

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
    msg.setTimeStamp(0.0480946729067222);
    msg.setSource(43456U);
    msg.setSourceEntity(80U);
    msg.setDestination(21364U);
    msg.setDestinationEntity(89U);
    msg.name.assign("ELSCDJGKVRJQKERNGYIMRHHDWLSDYDNBNUFQIEUUAWVYOLZJMZPBHGTKQSKGUUZYOLFNBBYMXMEXQHQVBJOHEJIRTVJHWZOTGVTLWOLXCXZPMYIOFWFTEI");
    msg.type = 56U;
    msg.default_value.assign("CXJIZKWINANLGIGCXWEUTJQEDIHK");
    msg.units.assign("MCADNHMIIJONPOLWQSXBFOKFCDNPYWPXUTUPKAQYHKUZBNUBXTCBAKNKZPDQSHPHOHWNVBPJEUSLWZOURGLVTEFRBJRSVSQNHAPKLQIGVEJFUVYLXCTQXMSKM");
    msg.description.assign("BJYEDEEZTZXKPDQYQBAKQHICRBAIYTRFOOZWCMFYUMTUDJZWAVILGNKHTNJZUFVGIJJRTWWWQMKLPBZDUNTHE");
    msg.values_list.assign("WAWXJPMCFLGNCVOUYZOCCLJJZTCUDKPVUCEAHBEKKLSGTWBDEWVFPNGHLFOSOCDIBYPNRRTOMOQGT");
    msg.min_value = 0.9188999123578692;
    msg.max_value = 0.7887823517703556;
    msg.list_min_size = 38U;
    msg.list_max_size = 87U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("XQZXGLYTXCQHQMHANZUKFYDTUJZEOLWQRMWQFNOCMQRXPEMYWGJCYZUAERIUSUKNWWGZLMJAUCTTMODFSWEKSAADQDFHJMNYBHESWLVSA");
    tmp_msg_0.value.assign("GEVDXDWIMBVGCDINYWRCHRXLWIAPEWPYCZQLZMOVCYEXKTIGYABXYHZGQOVQE");
    tmp_msg_0.values_list.assign("TNJTJXNLKSQIOTVQSJWIIHUNLTTPIDSFBRFEYWUBPMONJSBRYENAMOTDTDMRWMMYKKRSRFUFVOFVTNMCXUODYCBJGCZZSFOEPIYQEUFWYRIZQLGCXVIHIGEWELNPKRGDPGHVKQSGCKAAUVZAAWOMJYNHSLKZRLFBCE");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 9U;
    msg.scope = 219U;

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
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.7175098464538124);
    msg.setSource(49617U);
    msg.setSourceEntity(198U);
    msg.setDestination(29771U);
    msg.setDestinationEntity(244U);
    msg.param.assign("VBBRWKIMZFFCUZMMNE");
    msg.value.assign("MYJEZESDGZZGFJXCPBULDPKCKCFUHHFBJPKTPD");
    msg.values_list.assign("IAPQXJQHCJIZKTTCQXAVTGHBWOKYDRTFJNDWVXKNUCVADMXVSBNYMBICHFSAYHIDYLZZUZSSPAUAMIFDBACECGSKCQOYUABGWOQSWUHWRMPDKNJWPGXNOERJPGSFDHNQRJLJPFGSRAVEMKWINCTCMOEZGDBPHQZVYBTKIAVYUFYBJIBCXRLGHLPYMOEXUZWMLMQQFVFERPLRLKHPVZGUMTTLTIFOJKJVWZHZLWXLORKENYORITBQFEXE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.7626467221659815);
    msg.setSource(56384U);
    msg.setSourceEntity(181U);
    msg.setDestination(19691U);
    msg.setDestinationEntity(190U);
    msg.param.assign("IZCAYEXWHTDHWGQ");
    msg.value.assign("SWHZNZHHXDTCXMWHESFLSGKGUPKOJZYNWCBVPTQDRIPFQKONLLXGAJPRVPATBJTATUIXWRDVGQNOINQIPCETGNJMRXCVVDOSLAMBSKJJSKWFTIBMHAKLEDKXEOORAAGBOXSFWMZDKHTHPULZXRMYQRZN");
    msg.values_list.assign("XQSLVTNKOJWCGLTCNLPFIUIUAWPSCNQMANFTELEJSZAZGHNXUOECINUWDKYTFVURHBFPYMEEHYQIXJOQJWUKRRQVDZVHQMBKXUVSGRCOCKSTHDFEKAUYPYJADSUFIBIEBWVIQZTHMCLHAMGVWRXXEHPZTQDDRPXNMTCZYTOFBMMBOCLONLDZEHNGZGQTPKKXZJBPBAJLIDLBRFGDWWNK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.957147839755223);
    msg.setSource(36370U);
    msg.setSourceEntity(198U);
    msg.setDestination(11092U);
    msg.setDestinationEntity(202U);
    msg.param.assign("MMYGGNCUSCTMYNQIXEQUFBYFFTIRMPWOWBPJHUDORMSKMJQSMOWSBXSUBPXHIOOYFDAUGKJINEWFARABPIOBDQEVNYNHAYDKMWFATNBLVDLEOTDXKWTFDPZJUIPOPCBAKSATOZRQOGQMFXZUKRWZHLDQIIZKDHLJHFSCIGETSZEKCEGRLYZGLBHSSIDACVPGZTQRVCAMVLKHNXZJUXXPRJWECVJCWGVQYEFLYNVCKXYWAT");
    msg.value.assign("PODFDYYSELNDRVMXYGJSOBMHBKJXDHPNXNYWCHLZHCLHSXPNVWMQYIFKLAGUXPFTTZJOKBUERAVBCF");
    msg.values_list.assign("HTHCKZBEPEFZGJYESRBSBWRQAIHDKBSGWTPUGRYDHBEUWEMYOZPTLSVMO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.8725848354047735);
    msg.setSource(8142U);
    msg.setSourceEntity(48U);
    msg.setDestination(38670U);
    msg.setDestinationEntity(34U);
    msg.op = 201U;
    msg.version.assign("NKPQWWHSQNZUDZMZDMJVRJTAPYZEXCPGLHSTRICW");
    msg.description.assign("AVHYRINLRGQYVZYYHOTTQBLTMIQERXSLWSWOCJXTIROWTZTIIAPNAKIYZXSYWSGUAJBAJHBXUPXADYGKWMQEBXMMWUUJHOAPCWTHUQSPDDHOVTAUGZCEOUGZDOFINAIJWNEKGBSYCXDGRDQVYSRCVUFOPFEQTRVZNXEVLENLICCNVBSXHRBOVYLFBZJSWJKFMCPOFZTKP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.6771459162972981);
    msg.setSource(32757U);
    msg.setSourceEntity(152U);
    msg.setDestination(9448U);
    msg.setDestinationEntity(183U);
    msg.op = 13U;
    msg.version.assign("JALEKBADLERZTLWDFJNOIUIUYBMKRYPFQECXBVETGQRMROAVIXDUZWIDZOXCBBFSMPKZYFNNPUWEOBNZFSYFMZCRVXG");
    msg.description.assign("YXHSFDDGXSGDYGKKSWQHUALBODLWDWABICFBZCXMYNDXTSPKTSFKXHXMDNVGIUYVGRUREQTMERAGMRPRUYKJBYCTAWZFZNZJOWLXPULCGIENQTAENOLIJUKIQCPYADOHLULEKEQTNJEQFTYWIRUSJLZHGDHWWHBAAVTFXUQJPXWCIABVHQCDVPCVRVFOLMZRUBOCMPRCYNEVBSIPWMRNIZVGZFJHMSI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.3957917070351492);
    msg.setSource(2318U);
    msg.setSourceEntity(197U);
    msg.setDestination(18145U);
    msg.setDestinationEntity(200U);
    msg.op = 6U;
    msg.version.assign("JMSAINEJBNHTCEEWVALEKZGBCGWUTXFKIBVEQRBASGGHBSPOCIIJOXZPT");
    msg.description.assign("JXUCYBADQYNXXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.10667114272607625);
    msg.setSource(27134U);
    msg.setSourceEntity(234U);
    msg.setDestination(2492U);
    msg.setDestinationEntity(113U);
    msg.value = 0.5277360346532195;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.8422629994806281);
    msg.setSource(33959U);
    msg.setSourceEntity(6U);
    msg.setDestination(40642U);
    msg.setDestinationEntity(116U);
    msg.value = 0.7977510043614153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.3883862128614204);
    msg.setSource(47407U);
    msg.setSourceEntity(235U);
    msg.setDestination(15496U);
    msg.setDestinationEntity(111U);
    msg.value = 0.9411102383231447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #2", msg == *msg_d);
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
