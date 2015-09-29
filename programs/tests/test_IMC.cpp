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
// IMC XML MD5: 890378262006e51241ae862c1125b2dd                            *
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
    msg.setTimeStamp(0.538743636424);
    msg.setSource(11656U);
    msg.setSourceEntity(121U);
    msg.setDestination(23550U);
    msg.setDestinationEntity(32U);
    msg.state = 216U;
    msg.flags = 156U;
    msg.description.assign("EXIDHPMZQAUIMAQSFFMRKRHGCB");

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
    msg.setTimeStamp(0.177794125005);
    msg.setSource(32322U);
    msg.setSourceEntity(221U);
    msg.setDestination(45470U);
    msg.setDestinationEntity(78U);
    msg.state = 89U;
    msg.flags = 249U;
    msg.description.assign("FHXEFXPOHOYIYPGERNWJTMWOZCJOLCBAKFBSDNRWMPUNGGXZQGFDPQGQUAKAZBKZKECJIVNDFYIVKCHZVVAUBAXKJSHYFSXLLUPESLFJVPQTOSLENIYRCXU");

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
    msg.setTimeStamp(0.75081921094);
    msg.setSource(14959U);
    msg.setSourceEntity(241U);
    msg.setDestination(20668U);
    msg.setDestinationEntity(103U);
    msg.state = 228U;
    msg.flags = 178U;
    msg.description.assign("PFUYQWUROGOOHVYMBCDHKSDNFVBAACWQYJWFKZVNRIPBWDZNAZMNESAHGYTBSCPSXCQI");

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
    msg.setTimeStamp(0.00180769209689);
    msg.setSource(24905U);
    msg.setSourceEntity(39U);
    msg.setDestination(34565U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.369001209484);
    msg.setSource(48893U);
    msg.setSourceEntity(117U);
    msg.setDestination(50598U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.454798735079);
    msg.setSource(8247U);
    msg.setSourceEntity(60U);
    msg.setDestination(308U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.996007355567);
    msg.setSource(946U);
    msg.setSourceEntity(136U);
    msg.setDestination(30050U);
    msg.setDestinationEntity(110U);
    msg.id = 185U;
    msg.label.assign("EVVNQLYHFYERCKQYKPDACQUPIMLNADPDPNCAIVYOCIBBXVQYNJVREBCSSIZLLANNLEJAURQHYJWREBHZOLVZTFRYAMSPROEUQPHEWOYESRVRLUVTFZHTGANINMLPEOWGBGQIOHUFWZJHWCGFEQBDWZMSMKXBJDMKXKMICTLTWSAYZLDZGAQTQWUKBXKJGXFZBXMIFTXGJMRVYJKBUH");
    msg.component.assign("VKHBUSMMQBSYJWJEGVTPYECMVUWLWYOXZFDOIZYJDZALCGQLKAGVGYEUIPIXXENRBSOZAWNKNFUCYFLLMSQITWXEIMKUSATZJTRCIMBQUXMHXLTLAYTQENFONBNFIQCVGRCYKMOIUEZPKPFTORZGULSZPRESDMOWWMRTDXBNVOWTBXHEJGKZHFAUDHLABGAHHXKVJJWDICABHSVFQSXYVTPFQJDOJLRRKQ");
    msg.act_time = 7133U;
    msg.deact_time = 170U;

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
    msg.setTimeStamp(0.323268514638);
    msg.setSource(25135U);
    msg.setSourceEntity(179U);
    msg.setDestination(23958U);
    msg.setDestinationEntity(192U);
    msg.id = 45U;
    msg.label.assign("OKHBTRUQMRYTDPUFMKFPYVCGQDFLRYLBABXNHMTSSKQFTRLKWFMGZQPEKL");
    msg.component.assign("IHUEERDAVAJFIHOWBKQTILSONURMHMMATAIOJKRTWZJHQUDBVRXZYMQSVGJQMJGBKROSFBRPGBOXOPTUYDGOFETCUFLJCNFXAMCEKAKCJRNMZSMWARNLCQXTLXCNLPRIQUPSPGDZNHWMYLJVJLDWFCLESBCBOPYHKQKPIECBSSWTQEUXVMOFTHLIAGAPWFWTQYDZN");
    msg.act_time = 52375U;
    msg.deact_time = 16262U;

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
    msg.setTimeStamp(0.433444941573);
    msg.setSource(46940U);
    msg.setSourceEntity(187U);
    msg.setDestination(14922U);
    msg.setDestinationEntity(254U);
    msg.id = 201U;
    msg.label.assign("QXKCHIJRCEURZLQIFOEJVDSQZSYGKXFBYUBDVMTPSTGPBYCEQUKBUXMOAO");
    msg.component.assign("ZLZKETEZFYSGGRTSPAHIAKEUIDSEOWJXLUNBTBYLYOPX");
    msg.act_time = 38815U;
    msg.deact_time = 4063U;

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
    msg.setTimeStamp(0.946753823085);
    msg.setSource(33891U);
    msg.setSourceEntity(66U);
    msg.setDestination(46359U);
    msg.setDestinationEntity(226U);
    msg.id = 168U;

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
    msg.setTimeStamp(0.00896889993378);
    msg.setSource(32776U);
    msg.setSourceEntity(183U);
    msg.setDestination(26838U);
    msg.setDestinationEntity(92U);
    msg.id = 184U;

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
    msg.setTimeStamp(0.591787584962);
    msg.setSource(1036U);
    msg.setSourceEntity(58U);
    msg.setDestination(24869U);
    msg.setDestinationEntity(65U);
    msg.id = 148U;

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
    msg.setTimeStamp(0.738691355459);
    msg.setSource(61636U);
    msg.setSourceEntity(162U);
    msg.setDestination(54548U);
    msg.setDestinationEntity(36U);
    msg.op = 23U;
    msg.list.assign("VYAQMWWVJUBXVYKGVPNAHZRVNUXEXTSCRAQHVGICLHBQMJKMJERFKLZGGDIAKSZZVCKDIHNUIIREMZHFLDOOLXWPUQUDXLQBYKOLOLIJRMFTJEPJJZMTICUNJXTYHXWW");

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
    msg.setTimeStamp(0.416244863295);
    msg.setSource(33942U);
    msg.setSourceEntity(127U);
    msg.setDestination(18210U);
    msg.setDestinationEntity(183U);
    msg.op = 166U;
    msg.list.assign("DCGCQHXHWKJWDSZEBPBUYARYVZIRHQLLHWI");

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
    msg.setTimeStamp(0.155946670811);
    msg.setSource(51027U);
    msg.setSourceEntity(79U);
    msg.setDestination(36436U);
    msg.setDestinationEntity(138U);
    msg.op = 220U;
    msg.list.assign("OQCNOTWUISZFLREGBIEJHLYCQJWAGXNIEYMFGSKRORCZBXGCHKCRSPDYJCGSSBBTVWWQTQCJFJZUPHXEDFFZUM");

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
    msg.setTimeStamp(0.15710674853);
    msg.setSource(38626U);
    msg.setSourceEntity(211U);
    msg.setDestination(29644U);
    msg.setDestinationEntity(236U);
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
    msg.setTimeStamp(0.366489608599);
    msg.setSource(33951U);
    msg.setSourceEntity(237U);
    msg.setDestination(9060U);
    msg.setDestinationEntity(80U);
    msg.value = 192U;

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
    msg.setTimeStamp(0.484662686896);
    msg.setSource(55836U);
    msg.setSourceEntity(245U);
    msg.setDestination(6659U);
    msg.setDestinationEntity(20U);
    msg.value = 33U;

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
    msg.setTimeStamp(0.853426826764);
    msg.setSource(50213U);
    msg.setSourceEntity(32U);
    msg.setDestination(23415U);
    msg.setDestinationEntity(82U);
    msg.consumer.assign("JWHXBSNCNBPTIRISJQLEXSRHKYOXBVLKUSGGQAEHZHVUFLEMVTRCNPDPIILCHKTQOCOOWYEUTTFREZAZJLLHVGGTDNVDISNVUKCHMKXDIJLPLZTFRGVKAITWDMEBFJSLFUNWMAMEFZZEILGWGXBNJNXW");
    msg.message_id = 5748U;

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
    msg.setTimeStamp(0.0281666042076);
    msg.setSource(30015U);
    msg.setSourceEntity(163U);
    msg.setDestination(12101U);
    msg.setDestinationEntity(30U);
    msg.consumer.assign("PAGLXUIXDDWCVNZSGUOFTYJEOHPKKZZKTYUHLVLMERCTWSULBADYFXAVOIWAXJCWBJXEERHOQZLOVRJNAICKZSZSGWQJWTICMMHQIMPABCZPSMDEIVFEDMGLHRTYHJPPBDTKDWSNJTSSDVCNBHARZVXXRUVRBUBVKGCKYBNNEFNVTIQGULPYQZKYAFUCMXRSERTHKM");
    msg.message_id = 51644U;

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
    msg.setTimeStamp(0.112308103318);
    msg.setSource(2698U);
    msg.setSourceEntity(129U);
    msg.setDestination(60452U);
    msg.setDestinationEntity(74U);
    msg.consumer.assign("VGPKDYNCBXUUGUOH");
    msg.message_id = 39321U;

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
    msg.setTimeStamp(0.478853522205);
    msg.setSource(4711U);
    msg.setSourceEntity(31U);
    msg.setDestination(43580U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.243901546786);
    msg.setSource(323U);
    msg.setSourceEntity(227U);
    msg.setDestination(5316U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.752405761274);
    msg.setSource(57853U);
    msg.setSourceEntity(187U);
    msg.setDestination(34054U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.389230452871);
    msg.setSource(57612U);
    msg.setSourceEntity(142U);
    msg.setDestination(42727U);
    msg.setDestinationEntity(80U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.538893004257);
    msg.setSource(61204U);
    msg.setSourceEntity(178U);
    msg.setDestination(30214U);
    msg.setDestinationEntity(112U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.697386808689);
    msg.setSource(48275U);
    msg.setSourceEntity(99U);
    msg.setDestination(4318U);
    msg.setDestinationEntity(243U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.0289918327123);
    msg.setSource(42111U);
    msg.setSourceEntity(119U);
    msg.setDestination(2229U);
    msg.setDestinationEntity(152U);
    msg.total_steps = 84U;
    msg.step_number = 184U;
    msg.step.assign("WMWYLLKLIPECDYDLXTJRJZKWJVOMIZNTYLQXZCROURANULVMQGGFWSSAIZFFIUENBGGUMJVXKPPVZPTVEGUTRTICSANTYHIUBZEUDEABSEROVGGHSZKTXKRIXYLSMGQJMPDHAAOHFOXEJZXGBMSHKOACYXQNPBBDRKWNYNKXQDWPETICRNRJOKBHFFZBNJOQSMHWLDNEPMFLTDQULAWHXFVCDHAAJCYQBOWKSRUCIFZJGUMQWYOVH");
    msg.flags = 49U;

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
    msg.setTimeStamp(0.985353790727);
    msg.setSource(18597U);
    msg.setSourceEntity(7U);
    msg.setDestination(62559U);
    msg.setDestinationEntity(89U);
    msg.total_steps = 82U;
    msg.step_number = 161U;
    msg.step.assign("BXQJUGWFZQNIBZIPOFGNHPAGHOCERDVDDMRNPHBTYUATYGIUXUYJJXMQKSCNRUQTCWPVTUHOLLLFEVYFNJMRGNNPHKCWIRRBJQSGFZSALIWVYESYELXQSGEIMXKHAOCVWQAORWHWGDPEABGKABFMSXSQZSSYDIJEERDTOZVDKRIFEJCAZVTVOFZPDMMFZWLUTVODMUWXTPPJUDQCN");
    msg.flags = 4U;

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
    msg.setTimeStamp(0.138465464372);
    msg.setSource(63810U);
    msg.setSourceEntity(40U);
    msg.setDestination(29918U);
    msg.setDestinationEntity(5U);
    msg.total_steps = 254U;
    msg.step_number = 150U;
    msg.step.assign("SHRLWVLXWCGJITXBPCYQJAKKHNCHBCNZRBFDQVFPCYNFLBZAGZSCUGOIIDEUOAKMRYLLMBICSKFSFAGHEYFLTMZPQTHJMBUYBSPWYRLVVPOUSMGZYOEMSRWYPSHAEQKWAUWKJQNUOUCTMWOPYGWRVQNDLEPASCTXIJIXNTHINRPIDNQADDTZBTEUEQJUXAOTLXKDVHEHOZIBQPLJWM");
    msg.flags = 194U;

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
    msg.setTimeStamp(0.982962905803);
    msg.setSource(45563U);
    msg.setSourceEntity(203U);
    msg.setDestination(10618U);
    msg.setDestinationEntity(74U);
    msg.state = 184U;
    msg.error.assign("TBGGEMXWJCPOFDZWFNRNONHQPZYMWTWULBSKBFRKADPEMDUISQAISYTSWIPWCVMKCYNBDJCXJVQUMNCUCHIVJQURXTXEKJYRAFMWVZGXDDINRQHHUYASTAXRSYEKECEOBLOTEAIUOMIHCAZJXGBZVZQLBDFUKSWMHQGIM");

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
    msg.setTimeStamp(0.521129566612);
    msg.setSource(765U);
    msg.setSourceEntity(61U);
    msg.setDestination(44455U);
    msg.setDestinationEntity(68U);
    msg.state = 152U;
    msg.error.assign("JXJRBPHGWVSDKJXTKSZUFUMDNMJLBXEHKDXPOILMDDXPSQNXMTKOKCYZENZDBHTUPHAGJOQRCCWNGKWQOUKLVFOYYKMQCVFSCGILQMCMHECJYGLISABQWAELACGINWWNWTZJNR");

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
    msg.setTimeStamp(0.132615341101);
    msg.setSource(37651U);
    msg.setSourceEntity(150U);
    msg.setDestination(32306U);
    msg.setDestinationEntity(242U);
    msg.state = 216U;
    msg.error.assign("YFCPRTNEKYKQXQCNTBKYSNWJUDWBZELDHEQNCSURHHNBGQMBFSZSEMSHXEMQJPPDNKAOHIOWQCTNLGYAJLNPOBV");

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
    msg.setTimeStamp(0.870152556987);
    msg.setSource(57599U);
    msg.setSourceEntity(26U);
    msg.setDestination(35798U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.0807646233219);
    msg.setSource(28537U);
    msg.setSourceEntity(216U);
    msg.setDestination(38340U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.990640915236);
    msg.setSource(65008U);
    msg.setSourceEntity(206U);
    msg.setDestination(40631U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.829729897935);
    msg.setSource(16958U);
    msg.setSourceEntity(143U);
    msg.setDestination(36296U);
    msg.setDestinationEntity(181U);
    msg.op = 129U;
    msg.speed_min = 0.478987354338;
    msg.speed_max = 0.992683740688;
    msg.long_accel = 0.748160426444;
    msg.alt_max_msl = 0.616795020163;
    msg.dive_fraction_max = 0.0668198690711;
    msg.climb_fraction_max = 0.111193027269;
    msg.bank_max = 0.174763049194;
    msg.p_max = 0.777374202155;
    msg.pitch_min = 0.282553487546;
    msg.pitch_max = 0.401047428759;
    msg.q_max = 0.914798418624;
    msg.g_min = 0.851720568828;
    msg.g_max = 0.596166254012;
    msg.g_lat_max = 0.417167408133;
    msg.rpm_min = 0.414981300338;
    msg.rpm_max = 0.647608413224;
    msg.rpm_rate_max = 0.578802118009;

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
    msg.setTimeStamp(0.211029206441);
    msg.setSource(31754U);
    msg.setSourceEntity(17U);
    msg.setDestination(24467U);
    msg.setDestinationEntity(15U);
    msg.op = 6U;
    msg.speed_min = 0.0261114711364;
    msg.speed_max = 0.686803199393;
    msg.long_accel = 0.161861345292;
    msg.alt_max_msl = 0.549044616545;
    msg.dive_fraction_max = 0.772019371759;
    msg.climb_fraction_max = 0.668074457868;
    msg.bank_max = 0.90320622038;
    msg.p_max = 0.396720092161;
    msg.pitch_min = 0.987135728411;
    msg.pitch_max = 0.301794310227;
    msg.q_max = 0.183893101765;
    msg.g_min = 0.341030332124;
    msg.g_max = 0.153057474447;
    msg.g_lat_max = 0.678529623731;
    msg.rpm_min = 0.808291168284;
    msg.rpm_max = 0.0224200128235;
    msg.rpm_rate_max = 0.649631460177;

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
    msg.setTimeStamp(0.540241892417);
    msg.setSource(60324U);
    msg.setSourceEntity(140U);
    msg.setDestination(12121U);
    msg.setDestinationEntity(5U);
    msg.op = 253U;
    msg.speed_min = 0.271586470896;
    msg.speed_max = 0.684077048523;
    msg.long_accel = 0.695881658584;
    msg.alt_max_msl = 0.0118024202945;
    msg.dive_fraction_max = 0.0238488954675;
    msg.climb_fraction_max = 0.103217588544;
    msg.bank_max = 0.0495280137209;
    msg.p_max = 0.99774252805;
    msg.pitch_min = 0.279549415618;
    msg.pitch_max = 0.745095617829;
    msg.q_max = 0.457220863213;
    msg.g_min = 0.282349427355;
    msg.g_max = 0.713054332949;
    msg.g_lat_max = 0.0640477826442;
    msg.rpm_min = 0.366711944036;
    msg.rpm_max = 0.629602739396;
    msg.rpm_rate_max = 0.0760337921237;

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
    msg.setTimeStamp(0.506826274937);
    msg.setSource(63220U);
    msg.setSourceEntity(180U);
    msg.setDestination(45949U);
    msg.setDestinationEntity(21U);
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 73U;
    tmp_msg_0.tas2acc_pgain = 0.951773427975;
    tmp_msg_0.bank2p_pgain = 0.792827766305;
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
    msg.setTimeStamp(0.791486645399);
    msg.setSource(64229U);
    msg.setSourceEntity(119U);
    msg.setDestination(36186U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.183075547315);
    msg.setSource(42198U);
    msg.setSourceEntity(181U);
    msg.setDestination(26769U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.0781148863043);
    msg.setSource(112U);
    msg.setSourceEntity(75U);
    msg.setDestination(33260U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.942384230971;
    msg.lon = 0.2007210847;
    msg.height = 0.280379307229;
    msg.x = 0.957258225842;
    msg.y = 0.587769486594;
    msg.z = 0.343533151822;
    msg.phi = 0.759599512725;
    msg.theta = 0.727225065498;
    msg.psi = 0.507582611758;
    msg.u = 0.582771069631;
    msg.v = 0.997454915775;
    msg.w = 0.14415903884;
    msg.p = 0.465094217757;
    msg.q = 0.963864343891;
    msg.r = 0.32859888392;
    msg.svx = 0.388543051589;
    msg.svy = 0.547801262917;
    msg.svz = 0.965385287617;

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
    msg.setTimeStamp(0.10050354315);
    msg.setSource(12574U);
    msg.setSourceEntity(238U);
    msg.setDestination(4763U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.843709234741;
    msg.lon = 0.128381923459;
    msg.height = 0.357565525495;
    msg.x = 0.88294164396;
    msg.y = 0.956301231999;
    msg.z = 0.882904737527;
    msg.phi = 0.601324075631;
    msg.theta = 0.796449445549;
    msg.psi = 0.496753215767;
    msg.u = 0.895977230786;
    msg.v = 0.738117698309;
    msg.w = 0.897319592989;
    msg.p = 0.800482263688;
    msg.q = 0.448134342779;
    msg.r = 0.329679144701;
    msg.svx = 0.0721963635946;
    msg.svy = 0.108478002376;
    msg.svz = 0.852573491835;

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
    msg.setTimeStamp(0.772427835037);
    msg.setSource(59787U);
    msg.setSourceEntity(49U);
    msg.setDestination(35792U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.139127889624;
    msg.lon = 0.450962641134;
    msg.height = 0.966338402391;
    msg.x = 0.718907437375;
    msg.y = 0.926662245144;
    msg.z = 0.0930400769123;
    msg.phi = 0.0119714998082;
    msg.theta = 0.740389945695;
    msg.psi = 0.742871617981;
    msg.u = 0.943501450139;
    msg.v = 0.974742332125;
    msg.w = 0.615517146242;
    msg.p = 0.689039375105;
    msg.q = 0.524010720133;
    msg.r = 0.33911455368;
    msg.svx = 0.883707313616;
    msg.svy = 0.387381397134;
    msg.svz = 0.075506825447;

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
    msg.setTimeStamp(0.918653468867);
    msg.setSource(55263U);
    msg.setSourceEntity(247U);
    msg.setDestination(58811U);
    msg.setDestinationEntity(46U);
    msg.op = 70U;
    msg.entities.assign("OUTSYPNDYAFXTVTUZRDSTFSPBWKTNLJZZUSXESQWDCLGAVQAVEEIIYAMEZFVSOPJRGFYWMWLOLHUNMKJDQNUPRUJJITMZOYQYELUBIGDCKCDCPWJNZNHVGHSCVRKWIPDJZQXFCXXDNEFEKROXXAEDPXRMVWBFHFBNAHQNFKMGBHWBGICEIDQCZMJAGSMUHOAJKQQXILRYXTHIJKLHOMKTGMKPOBSTWOFYCZVBPYVLRBAURAT");

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
    msg.setTimeStamp(0.831026569654);
    msg.setSource(1068U);
    msg.setSourceEntity(185U);
    msg.setDestination(46312U);
    msg.setDestinationEntity(51U);
    msg.op = 237U;
    msg.entities.assign("YUGPDNSMIKUVCEXQOCLSWLRZMDFDBBYOKFYPZKJCDEFOLIHGVOTZXJNLAOEDZJEAFUZARXKMWEVBAVQMPTVIZYXJSSVQXJWQOOXMALAWDNIZPHPSACLYYDTIOUXYGBRTYEYKHQHRUH");

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
    msg.setTimeStamp(0.384477876465);
    msg.setSource(10552U);
    msg.setSourceEntity(254U);
    msg.setDestination(28746U);
    msg.setDestinationEntity(199U);
    msg.op = 35U;
    msg.entities.assign("WJMEZIYYXDZVZQPPRTLUBLNMXOQNIRTCSSWDQNRCUXVCTFACMIMKOPZACLIZNRKYPOUSMBOFYHGQJHAWMAJBXYEELIXRLHGNJGFVHIUBSHEFFBWUWYDTNONKRBVQJTHGQJKHEYGYRUTIKJCAVGQBJWOMFBAZAKLCDWDXTIXCZLQBMDG");

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
    msg.setTimeStamp(0.76100147531);
    msg.setSource(50121U);
    msg.setSourceEntity(10U);
    msg.setDestination(373U);
    msg.setDestinationEntity(181U);
    msg.type = 216U;
    msg.speed = 51798U;
    const char tmp_msg_0[] = {-45, -88, 97, -37, 6, 98, -121, 34, 114, 42, -90, 1, -85, -50, 47, 60, -12, -117, 76, -17, -72, 63, -46, 37, 100, -10, 1, 72, -3, -23, 75, 115, 119, 28, 13, -65, 11, 48, -107, -102, -115, 9, -8, 44, -126, -101, -55, -81, -124, 15, 86, 53, -14, 48, -116, -121, -7, -4, -61, 73, -84, -128, 77, 66, -111, -70, 1, 23, -1, -39, -88, -123, 29, 1, 52, 114, 39, 96, -13, 60, -102, -44, -82, -13, 71, -69, 51, 110, -38, 34, -110, -41, -126, -61, 120, -24, 61, -125, -122, 1, 42, -76, -81, 21, 5, -11, -38, 101, 88, -32, 73, -73, -87, -120, 26, 3, 67, 93, -74, -72, 84, -12, 126, 106, 99, -75, -27, 65, -16, 125, -38, -125, -35, 26, 112, 46, 120, 125, -89, 5, 8, 23, -85, 20, 121, -10, 109, -58, 38, 111, -32, 13, -17, -49, 93, 102, -121, -17, 65, -44, 97, -12, 59, -15, 90, 60, 28, -83, -86, -2, 25, -112};
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
    msg.setTimeStamp(0.347411277258);
    msg.setSource(35923U);
    msg.setSourceEntity(115U);
    msg.setDestination(1647U);
    msg.setDestinationEntity(129U);
    msg.type = 108U;
    msg.speed = 40014U;
    const char tmp_msg_0[] = {108, 69, 47, 33, -109, -34, -57, 72, -47, 52, 58, 81, 123, -60, 5, -57, -92, -72, 4, -66, 83, 75, 6, -91, 118, -26, 87, 46, -95, 43, 66, 79, -19, 1, 91, -29, -1, 63, -71, 74, -2, -43, 27, 41, 3, 2, -27, 74, -115, -115, -123, 46, -120, 94, 47, -96, 104, 95, -95, -31, -38, 65, 61, -69, 91, 52, -37, 22, -21, 15, -22, -49, -76, -3, 19, 8, 10, -60, -9, 114, -86, -71, -122, 25, -118, 51, 113, 57, 11, 36, -42, 68, -39, 8, -115, 62, -19, 65, 96, 78, 20, -35, -122, 56, 24, 28, 44, -66, -109, -57, 120, 94, -99, 26, 38, -61, -10, 120, -116, 105, 47, -121, 109, 1, -96, -99, 60, 84, 71, -68, 37, -113, -1, 99, -111, 126, 21, 2, -72, -89, -89, 95, -5, -57, -19, 119, 33, -17, 46, 122, 86, 50, -108, -65, 44, -115, 45, 66, 30, -57, 78, -74, 120, -99, 87, -94, -32, -64, 73, -120, 3, 44, -121, -84, 9, -102, 111, -117, -100, -117, 84, -107, 7, 22, -51, 6, -110, -26, -99, -108, 37, 115, -23, -51, -102, 41, 26, 126, -62, -46, 111, -49, -21, -76, -72, -95, 79, 108, 19, -109, -33, 28, 26, -59, -37, -124, 5, -98, 12, 105, -58, -91, -14, 92, 74, 78, -30};
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
    msg.setTimeStamp(0.393130878302);
    msg.setSource(15361U);
    msg.setSourceEntity(55U);
    msg.setDestination(63418U);
    msg.setDestinationEntity(242U);
    msg.type = 191U;
    msg.speed = 8201U;
    const char tmp_msg_0[] = {83, -74, -64, 54, 107, 90, 25, 125, 22, -23, 85, -111, 61, 54, -104, -21, 89, 12, -29, 44, -108, -108, 32, 31, -73, 7, 49, -5, 96, -108, 1, -72, 108, 31, -28, 41, -61, 110, 27, 64, 14, 65, -40, -62, 26, -104, 112, 33, -7, -2, -102, 97, -119, -71, 69, 24, -106, 25, 79, 68, 56, -66, 69, 53, 69, 11, -9, 102};
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
    msg.setTimeStamp(0.961984595181);
    msg.setSource(3080U);
    msg.setSourceEntity(62U);
    msg.setDestination(63808U);
    msg.setDestinationEntity(172U);
    msg.op = 226U;
    msg.tas2acc_pgain = 0.58481162972;
    msg.bank2p_pgain = 0.552707191989;

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
    msg.setTimeStamp(0.594692409413);
    msg.setSource(53780U);
    msg.setSourceEntity(50U);
    msg.setDestination(18634U);
    msg.setDestinationEntity(79U);
    msg.op = 47U;
    msg.tas2acc_pgain = 0.169341964634;
    msg.bank2p_pgain = 0.444809757822;

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
    msg.setTimeStamp(0.188615276066);
    msg.setSource(19360U);
    msg.setSourceEntity(103U);
    msg.setDestination(55025U);
    msg.setDestinationEntity(104U);
    msg.op = 226U;
    msg.tas2acc_pgain = 0.641154403657;
    msg.bank2p_pgain = 0.225238968592;

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
    msg.setTimeStamp(0.13565497832);
    msg.setSource(9392U);
    msg.setSourceEntity(132U);
    msg.setDestination(59406U);
    msg.setDestinationEntity(29U);
    msg.available = 826849353U;
    msg.value = 245U;

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
    msg.setTimeStamp(0.114290262825);
    msg.setSource(50376U);
    msg.setSourceEntity(169U);
    msg.setDestination(17514U);
    msg.setDestinationEntity(219U);
    msg.available = 109167064U;
    msg.value = 161U;

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
    msg.setTimeStamp(0.500856167444);
    msg.setSource(64940U);
    msg.setSourceEntity(201U);
    msg.setDestination(26869U);
    msg.setDestinationEntity(166U);
    msg.available = 615004542U;
    msg.value = 228U;

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
    msg.setTimeStamp(0.715474743635);
    msg.setSource(54125U);
    msg.setSourceEntity(147U);
    msg.setDestination(30462U);
    msg.setDestinationEntity(57U);
    msg.op = 93U;
    msg.snapshot.assign("SIUMBKOOHQVUGSSNFBQBRXTNLYYMARKCRCBECWJOVTQUTLWXGMHYADYOUFCPYDKWBERFFQSWXJRJDZQKBTGUVRZKFUAAJPUTXPYJIAPMZXFHTZCXSHPJDCCWMNAGJVSJYKNAYTLFMCEDISLOLEVVLHXORELXGXDLNNFRHKMPMIWW");
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EVCRNUSQZMEZSJTUFECFDAIIXDHARJZZLINJDHGVZQJFZOLLYIYOHTLJWUMEWHEWQAUVDRXAIUGKPSKYMYTOLAKDXGBRVTJUFQ");
    tmp_msg_0.description.assign("MQQSWSKWIKTHABHATRYXPFRTKZJMKSPSXURRUGEZBMRTVEEHBHXKISDHPMYOLYEZZANAQLMZECZWIXKITKUVTLAEXORCBYCFLPEDLXJIKDIQCSWPCSCUJWNFFJJUAGHSLANHKAMEBNRYGMOZMPDHWOJPLYRUPXDLVOHNGIDAVBJGQIDNEFEGOGXDWVQICZXUFTBFQNSJILOHVFUNZNWGGFR");
    tmp_msg_0.vnamespace.assign("ELNAKJNHKYOMIRJPAEBVWCFUZFSALJEHORSCGQUABJTAGSXTYCGMPKUP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CZSHIEZQPJSCXQEMFLLQSAYYFHTVKMJSMIWNBVXUJEOYCSMGHGVLJOXPZRTBTFLJYQPLUROSQEWQCPWVAJBKLUDKLESRCXODCEGORRLCLZINJQYGAAITDNFXZCHGNVNEKWHTTBRDXWPOOIKMDDUB");
    tmp_tmp_msg_0_0.value.assign("LJJLTNHPVWMKRDYAPNQDUCXSVDTEPCXALQJWMFRBZDEPFIZAUIJUFCDZIAFOUWNUHBXGTCEQSOSORCHYAMOVNQHFOAPBZRGLQIAYRVZHKYMCVPFBQTFWROWTSPOCQBSTGEXMY");
    tmp_tmp_msg_0_0.type = 116U;
    tmp_tmp_msg_0_0.access = 156U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RWIDBHLTDSTMDAZQSETNOCFVVEUQSBVMUAKYAEGACRJHJMZJXPCRKNGMWLOAKKLTSYUWPDQTFNFMTLHWCPJGOPQAQDXFHKY");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("NCDURWDHKBVHFGLGHQBRPPFYUDTFDHELDVANAXTFEWWFJEOOFVKKHGOKSVCARQBOILTJJIAEJLXHMXEGMZTXQAJUMIHNJCMJTPRIFROGUAYKIXEGLZZEKSRYUTSSGNZSWQVBZZGZADBOJEVLPWIMNUQSOWIKIPZRQMQKLNURTRNGXUVEKZPXTVGVSHBOWXWLDFYWDIQYVBDTZWKNC");
    tmp_tmp_msg_0_1.dest_man.assign("EKTMBSOCDNCLSGFCWZEWYFEBNTSCDMKNBPMIHJKQHYZNNAHXQBVLHBGLEGQQNFKRGURZQYNPDSVJJOHMONKTMWGVUDJUMQIGIJIREHGZWZDYJHBRVLNRPPIUZOVXRCIIALCMPSUYVZATLAOKLFDKACLAFDTYMXUUJUXSDEVFKLZRXAUW");
    tmp_tmp_msg_0_1.conditions.assign("JLLTWHPBJERV");
    IMC::SonarData tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.type = 97U;
    tmp_tmp_tmp_msg_0_1_0.frequency = 1283060546U;
    tmp_tmp_tmp_msg_0_1_0.min_range = 61814U;
    tmp_tmp_tmp_msg_0_1_0.max_range = 41888U;
    tmp_tmp_tmp_msg_0_1_0.bits_per_point = 228U;
    tmp_tmp_tmp_msg_0_1_0.scale_factor = 0.76233037699;
    IMC::BeamConfig tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.beam_width = 0.41351677698;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.beam_height = 0.651465882755;
    tmp_tmp_tmp_msg_0_1_0.beam_config.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    const char tmp_tmp_tmp_tmp_msg_0_1_0_1[] = {-8, -20, -25, -112, 15, 92, 52, -12, 11, -56, -38, 5, 23, -125, 103, 90, 90, 17, -16, 87, 109, 97, -37, -50, 109, -30, -14, -110, 120, 116, 19, -96, 101, 47, 114, 91, 111, 29, 66, -64, -109, 58, 24, 89, 43, -103, -67, -122, -22, -39, -97, 91, -46, 98, 53, 7, -43, 83, -89, 20, -7, -71, -50, -115, 39, -10, 9, 7, 124, 72, 20, -36, 14, 45, -105, 16, 51, -105, -117, 101, 32, 39, -119, 63, -62, -113, -88, -17, 39, -19, 108, 40, -43, 12, -55, 94, 0, 120, 34, -41, 37, -11, -20, 10, 12, -114, -4, -51, 36, -72, 100, 86, 56, -108, 47, -82, 83, 13, 84, -31, -110, 42, -83, 33, 121, -101, 125, 55, 26, 124, -56, -71, 56, 38, 66, -28, 96, 7, -36, -28, 59, -69, -128, 126, 51, -127, 84, -10, 76, -48, -94, 10, -108, -28, 53, -74, -106, -33, -17, 56, -61, -22, 82, 124, -54, -8, 122, 106, 35, 46, -114, 106, 24, 37, 17, -80, -109, 4, 89, 72, -95, 81, 94, 84, -83, 28, -63, -48, -92, 85, 77, 64, -98, -123, -40, -58, 16, -93, -47, 50, -95, -56, -116, -52, 94, -59, 48, 108, 8, -50, -10, 31, 3, 86};
    tmp_tmp_tmp_msg_0_1_0.data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_1, tmp_tmp_tmp_tmp_msg_0_1_0_1 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_1));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.611762483912);
    msg.setSource(15949U);
    msg.setSourceEntity(106U);
    msg.setDestination(21674U);
    msg.setDestinationEntity(215U);
    msg.op = 84U;
    msg.snapshot.assign("TMJRDUDZYRXKJPMISPWTKDQXZBKAVEUYKUFTPGEIGJXYJOURUPYXRORGMELSZODEXKCBQZDPNEANZGAHUPNNUHLGVSILOWVFILVFLAYTAWFYSBDWYNC");
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.0753644834447;
    tmp_msg_0.x = 0.537865850279;
    tmp_msg_0.y = 0.61834711598;
    tmp_msg_0.z = 0.981706388929;
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
    msg.setTimeStamp(0.739185856178);
    msg.setSource(11983U);
    msg.setSourceEntity(76U);
    msg.setDestination(44614U);
    msg.setDestinationEntity(160U);
    msg.op = 171U;
    msg.snapshot.assign("RPHZJGCCOKHRPEZBLUJMFINIBCEEXPXIGQDTULSPRISOUNJCFKNZWFQLFJKVTSRUVVEFSBYDRMCALDYENMWDKY");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 152U;
    tmp_msg_0.mnames.assign("DSRUUKPBOEKYAPVHSLPJPPFNKWGQLVGGQRWZHVMETZSXRCOVXWAAFENWIXZJUKORVJCQPWKI");
    tmp_msg_0.ecount = 114U;
    tmp_msg_0.enames.assign("IABHLMCFVESVSPYMEEZUFFTSXNSFJHGIXKVROGGRFKVGLEURCFDYTIINOTWYFDSJTJUNBDVOHLNQTHFHUBMADFJGXZQZDPIBHRTEVOZUOVNOIWAEXYDZBQEOBOMYHKOCWCRYIRDKYJQXNKGAQXUMZHMMVLTNPJHWOBVWCGGWCDZJKSBRQCGXPZPX");
    tmp_msg_0.ccount = 98U;
    tmp_msg_0.cnames.assign("PCSSWWBWNA");
    tmp_msg_0.last_error.assign("LJNGKPHPTJYIRGYFCXOLDBTAZWMNUFXRBAEMVWKKPITXRZQUORCSSTFUESEUSFHSKVLBHVPHMECZFBNHUXQZIHUNOBWBXFLPLTWJECLNOFVICAWLGOQQSCCZWNJVEHDAXQGGRJKQGFYWAHURYCDKMXIEASMDMUFGNVIQEZZYJDGMKJAXOODNUUDABXCJZRWNLSOXTBDIGTIQWAKYIHEBPEFVKVVGYOP");
    tmp_msg_0.last_error_time = 0.599643585214;
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
    msg.setTimeStamp(0.628332518325);
    msg.setSource(25549U);
    msg.setSourceEntity(205U);
    msg.setDestination(64897U);
    msg.setDestinationEntity(223U);
    msg.op = 82U;
    msg.name.assign("AKWUCNBCEKONNZFVQDOALEWHXFXIJDWZZRAUVOWLPQGMVHSGHKXEUBGDRTEZJFQYMBADHMVNTCSPFQYQRJMPIUJQNFROFLEPKOOVUBWKXBLINAAIHRIYLUHPDTFTEJNVIEPZAHRGSSKSYZBVRGPTJLYOL");

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
    msg.setTimeStamp(0.801433099273);
    msg.setSource(32062U);
    msg.setSourceEntity(232U);
    msg.setDestination(39105U);
    msg.setDestinationEntity(194U);
    msg.op = 18U;
    msg.name.assign("INGXJANQCUZCPPORDMYGQFTRJPMXAQTJUKHNHHOILKFGRDEKTBVCSXSSQWDYDGRWTFLMZBVSSVYKIVLTHYEAHPLSKDYOHLXNIPTZTCKZTRAFEYICNVFJDHRDVPZZRUXWIPNQCGXNELZPSCLODBMEDXXUUKYUUMBBRILUAQVUVJBFISMZOMKSZTEJAAZEOKGVWBDFXMOHPSTGBQQK");

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
    msg.setTimeStamp(0.602313258592);
    msg.setSource(51705U);
    msg.setSourceEntity(149U);
    msg.setDestination(47868U);
    msg.setDestinationEntity(191U);
    msg.op = 104U;
    msg.name.assign("ZLRNNYOPACJLUWNIKVZDDFJXEZTCSPQDKOZLKVRGCMDPTGKUHCBIHPGHKEECELDIMNTBIUFHWJOCDWUFMVCAJSYAMAZRAQFVHBTXQOSAYLMGEAQFTZLLPNCHNWZTQRSHDMRUXSUWJRXQOKFJKSORJXLOSXGOFPYMXPBXYRIEPKVUIIDWUEGBJ");

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
    msg.setTimeStamp(0.318091647917);
    msg.setSource(22944U);
    msg.setSourceEntity(186U);
    msg.setDestination(8266U);
    msg.setDestinationEntity(88U);
    msg.type = 71U;
    msg.htime = 0.704591668681;
    msg.context.assign("FEDBNLPMUQIXNMVZBNWVZWULAUHSXJSURIQXWGYHKEMUZUBPIAV");
    msg.text.assign("MBXYKYVEGCWGWGKNSRKOYHNGTBJBOYJKQQWZFSUMTPIUSZRAAUPLAEAXIXCKIPDFSEFQGHVXINKJHVIKQETLOQOWMBZRYEDVLBONFFDHLDLCHTGZDVJXPFTUFGWBCEHYDNTVKASYZETZMLQEQRZADJRJIPH");

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
    msg.setTimeStamp(0.978072277009);
    msg.setSource(48822U);
    msg.setSourceEntity(72U);
    msg.setDestination(51406U);
    msg.setDestinationEntity(37U);
    msg.type = 65U;
    msg.htime = 0.703682988679;
    msg.context.assign("QMTYSKCKUDZUYYFSIOSPVRIZRIALEMRPDALFBZHRVAYWLAGVVXENANQCWCGUHNBPEJLVLOQHWUFXAFLEZAKMLRWOPCNJQRGD");
    msg.text.assign("FCIKLFVPNTUOGAMVDVXAQXCGTIDPTUKRWZHLZYCOFQRKTBYSDIDPBFAYWPOEZHBFHPBVZNERNUZTKYEVXISNSGQJSJCVEYGEOYMYTDMGPOENCBXEUCEQAWOQRUSFSVIOGIFXDBFQXTWNCVRZHAKXOJNWQBZSUXWTJRXBHLHILIGJEYHCFM");

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
    msg.setTimeStamp(0.493446923026);
    msg.setSource(18009U);
    msg.setSourceEntity(35U);
    msg.setDestination(45837U);
    msg.setDestinationEntity(142U);
    msg.type = 194U;
    msg.htime = 0.397219528236;
    msg.context.assign("WRBMYRRTGXYUJDCIEDACKXJFMKQVBQMHRLDTFNBVPNGJUMQUBQNVLEVWRHSAHCXXZWZUMTZTXPPGBMSEKIPJIBJZHDBEQOFMFYMNUIKRJWPEHEWRGZGSUUSLCOTFZSYWDEYYGWPUEFJVFAIQZWXWSCOQLLURGYAOCTHFKFGICMTLZBHKGZNDSKNIMJTOPXOFAAIOVXZNBCYSTPBDP");
    msg.text.assign("ZJUVBREQVHQLUGANDJURAUDXHIYOTLKXMHEKZFXXNGDVMPOYUMXXJOLXWQWFZTBFWTIMSRUWBOHDLRPNKPMXZCTHESPTPHWYGRICQZSSTCQDCJUJYLWBACFCOSHNBSJIETAUANOHFZKCAKJFWMTRDNGSIJUWCNLKRIVGCWYIHPKULMVSKRGYBIEONGQNAPVFEOGSPEYVLQJADYKSLZVBVXOZ");

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
    msg.setTimeStamp(0.0455440263069);
    msg.setSource(58708U);
    msg.setSourceEntity(217U);
    msg.setDestination(17720U);
    msg.setDestinationEntity(67U);
    msg.command = 176U;
    msg.htime = 0.483223982294;

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
    msg.setTimeStamp(0.274705881929);
    msg.setSource(62110U);
    msg.setSourceEntity(169U);
    msg.setDestination(49766U);
    msg.setDestinationEntity(65U);
    msg.command = 26U;
    msg.htime = 0.936800907275;

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
    msg.setTimeStamp(0.696925705775);
    msg.setSource(30695U);
    msg.setSourceEntity(62U);
    msg.setDestination(36220U);
    msg.setDestinationEntity(130U);
    msg.command = 89U;
    msg.htime = 0.271589562647;

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
    msg.setTimeStamp(0.18610748517);
    msg.setSource(22336U);
    msg.setSourceEntity(138U);
    msg.setDestination(14128U);
    msg.setDestinationEntity(137U);
    msg.op = 148U;
    msg.file.assign("IBHRTNELUASMONKLXZWIAMDLIEQCKFOCYFOOGRSKZQKSYYJYGSDMUNVIIAXJFPNJXLWEQVPMWCWKRLNTJPPETPXGPVTKBCADIBYMVWRZMCFEVPZKRJLXUSVL");

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
    msg.setTimeStamp(0.302870789856);
    msg.setSource(18114U);
    msg.setSourceEntity(159U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(89U);
    msg.op = 1U;
    msg.file.assign("YLTGTVQVIPEJRRYLC");

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
    msg.setTimeStamp(0.272811795933);
    msg.setSource(16098U);
    msg.setSourceEntity(32U);
    msg.setDestination(45404U);
    msg.setDestinationEntity(202U);
    msg.op = 79U;
    msg.file.assign("IKTPYACUOAJYBHYESADDYKUXWIUJXLIJOVLWQAVXJWHZLAXBZJRMHHHQEFKEYDFRVHZBBHGUVBMRTOPPRUUGAIWXPGAZRDXDMYGLSLZWSMWQRKFCGBMQKZDFOFMVY");

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
    msg.setTimeStamp(0.387803088879);
    msg.setSource(56579U);
    msg.setSourceEntity(37U);
    msg.setDestination(14599U);
    msg.setDestinationEntity(12U);
    msg.op = 126U;
    msg.clock = 0.561408805263;
    msg.tz = -117;

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
    msg.setTimeStamp(0.66717697721);
    msg.setSource(13738U);
    msg.setSourceEntity(55U);
    msg.setDestination(20501U);
    msg.setDestinationEntity(60U);
    msg.op = 168U;
    msg.clock = 0.315856118095;
    msg.tz = -14;

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
    msg.setTimeStamp(0.750624819164);
    msg.setSource(18901U);
    msg.setSourceEntity(160U);
    msg.setDestination(14866U);
    msg.setDestinationEntity(253U);
    msg.op = 194U;
    msg.clock = 0.54669150834;
    msg.tz = 34;

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
    msg.setTimeStamp(0.62095295419);
    msg.setSource(24052U);
    msg.setSourceEntity(225U);
    msg.setDestination(4174U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.495800604524);
    msg.setSource(18645U);
    msg.setSourceEntity(236U);
    msg.setDestination(10493U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.460656726718);
    msg.setSource(48217U);
    msg.setSourceEntity(252U);
    msg.setDestination(45931U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.883217284984);
    msg.setSource(11697U);
    msg.setSourceEntity(121U);
    msg.setDestination(28562U);
    msg.setDestinationEntity(55U);
    msg.sys_name.assign("FBROEVFLFKWHKNRQBOBEFMREXFNNXKATLGINWGWMLRQJEPKADGNHRTNECRYQHLGOZSHMHYNJVQIMTABOXH");
    msg.sys_type = 110U;
    msg.owner = 28047U;
    msg.lat = 0.586063003192;
    msg.lon = 0.776256131976;
    msg.height = 0.611084842168;
    msg.services.assign("MRSNMSVJFSRYYNQMMXQNGKDJSDUEWBIUXQINRYOGDOQYVKEHXJWVPDHWAUOAGFCBRQLWXXTNMGWLOZOLDYJQVUZCTQJDEFFNUABOMIAVIUOGGYLAOZQJRUVPZBAGHHSIPLAFEWENHDFROVCGKPBZYXEVFMRWCXKPFUWLTZALNETORTQARJKAZKKZWZJHIPLWXLPTSPIBTETRYEBUKDZHMDYCMNNXGLPHCPGVDISFUHFCCJCXKBTVKCH");

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
    msg.setTimeStamp(0.533275278204);
    msg.setSource(58215U);
    msg.setSourceEntity(15U);
    msg.setDestination(8103U);
    msg.setDestinationEntity(5U);
    msg.sys_name.assign("HNDSYMAQKLKKZYVRCAMPYYKLCTUZWFCHXJXHRHEJMW");
    msg.sys_type = 143U;
    msg.owner = 51840U;
    msg.lat = 0.578542529574;
    msg.lon = 0.582381610373;
    msg.height = 0.420095417167;
    msg.services.assign("XESIBZRTYNNJGJXJILQIVQUWVASUGDDCVTROHAXGAHDFUBXDHAYEZIRHSZQSEXWJKLZTC");

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
    msg.setTimeStamp(0.979946008263);
    msg.setSource(61493U);
    msg.setSourceEntity(3U);
    msg.setDestination(30854U);
    msg.setDestinationEntity(215U);
    msg.sys_name.assign("TGJHMXAOUNOVKKUJRZJKCLOVSSFGUKLISTMIEPYORMHTIMINSMFYZQRVGWTMZPIUEWWIRWVSDLHFFENOUXXVSXEZEYKBTCUNAUAGULFIQPAVTOHVDDJQBEKOJYPWHGETXSRCRSXQJPFTEXGHEIKMCSLJOQBMPYUFLMZLONNPCKDQDPTBFZPYBOPURGQB");
    msg.sys_type = 174U;
    msg.owner = 1437U;
    msg.lat = 0.0219010720399;
    msg.lon = 0.437569240648;
    msg.height = 0.0870488176588;
    msg.services.assign("LKABHQZYLXQXVJFZZDYTILJUTNHMKWVGNQHXMCKAVXZPVPOGKOQGIZIDEE");

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
    msg.setTimeStamp(0.407644536314);
    msg.setSource(55508U);
    msg.setSourceEntity(155U);
    msg.setDestination(42366U);
    msg.setDestinationEntity(212U);
    msg.service.assign("OGXGEBIHSWVIREZYPPAXWHHXWPSKIIMPNBRGPFTXFEIHQYHJFLUKCQJJKHMUZUGTFBMHHBWZBPWSJRAVNJJAOZODTXVRWVGJYYMYKLLXZJNDOVINCG");
    msg.service_type = 54U;

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
    msg.setTimeStamp(0.0548638060779);
    msg.setSource(2645U);
    msg.setSourceEntity(245U);
    msg.setDestination(17829U);
    msg.setDestinationEntity(208U);
    msg.service.assign("NEABIFKHRCMQPMZWQGPEIXOXRYODLTJQDVTOAJONWHITRCXFRHPCLMBCYWZZBURMMVSZHIGFCFMKBEAQYKWEUHLRBDCXUNIAPXHHNDNXJPGKPPITEIWRGUAYCKAFFQSEFQTJOFIKFTDVWUDMVAWTJUZEBRMVUMTGUKAFPGYLLJXJSMTHOZZBELZPSOJJNQXDWVSUAOLGSNLGHITIEKDZKSDRGYPYCOONXVEGAJLHQ");
    msg.service_type = 31U;

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
    msg.setTimeStamp(0.409788678606);
    msg.setSource(19692U);
    msg.setSourceEntity(227U);
    msg.setDestination(55811U);
    msg.setDestinationEntity(42U);
    msg.service.assign("JKKHZVJEOUKPCBIQIIJGXXNDVOFPLSHXNRLDCUMRUMYCSYCLHQKXDFSUQDMJFBREEQNDOEVLUPUQATJXSYWNGZKZPRTLYOAABBKJSPDAQROYCBVKIFVPJWKRCLFYFFGSIBQUUDUMCNVIEQUMPOVNAIEWPEFEXZTIFHBGWEMJMGXHNMJOLTTYSVEGWXNYQITKOZJNAYDQWIZHGTPHNCASMWBPZZMXTSATFBGWXRR");
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
    msg.setTimeStamp(0.664229591207);
    msg.setSource(31052U);
    msg.setSourceEntity(191U);
    msg.setDestination(18025U);
    msg.setDestinationEntity(121U);
    msg.value = 0.868611792947;

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
    msg.setTimeStamp(0.778558848468);
    msg.setSource(37909U);
    msg.setSourceEntity(164U);
    msg.setDestination(48562U);
    msg.setDestinationEntity(238U);
    msg.value = 0.406403115529;

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
    msg.setTimeStamp(0.925734397479);
    msg.setSource(48981U);
    msg.setSourceEntity(73U);
    msg.setDestination(47895U);
    msg.setDestinationEntity(238U);
    msg.value = 0.0526220858598;

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
    msg.setTimeStamp(0.78639382939);
    msg.setSource(62401U);
    msg.setSourceEntity(98U);
    msg.setDestination(55025U);
    msg.setDestinationEntity(45U);
    msg.value = 0.208834237652;

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
    msg.setTimeStamp(0.56959707508);
    msg.setSource(39566U);
    msg.setSourceEntity(149U);
    msg.setDestination(2146U);
    msg.setDestinationEntity(25U);
    msg.value = 0.497691024385;

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
    msg.setTimeStamp(0.618999849747);
    msg.setSource(64995U);
    msg.setSourceEntity(138U);
    msg.setDestination(39152U);
    msg.setDestinationEntity(77U);
    msg.value = 0.828890989268;

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
    msg.setTimeStamp(0.883782268631);
    msg.setSource(35173U);
    msg.setSourceEntity(181U);
    msg.setDestination(25679U);
    msg.setDestinationEntity(130U);
    msg.value = 0.616121082372;

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
    msg.setTimeStamp(0.572861446662);
    msg.setSource(12568U);
    msg.setSourceEntity(48U);
    msg.setDestination(11610U);
    msg.setDestinationEntity(250U);
    msg.value = 0.942242507445;

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
    msg.setTimeStamp(0.224101090198);
    msg.setSource(39587U);
    msg.setSourceEntity(174U);
    msg.setDestination(3012U);
    msg.setDestinationEntity(149U);
    msg.value = 0.929620418668;

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
    msg.setTimeStamp(0.3637808849);
    msg.setSource(62235U);
    msg.setSourceEntity(78U);
    msg.setDestination(42399U);
    msg.setDestinationEntity(21U);
    msg.number.assign("OWUNDUZZCRFBHTLOYESXJNJKIMORJCTLPCXGSCWMVYFWQQEHGXDBBXXGJROIQENKLLTMHRQFUPFUHODTVQATDGZPPIJSWBYG");
    msg.timeout = 31183U;
    msg.contents.assign("MFSIQXYUJJIMK");

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
    msg.setTimeStamp(0.547610709612);
    msg.setSource(10163U);
    msg.setSourceEntity(31U);
    msg.setDestination(40412U);
    msg.setDestinationEntity(205U);
    msg.number.assign("BAMSBXRUCPXOJSFAIWKTWBOJPGFMYWVAYPWZJNQILOQCTFGEDJLRVGSEOECZAJKXMYUGABSDKYNASSYNQTLHVEQIRFMBNCCYTTOTAGZQAEVQVEDULMUKIINHJWNPVOWZQXRKDKDMPIENOMSHICNDWFCLULHCHZUVZLDUCQPTBCPRVDKWZLMHTNMRXGBBUJSXZIHTMYHFOLIEDWPZKSBKF");
    msg.timeout = 52182U;
    msg.contents.assign("CRSIKDXMLQHATVSRTOXACDBWOTWGMRZGNPZCQGUYOBHGFV");

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
    msg.setTimeStamp(0.160311754528);
    msg.setSource(26656U);
    msg.setSourceEntity(136U);
    msg.setDestination(60598U);
    msg.setDestinationEntity(120U);
    msg.number.assign("RXHHMZVELNAQABUXKRFDMYJB");
    msg.timeout = 62318U;
    msg.contents.assign("QXTKBCUWWAVLZZCOWXERSKPHOJYLQKNSORZAPMGICUXRNGSOASTWRZIPPHDZTCYMDFFCPMHMJJIFTVETYXGFODYAKJIWFJEKQLTNIJLZHDVPMNWNTQTAICJOUEBXMGXFBGYXUIMYVZOPXQDMTRYVNBUCVKBVCGKNBAWYAOAODPRZANEYLSHCVQIOGTUJSSUPZHIJ");

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
    msg.setTimeStamp(0.283947159594);
    msg.setSource(59573U);
    msg.setSourceEntity(202U);
    msg.setDestination(13725U);
    msg.setDestinationEntity(129U);
    msg.seq = 1711151957U;
    msg.destination.assign("IDLSRWAIDGEPUMZMDSQZWJFFYHJOLBCKMQCLPQLLQOJWSATGWOYGNPNSKCLXRWUWHQRZMPFKIOVRNMINZVJYZPCTBQVJBIGUYTKVJRTTVAYDXITPDLKHYTKWMWHIQKZHANUXXFCDCVUVXBXMCVZRAJAMAUOBHJET");
    msg.timeout = 32433U;
    const char tmp_msg_0[] = {9, 94, -54, -67, 5, -65, 111, -92, -32, -29, 77, 62, 106, 86, -55, 100, -55, -37, 93, 73, 20, 33, -82, 123, 68, -34, 48, 64, -125, -85, -37, -61, -98, -106, -45, -126, 7, -48, 35, -92, 31, 62, -15, -78, -83, -59, -97, -76, 68, 38, -34, 117, -7, 55, 63, 77, -17, -83, -14, -51, -91, -63, -16, 21, -22, -87, -7, -112, -116, -33, 114, -47, 54, -109, 79, 2, -94, 82, 56, -82, -46};
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
    msg.setTimeStamp(0.214767353313);
    msg.setSource(33589U);
    msg.setSourceEntity(75U);
    msg.setDestination(42511U);
    msg.setDestinationEntity(42U);
    msg.seq = 3722896512U;
    msg.destination.assign("GBFWGYIZILXZYEYYMRNMWQUFNVCHWOMOTPC");
    msg.timeout = 1107U;
    const char tmp_msg_0[] = {96, 16, -104, -54, -39, 100, 34, 0, -75, 6, 37, -23, -15, 38, -12, 5, -76, 58, 15, -93, -118, -36, -80, 122, -98, 45, 37, 29, 106, -65, -106, 84, 107, -117, 23, -93, -18, -94, -27, -14, 25, -60, 75, 73, -16, -98, -126, -13, -119, 67, 84, 16, 15, 34, -118, 7, 41, 82, -109, -100, 93, 109, 106, 29, -107, 15, -59, 8, 65, 121, -75, -22, 125, 68, -70, 63, -24, -25, 17, -13, -13, 44, 66, 28, -70, 83, 74};
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
    msg.setTimeStamp(0.0332426987018);
    msg.setSource(29888U);
    msg.setSourceEntity(106U);
    msg.setDestination(36795U);
    msg.setDestinationEntity(232U);
    msg.seq = 2398290133U;
    msg.destination.assign("PBYXYJOZFHEYHXHQJLSVXXDHIRPMJSSNVBWPGPVKCITUWRKUDYYENFAYDBLAZDEXUQJZCFTINKIVONGNOE");
    msg.timeout = 8733U;
    const char tmp_msg_0[] = {-103, -91, 90, 11, 94, 20, -15, 64, 14, 84, -21, -66, 19, 11, 15, 77, 99, -76, 5, 47, -89, 107, 41, 38, -73, 32, -7, 76, -97, -89, -75, -12, 35, -80, -72, -123, 126, -93, 8, -58, 116, -78, -51, 81, -114, 1, 88, 54, -106, -114, -75, 41, 72, 31, -20, 123, 21, 74, 105, 26, -93, -11, 40, 20, 34, 108, 47, 23, -53, -87, -78, -89, -31, 120, -28, 57, 92, 8, -28, -31, -9, -91, 61, 20, 110, 21, 89, 91, 29, 106, -77, 16, 1, -36, -61, 87, 71, -20, 61, -42, -59, 125, -45, -24, 122, -124, 22, 51, -128, -93, 25, -12, -4, 40, -63, -72, -61, 20, 85, 21, -40, -15, -63, -36, -112, -4, -112, 125, -2, -35, -58, -46};
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
    msg.setTimeStamp(0.226614108575);
    msg.setSource(60287U);
    msg.setSourceEntity(249U);
    msg.setDestination(8015U);
    msg.setDestinationEntity(215U);
    msg.source.assign("RXDRWWZMZZMQRMVLPCNKMNEEVISIKPXUYQHIPBKHQTEBCGAXDODUYBEVSJOJPGABHSLDEFRNHYLAVHMQPCDVATAWHGCRBUQVFPMUGTPDVX");
    const char tmp_msg_0[] = {-79, 5, -42, -33, 26, 106, 14, 123, -102, -29, -47, 0, 68, -112, -57, -31, 116, 18, 116, -122, -115, -125, -61, -122, -1, 59, -46, 84, 118, -122, 64, 33, -18, -114, 92, -114, -38, -10, -29, -14, 22, 8, -51, -9, -36, -111, 66, 16, 110, -33, 113, -102, 108, -109, -82, 40, -1, -122, -13, -107, 67, -103, 93, 58, -49, 24, -54, 78, 108, 106, -62, -108, -58, -18, 40, -35, -109, -106, -82, 69, 92, -97, -31, 95, -96, 88, -118, 59, -35, 123, 51, -18, -48, 78, -91, -43, -114, -63, -59, -15, 10, 94, 110, 29, 36, 54, 64, -112, -64, -83, 10, -89, 31};
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
    msg.setTimeStamp(0.231748521001);
    msg.setSource(21862U);
    msg.setSourceEntity(26U);
    msg.setDestination(28955U);
    msg.setDestinationEntity(249U);
    msg.source.assign("KERUDSENRPLTAWVIHWZZGWUBFHOKVYCIOAOXMQWNOLKUNFQUNQLUSLPCABYRLDGVVQBBETKXJOWWZIZDSOGJUCIJSXLAGXAFDXHDIRBCPHETRPPJXGTJYOSNDEQUCONQXJTKKVHHCCBWAFZAKLYHXGFFYEKPVUFCNNWUMVFFBSBNIPSQMCQYZRGWPDQEAJB");
    const char tmp_msg_0[] = {14, -12, -105, 87, -21, 37, -112, 70, -1, -94, -19, -127, -99, -126, -26, 99, -30, -65, -104, -94, 59, -40, -67, -70, 112, -47, 82, 51, -47, -103, -39, 72, -29, -91, 108, 49, 82, -16, 95, -101, 89, 12, -63, -68, -112, -45, -123, -108, 104, 21, -106, -5, -128, -44, -109, 78, 40, 110, 112, 1, 111, -43, -55, 98, 85, 4, -91, -127, 110, -121, 30, -102, -45, 16, -60, 107, -113, -36, 34, 118, 32, -128, -102, 57, 69, 18, 37, 80, 53, -85, -113, 48, 106, -111, -84, -82, -104, -95, -50, -15, 21, -105, -42, -51, 92, 87, 61, 119, -117, -2, -81, -111, -48, 110, 75, -124, -87, -14, 0, -10, 29, 118, -75, -30, 116, -59, -111, 3, -86, -102, 45, -8, 5, -21, -55, -30, 39, 76, -10, -60, -56, -1, -59, -109, 112, 41, 99, 85, -38, -20, 4, -125, 124, 65, -88, -46, 56, 67, -101, 41, -63, -19, 72, 33, 65, 38, 56, -88, -36, 64, 78, -80, -4, -43, 27, 121, -21, 4, -107, -16, -5, 90, -105, 67, 85, 43, -16, 14, 59, -99, -116, 41, 16, 115, -32, -113, -60, 121, 35, -2, 71, 48, -60, 56, 100, -40, -54, 40, -15, -9, -29, -94, -115, 29, -62, 117, 67, 84, -81, -99, 121, -45, -118, -53};
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
    msg.setTimeStamp(0.139304516148);
    msg.setSource(26603U);
    msg.setSourceEntity(97U);
    msg.setDestination(62825U);
    msg.setDestinationEntity(150U);
    msg.source.assign("JEBQWLGFETKTUXENEYMBFKDNXSLGBYPUZAKPHIRHLLNTYNIJHBZUISFTZETMMOKVSHQOEYGHDQUHPFCYGZZVKKCPDJVVNIWCA");
    const char tmp_msg_0[] = {-105, 89, 84, 112, -104, 18, 45, -27, 87, 99, 87, -35, 114, -89, -79, -58, -82, -83, 6, 100, 83, 92, -120, 104, -3, -21, -58, -107, 83, -41, -17, 124, -117, 89, 39, -106, -32, -47, 97, 19, -124, -73, -93, -7, -121, 36, -79, -52, -110, -11, -60, -1, -113, -100, 105, 9, -122, 16, -43, 34, -24, 93, 0, -113, -99, -47, -37, -116, -127, 112, 30, 18, -1, 90, -8, 86, -123, 122, -64, -68, 100, 98, 95, -117, 40, 66, 47, -119, 16, -81, -11, 70, 27, 109, 101, 10, 48, 111, 12, 13, 59, 30, -18, -61, 48, 4, 123, -88, -21, 4, 27, 102, -54, -46, -120, 29, -18, -72, 93, -1, -102, 1, 23, -18, -20, 13, 61, 46, -71, -84, -2, -50, 24, -82, -83, 11, -98, -117, 103, -13, -50, 81, -15, 126, 33, -67, -81, 23, 88, 91, 18, 86, -96, -35, 118, -1, -76, 13, -16, 43, 16, 12, 82, -79, 95, -105, -77, 108, 59, -66, 92, -97, 108, 120, 119, 118, 41, -26, -114, 92, 7, 8, 32, 9};
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
    msg.setTimeStamp(0.106931337036);
    msg.setSource(30469U);
    msg.setSourceEntity(78U);
    msg.setDestination(41354U);
    msg.setDestinationEntity(102U);
    msg.seq = 3721062691U;
    msg.state = 140U;
    msg.error.assign("FNFGFVLQUAEIOCMGSKSEHACGGXTFOTUHNRQGBJCQYMBGUZCOAMFKMXTNXGNLWEFCDIUYQBPJOTZFPVPHANXQDOWUBYIVQR");

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
    msg.setTimeStamp(0.365317983726);
    msg.setSource(50388U);
    msg.setSourceEntity(94U);
    msg.setDestination(41052U);
    msg.setDestinationEntity(8U);
    msg.seq = 1090093095U;
    msg.state = 250U;
    msg.error.assign("SRHEFXGPOZHIRCUCQZWEWFTSTHLX");

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
    msg.setTimeStamp(0.395524390031);
    msg.setSource(1374U);
    msg.setSourceEntity(186U);
    msg.setDestination(34158U);
    msg.setDestinationEntity(100U);
    msg.seq = 74818448U;
    msg.state = 182U;
    msg.error.assign("OXGLXHEKRSRYXEYEUCKIEWTAUHQOIBMHIVRNEFYXJMWAEVTCAVOXMNKDDPSQBBTQJOQPGDBCRHPAAPMIKVUZVYIXNUSCUPLRJMBDWDTTWCPQVXGIHRZDEUVBKLXFJSPBFULQZDZVNLNPGLKKLQKCTNS");

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
    msg.setTimeStamp(0.236741323635);
    msg.setSource(31952U);
    msg.setSourceEntity(66U);
    msg.setDestination(30477U);
    msg.setDestinationEntity(200U);
    msg.origin.assign("IHLIFPXAHLWLPBDEUOBTIZEKTGUEWSQKGMICA");
    msg.text.assign("WTQADMDNIBOYHKDYAETZMGDIZDNKXHSEXJBSEXKOAJTWFKZGEAXLPHQXSHJPQVDQRBUTOLU");

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
    msg.setTimeStamp(0.878806712712);
    msg.setSource(31042U);
    msg.setSourceEntity(34U);
    msg.setDestination(32495U);
    msg.setDestinationEntity(179U);
    msg.origin.assign("LNNZFVCVOXYGGWANBSRCZGEVOBWPEPNMUOJTQSLBQRUOSPAWQQPEGRLKVAJEFUMEFCOIYFUOWWTZZRKVPRKCOJIMFTCDMHNZYLDEYUIVSKXMWWCYBHDACWDXFBCZRYASVKGRLNIPPXGBUWWQFPIDIMCISMXTKKJGSMHVANRDUFNATVGXABJMLHQRX");
    msg.text.assign("ICHFXRUSRFHCVRDDBGFCIOSOVXKYR");

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
    msg.setTimeStamp(0.642612126218);
    msg.setSource(10357U);
    msg.setSourceEntity(29U);
    msg.setDestination(5220U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("BILTXMKQMHLRXMSDWS");
    msg.text.assign("GJUPYOCQFWZPS");

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
    msg.setTimeStamp(0.2637253146);
    msg.setSource(43693U);
    msg.setSourceEntity(141U);
    msg.setDestination(11971U);
    msg.setDestinationEntity(144U);
    msg.origin.assign("OCBPVFXGIARZIW");
    msg.htime = 0.843447939644;
    msg.lat = 0.329189330388;
    msg.lon = 0.102822223921;
    const char tmp_msg_0[] = {-99, -125, -43, -18, 20, -21, -31, 97, 54, -105, -64, -33, -93, -70, -19, -44, 68};
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
    msg.setTimeStamp(0.0199012377352);
    msg.setSource(17298U);
    msg.setSourceEntity(10U);
    msg.setDestination(17189U);
    msg.setDestinationEntity(202U);
    msg.origin.assign("UZCTJMHXJPOORPNQSXGHACUIQTUNHAZLXRDYSHVLMAXHDRUQNEIGCZYTEZOHAQMURWLIAVBPIICYBEFBKYYBGONIHYOZAMQRLSNFPKECXJDLV");
    msg.htime = 0.208707016643;
    msg.lat = 0.181343165165;
    msg.lon = 0.0628749391521;
    const char tmp_msg_0[] = {-89, 24, 78, -31, -82, -36, 41, 70, -53, 51, 102, 112, -83, 11, 52, -12, 122, 1, -71, 69, 27, -66, -125, 99, -127, 21, -51, 93, 88, -90, -4, 120, -95, 118, 113, 0, -53, -81, -103, -13, 23, -14, -102, -111, -51, -122, 39, -103, 101, 101, -26, -103, -31, 90, -5, 117, 68, 86, 113, 63, 20, -8, 2, -91, 60, 49, -20, -58, 93, -81, 75, 13, -41, 99, 71, -72, 101, -24, 120, -12, -60, -39, -15, -51, -51, -53, 89, 92, 98, -3, 108, 71, 110, 48, -42, -69, -101, 77, 49, 19, 105, 111, -48, 123, -7, 5, -46, -12, -109, 19, 6, 21, -47, 40, 83, 110, 10, -78, 65, 109, -4};
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
    msg.setTimeStamp(0.522921584285);
    msg.setSource(17887U);
    msg.setSourceEntity(236U);
    msg.setDestination(60416U);
    msg.setDestinationEntity(186U);
    msg.origin.assign("QASZBOPTYZCLZLAAEDVMCVHEHGRNJFIEMGYAFPIFTXBHMGDDRNYYNAKYPRIVLQRKBFYPMIBXOEQCZFWJGCCOBFVDBQWKGXGSWHJUDMLWMLSBJNEVUC");
    msg.htime = 0.258375253916;
    msg.lat = 0.197660256176;
    msg.lon = 0.164670977066;
    const char tmp_msg_0[] = {-49, -88, -123, 66, 83, -40, 29, -104, 111, -78, -4, 80, 22, 42, -82, -36, 118, 0, -110, -28, -14, -8, -96, 11, -97, -73, 47, -79, -29, -19, 65, 41, -110, -118, 114, -68, 100, 21};
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
    msg.setTimeStamp(0.690072968226);
    msg.setSource(43554U);
    msg.setSourceEntity(252U);
    msg.setDestination(57221U);
    msg.setDestinationEntity(74U);
    msg.req_id = 27081U;
    msg.ttl = 22050U;
    msg.destination.assign("NSHRMTHZNDLFANVJODQNYNPHKQYTLXWXQGOMCSUUIRPXLMWXOBRTMADPFKIUSVVYLIWETKGEJVTDYCQAYCWDRRKIAQFNPUWFBHHXPEEPEGEMBBNFBIKKLMBSNGMHKGGPEZJQQZGOPZVTTFGE");
    const char tmp_msg_0[] = {-85, -32, 29, -6, -18, -101, -88, -66, -52, 103, -91, -40, -77, 8, 79, 119, 43, -119, 124, -63, -114, 95, -117, -79, 89, -12, 89, 31, -113, -98, -52, 67, -102, 48, -53, -75, -114, 81, -55, -37, 78, -61, 74, 120, -57, -3, 78, 100, 120, -52, -97, 85, -14, 54, -91, 55, -14, -93, -85, -56, -21, -85, -50, -32, 71, 46, 67, -73, 116, 23, 96, 106, 65, -45, 79, 110, 84, 72, -40, 69, 66, -18, -112, -84, -12, 27, -123, 55, 56, -106, -31, -39};
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
    msg.setTimeStamp(0.993774947903);
    msg.setSource(34029U);
    msg.setSourceEntity(151U);
    msg.setDestination(1850U);
    msg.setDestinationEntity(50U);
    msg.req_id = 20406U;
    msg.ttl = 37251U;
    msg.destination.assign("RAZVONFGGBWGHAGIJGXDLJBBERXVOKPBYXSSAFA");
    const char tmp_msg_0[] = {-6, -104, -60, 44, -7, 60, 8, -34, -34, 60, 112, 46, 83, 100, 23, 39, 10, -53, 63, 107, 123, -59, -111, -48, -62, -107, 64, -25, 60, 124, -86, -98, -91, -37, 46, -91, 59, 91, -58, -37, 113, -76, 113, -123, 23, 75, 76, -38, -106, 104, 41, 47, -52, 109, -125, -39, 119, -112, -6, 55, 105, 19, 23, -71, 84, 86, -22, -110, -88, 69, 85, 68, -48, 71, -41, -99, -4, 54, 115, 87, -67, -1, 32, -72, -80, -78, -76, 126, 10, 28, -112, 32, -40, 23, 33, 89, -29, 100, -61, 50, 43, -29, -30, 104, 118, 73, 86, 120, 18, -96, 40, 39, 5, -110, 81, -1, -26, 74, -4, -47, -91, 103, 91, 120, 33, 37, 104, 24, -4, -90, -89, 62, -68, 100, -33, -82};
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
    msg.setTimeStamp(0.234796070631);
    msg.setSource(35931U);
    msg.setSourceEntity(89U);
    msg.setDestination(65079U);
    msg.setDestinationEntity(122U);
    msg.req_id = 7091U;
    msg.ttl = 1057U;
    msg.destination.assign("WIFIXYGGEDSTMTMEXCFKHFZOBDHYFQDYIUBFSXZUXERVMYWHEVOVHDNRBHLGCVSXZYCEKWXSGOGNHPJVBTOEBLNOZRUCDTJPWIUQSTTPKVAPXWKFOXYVLXQNNMKQRHNEKJONWABHQRIAUPNDPCBDWCRVEDPQLUGKDDKGPAZRZAEQIYSYTJMXJQWVLCTKUAFFYRJZFACLS");
    const char tmp_msg_0[] = {23, -119, -88, 41, 35, 119, 1, 54, -58, 59, 51, -55, 54, -57, 71, -100, -15, 119, 94, 111, -80, 119, -59, 72, 52, 123, 8, 41, 75, 29, -85, 69, -120, 19, -128, -7, 118, 62, -76, -26, 122, -12, -14, -106, 13, 30, 82, 110, 73, 7, -31, -121, 72, -11, 100, -62, 121, 49, 54, -118, -40, -107, -84, 62, 99, -78, 93, 52, -74, 120, -82, 81, 90, 3, 98, 58, 124, 45, -107, 72, 68, 28, 94, 68, -10, 99, -49, -99, -111, 1, -67, -44, -51, 64, 74, -49, -55, 47, -88, 4, 94, 13, -46, 94, 4, -35, 108, -51, 71, 99, 107, 94, -110, -80, -33, -9, -49, 108, -95, -101};
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
    msg.setTimeStamp(0.461417041119);
    msg.setSource(41842U);
    msg.setSourceEntity(24U);
    msg.setDestination(51072U);
    msg.setDestinationEntity(151U);
    msg.req_id = 683U;
    msg.status = 166U;
    msg.text.assign("ZFKTOYHKZKLJVCUPVTTREZMRAPJCG");

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
    msg.setTimeStamp(0.166024956716);
    msg.setSource(51816U);
    msg.setSourceEntity(131U);
    msg.setDestination(13767U);
    msg.setDestinationEntity(68U);
    msg.req_id = 64012U;
    msg.status = 0U;
    msg.text.assign("DHTTOKVRSYZWTSMCJNKWATHGQLXXNCUGMOVYHIMTWZEPLQYXJSNVGTCPJBLSVPOADBOYSGAJOGILWIFYWXKSALPBFKZCKKQGNPUHWZIHXOBERKUQBUGBLNTWGMNLMMSEKAXBJPSYZQLONFTCFUFZRDRPIFDQEDWYFIUURVMRGCKAXLAFNEJBVPYRRMVKE");

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
    msg.setTimeStamp(0.198053413285);
    msg.setSource(578U);
    msg.setSourceEntity(95U);
    msg.setDestination(14902U);
    msg.setDestinationEntity(41U);
    msg.req_id = 3176U;
    msg.status = 187U;
    msg.text.assign("RQQBMKWUZYTQNPZFYJGGFRKYVSANHTOKQWPZIFWAEJWBLURCEHEBXDZHERXBMXATMXGJAJIOFYKPFUXASVXTCYIBAUQGRWMLICRCQRJZDOEOMVCQFKLIHRFQDLVATFSDLTNFEUGVDMYEIZBA");

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
    msg.setTimeStamp(0.406474152169);
    msg.setSource(47578U);
    msg.setSourceEntity(51U);
    msg.setDestination(25339U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("LJQFPCQKMZVZELMZGDVKBTMIZPZYHFUCCABOBFMWILGWFCEUVRHXRGRGLUCNQWAIJVKBYEGFGKKEFPSOTKUKNTVUZRCEIWQQMTPFGSXQWSDZTMYLSNIEOYABRNDXYZMPLVVUWGLEPJAQAKINFCQTEYWAXYJYOPRXSOZJHGSXTUHWHSRCWEGOXINAJDVVUDHFPRYDHMSLXCDDJINTERTYQBXS");
    msg.links = 4096984279U;

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
    msg.setTimeStamp(0.849519834244);
    msg.setSource(27960U);
    msg.setSourceEntity(230U);
    msg.setDestination(44920U);
    msg.setDestinationEntity(248U);
    msg.group_name.assign("TJKWTVOKMKPZWDWMFNSDHXOSDAU");
    msg.links = 2956294081U;

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
    msg.setTimeStamp(0.207451163732);
    msg.setSource(61074U);
    msg.setSourceEntity(100U);
    msg.setDestination(21911U);
    msg.setDestinationEntity(236U);
    msg.group_name.assign("JDMAAMGCCKWPILAQEWVHVOENYFGJRWBLFVGUDZHYGNWAULKBQOTWYZQGSQNSXCKNYSJWUMWKMHLICJF");
    msg.links = 579726006U;

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
    msg.setTimeStamp(0.353294886851);
    msg.setSource(16885U);
    msg.setSourceEntity(56U);
    msg.setDestination(17179U);
    msg.setDestinationEntity(24U);
    msg.groupname.assign("PQIMMTOJIXBAQTJKPEZDZMKEQUTMIQLZROFDVSQNNHSCZQPCYRDEYBDHOFAWXXOLFNJRPQUUFHYFEDG");
    msg.action = 15U;
    msg.grouplist.assign("PPQSMVKCJADBIUKPTFEVDRNEIERGPQYTHHQBNIVEYXBGWXSJFEDQNNNPAGHGOXYGSMWCTAICMSPWARLSKVOCBBCKHUGACZCVZJNLRUMRCWJJJAOYYPOAIVSUDXZKHFQTZJMHFGIDEYPDLRNSUJHXFRXMLMSAXBREGVLJOUPHDBWUVQFHKSWNABKIZUDQTFYXQLIWOGTNTTOLKMNLFQYI");

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
    msg.setTimeStamp(0.0779515401154);
    msg.setSource(5746U);
    msg.setSourceEntity(64U);
    msg.setDestination(12396U);
    msg.setDestinationEntity(121U);
    msg.groupname.assign("BMNJUTJHFTGUYRMHGELKZRLZBDNDESJYGPWJUYCQWLAQJROTRTUMTDPBAGMMOQKPFKXZVNCTPIQTYQYEDAUXEBGCWNCWHEUFAEQCNMFPJSYULSVZMNOVOVICFWOGHIRDOSRHVHIMMOVHSXUSIOWULVFEEFZWGCXPKBLJKBMAPJUTZRZINBRXZOEGSDZQATPGKYISYBQZQYWLNDIBNRLAJWDFIR");
    msg.action = 94U;
    msg.grouplist.assign("HXYAVTGLJJXMCWSNDPYXMHWZQRWPBIERVMRWEKNVVNJHDMYKEUZVRWLIXGTPTWCFLZWPBFCZQGAAOVDBQJQCUMOTHNOISYQPMSEVQXKQKBJGHKBIUESYOXQSEPBNNHBISTPDGZKDJQACXBKOMNUSQZOVLRWXYFLFAAFSZRARCLYZHYVKUJWTFVPIHNGDSLPD");

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
    msg.setTimeStamp(0.715216700737);
    msg.setSource(50955U);
    msg.setSourceEntity(193U);
    msg.setDestination(11128U);
    msg.setDestinationEntity(89U);
    msg.groupname.assign("UCOSAYLTESCOIJRNRFVZXJTPWQJBJVQSCVPRRNJYCCBNLGVGXNWN");
    msg.action = 178U;
    msg.grouplist.assign("KLOZZNEXVIKLPWFSMVSJRWYWHUOZAFPKGFXMEMYHXJYGORIPGNVDWLHFHIEAOZEVNAHRJSXCREMBLETEKXXJGKZQPZBMLLACZRLUZLAVECUCROBCAMYERHHNFOXEDBWQTDULGQULQOPAIDKBFWNQVAIBOQXTTWCNHZKJSVMUQXDDBWGOFHYJGUBGPBDIUQVRUADCJPSASSGNT");

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
    msg.setTimeStamp(0.860147894745);
    msg.setSource(14157U);
    msg.setSourceEntity(145U);
    msg.setDestination(45285U);
    msg.setDestinationEntity(199U);
    msg.id = 27U;
    msg.range = 0.896710271401;

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
    msg.setTimeStamp(0.134954182807);
    msg.setSource(16507U);
    msg.setSourceEntity(54U);
    msg.setDestination(50552U);
    msg.setDestinationEntity(158U);
    msg.id = 21U;
    msg.range = 0.30375860995;

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
    msg.setTimeStamp(0.714124743793);
    msg.setSource(53758U);
    msg.setSourceEntity(68U);
    msg.setDestination(31820U);
    msg.setDestinationEntity(245U);
    msg.id = 87U;
    msg.range = 0.325809497953;

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
    msg.setTimeStamp(0.612065457976);
    msg.setSource(7610U);
    msg.setSourceEntity(227U);
    msg.setDestination(51173U);
    msg.setDestinationEntity(13U);
    msg.beacon.assign("BIXKQTFWGACMIEABLANZBNWSALPRPQBVUXSIFLJTXLVDFQZDLKDMKELFZKOWIVKJRRVBSVWISHRNLMTQTGJGDYXY");
    msg.lat = 0.484045759656;
    msg.lon = 0.256866521202;
    msg.depth = 0.465045860998;
    msg.query_channel = 155U;
    msg.reply_channel = 124U;
    msg.transponder_delay = 86U;

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
    msg.setTimeStamp(0.457372990307);
    msg.setSource(59042U);
    msg.setSourceEntity(52U);
    msg.setDestination(8090U);
    msg.setDestinationEntity(188U);
    msg.beacon.assign("LXBYMRQUWJVRLHZRSFACECTKWWTKBBZPCGVKUNYYTPTIBIFOWGTAEANZIBEJUQKFBSOYVOXSWUSLMHWCJCPUJXDNQCCAKLPJGC");
    msg.lat = 0.996459809687;
    msg.lon = 0.466332410993;
    msg.depth = 0.780803024042;
    msg.query_channel = 76U;
    msg.reply_channel = 19U;
    msg.transponder_delay = 184U;

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
    msg.setTimeStamp(0.782670161624);
    msg.setSource(58050U);
    msg.setSourceEntity(54U);
    msg.setDestination(19704U);
    msg.setDestinationEntity(156U);
    msg.beacon.assign("PLZKOJWRTYJSIVEEQPXLFBQESVTDNDENXAWFXVBHEZEUGDPMFLSZNTYPTKSCF");
    msg.lat = 0.55246312529;
    msg.lon = 0.17088542051;
    msg.depth = 0.291900555048;
    msg.query_channel = 182U;
    msg.reply_channel = 128U;
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
    msg.setTimeStamp(0.237973212928);
    msg.setSource(28888U);
    msg.setSourceEntity(133U);
    msg.setDestination(53778U);
    msg.setDestinationEntity(94U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.231230109809);
    msg.setSource(28723U);
    msg.setSourceEntity(163U);
    msg.setDestination(56692U);
    msg.setDestinationEntity(153U);
    msg.op = 83U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XYTVLHBUOJMOXSGIPJSDXWLJKOMZPMJQZDZUEVEXADQYVBOY");
    tmp_msg_0.lat = 0.0774040214416;
    tmp_msg_0.lon = 0.598216170333;
    tmp_msg_0.depth = 0.460805153148;
    tmp_msg_0.query_channel = 245U;
    tmp_msg_0.reply_channel = 65U;
    tmp_msg_0.transponder_delay = 51U;
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
    msg.setTimeStamp(0.491459240461);
    msg.setSource(19621U);
    msg.setSourceEntity(169U);
    msg.setDestination(51306U);
    msg.setDestinationEntity(172U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.677032031893);
    msg.setSource(24155U);
    msg.setSourceEntity(19U);
    msg.setDestination(3817U);
    msg.setDestinationEntity(199U);
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.926632368241;
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
    msg.setTimeStamp(0.991419297571);
    msg.setSource(62647U);
    msg.setSourceEntity(108U);
    msg.setDestination(15783U);
    msg.setDestinationEntity(58U);
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.633591112123;
    tmp_msg_0.lon = 0.0730381732607;
    tmp_msg_0.depth = 0.199222731291;
    tmp_msg_0.roll = 0.8973301334;
    tmp_msg_0.pitch = 0.0807648064665;
    tmp_msg_0.yaw = 0.411552958259;
    tmp_msg_0.rcp_time = 0.107053487005;
    tmp_msg_0.sid.assign("FFSNKHCQZAEZLNRJLJGOLKIZEYFYSYMPDHIEGAZVYCDCQHBHABDQAPBVXZDDMDIRWYGBKDUMHNOVXESAUHTJOWWNQOAUUHTFIONNXWXQPYUEZYFXWF");
    tmp_msg_0.s_type = 244U;
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
    msg.setTimeStamp(0.346961359295);
    msg.setSource(42911U);
    msg.setSourceEntity(251U);
    msg.setDestination(43669U);
    msg.setDestinationEntity(182U);
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 119U;
    tmp_msg_0.frag_number = 10U;
    tmp_msg_0.num_frags = 11U;
    const char tmp_tmp_msg_0_0[] = {41, -44, 44, 73, 75, 114, -57, -52, -26, 74, 44, -94, 110, -22, 125, 24, -122, 60, -73, 67, -50, 70, -93, 45, 119, 109, -27, 106, -88, -110, 95, 66, -92, -105, -93, 64, -101, 89, -78, 4, -128, -46, -52, 29, -88, 14, 65, 2, 4, 124, 53, 92, -25, -80, -116, 97, 112, 54, 124, 10, 51, -59, 119, -121, -35, -68, -38, 65, -17, 49, -33, -3, -99, -53, -21, -118, 98, 17, 57, -50, 92, 60, -37, 1, 49, 105, 125, 87, -40, 113, 72, 27};
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
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.683634124659);
    msg.setSource(8520U);
    msg.setSourceEntity(35U);
    msg.setDestination(41190U);
    msg.setDestinationEntity(23U);
    msg.op = 172U;
    msg.system.assign("HLCRXAOIKMSGFDPOUIMUCBEKLQWDSEXLWDTMHVHLWVMAIQFLXLAPDBQICPMVELZQVFOXHGIKCSRGFENJAOXLYMAJUZJQTFVNWOTVJDAPABJEDDGFADBA");
    msg.range = 0.145336896947;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("UQCEMGWMBCTSMIZVOFWCVTAKKLMVNMVULWOPQSEJTNYYLEL");
    tmp_msg_0.value = 220U;
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
    msg.setTimeStamp(0.731681054944);
    msg.setSource(22276U);
    msg.setSourceEntity(183U);
    msg.setDestination(1102U);
    msg.setDestinationEntity(18U);
    msg.op = 7U;
    msg.system.assign("SOFRLGNEMTQDQJBKNVJWWHXOOXGWEZAQEHIBCGVXTDKFVMPOXPDWWUICS");
    msg.range = 0.974701514148;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 33U;
    tmp_msg_0.error_count = 98U;
    tmp_msg_0.error_ents.assign("ITGYLIWFXUJCEZSNKUYKWVJXBIGMICAEGOTTEYFLRZXNYSEPULBKZHPQDOWACRDXDHGULMSCQHBEELJAYPNRTZZAVQQOUVAF");
    tmp_msg_0.maneuver_type = 10673U;
    tmp_msg_0.maneuver_stime = 0.697798726936;
    tmp_msg_0.maneuver_eta = 58757U;
    tmp_msg_0.control_loops = 1887129490U;
    tmp_msg_0.flags = 61U;
    tmp_msg_0.last_error.assign("BHKRRNNBOEMTLSUSASJEOXMGNKBMXTIQKRODYKTETID");
    tmp_msg_0.last_error_time = 0.00773417758187;
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
    msg.setTimeStamp(0.331814953924);
    msg.setSource(35733U);
    msg.setSourceEntity(40U);
    msg.setDestination(5409U);
    msg.setDestinationEntity(148U);
    msg.op = 25U;
    msg.system.assign("OBTDVFJLYWXJONNAINQMEGJIZDZCZYVYTKTUSGUHNGFSQDCIAJJGEMYQBKHAPOKVMLUSBSXSFTCLUTRTAVEWWWOPOVLFWGFYU");
    msg.range = 0.340403148205;
    IMC::TrexPlan tmp_msg_0;
    tmp_msg_0.reactor.assign("MKAKXYLNWFVPWPZILGZXAZNEPEMLJOGYJKUOHVKDJBRJDYUOFMPHJIINUOEDMVICMTDEVCFV");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("XBGWNWUUYHHWTHEHCKVAKVQSQGXMYNGROSHCYQCJNLEIZFDCEPNWJARSOJZACDRGVRQZEAPMTCMTBLDLIGSPTBMTAWBYKCIWWRIDRVIUDTTFOQLELTUDHRJBSOVYEFJFUHZLHPVQXAKRIGZZHPGEJPFDDSGQBNUKYYXNOFRUCCMXZAOUUDJWFHEXPOIISFAOVMOBTTEYKYBSPRMXVYZLKGBBQKXNILSMZDUAKNLXOG");
    tmp_tmp_msg_0_0.predicate.assign("DNUJHDOZDEXBYAYPFHJVKXMZPPPSTLUBVLSXOQBGHFTXWVQQFTEGOCYAVVHWKYUGUFMZEFQWXOOSQMKZUFRXPBODTZOQGITRDYNAICMEVHHENIRNKRWBNCGDTAHPXPDCISLRFWGWLCTMGPNEUNICWFZC");
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
    msg.setTimeStamp(0.0473624634149);
    msg.setSource(12747U);
    msg.setSourceEntity(60U);
    msg.setDestination(1493U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.321186972545);
    msg.setSource(62587U);
    msg.setSourceEntity(117U);
    msg.setDestination(14243U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.248068872483);
    msg.setSource(21260U);
    msg.setSourceEntity(128U);
    msg.setDestination(18654U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.706453553882);
    msg.setSource(25283U);
    msg.setSourceEntity(135U);
    msg.setDestination(61597U);
    msg.setDestinationEntity(173U);
    msg.list.assign("YJDPYKUMSWIZDFJIZGUZVCMCEIEZWEBZAELOXEKXQHGWVEAZSRUTZSVLMTTKVKHAXGOJFVOOQNNGJPISFNYYACKRPPIRNHIMAIRTN");

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
    msg.setTimeStamp(0.652743089133);
    msg.setSource(51149U);
    msg.setSourceEntity(184U);
    msg.setDestination(18834U);
    msg.setDestinationEntity(118U);
    msg.list.assign("RXECHHLFITFWBUYSBCUQRXRG");

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
    msg.setTimeStamp(0.507157153807);
    msg.setSource(29991U);
    msg.setSourceEntity(89U);
    msg.setDestination(33133U);
    msg.setDestinationEntity(178U);
    msg.list.assign("BNTUWSGTKWLSIFXHNNFLMLHQVFAFVQMJXRJUPQESUGEZCKTDWVMADXUTLSIAPHCSZGXJDMFYDEUERZJKIOOECRZ");

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
    msg.setTimeStamp(0.982435667355);
    msg.setSource(51743U);
    msg.setSourceEntity(156U);
    msg.setDestination(43022U);
    msg.setDestinationEntity(226U);
    msg.value = -13370;

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
    msg.setTimeStamp(0.244737664536);
    msg.setSource(15014U);
    msg.setSourceEntity(53U);
    msg.setDestination(7118U);
    msg.setDestinationEntity(73U);
    msg.value = 3248;

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
    msg.setTimeStamp(0.299698489353);
    msg.setSource(56575U);
    msg.setSourceEntity(49U);
    msg.setDestination(62954U);
    msg.setDestinationEntity(44U);
    msg.value = -22399;

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
    msg.setTimeStamp(0.860577170899);
    msg.setSource(59720U);
    msg.setSourceEntity(75U);
    msg.setDestination(49554U);
    msg.setDestinationEntity(156U);
    msg.value = 0.162688390376;

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
    msg.setTimeStamp(0.548192132366);
    msg.setSource(12241U);
    msg.setSourceEntity(160U);
    msg.setDestination(7699U);
    msg.setDestinationEntity(95U);
    msg.value = 0.574854822628;

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
    msg.setTimeStamp(0.695093970904);
    msg.setSource(58631U);
    msg.setSourceEntity(121U);
    msg.setDestination(12351U);
    msg.setDestinationEntity(84U);
    msg.value = 0.65376457484;

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
    msg.setTimeStamp(0.332081949826);
    msg.setSource(55640U);
    msg.setSourceEntity(197U);
    msg.setDestination(26507U);
    msg.setDestinationEntity(192U);
    msg.value = 0.933794676888;

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
    msg.setTimeStamp(0.0130140320906);
    msg.setSource(43984U);
    msg.setSourceEntity(0U);
    msg.setDestination(65260U);
    msg.setDestinationEntity(153U);
    msg.value = 0.182288015667;

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
    msg.setTimeStamp(0.518836054832);
    msg.setSource(14064U);
    msg.setSourceEntity(66U);
    msg.setDestination(23296U);
    msg.setDestinationEntity(51U);
    msg.value = 0.926135074599;

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
    msg.setTimeStamp(0.684740900343);
    msg.setSource(15354U);
    msg.setSourceEntity(163U);
    msg.setDestination(15407U);
    msg.setDestinationEntity(147U);
    msg.validity = 32551U;
    msg.type = 188U;
    msg.utc_year = 1130U;
    msg.utc_month = 43U;
    msg.utc_day = 38U;
    msg.utc_time = 0.0220820489839;
    msg.lat = 0.118759999129;
    msg.lon = 0.373661701691;
    msg.height = 0.788623358395;
    msg.satellites = 23U;
    msg.cog = 0.0425171418994;
    msg.sog = 0.0922104443295;
    msg.hdop = 0.943494751418;
    msg.vdop = 0.369229889419;
    msg.hacc = 0.0179313600612;
    msg.vacc = 0.247305260948;

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
    msg.setTimeStamp(0.105375358761);
    msg.setSource(39141U);
    msg.setSourceEntity(15U);
    msg.setDestination(60948U);
    msg.setDestinationEntity(113U);
    msg.validity = 187U;
    msg.type = 12U;
    msg.utc_year = 44379U;
    msg.utc_month = 147U;
    msg.utc_day = 57U;
    msg.utc_time = 0.629891954702;
    msg.lat = 0.447356457716;
    msg.lon = 0.0326994707121;
    msg.height = 0.311143109776;
    msg.satellites = 86U;
    msg.cog = 0.38020008021;
    msg.sog = 0.7458971426;
    msg.hdop = 0.59425012125;
    msg.vdop = 0.166507856976;
    msg.hacc = 0.655440473189;
    msg.vacc = 0.373319610144;

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
    msg.setTimeStamp(0.111627290381);
    msg.setSource(24296U);
    msg.setSourceEntity(209U);
    msg.setDestination(50905U);
    msg.setDestinationEntity(11U);
    msg.validity = 55095U;
    msg.type = 80U;
    msg.utc_year = 52716U;
    msg.utc_month = 145U;
    msg.utc_day = 13U;
    msg.utc_time = 0.877850442376;
    msg.lat = 0.644590694426;
    msg.lon = 0.502282327311;
    msg.height = 0.663169320796;
    msg.satellites = 189U;
    msg.cog = 0.942523877005;
    msg.sog = 0.563937298174;
    msg.hdop = 0.477417306979;
    msg.vdop = 0.25039266363;
    msg.hacc = 0.26913797434;
    msg.vacc = 0.0417900839268;

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
    msg.setTimeStamp(0.328869320475);
    msg.setSource(6162U);
    msg.setSourceEntity(139U);
    msg.setDestination(26842U);
    msg.setDestinationEntity(48U);
    msg.time = 0.390055249838;
    msg.phi = 0.163031251541;
    msg.theta = 0.969166416959;
    msg.psi = 0.591365501999;
    msg.psi_magnetic = 0.686670102453;

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
    msg.setTimeStamp(0.745135861906);
    msg.setSource(33816U);
    msg.setSourceEntity(225U);
    msg.setDestination(2913U);
    msg.setDestinationEntity(52U);
    msg.time = 0.955078663983;
    msg.phi = 0.299046975622;
    msg.theta = 0.242399714059;
    msg.psi = 0.350295946756;
    msg.psi_magnetic = 0.814578085677;

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
    msg.setTimeStamp(0.718382124908);
    msg.setSource(33767U);
    msg.setSourceEntity(82U);
    msg.setDestination(635U);
    msg.setDestinationEntity(134U);
    msg.time = 0.529881620222;
    msg.phi = 0.758818197257;
    msg.theta = 0.671063399916;
    msg.psi = 0.767165301927;
    msg.psi_magnetic = 0.107627786736;

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
    msg.setTimeStamp(0.63019977606);
    msg.setSource(44525U);
    msg.setSourceEntity(74U);
    msg.setDestination(9916U);
    msg.setDestinationEntity(38U);
    msg.time = 0.946751766102;
    msg.x = 0.951953167464;
    msg.y = 0.38275823312;
    msg.z = 0.826759652362;
    msg.timestep = 0.883993663481;

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
    msg.setTimeStamp(0.0471069912472);
    msg.setSource(26844U);
    msg.setSourceEntity(168U);
    msg.setDestination(33661U);
    msg.setDestinationEntity(125U);
    msg.time = 0.437893225924;
    msg.x = 0.590337958185;
    msg.y = 0.620744079924;
    msg.z = 0.23125633579;
    msg.timestep = 0.0887233921231;

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
    msg.setTimeStamp(0.274822247294);
    msg.setSource(23703U);
    msg.setSourceEntity(86U);
    msg.setDestination(42355U);
    msg.setDestinationEntity(57U);
    msg.time = 0.756696471007;
    msg.x = 0.44386799262;
    msg.y = 0.41343708066;
    msg.z = 0.50568355135;
    msg.timestep = 0.34791616864;

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
    msg.setTimeStamp(0.323970383896);
    msg.setSource(56970U);
    msg.setSourceEntity(240U);
    msg.setDestination(49550U);
    msg.setDestinationEntity(236U);
    msg.time = 0.0843576276601;
    msg.x = 0.616233334736;
    msg.y = 0.272734437649;
    msg.z = 0.0573421888492;

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
    msg.setTimeStamp(0.890798564382);
    msg.setSource(23574U);
    msg.setSourceEntity(232U);
    msg.setDestination(41217U);
    msg.setDestinationEntity(14U);
    msg.time = 0.148814517327;
    msg.x = 0.905204810623;
    msg.y = 0.440560336496;
    msg.z = 0.767815127358;

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
    msg.setTimeStamp(0.992220595502);
    msg.setSource(55976U);
    msg.setSourceEntity(200U);
    msg.setDestination(63578U);
    msg.setDestinationEntity(104U);
    msg.time = 0.69874476322;
    msg.x = 0.314463250852;
    msg.y = 0.909218341446;
    msg.z = 0.457047915625;

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
    msg.setTimeStamp(0.191482854826);
    msg.setSource(15104U);
    msg.setSourceEntity(8U);
    msg.setDestination(4489U);
    msg.setDestinationEntity(34U);
    msg.time = 0.932860138603;
    msg.x = 0.453474608859;
    msg.y = 0.20878311303;
    msg.z = 0.563213620076;

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
    msg.setTimeStamp(0.328963638597);
    msg.setSource(26164U);
    msg.setSourceEntity(109U);
    msg.setDestination(14435U);
    msg.setDestinationEntity(225U);
    msg.time = 0.417390089602;
    msg.x = 0.907446042886;
    msg.y = 0.817977773102;
    msg.z = 0.276717903747;

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
    msg.setTimeStamp(0.663289084748);
    msg.setSource(5070U);
    msg.setSourceEntity(37U);
    msg.setDestination(58690U);
    msg.setDestinationEntity(162U);
    msg.time = 0.0933037441842;
    msg.x = 0.31774345102;
    msg.y = 0.26310737893;
    msg.z = 0.523189321794;

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
    msg.setTimeStamp(0.578257189087);
    msg.setSource(30339U);
    msg.setSourceEntity(192U);
    msg.setDestination(65044U);
    msg.setDestinationEntity(82U);
    msg.time = 0.541151900546;
    msg.x = 0.282338207933;
    msg.y = 0.557213354493;
    msg.z = 0.31061582338;

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
    msg.setTimeStamp(0.739538557788);
    msg.setSource(62781U);
    msg.setSourceEntity(71U);
    msg.setDestination(9318U);
    msg.setDestinationEntity(201U);
    msg.time = 0.325918434934;
    msg.x = 0.292853934053;
    msg.y = 0.179193802935;
    msg.z = 0.43434344223;

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
    msg.setTimeStamp(0.657635786749);
    msg.setSource(61346U);
    msg.setSourceEntity(245U);
    msg.setDestination(57662U);
    msg.setDestinationEntity(250U);
    msg.time = 0.340868575556;
    msg.x = 0.0230015374092;
    msg.y = 0.229233945149;
    msg.z = 0.0369657157013;

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
    msg.setTimeStamp(0.367072856089);
    msg.setSource(4157U);
    msg.setSourceEntity(102U);
    msg.setDestination(48603U);
    msg.setDestinationEntity(9U);
    msg.validity = 188U;
    msg.x = 0.746996935517;
    msg.y = 0.472345686091;
    msg.z = 0.88616232762;

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
    msg.setTimeStamp(0.643603480903);
    msg.setSource(40287U);
    msg.setSourceEntity(147U);
    msg.setDestination(6803U);
    msg.setDestinationEntity(208U);
    msg.validity = 116U;
    msg.x = 0.0599814261508;
    msg.y = 0.162662010219;
    msg.z = 0.227972971844;

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
    msg.setTimeStamp(0.150643893307);
    msg.setSource(36064U);
    msg.setSourceEntity(100U);
    msg.setDestination(22543U);
    msg.setDestinationEntity(116U);
    msg.validity = 214U;
    msg.x = 0.636892088966;
    msg.y = 0.595151024326;
    msg.z = 0.393644156272;

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
    msg.setTimeStamp(0.965515682728);
    msg.setSource(671U);
    msg.setSourceEntity(5U);
    msg.setDestination(22399U);
    msg.setDestinationEntity(13U);
    msg.validity = 31U;
    msg.x = 0.0184452182521;
    msg.y = 0.867218230422;
    msg.z = 0.751655569612;

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
    msg.setTimeStamp(0.0767847289911);
    msg.setSource(44029U);
    msg.setSourceEntity(36U);
    msg.setDestination(38177U);
    msg.setDestinationEntity(67U);
    msg.validity = 127U;
    msg.x = 0.496848450656;
    msg.y = 0.938983350404;
    msg.z = 0.754454061409;

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
    msg.setTimeStamp(0.972799860693);
    msg.setSource(30341U);
    msg.setSourceEntity(1U);
    msg.setDestination(3238U);
    msg.setDestinationEntity(247U);
    msg.validity = 226U;
    msg.x = 0.9899099087;
    msg.y = 0.550771830647;
    msg.z = 0.668798948772;

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
    msg.setTimeStamp(0.508659938446);
    msg.setSource(23075U);
    msg.setSourceEntity(96U);
    msg.setDestination(12276U);
    msg.setDestinationEntity(116U);
    msg.time = 0.472702503285;
    msg.x = 0.259720825039;
    msg.y = 0.179908887116;
    msg.z = 0.648766003923;

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
    msg.setTimeStamp(0.869846944287);
    msg.setSource(48110U);
    msg.setSourceEntity(41U);
    msg.setDestination(56281U);
    msg.setDestinationEntity(87U);
    msg.time = 0.246764654089;
    msg.x = 0.102526703698;
    msg.y = 0.286515379837;
    msg.z = 0.332990416506;

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
    msg.setTimeStamp(0.028548672581);
    msg.setSource(63947U);
    msg.setSourceEntity(194U);
    msg.setDestination(987U);
    msg.setDestinationEntity(50U);
    msg.time = 0.280767889796;
    msg.x = 0.898736985323;
    msg.y = 0.861274756743;
    msg.z = 0.44444544616;

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
    msg.setTimeStamp(0.688483782789);
    msg.setSource(33703U);
    msg.setSourceEntity(49U);
    msg.setDestination(26983U);
    msg.setDestinationEntity(178U);
    msg.validity = 96U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.575485012851;
    tmp_msg_0.beam_height = 0.853701118782;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.879730283181;

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
    msg.setTimeStamp(0.539173808747);
    msg.setSource(53702U);
    msg.setSourceEntity(207U);
    msg.setDestination(35483U);
    msg.setDestinationEntity(191U);
    msg.validity = 209U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.760588491473;
    tmp_msg_0.y = 0.856840760467;
    tmp_msg_0.z = 0.299863811175;
    tmp_msg_0.phi = 0.67680875247;
    tmp_msg_0.theta = 0.956807694655;
    tmp_msg_0.psi = 0.603368025823;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.54007505384;

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
    msg.setTimeStamp(0.413344169938);
    msg.setSource(34110U);
    msg.setSourceEntity(218U);
    msg.setDestination(2619U);
    msg.setDestinationEntity(40U);
    msg.validity = 65U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.448460690474;
    tmp_msg_0.y = 0.62092690046;
    tmp_msg_0.z = 0.549528739402;
    tmp_msg_0.phi = 0.615990783738;
    tmp_msg_0.theta = 0.100579150993;
    tmp_msg_0.psi = 0.941936371254;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.272563184775;

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
    msg.setTimeStamp(0.67223624992);
    msg.setSource(54189U);
    msg.setSourceEntity(160U);
    msg.setDestination(35530U);
    msg.setDestinationEntity(161U);
    msg.value = 0.583626253331;

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
    msg.setTimeStamp(0.376356072292);
    msg.setSource(63731U);
    msg.setSourceEntity(126U);
    msg.setDestination(64577U);
    msg.setDestinationEntity(246U);
    msg.value = 0.354899387543;

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
    msg.setTimeStamp(0.0186867265113);
    msg.setSource(36162U);
    msg.setSourceEntity(14U);
    msg.setDestination(7119U);
    msg.setDestinationEntity(218U);
    msg.value = 0.226541375534;

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
    msg.setTimeStamp(0.586059179487);
    msg.setSource(40118U);
    msg.setSourceEntity(72U);
    msg.setDestination(14221U);
    msg.setDestinationEntity(87U);
    msg.value = 0.91927568384;

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
    msg.setTimeStamp(0.303494353701);
    msg.setSource(30792U);
    msg.setSourceEntity(252U);
    msg.setDestination(42488U);
    msg.setDestinationEntity(55U);
    msg.value = 0.875013581676;

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
    msg.setTimeStamp(0.280225518553);
    msg.setSource(51449U);
    msg.setSourceEntity(189U);
    msg.setDestination(49274U);
    msg.setDestinationEntity(79U);
    msg.value = 0.792164080002;

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
    msg.setTimeStamp(0.0335071131717);
    msg.setSource(18823U);
    msg.setSourceEntity(211U);
    msg.setDestination(42808U);
    msg.setDestinationEntity(32U);
    msg.value = 0.923385592698;

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
    msg.setTimeStamp(0.631265853784);
    msg.setSource(40964U);
    msg.setSourceEntity(34U);
    msg.setDestination(54264U);
    msg.setDestinationEntity(188U);
    msg.value = 0.0336153378707;

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
    msg.setTimeStamp(0.315939609452);
    msg.setSource(15338U);
    msg.setSourceEntity(252U);
    msg.setDestination(20313U);
    msg.setDestinationEntity(4U);
    msg.value = 0.394933193246;

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
    msg.setTimeStamp(0.405425231977);
    msg.setSource(9568U);
    msg.setSourceEntity(226U);
    msg.setDestination(60934U);
    msg.setDestinationEntity(186U);
    msg.value = 0.61596846365;

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
    msg.setTimeStamp(0.515564229588);
    msg.setSource(58716U);
    msg.setSourceEntity(33U);
    msg.setDestination(50981U);
    msg.setDestinationEntity(190U);
    msg.value = 0.246410778826;

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
    msg.setTimeStamp(0.876654715299);
    msg.setSource(51414U);
    msg.setSourceEntity(5U);
    msg.setDestination(29223U);
    msg.setDestinationEntity(58U);
    msg.value = 0.316860714167;

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
    msg.setTimeStamp(0.305842368846);
    msg.setSource(7144U);
    msg.setSourceEntity(54U);
    msg.setDestination(24446U);
    msg.setDestinationEntity(150U);
    msg.value = 0.980470374655;

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
    msg.setTimeStamp(0.991439598409);
    msg.setSource(560U);
    msg.setSourceEntity(210U);
    msg.setDestination(43073U);
    msg.setDestinationEntity(146U);
    msg.value = 0.76088677357;

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
    msg.setTimeStamp(0.752109902022);
    msg.setSource(15432U);
    msg.setSourceEntity(63U);
    msg.setDestination(52310U);
    msg.setDestinationEntity(193U);
    msg.value = 0.18351524632;

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
    msg.setTimeStamp(0.387449626382);
    msg.setSource(45844U);
    msg.setSourceEntity(101U);
    msg.setDestination(510U);
    msg.setDestinationEntity(5U);
    msg.value = 0.191788671277;

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
    msg.setTimeStamp(0.811169128603);
    msg.setSource(4374U);
    msg.setSourceEntity(59U);
    msg.setDestination(39722U);
    msg.setDestinationEntity(6U);
    msg.value = 0.485203528279;

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
    msg.setTimeStamp(0.540914087089);
    msg.setSource(53558U);
    msg.setSourceEntity(177U);
    msg.setDestination(57120U);
    msg.setDestinationEntity(146U);
    msg.value = 0.27577609952;

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
    msg.setTimeStamp(0.295896280568);
    msg.setSource(8920U);
    msg.setSourceEntity(225U);
    msg.setDestination(1742U);
    msg.setDestinationEntity(105U);
    msg.value = 0.602607490081;

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
    msg.setTimeStamp(0.260013469403);
    msg.setSource(23652U);
    msg.setSourceEntity(208U);
    msg.setDestination(57654U);
    msg.setDestinationEntity(21U);
    msg.value = 0.63713002835;

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
    msg.setTimeStamp(0.0397232988871);
    msg.setSource(52794U);
    msg.setSourceEntity(138U);
    msg.setDestination(36099U);
    msg.setDestinationEntity(233U);
    msg.value = 0.825994840153;

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
    msg.setTimeStamp(0.394822655642);
    msg.setSource(25167U);
    msg.setSourceEntity(23U);
    msg.setDestination(30500U);
    msg.setDestinationEntity(227U);
    msg.value = 0.101699592872;

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
    msg.setTimeStamp(0.633748498387);
    msg.setSource(35493U);
    msg.setSourceEntity(161U);
    msg.setDestination(21513U);
    msg.setDestinationEntity(179U);
    msg.value = 0.0556315335015;

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
    msg.setTimeStamp(0.497782221725);
    msg.setSource(450U);
    msg.setSourceEntity(117U);
    msg.setDestination(13830U);
    msg.setDestinationEntity(215U);
    msg.value = 0.406783439;

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
    msg.setTimeStamp(0.262125665717);
    msg.setSource(45171U);
    msg.setSourceEntity(155U);
    msg.setDestination(2250U);
    msg.setDestinationEntity(38U);
    msg.direction = 0.241058906065;
    msg.speed = 0.166666314893;
    msg.turbulence = 0.25539152296;

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
    msg.setTimeStamp(0.847343727957);
    msg.setSource(15326U);
    msg.setSourceEntity(111U);
    msg.setDestination(14022U);
    msg.setDestinationEntity(204U);
    msg.direction = 0.528573840037;
    msg.speed = 0.0276094704947;
    msg.turbulence = 0.350847822983;

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
    msg.setTimeStamp(0.43395254796);
    msg.setSource(7849U);
    msg.setSourceEntity(69U);
    msg.setDestination(38509U);
    msg.setDestinationEntity(13U);
    msg.direction = 0.35934978709;
    msg.speed = 0.243236057641;
    msg.turbulence = 0.223063989612;

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
    msg.setTimeStamp(0.52375922038);
    msg.setSource(30213U);
    msg.setSourceEntity(140U);
    msg.setDestination(16478U);
    msg.setDestinationEntity(169U);
    msg.value = 0.93355855343;

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
    msg.setTimeStamp(0.660126586057);
    msg.setSource(19766U);
    msg.setSourceEntity(209U);
    msg.setDestination(33764U);
    msg.setDestinationEntity(138U);
    msg.value = 0.517065822483;

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
    msg.setTimeStamp(0.860885656652);
    msg.setSource(48675U);
    msg.setSourceEntity(63U);
    msg.setDestination(62852U);
    msg.setDestinationEntity(120U);
    msg.value = 0.240630009477;

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
    msg.setTimeStamp(0.373256621733);
    msg.setSource(27435U);
    msg.setSourceEntity(107U);
    msg.setDestination(21718U);
    msg.setDestinationEntity(243U);
    msg.value.assign("QWNAIPFJLHHKQQNDVRXBIATZCEZSZUPLWBIPYKGVRBKCXPSHUBZJGWRGRVLNKCRHUQLTQFJUOAAYYLZAOMUPEBWCGPMIVJGMJPWCRDHZCXOWVJNMYFFLEHTTDODSUGVWLFSRANMEJFXRLEVYPNDQSFK");

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
    msg.setTimeStamp(0.918703757827);
    msg.setSource(31460U);
    msg.setSourceEntity(159U);
    msg.setDestination(33350U);
    msg.setDestinationEntity(22U);
    msg.value.assign("QEISQVEXXXWBHMDPZBICBWBBSFSZBBNVXH");

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
    msg.setTimeStamp(0.353915558204);
    msg.setSource(5198U);
    msg.setSourceEntity(125U);
    msg.setDestination(61308U);
    msg.setDestinationEntity(123U);
    msg.value.assign("DQQMLYBCHTESTTGIPBXOHBWSHMVINOEQZYJJNVKCUZPIZNHFCGVZEJTUGSOXECUPBRJUTLXWBZGXCAHJGRYIRUNWTJXMXKBWKKXXYVPIHWOFWSFRSTEZAGZQGIMNPLFYDCNXVNOBSOHYMCGRZFHEDFQRANIOMLVICMLOUTAQDJEZDQFCKMQNDDBDJYEAVQLYZPVVKUTELLOSAVCSDXUHJBRKKAYPWPEGKDIPSWYJLBAQMU");

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
    msg.setTimeStamp(0.126395545227);
    msg.setSource(41556U);
    msg.setSourceEntity(157U);
    msg.setDestination(39324U);
    msg.setDestinationEntity(69U);
    const char tmp_msg_0[] = {-85, 59, 98, -2, -46, -24, -85, -1, -30, 76, -70, 20, 48, 125, -91, 121, -7, -95, -92, -18, 26, -4, -37, 89, 67, 110, 23, -76, -85, -115, -16, -15, -75, -72, 61, -41, 39, 80, 102, -100, 7, -66, 119, -21, -85, -123, -106, -61, -74, -18, 86, 15, -29, 89, 94, -37, -8, -106, 100, -87, 70};
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
    msg.setTimeStamp(0.753054995624);
    msg.setSource(49216U);
    msg.setSourceEntity(188U);
    msg.setDestination(40850U);
    msg.setDestinationEntity(183U);
    const char tmp_msg_0[] = {12, 92, -73, -83, 104, -117, -15, -32, -69, -9, 106, -57, -96, -55, 12, -54, -39, 49, -76, 21, -109, -58, -93, -101, 118, 105, -82, 115, 69, 48, -8, 79, 78, 27, -104, 117, 62, -78, -18, -9, 7, -108};
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
    msg.setTimeStamp(0.893037450709);
    msg.setSource(50747U);
    msg.setSourceEntity(19U);
    msg.setDestination(62835U);
    msg.setDestinationEntity(144U);
    const char tmp_msg_0[] = {-114, 37, 6, 103, 8, -7, 15, 67, 57, 7, 21, 111, -98, 58, 42, -26, -71, 59, -77, -100, -118, 45, -110, 63, 61, 108, -91, -80, 6, -21, -45, -55, 76, 101, 78, 126, -14, 57, -121, -11, -20, 48, -11, -94, -6, -66, 63, 9, 24, 52, -112, 8, -108, -4, -8, 85, -7, -59, -5, -72, -89, -31, 67, 123, 48, 32, 15, 0, 66, 31, 51, -44, -55, -81, -32, -63, 95, -3, -100, -11, -63, 12, -123, 37, 11, -20, 95, 28, 83, -23, -68, -11, -69, -47, -22, 74, 54, -14, 31, 8, 35, 31, 37, -4, -4, -44, -118, -35, 95, -17, -124, -83, -57, 64, 114, -100, 9, 17, 30, 40, -12, -86, -6, -79, 89, -93, -28, 92, -22, -40, -57, 74, -55, 69, -3, -125, -48, -76, -81, 101, 93, 5, 23, -23, -54, 126, -28, -44, 68, -100, -63, 49, -13, -62, 53, -62, 100, 47};
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
    msg.setTimeStamp(0.445173816034);
    msg.setSource(49996U);
    msg.setSourceEntity(155U);
    msg.setDestination(53065U);
    msg.setDestinationEntity(2U);
    msg.type = 245U;
    msg.frequency = 3596133828U;
    msg.min_range = 6882U;
    msg.max_range = 7313U;
    msg.bits_per_point = 44U;
    msg.scale_factor = 0.137208460346;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.58914114998;
    tmp_msg_0.beam_height = 0.807799712854;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-70, 105, -88, -93, -75, 63, 79, -61, 36, -80, 23, 69, -127, 101, -51, -77, 115, 119, -110, -127, 14, -53, -68, -33, -14, -64, 38, -58, 95, 101, -51, -76, -54, 62, 84, 121, -79, 48, 29, -105, -90, -15, 72, 89, 104, 98, -123, 15, -119, 33, -70, -59, -53, 23, -37, -64, 123, -85, 60, -4, 69, -49, 56, -54, 26, -88, 46, -128, 101, -26, -122, 117, 58, -112, -81, 49, -63, 123, -88};
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
    msg.setTimeStamp(0.99975485355);
    msg.setSource(9033U);
    msg.setSourceEntity(36U);
    msg.setDestination(35482U);
    msg.setDestinationEntity(105U);
    msg.type = 158U;
    msg.frequency = 1769347788U;
    msg.min_range = 29133U;
    msg.max_range = 38240U;
    msg.bits_per_point = 101U;
    msg.scale_factor = 0.251089689824;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.240279578854;
    tmp_msg_0.beam_height = 0.171430430979;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {95, 94, -106, 111, -32, -107, -65, 9, -89, -75, -107, 101, -113, 36, -46, -30, 76, -39, 123, 15, 75, 121, 1, -119, 101, 100, 80, 16, 27, 64, -37, 123, 31, -104, 48, 20, -91, 101, -28, -105, -26, -38, 123};
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
    msg.setTimeStamp(0.289705589967);
    msg.setSource(18996U);
    msg.setSourceEntity(228U);
    msg.setDestination(31459U);
    msg.setDestinationEntity(43U);
    msg.type = 30U;
    msg.frequency = 3604103931U;
    msg.min_range = 40550U;
    msg.max_range = 17266U;
    msg.bits_per_point = 59U;
    msg.scale_factor = 0.289772364408;
    const char tmp_msg_0[] = {-102, 17, -98, -36, -27, 55, -37, -66, 83, 89, 111, 47, 91, -86, 109, 54, -15, 98, -12, -32, 40, 96, -59, 37, 104, 24, 100, -28, -36, -92, 47, 38, -13, 37, -22, 63, 6, -33, -64, 5, 124, -76, 38, 57, 22, -73, 53, -42, 44, -53, -26, -36, 120, 43, 118, 126, 123, -95};
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
    msg.setTimeStamp(0.235076791781);
    msg.setSource(54701U);
    msg.setSourceEntity(141U);
    msg.setDestination(62070U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.502172018358);
    msg.setSource(48817U);
    msg.setSourceEntity(83U);
    msg.setDestination(58568U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.00571916740377);
    msg.setSource(29605U);
    msg.setSourceEntity(57U);
    msg.setDestination(34756U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.458151697723);
    msg.setSource(3317U);
    msg.setSourceEntity(186U);
    msg.setDestination(35659U);
    msg.setDestinationEntity(225U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.485373756249);
    msg.setSource(6217U);
    msg.setSourceEntity(247U);
    msg.setDestination(64124U);
    msg.setDestinationEntity(25U);
    msg.op = 115U;

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
    msg.setTimeStamp(0.528626025874);
    msg.setSource(53672U);
    msg.setSourceEntity(120U);
    msg.setDestination(2363U);
    msg.setDestinationEntity(205U);
    msg.op = 244U;

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
    msg.setTimeStamp(0.924307203794);
    msg.setSource(26397U);
    msg.setSourceEntity(197U);
    msg.setDestination(58542U);
    msg.setDestinationEntity(71U);
    msg.value = 0.964889294836;
    msg.confidence = 0.0799743388233;
    msg.opmodes.assign("CTUFJCKQMVJWLWKSOJHWWQEJXFBKNAIGCMHDQIHHGDDDENAZVPASIUHATQCSUGXZVKLMXFWJRKPWIUTKIEPAMTONRHEFNAXZDYFJPBEOQHNVYIOBOBEGDAFOUZURCOFLXDXWSLYHMERIVVYQTYLCBNPOBEWJFSISITGBMZBTOLAAGUSOCUJAGKQJTQYYNYUXCKLLKRJMBVVFDPPCPQPZRNEMIRRMVGGSDZYHCRFQTZXTPWEXYUNRN");

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
    msg.setTimeStamp(0.557541333593);
    msg.setSource(19436U);
    msg.setSourceEntity(226U);
    msg.setDestination(27332U);
    msg.setDestinationEntity(61U);
    msg.value = 0.995085040821;
    msg.confidence = 0.917665684358;
    msg.opmodes.assign("QIYBVNPQDQGJOGHVDNFEIAGPENFFIMRMGPVQSPQMZDCSEHHODHFZUUTVJCRACWAVXJEMBBNGNGLPRRJCDYLSPINFCJKXIGZVVNBWUUDGUYUQBGTWOTDCGTINTMQSB");

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
    msg.setTimeStamp(0.949558951929);
    msg.setSource(14222U);
    msg.setSourceEntity(253U);
    msg.setDestination(45341U);
    msg.setDestinationEntity(142U);
    msg.value = 0.839438982467;
    msg.confidence = 0.643426252691;
    msg.opmodes.assign("QVDDXYJBJRVUQBIIWFTSSRHKPPONFDEAHLGCTYJINJVFRSHLTOQUAZKXVPSKYLPZRVTNNAIYXTUWCOXZGYHRPRWQGWIESAODOLKSHLEGJMVPDXCCIQASPOKBCMMLXF");

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
    msg.setTimeStamp(0.686587303393);
    msg.setSource(3007U);
    msg.setSourceEntity(13U);
    msg.setDestination(29473U);
    msg.setDestinationEntity(214U);
    msg.itow = 1622309134U;
    msg.lat = 0.759577338066;
    msg.lon = 0.783341249342;
    msg.height_ell = 0.595482428896;
    msg.height_sea = 0.814228791177;
    msg.hacc = 0.893333019728;
    msg.vacc = 0.943964257081;
    msg.vel_n = 0.576630683695;
    msg.vel_e = 0.801609150906;
    msg.vel_d = 0.0108725090881;
    msg.speed = 0.338888124598;
    msg.gspeed = 0.717396580395;
    msg.heading = 0.33549910944;
    msg.sacc = 0.0877461170661;
    msg.cacc = 0.605036249596;

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
    msg.setTimeStamp(0.764587076173);
    msg.setSource(54983U);
    msg.setSourceEntity(116U);
    msg.setDestination(32820U);
    msg.setDestinationEntity(206U);
    msg.itow = 86791084U;
    msg.lat = 0.040570135562;
    msg.lon = 0.871789090531;
    msg.height_ell = 0.179518157042;
    msg.height_sea = 0.574036575641;
    msg.hacc = 0.491030777161;
    msg.vacc = 0.863232913754;
    msg.vel_n = 0.901708778611;
    msg.vel_e = 0.599250541182;
    msg.vel_d = 0.150637209564;
    msg.speed = 0.479581671053;
    msg.gspeed = 0.874509650109;
    msg.heading = 0.296091104638;
    msg.sacc = 0.0287314195495;
    msg.cacc = 0.665857637165;

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
    msg.setTimeStamp(0.512530106591);
    msg.setSource(11544U);
    msg.setSourceEntity(106U);
    msg.setDestination(20132U);
    msg.setDestinationEntity(194U);
    msg.itow = 3869490917U;
    msg.lat = 0.907727432916;
    msg.lon = 0.0661461037666;
    msg.height_ell = 0.138695108228;
    msg.height_sea = 0.130573182021;
    msg.hacc = 0.733137502811;
    msg.vacc = 0.808520245962;
    msg.vel_n = 0.609742183272;
    msg.vel_e = 0.168139990239;
    msg.vel_d = 0.617234854598;
    msg.speed = 0.118303529768;
    msg.gspeed = 0.0653967316625;
    msg.heading = 0.45913807115;
    msg.sacc = 0.482368092446;
    msg.cacc = 0.178947978532;

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
    msg.setTimeStamp(0.989534155787);
    msg.setSource(18227U);
    msg.setSourceEntity(80U);
    msg.setDestination(23524U);
    msg.setDestinationEntity(4U);
    msg.id = 123U;
    msg.value = 0.658308447739;

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
    msg.setTimeStamp(0.966230782824);
    msg.setSource(3347U);
    msg.setSourceEntity(102U);
    msg.setDestination(25609U);
    msg.setDestinationEntity(254U);
    msg.id = 37U;
    msg.value = 0.611192263818;

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
    msg.setTimeStamp(0.435939783224);
    msg.setSource(10298U);
    msg.setSourceEntity(24U);
    msg.setDestination(21483U);
    msg.setDestinationEntity(79U);
    msg.id = 249U;
    msg.value = 0.142935342658;

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
    msg.setTimeStamp(0.275213164286);
    msg.setSource(7411U);
    msg.setSourceEntity(152U);
    msg.setDestination(45963U);
    msg.setDestinationEntity(68U);
    msg.x = 0.442344547202;
    msg.y = 0.178861605216;
    msg.z = 0.569403136792;
    msg.phi = 0.480432435369;
    msg.theta = 0.514694209909;
    msg.psi = 0.295993194812;

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
    msg.setTimeStamp(0.601395395821);
    msg.setSource(26542U);
    msg.setSourceEntity(103U);
    msg.setDestination(19054U);
    msg.setDestinationEntity(186U);
    msg.x = 0.963056823978;
    msg.y = 0.585972594591;
    msg.z = 0.284573190719;
    msg.phi = 0.638606525573;
    msg.theta = 0.081804644883;
    msg.psi = 0.215233245095;

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
    msg.setTimeStamp(0.495250721977);
    msg.setSource(2015U);
    msg.setSourceEntity(207U);
    msg.setDestination(33242U);
    msg.setDestinationEntity(178U);
    msg.x = 0.734329283092;
    msg.y = 0.629939918488;
    msg.z = 0.734494549978;
    msg.phi = 0.677536099808;
    msg.theta = 0.436736524646;
    msg.psi = 0.48760649538;

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
    msg.setTimeStamp(0.277985547473);
    msg.setSource(43097U);
    msg.setSourceEntity(213U);
    msg.setDestination(50050U);
    msg.setDestinationEntity(139U);
    msg.beam_width = 0.633594670918;
    msg.beam_height = 0.423594779122;

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
    msg.setTimeStamp(0.892734001655);
    msg.setSource(18033U);
    msg.setSourceEntity(15U);
    msg.setDestination(28121U);
    msg.setDestinationEntity(100U);
    msg.beam_width = 0.956759467098;
    msg.beam_height = 0.109080713915;

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
    msg.setTimeStamp(0.167236924416);
    msg.setSource(43327U);
    msg.setSourceEntity(73U);
    msg.setDestination(4038U);
    msg.setDestinationEntity(247U);
    msg.beam_width = 0.563752243477;
    msg.beam_height = 0.806401380702;

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
    msg.setTimeStamp(0.685169853379);
    msg.setSource(28026U);
    msg.setSourceEntity(207U);
    msg.setDestination(59780U);
    msg.setDestinationEntity(216U);
    msg.sane = 105U;

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
    msg.setTimeStamp(0.0100765274021);
    msg.setSource(59702U);
    msg.setSourceEntity(35U);
    msg.setDestination(16451U);
    msg.setDestinationEntity(89U);
    msg.sane = 238U;

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
    msg.setTimeStamp(0.988095875774);
    msg.setSource(44937U);
    msg.setSourceEntity(248U);
    msg.setDestination(31054U);
    msg.setDestinationEntity(145U);
    msg.sane = 29U;

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
    msg.setTimeStamp(0.80514285603);
    msg.setSource(44193U);
    msg.setSourceEntity(249U);
    msg.setDestination(11339U);
    msg.setDestinationEntity(158U);
    msg.value = 0.534841082706;

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
    msg.setTimeStamp(0.828681794693);
    msg.setSource(60534U);
    msg.setSourceEntity(149U);
    msg.setDestination(58745U);
    msg.setDestinationEntity(147U);
    msg.value = 0.299679940882;

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
    msg.setTimeStamp(0.876055815249);
    msg.setSource(23063U);
    msg.setSourceEntity(45U);
    msg.setDestination(17097U);
    msg.setDestinationEntity(215U);
    msg.value = 0.75758224866;

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
    msg.setTimeStamp(0.485987466056);
    msg.setSource(19526U);
    msg.setSourceEntity(176U);
    msg.setDestination(5812U);
    msg.setDestinationEntity(68U);
    msg.value = 0.106257246061;

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
    msg.setTimeStamp(0.62977921566);
    msg.setSource(32421U);
    msg.setSourceEntity(57U);
    msg.setDestination(45956U);
    msg.setDestinationEntity(135U);
    msg.value = 0.329728533308;

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
    msg.setTimeStamp(0.221367754192);
    msg.setSource(26804U);
    msg.setSourceEntity(69U);
    msg.setDestination(8045U);
    msg.setDestinationEntity(180U);
    msg.value = 0.903487815253;

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
    msg.setTimeStamp(0.905608468957);
    msg.setSource(53278U);
    msg.setSourceEntity(180U);
    msg.setDestination(22661U);
    msg.setDestinationEntity(170U);
    msg.value = 0.717667392418;

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
    msg.setTimeStamp(0.371205335616);
    msg.setSource(38765U);
    msg.setSourceEntity(177U);
    msg.setDestination(52630U);
    msg.setDestinationEntity(122U);
    msg.value = 0.590603885958;

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
    msg.setTimeStamp(0.0490545535909);
    msg.setSource(35599U);
    msg.setSourceEntity(140U);
    msg.setDestination(56697U);
    msg.setDestinationEntity(229U);
    msg.value = 0.378691993763;

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
    msg.setTimeStamp(0.262298796053);
    msg.setSource(58930U);
    msg.setSourceEntity(221U);
    msg.setDestination(31545U);
    msg.setDestinationEntity(251U);
    msg.value = 0.166891640184;

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
    msg.setTimeStamp(0.866423831777);
    msg.setSource(19002U);
    msg.setSourceEntity(186U);
    msg.setDestination(19831U);
    msg.setDestinationEntity(27U);
    msg.value = 0.465141518102;

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
    msg.setTimeStamp(0.181024364887);
    msg.setSource(44720U);
    msg.setSourceEntity(193U);
    msg.setDestination(65400U);
    msg.setDestinationEntity(136U);
    msg.value = 0.254151322908;

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
    msg.setTimeStamp(0.214390737592);
    msg.setSource(19126U);
    msg.setSourceEntity(228U);
    msg.setDestination(59354U);
    msg.setDestinationEntity(48U);
    msg.value = 0.723672852085;

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
    msg.setTimeStamp(0.123004343741);
    msg.setSource(26116U);
    msg.setSourceEntity(123U);
    msg.setDestination(27294U);
    msg.setDestinationEntity(40U);
    msg.value = 0.697881296843;

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
    msg.setTimeStamp(0.493037597029);
    msg.setSource(30672U);
    msg.setSourceEntity(92U);
    msg.setDestination(5282U);
    msg.setDestinationEntity(119U);
    msg.value = 0.25935081764;

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
    msg.setTimeStamp(0.965066536807);
    msg.setSource(57737U);
    msg.setSourceEntity(253U);
    msg.setDestination(60598U);
    msg.setDestinationEntity(154U);
    msg.id = 114U;
    msg.zoom = 32U;
    msg.action = 132U;

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
    msg.setTimeStamp(0.319198391351);
    msg.setSource(6915U);
    msg.setSourceEntity(38U);
    msg.setDestination(60320U);
    msg.setDestinationEntity(4U);
    msg.id = 191U;
    msg.zoom = 116U;
    msg.action = 33U;

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
    msg.setTimeStamp(0.86804764868);
    msg.setSource(33553U);
    msg.setSourceEntity(231U);
    msg.setDestination(22127U);
    msg.setDestinationEntity(193U);
    msg.id = 175U;
    msg.zoom = 215U;
    msg.action = 215U;

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
    msg.setTimeStamp(0.862998178132);
    msg.setSource(25974U);
    msg.setSourceEntity(114U);
    msg.setDestination(62947U);
    msg.setDestinationEntity(139U);
    msg.id = 5U;
    msg.value = 0.204230617932;

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
    msg.setTimeStamp(0.315081125435);
    msg.setSource(37458U);
    msg.setSourceEntity(91U);
    msg.setDestination(40702U);
    msg.setDestinationEntity(62U);
    msg.id = 54U;
    msg.value = 0.767439507749;

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
    msg.setTimeStamp(0.748752387155);
    msg.setSource(42412U);
    msg.setSourceEntity(248U);
    msg.setDestination(35688U);
    msg.setDestinationEntity(169U);
    msg.id = 92U;
    msg.value = 0.736867428165;

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
    msg.setTimeStamp(0.0644423830369);
    msg.setSource(17038U);
    msg.setSourceEntity(208U);
    msg.setDestination(24567U);
    msg.setDestinationEntity(44U);
    msg.id = 27U;
    msg.value = 0.220343605993;

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
    msg.setTimeStamp(0.61732053368);
    msg.setSource(5682U);
    msg.setSourceEntity(183U);
    msg.setDestination(10853U);
    msg.setDestinationEntity(232U);
    msg.id = 82U;
    msg.value = 0.172620645517;

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
    msg.setTimeStamp(0.847436921521);
    msg.setSource(19978U);
    msg.setSourceEntity(100U);
    msg.setDestination(2849U);
    msg.setDestinationEntity(171U);
    msg.id = 83U;
    msg.value = 0.585415938892;

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
    msg.setTimeStamp(0.714004950316);
    msg.setSource(58649U);
    msg.setSourceEntity(2U);
    msg.setDestination(31098U);
    msg.setDestinationEntity(42U);
    msg.id = 119U;
    msg.angle = 0.121551584668;

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
    msg.setTimeStamp(0.257887225562);
    msg.setSource(4357U);
    msg.setSourceEntity(16U);
    msg.setDestination(56351U);
    msg.setDestinationEntity(164U);
    msg.id = 233U;
    msg.angle = 0.0340916444549;

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
    msg.setTimeStamp(0.356692326604);
    msg.setSource(51821U);
    msg.setSourceEntity(98U);
    msg.setDestination(19677U);
    msg.setDestinationEntity(10U);
    msg.id = 169U;
    msg.angle = 0.711200207988;

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
    msg.setTimeStamp(0.821363509898);
    msg.setSource(28116U);
    msg.setSourceEntity(121U);
    msg.setDestination(41378U);
    msg.setDestinationEntity(244U);
    msg.op = 162U;
    msg.actions.assign("RUSHVDLWRQOGRLSNBAJKPNIJKGGBKSCHSIXCMDTKMIFXUMQAFYAEYDTEPXVMZGAZMDEYCWKGRMJHEBBXKCPGYWNXQWYCHELQULWYOVZULYHH");

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
    msg.setTimeStamp(0.399067555658);
    msg.setSource(25401U);
    msg.setSourceEntity(137U);
    msg.setDestination(9043U);
    msg.setDestinationEntity(231U);
    msg.op = 24U;
    msg.actions.assign("BOWGYKDHREICKCCMPFBYAHYOFEVCQXAOMXZNCFTCPMJNJEYGMSPMVPELBHTZFSSLCNJQVBFRWFEIVG");

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
    msg.setTimeStamp(0.297847194774);
    msg.setSource(19568U);
    msg.setSourceEntity(10U);
    msg.setDestination(63935U);
    msg.setDestinationEntity(138U);
    msg.op = 86U;
    msg.actions.assign("HLQRXOMELXYGYODJKAMYDEYJYVSEJWTBHKTNUMARGRHAZSUWTLVZQIHOOK");

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
    msg.setTimeStamp(0.037081523991);
    msg.setSource(31429U);
    msg.setSourceEntity(129U);
    msg.setDestination(11953U);
    msg.setDestinationEntity(214U);
    msg.actions.assign("AIHCEXVBJLXKLNVEHHTNPSJVDNAQBJOG");

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
    msg.setTimeStamp(0.124398672984);
    msg.setSource(15875U);
    msg.setSourceEntity(230U);
    msg.setDestination(54538U);
    msg.setDestinationEntity(118U);
    msg.actions.assign("HOZYFNSVDTRGNJYUQLQSYZLGSNKQAOODQNFPZNHZIELYYBWMQLATOKSVOZTPEMHSUKWZUNIGTDBAFXJMWAJYVW");

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
    msg.setTimeStamp(0.193492309552);
    msg.setSource(13289U);
    msg.setSourceEntity(154U);
    msg.setDestination(45474U);
    msg.setDestinationEntity(69U);
    msg.actions.assign("IQPDCIZYCFHKRJZXLEBOPRSMTXEQOKPHEAHGWSWWYEIXYXQIZAUCJCGETHUEOAFPRTPUEECLSSSFKFHOLMADNNZRCNLIVNVWAGLFLJKXZKDRAGUNPIMHYWVSNCWHWMDVNPNDWOTJCQOXRAJMGFPSXHHIDQBGYDNQEBLWLJYKMLBWLQKFMQOBGCOVVRZTJQZOGXUBJMTGVDRDTBVGIFMOUPSTTPABDFVYUCBSYEZKVIMTARQYYRJZJUNAH");

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
    msg.setTimeStamp(0.980967014131);
    msg.setSource(8766U);
    msg.setSourceEntity(158U);
    msg.setDestination(57812U);
    msg.setDestinationEntity(82U);
    msg.button = 98U;
    msg.value = 39U;

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
    msg.setTimeStamp(0.518389757681);
    msg.setSource(32942U);
    msg.setSourceEntity(134U);
    msg.setDestination(20680U);
    msg.setDestinationEntity(118U);
    msg.button = 55U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.503816731349);
    msg.setSource(12527U);
    msg.setSourceEntity(164U);
    msg.setDestination(48344U);
    msg.setDestinationEntity(26U);
    msg.button = 35U;
    msg.value = 253U;

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
    msg.setTimeStamp(0.29618799034);
    msg.setSource(33176U);
    msg.setSourceEntity(151U);
    msg.setDestination(6926U);
    msg.setDestinationEntity(168U);
    msg.op = 211U;
    msg.text.assign("EIKJJEJXVRHCDVCQMKRLRROVUBXPUYVORZGQZFKKSLIKNDJPAMTNZHJYSEYAEFNORM");

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
    msg.setTimeStamp(0.0335323919536);
    msg.setSource(20425U);
    msg.setSourceEntity(173U);
    msg.setDestination(41640U);
    msg.setDestinationEntity(119U);
    msg.op = 107U;
    msg.text.assign("ZIYPDUPVYTLZBHPJBMLESMNXOFQDLCISETJAIOGQPQNFUQKJEHRQTYKKPURIWFXZSXHWTCMDVBGFZJXBRANUNANWJONRRWYYIIMBSDCHETCSYANVAFFPOGRDSJCMWHIUYHOOGWVTKMUHZYO");

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
    msg.setTimeStamp(0.768409750001);
    msg.setSource(58531U);
    msg.setSourceEntity(21U);
    msg.setDestination(51656U);
    msg.setDestinationEntity(99U);
    msg.op = 251U;
    msg.text.assign("TWPVULPPTIAEQMEWYNYMJDXCAL");

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
    msg.setTimeStamp(0.788014686214);
    msg.setSource(13123U);
    msg.setSourceEntity(55U);
    msg.setDestination(3905U);
    msg.setDestinationEntity(236U);
    msg.op = 113U;
    msg.time_remain = 0.771769830633;
    msg.sched_time = 0.301120270644;

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
    msg.setTimeStamp(0.0158375680368);
    msg.setSource(50918U);
    msg.setSourceEntity(120U);
    msg.setDestination(39117U);
    msg.setDestinationEntity(178U);
    msg.op = 191U;
    msg.time_remain = 0.270503025084;
    msg.sched_time = 0.883935876569;

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
    msg.setTimeStamp(0.967691176924);
    msg.setSource(18518U);
    msg.setSourceEntity(155U);
    msg.setDestination(57332U);
    msg.setDestinationEntity(195U);
    msg.op = 149U;
    msg.time_remain = 0.444860626679;
    msg.sched_time = 0.161788434872;

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
    msg.setTimeStamp(0.235490373885);
    msg.setSource(55105U);
    msg.setSourceEntity(100U);
    msg.setDestination(55090U);
    msg.setDestinationEntity(140U);
    msg.name.assign("CWJCVSGELTQKRWFPXSNFHCKEFKPJVNCDDCGRPHSRQHQFMOGBWWXKNGQFBQAXSRLMZPYYLHAGZPTZGEQMTWRINMKRNMYKENAFARPBZYXPCIVNBHVIYTCQYZLZUBIKOBEOKSJAXVGWTGRNTTVYHMRTOIUPSBXGJALDREJWJODNZQOUVENUMDYUCLYKWJIAJLUBULLTMEGAOVSAFLOHUCQTPDZVHBJXFCDQAIXEIZDZUIOMEK");
    msg.op = 115U;
    msg.sched_time = 0.816160798583;

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
    msg.setTimeStamp(0.521483086322);
    msg.setSource(23480U);
    msg.setSourceEntity(250U);
    msg.setDestination(21799U);
    msg.setDestinationEntity(115U);
    msg.name.assign("VYXUGLHNEDZVZWDSPUYQZBVITMELIFALNLZKSGLHULGBTTKHNWXRDQFWTVDCIWJNWRJEPUVEESTUJNGTRMONTJWFFVXYLBYPJYQHFIGXXWRRFCMHTLWCCVOQKCEWLZPIRYBEYFUBISFXOQGTITSRUYYSQRKGORNDPVMXDUBEQGOQDPAOGNOJPHKEYQRXMKKAKJMBUNSMJZ");
    msg.op = 153U;
    msg.sched_time = 0.959042042213;

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
    msg.setTimeStamp(0.108150001415);
    msg.setSource(25805U);
    msg.setSourceEntity(175U);
    msg.setDestination(21181U);
    msg.setDestinationEntity(25U);
    msg.name.assign("EUFIYHQKHZIPRYFDWVCIVVGJLNTSXNNKCJKTFVWFTIGZIPVZVYIGBWIRRAXMQELKOJWQTRJYUFPJODSOQBEYXWJIVZJRAYGRVDPDCAREAWMZHKQPBFWGCISTYAPES");
    msg.op = 190U;
    msg.sched_time = 0.52419009714;

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
    msg.setTimeStamp(0.885070119387);
    msg.setSource(36216U);
    msg.setSourceEntity(8U);
    msg.setDestination(409U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.335709020424);
    msg.setSource(57638U);
    msg.setSourceEntity(236U);
    msg.setDestination(62560U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.671523849483);
    msg.setSource(33605U);
    msg.setSourceEntity(128U);
    msg.setDestination(9425U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.462893752953);
    msg.setSource(6547U);
    msg.setSourceEntity(105U);
    msg.setDestination(44175U);
    msg.setDestinationEntity(102U);
    msg.name.assign("NCBDBUILRQGPRYXBNEFPSFAUSSFXHIIBWKORNHUOXHVZBWZHWEBPKMNSTFJTEQVJQPMOVENLGZOKRORZYLTJPJXQMMLZNWYBNKAERCTLUCQZVERKCDZST");
    msg.state = 132U;

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
    msg.setTimeStamp(0.505683549625);
    msg.setSource(46112U);
    msg.setSourceEntity(32U);
    msg.setDestination(53572U);
    msg.setDestinationEntity(115U);
    msg.name.assign("FGZPEELQNKIKJDHOXIJYRJRUFKBCBJACUQNEGWKAHDNXPKDWPFBFTFGBNPFWYNYJGFNPIPLYTITAULBMTCNSQQRSSRLOMAVUAO");
    msg.state = 25U;

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
    msg.setTimeStamp(0.931987355972);
    msg.setSource(65123U);
    msg.setSourceEntity(43U);
    msg.setDestination(61664U);
    msg.setDestinationEntity(68U);
    msg.name.assign("CXNUWTFFHXKQBBBSAYACYBZYXMNLNKLEYPFJJXACTNEYUSOQHMILDTEHWWNCLJKTRVFNXYMTZXKDTUPMFLPDVLGOLSABQDQRFWOZVGLSVHLXWWBEIGVQIXVYGDB");
    msg.state = 88U;

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
    msg.setTimeStamp(0.182568899078);
    msg.setSource(28508U);
    msg.setSourceEntity(127U);
    msg.setDestination(46734U);
    msg.setDestinationEntity(131U);
    msg.name.assign("LJAWKNXATPWWUGMIZADCKOWHUMUGJYYQTIVKFZADURXQYRRWOBHQVVBIRCCNMRMAMLZBLGYNBEXIQPQRLGJNAOJSSIHZJULPFYKEOAINANYKFJUXYUFGZSRVZFYBJROWWPELN");
    msg.value = 156U;

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
    msg.setTimeStamp(0.45236077436);
    msg.setSource(44850U);
    msg.setSourceEntity(144U);
    msg.setDestination(58995U);
    msg.setDestinationEntity(235U);
    msg.name.assign("OYHODQSCSKIYTWQYVWRXEGRGETJMINKGEWSUNBZVZTTDOPWHRWXXYBARKBZLOETKOXQRSQBLICUITVRSTFVBWDDNDUQMNZIQAKWGMPSJGCUJZRVHZFHBKCRYJRVWIDSBZDAXFVQSGAGASOYOEJCPHLMJTYGSEHCMUEAFHDOFFZHXAMUKMNVBAMXMHTPXOLVCIPRXCYILILUQND");
    msg.value = 199U;

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
    msg.setTimeStamp(0.721233692106);
    msg.setSource(56814U);
    msg.setSourceEntity(201U);
    msg.setDestination(44541U);
    msg.setDestinationEntity(227U);
    msg.name.assign("BPKVANWTOALFZSGLRBPHIKCLJGCLIFYKCTNZAOLONKMAIXZBVQXRRNBHTQQQWEGFSPJCHGZUIRBQDZVXCPWPKHFAOKZWMWIYGFUTQCFY");
    msg.value = 145U;

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
    msg.setTimeStamp(0.0466026139134);
    msg.setSource(14098U);
    msg.setSourceEntity(41U);
    msg.setDestination(52715U);
    msg.setDestinationEntity(170U);
    msg.name.assign("OVTKIGDKQMZCIMPTEMIFUCEJDWLSGFFCZYFINYUATVOLPRKPMRUNSMEGFZRZQHJBSLTFEYIXMTJFZBIQXJOKLAJBHCPNVRGZSVXMABKDGHJJIMUAUBEHBXHNTOOWL");

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
    msg.setTimeStamp(0.237904081463);
    msg.setSource(58408U);
    msg.setSourceEntity(76U);
    msg.setDestination(43167U);
    msg.setDestinationEntity(4U);
    msg.name.assign("KDEJWDVJLVHCCANWLXGMQHEVXQWABFFKPKARHOPJWLFFPUZOTXQIBCSEJUFVSYZBKEHMLSIZITXKCMYDGAHDBYUPNRRDCGEZIETZSXDYORLTSWMJSGYXXZP");

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
    msg.setTimeStamp(0.457481912278);
    msg.setSource(26921U);
    msg.setSourceEntity(36U);
    msg.setDestination(5028U);
    msg.setDestinationEntity(69U);
    msg.name.assign("MUJNPLFEKEMHDASQMBWSYGALFVTJWGRZQOOUOGHFLSHLOMVUYIPVDRVZHHPDXNBGMUZTBCQABSEOSOZCJVIWFKMALROBGYXELBPEFXXKHAKQVZHQKJPJBCGLUEWKWISSINUNTGDPLIUXCZKDCWJRFIZZRGMECJCRRDVUDCYNQNITYKETKTIFYAXHYM");

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
    msg.setTimeStamp(0.636000975782);
    msg.setSource(37408U);
    msg.setSourceEntity(219U);
    msg.setDestination(11761U);
    msg.setDestinationEntity(196U);
    msg.name.assign("QODWTXPEOAIYPFSIBBQOVDFCZOTVJKHCTQNYTFAROPGLDXEAISUFFKQCHZJIQLQGJFHUULHTEVTM");
    msg.value = 155U;

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
    msg.setTimeStamp(0.901826518726);
    msg.setSource(742U);
    msg.setSourceEntity(103U);
    msg.setDestination(54629U);
    msg.setDestinationEntity(102U);
    msg.name.assign("OEZNXTCGLPRIOJLYEXQYNJPUOZSXDRMPJSXADLHBYWZSBCICDJWLJBJWOMFWFIVPKJKIGMQMFXTSMZOTSWHIZASTHOIOSAEMENAQCDRLYSVVO");
    msg.value = 123U;

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
    msg.setTimeStamp(0.370962187445);
    msg.setSource(12125U);
    msg.setSourceEntity(74U);
    msg.setDestination(27099U);
    msg.setDestinationEntity(222U);
    msg.name.assign("BURMGPTWIDHBMHNBGUFOVBLOVPATPZECOGDEVIPTXDTIKFFWXLUYYCKZYQHXJYJPZPRRVYSTCXDAEGORPQCBMSHZSUUVWULKBOMFDHWRQVSQWIFGRCPHNMNUJTNIZMXARJQLJTVSASKAGQDLGZCVGXRIYQEOYKWEJNDEILBHLIMZLCLJELNSFMINJAKESICGWEAGBPNYUHMOZKKVBMYQDTQKPUBJZVNETUXYHOXKXARFC");
    msg.value = 155U;

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
    msg.setTimeStamp(0.804475488091);
    msg.setSource(6199U);
    msg.setSourceEntity(167U);
    msg.setDestination(24520U);
    msg.setDestinationEntity(146U);
    msg.id = 205U;
    msg.period = 2153327483U;
    msg.duty_cycle = 166450562U;

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
    msg.setTimeStamp(0.91215268446);
    msg.setSource(26095U);
    msg.setSourceEntity(230U);
    msg.setDestination(38066U);
    msg.setDestinationEntity(102U);
    msg.id = 176U;
    msg.period = 3719934178U;
    msg.duty_cycle = 112947819U;

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
    msg.setTimeStamp(0.536445185311);
    msg.setSource(23878U);
    msg.setSourceEntity(149U);
    msg.setDestination(6076U);
    msg.setDestinationEntity(95U);
    msg.id = 16U;
    msg.period = 3436760317U;
    msg.duty_cycle = 1497721504U;

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
    msg.setTimeStamp(0.407480651232);
    msg.setSource(26305U);
    msg.setSourceEntity(95U);
    msg.setDestination(49492U);
    msg.setDestinationEntity(173U);
    msg.id = 12U;
    msg.period = 2095391886U;
    msg.duty_cycle = 470142728U;

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
    msg.setTimeStamp(0.886747573953);
    msg.setSource(13262U);
    msg.setSourceEntity(225U);
    msg.setDestination(49061U);
    msg.setDestinationEntity(224U);
    msg.id = 217U;
    msg.period = 610293859U;
    msg.duty_cycle = 1221175411U;

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
    msg.setTimeStamp(0.799276607183);
    msg.setSource(388U);
    msg.setSourceEntity(99U);
    msg.setDestination(54599U);
    msg.setDestinationEntity(26U);
    msg.id = 210U;
    msg.period = 2749845028U;
    msg.duty_cycle = 4250906067U;

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
    msg.setTimeStamp(0.829127677904);
    msg.setSource(13442U);
    msg.setSourceEntity(201U);
    msg.setDestination(65108U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.980365158791;
    msg.lon = 0.791089516655;
    msg.height = 0.785421127147;
    msg.x = 0.714747263698;
    msg.y = 0.472884337041;
    msg.z = 0.337054097633;
    msg.phi = 0.333980747308;
    msg.theta = 0.822571923542;
    msg.psi = 0.708112003264;
    msg.u = 0.731477201959;
    msg.v = 0.275724890857;
    msg.w = 0.652119149581;
    msg.vx = 0.155956859582;
    msg.vy = 0.745922799405;
    msg.vz = 0.346201038615;
    msg.p = 0.629921160461;
    msg.q = 0.506903206686;
    msg.r = 0.0810926581636;
    msg.depth = 0.995304880513;
    msg.alt = 0.385916016371;

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
    msg.setTimeStamp(0.0778142483583);
    msg.setSource(44664U);
    msg.setSourceEntity(69U);
    msg.setDestination(37633U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.00523915300793;
    msg.lon = 0.664858021996;
    msg.height = 0.331573433854;
    msg.x = 0.171137872783;
    msg.y = 0.97979758461;
    msg.z = 0.86576625494;
    msg.phi = 0.218272244575;
    msg.theta = 0.893420820197;
    msg.psi = 0.311452321139;
    msg.u = 0.134029849329;
    msg.v = 0.834323724847;
    msg.w = 0.973630846298;
    msg.vx = 0.978541211821;
    msg.vy = 0.954625992605;
    msg.vz = 0.441225908536;
    msg.p = 0.581445806176;
    msg.q = 0.455096759105;
    msg.r = 0.239685188982;
    msg.depth = 0.942098416537;
    msg.alt = 0.581936159556;

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
    msg.setTimeStamp(0.151790486405);
    msg.setSource(50060U);
    msg.setSourceEntity(187U);
    msg.setDestination(58906U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.184655900974;
    msg.lon = 0.153659641431;
    msg.height = 0.650295356566;
    msg.x = 0.872067409262;
    msg.y = 0.0937148619041;
    msg.z = 0.414111912989;
    msg.phi = 0.321804793805;
    msg.theta = 0.722993140504;
    msg.psi = 0.00180300809757;
    msg.u = 0.966814018805;
    msg.v = 0.436569458639;
    msg.w = 0.716951468322;
    msg.vx = 0.591074243887;
    msg.vy = 0.175331489702;
    msg.vz = 0.819813826457;
    msg.p = 0.780288736507;
    msg.q = 0.828222531783;
    msg.r = 0.759216674574;
    msg.depth = 0.197333048393;
    msg.alt = 0.242897874484;

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
    msg.setTimeStamp(0.530066486899);
    msg.setSource(9421U);
    msg.setSourceEntity(225U);
    msg.setDestination(2465U);
    msg.setDestinationEntity(211U);
    msg.x = 0.14042648436;
    msg.y = 0.654143737958;
    msg.z = 0.120980134462;

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
    msg.setTimeStamp(0.4863134915);
    msg.setSource(11476U);
    msg.setSourceEntity(218U);
    msg.setDestination(32934U);
    msg.setDestinationEntity(146U);
    msg.x = 0.735346623483;
    msg.y = 0.644568818518;
    msg.z = 0.493767979335;

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
    msg.setTimeStamp(0.125847678378);
    msg.setSource(52094U);
    msg.setSourceEntity(226U);
    msg.setDestination(35752U);
    msg.setDestinationEntity(97U);
    msg.x = 0.540810080258;
    msg.y = 0.719553261568;
    msg.z = 0.859250417951;

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
    msg.setTimeStamp(0.127083421886);
    msg.setSource(25960U);
    msg.setSourceEntity(251U);
    msg.setDestination(5464U);
    msg.setDestinationEntity(103U);
    msg.value = 0.197434264228;

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
    msg.setTimeStamp(0.414062648175);
    msg.setSource(17570U);
    msg.setSourceEntity(247U);
    msg.setDestination(17805U);
    msg.setDestinationEntity(124U);
    msg.value = 0.481767799346;

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
    msg.setTimeStamp(0.423773440508);
    msg.setSource(54579U);
    msg.setSourceEntity(174U);
    msg.setDestination(24669U);
    msg.setDestinationEntity(71U);
    msg.value = 0.227613181689;

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
    msg.setTimeStamp(0.191906289397);
    msg.setSource(32654U);
    msg.setSourceEntity(101U);
    msg.setDestination(28593U);
    msg.setDestinationEntity(216U);
    msg.value = 0.422804054497;

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
    msg.setTimeStamp(0.97994770008);
    msg.setSource(24256U);
    msg.setSourceEntity(237U);
    msg.setDestination(9194U);
    msg.setDestinationEntity(127U);
    msg.value = 0.0489011612927;

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
    msg.setTimeStamp(0.110440348703);
    msg.setSource(55423U);
    msg.setSourceEntity(46U);
    msg.setDestination(22897U);
    msg.setDestinationEntity(112U);
    msg.value = 0.812477682036;

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
    msg.setTimeStamp(0.846369584881);
    msg.setSource(45314U);
    msg.setSourceEntity(144U);
    msg.setDestination(40012U);
    msg.setDestinationEntity(9U);
    msg.x = 0.556112006096;
    msg.y = 0.920525178536;
    msg.z = 0.856880192734;
    msg.phi = 0.607007347424;
    msg.theta = 0.984907089028;
    msg.psi = 0.979878075152;
    msg.p = 0.205160241505;
    msg.q = 0.96741506934;
    msg.r = 0.307799918647;
    msg.u = 0.0594488656309;
    msg.v = 0.0772675371915;
    msg.w = 0.627023209835;
    msg.bias_psi = 0.86519094352;
    msg.bias_r = 0.517942498656;

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
    msg.setTimeStamp(0.357813360036);
    msg.setSource(20437U);
    msg.setSourceEntity(72U);
    msg.setDestination(64659U);
    msg.setDestinationEntity(251U);
    msg.x = 0.972450789104;
    msg.y = 0.301292746241;
    msg.z = 0.0860716329869;
    msg.phi = 0.81539478186;
    msg.theta = 0.483204461383;
    msg.psi = 0.650324026305;
    msg.p = 0.228041780505;
    msg.q = 0.794759062838;
    msg.r = 0.515594904383;
    msg.u = 0.108716783625;
    msg.v = 0.29772330767;
    msg.w = 0.599972683462;
    msg.bias_psi = 0.565346959322;
    msg.bias_r = 0.118687610318;

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
    msg.setTimeStamp(0.587567353949);
    msg.setSource(11302U);
    msg.setSourceEntity(197U);
    msg.setDestination(22609U);
    msg.setDestinationEntity(73U);
    msg.x = 0.844532470903;
    msg.y = 0.792099440168;
    msg.z = 0.913465203165;
    msg.phi = 0.834722180089;
    msg.theta = 0.235626978189;
    msg.psi = 0.167889532009;
    msg.p = 0.0126098970599;
    msg.q = 0.0552660211629;
    msg.r = 0.668994797683;
    msg.u = 0.76534343153;
    msg.v = 0.0951786816883;
    msg.w = 0.077829901136;
    msg.bias_psi = 0.305525249314;
    msg.bias_r = 0.588468103035;

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
    msg.setTimeStamp(0.302708863599);
    msg.setSource(31027U);
    msg.setSourceEntity(114U);
    msg.setDestination(3647U);
    msg.setDestinationEntity(141U);
    msg.bias_psi = 0.606192060153;
    msg.bias_r = 0.0426191217767;
    msg.cog = 0.537093502072;
    msg.cyaw = 0.0232553906784;
    msg.lbl_rej_level = 0.472120721483;
    msg.gps_rej_level = 0.565380265476;
    msg.custom_x = 0.044943963046;
    msg.custom_y = 0.809151233589;
    msg.custom_z = 0.599884214101;

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
    msg.setTimeStamp(0.280198370769);
    msg.setSource(16724U);
    msg.setSourceEntity(48U);
    msg.setDestination(33939U);
    msg.setDestinationEntity(67U);
    msg.bias_psi = 0.580573949631;
    msg.bias_r = 0.123139303536;
    msg.cog = 0.464569629406;
    msg.cyaw = 0.734429639353;
    msg.lbl_rej_level = 0.269764485233;
    msg.gps_rej_level = 0.044578685168;
    msg.custom_x = 0.822185937426;
    msg.custom_y = 0.0843794492429;
    msg.custom_z = 0.794990669453;

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
    msg.setTimeStamp(0.253764598463);
    msg.setSource(34997U);
    msg.setSourceEntity(60U);
    msg.setDestination(58618U);
    msg.setDestinationEntity(144U);
    msg.bias_psi = 0.0167553620817;
    msg.bias_r = 0.839958523719;
    msg.cog = 0.496216560861;
    msg.cyaw = 0.854621292194;
    msg.lbl_rej_level = 0.946290351226;
    msg.gps_rej_level = 0.0041739935417;
    msg.custom_x = 0.875790363336;
    msg.custom_y = 0.310364189495;
    msg.custom_z = 0.890266016486;

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
    msg.setTimeStamp(0.323769171799);
    msg.setSource(63985U);
    msg.setSourceEntity(81U);
    msg.setDestination(54230U);
    msg.setDestinationEntity(189U);
    msg.utc_time = 0.907548137809;
    msg.reason = 156U;

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
    msg.setTimeStamp(0.474914579316);
    msg.setSource(45893U);
    msg.setSourceEntity(213U);
    msg.setDestination(12588U);
    msg.setDestinationEntity(61U);
    msg.utc_time = 0.726599409965;
    msg.reason = 51U;

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
    msg.setTimeStamp(0.867903658663);
    msg.setSource(24919U);
    msg.setSourceEntity(182U);
    msg.setDestination(50569U);
    msg.setDestinationEntity(50U);
    msg.utc_time = 0.513887235334;
    msg.reason = 141U;

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
    msg.setTimeStamp(0.465321466635);
    msg.setSource(13576U);
    msg.setSourceEntity(63U);
    msg.setDestination(30176U);
    msg.setDestinationEntity(176U);
    msg.id = 98U;
    msg.range = 0.748199834068;
    msg.acceptance = 23U;

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
    msg.setTimeStamp(0.8899378618);
    msg.setSource(38083U);
    msg.setSourceEntity(121U);
    msg.setDestination(64922U);
    msg.setDestinationEntity(52U);
    msg.id = 253U;
    msg.range = 0.0335251666987;
    msg.acceptance = 33U;

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
    msg.setTimeStamp(0.394880834575);
    msg.setSource(55817U);
    msg.setSourceEntity(157U);
    msg.setDestination(63487U);
    msg.setDestinationEntity(36U);
    msg.id = 241U;
    msg.range = 0.0747560504145;
    msg.acceptance = 58U;

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
    msg.setTimeStamp(0.916854997527);
    msg.setSource(58574U);
    msg.setSourceEntity(252U);
    msg.setDestination(29763U);
    msg.setDestinationEntity(217U);
    msg.type = 220U;
    msg.reason = 136U;
    msg.value = 0.289930651494;
    msg.timestep = 0.194211591982;

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
    msg.setTimeStamp(0.452303289314);
    msg.setSource(45146U);
    msg.setSourceEntity(206U);
    msg.setDestination(48334U);
    msg.setDestinationEntity(62U);
    msg.type = 233U;
    msg.reason = 96U;
    msg.value = 0.358347120156;
    msg.timestep = 0.743098594273;

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
    msg.setTimeStamp(0.755577150751);
    msg.setSource(26197U);
    msg.setSourceEntity(178U);
    msg.setDestination(573U);
    msg.setDestinationEntity(192U);
    msg.type = 77U;
    msg.reason = 50U;
    msg.value = 0.530404009953;
    msg.timestep = 0.162681733661;

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
    msg.setTimeStamp(0.841958756556);
    msg.setSource(4564U);
    msg.setSourceEntity(3U);
    msg.setDestination(250U);
    msg.setDestinationEntity(212U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ABMMNNCDBALOOUZOBDH");
    tmp_msg_0.lat = 0.876610799972;
    tmp_msg_0.lon = 0.602804381271;
    tmp_msg_0.depth = 0.859704306957;
    tmp_msg_0.query_channel = 31U;
    tmp_msg_0.reply_channel = 32U;
    tmp_msg_0.transponder_delay = 35U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.278989805788;
    msg.y = 0.627330530506;
    msg.var_x = 0.153724352905;
    msg.var_y = 0.309505949575;
    msg.distance = 0.930795814086;

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
    msg.setTimeStamp(0.214018958828);
    msg.setSource(43806U);
    msg.setSourceEntity(232U);
    msg.setDestination(40432U);
    msg.setDestinationEntity(92U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WMHTWFZYXIXAOEQSXBMXNGYKCRUUTQC");
    tmp_msg_0.lat = 0.0484092203761;
    tmp_msg_0.lon = 0.567152476849;
    tmp_msg_0.depth = 0.240282663704;
    tmp_msg_0.query_channel = 116U;
    tmp_msg_0.reply_channel = 240U;
    tmp_msg_0.transponder_delay = 101U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.883651621914;
    msg.y = 0.945734805828;
    msg.var_x = 0.74614241075;
    msg.var_y = 0.073921242604;
    msg.distance = 0.542464667249;

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
    msg.setTimeStamp(0.976761489131);
    msg.setSource(45045U);
    msg.setSourceEntity(120U);
    msg.setDestination(48396U);
    msg.setDestinationEntity(241U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BGQOOXULPSSCDFQOUBGALDOPPEAARWEJXPNIMXEADTCVKDKHSIZXTNIJYLTXIGDSNYBCFHGPKETSRCMEXOLRAOUZISIDAKCZCBSQJJWFFHPTVYUVESZSGGNGZNQRKHRFMDMBENWDANALTADQLBXDXQAXMCHMUHVMWYTUUGHYHJLVYYNTMZZVNMRMUXWHVOUFOTHQZFEVLIRYFWLGBPFKKRWKUOJOC");
    tmp_msg_0.lat = 0.0349235353874;
    tmp_msg_0.lon = 0.852270011498;
    tmp_msg_0.depth = 0.308036694173;
    tmp_msg_0.query_channel = 78U;
    tmp_msg_0.reply_channel = 137U;
    tmp_msg_0.transponder_delay = 229U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.728666169318;
    msg.y = 0.780293286637;
    msg.var_x = 0.464703731091;
    msg.var_y = 0.281211766193;
    msg.distance = 0.0736627611066;

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
    msg.setTimeStamp(0.356043794868);
    msg.setSource(29893U);
    msg.setSourceEntity(133U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(14U);
    msg.state = 25U;

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
    msg.setTimeStamp(0.984404789728);
    msg.setSource(36823U);
    msg.setSourceEntity(235U);
    msg.setDestination(7189U);
    msg.setDestinationEntity(218U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.590760741639);
    msg.setSource(148U);
    msg.setSourceEntity(18U);
    msg.setDestination(51264U);
    msg.setDestinationEntity(130U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.621656594784);
    msg.setSource(42210U);
    msg.setSourceEntity(224U);
    msg.setDestination(7460U);
    msg.setDestinationEntity(45U);
    msg.x = 0.32564647432;
    msg.y = 0.681531123218;
    msg.z = 0.592765184156;

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
    msg.setTimeStamp(0.378239284981);
    msg.setSource(47716U);
    msg.setSourceEntity(106U);
    msg.setDestination(16220U);
    msg.setDestinationEntity(136U);
    msg.x = 0.80924158779;
    msg.y = 0.551004441968;
    msg.z = 0.38403555513;

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
    msg.setTimeStamp(0.464052537619);
    msg.setSource(16862U);
    msg.setSourceEntity(171U);
    msg.setDestination(1165U);
    msg.setDestinationEntity(199U);
    msg.x = 0.298663915517;
    msg.y = 0.808090024237;
    msg.z = 0.39242016174;

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
    msg.setTimeStamp(0.193146350834);
    msg.setSource(37465U);
    msg.setSourceEntity(235U);
    msg.setDestination(59626U);
    msg.setDestinationEntity(59U);
    msg.value = 0.168008475758;

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
    msg.setTimeStamp(0.345797051492);
    msg.setSource(9055U);
    msg.setSourceEntity(57U);
    msg.setDestination(44367U);
    msg.setDestinationEntity(232U);
    msg.value = 0.558570555391;

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
    msg.setTimeStamp(0.923568982772);
    msg.setSource(48930U);
    msg.setSourceEntity(43U);
    msg.setDestination(1853U);
    msg.setDestinationEntity(211U);
    msg.value = 0.635144420422;

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
    msg.setTimeStamp(0.31843046609);
    msg.setSource(52199U);
    msg.setSourceEntity(174U);
    msg.setDestination(20094U);
    msg.setDestinationEntity(189U);
    msg.value = 0.867527290228;
    msg.z_units = 130U;

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
    msg.setTimeStamp(0.683611820727);
    msg.setSource(20872U);
    msg.setSourceEntity(157U);
    msg.setDestination(54308U);
    msg.setDestinationEntity(2U);
    msg.value = 0.064884333192;
    msg.z_units = 161U;

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
    msg.setTimeStamp(0.313689403605);
    msg.setSource(52339U);
    msg.setSourceEntity(74U);
    msg.setDestination(9736U);
    msg.setDestinationEntity(155U);
    msg.value = 0.0797819804321;
    msg.z_units = 169U;

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
    msg.setTimeStamp(0.791612880264);
    msg.setSource(63284U);
    msg.setSourceEntity(131U);
    msg.setDestination(6366U);
    msg.setDestinationEntity(135U);
    msg.value = 0.942554975516;
    msg.speed_units = 101U;

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
    msg.setTimeStamp(0.286474316485);
    msg.setSource(1196U);
    msg.setSourceEntity(230U);
    msg.setDestination(48530U);
    msg.setDestinationEntity(43U);
    msg.value = 0.668544646565;
    msg.speed_units = 31U;

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
    msg.setTimeStamp(0.551759418333);
    msg.setSource(16848U);
    msg.setSourceEntity(49U);
    msg.setDestination(39420U);
    msg.setDestinationEntity(198U);
    msg.value = 0.384103531188;
    msg.speed_units = 31U;

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
    msg.setTimeStamp(0.683076385936);
    msg.setSource(59663U);
    msg.setSourceEntity(196U);
    msg.setDestination(31306U);
    msg.setDestinationEntity(63U);
    msg.value = 0.778607783763;

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
    msg.setTimeStamp(0.6909880705);
    msg.setSource(47550U);
    msg.setSourceEntity(227U);
    msg.setDestination(9984U);
    msg.setDestinationEntity(11U);
    msg.value = 0.328829623102;

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
    msg.setTimeStamp(0.987857904796);
    msg.setSource(39477U);
    msg.setSourceEntity(34U);
    msg.setDestination(44702U);
    msg.setDestinationEntity(136U);
    msg.value = 0.660299663606;

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
    msg.setTimeStamp(0.0103520559958);
    msg.setSource(56438U);
    msg.setSourceEntity(168U);
    msg.setDestination(17964U);
    msg.setDestinationEntity(10U);
    msg.value = 0.122683434059;

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
    msg.setTimeStamp(0.0895391988618);
    msg.setSource(5624U);
    msg.setSourceEntity(156U);
    msg.setDestination(3449U);
    msg.setDestinationEntity(235U);
    msg.value = 0.743501324815;

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
    msg.setTimeStamp(0.705649514379);
    msg.setSource(44749U);
    msg.setSourceEntity(111U);
    msg.setDestination(38395U);
    msg.setDestinationEntity(232U);
    msg.value = 0.0341018978553;

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
    msg.setTimeStamp(0.720824888135);
    msg.setSource(4557U);
    msg.setSourceEntity(28U);
    msg.setDestination(9381U);
    msg.setDestinationEntity(118U);
    msg.value = 0.689036716042;

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
    msg.setTimeStamp(0.787551718818);
    msg.setSource(56807U);
    msg.setSourceEntity(43U);
    msg.setDestination(30628U);
    msg.setDestinationEntity(152U);
    msg.value = 0.829588003758;

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
    msg.setTimeStamp(0.72937129475);
    msg.setSource(48438U);
    msg.setSourceEntity(56U);
    msg.setDestination(27546U);
    msg.setDestinationEntity(108U);
    msg.value = 0.731631640412;

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
    msg.setTimeStamp(0.681639014407);
    msg.setSource(43319U);
    msg.setSourceEntity(229U);
    msg.setDestination(60446U);
    msg.setDestinationEntity(133U);
    msg.path_ref = 2330894406U;
    msg.start_lat = 0.763591963941;
    msg.start_lon = 0.915734831275;
    msg.start_z = 0.93535447166;
    msg.start_z_units = 189U;
    msg.end_lat = 0.337372493887;
    msg.end_lon = 0.562379628759;
    msg.end_z = 0.144817376221;
    msg.end_z_units = 20U;
    msg.speed = 0.816246657933;
    msg.speed_units = 58U;
    msg.lradius = 0.987328680373;
    msg.flags = 23U;

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
    msg.setTimeStamp(0.0303020389002);
    msg.setSource(26655U);
    msg.setSourceEntity(57U);
    msg.setDestination(32992U);
    msg.setDestinationEntity(213U);
    msg.path_ref = 2524068268U;
    msg.start_lat = 0.984908558937;
    msg.start_lon = 0.822273977139;
    msg.start_z = 0.923214387439;
    msg.start_z_units = 248U;
    msg.end_lat = 0.923480825397;
    msg.end_lon = 0.822095000257;
    msg.end_z = 0.294963379144;
    msg.end_z_units = 19U;
    msg.speed = 0.739612280586;
    msg.speed_units = 108U;
    msg.lradius = 0.913340509268;
    msg.flags = 73U;

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
    msg.setTimeStamp(0.570028218607);
    msg.setSource(33424U);
    msg.setSourceEntity(54U);
    msg.setDestination(2047U);
    msg.setDestinationEntity(109U);
    msg.path_ref = 4144336861U;
    msg.start_lat = 0.833438103879;
    msg.start_lon = 0.335656407759;
    msg.start_z = 0.456834305455;
    msg.start_z_units = 20U;
    msg.end_lat = 0.0448076694532;
    msg.end_lon = 0.899986622114;
    msg.end_z = 0.961475456247;
    msg.end_z_units = 17U;
    msg.speed = 0.0283126649072;
    msg.speed_units = 143U;
    msg.lradius = 0.602100217372;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.813261744466);
    msg.setSource(26323U);
    msg.setSourceEntity(98U);
    msg.setDestination(13173U);
    msg.setDestinationEntity(107U);
    msg.x = 0.0264493916667;
    msg.y = 0.658201793096;
    msg.z = 0.611509174324;
    msg.k = 0.692119212653;
    msg.m = 0.58790940741;
    msg.n = 0.437157605376;
    msg.flags = 35U;

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
    msg.setTimeStamp(0.941851540566);
    msg.setSource(37393U);
    msg.setSourceEntity(197U);
    msg.setDestination(1129U);
    msg.setDestinationEntity(204U);
    msg.x = 0.591363446212;
    msg.y = 0.764685900798;
    msg.z = 0.70959535578;
    msg.k = 0.0787382143475;
    msg.m = 0.0671323472956;
    msg.n = 0.842527952846;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.984946056891);
    msg.setSource(24428U);
    msg.setSourceEntity(204U);
    msg.setDestination(45424U);
    msg.setDestinationEntity(90U);
    msg.x = 0.725569496214;
    msg.y = 0.810226002745;
    msg.z = 0.201041365015;
    msg.k = 0.616613241804;
    msg.m = 0.974422937889;
    msg.n = 0.736187287802;
    msg.flags = 139U;

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
    msg.setTimeStamp(0.995080439018);
    msg.setSource(36887U);
    msg.setSourceEntity(112U);
    msg.setDestination(33132U);
    msg.setDestinationEntity(104U);
    msg.value = 0.498252693446;

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
    msg.setTimeStamp(0.411039225515);
    msg.setSource(15669U);
    msg.setSourceEntity(34U);
    msg.setDestination(47097U);
    msg.setDestinationEntity(28U);
    msg.value = 0.218120167777;

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
    msg.setTimeStamp(0.865000380857);
    msg.setSource(10590U);
    msg.setSourceEntity(200U);
    msg.setDestination(2774U);
    msg.setDestinationEntity(36U);
    msg.value = 0.721179456101;

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
    msg.setTimeStamp(0.613629400066);
    msg.setSource(37115U);
    msg.setSourceEntity(167U);
    msg.setDestination(25686U);
    msg.setDestinationEntity(81U);
    msg.u = 0.759146518715;
    msg.v = 0.479250983697;
    msg.w = 0.542964930478;
    msg.p = 0.855320790572;
    msg.q = 0.951484266574;
    msg.r = 0.895684833824;
    msg.flags = 204U;

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
    msg.setTimeStamp(0.229044094875);
    msg.setSource(44923U);
    msg.setSourceEntity(14U);
    msg.setDestination(57059U);
    msg.setDestinationEntity(64U);
    msg.u = 0.0374483090255;
    msg.v = 0.488496311989;
    msg.w = 0.746329756828;
    msg.p = 0.767165054573;
    msg.q = 0.531440169714;
    msg.r = 0.268758194392;
    msg.flags = 216U;

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
    msg.setTimeStamp(0.906583977536);
    msg.setSource(43203U);
    msg.setSourceEntity(204U);
    msg.setDestination(47917U);
    msg.setDestinationEntity(51U);
    msg.u = 0.415616326277;
    msg.v = 0.38131505275;
    msg.w = 0.0808674404055;
    msg.p = 0.654650299527;
    msg.q = 0.322605166639;
    msg.r = 0.197102990013;
    msg.flags = 87U;

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
    msg.setTimeStamp(0.925811150834);
    msg.setSource(34509U);
    msg.setSourceEntity(20U);
    msg.setDestination(44556U);
    msg.setDestinationEntity(135U);
    msg.path_ref = 573432596U;
    msg.start_lat = 0.984040479253;
    msg.start_lon = 0.929101027479;
    msg.start_z = 0.410936541185;
    msg.start_z_units = 90U;
    msg.end_lat = 0.718448896003;
    msg.end_lon = 0.797421711621;
    msg.end_z = 0.333205524846;
    msg.end_z_units = 122U;
    msg.lradius = 0.918852251456;
    msg.flags = 224U;
    msg.x = 0.162184437931;
    msg.y = 0.712593784567;
    msg.z = 0.950659937825;
    msg.vx = 0.258244775015;
    msg.vy = 0.418948407028;
    msg.vz = 0.672984925024;
    msg.course_error = 0.876195717317;
    msg.eta = 32775U;

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
    msg.setTimeStamp(0.347250403777);
    msg.setSource(54125U);
    msg.setSourceEntity(128U);
    msg.setDestination(46056U);
    msg.setDestinationEntity(59U);
    msg.path_ref = 626025653U;
    msg.start_lat = 0.525465031612;
    msg.start_lon = 0.698870149563;
    msg.start_z = 0.0507151546466;
    msg.start_z_units = 252U;
    msg.end_lat = 0.110107867879;
    msg.end_lon = 0.715666512059;
    msg.end_z = 0.0784405263801;
    msg.end_z_units = 119U;
    msg.lradius = 0.725521085223;
    msg.flags = 12U;
    msg.x = 0.371479735419;
    msg.y = 0.841794167585;
    msg.z = 0.156448249629;
    msg.vx = 0.115777238626;
    msg.vy = 0.63851032021;
    msg.vz = 0.288402077138;
    msg.course_error = 0.0858719307161;
    msg.eta = 32046U;

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
    msg.setTimeStamp(0.0771468185769);
    msg.setSource(61063U);
    msg.setSourceEntity(142U);
    msg.setDestination(46998U);
    msg.setDestinationEntity(22U);
    msg.path_ref = 3146727992U;
    msg.start_lat = 0.414484728093;
    msg.start_lon = 0.269289886837;
    msg.start_z = 0.590774056915;
    msg.start_z_units = 55U;
    msg.end_lat = 0.527160082427;
    msg.end_lon = 0.540953935003;
    msg.end_z = 0.188774686851;
    msg.end_z_units = 42U;
    msg.lradius = 0.463241303628;
    msg.flags = 87U;
    msg.x = 0.61646607205;
    msg.y = 0.554608834283;
    msg.z = 0.673022992644;
    msg.vx = 0.77034984914;
    msg.vy = 0.127014521989;
    msg.vz = 0.576576525424;
    msg.course_error = 0.611659520949;
    msg.eta = 33241U;

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
    msg.setTimeStamp(0.359756742318);
    msg.setSource(59371U);
    msg.setSourceEntity(197U);
    msg.setDestination(30525U);
    msg.setDestinationEntity(122U);
    msg.k = 0.650264736146;
    msg.m = 0.320626291282;
    msg.n = 0.647984119952;

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
    msg.setTimeStamp(0.110966474687);
    msg.setSource(16027U);
    msg.setSourceEntity(203U);
    msg.setDestination(50988U);
    msg.setDestinationEntity(36U);
    msg.k = 0.262195657061;
    msg.m = 0.204852702525;
    msg.n = 0.992780890966;

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
    msg.setTimeStamp(0.528042348687);
    msg.setSource(23433U);
    msg.setSourceEntity(200U);
    msg.setDestination(30606U);
    msg.setDestinationEntity(36U);
    msg.k = 0.391967308428;
    msg.m = 0.999508960546;
    msg.n = 0.940373985165;

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
    msg.setTimeStamp(0.823786139062);
    msg.setSource(52782U);
    msg.setSourceEntity(20U);
    msg.setDestination(5913U);
    msg.setDestinationEntity(242U);
    msg.p = 0.760515780672;
    msg.i = 0.921540844555;
    msg.d = 0.919892644527;
    msg.a = 0.112822952144;

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
    msg.setTimeStamp(0.783033356777);
    msg.setSource(35046U);
    msg.setSourceEntity(121U);
    msg.setDestination(12609U);
    msg.setDestinationEntity(219U);
    msg.p = 0.445652150122;
    msg.i = 0.379663364937;
    msg.d = 0.72398043859;
    msg.a = 0.766333938129;

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
    msg.setTimeStamp(0.0918283494184);
    msg.setSource(38711U);
    msg.setSourceEntity(191U);
    msg.setDestination(1318U);
    msg.setDestinationEntity(159U);
    msg.p = 0.790495326841;
    msg.i = 0.216553404116;
    msg.d = 0.926882590303;
    msg.a = 0.834788438521;

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
    msg.setTimeStamp(0.26124902767);
    msg.setSource(59938U);
    msg.setSourceEntity(104U);
    msg.setDestination(29112U);
    msg.setDestinationEntity(250U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.483168403641);
    msg.setSource(22859U);
    msg.setSourceEntity(128U);
    msg.setDestination(51245U);
    msg.setDestinationEntity(54U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.908448388014);
    msg.setSource(13400U);
    msg.setSourceEntity(113U);
    msg.setDestination(1908U);
    msg.setDestinationEntity(254U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.540130564509);
    msg.setSource(17838U);
    msg.setSourceEntity(180U);
    msg.setDestination(18443U);
    msg.setDestinationEntity(39U);
    msg.timeout = 21250U;
    msg.lat = 0.0324495377803;
    msg.lon = 0.045586992331;
    msg.z = 0.156624736061;
    msg.z_units = 208U;
    msg.speed = 0.560047839166;
    msg.speed_units = 146U;
    msg.roll = 0.360972265076;
    msg.pitch = 0.45847209642;
    msg.yaw = 0.43027697675;
    msg.custom.assign("LORHPZIVBUKNHAASIOJHTXQJDZPSJYKHDMSBBLUNDJIFJCKCEHCMGGCXTWNWDVKIOLFQVLWXOIZFVFHWZEGDTKBKLYQCNXJFMWAVQXYQNSYRPPORPGWQBIZNATYYGMUPXCPGWIQLEROHYPEFANESWG");

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
    msg.setTimeStamp(0.757538980955);
    msg.setSource(47968U);
    msg.setSourceEntity(150U);
    msg.setDestination(44536U);
    msg.setDestinationEntity(182U);
    msg.timeout = 18887U;
    msg.lat = 0.687928059696;
    msg.lon = 0.584830246333;
    msg.z = 0.678476538648;
    msg.z_units = 63U;
    msg.speed = 0.69840850376;
    msg.speed_units = 168U;
    msg.roll = 0.644690867853;
    msg.pitch = 0.596523009186;
    msg.yaw = 0.875115650449;
    msg.custom.assign("LGAONMJKUZMIKCATKSBTBXWBJCBHKZSDZANSVWYRWDEIUUGWNVPUZZRFEGHUKSBWPAIHXLFQSSWTORJGZQFMLVLGTBAOOJMPSRNPJAQDFSQSJREMEKYGGXHAAYB");

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
    msg.setTimeStamp(0.572955825382);
    msg.setSource(33530U);
    msg.setSourceEntity(123U);
    msg.setDestination(19203U);
    msg.setDestinationEntity(206U);
    msg.timeout = 50588U;
    msg.lat = 0.0255687930042;
    msg.lon = 0.904330332272;
    msg.z = 0.143979978476;
    msg.z_units = 4U;
    msg.speed = 0.334823666297;
    msg.speed_units = 16U;
    msg.roll = 0.211933342231;
    msg.pitch = 0.663562937517;
    msg.yaw = 0.776483276689;
    msg.custom.assign("TAURQWALZBVYQZSSWZCZCBWROMRVNGPSUFTPFFDAPGLIPENSWRAIOMGYBKQOLOXYEMKTNIACQMAVUWLLZTDOVOFKNJHURGJ");

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
    msg.setTimeStamp(0.962237367867);
    msg.setSource(33995U);
    msg.setSourceEntity(204U);
    msg.setDestination(56021U);
    msg.setDestinationEntity(205U);
    msg.timeout = 60232U;
    msg.lat = 0.365137007889;
    msg.lon = 0.176574695816;
    msg.z = 0.0617496450255;
    msg.z_units = 92U;
    msg.speed = 0.594654757058;
    msg.speed_units = 238U;
    msg.duration = 38584U;
    msg.radius = 0.0133912213809;
    msg.flags = 168U;
    msg.custom.assign("IPOXRGZIMIHLSYAZBYOBGCTKXXRKACMMRGGEGDQMUKGPCKVCXIIUNJIJOASCHTOQMAOPLBYMHQTRFNQSQJI");

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
    msg.setTimeStamp(0.931991236187);
    msg.setSource(30737U);
    msg.setSourceEntity(192U);
    msg.setDestination(57447U);
    msg.setDestinationEntity(58U);
    msg.timeout = 15005U;
    msg.lat = 0.792544320749;
    msg.lon = 0.794362609928;
    msg.z = 0.0646232064442;
    msg.z_units = 87U;
    msg.speed = 0.23237480664;
    msg.speed_units = 102U;
    msg.duration = 24706U;
    msg.radius = 0.0103597647629;
    msg.flags = 59U;
    msg.custom.assign("RHKKBPUNEQEPYYNGPZODZHUXQZSMFHKAYGZRMSRKINDORQZMVLKFFRQZTLSBVPEOPBXBHUWSVEULJUMQPWBGUEWYVWKCHPISLSALRHPHNNHLPJMOEDTCBSMRYAPIJCTVCRQCDVAAIXWGSQCFWQAYXFAMNRMGTNGCLDUDEKYCJKGAOWGBVL");

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
    msg.setTimeStamp(0.341662175302);
    msg.setSource(34534U);
    msg.setSourceEntity(97U);
    msg.setDestination(57824U);
    msg.setDestinationEntity(248U);
    msg.timeout = 45174U;
    msg.lat = 0.79721843204;
    msg.lon = 0.894316981756;
    msg.z = 0.626870994067;
    msg.z_units = 76U;
    msg.speed = 0.920597071446;
    msg.speed_units = 166U;
    msg.duration = 18297U;
    msg.radius = 0.558690599903;
    msg.flags = 149U;
    msg.custom.assign("PCRLZGWZSEQFCYFKVHNBKPPKUHMSFZVTYSNGHHONRBPILXWHNWELDHZJSYTJVFYJYGTBMNIKYJQWUCSTCFGADDVIGREEOLANILXUUMDBQXCCOTWZPZUDHAETASZXBOYEPBBGWIQQROIYYDHJBWUOBVTKFUQEGALOXPQCGXPTFIGRMJEMTCZSAAOMFSAEIAVXVXYUMRNVRPD");

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
    msg.setTimeStamp(0.798415418007);
    msg.setSource(32865U);
    msg.setSourceEntity(235U);
    msg.setDestination(20360U);
    msg.setDestinationEntity(43U);
    msg.custom.assign("OTAEKHIAPJWJITEYPTZKHSDDZFRGAAFGYKZEGMFUYBDAFRPMFDUWAV");

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
    msg.setTimeStamp(0.270177122959);
    msg.setSource(20856U);
    msg.setSourceEntity(170U);
    msg.setDestination(41575U);
    msg.setDestinationEntity(81U);
    msg.custom.assign("CBBCVZPRHNFGIFWAAVEGSTYCKNWQFMHINVOSULIRBZUEQLTNDVYEMXDNJOQZLKXUIDHUBYOWFZGOOLJNAHILVUGSIQILBFOTXRLCWXCJHSADMSIZMBGYJEPDQXXYWIBDMGYAHZARZDSVTTYMJGOYBYSMJKMJJVPEWOQVWRPWNYPEVPAKQSGDCKOUDJFETXHFLHNNQUK");

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
    msg.setTimeStamp(0.0935538371907);
    msg.setSource(55620U);
    msg.setSourceEntity(242U);
    msg.setDestination(58290U);
    msg.setDestinationEntity(77U);
    msg.custom.assign("AXBYWUOONSUPYFGHWVHGGHQDC");

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
    msg.setTimeStamp(0.330959623234);
    msg.setSource(24181U);
    msg.setSourceEntity(102U);
    msg.setDestination(45904U);
    msg.setDestinationEntity(117U);
    msg.timeout = 63775U;
    msg.lat = 0.146825482184;
    msg.lon = 0.865020623292;
    msg.z = 0.507734991837;
    msg.z_units = 10U;
    msg.duration = 56800U;
    msg.speed = 0.301450860889;
    msg.speed_units = 91U;
    msg.type = 138U;
    msg.radius = 0.71464265972;
    msg.length = 0.565421283709;
    msg.bearing = 0.891626044725;
    msg.direction = 91U;
    msg.custom.assign("GHSOJQFEUSVUOEPNAJFHJIDQYCHYXGOQAXTCGVHICERPNAUFPSHONTNJOBVTWCYRTMCPYZTV");

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
    msg.setTimeStamp(0.476903189439);
    msg.setSource(37970U);
    msg.setSourceEntity(153U);
    msg.setDestination(22196U);
    msg.setDestinationEntity(33U);
    msg.timeout = 50209U;
    msg.lat = 0.828994248496;
    msg.lon = 0.280649891398;
    msg.z = 0.227770035751;
    msg.z_units = 195U;
    msg.duration = 44054U;
    msg.speed = 0.560685625546;
    msg.speed_units = 197U;
    msg.type = 221U;
    msg.radius = 0.110380240841;
    msg.length = 0.792811379413;
    msg.bearing = 0.452917414468;
    msg.direction = 206U;
    msg.custom.assign("KORPRFPUPZQXKLFQJGFKOKHZOAGFDBSULNXTSNMBDHRJUYEOHIDIZCJAVDDDBNMTQFQWMNTGTNFXYMXQZRSIHETMWUEPDABLMLLXVKFEUEIBWLCXLEHREAGHTIAQEIDQMUTRHOZNWWGYRPK");

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
    msg.setTimeStamp(0.546903315225);
    msg.setSource(45038U);
    msg.setSourceEntity(242U);
    msg.setDestination(20936U);
    msg.setDestinationEntity(29U);
    msg.timeout = 54464U;
    msg.lat = 0.191511384144;
    msg.lon = 0.55160091913;
    msg.z = 0.350848500166;
    msg.z_units = 241U;
    msg.duration = 20594U;
    msg.speed = 0.907786634107;
    msg.speed_units = 94U;
    msg.type = 131U;
    msg.radius = 0.49253813962;
    msg.length = 0.705864589503;
    msg.bearing = 0.430197351961;
    msg.direction = 40U;
    msg.custom.assign("KCBROMCXVOINJLURPPBWESXYEWPZQAHSZAGJCUYQUXWWSNYYFRRYUCRVQFZHFHBQIKCGDDOHQZZDBKWLGQOPTCDOIYZLEPDXGEGVUFMRTVJKTADTTSXSEUVFJKPNCLSOXJKYTTJDANRBLNRMGYNKAIIBUZQZ");

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
    msg.setTimeStamp(0.966959155602);
    msg.setSource(21973U);
    msg.setSourceEntity(174U);
    msg.setDestination(625U);
    msg.setDestinationEntity(232U);
    msg.duration = 27131U;
    msg.custom.assign("LTIXZPUKTFXACJTZEFUQYDOWSHFZJBTBIADCCXSSKPVTFHHFLJWZVEGXMXZYMIABGTLBNNVPMDRNCIKSXYEEEPDCABRBHNUYQLMIHCAWGGHKGGGPRUIEDPUTLBVWMFHXNYVWOPQQLIRVFWPMYKJDDASJETKRMREXLVYBQADMVQO");

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
    msg.setTimeStamp(0.594379345269);
    msg.setSource(17119U);
    msg.setSourceEntity(224U);
    msg.setDestination(36181U);
    msg.setDestinationEntity(242U);
    msg.duration = 58170U;
    msg.custom.assign("JYRIXMHUGNDQPFQODFBLPZYZRUTLIXYXEVMFAUJUYAWRZBUCUZMOAAZHJHFWGNYAZOPSAQGBPASFJOQVGBYERDRVJWKZQKKSFLOYOTVNGNCVKLGCGNQVNBIGTHTIQZYLUUWIHFSHSXLEPCVDPU");

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
    msg.setTimeStamp(0.976255733212);
    msg.setSource(9582U);
    msg.setSourceEntity(163U);
    msg.setDestination(23851U);
    msg.setDestinationEntity(210U);
    msg.duration = 48235U;
    msg.custom.assign("KENMHDEGJBAFBECOSWPPZAXKFMTDGRJPNBAJNUIYFQORPFIEVTOWZDBQOKEIPOHKOPCMTFQGPLNRKSAKNXTWZVNGGJKQZIHJXWSGUTZTWYGAFQHUCLYFDINXHOJLFBAWEVT");

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
    msg.setTimeStamp(0.260149646779);
    msg.setSource(55863U);
    msg.setSourceEntity(116U);
    msg.setDestination(30626U);
    msg.setDestinationEntity(247U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.777371619327;
    msg.control.set(tmp_msg_0);
    msg.duration = 54836U;
    msg.custom.assign("DFAAKNJKQFNUEBYTBRKYTHWOKEIWMVVKNBWGMZXTYDRD");

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
    msg.setTimeStamp(0.247732772963);
    msg.setSource(31609U);
    msg.setSourceEntity(64U);
    msg.setDestination(47747U);
    msg.setDestinationEntity(36U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.230569918027;
    tmp_msg_0.speed_units = 13U;
    msg.control.set(tmp_msg_0);
    msg.duration = 50303U;
    msg.custom.assign("KABDQQHFBXLUTXNOLRMSFETTFHDQIDGKPTXZSMJZNUODZYECGKLLLRPDVHIQVQMPHBELSWGSBXMGWVDCJUYHNLIHKCNVDFWLJRTVJKEDEYOBCUENJEWZWPXVSOQBADXDQOHFUABZGALXAKQLPXQMYGISSPBKWRFJZGTPCTMRTGYNEINPBJGINRPKWZAMRFNUUOZFVSFJEWSIWAYUONYVVHEQCCJMCCYMPVGIZKOTRO");

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
    msg.setTimeStamp(0.0151019884943);
    msg.setSource(61618U);
    msg.setSourceEntity(19U);
    msg.setDestination(18965U);
    msg.setDestinationEntity(75U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3844313141U;
    tmp_msg_0.start_lat = 0.0563277933883;
    tmp_msg_0.start_lon = 0.961307782484;
    tmp_msg_0.start_z = 0.298292642886;
    tmp_msg_0.start_z_units = 110U;
    tmp_msg_0.end_lat = 0.696631964626;
    tmp_msg_0.end_lon = 0.796006595205;
    tmp_msg_0.end_z = 0.180180409914;
    tmp_msg_0.end_z_units = 94U;
    tmp_msg_0.speed = 0.561702442235;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.lradius = 0.890296785424;
    tmp_msg_0.flags = 189U;
    msg.control.set(tmp_msg_0);
    msg.duration = 51744U;
    msg.custom.assign("XYCIEMPXOFHDENLJLXXOEPLF");

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
    msg.setTimeStamp(0.827472627684);
    msg.setSource(58996U);
    msg.setSourceEntity(139U);
    msg.setDestination(62966U);
    msg.setDestinationEntity(114U);
    msg.timeout = 30279U;
    msg.lat = 0.0264165573535;
    msg.lon = 0.625738914609;
    msg.z = 0.480585253982;
    msg.z_units = 39U;
    msg.speed = 0.928038637252;
    msg.speed_units = 115U;
    msg.bearing = 0.488178994066;
    msg.cross_angle = 0.324637924087;
    msg.width = 0.283467624433;
    msg.length = 0.311220390083;
    msg.hstep = 0.597382109321;
    msg.coff = 75U;
    msg.alternation = 251U;
    msg.flags = 93U;
    msg.custom.assign("OFEPCPGDEMZQKBFVNYFUIEUKVHCMMFWQWTDNANUCWVGKXYLECDYBVMNTZGNYFNMRQBPAUHJFVLFPTALOVDBTNAZXUEUSXMGXERNRRALBOGGLJLXOJDBPZCMSYQCOBWOAATCZGN");

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
    msg.setTimeStamp(0.269054256859);
    msg.setSource(21400U);
    msg.setSourceEntity(155U);
    msg.setDestination(1491U);
    msg.setDestinationEntity(171U);
    msg.timeout = 64802U;
    msg.lat = 0.00572348166378;
    msg.lon = 0.1084869288;
    msg.z = 0.385504080087;
    msg.z_units = 160U;
    msg.speed = 0.137789275804;
    msg.speed_units = 67U;
    msg.bearing = 0.683360683092;
    msg.cross_angle = 0.66841068047;
    msg.width = 0.827030681375;
    msg.length = 0.997078568478;
    msg.hstep = 0.689391804505;
    msg.coff = 69U;
    msg.alternation = 152U;
    msg.flags = 24U;
    msg.custom.assign("AADKSBVEELEEKOTYMQVUEYSPCBFNDUJRBOMMXFFUZWHSJLHTTPRIRGRVJYGMQIKFQGZGQOROFLTIXTXXGMKDPPLCUKHILUVIAHKHCZHXDECYNVPAXNVAVTRDRWRYNWFRYZCMGSKBDWHYNTBCBDRWSJFYDGUQWBOF");

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
    msg.setTimeStamp(0.141804254424);
    msg.setSource(38907U);
    msg.setSourceEntity(196U);
    msg.setDestination(57381U);
    msg.setDestinationEntity(120U);
    msg.timeout = 7581U;
    msg.lat = 0.748966643806;
    msg.lon = 0.245678746643;
    msg.z = 0.305821792652;
    msg.z_units = 28U;
    msg.speed = 0.47853297567;
    msg.speed_units = 5U;
    msg.bearing = 0.0373783047952;
    msg.cross_angle = 0.955153459051;
    msg.width = 0.490801933077;
    msg.length = 0.417808570443;
    msg.hstep = 0.894687153256;
    msg.coff = 198U;
    msg.alternation = 250U;
    msg.flags = 125U;
    msg.custom.assign("OXDXJGGVJASEXRBPUFZRDAECKTLVMRVFRECIDMMJUJFPPRVBOJSVHARSDZKIMDAHBANYLLYAXBLMSSWQIYJORCUVNMUPFLXCVEWKTQCDWFNSKXQUYKTXMUZTLYKZZUMHKPVNTMPXTNUCNWQPYJTVJAJRIS");

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
    msg.setTimeStamp(0.0199159834033);
    msg.setSource(13445U);
    msg.setSourceEntity(133U);
    msg.setDestination(42206U);
    msg.setDestinationEntity(95U);
    msg.timeout = 3760U;
    msg.lat = 0.430688850298;
    msg.lon = 0.490665206999;
    msg.z = 0.885009030164;
    msg.z_units = 34U;
    msg.speed = 0.582010446476;
    msg.speed_units = 55U;
    msg.custom.assign("NNREBRQFKNCVBUJFEVSOTVOODCBXKHODMASGCOYWBKEYUHWZSTLHFLEALMNNTUKXEEDOIKZVJTVMJYJTBRUWCQMOPPPCAFSYRYMWMVLJNAFLEPYRQESSRGHZJCXPHHAQLQWCVGWLJYTYNNJXDLABGZUXZHFMUQIGPWDWQESCBWFDISGVGKAAOIF");

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
    msg.setTimeStamp(0.176931321247);
    msg.setSource(14293U);
    msg.setSourceEntity(198U);
    msg.setDestination(18420U);
    msg.setDestinationEntity(2U);
    msg.timeout = 46273U;
    msg.lat = 0.903852166827;
    msg.lon = 0.267726135186;
    msg.z = 0.874074851345;
    msg.z_units = 20U;
    msg.speed = 0.0705646443336;
    msg.speed_units = 54U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.211439312299;
    tmp_msg_0.y = 0.735724204072;
    tmp_msg_0.z = 0.915081856048;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FNJUJPWLIOOHZUVNZPYOZRAWYAZIFXDEGRKSYXTGMQTRHSBKUZMJUJLNHPMUTEWSCSFKQIXMBRLICJVTFRDFHJQAZZHZBMEQNDMSDQOSYDRTMBKMHODUDAAEXSFHMCSQNZRXVJIIXF");

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
    msg.setTimeStamp(0.128393168875);
    msg.setSource(62770U);
    msg.setSourceEntity(200U);
    msg.setDestination(35498U);
    msg.setDestinationEntity(2U);
    msg.timeout = 38083U;
    msg.lat = 0.171415687492;
    msg.lon = 0.703972396949;
    msg.z = 0.492739818109;
    msg.z_units = 66U;
    msg.speed = 0.159663958599;
    msg.speed_units = 4U;
    msg.custom.assign("KTYKOTCRFNLOGPYUMIFDQDHHLRTBNVJSSQJUEACPUKMFBSUWBYMRGWILMVZRGITOMANKGIWVEMJJWESIVGSHJHKFFCYHEGYGGOFAVOBNNLSAPKEUQPCBXBZBNXTCEZZTDMQNLXXDTAVLSJREBMHUPIBCVDCU");

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
    msg.setTimeStamp(0.552092584872);
    msg.setSource(40958U);
    msg.setSourceEntity(55U);
    msg.setDestination(47573U);
    msg.setDestinationEntity(13U);
    msg.x = 0.751724323894;
    msg.y = 0.202634863302;
    msg.z = 0.62522397317;

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
    msg.setTimeStamp(0.232176905685);
    msg.setSource(44121U);
    msg.setSourceEntity(227U);
    msg.setDestination(45773U);
    msg.setDestinationEntity(252U);
    msg.x = 0.703922709528;
    msg.y = 0.701045716598;
    msg.z = 0.88329159275;

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
    msg.setTimeStamp(0.121921429435);
    msg.setSource(8270U);
    msg.setSourceEntity(124U);
    msg.setDestination(19806U);
    msg.setDestinationEntity(127U);
    msg.x = 0.250118470962;
    msg.y = 0.995976146441;
    msg.z = 0.336692404134;

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
    msg.setTimeStamp(0.9751730522);
    msg.setSource(51308U);
    msg.setSourceEntity(130U);
    msg.setDestination(35209U);
    msg.setDestinationEntity(223U);
    msg.timeout = 38116U;
    msg.lat = 0.944524161294;
    msg.lon = 0.393186260394;
    msg.z = 0.145246337895;
    msg.z_units = 63U;
    msg.amplitude = 0.735285323307;
    msg.pitch = 0.330344665444;
    msg.speed = 0.735871799067;
    msg.speed_units = 168U;
    msg.custom.assign("JVJEYUNFXMUZYGJELNOIWTUKJGMCDYWINRPQOBIIYSHFONQZTRDOTAWILDRMMDKBHMIGKFCVTPRYFTXKRCLQYPOTCHWZSRQVXVDSATGKXJZHVBNJJMWBBKWFUJYUBCUZXVSUHELBEARXQJOIQHDKAMTZEAOLIRKNJUGAMDNXNIBQFSYKFLYQDPHFEWPP");

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
    msg.setTimeStamp(0.697492637142);
    msg.setSource(63474U);
    msg.setSourceEntity(239U);
    msg.setDestination(15366U);
    msg.setDestinationEntity(55U);
    msg.timeout = 15005U;
    msg.lat = 0.773523913791;
    msg.lon = 0.694418358747;
    msg.z = 0.242006457478;
    msg.z_units = 77U;
    msg.amplitude = 0.628849653062;
    msg.pitch = 0.193486665758;
    msg.speed = 0.395700595901;
    msg.speed_units = 32U;
    msg.custom.assign("SFRHGNOBURMZWNPKFYAEDZIXIQKTCZHZCAOEZEQTASPCQDDSJIQNPISTGVL");

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
    msg.setTimeStamp(0.945522470046);
    msg.setSource(37622U);
    msg.setSourceEntity(70U);
    msg.setDestination(37018U);
    msg.setDestinationEntity(95U);
    msg.timeout = 38728U;
    msg.lat = 0.316831792453;
    msg.lon = 0.60970806962;
    msg.z = 0.886974809766;
    msg.z_units = 107U;
    msg.amplitude = 0.644444503913;
    msg.pitch = 0.363865072766;
    msg.speed = 0.461591655417;
    msg.speed_units = 209U;
    msg.custom.assign("LGBJZAUAQPBZSJYAGOHJNJKLADTPDKWCYUHFRCJPMHGTHRTGNIUNIAMWSLUZWNDKQEYPQCZYQLHAQTVISVFWDKRXEMPIXADLYTLTEBVRSGOJWXUFOCKVV");

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
    msg.setTimeStamp(0.153956964402);
    msg.setSource(48325U);
    msg.setSourceEntity(6U);
    msg.setDestination(49559U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.419650953935);
    msg.setSource(31794U);
    msg.setSourceEntity(108U);
    msg.setDestination(25806U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.014061896548);
    msg.setSource(8391U);
    msg.setSourceEntity(217U);
    msg.setDestination(25047U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.0521719128124);
    msg.setSource(53215U);
    msg.setSourceEntity(121U);
    msg.setDestination(42310U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.0716485204721;
    msg.lon = 0.11434911267;
    msg.z = 0.396965354352;
    msg.z_units = 198U;
    msg.radius = 0.922407700677;
    msg.duration = 31287U;
    msg.speed = 0.953392196983;
    msg.speed_units = 90U;
    msg.custom.assign("GDHYKWJRLONYUZNXQLKCIATJQESRZTMDPQPVCXUBANJJZXQBYIEWLVXQYBMWZYOTOPZZIORGISDMFNOCGOHJVAKCPLCKEMUIHZRQZQOMOFOUIPJAKSEBHMFFCPQZ");

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
    msg.setTimeStamp(0.826330968521);
    msg.setSource(27366U);
    msg.setSourceEntity(181U);
    msg.setDestination(48194U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.994980921462;
    msg.lon = 0.255363815519;
    msg.z = 0.710749460976;
    msg.z_units = 86U;
    msg.radius = 0.530167913943;
    msg.duration = 24233U;
    msg.speed = 0.924839573687;
    msg.speed_units = 91U;
    msg.custom.assign("KALEXTSZUYLIZLSHKBLQIGWYUBGVKTDDJDCHMRMMFTZPDUJNJACPVGZTXWCOLQDJFECFRIUPGIQNILSVOFTFHEAKYURPIXDZZBASEYXLAGGRPZRJANOCIRAUGKOFSKGMXGQSZPQSWWUSPKJFRWXMOCNMLEPDDDMEWTKMZPWEHTCNIVKENWYMVSV");

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
    msg.setTimeStamp(0.112496000046);
    msg.setSource(22931U);
    msg.setSourceEntity(28U);
    msg.setDestination(32970U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.0941834060703;
    msg.lon = 0.709922807915;
    msg.z = 0.18845700926;
    msg.z_units = 56U;
    msg.radius = 0.0073089554505;
    msg.duration = 23348U;
    msg.speed = 0.884747320162;
    msg.speed_units = 154U;
    msg.custom.assign("EGPJXTDESRXGQZHMJFOMKJLEZSPTAZVXNEHOPSXONHWERVNWDNAQBAOGUVNVYKVUMLNXWZCCTFYJJOIYDCKUATLCRKZBIDSFVBBRKCQIMWLNIITICQSEQYVAGJJLSTJUGHRPIFJPXPRBKFRXEBCGXTWQVFMAMMFJRDUHBUVGDUOWHKDAMMFYZNTIILBTLYENSUIXBSO");

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
    msg.setTimeStamp(0.295008625389);
    msg.setSource(43645U);
    msg.setSourceEntity(75U);
    msg.setDestination(38769U);
    msg.setDestinationEntity(142U);
    msg.timeout = 21483U;
    msg.flags = 241U;
    msg.lat = 0.431200085371;
    msg.lon = 0.875479761563;
    msg.start_z = 0.671444228312;
    msg.start_z_units = 231U;
    msg.end_z = 0.954757434236;
    msg.end_z_units = 59U;
    msg.radius = 0.71943782316;
    msg.speed = 0.831524822573;
    msg.speed_units = 10U;
    msg.custom.assign("FNDSCABRGZSIZRVMKYAPPYGFXYTEEPCVOIDVTUXLONMUFJWWQKOJ");

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
    msg.setTimeStamp(0.299102716109);
    msg.setSource(54688U);
    msg.setSourceEntity(171U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(223U);
    msg.timeout = 21287U;
    msg.flags = 127U;
    msg.lat = 0.180305591388;
    msg.lon = 0.319057319948;
    msg.start_z = 0.566687666935;
    msg.start_z_units = 149U;
    msg.end_z = 0.24233582017;
    msg.end_z_units = 204U;
    msg.radius = 0.363134221049;
    msg.speed = 0.0835616173257;
    msg.speed_units = 205U;
    msg.custom.assign("WXVYWUYZTDJPQRNGWXLGOJBFDHTBTKCMJSWIGPABSUETDGFTDLLHVON");

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
    msg.setTimeStamp(0.941223606277);
    msg.setSource(50220U);
    msg.setSourceEntity(193U);
    msg.setDestination(11097U);
    msg.setDestinationEntity(123U);
    msg.timeout = 31232U;
    msg.flags = 163U;
    msg.lat = 0.797706018432;
    msg.lon = 0.975410496765;
    msg.start_z = 0.141590481456;
    msg.start_z_units = 138U;
    msg.end_z = 0.694682997573;
    msg.end_z_units = 1U;
    msg.radius = 0.779983893285;
    msg.speed = 0.21148302425;
    msg.speed_units = 150U;
    msg.custom.assign("HCZRPNPUNPKGLMYVRHQPEKQYCVWDXSXHNIBTBENFMTXHXAFQRSIJLSY");

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
    msg.setTimeStamp(0.582406813708);
    msg.setSource(55253U);
    msg.setSourceEntity(211U);
    msg.setDestination(51347U);
    msg.setDestinationEntity(223U);
    msg.timeout = 5308U;
    msg.lat = 0.274999364571;
    msg.lon = 0.0988411362511;
    msg.z = 0.502216008972;
    msg.z_units = 75U;
    msg.speed = 0.280475022164;
    msg.speed_units = 246U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0639747234198;
    tmp_msg_0.y = 0.395248941072;
    tmp_msg_0.z = 0.879770958469;
    tmp_msg_0.t = 0.324764032435;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LPHWFPCLHBRKXEXSWAHSBQYMLOZFKAUARYMNRKMYVRGTKKHUIRICKOTJCVCGQUMTZYFQDEZODHTUHVIFQRNVYCNRCBSWAAJZZSQYEJIKWVMAVFPDSETY");

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
    msg.setTimeStamp(0.567434644433);
    msg.setSource(33692U);
    msg.setSourceEntity(177U);
    msg.setDestination(42265U);
    msg.setDestinationEntity(62U);
    msg.timeout = 26599U;
    msg.lat = 0.460410818641;
    msg.lon = 0.294969022527;
    msg.z = 0.865979119913;
    msg.z_units = 211U;
    msg.speed = 0.933895759785;
    msg.speed_units = 225U;
    msg.custom.assign("HFBKBWFJPOOKHROAUAXZVTXKDSSWODNKDCYVXPTATVERMTJHWLELTYXMYUMWJHVCBYIPYHMRQELRKFRDLDQGNQWLCHOAEUQGZP");

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
    msg.setTimeStamp(0.56579798431);
    msg.setSource(6417U);
    msg.setSourceEntity(57U);
    msg.setDestination(62840U);
    msg.setDestinationEntity(3U);
    msg.timeout = 40651U;
    msg.lat = 0.117213468496;
    msg.lon = 0.471025177227;
    msg.z = 0.703821150368;
    msg.z_units = 100U;
    msg.speed = 0.675985898281;
    msg.speed_units = 33U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0622512526658;
    tmp_msg_0.y = 0.120107998238;
    tmp_msg_0.z = 0.93239264272;
    tmp_msg_0.t = 0.793306335722;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HCKEFGVLTXVNCOYBBSWUWDNTHYYOCWOWFTXBDGFPENYLHTITPKKAZLPEJPANIDGHGAQMBWPDKRISEUCWZJRTAADHNZBGTZROSYYYIXUZNG");

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
    msg.setTimeStamp(0.380629953564);
    msg.setSource(56970U);
    msg.setSourceEntity(77U);
    msg.setDestination(677U);
    msg.setDestinationEntity(191U);
    msg.x = 0.730283838028;
    msg.y = 0.896184775245;
    msg.z = 0.445608345691;
    msg.t = 0.171029588643;

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
    msg.setTimeStamp(0.209411237042);
    msg.setSource(18134U);
    msg.setSourceEntity(231U);
    msg.setDestination(13770U);
    msg.setDestinationEntity(4U);
    msg.x = 0.417536578789;
    msg.y = 0.370076805511;
    msg.z = 0.342256041853;
    msg.t = 0.24748575097;

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
    msg.setTimeStamp(0.521889397013);
    msg.setSource(62567U);
    msg.setSourceEntity(94U);
    msg.setDestination(23199U);
    msg.setDestinationEntity(39U);
    msg.x = 0.637629025116;
    msg.y = 0.697069317495;
    msg.z = 0.279959641162;
    msg.t = 0.0153029251997;

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
    msg.setTimeStamp(0.827199844013);
    msg.setSource(39389U);
    msg.setSourceEntity(244U);
    msg.setDestination(52550U);
    msg.setDestinationEntity(85U);
    msg.timeout = 37333U;
    msg.name.assign("FSYUFNZWZBGGBZWQFCNBCORZOTWSUAGMWDNBQXHMRYHVGBXMRJKRAYMPJLAVOIEYKOCVYDOFUBAMMECHCSYPLUELVWKQJSOODICNTMTEPEIFZMQLDQUDHQJCHWEYGIDRVIGBJBVUIENPLWXZPXPIOSKPTKNRDAXXYWNUTSCXSGLICTZFRAKEHIJQALVSXQAQBJLPHTP");
    msg.custom.assign("UIDEQPHKZSJLAVNXJHTGANHCGXKYILYSRWTJYCZBQDZUIFBTUBKGNHZLBFWYWISANMEJLZBXSDZEEAIRECPKZLCQGWIUYQGFOVYSUFAKXDXHKAMIWOYXAQCYWRATRPUDS");

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
    msg.setTimeStamp(0.719332161961);
    msg.setSource(60095U);
    msg.setSourceEntity(130U);
    msg.setDestination(62513U);
    msg.setDestinationEntity(177U);
    msg.timeout = 26954U;
    msg.name.assign("KWFQKILFPRFJMDTCKNCBVUHFFHUILYWYSGFGEBYHBJDYSNYIWZDIVBX");
    msg.custom.assign("QZEUJYRVRVUMGJQYPLKWRAAFJLHSYZPHJISMCUTCAHHRPAQXFLBAJIDYBOTKRCTDIOKNGWCMPDHLFUBGNMUATYMPDMVJERZEWBZXQSUUTYJE");

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
    msg.setTimeStamp(0.805956888632);
    msg.setSource(8708U);
    msg.setSourceEntity(100U);
    msg.setDestination(30788U);
    msg.setDestinationEntity(193U);
    msg.timeout = 7638U;
    msg.name.assign("KGGOKDRQJBAEZCJBTWVSKUXTGHTVZYCCMSVODMKHECGIPVTABYFQZGSNWFKIDEBOROXMFUQXQNADSTRXANDPOFMIFIOOZXBLVPHMACIIAMRWJUXOFNYAMUVUFYHZWSZUZRQJYHCEWDBPNAGIMWBUKFTLSJITXCKPPUQSHEZLTSDPVMPHWENILYQHYTCQ");
    msg.custom.assign("ECFWGCJSMBDIKKPWYYTLFCTAAGZHLAQDFY");

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
    msg.setTimeStamp(0.882858718948);
    msg.setSource(65393U);
    msg.setSourceEntity(35U);
    msg.setDestination(31657U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.735470646568;
    msg.lon = 0.848082163964;
    msg.z = 0.845225667942;
    msg.z_units = 41U;
    msg.speed = 0.442702557884;
    msg.speed_units = 87U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.973171042311;
    tmp_msg_0.y = 0.531827389784;
    tmp_msg_0.z = 0.814199176875;
    tmp_msg_0.t = 0.234542641112;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 64229U;
    tmp_msg_1.off_x = 0.97027163357;
    tmp_msg_1.off_y = 0.600345852138;
    tmp_msg_1.off_z = 0.581399663905;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.66140296167;
    msg.custom.assign("JFLKMTUDTAYKINBKKIXOTOHAAYONGWLFYOYITYPPPIEDSAQHQMUPMQUFCLXNJASEIYNQNGPLXKOMGZFQDGDGTFWBSBCAHCVUBFCMDDTKZSOSJPZWEIEBYPCVRZOIBMDND");

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
    msg.setTimeStamp(0.48253005155);
    msg.setSource(34199U);
    msg.setSourceEntity(9U);
    msg.setDestination(42546U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.312891775456;
    msg.lon = 0.306792850868;
    msg.z = 0.101050106161;
    msg.z_units = 186U;
    msg.speed = 0.796442325149;
    msg.speed_units = 88U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.923794562065;
    tmp_msg_0.y = 0.860548084855;
    tmp_msg_0.z = 0.574346846637;
    tmp_msg_0.t = 0.247113587632;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 48079U;
    tmp_msg_1.off_x = 0.650755194659;
    tmp_msg_1.off_y = 0.0716707943347;
    tmp_msg_1.off_z = 0.345343766406;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.754947165309;
    msg.custom.assign("LPKRWQWJBTRRQEBARBYIBTQUDRSJEQYJHWEKIVAFLVKAMKZEFYUUIVAOWUAGXCZXNQSSDCMYNLUCCNXOTOJAZAGVWKPHITJJPHOWFDXCIBIZOXMTOVXCBNAKMADFJPMG");

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
    msg.setTimeStamp(0.671655828214);
    msg.setSource(42799U);
    msg.setSourceEntity(111U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.870221898327;
    msg.lon = 0.502697138459;
    msg.z = 0.205860521272;
    msg.z_units = 118U;
    msg.speed = 0.734227117717;
    msg.speed_units = 201U;
    msg.start_time = 0.0403561294566;
    msg.custom.assign("BVSNCJCWEUCCLHTLVOAOZIUIHQOJRTNUAKQLCVRMYGBBXWFAHEXPZWNYQCSSXTZSOBVUTHLLGOGZVLNTYPVTDDIHWDZGXPGHPPVMKKPAAINKOSWMFBHUUJFMPRJHRVVOWYMYWMWVXENQAURBJAEOLYXIRSQKHQEULWDJMPQGXNU");

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
    msg.setTimeStamp(0.826704557441);
    msg.setSource(60100U);
    msg.setSourceEntity(186U);
    msg.setDestination(11321U);
    msg.setDestinationEntity(5U);
    msg.vid = 3920U;
    msg.off_x = 0.315134881801;
    msg.off_y = 0.984644669778;
    msg.off_z = 0.0207527722736;

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
    msg.setTimeStamp(0.119525709764);
    msg.setSource(44947U);
    msg.setSourceEntity(32U);
    msg.setDestination(42164U);
    msg.setDestinationEntity(207U);
    msg.vid = 41630U;
    msg.off_x = 0.862911765058;
    msg.off_y = 0.601383790374;
    msg.off_z = 0.225152690517;

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
    msg.setTimeStamp(0.966304275787);
    msg.setSource(54835U);
    msg.setSourceEntity(209U);
    msg.setDestination(30043U);
    msg.setDestinationEntity(213U);
    msg.vid = 54371U;
    msg.off_x = 0.46719701195;
    msg.off_y = 0.188422671031;
    msg.off_z = 0.0299895707101;

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
    msg.setTimeStamp(0.685125932135);
    msg.setSource(43987U);
    msg.setSourceEntity(45U);
    msg.setDestination(57189U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.12639865607);
    msg.setSource(44114U);
    msg.setSourceEntity(73U);
    msg.setDestination(35622U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.70572107442);
    msg.setSource(11760U);
    msg.setSourceEntity(23U);
    msg.setDestination(12891U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.235788472348);
    msg.setSource(26334U);
    msg.setSourceEntity(141U);
    msg.setDestination(36136U);
    msg.setDestinationEntity(102U);
    msg.mid = 35059U;

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
    msg.setTimeStamp(0.25332173089);
    msg.setSource(20745U);
    msg.setSourceEntity(155U);
    msg.setDestination(27675U);
    msg.setDestinationEntity(99U);
    msg.mid = 64313U;

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
    msg.setTimeStamp(0.658568933833);
    msg.setSource(58442U);
    msg.setSourceEntity(13U);
    msg.setDestination(27598U);
    msg.setDestinationEntity(245U);
    msg.mid = 2159U;

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
    msg.setTimeStamp(0.801000608277);
    msg.setSource(58812U);
    msg.setSourceEntity(210U);
    msg.setDestination(34577U);
    msg.setDestinationEntity(235U);
    msg.state = 12U;
    msg.eta = 19208U;
    msg.info.assign("HFQCDSPFLBBUIOUUQCKDOMFCZLGHRXKAUFYXZKLJBVPSEVTNHWVUZJCPDCYGTNFSSKWSGWLGVBJSVMRPEMDAZWFS");

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
    msg.setTimeStamp(0.710825760457);
    msg.setSource(7512U);
    msg.setSourceEntity(191U);
    msg.setDestination(10616U);
    msg.setDestinationEntity(86U);
    msg.state = 83U;
    msg.eta = 47606U;
    msg.info.assign("STEPAUSGIULWLVLJHTSVQAZDVSWGQYVZATWAQPYREQAYZJYCKUBPKABPBZKDJGVLZHTYHEGSWUJCHMAEPECLMVFPZMOEISDFKINKQ");

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
    msg.setTimeStamp(0.598609581604);
    msg.setSource(62412U);
    msg.setSourceEntity(205U);
    msg.setDestination(23200U);
    msg.setDestinationEntity(125U);
    msg.state = 201U;
    msg.eta = 22248U;
    msg.info.assign("WYEJXVOCXAPLDSVWGUZFGIMKUKDLTDMHDVAHBANMOKQJKWDKSGKLJFZISZTUCTBIZLRBYNQWZLWEHMAQTKGOLHLECOGVFNPYOZUNQCZCYZYM");

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
    msg.setTimeStamp(0.959734905257);
    msg.setSource(64226U);
    msg.setSourceEntity(141U);
    msg.setDestination(7972U);
    msg.setDestinationEntity(84U);
    msg.system = 51043U;
    msg.duration = 62381U;
    msg.speed = 0.673731768128;
    msg.speed_units = 102U;
    msg.x = 0.226480056957;
    msg.y = 0.7809827487;
    msg.z = 0.994284580912;
    msg.z_units = 49U;

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
    msg.setTimeStamp(0.759888988683);
    msg.setSource(53683U);
    msg.setSourceEntity(13U);
    msg.setDestination(35889U);
    msg.setDestinationEntity(150U);
    msg.system = 13265U;
    msg.duration = 33724U;
    msg.speed = 0.180010125885;
    msg.speed_units = 91U;
    msg.x = 0.919197294701;
    msg.y = 0.730284537041;
    msg.z = 0.590900447902;
    msg.z_units = 108U;

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
    msg.setTimeStamp(0.214317545515);
    msg.setSource(51550U);
    msg.setSourceEntity(226U);
    msg.setDestination(57915U);
    msg.setDestinationEntity(193U);
    msg.system = 51892U;
    msg.duration = 39636U;
    msg.speed = 0.238866054046;
    msg.speed_units = 17U;
    msg.x = 0.977041453184;
    msg.y = 0.129612417112;
    msg.z = 0.752452929653;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.953973779985);
    msg.setSource(23983U);
    msg.setSourceEntity(132U);
    msg.setDestination(12964U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.20133741859;
    msg.lon = 0.8311870809;
    msg.speed = 0.658972417447;
    msg.speed_units = 173U;
    msg.duration = 3561U;
    msg.sys_a = 17642U;
    msg.sys_b = 37080U;
    msg.move_threshold = 0.318917764777;

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
    msg.setTimeStamp(0.0153146286968);
    msg.setSource(57658U);
    msg.setSourceEntity(128U);
    msg.setDestination(39062U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.525213998388;
    msg.lon = 0.00452548755008;
    msg.speed = 0.595707222389;
    msg.speed_units = 240U;
    msg.duration = 31060U;
    msg.sys_a = 4163U;
    msg.sys_b = 12129U;
    msg.move_threshold = 0.359782143972;

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
    msg.setTimeStamp(0.858627489247);
    msg.setSource(43795U);
    msg.setSourceEntity(147U);
    msg.setDestination(60124U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.67960390614;
    msg.lon = 0.901915685329;
    msg.speed = 0.389370014916;
    msg.speed_units = 115U;
    msg.duration = 20295U;
    msg.sys_a = 36562U;
    msg.sys_b = 42049U;
    msg.move_threshold = 0.481779773781;

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
    msg.setTimeStamp(0.347994189598);
    msg.setSource(43941U);
    msg.setSourceEntity(112U);
    msg.setDestination(53264U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.622692627069;
    msg.lon = 0.553512706397;
    msg.z = 0.0164801118828;
    msg.z_units = 115U;
    msg.speed = 0.443984845726;
    msg.speed_units = 238U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.38208616313;
    tmp_msg_0.lon = 0.86557362179;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XUCHHOYAVMQNVYSGTESQOIPZEITWDTGDTIVZATULKSKXZJAWFCWZMHFIADBZOGVYBGUEWNFCKOBSATNIVHUPJUWXSYBOMIPMZQWPPECENEXPJXHLHGNOKLQICEMBFILRDSIYBPPMNXZRUJHWNTWFFTJRQWUCQBFYUSKJ");

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
    msg.setTimeStamp(0.0598293368066);
    msg.setSource(47854U);
    msg.setSourceEntity(197U);
    msg.setDestination(62612U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.584916653197;
    msg.lon = 0.321474643053;
    msg.z = 0.865723812921;
    msg.z_units = 53U;
    msg.speed = 0.164437795255;
    msg.speed_units = 149U;
    msg.custom.assign("OSBGGKLEJAWLPRTHMKMXTEPAQGFMVTQJEYJFTAAGENXIRLJJCWGKDUBRLMOBDPKSYSBPLHLYAKIDCAGNFM");

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
    msg.setTimeStamp(0.809728833485);
    msg.setSource(9595U);
    msg.setSourceEntity(225U);
    msg.setDestination(48068U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.76744771425;
    msg.lon = 0.450249025451;
    msg.z = 0.264741032888;
    msg.z_units = 162U;
    msg.speed = 0.217419580118;
    msg.speed_units = 42U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0585325478144;
    tmp_msg_0.lon = 0.804149505629;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CYELMBLZXVBPUAQNBJDSQTLKALNUVWVLINQWZKXASRXEVDFK");

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
    msg.setTimeStamp(0.105014369484);
    msg.setSource(30629U);
    msg.setSourceEntity(64U);
    msg.setDestination(38936U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.985029713262;
    msg.lon = 0.0849816615527;

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
    msg.setTimeStamp(0.77976324756);
    msg.setSource(48935U);
    msg.setSourceEntity(103U);
    msg.setDestination(52583U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.43546541651;
    msg.lon = 0.430289456778;

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
    msg.setTimeStamp(0.876663204474);
    msg.setSource(6959U);
    msg.setSourceEntity(238U);
    msg.setDestination(20061U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.316180961117;
    msg.lon = 0.1985535036;

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
    msg.setTimeStamp(0.145507513427);
    msg.setSource(9119U);
    msg.setSourceEntity(152U);
    msg.setDestination(41753U);
    msg.setDestinationEntity(194U);
    msg.timeout = 10055U;
    msg.lat = 0.695356375416;
    msg.lon = 0.925174342381;
    msg.z = 0.608141578826;
    msg.z_units = 165U;
    msg.pitch = 0.0884814182903;
    msg.amplitude = 0.447789917301;
    msg.duration = 21505U;
    msg.speed = 0.192007825438;
    msg.speed_units = 206U;
    msg.radius = 0.217553552703;
    msg.direction = 103U;
    msg.custom.assign("UWSETQXWLRXQQRZZOSQWUOZGCFNCWHJJALEDVZXGSPEAQDYYUTRILMYGOBFGHEUHBSEUNZKGTDCKZTPIAASHOPIBYBPNJXTTDKFLRLISNIKNOSLIDBJEGVZHOFBPYPWZBRHXBJLCMTEHCKGXWMNTLOVCODJAMKJDIVIDLYMKMFYDVMSAWFKQYRIFDVLRWBQETCSUFJXHQXNXCKPRWKUMPTAZMJNGRQEVABIGPSOHAUXGOUJRCFYVVMP");

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
    msg.setTimeStamp(0.555768268561);
    msg.setSource(31696U);
    msg.setSourceEntity(28U);
    msg.setDestination(58665U);
    msg.setDestinationEntity(59U);
    msg.timeout = 218U;
    msg.lat = 0.856470121088;
    msg.lon = 0.434958136772;
    msg.z = 0.306272112062;
    msg.z_units = 126U;
    msg.pitch = 0.0264125628176;
    msg.amplitude = 0.487736407699;
    msg.duration = 44122U;
    msg.speed = 0.303065158997;
    msg.speed_units = 58U;
    msg.radius = 0.20078453606;
    msg.direction = 67U;
    msg.custom.assign("IKDYGTZEBMCJARTWKXCFVXDNYNXEUODOIPWQXYJZCOBGEWGMOHZIAJKKPVZCAEAXRUIMBLZZWVFINKJVLYFBHHPTOSMJDJKUTEKEWFHCGDPBWBHOQQYODDNZWPRLJBRLBLKRMLSVFIUUISBDQRUGCXVVTYNZAKNASYVICWDEALPNPA");

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
    msg.setTimeStamp(0.789291585735);
    msg.setSource(6307U);
    msg.setSourceEntity(232U);
    msg.setDestination(2928U);
    msg.setDestinationEntity(194U);
    msg.timeout = 40353U;
    msg.lat = 0.21846239574;
    msg.lon = 0.366807425674;
    msg.z = 0.418152362308;
    msg.z_units = 66U;
    msg.pitch = 0.0269431232842;
    msg.amplitude = 0.738135883361;
    msg.duration = 12107U;
    msg.speed = 0.985102478944;
    msg.speed_units = 29U;
    msg.radius = 0.894110290178;
    msg.direction = 31U;
    msg.custom.assign("QCKELSOTUDULQXSYZEKZBLMLLGGSGCEWCTKELYSMZRVPAGLMIQYCHTZFKBRTVFRINOYXVMUHBGMWRSAOWPWMQNJWTUBZCMAOIVCGKRRZNSPFZVJDOQHXWADDRATKNYBTBOONNUCNQXUQVOTDFCJTUKPEXLJEQSJVUDGHXLFIXZSIARGBMAATHMKBIJSKUOBOYFKXZ");

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
    msg.setTimeStamp(0.208633331986);
    msg.setSource(12404U);
    msg.setSourceEntity(106U);
    msg.setDestination(39838U);
    msg.setDestinationEntity(87U);
    msg.formation_name.assign("XCIIUBBFHZTMKTSPCCUTHOUWRRQZDNTHKEGPFYEZHTQLAENBHQDEOOCGDLISAYQLKYOMFMCNDYRMIVRTMFM");
    msg.reference_frame = 244U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5334U;
    tmp_msg_0.off_x = 0.30917261447;
    tmp_msg_0.off_y = 0.492478107573;
    tmp_msg_0.off_z = 0.339975476939;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JGNTPCWCTODTLLXXAFBZYMMEQLOQQSXFGUYSLGAGOC");

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
    msg.setTimeStamp(0.6977105339);
    msg.setSource(20889U);
    msg.setSourceEntity(30U);
    msg.setDestination(9159U);
    msg.setDestinationEntity(54U);
    msg.formation_name.assign("NDFYYRJWVJSZRDFBQJTCCCMTSHBYXXRXKMRXDYZSENTROPGOBNWSPUBWKDYKIFTDWHHRHNFMFQMDTLOVFQPWEBCLUASVWPQZCKJYIAGEIUXHMWJQAABJBLRXPNPJLJHEAHLUMMGDDYPSOZUNMAUWUOGITLIVKEIIBLWKUFNMLITAKZYZCILLOOIGROSUKEEASBGEVVTCVGCQQVPAVNZTMEKVGYQDRHCZ");
    msg.reference_frame = 252U;
    msg.custom.assign("RGNWQMEWESQQMCWGSUPNIHGSUFEBYMFOTRXLKOYUMEYYUTWERVMBOOAOTHVXIQEPKAVRJTBUKNNOXTPSAEVWAOQBBITFLWQXKHDWGNBIZUJQAZNYJZXOUNSVYDVZ");

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
    msg.setTimeStamp(0.811919556995);
    msg.setSource(42669U);
    msg.setSourceEntity(11U);
    msg.setDestination(62919U);
    msg.setDestinationEntity(189U);
    msg.formation_name.assign("GKAAYJCKVTOMQZQCRIMBNEAKSZKBFFCKIIMHWONXUWRPTMIBFNHJDEHAKEQQOP");
    msg.reference_frame = 83U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 57288U;
    tmp_msg_0.off_x = 0.00230204152305;
    tmp_msg_0.off_y = 0.638086141981;
    tmp_msg_0.off_z = 0.871466836524;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QBRFASIWTRLLEBNKQLJIXGZNAPMSSBVUOYDYCPZOPYKJSQXOCFFEZTIXYNLWHWHBWXYQWGCZWNASRTODRERSOTRUBXHAMOWTZAWCARSYFMUFWNDHBCPGMAIPUVBAFPXSRPODVPFXIZVMBZQEXICTJGDFQYHKCOV");

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
    msg.setTimeStamp(0.00295218882643);
    msg.setSource(3551U);
    msg.setSourceEntity(228U);
    msg.setDestination(5186U);
    msg.setDestinationEntity(62U);
    msg.group_name.assign("BGTOLTALEHYHVSYFLZMGPFHAYDSZMTAISYVTHRENPRVCJSXFH");
    msg.formation_name.assign("ROZFQPFCVSDCBOFFOKHMJSDGRQPQUOZAVAEXKIYNUZBMUZCAALISAFMCJJVNWDMSFSHP");
    msg.plan_id.assign("FMIAUGXQOYQFUNGZVDMPWRXMJWCZPGUKXYEMXIPIHHPMZDAZOBNKAUEUBKIHMUJMIWUNCQTKGSEPOHVFHLDHZSCFGOZCBFETRVECNQTATJSJXQKZZPNYDSUXWYIKCAODVAAIROFYTKMCYWVWXDDBVOSUPYSGRDTLCGLAXNSDI");
    msg.description.assign("FHVLOPHCSSGEPLAYFNEEDDLIQAYINFLGFWWDCIVJLIEYTVHXASUKEQEDROCLXCHXAYKKYDXDTWQBQTHMZNBCFXJPSOGZJTFGRBYBTCNYGKPPKNEAWPUNFGNWPAUYJUOQIKIUWKRKGLFVGMSMDBTABMCJWZFDQTIBBXPRMLDQKMRENZRZXIMGXLZLZCAHMDFCPUGXEIWNAZZUJHVMHOJXSOQUBHMHYTIUJNVTTOSOQYO");
    msg.leader_speed = 0.00773960603937;
    msg.leader_bank_lim = 0.397537702185;
    msg.pos_sim_err_lim = 0.617861315859;
    msg.pos_sim_err_wrn = 0.821890381318;
    msg.pos_sim_err_timeout = 18651U;
    msg.converg_max = 0.317885977312;
    msg.converg_timeout = 63427U;
    msg.comms_timeout = 34804U;
    msg.turb_lim = 0.111528908773;
    msg.custom.assign("OVGXTPMRUHYXHACMTSTBQRAAQRNKWHHKDMZITJYMJTVMBVGQJYKROGWFACEKQLUFLRGWWEALSUHLBKUNOTZOLKITISFXAXPZZRSAEBPTFOEQIHACJWCGVIVXTJVBYXMOMIFZMMOEVJVTSNIYZZDZQLPBIGDDDPLFY");

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
    msg.setTimeStamp(0.0962810044833);
    msg.setSource(56478U);
    msg.setSourceEntity(1U);
    msg.setDestination(41475U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("OSTUOKYZAQCVGJITSQDCTBPVSITCRFPMYXDFNWPKNSPRKKHXRZPHTQEECAFOQZXAVZQEHLLAYCJXQGDFVIHTWJBTMILZNBIFK");
    msg.formation_name.assign("ZQXRFGWRSXNCBPIEZBTSPUVGLHPXYJCLWLKDKWTLWPVHUSUEJZINOJMGHVZJRTUMFOVNMEBCFSKSAYOJXEQJANOQTYDQEHDDNUKRSUZBH");
    msg.plan_id.assign("RFNTGBNNLYEHPORGFEBVFHYPRWVBOKQCFTCTCHSSRWRTXJNEADQJWPRIVWDSHLYFJXEKQLXKYUZXAIOUMTSSJDUVAOHLRXJNMKCEPZDNHGQMTCNISIZCVACMWOKYIQODJWYPGRAOUBW");
    msg.description.assign("GFQAPZWUYLODLBVWQUTPFGIYVQWTAWCXCEHVTJZFOKWRABVDGJJGGNOJGPWYJJDHSTAUELUXEAYCDIPZNSSNDSFGVBNXSNPVUETEZSAYFIHIYIMVXSBQSTVPHMLBKMTQZTRDMIVLUJMSEBXOKWQAFXOKGDNOHUIMCKHJMLMWJCYNKUZAIIZWAYA");
    msg.leader_speed = 0.138373327092;
    msg.leader_bank_lim = 0.677703692563;
    msg.pos_sim_err_lim = 0.413776633061;
    msg.pos_sim_err_wrn = 0.95521962976;
    msg.pos_sim_err_timeout = 32216U;
    msg.converg_max = 0.171755453467;
    msg.converg_timeout = 49749U;
    msg.comms_timeout = 37384U;
    msg.turb_lim = 0.18377123189;
    msg.custom.assign("AXNZYCBDOGTFLMH");

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
    msg.setTimeStamp(0.00758843472538);
    msg.setSource(2871U);
    msg.setSourceEntity(232U);
    msg.setDestination(45510U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("DNZRQRYNDJWYJPOIMGZFICHQZVHKIJEABZLPXUBWMPKYXGUHYNOUTRPWBFRFRMVRADDVBFZKGWDHIJZGNEIXSUSFXXALCPCHZBYZAPGJCSTYBUTQLSOSFQHGNGWMOSRAIMMCTVCLBCQUDMIEAQLTWVDFSUTCV");
    msg.formation_name.assign("TZOVXJNEUXXDCITHKZXRTYKVKACVWNZWZIFPKVFQW");
    msg.plan_id.assign("WHKMVIWMYHVUVPADQSNFBDQONRTXCVXZSABUQLYIKJXLWECFFYZKQEBMOLEGBDLRZJCTAKMKRMBKCSHILTINUFCUIADDHIOJHMTQQRZBNVJVTOWESUWSJKOKZYQBPAHQDGFLGDGYPZNFLACIMHDYEXMPJBLEJWIYONCHNXIITVTESTPGCGOWRTNYYOWHDUAXRDXQGMVVEFNJPJXSARG");
    msg.description.assign("EWEAZZPBSURDKBEJKQTTTIWVVDCMOLMFWXBPETXRKQGVWKPGMOMYYGFLJRJNPUPGDVELVIQHOSLZFILHULMLMPJDIIWWUSXYSDZUBPFSRQWCAYJYSXAYTKOYPDKZBBYNOSQRQHFDEHAFQGNS");
    msg.leader_speed = 0.613695906568;
    msg.leader_bank_lim = 0.373646191944;
    msg.pos_sim_err_lim = 0.12047460268;
    msg.pos_sim_err_wrn = 0.357088965706;
    msg.pos_sim_err_timeout = 30519U;
    msg.converg_max = 0.42357403351;
    msg.converg_timeout = 10521U;
    msg.comms_timeout = 37732U;
    msg.turb_lim = 0.763828665198;
    msg.custom.assign("ZPWHIAKTCPRDTQGBUEDAEYEEHGTXHUKSMALUDVNMZKZPWSGKWTERNLLXAVCBYTLJOQJUWNGVMYGXBLPGKPWQXBIHIZZRH");

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
    msg.setTimeStamp(0.133193705723);
    msg.setSource(1187U);
    msg.setSourceEntity(93U);
    msg.setDestination(20065U);
    msg.setDestinationEntity(21U);
    msg.control_src = 60659U;
    msg.control_ent = 105U;
    msg.timeout = 0.999563936965;
    msg.loiter_radius = 0.810337721036;
    msg.altitude_interval = 0.199819917595;

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
    msg.setTimeStamp(0.82408959957);
    msg.setSource(8395U);
    msg.setSourceEntity(37U);
    msg.setDestination(9029U);
    msg.setDestinationEntity(210U);
    msg.control_src = 41136U;
    msg.control_ent = 142U;
    msg.timeout = 0.193855864493;
    msg.loiter_radius = 0.0931278100182;
    msg.altitude_interval = 0.401039666972;

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
    msg.setTimeStamp(0.871417709808);
    msg.setSource(29288U);
    msg.setSourceEntity(169U);
    msg.setDestination(32507U);
    msg.setDestinationEntity(131U);
    msg.control_src = 37957U;
    msg.control_ent = 218U;
    msg.timeout = 0.977562303566;
    msg.loiter_radius = 0.578560120537;
    msg.altitude_interval = 0.392842579314;

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
    msg.setTimeStamp(0.460037719921);
    msg.setSource(38493U);
    msg.setSourceEntity(0U);
    msg.setDestination(47581U);
    msg.setDestinationEntity(24U);
    msg.flags = 83U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.137149565346;
    tmp_msg_0.speed_units = 110U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.72691216932;
    tmp_msg_1.z_units = 167U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.338201423163;
    msg.lon = 0.369734564781;
    msg.radius = 0.876778745176;

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
    msg.setTimeStamp(0.455011438689);
    msg.setSource(45041U);
    msg.setSourceEntity(72U);
    msg.setDestination(47986U);
    msg.setDestinationEntity(30U);
    msg.flags = 232U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.264640922231;
    tmp_msg_0.speed_units = 10U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.243926381383;
    tmp_msg_1.z_units = 192U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0900230562427;
    msg.lon = 0.645379443602;
    msg.radius = 0.661842159121;

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
    msg.setTimeStamp(0.43907320062);
    msg.setSource(64609U);
    msg.setSourceEntity(194U);
    msg.setDestination(23633U);
    msg.setDestinationEntity(228U);
    msg.flags = 103U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.710179583599;
    tmp_msg_0.speed_units = 215U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.496136862058;
    tmp_msg_1.z_units = 11U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.568073879594;
    msg.lon = 0.733646557835;
    msg.radius = 0.201876762782;

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
    msg.setTimeStamp(0.173159455697);
    msg.setSource(19769U);
    msg.setSourceEntity(92U);
    msg.setDestination(18635U);
    msg.setDestinationEntity(9U);
    msg.control_src = 56050U;
    msg.control_ent = 145U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 122U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.590222846146;
    tmp_tmp_msg_0_0.speed_units = 217U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0201092355426;
    tmp_tmp_msg_0_1.z_units = 210U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.267051191578;
    tmp_msg_0.lon = 0.125010755505;
    tmp_msg_0.radius = 0.885969757549;
    msg.reference.set(tmp_msg_0);
    msg.state = 48U;
    msg.proximity = 15U;

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
    msg.setTimeStamp(0.543513920474);
    msg.setSource(30534U);
    msg.setSourceEntity(154U);
    msg.setDestination(33411U);
    msg.setDestinationEntity(187U);
    msg.control_src = 35485U;
    msg.control_ent = 203U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 87U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.474524512626;
    tmp_tmp_msg_0_0.speed_units = 165U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.47404925813;
    tmp_tmp_msg_0_1.z_units = 221U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.640652987569;
    tmp_msg_0.lon = 0.881406468054;
    tmp_msg_0.radius = 0.714250502204;
    msg.reference.set(tmp_msg_0);
    msg.state = 144U;
    msg.proximity = 104U;

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
    msg.setTimeStamp(0.723686510981);
    msg.setSource(29094U);
    msg.setSourceEntity(186U);
    msg.setDestination(44031U);
    msg.setDestinationEntity(35U);
    msg.control_src = 43059U;
    msg.control_ent = 43U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 190U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.654818127926;
    tmp_tmp_msg_0_0.speed_units = 93U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0213442589463;
    tmp_tmp_msg_0_1.z_units = 120U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.559711949378;
    tmp_msg_0.lon = 0.570944506154;
    tmp_msg_0.radius = 0.754961756615;
    msg.reference.set(tmp_msg_0);
    msg.state = 29U;
    msg.proximity = 5U;

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
    msg.setTimeStamp(0.505278271707);
    msg.setSource(61747U);
    msg.setSourceEntity(18U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(6U);
    msg.ax_cmd = 0.325161887154;
    msg.ay_cmd = 0.870412058302;
    msg.az_cmd = 0.53827491166;
    msg.ax_des = 0.456748310971;
    msg.ay_des = 0.987043594156;
    msg.az_des = 0.921595139798;
    msg.virt_err_x = 0.0605283739534;
    msg.virt_err_y = 0.929695556238;
    msg.virt_err_z = 0.180793462796;
    msg.surf_fdbk_x = 0.743668347032;
    msg.surf_fdbk_y = 0.365243798658;
    msg.surf_fdbk_z = 0.354610427741;
    msg.surf_unkn_x = 0.200941617103;
    msg.surf_unkn_y = 0.455375390053;
    msg.surf_unkn_z = 0.249054880257;
    msg.ss_x = 0.396620341937;
    msg.ss_y = 0.688385658291;
    msg.ss_z = 0.956134469392;

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
    msg.setTimeStamp(0.7094326045);
    msg.setSource(34083U);
    msg.setSourceEntity(248U);
    msg.setDestination(29740U);
    msg.setDestinationEntity(158U);
    msg.ax_cmd = 0.204550187757;
    msg.ay_cmd = 0.931864761578;
    msg.az_cmd = 0.71834323032;
    msg.ax_des = 0.907865221103;
    msg.ay_des = 0.0397139419857;
    msg.az_des = 0.554876694337;
    msg.virt_err_x = 0.383995955895;
    msg.virt_err_y = 0.939990312789;
    msg.virt_err_z = 0.347230245031;
    msg.surf_fdbk_x = 0.0501335780646;
    msg.surf_fdbk_y = 0.487047794008;
    msg.surf_fdbk_z = 0.505588137975;
    msg.surf_unkn_x = 0.316229282068;
    msg.surf_unkn_y = 0.304801568706;
    msg.surf_unkn_z = 0.676895125048;
    msg.ss_x = 0.269895921844;
    msg.ss_y = 0.257636536414;
    msg.ss_z = 0.753573123195;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("UMTHLVSBXHMXZSWRDTLIZDPCLFBNLIEPZPLKOSAQAWHSCIXSTBYBTPKTWMRKQXCCRQEUBACYDY");
    tmp_msg_0.dist = 0.0365606382554;
    tmp_msg_0.err = 0.0705219862917;
    tmp_msg_0.ctrl_imp = 0.437186148325;
    tmp_msg_0.rel_dir_x = 0.566822162225;
    tmp_msg_0.rel_dir_y = 0.544439865389;
    tmp_msg_0.rel_dir_z = 0.26095869925;
    tmp_msg_0.err_x = 0.187353825718;
    tmp_msg_0.err_y = 0.100773230639;
    tmp_msg_0.err_z = 0.826080167778;
    tmp_msg_0.rf_err_x = 0.573023025432;
    tmp_msg_0.rf_err_y = 0.0961602158619;
    tmp_msg_0.rf_err_z = 0.606354287846;
    tmp_msg_0.rf_err_vx = 0.703555466828;
    tmp_msg_0.rf_err_vy = 0.599621999972;
    tmp_msg_0.rf_err_vz = 0.76495091371;
    tmp_msg_0.ss_x = 0.642062191087;
    tmp_msg_0.ss_y = 0.477053936066;
    tmp_msg_0.ss_z = 0.759863164518;
    tmp_msg_0.virt_err_x = 0.655445320438;
    tmp_msg_0.virt_err_y = 0.0582452695257;
    tmp_msg_0.virt_err_z = 0.807191844374;
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
    msg.setTimeStamp(0.15530896398);
    msg.setSource(39967U);
    msg.setSourceEntity(249U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(218U);
    msg.ax_cmd = 0.381907220695;
    msg.ay_cmd = 0.937769660464;
    msg.az_cmd = 0.880146537454;
    msg.ax_des = 0.297002170965;
    msg.ay_des = 0.996862735711;
    msg.az_des = 0.00947827381843;
    msg.virt_err_x = 0.875400304812;
    msg.virt_err_y = 0.379303636725;
    msg.virt_err_z = 0.608870585124;
    msg.surf_fdbk_x = 0.99801073181;
    msg.surf_fdbk_y = 0.815362487686;
    msg.surf_fdbk_z = 0.274513028553;
    msg.surf_unkn_x = 0.95693666271;
    msg.surf_unkn_y = 0.733292137416;
    msg.surf_unkn_z = 0.59276358826;
    msg.ss_x = 0.52924469619;
    msg.ss_y = 0.763078591744;
    msg.ss_z = 0.566786196838;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YZLDWVAQKTKERFAGUJHZZTMIYERDHZDLROPCNSDXIWKUESSKVNBQWIPTSFBNQSNWPQRXLLFFMURSMAIRHEKHRPPEOWJXTVBNCKODYYGMMXCNGVSVAUTJSWITVPGMDEBEYHCHDOFPLZTFFTXZOMZYEEAQXQCMJNJJNAWQMAPXOKHJBDUEGURYLAMWZCSYLUBTOIBVHWHBAWFVKGXCHDKYQJKQFOAO");
    tmp_msg_0.dist = 0.402523087834;
    tmp_msg_0.err = 0.690774942767;
    tmp_msg_0.ctrl_imp = 0.261073615305;
    tmp_msg_0.rel_dir_x = 0.792606407198;
    tmp_msg_0.rel_dir_y = 0.792303166659;
    tmp_msg_0.rel_dir_z = 0.780255205626;
    tmp_msg_0.err_x = 0.56853392072;
    tmp_msg_0.err_y = 0.0971418722855;
    tmp_msg_0.err_z = 0.884785834665;
    tmp_msg_0.rf_err_x = 0.785281059753;
    tmp_msg_0.rf_err_y = 0.925324763723;
    tmp_msg_0.rf_err_z = 0.327927049704;
    tmp_msg_0.rf_err_vx = 0.849524998001;
    tmp_msg_0.rf_err_vy = 0.0559931669092;
    tmp_msg_0.rf_err_vz = 0.595533635692;
    tmp_msg_0.ss_x = 0.350420411197;
    tmp_msg_0.ss_y = 0.176959931707;
    tmp_msg_0.ss_z = 0.562767493346;
    tmp_msg_0.virt_err_x = 0.217779782792;
    tmp_msg_0.virt_err_y = 0.274434205316;
    tmp_msg_0.virt_err_z = 0.132039180768;
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
    msg.setTimeStamp(0.242009589446);
    msg.setSource(12167U);
    msg.setSourceEntity(130U);
    msg.setDestination(12866U);
    msg.setDestinationEntity(128U);
    msg.s_id.assign("FRHCTELLTGZMUJJPRPRXZCGJOTGYANRDMOIOAJPGPARFBCCSIHICQPAMYAKRZSFEKEISNZGE");
    msg.dist = 0.689110480928;
    msg.err = 0.448349693628;
    msg.ctrl_imp = 0.601394999877;
    msg.rel_dir_x = 0.304780217378;
    msg.rel_dir_y = 0.655153464979;
    msg.rel_dir_z = 0.931663589968;
    msg.err_x = 0.866270709517;
    msg.err_y = 0.855968053968;
    msg.err_z = 0.136533386583;
    msg.rf_err_x = 0.938498213137;
    msg.rf_err_y = 0.32470815039;
    msg.rf_err_z = 0.747685918967;
    msg.rf_err_vx = 0.177374758113;
    msg.rf_err_vy = 0.295359086505;
    msg.rf_err_vz = 0.530953075721;
    msg.ss_x = 0.22215256152;
    msg.ss_y = 0.6810531482;
    msg.ss_z = 0.14484182856;
    msg.virt_err_x = 0.346433219295;
    msg.virt_err_y = 0.594821259481;
    msg.virt_err_z = 0.363346305829;

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
    msg.setTimeStamp(0.761738471191);
    msg.setSource(62529U);
    msg.setSourceEntity(186U);
    msg.setDestination(33143U);
    msg.setDestinationEntity(136U);
    msg.s_id.assign("NGPPFDIAYLPQEYOGODADBICVLCGODKMTQEFJMOWTFKWNEIZKSRIYCCYEAUUXJFBNUJYTXZOMHGORHLWQTLLNTBYDSHTEQRRWQTXFKVWUXXOVGUPUKRJLAJZSFSIZODSBWBXJMEUEAQWTXURHFKJTGZWOYIRERNSCLIZZARRBSOFJNQVPXLDKNMYZYFHWCESHLBUMVYFQLVDEHJVHKXJ");
    msg.dist = 0.706317553248;
    msg.err = 0.9987943085;
    msg.ctrl_imp = 0.77310838468;
    msg.rel_dir_x = 0.587494874262;
    msg.rel_dir_y = 0.0335183675861;
    msg.rel_dir_z = 0.939758110397;
    msg.err_x = 0.70863910997;
    msg.err_y = 0.0270141500736;
    msg.err_z = 0.836583623209;
    msg.rf_err_x = 0.382753551655;
    msg.rf_err_y = 0.124516487334;
    msg.rf_err_z = 0.270748853915;
    msg.rf_err_vx = 0.254833794372;
    msg.rf_err_vy = 0.757131466577;
    msg.rf_err_vz = 0.078048572005;
    msg.ss_x = 0.0873518554479;
    msg.ss_y = 0.722604003774;
    msg.ss_z = 0.0680735343788;
    msg.virt_err_x = 0.414547265323;
    msg.virt_err_y = 0.300363877847;
    msg.virt_err_z = 0.683092748629;

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
    msg.setTimeStamp(0.5781954423);
    msg.setSource(28198U);
    msg.setSourceEntity(133U);
    msg.setDestination(31822U);
    msg.setDestinationEntity(123U);
    msg.s_id.assign("AOFJTJMHTHLVGI");
    msg.dist = 0.128253728922;
    msg.err = 0.386234331114;
    msg.ctrl_imp = 0.418106220024;
    msg.rel_dir_x = 0.689424664227;
    msg.rel_dir_y = 0.224774741977;
    msg.rel_dir_z = 0.959842996812;
    msg.err_x = 0.268206218301;
    msg.err_y = 0.519936289528;
    msg.err_z = 0.0709084651587;
    msg.rf_err_x = 0.168049989784;
    msg.rf_err_y = 0.149187789668;
    msg.rf_err_z = 0.160575966898;
    msg.rf_err_vx = 0.232668716446;
    msg.rf_err_vy = 0.406936390089;
    msg.rf_err_vz = 0.210761769034;
    msg.ss_x = 0.522252745374;
    msg.ss_y = 0.18189410654;
    msg.ss_z = 0.676272125718;
    msg.virt_err_x = 0.0376875723699;
    msg.virt_err_y = 0.784566096915;
    msg.virt_err_z = 0.641651015063;

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
    msg.setTimeStamp(0.428969331074);
    msg.setSource(31157U);
    msg.setSourceEntity(121U);
    msg.setDestination(10636U);
    msg.setDestinationEntity(61U);
    msg.timeout = 61596U;
    msg.rpm = 0.0501055641088;
    msg.direction = 248U;
    msg.custom.assign("FBNKIIIRYEDWOMEWBRPBZLDKCDQCSGAFOZVQLXVVERJNJCBVPJCQABNCWOSZOAYNEOSDLRXLGZBTCHVGRVZUYXEWQGGRKTMIPGGPOATDPNXFDZIJBQMFHUMMFDNATDPWUSAQVRLBPBAYMHNKOBAXUGIKPQZMHDHRJLLIVWPXKYAKEUTLYCHHU");

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
    msg.setTimeStamp(0.343883873033);
    msg.setSource(33168U);
    msg.setSourceEntity(177U);
    msg.setDestination(44357U);
    msg.setDestinationEntity(33U);
    msg.timeout = 15545U;
    msg.rpm = 0.325360540882;
    msg.direction = 231U;
    msg.custom.assign("CKKOVDDMAEFZEAQPIEKXQVHWJGGLGSBWCMNMNJOJYVHIENRILNEYHUKNYVHUNASXKQXOTXED");

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
    msg.setTimeStamp(0.959019780774);
    msg.setSource(9114U);
    msg.setSourceEntity(232U);
    msg.setDestination(50467U);
    msg.setDestinationEntity(176U);
    msg.timeout = 17086U;
    msg.rpm = 0.86339275543;
    msg.direction = 223U;
    msg.custom.assign("YYASOQGUBNARETWANLSBHHAQBVFFRYXCUINPTIVIPIOODKGMHHZOTWECXRSPDRIWOPNKQGNKYMREXLTSBQJHNCTCZXQOEOXQCIRKJUJBOEQIMWMCTFKUKUBSAGIYEPYFWERAJCRDSJVEUNFR");

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
    msg.setTimeStamp(0.450650496968);
    msg.setSource(14774U);
    msg.setSourceEntity(17U);
    msg.setDestination(8497U);
    msg.setDestinationEntity(28U);
    msg.formation_name.assign("JMCWZZGUSJFFDIAKIEUXQXDLJYIOXVZFABFHKONQTPLYKSEWIACSTBEQDVZUTOVWJIOLZZIMYFPSACHHLWHMZBUXXKWRRVXNCDMAKXNVEDECLQIZVGEZQNUAKPWPPLBVGPRDDMJAKYCWDTANTOTSRQJPBUGGAMJTOLAGCIOQDCCZMSOXUEYKORUNHIVRSKYIPTHGBTFBFSVHYEXGWYLUNBNWBQFFGFJEVRLYBJMJQRUHPXSMCWNDTLR");
    msg.type = 227U;
    msg.op = 196U;
    msg.group_name.assign("YPGBUBOXRTFGZGWQWWMNHJNJNDTBOAIEFAFBNEXALDRWZAOCOYZSMIHMUHPBSPUJNMGHZZEOZCGBMNHSKPTPRFNIAULFHF");
    msg.plan_id.assign("HHCGLXKSXISSVEJBDBVUUHRRZGSWIRMSFYTUYLKDCWNWZNJDCMGXPOEAMLHZENZPXITEAQMVMKKCNBEPMEFAUGFMPXTGXCTFSROZDVTZNIFYDQTTWDWCDIDAXTVSKUOQFVCPZFQNJRRGBBBKLQUUGVFCISPKJPAJXFYTCZRJQXPCVBBBJJWADHQHLRENYWNRSOEYEUNDIGLEOQGMOQILQOJASHHB");
    msg.description.assign("NENNXGIVEHRLGLXOBISBTAZTLJJVAMXQIDSEQOQXSPPYFBUDEFSTNFAGVTPYNFQYHISYETAQLUVEHZIWMKWWMAXHJGACR");
    msg.reference_frame = 113U;
    msg.leader_bank_lim = 0.410769158348;
    msg.leader_speed_min = 0.995814746701;
    msg.leader_speed_max = 0.643164505426;
    msg.leader_alt_min = 0.435046755355;
    msg.leader_alt_max = 0.551375522495;
    msg.pos_sim_err_lim = 0.912535596268;
    msg.pos_sim_err_wrn = 0.464686743495;
    msg.pos_sim_err_timeout = 62869U;
    msg.converg_max = 0.669512156228;
    msg.converg_timeout = 19141U;
    msg.comms_timeout = 23842U;
    msg.turb_lim = 0.223872978727;
    msg.custom.assign("GLMDHUZFHMEPBKPMLELA");

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
    msg.setTimeStamp(0.946900965281);
    msg.setSource(10067U);
    msg.setSourceEntity(169U);
    msg.setDestination(56732U);
    msg.setDestinationEntity(236U);
    msg.formation_name.assign("LRIUPUDRZDOQNVUTQMYBALYLGCXTDETZCPNNQIVRRHFXWEMLEZLSDBMWAFQYIYAUGPODJIDNBLIVCLXBZHNBKUAVUXAVAFSNSITGGXGCCAKMGF");
    msg.type = 194U;
    msg.op = 235U;
    msg.group_name.assign("PKWBWECUFVYMEOREVQGRXMQIMFTPXIIWKTPWXLSSQHCEURIYBKIVRVUWFSGPYF");
    msg.plan_id.assign("BWFCKXMJVGQPYAWHTHCGGUAZXMTKGIKUVUBDPMUDOQVLNGIWBSVIDHBMUPEXNZDSMICXOLDZSBAEBJBTTLNBWTBBWYVEPIJFLGAWIFNYCJUQAXJHXWDLFTMQSLPDRHNWYWSSLLZWZQYFVEFPRVXGGYAJVHQLAKFXJOSCUOZELHKKMRATVNENNFYMROMHTSMZXSKVHPYQAZXJTSFIKINQPORIUCA");
    msg.description.assign("EWPYSVGHGAACJYJHZFIRGFTRAKASCNMJJPGQWVHBOCI");
    msg.reference_frame = 195U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18551U;
    tmp_msg_0.off_x = 0.502853716311;
    tmp_msg_0.off_y = 0.255774897603;
    tmp_msg_0.off_z = 0.70963776163;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.317471509876;
    msg.leader_speed_min = 0.112697497946;
    msg.leader_speed_max = 0.334029450117;
    msg.leader_alt_min = 0.149626186012;
    msg.leader_alt_max = 0.450337666782;
    msg.pos_sim_err_lim = 0.427277832631;
    msg.pos_sim_err_wrn = 0.632605985331;
    msg.pos_sim_err_timeout = 28428U;
    msg.converg_max = 0.864214032155;
    msg.converg_timeout = 61708U;
    msg.comms_timeout = 53295U;
    msg.turb_lim = 0.34543211382;
    msg.custom.assign("OQEKFPFLIOFKAFVMFCESKXQYADXOZXPLWAAKQQAEAZATJUYDQYIELWJSLOWHAHTYZDOCNRDNDATZTMBFYFNWODXGJMHVCYWNXMCXSQVGIRNBJUDMNVSLFZCJIBHBYBPVTEHBIJCUURXZUZWBQHMCZPGJEKRTDYFOJSKOWPQIGBZMGWXICQUERWIDBE");

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
    msg.setTimeStamp(0.228602660028);
    msg.setSource(4791U);
    msg.setSourceEntity(194U);
    msg.setDestination(33595U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("MAWRBNYIOSXXBPUKGSBUDGKPJFLNVNZEDAMFVSHGJDGIOHBHZNCBMBKUZLCEZTAGDPLOQOKQWIVPELPDMZYZHWKYECCPDBSAWUPWAPAQJZZOOHQDIFKTCAALJEZCXFFRTDXCNGVVMQYKMLYRFVMTNTFRRQJUULYBJGHASNGJFJOMDITKKCHTHUKEYIQRSCRXSIEFSXIEONLRUWSPIWEQCOMRXVWXQVNHTSTVYRTMDBVHGJEWFWAUILXBY");
    msg.type = 6U;
    msg.op = 147U;
    msg.group_name.assign("MMZVPGQNFXGQUQNUFKOGICGXELDBXTOBNBZJMTLATVKIZPFMDOCPTOIRNAZCBULHC");
    msg.plan_id.assign("SMAJBCEHWCGAXPSEAWHFOMLZTLREDNNFBDFRFZDTRJAZPGBLEEUCXHVVDIUUCFJLBTIOKXMIEKKTFZYJPVTVSPKNPFXVIANMGJDSMYLAGQXAPDTCPVLYAHBIXGHFHUOKXEWWBRHSZW");
    msg.description.assign("NAYGMXXIKUGJWRPFDIPDMGHUWVEBISURZYKHCETHOTQDVQHJXPNOCNNPFCJFQBCJCAFQMNKEFRLCJPKLQVMLMBDNLVNRAFUBQNAXYMSTMBHSPRHOUOEQWBP");
    msg.reference_frame = 38U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33581U;
    tmp_msg_0.off_x = 0.000399943326466;
    tmp_msg_0.off_y = 0.215028916851;
    tmp_msg_0.off_z = 0.95524932739;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.70365904022;
    msg.leader_speed_min = 0.491297673134;
    msg.leader_speed_max = 0.942651480028;
    msg.leader_alt_min = 0.581691951066;
    msg.leader_alt_max = 0.504955081508;
    msg.pos_sim_err_lim = 0.862303675836;
    msg.pos_sim_err_wrn = 0.657460719227;
    msg.pos_sim_err_timeout = 51800U;
    msg.converg_max = 0.480308803263;
    msg.converg_timeout = 51714U;
    msg.comms_timeout = 1196U;
    msg.turb_lim = 0.548204453365;
    msg.custom.assign("KYFVINUBAQNARMPXX");

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
    msg.setTimeStamp(0.438789669632);
    msg.setSource(26727U);
    msg.setSourceEntity(164U);
    msg.setDestination(3111U);
    msg.setDestinationEntity(140U);
    msg.timeout = 538U;
    msg.lat = 0.557797055591;
    msg.lon = 0.189563425248;
    msg.z = 0.660681805153;
    msg.z_units = 213U;
    msg.speed = 0.287615460762;
    msg.speed_units = 69U;
    msg.custom.assign("BXZCAXYZUYWIELTVNTZJNBPIOJRNDKSPQOIHKUFIFXBSMENDIDRARCUKMXYLXAKPTORYBPJLDCSZVFRJWQWGHRFPTMIPEWYDAONQVLTOZATEYY");

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
    msg.setTimeStamp(0.706890933546);
    msg.setSource(18642U);
    msg.setSourceEntity(209U);
    msg.setDestination(10102U);
    msg.setDestinationEntity(200U);
    msg.timeout = 32519U;
    msg.lat = 0.781606419043;
    msg.lon = 0.156853921443;
    msg.z = 0.765921829013;
    msg.z_units = 238U;
    msg.speed = 0.744212239497;
    msg.speed_units = 247U;
    msg.custom.assign("HMTLBNTDVTAEYNYWIWKFIQGKQHCUMGLAVWCZHUFTVGWPUMPWYBIVBTXGYQJRSPARIZKFFBBJNOBMHSBRKWOOFDWEFNDRDGAXVZTEMRBKVXJINXMEFFJWIUDNUKVQCYEXMALIOVGPJZDJXVOGNXRTNCZXTQJXEQEQSKGPHPIIJAYOASHHPKAUYLCZCMSVAZRAHHLCTRSPJEZXBWESLEDKRUQOOULMLRTQUODZNFOFUPQSCSBNPYDIW");

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
    msg.setTimeStamp(0.937581289215);
    msg.setSource(45732U);
    msg.setSourceEntity(236U);
    msg.setDestination(47852U);
    msg.setDestinationEntity(118U);
    msg.timeout = 64197U;
    msg.lat = 0.507167278375;
    msg.lon = 0.223479973086;
    msg.z = 0.184209984179;
    msg.z_units = 207U;
    msg.speed = 0.668422131441;
    msg.speed_units = 71U;
    msg.custom.assign("TJLPZRNBJOCABAZXBPWLAGDHCWASVEOESYJSSIMKDISZHMFWPIXONGNOAYHTYKBRLGCYMHMVLKRKBPANNSQACZIWBGTDZCYQHYQOLBUOGMRIVHIVPUNBUPJFYIWFMTFUNMFTTFJXLVCKEOGTAJFQDUJIDE");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.0960512182386);
    msg.setSource(61091U);
    msg.setSourceEntity(251U);
    msg.setDestination(63560U);
    msg.setDestinationEntity(37U);
    msg.op_mode = 115U;
    msg.error_count = 21U;
    msg.error_ents.assign("BGLFEFBFWPRQTEHDYXJKZNWLIS");
    msg.maneuver_type = 45319U;
    msg.maneuver_stime = 0.59482764924;
    msg.maneuver_eta = 20285U;
    msg.control_loops = 3582788030U;
    msg.flags = 229U;
    msg.last_error.assign("EVEQCWZTJVBFYPPGLVJBRVUHFCREHFGHTWWKTLHJOGFKNSCSADWN");
    msg.last_error_time = 0.371300909672;

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
    msg.setTimeStamp(0.930788241311);
    msg.setSource(41127U);
    msg.setSourceEntity(189U);
    msg.setDestination(37621U);
    msg.setDestinationEntity(85U);
    msg.op_mode = 6U;
    msg.error_count = 4U;
    msg.error_ents.assign("WECUNPNCDMEPVYYERONGCXFAAIHJROZWMHIFHRBMCVFEUIKPYBPLPSNWTUBFWJLSBXYGAGGZGQAQOKYFXHZAVJUJHTLSWDFCLYMDRTSXPZCXJVUTKYZLBQPITOSVDUCEOTKJIOHQMHLMXDZSPYHWIFDGAZJLBDXWSQTZCMBOVKOOQJRJEKEWCGMNZNRQWIAFIXNYUDVAVNIVQNLWCSGGSYRGXKRPLHQBMEDTZJIS");
    msg.maneuver_type = 3055U;
    msg.maneuver_stime = 0.761045070089;
    msg.maneuver_eta = 34055U;
    msg.control_loops = 1101036799U;
    msg.flags = 109U;
    msg.last_error.assign("UOSZRRHKBOVZVYQUPAOGFEFJHAPXUOQUYJQUWNZJCPLHDMXFBIYUYFEKGZTIMTTWCUNTRRTTLVEJOMSNEPHEDGEIVJHMQFNCOTLXKDCHXZAPIZXLDXHGJIKVNCCGYDAFZAGQYWVWMOJRXXGGFDQYOPY");
    msg.last_error_time = 0.104271475469;

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
    msg.setTimeStamp(0.822670885421);
    msg.setSource(33054U);
    msg.setSourceEntity(116U);
    msg.setDestination(44009U);
    msg.setDestinationEntity(35U);
    msg.op_mode = 82U;
    msg.error_count = 182U;
    msg.error_ents.assign("NHTUSGWYCOGQGFNTWXIPJLCLWGAFJDADHDJTYBOZJZUBVYTIXOKZKOOMVUAFNJGRAFKKEGIWZENMBMMYKSEQGSMPDQAWFDILXUQOPEMPCDRQMTVTGGVRUMXFWITSYHZVMGZJYXXEQVDUIROASBXPWILSLNZZIDXUJNCRQKIJKBESNPSCXWABDVYETHYYBANLKWDUZHACSK");
    msg.maneuver_type = 56460U;
    msg.maneuver_stime = 0.106271081939;
    msg.maneuver_eta = 18962U;
    msg.control_loops = 1853889740U;
    msg.flags = 223U;
    msg.last_error.assign("WLWFTQDINIMQXJEMPREHWSJDIAEZFPKZKVWTQCYTWSYKUZJYUVWRVPQMPCIBOLHMVXEJREZFHXNXZKYIATGZKBMYVBFKVORZOCSADHFLJGGYYWHCAXNIFIDSIEXUBSGWWUFGZQUNKRJQQUTHYPSOAAMTSTVTEQLXXNWUBHLDSBDCXNUJAOGKGZLPKRULOICGPRBOJQPRSDMBNEAODULCFSHCVIPGORDNJVHFLZJFCAYXOB");
    msg.last_error_time = 0.181643769112;

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
    msg.setTimeStamp(0.612608248675);
    msg.setSource(2072U);
    msg.setSourceEntity(93U);
    msg.setDestination(19762U);
    msg.setDestinationEntity(190U);
    msg.type = 159U;
    msg.request_id = 16311U;
    msg.command = 231U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 26937U;
    tmp_msg_0.custom.assign("ZUTWLEDKVLFCRCHXBTWHIPIULLZSYVNBUVXQLPPQOPAMNYHULXYAJDJDDXZCLXIRGWRFENLRZZIEUUMYKUZCBJCUZPTGBGHTBOMTWFPKURGJCPWCQWQRUODOTAGISOOFEQNNSXFPBDMOKABVQETQNAWVEYRYGTSMCHMGAYBJBIWMPODNHWEOEVVSKFJVIHKNRKCGSXTXXKCKAKZWFNVSDAIQE");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40932U;
    msg.info.assign("LJGSCKDPISVCVJIUZKJEWXSIBRCQSOJCYFZRHPEQPNKZZTCGWIXLCGMSPVRJAWHNKUWUJGVQASBUHRGKYQQYOILBRDNWHSRSPKNZXQLFYDQVGGPTLBQZWVHEOGAOWDNDKZAHHVEBXTINEDUCMLAFOKIXWXTFAXOAAOSIURYCMNMEVLZNWBKXCRDMXMPTMLVYUTYAEFNBILEOQKHFAUMDTTCSPBFFEEHQTULBFGYJVHYDJI");

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
    msg.setTimeStamp(0.91815937309);
    msg.setSource(20684U);
    msg.setSourceEntity(130U);
    msg.setDestination(13470U);
    msg.setDestinationEntity(230U);
    msg.type = 234U;
    msg.request_id = 10335U;
    msg.command = 168U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 61173U;
    tmp_msg_0.lat = 0.741627619735;
    tmp_msg_0.lon = 0.0497617778778;
    tmp_msg_0.z = 0.827131068226;
    tmp_msg_0.z_units = 32U;
    tmp_msg_0.amplitude = 0.135088877448;
    tmp_msg_0.pitch = 0.250251049373;
    tmp_msg_0.speed = 0.565980395966;
    tmp_msg_0.speed_units = 117U;
    tmp_msg_0.custom.assign("INBWYEIGQHQKTALJPUSVTZKCSIMVDXJNVNDCCKTULOJIDZLATAPKOYNZSOQQYDKCVUBXIVWGJPLIPJIVXFKWGXDZZFYSSRUSNVR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23726U;
    msg.info.assign("NBQNABLQLJJWXCDQWCBQEFDUTTLGKIZBASZQAETHFVGZXFXCQNICKQWBOIXFOWHMIYTFYTFUROSVOZXLVMMUYIIMEQPUKURM");

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
    msg.setTimeStamp(0.816919815009);
    msg.setSource(8039U);
    msg.setSourceEntity(228U);
    msg.setDestination(16143U);
    msg.setDestinationEntity(209U);
    msg.type = 85U;
    msg.request_id = 39731U;
    msg.command = 34U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 28314U;
    tmp_msg_0.lat = 0.0273813814895;
    tmp_msg_0.lon = 0.264768025656;
    tmp_msg_0.z = 0.618747043323;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.speed = 0.299891124081;
    tmp_msg_0.speed_units = 203U;
    tmp_msg_0.custom.assign("TRYQWURNFBFGCHBUXFNNWRFIBNQGOVQKNPUZBYWFREKVOGSXDNXDMWXVPKTCZZFGRTCBVAWVXMMPBQFFBREUZXAJYDHRTQEHSFHSLQQULHOESNJIULLAGOGZMXWVHWYIL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8614U;
    msg.info.assign("XGEKLIQXAFDXQPYYR");

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
    msg.setTimeStamp(0.495194154481);
    msg.setSource(8629U);
    msg.setSourceEntity(222U);
    msg.setDestination(33172U);
    msg.setDestinationEntity(37U);
    msg.command = 163U;
    msg.entities.assign("LFCCHBYUJIWOZVLSXTSPZJFNMZLHVNPTIQXDDGNVHSNJUKZZJNLKHYMBRDMFVQVMHQWLUYYCDTNMOEIIQGNNQJTIADPADITAGFFCSEKWXYLGLABDVVKXXUWADLWWVNCUMJTCKEIB");

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
    msg.setTimeStamp(0.00347555209518);
    msg.setSource(17070U);
    msg.setSourceEntity(147U);
    msg.setDestination(13910U);
    msg.setDestinationEntity(16U);
    msg.command = 69U;
    msg.entities.assign("NYKFGOTOMXPDPGIBRHTAFEGJROLNEHCQGDMUWXULURLJNQYVLZMFZEMXVLQTIXUXRBOBLAUVBKVKJWYWMPOXIBHUAZWWICBADVFSHVJSKZQFFBCVJQJAMBFRMBTAEZUDQSZSPAIRNFKQRRKGYAXQHZITHOXHJPZYTLPNG");

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
    msg.setTimeStamp(0.248530022187);
    msg.setSource(25181U);
    msg.setSourceEntity(122U);
    msg.setDestination(101U);
    msg.setDestinationEntity(170U);
    msg.command = 219U;
    msg.entities.assign("SQFXWRODBSVMZCCTQMLUPIVUOALXDGKCKCFTWJGQABLUPEGJDEFUGQAZMDKRUIBYNFJSVBDWVRSQEVY");

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
    msg.setTimeStamp(0.304182993166);
    msg.setSource(5693U);
    msg.setSourceEntity(173U);
    msg.setDestination(56687U);
    msg.setDestinationEntity(99U);
    msg.mcount = 54U;
    msg.mnames.assign("ABAEXATKGBPVHUXTCHVVKACGRWAYPDRNSDJCQJVYQZOGWJIEHJYXOFNYDHQBZVUQXWSSFLLUKMHWIQDRWOAUEINNRQYILMDWSIBXKEINLZKLFFEGCQMDLMCNWJNCWTOBMEUXPDAZTJMENAB");
    msg.ecount = 99U;
    msg.enames.assign("OPDCTLPCZYUIWQXXDCSZVTLGJETBUMOTIXAQWYMLZBPCYFGVYHQWTNVIRYCBMYYRLVMLSHSUJVXNHYMTBZGIXLFQLRVQMLU");
    msg.ccount = 83U;
    msg.cnames.assign("JAQFGKIFEMYQOBNUFMYDBTLRUWZCMCAMGAVVUCWBEPTURBSRZMQTJCVBWIHOXEMJZSYTIPGYXJPHUYKGVUSZXJIOCGKGIPTPYOFQLMROP");
    msg.last_error.assign("NCDSGPSZXPZHUJHSFHROLEGVIBQGGVRJCWCOLKAQCMBEMBPMLWREYKFFAMHNBNZSKETZKOJMYLKGFFCORBBCNXDYGNLARMDZZOINGORBUKXOWXVAXJIEUBXWQUYKIWBYSJZRQEVSHEPOZMPWUIFVQGJOLYSKVOWIJJCQAZSATXUTDDAHVC");
    msg.last_error_time = 0.758442525021;

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
    msg.setTimeStamp(0.13699753582);
    msg.setSource(42519U);
    msg.setSourceEntity(132U);
    msg.setDestination(12020U);
    msg.setDestinationEntity(140U);
    msg.mcount = 53U;
    msg.mnames.assign("VHKQYUUTHIGWFFTDDGHSEDMVQJVQTQZZYHOMSAXPLYXRERJPRPPYXBQYDFNTGWCSTFNXIKLJFCNJHNLKUGPSCGJWKWMPJMQLWBGROXBEDEAOMSKAUKIIP");
    msg.ecount = 95U;
    msg.enames.assign("UKGRQYDBWTNOGOHTNWPYQKIJPYJQHERUGCIYPZTBBVUVSICWGDVZSVATGUMXHBEBAMMHVIWQNLJLXJPWYDJKHJLSSNVLCNWUUOOJMANCPINRXEITANQRHKDEGCSMCWKSGQBTOOTOZSIQFQQZSY");
    msg.ccount = 226U;
    msg.cnames.assign("CTLSVCYKLMFOUYLSFBAZMRQYUSWPGXWVANRRXXHQOMRMKCOBEFTBEJCYOQHAPPDWJJGLCDZTXXTDHFLRVQSCZFIDEBTZHNJKZELOKVRRUPJMZNQTEXJUHWWVMRUWYZXEIVYWBKWAPUFLUFKHSAOOAORPJIVLQYZMKZNSJAKIDKUWMYZGLNIPYPFNRGGG");
    msg.last_error.assign("ECOMGNEJLZDUPUWSFAVQDGAWKWNXZQDGMTDKZTHZLLQXJEACPCNYVODJBLUPNOMZWPRCUMYKBPKRCREDLPFVTNBHRYEBYTXMAZXSFVLHTINMMKEUJBXBHXGIALNRQRXCFJGBEUTHIRGSAFFSWEAJQSFZESNIGOD");
    msg.last_error_time = 0.134100348213;

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
    msg.setTimeStamp(0.95526560144);
    msg.setSource(25632U);
    msg.setSourceEntity(36U);
    msg.setDestination(18315U);
    msg.setDestinationEntity(35U);
    msg.mcount = 50U;
    msg.mnames.assign("KWVVEMFIZHDVAVBWGEPHGUQALGLHSWAHM");
    msg.ecount = 151U;
    msg.enames.assign("TCKUJINONBDQUVOPKCLQZSYXDEMXVHWCWUEZIDBELFDDXSJTNQYLNSZWSQMRQHJIPAYPECEGJBACJQONTRQHFPGGWIGUSEVJQKXBMSFXDUGIGR");
    msg.ccount = 252U;
    msg.cnames.assign("IAKZGZIHWPLUZNSSTDMJOBQPTUEHBSJOMLNVFXGOCADFKRGZTMYTEQYOLXMCSHPRAYJLYWHOUCQBRBPWYBPSFXRTIAYLANDOIMKDXNKBMFSQHBHQPMZVOJSBLIEIQEWTJWRLNIIFJZEQJNQNUFDWGDSCVOFWCCXCAURDRUNKWDNQEXXPEXFKLXLTMGXUFWTZHBTPKRTUVGDGFQPYZPSEYEVYKNHVVSECJAGRCVLYKUAGMABHUCZJRKJHDV");
    msg.last_error.assign("XMBOSDJZSSBLUAWYWEPDIFKNSOOACQYGAYBEUFCKLBWZNSXVNSAAWCWTMCTGIFFVVQKREZLEUTQGHTKYSPLWYB");
    msg.last_error_time = 0.539794389775;

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
    msg.setTimeStamp(0.959428286151);
    msg.setSource(9983U);
    msg.setSourceEntity(98U);
    msg.setDestination(23311U);
    msg.setDestinationEntity(190U);
    msg.mask = 181U;
    msg.max_depth = 0.806030793518;
    msg.min_altitude = 0.866748310679;
    msg.max_altitude = 0.593247234814;
    msg.min_speed = 0.301238658906;
    msg.max_speed = 0.967500153721;
    msg.max_vrate = 0.89900489563;
    msg.lat = 0.452522842182;
    msg.lon = 0.588185815886;
    msg.orientation = 0.651660271726;
    msg.width = 0.105057945588;
    msg.length = 0.943912897119;

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
    msg.setTimeStamp(0.866140120589);
    msg.setSource(44709U);
    msg.setSourceEntity(62U);
    msg.setDestination(44009U);
    msg.setDestinationEntity(173U);
    msg.mask = 51U;
    msg.max_depth = 0.509593029407;
    msg.min_altitude = 0.367539679024;
    msg.max_altitude = 0.70062501953;
    msg.min_speed = 0.27779933271;
    msg.max_speed = 0.35469579942;
    msg.max_vrate = 0.831400329649;
    msg.lat = 0.0777560485506;
    msg.lon = 0.282001156586;
    msg.orientation = 0.487153602433;
    msg.width = 0.0466623756033;
    msg.length = 0.806241145667;

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
    msg.setTimeStamp(0.485092035921);
    msg.setSource(21771U);
    msg.setSourceEntity(176U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(165U);
    msg.mask = 124U;
    msg.max_depth = 0.593250265549;
    msg.min_altitude = 0.472231361586;
    msg.max_altitude = 0.975829667228;
    msg.min_speed = 0.482988619864;
    msg.max_speed = 0.838349907525;
    msg.max_vrate = 0.460394151066;
    msg.lat = 0.318025967365;
    msg.lon = 0.10100095172;
    msg.orientation = 0.966510344401;
    msg.width = 0.363911253774;
    msg.length = 0.494030043539;

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
    msg.setTimeStamp(0.767011015805);
    msg.setSource(55939U);
    msg.setSourceEntity(190U);
    msg.setDestination(25619U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.840009388072);
    msg.setSource(13785U);
    msg.setSourceEntity(162U);
    msg.setDestination(38903U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.899580000929);
    msg.setSource(56859U);
    msg.setSourceEntity(9U);
    msg.setDestination(11594U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.750055030554);
    msg.setSource(19249U);
    msg.setSourceEntity(114U);
    msg.setDestination(62999U);
    msg.setDestinationEntity(209U);
    msg.duration = 39194U;

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
    msg.setTimeStamp(0.455510910644);
    msg.setSource(52332U);
    msg.setSourceEntity(215U);
    msg.setDestination(48420U);
    msg.setDestinationEntity(22U);
    msg.duration = 56181U;

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
    msg.setTimeStamp(0.673958933785);
    msg.setSource(5833U);
    msg.setSourceEntity(59U);
    msg.setDestination(2810U);
    msg.setDestinationEntity(157U);
    msg.duration = 25225U;

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
    msg.setTimeStamp(0.932142629973);
    msg.setSource(42359U);
    msg.setSourceEntity(64U);
    msg.setDestination(28325U);
    msg.setDestinationEntity(145U);
    msg.enable = 70U;
    msg.mask = 344573314U;
    msg.scope_ref = 433793275U;

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
    msg.setTimeStamp(0.46756801574);
    msg.setSource(54896U);
    msg.setSourceEntity(229U);
    msg.setDestination(53883U);
    msg.setDestinationEntity(55U);
    msg.enable = 106U;
    msg.mask = 901398894U;
    msg.scope_ref = 921895400U;

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
    msg.setTimeStamp(0.442576611172);
    msg.setSource(34496U);
    msg.setSourceEntity(46U);
    msg.setDestination(14911U);
    msg.setDestinationEntity(246U);
    msg.enable = 109U;
    msg.mask = 1264673136U;
    msg.scope_ref = 3572303172U;

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
    msg.setTimeStamp(0.368938699366);
    msg.setSource(9352U);
    msg.setSourceEntity(10U);
    msg.setDestination(17867U);
    msg.setDestinationEntity(95U);
    msg.medium = 222U;

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
    msg.setTimeStamp(0.605211866858);
    msg.setSource(19504U);
    msg.setSourceEntity(168U);
    msg.setDestination(54069U);
    msg.setDestinationEntity(203U);
    msg.medium = 115U;

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
    msg.setTimeStamp(0.936306186382);
    msg.setSource(54551U);
    msg.setSourceEntity(238U);
    msg.setDestination(52368U);
    msg.setDestinationEntity(18U);
    msg.medium = 10U;

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
    msg.setTimeStamp(0.707390179415);
    msg.setSource(53597U);
    msg.setSourceEntity(191U);
    msg.setDestination(42409U);
    msg.setDestinationEntity(231U);
    msg.value = 0.755200947491;
    msg.type = 38U;

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
    msg.setTimeStamp(0.110174881653);
    msg.setSource(28305U);
    msg.setSourceEntity(234U);
    msg.setDestination(32726U);
    msg.setDestinationEntity(93U);
    msg.value = 0.522907357445;
    msg.type = 159U;

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
    msg.setTimeStamp(0.0816016310616);
    msg.setSource(28284U);
    msg.setSourceEntity(99U);
    msg.setDestination(57564U);
    msg.setDestinationEntity(218U);
    msg.value = 0.4825656433;
    msg.type = 220U;

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
    msg.setTimeStamp(0.0130751136829);
    msg.setSource(45077U);
    msg.setSourceEntity(44U);
    msg.setDestination(3678U);
    msg.setDestinationEntity(202U);
    msg.possimerr = 0.422846972265;
    msg.converg = 0.484066423201;
    msg.turbulence = 0.878845116952;
    msg.possimmon = 63U;
    msg.commmon = 127U;
    msg.convergmon = 126U;

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
    msg.setTimeStamp(0.588738563344);
    msg.setSource(16294U);
    msg.setSourceEntity(241U);
    msg.setDestination(5757U);
    msg.setDestinationEntity(72U);
    msg.possimerr = 0.177045941737;
    msg.converg = 0.241041177879;
    msg.turbulence = 0.174887584517;
    msg.possimmon = 69U;
    msg.commmon = 76U;
    msg.convergmon = 150U;

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
    msg.setTimeStamp(0.235535918436);
    msg.setSource(6144U);
    msg.setSourceEntity(174U);
    msg.setDestination(9946U);
    msg.setDestinationEntity(169U);
    msg.possimerr = 0.922265072399;
    msg.converg = 0.433416215038;
    msg.turbulence = 0.405476983127;
    msg.possimmon = 134U;
    msg.commmon = 46U;
    msg.convergmon = 118U;

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
    msg.setTimeStamp(0.0258366031044);
    msg.setSource(37858U);
    msg.setSourceEntity(7U);
    msg.setDestination(54371U);
    msg.setDestinationEntity(7U);
    msg.autonomy = 233U;
    msg.mode.assign("MEMRYXLHGJFOKFYVSBOULJAFJJPROGSOUAKVIIEKQTGJMMQZTDANODCSISTUDBXJRFVISRIFSDDHCPYMUZCMZYESMKS");

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
    msg.setTimeStamp(0.422958681388);
    msg.setSource(42160U);
    msg.setSourceEntity(215U);
    msg.setDestination(37564U);
    msg.setDestinationEntity(67U);
    msg.autonomy = 113U;
    msg.mode.assign("GFROWOYCWFJMJBTBQDERHDXBIPKCEQVKHJJBLKCWLRNQCLBPBDZGZTSNXTIPOSFMEQGZHONPWVGSRASGIRKEMVHZGEOWMTTOSIDLLKVAZVBXXYWUFVAWYLJCTVSSXPISTYZANUZIDMGAOEJKWNQMVRPWXXQYCYCMGHPZI");

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
    msg.setTimeStamp(0.522677607004);
    msg.setSource(20028U);
    msg.setSourceEntity(0U);
    msg.setDestination(51900U);
    msg.setDestinationEntity(95U);
    msg.autonomy = 11U;
    msg.mode.assign("WBHXIBMMHJIOYBKFEVRHSXJDFJUTQSTZKGBLNKLHSBCNIJRTWLQBBUFLMAINLHUARNCKZACEMPSSYKQDZXAYPEQGTYORBVQIEVTDPDNUCSQTKJJZZLZ");

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
    msg.setTimeStamp(0.550144264078);
    msg.setSource(53973U);
    msg.setSourceEntity(136U);
    msg.setDestination(47217U);
    msg.setDestinationEntity(168U);
    msg.type = 137U;
    msg.op = 27U;
    msg.possimerr = 0.289736955216;
    msg.converg = 0.704092800457;
    msg.turbulence = 0.356195025756;
    msg.possimmon = 238U;
    msg.commmon = 222U;
    msg.convergmon = 21U;

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
    msg.setTimeStamp(0.00795744327098);
    msg.setSource(22403U);
    msg.setSourceEntity(177U);
    msg.setDestination(6565U);
    msg.setDestinationEntity(23U);
    msg.type = 227U;
    msg.op = 195U;
    msg.possimerr = 0.447178022744;
    msg.converg = 0.0874080303043;
    msg.turbulence = 0.796696193923;
    msg.possimmon = 35U;
    msg.commmon = 202U;
    msg.convergmon = 77U;

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
    msg.setTimeStamp(0.376521553516);
    msg.setSource(64921U);
    msg.setSourceEntity(12U);
    msg.setDestination(22273U);
    msg.setDestinationEntity(91U);
    msg.type = 162U;
    msg.op = 126U;
    msg.possimerr = 0.449182387049;
    msg.converg = 0.313363825026;
    msg.turbulence = 0.47231551267;
    msg.possimmon = 179U;
    msg.commmon = 191U;
    msg.convergmon = 114U;

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
    msg.setTimeStamp(0.0805699092445);
    msg.setSource(45059U);
    msg.setSourceEntity(231U);
    msg.setDestination(42886U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.530216059919);
    msg.setSource(24064U);
    msg.setSourceEntity(8U);
    msg.setDestination(36727U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.823034009077);
    msg.setSource(58831U);
    msg.setSourceEntity(1U);
    msg.setDestination(49406U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.581497163979);
    msg.setSource(25819U);
    msg.setSourceEntity(29U);
    msg.setDestination(6719U);
    msg.setDestinationEntity(247U);
    msg.plan_id.assign("BJLSFXUIWKPSQPIDSQHKYQQTRXIVXPVUNSAMQALYXREEFHEWAEXXMHNNMZGCKVLWUCYPVOFVPUBNMLOJRCQCDTKNOLLZZXDGLIVJWOCXWNNRTFTR");
    msg.description.assign("MVPWBZYGDDJTMOPZHAFQHYJSAOVGBTUJRQILYJKAOMJKGSDNDMURFAVCSTWZXMRWWNANUYFCSVIQTLB");
    msg.vnamespace.assign("MGEVEQTRZRDONFJBANGPPYHJPKUFFLHEXIBPJYPRJGSDZBUTJIGIDCIFTOHIGSGFBLJEXHBTUOXVKRBFLDENRVXCLUSQQTIUTAEAWNUKZDUNMYJGXHSEYUCSTJMGM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QFELJZYKKTTXRPCWJMMBVCONBWTZZREVMISXFUIIQMQSVTCNIQNAIXJAJIPOWNGSEXCGGVVWIZARGOPPHPPPGOWBFWDBUDXHIOEEYWIERMUTLKNVLLUYWSUJLAJEFLJONFSQTXSAHMWHZAONDPHASBLIUCRGFLMZDLNXOTGYDZGVFEYFZKTZRCUSPXACHBNQCVNWFRYGXMREQKCRGDVHOUQDHRKYJVDTDABYYULABJDQYBEKTUS");
    tmp_msg_0.value.assign("EZXNWCMXBVICPEQTNLZPAUBGIGTWVUNEIRYOADRLXSHLLOLGNISUZMDTEBDTVJQSZJPTVYVEBFIUPUYFFWPMBQAORCPNXDPFEJKBEXGAAHPUHKCLWMMOWNORZQNQF");
    tmp_msg_0.type = 29U;
    tmp_msg_0.access = 60U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HBWNKXQBZYRAHZGORXPTGQMOYCKEEMAMUKQCCJFYLWARAQEZYTWLILJTGIJSKKEGCHWXNFBIBTHZRWIFNOJXLTPOYGLYKNDVKXIFTSMHLXUZPSBMTWQKRUGJKBUKJWNLDFVYPRDCMIAAEIWHYNZROSZPDUEUGTLSSJUVNPVCCBFEIHJVQLFWODXYZSQGTOPUHDPNBJQOS");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("UQZUEGMAIUQTUSHJLXDXVKHPIMPSGQCUHFYDVIFAEZPGLETANAIJZLFSYCKUEDOGSNJYAZCXXYABXJVHVWNRHJVQFYCNKYZGEZRYTBVTQOKOELBHHYKLAVXUOQJQZUNNRFTDCOZDFTAPTWFWRCZBPYEYKIKHNIMQILADPDKWOWRXMBELWLMBLOWIHJNJUZCGROBSXTGIDVMAPRFURGOGKXTFJSPJPFMNWVSWREHBM");
    tmp_msg_1.dest_man.assign("YYCFMYFHEOPZJNLJBFNFEFEGWTAXVKNHHWLMVRRRZNHOIIMDJQKIIACPCDLREFNZADTP");
    tmp_msg_1.conditions.assign("MPDFFFQWBWEJUHIGVUPJBILHRVALJIOROKGPONKYXAUMRVWSTRITHZQYOVKRMJDVZEGMAGRCBQSEWEAYDGOTHCGTQZSDJGXBQMFECXFQGU");
    msg.transitions.push_back(tmp_msg_1);
    IMC::QueryPowerChannelState tmp_msg_2;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::PlanManeuver tmp_msg_3;
    tmp_msg_3.maneuver_id.assign("JLRMSSZCTQLYUCDMLIJFQYOITPXFAXOWVAHGYALXKAAMONZCKVDHPEAAWCTVSDBEYNQGJVUFBSBNRTEGSNXTKFTPCUHJZWJGXI");
    IMC::Launch tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.timeout = 25346U;
    tmp_tmp_msg_3_0.lat = 0.00809896480562;
    tmp_tmp_msg_3_0.lon = 0.162585131422;
    tmp_tmp_msg_3_0.z = 0.0541917938709;
    tmp_tmp_msg_3_0.z_units = 197U;
    tmp_tmp_msg_3_0.speed = 0.851072766228;
    tmp_tmp_msg_3_0.speed_units = 2U;
    tmp_tmp_msg_3_0.custom.assign("IYNUPWVNZIZTPRDBVEOADUMKGKSMJBFJMTFHLKASRZHOWFXNHCWKOJNVFPAERNMWVPIPYEDEXESJYGFLAJRRMCFCXPQZZBILGKXECFTSVQZDJKYZEGNXFWLFTIOEYULUMDHSSXUCOTDDXQELKVXBUMXBCUPNOQB");
    tmp_msg_3.data.set(tmp_tmp_msg_3_0);
    IMC::OperationalLimits tmp_tmp_msg_3_1;
    tmp_tmp_msg_3_1.mask = 64U;
    tmp_tmp_msg_3_1.max_depth = 0.864730247331;
    tmp_tmp_msg_3_1.min_altitude = 0.092036233709;
    tmp_tmp_msg_3_1.max_altitude = 0.717865491046;
    tmp_tmp_msg_3_1.min_speed = 0.321473734143;
    tmp_tmp_msg_3_1.max_speed = 0.259724514874;
    tmp_tmp_msg_3_1.max_vrate = 0.536368247861;
    tmp_tmp_msg_3_1.lat = 0.406216699379;
    tmp_tmp_msg_3_1.lon = 0.44615267519;
    tmp_tmp_msg_3_1.orientation = 0.0551220451264;
    tmp_tmp_msg_3_1.width = 0.85687557887;
    tmp_tmp_msg_3_1.length = 0.39319247571;
    tmp_msg_3.start_actions.push_back(tmp_tmp_msg_3_1);
    IMC::DynamicsSimParam tmp_tmp_msg_3_2;
    tmp_tmp_msg_3_2.op = 164U;
    tmp_tmp_msg_3_2.tas2acc_pgain = 0.464972098734;
    tmp_tmp_msg_3_2.bank2p_pgain = 0.578489700361;
    tmp_msg_3.end_actions.push_back(tmp_tmp_msg_3_2);
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.807285935473);
    msg.setSource(13341U);
    msg.setSourceEntity(115U);
    msg.setDestination(3951U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("YLUQMIWVGOFVVBHQTNVVCZWUPYQSLUIJJAPXKTLFYZACGJXPXDELWGO");
    msg.description.assign("RPARAWSJVFLAWGLPGZZXCPCWRMHHCBODBEZLQNTQCKYPEEBXJQKYZETKXXHBUZLINROTNOWWGHKV");
    msg.vnamespace.assign("GEYYNHOGCDAMAZETXBUOZNXIGQA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CUIQOYRMCEZZWXUEHYMAXA");
    tmp_msg_0.value.assign("OZRAPJAXWMGPSWQLGIHGTCDDDDSHKFAWGZVFWOBVTBKGUOFFQOLLNAOTNNKXVCHDNLRRUURLLQTATNBVNKJAKCGWYYWECEHXAT");
    tmp_msg_0.type = 64U;
    tmp_msg_0.access = 209U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RPOMGAKZMPQAKYCQASDLLZPLIEZQPNCFAHCKMIHPYVCOHNTOSLEGCZJUXFYSIADNTUDVORADTMGXWIO");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YPGAZGWCSFQIWQQVNUEZWJRUFLMOLOYJYZLPCLLXPNVENFCBJYHOHXDAGEKRUBXMIIBGSVSFPXPHPSHNTXMACWJFKOHKIFUBEXWJL");
    tmp_msg_1.dest_man.assign("MTGVVAVQHOLNLQBCKQKKOYZIUQRNSAYJZNUEIQEQFWPEBIFEUPCDSFNGWDOERNULARBSDPBJDOVYNOCYQFOEACZNEIIPDHVFQBZQFOLCBZTFMWHDJGWYSZMGLIXXHUYIKPPUHWAULCSTRDHMHXYHIXRSTBK");
    tmp_msg_1.conditions.assign("ENDBMUPXITFZMVYTUDBFOQHETNRJYUPQJKMIVZWAFIIREZXIXCADOAOKREJAAZYYTQBKHMJVZXNZXLFZFUQEQJVQGDKRYRRON");
    msg.transitions.push_back(tmp_msg_1);
    IMC::RhodamineDye tmp_msg_2;
    tmp_msg_2.value = 0.319219659409;
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
    msg.setTimeStamp(0.972652274695);
    msg.setSource(5215U);
    msg.setSourceEntity(193U);
    msg.setDestination(63162U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("YLBGDQMOJDXLGURYZVWUENMZCEXVGPCRJPRPBSXQSAXFDPFWIFAHPIPWOSADOWXIYCSVJGKZDATNNBOVXZHYKEFHYPYHQFMHOLDGJTICBQKQLL");
    msg.description.assign("JDKZQWKNQDZEMPNHFLPMFFEAVRXARKGUSFFVHGZIGWDSLUPWAUADTDVBNYFDUVOHUIXDMNHGONZNXDBYDABSCJXBULLRQYSWXEVLTIMZFEMATHBQGJHBGQEQWRZYEAIABTTMGTUPYCRMZQVVHACBTEIQRFQKZCUBXAHCKHKEVYIJRROQYDNMRYGUVCBXXCRXLILGJWPJPGVKWWIIPOSPNMJIOTPKZOSO");
    msg.vnamespace.assign("HJMKKPFOGZTFYHVZEKLCVABTIFLNIDEUBRZCEWXWNKBVVWFZPJPQONYSMKQLHPDDYFCMRATEFCSCXVRLDGGG");
    msg.start_man_id.assign("CDRAZPIEOEESLPSXMZGHHVUVTZWZTACPINPQMXTGFAMWQYBCSEVJZHC");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("AHJGPWTKRSZGOMYRWGPESJVJLMOQNLTTECYPKDHVQBRCNKYBLFKSIBCFUEVAYJHFFQXBYMKOUSLYXMIDRECQISITQXNMNUZTEZHOLXLUYJ");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredHeading tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.129352619961;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 25632U;
    tmp_tmp_msg_0_0.custom.assign("YZCPFWKITSBIOJHCBRRMHBZKOKWYDWVCJDUUDQDODKGXTFPWLUJFMAHZSORLNQIFHNCUHRQOTSXMQCPONBDERBAVLQNFTWPJGIWVJVDFUZSGFBWAXKUEHKHYUKZMGCLIYXEQSNMWYYYSUMBXJFASDGL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredRoll tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.95067638967;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("FHLSNEVTDMBIRUGZNRBHPKWOVTOUCZAPMLSRMHCMNOICJPRAQCEFFFLMGDVQGPXYBSZENVKBPULULDDAMYBRNIPNRJDMWWWTMYHRBOQJSTPTEQAFXTLBXVSGZSESKFJUOGGESMCPEBF");
    tmp_msg_1.dest_man.assign("SZHECLMZLQHSAOHAQUNZDGTXNKJZCFIMW");
    tmp_msg_1.conditions.assign("EWJASURWNUAQACUTIZZNSEDWMFOZMNGVWSUHFGVEYDBYHJCZPWMDLEIVXGGIVRMPFPGIKROKNXXQQHJPMLOFHKBXRXYDPEMYJUNLBERCTJSPXAOCNDLIFKZWXBBDTLTXRJKDWCHZTUAYKHCMREBXDJTOLQJWDVSRQSPKIGUJIBNHABFQAKGUSAXJELRNTOMYERFVPOZVCIMWLAHCOKQNGGIEHBFVMSUSTLBZZVQI");
    IMC::LblEstimate tmp_tmp_msg_1_0;
    IMC::LblBeacon tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.beacon.assign("DXAMDPSVEAVCFERENFTPMBOYIXRAALBWFDOIPDUGHVICOUPWKGLZCAYTFKINFABHSTZGEBFLRNCOSPOGUBYLPRQGJFXSPKCMTVVWBEMHQYQQLKXLGUHNOTVGREKZHUIQYHRYYBCMWLFJZIYQTNXOQZGXWUIVYKVTHGVADPEMSNJBOSQEJDZCWHLRSKDCUNBICIPTAOLZSUWKUERRJMFKMEYWZOLJK");
    tmp_tmp_tmp_msg_1_0_0.lat = 0.891072197451;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.313514649501;
    tmp_tmp_tmp_msg_1_0_0.depth = 0.379803397846;
    tmp_tmp_tmp_msg_1_0_0.query_channel = 235U;
    tmp_tmp_tmp_msg_1_0_0.reply_channel = 47U;
    tmp_tmp_tmp_msg_1_0_0.transponder_delay = 238U;
    tmp_tmp_msg_1_0.beacon.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.x = 0.213502320943;
    tmp_tmp_msg_1_0.y = 0.430189316217;
    tmp_tmp_msg_1_0.var_x = 0.89932434793;
    tmp_tmp_msg_1_0.var_y = 0.605882402732;
    tmp_tmp_msg_1_0.distance = 0.691047198973;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.126636390917);
    msg.setSource(32956U);
    msg.setSourceEntity(144U);
    msg.setDestination(26488U);
    msg.setDestinationEntity(92U);
    msg.maneuver_id.assign("GDGSCBKVBWPETLTNZGBIDMXPJYKUFLCEEQXJUEJUZADKXZMTCHVBLTFWGFRIYYHGGCWIIXRGANJXTLCVBAKNQMZHYOZDBIVBKSCEUAAODXSWSQCHQWTSHCMNOASOOSKCWDTFOLSYZBWXLYMVSFXNANBJUPKXOAVRMRTQHUOQRDEIPHGVMJFPNPZVJYPURBZA");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 18873U;
    tmp_msg_0.lat = 0.0886985291229;
    tmp_msg_0.lon = 0.950782038627;
    tmp_msg_0.z = 0.145850502198;
    tmp_msg_0.z_units = 179U;
    tmp_msg_0.duration = 49326U;
    tmp_msg_0.speed = 0.503518203412;
    tmp_msg_0.speed_units = 179U;
    tmp_msg_0.type = 3U;
    tmp_msg_0.radius = 0.487681104591;
    tmp_msg_0.length = 0.666680605077;
    tmp_msg_0.bearing = 0.99756564593;
    tmp_msg_0.direction = 207U;
    tmp_msg_0.custom.assign("ZAEDGZHHLYIUYBXWOTXRGTKFGLJYINQFTYBVWSJEZUIKMZLQGGOULFHTCATDSUBKOIEQRQSGFBADRBSHWKOLOUISARNGEOJGVFXLCPQMJAMCAXTBYLSZBMSXPVDZFWJXMCRUVHCPVMKNYECOYVRMUKXCREKVZCNHIDSREXPEWAIFJNNDCYWFKWQYOPUNVWQKZVLFEBEDLVNFQIPBUUDWHXJPLGIMP");
    msg.data.set(tmp_msg_0);
    IMC::LblEstimate tmp_msg_1;
    IMC::LblBeacon tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beacon.assign("OGPQXCWJHMZFJSXUXXWFNHENACDEPJUJNQVEFYSJQTEDEGDIVJYASJDPHJQSCWMGOTWSOBUOOANAWRNSFSKRUPKIRPPLBYYBTXZDSOXGCMFVKZGKQEVKTBLRNFBWBNOCQGHLVXQDMHIKGIURLCAGXZBDPRCBPNOTUYIZTZVHTLKMHJWAVXSFCORRPYCWLTDEUAYQQFUMOVIRVZZAFYMSYYUJKPHTAXTIM");
    tmp_tmp_msg_1_0.lat = 0.30411435391;
    tmp_tmp_msg_1_0.lon = 0.952452387774;
    tmp_tmp_msg_1_0.depth = 0.0010485939827;
    tmp_tmp_msg_1_0.query_channel = 134U;
    tmp_tmp_msg_1_0.reply_channel = 74U;
    tmp_tmp_msg_1_0.transponder_delay = 152U;
    tmp_msg_1.beacon.set(tmp_tmp_msg_1_0);
    tmp_msg_1.x = 0.657573386644;
    tmp_msg_1.y = 0.316310571602;
    tmp_msg_1.var_x = 0.228964944823;
    tmp_msg_1.var_y = 0.599431074291;
    tmp_msg_1.distance = 0.717970985691;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GroupMembershipState tmp_msg_2;
    tmp_msg_2.group_name.assign("PEINALKGIPCGVDRKXZDJWQNTQDYIYBDLEZEUXMUMFBFAUDCFPJZKMWDOVMMWJBYRNRGOXANLIVPNQAGKQVPOMLFQUSINHECWSJTMIOGSWSGEZPKAHIFRZGHPOLPBYXQFTFBOVBEDYTVAZDHJUSTCYFKHOGXVOZCQUQRXJXTIUNPSRTXEVZUANAKCJGQSFPZIEXRWLGVSY");
    tmp_msg_2.links = 118429416U;
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
    msg.setTimeStamp(0.143322819434);
    msg.setSource(39855U);
    msg.setSourceEntity(247U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(71U);
    msg.maneuver_id.assign("FKLGZRUIKQLJYWTFQFOISHVYRXTQUYHQNLWAFDEALWCMAGUDLJGLCUYRKTUQFAXIXOZXNXTJKRVPEBDCGKBDSCNLBUROAVQKMIQRMBVUGKEFPWQCETAYHHRKOUSBYCFEHKEHSMMEKMAMMDUEFWHNBVSWIGXFAILOPRDIZTTZRSBYPDMPWDCVWZJBYNZTODXPGVPZQHJOSCUSHPEOYTNJGASIRXZJJXSWDZZLIBNN");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 54357U;
    tmp_msg_0.control_ent = 238U;
    tmp_msg_0.timeout = 0.736980794596;
    tmp_msg_0.loiter_radius = 0.167841847999;
    tmp_msg_0.altitude_interval = 0.318379056667;
    msg.data.set(tmp_msg_0);
    IMC::Formation tmp_msg_1;
    tmp_msg_1.formation_name.assign("QFKYIEEFRCXQVIWJPKBRTMGWZNMYQBCWCTNUXVZAXTGXSSJAKHCRLGYPZYXDBGTPRFBKEGUDFJZWTTRPEPOGPCSRSACINGQFQEQUWMMDVOEFDHXVFQSWLDZKGUJOPOIRDHLCQUMHJDJXAPWVXDGETUGUHLNUJTIKYKNMKYHYJANSNEBFKLSQQBRIMEHJPYNOWBDSVLHWOVCPOTYXLAIOZSLKMBT");
    tmp_msg_1.type = 132U;
    tmp_msg_1.op = 171U;
    tmp_msg_1.group_name.assign("HLCVQKIOTHFVUJEZVGQPSICVFXLTRXBHTQWUNEBDGSILOWQOOMGLMYROXESLBYRTVKVTOKDJXKDYSZRUTHQUMRWXSSJCRIEFCHYANBQZCJRDRRAVBAACFKJHSWEYBMUXFPACZAMDGTWJZSXQGMPAXMLEPIKAWJPNMGHCCLZFGQEGUTNZGLNYEUHZIVS");
    tmp_msg_1.plan_id.assign("RNXRBLSUDUONMJQUYCGKOUILYQDWSBDIDVPVAWNIBZEYARJZUSTUZCQLPOSKEYDVOVFZICDNKXMWKOWBUUGMSIJXNKKBZXWMGBCFKWDGNFEPZTJAHVEGGWFTANDHVFUPGEQAFFPJFOERPZATKEPRMDMGPRAJRBYQOSALTHPJNYFYALNQHGIIEKHYQAYWOCZJCXTHVSLEHBWSUFTCSTJJCRIMLRRVZXDEPHHKIZCTNQXVXCHB");
    tmp_msg_1.description.assign("OLNTAEEWQSDZXPCORWELVTYRKTJMKHTEZIVSR");
    tmp_msg_1.reference_frame = 228U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.vid = 60774U;
    tmp_tmp_msg_1_0.off_x = 0.112961960375;
    tmp_tmp_msg_1_0.off_y = 0.624064810836;
    tmp_tmp_msg_1_0.off_z = 0.4452054379;
    tmp_msg_1.participants.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.leader_bank_lim = 0.185119976626;
    tmp_msg_1.leader_speed_min = 0.839004249996;
    tmp_msg_1.leader_speed_max = 0.605044542725;
    tmp_msg_1.leader_alt_min = 0.594784438838;
    tmp_msg_1.leader_alt_max = 0.615139909148;
    tmp_msg_1.pos_sim_err_lim = 0.0978079039502;
    tmp_msg_1.pos_sim_err_wrn = 0.751125485058;
    tmp_msg_1.pos_sim_err_timeout = 10371U;
    tmp_msg_1.converg_max = 0.660635458214;
    tmp_msg_1.converg_timeout = 9481U;
    tmp_msg_1.comms_timeout = 31876U;
    tmp_msg_1.turb_lim = 0.165578586874;
    tmp_msg_1.custom.assign("MOZXDWXNVXFLCHTZVGKVGJIIRUBFCRTSMYFOUQQSBQNEXWAUQURXJPEZGQGQTWSUGVMSCFSENWQGPYYXIHCNWSDFKBEMBPNLMTMIBHOBVIJKPYUQKJDPZEECPAYWJRDIEAJSIEPTYKVCSOP");
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
    msg.setTimeStamp(0.555769460604);
    msg.setSource(17010U);
    msg.setSourceEntity(36U);
    msg.setDestination(34140U);
    msg.setDestinationEntity(252U);
    msg.maneuver_id.assign("RYGRJBYFBFAFLGBJIQDBMHLRZVZTBCCZNDVWJESQQOYPBIERJCIYJSKINHSCWQNRVXUMDTKKSBCHKIVVGOOZDUHLWKHNLWKRZWIEFHYTDTWMQAMELLEKXAKYOJFOVHQUIPHMWMTZXHTJCZLVHCSIRSQLPOZUNYTUNDXUOGMUSTDABXAZQKAGOLEOPGYAEWOPRADQXYDXFASNJMVFCQFURCFSIGBXGZESXWJBVRUG");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 18508U;
    tmp_msg_0.custom.assign("BUPNWALWDSTONKELQPXXIQPMNFFCFLOOKIDVZFULKWBVGSRFHXTFDHANEUPSMYYBOGTEEZDYBZRQHYNGJEUXNYBEJODSQTRHZVYEVFJKBQVIKLHCOPSLVFIUMYWCRXHWAJPIOCPSLMUBMXZINHXSWJOIMINMZDJPZTMJUGXPKARTDYWBAXRTGCBWLETUVGCHDASWIEJEZAGKRJARYGGF");
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
    msg.setTimeStamp(0.282016093713);
    msg.setSource(41119U);
    msg.setSourceEntity(99U);
    msg.setDestination(11830U);
    msg.setDestinationEntity(254U);
    msg.source_man.assign("FMWHOXVWDCLWDYTQNGYJYUUKEQBTJZXDBIIKCEONWOSXLNNAEVMLVGTIHJGRNCTUSYOEPCURLOSZZID");
    msg.dest_man.assign("RJAOTHZVTPYFSLCDZJMDPKHDGJNMNTXWMGGVMFAKBWTAXVPOVFKLLGOATZNEUHJQTXGLRDICE");
    msg.conditions.assign("SOUFWYAPZFEMIWQOIGQHRASJXPXMMJBCUAOXRTRQTHIQJCLXLMHFVUUFMNKTBJFXMNWDWGBAKQXTFWLJHKIWNDBKBUKNRVNVJDPVL");

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
    msg.setTimeStamp(0.547477263009);
    msg.setSource(33632U);
    msg.setSourceEntity(24U);
    msg.setDestination(40370U);
    msg.setDestinationEntity(9U);
    msg.source_man.assign("OPZQOCJDKVOTNGCJWWDXMIBEBHUYTCXEQVAPQKZEFUHOPPDOVFKCPUGRBRLKAAFMEAXTFNKGPTPMLYWTHSHIFDRG");
    msg.dest_man.assign("DGAOHZHELYPKLCIDPPNUEHNGEFNJJMBGHYUFWXMOS");
    msg.conditions.assign("QSNBDYXGUXMTICRWIGPUAUMEBKMXPAVJJAGNWHWSYNBQCAMAYTPXOYNABNTUFVMZZOSGORWJRPQBVXBBFMALQECFFSFWJCNKDIGTBJJWCPDFWTLYMOUREYVCBZTLKFIKPRHWQIQHDQRSQEOKPVWFFTKYCHHKJDR");
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.174704495395);
    msg.setSource(28336U);
    msg.setSourceEntity(250U);
    msg.setDestination(45659U);
    msg.setDestinationEntity(7U);
    msg.source_man.assign("KUGWNKOCEFVUEWICE");
    msg.dest_man.assign("RTSHUNFQTBSCMOKGGPUTZYYCOFOVKDJWRWIHKXOUXPBXGNWUBSMDEOMZXGDJKMUSEIQXJIOBFFEUQCRTGOVYJHSDJIERMYJBNGAPQCSPCFYEQXOERHNOWLCKAVS");
    msg.conditions.assign("ZIJKIZEKDCRROGELPOMVHXQCLJDAHOFMIYNWSKNAT");

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
    msg.setTimeStamp(0.184870633343);
    msg.setSource(65124U);
    msg.setSourceEntity(200U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(156U);
    msg.command = 27U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZOLDSVOKWAUSGNKFOJCXITIGJAUUNPGRQOCMPJKFSYKFIQAKBWYDFHHVV");
    tmp_msg_0.description.assign("FHPNYCEXOSSALLBUHTWJ");
    tmp_msg_0.vnamespace.assign("ONYZXRHXCFARFOIXZIPEMWGDGRNEUYBYTAYVVYBGIAWNRFOEFYDDMLMLJDHJQHSMGWWWORXMELSTOEKJJCSLMKBZHKHJDIPPVUFICPLRLNRNUCTXNBQKDEXFDBTBLNAVFIUOKKWEAOSWSQAGICHZUJEYLSQGSCCKZNRPCSY");
    tmp_msg_0.start_man_id.assign("HPPGGESICLKNAREVOCZFFJPHDYHRBYFXHDOYDHNZRLPPGK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("EPIBLMXPZAHGZGELCFSOTJGANIUZXSUOZCSTAVJSNQIUYYCHHWKAGBUQEQGOJCBYRSARZZJRWNPWWKMSLHOYYBEMPKMSDYXIIFMSGSRIOSXLJUJBVZTODFOQURIDYFTBVDTBFPNIFKJDNFNVRERYXEIVWFULWVDRRDUPPUGKVWQQHNCRHJO");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 47808U;
    tmp_tmp_tmp_msg_0_0_0.name.assign("KRLNQJAYFKGOBZVQZEABUEYXERWQSGGMQNLXCPDZOPMGFHUFCYAGZSKSXKIIBENSGEEAVMIXMLRBTNAAUVNUOGHRIXSWMEHYFRWYJPCSKGUYJDUVATLWTYIIEOXTWIBFVXRVCZQOJUDJJXJSCBROOTLZCWAOSBAWDKQRZVPSYVVFLZPOKXQDCUSODBRHELTMHFDRUGW");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NTCQNFRRBHZRRVLCNLDRIITVQBSJBDYZBMWIEGEDLKFBZTFPHEGBRKQNFJNVRHSPYGMUUWYWLJUXTCXJOHEUSOLITPSXFTVHUJXOLGDKAZDAUGQUVSCDTTYAOCZCCJGWFRYGLZSQQLYEYBSYPPOAAQVKPQAWZDWHNOJHZCOAEYVMFWCHTGVIMNSINETRKI");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EmergencyControlState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 16U;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("KRXZOIVXGDQCCOPRQQYCILQBPMVXKJBHLZPOANFAWKCYTQYOQAJMQEITJLSXGVUWRARIECJZMSCPFOUGDETNTNWHHJETSVCVUBZ");
    tmp_tmp_tmp_msg_0_0_1.comm_level = 231U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.value = 0.468283478228;
    tmp_tmp_tmp_msg_0_0_2.z_units = 17U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::ControlLoops tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.enable = 47U;
    tmp_tmp_msg_0_1.mask = 2479944624U;
    tmp_tmp_msg_0_1.scope_ref = 1665819995U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::GroundVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.validity = 108U;
    tmp_tmp_msg_0_2.x = 0.0551779631983;
    tmp_tmp_msg_0_2.y = 0.740269619912;
    tmp_tmp_msg_0_2.z = 0.286633912259;
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
    msg.setTimeStamp(0.770771048444);
    msg.setSource(27448U);
    msg.setSourceEntity(219U);
    msg.setDestination(34200U);
    msg.setDestinationEntity(4U);
    msg.command = 24U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UGJDYWSJTWHXWKTQTDVTWPYKPCGZNPNSLXZEGLBHAFFUJQWYFPVZUYAFBQOKDSIZMMLCBSGJUGDOJOMFMZDMABIVLRIE");
    tmp_msg_0.description.assign("BSPBTHXDIMZPGYPVTASINARWATNZBKPXFFLENUOGQTJJSONRMNPHYUSCVXWRATYITOWVHDVQWHDBBSYOQLGQMKOUMYKGCBGIUEUCDMVDXDLYACRWLVLOHIRZIPJFBFKBFIFYSJRSFD");
    tmp_msg_0.vnamespace.assign("UBQDIXTWROYGSJKUJEDPFWGIVEQTVQHOQNJVLSHBNPFIVZGNUFPFUKDRYNFFRNFCBRWVKMUTSRDVLZFTBQPEIDXWUBERABENBCIACZCUBZQSLSXEAOODYTKEIYAMVGIJPAECZHXJJOVOUNGD");
    tmp_msg_0.start_man_id.assign("BFKZDDYPVQK");
    IMC::QueryEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZUPAWKBIZGYYTQQPELFHJLGWTGXALJQCAXBCSKDPNHOVZQDNFVHMHKHUDLMJJJSFLNPRZUIPDTWWAXSITFKKMTNTZWJNLKXOBOESCHGWPMXBOFFQOXHIIFTERCHFRZFPIMM");
    tmp_tmp_msg_0_0.visibility.assign("IPBWCLIXQTZNMSDIGBFDIAANUKERTDUSFFZPEFZTXDGQSKARRUQLOIIGPQIOBGVCQMTGJJUYALTVSRYCNURYEOCNOBDCJGSYEYJMKWAWYKELDJAEGCFVQKGEZZTMRFBOREKMSLDHLVUMTIZYXMXQXJFCMPFPVEPFXHCXLAOJPOHPYTHVNTWKVKAQUNRWMBYUNVQQVZOVUWWDBHZGEBWIOHTLPCBHSAOC");
    tmp_tmp_msg_0_0.scope.assign("AIHDGKWWALACMMABSFUIRRIAJTLNAGNFSOFMMHBOGKAMOKPDNYDQKVKMFNUJTVRHFCENLROKBCRQPEJIXGZBSDULWYJHEPULPGJSLNGVD");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0274471063339);
    msg.setSource(10933U);
    msg.setSourceEntity(172U);
    msg.setDestination(21801U);
    msg.setDestinationEntity(33U);
    msg.command = 15U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IZLIUUGZKJOIVQVWZZZFMKAXWBPYEHFZRQDQRJALMZTMFP");
    tmp_msg_0.description.assign("ZEOZJPOPPXJRRUQULWLSIGMAKNASQJQEOPWQMJFXMZHHTKKTPQXPTZKDIILBHIKTUCVSGZKXCKGFNSZUMNTHWRSXQSAJLRFWSVDIAYYHVYGOWEPMCALJUHFDRDJDIJCIGZOMROFTSEENYMRHQPVEXACBBODINZYAOGLOSOBACAJNXSFUDXZJDTHLVBNZULKTCMWURHTPCBBLUYNI");
    tmp_msg_0.vnamespace.assign("EDRLLHEJHGQUVHOHPOUFSQGOJSPWVCYHGCNPFLGRAJUAJDAXKCAIXQWFSFSVXBNLCVGKLRDUCEDPLJTDIJWMOCQCDRIHOIDMRHASUYDBQBJKXNESWRNTIJLLZBFGTFWGSVQIENRFMBYPZCGATQETZQZMPMUKMEKRGN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UXEFANSTBLSIWJNZMQDXLUPYSUVSZYCOAUALFLWNCZBCPWKLKMJDPYJTEFDUNRSTKREQSSJTWWXOIBXFYCGSPLZNQXUKCOIMZAPXHHVWMUWBVOIZDHGVKGQGKOAHOLUPHGGTNYIYCGAHYRICFDTF");
    tmp_tmp_msg_0_0.value.assign("SHDEAIAQXUUBTZZIKYCGDDRZJGYVYBOKFPMDGRWNGFBNROJJWAGIKNQPKFDNTBAOPCQXZPJALVJZRDJRVMMSROOVFEU");
    tmp_tmp_msg_0_0.type = 86U;
    tmp_tmp_msg_0_0.access = 200U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TEQFCBVJBTLNIYEXALSJBHTYOWDIEOKERMYMYVNNFSINCHAGASWUDFYRBXHJCAHJFOKNVDTGMOZHNUNGSZXUQSFNWVOALLVDAGBPORX");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZEZYNCELHAKZNJAJSPFEWYUPGQSCMWTDVPGYTIMFCXVGEKOAJZU");
    IMC::CoverArea tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.309482158689;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.141598074076;
    tmp_tmp_tmp_msg_0_1_0.z = 0.391766761438;
    tmp_tmp_tmp_msg_0_1_0.z_units = 54U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.364191352826;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 178U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("NFTJQPQAWMWCJRYTHZRZIOLJHQYTXVMJUDVCPLCWAKGQSOOGTJHATQZZACYRONKFUIWRZKRUDPYTWLYMIYIQBKLSVHSNDBLFXXSEKCBMXSERQSDXUHNODOXBAQGFKGYAMZSVEZZUFUKKHQMHHDTPLPDJCGUSFITVVEVXFXNGPEGJOIBCEEDIBXEWYAYDMXPPLTMWYBFCRMASJ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DesiredControl tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.x = 0.142185356401;
    tmp_tmp_tmp_msg_0_1_1.y = 0.838203034088;
    tmp_tmp_tmp_msg_0_1_1.z = 0.036730955609;
    tmp_tmp_tmp_msg_0_1_1.k = 0.543902856629;
    tmp_tmp_tmp_msg_0_1_1.m = 0.0811659988324;
    tmp_tmp_tmp_msg_0_1_1.n = 0.395126367746;
    tmp_tmp_tmp_msg_0_1_1.flags = 30U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::SaveEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("KCGWKMBDCDNUDYNKEJUHXKJVSWIUCVSPBUAWPOPWQKOXMLFZRQWFWNJCPTRDQVTWGVJVYHKDXRRINNIETSNVQNFBTBXXVQYRBXZMAGSPQZIXYGJBCL");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::RemoteState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.lat = 0.687171816788;
    tmp_tmp_msg_0_3.lon = 0.221684503071;
    tmp_tmp_msg_0_3.depth = 163U;
    tmp_tmp_msg_0_3.speed = 0.481097472443;
    tmp_tmp_msg_0_3.psi = 0.90374403071;
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
    msg.setTimeStamp(0.139796329186);
    msg.setSource(17065U);
    msg.setSourceEntity(27U);
    msg.setDestination(16994U);
    msg.setDestinationEntity(126U);
    msg.state = 113U;
    msg.plan_id.assign("PBXWXTGDURTAQEVLOMYECQHCMDJIGQQHOIPRHGUEQFIMENUAHYSFFWNCVSCLPEMJUYOILZDDHVJDPEWYBMFDGGBRBRNGFALSGKNJZUUFMGKMITLVRXWVBTDZBHOKUJAQTEJHLISRBWZESBOTSCZIHNXZNOCWKTPAVOFIJMAAHAADXCPWKLDNXYARVSXUTXQOFJIFKEJMSTOYIVTGOKRWZWCQVGYUPLDLXZNBNVZKYJQPYMCKSRLB");
    msg.comm_level = 91U;

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
    msg.setTimeStamp(0.916273315177);
    msg.setSource(5581U);
    msg.setSourceEntity(206U);
    msg.setDestination(13452U);
    msg.setDestinationEntity(7U);
    msg.state = 250U;
    msg.plan_id.assign("LESCBSVQJJCIAEGMQGVCSFRMMHHFGYZUWQXUSGEIAQTUTGONUFBJRGOVFLFBFYGIPJKBVJLCLZXXAOKTHOCLZRLSOGPWTMFIPATKJRIOGH");
    msg.comm_level = 221U;

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
    msg.setTimeStamp(0.49565338957);
    msg.setSource(7109U);
    msg.setSourceEntity(151U);
    msg.setDestination(55923U);
    msg.setDestinationEntity(89U);
    msg.state = 20U;
    msg.plan_id.assign("FFRQDNLTKUPWVMVBWKOAFNXHTRJPLSNQSZQRNZHJWUHQOAGTGKMTHNEAAYANFIYCTMNKHLFFTAJZVYGHUEAEVZITKXSBLXTQNUSYPXLJOMVZBFWXPPLSSXTOYVOUPODJQDWPGRVWECUISWKDZEILHUQMERIBFZYQDRETPEKZNBDZCMJGYUCVAJMPBBSOFCBBVUJIOZCDBHRFMIOICKG");
    msg.comm_level = 157U;

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
    msg.setTimeStamp(0.321918849706);
    msg.setSource(28275U);
    msg.setSourceEntity(250U);
    msg.setDestination(5205U);
    msg.setDestinationEntity(239U);
    msg.type = 204U;
    msg.op = 149U;
    msg.request_id = 17658U;
    msg.plan_id.assign("LXXNBRTAONAOSGGJQP");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 468924435U;
    tmp_msg_0.start_lat = 0.566638698822;
    tmp_msg_0.start_lon = 0.874231070775;
    tmp_msg_0.start_z = 0.035922735408;
    tmp_msg_0.start_z_units = 81U;
    tmp_msg_0.end_lat = 0.148723578475;
    tmp_msg_0.end_lon = 0.0750977766473;
    tmp_msg_0.end_z = 0.289388786895;
    tmp_msg_0.end_z_units = 36U;
    tmp_msg_0.speed = 0.881231370816;
    tmp_msg_0.speed_units = 254U;
    tmp_msg_0.lradius = 0.184568629033;
    tmp_msg_0.flags = 157U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VXUTNOPAFQJVTMRRDGEKOHBHZHZFFGPZJYRZGRYMXSOZSRYKCVLYCTTHQMUTJOIQDMJSUTIPEWIDNGKLQJUWVWDNHIEOCFCQJRYVMOPMZCLAEYUGFGZDAPWLZQPTVHLSLFJDXTXKJPSSAGFNHRVIXYXFBJKVPQKCAOCXQIDMBRIBBWBYPAXPCHKLJUWBWZANGHWWDAQIK");

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
    msg.setTimeStamp(0.138672111337);
    msg.setSource(41883U);
    msg.setSourceEntity(72U);
    msg.setDestination(25862U);
    msg.setDestinationEntity(196U);
    msg.type = 129U;
    msg.op = 204U;
    msg.request_id = 18243U;
    msg.plan_id.assign("UMBBZALXITPYMGGDCQZRIXESKWXEQEFUQPKRPATXHXQNGHBQFGJYNCVJQVZYNCSMPBVSAFHBFWGUJUJXEMLAFZIVPHTPZYEOLOURRKOWZQZPVTLHSVKRIKOUACDAAYWUMGEDQAJKDXOWOIZWLOCBYWNJXLIUVYBHBARTNGCLKXMHDVBGTJJCOQOLWDEKOSSFNFIEDLZKMMRIBPCFDTRCVF");
    IMC::AcousticSystemsQuery tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LGWTTGRQUOLWSPFRFUJDLCPO");

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
    msg.setTimeStamp(0.377650077975);
    msg.setSource(2768U);
    msg.setSourceEntity(179U);
    msg.setDestination(11760U);
    msg.setDestinationEntity(34U);
    msg.type = 15U;
    msg.op = 154U;
    msg.request_id = 53645U;
    msg.plan_id.assign("LBJGFWNVXEOYEALCYFHAQLRFTJQYWCLZOYNASUAEIWGDAIYBXBTRHDJVNOKWNKWTYQZPSPMDBIIMDKDGSEKKWKZPSAQNXVGDHSIZQVKOEUVNEJJPDDMMEMTKAQNCTUBLCZUWHBCOCNTDOQPQHVTHJZMFIPZGTYAQUGFLJYUSXYIGFVRPCFPEUOS");
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3396082749U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YPOSWUEVORPBHPFNKXXQQQXZNHIDUVBHSNVEZHEBMRGEGOICGJNHWYZMSAQXOZLWVCOHWJHNPMJAJAPQHSAPQJKWLLEBKFBBZQKRNJYTSNYEKFWDHVTLWXVIBVRCUZRWFFGYTENXMDUNT");

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
    msg.setTimeStamp(0.517222081655);
    msg.setSource(26560U);
    msg.setSourceEntity(118U);
    msg.setDestination(32756U);
    msg.setDestinationEntity(147U);
    msg.plan_count = 25779U;
    msg.plan_size = 1723857956U;
    msg.change_time = 0.283502716145;
    msg.change_sid = 47690U;
    msg.change_sname.assign("XIIAZONCKHXQIGCKPKGBZGOKCICOC");
    const char tmp_msg_0[] = {48, 96, -15, -22, 20, 57, 19, 84, -30, -10, 126, 86, -55, -27, 59, -25, 65, 19, 18, -88, 111, -112, 16, 51, -35, 76, 17, 5, 31, 32, 4, -121, 47, -49, -86, -62, 123, 30, 58, -18, -84, -114, -70, -61, 80, 114, -88, -57, 122, 27, -34, -28, -79, -20, 51, 59, 123, 10, 4, -23, -103, -81, 108, -114, -90, 6, 9, -14, -47, -23, 21, -11, 6, 79, -34, 63, -77, -82, -88, 104, 103, 21, 122, 91, 46, -96, -40, -48, -52, 37, 55, 91, -106, -32, 99, -42, -98, 101, 21, 48, -11, 105, -109, 27, 122, 16, 98, 51, -81, -110, -102, -87, -18, 112, 125, -94, -109, -13, -7, 22, -101, 93, 69, 119, -56, 93, -111, -85, -65, -2, -97, 55, 16, -111, -23, 3, -3, 35, 11, -61, 15, 113, 96, -62, -101, -18, -76, 72, -53, -81, -46, -68, 57, 100, -67, 87, -56, -43, 106, 106, 61, 85, 0, 17, 108, -92, -79, 31, -76, -57, -39, 58, -35, 94, -69, -3, 111, -119, -95, -36, -11, -3, 112, -90, 109, 36, -74, -16, -26, -113, -27, 90, 61, 43, -1, -108, -108, -103, -92, -63, 110, 56};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MCSZHIDAIVROCSGWTDSKQEITIXYVJEXGDEMAXYPKDJLKDLVOVSTUEOUNGZQSNTQHKHCWOEABBYWRMHULIEHJILSWUWZZMVPOWKXMZYYXTBDOHFYUWFSNUINBALQCLTPJYRALJCZFXMJNBFYJWGE");
    tmp_msg_1.plan_size = 11081U;
    tmp_msg_1.change_time = 0.22497272786;
    tmp_msg_1.change_sid = 14233U;
    tmp_msg_1.change_sname.assign("IDQPZYMNNWFDORPJHCAWAKAAD");
    const char tmp_tmp_msg_1_0[] = {18, -70, -1, 80, 111, -50, -58, 109, -23, 36, -24, 26, 117, 67, -75, -122, 71, 63, 100, -118, -6, 2, 42, -93, 45, 87, -33, -31, 72, 7, -97, -47, 10, 1, -119, -52, 24, -50, -115, -53, 30, -76, 36, -4, 109, 114, 24, 63, -61, 125, 39, -26, -111, -4, -53, -70, 35, -1, -87, -76, 66, -82, 12, -122, 20, -61, 58, 119, 27, 85, 12, -115, 2, 25, -95, 54, 32, 52, 36, 79, 11, -76, -99, 96, -42, 6, -122, -87, 109, -76, 96, 78, 100, 6, 22, -55, 104, -82, 112, 95, -29, 99, 48, -88, -2, -11, -32, -86, -4, -65, -45, -19, -81, -27, -91, 98, -37, -112, -38, 94, 28, 47, -17, 59, -125, 83, -86, 40, -84, -108, 82, -10, 51, -79, 95, 53, -44, -41, 46, -128, -54, -23, 7, 108, -75, -39, -69, 57, 49, 6, 3, -31, 57, 111, -4, -90, 35, 28, 42, -65, 114, -127, -96, -98, -13, -107, 70, 47, -93, 126, 117, 20, -125, -92, -6, -127, -44, 126, -33, 31, -118, 84, -97, -76, 110, -62, -19, 114, -104, 33, -13, -76, 63, -52, -61, 54, 25, 92};
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
    msg.setTimeStamp(0.520314606341);
    msg.setSource(58411U);
    msg.setSourceEntity(82U);
    msg.setDestination(12209U);
    msg.setDestinationEntity(188U);
    msg.plan_count = 45559U;
    msg.plan_size = 3429555651U;
    msg.change_time = 0.529916434225;
    msg.change_sid = 46558U;
    msg.change_sname.assign("GIPOLBEPWVRIQDENSPMVVWERDRQVYKDZPNYKBFMOBHYQDKMHRXJKNWSVGACMURNQTQKYYWSWH");
    const char tmp_msg_0[] = {-17, 81, -51, -5, -89, 106, -99, 25, -104, 68, -66, -72, -97, -65, -64, 64, 85, -22, 123, -41, 121, -17, 70, -20, 92, 75, -5, -69, -7, 93, -105, 90, 14, 114, 86, 42, 11, 57, 126, 30, -102, 86, 45, 71, 12, 54, 104, -9, 26, 9, 20, -84, 99, 20, -70, 14, 87, -107, -96, -54, -113, 77, 57, -33, -70, -72, 103, 124, -65, 83, 87, 29, -13, 109, 47, -58, 23, 125, 24, -113, -87, -57, -85, -1, -121, 32, 26, 46, 41, -18, -45, -13, -120, -112, 105, 21, 3, -70, -30, -127, 27, -40, -78, -98, 121, 39, -112, -90, 29, 1, -30, 16, 33, -96, -81, 33, 15, 122, 41, 112, 22, -5, -103, 79, -104, 74, -67, -125, -97, 1, -76, -70, 95, 40, -41, 124, 15, 0, 53, -16, 24, 99, 61, 38, 120, 66, -77, 103, 48, 17, 19, 85, 68, -76, -120, -115, 84, -70, -27, 12, 10, -37, 45, 84, -106, 90, 64, -61, 39, -28, 25, -43, -53, 120, -113, -82, -96, -7, 62, -98, -32, -51, 19, -21, -128, -96, -109, -115, 77, 86, 94, 60, 17, 102, 90, -119, 98, -114, -32, -31, 86, 70, -101, 26, -94, -38, 44, 16, 94, 85, -110, 118, 54, -1, -20, 72, 95, -55, 97, 67, 35, -90, -14, 105, 24, -86, -92, 16, -27, 97, 78, -45, -86, -92, -62, -74, 79, 78, -116, -35, 122, 88, 49, -78, -59, 84, 22, 14, 57, 26, 45, -28, -63};
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
    msg.setTimeStamp(0.108745984248);
    msg.setSource(40382U);
    msg.setSourceEntity(239U);
    msg.setDestination(47662U);
    msg.setDestinationEntity(200U);
    msg.plan_count = 50505U;
    msg.plan_size = 387533744U;
    msg.change_time = 0.410654919558;
    msg.change_sid = 60697U;
    msg.change_sname.assign("PXMJCKTRDEDSDMITXTCROCTCJLMHBPIVEXVCNHAYYGQEXHXFHVPAYLTSIGRDYUZGLDKEJPHIBNMVKKYPALFVMHNBUWSLWNVQKXQGCGOURZCFEJFJFCOVNGQZUBNMYRZBEKXGEPQOEOZUNGTYSQPPQHUFQITLFUDHCYABQBXUFBFUDGIRHOWJWZNVPZXMRATDMSZQNCWVTYIIRVBKW");
    const char tmp_msg_0[] = {84, -49, -99, 26, 79, -72, 95, -88, 31, 32, -23, 56, 100};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("OUWWALBUEYKIVZHMZMMDWEZCZDEWCQKJGDFSAZRRDTOPBKPXEKLTNHHHATFWPPOLVAAQZOBGRBTNWFTKXFTSCGQRPLLJFULHXUHWUSSBGVZHYLIICEZJMHAVSUGHZSMAISRKVNUORGCXMPKYNVXPDEYBWTYPQXEYNEPY");
    tmp_msg_1.plan_size = 18756U;
    tmp_msg_1.change_time = 0.322823584233;
    tmp_msg_1.change_sid = 13992U;
    tmp_msg_1.change_sname.assign("WZGQCCOIGCPAXFIHAZUKVQMRJRDWFKPKVOFIJTYPUDAVBUWPGSZZICZBCHLSAOLQMCUNHYVLENSDSLAKOAVHXBWERYNWTFKUTCORQQNDUTTHNMKJISGHXRETXTOMKJQNTDXQNGMRHYIRLHAKERTXEFXMSEQOJPJCYMVGULFOPGPGKPYZYZADBNWBC");
    const char tmp_tmp_msg_1_0[] = {-113, 41, -10, -17, -29, -39, 68, 21, -53, -56, -87, 2, -55, 44, 56, -89, -9, -119, -55, -56, -63, 116, 85, 37, -124, -108, 35, -38, 18, -3, 92, 65, 46, -96, -88, 11, 99, 86, -64, -82, 70, -115, -104, 95, 55, 105, -14, -94, -27, 121, -54, -75, -61, -49, 113, -49, 17, 54, -91, 18, 4, -63, 74, -128, 102, 125, 4, -126, -12, -85, 80, -45, 118, 72, -23, 119, -64, 29, -50, -78, -79, -38, -15, -53, -126, 77, -63, -102, 113, -72, 17, -105, 41, -84, -2, -60, -24, 98, 42, 27, 27, 113, -38, -7, -125, -128, -61, -126};
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
    msg.setTimeStamp(0.609225380232);
    msg.setSource(36411U);
    msg.setSourceEntity(244U);
    msg.setDestination(61379U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("KULRTYORUVJGRFVGCKFFXMICZCBIUAWDDSCYNAGGXODNZJNWPWRRWZFQHELCNXLZIHAYIXCRQPASENITGPQMKJTNLVFQPJG");
    msg.plan_size = 64166U;
    msg.change_time = 0.25155500986;
    msg.change_sid = 8145U;
    msg.change_sname.assign("IRCTIJUQPNGMCVEFGLLBLOSWESGQFIIWIYOZSAQXXNVVJMHPCGQTZZLKCUWHRHOIJXVVCOASVKYFGTRGSETNEYMQUMINTAYODJIOBAVKXCPVWFRTEPMRIUYJFSJHGTHABFBZYZXPBZPQQDKOOT");
    const char tmp_msg_0[] = {74, -55, 71, -71, 50, 48, 90, 104, -43, -34, -18, -29, 123, 46, 33, 25, -88, -117, 114, 40, 86, -115, -35, -2, -24, -17, 63, 74, 55, -124, 46, 69, 32, -30, -111, 59, -92, -72, -44, -79, 72, 41, 2, -11, 126, 65, 65, 6, 98, 96, 101, -18, -73, -2, 118, -42, 43, 76, -122, 24, 113, 33, -85, 24, 35, 109, 49, 103, -7, 115, -112, -102, 61, -16, 11, 80, -19, -125, 40, -101, -31, -56, 120, -7, 3, -79, 35, -82, 44, 37, 106, 28, -75, 94, 32, -90, -83, 71, 1, 68, -40, 125, -105};
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
    msg.setTimeStamp(0.95965839867);
    msg.setSource(53248U);
    msg.setSourceEntity(163U);
    msg.setDestination(39670U);
    msg.setDestinationEntity(126U);
    msg.plan_id.assign("HFRPOFNJZSVXJBKWWOTKCPEQPTHZONSXRMMAOQDUIJWCQIJPCJADWHAYEKLTBFLBCUZNFHR");
    msg.plan_size = 20576U;
    msg.change_time = 0.584060403157;
    msg.change_sid = 59529U;
    msg.change_sname.assign("QJDXRHTWHRFKVCPECRNLMGMJLSYHBMLOPDBOTLRNWLWRUBZQZCIGJFQCQBUIAEXXMKXFKXBRPXBGHDUPTVMYHCLSHPUTVQUIWUVBPNKASKMOPKSIWSKPIEIOCUWHPGYMNQKSYYBOFODZEIECUDO");
    const char tmp_msg_0[] = {71, -13, -27, 36, -31, 41, 78, -22, 8, 16, 103, 53, -10, 65, -126, 113, -64, 99, 103, -39, 1, -25, -20, -120, -57, -32, -119, 78, 47, -112, 24, -7, -4, 97, -114, 125, -22, -48, 44, -64, 69, 18, -114, 55, -38, 71, -96, -63, 90, -127, 14, -4, -14, 90, 83, -5, 36, 70, -26, 21, -49, -59, -88, 79, -12, -48, -47, -121, -41, 43, -120, -2, -30, -106, -67, -80, -70, -76, 105, -112, -117};
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
    msg.setTimeStamp(0.435255586559);
    msg.setSource(50103U);
    msg.setSourceEntity(33U);
    msg.setDestination(52275U);
    msg.setDestinationEntity(203U);
    msg.plan_id.assign("JZBQRGCDDUOOBZSRWFCSBPEAAQGOAFRIJTNPLCEKAQIDGTEPEIZZFBBMXHNWVTPWNMJWGGIOXALJMLMIACDYSRGKALCKFRDSNQNBWKGZDVIVWZUOCYXRFQKHMXHMLYGQEUJOAGLZPCWEFJKBFJHUUHCTBTEMPUUUKWZQYEYTWBRQFWZJOXIPYVMBPILAVDCVCMSSQKXTVNTLSYKRRHEPXO");
    msg.plan_size = 2386U;
    msg.change_time = 0.186746210412;
    msg.change_sid = 6967U;
    msg.change_sname.assign("CPNGQAIASXRPDQVWRVRKQTTVELKDSYABWULPLEBIZMEJYCYWXFTKDXXCFMKMISRFDJPRHTJTHKMOGZOBCNTLJQNRIMBXXDSRTYKDXBVJKNNKSLWIHESFLGJBWMVWZRPHXNOPACJZTFCAAUCSIYDUOGLMXTNBFGSKPUOUYGWBIISOBUHDVFYMLFTNOPNEZEIWYAQCHWCPG");
    const char tmp_msg_0[] = {104, 103, -93, 4, -65, 63, -128, -26, -44, -105, -80, 18, -8, -16, -14, -62, 45, -128, 56, -23, -93, -68, 83, 43, 3, 61, -83, 11, -128, -32, 46, 99, 71, 76, 88, -116, -80, 45, -49, 116, -14, 47, 65, -95, 93, 105, -9, 10, 39, -63, 47, -2, -12, -119, 107, -53, -55, -58, 79, 68, -8, -7, 13, 54, -45, 55, -126, -79, 56, 6, -48, 123, 79, 44, 77, -80, 70, 95, 15, 120, 8, 8, -99, -79, 27, -128, 36, 38, 79, 119, -20, -25, -67, 98, -58, -93, -58, -32, 55, -73, 54, -24, 110, -70, 67, -61, 89, -41, -90, 121, -5, -91, -56, 45, -48, -60, 113, 93, -91, -8, -79, 119, -77, -120, -96, 12, 45, 82, 64, -29, -77, 4, 117, 56, 92, -89, 101, -97, 88, 60, -114, -68, 7, 53, -45, 115, -11, -2, 78, -57, 62, 51, 35, -5, 60, 93, -89, 63, -68, -117, 40, -68, 46};
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
    msg.setTimeStamp(0.914931475867);
    msg.setSource(48095U);
    msg.setSourceEntity(177U);
    msg.setDestination(32851U);
    msg.setDestinationEntity(118U);
    msg.type = 240U;
    msg.op = 220U;
    msg.request_id = 37241U;
    msg.plan_id.assign("OQGWOSGIJWBZTHVMEOTDQSLRDIWXWPDVZNMNEQGNFZPNTAHPPMBCDJYBNVDGXSJVSRIAZEXHGJWPCNMMXGFVVUVBUUXKAADJPMBZEWKZCAFUBFFCKGXCFYDCRWKBORYYMXSHGTDEZKOHZUNHUBOILOCSLSYLQQCRKJCQLPMYSRYATRBDFTUIHELAXFIOMHKLDLEVHVEVFOSGTTLYPJGRNIIQTSJMQIQUEBOLTZRPIRKAJNXQEPKXYWZCYFWUAW");
    msg.flags = 13582U;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 83U;
    tmp_msg_0.period = 1979186333U;
    tmp_msg_0.duty_cycle = 1007377513U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RLJRJFVDSBWWIQFWITABQZMSAGILTFXYJMYTHZKXPRMMWBCSDKLGXQLVLYUHPKUQDZVLPPUEYBOLXFRGMCPKYIAGTPDYTYVMOXRZOEJIWEPPMOYVYLOEMXCZSQVZIYUHOJQL");

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
    msg.setTimeStamp(0.783899081019);
    msg.setSource(53739U);
    msg.setSourceEntity(237U);
    msg.setDestination(34282U);
    msg.setDestinationEntity(120U);
    msg.type = 10U;
    msg.op = 60U;
    msg.request_id = 6711U;
    msg.plan_id.assign("JLVXYBMQFG");
    msg.flags = 54127U;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UYGBWZSZDLQYMMKMOKQTGDXPORIYBSXVWFSLEYZUIGTNONDGHQONVQLHUOTNPKAXRNEFGPUFBLDEEZRQLOITFGBIEUWXHFCBATCJQKVPUWPEMRAFESZKGLAMIQMXXDJNUCJJZYCSUEWSJWVISHXLJKKGCVMHHTPKCZQNSPHWXYELVYRTIIMIAVCJITYUVGDMJHSAWOJFOBC");
    tmp_msg_0.value.assign("KJZEXXTFLCCIUK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OHNZXTSIGXUPBFOEKHYYTLPUIQSBMPTIPVONVHAQUACGFPJHFGZFNHKBWDVMGTZVPNSBJVCMRKECLWVMDRXFJBCOIWYOZODCAVUQOLPGAHUYQXEVJMXLGEGOJNFFRYNLCLZJQAIAYURWRTGBTQPGXYDTFVTUICQXEDWKFKAYCWMWWILUQD");

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
    msg.setTimeStamp(0.461832675473);
    msg.setSource(44516U);
    msg.setSourceEntity(124U);
    msg.setDestination(38408U);
    msg.setDestinationEntity(145U);
    msg.type = 196U;
    msg.op = 202U;
    msg.request_id = 50842U;
    msg.plan_id.assign("JSXNSPSYLZLIPVJUXPJGAFTLQWNNYASNQHEDGECPGMAYVSNLFRBQJTKOIRYGRFHZJPRVXAHSMFVQERWIOAUOXLBNHLMGIBJMJNDLVTFVUZKUAFKLTSFHXSXEECBQAYOEUHWVNCCVWTTWDZTPDYZRIOUZWQCZLZDWNMUJBGHXZMJPVXOUHRCKWMBDPUXVKNMFOKWJXTDZTMROBIGAPIKIDPGTKKEIIWORGSYAYYDEYCKEMQAF");
    msg.flags = 39844U;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.564006178299;
    tmp_msg_0.lon = 0.980034102135;
    tmp_msg_0.depth = 213U;
    tmp_msg_0.speed = 0.169243468921;
    tmp_msg_0.psi = 0.620593256426;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QVJMRYCBOYKAPCBOEXXCLKTAZXPLRJTEFWDPIRLIPJRHL");

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
    msg.setTimeStamp(0.303461113636);
    msg.setSource(58280U);
    msg.setSourceEntity(125U);
    msg.setDestination(55914U);
    msg.setDestinationEntity(253U);
    msg.state = 139U;
    msg.plan_id.assign("KQFVMPJGXSSFFMEROBB");
    msg.plan_eta = -1773508087;
    msg.plan_progress = 0.815966022641;
    msg.man_id.assign("TIRCZKNMPEMCWUCYUEWOAUYJUOQZVCMVIAVGMMGDNR");
    msg.man_type = 14398U;
    msg.man_eta = -750171713;
    msg.last_outcome = 62U;

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
    msg.setTimeStamp(0.197046341613);
    msg.setSource(18245U);
    msg.setSourceEntity(213U);
    msg.setDestination(53961U);
    msg.setDestinationEntity(244U);
    msg.state = 42U;
    msg.plan_id.assign("JVSAUVRQHJDTYLVIYBYHIPZCBKEMFLSAHYTZPZXAARGJTQVKQXJIGNBSTWAOZLWCWUFQFICJXCJSQAGERCBTUVGTNTDUGZBXTXOEXCUFDWRFPBERPSGHLWWMLUKKGOARDLPRIMKIBOEWQXSCUQKYSWBYNMZQMZKBFPLXSNNOKIWYMGVEVIZFYPXACECHUEERQODKFVDNCLHVMGLURBOAONDEUMPOJHWJZPIM");
    msg.plan_eta = -14753884;
    msg.plan_progress = 0.0555126734673;
    msg.man_id.assign("ZHIZCVMKXBNMUQO");
    msg.man_type = 1114U;
    msg.man_eta = -313429751;
    msg.last_outcome = 50U;

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
    msg.setTimeStamp(0.606381978289);
    msg.setSource(48470U);
    msg.setSourceEntity(87U);
    msg.setDestination(33420U);
    msg.setDestinationEntity(151U);
    msg.state = 145U;
    msg.plan_id.assign("SPUGJXRAPEHCXEEVCGVYXJKPLZPIBYLGMQEEOWBHCMQBBHFRCYLYYKSXBHKOHJVERDMECAOWVDKUOWVKWMDIFGTWIRTLXPULWJVQUAKFPTAXRFWLYZBSBBVITHQJADRCFXFEZNCMIINXUJPOMDLHFOKUYNIEMFDZJRDGUNUSGTPAPKTWSLITFCEGLVAATDSWUZHZBNHMKQUOGNXCNLJVQKQSNSOQAIZ");
    msg.plan_eta = 1700966204;
    msg.plan_progress = 0.870605716566;
    msg.man_id.assign("AXSHIFMBITTTUQNUVGJMHPCXLKCONXQRQTAZMHHJYYTIVJZPDXBHIFXAISYRWQMPTINWCDLLNNFSOYBOYKJZDGVPMAFKHEMYJICDNNQIDQTWBRXFOUPRZOUEQZRTAOEUKCATCQWBAUKM");
    msg.man_type = 7511U;
    msg.man_eta = 1244602793;
    msg.last_outcome = 24U;

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
    msg.setTimeStamp(0.356760740908);
    msg.setSource(45772U);
    msg.setSourceEntity(189U);
    msg.setDestination(64234U);
    msg.setDestinationEntity(219U);
    msg.name.assign("CLUHKCXQJNSYEHXAGKNEBSLGAIZHHMVJGYNBXPAOWCAASVHTPSTRRHMCPMDPZIJHDTHWVBLQAXTEZVLCHMBAAMDGGEKOFLU");
    msg.value.assign("VCBQLMKUJQOSVOREUSYS");
    msg.type = 198U;
    msg.access = 220U;

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
    msg.setTimeStamp(0.0520136184158);
    msg.setSource(40081U);
    msg.setSourceEntity(126U);
    msg.setDestination(26246U);
    msg.setDestinationEntity(78U);
    msg.name.assign("MGCSYWURRPSOTTMRGSBISOWNTBCIYOYFUXBIMANNBKMXUERVACXQQFGRVKSQCAMGBZVDJWZZOHMZLPLAQESTMDJMNXVPPWTVFXVZBUGHOUQPQEKULIRREWWDDCZUDNEKJCCBTDBQLFQRLOHXZTKKYNGFRAYP");
    msg.value.assign("ASCJTQKUXXZNTHPVQDFVJOQFWTJOUAKDMSVFGCYMVPQFOVFXSFJISSCDOLLRCQPWIMWNEZDTELIBMRYQKGTVUPUXRPEPWYQTJYUEZWGXAKDLZKRXHMCGOMLMRWBHKOLTATEGXVBHOIYURSOFXZNKRJNYGW");
    msg.type = 202U;
    msg.access = 222U;

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
    msg.setTimeStamp(0.996775289677);
    msg.setSource(32615U);
    msg.setSourceEntity(139U);
    msg.setDestination(61183U);
    msg.setDestinationEntity(26U);
    msg.name.assign("RMHWPGJLNOYVLAKODDHWEEPOMEYPNBSLXFGSEKFBOKYJLHJWBCKPQCMXYGBITAERAZSNDDMWAYJHBWPHHOXOKDKFNIOYNBJZZU");
    msg.value.assign("GPBMZIUHMASCEOEBQTQONLLQVHAIDEGUZNYBMEGXRMICSUZISWRITFBNSEEALBYMFHVHSKNXVLVOMXMWIQHABKDNBVYRIKEFDDTHBBAQVPGCUTDKCWQVCWTSJKUJAXYKPWSENJUZJDJQPXAPMYF");
    msg.type = 241U;
    msg.access = 27U;

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
    msg.setTimeStamp(0.436352038001);
    msg.setSource(23523U);
    msg.setSourceEntity(132U);
    msg.setDestination(31424U);
    msg.setDestinationEntity(224U);
    msg.cmd = 198U;
    msg.op = 79U;
    msg.plan_id.assign("JLQSWDUEZIWVVNVZDERIDOMBQVHSIIPEOQUTCJXCUKFHBEGFKQHNTVSMZGPOSFJTUVWZWPMNIEKORWMQNEAMESAATGPLYJLRMPXTXFYHNLDAPGEVPDUNDSVHORHZHEWRRFKBUWZPWDCUTLGGBOISQECXBJFOYGHGYXACRXJBKNPTAOAUCQJSJWRXJVJBADXXBUOLLPOMZRGNACYYFLCQICVAHXIFNFIWGKUQKZMFTDIB");
    msg.params.assign("VEOJIMIZEUYVWTHXAGMNXRRVGTLLNHNHQZPSKSOJWMDXZNTHLPTSRXDBJIZCBKZJLHREZQKCUQQVSHDZPOMYPJESPYIJJFYRKUPXFSDNVGKMDIFPNOWRGEREUUOYIFTPCOGPWXJLQDKXDTXLTVCTZCCJIFUGAOTUAFZQNYQFBYBYFSQEQBWWLPDHQBBGWABOXGNCAOVWRZ");

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
    msg.setTimeStamp(0.343824748986);
    msg.setSource(25066U);
    msg.setSourceEntity(20U);
    msg.setDestination(39295U);
    msg.setDestinationEntity(171U);
    msg.cmd = 228U;
    msg.op = 130U;
    msg.plan_id.assign("YEXNVZIJZSDLVIKYOTFOOBUGPQHUXWVHYWVABZOLIBGANXDBCMDVQQECHRWHFIAHJYJSBWJCSNCDZOCDRGGMOHEDACKMGLAGRLXRGWMTTJFMCPIAKHNTQWRECFYMDTGDFBENYITZROINK");
    msg.params.assign("LROYUQHYMVONIFIEZKTCZLGZBRUHSWFHRMOEDWNAOKMTDLWOYMOQEINDHEMTBIPEFNFQPJBQJTRNEUHUXMXSTHFGWKURYGDJ");

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
    msg.setTimeStamp(0.547549538631);
    msg.setSource(17385U);
    msg.setSourceEntity(69U);
    msg.setDestination(29582U);
    msg.setDestinationEntity(213U);
    msg.cmd = 104U;
    msg.op = 214U;
    msg.plan_id.assign("PVTZJTIDTXNBOFUVLWJOIPGYVLSWJCYHDDLTOSFKCZOLCBVDTBTBTRQYZGAYJIKEKWHLLCIASAYWSKREIIJHMOEZPSGQPTUDWKZXVMFJXJAXSXNMVGHFEPIPUIRBJFRPZUFRUGCSMWGNE");
    msg.params.assign("OOQPKBVKDFDKKZZWRFAUHRSDYXZYLEXHLQTHEEMJHSMEJSXOGZUCRMAKJAEACMQDBNAWCUJFSEUSITKOGZGGCVUKOYBDQPFIAYDDIWJCYTXIVTMMSLVNTTNVYGXAZKGPFHYBGOOLVVOETUBJNNUDR");

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
    msg.setTimeStamp(0.126699024752);
    msg.setSource(16671U);
    msg.setSourceEntity(58U);
    msg.setDestination(37015U);
    msg.setDestinationEntity(196U);
    msg.group_name.assign("BRWAVSVXDWDOTQEUSJATNSFFWJVFJTGBJZQGVOUHCSJRKGCLLGBEITLHBMIKZJXPKAYHUKCCSTJOENOXGUXXKHQZTZVGPEMCPEPZWMTUSONIJEDHKANMKFNNDHFQYARYNPWVVAOCORWQLQIFQZXQYMHCI");
    msg.op = 8U;
    msg.lat = 0.441484864079;
    msg.lon = 0.994888328497;
    msg.height = 0.591525767865;
    msg.x = 0.326767592902;
    msg.y = 0.717914208935;
    msg.z = 0.406892151982;
    msg.phi = 0.29547680252;
    msg.theta = 0.833287658925;
    msg.psi = 0.541213657628;
    msg.vx = 0.379954004684;
    msg.vy = 0.446157592341;
    msg.vz = 0.763799869531;
    msg.p = 0.562423148267;
    msg.q = 0.589750038473;
    msg.r = 0.804866083685;
    msg.svx = 0.349514812221;
    msg.svy = 0.0913170493238;
    msg.svz = 0.0843341412209;

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
    msg.setTimeStamp(0.121426540294);
    msg.setSource(3255U);
    msg.setSourceEntity(157U);
    msg.setDestination(39189U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("NRLIHMPKDCXREUIAAVSCWAPMSLDKMMJLRYKALCEFVOWBOXBHTNGSSLEUNPYCCJXBDFMFZKQGQNYBRKGFAVIPLRVJWKZODIDLZHWRFIQCJGVKEBJQZIYQOSXCPZXQZTTJHAYHZMRZNNPVCOGBUIWQFONOVVAIDYVWOUJLBGQCKSTBNOLMEUESRETMQRTYOXFMSYFRCEWTNMHYGUEBHFTPDQXXWUEWKHVDWATTJNJA");
    msg.op = 225U;
    msg.lat = 0.521828576708;
    msg.lon = 0.723907060642;
    msg.height = 0.31129422873;
    msg.x = 0.66139137358;
    msg.y = 0.864453257255;
    msg.z = 0.257381291101;
    msg.phi = 0.566987340882;
    msg.theta = 0.259632608784;
    msg.psi = 0.226950977212;
    msg.vx = 0.412904954664;
    msg.vy = 0.395182521202;
    msg.vz = 0.420456675345;
    msg.p = 0.918083075242;
    msg.q = 0.467769063029;
    msg.r = 0.255320429143;
    msg.svx = 0.35351301881;
    msg.svy = 0.299279601022;
    msg.svz = 0.699482180737;

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
    msg.setTimeStamp(0.731585164213);
    msg.setSource(3674U);
    msg.setSourceEntity(127U);
    msg.setDestination(1693U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("BXVMTHTXGWDSSBHUGIMDZPYEAHJRXJEIESTZMUJAPKREUJNNPBFHGFTUFGNLTOYVIVDXYZJNHQBVVOPYJDOHXAWZKRQHLUKGSVFL");
    msg.op = 63U;
    msg.lat = 0.622402632918;
    msg.lon = 0.856945887773;
    msg.height = 0.512851716142;
    msg.x = 0.558777279125;
    msg.y = 0.60015929113;
    msg.z = 0.928002077104;
    msg.phi = 0.0311432546035;
    msg.theta = 0.766642417725;
    msg.psi = 0.545140103148;
    msg.vx = 0.414997476784;
    msg.vy = 0.238283957881;
    msg.vz = 0.166685193817;
    msg.p = 0.194478017859;
    msg.q = 0.415113439652;
    msg.r = 0.164599502129;
    msg.svx = 0.576396849598;
    msg.svy = 0.319588917523;
    msg.svz = 0.893540246905;

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
    msg.setTimeStamp(0.572569093882);
    msg.setSource(6066U);
    msg.setSourceEntity(189U);
    msg.setDestination(49274U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("SXLBERRFRLABWFWIQPRVWJUNMOHZJMSZGETJPAESLEPCBIDKDTGJYPGUQFVYKIJYSHWCYFHCDMONUXZILJUPXGHOCXTYGTLRWEYQAJEBASBINVKMOWMDHWTKOPNIZTSUJXYXPDGPYMETKDFHTCYRHVXVAQVMBFZUQBUPDKOCZCNKBGVALNFITQLEVMMSAHHQQBWYDEFVCNZUZNGOJSSLFCRQKLOLOJIGXRPAIKVRCUFNIMDQ");
    msg.type = 75U;
    msg.properties = 92U;
    msg.durations.assign("FSBAHQIDCVLTVBNJHRGIWRROJOISMJICFXMZSIZERYTHFHNLTVRHCQEGULUQWLPMKUHLOJIJVYVAXZXEKQKOVCYIPBANGXTMTAFTDEPYVXZAFOYCJBGEYQUKXNEVDWZSJRRDGBTBUEKXQPAHZUNCLRWWQWBYUNEMAKHJMBMOYPOGIATGPQWMKPUBIWZJDSLHFKGSKUDDDQLXCPIRJDROCUAEXSFWFSMPWTGYGALZDVSTBVSCNNZHYLEO");
    msg.distances.assign("ANEYTPKUJRLTOOEKGNQWFXBPYNVSZQRUFJZWJD");
    msg.actions.assign("HJVQMQCBYXAVNRBUFSWSXVDZULLCEPVPATGIOYQZFUOIPVVGTSRLMJNADWNARDAFCBHOUCSCNONOFCINXIW");
    msg.fuel.assign("ZYUIEEINPOXSMDYTDGJOBLGLCCEPUUFTZHRQVWKJWC");

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
    msg.setTimeStamp(0.175935909241);
    msg.setSource(32664U);
    msg.setSourceEntity(220U);
    msg.setDestination(355U);
    msg.setDestinationEntity(254U);
    msg.plan_id.assign("WXNHHYICQGDKNASVXOUEAWSPVYWYWHLOXPSMSJCKQOISKUHZRMWHSZKRYZFLENEANOTKIKLPVTQCBLTJYTUSKFCGQMFEFZTGGDVNPXTEHCLMEMZPYYBTJANGIEIHPKDYOGPMFVAFXUUFRUNUQUERTXBIUODACATAJGIGMZZFLUFPFXLKLIYGHBVIWJBWLQCOVCNSMZPLGRQTIQJRMEBJDXCHDRWNXRBMZZYKOHWODVEQQJJOJ");
    msg.type = 132U;
    msg.properties = 156U;
    msg.durations.assign("NSFEXAHKKFJMAKNNKZBAWRMFCVQRTRVVLHTQEOTBJUZLLLHPLOTMMJVIPPXKOYHWNMYPHCCQSYTHDYUIBYAGALFGEPDZWRQGZRJAATVWGMDYGXCXRPXXOPSZODXSDIBQRGMPS");
    msg.distances.assign("MSTZAOWJPRCBUBGHJWKTHRDFFEOWFQNUYDTIUMRRKBVPXUPULJFSRPBQQNILHEYNQJQGWTAMJAXIHKMDTVNHUWEEVVDGRSSKFNNCFGILCQSTLWOFDOIASWDKCDJQIYECVBVBKYZAVPLONBHONCORGWIZGFXDOXEMLEQMXVMZOEHKIWKPAGLRCLTBJMBRJZEDLMAHUGYPJGXZKZUHXUDYYZISV");
    msg.actions.assign("OFWZPMBEIECSNXLPWFBFUNESRCLKGFAYCKPEAZPTQIUDWXYMHEURODDFGDALJQSLXJKASZKGCVXTGRNUWCQORQQHVLTDADUZIBBCONWLLYWQIJHUESEPXITBNCHUFARMIBMOWRNSGFRYBNKVTSXTOGFXRGIHYTVHRYOLJMRTQBQBKZEBYUHHXVWMTN");
    msg.fuel.assign("EUIQJLUJLOTKBRBLQDZFBAQMNZEDPNHTMDVOTECIZJNRYRENOBKZEVWICWYEQMJSHXQIWOLJECRWXMSKHALNPULMXBDKHMMCDWOSGMOYHVYOLTEKMDKRPQSZPLKDIVUGSIOVRJYHFUNGCVFETPQWCXVUXRBDXUFPXPSOUAPFAGMPCTHFRBBBQKGJXSZHDGCYVIFLTGTQGFVIAYHWRWCGJWGBNNZTNRPAYHSZQZS");

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
    msg.setTimeStamp(0.240480274039);
    msg.setSource(62493U);
    msg.setSourceEntity(212U);
    msg.setDestination(26478U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("YLKYMKGRCBOVAVNUTKTCPJIRJFVPIDOJSSYPZUYLWCRGTKBSQJACJJCFMVAZJQAAURWXWYUMHVTRKZSXDLVMGXXHCALWTNDFQIEUOWQNQLZPBYDSBHHEFWTRKGHASIQRNHNKLZUBXQDHWLEFOMHKWGLOFIDZVKIOHVJEMMDADXA");
    msg.type = 232U;
    msg.properties = 202U;
    msg.durations.assign("RTKNSKTRADAOBMEGOJBOMNFPSPHBQTDJSEYKBDCIPVZVLPYGGM");
    msg.distances.assign("CMFHPTWTGUSBAXWAQCJVBJXFFAZOEQNGQHDCZGHMXVRYLBWAOMHLKGUWRMNHRSIPHYCSCBIIDZGOX");
    msg.actions.assign("TBWHFCQUMGXTFHJDARVBFCJSONWYYJVGLWKHWWKRQUYRCJQJWXVDFGPMIUOZUVSLPBKTXZPMUGZHBATPGEDSRROKDYSLVKOHRZAMDHCWIXFOWGDTTZFJYNCONSRLLHZNPIIGYYNAZBDDTNQXHPDXPVTSXIOHMQEHCUANUMFESQBKCCZXKNVLPSVQIERJFJQVMCENBBLUVWGUOLIFDKQYIXGAXSKAEMMTBAOQCEIRTUFRJAAJPEN");
    msg.fuel.assign("LNWIVSJHYVWEZLJTSSNXARUQXTALCIBAMLWIXZHEMPMCSJQBPRRVKYEEHXDZYSHYSXNWGBVOHJVSYVOOPIUOOBKFGPTJNAHUVVKYXYCQLCIVUFMODQF");

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
    msg.setTimeStamp(0.428743773863);
    msg.setSource(5726U);
    msg.setSourceEntity(204U);
    msg.setDestination(18109U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.499784568382;
    msg.lon = 0.76816021523;
    msg.depth = 0.98278181298;
    msg.roll = 0.722103448126;
    msg.pitch = 0.924596879847;
    msg.yaw = 0.871579745641;
    msg.rcp_time = 0.696933555202;
    msg.sid.assign("FJRWNBYMGFTPSUKBKHVZCBITWZKGJUQTINDNURCLDFCMVSFUHWOAPFIMRNDLTQLSPKNJUWZKQNENSLSGTAXMRWALOFCGFZMQHKDYVOAIHTNEYEALHZVPYROREUCHZQXJHEILMBZDJLFCWXKGPMLFSPZKQRVJESQGIYQVIXCOVTWNJEBGEOHUCRZKBNGXFPWJSMDRIXJSCXCBAOASHEQDDEWTHGDAUPBYG");
    msg.s_type = 128U;

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
    msg.setTimeStamp(0.892417307324);
    msg.setSource(2577U);
    msg.setSourceEntity(251U);
    msg.setDestination(23982U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.00508401274086;
    msg.lon = 0.231562645122;
    msg.depth = 0.671044161378;
    msg.roll = 0.583192950023;
    msg.pitch = 0.983510762346;
    msg.yaw = 0.166750150962;
    msg.rcp_time = 0.364854982032;
    msg.sid.assign("MCLIKTMFULXVISROJVQYJCWHAWJIBPLNCEDYKVJCHGYKISMFUAYLCTESWZXAFXQYISMLARGHXRPDPUBVOKRDWTBZSBEJZNLPYTGUHHOPFMZZAIXOKXWHPV");
    msg.s_type = 37U;

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
    msg.setTimeStamp(0.306040853985);
    msg.setSource(61323U);
    msg.setSourceEntity(60U);
    msg.setDestination(64478U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.326547332644;
    msg.lon = 0.517296721659;
    msg.depth = 0.537958808025;
    msg.roll = 0.872428336084;
    msg.pitch = 0.539375561379;
    msg.yaw = 0.0641062858483;
    msg.rcp_time = 0.751728932363;
    msg.sid.assign("EVOCUXKOWMNXMUBKULXREGZJTBSGWQLTICUFBGWQLNPXMQFQJVAXITENBYCPOUITBFBNTBVHIPFIWDNWDSGZLDRZZPIEMDRZQDRKWFPAVIWUIOQKWJXHAOODQDADFSBSYCSKNNCYRPVAFEVRAGNURL");
    msg.s_type = 210U;

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
    msg.setTimeStamp(0.682366658844);
    msg.setSource(9468U);
    msg.setSourceEntity(39U);
    msg.setDestination(53518U);
    msg.setDestinationEntity(48U);
    msg.id.assign("BEHVBULKPNDQCLBIVHKHNQXZIUTCBSDSZFOTSKLNUDSXIWAEPEGLHOGDPATQXNYKNETNULCFJEXOVMDMHTEBODAOQZBNJMFDOZCXZCMWS");
    msg.sensor_class.assign("TORVZWXBUZQGSSIUFCHQTGZWRKMODLAKMARKBVAIZAHQUGPZXKXCZDUDYYAESPNOOOTOWROTDCICELCCFTVLVVHTCEDWEWPZTBFOEKJAMVWASQPCPPMEQVHXUDVZPHTHXNXPXQYCSRSXJXFJLNQHNRNMTYFFFKBSISMYUJDRPNKFWHHMJDGBDQJAFUBBXKRIGNUEWGJJWPDIQYEBCGJMLORKEEIABLNIALJGMRNSGYYSQOUVLZFIH");
    msg.lat = 0.309767321442;
    msg.lon = 0.96014545619;
    msg.alt = 0.884281009669;
    msg.heading = 0.605033690734;
    msg.data.assign("NMIHJMTYDLCCVURAHFXKIUUNSXKHOEZEGUBWBRSKHLIQEYQVQXOJNDQPNEDLUZWBCGFAJOPZDSJOXAOMKZPTCZFKSSZNCYTLBSXUXRLEQAJDRD");

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
    msg.setTimeStamp(0.356848239621);
    msg.setSource(40654U);
    msg.setSourceEntity(239U);
    msg.setDestination(37814U);
    msg.setDestinationEntity(142U);
    msg.id.assign("GUMCPVJIXAWZELUEPRKDXBXZLZLPDLMVFUKBSIAGCSWRBAGATLLLZBGIQJSNTCJNCFCHQAF");
    msg.sensor_class.assign("MFGJTSNIVBWNAJMQSZLMXRASXUNQYKPWAFLPDHUBTKGQPQTFPCDOEDGYATBCULUYNJPSEYFVIGBKRMLQQBLNTXMNSVLAKHE");
    msg.lat = 0.55386603728;
    msg.lon = 0.792337236772;
    msg.alt = 0.370395347065;
    msg.heading = 0.929535775202;
    msg.data.assign("TEWNNIZBUUWTFRAEEOCYHGKVNJBWRGSYVPVDTQZQPZVDYTLHYUOZVYQOHLQSLTMPLEAIKTTMIQKDBKKMPFJLRYFAGMHNPLIXZZJJIGF");

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
    msg.setTimeStamp(0.853416557011);
    msg.setSource(59424U);
    msg.setSourceEntity(71U);
    msg.setDestination(49881U);
    msg.setDestinationEntity(139U);
    msg.id.assign("NFWUVQCNDBJXGPMUPMDGZLKSSLMIZSVVEMSNDKRKTTFZJNFDNYWHSHCTMZLROHPIZVKAAPHXLSCANYRKNHWH");
    msg.sensor_class.assign("UGPYPTBWUXNEXBANZRSLLRNMEZFGREFOHFFRATAM");
    msg.lat = 0.74148191811;
    msg.lon = 0.515464152989;
    msg.alt = 0.0494564965184;
    msg.heading = 0.811212297777;
    msg.data.assign("BKXERKTTPLEWABMV");

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
    msg.setTimeStamp(0.29717663187);
    msg.setSource(42941U);
    msg.setSourceEntity(238U);
    msg.setDestination(43098U);
    msg.setDestinationEntity(31U);
    msg.id.assign("QMUQLYINFCMPAVJEEBGEDRXAEQSULJPMGNMAQUJHWOKDKOCZWTRTOHNIZRTJLNZLDTCYWXNSQBZAMOZMVNKCRQRXUXZUIZIFAGODMPXXCYYUGMDRRGKKTCLUAFSSPUJEBBFYIFSSTZVBBEVDEEXSZABDOQJXDTEWLAGLOPD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FOAUOJYZWTVGBIOWIRBTYQGTPTAXXHCJOMXYOMYRZUVVDHWHMVWWIIKVOCJDEKKABFNQCUXNUYDTPCNMBYZKXMFFGGEAJUWZLHRDICPQJEETNWSUKWLBTZLKXAEQBO");
    tmp_msg_0.feature_type = 181U;
    tmp_msg_0.rgb_red = 245U;
    tmp_msg_0.rgb_green = 117U;
    tmp_msg_0.rgb_blue = 242U;
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
    msg.setTimeStamp(0.339021798332);
    msg.setSource(48808U);
    msg.setSourceEntity(35U);
    msg.setDestination(33621U);
    msg.setDestinationEntity(28U);
    msg.id.assign("RYRMQIBRFDHRUPKJJHLEPAUHHNUCRSSUYGJOIRSYFCDUNHBACLHUXZUDCIEMDWTCEKQZGLOBDYZTGPVGGUVDJXXYFAVEIKATNWXWIMWZLHXWAVFMVSURMJJEWGPKXDKTNZWMTIKKDBHOGALAXLNGLTDDBOJLPP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UFEZIYAPLTUCNUIUXOKBSCLATEHMAKZIIFYNOTUKECXJADGYOPDUMPOTWVNXBJSQZEGVFCRTOIHJRGYIFPCPUVZAHEJQWEGKSHWRHMBILSIZCXLTZSDCMECDARXDNVZZFDEQDKBQDATYWMOPKGRVZDEJWPIVTPKOMVSFOH");
    tmp_msg_0.feature_type = 24U;
    tmp_msg_0.rgb_red = 212U;
    tmp_msg_0.rgb_green = 175U;
    tmp_msg_0.rgb_blue = 185U;
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
    msg.setTimeStamp(0.526950385158);
    msg.setSource(52104U);
    msg.setSourceEntity(95U);
    msg.setDestination(44509U);
    msg.setDestinationEntity(113U);
    msg.id.assign("RTUMUIZUAZTISJHTAUUNGIOULQYDOIFIGFCLBREBVIQXUSSOHKCWWCPBZAFVMZFTNMGDGOTBBVODKGZNBMKXECPIBSHXZELYAQYVLQUXDCYNEKJLFFTYGPDSJPDCXOKHBQACUOQSSRSLRCNMFQOXLBTXKPPKHZGYDDNRWGOFTDTWKXYWRXGYFEJPEMNHERHIUPSLAMEWJJMQLMNTHWCYVYEJHCVPRXEJOR");

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
    msg.setTimeStamp(0.548984248652);
    msg.setSource(36522U);
    msg.setSourceEntity(30U);
    msg.setDestination(35260U);
    msg.setDestinationEntity(35U);
    msg.id.assign("ELNTRMEAIKXHQHFWURCMPSECZLQRSZOFVOTVYVQKNMUFRGLIAY");
    msg.feature_type = 70U;
    msg.rgb_red = 66U;
    msg.rgb_green = 119U;
    msg.rgb_blue = 186U;

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
    msg.setTimeStamp(0.492755165267);
    msg.setSource(38826U);
    msg.setSourceEntity(123U);
    msg.setDestination(21546U);
    msg.setDestinationEntity(166U);
    msg.id.assign("UIXJOJPEEUNLSUCKCJFRKDCQFDWNRGTOIXYNOTVPBWDJPHOLLIADDZVOGFUYXGDMLOEYZMKNFCTTRLSMSZWNHVPCRBGSSOAOQJWFEPZPUNDANQBXULPFBMBLLIQNNGCAUIE");
    msg.feature_type = 140U;
    msg.rgb_red = 74U;
    msg.rgb_green = 215U;
    msg.rgb_blue = 172U;

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
    msg.setTimeStamp(0.194531714616);
    msg.setSource(58971U);
    msg.setSourceEntity(53U);
    msg.setDestination(60045U);
    msg.setDestinationEntity(115U);
    msg.id.assign("SFBFEFEIKKRRNFXMQNTLHBQWUCQVOOEFAINKVNACIHJJONUVWSVWMHGONDAPJYMPXVYXMURHEPPZLYRBOWJEGOMOBCENTFLMVYPKUZMJQKKZVRCFFTSBZHLTDQLTKRHOYNXLSDOKAIEPBEHPYJTJHYDGZUUVTGCBCGBWXMQ");
    msg.feature_type = 193U;
    msg.rgb_red = 129U;
    msg.rgb_green = 160U;
    msg.rgb_blue = 178U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.503593018045;
    tmp_msg_0.lon = 0.014414216476;
    tmp_msg_0.alt = 0.982005992392;
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
    msg.setTimeStamp(0.425082082532);
    msg.setSource(54530U);
    msg.setSourceEntity(196U);
    msg.setDestination(52686U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.869488339543;
    msg.lon = 0.911082387022;
    msg.alt = 0.0869709562703;

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
    msg.setTimeStamp(0.807967695515);
    msg.setSource(55181U);
    msg.setSourceEntity(7U);
    msg.setDestination(60485U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.612616305778;
    msg.lon = 0.887117138597;
    msg.alt = 0.967724387005;

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
    msg.setTimeStamp(0.579048344646);
    msg.setSource(24314U);
    msg.setSourceEntity(249U);
    msg.setDestination(63956U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.943348837619;
    msg.lon = 0.591332565646;
    msg.alt = 0.0285147348723;

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
    msg.setTimeStamp(0.0360203491268);
    msg.setSource(22096U);
    msg.setSourceEntity(190U);
    msg.setDestination(44519U);
    msg.setDestinationEntity(0U);
    msg.type = 146U;
    msg.id.assign("GGKCLVTGDKKTBPLUYWCHOFFBNLUDTSZIVFQCRWBQSYDRLYXIGAVPUCJNJOMMXUAIWLWJK");
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.681424433702);
    msg.setSource(49370U);
    msg.setSourceEntity(191U);
    msg.setDestination(6536U);
    msg.setDestinationEntity(208U);
    msg.type = 33U;
    msg.id.assign("WOGCLGIXRFHJXBCFAJJPXUBLLWQACTPTHEYIZOAPNZJTXTQGWTKSWKRSNUOOLDWVQPDQBIPUZPSDZVOKZAZYYLHXYKHDWXGHMAEAJHNAKNDNYVSKGLRWTWUOACYZMABNPVXBNFCBFMPCRENMVLNVPUZJJMMSDORLSIGGXUEQQYHOFUCLFYRCYRJIGKSGTIMWQFDFJBFRVPIRLE");
    IMC::MsgList tmp_msg_0;
    IMC::NecMsg tmp_tmp_msg_0_0;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-28, 81, 56, -43, 122, -97, -12, 91, -113, 22, 64, -47, -41, 101, -20, 18, -62, -115, 10, -4, 45, 57, 97, 81, 106, -54, 28, -84, 33, 28, 42, 92, -52, -36, 126, -51, -106, 62, 69, -69, 4, 91, 57, 79, -80, 108, -53, -66, -22, -126, -110, 49, 103, -16, -41, -44, -27, 106, -40, 97, 58, -99, -71, -113, -95, 53, -63, -38, -101, -34, -8, 63, -77, 124, 31, 105, 22, -119, -47, -98, -120, 55, 125, -117, 101, -92, -46, 95, 122, 53, 26, -16, -76, 121, 53, -69, -9, 48, -25, 40, -28, 54, 30, -110, 83, -70, -118, 63, 20, -8, -109, 83, 67, -107, 70, 100, 65, -24, 24, -56, 85, 23, -29, 67, -77, 22, -52, 118, -115, -14, 13, -63, 68, -3, 113, 3, 40, -94, -44, -61, -62, -18, -112, -111, -91, 89, 125, -42, -6, -104, -105, 40, -18, -65, 41, 16, 112, 84, -114, 80, -29, 91, 94, -40, -93, -105, 69, 16};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.309834262454);
    msg.setSource(35571U);
    msg.setSourceEntity(11U);
    msg.setDestination(43417U);
    msg.setDestinationEntity(1U);
    msg.type = 31U;
    msg.id.assign("ONORCYSKAXGCNXDMQGPVEJXUJUZPVBDWLHFOABVSFQISURESNXNNJKJDHBZYQLESOFGIURHBCDPFAUYQDTBPCDFGCVWTNZSFIJMEDANUYTGCMNYHSDHXWHJJVDTMZRWZOORGQFEKPTWRWIFICPOUEKKROZHVZNLULVIJBTGWKGBWGCCAFPRVLDYQLMTXMOSEEYHIWRLASIUPQGKHAQBNUBATXJXLZFK");
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.834564478142;
    tmp_msg_0.x = 0.847923815417;
    tmp_msg_0.y = 0.218249303227;
    tmp_msg_0.z = 0.517399797541;
    tmp_msg_0.timestep = 0.549888878161;
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
    msg.setTimeStamp(0.516232991606);
    msg.setSource(12364U);
    msg.setSourceEntity(174U);
    msg.setDestination(32167U);
    msg.setDestinationEntity(189U);
    msg.localname.assign("HJHFTERVKQSUFNBXMPICRMLXJTWFIGDZIKPEUXMBHGOWVQTSOZWGIBAYQWHUMBSLKGDSRVALMLVNCVPQLIVAYEOQLYIQLDGOXPUTYESXCJJYKEMEJZBUTGGPXJCYOZLAMHWJZURKBOD");

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
    msg.setTimeStamp(0.0215245023635);
    msg.setSource(33307U);
    msg.setSourceEntity(173U);
    msg.setDestination(56564U);
    msg.setDestinationEntity(53U);
    msg.localname.assign("XGKTOXLWGDZEHCFKCJYBAUNGOGIWCVUDZYINOJPGRSEKDAPOIQKDFZEMTRXPAINWQNWJUZPSJQLSHYFTSTWBIFPTAPCJVFBXLVEZDMDGSFJFOMBEEQGRFUREAYVQCDOP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MTESXMDLGSNOBVAUTPCTWOQAILADRFHAPJRTGOKWEQMSPBESFRLXFLHJXXVVRMRZRLCMPWZYCDYKMXUC");
    tmp_msg_0.sys_type = 245U;
    tmp_msg_0.owner = 9028U;
    tmp_msg_0.lat = 0.931238814636;
    tmp_msg_0.lon = 0.692895617367;
    tmp_msg_0.height = 0.0379104776026;
    tmp_msg_0.services.assign("ZHKYHRDFKQQZDIQJMKRTXNUBUFVJEBNPVFTLTBENSELTUFZWSIOZDHZFJTFJUATRIOAPDGFSOCGZOPYFHXNNTCPPREGVAYBWCHVBQWPSSXOWAYSCPGRDGUWKYSWHCVEABAYKHAUVFQCYENYUKLQRQNVFKILMBRZMK");
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
    msg.setTimeStamp(0.589218724503);
    msg.setSource(64884U);
    msg.setSourceEntity(36U);
    msg.setDestination(42631U);
    msg.setDestinationEntity(228U);
    msg.localname.assign("MAQKXENOFRILENTNVDQJNHEKMCTTVUHLGBDTSJWDMGZYLACTGDNUCWHPIWJZUOQZPYYBGVJOUSREALPBFYUFMXRZNCSZRUHZJJTYNRIPMADSIGJRILLXFJCOYMBUHRIVAKFKTGPBFWFYSCDNXXWAZZHPPKWVQBEKWYROWSSQSHFYQBOEXOCUTXAQIEITHLMAPMQJVMCKLGEHTHJDPFCVVVQXYGWKWGADIUARLOESSVBOCDNXNPBKZEDXGRBQU");

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
    msg.setTimeStamp(0.626098793563);
    msg.setSource(889U);
    msg.setSourceEntity(89U);
    msg.setDestination(55098U);
    msg.setDestinationEntity(86U);
    msg.timeline.assign("WOXKYKNZTGVIHKLTZYILRVPXLRTSHUMSPQCZ");
    msg.predicate.assign("EFMGPXSSQDLWUZFTPHMIEFJIAGDFUDJMWJKBLWLGMCNGWOKVTEUENPEYJP");
    msg.attributes.assign("LBQQFSITRFZQNROVRPQRODLPINZNGAVQUETJCPOQMYNMZKCMVBTCSJQHRJW");

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
    msg.setTimeStamp(0.83653795735);
    msg.setSource(7337U);
    msg.setSourceEntity(37U);
    msg.setDestination(56824U);
    msg.setDestinationEntity(30U);
    msg.timeline.assign("SDINAETOERIJRQRGNLCVSYLISQNIFHERFNMTMOJHTXJCUTEEBWMWPYFQILBPPLCMKXHSGUKHKODIJFTWLZQRFLMYPZVFQEJUGWOPRLJXBWYGVKWNRKFASGTTQAQJNBDGVWUZGSGDBUSCBHPZBXPBXEUUKEOTMVSFCOOXIDLKAVSHCJMXAVYXLZKPJRCZGZNNKDOITTWIRFF");
    msg.predicate.assign("NXWCPLDQVBJKFVPALKORJQHMAVEPKOSMBMQQUYVHVWBDXSRVZIXIZOCGUFEIZAYNZWZRCNIMSMMFMUDIECUQHHYYPUGTYGBTQDWFHZDTJKRLIZNATNBVSOHXGYMOEJQRMUJYTRWGDHPTESWGSJADEDGBTUPPFIBKLUSVZWXELRERNQRKYTCGVAVKQAXQHUCNLRICJPFOAFOSACINIT");
    msg.attributes.assign("ASEGEZBNTILGSQWYDWZCVUHPIYQJXBJZ");

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
    msg.setTimeStamp(0.881211356338);
    msg.setSource(9066U);
    msg.setSourceEntity(25U);
    msg.setDestination(32888U);
    msg.setDestinationEntity(8U);
    msg.timeline.assign("EOWBITIFWECPXSZXKHNKBQHYCXKPLLPFNNRVZIWMHAALYNMDMUFIJEQADORECVLQRRPOHBOYQNEKJXXWRUYPYRWIGSBIJAZQUOZXJNZQFONESKGQRBMSZGBPJKUSEFWVDUQMLNLFGMXZALJCEBOFDCXSSMYRCLKEGVWRHSPILZYDDGIGHQFUBVPSAAT");
    msg.predicate.assign("FWJRWKXHZGHGQOFSZPEZOHJFXTKFPMUUNWQIMTLRTIITBCNYGBIKKVDHTLELZCXVOSVLCOHLGSHPUQLZTZRJCEMCVJUFARUAONBFZPAOHGYGKWXBVNSUUXQOQBBALAEPOAVCRQWKQRPMEMQABCPMNQYCJBJYDIAMSBAVPYUCGTXXLID");
    msg.attributes.assign("CZHQTMSNOAMJOQTFTILPITPOKGMYGMQQMOVZNRKVYAEYJHKZVFWEBZDNNPDHFFZUCUYBQOZKIAXACNYRSLWIRDOVQNAPAMRNGZJJIJRTYPEXWBXEEBJYTSHKWGXBRMWSFWNVCLJHAKYMXOEFH");

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
    msg.setTimeStamp(0.760931954696);
    msg.setSource(32660U);
    msg.setSourceEntity(148U);
    msg.setDestination(23204U);
    msg.setDestinationEntity(172U);
    msg.command = 76U;
    msg.goal_id.assign("DACDWHZNXLZXZLMJFVBGPXMDBUQUBGWBBLRKOSGKYSRKZXTFLFRLNJRWLIVVXYVGENEQRCHISMIUIEDJRNYSJDVTAFYWHNLHOQIFSNTAQZWZSCWCPGDZKDMUUMKECCXYHYADFCPKPFXFAGEWTNLAKNPAYTVSXIPOCLTMEVRWELAUJYHNIZBVPJGFEHURIGOKMTGIHUESJBHFKOJR");
    msg.goal_xml.assign("QGVZLCOUEMSBJWAAKUYRTNWLUWJOFHAPZPDKTFEIFEUAAKARJXCQHMXAXIBYTCGQVXIYAIPIFHRFPVNJOOXRQQGWCBJUBGYFTTOFMOKWSOWGBTIQEYCNPDMYDBERVXNZQDPOGQTEBOWHBDQZKXHFRGIYPSPCHJAIPVXSCELNULENLPVJSCMSIZFDWCDMBXYWKGLZSMHIXVDDSVJYMREJ");

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
    msg.setTimeStamp(0.808557121725);
    msg.setSource(9456U);
    msg.setSourceEntity(39U);
    msg.setDestination(49480U);
    msg.setDestinationEntity(36U);
    msg.command = 72U;
    msg.goal_id.assign("DRVFXTUABFAELSNMMLGPGQWFDHRVSZZXSZCOCLXNUKUJHWNRYPLNLEFBFFZMNPPLALSXITHKNIDEKKTSPRJUJBHOIUGFMTBMGXDBTQFPVZRNEPHMSGHJZPHUVJUYCCYKEQONVSQCTQCRUQVAEVRVTWKFEMRILAT");
    msg.goal_xml.assign("ORVLZZIGHXBBEKZPDSZMKHBYKIGQEFDQMFHYVEDMRAXREJQPDGDTFFWAGLPIJLZWJMUVWDGGDGUVFKTVSKAQQBYTLKPYXPUOYWAUIYICOENTPNIDAIOVYTBHEZTFHNMISUEGZDH");

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
    msg.setTimeStamp(0.828778873378);
    msg.setSource(40424U);
    msg.setSourceEntity(170U);
    msg.setDestination(5388U);
    msg.setDestinationEntity(94U);
    msg.command = 91U;
    msg.goal_id.assign("JNBOTIUMOBRYFSTCQLRSVOYMWRLGBHXADDCXPSUELZAOBEQDWQCXVQGLKKZPWAJHVYHUWLQCNKDKJXKYHZCVKNJPPLPSECUMCAEQCELMBMMFJESXNRPKKEOEZHKHYBWSOVGIQDBDJOAGVJNTZFJYDSRTXGTDPCFLOJPDFIUPXTKIDAGWZRIXEHRABOMAQSRWZFRYWZFIINCUGWNFNEMVXMJUUAWGGFTAHUZBFT");
    msg.goal_xml.assign("PJLGHATDMPPIJFGXQRHSBECNVTNTBKIHPFTTPDDXGYFZASBCGUVXAIYTMMOUSCECNWBCUMRHJAYJJPPZWT");

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
    msg.setTimeStamp(0.915951989573);
    msg.setSource(26380U);
    msg.setSourceEntity(123U);
    msg.setDestination(22922U);
    msg.setDestinationEntity(87U);
    msg.op = 171U;
    msg.goal_id.assign("RCRVBMAXSRAQTYNWSYCPIFDKCVGFVOBVSGWG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PEOCZQJAWHHNRPTSASBVKZVDPIGMDOUBGUOVLBFYCLHDQNZUNTMJATUAYOLYPIFMAIJORSVDEEMNRBCYTEWVNNEKQGHGCJXKHFGLHSRBUZALATKJGVYWSDXEIUZXNZFYBQVJPVKSLRGFLRUDCHXWSMQOBECPARWNUMWTEGRBDTVQTPIHBOPONKKIIDGZFAASZKZVSYKCWFXDMEIXRJOTFMWTIXCPKMQXCDFHULYINOQJL");
    tmp_msg_0.predicate.assign("ARJBOAOEYDPWSTVRUHBVBHFWOTKXDPWXFJDPEOZNGRWBLQVLAYGLJMDTTKJFBGHIXCICGTBNUSSCXQZTADHWMOFPCRNHKJJQUVRAEQMECPBVMLSEQUMIBRSZWZIWLGZJGQBXYOTCSIVTYSDFOANFFZAPKKWZQODRXMGPZMQCXXYYEKBCUONUXDDFNCJEGLLQIHAMKHQHGARNKVHFZLMIOEILMNXHNAVPRNUSYKGUYRWPYZUTSUYJIILTDEJE");
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
    msg.setTimeStamp(0.822994529847);
    msg.setSource(22372U);
    msg.setSourceEntity(2U);
    msg.setDestination(48958U);
    msg.setDestinationEntity(88U);
    msg.op = 104U;
    msg.goal_id.assign("WCBWVKQBEUVADTPHQSZCOLPXFGWHJKEKNLSFJJVDLGZRUBZJWXYGQMDFIBOZAWEWGMHKUFRQYZDCXCNTUMIOAFLJPDCFWMIOAYGPRNQTUXONPRYVOTSVKTLXPAVUIHLMMEHKTBFXXZONRRHJTHDXVKWKSKDSMJSLXGBSYCGNEMOSETGUDFIICEQDSYMNLAABFNUAICUCERJBPFLHIQQBLYBIPZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JMEAEJEDPYLAXAGSTGIRIOPSZFOKKXIJADFBVWHGEDKUCLXDCGSTMRDYQNVDFCDFBWHCZXOAQHKMNYQEEYQUUVRXPGYQUCVTMBJ");
    tmp_msg_0.predicate.assign("XJKSJWYUJWKTBSBRJULSQRAVTEKMTSZWZJPLHIONDMCITUPWGAVZRHBOBDXYVRIPXTVUTXEGDEUJSPVVPBTIKAUZFLSYKOWKHYHDNINQOCHZHLWBHHZJAIDTFLEYMEHRGWQZDYXOJEASS");
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
    msg.setTimeStamp(0.19908018283);
    msg.setSource(64891U);
    msg.setSourceEntity(47U);
    msg.setDestination(60309U);
    msg.setDestinationEntity(131U);
    msg.op = 8U;
    msg.goal_id.assign("KWEKABQSEYCVIKGCHLJOBWDTVDLQJUUHXJDDHZWXTZNLDXHIDVIGNVDCOFTTVSMYWZKOAFWNLFJSXSMBMTCDQFAMYYKFRQBAPFUMZUTUTGZEA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UTHTJVRFRKCBZKPMQAJEAMLSZETBJMNANJCWSAIOXCTZBXYVDPIHBGMFNBSLPXDYANYMOMEIRWYXGWRWPKYZVQMIFGJFPDXFZFYLHRMZGCSHOLUBQQRTWQGSEATPYWWDCUIDWCHVFEBEVYQPMLYHUNZCNVLNLVPKIHOQJDBVXEXQKAJCQCGTF");
    tmp_msg_0.predicate.assign("VDPQBFQBTNVSCNYETNYRLBSDGRMCHKDTWZWGNVGQSXUWNWOLISUGFVSGHOKZKLDJMFOJYDRZAPZPYDERFRDQPBXWOHARVJKXYHSAGPWABBNEJXGHCBTICDHTMNKBSWJTYJCF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UFRZVYGDIRJKEPNOJZETXITAMWUGPMCNQVCESTCENRYZLHAFJNKORFEWTMUARNKCVMCQABXXPVFAUDUHGFYLLBHRSBOMLQKBSXLWQLYRXWUDFZSRDSDKZLFIJNBZBEUNLZSQBJPZIPGOKCHJWVCITMOEJPOQMFJAAYWNCHAPLYXODVSAWDGYEHMAUQUXCDWSKSTWEENDVXWTDIKRGZKHFQYXSYQXGQJBFTGBITOBHUGLMNIVOKTCYVIPPGMHI");
    tmp_tmp_msg_0_0.attr_type = 82U;
    tmp_tmp_msg_0_0.min.assign("WTADVJJRPZXVYUNBJVLHIGBWAUXFINBVYMPPFQIBUDYNNAYVUUKJRGJBKMQUOUVMDJJKIXGWBYFSRHOWMHMDOUWKQI");
    tmp_tmp_msg_0_0.max.assign("TKOYNQPFJJEWUYKKCLHSMNBILBYFNRYPIYPRRAHMPIXJSSINSUV");
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
    msg.setTimeStamp(0.109140271149);
    msg.setSource(47668U);
    msg.setSourceEntity(20U);
    msg.setDestination(16594U);
    msg.setDestinationEntity(19U);
    msg.name.assign("ARUFVPIULYFIDLVACGXSMVBSHODDHEENNALFLCBIGQCAYSOHWYSJLVQZJVNRGPJIJRCGPJJNOAMYEURTQIWSWAMPCZEONTSSUEJTKBAXXEWDNVTFSCHGLOTKZRFO");
    msg.attr_type = 142U;
    msg.min.assign("HSVXDLGYPYJJSCETUWOEJRXFNRMZCZJUIOTWRKJWOFOAEUWXRMIPUABOVXSLNHRTVAQIAHULCZCQNQVESGZBBBKLKVEIMGRDOQZJVAAHKGZDCTPKIISTPLILYXFHEFWSUDOIPC");
    msg.max.assign("JSCBQGAFNCSAENOEQQNCDYEGLHKBOSKFKAOPCDWXBMOUICTPXHVTMRFBPIWBRLRXWGEKLSWWT");

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
    msg.setTimeStamp(0.599129935837);
    msg.setSource(34151U);
    msg.setSourceEntity(43U);
    msg.setDestination(16946U);
    msg.setDestinationEntity(105U);
    msg.name.assign("YJFURPHFEXAKLQWUFYWKKQSOERQDKGS");
    msg.attr_type = 118U;
    msg.min.assign("NGMSZDHDOBLCXYBWJTTDB");
    msg.max.assign("MHSKAVMYEDRNPGHGLLGNJQBFZOSINCAUOYYOIDLODQKQLLQVHHIVPXXUWJJDXIXPVRWRKZFAMGWZASFBFCDNZBWVX");

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
    msg.setTimeStamp(0.932924391199);
    msg.setSource(14737U);
    msg.setSourceEntity(175U);
    msg.setDestination(23987U);
    msg.setDestinationEntity(55U);
    msg.name.assign("YIYUQGKMTCJRSYLEQHMPXNZJCBCSVMLYCXRFWINHJRXRVBOIVQKULFIWGPIQJFDWIYSZKUNKLWVMOXYVZP");
    msg.attr_type = 175U;
    msg.min.assign("HUVNRBLQWMDCDLUNSNAQCPDHSD");
    msg.max.assign("UCYOJYZXRXJFDSZIJCWCZMAGYNRHVRKNVITJSJOAHPQYXTKGRLFCZGMVOAFYDKQOZSSUFCCFTTEMUCXJLCBJQFAPQDZLLUBBHYPCNWZIDUEF");

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
    msg.setTimeStamp(0.175821204555);
    msg.setSource(11138U);
    msg.setSourceEntity(242U);
    msg.setDestination(21496U);
    msg.setDestinationEntity(172U);
    msg.timeline.assign("EBDBWZWMXQSBVOBCYQANYQSPJOZMAJXKZTMKUMN");
    msg.predicate.assign("DNZXKWAQZHRJSBIUPMZMQQAWMONDITLVULUOSEZOCLK");

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
    msg.setTimeStamp(0.50270231847);
    msg.setSource(426U);
    msg.setSourceEntity(16U);
    msg.setDestination(13264U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("BMOAJFSLXTLFYOQFOKEQDUSIDVSASBRCIQRUXMOPXYNWGXTADVELAKNNCWRIGBEZVNUWVBHFLQDPEYQBUPUFXLRMLSBTFXKISMZKCYVPOU");
    msg.predicate.assign("BGKXPHHNZPKSSTZEWFRGSNBCCKPLOTKDMHEGELMFRHBXNYWEZQMBVVOHDJOCV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MNAIYODHIGBUTULIDXXZUXCPUPHZREWFGIAWDVIJCPJQYZDGZCORPNNFRSRQLITPIDSLBSHNZCUMT");
    tmp_msg_0.attr_type = 147U;
    tmp_msg_0.min.assign("WNQUHDCVOQKAVJVWXPBDMZSRGAASHLMETJQXBVSHFT");
    tmp_msg_0.max.assign("CYTAKBALVGSJJDQMNOFVTHHNBGPXBOWZZZZYTHMTUSKL");
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
    msg.setTimeStamp(0.193325138663);
    msg.setSource(24315U);
    msg.setSourceEntity(8U);
    msg.setDestination(63028U);
    msg.setDestinationEntity(125U);
    msg.timeline.assign("EGLMTUYEVTBLHSJBVSEWYTTXRPCHUMIITMGBLCAMKFYOHLAKBPBJSQAMFFXFCEEEFQVYNDAFVPIZJFVXYPCPBBYNRHKRJIKO");
    msg.predicate.assign("EIVHVDTCJFDRNGBOHEIONPJRWZMAVQKYZEDQGTJLTIRHZODYDSBYFFNPYHXYLAJVWINEMHLBMRREEITCNWPNUZAHRSJRWN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("MNVWVURIZEYOWSEXJGTEZCMFZXFJIVTLRJJO");
    tmp_msg_0.attr_type = 105U;
    tmp_msg_0.min.assign("NDMAGUDJPIXENGQAEEGDDHCZEIMTFAMOUPSOQTWBHUAZCCIWJWPHGPTUWPCGKFKGBRRORLLYZOZJIYYKKSAWUYFJVJXRURRDZRVBSMJNHQGOTKQASJMEIBHGJYLCPOLVYLRZQDLGYQFZWYSRRSYHBWKIDHIQTBSXDVIPLOTFFUHVENQVBPSEZLTNKNZVDUKNXONEFMMG");
    tmp_msg_0.max.assign("WJYBPQJPKDJPZKPUXVQBLUNFQIOTMEXFSEBQHJXICIKRNIABUJQDMGFCLYYLNCVGWNZXNTVWSYOFTITARGH");
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
    msg.setTimeStamp(0.155195008424);
    msg.setSource(7970U);
    msg.setSourceEntity(144U);
    msg.setDestination(54400U);
    msg.setDestinationEntity(135U);
    msg.reactor.assign("FVOISJTPCUZUMNYEIQMDGMNCDZGFFBPQPZZQBPIHMWHFWHOEZKFEKXMFGTLUYBHEKWPSOZJGWKDDCRGRYROEUOSXATRCULVQXVDXMSNLHVWLQCTOKIMSYLDAJGOUQEHZILJAXZCAYNOMGKNJAVPVWFVLALHBTCIVGEUWODHXFWWIBJQUIPSHMRMGBBXJWJACVHKKQXSUYPSZLNDASBQKRQFCCUARXTNFOPEJKSI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BPCZMAGVCKIGTHWQEDHRXIPCOOWYEAQVCKDDLZGUXLVMOYVQHUFLIIZECWONUPEBRQJHWOBNOEVZERDPOJKHXIMKTNHRLHRMGPDRAKDMVZTSAASYXEWVDSWUXVSZQTXRSNGZPGVRUUAYNLBVTRJLBNSQPQZKJYPUGWNKXQOEFKLMKIFMCHWLOHOQT");
    tmp_msg_0.predicate.assign("RDIZHPQGAFUABDVYJLNIWTUKRYMMGRAYIGFGSNNGVVHTHAJXAJYYMNTKZSSPXEUSOWMAFCEMJUSPUIOBBDYKRBBSWHNVFFTQZTOXWEJPZHGOZEWEQUDUUAESORWLPGBNRIOXXEQIBZYSZUMDLCTXGPWMCRXOKIVFVBMKRDVDICLEHYHKIZPUBCWQTAQLYLKJDCOZCLKLTQGKJGHHTNARZEDVXHAPJNIJLMTBLX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HFREDMLOXUONJVFKSLNNBVOVYIHTECPZIZHYCUQUONKVWQYQOXRPSGEBMQLGOSQWVBVVNFLKA");
    tmp_tmp_msg_0_0.attr_type = 1U;
    tmp_tmp_msg_0_0.min.assign("PLNPOYAHPYFNLVIEKMLUJKSBQLKFEVOTWOCJJSDRXKJKZEQPOLAGMVVBJSKJDDIIXCPDKRUDOLEIAOTEYIMFXNVHHGMBUWGYYGBYZEBFXUNUXDLOPMIRRTQWMJTVRNPNRCHTOAUWIQQHJZGOUGFDLTGNTTEVYCQRCCQAUFSXDZJLSW");
    tmp_tmp_msg_0_0.max.assign("MBUOSOQQTSBBNBKWMKAAPTLYMYJCIBADWFLQMFSJGSMFHAVWPFNBOZZ");
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
    msg.setTimeStamp(0.591570108733);
    msg.setSource(14131U);
    msg.setSourceEntity(189U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(141U);
    msg.reactor.assign("BIATZAXOCZVAFGQR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YLVTJDEPUPJYUHCKEWFNCXMSQGHJTVUCPAFITEGMHAXLBKOBZPYEFYJVCDSWWOZGLXLTWZKBHWSPDISFNABCJAVJDJIWSVNZGVWMSBUKRUFRZOQKZMAXNRMQDVFFGPGQLHWJEKCKBGLRRJYLVWIBVUFYGQOMDXGTTYDZUSDVEEXFA");
    tmp_msg_0.predicate.assign("UYCJTNTDRYZOVNPXD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BIIBJQBFEDQTDQMDLVKKUYXHZRDUFGUJPHVSBIXKPFWAEHFIFOLVRLVIAOCCDCKOWQJNXXTBTLTJOZFWPMBALYHURIQNMNVPRSUONMVYOUNOLGLGBWXQUZPKYEENQHZSRSQFVEAXTJOWYSJDFPRCDMZPMKJXZDSGNSOTFZCPXNWWLYJI");
    tmp_tmp_msg_0_0.attr_type = 59U;
    tmp_tmp_msg_0_0.min.assign("IVOCNDYTVNRBMFIMXUJRZOMTEASJCGDVSLSBXLEKVSPHBYKUAKFBXEGHGVPRPYZFNJCNFPMBKTZHDBEWJNQWAPVKFAUABWDBWGJWWIMNSJTDUQXITRUZMNJDFHLMGQPLHCPZONUXOEOHAQATLQKKIYEHMXHKTAVSAGQTAFOZSTLYYQJRVURCNUCCWJUGDFBZMORZEGYXOIISERJHRSXMXURVIWYQ");
    tmp_tmp_msg_0_0.max.assign("RTAYQPENQVYFQTHCWIGLIKJDJGLFMVDTLYUMNIAREPXVOWUCVZAPYHLKYYGJXKNVPOSMDHBAAWRNZHKZBOMSEXCDWWKHITXNLUQLWKKGVMVEFRRROFQNUUHZNSOQCWGFXXGKNBOWPWXNVBGHCMSEGCIACUOILZYSITATRZXUBNBIFMSWHMKJAYZEEFBTESSBFLZUQV");
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
    msg.setTimeStamp(0.10004563076);
    msg.setSource(51108U);
    msg.setSourceEntity(150U);
    msg.setDestination(30441U);
    msg.setDestinationEntity(135U);
    msg.reactor.assign("PIGWVAUDPIFRXUPDSQPRSBIHFAKTMXCNBNHAJBLPUMUAZPESZZOVCNGLIZAWDYCEAVKIUCPWROSLNAYFFZYBSXJFTHYLEGRDQJTAHEXOWNCGPNTBSFJYUMQOJNCILROPZCXXCBKVJMMZKNINDTUKVITFMTOIWQODWQHWETKGQGDCJJVWHRLMKEPBHQQF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TWNHZDFIWGREOOZCYEZFAXNMLBCOEYOMIQUXIJTJLGQAGETKUEPEOQWAZUNLVQRLPEFQYLSTXRYAZXNSZIUJXLTYQUMNOGNDHRZNHNGLBIFVPODUSESAVRXGCSQHCWBXMKHJZFJOCYWCYRVDLTFJXBYUHIKJRWHGVXCZFEMUK");
    tmp_msg_0.predicate.assign("RAZGAQRJNQAEMLVBXTSXNSYBMODSVJRDCEASHJLBPZVTUTRRQBVGJOARXHTCZCELKHKDGXRVKEHIUVHUEBQJLPMWLHPWOPQVMYLJQTCMUYGWZIKRGOFQNIFFLUGCMOGBDJIFNWSUYJHXMHMNJSAOW");
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
    msg.setTimeStamp(0.560688201041);
    msg.setSource(57266U);
    msg.setSourceEntity(132U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(234U);
    msg.topic.assign("DUOXAENJXDOYEMDGNVDBGQ");
    msg.data.assign("PBEEZTMMUCTUPVZOZKGAYVUAOXPQHMIPNWBXLADEZSFRFUOPSONKGOYVVBBVKYCLPKNVSE");

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
    msg.setTimeStamp(0.339540259951);
    msg.setSource(51573U);
    msg.setSourceEntity(119U);
    msg.setDestination(51577U);
    msg.setDestinationEntity(247U);
    msg.topic.assign("EKYKACQQPTFECERSTVNIHSIQYUHHRDHNTJMFTEERMWKYGQO");
    msg.data.assign("CSRQDJZDHDFRTZBUKGKAUIQLIGNNNUKVNSDWLQAEPMGLYXRLEWLFPQZNAYVWJLMDUEAQAMWJYXFMFUKXLBUHRSKXXIFYCIRVWUHBXKEQHOBFLDXQFTIZVFZBKGMQJOHOPNYFDBPTMQYCCLIASLSTOZOVWTXGBSUKWANBTCIEPRYMKBAAYCIJDTYEJUVQNESDGVKHAZTPHFJNVUOCRVHGGVSJM");

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
    msg.setTimeStamp(0.977813022427);
    msg.setSource(20529U);
    msg.setSourceEntity(156U);
    msg.setDestination(25322U);
    msg.setDestinationEntity(51U);
    msg.topic.assign("QRVIKNYZGGTTOYFINURDNQWELUSZARJXYXJVEJWPWEEUIEIESZFPIMISVJHTCNCKXCNBDGKHPZIGZLSDGFBDUAQWZLOLWRMLBDXLFCTGEPYQWFFXTBIFOHEZ");
    msg.data.assign("PFHIZXCAWAEDHJIICTQEPDQQBQWYWGOXQUEOCEFPXGSKXOMIOZVMCLPSAZFIUHPMSDNZKHWNBHSZYZVTXDYKNVWAJJOVNGVFESUVYVCMMZRYLXFOWUERXJQXBQMUXUFZIGDFYWGCURKHGZSSN");

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
    msg.setTimeStamp(0.997815511589);
    msg.setSource(16556U);
    msg.setSourceEntity(212U);
    msg.setDestination(27917U);
    msg.setDestinationEntity(16U);
    msg.frameid = 30U;
    const char tmp_msg_0[] = {-47, 44, 61, -35, -91, 78, -52, 53, -58, 30, -5, 37, -107, 111, -123, 63, -16, -110, 97, -119, -98, -34, 93, -1, -22, 47, -50, 122};
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
    msg.setTimeStamp(0.491431572123);
    msg.setSource(1685U);
    msg.setSourceEntity(253U);
    msg.setDestination(59883U);
    msg.setDestinationEntity(27U);
    msg.frameid = 28U;
    const char tmp_msg_0[] = {108, -28, -95, -29, -22, -28, -93, -100, 77, 126, 46, 69, 95, -39, 65, 94, -86, -6, -15, -52, 93, -29, 51, 59, 103, -126, 78, 8, -22, 85, -118, 55, 85, -72, -119, 34, 126, -76, 89, -110, -48, 52, -64, 77, -25, 25, 108, 42, -38, 23, 114, -36, -26, -115, -100, 73, -87, -54, 31, 121, 91, 31, -61, 46, -83, -40, -17, -119, 114, -46, -22, -63, -25, -106, 16, 64, 66, 91, 21, -76, 51, -120, -1, -35, 7, 104, 113, 120, 41, -61, 7, 6, 91, -78, 45, -116, -1, 30, -92};
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
    msg.setTimeStamp(0.311062698241);
    msg.setSource(47015U);
    msg.setSourceEntity(124U);
    msg.setDestination(59711U);
    msg.setDestinationEntity(124U);
    msg.frameid = 49U;
    const char tmp_msg_0[] = {59, -99, -79, -19, -10, 67, 117, 11, -58, -2, -11, -107, 86, 112, 1, -98, 25, 51, -126, -95, -21, -89, 82, 40, -69, 122, -104, -127, -31, -69, 85, -43, -6, -62, 69, 120, 87, 122, -58, 104, 59, 3, 17, -105, 108, 29, -8, -88, -100, -11, -94, 101, -5, 14, -98, 45, 82, -10, 1, 68, 26, 77, 26, 24, 81, -113, -67, 103, -76, 34, -32, -25, 43, -66, 0, 32, 14, -110, 48, 59, 86, -105, -21, 39, 54, 27, 17, -33, -63, 6, 124, 110, 79, 61, 19, 58, -35, -4, 66, 53, 20, 14, 108, -127, -113, -72, -34, -37, 56, -30, 123, 108, -92, -38, 24, -68, -105, 100, -76, 103, -46, 49, 109, -93, 24, 35, 102, 100, -86, 79};
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
    msg.setTimeStamp(0.861756143136);
    msg.setSource(13589U);
    msg.setSourceEntity(205U);
    msg.setDestination(2731U);
    msg.setDestinationEntity(188U);
    msg.fps = 76U;
    msg.quality = 154U;
    msg.reps = 178U;
    msg.tsize = 31U;

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
    msg.setTimeStamp(0.579572069538);
    msg.setSource(23465U);
    msg.setSourceEntity(254U);
    msg.setDestination(65344U);
    msg.setDestinationEntity(206U);
    msg.fps = 169U;
    msg.quality = 105U;
    msg.reps = 22U;
    msg.tsize = 42U;

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
    msg.setTimeStamp(0.654226129308);
    msg.setSource(21965U);
    msg.setSourceEntity(152U);
    msg.setDestination(49117U);
    msg.setDestinationEntity(172U);
    msg.fps = 91U;
    msg.quality = 246U;
    msg.reps = 184U;
    msg.tsize = 211U;

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
    msg.setTimeStamp(0.708699070184);
    msg.setSource(39751U);
    msg.setSourceEntity(48U);
    msg.setDestination(282U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.946760015305;
    msg.lon = 0.456155557946;
    msg.depth = 145U;
    msg.speed = 0.0287937239097;
    msg.psi = 0.357871955308;

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
    msg.setTimeStamp(0.628657031544);
    msg.setSource(10095U);
    msg.setSourceEntity(242U);
    msg.setDestination(22636U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.892170425089;
    msg.lon = 0.00444695105996;
    msg.depth = 14U;
    msg.speed = 0.778322369305;
    msg.psi = 0.655195985119;

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
    msg.setTimeStamp(0.721577794451);
    msg.setSource(61337U);
    msg.setSourceEntity(131U);
    msg.setDestination(445U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.970407461717;
    msg.lon = 0.296862308976;
    msg.depth = 34U;
    msg.speed = 0.276168977591;
    msg.psi = 0.216239728968;

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
    msg.setTimeStamp(0.0143672947722);
    msg.setSource(9638U);
    msg.setSourceEntity(236U);
    msg.setDestination(35250U);
    msg.setDestinationEntity(119U);
    msg.label.assign("PAFQRNOKAXULVVZFPPUQZZOXMMTTWWGBYANSFBVEPHUBXZVANRQJGUPFZYKGIOKUOVIEEJTOMYHLEXGISWFTWDCJEBKBXHARYYWYHSFNJLHHNIOSIIGZVWYEOJGIWMATMJBCNWVDBCXAXHDHGODANQSHLSKGVRWADENRYPFYCVPINKJUGDUHEAOFFZQXTTSKRCJ");
    msg.lat = 0.58755695373;
    msg.lon = 0.105585672554;
    msg.z = 0.10745067928;
    msg.z_units = 124U;
    msg.cog = 0.00574111619985;
    msg.sog = 0.304294116211;

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
    msg.setTimeStamp(0.741522231491);
    msg.setSource(62972U);
    msg.setSourceEntity(182U);
    msg.setDestination(8215U);
    msg.setDestinationEntity(32U);
    msg.label.assign("AUBFPIDTYDAWXTCXPIUBLFRRSNVBJWSGREKUDAYZVZYXSQGKPGPIUNRATAVONIZQCMLEGGDYSOQMT");
    msg.lat = 0.585701702464;
    msg.lon = 0.919343157974;
    msg.z = 0.761594461226;
    msg.z_units = 204U;
    msg.cog = 0.682855266863;
    msg.sog = 0.635417444068;

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
    msg.setTimeStamp(0.263750285585);
    msg.setSource(59781U);
    msg.setSourceEntity(96U);
    msg.setDestination(50833U);
    msg.setDestinationEntity(12U);
    msg.label.assign("AIJEHQHXMNNJTVGDEPAUPSPYCBD");
    msg.lat = 0.483317267906;
    msg.lon = 0.417260821608;
    msg.z = 0.0462642415715;
    msg.z_units = 10U;
    msg.cog = 0.453988913956;
    msg.sog = 0.569987545047;

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
    msg.setTimeStamp(0.855856076898);
    msg.setSource(29703U);
    msg.setSourceEntity(174U);
    msg.setDestination(14714U);
    msg.setDestinationEntity(232U);
    msg.name.assign("RUFIRPDVUNCPAUKQTUMYWTCOEBNSCHNVJJXMEYLJIQIQLPCVAADTJUDYPWCXULIJUEQBXMFYSZECPHQPMWDXQZRKSLHYTQGOGDOPBAEZXHLNJNNABYJFSQRKGEOWSFWQLHNYFVXSYLKDPOATCBKYIMOTEYTZHBNOAGFQDIRPMMXGMHBRFWKMUAZVHZSOBVRVGBPJJWZ");
    msg.value.assign("GXCKULHYUCCUIEWLVWRYTCZIQDFBZWIAWVBBGYVAAKTBXMXG");

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
    msg.setTimeStamp(0.116822585281);
    msg.setSource(25873U);
    msg.setSourceEntity(240U);
    msg.setDestination(2442U);
    msg.setDestinationEntity(107U);
    msg.name.assign("REXQFMHTKDUFGAJCQOPYDYOZIEWOQXPEHGASEKLIXLQQVFTSGMRTTLWCBSMSPCHVBBYVRUMILNZZPGGASAPHFBJJADWAMVJEMPQNZYOUEBLROOAYXMOWCKXPUSUUOQTOCAUFUIPGDNRICPVDNTG");
    msg.value.assign("ENIIYTTNEFSKUBZIGARQOMKFRDHAJLVXSSBZVIKLNWTPRUUXABMXPEFFROCDBRVJPZPMUJKRHNLQSJAZRZQGUELACJDQRTHOLHNM");

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
    msg.setTimeStamp(0.682798277024);
    msg.setSource(24675U);
    msg.setSourceEntity(132U);
    msg.setDestination(44896U);
    msg.setDestinationEntity(228U);
    msg.name.assign("UQXBQVJKDCFSZBSHPUTRDYYXDATCDUZGNSVOYJTRYXPVPHXXEVWPYIMKUUNBVIMAREGLQYRBUOKNOOZWXHAPEEMYYMKMNTFBRIBKGZHIWKGLHQNACCLVMVTNEVLJIKIZQBSBHFLTLJGDHGOUQZUZHNFPXZPCEARLQNGEBAYJNEIWUPDBWKCGRAXFPIZDTMYCFOAXVTSFLSPJJJDZMQHSDAGWDLSWCKWXIHIRFWFCNQRJWTF");
    msg.value.assign("DPHZZYZBCYMVNLJWJHWIKDWTNAQCWLGPJVSTUELKQBNBOXOUXGEMMJJDSAHGAMTIIHDUPRFZFQOVHGIBTTGXZKWQNHRYAMOLNURMGMYOJBDZWQIRQLMHLGCEDWYUBQACVXZCDVCDKREAGYRVPSUMUNOBKTRHPKNVSNSTOUNEMGYEPLKXIXJFCPYHSKILFFVIZKWPOBXWXFEOALAEJYQTFEZBQFAUJLIERAHYSWGSDVVFORDQCXTPBR");

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
    msg.setTimeStamp(0.0296925017535);
    msg.setSource(51272U);
    msg.setSourceEntity(121U);
    msg.setDestination(39795U);
    msg.setDestinationEntity(29U);
    msg.name.assign("LVOGTXKFQOUUFJNGBXQPAKKEANZIHXBIPFSKTOCEUVOQRHRNMZNEXLWVXZIVNWRXTBJAIUZYEWFHPJYCKNXSRGWCBAMPYCEBPNQBMTZKIPPMTMJH");

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
    msg.setTimeStamp(0.838712578213);
    msg.setSource(47310U);
    msg.setSourceEntity(8U);
    msg.setDestination(8092U);
    msg.setDestinationEntity(114U);
    msg.name.assign("DONOOZVWCUYNEFUPRRRSAIHXVYXJEVNBAMJWJMKFCFHEHGRCXUADWFRBLQUNULFYMN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VWLLAJSKOSNONONQWIEZMPRCISRJKLZLQLIWTNLKEZMUNSCOFSXXIAHUYUGAJMUFXSUURWQDTFKTBJTRINQLHWYWGACVDSKYC");
    tmp_msg_0.value.assign("JRMYVTLZGWRPGZYDHLINHWFANOFGIIIPJBZOZQKPVFTDLPDIJKXRKWETMMOQBKEPITIJGMYMHVIJYMATTXYAHADUALLBNSRMQOSRKLINCBJCMVKBGXGQQHANEZWYYNPCBJXRPGCDURSWDSFCSVUQGCCNFFZWLVMLBUSXFVQAWSAMOEPEJHNJIKCXATLDSONUBZQNLWGFWRXEVPZDKDHTJOYECUOFEOBSVSCYQUKWXGUEFYHO");
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
    msg.setTimeStamp(0.726085866913);
    msg.setSource(36202U);
    msg.setSourceEntity(103U);
    msg.setDestination(37722U);
    msg.setDestinationEntity(213U);
    msg.name.assign("RTRCIZIOEJGZOXUWLOQYVWHQGXOQWMONUDTVAYFKFHCNRXZQXCEJMPNNWDLPQSCSIJKMNKRHDPYBYHPLLBCWAFESFWDAEJGGJYILGLMHGLTABUMBDNMZSOIVVWMFZMZXXAFESNPIAOBWZCTERKKTUQTJYJVPTJBUHWFGCFFNTUYKMKSDLAKPIZUUYIKUR");

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
    msg.setTimeStamp(0.671449294976);
    msg.setSource(2173U);
    msg.setSourceEntity(197U);
    msg.setDestination(19533U);
    msg.setDestinationEntity(166U);
    msg.name.assign("TDIBSDQEDDSQWSCHHJVWWUKIYOUMITMDICEBDSVFUFHKWBNUEYVPNONBMARRQRLPCFZVIXGYTHNXZVDOOHGAGDYNAFQELRSAWEOJWCZKXGSHQXRNXMYEFOLVLQTXYNSXLYBLHFGBAAZWLPITKUFOAMERWCKJXZJTBZUEZIVQNLGIKGMQTNLRSACOWFXGIHHCFDNARPXAEZVJWPBIKFZMBMQYZPJVTKMRGSTPMDHSCULJPPUUGRCQJJJBUK");
    msg.visibility.assign("JMCFTBXYXMRBHJYDHJCIAWARAMVXFZHNXYG");
    msg.scope.assign("OQDFUSCWDYJSRHYUWNDLQHISGFAVUUAKHNEWOVRIJMRBYAQWNGXXDLARLQNBZTDCZERPMXTLQBNRTTZEPPJOEGBUWEFXUWSXXDOAEFLYNKONPNPZGGNHPPLQSTWRLEVCVXMLQCIGCFTWQWHTZHZIXFSASMSLOPCBSITJFIZKXAOSMRYAJCHRCVIMZNIPRUJJKKZKKQFHTAMBTMEKVIPEVDYDZOULBOVJDXGHCAE");

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
    msg.setTimeStamp(0.15345271622);
    msg.setSource(25891U);
    msg.setSourceEntity(27U);
    msg.setDestination(15313U);
    msg.setDestinationEntity(247U);
    msg.name.assign("KLHJWICYOWKIFUXQNRPMOPF");
    msg.visibility.assign("YKFMXNJOPXLSFZWYGYSWZCTNNAZRHDJGTDBMOKNOCLSEYUHVORKUQUFWIDPZODFAVHZJVPOSGXLUDTIIVVGEHNISQYZAYFTGPQFRNKFULGDWMCLYHWXXBNRGVHQFOVWBVKJITNAWRXQGBCMPQMTKEHDKQCRXJMDPOHPLKATLO");
    msg.scope.assign("DMTNTJPNEANKDEFLKKBISJUFOLBXWNIYZYRLVAWQLDVDHSIZRCRQFNHPRYGGAEPJYLECHQYYSGBKPBHCHXOWCWGSVBYKWUPPKIHDMYPTNKUFUIKAPMOOVZLRXIDKOSQLUZQOIRPTEUHRIZXDHULXTLIVQWNRKMSUQOQUAZTJOMTVPXCXSNVEACWYFBJGGJMXJGWEJZRVEFWCMZLQOQWTHNMYCHFABTEDDMGZ");

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
    msg.setTimeStamp(0.193357905557);
    msg.setSource(34569U);
    msg.setSourceEntity(86U);
    msg.setDestination(24302U);
    msg.setDestinationEntity(226U);
    msg.name.assign("REHIIHIRTBMBB");
    msg.visibility.assign("ERUVYETMUTPBZQGGFYCJDYWOJBHDMXFQMVKRXOQQTZSSCFJMDKNQIAEXWECBJDBQCKXNXIOKSFLBFXTNLFUVQGKDOUOPMRPOWRDKNJUA");
    msg.scope.assign("XGPNWDKOWPDXBCTUGWIULSFOAPIWVANDGKPEKJQEYLIO");

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
    msg.setTimeStamp(0.681119870783);
    msg.setSource(11438U);
    msg.setSourceEntity(106U);
    msg.setDestination(23061U);
    msg.setDestinationEntity(19U);
    msg.name.assign("NKRZIAJVQTFHNXRJEIYKUANWTZBGGGRCPMVDWIFGCUYUOPBJVILMRFNMESHNFZLYQCOOOXEDDDIGWDXFEPSVXCBJNKOVKKIQCYZGSEMASDIBHF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SKNMRFFEBZCKORUGFEBCMQSHDVJEKCNJBSNTWDKNFAWHODQYUJWQVKJNGAGAGQLGKVPIEIPXHLYBHMCHMZPKJWORMXUJAMZJXDNIABDPOCNJKLXRWCFFYKUKFSEYMYVDPLCORXCZHB");
    tmp_msg_0.value.assign("QUFBJXOGTIJFPSSASHVHDFTMVPBMODAEWEANRSNTTBRYIEWEZXKBRNPIUJPGWUNXXVRMTOCBNNMHKGVRFLQYDHYJCQUINZAYSOCIIJTORTAAIAPCQVRHGQJDRRDKHQWWZXLDUNLLL");
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
    msg.setTimeStamp(0.164902411454);
    msg.setSource(39633U);
    msg.setSourceEntity(74U);
    msg.setDestination(48881U);
    msg.setDestinationEntity(2U);
    msg.name.assign("DVEOTYACLXCARNHNDPBVJWNUPKRYMQMNTRRRXYCOOJJAZCHTBDUKGZMLNQUESDZGLMNSWEBLAHQLYJSJXLSUYWJXGEFF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YXGGTSNFWSFVAVUEYPHNJLWUOVOJWTHBDCPOQKNRDZPTBEZIBJLQCCASAVCEPBDIUCMWLLNFUWUEHGQWZNSDIKFMXOLPHXBJKMTQKNXSNQDSGDJXZVYVPOQZQHMYMXKLDSGSFPRUKNHCAWREAOGOYIDBCUIVPGABUYBFBTRRQEFHLRFBCAOPEMHVIAJZTZWKIROPQRIXGAJCRCZTE");
    tmp_msg_0.value.assign("WZTUIPXGSRYSCTRBKCNSMPFWTPDKEMHKJFHDVCODOYGOGVUBOFTHFMSKMEAAPNBUIQCAOYBXRGSAXNXUWICTHMCMYZZCRELHRZZNQKIEUJBDJGUMYYDTJDPVNTASBGHQNHNXSOGWCNQBAQLRIACEKJFBLLDWHLWQVJVIWTWJLUAHWZSQRDEYUFKVXXLVOWPMKLXQESDTUXOIJATFCLKYBPQGNIOVFRRVIEPIKMYDSOAQNRZFEBFZULVXGYJ");
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
    msg.setTimeStamp(0.339299535929);
    msg.setSource(39404U);
    msg.setSourceEntity(223U);
    msg.setDestination(14728U);
    msg.setDestinationEntity(137U);
    msg.name.assign("LUANFBBHPXRSIUTOKGVXSTIOELOKWUDFNOHMQWZMKYWCXMJGXCKDBDDPZXNUJAKTACFOYWA");

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
    msg.setTimeStamp(0.829848339336);
    msg.setSource(45965U);
    msg.setSourceEntity(182U);
    msg.setDestination(47754U);
    msg.setDestinationEntity(223U);
    msg.name.assign("TADEYHXCGSYYAMUKVZKJMYFHHHMSRLKALPPNFRIKJYCNJZRMXNLZKIVINQSHCONPECDTWQMLHVROREEUVIUZDBDUOGGSQKICVZRWKTEDWCBAMZBXWMSTRDUSKQPETZFLWYFIO");

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
    msg.setTimeStamp(0.586082018117);
    msg.setSource(45780U);
    msg.setSourceEntity(252U);
    msg.setDestination(17318U);
    msg.setDestinationEntity(252U);
    msg.name.assign("SKRCQRTQCJZENOHSWLISEIPOWTJOIMIDPZJQIVIEHRJYHAHPPGPIFAEWFJRFOAXZRLVYBMKHBHAVLGUJCGKXTUVWFRBLNICMALCXREAMEBWVODTDMPIDSKKVNCFNYCQALOLGVAZWNDLQXBLAKUCUGXTSZPPWVNDX");

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
    msg.setTimeStamp(0.726000376045);
    msg.setSource(575U);
    msg.setSourceEntity(17U);
    msg.setDestination(3936U);
    msg.setDestinationEntity(13U);
    msg.name.assign("QUIAGKHRJFUOPMIXFJPAFTTQOQJSDEEPGNOEJSANBYRLFSAZHYLSBRHWRKWJVEPYNFLFCQYRGUYCSKOXFFENTCJIXSBZLYTBQECLZGQKDRYGHLMPIAOPUCQZAGWUXUDYJTXBNWKQWIZADFMGGSXHBSYJMQZZTKIHSPJQUCWMDZWNIBKLTHNVILOLDLEXNNMTVEBCEDAMZOADKPGI");

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
    msg.setTimeStamp(0.646603131959);
    msg.setSource(38864U);
    msg.setSourceEntity(134U);
    msg.setDestination(16979U);
    msg.setDestinationEntity(204U);
    msg.timeout = 2052908884U;

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
    msg.setTimeStamp(0.831005182552);
    msg.setSource(65397U);
    msg.setSourceEntity(65U);
    msg.setDestination(60041U);
    msg.setDestinationEntity(101U);
    msg.timeout = 4069450508U;

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
    msg.setTimeStamp(0.320496046909);
    msg.setSource(49540U);
    msg.setSourceEntity(45U);
    msg.setDestination(25322U);
    msg.setDestinationEntity(50U);
    msg.timeout = 1483529433U;

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
    msg.setTimeStamp(0.00631942973841);
    msg.setSource(12977U);
    msg.setSourceEntity(54U);
    msg.setDestination(60753U);
    msg.setDestinationEntity(211U);
    msg.sessid = 3202200991U;

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
    msg.setTimeStamp(0.105989514803);
    msg.setSource(30316U);
    msg.setSourceEntity(97U);
    msg.setDestination(38195U);
    msg.setDestinationEntity(241U);
    msg.sessid = 3748890751U;

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
    msg.setTimeStamp(0.019017913889);
    msg.setSource(35046U);
    msg.setSourceEntity(194U);
    msg.setDestination(46434U);
    msg.setDestinationEntity(6U);
    msg.sessid = 170275134U;

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
    msg.setTimeStamp(0.984793201881);
    msg.setSource(42881U);
    msg.setSourceEntity(177U);
    msg.setDestination(48044U);
    msg.setDestinationEntity(212U);
    msg.sessid = 1269357561U;
    msg.messages.assign("UYUPNTJHGIMOZSEDKIZPITNWWJMXHZQGGWSHTAQVWDRKJCUITCPVMFOSPXUABXVDUTELZFQLEACZHVPWKNBUZFOPNCLDAEDBMMRXVHVJRZYXIJTWNMGFFELWY");

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
    msg.setTimeStamp(0.140339700065);
    msg.setSource(22634U);
    msg.setSourceEntity(86U);
    msg.setDestination(21188U);
    msg.setDestinationEntity(205U);
    msg.sessid = 1969657003U;
    msg.messages.assign("COACUIDELLTMABNUERNHFDLWWXQEUBTSPUIKQOYNKVPKKGOHZOJYPNCJRWSRYDAOBPULYYBOZCBBQJSMSFGPSZBIPYDBAXDYPSVUCDWXVWOMIXCXWQIKGETSAJZEAWEUBHWHLPPNEVZJGANZTSMBNZLTGNOSHYDF");

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
    msg.setTimeStamp(0.173863917943);
    msg.setSource(5334U);
    msg.setSourceEntity(180U);
    msg.setDestination(35835U);
    msg.setDestinationEntity(15U);
    msg.sessid = 1803347140U;
    msg.messages.assign("SXHKOHEAIQSOZPAJOQJGHUTHWSHCERUHV");

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
    msg.setTimeStamp(0.639882741924);
    msg.setSource(56304U);
    msg.setSourceEntity(219U);
    msg.setDestination(31834U);
    msg.setDestinationEntity(31U);
    msg.sessid = 120541749U;

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
    msg.setTimeStamp(0.636765505705);
    msg.setSource(26063U);
    msg.setSourceEntity(50U);
    msg.setDestination(7344U);
    msg.setDestinationEntity(182U);
    msg.sessid = 340889987U;

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
    msg.setTimeStamp(0.727936393307);
    msg.setSource(30977U);
    msg.setSourceEntity(26U);
    msg.setDestination(28294U);
    msg.setDestinationEntity(47U);
    msg.sessid = 396489402U;

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
    msg.setTimeStamp(0.531969494136);
    msg.setSource(40786U);
    msg.setSourceEntity(32U);
    msg.setDestination(49882U);
    msg.setDestinationEntity(70U);
    msg.sessid = 1032503018U;
    msg.status = 20U;

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
    msg.setTimeStamp(0.835265151514);
    msg.setSource(40330U);
    msg.setSourceEntity(64U);
    msg.setDestination(25768U);
    msg.setDestinationEntity(158U);
    msg.sessid = 9074867U;
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
    msg.setTimeStamp(0.556165150501);
    msg.setSource(62091U);
    msg.setSourceEntity(252U);
    msg.setDestination(54060U);
    msg.setDestinationEntity(104U);
    msg.sessid = 3162071801U;
    msg.status = 248U;

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
    msg.setTimeStamp(0.19527254633);
    msg.setSource(17418U);
    msg.setSourceEntity(56U);
    msg.setDestination(36766U);
    msg.setDestinationEntity(142U);
    msg.name.assign("SWYJRDUXMQKROU");

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
    msg.setTimeStamp(0.992478297171);
    msg.setSource(17462U);
    msg.setSourceEntity(178U);
    msg.setDestination(50586U);
    msg.setDestinationEntity(52U);
    msg.name.assign("NOBQZSKEZNECSONQCQFRFMDGCAPG");

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
    msg.setTimeStamp(0.971605183261);
    msg.setSource(63188U);
    msg.setSourceEntity(228U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(224U);
    msg.name.assign("LUGBJJOCAJTVYPNOSHOWZXCYBBZZPIXYMISIRXTDEOSFNHKEXFWZLJLZEVFDGAULPHXBMMMRORPZNSBYAEZEXCAJWCPGUSSCITEIFHDLODHCHKWEUPUCINTTYVLQFVCUHKMREUJQIYSNKWDNMCU");

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
    msg.setTimeStamp(0.358258289816);
    msg.setSource(24748U);
    msg.setSourceEntity(200U);
    msg.setDestination(52812U);
    msg.setDestinationEntity(33U);
    msg.name.assign("OQJYJRDMPJMTATTBKZQLZCGSRPFXPVDSIBOWZDCLGFYSHXRMQSKLXBYPVYEVIAZLFQFLZNKANEHWMJGNINKQATFGQHOBHXGBCWIUYJNQKOVCOSFRFYIGOTWZHSRPVUBMWWUNPVNWKAMQOBNK");

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
    msg.setTimeStamp(0.110791370069);
    msg.setSource(14765U);
    msg.setSourceEntity(20U);
    msg.setDestination(34528U);
    msg.setDestinationEntity(93U);
    msg.name.assign("KIGWQCQVVPDDJTIDLQIQAWGOZNPWNMWXQAWYIPZXLLWBCHUVSSGFTJJFUNYFBPRJKZUNSHFJQBUJCLMKVAOIFJTLXCZPTGKPKHHMWNQRCUXYVKOSREPWAABNLLXIYDQFUMUCYDSYHFLTGOHDEXRNTRHPFDXOOQTRBSVSXSANGZEVMUIMOBAWMODBIYSHZLFFNKERKCEUYVJDKVCNEAR");

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
    msg.setTimeStamp(0.000198805310716);
    msg.setSource(26177U);
    msg.setSourceEntity(100U);
    msg.setDestination(22291U);
    msg.setDestinationEntity(73U);
    msg.name.assign("KZFKPKARSOOSHCUWMGJWLAPNYKIPWTBJKWMCHMNOQNIEQRRGDTNVYWWRJUFVVDZXCGHNDFXRDLTXAZOHQAOWZDQPLAOGOTACPLJWXSNDBLUK");

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
    msg.setTimeStamp(0.953336787368);
    msg.setSource(20538U);
    msg.setSourceEntity(230U);
    msg.setDestination(24756U);
    msg.setDestinationEntity(146U);
    msg.type = 50U;
    msg.error.assign("JVWAXXMVETYWUYGXTHJMYXEJZPSZPGIWTKTYNOYRFAHGTIQJVXJNZDUPQGPHRYCKJMQQDHALUXLRSGZOUEIMAIOMXOBFGHMFQAQKIFBRZGUYXRDHAKSQTTBYEIKSDWBFJOKIDAUZGPLNVENNQFVRZIECOELJXUSJPXLKVBEDM");

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
    msg.setTimeStamp(0.715067913049);
    msg.setSource(34577U);
    msg.setSourceEntity(103U);
    msg.setDestination(61425U);
    msg.setDestinationEntity(115U);
    msg.type = 27U;
    msg.error.assign("IFDXPOXJAHNHAYFVDPNQGBJDCANZNLRFVSRPLWUZDDFXXIKVUJCRWYRNWIVAZYVSBZJXKMIWOEJCPRVTKAQZWXIUBKFUEBMJOCPEBKLNGWEMTTTOCFSHMTGDABAHTEJFJPCKLE");

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
    msg.setTimeStamp(0.964422647402);
    msg.setSource(54570U);
    msg.setSourceEntity(205U);
    msg.setDestination(45052U);
    msg.setDestinationEntity(123U);
    msg.type = 73U;
    msg.error.assign("FFSWSQUECZDMHEGDRTPLZCHIUVOMPDPWEQJARPNSXVKHVOARHBHZLSGEWMPGZCLRDYIYLOWFFNXUUUITFRJJSTZAZKNWPYGRYNFQXIQUEKHZYFLVYTNLJLLVRUCIRKDZIDWVYAKORPMIPNXMMDUGWAYDNYPZFOLJTCNTXMEGHPCEUBA");

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
    msg.setTimeStamp(0.600253704138);
    msg.setSource(12398U);
    msg.setSourceEntity(90U);
    msg.setDestination(39958U);
    msg.setDestinationEntity(68U);
    msg.seq = 2497U;
    msg.sys_dst.assign("FZZBGJWXTVOCLCIOTGYHSLKLWMLPHQWAASIKUXQFHHDKEWTRBASTAVMYVICDMVOQIXALKXVDKHGPZYNVSOMFNJQKXRNHXBCTERBPWDOYMNBECNJTURAQWBIJQRNUVTDOHJQFZIPYLYTDOJSCEKPCFQWZPPRKGNNOOZEJQBGOIPPW");
    msg.flags = 246U;
    const char tmp_msg_0[] = {11, 1, 12, 82, -34, -106, 117, 120, 23, 45, 114, -20, -46, 31, -85, 40, -69, 103, 38, -53, 43, -61, 66, 99, 1, -48, -40, 99, -83, -87, -72, -5, -64, -98, 79, -108, -77, -94, 44, 107, 70, -106, 107, -115, -113, -87, 124, 48, 6, -107, 57, 1, 117, 55, 19, 83, -89, -45, -100, 18, 119, 8, -112, 80, 101, 5, 114, -7, -56, -72};
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
    msg.setTimeStamp(0.844295223251);
    msg.setSource(40085U);
    msg.setSourceEntity(136U);
    msg.setDestination(49304U);
    msg.setDestinationEntity(96U);
    msg.seq = 24403U;
    msg.sys_dst.assign("UTTWUMZEWSDHMDRVIHYKLQVIKSNERLJAFCFUVGVSRHJAVPONWXWCDXQBLRDEQQXHZTWBTZNYHCGSLQHVCFJOANKBGHULBMPJIGMMFGHUGLKJWSDQWTASTKWXPCSFMIUVFLPFLXBPMZOQARTEANLYJCEYNKNY");
    msg.flags = 0U;
    const char tmp_msg_0[] = {-99, 14, 6, 125, 73, -103, 71, 56, 123, -23, -111, -66, 57, 18, -36, 64, 106, 70, 46, 108, 47, -68, 111, 26, -23, 108, 57, 114, 74, -61, -76, -28, 89, -16, 58, -15, -9, -54, -29, 117, -29, 72, -63, 43, 123, 62, 43, -37, -115, -119, 11, -39, -53, 20, -57, -112, -21, -42, 39, -113, 122, 25, 87, -67, -45, 126, 97, -3, 55, 12, -80, -40, -102, 4, 110, -73, -73, 42, 14, 91, -39, -103, 29, -123, -53, -24, -92, -70, -10, -68, 75, 30, -48, 114, -71, 23, -12, 3, 10, 15, -100, -73, 4};
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
    msg.setTimeStamp(0.749424371704);
    msg.setSource(35956U);
    msg.setSourceEntity(229U);
    msg.setDestination(27074U);
    msg.setDestinationEntity(147U);
    msg.seq = 49640U;
    msg.sys_dst.assign("ETMGEHKZWRIJLMOWTSSPTBIDNTRVZQZSHXYZSCXYIKYLXVKKXJDHFQDWGYYBQZVNXSHEVHOQDOCTCBYKJIEPALQUSCDDANQGEBKCI");
    msg.flags = 163U;
    const char tmp_msg_0[] = {-84, 96, -85, 94, 3, -111, -46, -40, 40, -40, -30, 10, -63, -69, -113, -29, -107, 6, -59, 59, -76, -100, 62, 65, 20, 66, -120, -76, 57, 62, -56, 99, 72, -81, 62, -76, 17, 93, 55, -35, -52, 63, 97, 121, -122, -101, -44, 67, 78, -61, -20, -126, -28, -111, -30, -71, 119, 59, -90, 120, 99, -117, -73, -74, 122, 118, -44, 56, -37, 97, 54, -75, -80, -123, -48, -109, -4, -121, -122, 53, -107, 75, 39, 7, 59, 93, 6, -123, -110, 30, 17, 54, -110, 44, 14, -49, -120, -16, 91, -56, 35, 38, 126, 121, -36, -85, 68, 19, -34, 49, 123, 13, -75, -118, -27, 76, 59, -60, -26, 75, -103, 8, -52, 16, -50, 94, 99, 118, -19, -125, 26, 38, 7, 25, 76, -71, 46, -100, 83, -57, -58, -127, 10, 7, -41, -66, 70, -63, 39, -84, -103, -46, 85, -44, -128, 65, -17, 87, 65, -48, -46, -98, -100, 107, -59, -71, 14, 47, 104, -13, -76, 114, -58, -103, -118, -9, 117, 109, -13, 27, -110, 43, 102, 22, 100, 10, -98, 77, -115, -121, 63, -55, 45, -45, 11};
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
    msg.setTimeStamp(0.105736272671);
    msg.setSource(32475U);
    msg.setSourceEntity(19U);
    msg.setDestination(32346U);
    msg.setDestinationEntity(175U);
    msg.sys_src.assign("SORUPLXWWJDBUVGONGFOXCKDYTXBDNWAYOGHDEWXSQDATMLRZKPXZPPPYIOSFNBSONJIAQFBEZCDJXGIJSHTMPSUBZHPBLZLJAYDNEABUWQBOGZILLVADJSQGCKINLZKWVTKREWPQEMEGVJHSQXOAFFEHPMRUIVBIKFXGVTTMKEQBCIMCEZOKNHQFYSVQZUVPAKWNNJWRFYCARMYDCMYYIHMLWRCHSFULUUFTREX");
    msg.sys_dst.assign("YIRTCRZSQYJXKBPKHDWXSYIKBGDQXNGUVLVZIWREOKMQOGWNQWMDHSTBTCOTNXPRXUZYUEEECEANZUMLJIKSJHVJQGPVRCQZHJBATHHTNWPZKGFBXHYWDRGSCILOFNHQPLYEAQNLDFCTZMZTDDKILATZEIKIBPJKOATROFBGAUESOFORUUWCMMXVFLGLNPBDWVSJOBGCHPDVWXNEKJVMYQSYVFIACFMVAW");
    msg.flags = 123U;
    const char tmp_msg_0[] = {-1, 59, -28, 1, 91, -117, 49, -46, 47, -62, -41, 8, -13, 94, -14, -39, 16, 100, 102, 27, 37, -111, -4, 53, -81, 21, -27, -60, -19, 60, -67, -97, 16, 36, 39, 21, 68, -15, -25, -32, -61, 71, -122, 14, -68, 5, 97, -100, -21, 103, -53, -19, 81, -19, 3, -11, -53, -21, -84, 79, 115, -117, 66, -27, -102, -68, 124, -128, -76, -17, -91, -11, 17, 7, 100, 20, -3, -62, -3, -28, 97, -92, -98, 115, -128, 53, 19, -4, 32, 103, 105, 98, -6, -31, -92, 13, -75, -110, 42, 96, 44, -16, 51, 48, -82, -67};
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
    msg.setTimeStamp(0.211281909343);
    msg.setSource(5679U);
    msg.setSourceEntity(13U);
    msg.setDestination(4895U);
    msg.setDestinationEntity(81U);
    msg.sys_src.assign("BKLQLYGILAAUURNLENXGWGKKINRGQEINMJDRVQZYFWEBH");
    msg.sys_dst.assign("ANNCSSZSIRFUWEDIAALJGDXWSJQYVGGQWCHCYNCKHPLXZVYULXKPHHCOHFOOAHTBNTPOKJLEQVKRNTCUIBKQAPROTUTVFXLRDKJIGZBSIAWHXFYHOYOVTGQMIMNMTWFDEDNEZJDJBQYRUUOFUEUBBXVAPZBCWSBSREDFUTDNMJGQCIRJFFZMGYZXJMSGBQIQVHIZSRXMVOQWPUXNMXCRVEKKAPKYAKDGVMHD");
    msg.flags = 110U;
    const char tmp_msg_0[] = {-62, -76, -122, -56, -123, 115, 43, -110, 29, -86, 96, -6, 124, 72, -112, -5, 56, -34, 78, -67, 28, 64, 70, -118, -80, 23, 115, 2, -49, 9, 49, -119, 29, 23, -54, 97, 96, 51, 7, 100, -2, -113, -72, -54, -57, -119, 72, -29, 41, 1, -54, 110, -78, 44, -56, 126, -24, -93, 71, -73, 64, -116, -83, -50, -45, 108, 109, -97, -47, -72, -11, 31, 47, -65, -113, 50, 71, 119, 126, 124, -45, 52, 75, 14, 119, 111, 90, -91, -72, -49, -33, 32, 56, 121, 88, -90, 53, -16, -17, -4, 44, -91, -48, 123, -92, -117, 20, -120, -44, 36, -107, -100, -2, -28, 104, 119, 126, -123, -33};
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
    msg.setTimeStamp(0.44009080227);
    msg.setSource(22643U);
    msg.setSourceEntity(210U);
    msg.setDestination(63541U);
    msg.setDestinationEntity(133U);
    msg.sys_src.assign("CUQMZYEDIFIAHSVXLOAPVHUMMZJXPCEDYDROGJUNWISTJVMYXPPVWHANWDBLQZLRZXKZLZWATFRSKRWKWTJAHOVBNP");
    msg.sys_dst.assign("KUETZNIOGOFOAHNYGZMTRRKGHETWYPHAFXZDXEPMLKEFXUJXADVCSTHMUAFHFSAZENQFBYORMPZBDOVCVIIEEAGWMUTMKHQLQCKXXDSC");
    msg.flags = 203U;
    const char tmp_msg_0[] = {-113, 97, -123, 46, 96, 38, 126, 81, -117, 5, -96, 33, 77, 9, -101, 37, -107, -42, 101, -21, -122, -61, -1, -100, -87, -21, -16, 100, 23, 13, 22, -68, 99, 83, 30, -58, -46, -100, -95, 14, 122, -39, 68, 91, 77, 52, -44, -110, -123, -12, 16, -33, 88, -4, 2, 16, 116, 21, -14, 16, 102, 40, -44, 73, 61, 118, 57, 96, 117, -104, 99, 10, -126, 38, 51, -62, -121};
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
    msg.setTimeStamp(0.337832344249);
    msg.setSource(58355U);
    msg.setSourceEntity(62U);
    msg.setDestination(29802U);
    msg.setDestinationEntity(146U);
    msg.seq = 59384U;
    msg.value = 203U;
    msg.error.assign("QZHCIAKYJOMVIZZKNUWGGBXTSZRMDFURXIJKWPASYMXSTAITWVKGKLDPVSCOGHOAGDVQROMULSEGOJCCCZMCMPVJOWOUHIUZXMZIRQSOFVTWZPECTQLHQHLLKDJFBNQARLLJVTERNXYHUMUXMRLODFDEHQVRXUPQDYWSPDTIBYKBIKTREBGFNXTNBRQHYIWSUBNJHNAGYJYFEAVLELNYZWODHTNNPPJEKXQXZWISDGKAPUGPABMFJFS");

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
    msg.setTimeStamp(0.049176926423);
    msg.setSource(52493U);
    msg.setSourceEntity(16U);
    msg.setDestination(40102U);
    msg.setDestinationEntity(118U);
    msg.seq = 8734U;
    msg.value = 41U;
    msg.error.assign("HDGFGWONTDJUTKCXRVTGWHWHEERFGLOQOBLYMHUVXSKZPRAIVQAQMRXSDNVDCREJXVAXJSHZUHJEKUQFMLOILWSQ");

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
    msg.setTimeStamp(0.154332733081);
    msg.setSource(10250U);
    msg.setSourceEntity(54U);
    msg.setDestination(31757U);
    msg.setDestinationEntity(138U);
    msg.seq = 33858U;
    msg.value = 228U;
    msg.error.assign("CIXLKCNMCKTMONFYUBKMDMWVIJEATXFVAJKFXQYGLZEUMWZWYLQUJCUIYGRQYZHWFCLPWMKIKGYOEOFIRHECDIPHPVUZXOUPIYNSRMSPWLXZVBBQJNDVXBJBTOSVAXUGNQEFGAHNWVCACXNSHIJWOUTBJUAFYDHHERQFSW");

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
    msg.setTimeStamp(0.331006842258);
    msg.setSource(30636U);
    msg.setSourceEntity(114U);
    msg.setDestination(1953U);
    msg.setDestinationEntity(80U);
    msg.seq = 45984U;
    msg.sys.assign("VSTHZCUUCXVRYJFAMJFYAICUYVAWDKLJRBCDIETBIZXXRQNDSQKGBD");
    msg.value = 0.594124677052;

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
    msg.setTimeStamp(0.785973560865);
    msg.setSource(56515U);
    msg.setSourceEntity(134U);
    msg.setDestination(34897U);
    msg.setDestinationEntity(182U);
    msg.seq = 53658U;
    msg.sys.assign("WOCWQRJSDEZQWVUVHLJVHBQMNEZQKECSQIQNLTZRZKVIKLUSULLXORGBAZWKNTDKQPSKXITUOW");
    msg.value = 0.497575088435;

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
    msg.setTimeStamp(0.735300217409);
    msg.setSource(9103U);
    msg.setSourceEntity(87U);
    msg.setDestination(54449U);
    msg.setDestinationEntity(213U);
    msg.seq = 30853U;
    msg.sys.assign("EORDLVIXOPQKYHOHWXLRXAVUBCPZIWVWJNBCUNRISMQVBNAWTZCMYIGSNQOXFADSYJOCMJYVYKVEARDMFXYIQUONSWKFDJRRBABLUAETFFIZQGZMNESDJTCKYMHSRIAKGLUOKESUYXIGNXGEIXJGTPMOWNTTPOJFDDZHW");
    msg.value = 0.0827639889692;

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
    msg.setTimeStamp(0.144569941788);
    msg.setSource(47172U);
    msg.setSourceEntity(214U);
    msg.setDestination(63790U);
    msg.setDestinationEntity(69U);
    msg.action = 40U;
    msg.longain = 0.755292912295;
    msg.latgain = 0.0618252873319;
    msg.bondthick = 2609746750U;
    msg.leadgain = 0.603387669829;
    msg.deconflgain = 0.649743033987;

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
    msg.setTimeStamp(0.587097718848);
    msg.setSource(27425U);
    msg.setSourceEntity(205U);
    msg.setDestination(61386U);
    msg.setDestinationEntity(164U);
    msg.action = 23U;
    msg.longain = 0.983486339157;
    msg.latgain = 0.301197751347;
    msg.bondthick = 1773388311U;
    msg.leadgain = 0.38982533054;
    msg.deconflgain = 0.764690395432;

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
    msg.setTimeStamp(0.996000585295);
    msg.setSource(14654U);
    msg.setSourceEntity(25U);
    msg.setDestination(50498U);
    msg.setDestinationEntity(179U);
    msg.action = 205U;
    msg.longain = 0.212348047566;
    msg.latgain = 0.118829158316;
    msg.bondthick = 2659286799U;
    msg.leadgain = 0.372385606627;
    msg.deconflgain = 0.208216297976;

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
    msg.setTimeStamp(0.193127095453);
    msg.setSource(32862U);
    msg.setSourceEntity(68U);
    msg.setDestination(30372U);
    msg.setDestinationEntity(87U);
    msg.err_mean = 0.215084536277;
    msg.dist_min_abs = 0.643329446469;
    msg.dist_min_mean = 0.735517293643;

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
    msg.setTimeStamp(0.295521234826);
    msg.setSource(61940U);
    msg.setSourceEntity(99U);
    msg.setDestination(19134U);
    msg.setDestinationEntity(59U);
    msg.err_mean = 0.973459185571;
    msg.dist_min_abs = 0.764468550187;
    msg.dist_min_mean = 0.173169035009;

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
    msg.setTimeStamp(0.366816204384);
    msg.setSource(22773U);
    msg.setSourceEntity(99U);
    msg.setDestination(44220U);
    msg.setDestinationEntity(3U);
    msg.err_mean = 0.75559583846;
    msg.dist_min_abs = 0.507467618234;
    msg.dist_min_mean = 0.306306015088;

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
    msg.setTimeStamp(0.0133945617907);
    msg.setSource(40819U);
    msg.setSourceEntity(21U);
    msg.setDestination(129U);
    msg.setDestinationEntity(66U);
    msg.action = 126U;
    msg.lon_gain = 0.165885040197;
    msg.lat_gain = 0.863009664954;
    msg.bond_thick = 0.724597900798;
    msg.lead_gain = 0.477081958357;
    msg.deconfl_gain = 0.408553024219;
    msg.accel_switch_gain = 0.688102672583;
    msg.safe_dist = 0.606868692701;
    msg.deconflict_offset = 0.36834804538;
    msg.accel_safe_margin = 0.224996284372;
    msg.accel_lim_x = 0.231330302933;

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
    msg.setTimeStamp(0.465831042946);
    msg.setSource(62956U);
    msg.setSourceEntity(51U);
    msg.setDestination(14549U);
    msg.setDestinationEntity(175U);
    msg.action = 112U;
    msg.lon_gain = 0.555745722865;
    msg.lat_gain = 0.435592562856;
    msg.bond_thick = 0.218069083158;
    msg.lead_gain = 0.822292970376;
    msg.deconfl_gain = 0.43383302496;
    msg.accel_switch_gain = 0.42845262163;
    msg.safe_dist = 0.39024363768;
    msg.deconflict_offset = 0.578323418722;
    msg.accel_safe_margin = 0.239767659058;
    msg.accel_lim_x = 0.232246570667;

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
    msg.setTimeStamp(0.0661954100462);
    msg.setSource(11990U);
    msg.setSourceEntity(5U);
    msg.setDestination(30698U);
    msg.setDestinationEntity(77U);
    msg.action = 155U;
    msg.lon_gain = 0.417759863563;
    msg.lat_gain = 0.360951762624;
    msg.bond_thick = 0.874000923768;
    msg.lead_gain = 0.481527258687;
    msg.deconfl_gain = 0.797307646137;
    msg.accel_switch_gain = 0.0848064329812;
    msg.safe_dist = 0.650683430913;
    msg.deconflict_offset = 0.938676230401;
    msg.accel_safe_margin = 0.0532422827991;
    msg.accel_lim_x = 0.503642429793;

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
    msg.setTimeStamp(0.258975175329);
    msg.setSource(28278U);
    msg.setSourceEntity(198U);
    msg.setDestination(51005U);
    msg.setDestinationEntity(186U);
    msg.type = 28U;
    msg.op = 107U;
    msg.err_mean = 0.521216294013;
    msg.dist_min_abs = 0.993699573049;
    msg.dist_min_mean = 0.700168167427;
    msg.roll_rate_mean = 0.960540797714;
    msg.time = 0.421340130465;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 171U;
    tmp_msg_0.lon_gain = 0.305587059768;
    tmp_msg_0.lat_gain = 0.447190559893;
    tmp_msg_0.bond_thick = 0.465582688035;
    tmp_msg_0.lead_gain = 0.30825535393;
    tmp_msg_0.deconfl_gain = 0.0767104567276;
    tmp_msg_0.accel_switch_gain = 0.120458314521;
    tmp_msg_0.safe_dist = 0.363333242528;
    tmp_msg_0.deconflict_offset = 0.81234753534;
    tmp_msg_0.accel_safe_margin = 0.378012962928;
    tmp_msg_0.accel_lim_x = 0.82447107829;
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
    msg.setTimeStamp(0.195438121365);
    msg.setSource(3037U);
    msg.setSourceEntity(66U);
    msg.setDestination(28711U);
    msg.setDestinationEntity(254U);
    msg.type = 237U;
    msg.op = 12U;
    msg.err_mean = 0.366283843897;
    msg.dist_min_abs = 0.207164363063;
    msg.dist_min_mean = 0.738674393587;
    msg.roll_rate_mean = 0.435314979671;
    msg.time = 0.103442728886;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 229U;
    tmp_msg_0.lon_gain = 0.148435391493;
    tmp_msg_0.lat_gain = 0.885995973889;
    tmp_msg_0.bond_thick = 0.285586999553;
    tmp_msg_0.lead_gain = 0.735436730986;
    tmp_msg_0.deconfl_gain = 0.515202935978;
    tmp_msg_0.accel_switch_gain = 0.00981693581969;
    tmp_msg_0.safe_dist = 0.786992875824;
    tmp_msg_0.deconflict_offset = 0.871013321072;
    tmp_msg_0.accel_safe_margin = 0.25482104104;
    tmp_msg_0.accel_lim_x = 0.286095608667;
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
    msg.setTimeStamp(0.185863903077);
    msg.setSource(19516U);
    msg.setSourceEntity(35U);
    msg.setDestination(25305U);
    msg.setDestinationEntity(126U);
    msg.type = 173U;
    msg.op = 243U;
    msg.err_mean = 0.546272818952;
    msg.dist_min_abs = 0.362816430786;
    msg.dist_min_mean = 0.161130974275;
    msg.roll_rate_mean = 0.450427076793;
    msg.time = 0.301239784941;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 58U;
    tmp_msg_0.lon_gain = 0.990441161541;
    tmp_msg_0.lat_gain = 0.84962954716;
    tmp_msg_0.bond_thick = 0.198552333439;
    tmp_msg_0.lead_gain = 0.871189296859;
    tmp_msg_0.deconfl_gain = 0.200273265491;
    tmp_msg_0.accel_switch_gain = 0.238546935613;
    tmp_msg_0.safe_dist = 0.989718000003;
    tmp_msg_0.deconflict_offset = 0.480016654323;
    tmp_msg_0.accel_safe_margin = 0.503590286839;
    tmp_msg_0.accel_lim_x = 0.868170978476;
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
    msg.setTimeStamp(0.118472758929);
    msg.setSource(57341U);
    msg.setSourceEntity(78U);
    msg.setDestination(18810U);
    msg.setDestinationEntity(214U);
    msg.uid = 64U;
    msg.frag_number = 117U;
    msg.num_frags = 108U;
    const char tmp_msg_0[] = {-80, -76, 119, -27, -48, 67, 0, 69, 45, -110, -46, 125, -112, 83, -47, 125, -6, 35, -56, 12, -10, 70, 126, 126, -13, 3, 93, 102, 4, 29, -105, -31, -95, -82, 58, -58, 76, 124, 52, -113, -101, -118, 50, -11, -94, -23, -34, -125, 52, 104, -13, -89, -43, 24, -74, 59, 51, -126, 55, -22, -128, 81, -106, -32, -5, 109, -23, -58, 122, 55, 74, 61, 108, -55, -39, -77, -64, -122, -83, -46, -28, 102, 105, 41, -36, 53, 34, 15, 86, 59, -105, -70, 84, -27, 115, -43, -80, -53, 5, -75, -58, -94, 111, 55, -108, -31, -92, -109, 102, -101, 56, -78, -32, 37, -89, -115, 126, -6, -36, -85, -8, -70, 8, 114, -95, -76, -30, -104, 21, -13, 93};
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
    msg.setTimeStamp(0.893408092386);
    msg.setSource(13147U);
    msg.setSourceEntity(248U);
    msg.setDestination(15561U);
    msg.setDestinationEntity(230U);
    msg.uid = 133U;
    msg.frag_number = 179U;
    msg.num_frags = 43U;
    const char tmp_msg_0[] = {35, 33, -96, 18, 83, 29, -52, 7, 2, 119, 13, 47, -2, -83, 104, 71, -82, 101, -30, 105, 91, -5, 104, -105, -59, -54, -101, 75, 13, -117, 105, -50, -46, 67, -127, -42, -32, -111, 15, -42, 82, -82, 77, -97, 24, 68, 50, 118, -115, 30, -60, 1, 96, -56, 42, -102, 80, -66, 106, -46, 102, 75, 0, 3, -109, 66, 76, -90, 54, 2, -125, 17, -43, 17, 87, -4, -32, -52, -108, -31, 110, -101};
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
    msg.setTimeStamp(0.237417835993);
    msg.setSource(14113U);
    msg.setSourceEntity(158U);
    msg.setDestination(5276U);
    msg.setDestinationEntity(28U);
    msg.uid = 4U;
    msg.frag_number = 115U;
    msg.num_frags = 19U;
    const char tmp_msg_0[] = {79, 22, 2, -69, -100, 17, 108, -118, -25, 101, -50, -83, 14, 83, 47, 67, 79, 71, -54, -40, 90, 24, -99, -7, -21, -94, -109, 90, -79, 14, 48, 22, 78, -36, -79, 13, -94, -15, -65, 17, -63, -30, 102, 54, -52, -54, 14, -97, -9, 101, 90, -30, 27, -21, 66, 112, -68, -101, -72, -80, -53, 45, 121, -114, -41, -83, -54, -41, 82, -27, 88, -66, -73, 117, 99, 37, 101, 83, -43, 12, -116, 126, 18, -119, 41, 46, 85, -12, 110, -119, 112, 112, 5, -17, -70, 38, -118, 25, -97, 49};
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
    msg.setTimeStamp(0.535918121399);
    msg.setSource(49080U);
    msg.setSourceEntity(146U);
    msg.setDestination(54386U);
    msg.setDestinationEntity(45U);
    msg.content_type.assign("AEPBAKBSQCAGUJFFMPWMQPGYLKNEYBCODJALVNZZTEBIDPJCQPBGJSLIOULQXAYBFTSPISWGMNHPEVXSFB");
    const char tmp_msg_0[] = {22, 15, -81, 53, -58, -118, -105, -49, -60, -9, 78, -98, -117, -32, 31, -99, 126, 96, 9, 92, 37, -74, -76, 14, -29, 53, 23, 19, 5, 118, -63, -9, -6, -55, 113, -83, 52, -64, 66, -11, -29, -101, 13, -125, 91, 0, -50, -39, -40, 15, -21, 18, -32, 7, -30, -13, -107, -120, -46, 50, -24, 8, -48, -98, -128, -101, -74, -123, 20, -117, 38, -94, 42, 116, -4, 10, -37, 53, 47, -12, -101, 14, -95, -23, 82, -26, -74, 72, -41, -94, 36, -44, -66, 85, 94, -11, 106, -101, 0, -98, -56, 20, -26, -81, 121, 34, 57, -99, -87, 102, -51, -2, 97, -88, 10, 6, -27, -9, -86, 114, -69, 88, -8, 75, 48, 5, -11, -54, 2, -117, 41, -69, 21, 125, -107, 104, 119, -90, 1, -50, -88, 61, -118, 64, 48, -30, -24, -59, 10, -39, -76, 49, 29, -62, -121, 11, 103, 43, 100, -50, 110, -72, -66, 101, 70, -29, -118, 107, -28, 68, -26, -8, -81, -121, 85, 23, -83, -26, 48, -77, -69, -45, 109, 97, -41, -37, 26, -56, 43, 30, -45, -63, 101, 22, 100, 13, -92, -76, -111, -96, -66, 111, -72, -55, -111, 54, -99, 26, 95, -77, 18, 89, 49, -117, -47, 94, 58, -2, 102, 90, -62, -6, -109, -35, 16, -98};
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
    msg.setTimeStamp(0.576015081177);
    msg.setSource(51876U);
    msg.setSourceEntity(80U);
    msg.setDestination(32699U);
    msg.setDestinationEntity(3U);
    msg.content_type.assign("PRHABHUJYCLMPYRLVQYSPHWREHUNHZJCCJOKTFFFKSPIMBZJSSRNEOJOXOQIAUPAMULZPWWWDWVIGXCDZXACCZMFKLNOOMGWHAQJTI");
    const char tmp_msg_0[] = {5, -100, 57, 118, 24, 67, -14, 97, -92, -38, 115, -21, -76, -43, -84, -66, 36, 9, -112, -128, -108, 1, 108, -23};
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
    msg.setTimeStamp(0.40973696839);
    msg.setSource(53287U);
    msg.setSourceEntity(214U);
    msg.setDestination(25343U);
    msg.setDestinationEntity(173U);
    msg.content_type.assign("OHUNPKLNKWZNOIWMYPDOIVCQZWVXRWVHYPNSFWAYOYFBOSSQBFRKOUQFYSLWDRIHHKXGYJEDYCMFRHDKMPDRMMWPVBIKGXWZARCPDE");
    const char tmp_msg_0[] = {-62, -77, 51, -64, 108, -94, 103, -42, 4, -128, -66, 114, 55, 62, -16, -89, -47, 57, 124, 119, -92, -39, 106, -38, 120, -2, 91, -33, 65, -3, -63, 31, -46, -94, -119, 9};
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
    msg.setTimeStamp(0.156315669864);
    msg.setSource(28494U);
    msg.setSourceEntity(63U);
    msg.setDestination(53075U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.699413643044);
    msg.setSource(37721U);
    msg.setSourceEntity(226U);
    msg.setDestination(33719U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.28994504078);
    msg.setSource(12788U);
    msg.setSourceEntity(244U);
    msg.setDestination(51658U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.796295039323);
    msg.setSource(39052U);
    msg.setSourceEntity(174U);
    msg.setDestination(11766U);
    msg.setDestinationEntity(211U);
    msg.target = 55774U;
    msg.bearing = 0.569397969852;
    msg.elevation = 0.555129837131;

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
    msg.setTimeStamp(0.515781273113);
    msg.setSource(39834U);
    msg.setSourceEntity(0U);
    msg.setDestination(60109U);
    msg.setDestinationEntity(9U);
    msg.target = 48453U;
    msg.bearing = 0.757533755205;
    msg.elevation = 0.28312842198;

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
    msg.setTimeStamp(0.171417257286);
    msg.setSource(3206U);
    msg.setSourceEntity(207U);
    msg.setDestination(91U);
    msg.setDestinationEntity(237U);
    msg.target = 19601U;
    msg.bearing = 0.74639416229;
    msg.elevation = 0.34622236305;

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
    msg.setTimeStamp(0.619644630937);
    msg.setSource(25555U);
    msg.setSourceEntity(228U);
    msg.setDestination(18459U);
    msg.setDestinationEntity(181U);
    msg.target = 24289U;
    msg.x = 0.522551723343;
    msg.y = 0.80859935221;
    msg.z = 0.528558894609;

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
    msg.setTimeStamp(0.271609063384);
    msg.setSource(3554U);
    msg.setSourceEntity(39U);
    msg.setDestination(15719U);
    msg.setDestinationEntity(55U);
    msg.target = 28389U;
    msg.x = 0.590003104347;
    msg.y = 0.00310622214958;
    msg.z = 0.959141774856;

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
    msg.setTimeStamp(0.374993430775);
    msg.setSource(286U);
    msg.setSourceEntity(58U);
    msg.setDestination(43253U);
    msg.setDestinationEntity(177U);
    msg.target = 28507U;
    msg.x = 0.668292438412;
    msg.y = 0.321222852948;
    msg.z = 0.871010829868;

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
    msg.setTimeStamp(0.255311909511);
    msg.setSource(13329U);
    msg.setSourceEntity(199U);
    msg.setDestination(64148U);
    msg.setDestinationEntity(137U);
    msg.target = 44555U;
    msg.lat = 0.318146281146;
    msg.lon = 0.759822116821;
    msg.z_units = 123U;
    msg.z = 0.652645742068;

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
    msg.setTimeStamp(0.629923879828);
    msg.setSource(26085U);
    msg.setSourceEntity(181U);
    msg.setDestination(18376U);
    msg.setDestinationEntity(19U);
    msg.target = 65068U;
    msg.lat = 0.408245644006;
    msg.lon = 0.444439202142;
    msg.z_units = 28U;
    msg.z = 0.445874814777;

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
    msg.setTimeStamp(0.52336629186);
    msg.setSource(44066U);
    msg.setSourceEntity(162U);
    msg.setDestination(10757U);
    msg.setDestinationEntity(207U);
    msg.target = 1192U;
    msg.lat = 0.285644205665;
    msg.lon = 0.463472596219;
    msg.z_units = 5U;
    msg.z = 0.273966864404;

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
    msg.setTimeStamp(0.248656194881);
    msg.setSource(61140U);
    msg.setSourceEntity(189U);
    msg.setDestination(39784U);
    msg.setDestinationEntity(87U);
    msg.locale.assign("UZJGRGYENBVPSEIUILMOBYPSIUUXYMOQUNDUFJWHBYWCMHJRGABBSXHZFVFZALFVVTFUDEMBQKZZQSLPQPWVTZPJYAYKVWATYBPAPLRXCQEDQEVMCRKOAXWUMODKOHOHJSRHWTIVCTPOJJVQPXMHBSLFQRNIWLKKHOZILCALHJCNNO");
    const char tmp_msg_0[] = {5, 33, 49, -100, -29, 114, -38, 50, -120, -86, 28, -5, 102, -86, 15, -48, -98, 103, 87, 7, -12, 100, 70, -58, -44, -33, 51, -33, 2, 79, -9, 93, 98, 5, -55, 33, 125, -43, 19, 116, -37, -11, 118, 41, 87, 20, 115, -24, -92, -76, -16, -34, 84, 21, -114, -68, 54, -33, -16, -3, -112, -51, -110, 82, 86, 72, 63, -83, -49, 67, -45, -72, -75, -95, -70, 9, 96, 85, 48, -96, 7, -107, -33, -34, 41, -120, 99, 66, 3, -18, 22, -4, 76, -81, 23, -14, -10, 87, 124, -127, -88, 120, -28, -79, -71, 55, -22, -3, -48, -67, -106, 91, 58, -14, -54, 21, 56, -71, -14, 99, -50, -42, -107, -46, -18, -42, 119, -10, -111, -94, 25, 98, -101, -80};
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
    msg.setTimeStamp(0.0868096645228);
    msg.setSource(5016U);
    msg.setSourceEntity(46U);
    msg.setDestination(36857U);
    msg.setDestinationEntity(51U);
    msg.locale.assign("IMONWERSTECPAGWNPLFWJDBYUVBUTXDCNOHHGAGEVHWOYCTJRYDADZGZYDLBSYOSLWNQGJMPFLVBECQSUCYNRZEJRZGEHWSHFQMNJKGQIRBFUTTXHVIPXVVROBIWMKSPSMISAEGZZKUONLAPKQQL");
    const char tmp_msg_0[] = {-97, -60, 49, -118, -30, 26, -100, -53, 108, 57, -30, -96, 13, -121, -14, -113, 92, 26, -5, -59, 84, 55, -81, 53, -112, 72, -57, 72, 21, -10, -92, 104, -58, -32, 83, 62, 20, 18, -103, 95, -66, -78, 9, -88, 19, 117, -30, 110, 51, -57, -113, -90, -56, -114, 72, 84, -4, 104, 39, -110, 107, -57, -39, 65, 102, 26, 45, -89, 42, -63, -61, 30, 94, -73, -108, -51, -20, -60, 9, -64, 111, -79, -123, 31, 106, 86, 4, -54, 118, -20, 35, -40, -116, -87, -86, 98, 86, 70};
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
    msg.setTimeStamp(0.599078862874);
    msg.setSource(15581U);
    msg.setSourceEntity(131U);
    msg.setDestination(53959U);
    msg.setDestinationEntity(210U);
    msg.locale.assign("UWBILHYZTJGKBLALFXAFVGUPWEBPPRPLDTZIKYPJHMNPHKIDFZKDGZIEDBYSRLXTUQICCKTVTRTKOWPWGJZGONDYVWFTVNQZCRHNSLYUZQWTEEOPNNSSXCYEROHOLSPVSUJHADXCRFQXQDKMQOCEEZYEIWVNHEADHJXPIY");
    const char tmp_msg_0[] = {-5, -44, -19, 8, 1, 126, -4, -26, -124, 65, 109, -52, 70, 10, -21, 76, 79, -4, -13, 10, 38, -76, 122, 121, 61, 35, 53, 19, 26, -101, -78, 51, 25, 1, -94, -27, -69, 98, 59, 71, -71, 73, 56, -24, 76, 99, -53, -67, -108, 93, 0, -47, -8, -38, -39, -5, 71, -94, -126, 14, -9, -68, -121, 80, 67, 54, 52, -20, 57, -51, 122, -49, 69, -96, 51, 12, 116, -93, 5, -100, 120, 3, 85, 1, -75, 124, -36, 101, 21, -106, 67, 113, -28, -7, 42, 74, 80, -71, 124, 85, -90, 64, -13, 34, -64, 78, -24, -45, -112, 80, -74, 41, -32, 65, -58, -91, 62, 43, -127, -73, 53, -30, -66, -128, -112, 83, -17, 0, 97, -74, 15, -78, -20, -70, -111, 13, -116, 70, -11, -39, -120, 45, -89, -70, 106, 35, -11, 80, -103, 3, 23, -97, -126, 21, 31, -118, 2, 16, -5, 103, 74, -110, 1, 89, -14, -9, -78, 0, -126, -125, 1, -4, 28, 56, 100, -108, -31, -128, 43, 56, -76, 77, -78, 55, -6, -24, 80, -80, -120, 105, 35, 63, -36, -124, -13, 9, 94, -80, 104, -57, 54, -58, 16};
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
    msg.setTimeStamp(0.99643668617);
    msg.setSource(55551U);
    msg.setSourceEntity(201U);
    msg.setDestination(37916U);
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
    msg.setTimeStamp(0.268456836215);
    msg.setSource(20697U);
    msg.setSourceEntity(5U);
    msg.setDestination(45034U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.615621445672);
    msg.setSource(33130U);
    msg.setSourceEntity(16U);
    msg.setDestination(61889U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.918104894973);
    msg.setSource(60248U);
    msg.setSourceEntity(181U);
    msg.setDestination(28979U);
    msg.setDestinationEntity(213U);
    const char tmp_msg_0[] = {-96, -75, -11, -107, 58, 28, -109, -46, -104, -24, 81, -103, 21, 78, 71, -42, 41, -77, 77, 45, 80, 99, 34, -117, -18, 5, -107, -119, 9, 5, -83, 7, 65, -70, -86, 51, 15, -48, -54, -118, -45, -85, -79, -18, -94, -42, -17, 112, -63, 34, -41, 83, -15, 14, -24, -31, -13, 7, 60, -100, 24, 33, -64, -107, -11, -84, -70, 23, 102, -64, -20, 5, 34, 31, 6, -14, -78, -87, -58, 10, 49, -92, -20, 103, -126, 116, 115, -104, 3, -127, -62, 121, 25, -84, -94, 75, -95, 28, -5, -90, 76, -18, 34, 56, -103, 69, -109, 12, -74, -34, 101, -14, -125, 43, 81, -65, -4, 80, 47, 62, 10, 32, -28, 95, -43, -37, -43};
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
    msg.setTimeStamp(0.809358292879);
    msg.setSource(50179U);
    msg.setSourceEntity(187U);
    msg.setDestination(21550U);
    msg.setDestinationEntity(210U);
    const char tmp_msg_0[] = {-102, -24, -117, 119, -20, 112, -22, 98, -76, 117, 121, -92, 17, -62, 90, 80, 41, 49, 21, -121, 17, 70, -25, -91, 6, 7, -25, -80, -25, -80, -67, 118, -73, -25, -35, 115, -120, -101, 32, -90, 44, -66, 11, -64, -103, 93, 8, -102, 56, 99, -40, -71, -18, -123, 12, -68, 35, 10, -74, 16, -56, -54, -63, -21, -19, -119, 37, 29, -59, -104, 111, 20, 69, -72, -126, -24, 122, -81, 73, -15, -12, 115, -125, -25, 84, -69, 105, -61, -103, 79, -28, -99, -56, 34, 73, 116, 85, -34, -45, -3, 49, -21, 54, 96, 22, 24, -73, 51, 42, 80, 4, 98, -25, 114, -81, -92, 86, 101, -56, 23, -45, 78, -49, 51, -23, -74, 43};
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
    msg.setTimeStamp(0.368651570569);
    msg.setSource(5801U);
    msg.setSourceEntity(65U);
    msg.setDestination(48970U);
    msg.setDestinationEntity(135U);
    const char tmp_msg_0[] = {-127, 80, 101, 22, -92, -106, -43, 6, 13, 76, -57, -95, 50, -12, -119, -99, -49, -28, 122, 126, 45, -60, 121, -49, -45, -109, -8, 31, -9, 86, 87, -38, -12, -90, 12, 45, -77, -12, 80, 69, -42, 42, 71, 50, -26, 33, -100, -44, 65, 100, 126, 124, 103, 20, 59, -48, 5, 92, -40, -15, 9, 71, 73, 16, -15, -76, 27, -99, -126, 33, 84, -48, -22, -107, -19, -116, 43, -99, 77, -57, 124, -116, 68, 121, 61, 122, 54, 45, 24, -58, -86, -56, -83, -65, -70, -117, 58, 109, 11, -53, 16, 27, 34, -93, -42, 32, 90, -70, 40, -13, 42, -9, -118, 14, 27, 60, -57, 117, 85, -124, -114, 69, -33, 102, -40, 116, -118, -103, 62, 77, 36, 67, 79, -73, 59, -73, 46, -125, 84, -31, 14, 61, 80, -19, 103, -3, 0, 21, 17, 59, -5, -28, -111, 53, 123, -69, -50, -105, -17, -33, 78, -87, -14, 10, 82, 116, 89, 52, -12, 61, 76, 51, -99, -128, 50, -102, -55, 122, 12, -12, -68, -56, 61, -13, 56};
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
    msg.setTimeStamp(0.00153934033454);
    msg.setSource(19000U);
    msg.setSourceEntity(126U);
    msg.setDestination(51361U);
    msg.setDestinationEntity(50U);
    msg.json.assign("RWMQTLXAQSBHKFBEYUUWWBBNSHQHMYVFHJNIKPAFELIBFKVXVNNNIFMVEIKATYGZCXSVPSIXRVPKYCQMXGGJHOLUJASXDWKZRYEMCJVNMXOGTWAPOIZFNTBMIEOJSGDARPGCLUSVPQLOBXPCJYWXAQHKZZWNOCVMIVBEXWDTCDJATILODJKFQSOSTHHADOQZYEUUEYUKFPURGCPZTRQLKRSUDFDUFWGLBYDTJBRDLPMHTOI");

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
    msg.setTimeStamp(0.460792219096);
    msg.setSource(6128U);
    msg.setSourceEntity(151U);
    msg.setDestination(38094U);
    msg.setDestinationEntity(126U);
    msg.json.assign("QVJVDPRWUXVYWSCMTVFYABCWCIPBZTLOYRLRREFQHVBNWYDHEZCGEIGFZNSAQCLCOCPBDVNTDDLXWFVJMZDLSUBIIMSZSPRNUSUQXEJKMPQPPNTQGWQTMFPNQJLRMTXQORKGOOLFIZMKVZA");

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
    msg.setTimeStamp(0.99109139515);
    msg.setSource(11923U);
    msg.setSourceEntity(235U);
    msg.setDestination(27782U);
    msg.setDestinationEntity(189U);
    msg.json.assign("YUYKVBMXEYGXXJBDOLWPQLVNFPVFEPIHZZFOGKQWGDZTNSYHWSOPQFPACLHNKWBZIBMATDQJUZMLXIENIUSETOMVLLMECHTKHRZSOUCHVGPBQUSYCDSVPKYNETWOKDFBUVBWRGGFJWWAKLGHOPEVJPNZLBFCWZLECSVANNRJCTRROMQMAKRXQIHQHZCDJJEITGAUYQRXSXRUYIDAKIBIGMWAZCYXVPDHSUJGDAOJARXTBK");

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

  {
    IMC::pwmBBB msg;
    msg.setTimeStamp(0.855983324591);
    msg.setSource(65134U);
    msg.setSourceEntity(93U);
    msg.setDestination(50443U);
    msg.setDestinationEntity(201U);
    msg.name.assign("CQPOLHAQITHBYCBHBOPABRUKWJKSEPAWRDOMVWSLDNKHBNXFPMQZVIKYMONWTVUCLUHENWFYSHLHPVXMKJJSZLCZMFSXEPZTDVMBXOYLSTXVZXMKZDRGINFAOGAGNCSMDTQUQLSJSTMUBJDDBIWFCGXFKZPTIEFQAICPVGLQJQDOORINWBHRFOXATARUEXEAYGHJYWQVE");
    msg.servstat = 225U;
    msg.servmin = 3966121201U;
    msg.servmax = 1102184042U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("pwmBBB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::pwmBBB msg;
    msg.setTimeStamp(0.612704341352);
    msg.setSource(63758U);
    msg.setSourceEntity(36U);
    msg.setDestination(29567U);
    msg.setDestinationEntity(16U);
    msg.name.assign("ZUSEELORGOVRAJDTWAKLKNLPISNWUIHMPAZSWMYHQTCGZOWVUQWSCPFPOWIOJKVBEHFLVYQYQOGYSWACLIJKHUMSOSEBRYXNTAHKDPBBFUDKFLRGXXESXQVZIASZNMBMVNUGCYRAYMJCHFGOYUOELDQTRFHXLFKAMCCYXEIOXJN");
    msg.servstat = 203U;
    msg.servmin = 3940107401U;
    msg.servmax = 391311860U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("pwmBBB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::pwmBBB msg;
    msg.setTimeStamp(0.733755708814);
    msg.setSource(9342U);
    msg.setSourceEntity(26U);
    msg.setDestination(42441U);
    msg.setDestinationEntity(203U);
    msg.name.assign("FXQUZLUQVTYQLEWLMBVVBOOXI");
    msg.servstat = 171U;
    msg.servmin = 3865101916U;
    msg.servmax = 1454276968U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("pwmBBB #2", msg == *msg_d);
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
