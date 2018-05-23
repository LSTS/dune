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
// IMC XML MD5: 60bae9d2a5dfb6cb336b442c839133fb                            *
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
    msg.setTimeStamp(0.243496451149);
    msg.setSource(65019U);
    msg.setSourceEntity(13U);
    msg.setDestination(64939U);
    msg.setDestinationEntity(86U);
    msg.state = 124U;
    msg.flags = 250U;
    msg.description.assign("NGRQUOJVSETSSXEKAIIFTBACAPEDBBDEDHGRQPSQOKTMRALRJOFOFWSJKGTWUKMLQIFZTQFBKPVCXIUZTAIDVNNERYHHVYCLEJNHWHFJCEJLZABTEP");

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
    msg.setTimeStamp(0.273007758996);
    msg.setSource(49261U);
    msg.setSourceEntity(129U);
    msg.setDestination(6072U);
    msg.setDestinationEntity(53U);
    msg.state = 245U;
    msg.flags = 250U;
    msg.description.assign("FQFSHBQJTLFWEZEZZOXHWZNMYXPFYOAMYRJDJSUGCVNAKUTLIHPIKLRAQRIGMCTRCVUURJQCQLDYTLCILDPXJPMYDYXVNJASTDZMJKFNWRBCSFGNFWEQDFEABSXUZAEZPEAYQFOBLNNYHJEIVMPPTCCURBRVUM");

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
    msg.setTimeStamp(0.418133945972);
    msg.setSource(10942U);
    msg.setSourceEntity(131U);
    msg.setDestination(18699U);
    msg.setDestinationEntity(79U);
    msg.state = 180U;
    msg.flags = 37U;
    msg.description.assign("GOFYTPCRJACSEDZXSHKRGQAYALGK");

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
    msg.setTimeStamp(0.294959724465);
    msg.setSource(45955U);
    msg.setSourceEntity(89U);
    msg.setDestination(61464U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.40932336763);
    msg.setSource(62394U);
    msg.setSourceEntity(253U);
    msg.setDestination(7806U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.769676727458);
    msg.setSource(19162U);
    msg.setSourceEntity(133U);
    msg.setDestination(29200U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.501096765404);
    msg.setSource(7771U);
    msg.setSourceEntity(214U);
    msg.setDestination(26129U);
    msg.setDestinationEntity(116U);
    msg.id = 93U;
    msg.label.assign("GIRHFTGIWXJLFBWHIBFSSSYMQJEXLZWADQLRUYFVTNRLUEENMMSBIHMVGNQFCHIEUJOIZCUGDBEBPGCXAVPVZYQGQZDICPYBRSNRRDUAAFWPWSSTJTEQAALHCGNFKXAOWOKMDAKNBYZYMTITDZRLJWVKYQOXSKXPHSLVLEWOHFQICXQHKCGKAWCKXXVNMAMEZNEPKOHUOODPTDJJCRMSZJGCPMUTIJQ");
    msg.component.assign("RGQGATXKUVXTBQPHFPLBSPFXYLJUIRUZNRTVSTHVHERPFNSUKDEHJKQMZDCEHRQUBLQWFIANCGIOYKAWPYGTJBEYKSGCJKOXUWBLBQEBWOFWAGSUCKVJCJNGPOCBTNFKWGFOAEZONVZZHGDREFPMXCSXOMZYVAMILHMVBLVC");
    msg.act_time = 44584U;
    msg.deact_time = 21609U;

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
    msg.setTimeStamp(0.729283229877);
    msg.setSource(59711U);
    msg.setSourceEntity(73U);
    msg.setDestination(31547U);
    msg.setDestinationEntity(93U);
    msg.id = 169U;
    msg.label.assign("NWDRKQBMTIEKHHWAPVXQFIUTAYPKMAMGOWSVGFOFJICOFGATLFDFFYRICZBYVSUBVMRGPJDNZEYDBTBZHRABHKXMIQFXZXGMKOTESXOV");
    msg.component.assign("BGOVWOGNSQCXCJFGEXZUDFSVXIYHUTOHBAXQWNSGPCBXONBPYNFQLKXSVLARZRFSNMSJUAEOGPRJDEFVWUDCKEVWFBXKJHNCHKUDKZVRMKJLODIVZZPSQWEPXMBKQHYPVJUWVNYOMBNSYMKPAIYYIHTJJFDRCJMOIWDBHRIBFPFGQARQMAAMLZLLCIRIUJSOEEWIZTXZKHTEOEYSTETQVZLUIAQYXGLPTAWGDAFKCDGHRTBLPTWDZ");
    msg.act_time = 42338U;
    msg.deact_time = 16777U;

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
    msg.setTimeStamp(0.0788784414667);
    msg.setSource(58589U);
    msg.setSourceEntity(69U);
    msg.setDestination(14208U);
    msg.setDestinationEntity(192U);
    msg.id = 98U;
    msg.label.assign("IVUKRHMXYBDGNYUDTSUJSJMPOBLDIPWXSCMKCBTXGQICFUHYLRWJDDGGNERMXLEWKIGIKQBRURAFTTQHNAHXJXMRYJWUFZNUOFGXARTYKBVNQHHPRWMXIAJEZXYIDAROHGUHEDEYMVWQTJWTQLQXYAEGJCZZZ");
    msg.component.assign("UPNHAPZCORNBNTFYLOE");
    msg.act_time = 35846U;
    msg.deact_time = 33905U;

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
    msg.setTimeStamp(0.393051040153);
    msg.setSource(56551U);
    msg.setSourceEntity(55U);
    msg.setDestination(38637U);
    msg.setDestinationEntity(158U);
    msg.id = 34U;

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
    msg.setTimeStamp(0.0176323278077);
    msg.setSource(64709U);
    msg.setSourceEntity(142U);
    msg.setDestination(42256U);
    msg.setDestinationEntity(203U);
    msg.id = 63U;

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
    msg.setTimeStamp(0.0941173440311);
    msg.setSource(62604U);
    msg.setSourceEntity(238U);
    msg.setDestination(41143U);
    msg.setDestinationEntity(155U);
    msg.id = 74U;

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
    msg.setTimeStamp(0.130328894794);
    msg.setSource(52691U);
    msg.setSourceEntity(104U);
    msg.setDestination(59426U);
    msg.setDestinationEntity(209U);
    msg.op = 147U;
    msg.list.assign("SQEFWZVNNPKMYJSVQTIJHASNUVTIBQPCIGGTBMWBCALXQEBMDJAMZHLORUKFYDJXVOWTVIPZPSJYQIENDLKGRPHRIXWHNCLQFDNIJBCQGORTQLCXWNIXDROSYARMEYPVLDCNBTJUWDYZVNCMXYUAGORQEUBUHK");

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
    msg.setTimeStamp(0.191242625442);
    msg.setSource(38683U);
    msg.setSourceEntity(71U);
    msg.setDestination(8951U);
    msg.setDestinationEntity(34U);
    msg.op = 74U;
    msg.list.assign("DYEHPKSCEVNOBQQNYOOHPNNHQQNBTEKIVVRJAMQFAEXYZNRVDVTTJARDDIPHWKCRXMIKFQMLEGVQBAHFFRWDSGIWNSWLMCJFKOPPOLSCGJUMBYYNMBBZKIFCUMHGXDLPXZZS");

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
    msg.setTimeStamp(0.845760760403);
    msg.setSource(3168U);
    msg.setSourceEntity(217U);
    msg.setDestination(44053U);
    msg.setDestinationEntity(153U);
    msg.op = 180U;
    msg.list.assign("MDFRNHWJZRIOFIDLBIVIRZMTTYAKMOAUMLGTCLLHLNQDOGTVKZFJMIBTHNGQTSSEVRRSZXBSKDWRWQXJWWDTRPDVBTUBJCBIHYQYHAESXDBUOPJKDUGJHVKNAHGAMMNZZKTQLQKCLOZFPDYUFEEAVOCQLNYVW");

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
    msg.setTimeStamp(0.682737426383);
    msg.setSource(41531U);
    msg.setSourceEntity(241U);
    msg.setDestination(61990U);
    msg.setDestinationEntity(187U);
    msg.value = 169U;

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
    msg.setTimeStamp(0.363703004169);
    msg.setSource(36043U);
    msg.setSourceEntity(115U);
    msg.setDestination(8886U);
    msg.setDestinationEntity(245U);
    msg.value = 42U;

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
    msg.setTimeStamp(0.998687834284);
    msg.setSource(7654U);
    msg.setSourceEntity(102U);
    msg.setDestination(47772U);
    msg.setDestinationEntity(233U);
    msg.value = 67U;

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
    msg.setTimeStamp(0.738823056827);
    msg.setSource(914U);
    msg.setSourceEntity(170U);
    msg.setDestination(15263U);
    msg.setDestinationEntity(39U);
    msg.consumer.assign("BXQDHPYBOYPARKVMIBUOVZTSAMCSGPFNCOWWDEYHUHDNLJREKFUFEAAMKCRVYVFYSRXWEHQDCNITHDZVITRQETTDVNIFCGIIQKJBNYSXUP");
    msg.message_id = 39725U;

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
    msg.setTimeStamp(0.0167881087616);
    msg.setSource(63371U);
    msg.setSourceEntity(74U);
    msg.setDestination(50403U);
    msg.setDestinationEntity(31U);
    msg.consumer.assign("TTBXDZZSFXKQCMDKLGSPUBEUG");
    msg.message_id = 42828U;

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
    msg.setTimeStamp(0.526310799946);
    msg.setSource(57237U);
    msg.setSourceEntity(139U);
    msg.setDestination(9327U);
    msg.setDestinationEntity(112U);
    msg.consumer.assign("OQDRMZKZJMSQNGRUUTOLFFCBOBDBAZKEOMYKEVVWTQBTDEJZDDKSQFCVSGGNNWRLPCPALQYAIVXTDAGWHBYGMKIJVUUAPHKTMWCAEKCVLHJRWFAOOWMPJRJXNOHLJYNNYILFRG");
    msg.message_id = 52565U;

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
    msg.setTimeStamp(0.294245368904);
    msg.setSource(48065U);
    msg.setSourceEntity(58U);
    msg.setDestination(56053U);
    msg.setDestinationEntity(115U);
    msg.type = 234U;

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
    msg.setTimeStamp(0.233435043291);
    msg.setSource(37136U);
    msg.setSourceEntity(20U);
    msg.setDestination(52867U);
    msg.setDestinationEntity(6U);
    msg.type = 168U;

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
    msg.setTimeStamp(0.562349596062);
    msg.setSource(44790U);
    msg.setSourceEntity(189U);
    msg.setDestination(37985U);
    msg.setDestinationEntity(124U);
    msg.type = 70U;

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
    msg.setTimeStamp(0.725163181054);
    msg.setSource(56186U);
    msg.setSourceEntity(177U);
    msg.setDestination(60279U);
    msg.setDestinationEntity(94U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.5296801283);
    msg.setSource(35591U);
    msg.setSourceEntity(15U);
    msg.setDestination(16176U);
    msg.setDestinationEntity(181U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.443226754569);
    msg.setSource(36111U);
    msg.setSourceEntity(96U);
    msg.setDestination(51253U);
    msg.setDestinationEntity(207U);
    msg.op = 194U;

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
    msg.setTimeStamp(0.575818415024);
    msg.setSource(1274U);
    msg.setSourceEntity(214U);
    msg.setDestination(50960U);
    msg.setDestinationEntity(45U);
    msg.total_steps = 204U;
    msg.step_number = 20U;
    msg.step.assign("ABHEDUFQDNKPYSYMGGTAJYXOYRKOZJKPOWCWEICQEVKSPBOKLLTNDGMFSANZXBLPAWTRWQTDMESKRRIUIPXTTGXNXDIMUVJVCYPLRXNRQSKQHJACLODDFJSBYXUCLFQPRWJEGHMHOMNGZFSQGEXBEZCUUUVBANFATDMTBNZVBHWPZRTVUOYQCGZIWSLGLBVEJRHOZLZINKISCWFJTSHEKNWLVBA");
    msg.flags = 53U;

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
    msg.setTimeStamp(0.762001541923);
    msg.setSource(61672U);
    msg.setSourceEntity(7U);
    msg.setDestination(38974U);
    msg.setDestinationEntity(48U);
    msg.total_steps = 76U;
    msg.step_number = 151U;
    msg.step.assign("EWDPVXILOWRSCNUVUDTAXBVWQBBTOPCHCTXPSIJECAQGGYWUOWRCZZIUAEGFUWROZSVJGMSQKFSRMLYMOUCNHDIBRPLEGQSRSIBDWBDUNRJZXHAQFLVCGFNMTJXBMGZJHIFJLHAKMLLVYXOTHDW");
    msg.flags = 223U;

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
    msg.setTimeStamp(0.108504303505);
    msg.setSource(18680U);
    msg.setSourceEntity(190U);
    msg.setDestination(678U);
    msg.setDestinationEntity(5U);
    msg.total_steps = 243U;
    msg.step_number = 205U;
    msg.step.assign("BTCFGMAHXALBZFHRPPYOOTRORZVYPAZEBMPEKHN");
    msg.flags = 114U;

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
    msg.setTimeStamp(0.9039810657);
    msg.setSource(62556U);
    msg.setSourceEntity(59U);
    msg.setDestination(31723U);
    msg.setDestinationEntity(148U);
    msg.state = 186U;
    msg.error.assign("QYLUTCWOOMPSVELQIQNBIKDEDBYDMRGODZYDTBXBJVUVVTBGHNASXJIGVUGOIEWALQCTSIQGAFXIFCFDHBMHXACGYUWWPQLGGFSHLZURAUWRVAZP");

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
    msg.setTimeStamp(0.755705942532);
    msg.setSource(44940U);
    msg.setSourceEntity(93U);
    msg.setDestination(54193U);
    msg.setDestinationEntity(206U);
    msg.state = 115U;
    msg.error.assign("ZULDWSERKEYJMIJYYTTQRVWYKCZFQJZSEIYGMTNDZXHIIGPXAGIHVHNQERDNXCIZAACTSPAOFBTPPQMLLYUQZKWNQJDQBJOTJKAOXMDKWTFNOGEFULRKHGBYRUYKXOYOOQFSVIZENUSPPDSPTDBCJMMBVFSBEHVXNPMK");

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
    msg.setTimeStamp(0.264805368708);
    msg.setSource(44480U);
    msg.setSourceEntity(238U);
    msg.setDestination(25515U);
    msg.setDestinationEntity(185U);
    msg.state = 162U;
    msg.error.assign("YRVDFGMRZAOLXLVDTDKOJKQVMGYBYLKCHJATVERKTMRIRNEFLXVWWCQQWCRCCFYTX");

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
    msg.setTimeStamp(0.15155769013);
    msg.setSource(10040U);
    msg.setSourceEntity(234U);
    msg.setDestination(37060U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.826294392081);
    msg.setSource(47026U);
    msg.setSourceEntity(105U);
    msg.setDestination(49874U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.671652085956);
    msg.setSource(52056U);
    msg.setSourceEntity(179U);
    msg.setDestination(12986U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.620817487686);
    msg.setSource(32037U);
    msg.setSourceEntity(49U);
    msg.setDestination(25374U);
    msg.setDestinationEntity(44U);
    msg.op = 178U;
    msg.speed_min = 0.404977181038;
    msg.speed_max = 0.469035157764;
    msg.long_accel = 0.258348978385;
    msg.alt_max_msl = 0.548652075729;
    msg.dive_fraction_max = 0.674064834044;
    msg.climb_fraction_max = 0.659704196398;
    msg.bank_max = 0.00652991641435;
    msg.p_max = 0.142094731475;
    msg.pitch_min = 0.859611008118;
    msg.pitch_max = 0.446118685885;
    msg.q_max = 0.210356181051;
    msg.g_min = 0.391227568529;
    msg.g_max = 0.275530036318;
    msg.g_lat_max = 0.444144943822;
    msg.rpm_min = 0.164948405799;
    msg.rpm_max = 0.257305270741;
    msg.rpm_rate_max = 0.705715907217;

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
    msg.setTimeStamp(0.60916330046);
    msg.setSource(64151U);
    msg.setSourceEntity(226U);
    msg.setDestination(978U);
    msg.setDestinationEntity(38U);
    msg.op = 81U;
    msg.speed_min = 0.268138106071;
    msg.speed_max = 0.728368042317;
    msg.long_accel = 0.930849975885;
    msg.alt_max_msl = 0.784325264223;
    msg.dive_fraction_max = 0.580249735169;
    msg.climb_fraction_max = 0.608465184206;
    msg.bank_max = 0.697194572934;
    msg.p_max = 0.825076518631;
    msg.pitch_min = 0.313274347876;
    msg.pitch_max = 0.749237626573;
    msg.q_max = 0.162666645149;
    msg.g_min = 0.340685045224;
    msg.g_max = 0.355151209326;
    msg.g_lat_max = 0.380002841745;
    msg.rpm_min = 0.653500437542;
    msg.rpm_max = 0.476543655495;
    msg.rpm_rate_max = 0.884487433867;

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
    msg.setTimeStamp(0.243323832497);
    msg.setSource(37131U);
    msg.setSourceEntity(66U);
    msg.setDestination(589U);
    msg.setDestinationEntity(110U);
    msg.op = 23U;
    msg.speed_min = 0.68275793889;
    msg.speed_max = 0.43324171617;
    msg.long_accel = 0.576197093432;
    msg.alt_max_msl = 0.2623502147;
    msg.dive_fraction_max = 0.666802874088;
    msg.climb_fraction_max = 0.637618486215;
    msg.bank_max = 0.456659924026;
    msg.p_max = 0.244043499138;
    msg.pitch_min = 0.967493379396;
    msg.pitch_max = 0.339190012589;
    msg.q_max = 0.372999274094;
    msg.g_min = 0.798854091172;
    msg.g_max = 0.555315235172;
    msg.g_lat_max = 0.547281594994;
    msg.rpm_min = 0.224576056545;
    msg.rpm_max = 0.239015549498;
    msg.rpm_rate_max = 0.0700050935148;

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
    msg.setTimeStamp(0.250461401492);
    msg.setSource(7332U);
    msg.setSourceEntity(14U);
    msg.setDestination(58792U);
    msg.setDestinationEntity(69U);
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("WCFEHFVSIUIUNIMBJQVOIAKZHJBOHPXERJWERCHMESRJQFMADQJZQOQLNCSSTDLLKVUAYZTHHGTDUYXVMTQTAKBYSIEDHXFXUGXXGYJKDVNAJNMHMZGDCAODLGPCVPCCZLPEDJKVRHCFQSYFPWSZEEQGPBGAJANRFTLDSUQRXPJONOCRIKYKWNBKZSNSVUZXYRIFDMWLIWLXNILOOCIAWMW");
    tmp_msg_0.op = 174U;
    tmp_msg_0.sched_time = 0.0194881499742;
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
    msg.setTimeStamp(0.0197784879207);
    msg.setSource(27277U);
    msg.setSourceEntity(73U);
    msg.setDestination(54918U);
    msg.setDestinationEntity(228U);
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.412453614319;
    tmp_msg_0.y = 0.153211168346;
    tmp_msg_0.z = 0.378930739761;
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
    msg.setTimeStamp(0.514417684715);
    msg.setSource(39204U);
    msg.setSourceEntity(210U);
    msg.setDestination(61697U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.162485509676);
    msg.setSource(39708U);
    msg.setSourceEntity(74U);
    msg.setDestination(27068U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.69812576747;
    msg.lon = 0.986104447804;
    msg.height = 0.148873083674;
    msg.x = 0.374986484472;
    msg.y = 0.706435330659;
    msg.z = 0.778964096618;
    msg.phi = 0.977991524286;
    msg.theta = 0.372131232135;
    msg.psi = 0.185426544165;
    msg.u = 0.69322350725;
    msg.v = 0.972323588927;
    msg.w = 0.603903761746;
    msg.p = 0.122655863177;
    msg.q = 0.0706903212339;
    msg.r = 0.0547100705949;
    msg.svx = 0.482347027734;
    msg.svy = 0.784233815385;
    msg.svz = 0.707390592311;

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
    msg.setTimeStamp(0.205204441396);
    msg.setSource(17717U);
    msg.setSourceEntity(13U);
    msg.setDestination(719U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.514956700871;
    msg.lon = 0.0618147217526;
    msg.height = 0.225954647393;
    msg.x = 0.239573677776;
    msg.y = 0.611557745044;
    msg.z = 0.413756672753;
    msg.phi = 0.0470808165572;
    msg.theta = 0.90688784287;
    msg.psi = 0.435457830744;
    msg.u = 0.0938133778593;
    msg.v = 0.415194529266;
    msg.w = 0.949365883183;
    msg.p = 0.495681047459;
    msg.q = 0.96721106598;
    msg.r = 0.287241531811;
    msg.svx = 0.965331715903;
    msg.svy = 0.950080875249;
    msg.svz = 0.271494552295;

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
    msg.setTimeStamp(0.752510687769);
    msg.setSource(27549U);
    msg.setSourceEntity(48U);
    msg.setDestination(466U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.537746488054;
    msg.lon = 0.647748817726;
    msg.height = 0.2199390909;
    msg.x = 0.698562969399;
    msg.y = 0.551135108074;
    msg.z = 0.272267386447;
    msg.phi = 0.199672994055;
    msg.theta = 0.162971526214;
    msg.psi = 0.765639261419;
    msg.u = 0.86878818083;
    msg.v = 0.757085447291;
    msg.w = 0.813942583413;
    msg.p = 0.249266843249;
    msg.q = 0.0252224707146;
    msg.r = 0.573765092713;
    msg.svx = 0.976593390988;
    msg.svy = 0.210022682059;
    msg.svz = 0.864569764523;

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
    msg.setTimeStamp(0.414060860046);
    msg.setSource(42468U);
    msg.setSourceEntity(92U);
    msg.setDestination(38190U);
    msg.setDestinationEntity(227U);
    msg.op = 235U;
    msg.entities.assign("NZGFDUFMDLVFXYTWJIMRDHBNIWUBALKPEKUQATLCYCGQSUGKJHJKCOLNQXOZISHDCEXNKCIWZBTAXTCTUKFJJTSBBPURDGWTVULQNMWOYQTVHRVTAICZJMYRBUQWRWABPXXVGSQSGYXVZFGDHOZZHYRRHAVXRCYSOSPOMFIXW");

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
    msg.setTimeStamp(0.650979029587);
    msg.setSource(5140U);
    msg.setSourceEntity(223U);
    msg.setDestination(21395U);
    msg.setDestinationEntity(180U);
    msg.op = 112U;
    msg.entities.assign("TKVYBQTCQPDW");

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
    msg.setTimeStamp(0.428212060221);
    msg.setSource(17225U);
    msg.setSourceEntity(11U);
    msg.setDestination(49863U);
    msg.setDestinationEntity(154U);
    msg.op = 31U;
    msg.entities.assign("LAQOYXBFUVGXKOMFYUMCGOQHHJUWJVKNMKSVJNIMUSQGOPZPDBIGJHWXIJFMZDXJXMDRAZMPWHHNGRPTLONFVEBPK");

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
    msg.setTimeStamp(0.545732871515);
    msg.setSource(64313U);
    msg.setSourceEntity(235U);
    msg.setDestination(27824U);
    msg.setDestinationEntity(224U);
    msg.type = 206U;
    msg.speed = 23557U;
    const char tmp_msg_0[] = {52, 44, 29, 110, -16, 53, -25, -17, 102, -28, 92, 90, 51, 36, 84, -80, -116, 44, -95, -88, 6, -32, -112, -57, 19, 103, 70, -96, -65, -53, 103, 20, 35, -91, 67, 70, -110, -82, 22, 45, -45, -108, 74, -71, 50, 88, 80, -6, 59, 71, 110, 5, 7, -95, -28, -70, 56, 1, 70, -69, 73, 119, 88, 33, 65, -12, -19, 23, 42, 32, 41, -94, -56, 120, -122, -42, -66, 118, -70, -76, -123, 21, -127, 29, 6, -102, 65, -17, -69, -39, -75, -3, -43, 117, 46, 113, 64, -33, 106, 24, -14, 20, -5, -11, 23, 100, -28, -58, 107, -72, 34, 91, -17, -3, -19, -127, -33, 77, 66, -58, 62, -124, -114, -126, -39, -97, 85, 18, 28, -66, -120, 31, 117, -55, -10, -27, -109, 4, -63, -8, 2, 103, -13, -32, -7, -123, -57, -113, 77, -62, 97, 33, -90, -19, 74, 13, -68, -19, 37, -81, 17, -108, -2, 115, 39, 5, 79, -9, 24, -23, 39, -110, 32, 118, 114, -71, 12, 39, -9, -44, -116, 107, 85, -34, -35, 97, 37, -62, 83, 76, -99, -82, -111, 124, 74, 18, -103, -16, 66, 11, 13, 5, 2, -82, 59, 31, -6, -18, -95, 40, -25, -50, 45, 119, 34, -97, 18, -103, -123, 120, 2, -87, -3, 12, -37, 72, -65, 105, -23, -106, -57, 37, -24, 104, -31, 118, -85, -55};
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
    msg.setTimeStamp(0.990201900057);
    msg.setSource(15163U);
    msg.setSourceEntity(229U);
    msg.setDestination(52205U);
    msg.setDestinationEntity(54U);
    msg.type = 123U;
    msg.speed = 45089U;
    const char tmp_msg_0[] = {90, 118, -102, -43, 94, 2, 20, 41, 73, -88, 67, -23, -11, -36, 101, -49, 61, -110, -90, -91, 55, 93, -5, 32, -79};
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
    msg.setTimeStamp(0.66255285469);
    msg.setSource(47043U);
    msg.setSourceEntity(198U);
    msg.setDestination(43424U);
    msg.setDestinationEntity(68U);
    msg.type = 150U;
    msg.speed = 22178U;
    const char tmp_msg_0[] = {123, 91, -55, -98, -78, -48, -44, -47, -43, 0, 96, 29, 40, 2, -13, -121, 35, -60, -84, -4, -107, -82, -19, 95, -48, 61, 4, -6, 109, -101, -72, -125, 24, -98, -52, 47, 98, 54, -56, 65, 87, 42, 37, -11, 14, -114, 10, 32, -125, -41, -37, -123, -25, -99, -3, 105, -93, -70, -19, -87, 39, -128, 123, -2, 31, 91, -56, -17, 107, 112, 67, 45, -58, -105, 72, 28, -123, -60, -78, -125, 69, -10, -84, -45, 50, 56, -22, -64, 10, -24, -45, 112, 96, 116, 19, -88, 2, -78, -59, -110, 1, -60, 6, -33, -76, -23, -128, 30, -115, 37, 50, 69, 124, 72, 97, -16, 3, -107, -107, 63, 56, 60, -57, 21, 103, -116, 33, 90, 103, 118, 101};
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
    msg.setTimeStamp(0.624555144291);
    msg.setSource(60843U);
    msg.setSourceEntity(54U);
    msg.setDestination(50849U);
    msg.setDestinationEntity(96U);
    msg.op = 46U;
    msg.tas2acc_pgain = 0.913443365724;
    msg.bank2p_pgain = 0.719773845231;

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
    msg.setTimeStamp(0.975209267919);
    msg.setSource(3855U);
    msg.setSourceEntity(181U);
    msg.setDestination(42186U);
    msg.setDestinationEntity(116U);
    msg.op = 86U;
    msg.tas2acc_pgain = 0.468640974415;
    msg.bank2p_pgain = 0.843781233382;

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
    msg.setTimeStamp(0.468675816537);
    msg.setSource(10807U);
    msg.setSourceEntity(125U);
    msg.setDestination(13521U);
    msg.setDestinationEntity(114U);
    msg.op = 205U;
    msg.tas2acc_pgain = 0.464261049279;
    msg.bank2p_pgain = 0.504365238519;

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
    msg.setTimeStamp(0.335681979135);
    msg.setSource(24004U);
    msg.setSourceEntity(49U);
    msg.setDestination(8109U);
    msg.setDestinationEntity(13U);
    msg.available = 3968634639U;
    msg.value = 10U;

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
    msg.setTimeStamp(0.365073643818);
    msg.setSource(18405U);
    msg.setSourceEntity(197U);
    msg.setDestination(11953U);
    msg.setDestinationEntity(248U);
    msg.available = 2964341908U;
    msg.value = 63U;

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
    msg.setTimeStamp(0.457928952699);
    msg.setSource(21908U);
    msg.setSourceEntity(216U);
    msg.setDestination(64233U);
    msg.setDestinationEntity(37U);
    msg.available = 3760455584U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.920179267876);
    msg.setSource(41032U);
    msg.setSourceEntity(232U);
    msg.setDestination(60472U);
    msg.setDestinationEntity(166U);
    msg.op = 91U;
    msg.snapshot.assign("HKFFQVRPWGJDSBOVSUEMEAVRAMKHNRCCKAQOTEYQARSJNPQFZQXCFLRKYSLMJHWXQKNXLIZDOIBVCGYAQMKSONUNKXSFCACZE");
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.889261933729;
    tmp_msg_0.x = 0.0947265745646;
    tmp_msg_0.y = 0.42596176382;
    tmp_msg_0.z = 0.841536892598;
    tmp_msg_0.timestep = 0.966594494614;
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
    msg.setTimeStamp(0.761377713225);
    msg.setSource(8388U);
    msg.setSourceEntity(241U);
    msg.setDestination(5680U);
    msg.setDestinationEntity(74U);
    msg.op = 107U;
    msg.snapshot.assign("EVMJLUWQHZMXLJXNDEAEGJPAIOJABSRMGRANCJBOGWZFAOGKRDDLHDFAFEGQUNQFDRTUZHXILQSDUWGBUTRZYZVAEHKWVQRVYSPUHKFPOLMPNIIHZWMCGNFVTJQKTGFHQZEPH");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 28069U;
    tmp_msg_0.duration = 32166U;
    tmp_msg_0.speed = 0.765073224069;
    tmp_msg_0.speed_units = 99U;
    tmp_msg_0.x = 0.836441751242;
    tmp_msg_0.y = 0.646517154661;
    tmp_msg_0.z = 0.551826644221;
    tmp_msg_0.z_units = 227U;
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
    msg.setTimeStamp(0.927377803287);
    msg.setSource(55102U);
    msg.setSourceEntity(240U);
    msg.setDestination(11614U);
    msg.setDestinationEntity(151U);
    msg.op = 247U;
    msg.snapshot.assign("JIJMAFDGSEENXMCPEGBZMTZQVPZWVTHIKXJGVYKFCSOVURMUQSTHLUYRWCYGANONJGZQADRBFJNTXEQRKKYRNBRSIQAAZNLFGSECFHGRBLIQFGQIOBUALPKTQKUSVKXBWJETUCSHPHCQJXGBGCLVUOLTHMJRINDDDEXUDLXOYPWIODKOBTZPAYDQZEZSAWMJYMXZPCSUYDFIWAHHIEJZPWF");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("EFGMLLHQBDXPZHPJSSVBVMFZNPNGWRMSGILDSQIVYJUKVJGDXRUBUSOTYRNCB");
    tmp_msg_0.formation_name.assign("VAJILQPOMTRUVRWCZCIGZSJDYBXVNHMDKFZLMUJBPLQAXTXBSYLNJYROOZDFNBFTSNEICUSSVOKKAKZLLUDAGVUHQYZKBVYUIOYRGQGFAKBGSPFQZVERQMWSPKSIHJLGMCOWQKOZTGPDXEIYLXTEBYRZTGPHCPKXFEJLOTCXENRNMQDPBIZROYHVJIEWRYUHRUCFDDP");
    tmp_msg_0.plan_id.assign("DRKSNCBIJATIJYNJOPRZZWYUZDGAHSXFQHGZLLZSXGUYPHZSDXTAAAYMCXHTLAXRBOAMCPEOIEPGEFOOCVGUYJABNXXSVMCHVFGJJVKMKDMNQTSKCBJLNMLBGEBDREZZWHTEIN");
    tmp_msg_0.description.assign("DQTOSBHCYMLLVOTJRSJWIFSDBQAGUPIXLZLQUKLJSWPKINBIKNUXODFHSSBLYMJKBHFKDAHDICDPPBWRULGZYXCNNPOF");
    tmp_msg_0.leader_speed = 0.338874265321;
    tmp_msg_0.leader_bank_lim = 0.643399995111;
    tmp_msg_0.pos_sim_err_lim = 0.117700377232;
    tmp_msg_0.pos_sim_err_wrn = 0.647373830531;
    tmp_msg_0.pos_sim_err_timeout = 18726U;
    tmp_msg_0.converg_max = 0.353379011969;
    tmp_msg_0.converg_timeout = 45975U;
    tmp_msg_0.comms_timeout = 717U;
    tmp_msg_0.turb_lim = 0.699291251049;
    tmp_msg_0.custom.assign("ZHGMIKQBNROAULIGSFOVCXDLCLWEVSDRCKMXNYSFLUICQJSYVVBKYILZBJDDECHPCZTWKSXBNREYMQBEJHJWNIDTLOLMOSBQQVOLFXYVTPUNRR");
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
    msg.setTimeStamp(0.729525622871);
    msg.setSource(33836U);
    msg.setSourceEntity(195U);
    msg.setDestination(22226U);
    msg.setDestinationEntity(17U);
    msg.op = 230U;
    msg.name.assign("DBGNUXEWUPZIDKMJGXXTBYVSYXQHPABLPDLDJFJIRCOWACJCGPSDNCTZFULNONWIAKDYAVFYAZYXLWSSOWEHFZLNKETUTPILVRQYVCCVMRHEUYMFZQGHBOVGKOPYKGVZFQEGTRLDMPZZPCXFGIRSBHCAKKOIPBBMUOUAOHLWHSPWLFXMXQKJMQDRXQETJWKQJOHCBEMRWFI");

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
    msg.setTimeStamp(0.641314207983);
    msg.setSource(62408U);
    msg.setSourceEntity(116U);
    msg.setDestination(2212U);
    msg.setDestinationEntity(74U);
    msg.op = 9U;
    msg.name.assign("VUSLMNMGOIKOBEWUWPVNERNVBMOLTOIBFIOAGXUZAVGHZEWCJDVCYEESWFSSCTAGVLWZRJPRBGNIRSZBDLJLRXLTLKKJYYJYQPDTHQDXGBRIMZZIFUXEWUVKLKSPHNTQJENUQMQXTLHSPCRMDKRDLMYAHSMOCJQYZRIHCNFGKBSGUNCQWFWHZVVETZOANNUTOMGSAFDAQFCKAPWDPXFKCYDPJAIJMUXEWYH");

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
    msg.setTimeStamp(0.591621862408);
    msg.setSource(28873U);
    msg.setSourceEntity(191U);
    msg.setDestination(45637U);
    msg.setDestinationEntity(42U);
    msg.op = 56U;
    msg.name.assign("WDAHZGWXAYROPACTFKOQYAYCZSKGCVVXJDSEKSCYQNAMSGMWEDRBOMBMJTTGONLDSKXJIZROBZZHBYVAPMTXPHM");

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
    msg.setTimeStamp(0.145911695974);
    msg.setSource(38680U);
    msg.setSourceEntity(156U);
    msg.setDestination(1576U);
    msg.setDestinationEntity(42U);
    msg.type = 48U;
    msg.htime = 0.570317152851;
    msg.context.assign("PSGHPNOIBVAUOUVEMMKIQSBUEIJIBZSETCULWPAAPLQRGZUAJHXDXCFHYOVHPUIFRVIAMTDFYEODIOXRHNKRMBSICXEWPTIDWJUZPYGGNFQHOCADKZXEOMQSBFVTWCYWBSRLLXYDILNQDPGMELVKKZFRFKX");
    msg.text.assign("CTXDCEHQLYEAVJYBLIYDXDPSJOGAIPKMVKTJMRNKYEZPZWMLRCXNTJGARFEAPOSR");

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
    msg.setTimeStamp(0.638636665895);
    msg.setSource(4664U);
    msg.setSourceEntity(115U);
    msg.setDestination(61441U);
    msg.setDestinationEntity(27U);
    msg.type = 184U;
    msg.htime = 0.346176214914;
    msg.context.assign("ASBEREUITQUPXBSNNUJCKIGXYOSPISPTCJMVAEXRXBADZWQYJZVKKATFHSDJZLYPEZQYIJNERHEBSMQVVA");
    msg.text.assign("TZWEVNDMQCEYPSGNMTHOJQEXIAODVFLZXJUYLODMWCFZOSOHDFWGREJMCEOLJUMPLYDNVARGXWUBUIQHGNNSIJXHMSVFPFHFBGLCASUOYGKVSKVJKOIIRVUWKVEHZZXAKIBYFHMGHTDRUKDSQBGNTRXRPBIVREHQSKCTAWLABWTLOSTNWMEGJDXYYYKQUJRSAPPWAIVRPMFPEKCJCANNATPDF");

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
    msg.setTimeStamp(0.770791088821);
    msg.setSource(13932U);
    msg.setSourceEntity(173U);
    msg.setDestination(28044U);
    msg.setDestinationEntity(234U);
    msg.type = 130U;
    msg.htime = 0.468304248701;
    msg.context.assign("NGEMBAYQNEDNVTHIKGONUUBCESGBQLTTRYCJVKLTTUFPNLPBLYTZWDYSDOJIMXLBFPXXHRRQZPUVWTZRCXHBQLWNBUBIHMKJAJPMNEDNA");
    msg.text.assign("KZWXBXSWSCRNROCXCDPWKCBVQEZQGIXQAZWGPS");

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
    msg.setTimeStamp(0.270187862968);
    msg.setSource(38844U);
    msg.setSourceEntity(200U);
    msg.setDestination(18808U);
    msg.setDestinationEntity(23U);
    msg.command = 82U;
    msg.htime = 0.601830615742;

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
    msg.setTimeStamp(0.436582804794);
    msg.setSource(38033U);
    msg.setSourceEntity(186U);
    msg.setDestination(52085U);
    msg.setDestinationEntity(27U);
    msg.command = 170U;
    msg.htime = 0.608044897475;

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
    msg.setTimeStamp(0.160099901641);
    msg.setSource(61331U);
    msg.setSourceEntity(198U);
    msg.setDestination(50193U);
    msg.setDestinationEntity(107U);
    msg.command = 45U;
    msg.htime = 0.226987718276;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 112U;
    tmp_msg_0.htime = 0.0480885630219;
    tmp_msg_0.context.assign("LUQFMXFBRIONHRYFEWNLRXCGWSEUHMBNOFHRYTYGYKTODMCVAYZBNUE");
    tmp_msg_0.text.assign("IIKECEHMGKPNWDOISLGNWKZWCGYMYFQJPRUZOKHDCGOTAOERBSWOAEWFHZQIAJVKRZ");
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
    msg.setTimeStamp(0.841300630875);
    msg.setSource(27491U);
    msg.setSourceEntity(187U);
    msg.setDestination(48083U);
    msg.setDestinationEntity(51U);
    msg.op = 133U;
    msg.file.assign("BFNCSGWNJUJLEWKTXFEGEQAUQKOODLKKKJABULSGU");

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
    msg.setTimeStamp(0.365770648933);
    msg.setSource(16416U);
    msg.setSourceEntity(23U);
    msg.setDestination(14134U);
    msg.setDestinationEntity(192U);
    msg.op = 63U;
    msg.file.assign("FDBNLNWZOCYKQVUQFWOEOGTFVNPTFJVRUMNXLNGRDDOKBLTCDIKQLYIIZPNLRHZPAXVSNGWUAECTSYMAIADALSXFTXJSMQEFEHBMMQYKROUTMXKBWSWSPFPCZEJUGHVQBGVFNCUMHZRKAZEHIHSYPJPGTKSSWKADEPXNMUBERQACZDGT");

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
    msg.setTimeStamp(0.4115364895);
    msg.setSource(65276U);
    msg.setSourceEntity(128U);
    msg.setDestination(36818U);
    msg.setDestinationEntity(160U);
    msg.op = 39U;
    msg.file.assign("RFNLRUDZVNKZVRCRNVMMVPPZJZLHPMHONVAKHDGXDRWZWECJDPFRSJQKHJY");

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
    msg.setTimeStamp(0.862895887926);
    msg.setSource(1831U);
    msg.setSourceEntity(181U);
    msg.setDestination(46377U);
    msg.setDestinationEntity(66U);
    msg.op = 215U;
    msg.clock = 0.618215045472;
    msg.tz = 74;

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
    msg.setTimeStamp(0.499926008068);
    msg.setSource(26101U);
    msg.setSourceEntity(129U);
    msg.setDestination(5570U);
    msg.setDestinationEntity(210U);
    msg.op = 123U;
    msg.clock = 0.664458151004;
    msg.tz = 40;

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
    msg.setTimeStamp(0.932061851188);
    msg.setSource(21732U);
    msg.setSourceEntity(113U);
    msg.setDestination(39135U);
    msg.setDestinationEntity(155U);
    msg.op = 238U;
    msg.clock = 0.922335629839;
    msg.tz = -48;

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
    msg.setTimeStamp(0.254126078335);
    msg.setSource(21711U);
    msg.setSourceEntity(150U);
    msg.setDestination(59746U);
    msg.setDestinationEntity(40U);
    msg.conductivity = 0.777568790735;
    msg.temperature = 0.371870181597;
    msg.depth = 0.523206192082;

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
    msg.setTimeStamp(0.368971422958);
    msg.setSource(43034U);
    msg.setSourceEntity(200U);
    msg.setDestination(47773U);
    msg.setDestinationEntity(24U);
    msg.conductivity = 0.265466265323;
    msg.temperature = 0.487748757868;
    msg.depth = 0.595366645528;

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
    msg.setTimeStamp(0.369371356455);
    msg.setSource(23348U);
    msg.setSourceEntity(10U);
    msg.setDestination(21217U);
    msg.setDestinationEntity(209U);
    msg.conductivity = 0.908752262646;
    msg.temperature = 0.623286880501;
    msg.depth = 0.281905189728;

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
    msg.setTimeStamp(0.56584539016);
    msg.setSource(39020U);
    msg.setSourceEntity(77U);
    msg.setDestination(27053U);
    msg.setDestinationEntity(148U);
    msg.altitude = 0.629823189463;
    msg.roll = 4195U;
    msg.pitch = 47751U;
    msg.yaw = 34847U;
    msg.speed = 16018;

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
    msg.setTimeStamp(0.158497340358);
    msg.setSource(51711U);
    msg.setSourceEntity(112U);
    msg.setDestination(19638U);
    msg.setDestinationEntity(59U);
    msg.altitude = 0.297397828004;
    msg.roll = 56244U;
    msg.pitch = 57275U;
    msg.yaw = 37409U;
    msg.speed = 9218;

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
    msg.setTimeStamp(0.115412326884);
    msg.setSource(3272U);
    msg.setSourceEntity(164U);
    msg.setDestination(59176U);
    msg.setDestinationEntity(156U);
    msg.altitude = 0.452169306896;
    msg.roll = 37205U;
    msg.pitch = 43148U;
    msg.yaw = 59199U;
    msg.speed = 15300;

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
    msg.setTimeStamp(0.310115096116);
    msg.setSource(9791U);
    msg.setSourceEntity(17U);
    msg.setDestination(50479U);
    msg.setDestinationEntity(101U);
    msg.altitude = 0.511764840183;
    msg.width = 0.879229101813;
    msg.length = 0.0477592614542;
    msg.bearing = 0.561300028703;
    msg.pxl = -2585;
    msg.encoding = 131U;
    const char tmp_msg_0[] = {83, 35, 16, 73, -63, -85, 17, -123, -82, 103, 121, -30, 65, 2, -70, 82, -49, 95, -23, -7, -61, 2, 124, -2, 21, 119, 49, -71, 3, 9, -31, 121, -43, 92, 18, -9, 97, 29, -75, -116, -10, 18, 4, 81, 106, -82, 37, 25, -80, -2, -118, 118, -103, 66, -123, 78, -103, -19, 49, -10, -76, 85, 123, -58, -97, 3, 2, -72, -105, -100, 111, -9, 53, -11, -55, 3, 10, -24, 72, 54, -88, 45, 23, -11, 78, -55, 78, -22, 90, -82, 105, 25, -94, -45, -113, -85, 89, 124, 118, -38, -70, 62, -95, 59, 10, -107, 124, -79, -54, 77, -67, 95, -108, -79, -117, -67, -80, -69, 101, -31, 2, -30, -87, 81, -15, 43, -51, -51, 85, 38, -35, -32, -70, 102, -81, 63, 84, 105, 12, -20, -27, 24, 109, 9, 101, 92, -84, 47, 18, 58, 27, 86, 72, -100, -99, 59, 90, 16, 33, 110, 34, -18, -15, 2, -60, -83, 11, 17, 70, -38, -57, -23, 105, -120, -124, 23, 126, -95, -45, 4, 11, -2, -39, -15, 0, 71, 29, -12, 61, 65, 26, 54, -63, 71, -13, -110, 105, 112, -74, 17, -108, 12, 112, 47, 93, 124, -54, 71, -97, -85, -60, 112, 60, 97, 36, -45, -76, -27, 23, 15, -113, -42, -105, -2, 114, 59, -48, -20, -39, -106, -121, 6, 85, 43, 70, -99, -34, 5, 30, -37, -42, 37, 50, 81, -77, 14, 85, -56, 21, -10, -68, -85};
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
    msg.setTimeStamp(0.171806125772);
    msg.setSource(15471U);
    msg.setSourceEntity(209U);
    msg.setDestination(42568U);
    msg.setDestinationEntity(152U);
    msg.altitude = 0.0181006696674;
    msg.width = 0.936486277158;
    msg.length = 0.114444139868;
    msg.bearing = 0.678159146471;
    msg.pxl = 14360;
    msg.encoding = 166U;
    const char tmp_msg_0[] = {-34, 40, -109, 10, 124, -61, -64, 98, 94, 26, 104, -75, 65, 26, -16, 2, -107, 95, -54, 34, -107, -5, -43, 110, -29, 73, -104, -7, -30, -34, -118, 8, -62, 78, -8, 73, 31, -116, -49, -54, 104, 105, 32, -1, 98, 114, 126, -105, -24, 120, -65, -3, -37, 12, -94, -100, 26, -39, -120, 71, 1, 103, -17, 68, 111, -29, -73, 21, -26, 100, -48, 87, 64, 108, -123, -14, 28, -90, -68, 47, 68, -75, -84, -108, 16, -117, -25, 40, -50, -113, 82, -16, 23, -119, -36, -126, -45, -73, 73, 6, -2, -83, -62, -103, -122, -5, -13, -70, 43, -100, 39, 32, 20, -82, -68, -63, -59, -105, 113, -99, 3, -123, -11, 16, -9, -67, -33, 100, -48, -70, 94, 111, -3, 116, 26};
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
    msg.setTimeStamp(0.159418189995);
    msg.setSource(21075U);
    msg.setSourceEntity(179U);
    msg.setDestination(43801U);
    msg.setDestinationEntity(223U);
    msg.altitude = 0.294440654285;
    msg.width = 0.396968155806;
    msg.length = 0.630913773694;
    msg.bearing = 0.214499843566;
    msg.pxl = 9885;
    msg.encoding = 90U;
    const char tmp_msg_0[] = {-117, 37, 98, -44, -100, 49, 92, -103, -111, -120, -16, 79, 21, 70, 104, -84, 11, -84, -50, -47, 34, 55, 114, 6, 30, 55, -51, -91, -61, -56, 34, 98, -7, 94, 60, 55, 64, 48, 118, 109, -48, 108, 19, 72, -107, 100, -16, -73, -127, -99, 104, 70, -7, -74, -40, 69, 106, -21, 42, 68, 72, 97, 98, -87, -71, 52, -104, 72, -34, 83, -117, -37, 82, 54, -112, -24, -104, -37, 42, 27, 61, 112, 25, 51, 120, 77, -109, 96, 44, 59, 40, 43, 90, 94, -123, 76, 96, 39, -14, 69, 105, -38, 91, 117, -79, -12, 18, 124, -64, -33, -71, -112, -105, 79, 92, -67, -87, 89, 44, 120, 31, 23, 124, 114, 118, -29, 84, 17, -111, -12, -114, 86, 70, 63, 108, 45, -87, -91};
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
    msg.setTimeStamp(0.859708020129);
    msg.setSource(18516U);
    msg.setSourceEntity(150U);
    msg.setDestination(62064U);
    msg.setDestinationEntity(16U);
    msg.text.assign("JKHYXALAUNAXLKGQOIPGRXFKPOPSHJJWTAGZNIVAXPXVFAVOCHWCWQIXOVEYRQKZZVDBQULXMOPHKTBROEEEATZGLGWYVCIHMFNVYRCTOUNIVWSWBUBJDYT");
    msg.type = 209U;

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
    msg.setTimeStamp(0.520555040406);
    msg.setSource(52492U);
    msg.setSourceEntity(56U);
    msg.setDestination(31262U);
    msg.setDestinationEntity(168U);
    msg.text.assign("QQUPYAWWSEVTRZJJCNFIOJPLAAHUZXZNUWBCSRKOSRBWAFCFUKXCRXTIAOXDPTELENOGMZLKVFDPZXBVHWXHYYEQYNOMEZHEGJUNBRBPBMFHIGMZJWLFVMLMEYRDKUQVMCZBVNRDIVXIYGXKAMLIAVLPDWDAHSTOCVNDGQGEPIFQVXYGBFIOOPSICTZRTEYJWXMLRQGKFTZUCHUPLIJQETAYGDQYRCKGSSSAOTNNKWK");
    msg.type = 26U;

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
    msg.setTimeStamp(0.354728453115);
    msg.setSource(49198U);
    msg.setSourceEntity(100U);
    msg.setDestination(18311U);
    msg.setDestinationEntity(65U);
    msg.text.assign("AOIIQDMCGSQQFHDLYARCSLKZGXXTEXJOSTGHYZNDSPUXZPLQPVAECRBVJXDYVJBSFEAWAWIAZBEZUWFKLKPBNLJBKWPKIBNNMTWACKLLNURDIQDRIQCGPNOGWNCWOVSRRJAKOYMYCHKGEWWTRCOMHAUVZTDDEXPTHASTJFBMMIJSBUMEEIVCMQRIFYOLGOIYFWVTJQUXQLPTFYSPHHHVSOTVUEMDCDPJYBOZGKXQN");
    msg.type = 105U;

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
    msg.setTimeStamp(0.806178294779);
    msg.setSource(10682U);
    msg.setSourceEntity(31U);
    msg.setDestination(48172U);
    msg.setDestinationEntity(71U);
    msg.parameter = 57U;
    msg.numsamples = 64U;
    msg.lat = 0.0266396562639;
    msg.lon = 0.0943227700886;

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
    msg.setTimeStamp(0.939571618661);
    msg.setSource(11834U);
    msg.setSourceEntity(144U);
    msg.setDestination(23511U);
    msg.setDestinationEntity(143U);
    msg.parameter = 46U;
    msg.numsamples = 205U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 43908U;
    tmp_msg_0.avg = 0.831563613696;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.315890555173;
    msg.lon = 0.225597075725;

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
    msg.setTimeStamp(0.604509383392);
    msg.setSource(57033U);
    msg.setSourceEntity(21U);
    msg.setDestination(20440U);
    msg.setDestinationEntity(194U);
    msg.parameter = 215U;
    msg.numsamples = 209U;
    msg.lat = 0.607661226564;
    msg.lon = 0.0204423879556;

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
    msg.setTimeStamp(0.336957140528);
    msg.setSource(64047U);
    msg.setSourceEntity(173U);
    msg.setDestination(40715U);
    msg.setDestinationEntity(216U);
    msg.depth = 31008U;
    msg.avg = 0.0769752371616;

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
    msg.setTimeStamp(0.810091844732);
    msg.setSource(28805U);
    msg.setSourceEntity(123U);
    msg.setDestination(18846U);
    msg.setDestinationEntity(248U);
    msg.depth = 3753U;
    msg.avg = 0.289749600594;

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
    msg.setTimeStamp(0.0886202457859);
    msg.setSource(44886U);
    msg.setSourceEntity(249U);
    msg.setDestination(51176U);
    msg.setDestinationEntity(33U);
    msg.depth = 60281U;
    msg.avg = 0.433134696448;

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
    msg.setTimeStamp(0.054003720431);
    msg.setSource(4956U);
    msg.setSourceEntity(215U);
    msg.setDestination(10334U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.50780653113);
    msg.setSource(62751U);
    msg.setSourceEntity(78U);
    msg.setDestination(4811U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.947537849808);
    msg.setSource(28739U);
    msg.setSourceEntity(99U);
    msg.setDestination(50449U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.76635483124);
    msg.setSource(61422U);
    msg.setSourceEntity(242U);
    msg.setDestination(39348U);
    msg.setDestinationEntity(247U);
    msg.sys_name.assign("GPLPKYHVILLZHZIOCVWUGRRXVWLX");
    msg.sys_type = 125U;
    msg.owner = 49247U;
    msg.lat = 0.641792169938;
    msg.lon = 0.0972285159936;
    msg.height = 0.652290374863;
    msg.services.assign("OGFOXGUYLOHPLCJXHXYXCUSUSCMEIPTVFXZWKHDIHSJ");

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
    msg.setTimeStamp(0.689191336389);
    msg.setSource(45673U);
    msg.setSourceEntity(241U);
    msg.setDestination(59068U);
    msg.setDestinationEntity(9U);
    msg.sys_name.assign("YEWERXZNRZGAIVHDDWKMTYMNQAJDAVMGLOYRQRBIUPTZUXS");
    msg.sys_type = 51U;
    msg.owner = 693U;
    msg.lat = 0.351956047099;
    msg.lon = 0.480806380242;
    msg.height = 0.462879010402;
    msg.services.assign("NPSWRTFKACNTTXTUHOXKGUTJBHLCRJGHHSDDDEMXJEJRJZYCAZYDSRQSLHGLGXQPRIEFNELXGLMIAKWKAJWUVNXDHJZMHCKZOKMIWHTBQFMBCLPFSCZY");

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
    msg.setTimeStamp(0.703808403735);
    msg.setSource(31520U);
    msg.setSourceEntity(219U);
    msg.setDestination(64314U);
    msg.setDestinationEntity(183U);
    msg.sys_name.assign("JBBWHUVKHMTFRBBSPOCXMISMELPAUEDXKWPGDYPPZWZCDFFTKHUWOHMOTRFMJICLYSYUNBVZZXIVXQLFZEJTKLNSXQFNZATKLJRISKWGJUNDNVDOSOGFGHEEJIOTLQDOIOKQXWWBHYKIAMZDMKPHTAEXIVCRVUAMUEGXSTZNQUFGDJCD");
    msg.sys_type = 17U;
    msg.owner = 53163U;
    msg.lat = 0.169897678198;
    msg.lon = 0.0585611022577;
    msg.height = 0.606575208894;
    msg.services.assign("JCHYSHPAUVZZSUKBNQYMRCDYMDCNXNXJWWIYUROCFCCBWKHIPOJHDQTFUJRGVEBYLNWRSGUUQIZXLHOJCTOQSKEIOEGLPEBQGSEIDRLZAPVVKOETPPHUYMPBMNSLBSXFSKLASBKNXQYF");

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
    msg.setTimeStamp(0.486852080227);
    msg.setSource(49131U);
    msg.setSourceEntity(150U);
    msg.setDestination(24364U);
    msg.setDestinationEntity(98U);
    msg.service.assign("JXBKRPTQLGWMSSHGDTXLZVVUCEJSJSHUSYJWQUGFZMPKIQPLVFSENVFUDALEFILMJNRAYNWHNIVMTMFNWMQWBSQKBXZYWEDZRROOXJTOYBLOCDWKGECFQDJTGATQICBRNFCQMHHIOQXMYCDPPOIVGJGTKTKAIFWJDBHANRPPMYBAAKTBLUPNVIOYHGMLDYAVKABOUVSZQFDXIXGERZKTEJCEFLDURZSXRONLUWGZYP");
    msg.service_type = 193U;

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
    msg.setTimeStamp(0.448470232522);
    msg.setSource(20795U);
    msg.setSourceEntity(191U);
    msg.setDestination(16407U);
    msg.setDestinationEntity(25U);
    msg.service.assign("PIVGLYBNFKMLAPMBJGJURUQJEHGDLOKITORIGQTNQNBCEKEHPVDMDZOLFMODPEFSIYGVO");
    msg.service_type = 106U;

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
    msg.setTimeStamp(0.0843449844165);
    msg.setSource(20648U);
    msg.setSourceEntity(77U);
    msg.setDestination(62691U);
    msg.setDestinationEntity(187U);
    msg.service.assign("JZNKKOXAQEVQHYKXFSVGVSGNIQFNCQHBBYIGPVHRHZQECAXSWUUJWEJXVIENGTGDTCJLCRDWXIRLBFRIACY");
    msg.service_type = 225U;

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
    msg.setTimeStamp(0.258233139707);
    msg.setSource(43952U);
    msg.setSourceEntity(99U);
    msg.setDestination(37130U);
    msg.setDestinationEntity(188U);
    msg.value = 0.928990164296;

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
    msg.setTimeStamp(0.610634708193);
    msg.setSource(55502U);
    msg.setSourceEntity(117U);
    msg.setDestination(46021U);
    msg.setDestinationEntity(73U);
    msg.value = 0.596063634108;

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
    msg.setTimeStamp(0.0313171795024);
    msg.setSource(26306U);
    msg.setSourceEntity(29U);
    msg.setDestination(14106U);
    msg.setDestinationEntity(28U);
    msg.value = 0.63569090359;

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
    msg.setTimeStamp(0.701828938671);
    msg.setSource(62487U);
    msg.setSourceEntity(134U);
    msg.setDestination(37167U);
    msg.setDestinationEntity(130U);
    msg.value = 0.851645339559;

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
    msg.setTimeStamp(0.968854232196);
    msg.setSource(14795U);
    msg.setSourceEntity(35U);
    msg.setDestination(48196U);
    msg.setDestinationEntity(215U);
    msg.value = 0.419717216556;

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
    msg.setTimeStamp(0.187449653157);
    msg.setSource(41220U);
    msg.setSourceEntity(64U);
    msg.setDestination(14843U);
    msg.setDestinationEntity(68U);
    msg.value = 0.757389634167;

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
    msg.setTimeStamp(0.752898201939);
    msg.setSource(58693U);
    msg.setSourceEntity(188U);
    msg.setDestination(46350U);
    msg.setDestinationEntity(25U);
    msg.value = 0.28210915688;

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
    msg.setTimeStamp(0.184556735964);
    msg.setSource(19646U);
    msg.setSourceEntity(114U);
    msg.setDestination(65387U);
    msg.setDestinationEntity(130U);
    msg.value = 0.986869878891;

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
    msg.setTimeStamp(0.278965468814);
    msg.setSource(34172U);
    msg.setSourceEntity(172U);
    msg.setDestination(54764U);
    msg.setDestinationEntity(108U);
    msg.value = 0.384577793972;

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
    msg.setTimeStamp(0.0212835836675);
    msg.setSource(57971U);
    msg.setSourceEntity(24U);
    msg.setDestination(65179U);
    msg.setDestinationEntity(104U);
    msg.number.assign("OKOUMIQAMECXPARBWESSGNKPRQJRFCYGOWDWLPJDIMRAABVHXFHEQYFRBZNKEEYVXDALWWSJHYSZYOMGONBIRPYUGXOWKFOXFEIDTUTBCCONKVVDZQBCZYDEZQBTTYTUCIKXECRVTSDOXPGSKUNHLTMUAFUWLHHDLTWFFBIPUMLKGGLIKJJIALQAHZDGHHSMKHNZUDEJNPVXJGVWRNBGORJLBQEPVYUNSIXYZNCX");
    msg.timeout = 62515U;
    msg.contents.assign("XFYYYZTVRIGTENAYVXPUIKNHIRWQUJYKLAAUSNSVBLIMDPZOJDJGUHJXOXBKLTZFBMENBWBXOMOTHGVYEAFSTBMGQQAHMZPFXPJKUXADQWFDFQSUGVAIGSJESGPCORRWENINMVCZOLACHWWQCRZDDDBQKZURWCVBLNWPUMSCYEXJESCNZHEEMVUJILKSDOYXFKOHVTIDDWQHQKGPBLRLMCJFNLY");

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
    msg.setTimeStamp(0.801362542477);
    msg.setSource(47647U);
    msg.setSourceEntity(156U);
    msg.setDestination(44419U);
    msg.setDestinationEntity(50U);
    msg.number.assign("JEIVNUDMWOKAKUVUIXOGGYGMPYVHOQPWQSVNLIPUYJJRNZLBEBPEGZTHFDVHFGVGAQPMD");
    msg.timeout = 27118U;
    msg.contents.assign("RLPLLWILWZGDTUOAM");

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
    msg.setTimeStamp(0.436455855286);
    msg.setSource(23248U);
    msg.setSourceEntity(155U);
    msg.setDestination(1889U);
    msg.setDestinationEntity(161U);
    msg.number.assign("WMIZUQEBMVHKGZICEYLONAJNVOHGPYHIAPGBNOTVXKYQIHTQJGXEFJKTBDSUILPZPJMMDROADGMLFPPQGZCOEHNUANCQTVJMEUMDQKQVYKMWWXLUSPKSKOJKWUEFBSRTVNFBEINRLDRXZHAACFVWUCKSRLB");
    msg.timeout = 52943U;
    msg.contents.assign("ZOJQIBQGUHYCJLAJMISOFEDSYKTUFSOXYHDNRLPEDJNGD");

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
    msg.setTimeStamp(0.771527772981);
    msg.setSource(27404U);
    msg.setSourceEntity(160U);
    msg.setDestination(13572U);
    msg.setDestinationEntity(235U);
    msg.seq = 1501396981U;
    msg.destination.assign("IMZIJWAGDPFYDYRYSEJLLETWSGINMFURJMQATTGFYXQSPUXOTKSHCMHUJZWJUATABYUMOUSKZNZMDOIOGHILKPBPBVUUECPNKHVSRETBCQKDQEOAXVZVLLSEYXFKCORVJWSFJLZXMNZGCFOGFDOXRHBXTGQXCXCDBAUBIWDFHIRTQICEVPKKQYAWNEQRPEZNNKRGAPQNIGPBTWEUXFHGFYHPTDROQNRIALWHYJKSVNVL");
    msg.timeout = 55297U;
    const char tmp_msg_0[] = {-101, 25, 0, -114, -51, -11, -21, -59, -61, 32, 86, 3, 53, -34, -3, -114, -37, 24, -94, 4, 67, 26, -31, 96, 28, -20, 35, -112, 99, -53, -2, -123, 63, -61, 74, -109, -30, 58, 114, 126, -1, -79, 48, 0, -54, 122, -38, 25, 61, 52, 40, -26, 30, -30, 46, -31, -1, -80, -1, 3, -41, -91, -65, 25, -74, -55, -41, 20, -112, 49, -50, 63, 5, 57, -75, -125, 24, -21, 16, 73, -90, -97, 58, -64, -77, -10, -126, 45, 10, 97, 64, 81, 36, -74, 103, -122, -21, -96, 29, -29, 86, -18, -88, -68, 66, 73, -26, -83, -87, -119, -98, 92, -116, -89, -78, 18, -74, -80, 1, 77, -43, 87, 117, 1, 48, -43, -28, 83, 44, 34, -18, 29, -5, 63, -86, 40, 30, 5, -100, -64, 17, -62, -77, -113, -36, -80, 84, 14, -66, -54, 15, -65, -56, 23, 113, 88, -44, -80, -30, 8, -23, -105, 58, -5, 113, 118, 118, 89, 8, 13, 122, 67, -63, -21, 12, -5, -79, -30, 44, -88, 74, 21, 77, 33, -41, -127, 16, -114, 65, -81, 55, 105, -114, 76, -93, -28, -41, 53, 30, -33, 28, -115, 49, -98, -40, -41, -61, -28, -52, -101, -80, 81, -107, 24, -82, 58, 77, -56};
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
    msg.setTimeStamp(0.736428613833);
    msg.setSource(63224U);
    msg.setSourceEntity(223U);
    msg.setDestination(48845U);
    msg.setDestinationEntity(83U);
    msg.seq = 1579377708U;
    msg.destination.assign("PZYXQZWCHCXYXBVHYLAHPUBGPGTLRGUUBQKSFICLMAMOITBIMOUADPDNIGX");
    msg.timeout = 47930U;
    const char tmp_msg_0[] = {108, -102, -70, -58, -27, 55, -31, 13, -14, 50, -48, -86, 55, -12, -11, -17, 68, -119, -99, 102, -49, 124, 73, 58, -55, -96, 105, -7, -49, -66, 25, 2, -73, 1, 14, 8, 80, 59, -106, 35, 120, -51, -73, 92, -13, -55, 92, 0, 36, 76, 79, 85, 106, 52, 119, -112, 13, -62, -33, 9, 12, -33, -52, -104, -111, 22, -120, 66, -54, 42, -29, 51, -9, 67, 85, 83, -44, 120, -35, 87, 71, 118, -107, -44, -40, -56, 110, 54, 80, 107, 28, 94, -33, 74};
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
    msg.setTimeStamp(0.960153592074);
    msg.setSource(8076U);
    msg.setSourceEntity(124U);
    msg.setDestination(60036U);
    msg.setDestinationEntity(134U);
    msg.seq = 1815786038U;
    msg.destination.assign("FUVEVPVQYNGRWXNEBTTKXALBVEVGOUNMNZAXFPGTQBTPOZWPRZPEULKYVKNMPKJPBBZWKXFAJZPLHCFMUZBMQGHURHJQLJQGCVUVFSIYOLHGODWVMNIELCFGFXODXKJEQDIAGNKCEKSZLBRRBTPACLYRRCFHULOKZCHHQWYHDGDWSXHWOYUOISLNNBDYNGISDRVTSOAYMQIFIYDMYUJKAXXWJXJTACHJCFDRIEITJWMDIWTBT");
    msg.timeout = 60518U;
    const char tmp_msg_0[] = {4, 58, 12, -63, 106, 41, 35, -108, -117, 107, -4, 32, 102, -82, -42, 56, -21, -30, 110, -108, 121, -30, 55};
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
    msg.setTimeStamp(0.924384868763);
    msg.setSource(62027U);
    msg.setSourceEntity(197U);
    msg.setDestination(61274U);
    msg.setDestinationEntity(5U);
    msg.source.assign("YNBZGLQSRPFGQYRQISBDTSXADIUTTTBCROODMBLHEMIFVVMRSTWFIFXFJRSVHCHQZXCYPUYMZNYNTOGZQUNQYOGHPUXIUKVIUHPPZJLSVLPNAXIJOMCCUOWBKFGJUAIPTNDWNASQHAGTEKJUMCDEBFTZLEZJDJALEVSRLFKVDALSWJXPWEQJMSHHIHWOYNJXZLMYBKGVZRMNVNIGWWDRHBCKTPYYR");
    const char tmp_msg_0[] = {32, -36, 47, -43, -7, 80, -123, 120, -77, 70, 10, 25, -79, -77, -18, 40, -126, 126, 12, -23, 63, -26, 85, 90, -92, -93, 114, 125, 68, -62, 27, -70, 115, 1, -69, 123, -127, -98, -103, 73, 19, -16, 45, 119, -69, 73, 97, -121, -92, 72, 60, -25, 46, -14, -16, -106, 18, 5, 47, 5, 98, -63, 117, 103, -43, -2, -31, 103, 18, -64, 11, 93, 8, -90, -43, -7, 114, -98, 95, 13, -1, 93, 42, 79, -85, 122, 46, 81, 42, -56, -93, -77, 8, 30, 121, 79, -125, 10, -17, -81, 117, -66, -26, 122, -111, -100, -14, 35, -113, 88, -4, -35, 86, -46, 86, -44, 90, -29, 64, 7, -128, -70, 88, 104, 31, -16, 77, 79, 98, -80, 105, -67, 25, 71, -33, 121, -47, 30, -108, 25, 125, 116, -28, -121, 78, -11, 118, -41, 122, 26, 95, -116, -109, -72, 31, -73, -47, -7, 111, -108, 99, 75, -15, -125, 36, -13, 19, -35, 61, 94, -50, -24, 63, -13, 17, 4, 121, 103, -50, 104, 2, -80, -59, 37, -5, -63, -55, 25, 80, -70, -55, -80, -127, 116, -112, -114, -103, 120, -92, -67, 124, 22, 25, -78, 109, 9, -125, -105, -17, -120, -4};
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
    msg.setTimeStamp(0.0495957426896);
    msg.setSource(16058U);
    msg.setSourceEntity(55U);
    msg.setDestination(62210U);
    msg.setDestinationEntity(108U);
    msg.source.assign("LGDHCUKAZQSHRWJRDKYDYHHZUORPBGVXBPYTSJCOZTMBXHLFKFOXDMMWVYEZWVERMNKALVMBEVCE");
    const char tmp_msg_0[] = {-29, 49, 126, -114, 80, 58, -46, -24, 106, -42, 53, -27, 36, 69, -110, 94, -49, 94, 28, -96, 19, -92, -69, -84, -56, 86, 44, 24, -62, -106, 26, -109, -79, -38, -72, -87, 23, 85, -12, -107, 73, -6, 88, 24, -89, -77, 27, 53, 121, 66, 73, 97, 62, -53, 51, 40, -22, -127, -98, 70, -38, 54, -20, -33, 22, 79, -78, -61, -114, 41, -85, 41, 81, 57, 107, -98, 72, -91, 74, -19, 123, 119, -18, -48, 104, -75, -15, -64, 123, 117, 111, 54};
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
    msg.setTimeStamp(0.57526856201);
    msg.setSource(15970U);
    msg.setSourceEntity(157U);
    msg.setDestination(55717U);
    msg.setDestinationEntity(72U);
    msg.source.assign("PHVFGRSZMPANMNTTFEAVWHWXLQFTDTXIUWFJJEAXQEOORYMYDABBSKDSQKSAXMZQNMCJKOTPRQEHWCKGOWRAENCNDFLBSEZSOOMVRHRGUKIUDCWMUZIKPOTTBBNCEHEGWULNIFTBHNZEVYFIAHDIUBFPZHRJLBXVVVZZPGWJHUUIQXGLDGYEJYXPJCYXKALOADFGAYCMUQYLCVXCIWKNUPVLCIRYZOJRHOQMJSND");
    const char tmp_msg_0[] = {91, 67, 102, -121, 79, -2, -91, -80, -51, 78, -96, -100, -33, 111, 54, 93, 82, 74, -49, 34, 30, -122, 116, -67, 55, 77, -70, 107, 25, -103, -113, 23, 38, 84, -73, -125, -47, -20, 119, -116, 92, 25, 103, 80, 6, -124, 103, -38, -128, 93, -6, 125, -54, 61, 99, -20, 43, -112, 35, 121, -64, -20, 91, 91, 121, -34, 99, -74, 123, -60, -88, -85, -65, -38, -39, 9, -62, -20, -113, -55, -43, 66, -73, -117, 107, 1, -119, -33, -72, 39, -23, 81, -80, 33, 86, -64, -61, 20, -66, 77, 67, 118, 88, -108, -98, -55, -73, 5, -54, 35, 86, -122, -60, 55, 64, -118, 6, 44, 103, -43, -115, 20, -49, 101, 76, -5, -95, -68, -84, -104, 93, 47, 119, -127, -21, -84, -104, 5, 125, -74, 80, -69, -61, 113, 59, 104, -117, -86, 115, 111, 100, -41, -49, 64, -33, -124, -102, -97, -115, 84, -98, 118, 109, -4, -2, -14, -49, 85, -3, -75, 116, 43, 88, 107, 57, -101, 114, -100, -65, -21, 104, -43, 122, 120, -28, -92, -96, 24, -122, 119, 126, 101, -93, 22, 79, 34, 62, -68, 96, -96, -11, 126, -126, -87, -72, -6, 32, 118, 51, -35, -68, 25, 5, 16, 13, 18, -92, -113, -120, 115, -31, 96, -118, -29, 107, -76, -20, 98, 86, -95, 20, -125, -118, -58, 115, -125, -16, 44};
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
    msg.setTimeStamp(0.741211410244);
    msg.setSource(57560U);
    msg.setSourceEntity(23U);
    msg.setDestination(56447U);
    msg.setDestinationEntity(22U);
    msg.seq = 1981953498U;
    msg.state = 173U;
    msg.error.assign("VNMGRKSRBUYLUNPJACVFPKIZLWVMLKOQYUJQCBTKXOJOTHIHXVDXXCKHFDQHIENRSYDMOJSLELCOSUYUVGCMABLQMJJIGKHTPEFSHNYNWJRSNBXVKOMKYHOAKVJSHCKDHGSZXMQGIWBIQYAUZWEPMVRONXZWFPEBTAFTAWFUPPGCGNAEWIQIRQPTFLZYLDAGZVCNESXQPLZWFUWRZAAUIQXDELTZDDFTHJXYRBTGORPRNOWVDTBDICSMEJYBBM");

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
    msg.setTimeStamp(0.769533464503);
    msg.setSource(14371U);
    msg.setSourceEntity(194U);
    msg.setDestination(41823U);
    msg.setDestinationEntity(101U);
    msg.seq = 783458661U;
    msg.state = 221U;
    msg.error.assign("ESDLJIGJXTHGJWMQESBOVRIRNWCUDCOCNRBUVUFTNAUGOCPKOTGVTCTYCUASWJDVJOWOLBISDIWMANYBRPSNQQSLB");

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
    msg.setTimeStamp(0.0277945849634);
    msg.setSource(10771U);
    msg.setSourceEntity(179U);
    msg.setDestination(26164U);
    msg.setDestinationEntity(203U);
    msg.seq = 3364889309U;
    msg.state = 48U;
    msg.error.assign("HSZFHTMWBKSZNUNENQLGJFPKCAYKCLOCNHZVVUENXKDGWQEEMXPBXVHLRBBFPASHGCTVRHBJTZQDQVYRDEFBUYRLTMFSCWJSXMERWKFDRVUVGIPGIJTTBMQFAVTHDRSCQZUETFCAOLIYTOLRPJOGDZEOAPAOWWASAJKBVMSNUIHMTPIJMJGIXPXWHQLLOQYCVMZDIGZYUQJHOXDKSWRNAZRKAIDZYENGIXDCGKFPYCBWPYUNEQXOWYLSLXJI");

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
    msg.setTimeStamp(0.353753898176);
    msg.setSource(60520U);
    msg.setSourceEntity(98U);
    msg.setDestination(48749U);
    msg.setDestinationEntity(92U);
    msg.origin.assign("UXWHPZOYVRPIMCHRQQBXKXKSDAJMPSBJWSCMJUBVZXHZBISUWHRNXOCONSOXMEAUTRWNTYVAGKEYIYVDIILLTGUOCNFOHGJMIDFDMKQCQKHFOJGMNVHCAWLEZURZDRBGVMFNBXSXEAFYWOPEIZNTBADHTIELNGSMAHLSCIWWLPXJUVJDJQAKEDWACLYYCEBXKLBSZDZY");
    msg.text.assign("ETSKWNCPUDOGZJVLLTPXTXJBMWRYVGNVHZVXOEIEGOQLBKLDTJLJGKDZGXPRJYFNHFPUMJFUXIMB");

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
    msg.setTimeStamp(0.260536867483);
    msg.setSource(6779U);
    msg.setSourceEntity(222U);
    msg.setDestination(16944U);
    msg.setDestinationEntity(192U);
    msg.origin.assign("BMJMSIKJWKHFMDCYTYDSLTQNRZN");
    msg.text.assign("GBUBWVPIJLZATBVCQFAAOUZLCXNRNGRMGOFTNCWZXHCFIGWEELLDCAZXSLYYKTIKMKSXGLFVXJQZLBWOBEYPCJIVFMVGKRFJWYASUYAOQFGEZAMGSIPHOTURTN");

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
    msg.setTimeStamp(0.690062349861);
    msg.setSource(13901U);
    msg.setSourceEntity(20U);
    msg.setDestination(4735U);
    msg.setDestinationEntity(70U);
    msg.origin.assign("RLLOWEBEERIVGWHHIKVDJTXAAFEZCXBGHWGGXDNUXRACAVOEFYLORTWSQTQUBREUJPLCJIRDYQMXCDOOIKSKSKDYHFTCJVZARPIDYPBMIPZBSMDGSAIHORLJHFTVAMTNBDJPINWQVAXWQLYDPZLTUNLXXFZNVCOXAPPJHBJEFNOCWBIZTW");
    msg.text.assign("BZPKVCWEXCJAHHVEHBCEWTRNPINNOBKBJVPGQASQHTMMDZY");

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
    msg.setTimeStamp(0.327048402024);
    msg.setSource(63888U);
    msg.setSourceEntity(156U);
    msg.setDestination(8123U);
    msg.setDestinationEntity(8U);
    msg.origin.assign("MVXZBDOFAAUIYBGUWMNYOJFBIQKQMEVADWEJBLPVTHYRWJOMZSIMHGGHDTZOAXDTSAJYYHFQCBHMRMUCGOSTZLPPIHJPLAG");
    msg.htime = 0.976970273596;
    msg.lat = 0.753944763897;
    msg.lon = 0.138485196505;
    const char tmp_msg_0[] = {38, 85, -62, -23, 64, -85, -128, 63, 113, 35, -59, 105, 9, -78, -94, -125, -8, 104, 62, -73, 104, 59, -125, -100, -18, -108, 25, -85, 13, -38, -88, -54, -19, -49, 32, -15, 16, -85, 91, 123, -125, -32, 97, -15, 95, 39, -72, 92, 3, -1, -112, 104, -7, 14, 125, -56, 106, 38, -68, 10, 87, -62, 13, -47, -64, -7, 90, 92, 63, -104, 0, 45, -114, 22, 17, 32, 51, -68, 9, 97, 86, -60, -100, 108, 90, 121, 79, 15, 10, 0};
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
    msg.setTimeStamp(0.719861790629);
    msg.setSource(10762U);
    msg.setSourceEntity(85U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(107U);
    msg.origin.assign("YMFSMXEEVWQFGNVIOYTUBNVPYAHMDSEHTONAFHMRJWGYPKOMNZEOBSNYVBYJQX");
    msg.htime = 0.395791051697;
    msg.lat = 0.887216707473;
    msg.lon = 0.783310926549;
    const char tmp_msg_0[] = {-36, 5, 4, 76, 25, -67, 91, 51, -118, -78, -62, -109, 121, -53, 24, -72, -105, 22, 111, -69, -6, -122, -23, 17, 4, -114, -117, -45, 110, 38, 72, -87, 42, -42, -43, -57, -57, -45, 24, -46, -82, 102, 75, -86, -114, 95, 100, 32, 86, -89, -29, 63, -44, -107, -82, 15, -12, -18, 108, -90, -88, -100, -120, -66, -63, -83, -35, -8, 61, 89, 20, 77, -117, -120, 7, -42, -86, 22, -75, 41, -82, -87, 126, 28, -6, -54, 76, 110, 63, 46, -64, 93, 73, -28, -91, 75, 7, -56, 44, 74, 112, -20, -102, 24, -52, 122, 7, -7, -101, 6, -47, -105, 60, -25, -77, 19, -58};
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
    msg.setTimeStamp(0.279263938736);
    msg.setSource(27811U);
    msg.setSourceEntity(43U);
    msg.setDestination(44655U);
    msg.setDestinationEntity(72U);
    msg.origin.assign("PMTXKZBKCUQXVCCWGUCKFIDKSYRCXKLTEDCLBSRXCWLWFLONJGTESBNZBZESPOMDJVOBSKOXHKIIXQYTVLQTLBFUHIVAEYPXHTMAKRBMAZNQLDRYGQRJRGJVVQWVFYSDOPLEIYTZCIZXQMDGWVISEDLBOUSFHHFGTRBEUFYUAEJWOGRPGZJWAAEDVCJZTIFNHGYNRNAO");
    msg.htime = 0.153082737189;
    msg.lat = 0.804432037074;
    msg.lon = 0.834907477551;
    const char tmp_msg_0[] = {-102, 29, -19, -20, -1, 62, -128, -119, -97, 86, -92, 20, -63, 89, -31, -119, 53, 47, 76, -16, -5, -73, 24, -47, 119, -115, 25, -100, 19, -5, 82, 99, 102, 16, -125, -108, -60, -17, -78, 86, -49, -34, 4, -113, -107, -59, -17, -60, -78, 33, -40, 25, -75, -79, -52, 68, -122, -49, 31, 64, -47, 15, -99, -39, -121, -67, -87, -46, -55, 48, -12, 47, -91, 74, 23, 13, -51, 5, -94, 68, -8, 55, 75, -32, 124, 99, -78, -40, -21, 37, -104, -62, -113, -124, 92, 117, 15, 60, -91, 93, 2, -1, -21, -4, 35, -19, -44, -32, -32, 77, 29, 92, -33, -93, -110, 61, 75, 4, 33, 74, 27, 29, 55, 118, 81, -61, 17, -77, -34, -73, 108, 20, 16, -45, 97};
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
    msg.setTimeStamp(0.104357739398);
    msg.setSource(11196U);
    msg.setSourceEntity(71U);
    msg.setDestination(51603U);
    msg.setDestinationEntity(125U);
    msg.req_id = 30000U;
    msg.ttl = 21967U;
    msg.destination.assign("DUGEOHCWZVFOKVMGXEYEMILPMNBVRQPEOXJHXHCNAALBENIGCBNWZQGLDJPAJIFV");
    const char tmp_msg_0[] = {-75, 70, -75, -105, 8, 70, 101, 24, -126, 85, -13, 119, 6, -24, 121, 7, 81, -84, -75, -2, -37, 124, -12, 100, -14, 93, -73, -31, -8, -4, 83, -119, 34, -35, 18, -77, 102, 69, 94, -30, 25, -41, -56, -94, -116, -107, 68, -69, 109, -98, -116, 115, 124, 114, 80, -1, -53, 75, -111, -24, 123, 65, 102, -121, 60, 5, -47, 50, 112, 68, 35, -95, -29, 97, -23, 98, -123, 23, -30, 85, 11, 58, -112, 103, 103, 75, 97, 62, 11, -120, -20, -28, 41, 121, -125, -118, 123, 83, -12, -110, 42, -104, 123, 98, -13, -40, -91, -62, -37, -63, 19, -60, 16, 113, 64, -53, 89, 36, 23, 6, 55, -103, 106, -58, -115, -46, -76, 5, -24, 93, -83, 35, 65, -50, 3, 29, -113, -119, 96, -31, -76, 96, -121, 18, 50, 51, 123, -16, 106, 41};
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
    msg.setTimeStamp(0.963673020382);
    msg.setSource(12543U);
    msg.setSourceEntity(23U);
    msg.setDestination(1420U);
    msg.setDestinationEntity(77U);
    msg.req_id = 23046U;
    msg.ttl = 46568U;
    msg.destination.assign("BUBHBKDFYSWBEKORENSLKEZWALTMOOFTGSPFXJPIJGCYAKKRREBMXQGSCLNHXEMPQTKERZJPXWFZYECUD");
    const char tmp_msg_0[] = {-39, -74, -73, -46, 62, 0, 87, -66, 30, -79, 94, 25, -121, -16, -36, -17, 49, 23, -88, 49, 4, -7, 35, -55, -118, 45, -112, 32, -111, -43, -21, 37, -23, 98, 8, 9, -101, 27, 111, 58, -85, -7, -45, 4, -59, 61, 39, -125, -80, -119, -122, 90, -58, -8, -49, -7, -60, -17, 65, -92, 75, -38, -67, -91, -122, 71, 68, -118, 51, -54, 26, 13, 5, 87, 16, -54, 106, 23, 104, -91, -63, -12, -76, -126, 17, 77, -105, 105, 25, -81, 29, 90, -42, 52, 31, 60, -57, 35, -14, -28, 20, -50, -9, 42, -46, 36, 9, 35, 99, 123, 113, -112, -100, 94, 72, -35, 43, -40, 71, -127, -113, 55, -34, 58, 13, 126, -93, -48, -109, 81, -79, 54, 81, -99, -48, -46, -109, 114, -58, -3, -64, 76, 85, 36, 25, 35, -84, 50, 90, -128, 72, 93, -35, 98, 122, -34, -52};
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
    msg.setTimeStamp(0.107852460297);
    msg.setSource(61580U);
    msg.setSourceEntity(227U);
    msg.setDestination(47316U);
    msg.setDestinationEntity(209U);
    msg.req_id = 7816U;
    msg.ttl = 3991U;
    msg.destination.assign("EXKBVJPXPA");
    const char tmp_msg_0[] = {115, -75, 86, -74, 100, -12, 119, 1, 77, 19, 115, 56, -106, 120, -21, 74, -116, -125, 49, -96, -76, 55, -63, 121, -87, 125, -1, -5, 31, 60, -107, 8, 9, 63, 81, 12, 69, -103, -24, 83, 45, -63, 85, 70, 84, -97, -125, 3, 123, -36, -73, 23, 59, -48, -72, -21, 123, -22, 94, -40, 122, -30, -43, 64, 122, 88, 34, -38, -1, 54, -50, -9, -119, 24, -38, -35, 56, 52, -61, 112, 67, -33, 33, 118, -124, -91, -37, 124, 43, -124, -115, 63, 44, -6, 107, 67, 76, 61, -95, 46, 33, -60, 91, -68, 1, 85, -109, -95, -82, -103, -119, 46, -78, -104, 85, -126, 14, -3, -104};
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
    msg.setTimeStamp(0.50873113921);
    msg.setSource(47028U);
    msg.setSourceEntity(37U);
    msg.setDestination(56356U);
    msg.setDestinationEntity(227U);
    msg.req_id = 1559U;
    msg.status = 221U;
    msg.text.assign("BBQJPAZSHLNDG");

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
    msg.setTimeStamp(0.540357336843);
    msg.setSource(7141U);
    msg.setSourceEntity(206U);
    msg.setDestination(25633U);
    msg.setDestinationEntity(20U);
    msg.req_id = 4877U;
    msg.status = 95U;
    msg.text.assign("TMPQCLXGXRBMUFREIVEWHEIGUSMZBHVXTYGBJGKTMKPUCSIUXIGARQXACIHHJMKEWWCEFFKZAYBPBQVBGLJUBFAXKPRKIWXUJLWKLVYDCAIDQQSOEUZYNPZLEKDCRTSNXLOYLWSDAHZMMGJKFLSSQDBAOGSRSGNOXMCQWYDNTTBMVQZORNUGO");

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
    msg.setTimeStamp(0.157956734685);
    msg.setSource(74U);
    msg.setSourceEntity(64U);
    msg.setDestination(27347U);
    msg.setDestinationEntity(29U);
    msg.req_id = 33075U;
    msg.status = 246U;
    msg.text.assign("JQZERNFQHUEKOWKRMBNJQVQFUIHHYCMBWPIWTAAVWJPGXWCQHUVLOEJNOSBGPRPDOICVAGGHQTFKIHKYUEMHCRTJAVBPSTAVLKYBFEGNCJXTLYVOLVSFGXFRDGZFUMDYWZZLPNPDAMDWYUZXKWZJFEGILAKLKMCZROLXAVBTYLNWWTCSZENSOMXCB");

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
    msg.setTimeStamp(0.875539746844);
    msg.setSource(36257U);
    msg.setSourceEntity(186U);
    msg.setDestination(19409U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("TMWUNCSHRTHEQBXZVRZBAYIXOAYNPGPQMMAMIPBPHIBQIFWEWZSLGLHRRUPLWJQKLQGUEBWXCUHDYUOJPTDFTCTYNFUZRDYMZWAMTSYBQVVGXSIDDLXXFV");
    msg.links = 1078957025U;

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
    msg.setTimeStamp(0.92103710226);
    msg.setSource(53527U);
    msg.setSourceEntity(98U);
    msg.setDestination(19316U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("NCZHCYBCOAQPXWZDXWFNSQBGLLHKUGMACEGGUBYNDAWWHVCNABLILRZPPDKCUHDDQKUMERVIVNUEJOVYYNXOMLLPVMZOGSALXRXVYUKMTITQRFAPWWHTBQRSNIPJFZYBSDFWNWADRFZRSRBOYSOQFHBEZXUDTOTLFKQMCUZYVPXSIOIJEHTTVGGXYKFAPEWKJTCEIBHZSSPSEKJGUIBHI");
    msg.links = 21169381U;

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
    msg.setTimeStamp(0.0433705798376);
    msg.setSource(39328U);
    msg.setSourceEntity(117U);
    msg.setDestination(63705U);
    msg.setDestinationEntity(12U);
    msg.group_name.assign("EQJHWYBNHNLJRTTD");
    msg.links = 1363990013U;

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
    msg.setTimeStamp(0.0496460088679);
    msg.setSource(56310U);
    msg.setSourceEntity(42U);
    msg.setDestination(45555U);
    msg.setDestinationEntity(34U);
    msg.groupname.assign("JJGSWMOWVYHCGNKSLNLKNZDTBALUBUYYYXSEOKTNSGQAEQTIWCVUJHBENKCNQEYPJHJRCWSUOLBQESVIDSZEADIRPUXPFWHYDHNFNFFSQVGZIKECMGBVXQRFWGHONVYMPRUTHPTLWUHOMBJUPXDSJKFROPMEXGKRDRDQAOMIFKZILYIGYXVTMZMRXLKZEGRZLPTDDXWATAGRQO");
    msg.action = 90U;
    msg.grouplist.assign("JTKSRFJRBAIHJNRVAHJUOCFBZXPZLIWLNBVKDXKHZWEHXCRHNPKSOMYZHBCXGVAWBFBGAPTCGXEOBGPAOUFFKQUANUNNICYYSDSYNCITSTLOWQTLTLWHMMGTXWMZKERELSJHOPAMUZNWEZRNDF");

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
    msg.setTimeStamp(0.667388761839);
    msg.setSource(32788U);
    msg.setSourceEntity(103U);
    msg.setDestination(24527U);
    msg.setDestinationEntity(81U);
    msg.groupname.assign("QQQZHWTDOAGKYUPMAAPKHYGSZKURQREIQWWBEKUJYWTZPZRJSAAEGJHHOBBYUTTTNJCNVMEARYEMLWCVXAMXNXMDIRCFGGLYWRMRSEUPPSMQEZBHED");
    msg.action = 39U;
    msg.grouplist.assign("LRTXBFTEOPCGFTXHSEBZYUUVNWVAFVFWUQQAZASFBPW");

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
    msg.setTimeStamp(0.389759050383);
    msg.setSource(28156U);
    msg.setSourceEntity(31U);
    msg.setDestination(39779U);
    msg.setDestinationEntity(235U);
    msg.groupname.assign("JIHRMLQDPQAKHHGYKJLSTILKCBRCURIOUIZSACXGDLEYNTSZWMAOZUXMMHFWUTD");
    msg.action = 166U;
    msg.grouplist.assign("KSYVADBJNGAM");

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
    msg.setTimeStamp(0.869254247966);
    msg.setSource(13274U);
    msg.setSourceEntity(173U);
    msg.setDestination(17269U);
    msg.setDestinationEntity(132U);
    msg.value = 0.577055166984;
    msg.sys_src = 11676U;

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
    msg.setTimeStamp(0.458384904054);
    msg.setSource(53808U);
    msg.setSourceEntity(235U);
    msg.setDestination(56877U);
    msg.setDestinationEntity(248U);
    msg.value = 0.869638759516;
    msg.sys_src = 38532U;

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
    msg.setTimeStamp(0.917072382335);
    msg.setSource(10173U);
    msg.setSourceEntity(155U);
    msg.setDestination(53058U);
    msg.setDestinationEntity(187U);
    msg.value = 0.108329487365;
    msg.sys_src = 24770U;

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
    msg.setTimeStamp(0.131539024019);
    msg.setSource(32703U);
    msg.setSourceEntity(62U);
    msg.setDestination(29984U);
    msg.setDestinationEntity(238U);
    msg.value = 0.0285114130091;
    msg.units = 61U;

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
    msg.setTimeStamp(0.440519227478);
    msg.setSource(52787U);
    msg.setSourceEntity(66U);
    msg.setDestination(5303U);
    msg.setDestinationEntity(47U);
    msg.value = 0.768570029822;
    msg.units = 168U;

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
    msg.setTimeStamp(0.181865856279);
    msg.setSource(59293U);
    msg.setSourceEntity(121U);
    msg.setDestination(54191U);
    msg.setDestinationEntity(119U);
    msg.value = 0.675771698788;
    msg.units = 214U;

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
    msg.setTimeStamp(0.229402807536);
    msg.setSource(25325U);
    msg.setSourceEntity(153U);
    msg.setDestination(14569U);
    msg.setDestinationEntity(244U);
    msg.base_lat = 0.666329195986;
    msg.base_lon = 0.364003760276;
    msg.base_time = 0.353525659349;

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
    msg.setTimeStamp(0.179964718771);
    msg.setSource(25279U);
    msg.setSourceEntity(92U);
    msg.setDestination(52145U);
    msg.setDestinationEntity(131U);
    msg.base_lat = 0.875785914824;
    msg.base_lon = 0.925924792557;
    msg.base_time = 0.881392308882;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 41366U;
    tmp_msg_0.priority = -79;
    tmp_msg_0.x = 13801;
    tmp_msg_0.y = 29353;
    tmp_msg_0.z = 6561;
    tmp_msg_0.t = 9584;
    IMC::Tachograph tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timestamp_last_service = 0.557413204106;
    tmp_tmp_msg_0_0.time_next_service = 0.509441641233;
    tmp_tmp_msg_0_0.time_motor_next_service = 0.696786567109;
    tmp_tmp_msg_0_0.time_idle_ground = 0.111239876484;
    tmp_tmp_msg_0_0.time_idle_air = 0.879465201928;
    tmp_tmp_msg_0_0.time_idle_water = 0.49113468852;
    tmp_tmp_msg_0_0.time_idle_underwater = 0.0499329741855;
    tmp_tmp_msg_0_0.time_idle_unknown = 0.967831511269;
    tmp_tmp_msg_0_0.time_motor_ground = 0.532793524122;
    tmp_tmp_msg_0_0.time_motor_air = 0.32393551243;
    tmp_tmp_msg_0_0.time_motor_water = 0.794106222438;
    tmp_tmp_msg_0_0.time_motor_underwater = 0.867685743422;
    tmp_tmp_msg_0_0.time_motor_unknown = 0.449676047962;
    tmp_tmp_msg_0_0.rpm_min = 19557;
    tmp_tmp_msg_0_0.rpm_max = 363;
    tmp_tmp_msg_0_0.depth_max = 0.339676500652;
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
    msg.setTimeStamp(0.274181981765);
    msg.setSource(26791U);
    msg.setSourceEntity(207U);
    msg.setDestination(29821U);
    msg.setDestinationEntity(226U);
    msg.base_lat = 0.691764868649;
    msg.base_lon = 0.717492396357;
    msg.base_time = 0.504437753728;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 38906U;
    tmp_msg_0.priority = -31;
    tmp_msg_0.x = 15535;
    tmp_msg_0.y = 10347;
    tmp_msg_0.z = -16805;
    tmp_msg_0.t = -9522;
    IMC::RegisterManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.mid = 51765U;
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
    msg.setTimeStamp(0.120202587809);
    msg.setSource(57664U);
    msg.setSourceEntity(159U);
    msg.setDestination(38316U);
    msg.setDestinationEntity(189U);
    msg.base_lat = 0.398646220211;
    msg.base_lon = 0.163831578139;
    msg.base_time = 0.415078560463;
    const char tmp_msg_0[] = {32, -24, -75, 77, 32, -122, -41, 73, 65, -48, -6, 76, 5, 70, -21, -10, -95, 54, -39, -93, -84, -51, 79, -89, -93, 72, -37, -4, 20, -28, -58, 40, -24, -72, 4, -29, -9, -22, -84, 34, -117, -115, -63, 86, -34, 97, 71, 57, -123, 15, -45, 47, 109, 24, -123, -101, 55, 64, -30, 36, -108, -11, 91, -20, -100, -75, 82, -78, 50, -43, 42, 123, 55, 37, 73, -86, -40, 50, -4, -95, 34, 97, 17, 96, 31, -51};
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
    msg.setTimeStamp(0.895778205663);
    msg.setSource(31903U);
    msg.setSourceEntity(153U);
    msg.setDestination(13089U);
    msg.setDestinationEntity(40U);
    msg.base_lat = 0.200257742793;
    msg.base_lon = 0.521959424802;
    msg.base_time = 0.303598048667;
    const char tmp_msg_0[] = {52, 109, 126, 52, -21, -46, -55, 119, 94, -48, -51, 125, -122, 5, -7, -37, -100, -14, -24, -97, -37, -62, -125, -53, 16, -88, -62, 67, 85, -127, 118, 119, 18, 57, -109, 120, -17, 76, 62, -97, 57, -33, 8, 75, -33, -114, 23, 37, 119, -127, 9, -35, 69, 14, 84, 70, 63, 108, 64, 31, 36, 34, 45, -120, 77, 59, 70, -90, 17, -91, 109, -98, 106, -63, 60, -6, -50, -125, -5, 64, 95, 16, 54, 84, 7, -79, -32, -75, 65, -16, -102, 97, 80, -100, -121, 27, -108, 106, -84, 63, -56, 51, -96, -105, 14, -12, -69, -19, 37, -28, 10, 72, 91, 70, -49, 59, -81, -56, -45, 60, 18, -6, 98, -126, -82, 53, 5, 67, 102, 122, 116, -100, -102, -52, -60, 108, -102, 21, -75, 116, 98, 55, 47, 63, -7, 66, -126, 11, 92, 109, -48, -29, -76, -29, 113, 103, -91, -101, -72, -59, -125, -20, 111, 40, 21, 70, 95, 94, -69, -13, -77, -31, 65, 77, 7, -77};
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
    msg.setTimeStamp(0.280472052018);
    msg.setSource(52955U);
    msg.setSourceEntity(77U);
    msg.setDestination(54346U);
    msg.setDestinationEntity(103U);
    msg.base_lat = 0.968227187094;
    msg.base_lon = 0.422966807589;
    msg.base_time = 0.3682629335;
    const char tmp_msg_0[] = {91, -114, 23, 38, -65, 59, -87, -30, 39, -97, -101, 47, -23, -38, 17, 57, 81, -70, 104, 21, -4, -37, 7, 8, -62, 10, 82, -27, 78, -105, -48, -63, 29, 13, 68, 6, 0, 40, 63, -61, 67, -36, -23, -119, 28, 14, 53, -27, 29, -39, 100, 8, -39, -86, 87, -48, -91, -19, -62, -93, 122, -123, 104, 107, 43, -74, -1, 70, 74, 73, 34, 114, 117, -31, 87, -109, 37, -24, 50, 4, -71, 113, 14, 56, 69, 29, 36, -13, -21, -35, 8, 69, 50, -39, 15, -14, 44, -41, -68, 1, -26, 28, 18, 62, 122, -124, -109, -87, -44, -78, -100, -110, -23, -59, -95, 46, -113, -22, -72, -30, -87, 75, -121};
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
    msg.setTimeStamp(0.296519093627);
    msg.setSource(7470U);
    msg.setSourceEntity(212U);
    msg.setDestination(59454U);
    msg.setDestinationEntity(90U);
    msg.sys_id = 4784U;
    msg.priority = 1;
    msg.x = 21080;
    msg.y = 13934;
    msg.z = -10688;
    msg.t = -13358;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.0476000546236;
    tmp_msg_0.time_next_service = 0.904828690127;
    tmp_msg_0.time_motor_next_service = 0.699203684089;
    tmp_msg_0.time_idle_ground = 0.661546930735;
    tmp_msg_0.time_idle_air = 0.0043410293605;
    tmp_msg_0.time_idle_water = 0.882904904275;
    tmp_msg_0.time_idle_underwater = 0.000637460965613;
    tmp_msg_0.time_idle_unknown = 0.325362031104;
    tmp_msg_0.time_motor_ground = 0.714613812373;
    tmp_msg_0.time_motor_air = 0.590183342924;
    tmp_msg_0.time_motor_water = 0.971792284335;
    tmp_msg_0.time_motor_underwater = 0.52362974518;
    tmp_msg_0.time_motor_unknown = 0.959343280778;
    tmp_msg_0.rpm_min = 5106;
    tmp_msg_0.rpm_max = 17143;
    tmp_msg_0.depth_max = 0.814635354963;
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
    msg.setTimeStamp(0.391910090851);
    msg.setSource(26715U);
    msg.setSourceEntity(57U);
    msg.setDestination(15524U);
    msg.setDestinationEntity(36U);
    msg.sys_id = 31968U;
    msg.priority = -23;
    msg.x = 21350;
    msg.y = 23494;
    msg.z = -24976;
    msg.t = -32278;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 251U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("VYRHEYKMBFJHUBQSNNGTOHJNPYPUHNZKTYQFXGCWAPYCFHGKOEZATBKUGFMEMQOXSAVKVWSYEYQIUNWGJOLRLBGTOCEVAMBDCJNZDEVYKJGPAYCUTOQIWXPQZDLBSWPCMXJUUHPQDOCPAJRWNNGTSRHDLREDRRMFWJXSUXNPZXLEIHMLRKGDQIITXNPKLKGZWSACIA");
    tmp_tmp_msg_0_0.description.assign("XHAKJYCAMKIRSOTFGQOQRWSIWCNYNRZXKEQWQDHAZYFYONLTKXNAABEMLFWARSCPIDVRMNBQPSUGUBDCMFZUCBFTBWEFPCMLYOUXPVXYOJPELEINHVTSQURPNMZBKHLLIYJZXAVPCHTHFDOXVPKVJLHPWUXYDOLJQRFUGWNAGZKISBJUUZIQRUYSNZCTJKGBDOIQTGZFKVGRPHVMVEBOXCQ");
    tmp_tmp_msg_0_0.vnamespace.assign("ZZXPHWMHBBJSJAWNPEFEKTEOYGS");
    tmp_tmp_msg_0_0.start_man_id.assign("MXWKDCCTDKMWTRPSWEVEQEOKIRILIVTUJJIRBZGNOPCHPGHWJWKDXEYSJYFGBMVDYOZGZQXVOJRAZQHZSPKVHRBNLSADFAICXKQRVCJETPPNCTWWTLMLHNLPAE");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("MRGWCDMFCVNFYIHEWRODSOTUAXFBWZKADCPTNOSSGWQLAQQRKOHRVE");
    IMC::StationKeepingExtended tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.662239692764;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.69242799401;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.444267647159;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 222U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.radius = 0.433037253748;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.duration = 58097U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.157874296412;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 174U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.popup_period = 12101U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.popup_duration = 21350U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.flags = 50U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("SLBGUPUIISZRVYASKBQPLWMMUIPCUENSANJZXRKPRJNGTCWGWLAIEBUZZVVSWFWZHDKAVEKGFHDLXHKDAHZUNLRTJWIFUJJYG");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::PlanTransition tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.source_man.assign("CVKIOXXEHQHSBDPIQDNKIWN");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.dest_man.assign("UHWHLMHVZFJDWZVHFIWOSDXGWIZYWLPMJMUNSMCINRWDNBVYGMAEARKBOGTLBYPXECIFHUDZZBCFOXLDQIGUXCTVEJMANLB");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.conditions.assign("FECPDHPWSFMFOULVOZAUQDTHCRAZFKHANSTFMDGDCDMHJABXZBICMUDOTZRYYCPUNQGMKJJFKWYJANJSWECETSOQMRXEYQL");
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::ArmingState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 222U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.518921445326);
    msg.setSource(5926U);
    msg.setSourceEntity(137U);
    msg.setDestination(40283U);
    msg.setDestinationEntity(212U);
    msg.sys_id = 24035U;
    msg.priority = -29;
    msg.x = 14434;
    msg.y = 8161;
    msg.z = 7314;
    msg.t = 20144;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.0952959598502;
    tmp_msg_0.x = 0.341297141804;
    tmp_msg_0.y = 0.397155608203;
    tmp_msg_0.z = 0.593053354335;
    tmp_msg_0.timestep = 0.377632729695;
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
    msg.setTimeStamp(0.227511234963);
    msg.setSource(15419U);
    msg.setSourceEntity(167U);
    msg.setDestination(41045U);
    msg.setDestinationEntity(204U);
    msg.req_id = 37278U;
    msg.type = 182U;
    msg.max_size = 7227U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.15001514946;
    tmp_msg_0.base_lon = 0.598259537413;
    tmp_msg_0.base_time = 0.199577497861;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 46717U;
    tmp_tmp_msg_0_0.priority = -19;
    tmp_tmp_msg_0_0.x = 30835;
    tmp_tmp_msg_0_0.y = 14912;
    tmp_tmp_msg_0_0.z = 14542;
    tmp_tmp_msg_0_0.t = -18349;
    IMC::IoEvent tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 24U;
    tmp_tmp_tmp_msg_0_0_0.error.assign("PTDJPAETIPQFINELDZBSIUNLKWXVBMQGODANRJTCSGXWNBYLGIVZXAGJVBSVTXXBLRHVKGSYWIHUOAVOYWOKUJKMEZFFYTZRCORLZVXUJNLLWMIYMWFBEPPEHCUQCADXUUEWQRHGYAPBSOMFIHQMWLGCDHGS");
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
    msg.setTimeStamp(0.0377419353137);
    msg.setSource(9093U);
    msg.setSourceEntity(109U);
    msg.setDestination(7069U);
    msg.setDestinationEntity(126U);
    msg.req_id = 29595U;
    msg.type = 37U;
    msg.max_size = 1364U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.781823810612;
    tmp_msg_0.base_lon = 0.421570893013;
    tmp_msg_0.base_time = 0.889806885655;
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
    msg.setTimeStamp(0.928480857898);
    msg.setSource(57907U);
    msg.setSourceEntity(123U);
    msg.setDestination(21404U);
    msg.setDestinationEntity(121U);
    msg.req_id = 5571U;
    msg.type = 213U;
    msg.max_size = 22886U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.752008550065;
    tmp_msg_0.base_lon = 0.613487984346;
    tmp_msg_0.base_time = 0.397171659549;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 28515U;
    tmp_tmp_msg_0_0.priority = 66;
    tmp_tmp_msg_0_0.x = 15940;
    tmp_tmp_msg_0_0.y = 12447;
    tmp_tmp_msg_0_0.z = 5334;
    tmp_tmp_msg_0_0.t = -20673;
    IMC::HistoricSonarData tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.altitude = 0.831762708829;
    tmp_tmp_tmp_msg_0_0_0.width = 0.50110981657;
    tmp_tmp_tmp_msg_0_0_0.length = 0.897076711591;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.187720771364;
    tmp_tmp_tmp_msg_0_0_0.pxl = 7299;
    tmp_tmp_tmp_msg_0_0_0.encoding = 48U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {-108, 108, 116, 44, -101, 71, 29, -45, 24, -121, 80, -4, -19, 30, 28, -2, 27, 48, -7, -123, 89, 90, -120, 105, 77, -78, 21, -97, 62, 123, 11, 91, -110, 50, -10, 122, 90, 112};
    tmp_tmp_tmp_msg_0_0_0.sonar_data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
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
    msg.setTimeStamp(0.469515181522);
    msg.setSource(10646U);
    msg.setSourceEntity(81U);
    msg.setDestination(38544U);
    msg.setDestinationEntity(253U);
    msg.original_source = 52997U;
    msg.destination = 53423U;
    msg.timeout = 0.427851068897;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.0823467150908;
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
    msg.setTimeStamp(0.20459679726);
    msg.setSource(55055U);
    msg.setSourceEntity(248U);
    msg.setDestination(64278U);
    msg.setDestinationEntity(23U);
    msg.original_source = 27422U;
    msg.destination = 17506U;
    msg.timeout = 0.297982071804;
    IMC::LblRangeAcceptance tmp_msg_0;
    tmp_msg_0.id = 211U;
    tmp_msg_0.range = 0.205123809388;
    tmp_msg_0.acceptance = 177U;
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
    msg.setTimeStamp(0.353589947849);
    msg.setSource(30350U);
    msg.setSourceEntity(2U);
    msg.setDestination(17924U);
    msg.setDestinationEntity(9U);
    msg.original_source = 64612U;
    msg.destination = 57429U;
    msg.timeout = 0.843331456175;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 25U;
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
    msg.setTimeStamp(0.312500148092);
    msg.setSource(43562U);
    msg.setSourceEntity(24U);
    msg.setDestination(1596U);
    msg.setDestinationEntity(204U);
    msg.type = 250U;
    msg.comm_interface = 33011U;
    msg.model = 43281U;
    msg.list.assign("OTGZRQSYUHLPYIEFUIAIHCRWZTMIEMXXIGNGYFZYNJAWLMLVSUAPYNTTDRPZNCKKBHGGFNXPDHLMSQPVVWMLMIPFZUOVOUTDRLEYLQJHJETXBWNNCDBHIYAEEVHSOCDBBDICAY");

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
    msg.setTimeStamp(0.776131145321);
    msg.setSource(53879U);
    msg.setSourceEntity(135U);
    msg.setDestination(61917U);
    msg.setDestinationEntity(252U);
    msg.type = 46U;
    msg.comm_interface = 9644U;
    msg.model = 25230U;
    msg.list.assign("SEZQNHVSEXYYRWFARHFLEGAXLUQYHUGLBLYDBKEUKNWYDWPOQAFZSQQRXEMSQOSRGYKIPIINTQOJIRSWNFOGRACVDNDPKUKPKZDXGSPCLUBMLFZCIDBJELNCJPTAMMEVPACCTXQKPZIXIOCFBAHAITKHSMUDJP");

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
    msg.setTimeStamp(0.703785583534);
    msg.setSource(64937U);
    msg.setSourceEntity(155U);
    msg.setDestination(56383U);
    msg.setDestinationEntity(154U);
    msg.type = 44U;
    msg.comm_interface = 23775U;
    msg.model = 54273U;
    msg.list.assign("LAWPNUBCIQUNGDUZKWQVIJLQLLMVMFDGZIRKGWBOLZFKREDPPNOKPLWWNZPWGXMQCTUGKSKBKYDSRTLJNNDIE");

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
    msg.setTimeStamp(0.536194176445);
    msg.setSource(42433U);
    msg.setSourceEntity(39U);
    msg.setDestination(16566U);
    msg.setDestinationEntity(30U);
    msg.type = 33U;
    msg.req_id = 3073152916U;
    msg.ttl = 7462U;
    msg.code = 147U;
    msg.destination.assign("YFCLNHFDEREUIUVAONLEFUBCUIHYDTMSNAGAPPLIBFJKOMQXKSEZXYCPOOFMICBDGPJPQPGESTHMSBNYXPVQQAHARLFOKNVOZM");
    msg.source.assign("QBBXJVAORMCMASPLALQLILFVRVEPBAMTXFGGNJHZXBGUOIDHFUGUYBXJJYBGEIAMFTTZQUHZHJZCCBMWRYMWLGMDMPTKVIRHZKWSVXESJZGOINXODANNAEPLCFJPSYPSDAFZPFXKKCNGZMYEORETFQITSRTEDHUYCZQZVDENVYSDYAWXPWLUUCSKYHLGWRHJWIRQBUOCEXDKVMPKORTOTKCWPWKJIQVNOUSLIJHOVAQQF");
    msg.acknowledge = 138U;
    msg.status = 58U;
    const char tmp_msg_0[] = {38, 75, 17, 68, -94, -3, -23, -6, -9, 92, 3, 74, -24, 43, -116, -8, 106, -78, 45, -99, -4, -39, 90, 62, 72, -9, 98, -121, -127, 79, -65, -6, 11, 40, 35, 102, -1, -54, -76, -123, -113, 98, -84, -53, -3, 124, -115, 49, -31, 98, -117, -86, -65, -9, 52, 82, -106, 126, -61, -77, 21, -16, -15, 97, 42, 4, 26, 19, 91, -68, -91, 111, 109, -4, 45, 49, 13, -84, -89, 1, 89, 10, 36, 24, -76, 50, 2, 53, 99, 50, -79, -104, -25, -98, 97, 44, 32, 22, 53, -40, 44, 108, -19, -37, 40, 7, 5, -8, 96, 11, -71, -121, -119, -121, 109, 1, -119, 110, -111, -107, -22, 62, 79, -1, 47, -44, 7, -46, -76, 22, 6, -18, 50, -27, 117, 119, 48, 31, 43, -72, -106, -116, 8, -21, 113, -43, 62, 60, 47, 120, -35, 67, -83, 56, -80, -128, -65, 45, 53, -114, -68, 93, 96, -91, -36, 0, -13, 109, -14, 110, -120, -97, 119, 96, -101, -12, 75, 102, -19, -77, 120, 102, -21, -28, 13, -85, -117, 33, -102, -76, -93, -37, 120, -89, -25, -101, 20, 8, -58, -89, -71, 113, -28, 100, -54, -3, 29, -122, -123, 59, -84, 86, 69, 78, -60, 12, -120, -30, 21, 31, -12, 75, -13, 103, -59, -40, -103, 93, -128, -70, -32, -84, 116, -32, -107, -47, -47, -74, 94, 21, -120, -101, -98, -77, -125, 116};
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
    msg.setTimeStamp(0.869025208377);
    msg.setSource(27954U);
    msg.setSourceEntity(104U);
    msg.setDestination(10435U);
    msg.setDestinationEntity(100U);
    msg.type = 68U;
    msg.req_id = 1167674170U;
    msg.ttl = 62235U;
    msg.code = 130U;
    msg.destination.assign("YABODUJOPZQYRJEUQBFAFNWDWPKGGCFRZRGNNNWKYFALIQNXIBPQIORMXTJXLLCPHMHVJTCIZUSBEJHUDBSHCJELQDOCOWKJHIBRSPNQDDLVKXUHECYDKTLEROMUWKUQIWABFLEVPGBHJRWOTXCAYFGRBAMSNRIXHIYPETGPTAUOMTXTVCYTHGFWUSINVDQXZOSOKUBLMWXVVKXMSZSCNJZEGVEMYYVLZAMPECYJTFQVSAD");
    msg.source.assign("AYPJBWJZRVIIAFONMPTZLWHENFJOIJXRTG");
    msg.acknowledge = 53U;
    msg.status = 161U;
    const char tmp_msg_0[] = {-81, 118, 51, -74, -67, -64, 101, -25, 107, 21, 84, 34, -87, 77, 14, 122, -74, -43, 66, 20, 23, 87, -14, 108, 32, 35, 102, -111, 89, -118, 18, -41, -12, -93, 45, 23, 38, -84, 103, -7, -1, 5, -125, -63, -92, 105, -124, 52, 3, 38, 17, -14, -37, 122, 83, 61, 81, -75, 103, -117, 21, 115, -1, 124, 102, 14, 73, 53, -125, 84, -9, -6, -64, -23, -76, -60, 100, -123, 119, 107, -80, -98, -15, 26, 1, 24, -84, -101, 120, -27, -105, -105, -29, 32, 15, 105, -35, -29, 37, 69, 99, -98, -4, -81, 15, -57, 105, -122, -34, -51, 92, -56, -84, -48, -59, -90, 34, -95, 0, -124, 30, 111, -12, 51, 87, -114, 75, 109, -92, 40, -92, -127, -115, -45, -33, -27, -126, 1, -3, 28, -7, 27, 24, -55, -5, 100, 75, -11, -123, -93, 83, -96, -59, -62, -52, 39, -78, 8, -80, 56, -42, 82, 22, -117, -109, -32, 83, -16, 3, 22, -116, 125, 7, 43, 10, 55, 10, 89, -87, 57, 119, 22, -7, 88, -118, -3, 7, -48, -94, -120, -116, -46, 51, 15, 73, -29, -56, 15, -40, -86, -55, 96, 64, -31, 96, -15, -90, 46, -46, -3, -120, -117, 55, 103, 13, 89, -55, -128, 92, 30};
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
    msg.setTimeStamp(0.619519249764);
    msg.setSource(23964U);
    msg.setSourceEntity(62U);
    msg.setDestination(61321U);
    msg.setDestinationEntity(123U);
    msg.type = 96U;
    msg.req_id = 2185185741U;
    msg.ttl = 50234U;
    msg.code = 138U;
    msg.destination.assign("OLMQRUKTLAJODHTJPKATNLFMDRKUWUVSBMTHGTCMXFNXXGIEKPQURQFDDGJLHYZ");
    msg.source.assign("QOQGWYVGDSEXXAIFBLCPVPFCZRWCIJUENKPKSVLSKTRICLAWBJPYSWMGQZPGBBUKQALVTYETRZDFEAUIPCEWKREJGNIJTMRSBFJTJNQXLFUICHHU");
    msg.acknowledge = 45U;
    msg.status = 59U;
    const char tmp_msg_0[] = {49, 118, -78, -110, 0, 78, -22, 82, 124, 82, -33, 33, -103, -43, -83, -8, 120, 11, -9, 54, -91, 66, -45, 108, -49, 48, 80, 89, 12, 48, -69, -75, 115, -63, -59, 57, 121, 55, 16, 98, 17, -94, 3, 72, -28, 64, -68, 83, 97, 19, -128, 61, -92, 85, 47, -106, 7, 116, 35, 9, 30, -10, -39, 80, -100, -87, -74, 1, 97, -37, -84, 52, -80, -125, -53, -22, -99, -19, 19, -2, -8, 41, 113, -71, 76, 19, -23, 45, 62, 24, 95, -118, 14, 125, -53, 34, -30, -97, -43, 48, -92, 18, 88, -86, 18, -115, 107, 115, 116, -110, -9, 28, -38, -103, -12, -73, 3, -113, 102, -75, 1, -77, -10, 119, -45, 108, -102, -49, 19, -48, 27, -22, -18, 36, 16, 25, 48, 2, 105, -16, 58, 11, 121, -88, -96, -7, 57, -34, 16, -13, -46, -99, -122, 65, 35, -45, 31, -56, -81, 107, 27, 123, -74, -18, 51, 67, -56, -14, -103, -79, -121, 61, 61, 3, 113, 67, 22, 71, 36, 14, -13, -8, 47, -105, 29, 20, -72, -89, 9, 65, 106, 107, 122, 109, 117, 96, -15, 54, -102, -73, -110, 123, 26, -65, -99, 110, -6, 64, -82, 113, -113, 119, -103, -78, -7, -65, 30, -54, 71, -29, 84, -62, -11, 27, 104, 6, -90, 32, 117, 73, -9, 83, 102};
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
    msg.setTimeStamp(0.109136155582);
    msg.setSource(37069U);
    msg.setSourceEntity(12U);
    msg.setDestination(719U);
    msg.setDestinationEntity(131U);
    msg.id = 89U;
    msg.range = 0.488813209119;

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
    msg.setTimeStamp(0.225986487404);
    msg.setSource(19018U);
    msg.setSourceEntity(123U);
    msg.setDestination(24442U);
    msg.setDestinationEntity(227U);
    msg.id = 125U;
    msg.range = 0.509860799393;

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
    msg.setTimeStamp(0.364540264795);
    msg.setSource(53377U);
    msg.setSourceEntity(63U);
    msg.setDestination(49222U);
    msg.setDestinationEntity(118U);
    msg.id = 86U;
    msg.range = 0.453743961902;

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
    msg.setTimeStamp(0.381224727725);
    msg.setSource(22988U);
    msg.setSourceEntity(247U);
    msg.setDestination(12626U);
    msg.setDestinationEntity(17U);
    msg.beacon.assign("ONMEDAQDNXYKXOLTMTSUXGDPYIGMTNJRFSPYEAD");
    msg.lat = 0.229874000764;
    msg.lon = 0.0818862356782;
    msg.depth = 0.0932281682376;
    msg.query_channel = 175U;
    msg.reply_channel = 16U;
    msg.transponder_delay = 53U;

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
    msg.setTimeStamp(0.212218478307);
    msg.setSource(31481U);
    msg.setSourceEntity(75U);
    msg.setDestination(14802U);
    msg.setDestinationEntity(54U);
    msg.beacon.assign("WGNXVVDAWKCJKYEHWANFFBQTBYZBNNBSQBHCNIMCGOU");
    msg.lat = 0.781786469823;
    msg.lon = 0.714089260601;
    msg.depth = 0.940284063692;
    msg.query_channel = 16U;
    msg.reply_channel = 54U;
    msg.transponder_delay = 89U;

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
    msg.setTimeStamp(0.713380015915);
    msg.setSource(28752U);
    msg.setSourceEntity(222U);
    msg.setDestination(12080U);
    msg.setDestinationEntity(213U);
    msg.beacon.assign("MNNDVJHQZARYWYKXTQTDVMPDALXPPDCYYMQSTFWRMVIOOCHKDFKEIIBGSIEZUHGGRUNZQCXLVTMBIRUCJH");
    msg.lat = 0.330347724558;
    msg.lon = 0.316352277196;
    msg.depth = 0.326472971475;
    msg.query_channel = 18U;
    msg.reply_channel = 0U;
    msg.transponder_delay = 229U;

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
    msg.setTimeStamp(0.868139826488);
    msg.setSource(9880U);
    msg.setSourceEntity(248U);
    msg.setDestination(39191U);
    msg.setDestinationEntity(196U);
    msg.op = 190U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SVQXNWPBDAIYEEZAOJTMITVWVCRSUCTPMOLIJGUYWSCVARNKIJZYSEDNR");
    tmp_msg_0.lat = 0.234486005322;
    tmp_msg_0.lon = 0.131844320129;
    tmp_msg_0.depth = 0.479038487117;
    tmp_msg_0.query_channel = 156U;
    tmp_msg_0.reply_channel = 22U;
    tmp_msg_0.transponder_delay = 52U;
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
    msg.setTimeStamp(0.0476850611624);
    msg.setSource(38624U);
    msg.setSourceEntity(121U);
    msg.setDestination(9927U);
    msg.setDestinationEntity(139U);
    msg.op = 52U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VEHRDJNAXOAIINQULLNLYDUQXPITHEPYGSVJLJWXWYWCKFUUDSOTBSMPZZUEQYMKBVQIAZMHZFXNLKMTEGRBZABCNCBTAOTSBPIQHKKFWRYIVHFNDWVZIXDLROPONGVMKNHAUGEHVCMAYZOFIGOFYFMOVBLKSHZZEGJVXWERWKWJJDRSTMGLDNGKTYSQASFDGQSERNIQBUUIRURFJSEJGVCMPCAJCJBPPPTOCXTXYZOKXPLDWYLQCQCREXUDAH");
    tmp_msg_0.lat = 0.470317872831;
    tmp_msg_0.lon = 0.091191999758;
    tmp_msg_0.depth = 0.665460755757;
    tmp_msg_0.query_channel = 166U;
    tmp_msg_0.reply_channel = 122U;
    tmp_msg_0.transponder_delay = 69U;
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
    msg.setTimeStamp(0.110646065508);
    msg.setSource(57677U);
    msg.setSourceEntity(26U);
    msg.setDestination(32516U);
    msg.setDestinationEntity(176U);
    msg.op = 220U;

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
    msg.setTimeStamp(0.288514077236);
    msg.setSource(48235U);
    msg.setSourceEntity(28U);
    msg.setDestination(53045U);
    msg.setDestinationEntity(4U);
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.513922158449;
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
    msg.setTimeStamp(0.142928911649);
    msg.setSource(19729U);
    msg.setSourceEntity(179U);
    msg.setDestination(28426U);
    msg.setDestinationEntity(180U);
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 156U;
    tmp_msg_0.longain = 0.604578852474;
    tmp_msg_0.latgain = 0.230701293822;
    tmp_msg_0.bondthick = 3653503196U;
    tmp_msg_0.leadgain = 0.757170709552;
    tmp_msg_0.deconflgain = 0.420764900969;
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
    msg.setTimeStamp(0.102510116872);
    msg.setSource(61361U);
    msg.setSourceEntity(148U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(26U);
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 127U;
    tmp_msg_0.plan_id.assign("YBXBRLYHWKQMDULSKHAAJJOYMCAPBNLGEJRTMVLCDOIQYVVZRIHNSFIKQNTICEQRVCHUKLYDQZDOOHWZEZKYUEWQXWGVXJEXEZGWJBSELDSTSUOFSQTPMCFCVNGOLFKHBDVAPLXOMFIIFIXRCAYGUBKGLQWFTNMJDSYSSPVIHEPRRMMWMZTVJAGLHTCTFUIOGRXFPOTDAZGSBECPKPCNE");
    tmp_msg_0.plan_eta = -163848799;
    tmp_msg_0.plan_progress = 0.788235342683;
    tmp_msg_0.man_id.assign("XQBNOJOAGMFFLJYYYLKULZXTFAXDWJMMNCPUPGPGOILZHHHBGAVYTFVKRAPMQCIGJHQVMWPPDUDWAWEQEXZTCQZGQDYZRGCFHWHXEKZKGIHMTCIHJEQLTCORMNJUUKBMBNBYZJQOHWSDXRIFGUYXEICAIFZWPEKK");
    tmp_msg_0.man_type = 13631U;
    tmp_msg_0.man_eta = 1187558905;
    tmp_msg_0.last_outcome = 16U;
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
    msg.setTimeStamp(0.0164954627117);
    msg.setSource(36284U);
    msg.setSourceEntity(148U);
    msg.setDestination(36730U);
    msg.setDestinationEntity(83U);
    msg.op = 81U;
    msg.system.assign("EXRIVLMCJYYTEQRUSUVDDLQYHADCDVATYYGVUMVJANCLNFLBPLWTYRQSGOTILKFHAEEPSATFJMKPTGRQOQBCBEUSVDLFPJTSCKF");
    msg.range = 0.0709876819516;
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 2574926102U;
    tmp_msg_0.start_lat = 0.966294169887;
    tmp_msg_0.start_lon = 0.449635858077;
    tmp_msg_0.start_z = 0.369875938385;
    tmp_msg_0.start_z_units = 177U;
    tmp_msg_0.end_lat = 0.915530021026;
    tmp_msg_0.end_lon = 0.487589814979;
    tmp_msg_0.end_z = 0.281514161282;
    tmp_msg_0.end_z_units = 14U;
    tmp_msg_0.lradius = 0.659896460823;
    tmp_msg_0.flags = 35U;
    tmp_msg_0.x = 0.644949520476;
    tmp_msg_0.y = 0.523205523845;
    tmp_msg_0.z = 0.103726230534;
    tmp_msg_0.vx = 0.944340495818;
    tmp_msg_0.vy = 0.502165637056;
    tmp_msg_0.vz = 0.299023250919;
    tmp_msg_0.course_error = 0.528842838635;
    tmp_msg_0.eta = 54498U;
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
    msg.setTimeStamp(0.203073286356);
    msg.setSource(46180U);
    msg.setSourceEntity(79U);
    msg.setDestination(50094U);
    msg.setDestinationEntity(118U);
    msg.op = 182U;
    msg.system.assign("NLGOAEYPUEKRELNCQIOMZSXCUMZYOMLQZFDAYXDSRXGEAGGUSHVFKEAWVGCPZTGCCHMTHZMXXJPUWOIWPIOJWXFODECSNNLHAFDBZTWWQHPGCHKMNQMEZINMUKLYBWUXIZTFLJKTWABRLJXZAIGJVVXHH");
    msg.range = 0.355064617248;
    IMC::AcousticMessage tmp_msg_0;
    IMC::VtolState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 21U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.281954484453);
    msg.setSource(23924U);
    msg.setSourceEntity(92U);
    msg.setDestination(22697U);
    msg.setDestinationEntity(42U);
    msg.op = 88U;
    msg.system.assign("SDEOXWSMIBLZJWRQNWWKIPZMWXVNQAJBDRYUJNGXOXERGBAMQRRHFKDEDCVYVVZLGFFKSIWUTDHMIGSYPDSTMPGUJLNWFEVTLUAARFQOSTPJEOLTIUAVCTVWQXLHYNYMZEGGMBKOJKFAPCDGIH");
    msg.range = 0.655881752123;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("IVHZRASUNQBLYFPCDKFDYVTVBNGRDSVZWSAZHLTZJLGTUCLMPVFAHIOFXXKBNYWRJRIXKLTFZQOIGQRFPEVEEHGJWPPAFBU");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("CXFWTUHDGBBEZXSXJIEQYOWPVNJRKYQHCLXBRFTBDOACRMCODDPHZMVGAWDGOGFFHFGPKAEYUFNXVNRHWRUQZNWQOWRXJPZTMMKQULIOYWGPHLSSOEZYSNHSRCHBZMBOSMDRJQIILLJJIDKKSAJIVYTQPWLZQTAAUMVDKFOYPBPDYFNEKNANUCMTXWSTKHUFXPGCEUTVIEIWILO");
    tmp_tmp_msg_0_0.predicate.assign("QYCXKOWPPCEUBJEQDBDKJGIKPGXLDFFZREZQBMVSLRVPFCVUNOPNGHJRLISXONTIBJEECMRPKIDUGDSAMRFVINVGCNJHWFOPDSYNZAGSQSWOKUNRWUJKQXWNPVMXARTHAQXLQQOBIAET");
    tmp_msg_0.tokens.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.19718658601);
    msg.setSource(54590U);
    msg.setSourceEntity(77U);
    msg.setDestination(35548U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.0642062970641);
    msg.setSource(37980U);
    msg.setSourceEntity(133U);
    msg.setDestination(8291U);
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
    msg.setTimeStamp(0.886118331453);
    msg.setSource(5826U);
    msg.setSourceEntity(220U);
    msg.setDestination(55174U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.471092181513);
    msg.setSource(42963U);
    msg.setSourceEntity(203U);
    msg.setDestination(40641U);
    msg.setDestinationEntity(41U);
    msg.list.assign("EHXCJZMMMAQTTDSIZDARTONNKBRHIZNOYUVEXBOAGBETPXRCIDQBVWBMVEVGPYDALRJGYJTGLFNCQRNQPGZQSYYTORKKQNLMSASIWHUUNWXPLVZIHFSMYDPUEPEFZJWENGJFUSQIFGRMBUFEIRDIDZBOWIFXWKIOVTHNLCFQZCWFKOPLKMYJCDDMJVCQZYYKYAXHXMVOUABLTJUGZPCOHSWQUKBXRUTASHSVGPEPRKOLAXW");

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
    msg.setTimeStamp(0.263769650571);
    msg.setSource(20481U);
    msg.setSourceEntity(110U);
    msg.setDestination(40771U);
    msg.setDestinationEntity(111U);
    msg.list.assign("OAWLKQSXHRZGPKNUHETADQXPVOQWXVAYUSLCFCHSWHNRJGPZDFUHTLHXHB");

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
    msg.setTimeStamp(0.439990489493);
    msg.setSource(47675U);
    msg.setSourceEntity(114U);
    msg.setDestination(43050U);
    msg.setDestinationEntity(250U);
    msg.list.assign("CWNVQCIUVDXNQEHRIGMHYXBGYXLMUKEQIHOZEBMUSXQKPDZTOPYTEQJGREPWOZZLYBNEHSZPGFZWIHIHRNMQESVMLKGQVPKKJOFGTSWMBUKFYJEJORVWADXLVHYIIZBWKDWIPJVBLRDCNZYXGPFYTMSZZCKAUIJVNFBPEJFRDVACJATHXTPSQEMRUOSCWUTLAFSIGCU");

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
    msg.setTimeStamp(0.878715370215);
    msg.setSource(58771U);
    msg.setSourceEntity(135U);
    msg.setDestination(38214U);
    msg.setDestinationEntity(18U);
    msg.peer.assign("CUKYUVRIYXYOJSNGITPCOYJENTNPSYOTQURLLWPNKFTGDNWOIRBKSPMVFKHDPBEQTOJMCEBZDMHXKJWLZAXFCV");
    msg.rssi = 0.740180651441;
    msg.integrity = 1220U;

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
    msg.setTimeStamp(0.345177988575);
    msg.setSource(12227U);
    msg.setSourceEntity(157U);
    msg.setDestination(52423U);
    msg.setDestinationEntity(56U);
    msg.peer.assign("LRNTZPHPIXIQQOJPVOWIRDYXSBOOWLKZ");
    msg.rssi = 0.188959184357;
    msg.integrity = 37348U;

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
    msg.setTimeStamp(0.694307834841);
    msg.setSource(60073U);
    msg.setSourceEntity(116U);
    msg.setDestination(61724U);
    msg.setDestinationEntity(142U);
    msg.peer.assign("TXOGZTTLTXEGNIWHUSRUBCHAPKSNNRRPGINWZQUTERR");
    msg.rssi = 0.717724472586;
    msg.integrity = 8173U;

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
    msg.setTimeStamp(0.750720615145);
    msg.setSource(7903U);
    msg.setSourceEntity(209U);
    msg.setDestination(33542U);
    msg.setDestinationEntity(133U);
    msg.value = -10849;

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
    msg.setTimeStamp(0.33566827409);
    msg.setSource(38074U);
    msg.setSourceEntity(59U);
    msg.setDestination(2839U);
    msg.setDestinationEntity(90U);
    msg.value = -28250;

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
    msg.setTimeStamp(0.808559354227);
    msg.setSource(16468U);
    msg.setSourceEntity(126U);
    msg.setDestination(24242U);
    msg.setDestinationEntity(42U);
    msg.value = -16504;

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
    msg.setTimeStamp(0.847796101172);
    msg.setSource(52968U);
    msg.setSourceEntity(133U);
    msg.setDestination(25542U);
    msg.setDestinationEntity(31U);
    msg.value = 0.566564360748;

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
    msg.setTimeStamp(0.877446606199);
    msg.setSource(22593U);
    msg.setSourceEntity(13U);
    msg.setDestination(31999U);
    msg.setDestinationEntity(206U);
    msg.value = 0.975003545739;

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
    msg.setTimeStamp(0.514758016781);
    msg.setSource(13223U);
    msg.setSourceEntity(205U);
    msg.setDestination(29406U);
    msg.setDestinationEntity(148U);
    msg.value = 0.13304354964;

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
    msg.setTimeStamp(0.146710852501);
    msg.setSource(11822U);
    msg.setSourceEntity(151U);
    msg.setDestination(50373U);
    msg.setDestinationEntity(235U);
    msg.value = 0.186672350587;

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
    msg.setTimeStamp(0.899894801576);
    msg.setSource(25930U);
    msg.setSourceEntity(36U);
    msg.setDestination(52324U);
    msg.setDestinationEntity(24U);
    msg.value = 0.656658952586;

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
    msg.setTimeStamp(0.159704401069);
    msg.setSource(18592U);
    msg.setSourceEntity(103U);
    msg.setDestination(35724U);
    msg.setDestinationEntity(69U);
    msg.value = 0.214755987024;

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
    msg.setTimeStamp(0.941877893445);
    msg.setSource(9283U);
    msg.setSourceEntity(79U);
    msg.setDestination(22748U);
    msg.setDestinationEntity(53U);
    msg.validity = 21842U;
    msg.type = 71U;
    msg.utc_year = 48735U;
    msg.utc_month = 176U;
    msg.utc_day = 167U;
    msg.utc_time = 0.20014350778;
    msg.lat = 0.196423307507;
    msg.lon = 0.353297730099;
    msg.height = 0.756789479904;
    msg.satellites = 6U;
    msg.cog = 0.930069859769;
    msg.sog = 0.539338694141;
    msg.hdop = 0.371939060174;
    msg.vdop = 0.76067946441;
    msg.hacc = 0.907950891801;
    msg.vacc = 0.509564742879;

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
    msg.setTimeStamp(0.11541076839);
    msg.setSource(7687U);
    msg.setSourceEntity(152U);
    msg.setDestination(5214U);
    msg.setDestinationEntity(246U);
    msg.validity = 19717U;
    msg.type = 64U;
    msg.utc_year = 47578U;
    msg.utc_month = 227U;
    msg.utc_day = 15U;
    msg.utc_time = 0.627844144807;
    msg.lat = 0.701329200753;
    msg.lon = 0.156653784857;
    msg.height = 0.690470430648;
    msg.satellites = 173U;
    msg.cog = 0.514958263117;
    msg.sog = 0.606089061107;
    msg.hdop = 0.0285957690139;
    msg.vdop = 0.472832985459;
    msg.hacc = 0.363224389852;
    msg.vacc = 0.315777449384;

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
    msg.setTimeStamp(0.976446943823);
    msg.setSource(62819U);
    msg.setSourceEntity(221U);
    msg.setDestination(20317U);
    msg.setDestinationEntity(65U);
    msg.validity = 28044U;
    msg.type = 38U;
    msg.utc_year = 58440U;
    msg.utc_month = 191U;
    msg.utc_day = 144U;
    msg.utc_time = 0.984521306796;
    msg.lat = 0.468744397286;
    msg.lon = 0.138391457249;
    msg.height = 0.125413174012;
    msg.satellites = 119U;
    msg.cog = 0.0503568361086;
    msg.sog = 0.753235051124;
    msg.hdop = 0.68040089101;
    msg.vdop = 0.485429334287;
    msg.hacc = 0.90007212477;
    msg.vacc = 0.242987891461;

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
    msg.setTimeStamp(0.297196042659);
    msg.setSource(52345U);
    msg.setSourceEntity(204U);
    msg.setDestination(42590U);
    msg.setDestinationEntity(86U);
    msg.time = 0.840588812348;
    msg.phi = 0.636088641535;
    msg.theta = 0.500635867879;
    msg.psi = 0.314857134966;
    msg.psi_magnetic = 0.0044423564694;

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
    msg.setTimeStamp(0.0356672232059);
    msg.setSource(29252U);
    msg.setSourceEntity(250U);
    msg.setDestination(850U);
    msg.setDestinationEntity(31U);
    msg.time = 0.478166954002;
    msg.phi = 0.187514011675;
    msg.theta = 0.245439945199;
    msg.psi = 0.372400825794;
    msg.psi_magnetic = 0.00820346191835;

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
    msg.setTimeStamp(0.614532246182);
    msg.setSource(35751U);
    msg.setSourceEntity(49U);
    msg.setDestination(38756U);
    msg.setDestinationEntity(83U);
    msg.time = 0.26624342107;
    msg.phi = 0.331151453756;
    msg.theta = 0.457054459943;
    msg.psi = 0.866508085404;
    msg.psi_magnetic = 0.149143991431;

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
    msg.setTimeStamp(0.686033623249);
    msg.setSource(22870U);
    msg.setSourceEntity(8U);
    msg.setDestination(2164U);
    msg.setDestinationEntity(0U);
    msg.time = 0.722838554888;
    msg.x = 0.910450596452;
    msg.y = 0.752344822977;
    msg.z = 0.642547056102;
    msg.timestep = 0.784034341861;

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
    msg.setTimeStamp(0.0980869628042);
    msg.setSource(55218U);
    msg.setSourceEntity(50U);
    msg.setDestination(65393U);
    msg.setDestinationEntity(185U);
    msg.time = 0.0374676101147;
    msg.x = 0.329050502081;
    msg.y = 0.557118397861;
    msg.z = 0.371068448728;
    msg.timestep = 0.914505340048;

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
    msg.setTimeStamp(0.251005129446);
    msg.setSource(30071U);
    msg.setSourceEntity(128U);
    msg.setDestination(52512U);
    msg.setDestinationEntity(26U);
    msg.time = 0.753263008118;
    msg.x = 0.368263563141;
    msg.y = 0.992157062269;
    msg.z = 0.11862656903;
    msg.timestep = 0.640771746387;

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
    msg.setTimeStamp(0.899278474306);
    msg.setSource(6835U);
    msg.setSourceEntity(207U);
    msg.setDestination(27711U);
    msg.setDestinationEntity(41U);
    msg.time = 0.225897276632;
    msg.x = 0.0480406008925;
    msg.y = 0.248736979092;
    msg.z = 0.337979819648;

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
    msg.setTimeStamp(0.585233927593);
    msg.setSource(48090U);
    msg.setSourceEntity(254U);
    msg.setDestination(37414U);
    msg.setDestinationEntity(118U);
    msg.time = 0.449316781251;
    msg.x = 0.61930228875;
    msg.y = 0.695020929603;
    msg.z = 0.711905845979;

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
    msg.setTimeStamp(0.0442461041213);
    msg.setSource(24244U);
    msg.setSourceEntity(189U);
    msg.setDestination(58198U);
    msg.setDestinationEntity(245U);
    msg.time = 0.787563113067;
    msg.x = 0.0135678862174;
    msg.y = 0.806227737885;
    msg.z = 0.715242261802;

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
    msg.setTimeStamp(0.226841939827);
    msg.setSource(1860U);
    msg.setSourceEntity(118U);
    msg.setDestination(160U);
    msg.setDestinationEntity(246U);
    msg.time = 0.385187152038;
    msg.x = 0.331787532007;
    msg.y = 0.386390257797;
    msg.z = 0.830107476243;

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
    msg.setTimeStamp(0.526854722305);
    msg.setSource(2331U);
    msg.setSourceEntity(26U);
    msg.setDestination(18935U);
    msg.setDestinationEntity(88U);
    msg.time = 0.260876713022;
    msg.x = 0.801740701197;
    msg.y = 0.865347487947;
    msg.z = 0.0992949357733;

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
    msg.setTimeStamp(0.220547031174);
    msg.setSource(56365U);
    msg.setSourceEntity(228U);
    msg.setDestination(15086U);
    msg.setDestinationEntity(156U);
    msg.time = 0.462973676967;
    msg.x = 0.908196203233;
    msg.y = 0.18013074997;
    msg.z = 0.45444724115;

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
    msg.setTimeStamp(0.140286687268);
    msg.setSource(33671U);
    msg.setSourceEntity(139U);
    msg.setDestination(21826U);
    msg.setDestinationEntity(109U);
    msg.time = 0.502815668227;
    msg.x = 0.0921440706162;
    msg.y = 0.862302406757;
    msg.z = 0.330025550816;

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
    msg.setTimeStamp(0.836685027947);
    msg.setSource(35804U);
    msg.setSourceEntity(82U);
    msg.setDestination(42023U);
    msg.setDestinationEntity(167U);
    msg.time = 0.0264550258101;
    msg.x = 0.996781301492;
    msg.y = 0.215061322519;
    msg.z = 0.10526153166;

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
    msg.setTimeStamp(0.135415312457);
    msg.setSource(5832U);
    msg.setSourceEntity(146U);
    msg.setDestination(1653U);
    msg.setDestinationEntity(239U);
    msg.time = 0.0736091505593;
    msg.x = 0.979567711055;
    msg.y = 0.0906951520264;
    msg.z = 0.591342427736;

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
    msg.setTimeStamp(0.572532897701);
    msg.setSource(38350U);
    msg.setSourceEntity(199U);
    msg.setDestination(57656U);
    msg.setDestinationEntity(6U);
    msg.validity = 84U;
    msg.x = 0.170980121904;
    msg.y = 0.479177479575;
    msg.z = 0.784788925398;

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
    msg.setTimeStamp(0.927091453912);
    msg.setSource(27633U);
    msg.setSourceEntity(164U);
    msg.setDestination(53789U);
    msg.setDestinationEntity(238U);
    msg.validity = 88U;
    msg.x = 0.527760770113;
    msg.y = 0.445280729564;
    msg.z = 0.682011510341;

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
    msg.setTimeStamp(0.00684506309531);
    msg.setSource(46337U);
    msg.setSourceEntity(91U);
    msg.setDestination(65494U);
    msg.setDestinationEntity(125U);
    msg.validity = 52U;
    msg.x = 0.578279715461;
    msg.y = 0.550577066954;
    msg.z = 0.0852995172773;

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
    msg.setTimeStamp(0.418877763164);
    msg.setSource(6527U);
    msg.setSourceEntity(172U);
    msg.setDestination(3552U);
    msg.setDestinationEntity(178U);
    msg.validity = 114U;
    msg.x = 0.786096903521;
    msg.y = 0.36351983396;
    msg.z = 0.773312653782;

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
    msg.setTimeStamp(0.901685417162);
    msg.setSource(44691U);
    msg.setSourceEntity(79U);
    msg.setDestination(16374U);
    msg.setDestinationEntity(93U);
    msg.validity = 103U;
    msg.x = 0.035321727254;
    msg.y = 0.110200328223;
    msg.z = 0.710188455662;

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
    msg.setTimeStamp(0.166178412707);
    msg.setSource(35504U);
    msg.setSourceEntity(107U);
    msg.setDestination(62183U);
    msg.setDestinationEntity(33U);
    msg.validity = 49U;
    msg.x = 0.0499087586162;
    msg.y = 0.272339353494;
    msg.z = 0.131971398215;

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
    msg.setTimeStamp(0.901154088428);
    msg.setSource(5747U);
    msg.setSourceEntity(147U);
    msg.setDestination(15384U);
    msg.setDestinationEntity(173U);
    msg.time = 0.00269837036439;
    msg.x = 0.854365252288;
    msg.y = 0.0079246033926;
    msg.z = 0.312809400163;

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
    msg.setTimeStamp(0.72981683973);
    msg.setSource(584U);
    msg.setSourceEntity(120U);
    msg.setDestination(15782U);
    msg.setDestinationEntity(19U);
    msg.time = 0.301813306968;
    msg.x = 0.559663751096;
    msg.y = 0.94536485945;
    msg.z = 0.979457125851;

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
    msg.setTimeStamp(0.743105685359);
    msg.setSource(39492U);
    msg.setSourceEntity(81U);
    msg.setDestination(35801U);
    msg.setDestinationEntity(35U);
    msg.time = 0.297048203993;
    msg.x = 0.972166652702;
    msg.y = 0.758568407155;
    msg.z = 0.372516675915;

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
    msg.setTimeStamp(0.290031643667);
    msg.setSource(26234U);
    msg.setSourceEntity(192U);
    msg.setDestination(54447U);
    msg.setDestinationEntity(233U);
    msg.validity = 158U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.722364645118;
    tmp_msg_0.y = 0.465429094854;
    tmp_msg_0.z = 0.80694176372;
    tmp_msg_0.phi = 0.782703959373;
    tmp_msg_0.theta = 0.570519344179;
    tmp_msg_0.psi = 0.576180871818;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.322592814157;

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
    msg.setTimeStamp(0.289076665513);
    msg.setSource(62619U);
    msg.setSourceEntity(38U);
    msg.setDestination(4902U);
    msg.setDestinationEntity(123U);
    msg.validity = 47U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.147273371623;
    tmp_msg_0.beam_height = 0.0444613097178;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.441760912603;

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
    msg.setTimeStamp(0.758504026554);
    msg.setSource(9141U);
    msg.setSourceEntity(50U);
    msg.setDestination(11972U);
    msg.setDestinationEntity(184U);
    msg.validity = 238U;
    msg.value = 0.590018306724;

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
    msg.setTimeStamp(0.762598809386);
    msg.setSource(30662U);
    msg.setSourceEntity(83U);
    msg.setDestination(38269U);
    msg.setDestinationEntity(254U);
    msg.value = 0.14458257741;

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
    msg.setTimeStamp(0.335661745345);
    msg.setSource(37223U);
    msg.setSourceEntity(154U);
    msg.setDestination(24292U);
    msg.setDestinationEntity(188U);
    msg.value = 0.0134108307113;

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
    msg.setTimeStamp(0.922454748742);
    msg.setSource(13941U);
    msg.setSourceEntity(6U);
    msg.setDestination(8814U);
    msg.setDestinationEntity(151U);
    msg.value = 0.541952034881;

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
    msg.setTimeStamp(0.646853106211);
    msg.setSource(9641U);
    msg.setSourceEntity(99U);
    msg.setDestination(302U);
    msg.setDestinationEntity(100U);
    msg.value = 0.190921831172;

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
    msg.setTimeStamp(0.879217059565);
    msg.setSource(42295U);
    msg.setSourceEntity(123U);
    msg.setDestination(18749U);
    msg.setDestinationEntity(117U);
    msg.value = 0.328527904522;

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
    msg.setTimeStamp(0.243091462964);
    msg.setSource(26178U);
    msg.setSourceEntity(181U);
    msg.setDestination(59536U);
    msg.setDestinationEntity(176U);
    msg.value = 0.0909420108536;

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
    msg.setTimeStamp(0.681945451442);
    msg.setSource(44422U);
    msg.setSourceEntity(244U);
    msg.setDestination(20267U);
    msg.setDestinationEntity(48U);
    msg.value = 0.548611253876;

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
    msg.setTimeStamp(0.0350519693855);
    msg.setSource(39702U);
    msg.setSourceEntity(156U);
    msg.setDestination(17577U);
    msg.setDestinationEntity(172U);
    msg.value = 0.966298482556;

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
    msg.setTimeStamp(0.602777626073);
    msg.setSource(51112U);
    msg.setSourceEntity(188U);
    msg.setDestination(3546U);
    msg.setDestinationEntity(108U);
    msg.value = 0.214965915212;

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
    msg.setTimeStamp(0.208101474896);
    msg.setSource(41020U);
    msg.setSourceEntity(219U);
    msg.setDestination(49285U);
    msg.setDestinationEntity(40U);
    msg.value = 0.291110556788;

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
    msg.setTimeStamp(0.264346005041);
    msg.setSource(6705U);
    msg.setSourceEntity(88U);
    msg.setDestination(26957U);
    msg.setDestinationEntity(110U);
    msg.value = 0.856853762448;

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
    msg.setTimeStamp(0.333665525335);
    msg.setSource(53440U);
    msg.setSourceEntity(103U);
    msg.setDestination(38399U);
    msg.setDestinationEntity(222U);
    msg.value = 0.800253420356;

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
    msg.setTimeStamp(0.897170780702);
    msg.setSource(18466U);
    msg.setSourceEntity(244U);
    msg.setDestination(33545U);
    msg.setDestinationEntity(160U);
    msg.value = 0.835640739411;

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
    msg.setTimeStamp(0.807348775654);
    msg.setSource(39545U);
    msg.setSourceEntity(57U);
    msg.setDestination(53448U);
    msg.setDestinationEntity(249U);
    msg.value = 0.0129876670106;

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
    msg.setTimeStamp(0.274785610378);
    msg.setSource(52944U);
    msg.setSourceEntity(22U);
    msg.setDestination(19483U);
    msg.setDestinationEntity(122U);
    msg.value = 0.536606019133;

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
    msg.setTimeStamp(0.121993071961);
    msg.setSource(35538U);
    msg.setSourceEntity(116U);
    msg.setDestination(25555U);
    msg.setDestinationEntity(86U);
    msg.value = 0.682425642927;

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
    msg.setTimeStamp(0.433109216324);
    msg.setSource(17780U);
    msg.setSourceEntity(97U);
    msg.setDestination(36651U);
    msg.setDestinationEntity(28U);
    msg.value = 0.826997117922;

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
    msg.setTimeStamp(0.279472438472);
    msg.setSource(40189U);
    msg.setSourceEntity(134U);
    msg.setDestination(43572U);
    msg.setDestinationEntity(49U);
    msg.value = 0.587175575793;

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
    msg.setTimeStamp(0.889510757105);
    msg.setSource(1753U);
    msg.setSourceEntity(79U);
    msg.setDestination(12086U);
    msg.setDestinationEntity(60U);
    msg.value = 0.63161660354;

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
    msg.setTimeStamp(0.0326753475228);
    msg.setSource(12316U);
    msg.setSourceEntity(58U);
    msg.setDestination(12179U);
    msg.setDestinationEntity(213U);
    msg.value = 0.30325828308;

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
    msg.setTimeStamp(0.171131067622);
    msg.setSource(46927U);
    msg.setSourceEntity(18U);
    msg.setDestination(17166U);
    msg.setDestinationEntity(157U);
    msg.value = 0.34443403117;

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
    msg.setTimeStamp(0.965386168331);
    msg.setSource(37921U);
    msg.setSourceEntity(155U);
    msg.setDestination(59920U);
    msg.setDestinationEntity(147U);
    msg.value = 0.299126356952;

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
    msg.setTimeStamp(0.170018665702);
    msg.setSource(55563U);
    msg.setSourceEntity(242U);
    msg.setDestination(26961U);
    msg.setDestinationEntity(94U);
    msg.value = 0.633436946745;

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
    msg.setTimeStamp(0.0468690430043);
    msg.setSource(61434U);
    msg.setSourceEntity(2U);
    msg.setDestination(41760U);
    msg.setDestinationEntity(19U);
    msg.value = 0.81347668918;

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
    msg.setTimeStamp(0.21808456474);
    msg.setSource(39906U);
    msg.setSourceEntity(224U);
    msg.setDestination(63988U);
    msg.setDestinationEntity(74U);
    msg.direction = 0.056015619867;
    msg.speed = 0.91244166659;
    msg.turbulence = 0.165183581995;

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
    msg.setTimeStamp(0.906417002797);
    msg.setSource(52354U);
    msg.setSourceEntity(236U);
    msg.setDestination(44854U);
    msg.setDestinationEntity(2U);
    msg.direction = 0.329876604455;
    msg.speed = 0.198894246854;
    msg.turbulence = 0.893115521332;

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
    msg.setTimeStamp(0.478429149744);
    msg.setSource(55491U);
    msg.setSourceEntity(105U);
    msg.setDestination(18281U);
    msg.setDestinationEntity(98U);
    msg.direction = 0.705484085817;
    msg.speed = 0.411190703501;
    msg.turbulence = 0.478583386872;

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
    msg.setTimeStamp(0.285400569444);
    msg.setSource(45104U);
    msg.setSourceEntity(119U);
    msg.setDestination(6235U);
    msg.setDestinationEntity(243U);
    msg.value = 0.949059228448;

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
    msg.setTimeStamp(0.366662103821);
    msg.setSource(34513U);
    msg.setSourceEntity(217U);
    msg.setDestination(61528U);
    msg.setDestinationEntity(170U);
    msg.value = 0.425485898383;

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
    msg.setTimeStamp(0.763881157531);
    msg.setSource(34933U);
    msg.setSourceEntity(144U);
    msg.setDestination(35060U);
    msg.setDestinationEntity(67U);
    msg.value = 0.439071745579;

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
    msg.setTimeStamp(0.617913905886);
    msg.setSource(29589U);
    msg.setSourceEntity(114U);
    msg.setDestination(40599U);
    msg.setDestinationEntity(228U);
    msg.value.assign("DSJYWLQSIBDONONOFXCUZAHMOPZANHOATGGJPFGSGYCTQKLWTRURZDZOXNIZNISNEOVKVSHJPWCLIQSYFENPUAIHQMXYC");

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
    msg.setTimeStamp(0.492854656418);
    msg.setSource(47105U);
    msg.setSourceEntity(151U);
    msg.setDestination(57055U);
    msg.setDestinationEntity(236U);
    msg.value.assign("ZBYQXGQFKLHQTUMWTMTBWSYWZHJXBUQSHHOMJWZCC");

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
    msg.setTimeStamp(0.0100471966639);
    msg.setSource(20167U);
    msg.setSourceEntity(26U);
    msg.setDestination(31735U);
    msg.setDestinationEntity(217U);
    msg.value.assign("HHHLAUJWXCAQPHOLAPOQUWQMSQVMSSNWBSIKYMFAQPEMTZHLBXIPLIBRJQZWJONNGFGTXOZRYCMXYXGSZXCLDWEVMPRGNVSBKYUXDKQSYAVQFOAZDNVKHIMDJIEDCLNPSIOFEVAPFLTLXZDEEMJFVHOPCELDYAC");

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
    msg.setTimeStamp(0.111589405338);
    msg.setSource(61143U);
    msg.setSourceEntity(254U);
    msg.setDestination(43492U);
    msg.setDestinationEntity(247U);
    const char tmp_msg_0[] = {36, 36, 24, 12, -1, 25, 100, -107, -31, 65, 76, 10, 114, 26, 58, 123, 33, -45, -36, -64, 121, 30, 25, -118, -79, 41, -53, -59, 104, -13, -48, 90, -18, 40, 4, -37, -41, 86, 18, 54, 76, 2, 9, -4, -90, -59, 12, 125, -29, 116, 115, -15, 72, -2, -106, 14, -25, 101, 29, 75, -91, -77, 69, 126, 122, 57, 76, -83, 63, 70, 34, 41, 109, 123, -5, 83, -65, -113, 35, -76, -47, 88, -87, -38, -81, -121, 57, 123, -21, -114, -90, 81, 102, -61, -101, 35, 60, -32, -84, -114, 11, 94, 56, 123, -19, -120, -11, -61, -88, 21, 58, 87, 86, 81, -37, 114, -74, 71, -20, -40, -93, -68, -77, 29, -74, -70, 23, 103, 123, 108, -10, 97, 69, 4, 118, -105, 56, 84, -29, -45, 115, -82, -95, 11, -5, 83, 66, 30, 24, 34};
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
    msg.setTimeStamp(0.367487378571);
    msg.setSource(26496U);
    msg.setSourceEntity(155U);
    msg.setDestination(13542U);
    msg.setDestinationEntity(112U);
    const char tmp_msg_0[] = {-79, 104, -21, -73, 6, -6, -87, -21, -84, -66, 77, 102, -61, 62, -82, 101, 125, -11, -93, -123, 72, 62, -111, -24, 95, 70, 103, -55, 18, -33, 70, 108, 126, -108, -62, -100, 31, -101, -118, -13, -85, -47, -40, -36, -119, 38, 97, -38, -62, -111, 125, 110, 92, -59, -110, 93, 28, 39, 51, 16, -71, -95, 68, -44, 0, -67, 107, -78, 71, -50, -124, -100, -110, 100, 86, 1, -126, 17, 8, 37, -84, -55, -93, 101, 118, 46, -20, 99, 108, 67, 16, -35, 70, -111, -66, 44, 25, -25, 32, 57, -108, 0, -33, 7, -104, 77, -98, -114, 67, -30, 33, 42, 18, -41, 17, -65, 83, -52, -112, -106, -61, 90, 88, 110, -24, -50, 7, -21, 26, 105, -92, 109, -114, -39, 110, -15, 61, 84, 115, -116, 64, 83, -112, 67, 17, -38, 9, 22, -57, 43, 13, 81, -126};
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
    msg.setTimeStamp(0.0840842353389);
    msg.setSource(62336U);
    msg.setSourceEntity(3U);
    msg.setDestination(48778U);
    msg.setDestinationEntity(16U);
    const char tmp_msg_0[] = {5, 28, -8, -32, -92, 4, 36, -39, -71, -98, 66, -116, 109, 106, 118, 119, 77, 69, -117, -77, -56, -121, 105, 115, 109, 71, -51, -28, -7, 30, 4, -98, -104, 1, -103, 17, 40, -7, 96, 105, 6, 9, 105, 114, 52, 80, -121, -18, -40, -106, 19, -125, -121, -107, 98, 69, 13, 100, -54, -65, 118, -119, 86, -5, -102, 47, -43, -93, 59, -12, -125, -64, 91, 84, 79, 74, 18, -106};
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
    msg.setTimeStamp(0.910973841212);
    msg.setSource(2866U);
    msg.setSourceEntity(64U);
    msg.setDestination(61745U);
    msg.setDestinationEntity(217U);
    msg.value = 0.331661352103;

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
    msg.setTimeStamp(0.26847822842);
    msg.setSource(42157U);
    msg.setSourceEntity(223U);
    msg.setDestination(62708U);
    msg.setDestinationEntity(121U);
    msg.value = 0.759829114738;

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
    msg.setTimeStamp(0.71531056356);
    msg.setSource(46022U);
    msg.setSourceEntity(131U);
    msg.setDestination(36812U);
    msg.setDestinationEntity(31U);
    msg.value = 0.824116638664;

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
    msg.setTimeStamp(0.15569657194);
    msg.setSource(52643U);
    msg.setSourceEntity(191U);
    msg.setDestination(36908U);
    msg.setDestinationEntity(142U);
    msg.type = 27U;
    msg.frequency = 548841069U;
    msg.min_range = 4400U;
    msg.max_range = 16766U;
    msg.bits_per_point = 49U;
    msg.scale_factor = 0.21758970053;
    const char tmp_msg_0[] = {-68, -59, -58, -92, -68, -109, 29, -18, -37, -109, 13, 6, -55, -86, -15, -111, 119, 59, -113, -100, 114, -12, -107, 28, 87, 81, -121, -116, 118, 75, -52, 33, 71, 2, 126, -43, -46, 36, 66, 23, -120, 98, -13, -95, -73, -40, 46, -77, -73, -24, -32, 1, 81, 105, 95, 94, 58, 120, 28, -10, -42, 43, -77, -112, 91, -6, -36, -30, -76, -47, 55, -30, 114, 27, -45, -46, -9, -66, -84, -103, -105, 39, -22, 53, 108, -102, -34, -79, -94, 5, -106, 63, -47, -123, 90, -15, 17, -38, -40, -96, -6, 46, 98, -31, 120, -14};
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
    msg.setTimeStamp(0.921012749058);
    msg.setSource(22305U);
    msg.setSourceEntity(41U);
    msg.setDestination(25664U);
    msg.setDestinationEntity(141U);
    msg.type = 80U;
    msg.frequency = 3444876631U;
    msg.min_range = 60207U;
    msg.max_range = 21008U;
    msg.bits_per_point = 184U;
    msg.scale_factor = 0.0425561863396;
    const char tmp_msg_0[] = {-120, 69, -62, 79, -35, 111, 119, 121, 94, -20, 40, -70, -104, 76, 64, 2, 56, -97, 30, -1, -32, -81, -27};
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
    msg.setTimeStamp(0.324155391432);
    msg.setSource(4258U);
    msg.setSourceEntity(104U);
    msg.setDestination(24308U);
    msg.setDestinationEntity(133U);
    msg.type = 74U;
    msg.frequency = 250551123U;
    msg.min_range = 27484U;
    msg.max_range = 17609U;
    msg.bits_per_point = 253U;
    msg.scale_factor = 0.628069206518;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.652438449131;
    tmp_msg_0.beam_height = 0.576716130827;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-110, -42, 93, -119, 58, -22, 6, -16, 29, 23, 122, -24, 61, -120, 5, 25, -98, -1, 17, 122, 114, 110, -31, 78, -34, 4, 78, 20, -81, -103, 87, -103, -127, 23, -85, -13, 50, 11, 33, -107, 125, 12, 41, -69, 52, 59, -122, 126, -75, 98, 70, 99, -95, -19, 52, 126, -57, 4, -88, -14, -56, 59, 94, -100, -66, -32, 124, 8, 37, -56, -110, 11, -84, -67, 101, -38, -44, 81, -102, 86, 52, 66, -50, 10, 58, 89, -13, -48, -123, 71, 35, 104, -13, 54, 19, 16, 88, -9, 51, 10, -40, -49, -74, 126, 56, -13, 82, 81, 85, -122, 10, -78, -78, -16, 57, -121, 38, -95, -112, -81, 15, 28, 16, 100, -39, 59, 98, 38, -30, -31, 94, 112, -53, -56, -58, -91, 17, -96, 20, 55};
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
    msg.setTimeStamp(0.207945246058);
    msg.setSource(64359U);
    msg.setSourceEntity(252U);
    msg.setDestination(60591U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.152823124537);
    msg.setSource(15271U);
    msg.setSourceEntity(225U);
    msg.setDestination(57733U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.496634471276);
    msg.setSource(45115U);
    msg.setSourceEntity(158U);
    msg.setDestination(25393U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.610156959143);
    msg.setSource(59490U);
    msg.setSourceEntity(54U);
    msg.setDestination(52289U);
    msg.setDestinationEntity(10U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.504731434215);
    msg.setSource(19953U);
    msg.setSourceEntity(170U);
    msg.setDestination(60857U);
    msg.setDestinationEntity(67U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.759436797289);
    msg.setSource(21805U);
    msg.setSourceEntity(101U);
    msg.setDestination(42598U);
    msg.setDestinationEntity(71U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.857008332506);
    msg.setSource(30791U);
    msg.setSourceEntity(126U);
    msg.setDestination(58085U);
    msg.setDestinationEntity(105U);
    msg.value = 0.42527433429;
    msg.confidence = 0.940552554971;
    msg.opmodes.assign("ZAOIQTIALZOKSJISVIFUTMZWLHHQGURYNJGMPCBICWHRAXBZHYDQQSYRFFGKVWCVGKVQTNUWCIMVCDAAUYOBFNPOWDDNUNOBLWRRZAEXPTXWRUWAWVBJTQERXXZNJOEEYDPEKDCKFUYHVZSGMBJLJAHTNGDYSEZEMSMSXRXRPBVGOSDQZLYAPUCYLQHELVYF");

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
    msg.setTimeStamp(0.928943392143);
    msg.setSource(44986U);
    msg.setSourceEntity(228U);
    msg.setDestination(6039U);
    msg.setDestinationEntity(124U);
    msg.value = 0.401950603561;
    msg.confidence = 0.000480648207059;
    msg.opmodes.assign("SOITNSEVAREBXVYSSYULZENCILUARIKNVOMWZDNPVYZRWFATRPXAWLNETEUKSCDEPJJGJZZNPTXJEYBCIUKXFSFVCEOJATVOMMPMPECMWNOJWSRLIHBX");

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
    msg.setTimeStamp(0.397898361633);
    msg.setSource(14101U);
    msg.setSourceEntity(108U);
    msg.setDestination(18222U);
    msg.setDestinationEntity(47U);
    msg.value = 0.0770729630031;
    msg.confidence = 0.771614824305;
    msg.opmodes.assign("GJKOKEPQUSBTFPSGWSNABQOHNJMMIDWEBOBXQSDWIPIDATVOHWERFT");

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
    msg.setTimeStamp(0.163082243393);
    msg.setSource(21949U);
    msg.setSourceEntity(161U);
    msg.setDestination(5951U);
    msg.setDestinationEntity(120U);
    msg.itow = 4243543339U;
    msg.lat = 0.889733108873;
    msg.lon = 0.769710359537;
    msg.height_ell = 0.0616786393215;
    msg.height_sea = 0.150135316497;
    msg.hacc = 0.942068342463;
    msg.vacc = 0.618280240855;
    msg.vel_n = 0.667069027489;
    msg.vel_e = 0.434651800775;
    msg.vel_d = 0.837475302608;
    msg.speed = 0.598819959107;
    msg.gspeed = 0.175008899529;
    msg.heading = 0.711692753584;
    msg.sacc = 0.429031417653;
    msg.cacc = 0.715674248768;

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
    msg.setTimeStamp(0.0957673587508);
    msg.setSource(58457U);
    msg.setSourceEntity(37U);
    msg.setDestination(11770U);
    msg.setDestinationEntity(98U);
    msg.itow = 2045932978U;
    msg.lat = 0.113029857587;
    msg.lon = 0.572148903512;
    msg.height_ell = 0.439078307786;
    msg.height_sea = 0.780455028659;
    msg.hacc = 0.173941849797;
    msg.vacc = 0.191441259797;
    msg.vel_n = 0.0742192531236;
    msg.vel_e = 0.188863406823;
    msg.vel_d = 0.482409578701;
    msg.speed = 0.691946762274;
    msg.gspeed = 0.0907482840546;
    msg.heading = 0.256997538412;
    msg.sacc = 0.794120177383;
    msg.cacc = 0.881828631878;

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
    msg.setTimeStamp(0.452889169351);
    msg.setSource(8551U);
    msg.setSourceEntity(254U);
    msg.setDestination(8542U);
    msg.setDestinationEntity(23U);
    msg.itow = 3047420992U;
    msg.lat = 0.779179872102;
    msg.lon = 0.416341927581;
    msg.height_ell = 0.841022342964;
    msg.height_sea = 0.569601776477;
    msg.hacc = 0.925795331998;
    msg.vacc = 0.636421290961;
    msg.vel_n = 0.356600118637;
    msg.vel_e = 0.480027856383;
    msg.vel_d = 0.833512332493;
    msg.speed = 0.6221805422;
    msg.gspeed = 0.245320849721;
    msg.heading = 0.435136303328;
    msg.sacc = 0.0537324377318;
    msg.cacc = 0.749592152736;

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
    msg.setTimeStamp(0.787362125794);
    msg.setSource(38125U);
    msg.setSourceEntity(164U);
    msg.setDestination(61387U);
    msg.setDestinationEntity(8U);
    msg.id = 211U;
    msg.value = 0.565526043868;

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
    msg.setTimeStamp(0.18613893579);
    msg.setSource(8317U);
    msg.setSourceEntity(91U);
    msg.setDestination(15286U);
    msg.setDestinationEntity(5U);
    msg.id = 29U;
    msg.value = 0.899442224397;

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
    msg.setTimeStamp(0.934620570899);
    msg.setSource(63509U);
    msg.setSourceEntity(123U);
    msg.setDestination(9268U);
    msg.setDestinationEntity(84U);
    msg.id = 182U;
    msg.value = 0.377603613575;

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
    msg.setTimeStamp(0.588462392261);
    msg.setSource(22606U);
    msg.setSourceEntity(150U);
    msg.setDestination(57402U);
    msg.setDestinationEntity(198U);
    msg.x = 0.749179683373;
    msg.y = 0.451501724824;
    msg.z = 0.394500889421;
    msg.phi = 0.490060534423;
    msg.theta = 0.61993831093;
    msg.psi = 0.385510146549;

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
    msg.setTimeStamp(0.508966102064);
    msg.setSource(1860U);
    msg.setSourceEntity(120U);
    msg.setDestination(60215U);
    msg.setDestinationEntity(23U);
    msg.x = 0.986777582477;
    msg.y = 0.552013964213;
    msg.z = 0.996917401637;
    msg.phi = 0.521961759568;
    msg.theta = 0.00979915703976;
    msg.psi = 0.506407213775;

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
    msg.setTimeStamp(0.227948259256);
    msg.setSource(21918U);
    msg.setSourceEntity(134U);
    msg.setDestination(42161U);
    msg.setDestinationEntity(210U);
    msg.x = 0.698491911816;
    msg.y = 0.117292520211;
    msg.z = 0.260389854062;
    msg.phi = 0.267699645836;
    msg.theta = 0.971418506937;
    msg.psi = 0.834502760974;

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
    msg.setTimeStamp(0.976787952083);
    msg.setSource(17698U);
    msg.setSourceEntity(166U);
    msg.setDestination(35642U);
    msg.setDestinationEntity(16U);
    msg.beam_width = 0.378308936319;
    msg.beam_height = 0.155621310499;

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
    msg.setTimeStamp(0.828665679879);
    msg.setSource(58177U);
    msg.setSourceEntity(200U);
    msg.setDestination(36362U);
    msg.setDestinationEntity(196U);
    msg.beam_width = 0.613093689613;
    msg.beam_height = 0.40611472533;

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
    msg.setTimeStamp(0.487999116715);
    msg.setSource(7316U);
    msg.setSourceEntity(133U);
    msg.setDestination(28855U);
    msg.setDestinationEntity(150U);
    msg.beam_width = 0.642257096665;
    msg.beam_height = 0.065153053158;

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
    msg.setTimeStamp(0.571345154069);
    msg.setSource(33643U);
    msg.setSourceEntity(153U);
    msg.setDestination(864U);
    msg.setDestinationEntity(254U);
    msg.sane = 58U;

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
    msg.setTimeStamp(0.0939273313241);
    msg.setSource(58441U);
    msg.setSourceEntity(123U);
    msg.setDestination(14835U);
    msg.setDestinationEntity(141U);
    msg.sane = 123U;

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
    msg.setTimeStamp(0.181486858738);
    msg.setSource(15908U);
    msg.setSourceEntity(62U);
    msg.setDestination(57897U);
    msg.setDestinationEntity(194U);
    msg.sane = 163U;

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
    msg.setTimeStamp(0.0848193635385);
    msg.setSource(60967U);
    msg.setSourceEntity(21U);
    msg.setDestination(57167U);
    msg.setDestinationEntity(184U);
    msg.value = 0.178224891817;

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
    msg.setTimeStamp(0.79135477696);
    msg.setSource(27458U);
    msg.setSourceEntity(156U);
    msg.setDestination(39351U);
    msg.setDestinationEntity(11U);
    msg.value = 0.468726029509;

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
    msg.setTimeStamp(0.75273255703);
    msg.setSource(37228U);
    msg.setSourceEntity(81U);
    msg.setDestination(33807U);
    msg.setDestinationEntity(87U);
    msg.value = 0.169001644114;

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
    msg.setTimeStamp(0.470040701883);
    msg.setSource(47019U);
    msg.setSourceEntity(138U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(154U);
    msg.value = 0.446770206753;

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
    msg.setTimeStamp(0.949096392702);
    msg.setSource(51354U);
    msg.setSourceEntity(52U);
    msg.setDestination(20736U);
    msg.setDestinationEntity(207U);
    msg.value = 0.206429585888;

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
    msg.setTimeStamp(0.0381812709406);
    msg.setSource(47690U);
    msg.setSourceEntity(173U);
    msg.setDestination(48324U);
    msg.setDestinationEntity(0U);
    msg.value = 0.0942108257877;

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
    msg.setTimeStamp(0.14446244829);
    msg.setSource(44990U);
    msg.setSourceEntity(58U);
    msg.setDestination(59490U);
    msg.setDestinationEntity(222U);
    msg.value = 0.266969180087;

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
    msg.setTimeStamp(0.917910321898);
    msg.setSource(1090U);
    msg.setSourceEntity(146U);
    msg.setDestination(34891U);
    msg.setDestinationEntity(242U);
    msg.value = 0.235672827023;

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
    msg.setTimeStamp(0.155546858779);
    msg.setSource(38170U);
    msg.setSourceEntity(192U);
    msg.setDestination(1433U);
    msg.setDestinationEntity(85U);
    msg.value = 0.595732685354;

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
    msg.setTimeStamp(0.990048572481);
    msg.setSource(9734U);
    msg.setSourceEntity(245U);
    msg.setDestination(15344U);
    msg.setDestinationEntity(58U);
    msg.value = 0.936430222998;

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
    msg.setTimeStamp(0.6054448064);
    msg.setSource(53121U);
    msg.setSourceEntity(167U);
    msg.setDestination(7774U);
    msg.setDestinationEntity(14U);
    msg.value = 0.857961117644;

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
    msg.setTimeStamp(0.473762654167);
    msg.setSource(6454U);
    msg.setSourceEntity(244U);
    msg.setDestination(35150U);
    msg.setDestinationEntity(112U);
    msg.value = 0.525970677943;

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
    msg.setTimeStamp(0.879782733873);
    msg.setSource(50099U);
    msg.setSourceEntity(239U);
    msg.setDestination(15986U);
    msg.setDestinationEntity(93U);
    msg.value = 0.448016496362;

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
    msg.setTimeStamp(0.0966084579765);
    msg.setSource(14534U);
    msg.setSourceEntity(39U);
    msg.setDestination(10987U);
    msg.setDestinationEntity(61U);
    msg.value = 0.367608526264;

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
    msg.setTimeStamp(0.437353999854);
    msg.setSource(22466U);
    msg.setSourceEntity(156U);
    msg.setDestination(42541U);
    msg.setDestinationEntity(10U);
    msg.value = 0.28602235575;

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
    msg.setTimeStamp(0.0244856798176);
    msg.setSource(33549U);
    msg.setSourceEntity(192U);
    msg.setDestination(24293U);
    msg.setDestinationEntity(46U);
    msg.value = 0.530163190077;

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
    msg.setTimeStamp(0.156824262094);
    msg.setSource(20711U);
    msg.setSourceEntity(2U);
    msg.setDestination(34695U);
    msg.setDestinationEntity(113U);
    msg.value = 0.157409118541;

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
    msg.setTimeStamp(0.115847433374);
    msg.setSource(45161U);
    msg.setSourceEntity(148U);
    msg.setDestination(51693U);
    msg.setDestinationEntity(171U);
    msg.value = 0.77636270824;

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
    msg.setTimeStamp(0.82638288107);
    msg.setSource(49850U);
    msg.setSourceEntity(146U);
    msg.setDestination(34404U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0559615162639;

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
    msg.setTimeStamp(0.374314045219);
    msg.setSource(15149U);
    msg.setSourceEntity(166U);
    msg.setDestination(25368U);
    msg.setDestinationEntity(210U);
    msg.value = 0.118433800961;

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
    msg.setTimeStamp(0.136940056012);
    msg.setSource(25474U);
    msg.setSourceEntity(127U);
    msg.setDestination(49822U);
    msg.setDestinationEntity(120U);
    msg.value = 0.79584658711;

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
    msg.setTimeStamp(0.819599260731);
    msg.setSource(12850U);
    msg.setSourceEntity(150U);
    msg.setDestination(60666U);
    msg.setDestinationEntity(13U);
    msg.value = 0.816529038183;

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
    msg.setTimeStamp(0.934003670548);
    msg.setSource(53925U);
    msg.setSourceEntity(171U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(15U);
    msg.value = 0.342307752918;

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
    msg.setTimeStamp(0.561312822562);
    msg.setSource(15846U);
    msg.setSourceEntity(158U);
    msg.setDestination(29932U);
    msg.setDestinationEntity(50U);
    msg.value = 0.225385012613;

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
    msg.setTimeStamp(0.228638837644);
    msg.setSource(56682U);
    msg.setSourceEntity(206U);
    msg.setDestination(39031U);
    msg.setDestinationEntity(104U);
    msg.validity = 49810U;
    msg.type = 183U;
    msg.tow = 2241556609U;
    msg.base_lat = 0.860246004292;
    msg.base_lon = 0.700744630872;
    msg.base_height = 0.747117061101;
    msg.n = 0.635670735633;
    msg.e = 0.861539577004;
    msg.d = 0.747042180038;
    msg.v_n = 0.607743577972;
    msg.v_e = 0.629068242661;
    msg.v_d = 0.413081918305;
    msg.satellites = 21U;
    msg.iar_hyp = 23646U;
    msg.iar_ratio = 0.186147297219;

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
    msg.setTimeStamp(0.255837696475);
    msg.setSource(41933U);
    msg.setSourceEntity(11U);
    msg.setDestination(1900U);
    msg.setDestinationEntity(117U);
    msg.validity = 30492U;
    msg.type = 156U;
    msg.tow = 3047416245U;
    msg.base_lat = 0.0237435565974;
    msg.base_lon = 0.473224736174;
    msg.base_height = 0.406596675762;
    msg.n = 0.53281559087;
    msg.e = 0.693014199201;
    msg.d = 0.689880139475;
    msg.v_n = 0.36654447826;
    msg.v_e = 0.66269339637;
    msg.v_d = 0.564715795758;
    msg.satellites = 33U;
    msg.iar_hyp = 4359U;
    msg.iar_ratio = 0.725525699744;

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
    msg.setTimeStamp(0.26647403238);
    msg.setSource(35871U);
    msg.setSourceEntity(56U);
    msg.setDestination(53399U);
    msg.setDestinationEntity(200U);
    msg.validity = 65019U;
    msg.type = 32U;
    msg.tow = 1712672928U;
    msg.base_lat = 0.0858223945017;
    msg.base_lon = 0.268610057115;
    msg.base_height = 0.269390557148;
    msg.n = 0.271710009368;
    msg.e = 0.117545712272;
    msg.d = 0.360100406735;
    msg.v_n = 0.474925633081;
    msg.v_e = 0.71266101363;
    msg.v_d = 0.610566291422;
    msg.satellites = 125U;
    msg.iar_hyp = 20301U;
    msg.iar_ratio = 0.731966632862;

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
    msg.setTimeStamp(0.469790939652);
    msg.setSource(20920U);
    msg.setSourceEntity(28U);
    msg.setDestination(22956U);
    msg.setDestinationEntity(64U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.575814011609;
    tmp_msg_0.lon = 0.446799156234;
    tmp_msg_0.height = 0.691541337776;
    tmp_msg_0.x = 0.595700839747;
    tmp_msg_0.y = 0.523751183577;
    tmp_msg_0.z = 0.242647130271;
    tmp_msg_0.phi = 0.337956633556;
    tmp_msg_0.theta = 0.196769000302;
    tmp_msg_0.psi = 0.0703867812632;
    tmp_msg_0.u = 0.124760911166;
    tmp_msg_0.v = 0.672306785925;
    tmp_msg_0.w = 0.969048994642;
    tmp_msg_0.vx = 0.318152391246;
    tmp_msg_0.vy = 0.521614143135;
    tmp_msg_0.vz = 0.279612000542;
    tmp_msg_0.p = 0.427269036072;
    tmp_msg_0.q = 0.796425092232;
    tmp_msg_0.r = 0.272775636107;
    tmp_msg_0.depth = 0.99042719795;
    tmp_msg_0.alt = 0.0171567015679;
    msg.state.set(tmp_msg_0);
    msg.type = 3U;

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
    msg.setTimeStamp(0.593691159614);
    msg.setSource(36743U);
    msg.setSourceEntity(231U);
    msg.setDestination(24127U);
    msg.setDestinationEntity(137U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.344278796479;
    tmp_msg_0.lon = 0.895144331381;
    tmp_msg_0.height = 0.762774334654;
    tmp_msg_0.x = 0.854586369034;
    tmp_msg_0.y = 0.268214762774;
    tmp_msg_0.z = 0.290020119018;
    tmp_msg_0.phi = 0.928269387385;
    tmp_msg_0.theta = 0.971336951802;
    tmp_msg_0.psi = 0.532512658965;
    tmp_msg_0.u = 0.792993748626;
    tmp_msg_0.v = 0.00927046681376;
    tmp_msg_0.w = 0.187914804991;
    tmp_msg_0.vx = 0.424743144606;
    tmp_msg_0.vy = 0.445230073094;
    tmp_msg_0.vz = 0.127829312412;
    tmp_msg_0.p = 0.322550025615;
    tmp_msg_0.q = 0.754975930898;
    tmp_msg_0.r = 0.363187989808;
    tmp_msg_0.depth = 0.557808466723;
    tmp_msg_0.alt = 0.766204673223;
    msg.state.set(tmp_msg_0);
    msg.type = 225U;

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
    msg.setTimeStamp(0.38600109112);
    msg.setSource(46209U);
    msg.setSourceEntity(196U);
    msg.setDestination(20646U);
    msg.setDestinationEntity(96U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.338761076758;
    tmp_msg_0.lon = 0.51053763124;
    tmp_msg_0.height = 0.623266723015;
    tmp_msg_0.x = 0.0525684517043;
    tmp_msg_0.y = 0.7888752527;
    tmp_msg_0.z = 0.0680453691842;
    tmp_msg_0.phi = 0.0115343301604;
    tmp_msg_0.theta = 0.61620402394;
    tmp_msg_0.psi = 0.738636546734;
    tmp_msg_0.u = 0.689498479915;
    tmp_msg_0.v = 0.454785430196;
    tmp_msg_0.w = 0.918447906599;
    tmp_msg_0.vx = 0.498770548373;
    tmp_msg_0.vy = 0.44378759061;
    tmp_msg_0.vz = 0.206085173548;
    tmp_msg_0.p = 0.0919609223156;
    tmp_msg_0.q = 0.754117606803;
    tmp_msg_0.r = 0.85927175374;
    tmp_msg_0.depth = 0.728112762408;
    tmp_msg_0.alt = 0.640314719211;
    msg.state.set(tmp_msg_0);
    msg.type = 52U;

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
    msg.setTimeStamp(0.0208328915548);
    msg.setSource(12991U);
    msg.setSourceEntity(212U);
    msg.setDestination(31797U);
    msg.setDestinationEntity(111U);
    msg.value = 0.0201129094362;

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
    msg.setTimeStamp(0.677168540077);
    msg.setSource(24422U);
    msg.setSourceEntity(168U);
    msg.setDestination(46464U);
    msg.setDestinationEntity(30U);
    msg.value = 0.0195665551693;

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
    msg.setTimeStamp(0.919293223059);
    msg.setSource(54074U);
    msg.setSourceEntity(230U);
    msg.setDestination(22042U);
    msg.setDestinationEntity(110U);
    msg.value = 0.12520388713;

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
    msg.setTimeStamp(0.105781537373);
    msg.setSource(36461U);
    msg.setSourceEntity(224U);
    msg.setDestination(2238U);
    msg.setDestinationEntity(18U);
    msg.value = 0.561859579061;

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
    msg.setTimeStamp(0.835843145565);
    msg.setSource(28194U);
    msg.setSourceEntity(214U);
    msg.setDestination(12881U);
    msg.setDestinationEntity(87U);
    msg.value = 0.389592531539;

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
    msg.setTimeStamp(0.504541928606);
    msg.setSource(25779U);
    msg.setSourceEntity(36U);
    msg.setDestination(45998U);
    msg.setDestinationEntity(198U);
    msg.value = 0.0586920779881;

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
    msg.setTimeStamp(0.804635914464);
    msg.setSource(136U);
    msg.setSourceEntity(37U);
    msg.setDestination(27447U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0502106151872;

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
    msg.setTimeStamp(0.914362119841);
    msg.setSource(55678U);
    msg.setSourceEntity(112U);
    msg.setDestination(58867U);
    msg.setDestinationEntity(152U);
    msg.value = 0.571925420064;

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
    msg.setTimeStamp(0.443747413759);
    msg.setSource(35468U);
    msg.setSourceEntity(194U);
    msg.setDestination(10780U);
    msg.setDestinationEntity(25U);
    msg.value = 0.666754030772;

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
    msg.setTimeStamp(0.534015229584);
    msg.setSource(17669U);
    msg.setSourceEntity(117U);
    msg.setDestination(6901U);
    msg.setDestinationEntity(144U);
    msg.value = 0.376809354918;

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
    msg.setTimeStamp(0.0918966418214);
    msg.setSource(52034U);
    msg.setSourceEntity(171U);
    msg.setDestination(7741U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0304889178043;

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
    msg.setTimeStamp(0.825584079773);
    msg.setSource(22492U);
    msg.setSourceEntity(171U);
    msg.setDestination(24525U);
    msg.setDestinationEntity(64U);
    msg.value = 0.24403683338;

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
    msg.setTimeStamp(0.154414177528);
    msg.setSource(30670U);
    msg.setSourceEntity(105U);
    msg.setDestination(12024U);
    msg.setDestinationEntity(148U);
    msg.value = 0.785851278519;

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
    msg.setTimeStamp(0.439866984728);
    msg.setSource(51456U);
    msg.setSourceEntity(165U);
    msg.setDestination(49478U);
    msg.setDestinationEntity(169U);
    msg.value = 0.748435735517;

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
    msg.setTimeStamp(0.885043520058);
    msg.setSource(15918U);
    msg.setSourceEntity(237U);
    msg.setDestination(44793U);
    msg.setDestinationEntity(178U);
    msg.value = 0.164158062073;

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
    msg.setTimeStamp(0.403725243737);
    msg.setSource(42972U);
    msg.setSourceEntity(191U);
    msg.setDestination(46879U);
    msg.setDestinationEntity(176U);
    msg.id = 166U;
    msg.zoom = 190U;
    msg.action = 183U;

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
    msg.setTimeStamp(0.402410698677);
    msg.setSource(5567U);
    msg.setSourceEntity(46U);
    msg.setDestination(50585U);
    msg.setDestinationEntity(114U);
    msg.id = 89U;
    msg.zoom = 115U;
    msg.action = 67U;

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
    msg.setTimeStamp(0.681123822262);
    msg.setSource(1807U);
    msg.setSourceEntity(47U);
    msg.setDestination(17742U);
    msg.setDestinationEntity(67U);
    msg.id = 76U;
    msg.zoom = 248U;
    msg.action = 251U;

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
    msg.setTimeStamp(0.101078713226);
    msg.setSource(54861U);
    msg.setSourceEntity(164U);
    msg.setDestination(10291U);
    msg.setDestinationEntity(134U);
    msg.id = 137U;
    msg.value = 0.144715472033;

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
    msg.setTimeStamp(0.900707481659);
    msg.setSource(16978U);
    msg.setSourceEntity(170U);
    msg.setDestination(33046U);
    msg.setDestinationEntity(188U);
    msg.id = 16U;
    msg.value = 0.960441605318;

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
    msg.setTimeStamp(0.39731523715);
    msg.setSource(23913U);
    msg.setSourceEntity(217U);
    msg.setDestination(713U);
    msg.setDestinationEntity(113U);
    msg.id = 81U;
    msg.value = 0.609150462694;

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
    msg.setTimeStamp(0.853369323018);
    msg.setSource(6485U);
    msg.setSourceEntity(229U);
    msg.setDestination(36698U);
    msg.setDestinationEntity(41U);
    msg.id = 203U;
    msg.value = 0.433199668201;

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
    msg.setTimeStamp(0.268703682743);
    msg.setSource(27178U);
    msg.setSourceEntity(126U);
    msg.setDestination(2961U);
    msg.setDestinationEntity(222U);
    msg.id = 54U;
    msg.value = 0.532973902341;

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
    msg.setTimeStamp(0.232018585951);
    msg.setSource(8567U);
    msg.setSourceEntity(147U);
    msg.setDestination(38650U);
    msg.setDestinationEntity(194U);
    msg.id = 244U;
    msg.value = 0.526669863743;

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
    msg.setTimeStamp(0.779620625705);
    msg.setSource(4028U);
    msg.setSourceEntity(29U);
    msg.setDestination(15082U);
    msg.setDestinationEntity(199U);
    msg.id = 53U;
    msg.angle = 0.0373295674002;

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
    msg.setTimeStamp(0.436023399759);
    msg.setSource(58501U);
    msg.setSourceEntity(25U);
    msg.setDestination(8550U);
    msg.setDestinationEntity(113U);
    msg.id = 32U;
    msg.angle = 0.351667915704;

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
    msg.setTimeStamp(0.717004455917);
    msg.setSource(7452U);
    msg.setSourceEntity(28U);
    msg.setDestination(4997U);
    msg.setDestinationEntity(173U);
    msg.id = 179U;
    msg.angle = 0.799134074861;

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
    msg.setTimeStamp(0.100162104759);
    msg.setSource(24567U);
    msg.setSourceEntity(137U);
    msg.setDestination(20468U);
    msg.setDestinationEntity(138U);
    msg.op = 48U;
    msg.actions.assign("RLARKJTJJVSVTZFWZXGAJHQWCTMCJNXCVFKRGAPSQVHYIQHDYKAIHTXXDDYKQHMHZPESUZKBGCFVJDIZAFEBIGESGVFGUJRQWEHNZBDYOIUYBUXYZWREELMOLGXALBTBQUUPUDDGSCINMHUPPHNLKSIWRXQOTWBVTACFPKSNRMUOVXWJDSKOSLLYFBMOZNNOBQTHCOLMMKXM");

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
    msg.setTimeStamp(0.524949925875);
    msg.setSource(5149U);
    msg.setSourceEntity(98U);
    msg.setDestination(24842U);
    msg.setDestinationEntity(90U);
    msg.op = 124U;
    msg.actions.assign("HIBXFQZJAGOQBVJUUWZEPVSSYOTBJDCRTPUJHTQQMTGUWJAVFHXQQDRRYSTI");

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
    msg.setTimeStamp(0.64785554875);
    msg.setSource(22623U);
    msg.setSourceEntity(149U);
    msg.setDestination(6661U);
    msg.setDestinationEntity(189U);
    msg.op = 11U;
    msg.actions.assign("VKBYTCSCLXHZCTYOLSWIILQFORXSUGVEBXJDOWUUKLKBMDAPJYNAKOVBGAGBMDSLHYBXGBFUFMMCZJZLSHDFTJNVTAZHSZQQGWXPEUDGUIKSPRDXQUTRMNVTVCHKBBDVITIJKEOMCOIUMDPBXOIVHRJWCFWCDGYLWRYFPIPFAHKEEONCAYFLOUJPWFMHZYRQZODPEUERNLPGRYTFIZPQHQVWSAL");

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
    msg.setTimeStamp(0.617813408673);
    msg.setSource(57234U);
    msg.setSourceEntity(195U);
    msg.setDestination(54520U);
    msg.setDestinationEntity(131U);
    msg.actions.assign("AQYPHNCHIIWXTRLDWUTYFPLAUMZPZRYWQTXUBEPJZEQKLFTOYVCAJIRAHZNKEIJMWEKPXNXADXEDJRJLVKGCBMBUFITGCPGCERCQFSDTBSMFXMFVWZOIUFJHINNSVQTUHBGESIQQWOPVRRAIXXRVHOKSOQGEPDNFVYOBDJSFAIGXLTDJEGQSXWOMJAUNLZWMLUKPOHYLHTDGGKCMZUOSVEKDZPH");

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
    msg.setTimeStamp(0.765215798031);
    msg.setSource(14703U);
    msg.setSourceEntity(90U);
    msg.setDestination(32490U);
    msg.setDestinationEntity(7U);
    msg.actions.assign("OPEMSXVGGEXROWSLMXABVJPONINHWGVLEFRHHVUOZZMIBQJGZPQRHGAPMYPCRSSDVPWAFHEGTDEXQBIVWFCZIQZYLHZWSCVEDUFKOTURUCQUFLBYYBOTSBJMQEIOKRQCXYDILBSUKLPPYHITVJNCARNWKUWLLJIUOIGMXGZTLK");

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
    msg.setTimeStamp(0.0287817422353);
    msg.setSource(28262U);
    msg.setSourceEntity(152U);
    msg.setDestination(26018U);
    msg.setDestinationEntity(92U);
    msg.actions.assign("YVPBXJWWSOCTDBGXYOYJQTRWBFVZYIPMFVVKGLQIKZTDQNTWJUHJNFYLHODCGEDJYBSTDJNDKGZJMXRVOBIKGOPMCHRNXBZWLLVHMADWIWMSQEFBSVUJBTCRSRMLKMLNIQMZUUAUMOTHXCBOKCFZZATXKWHHRLFWDNYIUPFGAZXRHUORAULOCJVESAIQEAYJGCKREQNGXPPXXUSNDNOFU");

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
    msg.setTimeStamp(0.615304607294);
    msg.setSource(17283U);
    msg.setSourceEntity(138U);
    msg.setDestination(27670U);
    msg.setDestinationEntity(160U);
    msg.button = 16U;
    msg.value = 18U;

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
    msg.setTimeStamp(0.148059774402);
    msg.setSource(32173U);
    msg.setSourceEntity(172U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(149U);
    msg.button = 75U;
    msg.value = 107U;

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
    msg.setTimeStamp(0.434411179665);
    msg.setSource(65029U);
    msg.setSourceEntity(239U);
    msg.setDestination(31064U);
    msg.setDestinationEntity(107U);
    msg.button = 162U;
    msg.value = 216U;

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
    msg.setTimeStamp(0.538008433636);
    msg.setSource(38655U);
    msg.setSourceEntity(90U);
    msg.setDestination(52895U);
    msg.setDestinationEntity(136U);
    msg.op = 248U;
    msg.text.assign("JQRBHPXRECHKRTQWVTIQWHSTLXPKYUJTNJLRMHSEABFJAKEIVMPCSTIFZBZKVLVWCDVBQLBXJGTGYPCCJNBYHLUEFSUYPWIQQDZLRALXFUONXWYIUBAMSLISYHYNIOLZAUSXZSNLRKYGVMAICEVDCPIBOMPQYDKSMMBOJWUSKGJVHTAHYCFGZRNFOXDKJTZPGMQROUHZZMXEVKIB");

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
    msg.setTimeStamp(0.394726800671);
    msg.setSource(18341U);
    msg.setSourceEntity(80U);
    msg.setDestination(49944U);
    msg.setDestinationEntity(42U);
    msg.op = 183U;
    msg.text.assign("NESGLQGSMWMDXVLSDBRAYHZGYCDOVGSSMBUUTQEYIZBNCKSHIQLHQARFDIKJCYAHOLEFWRCYJNU");

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
    msg.setTimeStamp(0.748200144964);
    msg.setSource(51857U);
    msg.setSourceEntity(249U);
    msg.setDestination(49173U);
    msg.setDestinationEntity(65U);
    msg.op = 29U;
    msg.text.assign("WORBOYPUIQATHNFGGRHHPKMMJWYLRYFIWVBEEFYSNSMOQINLDUOVGMZYWRMCAXZTUKTIJSHDCYAMCOOMOSGTLQSZHDLISFCPXMGRQQ");

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
    msg.setTimeStamp(0.899609380042);
    msg.setSource(48864U);
    msg.setSourceEntity(243U);
    msg.setDestination(33773U);
    msg.setDestinationEntity(47U);
    msg.op = 85U;
    msg.time_remain = 0.531756823948;
    msg.sched_time = 0.274384418733;

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
    msg.setTimeStamp(0.425188131063);
    msg.setSource(19227U);
    msg.setSourceEntity(110U);
    msg.setDestination(9310U);
    msg.setDestinationEntity(58U);
    msg.op = 180U;
    msg.time_remain = 0.713499227433;
    msg.sched_time = 0.815894233819;

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
    msg.setTimeStamp(0.933152873664);
    msg.setSource(18848U);
    msg.setSourceEntity(130U);
    msg.setDestination(44771U);
    msg.setDestinationEntity(124U);
    msg.op = 154U;
    msg.time_remain = 0.499256593228;
    msg.sched_time = 0.240645562338;

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
    msg.setTimeStamp(0.0245185953838);
    msg.setSource(1270U);
    msg.setSourceEntity(119U);
    msg.setDestination(34312U);
    msg.setDestinationEntity(111U);
    msg.name.assign("QDMCGTGLTGZMVUXHTGXIVPXDSUWCLNMOZ");
    msg.op = 177U;
    msg.sched_time = 0.0297093127577;

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
    msg.setTimeStamp(0.782985601111);
    msg.setSource(64729U);
    msg.setSourceEntity(77U);
    msg.setDestination(35150U);
    msg.setDestinationEntity(112U);
    msg.name.assign("ARQAWRUSPMSUGGVHOMUYIGTOBDSGRFCERFZXYTPYJGUWWTGYNXLIIDLRFJYFJHPZEDSKTJXLPFKQTEWHQBGFBEEYZTRPNOJZRVYLIOBNVQNIKLXUNSFLTYXAMDOEID");
    msg.op = 206U;
    msg.sched_time = 0.525420268631;

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
    msg.setTimeStamp(0.990142486139);
    msg.setSource(38524U);
    msg.setSourceEntity(224U);
    msg.setDestination(43420U);
    msg.setDestinationEntity(230U);
    msg.name.assign("OCDVSXJMSOEDUFHFBWWTOUWBPJYHQVSQUUQLWMRODWZVTHACYDEBXZT");
    msg.op = 62U;
    msg.sched_time = 0.345850503034;

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
    msg.setTimeStamp(0.987205693244);
    msg.setSource(59950U);
    msg.setSourceEntity(23U);
    msg.setDestination(57619U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.807356380516);
    msg.setSource(34378U);
    msg.setSourceEntity(211U);
    msg.setDestination(24785U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.975509616117);
    msg.setSource(65338U);
    msg.setSourceEntity(24U);
    msg.setDestination(34291U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.790617340269);
    msg.setSource(64010U);
    msg.setSourceEntity(109U);
    msg.setDestination(8275U);
    msg.setDestinationEntity(63U);
    msg.name.assign("OYIVTTXBJJKZHQRAUAYTWTLWLDJKVNMJVKDFD");
    msg.state = 24U;

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
    msg.setTimeStamp(0.96193955788);
    msg.setSource(16934U);
    msg.setSourceEntity(131U);
    msg.setDestination(34948U);
    msg.setDestinationEntity(97U);
    msg.name.assign("IVGNYLIQOCUTQTKGGOSPNHMZTVYSWQZOWPBOMJIPVXRLYBMDPHDYMSFYKOZXSYHMNZNFLVPECHLZBJWJSFQBAFZETAKKFRMNNUAHCKCFIJBEUDQAFKUCLMRBEPGEVRWUWEWWCIPVWPVOYHIELGAIRZMHIAXSXYLLXPEXSEYLROMDPKJMUUZTWOBABNIYOSQDXFXKHJCKQQLABGHTQTCTU");
    msg.state = 95U;

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
    msg.setTimeStamp(0.9611122225);
    msg.setSource(14410U);
    msg.setSourceEntity(30U);
    msg.setDestination(60650U);
    msg.setDestinationEntity(1U);
    msg.name.assign("WFJVTGWNEUZLDKOHYIIDNGABRRJKQWCACVBHGGMHEYRXNLJHPZETRTPPUUVWPNIGVKSPMGBSFCZLIQOZYPMLQKFRETEHHFDIABLVLDCJVYKTDPQCDNLWFMKSJERULVQEJGITUBNFORBPGCSXWHM");
    msg.state = 152U;

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
    msg.setTimeStamp(0.603069194282);
    msg.setSource(30389U);
    msg.setSourceEntity(187U);
    msg.setDestination(56511U);
    msg.setDestinationEntity(54U);
    msg.name.assign("TCHIVYSRBIXZFMBELDINFZLZZQUTWPYPHJKNBUVJDGRCLITOKWTDFENMXSNCIGTJPSCPQUIMQHMYSZLTOQIMGIFRXZTORECWLRADVNQYGQRWVUJGUDIBCVOEJNYOOCYXRSKKEIVGQBJGAXEQAZNCWOHKCSEHKWGNHFHPPTDOYFRGA");
    msg.value = 26U;

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
    msg.setTimeStamp(0.443287691874);
    msg.setSource(10566U);
    msg.setSourceEntity(53U);
    msg.setDestination(6176U);
    msg.setDestinationEntity(10U);
    msg.name.assign("XJGVYOOTBGTTNQ");
    msg.value = 163U;

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
    msg.setTimeStamp(0.00874245642683);
    msg.setSource(54284U);
    msg.setSourceEntity(195U);
    msg.setDestination(52333U);
    msg.setDestinationEntity(160U);
    msg.name.assign("ZEHXXCNXBAVZPGFIUFGJSWRAZVSABKIXKIMELKSKIFGTQMGKSYGJUPSBWODUZSIHHUCJCKMPFYR");
    msg.value = 197U;

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
    msg.setTimeStamp(0.428262595237);
    msg.setSource(329U);
    msg.setSourceEntity(71U);
    msg.setDestination(5006U);
    msg.setDestinationEntity(127U);
    msg.name.assign("WOJZJMYHZQRPGSXYABVKIAIXHUYJLUVKDCGIDSDMBGSVGRPUJYWHUPKBROEDOMURXNQPIUPDCZTEEKNKGDZWTGCVRFXNDIUAHJJ");

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
    msg.setTimeStamp(0.147467327911);
    msg.setSource(47059U);
    msg.setSourceEntity(76U);
    msg.setDestination(46671U);
    msg.setDestinationEntity(213U);
    msg.name.assign("OHVWBQZHTCYWFLNEXGGRYBOIWPONOEUETKLWBWXBZNISRWFUAJWYGXHPMFNCZAKDSEYHYOLDGPKAZWOTEFLLQFBOZLUKOVTAHZQQHDNFVNGJMCCYTHJATPURXFKXZVLCGDCRRCMQJNNTGMIPRAEDUXIWBLCPKPIAMBNTEHHASYXNKFGFIMLDGZVQFVEESXL");

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
    msg.setTimeStamp(0.790184786616);
    msg.setSource(6721U);
    msg.setSourceEntity(147U);
    msg.setDestination(42016U);
    msg.setDestinationEntity(0U);
    msg.name.assign("AQMQWTWFCLUVJKEJODFUSOGPMEAQQLXWQKXRXSMIBWSWUUTPGGKCHLIZBDXGXYPDBLNFZAOAVELJZAYKKRWUKBMLEPNKNKQDWPAVAKGVYHGFRWAJZUFCFCILTNTOXOQALHYNRIPNBGRDVOZRJZYYFB");

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
    msg.setTimeStamp(0.109394568471);
    msg.setSource(20551U);
    msg.setSourceEntity(140U);
    msg.setDestination(53208U);
    msg.setDestinationEntity(82U);
    msg.name.assign("MGQZLFDRCBMYCQGKGNEGXYMLKHIHEGAPICBELSKLPJTSDVHCMALULTZHTKSJONDYLCUFIWUHN");
    msg.value = 236U;

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
    msg.setTimeStamp(0.461463616577);
    msg.setSource(58265U);
    msg.setSourceEntity(50U);
    msg.setDestination(53000U);
    msg.setDestinationEntity(179U);
    msg.name.assign("LMLZIXAIPXSJOHUOAYNUEHEXKGSHRQMSTEJJAJDXEFVERYTGVHIPWASGVUGEXTXDIMCHSOKZTNXFMAWVSOYMLNNMZQPWIYIVLWWRL");
    msg.value = 154U;

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
    msg.setTimeStamp(0.870698275904);
    msg.setSource(53509U);
    msg.setSourceEntity(27U);
    msg.setDestination(7949U);
    msg.setDestinationEntity(253U);
    msg.name.assign("BYOAADWNGWRDDMRRTCMCZMCCHOEQZR");
    msg.value = 38U;

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
    msg.setTimeStamp(0.244882156542);
    msg.setSource(61603U);
    msg.setSourceEntity(171U);
    msg.setDestination(25699U);
    msg.setDestinationEntity(46U);
    msg.id = 164U;
    msg.period = 1282777832U;
    msg.duty_cycle = 540219248U;

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
    msg.setTimeStamp(0.664628632033);
    msg.setSource(29474U);
    msg.setSourceEntity(210U);
    msg.setDestination(40868U);
    msg.setDestinationEntity(88U);
    msg.id = 141U;
    msg.period = 4048178924U;
    msg.duty_cycle = 200240668U;

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
    msg.setTimeStamp(0.441972601113);
    msg.setSource(28258U);
    msg.setSourceEntity(104U);
    msg.setDestination(63401U);
    msg.setDestinationEntity(28U);
    msg.id = 89U;
    msg.period = 1103387099U;
    msg.duty_cycle = 582912298U;

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
    msg.setTimeStamp(0.913699357119);
    msg.setSource(20857U);
    msg.setSourceEntity(188U);
    msg.setDestination(60914U);
    msg.setDestinationEntity(220U);
    msg.id = 217U;
    msg.period = 3838766352U;
    msg.duty_cycle = 1359187255U;

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
    msg.setTimeStamp(0.645219026477);
    msg.setSource(48796U);
    msg.setSourceEntity(43U);
    msg.setDestination(61887U);
    msg.setDestinationEntity(45U);
    msg.id = 34U;
    msg.period = 4068484754U;
    msg.duty_cycle = 2292156721U;

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
    msg.setTimeStamp(0.864925993884);
    msg.setSource(15035U);
    msg.setSourceEntity(39U);
    msg.setDestination(8600U);
    msg.setDestinationEntity(21U);
    msg.id = 227U;
    msg.period = 3628873261U;
    msg.duty_cycle = 3946180763U;

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
    msg.setTimeStamp(0.79676306453);
    msg.setSource(34918U);
    msg.setSourceEntity(153U);
    msg.setDestination(55838U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.882824617827;
    msg.lon = 0.868233939778;
    msg.height = 0.215426433697;
    msg.x = 0.648326157147;
    msg.y = 0.643296547605;
    msg.z = 0.104808289667;
    msg.phi = 0.535253754916;
    msg.theta = 0.115831261165;
    msg.psi = 0.945304867039;
    msg.u = 0.338116352046;
    msg.v = 0.160236621196;
    msg.w = 0.215763734268;
    msg.vx = 0.274169128293;
    msg.vy = 0.904066264193;
    msg.vz = 0.262864890055;
    msg.p = 0.363653121625;
    msg.q = 0.588044339515;
    msg.r = 0.0418164547569;
    msg.depth = 0.0171616296336;
    msg.alt = 0.473044799567;

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
    msg.setTimeStamp(0.161261015578);
    msg.setSource(58570U);
    msg.setSourceEntity(166U);
    msg.setDestination(21771U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.139987889692;
    msg.lon = 0.934825727951;
    msg.height = 0.542991225372;
    msg.x = 0.321635422903;
    msg.y = 0.989859086232;
    msg.z = 0.695361858508;
    msg.phi = 0.447004178473;
    msg.theta = 0.765057329346;
    msg.psi = 0.260346302916;
    msg.u = 0.730289660007;
    msg.v = 0.257187882606;
    msg.w = 0.210260805857;
    msg.vx = 0.62716249241;
    msg.vy = 0.681810682996;
    msg.vz = 0.485785697203;
    msg.p = 0.629307604315;
    msg.q = 0.73882165788;
    msg.r = 0.128258745589;
    msg.depth = 0.330505078914;
    msg.alt = 0.191983717377;

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
    msg.setTimeStamp(0.845494153999);
    msg.setSource(42973U);
    msg.setSourceEntity(68U);
    msg.setDestination(61143U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.994291281436;
    msg.lon = 0.463108186603;
    msg.height = 0.401812139548;
    msg.x = 0.962547984785;
    msg.y = 0.424495371525;
    msg.z = 0.611659541339;
    msg.phi = 0.72229775753;
    msg.theta = 0.336451591987;
    msg.psi = 0.577006630115;
    msg.u = 0.971303757827;
    msg.v = 0.441145202709;
    msg.w = 0.313663456474;
    msg.vx = 0.241926804609;
    msg.vy = 0.459933937765;
    msg.vz = 0.329057551063;
    msg.p = 0.754820226831;
    msg.q = 0.750700142605;
    msg.r = 0.820914090725;
    msg.depth = 0.605079989333;
    msg.alt = 0.304325798324;

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
    msg.setTimeStamp(0.422310202335);
    msg.setSource(2834U);
    msg.setSourceEntity(193U);
    msg.setDestination(49205U);
    msg.setDestinationEntity(102U);
    msg.x = 0.674960996386;
    msg.y = 0.911678196896;
    msg.z = 0.790462728536;

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
    msg.setTimeStamp(0.762125735352);
    msg.setSource(24164U);
    msg.setSourceEntity(131U);
    msg.setDestination(60762U);
    msg.setDestinationEntity(31U);
    msg.x = 0.48177751205;
    msg.y = 0.00810263608062;
    msg.z = 0.193483270369;

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
    msg.setTimeStamp(0.198222851411);
    msg.setSource(53894U);
    msg.setSourceEntity(68U);
    msg.setDestination(10341U);
    msg.setDestinationEntity(43U);
    msg.x = 0.250154574505;
    msg.y = 0.200119864228;
    msg.z = 0.744872796197;

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
    msg.setTimeStamp(0.812798261346);
    msg.setSource(21023U);
    msg.setSourceEntity(94U);
    msg.setDestination(20591U);
    msg.setDestinationEntity(189U);
    msg.value = 0.145105495326;

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
    msg.setTimeStamp(0.731353442718);
    msg.setSource(24872U);
    msg.setSourceEntity(217U);
    msg.setDestination(26171U);
    msg.setDestinationEntity(140U);
    msg.value = 0.346125082427;

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
    msg.setTimeStamp(0.856992832507);
    msg.setSource(18343U);
    msg.setSourceEntity(244U);
    msg.setDestination(47184U);
    msg.setDestinationEntity(235U);
    msg.value = 0.0845045051776;

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
    msg.setTimeStamp(0.603271784417);
    msg.setSource(35886U);
    msg.setSourceEntity(15U);
    msg.setDestination(35678U);
    msg.setDestinationEntity(221U);
    msg.value = 0.426742871788;

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
    msg.setTimeStamp(0.0464717161982);
    msg.setSource(30932U);
    msg.setSourceEntity(67U);
    msg.setDestination(5800U);
    msg.setDestinationEntity(183U);
    msg.value = 0.779085473643;

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
    msg.setTimeStamp(0.279433945109);
    msg.setSource(23225U);
    msg.setSourceEntity(99U);
    msg.setDestination(48342U);
    msg.setDestinationEntity(222U);
    msg.value = 0.750565925006;

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
    msg.setTimeStamp(0.173973526691);
    msg.setSource(51626U);
    msg.setSourceEntity(57U);
    msg.setDestination(52066U);
    msg.setDestinationEntity(175U);
    msg.x = 0.826944214885;
    msg.y = 0.982692817662;
    msg.z = 0.384862555636;
    msg.phi = 0.0527178179557;
    msg.theta = 0.157079623798;
    msg.psi = 0.720860228191;
    msg.p = 0.235402381633;
    msg.q = 0.736489014516;
    msg.r = 0.509331053415;
    msg.u = 0.878215446981;
    msg.v = 0.46281439933;
    msg.w = 0.279995592639;
    msg.bias_psi = 0.863843861394;
    msg.bias_r = 0.624049678082;

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
    msg.setTimeStamp(0.83711655245);
    msg.setSource(43587U);
    msg.setSourceEntity(173U);
    msg.setDestination(16011U);
    msg.setDestinationEntity(243U);
    msg.x = 0.202420684028;
    msg.y = 0.127625556714;
    msg.z = 0.0748998138731;
    msg.phi = 0.348436095836;
    msg.theta = 0.379097107145;
    msg.psi = 0.282468637913;
    msg.p = 0.218534164086;
    msg.q = 0.132983904678;
    msg.r = 0.356295974893;
    msg.u = 0.181886366596;
    msg.v = 0.251425974324;
    msg.w = 0.576288813501;
    msg.bias_psi = 0.733131657703;
    msg.bias_r = 0.698891422347;

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
    msg.setTimeStamp(0.547571699731);
    msg.setSource(12968U);
    msg.setSourceEntity(96U);
    msg.setDestination(56835U);
    msg.setDestinationEntity(18U);
    msg.x = 0.123262953572;
    msg.y = 0.582368819614;
    msg.z = 0.0943248272198;
    msg.phi = 0.681398243372;
    msg.theta = 0.0644126221399;
    msg.psi = 0.0261425721276;
    msg.p = 0.808396596344;
    msg.q = 0.101952786816;
    msg.r = 0.385422442628;
    msg.u = 0.176771408078;
    msg.v = 0.0161619064699;
    msg.w = 0.118688191691;
    msg.bias_psi = 0.360727098989;
    msg.bias_r = 0.288084049694;

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
    msg.setTimeStamp(0.44229829522);
    msg.setSource(60126U);
    msg.setSourceEntity(93U);
    msg.setDestination(60911U);
    msg.setDestinationEntity(70U);
    msg.bias_psi = 0.367037903463;
    msg.bias_r = 0.454166922858;
    msg.cog = 0.671857417771;
    msg.cyaw = 0.0775070659488;
    msg.lbl_rej_level = 0.893698540455;
    msg.gps_rej_level = 0.719292115279;
    msg.custom_x = 0.68868913797;
    msg.custom_y = 0.275234520996;
    msg.custom_z = 0.947586057148;

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
    msg.setTimeStamp(0.487996154239);
    msg.setSource(60734U);
    msg.setSourceEntity(239U);
    msg.setDestination(30835U);
    msg.setDestinationEntity(168U);
    msg.bias_psi = 0.733639349999;
    msg.bias_r = 0.939880917164;
    msg.cog = 0.340783544225;
    msg.cyaw = 0.40817940794;
    msg.lbl_rej_level = 0.142474919473;
    msg.gps_rej_level = 0.453747603307;
    msg.custom_x = 0.360470145358;
    msg.custom_y = 0.391786338627;
    msg.custom_z = 0.829156538529;

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
    msg.setTimeStamp(0.608197514177);
    msg.setSource(26135U);
    msg.setSourceEntity(252U);
    msg.setDestination(32010U);
    msg.setDestinationEntity(86U);
    msg.bias_psi = 0.329997289134;
    msg.bias_r = 0.310982999046;
    msg.cog = 0.702260824657;
    msg.cyaw = 0.702922683416;
    msg.lbl_rej_level = 0.214897445806;
    msg.gps_rej_level = 0.172608963395;
    msg.custom_x = 0.324952812425;
    msg.custom_y = 0.836390672459;
    msg.custom_z = 0.855266202333;

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
    msg.setTimeStamp(0.497654462036);
    msg.setSource(47347U);
    msg.setSourceEntity(181U);
    msg.setDestination(49702U);
    msg.setDestinationEntity(12U);
    msg.utc_time = 0.344784706485;
    msg.reason = 37U;

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
    msg.setTimeStamp(0.941666402594);
    msg.setSource(27033U);
    msg.setSourceEntity(108U);
    msg.setDestination(11120U);
    msg.setDestinationEntity(231U);
    msg.utc_time = 0.0983429756967;
    msg.reason = 163U;

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
    msg.setTimeStamp(0.150763300205);
    msg.setSource(56759U);
    msg.setSourceEntity(201U);
    msg.setDestination(53620U);
    msg.setDestinationEntity(70U);
    msg.utc_time = 0.937413877768;
    msg.reason = 86U;

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
    msg.setTimeStamp(0.39908152351);
    msg.setSource(16809U);
    msg.setSourceEntity(37U);
    msg.setDestination(15747U);
    msg.setDestinationEntity(56U);
    msg.id = 56U;
    msg.range = 0.322645816816;
    msg.acceptance = 30U;

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
    msg.setTimeStamp(0.526027714733);
    msg.setSource(33821U);
    msg.setSourceEntity(172U);
    msg.setDestination(1481U);
    msg.setDestinationEntity(111U);
    msg.id = 185U;
    msg.range = 0.278184269119;
    msg.acceptance = 106U;

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
    msg.setTimeStamp(0.496113549861);
    msg.setSource(45465U);
    msg.setSourceEntity(57U);
    msg.setDestination(35957U);
    msg.setDestinationEntity(85U);
    msg.id = 184U;
    msg.range = 0.0359720264186;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.252034785902);
    msg.setSource(53425U);
    msg.setSourceEntity(226U);
    msg.setDestination(35964U);
    msg.setDestinationEntity(182U);
    msg.type = 195U;
    msg.reason = 165U;
    msg.value = 0.133445772597;
    msg.timestep = 0.362180207356;

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
    msg.setTimeStamp(0.403528598015);
    msg.setSource(64805U);
    msg.setSourceEntity(32U);
    msg.setDestination(51444U);
    msg.setDestinationEntity(1U);
    msg.type = 75U;
    msg.reason = 199U;
    msg.value = 0.375670518787;
    msg.timestep = 0.581989673191;

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
    msg.setTimeStamp(0.595830451001);
    msg.setSource(50914U);
    msg.setSourceEntity(53U);
    msg.setDestination(6704U);
    msg.setDestinationEntity(12U);
    msg.type = 186U;
    msg.reason = 3U;
    msg.value = 0.0473507918405;
    msg.timestep = 0.237094064395;

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
    msg.setTimeStamp(0.817015818573);
    msg.setSource(47665U);
    msg.setSourceEntity(179U);
    msg.setDestination(64519U);
    msg.setDestinationEntity(217U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KAMNUDFOSTTWCTOGIAAXLFBCCWSVMMGENRDOBKIFEGJMSYWNMPIXRWPALKZPWSZAQETLXEVKPPFJELZWJHXRZOPYPYSDHRTONXHBFSQHXBBOWQDZJBLIEFKVLPUZDQQGVKVNKIZHYVUUVWPNVLSUMCATUDQBAWJERKFFFDSBFHYRLMYQUDYEGTHOVACEAVTOJSOKNHPCQYZLIGGMQIRY");
    tmp_msg_0.lat = 0.315036451565;
    tmp_msg_0.lon = 0.118315413828;
    tmp_msg_0.depth = 0.166851460286;
    tmp_msg_0.query_channel = 178U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 74U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.615154637702;
    msg.y = 0.0174935669551;
    msg.var_x = 0.795059201039;
    msg.var_y = 0.418052816545;
    msg.distance = 0.495267038231;

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
    msg.setTimeStamp(0.524259316438);
    msg.setSource(48788U);
    msg.setSourceEntity(186U);
    msg.setDestination(1849U);
    msg.setDestinationEntity(199U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SJLOMODXVHNTPYICCFZDGWWEZH");
    tmp_msg_0.lat = 0.590000183475;
    tmp_msg_0.lon = 0.0502784053816;
    tmp_msg_0.depth = 0.280989152289;
    tmp_msg_0.query_channel = 12U;
    tmp_msg_0.reply_channel = 237U;
    tmp_msg_0.transponder_delay = 61U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.341188960073;
    msg.y = 0.613194336144;
    msg.var_x = 0.792445729353;
    msg.var_y = 0.143891342723;
    msg.distance = 0.996138294839;

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
    msg.setTimeStamp(0.0287893903552);
    msg.setSource(11164U);
    msg.setSourceEntity(108U);
    msg.setDestination(54997U);
    msg.setDestinationEntity(229U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PPWLEGYWODOPEPJEWZPSWLQSCZUTKBKZZNSQACVCZIGPEFHHNDODBDAUDLPHVWEQICAVSDOBSFWFIKNMVODJCGSLQERSMTCTJFXJAKXKBFDXQZQBTMTDLGXVNEULHGOGNMKSQIAPLYFURBHVJIZJRXYITYVGNXXXIMJEAKMBSKABTYOQEUQJIRMQVCKAWVYPTITUMLZOAWXXHGOACRCBTOSJUF");
    tmp_msg_0.lat = 0.793150313109;
    tmp_msg_0.lon = 0.948653099386;
    tmp_msg_0.depth = 0.0348226765485;
    tmp_msg_0.query_channel = 53U;
    tmp_msg_0.reply_channel = 174U;
    tmp_msg_0.transponder_delay = 175U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.316642102529;
    msg.y = 0.811341878438;
    msg.var_x = 0.383865911031;
    msg.var_y = 0.0909610741323;
    msg.distance = 0.190256081692;

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
    msg.setTimeStamp(0.29010840204);
    msg.setSource(40784U);
    msg.setSourceEntity(26U);
    msg.setDestination(8177U);
    msg.setDestinationEntity(79U);
    msg.state = 218U;

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
    msg.setTimeStamp(0.250824740782);
    msg.setSource(51496U);
    msg.setSourceEntity(63U);
    msg.setDestination(39870U);
    msg.setDestinationEntity(177U);
    msg.state = 227U;

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
    msg.setTimeStamp(0.860217683883);
    msg.setSource(47755U);
    msg.setSourceEntity(157U);
    msg.setDestination(37703U);
    msg.setDestinationEntity(67U);
    msg.state = 180U;

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
    msg.setTimeStamp(0.630742290382);
    msg.setSource(6773U);
    msg.setSourceEntity(203U);
    msg.setDestination(55098U);
    msg.setDestinationEntity(162U);
    msg.x = 0.698654703989;
    msg.y = 0.118792447493;
    msg.z = 0.954944967451;

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
    msg.setTimeStamp(0.359819473629);
    msg.setSource(24929U);
    msg.setSourceEntity(225U);
    msg.setDestination(53488U);
    msg.setDestinationEntity(12U);
    msg.x = 0.202709389159;
    msg.y = 0.421927461427;
    msg.z = 0.0846246456955;

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
    msg.setTimeStamp(0.476414115605);
    msg.setSource(62607U);
    msg.setSourceEntity(151U);
    msg.setDestination(64754U);
    msg.setDestinationEntity(125U);
    msg.x = 0.39807385229;
    msg.y = 0.833825407573;
    msg.z = 0.630500139278;

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
    msg.setTimeStamp(0.193474873376);
    msg.setSource(39233U);
    msg.setSourceEntity(254U);
    msg.setDestination(36259U);
    msg.setDestinationEntity(47U);
    msg.va = 0.323400182343;
    msg.aoa = 0.259417353853;
    msg.ssa = 0.68213521518;

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
    msg.setTimeStamp(0.259146175436);
    msg.setSource(19122U);
    msg.setSourceEntity(14U);
    msg.setDestination(4261U);
    msg.setDestinationEntity(166U);
    msg.va = 0.374012340851;
    msg.aoa = 0.36808054801;
    msg.ssa = 0.107751579855;

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
    msg.setTimeStamp(0.118988414428);
    msg.setSource(45935U);
    msg.setSourceEntity(97U);
    msg.setDestination(44292U);
    msg.setDestinationEntity(89U);
    msg.va = 0.822591101877;
    msg.aoa = 0.977344519094;
    msg.ssa = 0.353003568722;

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
    msg.setTimeStamp(0.569157219141);
    msg.setSource(2084U);
    msg.setSourceEntity(142U);
    msg.setDestination(40354U);
    msg.setDestinationEntity(168U);
    msg.value = 0.209814838297;

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
    msg.setTimeStamp(0.714039968563);
    msg.setSource(55064U);
    msg.setSourceEntity(189U);
    msg.setDestination(9110U);
    msg.setDestinationEntity(241U);
    msg.value = 0.637024009798;

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
    msg.setTimeStamp(0.420107359649);
    msg.setSource(54721U);
    msg.setSourceEntity(15U);
    msg.setDestination(64863U);
    msg.setDestinationEntity(148U);
    msg.value = 0.0265453556002;

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
    msg.setTimeStamp(0.0311646428926);
    msg.setSource(19613U);
    msg.setSourceEntity(165U);
    msg.setDestination(12308U);
    msg.setDestinationEntity(182U);
    msg.value = 0.93814500489;
    msg.z_units = 215U;

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
    msg.setTimeStamp(0.632186372917);
    msg.setSource(31710U);
    msg.setSourceEntity(193U);
    msg.setDestination(50488U);
    msg.setDestinationEntity(218U);
    msg.value = 0.641425910196;
    msg.z_units = 195U;

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
    msg.setTimeStamp(0.886813991019);
    msg.setSource(28676U);
    msg.setSourceEntity(144U);
    msg.setDestination(64780U);
    msg.setDestinationEntity(56U);
    msg.value = 0.0116271391328;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.192740142416);
    msg.setSource(38325U);
    msg.setSourceEntity(186U);
    msg.setDestination(41786U);
    msg.setDestinationEntity(223U);
    msg.value = 0.50127346366;
    msg.speed_units = 40U;

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
    msg.setTimeStamp(0.34854698604);
    msg.setSource(43746U);
    msg.setSourceEntity(142U);
    msg.setDestination(43912U);
    msg.setDestinationEntity(4U);
    msg.value = 0.93395271468;
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
    msg.setTimeStamp(0.848515937417);
    msg.setSource(48224U);
    msg.setSourceEntity(28U);
    msg.setDestination(391U);
    msg.setDestinationEntity(169U);
    msg.value = 0.899007881741;
    msg.speed_units = 215U;

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
    msg.setTimeStamp(0.152144215319);
    msg.setSource(46967U);
    msg.setSourceEntity(139U);
    msg.setDestination(64232U);
    msg.setDestinationEntity(191U);
    msg.value = 0.607019360654;

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
    msg.setTimeStamp(0.299989889811);
    msg.setSource(57742U);
    msg.setSourceEntity(162U);
    msg.setDestination(45822U);
    msg.setDestinationEntity(18U);
    msg.value = 0.877157964442;

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
    msg.setTimeStamp(0.318344921443);
    msg.setSource(20173U);
    msg.setSourceEntity(231U);
    msg.setDestination(6902U);
    msg.setDestinationEntity(114U);
    msg.value = 0.296958904904;

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
    msg.setTimeStamp(0.401680413931);
    msg.setSource(17321U);
    msg.setSourceEntity(73U);
    msg.setDestination(62886U);
    msg.setDestinationEntity(99U);
    msg.value = 0.505443108969;

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
    msg.setTimeStamp(0.6567679744);
    msg.setSource(13826U);
    msg.setSourceEntity(20U);
    msg.setDestination(19984U);
    msg.setDestinationEntity(16U);
    msg.value = 0.41958541791;

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
    msg.setTimeStamp(0.0674030565186);
    msg.setSource(1883U);
    msg.setSourceEntity(226U);
    msg.setDestination(40713U);
    msg.setDestinationEntity(189U);
    msg.value = 0.570429163217;

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
    msg.setTimeStamp(0.550509338337);
    msg.setSource(14230U);
    msg.setSourceEntity(154U);
    msg.setDestination(4151U);
    msg.setDestinationEntity(92U);
    msg.value = 0.320424118018;

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
    msg.setTimeStamp(0.60840241901);
    msg.setSource(18072U);
    msg.setSourceEntity(68U);
    msg.setDestination(39312U);
    msg.setDestinationEntity(155U);
    msg.value = 0.415125934606;

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
    msg.setTimeStamp(0.476330884202);
    msg.setSource(63759U);
    msg.setSourceEntity(66U);
    msg.setDestination(33814U);
    msg.setDestinationEntity(196U);
    msg.value = 0.883756612203;

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
    msg.setTimeStamp(0.901343617738);
    msg.setSource(6640U);
    msg.setSourceEntity(32U);
    msg.setDestination(65140U);
    msg.setDestinationEntity(179U);
    msg.path_ref = 3816634536U;
    msg.start_lat = 0.242498531648;
    msg.start_lon = 0.139340855388;
    msg.start_z = 0.755703454196;
    msg.start_z_units = 5U;
    msg.end_lat = 0.588034269972;
    msg.end_lon = 0.65521067119;
    msg.end_z = 0.683819168403;
    msg.end_z_units = 29U;
    msg.speed = 0.308199656812;
    msg.speed_units = 101U;
    msg.lradius = 0.519199031247;
    msg.flags = 184U;

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
    msg.setTimeStamp(0.359369582171);
    msg.setSource(4280U);
    msg.setSourceEntity(186U);
    msg.setDestination(3548U);
    msg.setDestinationEntity(133U);
    msg.path_ref = 3433088645U;
    msg.start_lat = 0.701962968735;
    msg.start_lon = 0.247219187054;
    msg.start_z = 0.488225886405;
    msg.start_z_units = 198U;
    msg.end_lat = 0.662633462933;
    msg.end_lon = 0.30866419781;
    msg.end_z = 0.649910279229;
    msg.end_z_units = 189U;
    msg.speed = 0.196293881357;
    msg.speed_units = 128U;
    msg.lradius = 0.546207125086;
    msg.flags = 174U;

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
    msg.setTimeStamp(0.874417212644);
    msg.setSource(30274U);
    msg.setSourceEntity(12U);
    msg.setDestination(30791U);
    msg.setDestinationEntity(210U);
    msg.path_ref = 1423100827U;
    msg.start_lat = 0.521877715564;
    msg.start_lon = 0.237270191544;
    msg.start_z = 0.980022724711;
    msg.start_z_units = 79U;
    msg.end_lat = 0.0922234844805;
    msg.end_lon = 0.311325388436;
    msg.end_z = 0.519154425704;
    msg.end_z_units = 182U;
    msg.speed = 0.83642653499;
    msg.speed_units = 118U;
    msg.lradius = 0.676603301363;
    msg.flags = 169U;

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
    msg.setTimeStamp(0.770858582104);
    msg.setSource(39487U);
    msg.setSourceEntity(56U);
    msg.setDestination(12066U);
    msg.setDestinationEntity(239U);
    msg.x = 0.912452028808;
    msg.y = 0.44072270676;
    msg.z = 0.254010164179;
    msg.k = 0.431844656741;
    msg.m = 0.67400356486;
    msg.n = 0.0636912135419;
    msg.flags = 73U;

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
    msg.setTimeStamp(0.433295566836);
    msg.setSource(31713U);
    msg.setSourceEntity(92U);
    msg.setDestination(39762U);
    msg.setDestinationEntity(129U);
    msg.x = 0.500800853058;
    msg.y = 0.432897810747;
    msg.z = 0.483278095066;
    msg.k = 0.647404307033;
    msg.m = 0.536558969774;
    msg.n = 0.242721593989;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.975514691371);
    msg.setSource(3034U);
    msg.setSourceEntity(249U);
    msg.setDestination(53927U);
    msg.setDestinationEntity(11U);
    msg.x = 0.210376705218;
    msg.y = 0.23841238889;
    msg.z = 0.880533387595;
    msg.k = 0.36493782227;
    msg.m = 0.219989359918;
    msg.n = 0.405499482839;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.620248720609);
    msg.setSource(65089U);
    msg.setSourceEntity(59U);
    msg.setDestination(52929U);
    msg.setDestinationEntity(59U);
    msg.value = 0.333688110128;

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
    msg.setTimeStamp(0.210256939483);
    msg.setSource(46596U);
    msg.setSourceEntity(97U);
    msg.setDestination(1637U);
    msg.setDestinationEntity(22U);
    msg.value = 0.519475582092;

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
    msg.setTimeStamp(0.872824943763);
    msg.setSource(15845U);
    msg.setSourceEntity(87U);
    msg.setDestination(28755U);
    msg.setDestinationEntity(98U);
    msg.value = 0.97204911448;

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
    msg.setTimeStamp(0.27583609001);
    msg.setSource(53708U);
    msg.setSourceEntity(18U);
    msg.setDestination(14875U);
    msg.setDestinationEntity(80U);
    msg.u = 0.998020816309;
    msg.v = 0.289846370716;
    msg.w = 0.949102187676;
    msg.p = 0.956464253385;
    msg.q = 0.444512066507;
    msg.r = 0.261311455329;
    msg.flags = 246U;

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
    msg.setTimeStamp(0.877564001492);
    msg.setSource(48490U);
    msg.setSourceEntity(114U);
    msg.setDestination(62627U);
    msg.setDestinationEntity(173U);
    msg.u = 0.125311659299;
    msg.v = 0.127778142618;
    msg.w = 0.883422254771;
    msg.p = 0.637495940334;
    msg.q = 0.713538269674;
    msg.r = 0.27671625626;
    msg.flags = 10U;

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
    msg.setTimeStamp(0.879898429966);
    msg.setSource(57477U);
    msg.setSourceEntity(133U);
    msg.setDestination(12210U);
    msg.setDestinationEntity(65U);
    msg.u = 0.44467494664;
    msg.v = 0.37118067276;
    msg.w = 0.735928997179;
    msg.p = 0.313403116755;
    msg.q = 0.486417555271;
    msg.r = 0.864531640688;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.245614983754);
    msg.setSource(58117U);
    msg.setSourceEntity(219U);
    msg.setDestination(25070U);
    msg.setDestinationEntity(237U);
    msg.path_ref = 1916159926U;
    msg.start_lat = 0.310518359972;
    msg.start_lon = 0.11150161485;
    msg.start_z = 0.529754735511;
    msg.start_z_units = 155U;
    msg.end_lat = 0.784341529961;
    msg.end_lon = 0.0177099670446;
    msg.end_z = 0.958380329822;
    msg.end_z_units = 209U;
    msg.lradius = 0.378167723599;
    msg.flags = 209U;
    msg.x = 0.827597686228;
    msg.y = 0.300136136396;
    msg.z = 0.231878238984;
    msg.vx = 0.952480002514;
    msg.vy = 0.329864361906;
    msg.vz = 0.0751604776435;
    msg.course_error = 0.142732208596;
    msg.eta = 59259U;

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
    msg.setTimeStamp(0.375325014538);
    msg.setSource(37056U);
    msg.setSourceEntity(6U);
    msg.setDestination(21740U);
    msg.setDestinationEntity(154U);
    msg.path_ref = 1085432005U;
    msg.start_lat = 0.888046439674;
    msg.start_lon = 0.303834782429;
    msg.start_z = 0.277900158645;
    msg.start_z_units = 22U;
    msg.end_lat = 0.500978386864;
    msg.end_lon = 0.823680649666;
    msg.end_z = 0.426983490205;
    msg.end_z_units = 28U;
    msg.lradius = 0.102369950598;
    msg.flags = 93U;
    msg.x = 0.386918119741;
    msg.y = 0.423311118469;
    msg.z = 0.277756147173;
    msg.vx = 0.241196475079;
    msg.vy = 0.318021457175;
    msg.vz = 0.489444176788;
    msg.course_error = 0.0336623009961;
    msg.eta = 41885U;

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
    msg.setTimeStamp(0.230273435492);
    msg.setSource(17772U);
    msg.setSourceEntity(19U);
    msg.setDestination(28072U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 2262218005U;
    msg.start_lat = 0.335597671509;
    msg.start_lon = 0.41527838606;
    msg.start_z = 0.170081547746;
    msg.start_z_units = 9U;
    msg.end_lat = 0.855575989838;
    msg.end_lon = 0.85626875895;
    msg.end_z = 0.888003586789;
    msg.end_z_units = 192U;
    msg.lradius = 0.741005695667;
    msg.flags = 57U;
    msg.x = 0.350695254342;
    msg.y = 0.41626229627;
    msg.z = 0.828507123769;
    msg.vx = 0.847516326702;
    msg.vy = 0.190587951381;
    msg.vz = 0.0915625026775;
    msg.course_error = 0.612642197262;
    msg.eta = 43298U;

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
    msg.setTimeStamp(0.724769668971);
    msg.setSource(55993U);
    msg.setSourceEntity(122U);
    msg.setDestination(50413U);
    msg.setDestinationEntity(202U);
    msg.k = 0.394261128895;
    msg.m = 0.0706215846468;
    msg.n = 0.408732761771;

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
    msg.setTimeStamp(0.907249000803);
    msg.setSource(30721U);
    msg.setSourceEntity(241U);
    msg.setDestination(53208U);
    msg.setDestinationEntity(12U);
    msg.k = 0.787731789936;
    msg.m = 0.840974912423;
    msg.n = 0.35669236998;

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
    msg.setTimeStamp(0.13561976894);
    msg.setSource(36335U);
    msg.setSourceEntity(124U);
    msg.setDestination(45760U);
    msg.setDestinationEntity(213U);
    msg.k = 0.0946788934158;
    msg.m = 0.993714883536;
    msg.n = 0.237150613524;

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
    msg.setTimeStamp(0.695203440151);
    msg.setSource(48231U);
    msg.setSourceEntity(86U);
    msg.setDestination(49507U);
    msg.setDestinationEntity(79U);
    msg.p = 0.315301009488;
    msg.i = 0.883149038899;
    msg.d = 0.302409237434;
    msg.a = 0.550106574699;

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
    msg.setTimeStamp(0.446602235659);
    msg.setSource(22426U);
    msg.setSourceEntity(33U);
    msg.setDestination(62052U);
    msg.setDestinationEntity(64U);
    msg.p = 0.565191561904;
    msg.i = 0.890825237298;
    msg.d = 0.583358796499;
    msg.a = 0.213292005446;

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
    msg.setTimeStamp(0.841575285795);
    msg.setSource(43298U);
    msg.setSourceEntity(165U);
    msg.setDestination(17127U);
    msg.setDestinationEntity(148U);
    msg.p = 0.580712428653;
    msg.i = 0.996306437401;
    msg.d = 0.2246810943;
    msg.a = 0.892358487012;

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
    msg.setTimeStamp(0.164550320144);
    msg.setSource(36552U);
    msg.setSourceEntity(73U);
    msg.setDestination(28418U);
    msg.setDestinationEntity(216U);
    msg.op = 11U;

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
    msg.setTimeStamp(0.557004227324);
    msg.setSource(53899U);
    msg.setSourceEntity(21U);
    msg.setDestination(31969U);
    msg.setDestinationEntity(196U);
    msg.op = 18U;

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
    msg.setTimeStamp(0.0589325244944);
    msg.setSource(36230U);
    msg.setSourceEntity(250U);
    msg.setDestination(13550U);
    msg.setDestinationEntity(201U);
    msg.op = 164U;

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
    msg.setTimeStamp(0.298284963734);
    msg.setSource(14168U);
    msg.setSourceEntity(178U);
    msg.setDestination(35930U);
    msg.setDestinationEntity(21U);
    msg.x = 0.64632254593;
    msg.y = 0.165555511931;
    msg.z = 0.0861984780453;
    msg.vx = 0.217931081475;
    msg.vy = 0.940992008294;
    msg.vz = 0.876286568459;
    msg.ax = 0.154051220759;
    msg.ay = 0.719052541741;
    msg.az = 0.47638666125;
    msg.flags = 19055U;

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
    msg.setTimeStamp(0.481079348325);
    msg.setSource(59729U);
    msg.setSourceEntity(14U);
    msg.setDestination(28916U);
    msg.setDestinationEntity(13U);
    msg.x = 0.0822275370513;
    msg.y = 0.157135056529;
    msg.z = 0.640311049466;
    msg.vx = 0.242667997205;
    msg.vy = 0.0393212369885;
    msg.vz = 0.549658449795;
    msg.ax = 0.77977861902;
    msg.ay = 0.451004655472;
    msg.az = 0.523976122799;
    msg.flags = 60755U;

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
    msg.setTimeStamp(0.916337593629);
    msg.setSource(7802U);
    msg.setSourceEntity(140U);
    msg.setDestination(2011U);
    msg.setDestinationEntity(162U);
    msg.x = 0.46195958758;
    msg.y = 0.729642321888;
    msg.z = 0.299092866113;
    msg.vx = 0.777209396523;
    msg.vy = 0.633953223184;
    msg.vz = 0.465568970782;
    msg.ax = 0.558339253582;
    msg.ay = 0.359919245395;
    msg.az = 0.963674098133;
    msg.flags = 48314U;

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
    msg.setTimeStamp(0.751287944517);
    msg.setSource(65035U);
    msg.setSourceEntity(83U);
    msg.setDestination(5812U);
    msg.setDestinationEntity(28U);
    msg.value = 0.784735703902;

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
    msg.setTimeStamp(0.578937785656);
    msg.setSource(52786U);
    msg.setSourceEntity(5U);
    msg.setDestination(34332U);
    msg.setDestinationEntity(242U);
    msg.value = 0.476969569262;

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
    msg.setTimeStamp(0.416365715803);
    msg.setSource(60941U);
    msg.setSourceEntity(146U);
    msg.setDestination(13289U);
    msg.setDestinationEntity(57U);
    msg.value = 0.0674834208645;

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
    msg.setTimeStamp(0.641552860035);
    msg.setSource(17770U);
    msg.setSourceEntity(221U);
    msg.setDestination(15695U);
    msg.setDestinationEntity(65U);
    msg.timeout = 26559U;
    msg.lat = 0.0690638653938;
    msg.lon = 0.809988742147;
    msg.z = 0.467368602197;
    msg.z_units = 66U;
    msg.speed = 0.166165846372;
    msg.speed_units = 143U;
    msg.roll = 0.0174495058472;
    msg.pitch = 0.0813673049725;
    msg.yaw = 0.603036503889;
    msg.custom.assign("RMZBQURAVB");

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
    msg.setTimeStamp(0.394450524589);
    msg.setSource(2629U);
    msg.setSourceEntity(42U);
    msg.setDestination(61657U);
    msg.setDestinationEntity(161U);
    msg.timeout = 60655U;
    msg.lat = 0.0502303297949;
    msg.lon = 0.507899705657;
    msg.z = 0.409812414084;
    msg.z_units = 120U;
    msg.speed = 0.548379601049;
    msg.speed_units = 250U;
    msg.roll = 0.513300773052;
    msg.pitch = 0.240546782145;
    msg.yaw = 0.0338638624729;
    msg.custom.assign("FBHFUAYYPWBPGDERYZHIADMXOSVJKLSIZZYEBEZZVQCLAIVUAOAJQLXZYYMGZQNBSHKMITCEOXPJMPGJKISOXRICWSRRQUBXWORCSEOLEFEXHIOGWLLBKPHHFCJDLEFICBUTRNNHSNTWUCDKRPFPVIDDCFKABXDWVDGYPKUMYGQZGPAWLVMNIQZMUAH");

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
    msg.setTimeStamp(0.0851732404169);
    msg.setSource(41954U);
    msg.setSourceEntity(195U);
    msg.setDestination(50117U);
    msg.setDestinationEntity(235U);
    msg.timeout = 23642U;
    msg.lat = 0.636141941759;
    msg.lon = 0.414827914272;
    msg.z = 0.367970937837;
    msg.z_units = 15U;
    msg.speed = 0.245391433581;
    msg.speed_units = 217U;
    msg.roll = 0.127886613986;
    msg.pitch = 0.890126695977;
    msg.yaw = 0.323150563299;
    msg.custom.assign("RCFDOVNYNDKNRAOIHVQWGMLKXINUXKAIIHLOUKGYTQPFPYEOVZUQWKGSLWXROZKMBJFSWPNDQHPUJIJVBBWPFLCUIKNXBADUTAHOJWDLLJTDPGSVEQAIFECFHQSXWMZLBBM");

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
    msg.setTimeStamp(0.751075198357);
    msg.setSource(29738U);
    msg.setSourceEntity(95U);
    msg.setDestination(48982U);
    msg.setDestinationEntity(217U);
    msg.timeout = 32590U;
    msg.lat = 0.304840756861;
    msg.lon = 0.123735888524;
    msg.z = 0.909145388319;
    msg.z_units = 130U;
    msg.speed = 0.815861400231;
    msg.speed_units = 185U;
    msg.duration = 15983U;
    msg.radius = 0.156299018925;
    msg.flags = 212U;
    msg.custom.assign("YSYRGPNLHOEKBKLHHPDWSNYNJIJZZIOPQSUAGUYQVBPJSMWEHTPTBFWLZRBBSELOOQDQMINLZZEWUKIBDZLWWMIVBKGDRPDCNJAYJHPTGFEOZYFTVHACYKRVVKXGQQSIXESDMIAM");

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
    msg.setTimeStamp(0.0283217415303);
    msg.setSource(51880U);
    msg.setSourceEntity(153U);
    msg.setDestination(12527U);
    msg.setDestinationEntity(78U);
    msg.timeout = 58979U;
    msg.lat = 0.618569729658;
    msg.lon = 0.527436453446;
    msg.z = 0.792131659159;
    msg.z_units = 225U;
    msg.speed = 0.846033717339;
    msg.speed_units = 206U;
    msg.duration = 26049U;
    msg.radius = 0.926743821934;
    msg.flags = 95U;
    msg.custom.assign("HQZRBKVDJFZPNVUGZQCSDMFJNFFRAVMHBCPWENAAZABNVMRMELDTKQRUQEXOGQYHUPSYRTMLTCLTTLREEIQWSOEYOJXWAXMPFDWBIECYQOYWTJKOYKZJPAJAUHOZHXFSLBLUCDSRGIRYKWBNVDXBNARZFEZMHFZGPCAXSVIXMOOTLWIGVVSSFVDNOPSLDCJXBQDBNWVTCMPOKTGRSHLBG");

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
    msg.setTimeStamp(0.381927529392);
    msg.setSource(9571U);
    msg.setSourceEntity(84U);
    msg.setDestination(55329U);
    msg.setDestinationEntity(79U);
    msg.timeout = 31911U;
    msg.lat = 0.141384126023;
    msg.lon = 0.768070334708;
    msg.z = 0.886960107504;
    msg.z_units = 39U;
    msg.speed = 0.379157681966;
    msg.speed_units = 34U;
    msg.duration = 26109U;
    msg.radius = 0.0808976730175;
    msg.flags = 163U;
    msg.custom.assign("YJOVSGFZEOZCUSHUANKYYWMPJGMJRHZLNRHLRYXFKBBTMJDYVBMWYFNUOOWABXHBHCWASTHXHERLPJVPGFSSTRYCMNTBVPNTQLDBIALFQVXJCRYZAZGRHFUPYZKXPWOPUQFBAOUGOISUUDPQLSRVMMXEEQVGDWDXNJSGIUQIS");

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
    msg.setTimeStamp(0.124858164944);
    msg.setSource(46115U);
    msg.setSourceEntity(108U);
    msg.setDestination(2617U);
    msg.setDestinationEntity(105U);
    msg.custom.assign("NIQBKJAMBWKZIUSZDLJRZVJXRINWBOV");

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
    msg.setTimeStamp(0.849488609072);
    msg.setSource(57364U);
    msg.setSourceEntity(175U);
    msg.setDestination(51046U);
    msg.setDestinationEntity(211U);
    msg.custom.assign("IIIQUZPVCILIRMLCSGZDHVJOHEJNJYXWDLBSZNMEODTHBOXNKCJPMZAKWTMEYDVDFKXHLNTURVTKJUREIEGKCKFCXJPPJFZTLBOZFBXQUUATTHPDXJTHCNQERQYLSVJAATXIOGYIGKRKCNSMGLBF");

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
    msg.setTimeStamp(0.730851812194);
    msg.setSource(14054U);
    msg.setSourceEntity(239U);
    msg.setDestination(4081U);
    msg.setDestinationEntity(111U);
    msg.custom.assign("HCYVGNBJHCVCYGOGZWFMIXFUOCRREXEXLEAJHIQNADSGDWIESPPFUENFUQNGPLUVNSFGTNTUIPKHBRUHKVDFXRTNTSZEBLSZGWIDXYMZCMRWCFSOUUITXYAYSBLUTJVJPWMJPMLTPAKKIHQIZYXQQSYKNOAFZYHGTKJRKFUTEFMCBMCKGBIZJAXOSVYWLBKX");

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
    msg.setTimeStamp(0.914539742773);
    msg.setSource(61429U);
    msg.setSourceEntity(240U);
    msg.setDestination(11060U);
    msg.setDestinationEntity(182U);
    msg.timeout = 63619U;
    msg.lat = 0.121125587751;
    msg.lon = 0.148000032728;
    msg.z = 0.404516002615;
    msg.z_units = 131U;
    msg.duration = 16864U;
    msg.speed = 0.41620735143;
    msg.speed_units = 121U;
    msg.type = 44U;
    msg.radius = 0.238463858788;
    msg.length = 0.0575499087395;
    msg.bearing = 0.0846990561435;
    msg.direction = 184U;
    msg.custom.assign("AIUZZULSHPVOSJOGSCQJNPCOWCFRJJZTUVTEFDPDARWJYIJQURXFEOJNBYNKPGSKZHEDQVHKGJERDZLTIBWEIXIURYKRHGLVJEBVTPWBQOILXVAFFPWKUMLLOEKVLG");

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
    msg.setTimeStamp(0.119863915946);
    msg.setSource(50626U);
    msg.setSourceEntity(8U);
    msg.setDestination(14139U);
    msg.setDestinationEntity(246U);
    msg.timeout = 40776U;
    msg.lat = 0.657078713564;
    msg.lon = 0.950593129968;
    msg.z = 0.972220436245;
    msg.z_units = 31U;
    msg.duration = 45049U;
    msg.speed = 0.580264642381;
    msg.speed_units = 245U;
    msg.type = 18U;
    msg.radius = 0.0083386271254;
    msg.length = 0.479384765868;
    msg.bearing = 0.706596452834;
    msg.direction = 214U;
    msg.custom.assign("UJKDRXBCEBNXHOMFGBGRPCSHSAEKWWTXDMOTXFZCKPXDVNPVRZQESOSWFT");

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
    msg.setTimeStamp(0.185851358753);
    msg.setSource(13388U);
    msg.setSourceEntity(56U);
    msg.setDestination(18351U);
    msg.setDestinationEntity(235U);
    msg.timeout = 56111U;
    msg.lat = 0.188601041602;
    msg.lon = 0.964258989273;
    msg.z = 0.0242364097026;
    msg.z_units = 79U;
    msg.duration = 9206U;
    msg.speed = 0.994045443254;
    msg.speed_units = 110U;
    msg.type = 113U;
    msg.radius = 0.307493756738;
    msg.length = 0.860805114472;
    msg.bearing = 0.936291073164;
    msg.direction = 10U;
    msg.custom.assign("WQRAONRKFIQLXCYSRBDYVSJKYKKSFAXZORQYJEBWHMUPNXIWV");

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
    msg.setTimeStamp(0.739402947286);
    msg.setSource(42531U);
    msg.setSourceEntity(166U);
    msg.setDestination(42147U);
    msg.setDestinationEntity(100U);
    msg.duration = 31820U;
    msg.custom.assign("IUXSPRPPVQDRBUZKIGKYUBYWRRTAGQZMBLGYCCNAYQXTVTDOYVKZCNKWOJFRHTPJXZKQBFBSGHMJERQBCVYJTNIGDVOXEXHXSUWZBLRVTRFTBRFEVLMCHXDYNOGAYIVLKPDFWSXGDSMKMHYZ");

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
    msg.setTimeStamp(0.110587171078);
    msg.setSource(54920U);
    msg.setSourceEntity(201U);
    msg.setDestination(47913U);
    msg.setDestinationEntity(175U);
    msg.duration = 6108U;
    msg.custom.assign("RNBQGAYGEPPMLZJSKXHXNNYUQAQQIPABMYDAQEVSXHKSRBEPCAMCSEIVVOVEBIHLYFLCMXVFTGLOJEJTYFTJXJPQIZOBECSLCWWOQKBHNXZHRSDMAEUQUVJROGCKIFRTYRNFXUCWJBBPTANFLUEZHXALWLIOTOY");

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
    msg.setTimeStamp(0.849958128598);
    msg.setSource(28062U);
    msg.setSourceEntity(169U);
    msg.setDestination(23227U);
    msg.setDestinationEntity(159U);
    msg.duration = 30877U;
    msg.custom.assign("CNZDMDZTSKYCUWETVGVIBCOXNGHJJKOXABUAWAHKMRJZZUPHALWRNBNULJSLPBXTBVHFHZPCBMBKUPZQCSRWKYIZGMNIQAOGNNYVOTJCYOVTQQSSGCLDZPKWTLOSAFXZUEXOJVBEVDQFEMDOENPDFEPHMQBWOWURQLCJLKBGRAPFRAHJKYDUXMFIISGDMLT");

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
    msg.setTimeStamp(0.967328344549);
    msg.setSource(64946U);
    msg.setSourceEntity(247U);
    msg.setDestination(37644U);
    msg.setDestinationEntity(129U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0366969211905;
    tmp_msg_0.speed_units = 67U;
    msg.control.set(tmp_msg_0);
    msg.duration = 5450U;
    msg.custom.assign("NYOQRWEUSTOGZUPTJRGQIEWXHYTICOAZFMXCAUQFZEPZTCVTYPXGUKQYFMZWKNSFLVTHAHCUDMJUGSCGSNNMUWLPKFOEVUJVSRHPNLRWVPABGCNSLDGGWINKMTWFQTQQAWKPJYWYJCJZNHXMARBRVOCXSRDUXDHNFRBIMKHXEDMKBOOJBHFJVGLIUIJBMIAODPODBFVVLYQ");

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
    msg.setTimeStamp(0.656289210278);
    msg.setSource(37094U);
    msg.setSourceEntity(226U);
    msg.setDestination(63601U);
    msg.setDestinationEntity(204U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.328936663381;
    msg.control.set(tmp_msg_0);
    msg.duration = 54716U;
    msg.custom.assign("OSGKXHTDXBQXZ");

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
    msg.setTimeStamp(0.55727355667);
    msg.setSource(33423U);
    msg.setSourceEntity(139U);
    msg.setDestination(61612U);
    msg.setDestinationEntity(104U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.738692846979;
    tmp_msg_0.speed_units = 195U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12673U;
    msg.custom.assign("FGLFMVHKAAXQCGOIOUGAXRQBGJOSBEKMSNYVLFNUZKPYYPHJNDWIEGKQWEMCLZHHKRSDDRQEVHAYYTIJMHJNIBKTOFULIKAZEOQPRGPNECNKPPTLOZSRNHJWZIBIXEMVVWAKYFXPRQCLUALIZQDHVBLYMQITAJAACXBFTWCTWXMWFSRSQSJVMCRXZGLRRNZMPXOGBTMDTW");

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
    msg.setTimeStamp(0.244134609398);
    msg.setSource(38545U);
    msg.setSourceEntity(251U);
    msg.setDestination(47038U);
    msg.setDestinationEntity(26U);
    msg.timeout = 42585U;
    msg.lat = 0.270345824256;
    msg.lon = 0.10938245126;
    msg.z = 0.845224909095;
    msg.z_units = 194U;
    msg.speed = 0.691267304619;
    msg.speed_units = 182U;
    msg.bearing = 0.860688442147;
    msg.cross_angle = 0.685623794837;
    msg.width = 0.484915599177;
    msg.length = 0.484557041591;
    msg.hstep = 0.055618248376;
    msg.coff = 5U;
    msg.alternation = 254U;
    msg.flags = 217U;
    msg.custom.assign("THFGLVOZKZEWLFSDP");

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
    msg.setTimeStamp(0.174752912349);
    msg.setSource(5089U);
    msg.setSourceEntity(176U);
    msg.setDestination(20493U);
    msg.setDestinationEntity(59U);
    msg.timeout = 1749U;
    msg.lat = 0.626906117704;
    msg.lon = 0.807288295813;
    msg.z = 0.973558345921;
    msg.z_units = 100U;
    msg.speed = 0.369246526162;
    msg.speed_units = 208U;
    msg.bearing = 0.92029439871;
    msg.cross_angle = 0.839281883985;
    msg.width = 0.741596447389;
    msg.length = 0.271595174321;
    msg.hstep = 0.99520305944;
    msg.coff = 195U;
    msg.alternation = 179U;
    msg.flags = 13U;
    msg.custom.assign("QTRWTXUKHNOLPXLPDGSAOJUYEVDPMVMSCXYHOGMQXWPWJVNHWGOYLQMYCPVPDBJQZOAAZYXIIRCGUPBLYENMIRRVSYHIOLWKFZYKHTGZDJOEZGZKDUWZNXCSSRTUVNUCALKFQFJTRDSUJMRTXGNJABNBWVNHCREEHDOQI");

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
    msg.setTimeStamp(0.447982904947);
    msg.setSource(2797U);
    msg.setSourceEntity(4U);
    msg.setDestination(30983U);
    msg.setDestinationEntity(57U);
    msg.timeout = 29699U;
    msg.lat = 0.826205159516;
    msg.lon = 0.417512565739;
    msg.z = 0.0149805738455;
    msg.z_units = 134U;
    msg.speed = 0.272337064414;
    msg.speed_units = 26U;
    msg.bearing = 0.319163989662;
    msg.cross_angle = 0.270259364383;
    msg.width = 0.74101621079;
    msg.length = 0.88915750594;
    msg.hstep = 0.0808018468477;
    msg.coff = 137U;
    msg.alternation = 246U;
    msg.flags = 21U;
    msg.custom.assign("PYXJMTIMZHOPLHWSWZXBOUYJSQLCJOVPUHXOVVZPWISSNQWVGWYJPGGSOMJHOPGPNFAYKXJLDKGTRBATINAFLJQZSKCDGUDERFAZUGMCFBOYDCECKNFQNRBNFYIMTSHJMMAIDPIADALOUTYQUFGCLEETDSQWTITQHBHXIAZRLJSZQLYBPVVDEFXVXWBBEK");

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
    msg.setTimeStamp(0.728590171027);
    msg.setSource(54356U);
    msg.setSourceEntity(163U);
    msg.setDestination(34104U);
    msg.setDestinationEntity(120U);
    msg.timeout = 6695U;
    msg.lat = 0.0366429166425;
    msg.lon = 0.430413089984;
    msg.z = 0.494272098907;
    msg.z_units = 16U;
    msg.speed = 0.668152314006;
    msg.speed_units = 88U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0465760461797;
    tmp_msg_0.y = 0.0187818097038;
    tmp_msg_0.z = 0.571089094264;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NRBYFEZUCTVBXZTJIQJASSBZMYOEDGWJXWPFCMXIMDBHXLFLYNRVOGYOYSFPFGCNSEEUBRBMYXPCBYVUHWRIGNMXSMAGNDIWKHLJKCLTVQEDRVQSJNRWAPDVOBNPZHVHZLEOMAHDJZOFTARLTQWIIEYUDLEKFRTDBKASKPZMJCPIQQGFIGHLMMSVJXUCOYUZQNWAACULEPWTUGOCWYFTSAGWARJDOLXCHZKXIEBRGHJQUPDNSQK");

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
    msg.setTimeStamp(0.111612736829);
    msg.setSource(8736U);
    msg.setSourceEntity(46U);
    msg.setDestination(4465U);
    msg.setDestinationEntity(212U);
    msg.timeout = 50236U;
    msg.lat = 0.455930084861;
    msg.lon = 0.557405200033;
    msg.z = 0.609921984974;
    msg.z_units = 55U;
    msg.speed = 0.185278769614;
    msg.speed_units = 235U;
    msg.custom.assign("GIVAOXJDAIFHKKSZMOCPJRZUYROLXKGSSGLHZJRANVDIKBOOHTAFPCNUDEZNPAIFGMWBHMPUNRWOXUUOHEJBULNSGYLAZTFPMAEUQWBJWEZXJSDBLQVADPHHIAGVRN");

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
    msg.setTimeStamp(0.846390722571);
    msg.setSource(1072U);
    msg.setSourceEntity(90U);
    msg.setDestination(32243U);
    msg.setDestinationEntity(219U);
    msg.timeout = 44655U;
    msg.lat = 0.25087359881;
    msg.lon = 0.159497884191;
    msg.z = 0.370628802231;
    msg.z_units = 86U;
    msg.speed = 0.175842104496;
    msg.speed_units = 42U;
    msg.custom.assign("BVYXOMMZGJHOXTXUTGZQHLVNDSXIXZOKSFULSKIGDZEKXDUAISJHPQNVSSFPRCUANREZTXYEFLXRXTVSCDPHILNWRJFPWEOOCNMNRYIYNDDJCRXEAUNCPITHBPTQUMRPLVLBSJIYBZFAQYQAZHLUGQHEYQTAVLKUTVIKQVAWFTMFBJBOEGOWBGPZKDHJWWKNYFNREWKVRUFY");

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
    msg.setTimeStamp(0.0323069017445);
    msg.setSource(14733U);
    msg.setSourceEntity(144U);
    msg.setDestination(49124U);
    msg.setDestinationEntity(109U);
    msg.x = 0.974552605256;
    msg.y = 0.588346710335;
    msg.z = 0.848331936707;

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
    msg.setTimeStamp(0.819579122865);
    msg.setSource(60583U);
    msg.setSourceEntity(144U);
    msg.setDestination(48452U);
    msg.setDestinationEntity(129U);
    msg.x = 0.0615598347244;
    msg.y = 0.664239942539;
    msg.z = 0.540585453428;

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
    msg.setTimeStamp(0.823135147208);
    msg.setSource(47825U);
    msg.setSourceEntity(218U);
    msg.setDestination(43561U);
    msg.setDestinationEntity(189U);
    msg.x = 0.409923215192;
    msg.y = 0.689188592086;
    msg.z = 0.724516578289;

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
    msg.setTimeStamp(0.769511202413);
    msg.setSource(11735U);
    msg.setSourceEntity(143U);
    msg.setDestination(46271U);
    msg.setDestinationEntity(197U);
    msg.timeout = 756U;
    msg.lat = 0.31613619732;
    msg.lon = 0.817108004451;
    msg.z = 0.633551941103;
    msg.z_units = 31U;
    msg.amplitude = 0.607326357468;
    msg.pitch = 0.95589373479;
    msg.speed = 0.864372942831;
    msg.speed_units = 129U;
    msg.custom.assign("ENSUAYKWEUGHRSCSJBNXLUOWLORVPNFLGMVYJZTDKTXBKTORXCVYQDBSDXXTVYSRJIZDWMSIHAIPPMYADGXPKHSDPNIHCHGRTCEZDRWGAWUKFOJSNWOSMYYVXGBBYVIFIKVDVCJGZFHQBPUTYNCQJAFTLQUJADXWPIFAN");

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
    msg.setTimeStamp(0.25812956074);
    msg.setSource(50680U);
    msg.setSourceEntity(27U);
    msg.setDestination(12985U);
    msg.setDestinationEntity(243U);
    msg.timeout = 29129U;
    msg.lat = 0.388999917167;
    msg.lon = 0.222726804878;
    msg.z = 0.204120065408;
    msg.z_units = 87U;
    msg.amplitude = 0.956852170979;
    msg.pitch = 0.544183598821;
    msg.speed = 0.410617907365;
    msg.speed_units = 227U;
    msg.custom.assign("DPEMXNQKTNJBARQTGULTUTQMPWKNCBLPACWULBMVWSOVWKBLZBFIOFGSOXEVNPLKJYLKFKUFLLOORCGXVMFRKQBWLNJHJVZEAMQGQONZYNRSTHAZEGVPPMADZPISBOGMIXULHYDCRHGDHPOSXHXPHXQJOZBCNDVFIFHFTIKUCDCWWRRCBDJWYGSMSIJQQKGYPXDEAIYWVYDCEATSAXNJZSZUEYFJXHTAROWJUYIDFTUQGMUEZHZYV");

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
    msg.setTimeStamp(0.396996196492);
    msg.setSource(24634U);
    msg.setSourceEntity(109U);
    msg.setDestination(45954U);
    msg.setDestinationEntity(30U);
    msg.timeout = 34972U;
    msg.lat = 0.479388370725;
    msg.lon = 0.699263221675;
    msg.z = 0.2910818037;
    msg.z_units = 211U;
    msg.amplitude = 0.191632796667;
    msg.pitch = 0.0179850084549;
    msg.speed = 0.693635099783;
    msg.speed_units = 184U;
    msg.custom.assign("QILGDPWZZJFDJVFSNQKEPLIDFGZFAYPPTLMATVGQOIRMZEHAZDZGYCJZMBNKGTUSKFIGBANCPYKXOUNWVCUDTYOTJDELXRAHXEAYICWULYWSFIWREXKHOFPRHUULKOKFAXQGCUOCQRWJVBVSUNKMDPHELXPPSECNLBEIFTSXOVQMVXZBOJRAXOHJIYREDIKQRYLSGNYCMBYTMNJPBJHMASSFBNJHOQQWEUVHMRGXQNSGT");

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
    msg.setTimeStamp(0.54079803188);
    msg.setSource(3445U);
    msg.setSourceEntity(166U);
    msg.setDestination(60808U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.643752314544);
    msg.setSource(23655U);
    msg.setSourceEntity(160U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.104054853253);
    msg.setSource(49236U);
    msg.setSourceEntity(121U);
    msg.setDestination(49476U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.106645733701);
    msg.setSource(6672U);
    msg.setSourceEntity(183U);
    msg.setDestination(64834U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.789341718717;
    msg.lon = 0.896524751721;
    msg.z = 0.60120580318;
    msg.z_units = 218U;
    msg.radius = 0.984914018871;
    msg.duration = 17375U;
    msg.speed = 0.658688045746;
    msg.speed_units = 82U;
    msg.custom.assign("AJUXTIEBACMEFRBHKPYSLLNQDGQRPZWYMHHFOPOPNUGVPJBIWCUPVTKKAPZQRXCNFFYTXYBEGWUVJTKNDMGWLDHOUSZERJEJLYAVSXOWZTXSZGSIRIHEKHFJFMSZZJGSTZVKMQENMKHQOOEFVHKBBIWXNHKDUFTUXJTVYDB");

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
    msg.setTimeStamp(0.0722592318504);
    msg.setSource(61155U);
    msg.setSourceEntity(6U);
    msg.setDestination(31019U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.64681191039;
    msg.lon = 0.715146994687;
    msg.z = 0.890200500949;
    msg.z_units = 138U;
    msg.radius = 0.0969800155185;
    msg.duration = 51482U;
    msg.speed = 0.0348401465103;
    msg.speed_units = 181U;
    msg.custom.assign("VMXIZHIWQKITTEDHTKONLCYZHLDHVQPEGLZKFNTXBRPFOERTYSMFAKPAKOYZRBPJAMVQRSLAGDWZTNCUPBOYEGOFASRSFRCGTSXCBNCEKYKSHICRMKBEJPYOIXYUPIEGBJHQUSXDFLIAECMNNHSACLLXVXRBZKJQDJNQUDVGMWQCJMIHUU");

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
    msg.setTimeStamp(0.168031565577);
    msg.setSource(41370U);
    msg.setSourceEntity(228U);
    msg.setDestination(12530U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.463095311867;
    msg.lon = 0.126744224095;
    msg.z = 0.704794430363;
    msg.z_units = 56U;
    msg.radius = 0.37150344051;
    msg.duration = 58120U;
    msg.speed = 0.603592000353;
    msg.speed_units = 109U;
    msg.custom.assign("CMMXMSYWMYQHKUPFREWCGBOGFBUSBKBPPFBAYRMBPTXFONDLHUJJKCIPTDXAXPKZWGEYGFKQKELQJJZLEWXTHUCOLRZLZHHJLQEDLJGCIODOWAQSXRPDEYXPACYECZFNRKBCVZSB");

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
    msg.setTimeStamp(0.0383845003486);
    msg.setSource(19173U);
    msg.setSourceEntity(79U);
    msg.setDestination(44483U);
    msg.setDestinationEntity(178U);
    msg.timeout = 35609U;
    msg.flags = 112U;
    msg.lat = 0.911398720397;
    msg.lon = 0.975766706996;
    msg.start_z = 0.963694555566;
    msg.start_z_units = 2U;
    msg.end_z = 0.829314011187;
    msg.end_z_units = 188U;
    msg.radius = 0.768100085908;
    msg.speed = 0.3621431893;
    msg.speed_units = 132U;
    msg.custom.assign("APTMWFPSJLUNPNYJHCTDGQUIEDRNKGHZQTXALYHFTNQNJZQKMBAZSXFMTDEXZSEJWRRZBKUVEIOVXLNYDBIPTKEJLAOJFWDDBAVJGGXSYWYPHYLAOKBGRQCACUMSMFZMDCVEYI");

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
    msg.setTimeStamp(0.473276961728);
    msg.setSource(40377U);
    msg.setSourceEntity(210U);
    msg.setDestination(29205U);
    msg.setDestinationEntity(162U);
    msg.timeout = 31542U;
    msg.flags = 194U;
    msg.lat = 0.709734431067;
    msg.lon = 0.407752801999;
    msg.start_z = 0.834664739833;
    msg.start_z_units = 230U;
    msg.end_z = 0.316681722214;
    msg.end_z_units = 164U;
    msg.radius = 0.812298763495;
    msg.speed = 0.796310806962;
    msg.speed_units = 194U;
    msg.custom.assign("VTQIIPBYHVJPKZNHRRCOMYFPGEUGJLFGUFZVXIWWJUEPUQZWUIKLYSKBQHDOVSAZSFXWXNTMPTBZNEDUSYCDKVKBRBCIFEJIBYMJENAKWDFJUGTMDLKFUCIERAOAQNUFXWGLTREIOLVZOCOONACHMZUAWYTLXVWCXOWHYKRTLBSGYCZVMPQSSQQXPVAGJNHPLCQOHAXMKS");

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
    msg.setTimeStamp(0.508428549244);
    msg.setSource(33068U);
    msg.setSourceEntity(44U);
    msg.setDestination(1433U);
    msg.setDestinationEntity(97U);
    msg.timeout = 23193U;
    msg.flags = 53U;
    msg.lat = 0.420083873492;
    msg.lon = 0.775584366552;
    msg.start_z = 0.830893967306;
    msg.start_z_units = 247U;
    msg.end_z = 0.169673089396;
    msg.end_z_units = 54U;
    msg.radius = 0.265914543126;
    msg.speed = 0.67579344089;
    msg.speed_units = 252U;
    msg.custom.assign("YNLTEFJCEGNUVMIDSDJQSKDHNZUELTCCSIDNUWPFYJNTABTPWSNRCUBIZKQZXVLHTFXVSPUYHXCTHGVABIZNWYICEHOEFUZWGQBBJIKZIWDMOTIUXYUDGLDYRZGSFHQZYPYVIDACWVFSOVMVOWIJYNMOKCLPARROJRLGSFSWMFBJGDEACMKHRANXXQDHKOCJTAQRLSXPJPJ");

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
    msg.setTimeStamp(0.554933140679);
    msg.setSource(51756U);
    msg.setSourceEntity(79U);
    msg.setDestination(29692U);
    msg.setDestinationEntity(213U);
    msg.timeout = 20561U;
    msg.lat = 0.7673004436;
    msg.lon = 0.743371662098;
    msg.z = 0.936687336524;
    msg.z_units = 126U;
    msg.speed = 0.110597143977;
    msg.speed_units = 158U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.28947545847;
    tmp_msg_0.y = 0.69802902313;
    tmp_msg_0.z = 0.202987349204;
    tmp_msg_0.t = 0.670032217909;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WDEVAFCQUFYPNJVVZWQEOGYFSTBBKVVWACPWUNRLRHYPUXJPWJOEAXFLMBICABWQTSWIUAODHTUNJNJOQRVYHJHJMTIUVPXVZFXVZIJPDMRQMLHPSCXCIDLBNDMZEZYHKGEXKOKSQBTGIQBPQYSIKLXAMGMKWSKNDNCTHSUHOZUSRGEMDHIASTLKICWDOGFZCJLVEFEENMOGARTQUXYGMYNRRWBUCFHBYXKPFTO");

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
    msg.setTimeStamp(0.74096773898);
    msg.setSource(30635U);
    msg.setSourceEntity(199U);
    msg.setDestination(20976U);
    msg.setDestinationEntity(171U);
    msg.timeout = 14901U;
    msg.lat = 0.228035604968;
    msg.lon = 0.580402628255;
    msg.z = 0.555893532465;
    msg.z_units = 206U;
    msg.speed = 0.865546249985;
    msg.speed_units = 178U;
    msg.custom.assign("YSRUMHALQOIXWFNTBNSHKIMVKQHQVBQWIRLPLQTHASUKNWXDFLCKDRCZXECMDBKXCIMQIDLZWVKYPJAYJZCEHAHEHLVKEHQNGXOASGTFDNVZFNUEXNXJLCVFJCXIMKSAUUYKIROWQPPABJWGBJOUYVYTNGERSGMCIQOBZNGOEWD");

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
    msg.setTimeStamp(0.0434068470741);
    msg.setSource(50354U);
    msg.setSourceEntity(220U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(253U);
    msg.timeout = 38651U;
    msg.lat = 0.911471197354;
    msg.lon = 0.0831086586383;
    msg.z = 0.612955945771;
    msg.z_units = 86U;
    msg.speed = 0.37177972788;
    msg.speed_units = 131U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.287037274628;
    tmp_msg_0.y = 0.0820307382874;
    tmp_msg_0.z = 0.268113431425;
    tmp_msg_0.t = 0.221545526287;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QVUQVDLLIJDRRNVXORSHRTICDZULFSSCJCJQXQXWGYMONUROVWQLFMSICJOCKVDWAZKYYPZHKQGAPJHXFOEZUXZHINAGENSIATBETUOLYXLKUSQNIVFJNZRDBWTLBVWCKAHTMPCDPGHEEIQMYJWGDTZNWMRYUAORXMUHZCFRKPMAPYGETZCXRIBYPQSJHGZPWIISDLNJCTQWXEUOBHPLGAJGUBNKTBYFESFBDFOBFWXHDVYSMPEVBOMMT");

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
    msg.setTimeStamp(0.169955517477);
    msg.setSource(4946U);
    msg.setSourceEntity(188U);
    msg.setDestination(33057U);
    msg.setDestinationEntity(139U);
    msg.x = 0.961342943121;
    msg.y = 0.397498530839;
    msg.z = 0.967753351606;
    msg.t = 0.883885481526;

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
    msg.setTimeStamp(0.524963673319);
    msg.setSource(11263U);
    msg.setSourceEntity(198U);
    msg.setDestination(46819U);
    msg.setDestinationEntity(49U);
    msg.x = 0.210735585434;
    msg.y = 0.636177217359;
    msg.z = 0.846300939849;
    msg.t = 0.488629712441;

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
    msg.setTimeStamp(0.596632235309);
    msg.setSource(19095U);
    msg.setSourceEntity(199U);
    msg.setDestination(9749U);
    msg.setDestinationEntity(172U);
    msg.x = 0.541363542226;
    msg.y = 0.86404136391;
    msg.z = 0.724126604274;
    msg.t = 0.92633038732;

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
    msg.setTimeStamp(0.226851125518);
    msg.setSource(6663U);
    msg.setSourceEntity(251U);
    msg.setDestination(4184U);
    msg.setDestinationEntity(170U);
    msg.timeout = 991U;
    msg.name.assign("MRZNHNPUCCLVYUZHMLOBQWMJCWTGLERYBEKSFVVQNRDJLRUOIJAGNCFQYEPXYGWBTVKRKEZOHSHCAXRQATWJXSFYSLHETUKAQMMUKIFPJXGDLWLKHJSGSEBOVIAXAMVED");
    msg.custom.assign("QJYINBNOXMYFDKRVLXVDJVMXZBMPTUMGFPMZEAMXYEAFTTJSRFDIRTKGDLKRYZUOISXYXZLHSNQBZVKTDJWGBZLHPCUCIHMKWETZAFSJKXRRSHWJUPKAMVNBDVIQTAOOBOEHOVFUWNZMDQECMYARPNTYBGTCDJYLJAQHGDHBHUPQRLSOIEHAVGFHSCKBGLEPSVDLYPWGIKNSWCIOXEJCWFNARCECNLUXTUGWCYFJZ");

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
    msg.setTimeStamp(0.132523060125);
    msg.setSource(30171U);
    msg.setSourceEntity(23U);
    msg.setDestination(37806U);
    msg.setDestinationEntity(38U);
    msg.timeout = 46615U;
    msg.name.assign("NPICQTVNVPEQTYBNUOHEKBTVYUEBQALZDUXLYBJKEBQGXSFGTMCRRYNHMMJIHMMPQFAQAOTCMKOZAEGRPJZLDHXVPGHSAWHBEULGBDGLWRFYGSRMJBTTSSNWOUXCTEFFHZVPKEKPNORNWIIGCIAJZPUSRCYIKCLUIDXXACFHDPLMMWNOWOBADOG");
    msg.custom.assign("IJYWGVKHDZRQCLXWHVZNUSAQRBSMOTDNPZRBHOKKWSMGQCLEZUWMPTXUGEAXJRCPUJYNNEWWKKIFKXYRIKGDSIBLFBZNFONSSGMOHMXAPTGCDUHHOOBSDGQVEZAYEMTNFOCZQRPHLCLXYEPADGYGXMFIITRR");

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
    msg.setTimeStamp(0.581225017905);
    msg.setSource(39110U);
    msg.setSourceEntity(192U);
    msg.setDestination(63475U);
    msg.setDestinationEntity(224U);
    msg.timeout = 60978U;
    msg.name.assign("QWGKXPBIYKSMKYASTYMHDRXDBFFCFFZVZFZKBETDYJMNIABRGIKZQGHZHLBPZTCBUPQEBRMBGOFXOLIMWQXWJGXAPHFDJFGQQCNWPHNU");
    msg.custom.assign("RTACUOIVDQWLQDBHMUBNFYECKASGCEABHLFLUIHTIANBRNWDKSZZGKTJRAKMMLTZXQGGZHTJSJ");

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
    msg.setTimeStamp(0.572821893965);
    msg.setSource(50889U);
    msg.setSourceEntity(225U);
    msg.setDestination(55538U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.549903283553;
    msg.lon = 0.141118817212;
    msg.z = 0.345099447411;
    msg.z_units = 145U;
    msg.speed = 0.695769348007;
    msg.speed_units = 119U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.696854977901;
    tmp_msg_0.y = 0.731328865248;
    tmp_msg_0.z = 0.243498987443;
    tmp_msg_0.t = 0.910928085962;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 63297U;
    tmp_msg_1.off_x = 0.627207224773;
    tmp_msg_1.off_y = 0.888839781638;
    tmp_msg_1.off_z = 0.685105509745;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.549204972686;
    msg.custom.assign("IBRBYDJKFXUJCEXAAZUYFWAZQXDPULSUYVWAHBFHOKHONNPAKWOJCWWFHRLKYYGEAGKPTHFXMYMWBETGXWVDMFIJOOOYIZMTZQYBMFOROSGWDLJVSXCHPNRLHJKIITESFXKCZBEMRLAAFRKTDZLNTCONTPYOZXCGTUQQKZVNSU");

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
    msg.setTimeStamp(0.683235416204);
    msg.setSource(15091U);
    msg.setSourceEntity(83U);
    msg.setDestination(58768U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.726687898891;
    msg.lon = 0.38473773391;
    msg.z = 0.527476074734;
    msg.z_units = 62U;
    msg.speed = 0.822277025417;
    msg.speed_units = 40U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42057U;
    tmp_msg_0.off_x = 0.621465756239;
    tmp_msg_0.off_y = 0.142277691975;
    tmp_msg_0.off_z = 0.753726394111;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.464459214095;
    msg.custom.assign("WQIEKYILVGCLAOOOLCYAITGVGDPWBFMAAMLMBGCXNOSWUVRIVWVQYZWHRSDONPXPQLJAISKOWGIUQNUWLFFNMXSHSGMJXVMAZEPYIAFJNNCXUSXDTUVYETKRBTFMAEKFXBPXNHZCGHZSGWLKMJJKCDUPEHTEZQZKVGRZBHKJNC");

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
    msg.setTimeStamp(0.331679744657);
    msg.setSource(5228U);
    msg.setSourceEntity(223U);
    msg.setDestination(22292U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.603106706869;
    msg.lon = 0.663431618891;
    msg.z = 0.336095474025;
    msg.z_units = 241U;
    msg.speed = 0.538875451714;
    msg.speed_units = 23U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.60997452265;
    tmp_msg_0.y = 0.352506914169;
    tmp_msg_0.z = 0.904964998808;
    tmp_msg_0.t = 0.116986423605;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 32499U;
    tmp_msg_1.off_x = 0.742515826412;
    tmp_msg_1.off_y = 0.592909108911;
    tmp_msg_1.off_z = 0.796053234354;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.848561864099;
    msg.custom.assign("DCJYELNAXAZLNJXOMEUXMMBZAJGTUIWPZRVGUNQQKAWLNNBOBTISSOTNYAHXKXARGKJPFRSDRYPVMHHBCRELQJBQFMGXJVIFMFNIYDECDETFDZQLWMNYZKHKGOYXVWBDUKIKEHRSHYEYZWCYZRHWCGBDKDUWYVRTORCVFVBT");

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
    msg.setTimeStamp(0.380638568343);
    msg.setSource(2454U);
    msg.setSourceEntity(2U);
    msg.setDestination(6706U);
    msg.setDestinationEntity(103U);
    msg.vid = 6872U;
    msg.off_x = 0.472327910298;
    msg.off_y = 0.958410254253;
    msg.off_z = 0.0191463039085;

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
    msg.setTimeStamp(0.526724618857);
    msg.setSource(54336U);
    msg.setSourceEntity(151U);
    msg.setDestination(33467U);
    msg.setDestinationEntity(208U);
    msg.vid = 58109U;
    msg.off_x = 0.708323662909;
    msg.off_y = 0.733376507764;
    msg.off_z = 0.854028325834;

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
    msg.setTimeStamp(0.551439120282);
    msg.setSource(58150U);
    msg.setSourceEntity(79U);
    msg.setDestination(20910U);
    msg.setDestinationEntity(4U);
    msg.vid = 37231U;
    msg.off_x = 0.0935190030381;
    msg.off_y = 0.647031555924;
    msg.off_z = 0.761334807342;

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
    msg.setTimeStamp(0.411615238141);
    msg.setSource(50918U);
    msg.setSourceEntity(122U);
    msg.setDestination(41976U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.952247943803);
    msg.setSource(26772U);
    msg.setSourceEntity(140U);
    msg.setDestination(13098U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.00374967139623);
    msg.setSource(45659U);
    msg.setSourceEntity(14U);
    msg.setDestination(51775U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.958780846369);
    msg.setSource(33065U);
    msg.setSourceEntity(89U);
    msg.setDestination(45554U);
    msg.setDestinationEntity(139U);
    msg.mid = 36974U;

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
    msg.setTimeStamp(0.510819009366);
    msg.setSource(39577U);
    msg.setSourceEntity(44U);
    msg.setDestination(48359U);
    msg.setDestinationEntity(148U);
    msg.mid = 27162U;

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
    msg.setTimeStamp(0.102234786538);
    msg.setSource(12440U);
    msg.setSourceEntity(146U);
    msg.setDestination(3583U);
    msg.setDestinationEntity(203U);
    msg.mid = 22970U;

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
    msg.setTimeStamp(0.765757191133);
    msg.setSource(57486U);
    msg.setSourceEntity(28U);
    msg.setDestination(33582U);
    msg.setDestinationEntity(8U);
    msg.state = 122U;
    msg.eta = 62094U;
    msg.info.assign("VMUREDWCJKNITTCCZAIPTREIGLZFYEZAJRYQPCNOJPKHGOBMVDGQMGAVAZSYDPEDHWIN");

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
    msg.setTimeStamp(0.962496941381);
    msg.setSource(11235U);
    msg.setSourceEntity(235U);
    msg.setDestination(27244U);
    msg.setDestinationEntity(207U);
    msg.state = 95U;
    msg.eta = 26549U;
    msg.info.assign("LIJTMZBKACYSPOWNYASPWGXEYEUJCVHIPQNHJSIBRMDIRWKSRQXAOADTGRMQIBUKMHZJADEGSTCOAUZQGFZOXH");

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
    msg.setTimeStamp(0.830980060431);
    msg.setSource(15642U);
    msg.setSourceEntity(57U);
    msg.setDestination(4702U);
    msg.setDestinationEntity(200U);
    msg.state = 250U;
    msg.eta = 20015U;
    msg.info.assign("MXDNHEPCEGYCPLXFSGZRQEWVESTLWZHEMRGLAGQKRCRSARCXDGBJDWYHGPEUYAPIPRAVDOUJXMTOIPFJQIXSQIMFEFWVZMVHAJGBBFWTUFZURYJEIIZDJKHAAQYNQLEIUAQYHDZAKXXLVTCJHKDT");

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
    msg.setTimeStamp(0.593014505612);
    msg.setSource(51714U);
    msg.setSourceEntity(214U);
    msg.setDestination(15413U);
    msg.setDestinationEntity(153U);
    msg.system = 59920U;
    msg.duration = 6802U;
    msg.speed = 0.820315277543;
    msg.speed_units = 111U;
    msg.x = 0.985030386537;
    msg.y = 0.958231003229;
    msg.z = 0.721030788436;
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
    msg.setTimeStamp(0.395662526198);
    msg.setSource(63260U);
    msg.setSourceEntity(38U);
    msg.setDestination(59648U);
    msg.setDestinationEntity(195U);
    msg.system = 50919U;
    msg.duration = 58999U;
    msg.speed = 0.44963770227;
    msg.speed_units = 215U;
    msg.x = 0.465015599344;
    msg.y = 0.10847018513;
    msg.z = 0.40730542618;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.269029928131);
    msg.setSource(34697U);
    msg.setSourceEntity(152U);
    msg.setDestination(33550U);
    msg.setDestinationEntity(102U);
    msg.system = 6475U;
    msg.duration = 41568U;
    msg.speed = 0.404075777276;
    msg.speed_units = 84U;
    msg.x = 0.955520862386;
    msg.y = 0.709744531703;
    msg.z = 0.264037962932;
    msg.z_units = 55U;

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
    msg.setTimeStamp(0.182801718171);
    msg.setSource(14266U);
    msg.setSourceEntity(123U);
    msg.setDestination(50157U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.741718804166;
    msg.lon = 0.506566200862;
    msg.speed = 0.330482695423;
    msg.speed_units = 20U;
    msg.duration = 37209U;
    msg.sys_a = 14524U;
    msg.sys_b = 21654U;
    msg.move_threshold = 0.516318168779;

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
    msg.setTimeStamp(0.702601957588);
    msg.setSource(34276U);
    msg.setSourceEntity(183U);
    msg.setDestination(11792U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.661922122552;
    msg.lon = 0.202335557365;
    msg.speed = 0.911495370195;
    msg.speed_units = 111U;
    msg.duration = 51704U;
    msg.sys_a = 36610U;
    msg.sys_b = 46273U;
    msg.move_threshold = 0.354750176499;

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
    msg.setTimeStamp(0.906714687367);
    msg.setSource(60991U);
    msg.setSourceEntity(168U);
    msg.setDestination(3938U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.173295490257;
    msg.lon = 0.30601915578;
    msg.speed = 0.707391562043;
    msg.speed_units = 52U;
    msg.duration = 61365U;
    msg.sys_a = 29122U;
    msg.sys_b = 41294U;
    msg.move_threshold = 0.462378516587;

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
    msg.setTimeStamp(0.367205511644);
    msg.setSource(5185U);
    msg.setSourceEntity(94U);
    msg.setDestination(31183U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.56341988754;
    msg.lon = 0.998861465881;
    msg.z = 0.491098441913;
    msg.z_units = 199U;
    msg.speed = 0.242626069056;
    msg.speed_units = 47U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.862972440178;
    tmp_msg_0.lon = 0.0482168897302;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("AHHMYOQRTDONRJB");

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
    msg.setTimeStamp(0.902439121165);
    msg.setSource(57961U);
    msg.setSourceEntity(42U);
    msg.setDestination(41755U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.416621714896;
    msg.lon = 0.883877146535;
    msg.z = 0.925745625152;
    msg.z_units = 160U;
    msg.speed = 0.302777288805;
    msg.speed_units = 116U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.579799159544;
    tmp_msg_0.lon = 0.377251891046;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GBBQSTBQUHPGDGQRVUHDNKEJIJMUHBAUDRDXKWHRQCGILIOKCLZSZNHJBWKVTUGHPOITYAZUYESDDEOQNAHOKXWNNFRXPQOFPAIZZMQHRUWVMGCINTFJECDXUEGVWJAVQNSTVIGNXDCKBPZKUMPXLWSSTGT");

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
    msg.setTimeStamp(0.483722305539);
    msg.setSource(39245U);
    msg.setSourceEntity(177U);
    msg.setDestination(38473U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.4157755967;
    msg.lon = 0.418286079086;
    msg.z = 0.893986142443;
    msg.z_units = 129U;
    msg.speed = 0.780540334769;
    msg.speed_units = 124U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.155854736882;
    tmp_msg_0.lon = 0.260534425834;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RPOLDASLUJORZARTYSZWPFOTBVNWCPLTBNMFPEEHDIGNZRUFETQASMRBYRFUKNKKNUPZACMBDSWGIQXNXFMGAZPYWQBRVQOZGUIFGQYGJXJYIKCXJMEOLNSLQZSCSOLYAELWCXVTQXOIUREJKSBRMFDZHFVNNZYJTDTLJKBXEGIEQKAWOGIQQHHZOWHBLMIVHTYYEIVXRFUHAVCXG");

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
    msg.setTimeStamp(0.819239362292);
    msg.setSource(19870U);
    msg.setSourceEntity(157U);
    msg.setDestination(22858U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.63568917709;
    msg.lon = 0.577860337936;

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
    msg.setTimeStamp(0.777884401988);
    msg.setSource(32776U);
    msg.setSourceEntity(213U);
    msg.setDestination(35230U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.356126014853;
    msg.lon = 0.095471244201;

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
    msg.setTimeStamp(0.856121921163);
    msg.setSource(40976U);
    msg.setSourceEntity(221U);
    msg.setDestination(35719U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.629921606176;
    msg.lon = 0.422963081567;

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
    msg.setTimeStamp(0.120527664231);
    msg.setSource(24113U);
    msg.setSourceEntity(157U);
    msg.setDestination(7575U);
    msg.setDestinationEntity(64U);
    msg.timeout = 16074U;
    msg.lat = 0.96795491708;
    msg.lon = 0.836163082181;
    msg.z = 0.844204994497;
    msg.z_units = 214U;
    msg.pitch = 0.776054796927;
    msg.amplitude = 0.805660145497;
    msg.duration = 11604U;
    msg.speed = 0.99566110798;
    msg.speed_units = 134U;
    msg.radius = 0.368734346664;
    msg.direction = 78U;
    msg.custom.assign("SXFNKSZDNKIPWVVYVGFHYRTQMQPGTIKUNIOTEQFQCZSVEXHVMDUPXNEAUQRKNMH");

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
    msg.setTimeStamp(0.672086100261);
    msg.setSource(55325U);
    msg.setSourceEntity(182U);
    msg.setDestination(59961U);
    msg.setDestinationEntity(223U);
    msg.timeout = 18986U;
    msg.lat = 0.614905798556;
    msg.lon = 0.813048143041;
    msg.z = 0.26497567437;
    msg.z_units = 236U;
    msg.pitch = 0.671501099989;
    msg.amplitude = 0.984586578023;
    msg.duration = 719U;
    msg.speed = 0.270451467827;
    msg.speed_units = 26U;
    msg.radius = 0.0222173660406;
    msg.direction = 52U;
    msg.custom.assign("AGFNMOPTRFVAYSVMKOBPMWQSLKGXCSDYJTPUFFOQLLDUZDUICOPHBWRNHVEZPSNFKJIGYILMONDUXXUQRGSUOKYMFDIRPQXJLCXHZTFXKXGB");

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
    msg.setTimeStamp(0.952967099511);
    msg.setSource(49159U);
    msg.setSourceEntity(218U);
    msg.setDestination(12915U);
    msg.setDestinationEntity(103U);
    msg.timeout = 31210U;
    msg.lat = 0.851276634478;
    msg.lon = 0.692785653762;
    msg.z = 0.0755729278421;
    msg.z_units = 144U;
    msg.pitch = 0.679551514501;
    msg.amplitude = 0.900498702514;
    msg.duration = 11774U;
    msg.speed = 0.750147837106;
    msg.speed_units = 236U;
    msg.radius = 0.177809963756;
    msg.direction = 213U;
    msg.custom.assign("UIZPXBTQBJSBRDFYIUDLRHYKALYKAITRJAECSNZDNQPRHMJGVTWU");

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
    msg.setTimeStamp(0.346021602027);
    msg.setSource(32510U);
    msg.setSourceEntity(185U);
    msg.setDestination(11511U);
    msg.setDestinationEntity(136U);
    msg.formation_name.assign("CUODTZEIICTRMTOZOREFAIGDFXWFRRXSUCWETQCLKSPQQANDYQHYQUFTAHCPVHDBIHBJAKDPJCKIXFJNQJZULOCJYIVVNJFWMDNULWHRZIWTANLEYRSGXGYKWCPQCXIGYIYSBSLHKBSMUOFQGEJALPBFLKEJGMYHN");
    msg.reference_frame = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45400U;
    tmp_msg_0.off_x = 0.575967439752;
    tmp_msg_0.off_y = 0.785960403785;
    tmp_msg_0.off_z = 0.66726348226;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CMOYQUWNEJTMJMWGTLSXKUEGSQAAROYZHZCKLNBMSFWBLAP");

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
    msg.setTimeStamp(0.805602225763);
    msg.setSource(54565U);
    msg.setSourceEntity(72U);
    msg.setDestination(17013U);
    msg.setDestinationEntity(197U);
    msg.formation_name.assign("BGWQTNHVMWAECPRATEKZKAGLRFMXLYCEZFZOMDHAIDAIIYHQDPINKIRIUYZURMGVOQFPJBTAEHGCVDFBCFWVYSBKNZAKJOHWZKLSGWPQAMFMPGVKYJASPNSRJCUOQSRUMLVLQBOXWGBBXCEIZWLHVAHDNNFWDNQZUDJJGKXEJOCFXUIGRRHYDXKEHEBOMPVNSXFIYCLVLNE");
    msg.reference_frame = 5U;
    msg.custom.assign("PXKLDWRCYHKEZUUNCPQWUIPAOEJUZSPPJVOLXFWWSAVQYKGOBSGQBPYXLM");

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
    msg.setTimeStamp(0.0746143188021);
    msg.setSource(41874U);
    msg.setSourceEntity(73U);
    msg.setDestination(47424U);
    msg.setDestinationEntity(48U);
    msg.formation_name.assign("ZKJKWTZWCUHILABSELKMGDVSFLXQGNULLTCXSDJFMTAWAWJSIURPHYVKLPHPJWCTRRRAVOJLMMHATSNQTUDTKIOYMCQZFGYRRAKIAHOEEVLUXZKNJYPPDEKHSAKZCTPQWXYXYNVUCNMWEQQZXYFQCGZBQHBBDNDRGPDVOFSCCITYDHENMRSVJXOQHIBOFGIIZPUPUEJTOWPFAUUMKYXRBOBXVZFMBHOYSWONEGEGCSMVERZNQJAXILFDGN");
    msg.reference_frame = 213U;
    msg.custom.assign("HXTGVASKOAPIKVEWLJIZZFIIMYTPXPMIOAAFYQKPRIFLVNETIBDLJBSVUYDMLHUEGTGQBXUNBOEAHRWGZUONAJVZLJETFBMELWHVDIQDKLDSTFXPNBAJTYPFHNLMCEKQBWRJBHARBWGCQSNWXGSPMVMFXNPZYCXRUACSDSLE");

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
    msg.setTimeStamp(0.244718150041);
    msg.setSource(28891U);
    msg.setSourceEntity(87U);
    msg.setDestination(12619U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("ZXWERJHVTPYOHDMJVSHJWXCILAURZLBLUMSYSYWVWIYPQLPGNGPDZCKZEHFHUVHDFEXTXIMRBXONNBRTUSOXGCGYMDGHZPNGVIEUFMKDKABLOGAQTIAWDGJKCSCHOYPCQMJOEPCAOFSZBQWRLDMDQQXXRJZKBQFJMTNNN");
    msg.formation_name.assign("SWDVLZXREOHRBDABVVHCJJBKIKDCRHRBULNMTSITTZGMESEXHFKLCYZHXXQIVUGDMKMDLEPIFCVFUKUCZZUASEBGYIXGJAPSDV");
    msg.plan_id.assign("IVLZKIONRKVHFFBLVMBJFOOVQCAYDMTZDXKNVEYVMRNABDSDRWLOEAEHTRJOALAPSKZZGIXQXEJUNOYTIURKOTMZXBPJYXGQJJSYHUDMNGSAXZQCQJIPHHL");
    msg.description.assign("UITMGQRNJKZMVTJWROKYVNRNPUMWXYUDJFRGLCAXQSZHFFYQQRTELFJICXESHPOZOICGLN");
    msg.leader_speed = 0.0734288289645;
    msg.leader_bank_lim = 0.126923304101;
    msg.pos_sim_err_lim = 0.0076315112078;
    msg.pos_sim_err_wrn = 0.601103845984;
    msg.pos_sim_err_timeout = 24659U;
    msg.converg_max = 0.313996107739;
    msg.converg_timeout = 30082U;
    msg.comms_timeout = 59024U;
    msg.turb_lim = 0.114592016661;
    msg.custom.assign("YQHWUNIDDDHAZSAQXBQBXITGNCEOPIDFUMZAJWCHNUYKQJDWSXYXWRSXHXTJVKOTNKFSLWXZCMRAYZYEHANVMMUDVGTQQWIGIPRRKDUBUI");

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
    msg.setTimeStamp(0.70283018051);
    msg.setSource(22618U);
    msg.setSourceEntity(129U);
    msg.setDestination(23278U);
    msg.setDestinationEntity(215U);
    msg.group_name.assign("GYRPOCIKFJWNCPWLCXECUIETSKWBBDZPVXAGNOIAZHHEEAIUZNLBAJVDWKJKUQVILFINVRKWOYPTQXWNMPBTBSXPDFXOTVEUMTBJYDWGSS");
    msg.formation_name.assign("DAMMLXYKNYGZZHWJYXKFPZZJPKSTVMJCAEBPSLBQOYGXDHTEAIKFJXCJWHRNSOLMXLQGIMIVATFCGYVHONNONSCMOTSETHDWXPVFVBDHCPRZRHHYQLFTJQLDCNRMEBRQIDOZABYIWWGTJGYLCJOIGXZFLKEIBRDKWWXVQNQAKCNVDNSR");
    msg.plan_id.assign("OPWDGAJTCINDLHFLXZXMURMHKWQMPCOKMSVNTKUKLZJVIVBLLKNZVLPBCJESZGVTAOIGQAYEPSECMATCJMFRCVQDQZTMXRUDCDHABRCUFUBYBXWAIDSXSHQFUZBGRRMXRFIYDASWWNTPQOLOKYJZSJYINBQALTTPJGPNIVQJJWIUKZHJNOEYSXNPXYGQEYNDGNHXVHOFXQWUEBO");
    msg.description.assign("YBREPOJVBXNZGKCDEONLAZNJDOYETWGTPGSHMRALOUGDLMKRQJDTTEIUXHRF");
    msg.leader_speed = 0.391687607876;
    msg.leader_bank_lim = 0.926250554174;
    msg.pos_sim_err_lim = 0.154450190836;
    msg.pos_sim_err_wrn = 0.56004765012;
    msg.pos_sim_err_timeout = 12173U;
    msg.converg_max = 0.629006191015;
    msg.converg_timeout = 31645U;
    msg.comms_timeout = 5043U;
    msg.turb_lim = 0.258132097847;
    msg.custom.assign("AQTXEGYOSJZYNJ");

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
    msg.setTimeStamp(0.97536455617);
    msg.setSource(8016U);
    msg.setSourceEntity(207U);
    msg.setDestination(3666U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("HFDCHMMURCDHYUBOAQQNSAUJDRQANLAIKCOFERTJJVIHMKPGSVNOFZPLNCDVEWCAJSKBZEPMTIWZJEJANWEYCQHIIIWUSAZUCYTYNRENSQRSVBSBLWXFHVGLUPEUYWKHQXWIPSNVOBAPABXQP");
    msg.formation_name.assign("YFHFRWEFCWJNEUHZANZYUKIZOMGEVITUWVXUZWFDMKJLDELQZAHREIDBVKOWGPOCMFRFONGPLLBHFGQGSFVMQAPPIBXARLYZBXUSVODMJOAAWTKPFCUBKEYBYZNIDGMGMVMULHWTTKDTTRYIKZEZCVAXQWCIURAJXRPEHRTIYGVPXSKUALZIDYDSGFTJCOS");
    msg.plan_id.assign("KWZCQQVBELMIBMIIGHSSTMRJEFHLWDVK");
    msg.description.assign("HZNDVGLJRIAYPJJTDVZOEPRFTFKVZCNRGHUGDBHULVYRZXWLFCKGAPUMYWIPKNMVXTHKMQBARHQACTUWXEZKYMVEBLXQOIENOQCEIYLLYIASROUWOZHNFRSGOTXDRTYUALOFJSMKRCMDQCTMIGYNJUWWGWSBXINWZXVQKYZJXCJFNXQHEBSBFOKOLMDMUEDUCDAGAYXHVAKETWL");
    msg.leader_speed = 0.620194969196;
    msg.leader_bank_lim = 0.0890124806177;
    msg.pos_sim_err_lim = 0.233362123263;
    msg.pos_sim_err_wrn = 0.898335888768;
    msg.pos_sim_err_timeout = 61301U;
    msg.converg_max = 0.63582321859;
    msg.converg_timeout = 35769U;
    msg.comms_timeout = 30819U;
    msg.turb_lim = 0.648948730601;
    msg.custom.assign("UXYBWUETMNTUWOKGNGFYZAPEXNQFILJHBKXNMXVEWYAJKPDQQGZZHKTMORFXCCQWASNKTVWRPGBDUXVOIHIHSYALCWRUUVFOMTAFUFRMYBVDGANZFYJLZKCQZHEQLMUMRNBHACBOWSPFKXWACIYDJDMHSJKVCBLVPSGDHGXQJIFRMGZPFIDPVTCEQSWDDTEEHBZWKXBGLJIOLSPJNYROPIYDV");

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
    msg.setTimeStamp(0.382311326471);
    msg.setSource(36940U);
    msg.setSourceEntity(166U);
    msg.setDestination(15251U);
    msg.setDestinationEntity(74U);
    msg.control_src = 14669U;
    msg.control_ent = 246U;
    msg.timeout = 0.0750142692468;
    msg.loiter_radius = 0.532135608843;
    msg.altitude_interval = 0.549948153748;

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
    msg.setTimeStamp(0.761128639513);
    msg.setSource(43523U);
    msg.setSourceEntity(53U);
    msg.setDestination(32966U);
    msg.setDestinationEntity(70U);
    msg.control_src = 2809U;
    msg.control_ent = 29U;
    msg.timeout = 0.440864758341;
    msg.loiter_radius = 0.754792361601;
    msg.altitude_interval = 0.409524276232;

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
    msg.setTimeStamp(0.186222136273);
    msg.setSource(40267U);
    msg.setSourceEntity(189U);
    msg.setDestination(4828U);
    msg.setDestinationEntity(184U);
    msg.control_src = 19850U;
    msg.control_ent = 146U;
    msg.timeout = 0.285727924509;
    msg.loiter_radius = 0.381177028043;
    msg.altitude_interval = 0.960860407501;

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
    msg.setTimeStamp(0.199331261039);
    msg.setSource(63768U);
    msg.setSourceEntity(131U);
    msg.setDestination(13735U);
    msg.setDestinationEntity(125U);
    msg.flags = 38U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.345546946343;
    tmp_msg_0.speed_units = 93U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.108810141749;
    tmp_msg_1.z_units = 60U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.692487840651;
    msg.lon = 0.588050101639;
    msg.radius = 0.340051635015;

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
    msg.setTimeStamp(0.853181592099);
    msg.setSource(9237U);
    msg.setSourceEntity(50U);
    msg.setDestination(58341U);
    msg.setDestinationEntity(19U);
    msg.flags = 193U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.200176693335;
    tmp_msg_0.speed_units = 199U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0520409661266;
    tmp_msg_1.z_units = 64U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0222708545476;
    msg.lon = 0.399474965729;
    msg.radius = 0.462845786009;

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
    msg.setTimeStamp(0.343036646932);
    msg.setSource(15962U);
    msg.setSourceEntity(160U);
    msg.setDestination(2051U);
    msg.setDestinationEntity(199U);
    msg.flags = 130U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.410557467571;
    tmp_msg_0.speed_units = 158U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.757611001639;
    tmp_msg_1.z_units = 5U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.704457446017;
    msg.lon = 0.0146018717557;
    msg.radius = 0.692710649008;

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
    msg.setTimeStamp(0.980154249172);
    msg.setSource(39297U);
    msg.setSourceEntity(14U);
    msg.setDestination(21009U);
    msg.setDestinationEntity(246U);
    msg.control_src = 56482U;
    msg.control_ent = 18U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 152U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.426541573523;
    tmp_tmp_msg_0_0.speed_units = 86U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.781557164272;
    tmp_tmp_msg_0_1.z_units = 167U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.71541195523;
    tmp_msg_0.lon = 0.880144532767;
    tmp_msg_0.radius = 0.0589367886242;
    msg.reference.set(tmp_msg_0);
    msg.state = 148U;
    msg.proximity = 35U;

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
    msg.setTimeStamp(0.772334446476);
    msg.setSource(39836U);
    msg.setSourceEntity(137U);
    msg.setDestination(8185U);
    msg.setDestinationEntity(172U);
    msg.control_src = 43047U;
    msg.control_ent = 198U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 106U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.886597247341;
    tmp_tmp_msg_0_0.speed_units = 83U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.988962507939;
    tmp_tmp_msg_0_1.z_units = 60U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.351671723544;
    tmp_msg_0.lon = 0.63387950696;
    tmp_msg_0.radius = 0.657908636853;
    msg.reference.set(tmp_msg_0);
    msg.state = 1U;
    msg.proximity = 209U;

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
    msg.setTimeStamp(0.193861758042);
    msg.setSource(14351U);
    msg.setSourceEntity(90U);
    msg.setDestination(3484U);
    msg.setDestinationEntity(103U);
    msg.control_src = 18636U;
    msg.control_ent = 91U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 50U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.333935849685;
    tmp_tmp_msg_0_0.speed_units = 236U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0975810914262;
    tmp_tmp_msg_0_1.z_units = 191U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.354445266667;
    tmp_msg_0.lon = 0.674961336832;
    tmp_msg_0.radius = 0.632031741154;
    msg.reference.set(tmp_msg_0);
    msg.state = 206U;
    msg.proximity = 148U;

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
    msg.setTimeStamp(0.509110544226);
    msg.setSource(4452U);
    msg.setSourceEntity(189U);
    msg.setDestination(18798U);
    msg.setDestinationEntity(216U);
    msg.ax_cmd = 0.00867102353957;
    msg.ay_cmd = 0.898739463091;
    msg.az_cmd = 0.0967196407156;
    msg.ax_des = 0.418361013686;
    msg.ay_des = 0.311330247916;
    msg.az_des = 0.668305618177;
    msg.virt_err_x = 0.938375631518;
    msg.virt_err_y = 0.887593532799;
    msg.virt_err_z = 0.513237550737;
    msg.surf_fdbk_x = 0.915788762754;
    msg.surf_fdbk_y = 0.532273680708;
    msg.surf_fdbk_z = 0.620455883854;
    msg.surf_unkn_x = 0.835217380364;
    msg.surf_unkn_y = 0.954238207884;
    msg.surf_unkn_z = 0.682097682675;
    msg.ss_x = 0.35921921164;
    msg.ss_y = 0.837754297468;
    msg.ss_z = 0.188334657988;

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
    msg.setTimeStamp(0.87032130949);
    msg.setSource(36758U);
    msg.setSourceEntity(242U);
    msg.setDestination(42116U);
    msg.setDestinationEntity(66U);
    msg.ax_cmd = 0.940624650506;
    msg.ay_cmd = 0.585484642802;
    msg.az_cmd = 0.624544454419;
    msg.ax_des = 0.355928198463;
    msg.ay_des = 0.528782952516;
    msg.az_des = 0.664875276324;
    msg.virt_err_x = 0.0310637074284;
    msg.virt_err_y = 0.96174319329;
    msg.virt_err_z = 0.249357399575;
    msg.surf_fdbk_x = 0.623702601143;
    msg.surf_fdbk_y = 0.0548191014629;
    msg.surf_fdbk_z = 0.163970433623;
    msg.surf_unkn_x = 0.147001594486;
    msg.surf_unkn_y = 0.30286671002;
    msg.surf_unkn_z = 0.938132862976;
    msg.ss_x = 0.20581547313;
    msg.ss_y = 0.149874136595;
    msg.ss_z = 0.143988249287;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MSBUGPYCHZLWQVXRAZSBIHWDUTKXTLXVBYMGNJCPYQUIWELQYMFNBWCKNHGWPZTORKCDUXVVGAJJNHBOXGSHKCDGWTUFUEZMYAQNVYJVVSKQCFJWFTKZZJGKPCZLYLRXMKFWFBBJRNDFMTAJTTXIOPVTECUOLUSERGGDEKPSAHOUBYDQKCOANIIQUCAEEEOIILNZFPGXWMHFIVEAROORPSDMFSRLHYHEAALZJDDTH");
    tmp_msg_0.dist = 0.672693043246;
    tmp_msg_0.err = 0.69481545059;
    tmp_msg_0.ctrl_imp = 0.023791598749;
    tmp_msg_0.rel_dir_x = 0.463444503193;
    tmp_msg_0.rel_dir_y = 0.781540188373;
    tmp_msg_0.rel_dir_z = 0.646494134824;
    tmp_msg_0.err_x = 0.322881444021;
    tmp_msg_0.err_y = 0.400378924723;
    tmp_msg_0.err_z = 0.578222632409;
    tmp_msg_0.rf_err_x = 0.637990983757;
    tmp_msg_0.rf_err_y = 0.256998460311;
    tmp_msg_0.rf_err_z = 0.126621859525;
    tmp_msg_0.rf_err_vx = 0.909282421466;
    tmp_msg_0.rf_err_vy = 0.671667357349;
    tmp_msg_0.rf_err_vz = 0.838549440665;
    tmp_msg_0.ss_x = 0.805702451251;
    tmp_msg_0.ss_y = 0.639898344516;
    tmp_msg_0.ss_z = 0.914242375713;
    tmp_msg_0.virt_err_x = 0.331526732867;
    tmp_msg_0.virt_err_y = 0.975465494537;
    tmp_msg_0.virt_err_z = 0.00744579874604;
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
    msg.setTimeStamp(0.188197393766);
    msg.setSource(61065U);
    msg.setSourceEntity(125U);
    msg.setDestination(40730U);
    msg.setDestinationEntity(43U);
    msg.ax_cmd = 0.111230564135;
    msg.ay_cmd = 0.224716630272;
    msg.az_cmd = 0.737598279458;
    msg.ax_des = 0.18933551299;
    msg.ay_des = 0.901047633971;
    msg.az_des = 0.778692350575;
    msg.virt_err_x = 0.816312086166;
    msg.virt_err_y = 0.480509979148;
    msg.virt_err_z = 0.566957459301;
    msg.surf_fdbk_x = 0.179088251425;
    msg.surf_fdbk_y = 0.740395822649;
    msg.surf_fdbk_z = 0.697649714988;
    msg.surf_unkn_x = 0.362810989668;
    msg.surf_unkn_y = 0.720989583487;
    msg.surf_unkn_z = 0.944930299504;
    msg.ss_x = 0.809999709465;
    msg.ss_y = 0.409665268423;
    msg.ss_z = 0.133678968035;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YTJTYNFFKDJQEVUNXDVTSSYGOBTVHKREUCRDMIWOCPALIHGBWMAHZDBYJWXXVTRLQTAMVXKNLHLMNXUENEGNMFHIJGUDRAQUVVLIICTNMREDFGFHMOFBBAYYGPGUXURLMQUELWDDCBOXSABJWJMZVCHZCEXZKKYPIZOZQNBBRSJVIYQPNIHWAYRLFJSPWCCTOFLPAXGQKWWGAYKHTGDNVPBPDIMFSPHKCOPSJROKZJZCSZOIRFXQEQSUSZ");
    tmp_msg_0.dist = 0.877703084093;
    tmp_msg_0.err = 0.366824976334;
    tmp_msg_0.ctrl_imp = 0.803906575307;
    tmp_msg_0.rel_dir_x = 0.614508446199;
    tmp_msg_0.rel_dir_y = 0.348656805198;
    tmp_msg_0.rel_dir_z = 0.318274558223;
    tmp_msg_0.err_x = 0.267092544027;
    tmp_msg_0.err_y = 0.950470700628;
    tmp_msg_0.err_z = 0.660056563745;
    tmp_msg_0.rf_err_x = 0.274122948771;
    tmp_msg_0.rf_err_y = 0.637784317335;
    tmp_msg_0.rf_err_z = 0.756715627309;
    tmp_msg_0.rf_err_vx = 0.392379331989;
    tmp_msg_0.rf_err_vy = 0.700286994166;
    tmp_msg_0.rf_err_vz = 0.79646757277;
    tmp_msg_0.ss_x = 0.719058239601;
    tmp_msg_0.ss_y = 0.623212459404;
    tmp_msg_0.ss_z = 0.0357047780682;
    tmp_msg_0.virt_err_x = 0.929114395614;
    tmp_msg_0.virt_err_y = 0.152409565195;
    tmp_msg_0.virt_err_z = 0.119603360228;
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
    msg.setTimeStamp(0.00203176519881);
    msg.setSource(42804U);
    msg.setSourceEntity(217U);
    msg.setDestination(21467U);
    msg.setDestinationEntity(105U);
    msg.s_id.assign("ECCMQRBKNQVGUPMAHRSRRVMCYIJZAXVZTMHEIKPQGIOGPYJYNHWXJPMNLQSIBDOWNTGHWXSLQMVQVKCQGBEPFFFUNBOIFKVRWWSPTUGJSJHGKNEFUVRTJOMFYWBFJYUCA");
    msg.dist = 0.652390181234;
    msg.err = 0.675500419107;
    msg.ctrl_imp = 0.196469451969;
    msg.rel_dir_x = 0.909270521878;
    msg.rel_dir_y = 0.202187143238;
    msg.rel_dir_z = 0.354552611131;
    msg.err_x = 0.250777114888;
    msg.err_y = 0.475309816199;
    msg.err_z = 0.147985157596;
    msg.rf_err_x = 0.672248811896;
    msg.rf_err_y = 0.69053295264;
    msg.rf_err_z = 0.841476722475;
    msg.rf_err_vx = 0.193916926661;
    msg.rf_err_vy = 0.713051670468;
    msg.rf_err_vz = 0.714751820853;
    msg.ss_x = 0.129821812142;
    msg.ss_y = 0.089669321532;
    msg.ss_z = 0.0486500311867;
    msg.virt_err_x = 0.13636213676;
    msg.virt_err_y = 0.497957269206;
    msg.virt_err_z = 0.324653376733;

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
    msg.setTimeStamp(0.584755374528);
    msg.setSource(19225U);
    msg.setSourceEntity(133U);
    msg.setDestination(51272U);
    msg.setDestinationEntity(180U);
    msg.s_id.assign("ZJIVUEHUZHDHZMVPSQGJQQPJUWGTXLSHUTRHCXPHXCNPKSZFGVSBIQZBBVJQYFRNEBIBTRSUMRDDBOHWLXKMJWOMOGPQTQRZBGOK");
    msg.dist = 0.682933969515;
    msg.err = 0.142462724373;
    msg.ctrl_imp = 0.177206782288;
    msg.rel_dir_x = 0.895546940065;
    msg.rel_dir_y = 0.359550377281;
    msg.rel_dir_z = 0.782513599302;
    msg.err_x = 0.287005399193;
    msg.err_y = 0.15095344716;
    msg.err_z = 0.988751727154;
    msg.rf_err_x = 0.0126535943186;
    msg.rf_err_y = 0.717681847746;
    msg.rf_err_z = 0.558293299719;
    msg.rf_err_vx = 0.0303345103739;
    msg.rf_err_vy = 0.686699647288;
    msg.rf_err_vz = 0.560436118818;
    msg.ss_x = 0.0645572206055;
    msg.ss_y = 0.0120310588171;
    msg.ss_z = 0.165219168696;
    msg.virt_err_x = 0.506008477061;
    msg.virt_err_y = 0.717912597599;
    msg.virt_err_z = 0.869786000608;

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
    msg.setTimeStamp(0.229669990811);
    msg.setSource(26293U);
    msg.setSourceEntity(228U);
    msg.setDestination(26325U);
    msg.setDestinationEntity(232U);
    msg.s_id.assign("LAOSJEDRDRAHZTZRKCIUVMDPBTUNGYKIUMCHXTLPJEKHKLAAXEKVRGRCFDYSAWSWSLUISQNGIOKCYQFWEJJQRGWFABOFHXVFOQZT");
    msg.dist = 0.54151398193;
    msg.err = 0.353621687453;
    msg.ctrl_imp = 0.350877756002;
    msg.rel_dir_x = 0.0102250439699;
    msg.rel_dir_y = 0.332676189275;
    msg.rel_dir_z = 0.136245024201;
    msg.err_x = 0.102210157318;
    msg.err_y = 0.514498970435;
    msg.err_z = 0.0248170248685;
    msg.rf_err_x = 0.183456946036;
    msg.rf_err_y = 0.496541276652;
    msg.rf_err_z = 0.857963063396;
    msg.rf_err_vx = 0.953424269805;
    msg.rf_err_vy = 0.196978967836;
    msg.rf_err_vz = 0.396769984051;
    msg.ss_x = 0.157995841964;
    msg.ss_y = 0.867838417357;
    msg.ss_z = 0.514194705348;
    msg.virt_err_x = 0.718702058481;
    msg.virt_err_y = 0.318914503207;
    msg.virt_err_z = 0.83932534869;

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
    msg.setTimeStamp(0.76650980047);
    msg.setSource(40298U);
    msg.setSourceEntity(20U);
    msg.setDestination(16162U);
    msg.setDestinationEntity(212U);
    msg.timeout = 10459U;
    msg.rpm = 0.485448467621;
    msg.direction = 133U;
    msg.custom.assign("ZYVXHYWHVQSCFJXLZDOGPLAZLZCDCLGUFQAIJDOASXNRKFPYXNWGDSTTWHSRYMVQZSTVTRDMSYDFCGUYFHECBHCKYLAGXUEFTSEIHEYPJVGUKMCRXHQQRYGRZPUMIBDIRNMOJLIPKCGUMWBEXBNNLVNRBIABNJRPHKKQPNEPWAASZPTLQHKJDGVWIFQVTCUZEKNMMZLXTTUNY");

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
    msg.setTimeStamp(0.849992642116);
    msg.setSource(32089U);
    msg.setSourceEntity(165U);
    msg.setDestination(30019U);
    msg.setDestinationEntity(167U);
    msg.timeout = 24499U;
    msg.rpm = 0.647165848899;
    msg.direction = 80U;
    msg.custom.assign("IKKKYXRTMQLYLJZSRVXOEBANSVTAPHVW");

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
    msg.setTimeStamp(0.739911616053);
    msg.setSource(37279U);
    msg.setSourceEntity(177U);
    msg.setDestination(49310U);
    msg.setDestinationEntity(222U);
    msg.timeout = 20458U;
    msg.rpm = 0.143334064423;
    msg.direction = 3U;
    msg.custom.assign("CLYYHJWUCJOSSNCOYAZDTRMZEXTEQTOWGFPXNQJQRYMKKBADOUIQRGIEIZRKMUNFDXEJQMXAJZHKVKXTWBLIVGFTALZWMTMCCGYNRSJREFPXAUHRPJELWVGPQEYTNMZLYUDUXVLVKPBPGOCELAPMSOHDDKPGAIIOAEPHEZGNRJKWLWSVSVOXISDIYFPFZOB");

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
    msg.setTimeStamp(0.669696426676);
    msg.setSource(1582U);
    msg.setSourceEntity(178U);
    msg.setDestination(13549U);
    msg.setDestinationEntity(36U);
    msg.formation_name.assign("INJDZQKBEYEGZKUEBEICQYZMFBDLDVCPUUZVNSQLMZTXFWEPTGMSJFVDXWLPSXYPHJYXORABUAMNHFVIPEJHHHTQIAXVSSHWXRKOTZWETBGPRDBWCQDLZYTRMGOMRLAPERCGNXTQYYCFRQMAGQKIBVUGMKQKWNLCV");
    msg.type = 240U;
    msg.op = 248U;
    msg.group_name.assign("CNDDIVVKGIVAASXZVWUFKXIMVPABNNXPVOZCUGKMIPZAKHXDHQUSONIUQVXYASZXAGTFOKBOEFBRERYHOFLKQNDRDEQJDJRYXUTGJGVRRNMQQMVURLMPEFHLNKHFZHXFOYIBRBZLZATTUBIWCJKAWTTACESCPEVSSSJYCEOL");
    msg.plan_id.assign("AHVQGNSJQNKLPMQZDOVLFOBSPXEFFSXBABMQYQPUTYGQPIKJSZMEMPNGANMIZVZZQLVOTMCYWMULOXVHCKYUECGKRCPAHYOTHYBFXJTLILWYTWCJKETPFHEIVOOAILGFTHMFKBIUUTHEKYRYBFIHQGAJZARUZ");
    msg.description.assign("UMZDXYPNSKHDEKAQGBNYWGWAJWXPEAWRQZAXGYZSYOEVQMVSOSBSCSUMIJDOYIZJJFATRGNRJAFNFTLQSHNVPRNLGOFMKMKJFTDHMPZIFKWCBJRYQTGQDWZCBLOINRSKHCTDDQSXVLLGO");
    msg.reference_frame = 61U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 58973U;
    tmp_msg_0.off_x = 0.556367123289;
    tmp_msg_0.off_y = 0.0586201222004;
    tmp_msg_0.off_z = 0.422067147454;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.357928904379;
    msg.leader_speed_min = 0.00588563513807;
    msg.leader_speed_max = 0.709119655206;
    msg.leader_alt_min = 0.0581463468446;
    msg.leader_alt_max = 0.484102723144;
    msg.pos_sim_err_lim = 0.260423483027;
    msg.pos_sim_err_wrn = 0.657320286619;
    msg.pos_sim_err_timeout = 65322U;
    msg.converg_max = 0.437325253957;
    msg.converg_timeout = 31446U;
    msg.comms_timeout = 9781U;
    msg.turb_lim = 0.0286299254737;
    msg.custom.assign("CHEUOOWBJFZUHJZNVSDDXPFSNDLIFVJBRENVUAAOJWPYMEVPUAEATRGXXFBQETAHCWJSAPARMJGOQDFHLDONRNMWNRVABVTYWUWRTZBEZYXZHMQMUPJLGGFQESPOPVPSKJQIOOZHFCLJXDLVTIWWECDULQMQKHZYXTXYEPSAITDMSBIYHGKZXMCUWCRNKNTKQ");

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
    msg.setTimeStamp(0.3843222264);
    msg.setSource(50369U);
    msg.setSourceEntity(235U);
    msg.setDestination(14439U);
    msg.setDestinationEntity(1U);
    msg.formation_name.assign("TDYXAFRJYFFLBIDHOPPGCXNAIZLWEQWFWMWDBWQLYCOBSLUFZKNCEATUYGVREUWQGSPXFCFVHAWEHISIESTDOULOARMYOYESQHNYEFLNNNXASGKPUWREUAISHTCRBVLPU");
    msg.type = 55U;
    msg.op = 164U;
    msg.group_name.assign("RSCUZEZJGQBHTSIYKYMPUYXKA");
    msg.plan_id.assign("EMWCULOXIWBBOQQKNZLKTUYHTRGCEWOIDKZDFUNOJXHYPGMNPAQOZIYYNMJZZZXBZIFRLXKGUBUNMTLYMBHVNMTVCGPE");
    msg.description.assign("IUZBWKRZKDXZVIBPAEADOHYBXDSMVBTOCLHSRIZFXGCMWHWQSGOOLKDSDTJHYGTIHLSDAYRKQUQRCFDGMPTNVPJDGEOXVQJNUADRSKKSQUVCMNTJCHXJWJZTQUJRRNOPLTOMVYYTTLDPYBNMQAWPHWXMNZNTKPUCCEWANQYEAAVJBCEIFEFHQLCPBYUMPFUEWXENZKGOXRGLBFFZAMYSZWFGIUSRUJXIMIVXHLGYICBBHIZLWPJNKQ");
    msg.reference_frame = 70U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44795U;
    tmp_msg_0.off_x = 0.68301719766;
    tmp_msg_0.off_y = 0.697165147128;
    tmp_msg_0.off_z = 0.660113861363;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.771258120693;
    msg.leader_speed_min = 0.462151446;
    msg.leader_speed_max = 0.838990163;
    msg.leader_alt_min = 0.413424008626;
    msg.leader_alt_max = 0.304412292304;
    msg.pos_sim_err_lim = 0.731675631516;
    msg.pos_sim_err_wrn = 0.255650843035;
    msg.pos_sim_err_timeout = 32118U;
    msg.converg_max = 0.353567396647;
    msg.converg_timeout = 11396U;
    msg.comms_timeout = 21680U;
    msg.turb_lim = 0.468267873037;
    msg.custom.assign("YBMSTTQRXXOIHMIPWICPHLKNFVXUYFHUZAAZGSNIAKEJHWJDCUIRVOKLGNBIVAPZYKSKAPSJRUXJCQWBYKYNVEZFIDMGQDFUVRMCWUWXBNOEYEUZFRGZBQVPVXBAZEBLHSEQFFMQAGAJCZVEKPCCRJNPYP");

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
    msg.setTimeStamp(0.575792363122);
    msg.setSource(63055U);
    msg.setSourceEntity(219U);
    msg.setDestination(63549U);
    msg.setDestinationEntity(100U);
    msg.formation_name.assign("WMPEYCNGNUKPLLDKKFIXQDOYLRTNQSGTSCSJUQUMSRVMDGAVMBYLUFFCYFLTIOZWXAELQHHBWPPAZAOWHZHREIHUBLQTKZQSFVMQGMYPBWDXRIZBSZUYOKOTXWPBHVJCDJJEXCDWCHRFBVTCZWHPXHOJAYTMEGIXVIEJYJFSDACUWSXDMOVTG");
    msg.type = 188U;
    msg.op = 157U;
    msg.group_name.assign("MSBPSXNXHOJTQEVTHQPIFLRGXVMNXLXCWMWQRNLYZEPLDAXATHMBXGGHFZTPBQKEMRUKJOENTNCULTDDSEMCFOKFBNAYWRUYCPQXYITZOHNWNTVRZGSSJMWZ");
    msg.plan_id.assign("ARREEBONXRLPOSIDKACHUFZMKYVKZJIDFAHUITNJTZQMKGVYJGXSTXLDYMHARGFBQFUQHQYPMCR");
    msg.description.assign("KBLOXVUUGTNWSLCMZVFCOQDIPEDGIKHUNAJSHEDCZREPSXBFMJDSUFDYHJZPSMZNQUUJXMMORTBMXRESAPWWXCQDNGBCIEWYGQHJYDZHKJGWJSLWPEFZFKDEHCBTQPRATQWPHJYPSQBAGOOYTNXLIFRHNOMLBUPCQCA");
    msg.reference_frame = 99U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13990U;
    tmp_msg_0.off_x = 0.218698051853;
    tmp_msg_0.off_y = 0.804724595883;
    tmp_msg_0.off_z = 0.514227930145;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.951933877331;
    msg.leader_speed_min = 0.0261537320196;
    msg.leader_speed_max = 0.754649789327;
    msg.leader_alt_min = 0.0317215433556;
    msg.leader_alt_max = 0.943463905693;
    msg.pos_sim_err_lim = 0.867618706127;
    msg.pos_sim_err_wrn = 0.0504046060946;
    msg.pos_sim_err_timeout = 61430U;
    msg.converg_max = 0.356707004318;
    msg.converg_timeout = 35099U;
    msg.comms_timeout = 57746U;
    msg.turb_lim = 0.680043111081;
    msg.custom.assign("GYONGWLBSVTWJHCNOZAAMIXYPJSYREAULUXMNPQSMXLSDHKNYEQVHIQKRWRLKPEUAIEAIFWJUMPYGXESZBJCZFRVNVZISNPIVOMQELZGOODKMTXKHTOHJHA");

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
    msg.setTimeStamp(0.486334023713);
    msg.setSource(33149U);
    msg.setSourceEntity(16U);
    msg.setDestination(52519U);
    msg.setDestinationEntity(112U);
    msg.timeout = 5063U;
    msg.lat = 0.552750457673;
    msg.lon = 0.966751616178;
    msg.z = 0.271232037309;
    msg.z_units = 77U;
    msg.speed = 0.240845352487;
    msg.speed_units = 12U;
    msg.custom.assign("UZNXXYHFBOMPGUBLCJQAXYCQPSFCYWGVDXPGWLTSPHJMEMIDIMOFRXLDQYLVLOPPRFXNTUJKHETYZNLTYZQNHFCNNORBFVWDEUOVHVEVSAGWBVINHIDSMLGOBQAKHMYPRZHQGCWZCGCXETAUKIBXFLQSAISRBOQTDHPUMAIYARERWOBXFFEKJDJQJEOSDTINAERVRNMSZSZKWVTLUOWLRCYJTMCEUUCFYZJXPZGBG");

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
    msg.setTimeStamp(0.587940923677);
    msg.setSource(3604U);
    msg.setSourceEntity(58U);
    msg.setDestination(50451U);
    msg.setDestinationEntity(31U);
    msg.timeout = 2683U;
    msg.lat = 0.404552012634;
    msg.lon = 0.257278339971;
    msg.z = 0.804523904308;
    msg.z_units = 117U;
    msg.speed = 0.0658916774052;
    msg.speed_units = 9U;
    msg.custom.assign("WPNTYEOLFUCEVNIYNIJGLUUDHFOMQFJKJZSKXAPWPTZWPZYXJLVAKWLTNLZIDETEUEFBRSTHCHVBZPSSMKHDCLRBFBJVQQDDWMFPEHUHTAWAYBXYMSEDLVOZGCFICAOPBPSOHDKEGDWJYFIBONMKDRTZHUBSXRLQVCVYWZHQEIJGAXMGICXRMZDMXRRKUYJZAJYIQVBXURQHIXGOAUOIJCVCFTNRCNFAKRKLLQPTNX");

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
    msg.setTimeStamp(0.106877457472);
    msg.setSource(60835U);
    msg.setSourceEntity(181U);
    msg.setDestination(38011U);
    msg.setDestinationEntity(139U);
    msg.timeout = 34954U;
    msg.lat = 0.524829298705;
    msg.lon = 0.416106970028;
    msg.z = 0.0798304194484;
    msg.z_units = 7U;
    msg.speed = 0.666127047609;
    msg.speed_units = 101U;
    msg.custom.assign("RMEVDCNCNI");

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
    msg.setTimeStamp(0.164714522109);
    msg.setSource(31411U);
    msg.setSourceEntity(32U);
    msg.setDestination(65119U);
    msg.setDestinationEntity(51U);
    msg.timeout = 40003U;
    msg.lat = 0.587652894792;
    msg.lon = 0.383379413231;
    msg.z = 0.854438944398;
    msg.z_units = 78U;
    msg.speed = 0.620465297197;
    msg.speed_units = 231U;
    msg.custom.assign("PKNIECHVLHCADNUZSMNFVOLMRWWQCJQFGKCLTOQKBHLILHNSGBAYCFOFYJBFEOIVXOIZOWKKLJTDHHKNBVVPMUYIHXKYFWETDKXLOEYNMRCURRMARFACRGWLGPWCPNEUSYYDBJIXYARDMZBMQTZKEJLAJWTVGUSRQOUBBV");

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
    msg.setTimeStamp(0.0336576493721);
    msg.setSource(40326U);
    msg.setSourceEntity(201U);
    msg.setDestination(14523U);
    msg.setDestinationEntity(95U);
    msg.timeout = 8733U;
    msg.lat = 0.159193198747;
    msg.lon = 0.0156113697824;
    msg.z = 0.173132976358;
    msg.z_units = 225U;
    msg.speed = 0.450144242861;
    msg.speed_units = 188U;
    msg.custom.assign("TNFGTWHWOZFYBMQKFBBYHMAXYXJQVTKFCERNSSHNEQA");

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
    msg.setTimeStamp(0.420167835674);
    msg.setSource(38140U);
    msg.setSourceEntity(19U);
    msg.setDestination(32347U);
    msg.setDestinationEntity(242U);
    msg.timeout = 2579U;
    msg.lat = 0.810640529418;
    msg.lon = 0.486581850125;
    msg.z = 0.16280525598;
    msg.z_units = 87U;
    msg.speed = 0.0556749927326;
    msg.speed_units = 55U;
    msg.custom.assign("WDXZGCGYOBVEJWSARITSQNRCZ");

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
    msg.setTimeStamp(0.512291482793);
    msg.setSource(31473U);
    msg.setSourceEntity(150U);
    msg.setDestination(63933U);
    msg.setDestinationEntity(87U);
    msg.arrival_time = 0.791843262941;
    msg.lat = 0.988795774947;
    msg.lon = 0.362861659338;
    msg.z = 0.0361081936141;
    msg.z_units = 67U;
    msg.travel_z = 0.0868855884619;
    msg.travel_z_units = 172U;
    msg.delayed = 233U;

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
    msg.setTimeStamp(0.579508345426);
    msg.setSource(44353U);
    msg.setSourceEntity(211U);
    msg.setDestination(5634U);
    msg.setDestinationEntity(207U);
    msg.arrival_time = 0.393771254373;
    msg.lat = 0.773018395596;
    msg.lon = 0.819601193494;
    msg.z = 0.988792268526;
    msg.z_units = 18U;
    msg.travel_z = 0.16928117307;
    msg.travel_z_units = 74U;
    msg.delayed = 102U;

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
    msg.setTimeStamp(0.220057781152);
    msg.setSource(54898U);
    msg.setSourceEntity(124U);
    msg.setDestination(29077U);
    msg.setDestinationEntity(207U);
    msg.arrival_time = 0.872567375265;
    msg.lat = 0.947621696178;
    msg.lon = 0.713033537523;
    msg.z = 0.188840969742;
    msg.z_units = 52U;
    msg.travel_z = 0.912426877429;
    msg.travel_z_units = 251U;
    msg.delayed = 5U;

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
    msg.setTimeStamp(0.756371197244);
    msg.setSource(27959U);
    msg.setSourceEntity(47U);
    msg.setDestination(16930U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.604775982394;
    msg.lon = 0.0800713805253;
    msg.z = 0.840402013725;
    msg.z_units = 133U;
    msg.speed = 0.566271724311;
    msg.speed_units = 219U;
    msg.bearing = 0.350927422274;
    msg.cross_angle = 0.0251322970277;
    msg.width = 0.541931705184;
    msg.length = 0.909675983087;
    msg.coff = 36U;
    msg.angaperture = 0.102608195672;
    msg.range = 41708U;
    msg.overlap = 89U;
    msg.flags = 248U;
    msg.custom.assign("OOBRUDXUFCTPSEKVAWYZHSENSOLLVESILRGGOOLWGGUPYIEFVMZAFQPHPVLWOMYUNJGONTVMJVMJFQFFPYJEHOHCZYYAYJFGUNM");

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
    msg.setTimeStamp(0.32284473487);
    msg.setSource(48053U);
    msg.setSourceEntity(202U);
    msg.setDestination(45451U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.523145718501;
    msg.lon = 0.557889832721;
    msg.z = 0.146028534732;
    msg.z_units = 120U;
    msg.speed = 0.453750803499;
    msg.speed_units = 2U;
    msg.bearing = 0.279803140641;
    msg.cross_angle = 0.880886558603;
    msg.width = 0.0244365977659;
    msg.length = 0.271327546447;
    msg.coff = 159U;
    msg.angaperture = 0.783669323867;
    msg.range = 14175U;
    msg.overlap = 219U;
    msg.flags = 202U;
    msg.custom.assign("RGIETVAZWNPTCKUUAUOEZXQWTKCMYKGTOJQKUKFHWBTMYIVOAPSDHHLNRKYVRWGNOJDSEEABZRJKDOFAPCHMBNMTQDXUDRXWWUZUJLXBPQCUQWEHMBYFGQANHIPAAJDXRFEFTCYILICSTQVHHJXEJSZJFSQMIMRMVOOFLNYNPSVRDZFDTFBLOMXJAJLRILLGSVIHHBNXEVE");

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
    msg.setTimeStamp(0.303569847128);
    msg.setSource(15120U);
    msg.setSourceEntity(155U);
    msg.setDestination(16771U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.56779577584;
    msg.lon = 0.736985247385;
    msg.z = 0.978831588228;
    msg.z_units = 220U;
    msg.speed = 0.158630961641;
    msg.speed_units = 43U;
    msg.bearing = 0.826735542549;
    msg.cross_angle = 0.269117158311;
    msg.width = 0.588039312239;
    msg.length = 0.311783632344;
    msg.coff = 127U;
    msg.angaperture = 0.141057786072;
    msg.range = 35671U;
    msg.overlap = 56U;
    msg.flags = 216U;
    msg.custom.assign("GWRYPMUZSXWNINCOKWIVHYVHKUEYGGDFCDNLMHYCSBODCBMWQYNU");

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
    msg.setTimeStamp(0.445087603799);
    msg.setSource(23114U);
    msg.setSourceEntity(149U);
    msg.setDestination(33776U);
    msg.setDestinationEntity(216U);
    msg.timeout = 2429U;
    msg.lat = 0.641753653688;
    msg.lon = 0.699721726098;
    msg.z = 0.527721348859;
    msg.z_units = 193U;
    msg.speed = 0.0774347800325;
    msg.speed_units = 234U;
    msg.syringe0 = 216U;
    msg.syringe1 = 128U;
    msg.syringe2 = 74U;
    msg.custom.assign("EHLPAVQNDQJLIVRWYIYKKLMXFWGDGDQJXZEBKWJTMROJSGUDUWIPVTHMVZ");

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
    msg.setTimeStamp(0.698967129621);
    msg.setSource(2842U);
    msg.setSourceEntity(246U);
    msg.setDestination(42709U);
    msg.setDestinationEntity(3U);
    msg.timeout = 56969U;
    msg.lat = 0.982475118943;
    msg.lon = 0.68285833842;
    msg.z = 0.982782986098;
    msg.z_units = 147U;
    msg.speed = 0.590111740999;
    msg.speed_units = 170U;
    msg.syringe0 = 100U;
    msg.syringe1 = 36U;
    msg.syringe2 = 75U;
    msg.custom.assign("RBJULTKTENKXNUFVSLGKYHDEFETDESUEFZMYBXKAJQGTDQGAGAFGCOQIMINSHBVZYUFZULOGAMQBDJMKNUGCHTUYOFCOGZPJQPSEOVHXYBFCELVANBPZMRLMYCIYBAXMSYPVMBUFWHKZEPDVPFZGNOKVJSWMCDNHPZHD");

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
    msg.setTimeStamp(0.635111326664);
    msg.setSource(23708U);
    msg.setSourceEntity(23U);
    msg.setDestination(34205U);
    msg.setDestinationEntity(170U);
    msg.timeout = 12626U;
    msg.lat = 0.551668469776;
    msg.lon = 0.205942237097;
    msg.z = 0.736788174448;
    msg.z_units = 182U;
    msg.speed = 0.9820251188;
    msg.speed_units = 238U;
    msg.syringe0 = 161U;
    msg.syringe1 = 225U;
    msg.syringe2 = 90U;
    msg.custom.assign("CWNKOLTDELIRHOBHCPJXGDFOCJJWYDCFANYHZSZKUKEMQQGNHPRMQOWVKLQJFXDQBZNYYAVUXGWUZTTEYSEIASRHQXPRRBMXNCEBGMPSUSWKMXRVJCJJOGWKDGOESDLDPYCNMHHRBFUIDTLBNFESAWTPLDHUMXFSFMBZNYAIRHGUZATQTXZFTVIXWJIDENVBBLYUPZPTPCAMQVSFGRLACHGMBQEULOVZIJ");

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
    msg.setTimeStamp(0.915346796576);
    msg.setSource(14364U);
    msg.setSourceEntity(112U);
    msg.setDestination(18711U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.513229920354);
    msg.setSource(7735U);
    msg.setSourceEntity(101U);
    msg.setDestination(38859U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.426993334097);
    msg.setSource(16879U);
    msg.setSourceEntity(71U);
    msg.setDestination(37659U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.224271246188);
    msg.setSource(8111U);
    msg.setSourceEntity(72U);
    msg.setDestination(14654U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.205771019538;
    msg.lon = 0.227042040064;
    msg.z = 0.0907201543189;
    msg.z_units = 92U;
    msg.speed = 0.777312653569;
    msg.speed_units = 54U;
    msg.takeoff_pitch = 0.460950876439;
    msg.custom.assign("BLLRRQNDJEXEMDSZBUSQIJIRFJFHYDGIDWZLMUFCPHEQWUWCSQIXVMWOMXQMEPYRYGZMXVCSGYOFUVDAXOKCHRKCRYWCBAQPSUPH");

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
    msg.setTimeStamp(0.501542714502);
    msg.setSource(32732U);
    msg.setSourceEntity(237U);
    msg.setDestination(59425U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.283270228812;
    msg.lon = 0.893996299462;
    msg.z = 0.904301158913;
    msg.z_units = 107U;
    msg.speed = 0.718320392812;
    msg.speed_units = 101U;
    msg.takeoff_pitch = 0.524451942433;
    msg.custom.assign("BGFGPFCVJAQDOYUUPKVYIAROLNWGNVRIGLOVCWLEWXNETBFKIJHAXFTZEVRQBULAKBBMFPFNSBRNDHPQXRNOMSNPCDFJUDYYQECZXENSCWIEKSLKJTYLFCDHIGBMJUWMZDHIJVROQYFDJAVQZYEUGJBTANAGVTLXBLWARIVOMKZSXKPVJCSHOBZMPQDNQCPSQKKAXYUTUIEIHXZWMRTIWHMODLFXZTGOPAPJYSZTTGHS");

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
    msg.setTimeStamp(0.469743997676);
    msg.setSource(43705U);
    msg.setSourceEntity(168U);
    msg.setDestination(60194U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.414380517784;
    msg.lon = 0.322823698731;
    msg.z = 0.907689298361;
    msg.z_units = 5U;
    msg.speed = 0.521180588928;
    msg.speed_units = 177U;
    msg.takeoff_pitch = 0.987606947194;
    msg.custom.assign("BDNQVASAFPGLHMOIJFHKWVKIIGIPAOZVKNRWXTCDCTTWFKRLKIQOWBJKVACPNQSFJWQUTEOXLLTBJBWDUDUQESAJOPMNHTYAKCJRMNVRJZVNRDWPKZVUBYUXMEMCBSYNNYROXAMBGZBRFZRUMIHXAHSHFZVIPUVQGMGZCS");

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
    msg.setTimeStamp(0.745068091103);
    msg.setSource(26328U);
    msg.setSourceEntity(86U);
    msg.setDestination(58310U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.55840319638;
    msg.lon = 0.275409615613;
    msg.z = 0.823542751771;
    msg.z_units = 186U;
    msg.speed = 0.952286487049;
    msg.speed_units = 126U;
    msg.abort_z = 0.509654255665;
    msg.bearing = 0.846198850509;
    msg.glide_slope = 147U;
    msg.glide_slope_alt = 0.221363240264;
    msg.custom.assign("QURBOWRZFPLADDYWJZBDXPRIQJNVQGDGKWFGXIERYVSXKGNIYJVPXSIYFNIVRBWDRLQHTFASPYVCYTJGZRZKTGAQPLAGFELBOJEVFHZBSXZCOXXECLMAQMITFJSTHBNSKHWNPODEOPHUBI");

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
    msg.setTimeStamp(0.456846924087);
    msg.setSource(3207U);
    msg.setSourceEntity(238U);
    msg.setDestination(2194U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.860701649921;
    msg.lon = 0.81210228596;
    msg.z = 0.311290265533;
    msg.z_units = 106U;
    msg.speed = 0.351817358104;
    msg.speed_units = 176U;
    msg.abort_z = 0.74232536704;
    msg.bearing = 0.818468932346;
    msg.glide_slope = 248U;
    msg.glide_slope_alt = 0.560257684498;
    msg.custom.assign("FREMNUGHMHJUMYQPVSQKITJCFTUYZENVQJHKANIFWVRUHTOVRUIODGERWSWTIIBALTZNHLRIKVXTWGHQXYLPO");

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
    msg.setTimeStamp(0.864835858447);
    msg.setSource(270U);
    msg.setSourceEntity(167U);
    msg.setDestination(37513U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.938378955676;
    msg.lon = 0.993475493854;
    msg.z = 0.941302895076;
    msg.z_units = 181U;
    msg.speed = 0.843692885073;
    msg.speed_units = 147U;
    msg.abort_z = 0.953275255398;
    msg.bearing = 0.0597892771357;
    msg.glide_slope = 15U;
    msg.glide_slope_alt = 0.55476579323;
    msg.custom.assign("OHAGSCITEROMLOSTZXUQUQPXHYJPQNQLCSBFFFWABNLFTMKIKPDLXWRZXWWBHENQTHZUJBSXGDAHMKPVQCCTVEZGWUSEALVGJNYCGAQZIVRXAHCGTGSXCULYPUYPMPOJWNPMYXTZGJIUQDDXJRHOWSBYJDJBFOOGSMLYWEITIADCKFBOMBSFDYMYVRWVDRHZN");

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
    msg.setTimeStamp(0.840243303459);
    msg.setSource(65250U);
    msg.setSourceEntity(64U);
    msg.setDestination(38618U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.639712433862;
    msg.lon = 0.176427334077;
    msg.speed = 0.5218336568;
    msg.speed_units = 177U;
    msg.limits = 187U;
    msg.max_depth = 0.339856891395;
    msg.min_alt = 0.953610892087;
    msg.time_limit = 0.210966924427;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.890689890748;
    tmp_msg_0.lon = 0.352696472891;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("NUQCEOJQPWOTEIOKYYQVLTNBWWQMYKDETZJQJGVOPPZDEAMTNNBUIZDBNCOXHHMHTVVBSPCTSXJAFBTMGWQHVCEZLZCYYDEVRZKOGLIWYXFVRXFTJFNSOCFDMRAYGWBJHJPFLEHJUZSLKJGXRKDURIOKUBWULWPHLFMYXLQKYNJGRLQEXHTTFIYDMICVOSAPIAASG");
    msg.custom.assign("DYUPKJDVYPIFQREESFDFAGFPLTJJKTRODKXVCAYMDQFMKORTYNBCBECLHXVUECBSCZNWQQCAMWRNKSQBCMCKHLRZZSAISYFFGHKGNKRAXFMDRIRPPUUIZIDAZOUBVHAWXMJHXPWNOMMFFXJSHNZOJUBGGBGEYTLHWTSLVUMTCIEGNEAIUXXEKDQLWIHGDOZPPROVTLPTOJHAWEAZLYWYBNSXJDJOGIBPNVQVZMTINWVUVQKHS");

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
    msg.setTimeStamp(0.542441480577);
    msg.setSource(8186U);
    msg.setSourceEntity(69U);
    msg.setDestination(48838U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.271259706898;
    msg.lon = 0.345902218986;
    msg.speed = 0.857522016377;
    msg.speed_units = 237U;
    msg.limits = 125U;
    msg.max_depth = 0.745214382416;
    msg.min_alt = 0.740491656231;
    msg.time_limit = 0.780038468487;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.352164453381;
    tmp_msg_0.lon = 0.520403304156;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PDQFAHZQMXVFLKTJBUIAFRRZEJJHBVGOJACOSBRSOFIFZMFLKTYWLVKAWEGBADMIWOJCLGBSURJEMQPYQDZDVOGYNDEUPLGMCBCJCDYKEPFMNFZORVETXSICWLKVURNXFXBONIHSFBWAYISJXPQTGHKQBJWUGKOSNZJQPTHMIVEVHWTCEUSNPYXPVDEAQDCLSRKGUCZUWYMLYNHROAMRXPIZX");
    msg.custom.assign("EBVQXCZNZAHZZCGGZUPNGUVEXQYVRXIAXBPMOTLXZBYVIFQIFLUILBLSWWDVUPDHOJYSZOSMXNJQWTIIKE");

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
    msg.setTimeStamp(0.85492230413);
    msg.setSource(32937U);
    msg.setSourceEntity(2U);
    msg.setDestination(49775U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.216844600971;
    msg.lon = 0.525120430714;
    msg.speed = 0.353310943753;
    msg.speed_units = 249U;
    msg.limits = 183U;
    msg.max_depth = 0.263729105924;
    msg.min_alt = 0.242214225402;
    msg.time_limit = 0.526429763772;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.411278539776;
    tmp_msg_0.lon = 0.385919317959;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JDGSRWTANKLXOCEMBLXWWVWUNOMLWJEALJOEDYKNUOVYLRJHHABTKSIKIEZFOCIJONDTZGCATIWVVCJHCURORLYSGXUDEQPJZZDNPLVQXADWGCAXSAFZZGGEQVKWPS");
    msg.custom.assign("XURBGLPORGHHJXNKSOTREOQPVLJUMQMUDZSKNCANTANTCFSTVJSFRHCWELWIHBEYTEZVQUBDHNXJEWCHOTHMLIZMBCUZVWAFQOYKPXXCOIFKRGGMXAFRKZLTSCFAGQAIMUNZCOHBNKZDBPWDPQYYGSYJPWGFJFYRKUDEWUIEZHIWKYDYBQQEVKDNSUASFGISXTDXVTZOVZNUVRDJMEYXLLMODOFJCPYPLCASLWJJWVLPVMREQ");

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
    msg.setTimeStamp(0.410021690551);
    msg.setSource(57809U);
    msg.setSourceEntity(67U);
    msg.setDestination(4290U);
    msg.setDestinationEntity(236U);
    msg.target.assign("ZBVZTWAQGUIJMDJXWRKGHFCMTONEYPLYPNHASSINWZRADHZYBCCGSDDPZXWTVJATHBZLDOJJAQDRCBHYKVRDYUUCFQUVNGBKOAOTPZGWQIMLFLXTTDYFEVKEIZDQNKCAWNKEQACYBVWRXFVTHUOQCVLFYIKOUULRGQZSWPXITEOCQMHSUTLBIMAXUJNIPZEFFOSSABNOJVPPGWYRSRMYFSCHGXGD");
    msg.max_speed = 0.280947530266;
    msg.speed_units = 237U;
    msg.lat = 0.614025783176;
    msg.lon = 0.843063244902;
    msg.z = 0.167847453503;
    msg.z_units = 93U;
    msg.custom.assign("KGHLCMEHRDTPKNXKXZGWEURZXVNDSEHFAIHNDZJTOTPYPKVXLJSXRYTVHISDAPNEWRGYEVCWMZXNGGUUIIFZKYLFNGWAMFLQWSCWQROPOYOGWWCY");

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
    msg.setTimeStamp(0.200380775353);
    msg.setSource(38889U);
    msg.setSourceEntity(0U);
    msg.setDestination(60832U);
    msg.setDestinationEntity(35U);
    msg.target.assign("MQAQIAHBZGXOWFDETXAKEHWCMADLIEPXYRSVJFUGKRNXNSHLORHREUOJQNAFJICTKOSSQSRLQHPDBTXAJVFYJHKZFVOWJSMZKEBDMCVCLDFYTMGRFTWOTCPPBKOXDMSKGNABUEVLVEWVSTUPIOSNKFAQ");
    msg.max_speed = 0.240550042613;
    msg.speed_units = 84U;
    msg.lat = 0.396264215383;
    msg.lon = 0.404033135191;
    msg.z = 0.325539582664;
    msg.z_units = 23U;
    msg.custom.assign("ZMZACPJDOVBTUXKQTNREIBYUEPZDFYCIQEPGWCFAPRGCFFVRNZWKEGAKCYPPJTLCBXENHQJYDCVJEIEQSZAOSUCYVJFWAKUXFFMBIVXXPAKGMWRGEODJANNDSIYLVD");

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
    msg.setTimeStamp(0.679251209898);
    msg.setSource(57169U);
    msg.setSourceEntity(167U);
    msg.setDestination(14200U);
    msg.setDestinationEntity(197U);
    msg.target.assign("HEDEZWPRQQTYZWVMITTNFQCVMRFFYYYXWDOZPINTBMDXOIFVPUSUDLLYRCDJGQDDYWAGGEEUMFLONHKSTUAQOEJQTOBFQLAKVL");
    msg.max_speed = 0.192383909693;
    msg.speed_units = 3U;
    msg.lat = 0.442091777378;
    msg.lon = 0.954951475624;
    msg.z = 0.398502051688;
    msg.z_units = 186U;
    msg.custom.assign("UBICAVAKOZPLYZAXRPTQFIDKUAJTCKRHFIXRMNKTSYUPCLBKHNUQFJYPOHFZBCWBWFOHEKMHIFKEDNPNTOHVHJWIRXAMALQMBEHQAYGUCJUNSSNZTYDCDXWKJTRROBVXTELHCQIROTEMVLGVWJIBYMJEZGSBPROFNXOVVWLCGGXRICXMPBASEUELLGC");

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
    msg.setTimeStamp(0.954849635575);
    msg.setSource(38771U);
    msg.setSourceEntity(204U);
    msg.setDestination(36385U);
    msg.setDestinationEntity(8U);
    msg.timeout = 22078U;
    msg.lat = 0.124511354907;
    msg.lon = 0.773085159571;
    msg.speed = 0.802773138793;
    msg.speed_units = 184U;
    msg.custom.assign("WGJLGUOYVYDNRBANDKOEP");

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
    msg.setTimeStamp(0.00492190160899);
    msg.setSource(22403U);
    msg.setSourceEntity(68U);
    msg.setDestination(33309U);
    msg.setDestinationEntity(207U);
    msg.timeout = 3635U;
    msg.lat = 0.183509686286;
    msg.lon = 0.78660319818;
    msg.speed = 0.551384754998;
    msg.speed_units = 16U;
    msg.custom.assign("EUSEUURHYMSJKLHXKZRHZHYBDKYLIJDDICMTUYHKTAYWJHGZVRBOIMARJXDPQADKLSWNGUFTJYNYUWUQJCCQUCELHVEIVORPPBSKNPQMXWITZGCZLTVBVQFFVTXWKEUGDFPNPQVRCJHPLDLAHXSFIVXXOYLAQGRLZFNMOLCSNUKJMYBCOBSSWVWIMZCTPFOXKMXZJTWIAVATRGQQFGBEINABEABPOWEEMQGDIGWNDRHBNMXFZOSJDTKSONY");

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
    msg.setTimeStamp(0.0700871570862);
    msg.setSource(35588U);
    msg.setSourceEntity(150U);
    msg.setDestination(2272U);
    msg.setDestinationEntity(210U);
    msg.timeout = 31908U;
    msg.lat = 0.561488430261;
    msg.lon = 0.697731493222;
    msg.speed = 0.221832092945;
    msg.speed_units = 153U;
    msg.custom.assign("ZQXCACXBXOOLHVXORJMYNKYNRPAURGOKAQCYLPZREOAFULWBJPQPMYXBSEKGJBTSDVNRRJWXMUUNGWJQGSDZEJTTSAHVODYCWAKOLXXSIHCMFKFQJAEAOCIBKPQVFKLDQZMLZKDIQPDTTNDNHVYLSRJHASD");

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
    msg.setTimeStamp(0.419232541933);
    msg.setSource(50406U);
    msg.setSourceEntity(147U);
    msg.setDestination(57950U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.378793429262;
    msg.lon = 0.820176099761;
    msg.z = 0.683026817319;
    msg.z_units = 218U;
    msg.radius = 0.149797400383;
    msg.duration = 44569U;
    msg.speed = 0.102668352681;
    msg.speed_units = 186U;
    msg.popup_period = 21000U;
    msg.popup_duration = 36647U;
    msg.flags = 165U;
    msg.custom.assign("LPHXURMSSKASFKLDSOTNWEHLAQLCCAONUIGDUOVFUZMTJIBJORPMRIKFAJQITSPLTKOVRNLKAAMQTDLZSSRYQYUCXIJALJNQKWBDSCWBVUEMUHVQZXFVZFXPQVBESPCNTHJNJNJEBRXYWUYWOAIMXFGGEPJXGKKPUBTCROQMYHFSZDBGIEFTXCWVYZTZHWDRAHWFGZKJLIYXERTUGWBOAEHICOHVMDKDOYVEPZCQMRGCPBQDMIYPVHXNYEGGL");

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
    msg.setTimeStamp(0.90469819005);
    msg.setSource(8057U);
    msg.setSourceEntity(104U);
    msg.setDestination(21614U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.252721975397;
    msg.lon = 0.152345881488;
    msg.z = 0.00469385977058;
    msg.z_units = 179U;
    msg.radius = 0.131895881879;
    msg.duration = 38940U;
    msg.speed = 0.0995235650606;
    msg.speed_units = 87U;
    msg.popup_period = 58246U;
    msg.popup_duration = 51053U;
    msg.flags = 218U;
    msg.custom.assign("QHDTUQJEPVSLKQMNZWJNKZTPNJGICKRIXXCUYCUJLGGBJWDMTNLKWPEASVKZSDFPQOIZYLXOTXDRTTSITAJWJQUIDNYEJXKESOUQECWFUONHKSDPVDSVEOBPGMAOBWTZJDPGZL");

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
    msg.setTimeStamp(0.418295796795);
    msg.setSource(31200U);
    msg.setSourceEntity(28U);
    msg.setDestination(16706U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.870060686537;
    msg.lon = 0.790510638685;
    msg.z = 0.459704307654;
    msg.z_units = 206U;
    msg.radius = 0.509691610412;
    msg.duration = 23176U;
    msg.speed = 0.0554005629391;
    msg.speed_units = 90U;
    msg.popup_period = 15478U;
    msg.popup_duration = 48102U;
    msg.flags = 78U;
    msg.custom.assign("SUAQUVNKCGQXHPSANQULPNLOOPAAHHYTLLAOKSWTDNFNPTXUDYHHGQWXTVRPWGLCYYJMQPFBGEZQIFIRPHKFDCVHAJNIXWKBNCZRIPSREFRMAESMYXIQYQVFWVNBWMJHCTZIRFDHGBTEDYKGKSLEMNRVE");

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
    msg.setTimeStamp(0.256109071258);
    msg.setSource(29085U);
    msg.setSourceEntity(209U);
    msg.setDestination(29100U);
    msg.setDestinationEntity(126U);
    msg.op_mode = 22U;
    msg.error_count = 246U;
    msg.error_ents.assign("XAOORJPHEAQWRMMTEVYBPUKQBGYDWLFSSXVIDHRQBLDIOPQACFCTDXSGDOFOARVKYXVYBIUNWCUWLGKLDHMBQIKSNOAJIHAPGUEIVSBQXYZNQCEULBOOMZMVJNUGZXZPCKZGPYJVXSELVEHKSPREDXVBMDFCFIFYNZFHXRBYLECADUZMQCGLWJFIKVETLJTFNKCATIAMJRWHQAEFPTZRTNMYUGWTSRUKKJHRPNMLJSNNOCPDIHWQUWWOYGXZ");
    msg.maneuver_type = 462U;
    msg.maneuver_stime = 0.532542177348;
    msg.maneuver_eta = 43063U;
    msg.control_loops = 4197447165U;
    msg.flags = 127U;
    msg.last_error.assign("AKKMVNYBBOCFNTMWMBJDLZGGWKUSVZRBYPGRNBNTQLWIIUYSEIVLAOLGURALTTOQXQWIJIOIZRZFIZWUPDNOQCEJQKEXWRYVAHVGGBMVKCXXPBMBETJYFXGUYDOBQRTDXPREEESVBKHGKTMJLOSHMWAHQKFCHLFNMEDXFSZESFRNSTPHOARUDLVJVPJGXIDHFHNDCJTYGWYORQUNCEHYWKPVFIQZDJS");
    msg.last_error_time = 0.15751540827;

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
    msg.setTimeStamp(0.353162500464);
    msg.setSource(53162U);
    msg.setSourceEntity(129U);
    msg.setDestination(62943U);
    msg.setDestinationEntity(124U);
    msg.op_mode = 154U;
    msg.error_count = 160U;
    msg.error_ents.assign("BEPTXXZHXSOPZARZADNHVGJJZQGIBZEFECPERNHLUIBOIWYPKYIOYAWJFIPUAHEYPUPRVQDKWQNVUBTSXXFFMHVASOKBMNIQQKHBLZDGDLAJUSCAJFXRCUNWGRHLTUUOLIWQEGTFJZFKYWMBGPSBKYXTNTKLVCSIGGXLSRJOSDHYCMFDMEBZWUDYWVTYAZTMHSMGDHBEWCVXPMQR");
    msg.maneuver_type = 53775U;
    msg.maneuver_stime = 0.549475622923;
    msg.maneuver_eta = 25286U;
    msg.control_loops = 4150908370U;
    msg.flags = 188U;
    msg.last_error.assign("GGKQKRWRWNOJSOFBQUOJPBVJCXXPXJSBAGCYAXYSLJFNVXEKNCCYFTFSLYTIELUPPXLTQVDQPMDRTZZIBOFMRPSDWMDUWDMB");
    msg.last_error_time = 0.157652224545;

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
    msg.setTimeStamp(0.930918340287);
    msg.setSource(5464U);
    msg.setSourceEntity(201U);
    msg.setDestination(9576U);
    msg.setDestinationEntity(131U);
    msg.op_mode = 180U;
    msg.error_count = 32U;
    msg.error_ents.assign("WRDSAYRSKNBOMVGRUOMWUBMFJHHLJLJHCSPSJINQTFDBXMXRWQFIJXPEXZSEQYD");
    msg.maneuver_type = 44289U;
    msg.maneuver_stime = 0.26243896032;
    msg.maneuver_eta = 29798U;
    msg.control_loops = 1286245328U;
    msg.flags = 73U;
    msg.last_error.assign("BHVUFXDSSKZSBPWMYQLYJDVEYWTHLBJKGYUAIIWNCFUNALR");
    msg.last_error_time = 0.943873297936;

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
    msg.setTimeStamp(0.166008477379);
    msg.setSource(20439U);
    msg.setSourceEntity(227U);
    msg.setDestination(57846U);
    msg.setDestinationEntity(113U);
    msg.type = 190U;
    msg.request_id = 46683U;
    msg.command = 94U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.846761112728;
    tmp_msg_0.lon = 0.039452987211;
    tmp_msg_0.z = 0.391855531726;
    tmp_msg_0.z_units = 234U;
    tmp_msg_0.radius = 0.663688511483;
    tmp_msg_0.duration = 31204U;
    tmp_msg_0.speed = 0.250378949996;
    tmp_msg_0.speed_units = 86U;
    tmp_msg_0.custom.assign("BDTKABEGUTNVPSFMLKKIICJLNXPMHSYFIALANXRVNOXXZKCDEPCDAQRHEEXJMPFNMWKHSDWFTJLMOBVCTVYFETRCFUQZYWDASKZVYHOIMXRGSNRGWORYNVAQAQGF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 16666U;
    msg.info.assign("RLYXVKYKPZFIEURAZCRTRMQVNMFSSHFDPESVFLIWWIBHVADQQNIDCUVGIDKYKPJTLMHOYHOIXIPCNBNQETGVJOOPBZAKWODMDMBPIATJBOEBRWGDTJAXTXAFKWEJZDDUHVWWLHGSPLATZHJEQPASMNGYCPEUTLMOXAXNTUVHYEIXRJCVKBBGOJENRKBUUQWXCCKYDF");

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
    msg.setTimeStamp(0.442789106377);
    msg.setSource(11206U);
    msg.setSourceEntity(189U);
    msg.setDestination(63485U);
    msg.setDestinationEntity(32U);
    msg.type = 165U;
    msg.request_id = 64803U;
    msg.command = 208U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.991834292528;
    tmp_msg_0.lon = 0.183128561104;
    tmp_msg_0.z = 0.554624504557;
    tmp_msg_0.z_units = 152U;
    tmp_msg_0.speed = 0.514311867353;
    tmp_msg_0.speed_units = 137U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.264920922324;
    tmp_tmp_msg_0_0.y = 0.940929493037;
    tmp_tmp_msg_0_0.z = 0.612950712667;
    tmp_tmp_msg_0_0.t = 0.380995244849;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 20631U;
    tmp_tmp_msg_0_1.off_x = 0.92421982473;
    tmp_tmp_msg_0_1.off_y = 0.427838150557;
    tmp_tmp_msg_0_1.off_z = 0.0604472001271;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.455406045639;
    tmp_msg_0.custom.assign("RKCSSDPWBHDNPGKZKOQEJUOFOZVCXGIYDYFSVWKQKNCYFQYXVPVLRVOSJDDJLBCLBHHGZIRJZRRDFHUEIXTTPXMATFUTTABUNCZUMWELQMJEFAREHGFSIXAYTBZYDHETLAEWUXXZITIRJUKNBXPWPJXOMHQQXFCOSPNMPVBNQTJVOMDAVWVAMZOLRPZWDQGZQOLBIAHMYPRWQNHACCKYIFWGYJGNUKLINGGSDLUB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15352U;
    msg.info.assign("UUBJVQOMNOWVFSTLAZQLOKERUWGQCAGATITDIMLPJWVRRMKCUWQPTYAVYCYWJDCNVGFOFPUOWHSEKHXHPIFJDULDHTIOYS");

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
    msg.setTimeStamp(0.533889715906);
    msg.setSource(60668U);
    msg.setSourceEntity(174U);
    msg.setDestination(39246U);
    msg.setDestinationEntity(164U);
    msg.type = 82U;
    msg.request_id = 11380U;
    msg.command = 139U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("UOERJHWJQESCIBQFOETFPKRWMTXRFTXGTBYSGYZCPAUHMBIOMMCJDLDDAKSCVOLNEIXKHMBNVAFRCDCDIHIRURPYOQYJDDOENMHQLBQOWEYFSKAGKJSVMCKXFWUMISPHXAAYUJLIBPTLXGEJUZVFKSVNNQCVBZLHHQTBNYJLNH");
    tmp_msg_0.formation_name.assign("UEXXYGCDRRFURPXWCMOQSEZTXERXSRFYASUUSKWRZYWEXGLDEYMHAPIUCDZFDZSVFVHMKLMP");
    tmp_msg_0.plan_id.assign("ILIVNVGDVCFNLYEZHOCWUNEGIKUJPYDSTZCQRRPOYPCJQRXARPTAPMDSUIGJMWEYCNNEPTRCAXZBXMRRQHCREHOIUQQFSGQQXWXXCOWFNUUUHPKIGFXWPVZTWIYZIJSKPWZLOWGBCJAJMFSFBEBHTODLLHJOLDHTYEOUTVRDOZNVMBGSKYHVAFSAIUXVAXAYTBZYHPJLOEEKBAMBQKTMYSQKALJNSIWLNLBMFDZVGQMRNDKEKSWTFUHVJZ");
    tmp_msg_0.description.assign("RXAUEWTNFOXVOGOBVJ");
    tmp_msg_0.leader_speed = 0.297963918806;
    tmp_msg_0.leader_bank_lim = 0.0364583121842;
    tmp_msg_0.pos_sim_err_lim = 0.840570184796;
    tmp_msg_0.pos_sim_err_wrn = 0.497626040824;
    tmp_msg_0.pos_sim_err_timeout = 21241U;
    tmp_msg_0.converg_max = 0.240591036904;
    tmp_msg_0.converg_timeout = 53354U;
    tmp_msg_0.comms_timeout = 51080U;
    tmp_msg_0.turb_lim = 0.663350757772;
    tmp_msg_0.custom.assign("ABLWTUPNHAYJKDWRGGKARLAQYQUZGPUJXEPVVOOBRJDQGCPILVWQKLISZCSAFWFYABSQUOIBXDYKUJRXMFNXEDJNPJEGFJLCPONTNBFROQVHFWXMDNCTSATPTB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10937U;
    msg.info.assign("KAESUCUBLGGJQPLYAHAGUVSMOUWNAPXPLFRWBADCVPMGHBFTYZOKKFFDWSPIEPJZE");

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
    msg.setTimeStamp(0.700911948429);
    msg.setSource(4417U);
    msg.setSourceEntity(211U);
    msg.setDestination(64568U);
    msg.setDestinationEntity(178U);
    msg.command = 44U;
    msg.entities.assign("GTXFRDNZDAIMEPCELOMVNCFONFWHAGSXYHQZUKIXNEVKNJJUYFMACVSBFLAWHNKEIUZBYTBKQOKBAXOGFBVGCCLGDMMMXHATJZUHJWJOLHPYRQORXRAITDSVUXRQPBWYSDSESJQWTNICFPB");

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
    msg.setTimeStamp(0.241611745942);
    msg.setSource(45550U);
    msg.setSourceEntity(139U);
    msg.setDestination(1853U);
    msg.setDestinationEntity(84U);
    msg.command = 132U;
    msg.entities.assign("JZCSCZFSRYUBXPUUOIHTWWTQZKIKEZQSUEWRDZNHPTJMGOWMFJSMV");

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
    msg.setTimeStamp(0.772733000691);
    msg.setSource(32796U);
    msg.setSourceEntity(133U);
    msg.setDestination(8136U);
    msg.setDestinationEntity(180U);
    msg.command = 121U;
    msg.entities.assign("VMSQCTSXFIPKDHZHIMYKUEIZJHMBMIMZPLQKRLLPXXNSQWFYILXACXAONRTIUBHERIYJVLMGGEJIUTZSFZNBYEEWDFTRGUNSSZAXMRATFJFOKGVNWLAXUPSKCCHYNBJQUDIOCKYCUABGWTYJPGOQBMYWWQGHNQAUDVSJPTCYNKHZUVBZDPGBWFVTBYUNGDSWDLTPAIAQOEHFRQCPSMDJNHLEEMQGDRKAFHOOTVEFODZRROKXBJWLVECLX");

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
    msg.setTimeStamp(0.534580534634);
    msg.setSource(9646U);
    msg.setSourceEntity(151U);
    msg.setDestination(32204U);
    msg.setDestinationEntity(61U);
    msg.mcount = 226U;
    msg.mnames.assign("XCMELLWNSKEYWZZZLGZREQIQMYSYYYBBIJQEYXUQHIGHZDONXNRCMAHSOIWZUVWPKDFMUSPGWLTWSDHRRPUDTVFUMQJGLXCFFOBJEVCXTIETISWPFMSOHANWIESYKOHBPLZHADCDRHDWAEYKVQGACTUFJGOADFRCQZBABFBGVVLDCNWXYQNRPAVOGUJPUCOARBGBANTLKKEMEUORJKYFOBPTPMDJLTVJZXM");
    msg.ecount = 34U;
    msg.enames.assign("ZQWRICPBLKZAGJVNDIJBNMYVTFSWSCMLZKWJAPAURCGTUHYJUEKWXPLEDZOCMAYLVRTGHBZIWLIKPKSVNMZQDOOWDQMCNYNAYVRETNXNEZOVFGZFEBQBCSQMCC");
    msg.ccount = 126U;
    msg.cnames.assign("VCBIXYZRAVAGXETDIKIEDRCXCZNITKRODIHIZAQRJGYUTEXLBLPRGEPKKJSQUEWXYHHFXONFOPKWHGFOFQSQLYKNQLHVWYGMRHSSJBTPDUYEWN");
    msg.last_error.assign("EMCYSCYBFOGINATAJXJFUQGZLRRFGSEHFGECRQRXMLPRWYBPRBJIPTTSCSYYEDYSCEZUWRRVZMQKSKZUHDSHOJLGMLKLLIXSTVXBNBNJMDPNHZWWHJVIVDUXQFHIXHYTWWITJIUZDDBMQQHOMCMGLBYFEXCASFFCDCKAPATOUNLMNVVYZZANBXUGZGXVFLAPKMNODBUKSWQOLJWTVJDTVY");
    msg.last_error_time = 0.697155224475;

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
    msg.setTimeStamp(0.465547529256);
    msg.setSource(41106U);
    msg.setSourceEntity(149U);
    msg.setDestination(56567U);
    msg.setDestinationEntity(235U);
    msg.mcount = 84U;
    msg.mnames.assign("QKOHGLMVJZJCTBJNKLKQCJGFPKCNCTDFMMUNUSAVPXKPWFEEHGUVPAUYBOMWZQFWWBPBWGSDNETRVKYHOZPXLCHOCFPBCAYVXVUEDIRKZXRWRTPMMUVDRANYSYGJCLTQZTDSSMSJIFYJSAGMYJUBWJTLEQXZUXVBWAENXVCYWRZYYTLIQEAOQFEJTEKQLRULTFUIHIGORORD");
    msg.ecount = 143U;
    msg.enames.assign("HXYLBYXUHFDASKYPUSHJEGDIKRWIQMAKNWLUKNMLX");
    msg.ccount = 178U;
    msg.cnames.assign("STLNYSWXNZBHYSPRZJDHABLBAWGYAGVQBIIXLMYUEUGWQJMXMCXURFMJOKJONIHPKSWGSQYZPMHYZEVJKWXSYGHTBATAHQFKDOKJVXXESFUWDTNQVMJPEPCHUITDSFZKLZYEJMDXRWHLAFDCJYZFTXRPIBUVPAGTQZRNKVBWYKFUURRP");
    msg.last_error.assign("DEKUFHASSIAHZSBGDCZNLCNJBOZHBHYUOEQFJCBPOJOVSIFZNUBGQKAMWVJVFOWAQNKTJNHMWMTRYLYYXBNRNPPRXQZAQTIYUPOQXLSVTNHOYKNVWEVMPIFLGCTWSHHPRGSRKQWFCJQDMUELLYDKMJIBETFFCEFRCJZMGMMXUTUICXDFIDLKDAIGGRDULIEVTEOBVGDHIQKCRURLPWOESSNXEKKLAMZCWJGVZHPDAZUYPPZXXOVAYWRQJXBSW");
    msg.last_error_time = 0.223173238887;

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
    msg.setTimeStamp(0.49525005261);
    msg.setSource(38717U);
    msg.setSourceEntity(220U);
    msg.setDestination(10727U);
    msg.setDestinationEntity(43U);
    msg.mcount = 249U;
    msg.mnames.assign("JFMCFNGPLKXLARAEXWJPXIPVSYMUFVNBHKDZK");
    msg.ecount = 194U;
    msg.enames.assign("CJRTGZVEASBFMBRFZVJTGNIYKSYHHIDPYKWECLXSQRVHNESNJVCUXZLEUAPWXDIIIOMFPNQUDKHJBKTD");
    msg.ccount = 1U;
    msg.cnames.assign("ZPXNZASJBRRICSDLMDXNNKAPEJAOGQLDRCIUFOKAPYQRVYWEHTIFATMCDBFGPKWVZCPME");
    msg.last_error.assign("HOORENVVCTNTQBDQLPOMQXGJUKSBWXXQJLUWCSGJILQKOZIKBCUARTYYKKFFOTNWOVPG");
    msg.last_error_time = 0.731629816586;

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
    msg.setTimeStamp(0.991253691279);
    msg.setSource(61156U);
    msg.setSourceEntity(117U);
    msg.setDestination(19384U);
    msg.setDestinationEntity(43U);
    msg.mask = 224U;
    msg.max_depth = 0.410471096633;
    msg.min_altitude = 0.655747468824;
    msg.max_altitude = 0.563303780965;
    msg.min_speed = 0.143031310143;
    msg.max_speed = 0.437787329583;
    msg.max_vrate = 0.969807514938;
    msg.lat = 0.782736272812;
    msg.lon = 0.627432233662;
    msg.orientation = 0.576877222799;
    msg.width = 0.505509349569;
    msg.length = 0.328611708621;

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
    msg.setTimeStamp(0.415860114389);
    msg.setSource(27499U);
    msg.setSourceEntity(234U);
    msg.setDestination(1463U);
    msg.setDestinationEntity(116U);
    msg.mask = 181U;
    msg.max_depth = 0.547187715321;
    msg.min_altitude = 0.632439133365;
    msg.max_altitude = 0.317686385105;
    msg.min_speed = 0.859959759913;
    msg.max_speed = 0.48878325693;
    msg.max_vrate = 0.628473845075;
    msg.lat = 0.198284321508;
    msg.lon = 0.721665835037;
    msg.orientation = 0.7215092038;
    msg.width = 0.561682964835;
    msg.length = 0.38525600483;

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
    msg.setTimeStamp(0.184402707233);
    msg.setSource(23599U);
    msg.setSourceEntity(163U);
    msg.setDestination(17411U);
    msg.setDestinationEntity(245U);
    msg.mask = 147U;
    msg.max_depth = 0.067136600219;
    msg.min_altitude = 0.725660417654;
    msg.max_altitude = 0.83660961712;
    msg.min_speed = 0.415476465494;
    msg.max_speed = 0.412824094673;
    msg.max_vrate = 0.89113649181;
    msg.lat = 0.344170324167;
    msg.lon = 0.587128374372;
    msg.orientation = 0.378918951669;
    msg.width = 0.544252685442;
    msg.length = 0.996431792301;

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
    msg.setTimeStamp(0.603632440921);
    msg.setSource(57460U);
    msg.setSourceEntity(102U);
    msg.setDestination(11453U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.601032617183);
    msg.setSource(29999U);
    msg.setSourceEntity(4U);
    msg.setDestination(38358U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.0876208172706);
    msg.setSource(23671U);
    msg.setSourceEntity(167U);
    msg.setDestination(50663U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.451086892957);
    msg.setSource(24154U);
    msg.setSourceEntity(151U);
    msg.setDestination(9747U);
    msg.setDestinationEntity(197U);
    msg.duration = 42929U;

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
    msg.setTimeStamp(0.194634206173);
    msg.setSource(17084U);
    msg.setSourceEntity(185U);
    msg.setDestination(35796U);
    msg.setDestinationEntity(39U);
    msg.duration = 49830U;

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
    msg.setTimeStamp(0.619821035722);
    msg.setSource(41430U);
    msg.setSourceEntity(96U);
    msg.setDestination(57830U);
    msg.setDestinationEntity(105U);
    msg.duration = 29192U;

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
    msg.setTimeStamp(0.737728967206);
    msg.setSource(36833U);
    msg.setSourceEntity(218U);
    msg.setDestination(46433U);
    msg.setDestinationEntity(2U);
    msg.enable = 141U;
    msg.mask = 3735054477U;
    msg.scope_ref = 2836458945U;

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
    msg.setTimeStamp(0.462127417128);
    msg.setSource(41261U);
    msg.setSourceEntity(109U);
    msg.setDestination(63552U);
    msg.setDestinationEntity(30U);
    msg.enable = 8U;
    msg.mask = 2609464082U;
    msg.scope_ref = 3021215441U;

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
    msg.setTimeStamp(0.445738165868);
    msg.setSource(59584U);
    msg.setSourceEntity(80U);
    msg.setDestination(57768U);
    msg.setDestinationEntity(59U);
    msg.enable = 154U;
    msg.mask = 919822708U;
    msg.scope_ref = 3344937144U;

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
    msg.setTimeStamp(0.188459660127);
    msg.setSource(9528U);
    msg.setSourceEntity(81U);
    msg.setDestination(44722U);
    msg.setDestinationEntity(42U);
    msg.medium = 148U;

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
    msg.setTimeStamp(0.993202323583);
    msg.setSource(16331U);
    msg.setSourceEntity(75U);
    msg.setDestination(21174U);
    msg.setDestinationEntity(118U);
    msg.medium = 45U;

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
    msg.setTimeStamp(0.162635017786);
    msg.setSource(61942U);
    msg.setSourceEntity(106U);
    msg.setDestination(57485U);
    msg.setDestinationEntity(163U);
    msg.medium = 173U;

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
    msg.setTimeStamp(0.878286805324);
    msg.setSource(8421U);
    msg.setSourceEntity(161U);
    msg.setDestination(61083U);
    msg.setDestinationEntity(173U);
    msg.value = 0.122282322828;
    msg.type = 174U;

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
    msg.setTimeStamp(0.948715093354);
    msg.setSource(31842U);
    msg.setSourceEntity(22U);
    msg.setDestination(42750U);
    msg.setDestinationEntity(161U);
    msg.value = 0.706766040122;
    msg.type = 200U;

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
    msg.setTimeStamp(0.826218661102);
    msg.setSource(65074U);
    msg.setSourceEntity(184U);
    msg.setDestination(54031U);
    msg.setDestinationEntity(112U);
    msg.value = 0.462505097212;
    msg.type = 62U;

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
    msg.setTimeStamp(0.898996874056);
    msg.setSource(49548U);
    msg.setSourceEntity(200U);
    msg.setDestination(52415U);
    msg.setDestinationEntity(172U);
    msg.possimerr = 0.745891367354;
    msg.converg = 0.0470880302183;
    msg.turbulence = 0.110170465179;
    msg.possimmon = 179U;
    msg.commmon = 106U;
    msg.convergmon = 133U;

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
    msg.setTimeStamp(0.957145714517);
    msg.setSource(23988U);
    msg.setSourceEntity(141U);
    msg.setDestination(34711U);
    msg.setDestinationEntity(133U);
    msg.possimerr = 0.102198034734;
    msg.converg = 0.234397090566;
    msg.turbulence = 0.218314554304;
    msg.possimmon = 219U;
    msg.commmon = 160U;
    msg.convergmon = 118U;

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
    msg.setTimeStamp(0.66860617078);
    msg.setSource(1610U);
    msg.setSourceEntity(40U);
    msg.setDestination(2461U);
    msg.setDestinationEntity(182U);
    msg.possimerr = 0.8391441158;
    msg.converg = 0.335825346817;
    msg.turbulence = 0.132999059881;
    msg.possimmon = 94U;
    msg.commmon = 81U;
    msg.convergmon = 111U;

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
    msg.setTimeStamp(0.331068399623);
    msg.setSource(11974U);
    msg.setSourceEntity(121U);
    msg.setDestination(50642U);
    msg.setDestinationEntity(12U);
    msg.autonomy = 102U;
    msg.mode.assign("MVZBMGQJRDVCKBTZJKKYQGLAIYQRLBZXIQYBWKLACTUZPKKDDOVMJRQHFUBARWIGQPYWMTFYFFWQXQVNLENXCDEVCOYJDETAWOSGHUOIPLZCDGAKSKPYRTJIJUEEASOSRIIAHGXVWUXYUOSSLXAP");

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
    msg.setTimeStamp(0.368748487976);
    msg.setSource(38871U);
    msg.setSourceEntity(167U);
    msg.setDestination(40277U);
    msg.setDestinationEntity(243U);
    msg.autonomy = 178U;
    msg.mode.assign("HBIDLUYLAHGOEDDNGVRBURTFFLTERNKBTTQKDMOFKSYIYOCRXWCAKZNRLEWOCFWXBXGSSVFPZCQLFAUJODGKCXSMCKZEYIZJLDPVIWAOLTHFPZQJRAIVQUTTZQMSGEUMUBZJBTPHJXRMIIIXJGMWHBKZMCYYSLYMSDV");

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
    msg.setTimeStamp(0.612747620224);
    msg.setSource(6493U);
    msg.setSourceEntity(213U);
    msg.setDestination(9397U);
    msg.setDestinationEntity(44U);
    msg.autonomy = 234U;
    msg.mode.assign("MBCCVXDZAJTKQKLCSOEQBFYTXNWNIDHHIRBEKKOLHFQJXPECEOHQXVVBUDSGTHYNOVJFIOEPUITXMQFHUSJACAWXLPRYFWCAWHNJDXMUVFGPEXETVLNPZRVCRUBJRYLAKPQUPJKSLJLOTSNTMZPWWYQZQIUMMOFEZDKDBFCDZZLNRXRSGUNNSHVIARJHTBKZIFZZIFWIKVYUTNABXSYBAA");

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
    msg.setTimeStamp(0.457985924281);
    msg.setSource(9566U);
    msg.setSourceEntity(110U);
    msg.setDestination(59311U);
    msg.setDestinationEntity(175U);
    msg.type = 165U;
    msg.op = 236U;
    msg.possimerr = 0.437393651095;
    msg.converg = 0.38996893345;
    msg.turbulence = 0.860252775748;
    msg.possimmon = 9U;
    msg.commmon = 241U;
    msg.convergmon = 13U;

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
    msg.setTimeStamp(0.113951081213);
    msg.setSource(9822U);
    msg.setSourceEntity(245U);
    msg.setDestination(57057U);
    msg.setDestinationEntity(89U);
    msg.type = 133U;
    msg.op = 185U;
    msg.possimerr = 0.308570576298;
    msg.converg = 0.651848171308;
    msg.turbulence = 0.976748500502;
    msg.possimmon = 169U;
    msg.commmon = 88U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.0307246754201);
    msg.setSource(2701U);
    msg.setSourceEntity(229U);
    msg.setDestination(62127U);
    msg.setDestinationEntity(16U);
    msg.type = 91U;
    msg.op = 31U;
    msg.possimerr = 0.472321128399;
    msg.converg = 0.210743242441;
    msg.turbulence = 0.112621155285;
    msg.possimmon = 163U;
    msg.commmon = 220U;
    msg.convergmon = 241U;

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
    msg.setTimeStamp(0.623031101334);
    msg.setSource(57673U);
    msg.setSourceEntity(216U);
    msg.setDestination(19542U);
    msg.setDestinationEntity(50U);
    msg.op = 134U;
    msg.comm_interface = 38U;
    msg.period = 43382U;
    msg.sys_dst.assign("QDMJZMRQFDLQEGQBDFEPZPGBUZZQHEUKWPTNHJILJINFNAUGVYETLVUYMQWKXAPYFDVBZUVXVJRWVSJDGFJWTRXYHUKBTIOWCFYWLBFAGSOFRRRDTYWVGCIIE");

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
    msg.setTimeStamp(0.586429220022);
    msg.setSource(9606U);
    msg.setSourceEntity(48U);
    msg.setDestination(17018U);
    msg.setDestinationEntity(59U);
    msg.op = 73U;
    msg.comm_interface = 134U;
    msg.period = 30839U;
    msg.sys_dst.assign("UPLDLHSUYGCRZWIQUKQVAMIMBHNWZCIBEZXFLPPMYDYCPXEJPCSINSJYADTE");

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
    msg.setTimeStamp(0.62557793213);
    msg.setSource(47936U);
    msg.setSourceEntity(60U);
    msg.setDestination(59695U);
    msg.setDestinationEntity(145U);
    msg.op = 196U;
    msg.comm_interface = 135U;
    msg.period = 60909U;
    msg.sys_dst.assign("UOVJMJGYNHZHHCYPHECXXRFCUKWWYKRCWJUMXWTHLALNBSKQPWVSQRBZXMFMQPCKNKFGJHGWGRQKBQMTZGPSMXOPZTESABIDNYNUIXFYSZLSJXHXNRDTAXHJHLISZDFNXOYPITBJNUEFBZCMWRIGFCQMHELMEQTYRVDWDUBOANOWVKPUWTJLLRFSZSGOIIDZKNTVPVCIJBVJRDOMZUPOQEEPAYLKBDDIEVYACAIRGAQTQFGUOAKBAEYTFVCDG");

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
    msg.setTimeStamp(0.0750770276021);
    msg.setSource(12637U);
    msg.setSourceEntity(75U);
    msg.setDestination(32816U);
    msg.setDestinationEntity(146U);
    msg.stime = 1264559547U;
    msg.latitude = 0.487140837091;
    msg.longitude = 0.40988237838;
    msg.altitude = 63470U;
    msg.depth = 12462U;
    msg.heading = 54896U;
    msg.speed = -31163;
    msg.fuel = -90;
    msg.exec_state = 95;
    msg.plan_checksum = 14372U;

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
    msg.setTimeStamp(0.0501101702831);
    msg.setSource(25600U);
    msg.setSourceEntity(7U);
    msg.setDestination(53936U);
    msg.setDestinationEntity(31U);
    msg.stime = 3223037730U;
    msg.latitude = 0.428780779912;
    msg.longitude = 0.104612297226;
    msg.altitude = 46490U;
    msg.depth = 34164U;
    msg.heading = 39730U;
    msg.speed = -25273;
    msg.fuel = -126;
    msg.exec_state = 60;
    msg.plan_checksum = 14822U;

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
    msg.setTimeStamp(0.209623368888);
    msg.setSource(6781U);
    msg.setSourceEntity(230U);
    msg.setDestination(38879U);
    msg.setDestinationEntity(106U);
    msg.stime = 3679342238U;
    msg.latitude = 0.362174723562;
    msg.longitude = 0.934403521491;
    msg.altitude = 56798U;
    msg.depth = 14070U;
    msg.heading = 13391U;
    msg.speed = -29446;
    msg.fuel = 76;
    msg.exec_state = -48;
    msg.plan_checksum = 29659U;

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
    msg.setTimeStamp(0.612149173735);
    msg.setSource(52144U);
    msg.setSourceEntity(58U);
    msg.setDestination(17483U);
    msg.setDestinationEntity(51U);
    msg.req_id = 43392U;
    msg.comm_mean = 73U;
    msg.destination.assign("PQFXGHSFWKIPZBKMCNVRFFJLULXUMAEUOPOKMHNYTHMKSELNTEZDCVIRVLCGQKBIZDITGRWKEMQWYSEXRQOUKBOAHYUAFGOJJZYWUJTPTHSXGVQTYWAJJAKNXCQHXJWUHABRELCPLIFQNRTSKMJXA");
    msg.deadline = 0.493877746309;
    msg.data_mode = 5U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.892926313212;
    tmp_msg_0.lon = 0.929818764869;
    tmp_msg_0.speed = 0.935161979372;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.duration = 45898U;
    tmp_msg_0.sys_a = 26410U;
    tmp_msg_0.sys_b = 19818U;
    tmp_msg_0.move_threshold = 0.872917684348;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HAAEUFVXWRNYLCKZKDXOUVPRJPOEUPDASIDLTVTSQBMHDYAMFISMODYDFTLILEKPBOXETZHCAQAA");
    const char tmp_msg_1[] = {-54, 78, -19, 70, 8, 8, -84, 66, 87, -113, 38, -125, -77, 92, 47, -61, 108, 63, -16, 71, 16, 30, 51, -96, -120, 111, -39, -40, 33, 85, 52, -91, -50, 31, -122, 67, 93, 92, -57, -18, -24, -51, 39, 88, 107, -115, -5, -41, 23, -7, 62, -122, 65, 47, -20, -74, -11, 53, 30, -56, -76, 11, 17, -35, -127, -87, 70, -116, -29, 25, 41, -118, 123, -26, 90, 106, -104, -98, -113, -60, -27, -87, -15, 61, -111, -6, 2, 126, -74, -65, 126, 0, 63, -72, 82, -121, -123, -35, 67, 29, 50, 8, 58, -58, -66, 23, -126, 125, 76, -40, 72, -1, 78, -107, -38, -68, -41, -55, -120, 80, -17, -48, 77, 105, 0, 111, 93, 3, -54, -66, -71, -76, -19, 19, 66, -7, -70, -47, 49, -13, 6, -76, -111, -73, 22, -32, 105, -47, -29, -14, -109, -105, 12, -38, 47, 92, -104, 66, 124, 86, 41, -87, -33, 23, -4, -124, -99, -29, 2, 114, 124, 41, -100};
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
    msg.setTimeStamp(0.937526548099);
    msg.setSource(7395U);
    msg.setSourceEntity(63U);
    msg.setDestination(3409U);
    msg.setDestinationEntity(243U);
    msg.req_id = 14109U;
    msg.comm_mean = 235U;
    msg.destination.assign("LVPGPVTNSBOLJEJBSDXHNWWSKXYUARQUGVTJFPKXAQVQSSZJGTFHVVGSRZQJYBPDPHYMUMBXJAKUMBYFFNTJSWKDXQOELPLTDUIUOSCFHGLRYMTLIAYHMSGDNFICTGROKDCCWEPIRXYXZOPGAYOWPAEERRZLRDOLEIHZFJEKHKXPDWONEHGNCSUBBQZVOTKZJQDC");
    msg.deadline = 0.817748722535;
    msg.data_mode = 108U;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 25242U;
    tmp_msg_0.destination.assign("GPUBFHRRLBAMHFIVRPULVGJWDEBQMHPZKBLRWOGACEBALYYSURJMMNISAWWTGZINJTVHLIKQPOXWFZDVDXTHZSDFMYWVYNOOIEDDADVWYEEKOJKCEWZFOHUUNMSHQUNQCGAYOKLZQJXPNDKXRQXDIFTSOTPEWVBVKYTBCGQRBGCCCUGKJTKPOXJZSTQHXPISGIZAXUENPMILQRMSVYNEENRDYBBTHXJAQPTZMSUVMGYCFLJFNZJUAAC");
    tmp_msg_0.timeout = 0.597045626737;
    tmp_msg_0.sms_text.assign("KVSZSUAQCYKZVBQIMLVIWKMVENDOFRFDDWBZGINIZBFSWMZTLNNQOSAYQSERMOEOMDZDTBWTQHMMSFPTTHXWOLRBVJJQGXARHRTCKXNINJMIHHUPEBSEQLDRURZSGBHXGATSCNECUIEPBAHGNEPQOBMKYTGYFCUXPMYHKADGP");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VVUBURORLMZQTVILRCKGAUMYLOJHHJFLUGSYMKQOYWJIBDBYBWPSNNQRENHPDXYANDICFMLWPCRDHXPPYPZHNENLIUHMRECLPMELEXDVTIZQHOKYBAXSCJSTGGNHMZSIFPXYDATEVXGISECZCFMCZLNETAGBOTSZAJXKHUQAAZBSKKBZLJQWGJYFFWRWTIOBKIWTOWPTFDQ");
    const char tmp_msg_1[] = {50, 31, 50, 12, 84, -95, 33, 41, -69, 80, 100, 55, 82, -99, -1, 51, 85, 70, 13, 86, 52, 70, -35, -101, 106, -41, 40, -1, 2, -70, 105, -101, -12, -1, 119, -88, -29, 91, 25, -64, 30, 18, 17, 60, -19, 126, 73, -120, -7, 61, -64, 24, 122, 64, 121, -60, 95, 82, 54, -14, -86, 35, -2, 8, -79, 78, -92, 126, 115, -13, 10, -64, -30, -4, 4, 123, -123, 89, 65, 79, 107, 38, 40, 20, 53, -122, -103, -94, -109, 16, 77, 105, -97, -61, -10, 120, -23, -87, 57, -94, 91, 115, -123, -19, -11, 50, -9, 42, -35, 11, -17, 21, -87, -116, -68, -62, 79, -7, -54, 72, -25, -15, 92, 81, 125, 82, 98, 106, 83, -98, -113, 6, -72, -119, 73, -34, 26, -48, 113, 52, 11, -87, -114, -66, -28, 55, -93, -35};
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
    msg.setTimeStamp(0.0835817376844);
    msg.setSource(7304U);
    msg.setSourceEntity(22U);
    msg.setDestination(49021U);
    msg.setDestinationEntity(190U);
    msg.req_id = 39505U;
    msg.comm_mean = 183U;
    msg.destination.assign("GFKPSVJBEWSVLZNPACYMMDWMFQINUYYHXKVMBMCRYWTYQXALTBPVLJYVKHLLSFRMQIMGSASKFDICWDDYHJISJUTEPKXEXHNMPOSSHQJBPUXOBEXPNPZTOIORAMGWANCHOZTVDXKJUCGPJXOTUZYNRQFWYTKOQNGNGDNFPFITCQJOAIBYZGUAIMIKIRCZUVLBQXXWRHDCBDKTZDBLQGLHU");
    msg.deadline = 0.039202511346;
    msg.data_mode = 178U;
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("SIQOYOQQXUKABVDRVKPBZSE");
    tmp_msg_0.timeout = 10014U;
    tmp_msg_0.contents.assign("DYFATHLTIVSKGUWNJFPVOAOSIOGPAHYMOWSVSELLDNJJQFFLTZSQRGTRD");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UXDHPEMDNDVIYBNEYQINZJYSWMJLZVIHDMLLQVNDACNQBQBLCJOJWSTZCQXWHKSSSGNGOCIMMHTFXNFZXAJXUE");
    const char tmp_msg_1[] = {-9, -42, -101, -86, -64, 85, -32, -93, 75, 67, 33, -125, -50, 62, -92, 77, 41, -64, 76, -39, -98, -101, -52, 57, 66, 72, -5, 12, -73, 118, -58, -8, 12, -18, -51, 53, -9, -64, -36, -128, 60, -78, -67, -55, -6, -34, -79, 107, -112, -79, -71, 11, 71, -112, 13, -61, 57, -28, -118, -68, 49, 21, -121, 54, -85, 65, -116, -17, 24, 70, 40, 26, 38, -82, -122, 19, 76, -78, -49, 97, 51, -31, -68, 30, 29, 37, -30, 12, -2, 38, -118, 1, -73, 112, -126, 104, 30, 112, 2, -32, 17, -105, 96, 54, 46, 84, 64, 90, -90, 59, 68, 13, -108, -122, 72, 44, -78, 23, 28, 89, -120, -125, 110, -3, -107, 0, 44, 121, 2, 108, -3, 4, -64, -60, -65};
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
    msg.setTimeStamp(0.742772006257);
    msg.setSource(50381U);
    msg.setSourceEntity(154U);
    msg.setDestination(59616U);
    msg.setDestinationEntity(221U);
    msg.req_id = 36875U;
    msg.status = 54U;
    msg.info.assign("BGTJIZZJKXWFDLQZPBSWCLBWHJTZMEQLRKAYCFQYZVRPILVFHXRVECGLNJWGTYBZKIOWDXWUAWLLQHPKSGORRNEVSAGMTPPXAMIDKGMOGOFHOYBQNZNXHEZXBHXDI");

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
    msg.setTimeStamp(0.903126461781);
    msg.setSource(55638U);
    msg.setSourceEntity(158U);
    msg.setDestination(436U);
    msg.setDestinationEntity(208U);
    msg.req_id = 34207U;
    msg.status = 177U;
    msg.info.assign("EDFBKOFOXJRKWVGELHXKY");

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
    msg.setTimeStamp(0.695240320886);
    msg.setSource(2093U);
    msg.setSourceEntity(153U);
    msg.setDestination(44980U);
    msg.setDestinationEntity(58U);
    msg.req_id = 38249U;
    msg.status = 160U;
    msg.info.assign("WJQIVVVMCTPVPQQSHFFHRJROAPGVIITTKJENBRQANISLZE");

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
    msg.setTimeStamp(0.742523588785);
    msg.setSource(49679U);
    msg.setSourceEntity(114U);
    msg.setDestination(28932U);
    msg.setDestinationEntity(3U);
    msg.req_id = 369U;
    msg.destination.assign("UGKWYADALKRFOUNVKEPPCLHBKWYFKRCQYNRHTZQVOWPATHSMMSRJMCVEGAUYUHSJIOPCJINLBQZRVRPZHBMLUGAJVPUGIVOWMCYKDFHYWQMZOTJWBJGXTMLJNOQSNIZVUXXPPBDEODGVEGHWSQKIFAIJTNSGQQMOJHCCSULDCCXRLRAXYKSFAMFVDLBEXXXSCZBZGDKWYRJXBWRKNIFZBEONPBFEXTQVDMHNWTZEODQZYEGTHFNULUPLDSE");
    msg.timeout = 0.531031134;
    msg.sms_text.assign("BXFUPVDQQHIKFWWMHESQXZNCPWIOLKJOOPXTDKIYBSAMHOCDQTIEKSGGNNPRJTQHAQNIRILXUKNLDUPQGJGABNJZXJUKIOWZDGYFXNRHGYOBRADCLUPNBCFBRKZJRVIEMBCUZKHDGFIFMZFPVWGYTZTOJFBAPAVKVNXMLUZDRZWRSCBAJSXUPZJXEXOCCMYTUOEVMSPGTSLEISQJDWUQFVKHLSAMOWHVECSMNYLLVLRQHHTYRT");

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
    msg.setTimeStamp(0.62192086624);
    msg.setSource(3532U);
    msg.setSourceEntity(73U);
    msg.setDestination(23307U);
    msg.setDestinationEntity(136U);
    msg.req_id = 38662U;
    msg.destination.assign("YEOTKXOIUSLQQDIBRTACSULDYBBPFNJMXXMHJEAUZJDEDWHFZJLFBYNYWCVLDJWXGJREVPVRUUVMDTMHNWNFBSVSNAWGTENFXMPBARKFRJQIBIYHKVZYAUHGPLEVFPSOFWKKAOHEKMMOOYPCYSKZACUIWIGGDJDPQZQXSDTZBDTXLNKARUJHSELLFOGOGRXYWZZFYQXKVUORLRCMECCIPKCUJQRTGNWXQLPIOPGGTHMAH");
    msg.timeout = 0.394418612211;
    msg.sms_text.assign("TTDVMACYQJFAUJPVNRGKJKKGZRVUETIIIDBLRDSSMXVQRDXFCHKXOFKWHYHEHHNPDNAKCSVCSCIYSUTEXMQMBUYVQHDNKQZJJXDGOJSMBYGGCRBQJQPHPEIEYNVDYMANMPRZU");

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
    msg.setTimeStamp(0.0720529234307);
    msg.setSource(10292U);
    msg.setSourceEntity(181U);
    msg.setDestination(16092U);
    msg.setDestinationEntity(235U);
    msg.req_id = 60968U;
    msg.destination.assign("QCNFSJPMLWMQMSZXEOGIVDSRAVGNAKKYDJLDAACQBOZZCLGOIWSWDHESJQXWOKTPNXMUVSPEHBFDRXXHEKKZHXLKEQOUNRYVTBJALJPFXYAJVYOTNOXLPPTJZDMGZZTAGEFTJKEYUDCFWVXQUSMRRUCYJTHEQETAIVGYNYF");
    msg.timeout = 0.133091268725;
    msg.sms_text.assign("CHYJGHLBEBALSHMASQCUSZJHBRYDRFRVCTTQCGQDJYMTQBIS");

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
    msg.setTimeStamp(0.957105744007);
    msg.setSource(29029U);
    msg.setSourceEntity(124U);
    msg.setDestination(32481U);
    msg.setDestinationEntity(10U);
    msg.req_id = 24451U;
    msg.status = 48U;
    msg.info.assign("JRGWUJNMXDLNRBMMOHJRXPCEOIUSJZPVFOAMBJXLGODDFJGCFSERCGSEKFPKVTSZIBQIPOAHXYENXWSARULIWKDDKIBYRMCKEHOTQDUCUQTLNUGZECCXVZPCUITEFQSHWNQKTYWENLEEYWUYIHHBQDDVHSBWYBIO");

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
    msg.setTimeStamp(0.00194354200883);
    msg.setSource(13719U);
    msg.setSourceEntity(52U);
    msg.setDestination(3429U);
    msg.setDestinationEntity(150U);
    msg.req_id = 32991U;
    msg.status = 47U;
    msg.info.assign("PMFTWPGVKGKPZGOEFMDAHAWYHASYKQLHHRCJNIGHUTNMQTITRPHVGBTRPRICKZSRIBZWVETYWWGKKSIUAQOBXPKJUNXDTABONDNOIPCJLWWRKDTZVFGELHVQPFCEYJLBCUJXVNRGLMLHMEAWQXOFUVUBDBFYQFIQJOBMZOVYJBRUNLSQPJEUZSNLUSXQXVYTECAKRIXNOESDCYMCHA");

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
    msg.setTimeStamp(0.451155252338);
    msg.setSource(57269U);
    msg.setSourceEntity(178U);
    msg.setDestination(47534U);
    msg.setDestinationEntity(76U);
    msg.req_id = 16801U;
    msg.status = 35U;
    msg.info.assign("QOAFYAILCXWYXICLEESDLKSCCTVAWBPUVUVGPDOULZJHVLPBAZRPSAUDOSXHRGVKIALUNGBKMMAKJ");

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
    msg.setTimeStamp(0.477136098025);
    msg.setSource(5314U);
    msg.setSourceEntity(236U);
    msg.setDestination(4437U);
    msg.setDestinationEntity(238U);
    msg.state = 80U;

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
    msg.setTimeStamp(0.493382514335);
    msg.setSource(30974U);
    msg.setSourceEntity(101U);
    msg.setDestination(56537U);
    msg.setDestinationEntity(203U);
    msg.state = 60U;

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
    msg.setTimeStamp(0.0986305391467);
    msg.setSource(15572U);
    msg.setSourceEntity(0U);
    msg.setDestination(16562U);
    msg.setDestinationEntity(171U);
    msg.state = 143U;

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
    msg.setTimeStamp(0.694177076348);
    msg.setSource(31212U);
    msg.setSourceEntity(134U);
    msg.setDestination(58551U);
    msg.setDestinationEntity(70U);
    msg.state = 149U;

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
    msg.setTimeStamp(0.446077766191);
    msg.setSource(19404U);
    msg.setSourceEntity(118U);
    msg.setDestination(63810U);
    msg.setDestinationEntity(146U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.424454122571);
    msg.setSource(16720U);
    msg.setSourceEntity(63U);
    msg.setDestination(60638U);
    msg.setDestinationEntity(3U);
    msg.state = 178U;

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
    msg.setTimeStamp(0.26888392992);
    msg.setSource(25399U);
    msg.setSourceEntity(101U);
    msg.setDestination(36628U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.215402727478);
    msg.setSource(50851U);
    msg.setSourceEntity(31U);
    msg.setDestination(17845U);
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
    msg.setTimeStamp(0.452949682701);
    msg.setSource(33293U);
    msg.setSourceEntity(191U);
    msg.setDestination(31376U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.17406030875);
    msg.setSource(17710U);
    msg.setSourceEntity(244U);
    msg.setDestination(64599U);
    msg.setDestinationEntity(137U);
    msg.plan_id.assign("HRFUBIHTZYZGEYNGRVBBTYPJXUIMTQIYFQEACMNBSRCJLVTMGOSWPPSACPFLENZMVTWYWELQOQRCWZNKSDGMVVCYMFQXEKZBSJRPFPLJFYDSZNAHVXRKUOTJEHFXHMQCRNUSJVXPUPIWEBKIQSDGVQWHGBBXOFAYIUVMTDIUDLLKDIAYHOTDJLLHKXUWFEOQB");
    msg.description.assign("FZSKFNMIWEHAPRNNQCIUODJYCVVFOWCGTDUDBJVYPUAKDXAGMZPLHLSWXUXEJJXXLGNLLFKXVIASGOZVYMYPULLVQQCXYLRQCVRDBCFOQPIBFIIHLHTVSRSOBSRDWUHJNEXSCPBUIOBQETZBDZNPGFBYACJKFEIEUQOQKNPRGMSOAHAVMNGW");
    msg.vnamespace.assign("XVLEMJPZAWWPJHJROGBSVPWPPJNLITQQUOZLOTRDDTOBMQCQMFMTVUAQSPRWBEMZCCACIDAHCFQIUXAUTGKRNQYEUZUILKBVXDDCDJXCEDPLZGFUGOSOKBIYXRPEXNRUVXZZEVZYANEMGFFEGNAATWDFXSWNSLLYNPJFWKINWDSRHQHIRIWCISMBYVHEYBBWGMKHTVYCSOGVFECJGKBOGNSUZXXZKMPLBRYTJHYQRDMYUTHLALF");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ITREHCOUPYYYMGEIWKRLDSPXJSLNCYYWRHQUKFCYEWJNPYQRZFTMLRWDAJVKWYFBMFOUCGBUTPQORVUHFSSTKRNBAAGOSXWZPHOZGMMBQCB");
    tmp_msg_0.value.assign("TNONOHLVAPEVQNKGAUHZRKOPUZRGBTKMYFPQVVTJLOGEIDKMFYPBGTBSGPJZFBCJUDQVOXWNXGVZCSYQYQSTHGSFVRALDCAIQYZITZUROTWWEEIZSHAGLGDDJNDKOUSFILVWFPJZIIIXQNKDDPIMTMAAVOMSNM");
    tmp_msg_0.type = 99U;
    tmp_msg_0.access = 91U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PATYTACGVJJKNCVBZYLIVLBMDZSEBUDXYWGGFVFGSRTJZRBPIVTZEXHTRCAPMYIDHICSGFLXVNJBYUJRLWIXQJQGCCBYEMPRMOBKFUDNZSXKAGONSQDXWUIILDCMFRMCDSDKEFYNHSLZAWHPWFAPCLHQ");

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
    msg.setTimeStamp(0.703655490501);
    msg.setSource(52672U);
    msg.setSourceEntity(153U);
    msg.setDestination(45034U);
    msg.setDestinationEntity(170U);
    msg.plan_id.assign("FEXHNLEHTLZYOWQIFVQDZUHWCSHCBJZSEJFJSNABPDBKHMYVRTAKUYNHLVEGKIOPGOVKESEKOJ");
    msg.description.assign("BKXCPSTQSKYQOJIFZZYLTWBRHQSQAMJFKKZGTCPMPMDWJCJAJUTDSLIKQNOYVZGWKHGTWUDE");
    msg.vnamespace.assign("MSQOXMJYIGAKLOBGDEJNNYRKWIHRUYCOFUEUEEUWPPIHZBYHHLUUHQIOOLHCDQKEWVVETQKVOMHHDQUOFWAVMTNFCWSAIGLFJLZHGWRMRPKPPOFFSYAKRCBENTUIQBKKTXARNIRMZSXEQTUDPBDLJYKNCNBYGTSTFSYSXZVAMWHTYZNJFEBAEXGXIDKQWMZCTGOJXANZFVPXPPLDGDPZWSMJDLJYUOGCAAWBCBCXBCMDZGZVXJFQTJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YLXXUMHRVSZWRKVLOAPDFMIIWEIJXRVEGCCIDUQQWMDXVZSLAUACPDYQYDGJSGQNJJKQCCFMAFLILYHEAPYMTNRGYZWSGQVHYZHJWZFXOEUINSBUKDBPXCAWYEFSLIFMKRWLCGQNNJSZOKPTQPJNOSBFLTEHNDXSYJYUTBOOBLBBKILKVTEXFAOPCAHGNHZAWRRQNVRETUMCDNTBVMKWEKUFJDPQTXORZXVWOGCHZGMJDITZSTGAUPFOEB");
    tmp_msg_0.value.assign("WTJTPPRDCLWBHTQUQVBHTHCEORFOJQCOHZTUPYGFUAAKUTUIHCKXGBLLCJWUGROJMSFJZLEAXJGAGBHSDKP");
    tmp_msg_0.type = 185U;
    tmp_msg_0.access = 72U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NMMRSGBSOKCQOHVQUVETDJCCLNTDYEXWAXMXJKTBGWQAYLGKZPBSARVZUULIVPQPEGHGLPLGUMCJDJEDNHWQUHUFEYAROJBTJQNMCDYKBTLTG");
    IMC::HistoricSonarData tmp_msg_1;
    tmp_msg_1.altitude = 0.782826026072;
    tmp_msg_1.width = 0.726300088361;
    tmp_msg_1.length = 0.313480168288;
    tmp_msg_1.bearing = 0.447497741279;
    tmp_msg_1.pxl = -26665;
    tmp_msg_1.encoding = 234U;
    const char tmp_tmp_msg_1_0[] = {3, -62, -49, -60, 16, -16, -114, -13, 27, -12, -79, 106, -27, 20, 9, -39, -113, -122, -34, -118, -125, -107, -67, 93, 108, -32, -51, -128, -61, -111, -72, 0, -41, -48, -30, 113, 34, -6, -25, 91, 24, 51, -119, 64, 105, 74, -25, -87, 67, -73, -52, -44, 55, 77, -26, -98, 14, -118, -95, 126, -51, -11, 43, -28, -31, -56, 86, 78, 101, -78, 99, 3, 125, -52, -77, 63, 78, 124, -27, 53, 110, 87, -45, -73, 124, -74, -117, 8, -49, 116, 120, -85, -23, 89, 121, 21, -86, 85, -100, 124, 119, -83, -89, 31, -108, -119, 67, -110, 112, -109, -68, 53, -30, 76, 89, 119, -49, -80, -123, -36, -48, -109, 89, 28, -105, -122, -69, 8, 32, 120, -9, 43, 32, -62, 82, -33, 95, -2, 35, -48, 5, -54, -85, 23, -97, 108, -45, -85, -19, 67, -56, -126, -55, 103, -82, 54, 126, -18, 78, -30, -70, -7, -62, 19, 77, -64, 13, 42, 63, 66, 115, 35, -49, 86, 45, -96, -25, -114, 20};
    tmp_msg_1.sonar_data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.189156349448);
    msg.setSource(23877U);
    msg.setSourceEntity(190U);
    msg.setDestination(63724U);
    msg.setDestinationEntity(108U);
    msg.plan_id.assign("SEFVFUSXSEPOIOENFICGLMWDDTFCCQVVMFSSCQPCXQWOVCWGGJMCFIKLEUOTLZXJSWROZBPXZNJMCATDXULIYLTRHPJAUIRLKQKGVDWMYAZFJOHXXJMYHASFTKNUBJGSKRKEYHGHVJZPBHAKPQNTCALNBAMDUPUQTWPLZRDBDXWOQNMYRKVGVWXDFKJIQGACLWGEDSIAOWNZURENHQXNHOIYYGOQTYBUTHEPA");
    msg.description.assign("CLFWWQTYEDNKDLTFNYGBACBMKLMVKMRVTCESBBLLXYBRNOGZVUPZJNCPRIDOZRSTYLHMPYZXLSCUXYDYFKEDMEAQZGAQXWBIXUKGGEQKEZBSTUSFIMJEQCGSWDPOHNKPKGKYQXHDOUBEWFAHKVXFGNOHWJFORLINDJNPINCHWZLVDEGTQMJPUIDROOESYCMIUAV");
    msg.vnamespace.assign("ESMUSOCHUQQTBYLAEPRWWCDQMISLJDAJFEQYFWNKMMRNRZEFUHBCVTEAPAOJBTALKGBMRQCPAQAVMBITXFRVYGGLYODOYWFLHLDPZWCSU");
    msg.start_man_id.assign("JZQHXEENYBSDKQCSEVUIWMWCVCGFWPZRDMDPQGRTLHQCQSYDCJYBNGFGTASMIKEHGACCVAEQYBEROGDHGWBQMFTQOYGLGWUHUPQPEUHIWVAJPCNPMORRORYGUUKJLDYONPESMSKILAVESFXXNYABZHOZZZUWOKAVFBUZLKJLIXVXTWMYKJAXP");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("OONPJIBNXMTCAPWVCOCH");
    tmp_msg_0.dest_man.assign("VFCQHMQMCEVMTRVLASCDPKUCQVOFKFYOECFHPMEFBKVPTJWMPHZRUHHGCYEANRKYLLQKJCYFKMPHXOXRLDNMBCXSPDBUWZTQMYGRLIJDAPITOKXISNDYGVTJNBTSJXHGEYHYQZIUYUZJQNZNKUZJTHORUBOGINSPRGBDWTGSLSFFGNXFSQWGXQNCHMAFZLJKWUAPRVAEULWZTIARWILVBCVUQY");
    tmp_msg_0.conditions.assign("PITOHZZTYHRNYVPBBGJHZEWFFULJWAGXKQTQKQNDXCZDADJQZSDUSXIBNOVQWZLIMUXLBDYSTJGFHSJQLCTEXSYOQODMBDOFAKXY");
    IMC::VehicleLinks tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.localname.assign("IAKYZXPDHWUSKRORWKFHMZMJSONJZPVZXMDIMTFDDZPUFVOTURRSJUIWGBBGHHGJBNKEATGBP");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::PulseDetectionControl tmp_msg_1;
    tmp_msg_1.op = 251U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::FuelLevel tmp_msg_2;
    tmp_msg_2.value = 0.0483787808697;
    tmp_msg_2.confidence = 0.546246468128;
    tmp_msg_2.opmodes.assign("THIVYHYOSZGWQNDZEXMREYMLDIPSWPQZDTQYUVMGPRFJWKBNUTMWQFMAGCLXTAUIHVLQUZJSVDGOIKGLOHBWYHIGFSZ");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.211804925724);
    msg.setSource(43707U);
    msg.setSourceEntity(115U);
    msg.setDestination(35433U);
    msg.setDestinationEntity(185U);
    msg.maneuver_id.assign("IODLOWQNYGTUVCNELAVFRZOBGOZIXXCAQVUDMPIXDJBNMWECIOYKVEMNTSIUGPLAWAZLJBKMKBJKZWRIFAVEDEKNNJCYTDVGXGSOKSC");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 16098U;
    tmp_msg_0.lat = 0.622130898227;
    tmp_msg_0.lon = 0.166830271391;
    tmp_msg_0.z = 0.781225105563;
    tmp_msg_0.z_units = 109U;
    tmp_msg_0.speed = 0.515460667621;
    tmp_msg_0.speed_units = 54U;
    tmp_msg_0.custom.assign("ZXTIKEDXALWILYBUFSPAKMGWBUWUPEHPZDRFFPJOFQGCTTYGBWPUMMIGQSRQMIMPCWZWFTBZKKHOXXLNHUPUSJLGEOLNIVQXYNCIYMEMTGNNSJAYZXKZSDDGSJFICKNRJBBLFCALEPLFOOJYDRKCDQXVEHISNAOTDTAJUDGEXCDNZJOSRVPWQHVHNVBBOBXCKZJRKAEPRKU");
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
    msg.setTimeStamp(0.106108114589);
    msg.setSource(35025U);
    msg.setSourceEntity(236U);
    msg.setDestination(41548U);
    msg.setDestinationEntity(5U);
    msg.maneuver_id.assign("HQRWDNNUGHSADMSHLECNJKSDBQNULEGSTEWRHXWOHTVGGICZVXERXMUDJTPETVJDAPKYEYFMEZLOBRTNLSJYGCDGCTWPVNYCIKBBUXASZKNXOFGKOOMPLXCBFBOEEJZQKACVULRIMDZRLVWIYZIFACDOOKYISEUXGFLQZJKGQHVDPVWJLMTHTIQNFTIMBFXNAJSPVRMQLQYPCYWAWXGSBJBADRHAHQZUYRJFVKWPA");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 59322U;
    tmp_msg_0.lat = 0.331880536778;
    tmp_msg_0.lon = 0.439276191937;
    tmp_msg_0.z = 0.346867234777;
    tmp_msg_0.z_units = 21U;
    tmp_msg_0.speed = 0.907013797552;
    tmp_msg_0.speed_units = 109U;
    tmp_msg_0.bearing = 0.465998672558;
    tmp_msg_0.cross_angle = 0.800891662446;
    tmp_msg_0.width = 0.924068092056;
    tmp_msg_0.length = 0.0154067108861;
    tmp_msg_0.hstep = 0.839861909546;
    tmp_msg_0.coff = 73U;
    tmp_msg_0.alternation = 27U;
    tmp_msg_0.flags = 38U;
    tmp_msg_0.custom.assign("LBNQGZRXUBAWYVKLTESFZAFECNPWCALZOLBJARHZTYTOGSCXPTDZERFTVMVKEUILLIYRXXUGYATPHWADKKGQZOPUDSLHBTNFIRQJBSDYEIYXPLMPSJIVCAHXBCIWCFWNHXWJKHFNSPYJQABWNRSGYEROZVE");
    msg.data.set(tmp_msg_0);
    IMC::SoiCommand tmp_msg_1;
    tmp_msg_1.type = 233U;
    tmp_msg_1.command = 124U;
    tmp_msg_1.settings.assign("YJBKDRYELKSXJGQAKIZZJCWBGADANWGTYMVJAOWBRYSOTQQCMUAKRMMZDVXNLCEHDABSINQELFNTALJNFEBXVYUCEDOKKIMFIVDFUZHCNGFPJYFHPILURTCSWXHGNETOOYCRRTDIRUMCSLANUPLCDTHNGVOSFUKW");
    IMC::SoiPlan tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_id = 44642U;
    tmp_msg_1.plan.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("JTUKKZHCSKMFHYNILFVCGNNEGYGWEFBEEATUYURPDEKVMEARDTWNHENMEJGURJNFBSJPNEOXAWRBHTXGCSYSQBVTQZJVPPPSODFDXMCLIWVJMORSQHUQQTZIAGVGDOAPQVUXMDUOQSHHSUHLQLGMYZWIKJYCKLGMWMBBAOWZNICCYBAIPJQK");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LblConfig tmp_msg_2;
    tmp_msg_2.op = 181U;
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
    msg.setTimeStamp(0.0869391088191);
    msg.setSource(48377U);
    msg.setSourceEntity(52U);
    msg.setDestination(60471U);
    msg.setDestinationEntity(92U);
    msg.maneuver_id.assign("PYGLWSXEDYHSQGJDJEKUNUAC");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("FTDXLGHAUCBFZWYKDZSHPGGEBTNSQMJJRPNXAEGVQDKCIKWOFOEQXFEIUUTMLXVNHGQXMLHQVUSINJGSZYHKNATYMFREQMYOFPCSWPLJLVVBAMIRLADMLDDWHUSIIXCJYNRMWSKORZWHJZBVSQFLBMKAKCQJRTIUNKCCCVUPRBZODUHDBYZFLONEURNHMJXADHPGQIFIEWJGKBQPPAJKZYTAOYVLIPTOTT");
    msg.data.set(tmp_msg_0);
    IMC::ReplayControl tmp_msg_1;
    tmp_msg_1.op = 79U;
    tmp_msg_1.file.assign("WREMWOTKBOZEPQPOBLAHUATNHNWUHUGFGHCCISCPTPPISFRAKOQLCEROLYNNRJUCVUYJEJZAJKRYTCFMAQDSBMCMOXMVIDUGJSYZOXGLAAMIJSCPVOVLGLIBFBZKXBLRRTWFZXUEWPNKNEHWHHUNYIDNAFZSZLZQYIJGUASRSBXVXFNQWVRGTDEHEPKYBBPVVXMTGXHYLXTHJYZK");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::RemoteActions tmp_msg_2;
    tmp_msg_2.actions.assign("PFQOWZRIHNACDNBEIRMLVYZJWBXTMZTQOLCYLDBFOHCANGRCMADXWPJPTASUFEMYCKGHNSQGKILTJXUGIQQHNVQVMLSJY");
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
    msg.setTimeStamp(0.881507372521);
    msg.setSource(32487U);
    msg.setSourceEntity(47U);
    msg.setDestination(26141U);
    msg.setDestinationEntity(93U);
    msg.source_man.assign("JEBRGKXMCWCVDEDQMRLFIVNVTWBPVFYZITQSBPXPBILGTURIYYEJLPHMOHNQAVVTMZTHPUGKWOQGTSUNIQUILCGQHDOZMANIRAWDXGHYJCFBWLAYKOSUGBFQJTPSAFTZWGIZHGVIJEEFBNJOEFEADLUSS");
    msg.dest_man.assign("PJJHYSSJEYLKAAXZDDPMRHLAEFTWCZQZSVUFUYCTDIOCMGAKLUYXWFRLBURZMFTQRZJUESEOJEIISZKICJHDJMWAHNCKTRWPJOEQIUHRVLOWGBQGTNGWKBBUDMMCNRKIVZMLSOD");
    msg.conditions.assign("EBAAFMZPBFKEXKKGUJLVHWGSSWRHMMMNTRRAEWCWAWGNJIEVZLVXHUJUWFVGULQIGXHSQCJYIPNMKNQHJUKHERKDXXCOTUQJDZHRLQFECIVBIOKUOEADDYQR");
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 27924U;
    tmp_msg_0.status = 83U;
    tmp_msg_0.text.assign("AQVCUVVSFQYGGNFJLSVYPSVZMJJTKRHJMHMWVEYUVDGIFGQDDZOKWUGADVJXLXCBSRRKEPFFTL");
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
    msg.setTimeStamp(0.992545282307);
    msg.setSource(36890U);
    msg.setSourceEntity(130U);
    msg.setDestination(48132U);
    msg.setDestinationEntity(254U);
    msg.source_man.assign("JCJHFXFMWMZEZFOBQMKHGPSNEOYHQGIHOYNWWZUXWJQRJIQMKLBLITDKBKKTVCPOXHSGQSCJG");
    msg.dest_man.assign("QXHWCFWYDCNELNMSPJIYCQZOMGWVBVHKYFWNHNCQXSPNJEERFYBQDXJHOVDMJEKFYOWWAGCJLDXILDQRDWZIURMPFWFBKCFSPZQNXAOOJPPGUIXRZGEJUZYSHVMXKBGDASCGVZUF");
    msg.conditions.assign("SDPFYOPEWPUHEISKDFGNCDFWSOBVQEJEAAXAGXBYECVOUKKZGCZLCALCEJXRFZJRQXWBNLLSSGZFHJRGQFGKCKXAVZTV");
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.916715869401;
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
    msg.setTimeStamp(0.587599464367);
    msg.setSource(56577U);
    msg.setSourceEntity(11U);
    msg.setDestination(43170U);
    msg.setDestinationEntity(171U);
    msg.source_man.assign("VXWBVREJOOBTWBYYWDPRHFINRPGCIHYCTYDFULKEHEKPHHJVTRVWJNOMKQLYCFGGFXAMUTRGQFAOEBZEOXGENTOZVMXAUVQMKFZOKINKIRDLAGMWXIALXSLQRBMLUUAUHMROATFNPJZSYWXGPHBRQAEYLJKI");
    msg.dest_man.assign("OXMXGVOOHIPTIONDDUICQABGZHVAWTOSIIFCXYHBDVXBZWXMWQILXOUQMWPKKUGSOMYPHFINNPTCABZFNMEZHWDDKTOLYDGFEAMQEHPZJRZNJKTCBACYEEKMRLXMFFTNRCGLZGDJDLBSZVPURYSPTLPFTFPJRUEGYNQHCVVLYKSSCKQCUKANOIUHGCAAAUNJRVVSTJAENTQXLRKWLXRRBWKWUSMBLVSQWIQRUMWHQPJVBJDIYJXSBJ");
    msg.conditions.assign("OYMKGVBENIXNKBUZPRKAJ");

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
    msg.setTimeStamp(0.478906162698);
    msg.setSource(3904U);
    msg.setSourceEntity(130U);
    msg.setDestination(23764U);
    msg.setDestinationEntity(13U);
    msg.command = 226U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BWGLPELXTQNSBKLLKULUIURRMXRBZMOFMHPOXAKTREQHMNY");
    tmp_msg_0.description.assign("AQWFRWTPXDUVUUQNZRBSVGHEZWPJETSACCHSQLIKEVSYYZAYMVPYCCPDVAPDEVNGCVANZHENODGPNIZCIEFDOUGRKBFOSVBKIZNLXLSRANHYWTCIBAKZJOLDRUIDWMTHONMGIVXGLXGHHHXKTEQMMLWMFLBYQQRYRTRQGDJHQFAWMENWEJUUGLYJISFCLB");
    tmp_msg_0.vnamespace.assign("XZVXUWHNYAXQTUUZCUKWBHIPCXPPSXWYEQACISJBPEFPRJGROQEUPLRJMOLWHVJQNTXDBJECWPGHXV");
    tmp_msg_0.start_man_id.assign("AAHNTYMKSMLRJLRDFXWZKDWLLGEGHYOXKVTBOQYCZXVTTQCDTCYPJGCLWAUMNGPZVSOPHDNQGJEDRNDABENWIZKAHYNBCIKO");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("RTUZHQMJDRSUSNFGYXWVNOLDTPAWBRZNCSWPRQTLSMCDRGOUIHHOEJLMJQBEPKQDVPYHTHZCFWUCOJWUFFNENNXEMWUPATYISNJUYFKWJSOJXIRGRMGHQULIXSLDRKGLCNOQDVGXYZTWGHHKPUWIOQYKOJBAVVMYQQSIJXPCLGBTZVOTAYVSETFVSJDXYGNILWKEDANZHEAZCEFIGKPLMBPA");
    tmp_tmp_msg_0_0.dest_man.assign("TSAXNORBFEHOEBGVJWNKFNSAHZQNCLGDDQBPKYWPVFLKJPLVHLQBBIMTS");
    tmp_tmp_msg_0_0.conditions.assign("MQEGIFMFYZXKCZHUOWULUKNNYNPAMIAMEEPKZJVGOIARSNVAYTWCHQSXWELXVQSHWZXWXOJHTHEFJQLYCWTWSNRKKLDSQRAAKVMZOOSGVDXBLNDDHFHIBKPXEMZTXNQRXPQIOTYSSRTWBKLPXDMLARGCNSEWIDLJBNFLUJDOMGUTVZOIFBYTJPMFYFIQRMCKADFCHPDHQE");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::TrexObservation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeline.assign("ECODAIWGVJISJVLEAXLSYCUGRCFUYQRPIODEUBJTTVJXEKVHHXBWOLFQVDIRKL");
    tmp_tmp_msg_0_1.predicate.assign("FAOJWQUVHCXNDBQPLBIUSZZLEERMLJWBMHJAQSHRWFUCXMHDGCOOZAUNEXZTEVFZSDSWFCNKFEPHVJKDEGORHLJJXBZFKGDZCZIYORQULOPOBORRNNNWMPTQGBVRGNCXLKCEYSKEXPWDQTCATSAJPYKXLSYZTAGGIGLKRMHUFRJDINKARAFDWJIDMI");
    tmp_tmp_msg_0_1.attributes.assign("FRZWTSNQVLLSBXNIBNSIBICVTCUHHGAPZOEIDFXEOWSFKEZBTWNCXZEQFWXKLHKGUSKQHZBRZPWQZMUNNFYDYCHDKOIPDELHUAAEHKZOGAGQABYLVVHULTAAOUMJTDVEVJKUQRGJMCNFRWCXSORADJJFBXLIFZALMXIGTIMVCENZSPWYIDUSQHQVLBTCUTPYVPXPTOVMRTKOYFYAYPXFYJORKGKQQDNOWWSHEL");
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
    msg.setTimeStamp(0.600713462719);
    msg.setSource(49998U);
    msg.setSourceEntity(101U);
    msg.setDestination(49834U);
    msg.setDestinationEntity(189U);
    msg.command = 148U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RJERTVTKPAJGEHXDASXZMNIBDQHICATFBKXWAHWRBWEBOCQYASQPFURWPOLWVGACSSEYUQFSNRGNNGVDLPQSVSXDJALMXKTEKBFNVWEYWKETXMBLHYGOWRUZZRJYGVPTOSXIDHCAXXQHYEONDYOULRITFO");
    tmp_msg_0.description.assign("EUMKMIYRUDYHGSFZHXEWJBNMYVZPJZNBRUZAXVZXDKNJQGXPZFPVHWSRHVKWUJECOWPNKO");
    tmp_msg_0.vnamespace.assign("AUGMNJAPROMEWUJBGMFOFCIKVUBLJWTCYOXHEDKCDDQDCQQQXYNOJDTIBOGEVLGQXBWTEZTJFHMHTYASWHSKOXNDEBSTGYKHWMIFCHXYFSGFWSQFBQNUJZSNGYULTBXOEPXJJZCVEOHPTJHTOSILQWUHSZWEMVCIFPLMCXMIFCYRIXAUKVESUZPVNXLRVDLMZVVPQRLRKMAGLZQVAWYKPOAUWEDPDRKFLKHIGZTBRRNKNZPBZYBGAYCIIA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BIJSRDFVQPISJFSIZPCFQRUAIMFUNUZQHXDZELPHMDRUAFPJWXMYKWQM");
    tmp_tmp_msg_0_0.value.assign("CAVCIYADIAYEHQRUUOKAZIDJYGVBLXDYKJFAVRMNOEGNOWFHJUTZEZWUVUNOYNGTWHKAMYVGESXCVLHESWRIFXORJPAQMGXKSSLJFOLVINCBNZTZUYODWAZMBBTXZZXBFHKCEKWRDFLPQUMVFAEGMLTMVERJGKIQKPMQSNKPSRXYFQRGUZFMSPEAICJMXNDXJNLSWQOUTDBIYQGVCCLCOPDDHPLQRTJQBPLIZXEPPTWONKHSCDH");
    tmp_tmp_msg_0_0.type = 245U;
    tmp_tmp_msg_0_0.access = 221U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TOBYLBMDDARF");
    IMC::EulerAngles tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.564442972774;
    tmp_tmp_msg_0_1.phi = 0.605177705344;
    tmp_tmp_msg_0_1.theta = 0.367879895527;
    tmp_tmp_msg_0_1.psi = 0.151852028173;
    tmp_tmp_msg_0_1.psi_magnetic = 0.283582981455;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SystemGroup tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.groupname.assign("FZQQOROMSKJZDHBNFIESUSKLWXBTWFHESXMDZACVDKUHJFHAAPVPKRLPYYANCZMUCWMDKHAOWYRNLPBFHDWFFZLQGDWNTQMXCNFBGRMWOJNIDTRIN");
    tmp_tmp_msg_0_2.action = 36U;
    tmp_tmp_msg_0_2.grouplist.assign("ATCLZZJTBPYMDCACGV");
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
    msg.setTimeStamp(0.274899787865);
    msg.setSource(40220U);
    msg.setSourceEntity(96U);
    msg.setDestination(32871U);
    msg.setDestinationEntity(94U);
    msg.command = 92U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LYJDOLEYTEBPNGVBXUHOETSJANTXTSRWVLBYAIJZLCHBKSRHPCOKMXYCXFQVSUGKTTJKQAQXFCMPNIWMPJCSJLLYNGJILFUVELXUWNQEIHHAOKPDOMBCPPUORZZFXO");
    tmp_msg_0.description.assign("WWDCEAUKCDLQUYLSRJXCVBKCBWOCEUJMOTISHJNZZGAQRQJGDDZGBUCALOYBYZXNQXIBLYUEFOSGMUNMEXDXFQTOWNGTFKJCJQTEBMNSLAEHAQXBIKYOZNYHGFPTPMYFDIVWWFFOPYLUNBVIEOSXHDIAQFPPXEIAZHLMVVTIYRKMOSGKNKDGSJZZVXVLXZWWGKJLPZAPR");
    tmp_msg_0.vnamespace.assign("XHKAICGZJSPKQUQGMHLIVEUALDQHSZKZNHVOPGMBTBBOEPMRRBKWDXFEFLHJITFACOMWNYFSXSQHWDTHCINYIGCRNUWIJTKERGDRPTYOEJFWOWPNHGCVZCQSTNJRUROKUTPVPGOMUUNYSUVZEEZDRPCTMEWNEVSYJYVAKFABUDMIFXBWZBQVLUSJVYLBAGOBQKODXYSDJRLAMFYTJADEWZDBCSXL");
    tmp_msg_0.start_man_id.assign("ELPXYZGXSPSPZWFADITHPABITMZFBUVKLLTSCIORQSUEHTHTMVJHNZOGZVDSYOTHFLXBMNNJUIDHUPTZWRVGFFCLBLQARICFAGYSZSJCGCMKNWDGYEIRWVSAPHKGCPANOQRYWQICQQKKMCVYQYBWENUBWRDGXEUSDYGGEEOHJDVUMONCFOBJLFXBOUTAXHIZNKVRXJXWJNPMATTZVKMQELRO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("JFACGLYUNSTGWKDFCTIBWZEURNCZWPURZHKUINGVDSBDXBLHNOEKUENQHBAYCVMTYBPAGVLQHOTOJSYSDEPNJYAOFSQFXELSSYJOLMJKPSDXMKJVCMRBNRMCQXWEZDIFLE");
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.control_src = 41218U;
    tmp_tmp_tmp_msg_0_0_0.control_ent = 100U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.0377990868438;
    tmp_tmp_tmp_msg_0_0_0.loiter_radius = 0.750379753188;
    tmp_tmp_tmp_msg_0_0_0.altitude_interval = 0.327948950543;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::CompassCalibration tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 29592U;
    tmp_tmp_msg_0_1.lat = 0.0716886414196;
    tmp_tmp_msg_0_1.lon = 0.364030407669;
    tmp_tmp_msg_0_1.z = 0.458427869485;
    tmp_tmp_msg_0_1.z_units = 84U;
    tmp_tmp_msg_0_1.pitch = 0.968051997504;
    tmp_tmp_msg_0_1.amplitude = 0.519966972607;
    tmp_tmp_msg_0_1.duration = 28836U;
    tmp_tmp_msg_0_1.speed = 0.969491860116;
    tmp_tmp_msg_0_1.speed_units = 81U;
    tmp_tmp_msg_0_1.radius = 0.818543007233;
    tmp_tmp_msg_0_1.direction = 140U;
    tmp_tmp_msg_0_1.custom.assign("ERVPDYVSJTHQCIMLBRXWUDNMTQXETVXZKWGNOAOPENIJLBLMUFSSZHJYLNJCOHYPGADMGKJRLGCDLPDPDWOTDVR");
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
    msg.setTimeStamp(0.39184719917);
    msg.setSource(19150U);
    msg.setSourceEntity(223U);
    msg.setDestination(17468U);
    msg.setDestinationEntity(6U);
    msg.state = 241U;
    msg.plan_id.assign("IBVUJESUXDHOYTKQHQSOFCSIFXNMWGZBCKNNTXQOVXQYKYBNRERHYTLOKPAGKQRSHYHVJMKYLISALPLZVVDZJWLPAVEASJVDCIIL");
    msg.comm_level = 221U;

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
    msg.setTimeStamp(0.483182069266);
    msg.setSource(10379U);
    msg.setSourceEntity(177U);
    msg.setDestination(32131U);
    msg.setDestinationEntity(89U);
    msg.state = 151U;
    msg.plan_id.assign("APAPLCRUYOPNNQMWVNVSRZOYCHEBTFMMHXRHXUEWQIQVRQABFLRPLPLIJPQQJLMCOYVHCIESGFCVWXDSTHFIIIZADDNJVLSGOYDIRTYSRHETFRYZXUANAUEOCRHNOWVUTPSXYFQEKRHMJPFHQVWUZMBLFFDZKWKXPGUKHKMCTLWASOYFNO");
    msg.comm_level = 172U;

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
    msg.setTimeStamp(0.79450543779);
    msg.setSource(28820U);
    msg.setSourceEntity(74U);
    msg.setDestination(54644U);
    msg.setDestinationEntity(172U);
    msg.state = 128U;
    msg.plan_id.assign("XLTAPTNJNVOYAYAHGWCVJRXNSCSQDABUJOYIKSOLPQAKSIBMBQCUWRMYLNZVMRMNRFYHHHWXIPEWEWQDOZTFKSLNZQIKGUFCQCNAZUBAVWKWUTIFGLPUDPEVTMZHDKBXRSTIVKINAMSOIWCGLSXLDZQVMNDHCCFRKSGMJEIOFLCEPYFZBRXYMAGYRGJQQOHBHBFPPUBFTRIOPSJGPZCUGRJMGDLJFDB");
    msg.comm_level = 37U;

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
    msg.setTimeStamp(0.944218606805);
    msg.setSource(34066U);
    msg.setSourceEntity(239U);
    msg.setDestination(9639U);
    msg.setDestinationEntity(110U);
    msg.type = 224U;
    msg.op = 62U;
    msg.request_id = 28320U;
    msg.plan_id.assign("URWOGGGCSCMNYFEBLANBCQOC");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("VSUXANFCDHBPISMBQRANNSMCGKMYIPZHYKTWHRCTXSVDPMQRUBWFEDPJUXWDCISLAEXTXZGGJIYGYQEMOQVHVWOZBKLQHTCXZUKHJTNFCKSFAGNIYESEUORDAWYKNVKJDJNQDBUWDZNZMQFJQPWKOVZEARBRYFSECTILGCHATXCUPZARSUHXYRLUFBLLXWLEJVQBIHMJPGKRITPZLDKJJUTYOWAYRWIIPFVNFOETO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NHWUNIWSDGBEKHMLULYOHQZPAIZTCNNRHDIYLFLHSEKFTJDIWQNYAWSEHSSTSVXMRLFJTRJNTPFYYVOGBYJXRPKYDUXURDCIUPLIQDVBMMRVCCPEMXRKLAVIZCKBUCSEMKWZEATZAMFGPNSCZJTBUGGSREKBTXMVNCQRTGLZMNVBEZKOXJTGOAYWQWUQUWOHJEVDYOQXAJJMIZOGDVHOPXWCFHQRO");

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
    msg.setTimeStamp(0.911975463845);
    msg.setSource(57407U);
    msg.setSourceEntity(132U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(47U);
    msg.type = 43U;
    msg.op = 20U;
    msg.request_id = 25740U;
    msg.plan_id.assign("NDTAJGVSJBPEWHNHPYYPTWERUILFBOPCUUMAJATOKVPCYQDGJZGWNKCOHAOYSCIZZMSKBWGZHWFAWHEDQKNEZIMWSPDEBLEMDOWSJTXYFQCFFYMFOIXCBAJUKGUDLXZNXYRLIUQBVTMTEDRTNBQQLYICLPVVHKBETVONZJWFAIVVXZZKKFQNNFDLXCZNRPPG");
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 42766U;
    tmp_msg_0.type = 25U;
    tmp_msg_0.tow = 1738916115U;
    tmp_msg_0.base_lat = 0.129430114024;
    tmp_msg_0.base_lon = 0.639526110366;
    tmp_msg_0.base_height = 0.364529757673;
    tmp_msg_0.n = 0.00171674918348;
    tmp_msg_0.e = 0.0557247179461;
    tmp_msg_0.d = 0.192944907109;
    tmp_msg_0.v_n = 0.678464643281;
    tmp_msg_0.v_e = 0.578036795317;
    tmp_msg_0.v_d = 0.822240425282;
    tmp_msg_0.satellites = 159U;
    tmp_msg_0.iar_hyp = 16340U;
    tmp_msg_0.iar_ratio = 0.967824568833;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VWWAUVYDHHUYXCFPSZHEYZRVNOPQGNHWLFWEANWXWKIACIKVVQDBRCZCPKKEOKUXQFDMINFSEJDQMETRPQZNSXAAPXGEXTJYMJZLEGNFTTJ");

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
    msg.setTimeStamp(0.947860196344);
    msg.setSource(50561U);
    msg.setSourceEntity(146U);
    msg.setDestination(48660U);
    msg.setDestinationEntity(235U);
    msg.type = 10U;
    msg.op = 210U;
    msg.request_id = 52825U;
    msg.plan_id.assign("EXWLLDLAYNHUJIKZJDKXWYREJMKPUFYSHHYFTVWTEZZQFMVOMROHELBQFPDRTAXDJKZUVACNQZQVKCZNBVEZCHYKSWGZGGGISUCQVNLDTKCVJRTQFWVYOBBMCLDI");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.446971012399;
    tmp_msg_0.lon = 0.314231562294;
    tmp_msg_0.z = 0.170700535707;
    tmp_msg_0.z_units = 56U;
    tmp_msg_0.radius = 0.987603234959;
    tmp_msg_0.duration = 35515U;
    tmp_msg_0.speed = 0.627076949295;
    tmp_msg_0.speed_units = 70U;
    tmp_msg_0.popup_period = 20009U;
    tmp_msg_0.popup_duration = 56558U;
    tmp_msg_0.flags = 8U;
    tmp_msg_0.custom.assign("WPCUWEAZUGBCMMINDWIESOYMRBSBCQQOQRVRLZGNEPNHQJNDOHAKGNASKPXVZXTEKROTJCQQEAQHKMRVIUPDMJXIVDSWSCBBDMTBUVOINKI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XCYFSQMZFFSOZXKSJZNUTYERKAMWLEAUKNJLZPEPXSVPDUAEZBARMZLFNEIYMABSILSIZEECOPFOHYDJJQQDVPZIWGDCFTXNDOUTGRIBQCBHRGTXVRUKHXCFNWDDHWLDPWYHMUKVNRNUJAZOHGJDBHKVSVUTTALCBPHWJBCLQEIOFXSSHKQNYYPMVMQSYNOMGPGQCNRXTUVMBVIDQLTQOEBLGTJIKLMYVPRBWORUXRICGJWEGAJTWFYKGCKA");

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
    msg.setTimeStamp(0.131605327083);
    msg.setSource(25588U);
    msg.setSourceEntity(168U);
    msg.setDestination(24260U);
    msg.setDestinationEntity(103U);
    msg.plan_count = 26480U;
    msg.plan_size = 2556991795U;
    msg.change_time = 0.569033183326;
    msg.change_sid = 61206U;
    msg.change_sname.assign("IBDOGHCIWSFKYREDESYOSLRIVKTIGGYCLWQNEKTNDSHDZRAUJLIACUFWZGHSWXORDDYGAKTGNKUNBOYPBCQKAZMAXI");
    const char tmp_msg_0[] = {108, -77, -46, -98, 54, -71, -81, 38, -5, -112, 17, 41, 36, 49, -99, -6, -109, 109, 27, -54, -124, -124, 125, 102, -76, 9, 31, 34, 118, 67, -80, 93, -41, 117, 1, 25, 116, 34, 93, 73, -23, -89, -43, 46, 69, 24, 96, -109, -128, -94, -65, -85, 58, 93};
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
    msg.setTimeStamp(0.765560605562);
    msg.setSource(5565U);
    msg.setSourceEntity(74U);
    msg.setDestination(23264U);
    msg.setDestinationEntity(42U);
    msg.plan_count = 8963U;
    msg.plan_size = 3223492411U;
    msg.change_time = 0.541309463905;
    msg.change_sid = 40148U;
    msg.change_sname.assign("SRSCYIHFWMWFYXPSIUJLNOQMYZIVPVWZXKDGFADMDFHYOXEYJKLPCRELNNLDXAK");
    const char tmp_msg_0[] = {-86, 18, 86, -67, 0, 73, 14, 47, -5, -120, -16, 122, -42, 59, 36, -33, 112, 80, -85, -99, -123, -7, 104, 72, 105, -22, -89, -72, -86, -120, 46, 114, 108, -13, -45, 83, -54, 54, -109, 21, 58, 58, -38, -125, -104, 56, -124, 67, 25, 82, 2, -7, 40, -38, 28, 108, -23, -2, -12, 9, 19, -90, 33, -108, -32, -43, 90};
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
    msg.setTimeStamp(0.455537246314);
    msg.setSource(16120U);
    msg.setSourceEntity(131U);
    msg.setDestination(23189U);
    msg.setDestinationEntity(4U);
    msg.plan_count = 44716U;
    msg.plan_size = 1787790393U;
    msg.change_time = 0.241828733394;
    msg.change_sid = 59025U;
    msg.change_sname.assign("UOIQHYAYOGLAFWCTWWSXROEMKLCOSDKVFBBSOJNBZCBWTRFLQRBCHELPNESYQMQWVNOKDVXXLMNYWYKXRHBEGHGDPHDLFTEVPUUQJADZISQXDCKLUUDRSVOPTMZFNYYAPVLKSGKZXGBWVISTWGUUJEFWNNIPJVJRQDSXOEJMSIAMEVEYEMKNXRRAO");
    const char tmp_msg_0[] = {28, 1, 6, 79, -32, 80, -74, 40, 78, -87, -36, 87, 79, -116, 94, 56, 74, 100, 78, -116, -61, -61, -19, -125, 117, 48, 58, 107, 79, 91, 113, -23, 111, -72, -6, -37, -113, -39, 3, -108, 101, 3, 56, 101, 74, -112, -3, -55, -8, -58, 58, -81, -7, 61, -47, 104, -27, -46, -44, 12, 28, 92, 55, -111, -63, -119, 109, 51, 59, 62, 22, -75, -37, 14, -93, 78, 10, -107, 39, -18, 1, 28, -118, -5, -16, -108, 7, 48, -98, -100, -92, 40, 87, 46, 38, -20, 38, 26, -110, -84, 18, 32, 110, 71, 103, 43, 90, 72, 21, -45, 18, -33, -59, -110, 78, -120, -55, -119, 50, 80, -100, -79, 123, -122, 79, -64, 34, 50, -51, 116, -126, 121, -77, -67, -18, -80, -49, -97, -8, 57, -120, -128, -33, 5, -108, 59, -46, -74, -115, -39, -33, 80, -105, -2, 17, -76, -85, 113, -69, -102, 66, -27, -33, 41, -33, -21, 86, 19, 13, 122, -119, -11, 14, -18, -26, -100, -63, 31, -23, -106, -18, -37, -79, 105, -85, -45, -25, -57, -11, -7, 52, 87, -116, 100, -62, 38, 0, -100, 63, 8, 43, -2, 77, -21, 96, -66, -17, 14, 42, -27, -119, -79, -1, -63, 112, -105, -44};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("AYOEJXLBHUSUSXCSPWXIJQTWTHWWQVPGAYXXDKPUBBWRRVLBNNMEGRVBTURLWPEVHUCJOOCTYTAHKFWYFNSGZCVODSDQSSAPBBQKGHFUUJJLMNIPDHHMKZUMWIIQHYMZILNZTPGPRZAEGUGDFXNMASTBJF");
    tmp_msg_1.plan_size = 62883U;
    tmp_msg_1.change_time = 0.439949501239;
    tmp_msg_1.change_sid = 24626U;
    tmp_msg_1.change_sname.assign("NZRPFCMOUWTULIOTLVKDOUHVXBQJMWKVOZQPUULWPQGXTFVDPEMXXKRBA");
    const char tmp_tmp_msg_1_0[] = {112, 57, 16, 76, 106, -59, 26, 99, -74, -40, 2, -3, 60, 81, 9, -17, 108, 2, -84, 105, 20, -126, 86, -37, 43, -76, -48, -54, 25, -126, -12, 95, -18, 1, 74, -114, 45, 109, 0, -60, -80, -127, -17, -99, 30, 18, -51, 7, -23, 20, 62, -115, 53, 96, -52, 53, -125, -23, 12, -87, 102, 122, -62, -40, -106, 75, 80, 115, 96, -123, -109, -124, 115, 90, -119, -77, -16, -65, 37, 59, 92, -5, -54, -29, 18, -77, 43, -77, 123, -122, -90};
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
    msg.setTimeStamp(0.869385995056);
    msg.setSource(7635U);
    msg.setSourceEntity(120U);
    msg.setDestination(35995U);
    msg.setDestinationEntity(8U);
    msg.plan_id.assign("REZLNPQZJJYFFMNWINVQTSYEDFZLXAEGOFEHISVQULJDRRTTUHUMHCJWSXOVCGQZNUJILBSRUVEPVJZWPRRKBAYYIDBKADKGOVFKNPCIMALAPCGLAMTPVBZGXTIKHBLGDAVPKAYJYXRCMGCYOFXNOOHMLOAGUQQGTNIUT");
    msg.plan_size = 1572U;
    msg.change_time = 0.0858827743148;
    msg.change_sid = 33450U;
    msg.change_sname.assign("SLWETVKTEXQLJHBNGGUHVTHHRVTPCDNNCQUXASDMZQOGQKRBTKUCYWRCHLDGWMCLHUCBIIJHKIRFWZQXUJCEAAVGVRFOENBODOYQQXGGHFWALZICNIBKBJEXBWEUMFQZOAUZKDMKAWSYOYPZMZZYDGXPULKPGOYBZPWDIICJNSJASNFHDVDBXJMFTJUSYXVNMJSOPPQECIFPYTWLLFERLXOKWAQYVSUPMRVFSNTNJRAETDPGRKYSEL");
    const char tmp_msg_0[] = {1, 60, -47, 92, -59, -14, -48, 0, -58, -49, -79, -65, 55, 119, -38, -117, -107, 19, -22, -91, -72, 80, 111, 32, 41, -83, -68, 49, 75, -93, -30, -119, -95, -12, -35, -94, 55, -20, 6, 126, 86, -127, -86, 89, -125, -86, -81, -91, -120, 50, 66, -40, 3, 111, -37, 69, 104, -16, 71, -40, -98, -22, -128, -3, -36, -34, -80, -95, 32, -83, -78, 91, -109, 101, 33, -44, -5, -74, 34, -2, -110, -40, -105, 41, 28, 83, 85, -38, -118, 108, 20, 26, -110, -105, -118, 50, 89, -98, -32, 81, 23, -18, -75, -121, 108, 15, 95, -65, -90, -98, 3, 76, 46, -40, -121, 5, 110, -32, -38, 76, -17, 125, 66, -34, -62, -44, 114, 32, 35, 23, -126, 106, 118, -47, -94, -20, -113, 85, 29, 101, -92, 123, -82, 96, 114, 0, 78, -30, -11, -90, 121, -54, -128, -21, 37, -127, -123, -108, 64, -74, -17, 116, -19, -70, -76, 15, -12, 93, -5, -109, -114, 116, -91, 12, -22, -37, 115, 11, -22, 90, 31, 99, 10, -110, 53, -111, -38, -73, -3, 38, -32, 97, 55, -70, 80, 68, 89, -76, 93, 103};
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
    msg.setTimeStamp(0.698105597848);
    msg.setSource(33130U);
    msg.setSourceEntity(93U);
    msg.setDestination(7528U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("NMUJEPBRJVFTKFRYSAEQFCRLFZNOMWMKCTGLUHBQVLDGRXCJDNTWDJKBWMTIYRSXYEDGGCDASPHXROSZYZZCBOJTB");
    msg.plan_size = 50387U;
    msg.change_time = 0.306634722185;
    msg.change_sid = 65319U;
    msg.change_sname.assign("YYMGXRACTPEKSOVKPMVCPLBWDSVDZMWSRUQPFTBNKQYEUSXIESDYHZSNYGPPHXHTUGGSIGJJWNBOBLYCDLAKBKZHYKRHTGWGTEJAFOYIIJGOYJMJYCKTPWXQJIDANAJHDXZGSLAUSUUGHEZPTFZ");
    const char tmp_msg_0[] = {66, -85, -81, -70, 115, 38, -58, -81, -108, -97, -98, 106, -4, -117, -97, 87, -14, -73, 81, 66, -55, -60, -76, 67, 59, 0, -56, 81, -120, 37, -34, -101, -75, 60, -116, 64, -72, 57, -58, 45, 37, -78, -35, -92, 61, -110, 5, -52, 19, -58, -114, -103, 88, -27, 46, 8, -114, -108, 13, 85, 95, -110, 74, -84, -57, 24, -52, -38, -8, -77, 111, 37, 25, -123, -7, 3, 111, -91, 51, 2, -96, 64, -74, 97, 25, 19, 40, 110, -54, 76, -107, -14, 63, -95, 49, 87, 94, -41, -52, 74, -123, 67, -67, -57, -49, -126, 30, -15, 108, -4, 62, 101, -60, -25, -105, -80, 45, -52, -32, 101, 111, -74, -122, 2, 104, 70, -112, 85, 6, 91, 123, 78, 107, 13, 106, 31, -27, 46, 68, -128, 18, 107, 3};
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
    msg.setTimeStamp(0.290577996532);
    msg.setSource(64794U);
    msg.setSourceEntity(60U);
    msg.setDestination(8192U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("YNTRDDPHFUFHIFBWKLPFLIXAEQYOHJFTTODGMSUEOLMPXUYKISURVDUBTOMCJDINVBMGSEZCMJNHZQAQZYUXSECIWKGJUHPAHABATHVYSINZQPEFRVBNQWSFBNDJILUZVWTZVX");
    msg.plan_size = 55034U;
    msg.change_time = 0.429104250297;
    msg.change_sid = 12430U;
    msg.change_sname.assign("VMEOGVNPCIODMDSKYBGEYSDIVEACTYTDLZKNLALCFKTVEUTJBBCFRGOWYHPIXOUNVNVHKQHURSZUPLTOKHSLQHUCTGFQJPUSDRZLIWLXBARYOTOZMUSPZGIZFYCZXDBUYZZEFHREYP");
    const char tmp_msg_0[] = {-119, -109, -12, -75, 121, 13, 56, -61, -72, -35, 48, -16, -65, -9, 126, -49, 25, -56, 69, -53, 108, -20, -54, 99, 22, -20, -94, 126, -107, 99, 44, -2, -39, 27, -41, -119, -23, -29, -69, 116, 96, -112, 44, -73, 33, -75, 53, -78, -118, -39, -7, 21, -96, -116, -96, -15, -97, -70, -19, -30, -101, 67, -7, -55, 92, -42, 51, 100, 71, 116, 106, 112, 92, -93, -73, -80, -120, 117, 2, -35, 43, 54, -123, 115, 20, 68, -60, 20, -115, 30, -71, -117, 14, 86, 56, 11, 51, 10, 22, 35, -64, -27, -28, 105, 121, -72, 106, 27, 102, -97, -73, -2, 102, 1, -126, -28, 79, -36, 85, 37, -36, 121, 42, 67, 32, 15, -5, -8, -119, 118, 43, -96, 83, -37, 42, -9, 126, 93, 99, -103, 79, -72, -100, 64, -92, 65, -84, 74, 77, -128, 57, -125, 42, 19, -104, 14, -69, 92, -124, 76, 30, -43, -119, 91, -28, -101, -18, -101, -77, 107, -84, 18, 122};
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
    msg.setTimeStamp(0.122556411814);
    msg.setSource(4289U);
    msg.setSourceEntity(166U);
    msg.setDestination(6041U);
    msg.setDestinationEntity(193U);
    msg.type = 39U;
    msg.op = 51U;
    msg.request_id = 9315U;
    msg.plan_id.assign("UBRUZAYJQUWSKBNBHVNTASG");
    msg.flags = 53289U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.527137500578;
    tmp_msg_0.lon = 0.507808540617;
    tmp_msg_0.alt = 0.907362440156;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TTZLQNYSJFIELALKQYJHBFBZMJVEXOERDUWPXTEHROIYWWMNSIVCYUCGQVMIIXQNZMGNXXDUWVETSGXOZCMFQHKCQRJAHPSZHDTOEINRCPANWCZBGVGHZDYVVELSROCYRBIFA");

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
    msg.setTimeStamp(0.0910879462984);
    msg.setSource(56878U);
    msg.setSourceEntity(109U);
    msg.setDestination(54364U);
    msg.setDestinationEntity(126U);
    msg.type = 184U;
    msg.op = 84U;
    msg.request_id = 27498U;
    msg.plan_id.assign("XBPFHNRNHFDQRSDZJTDQQGEIBZUIDXZOONKCCZWUHFCQDEVCMVYHXFNPIEVVSXLGTELIHEGJRUVXCNAORQGLWFSBYMBYMWYQWJFUBQZFKEVTSTIXOUAJCTIEYJQPEZEAGKAILRLDHROMZUYKNWATAFGGSLZISQBVPRBFKKOMOKYWLMKAPRPWONSTXHHBJPFDNTQVIJUPWINYTMLHDZZXUASAMKSRTGPJOGBDAX");
    msg.flags = 35320U;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("DFWJEFFGDABMLKMGALNXBKRBOYOIVDOKWOUZPTFVFLVZXRR");
    tmp_msg_0.lbearing = 0.485848682232;
    tmp_msg_0.lelevation = 0.716000338059;
    tmp_msg_0.bearing = 0.999075150098;
    tmp_msg_0.elevation = 0.539303170091;
    tmp_msg_0.phi = 0.624996427542;
    tmp_msg_0.theta = 0.938231038916;
    tmp_msg_0.psi = 0.176411830855;
    tmp_msg_0.accuracy = 0.692776384513;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HOZDYXLKUPSEUYQJRIXJHDNUEMZVPLNXWQUFTSHJOJXMPEBQBFRYYPZXIXGTTVLKSXZWMGRIQBZJUFMRKSVZSOUM");

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
    msg.setTimeStamp(0.222523979479);
    msg.setSource(2881U);
    msg.setSourceEntity(60U);
    msg.setDestination(7883U);
    msg.setDestinationEntity(80U);
    msg.type = 240U;
    msg.op = 91U;
    msg.request_id = 28050U;
    msg.plan_id.assign("QGBRGMWWOBVGGYKIYTUBLWHDCDGCPGURCTVONUCATFKRKMFHRUTHCEIQQHFMFWINRTZOIPLEUAIXNPAXSSAXQFRILJYHWOLNADVZEMRKFVZNNRMHLAXCGMUIBVCSWXVESXMOSQCEMG");
    msg.flags = 15044U;
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.688238174919;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YGCKFSGGFDPEEKPDNDJUGLPYMRBTNWAMSFEOZLPRLYPADWLMKNTTTVQAXQCUGFCBMXQUNMWJTBUSVVPBLIZLENIVSAU");

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
    msg.setTimeStamp(0.543428269214);
    msg.setSource(61673U);
    msg.setSourceEntity(200U);
    msg.setDestination(11563U);
    msg.setDestinationEntity(128U);
    msg.state = 58U;
    msg.plan_id.assign("GLEOIWKGDWUXKSDYNTLCXFRBPRKZWBSJDHZFRAMDNYTBVZVDWLVRNHGKPHTHOUORWFJCVSVHOPQDBIHNPFXMKATJTPAZJIJOXLXJJUDXXJNMEYUEQIHNTPDFCHYZWCGMSEZCWNEAAFRAMJAQQDQHUSAVUVBKYECQIBBQSFUMITGCYNZRTOUCGZHOKOVBEKCLIYLBXMFKIKNYUGWOBWJGCVFVZXPSGPEPISQILXFMEEQAQSTAMR");
    msg.plan_eta = 594484960;
    msg.plan_progress = 0.429325611391;
    msg.man_id.assign("RQWLCQOXMRARUOORFKJKGJEFMPEPJSBTOKEVGPIASHRJAKPQADVIIXHSJECHPFYSYCDTFRUPYTTWNUKPOENAHIHMFYLBRNSXJVXDLNFXTARFNTZVJZZDMZRLSXQEGHNVVFYMZAWHMBDTCSFLXBZOMLIAJSKEDGIBUBWWBLINGVCGQPLSYDVKBG");
    msg.man_type = 60626U;
    msg.man_eta = -10335505;
    msg.last_outcome = 42U;

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
    msg.setTimeStamp(0.116302174033);
    msg.setSource(25909U);
    msg.setSourceEntity(201U);
    msg.setDestination(33756U);
    msg.setDestinationEntity(47U);
    msg.state = 20U;
    msg.plan_id.assign("PTCMJSTHIVQKSPRNAQOQYEIJRTSCXEWLCJKADDFBEOESJMMNDYUVEDGXZPVMOZAWXJHWTJIMDVPQLGIIFXFZBWBONSXBTZVKAEIGKPXOOERPTLBHWXMYPUCAULZAVLTFW");
    msg.plan_eta = -193872049;
    msg.plan_progress = 0.962042176214;
    msg.man_id.assign("XDYMOEFGVAXYGYEEJUQHBUMSNSIRQYOWQAOLSUFCAULRUAKPLERFLAFFJE");
    msg.man_type = 42975U;
    msg.man_eta = 2024845316;
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
    msg.setTimeStamp(0.90245139152);
    msg.setSource(61045U);
    msg.setSourceEntity(239U);
    msg.setDestination(12947U);
    msg.setDestinationEntity(150U);
    msg.state = 75U;
    msg.plan_id.assign("RUAQDNSFGVMWDHVKLEXVUACMGVGEOGPATJFTJGZQYUI");
    msg.plan_eta = -1950385765;
    msg.plan_progress = 0.573530921914;
    msg.man_id.assign("ZDYPYJQGVUPAMGDQTEKADSPHFAKCWDZNGDYULRKRWKOZSPRXTUSUFJGIQVVCVZNOLELZSXBRUBBIFHUNWUHOVXFLHVIWINYSOGGYLVWTNMQBCMIIHZ");
    msg.man_type = 55017U;
    msg.man_eta = -1278463026;
    msg.last_outcome = 231U;

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
    msg.setTimeStamp(0.683286353401);
    msg.setSource(37495U);
    msg.setSourceEntity(9U);
    msg.setDestination(16963U);
    msg.setDestinationEntity(182U);
    msg.name.assign("UULNZIOQKJRHFKBAMFIWFGKNYQDEXVIGCXSSALSZGFQBPMIZSWHGRKNJDVTWVDLVMCEODQUPGEMWBAPOYKASTOIFPPBZRICTCHODEEKUDWRZSNBMBMAUZNYKLOGWPETBVCKLCAXUXJFJPRVLTJLBJJRTMOXFYNNPTAULATKVHVOJKHILHCZBCXQHXFXIBHCOMYNRQYPUQYNHWQHYCDFEASZNVRFLGWYSE");
    msg.value.assign("NTGEHVCKQVRIPKEVACUOMPCQRCGPQKWSJWSTODCIDELTKJDRHBJXAETVHUCXXPPPJNTIWEODQRWZQWZFIDFNHLMNCMKOLDYZOBEMYTLMENWWHRUSVXXZTIFABBXPYSJUFOUMVFLBBWBNEQUHYIFRNMTZXBLGNPAZJTZYNSZMKYHIZLRPFXDIULYOGKVIGMRKWKUADRHDSUBOSGIYGSB");
    msg.type = 172U;
    msg.access = 219U;

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
    msg.setTimeStamp(0.952953707536);
    msg.setSource(12422U);
    msg.setSourceEntity(143U);
    msg.setDestination(47064U);
    msg.setDestinationEntity(201U);
    msg.name.assign("PGYMUJBNRTCEFNXYRFQYIPAURZCNFULBKSUJUCQKXTGWVYVIVXYPLOYTUGAZUMFRTFMMHMXSXISWYELQSJQLKIJOXABWRPKVITIQECZBMUWLNAPNUQSBXZVOGDBSGDDHFGAVNJUETAKABDYHLCIHWWXDKDZZJQ");
    msg.value.assign("AOGNXGJRVTGELHLFVBSPLEAZBTBCJNWZFWZSYKPGJDVLPDTIKEVMORHFCERRQZMXJKRFAJIBYBAXBPRUDMKNHCVIIIHOUJUWAOQDEOHSGPRYLQBSQGPWAXEHGVCKJQMGOTJMNDKPNSHUWGUNWMVWLBSPQVKAXRQRQLVUDOFAFULODFZTGTTBYKNSLCCQC");
    msg.type = 42U;
    msg.access = 151U;

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
    msg.setTimeStamp(0.238702386118);
    msg.setSource(64019U);
    msg.setSourceEntity(173U);
    msg.setDestination(27604U);
    msg.setDestinationEntity(63U);
    msg.name.assign("ISBXHIGHPIFCZXPKWXCYRMMDLRJZZTXHVLTRHLCIPIYFSWFQAXJKZHISGUGTJFAUGLDLCRMNOCWDUNHCOTVQQLTNJEAYWOQISFABHWKHPMGTQLZMYTFGKKSWBJDGJKR");
    msg.value.assign("DWPCXLUTRBLUCTLQFJMTNCDMXYKSHFDIZTOPRJHNDNKVRFTMBNRGVJXZUAETHDISGGFAKJBOQUBMIWEZSZLKHIHKFXYDUOLGYVVNYENZURETYWYBCMBAPVSLZKOPDBUASAPCODOWMEWPPXHAEYKJEWVSLUNMJGGXYZLHCFJQWSEQVKMSYUBWAHTRQXOVXQDFO");
    msg.type = 79U;
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
    msg.setTimeStamp(0.956469422397);
    msg.setSource(40870U);
    msg.setSourceEntity(254U);
    msg.setDestination(17194U);
    msg.setDestinationEntity(124U);
    msg.cmd = 49U;
    msg.op = 136U;
    msg.plan_id.assign("DCYLSYHEWDPLOZCBQBSIRGPGPHMGAVVDJPWNRDLGM");
    msg.params.assign("XOOLSHPFAWUKEPJZTRZEJXVFFLNKWNLZYLQOXCMIDAYDECBHRVQRJTDVIPMZBPILHRDAVBHRGXAGFIWNESBSRBEIMAXILJGFCUPIBKQDFS");

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
    msg.setTimeStamp(0.524560522428);
    msg.setSource(32484U);
    msg.setSourceEntity(81U);
    msg.setDestination(24832U);
    msg.setDestinationEntity(17U);
    msg.cmd = 124U;
    msg.op = 93U;
    msg.plan_id.assign("BXLNSMPGIMRYIFBHDCYAJFSQOMEHQIVIXHCDPPZHDXKAQETNPPHRFNTCZNUEEPTB");
    msg.params.assign("QNSAELJGXNFDCDHZBOETFPGWNHGQMYWDOJKOWBKBVRKALSMALEHIPDKIXOTIQVSNFJPWEGJSCAIONMAHXQAREXSUUWVXZWKEHPBMVHIFTRUAQYXCPQOCVEAYRRYAOOSIVOXUFHLDQQYEKZQYVFQZJYSUGHCR");

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
    msg.setTimeStamp(0.588643269467);
    msg.setSource(4077U);
    msg.setSourceEntity(43U);
    msg.setDestination(14913U);
    msg.setDestinationEntity(238U);
    msg.cmd = 113U;
    msg.op = 175U;
    msg.plan_id.assign("TCMYUTCTPTRXGNMLVHYHQRCWVFVDSAPFQFWGETNANDKSVEGUMCGXVXZBALOQQMOOKAJBXRODDYCCDRHKMFNHOUPLURZRHUBPTWZWXOWSEGVJXIKLDLIYIYKZFBXVQHQBXJYOFAINAZQSABLMBIIEWXPEZVKYNJUDGKRIZQSLMSGP");
    msg.params.assign("LJESXYWADVOASOMGPGEUQCTRBILTXMDVFQCENKNPHYNHZWAGDHOGNYZKCYXUIGLFVLZZZRVZYGDMXHJQMTIXMJDKWPIZITJHPVNNYTKAKPUQPU");

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
    msg.setTimeStamp(0.506713627287);
    msg.setSource(1072U);
    msg.setSourceEntity(89U);
    msg.setDestination(12247U);
    msg.setDestinationEntity(60U);
    msg.group_name.assign("HCOJWDHCNGFBXSWSNHCRBSGWBRGQXSGURZCNQWVUFLINLDXEIMSUBTGGDQJUTPLCYBKBDNEMKXSZBRFJCFLKMUMLHZYYKZERGQYNXNLPCCKUEDTQVDYPIZXOROGVPIRACWQKORNPEAJELSIUHDJREIHMDMWMHPTTLVYAXTXGTWXRVZKFAHKDWYOPYLKPAPUKOBBBJOOVVUHANFTJOUEHVME");
    msg.op = 87U;
    msg.lat = 0.167801613718;
    msg.lon = 0.267785405503;
    msg.height = 0.491067374909;
    msg.x = 0.067959805741;
    msg.y = 0.637923082092;
    msg.z = 0.188500580851;
    msg.phi = 0.90038674107;
    msg.theta = 0.425862917373;
    msg.psi = 0.979995655898;
    msg.vx = 0.0816212872539;
    msg.vy = 0.392508193211;
    msg.vz = 0.875604304362;
    msg.p = 0.0525788025484;
    msg.q = 0.516883789863;
    msg.r = 0.37236136167;
    msg.svx = 0.346523442217;
    msg.svy = 0.908922642556;
    msg.svz = 0.707665624521;

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
    msg.setTimeStamp(0.105824245317);
    msg.setSource(26172U);
    msg.setSourceEntity(157U);
    msg.setDestination(53450U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("IXUETHLNRJQPQNQBPRBBHJUEZDYEINPYGSBWKLNAKETTNCHMVJHZZVWHPVVDWZIQDUCJSCJUWGAKGIBSOZTSAXGUAJZLUMMYQFX");
    msg.op = 74U;
    msg.lat = 0.930100091451;
    msg.lon = 0.216562676633;
    msg.height = 0.692587243328;
    msg.x = 0.51599057263;
    msg.y = 0.239959866302;
    msg.z = 0.571233833402;
    msg.phi = 0.192273196047;
    msg.theta = 0.145063629984;
    msg.psi = 0.376056185288;
    msg.vx = 0.372981883024;
    msg.vy = 0.798975538423;
    msg.vz = 0.796041259721;
    msg.p = 0.426174943696;
    msg.q = 0.950873376266;
    msg.r = 0.630814407217;
    msg.svx = 0.0863231559773;
    msg.svy = 0.693015794108;
    msg.svz = 0.808810302701;

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
    msg.setTimeStamp(0.231836661649);
    msg.setSource(15637U);
    msg.setSourceEntity(13U);
    msg.setDestination(30687U);
    msg.setDestinationEntity(8U);
    msg.group_name.assign("UEEINPRLMBVMSMVTZTPLDSFSQGXIPTJDZSFNEBVQMDROYJZCNGADNQQKUBKJBOEILPBNWNKBPUHKEZYVDIBHTERTWRTQJDNJGIQPWKGSYFDUMUZRLIOJHGXQLGORWRACXOMSBACWANDIPCLIWKTPXVXCLQJZSCMUPKMHMLXEFACJTHWIZHBKIMWOPOQYEFYKNOHOXQTRHJVYWAFGUDZVKZVNUFHSLYFYHDSRALYAZCC");
    msg.op = 245U;
    msg.lat = 0.145025891084;
    msg.lon = 0.113413831182;
    msg.height = 0.537648426085;
    msg.x = 0.785731483887;
    msg.y = 0.835931035892;
    msg.z = 0.142425485952;
    msg.phi = 0.180002134443;
    msg.theta = 0.567349646701;
    msg.psi = 0.75529620415;
    msg.vx = 0.673097535622;
    msg.vy = 0.834983275105;
    msg.vz = 0.810812322041;
    msg.p = 0.727228959782;
    msg.q = 0.357294965162;
    msg.r = 0.755001959001;
    msg.svx = 0.392752411269;
    msg.svy = 0.878039486519;
    msg.svz = 0.170801073204;

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
    msg.setTimeStamp(0.427503263809);
    msg.setSource(9536U);
    msg.setSourceEntity(242U);
    msg.setDestination(54676U);
    msg.setDestinationEntity(172U);
    msg.plan_id.assign("WTMIRSIDWZZRA");
    msg.type = 75U;
    msg.properties = 68U;
    msg.durations.assign("WXUAROVTGEMGSGRPJIWQLXUERDZJDUYFTIZTLDOPSRKJVYLTTFDLKLGSZZQDEFQWDIFVBECYLACJJKJUPSXUTUMVNRIUGBHQACKBRYXBRFUHZTDVNPYVPREMLKXFHMNQBNGTWSHTGRWQSSABCVNCSFZNZMKPZKXHWVJWKDSLQAXICOMEPSWOJHYYXNZPYKHAFDFPBTWOIEVBEQXBIYDIJMAGCOGLINOQMWUAECXYOACIOAFJPMOU");
    msg.distances.assign("XBCCSOKVJLTAAFSONQRUPYIABQKTQZLVSKSIKNBTEDRZWIJGZUPVOOIBRIENVQMUDRBXJETVXXNONPDHFQIYRBGRLMFBLKIXJZEROLFLVZYHSDWPIHGUOHQNPEQMZAECGGOZYYUFWIJJVAMROQTMVWULFKDFHNEFQTJLASWPHRFXHESCCWGYDBRBPLKHTUIXSXDBPKXYCAJYWYQTSAZVGONCENWCMMHMCGTSFDGAJMKUXZHUNLAMWDJW");
    msg.actions.assign("IQAZGKLNACIHDZKIWWCCTVHVBZIWDUZQIVPVUYHHTSEWPXBBHHQATBRZMJANUGETSHSLSBWNPLGUKWARONDGCFDRITLTOEQJVLJOMCXPUKTLTEDMIEBGRURSXOEOPEOFRWVKRPSAANVAGWBALFOPQBPZFMMONIXELJXHTWDYGYVNQNIRFBQYUGJSKRYOHDJVC");
    msg.fuel.assign("QQDEKVAFWQXPEOWUIBRSPJMKCVVLLDYHNMCSPZHRYBCYKTTRJYPNVIKKSDLOQDFFUOESMXFJXUQNINKMPBSPBYPKTWIKGIEEQOGTJTLAKGDMXWOFGKNYELBDUNNLEHIMMZU");

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
    msg.setTimeStamp(0.410355863719);
    msg.setSource(14605U);
    msg.setSourceEntity(159U);
    msg.setDestination(47116U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("GHBTFAOEVXMDZQYQASKGEHOKQAHYCSRFJLKCCQGZCQJZQEMUPHLGIFOQNHYVUHJDWZTORNNRLYTUTWCXXGOHVZRUZACXCNIEJUOSPMBAGICMDUGDREMYBNXSHUEPDCVPZOWITWPEISXZJDYL");
    msg.type = 144U;
    msg.properties = 31U;
    msg.durations.assign("JKNQJSKZNLJENWDXVIJVWCESRHODWPXVY");
    msg.distances.assign("ZXWIYWXCGZNCGMTUWJDAEVWGYZRQHVJEFWTHBEDGPRUYTJPVTTNFJTQKNGWDVGLAYFEUMPODCYFGAMNCSBELKXQCVRDTCSUCRNPBLEXHGISHOXNUFUSQGSXCJLNSIPVWFBJYSAWULSYSQWJEUODBVFQMXLKFVMOFLTIMKNYLBZOLKQYQUJSPZPYZRUXCOKNFONTRHIRHHDPKBCZMLAEEKBRVJDJPQHMDMAW");
    msg.actions.assign("FJBTDIJWFGOJKCUBPHHJVQUYSHNOAETGISTITJZPSVDKOMVZCLBHAQBRABRWHSVNKXESTALWTKIDICNRRZELHPSYQSOFHAPJWXBARCBGZCYJSDTBQNOXGSSPVLNMREAZXCQIRWYJKRVPZADJNDUCMTAIMWMQZEEOBVFNCG");
    msg.fuel.assign("NQBBBLCNCSZOMLPJ");

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
    msg.setTimeStamp(0.578310013644);
    msg.setSource(7055U);
    msg.setSourceEntity(215U);
    msg.setDestination(59417U);
    msg.setDestinationEntity(152U);
    msg.plan_id.assign("IVTQCYCIKYJETXHUORTVHKMWTDTNMLQNPX");
    msg.type = 119U;
    msg.properties = 210U;
    msg.durations.assign("PVDFGKYOAKMLTBECDGMJCFXUIRJGUGVSMPZMIMEYNQGTIEHOFDHTUEBZJYXAYJUVU");
    msg.distances.assign("WRGCOCLLKOQUQHBLRMINTTUZLYFNOLDXOAPFEVJDCFVDKGHRFOEYWSBSGPMQZUPJPSCLZXAHOTBEESMRQMNFNJZCDREZFYDVNNVMEPESWZCFMKIEJPQYHRXRWFUDFDIXRYBYQMNGLNBKVXKPUUTUXGXYDBKAIHRZGOZZQVASWOWBHWYWJJEHMVS");
    msg.actions.assign("NAFEFALIAMCGHRGRGXSMTYJOTBQURQRYTCNKSQNIHWEBHBVIKDVZOFDWHQZEXOMPEKRDRLGPIOGCPCDDGPMVOFZE");
    msg.fuel.assign("EJKHZSPSNWDIEOYHGSCQRHEXSOIGYUZUYWWLTPSNQKPERMZHEPZJDMCLSDOTGTLWLDCRWVGGBKNJRHYYMTSBQIOCAQCNXCFAPMUAUJTRHNABQJKZIIUDRAXOYGIGKDPUBZVNVLTHYJYGXIWZLBEBXXKAYSVFMDVGEPFOBFEQU");

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
    msg.setTimeStamp(0.229683481194);
    msg.setSource(22173U);
    msg.setSourceEntity(115U);
    msg.setDestination(55553U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.320938447637;
    msg.lon = 0.741558243863;
    msg.depth = 0.240467837639;
    msg.roll = 0.324799834356;
    msg.pitch = 0.954001463999;
    msg.yaw = 0.202966253129;
    msg.rcp_time = 0.303477238533;
    msg.sid.assign("NUSROEKRCZOAUCYCPRVZKOXHAVQNYKMQTYYOYXWNTCQHCWZWCDXTTDPXAZCRJBDRDW");
    msg.s_type = 114U;

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
    msg.setTimeStamp(0.30558286915);
    msg.setSource(11382U);
    msg.setSourceEntity(152U);
    msg.setDestination(30779U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.49918131462;
    msg.lon = 0.502029045223;
    msg.depth = 0.749136437951;
    msg.roll = 0.288447634715;
    msg.pitch = 0.152122267862;
    msg.yaw = 0.609854085235;
    msg.rcp_time = 0.410674232611;
    msg.sid.assign("GXJEBCALKDAKEVKGDXLMNPLWBERFKUBQLHHLRATAJRT");
    msg.s_type = 4U;

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
    msg.setTimeStamp(0.603449740304);
    msg.setSource(56502U);
    msg.setSourceEntity(44U);
    msg.setDestination(17134U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.948400848682;
    msg.lon = 0.95563889468;
    msg.depth = 0.0202119919163;
    msg.roll = 0.510749553555;
    msg.pitch = 0.634320921213;
    msg.yaw = 0.594405025557;
    msg.rcp_time = 0.564790431814;
    msg.sid.assign("IMSZGNUWUHKAIXWAOCTCETZXDSMZZADZQKNNQSNCNVOWJSYJTWNJQEJRHLFAUGUIZWUGWNHMKTBUGEOCRGACIRVXYJBVYTSZBBMHYJVRDEDYBEFLPFFXPSXJZOCFODWSIVCTMMNLWLEAQNCUHQWOLCTSVMEVQKXFOTUBSDDPVQBFXEZHTLOLKBMJYMQIRRRVFWMGYHGHGDOXREXIXEPIDKLICPJHGPRQIZBOPTLJKUFUKDKYYHYRNKLG");
    msg.s_type = 58U;

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
    msg.setTimeStamp(0.900983578016);
    msg.setSource(58837U);
    msg.setSourceEntity(231U);
    msg.setDestination(41834U);
    msg.setDestinationEntity(9U);
    msg.id.assign("IYSZEOLCAMDSJHGTPFUSJVUISEUJCYBYFBFXXZGDJRMQMCYADIWAMRSDLXFAROOZCHXNYUOPAHQHVPIVOWBUEKZWSAWISEYCEUQVSAFBQYQBDPLETIMTQTYVYKXZKSPOCUNTNRIZMVRJLPHMCNMZFVXVNFFKZKKNNHGWLNWTDCDJG");
    msg.sensor_class.assign("DCLOLKRIQJAUGADFHAUOIDCNUUOYKKPRZDLMCRSDGZDEPJEBOOWQVYZMTZGGPVZONNERYAZBHWRAMMHJQFIOYHETMYGXSOHLQSYJQOSSITJVPLA");
    msg.lat = 0.759089468397;
    msg.lon = 0.40989490497;
    msg.alt = 0.75528270968;
    msg.heading = 0.714388002339;
    msg.data.assign("GGTZICERWCOQGVTMIYGCZXKJWTSDHGUUZLMU");

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
    msg.setTimeStamp(0.583331636219);
    msg.setSource(12435U);
    msg.setSourceEntity(102U);
    msg.setDestination(29185U);
    msg.setDestinationEntity(224U);
    msg.id.assign("MXPZAIGUDKWMEZQFEBVAKSHFYQDCEDGWYNAFLOJYLCQPOVZKXDLIVBZGBQHJJIMBTSVXBVMVQAYWENEHNPZKDWJKCLJBIIEDUOGAHJMZFDCVUANCXRXQXMWWJKNSDCSHRSPLOVVTNIQKAWYYFGLYXLVXA");
    msg.sensor_class.assign("GAYEHCMKTFDLOFHXQNUIZLWWMSIJYARSXWLJVTIXHMZBVBCJCBRSWOAUKZZEBSXCZIUEJMBJZMDFGHDCSNMVDYCUOPIVPSIDMYKEGHQRDFZTPVSGKRYLGJJRFQWVEDPPAZRZUFFIKATQQTUEEPNMXJFUQTLWNWACWLOHCYSPGUZIXPETOOJYNHNQFAQYKPXNWRHKRLJKGIDKVBOXDBNBAMREOOUXYRLVQLE");
    msg.lat = 0.212448926575;
    msg.lon = 0.23960941706;
    msg.alt = 0.643927644547;
    msg.heading = 0.838483840652;
    msg.data.assign("XPANQTSYRDNSUPVHJIDAQKYQSNXGLACBEBAUKJMMRGPUCWHIQFQWXPJCVKUIQAYMGEMBVUVQIPGTIOJLBZLRVWF");

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
    msg.setTimeStamp(0.851703847067);
    msg.setSource(11444U);
    msg.setSourceEntity(9U);
    msg.setDestination(3501U);
    msg.setDestinationEntity(123U);
    msg.id.assign("NFCDQNGRSJRMQYUTXGWJUGXIDQNFXZKTTOXZFEANSCEUBEWYEKYYHNNEZOBKZKJOIEQAQXVWRWRDVXPXMZQAXCUKYDIJUVMHQEPBYSLLDVBOSBOHAODHFGPZOGPHFSGJKACBLYPVURGFHSWGISZPHYPKUBOUHEQSTCUZANNRFHLLCJMRTMKGLWDWKAOSJITIFAPLZIRXNVYMETPUICLJMMFH");
    msg.sensor_class.assign("QBUMMXPBOFKCJMEGKVMWSZHNQRTWNFEXIJTJYXRCBBJJAOXDFSKLLUJQZPVOLEQVMMEMSGWDTSQCUGDLPBQWLOYVGYXFACTENIAFKGRXUGT");
    msg.lat = 0.363813962575;
    msg.lon = 0.54007264605;
    msg.alt = 0.526298322853;
    msg.heading = 0.296888931513;
    msg.data.assign("QGAFJWXFPISQSQDUVIDZOACUNSJXGEJMDZPXNGFSPBMERIRAMONISILQQHEGTYTFKUDUJXYLZQKXGHFURPNHEKJBRLGHTRWCUFCYPHZEXYORZBTOFWOWILRQOUFWMNLDAKMBMFBGKSJCOZJVVLIJAOE");

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
    msg.setTimeStamp(0.301673247159);
    msg.setSource(63631U);
    msg.setSourceEntity(123U);
    msg.setDestination(46104U);
    msg.setDestinationEntity(92U);
    msg.id.assign("WRDARSISQRLOULUKNXNEGCIJNTGHOZXOGZGMJWPHKQBRITLTCHXGTIWAPAKOEETBHMNEXFJPXCPAUFOJNTVFDISHZKXZZABVVJMRJLOORYWDWV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RLMQUHVSGLXMIEQMXOTWWFXPCIQDDFTUJNTLTYLOWAYVDDMKJCMHNMPLWQNQKBGYWDMHJLEMLBGKRTJSHCEUGHXRACDOATPOLKSXZDKAUQGHFDSNXBMQTZIIPNYGZFYYPVWFGOUCAAOYPWBSQPPNVUWSBISNMHRJVZEGCXFKOCIZPHGIABRKTEFLGBZZJRCRRKVOY");
    tmp_msg_0.feature_type = 27U;
    tmp_msg_0.rgb_red = 106U;
    tmp_msg_0.rgb_green = 38U;
    tmp_msg_0.rgb_blue = 5U;
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
    msg.setTimeStamp(0.442186683618);
    msg.setSource(57268U);
    msg.setSourceEntity(233U);
    msg.setDestination(45616U);
    msg.setDestinationEntity(54U);
    msg.id.assign("JINCODWPONGKQUPPJMLNEIPRYGCHEILABNWDSNEZYUYJPXGSYTZPXRVFJISRUUEDCQIDOBNYCBBDBZFLTOHLFAYWXFPBWPOMFGKANXUOLTGASFVKVJEHSKUHMA");

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
    msg.setTimeStamp(0.734469972045);
    msg.setSource(1701U);
    msg.setSourceEntity(4U);
    msg.setDestination(1441U);
    msg.setDestinationEntity(175U);
    msg.id.assign("BHRYUEMLDBPJOPNZEJVHFSIPCZQQAFUHQR");

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
    msg.setTimeStamp(0.873779415308);
    msg.setSource(38414U);
    msg.setSourceEntity(230U);
    msg.setDestination(18940U);
    msg.setDestinationEntity(244U);
    msg.id.assign("XQNYLKQAKTMOLLQHG");
    msg.feature_type = 47U;
    msg.rgb_red = 229U;
    msg.rgb_green = 216U;
    msg.rgb_blue = 100U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.26113858476;
    tmp_msg_0.lon = 0.20912968842;
    tmp_msg_0.alt = 0.804547560093;
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
    msg.setTimeStamp(0.0197077459701);
    msg.setSource(41795U);
    msg.setSourceEntity(193U);
    msg.setDestination(32412U);
    msg.setDestinationEntity(249U);
    msg.id.assign("TIYBWZRVQUJFSPZWVZCECDYEOJUMQGTSNMYTWQKIMESOZMOOLQEUWKSCRMHDSUCFCVG");
    msg.feature_type = 82U;
    msg.rgb_red = 27U;
    msg.rgb_green = 68U;
    msg.rgb_blue = 12U;

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
    msg.setTimeStamp(0.528771875588);
    msg.setSource(27035U);
    msg.setSourceEntity(254U);
    msg.setDestination(53393U);
    msg.setDestinationEntity(139U);
    msg.id.assign("SZMPNAXOAKHSBWNBFUCLUKQJHNFGVLEKHQFEAAACLPTWTRKHRBYLIFMHCQFNWZMUDZZSAVSEYXJJOZEOTTOGXGRTUKTTIMCDLFWMKXKMSZFGEZHCPCHXGMKJDVXFIJBQRZWQHGFBHPPOASYZGRAPXQQWKMIWYONAEHDNDBEEVTIVRJYYDRZMVSWECNPFXY");
    msg.feature_type = 42U;
    msg.rgb_red = 75U;
    msg.rgb_green = 73U;
    msg.rgb_blue = 9U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.974255842287;
    tmp_msg_0.lon = 0.913837452269;
    tmp_msg_0.alt = 0.0197828771777;
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
    msg.setTimeStamp(0.208800858);
    msg.setSource(29795U);
    msg.setSourceEntity(10U);
    msg.setDestination(14803U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.0827961025525;
    msg.lon = 0.965402306241;
    msg.alt = 0.245765981134;

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
    msg.setTimeStamp(0.804935267299);
    msg.setSource(63578U);
    msg.setSourceEntity(235U);
    msg.setDestination(4760U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.847313186495;
    msg.lon = 0.833145765804;
    msg.alt = 0.460038465278;

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
    msg.setTimeStamp(0.316085575481);
    msg.setSource(29286U);
    msg.setSourceEntity(109U);
    msg.setDestination(65231U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.245991799451;
    msg.lon = 0.333953044011;
    msg.alt = 0.0214279594616;

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
    msg.setTimeStamp(0.630644867448);
    msg.setSource(4418U);
    msg.setSourceEntity(36U);
    msg.setDestination(63183U);
    msg.setDestinationEntity(157U);
    msg.type = 195U;
    msg.id.assign("KWRQRQZKRFVNCKMOEBYTFXYGAZIOVZUTEMLIEENHPXYXNDPEQBUBMNXOGQDWIYLAAZIWLJPBJIUJQFQGDSUWVHVJXSFULAFFJWKIKSUDMOWVCTNUUIQYRDMDMCBGJPXSFIKEOKSYDG");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.756731215147;
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
    msg.setTimeStamp(0.860926017694);
    msg.setSource(25596U);
    msg.setSourceEntity(70U);
    msg.setDestination(44209U);
    msg.setDestinationEntity(5U);
    msg.type = 52U;
    msg.id.assign("XCPLALOOPFHZSQYQXQRTYHHDXAMPLKXCFBYBSVUNMVUBZSBUDVNBGWVILKSLUPECLJN");
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.860133954276;
    tmp_tmp_msg_0_0.lon = 0.51059066634;
    tmp_tmp_msg_0_0.height = 0.580372523487;
    tmp_tmp_msg_0_0.x = 0.00450739865265;
    tmp_tmp_msg_0_0.y = 0.593230344674;
    tmp_tmp_msg_0_0.z = 0.145245648277;
    tmp_tmp_msg_0_0.phi = 0.0651842597648;
    tmp_tmp_msg_0_0.theta = 0.196156688649;
    tmp_tmp_msg_0_0.psi = 0.428336040176;
    tmp_tmp_msg_0_0.u = 0.512862235428;
    tmp_tmp_msg_0_0.v = 0.464835491016;
    tmp_tmp_msg_0_0.w = 0.0491681545468;
    tmp_tmp_msg_0_0.vx = 0.934892705242;
    tmp_tmp_msg_0_0.vy = 0.279431133657;
    tmp_tmp_msg_0_0.vz = 0.116548929373;
    tmp_tmp_msg_0_0.p = 0.179091031195;
    tmp_tmp_msg_0_0.q = 0.321252283011;
    tmp_tmp_msg_0_0.r = 0.951178612133;
    tmp_tmp_msg_0_0.depth = 0.24301096659;
    tmp_tmp_msg_0_0.alt = 0.348309737508;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 39U;
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
    msg.setTimeStamp(0.05342041114);
    msg.setSource(15698U);
    msg.setSourceEntity(116U);
    msg.setDestination(2166U);
    msg.setDestinationEntity(78U);
    msg.type = 154U;
    msg.id.assign("OGCKWSAXBPJUKUPEISUJXXNOBLXQXEOCSITJC");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.00520155234698;
    tmp_msg_0.lon = 0.101440920352;
    tmp_msg_0.z = 0.0819461734141;
    tmp_msg_0.z_units = 64U;
    tmp_msg_0.speed = 0.130334313151;
    tmp_msg_0.speed_units = 154U;
    tmp_msg_0.abort_z = 0.0373195536388;
    tmp_msg_0.bearing = 0.850583057114;
    tmp_msg_0.glide_slope = 183U;
    tmp_msg_0.glide_slope_alt = 0.241801342058;
    tmp_msg_0.custom.assign("DQXYYPKRCFUTWTYHKQGLQJVRYVKLYHRFRJZDPDWGYFJITANVMXDYOWUUHBQSCTI");
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
    msg.setTimeStamp(0.583833831397);
    msg.setSource(27555U);
    msg.setSourceEntity(20U);
    msg.setDestination(4685U);
    msg.setDestinationEntity(201U);
    msg.localname.assign("DLAKAHKEZKXHTJZNQXKKPAZJPSLEJOXDQNQXURYOMMIBKVANUAWFYTUVCPLJQLWCSRDWXORWXONRFZPXDWATHGZPJUVYDKQQWMGARCFHFSPMIJTOVHEONRSDZBVDZRBIEVRYWQEFTIAATBTZPIPHBUSSHFZPFYGNYGRBLGVWJYKZIYMEVONLNXCNNOJQTYMHAOCBKCGLTQXEQEFVHMJMSSBCOCLIUK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JIQUHFFAOKKIUAPJGXAVSBPKGVRRTLSQZHMRYHGNVNQOKGGKIKDXXDVQNJMNEPYITYYOPWAORGTDXORFMLA");
    tmp_msg_0.sys_type = 214U;
    tmp_msg_0.owner = 20665U;
    tmp_msg_0.lat = 0.802769844509;
    tmp_msg_0.lon = 0.6592276445;
    tmp_msg_0.height = 0.187029962431;
    tmp_msg_0.services.assign("PIJLBOVNFVOWIMJDYBNJSLWJGK");
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
    msg.setTimeStamp(0.716915565387);
    msg.setSource(15322U);
    msg.setSourceEntity(49U);
    msg.setDestination(8829U);
    msg.setDestinationEntity(247U);
    msg.localname.assign("MGNGOIASFXESISKGRFRYIBLKBMUVWSWZKEHVPLSQWDDZCTFJAVQFDHVPHSPYDKWABMTQCBVNFKJRNUFUOUCPZRYQMBJXXGMWUFTXZUJQJSYAGPJHJGCLSOVEEBJIQRBGIOEGHHOXNZRNZOFLEINHARLPNIBCYHNLDPCAYDDMP");

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
    msg.setTimeStamp(0.597719983499);
    msg.setSource(20930U);
    msg.setSourceEntity(93U);
    msg.setDestination(30859U);
    msg.setDestinationEntity(139U);
    msg.localname.assign("LCMHDLNGKHHJWREWMWXZAMZOVSHD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MPJCYKLIBJOSQYGXOABDZDAFGSBDTPWLYQXMPNNEUAHDQDUKGBUDVKLLFBKXSIIOVVKLYCRJMDSFQAMEIEEFQPFKAOSJHILXWUUJCTANLVBWQXGJGRLFJJPEFOHCZSWPVGRVREPZZPAVGQKBOSBTKVOBDVCOHNNHQMTHBWFKZTCGENMUZWZHTU");
    tmp_msg_0.sys_type = 26U;
    tmp_msg_0.owner = 50121U;
    tmp_msg_0.lat = 0.768241035374;
    tmp_msg_0.lon = 0.439749828277;
    tmp_msg_0.height = 0.823357626651;
    tmp_msg_0.services.assign("ADRWFTNAVHTOQWUMCJDKXVQIJKGZEGDWFRQAQBIYMUUWWYUNPVLMBPWXI");
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
    msg.setTimeStamp(0.389694684948);
    msg.setSource(3040U);
    msg.setSourceEntity(165U);
    msg.setDestination(7592U);
    msg.setDestinationEntity(42U);
    msg.timeline.assign("URKLISHBSUKWQURWSFMXIROBQBVNZDUZXOZVCELPHYXKBRCEEUBAMUPNJMVOZFAYXCJIPEYNJSZUGQRVGATPYFDZKNLQZNEGKTFJZJNVQYUAFPSYRIGBDXHWPEKIAPVWMOAPZXUENILWXDGKWQZILMDYLDEUMOTATFBXQCAFVAJGPKMBYQFYHSCHHYCGBGRILTAORBOJWSLPCMRDHRVOJLXOCXSQTNGIFCNMTVKHKD");
    msg.predicate.assign("GWLPGVTXYDPGSTJBXAPJTOQYOGYZYLKJULKEVILHEXUIFBIYZOXZQKPZHBHHEOXJZRFKUQCBWDYUEOWHCWLIATLJWIXQDRFDIFNBLNGWFBDRGRZFDYNVFHKAPRSGLEGMUFBEOMPOLSOCWTDKBAFQNMXMEKSYARCPVVERRZPXWVSPAUKDSXVYUCNC");
    msg.attributes.assign("TCOAEFUSUMTLMOZWKHVEWJAXJWQZUBHWIZE");

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
    msg.setTimeStamp(0.961253747347);
    msg.setSource(27246U);
    msg.setSourceEntity(90U);
    msg.setDestination(26269U);
    msg.setDestinationEntity(178U);
    msg.timeline.assign("JYXIDMJNTUPYXNFBNUERBKEKRMPAZNKYXGWKWOGTILUSVXTAJCHMJAPPKVUIXMOQWDSSUFELFNUYIDFWHCZNSMQKWSPUHAPSBOACMCBDVHGLBHJDWXRTUVOGHTYXOAFUMRNZQZYKEIELDJFGQGKVDHZCJHBSIDJCQQWPWXOOFEYNIAFITRGUELQPLNHZDFCEVATBHILKQGBJMLGBZTBCYMVLOCASGEXZWTRAPNRQTYVPCSMZO");
    msg.predicate.assign("PNXNNIUANVIHTXYTUEYKFEJYADKVGWRIAXGURSWQZMOIRVAHWNHLUIKIDDYQOSLEDZGQELHHPTKGBCZNBLONAJMOAZOMTTMQRREVFQOXUJYXWPAQKDZSBBTKFSVESTMWNCBRCPJRMYUMOVCKBZTCDRJGOQCTSKXOWJIAEXVZFUFBGYKSEZFDCFGOHQEDUSJYPLCMGFHYTWIXNRDBWULFEVYXQBWKGUJLVSJGMDIP");
    msg.attributes.assign("WOWFHWZFYRWPFMTKEWVKEKFOZLJXLOHJBVLZDGEHCAJCSDFPSAQCJJBNOFAKSPXYVYGTZQUMDPEVSTDXQMZEHICLVGSDTCRROUN");

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
    msg.setTimeStamp(0.540655722301);
    msg.setSource(45856U);
    msg.setSourceEntity(51U);
    msg.setDestination(33647U);
    msg.setDestinationEntity(135U);
    msg.timeline.assign("JUATRFHQNQQOKLZLIZWDWZGDHWHJIYCSUGMSBDQBPQAPCUWCEYAUZLZIENRTCVOUSFGTRZAHIHEMCVJFZRJERTKTKOQOYSFHKMEIPXAXNVJSNFDYGBPGMGJXN");
    msg.predicate.assign("UDMJHAQFKZLVAWFZBFCSPMXKFTLXQYILJJUSEENCNXJCPNTWCWDKUCFKESNYBMRKFRHPKSHOQEAEZZGSJRORKVJWIRXSVRYSKGMQXLMPAQTLGYGDYOUDUFFNEGROVSHPCYGENFOOBEQXJRITVMPQGVBNAXWIDAFIZYHYDACUVGEABGJTHMSWCQ");
    msg.attributes.assign("TXRGBRSIGXTECGMGUONZUBDCLUKGRZSQIDJBPUHSZKTWQCNDDELMOASQPQBYML");

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
    msg.setTimeStamp(0.243782618441);
    msg.setSource(40325U);
    msg.setSourceEntity(193U);
    msg.setDestination(60988U);
    msg.setDestinationEntity(112U);
    msg.command = 70U;
    msg.goal_id.assign("ZYDRHLZDSAXBIXCPUKVVPTKTTBJEBPXECAWFPIFWROTACOWXBNCMCWWZCZESSRLFESEORTYOJMUDHKAAYTZYIQQHJHOKRXNHIGWDGTSCVFFFPSJMEKNIELUBAUDSJOBVIMYNWKGWPKVMJPQFLZURAJXVHIMTFOYNGGQNLRBTMGMSKRKQLCFGRHVTQYJBUZLZKDMHJXIPVDCAOSDXPDQUZLONEGGGBENUYHYANQVLXLZMAWNPHIESYQOFDUC");
    msg.goal_xml.assign("TBUFCNWNYJVLTMHXWFYQNBMCJLCJUOMLOHSQSKZILJGSUTPUXZKRNTJOVGJRZPDSDOBADZTEFHMPGVYWPWGWNHKDKOVUZAFJVWKAEZKPYAGANBAOSOYRIXCIRXHTUF");

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
    msg.setTimeStamp(0.440056512408);
    msg.setSource(38033U);
    msg.setSourceEntity(202U);
    msg.setDestination(22653U);
    msg.setDestinationEntity(228U);
    msg.command = 151U;
    msg.goal_id.assign("NSUPGMPMAOCEJCLNXBVIOIEQLGJHTXESQUHTFCATQICDWJJDTOHFZXUE");
    msg.goal_xml.assign("CMGZTAZVGWYOJEUHCQTGADIXUPTXSHVDKHISRJWCRQBGKBYBEIGFMXOAKXYVNIPLYDLKOWAROVFHRPYHQIQMLUGXYOYKOFDUBLQDEDVLMYIRWTWTBSNSNFSEVXOSIPNFJWMIXJOSRIZZAEZNXQDUOEGJRNWCSAULVVRUYNZKHHXGCBPLUFFQETDRGKKMKTYBPMDNLLA");

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
    msg.setTimeStamp(0.745196886165);
    msg.setSource(23909U);
    msg.setSourceEntity(92U);
    msg.setDestination(32885U);
    msg.setDestinationEntity(24U);
    msg.command = 116U;
    msg.goal_id.assign("XLDNFXGVQAWCSAGDSBELBGZOHTPUFZMEDCLYSMTEDXZODIZMQPXITVKYNKWBJ");
    msg.goal_xml.assign("KUYOIGKIOCFSVZHELKLXBTUTSTTVMOYWXTZSMURJZIRSMGUAHKNMER");

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
    msg.setTimeStamp(0.268645210224);
    msg.setSource(45793U);
    msg.setSourceEntity(140U);
    msg.setDestination(45443U);
    msg.setDestinationEntity(134U);
    msg.op = 241U;
    msg.goal_id.assign("KGPXKYEACJEWEGIDMMSWSBBAQEQCXFWHJDNOGJHZURDVRPRTFZIXGCPZLNBQQYKVBJUNUZAOGJCUXSMVFHIUTMZUGFLZSGIATVEWDAIEHXKRXQURPLTPAPLNMPJJQYFIBXE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZSWUDXVXXMIDXYWAWWWOGKOVSWDGSQPKIRASTXXBBBLZJKEKMUQBGRKAYXIHDVXLCHELIFQFUMQASTYANDDSEGMRLACLTJXRNGFQOKFPFEVPFEQOLJYZZAPCVBEBRRQPNQDSCPJCMGURHAQYHVRZBFXFHNZTWGLIOYMJWIUZBMOLYGINDTTKUKNNHMVRPIJIFAVPMJKZMODJRLPTWUYFYEHUSDHVBTQECWZTHIOGGCLNAHE");
    tmp_msg_0.predicate.assign("AHXLPGZVHGVCKNHUTRCWEYDACGOUCMPFICGMDOJBQAXQCXRISLYDUQKRZIBTHBJHVNPYDKCUPYYWBWGTYHCAECEWKTEXTVPGJFNLGLZZIZLPGQSVVUOEJRBV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AXCBEWTUOSIQFDDMILFZTXPRJOKMVFEQFAUBT");
    tmp_tmp_msg_0_0.attr_type = 148U;
    tmp_tmp_msg_0_0.min.assign("VOUBFKLMRWPDSHTISOORHVYKZMVGQOHCYWLBZUADKJIYSCGVVAKATVXQNEXEFCLQRXENXVQJHOGUZQMDHQWEABZCFATMSCGCKWJFIFLHWBBDKSRYPSJCYXZSOMKSLRPHFNDOIQWDBWPCXTELSRRPLEFSZXKUJYBKIETFGTLVAVKPURHCIFQYJU");
    tmp_tmp_msg_0_0.max.assign("PQUVKTIRTLZPZNUAHKGNKCCMOYNOAFECOSPTGVZJAPDXTGYMAXZKRKGVQUEFFDQXSYGKULVVSAEJETZF");
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
    msg.setTimeStamp(0.540951871925);
    msg.setSource(26722U);
    msg.setSourceEntity(72U);
    msg.setDestination(39042U);
    msg.setDestinationEntity(6U);
    msg.op = 104U;
    msg.goal_id.assign("MTJLGQCQWWPVZBXTWFPOEHTORTKMKXFUNRWJXTAQSLWYHVMNPVDNVSGZAIERXDBFFZMKCTIKOAGWPKQNBXLJXMKZYMPHILAMTUOJCEDWXUACOZYBEEDGIWIYJAHRTUCNBCJAYJFMDVONV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AJBFUFXELIVAPNLQRAWRBWDRNBNRNXYTOCSIMQLZTDDGOANREFGYFUEKGVTEIQRBRGVSYUNVKANUAATMXVNZJSJPYPEPSDMXHUZHQWVGEZLTHQICXMQZZFKTNSFGLWVYBWGFKCJOHDSOYPIQCPWEZMPBHDPOSLBFJTEYFBPEUKKBZUZSLQAHIHQJMXHQWTJLYSUKO");
    tmp_msg_0.predicate.assign("XERLRAGMLQBRZGXQCNEMOIIMYEADSNEHSMUXRFNDUMCFOQADCPVYSZXJFAFLOBY");
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
    msg.setTimeStamp(0.771434906386);
    msg.setSource(9160U);
    msg.setSourceEntity(253U);
    msg.setDestination(13615U);
    msg.setDestinationEntity(51U);
    msg.op = 158U;
    msg.goal_id.assign("IDFRRVNODBZBZIMEGQQHHFMULCFPRQIRDKLCIQYUBPBPSLQWUDZARVELKAHTNHQOFBOOBFZVJWAGRDENHSCUFXTTWDXMKRYLZFYGCPIWUPLDGZHYMIGERONERAJKBUWJTKULYSPWNGEKNDZUMMYCVSBMXOCOQCXXBKJEZXGWTIPNMHRATVQAMXVJJUGOTSJYQZVULFYPSQPAOJJDWNTNYSFETCPESLALGSJWICVOYKXEBMKFCN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HGYCLYVTQCMPHGLEVORUUVBGOYZRPEJYZXZRTHPWJUWQQLOJUNIXJSWCSNFGNAUVMQTYSSBHZLKMONKMYKMOJMROESTFCLAOHWGIUQYEPFDPMAHWOQLXQAKEDHTXLRALIKBPBAGEUPBUMFSZFWDNDEXXDRFMTWCJPEIUDIYY");
    tmp_msg_0.predicate.assign("GJZKZOLWFWNTIEQYUJGAUDDVNVOZTKHEKRFDIFUVITRLHQUXUYIPHITHNXMCNJYQXBRWVGVHJPWPBULYZSVELUDILDRACAXBGAGHRMVMWWJNHNPFNGGQCBSDQOQKZSEFIGOBBINMCOKHFJMOSSEEASMTZSVGZBCZDWMPYQXXCTVDPBCDRXICBQQORSMHEPBLEYEJFTKVCHAAEYOTGUYYKPCXAOTWSSXARLJPRFLOJLTZFQXI");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AOUOYNNCZWXUUYQJIYBQQPFAFICDYWRGLEVSYVDCAHHJLKYKLUOXBALAGJEBPXPVIVAHXPCGPONZACMKBHKRWQUUZDVTVHBFPTCNDFHXR");
    tmp_tmp_msg_0_0.attr_type = 18U;
    tmp_tmp_msg_0_0.min.assign("YWZJDECIOGQTYMHEWTRDATWCRZAYFAUWBFTSLRQNY");
    tmp_tmp_msg_0_0.max.assign("EUWEOIIVVPVJNKUQSBIAAPNCBOMSJQCICROMHGBVFVYUQRWZJYGBEOGNIPYQHSMWTWGBEQFZBEMWJXZRRYYDTPLAWECANGNSZBEYEXORTFPKRMLPBODXRITMVZVGOXKCWVRKLXKNTSWSYTMDJNPDTQGRDZXOJXSAHZXQCJHLNHHLNUOHACTLAJETWINSFUFDCMRUFXDDDC");
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
    msg.setTimeStamp(0.922567776346);
    msg.setSource(26306U);
    msg.setSourceEntity(209U);
    msg.setDestination(4700U);
    msg.setDestinationEntity(106U);
    msg.name.assign("PERHTKGMXKSPUJTJXHMIDVXJYGYCOQAJJNCEMGQPNUELEDKUPEZJCTDFOKINBMBYBUWCAOQUVYFSSGRHNGZSVPLAKTQYUDKATLBUYDURFWFJMBEMLVTSLAMNFWAGMEBOPXQGGQOHFDIGBIUCLGWXCHRFIIFLJTKZNPVHTOWSRAYYBDHOPAQRHXZSXZIQSYAIXZTKRVJHZZXKVRPHWWNCIVICLTVEPZOONNBNLUFCFRD");
    msg.attr_type = 12U;
    msg.min.assign("VXWDHHRJYSPAINABTJMKCDBVCYGJPXKBSZYJTUT");
    msg.max.assign("RGLBJTCVMYQTQOYZQBMAWJGKXGASADBNDFHIEUPEPIZPJWDBCKSJXLPOGKVYQYTLVYBARUUZDKJSMLEOAREHRTOAXOVXOPHCFQDELZFWTWHBINWCGWJNZAQEWFABAHNJUUYRHSBZLBUXMLGGTOSPUDSXCALLNKOFTCXVYIDYEWNFYDPZFRDBPRFMDCGMLQMUNOVVMIXHKKGNGJRPFIKZHNWEFEWESZKRHMSIJYRQSQVZTXOCUVVHK");

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
    msg.setTimeStamp(0.431923479624);
    msg.setSource(41705U);
    msg.setSourceEntity(205U);
    msg.setDestination(41634U);
    msg.setDestinationEntity(208U);
    msg.name.assign("PFWGVONDNQXAOUEPYBVMRJAJJNQIOIRIGXAMVUFGHIWEDWTUEJGSGZTXIQURMKYKPXGTILOBQITBDDZDUORSEFNTSNTRYMDFHJHELGKFJFNFVBAWBNONMNYEYRPZCXWYBIMBSBKDKTUUNPTQPHSKLJ");
    msg.attr_type = 232U;
    msg.min.assign("UTOQMSTFGHLFWWOULUIHXYOBKWSGYCMUCKXAWXNZOEWECRXNCSEHJEDZQWCYJNIIUHJNSLGGFTWGZWHHXBSMJQWVELQHTDDATRLDHC");
    msg.max.assign("RVKIDOOUKFHVTPLLRICIENFLKPJGAYDGJLYRASQOCHPAZUZXGXMGDXVUEYOBLQMOPFEMBTOCFHKESBAWLVQXWBNIOAIWZZTYKBJQAPRVZMWHEUFDRNTZSVGNCJWGEZQNIJLIRXXYOERZBSPCKICMAESDPIGTWHNJDKQBSBWUQTZEQCMDXFHNZDYCS");

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
    msg.setTimeStamp(0.367246167143);
    msg.setSource(54647U);
    msg.setSourceEntity(29U);
    msg.setDestination(63623U);
    msg.setDestinationEntity(244U);
    msg.name.assign("FHNNLUMMBIPSMJOIBNAVLEGMYBXWZGCETVYJKACERMLVOWLJLZUIQKCRVSEFMFRFHWCPKZKBJDDDESEFITVBLKZOLNRIHPEQRARQCSVNTHIVWHTLBKOWKGTYSSBGZAGVDZYUEQAAZX");
    msg.attr_type = 99U;
    msg.min.assign("YQESQRNKEYSIGQFCJWNCKEHUUTNXLWEXSZOYCJGMJZUNAGCSZSFQBFKOPBOAAHFVZHZBFBHVOIERXZDYTKDQWRRCXXEMIMLCHKNIWVJSYJTPWBZXFYDDTYIJQSO");
    msg.max.assign("KDQBTFHQCNBDTSJXXQKOPKDHUDPFAKGUINSIPRWGZVBZKHTCDYIXWVJJOJERVRZPZIFGHCGAFRVIFFASUJBDXDQMXJGPUMMGJMBLHMUYCFZOTLAM");

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
    msg.setTimeStamp(0.666424643121);
    msg.setSource(4743U);
    msg.setSourceEntity(119U);
    msg.setDestination(20879U);
    msg.setDestinationEntity(78U);
    msg.timeline.assign("EKHBDCTZTYLGWIFWRTIJDDDOXCIWBUAEN");
    msg.predicate.assign("TPXTOBYZVXACSWDDMITXFHABSLOUPWKLKHOFRCRENARQYFCAJCGCCJHOQILXGPWAIEAWVJBNCWONYTTFGVRGSQKQZUUBTKEYWXBWYIAYDPFIPMKEAWX");

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
    msg.setTimeStamp(0.00143334146207);
    msg.setSource(10708U);
    msg.setSourceEntity(11U);
    msg.setDestination(2068U);
    msg.setDestinationEntity(167U);
    msg.timeline.assign("KHTUGVEOECRBJHMHXANVZACN");
    msg.predicate.assign("HKEDLPZDOPDFPJARZCHINPXRZ");

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
    msg.setTimeStamp(0.570685941129);
    msg.setSource(1077U);
    msg.setSourceEntity(145U);
    msg.setDestination(46673U);
    msg.setDestinationEntity(143U);
    msg.timeline.assign("FBGFAZIDHFNCCYUZPHDAAUUBIMRXEDPOPPLAOJWUMAAKXGWGSANPUTOWAFHYMLKBIATTYRDAWHYSWVSGRDXVRFEJBXTUSLEYRZHILHCZNORKOCYXPUSYLTPXQQKUCOQENEDYXLFNOGIQFBGOXCUZPZUKCFMJVDKQSEGPDIMMEORWBBKQJCKLZJJBVWZGQVMW");
    msg.predicate.assign("VCBZRZAWDXJMZUORHYMTCXOQKWWNWPHTNESIAIQCJYWSMKFUPZGMCYSDTHHQETZKPDCERLFRQOWIWYCVRYKTFNMAPNBJKLIKKPVXYLJJOUBTVORVLIEFILDYQXMLZLYRDESOEGRCFXEDVNFAJIMXC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IRWJKZRZVLKAKNQEXLMQHOYTMYNLSC");
    tmp_msg_0.attr_type = 27U;
    tmp_msg_0.min.assign("NNJAQGRNAWGE");
    tmp_msg_0.max.assign("IQIDLAXOQDICFVHXVXTWDIPWMFLRRBWNYCEMXDRABVBWAWMCQHTOOZYZGQRRVKAUFYGGUWHEGBYASOZHUKDXJZVKZEVPOGFURGLPDAPYDOWTFMSYMN");
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
    msg.setTimeStamp(0.44788724957);
    msg.setSource(9784U);
    msg.setSourceEntity(24U);
    msg.setDestination(53853U);
    msg.setDestinationEntity(214U);
    msg.reactor.assign("LETPYAEOCUSBFLMSBTNDKGKHQPINFMTBJNNHZQYUWADDJFIWHWQNYDIGQRALZPJOEMMXJXUVXOBBHOJPTLQQFHNALJZTACLYDFDOMNIYRIFXUJWWVG");

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
    msg.setTimeStamp(0.37504786624);
    msg.setSource(33604U);
    msg.setSourceEntity(84U);
    msg.setDestination(62411U);
    msg.setDestinationEntity(36U);
    msg.reactor.assign("JVYNKNLNWUFMGPPBRQULZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WTPQOWRBFFYMKJKMOXCLIYLMMDQPUTNZZHRSCHQRRYXLSUFYJDBJIZFFXUGRKTSKDCCKCQIKVPPBGWOGWYJWKUUFGVNNANBBZXXXCDPNEMQNNERFAOWOVZVQHBVQQAJVJOXABCRNDTLRSMVTSPGAHCRLYIFZLHUEWASGEPYVHKHUIFNIAILUFJUYWOCVAPHZEBSVXEEKTRSZJJNGEADDPT");
    tmp_msg_0.predicate.assign("QNMXUJEIVQCCBXCJZUUJCTAPQIDYXIKFNDRDJFTYRAVKEIBHOHHWZQMKGPOMJFRWVDPWIAYZYFSIKZTHWXSJSAXWLURNPKCSTWPATGZBRUQEIEEBJRBPZQKNWBSETYHPAYQLEZAKTCIWQGZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DIYAPFSTGBMGNHVLGGXCBNUSDUDIHZOLZDVQLHAYVIKRLAFIQPDKZDMPKWOWIWOFUHKSNAYYYMXIBLMQNXMYFAHAHTOZEDWULZCTHSEDRTCVPPVBUKCREBVJQWFRZPTBDBBJBZQEAMOFGTMNGKCSZJEURYNEPUKJRQOEXCUFKNSXBHTGDYRTJFPWCAWTAIXVSOONCQJMNRUVXUXWCIWQGTVJGVHLQQOWKYXJMPESHKEIRCYFRLLASLGFJJMX");
    tmp_tmp_msg_0_0.attr_type = 98U;
    tmp_tmp_msg_0_0.min.assign("KRGFOPJOBXZIRVYUUH");
    tmp_tmp_msg_0_0.max.assign("TXXHSZPCWUVCYSCJPUAAKLNKASVNCLOTDNKEIANWHDKVEFLUXKMQGCMZWVJNIWYRJHMZWGERMANYBWIZELOQIEYAEFZYXQFYHBMLPQVZKRHUUOCSKTGVNGDPEHBAT");
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
    msg.setTimeStamp(0.264955828406);
    msg.setSource(55447U);
    msg.setSourceEntity(229U);
    msg.setDestination(37677U);
    msg.setDestinationEntity(13U);
    msg.reactor.assign("CKAFMGVHASGBXNCKOYJMDOUQWBKJUSKAVNVPXIREKFEDYNVGPZHCAKVJQMUXFYIFXGCV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WMXMBSDEPWZCZLIMXCJRYBZFHHZOZWPQPIVVPYRSAUPYIEXUENAPQVNGGTDZLOAHOISQFBXIDSONQFQKQRIALGOEMFILKRXQRKLVYFFUFAJBWNTPHSPWBEWZKRJDAMJRCXVSGOKGDXUWGALRRECRZQMHFCM");
    tmp_msg_0.predicate.assign("MHEZNNRVIFAGJLISORAYOFTWWMGAHNJQSKMWJPUHBLMEXKIRUMMBOOZZPAVWQYQNTDKVEEXCRABLPGFNQYBDSXI");
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
    msg.setTimeStamp(0.40310966592);
    msg.setSource(64315U);
    msg.setSourceEntity(100U);
    msg.setDestination(4916U);
    msg.setDestinationEntity(179U);
    msg.topic.assign("CLRCCETVNGZHGWYWXMPINPKBHXTFNJYCFXJASQUVPMHQKAWSKGNRTLPOTLZEKHDVDVAJAGDFNBLIQYFXNHBNAKBCUIYRYMQDDQORZWXWNYUCENIZFQKZWYTITHPOZYJWRSBPYZRIBUWASEOMEEELJGXLUXLLTVIVRZGHBRRRQUCFESMPSQJAGSOJMUAXZCOLFKMIDUMUEFOODTJZBCSVPKIUTGYQVIKAHAVCS");
    msg.data.assign("XDDGCBVAEUXKGUTIOPLQJOZVSSYDHRWSLXJUCIGIXQXIFOCKZPVRDXVFSEOUATZSFCLFNJSWMGSCPFYBBGLNYVYIEPCMABZIWSXNBITHCUVVJKWHMZYNAQZGMHGEJKLEDMWQCOINVWKKAZYJKKMAQRSU");

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
    msg.setTimeStamp(0.659205426363);
    msg.setSource(26321U);
    msg.setSourceEntity(41U);
    msg.setDestination(55429U);
    msg.setDestinationEntity(38U);
    msg.topic.assign("LEUJACJKKFJYXYPZEJWQGXMSIENCVXOUUNDNULTGYLRGKPPHIKTTLZYAHHTBNXJGNAJSBDWILEFIEDJXMVWNIPXEPNOCVHZXALMWXAYKTWUNOKPOMRIMTLBAFBCMPXCVUHPCBFUNBUBTCCDSMRWHFRQQGHZAOACIDTJSMRQUQYFHDSGXFLSOEDLVODSYSRYZG");
    msg.data.assign("SXTSJOOBCXFQNJSLWUSMNTXPGLPQRHMYUESQLHIRRVPDYZJIANEMIWDPFGZGEQWKRCZDUFCTVCGZTBKDJUUVBSBNEQWMWHVSBTDHQOFDMOUACMKWFOXFKZCRGICWKVYFPOTJUIRYELDHKXOCYWXVLTYVRIHEOOLNDNVCLXSQYTJZYZBARAMBRLENUIFPMTHDZHNKITAGALZXKBJBAXJZEGV");

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
    msg.setTimeStamp(0.139493576099);
    msg.setSource(38806U);
    msg.setSourceEntity(166U);
    msg.setDestination(31145U);
    msg.setDestinationEntity(7U);
    msg.topic.assign("UTYNXJGUNGRAYNOTALJVQNIDXBKHLNAWWHGZLREQRKGTZIOVBNEFROPYJIZLRUYMOJKNHKODCWDDGTKPCMCKJMXMLERWHEBSRIAEFOISUMGDOIEQEQPCXVUCVSSJZHPZHRPKUQTTFKMGBLXIVKYAHSGJWZNMVWDTZSTCLVYQLBBAAYCOWPBIALFFXCCEDWNFVVFXFOPYMJ");
    msg.data.assign("NNJMXWQEQFYLVOFKYQGKIVXEXMKRJIXSTVIGRVPHXVLFMDJENJGEHLFTDCNCRTHDRXCRAMPYXEWHZOYWASGZKOUQABYWTJJPATCLUZ");

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
    msg.setTimeStamp(0.758431008866);
    msg.setSource(52130U);
    msg.setSourceEntity(171U);
    msg.setDestination(34368U);
    msg.setDestinationEntity(169U);
    msg.frameid = 46U;
    const char tmp_msg_0[] = {68, -74, -87, -51, -54, -68, -113, 24, 94, 0, 58, 29, -128, -17, 99, -107, -119, 69, 121, 49, 38, 113, 14, -39, 78, -28, 39, -83, -15, -33, -85, 69, -12, 44, -49, -87, -40, -87, -3, 34, -111, -102, -86, 19, 22, -15, 121, -51, 123, 103, 60, 80, 13, -11, 90, -23, -6, 119, 91, 10, -28, 82, 80, 28, 17, 63, 74, 67, -89, -40, -83, 42, 54, -10, -88, -13, -64, -85, 99, 41, 112, 111, -94, 23, 15, -62, 41, -8, 44};
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
    msg.setTimeStamp(0.821247728521);
    msg.setSource(10289U);
    msg.setSourceEntity(229U);
    msg.setDestination(64286U);
    msg.setDestinationEntity(83U);
    msg.frameid = 144U;
    const char tmp_msg_0[] = {64, 39, 58, -85, 37, 88, -110, 5, 102, 93, -74, -64, 119, 85, 6, 38, 34, 19, 79, -121, 92, 95, -41, 103, 91, 89, 54, -70, -81, -104, -123, 122, 56, 39, 28, 91, -33, -87, 84, 80, -98, -23, -119, 60, -100, 96, 28, 121, 67, -81, -39, -1, -102, 121, 58, -84, -79, -29, -11, 35, 85, -58, 74, -99, -116, 93, 104, 112, -10, -57, -87, 106, -6, 40, -79, 13, 30, 27, 114, 15, 91, 21, -55, 30, -126, -62, 12, 53, -120, 24, 98, -114, 57, -52, -32, 98, -35, -1, 34, 73, 88, 115, -8, 11, 46, 39, -99, 97, -118, -70, -38, -67, -68, 96, 124, -104, -61, 43, -109, -79, -77, 24, 10, -26, 99, 30, 77, -6, -115, 113, -53, 15, -25, -124, -124, -71, 76, 2, -40, -9, 31, 81};
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
    msg.setTimeStamp(0.331429741317);
    msg.setSource(32674U);
    msg.setSourceEntity(12U);
    msg.setDestination(32561U);
    msg.setDestinationEntity(67U);
    msg.frameid = 103U;
    const char tmp_msg_0[] = {-29, -27, -79, 91, 54, 96, -68, 103, 73, 76, 64, -118, -123, -6, 82, 71, -108, -2, 3, -22, 84, 3, 44, -118, 53, 100, 30, 115, -91, -97, 82, -1, 113, -53, -119, -98, -109, -88, 27, 78, 52, 66, -7, 21, -82, 108, -90, -75, 72, -51, -118, -116, 42, 121, 82, 76, -75, -97, -69, 80, -128, 124, -47, 38, -3, -80, -128, -8, 113, 75, 19, -1, -10, 24, -97, 64, -83, 91, 44, 55, -34, 120, -103, 82, 123, -97, 33, -112, -63, -117, -47, -87, -113, 104, 97, -34, 31, -56, -98, -48, -22, -8, -43, -94, -117, -25, 47, -84, 32, -48, -77, 100, -4, -127, 23, 38, -35, -71, 44, 13};
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
    msg.setTimeStamp(0.786731147172);
    msg.setSource(14598U);
    msg.setSourceEntity(77U);
    msg.setDestination(2953U);
    msg.setDestinationEntity(147U);
    msg.fps = 147U;
    msg.quality = 128U;
    msg.reps = 78U;
    msg.tsize = 7U;

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
    msg.setTimeStamp(0.820237411811);
    msg.setSource(39113U);
    msg.setSourceEntity(75U);
    msg.setDestination(36978U);
    msg.setDestinationEntity(76U);
    msg.fps = 234U;
    msg.quality = 216U;
    msg.reps = 136U;
    msg.tsize = 196U;

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
    msg.setTimeStamp(0.591653798296);
    msg.setSource(19921U);
    msg.setSourceEntity(63U);
    msg.setDestination(1363U);
    msg.setDestinationEntity(191U);
    msg.fps = 178U;
    msg.quality = 106U;
    msg.reps = 146U;
    msg.tsize = 99U;

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
    msg.setTimeStamp(0.994106531154);
    msg.setSource(8469U);
    msg.setSourceEntity(110U);
    msg.setDestination(57268U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.325458330193;
    msg.lon = 0.426468139656;
    msg.depth = 139U;
    msg.speed = 0.499283149488;
    msg.psi = 0.20322772571;

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
    msg.setTimeStamp(0.502552434611);
    msg.setSource(63859U);
    msg.setSourceEntity(163U);
    msg.setDestination(64634U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.894964016872;
    msg.lon = 0.103362812943;
    msg.depth = 65U;
    msg.speed = 0.833730639007;
    msg.psi = 0.572530491395;

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
    msg.setTimeStamp(0.351335554588);
    msg.setSource(5810U);
    msg.setSourceEntity(58U);
    msg.setDestination(28438U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.2794132809;
    msg.lon = 0.960493577169;
    msg.depth = 196U;
    msg.speed = 0.925720013165;
    msg.psi = 0.261503403337;

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
    msg.setTimeStamp(0.721984967618);
    msg.setSource(6723U);
    msg.setSourceEntity(78U);
    msg.setDestination(7447U);
    msg.setDestinationEntity(236U);
    msg.label.assign("EEUKIYCKDDCTXMFEJADDSSHDYHZHPKJXUTASUFSAAPPQBNZJLOLEKAFMDYPWBWMFMEBVPPKFULOQGNXVCQWAAEQSHRUFVMAZYNEWZQDIVLJZINDHGLICVQCUQRYGBZVJHJITTJDJCWWXLSTEHVBJFZXYDHBWKCRPSCPSLTHTEMKNXYOGBPIFMMAMOGGFISROACONRTHLIUKRWFNXBOUTGOPIZZXN");
    msg.lat = 0.816510453832;
    msg.lon = 0.315694279866;
    msg.z = 0.308415774228;
    msg.z_units = 152U;
    msg.cog = 0.765181835078;
    msg.sog = 0.171648529192;

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
    msg.setTimeStamp(0.125723442228);
    msg.setSource(60849U);
    msg.setSourceEntity(75U);
    msg.setDestination(35731U);
    msg.setDestinationEntity(196U);
    msg.label.assign("RFAEYNFBKGUYSLTZHGAZEIVUUTNWNTITUKZFIML");
    msg.lat = 0.399871648134;
    msg.lon = 0.578134281394;
    msg.z = 0.112873522672;
    msg.z_units = 153U;
    msg.cog = 0.751995304349;
    msg.sog = 0.511007217562;

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
    msg.setTimeStamp(0.0142737517008);
    msg.setSource(4192U);
    msg.setSourceEntity(218U);
    msg.setDestination(14885U);
    msg.setDestinationEntity(27U);
    msg.label.assign("GPVAWPHAKWMXBFXESPAQPYMFOLSZWFHGLENTHOTVSOQUIBYSSHCGKBEVKICZPYRAZDFMSNDHOUWKRCU");
    msg.lat = 0.971108595589;
    msg.lon = 0.944380419969;
    msg.z = 0.332109435268;
    msg.z_units = 8U;
    msg.cog = 0.963422707661;
    msg.sog = 0.0739564667432;

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
    msg.setTimeStamp(0.52078657818);
    msg.setSource(328U);
    msg.setSourceEntity(207U);
    msg.setDestination(38602U);
    msg.setDestinationEntity(184U);
    msg.name.assign("EWYFHDVWLKTTURDOXNSOOGYSGQACPDAJPEYZAANNTAOKWNUBTKBYUVULARMDVVYRCZBRIQTYDPNXCUKBZHSJPWJHFONVDVFHOGC");
    msg.value.assign("ANEUVGTGGKEXBTVLNHWMUGZAYGFMEMIPDKMSEXRPCZQIJBJTYMWXJEUZNNXKKOYPZDUUUMQDAIOVWAYLMAPLCKCHKOQFYPEAVA");

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
    msg.setTimeStamp(0.558154760863);
    msg.setSource(38544U);
    msg.setSourceEntity(216U);
    msg.setDestination(47153U);
    msg.setDestinationEntity(135U);
    msg.name.assign("BFIKDTWCGKTPKERRMZDLBWYZAGAGRIWYTQGDYXXUPNVMWPECVVCQFDLARZSHMYEEZLCPNAMPOAJAXIHXBSYESKKX");
    msg.value.assign("OALQTWPVREDDJNRVRXBUXPQMSOGZWAVGCLXRASNZCGGVSPTYFCZOXHJCJGIPUBGOWHQFAMMBRMFKKWUFLPHEOUGHJATNHHQAWWKEOSROPSNGSVWTMZ");

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
    msg.setTimeStamp(0.00793522838394);
    msg.setSource(40956U);
    msg.setSourceEntity(248U);
    msg.setDestination(58409U);
    msg.setDestinationEntity(200U);
    msg.name.assign("NEVTHIKKXJSYOYQTEIVPHZDHYXJGDENUCZMNJERWWKDOQZDSVUAAGZDJPPVXLWQWBSFYGCQCAYKSOHFAFWVHZOOMPRTUGIUENYNSYJNWSQ");
    msg.value.assign("RFTTWJDZZYOIWVDJRDLYBCVHIUGXHNWIVFPIHLEPHKTLOMDAECUVNPAXXFUNYGTFAUTZSYNQQUMCGKMZJUGEBLYYVZQOZQXKQEUMFVKTZNILELCFQPXKJXRBRZNHWFHNSHJBJUSCIQCBLHAWPWJKLCSGCJEDAVZKTMAGAMWWYPNWRCSGLBKOPGRWGPNIBAKVBYGPEYDI");

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
    msg.setTimeStamp(0.658443295558);
    msg.setSource(38731U);
    msg.setSourceEntity(90U);
    msg.setDestination(11858U);
    msg.setDestinationEntity(25U);
    msg.name.assign("XUESAHPAYVIJCXLSVOSGDROVEJYFDFCUHRAWNPOVATQWHEMBNWKFDICLIXZCNSWLWFHRITNDBNDJLQZEMAGONVDWVQOTDQEOFQISZEHTCAMYHAGK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EFCBFCJJADGWXNPDUKVMOQIEFPBRXMHQUZLQNVQSTBTCZLAOYXRWCSVPYNWWTJRDCLFHYKYSTMWLLNMXTNBUIMG");
    tmp_msg_0.value.assign("BSSDQCEFKOJYSPGBJOGIHKAEJ");
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
    msg.setTimeStamp(0.896254148726);
    msg.setSource(39777U);
    msg.setSourceEntity(229U);
    msg.setDestination(15654U);
    msg.setDestinationEntity(110U);
    msg.name.assign("ZYQBVRJAALSIWTJCFIFWXGSPUMCYPKFPKYRXEZUBAGRDLKPIETNZOAVSCUSNDQEDHESPILBRXLKEYHQ");

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
    msg.setTimeStamp(0.350567106731);
    msg.setSource(14854U);
    msg.setSourceEntity(213U);
    msg.setDestination(2018U);
    msg.setDestinationEntity(11U);
    msg.name.assign("INIWODJTPWOSCXKMSFZIRHPXGAUFPRIVWROCNOTCNTYAFZVTKKFPBIZYQBQLMJDDGNCHCTHVJXREOGQEFJMYKUQUEHORXZRSJETSLBLHLQTZDZWY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DUVVQEEFXHOAPMBTCEJCIWOBPVVICBRIRKICHFQMXTGNV");
    tmp_msg_0.value.assign("IHURNYQKCRREPJTYSEEOKAAXBFPBXZUICONIEJJLQKDCNPCGXMMFPSFZDBXWQIVMTHPLRSCWNLHTAWSRRCDZFBWJNIZCJHDVLYHADUAWIKYZVGQMQYGVIQFDAGFEEENAZVKXRMONPJSZUDOGKALS");
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
    msg.setTimeStamp(0.808247827856);
    msg.setSource(35566U);
    msg.setSourceEntity(156U);
    msg.setDestination(36737U);
    msg.setDestinationEntity(216U);
    msg.name.assign("YVLXIYRGYOAIFNQLDQWBPYKGKKINDPAPRMTQYDSMUEWBLNKIYCDYIGZMFWXUCIQLZHOHAGGQTPMQVOSVCIHWUJOBZXIPTVRFTFDEUAAURHJOEDHSMNOOTWNUMBLKHCQSOWLCSLNJMTERVXYWDHFNNUZNEXEBJESHXKXRGVIAKMLVMRSAPWZFLXYZZVUYCWBJEECONUKATCFJAPSSIFJGGTBXBGBTHQCZVTFAWJGQFZXDVJMRZDHRO");
    msg.visibility.assign("EMBADAAEBKECCQYFYWGKVYLXSPKPRMCPYRLAPLYQMERKIFCMJOSVHTOBNDBTEEYGWENURNIGZNPTCVAKOJGJIYPFBQOMNDVXRVXZZLAMTSNAJLGOUKGHKMNSHBUVZIUECFFKWPCIHCWMBFOLCSTTXTQ");
    msg.scope.assign("LXDJAFJZSELKTLAIHYLDRFBOEULLFUMREUYMVTHRQAEZUEWHPACUMBSMZQBSTZDGJRIPNBQMZVJYBYIJCQNSGNTUUZOYWOQZBQGXRCWLNZINENGJAX");

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
    msg.setTimeStamp(0.0102001028104);
    msg.setSource(34351U);
    msg.setSourceEntity(178U);
    msg.setDestination(34444U);
    msg.setDestinationEntity(24U);
    msg.name.assign("BGKTQEFCLXOVRJINEALOPOWZBDGNJPS");
    msg.visibility.assign("OXUDRQWBPHZLRFGVRXRQWCPJJUNZKWOKATAPDWEPQLEPPYJIDUZYOKZJYLXHSTWFNUHAYBVVQHTKBTWZXKXXASFSTGPDIQFTLJEMZXGCXGEMLAQCRBAAGUGVSQKKFBFWNUBLOWMJBCIDCVPVMED");
    msg.scope.assign("EMKEBCITXOMFLQBMZMQGORFDAVXMCJGCLANENOHPAPMUXAYIZWLCAVNXRZBTZHPVLN");

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
    msg.setTimeStamp(0.671156593871);
    msg.setSource(1642U);
    msg.setSourceEntity(61U);
    msg.setDestination(19123U);
    msg.setDestinationEntity(66U);
    msg.name.assign("OHGLNBSPUTIGONZFXFWTEIGCWHIAUJJNKEPRFZODWQRLZDFCDBXKBKOCCIDKLWPDKLPGRCEYLUHXAFNMLPKVPEVECDTWQDGYOFTHNWIKMYGRUJFDMEZVZXQJFOASETIZNEVHRXMUYOFDXRRISLMMMAMOWKU");
    msg.visibility.assign("HHDOZSPQWULUBJFJWYEEVQJVYXMIFSEWFZZJDQJRQHMYFNGNYBTJXNLJUQJMSCKPVADKLWIHTVKJPNGLYPRFZXNAYLLOMGWRKAGDXPFGZMBHWBTHDTEROIORIDLATMEZHCVQYGZQTRKUENIIAIYPACOUXGCJSUEQHRVSVXDUMFOLOWKTMBAPZBZCPSXGWKVSOTRYRFLA");
    msg.scope.assign("FXEZOPBNTOCFFXELEQUJGWHQBKEHJIUZBSLLOWMBGZEZSDUDXIMAPVWDQPVKLBICDXTWZKHPMNYRLWDMWEPAEGMSJGJYDQUGYFULFAJYIHQFUQMLQIAZAHOYHZXPRZICBQCPBTSIYKBSTRVKDAQKXDFSNYTRVULXLPYRZTUFHVTNJPOCSRAOEOEPBGAHVNNCKJTNUHFWTGXV");

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
    msg.setTimeStamp(0.471929862298);
    msg.setSource(53595U);
    msg.setSourceEntity(45U);
    msg.setDestination(42873U);
    msg.setDestinationEntity(219U);
    msg.name.assign("ZIAAWRGANHHTCIPETLSODWBVUKDRXDXQOQXVENEPFNLKZMLCTWRZQYHOJRQLLQMBVKTSIKCIMAHKOBIKGJYZZUOCUNGQRSFADPIPCUFNAPOMZWXSUXXQYEGGKSLHJTGEEFRDKNVNWVTBTYXFPXSADSPVLMYVRZBSV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XLHLHEFGFSTZSDQCQWYAMEPCQPKITLUNHAGYJFZNJHQHSYZIRLIUAHDUECRZPUXADRCOGCNIMDJVRBJEPRPIVZTODZMEVWXOELDYWATYNCDCMTCRYBUQBGKRO");
    tmp_msg_0.value.assign("TTWHBSESWKRHJSTVAFQAXCVAACEQPUDSCUZDDFGHSHKVCTRWWNNSFEMBJCDMQIODDQRBJQNPCYZEDBHLTTYIYILISKOLXZLXJRJBARDMMXLHNVEYBMOSJQCMWVHQEZNOKNFOBNKHFYYLKCNUIMXPJRNQKIWYNIRAXOJFTCQGRYVPKDWULZZEIBBLLCWZVDSMVZYFGU");
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
    msg.setTimeStamp(0.253516621758);
    msg.setSource(35646U);
    msg.setSourceEntity(138U);
    msg.setDestination(28220U);
    msg.setDestinationEntity(207U);
    msg.name.assign("KTZGBPHMPOSDZYCEOKQKCBIALDKFEFXAOAJUFRVWTTGCAXGLUAGUSECBCNOJEPICUIBWYQIJVSNUWYTWLKVGHNVDVSAJAPPMYRZHBMFPXIDHYQNFXVTAQSTMQGZZZJITLQDAKMNDLARFHLIYPRXUBFMTYGKFOQUDHV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HOQKWUTWJWOKWYMAIATTXHJZCKZCUIZOSHYXGFHLXMZUFIVXBMNUXWSFROUSWZMJKWPBKCOMVVPYIUQOSAONCEINKTABAPSYAXVKFZTRIYLPWEDPVTYYQELZVQFLVIJKSFOLCBLWXSEBHCSNDLFNEDVAOVCAQMZRJHIGNBPCMIGGJCJCNTIDMSDTBHSTHTAPWEJQKZGLFELKMGLRNJUQDPHDQYEDRQR");
    tmp_msg_0.value.assign("FKIZNGSAGFPRBLFEKJHBQFFUHYVRGOJTKTDBJDSGBCSJYWWCVGQYHOSLXWWEEKUXKKYVCEAZHAWDONOQVZVHWQUVOUFXDPMKUPTXAJFLURVYESMINPTNTPLDJMWQBKNNLISKDZRHEMBEZJPKFXCRDNCWORAMBEPJPMVWNINLILTPGUOIDTMXA");
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
    msg.setTimeStamp(0.139148516284);
    msg.setSource(10632U);
    msg.setSourceEntity(178U);
    msg.setDestination(17773U);
    msg.setDestinationEntity(142U);
    msg.name.assign("VNSWCGSMHZMLGKRIFEQCYL");

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
    msg.setTimeStamp(0.238248320458);
    msg.setSource(14903U);
    msg.setSourceEntity(145U);
    msg.setDestination(30936U);
    msg.setDestinationEntity(180U);
    msg.name.assign("SHZTHDKFHFOGWMTCUWCGFUSAUGXOPNVXDVUBOKJEMYMTZFVDBGSLDJLCUJFTRQKDINYWUNEBNNYYRRBAIPKWMDLJXVQSPCARDWSWIAJEJEXLZTCZTPUIOTKMTMBYISEXVFEQORZLHOCAYXZXCJSFQNHLPHIQZEGNKKEVNTOOLCVRJTFQVQQHNHGLPRHVLAHYKKLWEJPPMMEIAFYUDGOWBAMBMBZRIXQAZYBVCNGKFPSDZYRDIGCWSW");

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
    msg.setTimeStamp(0.727637256683);
    msg.setSource(33316U);
    msg.setSourceEntity(205U);
    msg.setDestination(42881U);
    msg.setDestinationEntity(67U);
    msg.name.assign("ZUQOWPGKHSYNFLOPNRRZYJPZQPTQKHXYVITGCRBJCVVRABIQSWYTJVPWAOPUYHFRMKNKYJUGIMDFNXNVCOQYEIVTZVABKPRTJPTEEVXLZOWIHLQBCGCLIKHGEKGIHTQEJMPBMUXADFNBHJXFSYFBSZDAGOCSMBMYCIOSFKMXMXBSJWWTZXVDDAKUVMAUWOWEEAZDLJRQRPQEWYSIONQFDGCHULUGGZDSLXDXTTZMRARSJWHUUHAFDE");

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
    msg.setTimeStamp(0.0230608295296);
    msg.setSource(37061U);
    msg.setSourceEntity(116U);
    msg.setDestination(50579U);
    msg.setDestinationEntity(52U);
    msg.name.assign("ISGMXWKEFVDUKOOSWQUGKPIPXZQTDYVOHZLDASJWOYLNJBWNFASELCUPFQBTTQVWJMPHOXMKMWYJKWABOQLADTCCPHKRUNMJIRGJUZXSKYYYGNBBONXVXISXVXPNZBELRRIAGCOVGTFDOZEATKANUBDRFEDQELIUVZMZNIZYCKKLBLXRECIRHBQUSDGGHCLQPYTYNQZCCBMHDIRJDUSQHNAHMPPJGXMYEH");

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
    msg.setTimeStamp(0.625507443192);
    msg.setSource(6015U);
    msg.setSourceEntity(157U);
    msg.setDestination(47818U);
    msg.setDestinationEntity(176U);
    msg.timeout = 3689460791U;

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
    msg.setTimeStamp(0.287516842192);
    msg.setSource(15267U);
    msg.setSourceEntity(251U);
    msg.setDestination(46009U);
    msg.setDestinationEntity(133U);
    msg.timeout = 463345078U;

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
    msg.setTimeStamp(0.236227120707);
    msg.setSource(46516U);
    msg.setSourceEntity(232U);
    msg.setDestination(50774U);
    msg.setDestinationEntity(15U);
    msg.timeout = 1889751921U;

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
    msg.setTimeStamp(0.988603461624);
    msg.setSource(21581U);
    msg.setSourceEntity(37U);
    msg.setDestination(8008U);
    msg.setDestinationEntity(209U);
    msg.sessid = 2095491139U;

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
    msg.setTimeStamp(0.198892326724);
    msg.setSource(47508U);
    msg.setSourceEntity(218U);
    msg.setDestination(41034U);
    msg.setDestinationEntity(5U);
    msg.sessid = 2234891587U;

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
    msg.setTimeStamp(0.656869238529);
    msg.setSource(4863U);
    msg.setSourceEntity(109U);
    msg.setDestination(57828U);
    msg.setDestinationEntity(193U);
    msg.sessid = 3524093318U;

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
    msg.setTimeStamp(0.107545611471);
    msg.setSource(38587U);
    msg.setSourceEntity(67U);
    msg.setDestination(37148U);
    msg.setDestinationEntity(129U);
    msg.sessid = 25708191U;
    msg.messages.assign("YOCSJIPVCZKXPBPLOZQBJFXWXAXLXCFPHNRRQVQDHKUHNDBENYDRUBYXIVIGFJOFENWMTTXAWEZBCEMWJVGHLUEOLDYIGSQIOHQRXRJTTLHRMCOPFQKNWVPSGKRFCSROQEZYPTMUWQJUCWVLKMWCZNGZAAHAMSIBZATVYVVILHJGRTSTEAXNYPJNJYKKQSDDMDHGCDYDSABIFPELBSTZKUHBLFUGOEIUFNKADMQVZPJBXNA");

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
    msg.setTimeStamp(0.853879307728);
    msg.setSource(37087U);
    msg.setSourceEntity(197U);
    msg.setDestination(1033U);
    msg.setDestinationEntity(80U);
    msg.sessid = 1170019220U;
    msg.messages.assign("TKREOUQTCLATIFQPYKKIYDXIVDJOGSPLWXJKICNDRYUVTQDHMMQAEFAGNUSIKZAZEOMVTGNUATNWLYNSWRAHFOIGKFHAWJZQIYMBPLMFKVPAQMQOTFMEOLCTNHWJSVPRFNRXZBTWXJJUDVBXQHHYRSRHXDGGAEXJTPGPSUZFCMIBELSIDGBKPMVPYVZZCRWBWUUAKOXVBROHRZSSCCCNNFOQXYDPBWBEZ");

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
    msg.setTimeStamp(0.470832264405);
    msg.setSource(2964U);
    msg.setSourceEntity(148U);
    msg.setDestination(3400U);
    msg.setDestinationEntity(226U);
    msg.sessid = 4094845458U;
    msg.messages.assign("TFRQPNSVERAAWFYTFOBJMQVKOUBXYMEASSODOAQLHGOLUPDLKDOFUKMNVSCCRDELBHLCEPNTFIUYAZXVHJMBHXTTPJQVUPKNIGXPKCKPTFHJQZRIQQFEIHQRDAIYZUGJPMNNKBNIWCZQIVG");

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
    msg.setTimeStamp(0.374857889134);
    msg.setSource(38721U);
    msg.setSourceEntity(48U);
    msg.setDestination(53479U);
    msg.setDestinationEntity(81U);
    msg.sessid = 3940821711U;

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
    msg.setTimeStamp(0.0936511026409);
    msg.setSource(38224U);
    msg.setSourceEntity(177U);
    msg.setDestination(52107U);
    msg.setDestinationEntity(89U);
    msg.sessid = 89144915U;

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
    msg.setTimeStamp(0.817593487919);
    msg.setSource(9505U);
    msg.setSourceEntity(225U);
    msg.setDestination(46118U);
    msg.setDestinationEntity(61U);
    msg.sessid = 662543335U;

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
    msg.setTimeStamp(0.622405035667);
    msg.setSource(8354U);
    msg.setSourceEntity(246U);
    msg.setDestination(17552U);
    msg.setDestinationEntity(171U);
    msg.sessid = 3575360231U;
    msg.status = 140U;

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
    msg.setTimeStamp(0.39627617742);
    msg.setSource(45112U);
    msg.setSourceEntity(42U);
    msg.setDestination(49720U);
    msg.setDestinationEntity(24U);
    msg.sessid = 3574130633U;
    msg.status = 204U;

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
    msg.setTimeStamp(0.222821008675);
    msg.setSource(42493U);
    msg.setSourceEntity(102U);
    msg.setDestination(35905U);
    msg.setDestinationEntity(213U);
    msg.sessid = 1564262228U;
    msg.status = 233U;

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
    msg.setTimeStamp(0.301675785288);
    msg.setSource(39441U);
    msg.setSourceEntity(243U);
    msg.setDestination(19762U);
    msg.setDestinationEntity(220U);
    msg.name.assign("QYOYXSEAGDTQHYUMTNOUEEICJXFWBIFGBTHBJIVLMWRKMGAFCKJRNNRHQNSYCWJAKSNPIEDPGMFKXNTLDGFYVUHNVRGGEIFPVXRIPHRWIGFDSVMATYECYCDZBOHPVEYHOVDOUKQCKRZOSAXLDWAFLANMBKTTJSPRXXDDVAQSVWPZNCPYTQWZCKOVJEZXQLIMCOZLBJBAGJHBWFJMSSZKDQRWTMYCOHZUXHUKLLLQIJN");

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
    msg.setTimeStamp(0.902768998114);
    msg.setSource(63281U);
    msg.setSourceEntity(143U);
    msg.setDestination(14119U);
    msg.setDestinationEntity(219U);
    msg.name.assign("FTESDMVFZUAZJGKDPFCALFQZWOAUMYVBWUDSJNNVNYXGIEFPJDEJPSWCMYHSCOEHTEKNNQPOVXOKDVLAYDGXMBUICYZGCMGJUNFPLABBOATMWHGSENJUQKZQMCHCNZROVGDJWNLXHGYXMJMQDBPYJVTHERQHZNGHBXEAQGIXKVARZFRZIDTWZWTLLWIXDLPLR");

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
    msg.setTimeStamp(0.435667011433);
    msg.setSource(54179U);
    msg.setSourceEntity(27U);
    msg.setDestination(43570U);
    msg.setDestinationEntity(57U);
    msg.name.assign("QFYKAMQSSHHILTMKPDGPCXYZRLOGLRHYKNWZTWBRPTKTUIWDUPOOMRKLFTZESVWOIODQUMALSUWXZBSVIWJYRFONJAROZLEQEXRYHTLYXVGBPEFOLUEEKAPHMYVEVLBRBDCITWKKCGQNLFXBJZCNRGXPHAENFFAQHSCDAMJEAQBDKYPFWXZGVI");

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
    msg.setTimeStamp(0.908902059376);
    msg.setSource(202U);
    msg.setSourceEntity(20U);
    msg.setDestination(60732U);
    msg.setDestinationEntity(206U);
    msg.name.assign("YZXEHIJPBIZACAWKUWQHDNTULWGTHBFREYBZBRYBSYGMAEJRTUSXOZMXNORRQIONONZBULTVWEEDEUKETGLVANDJFCPYCGJDHKKATPGZAQOAIUQXVDKFJKMZMPJWXFFYUWTGOQODVWIYMNIROPSIJYGQFLXECMOVKTLJZAUIGJUHRHFMWHKLPYOCLMEDIQCXPLWDVHSANSBR");

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
    msg.setTimeStamp(0.580383689045);
    msg.setSource(34321U);
    msg.setSourceEntity(77U);
    msg.setDestination(16786U);
    msg.setDestinationEntity(51U);
    msg.name.assign("HVGDOUMPRHXKDWLLXTROREJWLNVHTFGVBMYWUTSPMVGQQLIRHPHNPXNKXMFHUBTZPSSBMLEEMYQVQOKGATVSKFXQMBPRLXJQCACWGZBUFJIINJWNBSOIOHIYGNXLAQZAFOAWJPSRROUOVFAAUEDEZFENBEYAWCCPDGLGXIVMYSCOURZQ");

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
    msg.setTimeStamp(0.955266258397);
    msg.setSource(40346U);
    msg.setSourceEntity(81U);
    msg.setDestination(59480U);
    msg.setDestinationEntity(90U);
    msg.name.assign("CLZDHJBHRVKZFVIZPSAIUNAJCQFZQWLIXQBKEWIEHTFTDQZXJZQBTNMJXUVNKYINORESYYXBRZLTPKGALVTIEPKPKGXJYUMSYMBZHCROFEFXJ");

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
    msg.setTimeStamp(0.888776217554);
    msg.setSource(47006U);
    msg.setSourceEntity(159U);
    msg.setDestination(59731U);
    msg.setDestinationEntity(122U);
    msg.type = 243U;
    msg.error.assign("HYDLVUJBYJMWVZNWHJWTYOYFPFTXKEMVIVJDWSNLPAVROPZBAGNUVFARBEHNDHTEKNOCZWCVHGBQWDWVNEFPTEKAUGISHNXSQUWRTEMINIGILMSKHEDWIKZOALLAYOYLTKVMIHGMPXBJFXTOFMDRSDXEYSQAYCXGLPCCHCLBZSPWZYCKGZFCGQRUGKQVQKQXKHJURUIMSBFARQMZNUBZQJDIPYRROQXPJDLZCTSPOAATFOILBJUDCFGBRU");

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
    msg.setTimeStamp(0.867460045944);
    msg.setSource(37904U);
    msg.setSourceEntity(77U);
    msg.setDestination(7519U);
    msg.setDestinationEntity(9U);
    msg.type = 175U;
    msg.error.assign("KIPBXLYDRBTIVLNXAZFZQTNZISWRJJEVYOYZVUCQSZQPDCGCTNAYPFDXELGSNXACHPLYILAOMFDTQFIJUPDLDQRPWXFUMWGJGGWCCOIEBRMXYNIKFJOJGUNEMXLYTCKHECQRDWWMOSBWUBFJZZHHVARPLPBTAISFNLONVABQVSGJGYDTXEMEVWRTBP");

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
    msg.setTimeStamp(0.382197704577);
    msg.setSource(46758U);
    msg.setSourceEntity(111U);
    msg.setDestination(2699U);
    msg.setDestinationEntity(132U);
    msg.type = 70U;
    msg.error.assign("VBHGPHJEOIOFYNFIDWPRDZWDGVRQEZMMEKBYZXAAAZZELLSYKUYMMRNUCPGSESFADLSIOGHGOMFZTLWFIJCEMJBRXUVHCWNVPWJTKHQIKXYDXAMPCJDZAGYVQWOHWABLJBPLSJATSSBUBGZEISTFQBUULJNKKRYVHNVCMYRQGYREULCXWHHBWFGKLQCTEESJYNDPOQDWLDVACIA");

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
    msg.setTimeStamp(0.267525115839);
    msg.setSource(23489U);
    msg.setSourceEntity(161U);
    msg.setDestination(64973U);
    msg.setDestinationEntity(104U);
    msg.seq = 2704U;
    msg.sys_dst.assign("OQSTHOXMRISHJEGTJLMXQBUKJAXFBAWUKDZKCJBZYEMBSAPYUMDRRGDON");
    msg.flags = 172U;
    const char tmp_msg_0[] = {-49, 5, 50, 47, -116, -16, -49, 108, -115, -62, -119, -8, -76, -48, -72, -115, -9, 78, 51, -69, 101, -116, -118, -82, -123, 111, 68, 65, -37, -87, -48, 115, -97, -37, -67, 8, -35, 92, -5, 79, -115, -46, 119, -111, 73, -61, 107, -109, 66, -92, -128, 91, 87, 68, -97, 14, -101, -66, -25, -64, -127, 2, 123, -30, -17, -37, -72, -18, 6, -15, -40, -37, -36, 21, -9, -43, 55, 64, -106, 40, -94, -106, -24, -112, 18, 95, -10, -16, -109, -99, -15, -4, 123, 44, 123, 64, -33, -4, 95, 58, 39, 42, 3, -41, -126, 95, 84, -63, -55, -62, 24, -43, -52, -70, 40, 10, 126, -41, 75, 95, 95, 13, -113, 35, -45, 55, 35, 12, -19, 74, -7, 126, 20, -76, 45, 57, 62, -102};
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
    msg.setTimeStamp(0.219417783319);
    msg.setSource(8923U);
    msg.setSourceEntity(186U);
    msg.setDestination(52476U);
    msg.setDestinationEntity(177U);
    msg.seq = 1247U;
    msg.sys_dst.assign("HQLTUBAEIXTEOOFUWTQCRPISMBUKNMRORISQJSCJHPDZOEKIWXJGETORIKRZ");
    msg.flags = 215U;
    const char tmp_msg_0[] = {8, 14, -42, -78, 77, -13, 12, 15, -90, 114, -10, 47, 95, 93, 2, -26, 78, 81, 100, -91, 37, 59, -106, -84, -104, -34, 115, -84, -8, -25, 74, 120, -97, 104, -37, -105, 85, 35, 101, -116, -85, -9, 74, 77, 67, 24, 66, -74, -32, -107, 107, -59, 6, 80, -67, -80, 123, 22, 116, 121, 92, 75, -110, 109, -121, 40, 52, 78, 13, -83, 126, -102, -115, -56, 41, -120, 101, -42, -40, 73, 25, 117, 1, -94, 37, 63, -117, 24, 114, 80, -2, -110, 7, 117, 21, 87, -80, 45, 41, -97, 2, 14, 77, -21, 3, -10, -100, -86, -7, 75, 97, -124, 51, 52, 81, -120, -63, 79, 125, 112, -43, -11, -127, -49, 11, 116, -28, 24, -42, -8, -119, 98, 122, 69, -33, 123, 2, -27, -11, 121, -37, 115, 35, -4, 49, 23, 41, -121, -119, -45, -55, 111, -57, 91, 115, -52, 20, -9, 77, -48, -91, -115, -75, -71, -27, -48, 84, 103, 10, 77, 45, -59, 9, -69, 19, 56, -70, -43, 88, 41, 38, -49, -112, -58, -24, -61, 8, -71, 84, -73, 10, 119, 6, 104, -126, -13, -78, -90, -81, -107, 57, -99, -4};
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
    msg.setTimeStamp(0.0838849464557);
    msg.setSource(47080U);
    msg.setSourceEntity(53U);
    msg.setDestination(5006U);
    msg.setDestinationEntity(127U);
    msg.seq = 27596U;
    msg.sys_dst.assign("YFNWRZUCHLDDFIGWQWFSNTYPCOBLPWGWQHKJAQPZAERNMLGEFUJDVCITDQMBXQOLJKNCZZUQIUYSKMHRRRSZVXZKPOSJVXIAKUJAHXXQCEZVYRLAMDWPWNNWEGPJOPMOIKLKDXHBIYNOCSUXLBLHUEOXVNAGQTVZCGKTTDJPGVDICVBFKOFMYMYYMSSATCRSMTIABEFWYLIVNDUIBCRYQZGQWMZBRFVFLRKAGSJEHTPGXT");
    msg.flags = 126U;
    const char tmp_msg_0[] = {-49, 71, 54, -18, 125, -43, 36, -118, -24, 67, 54, -31, 8, -84, 40, 3, 50, 122, 90, -22, 60, 8, -68, -117, -94, 17, -126, -128, 61, -103, 13, 28, 31, 6, 2};
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
    msg.setTimeStamp(0.733479393037);
    msg.setSource(11850U);
    msg.setSourceEntity(221U);
    msg.setDestination(54746U);
    msg.setDestinationEntity(252U);
    msg.sys_src.assign("GGKIYFQGURZZWLCNMTKONSDGWUVIJMTLZZQKWQCHBVKXITOFQMSXFUEDRZJSPQTRWMDDZBWPYXLPBYBPEAYOXQSJVJMEANFTKXDKLNEHFOHOSTJPZHWZHUYSOBZAKJBUPYEUAMYESSIECFEGXUHSANQUBEIWLYMDBGBKHRRNPAAFPGILQJJYRG");
    msg.sys_dst.assign("MEEVLDSAAOZVVYIUJQWAAKMNPIL");
    msg.flags = 90U;
    const char tmp_msg_0[] = {-2, -74, 89, 48, 9, 95, 2, 48, 7, -88, 1, -57, 110, 110, -119, 0, 112, 4, 57, 118, 126, -127, 72, -90, -44, -99, 39, -83, -109, -91, -88, 52, 6, -104, -54, -46, 12, 119, -20, -48, -24, 92, -127, 65, -69, 9, 44, -81, -17, 107, 25, -95, -33, -12, 109, 20, 97, -32, 25, -28, -26, -56, -83, 4, 43, -14, -20, 18, 82, -29, 60, -64, -44, 118, -54, -11, -45, 30, -11, -8, 4, 7, 16, 77, 14, 126, -9, 23, -83, -6, 58, -101, 19, -85, 72, 109, -121, -35, -48, -56, -10, -24, -90, 15, 39, 88, -103, 91, -25, -123, -40, -116, 93, 4, -48, 108, -97, 61, -19, 81, -94, 15, 36, -41, -65, 49, 6, -124, -82, -43, 46, 93, 109, 11, -52, -50, 4, -12, -63, -113, 121, 41, -45, -10, -57, 45, 7, 10, -26, 76, -11, 9, -97, -120, 1, 4, -49, 2, -110, 115, 107, -48, -6, 100, 20, 30, -36, 114, -83, -114, -3, -74, -99, 26, -23, 124, 116, 24, 68, -21, -37, 58, 3, -103, 44, 94, 118, 48, 122, 9, 101, -90, 24, 9, 89, 108, -85, -36, 123, 15, -61, -71, -26, 59, -64, 72, -69, -75, -61, -106, 76, 67, -29, 113, 79, -32};
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
    msg.setTimeStamp(0.677842079507);
    msg.setSource(31364U);
    msg.setSourceEntity(97U);
    msg.setDestination(46667U);
    msg.setDestinationEntity(4U);
    msg.sys_src.assign("QSBGQTLNJMBULONRKSWFNNHYSXWECIIQNKJXITFDGVIMNHDSUQEJUJJAMHHIONCSDBGARAAPPRYZZSHBEUMOCXWZMHYZDKOOOEQADBMYQDWWBGGELETNXYACPTIFXZZLVNEOFTMHTDZFOUGARSWEULPQKJZYWMVXEUYPTJJY");
    msg.sys_dst.assign("KZLQEXTOQCQLJLRHXQDZFXXRXUGFARHAOCOIVWEEMEDGNRVDWSMUBUWBZQYBDATJWCM");
    msg.flags = 215U;
    const char tmp_msg_0[] = {-7, 105, -114, 6, -125, -2, -68, -41, 39, 2, 98, 45, -57, 62, -97, -94, 101, 87, -55, 126, 5, 46, 55, 66, 33, 103, 22, 41, 109, -27, 92, -31, 92, 53, 98, 98, 78, -122, 119, -78, -70, 64, 8, -17, 88, -128, 60, -7, -72, 74, -11, 63, 88};
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
    msg.setTimeStamp(0.882704300698);
    msg.setSource(30542U);
    msg.setSourceEntity(178U);
    msg.setDestination(18967U);
    msg.setDestinationEntity(188U);
    msg.sys_src.assign("YHBCBQSHXZBTOVCWKYVUDMKPHMDFFCOPTQRSJUIYHNGVLUGXLCIFZRIJTYKQMHJWBEEDVJIXS");
    msg.sys_dst.assign("TKPVHMQAHUVMWBONACBSJPZWQLNSBDPWWXIORYSJZQIYGLUJKIUXLZIFHWUHVTKGCEKGMCYQOORVBOKXFXYPYSJRPEWOIKFZBUNMBPYTEAXXGWNXCVEOTEEBHTFEAHVDMMTJPCZFQLYAOYSQFZRJZUNDZVSIRRJJWKXUF");
    msg.flags = 105U;
    const char tmp_msg_0[] = {-35, 11, -111, 23, -2, 10, -52, -121, -78, -1, 26, 35, 42, -104, 12, 19, 49, 119, -101, 124, 56, -51, 73, -67, -37, -3, 58, 3, 28, -88, 73, -46, 90, 57, -40, 6, -60, -50, 60, -34, -53, -118, 118, 92, -104, -92, -24, -22, 70, -91, 100};
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
    msg.setTimeStamp(0.0459262971405);
    msg.setSource(31175U);
    msg.setSourceEntity(106U);
    msg.setDestination(49945U);
    msg.setDestinationEntity(163U);
    msg.seq = 51288U;
    msg.value = 44U;
    msg.error.assign("WOEZTTGXEBDUIBRSCDSSMDOOWMMFHIGHAUXVNLREAGQTZCYKKYPPCIZYZSXOJLSYSLXFUJILCRQUWKFQWAHNBEWHGKGWCFOHNGBFOXHLGBCKTXWUPLAPKYTEEQBCQKRSNJHVAODXYS");

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
    msg.setTimeStamp(0.32049694816);
    msg.setSource(24010U);
    msg.setSourceEntity(89U);
    msg.setDestination(29123U);
    msg.setDestinationEntity(161U);
    msg.seq = 15368U;
    msg.value = 167U;
    msg.error.assign("WPLJDLFINRCQZTXZCFVIBZSPQBRIRBBABJPNCIJZFDUXGFJVOLHXHIBGMERAKVMZNCCWJVBOWGUAFRYWQNOVKQITMEHEFBFKTWQGTGUGTLEJS");

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
    msg.setTimeStamp(0.730454515605);
    msg.setSource(1231U);
    msg.setSourceEntity(12U);
    msg.setDestination(38715U);
    msg.setDestinationEntity(99U);
    msg.seq = 1589U;
    msg.value = 40U;
    msg.error.assign("MBGONQYXBWRWWBJQTGJALHBCYOXWQUYVYTLVWCBHOTXFMSENWJMKPUHTVEFTJSDLJLKRHQPPLAUUXCVUUCSHVTYZZXAIDLPRFCSEDMOPSANBODRMOZRYIXCGMJRDZKVVEKFKNHKHENUIXEQKJRQFQLMKRMZRPNIZZTWOSGBGYYGSSVBTOORYL");

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
    msg.setTimeStamp(0.658964449005);
    msg.setSource(19694U);
    msg.setSourceEntity(68U);
    msg.setDestination(63787U);
    msg.setDestinationEntity(201U);
    msg.seq = 3631U;
    msg.sys.assign("HDOHBVDVCVYYUYXODWNBACIKEIRUGGGOTDCSSMDTEQSISNVOPXXSKXMZLZYIZDRVJGBISRFPFKRNWFZRZQQQTFEDUTFUXWCQFQXBJKQBMOPRKQTPSBELCXPFGKWLYIGOCHBLBCJWHJOJHSCKACANPIMRUEOULMXKFANALUMLUDAMTMGED");
    msg.value = 0.526223687126;

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
    msg.setTimeStamp(0.675712433636);
    msg.setSource(37801U);
    msg.setSourceEntity(106U);
    msg.setDestination(15897U);
    msg.setDestinationEntity(114U);
    msg.seq = 35954U;
    msg.sys.assign("WOQJCEBUMJPBZYIPQHEMVRHAPUSIYVOFDBEDERITUIKQINGZKDPAJFNOGKILJEWCINLJRNBYSUJXSDGAXLLBVHMWAIMVBZWZMPCDLXHCNKCASUMRSAJUCOBUWGODDNHRVWVGQXKFVDSLJMZBHAPREPIKHWHCHFETRDKCIFTVWSKLZNQZYOYTTESVLGVFPQMHXTUXLECXXAWGQKMWFRNUGQBOZCOATPXZJRTSYTNRSGYJUQFG");
    msg.value = 0.53529734549;

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
    msg.setTimeStamp(0.285741485053);
    msg.setSource(52957U);
    msg.setSourceEntity(118U);
    msg.setDestination(22132U);
    msg.setDestinationEntity(125U);
    msg.seq = 9052U;
    msg.sys.assign("UXWJBOGIOJASFPHCVFMTNVZWKWNFWRYQLSCZRMZVTCZEPADXNBKRVHMHZXNIZKLMIDCEBAQQYVFACTMCHFEAJKAYSPXPDJEAUIVOKVXPGTVNOECBHQJEEBQCMSWFXJWFNYHHKGPCSLRJYIDXLEPJNOJHHDPRZSXUW");
    msg.value = 0.13909555587;

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
    msg.setTimeStamp(0.345363747989);
    msg.setSource(45937U);
    msg.setSourceEntity(222U);
    msg.setDestination(9148U);
    msg.setDestinationEntity(245U);
    msg.action = 244U;
    msg.longain = 0.467127689181;
    msg.latgain = 0.522371192571;
    msg.bondthick = 1613975354U;
    msg.leadgain = 0.195045646216;
    msg.deconflgain = 0.908045252903;

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
    msg.setTimeStamp(0.381421419529);
    msg.setSource(33715U);
    msg.setSourceEntity(49U);
    msg.setDestination(54150U);
    msg.setDestinationEntity(18U);
    msg.action = 26U;
    msg.longain = 0.733407935957;
    msg.latgain = 0.152674617299;
    msg.bondthick = 3069105321U;
    msg.leadgain = 0.681506145905;
    msg.deconflgain = 0.659372794688;

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
    msg.setTimeStamp(0.175504702456);
    msg.setSource(17586U);
    msg.setSourceEntity(236U);
    msg.setDestination(63902U);
    msg.setDestinationEntity(243U);
    msg.action = 119U;
    msg.longain = 0.261885975745;
    msg.latgain = 0.620591864199;
    msg.bondthick = 2558854390U;
    msg.leadgain = 0.528016744412;
    msg.deconflgain = 0.223067624195;

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
    msg.setTimeStamp(0.248803131226);
    msg.setSource(50536U);
    msg.setSourceEntity(10U);
    msg.setDestination(47941U);
    msg.setDestinationEntity(132U);
    msg.err_mean = 0.911285902685;
    msg.dist_min_abs = 0.0452396119656;
    msg.dist_min_mean = 0.580964424285;

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
    msg.setTimeStamp(0.606161910074);
    msg.setSource(1665U);
    msg.setSourceEntity(141U);
    msg.setDestination(27739U);
    msg.setDestinationEntity(153U);
    msg.err_mean = 0.039330139275;
    msg.dist_min_abs = 0.0945467774637;
    msg.dist_min_mean = 0.169263145514;

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
    msg.setTimeStamp(0.358837826888);
    msg.setSource(17843U);
    msg.setSourceEntity(122U);
    msg.setDestination(6644U);
    msg.setDestinationEntity(1U);
    msg.err_mean = 0.290798989619;
    msg.dist_min_abs = 0.0294976341206;
    msg.dist_min_mean = 0.376826571579;

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
    msg.setTimeStamp(0.750610555524);
    msg.setSource(50045U);
    msg.setSourceEntity(67U);
    msg.setDestination(15736U);
    msg.setDestinationEntity(195U);
    msg.action = 238U;
    msg.lon_gain = 0.391527457422;
    msg.lat_gain = 0.888815670453;
    msg.bond_thick = 0.530349214052;
    msg.lead_gain = 0.153402467937;
    msg.deconfl_gain = 0.153324415165;
    msg.accel_switch_gain = 0.775065123297;
    msg.safe_dist = 0.905618323795;
    msg.deconflict_offset = 0.0173228412468;
    msg.accel_safe_margin = 0.271953859888;
    msg.accel_lim_x = 0.0141035430921;

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
    msg.setTimeStamp(0.259693961033);
    msg.setSource(15294U);
    msg.setSourceEntity(92U);
    msg.setDestination(28226U);
    msg.setDestinationEntity(100U);
    msg.action = 246U;
    msg.lon_gain = 0.724129465752;
    msg.lat_gain = 0.388512917336;
    msg.bond_thick = 0.592149330182;
    msg.lead_gain = 0.282650493106;
    msg.deconfl_gain = 0.787762044779;
    msg.accel_switch_gain = 0.734878639211;
    msg.safe_dist = 0.974367819145;
    msg.deconflict_offset = 0.873592452729;
    msg.accel_safe_margin = 0.537569827755;
    msg.accel_lim_x = 0.779252204655;

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
    msg.setTimeStamp(0.550042898035);
    msg.setSource(12460U);
    msg.setSourceEntity(137U);
    msg.setDestination(14623U);
    msg.setDestinationEntity(10U);
    msg.action = 101U;
    msg.lon_gain = 0.796335468976;
    msg.lat_gain = 0.41758886287;
    msg.bond_thick = 0.16460314174;
    msg.lead_gain = 0.258239403806;
    msg.deconfl_gain = 0.607497481807;
    msg.accel_switch_gain = 0.41270945518;
    msg.safe_dist = 0.0308161698538;
    msg.deconflict_offset = 0.757628519726;
    msg.accel_safe_margin = 0.594948458556;
    msg.accel_lim_x = 0.0183570824536;

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
    msg.setTimeStamp(0.276689893653);
    msg.setSource(2649U);
    msg.setSourceEntity(238U);
    msg.setDestination(47966U);
    msg.setDestinationEntity(200U);
    msg.type = 141U;
    msg.op = 90U;
    msg.err_mean = 0.578525841015;
    msg.dist_min_abs = 0.163430200522;
    msg.dist_min_mean = 0.707115069905;
    msg.roll_rate_mean = 0.439884640965;
    msg.time = 0.792654039245;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 90U;
    tmp_msg_0.lon_gain = 0.615380209697;
    tmp_msg_0.lat_gain = 0.68316713854;
    tmp_msg_0.bond_thick = 0.891271174937;
    tmp_msg_0.lead_gain = 0.262482182392;
    tmp_msg_0.deconfl_gain = 0.11857372324;
    tmp_msg_0.accel_switch_gain = 0.816665613809;
    tmp_msg_0.safe_dist = 0.359579253437;
    tmp_msg_0.deconflict_offset = 0.389426219858;
    tmp_msg_0.accel_safe_margin = 0.298819704573;
    tmp_msg_0.accel_lim_x = 0.065218913425;
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
    msg.setTimeStamp(0.810888228108);
    msg.setSource(3372U);
    msg.setSourceEntity(59U);
    msg.setDestination(44032U);
    msg.setDestinationEntity(10U);
    msg.type = 130U;
    msg.op = 66U;
    msg.err_mean = 0.217644757686;
    msg.dist_min_abs = 0.957092341934;
    msg.dist_min_mean = 0.312548021051;
    msg.roll_rate_mean = 0.604598958083;
    msg.time = 0.89629548903;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 161U;
    tmp_msg_0.lon_gain = 0.244269905689;
    tmp_msg_0.lat_gain = 0.4430329969;
    tmp_msg_0.bond_thick = 0.684731792133;
    tmp_msg_0.lead_gain = 0.328181757373;
    tmp_msg_0.deconfl_gain = 0.392435413321;
    tmp_msg_0.accel_switch_gain = 0.501011840047;
    tmp_msg_0.safe_dist = 0.22794429045;
    tmp_msg_0.deconflict_offset = 0.854249533808;
    tmp_msg_0.accel_safe_margin = 0.799572715692;
    tmp_msg_0.accel_lim_x = 0.335422378112;
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
    msg.setTimeStamp(0.466176091673);
    msg.setSource(65309U);
    msg.setSourceEntity(95U);
    msg.setDestination(5321U);
    msg.setDestinationEntity(250U);
    msg.type = 232U;
    msg.op = 239U;
    msg.err_mean = 0.206132341808;
    msg.dist_min_abs = 0.489118121321;
    msg.dist_min_mean = 0.465361629066;
    msg.roll_rate_mean = 0.23425783639;
    msg.time = 0.0364099360633;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 198U;
    tmp_msg_0.lon_gain = 0.359287420972;
    tmp_msg_0.lat_gain = 0.58764934012;
    tmp_msg_0.bond_thick = 0.278521928256;
    tmp_msg_0.lead_gain = 0.255584561469;
    tmp_msg_0.deconfl_gain = 0.471561283978;
    tmp_msg_0.accel_switch_gain = 0.624419145143;
    tmp_msg_0.safe_dist = 0.826597719573;
    tmp_msg_0.deconflict_offset = 0.956357470202;
    tmp_msg_0.accel_safe_margin = 0.932101661837;
    tmp_msg_0.accel_lim_x = 0.0261926020774;
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
    msg.setTimeStamp(0.0647221743994);
    msg.setSource(41809U);
    msg.setSourceEntity(215U);
    msg.setDestination(41907U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.34120183966;
    msg.lon = 0.666654931378;
    msg.eta = 3619138874U;
    msg.duration = 25869U;

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
    msg.setTimeStamp(0.575697940773);
    msg.setSource(63751U);
    msg.setSourceEntity(192U);
    msg.setDestination(51899U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.518094238341;
    msg.lon = 0.564201595404;
    msg.eta = 1461246676U;
    msg.duration = 60090U;

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
    msg.setTimeStamp(0.0946911777787);
    msg.setSource(32748U);
    msg.setSourceEntity(118U);
    msg.setDestination(10853U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.295619157973;
    msg.lon = 0.243739516447;
    msg.eta = 1460574514U;
    msg.duration = 28108U;

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
    msg.setTimeStamp(0.0827714049276);
    msg.setSource(3941U);
    msg.setSourceEntity(227U);
    msg.setDestination(14738U);
    msg.setDestinationEntity(236U);
    msg.plan_id = 63974U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.77287403391;
    tmp_msg_0.lon = 0.247407025728;
    tmp_msg_0.eta = 640495672U;
    tmp_msg_0.duration = 34865U;
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
    msg.setTimeStamp(0.911556142252);
    msg.setSource(27327U);
    msg.setSourceEntity(254U);
    msg.setDestination(27466U);
    msg.setDestinationEntity(62U);
    msg.plan_id = 26416U;

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
    msg.setTimeStamp(0.252504324717);
    msg.setSource(52122U);
    msg.setSourceEntity(29U);
    msg.setDestination(15784U);
    msg.setDestinationEntity(102U);
    msg.plan_id = 28542U;

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
    msg.setTimeStamp(0.889371562707);
    msg.setSource(27240U);
    msg.setSourceEntity(185U);
    msg.setDestination(12575U);
    msg.setDestinationEntity(97U);
    msg.type = 209U;
    msg.command = 249U;
    msg.settings.assign("VOYVCPWUYHMYOHTYTTYINOLBVJZDSVRNZCQWXXEZMVVRIDSQKILCZKNGCLHVVONVDVPWFZRWORUAKUSHGYJQPHYLHABJBMFNPKWBFCUXQAUKP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 32006U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TJOUDJGPZOTLLMIJIESVITNYJDPMRQKXFORVLVBJSUHHLFTGWMXHUOALOZYBCFPRITRYVQWPUSXCOQFYZQBWUAUIETOBGAINGDVFXXZEAPUIKSRWVKCXTFNYIOAZXQKHIALRMZWSMELHXMNAESONGOLKCBMZAQPHSZDDVKBCFFVQJUNMGSYNEQSWPYZRWQRBLJ");

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
    msg.setTimeStamp(0.476713172022);
    msg.setSource(6326U);
    msg.setSourceEntity(163U);
    msg.setDestination(14027U);
    msg.setDestinationEntity(69U);
    msg.type = 97U;
    msg.command = 222U;
    msg.settings.assign("NIHDVJHMIZYOHSKVYOKMTAJROWFPBGNFKYWJLYRACUGSFTISWQMTHZIICQLARKPSAJHVTXWOXVVCBWFDPCLDMWCZBRSKALVCMIXJWDUAEEXBZZXNUVGJBKNENZMBNPEGCCEXAFIUDHOPFLELQWMCODMYUONHPKQEJUPGTYGSQBQVYPUNQGZYAREWRQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22674U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GOHOMLZJGEWYQIWOUBQQJSANWTECGRFLHVXBQOADORUUIIPRUHHQEJUDRBICVNEJJWKPOQKNXSJHCKVVKERYGLTZWIFEKJXMUEKQBUVFSADTOBXBGQTQZLBJGFMAIVKYNRKDPDPCLUTSZTAWGCDETZRXLNSSNZBSIZSBRKSG");

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
    msg.setTimeStamp(0.208736383201);
    msg.setSource(40689U);
    msg.setSourceEntity(51U);
    msg.setDestination(40857U);
    msg.setDestinationEntity(128U);
    msg.type = 72U;
    msg.command = 133U;
    msg.settings.assign("GMJRUHOYEFHFJPAMZEVDJDFKIKROWUQUWEZOOKJYWMFTRIXIPNQVAUTZAGQDDQMEIUNJLGKRNNVGUAHRXXJSXIKYSZBLGPRNSFXYJFTMZZCBWASHSTJCBGCSVSIFPOTBJDWQEMTILOOVRPREFIWXCWWSXSGCOPQKPKCBEAWCCDAAXMZQXYTPVMULHVEZKTBKUSBYANNAXNLYDCKHYILGFHVLUZHDRPLLMTGUQBWHYBNM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11142U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VEWSFOAWTQIUOIUQEHBCNRGCWFDSGXNYLRWFFDWEEMTBUXARTPVDCGLLTVWJAWPSJZJRPOTDDYGCUIMSLRCWSQRRZIZKMDFJZUHKHIOBQGMOMZCVLJKNHEDFKARVGHEFXZBOJQBILYZPNAHTBXKCEJBIXAZQLQLGNUPKTPHNABPVXYTYETQTALAUKMUMVNHIFXCXXEY");

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
    msg.setTimeStamp(0.953935207167);
    msg.setSource(22411U);
    msg.setSourceEntity(121U);
    msg.setDestination(54729U);
    msg.setDestinationEntity(34U);
    msg.state = 236U;
    msg.plan_id = 13409U;
    msg.wpt_id = 101U;
    msg.settings_chk = 55669U;

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
    msg.setTimeStamp(0.592853851819);
    msg.setSource(18596U);
    msg.setSourceEntity(248U);
    msg.setDestination(16927U);
    msg.setDestinationEntity(107U);
    msg.state = 147U;
    msg.plan_id = 39209U;
    msg.wpt_id = 45U;
    msg.settings_chk = 8406U;

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
    msg.setTimeStamp(0.754369386942);
    msg.setSource(51863U);
    msg.setSourceEntity(34U);
    msg.setDestination(34257U);
    msg.setDestinationEntity(41U);
    msg.state = 186U;
    msg.plan_id = 58324U;
    msg.wpt_id = 48U;
    msg.settings_chk = 10336U;

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
    msg.setTimeStamp(0.698080164691);
    msg.setSource(14632U);
    msg.setSourceEntity(161U);
    msg.setDestination(46134U);
    msg.setDestinationEntity(254U);
    msg.uid = 74U;
    msg.frag_number = 226U;
    msg.num_frags = 241U;
    const char tmp_msg_0[] = {63, 73, 89, 74, -103, 2, -15, 99, -7, 125, -79, 105, -106, -125, 35, -111, -56, 99, 25, 52, 65, 9, 105, 7};
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
    msg.setTimeStamp(0.462238738035);
    msg.setSource(4467U);
    msg.setSourceEntity(51U);
    msg.setDestination(46156U);
    msg.setDestinationEntity(5U);
    msg.uid = 145U;
    msg.frag_number = 213U;
    msg.num_frags = 136U;
    const char tmp_msg_0[] = {80, -15, 88, -90, 98, -84, 79, -3, 9, -25, -5, 96, -47, -108, -1, -97, -38, 57, 66, -71, -12, 64, 60, 94, 46, -27, 72, 18, -126, -73, -27, -114, -65, 61, -2, -28, 99, -102, -51, -96, -110, 91, 72, 24, -84, 45, -32, -71, -117, -85, -26, 58, -66, 21, -33, -6, -18, -34, 19, 49, 106, 116, -17, -30, 39, -62, 65, -62, 43, 121, -42, 78, -54, 1, -100, 49, 118, -37, 104, 105, -38, 64, -97, -92, 64, 119, -44, 13, 81, 43, 38, 11, 73, 17, 49, 95, 64, 37, 105, 33, -49, -124, 88, 94, -77, -82, 92, -53, 10, -45, -126, -21, -106, 98, -122, -14, -55, 44, -125, 92, -87, -103, -62, -7, 92, -125, -58, -55, 76, -66, -55, 55, 43, -46, 41, 18, 23, 87, -61, 7, 27, -63, -77, -78, -79, -121, 0, -18, 52, -37};
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
    msg.setTimeStamp(0.698121481026);
    msg.setSource(24452U);
    msg.setSourceEntity(209U);
    msg.setDestination(47814U);
    msg.setDestinationEntity(42U);
    msg.uid = 172U;
    msg.frag_number = 38U;
    msg.num_frags = 154U;
    const char tmp_msg_0[] = {-23, 120, -115, 53, -59, 73, -25, -56, 91, 65, 52, -70, -82, 126, -10, 67, 34, -55, -127, -12, -12, -106, -106, 23, -117, -22, 94, 9, 87, 75, 41, -72, 92, 29, -90, -67, 25, -79, 20, -32, -98, -111, 4, 66, -113, -14, -39, -97, -106, -108, -66, -23, 85, -67, -84, 73, 111, -26, 20, -67, -106, 29, -75, 9, -102, 95, -23, -19, 32, 112, 117, -23, -70, -81, -44, -92, -68, 105, -5, 5, 125, -78, 46, 123, -98, -15, -4, -113, -92, 113, 37, 71, -44, 42, -13, 42, 21, -16, -67, -26, 71, -31, 20, 100, -115, 74, 24, -116, -74, -51, 103, 74, 103, 67, -54, 124, -55, -116, 54, 33, 49, 14, -14, 88, 97, -107, 109, 36, -49, -75, -100, 54, -89, -115, 119, -106, 125, -102, 40, -74, 83, 85, -83, 123};
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
    msg.setTimeStamp(0.508093596457);
    msg.setSource(61266U);
    msg.setSourceEntity(99U);
    msg.setDestination(46746U);
    msg.setDestinationEntity(28U);
    msg.content_type.assign("VFQLHPGGIGYYUUWIDDZURVAXT");
    const char tmp_msg_0[] = {-19, 72, -29, -118, 116, -38, -88, 11, -11, 48, 122, 59, -35, 100, 119, 34, -77, 87, -47, -39, -53, 59, -89, -72, -106, 26, -112, 63, 4, -25, -36, -33, -36, 106, -29, -4, -34, -92, 113, -36, 18, -86, -13, 117, 109, -119, 47, 103, 120, 37, 109, -114, 103, 101, -57, 107, 114, 123, 91, -118, 97, 59, 93, 40, 122, 100, 119, -74, -86, 71, 119, 21, 31, -59, 55, 123, 6, 9, 18, 36, 109, 55, 111, -109, -96, 112, 56, 79, 45, -2, -88, -68, 28, -78, -88, 37, 92, 106, -56, -12, -113, -66, 126, -19, -92, 17, 37, -120, -22, -22, 26, 91, -107, -117, 114, -12, 36, 56, -72, 114, 111, 110, 66, 66, 122, 90, 11, -27, 73, -103, 77, -46, 49, -67, -19, 73, 79, 52, -126, 50, -15, 36, -43, -76, -99, 101, -42, -33, 81, -65, -62, -7, -101, -111, -114, 108, 124};
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
    msg.setTimeStamp(0.456244701519);
    msg.setSource(61442U);
    msg.setSourceEntity(36U);
    msg.setDestination(44510U);
    msg.setDestinationEntity(171U);
    msg.content_type.assign("YDMJWYWGXUICEJLWANAMFVJAMX");
    const char tmp_msg_0[] = {-118, 112, -121, 73, -98, -47, -27, 108, 87, 66, -25, 59, -70, 83, 8, -28, -43, 122, -45, 110, 121, 83, 78, -106, 87, 15, 69, 33, 25, 31, 110, 66, -81, 16, -48, 58, 13, 85, 37, 6, -44, -76, -13, -19, -125, -128, 121, 13, 104, -46, -125, -34, -79, -10, -87, -8, -77, -88, -21, -68, -38, 15, 21, -53, -70, -47, -97, -123, -112, -3, -7, -38, 76, 104, -27, 19, 47, -90, 94, -114, -32, 28, -54, -35, -104, -23, 76, -26, 12, 82, 73, 32, 87, -37, -75, -115, -59, -79, 91, -46, 106, -64, 18, -93, 35, -85, -128, -59, -84, 104, 9, 81, -30, 117, -86, -59, -90, 121, 23, 44, -80, 92, 10, -119, -93, -76, 28, 86, 80, 87, 116, -66, -108, 21, -127, -14, -78, -101, 23, 70, 66, -95, -78, 112, -94, -98, -6, -42, -2, 122, 62, 28, 20, -41, 0, -121, 14, -68, -106, -22, -57, 23, 62, 74, -50, -107, -15, -85, -63, -56, -105, 84, -17, 47, -106, 66, -7, 35, 41, 46, -34, -83, 118, -73, -25, 84, 15, -122, 70, -12, 35, -51, 73, 50, -4, 58, 94, 83, -109, -74, 5, 120, 59, -115, 43, 41, 50, -57, -56, -90, -50, -15, 123, 71, 73, -46, -48, -60, -44, 71, -96, -96, 101, -5, -81, -7, 56, 23, -83, 5, -90, -68, 75, -72, -46, 73, 14, -71, -118, 125, 25, 123, -12, -118, 9, 99, -2, -99, -16, 76, -44};
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
    msg.setTimeStamp(0.730196646078);
    msg.setSource(537U);
    msg.setSourceEntity(31U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(47U);
    msg.content_type.assign("CQNIBFORASYXQCUFVZZITCYGTXICHEMJWCHWEAVKKMDBUUSHEFBUOJRJTGJIODALYTPZIDETLSSXNMHTBESPMMXVMYEKWYWLKWREALDOUPOCWRGRDXIGNSDVCJVLGVJANAHKIROVIMPNVW");
    const char tmp_msg_0[] = {86, -90, -28, 50, -112, 97, -42, 53, -12, 43, 98, -96, 14, -87, -81, -118, -96, -90, 59, 23, 5, 122, -80, -91, 48, -64, -40, -83, -113, -93, -112, -103, 118, 28, -99, 25, -40, 109, 63, 23, -8, -25, -118, 122, 93, -101, -75, -47, 105, 54, 27, 104, 18, -61, 1, 8, -107, 63, -111, 23, -90, -47, -127, 77, 83, -56, -100, -121, -15};
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
    msg.setTimeStamp(0.203403384556);
    msg.setSource(31889U);
    msg.setSourceEntity(1U);
    msg.setDestination(5172U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.723972005046);
    msg.setSource(46008U);
    msg.setSourceEntity(28U);
    msg.setDestination(26839U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.404900309163);
    msg.setSource(38747U);
    msg.setSourceEntity(73U);
    msg.setDestination(1423U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.925815278084);
    msg.setSource(3866U);
    msg.setSourceEntity(12U);
    msg.setDestination(8451U);
    msg.setDestinationEntity(175U);
    msg.target = 1150U;
    msg.bearing = 0.452544157815;
    msg.elevation = 0.0026043356407;

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
    msg.setTimeStamp(0.226883724639);
    msg.setSource(16756U);
    msg.setSourceEntity(208U);
    msg.setDestination(24876U);
    msg.setDestinationEntity(35U);
    msg.target = 64650U;
    msg.bearing = 0.533816695003;
    msg.elevation = 0.998121813029;

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
    msg.setTimeStamp(0.26113508053);
    msg.setSource(28807U);
    msg.setSourceEntity(222U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(133U);
    msg.target = 45440U;
    msg.bearing = 0.191168336069;
    msg.elevation = 0.69666915086;

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
    msg.setTimeStamp(0.472952743372);
    msg.setSource(11846U);
    msg.setSourceEntity(27U);
    msg.setDestination(42651U);
    msg.setDestinationEntity(234U);
    msg.target = 18678U;
    msg.x = 0.940505345188;
    msg.y = 0.614751338279;
    msg.z = 0.688932779241;

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
    msg.setTimeStamp(0.453955261065);
    msg.setSource(41455U);
    msg.setSourceEntity(81U);
    msg.setDestination(46325U);
    msg.setDestinationEntity(127U);
    msg.target = 58172U;
    msg.x = 0.816573740403;
    msg.y = 0.581628827215;
    msg.z = 0.315772662674;

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
    msg.setTimeStamp(0.711003734777);
    msg.setSource(49128U);
    msg.setSourceEntity(173U);
    msg.setDestination(13830U);
    msg.setDestinationEntity(236U);
    msg.target = 15785U;
    msg.x = 0.601741337379;
    msg.y = 0.657392527826;
    msg.z = 0.584192367695;

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
    msg.setTimeStamp(0.810336805298);
    msg.setSource(9155U);
    msg.setSourceEntity(83U);
    msg.setDestination(57706U);
    msg.setDestinationEntity(224U);
    msg.target = 62947U;
    msg.lat = 0.599221595538;
    msg.lon = 0.5222086417;
    msg.z_units = 226U;
    msg.z = 0.00433100264172;

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
    msg.setTimeStamp(0.522535246385);
    msg.setSource(53812U);
    msg.setSourceEntity(215U);
    msg.setDestination(24403U);
    msg.setDestinationEntity(92U);
    msg.target = 55431U;
    msg.lat = 0.675982360022;
    msg.lon = 0.448605099596;
    msg.z_units = 243U;
    msg.z = 0.843895429774;

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
    msg.setTimeStamp(0.52840136989);
    msg.setSource(301U);
    msg.setSourceEntity(73U);
    msg.setDestination(58901U);
    msg.setDestinationEntity(91U);
    msg.target = 38645U;
    msg.lat = 0.599228623774;
    msg.lon = 0.67159925925;
    msg.z_units = 176U;
    msg.z = 0.438508025515;

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
    msg.setTimeStamp(0.418372318229);
    msg.setSource(42727U);
    msg.setSourceEntity(29U);
    msg.setDestination(9846U);
    msg.setDestinationEntity(33U);
    msg.locale.assign("BVUQJHJURUEUJEPPRKZYHFCMNOYGLRACHBFEAUXVTPMZCMWWVIUGQWASWKYIEBRDHSPYGGGMDOSQDRLNYEYEJINKYTOHVTWJRTCOCLTPSDPDIBGGZAAZZMIZMZSJUHMRNVKDSZIDTFASTACX");
    const char tmp_msg_0[] = {-63, 108, -18, 12, 10, 49, 43, 12, 32, 23, -74, -89, 60, 58, -111, -7, 112, 10, -31, -85, -75, 116, -22, -11, 68, 11, -77, -66, 105, -105, -62, 47, -61, 101, -31, 121, 28, 30, -62, -25, -13, -36, 95, -127, -128, 10, -82, -35, 14, -37, -28, 65, -63, 55, -61, 108, -127, 0, -55, -10, 57, 75, -46, -39, 84, -20, -65, 121, -7, 61, -68, -101, 122, 69, 91, 43, -7, 123, 4, -4, -112, -81, 94, -111, -62, -70, 5, 42, -105, -31, -78, 83, 77, 35, 109, -16, 84, -115, 17, 84, -91, 90, 56, 109, 49, -89, -94, -86, 46, 56, -32, 7, 8, 117, -41, -92, -117, -90, 50, 84, 67, 72, -104, 58, 43, 0, 24, -3, -105, 119, 1, -59, -14, 82, -23, 86, 59, -17, -70, 74, -53, -59, -19, 38, -72, 95, -85, 95, 122, 60, 100, -17, 44, -9, -8, -27, 113, 126, -54, 58, -5, 51, 121, -25, -83, 112, 106, 18, -71, 65, -99, -90, 48, -68, -67, -50, 97, 52, 112, -5, 7, 23, 44, -20, 11, -32, -87, 75, 110, 23, 95, 57, -114, -65, 37, -24, -94, -123, 2, -58, -58, 24, 5, -86, 111, -46, 65, -120, -1};
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
    msg.setTimeStamp(0.047645438421);
    msg.setSource(18098U);
    msg.setSourceEntity(5U);
    msg.setDestination(63148U);
    msg.setDestinationEntity(21U);
    msg.locale.assign("IRPKJEEHRZLFCIRYXQLBGQQDZKKTZALXYVBTMIQHMCPUWBZGRDBUKNOYKNYYZFM");
    const char tmp_msg_0[] = {2, 119, -52, 9, -104, -65, -123, 75, 63, 4, -71, 21, -113, -122, 116, 95, 42, -57, 33, 107, -72, 51, -107, -83, 47, -102, -67, 9, 106, -51, -35, 119, -25, 21};
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
    msg.setTimeStamp(0.544931981421);
    msg.setSource(31608U);
    msg.setSourceEntity(113U);
    msg.setDestination(15407U);
    msg.setDestinationEntity(130U);
    msg.locale.assign("QVCVHDUNARYCFQJBDCHOAPMEZQLLFHXFDKMXWMSRDBL");
    const char tmp_msg_0[] = {-67, -40, 71, -97, 77, -120, 85, -30, 20, -36, 19, 120, -100, 111, 74, 3, 113, -72, 84, 4, -125, -30, 39, 3, 117, -65, 78, -84, 72, 91, -30, 21, 102, 89, -57, 61, -95, 63, -25, -33, -22, 97, 0, 13, -78, 54, 120, 13, 44, -51, 95, -33, 104, 44, -57, -117, -34, 119, -124, 112, -54, -28, 90, -119, 59, 115, 56, -21, -42, 38, 121, -6, 57, -8, 10, 15, 86, 36, 89, -76, 81, 18, 24, 56, 46, 85, 61, 115, -34, -118, 62, 41, 5, -89, 57, 23, -122, 7, 112, 98, 49, 16, -118, 38, 106, 41, -4, -102, 68, 21, -25, -51, -115, -74, 79, 24, -121, -87, 39, 121, -26, 110, 80, -43, -102, 49, -96, 44, -71, 77, -69, 112, 84, -90, -113, 62, 45, -119, 36, 46, -1, -103, 67, -97, 31, -70, 67, 87, 126, -78, 91, -99, 7, -4, 100, 83, 15};
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
    msg.setTimeStamp(0.587944507328);
    msg.setSource(10197U);
    msg.setSourceEntity(173U);
    msg.setDestination(19709U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.558089920447);
    msg.setSource(4204U);
    msg.setSourceEntity(165U);
    msg.setDestination(62763U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.155899969815);
    msg.setSource(18354U);
    msg.setSourceEntity(200U);
    msg.setDestination(9473U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.484964028908);
    msg.setSource(1172U);
    msg.setSourceEntity(107U);
    msg.setDestination(14787U);
    msg.setDestinationEntity(10U);
    msg.camid = 99U;
    msg.x = 36566U;
    msg.y = 42358U;

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
    msg.setTimeStamp(0.71558327251);
    msg.setSource(46555U);
    msg.setSourceEntity(245U);
    msg.setDestination(55096U);
    msg.setDestinationEntity(38U);
    msg.camid = 196U;
    msg.x = 6300U;
    msg.y = 57983U;

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
    msg.setTimeStamp(0.702299354051);
    msg.setSource(31828U);
    msg.setSourceEntity(101U);
    msg.setDestination(35828U);
    msg.setDestinationEntity(202U);
    msg.camid = 55U;
    msg.x = 16136U;
    msg.y = 53437U;

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
    msg.setTimeStamp(0.949501455689);
    msg.setSource(53345U);
    msg.setSourceEntity(45U);
    msg.setDestination(59794U);
    msg.setDestinationEntity(206U);
    msg.camid = 224U;
    msg.x = 65484U;
    msg.y = 23649U;

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
    msg.setTimeStamp(0.292150175865);
    msg.setSource(63230U);
    msg.setSourceEntity(81U);
    msg.setDestination(58103U);
    msg.setDestinationEntity(94U);
    msg.camid = 79U;
    msg.x = 64593U;
    msg.y = 26993U;

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
    msg.setTimeStamp(0.686178239242);
    msg.setSource(5587U);
    msg.setSourceEntity(166U);
    msg.setDestination(24868U);
    msg.setDestinationEntity(211U);
    msg.camid = 162U;
    msg.x = 1412U;
    msg.y = 53639U;

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
    msg.setTimeStamp(0.947384029614);
    msg.setSource(35048U);
    msg.setSourceEntity(57U);
    msg.setDestination(48102U);
    msg.setDestinationEntity(25U);
    msg.tracking = 52U;
    msg.lat = 0.319352116758;
    msg.lon = 0.158865719477;
    msg.x = 0.993798776593;
    msg.y = 0.763830133015;
    msg.z = 0.321606726846;

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
    msg.setTimeStamp(0.236033011438);
    msg.setSource(15577U);
    msg.setSourceEntity(20U);
    msg.setDestination(45351U);
    msg.setDestinationEntity(61U);
    msg.tracking = 1U;
    msg.lat = 0.371432256843;
    msg.lon = 0.497083764582;
    msg.x = 0.67443981962;
    msg.y = 0.00778538303711;
    msg.z = 0.287685260093;

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
    msg.setTimeStamp(0.288454606218);
    msg.setSource(4760U);
    msg.setSourceEntity(3U);
    msg.setDestination(33257U);
    msg.setDestinationEntity(238U);
    msg.tracking = 201U;
    msg.lat = 0.422509201068;
    msg.lon = 0.603730876054;
    msg.x = 0.305048825443;
    msg.y = 0.039059053441;
    msg.z = 0.401452228807;

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
    msg.setTimeStamp(0.964909406279);
    msg.setSource(7821U);
    msg.setSourceEntity(114U);
    msg.setDestination(48338U);
    msg.setDestinationEntity(128U);
    msg.target.assign("UVXCNKGPIKAEVAJZDIMF");
    msg.lbearing = 0.477805615777;
    msg.lelevation = 0.000340051885372;
    msg.bearing = 0.0380046489516;
    msg.elevation = 0.143129825133;
    msg.phi = 0.0880063285452;
    msg.theta = 0.330162432044;
    msg.psi = 0.956179047949;
    msg.accuracy = 0.477446539277;

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
    msg.setTimeStamp(0.437161091834);
    msg.setSource(26236U);
    msg.setSourceEntity(136U);
    msg.setDestination(3364U);
    msg.setDestinationEntity(226U);
    msg.target.assign("XFGXZOVTMCZSPLBWCVIKDCVWYXUDCQYNXBZFKKSEXNRFKODZVH");
    msg.lbearing = 0.923962483363;
    msg.lelevation = 0.013770463939;
    msg.bearing = 0.812865826174;
    msg.elevation = 0.693812971853;
    msg.phi = 0.582021079877;
    msg.theta = 0.366349815251;
    msg.psi = 0.854772621776;
    msg.accuracy = 0.109830965687;

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
    msg.setTimeStamp(0.732505530258);
    msg.setSource(33446U);
    msg.setSourceEntity(81U);
    msg.setDestination(12459U);
    msg.setDestinationEntity(254U);
    msg.target.assign("LMGNRATDQYSYRNMPWZJHBTGJGKPSLLWRFBOZHZWKCWBVEPUKHQCKAOSYHBHXMCIGTEQBYWXBCPQMLHKEJUFKONUSXZZCEZKGESAWRNDFVNOFABRAYIISEPYQXLHPCILODDBQLNNITCUTUDMVGKBVMUIHZGEUIINBFITROVTDNFRMSVVHGZYQPM");
    msg.lbearing = 0.843933848893;
    msg.lelevation = 0.639070052293;
    msg.bearing = 0.219754248012;
    msg.elevation = 0.500791572732;
    msg.phi = 0.343547870968;
    msg.theta = 0.716701662505;
    msg.psi = 0.69329864528;
    msg.accuracy = 0.350086941185;

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
    msg.setTimeStamp(0.951488740017);
    msg.setSource(6485U);
    msg.setSourceEntity(78U);
    msg.setDestination(53957U);
    msg.setDestinationEntity(60U);
    msg.target.assign("OUEUCSETCSBIBJKOJNHGMRRKLWTWEXCBYMHKPYVRMDAZHIXAOMAQPOAYFNXKTEYYL");
    msg.x = 0.96913759217;
    msg.y = 0.574467451426;
    msg.z = 0.0805129799068;
    msg.n = 0.199175167178;
    msg.e = 0.111345785017;
    msg.d = 0.493601911604;
    msg.phi = 0.691346593837;
    msg.theta = 0.797831084106;
    msg.psi = 0.0551690678992;
    msg.accuracy = 0.480476285412;

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
    msg.setTimeStamp(0.36685155396);
    msg.setSource(33224U);
    msg.setSourceEntity(19U);
    msg.setDestination(14890U);
    msg.setDestinationEntity(86U);
    msg.target.assign("KZEORYYTXDRQEUKSLNNIMN");
    msg.x = 0.880260639684;
    msg.y = 0.430348250195;
    msg.z = 0.129859093788;
    msg.n = 0.413158341984;
    msg.e = 0.404629793555;
    msg.d = 0.12926404053;
    msg.phi = 0.802255482116;
    msg.theta = 0.668787403675;
    msg.psi = 0.217998153965;
    msg.accuracy = 0.851622518375;

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
    msg.setTimeStamp(0.0679768948883);
    msg.setSource(34505U);
    msg.setSourceEntity(6U);
    msg.setDestination(58369U);
    msg.setDestinationEntity(173U);
    msg.target.assign("PQUJJIUIOPHFOCNOPYILVWOTXAVNHAOCKAZZIVUGXFEMSROKLLZREWDGNVLIODLZCCWGJUSCVAPPTKHNNSNQMHGVLEBVZWSDXJCWSKRMXDIRYKAJXQEGYSDBAUPHPRKIMGAUNKGBEDVERYUTODOURXBCXHTBFYHTMFDPQLOQQNAYBFBQQEFMNLT");
    msg.x = 0.21594947881;
    msg.y = 0.899649149292;
    msg.z = 0.559342848068;
    msg.n = 0.469636739989;
    msg.e = 0.0840223715765;
    msg.d = 0.668847748672;
    msg.phi = 0.161877207636;
    msg.theta = 0.871100352606;
    msg.psi = 0.326215587315;
    msg.accuracy = 0.605793833708;

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
    msg.setTimeStamp(0.168239128901);
    msg.setSource(15736U);
    msg.setSourceEntity(58U);
    msg.setDestination(63166U);
    msg.setDestinationEntity(76U);
    msg.target.assign("AWZNDHCARUURBWEOFGTWCRMEJAHOWALTFNOUJXZLPFDZJUCCBAMHENSXSDVQHMIHELTSQXGOLSTRNSIXLAQTYBMFXTESKWXEOZYHDPTPIJYRKNTXBRUVAMZKBIREWFOBJQPMOMNWKKNZYVLGGITJRNGYROJGUQZBYDDFAFJXFIGCCQQVCPLVKELWFVMNVIIDZEKHPLINUPVADDWJKGGC");
    msg.lat = 0.132537017541;
    msg.lon = 0.165809390857;
    msg.z_units = 78U;
    msg.z = 0.779500394757;
    msg.accuracy = 0.917927096867;

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
    msg.setTimeStamp(0.138632038818);
    msg.setSource(38172U);
    msg.setSourceEntity(70U);
    msg.setDestination(13716U);
    msg.setDestinationEntity(191U);
    msg.target.assign("RSWDQOIWUMHNZELKAXPOZPYYQXDRGYBARWNAHMLPOEVCBLDJFFCNQZZCVQMUAXUHWZLQTGGOYHPPTTWJEXEU");
    msg.lat = 0.150796042373;
    msg.lon = 0.22059530708;
    msg.z_units = 54U;
    msg.z = 0.48867342487;
    msg.accuracy = 0.393202491594;

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
    msg.setTimeStamp(0.611919598554);
    msg.setSource(52506U);
    msg.setSourceEntity(52U);
    msg.setDestination(23231U);
    msg.setDestinationEntity(110U);
    msg.target.assign("BADLEFBQMYLDLJBEGVATMAWDLRTAJVIOQAUSNJUXWGVTXZFQHPDPFFZRYZXXIEWZWVAINZGMJOYEUPRBRFIPIMNGTJSOEKISCIWQQCGMNXMCYVPBMOYXVNNSYQWDUKBOEKNKMFSTEZQWECBKRJLCDTUFLHOBVGUPPCJMAGJQONUTXRLDNDYDFBAORHTMHXALCSAPYPEHSDZGCGTHKYRZHFCCYWHHNRXLGZVPVVIKJSFUIRSOKWUZEUQBT");
    msg.lat = 0.973297328286;
    msg.lon = 0.813067138578;
    msg.z_units = 67U;
    msg.z = 0.286468354751;
    msg.accuracy = 0.343067780262;

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
    msg.setTimeStamp(0.745658688343);
    msg.setSource(49527U);
    msg.setSourceEntity(52U);
    msg.setDestination(57951U);
    msg.setDestinationEntity(98U);
    msg.name.assign("VWEYTNVPXURCQOSCPMNRJPWAFAQBBQREFKLTFJZQPUPJDWBCQKVV");
    msg.lat = 0.518746587385;
    msg.lon = 0.368258275827;
    msg.z = 0.926621346893;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.777373964263);
    msg.setSource(53240U);
    msg.setSourceEntity(39U);
    msg.setDestination(55718U);
    msg.setDestinationEntity(150U);
    msg.name.assign("NIVEFDBXIQDHZTTAGVRMSFCNYKXKHTJPKRVVIFZWHWCIGDDVSIPLPHTBFSEDTKOALYLMFCONXJLTBNYGFXDJQDCEHHCXFASPAPDMAEQWQPIMCFWSYNUTEHRERBBOG");
    msg.lat = 0.752251980006;
    msg.lon = 0.979989018463;
    msg.z = 0.426849850344;
    msg.z_units = 233U;

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
    msg.setTimeStamp(0.481872692544);
    msg.setSource(26155U);
    msg.setSourceEntity(104U);
    msg.setDestination(41329U);
    msg.setDestinationEntity(15U);
    msg.name.assign("SFHQZXZVPQNATSYUDBFJOEJWPFGKTPQHFKZDUHMCGMPTTZSNDUM");
    msg.lat = 0.0242813835025;
    msg.lon = 0.55223050932;
    msg.z = 0.871669550965;
    msg.z_units = 150U;

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
    msg.setTimeStamp(0.319422911124);
    msg.setSource(43408U);
    msg.setSourceEntity(53U);
    msg.setDestination(30883U);
    msg.setDestinationEntity(172U);
    msg.op = 196U;

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
    msg.setTimeStamp(0.608230194628);
    msg.setSource(54362U);
    msg.setSourceEntity(223U);
    msg.setDestination(44421U);
    msg.setDestinationEntity(42U);
    msg.op = 197U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QEIYVKEYNBEGVNRXIKTDMEPPGNSRROQQCMZPLUTPIPHMRBHHXJLDLDPKZWLIGCTUJTMYKAKEAFKDYDBFYJSMZYWZVOCQBZBOFGNYAAHNWEQLUACIVNXLORFRUVDKVXIFSJCIYVTALQJOVJCMFSDYAFMJHVKQDHZGKIBDFW");
    tmp_msg_0.lat = 0.102627997911;
    tmp_msg_0.lon = 0.104728572698;
    tmp_msg_0.z = 0.168202128659;
    tmp_msg_0.z_units = 18U;
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
    msg.setTimeStamp(0.983062254901);
    msg.setSource(11573U);
    msg.setSourceEntity(240U);
    msg.setDestination(28109U);
    msg.setDestinationEntity(8U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.290810790231);
    msg.setSource(63027U);
    msg.setSourceEntity(138U);
    msg.setDestination(44157U);
    msg.setDestinationEntity(106U);
    msg.value = 0.102433817924;
    msg.type = 168U;

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
    msg.setTimeStamp(0.202373681134);
    msg.setSource(60096U);
    msg.setSourceEntity(46U);
    msg.setDestination(24083U);
    msg.setDestinationEntity(127U);
    msg.value = 0.724072509582;
    msg.type = 14U;

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
    msg.setTimeStamp(0.51093807378);
    msg.setSource(31387U);
    msg.setSourceEntity(110U);
    msg.setDestination(30772U);
    msg.setDestinationEntity(142U);
    msg.value = 0.575110186878;
    msg.type = 189U;

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
    msg.setTimeStamp(0.951126836064);
    msg.setSource(55733U);
    msg.setSourceEntity(214U);
    msg.setDestination(3059U);
    msg.setDestinationEntity(182U);
    msg.value = 0.145528086172;

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
    msg.setTimeStamp(0.286840720593);
    msg.setSource(46285U);
    msg.setSourceEntity(224U);
    msg.setDestination(22370U);
    msg.setDestinationEntity(110U);
    msg.value = 0.388569497215;

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
    msg.setTimeStamp(0.600236985796);
    msg.setSource(5300U);
    msg.setSourceEntity(100U);
    msg.setDestination(58041U);
    msg.setDestinationEntity(170U);
    msg.value = 0.201627322391;

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
    msg.setTimeStamp(0.797746607104);
    msg.setSource(3113U);
    msg.setSourceEntity(47U);
    msg.setDestination(19358U);
    msg.setDestinationEntity(246U);
    msg.timestamp_last_service = 0.766797388444;
    msg.time_next_service = 0.0682911938855;
    msg.time_motor_next_service = 0.806023129716;
    msg.time_idle_ground = 0.874366633382;
    msg.time_idle_air = 0.513354783996;
    msg.time_idle_water = 0.128352319507;
    msg.time_idle_underwater = 0.421315273088;
    msg.time_idle_unknown = 0.817653039078;
    msg.time_motor_ground = 0.733019896818;
    msg.time_motor_air = 0.300086728446;
    msg.time_motor_water = 0.369324977467;
    msg.time_motor_underwater = 0.0699640032014;
    msg.time_motor_unknown = 0.932056299243;
    msg.rpm_min = 32095;
    msg.rpm_max = 27801;
    msg.depth_max = 0.866401738077;

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
    msg.setTimeStamp(0.647736036567);
    msg.setSource(5956U);
    msg.setSourceEntity(234U);
    msg.setDestination(57284U);
    msg.setDestinationEntity(133U);
    msg.timestamp_last_service = 0.337182108575;
    msg.time_next_service = 0.888707790163;
    msg.time_motor_next_service = 0.677570824723;
    msg.time_idle_ground = 0.130070273911;
    msg.time_idle_air = 0.54029134215;
    msg.time_idle_water = 0.915926142588;
    msg.time_idle_underwater = 0.554612966754;
    msg.time_idle_unknown = 0.512947894995;
    msg.time_motor_ground = 0.201976906272;
    msg.time_motor_air = 0.113432098571;
    msg.time_motor_water = 0.0510728067611;
    msg.time_motor_underwater = 0.664317946668;
    msg.time_motor_unknown = 0.889504492849;
    msg.rpm_min = -25870;
    msg.rpm_max = 4866;
    msg.depth_max = 0.732770920987;

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
    msg.setTimeStamp(0.514535545247);
    msg.setSource(36371U);
    msg.setSourceEntity(26U);
    msg.setDestination(33933U);
    msg.setDestinationEntity(239U);
    msg.timestamp_last_service = 0.45977404867;
    msg.time_next_service = 0.887291336809;
    msg.time_motor_next_service = 0.697250666647;
    msg.time_idle_ground = 0.588830769548;
    msg.time_idle_air = 0.398078728197;
    msg.time_idle_water = 0.526191266445;
    msg.time_idle_underwater = 0.514688008021;
    msg.time_idle_unknown = 0.252527852655;
    msg.time_motor_ground = 0.0722733615729;
    msg.time_motor_air = 0.771571044798;
    msg.time_motor_water = 0.332600385368;
    msg.time_motor_underwater = 0.348726465415;
    msg.time_motor_unknown = 0.645272400085;
    msg.rpm_min = 28494;
    msg.rpm_max = 29098;
    msg.depth_max = 0.659681840237;

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
    msg.setTimeStamp(0.761025999256);
    msg.setSource(25869U);
    msg.setSourceEntity(178U);
    msg.setDestination(61023U);
    msg.setDestinationEntity(2U);
    msg.severity = 100U;
    msg.text.assign("BDFXTHOKGWTHRWFXOEMZQTQBPPGOCPDZKTDNUAXIZCNEAWOQJNLSKRDMHVBAVLVKGVGYQYVBXAFZDOEEMLCOYMGZRTQEJHSEZGLYNTLRQYSLSFGXTWWNBDLZDBADZUARKUCMXWEMRAUMHEUTYNVMISCZBHKCUIOXCFJIIHABIFQOFMF");

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
    msg.setTimeStamp(0.841283593607);
    msg.setSource(28796U);
    msg.setSourceEntity(48U);
    msg.setDestination(30998U);
    msg.setDestinationEntity(25U);
    msg.severity = 204U;
    msg.text.assign("JNBNXQCHJIUZAJLTROAJWHDOZJIPFSLQXWRVCWLPVRSDARUXBNOAEHQEYRDMIYLLYPSXLIOPWEVJSAJTGYPBPUDKMZDJVE");

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
    msg.setTimeStamp(0.164426934139);
    msg.setSource(7093U);
    msg.setSourceEntity(188U);
    msg.setDestination(50446U);
    msg.setDestinationEntity(138U);
    msg.severity = 19U;
    msg.text.assign("LHWAOWJZAPINHARGEEQDYBSKUWAISUEGSZRMPKMCRVQMEXWTDKSZLSLSKOPHRGQCYNBTRVJXJPSQWZECTSLUQWPGBQYMBCNJUTIKIUMDCMQZXOFRLVKNIHIHMCJX");

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
    msg.setTimeStamp(0.00379706763233);
    msg.setSource(25659U);
    msg.setSourceEntity(18U);
    msg.setDestination(5406U);
    msg.setDestinationEntity(215U);
    msg.channel = 44;
    msg.value = 1971967352;
    msg.gain = 213U;

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
    msg.setTimeStamp(0.448477028626);
    msg.setSource(3319U);
    msg.setSourceEntity(180U);
    msg.setDestination(5953U);
    msg.setDestinationEntity(88U);
    msg.channel = 15;
    msg.value = 97109610;
    msg.gain = 212U;

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
    msg.setTimeStamp(0.546384892641);
    msg.setSource(31279U);
    msg.setSourceEntity(222U);
    msg.setDestination(15830U);
    msg.setDestinationEntity(200U);
    msg.channel = -57;
    msg.value = 1898909624;
    msg.gain = 73U;

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
    msg.setTimeStamp(0.154323004977);
    msg.setSource(530U);
    msg.setSourceEntity(134U);
    msg.setDestination(58187U);
    msg.setDestinationEntity(178U);
    msg.ch01 = 0.636259748423;
    msg.ch02 = 0.926601073578;
    msg.ch03 = 0.694549276457;
    msg.ch04 = 0.805924450332;
    msg.ch05 = 0.569694269082;
    msg.ch06 = 0.862465303063;
    msg.ch07 = 0.62653122151;
    msg.ch08 = 0.764870548755;
    msg.ch09 = 0.977523242009;
    msg.ch10 = 0.182641924399;
    msg.ch11 = 0.464309049419;
    msg.ch12 = 0.257926933396;
    msg.ch13 = 0.117899659431;
    msg.ch14 = 0.807854121946;
    msg.ch15 = 0.884792613613;
    msg.ch16 = 0.38758244521;

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
    msg.setTimeStamp(0.0195667430631);
    msg.setSource(62473U);
    msg.setSourceEntity(250U);
    msg.setDestination(56358U);
    msg.setDestinationEntity(58U);
    msg.ch01 = 0.331768164345;
    msg.ch02 = 0.325775195908;
    msg.ch03 = 0.0604979704773;
    msg.ch04 = 0.558854809729;
    msg.ch05 = 0.375401497699;
    msg.ch06 = 0.189671993049;
    msg.ch07 = 0.0124122307712;
    msg.ch08 = 0.834964887157;
    msg.ch09 = 0.588906729493;
    msg.ch10 = 0.961717912654;
    msg.ch11 = 0.73172683322;
    msg.ch12 = 0.720973264454;
    msg.ch13 = 0.843162090668;
    msg.ch14 = 0.486206850469;
    msg.ch15 = 0.0494832210731;
    msg.ch16 = 0.337818247744;

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
    msg.setTimeStamp(0.135582715328);
    msg.setSource(64381U);
    msg.setSourceEntity(5U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(222U);
    msg.ch01 = 0.408801822189;
    msg.ch02 = 0.638297996878;
    msg.ch03 = 0.846894617278;
    msg.ch04 = 0.0497567765162;
    msg.ch05 = 0.661916514772;
    msg.ch06 = 0.124131728495;
    msg.ch07 = 0.00162243270722;
    msg.ch08 = 0.0798328316903;
    msg.ch09 = 0.337199907041;
    msg.ch10 = 0.750828918249;
    msg.ch11 = 0.164411164617;
    msg.ch12 = 0.473059823125;
    msg.ch13 = 0.718275916782;
    msg.ch14 = 0.907033061589;
    msg.ch15 = 0.820172355319;
    msg.ch16 = 0.224641484174;

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
