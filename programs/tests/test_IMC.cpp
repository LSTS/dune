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
// IMC XML MD5: a01668b6b58c5a2c92f4dfb2ebf02024                            *
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
    msg.setTimeStamp(0.643215518709);
    msg.setSource(60033U);
    msg.setSourceEntity(76U);
    msg.setDestination(63490U);
    msg.setDestinationEntity(70U);
    msg.state = 211U;
    msg.flags = 101U;
    msg.description.assign("NKRUDRGFQVHNJYDCCRIULNJDCVAPVILSSIROWOKTYEVHQXETNEKPYTSXTGZTNULFVKLXBZXCFHNCWGYXPMYNZJZQUXVRLDDEIQYBZBWTMLGVIRHDYAPKEUPEMUWXLLQBKISFTUJSCHKLAPNSFAAHAZDWTIZQFPGRMFUABXFOLWWCDSHAGHGJAIJIHIMRWGWKCG");

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
    msg.setTimeStamp(0.0762139404035);
    msg.setSource(35544U);
    msg.setSourceEntity(12U);
    msg.setDestination(13277U);
    msg.setDestinationEntity(100U);
    msg.state = 115U;
    msg.flags = 165U;
    msg.description.assign("KEPVADFYITNRTUJHRXDGKMBVYZLPAGKACDESFGEAOXLWDLGHAAIOGGFXYNFZLCGXZRFZPCYYPHSXXMSHURSRIIEAQVQCPVMLJEEIKNVGQWHHBKFDZMSBCYLKCDMYUVINTILDQWNMVOPU");

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
    msg.setTimeStamp(0.548557921533);
    msg.setSource(16383U);
    msg.setSourceEntity(97U);
    msg.setDestination(62612U);
    msg.setDestinationEntity(104U);
    msg.state = 59U;
    msg.flags = 103U;
    msg.description.assign("SFITVXGVGZQKMZPQDDQKGHLKNEHSTREXORPPBWSWGUBTHQPRFGTIDSNTHDJKNWHAVBQWNPXYFOYMLCLAMORFVMDMMNYOWCUJSIXIDKINAOVPAXKUSARWTWZPDBAMVAUYOTQRSGYUNTIOHWJLVDCYLCNPYUBNSJZ");

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
    msg.setTimeStamp(0.898486971394);
    msg.setSource(14299U);
    msg.setSourceEntity(250U);
    msg.setDestination(59905U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.691507194549);
    msg.setSource(60551U);
    msg.setSourceEntity(109U);
    msg.setDestination(38405U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.769384416436);
    msg.setSource(3548U);
    msg.setSourceEntity(108U);
    msg.setDestination(27467U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.363284236932);
    msg.setSource(26757U);
    msg.setSourceEntity(100U);
    msg.setDestination(25154U);
    msg.setDestinationEntity(36U);
    msg.id = 242U;
    msg.label.assign("JOGLTGTZTGAIHQFBXAPJONCHYWMYFHHTIBRMLKRDMFNKUMPGCQSZEGRJROOKSBFDIIHNJUTNKDZMVDBEMBIKUIGKVYEJVKUHBZNCNPXYCNFXEAVAGEQLQQWLTIXBURPNAJPXUVJDTWYCCOWXVFTWRKRFAROSLYSFXEHTVLSJMPNLHVAKOSLTSMRNGPQDOZUSYUWHYRXZDCWWQMBQDCPDBG");
    msg.component.assign("GDABHPSNTPARKUECKMQGKCXHXMJGDPWPOGORZSCZVPMLBVEGIYPCLABXQXMWNIKDIFLIEFYMUWCYUFXNPQVUGRZTSIZESRUBLUUG");
    msg.act_time = 45944U;
    msg.deact_time = 13181U;

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
    msg.setTimeStamp(0.525386654578);
    msg.setSource(61516U);
    msg.setSourceEntity(83U);
    msg.setDestination(44667U);
    msg.setDestinationEntity(215U);
    msg.id = 241U;
    msg.label.assign("NLMPCAIMBTPEAXXHOIPARTJXKOWCSZGFBO");
    msg.component.assign("PRFCBINDIXPQVLKBOABEQCQVXGGDROSAAJBULNGEWYVGETYWOKNJRHAKTPFRHCIGHFNLYXTNIWSZK");
    msg.act_time = 34923U;
    msg.deact_time = 24607U;

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
    msg.setTimeStamp(0.859610864455);
    msg.setSource(59862U);
    msg.setSourceEntity(136U);
    msg.setDestination(39083U);
    msg.setDestinationEntity(131U);
    msg.id = 95U;
    msg.label.assign("TMQRRKFCQGDARSIOUCBHMXMTVUAEBCVERVFBVGYECFEDFUWTQGLELTTPFWLBCOSNJNLQSHGPEMJLZFSGOGNLXJEKHWXYTFNPDJCUADQCWUIDKYHYMWONRWOPPKTZIFUSCOCK");
    msg.component.assign("OXTZYISXPMNMIDTVEWAQNXMKZWZJDUXUUBZPVTERMQFLHJVJDAQXUVVNIEUFLZXJGTNRLHCOCMHWIIMEPWQHFVPLIYSDFGLLXJOAXMTUDQAEOVSGYSDNAFIABPWMB");
    msg.act_time = 59855U;
    msg.deact_time = 5612U;

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
    msg.setTimeStamp(0.536799546085);
    msg.setSource(6569U);
    msg.setSourceEntity(34U);
    msg.setDestination(10485U);
    msg.setDestinationEntity(92U);
    msg.id = 243U;

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
    msg.setTimeStamp(0.745707468529);
    msg.setSource(34162U);
    msg.setSourceEntity(21U);
    msg.setDestination(18095U);
    msg.setDestinationEntity(128U);
    msg.id = 239U;

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
    msg.setTimeStamp(0.550134512118);
    msg.setSource(60336U);
    msg.setSourceEntity(77U);
    msg.setDestination(37911U);
    msg.setDestinationEntity(187U);
    msg.id = 154U;

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
    msg.setTimeStamp(0.220100704497);
    msg.setSource(58454U);
    msg.setSourceEntity(0U);
    msg.setDestination(5165U);
    msg.setDestinationEntity(3U);
    msg.op = 213U;
    msg.list.assign("UAHNAOVHUUMLKFIRJFGCXBGRQFGQBXWJSRADVSGDQPRKFOP");

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
    msg.setTimeStamp(0.557290061212);
    msg.setSource(26032U);
    msg.setSourceEntity(0U);
    msg.setDestination(4209U);
    msg.setDestinationEntity(56U);
    msg.op = 192U;
    msg.list.assign("QCIBMLFDJISXMRPXXNABLWXQQVWXSUNZRSUXGLLYYLVDWONSFPKZXJRTJMEROKJCOGEANKWDWHPVVSATQUFPUSDRWULBFBMPHQFTGQRGARACDBFPMDVUEJMCODZSJHHITCHBPVYAFNZWIOZBDMOZOIYUGGGUUQACWJAWHPYBLNEXVUYMAY");

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
    msg.setTimeStamp(0.554886164299);
    msg.setSource(39203U);
    msg.setSourceEntity(10U);
    msg.setDestination(12488U);
    msg.setDestinationEntity(48U);
    msg.op = 155U;
    msg.list.assign("QREUFNDDLWCYGVTHJCQCVJO");

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
    msg.setTimeStamp(0.270943404565);
    msg.setSource(22609U);
    msg.setSourceEntity(190U);
    msg.setDestination(618U);
    msg.setDestinationEntity(142U);
    msg.value = 199U;

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
    msg.setTimeStamp(0.86495483406);
    msg.setSource(53171U);
    msg.setSourceEntity(42U);
    msg.setDestination(58440U);
    msg.setDestinationEntity(251U);
    msg.value = 30U;

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
    msg.setTimeStamp(0.46688720221);
    msg.setSource(51990U);
    msg.setSourceEntity(103U);
    msg.setDestination(19293U);
    msg.setDestinationEntity(66U);
    msg.value = 221U;

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
    msg.setTimeStamp(0.065039983484);
    msg.setSource(59266U);
    msg.setSourceEntity(184U);
    msg.setDestination(16525U);
    msg.setDestinationEntity(23U);
    msg.consumer.assign("NCILQECVHQVOGEABPCUAVCVHSJU");
    msg.message_id = 32252U;

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
    msg.setTimeStamp(0.952628278944);
    msg.setSource(47265U);
    msg.setSourceEntity(127U);
    msg.setDestination(54968U);
    msg.setDestinationEntity(237U);
    msg.consumer.assign("ELUHZTHKLNMTCJNKQJDRYSPZXDMXWLVDNRDVHOACMQZKXF");
    msg.message_id = 64703U;

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
    msg.setTimeStamp(0.935519397922);
    msg.setSource(29950U);
    msg.setSourceEntity(186U);
    msg.setDestination(13622U);
    msg.setDestinationEntity(69U);
    msg.consumer.assign("QPDDYTECOIQTPUSEVBJVDINHTMRUSVHOGQAEAUROVXKUPFURHFGDTVWXK");
    msg.message_id = 22514U;

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
    msg.setTimeStamp(0.229218753742);
    msg.setSource(5031U);
    msg.setSourceEntity(244U);
    msg.setDestination(902U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.715371759284);
    msg.setSource(48216U);
    msg.setSourceEntity(245U);
    msg.setDestination(63784U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.367123374621);
    msg.setSource(12192U);
    msg.setSourceEntity(222U);
    msg.setDestination(25914U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.221010633238);
    msg.setSource(31025U);
    msg.setSourceEntity(150U);
    msg.setDestination(34221U);
    msg.setDestinationEntity(213U);
    msg.op = 42U;

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
    msg.setTimeStamp(0.201929148463);
    msg.setSource(59641U);
    msg.setSourceEntity(100U);
    msg.setDestination(5019U);
    msg.setDestinationEntity(113U);
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
    msg.setTimeStamp(0.512811719033);
    msg.setSource(10007U);
    msg.setSourceEntity(194U);
    msg.setDestination(49483U);
    msg.setDestinationEntity(49U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.649303364045);
    msg.setSource(51492U);
    msg.setSourceEntity(115U);
    msg.setDestination(38984U);
    msg.setDestinationEntity(26U);
    msg.total_steps = 182U;
    msg.step_number = 126U;
    msg.step.assign("QNVISHAGJURJPWYXCXLYPBBFUVTFCBDZJONKPMERNIHXQHXPCBSKSEWAQGUNSLDNZGGZULWTZARHNUIBDKREVKBQFKLDMXZSLDEIDQZAGRYMEOEZBAITWAANASBMGKFOJGEORVNHJSHNFWJVZJCPKMMGCVVWIPWEXMMZPXWLBQLDBKRFQTDPFTECQVSQWCYMUJOVXTQRKHUYAMVX");
    msg.flags = 3U;

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
    msg.setTimeStamp(0.350918975952);
    msg.setSource(21725U);
    msg.setSourceEntity(94U);
    msg.setDestination(33231U);
    msg.setDestinationEntity(187U);
    msg.total_steps = 130U;
    msg.step_number = 109U;
    msg.step.assign("KRSDFJPVNRNPQHINOZFOJMRKSYBEUALIGFTBQFHRRMELHWRPPXSZVDBDVJCIHIETXOBGMQQVWJJDSFNFCTBCUGUJTKVWMHXVYURWDQXXMBHZLCTYWMJSPIUWJDZXHIYGTCXKUPNSRZACTLHZOAYORTHVLIABGKEBOCKTJPHDPUYUKMRQFIQZFVBCDKEVUADYWXAMOYGWBFYTLQKSZXSEACZSNAGDSWYIGENAVJGQNNIQO");
    msg.flags = 141U;

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
    msg.setTimeStamp(0.437522863148);
    msg.setSource(57761U);
    msg.setSourceEntity(161U);
    msg.setDestination(32419U);
    msg.setDestinationEntity(54U);
    msg.total_steps = 235U;
    msg.step_number = 180U;
    msg.step.assign("WYKVMHLDQUFAR");
    msg.flags = 73U;

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
    msg.setTimeStamp(0.922143314739);
    msg.setSource(4353U);
    msg.setSourceEntity(4U);
    msg.setDestination(3768U);
    msg.setDestinationEntity(248U);
    msg.state = 23U;
    msg.error.assign("VVWFFALUCXSXDRPVLOGCJBVHYMKXKUWFLQOZHKYYZUURMNTUOEBSFRLFYQLSEAZPDQBTGVEIPANPUTNAAXJYQMTUJSKJMSIXTBWIORPTLIMPRKQHCPCYSENNDRVGCOBYAFHGPRGWEDMJTENYOZQVXVDGMZAWCGXWZUSFZHHONPHOKWHBWCJPAOLEDRIKVASFRBZAXQODHSUZMIFVIGJCWZYBNWQ");

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
    msg.setTimeStamp(0.361638461018);
    msg.setSource(3223U);
    msg.setSourceEntity(159U);
    msg.setDestination(32013U);
    msg.setDestinationEntity(68U);
    msg.state = 253U;
    msg.error.assign("VFINJOJQGGOXHGWOLOPGIURHBJEFLKERUAJKMCSAMCAKBZNDTXRMYMUKYROVAYHRTZVLPQFIPPFOWCHGDETMQDSZIDVPDBKDVSVUQTDXMHXDAHSCYBWLTNSIZLEXEQUUZFQNTUSIFGAUQNBFBXWZNMEYGBGZHYWAPYAEHLBORYOEPZFJIW");

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
    msg.setTimeStamp(0.841045491755);
    msg.setSource(19703U);
    msg.setSourceEntity(161U);
    msg.setDestination(18997U);
    msg.setDestinationEntity(225U);
    msg.state = 239U;
    msg.error.assign("SIBXIHSGBFHCJUWKLHRPPFXXDZCVGNZNMWRYCCWFPHIGTLAOHNEEBFGIVZIHXCEXYOQDTADUBCJYLROODIAZHWISQMYJUQRSYKMEZGONCSRVJRUQBFEBYZYVMELBDOKXQLOXVTAKDMRUNWS");

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
    msg.setTimeStamp(0.401703801767);
    msg.setSource(5425U);
    msg.setSourceEntity(171U);
    msg.setDestination(37716U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.654100762903);
    msg.setSource(10824U);
    msg.setSourceEntity(20U);
    msg.setDestination(39114U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.0924410616122);
    msg.setSource(9835U);
    msg.setSourceEntity(15U);
    msg.setDestination(47995U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.957793124482);
    msg.setSource(36170U);
    msg.setSourceEntity(34U);
    msg.setDestination(1762U);
    msg.setDestinationEntity(22U);
    msg.op = 148U;
    msg.speed_min = 0.196582663342;
    msg.speed_max = 0.638516600049;
    msg.long_accel = 0.00488232339012;
    msg.alt_max_msl = 0.843402804669;
    msg.dive_fraction_max = 0.608538509255;
    msg.climb_fraction_max = 0.232698885285;
    msg.bank_max = 0.843115464248;
    msg.p_max = 0.462564143825;
    msg.pitch_min = 0.379155645392;
    msg.pitch_max = 0.113731656111;
    msg.q_max = 0.152603118277;
    msg.g_min = 0.644847916401;
    msg.g_max = 0.157516832224;
    msg.g_lat_max = 0.4236852713;
    msg.rpm_min = 0.630865279017;
    msg.rpm_max = 0.80851156905;
    msg.rpm_rate_max = 0.212526414596;

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
    msg.setTimeStamp(0.300117353599);
    msg.setSource(52126U);
    msg.setSourceEntity(192U);
    msg.setDestination(60556U);
    msg.setDestinationEntity(92U);
    msg.op = 137U;
    msg.speed_min = 0.959519600238;
    msg.speed_max = 0.377746985771;
    msg.long_accel = 0.00651785041637;
    msg.alt_max_msl = 0.24284423794;
    msg.dive_fraction_max = 0.278042958765;
    msg.climb_fraction_max = 0.687500010813;
    msg.bank_max = 0.778396255729;
    msg.p_max = 0.968424302141;
    msg.pitch_min = 0.147779197255;
    msg.pitch_max = 0.26862655207;
    msg.q_max = 0.224118742017;
    msg.g_min = 0.589723995338;
    msg.g_max = 0.0826794024056;
    msg.g_lat_max = 0.427006768618;
    msg.rpm_min = 0.425402136235;
    msg.rpm_max = 0.612860381552;
    msg.rpm_rate_max = 0.961137657843;

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
    msg.setTimeStamp(0.697833396424);
    msg.setSource(52011U);
    msg.setSourceEntity(153U);
    msg.setDestination(19479U);
    msg.setDestinationEntity(57U);
    msg.op = 73U;
    msg.speed_min = 0.309948756446;
    msg.speed_max = 0.39849569377;
    msg.long_accel = 0.364256431443;
    msg.alt_max_msl = 0.375620055814;
    msg.dive_fraction_max = 0.331681520194;
    msg.climb_fraction_max = 0.774493487308;
    msg.bank_max = 0.480387669035;
    msg.p_max = 0.655280449921;
    msg.pitch_min = 0.522721074313;
    msg.pitch_max = 0.593048677296;
    msg.q_max = 0.979184302315;
    msg.g_min = 0.946191927983;
    msg.g_max = 0.432980342338;
    msg.g_lat_max = 0.0342440398969;
    msg.rpm_min = 0.165831985153;
    msg.rpm_max = 0.432487072021;
    msg.rpm_rate_max = 0.827163401649;

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
    msg.setTimeStamp(0.839073506134);
    msg.setSource(58983U);
    msg.setSourceEntity(237U);
    msg.setDestination(14867U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.800811294526);
    msg.setSource(24023U);
    msg.setSourceEntity(14U);
    msg.setDestination(40324U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.668879345828);
    msg.setSource(1309U);
    msg.setSourceEntity(119U);
    msg.setDestination(62271U);
    msg.setDestinationEntity(132U);
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 201U;
    tmp_msg_0.dt = 18U;
    tmp_msg_0.op = 244U;
    tmp_msg_0.request_id = 5884U;
    tmp_msg_0.object_id.assign("VXLKATNQRTBABSTPGYTFIONSRTCRAELEFFCXKGQNJCGHCHVOTDZMHHLCJXNXOXMTIXZLVANOBAHKQMCKFJORJFROWQMAKFNTJZJCGGWRAZWPTZMIAQHGPDWEFZIBWIGMNVLYHLQBDYJODXUZYKWSSXVESMHSMJDNKIORJAPVIMFIGYWKLVVBUSDRRPWUOBUPEWSQJMHQZXVBYUQKEBPBSFHDIDPTQCVZUCUNLW");
    IMC::SetEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MLAJNVZUZCZSCUATYBVORPHHOBWIWEIHOGEAEXKVNIYGJQJVYUFYDEAMMTPZLPRQDTCIZSSVTKAOJCHIOLVKSRDWWGTSKHUWJUZTUUQJBGPNERQXLGGGLEQBNNICEXFEHXIRZYUBJDQGLNOTWDKSQNMWCBZCNAHMQMRRMOFFCFHTXPFSRAVVJCYPOFIKWGKBDVNWLAV");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("LLGTUOFBSGAMHBXXNBXMUAJVLMIXTQCKPXMOGRPFJBYXRTYONSVLCAGRKBXPJMWVZGADDSQNMQMKEMLNLKRTLCWIHBFUSNDCNVCHQLUSBOTROCPZYNZFVHMEQKHZZEYNGDEAFGVVZIWVKKYCTFJWJRIHMQSUIOHWYGODNFAJEPCNJUPJPGAAGLBDQXTAPIUTREIXRHAQWTWW");
    tmp_tmp_tmp_msg_0_0_0.value.assign("KBVSROFDFDIFETQHLOPBWJAFJDHNLIUMNZZIWYKDROEMWNTJNKPBBODGHPCXLHTMFVHIWAYPJMYBBRQJVWKLIGFGYLVFBUKSVSGGEUTVRDQPSPTCXCQYMRRYSEAEQNLINBCCPORIUTAGMYAQJXLWZAUMLSJFMFCCZXEVURHJDAEZWANZCXEORDMOYVK");
    tmp_tmp_msg_0_0.params.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("HQAGDRJTAGNWOEEPGFYSOIHKIZJGIREKIHDHRMYEBXUXQOUTQZLLLPMBHYKEELWUJIQBZRAVKDMDHFJMXODQYCDHPWCSVKCNMUUBPVZKXLCYF");
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
    msg.setTimeStamp(0.462509819417);
    msg.setSource(17911U);
    msg.setSourceEntity(53U);
    msg.setDestination(45104U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.45896160091;
    msg.lon = 0.360444640537;
    msg.height = 0.85199041018;
    msg.x = 0.1225387898;
    msg.y = 0.54756943784;
    msg.z = 0.63755972426;
    msg.phi = 0.788967335431;
    msg.theta = 0.224407122209;
    msg.psi = 0.759326776157;
    msg.u = 0.8738221983;
    msg.v = 0.700456303825;
    msg.w = 0.894035854215;
    msg.p = 0.0792228779567;
    msg.q = 0.203003388983;
    msg.r = 0.370959332033;
    msg.svx = 0.591195553806;
    msg.svy = 0.754922466655;
    msg.svz = 0.973401650673;

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
    msg.setTimeStamp(0.424020380903);
    msg.setSource(46254U);
    msg.setSourceEntity(27U);
    msg.setDestination(37689U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.672046652818;
    msg.lon = 0.517798592875;
    msg.height = 0.633190006575;
    msg.x = 0.754946677039;
    msg.y = 0.0511814364679;
    msg.z = 0.764226128953;
    msg.phi = 0.868477846952;
    msg.theta = 0.403438610495;
    msg.psi = 0.0294122391155;
    msg.u = 0.831854522828;
    msg.v = 0.742492850738;
    msg.w = 0.683818488845;
    msg.p = 0.228994995529;
    msg.q = 0.19290068859;
    msg.r = 0.940591356303;
    msg.svx = 0.680815055974;
    msg.svy = 0.885032361533;
    msg.svz = 0.48169111369;

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
    msg.setTimeStamp(0.583502599462);
    msg.setSource(855U);
    msg.setSourceEntity(10U);
    msg.setDestination(13979U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.955617224314;
    msg.lon = 0.54597315427;
    msg.height = 0.899950896793;
    msg.x = 0.899624337931;
    msg.y = 0.601437162338;
    msg.z = 0.056013935545;
    msg.phi = 0.135739826496;
    msg.theta = 0.91527068155;
    msg.psi = 0.690489842604;
    msg.u = 0.210359562764;
    msg.v = 0.0116652327137;
    msg.w = 0.39123797633;
    msg.p = 0.187205357137;
    msg.q = 0.143441327725;
    msg.r = 0.434014074413;
    msg.svx = 0.794159482075;
    msg.svy = 0.117074133918;
    msg.svz = 0.094778531285;

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
    msg.setTimeStamp(0.19483285816);
    msg.setSource(31299U);
    msg.setSourceEntity(118U);
    msg.setDestination(9739U);
    msg.setDestinationEntity(193U);
    msg.op = 26U;
    msg.entities.assign("NFPEXGJEBXPRYPQVHZZCFMSNRFGKAAISBVOKQHBRKWWKJEKVYARABFITNUXZUNUYWSEYQFSHINEMWTCBSQVTFYLTCMKGNDQEZESLSOAEUPXJJAOQHXJQRMIZYBKMVCIHXUWLMRPUQZLPSIXDLTZCCMIAFMDWBJWDCMYTGKHDHVNXOGGSVCPNUCDVDPTRTLEOUGNUAJBDRTKJVYFILDDWZXGHLSKGZYJNWMEJTBPXOOAOVYUQQOI");

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
    msg.setTimeStamp(0.527296122249);
    msg.setSource(64665U);
    msg.setSourceEntity(35U);
    msg.setDestination(40908U);
    msg.setDestinationEntity(187U);
    msg.op = 247U;
    msg.entities.assign("NWYXDTBPEUXCMFGWQJNOKFDCUNCVYSFZJHREFCIPOURDSNMAOBOVLLLYFDLTSYEDCWVWUXCACCBVKTEZTQBYUVIAHLIXHMSBDPQRVRSAQAUOWYK");

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
    msg.setTimeStamp(0.996245759494);
    msg.setSource(3783U);
    msg.setSourceEntity(129U);
    msg.setDestination(48533U);
    msg.setDestinationEntity(51U);
    msg.op = 191U;
    msg.entities.assign("QCGNSKMWTDYHCOABAKHDNQUHKJUZVXSRLKCDGXUBWBJEAFQCROJTPLHSBYFLTXNRULCWDFLGEJBIVFWNQCVZHOFGLJGCMTEFYPMYRNKIDOLBVRISVYD");

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
    msg.setTimeStamp(0.46752651163);
    msg.setSource(25997U);
    msg.setSourceEntity(120U);
    msg.setDestination(64528U);
    msg.setDestinationEntity(103U);
    msg.type = 75U;
    msg.speed = 41414U;
    const char tmp_msg_0[] = {19, -32, -24, -59, -61, 62, 94, 9, -18, -62, -67, -124, -98, -120, 103, 13, 78, -107, 2, -97, 111, 22, 55, -94, 110, -102, -22, -84, 124, -23, 15, -11, -99, 11, -72, -10, 90, 81, 64, -114, 61, 112, -52, 75, -116, -53, -52, 14, -117, -51, 50, -124, -29, -115, 123, -60, -13, -64, -68, 126, 58, 43, 7, 104, -86, 33, -109, 121, 95, 29, 74, 73, -98, 47, -37, 62, -18, -106, -90, 29, -110};
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
    msg.setTimeStamp(0.16688512081);
    msg.setSource(18133U);
    msg.setSourceEntity(162U);
    msg.setDestination(54836U);
    msg.setDestinationEntity(73U);
    msg.type = 238U;
    msg.speed = 18304U;
    const char tmp_msg_0[] = {-102, 76, -13, 89, 84, 60, 42, 102, -90, -1, -96, 73, -20, -10, 105, 31, -16, -44, -25, -94, -87, -8, 70, -108, 93, 63, -56, -87, 39, -88, -65, 52, -111, 101, -100, -108, -5, -52, -50, 101, -80, 39, 47, -17, -110, 80, -34, -69, -89, 85, -31, 107, 64, -111, -36, 85, 33, 99, -115, 85, -1, 118, 50, -11, -94, 69, -27, 25, -109, 43, 70, 34, 126, 97, 49, 55, -99, -1, -110, 124, -49, 117, -80, -17, 92, -34, 25, 114, 112, 68, 7, -5, 46, 82, 69, -45, -113, -10, -43, -52, -7, -55, -31, -128, -73, 85, 19, 53, -31, -17, 126, -44, -69, -116, 82, -20, -77, 90, 87, 13, -34, -73, 51, -89, 9, 92, -58, 34, -40, -104, -25, -99, -111, -106, -55, 104, -95, -19, -71, -62, -48, 99, 105, 37, 82, 108, -44, -5};
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
    msg.setTimeStamp(0.837039005579);
    msg.setSource(28813U);
    msg.setSourceEntity(170U);
    msg.setDestination(30046U);
    msg.setDestinationEntity(22U);
    msg.type = 87U;
    msg.speed = 50388U;
    const char tmp_msg_0[] = {23, -89, 98, -82, 36, 34, 70, -110, 81, 24, -23, 94, -5, 53, 11, -115, 30, -13, -109, -65, 68, -118, -32, 8, 100, -76, 108, -11, 119, 25, -99, 72, -106, 37, -128, 26, 24, -90, 22, 12, -128, 91, 43, -128, 25, 45, -98, 31, 95, -78, 67, -67, 21, -101, -53, 66, -45, 40, -101, 72, 102, 119, -69, -22, 65, 28, -52, 49, -109, 70, -18, -104, 76, 95, 70, 84, -51, -94, 21, 95, -121, -38, 55, 101, 109, 59, -36, -110, -39, 27, 8, -101, -101, -58, 113, -74, -50, 3, 102, -15, -3, -103, 31, 59, -60, 37, -42, -48, 4, 84, 92, 45, 23, -16, 117, -65, -127, -70, -36, -92, -42, 86, 126, -73, -36, -115, 113, 14, -34, -34, -120, -106, -23, 78, -14, -33, -12, 49, -79, 121, 100, -38, -128, 12, -51, 70, 43, 106, 18, -87, -45, -115, -91, 20, 3, 47, -88, 63, 13, 88, -10, 37, 18, -96, -19, -78, -115, -85, 109, -101, -57, -108, -50, 6};
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
    msg.setTimeStamp(0.0825923033882);
    msg.setSource(42791U);
    msg.setSourceEntity(26U);
    msg.setDestination(35190U);
    msg.setDestinationEntity(153U);
    msg.op = 17U;
    msg.tas2acc_pgain = 0.158109385108;
    msg.bank2p_pgain = 0.216486828392;

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
    msg.setTimeStamp(0.252536044853);
    msg.setSource(59749U);
    msg.setSourceEntity(187U);
    msg.setDestination(42407U);
    msg.setDestinationEntity(124U);
    msg.op = 214U;
    msg.tas2acc_pgain = 0.189956788104;
    msg.bank2p_pgain = 0.917338751005;

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
    msg.setTimeStamp(0.690338165247);
    msg.setSource(31703U);
    msg.setSourceEntity(66U);
    msg.setDestination(8814U);
    msg.setDestinationEntity(106U);
    msg.op = 209U;
    msg.tas2acc_pgain = 0.873694594094;
    msg.bank2p_pgain = 0.586155609282;

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
    msg.setTimeStamp(0.502239503378);
    msg.setSource(55116U);
    msg.setSourceEntity(78U);
    msg.setDestination(41996U);
    msg.setDestinationEntity(76U);
    msg.available = 2413367604U;
    msg.value = 75U;

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
    msg.setTimeStamp(0.622918622459);
    msg.setSource(52192U);
    msg.setSourceEntity(54U);
    msg.setDestination(26854U);
    msg.setDestinationEntity(166U);
    msg.available = 3087230363U;
    msg.value = 84U;

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
    msg.setTimeStamp(0.274050129493);
    msg.setSource(15309U);
    msg.setSourceEntity(229U);
    msg.setDestination(51772U);
    msg.setDestinationEntity(66U);
    msg.available = 167466749U;
    msg.value = 104U;

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
    msg.setTimeStamp(0.453215387428);
    msg.setSource(44375U);
    msg.setSourceEntity(90U);
    msg.setDestination(2018U);
    msg.setDestinationEntity(107U);
    msg.op = 180U;
    msg.snapshot.assign("ZPGZVMYBDBRQGHCMENDX");
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.321633679505;
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
    msg.setTimeStamp(0.38738393309);
    msg.setSource(48638U);
    msg.setSourceEntity(136U);
    msg.setDestination(62875U);
    msg.setDestinationEntity(1U);
    msg.op = 30U;
    msg.snapshot.assign("ICPYSYPMHPJXAQFYBQDHRFQTDLLWHKPDRBJDAHSZTVXSOTGQKEEIQGOLNYOIXFBERTUHVMBZQAVUCDKTOSCNWXLAMCTFSHPLXKPWNEVSRDGPEXJRJJZGFUOVVJYKOACFEBVZHIMYLYIZKUGCXGMTKIXJCHCJRTRG");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("NBJKSAKYKJGYVQETYKIUCUPIGTCOMERYIHUXHAMUUSAKQUZPDZGNFQDHLYRGOABUNJPVHRTKOPQVFHDMKICEONEMFRAVBKAWUJIUDMPCLOFYKMDBNJAJFYRVLXZWXOZQGDLEQGPSFRSYPSPILMMCQVSLIWTNROOXUZCCCOPDTLJ");
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
    msg.setTimeStamp(0.918129513992);
    msg.setSource(24294U);
    msg.setSourceEntity(98U);
    msg.setDestination(41950U);
    msg.setDestinationEntity(144U);
    msg.op = 19U;
    msg.snapshot.assign("XZAAVQYAUILEEGERDOCWEKHVZWUDKPRSHTIRIDLUZUFNLRMDPGCYQJCTIPFWMBLNFVTBQBLMNJEKBTAODXYJSBSHYPNFZOLUXWLFUKHEOPGLAFSDSUEWVVIZYQWNITXNWGCGOZHPXCFMDQJOBPGCLFROWDYANKSNMPGHSGJOIYM");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("GAUJSSXAZLVFYWZVCAPLUXCHBIZPQJYMFQSMALRWCJUHDTSIEBBHVOWJWTWTWCZKJYMWDDEZJRFOVCQNZPIFOTACKFXRB");
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
    msg.setTimeStamp(0.518420560412);
    msg.setSource(58959U);
    msg.setSourceEntity(90U);
    msg.setDestination(18752U);
    msg.setDestinationEntity(206U);
    msg.op = 14U;
    msg.name.assign("SVLGALZUMUUNLWEPXFQRCEGOHHZHWUYHNTKIDJGSQXPSFABBJAYQKRTECECDEMCNZNAWJAQVRMPVROFKGRYBASMGGOXHFUJYVJLZLWYZBHXDXHOOUGPIXEBLKIDJTUVNVKLIUIMFMBZJITQYPTDJXVMOWTDU");

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
    msg.setTimeStamp(0.884221846753);
    msg.setSource(29973U);
    msg.setSourceEntity(5U);
    msg.setDestination(30873U);
    msg.setDestinationEntity(174U);
    msg.op = 121U;
    msg.name.assign("OQHCJFNRGQDGQGEETEZDWQZZBMFNBSNGYULYNAXKKIVZJTOHTOHYSGUUOFEPZDRUKKFJATPIREGESYXMDACVPVRMWXWLUYIQDCCXPSQSVJFBTSCDNLXPVAWWFDORNNLNZZRHFIBJGHQCKAVKVQLPAMOACYGACWEDKRKJOIQIGTTYPEGKPWXBQDDITXBUCZWVBLBVXJRLATJSCYHHZSLLMMPXRPVOHUKXJRWJSFON");

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
    msg.setTimeStamp(0.608290573538);
    msg.setSource(16908U);
    msg.setSourceEntity(80U);
    msg.setDestination(52814U);
    msg.setDestinationEntity(98U);
    msg.op = 0U;
    msg.name.assign("OIIOABXEKGWQZSDLBAYNPWVOAGVCNNXGKKCHXHMYFHSCKRWZCTSLIHONAKYUTMQPPNUENDUPUBHQQXJSBNTIQMAOFMSSLYYCPCTRHDLWOMENFDIXVPLWACUA");

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
    msg.setTimeStamp(0.461609461831);
    msg.setSource(51357U);
    msg.setSourceEntity(117U);
    msg.setDestination(8412U);
    msg.setDestinationEntity(203U);
    msg.type = 11U;
    msg.htime = 0.66368939581;
    msg.context.assign("YZBBHUHYCDTAGJWQKDKGBLQIPTWCPEARSZPAJTUGPJRALPRFZUPCZYCWAETNYOHVMZFTBDMMYIXLDIWXLXNNTQCVOKQVOGXSKKEFDXGSNLJEVSAUFHRVWIVNQMXEXKROXTUQQCDTMQBIDCRUAHJVHMPZZLCIYZGNEQLXHVWFVGOLBOMTEPJFPJJUEGHSRGOYEIBIBR");
    msg.text.assign("QHZJSGTKUNULUZTPGXLFYKZDKEVBZIGIJNKMXBIFOZIKHQJVOYTALSVJUTFCIHCHMSPWGPLDQWNTFUXDRHOVMHXYZ");

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
    msg.setTimeStamp(0.725236663903);
    msg.setSource(38106U);
    msg.setSourceEntity(223U);
    msg.setDestination(17132U);
    msg.setDestinationEntity(240U);
    msg.type = 234U;
    msg.htime = 0.465706501696;
    msg.context.assign("ERSVFZYWZITALNPMPPYLNZJGRZIMEDCYFGWWFUXISMEKHQEQMXTTVIFKHYLBYCIHOQSOWUFWJCWZFHCXKITCXGMKIZQGLNOUGMNOKOJAFBFYAPWH");
    msg.text.assign("QGPAKGBJCVIRHUNEHYYVVTMRDIHIXWQHSIUMMTMUPNSOOLFXBGUEWTQSBIBGNBVEFORZUFMRZCWGFLRMCDOXUILIRNWALXFRIZFEXKYKJDAAM");

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
    msg.setTimeStamp(0.874866002645);
    msg.setSource(9812U);
    msg.setSourceEntity(75U);
    msg.setDestination(10553U);
    msg.setDestinationEntity(181U);
    msg.type = 122U;
    msg.htime = 0.433291527965;
    msg.context.assign("UWTQPDGMIAQAYFEMHBISCNZJMNVDLECWRERTCSVNHOABADMFLSKTEKPQOBDNXLLESHAYIZAPCBJTRXRJGHYJLBSXZJCMVBEQGTKKMPMGABHKTYCUVCNVDOXRSRSZLP");
    msg.text.assign("RHYCIFILYYPSCJOYMKMPVGBFNMWCDIEWHNEPXKXNXRLLFQLLOVOHNMVTTOYMDUKFJHCFLWJESGAJXOOWLGHWWHGBDZQFRVSAVESQUKJVBAICKRSQIWGMLNRNORLNHNBTQQTGWYYKWZUVQMHUVUNRPPHBUSEIJZADTIVIJBKBNBDRVDEMHWPSKFIUEGTQZOCPFQJXYAKYQGPRZBTSFDZTDCSAODGEZTXJXAAU");

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
    msg.setTimeStamp(0.304584057018);
    msg.setSource(61542U);
    msg.setSourceEntity(130U);
    msg.setDestination(6559U);
    msg.setDestinationEntity(133U);
    msg.command = 158U;
    msg.htime = 0.669511564674;

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
    msg.setTimeStamp(0.880919417534);
    msg.setSource(60726U);
    msg.setSourceEntity(107U);
    msg.setDestination(20377U);
    msg.setDestinationEntity(18U);
    msg.command = 150U;
    msg.htime = 0.0476228236471;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 149U;
    tmp_msg_0.htime = 0.284718649045;
    tmp_msg_0.context.assign("XLIIQDBCLMVXUJYVNRQKNTVKJTZXTOUVISCVWZDPVGSMEGEUXSIYGRHWOADNRDFGOOXWPWIFKPXMNPSJILZMUJXJLEAZFQRYYNUAFVBNWQBTWHRPEBUF");
    tmp_msg_0.text.assign("PWQEJDATSYBTMXRLZFTMUKHCOIJXMKBQRAYNTUMZQAYMSOINRGCSACNPMBKJWEYCOLEAJQPXJDYRDDDLFUXKPVGYNFXAFPNZZDNXWNRFXXBCLGVVFKFMTOEGHSMSAGTPIJHPEWXOHHUVERBQWIGELHZZQWJVWYRAGNSJIHKQCMXEIDUVSJURCBKKIVFLQDNOTZRTZKSOHHSIW");
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
    msg.setTimeStamp(0.27096531989);
    msg.setSource(9657U);
    msg.setSourceEntity(228U);
    msg.setDestination(38897U);
    msg.setDestinationEntity(47U);
    msg.command = 99U;
    msg.htime = 0.27067012314;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 107U;
    tmp_msg_0.htime = 0.155327926015;
    tmp_msg_0.context.assign("ZUAFYEJIIGHHREBMKMZMFTUZOSJYIHXUQZNYJHWNYKZPZMCKPEPLSRIATIOFITGSVBIPQRXTFFNUFNXWFAXYCMPTVWMZAVRCLGLKCKWUCUYGZFBL");
    tmp_msg_0.text.assign("BKANXVKWCHUAZSWWABUTOLFEGBPRBGLISXCZUKFXIIAHUOBJCMEJFRDYBZPFGMKVMRBAPTSRNHTQNCKQJHJIEYMHJFMLICQJFGUDJQSEAREWHOTYUEYPJVCSZVKGDDBIRQKHMIFOXMPWBOZUXSLMSQDPREINLHWMHDVOFOKNGHDXQPOQGWZSLSCGVWIJTMVENPVOAJ");
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
    msg.setTimeStamp(0.557034459981);
    msg.setSource(25884U);
    msg.setSourceEntity(27U);
    msg.setDestination(37276U);
    msg.setDestinationEntity(185U);
    msg.op = 234U;
    msg.file.assign("KPBOFCAGPLWXMMCTOSBXXPHLUYBHHAJROZQNWMJPBZBKRTGFIEHOVAYUMDMSKIFQSJNYONTFSOIUFJZGLXMPIDBLCEKBDWQWJFCQAYPJRGJAWXCNGPYKVAEEPOMVUUZFNXLWKFHUA");

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
    msg.setTimeStamp(0.860603636976);
    msg.setSource(17607U);
    msg.setSourceEntity(188U);
    msg.setDestination(42171U);
    msg.setDestinationEntity(36U);
    msg.op = 114U;
    msg.file.assign("IBXBCNMNIRDGWHOGLJPWYKSUVHZIDMEUQYVQYAXOVRPFLBPWJ");

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
    msg.setTimeStamp(0.436650426552);
    msg.setSource(4429U);
    msg.setSourceEntity(248U);
    msg.setDestination(13910U);
    msg.setDestinationEntity(120U);
    msg.op = 154U;
    msg.file.assign("VQMPKIXLMPLXGYAWYSFAUZVPOQEDTCAAKTESWUITOLGXFUUXOLHZVOXNYHTOEABHMFIAGCQTXKMFINLJJSEOPFGUDUBGCNUNPOVHYQMGOJJUWIYKZWRRRWCHNVNBTMEJPGGWMBPBQXDKWNRCMHQJDVPZBZSSRRZEVKQDY");

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
    msg.setTimeStamp(0.324146052981);
    msg.setSource(12873U);
    msg.setSourceEntity(169U);
    msg.setDestination(27846U);
    msg.setDestinationEntity(207U);
    msg.op = 218U;
    msg.clock = 0.371373356052;
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
    msg.setTimeStamp(0.525758389901);
    msg.setSource(49917U);
    msg.setSourceEntity(238U);
    msg.setDestination(22667U);
    msg.setDestinationEntity(34U);
    msg.op = 188U;
    msg.clock = 0.33763452778;
    msg.tz = -65;

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
    msg.setTimeStamp(0.802586363516);
    msg.setSource(21729U);
    msg.setSourceEntity(75U);
    msg.setDestination(35045U);
    msg.setDestinationEntity(246U);
    msg.op = 103U;
    msg.clock = 0.592967603424;
    msg.tz = -39;

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
    msg.setTimeStamp(0.829361999578);
    msg.setSource(26720U);
    msg.setSourceEntity(191U);
    msg.setDestination(43379U);
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
    msg.setTimeStamp(0.341040851418);
    msg.setSource(17493U);
    msg.setSourceEntity(78U);
    msg.setDestination(6713U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.576279558454);
    msg.setSource(64522U);
    msg.setSourceEntity(189U);
    msg.setDestination(16943U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.900073973445);
    msg.setSource(21366U);
    msg.setSourceEntity(169U);
    msg.setDestination(48040U);
    msg.setDestinationEntity(212U);
    msg.sys_name.assign("RBGHCXFDEEOTNWQLEDAVJXBAGAPVSYOKEYTT");
    msg.sys_type = 10U;
    msg.owner = 22262U;
    msg.lat = 0.912504640376;
    msg.lon = 0.299301323603;
    msg.height = 0.226797905531;
    msg.services.assign("BSKSZZMATQLEJRUMEOPHJIDHEMPFRIQSXBVJRTM");

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
    msg.setTimeStamp(0.314682685968);
    msg.setSource(14022U);
    msg.setSourceEntity(50U);
    msg.setDestination(19871U);
    msg.setDestinationEntity(34U);
    msg.sys_name.assign("EVPXDHHNCSSVRSIWSXYYRFFOYMDTOFUDGPSBONFCDGLJPJPJWMHLFUYXWZBMAPOHIZMJJMKFLAKQYNETGWVHDCUOTNORUGKITECTUJQJ");
    msg.sys_type = 90U;
    msg.owner = 40991U;
    msg.lat = 0.501020416648;
    msg.lon = 0.870830589307;
    msg.height = 0.938363981552;
    msg.services.assign("BKXCEVPNRHFDCOSXNPAXHCBYBHNSAWYUWSNZWUGTVSLTRVRJKDULOZCMROGRFEZQDYLZS");

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
    msg.setTimeStamp(0.721388543963);
    msg.setSource(35345U);
    msg.setSourceEntity(236U);
    msg.setDestination(22203U);
    msg.setDestinationEntity(203U);
    msg.sys_name.assign("SSFWOEDFWLYTDKIPBUUFTQXOXZAQLOSRCOTZYYWPCCHWAUZHDQJXVIWCNPJYTEIIQBUEYFFVQLZSXRWCRNVXIQVAQEUYKSBKZKILJIMHEFRMOASTJHGDFVPGFSOPHPEQVYMNKGTMZETT");
    msg.sys_type = 140U;
    msg.owner = 53569U;
    msg.lat = 0.2892628872;
    msg.lon = 0.910596745164;
    msg.height = 0.141732806206;
    msg.services.assign("HQREWUWAAULVWTYIOVXDKFCYEKYFHMBBZDWBBXTUPKPFWCFQMRIODLCUSIBVUPRQHAZYOTEZMOIKAVBTTACSZMWRINKNPNKZYGMJNHLNMSHSYFCKVRAYQHFIJIGMLPFDBUEOIEQALNXWBFPZYXXGKTJYGACBPLVJUSOTSCXWLKMGADGLCHDOGUDZEARHEPCHCIIXMJDJSOJOFVLJXZSZNQSUNRMD");

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
    msg.setTimeStamp(0.466887921135);
    msg.setSource(26324U);
    msg.setSourceEntity(53U);
    msg.setDestination(9493U);
    msg.setDestinationEntity(12U);
    msg.service.assign("ZJNMDRXJZFORQLYPDBJAJRWLGWWZOX");
    msg.service_type = 131U;

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
    msg.setTimeStamp(0.108444673572);
    msg.setSource(63797U);
    msg.setSourceEntity(180U);
    msg.setDestination(37699U);
    msg.setDestinationEntity(139U);
    msg.service.assign("WGLWCDZDPYYPSXIBQBXOSKUQAOKHERLOKZRTLMWWOSZCGLDMQGDNBALTJNHKYLFSHBPLPMKOXUKCIRUTTRNRVJNCGEUWYFPWXVIEMMFQPVYYXBITQGCOKSMWPQUXCJCJKXEUVEATMEIOQLVUDBXERJNPAMFGSVUSYXJVNCECHDDQIOZHGDYZLS");
    msg.service_type = 133U;

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
    msg.setTimeStamp(0.351149691581);
    msg.setSource(47973U);
    msg.setSourceEntity(227U);
    msg.setDestination(7594U);
    msg.setDestinationEntity(37U);
    msg.service.assign("WWTBPKXZDTHQFHTYSRVAEDMNBBPGUFFGRYXWJAQMWEMRJINEOQVXMGMBZYGIOPEAOZTSJLQBSUGLPPYHKZQYRJTLGFIYQTGPHSKZMNVKTIVSNNIGLOYKBEUWYZLHTDUXZAXXHEAABUD");
    msg.service_type = 158U;

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
    msg.setTimeStamp(0.366521510529);
    msg.setSource(63203U);
    msg.setSourceEntity(172U);
    msg.setDestination(34456U);
    msg.setDestinationEntity(183U);
    msg.value = 0.211663771885;

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
    msg.setTimeStamp(0.633220103106);
    msg.setSource(20038U);
    msg.setSourceEntity(95U);
    msg.setDestination(41690U);
    msg.setDestinationEntity(4U);
    msg.value = 0.12796578006;

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
    msg.setTimeStamp(0.712461463983);
    msg.setSource(42256U);
    msg.setSourceEntity(229U);
    msg.setDestination(62836U);
    msg.setDestinationEntity(207U);
    msg.value = 0.152712035295;

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
    msg.setTimeStamp(0.568118408708);
    msg.setSource(23853U);
    msg.setSourceEntity(147U);
    msg.setDestination(18468U);
    msg.setDestinationEntity(128U);
    msg.value = 0.215705081043;

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
    msg.setTimeStamp(0.758241644632);
    msg.setSource(30495U);
    msg.setSourceEntity(122U);
    msg.setDestination(40862U);
    msg.setDestinationEntity(56U);
    msg.value = 0.63383155681;

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
    msg.setTimeStamp(0.479165725965);
    msg.setSource(52592U);
    msg.setSourceEntity(240U);
    msg.setDestination(61393U);
    msg.setDestinationEntity(244U);
    msg.value = 0.00640993045404;

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
    msg.setTimeStamp(0.341487669353);
    msg.setSource(14898U);
    msg.setSourceEntity(77U);
    msg.setDestination(9520U);
    msg.setDestinationEntity(16U);
    msg.value = 0.17930470014;

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
    msg.setTimeStamp(0.491650267027);
    msg.setSource(25949U);
    msg.setSourceEntity(247U);
    msg.setDestination(38473U);
    msg.setDestinationEntity(245U);
    msg.value = 0.88234698023;

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
    msg.setTimeStamp(0.956547868406);
    msg.setSource(8099U);
    msg.setSourceEntity(148U);
    msg.setDestination(59258U);
    msg.setDestinationEntity(41U);
    msg.value = 0.466330491421;

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
    msg.setTimeStamp(0.389339527109);
    msg.setSource(41409U);
    msg.setSourceEntity(153U);
    msg.setDestination(4677U);
    msg.setDestinationEntity(0U);
    msg.number.assign("MJISTHFJTDODHOLEHEEUDEILVFNZYTSNJKAVUBMKLYTUTAWVUVPXMPSAODWFSNXTENDOQXZJYBCYWPWAHFQWIFLRXEIQXIXIBGKPOMZGUCYFSUZMDOWCXZHPVP");
    msg.timeout = 32522U;
    msg.contents.assign("XAPJTLXTMJNRIHIBOSZYFTNCCEMFHRYSSNEYFVBWEWKYMISMQJIYDLXZDBOTUNNCGLOULWDBAVAJWTKEVXVKSZDWZQSMGTFEPQUVUJ");

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
    msg.setTimeStamp(0.831015281052);
    msg.setSource(36215U);
    msg.setSourceEntity(34U);
    msg.setDestination(50535U);
    msg.setDestinationEntity(247U);
    msg.number.assign("SNAYZFEEUDVJOLNHOMBEVTMDHRCGXTERONLHGOFWTLRPIWRVNQJLQANJBLSLXOANBEPYIUXSSCSKBPJFNTFABUHZMKTGEQIBQBPSDMNHVUWYJWZEXITUKHXGWIXBUDYUKOZKFVVJQGL");
    msg.timeout = 63939U;
    msg.contents.assign("ZLAQVETUTKWESYSDPHRUODCACXMIZBDBRGWCEDNTO");

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
    msg.setTimeStamp(0.480058605857);
    msg.setSource(6834U);
    msg.setSourceEntity(132U);
    msg.setDestination(47481U);
    msg.setDestinationEntity(47U);
    msg.number.assign("VAPXFABRPLIHIMEWDRUSTGWOXSKUHNWVWZXAWFJXEBOLRYEQGRIUKVLYWISSSZMJYCYZGCPVZMFMGJZWUGHEIJNMDSEKNQFRCYAVKQSKNBZHGJCTRUUAIBQHHFOFDDYIBJZBHDTKTOWNPCXCDJLGKMQCESZPUKAMLZTQPETVYPOVKGDFULBONYBFXWVMNJRRPHFMSDECEVQLA");
    msg.timeout = 16973U;
    msg.contents.assign("GTRUTJMFBIQKVBTUOSHHZGBJXHIUYXAABUUDPTYNVQOHFIGMCQQUBZDBCFUZCFRYHMNWHPIU");

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
    msg.setTimeStamp(0.324618917334);
    msg.setSource(56984U);
    msg.setSourceEntity(99U);
    msg.setDestination(8719U);
    msg.setDestinationEntity(247U);
    msg.seq = 1901627793U;
    msg.destination.assign("YHMNDJLAXFHADGHWPKCBKWJPDCRDPOFPKUHPYDVVSLMTKARIZSFDROYVECPNJEZGYEFIZOUWJZ");
    msg.timeout = 40811U;
    const char tmp_msg_0[] = {-3, 12, 62, 57, -13, 49, -22, -38, 72, -116, 107, 73, -65, 92, 6, 81, -117, -102, -54, -28, 49, -87, -88, -24, 1, 25, -69, 39, -94, 116, -60, 40, 6, 66, -89, -73, 29, -128, -57, 20, -42, -44, 69, -19, 118, 6, -27, 31, 55, -11, 117, 32, 67, -104, 15, 46, -61, -14, -40, 44, 11, -96, -111, 26, -88, -67, 36, 114, -2, -64, 41, 87, -68, 86, -75, -17, 105, -63, 52, -31, 29, -51, 26, -119, -103, -108, 85, 55, -45, 93, 103, 123, 110, -76, 31, 70, -22, -96, -39, -63, -2, -34, 2, -111, -5, 114, 2, 0, 13, 107, -34, -26, 37, 4, -60, 109, 30, 14, -105, 92, 40, 42, 60, -112, 110, 122, 124, 97, -69, -57, 82, 40, -18, -124, -60, 65, 107, 5, 18, 20, -109, 46, -15, 12, -96, -6, -119, 77, -105, 119, -112, -123, 79, 120, -9, 93, 111, -5, 16, 124, -44, -80, 56, 120, 42, 8, -91, -102, -102, 63, 41, 88, 111, -107, 50, -22, 64, -55, 81, -32, -47, 48, -62, -30, -32, -111};
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
    msg.setTimeStamp(0.342521847669);
    msg.setSource(32699U);
    msg.setSourceEntity(251U);
    msg.setDestination(13528U);
    msg.setDestinationEntity(92U);
    msg.seq = 1804897737U;
    msg.destination.assign("PCPXZOLCAWT");
    msg.timeout = 18825U;
    const char tmp_msg_0[] = {-66, -52, 102, 50, 68, 9, 96, 43, 18, 22, 109, 11, 33, 66, 101, 45, 29, 77, -32, -38, -36, -21, 10, 90, 39, 114, -60, -55, -97, 22, 6, 28, 120, -95, 33, 14, -10, -100, 108, -2, 104, 78, 61, 2, -35, -77, -17, 109, -116, 30, 74, -110, -11, 50, 64, 47, -43, -115, 117, -6, -91, 32, 101, 106, -120, 10, 32, 17, -35, 89, 16, -5, -115, -128, -118, 60, 116, -24, 13, 67, 9, 29, -32, 96, -54, -83, 57, 109, -10, 100, -28, 59, -59, -53, 30, 1, -71, 8, 23, -115, 36, -23, 85, 94, 88, -27, 28, 109, 7, 57, -75, 93, 28, -87, 12, -106, 47, -7, 43, 45, 98, 89, -97, -33, 35, 9, 33, -54, -123, 79, 11, -35, 40, -115, 46, 28, -79, -122, -115, -48, 10, -93, -95, 85, -126, -3, -50, -41, 37, -39, 73, 93, -40, -57, 31, -128, 86, -21, 12, 125, -9, 55, 100, 109, -34, 70, -73, 125, 10, -122, -60, 2, -99, 32, -127, 20, 89, 19, 101, -37, 100, 80, 121, -42, -125, 119, -15, -81, -64, -127, 96, -41, 81, -117, -34, -35, -126, -98, 124, -27, 112, 75, 71, -48, -104, -39, 94, 53, -92, -40, 84, -122, 57, -79, -11, -3, -109, -96, 10, 35, -36, -26, 47, 39, 22, -22, 82, 40, 104};
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
    msg.setTimeStamp(0.0858963876743);
    msg.setSource(56139U);
    msg.setSourceEntity(206U);
    msg.setDestination(50952U);
    msg.setDestinationEntity(168U);
    msg.seq = 1228232544U;
    msg.destination.assign("GBUHMEYZCETZEVAHYDKBUDCXPGVLELPLOIDJVDPWIRCDRVGTJVZ");
    msg.timeout = 25983U;
    const char tmp_msg_0[] = {-108, -32, -84, -121, -101, -112, -94, -53, 19, -73, -13, -113, 21, 93, -5, -107, 117, 84, -76, 116, -100, -10, -46, -117, 17, -108, -51, 101, -122, 28, 38, 121, 108, 118, 57, -18, 113, 87, 96, 17, -26, -88, -80, -82, -8, 76, 20, 86, 94, -113, 92, -54, 99, -48, 2, 67, 43, 61, 71, 17, 70, -112, 107, 73, 42, -48, 79, 1, -26, 97, -24, -96, 106, -116, -48, 10, 9, -76, 7, -119, 25, -10, 126, 106, 111, 50, 98, -27, 107, 16, 34, -68, 53, -115, 31, -1, 23, 13, -9, -79, 98, 41, -90, -28, -59, -108, -13, -92, 37, 50, -92, -120, 3, 85, -56, -9, 77, -12, 8, -78, -35, 18, -47, -43, -20, -85, 120, 67, 17, 28, -93, -106, -36, 90, 110};
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
    msg.setTimeStamp(0.51315331297);
    msg.setSource(44111U);
    msg.setSourceEntity(68U);
    msg.setDestination(282U);
    msg.setDestinationEntity(175U);
    msg.source.assign("PQDKAZSRJCDYRHBDINNIBHYOTJSJJNUKTWDAMESFSMGWLVAUUSLMXMRTQSRISONHETSNEVXAHLFNWIICMXHIAGMCQIDCQNFZMOQPGJVKXAPFPPJVUXVAXPAVBRXUKERURJFOVBVZZEQYFRHOOEEBKCNMSRGJEDQWZNDXLHJTQJDIF");
    const char tmp_msg_0[] = {102, -128, -52, -65, 90, -58, -30, 79, 70, -77, 59, 68, -122, 19, 124, 92};
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
    msg.setTimeStamp(0.412992356453);
    msg.setSource(39686U);
    msg.setSourceEntity(250U);
    msg.setDestination(13324U);
    msg.setDestinationEntity(30U);
    msg.source.assign("JRQEWZEDRZGUWOECSFMFQBNALQHGGZLOCFTHXVCQFVOPWKIKSAMXJVICJJLOLYSGZODXHVRCEBUFVUUHMKJYLPKLHBZPMIYHDHKKRPCAZTDHMBJBITEJPECJWQWODRVVNNFXXONWIYSQ");
    const char tmp_msg_0[] = {100, -77, -36, 47, -102, 48, 19, 106, 22, -74, 2, 64, -35, -34, -112, 120, -123, -45, 92, 112, -99, -43, 65, -66, -100, -106, -1, -14, 33, 95, 97, -82, -59, -18, 43, 98, -105, 109, 81, -59, 86, -127, 116, 8, 66, 34, -29, 61, 0, -12, -11, -109, -4, 99, 82, 52, 86, 103, -102, -101, -25, -27, -43, -116, -81, 50, 10, 66, -25, 123, 98, -102, -68, 98, -43, 86, 111, 99, -79, 125, -38, 96, -44, 48, -64, 2, -100, 54, 17, 4, -83, 84, 79, 55, -125, 71, 91, -32, 54, 119, 43, 59, -97, 74, -105, -126, 110, 73, -48, 20, 94, 22, 59, 18, -83, 14, 42, -74, -55, -109, 34, 126, 92, -127, 48, 125, -9, 101, -100, 45, -29, 42, -54, 91, 13, -2, -12, 17, 119, 17, -19, 39, 1, -12, 92, 45, -17, -113, -35, -97, 20, 111, -74, 73, 59, -25, 71, -44, -123, -124, -84, 67, 93, -98, 100, -25, 73, -44, 110, -44, -33, 27, -80, 19, 63, 12, -113, -105, -59, -53, -109, 106, 78, -86, 36, -83, 56, -91, -102, 39, 119, -93, 56, 111, 119, 92, 91, -59, 92, -53, 43, 77, -62, -97, -62, -85, -80, 106, -68, 73, -96, -73, -43, 95, 16, 79, -115, 22, 53, -116, -127, -7, 35, -117, 41, -44, -42, -9, 45, 116, -44, 0, 73, -84, -108, 14, -63, 95};
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
    msg.setTimeStamp(0.147749518046);
    msg.setSource(47947U);
    msg.setSourceEntity(126U);
    msg.setDestination(13263U);
    msg.setDestinationEntity(49U);
    msg.source.assign("VULNXHBKQIYZHXYLKKAZCXBGWLGHDWMRHFOOGMZOEJQIRWTJAVCUEUWUVOLYDRDOAMEVWSANQKJDPZVJPFQRPUSKHJY");
    const char tmp_msg_0[] = {99, -26, -40, -34, 68, -67, -101, -114, 43, -53, 65, 62, -122, -81, -46, -104, 126, -127, -90, -51, -67, -99, -73, -86, -119, 70, 31, -97, -32, 6, 41, 22, -15, -120, 99, 15, -127, -68, 120, -10, 0, -88, -1, 53, -60, -37, 28, -48, 51, 21, 99, 92, -33, -99, 18, -9, -87, 59, 114, -89, -42, -100, 88, -67, -62, -56, 11, 51, -60, 68, -88, -20, 29, 41, 85, 62, -28, 78, 54, -45, -37, -37, 36, 85, -80, -92, -90, -25, 61, -82, 64, -123, 124, 56, -119, -72, 9, 21, 49, -23, 21, 87, 65, 80, -27, 114, -112, 27, 43, -119, 30, 46, 119, 39, -118, -115, 74, 21, -67, 35, -51, 16, 124, -3, -45, 120, 76, -69, 93, 16, -52, -86, -34, -52, -84, -65, 45, 123, -56, -80, -4, 1, 0, -118, 125, 76, 10, 123, 53, 96, 49, -84, 58, 28, -93, -54, -35, 81, -68, 74, -114, 52, 97, -128, 84, -47, 85, -19, 18, 27, 7, 117, 74, -60, -70, -125, 14, 16, 14, 70, 89, 81, -2, -123, -17, 72, 50, 46, -123, -71, -85, -25, 70, -47, 18, -93, -22, 55, -27, -92, -101, -26, -103, 96, -103, 28, -11, 82, 118, -55, 42, -84, -48, -71, 48, 15, 120, 110, 122, -128, 121, 93, 97, 49, -95, -24, 114, 111, 10, -72, 10, 104};
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
    msg.setTimeStamp(0.824815575494);
    msg.setSource(30161U);
    msg.setSourceEntity(38U);
    msg.setDestination(62193U);
    msg.setDestinationEntity(1U);
    msg.seq = 3857898119U;
    msg.state = 138U;
    msg.error.assign("KPTANJVWGJBFAFPYWZZGHUNJDELLJSAXMHYPIAFRUFJSTCBEIRGXRDVYN");

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
    msg.setTimeStamp(0.563380457838);
    msg.setSource(63701U);
    msg.setSourceEntity(158U);
    msg.setDestination(43093U);
    msg.setDestinationEntity(180U);
    msg.seq = 3715750203U;
    msg.state = 31U;
    msg.error.assign("SLHCXIOCARIJSXXEEYKZDVDTHOMZRHKRXAKALBANZGGYHJBRUFNMFMLOIPECITDQSRUZAWFVWOFOWUNHCMZKSTOZTWJREQISPJJVXGAPCQJKLCTHPYRUIAGMHLBDMWNQSGNOGWHIPWVPKOAL");

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
    msg.setTimeStamp(0.592567279184);
    msg.setSource(47638U);
    msg.setSourceEntity(226U);
    msg.setDestination(2029U);
    msg.setDestinationEntity(55U);
    msg.seq = 2258282655U;
    msg.state = 109U;
    msg.error.assign("WLFGDPPQTD");

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
    msg.setTimeStamp(0.625651489733);
    msg.setSource(14385U);
    msg.setSourceEntity(150U);
    msg.setDestination(2494U);
    msg.setDestinationEntity(165U);
    msg.origin.assign("VACTFZBQQZLGV");
    msg.text.assign("HGEIHYADIZXSQVCVMGNZQDTOGRVHMZWTUVHQUYGMVPLAKJAOTNJQFZN");

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
    msg.setTimeStamp(0.00469003354415);
    msg.setSource(13526U);
    msg.setSourceEntity(94U);
    msg.setDestination(50367U);
    msg.setDestinationEntity(41U);
    msg.origin.assign("HHMBFJPGOVXPSJBIRXGKPWLCPCKWGJWYSSQDZQRTKXYNTEIUHW");
    msg.text.assign("WDFVNAWNPFIQDZPCTUQHIMHBCSRHAPAYZCZAFGXFSBDRYZJVEREVFGKIYOLNYJJBLPKLEQOWOUQCKOQCDXDYINDWEQVRRXLLLHKKINSAWVPJCYXVFKZTEAPEXTCKUUTSMIRDTFUMMLLGLAWLIICGXOBGYNYBUHWTPOBQUETAINFRVFDHRSMBKCXEUSISYOYJVQNUMCP");

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
    msg.setTimeStamp(0.0332073886805);
    msg.setSource(64077U);
    msg.setSourceEntity(161U);
    msg.setDestination(61762U);
    msg.setDestinationEntity(233U);
    msg.origin.assign("IQSMMTAOKIQPJXQZMLDGOSDEVSNACDVPHRWBHAWKZGVEFXLZPRMVRZDVWNNUUMTZIWTDFLOBKDDSINATTLEGJOWQHXXXAKIYKWNDWCSCNCZVCXAJAEBSRAGSFKGVUHXJY");
    msg.text.assign("ORPDHXNVSJMWZZXKCXPAGMZPQVNURMAVEJCWMXYTNFOWKDYZSBKVAHDEVKDBCYHZVTBXBWRJQRBLLHQAXBHKSPPXTTZLIONHKNMLCMAGNPOAUCMJQNVCYJKQVIBSMHRRYTLRIUFBDJURZWFLEHWGOXAOTLHHIYSSQXWJIRSUMIFGTEKTYNNRFOQTKFPPGLULSDGZSZFJXFQVWGNUSEIUIUAMOTACWCWIEOZCEDQGVAEPDBG");

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
    msg.setTimeStamp(0.432932756791);
    msg.setSource(18559U);
    msg.setSourceEntity(101U);
    msg.setDestination(49040U);
    msg.setDestinationEntity(23U);
    msg.origin.assign("BRRIEPHJHVAZWLMIYLYZFQMVRCNJONIXVDOBAKARDWNXMQRPQFWGUGTPPXNHQUYKQZTNEKFWJVWJLXGAVSXBHTSFYNZYCCNOHFSDUHLRTEZXOQBLEDMZBONVQYSCDEVJWEEEPMAIAUMUKSNLFVWGBTWIABRLNIKMISSSTOKAGIMBGFRUOLKZTGCUPXHVELSKEQGDZDAYWDIHOPWCRYXBXQCYXQHAFROFFCJJTYHSUPPPZKUBMJDTCUJZTGLDM");
    msg.htime = 0.879715353954;
    msg.lat = 0.251769062003;
    msg.lon = 0.128552355937;
    const char tmp_msg_0[] = {52, 24, -80, -100, -98, 45, 62, 9, -52, 123, 124, -14, -19, -21, -122, -47, -9, 21, -108, -5, 41, 63, 69, 44, -128, -116, 49, 60, 108, -114, -122, -122, -49, 123, -61, -102, 38, 77, -91, 5, 42, -2, 94, -100, 120, -77, -128, -34, 125, 38, 64, -79, 23, 43, -50, -50, 120, -40, 87, 59, 71, -108, 24, -39, -19, 95, -97, 73, -14, -123, 22, 3, 47, -114, -98, 26, 61, 50, -80, -36, 52, 73, 82, 81, -108, -35, 62, -17, -96, 13, 96, -57, -77, 107, 55, 66, 33, -126, -72, -57, 99, -85, -120, 108, 34, 1, 2, -58, 93, 72, 53, 50, -83, 85, 5, 49, -40, -66, -13, 53, -109, -70, -96, 117, 33, -77, 61, 67, -15, -32, -108, 100, 120, -51, -106, 31, -51, 111, -91, 10, -38, -117, -85, -62, 102, -60, 49, 117, -32, 72, -113, 76, -85, -46, -5, -55, 2, 121, -25, 64, 106, -3, 74, -68, 124, -14, -28, 74, -43, -61, -69, -108, 60, 10, 55, 27, -86, 33, -117, 22, 113, -38, 93, -118, 6, -98, -76, -119, 90, -25, -10};
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
    msg.setTimeStamp(0.243695567461);
    msg.setSource(25559U);
    msg.setSourceEntity(71U);
    msg.setDestination(64263U);
    msg.setDestinationEntity(123U);
    msg.origin.assign("YJTLDIQIAMQCTORFKYKFJTDWBQSJRMBIMQOTOKTGVEHDUSTQDCWWDHXOBSVIKXCNUIWFBSNKGGYUDJAZAOPNMLNMBDUNGZELSCZZXNFXAYYRHHQVCLKPRAOZHSXFLSYRVLBEEGZRAPOJWJIJERUICMSZPRTKASQPCXJGCKFLPBWVKJ");
    msg.htime = 0.301215847815;
    msg.lat = 0.985948510031;
    msg.lon = 0.992575524702;
    const char tmp_msg_0[] = {-96, -82, -115, 93, -125, -123, -56, -56, 86, 27, -24, -118, 38, 112, -62, -125, 116, -35, 26, 80, 21, -73, 44, 118, 47, 62, -38, 64, -63, 67, -94, -108, 55, 85, -8, 6, 105, -97, -30, -9, -92, -65, 34, -111, -18, -126, -4, -74, -75, 113, -89, 8, 37, 87, 102, 16, 62, 11, -46, 87, 44, 21, 109, 124, -118, 69, 96, -43, -85};
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
    msg.setTimeStamp(0.654906707804);
    msg.setSource(36992U);
    msg.setSourceEntity(71U);
    msg.setDestination(62916U);
    msg.setDestinationEntity(238U);
    msg.origin.assign("TLHCRMXIZRLRJKAWYDSMNRYKPXIRUESBLCIIJCGZONYEMGTWWXAPIOSWSXWDT");
    msg.htime = 0.986028519911;
    msg.lat = 0.96959407944;
    msg.lon = 0.0918036449942;
    const char tmp_msg_0[] = {-95, -82, -45, 33, 69, -118, -26, 11, 94, 106, -44, -56, -14, 46, -42, -38, 16, -51, -68, 79, -90, 126, -85, 67, -126, 69, -86, 6, -54, 16, 61, -74, -123, -38, 125, 28, 7, 124, 34, 57, -120, 117, -102, -16, -36, -71, 30, 42, -69, 12, 16, -49, -99, 125, 55, 80, -78, 14, -10, -35, 45, -40, 90, 59, 106, -74, -57, -75, -50, 84, -119, -119, -76, 110, -96, -31, 122, 49, -54, -97, -97, 104, -107, -79, -5, 69, 101, 71, -37, 66, 112, 31, -75, -2, -8, -36, 5, -39, -17, 28, 5, 10, 105, 107, -44, -10, -71, 58, 54, -53, 40, 31, -90, -41, -57, 68, 92, 69, 95, -2, -28, 88, -83, 57, 111, 81, -100, 32, 2, 48, -32, 8, 105, 36, -100, -39, -20, -13, 33, -29, -25, -55, -51, 107, -31, -38, -96, 3, 4, -45, -127, -107, 93, -120, 124, -121, 122, 124, -40, -108, -51, 104, -23, 74, -96, -127, -96, 8, -45, -32, -37, -60, 90, 72, 79, 70, 73, 36, 32, -47, -75, -108, -7};
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
    msg.setTimeStamp(0.41640227616);
    msg.setSource(55485U);
    msg.setSourceEntity(183U);
    msg.setDestination(56106U);
    msg.setDestinationEntity(43U);
    msg.req_id = 30036U;
    msg.ttl = 43158U;
    msg.destination.assign("HLVNIXJLBXHRFGAFLKBHGQKBTRIZSVVTPSUYSQZXPLMPLBXUEXRCGDTKCJSKKZITPFMEJHNBSVDWKERFYUWEIQAMMFLZBYNNCHGDVZKTPGTNIMMNDBTTCAAWZNIOYEBYCQYEOEPO");
    const char tmp_msg_0[] = {67, -56, 49, 71, 64, -63, -87, 121, -67, 125, -91, 103, 98, 32, -8, -67, -55, -22, -86, -1, -41, 78, -94, -58, -22, -19, -128, 56, 55, 40, 71, -33, -52, 126, 31, -68, 42, -120, 0, -70, 71, -54, 65, -96, -123, 106, -112, -126, 91, 67, -108, 52, 105, -87, -104, 14, -76, 115, -113, -74, -124, 108, -86, 121, 105, 81, 50, 101, -76, 15, -100, 63, -115, -125, -7, 61, 8, -108, 117, -98, 98, 23, 21, -108, 86, -123, -31, -108, -77, -105, -6, -80, -80, -84, -81, 50, 8, -78, -89, 85, -121, -33, 93, 63, -119};
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
    msg.setTimeStamp(0.0640179304213);
    msg.setSource(40217U);
    msg.setSourceEntity(201U);
    msg.setDestination(31525U);
    msg.setDestinationEntity(91U);
    msg.req_id = 16583U;
    msg.ttl = 63392U;
    msg.destination.assign("JIEWFMTKPDEUPUVCFANDNIQPZLZISAUUXKIYMBQBGWXONEUPMRJSVSRDQVUZPFJQWSRDQFJWBVKCLCOKSGMJZTOYUKSLORNJKJHUNTTYALTYQCIAVZPEMFATBUGEYVFHXC");
    const char tmp_msg_0[] = {-50, 79, 111, 1, -73, 118, -94, -124, -46, -61, 21, 25, -8, 73, -55, -2, 65, 59, -113, -28, -125, 19, 124, 68, 8, 106, -75};
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
    msg.setTimeStamp(0.453197240199);
    msg.setSource(47611U);
    msg.setSourceEntity(195U);
    msg.setDestination(53130U);
    msg.setDestinationEntity(201U);
    msg.req_id = 21393U;
    msg.ttl = 49520U;
    msg.destination.assign("BYQXIOKWGFFTLIVLEAOUAIUUYPLDWOUBMLZKYEOWAOMZPTCBTFOCHWCPCISCMZTBTHIJLENJHDABCNQNVUSSXSSJXBQEHGDDEUVTNNGMSMWKVSQUEQOZDMTZCDFXDFKVTUTNAYSXWLKRNZMGPPPAKPRJXNEYBGKBSH");
    const char tmp_msg_0[] = {-23, 71, -91, 50, 124, -99, -83, -114, 68, -105, 81, -85, 9, -70, 63, 18, 26, -22, 102, -107, -72, 68, -44};
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
    msg.setTimeStamp(0.358025264433);
    msg.setSource(62278U);
    msg.setSourceEntity(147U);
    msg.setDestination(38627U);
    msg.setDestinationEntity(43U);
    msg.req_id = 26534U;
    msg.status = 58U;
    msg.text.assign("LWXQTIRMPBDOVRYCEDAQIEFUDDWJZFNNRHXYCBNBMTYYHCQSAYGNDHIUCEUETEWXWPPVHYGARHURPOJROLSJQVBXWZNCYCOFJCKKTHBKDZJALRHBWBLFDSFXWQANIYJIUIWWZKOOIUAUYAOESFAGQXMTHEVOTDNKMXGXXJSZBGLIZVGKIBPOCKTWHPVPNLUQFQCORANLSNSMILSPL");

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
    msg.setTimeStamp(0.135209861655);
    msg.setSource(47678U);
    msg.setSourceEntity(250U);
    msg.setDestination(29553U);
    msg.setDestinationEntity(234U);
    msg.req_id = 46070U;
    msg.status = 205U;
    msg.text.assign("GLOPMDYBXPCVWKGAXAFJXZPDDIIFUBZALJCFPASTKZK");

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
    msg.setTimeStamp(0.885299954542);
    msg.setSource(20865U);
    msg.setSourceEntity(81U);
    msg.setDestination(9410U);
    msg.setDestinationEntity(187U);
    msg.req_id = 14153U;
    msg.status = 58U;
    msg.text.assign("XCJWXBMONOOVOJBYCINHMLSTLKXJDEMVJEEERDUMCQUZXFTIXKTIVAIA");

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
    msg.setTimeStamp(0.534885921739);
    msg.setSource(13390U);
    msg.setSourceEntity(226U);
    msg.setDestination(41851U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("NRTDPSUWOEIHJOAJGEUVLCTPSDYBYZAVIBBYOQMGMSXKBLGZUQLUPOAUPCTUFBXSDASIMEBVWIYGRKGAJYMZHIZMTXQEMVLCCRKSNCXQMQOKLPASMAOYXYJEJDCUVHFENLVVBHEKKOFZGBUFTVSVTPKLWALYIFRTBGBZPZYCOH");
    msg.links = 2825658166U;

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
    msg.setTimeStamp(0.255736683479);
    msg.setSource(1374U);
    msg.setSourceEntity(79U);
    msg.setDestination(26271U);
    msg.setDestinationEntity(135U);
    msg.group_name.assign("LGIQJHHKEHPWHVXCDVUFYCAWILQCBYFOGDBNDTEITBVFLIEJXLPURFTREPQUBMOATKFTXJDVKQBZGKHMGSLTCUOGRECQMYBWYCZDZRVIZGBPPCSJMQXTNAYMUWVXPNSNJFSDCVRDAOWWXOVMLULLPXIJOEIOGYHYDSAZDEBREOXMNAQILNZE");
    msg.links = 366651549U;

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
    msg.setTimeStamp(0.805277149758);
    msg.setSource(56588U);
    msg.setSourceEntity(50U);
    msg.setDestination(21574U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("AUGCWJWEAHYSKMVHJPXEUUJPSRRCWPJTRAAOOPXCIRGEXPZLULZLIYWKVVJMZFCRLDNZJDSEWKNYTDIFXMYTBS");
    msg.links = 1471554582U;

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
    msg.setTimeStamp(0.991103622016);
    msg.setSource(18757U);
    msg.setSourceEntity(35U);
    msg.setDestination(19025U);
    msg.setDestinationEntity(10U);
    msg.groupname.assign("HPYSDSUBGONOFZJXHMPLOJNNTUJ");
    msg.action = 183U;
    msg.grouplist.assign("QRZVMOUBEPIPOQPXXSCFSOMDRMMDNDRSYAEPCPAIFXGIHLBFYHLYMRDHCXGGWKWBVWJNBAIQREXVVWRZUSUGOGZUIGKULNUYFAHEFSAEDMZLDMVHLQZECVASSLBQIQFYBQJPADJMTIKIDLNRJVTTXNZCHHHWSKFJWONTOKRBKPWHSMWUYV");

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
    msg.setTimeStamp(0.370186879851);
    msg.setSource(52036U);
    msg.setSourceEntity(159U);
    msg.setDestination(16854U);
    msg.setDestinationEntity(222U);
    msg.groupname.assign("CYOAEROBLYUBIAKBGTHSHYBDAREIIVVVMNPNQFMDUAFUSCLOWLDWLQFFWIACPYPAPJUDGQOCYAHIQGHAVXUBWDPRZSTASTSCMJJCQNHZIFGRBWQEGNCSORBVEJCQFEIUTNIOMWNRILQMDPYHGAGQJMJOOJXKEVXPMKUXMTYFZWHKUKBDFZUKFXPVNYLZNYEJZNLSJGNXRXPLDSYCRTZTRRX");
    msg.action = 65U;
    msg.grouplist.assign("MJIGOPZZIMKRZUYKEXKZQHVSKSXFCIKPJEOTINHELDOXEQFXRSODTESOXWPEBDSXONYAGGDIGYEKWYCSIKFLGMJYQSJCXKHBFRLDAMLBBCOTMQWSYBVPCL");

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
    msg.setTimeStamp(0.760146165062);
    msg.setSource(7247U);
    msg.setSourceEntity(217U);
    msg.setDestination(20318U);
    msg.setDestinationEntity(63U);
    msg.groupname.assign("GEOUPAIAKNFNJHAAEMTGMBSXPKEAYXCMQXKDKPBFVYJVYYGXRNHOEVBHXPYVFDJVFKEQHJTHVLLRRGSNUKGBYNQMQBRXETODRNITZWZDBPSOXWZYSBOWURUZNLEFKZMFMASJWCLTJBUVCLUBIUWCQNYGEODKMWTACICMOAONDZUMQLPHZIRWTYYFOGZMDSIWHVRGELSUJVHH");
    msg.action = 62U;
    msg.grouplist.assign("MAWHIMFHYIJALPAGBELWRJXFSTCFXYWKVTAAUZHMEKTHFRIODUUQMBSHQVLPMROBCDWUKGTNFAGVIKJZVPYRCFGDWYNZTPRXOZSLIXSLSLYPCRNDHUJCTXVTJOFHYEXMZIPRHJRGCBGBOVNOKBNNDZTTUNDIKQZWBPCFORGPEEBXQDXKZ");

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
    msg.setTimeStamp(0.460590909204);
    msg.setSource(19587U);
    msg.setSourceEntity(98U);
    msg.setDestination(14939U);
    msg.setDestinationEntity(212U);
    msg.id = 201U;
    msg.range = 0.590652599407;

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
    msg.setTimeStamp(0.686685303031);
    msg.setSource(14538U);
    msg.setSourceEntity(150U);
    msg.setDestination(32819U);
    msg.setDestinationEntity(162U);
    msg.id = 187U;
    msg.range = 0.26501714704;

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
    msg.setTimeStamp(0.935118840359);
    msg.setSource(43198U);
    msg.setSourceEntity(129U);
    msg.setDestination(54924U);
    msg.setDestinationEntity(186U);
    msg.id = 10U;
    msg.range = 0.279663219908;

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
    msg.setTimeStamp(0.125855140658);
    msg.setSource(22440U);
    msg.setSourceEntity(15U);
    msg.setDestination(38325U);
    msg.setDestinationEntity(30U);
    msg.beacon.assign("PGWMCKFZTNGZHZEYHSYSJKHYXTMCRLBTRVGUHEJWHCEQSQYWXUXIWRVKBQGYVDWZNOWGFBMMGBZUSECJNTKUADWBXSJRICOMYSCVBZDLGFSRPAHJNDDHGPZLAJWQDAZGNNBQVOBLZGTJIRVPWPUDOOIMXOFHPKRJKWFSBIIVULODXACMZTNLCIRXPVFEKAKAEOLRDFPRCNALIXPTUMBIUENFFMQYSQFYITQOPXTKEAHECSJNUQMEH");
    msg.lat = 0.349486236878;
    msg.lon = 0.412400268153;
    msg.depth = 0.056514611907;
    msg.query_channel = 47U;
    msg.reply_channel = 134U;
    msg.transponder_delay = 238U;

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
    msg.setTimeStamp(0.324047231908);
    msg.setSource(59250U);
    msg.setSourceEntity(173U);
    msg.setDestination(22985U);
    msg.setDestinationEntity(177U);
    msg.beacon.assign("NCNHTOYSTIDELKIDHHAEDSMXPDFUSMJEMBOUMOWYURSCWHEYNGUGQCAVYJVSCUPBJQZVNBBIVTYORKPWPTKTXXNXOGQOZFQVFYPEJWVZXONBXMIRPTIXDBBLGEIUQWQWKKRDHFQFXCHKQFTLRRBDDAYALLAKRCRIJSIJFVMEWFGLPDCYYKPTUHXBUCZNGIQOGFCSUEJKZCZGVXMTAAPZMOAKINGWAHQMVSYRZGFNMALORPVNLEUJJLJZZDHHSE");
    msg.lat = 0.975661830718;
    msg.lon = 0.503790860928;
    msg.depth = 0.673415764017;
    msg.query_channel = 249U;
    msg.reply_channel = 111U;
    msg.transponder_delay = 86U;

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
    msg.setTimeStamp(0.205768646085);
    msg.setSource(30543U);
    msg.setSourceEntity(192U);
    msg.setDestination(30590U);
    msg.setDestinationEntity(66U);
    msg.beacon.assign("NDTKCYLPOLSVIDDEHBZKQUFCUZJXAODGOJIRSQHOBTFMJUWBEJHTWJDXHTXAQZERXBIMEQSLBRLKNVIXUAAPQMASHIPGGDZSITXCXPYKNEFHRYFLINQZWULVNOFYHKQVAGHDCZQJMEJUVOZHMMAMEAZFGNWKDRFXPZMUFHVKL");
    msg.lat = 0.728557355391;
    msg.lon = 0.21512222785;
    msg.depth = 0.809884561661;
    msg.query_channel = 192U;
    msg.reply_channel = 142U;
    msg.transponder_delay = 193U;

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
    msg.setTimeStamp(0.331450098874);
    msg.setSource(12354U);
    msg.setSourceEntity(111U);
    msg.setDestination(7786U);
    msg.setDestinationEntity(117U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.437828184544);
    msg.setSource(23297U);
    msg.setSourceEntity(127U);
    msg.setDestination(38598U);
    msg.setDestinationEntity(183U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.667913148505);
    msg.setSource(21806U);
    msg.setSourceEntity(156U);
    msg.setDestination(27170U);
    msg.setDestinationEntity(211U);
    msg.op = 171U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LUBAIGPZFMVFOGOLYAARXKFLETOXISNGFRYKLBSAJRTHACKWPXQUYIDHDZKBHILVIQSDHYJYLYEJ");
    tmp_msg_0.lat = 0.243591405301;
    tmp_msg_0.lon = 0.249388973334;
    tmp_msg_0.depth = 0.679084017272;
    tmp_msg_0.query_channel = 183U;
    tmp_msg_0.reply_channel = 222U;
    tmp_msg_0.transponder_delay = 189U;
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
    msg.setTimeStamp(0.870633511822);
    msg.setSource(8088U);
    msg.setSourceEntity(25U);
    msg.setDestination(17732U);
    msg.setDestinationEntity(167U);
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("BIGZUJGSYXMBOQPLXHYEYZCOKIXABNVHMHHGWFQIEORQDFVZKAOQUHGCAUOVATBLCDIFLFCTAWLDJQWZLMLYG");
    tmp_msg_0.text.assign("LILOSCDUOPAVLMUFAEADIDKGAILWPYLWCWWOLECSOHMFXOYX");
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
    msg.setTimeStamp(0.717287166573);
    msg.setSource(19734U);
    msg.setSourceEntity(183U);
    msg.setDestination(48611U);
    msg.setDestinationEntity(75U);
    IMC::SoundSpeed tmp_msg_0;
    tmp_msg_0.value = 0.776583403312;
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
    msg.setTimeStamp(0.461003367108);
    msg.setSource(35468U);
    msg.setSourceEntity(149U);
    msg.setDestination(5033U);
    msg.setDestinationEntity(35U);
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 33U;
    tmp_msg_0.value = 0.602370624704;
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
    msg.setTimeStamp(0.215227098099);
    msg.setSource(2591U);
    msg.setSourceEntity(91U);
    msg.setDestination(51967U);
    msg.setDestinationEntity(151U);
    msg.op = 241U;
    msg.system.assign("LYBSWVCIKMQTGOUGIRIVHJRPXXULKUATMWENXUCOCXATEJFXRAFGYTPKMQGZPGDYGPHUCLDIPPRVHGLSYCVRXMZCF");
    msg.range = 0.655932778113;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 76U;
    tmp_msg_0.value = 19U;
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
    msg.setTimeStamp(0.596410551466);
    msg.setSource(59004U);
    msg.setSourceEntity(62U);
    msg.setDestination(36546U);
    msg.setDestinationEntity(146U);
    msg.op = 160U;
    msg.system.assign("LYWOJGEMTCQKYKUPWBIZYSRAPZMKAHTCRCAUESMOXFFQLDIFZERSWJPGJVQYJFJFNBMGNGKSIYBFMDVAUVQWHSKMZYVQOIBBGUJVQPCKIWZZXPNITJTVBNLEVOFVUSOERAEIPNGGTHLZMLUTUPTFHXRTRYKJZEFLDJMMED");
    msg.range = 0.394323271111;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("QQAZUAQCTLDUAOVJCRTVNSTANJZXVWZPDCJATPOVYBYUPRHIRYBARIGIBIBJAZELKDGFJEJJISBSEWAGKGJKVLNYNWKFDMWWZMMHXQTOGPCSOVUHHKQOEDXHCPEZNOYRMILLTQFRXZRCDDXCBGXMVHFXFKWTDUWDPTPBUHZTIIQXNUZFFOYMGWOJFRSPPMABXSSGOLSVSKEGNVRQEFELTBYRCHHUNUIZXWYMHUSFOLKMICKJYYPLKWCALEB");
    tmp_msg_0.text.assign("ZYTISGPAXQTCAIVEOUSVGWNXRUCPFVFNPMZLJNAWDMYKDFOHOZJMAXRFNXGWGATKCVOYIFACYSUBKXDHPUUJEGDBCREHWMKPIHWHKQQEESJQTMGLEYFDQOREKSXSLLMLGKLWXIJLBNDJZUZZIBBUPWPOIOVTALRFFKUUZTYIZYMHGQTAHDHLSFITHRZPGPRQAVBRWVBBCBSQVQJEYNIEJTXSCBTALJVM");
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
    msg.setTimeStamp(0.462902933576);
    msg.setSource(52401U);
    msg.setSourceEntity(145U);
    msg.setDestination(65511U);
    msg.setDestinationEntity(218U);
    msg.op = 252U;
    msg.system.assign("GHTJJRNXBKHYIBAEXCUJCXSVAISVRETATTLHNKQTHACIHPVNQLBRZCZQVRTCVODFAEWVPVJDDOYLGIYHLCENISMNMWFIGMOWPZESREFRGUJIRPYHZGYILJLPUBWUIYZMRAXSNKDPWBQUKFLUCHHXUNNXA");
    msg.range = 0.0784529930858;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.plan_ref = 4081902213U;
    tmp_msg_0.id.assign("GVHVXMFYXQQWYIMZDXYQVCZOZDPNBXDV");
    tmp_msg_0.memento.assign("GSIHYDCJEELPNKU");
    tmp_msg_0.timeout = 13076U;
    tmp_msg_0.rpm = 0.528211271475;
    tmp_msg_0.direction = 127U;
    tmp_msg_0.custom.assign("ZRKMXDTCSSWOTIHVCYSNFWGGKMZCOPFEHZOQOEWYHEXWMYJBUGELWJKOFGANIZLTPKSACLVOBLWIMVCSQMQLHSUJBEIQVUNGRVFIYXSWKBMEWBTJSFBDDJRQXLXRSWATVJCRFHNIALAKKJADDNPUANLBPFTUCQGEUN");
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
    msg.setTimeStamp(0.890624884063);
    msg.setSource(21765U);
    msg.setSourceEntity(88U);
    msg.setDestination(27836U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.0904788574746);
    msg.setSource(53732U);
    msg.setSourceEntity(114U);
    msg.setDestination(60557U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.31910578505);
    msg.setSource(37856U);
    msg.setSourceEntity(18U);
    msg.setDestination(1839U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.428894970178);
    msg.setSource(24826U);
    msg.setSourceEntity(117U);
    msg.setDestination(32004U);
    msg.setDestinationEntity(120U);
    msg.list.assign("LSPVSIKYUPSWCOBZJFFHHMRUIKEJJCBRBTAYQQAZCSORNEHPZUHIVKNNRLBRPGMWFNFLUMHSXAETQZQTDYMCPHYVLJFPTORDXZKHMWVP");

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
    msg.setTimeStamp(0.0615332536012);
    msg.setSource(4742U);
    msg.setSourceEntity(193U);
    msg.setDestination(1431U);
    msg.setDestinationEntity(87U);
    msg.list.assign("WHNDPLGWGUMAUNLINJIEDFLEDWKBBXW");

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
    msg.setTimeStamp(0.151912639397);
    msg.setSource(58050U);
    msg.setSourceEntity(160U);
    msg.setDestination(32036U);
    msg.setDestinationEntity(175U);
    msg.list.assign("RBVJQFWJKAUSTALWKUIETQGCNDUQJXDVHZDLWJXVNYIREFYSPMCZLVZBPJJSRVIWYIGGDHFTERDKVYSBALPOLKRZHPSEQWPTBWMOOFWFWKUGBQDFFHKSIBDMQTURCXFU");

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
    msg.setTimeStamp(0.381448400784);
    msg.setSource(26749U);
    msg.setSourceEntity(141U);
    msg.setDestination(20654U);
    msg.setDestinationEntity(178U);
    msg.value = -23199;

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
    msg.setTimeStamp(0.632976142216);
    msg.setSource(51397U);
    msg.setSourceEntity(134U);
    msg.setDestination(9543U);
    msg.setDestinationEntity(180U);
    msg.value = -2896;

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
    msg.setTimeStamp(0.476268236659);
    msg.setSource(4621U);
    msg.setSourceEntity(66U);
    msg.setDestination(20504U);
    msg.setDestinationEntity(30U);
    msg.value = -5524;

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
    msg.setTimeStamp(0.24685450805);
    msg.setSource(25601U);
    msg.setSourceEntity(35U);
    msg.setDestination(53470U);
    msg.setDestinationEntity(207U);
    msg.value = 0.0517385403292;

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
    msg.setTimeStamp(0.694632007445);
    msg.setSource(37635U);
    msg.setSourceEntity(49U);
    msg.setDestination(5491U);
    msg.setDestinationEntity(226U);
    msg.value = 0.49183823636;

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
    msg.setTimeStamp(0.125861970543);
    msg.setSource(17275U);
    msg.setSourceEntity(132U);
    msg.setDestination(4008U);
    msg.setDestinationEntity(102U);
    msg.value = 0.218653606955;

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
    msg.setTimeStamp(0.299634832202);
    msg.setSource(4793U);
    msg.setSourceEntity(140U);
    msg.setDestination(22810U);
    msg.setDestinationEntity(173U);
    msg.value = 0.452409280586;

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
    msg.setTimeStamp(0.602190059752);
    msg.setSource(39500U);
    msg.setSourceEntity(7U);
    msg.setDestination(43818U);
    msg.setDestinationEntity(156U);
    msg.value = 0.645039046807;

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
    msg.setTimeStamp(0.0548495944604);
    msg.setSource(16670U);
    msg.setSourceEntity(192U);
    msg.setDestination(37622U);
    msg.setDestinationEntity(181U);
    msg.value = 0.420873147327;

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
    msg.setTimeStamp(0.552155614102);
    msg.setSource(29741U);
    msg.setSourceEntity(166U);
    msg.setDestination(6769U);
    msg.setDestinationEntity(95U);
    msg.validity = 24266U;
    msg.type = 42U;
    msg.utc_year = 55648U;
    msg.utc_month = 235U;
    msg.utc_day = 86U;
    msg.utc_time = 0.524740578126;
    msg.lat = 0.704875201737;
    msg.lon = 0.00245630444316;
    msg.height = 0.236710601003;
    msg.satellites = 221U;
    msg.cog = 0.0908422082963;
    msg.sog = 0.173559016399;
    msg.hdop = 0.0389466285085;
    msg.vdop = 0.0630988507545;
    msg.hacc = 0.398138331546;
    msg.vacc = 0.885558541015;

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
    msg.setTimeStamp(0.0225614663619);
    msg.setSource(7606U);
    msg.setSourceEntity(53U);
    msg.setDestination(11095U);
    msg.setDestinationEntity(0U);
    msg.validity = 57519U;
    msg.type = 94U;
    msg.utc_year = 61926U;
    msg.utc_month = 191U;
    msg.utc_day = 43U;
    msg.utc_time = 0.952145016173;
    msg.lat = 0.0988670664301;
    msg.lon = 0.874384837353;
    msg.height = 0.231886564026;
    msg.satellites = 144U;
    msg.cog = 0.836951739752;
    msg.sog = 0.0752428076466;
    msg.hdop = 0.859666394709;
    msg.vdop = 0.55540712787;
    msg.hacc = 0.255297146878;
    msg.vacc = 0.055931310422;

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
    msg.setTimeStamp(0.637741817519);
    msg.setSource(52612U);
    msg.setSourceEntity(56U);
    msg.setDestination(15673U);
    msg.setDestinationEntity(211U);
    msg.validity = 26589U;
    msg.type = 171U;
    msg.utc_year = 47095U;
    msg.utc_month = 34U;
    msg.utc_day = 7U;
    msg.utc_time = 0.415230943722;
    msg.lat = 0.473649284521;
    msg.lon = 0.180931230035;
    msg.height = 0.522665204934;
    msg.satellites = 195U;
    msg.cog = 0.521559948631;
    msg.sog = 0.85102558851;
    msg.hdop = 0.681903968581;
    msg.vdop = 0.214890655989;
    msg.hacc = 0.778185895516;
    msg.vacc = 0.930809235985;

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
    msg.setTimeStamp(0.26065506374);
    msg.setSource(31024U);
    msg.setSourceEntity(200U);
    msg.setDestination(42783U);
    msg.setDestinationEntity(158U);
    msg.time = 0.550020718578;
    msg.phi = 0.423935278983;
    msg.theta = 0.504951931714;
    msg.psi = 0.851790346383;
    msg.psi_magnetic = 0.626159870813;

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
    msg.setTimeStamp(0.634029001894);
    msg.setSource(57929U);
    msg.setSourceEntity(99U);
    msg.setDestination(49021U);
    msg.setDestinationEntity(162U);
    msg.time = 0.860622925018;
    msg.phi = 0.395630372529;
    msg.theta = 0.41372048435;
    msg.psi = 0.27631929031;
    msg.psi_magnetic = 0.480410134444;

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
    msg.setTimeStamp(0.26491918515);
    msg.setSource(43172U);
    msg.setSourceEntity(105U);
    msg.setDestination(16546U);
    msg.setDestinationEntity(76U);
    msg.time = 0.886255038312;
    msg.phi = 0.718610754871;
    msg.theta = 0.086568409453;
    msg.psi = 0.844155743816;
    msg.psi_magnetic = 0.871820215297;

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
    msg.setTimeStamp(0.0149694562367);
    msg.setSource(54862U);
    msg.setSourceEntity(91U);
    msg.setDestination(2145U);
    msg.setDestinationEntity(228U);
    msg.time = 0.369209896298;
    msg.x = 0.961623259231;
    msg.y = 0.00812326521455;
    msg.z = 0.849830166605;
    msg.timestep = 0.896405371136;

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
    msg.setTimeStamp(0.122568863317);
    msg.setSource(43773U);
    msg.setSourceEntity(246U);
    msg.setDestination(22560U);
    msg.setDestinationEntity(26U);
    msg.time = 0.447620291804;
    msg.x = 0.105154874639;
    msg.y = 0.591108443694;
    msg.z = 0.217807680258;
    msg.timestep = 0.901246407177;

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
    msg.setTimeStamp(0.327462438909);
    msg.setSource(54218U);
    msg.setSourceEntity(148U);
    msg.setDestination(51640U);
    msg.setDestinationEntity(121U);
    msg.time = 0.131817296666;
    msg.x = 0.12039842491;
    msg.y = 0.724948982044;
    msg.z = 0.19657888604;
    msg.timestep = 0.770681579999;

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
    msg.setTimeStamp(0.423127728732);
    msg.setSource(14872U);
    msg.setSourceEntity(112U);
    msg.setDestination(25116U);
    msg.setDestinationEntity(109U);
    msg.time = 0.438653373003;
    msg.x = 0.518788036116;
    msg.y = 0.332719458258;
    msg.z = 0.750099182816;

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
    msg.setTimeStamp(0.703747863793);
    msg.setSource(42452U);
    msg.setSourceEntity(25U);
    msg.setDestination(15305U);
    msg.setDestinationEntity(11U);
    msg.time = 0.647595393228;
    msg.x = 0.344901428093;
    msg.y = 0.48844345188;
    msg.z = 0.244633214789;

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
    msg.setTimeStamp(0.9367477118);
    msg.setSource(30886U);
    msg.setSourceEntity(140U);
    msg.setDestination(14880U);
    msg.setDestinationEntity(147U);
    msg.time = 0.305990553972;
    msg.x = 0.0873894862426;
    msg.y = 0.115958775064;
    msg.z = 0.391044318941;

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
    msg.setTimeStamp(0.935622056909);
    msg.setSource(8921U);
    msg.setSourceEntity(148U);
    msg.setDestination(63419U);
    msg.setDestinationEntity(104U);
    msg.time = 0.323562802654;
    msg.x = 0.618412905127;
    msg.y = 0.188890944106;
    msg.z = 0.249159284671;

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
    msg.setTimeStamp(0.586219256456);
    msg.setSource(9345U);
    msg.setSourceEntity(27U);
    msg.setDestination(50823U);
    msg.setDestinationEntity(31U);
    msg.time = 0.658969629257;
    msg.x = 0.408157579655;
    msg.y = 0.915214396349;
    msg.z = 0.863931005403;

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
    msg.setTimeStamp(0.300883901672);
    msg.setSource(57501U);
    msg.setSourceEntity(127U);
    msg.setDestination(6608U);
    msg.setDestinationEntity(61U);
    msg.time = 0.749260172358;
    msg.x = 0.30346086337;
    msg.y = 0.836748461672;
    msg.z = 0.386783592309;

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
    msg.setTimeStamp(0.812625297057);
    msg.setSource(27956U);
    msg.setSourceEntity(49U);
    msg.setDestination(49237U);
    msg.setDestinationEntity(20U);
    msg.time = 0.473727655821;
    msg.x = 0.848880026889;
    msg.y = 0.404412897582;
    msg.z = 0.21706451879;

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
    msg.setTimeStamp(0.341126102638);
    msg.setSource(24337U);
    msg.setSourceEntity(187U);
    msg.setDestination(57624U);
    msg.setDestinationEntity(230U);
    msg.time = 0.788512099362;
    msg.x = 0.0910227682947;
    msg.y = 0.71071297481;
    msg.z = 0.274384578708;

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
    msg.setTimeStamp(0.056854617162);
    msg.setSource(36275U);
    msg.setSourceEntity(39U);
    msg.setDestination(29764U);
    msg.setDestinationEntity(95U);
    msg.time = 0.711933774766;
    msg.x = 0.640538795554;
    msg.y = 0.0861680179284;
    msg.z = 0.0270907119483;

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
    msg.setTimeStamp(0.301293346223);
    msg.setSource(32190U);
    msg.setSourceEntity(201U);
    msg.setDestination(6630U);
    msg.setDestinationEntity(178U);
    msg.validity = 236U;
    msg.x = 0.692036896951;
    msg.y = 0.494334296449;
    msg.z = 0.569046226657;

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
    msg.setTimeStamp(0.428364386547);
    msg.setSource(30724U);
    msg.setSourceEntity(141U);
    msg.setDestination(26128U);
    msg.setDestinationEntity(149U);
    msg.validity = 16U;
    msg.x = 0.102557842147;
    msg.y = 0.962241901384;
    msg.z = 0.631940645315;

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
    msg.setTimeStamp(0.861795476774);
    msg.setSource(57376U);
    msg.setSourceEntity(103U);
    msg.setDestination(42248U);
    msg.setDestinationEntity(187U);
    msg.validity = 43U;
    msg.x = 0.300610955496;
    msg.y = 0.712504950976;
    msg.z = 0.808359564545;

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
    msg.setTimeStamp(0.808321249164);
    msg.setSource(19972U);
    msg.setSourceEntity(244U);
    msg.setDestination(60128U);
    msg.setDestinationEntity(57U);
    msg.validity = 185U;
    msg.x = 0.3223836459;
    msg.y = 0.323956683026;
    msg.z = 0.851939848143;

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
    msg.setTimeStamp(0.464353809804);
    msg.setSource(8222U);
    msg.setSourceEntity(101U);
    msg.setDestination(42597U);
    msg.setDestinationEntity(248U);
    msg.validity = 54U;
    msg.x = 0.96196908387;
    msg.y = 0.475552391993;
    msg.z = 0.0617294438342;

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
    msg.setTimeStamp(0.135676899306);
    msg.setSource(21819U);
    msg.setSourceEntity(93U);
    msg.setDestination(18415U);
    msg.setDestinationEntity(146U);
    msg.validity = 130U;
    msg.x = 0.466006412702;
    msg.y = 0.616523662679;
    msg.z = 0.870156811545;

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
    msg.setTimeStamp(0.0988981011192);
    msg.setSource(55869U);
    msg.setSourceEntity(189U);
    msg.setDestination(62692U);
    msg.setDestinationEntity(239U);
    msg.time = 0.746236793733;
    msg.x = 0.375172570395;
    msg.y = 0.133732791258;
    msg.z = 0.644171552278;

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
    msg.setTimeStamp(0.190819188171);
    msg.setSource(59457U);
    msg.setSourceEntity(37U);
    msg.setDestination(25026U);
    msg.setDestinationEntity(89U);
    msg.time = 0.312771306411;
    msg.x = 0.55720287241;
    msg.y = 0.930381293414;
    msg.z = 0.389800637218;

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
    msg.setTimeStamp(0.245102994127);
    msg.setSource(52191U);
    msg.setSourceEntity(254U);
    msg.setDestination(4852U);
    msg.setDestinationEntity(234U);
    msg.time = 0.0756737982436;
    msg.x = 0.963016095475;
    msg.y = 0.381120335128;
    msg.z = 0.993546549842;

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
    msg.setTimeStamp(0.837963158901);
    msg.setSource(12177U);
    msg.setSourceEntity(78U);
    msg.setDestination(30282U);
    msg.setDestinationEntity(64U);
    msg.validity = 11U;
    msg.value = 0.34377964107;

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
    msg.setTimeStamp(0.301230977353);
    msg.setSource(10041U);
    msg.setSourceEntity(55U);
    msg.setDestination(21198U);
    msg.setDestinationEntity(251U);
    msg.validity = 164U;
    msg.value = 0.206755490375;

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
    msg.setTimeStamp(0.653110106113);
    msg.setSource(1049U);
    msg.setSourceEntity(167U);
    msg.setDestination(46721U);
    msg.setDestinationEntity(71U);
    msg.validity = 71U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.507049759841;
    tmp_msg_0.y = 0.0598589838168;
    tmp_msg_0.z = 0.158708999798;
    tmp_msg_0.phi = 0.567197593292;
    tmp_msg_0.theta = 0.149367094051;
    tmp_msg_0.psi = 0.744029186529;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.670625042138;

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
    msg.setTimeStamp(0.594435936946);
    msg.setSource(11488U);
    msg.setSourceEntity(110U);
    msg.setDestination(8594U);
    msg.setDestinationEntity(164U);
    msg.value = 0.0821831420461;

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
    msg.setTimeStamp(0.293295909736);
    msg.setSource(58656U);
    msg.setSourceEntity(89U);
    msg.setDestination(59890U);
    msg.setDestinationEntity(195U);
    msg.value = 0.619796183665;

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
    msg.setTimeStamp(0.0937356206045);
    msg.setSource(11554U);
    msg.setSourceEntity(92U);
    msg.setDestination(58351U);
    msg.setDestinationEntity(66U);
    msg.value = 0.313951240442;

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
    msg.setTimeStamp(0.438150448642);
    msg.setSource(56893U);
    msg.setSourceEntity(202U);
    msg.setDestination(48527U);
    msg.setDestinationEntity(144U);
    msg.value = 0.10286799339;

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
    msg.setTimeStamp(0.674194015956);
    msg.setSource(58894U);
    msg.setSourceEntity(92U);
    msg.setDestination(5371U);
    msg.setDestinationEntity(236U);
    msg.value = 0.92283878181;

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
    msg.setTimeStamp(0.451188244737);
    msg.setSource(64527U);
    msg.setSourceEntity(39U);
    msg.setDestination(42412U);
    msg.setDestinationEntity(0U);
    msg.value = 0.144985863016;

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
    msg.setTimeStamp(0.974834125583);
    msg.setSource(50225U);
    msg.setSourceEntity(146U);
    msg.setDestination(7236U);
    msg.setDestinationEntity(12U);
    msg.value = 0.553708319199;

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
    msg.setTimeStamp(0.984138841841);
    msg.setSource(23032U);
    msg.setSourceEntity(150U);
    msg.setDestination(41408U);
    msg.setDestinationEntity(243U);
    msg.value = 0.553813871761;

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
    msg.setTimeStamp(0.157901478231);
    msg.setSource(24413U);
    msg.setSourceEntity(10U);
    msg.setDestination(10311U);
    msg.setDestinationEntity(121U);
    msg.value = 0.248976637745;

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
    msg.setTimeStamp(0.347156014839);
    msg.setSource(23837U);
    msg.setSourceEntity(248U);
    msg.setDestination(6442U);
    msg.setDestinationEntity(124U);
    msg.value = 0.350736240619;

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
    msg.setTimeStamp(0.494366925917);
    msg.setSource(9464U);
    msg.setSourceEntity(208U);
    msg.setDestination(15121U);
    msg.setDestinationEntity(217U);
    msg.value = 0.825640782608;

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
    msg.setTimeStamp(0.884747632847);
    msg.setSource(52833U);
    msg.setSourceEntity(27U);
    msg.setDestination(34089U);
    msg.setDestinationEntity(24U);
    msg.value = 0.205721296382;

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
    msg.setTimeStamp(0.564519650761);
    msg.setSource(26338U);
    msg.setSourceEntity(40U);
    msg.setDestination(39399U);
    msg.setDestinationEntity(152U);
    msg.value = 0.252173127029;

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
    msg.setTimeStamp(0.463934481843);
    msg.setSource(30871U);
    msg.setSourceEntity(40U);
    msg.setDestination(60547U);
    msg.setDestinationEntity(199U);
    msg.value = 0.413132522532;

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
    msg.setTimeStamp(0.876599700441);
    msg.setSource(51811U);
    msg.setSourceEntity(61U);
    msg.setDestination(14900U);
    msg.setDestinationEntity(251U);
    msg.value = 0.224701219699;

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
    msg.setTimeStamp(0.994395790091);
    msg.setSource(57285U);
    msg.setSourceEntity(179U);
    msg.setDestination(47331U);
    msg.setDestinationEntity(88U);
    msg.value = 0.478714448569;

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
    msg.setTimeStamp(0.00925480986014);
    msg.setSource(24060U);
    msg.setSourceEntity(110U);
    msg.setDestination(50348U);
    msg.setDestinationEntity(95U);
    msg.value = 0.912511524375;

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
    msg.setTimeStamp(0.555155370005);
    msg.setSource(51345U);
    msg.setSourceEntity(14U);
    msg.setDestination(24690U);
    msg.setDestinationEntity(29U);
    msg.value = 0.264631076704;

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
    msg.setTimeStamp(0.221393363027);
    msg.setSource(3902U);
    msg.setSourceEntity(159U);
    msg.setDestination(58503U);
    msg.setDestinationEntity(132U);
    msg.value = 0.958038168662;

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
    msg.setTimeStamp(0.85309768984);
    msg.setSource(33774U);
    msg.setSourceEntity(126U);
    msg.setDestination(15945U);
    msg.setDestinationEntity(234U);
    msg.value = 0.0491816721956;

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
    msg.setTimeStamp(0.674922356241);
    msg.setSource(62152U);
    msg.setSourceEntity(9U);
    msg.setDestination(32199U);
    msg.setDestinationEntity(212U);
    msg.value = 0.798247543451;

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
    msg.setTimeStamp(0.279827027741);
    msg.setSource(60853U);
    msg.setSourceEntity(237U);
    msg.setDestination(52548U);
    msg.setDestinationEntity(193U);
    msg.value = 0.0897033605754;

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
    msg.setTimeStamp(0.642440506528);
    msg.setSource(25136U);
    msg.setSourceEntity(205U);
    msg.setDestination(13045U);
    msg.setDestinationEntity(71U);
    msg.value = 0.480811877099;

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
    msg.setTimeStamp(0.815638603939);
    msg.setSource(27982U);
    msg.setSourceEntity(40U);
    msg.setDestination(31387U);
    msg.setDestinationEntity(31U);
    msg.value = 0.684581711327;

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
    msg.setTimeStamp(0.685717337217);
    msg.setSource(63005U);
    msg.setSourceEntity(55U);
    msg.setDestination(10840U);
    msg.setDestinationEntity(3U);
    msg.direction = 0.81678436313;
    msg.speed = 0.516305005463;
    msg.turbulence = 0.183829915768;

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
    msg.setTimeStamp(0.727580794705);
    msg.setSource(38725U);
    msg.setSourceEntity(20U);
    msg.setDestination(23241U);
    msg.setDestinationEntity(98U);
    msg.direction = 0.9139940045;
    msg.speed = 0.786061903116;
    msg.turbulence = 0.829955949548;

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
    msg.setTimeStamp(0.245852123603);
    msg.setSource(30143U);
    msg.setSourceEntity(122U);
    msg.setDestination(33482U);
    msg.setDestinationEntity(109U);
    msg.direction = 0.235985197227;
    msg.speed = 0.474651647546;
    msg.turbulence = 0.00946327343426;

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
    msg.setTimeStamp(0.457121081595);
    msg.setSource(52892U);
    msg.setSourceEntity(236U);
    msg.setDestination(954U);
    msg.setDestinationEntity(180U);
    msg.value = 0.408363659158;

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
    msg.setTimeStamp(0.0414535501644);
    msg.setSource(39486U);
    msg.setSourceEntity(234U);
    msg.setDestination(44382U);
    msg.setDestinationEntity(95U);
    msg.value = 0.100837452017;

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
    msg.setTimeStamp(0.372130750814);
    msg.setSource(28519U);
    msg.setSourceEntity(71U);
    msg.setDestination(59873U);
    msg.setDestinationEntity(81U);
    msg.value = 0.634396556466;

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
    msg.setTimeStamp(0.551883208699);
    msg.setSource(52286U);
    msg.setSourceEntity(12U);
    msg.setDestination(59686U);
    msg.setDestinationEntity(180U);
    msg.value.assign("BQJAFSOMSRMKKMEGKPRXLEBYEZEXWRMQQVXFGFDWPTWOHCUYUATUGZQRFCDILLKGYDKCABPNOORYOASFJCTVTIRWCYRZJGSVHETJCBZXRNZVVKAQOKQOXRPYXBHUZGZGNWOWBNSERTPHILLLEHULTVLBQGWDJUMSUDBVTOSECUKQAVLQFHXIPIYVXUHXCNCIPJFKAHYSDFIBDAJAMMIJFDP");

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
    msg.setTimeStamp(0.599623996009);
    msg.setSource(51106U);
    msg.setSourceEntity(89U);
    msg.setDestination(47936U);
    msg.setDestinationEntity(26U);
    msg.value.assign("LPMUHLHUAWKSQCIMMYCJDNOAEDVHECTEEMNRCYPJDYPUGEINMANFREKDIETQOSDTBZRIFKFNWYTNPYBVXUJJTWSWMPBKMNEBZYBXKIWLFCMZTHLDJATUXQAXNHGLKVZIWZXVGFUUAZXXFEOQYRSSZAVCATVRIOGGOOROQPEGHGJQWTMVYDKOUACQNSNHRFVZHKOYRDRRLFFZHJIPXUXJGDJVSBQ");

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
    msg.setTimeStamp(0.183860943243);
    msg.setSource(31811U);
    msg.setSourceEntity(252U);
    msg.setDestination(51544U);
    msg.setDestinationEntity(22U);
    msg.value.assign("YUZTYFGGMZFKTQFHSUPOUNNCSODQPSQMCTKDJASVVZZXIASRMQGRBLHTFWBHGBUVXYJWUILDYNOSRMNJMEZKKWPHNDKDLMPJGYNLOIOOTQVOCDRTQQCFQPSIESBNAAMXDZOKNVEJMXGPEVRLKVAOWWUWCIHEEPHWQXFTSCBZYGEUJAZVHYCNXKEEWXRAJWGIKZUHDVBPUKHBPYHDELULYVCFGXIIPIBFJAFAJAWRMTBCLTFYSXOZJCTGML");

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
    msg.setTimeStamp(0.655715863468);
    msg.setSource(52053U);
    msg.setSourceEntity(248U);
    msg.setDestination(58658U);
    msg.setDestinationEntity(138U);
    const char tmp_msg_0[] = {-27, 50, 125, -118, 38, 61, -32, 32, 88, -111, 77, 15, 124, -69, 70, -19, -28, 19, 3, 119, -110, 85, -77, 84, -20, 90, -112, -42, 59, -22, 56, 122, -105, 22, 52, -54, 65, 99, 115, -7, 69, -114, -104, -106, 109, -2, 86, -35, -73, 32, -100, 23, -37, 114, 97, -50, -39, -44, -106, 65, 26, -124, -69, -101, 5, 64, 66, -59, -101, 46, 122, 47, -122, 15, 89, 37, 67, 88, -49, -125, 45, -96, 15, 24, 120, 95, -54, 52, 53, -124, -52, -19, 84, 55, 59, -44, 17, -56, 88, 81, 36, -44, 103, 81, -46, -98, 15, -50, -35, -96, 4, 18, -14, -59, -35, -66, 61, -107, -109, -86, 95, 61, 33, 121, -8, 19, 35, -74, -121, -56, 5};
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
    msg.setTimeStamp(0.313759276035);
    msg.setSource(1162U);
    msg.setSourceEntity(230U);
    msg.setDestination(56273U);
    msg.setDestinationEntity(53U);
    const char tmp_msg_0[] = {106, -77, 95, -55, -75, 113, -45, -29, -125, -109, -117, -108, -65, 82, 5, 97, 106, -40, 47, 32, -37, -107, -5, -51, 56, 90, -111, -71, 42, 22, 72, 29, 118, 74, 116, 53, 69, 117, -120, -37, 94, 100, 89, -7, -111, -83, -16, 96, -93, 0, 83, -65, -3, 93, 47, 36, -78, 87, -122, -101, -123, -45, 107, -37, -28, 100, -30, 38, 13, 61, -18, 22, -125, 72, 4, 51, 4, 64, 76, 97, -101, 78, 88, 2, -95, 37, 19, 30, -34, -46, 73, 63, -43, 115, -118, -62, -127, -113, -22, 30, -79, -3, 32, -51, 28, 102, 76, -11, 77, 122, -51, 86, -82, -62, 57, 96, 55, 20, 15, -5, -125, 76, -47, 99, 100, 88, 72, 94, -83, -27, -112, -12, 17, -128, -96, -106, -54, -15, -12, -76, 18, 0};
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
    msg.setTimeStamp(0.127573385062);
    msg.setSource(46893U);
    msg.setSourceEntity(148U);
    msg.setDestination(22706U);
    msg.setDestinationEntity(88U);
    const char tmp_msg_0[] = {-115, -67, 70, -81, -53, -47, 110, -82, 121, 62, -77, -7, -58, -70, 97, 0, 45, -80, 25, -6, 72, 6, -36, 38, -76, 59, 117, -53, 121, 27, 30, -93, -8, 90, 27, 108, -25, -76, 120, -48, -120, -78, 118, -86, 102, 118, -1, -32, -81, 68, 106, 117, -100, -96, 37, 19, 5, 6, 0, -22, -59, -43, 0, 105, -81, -35, 100, 33, -39, -81, -20, -124, -105, -94, -16, -30, -120, 50, 6, 40, -98, 10, 120, -14, 111, -122, 48, -17, -24, 94, 27, -100, 47, 14, 84, 89, 72, -116, 73, -81, 101, 13, 88, -128, -32, -101, 77, 52, 6, 46, -5, -97, 63, 14, -19, -44, 37, 36, -46, 9, 1, -124, -125, 13, -71, -45, 74, -48, 64, -107, 69, 20, -66, 36, 32, -115, 48, 68, 1, 80, -119, -48, 111, -97, 48, -66, -45, -21};
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
    msg.setTimeStamp(0.52387893597);
    msg.setSource(49397U);
    msg.setSourceEntity(56U);
    msg.setDestination(58348U);
    msg.setDestinationEntity(246U);
    msg.type = 54U;
    msg.frequency = 3832954071U;
    msg.min_range = 15560U;
    msg.max_range = 60739U;
    msg.bits_per_point = 238U;
    msg.scale_factor = 0.6954750759;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.633336176438;
    tmp_msg_0.beam_height = 0.832162013061;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {97, -93, -23, 93, -95, -7, 19, 75, 103, -128, -83, -125, -86, -64, 65, 0, -78, 46, -23, 16, 111, 112, -81, 64, 18, -112, 22, -102, 91, -96, -80, 58, -25, -24, -32, -82, -24, -88, -46, -78, 30, -55, -94, 121, -63, 52, 75, -109};
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
    msg.setTimeStamp(0.572951013888);
    msg.setSource(35568U);
    msg.setSourceEntity(164U);
    msg.setDestination(41210U);
    msg.setDestinationEntity(212U);
    msg.type = 20U;
    msg.frequency = 1290591780U;
    msg.min_range = 41845U;
    msg.max_range = 4368U;
    msg.bits_per_point = 88U;
    msg.scale_factor = 0.359162130494;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.24512019122;
    tmp_msg_0.beam_height = 0.887093165284;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-9, -18, -77, -33, -38, 114, 64, -84, 103, 114, -62, -57, -50, 107, 34, 32, 123, 109, 88, 76, 79, 36, 38, 91, -101, -99, -56, -70, 53, -42, -69, 67, -122, 54, 37, -87, -13, -53, 101, -60, -122, -63, -40, -36, -16, -12, -88, -41, -42, 95, 41, -50, 113, -75, 115, -41, -3, -87, 23, -23, 59, -14, 78, -61, 117, 109, 95, -95, 48, 98, 38, 31, 93, 6, -23, -31, 100, 106, -20, 109, -64, 85, 80, 36, 70, 53, -99, -62, -50, -33, 4, 89, -47, -126, 91, -120, 35, -123, 78, 61, -112, -110, -95, 24, -19, 116, 67, 23, 89, 78, -70, -121, 118, 90, 34, -34, -70, 118, -2, 26, 96, 12, -83, 19, -94, 6, -99, 60, 53, 56, -51, 50, 81, -46, 105, -45, -52, -49, 34, 45, -17, 33, 52, -19, 68, -124, 32, -6, 116, 15, -11, 68, -113, 77, -70, -127, 44, -78, -50, 80, -101, -106, 88, -86, 73, -96, -120, 79, 22, -52, -21, 122, -128, 118, 49, -86, -48, 28, -35, 66, -1, -86, 50, 86};
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
    msg.setTimeStamp(0.46953887018);
    msg.setSource(19888U);
    msg.setSourceEntity(215U);
    msg.setDestination(7182U);
    msg.setDestinationEntity(85U);
    msg.type = 202U;
    msg.frequency = 665364987U;
    msg.min_range = 55504U;
    msg.max_range = 22525U;
    msg.bits_per_point = 123U;
    msg.scale_factor = 0.0585109220601;
    const char tmp_msg_0[] = {31, 123, -58, 95, 64, -19, 46, -96, 6, 106, 3, -124, -106, 63, 126, 72, -66, -14, 16, -111, 63, 109, 101, 4, 119, -74, -60, -101};
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
    msg.setTimeStamp(0.1835029724);
    msg.setSource(22023U);
    msg.setSourceEntity(179U);
    msg.setDestination(35572U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.835821793031);
    msg.setSource(29504U);
    msg.setSourceEntity(142U);
    msg.setDestination(26674U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.586671998286);
    msg.setSource(59024U);
    msg.setSourceEntity(87U);
    msg.setDestination(54910U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.702307939517);
    msg.setSource(14351U);
    msg.setSourceEntity(231U);
    msg.setDestination(24341U);
    msg.setDestinationEntity(67U);
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
    msg.setTimeStamp(0.15552346189);
    msg.setSource(45246U);
    msg.setSourceEntity(128U);
    msg.setDestination(25938U);
    msg.setDestinationEntity(119U);
    msg.op = 194U;

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
    msg.setTimeStamp(0.0950173214069);
    msg.setSource(41967U);
    msg.setSourceEntity(250U);
    msg.setDestination(60863U);
    msg.setDestinationEntity(167U);
    msg.op = 85U;

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
    msg.setTimeStamp(0.443388603075);
    msg.setSource(51370U);
    msg.setSourceEntity(98U);
    msg.setDestination(19489U);
    msg.setDestinationEntity(162U);
    msg.value = 0.342290348138;
    msg.confidence = 0.848561480276;
    msg.opmodes.assign("CAUIQPLKRVOQLAXMZLNVGYHMJNRONFTTKZMQXWHLCBQDUBSPYBINNDJKPZRVZPNKZHFEGDFDXPKWQLJUZAZLYYOOAUEBIDZUUMOVEEODCVJXJFTHPRXJNDXKATBHRPNGVCATHECGRFAYDGRAQKEPBKOSOWQYEMIJBFJWG");

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
    msg.setTimeStamp(0.0551373088387);
    msg.setSource(15907U);
    msg.setSourceEntity(241U);
    msg.setDestination(20316U);
    msg.setDestinationEntity(49U);
    msg.value = 0.281433527955;
    msg.confidence = 0.552763967128;
    msg.opmodes.assign("CCRSFKQFXNYYQHGIKJMYNWRWZELXKGNBWTEURCJTIMANCMIAJAZHRDOHUDUXCYKQBLRDTAIWEWETRSSLZPXEJEPGZWUTBPO");

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
    msg.setTimeStamp(0.533628722372);
    msg.setSource(21244U);
    msg.setSourceEntity(176U);
    msg.setDestination(3159U);
    msg.setDestinationEntity(61U);
    msg.value = 0.525418513114;
    msg.confidence = 0.24266287257;
    msg.opmodes.assign("MWAWVVGYSNNOUETBENZFIHLIZQFDBTHSZVJXZLFOYVSGCKPIOEDSDLJATCVMGNLUCFRENZGPMEYYRTOO");

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
    msg.setTimeStamp(0.724633185038);
    msg.setSource(2715U);
    msg.setSourceEntity(207U);
    msg.setDestination(60495U);
    msg.setDestinationEntity(142U);
    msg.itow = 286532948U;
    msg.lat = 0.281855267372;
    msg.lon = 0.909323826032;
    msg.height_ell = 0.84547011215;
    msg.height_sea = 0.334926774014;
    msg.hacc = 0.0562636536101;
    msg.vacc = 0.804890541686;
    msg.vel_n = 0.787484505038;
    msg.vel_e = 0.949079448932;
    msg.vel_d = 0.893221047679;
    msg.speed = 0.523773590551;
    msg.gspeed = 0.97453695304;
    msg.heading = 0.0847081076764;
    msg.sacc = 0.209331094564;
    msg.cacc = 0.608283815774;

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
    msg.setTimeStamp(0.162420417899);
    msg.setSource(56923U);
    msg.setSourceEntity(87U);
    msg.setDestination(46213U);
    msg.setDestinationEntity(222U);
    msg.itow = 2632152609U;
    msg.lat = 0.262557985302;
    msg.lon = 0.326493678502;
    msg.height_ell = 0.334564168072;
    msg.height_sea = 0.242962230867;
    msg.hacc = 0.815263270371;
    msg.vacc = 0.797559181498;
    msg.vel_n = 0.204193701812;
    msg.vel_e = 0.921571410743;
    msg.vel_d = 0.681632016827;
    msg.speed = 0.423133916284;
    msg.gspeed = 0.601775902178;
    msg.heading = 0.920709148545;
    msg.sacc = 0.62915604745;
    msg.cacc = 0.872566674365;

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
    msg.setTimeStamp(0.611899800313);
    msg.setSource(15430U);
    msg.setSourceEntity(165U);
    msg.setDestination(25969U);
    msg.setDestinationEntity(55U);
    msg.itow = 1260722470U;
    msg.lat = 0.386514579438;
    msg.lon = 0.77787523928;
    msg.height_ell = 0.595977603824;
    msg.height_sea = 0.113024774208;
    msg.hacc = 0.355996431509;
    msg.vacc = 0.12813172052;
    msg.vel_n = 0.16333695288;
    msg.vel_e = 0.124498851678;
    msg.vel_d = 0.115224009603;
    msg.speed = 0.946849127696;
    msg.gspeed = 0.558614260973;
    msg.heading = 0.186634144241;
    msg.sacc = 0.634080986063;
    msg.cacc = 0.124551628572;

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
    msg.setTimeStamp(0.606027563621);
    msg.setSource(44836U);
    msg.setSourceEntity(205U);
    msg.setDestination(46612U);
    msg.setDestinationEntity(77U);
    msg.id = 227U;
    msg.value = 0.666214238768;

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
    msg.setTimeStamp(0.409755369499);
    msg.setSource(19731U);
    msg.setSourceEntity(142U);
    msg.setDestination(24637U);
    msg.setDestinationEntity(3U);
    msg.id = 195U;
    msg.value = 0.623861388379;

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
    msg.setTimeStamp(0.909438308738);
    msg.setSource(7999U);
    msg.setSourceEntity(213U);
    msg.setDestination(40233U);
    msg.setDestinationEntity(220U);
    msg.id = 88U;
    msg.value = 0.961835471033;

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
    msg.setTimeStamp(0.615286860542);
    msg.setSource(53169U);
    msg.setSourceEntity(168U);
    msg.setDestination(49824U);
    msg.setDestinationEntity(78U);
    msg.x = 0.27854392321;
    msg.y = 0.897502205467;
    msg.z = 0.341253195435;
    msg.phi = 0.97754636994;
    msg.theta = 0.183857038565;
    msg.psi = 0.695311414068;

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
    msg.setTimeStamp(0.524627187675);
    msg.setSource(56899U);
    msg.setSourceEntity(29U);
    msg.setDestination(39930U);
    msg.setDestinationEntity(99U);
    msg.x = 0.0770883377431;
    msg.y = 0.786799010496;
    msg.z = 0.310830950451;
    msg.phi = 0.260524429351;
    msg.theta = 0.504177500989;
    msg.psi = 0.818732391661;

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
    msg.setTimeStamp(0.610342244902);
    msg.setSource(48829U);
    msg.setSourceEntity(236U);
    msg.setDestination(56246U);
    msg.setDestinationEntity(174U);
    msg.x = 0.0151833671799;
    msg.y = 0.157628157765;
    msg.z = 0.949891957745;
    msg.phi = 0.394803662185;
    msg.theta = 0.730980947168;
    msg.psi = 0.620388247198;

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
    msg.setTimeStamp(0.143694769727);
    msg.setSource(44827U);
    msg.setSourceEntity(9U);
    msg.setDestination(25402U);
    msg.setDestinationEntity(114U);
    msg.beam_width = 0.456459983663;
    msg.beam_height = 0.153636705816;

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
    msg.setTimeStamp(0.290695865789);
    msg.setSource(13156U);
    msg.setSourceEntity(134U);
    msg.setDestination(61262U);
    msg.setDestinationEntity(198U);
    msg.beam_width = 0.410442939058;
    msg.beam_height = 0.910449365357;

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
    msg.setTimeStamp(0.847914489047);
    msg.setSource(47425U);
    msg.setSourceEntity(228U);
    msg.setDestination(39119U);
    msg.setDestinationEntity(199U);
    msg.beam_width = 0.491120637562;
    msg.beam_height = 0.155316648881;

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
    msg.setTimeStamp(0.186495699735);
    msg.setSource(52122U);
    msg.setSourceEntity(32U);
    msg.setDestination(59856U);
    msg.setDestinationEntity(127U);
    msg.sane = 190U;

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
    msg.setTimeStamp(0.543547779152);
    msg.setSource(16567U);
    msg.setSourceEntity(101U);
    msg.setDestination(9622U);
    msg.setDestinationEntity(55U);
    msg.sane = 185U;

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
    msg.setTimeStamp(0.724755411456);
    msg.setSource(39340U);
    msg.setSourceEntity(73U);
    msg.setDestination(993U);
    msg.setDestinationEntity(22U);
    msg.sane = 222U;

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
    msg.setTimeStamp(0.162179904388);
    msg.setSource(37942U);
    msg.setSourceEntity(12U);
    msg.setDestination(53156U);
    msg.setDestinationEntity(246U);
    msg.value = 0.521922536154;

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
    msg.setTimeStamp(0.249379970344);
    msg.setSource(62767U);
    msg.setSourceEntity(172U);
    msg.setDestination(49812U);
    msg.setDestinationEntity(130U);
    msg.value = 0.827821827768;

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
    msg.setTimeStamp(0.830382250422);
    msg.setSource(59626U);
    msg.setSourceEntity(183U);
    msg.setDestination(64381U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0596887488423;

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
    msg.setTimeStamp(0.0919238188401);
    msg.setSource(24732U);
    msg.setSourceEntity(142U);
    msg.setDestination(59982U);
    msg.setDestinationEntity(136U);
    msg.value = 0.965604395413;

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
    msg.setTimeStamp(0.942033873128);
    msg.setSource(58687U);
    msg.setSourceEntity(230U);
    msg.setDestination(5671U);
    msg.setDestinationEntity(64U);
    msg.value = 0.360527258907;

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
    msg.setTimeStamp(0.0447408759216);
    msg.setSource(62120U);
    msg.setSourceEntity(224U);
    msg.setDestination(43483U);
    msg.setDestinationEntity(137U);
    msg.value = 0.569041729354;

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
    msg.setTimeStamp(0.437252443958);
    msg.setSource(52744U);
    msg.setSourceEntity(233U);
    msg.setDestination(33662U);
    msg.setDestinationEntity(227U);
    msg.value = 0.328600254974;

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
    msg.setTimeStamp(0.98269301203);
    msg.setSource(57070U);
    msg.setSourceEntity(22U);
    msg.setDestination(55022U);
    msg.setDestinationEntity(34U);
    msg.value = 0.304829043201;

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
    msg.setTimeStamp(0.341135689732);
    msg.setSource(14489U);
    msg.setSourceEntity(133U);
    msg.setDestination(31204U);
    msg.setDestinationEntity(131U);
    msg.value = 0.611440552848;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.250252060926);
    msg.setSource(64602U);
    msg.setSourceEntity(104U);
    msg.setDestination(25282U);
    msg.setDestinationEntity(114U);
    msg.id = 90U;
    msg.zoom = 188U;
    msg.action = 168U;

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
    msg.setTimeStamp(0.477977918604);
    msg.setSource(796U);
    msg.setSourceEntity(182U);
    msg.setDestination(41157U);
    msg.setDestinationEntity(192U);
    msg.id = 198U;
    msg.zoom = 108U;
    msg.action = 224U;

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
    msg.setTimeStamp(0.324577702686);
    msg.setSource(2432U);
    msg.setSourceEntity(45U);
    msg.setDestination(26894U);
    msg.setDestinationEntity(153U);
    msg.id = 43U;
    msg.zoom = 237U;
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
    msg.setTimeStamp(0.900163365796);
    msg.setSource(16841U);
    msg.setSourceEntity(10U);
    msg.setDestination(41742U);
    msg.setDestinationEntity(201U);
    msg.id = 89U;
    msg.value = 0.509813986229;

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
    msg.setTimeStamp(0.732613797826);
    msg.setSource(25291U);
    msg.setSourceEntity(170U);
    msg.setDestination(1266U);
    msg.setDestinationEntity(217U);
    msg.id = 122U;
    msg.value = 0.730248699972;

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
    msg.setTimeStamp(0.733960567256);
    msg.setSource(2741U);
    msg.setSourceEntity(169U);
    msg.setDestination(46099U);
    msg.setDestinationEntity(116U);
    msg.id = 233U;
    msg.value = 0.584291533175;

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
    msg.setTimeStamp(0.125917160318);
    msg.setSource(38396U);
    msg.setSourceEntity(165U);
    msg.setDestination(3563U);
    msg.setDestinationEntity(223U);
    msg.id = 175U;
    msg.value = 0.17891398856;

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
    msg.setTimeStamp(0.713769459913);
    msg.setSource(11050U);
    msg.setSourceEntity(94U);
    msg.setDestination(17804U);
    msg.setDestinationEntity(245U);
    msg.id = 56U;
    msg.value = 0.617859356139;

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
    msg.setTimeStamp(0.931636092267);
    msg.setSource(24913U);
    msg.setSourceEntity(91U);
    msg.setDestination(24705U);
    msg.setDestinationEntity(69U);
    msg.id = 144U;
    msg.value = 0.440458848132;

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
    msg.setTimeStamp(0.826865775225);
    msg.setSource(15288U);
    msg.setSourceEntity(76U);
    msg.setDestination(25139U);
    msg.setDestinationEntity(249U);
    msg.id = 167U;
    msg.angle = 0.641971326137;

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
    msg.setTimeStamp(0.595581850538);
    msg.setSource(53476U);
    msg.setSourceEntity(42U);
    msg.setDestination(52154U);
    msg.setDestinationEntity(74U);
    msg.id = 188U;
    msg.angle = 0.415297547388;

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
    msg.setTimeStamp(0.939809669478);
    msg.setSource(27928U);
    msg.setSourceEntity(244U);
    msg.setDestination(48574U);
    msg.setDestinationEntity(141U);
    msg.id = 81U;
    msg.angle = 0.702630173658;

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
    msg.setTimeStamp(0.946555404217);
    msg.setSource(45711U);
    msg.setSourceEntity(59U);
    msg.setDestination(56965U);
    msg.setDestinationEntity(72U);
    msg.op = 15U;
    msg.actions.assign("EFDGSSGOFMTQBHRPVMXRGCDASFYJJUGFZCCMZPTLHLKJNVIVEAQIUHUFBPXWKKXNEDVKABXECNNKWOJVAQAKHTDFCBNNVOJTOBRQWBWGXOLXJHZYCEFOZQOIJWXGUDDRKCHUNNMPRAIWSPPCHOFRMORZYKGMJWAZHMYXUXHDPUIL");

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
    msg.setTimeStamp(0.333762536154);
    msg.setSource(17439U);
    msg.setSourceEntity(13U);
    msg.setDestination(22664U);
    msg.setDestinationEntity(91U);
    msg.op = 55U;
    msg.actions.assign("BQDQWGSMYXSAYUQTNNPQKGCXGOQJNWEXHRFWXUJSIBAFPLVNTZGFZORDUVRESBMTZMZGORWMDYXCTBBXIBXOMOKCATIRNKGMLVUYGSVHEVCJTJSMBPLZNFJHLJESCMJNAYIVCROOHRFCMIDJOMIHIAKKBWDPHVLWPFVKLZUTWKUNWSYAYPUE");

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
    msg.setTimeStamp(0.700164382432);
    msg.setSource(50511U);
    msg.setSourceEntity(229U);
    msg.setDestination(51570U);
    msg.setDestinationEntity(115U);
    msg.op = 227U;
    msg.actions.assign("FAAPOAJNLRYEQJWDCWNUSTRKHOKRHMQTMYPMLEVRCZTFEEBTYTZGZLXIGWBPSWCMZJVDTKUXROZOEUXQNXIKXBUYAWRHUHQKNWEGWMIASUCHWINULTEVQXLZYZGUDESTPIFFKZOZCSZRPOLAQMAHQCIBEVPVAJGJSJNBXKULTGXRFVFDJPSFTNVBNSXKLQDGLIBECCMRQHHWOVMJIBKBPI");

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
    msg.setTimeStamp(0.952790103904);
    msg.setSource(31547U);
    msg.setSourceEntity(244U);
    msg.setDestination(6577U);
    msg.setDestinationEntity(4U);
    msg.actions.assign("YVIYXXIMCVYKNAWEBPACRMBBPHDDBUNEPFWZAYHQMTFEKQEDGHJTPEEJNJPUVQNVCEBLWOGDQBJUTCUSRGIAJPRNXYJZWLPOSBE");

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
    msg.setTimeStamp(0.959084787494);
    msg.setSource(34588U);
    msg.setSourceEntity(165U);
    msg.setDestination(4846U);
    msg.setDestinationEntity(78U);
    msg.actions.assign("QGUSZUXECVPXDZKLBDFYCJPZAVMOAKSPTXIFWWEZWMHBUJDPNYLHDIRDFRSQCKBNDMVCYSQGWLVIPRZJQZCPTBYMEIEWICDQNORSLWHZRTLBYLFQSBFODGPPXWAOUREMCRMFWIVGZVXHXOCHHIKXGCNUBFTPUHCDKJ");

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
    msg.setTimeStamp(0.202371720126);
    msg.setSource(6031U);
    msg.setSourceEntity(245U);
    msg.setDestination(41064U);
    msg.setDestinationEntity(199U);
    msg.actions.assign("PJSOYJYVISHTYFWSUXDEZKRMEPQYPVGBRTJHDAGAHENXAQCMSBDXLUWJWGLRTYYDTQIXUVEXVTLBVFOWQBVRALYDDQRMUOHKWTFTNLJGRNEXUSHCRQZZOSEYQEUWDUAQMGPHAAUJNSBQFRWKKUCDFPIZZTAKJOXJBTCPVBCYG");

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
    msg.setTimeStamp(0.922945829002);
    msg.setSource(38336U);
    msg.setSourceEntity(2U);
    msg.setDestination(26357U);
    msg.setDestinationEntity(63U);
    msg.button = 168U;
    msg.value = 31U;

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
    msg.setTimeStamp(0.82279880486);
    msg.setSource(51249U);
    msg.setSourceEntity(6U);
    msg.setDestination(35226U);
    msg.setDestinationEntity(98U);
    msg.button = 64U;
    msg.value = 75U;

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
    msg.setTimeStamp(0.0307324954574);
    msg.setSource(4348U);
    msg.setSourceEntity(213U);
    msg.setDestination(48439U);
    msg.setDestinationEntity(245U);
    msg.button = 11U;
    msg.value = 170U;

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
    msg.setTimeStamp(0.853501741384);
    msg.setSource(28463U);
    msg.setSourceEntity(48U);
    msg.setDestination(57810U);
    msg.setDestinationEntity(249U);
    msg.op = 73U;
    msg.text.assign("JWEZSMPUCEMYLHFTNQRBWCTMRXDGXHMBVXZUAUFHYBQFWAJWTZIWTDZFGGQRGFRQZ");

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
    msg.setTimeStamp(0.550171429115);
    msg.setSource(63302U);
    msg.setSourceEntity(120U);
    msg.setDestination(62860U);
    msg.setDestinationEntity(64U);
    msg.op = 140U;
    msg.text.assign("CYJMQRDUWSPHZCCFNCMZYWJBLYHJQBYXJHOLOXSIRZGHWRIPLPWNTGFTONPWOVUTACGDPSMDHCPVWTVBKRVQGDVVFDOZANDIACIEIAJLIZLPFQGLIENBDGDNGIWFSFPYQQUYSLXENIDRKQECKZQFJFHESCSEJYNOUUHLESVSPINVGQWHKBZY");

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
    msg.setTimeStamp(0.861526879946);
    msg.setSource(39882U);
    msg.setSourceEntity(78U);
    msg.setDestination(45998U);
    msg.setDestinationEntity(97U);
    msg.op = 51U;
    msg.text.assign("RMIKTGZWOSZLDCPRASZVAXMCJMBSUCWRFVNPRIOHRSYIVTVTHZZGIUQIWDDFZQPVHIFGCIRYHRSLVBJUFKYKDOGBCWYNMHCUKUHDESZTOFCQPNIC");

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
    msg.setTimeStamp(0.813062759179);
    msg.setSource(46954U);
    msg.setSourceEntity(237U);
    msg.setDestination(37523U);
    msg.setDestinationEntity(38U);
    msg.op = 19U;
    msg.time_remain = 0.587312329123;
    msg.sched_time = 0.198402583017;

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
    msg.setTimeStamp(0.467407083749);
    msg.setSource(39432U);
    msg.setSourceEntity(8U);
    msg.setDestination(56065U);
    msg.setDestinationEntity(7U);
    msg.op = 200U;
    msg.time_remain = 0.776735960943;
    msg.sched_time = 0.121726336883;

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
    msg.setTimeStamp(0.17300616889);
    msg.setSource(51490U);
    msg.setSourceEntity(40U);
    msg.setDestination(20155U);
    msg.setDestinationEntity(143U);
    msg.op = 230U;
    msg.time_remain = 0.768780900146;
    msg.sched_time = 0.184359891396;

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
    msg.setTimeStamp(0.615649015569);
    msg.setSource(47670U);
    msg.setSourceEntity(79U);
    msg.setDestination(40286U);
    msg.setDestinationEntity(199U);
    msg.name.assign("DJSVBTRCSPWGJMKXTMSIRTFKOJXGDXTJUOGEQDTYGZAWGINVRZLZWVTJOHTQVINBQONONPLRCPYYNEDSWXVNHM");
    msg.op = 133U;
    msg.sched_time = 0.864731553437;

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
    msg.setTimeStamp(0.664074706718);
    msg.setSource(21873U);
    msg.setSourceEntity(200U);
    msg.setDestination(55530U);
    msg.setDestinationEntity(177U);
    msg.name.assign("MVRYCGHSUAZPTUXHDNJAGHOBRSFHGCPKTRRPDTYPCITWISJBXLJXMRSIBISAFRDQVTWHCFIBLGKHQTB");
    msg.op = 207U;
    msg.sched_time = 0.684530982255;

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
    msg.setTimeStamp(0.0139756643852);
    msg.setSource(308U);
    msg.setSourceEntity(110U);
    msg.setDestination(40595U);
    msg.setDestinationEntity(214U);
    msg.name.assign("UNLPTVNZDEFJMHVMIBTOPEUEDQNIKNYQERLKNONAWUWHECBZVAVCFOZTIFZUPCRKQJTNCSPGASGUKFWPHJHDVIPIRDTAXETLUGRJEONLDWSBGRXWBTZXCKDBLFEQAQQYGHBHXKXZAODXWBOZDMVGFGJFVJSJQMKFCVHXHSWKZIFRIJGSIPA");
    msg.op = 119U;
    msg.sched_time = 0.0253961507738;

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
    msg.setTimeStamp(0.682552029656);
    msg.setSource(6855U);
    msg.setSourceEntity(241U);
    msg.setDestination(8588U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.4990690693);
    msg.setSource(8413U);
    msg.setSourceEntity(213U);
    msg.setDestination(19591U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.121909858161);
    msg.setSource(10071U);
    msg.setSourceEntity(185U);
    msg.setDestination(47949U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.330385318969);
    msg.setSource(55552U);
    msg.setSourceEntity(230U);
    msg.setDestination(6122U);
    msg.setDestinationEntity(205U);
    msg.name.assign("QBBFKHJNMWSYLJ");
    msg.state = 170U;

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
    msg.setTimeStamp(0.303395578476);
    msg.setSource(11871U);
    msg.setSourceEntity(168U);
    msg.setDestination(46017U);
    msg.setDestinationEntity(4U);
    msg.name.assign("QFMTZMSHDFXOBHSGLDEUMFKWZYXVFNEIETQROXABSCHRPJGBOOZLUAQGNVWKSUMZYGRTEUHRINUEASIWTOZGEYXBWKWLCNCK");
    msg.state = 200U;

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
    msg.setTimeStamp(0.109101131836);
    msg.setSource(14859U);
    msg.setSourceEntity(118U);
    msg.setDestination(19263U);
    msg.setDestinationEntity(24U);
    msg.name.assign("DMKRFXUCXGULZIEPZTWUJZYGKMSEKEPRWDQZEFPDGCSLVWBSMKCSXIPONMEGOUNUXQVWGDZQFEYETIIDHJWATXVLNZDYSGONXJQKU");
    msg.state = 211U;

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
    msg.setTimeStamp(0.816389496111);
    msg.setSource(14557U);
    msg.setSourceEntity(42U);
    msg.setDestination(47701U);
    msg.setDestinationEntity(229U);
    msg.name.assign("YNBQYUXWYWFMHUGMIAXCBLPPIEIQKUADRZYNGFHCBWXLEVHAJPULVSHSZBRLNDMP");
    msg.value = 143U;

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
    msg.setTimeStamp(0.975232593201);
    msg.setSource(24166U);
    msg.setSourceEntity(36U);
    msg.setDestination(60197U);
    msg.setDestinationEntity(192U);
    msg.name.assign("IPCTYWGICQVXIDKVDNTLRBSLWDPJNGDUASHOLPMXKLJXACOQZFPQWTMZDUQCZJMPRJIOZGTVKBNUHUMNYUQPENLRGYELWPNHMIZXSTKYUGMHX");
    msg.value = 154U;

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
    msg.setTimeStamp(0.65487334899);
    msg.setSource(15821U);
    msg.setSourceEntity(243U);
    msg.setDestination(27003U);
    msg.setDestinationEntity(55U);
    msg.name.assign("LPANMZRWUZGFTYWCHNNCMQ");
    msg.value = 95U;

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
    msg.setTimeStamp(0.608740371205);
    msg.setSource(59880U);
    msg.setSourceEntity(241U);
    msg.setDestination(30333U);
    msg.setDestinationEntity(56U);
    msg.name.assign("UGONIEYURJENFAPYXSMHBBXRLVEDFCZASWAZNLDDNXCQBQWIRJVPAAMXLKHESEPBKGOFQFOSVPLKXMMTXIQIJQFFJYLMVSNYGGLXOGGNKMMTHBGDWKSZRTPXYUBWPQLUZIJOUGUU");

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
    msg.setTimeStamp(0.908151778481);
    msg.setSource(32739U);
    msg.setSourceEntity(130U);
    msg.setDestination(15193U);
    msg.setDestinationEntity(127U);
    msg.name.assign("FUYIOTAACQBKPYHPAQBLSPZPHZXLH");

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
    msg.setTimeStamp(0.492647853089);
    msg.setSource(32183U);
    msg.setSourceEntity(145U);
    msg.setDestination(48314U);
    msg.setDestinationEntity(218U);
    msg.name.assign("DDJOCGQYVIYRPEQMWAMZWDXRSNUIIBBFQGLN");

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
    msg.setTimeStamp(0.795323890778);
    msg.setSource(6912U);
    msg.setSourceEntity(66U);
    msg.setDestination(25516U);
    msg.setDestinationEntity(143U);
    msg.name.assign("ZVGUBZORVZSMYMQHSCZOIMWGEMDHFPJFBWHSGWPQKVXREYQMMRQKKAIEEQJPXIVPKLXTSDOAUSFOPIBKKZABGFUIVLHCYMPMOXJTTYWHYZADHAUNZXVIUDORTUBBTWWYVVLHUEGLNXQYLZOCDNIMFRPVYHANOTEDERFDFBLEQQBAICCANGECZNCFNRTTXKJLXCYJWXAUOCPGLGHJTIRFNRYGISSZXBBQPFELCSR");
    msg.value = 237U;

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
    msg.setTimeStamp(0.227926066291);
    msg.setSource(36017U);
    msg.setSourceEntity(33U);
    msg.setDestination(42323U);
    msg.setDestinationEntity(95U);
    msg.name.assign("ZJAWGAWBGJHOWMOUYUVYQXSQHFUBLWCKFGTCNPKXOHDEQLTTRZCGDHGKVKEQHIORKMXSUIXBQPYIZQKLCAUPKJXOTBUIRRDREZGIFVWYMIECXZYAQENPSJEMULAEHNVTSHRNBGSZCJHNYAJRPCSSDRFSCPDOZYXVWQLLIONNTJFQXHBIDOXYQBRATPMW");
    msg.value = 164U;

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
    msg.setTimeStamp(0.103771349481);
    msg.setSource(39799U);
    msg.setSourceEntity(121U);
    msg.setDestination(35702U);
    msg.setDestinationEntity(32U);
    msg.name.assign("NVAPJBMTWRSSMYNUIVOHUUGXNDUJSBQTNIVKEAKPYFXTSUUBNEDVSETBXBLLPJHGXYUERCVMQPEFHDBVPVCNZYEGDORAKKJKHGXJIITCITQYHZLVNLVJOYKLVGPZFNHCEPLHWRIYQFTTWFCKJAQMJOMMZNLCOXCACDOABROWDPATQXIXCQZZEJEZRLDFMMAJZRTOUXSQWSFDMRWRHZNSSXPLOSUHIC");
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
    msg.setTimeStamp(0.996725565754);
    msg.setSource(64245U);
    msg.setSourceEntity(9U);
    msg.setDestination(10963U);
    msg.setDestinationEntity(249U);
    msg.id = 34U;
    msg.period = 3488823712U;
    msg.duty_cycle = 818271244U;

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
    msg.setTimeStamp(0.26088994825);
    msg.setSource(5325U);
    msg.setSourceEntity(77U);
    msg.setDestination(14165U);
    msg.setDestinationEntity(246U);
    msg.id = 28U;
    msg.period = 1013058040U;
    msg.duty_cycle = 2043409001U;

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
    msg.setTimeStamp(0.387674856124);
    msg.setSource(44794U);
    msg.setSourceEntity(144U);
    msg.setDestination(24544U);
    msg.setDestinationEntity(196U);
    msg.id = 140U;
    msg.period = 1840656586U;
    msg.duty_cycle = 3160844978U;

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
    msg.setTimeStamp(0.354002407743);
    msg.setSource(28773U);
    msg.setSourceEntity(15U);
    msg.setDestination(17785U);
    msg.setDestinationEntity(123U);
    msg.id = 189U;
    msg.period = 2823282107U;
    msg.duty_cycle = 1278129729U;

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
    msg.setTimeStamp(0.356031711111);
    msg.setSource(51832U);
    msg.setSourceEntity(224U);
    msg.setDestination(65211U);
    msg.setDestinationEntity(200U);
    msg.id = 106U;
    msg.period = 356515201U;
    msg.duty_cycle = 51045334U;

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
    msg.setTimeStamp(0.781713949464);
    msg.setSource(55079U);
    msg.setSourceEntity(15U);
    msg.setDestination(9189U);
    msg.setDestinationEntity(92U);
    msg.id = 158U;
    msg.period = 820292880U;
    msg.duty_cycle = 3672731270U;

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
    msg.setTimeStamp(0.547169536616);
    msg.setSource(3669U);
    msg.setSourceEntity(22U);
    msg.setDestination(4324U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.274106775484;
    msg.lon = 0.325389233695;
    msg.height = 0.987186849922;
    msg.x = 0.310739341253;
    msg.y = 0.762787785382;
    msg.z = 0.355867593031;
    msg.phi = 0.526037580897;
    msg.theta = 0.290145034443;
    msg.psi = 0.0301672865333;
    msg.u = 0.581013287755;
    msg.v = 0.407035795281;
    msg.w = 0.679850113384;
    msg.vx = 0.863836130311;
    msg.vy = 0.216505243477;
    msg.vz = 0.556316279407;
    msg.p = 0.194187678991;
    msg.q = 0.49999912959;
    msg.r = 0.971076626023;
    msg.depth = 0.448975462736;
    msg.alt = 0.153240447029;

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
    msg.setTimeStamp(0.690860676317);
    msg.setSource(7590U);
    msg.setSourceEntity(89U);
    msg.setDestination(64961U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.392550128663;
    msg.lon = 0.00540846565183;
    msg.height = 0.444662971482;
    msg.x = 0.2724714336;
    msg.y = 0.360572839664;
    msg.z = 0.391291756644;
    msg.phi = 0.210647511508;
    msg.theta = 0.857466390164;
    msg.psi = 0.628559946783;
    msg.u = 0.667313316781;
    msg.v = 0.218495078067;
    msg.w = 0.509214730002;
    msg.vx = 0.288984383321;
    msg.vy = 0.339885366638;
    msg.vz = 0.650269040913;
    msg.p = 0.399183452381;
    msg.q = 0.776149464835;
    msg.r = 0.897527643475;
    msg.depth = 0.23509777781;
    msg.alt = 0.0194751822779;

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
    msg.setTimeStamp(0.282628345529);
    msg.setSource(52528U);
    msg.setSourceEntity(176U);
    msg.setDestination(33460U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.0113840406592;
    msg.lon = 0.262693732405;
    msg.height = 0.0230442162281;
    msg.x = 0.589457707952;
    msg.y = 0.589498986224;
    msg.z = 0.161469790819;
    msg.phi = 0.360464590513;
    msg.theta = 0.260660108843;
    msg.psi = 0.105133945924;
    msg.u = 0.658638689947;
    msg.v = 0.753210613328;
    msg.w = 0.412789352737;
    msg.vx = 0.796662871771;
    msg.vy = 0.821589131684;
    msg.vz = 0.701573692791;
    msg.p = 0.891229045242;
    msg.q = 0.672693965953;
    msg.r = 0.170477945942;
    msg.depth = 0.414200671107;
    msg.alt = 0.856148500622;

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
    msg.setTimeStamp(0.109251445317);
    msg.setSource(8890U);
    msg.setSourceEntity(190U);
    msg.setDestination(17479U);
    msg.setDestinationEntity(54U);
    msg.x = 0.670203266575;
    msg.y = 0.212713924811;
    msg.z = 0.00847671322981;

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
    msg.setTimeStamp(0.989590473143);
    msg.setSource(49027U);
    msg.setSourceEntity(219U);
    msg.setDestination(20797U);
    msg.setDestinationEntity(190U);
    msg.x = 0.205115753261;
    msg.y = 0.944104695948;
    msg.z = 0.991646536794;

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
    msg.setTimeStamp(0.36838524546);
    msg.setSource(41612U);
    msg.setSourceEntity(197U);
    msg.setDestination(46912U);
    msg.setDestinationEntity(52U);
    msg.x = 0.702404134367;
    msg.y = 0.965743902187;
    msg.z = 0.439019421122;

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
    msg.setTimeStamp(0.117580103004);
    msg.setSource(16413U);
    msg.setSourceEntity(22U);
    msg.setDestination(12137U);
    msg.setDestinationEntity(84U);
    msg.value = 0.906382059688;

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
    msg.setTimeStamp(0.981917584492);
    msg.setSource(6320U);
    msg.setSourceEntity(137U);
    msg.setDestination(50148U);
    msg.setDestinationEntity(45U);
    msg.value = 0.167779548641;

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
    msg.setTimeStamp(0.185481799953);
    msg.setSource(6631U);
    msg.setSourceEntity(11U);
    msg.setDestination(16483U);
    msg.setDestinationEntity(131U);
    msg.value = 0.058514989486;

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
    msg.setTimeStamp(0.834692320137);
    msg.setSource(55254U);
    msg.setSourceEntity(40U);
    msg.setDestination(26669U);
    msg.setDestinationEntity(86U);
    msg.value = 0.913913007586;

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
    msg.setTimeStamp(0.778590235364);
    msg.setSource(55683U);
    msg.setSourceEntity(155U);
    msg.setDestination(5296U);
    msg.setDestinationEntity(155U);
    msg.value = 0.390847561233;

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
    msg.setTimeStamp(0.236712152691);
    msg.setSource(5214U);
    msg.setSourceEntity(22U);
    msg.setDestination(37318U);
    msg.setDestinationEntity(158U);
    msg.value = 0.574156156079;

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
    msg.setTimeStamp(0.759223875932);
    msg.setSource(48063U);
    msg.setSourceEntity(173U);
    msg.setDestination(34801U);
    msg.setDestinationEntity(242U);
    msg.x = 0.000534017637797;
    msg.y = 0.159289709274;
    msg.z = 0.515039917692;
    msg.phi = 0.198789003048;
    msg.theta = 0.17697710479;
    msg.psi = 0.912415779275;
    msg.p = 0.497407573977;
    msg.q = 0.860972401844;
    msg.r = 0.522523497155;
    msg.u = 0.447827207065;
    msg.v = 0.949596154928;
    msg.w = 0.566150308909;
    msg.bias_psi = 0.0910749537684;
    msg.bias_r = 0.82595630109;

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
    msg.setTimeStamp(0.891191535731);
    msg.setSource(18837U);
    msg.setSourceEntity(2U);
    msg.setDestination(38387U);
    msg.setDestinationEntity(211U);
    msg.x = 0.445409548764;
    msg.y = 0.657448597434;
    msg.z = 0.0268738179577;
    msg.phi = 0.183477069602;
    msg.theta = 0.674146562676;
    msg.psi = 0.902531130031;
    msg.p = 0.212677097721;
    msg.q = 0.475021744941;
    msg.r = 0.814537553205;
    msg.u = 0.727531383121;
    msg.v = 0.123519107437;
    msg.w = 0.182541414742;
    msg.bias_psi = 0.168354529241;
    msg.bias_r = 0.666906934928;

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
    msg.setTimeStamp(0.163997032949);
    msg.setSource(54981U);
    msg.setSourceEntity(107U);
    msg.setDestination(59127U);
    msg.setDestinationEntity(244U);
    msg.x = 0.301468817648;
    msg.y = 0.889237029781;
    msg.z = 0.393979465393;
    msg.phi = 0.929489975614;
    msg.theta = 0.750981421632;
    msg.psi = 0.822430640674;
    msg.p = 0.103425075014;
    msg.q = 0.428026877609;
    msg.r = 0.57266212809;
    msg.u = 0.841728238231;
    msg.v = 0.73853172767;
    msg.w = 0.12514466722;
    msg.bias_psi = 0.134104336716;
    msg.bias_r = 0.438886737495;

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
    msg.setTimeStamp(0.821847037255);
    msg.setSource(5351U);
    msg.setSourceEntity(111U);
    msg.setDestination(13263U);
    msg.setDestinationEntity(66U);
    msg.bias_psi = 0.293166134335;
    msg.bias_r = 0.717557038966;
    msg.cog = 0.964557149398;
    msg.cyaw = 0.435203126714;
    msg.lbl_rej_level = 0.863898358236;
    msg.gps_rej_level = 0.906814376155;
    msg.custom_x = 0.875577300697;
    msg.custom_y = 0.714494940239;
    msg.custom_z = 0.732953903512;

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
    msg.setTimeStamp(0.745342722618);
    msg.setSource(39287U);
    msg.setSourceEntity(29U);
    msg.setDestination(54241U);
    msg.setDestinationEntity(223U);
    msg.bias_psi = 0.414266294947;
    msg.bias_r = 0.577342941419;
    msg.cog = 0.113448063139;
    msg.cyaw = 0.751850329398;
    msg.lbl_rej_level = 0.305247761442;
    msg.gps_rej_level = 0.910742286026;
    msg.custom_x = 0.440183509738;
    msg.custom_y = 0.457030930104;
    msg.custom_z = 0.0100437299502;

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
    msg.setTimeStamp(0.764137376216);
    msg.setSource(29454U);
    msg.setSourceEntity(159U);
    msg.setDestination(37563U);
    msg.setDestinationEntity(211U);
    msg.bias_psi = 0.327836899096;
    msg.bias_r = 0.988303138631;
    msg.cog = 0.361236003319;
    msg.cyaw = 0.344814777454;
    msg.lbl_rej_level = 0.861397758003;
    msg.gps_rej_level = 0.0974080993376;
    msg.custom_x = 0.6613006437;
    msg.custom_y = 0.107744904518;
    msg.custom_z = 0.166189772743;

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
    msg.setTimeStamp(0.262559004914);
    msg.setSource(32716U);
    msg.setSourceEntity(65U);
    msg.setDestination(551U);
    msg.setDestinationEntity(227U);
    msg.utc_time = 0.0271045247678;
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
    msg.setTimeStamp(0.812561043911);
    msg.setSource(63911U);
    msg.setSourceEntity(118U);
    msg.setDestination(51084U);
    msg.setDestinationEntity(220U);
    msg.utc_time = 0.363890009201;
    msg.reason = 128U;

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
    msg.setTimeStamp(0.156618494483);
    msg.setSource(2446U);
    msg.setSourceEntity(32U);
    msg.setDestination(27766U);
    msg.setDestinationEntity(143U);
    msg.utc_time = 0.629576419606;
    msg.reason = 143U;

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
    msg.setTimeStamp(0.257466614145);
    msg.setSource(9360U);
    msg.setSourceEntity(71U);
    msg.setDestination(9958U);
    msg.setDestinationEntity(143U);
    msg.id = 163U;
    msg.range = 0.454629421243;
    msg.acceptance = 8U;

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
    msg.setTimeStamp(0.935549541455);
    msg.setSource(41499U);
    msg.setSourceEntity(211U);
    msg.setDestination(11237U);
    msg.setDestinationEntity(176U);
    msg.id = 40U;
    msg.range = 0.899260601086;
    msg.acceptance = 187U;

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
    msg.setTimeStamp(0.282870997733);
    msg.setSource(56503U);
    msg.setSourceEntity(202U);
    msg.setDestination(7401U);
    msg.setDestinationEntity(220U);
    msg.id = 189U;
    msg.range = 0.300743645357;
    msg.acceptance = 172U;

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
    msg.setTimeStamp(0.99820584634);
    msg.setSource(36950U);
    msg.setSourceEntity(183U);
    msg.setDestination(7798U);
    msg.setDestinationEntity(195U);
    msg.type = 161U;
    msg.reason = 53U;
    msg.value = 0.287831260389;
    msg.timestep = 0.732259440627;

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
    msg.setTimeStamp(0.291074055227);
    msg.setSource(8336U);
    msg.setSourceEntity(22U);
    msg.setDestination(31209U);
    msg.setDestinationEntity(74U);
    msg.type = 202U;
    msg.reason = 161U;
    msg.value = 0.142069594692;
    msg.timestep = 0.787923647508;

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
    msg.setTimeStamp(0.184023510713);
    msg.setSource(53564U);
    msg.setSourceEntity(122U);
    msg.setDestination(49180U);
    msg.setDestinationEntity(85U);
    msg.type = 240U;
    msg.reason = 108U;
    msg.value = 0.861149663501;
    msg.timestep = 0.364526988096;

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
    msg.setTimeStamp(0.944419229847);
    msg.setSource(57391U);
    msg.setSourceEntity(57U);
    msg.setDestination(22913U);
    msg.setDestinationEntity(209U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PCVNEJNRWRVLSARRAUAZBTPYREKLEXWMIWSGOZGPOKGVRNHYKUBMCSFFSNMNUMIQLJ");
    tmp_msg_0.lat = 0.861087651684;
    tmp_msg_0.lon = 0.43711839226;
    tmp_msg_0.depth = 0.680149860232;
    tmp_msg_0.query_channel = 35U;
    tmp_msg_0.reply_channel = 151U;
    tmp_msg_0.transponder_delay = 120U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.22427862817;
    msg.y = 0.0712056362329;
    msg.var_x = 0.61410718422;
    msg.var_y = 0.0400611876258;
    msg.distance = 0.337922898508;

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
    msg.setTimeStamp(0.173141662912);
    msg.setSource(58196U);
    msg.setSourceEntity(92U);
    msg.setDestination(6176U);
    msg.setDestinationEntity(158U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FHAYBEGAZRRZYMOLNMXVTFMQSKCRTDZCIHNGCMNDZEIG");
    tmp_msg_0.lat = 0.800848138561;
    tmp_msg_0.lon = 0.955124708046;
    tmp_msg_0.depth = 0.339559583707;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 91U;
    tmp_msg_0.transponder_delay = 16U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.103974568021;
    msg.y = 0.321276991094;
    msg.var_x = 0.700353500205;
    msg.var_y = 0.401749720585;
    msg.distance = 0.805554349091;

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
    msg.setTimeStamp(0.607099832476);
    msg.setSource(61941U);
    msg.setSourceEntity(33U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(170U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EVMSRTTDVOLLAUXJLZARFCDNSURQAJYDFHWYNTDNIEWTZDLCVBYGCBQVWOZQNQLBBQEHGCSMQQKKAXHKAFIOWYOLKTDIBNRIGYIXKSMMHZVFJBDKYYLUDFOCBTRPUWWKDIAKTMNSMPUJJIBVCPZRXNSKSFSZYPRWVMUIQLERJVTEGGEXFJOB");
    tmp_msg_0.lat = 0.377076731729;
    tmp_msg_0.lon = 0.087698887109;
    tmp_msg_0.depth = 0.694857396972;
    tmp_msg_0.query_channel = 196U;
    tmp_msg_0.reply_channel = 93U;
    tmp_msg_0.transponder_delay = 249U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.89327448555;
    msg.y = 0.520409287996;
    msg.var_x = 0.472762787879;
    msg.var_y = 0.00184886563371;
    msg.distance = 0.434816457685;

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
    msg.setTimeStamp(0.295805362278);
    msg.setSource(62276U);
    msg.setSourceEntity(127U);
    msg.setDestination(61262U);
    msg.setDestinationEntity(116U);
    msg.state = 64U;

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
    msg.setTimeStamp(0.144952108477);
    msg.setSource(52472U);
    msg.setSourceEntity(233U);
    msg.setDestination(64279U);
    msg.setDestinationEntity(193U);
    msg.state = 98U;

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
    msg.setTimeStamp(0.788971193754);
    msg.setSource(31692U);
    msg.setSourceEntity(50U);
    msg.setDestination(22483U);
    msg.setDestinationEntity(165U);
    msg.state = 58U;

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
    msg.setTimeStamp(0.709648916942);
    msg.setSource(20253U);
    msg.setSourceEntity(204U);
    msg.setDestination(16511U);
    msg.setDestinationEntity(96U);
    msg.x = 0.103156222281;
    msg.y = 0.647034273232;
    msg.z = 0.864620005824;

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
    msg.setTimeStamp(0.29430699632);
    msg.setSource(18367U);
    msg.setSourceEntity(168U);
    msg.setDestination(24634U);
    msg.setDestinationEntity(185U);
    msg.x = 0.521900495536;
    msg.y = 0.789230777158;
    msg.z = 0.449494306487;

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
    msg.setTimeStamp(0.533553443651);
    msg.setSource(8701U);
    msg.setSourceEntity(195U);
    msg.setDestination(24468U);
    msg.setDestinationEntity(214U);
    msg.x = 0.269371443111;
    msg.y = 0.718016620272;
    msg.z = 0.573441925971;

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
    msg.setTimeStamp(0.864965601018);
    msg.setSource(2333U);
    msg.setSourceEntity(208U);
    msg.setDestination(25318U);
    msg.setDestinationEntity(122U);
    msg.value = 0.832096722071;

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
    msg.setTimeStamp(0.110060179319);
    msg.setSource(56871U);
    msg.setSourceEntity(137U);
    msg.setDestination(23067U);
    msg.setDestinationEntity(3U);
    msg.value = 0.263571525167;

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
    msg.setTimeStamp(0.850303426082);
    msg.setSource(37712U);
    msg.setSourceEntity(60U);
    msg.setDestination(5303U);
    msg.setDestinationEntity(62U);
    msg.value = 0.513694355533;

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
    msg.setTimeStamp(0.814426311663);
    msg.setSource(33152U);
    msg.setSourceEntity(225U);
    msg.setDestination(60725U);
    msg.setDestinationEntity(9U);
    msg.value = 0.190049927735;
    msg.z_units = 83U;

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
    msg.setTimeStamp(0.0728873524331);
    msg.setSource(35043U);
    msg.setSourceEntity(103U);
    msg.setDestination(20893U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0984885490257;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.489951986058);
    msg.setSource(54867U);
    msg.setSourceEntity(66U);
    msg.setDestination(13998U);
    msg.setDestinationEntity(110U);
    msg.value = 0.169626961324;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.0362975814497);
    msg.setSource(13074U);
    msg.setSourceEntity(138U);
    msg.setDestination(13446U);
    msg.setDestinationEntity(193U);
    msg.value = 0.839689930856;
    msg.speed_units = 179U;

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
    msg.setTimeStamp(0.393536468056);
    msg.setSource(9448U);
    msg.setSourceEntity(108U);
    msg.setDestination(59979U);
    msg.setDestinationEntity(246U);
    msg.value = 0.0303908059163;
    msg.speed_units = 66U;

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
    msg.setTimeStamp(0.146816869938);
    msg.setSource(44888U);
    msg.setSourceEntity(104U);
    msg.setDestination(3407U);
    msg.setDestinationEntity(8U);
    msg.value = 0.744871547132;
    msg.speed_units = 254U;

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
    msg.setTimeStamp(0.455683723174);
    msg.setSource(13769U);
    msg.setSourceEntity(135U);
    msg.setDestination(32091U);
    msg.setDestinationEntity(45U);
    msg.value = 0.825820444431;

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
    msg.setTimeStamp(0.720739988731);
    msg.setSource(17344U);
    msg.setSourceEntity(6U);
    msg.setDestination(41149U);
    msg.setDestinationEntity(43U);
    msg.value = 0.60715084507;

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
    msg.setTimeStamp(0.177511122164);
    msg.setSource(30638U);
    msg.setSourceEntity(54U);
    msg.setDestination(11128U);
    msg.setDestinationEntity(201U);
    msg.value = 0.333524579216;

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
    msg.setTimeStamp(0.637441692261);
    msg.setSource(18266U);
    msg.setSourceEntity(41U);
    msg.setDestination(20864U);
    msg.setDestinationEntity(114U);
    msg.value = 0.391086242736;

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
    msg.setTimeStamp(0.469530163723);
    msg.setSource(1530U);
    msg.setSourceEntity(186U);
    msg.setDestination(47713U);
    msg.setDestinationEntity(48U);
    msg.value = 0.551523901631;

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
    msg.setTimeStamp(0.670344692887);
    msg.setSource(19355U);
    msg.setSourceEntity(229U);
    msg.setDestination(54490U);
    msg.setDestinationEntity(29U);
    msg.value = 0.0953046787786;

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
    msg.setTimeStamp(0.578230761628);
    msg.setSource(49189U);
    msg.setSourceEntity(37U);
    msg.setDestination(55877U);
    msg.setDestinationEntity(121U);
    msg.value = 0.893128297457;

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
    msg.setTimeStamp(0.0193852519334);
    msg.setSource(6797U);
    msg.setSourceEntity(220U);
    msg.setDestination(52378U);
    msg.setDestinationEntity(71U);
    msg.value = 0.560043313487;

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
    msg.setTimeStamp(0.362383187034);
    msg.setSource(32668U);
    msg.setSourceEntity(221U);
    msg.setDestination(61953U);
    msg.setDestinationEntity(112U);
    msg.value = 0.506383850511;

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
    msg.setTimeStamp(0.827670171955);
    msg.setSource(14922U);
    msg.setSourceEntity(30U);
    msg.setDestination(35503U);
    msg.setDestinationEntity(116U);
    msg.path_ref = 4061700669U;
    msg.start_lat = 0.445974883611;
    msg.start_lon = 0.346914566022;
    msg.start_z = 0.755927000648;
    msg.start_z_units = 28U;
    msg.end_lat = 0.100301027506;
    msg.end_lon = 0.714914032483;
    msg.end_z = 0.371174115021;
    msg.end_z_units = 197U;
    msg.speed = 0.76498317367;
    msg.speed_units = 215U;
    msg.lradius = 0.812078593353;
    msg.flags = 169U;

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
    msg.setTimeStamp(0.308747493508);
    msg.setSource(24567U);
    msg.setSourceEntity(68U);
    msg.setDestination(58802U);
    msg.setDestinationEntity(188U);
    msg.path_ref = 1868992924U;
    msg.start_lat = 0.0588554588168;
    msg.start_lon = 0.876401762295;
    msg.start_z = 0.0221998800549;
    msg.start_z_units = 110U;
    msg.end_lat = 0.0627021854963;
    msg.end_lon = 0.179168320439;
    msg.end_z = 0.224185912741;
    msg.end_z_units = 193U;
    msg.speed = 0.981734070391;
    msg.speed_units = 184U;
    msg.lradius = 0.179665135247;
    msg.flags = 169U;

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
    msg.setTimeStamp(0.604115991221);
    msg.setSource(1257U);
    msg.setSourceEntity(171U);
    msg.setDestination(28398U);
    msg.setDestinationEntity(83U);
    msg.path_ref = 1648225617U;
    msg.start_lat = 0.437622006845;
    msg.start_lon = 0.0542120409394;
    msg.start_z = 0.699560660602;
    msg.start_z_units = 155U;
    msg.end_lat = 0.342837083211;
    msg.end_lon = 0.865578844367;
    msg.end_z = 0.502586275118;
    msg.end_z_units = 65U;
    msg.speed = 0.7503302196;
    msg.speed_units = 101U;
    msg.lradius = 0.116462239121;
    msg.flags = 127U;

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
    msg.setTimeStamp(0.799628659616);
    msg.setSource(21697U);
    msg.setSourceEntity(155U);
    msg.setDestination(10975U);
    msg.setDestinationEntity(186U);
    msg.x = 0.884975922317;
    msg.y = 0.032752328221;
    msg.z = 0.0701461223477;
    msg.k = 0.299727959058;
    msg.m = 0.404181030171;
    msg.n = 0.602792165589;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.59995907072);
    msg.setSource(41130U);
    msg.setSourceEntity(77U);
    msg.setDestination(8037U);
    msg.setDestinationEntity(201U);
    msg.x = 0.137855083639;
    msg.y = 0.535003812295;
    msg.z = 0.203054753111;
    msg.k = 0.658932914277;
    msg.m = 0.377645815853;
    msg.n = 0.648100137581;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.594346815722);
    msg.setSource(1741U);
    msg.setSourceEntity(132U);
    msg.setDestination(19522U);
    msg.setDestinationEntity(63U);
    msg.x = 0.324572234317;
    msg.y = 0.633304283857;
    msg.z = 0.387732559318;
    msg.k = 0.0635362071234;
    msg.m = 0.0236624602449;
    msg.n = 0.0292274728962;
    msg.flags = 219U;

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
    msg.setTimeStamp(0.270720535304);
    msg.setSource(51132U);
    msg.setSourceEntity(91U);
    msg.setDestination(7550U);
    msg.setDestinationEntity(161U);
    msg.value = 0.742838188281;

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
    msg.setTimeStamp(0.497228374957);
    msg.setSource(26279U);
    msg.setSourceEntity(140U);
    msg.setDestination(53705U);
    msg.setDestinationEntity(32U);
    msg.value = 0.838515571953;

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
    msg.setTimeStamp(0.623029501786);
    msg.setSource(39042U);
    msg.setSourceEntity(210U);
    msg.setDestination(19763U);
    msg.setDestinationEntity(202U);
    msg.value = 0.655150366802;

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
    msg.setTimeStamp(0.00479197446761);
    msg.setSource(29476U);
    msg.setSourceEntity(87U);
    msg.setDestination(7237U);
    msg.setDestinationEntity(244U);
    msg.u = 0.423474237751;
    msg.v = 0.5286514459;
    msg.w = 0.740556342251;
    msg.p = 0.968157595017;
    msg.q = 0.942040631536;
    msg.r = 0.433048061106;
    msg.flags = 17U;

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
    msg.setTimeStamp(0.0167938782692);
    msg.setSource(65368U);
    msg.setSourceEntity(3U);
    msg.setDestination(14169U);
    msg.setDestinationEntity(203U);
    msg.u = 0.0244202514414;
    msg.v = 0.39438233003;
    msg.w = 0.758541108787;
    msg.p = 0.472586017937;
    msg.q = 0.540833411384;
    msg.r = 0.961603254878;
    msg.flags = 113U;

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
    msg.setTimeStamp(0.497511942343);
    msg.setSource(37599U);
    msg.setSourceEntity(226U);
    msg.setDestination(1463U);
    msg.setDestinationEntity(43U);
    msg.u = 0.520161050318;
    msg.v = 0.660479852817;
    msg.w = 0.756752477285;
    msg.p = 0.774205022616;
    msg.q = 0.538670989778;
    msg.r = 0.843026921145;
    msg.flags = 61U;

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
    msg.setTimeStamp(0.196535239306);
    msg.setSource(33159U);
    msg.setSourceEntity(118U);
    msg.setDestination(31232U);
    msg.setDestinationEntity(237U);
    msg.path_ref = 1760761565U;
    msg.start_lat = 0.375533788965;
    msg.start_lon = 0.288132615941;
    msg.start_z = 0.897579641369;
    msg.start_z_units = 224U;
    msg.end_lat = 0.027616348309;
    msg.end_lon = 0.536869491663;
    msg.end_z = 0.161925126254;
    msg.end_z_units = 167U;
    msg.lradius = 0.23337369378;
    msg.flags = 207U;
    msg.x = 0.742121581004;
    msg.y = 0.527046809991;
    msg.z = 0.0991016343187;
    msg.vx = 0.652498865184;
    msg.vy = 0.0302077791521;
    msg.vz = 0.112810019741;
    msg.course_error = 0.183871514618;
    msg.eta = 34629U;

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
    msg.setTimeStamp(0.219436895181);
    msg.setSource(64533U);
    msg.setSourceEntity(187U);
    msg.setDestination(24635U);
    msg.setDestinationEntity(59U);
    msg.path_ref = 1333014828U;
    msg.start_lat = 0.871887939327;
    msg.start_lon = 0.442822623959;
    msg.start_z = 0.594484016449;
    msg.start_z_units = 55U;
    msg.end_lat = 0.444812506582;
    msg.end_lon = 0.440372852024;
    msg.end_z = 0.394462087017;
    msg.end_z_units = 19U;
    msg.lradius = 0.930835304304;
    msg.flags = 80U;
    msg.x = 0.498213103131;
    msg.y = 0.713678289354;
    msg.z = 0.351785159987;
    msg.vx = 0.695374385949;
    msg.vy = 0.654088593132;
    msg.vz = 0.829469424901;
    msg.course_error = 0.0378693201972;
    msg.eta = 23466U;

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
    msg.setTimeStamp(0.0145933201039);
    msg.setSource(49338U);
    msg.setSourceEntity(204U);
    msg.setDestination(52069U);
    msg.setDestinationEntity(53U);
    msg.path_ref = 3389126344U;
    msg.start_lat = 0.852349304187;
    msg.start_lon = 0.622373986768;
    msg.start_z = 0.289209314939;
    msg.start_z_units = 231U;
    msg.end_lat = 0.473172542103;
    msg.end_lon = 0.189123851266;
    msg.end_z = 0.200384298402;
    msg.end_z_units = 52U;
    msg.lradius = 0.764982067875;
    msg.flags = 24U;
    msg.x = 0.437320480041;
    msg.y = 0.700216794135;
    msg.z = 0.872835665046;
    msg.vx = 0.474246441262;
    msg.vy = 0.134752382866;
    msg.vz = 0.986289682066;
    msg.course_error = 0.523636613064;
    msg.eta = 36765U;

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
    msg.setTimeStamp(0.046322337474);
    msg.setSource(53976U);
    msg.setSourceEntity(209U);
    msg.setDestination(49321U);
    msg.setDestinationEntity(35U);
    msg.k = 0.280038702243;
    msg.m = 0.597675220896;
    msg.n = 0.980149195688;

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
    msg.setTimeStamp(0.726285377762);
    msg.setSource(17245U);
    msg.setSourceEntity(221U);
    msg.setDestination(24552U);
    msg.setDestinationEntity(72U);
    msg.k = 0.891997721945;
    msg.m = 0.15496093331;
    msg.n = 0.141045631584;

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
    msg.setTimeStamp(0.411310597716);
    msg.setSource(14544U);
    msg.setSourceEntity(148U);
    msg.setDestination(32639U);
    msg.setDestinationEntity(118U);
    msg.k = 0.654481627239;
    msg.m = 0.0850498559654;
    msg.n = 0.197728740373;

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
    msg.setTimeStamp(0.810474055931);
    msg.setSource(5157U);
    msg.setSourceEntity(66U);
    msg.setDestination(10689U);
    msg.setDestinationEntity(173U);
    msg.p = 0.373625195357;
    msg.i = 0.879569866265;
    msg.d = 0.163731975827;
    msg.a = 0.444494355245;

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
    msg.setTimeStamp(0.0922795399571);
    msg.setSource(31548U);
    msg.setSourceEntity(198U);
    msg.setDestination(29256U);
    msg.setDestinationEntity(209U);
    msg.p = 0.0757647397056;
    msg.i = 0.631935389367;
    msg.d = 0.698067776394;
    msg.a = 0.146322553504;

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
    msg.setTimeStamp(0.344006379476);
    msg.setSource(34004U);
    msg.setSourceEntity(19U);
    msg.setDestination(46177U);
    msg.setDestinationEntity(127U);
    msg.p = 0.802920692498;
    msg.i = 0.874989193597;
    msg.d = 0.111440845781;
    msg.a = 0.480242836589;

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
    msg.setTimeStamp(0.693428292143);
    msg.setSource(3686U);
    msg.setSourceEntity(77U);
    msg.setDestination(57232U);
    msg.setDestinationEntity(97U);
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
    msg.setTimeStamp(0.0538832666611);
    msg.setSource(42386U);
    msg.setSourceEntity(8U);
    msg.setDestination(50107U);
    msg.setDestinationEntity(245U);
    msg.op = 163U;

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
    msg.setTimeStamp(0.0181892587659);
    msg.setSource(13085U);
    msg.setSourceEntity(230U);
    msg.setDestination(60676U);
    msg.setDestinationEntity(196U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.0585980551555);
    msg.setSource(49919U);
    msg.setSourceEntity(61U);
    msg.setDestination(14432U);
    msg.setDestinationEntity(141U);
    msg.plan_ref = 2122400227U;
    msg.id.assign("CTEMNOPMXSMAAVPCDOURQVUDWTCQVXRZEMXRGUDHSKTCB");
    msg.memento.assign("TNPUSRPRIZWXKUSIXFGGEIHFODYWHVDAXMXVUODSTEEUBPZOLPGWINNMJRUDFLXENPOXQERJ");
    msg.timeout = 19878U;
    msg.lat = 0.877575144435;
    msg.lon = 0.915980894729;
    msg.z = 0.909614651311;
    msg.z_units = 30U;
    msg.speed = 0.56717758473;
    msg.speed_units = 137U;
    msg.roll = 0.483715151178;
    msg.pitch = 0.728630108809;
    msg.yaw = 0.997282227319;
    msg.custom.assign("CXMBZAJLDHUHKCSSGVFADHAMKSAXCVQXZKGYFRWKMZXAJJOVNTOMXZMYCCESYBKHEMVHILEQZYSOWUFPHKLTCNUETDTKXWNRPOTZVLRBTPRQITOHKKEBFMBHWSNHIWQEUILHZPJNFGMUTLQINULAAOJICYNQWOCMGLRNJPTLXBPRSGCDNDTQGYQDBXEUXDRFVIVMFRSFULBXAYQERVJYUEJPWDPGZGJ");

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
    msg.setTimeStamp(0.271293472834);
    msg.setSource(28413U);
    msg.setSourceEntity(188U);
    msg.setDestination(13697U);
    msg.setDestinationEntity(72U);
    msg.plan_ref = 25512386U;
    msg.id.assign("GBPRDVGAYYTKBPIGGYMYKELMGUETNNKNOWUKELUYJQAPFLILWTKHQAAXYRIPXDAXCRFRWWUWVGRTUWEDHJIMLRXQBZEOQLHX");
    msg.memento.assign("CEZMMWFLQJRZUGURCLVQAAMORWHKQVMWLDSTOMBFQBISWOPQPMWCCWGUPZDLLGBRLHVVXBRZROAPMHVIJHNTEHLGEIECZSFBQUGORTKJT");
    msg.timeout = 10079U;
    msg.lat = 0.181323572269;
    msg.lon = 0.501445767139;
    msg.z = 0.928636325336;
    msg.z_units = 238U;
    msg.speed = 0.493118909259;
    msg.speed_units = 115U;
    msg.roll = 0.424172707913;
    msg.pitch = 0.778871077772;
    msg.yaw = 0.487625424682;
    msg.custom.assign("GNIIZAGOHXILJNFRJYHAENHKGHLNAGBLRADVXMMLRQHZHCYDCKFTQOGPLZTCMKXTTWGBEVANDTUGXJLWDNOPNJFVVOBTPUCTHMKFXEIFPRWBQZZSWISKKLMLQQUBUEVMIGZVCNECNLBMBXDUQIXVIHJSDWSUSRFLWUXPGCYMAUKNQXYVFZETGREJUOZWMOIFQYKSJZHAZRAPCJYXEYJOTJOIQWSBYFOMOSAKQCPCTURVWEERPKDYHSARPDDVS");

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
    msg.setTimeStamp(0.254567343962);
    msg.setSource(3781U);
    msg.setSourceEntity(10U);
    msg.setDestination(63808U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 524185070U;
    msg.id.assign("ZPVPTZBEIMHSBSCLCXXOQDUEPNUTTBNSPFZKNKTEWKLUUILACOAVMRYFMMOQQPDBMTWGOZYSFHXYOPDRXBSTPHIJKGLPXVVSDULQSZELOYZVPICBJGKNHFLHEDFAKEMWQOQDWVJIWCXGROUWFCFJIGPJQNIWDYGDRRBRHXEEYFQAUAFZINILSGYUYMVGTSORNBKLLHRUWSQXZMGJWVBMTWMTBJ");
    msg.memento.assign("DTDKOHRHHLW");
    msg.timeout = 15797U;
    msg.lat = 0.837599011465;
    msg.lon = 0.601393245372;
    msg.z = 0.207300603214;
    msg.z_units = 38U;
    msg.speed = 0.246413507181;
    msg.speed_units = 77U;
    msg.roll = 0.985630304254;
    msg.pitch = 0.152707210337;
    msg.yaw = 0.761768432911;
    msg.custom.assign("WETWFWGDADPSKUSGTGYVUAOPELEOINHBAJDXRMRWUWHLNQHMIWPIJYAGIHYXTZSMQZQCMXTMOFDCAGENJQHTNKSJWGNVKJKFKLNHARBHQJJQETLDVVOJFFARGRVIVUCZHGIYENZSEUADPSXGVFWJEKRYQLXFZZRBFCKUZJNQRYWDQPYNCURSEBHDTLOZTBLPZULRZMBMAXUBKIUTIQYSSXYBOBFCKWDXALCMMPPEBISOPVGVCOCXD");

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
    msg.setTimeStamp(0.28677176445);
    msg.setSource(20300U);
    msg.setSourceEntity(158U);
    msg.setDestination(31962U);
    msg.setDestinationEntity(135U);
    msg.plan_ref = 908679672U;
    msg.id.assign("ZBZHRUVWPXLCRDCPVLLPTUYEHZPJZCLFNCJFBXCEREXXLBYGVEOLAPSEHNNTUMWKZTSRVUJTHBDKIQJFBLUROENGOGYSTDTVXDQVXPKSJDEFRSATIBELACNAUNWAOLQVRFDHOKAMVIFNFQ");
    msg.memento.assign("RDFPRUPYIJSHEELWKOWKMRVPFBTABDMKCYHZNLZWSXZCRMZJVTEXTAGMQBPIWNTHOGINPKKKEZSZOYVG");
    msg.timeout = 22532U;
    msg.lat = 0.302124770781;
    msg.lon = 0.542132267336;
    msg.z = 0.882921656377;
    msg.z_units = 45U;
    msg.speed = 0.908226839701;
    msg.speed_units = 160U;
    msg.duration = 23676U;
    msg.radius = 0.935566049036;
    msg.flags = 133U;
    msg.custom.assign("CCUTBMKSXYUNFKJBQILTGRXCWUVOZPZWVXEMGOHUOMHHMQZFQFEZWAQMSNWSZGPQQONIVUZBRGJNYXUOLDJFVOYINRADIEIWLSWCATBGVHJUIGXXLFDDABKPYVMPQSPFHAKAGZEHJNCMJNYLYALZEECERHKVCZHTWYYTPMMNAKPONOBUXKBBDTROJQVUBTJGFJTADGWSISEYPTOXRSARVKWBILKVZSXPRQCLFCQSEDJFXGDTELIHC");

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
    msg.setTimeStamp(0.919560373077);
    msg.setSource(65115U);
    msg.setSourceEntity(77U);
    msg.setDestination(3800U);
    msg.setDestinationEntity(139U);
    msg.plan_ref = 1482596787U;
    msg.id.assign("LOTFXXROWNDNULZGJSGABLPEBRZPPABGHFIQYJVALHBDDHMMTWKJJRVTCEKCSFJRMQYCZRHHKQPYBYESDVFKAQZLUGRJEZ");
    msg.memento.assign("EIDUJYMYUEJZSDRAOUYBFXDAOFKSHEJHOPMIFQVPTBIGAWMYOTKSWYUKOORPQVTVUGRREUCAEPJANSJEJCOWLKBTIXDQMMRTIAPJSXNZEFVGRCNQZBEBGDNCNFDDRGVXFOQODMASCEXSJUTHVZLKVGMFAIGIQVKKZBHQ");
    msg.timeout = 39229U;
    msg.lat = 0.55737978346;
    msg.lon = 0.537276098022;
    msg.z = 0.109223331292;
    msg.z_units = 56U;
    msg.speed = 0.400392363781;
    msg.speed_units = 10U;
    msg.duration = 58395U;
    msg.radius = 0.38158693688;
    msg.flags = 131U;
    msg.custom.assign("TXSTYDLMFUVMNNYRGROUOHQLKBEZTYABRRUEECRALSZHCJXKVBJBHDWDGAOFATAROUJZWSXRTJVYGGUEFPJTWWPPUMRANJQKXUZEFVGFYJGDNIFZUCLKXNIIMYLNCQFOKHCNNKKSBAIOIPVHTXZDYMHUQGTEWFZOWWIMWLZLKQBFFMRWSGJXMVVOBAQSCZHCGJYXSIIKLLQDDXSDPPTJLCVQSI");

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
    msg.setTimeStamp(0.708018317602);
    msg.setSource(63923U);
    msg.setSourceEntity(62U);
    msg.setDestination(6826U);
    msg.setDestinationEntity(110U);
    msg.plan_ref = 1529378642U;
    msg.id.assign("PYEXLIVLRBTQYCWRLGJARKGQKUXFAUMPQKLMQFEAEGEVXZDFZTOCASSCXWSISWGYHMCEJYVHHDKRJNYEPIOVBIZHCLDQSKAKGDXPSBCYTLNTMYFMIPHZHOSDRQZBINOXORXJETPNFGQSBPULXCKYZOUWVPLJTXAFOWPGWGQOVVAKAVYEYMJFHBNONNIBTWGINHBWJTUWVFOURUMZWDCJCEJUZFLZIDNDSLMVKGCXHBRRJQQ");
    msg.memento.assign("ORBSDBMZVZVIKUOSOWAFNNIFIGWKCJ");
    msg.timeout = 22050U;
    msg.lat = 0.722240319656;
    msg.lon = 0.774894516425;
    msg.z = 0.981584487849;
    msg.z_units = 43U;
    msg.speed = 0.432862335458;
    msg.speed_units = 142U;
    msg.duration = 21224U;
    msg.radius = 0.27757120194;
    msg.flags = 64U;
    msg.custom.assign("XKFHUGTPVXKFAHUNTMXCBVGWNWYQTRIY");

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
    msg.setTimeStamp(0.872585467754);
    msg.setSource(50614U);
    msg.setSourceEntity(6U);
    msg.setDestination(17902U);
    msg.setDestinationEntity(47U);
    msg.plan_ref = 1855063258U;
    msg.id.assign("PNXDLWNAMTOMOKBIWAFQJZPUUQRYJWVRKBGIALZXKOJCLZSKIYJIBLBMYTSRVWPNEDCHPGUUYWPUGJZRMHPWZANXAVVTNLJHCKRZBSQLNOGJELDVKRHXHCBIYKUSXQNFYXUNDITDCGVEFFSAZSXVMDCMFZCDKFIHQHAWOUVPPLBZGEEIRDHAOLXJEVREYAAHMQYOCXMFMBJWFGTCTIQZUQS");
    msg.memento.assign("EGRZWTQMHFCAYVMYWLNERPFEMCQAUUDEIVSIAWOFKDCMCVPBRXXHZBEDMFRAZMUDJTIBGSDWXVJCZQQYRHCGINFXNTDJTKUVBABSMKUT");
    msg.custom.assign("OMYJJJVTCLUGZDOLJPBMWJCI");

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
    msg.setTimeStamp(0.627113441294);
    msg.setSource(24808U);
    msg.setSourceEntity(82U);
    msg.setDestination(5331U);
    msg.setDestinationEntity(170U);
    msg.plan_ref = 3304267276U;
    msg.id.assign("RNSDTUBCXNSVMYELANCXUUOQSOZ");
    msg.memento.assign("LFIGPUDGZJZUHTHKNOYZSNCQDVFZPFQZEHOE");
    msg.custom.assign("YEMJTFLESKAHFAKNQCTTYIHOWBTTEEGRGRAGNUIDVXXMUYXLJLTPSZHYODBDGGSTPXZWKQYLSFXVPUWOCYMAQXPNCHUUFSFTKRMMIWNOHKHSQOPFRPREOLIBVGABMVBDCKJCMWOKVMFPGYGVSWWZMEJLOPBXWEZASNVRFJUHHVJNQFQAYJVB");

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
    msg.setTimeStamp(0.631832610182);
    msg.setSource(48479U);
    msg.setSourceEntity(25U);
    msg.setDestination(40189U);
    msg.setDestinationEntity(177U);
    msg.plan_ref = 4088164297U;
    msg.id.assign("DCDBTBHJOWXELAQEBEBXYDAHFESOCLCVTQQMTORQNWGNXFHFZNYLSVPECOSJADZSJFHCULUKRBPPRYNEZJYPUGILEXIWOGIGKQKAXKHWUJFBODXOYELZMQCVUKBMKKRVQRNFJMMJLTGVRSSUAHVWNGZXTAMQCUEEMMKDIWZNMPVTGAUIPUBSBGIQBAXNCJXRJICZDISRODYYPKOZXTGVPYAUDILLPZWWJYHRFNWACWZPTKFOITHSNQSTMF");
    msg.memento.assign("CPYREMRWYHDVCZXHYXOZWVMAMGPCWAPKKUVTNZWUVQSKYGJQQJWCSTUEDTTFFGE");
    msg.custom.assign("XTMVZUVNEBBTOXLDERFEIGWASZLNQCYMWINQPOHUKLO");

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
    msg.setTimeStamp(0.928131654867);
    msg.setSource(30078U);
    msg.setSourceEntity(115U);
    msg.setDestination(677U);
    msg.setDestinationEntity(166U);
    msg.plan_ref = 1539396465U;
    msg.id.assign("FYTKGVRNTJRDHCXQCAXKSQMOBZIAUUEUJFRRAOCZEJIDHIIPUZDMNGFWMWLNLKTPWXGDBYKRCXOTWLKWPACBBWFVLAGXQLVBKKZBTERCZGVF");
    msg.memento.assign("HYTKESLJPOIHEXQQGFSFH");
    msg.timeout = 23972U;
    msg.lat = 0.268857434012;
    msg.lon = 0.510472440133;
    msg.z = 0.623886276605;
    msg.z_units = 227U;
    msg.duration = 4312U;
    msg.speed = 0.0366496051787;
    msg.speed_units = 34U;
    msg.type = 243U;
    msg.radius = 0.838087557859;
    msg.length = 0.577042912974;
    msg.bearing = 0.191833461949;
    msg.direction = 28U;
    msg.custom.assign("CGUWTWDYKVRWWMXVCEPRRSOWLVAGMFSOHWESVRPRPNSAQOEKKNRACALJZOHJKKWZUABXPKYCN");

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
    msg.setTimeStamp(0.125230297256);
    msg.setSource(31586U);
    msg.setSourceEntity(39U);
    msg.setDestination(46018U);
    msg.setDestinationEntity(170U);
    msg.plan_ref = 4202061878U;
    msg.id.assign("UYBJGBJTFZERMEWQERTQUQSUGYOLOIZDBPLAKZTKTUMOENCSHXMHMTJDCSNBBRAMDQWSXPSVYDKIFIYCPN");
    msg.memento.assign("FSJVFTICOBZBNJYRWGBVAIIEYNHLYRVDXEWTFRKOXPFJSGALSYXQXPSUZEZEKNVJMUSQIINFDCBEQMDFSWFVHHYBAL");
    msg.timeout = 22509U;
    msg.lat = 0.538455260111;
    msg.lon = 0.635017883271;
    msg.z = 0.862364622963;
    msg.z_units = 7U;
    msg.duration = 52904U;
    msg.speed = 0.0833094047258;
    msg.speed_units = 101U;
    msg.type = 172U;
    msg.radius = 0.0926061405013;
    msg.length = 0.612290798647;
    msg.bearing = 0.19452334511;
    msg.direction = 51U;
    msg.custom.assign("CYRFQDOWLWSXNTMIFXJIBUDKKKYSLPWPMYDIGRPNKLSMDHVFWHYIPFTVQWLEMOYVMBJJUGXZRGBZKPDJKBCMEOIBXLHJVMWKUIOBELRQNLTGNYUTNAYJGWEKOVHUMACAOMIZAFKIFQSUTMWTLZTHHPIDUVZRJXGSSAXXAQCTZWRVKABZQIWTOBGVECQEHFJEDGZGLQUOQNF");

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
    msg.setTimeStamp(0.607385254814);
    msg.setSource(25170U);
    msg.setSourceEntity(1U);
    msg.setDestination(2595U);
    msg.setDestinationEntity(151U);
    msg.plan_ref = 657030946U;
    msg.id.assign("XLAUQJCUWUIHMJLTQXBYKNOA");
    msg.memento.assign("TZQSBIGCARPKOXEWJEM");
    msg.timeout = 1636U;
    msg.lat = 0.834070087553;
    msg.lon = 0.925286760044;
    msg.z = 0.310234878756;
    msg.z_units = 94U;
    msg.duration = 26420U;
    msg.speed = 0.233541355777;
    msg.speed_units = 123U;
    msg.type = 222U;
    msg.radius = 0.320136376757;
    msg.length = 0.561859027827;
    msg.bearing = 0.551995258761;
    msg.direction = 25U;
    msg.custom.assign("XUOKYWWXVLGPOJFHGITMKOCCGJTFOLNAKSJWZOWXXJEAFCDGIMXYHVLPSWMXJSBQNIPQQIYOHUEPFKUEIJTUHFIZYTBFRAVOCHGXWVRXEDFQTJZWYIBTPAIZRTKMYXYMZNYLNTPNFOLXORVZHKDEBQYJOUAMNTSKLNSDCVACEURFLLAAKMNQDRGGAVJVUFBQUGRECMUBZBUHZ");

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
    msg.setTimeStamp(0.411277064592);
    msg.setSource(17603U);
    msg.setSourceEntity(110U);
    msg.setDestination(29375U);
    msg.setDestinationEntity(48U);
    msg.plan_ref = 3430622753U;
    msg.id.assign("UQNPSWBQKVRMTFYMWBSQSZNLBBOSGGPNTINSYGOWQYWXFFHCKQMIAJFJLGVXYFHFOMBKFPGDBAZCTARPODZQINKHODXRMXNUWPRYQVPKJKBH");
    msg.memento.assign("RSDJNQULZNZNDJYFDTGPYBMAARYPLWZRWEQCMTEVFPHFKAVKIFUOOABGVVZDD");
    msg.duration = 17622U;
    msg.custom.assign("MTMKERIOAIHEHSUDYOVBNWTZJGUYYECRXGIXNDYNJLIUQPSPHWPWBVBTUVALVZYFCKGNA");

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
    msg.setTimeStamp(0.177111655635);
    msg.setSource(42737U);
    msg.setSourceEntity(119U);
    msg.setDestination(16001U);
    msg.setDestinationEntity(162U);
    msg.plan_ref = 1479280973U;
    msg.id.assign("TPHFWQVATNSZOVZKXBYFFDHUTDZPDVPUQFBPZBYTQRXCIBOHFSEHMVCPGQZOQACHIDQGSOBWTGSQXXZVAZVEYCARVLABYECERISCLJUPMJNDHFREDSGVBWAUKMGHWMIUXGCOFZXRJENHECNZFWRJNROZJSCXWDVWBDYKGKOYQAFIDGUTYIWOKPPLXFEBDGLNLNWKS");
    msg.memento.assign("BWPVKBDYQUYJUYRJQREOSQZJAXHMXXQDFEKVLVTOHZUOFWANHKVRSZPOSTMJKCAIGEVZRDGZRCPTAFWQSHM");
    msg.duration = 28157U;
    msg.custom.assign("PHOTYEMSASATNLFMUAKSKQZXQDTXCIWHWNZDZIMOBWJTNNIFGTHRHJBRZUMDEGDJTLPFBCKIELQYQGXHEUHZWUCCJPQVJYKFTVXSAZTLASRBLOIPQJSFFXLSVDDDEKLKNRAPLAJEGZRMHIXWKAGMOVYBOQNRVLBGHMFFVJWBXC");

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
    msg.setTimeStamp(0.625355814696);
    msg.setSource(39335U);
    msg.setSourceEntity(182U);
    msg.setDestination(52470U);
    msg.setDestinationEntity(130U);
    msg.plan_ref = 3224294105U;
    msg.id.assign("IYOYJLKEZNPZDGAXBRUPGMFDPNUWTBDGNPFHIKCHOAJIJZUSNWDJYAQQFSIZVXLORTUVEKLFTKPZKHYKRRSFYWEYPAHMLXTPNZVELCOJIQSGSBPIEXIIMGRADWXVMXONBRDANTOJGTVJFAOCVMCSVWMNCWQEZSOGECHUQUMEMINCHJBAQMYDBGQBXBSLKTGIWOVKYYHFGACQRXVJEFQCFXLHDETVSFRQOMURCJPTKBRTDZUU");
    msg.memento.assign("ZBPKMQXZRWUOOBXYFYSEAUODWKPKPFNGLHDVXQWEPWGCLDVGKTFSGGTBRSEIARMWOYMMJZPRDJSASHKYWWFKEQRMWPCIJBIOPILCQBTEWJZQAHTGXFFBDEFITNRHESDBTLCBQKPAURYUZGYCJKQF");
    msg.duration = 25504U;
    msg.custom.assign("UWGFFEODQCETIGZAGGXAVTCYFCRKSRKSMPKNLEYOBNOANAUYRXDBXHUQFGUJFRKLVLKJOTNHLNZWLVHBWVBQWSQIGRBWXYPVTWEOISOZUMNDUDSTAIHBHIZMSWFWXOATQFKXJNPECJQRKXQPBYJHAZEMIBZIVEKGRBIAUXTPLYJJUCHFPCGHGEOSLUACNDZTDYADIIBZCSMPMXTSNSEFPPNLR");

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
    msg.setTimeStamp(0.618620417167);
    msg.setSource(1417U);
    msg.setSourceEntity(151U);
    msg.setDestination(24832U);
    msg.setDestinationEntity(211U);
    msg.plan_ref = 1450532052U;
    msg.id.assign("TVDFTJXFGSYKZSZLAFGKGCNMAVCZMKVHCQDOODE");
    msg.memento.assign("AOKPSZRWRCNQHQOKIQJBEOUQWIGPDUNMSLSVYMJLPIRMDIMBNXYTJNZVFJAMLSVNALBYZGBPCFRWHCVZFPBNOIXNKZRWGVSACDYIGXDZKIUGQBSCJIDAKFTMERVFAKCHSMHAXUPVODQKZVEBGWYHEYDXLIWUFHJQTSYDKNURPWQLTHJDBSYAGPTOYWPAZJCHNUB");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4197408829U;
    tmp_msg_0.start_lat = 0.959785544099;
    tmp_msg_0.start_lon = 0.05419624518;
    tmp_msg_0.start_z = 0.636628227794;
    tmp_msg_0.start_z_units = 14U;
    tmp_msg_0.end_lat = 0.895985218514;
    tmp_msg_0.end_lon = 0.508381414335;
    tmp_msg_0.end_z = 0.441196064151;
    tmp_msg_0.end_z_units = 199U;
    tmp_msg_0.speed = 0.709255639348;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.lradius = 0.057432179626;
    tmp_msg_0.flags = 0U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62061U;
    msg.custom.assign("GQGZXMEGRSQMMIWEOPHUZENIAFBXVPBRCVVOIWYNZJWBFDHFDVHAONKKIHNAHSBQAXCZFCDBHYFPVUKLZIQPOGMCQGKHJGTYCUKLMFTKSICWTERBYIEPXKOWAZXPBQMERGDSEEZLDDNJJUTOQTBYXTCVNZAZCLDEXHIOORQWRVLAORBPTSLYYISGRWJFYPUWHJILJMNDUVTNNRLAMUFJYYJMOWZXNLSWSAVCGQTDFXH");

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
    msg.setTimeStamp(0.975882383764);
    msg.setSource(33968U);
    msg.setSourceEntity(108U);
    msg.setDestination(21654U);
    msg.setDestinationEntity(17U);
    msg.plan_ref = 269333472U;
    msg.id.assign("SXDPXJHLVVKXHMTPZDEJQBGFSFJUCVRZTBGFHMWSJCTJJWUHYLTGLFTTCGDBYLBXPLDYJSDOOIVPFUPQOWWWDRYFGKGCCEOELXSIUUNKAWVROYYEZHZBMSAETZNNNOZCRUWFZMORJLWPQTRSLMIWJUFZKFGIVQRCWSYZQNNRHKJOXDPACQUXSYBRNFKPLKLXHXQIMPORMUGVHMCEITZIYNEQNBAPOKDECHIBKGEMUVXAEBDKTADB");
    msg.memento.assign("FDIZNMKWHOPJINWXRAFRHVUUYWHFZQWXWBCFLFOECYYYSZBTRLVXLEINDOOVZBLJNSWKEIASPP");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.700760186214;
    msg.control.set(tmp_msg_0);
    msg.duration = 37186U;
    msg.custom.assign("TRBDOVVPPWWAFNKROGASYMFPUCPBYJUXRBKKYAHWRZPHFNWTIZKFEASKCSXYCNPCZPFSICOWPDMDMZWRQKVXNJZMJIOSERVCYQQQAYTXYLABDTDZZCROPVLVNHGHIUQXCZUSFNHBIINZGCLHEUMINSVLD");

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
    msg.setTimeStamp(0.863764170829);
    msg.setSource(64489U);
    msg.setSourceEntity(175U);
    msg.setDestination(4331U);
    msg.setDestinationEntity(110U);
    msg.plan_ref = 1840655335U;
    msg.id.assign("BRMLXDNRAUQBZZOBSMQRZQVCPINMTYWDBKKBQOGGXUXEFAIVPRJBPKNEPWFPVRDOXTZEMLSUGJZHOLEX");
    msg.memento.assign("HTSEYCWEXOKAWLRHJZYVECUWGOIEOHWGVIMYGDJGMLAPDEVPGFTBKGCIMJORQUHNEZOIRGBXLNHMYFRTSQXIZZRNWWFMJYKGLVLMPMPIXZQOKCUPALXTOBCLSFHHVFUMNJSTJXFIODXBVECRFTDEWUPVDKZRQDQCPSYIEYWJRRKXSMFAJDCMXKVAAHUBIZBNPGQCZURSTFWXCHIFJSQUTDDBZNYTNAD");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2338926218U;
    tmp_msg_0.start_lat = 0.851049862656;
    tmp_msg_0.start_lon = 0.327772478909;
    tmp_msg_0.start_z = 0.6511952911;
    tmp_msg_0.start_z_units = 246U;
    tmp_msg_0.end_lat = 0.0316540332314;
    tmp_msg_0.end_lon = 0.144410364904;
    tmp_msg_0.end_z = 0.203408779912;
    tmp_msg_0.end_z_units = 59U;
    tmp_msg_0.speed = 0.744395713059;
    tmp_msg_0.speed_units = 14U;
    tmp_msg_0.lradius = 0.850951363936;
    tmp_msg_0.flags = 36U;
    msg.control.set(tmp_msg_0);
    msg.duration = 60147U;
    msg.custom.assign("JMTJJINUAWVTANXAHPYNCOKVODSQJZEYESMAHCSMRPEVYXRAOQHSRPKEHUGOLTLHRYRKLCQXBTZFEVBPWNCGUERZKOA");

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
    msg.setTimeStamp(0.508689602257);
    msg.setSource(3107U);
    msg.setSourceEntity(228U);
    msg.setDestination(35110U);
    msg.setDestinationEntity(130U);
    msg.plan_ref = 519886048U;
    msg.id.assign("OPNWLUJIBHEAFYVYAGTXVPDBDKOZUQXMZHQWRAOMSSDYIQIDWIBPCJKJROHDOBAJFKYFTFUCKCKVFNTPZKAHEXWMGVMISOTMLAMRMTNHRSGLJPKGQGJZODYBZHBXUTZICGLEJNNBOBLKLAKQECANUHNWYSZNFIPDPVFJMHYXSLRNUQXDPEEZIHALSPXEJREIWWVCWQWBOCGOXVQNSESHEUYRPGMJLFGWZYMDCATXTTRDRCQ");
    msg.memento.assign("BKWMSQBFXMRBKOYBNLDDGIPPMBUVTNURJJXUNLQMNKQHIVALOHKZKRERMLQWVPTJBLHHDJAGJFWAQGZHCXCEUDGDIQCJHRAYNPUCWQMXZAWMSUNBOPXMKAMBEDFNEODJXFEUBJGOSUYNKKCDFTDAACIEGJOSJEYVTIAYCPFRWYTWOLXPPTFCSSXYAS");
    msg.timeout = 11614U;
    msg.lat = 0.263312860667;
    msg.lon = 0.647470444595;
    msg.z = 0.453076602926;
    msg.z_units = 25U;
    msg.speed = 0.761167816069;
    msg.speed_units = 190U;
    msg.bearing = 0.610047856032;
    msg.cross_angle = 0.15669239338;
    msg.width = 0.657010369872;
    msg.length = 0.958165130298;
    msg.hstep = 0.490069869343;
    msg.coff = 198U;
    msg.alternation = 78U;
    msg.flags = 192U;
    msg.custom.assign("WUNZSRTRWDJVCAQCTJTZQOIEAWRLAFOCVDMUIGBSMZMULGUJLOUUCINCRVJYZSCHWKZOFBFBHSLHJTUNGVZPHOMEOITNBAPJEDHAUZLUTUHELRMKGTYDXQWDJYISFX");

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
    msg.setTimeStamp(0.595493854808);
    msg.setSource(3772U);
    msg.setSourceEntity(60U);
    msg.setDestination(8387U);
    msg.setDestinationEntity(130U);
    msg.plan_ref = 1481017385U;
    msg.id.assign("BUHZIVYIRRINHBOKZTMUEMOCTHGSWMLOYWPHCOCLPAHITQXGUWKSXPGKQDILOZHFPBTNVWXGMOWEFDPKXETKHYYN");
    msg.memento.assign("BPDJQHCNWBKPETZLTXMMZIAOPPODBMMHTFPOOBCXZTPFIEOAXWRHQFKJQOAVYHIGZ");
    msg.timeout = 52783U;
    msg.lat = 0.90792683424;
    msg.lon = 0.057448166119;
    msg.z = 0.587365171099;
    msg.z_units = 65U;
    msg.speed = 0.785857568925;
    msg.speed_units = 17U;
    msg.bearing = 0.389546071793;
    msg.cross_angle = 0.708637389278;
    msg.width = 0.916468414111;
    msg.length = 0.706490569696;
    msg.hstep = 0.869595929211;
    msg.coff = 214U;
    msg.alternation = 10U;
    msg.flags = 193U;
    msg.custom.assign("WWPTSYBLJRSSERBDELNDKMSIZFXRKZTJXUITDLAKYEFBRICIKAJMLOCYYHEQKPQAFYMYNCAGFIWUASPFJGDJQSXGBTGFVEQHYOWPRNTOAVYQUJRHNDUOUDNBQYBVDITMWOZSCTKDHWRJWKOPLQXCZRKVEVUNXGXBW");

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
    msg.setTimeStamp(0.253594372755);
    msg.setSource(1752U);
    msg.setSourceEntity(217U);
    msg.setDestination(3628U);
    msg.setDestinationEntity(100U);
    msg.plan_ref = 714032066U;
    msg.id.assign("TBOUPZUZTCMFAIVPOJVGBSPMYOCPEVNDFLIZUDLYTYORDWMJUYBIFZWDUGKTNSYNTLVAUVBZZFWOAXTEGRCDXIPOGLWHRIZAIECIFKBHF");
    msg.memento.assign("OOOTCVKLDBQGJUHEPJURDZUJDGFRDWOLTBGDNHJCJFHESHOKRZGDZWCJQTZOFEXTBWGTQBVIINZVMVJIFAEARZFLFECUSYDKKGSFLOXPQZHGVKNKP");
    msg.timeout = 4989U;
    msg.lat = 0.644732798182;
    msg.lon = 0.949449492454;
    msg.z = 0.786995317821;
    msg.z_units = 247U;
    msg.speed = 0.517967676014;
    msg.speed_units = 208U;
    msg.bearing = 0.628499136978;
    msg.cross_angle = 0.503490822408;
    msg.width = 0.317196263929;
    msg.length = 0.157744225201;
    msg.hstep = 0.401429435419;
    msg.coff = 191U;
    msg.alternation = 9U;
    msg.flags = 216U;
    msg.custom.assign("HZNIUKUQPESXWYYZHBAWNWJUDJOBLAHKHOXKATMSXYIAAVUIQMQMDXCLXLIQQOXMVEKRZKTUHNDSNHFWPAXMXFJOFFLVREITCSTLLGTOFLVGRQBDMRZTQFEZKSCVLBHSEMNLWUOHYGSIKDMDXVNZIOTRJQLKDUHNWOPGRJPWJZCUDEBWABSCRCTYGGPUNGJQYBEAOKEWVZRJVEGCPCGUPDKRSCHYXEGSTBNJATJYOFFWMPVFAFBQC");

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
    msg.setTimeStamp(0.37998106834);
    msg.setSource(20977U);
    msg.setSourceEntity(45U);
    msg.setDestination(15787U);
    msg.setDestinationEntity(161U);
    msg.plan_ref = 3683546198U;
    msg.id.assign("KJGWBFLSRKCIGSPAKZYDQQLHINEFLCOSLTDJCPDWEJSRWRGIYYM");
    msg.memento.assign("RAIPMYCSLTLEUVCMLICRTPVSWQAHHCPZMQQMPNSCNZAJECJHSWBGQWGTEKZBJQYQNYPLODZXBWRKXVKWJVUMQZULFGBNOZUBFIAAWJIPCXUXLTCKDZOIGSFDIGWNKJFAHJLGIOVTNRJGXCLETYDDHHCBEPBVEKYEFSVUEMUIFSRWJXFIVGYXVFXXKQMAEHPKFKPTLTAYOKORRPLEAJHDHD");
    msg.timeout = 52573U;
    msg.lat = 0.236806845138;
    msg.lon = 0.943031384755;
    msg.z = 0.00358598533033;
    msg.z_units = 10U;
    msg.speed = 0.702815575819;
    msg.speed_units = 158U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.340185306698;
    tmp_msg_0.y = 0.674728927304;
    tmp_msg_0.z = 0.624629932926;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JQACHXYOIZMGWXJMUJIWQAQHZKYVGUMBZLEYZSASHKPCHKBBLNDNUDWSYKGNZNVTDKBUWRSTTYXPOXAZLQMWVIEMMECWWQZNHDDDRHKJPFAIIKRUWEZDKBGRRIYFPLGTFQWXCUNFBNYJLEBMCCCIPRTYHVAUGFTSYODGWLXOOEOVHYGSTASIEIALOCXUSHXBKDN");

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
    msg.setTimeStamp(0.941710905959);
    msg.setSource(6594U);
    msg.setSourceEntity(152U);
    msg.setDestination(56151U);
    msg.setDestinationEntity(168U);
    msg.plan_ref = 1016756877U;
    msg.id.assign("TGHWOCLEPFKPYHZMSXJYWQVLCFZMVYJKXUUAWDWBDORMFAJSTDGWUPIOTSXUKQQYYFDJTWCJUODMCBZHIVLETKTUCZXRDFEHBHRBTYPIKHYGOOAOQNZRNIGZQSEGKDZPOFXJAXELFFCRAWMBDALPSCTLYKGBENSBXZLZEGHLOVPQVVWKWINXUIVSNPTLZIPTUYWNMKBNUSQGMCONDMARVIBGPIMFENHXHVQREAJIXRYVAJGLNDE");
    msg.memento.assign("EGQLOFYHRSOELAGBWVHMWVQPCMJAKPXCNPRLNCKQJBLNIEHKWLCXNAVVTQFTXWTJUEELGEWBCSFTDNXXUZIDPRNLDFXJFCMYIZODVNIKHYYSLAQHUYLUEUXCJIFUTPSZWITMNC");
    msg.timeout = 28795U;
    msg.lat = 0.755971621774;
    msg.lon = 0.123873247884;
    msg.z = 0.12750030608;
    msg.z_units = 87U;
    msg.speed = 0.199386514765;
    msg.speed_units = 64U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.252870171074;
    tmp_msg_0.y = 0.722724244263;
    tmp_msg_0.z = 0.968291289274;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZMPYTTCNWMYXUXTSHPRTOVJKERGGBZXFHRHEORWNOLDGDEQEIQXTHGDDANOAFMCXCWNPIZFDQUNIALJZRLVJCPDDUWBQLKAZKVRNYEZKVTHWTYGNKZERJBCMIOVKHZVITAPBFWXBKJGQEBQMJCQEGUVVVRTKXPBSXWMSHZUDVAALLDFISPNBXMSICCESUZSOSKWYYMYUY");

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
    msg.setTimeStamp(0.15227730773);
    msg.setSource(37758U);
    msg.setSourceEntity(2U);
    msg.setDestination(12642U);
    msg.setDestinationEntity(61U);
    msg.plan_ref = 2706092048U;
    msg.id.assign("GHDDQLTWAKSRYBWYNIUKUIOSJNBZOVVXXKFGXQSDHGIVAWUAOMPCERGLP");
    msg.memento.assign("AFRJMKYHEILMWVVEXRMVZQKWVEHLJTERJLRCVPTTSVBAKAMZKXFFKFNFJBJMGLGYUSWGNFXLRQVOUOIKXNASZHQPICDMJZQRUZKWGGUGYMBHWJVMJTDZCTTI");
    msg.timeout = 10021U;
    msg.lat = 0.504709720043;
    msg.lon = 0.242672378443;
    msg.z = 0.807469505202;
    msg.z_units = 188U;
    msg.speed = 0.0687290731475;
    msg.speed_units = 144U;
    msg.custom.assign("YYPZYSNQVCGQSTZNYSHIPRWRJOEDJHONWKGNQSDTPULSULPOXAAUDAEAVDYITUN");

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
    msg.setTimeStamp(0.867090726061);
    msg.setSource(13713U);
    msg.setSourceEntity(168U);
    msg.setDestination(25873U);
    msg.setDestinationEntity(121U);
    msg.x = 0.0510227595875;
    msg.y = 0.446977990248;
    msg.z = 0.627145135627;

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
    msg.setTimeStamp(0.238806695041);
    msg.setSource(9691U);
    msg.setSourceEntity(224U);
    msg.setDestination(61865U);
    msg.setDestinationEntity(72U);
    msg.x = 0.289258362466;
    msg.y = 0.673438590189;
    msg.z = 0.823140565988;

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
    msg.setTimeStamp(0.000199534098361);
    msg.setSource(26113U);
    msg.setSourceEntity(242U);
    msg.setDestination(42330U);
    msg.setDestinationEntity(167U);
    msg.x = 0.111107025497;
    msg.y = 0.303408807555;
    msg.z = 0.191714223701;

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
    msg.setTimeStamp(0.490308185914);
    msg.setSource(7126U);
    msg.setSourceEntity(45U);
    msg.setDestination(25528U);
    msg.setDestinationEntity(35U);
    msg.plan_ref = 1860450136U;
    msg.id.assign("JVSYWOTVAJVVNDSMYOAPEQZOARZSCSZVKAHCIIOFVKJSSRKCKUWUNYDLLWSTFTDWHGCMDGEBOIGZOPHDIXGPXMXKLCBHWJUKLAEHDMTHPIEVJPNTBBMXCTIAWGP");
    msg.memento.assign("LPCDGKPIUCUHSWJRDKXTQTZQIOSSTRABNJCMMZPADZAYLFEXURNQXXGXHKJAZZQFLXEIFSWOWYUCVKRUAQEULVGPVOGJYGRESBVPKOHXFYOUETBGAWXNKMDAEHFDMIWJRZIBMPOKSMBGEWSQLTNXBL");
    msg.timeout = 51536U;
    msg.lat = 0.883996303383;
    msg.lon = 0.476580624293;
    msg.z = 0.412092531784;
    msg.z_units = 251U;
    msg.amplitude = 0.351795874118;
    msg.pitch = 0.736220248589;
    msg.speed = 0.429876045251;
    msg.speed_units = 230U;
    msg.custom.assign("UXTRNYMNKVQFCEVNSISKIQZYHAODJCZNWMAHUBVBVOLTHNJMJDSMGOZORSWQCHLTBLGFUMOJAOXRGFYYGSPKJKXXUVCJIAZWAXSIIGEHBFCFMRATTFFQLEJRMTKEHAWEZCBVVRDSFZTMWRBCPDHQQGYYWXIOTMXZQHZSLRVLUBDDLN");

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
    msg.setTimeStamp(0.171945982767);
    msg.setSource(53847U);
    msg.setSourceEntity(49U);
    msg.setDestination(178U);
    msg.setDestinationEntity(217U);
    msg.plan_ref = 954590184U;
    msg.id.assign("ARZLIVUBICIJDHIRINROXVSGAQGYLUSZWAYTECZRFKPXLXNTBUQUYZEATBBIUVRDKBUOZODMMDKBEMLSHKYKCGDWFLIBGSYVZHCWMDTWJVHBWJDHCFJFGEOZFJYLPNDBGFXRZFEHCQIANAMPHLNJKSBYOWPNNTEFTWMKGEFDXYESOOXVQQOZVRSTIVOCSVAPUCSOAQLLPXPYPGEMMKPHVWUXNRNGHQJQWRCKJJAIQXPCRTMYSKLDUQW");
    msg.memento.assign("WECZBXSXKBBYNGNMUVMJ");
    msg.timeout = 38412U;
    msg.lat = 0.167689797641;
    msg.lon = 0.21723013699;
    msg.z = 0.905809076291;
    msg.z_units = 135U;
    msg.amplitude = 0.921542693712;
    msg.pitch = 0.287436350267;
    msg.speed = 0.838386655867;
    msg.speed_units = 14U;
    msg.custom.assign("DMRYRJKHLKXOEHICGJNGPBKKEEFIXNUDDRAFCJUEEVDFBZN");

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
    msg.setTimeStamp(0.0152753759531);
    msg.setSource(19100U);
    msg.setSourceEntity(10U);
    msg.setDestination(52019U);
    msg.setDestinationEntity(143U);
    msg.plan_ref = 4009889802U;
    msg.id.assign("JRNJAEMMGIBPKHZMNLGUTXKBFOSPYQVIEZAACXELTHUKQCUEVKKGHDVLJEWSWMFGNEPZCCCDXOBWILVXKSNZZOULULT");
    msg.memento.assign("QZFEHJLXVPRWMTTMJSVNCDGWCNASSCXEHJMLVUZVOYMRJUUTYVADHIWNCLFCVZDWOIYSTSQULMAKKEOYSUWXXPIPFQJURWRTOKJVPETYIHXGKHUXKDIPGLDRLGOJHPGCSFYBFBJDIHZCCSLERXMTBNVNYGBMZCQBWLODRNDHKBMPABGERJKQZNDSZFNTQKFIWCAEAEVKBOHRIGFGJAAATTEP");
    msg.timeout = 10280U;
    msg.lat = 0.332222237992;
    msg.lon = 0.256102113937;
    msg.z = 0.331643362192;
    msg.z_units = 151U;
    msg.amplitude = 0.974382543359;
    msg.pitch = 0.23149419788;
    msg.speed = 0.518928281045;
    msg.speed_units = 127U;
    msg.custom.assign("QSDXVHYMJRGDCTDTJCSKJYMJZVLWRRTFKAPUDGWXNDSKBNEYYZCLPNIEMLABQWOCZOZITTGKHXAWJADFWOCCGMHEBYYOMKWZVPTLENIJMPQHARFUVBFFOQSPUNGIGZIDSYAJLBCXHTLTYHKBTFZFIZQAMEIULENBFPYDIEPQHKANLDRQWEBMDVRXZXSAPKSZMOUVLQCVFHWHCFULUWTHUBIAXJO");

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
    msg.setTimeStamp(0.335302894416);
    msg.setSource(43230U);
    msg.setSourceEntity(229U);
    msg.setDestination(41844U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.909602632808);
    msg.setSource(26559U);
    msg.setSourceEntity(137U);
    msg.setDestination(27897U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.21709753061);
    msg.setSource(30997U);
    msg.setSourceEntity(50U);
    msg.setDestination(12635U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.0426496742508);
    msg.setSource(51264U);
    msg.setSourceEntity(109U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(253U);
    msg.plan_ref = 122271203U;
    msg.id.assign("AKESTXUVOHJKMKOGWGAXSFWQZTREPVKHYYBZEQWVITBJRGRPZQVFYVDTSBAVNMHOAUBHTNIMMYJPOPXOPYHFDXYLWIRBKIMIJMDFOFASGFKMJKECXNQZQCGDOUSQNNNRJAGHRMFWZIAYSBSMLVQJUXUITCADLU");
    msg.memento.assign("KNYNDRPCIXTTZDPXTDWCHBOGJQXLSZVRVOZHVXEKSUIZDBOAMIUPBZGMUYQH");
    msg.lat = 0.728479955365;
    msg.lon = 0.731793170502;
    msg.z = 0.274659197077;
    msg.z_units = 29U;
    msg.radius = 0.533813524842;
    msg.duration = 53238U;
    msg.speed = 0.571406542063;
    msg.speed_units = 223U;
    msg.custom.assign("IVAQEWGNGYHMJVFAVRPFIZUPTDBRFSRRCPHDDZJREVOZIXWXAXWWKXJYMEOOJCDVKMKLTBUUAVNJZDCXAAOIJGHIQMEQSQYDHMZFKBTXTITWSQFNMTBM");

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
    msg.setTimeStamp(0.19457037778);
    msg.setSource(54310U);
    msg.setSourceEntity(102U);
    msg.setDestination(1459U);
    msg.setDestinationEntity(1U);
    msg.plan_ref = 1118712064U;
    msg.id.assign("DWJPLWHFSTXKUEJHBIQVYQDOZEMJMCRIBKNPOPISXHMZUWSPDHIBJZTMJLZKUYEKMPSKGSTLUYNTWWGNRSARCPHTOQJTOEQUFYIXZYGGZFMBL");
    msg.memento.assign("XZYQBKJBNQPNCUYAKIBOWEPTVRLETBRVFIXMHMJVPUXHERMVFSUQHQOHNDHSALWCAKEDXFGHQXRDSTSRIVNXZJCZKAULWGVVTNLPYDLWBCDNYGPWAOKNQTSVIYVHKAZEOEZAEMJQPFEKTPUYHDLKUYURMZGWVCQGAPXBQWOJTGYPMYLAJTSKOJDRWMBUJKCC");
    msg.lat = 0.174809903148;
    msg.lon = 0.0489023729144;
    msg.z = 0.405484003716;
    msg.z_units = 10U;
    msg.radius = 0.968575449974;
    msg.duration = 15628U;
    msg.speed = 0.362740909216;
    msg.speed_units = 249U;
    msg.custom.assign("GOEZWLWOISVQVSEMRBCECBDSODBKAXXLUUMPLFVRDWUOYHJDDQGYXWRLMXYXQVJPMGQZNYKHIKPCPMLBUFVXFTSFWWFC");

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
    msg.setTimeStamp(0.0876794462098);
    msg.setSource(38161U);
    msg.setSourceEntity(53U);
    msg.setDestination(59066U);
    msg.setDestinationEntity(19U);
    msg.plan_ref = 2843295215U;
    msg.id.assign("UDVRCQBSRMNLEDAZCBSKIXEDZFWQMQZZNNUTNIOKUIZOFHLPTWBMMFKTMNLQPJIXQHSBXGFTDQFODQWMFHUTHJXGKTJAWUYZDKSYLHCVGNCWPHESZWEROPAGURIXMGGLGPIXISWMLDQBXPCCGECAAXCJZZR");
    msg.memento.assign("IMQFWNLOUXOYNXVUZYYXVYEFCBVDRWVGMDALIHQKGXZ");
    msg.lat = 0.289276786617;
    msg.lon = 0.247968720918;
    msg.z = 0.23898877991;
    msg.z_units = 0U;
    msg.radius = 0.00200787868268;
    msg.duration = 48463U;
    msg.speed = 0.484968691964;
    msg.speed_units = 28U;
    msg.custom.assign("UDTMQMKZQIUPDWUVXKBDJNSCEKJMDFLYTPENBVMWXFINOXJTQZJMAEZUGEZILTORHMVHFNZVSSVIUFLODKXWOIQVBHQIFUHNFCPPQPBQWWKGBUDGJTBVQXRBZGXCYNYCKPOXEOESLIARBCPTRSCKESIWGHPLIYTNDICGHWTCTJMZMWDFXU");

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
    msg.setTimeStamp(0.146185791589);
    msg.setSource(40265U);
    msg.setSourceEntity(185U);
    msg.setDestination(53343U);
    msg.setDestinationEntity(111U);
    msg.plan_ref = 3092800353U;
    msg.id.assign("TLGVITZHWDFTVEVNKMPECVLH");
    msg.memento.assign("LWOYVBNKZXFMHYFQNSRCZKGBVHDQRJAVCWQUOWZTHWSPBNMS");
    msg.timeout = 11074U;
    msg.flags = 236U;
    msg.lat = 0.593953172191;
    msg.lon = 0.767757886552;
    msg.start_z = 0.853671025652;
    msg.start_z_units = 193U;
    msg.end_z = 0.918633923402;
    msg.end_z_units = 124U;
    msg.radius = 0.552695200899;
    msg.speed = 0.252715445781;
    msg.speed_units = 232U;
    msg.custom.assign("DRKGNYHUBMEOWTRHXSYIBUMJGMIUAUBVIZVNHYCIFAGFNQCDJJOQKMQHDKTNRPSPFGFHWYOSEOVRLMXOCCTPOUJFKYAVDMQRHRLTKWSFDTAJQYTGHKADPAE");

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
    msg.setTimeStamp(0.784154390052);
    msg.setSource(845U);
    msg.setSourceEntity(133U);
    msg.setDestination(14388U);
    msg.setDestinationEntity(142U);
    msg.plan_ref = 3061000536U;
    msg.id.assign("XNZBXLVZUSYANPKUPKMYSGBAIZQDWBQLMZPUHROQPPLBOSAGV");
    msg.memento.assign("LWWPSXWMOKRQKBHNUXUXHRDRKVZTPYIRTZHBICNLAJUFONUFFCLVWQIEFZREQQHQFGAVIJIVKLGVMCEECCLXSYXAFEKDMLELATAPMZS");
    msg.timeout = 50758U;
    msg.flags = 220U;
    msg.lat = 0.16878532948;
    msg.lon = 0.889032965421;
    msg.start_z = 0.0596477205796;
    msg.start_z_units = 33U;
    msg.end_z = 0.569480676403;
    msg.end_z_units = 242U;
    msg.radius = 0.336987884094;
    msg.speed = 0.330814729644;
    msg.speed_units = 112U;
    msg.custom.assign("JYLKWTGMYQYLLQDNFBWEXCJIRRURWPDKUJWMDLEWPQTVSZIULFFCXFWGIOPKMCMPAKCURQCUTTGJKPOYYCNMOKDCMLTKJXOFQKPIEBIAFDQUHNIOVOUDRNUAAELGHAHVHSCWZXIOXSBOHJPFBSPQMSHIPJTUZEZMRGDHVLBZUEYZFRNVNXOPXJKTTXABLSAAMNIKCDHZFSWXGBEYESGYJEVVCWEVAIDMHRH");

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
    msg.setTimeStamp(0.466058153549);
    msg.setSource(16757U);
    msg.setSourceEntity(228U);
    msg.setDestination(43698U);
    msg.setDestinationEntity(113U);
    msg.plan_ref = 2751336216U;
    msg.id.assign("QOZOMPSXHYSHBWAWHHPJTWTSIBCEQYANLOWJFNEYRFBIXUKIANRGXPLMLGCVYGNNSPBJQFOWIVSFUDGLHCQWMVTNZKJPEUTBFYEKTRRGBBXCMIMPMENRQAHDOKVZFZXRHZZDKGZLXLWOJIQSQTBTVOTGDROZDUEKGDEMDPIS");
    msg.memento.assign("YEDXJMSCEJHWDBVFQCIUQWBERRKXBKEWFSNQPOAILAUHTNQXRGBHMCJYOYDCJSKWCJYDSYZVADMQGJLKHINWTWFESYQRGSGPPKDARTOZCUPLRRZFTZOYCEOILXTGQRPATYUCVGVICDMTBUOWOE");
    msg.timeout = 19990U;
    msg.flags = 225U;
    msg.lat = 0.472189824428;
    msg.lon = 0.770733162673;
    msg.start_z = 0.107337581917;
    msg.start_z_units = 32U;
    msg.end_z = 0.591498552153;
    msg.end_z_units = 15U;
    msg.radius = 0.944864259869;
    msg.speed = 0.838376539177;
    msg.speed_units = 169U;
    msg.custom.assign("YNFFPOKELWZZEDXXULPHHBJVQQWXBEHT");

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
    msg.setTimeStamp(0.126015631895);
    msg.setSource(31349U);
    msg.setSourceEntity(98U);
    msg.setDestination(4386U);
    msg.setDestinationEntity(84U);
    msg.plan_ref = 3037340192U;
    msg.id.assign("ZEWOGNQFTYE");
    msg.memento.assign("EZZUHWZKYDVAJKQKYEHGQYGFGFBILTINMLSXICOPDWRCYVYQOWEWAYJAXBZSCQPUCMJBAMOSIEBQUHZSOQDLWZQCOLAFYZNNAGTDZJPWEJWUBTFIXTR");
    msg.timeout = 1250U;
    msg.lat = 0.30721028411;
    msg.lon = 0.634160750745;
    msg.z = 0.235531567796;
    msg.z_units = 69U;
    msg.speed = 0.627959707799;
    msg.speed_units = 191U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.843348897828;
    tmp_msg_0.y = 0.162439344622;
    tmp_msg_0.z = 0.0165555739066;
    tmp_msg_0.t = 0.515827587582;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EZCLTLIHQRWVTUNHYGJQVTZFOXGASNLRUZXIEYCYMICJHLVJQSAOGJVVPXOZTNCTRTEZTDPHLFDYNKJJUNWHADSWXXCTZOAWQYSXLHUKEPOXLWVTNAMCNHYEMFPCBDAEQKQIAEPLYGWQSYUCYFRMWZJDAPGDVRLOMJPUUQR");

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
    msg.setTimeStamp(0.34412232929);
    msg.setSource(33141U);
    msg.setSourceEntity(157U);
    msg.setDestination(50386U);
    msg.setDestinationEntity(207U);
    msg.plan_ref = 2316541187U;
    msg.id.assign("NVYOOLGQTSNQTVBLMKLPTPHMYKJRBQQOYKWEEOHIXHUSUKGTUFQIMOOQIIJYIEJIZAHDVPMUCBIOWSEVTASFMEZKWQYBUAPRTEJDJXTJFOVDFIDZDZZKLRLWBURXMPZJSAPEUEWRNKCBCGRNKPALNMHAMGTRAZGUSCFFIYYXNHJCNGVXCNWSLICVPFQFBZHSYKCXNAWD");
    msg.memento.assign("KLFCWRNYKZYJPXXRDYCNGEXBTXKMZICMNYGPDCKOOXYGDILSGDXJNBSKVOOQADPBQBSHBEEPILGUPTNGIMGFFRDLTVIURFEVUNHHPZPVIMUCVRQCYHFKVBDBCWAHMTYODJMGRUJERXBKBVUELTJDIQQVSYTXLZAFWNPHAOAUUQZITQZXRGFJTKYJJFGJWEMSNZA");
    msg.timeout = 40393U;
    msg.lat = 0.98339100966;
    msg.lon = 0.584171808266;
    msg.z = 0.329017800134;
    msg.z_units = 38U;
    msg.speed = 0.33766905491;
    msg.speed_units = 133U;
    msg.custom.assign("GGOLMFHPSPEFQMFNKTSTEUBHJNSYLOGIGEMFVYWJYAUSKPQBPRUZCALXJLBRYEVVPXGRLRFJVBLYXFCBIMYLAMDOENYGJSQWZOOUKLKUTYNHXYIDWDBVREWZXMJOIRXVUJNHVDNPNKFNIJMDZRH");

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
    msg.setTimeStamp(0.765315972678);
    msg.setSource(49079U);
    msg.setSourceEntity(34U);
    msg.setDestination(33350U);
    msg.setDestinationEntity(106U);
    msg.plan_ref = 2757387663U;
    msg.id.assign("QZKOZYNXVRWGKJRKNMIBKUEZHKJCBPEBJJCLKAFSASDRSRNDKQECFYQWZRYSIDQLOZZWTVVKOJGEYOEDPNJBP");
    msg.memento.assign("MCLTGXYSUSZKHYADAXPUHVHCVLEFTZWCHIPEDMWGSTQRLIMASMNUOBVVPRRDBBDXFEMADJGHETPTVWPXXZHEWOBCVTDTOKWYMGRRSJIWSYHCZDIGJNAQCLP");
    msg.timeout = 33145U;
    msg.lat = 0.521659020874;
    msg.lon = 0.9837257448;
    msg.z = 0.00722074579668;
    msg.z_units = 35U;
    msg.speed = 0.611502354298;
    msg.speed_units = 238U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.916521585972;
    tmp_msg_0.y = 0.998917451933;
    tmp_msg_0.z = 0.482852653315;
    tmp_msg_0.t = 0.811819162273;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NQHIHJDVNUSYSVHVPDHILQQDJBOWLJTOPUMIUBMBUUFPAYRGQBHIKSPZXAGMXVGSLTWVXMNKUADVZCRUJIXDYHDLRTAOIKKEFOZCEYYDMGWMCCEFGQLLAFCILNRWARRXHUVEZSEZMNYCBNXOOIREPEXJDXNFTTBFAOLZZHINOVYWFCPSTEKZLV");

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
    msg.setTimeStamp(0.792324913881);
    msg.setSource(26842U);
    msg.setSourceEntity(139U);
    msg.setDestination(30021U);
    msg.setDestinationEntity(138U);
    msg.x = 0.124113270502;
    msg.y = 0.644025987584;
    msg.z = 0.0883495453768;
    msg.t = 0.320369419215;

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
    msg.setTimeStamp(0.371906841857);
    msg.setSource(43625U);
    msg.setSourceEntity(140U);
    msg.setDestination(52702U);
    msg.setDestinationEntity(198U);
    msg.x = 0.109969496779;
    msg.y = 0.173934500748;
    msg.z = 0.123240469896;
    msg.t = 0.410959234992;

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
    msg.setTimeStamp(0.381680885621);
    msg.setSource(47510U);
    msg.setSourceEntity(118U);
    msg.setDestination(19215U);
    msg.setDestinationEntity(239U);
    msg.x = 0.177395392296;
    msg.y = 0.675125155979;
    msg.z = 0.00230633755928;
    msg.t = 0.482850135075;

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
    msg.setTimeStamp(0.356208036808);
    msg.setSource(62493U);
    msg.setSourceEntity(126U);
    msg.setDestination(26624U);
    msg.setDestinationEntity(60U);
    msg.plan_ref = 1052083731U;
    msg.id.assign("MBYTTKRXELIAUSMBSGCQSIIPSDCVRRLUOTAOGWJVAPVFZNOYNZKVFBJHAZCNOYPKRRXAHLMNNXOOFZGFMHJLCHXHLKLWUDTGZSQMRSEEJXPGXSJAFQIDCUHRUQCOSYNSUQBJWNBFQLGMUVQTCXZADIZHWUVLOBYCFUNDTDEWJMTWZXKXJEIAOZGTMIDATYXPQEHFWQKWBJWEUPQVKCBSIGVDDMGFHVANEKDBPFZIJEPHCLTRNRYYVOYYEKW");
    msg.memento.assign("ISYYLHSCBLRDIYDWFAZEGRYMMOTAQEEQPDCUOHMVPURPPKLAJKAZZFMKGMLQILLOBYNSABFZJUHUBCYSRWXAZNEGFOIWBJPIOZNXNSRCGDHUSUTIGMITDUJTCXNUWIJYDPWXLDQHTYTWUSTUBKFHPTIGAVOENIVYJFKZSJOHQNOLBOCJWWZMNSNKQGPNLBQKWXFBAVZMXCJXXFVYESLVVVRCRPWFCMKAGVDQEKHGXMBRQGRHCVDEETOF");
    msg.timeout = 56109U;
    msg.name.assign("HEHTRESDVTXZNKESQOZNWHEFJGFWDCOUVXJRQPMSQQCNMCXSAAPJOHFXAYVMRLHONUKTGDKAGWYJECCBLCXAYLOMZULYFLGLUZPZTZIPIQRUAIYAMIIPDQQMXEIUBGUPHSRHTOJVHUCBMRPXCFXPDOSSDBRJB");
    msg.custom.assign("CQAMBFZXCLXVRORUNIBRZQHVZYDGJZTNYMFLPRLPRJOBVCSIBPUNMGAQYJKVIJGFQDEKWOLVAMHHMFKZWGKJPGAUPYUAWFONIGUQITELSOYEIQNXMCNSZLWIFEUUDXBAYQCKWDYQSTXQRCXGWVPVGMPUAKAWHBKHISZEBADCHZEMJTRYDLVJTLQKYHZHJUTZSOVKCFRSHEAKVEODPEUFWCFOMDFRDOSTNXBHTNXRECDBWTLMGSTXGW");

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
    msg.setTimeStamp(0.414823702764);
    msg.setSource(10093U);
    msg.setSourceEntity(70U);
    msg.setDestination(57709U);
    msg.setDestinationEntity(69U);
    msg.plan_ref = 280265249U;
    msg.id.assign("CDHNJNMBIRNMEDEPWOQTHUVFCGLFUZLXFXQKMPEVPGLUOJFUSAQEDJCCVUWDOSMIGBQRHBFWSWWMDUFZCGAYKDTRLLNSQFQKZFLUXYPBIPEIZGVRSHOJIANSDELEBNITBTHJJQYTUWGFZKSGADYWZIHDNICXOHQECBUMARNRCYZSKHJLDOYYHTQVTWOHMYEKSYBPBAAMKOTXZUCGCARNJYGAMXVTXXTLKPWLSI");
    msg.memento.assign("HZZAMNLENFNTXKWSRWMGTHSAAWWKWQEHEBJ");
    msg.timeout = 30880U;
    msg.name.assign("ENKCYIDPLMVKXVJHXYTSPBGVMIPXYCAEAJKCDBDTAJBGBNLTBVOWTUZEAIVXYKQUPKUOSPNZWMDDGUJJDUFHTPXAKEFOTZROCIATPPGEPCMURWHLCGBLNQSSVBFRHMIHRASYZVTJGJGOSCNRRBCWQXSFKOMIEWIVLDTPXRFVMGGVDWFUBHLLJHEYHFZNQGQLIWMTFJWHWQNUEZ");
    msg.custom.assign("QQLRYFGDGZEFGIVYXLPKUDWXNSDESEZQGLQNELPMHUXWYTRAYCMCKRFTQBSKTPOUIDOHMTGQFRZCBRPNVRKSDELAXEKIVJMIVMTYTJOHAFCPGKVZBHTVYISKAWZGRONAUDCNVTNOSHHUBBPSLUTJZIHU");

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
    msg.setTimeStamp(0.204356133372);
    msg.setSource(53179U);
    msg.setSourceEntity(208U);
    msg.setDestination(3881U);
    msg.setDestinationEntity(39U);
    msg.plan_ref = 1766607308U;
    msg.id.assign("TBDNINRLUHKCDEPNTKZVWMENYPDIOORTKBBQCRUADEKVEUDUEJLSBJTBXRJGXWZTHPCJQGNZSXIAWBPIJDZAKAOZREWMYGYAYGSRZYVRRZNQMUEMXCLOIEFAFBMKHPTZIIJJNPJCFHKNXGFQQCLWKSVWHYQFDSBRLPIGJFAMHSSCAOHLVOPSVCGVVQXVBOULKNGEFQWAOIKHSUAX");
    msg.memento.assign("LJBYJRUUEDHZVCMRPRQJICASUVFNCFGKPHMMIMOEHLILXDRQWYRVHTCPPIQFGZLCADENVUXUTKRJDBXZMJWOCPGDKXDQSKEYAETNGENGLOXERGASNOLKMWXPFVEFWYNG");
    msg.timeout = 64143U;
    msg.name.assign("PHZEMOZORYCCVOHLHUBVTTTLYYSVLKDIMDLCBXWFEEZQVPCOVDSEZDKKCAASNWYWFAWNTJIICXXJGNPYJ");
    msg.custom.assign("TDSCYVDNBOCQSEIUUFSONHQTFIZOHZAOGOBTIHCJWEOCZAPDWPJZGJIJYNXXFBET");

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
    msg.setTimeStamp(0.0778817378665);
    msg.setSource(19591U);
    msg.setSourceEntity(112U);
    msg.setDestination(27385U);
    msg.setDestinationEntity(203U);
    msg.plan_ref = 2272724499U;
    msg.id.assign("RDSVJMYERTYVVBUIXEJORAJUYRMTBFMYAWSHVAYOQPOCKZDGAIDNSEWQSUCEWXIJULISBHVLWRXHPEXBYPACGFZ");
    msg.memento.assign("JEUZQJYYYJIRGOIYKLXFXUHTKPIQK");
    msg.lat = 0.342255784569;
    msg.lon = 0.414906971506;
    msg.z = 0.50653878581;
    msg.z_units = 215U;
    msg.speed = 0.21561324542;
    msg.speed_units = 154U;
    msg.start_time = 0.17645496843;
    msg.custom.assign("PCAULYNRGMHYKBRBCRTQCXRVWTLBFVX");

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
    msg.setTimeStamp(0.819626619163);
    msg.setSource(19266U);
    msg.setSourceEntity(142U);
    msg.setDestination(33072U);
    msg.setDestinationEntity(149U);
    msg.plan_ref = 1860280494U;
    msg.id.assign("ESXYHTBDWGSONZXGVTMCZORZJGUTDWHFVRAWKIYZZUYEFKYSAEHUCDWCACJJAXNONFAIKHEIFCJCQLCVHHFTVMNZTQLFVO");
    msg.memento.assign("BLKJCRIKPYFYMIYZOWDNTUFJUXALMNSFTALQWCJBCXITPWMCPILLRARGTHUMLEAWBQRZJDPONMNGFFOJNVWVRGUHNDSNLAPHSLOQBFJPNRRIATLVVQDIQZEHFIDGEPWLDYMPUACVETBZGQEXFEXRZHZSZDZASHTHHNSJBXRUKJXYKKBGQUV");
    msg.lat = 0.64120335432;
    msg.lon = 0.756320489416;
    msg.z = 0.965096559984;
    msg.z_units = 215U;
    msg.speed = 0.725088378654;
    msg.speed_units = 222U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.105574236895;
    tmp_msg_0.y = 0.977112882535;
    tmp_msg_0.z = 0.653967818518;
    tmp_msg_0.t = 0.055177861775;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 47322U;
    tmp_msg_1.off_x = 0.122100428245;
    tmp_msg_1.off_y = 0.535089227036;
    tmp_msg_1.off_z = 0.93865981887;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.134863253264;
    msg.custom.assign("ARUNHFARKNWGDUYDGJSVDGNVTXBYQLKUWERCQPQIZQOELFRMHAWGDBWRAIKPREBDZPBLZHIOFCOSFGZVVIYSPEYZIFXEGZKHMBJWXBXNIUCSFPLZBTFNAYAUAXUQJMUDGGMSSGOCWJMXATYYQTLKOSFOLVPUIFIETMUKTCOLFHVMSTASNXDJXPCLNBEPOMJCSUJHDRQVKRIKIXOOJWNGNPTCAMXHWQTZEP");

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
    msg.setTimeStamp(0.374481431692);
    msg.setSource(4894U);
    msg.setSourceEntity(118U);
    msg.setDestination(13500U);
    msg.setDestinationEntity(129U);
    msg.plan_ref = 2978525076U;
    msg.id.assign("VTPWUBALJEXEGCAFWDXNKEASWSMLJJKLTVAMPBCFIYUHQMXUHOYICWTRWQRQCIGIQXQCDCOJGAMRHFKDAAPFBGUMJFNKPEZIRFUTZROKKVGUCNBSZYONIFSBGFBJXSHRAKBJOSLDNFRUKMDZYOVOWWYFDDDPCLZANQWYLLKGZBYQRVTMNINYLSWUJYHTWSHTQGCVRPTGMEVEITVTZ");
    msg.memento.assign("TWBOCYEFXGJRFOMEGGMFQPOZJDCHHJEKNPCTRMWWNVIHYQXSNYKSSKRDSUJHLTXXUIUDSRGNPLHRQPDXYHVFJCLKFEUJBVZWHUZMHZBOKOKDLGFIZABMBOAWEXQYZNGFYMQIMAMHWJNNCLKSERNPVVGUGZBESUGYIRSDJXLBLPWQZPAWQNYBIKDKVIXTAFCDTBRVODWQTASCERYPBVTXZLKNI");
    msg.lat = 0.425098899361;
    msg.lon = 0.410873815684;
    msg.z = 0.745375172943;
    msg.z_units = 123U;
    msg.speed = 0.990203305603;
    msg.speed_units = 238U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.159523834067;
    tmp_msg_0.y = 0.667380425329;
    tmp_msg_0.z = 0.56247808839;
    tmp_msg_0.t = 0.616187328724;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 61712U;
    tmp_msg_1.off_x = 0.586742566808;
    tmp_msg_1.off_y = 0.332780404003;
    tmp_msg_1.off_z = 0.420851994635;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.538436042602;
    msg.custom.assign("QGYSNXDPLIEIVOTRKFAUZGKFEQWOGYWPVHYWZTGYRMMVRZLABZGHCMDBSUYOFYBRHRYVGCLIMGXCKEFHIGKLTOXCYQQSEQXOSPKUJUXREJQACDECJRIJBCDGWUMXMVLBWPFHZARDXAUZKBFCOTNVDPTWNHFKANBBHLRANJFOXWNTZXBJWZPUQPMEEQQ");

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
    msg.setTimeStamp(0.364473944363);
    msg.setSource(18320U);
    msg.setSourceEntity(26U);
    msg.setDestination(35868U);
    msg.setDestinationEntity(239U);
    msg.vid = 36959U;
    msg.off_x = 0.878175585424;
    msg.off_y = 0.099075189854;
    msg.off_z = 0.525470191715;

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
    msg.setTimeStamp(0.786962249525);
    msg.setSource(61667U);
    msg.setSourceEntity(192U);
    msg.setDestination(46591U);
    msg.setDestinationEntity(136U);
    msg.vid = 8083U;
    msg.off_x = 0.125542329687;
    msg.off_y = 0.900765100393;
    msg.off_z = 0.366291947852;

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
    msg.setTimeStamp(0.748254762303);
    msg.setSource(24049U);
    msg.setSourceEntity(249U);
    msg.setDestination(18320U);
    msg.setDestinationEntity(172U);
    msg.vid = 30657U;
    msg.off_x = 0.859897662271;
    msg.off_y = 0.947943214842;
    msg.off_z = 0.324785332068;

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
    msg.setTimeStamp(0.772244402173);
    msg.setSource(59626U);
    msg.setSourceEntity(117U);
    msg.setDestination(56496U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.18119557488);
    msg.setSource(35011U);
    msg.setSourceEntity(109U);
    msg.setDestination(59107U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.216184897406);
    msg.setSource(38995U);
    msg.setSourceEntity(53U);
    msg.setDestination(36036U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.9519945862);
    msg.setSource(42330U);
    msg.setSourceEntity(163U);
    msg.setDestination(18919U);
    msg.setDestinationEntity(246U);
    msg.mid = 20750U;

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
    msg.setTimeStamp(0.281531127851);
    msg.setSource(65259U);
    msg.setSourceEntity(54U);
    msg.setDestination(63734U);
    msg.setDestinationEntity(219U);
    msg.mid = 2161U;

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
    msg.setTimeStamp(0.610069760638);
    msg.setSource(60650U);
    msg.setSourceEntity(142U);
    msg.setDestination(64794U);
    msg.setDestinationEntity(29U);
    msg.mid = 7085U;

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
    msg.setTimeStamp(0.93785486738);
    msg.setSource(15631U);
    msg.setSourceEntity(202U);
    msg.setDestination(4624U);
    msg.setDestinationEntity(29U);
    msg.state = 223U;
    msg.eta = 38560U;
    msg.info.assign("RSRUWTKVBAAMPQZJZLYWPEMHXPXVEKFUJIRIBUFACOYDVYTKQWCDWRBUHLFTNTETGMEQFOCWXJCIKNKHPVKIEHADSBDTSMJOJJEADIZAGNWMPJ");

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
    msg.setTimeStamp(0.234852723047);
    msg.setSource(48716U);
    msg.setSourceEntity(53U);
    msg.setDestination(61006U);
    msg.setDestinationEntity(223U);
    msg.state = 183U;
    msg.eta = 23824U;
    msg.info.assign("VTMGQIBJGBWKRZIJAMTJOLBCREZMLQQUJCZSAUPBJDBJNKKRMRSXSWYTTOLXHJKBVXIJXKQETUQPIXUPCYIALQZNHHGWFCOSPTY");

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
    msg.setTimeStamp(0.655425699184);
    msg.setSource(63653U);
    msg.setSourceEntity(7U);
    msg.setDestination(22287U);
    msg.setDestinationEntity(140U);
    msg.state = 226U;
    msg.eta = 25443U;
    msg.info.assign("BEZHKJSWJPSLFLUPIWANUTTHXYFCNDRMCULGMCMSUAVMQUIYMMHAQOWOAVNZDWXNMGPVURGYTJJNYDPPNEJVXHURYKIVYKIBAPYGASMZTLKCFZXLGWBEDFIDTBHMBZOIW");

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
    msg.setTimeStamp(0.445353725932);
    msg.setSource(36905U);
    msg.setSourceEntity(60U);
    msg.setDestination(14424U);
    msg.setDestinationEntity(143U);
    msg.plan_ref = 2911746248U;
    msg.id.assign("FTMUZBLSLQQUPOJHDQAPUEXRRTYEXYKSRKNIIICMRWDMASJHPCKEPLKRDDOZYBXIXVVSEHUWUUTAKBBDZXOZSCNCQFWVAJJNNGSFYOGLNPGMXIYFXQVFGHLZTVSWLIBLMDQOMRFHMFQECRZYYGALJHSLPGAXFCTTTZMAPZOWKGJIIOTKEOYWPRJVSBBEUBEQTMHJQWNDCYRJVPBUNDCKQVPZWW");
    msg.memento.assign("EAKTHJCDAKICUPRSOTIUQKIHENXIAJLMOKGXQDGECQHGXPHSPNDCUARPICGPPSWLOTIZMOVNITTWHZAGYALRQFRSAZHQNJMVXPFESGWVLJMBYUFFGIJKDCDLFVZXMPWXNRQHVYWJEZUTUBYOYLYMNHBNZZSMFKQEVBIGKVHARJFTJFFSWNSHDEXOUYWDMESOJVBBKRYPMVFETSCRRBDOCAOQZXTXKKVXCWDGPULNQBU");
    msg.system = 46059U;
    msg.duration = 60822U;
    msg.speed = 0.928003218987;
    msg.speed_units = 177U;
    msg.x = 0.824728621432;
    msg.y = 0.177759958648;
    msg.z = 0.984697778076;
    msg.z_units = 142U;

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
    msg.setTimeStamp(0.659271689995);
    msg.setSource(20504U);
    msg.setSourceEntity(27U);
    msg.setDestination(3280U);
    msg.setDestinationEntity(173U);
    msg.plan_ref = 1163369505U;
    msg.id.assign("YXJDTYDKQPAEBTKISRGFCHIJFXIUFAYGRMQUJYJDMRJRIKBAPZHMAKEAXYCNWNFJMHNXKCOQYPVWMVXLRYRQHLEBEUQDEUDESHVNVWNOTKVRTBAPMEZLGVXIAAFECSSUOZONOUSRUTLFVGBLUQZMJKTIGFLSGICPMCLQDOWIBGMBBXCCJFCLK");
    msg.memento.assign("JITKIFJYZDSMEDGUVRUKGKVJFIDYUEJHNRUJGGHAWSGCSDNUCDMVOKSSMLELOZTLTKXFCNLFCXJIQYPZFEXWYIGBSHRBMVUJITSNGQBBOXARVBAEYLWXKIVKNHIPQGMCEHKCAFRPWRJLQPXOBBYZCHWODCGTGZALWXPEAWZUXOAPNJEKHNSQHNUKMTBFTQWNMLHIBSPREYVDJXXMASMUTZQWQOTPRFAQWYY");
    msg.system = 6697U;
    msg.duration = 59842U;
    msg.speed = 0.385053367067;
    msg.speed_units = 209U;
    msg.x = 0.505127963116;
    msg.y = 0.874942197663;
    msg.z = 0.718114736612;
    msg.z_units = 185U;

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
    msg.setTimeStamp(0.378830296196);
    msg.setSource(19599U);
    msg.setSourceEntity(100U);
    msg.setDestination(33946U);
    msg.setDestinationEntity(117U);
    msg.plan_ref = 4293724566U;
    msg.id.assign("FNZOYPRJKNNZLHGNOMIBNFXTCNGIIHNUEFAMVOODCFAHSWLEHAIY");
    msg.memento.assign("RUWKMERJJKVWAOLFKNTMHLELHCJTVMAQTSRUBQBTGVLMQTTLCRDRBZCLYMUABPXIYHGWUZECNFPORJNSMWWSXXKFZWBWUGYJLYKZFDTEAEIJPXPTDKIXMDULQOKWYKVNVJHFOBAQRAPQNMZAHDDONOBCYHHPYGSPTNKEICIZJFBCIQAJSXLCQISHUNGQEFVXCGESDIQSUSDSJFGOIXXFZKZWBOOZNEE");
    msg.system = 60281U;
    msg.duration = 21643U;
    msg.speed = 0.00565113008484;
    msg.speed_units = 160U;
    msg.x = 0.540528420775;
    msg.y = 0.121573412006;
    msg.z = 0.226019784532;
    msg.z_units = 27U;

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
    msg.setTimeStamp(0.425458713691);
    msg.setSource(21229U);
    msg.setSourceEntity(34U);
    msg.setDestination(51569U);
    msg.setDestinationEntity(198U);
    msg.plan_ref = 874026614U;
    msg.id.assign("JKDENYMTCILPBWIJSXCBZQXLEJFDXJMBZGZWPELYDGKRCVXQMINGMKNWJOBNYECG");
    msg.memento.assign("WQGIBEWINHRXNUPATDOHCUBTHJCGIABPPIREEKMOYECAQNWMZRZUEVMNFHMQNGARKBLTNWXOMXZNBKESUMGVSOPPKQPVCXDBHGBRBFLNUZWGXLWOHTICSPASJJJAQVYIFLMYIGQYUCHUQVDOHTYY");
    msg.lat = 0.203522359342;
    msg.lon = 0.333281364584;
    msg.speed = 0.619079278661;
    msg.speed_units = 206U;
    msg.duration = 62817U;
    msg.sys_a = 51553U;
    msg.sys_b = 23796U;
    msg.move_threshold = 0.171976132872;

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
    msg.setTimeStamp(0.903563799029);
    msg.setSource(34693U);
    msg.setSourceEntity(240U);
    msg.setDestination(35703U);
    msg.setDestinationEntity(158U);
    msg.plan_ref = 4122783422U;
    msg.id.assign("FXRMEORKLMRSDEYXAHEOUHXLUFXZAUHYQNQAPXRYANBNIWWBAZMNKNESJCVIDYXDOXMGZBMKQFJYGTSBQYQDUUVTLXCBKVNIIQGOFPVHISJBQFZNAUCWQCZLBMGKWFIMVSUSZBPNGJQVIDOPGJKJXUCYEAMCORRPFFLJKIDPSNHODCDYUBWIP");
    msg.memento.assign("PGCRMQFAQJNNERHWKJKTCLRDKQJUSEOSW");
    msg.lat = 0.15282847918;
    msg.lon = 0.042239372969;
    msg.speed = 0.386932592619;
    msg.speed_units = 102U;
    msg.duration = 26615U;
    msg.sys_a = 47771U;
    msg.sys_b = 2257U;
    msg.move_threshold = 0.764380193454;

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
    msg.setTimeStamp(0.233647258496);
    msg.setSource(16832U);
    msg.setSourceEntity(148U);
    msg.setDestination(22816U);
    msg.setDestinationEntity(118U);
    msg.plan_ref = 525877004U;
    msg.id.assign("GGVCSNVJWJYOAIUVCBJKNTJMGUFKREPPNGPCJBYDFNQJQRCVJPIUOFRBCFRFZODLRSSSWGCHQYOZAWKTDSBHRXGOXVARWUAEKHQTBLHYJUMQBMDWXHLS");
    msg.memento.assign("OTJZHPZHRUCWPUCWUYLSGUDRZNZEPIMVXZLWQXXTHPDIFTWWEOJFCQTTXCHVNUSHLGFLMJJVDLVAABSIKJ");
    msg.lat = 0.278433553883;
    msg.lon = 0.68627955247;
    msg.speed = 0.499948560996;
    msg.speed_units = 171U;
    msg.duration = 8417U;
    msg.sys_a = 1067U;
    msg.sys_b = 33668U;
    msg.move_threshold = 0.477896284618;

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
    msg.setTimeStamp(0.114907366252);
    msg.setSource(53476U);
    msg.setSourceEntity(23U);
    msg.setDestination(20512U);
    msg.setDestinationEntity(240U);
    msg.plan_ref = 2395912648U;
    msg.id.assign("WLHRMACHHKDIYOKYIIFVMEYTWDTWIZFXXAWELMHUHDUFLEGGQEGWPALSWALRDAKACLBLJBCQSCIWDPTMGEJUKBOHHPJRVMKTQUEJZBOFXIRKIMJCZNMUGVUAUPAUNVYOVTOLNGJZVTRXDPB");
    msg.memento.assign("GHJVQLQFVYYDWJRMNIU");
    msg.lat = 0.762096746219;
    msg.lon = 0.00178860989589;
    msg.z = 0.129285238918;
    msg.z_units = 138U;
    msg.speed = 0.234814285528;
    msg.speed_units = 93U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.564914706822;
    tmp_msg_0.lon = 0.299574498465;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CALNGAMDIXZDSUEFRIFOXDTTGEBGZWYSFNDXSOWTWDXUDOWEYMGKJUPPYCQ");

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
    msg.setTimeStamp(0.535071328785);
    msg.setSource(56531U);
    msg.setSourceEntity(146U);
    msg.setDestination(61061U);
    msg.setDestinationEntity(165U);
    msg.plan_ref = 3719652812U;
    msg.id.assign("TJGPHWJZKQSUFEFMARICJMFSWYTARIWXASOVBDOLNABDCEFKMMKGRHNTUYRPVXSTTJADLQKGSECLPWSTCRERWDJABECKVNYUULYXDBAAUQOTOXEQIZYTVOYILSMNZQVFOLDNJMZPPL");
    msg.memento.assign("VUWVZNVVBARWEAHNERFLNPWFMNZCCUZHFKTOWXSIJQPWLKXQJBIIOJGFWZMNADJHETBDOADYEYDCFUOORBBBMSSFLAIMTCWVLHGRXMLDYUKISUSMXTCCSEQVVBSPXASYWGXROUNCAYHTGBRI");
    msg.lat = 0.80412833834;
    msg.lon = 0.212670929398;
    msg.z = 0.0559743678231;
    msg.z_units = 197U;
    msg.speed = 0.49956663098;
    msg.speed_units = 129U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.481771224965;
    tmp_msg_0.lon = 0.364792095367;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YDYKXTQURMCRGTTZBQWGUPGFEZMJDOIPZQXPQTTAGVFYFAPWLMHBHCJXYUSMVIFDLOREETKBN");

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
    msg.setTimeStamp(0.335496644521);
    msg.setSource(19730U);
    msg.setSourceEntity(58U);
    msg.setDestination(20113U);
    msg.setDestinationEntity(22U);
    msg.plan_ref = 1566142168U;
    msg.id.assign("FKURYXTQOMIXKKHRBJZUULDBFFRMHNTOOZQGNRLFZPCWTLTOGFOQEJJWJBXBUIAYBIABAHDDZWPYONJMROPWFJNZJPDHAXUKCFEWXDVPFLVDGIVSSURUUKGYJDNAIKPZXEBPXGYQVPSAWZEMESIPWLBKJXTYWCBRCQSMEKVSCILGKIYTDSASPQHSURCCLHMWUWCHLKZYQHDMMHLONBHOLEGYZXA");
    msg.memento.assign("XZKNUZAGJWVURIKHMSZYDGWLXIYHWRGIZWYWKFILZCBWJIL");
    msg.lat = 0.380965830579;
    msg.lon = 0.266489573453;
    msg.z = 0.320601981583;
    msg.z_units = 47U;
    msg.speed = 0.840567765167;
    msg.speed_units = 83U;
    msg.custom.assign("WKDMXVQTUHJAXKVLISJYIKVYOURNDFAMBRTDSZDMMQTJTWIMHUCXTAYFFXKRDULCKGESPUOFPHJNSHQYDEQBWNWYQDJVPFSOGJBUNANLGGVZYPPCHRHHONLTZYBRJQBNZGXKRKQOLARYMGIPNEQOFCVGUSPEWSBXFYNAFXOEJWGHNLKZGCLCVE");

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
    msg.setTimeStamp(0.246163712086);
    msg.setSource(28486U);
    msg.setSourceEntity(156U);
    msg.setDestination(15141U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.49679226837;
    msg.lon = 0.78606832389;

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
    msg.setTimeStamp(0.22688408889);
    msg.setSource(49828U);
    msg.setSourceEntity(103U);
    msg.setDestination(56966U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.838873299051;
    msg.lon = 0.125463253162;

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
    msg.setTimeStamp(0.658752473938);
    msg.setSource(7960U);
    msg.setSourceEntity(196U);
    msg.setDestination(41816U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.536955096416;
    msg.lon = 0.833082509395;

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
    msg.setTimeStamp(0.662181461411);
    msg.setSource(12921U);
    msg.setSourceEntity(254U);
    msg.setDestination(2629U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 3165173617U;
    msg.id.assign("GKZMYEYSLZFYXWXXOBUJSLAGACIPOZELNFZJCOAQQPPJCCVFUVEIVKTHXJFVJTMMEDBZRCFITWZHHGDNRGQWHRHKKODBTPCOIDSMWZBKJAFJOUSYTXYNGAZJPAYKVDXMSUFVUXBOQPWGKNWMKC");
    msg.memento.assign("MUBVBJEZUSVSYUSYSFJTZDKNBDBXHEWBRLPPETGJEENPTZSEPGNMOHIXOQCZQVJUSQWPYAQOPJDWOXBIARHPTRNFQGYAIFHJHWBLYIFKUMFCTCMADJRNWVAIPWVQVYFOCWKLIFBKDLYULVZBKNXRHYRAGCOLHFCVWISXQUXMFDOGJOQTBLLJOEZUMGCCDAZXRWPGNAOXUSWMNCTLKXUHNZHDRGPK");
    msg.timeout = 34775U;
    msg.lat = 0.315527382555;
    msg.lon = 0.545921510438;
    msg.z = 0.829207342262;
    msg.z_units = 188U;
    msg.pitch = 0.281715190287;
    msg.amplitude = 0.854292151131;
    msg.duration = 3898U;
    msg.speed = 0.451098470887;
    msg.speed_units = 84U;
    msg.radius = 0.406506120021;
    msg.direction = 17U;
    msg.custom.assign("FBEGLHCBHUVREDQEWPXTOCUXHFGLRWFSKKDLGAXISZOLJJHDGKHEMDLOCYIAPUCCOPJDYQQBRQMNWZXNLIPXRURWUEEDTMWDHYMNYFDQOKJ");

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
    msg.setTimeStamp(0.436708387291);
    msg.setSource(50405U);
    msg.setSourceEntity(211U);
    msg.setDestination(34253U);
    msg.setDestinationEntity(195U);
    msg.plan_ref = 2650736518U;
    msg.id.assign("YRWLURMFXYZLLSGBQYXCBCJNJFBIFGGATIUKRSCDMQXFSECDGTCSBXYTZDUMYTWWAEFNVVRWYNZMUEDEPWKNWBVTDIHONZTSYHVPVJPJEJONKCEXFAPRKUBWGOAPXDZBUCSGPIHMIPMIJLECKQAMTMKJQXLQUKLZAYROQNLIHPJEOLVZQTMUHZZADXLAVHAGJHCR");
    msg.memento.assign("YRZKAMSHQIXPHNLQQZVWCLOAGBARTPAMSIDGECSDBBTJSXZKCJCEIYEMAWEKFSQJKUNCDEYGTRVNEKJPBSKBPNNUZUVOCEAODDUVOHIVLFLXWPTXYPHZPUYNEGXUOWMROKIEDFPCFYBROMFWRRMHZIBRHYTVSCFTGJYWQLHCDJNHDWZYSQBLVUQIWKJYSTUMLXGMDAOJJALOGTBJNXXBMKEFLPN");
    msg.timeout = 7465U;
    msg.lat = 0.269604227862;
    msg.lon = 0.271420049267;
    msg.z = 0.2319616356;
    msg.z_units = 165U;
    msg.pitch = 0.391231666064;
    msg.amplitude = 0.906262317258;
    msg.duration = 14125U;
    msg.speed = 0.837357639608;
    msg.speed_units = 77U;
    msg.radius = 0.418936854961;
    msg.direction = 70U;
    msg.custom.assign("ULELORXLGSLTQVPOTRGKEZAUQBXJVSCHFWNGMAQWFA");

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
    msg.setTimeStamp(0.757474089844);
    msg.setSource(60364U);
    msg.setSourceEntity(161U);
    msg.setDestination(14407U);
    msg.setDestinationEntity(76U);
    msg.plan_ref = 3986459378U;
    msg.id.assign("JQOIQTIXJDEYCTXEBVIJUZPPWZYSMNIHCWKARWIVGJCMUPOSLHDFGOTPMRVAEKZDYUXQMNIZEEZPTMBSYWWENRNJWANDOGOVRWEKSRFUGBZBGTYIZFRDGTTBNCLBQQOFXWCDCRMU");
    msg.memento.assign("QAYCRAIWCNAZTOOVFYVFMHPYIXSRTHGQOVZZYAXJNUWCBLDGSWBBULERTICBXZBJ");
    msg.timeout = 8777U;
    msg.lat = 0.0622825774575;
    msg.lon = 0.706301368075;
    msg.z = 0.725660525681;
    msg.z_units = 200U;
    msg.pitch = 0.761755791358;
    msg.amplitude = 0.0173492602625;
    msg.duration = 34732U;
    msg.speed = 0.466741034434;
    msg.speed_units = 218U;
    msg.radius = 0.626134687538;
    msg.direction = 189U;
    msg.custom.assign("RSLODZBOAAXYMMOZFQXASSBIUJCIVSJOBOXGJWZHVPNMLGJTAPHHNLQJTKVESHJRJIELOTAETUBIUECNGFCBXKNFJXIVAZGPVHDJUMDWNKTPFPTVOCKOFBAUKCYWBSRCHKPYHYTZXXFULQPAQPVIQXOEKIGMZIUYMTZYEVLRRHJLXWWUGHERAZFQQRQWWHMZSIKMTSSDKCFONRGUQYEBDZCNLLRGPBPLIFGQGTN");

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
    msg.setTimeStamp(0.405508348515);
    msg.setSource(54991U);
    msg.setSourceEntity(209U);
    msg.setDestination(9565U);
    msg.setDestinationEntity(134U);
    msg.formation_name.assign("INFCFUZOQOXYYIWLYELJBWJXDCQZHNSTWOPNKGOWYFJASGYELTVTDFZABCMTWALSJYEBVGTMQHYRH");
    msg.reference_frame = 158U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35818U;
    tmp_msg_0.off_x = 0.547582631264;
    tmp_msg_0.off_y = 0.280574325341;
    tmp_msg_0.off_z = 0.70631173584;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VAIZQNHHCQHPXEAOOLXOFBSZNMPSZ");

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
    msg.setTimeStamp(0.408221190164);
    msg.setSource(23463U);
    msg.setSourceEntity(13U);
    msg.setDestination(50432U);
    msg.setDestinationEntity(253U);
    msg.formation_name.assign("WETWXYCUXSBXPKMPNKZUXYFOBRGKQFHGORRYCCFIHKNLAUGWIUTJEDGEGSAMUMUWFYYXUQHVRGXCXNYZDVQZBLLKNMSIRFNLCLCOSRTXLAFMVURDQEBATTMLILEMNXBBQBZPHCOJNIQ");
    msg.reference_frame = 209U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 61363U;
    tmp_msg_0.off_x = 0.620156834053;
    tmp_msg_0.off_y = 0.266379945692;
    tmp_msg_0.off_z = 0.49482407047;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EPKXSXNELVZHLUDPETMATAUUSYCXJOXOLJPPKFNPBFYGKXDHBIIEXITDBOIVELEUVCPSBVFDCMMQFPGCZMNAJZZUJHZHNROZWWXUCOEFGODBHULKBFVRMNDVZYAOPDKIEANPFLYHOQTCDFMIWCFSHZK");

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
    msg.setTimeStamp(0.930341084148);
    msg.setSource(39948U);
    msg.setSourceEntity(248U);
    msg.setDestination(5417U);
    msg.setDestinationEntity(17U);
    msg.formation_name.assign("SQSXNIWCFTARLZPMTHAPVETNGUHCABGPSEEGDWMFYQKQXVNIJDOKRNFOBCXZEZHRDHLZBJFCONRJKNJULRQUIKCHWUHYYKIH");
    msg.reference_frame = 135U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59258U;
    tmp_msg_0.off_x = 0.929639301172;
    tmp_msg_0.off_y = 0.182976196795;
    tmp_msg_0.off_z = 0.305052052024;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BWEZKJTHCKAYENTRPFZNQHKDCNIOEKRIZSRKYKSPUKRTWRJHJWZOLBJMFHSQXOPFETUMSBFJDGGIXEBGSYAYZEXRIWUUCZVXQPCIFOVVEINBFWXUGRZTHVYRCDCEQMTZHJVSNEJTXQSQAXDNLPILKWJXUMPSUNDKCVLSMOHIJOXPMGOWLWFQHTBRBDHYWAPCLLPOSFTFVQMLJYUMHANLCAAQDWYMVMIQAYGLX");

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
    msg.setTimeStamp(0.543339411152);
    msg.setSource(12489U);
    msg.setSourceEntity(87U);
    msg.setDestination(29397U);
    msg.setDestinationEntity(109U);
    msg.plan_ref = 574503168U;
    msg.id.assign("XBAPATPJKY");
    msg.memento.assign("YWUYRCUBZLHAKNGBOEFHQAMZGSVENLVKNVOPINQWHJRFXQFVXBAPENDRJAWZZGMBUSVLSDPKVADWPCKXMZIOSSCLICDTYYNORPXBKZKOXLFXQHGMTFBDYBEJGDMWTMUFEIPLPIGPHRQWIMPHTFGJZSDGDOI");
    msg.group_name.assign("GYFODGHADBLBBPKQUHSUSGSIZFUXTGCVOFELZKBNXRRIVNYAFIUH");
    msg.formation_name.assign("DJKRSYJFWCGTTSUWZEPJWTDKRBPNOQESDOQQECNQLFGXIBVULHHCPOVVLCYXRZAZJXOECUXMFIUQLIYHBGALGOKPCGMVZLRHSKAHXZFIDDXDEGPHPTIZGBNASPYMKVUWFSIZSBPMMWTQFEUXXCNFRUKZR");
    msg.plan_id.assign("QOVPJLZWWRKSBJNYHTJPLAYFHZGWVCAPSJUUDWVPCWKJVSJFGSXOESQRFHQLDHQZOZTBHLRDLWLLXRVCMCEMIEYMMJKXGTWZINWTBRWBGEBYFZQMIPCLKMZURLAMOPUTUTQNAFMKZKYIOCKSJCQHEKOYIGRNXLNXXXZEPF");
    msg.description.assign("CHJZRDEHHHXJZOIOJWQAPUVWSBCOJAZICPMYBPVUVFTCYDEBQDCUGUKYSSVAUOYJFPWYPJMZERXBKWRHNWEASBZXONSGIKDNWCLQIACLKYWJPJEVVZPFKTZVMFIFNZ");
    msg.leader_speed = 0.478287110766;
    msg.leader_bank_lim = 0.61965764133;
    msg.pos_sim_err_lim = 0.983691239792;
    msg.pos_sim_err_wrn = 0.751343972933;
    msg.pos_sim_err_timeout = 26549U;
    msg.converg_max = 0.357375272364;
    msg.converg_timeout = 36957U;
    msg.comms_timeout = 706U;
    msg.turb_lim = 0.586875867953;
    msg.custom.assign("LMFFNKWOQOQYBKWXGDZQBUUIDDCEMSXRUMNDVVLXOVRROBPIMQSHSPBQCUZAMCCTEMIYEWJYKJZTFFNHEXRGRFIZHNCBIDTKISJVAFXQESAU");

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
    msg.setTimeStamp(0.906728645564);
    msg.setSource(5394U);
    msg.setSourceEntity(250U);
    msg.setDestination(11636U);
    msg.setDestinationEntity(35U);
    msg.plan_ref = 4175572848U;
    msg.id.assign("JVSRQCGRUMFITMXNULGVHLZYYVTDKUPVIEBWYBGRGXXJAAFJLSDFKLDZPKVGHQMYETEDHRFQVEEFUZYSCJOLAXBSOARFTNXJPLAVAGPYCFGBXTCAPMOGLIBJWQWCXEKSIBXMPETORWXPK");
    msg.memento.assign("IXBIBMUGUACBSMWVCGPZYSMEBSEAKKGLDQTSVNUZNMJWTRTDXKAFYCXOEILVHGIZNWHQDUUPPQDCEIAYHVNURROWIJIBWDEOENCCYJTFNLLGUDMDTEFYAJGEHWKQJVDXKULOCAZEUZNOZSWSXBLVPSKJOYJKZXXRKHQAKGIZMSJOIWXZI");
    msg.group_name.assign("POJKIFHCBURQPIZQXRWQRITPCDGIDVVSYFWRZPROCXKITNYYWOXJHGIEHBNLWBUPZCFLQGTOZATLHVAUILOQGKQKAROVVNMGJMSJTMXTEXAMOEPSJGSFPZZUBEYCBS");
    msg.formation_name.assign("TTXCDPHSCZIBJNGBUMZZZOYJVPJLRDAUALLXBDMQZDWKAZUNZYHLUDIETQLZVLEQHPFSWKRRJAHIMNNKPRKFHGIVXSEDUOJCMBFMAPOWNXRMUXLKLILFTTTCOQGABVXGNIBXWYFAEHXYDIKSQNZBTYJSDFWCEGHEMUCKVFYMVYPKWWRJMHNIUBONHKDTYPEUQKVZ");
    msg.plan_id.assign("RRAKHGHPQYRKSBCJLRCCAVUZOMREALRBWOVMBDUJCKWQXNZHVJAWCHDNGJQPVTOXUPJYNXFYAXTLLMMYNKNXHZVEGKFMKIMVDLANGN");
    msg.description.assign("UIGTCGMUNXVRIRQDCWQZBZZUGGAGWPMNAOFZBXERHNSADLBYULEEEOCGSLCHAOVVMLBWQQSAHGYEQNAKUNOJVQCRDFDGRLZEXPDOOPXQOOOKMFUSANECKW");
    msg.leader_speed = 0.816887354202;
    msg.leader_bank_lim = 0.694966758797;
    msg.pos_sim_err_lim = 0.849089405925;
    msg.pos_sim_err_wrn = 0.67676096024;
    msg.pos_sim_err_timeout = 63974U;
    msg.converg_max = 0.0152858182762;
    msg.converg_timeout = 30022U;
    msg.comms_timeout = 55770U;
    msg.turb_lim = 0.0730957945205;
    msg.custom.assign("XBNTAGONPIFEHZKXHGIFRKTFSCQQZAFYOMAEVQVUHDIVGHLTBZFAJVVNBGWRXAGXXTLLVJXRNAPRNNJKPKSWNJTOPCNRSLSYVEKAWWDHEVQQFHFGVISXETMCPQYWAVFZHWFUWTBSEKMHRMOJBICKROUTUZEZMYBGGOMILWODDMJDQCOZYFSDKPEGUO");

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
    msg.setTimeStamp(0.565810389876);
    msg.setSource(47581U);
    msg.setSourceEntity(207U);
    msg.setDestination(59787U);
    msg.setDestinationEntity(114U);
    msg.plan_ref = 3220821579U;
    msg.id.assign("AKNSXKQJTUCELRXUQILKGMABVTWDXMRDYGEIWNZVEFAUSUTAVNDHXCACXHSFYYPCPZTSTSSYPAJKXAFVKOWLYRGPOWEDHGLOPDBQIBJIXZNHDPGVO");
    msg.memento.assign("KTCRUQUCXCPPXNTBHBIHYFEOPXELOFPWJSXINAWETWKMJMZCQNPFOFWRKHZRZRGJTDMVQPJNUGOZGULOJHKAATDBRIKPFAEUWTCPSDNTTZGRZFGEZKIBJOHWLRPCJFTYYDVBVMQADMGMMAHMNCGAMISALQOUBWNEJDSVSYJJCWQSXYIQDLEXULTCVGVBIFKQHZNXBRBKXVKYBZFFESYSCIQPLDHERVDHLSAVIWMYLOQSUGZUVKIXO");
    msg.group_name.assign("LBWAQRKEFITSDNJZIPQAGXXIWHFWYJHNOMKDFHUUBVQGLZYEFGPCZJMQNLPFLKRFXGNVEQKNXDQQVHOZSPYOHHTDRBZJTZFPBVSBKZYCXYWYWMJOCEDEYMOSYFSTRIRSUTMYIACAIIMAJDJVEMNWCQLTVQUSKZDHBLRUUCXEVAPOLMPGXPCBGWGLQKHFBUKGHORJHEOJAMCSRUNRXOFO");
    msg.formation_name.assign("RWXVVTDXVZHOZPJQUIRGSHJLXBOPAJVNNDNJUEOGZXZMRXYYJVAQWYPBPRKEJMFNUDAWTKRKBSIMHMUWICUTBVLCQDBQBEVDGHKSYGELLOEESCDNLPBSFPKZXMJBUTDGAHBSIWOUYULKMLYZCASJOHQXGOE");
    msg.plan_id.assign("QRGMZAPZOWOAPCBETKYZPUXLEIWSGALUZPKOXNU");
    msg.description.assign("WHXYUCZHYHAIGEVZWDKTENWMOSJLBRHXPTNKVZUGFHJRAQCQKLRYNPXOYXDSUEULFPWIDMCFETOYSHASDXEADWTXSJKCOCGSTNGHYOIIUQBNUQYOZCTKRTLRFVKKJPVAQCEIRFUWA");
    msg.leader_speed = 0.870336383606;
    msg.leader_bank_lim = 0.920372160746;
    msg.pos_sim_err_lim = 0.119777526971;
    msg.pos_sim_err_wrn = 0.839802048633;
    msg.pos_sim_err_timeout = 27902U;
    msg.converg_max = 0.786517852962;
    msg.converg_timeout = 7779U;
    msg.comms_timeout = 17571U;
    msg.turb_lim = 0.663554231429;
    msg.custom.assign("OPHVILVXUNCWDKWOFTMTNMKTLHWJSVJGDKPSQIEGWOCDGWXFVONJBBQFUXTPNATWDDJADAEGZEBSQYEGZWQIUSCQMMMTIBXMNOO");

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
    msg.setTimeStamp(0.810405523467);
    msg.setSource(46420U);
    msg.setSourceEntity(107U);
    msg.setDestination(53797U);
    msg.setDestinationEntity(200U);
    msg.plan_ref = 492009771U;
    msg.id.assign("HMAGRVVBYTKMOGPWFCDZHWGMENPSIPJDQUNGGSVKKJSPCHAOYITNPEULVSFZQIGILKJALWHYYUEWMBSITOUNYYGYUVK");
    msg.memento.assign("PDCVDPQXSWHOWQBMUEMK");
    msg.control_src = 49184U;
    msg.control_ent = 167U;
    msg.timeout = 0.12099643938;
    msg.loiter_radius = 0.231684461698;
    msg.altitude_interval = 0.327214167298;

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
    msg.setTimeStamp(0.340734074193);
    msg.setSource(50968U);
    msg.setSourceEntity(16U);
    msg.setDestination(51097U);
    msg.setDestinationEntity(84U);
    msg.plan_ref = 1807758709U;
    msg.id.assign("OWJJUWNXPBLKLCKSDJBUJFLZTUTI");
    msg.memento.assign("QILSCRQVAQVUEMKXQPKIUYWJHKYVXLYXFAHKJOGLJQTJWLKWFGCDUSGOVDROAUFREBOYXXHSMSRHFZBRRPGAFMNKIEWUNOZYRYBLTVEEIHCNPCDMJDBTTGMGPPPCQIXTVJESTNTUICZNSSIVOQTRHMLYZNAOGDSNBCATEDUDONRIQFJLXFHVXIAELCJICAODKSWKQTBXVWPRFEPLYMZHCDEKU");
    msg.control_src = 58424U;
    msg.control_ent = 216U;
    msg.timeout = 0.0915749486961;
    msg.loiter_radius = 0.77379911417;
    msg.altitude_interval = 0.0839995669924;

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
    msg.setTimeStamp(0.603257330464);
    msg.setSource(20233U);
    msg.setSourceEntity(185U);
    msg.setDestination(28034U);
    msg.setDestinationEntity(231U);
    msg.plan_ref = 2385222257U;
    msg.id.assign("QVXOUODYQIFRGWIFLMGNEJZAYBJZGMRJSMWFKERBWEYAWSHLUSPJFPEEIJOHNPAJSCBLVAULFYHCXSHYPVMOGYBVIZBXTQKVOULDZPZQJLCDWLBLOXYIAVDSRDCNNRZBHLQXSOAKUFBKQD");
    msg.memento.assign("YSTNAZCVVXRLCJVKWUJZUQEJINULYFGLNFNSIMGDTESFHNHIVOICC");
    msg.control_src = 37087U;
    msg.control_ent = 80U;
    msg.timeout = 0.0370299807419;
    msg.loiter_radius = 0.869455658791;
    msg.altitude_interval = 0.153269786705;

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
    msg.setTimeStamp(0.488924316692);
    msg.setSource(14414U);
    msg.setSourceEntity(163U);
    msg.setDestination(52435U);
    msg.setDestinationEntity(9U);
    msg.flags = 130U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.645367819717;
    tmp_msg_0.speed_units = 34U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.974832227464;
    tmp_msg_1.z_units = 185U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.523961872393;
    msg.lon = 0.312575411225;
    msg.radius = 0.315182750065;

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
    msg.setTimeStamp(0.111621748173);
    msg.setSource(33767U);
    msg.setSourceEntity(33U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(216U);
    msg.flags = 123U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.832557263899;
    tmp_msg_0.speed_units = 70U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.363530304502;
    tmp_msg_1.z_units = 106U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.757996039121;
    msg.lon = 0.921454493694;
    msg.radius = 0.457960718716;

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
    msg.setTimeStamp(0.164529087051);
    msg.setSource(44857U);
    msg.setSourceEntity(116U);
    msg.setDestination(21764U);
    msg.setDestinationEntity(239U);
    msg.flags = 59U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.287322167458;
    tmp_msg_0.speed_units = 59U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.392709462797;
    tmp_msg_1.z_units = 129U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0473643374256;
    msg.lon = 0.0616278302315;
    msg.radius = 0.305998146877;

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
    msg.setTimeStamp(0.761906472189);
    msg.setSource(64966U);
    msg.setSourceEntity(80U);
    msg.setDestination(12826U);
    msg.setDestinationEntity(87U);
    msg.control_src = 3724U;
    msg.control_ent = 173U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 108U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.756816199533;
    tmp_tmp_msg_0_0.speed_units = 214U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.633558987915;
    tmp_tmp_msg_0_1.z_units = 236U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.557226553777;
    tmp_msg_0.lon = 0.379270517874;
    tmp_msg_0.radius = 0.540899954887;
    msg.reference.set(tmp_msg_0);
    msg.state = 212U;
    msg.proximity = 26U;

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
    msg.setTimeStamp(0.0759512331843);
    msg.setSource(31310U);
    msg.setSourceEntity(23U);
    msg.setDestination(65241U);
    msg.setDestinationEntity(192U);
    msg.control_src = 61522U;
    msg.control_ent = 133U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 123U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.010074867662;
    tmp_tmp_msg_0_0.speed_units = 27U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.712340350913;
    tmp_tmp_msg_0_1.z_units = 56U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.793024795671;
    tmp_msg_0.lon = 0.261321234954;
    tmp_msg_0.radius = 0.441111803636;
    msg.reference.set(tmp_msg_0);
    msg.state = 100U;
    msg.proximity = 196U;

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
    msg.setTimeStamp(0.780193949626);
    msg.setSource(61180U);
    msg.setSourceEntity(56U);
    msg.setDestination(13254U);
    msg.setDestinationEntity(11U);
    msg.control_src = 13643U;
    msg.control_ent = 112U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 199U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0349256319901;
    tmp_tmp_msg_0_0.speed_units = 151U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.655914863012;
    tmp_tmp_msg_0_1.z_units = 69U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.829932602978;
    tmp_msg_0.lon = 0.760306107956;
    tmp_msg_0.radius = 0.293138375227;
    msg.reference.set(tmp_msg_0);
    msg.state = 117U;
    msg.proximity = 182U;

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
    msg.setTimeStamp(0.902624093877);
    msg.setSource(63471U);
    msg.setSourceEntity(62U);
    msg.setDestination(44553U);
    msg.setDestinationEntity(68U);
    msg.ax_cmd = 0.372038169548;
    msg.ay_cmd = 0.0825227135381;
    msg.az_cmd = 0.0566761249865;
    msg.ax_des = 0.00303978713758;
    msg.ay_des = 0.655926337906;
    msg.az_des = 0.52290502781;
    msg.virt_err_x = 0.682666747404;
    msg.virt_err_y = 0.135737505562;
    msg.virt_err_z = 0.33713325103;
    msg.surf_fdbk_x = 0.619099306372;
    msg.surf_fdbk_y = 0.588603310587;
    msg.surf_fdbk_z = 0.35345054793;
    msg.surf_unkn_x = 0.807166839595;
    msg.surf_unkn_y = 0.112391111211;
    msg.surf_unkn_z = 0.870452973107;
    msg.ss_x = 0.815567265879;
    msg.ss_y = 0.754124981878;
    msg.ss_z = 0.58464672243;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EYPQXTJSOBXDYVRCYNFTXUFLKTBTUGMPUAKJSYBOFEBNMADIAYILPJVJHKUUMKGPFBTIZQFKODYSAZHAMZSYQBKLMSILWLGDCNTCLMNQNNTLEPORURYEQBXOCEHFWHDHIWAMPYCWLIGAQWRVPQGSKMWISZXEDWVNSNNJJXKYZSKOLFGPROAQFHBGRHUFSWJJUPWDOCAGXCZEIGUHGRRBWV");
    tmp_msg_0.dist = 0.283264962699;
    tmp_msg_0.err = 0.828858953402;
    tmp_msg_0.ctrl_imp = 0.926306091674;
    tmp_msg_0.rel_dir_x = 0.320144808225;
    tmp_msg_0.rel_dir_y = 0.654621062587;
    tmp_msg_0.rel_dir_z = 0.629696996429;
    tmp_msg_0.err_x = 0.933229395693;
    tmp_msg_0.err_y = 0.0968565824989;
    tmp_msg_0.err_z = 0.89948100248;
    tmp_msg_0.rf_err_x = 0.291009652635;
    tmp_msg_0.rf_err_y = 0.77400692236;
    tmp_msg_0.rf_err_z = 0.118229421875;
    tmp_msg_0.rf_err_vx = 0.685685131943;
    tmp_msg_0.rf_err_vy = 0.963761490122;
    tmp_msg_0.rf_err_vz = 0.121770427372;
    tmp_msg_0.ss_x = 0.0519692893976;
    tmp_msg_0.ss_y = 0.439826820415;
    tmp_msg_0.ss_z = 0.310785178998;
    tmp_msg_0.virt_err_x = 0.299700450999;
    tmp_msg_0.virt_err_y = 0.209593264416;
    tmp_msg_0.virt_err_z = 0.0535965846678;
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
    msg.setTimeStamp(0.632449923653);
    msg.setSource(27219U);
    msg.setSourceEntity(112U);
    msg.setDestination(63170U);
    msg.setDestinationEntity(197U);
    msg.ax_cmd = 0.478103260945;
    msg.ay_cmd = 0.353638173239;
    msg.az_cmd = 0.969221697152;
    msg.ax_des = 0.27733883567;
    msg.ay_des = 0.710739598105;
    msg.az_des = 0.221253893743;
    msg.virt_err_x = 0.94074805667;
    msg.virt_err_y = 0.140781725186;
    msg.virt_err_z = 0.964801179377;
    msg.surf_fdbk_x = 0.12003086145;
    msg.surf_fdbk_y = 0.0252535230615;
    msg.surf_fdbk_z = 0.438737392553;
    msg.surf_unkn_x = 0.717635184264;
    msg.surf_unkn_y = 0.772516776066;
    msg.surf_unkn_z = 0.241909922315;
    msg.ss_x = 0.909986903568;
    msg.ss_y = 0.644871264728;
    msg.ss_z = 0.167440654536;

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
    msg.setTimeStamp(0.551487334677);
    msg.setSource(14453U);
    msg.setSourceEntity(113U);
    msg.setDestination(56824U);
    msg.setDestinationEntity(85U);
    msg.ax_cmd = 0.539747225606;
    msg.ay_cmd = 0.534129043212;
    msg.az_cmd = 0.424250625036;
    msg.ax_des = 0.869009713241;
    msg.ay_des = 0.217012960344;
    msg.az_des = 0.0991667596521;
    msg.virt_err_x = 0.581477377938;
    msg.virt_err_y = 0.248957429147;
    msg.virt_err_z = 0.0145495881926;
    msg.surf_fdbk_x = 0.68169600705;
    msg.surf_fdbk_y = 0.328356479515;
    msg.surf_fdbk_z = 0.81109087033;
    msg.surf_unkn_x = 0.364160775965;
    msg.surf_unkn_y = 0.0715499040489;
    msg.surf_unkn_z = 0.926492654474;
    msg.ss_x = 0.362920768108;
    msg.ss_y = 0.812514345277;
    msg.ss_z = 0.331373909737;

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
    msg.setTimeStamp(0.951236550892);
    msg.setSource(6754U);
    msg.setSourceEntity(74U);
    msg.setDestination(6703U);
    msg.setDestinationEntity(89U);
    msg.s_id.assign("ELVUJWMSBNTEHFFGESXOLPHFQXVALPXGTXQBKAYUMCHIKJDTZQAIJTNENNDHZJ");
    msg.dist = 0.302199588457;
    msg.err = 0.502054098099;
    msg.ctrl_imp = 0.947010679229;
    msg.rel_dir_x = 0.298576598389;
    msg.rel_dir_y = 0.521095668186;
    msg.rel_dir_z = 0.547899828643;
    msg.err_x = 0.825932612356;
    msg.err_y = 0.85905399521;
    msg.err_z = 0.876667811597;
    msg.rf_err_x = 0.414672165744;
    msg.rf_err_y = 0.805094992478;
    msg.rf_err_z = 0.0451048986571;
    msg.rf_err_vx = 0.562458609041;
    msg.rf_err_vy = 0.409215432448;
    msg.rf_err_vz = 0.000624884129268;
    msg.ss_x = 0.514496572966;
    msg.ss_y = 0.679094582662;
    msg.ss_z = 0.298594316393;
    msg.virt_err_x = 0.812965692084;
    msg.virt_err_y = 0.540676131121;
    msg.virt_err_z = 0.972648139663;

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
    msg.setTimeStamp(0.0749248418547);
    msg.setSource(41519U);
    msg.setSourceEntity(38U);
    msg.setDestination(54366U);
    msg.setDestinationEntity(68U);
    msg.s_id.assign("TFLCWCJVADJDKSPZMWBFIJUYLTNAZYNROTMCMSEOBVICVZPFSXZDUUXSDTMHIVZXRBKWSJWGOPPLVYWCKNLWSOHFYEFEBXLIGSNTKJOPDQEPDMGCLAQ");
    msg.dist = 0.705444467749;
    msg.err = 0.165747739729;
    msg.ctrl_imp = 0.765775185395;
    msg.rel_dir_x = 0.583974637961;
    msg.rel_dir_y = 0.167069446737;
    msg.rel_dir_z = 0.650367994491;
    msg.err_x = 0.866047778141;
    msg.err_y = 0.350851551358;
    msg.err_z = 0.444341812166;
    msg.rf_err_x = 0.115573596307;
    msg.rf_err_y = 0.95059108805;
    msg.rf_err_z = 0.836390794515;
    msg.rf_err_vx = 0.386669830954;
    msg.rf_err_vy = 0.222756098996;
    msg.rf_err_vz = 0.833728761918;
    msg.ss_x = 0.741368606108;
    msg.ss_y = 0.56488075146;
    msg.ss_z = 0.676826916007;
    msg.virt_err_x = 0.871690386065;
    msg.virt_err_y = 0.467784308211;
    msg.virt_err_z = 0.964999022627;

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
    msg.setTimeStamp(0.0420776209812);
    msg.setSource(63132U);
    msg.setSourceEntity(201U);
    msg.setDestination(9614U);
    msg.setDestinationEntity(69U);
    msg.s_id.assign("MEHEGUONXTYOARQJUCASTAQVNRMCCKTCEDEXQVWFEDFRMPWNLQJIFKBPBZAWGJGEYVPVTDVRKIEZPYLKJFHWIKFTSOSFSQUWPJRTGJXUWWWZXOWYSGNZAGNZDXHZIQBOPXNITVOOGIKFBZGKOJDWAHMAHQNEGBRBELBLCRDHQDHZPYTUYKKAYJLCNLZFIESPXBZFCGYBYUATQVHCAMBHVCULFUSPRSQLNKXSMJYJR");
    msg.dist = 0.715682717472;
    msg.err = 0.0717148332548;
    msg.ctrl_imp = 0.497237704228;
    msg.rel_dir_x = 0.154657850985;
    msg.rel_dir_y = 0.598768933098;
    msg.rel_dir_z = 0.125464315038;
    msg.err_x = 0.0245079383821;
    msg.err_y = 0.133430469559;
    msg.err_z = 0.0418305918859;
    msg.rf_err_x = 0.0524951035988;
    msg.rf_err_y = 0.613670694868;
    msg.rf_err_z = 0.894771496926;
    msg.rf_err_vx = 0.202162693581;
    msg.rf_err_vy = 0.157758085512;
    msg.rf_err_vz = 0.110655954949;
    msg.ss_x = 0.326438212621;
    msg.ss_y = 0.0853607424189;
    msg.ss_z = 0.026047330062;
    msg.virt_err_x = 0.361310761732;
    msg.virt_err_y = 0.710243799909;
    msg.virt_err_z = 0.449387082677;

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
    msg.setTimeStamp(0.3594363999);
    msg.setSource(49094U);
    msg.setSourceEntity(128U);
    msg.setDestination(38656U);
    msg.setDestinationEntity(159U);
    msg.plan_ref = 1539082004U;
    msg.id.assign("RLPQKCUIJITVSMAWVNEWILGSKFEQXZFSIPSPOLKPDGYQQIWKYXKRZCFJQQXOHHKPVJBCDKSDITGVITERRIGXONMFPOHLTTYZHOWFATADUBCZBRCGU");
    msg.memento.assign("QFFAHRZOIAJCQATJWMHFBQVDXKDXHWQSURRDYAHGVNHPFZPWJSUEZIXYMCYGPL");
    msg.timeout = 46759U;
    msg.rpm = 0.572331030938;
    msg.direction = 133U;
    msg.custom.assign("WRPQIYMRVRGIZBUCEJA");

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
    msg.setTimeStamp(0.239498224434);
    msg.setSource(39909U);
    msg.setSourceEntity(221U);
    msg.setDestination(49389U);
    msg.setDestinationEntity(199U);
    msg.plan_ref = 4165513600U;
    msg.id.assign("SDEYSPXEMKUSNHKSNIXALMTMJVZJIXHILCAEROUEQHWQNJXKHXTOTQBHPDRDLPSBEMGSQDOBIIJIVGRWXOBCVUCVVGJZAZAZUBWFWYDMOLCAVTSEYYSPGXNLGBQGQZWGJRLHKTCFYQQMUTKUSCFPDLWUDGEOGDQGRCILYUQHDOPNVKXKJWXFZFZPRNJTEHBYCN");
    msg.memento.assign("VDCTPUTXDOHHMIGOLNGIWGEWPBISYXQYNCPRYZOKLQEOJKMBMMHRSZYKSHLRLVKGJMKRHHPAYUXWTGGLNKEXCPGOMXWDVSFHVFNILKSJDZYWW");
    msg.timeout = 9470U;
    msg.rpm = 0.268612893777;
    msg.direction = 94U;
    msg.custom.assign("GWCSMCOPWOKUNENZBKHBDEQIKZRFLPEDBTSVZOWAOLZMNRHBWMSWNGCDYYZEKQXICARESADQQQUKSIEYFFAYKLSTGWNFSBXORNRZPVVHVLQMAARUDXQXZDFDNHJJLMFNCKYGVYBSUJDOMZJEUQXRAFGBJHMEKIAHETZQTZOGQFILWPUXVPRXIJVXEYVGHNOCVJLGSRUPYBHYWMIUJGUIUIDTLOPWNBLYTHCCPFT");

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
    msg.setTimeStamp(0.900271437205);
    msg.setSource(1038U);
    msg.setSourceEntity(36U);
    msg.setDestination(24440U);
    msg.setDestinationEntity(244U);
    msg.plan_ref = 1881932626U;
    msg.id.assign("ZGAOIYPURAITVWPWCAMUBILQRYKBZQCLUZMUJXHDUMSCCHHBSPTCRTWDROTRXSAGQDZJCZOHVNDYKUZIOGEYVHMLIYQSXEXRCNCUMWKRFFUHNLZMFMNVEJBPYJVVLTOOXTULGSJSGFAKDASXZLWBMHFGPRXCNVBOSYONEAQGIGTTQQDWEZBW");
    msg.memento.assign("LPJLZRGHIJUKVRKTEQAUQJEDANTTIOXMABBBXDSPSNISOAYYWHGGLUDWWWVUFNRZUBALQTYWQEKTORZCSUKLOOAEAFWIWZTTEUZEYRNXXFLITKQTEKIZCTLBGHAICDPNRBFDPJNOWGHMSSCMKQLRZ");
    msg.timeout = 59375U;
    msg.rpm = 0.325664151759;
    msg.direction = 96U;
    msg.custom.assign("NQEHMHWXWFSGLDXRAHVWJFBJUQEBQHUBHJYOLIRKVWZIDIWJCAAHGTZPMOSFSFGMYKAUXOVNUDGCGYEPFOLUBBITVJMRKOQXPOZZTNTVIUQMJXGFKURIEHOERMPLYJAQMVERPYESHC");

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
    IMC::Memento msg;
    msg.setTimeStamp(0.839472908848);
    msg.setSource(56196U);
    msg.setSourceEntity(137U);
    msg.setDestination(20197U);
    msg.setDestinationEntity(207U);
    msg.plan_ref = 220899614U;
    msg.id.assign("FITRGYWIYAZSZMVFZEQCXBFTJHVKGVLQDBEBMNYEFIFBTSE");
    msg.memento.assign("BNQFJWCPPEFMHFIMFYGZKWQKQSDSBUFYUPXHGPDINLYPFBVETWWUYVFNXDPHBCQJUGCSADJTGYJUINOC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Memento msg;
    msg.setTimeStamp(0.218720485547);
    msg.setSource(25342U);
    msg.setSourceEntity(128U);
    msg.setDestination(7906U);
    msg.setDestinationEntity(113U);
    msg.plan_ref = 787289396U;
    msg.id.assign("EASSOJXKHUCOBGBNSWYBXVGFOYIUXLIHVNSR");
    msg.memento.assign("AOQSEAFAMKPUFTJDSYNQCAYOIHGZXIBRCIODGKLSNACEKKDMLSJFUPWRMWZLUYQCUIHBTWMESPNJZGBXOKEPSRAPRBEL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Memento msg;
    msg.setTimeStamp(0.322662975811);
    msg.setSource(20030U);
    msg.setSourceEntity(120U);
    msg.setDestination(4833U);
    msg.setDestinationEntity(92U);
    msg.plan_ref = 631062523U;
    msg.id.assign("MJUHMYHKCDHTXR");
    msg.memento.assign("RHWKULISBNEPPJTKBKQMIERVVFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #2", msg == *msg_d);
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
    msg.setTimeStamp(0.221371042339);
    msg.setSource(43408U);
    msg.setSourceEntity(35U);
    msg.setDestination(22058U);
    msg.setDestinationEntity(80U);
    msg.op_mode = 71U;
    msg.error_count = 218U;
    msg.error_ents.assign("GPJQTHOZWUSYQQTSIPWETUIMVRPWDBRBKYTYXUBMOPIVCRNQKVOGIEPDAERGTZKATXOAMXXJTVHSNIWHNYBDUPGKZJCMMCBSQBTNBNNMDLBREOTHLLFOMOFEFDRJJJAEJFVJMIGCFYHHALOYAAFHCPKACKNDQJSRWCISKZTWUEOPLELHASY");
    msg.maneuver_type = 59133U;
    msg.maneuver_stime = 0.685291308009;
    msg.maneuver_eta = 13044U;
    msg.control_loops = 1276450639U;
    msg.flags = 40U;
    msg.last_error.assign("ZCJLDJWNSLORKJTJJDKXZCWKQVEMSFZZXQPSYZEVWBDJWXFACPEMCQXHVTMKDBGNTFXCCJRUARYKNECNCMQVRYZTEUSUBNPQLLIRVCWXLYOFQRNOHRBTLORFVNJHPISXDAWIXIJADHTGUPGISAFBUFHGAHBBQBKWLFDUKPTYOMYFEURJNKSMUXWNVQZVYIRLPHZGLPTKMOAEGPXGSIDZTBENHOVWLYOEVECHQYYQMUADAHOGIUWFKMSDGO");
    msg.last_error_time = 0.946138615798;

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
    msg.setTimeStamp(0.644357299639);
    msg.setSource(31056U);
    msg.setSourceEntity(19U);
    msg.setDestination(30159U);
    msg.setDestinationEntity(150U);
    msg.op_mode = 167U;
    msg.error_count = 108U;
    msg.error_ents.assign("JKAHOQYDMOFETCNTYHMDMFLXAEZNCNEWAHRSUVOOIULPFDSGWAVKPJLQZWJSCUSAMIVLMQSNNATTXJPTARSVTDLNTRHBJHWUFGKBIGIMROYCHIF");
    msg.maneuver_type = 23633U;
    msg.maneuver_stime = 0.320486245868;
    msg.maneuver_eta = 23574U;
    msg.control_loops = 165906673U;
    msg.flags = 249U;
    msg.last_error.assign("JRZGTNQGBTGJSZUZPOKQJIWKHSLAUBERVTATDSGIVUJBKTPHNAYBHACIFKGHQDUAQGDSZYKROYWOBHRLTHYAYSQCXMFNKNBBTNOJLOUHFPAAMXEVSXRTEAZWYXTXKLNXICMYISJGQDNZDLWAUJWXZXFDI");
    msg.last_error_time = 0.0205252187025;

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
    msg.setTimeStamp(0.384140901775);
    msg.setSource(24053U);
    msg.setSourceEntity(8U);
    msg.setDestination(26909U);
    msg.setDestinationEntity(194U);
    msg.op_mode = 44U;
    msg.error_count = 77U;
    msg.error_ents.assign("EUITMMTAFAPOGTZLIQRQFIHOTYXXRKSCBSQTTBLODQPXVNFKWGYYSLHPFGCPMFKBYSIKQKBYCHLVVTLDFREMFNVGUUBNVVVOTWEROKZDPDNODILFKRGWJLPWAJRAWPCYDKYNHAEUSXAMQHTHCRAMOEINIKVUAJGUIDXDNONBAJWRKJCUPMQCHMDYXBAZVMPXOWXSRWJWFJHZEZGULQEYXUQDOJCBENIRMJ");
    msg.maneuver_type = 10839U;
    msg.maneuver_stime = 0.219353630819;
    msg.maneuver_eta = 15174U;
    msg.control_loops = 899699209U;
    msg.flags = 162U;
    msg.last_error.assign("ZFQZGGLGLJSGEPDHXNOZDCWBRIJZICFMUORPNEVPJEHZMCWKOGFQDIXNVBHADUHULZSMJBWYMAZBMZPQOEWKUTBIJIXHDTMNTXHAVYSGNEFVISILBLGCQSYCUKAWLOVTLXRRNDOHENKAKETVKPOMKBTMGBXWTNTVDKLRYVDYDFYIGARYLSUBNCVOQUGRYFIHJMTXQAXCPUJQREPUPLMHQFKSSN");
    msg.last_error_time = 0.295896438869;

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
    msg.setTimeStamp(0.809463829016);
    msg.setSource(18356U);
    msg.setSourceEntity(124U);
    msg.setDestination(44181U);
    msg.setDestinationEntity(159U);
    msg.type = 123U;
    msg.request_id = 193U;
    msg.command = 196U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.plan_ref = 2256854640U;
    tmp_msg_0.id.assign("TRBNESSEIEBVTOTKHCLQXQJKGFCEUKUWNCBGSNCVFANVQLBYXYEDAOPZSWPDLLYQBWXKXUJSEVVAFQODZZJKRIMMXVKIRYXQSTIOHEHINJYTONZGPMCJMGHJTHBAFNPCXRQZAJAMLMRWVUFJTHSQOARADRIGOOPHLRODCWWGGZZIJEDHMUOAUZZXSMPNLNWBDCXLWIFGTUKTBLWYCYCUREDPPUQSIZFPAQPVVKFDKKXWGHLMBJTDHEGSV");
    tmp_msg_0.memento.assign("PNVLMDKWOKEDRLHGYFZCIILHVCYKADXIOUPNFTNJKQFCVJADLYYQXRKAZOXQPXIMALDO");
    tmp_msg_0.timeout = 26366U;
    tmp_msg_0.lat = 0.0465583115013;
    tmp_msg_0.lon = 0.248054110891;
    tmp_msg_0.z = 0.684644058843;
    tmp_msg_0.z_units = 81U;
    tmp_msg_0.amplitude = 0.574771110476;
    tmp_msg_0.pitch = 0.0634126045102;
    tmp_msg_0.speed = 0.223659134892;
    tmp_msg_0.speed_units = 87U;
    tmp_msg_0.custom.assign("LPMDUKFABHLD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 41467U;
    msg.info.assign("UFJIEXNLJLEYYTALMJZNLEURNZGNBBAJHMINBZKGBUZTMQMTDMSISWHXLEDHYEBVAVLOSFRBAKFUCTKZXKLPTFPDFWQRWAJFJMUUMIVYYHCEWOOCGPCFRXOKHBSTNGSSIKRVQHCODMYXRXSQQSDHVQQWQRXWYWHRIZORVRPSCUKDKCXOZFCTXWADJHDATYGI");

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
    msg.setTimeStamp(0.11491391942);
    msg.setSource(61383U);
    msg.setSourceEntity(57U);
    msg.setDestination(43755U);
    msg.setDestinationEntity(117U);
    msg.type = 184U;
    msg.request_id = 21289U;
    msg.command = 122U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.plan_ref = 3509733802U;
    tmp_msg_0.id.assign("YAXBOFBYJFBXEOPYLLMJULYHMWEEASJHUCZTNHKINXZJVYAQNNMJTOYWGBNXDSCZHELGUUIZXAHWPSDQTVBPRAQZNRUCQKBIVNCGKQUCAPVFKFWQOOUVCWTSMKWKCDJXMWQSGIWFZGYLKFEVRVLPKTCUPXTPTBRODREGDFVMRDLPFECDAGPIYTYZOJNQCWHJWBNHQOIDRTMAZ");
    tmp_msg_0.memento.assign("OBWWCWOSDRJYMMUPFDHCVATURWLKXAEACKFLZVCMGJGVSOLEHRNEQXYXZJWXBDRABMYABKAIJYHQEKDUBGJOTKKPXLYYCKIBGLXTLDZTCCOCVNPTLITOJNWMCFFISIAIQHOJUTGISHIKSVZDUPUNNWJZBSWOVRGDXZCENSYVFYNBAEQBIAHMTMASLDFQXSVPFM");
    tmp_msg_0.timeout = 40266U;
    tmp_msg_0.lat = 0.526222392413;
    tmp_msg_0.lon = 0.659271039624;
    tmp_msg_0.z = 0.275805678517;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.duration = 27393U;
    tmp_msg_0.speed = 0.0807221529904;
    tmp_msg_0.speed_units = 82U;
    tmp_msg_0.type = 89U;
    tmp_msg_0.radius = 0.656243308872;
    tmp_msg_0.length = 0.837397788627;
    tmp_msg_0.bearing = 0.873767756776;
    tmp_msg_0.direction = 70U;
    tmp_msg_0.custom.assign("JGSHYUGGOWAOZMOMAHMJXIEIZNJZBQTPVLVCBLRWVCBLXEBNSERKIUSVNRDXYYFCQHFQVUOOGGFEJRBAF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7263U;
    msg.info.assign("VPIFFCRLTZVNVGYKNGTNIYBOCPGRYHGQURPIQSCE");

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
    msg.setTimeStamp(0.774448914494);
    msg.setSource(24739U);
    msg.setSourceEntity(182U);
    msg.setDestination(51965U);
    msg.setDestinationEntity(82U);
    msg.type = 64U;
    msg.request_id = 50471U;
    msg.command = 203U;
    IMC::LowLevelControl tmp_msg_0;
    tmp_msg_0.plan_ref = 3430682116U;
    tmp_msg_0.id.assign("BJUVHCWIPDOPLBCJBFHRJZPNXYSOVXMROVSBGCENMZ");
    tmp_msg_0.memento.assign("EYJJETUWLZWAZQWCHTZPFAUIDYOHVVYY");
    IMC::DesiredPitch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.524139404642;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 34446U;
    tmp_msg_0.custom.assign("EYSZUWCRTAMQJXVVGFCURKKWDOJHZPXCMQSAMIKYWAPKFNXLLHGBKRDVLUDBCRIPNZUTHHVDEYYVQJINQJEDZGJQNNWLGBJZQMFGMSRPERBODGDXBSADOBUKTWTFIKTEPTMQOSLQRYHRWGDIAJXF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60019U;
    msg.info.assign("NVEFWZEOIPPJLTRGMOBYKMPDSHTXXLWMUQFTDWEWALIIHEORQALEECMAIHMHDDHIMLGCGLZSINZPJAIVTNZJUZKZWUQLKHVNWBXRDPNGDOXTCEWUYKKHUHSNKDSKSLMXFOJFSTFDVYSYAKYPBCLXQVESDBRRG");

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
    msg.setTimeStamp(0.262089372385);
    msg.setSource(55278U);
    msg.setSourceEntity(132U);
    msg.setDestination(23964U);
    msg.setDestinationEntity(21U);
    msg.command = 17U;
    msg.entities.assign("MFVPWOPLANMYFQSRPSFXKHHNIBGCDMXGPZMRJACLTTWNQSGGUKTUJZPGSEKTBBQAXTZEHUREYILIVOOHIFGDOCXVAVTLVRXDMZWEIBOHLAJBVDPCAXFBPUVNLYEHQFRNKTGRDODAYTOUQPLZXYOMUHIYYJJKQWHWICIROQMZAFQFBXJDPKFRRKWOSLIDEDWYNKATXTBHPVS");

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
    msg.setTimeStamp(0.279592711472);
    msg.setSource(40782U);
    msg.setSourceEntity(191U);
    msg.setDestination(40924U);
    msg.setDestinationEntity(192U);
    msg.command = 151U;
    msg.entities.assign("XUPYTGPPJSQRLZQKLAZKOFTIKVFBDJVMISMGCITQEGQNRDCDGXPPBKKJWIVYPVGWHHYQLTYRPZOWSWEYIZZASRCOZIXGNDQXZHLYIDISZOCSFNLKRATKBYGRYERPEPHULJ");

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
    msg.setTimeStamp(0.269546415959);
    msg.setSource(60406U);
    msg.setSourceEntity(59U);
    msg.setDestination(6010U);
    msg.setDestinationEntity(141U);
    msg.command = 66U;
    msg.entities.assign("HTUOYWLWHXWNTYJFMSXDGULLPKEROGTAOJYAGTQNZJVPZAHCFPCMUREZVTQDJPSSRZKYIIRDVKGBJRYNCEEYMFDQHGUMQXHBQKCUVTBKPPSSINSFNBBXXGXEWIDTBECYKMVMDKIBGJTHGPINAQXFYWIWHLIDRKENOCXSRRXTVDCHSKNZPBJVWFGSUODXVIRTCUSAPCZBOLHOQVFDAJEWOMYYQM");

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
    msg.setTimeStamp(0.442605202795);
    msg.setSource(878U);
    msg.setSourceEntity(119U);
    msg.setDestination(31919U);
    msg.setDestinationEntity(163U);
    msg.mcount = 25U;
    msg.mnames.assign("CBFRCRVGJVCGGANSGSUPODIFTXTSQHMOPJRKSKYEXGOMNYNKRPYDEUMTIIOUXAGVBEAVWQENRLOPIDCTLVSWFCLZQAQHATHFSJMXEBJJQQHKGBKHZELOYZLOXBWTZXLPZRZKBUULFNBXIQWVYUCYHJ");
    msg.ecount = 87U;
    msg.enames.assign("PEDPKGXVCKXCACLLUNJYMUBKWQGGXKSYLOSHFTIMWCCBRHKKZJOVDFTLDSURCQCTEOAKJXPLGUXNYJQLASXMLUHDYINJHRAWSOSAVBBNZOWUYY");
    msg.ccount = 157U;
    msg.cnames.assign("VELFFMUZWVGJRSOSENVRXUQHZISBIQNAHMTXCAGIQADMJIREBVRCMTPQMKPUTPGBKCSBRSIEOYRIMSPWIWMNJXWQZPWFGWKFZEJVFXUCLKHC");
    msg.last_error.assign("XCRSZYCRIPQRUQDDSRHNMEUEB");
    msg.last_error_time = 0.349976356877;

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
    msg.setTimeStamp(0.776452468019);
    msg.setSource(3746U);
    msg.setSourceEntity(117U);
    msg.setDestination(679U);
    msg.setDestinationEntity(103U);
    msg.mcount = 233U;
    msg.mnames.assign("XHYFAZIQJASARHVJBWMVKTUUWSZZUAHNHJXTSOXXXQEKYJNKSLRGJZWKFIECZSIJLKAMCWBSG");
    msg.ecount = 44U;
    msg.enames.assign("DGYHMQKOMFOPDVRBWZGZCUUEFTCYARFWJHEIAQKGYWSCNQRPLZPUTJHYJGLVNHXGDUVUAORIJIUPTFBT");
    msg.ccount = 138U;
    msg.cnames.assign("CPOHOMHBCKLVOFRCJFLJYUPZRCQPTNOTNFQESGXMPVDSLIHZFGVKDGHWKZBSETVUFUMKJNWHOTLQNLQUUPSXLKREPAFIYIZU");
    msg.last_error.assign("YMVHMEZKGUXLHQSQAUZMOXXOWGCAYPKTDENZBVFGCOMNGSMPGRHVETCUCIAAZNRFYWQQFCKFHQPAPDXBIWNHJWHDARFQRBKYMIYTBMLVCXWVJEJLPUJPNHIJUDYZRDYFLZYSRJNSJMUGRPVCTMGORSGXFAKGXJOXHTNKVTDZLEOHIYTQNEBQIEDCZNESHVJOISISRWPIRFULLFWMUUWJKVPSOECEDYCWT");
    msg.last_error_time = 0.647313597936;

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
    msg.setTimeStamp(0.791158495415);
    msg.setSource(46553U);
    msg.setSourceEntity(182U);
    msg.setDestination(17011U);
    msg.setDestinationEntity(96U);
    msg.mcount = 35U;
    msg.mnames.assign("BHCYKUKPRNRZICRYWUEIDGETNGGKSQQHLTCPWXNRYVMACKTWLNHN");
    msg.ecount = 245U;
    msg.enames.assign("JSNMXTERAXHFQOVVACTPQRHSNBZOTKOBJEPGVPNAHLBRIFYLFOLMWRHZADDWRUQEGCCYDCCGGFOMDCYMXVTUXBKFTLOCAFCTJKVIXIE");
    msg.ccount = 170U;
    msg.cnames.assign("VZAAYXEQFCCMHUJGJINSHZRUKFOPVEJYWXYZVIKCGNDSTWXBORMYGXVWZHHBVDWFWEIVHDJSGQBWUNKJOOAONQOMMTEFIWLFQETQESPGPZCDMBXKBQUTLBDBNHEJCDXNUDKLVXYN");
    msg.last_error.assign("HEWVLPRLVBARMIBERARWPTECXZPTRNCTIRGFOLMOKYNGCHVFQPHMFFEQZOJHAAAHETQUGVFULFMKGIKKCZAZULUJJLZMQADSVOONVHFHHVQXBNIEOYRUARSFNJGVEDINXIMMXKXUVTQWJLSRFJETRZWPCTJSCJYZBOXMXWBDWKTXLBCGJZPIOCMXNGCDOIDYAQNDNEGSTIN");
    msg.last_error_time = 0.250829081068;

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
    msg.setTimeStamp(0.0468567626473);
    msg.setSource(65217U);
    msg.setSourceEntity(58U);
    msg.setDestination(28038U);
    msg.setDestinationEntity(61U);
    msg.mask = 154U;
    msg.max_depth = 0.113581631923;
    msg.min_altitude = 0.880483359754;
    msg.max_altitude = 0.730364497997;
    msg.min_speed = 0.555020469861;
    msg.max_speed = 0.695960766979;
    msg.max_vrate = 0.795733995545;
    msg.lat = 0.00929296246765;
    msg.lon = 0.410870882836;
    msg.orientation = 0.710177313931;
    msg.width = 0.284339547797;
    msg.length = 0.539654201047;

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
    msg.setTimeStamp(0.11857358838);
    msg.setSource(37281U);
    msg.setSourceEntity(112U);
    msg.setDestination(38327U);
    msg.setDestinationEntity(78U);
    msg.mask = 67U;
    msg.max_depth = 0.392601892651;
    msg.min_altitude = 0.68023628017;
    msg.max_altitude = 0.276987351712;
    msg.min_speed = 0.0127616272098;
    msg.max_speed = 0.014704075601;
    msg.max_vrate = 0.793928862515;
    msg.lat = 0.0457775610789;
    msg.lon = 0.276095311686;
    msg.orientation = 0.0826847828738;
    msg.width = 0.392861472687;
    msg.length = 0.272063677281;

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
    msg.setTimeStamp(0.99972817395);
    msg.setSource(15496U);
    msg.setSourceEntity(30U);
    msg.setDestination(40605U);
    msg.setDestinationEntity(226U);
    msg.mask = 232U;
    msg.max_depth = 0.916314300029;
    msg.min_altitude = 0.914300350785;
    msg.max_altitude = 0.371231822137;
    msg.min_speed = 0.769946000718;
    msg.max_speed = 0.44518389403;
    msg.max_vrate = 0.438494608659;
    msg.lat = 0.0598990476142;
    msg.lon = 0.386461387448;
    msg.orientation = 0.605395410064;
    msg.width = 0.365474692113;
    msg.length = 0.0247575629921;

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
    msg.setTimeStamp(0.888812046326);
    msg.setSource(54265U);
    msg.setSourceEntity(100U);
    msg.setDestination(2058U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.934854065004);
    msg.setSource(42017U);
    msg.setSourceEntity(60U);
    msg.setDestination(7057U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.966444561897);
    msg.setSource(47325U);
    msg.setSourceEntity(148U);
    msg.setDestination(48641U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.448924096535);
    msg.setSource(35091U);
    msg.setSourceEntity(60U);
    msg.setDestination(59415U);
    msg.setDestinationEntity(52U);
    msg.duration = 20325U;

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
    msg.setTimeStamp(0.258303978806);
    msg.setSource(1897U);
    msg.setSourceEntity(93U);
    msg.setDestination(34467U);
    msg.setDestinationEntity(106U);
    msg.duration = 57549U;

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
    msg.setTimeStamp(0.627899833246);
    msg.setSource(4523U);
    msg.setSourceEntity(139U);
    msg.setDestination(35258U);
    msg.setDestinationEntity(62U);
    msg.duration = 7335U;

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
    msg.setTimeStamp(0.579272719693);
    msg.setSource(51406U);
    msg.setSourceEntity(113U);
    msg.setDestination(40445U);
    msg.setDestinationEntity(225U);
    msg.enable = 56U;
    msg.mask = 3675088657U;
    msg.scope_ref = 2388554230U;

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
    msg.setTimeStamp(0.73042452839);
    msg.setSource(51741U);
    msg.setSourceEntity(227U);
    msg.setDestination(36776U);
    msg.setDestinationEntity(85U);
    msg.enable = 83U;
    msg.mask = 3759704517U;
    msg.scope_ref = 2419958218U;

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
    msg.setTimeStamp(0.751070834044);
    msg.setSource(16808U);
    msg.setSourceEntity(105U);
    msg.setDestination(632U);
    msg.setDestinationEntity(178U);
    msg.enable = 144U;
    msg.mask = 3370367791U;
    msg.scope_ref = 2194901302U;

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
    msg.setTimeStamp(0.428263371148);
    msg.setSource(28975U);
    msg.setSourceEntity(121U);
    msg.setDestination(35932U);
    msg.setDestinationEntity(185U);
    msg.medium = 174U;

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
    msg.setTimeStamp(0.173725756418);
    msg.setSource(61429U);
    msg.setSourceEntity(165U);
    msg.setDestination(2427U);
    msg.setDestinationEntity(46U);
    msg.medium = 146U;

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
    msg.setTimeStamp(0.251725239996);
    msg.setSource(34799U);
    msg.setSourceEntity(31U);
    msg.setDestination(34986U);
    msg.setDestinationEntity(18U);
    msg.medium = 141U;

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
    msg.setTimeStamp(0.957325731823);
    msg.setSource(17857U);
    msg.setSourceEntity(47U);
    msg.setDestination(19498U);
    msg.setDestinationEntity(216U);
    msg.value = 0.138416779299;
    msg.type = 150U;

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
    msg.setTimeStamp(0.462812611709);
    msg.setSource(26432U);
    msg.setSourceEntity(66U);
    msg.setDestination(20507U);
    msg.setDestinationEntity(92U);
    msg.value = 0.217896444635;
    msg.type = 176U;

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
    msg.setTimeStamp(0.301463801685);
    msg.setSource(13652U);
    msg.setSourceEntity(14U);
    msg.setDestination(638U);
    msg.setDestinationEntity(151U);
    msg.value = 0.249299936196;
    msg.type = 33U;

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
    msg.setTimeStamp(0.748298576928);
    msg.setSource(26359U);
    msg.setSourceEntity(11U);
    msg.setDestination(7734U);
    msg.setDestinationEntity(78U);
    msg.possimerr = 0.170584330556;
    msg.converg = 0.465338756273;
    msg.turbulence = 0.417669465669;
    msg.possimmon = 167U;
    msg.commmon = 250U;
    msg.convergmon = 131U;

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
    msg.setTimeStamp(0.777471141819);
    msg.setSource(29371U);
    msg.setSourceEntity(183U);
    msg.setDestination(25060U);
    msg.setDestinationEntity(160U);
    msg.possimerr = 0.995786969481;
    msg.converg = 0.115464799158;
    msg.turbulence = 0.102119204263;
    msg.possimmon = 26U;
    msg.commmon = 43U;
    msg.convergmon = 107U;

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
    msg.setTimeStamp(0.982483635128);
    msg.setSource(34058U);
    msg.setSourceEntity(43U);
    msg.setDestination(26966U);
    msg.setDestinationEntity(104U);
    msg.possimerr = 0.701139684639;
    msg.converg = 0.828909333287;
    msg.turbulence = 0.301427813873;
    msg.possimmon = 5U;
    msg.commmon = 133U;
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
    msg.setTimeStamp(0.501820301101);
    msg.setSource(55213U);
    msg.setSourceEntity(219U);
    msg.setDestination(2233U);
    msg.setDestinationEntity(51U);
    msg.autonomy = 237U;
    msg.mode.assign("IXJBSQENPYLNZCNKJNKTXWSJHHLDUVWBWZHUYBUPJGAYPIHMAOTGYTDWQCHMJKHBQYBWUDENXYFVPC");

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
    msg.setTimeStamp(0.0959399348629);
    msg.setSource(36894U);
    msg.setSourceEntity(143U);
    msg.setDestination(47590U);
    msg.setDestinationEntity(248U);
    msg.autonomy = 252U;
    msg.mode.assign("YJWISEKHTOUORDJGCLFJIPZEOUDPWZOOWNJJGOBF");

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
    msg.setTimeStamp(0.392201414563);
    msg.setSource(46952U);
    msg.setSourceEntity(202U);
    msg.setDestination(55185U);
    msg.setDestinationEntity(41U);
    msg.autonomy = 181U;
    msg.mode.assign("JRNJTZQTKYDCWMJMWUALXIUHVHYKMBVMIDXDHNUHAXRPZPOGJRDLCGJFTVOBOYSRSNEUGCBYSKLLELNPIVRRBKDEHYNTQQXOGPAYCGWITTEGXGOMXLTBSRHDRBMQVCABUZPSRGITQCZHVCYFMPLUJJKLNMUARESIZPWDOFFSKVFZTQLQHDIOYQAYUSJKEGTZUWIFZNXVQODAISFSENFNWKAIVXWCYQVEMPHK");

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
    msg.setTimeStamp(0.735411374378);
    msg.setSource(31618U);
    msg.setSourceEntity(43U);
    msg.setDestination(57036U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.720819755124);
    msg.setSource(48827U);
    msg.setSourceEntity(76U);
    msg.setDestination(5379U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.224570704515);
    msg.setSource(34222U);
    msg.setSourceEntity(198U);
    msg.setDestination(59590U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.395951703042);
    msg.setSource(59037U);
    msg.setSourceEntity(191U);
    msg.setDestination(26455U);
    msg.setDestinationEntity(205U);
    msg.plan_id.assign("DOHISNELSPEHMPAMRWTTEVEDDQLVCCXGWKCZZVXUGAHWKNTBOQNDTJLAERBPGTMVXZUIOAHJQKIJFURTQWJUFMFOGAPDNYUFU");
    msg.description.assign("IIMYCVKWDAYNJAZEAMPYMUVFLVBVDYYL");
    msg.vnamespace.assign("WVSKBMVDTMWYNZAPAMBNVYWFODZILGUCFGQWZYRIZJZNI");
    msg.start_man_id.assign("DOFHUWKJEISVEJHEKPGIVXDIBZYKXATKUTDZZNHXNVGTLWBRHOYZUYGPBDYJURUZFTMDALZLLCUSVCWZVEVFQBWLDSAKMBWAAEJNNFGEOSGFPYLQJGFPZRHIYYJSXILRFONCUOUTEXMOBLEYGMQWRIPLROHUCHBPMIKVKXQHMOMXJDGDVTVCUMCTKFKFLTPXNSCWQTYXWPZCSBDNANFONPRTBICPQIQSQSAANGWEQECX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ICGURVXAYHZSSGDXIMNERJZEMFRUVSPONGNPDFBQMWRGKVVIOVCLKGUKWOUTPBRWVWLJKEZGCYCFFVXHASTPBENGYYJLAUDBMELUWEXJQNXAWRZBITDXHMQNGMUDWYIOINVREFYOLPOTAELGZRIZFSJTE");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 2588066508U;
    tmp_tmp_msg_0_0.id.assign("DAPPSSDIGVKFWLHWJTVRCULQKBEOXUQATNMDDUDKQTSBUWDFJGOQJVEXWYJXLDNFGEZCXNUBKOVGQRVLIJHGEVPZKOLNDPXSCHRVPYHBQSVSYLLYRMRSTBXSQFEKCIZBRASOZSGZTPOECVYYAMRCPIEGRTZHUNMHMRYMWZNXPEBKAPFAMNMUTXCYXWBUWJFXAOBOA");
    tmp_tmp_msg_0_0.memento.assign("OZFWSFOEEYSNWPXTYFTIYZUAIVBKKMWYLWTVFPGPPUSMKBROJLDOUMMLPASVLIJRZOCPWHCYUQCJJLAOTIDFBOCHLNKQCTRVPCHUSXKVNDSZGRNMNETENSDMZGPMNIOERHJYQSHZIJXWTVQGBLFWVJLHCDEAJVMQUDRZSXEQQXBVKJXMEBLWFAGWQDJBBLURUTUOQKGYHRFAAKOEXADTXKGIXHAHZVYFPCMBRXNRDFGBNIWAIKIUCNPDEHYG");
    tmp_tmp_msg_0_0.timeout = 21858U;
    tmp_tmp_msg_0_0.lat = 0.300186303567;
    tmp_tmp_msg_0_0.lon = 0.122691150769;
    tmp_tmp_msg_0_0.z = 0.0220035231794;
    tmp_tmp_msg_0_0.z_units = 112U;
    tmp_tmp_msg_0_0.speed = 0.639049500197;
    tmp_tmp_msg_0_0.speed_units = 9U;
    tmp_tmp_msg_0_0.custom.assign("AEHKFQJJUVDGJOEIAVOOEWUXXDTGHVBEYECAUCRDWQWGZHSMVZAHYLIBJBTBEHKWHLVSPZHZXRSVTNNXCAYKJNGFBGTEUYRKFUCFPBFFLZRWIOPTCQGWBUNNSCPRADRKSJVAIYPMEADLYZZUHTNYQXQOSOUMPXGPAZIMRHWJLYDHJKRXFRMWWLPIEFOZNQQINSUDCDCVSQVPPAMFIXKIYBRQGMMCOT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::IridiumMsgTx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 51771U;
    tmp_tmp_msg_0_1.ttl = 65097U;
    tmp_tmp_msg_0_1.destination.assign("VJNURWPAFOS");
    const char tmp_tmp_tmp_msg_0_1_0[] = {26, 82, -108, -79, -18, 32, -30, -115, 41, -59, 24, -69, -105, 90, 38, 36, 56, -27, 63, -50, 4, 13, -77, 56, 25, 17, -71, -44, -73, 17, -90, -7, -10, -45, -105, -28, -19, 59, 77, -120, 51, 124, -112, -4, -96, -35, -120, -87, 60, -119, -108, 73, 100, -104, 54, -66, -37, 124, -111, 82, 113, -28, 68, -109, -80, -64, 94, 7, 33, 81, 78};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Calibration tmp_msg_1;
    tmp_msg_1.duration = 45703U;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.696659381429);
    msg.setSource(51734U);
    msg.setSourceEntity(233U);
    msg.setDestination(65375U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("VOVKFTHEKNADSTQAFMREQMKJLCXXMQMXTPFLEGTFUBMIQURICLHJWQCVVIJDSVGIPRSDEDZYXACOTJTKNRPYRYVGPCUUMWWVWOL");
    msg.description.assign("BVOWPHOJOKAFHLNRCBVVOKRVQYCSSKHJJRWPCDOFZYXMSPEMYNCQMEYIINDDVABDGLSRRWEEUGBYGUFPMXCIAZYLKKPLCLRXDMXOSTSKTFTQKTZOUFAUYYVNHDAXSMHWJQNISZKLURUAWJHTGFUHU");
    msg.vnamespace.assign("EISBJZJHBYBPYHIAMSJPZUXUAIMCRYMTHNPYZBOMGWMKKEIMEM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CUFEUSCOSVMPOPZZLUXYMDWWIOFWVKJGWDZRROULLUVFWWPKBTFTHTLCMUQYNZCQAFXZGTBKTNSGGJEXMEVXZKKVGHENIOPINIJGMELUSKAAFQNOQHYOFERYTVCYXQRXORQBDSRHAAZHHXLDNKDLMVIRMPEYA");
    tmp_msg_0.value.assign("FCEFJJVEYNWYDUVPOAEDTILQJFEPTQGJPMDFJCXCQVRIRRZFKXMWZXROEHOOIHOBRMLXXDRYVWSDLYLIBWZBOBDMUKMXIVQOMUYCQUCPSCLCLJHHAKONGUSWAKQDKDNZASNKTBHUGQBMRKQYGKXNEGIPANLUSBIQMZEKPWW");
    tmp_msg_0.type = 118U;
    tmp_msg_0.access = 129U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YAPKTNYFCCIBFLXORHPEYCBCKDRHFJBPRKIKWNMCDMTAVFFWZGQSWXIWAWJNNLYRCSSGKKNXMEGJHUNLVTMMPOTVWZXCQYWZVIEQBLRAKKRQNIOHABPARLQQRSVUYXZYYJPBTBLFLPSGHORUXNFUKBHXGYCAOSZIGVMJMASIUEOLFUGTHIHZOYNUMVJCJUVVSJTIMLXEDGEFHSPERHGIQPGTDDZWBZNDQ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("CRCECSUOXVMJLFIXKZDVPDQFHDNSAMESPCRXMVDJTKMLTYYZOXMPNYUVKFLCGEPDVMHYIWBKNAAWUSGBDWFNSKNWZHISKTFTTKFJNMJIPXHDBAIUBZAOCOAFOQZEKOCOMTXUKGVWJBHJRHXJQCOBURGEPMJTEIDRDALGGWUIEYFYYWEVUYAXQGZUEQRVIISV");
    tmp_msg_1.dest_man.assign("CSFQRPLBRAJMNRTYNKXWAWYUFEEDARBKCLQXNNDMNCPITSWUTDAYCTQRVACJGUPQJFWUPXYUPVGZBIBFQBHUWEXHGCGNOMXFPOFWPPOVWKMSZBESVOOIFDXQJZILODZILHZBXLSYZHKYKMBFMZDETSHLIUKJVRGWFTPTAGVGVGUNYJRJQJWRDHCGOLIANPXQXEIQNLDJCMOEFINUTKSBVJYYMWIBVUYVKTASHSRRZELZQHC");
    tmp_msg_1.conditions.assign("LFBFQSOZUQXPHCBKANPVKZRPNMICPWHRMSTMNCFIGLAQNVRUVOOVKVSBHDGCTZQFWIOQZEHJTXCBLYKWJWSWJEEYDQVJAHDWOZVGFADKERARFOILUEIMITXNBRBIMHAXETXKGITLGKPHLXUMGZXTYDTFNOFSUJDBAJPTXSYSEHOBYKGMYQPALRZBZMRPDSIYGANZFBUGIOQVSSQEKNDPKYEJC");
    IMC::Map tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.id.assign("CQDNQDEOVEOWUJAWVHCURFJJSXIYPKXCFTBFBNFZSYYUWTVVOYJVFDZDIIXTZFQTPTBBHEUKAWAPWHGLNOXQZWJWIVQDHOIBHOQTPMBKXREGFGFZANSRGLNEEJN");
    IMC::MapFeature tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.id.assign("PRWHOTKLXHFSJBWCGKLTGZGNJAFXCBYEOBEWHATDRTTBMYNFWHAZMVYOSTJDOMZISIDFWHNVNPAXXNGGCLSHHWFIPYUBDVWYCTBRLLPMEFDREKSVQCZXPMCZVUMAPJMUXJISQERUBIKUTDFCKEZKIVACOPPLXMJLUXKOWRAFCPJEXOQJFLYTAZGQOVOTVNRQBYARKURLFHISUQSNLGIPZNKMMNGZVWVQKEXHYDJUHWGBIDSUCSQEQYABE");
    tmp_tmp_tmp_msg_1_0_0.feature_type = 96U;
    tmp_tmp_tmp_msg_1_0_0.rgb_red = 29U;
    tmp_tmp_tmp_msg_1_0_0.rgb_green = 13U;
    tmp_tmp_tmp_msg_1_0_0.rgb_blue = 122U;
    tmp_tmp_msg_1_0.features.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.717647846334);
    msg.setSource(38379U);
    msg.setSourceEntity(11U);
    msg.setDestination(50931U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("TJVLKMHEZKZASXXYORGDQULCKSCAJERTNXSEVAGCWFRJORQDDIYFXPYQPJDCBC");
    msg.description.assign("LWABPXJMKDWPSYDQCBGJMRJONRBCOPLYZDRUDQHGYXHHXEQQRZUT");
    msg.vnamespace.assign("VPOEGDFNJAGNMWHUHSHQETAKXUVJPXVYRESTGKBQMEULGJKKJ");
    msg.start_man_id.assign("JDCCCDGPTRPAQJS");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("AGWCKAUDLOAJXDKTLNXKSYTCXRUMMUVNIBPHRWVIIHFRLMVCOKCDGPEOPBXHFZQDTYDCOIYGLUSXZSSWTXNVHGIAPHAZAMYYPUTZPQFOEQWJEAXLDEPEJPZWQYKZKBGFTPTDWITBQCIEEYYLVNCYQZEGUI");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 4251146561U;
    tmp_tmp_msg_0_0.id.assign("CCBSEYPQMWHIYANITXSZIMLNMZAZEKTVYBGOZEAHOMIWFHLBOQEBSMRGOKHVUXDZFRZTKYVRVOCVTKCSVSPXWSEVTFSLLPAJWAUKFSIXFNHCUFJGQBNDOJUVJCAKPEQBHZRBJQLDDUOPMPBJJMDGNPLINIRTQDMGLCAMDDWJEGXNRGQHNEXERWUOSPBJQWWYVELSGAKYTDFPYZOAIUBJZDLFHWRGWTXUVCAQ");
    tmp_tmp_msg_0_0.memento.assign("EZOLHNPRQFTGAIYTUHWNGZTJPVERWTBEQXGFMWUIKHYBIBNLSKEXDHOPCXWSMXNKVFMUUVNVZUNZFCFOTCKPFIQSKCWBVQU");
    tmp_tmp_msg_0_0.duration = 63275U;
    tmp_tmp_msg_0_0.custom.assign("AAGBCVBMTXDVHXWVKDKUKNWDMILRPYCHUTIEFJSEDFBFJOEFSRPRGZEVXKFOTPBDSMCECWVKTOQISLONCSHLNRHWQQJKZTQUIIAXEPTWBZPLPDUXCXQYPMVXKISUDGEEACYBLFZAFOYRDSTJGHSGVWDZZUAVYTIDLIORATON");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Loiter tmp_msg_1;
    tmp_msg_1.plan_ref = 2670142733U;
    tmp_msg_1.id.assign("TPZIGCZRBPYQKGYRJQHMYFHMVXFSWKXYYEXZDBVGUTPUUTPVGPCPF");
    tmp_msg_1.memento.assign("QFKALLYMKBPCBXYHSBPUCDTZGFGHQRXPHLVPSKMZLWJJWPEBYOSLSAODPHKJNLNKIERXCETDFYSIWRUCHVSHHDKMOQZDIWRZAIQFLLFSQOUDTNUJZIECQCCMVNXGZADXXGJXYTLQOEJUSKMWOBYMXKTJYHGTOMIABZUFMWEHNEJLWFPQFTUPRPDOYBAIBWRQRXVVYVRNGPCVYNTKOTEAZSIAVEU");
    tmp_msg_1.timeout = 34703U;
    tmp_msg_1.lat = 0.539261539455;
    tmp_msg_1.lon = 0.911824675702;
    tmp_msg_1.z = 0.840171814948;
    tmp_msg_1.z_units = 149U;
    tmp_msg_1.duration = 49981U;
    tmp_msg_1.speed = 0.762785522019;
    tmp_msg_1.speed_units = 157U;
    tmp_msg_1.type = 78U;
    tmp_msg_1.radius = 0.380928188082;
    tmp_msg_1.length = 0.492769077576;
    tmp_msg_1.bearing = 0.419994644994;
    tmp_msg_1.direction = 211U;
    tmp_msg_1.custom.assign("KVUMXVIINVLBDMMEIZSACBGABCFKAPRYWCJWYZ");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.426651677644);
    msg.setSource(52839U);
    msg.setSourceEntity(149U);
    msg.setDestination(42068U);
    msg.setDestinationEntity(197U);
    msg.maneuver_id.assign("CWNJEWRXPXADCQYHGEVNECBWTDIZATFXFSUSJJNDKDCKEFAFRCLXNZDYMYSUVNYSGXABTVMPLUNYZLRQOQEPOBDITSGCXIUHWJAGXOHTVDHQKLSFEWIGLZKEZQSMBJICHHABSQ");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.plan_ref = 3241512127U;
    tmp_msg_0.id.assign("CYAUQZLJNPUJZSGFZCQLVLAHOEBDTQKECIAGAYREAXBPLBCYIOFGQUPZNCQSMOE");
    tmp_msg_0.memento.assign("RNIYETXHRASZOUQDICOZQJMHNQKVSGGTALSDUXIMBBQQTFNYWYVFPETVJNFGSZNQFTFBLYPZBCELCPAZNBKKXUTECVWAXKWVMHOUECORORMUFYTBGKPBVKNLEPHVHFPEXRJCLIZXDDXDKWOJUSOWJRHGQGSXDHZFVRAOPQHLAEBIBVKGJLDIZNUKIWECORLICMMIMCDGILUGFNJWQUDJNRSYBHAQMTXWOP");
    tmp_msg_0.timeout = 16208U;
    tmp_msg_0.flags = 190U;
    tmp_msg_0.lat = 0.687561181567;
    tmp_msg_0.lon = 0.304766840552;
    tmp_msg_0.start_z = 0.82560501362;
    tmp_msg_0.start_z_units = 247U;
    tmp_msg_0.end_z = 0.866700064009;
    tmp_msg_0.end_z_units = 226U;
    tmp_msg_0.radius = 0.526463831966;
    tmp_msg_0.speed = 0.286738885695;
    tmp_msg_0.speed_units = 83U;
    tmp_msg_0.custom.assign("MNOAFTMESNXKRQTJHUMULXDYMVGTH");
    msg.data.set(tmp_msg_0);
    IMC::SimulatedState tmp_msg_1;
    tmp_msg_1.lat = 0.256572569105;
    tmp_msg_1.lon = 0.39271526676;
    tmp_msg_1.height = 0.785651248065;
    tmp_msg_1.x = 0.41033938124;
    tmp_msg_1.y = 0.699956457551;
    tmp_msg_1.z = 0.73503349808;
    tmp_msg_1.phi = 0.368855351623;
    tmp_msg_1.theta = 0.706912354043;
    tmp_msg_1.psi = 0.0438788577557;
    tmp_msg_1.u = 0.666182617778;
    tmp_msg_1.v = 0.921633390483;
    tmp_msg_1.w = 0.55365630306;
    tmp_msg_1.p = 0.33165678581;
    tmp_msg_1.q = 0.725207750834;
    tmp_msg_1.r = 0.260660569316;
    tmp_msg_1.svx = 0.474288088411;
    tmp_msg_1.svy = 0.807115938831;
    tmp_msg_1.svz = 0.104953224604;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::IoEvent tmp_msg_2;
    tmp_msg_2.type = 153U;
    tmp_msg_2.error.assign("VFNXHETFCEOXDYVPOJJWWLMAVCCZMZIMKCGUUQZEIIBUBADQYBGKOVTGZTRUHUJXTPVTTRFZPIFIQQSOJDNHFQYJRURHCOEBZFCBXAKCWHPGRWENPDQDVADVAZBYPMEJYMRMMKFMTLLJUSCSRWHYNPKSFBTKONXEXNGPSCVRQWSLGTIWSKYCEFDNPRHBJUQLYSDKBWNIAMLDZJJB");
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
    msg.setTimeStamp(0.912339672575);
    msg.setSource(26160U);
    msg.setSourceEntity(120U);
    msg.setDestination(3925U);
    msg.setDestinationEntity(51U);
    msg.maneuver_id.assign("JPSMLCHMVLQDVASOKPNHGUSNIOMNCCBGGZWFARDEJBFZXBXMXDVYLUXHWIBKAWIKEUQVLXYEDZFYUNFPRRNEQZURDAPQL");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.plan_ref = 3094956635U;
    tmp_msg_0.id.assign("YEDAPWYQBKCEQQQCXVQUSOTDJMMZWTDIYSZDGZLVZOEORPVJLRNEYUTRX");
    tmp_msg_0.memento.assign("XKQOIPGXHUYMHAGALQWPERVKPYVHJFTRDY");
    tmp_msg_0.lat = 0.41688267983;
    tmp_msg_0.lon = 0.213553681615;
    tmp_msg_0.z = 0.440091036377;
    tmp_msg_0.z_units = 42U;
    tmp_msg_0.speed = 0.158676514224;
    tmp_msg_0.speed_units = 17U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.100504772968;
    tmp_tmp_msg_0_0.y = 0.822438834498;
    tmp_tmp_msg_0_0.z = 0.0870885187489;
    tmp_tmp_msg_0_0.t = 0.971249823348;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 12350U;
    tmp_tmp_msg_0_1.off_x = 0.574755644686;
    tmp_tmp_msg_0_1.off_y = 0.8287398611;
    tmp_tmp_msg_0_1.off_z = 0.288174405994;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.0337917473358;
    tmp_msg_0.custom.assign("LRBWKZXMBPHNYV");
    msg.data.set(tmp_msg_0);
    IMC::SetLedBrightness tmp_msg_1;
    tmp_msg_1.name.assign("MGZLXBYOQPBVRYFNHBFVFVHQQRPVPETIPUXYPACWDOEWSHAIGESPMRXYVCMFSWJGMGJOIKDXAZGENDBBACODHGDELRUAWUONYIUTKKFMVSHGLJPTAWKFDWJPRREEUPGIBJIQKWGJWETQZTCXJVSLJKOVNXZHXQFXDLNYRHLVRBJMDFOAI");
    tmp_msg_1.value = 59U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TextMessage tmp_msg_2;
    tmp_msg_2.origin.assign("HDUFZELRICXEGQOVBZBGAPSXAXULAREOGZXJUBBHNZQAYSJMLQXRIWFIERQKVOPFTLZSNZZLENRTOUXDNYOQPBZLDVRADPTKNIOCHFMNTFSHAIKNGUALZKGGHKESWHCTWDQWJW");
    tmp_msg_2.text.assign("AQDOGATPDVMATHWTYNPTOULQGBFXOTKVGHSJZCEKRQXZVKJPYQQXDVIZRQCWAECBFESSIKWSUPLGECMTBTFELJEJAKJTLZZMDTNNFZNLZBGXXHREWODJZBPUSYZROSCOBPNNLMQXIRXIWOKWAWKFUSHYIPAEMDRMUQDRCBWXUAKQXNGVMYHCTRHHRJYFFJPYUCAENUVYMNYOKODGHFPKSIWIGYILCFQBGSLPIHHIBWBVSDXN");
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
    msg.setTimeStamp(0.0095116408747);
    msg.setSource(24278U);
    msg.setSourceEntity(175U);
    msg.setDestination(5033U);
    msg.setDestinationEntity(16U);
    msg.maneuver_id.assign("XBLVDVHYALHLKDVRANQGVSHRIGCCSKMEEWXKUTJYDLHSYQWLZZBGFUZSQTGPIOAZFRLJQCDKZVWUGMMMOBNJGRCNMVPWEXHRHISONXOYMMJTUNWXKTNWKWJOTNAMIPDVOCGHUZRAQZQFYDZKKIWKVBPLVAXBPFEXHBYMFRNJVNESCSWINY");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.plan_ref = 3994137970U;
    tmp_msg_0.id.assign("BRKKPWJZIKYGXADFJXLDUYLRYVZZOFOAXVNPSTPMEXOGLTIEQNMJIZNWFTINTKTOIQUTGPWDIEZUOHATMEXQBCSTJCULMNRYYGAQBXHPWKFSCMXELOPFMRMNDHVVASBBIHRKDJHMORCZQAHPKWBJFEKFVXWSCLGRPQVTKYBNVMFHOXCYACQEDHEKROBDSSVPGRVNUAUIUCDIFAPZGHJAD");
    tmp_msg_0.memento.assign("MSUEAQLNFNYDCQHMWDGXTZKOISYAQNZCUQLPWZTLFIALBVOLAMEYGSMXS");
    tmp_msg_0.timeout = 6111U;
    tmp_msg_0.lat = 0.767853089043;
    tmp_msg_0.lon = 0.628026584494;
    tmp_msg_0.z = 0.492864549508;
    tmp_msg_0.z_units = 250U;
    tmp_msg_0.speed = 0.526457178106;
    tmp_msg_0.speed_units = 5U;
    tmp_msg_0.custom.assign("PZXIYCOBWWVAEITUOGINYJXYPCZLQFMTPPKNMLBNDRZKESDIUXVHTNXFEDGJWBAZUUMTYHKSKIEZTPADJZAORKJZHLUNFODMVFDDKXMFVAYQUFHWWAGOMLUHVYZRDDG");
    msg.data.set(tmp_msg_0);
    IMC::SaveEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("HGCHQPMXKTQIQJLTYCOSXBNIXBHGFGWZPIDEYCCNKMGWZTVZJFXFLIQZNWIGFPVNUXCTJXVRDVKPQMVAO");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.911782756784);
    msg.setSource(60212U);
    msg.setSourceEntity(174U);
    msg.setDestination(8086U);
    msg.setDestinationEntity(169U);
    msg.source_man.assign("LJRFLSAXCDHMIUXQKTJBZTYEGAELOLPGKJJPZVOYLPNBOVZMKNLQWNNTCWURMNICYFCFGZYWDHCTSTGSIDLJJQKHBZBUFXPUWP");
    msg.dest_man.assign("BAPOUWEHYZDODQXAZBNJVYAIGYGIVKYQFJMHVIUBIRNNKVTYERDBKYLTTLCYFHYWD");
    msg.conditions.assign("WIQSNSDDFYRHXHXYLBVMKWLFQOUFUMF");

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
    msg.setTimeStamp(0.0721537865587);
    msg.setSource(44557U);
    msg.setSourceEntity(66U);
    msg.setDestination(40302U);
    msg.setDestinationEntity(197U);
    msg.source_man.assign("EJOMKYECDRFXDTXZORVZQLPTBEKDEASTKXGBBZUYWCWSJPGNCSHBTIVNYFDZUOJCVAMGIFILHMQQYAFLEDBEMSMWXQPEPMHTSDICQNPZAZBOSJXWJQXQKAVHKKCEDG");
    msg.dest_man.assign("UVPBHSMHBXLBYEHQFJYQLETGFAPDDDALROUMZAEXNKCJTWGINZFKBFYISTVECAKUFVMFNCQWCQLMRSZBMSYKHAMMOWDFSCTQIRXREYJCKSQRZNXXKJIKINRARNQNBSIETCVPVOPOKEJQHBWHEVWQOHJDTDXURYBGTFT");
    msg.conditions.assign("XXUCNIPNOYJFKLLCGSXEBNGDAFZZTSDBKECOJKHBAWKWQUJQFNWINYUWSMPQBOHWGUUPSKMBUWXGKLHRXJLXOMBNBDNYSZGZQIGAXTZRFRIEUBARSMAMQZPOJGJTTFIEPCEFAVEEZLTRRVESCJPCQHCHDHWIOJ");
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.0280004205384;
    tmp_msg_0.ay_cmd = 0.220727932297;
    tmp_msg_0.az_cmd = 0.347432839001;
    tmp_msg_0.ax_des = 0.630510755646;
    tmp_msg_0.ay_des = 0.0320065760049;
    tmp_msg_0.az_des = 0.612815466889;
    tmp_msg_0.virt_err_x = 0.814894091453;
    tmp_msg_0.virt_err_y = 0.966946523514;
    tmp_msg_0.virt_err_z = 0.0471832055059;
    tmp_msg_0.surf_fdbk_x = 0.276624063291;
    tmp_msg_0.surf_fdbk_y = 0.558742086245;
    tmp_msg_0.surf_fdbk_z = 0.113661895249;
    tmp_msg_0.surf_unkn_x = 0.707841026107;
    tmp_msg_0.surf_unkn_y = 0.456876035862;
    tmp_msg_0.surf_unkn_z = 0.234446525528;
    tmp_msg_0.ss_x = 0.623689088924;
    tmp_msg_0.ss_y = 0.441306564899;
    tmp_msg_0.ss_z = 0.616594601926;
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
    msg.setTimeStamp(0.943176155183);
    msg.setSource(522U);
    msg.setSourceEntity(228U);
    msg.setDestination(64894U);
    msg.setDestinationEntity(23U);
    msg.source_man.assign("VDBGLRPMIRPRXOFPJRLZYDAUAUADDIDBLYHRTXOFXHQWIOUJXLNVBXEEETNOENIRRGJVKZGOPLFHCBJMYYPGIILXYSKFQCAOFGHAPQXUTHTXWCPRWXNWMECWZMLZYALVQYTCWOLBRMUPMVSVNPJNADWKSNQKNWCVSHQJEBVEKUNOTGFRQESCVFMTBSDLTDGCAASZUDCQZSHIMKGYQJVIFNHJZIEGCMYHJBUTMPWDZ");
    msg.dest_man.assign("HUOGIKPVKVCPEYSEMGNKSJLYATZUJFSLNFLCHXCPZHZMZODIUZPTCCWTGNTEVOIWZUSJDBGRFGUQBEITRJQVKUBIWHSYKOLXFXVAMCGIYBEMBQXNAFGQWSIKLNWPMRXRXPDLYWTNETHYQJODHTUSIOUWNUYUKIZVGKJILVJKXHZDQCPZFXBVAV");
    msg.conditions.assign("GSQRADWDPTNVJIQBCX");

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
    msg.setTimeStamp(0.810774512366);
    msg.setSource(25786U);
    msg.setSourceEntity(2U);
    msg.setDestination(39037U);
    msg.setDestinationEntity(254U);
    msg.command = 250U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FBXCTKWRXAHASU");
    tmp_msg_0.description.assign("EIUSWIQWIXABXEPFTCVXUIQRSUDKZMOTFMPDSMOVUDDNQEKKANTQIZFCEGCEIH");
    tmp_msg_0.vnamespace.assign("ISLHBGRMQOCYACADUIVKMYJJKMZVDCESTHRUFGBNDASXSRWXOIHJRZYIZNLLVWPZPAKDBJTCCIAVBUYMTMNYXFNYHUNGPULBCVBNUKJNDZZDSWGQUHB");
    tmp_msg_0.start_man_id.assign("HKFKCPUUSRLRQARWXDYDZJAQRMLHVIQKIQTSGVXJXMN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WYQJNDMWSPTSOBVEXKDMARCYERCBZWDEBVGCUMIPSLMIHPDJMHZABXUCNUAZNYAFBPEAQBUTDZCPTNFVOQFLTPAEDXHIXSWORXUGDYKTFZNYMYRROPOISVOSQVRJKJLGAFCWNVBNBQEWNYXHMJIKBUIRQSOFICHYKLWLEFGYFKWBXTDHKSGZWZLEGXGMJTTCEZCUDW");
    IMC::IdleManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_ref = 2553011328U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("YHRBPLZZSQFVVTVWXCOFKBUGYTTYEFSFEZJSDGQOIAXYFXXEVOSNULBCZXHJAHVEIRTJIGZFTNQDLJETAMRMBNNKWSRHLLJHKYHOVALBVPPMLEJCIWYIMCXACXKQEWRPUTPFHMBSZKRIRGYKBFDBINOHVPQDPWXSWOHNCDTRCDOFVEMRNMODNLMUZB");
    tmp_tmp_tmp_msg_0_0_0.memento.assign("TKGTFXKRHODBSSPJAKUMFGDOAQNIZMOMRCTIWWXXRBBZRRBMSEVXEIVGBYAQHFKCBLNNDFZUYVOQTPMXYPSKMFCKVDGSJUTYFREJ");
    tmp_tmp_tmp_msg_0_0_0.duration = 7251U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DUYKRTCQIUKICHNSTOYJSZVGQPTZXXAAQYWBIVDADLNXMGFQWGWDBMJLHJPERZMLURDDSWMUZKRWFTHIXJSHSEGABQYUCBWVHBUEMYHJLOHGIRWLNVXOSRJFJWGBFGLKHGMRMFBP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::AcousticMessage tmp_tmp_tmp_msg_0_0_1;
    IMC::VelocityDelta tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.time = 0.0670256101471;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.x = 0.549182312194;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.y = 0.547031057899;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.832887077751;
    tmp_tmp_tmp_msg_0_0_1.message.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.384543455663);
    msg.setSource(16209U);
    msg.setSourceEntity(124U);
    msg.setDestination(63959U);
    msg.setDestinationEntity(86U);
    msg.command = 75U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RYGFURTWXGBGNLWMQCEFACHKPDPYRAFDGQYXBWPUPUMRBABXJOQBYDQSSPTAAMHPPDVUSINOCLNIPSWGVIDXFGXFOLATDUQNBCIDLZUJEJRZMBZHOFUKBZKUXDVVRSHNSXMCBGULXAHUILTEAXKYBNZGRWNKVWCSAIDCITLYFJGMMLIRGPRDVEEEKRHTZHEWQNZLKZCJIFVYYHPCJENNJVTKEEYY");
    tmp_msg_0.description.assign("GBEXXPSDGBMVZCAVHVAIMFZEHTIDKSLOJOFBTJQUWWJJQAONJQRBOLKBEHGPWHNYTJPAFBIMUDVJXYNH");
    tmp_msg_0.vnamespace.assign("HMDVHDXYKOTZRTAFNSBXMPDYYSPHALWUTOYBIULNEWMPPCQZXTFDLFWAWKRRLVJCEFUXCEVMAGQOQSAGAXKOCRKZVKJGNXQPMGFSREBDAPWUQWTVZEXVJYKELGIASPQYHETBGBPHOMSNLGHRFIQJCLDPXBIJZRQFIKUNLSOGYZGDVVOIRIXJUZNRCUZJEHNQUATLWUFNCJKIAMYOPSCSTKQCDHJEEVYXVIUIDNBKNGSYWZWBDWBJMO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VUOCIHPHTJPTYIAQGYIFKYKHSETONOFXPLAGVYWJSSKXUSCYPBGYBSMUYPHXLIQVLILPQLSNGVERBHRFKIA");
    tmp_tmp_msg_0_0.value.assign("CAVMNDRPBZQOKMDWMRPUVXJPTWUTLEEKODLWKLYXMSVYCTJHUSMLTCDLGCFOOBGLNUGGCFFRMIIBRHXPFZLDRNMJWQKUOQFKNDUIOZUACMHYXGJYFXARLJTXWNIQUQZNZHTNSPETBIWDRAFFEDLNGVOXBFHQPHZAHWZRHIPESXVJABSJDCXYHBZENTDMEOIKISVTITQSOBRJMVCVYLAGQUG");
    tmp_tmp_msg_0_0.type = 78U;
    tmp_tmp_msg_0_0.access = 83U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GRKPLBVTUBMFFYAVCCOOVLBBAHDGJWPVNXSNBDOBKPUXJDEQXPYVMMESUXGDIXVZLONOYBVZTJSCNWNJWIXBFDRSQMRL");
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
    msg.setTimeStamp(0.116704067979);
    msg.setSource(30764U);
    msg.setSourceEntity(186U);
    msg.setDestination(55513U);
    msg.setDestinationEntity(130U);
    msg.command = 44U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IMETPMYLLLTYQCQJLNMFQCLZVDZIZJDCPBRPFDLHGIYYPNINTHSPRUSSVKWCXCVQFMAYKHQMSQDOXVSKDNWXZBI");
    tmp_msg_0.description.assign("GANSYPVCQCXWUVOSCHZIZJKUBWKJCKNBKFCQHGJAQLEDDANSUSJOEFJQVTMUFNLZEJDBTCHIXQHLZDEALKFYZDDNYWVEJLUTRIHZDFRGFRWYWPBUORJSIVEZXHQKRDWYESKIORXVWUWVGALITPAMTBONSGJEPZPSTIQXQQGCJXARHGMAFYPLGBHYXNNLCUPIYDGXUMMWMZTEIPCNCFALOYUMVKOSRYEFXKWMAD");
    tmp_msg_0.vnamespace.assign("BLAWDCBQPEHPFCCPKUXVQCKYVZYV");
    tmp_msg_0.start_man_id.assign("WIEVONSXVLQJLYAXHWCHJERFMLFIEKPUVFKNTBRMQRVPAKDDTGYWBXILAVNBGZIUOWUUZEOAZQGHLCRMZHFDBTXKRXIJSBPLFGDELQNREYJUJPHPSECADPRDJRQBDVIANZGEYYXJTSFQKSAOUWGJOEYMRDZQWLPCUAINWTBCXXWHMFCYDZHLYSOOTCPJKIVGOZIUHSWXCAZLGNIYNKVPQQSKNTVQCMAKGSSJDBBMTPUHXYBU");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("CBMXEJZWHTZPTXNRIUNTWIFESIBEQ");
    tmp_tmp_msg_0_0.dest_man.assign("INGTJEPGSAGFLMZFKOGCDEXBOVWONNKRSDTAFBIHIXRNPIYOMNDCNOIYJSZVWPKLFWTUXCKISUAAMNLQTSL");
    tmp_tmp_msg_0_0.conditions.assign("VHZJCKUMRBJR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::WaterDensity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0651684018116;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::CpuUsage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 69U;
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
    msg.setTimeStamp(0.486258727582);
    msg.setSource(42491U);
    msg.setSourceEntity(159U);
    msg.setDestination(59754U);
    msg.setDestinationEntity(38U);
    msg.state = 215U;
    msg.plan_id.assign("RLWGIQHIGSECRNNKXMKEYOJOWVJADDPDKFLZNEOCXFXNRISEYFFAHPPIAOVJDBIGEZBWCDWXBMEKAOPWOBMMAFSSBVLQDVO");
    msg.comm_level = 87U;

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
    msg.setTimeStamp(0.501879837655);
    msg.setSource(49259U);
    msg.setSourceEntity(7U);
    msg.setDestination(9786U);
    msg.setDestinationEntity(30U);
    msg.state = 168U;
    msg.plan_id.assign("WBBMKZAISOTFLHNECXXMJDSAQDFCUHLBTIFPLHADGCPERJFJZGVXNOOCXRKIQRBTHLHKYTYPVPQDWHPINKFSFVQPFQEWOHSKYODBUAOBQZZGWIVECAAPY");
    msg.comm_level = 167U;

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
    msg.setTimeStamp(0.592608167235);
    msg.setSource(52094U);
    msg.setSourceEntity(165U);
    msg.setDestination(15514U);
    msg.setDestinationEntity(220U);
    msg.state = 148U;
    msg.plan_id.assign("QKXXYVJCPHQYTLPNHTPCICKDLEYWDBROBLKUAYMNEGBDSGKNZAJKLNGRJOWRSOOIUSGPQMWQUWVGXLYGYJHSWEUFNQLEBIUAWTIUDBADFVPNLCWPDHGDTYXBUUYRAOCVRLGQEMWQSOCLEETAPNFMACTDXMRZVMZSHZVXXFCGHVKXMFAOYNOTXSKRCIJZJJBAEJZBGSOJERZZFVSDQPIIKNQJTBHIPPMWBMDAZHVOFFRRLUQ");
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
    msg.setTimeStamp(0.246514584146);
    msg.setSource(16299U);
    msg.setSourceEntity(145U);
    msg.setDestination(28057U);
    msg.setDestinationEntity(30U);
    msg.type = 224U;
    msg.dt = 110U;
    msg.op = 164U;
    msg.request_id = 843U;
    msg.object_id.assign("WUTZVBREZNXSCLWDSOMFPWEIKGOIUSMHXISFRXARATRMFLZTDGALPHQANXJWHFDPJNZAOQALNJGOXGBYGGWJABTNKSPQDSPTEMDUDITMDWMPULYKDXPQJVGBKZHCXJRROEKLVXSXGHCBVZUZOKHSWQDCFEAOJUEYQUPUOWCUICVOLKBR");
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 15U;
    tmp_msg_0.longain = 0.794722103241;
    tmp_msg_0.latgain = 0.620338029298;
    tmp_msg_0.bondthick = 110333328U;
    tmp_msg_0.leadgain = 0.525036290864;
    tmp_msg_0.deconflgain = 0.426409445736;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JFRZRWBKNSMCGHXIGEWSKVQWQFJCKTCIZFULBJSPPQYXWMZQHWPWSOZRANMFOBGOCFKZBJMEEISYXNMOU");

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
    msg.setTimeStamp(0.647394058792);
    msg.setSource(30262U);
    msg.setSourceEntity(121U);
    msg.setDestination(19767U);
    msg.setDestinationEntity(184U);
    msg.type = 56U;
    msg.dt = 11U;
    msg.op = 143U;
    msg.request_id = 50638U;
    msg.object_id.assign("VSXVQDBDIPWQGNPJTFLISILJCHEBUCKKOBZSQYEWCUWWZQXYRSUHIKXBMREBROTVIVESTOCNIUKTZGLTXRBBQJTMLZRKGCMD");
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 23U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YEIHYXCHZNYCVYYWCDKUPHIBJGANIHEYFUDLMALDVVEBTBQVPINWLZRPVMZSFYMQGUHXLFCAWMOSAJAODNRWFUTJKCNTAGUUSZTDZKPIZIQBDEKQHWTOREWYFLSUPYWAVVTHDBLEJXRNARXJSLBRBQQOFPSXFOSCIMDZGOOXNHAAXRWRQNQXMMSLSKCCRIPXOWLECQRIEHUOJTIUDJFCYUNVTKMG");

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
    msg.setTimeStamp(0.351980677935);
    msg.setSource(31703U);
    msg.setSourceEntity(192U);
    msg.setDestination(45830U);
    msg.setDestinationEntity(234U);
    msg.type = 209U;
    msg.dt = 197U;
    msg.op = 174U;
    msg.request_id = 19492U;
    msg.object_id.assign("ANOMFYADGSLGNCGGHHNJLAVUEMODHBRWPFPLYMWJTTPPPBNHFZAULZCNLNUCVKOGCXAUJHZKEIVOZQJYZPFMHBIKRRWUQLJYXEYWEGJFFKKSOFNHKHNKNXDPJVYCTXQARMKEEIRRUQSSNBIQJMDTQBTKCSRUSDLGIXLCIXBMTBXDEGHICVBIVZYVDPOOUXQASOTFROFKEEBAYBJIWTQOWXMGPD");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.plan_ref = 470191402U;
    tmp_msg_0.id.assign("AXMBYCFNAJFAYXJYSRJAWTTYPTHEXBLUUHSZOKSWPPADUWRFTMQGNWPLQAOBHBJDNRVONNIWDIMNMXVPJGLHJZFOVCYGGHEUEOYQQXTWLVWQ");
    tmp_msg_0.memento.assign("LSMENIISVTPKWOSGNQUHSGBPNPMZDALKERSMCQYOMZFKPWZLWWTNDDCWKFOBBRTMFECLDZTEHROFQNHYRNAIHEG");
    tmp_msg_0.lat = 0.799624874174;
    tmp_msg_0.lon = 0.271883356343;
    tmp_msg_0.z = 0.35596521389;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.radius = 0.538495611743;
    tmp_msg_0.duration = 47461U;
    tmp_msg_0.speed = 0.436646563279;
    tmp_msg_0.speed_units = 145U;
    tmp_msg_0.custom.assign("OMMGTACDLVMXLPSRPJCGVJPBMKFXMFIFQOSFTAUKGDDJYNYRKPZLKTFXOBXFQSEQRENAMJBCESHMBNUZCKWFKIJEOGQUUCVXTOAPDATYNLEUBFICWROZLVAYCNIEPAIHCEXNSXXLJZLJMBOPIRJSVSIZKEYKYBWW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JVYBGFUDDZQUIDQUXPVWLUEXOCHTMH");

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
    msg.setTimeStamp(0.704775860468);
    msg.setSource(53803U);
    msg.setSourceEntity(98U);
    msg.setDestination(11666U);
    msg.setDestinationEntity(12U);
    msg.object_count = 53633U;
    msg.object_size = 2394467878U;
    msg.change_time = 0.766740663349;
    msg.change_sid = 45416U;
    msg.change_sname.assign("MFJZNADYWMRPZBQTXIOKBHJHKZYFWEQNHKZQOGPTIPGSMLMFDEOAVYBFPZQRINZGJSYXXTWIBUWILSMYDFAQFRTIUFYLGYUQRBMWHMEVONOXJCAPENTQOEXSESDBXCJXGNQRKUC");
    const char tmp_msg_0[] = {52, 31, 25, 116, -45, 110, 126, 80, 76, -73, -10, 29, -33, 111, -64, 40, 41, -70, -10, -66, -121, 89, -11, -47, -23, 106, 115, 94, 114, 92, -124, 80, 101, 12, -97, 13, -13, 118, 7, 58, -15, 120, 112, -73, -113, -55, -65, 119, 61, 33, -37, -63, -68, -125, 92, 100, 117, 55, -100, 57, 113, -66, -122, 121, -104, -69, 29, 99, 54, 119, -82, 23, -68, -42, -40, -32, -121, -11, -64, 84, -54, 68, -109, -26, 58, -1, 8, 33, 125, -120, -32, 14, 92, -95, 11, 78, 57, 6, 121, -99, -72, -52, -71, -89, 26, 17, 111, -87, -70, -92, 40, 16, -1};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.object_id.assign("WTTJOYLLKKUDMYOVVOJHHQUSCCIPCGRVMQCFFWXYABWTEVQX");
    tmp_msg_1.object_size = 15136U;
    tmp_msg_1.change_time = 0.710532425359;
    tmp_msg_1.change_sid = 29535U;
    tmp_msg_1.change_sname.assign("GGIMVAOAIBVAWYOWENEMUULOKSK");
    const char tmp_tmp_msg_1_0[] = {-109, 39, -17, -122, -69, 47, 61, 75, 70, 15, 76, -54, -123, -79, 2, 66, 77, 73, -40, 124, -60, -89, -19, 83, 107, 113, -111, -35, -65, 77, 4, -55, 0, -74, 43, -124, -34, 68, -69, -41, -68, -1, -107, 9, 122, -64, -61, 69, -84, -75, 95, 31, -128, 38, 49, -90, -55, -58, 125, 120, 13, 64, -13, -127, -85, -69, -93, -109, -80, 18, -54, -105, -127, -93, -21, 58, -22, -72, 38, 84, 121, -89, 73, -29, 96, 93, -100, -17, -65, 38, 111, -41, 7, 115, -4, -80, 76, -74, -78, 98, -52, -126, -47, 62, 20, 26, -123, -85, -12, -15, 53, 39, 54, 42, 116, 37, -16, 111, 111, -90, 28, 107, 88, 57, -59, -53, -24, 46, 41, 40, -23, -50, 115, 32, -90, -9, 46, -6, -101, 100, 69, -76, -61, -7, -108, 85, 60, 103, -49, -6, 76, -60, 106, 111, 36, -95, -32, -16, -90, 105, 83, 117};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.object_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.219824487749);
    msg.setSource(28169U);
    msg.setSourceEntity(72U);
    msg.setDestination(8571U);
    msg.setDestinationEntity(230U);
    msg.object_count = 11870U;
    msg.object_size = 745374208U;
    msg.change_time = 0.102126072538;
    msg.change_sid = 57554U;
    msg.change_sname.assign("YKRVZJAUONFZDRAXNISHGJAPMECYHWHPAVWUISVYMOVZHLDXDTQBNKFKVLMPNYNRPCTFSAGPQTFBKRUODQEUBEMWYMXAI");
    const char tmp_msg_0[] = {71, 22, 114, -45, -63, 74, 38, 43, 43, 121, 25, -99, 71, -85, 36, -115, 109, -122, 10, -92, 104, 46, -80, 66, 117, -90, -103, -32, -18, 68, 15, -47, 94, -84, -4, -7, 1, 42, -72, -90, -5, 0, -85, -30, 44, 20, -106, -118, 93, 103, -126, 53, 19, 24, -46, 27, -116, -118, -43, -78, -64, -123, 27, 15, -126, 51, -45, 93, -64, 59, 3, 60, 71, 109, -21, -46, -50, 36, 87, -110, -90, 34, 65, -39, -67, -81, -72, -103, 84, -43, 67, -22, -20, 80, -57, 76, 49, -78, -24, 44, 25, -93, 75, 123, 75, 5, -96, -124, 47, 99, -111, 21, -25, -91, 18, -90, -17, 31, -37, 99, 4, -103, -13, 104, -91, -92, -4, -30, 42, 124, 14, -17, -127, 105, 28, -22, -101, 9, -59, 70, 93, 107, -91, 49, -87, 94, -76, 74, 55, -83, 40, -124, 10, -14, 1, -109, 21, 5, -51, 56, -63, 11, -119, -23, 20, -90, -8, -102, -64, 96, 7, 41, 59, -48, -30, 54, 73, -123, 1, -11, -54, 13, -24, 28, 105, -87, 113, -91, -121, -93, -50, -29, 119, 13, -49, -109, -67, -75, -59, 81, 116, 110, 16, 38, -96, 97, -65, 36, -33, -102, -112, -65, -107, 111, 33, 4, 72, -32, 33, -41, -39};
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
    msg.setTimeStamp(0.321300772718);
    msg.setSource(60551U);
    msg.setSourceEntity(190U);
    msg.setDestination(18573U);
    msg.setDestinationEntity(219U);
    msg.object_count = 7487U;
    msg.object_size = 1078824062U;
    msg.change_time = 0.279675336979;
    msg.change_sid = 5981U;
    msg.change_sname.assign("YUHJSINAOPMLNRJRXJPBNRIOUCVILQTBMZKQHHVGCTGVDAUAGMFRMXAAQUONSKMIVSXFEPZPJHSDCDOPCBYBXPSQOWZNRNFHBTWAEKNIRMJSDCIAGTWZFGYDQPYYFCLBTKNFVPYTHXMVRIGJVEWHKMVIDCWZUKXQVYYZUWLOJQGJCIYVFXKEFAIUWGAPWWJKBCGSFTBMUOEBSTEUSQOHQRXRTLGMKZTHJFLDKECP");
    const char tmp_msg_0[] = {60, -121, 115, -71, 24, -54, 80, 65, 10, 82, -61, 61, -86, -87, -28, 74, -34, -79, 124, 1, 91, -101, -48, -56, -42, -111, -42, 101, 109, 65, 59, -38, -4, 53, 55, -41, -14, 42, 36, 105, -6, 121, -27, -112, -18, 66, -86, 52, -98, 114, -8, -99, 90, 73, 40, 24, -49, -53, -86, 37, -53, -11, 11, 41, -85, -65, -19, -64, -58, -127, -85, -39, -55, 120, 79, -24, 112, -31, -47, -20, 6, 118, 12, -128, 91, 46, 122, -23, 124, 120, -99, 6, -55, -94, 2, 123, -113, 98, 3, -29, -33, 42, -18, -102, -4, -78, -18, 35, 6, 45, -92, 81, 71, 48, 13, 83, -110, 65, 65, -26, 38, -72, 68, -115, -22, 67, 7, 87, 78, -86, -97, 35, -4, 41, 86, 30, -48, -64, 94, -118, 5, 12, 87, -72, 119, -48, -106, -74, 31, -109, -128, 35, 54, -9, 93};
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
    msg.setTimeStamp(0.609782570371);
    msg.setSource(12683U);
    msg.setSourceEntity(212U);
    msg.setDestination(19996U);
    msg.setDestinationEntity(66U);
    msg.object_id.assign("ZWAGGWEIRAIYLVPDOKNPHDTLGLGLSUCJGTMLUROFCUQ");
    msg.object_size = 51802U;
    msg.change_time = 0.612550393012;
    msg.change_sid = 4455U;
    msg.change_sname.assign("SVNTZSCIFREPHWOYEBIPNRBSCMATNTAHJZKDUHICQOOHASQNEFJQUEPLFXEMBRJOLUVRXRMDTNTKZUFN");
    const char tmp_msg_0[] = {-112, -58, -100, 93, -85, -63, 23, 115, 88, 82, 75, 27, -91, 101, -88, -20, -114, -80, 62, 120, -49, 33, -29, -87, -82, 54, -102, 45, -105, 31, 67, -87, -78, 73, 19, 70, 64, -39, -126, -80, 91, -46, -86, 45, 34, -114, -104, -97, 120, -52, 1, -10, -29, 5, -112, 38, 92, 57, -35, -53, -79, 91, -57, -113, 0, -82, 103, -72, -128, 56};
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
    msg.setTimeStamp(0.606387820745);
    msg.setSource(30540U);
    msg.setSourceEntity(55U);
    msg.setDestination(58309U);
    msg.setDestinationEntity(47U);
    msg.object_id.assign("GLEORLMUAWPLCFALZYSJWQOYVIBZXZIHHZBBBDFSGPOSTDZ");
    msg.object_size = 47661U;
    msg.change_time = 0.454250323638;
    msg.change_sid = 19170U;
    msg.change_sname.assign("MIQABNRLRQTTMYAHCSWHADFBJDHXAGVHLFSCLHBYA");
    const char tmp_msg_0[] = {-103, 26, -27, 88, -39, -111, 97, -105, 27, -117, 51, -124, -29, 16, -35, 109, -102, 110, 46, -33, 39, -37, -121, 84, 69, 6, 125, 4, 94, 35, 1, -59, -63, 21, -117, -34, -26, 31, -29, -4, -99, -42, 90, 92, 96, 10, -62};
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
    msg.setTimeStamp(0.0909904860975);
    msg.setSource(9330U);
    msg.setSourceEntity(250U);
    msg.setDestination(5038U);
    msg.setDestinationEntity(254U);
    msg.object_id.assign("QRUNZPAGDENCEPWJDMAWTGARUBOKTFK");
    msg.object_size = 31960U;
    msg.change_time = 0.557125381008;
    msg.change_sid = 62088U;
    msg.change_sname.assign("KUGFGJRPIMLGLOMTKLVSXVVSKCPAFJZYOUOYTGKGNHHPSOBPGFZECVXUJZCYADLSNPWEDGFYUCNIOURBTNRFBZUACKQQWNCHZEKUSUDYHISPLAEIVSTMUYLVKYZIXRRPDMWXWIKJZLFNDWQ");
    const char tmp_msg_0[] = {-123, -95, 10, -31, 6, -123, 123, -110, 13, 21, -128, -53, -97, -127, 105, -96, 22, 93, 24, -127, 69, -59, -28, 26, -5, -94, -104, 1, -49, 105, -95, -100, -118, 42, -111, 13, 46, 70, -74, 100, -69, 43, -62, 112, -85, -55, -43, -86, 8, -32};
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
    msg.setTimeStamp(0.0974039450681);
    msg.setSource(44755U);
    msg.setSourceEntity(48U);
    msg.setDestination(21236U);
    msg.setDestinationEntity(161U);
    msg.type = 194U;
    msg.op = 108U;
    msg.request_id = 50361U;
    msg.plan_id.assign("NCVWKJRQVNTAVYRBONBZCOMLOHEEWAYLI");
    msg.flags = 26547U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.619282563037;
    tmp_msg_0.x = 0.919589207244;
    tmp_msg_0.y = 0.271077331683;
    tmp_msg_0.z = 0.148012716094;
    tmp_msg_0.timestep = 0.0983330091523;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AMIQXSBLQLNMLOPEGSEZQOKKUBWIJUWBEAIDUUPYLNSBYLAWRZCZIXZLMCFNDTPJLNSKNEFJPVYMIPLPRSYFBCGYKCOARIXFJZKRBOMUGRETOTTVCQDHGVBFGSZTBQXJQKVKFRYJIGLYW");

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
    msg.setTimeStamp(0.788616136298);
    msg.setSource(23493U);
    msg.setSourceEntity(212U);
    msg.setDestination(25967U);
    msg.setDestinationEntity(228U);
    msg.type = 175U;
    msg.op = 119U;
    msg.request_id = 44318U;
    msg.plan_id.assign("GPCKEQOVZTHUOLXLDPEVEJRRIFHDPUCVHSBAGLGMJUDOLCPZIBSXKXMJSVIACFABMVAYYUTKTRFRHYTYFILDDMZWSPZVZNYJNVWJIKMWTMOCPFZZTHZOEJIWVNSNCORUFBBRZGQXVMFIRONMFNXKPAMSVRHJEHPBESLYCQESRLXQKCEEIBDQXTWWQKWQOORTBJDNMJGGKFUDKTUAHAXDYQQKNWJSUPGFDSH");
    msg.flags = 57337U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5329313238;
    tmp_msg_0.lon = 0.907369320361;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GURWLADUMLROUQEDVRPFSHCESYPFWKETPDS");

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
    msg.setTimeStamp(0.854450285751);
    msg.setSource(17942U);
    msg.setSourceEntity(176U);
    msg.setDestination(21995U);
    msg.setDestinationEntity(156U);
    msg.type = 223U;
    msg.op = 134U;
    msg.request_id = 27507U;
    msg.plan_id.assign("ONBBHISIRFRGS");
    msg.flags = 63579U;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("EFACYFIKAINZYSMHGSSBKWHQLGXJLQDYJANNLDFIPRVDDHCOUDTYNZRQJPVPLZNVDOQRECDTBTUUZVBBXOKOHABRBOWFUHKCRJFQRSTWLCUNTMRDGKATWICYWDVAHAJXGJRYGIIMDZJTCYGT");
    tmp_msg_0.predicate.assign("JZKAWRXBLOCLUQESIQTUVLETYVBHNTYPIWEEBWIVFQUYTLPZTZWZHOTERTHKUUUXGDZZGCCNFFPXDZRNMOQBGQIGJQYHEOJSJEQSBAGJFRMDAWIZITKDOJSXRDKAFNSHHLMHYXLOPIDGJPDNYCXWJGWGL");
    tmp_msg_0.attributes.assign("YJIBCSRRENFLGUXCTETIXFDKJAXBQNHEMMSYVZZLEFYDOCSZXQSUAHCDG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RNMRAQCNXIBFKVHUYBDIBTOGLTZEFCOVUKDDPLRIXCVDQKWKROTRYNTLYHRYDEIMOESZHNWZCUJQQXZJOPMBKQOWTJZFBFVVTSMBGHV");

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
    msg.setTimeStamp(0.72072456011);
    msg.setSource(58020U);
    msg.setSourceEntity(194U);
    msg.setDestination(38777U);
    msg.setDestinationEntity(162U);
    msg.state = 147U;
    msg.plan_id.assign("LCRSXPGTDMPV");
    msg.plan_eta = 1572540314;
    msg.plan_progress = 0.0657248350702;
    msg.man_id.assign("AAJXSQKDTRIOWEWJFHBIZNAPXJQUDUKKSEPHFGEQTZZJCENRCKXXUVUSEBSVCOLGQJQIZIEALFWTEKPQDGQQCWFEUPZQLGEFWUPVDLOQJVADNTMFETXMYYBSFNVHSZFTBGYPRIDUXNOOGKLVHWDSFROODYXUNLGRRDSYYMCLTZFMIXWMBMMJJYGKPZVYOOZKNRKLAXLGXCIMAHMPBRUCNJIHATDWKNSVHZCCVHLBG");
    msg.man_type = 30226U;
    msg.man_eta = 537947289;
    msg.last_outcome = 108U;

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
    msg.setTimeStamp(0.906507872864);
    msg.setSource(61678U);
    msg.setSourceEntity(144U);
    msg.setDestination(1789U);
    msg.setDestinationEntity(142U);
    msg.state = 37U;
    msg.plan_id.assign("KSZLKIBAMNDBSUIKHNFYLRZPSHLWWTLLQCLWGJGBFQPASEATNTNXSHXXMEFBDBCUDUVPWKFTZNDYOHQMKUZJEWHPHOYOOPVQZDZJOVWLLBYCAAINUIRAFHKXEOQGCLUVRBVSVYWYWQMMMXSRRAJEVESRXIXIPZDTDMGBMORRYPTAOGYNXIKJTOUYJVGHMFGNJZMQTCTZZPADIKQIHXT");
    msg.plan_eta = 2017690658;
    msg.plan_progress = 0.989471987116;
    msg.man_id.assign("ZSYYMOVXBHPDJYFBPIGRJTPBFIOEAJDRRSIWFYDVMLNTFQYNAMHLXHQJQOYQIIGXPSKOZDRZPNAYHWZJIRHITGUABRHZYKHNWLRTOMNGDRQWXQOKFMNWGSFSBPNMUTQXEYEEBJVMR");
    msg.man_type = 26045U;
    msg.man_eta = 1106267222;
    msg.last_outcome = 59U;

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
    msg.setTimeStamp(0.549204043196);
    msg.setSource(16349U);
    msg.setSourceEntity(60U);
    msg.setDestination(46113U);
    msg.setDestinationEntity(101U);
    msg.state = 163U;
    msg.plan_id.assign("YJXEHPPEXUBERDHHRLRJAULCVPVWSLOQIDIXOCFTKUXLNWHBVUJCRIMKDYKZCDBBIGBHDQTMABWKCTOCRVPQDUOHLFMJWRMNNEKALGXFZBTCTNGLAIOWYTTTZXYWEUKPSFCGQHZJJGMFTQPFBUOWLSYNJGPZMOHY");
    msg.plan_eta = -1019926106;
    msg.plan_progress = 0.197519806683;
    msg.man_id.assign("XJKOZZBRAFLHGRYHGFQVYYMKIQVNONCGUZIOUPXWTIWYCMMQUXXAUYACQFJJRIUBZAMMFTOWYGAQ");
    msg.man_type = 994U;
    msg.man_eta = -184535312;
    msg.last_outcome = 190U;

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
    msg.setTimeStamp(0.914507223929);
    msg.setSource(45416U);
    msg.setSourceEntity(117U);
    msg.setDestination(21730U);
    msg.setDestinationEntity(86U);
    msg.name.assign("NXAQEAIYLNLZKYTSOCFIDZPIWKHMQUIJRHVYVMHKCNNARELIKDGRLMGWNOTOLGSAJTFVVZASFTRVMIOWFQDXGXMEWEFDLRHFSDMAUVOEELBATSCRRSZCQQJNYOACDSOZGCPABOQNXXHVPUMUOJQSDGBVPDXIBNFHKJTKPZGHIBTJWJCPCPYHLCMYWXWQEEVJQIKBTXWYZMTYKGWPWBSNGDULCXMVKEUQP");
    msg.value.assign("ZENVHKWTXUQFJLGXOFCRJTEMDRVXOIEPYOVABIFMSOCVCFXJQLKCZIXDEDWQTUMPSSQIBVNIWCQUKHGFAWTARH");
    msg.type = 114U;
    msg.access = 252U;

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
    msg.setTimeStamp(0.28189756294);
    msg.setSource(24431U);
    msg.setSourceEntity(17U);
    msg.setDestination(4664U);
    msg.setDestinationEntity(179U);
    msg.name.assign("LSZAQAYDZSUMXLCDMVVOZGKAQITLIGCJFBOQNDATEZBYHUHBZCNIWTTIWRANXJDQLEFQLJSJGZLALRMRRQZRPFKOIACLIYRWHTEYKWKKV");
    msg.value.assign("LDFZOGHFTJJHYVDLYFCPUYVTISECXGLKSNSMPKMUAYIUTCXCQBXDVHFSAOJEPTVGMLBPQNS");
    msg.type = 160U;
    msg.access = 88U;

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
    msg.setTimeStamp(0.0104410417185);
    msg.setSource(5291U);
    msg.setSourceEntity(80U);
    msg.setDestination(13863U);
    msg.setDestinationEntity(109U);
    msg.name.assign("SBUNGFBOYMXAOPTHKSDMXQRLLOAXCDDAYXRJSHBGECCNRKNAHYLSXOQYQQGHDLRLUEZANMDDOQDPSINHDVAJLZJCVRZCQWSKYFTLGPWGKKGPULUFXJJFNZQLHRMYYFUGSWRCETQOREFWSPWVGVWZKIPIDNMOHTVRKEDIMAMBJPCSORQMHIJEUVZTZZUETMTJXIXWPTCIBBFUAEBYEYMEHKWOHCXAUQOPJYGWNLGPVISBNTVUCWVIBKZBFFNZFT");
    msg.value.assign("VKSXERWJRTFMZLQBZUIBNIACFJXWMJOTMNHMOLGLUZFFTAKWRRNYAJCMSUCVYAHIPQC");
    msg.type = 172U;
    msg.access = 49U;

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
    msg.setTimeStamp(0.264772539457);
    msg.setSource(35399U);
    msg.setSourceEntity(9U);
    msg.setDestination(58649U);
    msg.setDestinationEntity(51U);
    msg.cmd = 212U;
    msg.op = 33U;
    msg.plan_id.assign("IFRBYQNKHGWSERRGUALXELPHDJWZCSDMFXOMEZBJDZPQUTUSOQHXYYATAOHNIAJVIUMTLLKJGPWCCMABJCTJMYARGBVWMGDKINDOKWHRAHSSUVXNZKQVJJGBDIEOCGYFUREYKXPKMIDOSEUZUGZZTQROCVEXILLVFEFPWLT");
    msg.params.assign("YVNTUKBVKSCYBVHFUWDCELQZZUXALAEFO");

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
    msg.setTimeStamp(0.310530497311);
    msg.setSource(39495U);
    msg.setSourceEntity(52U);
    msg.setDestination(50642U);
    msg.setDestinationEntity(226U);
    msg.cmd = 98U;
    msg.op = 52U;
    msg.plan_id.assign("XJHMGELBVGYXOJFCQBXJDXPXIAJWJPPGDZXMWUMLUYIPIZDGCRJTWEZMIHGCSZDQCRKRVVFMOUFJKAUKWVUPERQOJFDONSPYCTYQMH");
    msg.params.assign("RTKMCONKSRXKAAMURHOOFKOYSKQMJLGKDMWVLOFQKIFWTASNXBCGMZOFVIBICGZUIPXOHAZHNVAVKYETIVULCDOFWNDERSLBXPUZEDYHHZYXMMVROBREPSPBWAENZXTGLCRNVEPKUKJXCHBGNQAHGJMPTVUMLAQDLNCDWYHZJWSZWDTZTVF");

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
    msg.setTimeStamp(0.0230322621623);
    msg.setSource(44205U);
    msg.setSourceEntity(208U);
    msg.setDestination(36197U);
    msg.setDestinationEntity(194U);
    msg.cmd = 217U;
    msg.op = 232U;
    msg.plan_id.assign("LWBEETHCCNTGFGXXJBVPTYOPNMWCKIQXEKURHHWJCVDBRYWGIXYIDGSQZJZBYRNLETRPCVROKLMPOAOSGSVYLMQMBUCSRKLVTJDFAXZBF");
    msg.params.assign("MDFOXMRPVUTPOHGSSKBDZTOTIPJXYULOXFEIGRCZZBNTMWNMDWSPLUXQLZBZXDEHLFOUMKNGYQLDGRRRYWRKIHVOABMIQFSBZLNZW");

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
    msg.setTimeStamp(0.360660513764);
    msg.setSource(47036U);
    msg.setSourceEntity(203U);
    msg.setDestination(40439U);
    msg.setDestinationEntity(153U);
    msg.group_name.assign("MWUFQQBNQTFADHFZNPVTHJIDYPXDLFICPZMDPEKNELASCIFCRRMNVEEGISUBJLUAVBVXODVXZVNOQLNUBWYDGJFVWKHUPKTNSDSYUMWJQALWVOCKDZWZQJKJTJRIOESFMDSHOGYGPVHRQDKGXYZL");
    msg.op = 42U;
    msg.lat = 0.0770082653356;
    msg.lon = 0.0438874359369;
    msg.height = 0.11060701006;
    msg.x = 0.066790583824;
    msg.y = 0.451357162373;
    msg.z = 0.475947510532;
    msg.phi = 0.875460198339;
    msg.theta = 0.0575893220058;
    msg.psi = 0.035893412989;
    msg.vx = 0.951386521217;
    msg.vy = 0.113761016114;
    msg.vz = 0.884268300682;
    msg.p = 0.103319045657;
    msg.q = 0.775097414853;
    msg.r = 0.952604053792;
    msg.svx = 0.478626887607;
    msg.svy = 0.908094226653;
    msg.svz = 0.422776065479;

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
    msg.setTimeStamp(0.492946905265);
    msg.setSource(33249U);
    msg.setSourceEntity(239U);
    msg.setDestination(13036U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("SRRUZBEORGARWMLEMCUJKDUZRDMBZOFDJYLOSTXUCTVMWHPPSALYLHNOMCIRYHVGFITGZVKJGAJAGNBADWAEXWEBYVXXWGZDNQCAVNNIOJQCYKGCVZJQRVDMTYPLPQFMFATUFOPLXIRXYBJVCUUDGAOPFNLRSIBHWQEKVMFTDUVPTCIBGQUXDKCHYPEK");
    msg.op = 234U;
    msg.lat = 0.645104693468;
    msg.lon = 0.743720938677;
    msg.height = 0.171468477344;
    msg.x = 0.82489604798;
    msg.y = 0.844294690285;
    msg.z = 0.920001450683;
    msg.phi = 0.514205695876;
    msg.theta = 0.836529742753;
    msg.psi = 0.335258229233;
    msg.vx = 0.288069753041;
    msg.vy = 0.274396233094;
    msg.vz = 0.830812471449;
    msg.p = 0.746978551812;
    msg.q = 0.626220830554;
    msg.r = 0.932948516746;
    msg.svx = 0.892693193283;
    msg.svy = 0.0210828722694;
    msg.svz = 0.567572155657;

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
    msg.setTimeStamp(0.537715822029);
    msg.setSource(4761U);
    msg.setSourceEntity(88U);
    msg.setDestination(49788U);
    msg.setDestinationEntity(233U);
    msg.group_name.assign("RQUCZKOLRTHCURUMHXNLZBHUIXSXSCNAYVDHTJJPWNFRCGLAIAZLMTNNWAHQGOJJYEGAZ");
    msg.op = 107U;
    msg.lat = 0.910645912781;
    msg.lon = 0.516165543934;
    msg.height = 0.231131137092;
    msg.x = 0.563271595606;
    msg.y = 0.648948370514;
    msg.z = 0.436948900214;
    msg.phi = 0.379576506879;
    msg.theta = 0.082776869643;
    msg.psi = 0.156361213398;
    msg.vx = 0.812703813341;
    msg.vy = 0.833363835701;
    msg.vz = 0.86405626549;
    msg.p = 0.955277963329;
    msg.q = 0.522291457906;
    msg.r = 0.895319824734;
    msg.svx = 0.40632955104;
    msg.svy = 0.747646160755;
    msg.svz = 0.640526087275;

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
    msg.setTimeStamp(0.483942163938);
    msg.setSource(667U);
    msg.setSourceEntity(120U);
    msg.setDestination(41405U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("VUNOFWOLKOPXZJCFFHKALGGGAEXQUTCEBNUABVPOQZYOJSRALNBBFITJHFZLOXAKBUTAGGWEVBRTFWUYHWLIZLNXVGDILOWSDIVINOKSKHMXMKAZQMKJZCAZRQVJRTBDITCEZXQRYHPADANNSDSKPSMIRQVDPHCWPMOXNSEFSEXERWYVPDJROJLTUPCMMYQLMBHYWUVZQKSXUZJHSLEIECNMUTNPGQUKPFRYJFEMDICHGGRVTBYWYHIGJYFCXB");
    msg.type = 122U;
    msg.properties = 51U;
    msg.durations.assign("UYSZWIABBFBDVDTGFNUAXIZNWDUKJJUHPLODJ");
    msg.distances.assign("OCULFHKXBIWFOVWQOOZUPTOAKVRXQZGTLEFNFEEAXGIVZPUAVVPJCYIWPUSHNDWLQTDNKEGSMMFISAHWFYIUPTGCXLBCZNCOKKAOARDAFCQZIZJHSTDPDMIGSDTJLQNYSAKJVRHJBXNRKB");
    msg.actions.assign("HHUNPCVJIGWHOFPRMQZQKNDFSCUONUBMJEFCTATIBKBKKOJXWOWVMQRBVHTRGVSFAKURLNCAQWYUXAGSZREGJXKXZMEK");
    msg.fuel.assign("QNNYWCVGCPHPKQACOTIXZONOXHATDSCTDERYUBCFJFECSMVMZFPGLUHGKBEGMQQ");

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
    msg.setTimeStamp(0.000266131857161);
    msg.setSource(30519U);
    msg.setSourceEntity(196U);
    msg.setDestination(62008U);
    msg.setDestinationEntity(32U);
    msg.plan_id.assign("YSZQWFPMQARCTXTJBPSMJYZUNVRRQQTNGCKDPKXAELGMJKPOMTFVNKUWMFQHEEZZHOFBFJIAPDZUGMDYTODXQELWGXXIQOEXYHUUPSHODNYPSTSLLWJLLZCIWTUJCYLIOXADHHOBMWY");
    msg.type = 245U;
    msg.properties = 4U;
    msg.durations.assign("TAHDJDNGARSNMSNFUSDXOLQZHRZICONZLJFRSCYXVCYUCBQSWDBGOCXYQYLDUEBXJKJSOCTVK");
    msg.distances.assign("AESWAERHIEPRB");
    msg.actions.assign("LYNSAMQGYVOKBNZPGSIPDFGTISNDKGAKHJKIPGCNRXDXEZWZIYHSSJFFVZPPJERQHSQPYMLLTZUCARVXXUVBORFLVSHWNTYUOWNXCTIPMUTXEGFEIQVHSWMUISUVPXFOYLOPOMJJLPUHAIKCATKJIXGHBMNAEBTEDUQIYDOJJFBWBAW");
    msg.fuel.assign("MJWFXCGEKGHLNRKLIIVOZPJDUZNBWZIGCHIYKJYOUJDKVLVBOCQAAOBWTZPQQFWJMCVCRRNALIZLYMDJSQWMOWETBCXQPLYNVYLCKARUXDTULSIUWSAPKEVNBMSMOFGOHETBPTDTYVIHPFRSSKGYPMVKXQVDOEMYTRSDRQZEAFFFJXNFGCLDQMOLPT");

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
    msg.setTimeStamp(0.740964703468);
    msg.setSource(46942U);
    msg.setSourceEntity(139U);
    msg.setDestination(56346U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("ASPNWVWULUMQAJDOY");
    msg.type = 5U;
    msg.properties = 82U;
    msg.durations.assign("SMBDISJIVFHOVTQXZIUYVYENDRDGWZHLUKSQVRNMCWBYDCLZJIKPSLUOYBCKXAEAKLJQOOBSLMTRYGTPIBAGWQWZZLFRGDXKUJRTHZMTFCOQTNYRIEEPGWADAHDPYINVQFVXPFEFXILWMTNBU");
    msg.distances.assign("KMVHLMQHUICVUNZQ");
    msg.actions.assign("VJQANBRYHTKKMMKSTWCJCGLEEVIUHLEXNOXSRHGZZZHYECBVSPAGYIKFOVWNXMGPFWJWTRHTQOMESVAUKPCHSIDONRUCPTXADZRJMLXQTCRLJPDQCAJKTWRPMWONIMHADYZKVQZBTUGHPAJCFWXNPNULTIDLTBQGVSFAENOGGOUBDFQIJDKJQWDMOZBNQGWYSYKINPRHMXAEYUCYBULJVUXPZFLIARMLCGRZZDBHEWSVXXEFQOYDISSB");
    msg.fuel.assign("TFRRKIYBAUGKBBJXQCZQXJEZFJMPZADWQCKDSKJZWBUNUVSRQSMEPFQTUSTURLYOGKJLYPHIMUOHOVQVIRQYIBGCFYRRVHFZNBUDELNTHEAGKYYLLOSXZONKBPVQAXNVFYCYPBXDHSPHOWMIZICHL");

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
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.00130989025661);
    msg.setSource(16256U);
    msg.setSourceEntity(91U);
    msg.setDestination(30339U);
    msg.setDestinationEntity(194U);
    msg.id.assign("ZVRGSPZZYSRKLAGABTELEYKBMGTWOQJFIVEBJULXLCAEWFCFNHTGTIMKTQXJLYSTRJZAOPI");
    msg.plan_id.assign("YJWIPQEHJHJTTIXDOBLAZDAZGYDVFDPRKXITDLYWTTXSCHABTSHRVOMLKQEXWSYWLSKJ");
    msg.maneuver_id.assign("VQBCMEJNAQNSFFMXRLEKQADEXNEPWEMBQLSEZFNTFRJSTRYMUBHTVGNRSDQDMIWTIRZRXSHNXPQWOZVXJNODEHUURGTXVYYDQOQEIFRILYNHPWCZGPZGUQDYJLJLEIAOTHMTZOIZGJZKXDNDDFDJ");
    msg.memento.assign("CSUELOYUBLWUOTFKYTSFZDAALSYINSOVPSOWPJKYISBAHTJHPEILFHVEJDUMRCLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.869671244636);
    msg.setSource(48169U);
    msg.setSourceEntity(111U);
    msg.setDestination(7782U);
    msg.setDestinationEntity(194U);
    msg.id.assign("KXPFNRFPAYBFVAWPCQCVYSXSADLUHODGJYYCTRQPWLVORUPFOQVELAEWPPJEMGTOTXWEOXRDXGSFGMCDUTOMXHQUMZRRSUOGSXKFQWECKRJZAIMNIMKVGJZLACFXVBIJOATFQDXCGWLYHOJLJINDEBVPKQIPCOQMKNWWDZUINGNLYHC");
    msg.plan_id.assign("YADYQQIPPOFWGUNOZEVLWMPLGNCBLICKWEFZYQTPTEVFBKRDLKIHAAXSKMAAIPZDXTTKDKJTTLLYGQYRYACPATCWHIMZSNGUZJPBDOMONTBERNORMZSEQPYBUBXEOQBUEOHVYIPCXZ");
    msg.maneuver_id.assign("GTXJQEHHAZOFBUYCVKZINX");
    msg.memento.assign("ERNOOELHMSXMBQWPPATBAVJZTBJRPPZLBUDLZHRDFHKWTIGJZJDCOVKWINVCHKZSHKGKBDLYSHNZLEOEWWRZFBONWCYAUYCVDDCYRHZUYDJVIERBGJAAYAOJXQYVLECESDLRSLFEJOMQPGCKYHCGFKWOINUXRPSYJFNVOMRFPTSYHPSMGWITQWGZQFIEQQMXBGMLAFPFTXSUBUUEUNAKCKNTBXMJRDMVZQIPVTVXFULQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.907802088113);
    msg.setSource(23843U);
    msg.setSourceEntity(159U);
    msg.setDestination(42908U);
    msg.setDestinationEntity(75U);
    msg.id.assign("ZSQLQPCIEUVBWPYSRLXBBSAACVKXQQFTIBOLLGOYSUSKKARDCETRKFJJNKNJLTYWBMOCWDVEPAZTYFMNCNZMUKPKQZAHNNZGIHXEEWIJCOETHXGLDUIJFPPVZYNAFBDUJKSHRHLBFRXMDWR");
    msg.plan_id.assign("KGJPUCRDRCOAMDMWSFLIEWGSIQATFLRXJNQKHCAKYELIZZXTXXFVIPNUJNZO");
    msg.maneuver_id.assign("JPYWIYJQGZDEHLQNAHBKGXXDAVSGYN");
    msg.memento.assign("UMGZWBOKRIEXYQBNIROFFHSSLQJQUCZBPZHRTIWZIMOAVLM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #2", msg == *msg_d);
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
    msg.setTimeStamp(0.522997938082);
    msg.setSource(39572U);
    msg.setSourceEntity(19U);
    msg.setDestination(37911U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.948614090933;
    msg.lon = 0.866816566894;
    msg.depth = 0.00857452619621;
    msg.roll = 0.616188302058;
    msg.pitch = 0.681556612911;
    msg.yaw = 0.177000076888;
    msg.rcp_time = 0.3064162156;
    msg.sid.assign("QBURPFCFKSSYEMBDJIUFDXMFSKHNEKORCSSGEUTXIEVLGFQRUGXDYDHSQNDABLGEUFYIWHCHDJRMCCLOHLAUEQWOEISVPGNZZWKWXYUTDOHJZRGXAZCQNYPXOFHMJBYGPRKKCBTCAXXVIAOHITCWOVKFZQIJVL");
    msg.s_type = 131U;

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
    msg.setTimeStamp(0.549019374848);
    msg.setSource(5613U);
    msg.setSourceEntity(49U);
    msg.setDestination(2455U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.659444855442;
    msg.lon = 0.479782099864;
    msg.depth = 0.0245040374248;
    msg.roll = 0.892366722477;
    msg.pitch = 0.450717325656;
    msg.yaw = 0.661069237227;
    msg.rcp_time = 0.74385953784;
    msg.sid.assign("UZCANYNDQHPAXAVRGEVFRMFPRAWXJQFWOTJSKQNTTHODBINZEZTLSUIKSCACVQHBYBEOFPZZIVYRWHICWLWVRTBBBWGQNGJTYDHPFFEKTNXJEXBWGABZDXHIGKYUP");
    msg.s_type = 16U;

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
    msg.setTimeStamp(0.8603031245);
    msg.setSource(3316U);
    msg.setSourceEntity(24U);
    msg.setDestination(49476U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.0558215895709;
    msg.lon = 0.120080070182;
    msg.depth = 0.985243982698;
    msg.roll = 0.673473879891;
    msg.pitch = 0.414366532427;
    msg.yaw = 0.841263541843;
    msg.rcp_time = 0.671892477497;
    msg.sid.assign("LMJQRJPMYVCGAHUTHNODFUCIBDSESUOZQZFEQB");
    msg.s_type = 151U;

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
    msg.setTimeStamp(0.605271630893);
    msg.setSource(63615U);
    msg.setSourceEntity(20U);
    msg.setDestination(28070U);
    msg.setDestinationEntity(71U);
    msg.id.assign("GWNVEQJVYKGQSEZFUHOYFDCVWADTSVDNQTKYJZXEZXLWNXODEWPIYMFHWARSYMSCGNUZELXANYATHONIGAZZNRELBOPCA");
    msg.sensor_class.assign("VZWOYDZIAVCWAUJCNINFJKNNUTELPITWBTXMAAJNILH");
    msg.lat = 0.0747924046276;
    msg.lon = 0.226517707635;
    msg.alt = 0.986666306878;
    msg.heading = 0.938478995969;
    msg.data.assign("PKBPHSWCHCQUXVMZQRJFDXQHGLUUTEVDOTRBVWVVVZKGFYELECJKJVUGUYMKBLPETRQTGQTDIZDCELTBWZNWXVANYIIYZIROXPZTAMDPGOJWHFRKHMAST");

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
    msg.setTimeStamp(0.620683011648);
    msg.setSource(10942U);
    msg.setSourceEntity(178U);
    msg.setDestination(41179U);
    msg.setDestinationEntity(214U);
    msg.id.assign("TKRXKJUTCROIOXMUYFPILJILJNIZLURWXBBDZSMCEHEGMEGLTNDRCHRDKUTOOQBPQQTZEZNHTNRWFBYQWVCYJEUOVAOYLRBVIZNDVNMNLFFTWIGBGSNLIFXAKAXZVYHALGMBCZXKFPASFGDSWSGSETQBPVLUBIKNCXW");
    msg.sensor_class.assign("WSXDDBVOYBZINRUXPBHTWOHPSCHJBVFQOAJWZBIR");
    msg.lat = 0.119595650689;
    msg.lon = 0.625711514209;
    msg.alt = 0.69240563107;
    msg.heading = 0.816563970571;
    msg.data.assign("YDEOODJOETSTBLCYFPOPFICOKHOQGRLUMPCJLSGQFANJHJDXPKRNYQNMUFIFKKKJXYPFQUAYVSVTDXKZHLQGSFWDSRTXOADUVUZYCCUEIQRTFDGVEBRILNAMOKZEOBVGEHLUCJAHCRXPVTQDGZFNBMIPIMBJEWUMHOHSWUZJBPMEAZITYETBWHJRNSVXERRGIKMZGBTIWMHCNXLAYVSUGNVQWWTSXMPY");

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
    msg.setTimeStamp(0.256017829705);
    msg.setSource(58412U);
    msg.setSourceEntity(230U);
    msg.setDestination(52451U);
    msg.setDestinationEntity(65U);
    msg.id.assign("BPSCCQFUSVRHPFOBYXACLQOTEYYZMYHTJPGLC");
    msg.sensor_class.assign("COUIDSMYQENROQLSZSAOUBGSTGJFRPZXVMXFUGJOZQIYZLSYDNVLKOPVKXQYCQFCMURRAUAZ");
    msg.lat = 0.64727934547;
    msg.lon = 0.507888829739;
    msg.alt = 0.173290776064;
    msg.heading = 0.586602064415;
    msg.data.assign("RMPKKJUFEGUBXIQETYKOUTMGDPFTCLGQCWFFZFDSQOZFZXTAXULDHRRAMESQIGXLKQSNVPQGGYIPOUNCPWEHSIGBQNMOEZCDAFDNBTYMOOYOQBERKEHPJCLWHKBLIHAHVSLCEJVJXYKVHLXATSNRNKILDVZMVTJXYJWSKEPNCYPAGCRIQVHZVFHXMKBZUFTAQODPE");

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
    msg.setTimeStamp(0.999549667261);
    msg.setSource(24055U);
    msg.setSourceEntity(214U);
    msg.setDestination(55351U);
    msg.setDestinationEntity(219U);
    msg.id.assign("UGEXYRAVPHAQMEKFBCGQXCITIDUAJOFMBJXCLZDKVYTHOVIYAEQUNNNUUYGAIGHAJHBTQYGCDSKLVHJBJATERWOJNPUAPOVCRSZZGKFSGXHTQHPIEILMUIPJ");

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
    msg.setTimeStamp(0.403173662609);
    msg.setSource(39775U);
    msg.setSourceEntity(210U);
    msg.setDestination(15256U);
    msg.setDestinationEntity(116U);
    msg.id.assign("PFWUEPKCULYNQSZMRDYNFRACOBGRDLKWPZGEMUAJLPWYFMUYQQEATOKUJNQCHPJVFPUVDXTWEIRLZQROLISOBOVCMBIBNUESNUFMBEVGTNTRKYMLDKFDXTAICCFIBISQGHFBQJXTLHGTWDAAJTYFRDOIZZPVXGTDVJWKMVHCZJCQORBIPNBKHMVKVEILYGSXNWJSUZCFHSQXHSNEUOWVXRYSEXXARETHDXNBI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RRSHGEGNYIXGACHOZUUETMPBLQMDVSTOQHEUSFZBCMGMJGUWVBJISWOYJPF");
    tmp_msg_0.feature_type = 122U;
    tmp_msg_0.rgb_red = 148U;
    tmp_msg_0.rgb_green = 206U;
    tmp_msg_0.rgb_blue = 198U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.293153114695;
    tmp_tmp_msg_0_0.lon = 0.964296448115;
    tmp_tmp_msg_0_0.alt = 0.867732359872;
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
    msg.setTimeStamp(0.196910664523);
    msg.setSource(53038U);
    msg.setSourceEntity(173U);
    msg.setDestination(58119U);
    msg.setDestinationEntity(192U);
    msg.id.assign("SKDCDVXSRCHZTOWJNQKAUQFXVOWCIJZVOQNFYGAMLQRWRSKIRQKUFNCSIZDTDTQGSCSTEQQKCELDACWOPRCNIZLWRAXHABNYQMXKBMLPVMRMTWPFFSJJMNRXWHHLLFGVGH");

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
    msg.setTimeStamp(0.0248767472513);
    msg.setSource(27986U);
    msg.setSourceEntity(5U);
    msg.setDestination(22956U);
    msg.setDestinationEntity(7U);
    msg.id.assign("DRVATHHDXSDRATXCBVDKRSECWTMRVWPGDMFFSMUYDFXRUSKHNDPFIDVWJEACYOOQKPMKFNECYZEEORWQWMQPQZTWOXJNLGUILCJFMFPBACXTOKXAOMOSLZOAIHKVSUEISIOWLUIHRGEJXGCKTZEDQKBQYVNYQMXLZJHSJIKBUHWNBQBJ");
    msg.feature_type = 91U;
    msg.rgb_red = 232U;
    msg.rgb_green = 122U;
    msg.rgb_blue = 16U;

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
    msg.setTimeStamp(0.921177517254);
    msg.setSource(52051U);
    msg.setSourceEntity(232U);
    msg.setDestination(41493U);
    msg.setDestinationEntity(201U);
    msg.id.assign("XJBVPPYJOLVQNCHBRSHPUOQRLEFAGMZGCMRPXDOISKCEMVKGHTMBYENHRAAJHTLTGXKIWZRVICVKQIWKCYHBGXNZDRYJWZRXWLUCJZHKWDYFVZNOEAIYSFIQDUPR");
    msg.feature_type = 155U;
    msg.rgb_red = 86U;
    msg.rgb_green = 96U;
    msg.rgb_blue = 17U;

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
    msg.setTimeStamp(0.758325412018);
    msg.setSource(15314U);
    msg.setSourceEntity(136U);
    msg.setDestination(64003U);
    msg.setDestinationEntity(48U);
    msg.id.assign("OTGBJEJNVUIOFYOIQONNNDHDUNWLQCHTCDTDFTAJABCUVGHQRBMWBQELGHZRFSTXICTFRJEQCDJKIXSNKDKAYLPGMTPORIXEKVHFUJRILUPGOXGDVYFZYHAESAWPVGFVRKQVBXAODZFKIMZPIXWNMYXKYMVEGQHUSCKHOJSSCVXEMFZWPLZZDLSMRUUPPZYZKTYGQWGSSTMPNXRCPBQBW");
    msg.feature_type = 36U;
    msg.rgb_red = 87U;
    msg.rgb_green = 137U;
    msg.rgb_blue = 91U;

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
    msg.setTimeStamp(0.736333022707);
    msg.setSource(41153U);
    msg.setSourceEntity(226U);
    msg.setDestination(59755U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.473312019731;
    msg.lon = 0.45366407681;
    msg.alt = 0.387915887081;

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
    msg.setTimeStamp(0.0730547105167);
    msg.setSource(57263U);
    msg.setSourceEntity(96U);
    msg.setDestination(18587U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.949267693168;
    msg.lon = 0.151183052825;
    msg.alt = 0.0912843848985;

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
    msg.setTimeStamp(0.131174984297);
    msg.setSource(50036U);
    msg.setSourceEntity(14U);
    msg.setDestination(23119U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.0100210365846;
    msg.lon = 0.429924518192;
    msg.alt = 0.439460772947;

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
    msg.setTimeStamp(0.928740461736);
    msg.setSource(3235U);
    msg.setSourceEntity(93U);
    msg.setDestination(1066U);
    msg.setDestinationEntity(205U);
    msg.type = 237U;
    msg.id.assign("RUDRIJEUYSWDTZFGQVWXENTIORYSQXLIKLQQDXMVNHOZSSAHDBMBPENITOEQLHWTSRNEGJGWTXOLIFJWQAYQUWHYPCQKULTGZTTP");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 162U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.497592361734;
    tmp_tmp_msg_0_0.y = 0.521853731718;
    tmp_tmp_msg_0_0.z = 0.968016530739;
    tmp_tmp_msg_0_0.phi = 0.611913938596;
    tmp_tmp_msg_0_0.theta = 0.29828920637;
    tmp_tmp_msg_0_0.psi = 0.218922270394;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.737868709227;
    tmp_tmp_msg_0_1.beam_height = 0.620946716421;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.value = 0.0935036206026;
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
    msg.setTimeStamp(0.445608002767);
    msg.setSource(19955U);
    msg.setSourceEntity(152U);
    msg.setDestination(60738U);
    msg.setDestinationEntity(210U);
    msg.type = 94U;
    msg.id.assign("TRATODOXPSRBLOCOQGCMCFBOEEWJZUZQFBFVKVTBBTXFLGQWRTEMPVKZMEBPDIDSUQHXXHFQHHWIOYCXDVRWDHDGVBRINLGNMJXUVEJYNGUFAISBUULMXTPWQICKWWUGVYJANMSYTMPZJHGAMJNJGPYKDXQHEPQAIYIGHIUCVAWVPJLAUNEZQPZHSVSYEHAJNNABESLBL");
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("QDHWZLPRGFIXNDKQAXJWRKFKLSKZTNAGDQZDRCUEIPSUYOCJOWDASEVUVHYPLMWQZUNFORIBUVTHRGFQVZFPNERDTHTVNKQLOBRDQKCSJJYPTNBXLHBACRNGPBINDMUBKJWRWOW");
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
    msg.setTimeStamp(0.18449973748);
    msg.setSource(38032U);
    msg.setSourceEntity(2U);
    msg.setDestination(57393U);
    msg.setDestinationEntity(55U);
    msg.type = 194U;
    msg.id.assign("XIJHKWARJCEOUUAGCJBPKQHCIBGXMTYBUGNWODFHNFOSYRYZKNMLIJSUDVCZMUPGMFPBUZIRYVOMETLZHJEDZRLSKNFRTIWAYTNMBJGCHGEBKCVEDWEGKFQZBWEOPBRHTEJVQOWEYSKFLDHTYSVQXGZQMWPUQOSPT");
    IMC::MagneticField tmp_msg_0;
    tmp_msg_0.time = 0.0863928586399;
    tmp_msg_0.x = 0.902630540149;
    tmp_msg_0.y = 0.232778165877;
    tmp_msg_0.z = 0.574279194925;
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
    msg.setTimeStamp(0.481738082793);
    msg.setSource(44463U);
    msg.setSourceEntity(108U);
    msg.setDestination(7218U);
    msg.setDestinationEntity(97U);
    msg.localname.assign("TDEWNDRGQFTLJNUJHVNHTNSQFAZYDBZLRJHOYPLRKLSJQIYOGJAWKGZJLFHOCVXSETMVSM");

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
    msg.setTimeStamp(0.129186829537);
    msg.setSource(16667U);
    msg.setSourceEntity(228U);
    msg.setDestination(1836U);
    msg.setDestinationEntity(61U);
    msg.localname.assign("UNAWPTFFUAPKSMDDCNMEJGKLNOVYBVFBKUFKEB");

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
    msg.setTimeStamp(0.609643605531);
    msg.setSource(13934U);
    msg.setSourceEntity(204U);
    msg.setDestination(60025U);
    msg.setDestinationEntity(111U);
    msg.localname.assign("IPXDQHMDJHRXTVLTZXAEHUPWUQPIZZNJLFIDNEFADIVSKUCRFGJAWYUQCSRLNQSQIJCZSBOUUXBTZZHQOYBYCKOAXTMHVMGIWNOCSWTHNFJRFBTXKJKFGAUNTEKJIZAYTOPPDCMDDQFAEBNCXGVTVHOGFRSREPWKZVSJVNGIPCTGASQEVMLZKBWJDMGFPKWCBCINXSEXBRSYMYEBLWUHGGAPDNYVWKQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QRUZXAWOOCCGJADKSAHXEVCTSXINXNCKALEEKDVEMAAQSESRTROQOSCTMSVGLJCUKBUUWIPPIMWCHDIHYEJUGWZDIYUMFHPLEDQSPVQXPONYUGTQZNGOLWZLFQLFOPWJGZVFYZAGTJSBVWVTTYKZGAMWFTHYHVNRBHNORLFWHBCQZFKKFREXDRRLPVJXNVJMFYAQ");
    tmp_msg_0.sys_type = 158U;
    tmp_msg_0.owner = 40312U;
    tmp_msg_0.lat = 0.708759376891;
    tmp_msg_0.lon = 0.974306143163;
    tmp_msg_0.height = 0.817568100759;
    tmp_msg_0.services.assign("IEQXGFUWJHRHQSWNGIDZJTIMFHMOVZOCNNFYOIEGDMHLYAANBOWBVLYXQTEUYLUKIHZWYPEPREOYDYRDRQSGOPODSBXYHCRKRBVSGOJXIBATNBNCCJAVPXOALQWMAFIUPXCGMWHGXSBZMFHGSMATTQNUZEAKLPXWFUTOSZYKWTJLVABVGKLTBXIJJVWTDQZLVZEFTQEXNKJRU");
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
    msg.setTimeStamp(0.475428122144);
    msg.setSource(22026U);
    msg.setSourceEntity(85U);
    msg.setDestination(56087U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("RSWPTXRNHFOMFNULATRRZPYVVIIEFSVZKFKPIGAWDYSLLBMRDLAOLHDNZBOFCMOTSUQBQXLNLCFTEEETHZNPWTYWVJQEGZJJIYCWHBDWMGSJVGURBP");
    msg.predicate.assign("WHVCZOJPAFMFAXNWJAUQJBWTPXSFVPFBAIJDELTMCDIULIFYQAPIAYKRVEWGTKISRBBIDBTYZXPVMUPKYVOWGC");
    msg.attributes.assign("ZRAKDSKHOBWWASXLWPBUPJMDSAOMVJHMXQRDIFZMRYSBRUTXIONIUCZGZICYCNLWCTFAQVHXVBVKWEELTYNXKPPCZMMLLBNQYGUCEVSKJDOAOKFURIPEXDYHL");

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
    msg.setTimeStamp(0.457606409858);
    msg.setSource(33400U);
    msg.setSourceEntity(203U);
    msg.setDestination(53413U);
    msg.setDestinationEntity(86U);
    msg.timeline.assign("CPZSUMGPEVQURRXGVHJZMNERVZHZLBCADCTBUUIFXAFYOGUROVYIWJKLRUJUPAHGKKHIWQNHYDGSTPZLDZDQPYQHFVXNQMAMMFOWKXQAIGTTBJVJTOXWXAZNONBLQPRXBBBMICDCNEGXTIJDV");
    msg.predicate.assign("JJVLSCQESMUBBVOYOWRFBVUCDLBBNUTLHKFEZHFHDKIKKOTHRVXCGCYVQQSFCUQLAITFKPPIEYXEWGYBBTHKUJWPTVJGTOOLIRL");
    msg.attributes.assign("TMOGHIBWPRMUH");

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
    msg.setTimeStamp(0.20421800017);
    msg.setSource(38302U);
    msg.setSourceEntity(162U);
    msg.setDestination(44330U);
    msg.setDestinationEntity(230U);
    msg.timeline.assign("LNEKYTLNCHQCZUMETKMVXFQORLNBFSLOQVRGAEVYMHZJQZRPTRE");
    msg.predicate.assign("LCLIJCZLCOMAUKDJJBLVXYESHMBCCJNGMMQGSRQZZPFMTPQSPVBRRMGNELKSPJCGAQMRFTHMFVERAUGIBWUXUHYYDBPICNEWEWLYWQNZHENTKXTJCOYQVSXKVAWYPSALBQZHUFOIBXVOAWEIXCDJKIZLGNQIEVDFRCIRWKNUITGKYORGEXFTNDAPDKYHSKWXGVSSXRFZKBLAOBNZOHFTEWSTHJZZDDYTQVAPARUYWOPJDNBIOTXPHUDGM");
    msg.attributes.assign("GVCEPNDWAUUHBDLSRQYRXLIJEQVUEILQOXIPPMQIJLXNIZRHRBSUMMMRNHKZBECIOVYWOKBORT");

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
    msg.setTimeStamp(0.0698305254272);
    msg.setSource(34771U);
    msg.setSourceEntity(23U);
    msg.setDestination(27776U);
    msg.setDestinationEntity(182U);
    msg.command = 10U;
    msg.goal_id.assign("PNKGBWWDTDMWQKJAQTYMKODXPXSTUEQGOBPRMXCGVOCLWVVCYBERMDYYXAPFVLUPICQFJDDVEARBGJWYVTLXXFCBYVTTISMVIJBIAMDKPONAUKYCZUIMWQEWKRKLSGJOGUHDUCBZNZGFR");
    msg.goal_xml.assign("DJFUIQTPWN");

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
    msg.setTimeStamp(0.57465513599);
    msg.setSource(12541U);
    msg.setSourceEntity(11U);
    msg.setDestination(44499U);
    msg.setDestinationEntity(241U);
    msg.command = 178U;
    msg.goal_id.assign("CNQMYIVSVNKCFOBWBFJHZDNAEKYEGKMXCWEYDPPVUDWJCGSXGFHLTSRUQAIUBYDWJRIGPSCMNDNIZJCGTFISBYEGXMAAETDHLALDDVUNYIFXJHBJHQDEJOTPRFHTIMJLAARXEPUPPGQPURYZHUQFIZKKWLOJNB");
    msg.goal_xml.assign("BLCNFRRBGPQTDGQPRHRAJPQTLBMXQZYUMNWADQSDUMCKCMLOGGHNSFSKMHMQEWOLKAVENCBSEXBYNXPXJALZQNBVSAWVVOVPZ");

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
    msg.setTimeStamp(0.753158824282);
    msg.setSource(34509U);
    msg.setSourceEntity(78U);
    msg.setDestination(15677U);
    msg.setDestinationEntity(11U);
    msg.command = 216U;
    msg.goal_id.assign("ITUECWIEOGSDRKKLRMKFJGZGQIZYUITWXEKXWPQYHGEYOAAOYLXAWJBRYLWXSQEVMCFEIBMVAWSLXDTCTDHTXUPOFAKZODGJJAPMNDBNHCFCRPNGLPUQMQXTMBUVCFVKRAWUYWPQZNDFTGCMVVOITDSSHEQXCSWPYNBLJLZLOKMVYBQBIRALCMIESZBHRHATNNZGSXUBLJUCNWXBJEHEYPFZHPIDNHRTVQZF");
    msg.goal_xml.assign("QNFBYWVGDSBJGYMWHSHKBFQZYAJRJVSTIQEXJZWCLLKFLIKEGJNWUCOGPZPBIJXREHHYSNUACSUUYQSXPGCARTKWEXNBHNIQGCNIMJSDEO");

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
    msg.setTimeStamp(0.646861324775);
    msg.setSource(6298U);
    msg.setSourceEntity(212U);
    msg.setDestination(6841U);
    msg.setDestinationEntity(216U);
    msg.op = 159U;
    msg.goal_id.assign("IXKTKJRXCGPVDWKHFOXWBEEJXYJVMWCQYPTZUS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AYINMBQMBVJHP");
    tmp_msg_0.predicate.assign("DENSRXBKFDJOFBSCIPGZIKZNTZNSSUQRTBNRQFLYEPKYEWEVEOWGHAWPOUTBWZFUQOPVNYOMGUZRAHVNQCVJALPYLXFMKXJNAGFVXZOLAMXISCSDTUNPEATVCCCLHYEDKLGBCZPDRMMJIHAZDKOESRNLLYHQWKMCWWJTQWDIJKZMIVLSMIVKBIPJWTNRFTRUXHOBYBDYEDJQPKQFITXXGHYRCQJUSALHWGGTUE");
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
    msg.setTimeStamp(0.509627699367);
    msg.setSource(47864U);
    msg.setSourceEntity(205U);
    msg.setDestination(46862U);
    msg.setDestinationEntity(195U);
    msg.op = 33U;
    msg.goal_id.assign("XMZDAYRQQVWIOELLZIEOTRCGSTJEBVGTCRFIZKVWBK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XKZTISRLMXIHNTMWEKJBETSWUXGDCEVZGMGYLYCWAKWQNXIOBTABTZJXBKSJMSOZVOMYYQRHDNUSBDGSXAJNHUBEIRPOIFEUFYBBHMNGYNKJNUQPVZURSOTELOPAYLFCRGLFPJAZCDDDIHSCWCCHTELPZZDTVL");
    tmp_msg_0.predicate.assign("EYOKJQMBYIMUMAEWIRBIFZDWQAZUVXVEDZZSUPVWKVHBKJXBRXCFESMQFNATLQYEFEHGMNSMBTHIQEAKDAWYGXYHPBKDCZJHWUTLXL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LSKSZNIJZTYBEOTYODWOPHVTZIXEAFRLELWMTQYPLHZYXOKEGDOEWLVWXJECEDMLUNYGUAANIZHMAPJZSFPVCKFDVFJBQDTRRPMCQRSFSIMDBPCUNGNFUZJLHGWIDCHLQWVGGBVQKXDAXKIYLQIVJOXXBKKBDLUHCIPMVHPJMYUMGTVSF");
    tmp_tmp_msg_0_0.attr_type = 128U;
    tmp_tmp_msg_0_0.min.assign("MGJTIFJYLFJEHRLJNYZDCRPEYEPKLYWKWETPWOZATJPWEZYHCLYSNVVCBBGDSFMLXPJIUNUARYIDRJKRFNRXQXAOPHJWCQSNOESMYBQUUHJCNWCLAVEVFQXQBRVDHGOTQLLTHIGGOTKERWIHGCVSDIHWIFZVOAUBEZEKXQMACYZHNSBXHPPXDZCUDFTGAZUNQOUNRIAKVLDAGKMDMUNGMFSOYJOQTKMUVXCVPIRG");
    tmp_tmp_msg_0_0.max.assign("TFQHQBLPCWNMAVXHGNAYMLXZXKDJOLUIBJIZLYHOSZYIGOSNYAMBPCFOAMNAUPPTVRHSDKXALJHMZTDFEKMNBIISNCMEOQGVYCMQTPPLWCKWFINJJAHCTSUUWFJGRIKDTKBZYVBJTKOZMVMCWUVXOIQDHEGFEDJCSLS");
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
    msg.setTimeStamp(0.962072514229);
    msg.setSource(24118U);
    msg.setSourceEntity(126U);
    msg.setDestination(39764U);
    msg.setDestinationEntity(48U);
    msg.op = 83U;
    msg.goal_id.assign("VZUYKSKYBMJHSLWDEONINZTGGTJPISHGVFDQDANDSGUYSRPQSDCLAYYKEJXBZRHWWWRDJZUPTKCFTUBXNZHLLMBNPNQXOJGXMVZIEZCGKHOXOWFOTOOCMCCNLQKZMXFLMAIBYJRXFLRMMHYVAHKSUYFDKEFBGTJUKIIFJYOJBQENVDWNGVLQMGEAZBPVXSPWCUGPCPCFTDQIVWEALLNTUITCORSUABEWJHUKRPMWIZHRFTVRQXPQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KGFCMKQVRAOJZUYQISSXMWULKHTZVEPKAMBOEMAZVXWLYXUQEZHTUPVZROILERHHALXKLTJGVUCQECBOENWZYYITHUDVLMWMOLKPXGNHZSNHEDHGBDFXCAGQVCYTTADYFIJFTSFSCZRTWJBORFEVADYIUIUWHCFAXZWKDVNBUUQMZKYWOEFLQGNOKJNLOCNITWBRJPLMPVGNDNSPBYIAXWES");
    tmp_msg_0.predicate.assign("LKKYCUKFCJJQTRENKLDKWICCAAQGKDYSCHPZZOQLSQDLCTEMIFLPVEVXSQFCYFUJBOVFOZQBDJSGZFBPQGWWABTOVNDYUCSQHZVPXVPALRNSPPUIOYFSGDFWXKDNRNWGPZMKWSUVMJTGLXHTOHVMFYBISATZJKRHVUCMTAKREINXEYAEONYHMDWGWRILZMEURGJPPECQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XZZXVLPKWJKVMRIKDSJJKQAZBSRZGDTRAQFIDWIRTBXUECRSYPBSGNT");
    tmp_tmp_msg_0_0.attr_type = 169U;
    tmp_tmp_msg_0_0.min.assign("SDJCTUHQMNAGPLRCJOFXPXUQMSYYDBVTKIKGUHLOVORKNCJNLSIVXYGYGSZXXUCXPXKMMV");
    tmp_tmp_msg_0_0.max.assign("PKWIBREPAGGHTAVJOORSNXCXHUFTYUWNLDNSLTDCZORIHIRZVPKZESFUNZBFCQEFTTNLGRFULIVIMSKDWXKGTAZSWGMRSOOXYEFVJLUIQCFAIHILBAESUXTNJHZYDBHNKOJRUBAKBPSPMDMPSDQAXQULDCFXMXGAVRGVCGGYDEXJVNQQBCEWRKNFCJPMYHHQOJLOVJPECDLDFSQH");
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
    msg.setTimeStamp(0.22546185165);
    msg.setSource(53004U);
    msg.setSourceEntity(134U);
    msg.setDestination(10014U);
    msg.setDestinationEntity(203U);
    msg.name.assign("WVZGKLDUVTRAXCDABKPUEKOXUWVTNJOWYLFRJEQXWNQUKDGQLOOHHYBASSKBRGZDHENZFMPFADCMXIYJTOGFGWKBZRLEVVWCCHNOOIGEPCWIGITYIMYZJNNRFIKUSCRVYRLYBIPQRPJAYTFOHKWCJTKSKSLOXBPZQQYVZGUNEZQCRTGMARJXPVWBLDAXBXJHXMTNIENATSUMDSOFAMMQBEPLIQIFHLDUSMXJCLJGPTPZW");
    msg.attr_type = 100U;
    msg.min.assign("WLGYJULZOHKSDAFJPIMYFKLRXCIJKPHEA");
    msg.max.assign("RPHHZHTVSNROFLHWMGUAKFEMKWNHDIHMPMNARJTJNJDXZSCRYCBSGVOMGBEVRMTSWIWBCKOPWISXEOCP");

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
    msg.setTimeStamp(0.571022391903);
    msg.setSource(9249U);
    msg.setSourceEntity(92U);
    msg.setDestination(52934U);
    msg.setDestinationEntity(174U);
    msg.name.assign("GFLACGDUNSFVBDIHKWJWSRVSLWJPDSNYELYKRXVAKRAGZBOMHZBGIYXAEMHHUCYOZGUOFKSDUUVAZECJSKBILQPCTZPHBAPYKUCVOPNIXGOZLAVTTFWJKHKRETPFFGVFXNEDELQZSQZFNEN");
    msg.attr_type = 12U;
    msg.min.assign("DITSOTQXBQVEFAIUEORMEFYPDJPHPUZWMWQYWWCVOJIMSFPAMOVGJMFDZXZKZXNTUWLTHJCXRSCGRGNUNUSHOBYYVHWTKKFYUWWJYJALLJMQCONTEOOGIPLWLFEUXMNPDMAVIDOGCURSYBCNSTOFQVBTCXDKRWDSPRBSDJMGEEKNRCBZUEEVVGXDHAHRQXVFLIUQRQIBFAKYZHGPYGSKBHATIENLPNBVZTDZKKHRBHQCCIKSZJGIZ");
    msg.max.assign("ZYYMHQPSNLSCCNMHAITSBFSASVPQNSZSHAMUDHVRHLRXFGJHUYODNRCBVPKWNKQFZDFPYYZKEAJGKJTOTAWTKKTPDBRBFXAFNAFSXOQXVXIAZQJZBOG");

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
    msg.setTimeStamp(0.444437206965);
    msg.setSource(22506U);
    msg.setSourceEntity(17U);
    msg.setDestination(26711U);
    msg.setDestinationEntity(40U);
    msg.name.assign("ANOQBIFDJVJLCVZOHNKQWKPESYBBYXXXLDEMQUODERPMGATIRHLEFQPLVHJKBNYISHWSXBYL");
    msg.attr_type = 163U;
    msg.min.assign("NWZZOYXJREKAXHTBGYSSCSVCRBWUMRWJIDPHNCDYDXQNOBNXEU");
    msg.max.assign("UAQKRAUBCBIOIHWDMBTNCJHAXZCPTLWDFMXXXLJNKGQZIGLGSMLYWRDMDKQNFVLBKUUROIPIQNHMXSEWRYVHSWEAOVDGECZETQUPTNEIIFJSOKRWNFMJRJRXAGTXNAOEOHDGGXHVWFYBMMLXUSVQNKHBKZQAVWZYCIPJMRETULGZOUFPSFSMXUEYYJYPYHTOIEQYCZFJUOAAPGKTITZTRPKEWDLABDBYD");

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
    msg.setTimeStamp(0.49017438002);
    msg.setSource(44841U);
    msg.setSourceEntity(28U);
    msg.setDestination(40841U);
    msg.setDestinationEntity(77U);
    msg.timeline.assign("BMVKVSKTZQXHXEDIDRLXAFZTZZPTNTCCQUDRUVDEYXOSIWJVHFQCAMVMETDVWZHRHFDEYHOAIGISYWUJXCPKJJSUWHTUIRNDSVENZMQKFIXCZAOAMOCHJEMTU");
    msg.predicate.assign("KCZIOBGXQUSMZPEASFVADPLWQXLZELRKOVGRBTJBIMCMRPOZODHYKFGOFFHJIENBFXMHNNRJEGIUGLQIHYCLEZXQXZKOYKJSLTDQUPPFDKWWSTJETRKYGZRUSUIBQGQSNRNFLCVVYNAVLHTMACQQCBPKBEYAEUKNCSNCODYJDXTDVGCJHVSZBDWWTFPBVEIAVXPISVZWPMZCBTUMIUYIYXXRWJWAAJMHURDMQTAAM");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ITZCCTRYZRXNQDNQYQCCZNLVSLFTMQCXQVRNSRTLFMECBGNOAOPU");
    tmp_msg_0.attr_type = 31U;
    tmp_msg_0.min.assign("NFEOPBVMRMNXZKLMESPJAXOTUTSMNGBFHNHZPGEUHDZXYUTIKZFKQZBOQXOZKQPBWARIZJQTHVGRIDAYJMBKADXDIOYYIDUEQVAQSUTBWHIEWSUHRXJTNYUPJHFRFKGCVGUDGXTQSYVVNLZKOUFALYCAICXRJYEKFVBGZPPCQWBJ");
    tmp_msg_0.max.assign("YQQSEAVRGJVJHCQKYFMKVTOMANZQXJAQIMCW");
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
    msg.setTimeStamp(0.333283927423);
    msg.setSource(30604U);
    msg.setSourceEntity(22U);
    msg.setDestination(30259U);
    msg.setDestinationEntity(45U);
    msg.timeline.assign("OXGRDXUSGILWGQBUYQAANVCUXNVNB");
    msg.predicate.assign("MVZSOBZDNJREIEMHLWFVBJPNZATQRRNBQCRVHFHMLBWBJUXMGNMBPXASNXMDJAHCQAEUZVCAOLGYUYPOFJJHLDGZNZQJUBGKEDIVNWCQDTLBPWYOUBDMOXGGEYQGEYAWCWWNAVILENCSYXFYTYUMEOXAYIKHWSYKZS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RWRXWNOSMGJZRTBQHJBQGIVXRKRHOKCXHDVVZWLPYXITXBMKEACWBZCULRNCDZLSFCWWYQXGMSUUNQBHSKKYUDYF");
    tmp_msg_0.attr_type = 168U;
    tmp_msg_0.min.assign("YSXDFXOIMLKYDIEAJECQXIFYZVRPXVJDPHTWQPMGXAVJNFHTUZQCBLKJBICLMPDWNESTSPUCSXJANCEQTKVXKBFMEWVMBDUVNKGSIOBLLRFLIPGHJWCAVAADMTSUBZGTDMRHTYYWQUPOCIDZUPAWEGSXZRFJWUKZAOIJFOUOZWLHEIYETCBHHR");
    tmp_msg_0.max.assign("YEJHFYAICWWMZZDSSJNFLRATSJRXHOGGHPPDKUN");
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
    msg.setTimeStamp(0.823244828747);
    msg.setSource(26430U);
    msg.setSourceEntity(217U);
    msg.setDestination(45487U);
    msg.setDestinationEntity(38U);
    msg.timeline.assign("NFAVFHFLZICGMBTIXXZHOFLSZLGCQLKKCFTSWGRRPMPNGRCSNYFOATPMBXIETUENMTWRQYKGQAQUIWYPAJUOXOMJOZYPUEDXJBJPYMIOHLFTDSKUPDVEBQOKTOZMVQCGZDNISVJXYWZPZFZVGNWYUXVCWMTBYSOIMRJQDUWNUKHSYELBHKGNFHRDAVJXEYOHKQCTEFXLWQPHSVIZDUIEARJAKRJABPDVTCNG");
    msg.predicate.assign("GGCCWTMAOTVWZBOIEGVZODDOSXLQXMYDSVULQZEQHQLXQZWOLESPSINBIFNAQDHCUWZWRPSBKFJKDYARJIPYJNAIXQPLMHN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VGDHIBIRDHZQIKUEXUBTSZMWCCHSTBXAAHNLFAEQYSXVOCNURJPOBPTIZVCMHLPYHKZFPTEFSFJTWLYNRTLRDEDKAOGYDQEZWAIJAGTFMMIIWCPAGHJKXNYNJQSVWHV");
    tmp_msg_0.attr_type = 12U;
    tmp_msg_0.min.assign("WCWWPHKHEMWXUURPNNLTGSFTPQBGOROSELVNHTGICCWDRHFMNZKZBJSEQCTXBDSWKXDAOMPVZPVKOYESFQUIAYLYJNZSYBPJLLLAJHQUGOFCLOGXNBAVMQRWDUIVAFSHNJJDPAQZNKBEWSDQCOMMXXTHYRBVZTCIZVMYHYFBUFAEDVDMKULWMWGDIEKUTXZCYPXCKUJQGVJRIYAIGENAQGXZQSA");
    tmp_msg_0.max.assign("PMTKFAZXCKFRMEVNHGWWXKDRMVNADDTTNOLXNJDOCRGJQFEFSVDUIHIOLMHLJIEWFPUKKWWAXSZRKCLOLAQHPAYEQOFCYHSLBPCYAJVGGZYYGBDJBJTJBFUCXGTANCWGZOUIYVVLXFZNLLYAGEHOPNILBYVZGBMVZCRZZYEMBBPXXVISHUBQQRUCUPSCOOWIRRNDSIBETMEKHIESMJTHETUDWKJTUDXSPMPOSQQZQDGRNQHJ");
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
    msg.setTimeStamp(0.81271829026);
    msg.setSource(7752U);
    msg.setSourceEntity(73U);
    msg.setDestination(34219U);
    msg.setDestinationEntity(150U);
    msg.reactor.assign("BMVBFGLCPRAIDJJPDWETNXQHBGYAVICLAZOYRMEFSQGNTRKNZLWUCQEISDXJCTHDPSSHSOIPWUGJPBRNKCOVPQJUQNSESZUVOZRFMGPYEAJHGKAURNOWEBYKXSRJGXECHMYZYDQXUXXTLDOIVQHDOLFWMANEFIVQKWADTVHRTWKCUROTUCKNTIBKMLSGMJXBHABYPVAXGMABGDBJXIUMEFYLENCVZWONVHISYIKFZLPFQRZU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OKRYNMMLZLUUJNFHSFLZSYRVIHRXSLGFVORWEIXVGMZAAPCKXOFKSJRZGZAYMQCTZMUBLHRBLSQTYVDKQOGUJADLKTXVWNBJGVOZNQOQQENPUZRFPYJOCRXKELRKICBPHXPJINHSHBDMIUEOWTCREGDIMBWBVNDBTXJEVCWBFTEAUUJUGXWAMPGDQYYCHDWGSNPXLEKHJFIFCDKCEZPQAHAIDMPWAFULAYTWDGSNFZVQ");
    tmp_msg_0.predicate.assign("PSHTZYOPCOZVMJEVDPRCLTAUNYEBDOGDZOGFITQKKOUREFMDDKTGQBWNXLEBNMXWHULHJLQEGFWWMWUTFXAKFJWPLQVAHXVNDEASIPWCAMTFILSCCZJQXEYNZVULRHBDJJZLJTKHJAHNYIORRIOXUWIZNQZKMIVGYPNZFPCXKGDUSMNRKTCVSLS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YQPKUIBOUGVLXKPBQKXGBLHENPUOQEWELZNHWNCERDLXGKXTKJFZHLXRMGPCAVCRVZZIDZDBSQVKTZKQMYEOYYNBTAFECOAOBGOFVHGVDHEPNQISPBCZXHTIHOMQLIRUHDVCRAYKIFSSBFWMIUJMYJIBTXSURDJTRTLRUFEMYVDHLGFLIJBYCNUMNZSWWEM");
    tmp_tmp_msg_0_0.attr_type = 118U;
    tmp_tmp_msg_0_0.min.assign("XYNQZACUUUKMJOCZWHPTTNLFWPOEGFWIKHTGGVBVZTLEDYLQKXCSFSKMCEQGFXMBEKXUXBLMZIPOILTGCPVGDWHOPVYMVQAYUHADTEIGULSRRKQZBMZWWOSTCJPVMSMDBIJFJGOASKJTRCPHVSETQFZWIFAJYZWVILSBJARFSAXDLEJBNNKHIQ");
    tmp_tmp_msg_0_0.max.assign("JYXGOZHNIACCLKQXVNUVLCWXZXDMQLJEBBDBRAEAUEDDVRLDLJMDUDGLZPTUOBFDYYTUPIRSHAKLRHQWNYHOPKPJMUZJBOOYGIBHMBBGKLWEFGNXJEWCAHFVDSAJSXLTMWIMEIRCNBPVIRXCVZSQDYNEYZLOAPIYKFQCPJUJSVTMQOC");
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
    msg.setTimeStamp(0.572005987823);
    msg.setSource(4046U);
    msg.setSourceEntity(250U);
    msg.setDestination(65238U);
    msg.setDestinationEntity(108U);
    msg.reactor.assign("ILXJAQZHDEATNSD");

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
    msg.setTimeStamp(0.752748250032);
    msg.setSource(47141U);
    msg.setSourceEntity(64U);
    msg.setDestination(48719U);
    msg.setDestinationEntity(28U);
    msg.reactor.assign("MBMAJLVDKHNYSCIDRBFJNZKZJHEAPMFJOJJOCLJQENQMNYRTSWTPOTQXBAASSCYDYKDRBPDC");

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
    msg.setTimeStamp(0.908876348769);
    msg.setSource(10746U);
    msg.setSourceEntity(236U);
    msg.setDestination(29566U);
    msg.setDestinationEntity(33U);
    msg.topic.assign("YNAJWFQVTZBDEBSQYEKPUZLCUHUXQADYADKINMBBSKOPMQSDPNCVWFWAGFIWTFYJNEILVWVGCRIMROEPYCZOSNONOHEQZJNYXPEDDMMLJCEUMTXXFIXHTFKMBRXOPXZBGFGJGESDBQOJAAERDZIUAKAGXJTTRRIFBVPQJHZWTJOKC");
    msg.data.assign("SFDIMRCORMGAYSJZYZEAZICEFMNFHKUTNWSPAVGDCZKBYEKUNRUTHYWGUXVGHHVVJPMJBCBFPPPGYYAKTVTKXPLFJLIDHRMNLHWDEU");

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
    msg.setTimeStamp(0.406534249656);
    msg.setSource(5505U);
    msg.setSourceEntity(109U);
    msg.setDestination(45684U);
    msg.setDestinationEntity(184U);
    msg.topic.assign("GALFEEHBRKNPQKVGIRWYXPIXZPWLYDZNRNFFCUWRPXYRVHINNYOOVMWXEGMSSAYQCDFQFAYBMDFSIUYTOTSKVHXAPJFGQLLUEQTUTQXOLCNDXHEQOCGGAQGJVHXGKDJCWXJTMCWBQBSHRLBCIZGYPVZHJIDMKPWWLQZDLRJZORCBPAMVOUBAEISTYOFCJWMTUIRYIKOENPAEBFMVDXAHMJBDCKK");
    msg.data.assign("TVUHFKXLLIKEPIOYOQMIEIHWFLZAYYOKLQWMMJBQNPHNWLSWODEJJWSWDLJEMJGVXDENVV");

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
    msg.setTimeStamp(0.0541225301716);
    msg.setSource(55033U);
    msg.setSourceEntity(104U);
    msg.setDestination(47885U);
    msg.setDestinationEntity(182U);
    msg.topic.assign("TDIHDEZLTZTRZBSTFCANMQYFCTWEDMAFBWOKLCYNTGBKDMWIOQEQNKGJKCGGZJUJFDLHEVOCRUZVEOBAIQOXCAKEVIQEITWFJVYFUEXNDRULQLKSJMUWWBYQDHTAJSCAXMBKNVMKOJZPPXUTVHYOHFXVMWBBXIVSWRSSOZDIYGJYKSQAPLQYLEIHRNOCMQXJLDIGXAGONRPZIUFPCUGPMHPBRZNSSCVPWPJGUVYRAXFBENSLHRTPDWUKRZ");
    msg.data.assign("RNVEZPNIZTNWRXWYDGFIJUMILLYFNPKPLXHMRDLBIGDEVMHSSTSUVZTBWHHCFFRFMZSSGCCOOKWQCTXOTYCLDSBWLYBTPQXFAXFBGSQJNGNSNIZSVHKOCJJBJFDGMUXIEKVDWJEXDUQEUIVEHALVLGHWQRUXATERZQTFAJRNYQWKDRTB");

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
    msg.setTimeStamp(0.874680525453);
    msg.setSource(42319U);
    msg.setSourceEntity(34U);
    msg.setDestination(19451U);
    msg.setDestinationEntity(236U);
    msg.frameid = 215U;
    const char tmp_msg_0[] = {5, 61, -125, 67, -127, -11, 85, -124, -51, -111, 87, -28, -91, -98, -112, -65, -52, -39, -115, -28, 108, -111, 108, -10, 75, -29, 70, -14, -127, -60, 55, 14, -39, -26, 83, -87, 81, 43, -103, -102, -47, 14, 104, 81, 103, -15, 0, -67, 18, 94, 103, -51, -55, -61, -7, 81, -29, 11, 46, -47, -48, -126, 56, -49, 53, 111, 4, -19, -58, 12, -128, -77, 125, 20, 116, -123, 51, -3, -45, -38, -18, -20, -116, -109, -114, -62, -47, 86, 94, -65, -89, -98, 83, -25, -120, -12, 12, -110, -122, -111, -24, -112, -37, 2, -43, -58, -43, 82, 2, 20, 2, -8, -42, 34, 108, 84, -28, 62, -74, 118, -17, 72, 112, -81, -79, 35, -17, -17, -108, 76, -106, -115, -76, 88, 107, -123, -36};
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
    msg.setTimeStamp(0.89764813579);
    msg.setSource(10319U);
    msg.setSourceEntity(183U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(112U);
    msg.frameid = 234U;
    const char tmp_msg_0[] = {-69, 41, -126, 125, 66, 0, 41, -20, 34, 67, 64, -49, -89, 119, -99, -104, -8, 93, -18, -21, 94, -103, 112, 93, 119, 25, -98, 98, 4, -77, 82, -2, -118, 44, 5, -119, -4, -58, -78, -25, 47, 89, 7, -48, -106, -116, 51, 78, -113, -91, 94, 105, 75, -17, 55, -121, 60, -34, -127, -92, -87, 55, 10, 35, 22, -77};
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
    msg.setTimeStamp(0.39840677105);
    msg.setSource(1030U);
    msg.setSourceEntity(158U);
    msg.setDestination(20266U);
    msg.setDestinationEntity(168U);
    msg.frameid = 82U;
    const char tmp_msg_0[] = {88, -22, -77, -117, -105, 68, 96, 97, 38, 38, 37, 35, -124, -124, -45, 26, -124, -68, -43, 114, 78, 94, -45, 92, 24, 11, 76, 123, -15, 0, 91, 25, -30, -22, -100, 107, -68, -114, -110, -53, 19, 125, 94, -101, 108, 20, -50, -74, 40, -104, 44, -49, 45, -50, -128, 83};
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
    msg.setTimeStamp(0.723175763149);
    msg.setSource(49857U);
    msg.setSourceEntity(80U);
    msg.setDestination(62637U);
    msg.setDestinationEntity(55U);
    msg.fps = 157U;
    msg.quality = 109U;
    msg.reps = 105U;
    msg.tsize = 239U;

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
    msg.setTimeStamp(0.815135870266);
    msg.setSource(60641U);
    msg.setSourceEntity(234U);
    msg.setDestination(32839U);
    msg.setDestinationEntity(145U);
    msg.fps = 168U;
    msg.quality = 91U;
    msg.reps = 14U;
    msg.tsize = 52U;

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
    msg.setTimeStamp(0.870066868793);
    msg.setSource(16487U);
    msg.setSourceEntity(169U);
    msg.setDestination(64405U);
    msg.setDestinationEntity(147U);
    msg.fps = 86U;
    msg.quality = 210U;
    msg.reps = 150U;
    msg.tsize = 108U;

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
    msg.setTimeStamp(0.314163328646);
    msg.setSource(48777U);
    msg.setSourceEntity(124U);
    msg.setDestination(52638U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.167004220407;
    msg.lon = 0.322049183467;
    msg.depth = 118U;
    msg.speed = 0.293753219653;
    msg.psi = 0.538578741088;

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
    msg.setTimeStamp(0.0418236159016);
    msg.setSource(27722U);
    msg.setSourceEntity(28U);
    msg.setDestination(64162U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.491112927339;
    msg.lon = 0.842980991744;
    msg.depth = 99U;
    msg.speed = 0.71530370098;
    msg.psi = 0.443839184003;

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
    msg.setTimeStamp(0.220426720498);
    msg.setSource(40052U);
    msg.setSourceEntity(119U);
    msg.setDestination(53917U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.696296818856;
    msg.lon = 0.213954666501;
    msg.depth = 88U;
    msg.speed = 0.550301543803;
    msg.psi = 0.35626650379;

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
    msg.setTimeStamp(0.761068943575);
    msg.setSource(19405U);
    msg.setSourceEntity(101U);
    msg.setDestination(20063U);
    msg.setDestinationEntity(209U);
    msg.label.assign("FUPUZEUCLVIWLCQWPYJMONCYTINOHZSFAYSBUJOKRATCWGWKBVQTFJHARXMKRFCCEQDIAFJYWGAAZDXPKMCGIOYVOLMJIJLELHVQXWSIOSXSQGHAMNUWLXGATSDTMSBREDRZNLDPXCILQUYMPERZIWEQOJBZOZHVVYQXVNMFKHGRIDPBAODZAZJIKKQHYBPHFPMDRSLPCBJRMJSFBHDPLUEVYEKYGKVNNEFTUKEXHRWBNZGGSUUNTDW");
    msg.lat = 0.871968051979;
    msg.lon = 0.138720383954;
    msg.z = 0.404028757318;
    msg.z_units = 232U;
    msg.cog = 0.296336081192;
    msg.sog = 0.645255408644;

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
    msg.setTimeStamp(0.554017124841);
    msg.setSource(26643U);
    msg.setSourceEntity(100U);
    msg.setDestination(42282U);
    msg.setDestinationEntity(91U);
    msg.label.assign("SXMHNLFLYVQFBISYRXOBOGYOODLOXNDPTLLIVNUMEKSJJEKBTLRA");
    msg.lat = 0.779670527986;
    msg.lon = 0.0079839712439;
    msg.z = 0.196966517929;
    msg.z_units = 127U;
    msg.cog = 0.610248344129;
    msg.sog = 0.0333929489563;

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
    msg.setTimeStamp(0.016732279926);
    msg.setSource(51852U);
    msg.setSourceEntity(192U);
    msg.setDestination(12254U);
    msg.setDestinationEntity(208U);
    msg.label.assign("BWSTVYOAIZKCWBEIUQAUSMYBRZNETRNIHRGIPKSPRAIGCVQXTOVNXUDTCJJHJTSBUVXCWXEHIRQHEDTZEKXFSZOYLLISMMGYFHURPCGTYOWVNLDDRXTDFQWJFHMIZBPEXFBANMKULAGH");
    msg.lat = 0.282795766872;
    msg.lon = 0.0124489109784;
    msg.z = 0.998068935803;
    msg.z_units = 217U;
    msg.cog = 0.558059973544;
    msg.sog = 0.293939382751;

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
    msg.setTimeStamp(0.838772969431);
    msg.setSource(52550U);
    msg.setSourceEntity(63U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(232U);
    msg.name.assign("FKFMZEMRXCKNILSAENJEQLGBFZGTSQEZWQMKHAXNRLSCIJLJPPSGPJHSGMAFBUWGCCMGABGRZJYSXNCPPUDORKRTAVCZRDUKFPDPUETBWIOXHTIHWHSVLOHYBKCALXSJTQQIJCVFOGOBZXWBMDXCMIWMGPAENNEWPOBYFDKATVYHWNRMRFVFDIQCWABVENZYMRXHPYSQOVUZAVUEYSQLKONOIYKJXHDKLUBHZRXDYQIYT");
    msg.value.assign("OPMSBHWJXVXDQXBTDAQPCDRYJPVRIXTCMNQITGLJFJHKWEXYSQZFZMEDDCOVXVICUCLEBH");

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
    msg.setTimeStamp(0.435579860461);
    msg.setSource(59745U);
    msg.setSourceEntity(208U);
    msg.setDestination(14085U);
    msg.setDestinationEntity(236U);
    msg.name.assign("KEJOULRFBGWCOGZEFLABBEWXDORUDHMJAIQADSZQVVBHATKHCUMVDRILDDUNBYERKFQPMJICCBHLTXQQWIXGCVSWCAMWMZXDBCQNFAQYAGFNUINXJOLLTAFIIOOQJGELBZRYGPJZELWTVLTJOUSSLPK");
    msg.value.assign("OEAJMSQSBCMGTNXKFPCYXJQDFRUSQABPDFCNCRETNIOYINMOHRUDLHEHPYVUHPBFXUMWAPKBFTMKKOZOUGVYAGHSYMPGLYGIETOKTVWHTVLQASJMRLCOBWBUKLZABYQGJGGYDEBLRYEWUFNISSZCAFISKIVDZPDXXAXXRYGOJKSDCKPCDHTEFGQCTZFL");

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
    msg.setTimeStamp(0.148553698267);
    msg.setSource(7391U);
    msg.setSourceEntity(97U);
    msg.setDestination(49918U);
    msg.setDestinationEntity(239U);
    msg.name.assign("CLTWANUMVHCLDTUHJDXZPYBYWYKOFXGFRSQPUTBYPNDXBUJGZBQMCKJXSZQXPNKJWFHRKFUKBAVDHBXFIAUAOZMQHKVAHHVNQYZGAUEDLJIEYWNNNKSCAMDOWVZGWDYPDSJOYMWUDBQEMHQUGVONHXFBSSRQVRLREXTQFIOWYJCEPLGYELRITNILXZOCWJFTFPCKNFPPALCVETJOOIQIRSTPMRMEAHBKIWTEGDSSIGE");
    msg.value.assign("ZSKZDTNHPMDZEXJERGWLLMTYUARAKGDVRFCHSIJSNAZVIPLSXEWXOMEDCYCBHXZWSJRVZXOHKFAMXYQCFCWVJTDEDSUVHVGURPBGXKLXIAMYRAYXWCLBBFKHOAIPBJUQFIRFNJTQEQUTPQZHGIYQVGGKETTIXFTJUMVIQOTNWCZNBCFKRFSWUQMUSDWLBOFYLREKOPOULBDIPGZUEBKD");

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
    msg.setTimeStamp(0.36449428969);
    msg.setSource(966U);
    msg.setSourceEntity(230U);
    msg.setDestination(18068U);
    msg.setDestinationEntity(16U);
    msg.name.assign("LGYNLHGXIRLNLKZJCLPWDSCFHSMBKIOIJUOXHOZJQTTAUFUUEBNCQAFFPDFEMPSRMEVOJPGGQLRQMABNEVACXKYONSSYYZQCKKEVZOXLJAN");

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
    msg.setTimeStamp(0.50364661116);
    msg.setSource(37137U);
    msg.setSourceEntity(14U);
    msg.setDestination(15732U);
    msg.setDestinationEntity(110U);
    msg.name.assign("ZRUMNBDPJVPNNSJLMGIRYNLIPDJATKVWFBUMQYOPJFMBZEHKVHNMFJCAAHFZYUXZGWRELHHPGASZOWGFQQOKVLPODVHZNYUTEEYUUHFUGDOTXIIQCYXQOQRBICUVBNOASRCL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UJPXVQYSIKHDETCNHYDMAPAWKWPXERABQBMYZUTNSIZURAMSVSXWYUOHGJLENXRSBFRGDLGEDTCGXBCAINBSMLQVXHGFJKCQBQOUVQAGLEDFVNXNZVKMOEOZZDNZHOMJTWYEWBKARJKFNM");
    tmp_msg_0.value.assign("WISFAGICHRAOOOOTFHTDYYDKJJBBJATISEKFWPKVEBVDTEKUIKQROUVUHUZRNAHUBTHMXGJXRVHIZFSXGZGXXGTZLFXQLNHBLUFWANPMWJMJISPIAMZKQAVVCNZFNMYXLRZDMSNOCCNYMPEDOIEWVKGCPLMFYVJQLCPJQZBUBROHSEYTTKSEXWYXYTPSDDUGSCOILIBJASPRYOVYZQRNQMGQLNWPWRWRLGEUMJCHQFCDUXHKQ");
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
    msg.setTimeStamp(0.977663507584);
    msg.setSource(14176U);
    msg.setSourceEntity(201U);
    msg.setDestination(57398U);
    msg.setDestinationEntity(11U);
    msg.name.assign("RSTZMVJOLLPYQUEGVYHZCRFIWNVFVTCMTBDQZBPOUWLWMFEABKSP");

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
    msg.setTimeStamp(0.706060700132);
    msg.setSource(771U);
    msg.setSourceEntity(144U);
    msg.setDestination(59812U);
    msg.setDestinationEntity(89U);
    msg.name.assign("LELTKKTUDGQVQZSBAYSOHNVWVVZOUQYIHRDQFYKYZKPACHXABMWQGXYVIHNCGNJVNJEFRVMGTASMRCCPYBTFYHDDAWCPEFFRMROEUOLUJXUNSBVYXYEAIFIQELHABHT");
    msg.visibility.assign("EONDFHQMMUAGWIRZSGRGLLWYIDPQAGLVEGVQISONNHNGOWIZFHMGJBCJPFKNXOWWLOQOSKRVTCSACY");
    msg.scope.assign("LHJQJUJBYDZOSKDJHFQR");

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
    msg.setTimeStamp(0.0527160864189);
    msg.setSource(7473U);
    msg.setSourceEntity(218U);
    msg.setDestination(60130U);
    msg.setDestinationEntity(0U);
    msg.name.assign("EQKBBSKMXUUZYFWJRCQRYVDIEPGLCSJMGURHNMBTAGQPXYQNSVRUFAXTPZTGPKLELOWOYYEYFPFJOVBFCCFKDJHZANJOGHYQPVGEIAARUEKTSIQGVIIVKVZLCBONCNDSRPHPXKRNWLKNWUWMLCEBXFDXSZTSTFEMCOHDJOHNUBQMFIDMDXFTRXBETDLWVAYIZURWXHGSJZQWRWWYIL");
    msg.visibility.assign("VSNDBHLJMURWPBZDYCZBSHAKBHPGHUZAHRYUALHCLDHOQTSMUWIFWZPOMGCKWZFIYYWGJAPSTWVERJMPBKFGEPTVFALFNJETEEZKXBLYENKMRVXFUNVOEBQBERFPTFTCHILRNJLNMXVSCNWDQWJYQLDXRNZXCLIYHRHOVAGGXKINVKABMOJWTQQOUSCZOGOTMGKSXVJFAUPINQZPQWTSYRUOXIVCDGII");
    msg.scope.assign("BOGQTYZKTRAFIHKDMMQZNPNGLSRUJSCYLWLYNQLTMKSTNKJGHFEVZESYCOPBWQYCJVAGTSHPJBRUYOMQNFNGXYLGTDPUPVUHFKPXGYIDRGYPEPWWXOXMJZXOAMGTWXCUXAMVUJEEVIVYDQTLRAAGPKECKBSOQZZKDFENKLSVZSNLRPBRIZUDHIJFNFJQZICROBABBICQZUFWNAAOLEUHIRDWJ");

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
    msg.setTimeStamp(0.850003749054);
    msg.setSource(18856U);
    msg.setSourceEntity(41U);
    msg.setDestination(43769U);
    msg.setDestinationEntity(55U);
    msg.name.assign("ZSDGGKWWDKGQUUUJSNZFBDLPCOBSJHROUQNCQYOGXEDEXQXHBPVYWQIWECPXNDGXOFVEKRTCIJVATRQYWRBKTKTOLLFCMQRYWSMNZHINAYUECAULBKTPCKLNTGVULILHSONKTDYQUSPZGKAKOXMIDYR");
    msg.visibility.assign("DHLKSIRNUKJCVBRWYHECPLIPQAPWOQFFEHLPVGTRJUWCTFDMBZNTDQZGOGXYSICOBIEAXFLYPDDZPKLSAIXZEAZMAMEKZXGUCQFSXTWHCQXOPYRVVBSWKCLHEBGGTESJBBAYJZAAWLTYNAGMVVFUPCNBOOCQQTJUVQONTHMNSGMIRGMRBHUNYOITKEVIJXHMUELIFDTNKJKDXPNRDJHYUWSAYZSWDLKR");
    msg.scope.assign("MRCJZGTIBGJXDOSAISMZAWLGSLDLQLPCBFPACZZMJYBXQMXPBABOCHSWVCZKVKQCNRPVGPTDYLMVSHFNOPEYKZUVKPLNHVSAYDZGLPRBIJHVNENNDWSIOR");

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
    msg.setTimeStamp(0.781053124062);
    msg.setSource(56868U);
    msg.setSourceEntity(15U);
    msg.setDestination(64000U);
    msg.setDestinationEntity(246U);
    msg.name.assign("URKVWLRFTPFAHLTDRHOEHKQCISIURJNSRTBYZNYSUJVAJLCEQFYKVLCWKVDNIGXSSABNFBMCXIGEGVTKDGPNQFYUVLKEXAQCIAHHUDLWEDIQUIYERCVJRQ");

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
    msg.setTimeStamp(0.0616853229181);
    msg.setSource(6925U);
    msg.setSourceEntity(51U);
    msg.setDestination(4121U);
    msg.setDestinationEntity(38U);
    msg.name.assign("KPWDBSNRMQLPZKZSLGRCJLJJEFHEPSBTXNHCSMOCRGKIHTFTBPDFIFDVMUFUTAUFAOXKFDNLJRISGAXIMZOGNYXDUMIOSOBCROPEQHBOAGUROEPVAYDVIZGCILNNJXCWVDMJYHTWUKQEMQJOIDGFZWQAYMCVWLHTTYVQAINDQYAKBTOWZUYYITSBFJVZTP");

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
    msg.setTimeStamp(0.107812228282);
    msg.setSource(2207U);
    msg.setSourceEntity(207U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(197U);
    msg.name.assign("VSPCPCRTQXXFXCUOVAHXVGRSORRSLNTKEHXOCFMYIPBPPWXLJYFDAYQUIFIXMOZTUDIIYSVOIZWQEDWHDQNJAJGEBTOQYTRJDDKKKMCPZGSZENIYWSTVJWAAFNQTHJBUSYGJLXPVRAXELZANBRZCKRDGCXZOGJMMFTMIZNUUQCDFYQLLQVMHBBHBRSLWUKPHEPIHNIWAJLVGDYBL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JLFVCUJWMFKZJQDNKRGHBKJHVQYQWSEXLRVFBMYABDHDGYZPGKDEUYLGBFWDLHSFLTPZQIPPIEWNDPCWUYETOEXCSAXSEJAKRAXQMSLOVIYEUVEOCONZUABYSNANPCDL");
    tmp_msg_0.value.assign("MXFEGLKMQJANWHFRCBFNRSLUXFCKMPXTOQUEHCBTSKJNNWDWTDMBORFAZHNPZOCGBOJISPHPBQHWEVTUIAVGQUCPKZKXMPXBCOAHLGGYKAIWJLPTRHYRZOLLMUKJFSLKQYHRBNDUUGYURTTBRPGEMTDYPQFIQVVZIKBXLGAIWDGYSTDVRBCXNXWDXSNMCWOADLQJNAEMCZQYYIEHAJEHONLTJDUEZRYWZISQVJVDFMCOGSPYVUXEEF");
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
    msg.setTimeStamp(0.867284842647);
    msg.setSource(19257U);
    msg.setSourceEntity(150U);
    msg.setDestination(40997U);
    msg.setDestinationEntity(172U);
    msg.name.assign("BEPIJRHPLLSCWPHQCUJDJQRXOYQZGETFCVSBBIUTMEQOLFJZFNUWRDIPKVFSHGAAYEFQOKCNNWIQVWSOOSJLFZYYGCWLCKVVECTJEYAPLYDSOGXXADRGEUBTQSDPWXTBWXRRICLXHGVVLFZTPMQMZJOZTBXHUM");

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
    msg.setTimeStamp(0.788247214779);
    msg.setSource(50450U);
    msg.setSourceEntity(165U);
    msg.setDestination(36719U);
    msg.setDestinationEntity(112U);
    msg.name.assign("EVWODKFJTJETFXAVAHALOEVTXMZDQYBLUYQKWUJKTZPXAOUHHHPQOFBBNS");

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
    msg.setTimeStamp(0.997090962918);
    msg.setSource(26282U);
    msg.setSourceEntity(66U);
    msg.setDestination(50747U);
    msg.setDestinationEntity(95U);
    msg.name.assign("TJATUMKGXVIUAJRQAQOAVDVXEFUSUCYGSYFPPDLYONCKPQBBLVKHOJZDFWUEXYFXINMDUXKMLQCWUSEEPZXLDXBOLERWUGBWFTYRIJIWDPHKMJYGZNVGBEEQDPZWZZDNIKNTTROCHELAOQNTPWJHDKICGBOHFIGNCDCPOVFEMVQEWAP");

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
    msg.setTimeStamp(0.77780429639);
    msg.setSource(21258U);
    msg.setSourceEntity(106U);
    msg.setDestination(42893U);
    msg.setDestinationEntity(57U);
    msg.timeout = 2897428908U;

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
    msg.setTimeStamp(0.900020999635);
    msg.setSource(5416U);
    msg.setSourceEntity(124U);
    msg.setDestination(12049U);
    msg.setDestinationEntity(82U);
    msg.timeout = 1306868830U;

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
    msg.setTimeStamp(0.979186851378);
    msg.setSource(3877U);
    msg.setSourceEntity(150U);
    msg.setDestination(30115U);
    msg.setDestinationEntity(120U);
    msg.timeout = 1992478845U;

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
    msg.setTimeStamp(0.502038163749);
    msg.setSource(58321U);
    msg.setSourceEntity(220U);
    msg.setDestination(57298U);
    msg.setDestinationEntity(203U);
    msg.sessid = 4215992250U;

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
    msg.setTimeStamp(0.872594545508);
    msg.setSource(9939U);
    msg.setSourceEntity(42U);
    msg.setDestination(29595U);
    msg.setDestinationEntity(168U);
    msg.sessid = 1499075174U;

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
    msg.setTimeStamp(0.683043298996);
    msg.setSource(200U);
    msg.setSourceEntity(139U);
    msg.setDestination(25574U);
    msg.setDestinationEntity(81U);
    msg.sessid = 4242561281U;

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
    msg.setTimeStamp(0.375538241329);
    msg.setSource(2251U);
    msg.setSourceEntity(2U);
    msg.setDestination(16197U);
    msg.setDestinationEntity(171U);
    msg.sessid = 203985680U;
    msg.messages.assign("CBTABSLWZQFIVZNCXQWNDPZAYWLXEXREDJGUHXOUYQWKKICAHCMLUOMWRTGVPKMDENNVCRDIVKOVRSXIYRXPHVHXNYWDFWMXEDIRDHOEJYLVQTDTLMUPWNUZGKSEWSBFHBTJATKZSHGCMAHXVFRIRJPTHJABQZP");

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
    msg.setTimeStamp(0.933287707806);
    msg.setSource(52475U);
    msg.setSourceEntity(155U);
    msg.setDestination(46943U);
    msg.setDestinationEntity(12U);
    msg.sessid = 3513241287U;
    msg.messages.assign("GKQVXJBPCZZWGALSXTAAQGMLHIODZIHFPMCVVRXQLPNVYWIUOEKOGAVQNAGLJMTFNOOJBJSNSURFQMSYSLQTDYIBHSCOXHLRQCOLVUEKZXCJIPYNIWCWACBHOXNWAKJAPISKAEBUFWZFTBEDELZGUIMETFCDXMPTQZZDRJIWTYXREBPOZUEFHFKHTQ");

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
    msg.setTimeStamp(0.555180131071);
    msg.setSource(49971U);
    msg.setSourceEntity(95U);
    msg.setDestination(21171U);
    msg.setDestinationEntity(40U);
    msg.sessid = 357663583U;
    msg.messages.assign("NENOZDCLGXUARSJLMKYHQQNRLKJBFHDICSVYPTWVWVFIACMIKPBHZIGSIYICSIPWGAUJMUSMMDSRMZBURKHVDWTLJTRFTURIHYGNYBOTXYGZEHAOXDOSFHEBVOR");

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
    msg.setTimeStamp(0.809185861876);
    msg.setSource(29275U);
    msg.setSourceEntity(8U);
    msg.setDestination(18529U);
    msg.setDestinationEntity(77U);
    msg.sessid = 1231215246U;

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
    msg.setTimeStamp(0.16456328387);
    msg.setSource(41277U);
    msg.setSourceEntity(3U);
    msg.setDestination(3515U);
    msg.setDestinationEntity(169U);
    msg.sessid = 3117405521U;

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
    msg.setTimeStamp(0.0228808984365);
    msg.setSource(9557U);
    msg.setSourceEntity(39U);
    msg.setDestination(21418U);
    msg.setDestinationEntity(215U);
    msg.sessid = 1773781062U;

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
    msg.setTimeStamp(0.183480826518);
    msg.setSource(33756U);
    msg.setSourceEntity(180U);
    msg.setDestination(9827U);
    msg.setDestinationEntity(63U);
    msg.sessid = 2685430485U;
    msg.status = 25U;

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
    msg.setTimeStamp(0.923989852432);
    msg.setSource(65374U);
    msg.setSourceEntity(60U);
    msg.setDestination(49441U);
    msg.setDestinationEntity(53U);
    msg.sessid = 468689771U;
    msg.status = 217U;

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
    msg.setTimeStamp(0.136625533375);
    msg.setSource(41464U);
    msg.setSourceEntity(151U);
    msg.setDestination(62569U);
    msg.setDestinationEntity(202U);
    msg.sessid = 1401602947U;
    msg.status = 195U;

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
    msg.setTimeStamp(0.884939296624);
    msg.setSource(49826U);
    msg.setSourceEntity(184U);
    msg.setDestination(26118U);
    msg.setDestinationEntity(65U);
    msg.name.assign("DBSORVGYQOPNRBPLLIKZPBTXSQVKVKYOUWEYWBRDNETAUFANAOGSJDUPHJCPJGTHPKYCJSFJQTKXXAZOBHXKNLJGEDCEWFJCGWDCUYNIWZDPZUQQVOIVHIVEPGBIEDKFLWHNRVRFZZVDQSTJSZEJLTYKAPWIYDMAKBEAOWQPTYMMJQANEROMNMFH");

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
    msg.setTimeStamp(0.69625679763);
    msg.setSource(56976U);
    msg.setSourceEntity(41U);
    msg.setDestination(60758U);
    msg.setDestinationEntity(147U);
    msg.name.assign("YSNHZHYWTWKNJMBALLDPZUSNOAKJREDHYXPTJCNBQXYPUFVPGZSVIRGZKFMAIVXNRRXWTETUWPTBISDLDZLXQOXDCHWNTKYGVKZYHBK");

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
    msg.setTimeStamp(0.0701709448104);
    msg.setSource(59069U);
    msg.setSourceEntity(89U);
    msg.setDestination(31136U);
    msg.setDestinationEntity(124U);
    msg.name.assign("BAOXDBKFCBNILTJZNLCMSSCRQSVMJYLZTBREPKFESY");

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
    msg.setTimeStamp(0.595962725094);
    msg.setSource(50717U);
    msg.setSourceEntity(114U);
    msg.setDestination(11953U);
    msg.setDestinationEntity(129U);
    msg.name.assign("WFWTCBSJETGYNAQTFAVCAFYKUTCBTZLJB");

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
    msg.setTimeStamp(0.799548807686);
    msg.setSource(37997U);
    msg.setSourceEntity(141U);
    msg.setDestination(16115U);
    msg.setDestinationEntity(244U);
    msg.name.assign("MTHBOMDDCXWMDZQVZXUVJUDZUNOXJEEKLBSHFWZOMAPLXWSAUYVGCQPVOGRQMXETIRSGVROGPRNTNSBGPBOSUJTXSZASPIZYACAWKWCPWKUFUCZFYBEDHTMUIJNQRKGAIEONFNHJNZTVSLILBTGDBFZYDXJVHGYALOYEHQXKFIBPYVKGLHVDJRBHWTQPDOHYLIOQKQQAAWJNLACVWCSTECRJRFGJKQ");

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
    msg.setTimeStamp(0.00941199801289);
    msg.setSource(51740U);
    msg.setSourceEntity(145U);
    msg.setDestination(24174U);
    msg.setDestinationEntity(13U);
    msg.name.assign("QVSVBNGRNWMZIJYUVZBWVJXUEPZWMPSEQTCLZQTCRDAOFXWGDVHTUDEVQTOLTOKKPAAODYXPOHYLZSCDUHRIGRISLPRHMDBXLSCXAPNZKROCYFTXEQKORSPSGSWKYBFAHPDLYNKNMUKXCAQBKVFPJK");

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
    msg.setTimeStamp(0.929736016879);
    msg.setSource(56781U);
    msg.setSourceEntity(230U);
    msg.setDestination(9867U);
    msg.setDestinationEntity(112U);
    msg.type = 218U;
    msg.error.assign("JDJKDZBKLDALEWVZIXPOGKLJVQELXSKYYMOUBLVOHJYEILODCIAKEGTNSCGTQZQFRUIWTAPRURHGAHQVGCSEDN");

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
    msg.setTimeStamp(0.433620306637);
    msg.setSource(41467U);
    msg.setSourceEntity(92U);
    msg.setDestination(32306U);
    msg.setDestinationEntity(76U);
    msg.type = 212U;
    msg.error.assign("MNRINVCKDIHIBSFIYPFYRBNBWKUADDVAXAFZCUQKMHWSEGEDVVRESNTAIDUQMLJSA");

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
    msg.setTimeStamp(0.474581208532);
    msg.setSource(13053U);
    msg.setSourceEntity(85U);
    msg.setDestination(25371U);
    msg.setDestinationEntity(120U);
    msg.type = 153U;
    msg.error.assign("TULBWQNAKGZDZCXTUNZFJJNZGKQFIBEKJRUXKPYBRPVNPZQLMCOWBZMOUBQMHADSCTAREHYSNVQIKIVLTDZWWKIANHPLPARXDBKIEDXEGMHGVRBEVRUQJFVRFVBMTXSDOZXFTCQJUPYFZYGDLAIOOADWUHBCJGYNYTCUYIVAXLEOOEWORTSTOXPGMMOXAWLKIWEEACSHPSHFVQMCNGREDGSSCXUGIZWFLHSHLHVCFSQPFBLTYR");

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
    msg.setTimeStamp(0.70819014307);
    msg.setSource(32654U);
    msg.setSourceEntity(139U);
    msg.setDestination(11871U);
    msg.setDestinationEntity(43U);
    msg.seq = 60379U;
    msg.sys_dst.assign("VLGSIBUJADURQQWRREVRFBGAPIXFYYGHEAXKRJBJNPNUTLVOPNYDSIGMSHWKUFTGKXMGKVFHJHBJSMARHOLWHIZDUJCIIAJEZXTNQEVOFGDYOPKCDDGDKSFWNKMZDHXKLBHXYIQQZBERLVUMOISUXOYHLBPLT");
    msg.flags = 236U;
    const char tmp_msg_0[] = {16, -13, 3, 36, -121, -73, -34, -68, -17, -79, -83, 15, -115, 8, -124, -104, -89, -51, 65, 61, -56, -98, 97, 35, 61, 47, 12, -70, 1, -13, 62, -123, 109, 58, -86, -110, 117, -72, 99, 115, 81, 106, -39, -44, -36, -56, 26, 113, -12, -75, -7, 76, 80, 55, 15, 84, -67, 32, 116, 108, -20, -25, -52, -117, 124, 11, -113, -22, -25, 89, 30, 76, 126, 44, 70, 26, -83, 119, 64, -112, 64, 38, -44, 55, 94, -17, 91, 115, -109, 34, -1, 61, -92, 111, -98, 47, 106, -71, 91, 95, -96, 69, -70, 52, 52, 84, -59, -73, 74, -29, 108, 61, 71, -67, 96, 77, -8, -126, 113, -95, -116, -11, 58, -108, -14, -69, 89, 99, 7, 76, -46, 76, -97, 0, -79, -72, -25, -68, 71, -98, -96, 112, 18, 28, 124, 30, -35, -99, -62, -70, 81, 118, -39, 120, -44, -38, -65, 56, -99, -59, -120, -111, 81, 71, 70, -103, -106, -77, 79, 124, 92, 81, 29, -86, 15, -85, 87, 3, -65, -121, -4, 37, -38, 35, -97, 55, 49, -77, -2, 29, 73, 118, -108, -87, -66, -61, 100, -39, -14, -38, -57, -6, -64, 56, -116, 15, 103, -80, -77, -6, -124, -11, -55, 83, -59, 58, -96, 7, 66, 68, 23, 46, -66, 9, 19, 122, -97};
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
    msg.setTimeStamp(0.874514338819);
    msg.setSource(65336U);
    msg.setSourceEntity(247U);
    msg.setDestination(15354U);
    msg.setDestinationEntity(210U);
    msg.seq = 40893U;
    msg.sys_dst.assign("ODXGMFGUWWFJIMKPANETIPLZNSKMXBRYURRALJHGSAWPMVAUFBYBSQE");
    msg.flags = 170U;
    const char tmp_msg_0[] = {75, -12, 60, 39, 125, 23, 0, -125, -35, 30, -117, -49, 6, 126, -91, -128, 33, 3, 71, -29, -27, -94, 63, 12, -32, -90, 87, -95, -31, -20, -105, 11, -128, -99, 73, 75, 53, 81, 85, -64, 72, -72, 2, 49, -73, -47, 39, 38, 57, 19, -67, -16, -99, 38, -10, -110, 70, 24, -21, 20, 4, 11, -36, -2, -52, 13, 84, 113, 12, -107, 95, -46, -37, 40, -121, 44, 20, 71, -125, 86, -29, -13, -27, -55, -81, 32, -117, 36, -36, -3, -84, 15, -123, -2, -89, 27, 75, -120, -23, 11, 109, 93, 72, -54, -91, -127, -74, -55, -31, -36, 84, 82, -41, 40, 109, 90, -85, 43, 48, 67, 98, -96, 87, 38, -109, -103, -48, -20, 115, 101, 19, 96, 84, 78, -31, -1, 63, -68, -11, 38, -101, 96, -85, -52, -36, 69, 65, 111, 46, 27, -37, 18, 4, -108, 94, -102, 95, -107, -109, -25, 22, -47, 31, 117, 123, -126, -56, 66, -33, -114, -9, -44, 74, -100, 61, 58, -94, 15, 50, -10, 8, -84, 101, -10, -113, 4, 14, -17, 114, -111, -87, 46, -67, -68, 6, -121, 46, -91, 77, -44, -107, 96, -2, 5, -15, 10, 74, 30, 93, 74};
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
    msg.setTimeStamp(0.376124748429);
    msg.setSource(3536U);
    msg.setSourceEntity(15U);
    msg.setDestination(16976U);
    msg.setDestinationEntity(88U);
    msg.seq = 65313U;
    msg.sys_dst.assign("PVDBXWGCSHRSWJKICKIEYRVAGGUXMHYYMHUKUJJLYWKZHJCZSHMQABPEQRCSLGWDGGRELMTFAKPVMIJEATRSWGPINFHOXALZNDUBWXFLNMSWQEFSXYVCYIBURWCOIAQECNXGXOLPRTPHFUERHVBHUOPJVZNFQFEADLQGTBOTQISSWTTJ");
    msg.flags = 40U;
    const char tmp_msg_0[] = {5, 14, 126, -62, -57, -17, -45, -72, -39, 96, 107, -113, 80, -47, 102, 70, -18, 46, 17, -14, -9};
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
    msg.setTimeStamp(0.0860109700848);
    msg.setSource(26641U);
    msg.setSourceEntity(1U);
    msg.setDestination(22049U);
    msg.setDestinationEntity(86U);
    msg.sys_src.assign("PPALWWCKJTGBNZDTMPCBPKMRINJXTYABEZFEIJDSTNH");
    msg.sys_dst.assign("RJCYLXEHZQUGUCBELOJUJWBYPFIWFLXSUZJGCPHHVPRCJNBUSKZDQYKOZCQPJYOTDBNPAUZFINEVNKRIXAFDARZEXIQSLW");
    msg.flags = 230U;
    const char tmp_msg_0[] = {77, 55, -102, -90, -64, -128, -86, 59, 117, 18, 25, -64, -4, 124, -104, 71, 70, -125, -46, 5, -98, 65, -52, -86, 47, 37, 1, 45, 112, 110, 106, 121, 25, -15, -109, 112, -47, 53, -97, -47, 2, -21, 97, -82, -12, -30, 59, 4, -77, -80, -71, 14, -23, -8, -75, -114, 86, -93, 26, -53, 47, 5, 18, -86, -39, -51, 123, -23, 115, 0, -94, -128, 85, -19, -2, -52, -31, -44, -12, -42, -46, 77, 40, 51, -126, -38, -94, 103, 90, 30, 60, -6, -12, 28, -46, -42, -27, 85, -100, 29, -6, 99, -30, -34, -87, 120, 41, 107, 95, 58, 107, 95, 111, 31, -93, 31, -30, 50, -40, -93, 121, -47, -92, 7, 71, 93, 70, -120, 98, -42, -97, 93, -88, -125, -65, -14, -4, 126, -66, 13, 81, 85, 116, -78, 25, -116, 58, -104, -87, 67, 75, 64, 91, -13, -84, -31, 39, -76, -30, 59, -48, 105, -84, 83, -81, 17, 40, 78, -7, 117, 105, -51, 21, 44, -115, 56, -40, 103, -124, -31, 104};
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
    msg.setTimeStamp(0.749463386684);
    msg.setSource(24138U);
    msg.setSourceEntity(22U);
    msg.setDestination(3427U);
    msg.setDestinationEntity(146U);
    msg.sys_src.assign("TYYMOHNLDWDSKBDZCJMPYZSAWKXQBUTOUGSUQGSGXLRKAKRLVCZGWXDJNGATZODGFKJXSJVNNCLBVHIJHMKDYMFLSPTFVYAIIFHIOMTLKBEJYGLCFPIEHFGBQZXDBOZEOLSUFXEVLDSXAQREVQUODQPPKRABEBCWMGHJUYQFEKWMTGTNCEPNIPWVRHZIAARRTZEEYVSHXAHKQVWZPVNCYZRRWCNOMRFCDJUQPUI");
    msg.sys_dst.assign("ERBVSUNRQVKDLSDHSGBDWKFUIEHANEQNOCACPKMUCHAZULVJTPMMM");
    msg.flags = 205U;
    const char tmp_msg_0[] = {25, -102, -76, -54, 125, -62, -82, -26, -113, -13, 30, 23, -64, -41, 91, -116, 84, -91, -93, 73, -28, 22, 90, -126, 19, 77, 81, -84, 103, -28, -93, -53, -63, -18, -65, 81, 62, 23, -109, 120, 50, 92, -22, 80, 72, 47, 29, -9, -119, -72, -112, -123, -102, -87, 85, -125, -81, 5, 122, -56, 43, 0, 44, 9, -46, -106, 59, 104, -118, 8, 13, 61, -107, 70, 95, -28, 69, -83, 9, 56, -56, 16, 93, -52, 5, -23, -95, -93, -97, 33, -12, -102, 32, 4, 107, -95, -92, -50, -127, 28, -123, 53, 30, 53, 60, 117, -26, -97, -2, -34, 50, 85, -95, 45, 42, 62, -10, 44, 52, -25, -97, 119, -92, -64, 77, -5, 43, 64, 114, 90, -111, -23, -100, 29, -76, -25, -41, -24, -122, 10, 24, -90, 62, -78, -9, 69, -106, 110, 72, 9, -89, 4, 34, -54, -79, 99, -32, -55, -101, 22, 70, -126, 26, 118, 122, 110, -63, -113, -108, -50, -47, -53, 17, 50, -88, -56, -57, 83, -20, -29, -7, 73, -60, 1, -111, -50, 25, 61, -34, 68, 24, -114, -44, -41, 3, -8, 6, 17, -1, -56, -44, 123, 100, -120, 2, 17, -17, -47, -73, -28, -63, 85, 5, -23, -89, 27, 49, -49, 5, -100, 26, -54, -2, -118, 119, 34, 122, -104, 7, -128, -78, 24, -124, 118, 51, -50, -119, 86, -53, 29, 59, -127, -60, 88, -25, 66, -36, 50, -22, -107, 56, -24, -12};
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
    msg.setTimeStamp(0.839149318213);
    msg.setSource(56998U);
    msg.setSourceEntity(111U);
    msg.setDestination(25489U);
    msg.setDestinationEntity(239U);
    msg.sys_src.assign("XKKLPYCZFHQBSSIIMTIWUESPMAOVLJFVDBSXFHMNRQBYXGWZRYEQEAXTEBDXYFJKIDUUQLGVDGWIFEHVNFYXQSCDNTJMIVMN");
    msg.sys_dst.assign("RISDVQVVANHSKWDPZYLHYXOCFGSGQHWNEZUGZIRLBBXLUUGQPTGXGCYAEJDPPHBHQYRSROUATAXXFRKWQIWPQUTTDFCJYKWORWLGFUNRFOEFJOQJDPJMFMVWNRKZQXHOSOTKNZVBAPXAMLFDZBVSAIQIIULBTCTBWUDRZUHEASNGWHCGZOLKC");
    msg.flags = 149U;
    const char tmp_msg_0[] = {71, -69, 53, -82, -91, -1, 42, 16, -47, -115, 58, -100, 79, -116, 10, -74, -47, 26, -117, -53, 66, -107, 67, -48, 91, 83, -60, 9, -43, 85, 41, -98, 0, -22, -65, 70, -119, -126, 61, -80, -84, 74, -94, -31, 51, 37, -34, 19, -111, -11, 74, -71, 79, 64, 126, -103, -16, -115, 71, 14, -120, 123, -33, 86, -47, 122, -124, -118, 47, -28, 64, 66, -3, 126, -37, -77, 5, 125, 46, -51, -64, 116, 1, -16, 14, -29, 66, -68, 124, -107, 72, 94, 16, -64, -64, 100, 60, -96, -97, -58, -38, -88, -69, -76, 114, -81, 78, 107, -53, 68, 47, 80, 86, 49, 78, -57, -21, 72, -3, -118, 51, 121, -106, 57, 39, 44, -31, 27, -14, -7, 46, -72, -49, 99, 73, 107, 123, -112, 113, 21, 29, 91, 59, 52, -69, 78, -22, -101, -77, 96, 45, 59, -15, 98, -97, 13, 107, 86, 94, -52, -5, -70, -55, 122, -102, -105, -17, 60, 65, -37, 68, -54, -34, -31, -2, -83, -5, -120, -62, 61, 50, -61, -112, -20, -23, -20, 43, 65, 43, -85, 2, -94, -57, 110, -4, -79, 117, 64, 92, 34, -22, 23, 74, -67, 123, -11, -34, -89, 97, -50, 75, -20, 99, 22, -81, 0, -31, 117, -97, 116, 38, -121, -3, 14, -118, 110, 116, -60, 41, -96, -23, -113, 53, -118};
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
    msg.setTimeStamp(0.626428543969);
    msg.setSource(42064U);
    msg.setSourceEntity(128U);
    msg.setDestination(33557U);
    msg.setDestinationEntity(46U);
    msg.seq = 51189U;
    msg.value = 21U;
    msg.error.assign("IZUXUSQPDFCFGMMUDUZZGZXBKYYUUSWOEFWM");

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
    msg.setTimeStamp(0.0547426773279);
    msg.setSource(7404U);
    msg.setSourceEntity(36U);
    msg.setDestination(26916U);
    msg.setDestinationEntity(50U);
    msg.seq = 41177U;
    msg.value = 178U;
    msg.error.assign("RXYREIODYEOCNWGXWLONACMYWEVUKUATWGSBJARKNDQLZUPJFFZLMDEHHUBEJVBADPJXOSIJTVDIXCKXEUFZTSEKJMNCJHGXAXZHVEGLKCDTLZAQSRFRLTYLHWIIWZGVMSUGFYMDHZCNYFJQOYGPGYTPAOFQSLLKUWZZXBKQNNQVUNBTKPACTPTXTFAPRXMHEPWEGSIYPOZBRYUDKNABFRQKHQOLDCNDSVRWVSBJMSMOVHCJ");

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
    msg.setTimeStamp(0.71850091483);
    msg.setSource(58465U);
    msg.setSourceEntity(198U);
    msg.setDestination(3213U);
    msg.setDestinationEntity(164U);
    msg.seq = 49737U;
    msg.value = 89U;
    msg.error.assign("UDZKGVJBHMFVUGCLUICOVPDBKBYMNRBJGWOCSPQMTTWXSL");

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
    msg.setTimeStamp(0.90844637703);
    msg.setSource(27257U);
    msg.setSourceEntity(194U);
    msg.setDestination(20871U);
    msg.setDestinationEntity(254U);
    msg.seq = 9526U;
    msg.sys.assign("DNRMYSDWEOOJOXKAYLWJHLUQUCWMOQVZYFNXDTVSKWYDGPETOGBDFMRJJCCKSGCWQJERFFINXRKMGBNYWLZEHLFEWICCAFGDGBHBMVXKSAOQPCUZTSYYUVBSNIDMZMTOARRPHJZMBTQALKNTPOLXXXZJCIZOHXVJPAKSUAVBOPHTNPHZYHFTKUILIFESQUBEF");
    msg.value = 0.0495927894186;

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
    msg.setTimeStamp(0.359782783515);
    msg.setSource(9261U);
    msg.setSourceEntity(137U);
    msg.setDestination(8349U);
    msg.setDestinationEntity(18U);
    msg.seq = 11900U;
    msg.sys.assign("ZGZUREYCGDEHFOIHWAWKYSLRGVIMDUJZUPDGPTXXERLPIHJOWMHTADLZVGUEREYTTQELOUJJENYJOZCBNIBXORXZAQZTEMHYJXNIASMLFOGQCRUDAJGYBRZULDIHMWMDNPWHLNHIVTSJDKNKWBWPELBICKLSBQPVEBAXKYTCMFVZFFQQTUOKPXVQGLTCDCMSMPXXJSOCYBSKVNKAFPNWPGY");
    msg.value = 0.491802505879;

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
    msg.setTimeStamp(0.819209178523);
    msg.setSource(126U);
    msg.setSourceEntity(105U);
    msg.setDestination(9169U);
    msg.setDestinationEntity(55U);
    msg.seq = 48928U;
    msg.sys.assign("GZTWKGJKMIEMRITUOFHQDKHQNSDFFZPEOLCIUJWNRRVUTJQAWLHTBNBZIVPXDBXRYDTQYJPUCAQVFEZKONCKHBSKORLQDIAOHSCHKVNBMPVYWNLSZDMLJGFIKRVYJJZPABSXCEIWFLSAEBGUWLZVCUGRJTAEHODTPBMDDXYBZOJUEGMSMDIQNZOCHCOLULBFPFPERLWXTNYQRSEGWKGVAZWAUPFXCXNMRTCWJS");
    msg.value = 0.403220958874;

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
    msg.setTimeStamp(0.0164734266078);
    msg.setSource(25883U);
    msg.setSourceEntity(74U);
    msg.setDestination(64773U);
    msg.setDestinationEntity(82U);
    msg.action = 8U;
    msg.longain = 0.432172104505;
    msg.latgain = 0.231401337142;
    msg.bondthick = 2201952155U;
    msg.leadgain = 0.876733495735;
    msg.deconflgain = 0.425936197308;

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
    msg.setTimeStamp(0.40578762352);
    msg.setSource(56224U);
    msg.setSourceEntity(233U);
    msg.setDestination(26987U);
    msg.setDestinationEntity(39U);
    msg.action = 138U;
    msg.longain = 0.997777943686;
    msg.latgain = 0.068693961537;
    msg.bondthick = 2746628236U;
    msg.leadgain = 0.645936617791;
    msg.deconflgain = 0.130192428558;

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
    msg.setTimeStamp(0.683080564938);
    msg.setSource(29542U);
    msg.setSourceEntity(121U);
    msg.setDestination(52033U);
    msg.setDestinationEntity(166U);
    msg.action = 140U;
    msg.longain = 0.886100054638;
    msg.latgain = 0.551782665896;
    msg.bondthick = 910888032U;
    msg.leadgain = 0.700910517678;
    msg.deconflgain = 0.0158454798761;

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
    msg.setTimeStamp(0.272006933364);
    msg.setSource(60944U);
    msg.setSourceEntity(190U);
    msg.setDestination(12978U);
    msg.setDestinationEntity(8U);
    msg.err_mean = 0.97869298361;
    msg.dist_min_abs = 0.110913194198;
    msg.dist_min_mean = 0.14909856273;

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
    msg.setTimeStamp(0.425197786535);
    msg.setSource(62002U);
    msg.setSourceEntity(213U);
    msg.setDestination(15826U);
    msg.setDestinationEntity(9U);
    msg.err_mean = 0.541515097248;
    msg.dist_min_abs = 0.922578601251;
    msg.dist_min_mean = 0.903186943099;

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
    msg.setTimeStamp(0.7585515252);
    msg.setSource(31858U);
    msg.setSourceEntity(53U);
    msg.setDestination(57839U);
    msg.setDestinationEntity(186U);
    msg.err_mean = 0.921825297509;
    msg.dist_min_abs = 0.48769052048;
    msg.dist_min_mean = 0.314689418287;

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
    msg.setTimeStamp(0.758701421256);
    msg.setSource(7921U);
    msg.setSourceEntity(2U);
    msg.setDestination(36658U);
    msg.setDestinationEntity(192U);
    msg.uid = 170U;
    msg.frag_number = 150U;
    msg.num_frags = 143U;
    const char tmp_msg_0[] = {-53, -32, -50, -12, 20, 58, 83, 11, -91, 27, 65, 80, -36, -61, -37, -20, 114, -119, -27, -9, 46, -67, 37, -48, 54, 65, 51, -48, 99, -62, -33, -58, -60, -117, -16, -62, 97, -27, 81, 104, -19, 31, -6, 44, 118, 108, 85, -7, -55, -64, -7, 87, -126, 114, 45, 36, 115, -121, 87, 80, -101, 38, 38, 14, 6, -23, 30, -111, 65, -82, -95, 117, 9, 79, 88, -55, -32, 28, -117, -126, -87, 74, -128, -76, 73, -62, 116, -86, -21, -67, -42, 110, 26, -16, 42, 85, -59, 8, 91, 8, 11, -50, -123, 35, -79, -111, -78, 113, -125, -64, -114, 106, -15};
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
    msg.setTimeStamp(0.411160185306);
    msg.setSource(14193U);
    msg.setSourceEntity(77U);
    msg.setDestination(44612U);
    msg.setDestinationEntity(114U);
    msg.uid = 105U;
    msg.frag_number = 73U;
    msg.num_frags = 250U;
    const char tmp_msg_0[] = {-102, -5, 79, -54, -12, -70, -25, -89, 115, -55, 33, -121, -2, 69, 77, 35, -91, 95, 31, -26, -109, 110, 103, -71, 81, -89, 68, 30, 33, 65, 12, 52, -111, 7, -2, -91, -28, -58, -116, -7, -126, -46, -52, 6, -94, -59, 93, -63, -68, -43, -15, -106, -46, 91, 40, 75, -25, -98, -2, -30, 34, -126, 86, -126, 54, 102, 92, 100, 4, 3, -119, 96, -89, -126, -79, -72, 20, -106, -128, -45, -31, 43, -13, -115, -110, -43, 108, -105, 68, -17, 122, -68, 66, -22, 21, -72, -105, -45, 17, 11, 122, -25, 29, 21, 109, -101, -92, 42, -120, -95, -84, -22, -24, -33, -1, -48, -116, -9, -42, 35, 72, -7, 48, 21, 10, -125, 5, -54, 40, -78, -46, -60, 0, -60, 73, -4, 31, -43, -9, -29, -99, 32, 98, 119, 2, -24, -64, 48, 104, 51, 1, 23, -69, 28, 79, -5, 4, -55, -121, 9, -69, -88, -11, -52, -72, 1, -77, -54, -92, -119, 79, 78, -71, 19, -59, -9, 79, -76, -8, -33, 42, 22, 95, 71, 53, 101, 43, 93, 97, -57, 57, 88, -84, -47, -29, -100, 62, -103, -54, 50, -56, 80, -20, -31, -92, -16, -121, 86, 116, 51, -105, 43, 113, -110, -25, 111, 33, -50, 19, 30, 52, 84, 122, 61, -18, -18, -15, -6, 78, -96, 86, -4, -89, 23, 54};
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
    msg.setTimeStamp(0.303001158274);
    msg.setSource(10856U);
    msg.setSourceEntity(2U);
    msg.setDestination(57994U);
    msg.setDestinationEntity(135U);
    msg.uid = 220U;
    msg.frag_number = 9U;
    msg.num_frags = 95U;
    const char tmp_msg_0[] = {12, 60, -57, 33, 104, -96, 118, 112, 8, 83, 32, -18, 99, 98, -34, 48, 99, -128, -63, -87, -12, -21, -91, -4, -79, -60, -122, 47, -30, -81, 113, 2, 43, 11, -125, -56, -120, -21, -82, 90, -55, 126, -87, 38, 109, 71, 9, -85, 2, -127, 124, -115, 85, 22, -72, 113, -104, -95, -92, -16, -47, -20, 36, 25, -32, -56, 96, 49, 108};
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
    msg.setTimeStamp(0.167221786172);
    msg.setSource(18377U);
    msg.setSourceEntity(104U);
    msg.setDestination(18552U);
    msg.setDestinationEntity(27U);
    msg.content_type.assign("AJYRDAXYHDVMQCCXGOJUORPOHBLREGOKFLKFTLULVKSGVQVZFBBPQQRUEZSPWHXXJCZKTFVGUXNWNCHXQCEKWAZIKBVNZQQOQRBFUCXWDIHSPFOZYONSTUVYPPDOLMWZYUOZNJRFHVTKGTBCARZLCBPWKAHETIJTLJABMCYRLUKYMRAAHIGMMQWBTILKSVTUBJJYINYIDSE");
    const char tmp_msg_0[] = {-81, -10, -110, -38, -48, -84, -128, -120, 55, 120, 44, 65, -122, 66, -26, 77, 8, 126, 120, -32, 109, -38, 65, 22, 59, -57, 7, 54, 59, 126, 65, 31, -51, -116, 12, -44, 69, -83, -68, 15, -29, -17, -79, 88, 14, -15, -94, 48, 54, 16, 125, -18, -125, 108, -76, -49, -20, -99, 121, 68, -102, 65, 87, -31, -84, -115, 108, -81, -61, -89, 8, -78, 6, 28, 11, 54, -32, 9, -24, 13, -90, 6, 123, 75, 27, -120, 33, 5, -4, 106, -51, -105, -16, 83, 90, -98, -114, 61, 102, 124, -51, 56, 11, -75, -79, -30, 6, 92, -85, -38, 118, 124, -60, -68, -12, -103, -118, -33, -39, -81, 68, -49, -122, 15, 1, -72, 68, 91, 27, 28, -28, 46, -7, -36, 69, -60, -75, 11, 124, 41, -82, -122, 125, -82, 75, 71, -125, -10, 50, -101, 57, 52, -115, 78, 44, 62, -24, -98, -83, -61, 55, 67, 93, -62, -42, 94, 1, -122, -92, -95, -43, -64, 36, -20, -97, -48, -51, -119, 63, -31, 29, 113, -119, 87, 52, 102, -59, -67, -121, -47, -46, 40, 97, -33, -121, -107, -49, -81, -82, -54, -54, 4, -86, -58, -109, -42, 105, -91, -97, 12, -110, 119, -40, 74, -19, -99, 52, 121, -81, -63, -107, -19, -11, -39, -97, -78, 47, -41};
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
    msg.setTimeStamp(0.276102280168);
    msg.setSource(35885U);
    msg.setSourceEntity(183U);
    msg.setDestination(27091U);
    msg.setDestinationEntity(136U);
    msg.content_type.assign("DVNADVRJXHVRGJZFBQJCZHPECXGYLWZLNDYPGZVSUMAOBEITDMTXVLILSSXHNXKROBHBUWIEAIYCQPPVKQFDKHZ");
    const char tmp_msg_0[] = {15, 30, 5, 52, -49, 104, -81, 44, 19, -38, -53, 110, 62, 58, -125, -125, -116, 31, -113, -100, -75, 50, 120, 1, -104, 76, 11, 34, -122, 123, -83, 16, -98, -104, -97, -110, 82, 37, -68, -60, 103, -89, 110, -118, -34, -106, -106, -116, 122, 97, -101, -13, -35, 39, -6, 7, 90, 126, -68, 20, -51, -90, 124, -58, -108, 97, -28, -45, -109, 43, 112, 94, -9, 19, -55, 122, 92, -73, 25, -87, -13, -48, 107, -55, 104, -102, 58, 121, -112, 90, 69, -3, 88, 69, 32, 80, -73, -52, -125, -59, 4, 34, -77, -4, -67, -114, -44, -52, 49, 104, -29, -87, 42, -123, 103, -34, -105, -4, -93, -22, -105, 73, 64, 70, -107, -55, 32, 73, 65, -76, 43, -94, 61, -47, 53, 115, 54, 91, -4, 72, -84, 5, 49, 68, -36, 3, 116, 37, -104, -98, 107, 62, -7, -91, 2, -27, 18, 4, 95, 117, 52, -86, -66, 56, 33, -15, -112, -22, -35, 99, -13, 60, -16, -36, 111, -79, -6, 80, 109, 71, -79, 39, 117, 97, -116, 85, 111, 68, 2, -83, -14, 52, 115, 115, 92, 15, 93, -61, -20, 87, 43, -13, 64, 99, -72, -114, -75, -51, 59, 60, -69, -65, 71, 105, 44, -128, -109, 120, 57, -102, 117, -67, 96, -120, -67, 31, 28, -73, -41, -56, 11, -125, -58, 93};
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
    msg.setTimeStamp(0.648374147486);
    msg.setSource(29194U);
    msg.setSourceEntity(190U);
    msg.setDestination(2094U);
    msg.setDestinationEntity(25U);
    msg.content_type.assign("NOJTZQKHYPRDISGFLIWWUHQKBERLZVFQFZVGIOQTTKLKRGXYFCZBRBJTJSAUUGBKNMVENPCGBWXUSRDEXMPPDHYQCFYINNO");
    const char tmp_msg_0[] = {-1, -119, -42, -118, 111, -24, -80, -8, 109, 118, -79, -44, -51, 88, 114, 82, 70, 104, 1, 28, -35, 54, 43, 110, 122, -73, 37, 43, -8, -101, 109, 35, 49, 98, 49, 39, -118, -28, 72, -78, -65, 102, -24, -53, 96, 60, 61, 81, 103, 48, 86, 46, 26, 70, 43, -83, -12, 3, -108, -128, 35, -63, 95, 109, -82, -81, -16, 89, -123, 17, 43, -25, -65, -99, 108, -95, -36, 68, -31, 124, -113, 40, 101, -19, -118, 89, -57, 73, 47, 45, 9, 33, 46, 16, 33, 98, -113, 57, -75, -67, 22, -118, -31, 99, 95, -20, 52, -125, 96, 47, 116, -61, 2, 64, -101, -103, 14, -77, 35, -12, -51, 6, -41, -103, -90, -119, 57, 29, -22, 51, -81, 21, -35, -18, 42, -2, -92, -108, 76, 59, -78, -74, -58, -115, 37, 17, 102, -69, 93, 94, -103, 44, 124, 73, 51, 105, -94, -123, 7, 96, -128, -68, 15, 86, -83, -109, 27, 76, 36, 8, -17, 92, -14, -4, 13, 124, 79, -72, -83, -28, -30, 0, -36, 23, -42, 17, 105};
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
    msg.setTimeStamp(0.015575884628);
    msg.setSource(64389U);
    msg.setSourceEntity(170U);
    msg.setDestination(28481U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.378949928758);
    msg.setSource(7570U);
    msg.setSourceEntity(202U);
    msg.setDestination(22909U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.0943568896084);
    msg.setSource(51770U);
    msg.setSourceEntity(215U);
    msg.setDestination(21972U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.598898234109);
    msg.setSource(21406U);
    msg.setSourceEntity(146U);
    msg.setDestination(49503U);
    msg.setDestinationEntity(170U);
    msg.target = 61712U;
    msg.bearing = 0.200623191791;
    msg.elevation = 0.346086130621;

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
    msg.setTimeStamp(0.783665371035);
    msg.setSource(47409U);
    msg.setSourceEntity(30U);
    msg.setDestination(53023U);
    msg.setDestinationEntity(222U);
    msg.target = 24722U;
    msg.bearing = 0.395824824913;
    msg.elevation = 0.636224954801;

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
    msg.setTimeStamp(0.209213224293);
    msg.setSource(54795U);
    msg.setSourceEntity(6U);
    msg.setDestination(51609U);
    msg.setDestinationEntity(152U);
    msg.target = 60366U;
    msg.bearing = 0.884025955837;
    msg.elevation = 0.873556483649;

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
    msg.setTimeStamp(0.853531013044);
    msg.setSource(38095U);
    msg.setSourceEntity(142U);
    msg.setDestination(6443U);
    msg.setDestinationEntity(104U);
    msg.target = 53877U;
    msg.x = 0.137667759319;
    msg.y = 0.657401910892;
    msg.z = 0.929988762958;

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
    msg.setTimeStamp(0.692522831531);
    msg.setSource(39854U);
    msg.setSourceEntity(77U);
    msg.setDestination(20894U);
    msg.setDestinationEntity(176U);
    msg.target = 65314U;
    msg.x = 0.286097862533;
    msg.y = 0.0800926921956;
    msg.z = 0.441365924444;

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
    msg.setTimeStamp(0.292720849109);
    msg.setSource(60410U);
    msg.setSourceEntity(4U);
    msg.setDestination(10129U);
    msg.setDestinationEntity(146U);
    msg.target = 50858U;
    msg.x = 0.0574037688301;
    msg.y = 0.702927663277;
    msg.z = 0.275152252235;

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
    msg.setTimeStamp(0.242294980207);
    msg.setSource(49003U);
    msg.setSourceEntity(39U);
    msg.setDestination(15968U);
    msg.setDestinationEntity(184U);
    msg.target = 21986U;
    msg.lat = 0.954541244214;
    msg.lon = 0.380726470117;
    msg.z_units = 85U;
    msg.z = 0.249687952643;

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
    msg.setTimeStamp(0.0772121199838);
    msg.setSource(28085U);
    msg.setSourceEntity(210U);
    msg.setDestination(50777U);
    msg.setDestinationEntity(172U);
    msg.target = 30092U;
    msg.lat = 0.647936432471;
    msg.lon = 0.94403949588;
    msg.z_units = 45U;
    msg.z = 0.706277887146;

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
    msg.setTimeStamp(0.293875032504);
    msg.setSource(51326U);
    msg.setSourceEntity(109U);
    msg.setDestination(48066U);
    msg.setDestinationEntity(74U);
    msg.target = 24157U;
    msg.lat = 0.0601604671242;
    msg.lon = 0.803579526595;
    msg.z_units = 6U;
    msg.z = 0.628022493451;

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

  return test.getReturnValue();
}
