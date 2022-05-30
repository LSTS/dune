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
// IMC XML MD5: 60a23518f193ba4da4de1d134d424d40                            *
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
    msg.setTimeStamp(0.5937844747660197);
    msg.setSource(30640U);
    msg.setSourceEntity(24U);
    msg.setDestination(37387U);
    msg.setDestinationEntity(21U);
    msg.state = 164U;
    msg.flags = 17U;
    msg.description.assign("MEXONFKTCQQBCJHTUMHYCOVBXWMBUJFMDNIIKRTGWIUJAAEFMWFUCMEZULZIXZBJ");

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
    msg.setTimeStamp(0.2990088259616138);
    msg.setSource(34507U);
    msg.setSourceEntity(188U);
    msg.setDestination(4846U);
    msg.setDestinationEntity(19U);
    msg.state = 152U;
    msg.flags = 81U;
    msg.description.assign("ZAGPEBVWGMTZIUWSXQHQRHJDJWMOXDTPYWPFYDVTEBSMSLXVBQVKUNJLCULKMQEOFCNKMDHSTANNZPQSGVHPINUHYMFRXXNHCICPEGBFZRVLZOKJFEQPU");

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
    msg.setTimeStamp(0.8891974884289235);
    msg.setSource(29416U);
    msg.setSourceEntity(112U);
    msg.setDestination(23360U);
    msg.setDestinationEntity(115U);
    msg.state = 129U;
    msg.flags = 146U;
    msg.description.assign("WGVZNJZMMQCPDQLJTLSNCBIDJXOKXEWKGOSTVYETMCNGCFJAOTFPBXTULBBNYFVGSNEGYYHDDZJHBSKZZIEXKZHDQUVYLXZVUNMPCCDZLRPGKLKFANBKVNWMZHQIINRIVCFOWLRFZFIAYUOMEJCWWUCVKXTSRBSOGSP");

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
    msg.setTimeStamp(0.5092875417369126);
    msg.setSource(52429U);
    msg.setSourceEntity(87U);
    msg.setDestination(43351U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.2376018237198123);
    msg.setSource(11429U);
    msg.setSourceEntity(249U);
    msg.setDestination(33117U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.5299072961332412);
    msg.setSource(1021U);
    msg.setSourceEntity(87U);
    msg.setDestination(24390U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.24864146225114425);
    msg.setSource(64777U);
    msg.setSourceEntity(70U);
    msg.setDestination(56341U);
    msg.setDestinationEntity(161U);
    msg.id = 142U;
    msg.label.assign("KZHQORYJDTXEJMCFGTQQFZDIPJSGTGPSQCRFXLOKJPNVQOGYWHZCXULUDHDGWEVGIMTOWD");
    msg.component.assign("ZMARRXFYNWGIUKRKMHOVEQTLXAVCIEHEGKYXVGBOJFXETOTSRUGQLCHZNMUNJRVQJZHLQFYCDCTSKMUOMHHM");
    msg.act_time = 47359U;
    msg.deact_time = 28396U;

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
    msg.setTimeStamp(0.27669609302506404);
    msg.setSource(10871U);
    msg.setSourceEntity(59U);
    msg.setDestination(9403U);
    msg.setDestinationEntity(8U);
    msg.id = 73U;
    msg.label.assign("YLWJHLJPCZKISDROAINWRRXK");
    msg.component.assign("WGEBHWBOJFOEBPZYYLFBRLWFBXUMEOELPTPDGNGHMUHPLNWWBDXIQRGKQTDSTWXZYFAY");
    msg.act_time = 48579U;
    msg.deact_time = 1097U;

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
    msg.setTimeStamp(0.5250511871524508);
    msg.setSource(35886U);
    msg.setSourceEntity(219U);
    msg.setDestination(47163U);
    msg.setDestinationEntity(125U);
    msg.id = 26U;
    msg.label.assign("HJSWFYGCAFSUPLKGLQHRVRMXIZNYQOCCQANCGJITBNULBOEPPYZSVSFRVUIPKHTQZLW");
    msg.component.assign("CBQNZJEUPHTSMZWHPFVVUKCWQEFUFFHSHGAVNVTOAKOBVVWKLPPHIZZBLILORRBRUBJYSAGDFCGXCPNBCVPJIUTETD");
    msg.act_time = 60442U;
    msg.deact_time = 9914U;

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
    msg.setTimeStamp(0.40023885216438826);
    msg.setSource(63978U);
    msg.setSourceEntity(98U);
    msg.setDestination(14173U);
    msg.setDestinationEntity(104U);
    msg.id = 57U;

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
    msg.setTimeStamp(0.2863032670651583);
    msg.setSource(65223U);
    msg.setSourceEntity(189U);
    msg.setDestination(27843U);
    msg.setDestinationEntity(41U);
    msg.id = 146U;

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
    msg.setTimeStamp(0.5826276205839058);
    msg.setSource(28165U);
    msg.setSourceEntity(68U);
    msg.setDestination(27804U);
    msg.setDestinationEntity(123U);
    msg.id = 194U;

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
    msg.setTimeStamp(0.31135470763999507);
    msg.setSource(36173U);
    msg.setSourceEntity(1U);
    msg.setDestination(52905U);
    msg.setDestinationEntity(28U);
    msg.op = 75U;
    msg.list.assign("AOKEYMGPZWELZELTZUAFXOTHYGGUEIJTZRPRIQIKRLZGMHMZYVWOJUYOIFMLEDQNKDXTFAOXJIPDISDSGYVJIKHAFWEVRTHHCLECDENCERKQPQUZQRUXHOMBNMAWSSWDUXEKIYUAYGCJHGXCZTWLKSFXTJBCU");

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
    msg.setTimeStamp(0.9871001198382582);
    msg.setSource(63826U);
    msg.setSourceEntity(2U);
    msg.setDestination(29581U);
    msg.setDestinationEntity(191U);
    msg.op = 77U;
    msg.list.assign("YAMAPZZWVJYACUAWNFHCLOYNAL");

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
    msg.setTimeStamp(0.06650582557217455);
    msg.setSource(60170U);
    msg.setSourceEntity(231U);
    msg.setDestination(55471U);
    msg.setDestinationEntity(130U);
    msg.op = 94U;
    msg.list.assign("DJCAHEMKYCXTCKMWHHPBWFTVFCUGLMHDYABOWJBRXBRIGKBWXNEQEJAOVGXTUFFCPHEMURXIFQYLNEPYJCDJYNLZBNSVPFEHIDHCGZUGVASWUIRFUPBMUPIMXLSSGXIAGIMMCSZNJENIWUYIXLZTZHKANSDPWLDZCRSRDOOXQOOGADOZUTVKMELQWTDAVNYROJKBKARQUW");

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
    msg.setTimeStamp(0.8384780743410848);
    msg.setSource(54956U);
    msg.setSourceEntity(147U);
    msg.setDestination(9463U);
    msg.setDestinationEntity(39U);
    msg.value = 159U;

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
    msg.setTimeStamp(0.15174443628147827);
    msg.setSource(16937U);
    msg.setSourceEntity(149U);
    msg.setDestination(34109U);
    msg.setDestinationEntity(150U);
    msg.value = 98U;

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
    msg.setTimeStamp(0.602372785959466);
    msg.setSource(21184U);
    msg.setSourceEntity(30U);
    msg.setDestination(21147U);
    msg.setDestinationEntity(162U);
    msg.value = 10U;

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
    msg.setTimeStamp(0.8590759187952289);
    msg.setSource(4874U);
    msg.setSourceEntity(240U);
    msg.setDestination(56405U);
    msg.setDestinationEntity(250U);
    msg.consumer.assign("UNYFMBLKENDLEOGOODKPBJATLALDAPBWJVYDTGRYVVDWBMCEVXWDRPPZTVUJYCAQIJXZRPCIQXDQMWSHMZZSQBPUKXQANGKIULAETFACVIPEBEJSCUMQCQOFXZVOEIRPMXGJFWALQGTMSUBJURDKUQFHRCZCIIXIEPHBNMSIGCIDESFSWWKGZMTSCVFNHXFVHYKYWYFOLNGKMRZLBHXOYNADUKOJAKNUQRBYXOGE");
    msg.message_id = 3964U;

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
    msg.setTimeStamp(0.8714544616252731);
    msg.setSource(939U);
    msg.setSourceEntity(100U);
    msg.setDestination(36477U);
    msg.setDestinationEntity(167U);
    msg.consumer.assign("DVQMJUGTQBHBPUAUVJPEYBINKBTEJFGMRKBLZYLDSIGGCBWQHLXINZ");
    msg.message_id = 60501U;

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
    msg.setTimeStamp(0.7616622631588932);
    msg.setSource(13964U);
    msg.setSourceEntity(121U);
    msg.setDestination(34468U);
    msg.setDestinationEntity(204U);
    msg.consumer.assign("CKRZHUOVNVLPSILJLEHZFNDVOTIJPEXJFZAXCWQRFXCXDGRDGQGDIAUKFGVMJZBXXTXTZAVIUUECHMDCKNAPJYZAKKUBYHNIPUQCYGZRDVKTNBPQOBWNXTEEYSGFURRJSHFLQBIKRDVCHMOTWJKMUVMWQYYEUTULDOWWSBCOONIJMKYNGMKIDPLLGDACRWEITRPYAWFBFJIBQPLFZHATSYCMHESFHOBV");
    msg.message_id = 25733U;

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
    msg.setTimeStamp(0.20861743379385322);
    msg.setSource(16316U);
    msg.setSourceEntity(238U);
    msg.setDestination(21316U);
    msg.setDestinationEntity(30U);
    msg.type = 138U;

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
    msg.setTimeStamp(0.8139686866975636);
    msg.setSource(11412U);
    msg.setSourceEntity(9U);
    msg.setDestination(13422U);
    msg.setDestinationEntity(189U);
    msg.type = 238U;

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
    msg.setTimeStamp(0.31229014861987536);
    msg.setSource(34223U);
    msg.setSourceEntity(229U);
    msg.setDestination(5910U);
    msg.setDestinationEntity(193U);
    msg.type = 229U;

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
    msg.setTimeStamp(0.7271030294634361);
    msg.setSource(38373U);
    msg.setSourceEntity(108U);
    msg.setDestination(49246U);
    msg.setDestinationEntity(132U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.4991380547628502);
    msg.setSource(56603U);
    msg.setSourceEntity(61U);
    msg.setDestination(42636U);
    msg.setDestinationEntity(192U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.47489250808976335);
    msg.setSource(61490U);
    msg.setSourceEntity(173U);
    msg.setDestination(5896U);
    msg.setDestinationEntity(28U);
    msg.op = 120U;

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
    msg.setTimeStamp(0.031801168707894845);
    msg.setSource(24740U);
    msg.setSourceEntity(139U);
    msg.setDestination(51471U);
    msg.setDestinationEntity(167U);
    msg.total_steps = 45U;
    msg.step_number = 15U;
    msg.step.assign("HYHLJJLGMWALJTYBBGWAYORYXMIJVRXDRDJNZJBMCPBRMXZSDEUGVHTEDXOZEKCUCQDUVBTNDESECXWSZDWKFVQTZTNUHDSJINVOBLIGLPVHYXKFKELQWKRPYPPQEMHKIVNOPUCFKHDMIRAFFNOPKGWAYWFJZCP");
    msg.flags = 154U;

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
    msg.setTimeStamp(0.8470864985765575);
    msg.setSource(4922U);
    msg.setSourceEntity(199U);
    msg.setDestination(59056U);
    msg.setDestinationEntity(140U);
    msg.total_steps = 14U;
    msg.step_number = 236U;
    msg.step.assign("ITKNSQTUQKKMSODSJIAPGWABDOPNBJJKUPLYKGMAVTVHETEKVNSNCPXWYEWDPPPQCZORAKDM");
    msg.flags = 24U;

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
    msg.setTimeStamp(0.2897673885932095);
    msg.setSource(42253U);
    msg.setSourceEntity(114U);
    msg.setDestination(23738U);
    msg.setDestinationEntity(208U);
    msg.total_steps = 171U;
    msg.step_number = 121U;
    msg.step.assign("WHRXBRASEOLPZRDPGCTEHMCAIISHWCBWJAJQBVBYLGZVUXWWYIKJTGLLAQMVCAECPTFIUAAQNSOUVGHNZHPNPCGJLAYUOFRMOKIXTQKBOESYWCVPDYQIQTLOCUMIDVYVGNTUUZJPYQAYSMSREHCDZBKBPMMJJJUHTIDGKFQTSEWOWFOVVF");
    msg.flags = 235U;

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
    msg.setTimeStamp(0.04577959733233028);
    msg.setSource(38063U);
    msg.setSourceEntity(198U);
    msg.setDestination(3590U);
    msg.setDestinationEntity(246U);
    msg.state = 134U;
    msg.error.assign("CPDHWYHIOGHJUVRENLRCUTGBDINWSOJJDTYQYMGKLDZGFWZAQIYWXQVFOIAJCMSNVWFSPTKUESBXBKOMWSPDHHMOJBFROEYGAGYDDIQKDMBCXNFLBLWSVRBWSFZXBCNMPETHAJSCBTVEOVZRZGFDEUKKMEFQLHI");

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
    msg.setTimeStamp(0.7541557663036474);
    msg.setSource(49825U);
    msg.setSourceEntity(148U);
    msg.setDestination(58467U);
    msg.setDestinationEntity(23U);
    msg.state = 35U;
    msg.error.assign("MPEHHEITLKWNLXGAHRKXSNWZCDQNEVLXOINBZOGACKXRMJZBDFVWQORNLGUKAHLXPYFDPEMZGZMUIGQMYFBTAHIDSODWYOZFWTZEQYOGEOQCAEPCCICQDKUOUXEJLTFRYPPZCUSTRSXUJYVPLMBZDKIVSBAGWJFCWABOCXOVYRRTAFJHTIEYDWSNHI");

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
    msg.setTimeStamp(0.9769540136943962);
    msg.setSource(38718U);
    msg.setSourceEntity(60U);
    msg.setDestination(19862U);
    msg.setDestinationEntity(155U);
    msg.state = 15U;
    msg.error.assign("BKENJAUBFDHUUDAWIEFMPNQKBCYBIQZAOSXSDEPLXWZHPIHTRGVWWFJWWYSVZLPZPKMTGNAOWFCIDUXMYBRLIQWUTTOGFEEXGODKQIXJPEXVACEGCLDRSLYJDAHGVDGLAVYNNBGQMDTQUKCYTCLWBSGERHHKHGSZRUQFCZFOUREQXIPBTLKJVRASOMBVZXMQFCYUKMVS");

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
    msg.setTimeStamp(0.46111033251329314);
    msg.setSource(32608U);
    msg.setSourceEntity(97U);
    msg.setDestination(41156U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.012877425090437322);
    msg.setSource(52734U);
    msg.setSourceEntity(76U);
    msg.setDestination(38041U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.3364229671103658);
    msg.setSource(55438U);
    msg.setSourceEntity(132U);
    msg.setDestination(56088U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.8953277708866382);
    msg.setSource(47190U);
    msg.setSourceEntity(29U);
    msg.setDestination(38329U);
    msg.setDestinationEntity(210U);
    msg.op = 190U;
    msg.speed_min = 0.9077004936355233;
    msg.speed_max = 0.8248238928053306;
    msg.long_accel = 0.795254118022878;
    msg.alt_max_msl = 0.8049458006945462;
    msg.dive_fraction_max = 0.45301970331835806;
    msg.climb_fraction_max = 0.2772664433819638;
    msg.bank_max = 0.2516975042516286;
    msg.p_max = 0.9527829740492416;
    msg.pitch_min = 0.3142737381115137;
    msg.pitch_max = 0.9214706279845389;
    msg.q_max = 0.7532380043053417;
    msg.g_min = 0.7264877958450284;
    msg.g_max = 0.6361592538429962;
    msg.g_lat_max = 0.7451806927328946;
    msg.rpm_min = 0.6038282812755884;
    msg.rpm_max = 0.5509593731554057;
    msg.rpm_rate_max = 0.22719295937269468;

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
    msg.setTimeStamp(0.9783742504073636);
    msg.setSource(22333U);
    msg.setSourceEntity(243U);
    msg.setDestination(15859U);
    msg.setDestinationEntity(184U);
    msg.op = 79U;
    msg.speed_min = 0.04944162628523174;
    msg.speed_max = 0.1228695111253093;
    msg.long_accel = 0.5756633728638516;
    msg.alt_max_msl = 0.09924260349868275;
    msg.dive_fraction_max = 0.4655889173902058;
    msg.climb_fraction_max = 0.4745851732530808;
    msg.bank_max = 0.2063051223186828;
    msg.p_max = 0.673355697814503;
    msg.pitch_min = 0.12989377561737747;
    msg.pitch_max = 0.00227353315003076;
    msg.q_max = 0.39307539404032477;
    msg.g_min = 0.4151289400088657;
    msg.g_max = 0.28224675915073494;
    msg.g_lat_max = 0.5343589226152797;
    msg.rpm_min = 0.47230437071108256;
    msg.rpm_max = 0.5194805699317464;
    msg.rpm_rate_max = 0.6362076547817362;

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
    msg.setTimeStamp(0.8025398099153476);
    msg.setSource(55898U);
    msg.setSourceEntity(46U);
    msg.setDestination(23812U);
    msg.setDestinationEntity(211U);
    msg.op = 208U;
    msg.speed_min = 0.43638827364358745;
    msg.speed_max = 0.11533974480948517;
    msg.long_accel = 0.08549664255710543;
    msg.alt_max_msl = 0.9541921208619645;
    msg.dive_fraction_max = 0.9523129805521126;
    msg.climb_fraction_max = 0.6593724122840813;
    msg.bank_max = 0.7006115443704318;
    msg.p_max = 0.7870964148082165;
    msg.pitch_min = 0.13294804536435134;
    msg.pitch_max = 0.8834336712057917;
    msg.q_max = 0.9215502197815866;
    msg.g_min = 0.055775738169653866;
    msg.g_max = 0.892970817128368;
    msg.g_lat_max = 0.3295634533776707;
    msg.rpm_min = 0.5454000289438512;
    msg.rpm_max = 0.8230737111232362;
    msg.rpm_rate_max = 0.7402470648044449;

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
    msg.setTimeStamp(0.6386703141899482);
    msg.setSource(4213U);
    msg.setSourceEntity(101U);
    msg.setDestination(53935U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.0816417727826586);
    msg.setSource(9617U);
    msg.setSourceEntity(224U);
    msg.setDestination(15064U);
    msg.setDestinationEntity(14U);
    IMC::DevDataBinary tmp_msg_0;
    const char tmp_tmp_msg_0_0[] = {95, 54, -85, -123, -126, 87, -106, -40, -78, 77, 9, 70, 27, 117, -12, -39, -97, 68, 63, 70, 110, -112, 54, -23, -121, -50, 14, -77, -102, -110, -97, 48, 31, 114, 109, -26, 12, 93, 64};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.3517167524433781);
    msg.setSource(19875U);
    msg.setSourceEntity(91U);
    msg.setDestination(34199U);
    msg.setDestinationEntity(252U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.32889465043679456;
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
    msg.setTimeStamp(0.5984762572960215);
    msg.setSource(13129U);
    msg.setSourceEntity(20U);
    msg.setDestination(47574U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.9275439781615571;
    msg.lon = 0.6989192541225322;
    msg.height = 0.8728318855904554;
    msg.x = 0.6620412840617277;
    msg.y = 0.6182051183312152;
    msg.z = 0.7154708576444387;
    msg.phi = 0.0934946318879819;
    msg.theta = 0.5819942995413651;
    msg.psi = 0.6420629304525004;
    msg.u = 0.7412804416635661;
    msg.v = 0.4024031839364943;
    msg.w = 0.2659188400590152;
    msg.p = 0.2960893060968601;
    msg.q = 0.0432499564493235;
    msg.r = 0.9826906303533887;
    msg.svx = 0.22193274311387268;
    msg.svy = 0.6253114552110003;
    msg.svz = 0.5457103646020356;

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
    msg.setTimeStamp(0.5453975333760328);
    msg.setSource(19617U);
    msg.setSourceEntity(25U);
    msg.setDestination(4750U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.07806021226363036;
    msg.lon = 0.9812956877975954;
    msg.height = 0.20353092165906916;
    msg.x = 0.4188488649996184;
    msg.y = 0.12614634365187294;
    msg.z = 0.11446159007567513;
    msg.phi = 0.9382809016350703;
    msg.theta = 0.8251028650323531;
    msg.psi = 0.48531421955144793;
    msg.u = 0.41399719532517243;
    msg.v = 0.6581028850331125;
    msg.w = 0.287255272251717;
    msg.p = 0.6297900147875567;
    msg.q = 0.3311089315409417;
    msg.r = 0.5550257281485121;
    msg.svx = 0.7546903850597252;
    msg.svy = 0.1704141034397676;
    msg.svz = 0.06407849730490223;

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
    msg.setTimeStamp(0.6649496117622706);
    msg.setSource(59486U);
    msg.setSourceEntity(61U);
    msg.setDestination(50960U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.9887608113539746;
    msg.lon = 0.9958915511672081;
    msg.height = 0.5197241135648711;
    msg.x = 0.17152365125628932;
    msg.y = 0.9062465920042234;
    msg.z = 0.03724007409380414;
    msg.phi = 0.3565590636010144;
    msg.theta = 0.599832961656522;
    msg.psi = 0.4344408730372221;
    msg.u = 0.9563172514262397;
    msg.v = 0.7365708743452394;
    msg.w = 0.5627393725435814;
    msg.p = 0.10607520614714872;
    msg.q = 0.33369412061070325;
    msg.r = 0.045237841838491;
    msg.svx = 0.47347991629462594;
    msg.svy = 0.18023086867148674;
    msg.svz = 0.5811694186198817;

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
    msg.setTimeStamp(0.09488942057703798);
    msg.setSource(29272U);
    msg.setSourceEntity(138U);
    msg.setDestination(5707U);
    msg.setDestinationEntity(124U);
    msg.op = 174U;
    msg.entities.assign("NEPHMXDQRVAWMIWSMXBUEZENOWBCESHPALJLSXFYJTEOYPLKIKWDUTIBDXPD");

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
    msg.setTimeStamp(0.8154643430197359);
    msg.setSource(44623U);
    msg.setSourceEntity(189U);
    msg.setDestination(35997U);
    msg.setDestinationEntity(37U);
    msg.op = 29U;
    msg.entities.assign("ZXSIVBTTQHOHUAAEXCGFJ");

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
    msg.setTimeStamp(0.31853482338130445);
    msg.setSource(46449U);
    msg.setSourceEntity(57U);
    msg.setDestination(59290U);
    msg.setDestinationEntity(133U);
    msg.op = 77U;
    msg.entities.assign("MPCOAFHWMQAKDUIAHR");

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
    msg.setTimeStamp(0.14941758112606496);
    msg.setSource(41717U);
    msg.setSourceEntity(117U);
    msg.setDestination(52808U);
    msg.setDestinationEntity(141U);
    msg.type = 200U;
    msg.speed = 46349U;
    const char tmp_msg_0[] = {-4, -99, -113, -34, -61, -33, 115, 28, -104, -3, 79, -128, 95, 64, 38, 19, -102, -37, 19, 51, 21, -29, 41, -36, 124, 67, 100, -112, -50, 7, 121, -99, 53, -57, -14, 15, 11, -123, -38, 15, 74, 13, -116, -80, -54, 25, 71, -31, 82, -49, -36, -88, -70, -87, -44, 108, -30, 68, -28, 86, 125};
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
    msg.setTimeStamp(0.2143717433478669);
    msg.setSource(58341U);
    msg.setSourceEntity(118U);
    msg.setDestination(55584U);
    msg.setDestinationEntity(45U);
    msg.type = 138U;
    msg.speed = 41489U;
    const char tmp_msg_0[] = {-99, -63, 93, -66, 55, 43, -7, 4, 101, -105, 51, 39, -32, -88, 33, -122, 44, 4, 84, -13, 59, -20, 60, -44, -100, -4, -35, -4, -103, -103, -79, -112, 30, 50, -73, 79, 103, 107, -124, 33, 43, -76, 84, 47, -88, -45, -111, -15, 46, -116, -14, 22, -99, -31, -84, -33, -66, 85, 84, 0, 45, 44, 95, -82, -125, 21, -31, -71, -49, -109, -55, -26, -37, 33, -90, -28, 92, -64, 104};
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
    msg.setTimeStamp(0.5478350031260841);
    msg.setSource(32549U);
    msg.setSourceEntity(231U);
    msg.setDestination(37867U);
    msg.setDestinationEntity(249U);
    msg.type = 178U;
    msg.speed = 16191U;
    const char tmp_msg_0[] = {73, 20, 69, 87, 78, -93, -30, 21, -100, 82, 72, 97, 104, 119, -77, -51, -82, 118};
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
    msg.setTimeStamp(0.5147615295582612);
    msg.setSource(63912U);
    msg.setSourceEntity(230U);
    msg.setDestination(21133U);
    msg.setDestinationEntity(127U);
    msg.op = 58U;
    msg.tas2acc_pgain = 0.656843479974556;
    msg.bank2p_pgain = 0.44902149051950746;

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
    msg.setTimeStamp(0.6282844901744827);
    msg.setSource(13344U);
    msg.setSourceEntity(0U);
    msg.setDestination(16613U);
    msg.setDestinationEntity(102U);
    msg.op = 240U;
    msg.tas2acc_pgain = 0.009765421099932281;
    msg.bank2p_pgain = 0.11220304725328611;

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
    msg.setTimeStamp(0.8297848391122982);
    msg.setSource(16174U);
    msg.setSourceEntity(69U);
    msg.setDestination(47474U);
    msg.setDestinationEntity(12U);
    msg.op = 40U;
    msg.tas2acc_pgain = 0.7175207838889112;
    msg.bank2p_pgain = 0.933457051335578;

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
    msg.setTimeStamp(0.7191349453803592);
    msg.setSource(35457U);
    msg.setSourceEntity(234U);
    msg.setDestination(1112U);
    msg.setDestinationEntity(9U);
    msg.available = 3562239424U;
    msg.value = 254U;

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
    msg.setTimeStamp(0.4009826115361135);
    msg.setSource(63258U);
    msg.setSourceEntity(169U);
    msg.setDestination(37235U);
    msg.setDestinationEntity(217U);
    msg.available = 3811402694U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.7677745193788662);
    msg.setSource(3643U);
    msg.setSourceEntity(107U);
    msg.setDestination(2049U);
    msg.setDestinationEntity(204U);
    msg.available = 2076866883U;
    msg.value = 156U;

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
    msg.setTimeStamp(0.8132284751765435);
    msg.setSource(18150U);
    msg.setSourceEntity(40U);
    msg.setDestination(45500U);
    msg.setDestinationEntity(229U);
    msg.op = 52U;
    msg.snapshot.assign("NOESIFWPRJNNRNXZKULJDDMYCEQSMUVCJFPWSDESGKWTCVBZIHLOTPVQSVHASOOAZW");
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 32697U;
    tmp_msg_0.lat = 0.691990656462918;
    tmp_msg_0.lon = 0.46147762475470866;
    tmp_msg_0.z_units = 187U;
    tmp_msg_0.z = 0.7060408122557199;
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
    msg.setTimeStamp(0.1366544796555047);
    msg.setSource(57186U);
    msg.setSourceEntity(20U);
    msg.setDestination(24750U);
    msg.setDestinationEntity(247U);
    msg.op = 139U;
    msg.snapshot.assign("EECYMJHOWHOJPLATBWITFXVEAJETBLJBXYXYNWUFZBVHMARINGOYWVRWLJZXZXPABUTTILOQQEIHKITW");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6422530036778321;
    tmp_msg_0.lon = 0.08605101132821036;
    tmp_msg_0.height = 0.7992335085905421;
    tmp_msg_0.x = 0.5008717873564639;
    tmp_msg_0.y = 0.09141210758966178;
    tmp_msg_0.z = 0.24550999959653763;
    tmp_msg_0.phi = 0.8445560900319317;
    tmp_msg_0.theta = 0.9196455067768309;
    tmp_msg_0.psi = 0.5788214739483541;
    tmp_msg_0.u = 0.9447819361112982;
    tmp_msg_0.v = 0.6013092167235604;
    tmp_msg_0.w = 0.26749085585088717;
    tmp_msg_0.vx = 0.6837625668224814;
    tmp_msg_0.vy = 0.08415194708413831;
    tmp_msg_0.vz = 0.5480646191107833;
    tmp_msg_0.p = 0.2997435617358779;
    tmp_msg_0.q = 0.18716962841880924;
    tmp_msg_0.r = 0.006170492033884645;
    tmp_msg_0.depth = 0.27098617680537285;
    tmp_msg_0.alt = 0.16242377797282104;
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
    msg.setTimeStamp(0.15569108229095252);
    msg.setSource(29997U);
    msg.setSourceEntity(74U);
    msg.setDestination(43U);
    msg.setDestinationEntity(66U);
    msg.op = 21U;
    msg.snapshot.assign("LATSUANCJOGRUHHWQNDIWIETBTXEUVIVRGBBIJYVLJSKZOPKTMMGRWFEZBRODYYNRAFINZOJVHNMSFJZCOPZBCSOPKLUXIPYBJXDEZSPIRELUNURXVXKHMIWESVXYMVFLTCKCZNFXTYMNZESWLDJOOGEGDGFVCEDQQHDOAGDLGALAQHBSQHQPWISZHHTUYDLN");
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.6264283379393841);
    msg.setSource(39435U);
    msg.setSourceEntity(178U);
    msg.setDestination(18748U);
    msg.setDestinationEntity(241U);
    msg.op = 55U;
    msg.name.assign("UIHGSCEDTKXMBIWKHQZKHTAWYLITATBZIYLDGAXDRRFJVRGWHYJXXWOJZGJTYKWONBCYZOPDCHBFBEQDIFGAUWIFPTTEVMZAQB");

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
    msg.setTimeStamp(0.02661227522263676);
    msg.setSource(29099U);
    msg.setSourceEntity(85U);
    msg.setDestination(42220U);
    msg.setDestinationEntity(32U);
    msg.op = 160U;
    msg.name.assign("RERSRZHSRNNXVYFSIMBKAZSWFWMDEKJBSUTAZEPLGCMAWUPRPPGJUBKFJXQBBYZRICGIGIXCIKONLVIEAXCDALUBCYKPPEABEPJDDGNJAWKTJWHYZPUUVDMMNEHWIQQYZCZGADZLQMOSGTKWSQMYLUMXJKDOWXMGOTHQJFQHOTGZCOMLVVESNTQTSUIAB");

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
    msg.setTimeStamp(0.5609542613425572);
    msg.setSource(54613U);
    msg.setSourceEntity(190U);
    msg.setDestination(51187U);
    msg.setDestinationEntity(93U);
    msg.op = 103U;
    msg.name.assign("FOGZXZLMLBZEXDAGKTDQUOJFIUKFTNOYMMAHNHJRMLTDLNGMHGLTGQJDNHQMDUFKDHVIXYSKS");

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
    msg.setTimeStamp(0.05269208344460541);
    msg.setSource(16292U);
    msg.setSourceEntity(30U);
    msg.setDestination(65454U);
    msg.setDestinationEntity(225U);
    msg.type = 76U;
    msg.htime = 0.20271183136516113;
    msg.context.assign("TPLMYFOAOUHDXLKJJQUTJQTVHPAWWXSFCXTFBGSEPWGSMHONZBNKFRIEJYYUOQHOIMOSSLOYJSKPGJVUKUAKXZFBVVWJHUXQUNCAZZGZEBMWTLWMEXCLQVIGMKNIUSVZJTHBGHVYMYQPDKOVKORRVNLIURAESOFBDLPTWDGIZUCDEBNAZHRWAKPCJCFAECDNGCRMRBHMYQQTBNDFELFRAWKVNRSGJFEXBZNIEIHXLIXYSZI");
    msg.text.assign("SHHAVNKSPABWMULIQXUCHQYYKUQUTKDYFGUQNYZUXBKBFVIZEZAPAJFTEXMTXTVCRHGJIXOJPNLMRGTYTZQWESSIEGPAFMCUZFIFJCWOMHYQFSHOFWCYJLCDORIACQUERPCPOVRREVDGBDQLNPRETXYMKZMTBDKWWVKIIGS");

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
    msg.setTimeStamp(0.9910504113894969);
    msg.setSource(24093U);
    msg.setSourceEntity(244U);
    msg.setDestination(29365U);
    msg.setDestinationEntity(200U);
    msg.type = 224U;
    msg.htime = 0.7861640754119222;
    msg.context.assign("FNDRWZMUNDVXCZKSMAYIRDUHVTERTPHXLGVJTBJZBWSMTOCZQUEOQYKKLYJQSVPCNTOLMIJHCFDKQWCOMYRNURLNUCKVDIQMXKBDRCJJUZBRGFBCFELNEGUHVGESUYYLEASMDXHMTHIDQBEPJAIIAZNFTIHRVOQNDPPSXFZFF");
    msg.text.assign("AEGZZYYYMUSM");

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
    msg.setTimeStamp(0.8183318613623685);
    msg.setSource(38710U);
    msg.setSourceEntity(59U);
    msg.setDestination(56355U);
    msg.setDestinationEntity(153U);
    msg.type = 60U;
    msg.htime = 0.9661777961475956;
    msg.context.assign("CYXOOZVJPZXVCENETCVPNNMSIHXUIRIEVUFUPLQWMOYLSDKUPEKKZGCNNVDXYCBSOPAJFABBSEEMMFROWMRIXRVMKUYZRAQM");
    msg.text.assign("BIGWPJEHQMQCSSNUKRMAZIVKJBFQEQVGFLBSHSZAUXXYAQIHTFXOCLTIFBUBJPYXYNIFRCGUEOSMCXXHEKQY");

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
    msg.setTimeStamp(0.542364671045646);
    msg.setSource(7308U);
    msg.setSourceEntity(89U);
    msg.setDestination(39470U);
    msg.setDestinationEntity(37U);
    msg.command = 155U;
    msg.htime = 0.8557611169418082;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 35U;
    tmp_msg_0.htime = 0.15172216832562546;
    tmp_msg_0.context.assign("XYGKZTDBNMLMLPOABEHMZGUUTPWWAGQLMMCWFRVUHS");
    tmp_msg_0.text.assign("YQCADLWMVJNCERIWJLYLSODQJXKTKUOXTOZIVOEHBMATMUXSREJWDIYQHJTAWMBZPKSVOFUDVCLMONQXPNXJPHPVAJBKECVLOXWZKZSDNUSQXKWAIEJSULJYGLBZIXYGBLQWDDGFMZEICZGIPYEYVTTCRUINRLWHQBWPNFH");
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
    msg.setTimeStamp(0.42633561871799597);
    msg.setSource(26667U);
    msg.setSourceEntity(161U);
    msg.setDestination(35381U);
    msg.setDestinationEntity(237U);
    msg.command = 19U;
    msg.htime = 0.050106557533208584;

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
    msg.setTimeStamp(0.03677322093271973);
    msg.setSource(65406U);
    msg.setSourceEntity(159U);
    msg.setDestination(26388U);
    msg.setDestinationEntity(206U);
    msg.command = 208U;
    msg.htime = 0.6426883091434163;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 95U;
    tmp_msg_0.htime = 0.21977291003306032;
    tmp_msg_0.context.assign("SOJQPISXKYEWQMVDFXZLBBFZJANODRIQVBETCQZCFEDKTUKRPREQLGYAGYUJDSWYOFETAQFOUZHWNJCCGKIMYWAVRPTXAFFPHZCDMKWROXDJMODLRVBMASSVSHSXQMKJJXEFWGRNOHVPMUWVLHBPZBPWKBNPYIZ");
    tmp_msg_0.text.assign("JNCRLNSKTEEVQJFOZLKTYQOMHYMXMEZCISDDHODGYZFDZBRYWYCTFNDBIUUFPRHDOFJUUZXKUXRCBFVJGTQASTISKJIBEQXIEIIJWBGWKSLWRGPKNVBUSLGTQMBWZMHYEXVEDDJMDWYPUCRGZQZHAHXKSMQRRAOGAIPNAOLKLCOAWMRNHCBAXWJQTASCPOPIVALKNCWVVZOHTPGENANTFUJVBYMLIGCSQESRXFEGJXLDWVUPOYHZFBHUMTQNP");
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
    msg.setTimeStamp(0.9824918354906171);
    msg.setSource(36252U);
    msg.setSourceEntity(157U);
    msg.setDestination(32227U);
    msg.setDestinationEntity(195U);
    msg.op = 52U;
    msg.file.assign("VQHJRBZMPLAPRTSXQXZNUBEZMEGPWVVYUJMDACRBXNOXJBMKQAEPGWZIYTYXFMJHENRYWB");

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
    msg.setTimeStamp(0.02524081709624948);
    msg.setSource(9210U);
    msg.setSourceEntity(120U);
    msg.setDestination(52827U);
    msg.setDestinationEntity(217U);
    msg.op = 26U;
    msg.file.assign("BXTOGJKZTDNLUYGHJXTWOOEAPPNADMCWWUSQCOMMXAEDBXYEGAFHBAUWZYECRQVFUOZAVUTOKCMOYJWZBCUKFXSKKRMXMISLMDHLRPUJODLKHVHGGQNFYOKAJJBRFWSDBX");

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
    msg.setTimeStamp(0.8322554700448733);
    msg.setSource(61495U);
    msg.setSourceEntity(41U);
    msg.setDestination(57446U);
    msg.setDestinationEntity(228U);
    msg.op = 164U;
    msg.file.assign("ESXOZLHXFYRIKQNECLJGDUCDCNJXJVMLDRJVHOGVWBTTQDUZBNGWGGSJZOEHNTSNLZFBWRPLYWLAPUKMSLQAJFICZATIXEPKYRKJYZLIGZWTBMMAFYNHWEPISQTRLHPPYKQDRMGUUAAURFNIYKXEVUBAABVQVODIMJEVOZEDHQVDYEBADWWUHCKUCTTFHPFJHHOSCAYXSWFIXF");

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
    msg.setTimeStamp(0.019871869712374424);
    msg.setSource(42397U);
    msg.setSourceEntity(210U);
    msg.setDestination(58050U);
    msg.setDestinationEntity(129U);
    msg.op = 135U;
    msg.clock = 0.9287953629199535;
    msg.tz = 126;

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
    msg.setTimeStamp(0.35801795776707224);
    msg.setSource(55642U);
    msg.setSourceEntity(57U);
    msg.setDestination(16016U);
    msg.setDestinationEntity(67U);
    msg.op = 198U;
    msg.clock = 0.8508551729097821;
    msg.tz = 110;

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
    msg.setTimeStamp(0.7176018919823559);
    msg.setSource(49651U);
    msg.setSourceEntity(111U);
    msg.setDestination(7778U);
    msg.setDestinationEntity(235U);
    msg.op = 69U;
    msg.clock = 0.5713409059136901;
    msg.tz = -93;

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
    msg.setTimeStamp(0.20030214456592077);
    msg.setSource(52980U);
    msg.setSourceEntity(76U);
    msg.setDestination(23000U);
    msg.setDestinationEntity(23U);
    msg.conductivity = 0.22488049366416563;
    msg.temperature = 0.3170169859088451;
    msg.depth = 0.7462648268775001;

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
    msg.setTimeStamp(0.13489697262401756);
    msg.setSource(43507U);
    msg.setSourceEntity(71U);
    msg.setDestination(38721U);
    msg.setDestinationEntity(140U);
    msg.conductivity = 0.553051801698413;
    msg.temperature = 0.14756174249530263;
    msg.depth = 0.3976362436337433;

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
    msg.setTimeStamp(0.15434588850014808);
    msg.setSource(53065U);
    msg.setSourceEntity(202U);
    msg.setDestination(14729U);
    msg.setDestinationEntity(137U);
    msg.conductivity = 0.5241325642971092;
    msg.temperature = 0.06311437299269473;
    msg.depth = 0.21026769284700808;

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
    msg.setTimeStamp(0.11403458996565385);
    msg.setSource(1845U);
    msg.setSourceEntity(161U);
    msg.setDestination(42459U);
    msg.setDestinationEntity(197U);
    msg.altitude = 0.14123597185771242;
    msg.roll = 52530U;
    msg.pitch = 45433U;
    msg.yaw = 49514U;
    msg.speed = 4451;

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
    msg.setTimeStamp(0.8458391682856119);
    msg.setSource(60236U);
    msg.setSourceEntity(113U);
    msg.setDestination(50853U);
    msg.setDestinationEntity(19U);
    msg.altitude = 0.6153768440111589;
    msg.roll = 28008U;
    msg.pitch = 28449U;
    msg.yaw = 19781U;
    msg.speed = -14243;

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
    msg.setTimeStamp(0.03354961206880658);
    msg.setSource(10594U);
    msg.setSourceEntity(66U);
    msg.setDestination(40834U);
    msg.setDestinationEntity(123U);
    msg.altitude = 0.13953799097168662;
    msg.roll = 27761U;
    msg.pitch = 51310U;
    msg.yaw = 27929U;
    msg.speed = 12545;

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
    msg.setTimeStamp(0.13762619538801668);
    msg.setSource(52536U);
    msg.setSourceEntity(168U);
    msg.setDestination(9371U);
    msg.setDestinationEntity(192U);
    msg.altitude = 0.7085844544351945;
    msg.width = 0.15696158398236337;
    msg.length = 0.36270530118993194;
    msg.bearing = 0.9614627690545793;
    msg.pxl = 29417;
    msg.encoding = 167U;
    const char tmp_msg_0[] = {70, 48, -89, 117, 35, 44, -99, 112, -128, 56, 40, 43, 98, 38, 48, -122, 72, 13, -48, 51, 43, -61, -11, -48, -109, -93, -45, -117, -51, 78, 34, 67, 102, 73, -20, -72, 33, -98, -95, -74, 1, -65, -92, 69, 66, -64, -114, 7, -81, 33, -100, 83, 31, -120, 3, -65, -124, 28, 38, -69, -91, 10, -20, -124, 51, -17, -127, 83, -40, 25, -27, -99, -95, 66, -34, 51, 85, 11, -18, -37, 50, -39, -75, 12, -31, 77, -85, 107, -31, 21, -113, -75, -45, 73, -19, -101, 125, 35, -57, -40, 33, 118, 26, -102, 46, 45, -89, 64, -27, 88, -23, 93, -97, 75, -18, 68, 79, 5, -8, 89, -1, -43, 89, 80, 72, 82, 110, -119, 100, 101, -52, 35, -88, 112, -9, 80, -74, -7, -33, 70, 125, 112, -16, -102, -81, -38, 13, 4, 16, 79, -98, -24, 27, -113, -50, -54, -86, 104, -52, -17, -8, -12, 50};
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
    msg.setTimeStamp(0.6032935310991977);
    msg.setSource(1276U);
    msg.setSourceEntity(83U);
    msg.setDestination(16849U);
    msg.setDestinationEntity(223U);
    msg.altitude = 0.693730262255196;
    msg.width = 0.3966805538623178;
    msg.length = 0.8726524015467109;
    msg.bearing = 0.6749889013675194;
    msg.pxl = -29322;
    msg.encoding = 70U;
    const char tmp_msg_0[] = {-83, -40, 29, 95, 84, -55, 82, 89, 114, -109, 82, -21, 5, -96, -89, -112, 101, 32, 39, -100, -89, -23, 57, -35, 57, 61, -30, -29, -68, 55, 124, 114, -19, -67, 83, -7, -128, 86, -46, -117, -7, 90, 15, -98, -4, 8, 53, 99, -68, 64, 23, 102, -58, 93, -71, -40, -110, -119, -5, -123, 90, 27, -32, 13, 43, -89, 71, 87, 102, -106, 32, 7, -9, 22, 111, -68, 38, -35, -54, -12, -30, 55, 31, -24, 22, 9, -68, -63, -3, -44, 102, 121, 10, 51, -22, 71, 116, 58, 116, -43, 13, 39, -73, 69, -4, -14, 124, -99, -102, 104, 33, -45, -10, 17, -120, -86, 8, -8, -75, -78, 0, 11, -103, 99, -53, -15, 54, -32, -75, 115, 98, 118, -20, -85, -77, 116};
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
    msg.setTimeStamp(0.3138894716736371);
    msg.setSource(13212U);
    msg.setSourceEntity(31U);
    msg.setDestination(34522U);
    msg.setDestinationEntity(230U);
    msg.altitude = 0.07449269227391109;
    msg.width = 0.10778201542566646;
    msg.length = 0.02020422991931292;
    msg.bearing = 0.27843415268502547;
    msg.pxl = 16877;
    msg.encoding = 120U;
    const char tmp_msg_0[] = {-20, -99, 100, 37, -107, -50, -77, 27, -115, 73, -119, 2, -12, 42, 38, 0, 47, -35, -109, 112, -37, -80, -19, -105, 93, -48, 77, -14, -46, 71, -38, 28, 78, 122, 67, 62, -2, -82, 122, -54, 55, -9, -5, -124, 14, -31, 63, -53, -63, 49, 78, -35, -110, 2, -87, 76, 106, 54, 122, -84, 10, 48, -1, 39, -121, -85, 1, -120, 69, 109, -31, -26, -100, 72, 87, -114, -61, -120, 54, -62, -43, -87, 93, 69, -33, 124, -98, -57, -4, -79, 27, -6, 126, 38, -117, 87, -22, -25, -65, 98, -10, -73, 73, -12, -83, -59, -113, 122, -59, 114, -121, -81, 56, 125, -1, -59, 120, 8, -121, 106, 120, 26, 106, 116, -78, 109, -89, 98, -86, 90, -90, -63, -14, -80, -34, -42, -51, -1, -46, -5, 64, -37, 58, 105, -25, 92, -75, 96, 78, 21, -111, 8, 40, 76, -88, 88, -6, 56, -100, -54, -70, -39, 9, -95, 106, -32, -52, -26, 54, -116, -44, 48, 25, 38, -117};
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
    msg.setTimeStamp(0.9333383550858709);
    msg.setSource(62076U);
    msg.setSourceEntity(104U);
    msg.setDestination(1814U);
    msg.setDestinationEntity(1U);
    msg.text.assign("PQJWCQUZPPVINQFYQFXDUNHKAKEVDTJMBZSPPODNNYFZWIDCGOBXTVGHODJGKTYCMVBLSBGBMYEVKVHAADSKUFJHOARQWMTJXSEJPRHLXYKTADUWFGBJCRXHBDCDECMNIQZXONZRQWULBQRUEHHYHMAKRLIUKEXSBAGZFTSSTLYZXSWFKNVOFGTLIZOEEVGLMIHYNZWLRUPWGJICJRFSJXMUPAPWCSCVIMWYAEUROAIEC");
    msg.type = 180U;

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
    msg.setTimeStamp(0.1010957382198775);
    msg.setSource(52406U);
    msg.setSourceEntity(61U);
    msg.setDestination(27963U);
    msg.setDestinationEntity(232U);
    msg.text.assign("PXHQSHLXEXMNVDWYTBVZKKVLDQPBBHXTEABOHWJRVWARBEJXRRDVHAGPONNQGPRSYTCSISUKYUBIUBKPGEXDZQAMYDBHJUWGEYIJDZIIFPMAPNIEWQAFBQXMKLGLCCOEUZNTEVZGZQVTNYLPALDRGFOASOFLSTQH");
    msg.type = 243U;

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
    msg.setTimeStamp(0.25766183757949757);
    msg.setSource(45479U);
    msg.setSourceEntity(122U);
    msg.setDestination(32386U);
    msg.setDestinationEntity(115U);
    msg.text.assign("WPWZXABHLUOTKLZRYSRSLHHNCDCNCCTVWWKDEYJCUJPWKFBVPANCUETURTEZYXRKHJLEGKIAYQSZPGUADBITZYCGMXWGHIVCQUDXOXVNZMDTQOEOYWFGTQTOYTFVBWIIMJNQKKMHKWINPMMDSGJLVFDDMIXRBZFFRBTEEGMGQMKVAAZWQXZXPGAKJYMPPIUSSNULSCXJVOHUBQAVIJDNVLBHRREJOXHLNYB");
    msg.type = 72U;

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
    msg.setTimeStamp(0.7984263360652853);
    msg.setSource(58503U);
    msg.setSourceEntity(105U);
    msg.setDestination(33304U);
    msg.setDestinationEntity(110U);
    msg.parameter = 207U;
    msg.numsamples = 38U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 10373U;
    tmp_msg_0.avg = 0.5928674173835118;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9738870349222762;
    msg.lon = 0.8180892154133431;

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
    msg.setTimeStamp(0.09443523171994306);
    msg.setSource(38287U);
    msg.setSourceEntity(201U);
    msg.setDestination(18947U);
    msg.setDestinationEntity(66U);
    msg.parameter = 189U;
    msg.numsamples = 1U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 21821U;
    tmp_msg_0.avg = 0.5133283674482226;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.15513635454612718;
    msg.lon = 0.7910854295975769;

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
    msg.setTimeStamp(0.1671698737048669);
    msg.setSource(42285U);
    msg.setSourceEntity(100U);
    msg.setDestination(33032U);
    msg.setDestinationEntity(69U);
    msg.parameter = 206U;
    msg.numsamples = 226U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 2014U;
    tmp_msg_0.avg = 0.72379416323454;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.020120198112921872;
    msg.lon = 0.11024240244328831;

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
    msg.setTimeStamp(0.4453618766701901);
    msg.setSource(57174U);
    msg.setSourceEntity(87U);
    msg.setDestination(15121U);
    msg.setDestinationEntity(207U);
    msg.depth = 20796U;
    msg.avg = 0.19659190312106478;

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
    msg.setTimeStamp(0.18665674414493505);
    msg.setSource(13190U);
    msg.setSourceEntity(201U);
    msg.setDestination(37008U);
    msg.setDestinationEntity(51U);
    msg.depth = 41921U;
    msg.avg = 0.050234695033326004;

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
    msg.setTimeStamp(0.28713968831593617);
    msg.setSource(9494U);
    msg.setSourceEntity(195U);
    msg.setDestination(8207U);
    msg.setDestinationEntity(125U);
    msg.depth = 57019U;
    msg.avg = 0.24743520884670867;

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
    msg.setTimeStamp(0.01629152279293611);
    msg.setSource(49089U);
    msg.setSourceEntity(7U);
    msg.setDestination(19233U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.488247791402201);
    msg.setSource(62663U);
    msg.setSourceEntity(0U);
    msg.setDestination(14064U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.9273476282137914);
    msg.setSource(48428U);
    msg.setSourceEntity(250U);
    msg.setDestination(13454U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.3930290008193438);
    msg.setSource(51533U);
    msg.setSourceEntity(140U);
    msg.setDestination(40215U);
    msg.setDestinationEntity(178U);
    msg.sys_name.assign("DORXEMGAMNFYCXDENFVPAODGHAEQPYGIBEYZAULSOFCBOSGJOXWALULEWAWHNFTNYVCXIHVKZXQSMZMTIERQCJHTVIMWTUKRFRVILKXDSFUDJEQDCOLIEZMIUCTKJQWXDBDBTTYVGXENCLTSCSNNPYPVGORGMZKKAWJLMZJBSIHVBJQOYAWQLLVPGQKUTNSLRFFJMWROHGBIDRNPZUKKGSPEUIHWKRXVAPRSPJMBCBH");
    msg.sys_type = 204U;
    msg.owner = 22764U;
    msg.lat = 0.7887549340851543;
    msg.lon = 0.16435683666958334;
    msg.height = 0.17433850025902486;
    msg.services.assign("RIUBWLPNGBSCEVKISGAVOEDKWMZIVYCQYHXQPIOWJGFHPZY");

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
    msg.setTimeStamp(0.3779253387885546);
    msg.setSource(56830U);
    msg.setSourceEntity(91U);
    msg.setDestination(60883U);
    msg.setDestinationEntity(209U);
    msg.sys_name.assign("ALTIELWKOQTUSWCJJEUXRPJUFEFVSFSMZSFADJLBPXGDTJXITQCYWCQUICLBPVHCYXWQOUIRVWZKTGXJVAXELJAZOMDZWSNOEEOVKCBSYXARYWNORGGCJRXWUYKDLRSWVBHKNEDMMEUIQTGFIBDHKIYZVPBIOKVSUNUATAHRNCXLYJTQLTEGQGKHDIQPSMQSGAHNIPMRBBAVJHNTZLVYWHPMZDMHQFMZGMOCGPRBPXFZP");
    msg.sys_type = 194U;
    msg.owner = 29507U;
    msg.lat = 0.10207478735218167;
    msg.lon = 0.5152989581978078;
    msg.height = 0.5425008158191416;
    msg.services.assign("OAXRQQVGROSJZUAFCTXITBBPPPERBBVJBECZVNHWDSVDFXAGFJMIARWQKX");

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
    msg.setTimeStamp(0.8332462549433577);
    msg.setSource(5177U);
    msg.setSourceEntity(55U);
    msg.setDestination(5211U);
    msg.setDestinationEntity(103U);
    msg.sys_name.assign("IHUSGLMJGAFPDDEDROVAQYVAJDRBKVTT");
    msg.sys_type = 174U;
    msg.owner = 61426U;
    msg.lat = 0.1787874242409252;
    msg.lon = 0.27273932229976827;
    msg.height = 0.9960201916652491;
    msg.services.assign("GLNUKQZOZUYPUKZZBTDCLNXCNEWMQSIOJLWMBKOJHFUHHLQSJXQDURVMWQPUIGYVODIKAVBEIPVXCBTBMMDLOYEOWWIZHOGGKFESRCCIXQTNIPMDGAQUVVTPVNVSHDPAAFZHRLSNOFRPXEUGICABQEUFGJKMYFAEQADUYXPLIGMNZBHWBFYMVHQJTWVRJPGRZRSHXXYEYJLTCCXCZASDDINRFLCDZTKKHJLERKSEMYTAWSXGNNAFOJSWTBKY");

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
    msg.setTimeStamp(0.4099511824205615);
    msg.setSource(57790U);
    msg.setSourceEntity(153U);
    msg.setDestination(4532U);
    msg.setDestinationEntity(96U);
    msg.service.assign("NICNTBBWVFUAEBNPARBPLZRMLUYLSAHKXLEHBHWAIEJCHOKDCQKRYFRDCKBAXSVKOAVMSRUSODLWLODYFTOSTTHILGQFEZTJRSJJGNCUZMSGAYPEJWTQZYUYHRXQLDGVPVKTHXPJMFICZMMQKZQICGJDFSYUDATTPMGHCYIMVXDMINZDQGNXQBMIXNUWWFUGQWBKPKGPEIGTOXEZOONUNRABWDLWXKWHJOBFZHVNIREEQEFUYFRSPJ");
    msg.service_type = 116U;

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
    msg.setTimeStamp(0.32900904435888756);
    msg.setSource(28451U);
    msg.setSourceEntity(181U);
    msg.setDestination(25729U);
    msg.setDestinationEntity(120U);
    msg.service.assign("ICASVPXCNAKLMJLYASBDLQNCJDGTXMAKCMLSWXKJFRHLPTIRYRYUPSPKBYTXKIFEQZKFBOBUSTXQDHXUZORVGYDMRNDYCJBYBFWTVHLVLNGFQOXKWRVWCIHISUGJFZTVFFJODHOGNZXPEBEMHTQDVEOCVOGNCHZWMRHEYWHDUPQNSNIAOEDRLCPFEONMQKHQZVQURUAFAUMALEAJWEJBGZ");
    msg.service_type = 93U;

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
    msg.setTimeStamp(0.9626614215587307);
    msg.setSource(15910U);
    msg.setSourceEntity(75U);
    msg.setDestination(64324U);
    msg.setDestinationEntity(110U);
    msg.service.assign("SVLTXMZXOFIPKQJGBKRYFGVVKMTQLWBA");
    msg.service_type = 137U;

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
    msg.setTimeStamp(0.365282322165811);
    msg.setSource(60913U);
    msg.setSourceEntity(146U);
    msg.setDestination(12810U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5332715162753907;

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
    msg.setTimeStamp(0.33022143352650646);
    msg.setSource(32935U);
    msg.setSourceEntity(87U);
    msg.setDestination(53821U);
    msg.setDestinationEntity(213U);
    msg.value = 0.1550515248201334;

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
    msg.setTimeStamp(0.8130626179960673);
    msg.setSource(7651U);
    msg.setSourceEntity(46U);
    msg.setDestination(42601U);
    msg.setDestinationEntity(18U);
    msg.value = 0.057178062158488197;

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
    msg.setTimeStamp(0.4772534599065169);
    msg.setSource(11621U);
    msg.setSourceEntity(41U);
    msg.setDestination(43133U);
    msg.setDestinationEntity(46U);
    msg.value = 0.08178601536743446;

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
    msg.setTimeStamp(0.6955848896969373);
    msg.setSource(35597U);
    msg.setSourceEntity(164U);
    msg.setDestination(18480U);
    msg.setDestinationEntity(103U);
    msg.value = 0.8930361247075217;

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
    msg.setTimeStamp(0.9203315946438025);
    msg.setSource(25170U);
    msg.setSourceEntity(55U);
    msg.setDestination(55990U);
    msg.setDestinationEntity(17U);
    msg.value = 0.8416668117446473;

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
    msg.setTimeStamp(0.20238687250555587);
    msg.setSource(60425U);
    msg.setSourceEntity(100U);
    msg.setDestination(25240U);
    msg.setDestinationEntity(59U);
    msg.value = 0.30077076131955816;

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
    msg.setTimeStamp(0.39866204665937266);
    msg.setSource(19635U);
    msg.setSourceEntity(233U);
    msg.setDestination(6362U);
    msg.setDestinationEntity(9U);
    msg.value = 0.47124606530740887;

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
    msg.setTimeStamp(0.03538600736352737);
    msg.setSource(25671U);
    msg.setSourceEntity(108U);
    msg.setDestination(19360U);
    msg.setDestinationEntity(36U);
    msg.value = 0.5066465503158415;

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
    msg.setTimeStamp(0.37063043494127335);
    msg.setSource(64719U);
    msg.setSourceEntity(87U);
    msg.setDestination(60008U);
    msg.setDestinationEntity(224U);
    msg.number.assign("OSLESWHNMVMANOBECLVWMTGXODETDKOEDQOHKMSTBVMCYFVZELACUZFSDIRQLJLEIRDBZQKAJPPRWCJDJCPTQLIQJXNJYQXVZRGHSHAFKAQBYFOYFR");
    msg.timeout = 51024U;
    msg.contents.assign("TADOAENXLPDGRIWJSBBCAZIDZHBZRVGTPDPFY");

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
    msg.setTimeStamp(0.02538424747375201);
    msg.setSource(5627U);
    msg.setSourceEntity(12U);
    msg.setDestination(45549U);
    msg.setDestinationEntity(72U);
    msg.number.assign("ZMKCAKPVSQCKTODQICOWJXVYHNNGPOXIOILCJZHMXMYDHFHUHHUAYUEQHRTBKIVGLLBSSJFNPFKYFPQXRIAETIGUULOGHSRLGYXMCTA");
    msg.timeout = 7261U;
    msg.contents.assign("TRSRUWWJLCDZYULKFSVVZLWVUWBVWFMTDXEUOOJVRDQCFUGBJDMZQNYNHILDNZCIPMSLADGOQRQIZLQPMHBCUOJECXMOKEKQSDUPZUZHZAOIROEUOPDFFTBFIDKNYMCCNPISKTSMJSAMEAGLKZKTGJWTWSXYIHXEFQZOQAHKJYYD");

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
    msg.setTimeStamp(0.792122676552052);
    msg.setSource(59733U);
    msg.setSourceEntity(135U);
    msg.setDestination(14458U);
    msg.setDestinationEntity(150U);
    msg.number.assign("KMJPQBOJDWKQSSRDERAIZPOMBEAZYFYWQCXHPDHOFLJMBSHFJEACYEJXORPWZZYRNXIKOHLQLFFDVWBKRDMIHIIF");
    msg.timeout = 3457U;
    msg.contents.assign("JXOYFASQOIJDKHZJMHPZSKDHROQOKLAJAOBMWCJMXZEEYAHRLAYPPFPHKCXFVCCDGSHBDRKBXQRTDTLLOUJEVMXCQZNEGEKWHNDMGKQWTGURDUARGPCVTEMICFGZHXWJILJAINIXQJDNBVSCQVLMSPSXBEPMTWHNWIPOBKBZQANYLXOYRNVYVCSTBN");

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
    msg.setTimeStamp(0.27013618199183687);
    msg.setSource(63153U);
    msg.setSourceEntity(25U);
    msg.setDestination(29055U);
    msg.setDestinationEntity(127U);
    msg.seq = 566117661U;
    msg.destination.assign("GWYKNZBFJMWOELRBRZDILXFUMTUXFCCXKLABFXDHBFKHMAQIHHQERMCKSNMEQJPGGV");
    msg.timeout = 1648U;
    const char tmp_msg_0[] = {3, 124, -24, 28, 118, 125, -20, 84, -110, 3, 123, -100, -96, -51, 93, -82, -97, 55, -58, 45, 86, 112, 113, -25, -36, -95, 64, -57, 117, -121, -100, -63, 92, -11, 6, -87, -124, 27, 92, 85, -125, -50, -120, 76, -37, 104, -16, 53, 18, 76, 123, 19, 1, 120, -8, -75, 46, -24, -35, 79, 15, 99, 104, -87, 90, -125, 50, 21, 26, 59, 23, 51, 112, -107, -114, -52, 28, 69, 114, 23, 71, -123, -90, -117, 125, -47, 85, -74, 105, 126, -88, -54, -96, -98, -109, 113, 37, 54, -12, -52, -118, 89, -56, 26, -126, 51, -3, 99, -96, 115, 96, -74, 27, 110, 42, 20, -67, -56, 105, -29, 41, 63, -114, -96, -25, 80, 15, -16, 46, 77, -111, -64, 96, -17, -42, 119, -9, -66, -124, 25, 41, -88, 86, -124, 60, 78, -23, 39, -66, -34, 116, 78, 114, -111, 58, 17, -64, -42, -76, -94, 82, 97, 98, -74, 63, -13, 28, 19, -1, -78, -71, -74, -105, 73, -41, -34, 116, 15, -23, 17, -71, -14, 77, 66, -23, -39, -92, -87, -66, 75, -10, 120, -39, 41, 1, 69, -53, -77, -32};
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
    msg.setTimeStamp(0.6934095881025736);
    msg.setSource(21590U);
    msg.setSourceEntity(113U);
    msg.setDestination(2314U);
    msg.setDestinationEntity(29U);
    msg.seq = 2263397813U;
    msg.destination.assign("XZKWOCXEBSQUUZCDFRMTUEDGJONJOFIIYATSEXKMGRVOLUKZPGJPPXQNPQWPHOGVEBJBRYMHUGULNURWAGADOLOMHQXAEBWETFFSDGNPMIFLQVJHISNSLJVQCCRQEEKHPCSPALVEAHKYITFMNHHOKDDGRKBDQBZCRWSQOPKLTLPVBTCVSWNUDYXNYJRZIIVFFJ");
    msg.timeout = 14980U;
    const char tmp_msg_0[] = {13, 89, -24, 1, -118, -68, 22, -97, 50, -26, 86, -42, 105, -97, 1, 21, 120, -101, -118, 113, -72, -109, 114, -42, 65, 29, -54, 12, -90, -120, 89, 3, 47, 15, 105, 37, 10, 12, 51, -42, 73, 51, -66, 75, 45, 100, 59, -1, 0, -9, 38, 80, -128, 86, 44, -91, -81, 124, -56, 2, 45, -67, 112, -3, 76, -123, -1, -64, 105, 62, 58, -37, 122, 42, -43, -21, -71, 84, 18, -49, -48, 32, 112, -89, 32, -109, -72, 47, 4, 77, 87, -40, -88, 119, 63, -84, -41, -46, 110, -59, 78, -81, 111, 108, 117, -75, -54, -1, 107, 45, 54, -124, -9, 61, 11, 76, 104, 110, 17, -104, -39, -38, -126, 77, -97, 40, -53, -98, -13, -71, 27, -110, -104, 8, 54, 59, 11, -56, -100, 25, 115, -41, -22, -16, 25, -27, -40, 37, 52, -81, 63, 42, -5, -95, -14, -101, 35};
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
    msg.setTimeStamp(0.6800751304007225);
    msg.setSource(13986U);
    msg.setSourceEntity(21U);
    msg.setDestination(62783U);
    msg.setDestinationEntity(130U);
    msg.seq = 1563935457U;
    msg.destination.assign("QWUVXLSNQHOYFAFGYZWMGYTMPBCKVCYSSEZXTPHTAIZWHLQCROMNSSVWIOAMRNDVFFQYBSLT");
    msg.timeout = 18432U;
    const char tmp_msg_0[] = {-74, 74, -19, -97, 102, 45, 87, 94, 30, -90, -85, -12, 92, -9, 71, 59, -64, 119, -69, 1, 123, 87, -21, -56, 92, 3, -54, 75, 74, 55, -16, -85, -35, 38, -49, 28, 74, 84, 107, 109, -17, 47, -23, -65, -75, -30, -20, -4, -17, 95, -41, 102, -117, 13, 0, -77, -1, 18, 85, -115, -104, -50, 19, 1, 81, -4, -109, 118, -97, -56, 23, 80, -83, 10, 7, 109, 122, 95, -122, -12, 64, -33, -103, -55, -119, 81, 1, 23, 12, 87, 109, -99, -127, -33, 85, -52, 122, -102, -95, 93, 112, -23, -118, -8, -50, 69, 88, 39, -61, 104, 3, -62, 25, 64, -90, -77, -2, 63, 75, -91, -113, -52, 58, 35, 21, 47};
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
    msg.setTimeStamp(0.8659962069906978);
    msg.setSource(13650U);
    msg.setSourceEntity(174U);
    msg.setDestination(57769U);
    msg.setDestinationEntity(115U);
    msg.source.assign("ZLDCLNNPXLVNEAWBZFVHZKQSZXFMMDUGVGLQKQPSJLOQSVBTOFQORVYLOFAJDEGNWJMKUGIXEYHTXCLH");
    const char tmp_msg_0[] = {18, -92, 9, 72, 47, 51, -51, -66, -48, 85, -48, -9, -92, 17, -84, 32, -51};
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
    msg.setTimeStamp(0.27364260638494353);
    msg.setSource(10861U);
    msg.setSourceEntity(240U);
    msg.setDestination(16665U);
    msg.setDestinationEntity(106U);
    msg.source.assign("VCXHFMAIGMKLYQINGPUGLBUNLVNTDKVOMJRAGHCUOMOTAIQFBMSGQBSXAZZXUHZOPLHDGTMZPQIWMPVDEKSYTKUYMRRHVNOTCDZIARIWAXCRJJEL");
    const char tmp_msg_0[] = {90, -75, 93, 18, -38, 93, -95, 98, 5, -104, -23, -20, -65, 49, 67, -36, 79, 0, 73, -44, 13, 65, -77, -25, -10, 114, -82, -10, 24, -89, -63, 118, 107, 34, -96, 79, 37, 22, 103, 0, -128, -122, -39, 68, 115, 16, 108, -33, 38, 64, -29, -125, 56, 28, -118, -14, 83, 114, 36, 66, -81, -44, 109, -54, 91, -5, -72, -105, 123, -104, 85, -32, 122, 115, -74};
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
    msg.setTimeStamp(0.344582779321173);
    msg.setSource(34534U);
    msg.setSourceEntity(232U);
    msg.setDestination(56516U);
    msg.setDestinationEntity(243U);
    msg.source.assign("XITTKOPWTZ");
    const char tmp_msg_0[] = {-56, -48, 39, 108, -123, 102, -42, -38, -61, -86, -61, 103, 86, -58, 40, 10, -1, -101, -115, 19, 10, 57, 115, -35, -80, 87, 32, -10, 96, -4, 79, -105, -93, -48, 30, -72, 18, 45, 34, 119, -102, 58, -41, -62, -97, -98, -84, -22, 98, -75, 44, 28, -69, 30, -19, -92, -2, -87, -128, 45, 102, 87, 58, 95, -113, -13, 121, -33, 15, 37, -75, -7, 82, -108, -8, 94, 64, -121, -9, 84, -21, 28, 26, 53, 54, -128, 99, -41, 31, -41, 97, 34, 100, -106, 15, 15, 39, 80, -75, 51, -97, -98, -61, -116, -43, -2, 21, 58, -123, 11, -113, 72, 96, 36, -112, 118, 66, 68, 4, -51, 43, -69, -108, 73, 102, -12, 4, -100, -97, 8, 117, -49, -3, -19, 116, 35, -58, 57, -21, -86, -50, 69, -104, 71, 74, 53, -79, 98, -65, 58, -50, -45, 24, 11, -57, 88, 101, 1, -60, -68, -73, 2, 28, 54, -59, 10, -51, 98, -75, 39, -30, -114, 47, -112, 64, 100, -48, 91, -14, -10, -57, 106, 83, 87, -61, 89, 76, 82, 83, -43, -13, -2, 40, 65, -13, -25, 106, 47, 19, -76, -104, -109, -56};
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
    msg.setTimeStamp(0.7080834755767694);
    msg.setSource(59479U);
    msg.setSourceEntity(208U);
    msg.setDestination(15166U);
    msg.setDestinationEntity(203U);
    msg.seq = 1455945964U;
    msg.state = 67U;
    msg.error.assign("WNZCCOONRFVBZDSGDXEBJVSWRIDRTPOKEJENBMSGFSUYVDEIVLNBSFIUIPCZTKNXXLLSSLCPDTENUESHPOEHIDDQKCMIZJYUUDFHMINHKVKCVGQLAORRYPYCQGCPJIJN");

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
    msg.setTimeStamp(0.4386126037518232);
    msg.setSource(3982U);
    msg.setSourceEntity(29U);
    msg.setDestination(11567U);
    msg.setDestinationEntity(157U);
    msg.seq = 430079725U;
    msg.state = 4U;
    msg.error.assign("FOEMQZUQUPOIVVVXZGWKKAETMZXMZBVFNRELUCHJTSHHJLMTLUPFHKRCILSTOUBLILEXPXUBIDCJPMGAMCKGAJDVZGBBXETYMQYSHNERLINDGYOANFDEYOIZRRNGJKKBEAVFEQQWOPC");

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
    msg.setTimeStamp(0.24211100773616467);
    msg.setSource(41358U);
    msg.setSourceEntity(71U);
    msg.setDestination(65310U);
    msg.setDestinationEntity(84U);
    msg.seq = 809025855U;
    msg.state = 176U;
    msg.error.assign("EXWFKUAYGNCESIQCEJAPGVHGEMYCPQXZEDEMKWCIBTU");

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
    msg.setTimeStamp(0.52491500762629);
    msg.setSource(40899U);
    msg.setSourceEntity(106U);
    msg.setDestination(1712U);
    msg.setDestinationEntity(180U);
    msg.origin.assign("LZXINCUHUKIOSFWYFAC");
    msg.text.assign("PHYBPTMKUNFRQOJNMXVIWUHADDMNKQERABLXFKTJKLLGVECVCPLXJBYOQHOXDAJCWGZWGCOIYVTLOXWSZFCKWURAWRTBECIJHJMFVGPSWNDJTVJCTRXDQHNYOSBGNOAFZKMFTSDIYWNPRCEIANZQQZKKQZKUDQKM");

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
    msg.setTimeStamp(0.31738779982857135);
    msg.setSource(46456U);
    msg.setSourceEntity(44U);
    msg.setDestination(65297U);
    msg.setDestinationEntity(134U);
    msg.origin.assign("UIUEXDSHVYQAUZCODKGMLPHZKWYZEOFRKTAIJDBFPLNCEFYMUGQGIGIZNNTYJNKJFMRBTOGMVAIXVCZOKQVTXCQCLHMQWWQUQMESAFMFHDAXZPUJHSRCWVUSAURDONKJVMATKXEJBWXGIWLTRKEXUSRPBIBLCNMYCDEISWGIRNZQYNOXHHYHTBYGPRDIBHPMCFDOPDAFZSOQKEYJLXJXVYJEUABSLZLNSBTROGWZFJNWFCVPSOTPDRBQVAV");
    msg.text.assign("MFJSCJZOIQLERCVPGHDCYOSCVLVMYKRSMXXQSODETXCFBIULGLMIXNJYKXNRPZZJWJNBLZQKESDBSJUOOVCD");

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
    msg.setTimeStamp(0.5897669411483051);
    msg.setSource(48371U);
    msg.setSourceEntity(108U);
    msg.setDestination(34943U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("ZHJBLHCBFDPLNSERISQUEFJJHQTDYYWSBZRAMYUGTIWOEPQSVJJUWODBAQZIFCUHHXGSVGNGSYGRTPANVXEWAKXBRHOJMAOGFNONBIJZZYV");
    msg.text.assign("TVOUCIIABAVRPJZFJKEWBESGPQMDTLQQNKGONKJUXFQYJFIEJWMTLSNADDVJXKHUQMNDCQXHJTHHBPUXKALEEFBINGQRVTHJJHQYMSXUVGRYENUXLAIHXGIDTSRGSDDOFSCPAKMFDWZWIKLOYGAOOUTUMYVRFFLAMDSLPXIKZOAZCCROKZVTEKNOXPWELZXSQHBWRTELCEWPOIWZYNDVC");

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
    msg.setTimeStamp(0.22942565899026124);
    msg.setSource(10123U);
    msg.setSourceEntity(89U);
    msg.setDestination(64734U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("JWZNXESDHMEAIGTQAWYYPYNTFILIPIZZGKDXFJXYTPIRXZUWCGCMETCAESMTRUDMKVOFCDFKWNWBVUJZYJMODGDOJTYVZKO");
    msg.htime = 0.9976696353638016;
    msg.lat = 0.5082551222762235;
    msg.lon = 0.6841454644620805;
    const char tmp_msg_0[] = {57, -52, 18, 88, 124, -45, -19, 20, -40, 63, -70, 92, 44, -84, -83, -99, -10, 44, -61, 109, 49, 89, -102, -1, 74, -1, -65, -70, 17, 77, 98, -107, -54, 7, -17, -24, 14, 107, -82, -82, 28, 16, -91, 60, -44, -64, -15, 79, 106, -20, -42, 42, 106, -117, 30, 46, 115, 62, -48, -103, -45, -61, -21, -19, -21, 40, -8, -5, 76, -89, -116, 116, -8, -99, -56, 98, 62, 111, -34, 8, 119, -109, -124, 45, 25, 37, -87, -114, -74, -62, -59, -122, 38, -18, -74, -84, 81, -35, 61, 75, -80, -58, -51, -33, 13, -106, -48, 1, -57, -113, -63, -9, -31, 119, 34, 46, 2, 72, 28, -14, 95, -44, 60, -86, 88, -63, -45, 4, 47, 42, 30, 96, -64, -42, 32, 108, 59, 32, -19, 119, -82, 31, -46, 111, 76, -44, -92, 59, 121, 115, 78, 106, 20, 67, -68, -104, 120, -43, -38, 105, 42, -3, -8, 5, 56, 9, -4, -33, 27, 51, 67, -107, -56, -20, 7, 116, -4, -117, -11, 13, -76, 55, 37, 102, 12, -117, -111, -55, 89, -45, 113, -60, 79, -81, 33, 33, 10, -115, -72, 47, 89, 72, 36, -117, -65, 81, 106, -32, -109, 120, 53, -127, -101, -115, -68, 66, -36, 54, 79, 13, 79, 104, -36, -126, 29, 23, -28, -115, -7, 108, 56, -104, 105, -35, 34, 103, -15};
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
    msg.setTimeStamp(0.2987292486900909);
    msg.setSource(59683U);
    msg.setSourceEntity(47U);
    msg.setDestination(54844U);
    msg.setDestinationEntity(161U);
    msg.origin.assign("CBLIQVLVXXLUEJQPPJNJMYVKYOLXYBHGSIYAOMRKEYXDZDVNGJCKNLCOPRKSFAYFEIQFUJCJGVWAGAQWPZAFNWERANSTETXKKOSOTQFCWZDBMBZSXNUMOFEGYRUGRWPHGVFWXHSJQIZDDJYPDVKHNVBZYNL");
    msg.htime = 0.9820840917427905;
    msg.lat = 0.29935016883562104;
    msg.lon = 0.13854027968930072;
    const char tmp_msg_0[] = {106, -2, -121, -75, -78, 43, -27, 37, 54, 71, -76, 81, -42, -102, 117, -45, 11, 104, 30, -60, 35, 121, 18, -7, -62, -31, -48, 19, -27, -36, -1, -24, -6, -11, -16, -27, 124, -62, -9, 47, -60, 71, -64, 58, 70, -94, 69, -55, 35, 1, -8, 115, 38, -79, 111, -1, 27, 46, 24, 34, -24, 12, -62, 65, 61, -105, 5, -94, -33, -115, 56, -107, 19, 126, -3, -51, 84, 88, 117, 26, 124, 76, 67, 12, -54, 5, -122, -85, -71, 119, 43, 115, -56, 94, -44, -40, -46, -11, 53, -69, 55, 14, -26, -9, 5, -52, -109, 115, -22, -79, -47, 65, 45, -41, -102, 65, -65, -106, 43, -43, 57, 57, 110, -5, -33, -38, -89, 28, 3, -117, -113, 48, 71, -66, -121, 92, -1, -119, -84, -81, 39, -67, -115, -98, -24, -61, -88, 91};
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
    msg.setTimeStamp(0.03482354257769371);
    msg.setSource(35856U);
    msg.setSourceEntity(34U);
    msg.setDestination(7047U);
    msg.setDestinationEntity(147U);
    msg.origin.assign("MELBVKKYFWAYNHUGBADPGUZWQRGVJDBINSVOKZCRWSDNMTTLHJKIMFDNEQYLPDKCZNFAPIQYTCOBHWEVQMHAPSOMFTELFUMAJXYYITBWSUZWTXFHMPGQEZQPUKDSPCIGKVSULXTSMIQBGMLXQOBNGJTAJHBJWAVXKCWYGGF");
    msg.htime = 0.17605327049932984;
    msg.lat = 0.4774789565459515;
    msg.lon = 0.7267998135979272;
    const char tmp_msg_0[] = {-85, 70, -107, 34, -89, -66, 20, 30, 49, -119, -50, 2, -8, -61, -45, -40, -122, -93, 47, -27, 76, -7, -106, -61, 99, -92, 121, 94, -114, -56, 11, 57, -98, 111, 95, -93, 39, 36, 119, 69, -119, 80, -25, 105, 17, -27, 42, 89, 109, 121, -110, -96, 20, 36, 11, 59, 33, -96, -99, 24, -27, -25, 111, 93, -43, 16, -21, -17, -16};
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
    msg.setTimeStamp(0.9159325829663062);
    msg.setSource(57441U);
    msg.setSourceEntity(91U);
    msg.setDestination(65332U);
    msg.setDestinationEntity(6U);
    msg.req_id = 49628U;
    msg.ttl = 37241U;
    msg.destination.assign("NZZKWYPPIAOYPWHADJALTWPZZANEIICVZS");
    const char tmp_msg_0[] = {-82, -18, 66, -18, -38, 123, 66, 40, 17, 98, -22, 49, -32, -40, 35, -111, -4, -18, -37, -88, -50, 112, -42, 18, 23, 79, 84, 77, 30, -102, 88, -82, -35, -68, -56, 100, 14, -58, -109, -24, -13, -23, -21, 85, -25, 111, -87, 124, 0, -112, -31, 78, 46, -80, -23, 73, -22, -116, -89, 64, -112, -113, 25, 51, -23, 12, 41, -81, 48, -94, 32, 61, -28, -61, -32, -50, -43, 2, 28, -24, 102, -42, 89, -43, 114, -2, 112, -119, -98, 50, 39, 74, -86, -68, -30, -8, 16, -60, -125, -72, 120, 17, 90, -50, 77, 22, 102, 56, -58, 105, 88, -103, 122, 80, 122, -71, 76, 114, 117, 66, 123, -124, -21, -93, -49, -116, 113, -56, 91, -127, -80, 19, -116, 121, 47, 122, -9, 50, 13, -7, 22, 118, 93, -70, 52, 58, -47, -112, 90, -44, 64, -115, -19, 39, -36, -67, 115, 121, 72, 51, 79, 80, -101, 70, 85, 8, -4, 34, -124, 106, -77, -96, -117, 58, -72, 84, -102, 32, 20, -58, 53, 34, -72, 86, -29, 5, -62};
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
    msg.setTimeStamp(0.2800498342139295);
    msg.setSource(50910U);
    msg.setSourceEntity(166U);
    msg.setDestination(52692U);
    msg.setDestinationEntity(146U);
    msg.req_id = 38561U;
    msg.ttl = 33137U;
    msg.destination.assign("LNDLYVEVMUKEJYZCNBQPJPJGLDBESXLLOTKLTGCHXBGOQZNRFJVOCMDVBJOGADNETZSYSTWWEQQMW");
    const char tmp_msg_0[] = {13, -117, 88, 111, 103, -59, -96, 87, 95, -66, -76, -39, -48, -84, -56, 91, 125, -24, -114, -72, 51, -121, -92, 118, -88, 56, 75, -47, 114, -50, 57, -77, 30, 108, 0, 79, 1, -33, -70, 93, 78, 77, 49, 99, -49, -22, 112, 77, -19, 73, -74, 88, 123, -105, -38, -18, 23, -47, -6, -125, 92, -79, -51, -48, -1, -18, -42, 71, -61, -63, 14, -32, -54, -90, -68, -119, -26, 121, 24, 104, -61, 79, 0, 34, -51, -64, -64, -88, 113, 68, -107, -112, -109, 119, 75, -71, -94, -92, 49, -50, 61, -21, 110, -12, -101, 124, 31, 112, -77, 42, -25, 2, 52, 89, -53, 84, -60, -5};
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
    msg.setTimeStamp(0.2876645506267509);
    msg.setSource(37745U);
    msg.setSourceEntity(203U);
    msg.setDestination(16740U);
    msg.setDestinationEntity(180U);
    msg.req_id = 49468U;
    msg.ttl = 1986U;
    msg.destination.assign("VVHAUUCUSGCPCDMIGCXYWBPBBKRYVDVOJATJKZBFVCAKXNNLASDNZINRKJWMSIXFEHAXJTJMOZCFUANKZYLJMBSZDXHXLQSQZEQDQIQZGYOUGOFHNVIWIGRDFUTFRVPQYGZKHMLQOCSJPPYVLSEEEPOSMXLBRMXNCIUHFXQOLDRYVWWW");
    const char tmp_msg_0[] = {-26, 97, -72, 20, 91, 9, -40, 58, -66, 109, -87, -80, -91, -113, 35, -106, 65, 123, 31, 5, 75, -86, -104, -12, 104, 18, -26, -51, 20, -50, -62, -28, -98, -66, 54, 16, 77, 92, -45, -85, -54, -40, 104, 80, 100, -1, 15, 112, -8, 23, 54, -98, -123, -70, -8, -31, 52, -91, -27, 7, 118, -117, -107, -28, 81, -119, -13, -3, 57, 14, -13, -128, 24, 43, -60, -93, -45, -94, 89, -50, -18, -94, -104, 28, 77, 61, -83, -115, 78, -95, -9, 8, 65, -125, 122, -25, -72, -82, 126, 11, -122, -12, -50, 112, 111, 77, 118};
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
    msg.setTimeStamp(0.24747791075568415);
    msg.setSource(8300U);
    msg.setSourceEntity(191U);
    msg.setDestination(62998U);
    msg.setDestinationEntity(211U);
    msg.req_id = 711U;
    msg.status = 217U;
    msg.text.assign("BBMDMNVSVPUEUBXBCUXDOZRFLDAHZCQUDTZUYWBWPMOGCXJIMICZDHEZALOENLEQYHJVPDSNKRIJQRMQKZRVFOYROPWNTAPGWJSUTQKSYPRUKGXESQEDYLCKLSMLXJDIPNWVBTWVKDNBRFZWQAFYFTXCUWYYJGHGCXAKRDGEL");

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
    msg.setTimeStamp(0.4514598697978044);
    msg.setSource(6217U);
    msg.setSourceEntity(15U);
    msg.setDestination(47242U);
    msg.setDestinationEntity(26U);
    msg.req_id = 20187U;
    msg.status = 53U;
    msg.text.assign("IYQOLLNTDJVWZQTAMDJEVTHTBNEXRKWWNSATGXTIPZPHDKUKPVIBVPJSHYZBIFCUVLEZOKCXCBLGVGBYMNYCTCHDXXJRJYUNSWXCBDOSQIPDIOKQFGOHJLIKLLVCDARMBTKJTUOKMFWPFYFRECHOAJFIWROQDPUSXZLNVGRPUUKVAEIRUMBPYRABZFEFNWOWGJLFCSNQSZYDUZ");

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
    msg.setTimeStamp(0.6138684053902775);
    msg.setSource(37226U);
    msg.setSourceEntity(102U);
    msg.setDestination(36363U);
    msg.setDestinationEntity(52U);
    msg.req_id = 64590U;
    msg.status = 117U;
    msg.text.assign("RJSYREEPIALBKDJPBJRFQL");

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
    msg.setTimeStamp(0.4902560270354598);
    msg.setSource(1607U);
    msg.setSourceEntity(106U);
    msg.setDestination(31791U);
    msg.setDestinationEntity(134U);
    msg.group_name.assign("KNKGWJPVSADLXCTGUUACDKMZFMUGXFLNFARDDQHNUW");
    msg.links = 2083146158U;

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
    msg.setTimeStamp(0.6773393673548973);
    msg.setSource(61477U);
    msg.setSourceEntity(93U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(48U);
    msg.group_name.assign("NBCUTNAFVASFYILTJHUIXDAAAMAYXIWNCLVZXQKHZHMPSLGPLKXOIJRRTUNSFYVUFFYWDBBEBUBHVEJZGAEKVVSJOGCGXVRBSXFGDENQCQHUOTZGOWJPPNDKQOOEETSLLZSRCRFXEMLTMOSEEJWQCCWXZHTTWRHYNNKFFYHXBLUOGIVTHYJKSWZNPCGQPWIAKJQIZDBAAPEWLXBGDORKOPDRZFVMDKYQRDDGQQICURPJIKLCUMHUMMJWVB");
    msg.links = 3426301181U;

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
    msg.setTimeStamp(0.6970508881958813);
    msg.setSource(11881U);
    msg.setSourceEntity(27U);
    msg.setDestination(56969U);
    msg.setDestinationEntity(236U);
    msg.group_name.assign("DENLRIFUQFJUKVYYLLLMOMCUPRBGAASTGRLMIAKDFEWRNPBMSCRZHFJAKOWJXETUUHOOWXHZHEPDASYNNIMDNSDCZVJTTABYDNXGJKN");
    msg.links = 838665221U;

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
    msg.setTimeStamp(0.8187115727402032);
    msg.setSource(19869U);
    msg.setSourceEntity(31U);
    msg.setDestination(61676U);
    msg.setDestinationEntity(122U);
    msg.groupname.assign("AKUHESNNFDPWPEOESZNEJHVCPAX");
    msg.action = 120U;
    msg.grouplist.assign("QYOSRHEIWQYJYGGWXJHUIIOTEHINITRPVSMVGGYZCWDDLBWJAJORPRHXVMWPFTLLPQQCOKGTLLDFMCDVFNCQFBZZPZUICFUUALGIHAKFXAOXWQSXOICHZXLUJ");

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
    msg.setTimeStamp(0.9162118956226294);
    msg.setSource(40508U);
    msg.setSourceEntity(218U);
    msg.setDestination(56504U);
    msg.setDestinationEntity(17U);
    msg.groupname.assign("SLFJRVCSLCODAMWXZPYRTVURAJKJIOTPTUSCXJSOHTQLGLOYCNBROVZTYYPYBFVQPKQRFASLGZZIOXLNHCCMZPHBQLHGTMBYHUIXFZJHKNXYKXNGAIAFXMNEYRZBDQVGUYSYAJOMKBDUHNHDDWHSGFREWLBPEFDVHDEDMTKPAMDGPETVZLQIWWGKGUCBOXSNPENFKACWRUQLBACEM");
    msg.action = 116U;
    msg.grouplist.assign("JYHPEWPXORTPFUAJCGGMSONHMRGQDAFBEVRLLSNMNRMJJFCSCAYSZXENTFFIEEPTUPPLCIKKZHJYMSOBSFBMRPXQINDYVEHLVIDNYBAQLFWLLVTOVBRXCUZDKBGZENUQWCIUHLKYHHXKATFDQTKBAUXWQXXCGSZZO");

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
    msg.setTimeStamp(0.43849816333233516);
    msg.setSource(65413U);
    msg.setSourceEntity(184U);
    msg.setDestination(23353U);
    msg.setDestinationEntity(124U);
    msg.groupname.assign("CGPFQTEFCRMVGIMPLYUTSFPMJIPJLFIGDBKWWZBXOXCUOBNDLQAJGFEUNTQIATSWMGDRFJGANQJRSHPCATOOUMSHCLXONXAYZDEIWHJGJWXEQNNMWPJDVTYCKLOSHYYMDXGJZQGMVBDVIBBENBAFR");
    msg.action = 194U;
    msg.grouplist.assign("ZRPSCIOYCDKDXLIRCYWGUMRLHRISYDCVPTQXMPERCDCWYBBOJMZMUCHTQYALUPOVPKBGSNLVPLMIYTHOVKIIOHNVULKPKWZBOUTGJHUICBNVNUEZJOYTJZZHQDYSSJGFGQAMZKJEIWEDADAHRIXCHQQ");

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
    msg.setTimeStamp(0.39071757159874454);
    msg.setSource(5444U);
    msg.setSourceEntity(115U);
    msg.setDestination(24285U);
    msg.setDestinationEntity(237U);
    msg.value = 0.2812420502160716;
    msg.sys_src = 48518U;

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
    msg.setTimeStamp(0.70839048393954);
    msg.setSource(59754U);
    msg.setSourceEntity(234U);
    msg.setDestination(59517U);
    msg.setDestinationEntity(129U);
    msg.value = 0.9680593682338857;
    msg.sys_src = 15771U;

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
    msg.setTimeStamp(0.7614133883766856);
    msg.setSource(50556U);
    msg.setSourceEntity(1U);
    msg.setDestination(29407U);
    msg.setDestinationEntity(200U);
    msg.value = 0.8642296206928013;
    msg.sys_src = 4443U;

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
    msg.setTimeStamp(0.16299123976649166);
    msg.setSource(3258U);
    msg.setSourceEntity(97U);
    msg.setDestination(7800U);
    msg.setDestinationEntity(51U);
    msg.value = 0.08969524047039412;
    msg.units = 226U;

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
    msg.setTimeStamp(0.19564080374715043);
    msg.setSource(43432U);
    msg.setSourceEntity(128U);
    msg.setDestination(32385U);
    msg.setDestinationEntity(192U);
    msg.value = 0.4454582115368132;
    msg.units = 111U;

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
    msg.setTimeStamp(0.0803350363522406);
    msg.setSource(20882U);
    msg.setSourceEntity(64U);
    msg.setDestination(46410U);
    msg.setDestinationEntity(173U);
    msg.value = 0.12123046719085273;
    msg.units = 247U;

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
    msg.setTimeStamp(0.24511076710429058);
    msg.setSource(63232U);
    msg.setSourceEntity(0U);
    msg.setDestination(14635U);
    msg.setDestinationEntity(159U);
    msg.base_lat = 0.763027629161115;
    msg.base_lon = 0.5126537964883102;
    msg.base_time = 0.8556705553262193;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 15554U;
    tmp_msg_0.priority = -100;
    tmp_msg_0.x = 22201;
    tmp_msg_0.y = 32252;
    tmp_msg_0.z = 25699;
    tmp_msg_0.t = 17485;
    IMC::TrexOperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 130U;
    tmp_tmp_msg_0_0.goal_id.assign("WFUERKIOHJDSELACREHOJLAPVIOXUHHNZQUHOFIYMPOSMNUQAOF");
    IMC::TrexToken tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeline.assign("KUGTOANPHZRLDWKBBRSUWNLXJPFOSMRGVGICLQACILVMYGQDWYPEUBUOEWPBVYZJAWADQVVICJPUVQPQCKOTXAKQBVQIKHIRCDPSTNKCJFHAWSFIZHSJXEUFDSSYMHYIHMOJABUAOBKILFYMXBWGZ");
    tmp_tmp_tmp_msg_0_0_0.predicate.assign("TBSUVBDALTFJWONSMXYQZNTWHUBVOXQDETEIFYZQIVMLTQPPKDABMCSOJXLXVLQSDUAHHENEPWADGAUVJTYMWDOVCWLFFZDWORIUTZYJOCOWSBKVU");
    tmp_tmp_msg_0_0.token.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.18171188055219367);
    msg.setSource(6727U);
    msg.setSourceEntity(9U);
    msg.setDestination(25620U);
    msg.setDestinationEntity(86U);
    msg.base_lat = 0.8363644207895872;
    msg.base_lon = 0.06230590462124552;
    msg.base_time = 0.3876474457903414;

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
    msg.setTimeStamp(0.09040551524495233);
    msg.setSource(44065U);
    msg.setSourceEntity(205U);
    msg.setDestination(9543U);
    msg.setDestinationEntity(236U);
    msg.base_lat = 0.3302610524778773;
    msg.base_lon = 0.7912454232793718;
    msg.base_time = 0.18059612062242525;

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
    msg.setTimeStamp(0.9689036233041237);
    msg.setSource(52931U);
    msg.setSourceEntity(141U);
    msg.setDestination(53439U);
    msg.setDestinationEntity(232U);
    msg.base_lat = 0.9434760608331911;
    msg.base_lon = 0.07925690678704977;
    msg.base_time = 0.23959727769573513;
    const char tmp_msg_0[] = {-34, -85, -97, 88, -104, -117, -89, 125, -19, 84, -115, 105, 125, -15, 76, -89, 95, -25, 84, 106, 16, 74, -71, 34, 69, -79, -18, 29, 115, -8, -7, 100, -69, 39, -18, -57, 101, 92, 34, 64, -5, 10, 101, 9, 17, -41, -70, -73, 42, 100, 61, 31, 109, 49, 12, 4, 109, -62, -27, -22, 23, 90, -50, -114, -3, 58, -119, 1, -29, -93, -114, -47, 78, 57, 116, -77, -56, -90, 76, 75, -119, -125, -6, -118, -67, -59, -23, -17, -104, -114, -7, -62, 101, 51, -88, 125, 117, 30, -27, -108, 79, 86, -84, 68, -87, 1, 24, -57, -31, -48, 41, 68, -127, 116, -22, 23, 14, 97, 82, 34, -39, 4, -95, -84, -84, 24, 0, -105, -47, -28, 58, -127, -18, 33, 53, -46, -6, 21, 121, -13, -19, -50, -29, -115, 84, -48, -90, 94, -96, -110, 14, 89, -102, 74, -19, 28, 103, -105, 78, -15, -79, -56, -4, 27, -9, 42, 72, -36, 38, 52, -69, 9, -68, -87, 120, -74, -49, 38, -120, 87, -97, -25, -124, -82, -7, 12, -119, 36, 73, 110, 53, -11, -15, -15, 64, 21, 62, -116, 4, 26, 67, 57, 105, 77, 6, 83, 100, 84, -116, 122, -12, 27, -33, -17};
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
    msg.setTimeStamp(0.7879978390568138);
    msg.setSource(48434U);
    msg.setSourceEntity(231U);
    msg.setDestination(39130U);
    msg.setDestinationEntity(37U);
    msg.base_lat = 0.9414623875362953;
    msg.base_lon = 0.5711166816293385;
    msg.base_time = 0.7236773710703449;
    const char tmp_msg_0[] = {-97, 97, -26, -128, -46, -86, -16, 62, 84, -116, -27, 93, 110, -104, -73, 5, 25, 34, 122, -119, 27, 77, 65, 106, -33, -11, -32, 83, -49, -34, 118, -91, 113, 90, -77, 120, 40, -10, 6, 76, -37, -91, -122, -28, 95, -14, -120, 44, 26, 122, 112, 100, 91, 49, 13, 99, 39, -46, -28, -49, -52, 26, 70, 112, -101, -63, -15, 48, -1, 21, -48, 99, -98, 34, 89, 31, 105, 94, 36, 23, 105, -65, -100, -113, 53, 83, 28, 118, 105, 35, 82, 62, 95, 10, -21, 63, -126, 50, -99, -44, 116, -48, 10, 119, 119, 102, 70, -58, 79, -121, 36, -93, -120, -23, -43, 121, 20, 23, 123, 12, 83, -106, 49, 117, 31, 92, 121, -31, -80, -25, 53, 94, 94, -62, -31, -54, -101, -20, 78, -18, -97, 115, -44, -119, -22, -85, -14, 9, 86, 71, 11, -107, 44, 46, -75, -79, 125, -24, 36, 65, 13, 16, -58, 40, -39, -94, -124, -1};
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
    msg.setTimeStamp(0.8861535973230751);
    msg.setSource(4777U);
    msg.setSourceEntity(101U);
    msg.setDestination(56712U);
    msg.setDestinationEntity(240U);
    msg.base_lat = 0.6129740038987472;
    msg.base_lon = 0.03524254217497935;
    msg.base_time = 0.5015120352308122;
    const char tmp_msg_0[] = {34, -41, -113, 104, 25, 96, 55, -60, -76, -113, 91, 44, 41, -9, 19, 91, -108, -96, 96, -92, 28, 72, 8, -36, 21, -112, 104, 102, -93, -34, -13, 21, 10, -18, 99, 92, 92, -61, -79, -3, -116, 96, 88, 84, -13, -13, 8, -28, -34, 47, 98, 14, -100, -126, 30, 59, 123, 53, 43, 59, 84, -119, -23, -51, -55, -8, -10, -34, -89, 42, -96, 94, 94, -72, -45, -114, 120, -38, -69, -47, -120, -45, 114, 70, -13, -111, 21, -27, -60, -105, 89, -30, 57, -42, 12, -51};
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
    msg.setTimeStamp(0.8109179791717886);
    msg.setSource(54545U);
    msg.setSourceEntity(105U);
    msg.setDestination(32024U);
    msg.setDestinationEntity(20U);
    msg.sys_id = 24817U;
    msg.priority = 124;
    msg.x = 19806;
    msg.y = 16280;
    msg.z = -14572;
    msg.t = 17968;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.2660391693378321;
    tmp_msg_0.lon = 0.7012982488324355;
    tmp_msg_0.z = 0.46096958565220625;
    tmp_msg_0.z_units = 74U;
    tmp_msg_0.speed = 0.8135146745834265;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.abort_z = 0.2796183312654633;
    tmp_msg_0.bearing = 0.6970426872776478;
    tmp_msg_0.glide_slope = 197U;
    tmp_msg_0.glide_slope_alt = 0.8782824173578079;
    tmp_msg_0.custom.assign("MXGHSBHFATIEJNZYGEJZLEMAJVOAXOQJZLSOPKNTGWUPFAOOSKDYRVJHIIEQKNZWCMMRSYGFLDRLFDCSMBBYBZEFBHAHGTYMFGSZJJXATYEUNDXOIREYCTJDKNLHHVVQLZWOTKHUFFXZCFDRAQVDEPKMSYPSIPNTUZRPKIQRNCCJLVKTZFHLOEVCVHGUUQRSBUUPQCPXUOUXKBMEICKAQDOWGTNIJNGILWLXWW");
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
    msg.setTimeStamp(0.6894536850213118);
    msg.setSource(35884U);
    msg.setSourceEntity(19U);
    msg.setDestination(24406U);
    msg.setDestinationEntity(226U);
    msg.sys_id = 24598U;
    msg.priority = -116;
    msg.x = -1007;
    msg.y = 185;
    msg.z = -6266;
    msg.t = 24709;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 2U;
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
    msg.setTimeStamp(0.9011407758182659);
    msg.setSource(28797U);
    msg.setSourceEntity(247U);
    msg.setDestination(6224U);
    msg.setDestinationEntity(5U);
    msg.sys_id = 30351U;
    msg.priority = 17;
    msg.x = -6739;
    msg.y = -2638;
    msg.z = -5300;
    msg.t = 23936;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.5098052218296423;
    tmp_msg_0.z_units = 48U;
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
    msg.setTimeStamp(0.11107884647955946);
    msg.setSource(2103U);
    msg.setSourceEntity(204U);
    msg.setDestination(61388U);
    msg.setDestinationEntity(209U);
    msg.req_id = 22009U;
    msg.type = 28U;
    msg.max_size = 35892U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.39103130275583853;
    tmp_msg_0.base_lon = 0.8399678230767761;
    tmp_msg_0.base_time = 0.642107314766728;
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
    msg.setTimeStamp(0.14570210460279476);
    msg.setSource(56047U);
    msg.setSourceEntity(233U);
    msg.setDestination(32275U);
    msg.setDestinationEntity(32U);
    msg.req_id = 34705U;
    msg.type = 1U;
    msg.max_size = 50289U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.53886451284146;
    tmp_msg_0.base_lon = 0.3135812227539062;
    tmp_msg_0.base_time = 0.31076702782238774;
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
    msg.setTimeStamp(0.4925977989458359);
    msg.setSource(20162U);
    msg.setSourceEntity(154U);
    msg.setDestination(21344U);
    msg.setDestinationEntity(94U);
    msg.req_id = 21916U;
    msg.type = 99U;
    msg.max_size = 15492U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.3483075327561975;
    tmp_msg_0.base_lon = 0.47094471070763344;
    tmp_msg_0.base_time = 0.42889516697918484;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 40169U;
    tmp_tmp_msg_0_0.priority = 64;
    tmp_tmp_msg_0_0.x = 18488;
    tmp_tmp_msg_0_0.y = 14038;
    tmp_tmp_msg_0_0.z = 25511;
    tmp_tmp_msg_0_0.t = -21364;
    IMC::UamTxRange tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 47701U;
    tmp_tmp_tmp_msg_0_0_0.sys_dst.assign("ZGRFIMLOMYKBWVSVPBRFPCRXQGDSHVBUIXTWKNNIMMARFAWTMVHBEOFPYYAOQXQXOKE");
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.3620993451197819;
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
    msg.setTimeStamp(0.23592484902565047);
    msg.setSource(59588U);
    msg.setSourceEntity(162U);
    msg.setDestination(14141U);
    msg.setDestinationEntity(240U);
    msg.original_source = 14210U;
    msg.destination = 31681U;
    msg.timeout = 0.17172498203682984;
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.8436083881498633;
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
    msg.setTimeStamp(0.9274059578388949);
    msg.setSource(56006U);
    msg.setSourceEntity(73U);
    msg.setDestination(26560U);
    msg.setDestinationEntity(12U);
    msg.original_source = 41929U;
    msg.destination = 35761U;
    msg.timeout = 0.555882179001461;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.6020182583677312;
    tmp_msg_0.lon = 0.8638278448294866;
    tmp_msg_0.z = 0.8682389347071;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.radius = 0.5604187503057002;
    tmp_msg_0.duration = 60054U;
    tmp_msg_0.speed = 0.41496310626683364;
    tmp_msg_0.speed_units = 175U;
    tmp_msg_0.custom.assign("WVSVHSLASOJJZSMXBAGFAORASPJCXOCNZPDKVTWDKAJJPEWZVCMRIIXKHEYIWDNCKRUUTCRLKRNIGQXRLBNKDSTBHZRRFFXVEOQSNPVMIJEZUYCTWXVXHNWBXUDVBFKAQPOLKYTZJQZOTQMYMTEDASOBTYUPGEYAIMPCMIZNZVMAEJEXGG");
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
    msg.setTimeStamp(0.7248220088576763);
    msg.setSource(61708U);
    msg.setSourceEntity(70U);
    msg.setDestination(3588U);
    msg.setDestinationEntity(250U);
    msg.original_source = 26024U;
    msg.destination = 21558U;
    msg.timeout = 0.7298722242901616;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.3738162636159187;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.6033338535760482;
    tmp_tmp_msg_0_0.amp = 0.2004202437120105;
    tmp_tmp_msg_0_0.cor = 83U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8513863505723676);
    msg.setSource(16568U);
    msg.setSourceEntity(251U);
    msg.setDestination(10059U);
    msg.setDestinationEntity(193U);
    msg.type = 119U;
    msg.comm_interface = 37965U;
    msg.model = 26683U;
    msg.list.assign("DJXTPYSMSMQXPNGKLCENQIUSZAAQGGLYDFTJPNJTVMQQHLFLAEHYHPYICZXIDFSGO");

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
    msg.setTimeStamp(0.9103195576007854);
    msg.setSource(32592U);
    msg.setSourceEntity(117U);
    msg.setDestination(27265U);
    msg.setDestinationEntity(22U);
    msg.type = 80U;
    msg.comm_interface = 54803U;
    msg.model = 25205U;
    msg.list.assign("IQONWWLMZUEQHBLKCFLAUOKJMMCBRDEXUGDFKHRJDHNAMPPDNOVJMXOGBPWQUPYYLWPUVXTEBWIRNBSWBPLEYGSWETLVMQUTBTSIGJOOBIKANVEPVFRRPQXZKTQIJCCENYFNCHIXRVXGEJKAYVDYSGDUXSOZQPKULIDTNAJYMYZQMHVHGDRIZNALSAGXFZZISZFFAJEEVMHNYCVBTLQSCOFDPHJXKJKBKHZTHZYWUAG");

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
    msg.setTimeStamp(0.5227382392438458);
    msg.setSource(46513U);
    msg.setSourceEntity(83U);
    msg.setDestination(63018U);
    msg.setDestinationEntity(67U);
    msg.type = 17U;
    msg.comm_interface = 52434U;
    msg.model = 32715U;
    msg.list.assign("ZCWVFMIAYVER");

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
    msg.setTimeStamp(0.8761083851941381);
    msg.setSource(7971U);
    msg.setSourceEntity(45U);
    msg.setDestination(40229U);
    msg.setDestinationEntity(52U);
    msg.type = 235U;
    msg.req_id = 768087797U;
    msg.ttl = 64324U;
    msg.code = 246U;
    msg.destination.assign("BYYUQXVTCSPMLJOEITYFLAMUHZWFWYTCULEPGJUNKLXHPSOADMQTBVOACQFBHFIDMHKCSWXZRGAEQPZDGLTFHSVRDTJZAMOABDPLKVXUISFGPPKFIQZGWVRDRWNICBHJMOLNRHNKQCAVZICOKNAXTPFCGIXERKQBYXQUEGPEBRWMBLCVWYCSOXZOXYAEUNDVYJMOPTAJDRTVGIHRUBQSMKMHEJZNBGIWZGVULRNJXDSYKSF");
    msg.source.assign("ESRWCRVQPTJQLNEWWEQCUUGCJQUQWDPLASYXRXBGAQIDDOFUZDEKMMKXBLYACMDFINALXEDZMQNPFRPLBROVOOAQCBSBVKHJIYJSEFGAK");
    msg.acknowledge = 14U;
    msg.status = 0U;
    const char tmp_msg_0[] = {-107, 81, 22, 64, -96, -125, 24, -117, 32, 71, -75, -68, -24};
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
    msg.setTimeStamp(0.18231879542623186);
    msg.setSource(62972U);
    msg.setSourceEntity(212U);
    msg.setDestination(20774U);
    msg.setDestinationEntity(160U);
    msg.type = 181U;
    msg.req_id = 3196538718U;
    msg.ttl = 220U;
    msg.code = 65U;
    msg.destination.assign("HBZGMQEYRBIDBHYCEOMENESDUCXOAPFLRYNNUZUKQIOKKYCTXSOKAATEILWTWGYCBLQVFXGCZYGHQOQDVMURXJTSCPRLOKPNPABYQXVAFVWOPIEGZEYADSNUSJMYXUZLLBFDRDTSIMXBTTWGDFHXFTRJIRKKCW");
    msg.source.assign("RVZCTOQLWNEDNHARIYOGQEARIUFEUSOJXBDXQLFUERCEHQYGNSJCKSXDZVIXCMOFEMVHKL");
    msg.acknowledge = 148U;
    msg.status = 248U;
    const char tmp_msg_0[] = {-16, -100, 14, -80, 55, 30, -54, 1, -44, 91, -21, 27, 42, 70, 70, 61, -58, 59, -96, 90, 6, 55, -110, -104, -97, 81, 116, -14, 59, -88, 69, 85, 48, -104, -18, 30, -73, 13, -101, -100, 8, 66, 46, 76, -7, -18, -4, 34, -96, 6, 47, -110, 110, -115, -66, -65, -3, -24, 71, -9, 52, 39, 48, -12, 106, 78, -31, 109, -10, 3, 27, 35, 68, 65, 73, 16, 29, -47, 71, -3, -127, -56};
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
    msg.setTimeStamp(0.7882315923274544);
    msg.setSource(17566U);
    msg.setSourceEntity(14U);
    msg.setDestination(55069U);
    msg.setDestinationEntity(25U);
    msg.type = 131U;
    msg.req_id = 3231850630U;
    msg.ttl = 35831U;
    msg.code = 107U;
    msg.destination.assign("YFOSTRFXVUBGWOLBLYPRTEYCCHVZNEFURDWROIOEKAMXODKKGTXPJXLVSRPUMSNBOFMJHAIRDGDALXRNGJFMJKQDHWHEUEBCMYJUICDXWXSSUPONCFQYLJYCYJAEYWZDWVDUALIANMSDNLZEBVBGA");
    msg.source.assign("MJHPGCKAJWUPLKFXHUDCBEEEELEYTEKMDVPTCVKXLLOVRBJPHWWSRFGMDDONANBFGHKQYMYSMNQHNSHQJZJIZKYQHYZS");
    msg.acknowledge = 221U;
    msg.status = 76U;
    const char tmp_msg_0[] = {-74, 79, 33, 36, 41, -48, 59, 79, 22, -28, 5, 126, 126, 87, -105, -43, -103, -91, 90, 58, -91, 75, -42, -21, 72, -44, -108, -121, 63, -14, 88, 33, -8, -16, 55, 121, 54, 1, -31, 47, 13, 69, -51, 27, 73, 43, 59, 99, -63, 105, 47, -24, 59, 83, 24, 95, -26, 93, -127, -75, 75, -44, -5, 11, -19, -85, 4, -5, 47, -6, -57, -46, -92, 71, -47, -89, 76, 12, -49, -4, 104, -70, -106, 95, -119, -12, -53, -32, 46, -55, 123, 4, -34, -41, -54, 7, 125, -26, -72, -73, -52, -56, -15, 48, 14, -91, -45, 46, -40, 54, 100, 103, -90, -24, 28, 13, 20, -116, 4, 114, 46, -8, 103, -87, 1, -40, -24, 35, 85, -121, -74, -12, -7, 42, -118, -120, -52, -33, 20, 43, -85, 55, 32, 65, -75, 107, -55, 7, -15, -75, 86, -77, 46, 97, 97, -39, 121, 31, 117, 84, 43, -96, -110, 38, -81, -26, -40, 106, -38, 115, -116, 52, 0, 41, -14, 54, -82, 126, 5, -77, 93, -43, 42, -54, 10, -112, -72, 72, 121, 117, -49, 6, -82, 79, 62, -26, -121, -60, 17, -84, -45, 71, 106, 75, 11, -107, -50, 39, 123};
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
    msg.setTimeStamp(0.44552301845358144);
    msg.setSource(11801U);
    msg.setSourceEntity(104U);
    msg.setDestination(59318U);
    msg.setDestinationEntity(114U);
    msg.id = 4U;
    msg.range = 0.8184967241190992;

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
    msg.setTimeStamp(0.9227687135250221);
    msg.setSource(45417U);
    msg.setSourceEntity(64U);
    msg.setDestination(49658U);
    msg.setDestinationEntity(167U);
    msg.id = 43U;
    msg.range = 0.880513673091661;

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
    msg.setTimeStamp(0.40030261926510724);
    msg.setSource(53429U);
    msg.setSourceEntity(98U);
    msg.setDestination(42450U);
    msg.setDestinationEntity(98U);
    msg.id = 87U;
    msg.range = 0.7199847675854351;

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
    msg.setTimeStamp(0.08861140837086823);
    msg.setSource(511U);
    msg.setSourceEntity(108U);
    msg.setDestination(21689U);
    msg.setDestinationEntity(143U);
    msg.beacon.assign("BKNIXTGDBHEWABBYHHMZNVWIXHRPIGAFMPYSQZYMCXPYHRQCQYQPFCJRIJQFWBIOVBRHEHPOZGECRTBXJSWPKGMDSA");
    msg.lat = 0.36973630596440943;
    msg.lon = 0.9661130527957569;
    msg.depth = 0.7520921004143322;
    msg.query_channel = 39U;
    msg.reply_channel = 131U;
    msg.transponder_delay = 172U;

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
    msg.setTimeStamp(0.9980210066998828);
    msg.setSource(13733U);
    msg.setSourceEntity(98U);
    msg.setDestination(18655U);
    msg.setDestinationEntity(104U);
    msg.beacon.assign("JZBDMGWYNGKDXTIQLYEQLCJYKVXUOQSPDTFCTREKMWPPWHFDFDSEIWRSEVQXMSNZZSRXQVBTWNAUOYPIOVUOMNDARYPNVGCCIAOUETAXBOO");
    msg.lat = 0.8653363406883389;
    msg.lon = 0.008651317475914744;
    msg.depth = 0.011797889721853139;
    msg.query_channel = 190U;
    msg.reply_channel = 109U;
    msg.transponder_delay = 172U;

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
    msg.setTimeStamp(0.08651355148234185);
    msg.setSource(44007U);
    msg.setSourceEntity(138U);
    msg.setDestination(63939U);
    msg.setDestinationEntity(137U);
    msg.beacon.assign("YIHLHELDLNGPKWDIOGGPUQSADEEHNVXVSQUQWAYFWBRJBEPOXFECJHPCOSZJABTNKHSKBTCGCATHCZQSBJXBHDRRAAKLEIWDUXTVLOTJQZYICIPOWARPDNREXC");
    msg.lat = 0.5880847817925374;
    msg.lon = 0.3621411633994478;
    msg.depth = 0.28234292917985526;
    msg.query_channel = 144U;
    msg.reply_channel = 212U;
    msg.transponder_delay = 99U;

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
    msg.setTimeStamp(0.7726362761995156);
    msg.setSource(41963U);
    msg.setSourceEntity(99U);
    msg.setDestination(12632U);
    msg.setDestinationEntity(125U);
    msg.op = 117U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UTSQJAPHKZKPQYLVZVDMOHZTVYAHBIZFRFIPNDDRCGTGYTLMFAPYRIMCWOAHNAICNUJEOBRZVEGBNMFHASKLTBVZGGRXOCUTFWAIYZJJMPXEVXETULCFHMEEIPBSDZKILQVPWHAJZOQWCNBSGXABRQFSAGNDQUMVGJXEFOCRWKTVUIDCKYIXZQKYLJTBWNSOKODCPXHLDBHUEYSLSSRFQHLNMLFXPEMVJQYDEWDYN");
    tmp_msg_0.lat = 0.2713511915250214;
    tmp_msg_0.lon = 0.9447563005759073;
    tmp_msg_0.depth = 0.13598788722819455;
    tmp_msg_0.query_channel = 158U;
    tmp_msg_0.reply_channel = 168U;
    tmp_msg_0.transponder_delay = 85U;
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
    msg.setTimeStamp(0.6416855946803338);
    msg.setSource(22573U);
    msg.setSourceEntity(227U);
    msg.setDestination(21132U);
    msg.setDestinationEntity(110U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.4439263220562949);
    msg.setSource(57049U);
    msg.setSourceEntity(5U);
    msg.setDestination(1754U);
    msg.setDestinationEntity(119U);
    msg.op = 153U;

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
    msg.setTimeStamp(0.41894211444295515);
    msg.setSource(10954U);
    msg.setSourceEntity(41U);
    msg.setDestination(50975U);
    msg.setDestinationEntity(234U);
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.6220870363632179;
    tmp_msg_0.y = 0.9492250930452604;
    tmp_msg_0.z = 0.47415244017535096;
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
    msg.setTimeStamp(0.5326068319609097);
    msg.setSource(54109U);
    msg.setSourceEntity(79U);
    msg.setDestination(54273U);
    msg.setDestinationEntity(12U);
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 240U;
    tmp_msg_0.clock = 0.5766288697383275;
    tmp_msg_0.tz = 50;
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
    msg.setTimeStamp(0.7412638777000181);
    msg.setSource(51808U);
    msg.setSourceEntity(107U);
    msg.setDestination(37180U);
    msg.setDestinationEntity(147U);
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.18723067178391406;
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
    msg.setTimeStamp(0.4173594432874532);
    msg.setSource(8728U);
    msg.setSourceEntity(99U);
    msg.setDestination(48324U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.355598698003627;
    msg.lon = 0.42163124699825305;
    msg.depth = 0.8765135815687096;
    msg.sentence.assign("YZTKSTBAFXWAVAQFSXWBTLMJSVPJOVHQGRH");
    msg.txtime = 0.47881170955243824;
    msg.modem_type.assign("QTFVPFGFEZIFEAVQKRNYKHDLCYIAXNGDYXLXCVUFVHN");
    msg.sys_src.assign("GMFCWSRAWZYRNQKQDVKUDFRJCIMQRAATWCKEKLXDTZAOYDBNYNDZSEZIOJBLWKMTE");
    msg.seq = 29018U;
    msg.sys_dst.assign("QFYONYAEHNEXRTYPMUFHJFK");
    msg.flags = 64U;
    const char tmp_msg_0[] = {-90, -125, -107, 44, -60, 76, 60, 67, 53, 125, 62, 90, -99, -98, -27, -98, 20, 30, -13, 58, 110, -46, -9, -62, -57, 65, 120, -54, -85, -6, -50, 71, -43, -8};
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
    msg.setTimeStamp(0.5669064257064892);
    msg.setSource(4724U);
    msg.setSourceEntity(76U);
    msg.setDestination(36131U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.16168692207479485;
    msg.lon = 0.46521811258289403;
    msg.depth = 0.3336857051156483;
    msg.sentence.assign("ARVGTWGBJUEZAPZQXMTYDTITXINXLQFPKLUMJWHBCILHBENNKFSRRDCWBJJBMXCOAFGTSJNHYXHZQIDLVZATDOYKBGQHVNXMWAAHOHZGTEUVYSNOJCFFYLUJIYUETYUSQPWJLRYNACKGZKWMZSXRPPGVMQFBLSPIAHSZCLJINGSNZLDLIHYROFOASVCYEVQRNMEVKWTCWEVKKRDHXPZ");
    msg.txtime = 0.3922092185751965;
    msg.modem_type.assign("GFZJTUSDRCQTIUSWKOXMEZWYPNVDCAUOEDNREWGBYIZLJMKQCUFCNPTSYRLRWFRAULBYBZRQXVNKTKXHNTIYAWHKPGBMPPKJMXYRTHZNZMEFHWMXJJICUJXYEDGSFLOEAIFIZZFCQWGVUAIALELOQBKEDCESDAABMFWMPOHLQL");
    msg.sys_src.assign("URRKVOEIGOUJIJSBYGJFIKPVNXESUNDSYCYXERQSLQWJMZDNDARNCOFQSBUKEFBWIOBDISHXHFGRTQMX");
    msg.seq = 47576U;
    msg.sys_dst.assign("GUDRHZTOCAGKLFICJYIZNSJVAYQTZWYLFKVHYBRJMPXHUEMNHLOWXKEDPZNVCDJENKXVRRETUINPYHJLOXUZOOCSAGYMMWUVCNNEKBPNJNFXIOHFVZQBIRBFYIUAMDTLKJOFRMQYDQIJRWQTDENHQTWQTAJZGUGQKLAXM");
    msg.flags = 140U;
    const char tmp_msg_0[] = {105, 39, -44, 69, 118, 74, 39, 98, -9, 11, 14, -15, 88, -52, -32, 1, 64, 37, -18, 11, 57, 84, 102, 58, -94, 27, 30, 48, -70, 99, 105, 43, -75, 36, -64, 85, 7, 121, 100, 98, 81, 5, -90, -46, -94, -86, 35, 119, 76, 125, 57, -44, 107, -99, 40, 12, 36, -94, 71, -23, -81, 3, 63, 36, -7, 98, 5, -35, 111, 108, 113, 15, 103, -25, -93, -36, -46, 87, -126, -89, -38, -16, 34, 48, -63, 98, 101, -97, -50, 67, 26, -87, -90, 32, 67, -14, -15, -71, -19, -91, 111, -75, -113, -118, 57, 66, -100, -24, -84, 83, -94, 92, 58, 11, -109, 1, -7, -117, -91, 83, 101, 68, 120, -99, 9, 28, -9, 40, 74, 29, -9, 126, 102, 14, -90, 3, 70, -73, -127, -97, 70, 34, -115, 5, -33, 108, 69, 97, 6, 89, -3, 34, 54, 2, 89, 61, 60, 89, 112, 81, -8, -54, 108, -84, -47, -85, 14, -27, -60, -58, -41, 54, -54, -19, -106, 68, -78, -83, 90, 114, 112, 2, 85, 53, -20, -86, -93, -87, 51, -124, -87, -6, 76, -22, 17, -74, 84, 80, 16, 12, -117, 19, -91, 25, -34, 70, -44, -69, -35, -124, 123, -32, -122, 77, 120, 55, -34, -59, -120, 27, 16, -11, -58, 77, 36, 107, 94, 72, 106, 48, 88, -25, -38, -99, -71};
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
    msg.setTimeStamp(0.918932352038089);
    msg.setSource(41063U);
    msg.setSourceEntity(62U);
    msg.setDestination(5507U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.028026879941675298;
    msg.lon = 0.03422704161554224;
    msg.depth = 0.4845541150868695;
    msg.sentence.assign("MDAKJBLTUHOPIAXVDKDJFUHVFFCIHLOOHMRFQZPZUQXVVPBAWKXGFIQPGKPOXBXEUWHRCWKPZJKOYIJKCRWUSNDXTIFRNWMEDBHVAKVRMNRYWPQFFSMNDKAIDZGTXQWSEQZTCRVZGDAMGNOHQTERESDIHJEGEKVMTCSBSHUEVLCOLXSNZUWGPXUGBWTXBAEIQATLSCYCTCBLJBMRNQJZYTNUBYGJNJ");
    msg.txtime = 0.588042302477324;
    msg.modem_type.assign("IJJFGDOAGYYPTLEGVANFDKXEPMNCIDILNHWXMJXWKZYLGFBKUJREOOJGLKFWSRPMADSDUFNOJGAUETCSTKNVEYVLTYQZNUYXBFTIBUYAMSOKHWHRHLHPFJVUSIVMKJFXVZMCKRJGHCTLSOSVXQGBQVEXXGZXODIALDPHPCKEZAWCI");
    msg.sys_src.assign("YBDVIUETPZRULWMQLBFQGOYOMHTWJOAPNEHGNOWUVNLQJQRKSCVCCHZAHIKDKJECXBRUBFSIFZUVBHBSOFZVYYTFRGLXXJIPTVFTSNWMSMJMNKYTGLBIPHMCDNPIUGZCGEGASNLLHNPFHRKUMIOZOPSPFXKGVIZTTL");
    msg.seq = 34842U;
    msg.sys_dst.assign("UVNACRDEVHIKDNFBEXOMCTBZKMOLGCOCNTPVLMJJXBKERYVBDJRELJLDPWGRUJJNATOYIGBXMEFIHMZSWTXQHKAGDZIVXF");
    msg.flags = 234U;
    const char tmp_msg_0[] = {68, -112, 111, 102, -106, 94, -8, -123, 26, 77, 59, 42, 56, -35, -23, 36, 125, -24, 124, 98, -63, 70, -1, 21, -75, -77, -102, 87, -82, -115, -30, 50, 9, -1, -8, 38, -101, 108, 70, 35, -42, 62, -33, 73, -118, 26, -8, -119, 76, 109, 78, 60, -28, -120, -28, -38, 40, -123, 56, -69, 64, 35, 44, -120, 123, 99, -114, 45, -44, -59, -73, -37, -10, -84, 7, 109, -62, 3, 98, 126, -1, -87, 74, 116, -4, -43, 50, 18, -67, -79, -15, 27, -117, 52, -9, -47, 96, 49, 44, 71, 21, -39, 96, -82, -11, -99, 111, -86, 57, 11, 72, 73, 122, 117, -42, -78, -91, -118, 32, 106, 40, -31, 124, -94, -48, -51, 77, -76, 47, -95, -68, 82, 69, -11, 122, -99, 12, 34, -125, -115, -85, 48, -65, 10, 13, 51, 126, 113, -49, -68, 3, -127, 57, 75};
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
    msg.setTimeStamp(0.8849847123072803);
    msg.setSource(8977U);
    msg.setSourceEntity(118U);
    msg.setDestination(62423U);
    msg.setDestinationEntity(21U);
    msg.op = 187U;
    msg.system.assign("CXEGTFBPBJXDVWOGLICKBVBCUNUUQOGIYSPLWNRTBZAVNSTWXUYFNONFZZNAPNVWHBWJEOMRPAHELPHVVIMWRHQPWNHLZZGUDODDLZJCEHFFIAXEXBNRXYCTYDEMVQZOEQJHHXORGKOLYUAADIFVMZDTJIHMROFHQAYSKEZKXVLOCCUWYILJVBXGFIXSBJMTPSPUCFTTDGQEYMTJRTKKUGIKMSJQLYRQLMMDPKWPDBWCEZSQA");
    msg.range = 0.27174581449806157;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MREULAQMBWJTESVATJCNUOJPMIGXFDESNQQSLFHOIYWPUKKIEPGOQDAOJLXCXSOFPHUYQSQUFMINFNATXRYJDVGRYCVTSNQRBJYHNPWYDEKCGKMIGXWABIQGJDMYGLLVARXBWVUIEKRRDWFNBAFBUYEVHEHA");
    tmp_msg_0.value.assign("PMTYNIXRPSZKSFZQPRGITNCBADAQIHJVKTZMEIQCYTXTIFUBVLUUMBXFZLCEVRSCFRUMLQIWEJWWVABJZROSRFUKOTSDKDPOTLQSQHMWJZZAAWYQILJGLVBYYFSFNECTMFSGKXUGDCADGURNRPGXNJEUMZBCTVYMFGWVBYXBNKTJXIEWXOOAAOEJN");
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
    msg.setTimeStamp(0.6709480514459123);
    msg.setSource(61313U);
    msg.setSourceEntity(25U);
    msg.setDestination(43385U);
    msg.setDestinationEntity(181U);
    msg.op = 88U;
    msg.system.assign("JZKAEFYCWTAUFZGNMZCOORZIOFHHSDPVMQVTJTQHYGTNKSBJFLAWMYHSLCOWXEBUEMDLNJSVIKVLSKVCMEBUPPLVFTPTQHISBZSGFVPLYMAIXPHWAEFDRTUGPGTCCIZGLGZD");
    msg.range = 0.9203945899366657;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 54956U;
    tmp_msg_0.rpm = 0.1420688257023719;
    tmp_msg_0.direction = 194U;
    tmp_msg_0.custom.assign("HKAMEOETQO");
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
    msg.setTimeStamp(0.4902108000542401);
    msg.setSource(7011U);
    msg.setSourceEntity(74U);
    msg.setDestination(27731U);
    msg.setDestinationEntity(225U);
    msg.op = 245U;
    msg.system.assign("NWRTXVMSIOIDXTHUUXPWYBGOCVAHEJMMHMTLNFDBJPSLIBTFDKNIIDSGSBCBWLDUDPOEIPNXTHKAELJGTNEWKZWSZAZLNPJQEHMLYUMAVZKKIDS");
    msg.range = 0.8782049921795533;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 58U;
    tmp_msg_0.label.assign("KKAJLOBZGXYXCHDBAOQCYDMWUPUNUJIOEFTEKHABNPQNOLSGZBTEUZBWPBKPAFATKDOWJMDELDNJVZCHWYFPORBSHMTSIYAXNGCMGSVXZLRJQKCNXOQTVT");
    tmp_msg_0.component.assign("BZMJMRXZXGMIOBMIJPIKWPLWIRSNXIWICSVCCDYAFXAZJKLDBDJDKWVPLGWCGFYMGZKNEUTFJYUQSIEYSLRNYKAVBHQJUJVMORQW");
    tmp_msg_0.act_time = 46862U;
    tmp_msg_0.deact_time = 36504U;
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
    msg.setTimeStamp(0.563186632120767);
    msg.setSource(29853U);
    msg.setSourceEntity(243U);
    msg.setDestination(2970U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.4063671058038375);
    msg.setSource(55736U);
    msg.setSourceEntity(160U);
    msg.setDestination(56363U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.8503360721285111);
    msg.setSource(46146U);
    msg.setSourceEntity(182U);
    msg.setDestination(53915U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.3034393252442824);
    msg.setSource(35252U);
    msg.setSourceEntity(52U);
    msg.setDestination(48426U);
    msg.setDestinationEntity(112U);
    msg.list.assign("DKEOICPKHPTBFBMXERVVLXZWCTDXWWCNDOTYEMZNGKYSJOZJLHVGOFZHRUPWYNTHNLKFXVRLHWATFVJGSKOAZICVQTJNEQAOHKSQBDBCRHUNWGGLOZESZRDCIABNSJLLUBFTQUYOLMIKKVFDRDUGQBRPVOVKGYPLMVEXNQEZAIJMUBINICYWMQNDZMQUGTYYSAXSHDBATFWGGRJUSRIFWPXARLBWAFYQYFMXPPXQDMSEEACPEMCHJJXIJOICU");

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
    msg.setTimeStamp(0.5716434006161509);
    msg.setSource(13411U);
    msg.setSourceEntity(63U);
    msg.setDestination(62359U);
    msg.setDestinationEntity(42U);
    msg.list.assign("SOOIXNEXCPVBELSWNIHUBPDAOQFLHMAKLXKVLLUYFNCXNHYBVCTCWFQWEGAGZHPFSRBVGXOYXUMESPKYBJTPGEBZKRXNFBLVGXEAPCCMCIMFUQTUODMDVZWAILRKIBIF");

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
    msg.setTimeStamp(0.007435091907125324);
    msg.setSource(55242U);
    msg.setSourceEntity(163U);
    msg.setDestination(30762U);
    msg.setDestinationEntity(14U);
    msg.list.assign("UJXREYNBABWVVHYWASVHOBUVNEPRPLLEXZKSFKSGDUGNCVSNMUUEKNMNRAPDSGYKDIREKJLLWHTPBKNOMGWDFAPMAOFTUPRZQXAORIFJKOYQEGPCUHIQOWRWZQVJYSHAUGGZJCSVJBVXAKRTTWQBTXZJTCFWQLTMSVOLHMKIDFXCSZHZRXMVDGYIMQOLHMAGUCDGNPSLITDDRWPBTQNQZFMJEHDNEEJUBLEYIYLP");

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
    msg.setTimeStamp(0.5424247417330585);
    msg.setSource(36008U);
    msg.setSourceEntity(128U);
    msg.setDestination(44966U);
    msg.setDestinationEntity(243U);
    msg.peer.assign("YSIQELILYMGYPJFGLUNPNCQWHDWDVPHIQOXUXPCSGMROTAWOSBZTDFJHQKZXEAYCTLNXJHXAIYVTKFNFWDWFDCQUKOVKHNTFZARUIEJAGTR");
    msg.rssi = 0.17375665487165526;
    msg.integrity = 56851U;

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
    msg.setTimeStamp(0.7772026818250918);
    msg.setSource(48235U);
    msg.setSourceEntity(98U);
    msg.setDestination(4557U);
    msg.setDestinationEntity(100U);
    msg.peer.assign("EGKRJSJNSVBQZJMVGYQIQZYPLELSZNZWYCDQOLWMUGSHPQDYAZYLVRSOPNRWFHKXZURXCOJAMXZLPIHRVEAFPBKTXIVKBB");
    msg.rssi = 0.12883551177330577;
    msg.integrity = 19692U;

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
    msg.setTimeStamp(0.01735510973620824);
    msg.setSource(15596U);
    msg.setSourceEntity(103U);
    msg.setDestination(14629U);
    msg.setDestinationEntity(124U);
    msg.peer.assign("WEGWHZNCQKMPGGHJJXZWLXXVPRCTKOFAKKBQUZ");
    msg.rssi = 0.6658681876823735;
    msg.integrity = 49238U;

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
    msg.setTimeStamp(0.5583782089609625);
    msg.setSource(52708U);
    msg.setSourceEntity(170U);
    msg.setDestination(23001U);
    msg.setDestinationEntity(43U);
    msg.req_id = 6859U;
    msg.destination.assign("JQLBHNARBYCTAOCJSOPNLHOZYNJRZLKGJKKDCVACSXRSU");
    msg.timeout = 0.7023557754905946;
    msg.range = 0.38366651013903597;
    msg.type = 221U;
    IMC::LinkLatency tmp_msg_0;
    tmp_msg_0.value = 0.41315083688610155;
    tmp_msg_0.sys_src = 53189U;
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
    msg.setTimeStamp(0.8628865873642888);
    msg.setSource(38360U);
    msg.setSourceEntity(2U);
    msg.setDestination(27945U);
    msg.setDestinationEntity(65U);
    msg.req_id = 22909U;
    msg.destination.assign("GYFMKCRGMLVBZXTLAKBWMFDIZTPVAFIBRDAXSIHXKEGJXPVDALZIYDHSLSQZRQDQXTEMLVUXKFWJKZWWEIKTBOTCUWSCEXCMISABUGMHAPVCBADOYSOHIGDZJIWUXVUZLCGOBNMFNJVHFDNRPPKIBRMBGPNHOYDTNILZXOKJTHYPC");
    msg.timeout = 0.08118588667410631;
    msg.range = 0.4193121178859326;
    msg.type = 151U;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 74U;
    tmp_msg_0.op = 179U;
    tmp_msg_0.err_mean = 0.3753379153351053;
    tmp_msg_0.dist_min_abs = 0.8478763731313141;
    tmp_msg_0.dist_min_mean = 0.1608529636985886;
    tmp_msg_0.roll_rate_mean = 0.5052796795012882;
    tmp_msg_0.time = 0.8966386990084307;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 117U;
    tmp_tmp_msg_0_0.lon_gain = 0.0926119990264983;
    tmp_tmp_msg_0_0.lat_gain = 0.8448585978122444;
    tmp_tmp_msg_0_0.bond_thick = 0.5958777579483645;
    tmp_tmp_msg_0_0.lead_gain = 0.5255322387875545;
    tmp_tmp_msg_0_0.deconfl_gain = 0.32196138414092923;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.15636314135279428;
    tmp_tmp_msg_0_0.safe_dist = 0.5619814435832416;
    tmp_tmp_msg_0_0.deconflict_offset = 0.9977231724081449;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.4558831972720919;
    tmp_tmp_msg_0_0.accel_lim_x = 0.579330684092331;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.042956704830864334);
    msg.setSource(18938U);
    msg.setSourceEntity(11U);
    msg.setDestination(22652U);
    msg.setDestinationEntity(20U);
    msg.req_id = 59565U;
    msg.destination.assign("UGZNZZAVGGVGKPHJRXUDQERSRUJAKGCSHGHFUPKOWCEPBPVXMROMIMLXZMECNWWJUJZRFONLVFKBKLZDWAPOXBWANLCFRSQYAYWYHJIZITTELIMZHHVENPNBTCFBQLDQWJYOEBEHIIMDFKHXRAYKYIYYLUSVQULPJCPUSQRGGCDODNAWCZEZIBINAVITSMHPQYGFJTE");
    msg.timeout = 0.7448977473728866;
    msg.range = 0.9813783665601302;
    msg.type = 26U;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.009302098642121615);
    msg.setSource(55875U);
    msg.setSourceEntity(221U);
    msg.setDestination(60503U);
    msg.setDestinationEntity(47U);
    msg.req_id = 23866U;
    msg.type = 53U;
    msg.status = 245U;
    msg.info.assign("ZCHCADPOZNDZJMUNOVEIDFFNDCICLZYGSGZHUBZQBKPAKEQUOBHWTZFXABPAYLDVXAWJCXMKZYRYIQVGZRQRDFMFRWGJRPMHPNNSXNNUBOIGTWRPRHINWOEYKLFSLVGLIVTOECDTTJNQKRKWQYMYTWOPALUXSUHMJDEVQSFDJMTGBXZIJSSCKGEWVVDFQEA");
    msg.range = 0.4226960017971073;

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
    msg.setTimeStamp(0.5331587012917404);
    msg.setSource(3950U);
    msg.setSourceEntity(227U);
    msg.setDestination(53017U);
    msg.setDestinationEntity(17U);
    msg.req_id = 13027U;
    msg.type = 78U;
    msg.status = 111U;
    msg.info.assign("XVJJTAJVCPQRZMIQKHCNVEUDQECA");
    msg.range = 0.09973560626490807;

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
    msg.setTimeStamp(0.1831423823963978);
    msg.setSource(45689U);
    msg.setSourceEntity(10U);
    msg.setDestination(25257U);
    msg.setDestinationEntity(187U);
    msg.req_id = 33063U;
    msg.type = 195U;
    msg.status = 249U;
    msg.info.assign("VRAUZWJCACSDSQYEFNLUEBGUXYMDHBWXBBWKQNXGFSQGMYPQWZFHETNQJUPEBHJKGAMUKFWEIKFHLVMCYTIYLPOYQHDOJCFLOUOURPSNJLDEDVAXNOGQGDDXFMTZEVYHALRYXUVUHTKSYOJBPMCZZKGZTMJRPKIGAXRETTJIEYKMIBCAQJGKPSRIUSNLHASIP");
    msg.range = 0.8439147473584059;

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
    msg.setTimeStamp(0.3333455504016152);
    msg.setSource(44073U);
    msg.setSourceEntity(140U);
    msg.setDestination(59724U);
    msg.setDestinationEntity(55U);
    msg.system.assign("TLHJGATJYNCIHVBGXPSWPZIQERKOYTEQLHBQOWEFOUXXPCVYMQXNGCDJNOOKIYTVOCXKCRUZDWPKSBSKKZDTKUJPMALADN");

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
    msg.setTimeStamp(0.7880294131652764);
    msg.setSource(44706U);
    msg.setSourceEntity(200U);
    msg.setDestination(63396U);
    msg.setDestinationEntity(83U);
    msg.system.assign("HLOLFQGRNFUGPBXOZYDODNJFPGDKQAIARTTNWIIYVDSKVVZXSEQIVFUEEDKTXZHDKIJMCXCUAMXJHOLPSJWSFRVTUWFTJVDUIZWPHCNLMUGVXMPESLWBRNTHUOBPJBYEOKSZBKRTBQYEWXDKFPPMYCZTNVGACAIZBYGIDFMCLRWMJJGYT");

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
    msg.setTimeStamp(0.1363623900715628);
    msg.setSource(10305U);
    msg.setSourceEntity(139U);
    msg.setDestination(8683U);
    msg.setDestinationEntity(114U);
    msg.system.assign("CHSNOLKBESRXZJSNGTXNYPNEVYQNZKAKWHSDKWPNHGLFI");

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
    msg.setTimeStamp(0.7487582119179734);
    msg.setSource(22136U);
    msg.setSourceEntity(222U);
    msg.setDestination(26402U);
    msg.setDestinationEntity(246U);
    msg.value = 14283;

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
    msg.setTimeStamp(0.3637775905347299);
    msg.setSource(5347U);
    msg.setSourceEntity(3U);
    msg.setDestination(11281U);
    msg.setDestinationEntity(245U);
    msg.value = -11254;

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
    msg.setTimeStamp(0.021261104348315296);
    msg.setSource(47780U);
    msg.setSourceEntity(41U);
    msg.setDestination(1049U);
    msg.setDestinationEntity(5U);
    msg.value = -17240;

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
    msg.setTimeStamp(0.6759340919402335);
    msg.setSource(44170U);
    msg.setSourceEntity(189U);
    msg.setDestination(27873U);
    msg.setDestinationEntity(195U);
    msg.value = 0.5872719092665315;

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
    msg.setTimeStamp(0.8258456192728025);
    msg.setSource(8620U);
    msg.setSourceEntity(114U);
    msg.setDestination(62796U);
    msg.setDestinationEntity(196U);
    msg.value = 0.1963855897207022;

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
    msg.setTimeStamp(0.03735805836926309);
    msg.setSource(1482U);
    msg.setSourceEntity(105U);
    msg.setDestination(61990U);
    msg.setDestinationEntity(98U);
    msg.value = 0.9294325036340196;

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
    msg.setTimeStamp(0.3424682597120443);
    msg.setSource(42083U);
    msg.setSourceEntity(168U);
    msg.setDestination(22550U);
    msg.setDestinationEntity(127U);
    msg.value = 0.28498813808264756;

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
    msg.setTimeStamp(0.379456585838569);
    msg.setSource(6000U);
    msg.setSourceEntity(26U);
    msg.setDestination(25035U);
    msg.setDestinationEntity(109U);
    msg.value = 0.7108487209635785;

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
    msg.setTimeStamp(0.10247302337085795);
    msg.setSource(18640U);
    msg.setSourceEntity(40U);
    msg.setDestination(21515U);
    msg.setDestinationEntity(209U);
    msg.value = 0.21601112299947522;

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
    msg.setTimeStamp(0.8309713543183372);
    msg.setSource(37575U);
    msg.setSourceEntity(69U);
    msg.setDestination(35835U);
    msg.setDestinationEntity(25U);
    msg.validity = 3750U;
    msg.type = 50U;
    msg.utc_year = 58947U;
    msg.utc_month = 173U;
    msg.utc_day = 173U;
    msg.utc_time = 0.3008446174678573;
    msg.lat = 0.6919854151073848;
    msg.lon = 0.7360080114093652;
    msg.height = 0.4764235351894963;
    msg.satellites = 166U;
    msg.cog = 0.03759970493588827;
    msg.sog = 0.09431962037147401;
    msg.hdop = 0.8896420580654639;
    msg.vdop = 0.15871315126571883;
    msg.hacc = 0.03760914798815218;
    msg.vacc = 0.6691715380320575;

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
    msg.setTimeStamp(0.7123121426757539);
    msg.setSource(2661U);
    msg.setSourceEntity(62U);
    msg.setDestination(17206U);
    msg.setDestinationEntity(234U);
    msg.validity = 30799U;
    msg.type = 119U;
    msg.utc_year = 19795U;
    msg.utc_month = 171U;
    msg.utc_day = 173U;
    msg.utc_time = 0.9827619013166123;
    msg.lat = 0.7649736629241524;
    msg.lon = 0.9594684731287216;
    msg.height = 0.5869336749737505;
    msg.satellites = 73U;
    msg.cog = 0.2602902360126075;
    msg.sog = 0.3522356984695264;
    msg.hdop = 0.6415246601628553;
    msg.vdop = 0.8861042599396903;
    msg.hacc = 0.5297754976854522;
    msg.vacc = 0.3079416696499898;

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
    msg.setTimeStamp(0.9559715314208843);
    msg.setSource(36170U);
    msg.setSourceEntity(48U);
    msg.setDestination(46087U);
    msg.setDestinationEntity(159U);
    msg.validity = 29673U;
    msg.type = 213U;
    msg.utc_year = 40184U;
    msg.utc_month = 119U;
    msg.utc_day = 3U;
    msg.utc_time = 0.19139197100190097;
    msg.lat = 0.7854169778682946;
    msg.lon = 0.605820961081278;
    msg.height = 0.5432333738444906;
    msg.satellites = 21U;
    msg.cog = 0.22250847243017102;
    msg.sog = 0.8667660860658197;
    msg.hdop = 0.3120635788245655;
    msg.vdop = 0.8811387568620548;
    msg.hacc = 0.2019602593689499;
    msg.vacc = 0.884425034223142;

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
    msg.setTimeStamp(0.4119886064788053);
    msg.setSource(47456U);
    msg.setSourceEntity(14U);
    msg.setDestination(41971U);
    msg.setDestinationEntity(49U);
    msg.time = 0.9211242871132229;
    msg.phi = 0.9890928870461152;
    msg.theta = 0.11965278059112106;
    msg.psi = 0.8183687437918812;
    msg.psi_magnetic = 0.5483987944968165;

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
    msg.setTimeStamp(0.29178941102942757);
    msg.setSource(12554U);
    msg.setSourceEntity(116U);
    msg.setDestination(56480U);
    msg.setDestinationEntity(130U);
    msg.time = 0.5034652643601482;
    msg.phi = 0.9428012524365553;
    msg.theta = 0.376043058969149;
    msg.psi = 0.6665327382231265;
    msg.psi_magnetic = 0.8253425202693462;

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
    msg.setTimeStamp(0.4205542306163049);
    msg.setSource(61307U);
    msg.setSourceEntity(106U);
    msg.setDestination(20314U);
    msg.setDestinationEntity(54U);
    msg.time = 0.1570630927377218;
    msg.phi = 0.19629086769744575;
    msg.theta = 0.09585671516591843;
    msg.psi = 0.31954012835111145;
    msg.psi_magnetic = 0.6904464602354673;

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
    msg.setTimeStamp(0.7517759764054011);
    msg.setSource(7333U);
    msg.setSourceEntity(153U);
    msg.setDestination(51695U);
    msg.setDestinationEntity(232U);
    msg.time = 0.6905296128029973;
    msg.x = 0.5094003404122215;
    msg.y = 0.20777293795498242;
    msg.z = 0.7144247354182564;
    msg.timestep = 0.2736371183273143;

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
    msg.setTimeStamp(0.09249512169437146);
    msg.setSource(26574U);
    msg.setSourceEntity(194U);
    msg.setDestination(19859U);
    msg.setDestinationEntity(60U);
    msg.time = 0.456393730657386;
    msg.x = 0.93225427590439;
    msg.y = 0.7766264847364951;
    msg.z = 0.9231575041450356;
    msg.timestep = 0.3916270492091669;

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
    msg.setTimeStamp(0.2766811017988744);
    msg.setSource(28357U);
    msg.setSourceEntity(86U);
    msg.setDestination(48144U);
    msg.setDestinationEntity(7U);
    msg.time = 0.2634757789604433;
    msg.x = 0.954633007713629;
    msg.y = 0.7986269263304872;
    msg.z = 0.7821317213629948;
    msg.timestep = 0.6090207475502386;

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
    msg.setTimeStamp(0.9489209199126867);
    msg.setSource(44368U);
    msg.setSourceEntity(148U);
    msg.setDestination(54476U);
    msg.setDestinationEntity(38U);
    msg.time = 0.09071361207387207;
    msg.x = 0.24003548368397254;
    msg.y = 0.6292264612541602;
    msg.z = 0.08034273918243506;

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
    msg.setTimeStamp(0.29108402949199597);
    msg.setSource(41036U);
    msg.setSourceEntity(17U);
    msg.setDestination(14053U);
    msg.setDestinationEntity(88U);
    msg.time = 0.46064995711929313;
    msg.x = 0.2136227013078985;
    msg.y = 0.4864945877232253;
    msg.z = 0.29767131212444065;

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
    msg.setTimeStamp(0.8854415396724858);
    msg.setSource(26629U);
    msg.setSourceEntity(63U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(244U);
    msg.time = 0.7349405374499757;
    msg.x = 0.2522176992341352;
    msg.y = 0.2761006460058303;
    msg.z = 0.35823100821139253;

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
    msg.setTimeStamp(0.9775849734679048);
    msg.setSource(9523U);
    msg.setSourceEntity(20U);
    msg.setDestination(63453U);
    msg.setDestinationEntity(177U);
    msg.time = 0.2615658186667914;
    msg.x = 0.5872854005264985;
    msg.y = 0.8712004792308199;
    msg.z = 0.11451939562312585;

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
    msg.setTimeStamp(0.246723535670614);
    msg.setSource(33815U);
    msg.setSourceEntity(142U);
    msg.setDestination(701U);
    msg.setDestinationEntity(167U);
    msg.time = 0.8407088324413249;
    msg.x = 0.35822566753706864;
    msg.y = 0.7451407667680784;
    msg.z = 0.17516321915667799;

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
    msg.setTimeStamp(0.2982733475771444);
    msg.setSource(24417U);
    msg.setSourceEntity(209U);
    msg.setDestination(5474U);
    msg.setDestinationEntity(0U);
    msg.time = 0.8804795159024984;
    msg.x = 0.23272951393034336;
    msg.y = 0.8471641586342671;
    msg.z = 0.10821651819165412;

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
    msg.setTimeStamp(0.9900729732048865);
    msg.setSource(5667U);
    msg.setSourceEntity(87U);
    msg.setDestination(48902U);
    msg.setDestinationEntity(180U);
    msg.time = 0.8068309438411062;
    msg.x = 0.8738446971971933;
    msg.y = 0.3703235774256337;
    msg.z = 0.5187261170506645;

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
    msg.setTimeStamp(0.2148051113191083);
    msg.setSource(6520U);
    msg.setSourceEntity(57U);
    msg.setDestination(48849U);
    msg.setDestinationEntity(108U);
    msg.time = 0.19202119546631946;
    msg.x = 0.9142195345213405;
    msg.y = 0.024353668397074424;
    msg.z = 0.3876790957799857;

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
    msg.setTimeStamp(0.3906482320369963);
    msg.setSource(2592U);
    msg.setSourceEntity(31U);
    msg.setDestination(46315U);
    msg.setDestinationEntity(248U);
    msg.time = 0.7359968711211488;
    msg.x = 0.1035546611950845;
    msg.y = 0.7921416422056328;
    msg.z = 0.8674331046394257;

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
    msg.setTimeStamp(0.01412888806096324);
    msg.setSource(34555U);
    msg.setSourceEntity(5U);
    msg.setDestination(25936U);
    msg.setDestinationEntity(40U);
    msg.validity = 91U;
    msg.x = 0.04738807880084517;
    msg.y = 0.2511531032702885;
    msg.z = 0.014761227779464425;

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
    msg.setTimeStamp(0.20303853225517665);
    msg.setSource(46498U);
    msg.setSourceEntity(157U);
    msg.setDestination(56150U);
    msg.setDestinationEntity(162U);
    msg.validity = 207U;
    msg.x = 0.18351957457240542;
    msg.y = 0.7691208962202783;
    msg.z = 0.8354516637744345;

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
    msg.setTimeStamp(0.2511408098885366);
    msg.setSource(65364U);
    msg.setSourceEntity(26U);
    msg.setDestination(44592U);
    msg.setDestinationEntity(185U);
    msg.validity = 32U;
    msg.x = 0.9385586980900609;
    msg.y = 0.3189082171961728;
    msg.z = 0.3383172269931516;

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
    msg.setTimeStamp(0.029700572649130175);
    msg.setSource(52901U);
    msg.setSourceEntity(152U);
    msg.setDestination(1894U);
    msg.setDestinationEntity(134U);
    msg.validity = 174U;
    msg.x = 0.6643183140961931;
    msg.y = 0.3307610138119188;
    msg.z = 0.008436075952201416;

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
    msg.setTimeStamp(0.9711221798582553);
    msg.setSource(64546U);
    msg.setSourceEntity(205U);
    msg.setDestination(26739U);
    msg.setDestinationEntity(26U);
    msg.validity = 117U;
    msg.x = 0.5883344641165631;
    msg.y = 0.6545925085264956;
    msg.z = 0.28292599442633715;

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
    msg.setTimeStamp(0.9044153480144456);
    msg.setSource(56091U);
    msg.setSourceEntity(45U);
    msg.setDestination(6611U);
    msg.setDestinationEntity(232U);
    msg.validity = 72U;
    msg.x = 0.9266455872442279;
    msg.y = 0.2592567193981814;
    msg.z = 0.1877666083227172;

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
    msg.setTimeStamp(0.16033722202517942);
    msg.setSource(24509U);
    msg.setSourceEntity(36U);
    msg.setDestination(42044U);
    msg.setDestinationEntity(239U);
    msg.time = 0.08334303571282786;
    msg.x = 0.617944219314333;
    msg.y = 0.035531616279487754;
    msg.z = 0.5617833492171423;

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
    msg.setTimeStamp(0.2717489350325314);
    msg.setSource(58510U);
    msg.setSourceEntity(167U);
    msg.setDestination(25012U);
    msg.setDestinationEntity(0U);
    msg.time = 0.4497690753471646;
    msg.x = 0.25426421332069193;
    msg.y = 0.09630072670199652;
    msg.z = 0.6373429796928188;

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
    msg.setTimeStamp(0.38432905651274973);
    msg.setSource(31489U);
    msg.setSourceEntity(73U);
    msg.setDestination(52809U);
    msg.setDestinationEntity(208U);
    msg.time = 0.16214731793221138;
    msg.x = 0.47862882886080527;
    msg.y = 0.502993317491526;
    msg.z = 0.816427930109179;

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
    msg.setTimeStamp(0.7895589383313494);
    msg.setSource(60714U);
    msg.setSourceEntity(129U);
    msg.setDestination(39649U);
    msg.setDestinationEntity(80U);
    msg.validity = 78U;
    msg.value = 0.5888992577738251;

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
    msg.setTimeStamp(0.8540003781285842);
    msg.setSource(32707U);
    msg.setSourceEntity(122U);
    msg.setDestination(59755U);
    msg.setDestinationEntity(9U);
    msg.validity = 147U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9900384769926751;
    tmp_msg_0.beam_height = 0.018949147822704848;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9534378875708105;

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
    msg.setTimeStamp(0.4136530227522256);
    msg.setSource(2323U);
    msg.setSourceEntity(97U);
    msg.setDestination(29541U);
    msg.setDestinationEntity(47U);
    msg.validity = 124U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2176002692241723;
    tmp_msg_0.y = 0.8815341536116085;
    tmp_msg_0.z = 0.8415372433046253;
    tmp_msg_0.phi = 0.8072431574562079;
    tmp_msg_0.theta = 0.1835301296607459;
    tmp_msg_0.psi = 0.6030922940830855;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.537717419023918;
    tmp_msg_1.beam_height = 0.921465044496238;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.7952284079751112;

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
    msg.setTimeStamp(0.4179084606709229);
    msg.setSource(50537U);
    msg.setSourceEntity(129U);
    msg.setDestination(3592U);
    msg.setDestinationEntity(171U);
    msg.value = 0.1963299796652358;

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
    msg.setTimeStamp(0.5842411005155153);
    msg.setSource(30392U);
    msg.setSourceEntity(142U);
    msg.setDestination(12167U);
    msg.setDestinationEntity(229U);
    msg.value = 0.1161532052893538;

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
    msg.setTimeStamp(0.7866467440749959);
    msg.setSource(32754U);
    msg.setSourceEntity(26U);
    msg.setDestination(15310U);
    msg.setDestinationEntity(5U);
    msg.value = 0.7169721697344228;

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
    msg.setTimeStamp(0.5086575535318756);
    msg.setSource(15347U);
    msg.setSourceEntity(231U);
    msg.setDestination(15801U);
    msg.setDestinationEntity(64U);
    msg.value = 0.3377384732547125;

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
    msg.setTimeStamp(0.43590904603724534);
    msg.setSource(59529U);
    msg.setSourceEntity(61U);
    msg.setDestination(42732U);
    msg.setDestinationEntity(237U);
    msg.value = 0.03030309595694447;

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
    msg.setTimeStamp(0.5787451671985313);
    msg.setSource(62169U);
    msg.setSourceEntity(236U);
    msg.setDestination(52595U);
    msg.setDestinationEntity(106U);
    msg.value = 0.1012849883631528;

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
    msg.setTimeStamp(0.8364065912037024);
    msg.setSource(19627U);
    msg.setSourceEntity(63U);
    msg.setDestination(64057U);
    msg.setDestinationEntity(80U);
    msg.value = 0.3471445977717551;

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
    msg.setTimeStamp(0.7888389996678787);
    msg.setSource(5747U);
    msg.setSourceEntity(183U);
    msg.setDestination(45459U);
    msg.setDestinationEntity(60U);
    msg.value = 0.5746651518939507;

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
    msg.setTimeStamp(0.7706903715002459);
    msg.setSource(43353U);
    msg.setSourceEntity(198U);
    msg.setDestination(44373U);
    msg.setDestinationEntity(211U);
    msg.value = 0.08410411967264031;

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
    msg.setTimeStamp(0.6217785808489084);
    msg.setSource(874U);
    msg.setSourceEntity(146U);
    msg.setDestination(47250U);
    msg.setDestinationEntity(64U);
    msg.value = 0.007961390479941599;

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
    msg.setTimeStamp(0.43449273656384957);
    msg.setSource(30223U);
    msg.setSourceEntity(145U);
    msg.setDestination(26390U);
    msg.setDestinationEntity(103U);
    msg.value = 0.3904434886470183;

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
    msg.setTimeStamp(0.41600329168263483);
    msg.setSource(8189U);
    msg.setSourceEntity(115U);
    msg.setDestination(36547U);
    msg.setDestinationEntity(133U);
    msg.value = 0.14741814892612726;

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
    msg.setTimeStamp(0.8286067253371653);
    msg.setSource(32147U);
    msg.setSourceEntity(140U);
    msg.setDestination(48405U);
    msg.setDestinationEntity(112U);
    msg.value = 0.28142414396244064;

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
    msg.setTimeStamp(0.36255715558306645);
    msg.setSource(63550U);
    msg.setSourceEntity(25U);
    msg.setDestination(6469U);
    msg.setDestinationEntity(203U);
    msg.value = 0.2763325937785419;

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
    msg.setTimeStamp(0.541443330413585);
    msg.setSource(53752U);
    msg.setSourceEntity(180U);
    msg.setDestination(5229U);
    msg.setDestinationEntity(237U);
    msg.value = 0.04038809096347218;

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
    msg.setTimeStamp(0.8251182563107873);
    msg.setSource(60683U);
    msg.setSourceEntity(4U);
    msg.setDestination(28159U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6251488910217452;

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
    msg.setTimeStamp(0.7236806674090951);
    msg.setSource(18590U);
    msg.setSourceEntity(140U);
    msg.setDestination(49777U);
    msg.setDestinationEntity(237U);
    msg.value = 0.2932277258235626;

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
    msg.setTimeStamp(0.2733387905027084);
    msg.setSource(2830U);
    msg.setSourceEntity(113U);
    msg.setDestination(7594U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7420231304522037;

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
    msg.setTimeStamp(0.5594617236278546);
    msg.setSource(26315U);
    msg.setSourceEntity(116U);
    msg.setDestination(52175U);
    msg.setDestinationEntity(247U);
    msg.value = 0.9059781081476952;

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
    msg.setTimeStamp(0.5866924768066242);
    msg.setSource(4965U);
    msg.setSourceEntity(80U);
    msg.setDestination(25882U);
    msg.setDestinationEntity(222U);
    msg.value = 0.991947937282297;

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
    msg.setTimeStamp(0.7593939834033605);
    msg.setSource(47208U);
    msg.setSourceEntity(228U);
    msg.setDestination(26623U);
    msg.setDestinationEntity(124U);
    msg.value = 0.08179462534257675;

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
    msg.setTimeStamp(0.932945186193536);
    msg.setSource(4093U);
    msg.setSourceEntity(69U);
    msg.setDestination(7382U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5348875217895068;

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
    msg.setTimeStamp(0.3678725234737129);
    msg.setSource(33800U);
    msg.setSourceEntity(84U);
    msg.setDestination(41363U);
    msg.setDestinationEntity(48U);
    msg.value = 0.5454908540932086;

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
    msg.setTimeStamp(0.9997360799528104);
    msg.setSource(35337U);
    msg.setSourceEntity(219U);
    msg.setDestination(908U);
    msg.setDestinationEntity(167U);
    msg.value = 0.2653540858195621;

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
    msg.setTimeStamp(0.9261992277569255);
    msg.setSource(5977U);
    msg.setSourceEntity(60U);
    msg.setDestination(52722U);
    msg.setDestinationEntity(82U);
    msg.direction = 0.9678908744641268;
    msg.speed = 0.062097195980184816;
    msg.turbulence = 0.8003905318522063;

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
    msg.setTimeStamp(0.11701201789001259);
    msg.setSource(14905U);
    msg.setSourceEntity(252U);
    msg.setDestination(6266U);
    msg.setDestinationEntity(23U);
    msg.direction = 0.2674423866837876;
    msg.speed = 0.1922279062472737;
    msg.turbulence = 0.7247032162294745;

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
    msg.setTimeStamp(0.9321607907427414);
    msg.setSource(18233U);
    msg.setSourceEntity(145U);
    msg.setDestination(50724U);
    msg.setDestinationEntity(20U);
    msg.direction = 0.06911518184324372;
    msg.speed = 0.6933130368088776;
    msg.turbulence = 0.8945069547371084;

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
    msg.setTimeStamp(0.6762305374632036);
    msg.setSource(64369U);
    msg.setSourceEntity(74U);
    msg.setDestination(50754U);
    msg.setDestinationEntity(122U);
    msg.value = 0.924350695561051;

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
    msg.setTimeStamp(0.34500179569236944);
    msg.setSource(18774U);
    msg.setSourceEntity(225U);
    msg.setDestination(37765U);
    msg.setDestinationEntity(222U);
    msg.value = 0.5449792873021948;

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
    msg.setTimeStamp(0.2253499085948093);
    msg.setSource(8125U);
    msg.setSourceEntity(209U);
    msg.setDestination(42006U);
    msg.setDestinationEntity(214U);
    msg.value = 0.9064073146017033;

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
    msg.setTimeStamp(0.42207639542806263);
    msg.setSource(24286U);
    msg.setSourceEntity(156U);
    msg.setDestination(31092U);
    msg.setDestinationEntity(12U);
    msg.value.assign("MDBIGFWRNSYIOTKYBBIFVGIWRBMWRJWZKMLEDOLPLUNCPJLGXKPDLOFJPEXPTZXQLLIXVRKXAQQH");

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
    msg.setTimeStamp(0.41728987367817205);
    msg.setSource(41692U);
    msg.setSourceEntity(70U);
    msg.setDestination(34785U);
    msg.setDestinationEntity(200U);
    msg.value.assign("ZFPKZYIGNJECJOMMDEOYEUGJIZQRCFOKFLZDDDCRUQBFRSQOAHBHAOFWPJYEKRDMPIMFUQLSBCNDTAXMPMCBQQ");

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
    msg.setTimeStamp(0.29187494424752924);
    msg.setSource(53668U);
    msg.setSourceEntity(35U);
    msg.setDestination(53885U);
    msg.setDestinationEntity(182U);
    msg.value.assign("IINRULAFSMYFASHSVQDKIBYSZDUMECTWVCLGUZTFQTXTTGVNNSAHDBUCALINIHZDKPAOCJKOKQPZBQGCMYNWYQHIXYBFWDDQTMRQEPAMOFHMMONKMJLGXZTONXUEUHTXOWWAGUGDORVPFBZRKLVRGFGEBRJTLKUJCBJIBLVRJKVFYFUHYSZVWXIVWQBLKN");

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
    msg.setTimeStamp(0.31346952460166166);
    msg.setSource(18833U);
    msg.setSourceEntity(31U);
    msg.setDestination(47629U);
    msg.setDestinationEntity(214U);
    const char tmp_msg_0[] = {-26, -63, 103, -54, 15, 113, 107, -87, 15, -30, 73, -109, 26, 42, 103, -79, 73, -17, 56, 34, 63, -4, -40, 84, 104, 123, -108, 8, -106, 90, 64, -128, 5, -40, -115, 63, -81, 96, 120, 96, -64, -15, -52, -103, 26, -1, 47, -8, -120, -97, -53, -90, -101, 124, -54, 89};
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
    msg.setTimeStamp(0.29387768845104834);
    msg.setSource(3862U);
    msg.setSourceEntity(226U);
    msg.setDestination(48757U);
    msg.setDestinationEntity(48U);
    const char tmp_msg_0[] = {126, -33, -79, -118, -92, 12, 71, 89, 60, 98, -109, 37, -34, -15, -88, 29, 28, -126, 35, 13, 65, 74, 60, 25, 87, -88, -43, 6, 40, -84, -60};
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
    msg.setTimeStamp(0.07049386162107096);
    msg.setSource(8138U);
    msg.setSourceEntity(98U);
    msg.setDestination(51385U);
    msg.setDestinationEntity(229U);
    const char tmp_msg_0[] = {49, 48, -88, 77, 34, 61, 98, 64, -43, 91, 82, 21, -105, 43, -13, -73, 33, -84, -99, 117, -57, 106, -18, -63, -76, -37, -35, -64, 1, 97, 106, -120, -12, 39, 25, -96, 9, -18, 37, 102, -125, -101, -103, -43, 99, -87, -37, -43, -24, -45, 107, -122, 38, 4, -123, 11, 42, 114, 39, -20, -58, 39, 50, -105, -115, -112, -85, -26, 7, 28, -55, 6, -55, 52, -34, 105, -61, -40, -58, -58, -90, 123, -74, 47, -86, 13, -117, 71, -28, 34, -26, 52, 49, -12, -94, 50, 52, -112, 67, -65, -26, -122, 90, 55, 5, 92, -92, 97, 102};
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
    msg.setTimeStamp(0.48527871404308764);
    msg.setSource(708U);
    msg.setSourceEntity(128U);
    msg.setDestination(36108U);
    msg.setDestinationEntity(65U);
    msg.value = 0.032572807736745535;

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
    msg.setTimeStamp(0.874499126008622);
    msg.setSource(46872U);
    msg.setSourceEntity(13U);
    msg.setDestination(19449U);
    msg.setDestinationEntity(222U);
    msg.value = 0.7442409451328458;

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
    msg.setTimeStamp(0.38016402353524625);
    msg.setSource(23210U);
    msg.setSourceEntity(136U);
    msg.setDestination(4428U);
    msg.setDestinationEntity(47U);
    msg.value = 0.5949002618423702;

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
    msg.setTimeStamp(0.19941902083605767);
    msg.setSource(7401U);
    msg.setSourceEntity(185U);
    msg.setDestination(51209U);
    msg.setDestinationEntity(146U);
    msg.type = 121U;
    msg.frequency = 2155806106U;
    msg.min_range = 22604U;
    msg.max_range = 47695U;
    msg.bits_per_point = 99U;
    msg.scale_factor = 0.8267192566395116;
    const char tmp_msg_0[] = {-112, 33, -2, 2, 112, -86, -49, -68, -77, -26, 28, 92, -27, -116, -114, 76, -65, 72, 122, -89, -128, -66, -22, -83, 20, 93, 35, -84, -96, -75, 123, 89, -73, 37, -66, 86, -73, 36, -5, -14, -120, -79, -43, 13, -31, 91, 37, -51, -111, 85, -107, 6, -16, -118, 116, 61, -32, -120, 100, -125, -99, -111, -92, -74, -128, -25, 69, 34, 122, 119, -45, 60, -123, 16, -37, 109, -108, -111, -39, 39, 44, 114, 76, 113, 126, 67, 87, 104, -11, -52, 94, -96, 45, -50, -40, -27, -70, 122, 104, 19, 107, -30, -74, -2, 44, -106, 30, 92, 14, -91, -4, 78, 112, 77, 105, 20, -79, 58, -54, -13, -55, 61, 27, -107, -67, 44, -25, -40, 17, 70, -111, -8, 80, 73, -54, 112, -124, 118, -122, 54, 65, 74, -121, 42, -74, -21, 5, -3, -101, -88, -116, -25, 12, 105, -32, -96, -114, 60, -52, -111, -35, 5, 38, -69, 12, -121, 113, 117, -49, -22, -8, -97, 109, 112, -110, 28, 114, 5, -119, 106, -66, -69, -27, 16, -102, 13, -55, -53, -100, -97, -126, -63, 61, 62, -77, -15, -5, -6, 17, 122, 16, 83, 105, -29, -122, -44, -122, 44, 84, 104, 14, -82, -50, -42, 59, -114, -15, 110, -56, 67, -90, 124};
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
    msg.setTimeStamp(0.2427620200526095);
    msg.setSource(44121U);
    msg.setSourceEntity(10U);
    msg.setDestination(44889U);
    msg.setDestinationEntity(60U);
    msg.type = 15U;
    msg.frequency = 4021207714U;
    msg.min_range = 65206U;
    msg.max_range = 54898U;
    msg.bits_per_point = 87U;
    msg.scale_factor = 0.09999529246106431;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.41950525744666634;
    tmp_msg_0.beam_height = 0.9553593073772226;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {91, 98, 90, -55, 77, 10, -97, -93, -47, -66, 44, -116, 110, -20, 61, -38, -72, 52, -82, -33, -94, 78, -79, 38, -20, 6, 89, 0, 19, -35, 15, 103, -8, 61, 60, -72, 37, 50, -8, -25, -19, 64, 13, 119, 22, 27, -71, -30, -111, 2, -86, 109, -126, -55, 122, 41, -30, -106, -66, 20, 9, -101, -107, -17, -61, 24, -125, 111, -84, -58, -23, -21, 25, 43, 48, -31, 96, -71, -45, 31, -90};
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
    msg.setTimeStamp(0.8140494566465915);
    msg.setSource(21336U);
    msg.setSourceEntity(188U);
    msg.setDestination(36802U);
    msg.setDestinationEntity(4U);
    msg.type = 169U;
    msg.frequency = 4080539317U;
    msg.min_range = 22162U;
    msg.max_range = 61450U;
    msg.bits_per_point = 236U;
    msg.scale_factor = 0.27121684827066583;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.39516643865312007;
    tmp_msg_0.beam_height = 0.39090265401437474;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {18, 53, 93, 24, 4, 100, -81, 121, -114, -122, 5, 75, 68, -16, -98, 22, 10, -119, 16, 107, -126, -97, 1, -51, 35, -112, -51, -65, 56, -23, -114, 115, -107, 100, 108, -117, -95, -35, -36, -13, 104, -94, -12, 32, -80, 45, 16, -9, 52, -11, -62, -82, -64, 94, -58};
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
    msg.setTimeStamp(0.1492188086482238);
    msg.setSource(28771U);
    msg.setSourceEntity(126U);
    msg.setDestination(12924U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.6603652555487359);
    msg.setSource(9969U);
    msg.setSourceEntity(182U);
    msg.setDestination(59169U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.4847023384312601);
    msg.setSource(4116U);
    msg.setSourceEntity(200U);
    msg.setDestination(1481U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.18555237118432122);
    msg.setSource(19367U);
    msg.setSourceEntity(150U);
    msg.setDestination(14040U);
    msg.setDestinationEntity(86U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.9489440000880899);
    msg.setSource(13842U);
    msg.setSourceEntity(69U);
    msg.setDestination(14153U);
    msg.setDestinationEntity(13U);
    msg.op = 151U;

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
    msg.setTimeStamp(0.9058725235697853);
    msg.setSource(14481U);
    msg.setSourceEntity(140U);
    msg.setDestination(39994U);
    msg.setDestinationEntity(166U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.7876139360720639);
    msg.setSource(52940U);
    msg.setSourceEntity(193U);
    msg.setDestination(11278U);
    msg.setDestinationEntity(145U);
    msg.value = 0.8838515938268642;
    msg.confidence = 0.09433362357145902;
    msg.opmodes.assign("BFEPDEZZUBULGRBEEKHIMTARUJZPZDFVWIMTMIAFMYNWGJCDQSGMMBCSDSQKXBRUKIHOTRJOPJYXIKFAPKRHUAGQHDYVXNWQWOVYVREKZQZQNJSLMWABCLCRQWHTAFCJLETCYWWICKJBZLUNOPNOTYRKZVTB");

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
    msg.setTimeStamp(0.38484546757145477);
    msg.setSource(25616U);
    msg.setSourceEntity(246U);
    msg.setDestination(10495U);
    msg.setDestinationEntity(149U);
    msg.value = 0.49475276401043755;
    msg.confidence = 0.2340535134758136;
    msg.opmodes.assign("SKLQRVRPUNEOAHLPDQHFFLTGZXCMRBQGYDWNOVXTASTXRFWHHFNRCCEGYSDPZVIOCLMEVJJGIHZZQCTPXOONDEIWGKUUJAOEKYDLPMTZJAFNGNIPNCBP");

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
    msg.setTimeStamp(0.2956865505757684);
    msg.setSource(63946U);
    msg.setSourceEntity(61U);
    msg.setDestination(4018U);
    msg.setDestinationEntity(243U);
    msg.value = 0.048516749527383385;
    msg.confidence = 0.9657496398487742;
    msg.opmodes.assign("MLJPBNHXZBHYKOHZFKSTUDSCZTRBVZLZYRDISDDOKAXRGVEMPVEYRLIFXOUVUNWUJJBCTMFJWANPNHJLOSKNOUEONOKQKVSAQGJUWJECIHYSQMHSPTHKQWUAFMGLPZZBIMGRGFCWRTLAGQEWPUSTPPDFMPNBCGCXOQWTVIEHYIIWYMOIBJUVRTCDXIVMAQCWKRSQTXVAAHQLBDFLNCNYGKTDXZMAGEJQRENKWFUVXYLYYIBZXFA");

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
    msg.setTimeStamp(0.9240361977809898);
    msg.setSource(36738U);
    msg.setSourceEntity(100U);
    msg.setDestination(60168U);
    msg.setDestinationEntity(119U);
    msg.itow = 77728898U;
    msg.lat = 0.7286071401149928;
    msg.lon = 0.3436051137140642;
    msg.height_ell = 0.2930544761807812;
    msg.height_sea = 0.43285923832769735;
    msg.hacc = 0.777813763035836;
    msg.vacc = 0.4432052492685169;
    msg.vel_n = 0.9466035304829831;
    msg.vel_e = 0.5673209387658469;
    msg.vel_d = 0.6490741942156341;
    msg.speed = 0.0862436854116313;
    msg.gspeed = 0.7101153028424461;
    msg.heading = 0.37427269093531534;
    msg.sacc = 0.5062088813870101;
    msg.cacc = 0.7196310515453941;

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
    msg.setTimeStamp(0.16455494319207276);
    msg.setSource(10353U);
    msg.setSourceEntity(183U);
    msg.setDestination(58019U);
    msg.setDestinationEntity(229U);
    msg.itow = 3641742414U;
    msg.lat = 0.8138353294472219;
    msg.lon = 0.010790581122442022;
    msg.height_ell = 0.3189509529721162;
    msg.height_sea = 0.022431494266829333;
    msg.hacc = 0.48818771510627235;
    msg.vacc = 0.7839236043674747;
    msg.vel_n = 0.7835517949259545;
    msg.vel_e = 0.2886531061924241;
    msg.vel_d = 0.7519694431447067;
    msg.speed = 0.3303156938288412;
    msg.gspeed = 0.5591783388333788;
    msg.heading = 0.1241821258465422;
    msg.sacc = 0.41787671509172886;
    msg.cacc = 0.2328739271165572;

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
    msg.setTimeStamp(0.24094261959527197);
    msg.setSource(36445U);
    msg.setSourceEntity(83U);
    msg.setDestination(15002U);
    msg.setDestinationEntity(213U);
    msg.itow = 832750124U;
    msg.lat = 0.033167368606254244;
    msg.lon = 0.4168442942887435;
    msg.height_ell = 0.7197249329415603;
    msg.height_sea = 0.8194412719403271;
    msg.hacc = 0.8181177507839874;
    msg.vacc = 0.5231868514553596;
    msg.vel_n = 0.5859237233836637;
    msg.vel_e = 0.7782448398538969;
    msg.vel_d = 0.5233367461615483;
    msg.speed = 0.19249486896226542;
    msg.gspeed = 0.6682069942146326;
    msg.heading = 0.03331782350137702;
    msg.sacc = 0.005453729944084884;
    msg.cacc = 0.8580900359700105;

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
    msg.setTimeStamp(0.0721737942826215);
    msg.setSource(52483U);
    msg.setSourceEntity(196U);
    msg.setDestination(58276U);
    msg.setDestinationEntity(93U);
    msg.id = 141U;
    msg.value = 0.7898972188471283;

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
    msg.setTimeStamp(0.026499217663291885);
    msg.setSource(56654U);
    msg.setSourceEntity(244U);
    msg.setDestination(38997U);
    msg.setDestinationEntity(151U);
    msg.id = 105U;
    msg.value = 0.7715450402249372;

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
    msg.setTimeStamp(0.28906670553249125);
    msg.setSource(42564U);
    msg.setSourceEntity(6U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(249U);
    msg.id = 205U;
    msg.value = 0.5356199680637332;

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
    msg.setTimeStamp(0.646744328553802);
    msg.setSource(30425U);
    msg.setSourceEntity(83U);
    msg.setDestination(56850U);
    msg.setDestinationEntity(82U);
    msg.x = 0.03639152886016783;
    msg.y = 0.4186723812084897;
    msg.z = 0.015461053089099508;
    msg.phi = 0.6472663066597664;
    msg.theta = 0.4358717205901539;
    msg.psi = 0.3404910267461795;

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
    msg.setTimeStamp(0.07738068196137937);
    msg.setSource(8803U);
    msg.setSourceEntity(170U);
    msg.setDestination(13378U);
    msg.setDestinationEntity(56U);
    msg.x = 0.13752861342632405;
    msg.y = 0.634992427140587;
    msg.z = 0.08333023094083092;
    msg.phi = 0.997249410915634;
    msg.theta = 0.5889597866134028;
    msg.psi = 0.26113635319165784;

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
    msg.setTimeStamp(0.4608133386733685);
    msg.setSource(18028U);
    msg.setSourceEntity(88U);
    msg.setDestination(53555U);
    msg.setDestinationEntity(207U);
    msg.x = 0.5865057663858146;
    msg.y = 0.6128300333049426;
    msg.z = 0.4072134909622842;
    msg.phi = 0.6433129407819571;
    msg.theta = 0.694892775723813;
    msg.psi = 0.7023796008262175;

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
    msg.setTimeStamp(0.7259608702981947);
    msg.setSource(54856U);
    msg.setSourceEntity(116U);
    msg.setDestination(38662U);
    msg.setDestinationEntity(5U);
    msg.beam_width = 0.01370340641147072;
    msg.beam_height = 0.9185586674163745;

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
    msg.setTimeStamp(0.6225584699262912);
    msg.setSource(36200U);
    msg.setSourceEntity(186U);
    msg.setDestination(47208U);
    msg.setDestinationEntity(230U);
    msg.beam_width = 0.7229355563798596;
    msg.beam_height = 0.0756184084072744;

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
    msg.setTimeStamp(0.8515001808897038);
    msg.setSource(12364U);
    msg.setSourceEntity(33U);
    msg.setDestination(18197U);
    msg.setDestinationEntity(165U);
    msg.beam_width = 0.7356912693201481;
    msg.beam_height = 0.7359606461269806;

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
    msg.setTimeStamp(0.32199725020912373);
    msg.setSource(9116U);
    msg.setSourceEntity(163U);
    msg.setDestination(33385U);
    msg.setDestinationEntity(92U);
    msg.sane = 22U;

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
    msg.setTimeStamp(0.8165505273910251);
    msg.setSource(4836U);
    msg.setSourceEntity(20U);
    msg.setDestination(11078U);
    msg.setDestinationEntity(67U);
    msg.sane = 103U;

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
    msg.setTimeStamp(0.9446529193501245);
    msg.setSource(41489U);
    msg.setSourceEntity(203U);
    msg.setDestination(50248U);
    msg.setDestinationEntity(124U);
    msg.sane = 221U;

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
    msg.setTimeStamp(0.7763312982245865);
    msg.setSource(15967U);
    msg.setSourceEntity(23U);
    msg.setDestination(55665U);
    msg.setDestinationEntity(201U);
    msg.value = 0.03154091617671295;

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
    msg.setTimeStamp(0.222303430882564);
    msg.setSource(23016U);
    msg.setSourceEntity(215U);
    msg.setDestination(16874U);
    msg.setDestinationEntity(23U);
    msg.value = 0.3507340900540017;

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
    msg.setTimeStamp(0.9069444908944384);
    msg.setSource(35032U);
    msg.setSourceEntity(81U);
    msg.setDestination(29015U);
    msg.setDestinationEntity(132U);
    msg.value = 0.29488256398943435;

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
    msg.setTimeStamp(0.9979150447335081);
    msg.setSource(13495U);
    msg.setSourceEntity(131U);
    msg.setDestination(27978U);
    msg.setDestinationEntity(100U);
    msg.value = 0.5925199029219;

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
    msg.setTimeStamp(0.5437969103388697);
    msg.setSource(48646U);
    msg.setSourceEntity(49U);
    msg.setDestination(1104U);
    msg.setDestinationEntity(36U);
    msg.value = 0.7849810261560143;

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
    msg.setTimeStamp(0.4792205744445146);
    msg.setSource(8341U);
    msg.setSourceEntity(209U);
    msg.setDestination(18941U);
    msg.setDestinationEntity(94U);
    msg.value = 0.035727341027456005;

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
    msg.setTimeStamp(0.639696782782807);
    msg.setSource(58723U);
    msg.setSourceEntity(229U);
    msg.setDestination(44031U);
    msg.setDestinationEntity(164U);
    msg.value = 0.29127075294675786;

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
    msg.setTimeStamp(0.7558896151507719);
    msg.setSource(3785U);
    msg.setSourceEntity(162U);
    msg.setDestination(10858U);
    msg.setDestinationEntity(116U);
    msg.value = 0.4398408286062402;

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
    msg.setTimeStamp(0.7882725794107839);
    msg.setSource(11729U);
    msg.setSourceEntity(250U);
    msg.setDestination(1863U);
    msg.setDestinationEntity(232U);
    msg.value = 0.8044577612730661;

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
    msg.setTimeStamp(0.7130776696413339);
    msg.setSource(39674U);
    msg.setSourceEntity(225U);
    msg.setDestination(43593U);
    msg.setDestinationEntity(159U);
    msg.value = 0.47813624747637107;

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
    msg.setTimeStamp(0.6525860506983033);
    msg.setSource(53549U);
    msg.setSourceEntity(116U);
    msg.setDestination(54144U);
    msg.setDestinationEntity(178U);
    msg.value = 0.17972578587450294;

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
    msg.setTimeStamp(0.5856222750531361);
    msg.setSource(53547U);
    msg.setSourceEntity(4U);
    msg.setDestination(1063U);
    msg.setDestinationEntity(185U);
    msg.value = 0.6573394881832405;

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
    msg.setTimeStamp(0.8063807088665007);
    msg.setSource(45685U);
    msg.setSourceEntity(51U);
    msg.setDestination(1904U);
    msg.setDestinationEntity(36U);
    msg.value = 0.3367533336248566;

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
    msg.setTimeStamp(0.02240952543108088);
    msg.setSource(2232U);
    msg.setSourceEntity(133U);
    msg.setDestination(17729U);
    msg.setDestinationEntity(51U);
    msg.value = 0.337944648212517;

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
    msg.setTimeStamp(0.49917918735200384);
    msg.setSource(40097U);
    msg.setSourceEntity(145U);
    msg.setDestination(12933U);
    msg.setDestinationEntity(243U);
    msg.value = 0.7060696252155519;

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
    msg.setTimeStamp(0.9377385486248577);
    msg.setSource(46421U);
    msg.setSourceEntity(86U);
    msg.setDestination(3166U);
    msg.setDestinationEntity(129U);
    msg.value = 0.8532058354936045;

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
    msg.setTimeStamp(0.07402128056198765);
    msg.setSource(43707U);
    msg.setSourceEntity(226U);
    msg.setDestination(53337U);
    msg.setDestinationEntity(108U);
    msg.value = 0.5395550845383438;

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
    msg.setTimeStamp(0.03105443346111969);
    msg.setSource(43709U);
    msg.setSourceEntity(182U);
    msg.setDestination(27629U);
    msg.setDestinationEntity(60U);
    msg.value = 0.42590343698896926;

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
    msg.setTimeStamp(0.06809270774506127);
    msg.setSource(33994U);
    msg.setSourceEntity(15U);
    msg.setDestination(33576U);
    msg.setDestinationEntity(113U);
    msg.value = 0.6275939970795017;

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
    msg.setTimeStamp(0.9612460774649625);
    msg.setSource(33361U);
    msg.setSourceEntity(98U);
    msg.setDestination(20508U);
    msg.setDestinationEntity(26U);
    msg.value = 0.013131082209072664;

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
    msg.setTimeStamp(0.8106338977351063);
    msg.setSource(50237U);
    msg.setSourceEntity(220U);
    msg.setDestination(32080U);
    msg.setDestinationEntity(124U);
    msg.value = 0.16951719435156642;

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
    msg.setTimeStamp(0.4130144117324892);
    msg.setSource(61038U);
    msg.setSourceEntity(35U);
    msg.setDestination(32204U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5982348513827767;

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
    msg.setTimeStamp(0.5344707802894973);
    msg.setSource(25033U);
    msg.setSourceEntity(186U);
    msg.setDestination(61394U);
    msg.setDestinationEntity(192U);
    msg.value = 0.29351501338596897;

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
    msg.setTimeStamp(0.17601897037468617);
    msg.setSource(51243U);
    msg.setSourceEntity(87U);
    msg.setDestination(29680U);
    msg.setDestinationEntity(194U);
    msg.value = 0.4691705578414924;

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
    msg.setTimeStamp(0.18638311610728087);
    msg.setSource(51008U);
    msg.setSourceEntity(112U);
    msg.setDestination(25416U);
    msg.setDestinationEntity(178U);
    msg.validity = 10818U;
    msg.type = 123U;
    msg.tow = 3781011839U;
    msg.base_lat = 0.07940162575964471;
    msg.base_lon = 0.22138495717302709;
    msg.base_height = 0.8162240831061369;
    msg.n = 0.7572418696664248;
    msg.e = 0.7860612902166255;
    msg.d = 0.6293518762537854;
    msg.v_n = 0.7714845979317964;
    msg.v_e = 0.9666277763807706;
    msg.v_d = 0.9195691122577891;
    msg.satellites = 101U;
    msg.iar_hyp = 58161U;
    msg.iar_ratio = 0.4675235277863158;

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
    msg.setTimeStamp(0.4977678373743404);
    msg.setSource(39899U);
    msg.setSourceEntity(110U);
    msg.setDestination(11884U);
    msg.setDestinationEntity(83U);
    msg.validity = 15986U;
    msg.type = 253U;
    msg.tow = 3740310957U;
    msg.base_lat = 0.9834456678770254;
    msg.base_lon = 0.13308574540965556;
    msg.base_height = 0.4045215554797712;
    msg.n = 0.7695702626928358;
    msg.e = 0.612244844824075;
    msg.d = 0.2339028849633058;
    msg.v_n = 0.9614810366133428;
    msg.v_e = 0.13238668939238107;
    msg.v_d = 0.19998436720386703;
    msg.satellites = 153U;
    msg.iar_hyp = 59374U;
    msg.iar_ratio = 0.4483745618485313;

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
    msg.setTimeStamp(0.5424408484519289);
    msg.setSource(20768U);
    msg.setSourceEntity(215U);
    msg.setDestination(12864U);
    msg.setDestinationEntity(195U);
    msg.validity = 43808U;
    msg.type = 178U;
    msg.tow = 311644790U;
    msg.base_lat = 0.7416510687740206;
    msg.base_lon = 0.3908527702272362;
    msg.base_height = 0.4987541622588285;
    msg.n = 0.1317741534908481;
    msg.e = 0.6910058913169881;
    msg.d = 0.9810708918712403;
    msg.v_n = 0.790040981299446;
    msg.v_e = 0.8469132657145888;
    msg.v_d = 0.39804618068134645;
    msg.satellites = 95U;
    msg.iar_hyp = 13436U;
    msg.iar_ratio = 0.2929062870046042;

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
    msg.setTimeStamp(0.8388472193086518);
    msg.setSource(54586U);
    msg.setSourceEntity(78U);
    msg.setDestination(4594U);
    msg.setDestinationEntity(176U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.08480529041555163;
    tmp_msg_0.lon = 0.17935582003236095;
    tmp_msg_0.height = 0.9830144565850415;
    tmp_msg_0.x = 0.13365381925129705;
    tmp_msg_0.y = 0.9431487031774639;
    tmp_msg_0.z = 0.25453113663930504;
    tmp_msg_0.phi = 0.8251340005751145;
    tmp_msg_0.theta = 0.22143244039503251;
    tmp_msg_0.psi = 0.6634926059536849;
    tmp_msg_0.u = 0.9429378807079142;
    tmp_msg_0.v = 0.8563683367395954;
    tmp_msg_0.w = 0.926800132889945;
    tmp_msg_0.vx = 0.5857076459056216;
    tmp_msg_0.vy = 0.4810932681696489;
    tmp_msg_0.vz = 0.9483079665273293;
    tmp_msg_0.p = 0.5468071148624126;
    tmp_msg_0.q = 0.334528060478259;
    tmp_msg_0.r = 0.06465029826832225;
    tmp_msg_0.depth = 0.9701885948620429;
    tmp_msg_0.alt = 0.46888857757690316;
    msg.state.set(tmp_msg_0);
    msg.type = 50U;

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
    msg.setTimeStamp(0.812510028210419);
    msg.setSource(27876U);
    msg.setSourceEntity(166U);
    msg.setDestination(23478U);
    msg.setDestinationEntity(242U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.624013176035815;
    tmp_msg_0.lon = 0.05743898368774525;
    tmp_msg_0.height = 0.5706953138129568;
    tmp_msg_0.x = 0.551646030918285;
    tmp_msg_0.y = 0.1853300416655469;
    tmp_msg_0.z = 0.9355691160516881;
    tmp_msg_0.phi = 0.05961067174786916;
    tmp_msg_0.theta = 0.35219049957549065;
    tmp_msg_0.psi = 0.6213671837431187;
    tmp_msg_0.u = 0.033782223212727835;
    tmp_msg_0.v = 0.4658043198855719;
    tmp_msg_0.w = 0.1997759301673897;
    tmp_msg_0.vx = 0.20604099502209772;
    tmp_msg_0.vy = 0.4326945705591506;
    tmp_msg_0.vz = 0.8903193147880154;
    tmp_msg_0.p = 0.47423642132287025;
    tmp_msg_0.q = 0.5764492346635787;
    tmp_msg_0.r = 0.08662118842807276;
    tmp_msg_0.depth = 0.9035264979038123;
    tmp_msg_0.alt = 0.4625399504124852;
    msg.state.set(tmp_msg_0);
    msg.type = 103U;

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
    msg.setTimeStamp(0.3122503327742209);
    msg.setSource(19843U);
    msg.setSourceEntity(142U);
    msg.setDestination(30375U);
    msg.setDestinationEntity(112U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.13049957180067473;
    tmp_msg_0.lon = 0.9051061327507934;
    tmp_msg_0.height = 0.3031194842513739;
    tmp_msg_0.x = 0.07696289950613944;
    tmp_msg_0.y = 0.3466869571069292;
    tmp_msg_0.z = 0.5811664932456195;
    tmp_msg_0.phi = 0.1957834750846975;
    tmp_msg_0.theta = 0.9172742591212046;
    tmp_msg_0.psi = 0.7464824783374036;
    tmp_msg_0.u = 0.07174749394892566;
    tmp_msg_0.v = 0.2139768905185946;
    tmp_msg_0.w = 0.8651059285893619;
    tmp_msg_0.vx = 0.6136008250968505;
    tmp_msg_0.vy = 0.42874581033013404;
    tmp_msg_0.vz = 0.5191561611269151;
    tmp_msg_0.p = 0.07656409141782572;
    tmp_msg_0.q = 0.9178619720849217;
    tmp_msg_0.r = 0.4519163222932553;
    tmp_msg_0.depth = 0.7527761796306083;
    tmp_msg_0.alt = 0.08879125088477158;
    msg.state.set(tmp_msg_0);
    msg.type = 118U;

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
    msg.setTimeStamp(0.9857905879867713);
    msg.setSource(27085U);
    msg.setSourceEntity(137U);
    msg.setDestination(50755U);
    msg.setDestinationEntity(172U);
    msg.value = 0.8061540740175818;

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
    msg.setTimeStamp(0.7901010823049057);
    msg.setSource(19055U);
    msg.setSourceEntity(230U);
    msg.setDestination(32898U);
    msg.setDestinationEntity(139U);
    msg.value = 0.8820808166059012;

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
    msg.setTimeStamp(0.06343659959317538);
    msg.setSource(2152U);
    msg.setSourceEntity(5U);
    msg.setDestination(62995U);
    msg.setDestinationEntity(101U);
    msg.value = 0.643339170210574;

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
    msg.setTimeStamp(0.8866306055438863);
    msg.setSource(4518U);
    msg.setSourceEntity(170U);
    msg.setDestination(49115U);
    msg.setDestinationEntity(184U);
    msg.value = 0.12201716554629416;

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
    msg.setTimeStamp(0.6736108003107716);
    msg.setSource(16934U);
    msg.setSourceEntity(185U);
    msg.setDestination(31907U);
    msg.setDestinationEntity(69U);
    msg.value = 0.12376059238347148;

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
    msg.setTimeStamp(0.45137244617221384);
    msg.setSource(38962U);
    msg.setSourceEntity(106U);
    msg.setDestination(36759U);
    msg.setDestinationEntity(11U);
    msg.value = 0.6893806096724322;

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
    msg.setTimeStamp(0.1732876142998081);
    msg.setSource(39005U);
    msg.setSourceEntity(10U);
    msg.setDestination(61660U);
    msg.setDestinationEntity(5U);
    msg.value = 0.10277126243582191;

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
    msg.setTimeStamp(0.3321775644183175);
    msg.setSource(44659U);
    msg.setSourceEntity(19U);
    msg.setDestination(22106U);
    msg.setDestinationEntity(133U);
    msg.value = 0.9243270133731748;

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
    msg.setTimeStamp(0.6061605357096342);
    msg.setSource(14320U);
    msg.setSourceEntity(232U);
    msg.setDestination(18840U);
    msg.setDestinationEntity(222U);
    msg.value = 0.41610291499693364;

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
    msg.setTimeStamp(0.3599905916948828);
    msg.setSource(627U);
    msg.setSourceEntity(99U);
    msg.setDestination(24927U);
    msg.setDestinationEntity(60U);
    msg.value = 0.7179861341742894;

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
    msg.setTimeStamp(0.4477303520917333);
    msg.setSource(42881U);
    msg.setSourceEntity(57U);
    msg.setDestination(62409U);
    msg.setDestinationEntity(224U);
    msg.value = 0.12888618467133806;

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
    msg.setTimeStamp(0.21789626872655266);
    msg.setSource(55845U);
    msg.setSourceEntity(234U);
    msg.setDestination(6675U);
    msg.setDestinationEntity(132U);
    msg.value = 0.7668122640213104;

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
    msg.setTimeStamp(0.1633926287934505);
    msg.setSource(2517U);
    msg.setSourceEntity(205U);
    msg.setDestination(31037U);
    msg.setDestinationEntity(170U);
    msg.value = 0.6961989574170471;

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
    msg.setTimeStamp(0.3755759905575382);
    msg.setSource(23011U);
    msg.setSourceEntity(49U);
    msg.setDestination(15059U);
    msg.setDestinationEntity(230U);
    msg.value = 0.9907321097966191;

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
    msg.setTimeStamp(0.7633135147054959);
    msg.setSource(34522U);
    msg.setSourceEntity(80U);
    msg.setDestination(47998U);
    msg.setDestinationEntity(150U);
    msg.value = 0.5609857599320835;

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
    msg.setTimeStamp(0.8130313321460598);
    msg.setSource(10907U);
    msg.setSourceEntity(143U);
    msg.setDestination(20026U);
    msg.setDestinationEntity(50U);
    msg.id = 172U;
    msg.zoom = 75U;
    msg.action = 109U;

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
    msg.setTimeStamp(0.8331030813840092);
    msg.setSource(25258U);
    msg.setSourceEntity(202U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(143U);
    msg.id = 134U;
    msg.zoom = 205U;
    msg.action = 241U;

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
    msg.setTimeStamp(0.9343580479291828);
    msg.setSource(60764U);
    msg.setSourceEntity(24U);
    msg.setDestination(22410U);
    msg.setDestinationEntity(104U);
    msg.id = 187U;
    msg.zoom = 61U;
    msg.action = 149U;

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
    msg.setTimeStamp(0.052242673746887514);
    msg.setSource(13673U);
    msg.setSourceEntity(20U);
    msg.setDestination(48461U);
    msg.setDestinationEntity(51U);
    msg.id = 162U;
    msg.value = 0.9322197906882768;

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
    msg.setTimeStamp(0.4912791897135885);
    msg.setSource(62019U);
    msg.setSourceEntity(193U);
    msg.setDestination(26230U);
    msg.setDestinationEntity(148U);
    msg.id = 72U;
    msg.value = 0.6795335439209398;

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
    msg.setTimeStamp(0.9061280050769089);
    msg.setSource(21249U);
    msg.setSourceEntity(253U);
    msg.setDestination(37743U);
    msg.setDestinationEntity(244U);
    msg.id = 15U;
    msg.value = 0.05744622108199349;

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
    msg.setTimeStamp(0.3676088252112637);
    msg.setSource(22835U);
    msg.setSourceEntity(213U);
    msg.setDestination(3651U);
    msg.setDestinationEntity(100U);
    msg.id = 107U;
    msg.value = 0.6599629618219706;

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
    msg.setTimeStamp(0.037881847116763345);
    msg.setSource(43087U);
    msg.setSourceEntity(138U);
    msg.setDestination(34630U);
    msg.setDestinationEntity(59U);
    msg.id = 107U;
    msg.value = 0.24776416697308967;

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
    msg.setTimeStamp(0.6066439094283974);
    msg.setSource(50221U);
    msg.setSourceEntity(35U);
    msg.setDestination(19271U);
    msg.setDestinationEntity(12U);
    msg.id = 168U;
    msg.value = 0.46025503577443483;

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
    msg.setTimeStamp(0.09978106001468035);
    msg.setSource(53248U);
    msg.setSourceEntity(42U);
    msg.setDestination(26648U);
    msg.setDestinationEntity(189U);
    msg.id = 30U;
    msg.angle = 0.7514304939398699;

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
    msg.setTimeStamp(0.6626399642386794);
    msg.setSource(9143U);
    msg.setSourceEntity(204U);
    msg.setDestination(41681U);
    msg.setDestinationEntity(84U);
    msg.id = 95U;
    msg.angle = 0.8467618874098242;

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
    msg.setTimeStamp(0.15468291980998983);
    msg.setSource(28255U);
    msg.setSourceEntity(13U);
    msg.setDestination(34471U);
    msg.setDestinationEntity(23U);
    msg.id = 45U;
    msg.angle = 0.5384218174759495;

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
    msg.setTimeStamp(0.49974155191072844);
    msg.setSource(18139U);
    msg.setSourceEntity(7U);
    msg.setDestination(19884U);
    msg.setDestinationEntity(99U);
    msg.op = 218U;
    msg.actions.assign("VKWRLIRQIEFGUBLGJMBTUQXBIVFFFMAYKTZBYSUCUHVOIVETGNJDHMLTAAWZZYSRIAYYWWHQJISQCKGUNWOQWPYMAJGDRMV");

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
    msg.setTimeStamp(0.6082941785826289);
    msg.setSource(39889U);
    msg.setSourceEntity(106U);
    msg.setDestination(5325U);
    msg.setDestinationEntity(30U);
    msg.op = 21U;
    msg.actions.assign("XNRLKBPZXUIPQKSSZRGSTAEGMYQZLQDNFZYBEUNIZLBMZGGBFTUDJZCWGCI");

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
    msg.setTimeStamp(0.25689264414802837);
    msg.setSource(19137U);
    msg.setSourceEntity(243U);
    msg.setDestination(40724U);
    msg.setDestinationEntity(243U);
    msg.op = 178U;
    msg.actions.assign("SDMPWYXGINKCJEUJOYBRYOHPLWNCDRWWYQUZXNCORATMDCTFIJGXZLKQBQMQIBPXQYTSEAOIYKYMBGWPXAOWGFPRAFXDUSGCUCIEEEQNFVKWHPGGTYXWIZKCRQJWIRVCKWUMLUQTOVFAITZLAFATNEPNBGZJFDYHUEMTSGNVOHMHLRPRCJVMHQVZSRDHSEFYDDUBEHKOBVDVMSBBHZTFXHVPDJNIOAQISRLSKLLASNUOJJKAXMGVKJLZLZPXE");

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
    msg.setTimeStamp(0.42047943387758946);
    msg.setSource(39462U);
    msg.setSourceEntity(151U);
    msg.setDestination(43104U);
    msg.setDestinationEntity(183U);
    msg.actions.assign("EZAICIZSXLQCXZKCNHXKFGAWUNORWANJZTQBXNYYKHDRPGAESEPKDWQBRNHFIQDK");

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
    msg.setTimeStamp(0.562715807342384);
    msg.setSource(46865U);
    msg.setSourceEntity(2U);
    msg.setDestination(10365U);
    msg.setDestinationEntity(183U);
    msg.actions.assign("LWBJEJPAYMZVHNZRQLANCRZENSQOTGEMTIOHTLPUONWOBETGWGRJWIESDWCYXIEXGSLAEEVDRPMQHKSCEGGGPQSZXVYAQPBJAWFCRXAVDUMKDDZYAWYOJVGDMMGHWKJBXRRPHHKMR");

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
    msg.setTimeStamp(0.6384614261970606);
    msg.setSource(2364U);
    msg.setSourceEntity(154U);
    msg.setDestination(506U);
    msg.setDestinationEntity(185U);
    msg.actions.assign("KLFYIRWSKHNTUCOSTUUPXSHEMPNLAECXMEKDNOFDSKOBVTMISVMTGLKXVMQZDZDLPLYYVRUQCURBJSCGHTLLAJGRWWNPWKPXYHTUREGEFJFHESFAGIRNVFXIVCLKQTPXEDVEMUJQLXQGRWWKKUCFPGAMHZZAB");

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
    msg.setTimeStamp(0.3582418580351271);
    msg.setSource(7893U);
    msg.setSourceEntity(6U);
    msg.setDestination(36658U);
    msg.setDestinationEntity(247U);
    msg.button = 40U;
    msg.value = 180U;

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
    msg.setTimeStamp(0.2147612416575837);
    msg.setSource(64428U);
    msg.setSourceEntity(204U);
    msg.setDestination(51827U);
    msg.setDestinationEntity(129U);
    msg.button = 32U;
    msg.value = 187U;

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
    msg.setTimeStamp(0.3451627630117313);
    msg.setSource(29475U);
    msg.setSourceEntity(163U);
    msg.setDestination(26530U);
    msg.setDestinationEntity(189U);
    msg.button = 183U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.4215417298080466);
    msg.setSource(20970U);
    msg.setSourceEntity(164U);
    msg.setDestination(36165U);
    msg.setDestinationEntity(240U);
    msg.op = 132U;
    msg.text.assign("RZHGOYMRKMVRELTGCNPIUTGBZDPYQHBZTVYXFHCLHBUYPRVELCOFLNEXAYGSHIKZNWSVOIIAJXCQWQVTRKEJSRDKSUJRZHJANNXHWUPMIJREABBNPOFYQYTFHNIBYIOCOMFMKGELKKWXSRVEDENCEJPLDAT");

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
    msg.setTimeStamp(0.0993047706137915);
    msg.setSource(34737U);
    msg.setSourceEntity(140U);
    msg.setDestination(5191U);
    msg.setDestinationEntity(94U);
    msg.op = 192U;
    msg.text.assign("GMDCZORNTFLPDJZRBHTVVHFUQKWSOGIECVACVYQFLQBEANVGOLOQBDQLDTOZEKIOVSJLWNXUKEUDMTTJLNOQYSDUYUVSPNYJXGUAJPXZLSYJADEHGRHBLBDNTQCHPAIFTLBNCMWFXRFIVAGMWJCTWMKYERREHHEBVGEPPMPJWZPWGAISDX");

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
    msg.setTimeStamp(0.7530083151340143);
    msg.setSource(16906U);
    msg.setSourceEntity(53U);
    msg.setDestination(22148U);
    msg.setDestinationEntity(109U);
    msg.op = 216U;
    msg.text.assign("FNVOKUIFZKZWKEWBIFJTPPORFSXMYDTDAPIGQLKOQXKRWBYVMWEHECSRSHUGGVMHGJLWWMPFUKUWEHJPINQABCABLKOGQDZKBXPTNRUOIPCQLSOGHJJDDZPJUVYTZONLSXYUJJYLUHSCRRWDBFQOQ");

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
    msg.setTimeStamp(0.9969503779968476);
    msg.setSource(19302U);
    msg.setSourceEntity(215U);
    msg.setDestination(45519U);
    msg.setDestinationEntity(116U);
    msg.op = 132U;
    msg.time_remain = 0.4042121849562317;
    msg.sched_time = 0.3242433273081884;

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
    msg.setTimeStamp(0.3961348425724197);
    msg.setSource(62134U);
    msg.setSourceEntity(83U);
    msg.setDestination(40533U);
    msg.setDestinationEntity(12U);
    msg.op = 90U;
    msg.time_remain = 0.7300150662442072;
    msg.sched_time = 0.2688272847326857;

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
    msg.setTimeStamp(0.6781849620410171);
    msg.setSource(29962U);
    msg.setSourceEntity(101U);
    msg.setDestination(747U);
    msg.setDestinationEntity(244U);
    msg.op = 214U;
    msg.time_remain = 0.2003724670196373;
    msg.sched_time = 0.4318326949454748;

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
    msg.setTimeStamp(0.08474584588800527);
    msg.setSource(24334U);
    msg.setSourceEntity(233U);
    msg.setDestination(26006U);
    msg.setDestinationEntity(115U);
    msg.name.assign("EVAESQCOOKALDDIJBPAWLLCBGBGHELUNMIZSTEKLALYHKUYMOPWNFQLDAMIBVHVEFTGTQUMRZWSUXWZLFTWEVCAPWRPDUSFGTHVERZVGSOYHOTRXSVMDIQCJKZKMFZFKZBCWZMFPXWSHNNMNIZYPFQUXODSKJNUIHFXVTXINUJGIPIPKDUNJRJQYIHQDAY");
    msg.op = 210U;
    msg.sched_time = 0.7391844300281109;

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
    msg.setTimeStamp(0.6640981907074699);
    msg.setSource(16412U);
    msg.setSourceEntity(166U);
    msg.setDestination(30581U);
    msg.setDestinationEntity(97U);
    msg.name.assign("YIAIVPLFQWCLAOEZFXHGNXEBKKYDQBGQGOLNHMNPPGCCEVHMVWITCGHKLURNHYHADOOSXNOYURLHRTRUJMWFERBUFDBKTDDVKNFGRBKQWKXREVDTPEWMKXJSXOZPNCMACTVIYXYFSAUFGGXXXPMDTGWJALQOIIS");
    msg.op = 225U;
    msg.sched_time = 0.1547563642568761;

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
    msg.setTimeStamp(0.0710813853851946);
    msg.setSource(53091U);
    msg.setSourceEntity(44U);
    msg.setDestination(299U);
    msg.setDestinationEntity(1U);
    msg.name.assign("OYVPLYYTDODPISKXWSFWPUMYBSEZPUCOEFAJWLPOPERXVFYVJMGLBYTZZRQQGKHVA");
    msg.op = 19U;
    msg.sched_time = 0.20314482896501795;

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
    msg.setTimeStamp(0.5884490754848789);
    msg.setSource(47917U);
    msg.setSourceEntity(111U);
    msg.setDestination(22300U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.3139554624242724);
    msg.setSource(31535U);
    msg.setSourceEntity(141U);
    msg.setDestination(2483U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.3333990906830905);
    msg.setSource(19616U);
    msg.setSourceEntity(181U);
    msg.setDestination(1859U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.19213294111467005);
    msg.setSource(64561U);
    msg.setSourceEntity(194U);
    msg.setDestination(15101U);
    msg.setDestinationEntity(107U);
    msg.name.assign("LGXALLVZBDDBJFAUZNXDOBMWTPULRXIVVTVFBJNWAVRMWULGOEKNJWZTMKZYOXOCUTIOOYQRFIWAAACURBQCJGFQYGQAJLDSGSERSLQEPGOILZEPMJTRXIFQZBHQFKJJVPSWSJZYPNRHCCYEORNXNBECECHIANSDDEYDTVHQTHUEKGWHBWDCNPHLXOSRPICXHXQHMYZHKRYQVMOMLTNMUIEUBZPYKKGSPYBFIMFKGD");
    msg.state = 199U;

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
    msg.setTimeStamp(0.0999515078515929);
    msg.setSource(26913U);
    msg.setSourceEntity(47U);
    msg.setDestination(20880U);
    msg.setDestinationEntity(202U);
    msg.name.assign("OZLPLPVHUKGXPGGCTAQDARMAIHNDRDVFUVVIMKBLSQDFTHSEKOTEJFGDDLSYAWLBVEUWRAOICIUEYZTQPTKAYTNUCEZWEZBQJXOVCJGVHRDHNWVBSDMUCABMTMGS");
    msg.state = 173U;

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
    msg.setTimeStamp(0.9408553116577193);
    msg.setSource(57533U);
    msg.setSourceEntity(110U);
    msg.setDestination(56614U);
    msg.setDestinationEntity(110U);
    msg.name.assign("SJDXJEIRAYIESCFIAVZROUYVQNKWEVZIVGIKYHQONMXGTETYQTTWDEPCVJFKTHMPUEYOODTUXZTUJIRWYRRFXBYJNXZCUWPQNHTALMBWGUNFKHECENOCBKHCHLXHGMRZVRWZJUOSDKFAJPWKRMZPSIMXQUJTXFAAJUOUAOOICMNYCKSPCIZLGKFRNBSISVEEQFALML");
    msg.state = 164U;

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
    msg.setTimeStamp(0.17387956923009285);
    msg.setSource(51838U);
    msg.setSourceEntity(220U);
    msg.setDestination(52326U);
    msg.setDestinationEntity(115U);
    msg.name.assign("SQVYBIYVWUMKYMCEJPSCRWEATSTQGSUJAQTGENKZGKLUELPBZARZDFRDUBRZVXHBFICQFLHOPCBWSRHJWMXLUHJLJHARWOVYPLEZFINOELYBDMAVO");
    msg.value = 1U;

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
    msg.setTimeStamp(0.7977066334401758);
    msg.setSource(8406U);
    msg.setSourceEntity(231U);
    msg.setDestination(19813U);
    msg.setDestinationEntity(168U);
    msg.name.assign("CIFSLIFJMGQUDORAUSZXRPNMYTHSTJMJPSMGOIRVKZAUQNPHICHNMGKXJPFOHUBRPZCUWRXNSBHWSFKINIJLDBEXOEFPZBIEFBRZKVVCJUELJBBNQCEQWVWOGWZEZXDFOJAVVPAWQTHFDAYMQUAGTKXSXBDIZJPYAGQYTWWNJCUFHRQHCYTEALGAHYCPOVVKMKEROITXYDBYQRLVBPKMEDDLWXUMZLCXEFURGDTHGNSSNMODNLKGSKLIACWTYL");
    msg.value = 39U;

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
    msg.setTimeStamp(0.8414516934882909);
    msg.setSource(50382U);
    msg.setSourceEntity(31U);
    msg.setDestination(58808U);
    msg.setDestinationEntity(90U);
    msg.name.assign("IQKVOVMFNYZGATGZJWAOAYRRKOFUIRWEGJFECEHXZCELLGFCMTJPZSXMYNFSXFDVLHUTWBRIQDQOVSPVTQFKIPLYMIJBNFZATLMEUFBBGKLYUDRTNQAZRLYQDXGXXRGKEBAPACJONHMZHORTCZUAWQPSQYWWBDCKODSSZ");
    msg.value = 19U;

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
    msg.setTimeStamp(0.9761988876306568);
    msg.setSource(47206U);
    msg.setSourceEntity(99U);
    msg.setDestination(35459U);
    msg.setDestinationEntity(11U);
    msg.name.assign("WGWANYFBZBDDEGUPUNYIEMNKSAOVAXIWZPMHOGTOPJLGNHHCFJMRXYYOGNTUJNDPKTCREXDNYGQCDVBMZLYLRRHIIGXTFIHRRLSDAUFDHOBCKMKNTOJIIFTHFXBPZVCVSQVKSKXVSFVSVBWPWKUKXCLZCDGOFTGVESUEQJWLZXPNDCKILSOMYBZAPMUQIAYMHUBHJWFMQZT");

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
    msg.setTimeStamp(0.34403460042173706);
    msg.setSource(37496U);
    msg.setSourceEntity(85U);
    msg.setDestination(43828U);
    msg.setDestinationEntity(241U);
    msg.name.assign("NQZPSGOHGYGDWIDURVKCHJZCZQEQRBDRVOBYNNWNSUJCFNMAHNKZSTMOXGCIZBFATLYESRUEJEVODAQLIUMKQCQFMXNWKKGTYAPWMLIYOEIFOWOFISKPVINXMZFUQMPVXJNHBBETRHUGBAMLRPABULEFDPSZMCXFJOAYPSCGPBEIZGQWXHCJZCUYSLLXFEVADZRJQMNDBIRT");

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
    msg.setTimeStamp(0.5623116141215881);
    msg.setSource(6505U);
    msg.setSourceEntity(45U);
    msg.setDestination(52459U);
    msg.setDestinationEntity(93U);
    msg.name.assign("TVWIBWLPIZXPJFPRTCPWBMNBBVCOIYACXLGYAZPFKTLHQXQJSYTSJWQFMQMGTTSIRZYOIGSZGEDGXNKNRRAAMDIDCAJXFBRIERZNOHYDNLOFEJBZVRSTAOHYSQGVXXJYZARQLNZDYKQFUVOGDVMMUQAWEIOBSCNTHVBGAHFFLHWJVCZIHEMGMUBEQUOUNEYRELPLKKNWCKPUCSBWQVXSCDDEMPHFHXTLUJVYXTFUMOKAKKDECDKZUPJN");

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
    msg.setTimeStamp(0.7680920352347549);
    msg.setSource(62414U);
    msg.setSourceEntity(179U);
    msg.setDestination(5769U);
    msg.setDestinationEntity(142U);
    msg.name.assign("TXDQKMTFZIMCPVOSFULQHSPUPSWSXDLHRZNVTRERGBOOKMCBKYTCFNITFNMCZIHHUUOEBOWWQYBZSTAJOCZDMEACYGLPGLYAIZVUHYQHPSAIIFHEIAYFANXTNMYVBZMOLNJVAWKBGGQPSDLONPCDHHUKWOGDSHZTXKDKFVKMAWLTAJANXIXGDQ");
    msg.value = 247U;

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
    msg.setTimeStamp(0.6343993893263319);
    msg.setSource(5846U);
    msg.setSourceEntity(65U);
    msg.setDestination(17204U);
    msg.setDestinationEntity(28U);
    msg.name.assign("FRPDONRXWKQXCTFBERLVQKBVLJOLCANHWGOG");
    msg.value = 147U;

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
    msg.setTimeStamp(0.9135189263560657);
    msg.setSource(39634U);
    msg.setSourceEntity(36U);
    msg.setDestination(43037U);
    msg.setDestinationEntity(138U);
    msg.name.assign("ETMXPMDNIZQVFJFGHKHFOKDGHHPFXBSGTYQLDWQEXUUBDTLCWVPMNPYWRLVZYNEISVAORPMOZGIFITIUJJLPUBLJXDPJWDNGGEMMBUADUYVORVVSICIZFTFEYCGHZJLTBUOGQOTKQPNOSKHRRMAKCVCJIZABSJIK");
    msg.value = 33U;

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
    msg.setTimeStamp(0.8768080115538233);
    msg.setSource(42831U);
    msg.setSourceEntity(73U);
    msg.setDestination(37847U);
    msg.setDestinationEntity(86U);
    msg.id = 212U;
    msg.period = 703117209U;
    msg.duty_cycle = 992738626U;

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
    msg.setTimeStamp(0.7336238358865161);
    msg.setSource(34170U);
    msg.setSourceEntity(48U);
    msg.setDestination(17748U);
    msg.setDestinationEntity(61U);
    msg.id = 23U;
    msg.period = 1498940222U;
    msg.duty_cycle = 381392920U;

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
    msg.setTimeStamp(0.8516738781912535);
    msg.setSource(17553U);
    msg.setSourceEntity(154U);
    msg.setDestination(22929U);
    msg.setDestinationEntity(247U);
    msg.id = 209U;
    msg.period = 4203928815U;
    msg.duty_cycle = 815103567U;

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
    msg.setTimeStamp(0.22754365832960766);
    msg.setSource(11364U);
    msg.setSourceEntity(157U);
    msg.setDestination(52414U);
    msg.setDestinationEntity(148U);
    msg.id = 27U;
    msg.period = 1791335870U;
    msg.duty_cycle = 3275738187U;

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
    msg.setTimeStamp(0.6683427052716584);
    msg.setSource(58158U);
    msg.setSourceEntity(44U);
    msg.setDestination(30022U);
    msg.setDestinationEntity(202U);
    msg.id = 118U;
    msg.period = 3880219327U;
    msg.duty_cycle = 517156387U;

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
    msg.setTimeStamp(0.5110699126218611);
    msg.setSource(23638U);
    msg.setSourceEntity(64U);
    msg.setDestination(39728U);
    msg.setDestinationEntity(59U);
    msg.id = 188U;
    msg.period = 1527281229U;
    msg.duty_cycle = 3398396975U;

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
    msg.setTimeStamp(0.5364187542029287);
    msg.setSource(14303U);
    msg.setSourceEntity(1U);
    msg.setDestination(34723U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.23247180966652714;
    msg.lon = 0.5110461986820531;
    msg.height = 0.5005385446855254;
    msg.x = 0.4151421620005855;
    msg.y = 0.32916247917832175;
    msg.z = 0.8112623109967949;
    msg.phi = 0.8213641358672162;
    msg.theta = 0.9872829396850856;
    msg.psi = 0.40774293476517853;
    msg.u = 0.9330652401050491;
    msg.v = 0.17373537634644054;
    msg.w = 0.019404669165739352;
    msg.vx = 0.8602527125899101;
    msg.vy = 0.09215893172562062;
    msg.vz = 0.7892206656893038;
    msg.p = 0.2562281330416062;
    msg.q = 0.9156484830106776;
    msg.r = 0.4475747317789063;
    msg.depth = 0.2723813391515455;
    msg.alt = 0.2326881152090422;

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
    msg.setTimeStamp(0.8089285679848465);
    msg.setSource(9615U);
    msg.setSourceEntity(126U);
    msg.setDestination(33244U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.5844594558928358;
    msg.lon = 0.8401078595860739;
    msg.height = 0.7969876836768564;
    msg.x = 0.4151210285091884;
    msg.y = 0.8650676794929995;
    msg.z = 0.7762540665911714;
    msg.phi = 0.6818207232880287;
    msg.theta = 0.11012601559925239;
    msg.psi = 0.492174384577273;
    msg.u = 0.3511843748317339;
    msg.v = 0.3494493347256048;
    msg.w = 0.7408634010898468;
    msg.vx = 0.9042551446540946;
    msg.vy = 0.7740750157751568;
    msg.vz = 0.5841800818647352;
    msg.p = 0.9077175959178886;
    msg.q = 0.06013956560597167;
    msg.r = 0.769576791303157;
    msg.depth = 0.38097549832439825;
    msg.alt = 0.533948210630995;

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
    msg.setTimeStamp(0.20841672015399593);
    msg.setSource(44866U);
    msg.setSourceEntity(95U);
    msg.setDestination(5568U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.6272080380061413;
    msg.lon = 0.051475318826755156;
    msg.height = 0.6546544395842414;
    msg.x = 0.9778538182062593;
    msg.y = 0.5880225712977561;
    msg.z = 0.47473243338365734;
    msg.phi = 0.9576291777310783;
    msg.theta = 0.06271753820856629;
    msg.psi = 0.003538201483249681;
    msg.u = 0.4017817022588617;
    msg.v = 0.4519501007063774;
    msg.w = 0.028078179021613914;
    msg.vx = 0.6577563427470672;
    msg.vy = 0.9486746122305518;
    msg.vz = 0.2735260751762091;
    msg.p = 0.5219355557420052;
    msg.q = 0.5206566633003944;
    msg.r = 0.031507626236322084;
    msg.depth = 0.09231027212663445;
    msg.alt = 0.15111852468335973;

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
    msg.setTimeStamp(0.6520868140609354);
    msg.setSource(39597U);
    msg.setSourceEntity(86U);
    msg.setDestination(34822U);
    msg.setDestinationEntity(158U);
    msg.x = 0.2574685774636074;
    msg.y = 0.4586752618113361;
    msg.z = 0.03490496595495851;

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
    msg.setTimeStamp(0.942349111901735);
    msg.setSource(34960U);
    msg.setSourceEntity(115U);
    msg.setDestination(30151U);
    msg.setDestinationEntity(153U);
    msg.x = 0.45818239365549485;
    msg.y = 0.26455189507547416;
    msg.z = 0.18087198589250342;

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
    msg.setTimeStamp(0.5289357976125452);
    msg.setSource(52839U);
    msg.setSourceEntity(141U);
    msg.setDestination(36124U);
    msg.setDestinationEntity(60U);
    msg.x = 0.30246173077056326;
    msg.y = 0.7354540110096328;
    msg.z = 0.9483878867017878;

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
    msg.setTimeStamp(0.042826379961780736);
    msg.setSource(11138U);
    msg.setSourceEntity(87U);
    msg.setDestination(53043U);
    msg.setDestinationEntity(98U);
    msg.value = 0.7709457371534991;

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
    msg.setTimeStamp(0.7997770516402792);
    msg.setSource(3533U);
    msg.setSourceEntity(54U);
    msg.setDestination(32070U);
    msg.setDestinationEntity(84U);
    msg.value = 0.45729593699436044;

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
    msg.setTimeStamp(0.3246835534945487);
    msg.setSource(5082U);
    msg.setSourceEntity(72U);
    msg.setDestination(24877U);
    msg.setDestinationEntity(62U);
    msg.value = 0.08068036488202379;

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
    msg.setTimeStamp(0.14904809761584048);
    msg.setSource(62814U);
    msg.setSourceEntity(28U);
    msg.setDestination(28864U);
    msg.setDestinationEntity(67U);
    msg.value = 0.1555493701012114;

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
    msg.setTimeStamp(0.43266439195222584);
    msg.setSource(22357U);
    msg.setSourceEntity(16U);
    msg.setDestination(6223U);
    msg.setDestinationEntity(142U);
    msg.value = 0.04218331855811852;

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
    msg.setTimeStamp(0.8340130219329863);
    msg.setSource(52836U);
    msg.setSourceEntity(6U);
    msg.setDestination(21582U);
    msg.setDestinationEntity(143U);
    msg.value = 0.981621615990141;

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
    msg.setTimeStamp(0.7491214169772819);
    msg.setSource(44305U);
    msg.setSourceEntity(235U);
    msg.setDestination(33074U);
    msg.setDestinationEntity(189U);
    msg.x = 0.2417735624328875;
    msg.y = 0.627874157097005;
    msg.z = 0.9457344138641224;
    msg.phi = 0.5343484118648725;
    msg.theta = 0.6568510066992431;
    msg.psi = 0.5342158516426099;
    msg.p = 0.9802264555376392;
    msg.q = 0.5196204312853047;
    msg.r = 0.4777896754100406;
    msg.u = 0.6799307777283314;
    msg.v = 0.17946051317154388;
    msg.w = 0.21535337905597862;
    msg.bias_psi = 0.5898566914343307;
    msg.bias_r = 0.904005771306936;

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
    msg.setTimeStamp(0.6866724514225307);
    msg.setSource(54783U);
    msg.setSourceEntity(217U);
    msg.setDestination(2694U);
    msg.setDestinationEntity(43U);
    msg.x = 0.967847476139239;
    msg.y = 0.3244431876239261;
    msg.z = 0.3059207011617536;
    msg.phi = 0.4231950804442144;
    msg.theta = 0.15375125765134967;
    msg.psi = 0.7869795857816537;
    msg.p = 0.6935835632240765;
    msg.q = 0.5104968160209599;
    msg.r = 0.24469307565442566;
    msg.u = 0.32643753338774173;
    msg.v = 0.5588860809691928;
    msg.w = 0.06385436301954317;
    msg.bias_psi = 0.29756112797744316;
    msg.bias_r = 0.4910581896967482;

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
    msg.setTimeStamp(0.4403417814850843);
    msg.setSource(51291U);
    msg.setSourceEntity(184U);
    msg.setDestination(5583U);
    msg.setDestinationEntity(98U);
    msg.x = 0.5585077458204167;
    msg.y = 0.4027614122055596;
    msg.z = 0.2567204878384072;
    msg.phi = 0.9738539725689442;
    msg.theta = 0.7365863622007072;
    msg.psi = 0.5411619164134519;
    msg.p = 0.6240976057689607;
    msg.q = 0.9098317462282844;
    msg.r = 0.3833246869405629;
    msg.u = 0.8895251973143072;
    msg.v = 0.940474427582058;
    msg.w = 0.25371632179057657;
    msg.bias_psi = 0.43874186285483574;
    msg.bias_r = 0.29627135309298513;

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
    msg.setTimeStamp(0.38724738764152056);
    msg.setSource(39390U);
    msg.setSourceEntity(249U);
    msg.setDestination(6269U);
    msg.setDestinationEntity(154U);
    msg.bias_psi = 0.7447831325051756;
    msg.bias_r = 0.17960143491093794;
    msg.cog = 0.4187466682629981;
    msg.cyaw = 0.08293973235186392;
    msg.lbl_rej_level = 0.5485904932768343;
    msg.gps_rej_level = 0.7662943276942826;
    msg.custom_x = 0.8653024922323371;
    msg.custom_y = 0.9226931477511985;
    msg.custom_z = 0.33959791917112625;

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
    msg.setTimeStamp(0.3407695473683442);
    msg.setSource(37637U);
    msg.setSourceEntity(130U);
    msg.setDestination(38554U);
    msg.setDestinationEntity(23U);
    msg.bias_psi = 0.3731473122484259;
    msg.bias_r = 0.9122090574347286;
    msg.cog = 0.39197222645614105;
    msg.cyaw = 0.40970131590860714;
    msg.lbl_rej_level = 0.11584238684129966;
    msg.gps_rej_level = 0.05013517178666904;
    msg.custom_x = 0.5649152257812531;
    msg.custom_y = 0.57572882363354;
    msg.custom_z = 0.06992351496684335;

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
    msg.setTimeStamp(0.14930393748805226);
    msg.setSource(7449U);
    msg.setSourceEntity(136U);
    msg.setDestination(53687U);
    msg.setDestinationEntity(181U);
    msg.bias_psi = 0.92636223269642;
    msg.bias_r = 0.2215641789361662;
    msg.cog = 0.5953234577513871;
    msg.cyaw = 0.5414144479660098;
    msg.lbl_rej_level = 0.26136634875016307;
    msg.gps_rej_level = 0.8996610708606686;
    msg.custom_x = 0.8111709659337046;
    msg.custom_y = 0.7159978175786857;
    msg.custom_z = 0.5581231689222246;

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
    msg.setTimeStamp(0.7597341359088585);
    msg.setSource(8424U);
    msg.setSourceEntity(234U);
    msg.setDestination(37626U);
    msg.setDestinationEntity(88U);
    msg.utc_time = 0.4156922903990514;
    msg.reason = 89U;

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
    msg.setTimeStamp(0.7304308746440633);
    msg.setSource(25249U);
    msg.setSourceEntity(107U);
    msg.setDestination(6319U);
    msg.setDestinationEntity(48U);
    msg.utc_time = 0.2959062119589648;
    msg.reason = 63U;

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
    msg.setTimeStamp(0.03024201097102608);
    msg.setSource(53373U);
    msg.setSourceEntity(105U);
    msg.setDestination(3236U);
    msg.setDestinationEntity(68U);
    msg.utc_time = 0.271413711172663;
    msg.reason = 147U;

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
    msg.setTimeStamp(0.23003865537067347);
    msg.setSource(65087U);
    msg.setSourceEntity(190U);
    msg.setDestination(40130U);
    msg.setDestinationEntity(217U);
    msg.id = 183U;
    msg.range = 0.11923152892683353;
    msg.acceptance = 198U;

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
    msg.setTimeStamp(0.7696856922713621);
    msg.setSource(30761U);
    msg.setSourceEntity(145U);
    msg.setDestination(21314U);
    msg.setDestinationEntity(219U);
    msg.id = 111U;
    msg.range = 0.39452199277369693;
    msg.acceptance = 19U;

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
    msg.setTimeStamp(0.5511918245018251);
    msg.setSource(15327U);
    msg.setSourceEntity(134U);
    msg.setDestination(1670U);
    msg.setDestinationEntity(90U);
    msg.id = 213U;
    msg.range = 0.944677958035254;
    msg.acceptance = 208U;

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
    msg.setTimeStamp(0.32443542262206704);
    msg.setSource(51790U);
    msg.setSourceEntity(28U);
    msg.setDestination(13305U);
    msg.setDestinationEntity(179U);
    msg.type = 142U;
    msg.reason = 129U;
    msg.value = 0.10598703377420216;
    msg.timestep = 0.2672829301249069;

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
    msg.setTimeStamp(0.28719727769463);
    msg.setSource(61812U);
    msg.setSourceEntity(65U);
    msg.setDestination(17729U);
    msg.setDestinationEntity(125U);
    msg.type = 202U;
    msg.reason = 6U;
    msg.value = 0.3845317198896201;
    msg.timestep = 0.9932839928341738;

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
    msg.setTimeStamp(0.21094161679338508);
    msg.setSource(56494U);
    msg.setSourceEntity(155U);
    msg.setDestination(60704U);
    msg.setDestinationEntity(248U);
    msg.type = 117U;
    msg.reason = 81U;
    msg.value = 0.9068295514244409;
    msg.timestep = 0.45134550287648;

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
    msg.setTimeStamp(0.03804379481146758);
    msg.setSource(7599U);
    msg.setSourceEntity(158U);
    msg.setDestination(32909U);
    msg.setDestinationEntity(15U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AYPVHUAPIRIOQHMVVNHEQRSRFCAJAZAWJCNZTXGQGBVZFDPXXUBVYFJKQOAJMISPYCSOWNQJIANFLCRZMPTHAUGAJVHMFCGWJBQXEESTXNHQLOLTXSPGRNZGGUGCJMLAKSKCUZLCERYSTDGKMZHVOXUXENEDSXET");
    tmp_msg_0.lat = 0.31374822869079355;
    tmp_msg_0.lon = 0.3362343353793521;
    tmp_msg_0.depth = 0.0865522290368107;
    tmp_msg_0.query_channel = 26U;
    tmp_msg_0.reply_channel = 153U;
    tmp_msg_0.transponder_delay = 237U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.29185225424442196;
    msg.y = 0.3689941406167918;
    msg.var_x = 0.22503458958305222;
    msg.var_y = 0.3365163731529598;
    msg.distance = 0.6858067199600902;

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
    msg.setTimeStamp(0.43344787723017597);
    msg.setSource(54093U);
    msg.setSourceEntity(218U);
    msg.setDestination(44309U);
    msg.setDestinationEntity(150U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NJFBEPEKYFXCHNBGPUKCQTMMVPCINTYDOYFROLBPUINVNPXNNRNQMBIEZILOXCQMTPUOXRBWJVHDLVMJRAAAVMUYIWTXZICHPDESLWDKCFEFEFRDCJSSSUFPIAAZQTBNQXHCJDHDBUJOAYUWGOWLRUMEFDWZQHZESRADKCSSRLGVULSWQ");
    tmp_msg_0.lat = 0.7473783739171501;
    tmp_msg_0.lon = 0.8160800019300654;
    tmp_msg_0.depth = 0.967150708684466;
    tmp_msg_0.query_channel = 241U;
    tmp_msg_0.reply_channel = 174U;
    tmp_msg_0.transponder_delay = 115U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2136805070214084;
    msg.y = 0.3334951968547236;
    msg.var_x = 0.004827761967293842;
    msg.var_y = 0.04027353881382556;
    msg.distance = 0.34524435236540785;

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
    msg.setTimeStamp(0.11356089396126912);
    msg.setSource(28417U);
    msg.setSourceEntity(128U);
    msg.setDestination(2900U);
    msg.setDestinationEntity(91U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XSFBVWPCYLIYIFRVOXUQWXHKLNXYCVVANWBVLJCASLPBVIYJOCRRUDYMFSEHGUGDHOFMIGNYCEIZRGSQCOQQSVJMFKLQETMCQGUFDERRTLDADTIHIWSDSKJFENBTEPPTMXABOICMJKATYASQOOOEQWEIPAPJBIPFDNTNZMUJZRYYKAMCZMDSWPXGRNCYOXGXUPXRVBKGOKHTKBURHZKUNWKHWGE");
    tmp_msg_0.lat = 0.38609763586877166;
    tmp_msg_0.lon = 0.4997508145677064;
    tmp_msg_0.depth = 0.5842222631376762;
    tmp_msg_0.query_channel = 17U;
    tmp_msg_0.reply_channel = 193U;
    tmp_msg_0.transponder_delay = 211U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6789176993393903;
    msg.y = 0.09260774002557681;
    msg.var_x = 0.006431286740703479;
    msg.var_y = 0.15426987708363937;
    msg.distance = 0.9013502167697196;

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
    msg.setTimeStamp(0.11328419691951197);
    msg.setSource(57645U);
    msg.setSourceEntity(124U);
    msg.setDestination(62761U);
    msg.setDestinationEntity(227U);
    msg.state = 7U;

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
    msg.setTimeStamp(0.19298489050451018);
    msg.setSource(55199U);
    msg.setSourceEntity(150U);
    msg.setDestination(63818U);
    msg.setDestinationEntity(41U);
    msg.state = 128U;

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
    msg.setTimeStamp(0.8760454807663873);
    msg.setSource(18150U);
    msg.setSourceEntity(47U);
    msg.setDestination(54904U);
    msg.setDestinationEntity(164U);
    msg.state = 60U;

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
    msg.setTimeStamp(0.06195630650500572);
    msg.setSource(65188U);
    msg.setSourceEntity(189U);
    msg.setDestination(61246U);
    msg.setDestinationEntity(183U);
    msg.x = 0.5927749877658428;
    msg.y = 0.22954519888414626;
    msg.z = 0.9947720143025074;

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
    msg.setTimeStamp(0.9251182636666377);
    msg.setSource(42626U);
    msg.setSourceEntity(148U);
    msg.setDestination(28294U);
    msg.setDestinationEntity(155U);
    msg.x = 0.9276216357585366;
    msg.y = 0.04678132395118284;
    msg.z = 0.8147296158629685;

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
    msg.setTimeStamp(0.01621447417765365);
    msg.setSource(48782U);
    msg.setSourceEntity(142U);
    msg.setDestination(48899U);
    msg.setDestinationEntity(162U);
    msg.x = 0.30622713457720796;
    msg.y = 0.07934054877109176;
    msg.z = 0.4930334850486978;

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
    msg.setTimeStamp(0.37813750241694266);
    msg.setSource(6834U);
    msg.setSourceEntity(153U);
    msg.setDestination(10994U);
    msg.setDestinationEntity(197U);
    msg.va = 0.6416276598017008;
    msg.aoa = 0.7940253937312918;
    msg.ssa = 0.14934656017731918;

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
    msg.setTimeStamp(0.019306475116900534);
    msg.setSource(35589U);
    msg.setSourceEntity(42U);
    msg.setDestination(4069U);
    msg.setDestinationEntity(111U);
    msg.va = 0.41363711346561405;
    msg.aoa = 0.08242127938242572;
    msg.ssa = 0.6039368374610979;

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
    msg.setTimeStamp(0.5190903442297965);
    msg.setSource(57220U);
    msg.setSourceEntity(235U);
    msg.setDestination(55534U);
    msg.setDestinationEntity(85U);
    msg.va = 0.7517584805425097;
    msg.aoa = 0.49740582029216796;
    msg.ssa = 0.6601308058016883;

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
    msg.setTimeStamp(0.3920715940452505);
    msg.setSource(14950U);
    msg.setSourceEntity(72U);
    msg.setDestination(58070U);
    msg.setDestinationEntity(143U);
    msg.value = 0.4576892349034891;

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
    msg.setTimeStamp(0.5107627931434092);
    msg.setSource(30007U);
    msg.setSourceEntity(69U);
    msg.setDestination(10861U);
    msg.setDestinationEntity(54U);
    msg.value = 0.415053442367716;

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
    msg.setTimeStamp(0.771398962726506);
    msg.setSource(41696U);
    msg.setSourceEntity(181U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(81U);
    msg.value = 0.2076246204979716;

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
    msg.setTimeStamp(0.5170950978233565);
    msg.setSource(3886U);
    msg.setSourceEntity(0U);
    msg.setDestination(55151U);
    msg.setDestinationEntity(211U);
    msg.value = 0.5269557004790465;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.9276834867991568);
    msg.setSource(9174U);
    msg.setSourceEntity(42U);
    msg.setDestination(17436U);
    msg.setDestinationEntity(226U);
    msg.value = 0.14938538753032682;
    msg.z_units = 224U;

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
    msg.setTimeStamp(0.15357097450951418);
    msg.setSource(27780U);
    msg.setSourceEntity(65U);
    msg.setDestination(7855U);
    msg.setDestinationEntity(72U);
    msg.value = 0.9496151345042217;
    msg.z_units = 25U;

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
    msg.setTimeStamp(0.47885474491286717);
    msg.setSource(42812U);
    msg.setSourceEntity(49U);
    msg.setDestination(5047U);
    msg.setDestinationEntity(147U);
    msg.value = 0.196765925334358;
    msg.speed_units = 18U;

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
    msg.setTimeStamp(0.9274259041128938);
    msg.setSource(8583U);
    msg.setSourceEntity(195U);
    msg.setDestination(430U);
    msg.setDestinationEntity(212U);
    msg.value = 0.5583093645382975;
    msg.speed_units = 252U;

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
    msg.setTimeStamp(0.6229866391258122);
    msg.setSource(21773U);
    msg.setSourceEntity(246U);
    msg.setDestination(19431U);
    msg.setDestinationEntity(60U);
    msg.value = 0.8242163230569749;
    msg.speed_units = 181U;

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
    msg.setTimeStamp(0.818526052499858);
    msg.setSource(46909U);
    msg.setSourceEntity(102U);
    msg.setDestination(47159U);
    msg.setDestinationEntity(199U);
    msg.value = 0.35068915730688643;

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
    msg.setTimeStamp(0.22035227836063842);
    msg.setSource(17386U);
    msg.setSourceEntity(141U);
    msg.setDestination(54290U);
    msg.setDestinationEntity(39U);
    msg.value = 0.6807683044704442;

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
    msg.setTimeStamp(0.09914529643980818);
    msg.setSource(17435U);
    msg.setSourceEntity(10U);
    msg.setDestination(58587U);
    msg.setDestinationEntity(251U);
    msg.value = 0.9024735726669579;

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
    msg.setTimeStamp(0.7359169242324788);
    msg.setSource(51682U);
    msg.setSourceEntity(0U);
    msg.setDestination(65421U);
    msg.setDestinationEntity(190U);
    msg.value = 0.6116959763112795;

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
    msg.setTimeStamp(0.041019615861350056);
    msg.setSource(22170U);
    msg.setSourceEntity(187U);
    msg.setDestination(51542U);
    msg.setDestinationEntity(26U);
    msg.value = 0.9901508199469061;

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
    msg.setTimeStamp(0.12323896682425639);
    msg.setSource(26481U);
    msg.setSourceEntity(150U);
    msg.setDestination(19233U);
    msg.setDestinationEntity(55U);
    msg.value = 0.43507908473936696;

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
    msg.setTimeStamp(0.545878856316739);
    msg.setSource(52847U);
    msg.setSourceEntity(183U);
    msg.setDestination(45727U);
    msg.setDestinationEntity(116U);
    msg.value = 0.547970806446791;

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
    msg.setTimeStamp(0.24779423346024843);
    msg.setSource(57643U);
    msg.setSourceEntity(58U);
    msg.setDestination(6236U);
    msg.setDestinationEntity(3U);
    msg.value = 0.31519572477659663;

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
    msg.setTimeStamp(0.38309642289929835);
    msg.setSource(13986U);
    msg.setSourceEntity(113U);
    msg.setDestination(318U);
    msg.setDestinationEntity(143U);
    msg.value = 0.4517513019245367;

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
    msg.setTimeStamp(0.24614845753355696);
    msg.setSource(62466U);
    msg.setSourceEntity(172U);
    msg.setDestination(29615U);
    msg.setDestinationEntity(18U);
    msg.path_ref = 1293507481U;
    msg.start_lat = 0.6668885535649165;
    msg.start_lon = 0.8827186234427215;
    msg.start_z = 0.1831229341560866;
    msg.start_z_units = 176U;
    msg.end_lat = 0.34488976397659077;
    msg.end_lon = 0.8392260759237652;
    msg.end_z = 0.2580327960309423;
    msg.end_z_units = 92U;
    msg.speed = 0.34993198355581323;
    msg.speed_units = 104U;
    msg.lradius = 0.16431067590299164;
    msg.flags = 92U;

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
    msg.setTimeStamp(0.1981133556405975);
    msg.setSource(40086U);
    msg.setSourceEntity(189U);
    msg.setDestination(64491U);
    msg.setDestinationEntity(61U);
    msg.path_ref = 126982072U;
    msg.start_lat = 0.8878909479726003;
    msg.start_lon = 0.2540268581142253;
    msg.start_z = 0.7027907602908756;
    msg.start_z_units = 133U;
    msg.end_lat = 0.5274341226310831;
    msg.end_lon = 0.7089763633486396;
    msg.end_z = 0.1793154549262862;
    msg.end_z_units = 113U;
    msg.speed = 0.5662596461772638;
    msg.speed_units = 6U;
    msg.lradius = 0.053762652281818646;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.5265934519919555);
    msg.setSource(24186U);
    msg.setSourceEntity(124U);
    msg.setDestination(35989U);
    msg.setDestinationEntity(158U);
    msg.path_ref = 3705666742U;
    msg.start_lat = 0.43481281866425614;
    msg.start_lon = 0.09223004392923562;
    msg.start_z = 0.15418634140991305;
    msg.start_z_units = 235U;
    msg.end_lat = 0.8791696010738385;
    msg.end_lon = 0.8262202125727103;
    msg.end_z = 0.33099068238301443;
    msg.end_z_units = 71U;
    msg.speed = 0.707083329968403;
    msg.speed_units = 228U;
    msg.lradius = 0.44825117674818926;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.039611743878546046);
    msg.setSource(34063U);
    msg.setSourceEntity(73U);
    msg.setDestination(23792U);
    msg.setDestinationEntity(198U);
    msg.x = 0.9707409187155482;
    msg.y = 0.7911399631360962;
    msg.z = 0.4898288337998652;
    msg.k = 0.5440581166560858;
    msg.m = 0.9776314753213635;
    msg.n = 0.28058133978093647;
    msg.flags = 66U;

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
    msg.setTimeStamp(0.6691875922786118);
    msg.setSource(31237U);
    msg.setSourceEntity(81U);
    msg.setDestination(3231U);
    msg.setDestinationEntity(198U);
    msg.x = 0.8378491967551399;
    msg.y = 0.195745958774991;
    msg.z = 0.4351376314097293;
    msg.k = 0.9886131661247678;
    msg.m = 0.5094088489775459;
    msg.n = 0.7372451547543848;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.9609951942699653);
    msg.setSource(38501U);
    msg.setSourceEntity(251U);
    msg.setDestination(2425U);
    msg.setDestinationEntity(18U);
    msg.x = 0.8225811488686775;
    msg.y = 0.10597360754731422;
    msg.z = 0.7566110271440659;
    msg.k = 0.981247840981562;
    msg.m = 0.09664381051657167;
    msg.n = 0.8342575004530788;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.13443107667246246);
    msg.setSource(10796U);
    msg.setSourceEntity(207U);
    msg.setDestination(16154U);
    msg.setDestinationEntity(91U);
    msg.value = 0.33527904254618557;

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
    msg.setTimeStamp(0.225259208151118);
    msg.setSource(39492U);
    msg.setSourceEntity(228U);
    msg.setDestination(19919U);
    msg.setDestinationEntity(78U);
    msg.value = 0.8707468787350258;

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
    msg.setTimeStamp(0.7927897321699255);
    msg.setSource(21149U);
    msg.setSourceEntity(102U);
    msg.setDestination(7496U);
    msg.setDestinationEntity(164U);
    msg.value = 0.03576156522929208;

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
    msg.setTimeStamp(0.14065084228491043);
    msg.setSource(8229U);
    msg.setSourceEntity(39U);
    msg.setDestination(950U);
    msg.setDestinationEntity(227U);
    msg.u = 0.7751113848513892;
    msg.v = 0.6506720123367737;
    msg.w = 0.7131829885907909;
    msg.p = 0.37730265105242033;
    msg.q = 0.04128797738769896;
    msg.r = 0.7215671296329;
    msg.flags = 121U;

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
    msg.setTimeStamp(0.1558968828924462);
    msg.setSource(41805U);
    msg.setSourceEntity(251U);
    msg.setDestination(38631U);
    msg.setDestinationEntity(227U);
    msg.u = 0.08595893450582048;
    msg.v = 0.4959352213119955;
    msg.w = 0.5159042058295372;
    msg.p = 0.042704262547866856;
    msg.q = 0.5465136566849027;
    msg.r = 0.7808217881738643;
    msg.flags = 35U;

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
    msg.setTimeStamp(0.9845575335592212);
    msg.setSource(25023U);
    msg.setSourceEntity(236U);
    msg.setDestination(23794U);
    msg.setDestinationEntity(69U);
    msg.u = 0.927641072764396;
    msg.v = 0.9111457519628652;
    msg.w = 0.0005390398109920147;
    msg.p = 0.5501734875626288;
    msg.q = 0.555661490477162;
    msg.r = 0.7304355546655308;
    msg.flags = 5U;

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
    msg.setTimeStamp(0.18878977887934267);
    msg.setSource(59720U);
    msg.setSourceEntity(30U);
    msg.setDestination(6040U);
    msg.setDestinationEntity(14U);
    msg.path_ref = 64282430U;
    msg.start_lat = 0.5373553332415549;
    msg.start_lon = 0.521674338015645;
    msg.start_z = 0.841747995537217;
    msg.start_z_units = 108U;
    msg.end_lat = 0.9815056149326824;
    msg.end_lon = 0.8986036353160085;
    msg.end_z = 0.3897695332506417;
    msg.end_z_units = 156U;
    msg.lradius = 0.7834378368678756;
    msg.flags = 117U;
    msg.x = 0.6736469667464042;
    msg.y = 0.38622047414801985;
    msg.z = 0.5741104228092776;
    msg.vx = 0.9904704929322208;
    msg.vy = 0.5622952898581933;
    msg.vz = 0.7554903191988237;
    msg.course_error = 0.6935405692586947;
    msg.eta = 24757U;

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
    msg.setTimeStamp(0.9397341213017191);
    msg.setSource(35362U);
    msg.setSourceEntity(210U);
    msg.setDestination(5122U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 403899316U;
    msg.start_lat = 0.8230166117256581;
    msg.start_lon = 0.5805478552773241;
    msg.start_z = 0.5288776219269764;
    msg.start_z_units = 208U;
    msg.end_lat = 0.4951852299131202;
    msg.end_lon = 0.9735243283862998;
    msg.end_z = 0.7404920133352876;
    msg.end_z_units = 230U;
    msg.lradius = 0.18321247069051716;
    msg.flags = 201U;
    msg.x = 0.17928337953827023;
    msg.y = 0.24401930926300164;
    msg.z = 0.3481106429163122;
    msg.vx = 0.6832236127721364;
    msg.vy = 0.09466929930009149;
    msg.vz = 0.6951590510234518;
    msg.course_error = 0.8982463706862559;
    msg.eta = 19425U;

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
    msg.setTimeStamp(0.8727403577384953);
    msg.setSource(64041U);
    msg.setSourceEntity(85U);
    msg.setDestination(46252U);
    msg.setDestinationEntity(0U);
    msg.path_ref = 515137446U;
    msg.start_lat = 0.9720426929700345;
    msg.start_lon = 0.9303126824151394;
    msg.start_z = 0.9797138665944082;
    msg.start_z_units = 243U;
    msg.end_lat = 0.8400597679165853;
    msg.end_lon = 0.17596574504697415;
    msg.end_z = 0.43025780879928743;
    msg.end_z_units = 54U;
    msg.lradius = 0.46083885317780127;
    msg.flags = 30U;
    msg.x = 0.7511529192319725;
    msg.y = 0.0590621239440805;
    msg.z = 0.017556914987171268;
    msg.vx = 0.12230941225960879;
    msg.vy = 0.02453324110724786;
    msg.vz = 0.6641587108972054;
    msg.course_error = 0.6367269377340599;
    msg.eta = 54753U;

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
    msg.setTimeStamp(0.8325408439012932);
    msg.setSource(16163U);
    msg.setSourceEntity(1U);
    msg.setDestination(42024U);
    msg.setDestinationEntity(51U);
    msg.k = 0.2032541189568874;
    msg.m = 0.7619076031468881;
    msg.n = 0.4102722901983614;

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
    msg.setTimeStamp(0.5802552659014418);
    msg.setSource(35851U);
    msg.setSourceEntity(87U);
    msg.setDestination(33051U);
    msg.setDestinationEntity(30U);
    msg.k = 0.7378183871370236;
    msg.m = 0.45598420928434613;
    msg.n = 0.7683280525645917;

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
    msg.setTimeStamp(0.963449406217532);
    msg.setSource(45187U);
    msg.setSourceEntity(52U);
    msg.setDestination(17973U);
    msg.setDestinationEntity(111U);
    msg.k = 0.7371453807425207;
    msg.m = 0.1968809973714919;
    msg.n = 0.6483811906324172;

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
    msg.setTimeStamp(0.4164249307922533);
    msg.setSource(20894U);
    msg.setSourceEntity(141U);
    msg.setDestination(4067U);
    msg.setDestinationEntity(72U);
    msg.p = 0.04941464894458458;
    msg.i = 0.7444396791507586;
    msg.d = 0.42999489764200216;
    msg.a = 0.3786826825677905;

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
    msg.setTimeStamp(0.5220936316916035);
    msg.setSource(16464U);
    msg.setSourceEntity(6U);
    msg.setDestination(14595U);
    msg.setDestinationEntity(233U);
    msg.p = 0.6515754049351564;
    msg.i = 0.48374957613965963;
    msg.d = 0.6085310004551822;
    msg.a = 0.6565393371652103;

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
    msg.setTimeStamp(0.8061754728849485);
    msg.setSource(48462U);
    msg.setSourceEntity(143U);
    msg.setDestination(37928U);
    msg.setDestinationEntity(74U);
    msg.p = 0.8834484008780893;
    msg.i = 0.24396647516902303;
    msg.d = 0.9952610990532439;
    msg.a = 0.21310478305136205;

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
    msg.setTimeStamp(0.2304596649996733);
    msg.setSource(51881U);
    msg.setSourceEntity(59U);
    msg.setDestination(4590U);
    msg.setDestinationEntity(119U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.5466934968754955);
    msg.setSource(23631U);
    msg.setSourceEntity(208U);
    msg.setDestination(17388U);
    msg.setDestinationEntity(66U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.23240971969815005);
    msg.setSource(39288U);
    msg.setSourceEntity(102U);
    msg.setDestination(58851U);
    msg.setDestinationEntity(213U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.1777283811765149);
    msg.setSource(45405U);
    msg.setSourceEntity(159U);
    msg.setDestination(20823U);
    msg.setDestinationEntity(176U);
    msg.x = 0.06033695314043863;
    msg.y = 0.9017045035503845;
    msg.z = 0.14327126896951126;
    msg.vx = 0.5257708075343113;
    msg.vy = 0.8836077837221611;
    msg.vz = 0.9992074359197369;
    msg.ax = 0.15476109751489875;
    msg.ay = 0.9526658906848768;
    msg.az = 0.7681617082510879;
    msg.flags = 25387U;

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
    msg.setTimeStamp(0.5267405249053712);
    msg.setSource(14529U);
    msg.setSourceEntity(103U);
    msg.setDestination(36442U);
    msg.setDestinationEntity(21U);
    msg.x = 0.5837148785933599;
    msg.y = 0.18872682479188285;
    msg.z = 0.7976857379290834;
    msg.vx = 0.9628720891115788;
    msg.vy = 0.5577207142852415;
    msg.vz = 0.9343642988674898;
    msg.ax = 0.9064599029088304;
    msg.ay = 0.44254362582504314;
    msg.az = 0.008624670971625448;
    msg.flags = 37346U;

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
    msg.setTimeStamp(0.6569405711223631);
    msg.setSource(19548U);
    msg.setSourceEntity(61U);
    msg.setDestination(33968U);
    msg.setDestinationEntity(120U);
    msg.x = 0.18296516430334864;
    msg.y = 0.36359251843157636;
    msg.z = 0.9271660850005623;
    msg.vx = 0.6385458671874449;
    msg.vy = 0.7156942850425275;
    msg.vz = 0.044087278874464286;
    msg.ax = 0.8547589742972654;
    msg.ay = 0.8416402311671541;
    msg.az = 0.1427486760554304;
    msg.flags = 42750U;

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
    msg.setTimeStamp(0.18345894978570987);
    msg.setSource(50713U);
    msg.setSourceEntity(56U);
    msg.setDestination(13988U);
    msg.setDestinationEntity(29U);
    msg.value = 0.03030698915271801;

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
    msg.setTimeStamp(0.19145609354280557);
    msg.setSource(51946U);
    msg.setSourceEntity(212U);
    msg.setDestination(40566U);
    msg.setDestinationEntity(89U);
    msg.value = 0.08503132764886856;

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
    msg.setTimeStamp(0.5461614329636181);
    msg.setSource(45644U);
    msg.setSourceEntity(1U);
    msg.setDestination(7016U);
    msg.setDestinationEntity(91U);
    msg.value = 0.5617413732650819;

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
    msg.setTimeStamp(0.14316746497056132);
    msg.setSource(33290U);
    msg.setSourceEntity(137U);
    msg.setDestination(30916U);
    msg.setDestinationEntity(202U);
    msg.timeout = 57909U;
    msg.lat = 0.6414631220245198;
    msg.lon = 0.13633716993237655;
    msg.z = 0.881760851839395;
    msg.z_units = 87U;
    msg.speed = 0.1492278371557747;
    msg.speed_units = 89U;
    msg.roll = 0.5918094597384082;
    msg.pitch = 0.23393611470439246;
    msg.yaw = 0.30528328958320816;
    msg.custom.assign("BANLQPSGHICJQDNSMUAQLPYERAQSQEOQHKYOLPOBTSRDMKAWBXDFWOPTGJFMULULFHRNPUYZPTZKRAPXTAAIRFG");

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
    msg.setTimeStamp(0.04263595630004713);
    msg.setSource(64068U);
    msg.setSourceEntity(38U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(18U);
    msg.timeout = 30212U;
    msg.lat = 0.09957607523204681;
    msg.lon = 0.33534806016904684;
    msg.z = 0.6066879821723976;
    msg.z_units = 121U;
    msg.speed = 0.7987308783692467;
    msg.speed_units = 75U;
    msg.roll = 0.5268674770178743;
    msg.pitch = 0.5896380141204061;
    msg.yaw = 0.8723565402273141;
    msg.custom.assign("YELARQSSYVTLETGATKPLCSYANBQPDIFNOJXODFCCIJYDYUJSIWSDLCWNFEROUCWBHIUADIPRZCKZQKWWKTRHEKQJGDMFMQPYOTLVCEEYJVAAOBNVRJHXVOMPOXBPKASXVUWTUNZJZOLTXVBGWFZRGRMUBRTMPJHBRFU");

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
    msg.setTimeStamp(0.7536883819985728);
    msg.setSource(62574U);
    msg.setSourceEntity(104U);
    msg.setDestination(402U);
    msg.setDestinationEntity(195U);
    msg.timeout = 40389U;
    msg.lat = 0.39167319695468006;
    msg.lon = 0.5551269678092858;
    msg.z = 0.026669094242349423;
    msg.z_units = 124U;
    msg.speed = 0.18572782016049028;
    msg.speed_units = 43U;
    msg.roll = 0.16792644517478417;
    msg.pitch = 0.15187530565591312;
    msg.yaw = 0.7922583841315135;
    msg.custom.assign("AAKDIFYFZZOQSEFCLJRRKLLQANGUQEDPSPZQOEXTXDRDXEQWBTKUTPMIRBJFMUKBINWCSWRNHUVLVGSTQYJXUGTAGIDNHNIRGZHZMISHCCUEYVYGYPGSROGZFXPSRSXAKYGJIA");

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
    msg.setTimeStamp(0.8426685873497617);
    msg.setSource(33906U);
    msg.setSourceEntity(2U);
    msg.setDestination(37003U);
    msg.setDestinationEntity(52U);
    msg.timeout = 12456U;
    msg.lat = 0.10686557258314056;
    msg.lon = 0.048956031288181934;
    msg.z = 0.33075499196483804;
    msg.z_units = 221U;
    msg.speed = 0.0011642869988010007;
    msg.speed_units = 111U;
    msg.duration = 24390U;
    msg.radius = 0.5244268636299148;
    msg.flags = 123U;
    msg.custom.assign("LPIDJXJGHIGRYPYGJGGEGFWUZSUOULAXQLTADEDJEEGXUQQVBTKPAKJHIXCYQIBDADCACFCMVBLYHUFGMTPEFZIFJPROXLRXRFSOZREVZCCFPHCFMHZDGUBVWAQIIKTFQWEMXSPRRBXZLOYWQRZVMCWMHONVOBKMFOSBJYNTNLTSEZVXNMYUNQPDOREHNQSTYWBXNMJUOHS");

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
    msg.setTimeStamp(0.31931095517430186);
    msg.setSource(42558U);
    msg.setSourceEntity(41U);
    msg.setDestination(42617U);
    msg.setDestinationEntity(68U);
    msg.timeout = 34881U;
    msg.lat = 0.46710260347860744;
    msg.lon = 0.8313699162807782;
    msg.z = 0.21018315964658374;
    msg.z_units = 155U;
    msg.speed = 0.2986807760152791;
    msg.speed_units = 242U;
    msg.duration = 65262U;
    msg.radius = 0.42546738927624184;
    msg.flags = 40U;
    msg.custom.assign("ZRMUODOBUCGBETAKNWLGHBBDYGXYTILVVPUJAAYYOGNZEFPKBPVHKMXJFRKWUZPXVPC");

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
    msg.setTimeStamp(0.045016417910798134);
    msg.setSource(20002U);
    msg.setSourceEntity(150U);
    msg.setDestination(20158U);
    msg.setDestinationEntity(36U);
    msg.timeout = 42849U;
    msg.lat = 0.038415521254046237;
    msg.lon = 0.8227160427412918;
    msg.z = 0.052900401407574904;
    msg.z_units = 99U;
    msg.speed = 0.7057647851344073;
    msg.speed_units = 15U;
    msg.duration = 34512U;
    msg.radius = 0.9349030540322588;
    msg.flags = 10U;
    msg.custom.assign("DIUVSQNASQDGRUZMQTCKSV");

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
    msg.setTimeStamp(0.3432529065064911);
    msg.setSource(978U);
    msg.setSourceEntity(2U);
    msg.setDestination(12507U);
    msg.setDestinationEntity(19U);
    msg.custom.assign("VGPYGFFPVHOOOJURXHZUJNDZSIQAMFAXQYVIPYEVWERSAEILRGWFKAWUOWJXNOOYYTNUULMVHNQFKQBLTDFKTABHKEQWMURPDCZVVOBDUNDGAVCJOCEMISHDQRBCABFZZJYKIYLHREDZQSAQDTCEMBGQGSUZLI");

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
    msg.setTimeStamp(0.15596493069470008);
    msg.setSource(46331U);
    msg.setSourceEntity(234U);
    msg.setDestination(41607U);
    msg.setDestinationEntity(212U);
    msg.custom.assign("ROEUFVMBDOFMKUDNMTLRNBFJCVRZSRGPIFWMADTIQHSSMFHFYMOIOSSICOJEMMHEHQEXGEPZNZENUOI");

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
    msg.setTimeStamp(0.6514864147505164);
    msg.setSource(39434U);
    msg.setSourceEntity(219U);
    msg.setDestination(19480U);
    msg.setDestinationEntity(126U);
    msg.custom.assign("LQKVCSGWAVISDISETVETVSGXARPVZEWLLQTEJJRATHLYPSQQUNIFTMPQBCNOFDZBMLFWDUOFICSXRBPQUKUGVNCPFNRKOALEGNENXSZIZSRW");

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
    msg.setTimeStamp(0.348134850139598);
    msg.setSource(8940U);
    msg.setSourceEntity(185U);
    msg.setDestination(47422U);
    msg.setDestinationEntity(69U);
    msg.timeout = 10669U;
    msg.lat = 0.2728532914273596;
    msg.lon = 0.60914931188121;
    msg.z = 0.772629093867687;
    msg.z_units = 246U;
    msg.duration = 27954U;
    msg.speed = 0.9492473329184162;
    msg.speed_units = 58U;
    msg.type = 185U;
    msg.radius = 0.8801622258739287;
    msg.length = 0.4879564044719651;
    msg.bearing = 0.43548327799155884;
    msg.direction = 217U;
    msg.custom.assign("KMHXYUOQYKXLYAGNKDGSVAGTVLWILGKEUHNVAFIAMRCJLWJXUMJKVAXWTKELDTDBHSURBYQBOTMBZZSLNPYYRJGHDKZOCZLBHFACQORDIIUPFAOUPRCUSXTLSPUSAMQMHCZCZPRHJSHBAVEERIJPZMAMQZQYVOQXYCHUKPTVNODBCEMFYXWFHTSNFDGOINUJSCEJXEOVZD");

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
    msg.setTimeStamp(0.14001370832894067);
    msg.setSource(42422U);
    msg.setSourceEntity(87U);
    msg.setDestination(30758U);
    msg.setDestinationEntity(125U);
    msg.timeout = 43571U;
    msg.lat = 0.08177397434869327;
    msg.lon = 0.7560531015232235;
    msg.z = 0.3449232869978147;
    msg.z_units = 87U;
    msg.duration = 31148U;
    msg.speed = 0.2852057533735781;
    msg.speed_units = 94U;
    msg.type = 80U;
    msg.radius = 0.7730361479284601;
    msg.length = 0.42282170828388643;
    msg.bearing = 0.8355123548428052;
    msg.direction = 243U;
    msg.custom.assign("YNQWVSYLISSQMNPWKPALEPZ");

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
    msg.setTimeStamp(0.40156406638563324);
    msg.setSource(20149U);
    msg.setSourceEntity(153U);
    msg.setDestination(50972U);
    msg.setDestinationEntity(115U);
    msg.timeout = 9935U;
    msg.lat = 0.13122311904137518;
    msg.lon = 0.6267587324774546;
    msg.z = 0.34992517731364625;
    msg.z_units = 73U;
    msg.duration = 22431U;
    msg.speed = 0.6907581429003135;
    msg.speed_units = 148U;
    msg.type = 74U;
    msg.radius = 0.40271174779302155;
    msg.length = 0.919074574006217;
    msg.bearing = 0.4816158002150779;
    msg.direction = 240U;
    msg.custom.assign("VCTTAPFJZXWTFCDYEYOJWEPCWUHJVWSZRVWEJVTRXOHWINEROHXXQNGFPJFOVYFKQZXNLBVLXHPHIVTCKUGSYNIQRFEDGBGHLVRGJBQGMOPUQNJAMCESMHSMDLSKIJCBRIAPIUCSEQXAIMLQBCDIZTKVYRKJVLCELMPFRUHSRMAUTDTZINAERXHBTDXGEASLZKUFCAYKNZYPOGMBK");

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
    msg.setTimeStamp(0.015321911988428583);
    msg.setSource(14416U);
    msg.setSourceEntity(85U);
    msg.setDestination(8490U);
    msg.setDestinationEntity(207U);
    msg.duration = 63764U;
    msg.custom.assign("ZBVCZBTEFGISMOTEXOLRFUBXDDMMJBDTEASSKCQHSRLKQMQYSLGBOYUYAJKHRNCUHOJBIDWKNUNCAXGOTVRVFFAWVQLYJVFFUDQHZKXIZJRAUWHNZILIGBZPDCCUSSFCXYQGIVYJLEURBNZKDOIZAPHWBNPFYASEUETLNCMMAGMPYMIVZDUIKTMCEMPLPWRNGYVZFRGXQFVKYQJXIECTKGSOOTXJHAEOJWPGPTWJLR");

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
    msg.setTimeStamp(0.6524746933637009);
    msg.setSource(64271U);
    msg.setSourceEntity(174U);
    msg.setDestination(51050U);
    msg.setDestinationEntity(20U);
    msg.duration = 4471U;
    msg.custom.assign("JWNFFEVOUYHRZKVZWJPCKCQJEAYCIRPYEMATXMGRPJPBOAUZPXHOIV");

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
    msg.setTimeStamp(0.5026571480536861);
    msg.setSource(42556U);
    msg.setSourceEntity(165U);
    msg.setDestination(27474U);
    msg.setDestinationEntity(136U);
    msg.duration = 43270U;
    msg.custom.assign("PUZBCVCWMQRFQKWEDUFGPPCNIGSACRZLOFWVISAMDBUVFXQVJHBEGFLTNHAMAGNHXPFLYWJVJMTDBYVBWXCOVKDSPSUHIDONXVKMSYQBEENJMGAAXTCXEGYSFOTDELAZQOXWZPIFXDDZWJLCYKZPYUHZHYTISALJKRKCMJWIKNIKJTMNINTEPYRMWYHRURQFRGPLLAEEJCZVBOCGHHOIFRADBUBNKIRXJQHYTZSOUTLRPEOODUTNKSZUQSLXGQ");

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
    msg.setTimeStamp(0.3559301020083798);
    msg.setSource(36336U);
    msg.setSourceEntity(68U);
    msg.setDestination(38222U);
    msg.setDestinationEntity(162U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1811237206U;
    tmp_msg_0.start_lat = 0.4918895666480566;
    tmp_msg_0.start_lon = 0.6087225465080747;
    tmp_msg_0.start_z = 0.6696630739782243;
    tmp_msg_0.start_z_units = 67U;
    tmp_msg_0.end_lat = 0.7719664763718082;
    tmp_msg_0.end_lon = 0.6247883276058038;
    tmp_msg_0.end_z = 0.8484885955048738;
    tmp_msg_0.end_z_units = 69U;
    tmp_msg_0.speed = 0.3034129690059246;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.lradius = 0.5645213734963758;
    tmp_msg_0.flags = 203U;
    msg.control.set(tmp_msg_0);
    msg.duration = 57730U;
    msg.custom.assign("PCSTAOIKGWTSDZHMWOXKFVYNBYWDZWQHHLTINMMETMLCKMQKBNVWSVTNPCHXTAUAFRUKWJONDRPX");

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
    msg.setTimeStamp(0.721978529870128);
    msg.setSource(19231U);
    msg.setSourceEntity(220U);
    msg.setDestination(52318U);
    msg.setDestinationEntity(114U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9399910100053578;
    tmp_msg_0.speed_units = 221U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42765U;
    msg.custom.assign("XUCMIBKYYMLZLAECEJDFHDPDSZERSQYJSNVTQBZDMWVURNZFTCVFYEICEOCSHNJZTQKASYNOTKMEIMHOOXWBWMDIGNVBFWBHPRUYUKQRVHZPGOINBKBPIBAALCCELLFFYGALTXUGKDZXJJRUOOTNGCEHIDIUPQOKYHJYNMPWEVOAPSZQXJGQARJDRCAIBQDG");

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
    msg.setTimeStamp(0.7779390152763598);
    msg.setSource(34294U);
    msg.setSourceEntity(217U);
    msg.setDestination(62911U);
    msg.setDestinationEntity(128U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1579452465U;
    tmp_msg_0.start_lat = 0.8681350926504917;
    tmp_msg_0.start_lon = 0.6711191982115211;
    tmp_msg_0.start_z = 0.1550439627495247;
    tmp_msg_0.start_z_units = 182U;
    tmp_msg_0.end_lat = 0.07508793471103992;
    tmp_msg_0.end_lon = 0.04182287300838505;
    tmp_msg_0.end_z = 0.543788430001607;
    tmp_msg_0.end_z_units = 85U;
    tmp_msg_0.speed = 0.7502664469291199;
    tmp_msg_0.speed_units = 225U;
    tmp_msg_0.lradius = 0.12515743940716417;
    tmp_msg_0.flags = 168U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55953U;
    msg.custom.assign("PZCAGPJWOBCIVUTMXHYMQFORSOSMFMRTGPIKOCTSYKZEAYBCEIBQKGYSLDKZKNXFXTJLOIERUALHVXTSUNUVKGOLRUNKJELZVVHZFFXSEWUPAXYTDERLLNFYYOQIZREQAJLMUOFVCDHAHYQFWTHQNDHPRTSCJDSBCOZJIPKNBPPDQWAJMAXYINIGQQFTLNGHNWLWSVJPGFEHDKBAJDYBTSMGOGP");

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
    msg.setTimeStamp(0.4901637781599706);
    msg.setSource(3069U);
    msg.setSourceEntity(236U);
    msg.setDestination(50370U);
    msg.setDestinationEntity(239U);
    msg.timeout = 738U;
    msg.lat = 0.4480981583007292;
    msg.lon = 0.11704385773323533;
    msg.z = 0.3065718815164368;
    msg.z_units = 7U;
    msg.speed = 0.8130806730016692;
    msg.speed_units = 107U;
    msg.bearing = 0.292194105276417;
    msg.cross_angle = 0.2392390269104715;
    msg.width = 0.8727270522977126;
    msg.length = 0.020657557097152335;
    msg.hstep = 0.316030248686745;
    msg.coff = 209U;
    msg.alternation = 7U;
    msg.flags = 246U;
    msg.custom.assign("APNGFXVVGXQZYHZRIOHCZTPZXLHFKNKVHJDJBJDTOSHFFVZFBCVWQFMWOXRMHQEPWNLLISRYKMDLHEESPMVFJURANGWELPONTBISURTMZLJYCKXGTLOXANDZLXQWRHOFIETCPAEETRYYXEGVABTVSBTMISCUDCUBJAEIUQVQPSAIYGZNYORQDEODACCZSKUNRPDYNMVBGBBSKGOJDGYWMUFQUQKJJWUNIKSZLLAO");

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
    msg.setTimeStamp(0.3202677291408257);
    msg.setSource(45645U);
    msg.setSourceEntity(188U);
    msg.setDestination(37535U);
    msg.setDestinationEntity(38U);
    msg.timeout = 39314U;
    msg.lat = 0.801062517146975;
    msg.lon = 0.8170865851546589;
    msg.z = 0.040464243117459;
    msg.z_units = 116U;
    msg.speed = 0.10005640678055294;
    msg.speed_units = 107U;
    msg.bearing = 0.46562432432457024;
    msg.cross_angle = 0.09232419782062584;
    msg.width = 0.00028171149044509125;
    msg.length = 0.6839405278169628;
    msg.hstep = 0.9765328452465648;
    msg.coff = 45U;
    msg.alternation = 3U;
    msg.flags = 53U;
    msg.custom.assign("RDWZJMBLROGFLYWFEGNYLLVCBXBWPLQWAVKHUNWWNODJZMTEEABGYDXNCNYM");

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
    msg.setTimeStamp(0.9007438951822784);
    msg.setSource(22515U);
    msg.setSourceEntity(129U);
    msg.setDestination(60885U);
    msg.setDestinationEntity(130U);
    msg.timeout = 21880U;
    msg.lat = 0.7538190563256637;
    msg.lon = 0.0009687907593494138;
    msg.z = 0.4419788884482855;
    msg.z_units = 1U;
    msg.speed = 0.3007793516237195;
    msg.speed_units = 209U;
    msg.bearing = 0.8190483594053007;
    msg.cross_angle = 0.6545764130231061;
    msg.width = 0.505277698532061;
    msg.length = 0.7610808260205345;
    msg.hstep = 0.8031579720688;
    msg.coff = 48U;
    msg.alternation = 77U;
    msg.flags = 176U;
    msg.custom.assign("UDVUNCIFJALDFSAYEHVG");

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
    msg.setTimeStamp(0.8552928194348715);
    msg.setSource(45306U);
    msg.setSourceEntity(71U);
    msg.setDestination(16921U);
    msg.setDestinationEntity(243U);
    msg.timeout = 18930U;
    msg.lat = 0.36878231729763156;
    msg.lon = 0.2777005085772881;
    msg.z = 0.5267079794002022;
    msg.z_units = 72U;
    msg.speed = 0.9652303482935471;
    msg.speed_units = 108U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9030466516959655;
    tmp_msg_0.y = 0.6656478818989899;
    tmp_msg_0.z = 0.09277405025792973;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BZJHPSUPVWMEMTZMUPTNRNMYWQGUFHSDMQVEDTXPKERNRHRZSCKIPHIRXTVOCWEKLQDMSWPSLQDLXBXPRGCANHZRWJZHCVTKBUOLEFAUKTGGPP");

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
    msg.setTimeStamp(0.6827644231624239);
    msg.setSource(14925U);
    msg.setSourceEntity(154U);
    msg.setDestination(50968U);
    msg.setDestinationEntity(100U);
    msg.timeout = 9469U;
    msg.lat = 0.42865805452318406;
    msg.lon = 0.7003001032309707;
    msg.z = 0.07753489804248825;
    msg.z_units = 49U;
    msg.speed = 0.9237110528392047;
    msg.speed_units = 73U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7474868273304904;
    tmp_msg_0.y = 0.5985287270739416;
    tmp_msg_0.z = 0.4710394691797677;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PVVRRLSKKTBVDZSORIBJXQSVZBGBRUICTCFHLFJHAPNJXQHUEATUQCDYAOPHJEZQLHWWQORFMKRMPXXGUETKPOVSYEBRPQECNUXNHIOWDKYTCTYLGHEFJHGWEIJYXGDTZICMSMVISRGAYLTLMMMIINB");

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
    msg.setTimeStamp(0.5915077633248738);
    msg.setSource(61670U);
    msg.setSourceEntity(244U);
    msg.setDestination(50746U);
    msg.setDestinationEntity(11U);
    msg.timeout = 8187U;
    msg.lat = 0.32545930488428676;
    msg.lon = 0.45509691281474307;
    msg.z = 0.638298428203819;
    msg.z_units = 162U;
    msg.speed = 0.9511537334908781;
    msg.speed_units = 186U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.3224140666441473;
    tmp_msg_0.y = 0.7951259022185527;
    tmp_msg_0.z = 0.2704472836702151;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XUGHMRWNZXETBKUFXFQUWSJSOLOEEMWJZPLKYCTXPMIUTLOAIPDSOJZWIUVINTZSJLCQIKEXFJVRJGQGDHNVHSW");

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
    msg.setTimeStamp(0.9854597151753471);
    msg.setSource(57585U);
    msg.setSourceEntity(253U);
    msg.setDestination(42011U);
    msg.setDestinationEntity(132U);
    msg.x = 0.11081046458065436;
    msg.y = 0.4885981252100283;
    msg.z = 0.1710805421863174;

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
    msg.setTimeStamp(0.9852338921631341);
    msg.setSource(35196U);
    msg.setSourceEntity(140U);
    msg.setDestination(22113U);
    msg.setDestinationEntity(24U);
    msg.x = 0.876466947425215;
    msg.y = 0.8326802698309621;
    msg.z = 0.8191472766148059;

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
    msg.setTimeStamp(0.08083452734241625);
    msg.setSource(61341U);
    msg.setSourceEntity(80U);
    msg.setDestination(36359U);
    msg.setDestinationEntity(146U);
    msg.x = 0.14010443082503987;
    msg.y = 0.19906702701408518;
    msg.z = 0.30663811835393384;

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
    msg.setTimeStamp(0.39668978012470646);
    msg.setSource(31184U);
    msg.setSourceEntity(218U);
    msg.setDestination(50648U);
    msg.setDestinationEntity(158U);
    msg.timeout = 63978U;
    msg.lat = 0.9764797967341252;
    msg.lon = 0.4505542290667096;
    msg.z = 0.886062983869216;
    msg.z_units = 179U;
    msg.amplitude = 0.6648062232031166;
    msg.pitch = 0.993890583743308;
    msg.speed = 0.492131781304718;
    msg.speed_units = 231U;
    msg.custom.assign("PWOJJWIMBNWXQTKEBTDDNMKPNGNCPRWQBYPNHMKSNICHSJMQVXYUAIKKQPIUNIRMQETYOQQTUAUYUAGXXBBQVABOYDKSGFJDRHADRKFELPYGZKISMTBGNZLRDAGLSOAGUVVPLFYLTDMSCCCZCIEESFEZKRFDRVHWFRFPLVLZLTNUZPRURXQOOJYPVAWFJSFWVLYNBAOTMECOMXTSHWGCXFXHOBWHEJKWZXOCJIJJDQHZU");

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
    msg.setTimeStamp(0.09041703908047638);
    msg.setSource(34634U);
    msg.setSourceEntity(37U);
    msg.setDestination(64924U);
    msg.setDestinationEntity(170U);
    msg.timeout = 30058U;
    msg.lat = 0.18522582790716602;
    msg.lon = 0.45627297262219435;
    msg.z = 0.05892649157374086;
    msg.z_units = 247U;
    msg.amplitude = 0.08360615069094779;
    msg.pitch = 0.4592369921175392;
    msg.speed = 0.33705210260298335;
    msg.speed_units = 14U;
    msg.custom.assign("LINMWFTZCFCOUUGXJISRXAPCKGSWCDIDIYMDEJJUCWKTXTMQVFEVYKKFIKYQGYPANDJUXLCDPEVAHJOBRUOCLISPRSVNDLVVFKRRLIQSWQNWBAHCAXTBNCGKMIDQXMYDHYPMLUE");

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
    msg.setTimeStamp(0.07451065840202009);
    msg.setSource(38038U);
    msg.setSourceEntity(33U);
    msg.setDestination(53613U);
    msg.setDestinationEntity(203U);
    msg.timeout = 37344U;
    msg.lat = 0.0004744517977904872;
    msg.lon = 0.21385748093875245;
    msg.z = 0.26728177994842417;
    msg.z_units = 65U;
    msg.amplitude = 0.6676433214585397;
    msg.pitch = 0.13983321268890936;
    msg.speed = 0.06884206773218826;
    msg.speed_units = 194U;
    msg.custom.assign("XBWZKGEIALEGSFOLIMEJOJDBIHFNGCMVAZTCSDPBTDPJKXAWWGORVSARCKBQFKBQERVLAJPYDJSJQBHTUMXSHUPKUTGSMVICIXOISEGWWANYFFKMLNQDOBBUZUIIWLNAUGLDLRJOCEPPPTSEYKJUMDWEQANJMRTAPFD");

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
    msg.setTimeStamp(0.4480372254822653);
    msg.setSource(40012U);
    msg.setSourceEntity(89U);
    msg.setDestination(38440U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.07120579307689856);
    msg.setSource(43040U);
    msg.setSourceEntity(169U);
    msg.setDestination(61242U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.46904978829249566);
    msg.setSource(40035U);
    msg.setSourceEntity(148U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.18051145311031758);
    msg.setSource(56541U);
    msg.setSourceEntity(246U);
    msg.setDestination(29832U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.6482591704943008;
    msg.lon = 0.6926957813856824;
    msg.z = 0.9293364983322854;
    msg.z_units = 123U;
    msg.radius = 0.06461129677596822;
    msg.duration = 20245U;
    msg.speed = 0.4860458515398042;
    msg.speed_units = 92U;
    msg.custom.assign("HDXOQZJVIUWTOGTVAXYLAAISKATULHFHQXIVGHYOUFVRKFWPWORGLNNGCXFSBOTPIUKNHISTTVEPFZBTIDBSWENEOECRQKRLZGYUUNKUEOBWDQQLTWIVMFEZVACPPCIHJVCFZYLCRP");

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
    msg.setTimeStamp(0.813079040777089);
    msg.setSource(54259U);
    msg.setSourceEntity(160U);
    msg.setDestination(12331U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.45331755816480046;
    msg.lon = 0.17482259778949893;
    msg.z = 0.3281324541890015;
    msg.z_units = 181U;
    msg.radius = 0.04766800125458137;
    msg.duration = 3838U;
    msg.speed = 0.7609999414054159;
    msg.speed_units = 49U;
    msg.custom.assign("XBUUQADWHJLNWFTXWQHAZCXVUTGDPCLBYMQGUTQMTSYOAFXCYXMWDYRQFRJNBSWIPHIHNBEKBTMGTBSZFUH");

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
    msg.setTimeStamp(0.4552676997475672);
    msg.setSource(36527U);
    msg.setSourceEntity(246U);
    msg.setDestination(45775U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.8622240328203582;
    msg.lon = 0.7085687551121617;
    msg.z = 0.4553106428663546;
    msg.z_units = 128U;
    msg.radius = 0.9500030521265092;
    msg.duration = 50033U;
    msg.speed = 0.021734308147125403;
    msg.speed_units = 103U;
    msg.custom.assign("EDNJDDOKJBLLJEQMJZHCWUHWZHUGCGADMSYMEQLRMSKPJHAJHNRLKEQWSNFBJNYBIFGWDSPUKYTCKXJIUZXQXDKYALBXCLSVQNRXYSEQGTQOLDOAFROVUIDHZTVPBMKSYUIPPIANIRCFGQLHEEIYITGJYQZCVSWTHOWAKVEPKMLTUXGGUROMVPYUTFOC");

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
    msg.setTimeStamp(0.6467762042368539);
    msg.setSource(10630U);
    msg.setSourceEntity(143U);
    msg.setDestination(44365U);
    msg.setDestinationEntity(143U);
    msg.timeout = 33774U;
    msg.flags = 180U;
    msg.lat = 0.08907537500876328;
    msg.lon = 0.2416270953323062;
    msg.start_z = 0.6878400967434528;
    msg.start_z_units = 209U;
    msg.end_z = 0.19221141050130697;
    msg.end_z_units = 116U;
    msg.radius = 0.5664700939203072;
    msg.speed = 0.6589449772145938;
    msg.speed_units = 62U;
    msg.custom.assign("DSKKKHUVONIFXPIPIEHPKYYSNXHQJJWQDKKPAMSVISOTFPOTBOHHLEAHWSQMQPMGDGLOLZGZBTXJMIAXRZWLGUMCDRFMOOLRERBNNKUONVQEMETCVFEIGBLUBJJACVULWPYARWUAIHTKYSDTVODTLQKHMUQDFBINGTSLTGAXGNKZCYBNBENUYEHQWFIYEWBPSIRHJWJCOZWXAVXZDFCGFFJZQDVMXUQANYRCDRLUCXRBGPC");

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
    msg.setTimeStamp(0.7989398425633353);
    msg.setSource(56355U);
    msg.setSourceEntity(5U);
    msg.setDestination(15973U);
    msg.setDestinationEntity(87U);
    msg.timeout = 25103U;
    msg.flags = 77U;
    msg.lat = 0.9399030042240962;
    msg.lon = 0.1763493394847212;
    msg.start_z = 0.04798229204009241;
    msg.start_z_units = 250U;
    msg.end_z = 0.7019951204953024;
    msg.end_z_units = 168U;
    msg.radius = 0.6881212837344626;
    msg.speed = 0.6138172628143905;
    msg.speed_units = 39U;
    msg.custom.assign("ZNXEBDSKDLARNPLTKYJKHZTRVNSIAIJEQWZAPCFZKXFZHYXXCFUAEBLLMBMYTRAMEPOOIOXBLZ");

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
    msg.setTimeStamp(0.375684722719306);
    msg.setSource(50951U);
    msg.setSourceEntity(72U);
    msg.setDestination(5145U);
    msg.setDestinationEntity(161U);
    msg.timeout = 12312U;
    msg.flags = 206U;
    msg.lat = 0.6478232797375942;
    msg.lon = 0.9657037419681784;
    msg.start_z = 0.3213849054183252;
    msg.start_z_units = 21U;
    msg.end_z = 0.6178074783828617;
    msg.end_z_units = 244U;
    msg.radius = 0.3631994688450324;
    msg.speed = 0.908007051303035;
    msg.speed_units = 212U;
    msg.custom.assign("YYRUQZEJQFHVCLQMIOXYBOUTEISYTGLZSWONLGWAKNWEHNWKGNVMJJUEZFPQNRDYKWBUAURJROUCJTFPMVFYDGCILWTKPXNIVBBMHQGSWMNOIAZJZQHARHDQIMGKTJWOGVXOCZYEPTZERCIXRHALEZXCXIWBGVYXKVCBEVCVZFHIUEKKMBTTTJALMDEGBFDNFXCPFAUBLLJRHQHPFPDSRXSLDVHCYQOAPUQSBLGSSPFTXNRJDKINOMSKWU");

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
    msg.setTimeStamp(0.6908043793239743);
    msg.setSource(16368U);
    msg.setSourceEntity(54U);
    msg.setDestination(51657U);
    msg.setDestinationEntity(10U);
    msg.timeout = 26632U;
    msg.lat = 0.3837141291570456;
    msg.lon = 0.6176887344512646;
    msg.z = 0.45355567266224717;
    msg.z_units = 104U;
    msg.speed = 0.37567819802270186;
    msg.speed_units = 13U;
    msg.custom.assign("NLAMIILUNAYMUCEYYBODKVCYNFHFFHTQUHKQHJJIENJFSSEPPMWIFZDPECRPPFUMKDYZJSNTBGAUAQOVEBECQMHZAWQNMAXKTFXDIBBRJBQHVIRICWHQKXQRELJPFHOTEKKPZYXRYKSNUZDSOCTXHXPWDJTXOVBLEGBTNVWAEJLGGZFMYSBULOCQMDKCAPNXGLGMWIGCTDMVRHJRAGSXLDID");

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
    msg.setTimeStamp(0.7950460553925087);
    msg.setSource(5420U);
    msg.setSourceEntity(253U);
    msg.setDestination(24083U);
    msg.setDestinationEntity(150U);
    msg.timeout = 44008U;
    msg.lat = 0.7661116649621983;
    msg.lon = 0.5644390325962405;
    msg.z = 0.6298128228998874;
    msg.z_units = 53U;
    msg.speed = 0.49572045157195677;
    msg.speed_units = 40U;
    msg.custom.assign("PZNEKJDHLWARMVGVBBDTURYDGXIQRTGXZJRQXAKSSGUFHBODTVAIIPFNNHKNBHCNSHKAYVIEMZDPTJF");

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
    msg.setTimeStamp(0.5886707938969714);
    msg.setSource(52895U);
    msg.setSourceEntity(153U);
    msg.setDestination(58890U);
    msg.setDestinationEntity(54U);
    msg.timeout = 43595U;
    msg.lat = 0.20161490543647587;
    msg.lon = 0.5561346638511279;
    msg.z = 0.0412815244327277;
    msg.z_units = 248U;
    msg.speed = 0.3651160168260571;
    msg.speed_units = 53U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5480552969030452;
    tmp_msg_0.y = 0.5512229071476703;
    tmp_msg_0.z = 0.3691159116417475;
    tmp_msg_0.t = 0.5560772709481188;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UUAZKKYJESDHGNWEHXJKVOCFMRVOUKYMZJTZZVDQKUZTAIQEGLXJWPYLFYOHRFXRYCVIRQRXAWFOFNJXYNEGCAOVMGWNC");

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
    msg.setTimeStamp(0.8764806648051818);
    msg.setSource(26441U);
    msg.setSourceEntity(63U);
    msg.setDestination(39139U);
    msg.setDestinationEntity(230U);
    msg.x = 0.705767511785504;
    msg.y = 0.19521312773401356;
    msg.z = 0.6968693878151726;
    msg.t = 0.12815373711114175;

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
    msg.setTimeStamp(0.454866880315437);
    msg.setSource(16937U);
    msg.setSourceEntity(164U);
    msg.setDestination(36663U);
    msg.setDestinationEntity(123U);
    msg.x = 0.4873953898286365;
    msg.y = 0.9794887105344817;
    msg.z = 0.4798299043930918;
    msg.t = 0.21952600649770582;

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
    msg.setTimeStamp(0.1429343616189772);
    msg.setSource(5014U);
    msg.setSourceEntity(179U);
    msg.setDestination(24397U);
    msg.setDestinationEntity(41U);
    msg.x = 0.7667307456425526;
    msg.y = 0.9083184135782556;
    msg.z = 0.4519989419380268;
    msg.t = 0.6365462022913688;

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
    msg.setTimeStamp(0.5288820889722016);
    msg.setSource(22587U);
    msg.setSourceEntity(189U);
    msg.setDestination(51057U);
    msg.setDestinationEntity(202U);
    msg.timeout = 30241U;
    msg.name.assign("FNMWEAPSBSHPHEVEIPRAUQXIEZNIONUXVKFVGYLSKQBCXFUGESHHQQDSYCBUXUYXXUNAELDICFPZWBNKCBQAMTDMNWGPLGSOZFJMQMJXXQTMXVCZWZLGFOTOJKWIZORRHPOS");
    msg.custom.assign("MGOYLXAKVQNWRGWTSWFHSXENFIZJBCOXWKITONURPUXLDVEZWSKJYPLSRQFTNMHYTMFVHIKDXOUUPBXPIPINHCHITRKFATAEBZWSSGAMKANGHDEARDABPCDCZKGPMWEIZHZGZQJMAMTV");

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
    msg.setTimeStamp(0.9203308396499488);
    msg.setSource(18373U);
    msg.setSourceEntity(91U);
    msg.setDestination(36492U);
    msg.setDestinationEntity(130U);
    msg.timeout = 13710U;
    msg.name.assign("NFHVMNWEBLZIJAKOOGIAFTBCLKPDVTVCCLKZVMHHHGBXFCYZFS");
    msg.custom.assign("TJWHBTMJHUSSRBVABKHOJNQUOOENWVSQSFFNMELDKCKRHCLOAJLGQNQJESXRYEVIDGGFXFQTZWYHMAVTBCQUPXTEYITJRPCWFWAHIIX");

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
    msg.setTimeStamp(0.42647255137257933);
    msg.setSource(48364U);
    msg.setSourceEntity(230U);
    msg.setDestination(31732U);
    msg.setDestinationEntity(112U);
    msg.timeout = 20966U;
    msg.name.assign("ITTBNHMUHTOPNRDIIBCRZIIBMGJRTIWMKMRPHXAEOBMNEFESVLWBOPRXKUFPDUSYSGYXWDFEDKZXWFGHOGHLZKMPQRMVADTBSHJBCPPVCGDJLXNFBJFASGVCUDZEVKRSKTAXANYUQQSLWDNQZEHPG");
    msg.custom.assign("MEUXOKKHYMUGQOCAYD");

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
    msg.setTimeStamp(0.17231541462894429);
    msg.setSource(11732U);
    msg.setSourceEntity(105U);
    msg.setDestination(10904U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.5614093685096472;
    msg.lon = 0.9833258330895068;
    msg.z = 0.3203774241702435;
    msg.z_units = 11U;
    msg.speed = 0.291887955302051;
    msg.speed_units = 47U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.34645055341486464;
    tmp_msg_0.y = 0.11751961717295578;
    tmp_msg_0.z = 0.23062267714419915;
    tmp_msg_0.t = 0.9975821693666185;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 16386U;
    tmp_msg_1.off_x = 0.3738168655431646;
    tmp_msg_1.off_y = 0.9345587479262294;
    tmp_msg_1.off_z = 0.35489894995694393;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6738121337607245;
    msg.custom.assign("DEXFVBKQOHUMZYSNCLHOS");

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
    msg.setTimeStamp(0.5555173023626307);
    msg.setSource(44317U);
    msg.setSourceEntity(36U);
    msg.setDestination(55314U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.8279105191292133;
    msg.lon = 0.17281784449559323;
    msg.z = 0.30948511964513437;
    msg.z_units = 92U;
    msg.speed = 0.9522400917483909;
    msg.speed_units = 10U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38496U;
    tmp_msg_0.off_x = 0.19362301000247206;
    tmp_msg_0.off_y = 0.48406685583234654;
    tmp_msg_0.off_z = 0.02160153484946359;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8440999846547793;
    msg.custom.assign("UQTRELJOIZJRFTPVOXGJOMLMZXWHTYKBWRYXHEATIRZJQCCWFKVDNMBBGUVKYDVQDCKBGVWMNXQAHNSAIPZUYXZHEJTZWIXXWCWPSFSUPCAREKBQZFZSSTONHTHKMMRBLNAFZDQTNTULYINQLQCHPOMPRCSBUEYPFULQSABVOLKLIONEKGVOURKINCSSVLJGMVZF");

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
    msg.setTimeStamp(0.24616932384132928);
    msg.setSource(31859U);
    msg.setSourceEntity(122U);
    msg.setDestination(65253U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.5553877421995711;
    msg.lon = 0.07162496562061227;
    msg.z = 0.3100722331936385;
    msg.z_units = 151U;
    msg.speed = 0.7700842229828351;
    msg.speed_units = 29U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60427U;
    tmp_msg_0.off_x = 0.5952822015187634;
    tmp_msg_0.off_y = 0.3984081807865465;
    tmp_msg_0.off_z = 0.07008790099955797;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.3897514286946281;
    msg.custom.assign("YGGETATIWIVJWHHTCAEEFLLJRYFYJCUUMAYBZQWPOENJFBDQYHZRFWDRMPKVAQRCONQRHYMGXCYVQFPAEWYBJOGUSSKGLTUFMZXTCUGNONFPQLHUAZJPVLVNBXCJDCSGEGN");

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
    msg.setTimeStamp(0.36924220780064754);
    msg.setSource(54063U);
    msg.setSourceEntity(181U);
    msg.setDestination(33654U);
    msg.setDestinationEntity(176U);
    msg.vid = 2570U;
    msg.off_x = 0.36507974198619164;
    msg.off_y = 0.4557638256572214;
    msg.off_z = 0.008487697559797391;

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
    msg.setTimeStamp(0.9383461674763901);
    msg.setSource(64679U);
    msg.setSourceEntity(147U);
    msg.setDestination(53246U);
    msg.setDestinationEntity(153U);
    msg.vid = 7307U;
    msg.off_x = 0.35325024200656385;
    msg.off_y = 0.9892475765945843;
    msg.off_z = 0.044133001008572426;

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
    msg.setTimeStamp(0.4163885188088047);
    msg.setSource(29428U);
    msg.setSourceEntity(237U);
    msg.setDestination(29508U);
    msg.setDestinationEntity(158U);
    msg.vid = 30980U;
    msg.off_x = 0.8314984303121348;
    msg.off_y = 0.3652721444147501;
    msg.off_z = 0.8181678740301386;

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
    msg.setTimeStamp(0.5376058874768729);
    msg.setSource(24840U);
    msg.setSourceEntity(243U);
    msg.setDestination(13760U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.8360914204341438);
    msg.setSource(56645U);
    msg.setSourceEntity(99U);
    msg.setDestination(15859U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.8235712613035402);
    msg.setSource(48887U);
    msg.setSourceEntity(121U);
    msg.setDestination(63672U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.21610780576524136);
    msg.setSource(11774U);
    msg.setSourceEntity(115U);
    msg.setDestination(24623U);
    msg.setDestinationEntity(5U);
    msg.mid = 48170U;

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
    msg.setTimeStamp(0.724522455247541);
    msg.setSource(22657U);
    msg.setSourceEntity(184U);
    msg.setDestination(53211U);
    msg.setDestinationEntity(173U);
    msg.mid = 26703U;

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
    msg.setTimeStamp(0.7510847828832916);
    msg.setSource(21852U);
    msg.setSourceEntity(137U);
    msg.setDestination(10360U);
    msg.setDestinationEntity(140U);
    msg.mid = 8704U;

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
    msg.setTimeStamp(0.20746125888129807);
    msg.setSource(23109U);
    msg.setSourceEntity(221U);
    msg.setDestination(8658U);
    msg.setDestinationEntity(185U);
    msg.state = 40U;
    msg.eta = 29573U;
    msg.info.assign("MBEZJISVABULUCOYRNZRHCUIKNNOIUHYDAZEGCJVARKY");

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
    msg.setTimeStamp(0.091024600582845);
    msg.setSource(61579U);
    msg.setSourceEntity(200U);
    msg.setDestination(65526U);
    msg.setDestinationEntity(9U);
    msg.state = 247U;
    msg.eta = 33223U;
    msg.info.assign("ZJFWPUGJTHBKTMLXPDGXKMCGLAEZSSAAEXRFOTYLTRPNUAKQQSNYSEMXSQLWKIJIUUTEPBSRMZLOYAQKIZNDSEJNIBQBDTWSHOTKGLFAGCRFJWM");

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
    msg.setTimeStamp(0.3596206771971959);
    msg.setSource(9039U);
    msg.setSourceEntity(140U);
    msg.setDestination(38903U);
    msg.setDestinationEntity(237U);
    msg.state = 27U;
    msg.eta = 51464U;
    msg.info.assign("QCVTXDWQOMYAQJUELYNBFINPLSGAVYYHEZVGBAMQDBICSKXKPAGTTJYPBBASHOEYDMOWUIHI");

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
    msg.setTimeStamp(0.8645757393634392);
    msg.setSource(39334U);
    msg.setSourceEntity(244U);
    msg.setDestination(25512U);
    msg.setDestinationEntity(53U);
    msg.system = 54213U;
    msg.duration = 24572U;
    msg.speed = 0.7004499238133678;
    msg.speed_units = 56U;
    msg.x = 0.7872650609560926;
    msg.y = 0.2881355898001634;
    msg.z = 0.49127884958794776;
    msg.z_units = 33U;

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
    msg.setTimeStamp(0.05716355237471282);
    msg.setSource(23684U);
    msg.setSourceEntity(233U);
    msg.setDestination(3723U);
    msg.setDestinationEntity(178U);
    msg.system = 49057U;
    msg.duration = 6015U;
    msg.speed = 0.8926868597905684;
    msg.speed_units = 166U;
    msg.x = 0.161940205484419;
    msg.y = 0.17107397868454288;
    msg.z = 0.33288863882327824;
    msg.z_units = 46U;

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
    msg.setTimeStamp(0.19834708073147556);
    msg.setSource(3231U);
    msg.setSourceEntity(67U);
    msg.setDestination(32254U);
    msg.setDestinationEntity(82U);
    msg.system = 22207U;
    msg.duration = 22929U;
    msg.speed = 0.1409009932961437;
    msg.speed_units = 167U;
    msg.x = 0.2633074117486446;
    msg.y = 0.7723234297339518;
    msg.z = 0.14716187028673533;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.9793116840503693);
    msg.setSource(29812U);
    msg.setSourceEntity(26U);
    msg.setDestination(41634U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.7015329246848512;
    msg.lon = 0.03664023187668031;
    msg.speed = 0.3122504422097143;
    msg.speed_units = 147U;
    msg.duration = 16491U;
    msg.sys_a = 8382U;
    msg.sys_b = 59490U;
    msg.move_threshold = 0.4645688192381543;

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
    msg.setTimeStamp(0.24571602281923466);
    msg.setSource(54173U);
    msg.setSourceEntity(186U);
    msg.setDestination(63104U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.764509334982812;
    msg.lon = 0.9052228007162808;
    msg.speed = 0.8839475157264671;
    msg.speed_units = 67U;
    msg.duration = 64603U;
    msg.sys_a = 12687U;
    msg.sys_b = 13303U;
    msg.move_threshold = 0.2940151164635004;

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
    msg.setTimeStamp(0.02002268533111584);
    msg.setSource(14204U);
    msg.setSourceEntity(115U);
    msg.setDestination(34136U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.5800524495341531;
    msg.lon = 0.01845669015560969;
    msg.speed = 0.8942889383193462;
    msg.speed_units = 35U;
    msg.duration = 45592U;
    msg.sys_a = 58479U;
    msg.sys_b = 31335U;
    msg.move_threshold = 0.21088005294955192;

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
    msg.setTimeStamp(0.5012958973206822);
    msg.setSource(12195U);
    msg.setSourceEntity(231U);
    msg.setDestination(44549U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.5875363457177217;
    msg.lon = 0.8838597393279648;
    msg.z = 0.3421647464700531;
    msg.z_units = 168U;
    msg.speed = 0.6056998174238062;
    msg.speed_units = 243U;
    msg.custom.assign("VMJQFQOHLAKXDZOWIPRIRUNCRKNBBBFBKICWVITZ");

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
    msg.setTimeStamp(0.9720794222698568);
    msg.setSource(24975U);
    msg.setSourceEntity(34U);
    msg.setDestination(49381U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.4443850478571646;
    msg.lon = 0.28271481470294657;
    msg.z = 0.921217916537737;
    msg.z_units = 63U;
    msg.speed = 0.32148343720488715;
    msg.speed_units = 78U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8881733563570127;
    tmp_msg_0.lon = 0.20938702837494194;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QNCGSYMHGUTWWSYPTSMBQPTRJNUGZKICSMJZPCKNZPJPCHPLEJEYWCHZMGULHDDDDXAXFKWKXXUMEBSOLRQKOAMJVQZEKLSAGSICILRNIYABOOWWLUXJVWWXTHBFD");

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
    msg.setTimeStamp(0.4247010589197664);
    msg.setSource(36673U);
    msg.setSourceEntity(154U);
    msg.setDestination(28132U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.7870546249746713;
    msg.lon = 0.16763320085900457;
    msg.z = 0.932809757809374;
    msg.z_units = 103U;
    msg.speed = 0.5520694767325679;
    msg.speed_units = 151U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.28076103267453856;
    tmp_msg_0.lon = 0.6845030173535329;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HBNOIQCRCRMALFHMVDMTDFRPMKJEXHEJZVNODFRKEQFBXOWISRSUHQCZJDWSIAEFMAONSDPYCPIEIRQTZMLLWNSPPAIUCTUGHYWSYNIJTAWIZKCLCZEHB");

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
    msg.setTimeStamp(0.06428048298212896);
    msg.setSource(7277U);
    msg.setSourceEntity(208U);
    msg.setDestination(8564U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.4537749363054415;
    msg.lon = 0.5829894253024658;

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
    msg.setTimeStamp(0.8883535863120547);
    msg.setSource(60676U);
    msg.setSourceEntity(124U);
    msg.setDestination(43196U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.3075764915369289;
    msg.lon = 0.4819502661276621;

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
    msg.setTimeStamp(0.4716253900591202);
    msg.setSource(2664U);
    msg.setSourceEntity(119U);
    msg.setDestination(44732U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.828604290780867;
    msg.lon = 0.2656315899616477;

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
    msg.setTimeStamp(0.3277712359118693);
    msg.setSource(59935U);
    msg.setSourceEntity(92U);
    msg.setDestination(55074U);
    msg.setDestinationEntity(254U);
    msg.timeout = 62323U;
    msg.lat = 0.4668356886463264;
    msg.lon = 0.07377519531878174;
    msg.z = 0.005448521012846874;
    msg.z_units = 28U;
    msg.pitch = 0.8062339201817963;
    msg.amplitude = 0.8109163582204794;
    msg.duration = 65524U;
    msg.speed = 0.4790176428112971;
    msg.speed_units = 7U;
    msg.radius = 0.8632278158303295;
    msg.direction = 126U;
    msg.custom.assign("ZEZIBGJWLNCGQFHZOJQIVZWGEDPNLLQSDQEMBUSDMLYREZYDOAHTSTHCNXTOLGSDMVAUIQTZAPZTPXBHYQMBKESOENGAIGDQRWXFDRNPCXMCRVIMDLTOTYDPYTAVJOCYERJXMMTJINRNUPOXBGDRHWOPUWEBCEFJITZQBNYKBSFRQMPVOYUWHKULKOPNFBZFKIXQFCAKYJBSJFHLFUULV");

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
    msg.setTimeStamp(0.18830131444086418);
    msg.setSource(31260U);
    msg.setSourceEntity(145U);
    msg.setDestination(3868U);
    msg.setDestinationEntity(16U);
    msg.timeout = 39036U;
    msg.lat = 0.8260297052900666;
    msg.lon = 0.879001968352014;
    msg.z = 0.075718174115463;
    msg.z_units = 36U;
    msg.pitch = 0.5441721125898571;
    msg.amplitude = 0.8899515240826877;
    msg.duration = 49694U;
    msg.speed = 0.8526323787772547;
    msg.speed_units = 128U;
    msg.radius = 0.7838683389220208;
    msg.direction = 228U;
    msg.custom.assign("JJOFWDCZJZAFEZKCXYQTUJAEHOSTYWOPJQLUZIVVPEWOOVIMGDNLVGZCXQDIBHXFWGFVXYTLJRNFGRIRHOXPLKNMGZWGNJNDKKAUPRTWESPNDUQBDRIVWESCHEIKLYBIXYDPKRGWUALVSGFPIQFAOXRULUVWKEJMWYQPFNQVBYJAHOMMEYNDTAEXFTXJFTT");

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
    msg.setTimeStamp(0.07962602439313515);
    msg.setSource(42922U);
    msg.setSourceEntity(134U);
    msg.setDestination(39348U);
    msg.setDestinationEntity(161U);
    msg.timeout = 59270U;
    msg.lat = 0.7477656475908988;
    msg.lon = 0.025680416419397445;
    msg.z = 0.8711010383070688;
    msg.z_units = 218U;
    msg.pitch = 0.9557508455109495;
    msg.amplitude = 0.024684240150767645;
    msg.duration = 25917U;
    msg.speed = 0.14433859264272564;
    msg.speed_units = 195U;
    msg.radius = 0.27269208900870634;
    msg.direction = 217U;
    msg.custom.assign("WOOPLXZKYXZTXJREJIRLZEYCWZKSJRPTYKSEABERNCMKZTJPBSGULKQHAHOEQYHYWCSXHHVOUNUXYMTOGKMNMCDVIULFFZGFKNLQUJIKOALOVQJYNUSXZRRIRSBEGCWGLUFKPIX");

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
    msg.setTimeStamp(0.6386545494756107);
    msg.setSource(17583U);
    msg.setSourceEntity(115U);
    msg.setDestination(11727U);
    msg.setDestinationEntity(253U);
    msg.formation_name.assign("UATXIRAWSMIVUSOPWJLHAOFFIAWRPOGQWOCYAFDKMYOHUJIRPGREZCIMOCVYGTTAYBFBXZHUBTDWJQZGWMZOEVBFNYEGKSKBPZBHIKUP");
    msg.reference_frame = 84U;
    msg.custom.assign("QZRYWHTXCBBHPLEAFHPDQEKQAXTZJEZOROLBTWBHGAMOHOGABUMKQINNCVRMPLLNBOXAVYONURAROEMDSRPQIIYKHLTZZBYAUGPKDBFEZEZSXEQDOWFXTXTDFWUCXWGNJHYMFMCVNSSDHUJDSFXQQGIVCCXNRXMLPKHRFRYGMQQZMSSJWPYCLCGUBIEVJODKCWFGYYTJJSKALEH");

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
    msg.setTimeStamp(0.7094033460871192);
    msg.setSource(221U);
    msg.setSourceEntity(188U);
    msg.setDestination(52960U);
    msg.setDestinationEntity(114U);
    msg.formation_name.assign("UBKACXIWLKUKBMHOEAKXPMDBEPNMCZWTURFRKAFSMVPSLZBWOESHLWXWOULSQNWYVLXNQTXUVQFXNSXCGM");
    msg.reference_frame = 125U;
    msg.custom.assign("JNRFQEFNFMJSTSZWZOWWWEIVOUCFHMUITXVERGYVSRYXHQPKHPDIAVXUVISOZZWYBKSTFZ");

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
    msg.setTimeStamp(0.7761337159002645);
    msg.setSource(36131U);
    msg.setSourceEntity(30U);
    msg.setDestination(17257U);
    msg.setDestinationEntity(6U);
    msg.formation_name.assign("XIQSBCPCEPHUHCBGFPMLFTLSVBPNZ");
    msg.reference_frame = 15U;
    msg.custom.assign("BRGYMCQSJKJOZGKTAJKBYBNZPWULNLHRABUYCADHEKEMVTZAZLDNQTVWEABYNIXBTURAITVXPHYUZFIIYGFGXHBEZPLRMYNRAFSEXBYXZ");

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
    msg.setTimeStamp(0.49710625364129524);
    msg.setSource(59481U);
    msg.setSourceEntity(77U);
    msg.setDestination(26373U);
    msg.setDestinationEntity(72U);
    msg.group_name.assign("AHNORZCLHPVHAGQLCLRBZODHPEULTFWESRJJTOLKIJBVPMJKIIWSDNWXJPNEGQYAXYDKKXVADIOTXPWCMOEGBDEIFEZGZXBLIGJTIFSRFYAFOXXGBGSKNVUFUU");
    msg.formation_name.assign("OQJCDHVBWWIPWTWGZBCIRDNLGHLQYYJPZCWHU");
    msg.plan_id.assign("DODTZHBFUIYZIXDZAVRWFAGTZRTRLBJHCQIENESWKXKEBSYIKTLMVRUQLMUDSPYPAUANTDZBUGBOQGQYLQQTVSEVWEJTWPLAXNMINFWVRZJVFCUZCMIEXDQRNNIRRJCHCIYXTOEJWFSDWYFHXUDGNFWUTMYMHFEZSXDKSCCXNQLKVKMJUZMACYZYOGLPARAKOSOOQOYEXSPVMJWPPFJPNTAVAI");
    msg.description.assign("NANKUAUMOBXLPSFXBHWGDQVEMITEJPDMIQEFYWAJHWOGHHDLSNYIMBKNHOSWCSXTTIGUZAPUWFWYPQURCVGPLLJKNVIEQKOZEXZRPYGLXCRJQWUCIZRQVKYVAATUSGFYMZNSVINHHAEB");
    msg.leader_speed = 0.6660443666359348;
    msg.leader_bank_lim = 0.4770526120304369;
    msg.pos_sim_err_lim = 0.19608701943056628;
    msg.pos_sim_err_wrn = 0.7004820426868371;
    msg.pos_sim_err_timeout = 40892U;
    msg.converg_max = 0.4083577602262579;
    msg.converg_timeout = 11414U;
    msg.comms_timeout = 60812U;
    msg.turb_lim = 0.45396038334359634;
    msg.custom.assign("PEAGFIWQTJITUINNXGNVBLWLEIKKPUFFXYEPIMRSWRSBAQTAD");

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
    msg.setTimeStamp(0.45704023950274664);
    msg.setSource(43055U);
    msg.setSourceEntity(65U);
    msg.setDestination(40342U);
    msg.setDestinationEntity(209U);
    msg.group_name.assign("UDMWZURPWQTXGCUHXEIFLSMTXDPADCTVEFNJKBHCKBMNBBNNJRLGHEKEYFSDSMRUSTDPTBZ");
    msg.formation_name.assign("MMLTFZOKMHMQGQWTHPDMFLUATOAANKHAGGVQSGEIGQCRVYFAEZPFRTUVSXVWROWKTNZGCICHYUGPXDQCQAWUOSYYQEPVZCHRUQUKVERZMVXACSYBNJLVECUJDFMMSWMYBVIWIBZFYJCOODEDQJOHXSRBJAXKLYONUKBHLILXTXSNNITJDCLBFVWDNSKSJWFAOTJLIABHWPIBWPTXDKPZIDLFRRMPENIZRHYXJKKERLNGBQEYPHDXSNTUFE");
    msg.plan_id.assign("RLABMUPLMAEBAPUVDFAMMNXKUJMEPGZLCIYFKWHCYDZKIKKWHCJXQLXGNZNJBDMAGQHMIPXESUSSSPIKVAMQVCDRQIXXYHUXXJZTCOBTNGLOHBYHOJDBVMVYROBCXYCOOUMSNWGTZUGKBHWCGHWFQKYIYFHDRWEEHEYTJ");
    msg.description.assign("MNFFJEGCBLYUCDCUJOVOAJIEHEBVONKHIFATLRAMRCDZDLALNSZRBICJYRUTPPGHCOMOQPCNSGDYAWEPEQEVNWNBUFKIBGAJPZSFLKWDGXUJUSEIXSTMVXPBQOWNXPQZQOUCQKCLHZKEYZRKIMGLYVSNOWTMZZUIKZMYUYHBVFHIJGROXVSXPN");
    msg.leader_speed = 0.5590971291183806;
    msg.leader_bank_lim = 0.6740349577428851;
    msg.pos_sim_err_lim = 0.9613159869296019;
    msg.pos_sim_err_wrn = 0.15409398830337906;
    msg.pos_sim_err_timeout = 52316U;
    msg.converg_max = 0.07124587975122743;
    msg.converg_timeout = 2341U;
    msg.comms_timeout = 38633U;
    msg.turb_lim = 0.24878806028889666;
    msg.custom.assign("NFWHAJOYJAARAHLSNCYAGWGQJKPOKOYMDQZBTJUYFPSKNNHRBLYOIPDVMHBDFEYRKCQTYJLFUXXPMEDVGZBMATEOPSXTWIZUFGAVUIFPZLWRNXSSHIGWTDELQPNVICCVQQWSRLFUVOXTGTTSEHZMNCKLEBXHWBZXRNKIFVPMVEMUFXWNBGWCBZTOGROUNAUJY");

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
    msg.setTimeStamp(0.4537514213693016);
    msg.setSource(45768U);
    msg.setSourceEntity(152U);
    msg.setDestination(7652U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("XWUVKMBRKLVWWLOGTLBYIQXUHGCRMFVAESIRSRZVEWPSQXGZWGZYVFHNKCKCPMVYPFCULTSNCDJROSPHHGODTEWFLUJDISLXWPYKVIZZCHKJPOEEAYMOQCLMFAQBRFQAGMRWDH");
    msg.formation_name.assign("DORTAPVOPXIHNZJRRZJQZSVMXIVLSBKYUCDMNLWSTCKHTIHXNRLDXO");
    msg.plan_id.assign("MZLPEOPJYTDXHMKSLSOBEQUVTYEVEKZTGIFNFVBRPRPCYDIZQTSOACOJBGGGUAVVKDOEISUFWETRX");
    msg.description.assign("JZYWYSIEPWNBCNZK");
    msg.leader_speed = 0.07532584163982448;
    msg.leader_bank_lim = 0.44120536853371695;
    msg.pos_sim_err_lim = 0.20038912135081877;
    msg.pos_sim_err_wrn = 0.07131191140710536;
    msg.pos_sim_err_timeout = 13885U;
    msg.converg_max = 0.10949232772717121;
    msg.converg_timeout = 36414U;
    msg.comms_timeout = 47518U;
    msg.turb_lim = 0.6176911734741067;
    msg.custom.assign("CIXIFRBPUUNSZIITPKHBXSHYGFMOQJTVWPGTQORMFUPYXUBFNAWDLHNHNQKTRZTLDQMWOWNKRJXJEMLGTGFBADPLNNLDBVXPECUMSQBKOGAIIKTLODOFYSYEAZOTSUHWZXJVKCGDDLLERHAQYNMF");

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
    msg.setTimeStamp(0.0393156820619881);
    msg.setSource(50488U);
    msg.setSourceEntity(162U);
    msg.setDestination(5084U);
    msg.setDestinationEntity(23U);
    msg.control_src = 53911U;
    msg.control_ent = 40U;
    msg.timeout = 0.05025926361135413;
    msg.loiter_radius = 0.1154724367020522;
    msg.altitude_interval = 0.6507528533630594;

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
    msg.setTimeStamp(0.43169677586044375);
    msg.setSource(22296U);
    msg.setSourceEntity(239U);
    msg.setDestination(16545U);
    msg.setDestinationEntity(40U);
    msg.control_src = 43795U;
    msg.control_ent = 170U;
    msg.timeout = 0.1171236988202149;
    msg.loiter_radius = 0.6070314728860793;
    msg.altitude_interval = 0.28088211560658527;

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
    msg.setTimeStamp(0.7095880522901442);
    msg.setSource(20827U);
    msg.setSourceEntity(237U);
    msg.setDestination(16711U);
    msg.setDestinationEntity(90U);
    msg.control_src = 19376U;
    msg.control_ent = 178U;
    msg.timeout = 0.5994249592231613;
    msg.loiter_radius = 0.9426702434125542;
    msg.altitude_interval = 0.4685106210351294;

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
    msg.setTimeStamp(0.23932091731400162);
    msg.setSource(18630U);
    msg.setSourceEntity(153U);
    msg.setDestination(53694U);
    msg.setDestinationEntity(184U);
    msg.flags = 132U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.13524816047859456;
    tmp_msg_0.speed_units = 219U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9065108099139338;
    tmp_msg_1.z_units = 233U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7024058940509298;
    msg.lon = 0.2702350164708417;
    msg.radius = 0.9475607165442956;

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
    msg.setTimeStamp(0.33653298886013283);
    msg.setSource(40930U);
    msg.setSourceEntity(130U);
    msg.setDestination(30691U);
    msg.setDestinationEntity(194U);
    msg.flags = 86U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4135263320702478;
    tmp_msg_0.speed_units = 77U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9353168099549121;
    tmp_msg_1.z_units = 221U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6123927307159047;
    msg.lon = 0.3735403414854982;
    msg.radius = 0.6959498675272596;

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
    msg.setTimeStamp(0.9274166254158721);
    msg.setSource(43154U);
    msg.setSourceEntity(71U);
    msg.setDestination(26045U);
    msg.setDestinationEntity(209U);
    msg.flags = 146U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.453372061361788;
    tmp_msg_0.speed_units = 219U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6479975843169058;
    tmp_msg_1.z_units = 73U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7148134827319188;
    msg.lon = 0.5388431978627066;
    msg.radius = 0.7652503752692863;

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
    msg.setTimeStamp(0.9235322806457706);
    msg.setSource(38573U);
    msg.setSourceEntity(12U);
    msg.setDestination(37342U);
    msg.setDestinationEntity(248U);
    msg.control_src = 38228U;
    msg.control_ent = 62U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 181U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3851707528979673;
    tmp_tmp_msg_0_0.speed_units = 210U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.41016874854161633;
    tmp_tmp_msg_0_1.z_units = 85U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7628334167089587;
    tmp_msg_0.lon = 0.059448890656126685;
    tmp_msg_0.radius = 0.46912003202554986;
    msg.reference.set(tmp_msg_0);
    msg.state = 132U;
    msg.proximity = 56U;

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
    msg.setTimeStamp(0.12948420143562955);
    msg.setSource(6446U);
    msg.setSourceEntity(242U);
    msg.setDestination(6520U);
    msg.setDestinationEntity(245U);
    msg.control_src = 35514U;
    msg.control_ent = 184U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 36U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.36215141992319944;
    tmp_tmp_msg_0_0.speed_units = 224U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5594013395492868;
    tmp_tmp_msg_0_1.z_units = 227U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7217431002503231;
    tmp_msg_0.lon = 0.3362528314439551;
    tmp_msg_0.radius = 0.7919340375512801;
    msg.reference.set(tmp_msg_0);
    msg.state = 241U;
    msg.proximity = 198U;

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
    msg.setTimeStamp(0.0702065972885596);
    msg.setSource(36700U);
    msg.setSourceEntity(114U);
    msg.setDestination(12771U);
    msg.setDestinationEntity(202U);
    msg.control_src = 61508U;
    msg.control_ent = 239U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 24U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7672775658968334;
    tmp_tmp_msg_0_0.speed_units = 105U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5635930592551783;
    tmp_tmp_msg_0_1.z_units = 80U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9777519077553726;
    tmp_msg_0.lon = 0.61462262858301;
    tmp_msg_0.radius = 0.5873422281848878;
    msg.reference.set(tmp_msg_0);
    msg.state = 51U;
    msg.proximity = 100U;

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
    msg.setTimeStamp(0.5645940251653928);
    msg.setSource(34043U);
    msg.setSourceEntity(118U);
    msg.setDestination(13353U);
    msg.setDestinationEntity(98U);
    msg.ax_cmd = 0.869761865911185;
    msg.ay_cmd = 0.19739894604196595;
    msg.az_cmd = 0.8153580032468456;
    msg.ax_des = 0.34174316235908064;
    msg.ay_des = 0.01697970994358844;
    msg.az_des = 0.49957135900481886;
    msg.virt_err_x = 0.21049122929694375;
    msg.virt_err_y = 0.4486974500985701;
    msg.virt_err_z = 0.3192774028864931;
    msg.surf_fdbk_x = 0.2861467827698462;
    msg.surf_fdbk_y = 0.44387983302446654;
    msg.surf_fdbk_z = 0.6386841083060458;
    msg.surf_unkn_x = 0.21228413311203786;
    msg.surf_unkn_y = 0.09491687885362055;
    msg.surf_unkn_z = 0.695247333589733;
    msg.ss_x = 0.43126217422669977;
    msg.ss_y = 0.021885523412990215;
    msg.ss_z = 0.5687116830074368;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IHCPRWTPEOANLXFOVUPHIOBVJVHDXZXPUDSADCZJXYVJPBUARNCRMOKJOERSNLZDODTZKNYSVXBHKCGEAYIUSGVNOEWVFHMTICLSXFBZVEARJMJGJIOTUQABLTIQBSSBGTPEEEQIYRDNDNXRPKAWYHJZMXFLMDIEVLPTYWUGQDZBJHOQWRMYFTRMUWIQKMPFTCCCUGKHLVNLWGAGFSMWCHYAJYQ");
    tmp_msg_0.dist = 0.7817174878176032;
    tmp_msg_0.err = 0.9803994342910143;
    tmp_msg_0.ctrl_imp = 0.607662024050518;
    tmp_msg_0.rel_dir_x = 0.6291680461329733;
    tmp_msg_0.rel_dir_y = 0.01433755398430836;
    tmp_msg_0.rel_dir_z = 0.11983456000507875;
    tmp_msg_0.err_x = 0.6003820290078254;
    tmp_msg_0.err_y = 0.8206528319752153;
    tmp_msg_0.err_z = 0.9328180730829599;
    tmp_msg_0.rf_err_x = 0.5736071195711183;
    tmp_msg_0.rf_err_y = 0.40591369536726674;
    tmp_msg_0.rf_err_z = 0.6158958439869155;
    tmp_msg_0.rf_err_vx = 0.627712770787594;
    tmp_msg_0.rf_err_vy = 0.9315524691741162;
    tmp_msg_0.rf_err_vz = 0.4495484864247974;
    tmp_msg_0.ss_x = 0.3612725832553543;
    tmp_msg_0.ss_y = 0.8900245387159798;
    tmp_msg_0.ss_z = 0.523460227176793;
    tmp_msg_0.virt_err_x = 0.02748645635021718;
    tmp_msg_0.virt_err_y = 0.7548793916976402;
    tmp_msg_0.virt_err_z = 0.3266717816968506;
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
    msg.setTimeStamp(0.4147867339323429);
    msg.setSource(64847U);
    msg.setSourceEntity(102U);
    msg.setDestination(33707U);
    msg.setDestinationEntity(17U);
    msg.ax_cmd = 0.5578430158774531;
    msg.ay_cmd = 0.5521675248800358;
    msg.az_cmd = 0.7084755164806725;
    msg.ax_des = 0.13643956923525002;
    msg.ay_des = 0.15122062831827776;
    msg.az_des = 0.1373421673319103;
    msg.virt_err_x = 0.9222886963240585;
    msg.virt_err_y = 0.5905733418510402;
    msg.virt_err_z = 0.9726864398886951;
    msg.surf_fdbk_x = 0.8471587998065089;
    msg.surf_fdbk_y = 0.8868117352418289;
    msg.surf_fdbk_z = 0.6078641560035984;
    msg.surf_unkn_x = 0.6859396733183244;
    msg.surf_unkn_y = 0.5910421598114524;
    msg.surf_unkn_z = 0.3037653939448298;
    msg.ss_x = 0.5186304921124315;
    msg.ss_y = 0.23357797381981982;
    msg.ss_z = 0.3886217377295209;

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
    msg.setTimeStamp(0.4462172986695929);
    msg.setSource(37375U);
    msg.setSourceEntity(203U);
    msg.setDestination(53215U);
    msg.setDestinationEntity(174U);
    msg.ax_cmd = 0.62720821278051;
    msg.ay_cmd = 0.6604698139872969;
    msg.az_cmd = 0.1996651471053581;
    msg.ax_des = 0.23760543399143252;
    msg.ay_des = 0.14987036761002392;
    msg.az_des = 0.4225762626132292;
    msg.virt_err_x = 0.08058779586983233;
    msg.virt_err_y = 0.7301967960159236;
    msg.virt_err_z = 0.7430036286624729;
    msg.surf_fdbk_x = 0.4895252601828308;
    msg.surf_fdbk_y = 0.34365740589373894;
    msg.surf_fdbk_z = 0.643607244794417;
    msg.surf_unkn_x = 0.21457237705224697;
    msg.surf_unkn_y = 0.43368396826239963;
    msg.surf_unkn_z = 0.43129709004500005;
    msg.ss_x = 0.8144522311210302;
    msg.ss_y = 0.2695565801473232;
    msg.ss_z = 0.031399402674408106;

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
    msg.setTimeStamp(0.2749151869313624);
    msg.setSource(59945U);
    msg.setSourceEntity(96U);
    msg.setDestination(63652U);
    msg.setDestinationEntity(6U);
    msg.s_id.assign("NRKLGNKGTUPEWTCYBNZRFEYYEFLORWGSVRLICDKOHEIWZMATMDVDQBELSKSAODBOOUMFEILSGMFGLRLARUYRCWTTQVDTSUMHLRYPSNJICNQAANERAMUHKEBCJIFJCVUQWVO");
    msg.dist = 0.8737293600198844;
    msg.err = 0.7254039520579364;
    msg.ctrl_imp = 0.024096749820172736;
    msg.rel_dir_x = 0.6298655495598768;
    msg.rel_dir_y = 0.9746962459255967;
    msg.rel_dir_z = 0.456889668073895;
    msg.err_x = 0.29058529492405083;
    msg.err_y = 0.9175446893423301;
    msg.err_z = 0.17106281537383372;
    msg.rf_err_x = 0.6558661322329372;
    msg.rf_err_y = 0.798899506229273;
    msg.rf_err_z = 0.4963297800575339;
    msg.rf_err_vx = 0.16608606201574028;
    msg.rf_err_vy = 0.08003358047549403;
    msg.rf_err_vz = 0.9142900862677288;
    msg.ss_x = 0.41698711469494876;
    msg.ss_y = 0.5721310234705216;
    msg.ss_z = 0.757782544205761;
    msg.virt_err_x = 0.06773920077057294;
    msg.virt_err_y = 0.5706214927364436;
    msg.virt_err_z = 0.6092251573411868;

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
    msg.setTimeStamp(0.49138090162394255);
    msg.setSource(61625U);
    msg.setSourceEntity(36U);
    msg.setDestination(25950U);
    msg.setDestinationEntity(101U);
    msg.s_id.assign("KTTEDYAGMWC");
    msg.dist = 0.4917695907039845;
    msg.err = 0.18840442887854258;
    msg.ctrl_imp = 0.8059918467239632;
    msg.rel_dir_x = 0.915505215488733;
    msg.rel_dir_y = 0.44607805516054333;
    msg.rel_dir_z = 0.10178897224088301;
    msg.err_x = 0.6255425706624599;
    msg.err_y = 0.3627353918392867;
    msg.err_z = 0.5555510972730782;
    msg.rf_err_x = 0.1401135658306769;
    msg.rf_err_y = 0.020726221874554973;
    msg.rf_err_z = 0.9439308016328997;
    msg.rf_err_vx = 0.06614276135943842;
    msg.rf_err_vy = 0.02543424372547254;
    msg.rf_err_vz = 0.59820825479888;
    msg.ss_x = 0.06667364746383964;
    msg.ss_y = 0.24107305744620744;
    msg.ss_z = 0.2221318956313164;
    msg.virt_err_x = 0.6593850976383677;
    msg.virt_err_y = 0.6820281352662577;
    msg.virt_err_z = 0.5911166763771444;

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
    msg.setTimeStamp(0.44951657830792235);
    msg.setSource(60023U);
    msg.setSourceEntity(157U);
    msg.setDestination(387U);
    msg.setDestinationEntity(134U);
    msg.s_id.assign("NPTFETGAJRTMTFMTEUL");
    msg.dist = 0.9636374898126048;
    msg.err = 0.27043697639521125;
    msg.ctrl_imp = 0.17129262399555722;
    msg.rel_dir_x = 0.09021104144626546;
    msg.rel_dir_y = 0.7468865596000441;
    msg.rel_dir_z = 0.9892255792056859;
    msg.err_x = 0.25809942090885407;
    msg.err_y = 0.128739457258345;
    msg.err_z = 0.934761449096409;
    msg.rf_err_x = 0.958075674882165;
    msg.rf_err_y = 0.4508123567328761;
    msg.rf_err_z = 0.741724929851567;
    msg.rf_err_vx = 0.09190921903852856;
    msg.rf_err_vy = 0.47688816276255097;
    msg.rf_err_vz = 0.3942804383417359;
    msg.ss_x = 0.6007890972903192;
    msg.ss_y = 0.23498395922852644;
    msg.ss_z = 0.9017019786667305;
    msg.virt_err_x = 0.22623174534633583;
    msg.virt_err_y = 0.1977412502196476;
    msg.virt_err_z = 0.5943416728743344;

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
    msg.setTimeStamp(0.905192339120853);
    msg.setSource(33598U);
    msg.setSourceEntity(107U);
    msg.setDestination(24752U);
    msg.setDestinationEntity(42U);
    msg.timeout = 3171U;
    msg.rpm = 0.11550512458374196;
    msg.direction = 32U;
    msg.custom.assign("AJNEIQTTBBCOKIZVPDDYWVAIKFQUKGXWRPGNIIAZSKFRMMUEQJCLRKSHWHQAQCXXXOFTVDSMRHPKJULJNNODLYEIBWJHCJDGMLLLSENKZZPZWJECAFSNPOAFIVDYXOTAZQVDO");

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
    msg.setTimeStamp(0.6951019617798261);
    msg.setSource(62147U);
    msg.setSourceEntity(205U);
    msg.setDestination(35200U);
    msg.setDestinationEntity(20U);
    msg.timeout = 1919U;
    msg.rpm = 0.013500236086668838;
    msg.direction = 109U;
    msg.custom.assign("POJJAVZJYSKUISFRYEHQGEAMRAKIEBSXV");

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
    msg.setTimeStamp(0.3577261227322631);
    msg.setSource(59140U);
    msg.setSourceEntity(141U);
    msg.setDestination(23476U);
    msg.setDestinationEntity(46U);
    msg.timeout = 11068U;
    msg.rpm = 0.8542040253454949;
    msg.direction = 27U;
    msg.custom.assign("GYADQUYFWSZVJSVYOLTWTPMAATKRFUYXLVTDBHSJYSQNFVXNXOKEEHSRDNRGPEXQODFBUMXGQKYRKFESCIMTLKDWPQZBAFJWGYHIHLNJCEWWXSPGYMYXTHNMPMHARZBZVRLWYSUALRCJIJLQHNZFPJVLRJZWOVNIPPE");

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
    msg.setTimeStamp(0.738787552247315);
    msg.setSource(3550U);
    msg.setSourceEntity(242U);
    msg.setDestination(38415U);
    msg.setDestinationEntity(214U);
    msg.formation_name.assign("HSTSJWGUMQZVRYIDQWFSHUMZDCLOYANCIKIHLLIUISGMOPZ");
    msg.type = 180U;
    msg.op = 82U;
    msg.group_name.assign("NSCOQVAITRRARTQPPGBXUFJGIFGFAVHBRBPCRPIXGUJEEVMQLDQLLSB");
    msg.plan_id.assign("KGHNVSKUDJZREOFJFYEYJMURJEWFDHBNTZIRFMXTNIQWWMIKMWJTPNEOVJMLVCQYPHZOIXYNXLTDXSRJVPPWQLOAHFWMNYCBWTGDDMZDCDBAUQGIOVYCZIULEAZHTGCAYRBKVSOGPXZGCHNWLKDXCSVAXOSKWHGXEQABSIKRRFKVYEQVCGOUUYPBTHRSSUHVSOSAUFJB");
    msg.description.assign("ZJCEBKJLPACXQUZSEUAAJSUEGMGIBOZLMACXLNDNQTGAIKYKHYRTUHNIUFBFXWTDKAFVPYORTYGIUYMRWZDDMRPAWFIJXCUVITJDCYVERCOOOIEBPCIHXBNQTNRMGULRVEODOEVBBGYCPLZSVDF");
    msg.reference_frame = 246U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52596U;
    tmp_msg_0.off_x = 0.663288467026399;
    tmp_msg_0.off_y = 0.7345768573702706;
    tmp_msg_0.off_z = 0.9651161393186499;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9479384006304183;
    msg.leader_speed_min = 0.8341734816875526;
    msg.leader_speed_max = 0.5135317979793008;
    msg.leader_alt_min = 0.5846211502442883;
    msg.leader_alt_max = 0.29797090702149065;
    msg.pos_sim_err_lim = 0.7050227328921308;
    msg.pos_sim_err_wrn = 0.8746581793360573;
    msg.pos_sim_err_timeout = 63124U;
    msg.converg_max = 0.834108908223152;
    msg.converg_timeout = 19929U;
    msg.comms_timeout = 8883U;
    msg.turb_lim = 0.6001877838719666;
    msg.custom.assign("PTFXPODIXCVNTEPGJYEMYZGQGVTABIAHUTDXWAUETUYOMZJJAGRGOIAPJUXNBTBDJFVDAWXCQFZOKIKDBXLEWZORGNCLSXQMFQHYIWYNBCZTGNVXPMYGLWHFRALLPKHKRCVSRIKQFIRIKLDSLUSBRDVUKLMROAYMP");

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
    msg.setTimeStamp(0.8925767924078767);
    msg.setSource(61431U);
    msg.setSourceEntity(251U);
    msg.setDestination(17561U);
    msg.setDestinationEntity(41U);
    msg.formation_name.assign("BIEFOFUKWETBZAHFRNHJBSLSGOQRRRVVHVUTPGLSLYPLYFIGRNKOWEOPOLEWVAPJXFZBFVFCYHANMUWDYCGPYOSTPHILSEADXKXYUQAQSPJDJLXJYXFRDOCHJGMZNGLTWSNDPZQVIAIVSZIIOWRZJQCINBRQEZNOZXJRAHKVMDUCKEMUMMMCKCZBXI");
    msg.type = 61U;
    msg.op = 240U;
    msg.group_name.assign("VHMMYBSEPLWWXCWDHLVLY");
    msg.plan_id.assign("UTFDVAADFXZGBDQNSSYQLEQYSOHUAYUCAEZCBXMPHZEURMLQTIWXIDEIUDVZORWYMJDINJVZHMXFRPNBLNFAA");
    msg.description.assign("YBWRLTSTKIANIBIQWWZMTBEIJYCCKHTNMVDOATHMKOREDRGULWYZZVCLVAGIWEOOMGKCRBQMXXEGFSSFTUQHSWYG");
    msg.reference_frame = 225U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20604U;
    tmp_msg_0.off_x = 0.9442752306341146;
    tmp_msg_0.off_y = 0.03657101775168292;
    tmp_msg_0.off_z = 0.5563731669472917;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9836281373720718;
    msg.leader_speed_min = 0.2206267984667728;
    msg.leader_speed_max = 0.7354798123156087;
    msg.leader_alt_min = 0.5357665249079842;
    msg.leader_alt_max = 0.49714652663394;
    msg.pos_sim_err_lim = 0.8965366487391558;
    msg.pos_sim_err_wrn = 0.09235336862206922;
    msg.pos_sim_err_timeout = 5597U;
    msg.converg_max = 0.6286434919235173;
    msg.converg_timeout = 39391U;
    msg.comms_timeout = 44572U;
    msg.turb_lim = 0.6102520615942919;
    msg.custom.assign("BTAKMHXYNJYTACSXYNEPFVHFLIMPOKAYXJQAHEJYODNOGELFSRUKJPSPUPKDJXQJBCKPNERFLWFKLJUVXIRDOYATVATVNZJZLRAKQBHDTHIQTUSZXNWNYLVRHGEEIRMWETKNUXSZSRQQGZTLWLTMGKJLLYZ");

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
    msg.setTimeStamp(0.8018185253837735);
    msg.setSource(59307U);
    msg.setSourceEntity(233U);
    msg.setDestination(17857U);
    msg.setDestinationEntity(244U);
    msg.formation_name.assign("SNZQHNQGGLXEFUZVFYODBRSKJMEHPUMDOSMYYJSLJMAWUPWCZCGETVBWBPLYHUQSM");
    msg.type = 98U;
    msg.op = 57U;
    msg.group_name.assign("NAQWEDQXSLOGSOCQPWYISTHBTUGJHHXOWPBYMBHNMCMTVFOVEWYAMCGZYCWGQDFPMBWPXZGLOXSLGMRGWTECKJTUASINETIMDVAXQBYCDFIQFKNANQLPRQMLDIBALZYJRRPKUPSEUUDLRNKUSZZEPIAWFSZJCVHHIDYYRLJLVUKJJRVFHKZEMXKGVHHFRDQQXCWSOJELRXDVXOYPEFIAFSZRTJVIZKUACF");
    msg.plan_id.assign("KSFQHOWDCWZDAETKBWTLSVYOICNFISFMDOUIHPRGKEEOGMCZBBHSZAQOEQ");
    msg.description.assign("BGNVRNAZFTNDJHZTRZETPCUCHFQSVTTOPASKVXARGDQTLIQXGRNVAXJWBGQCVWJYQRMDHB");
    msg.reference_frame = 168U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17133U;
    tmp_msg_0.off_x = 0.51359951213074;
    tmp_msg_0.off_y = 0.87337206311071;
    tmp_msg_0.off_z = 0.21894563928068655;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2875203509167058;
    msg.leader_speed_min = 0.08244378983422396;
    msg.leader_speed_max = 0.34723014522819484;
    msg.leader_alt_min = 0.5066261614459223;
    msg.leader_alt_max = 0.4902777443543562;
    msg.pos_sim_err_lim = 0.3055719250767849;
    msg.pos_sim_err_wrn = 0.2778671835518236;
    msg.pos_sim_err_timeout = 12231U;
    msg.converg_max = 0.8823583393586746;
    msg.converg_timeout = 26320U;
    msg.comms_timeout = 44899U;
    msg.turb_lim = 0.22199675573724298;
    msg.custom.assign("PEYRFPWGEFXHOLPSSDBVCXUAHKIORVREEZWRTQTNRIGBZFVWGCZAXVVBTGSASWCEMXVKAQFTEBFHQOEAXWUJJSADIDBKZDLLXCHKYLCDCSPEXXWMIIRYUFTGALJVTIDZGIDOQMDUVQKXNHMUMQKZRC");

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
    msg.setTimeStamp(0.2272647600170956);
    msg.setSource(56443U);
    msg.setSourceEntity(51U);
    msg.setDestination(21032U);
    msg.setDestinationEntity(227U);
    msg.timeout = 37580U;
    msg.lat = 0.06218854847720445;
    msg.lon = 0.8420810530104601;
    msg.z = 0.5830848850889621;
    msg.z_units = 9U;
    msg.speed = 0.2804228084056908;
    msg.speed_units = 144U;
    msg.custom.assign("FOYGVDHZJJDCOICEFQYWWGSSPFCIDYJXERGZQHQCCGKPQRTSNAHADZXBWMJHRNTZGUIXNZZIFXZUQDKNCYRIMVWAHCXZVBXWLSSTTINWYHBKHMAEOMYLIPMAKMAGGBGOOMCXLUPHXAUIKSPEQHWEEBTKLLXRUMZOAVVLOBTPYRQXBFFWADFVBGVEBRLPFJUTDTVLLHYVRSLJKUOSOYBNUJEDEJIJW");

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
    msg.setTimeStamp(0.7730884993148859);
    msg.setSource(42767U);
    msg.setSourceEntity(7U);
    msg.setDestination(65287U);
    msg.setDestinationEntity(225U);
    msg.timeout = 57324U;
    msg.lat = 0.8649910656764297;
    msg.lon = 0.3308920762557622;
    msg.z = 0.7242153796006469;
    msg.z_units = 249U;
    msg.speed = 0.8029106667153217;
    msg.speed_units = 154U;
    msg.custom.assign("QJVSFCZIMRTEBFWOWTUAECNJNKGGYJICMOHGLHSRZPLUEBXSKKBRPPEGLSVUYZDUMIAYURDJTZQHSLBGFAVDWOPGKJFUXKNLXNXYREAWWVOVRUUYXIMFERTITTPXSXRPJNJSIFDFXLIQQWEHOYMCWBAASOZZLYQBCZMNCYDKRAPIWPBNZJFQVDCKFHOGHRVCKOZXQHBQOTVLAPACDETWJKHDKHIE");

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
    msg.setTimeStamp(0.915633837540217);
    msg.setSource(1945U);
    msg.setSourceEntity(234U);
    msg.setDestination(14759U);
    msg.setDestinationEntity(5U);
    msg.timeout = 28513U;
    msg.lat = 0.2848244934369982;
    msg.lon = 0.2895431050065598;
    msg.z = 0.3348447832090764;
    msg.z_units = 106U;
    msg.speed = 0.030706846150566958;
    msg.speed_units = 14U;
    msg.custom.assign("PVJJICNOMHGKR");

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
    msg.setTimeStamp(0.8709768250850513);
    msg.setSource(29713U);
    msg.setSourceEntity(61U);
    msg.setDestination(24798U);
    msg.setDestinationEntity(152U);
    msg.timeout = 54875U;
    msg.lat = 0.4986886241940789;
    msg.lon = 0.8029011558846175;
    msg.z = 0.9962461896697571;
    msg.z_units = 93U;
    msg.speed = 0.1100447712336492;
    msg.speed_units = 59U;
    msg.custom.assign("BOWXYMYMUWVUETDKBIANSEKGLUMAYVJOSCSAEEMWTGCTIXXBHYLLIHCDRFNBVVVODPQ");

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
    msg.setTimeStamp(0.8111796369909482);
    msg.setSource(3293U);
    msg.setSourceEntity(142U);
    msg.setDestination(43457U);
    msg.setDestinationEntity(96U);
    msg.timeout = 40574U;
    msg.lat = 0.5033668987541714;
    msg.lon = 0.8882416475225067;
    msg.z = 0.8969382864085743;
    msg.z_units = 78U;
    msg.speed = 0.013410668313642238;
    msg.speed_units = 233U;
    msg.custom.assign("XQSFEPVSKYNWPDBOSLQCCAWPGJKNZMCYRFQCRONBMFELGJJXWKFMFIOSLFPTRYPDMVXXMXHNGJHXXHYAIJKLIOGWADYFNQKOPLZYCWBEJARQGZNZMAKNBBRRVTIOSZNYHNVMOCJHIEYYASTORHDVTQIVPFQACJXFJVZCLWRMAUNTXQWDAPSUUKKCQTHITUBTOGZPSLGIBKLHSSEWRGIUYUMODEHLVVWEEPCDDUVZAULZKJBRHIBT");

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
    msg.setTimeStamp(0.45850930619046193);
    msg.setSource(14267U);
    msg.setSourceEntity(57U);
    msg.setDestination(29849U);
    msg.setDestinationEntity(103U);
    msg.timeout = 31910U;
    msg.lat = 0.6118326828524756;
    msg.lon = 0.057664414862498736;
    msg.z = 0.6818416892449366;
    msg.z_units = 156U;
    msg.speed = 0.12197104732877129;
    msg.speed_units = 18U;
    msg.custom.assign("SXGWCHAQHHFXDKJMELHRGIJMOWBUFAUYUAIFSVFKNCAQPVSWGNPDGAYTVPKRZTLSFVVEMYTAVZTCRTQGNZLNBKOG");

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
    msg.setTimeStamp(0.4534570858524123);
    msg.setSource(42752U);
    msg.setSourceEntity(172U);
    msg.setDestination(41150U);
    msg.setDestinationEntity(143U);
    msg.arrival_time = 0.1955364048028475;
    msg.lat = 0.6744586875589705;
    msg.lon = 0.7053663016910743;
    msg.z = 0.5273570504128915;
    msg.z_units = 174U;
    msg.travel_z = 0.1363908485588715;
    msg.travel_z_units = 225U;
    msg.delayed = 4U;

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
    msg.setTimeStamp(0.2623540325510024);
    msg.setSource(1733U);
    msg.setSourceEntity(84U);
    msg.setDestination(57928U);
    msg.setDestinationEntity(74U);
    msg.arrival_time = 0.28109460750443815;
    msg.lat = 0.9631870626185226;
    msg.lon = 0.1754420679758656;
    msg.z = 0.7289445897307062;
    msg.z_units = 108U;
    msg.travel_z = 0.6138442449438638;
    msg.travel_z_units = 88U;
    msg.delayed = 66U;

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
    msg.setTimeStamp(0.48712832884522983);
    msg.setSource(18724U);
    msg.setSourceEntity(205U);
    msg.setDestination(44572U);
    msg.setDestinationEntity(153U);
    msg.arrival_time = 0.6752000187818248;
    msg.lat = 0.1192178382202943;
    msg.lon = 0.5063062772359943;
    msg.z = 0.7110192117924066;
    msg.z_units = 246U;
    msg.travel_z = 0.5928056365810307;
    msg.travel_z_units = 130U;
    msg.delayed = 24U;

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
    msg.setTimeStamp(0.11863160898385772);
    msg.setSource(3502U);
    msg.setSourceEntity(225U);
    msg.setDestination(28824U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.3552877039057343;
    msg.lon = 0.2879825560039274;
    msg.z = 0.8653912696943543;
    msg.z_units = 147U;
    msg.speed = 0.3492446810396266;
    msg.speed_units = 111U;
    msg.bearing = 0.02604403707315628;
    msg.cross_angle = 0.8880917211206545;
    msg.width = 0.8890565053636775;
    msg.length = 0.829563664951898;
    msg.coff = 159U;
    msg.angaperture = 0.9316845454752338;
    msg.range = 35949U;
    msg.overlap = 33U;
    msg.flags = 58U;
    msg.custom.assign("KZAJIRPMHRNAGOTQOYLSPLGTSZLOSXLSXXWOYEYCRBAVLAZYICFQZQMBZCZ");

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
    msg.setTimeStamp(0.2913633890489937);
    msg.setSource(3434U);
    msg.setSourceEntity(192U);
    msg.setDestination(39971U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.1417735354899251;
    msg.lon = 0.2782301221241018;
    msg.z = 0.08276812603121664;
    msg.z_units = 79U;
    msg.speed = 0.7686515167085468;
    msg.speed_units = 252U;
    msg.bearing = 0.7601371798551049;
    msg.cross_angle = 0.7557187384058918;
    msg.width = 0.23486527287933656;
    msg.length = 0.6920037058319941;
    msg.coff = 141U;
    msg.angaperture = 0.8978295903789502;
    msg.range = 4271U;
    msg.overlap = 89U;
    msg.flags = 18U;
    msg.custom.assign("ZNYLDZPKIMRKHIAMTZNNABISDRNJRMLMDFYMWOTTLRLKXKISYHLCZBCWKDXNTFCWWGEDIQJQFVDMBLXER");

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
    msg.setTimeStamp(0.2193089926220868);
    msg.setSource(19263U);
    msg.setSourceEntity(214U);
    msg.setDestination(34496U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.8282928520939237;
    msg.lon = 0.4204477809230085;
    msg.z = 0.6615271630078563;
    msg.z_units = 227U;
    msg.speed = 0.6131787712836421;
    msg.speed_units = 247U;
    msg.bearing = 0.238383420048755;
    msg.cross_angle = 0.1726205182223698;
    msg.width = 0.4700846565051676;
    msg.length = 0.9771528622171277;
    msg.coff = 134U;
    msg.angaperture = 0.5797446016268462;
    msg.range = 5965U;
    msg.overlap = 15U;
    msg.flags = 121U;
    msg.custom.assign("OIRCRZFFNXZPQQKZGKE");

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
    msg.setTimeStamp(0.026471334169595906);
    msg.setSource(46843U);
    msg.setSourceEntity(58U);
    msg.setDestination(62478U);
    msg.setDestinationEntity(88U);
    msg.timeout = 25530U;
    msg.lat = 0.7827354159097619;
    msg.lon = 0.16092414659075993;
    msg.z = 0.04979384770596551;
    msg.z_units = 57U;
    msg.speed = 0.06639259953938559;
    msg.speed_units = 157U;
    msg.syringe0 = 199U;
    msg.syringe1 = 140U;
    msg.syringe2 = 85U;
    msg.custom.assign("PPIYEMVGVVVJIGJBBNXNDRKFYLVAOFMJFASZKIACWSQXCQHSZURLSHAFQLEKJEMLBNSWIHAQFGDNBYEBDHWTNXCRUGOODXKZTKMHCBSPJEGPVQHURDIKOZILXFZRAMWYGPHYSPMJBTLXTFSAYFSXZOFIHZDXQBQTUYRHUBJKQEUCYORWRKPGSWAIRPZEWCLCTNUERNGOLWNMPMNIKHTCMUVEBOWQVINZXWXEUOFTTCUYJQDJLJKMODG");

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
    msg.setTimeStamp(0.8227367107470569);
    msg.setSource(43926U);
    msg.setSourceEntity(206U);
    msg.setDestination(52322U);
    msg.setDestinationEntity(72U);
    msg.timeout = 26742U;
    msg.lat = 0.6065650848255559;
    msg.lon = 0.1564932949419633;
    msg.z = 0.5228981533612952;
    msg.z_units = 94U;
    msg.speed = 0.6002542854136184;
    msg.speed_units = 9U;
    msg.syringe0 = 162U;
    msg.syringe1 = 226U;
    msg.syringe2 = 237U;
    msg.custom.assign("ZDZBVGFFKLJKJDXWONCOEABQTCOZQSTIJCGXXMNLRIYBHUFWKSA");

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
    msg.setTimeStamp(0.6143393394715747);
    msg.setSource(7452U);
    msg.setSourceEntity(251U);
    msg.setDestination(20247U);
    msg.setDestinationEntity(238U);
    msg.timeout = 7994U;
    msg.lat = 0.43856827414587496;
    msg.lon = 0.2034045940347715;
    msg.z = 0.6696304213231228;
    msg.z_units = 153U;
    msg.speed = 0.3656207954530336;
    msg.speed_units = 29U;
    msg.syringe0 = 210U;
    msg.syringe1 = 149U;
    msg.syringe2 = 46U;
    msg.custom.assign("HYWIGQPJMLRRTMUZTALQYDMOHMJOTAPDPANGXFLFHEKWNIXDRYMNDIXHDAVJ");

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
    msg.setTimeStamp(0.5635501337056879);
    msg.setSource(23484U);
    msg.setSourceEntity(153U);
    msg.setDestination(65051U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.9424067807006401);
    msg.setSource(24375U);
    msg.setSourceEntity(34U);
    msg.setDestination(45323U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.18286579720745721);
    msg.setSource(50596U);
    msg.setSourceEntity(178U);
    msg.setDestination(24803U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.9173696436926677);
    msg.setSource(54629U);
    msg.setSourceEntity(104U);
    msg.setDestination(59240U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.6580418902589459;
    msg.lon = 0.8621743858385019;
    msg.z = 0.8523011449893995;
    msg.z_units = 123U;
    msg.speed = 0.1176804213605579;
    msg.speed_units = 72U;
    msg.takeoff_pitch = 0.89650825895268;
    msg.custom.assign("NYDZFHJUJKRSROXWZXMJAULLAYUHKYRXEIYTOIPUXPZHNCMQSCMOOSORGQTULPVOCJKTWYXBPDPTDZINVLSSZQWVBNGDHFERHUADBIGXDCRAUWVVATHTFVRCEWISNGQOVNYUXAEQXMPGORKTXLK");

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
    msg.setTimeStamp(0.4284021828700486);
    msg.setSource(32249U);
    msg.setSourceEntity(17U);
    msg.setDestination(31608U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.4563133251433499;
    msg.lon = 0.7513919906762807;
    msg.z = 0.9030034193328872;
    msg.z_units = 202U;
    msg.speed = 0.09823353594009399;
    msg.speed_units = 9U;
    msg.takeoff_pitch = 0.2305968892756599;
    msg.custom.assign("DKONAYTDCOFCUGPZFXTNYTRSRCEUYKFQRXKAOTKBBGAVLJVPUEERIYUOXTAGXVIGVNENMZPDCRMKFIHPH");

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
    msg.setTimeStamp(0.7249110790990388);
    msg.setSource(13829U);
    msg.setSourceEntity(36U);
    msg.setDestination(60222U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.4289373572909474;
    msg.lon = 0.8998543478757383;
    msg.z = 0.3069758830412933;
    msg.z_units = 68U;
    msg.speed = 0.6978983765069559;
    msg.speed_units = 154U;
    msg.takeoff_pitch = 0.5510534835411314;
    msg.custom.assign("EEKLGKUNKKGQTUCTWTXQCGXAWPFTFFNDWRXBMIYQNAFWEPZGFNKMPNZIMBIDZVYJLKFSGTOCXOEZKORVHMDQZLXYZWGSLUBSMOCLSEPEVXBPJOCFHMAMDRINYNWDFJHDCAJVEVPMHNDYAJWSFAVSYBLKXTOOVAJYQAUDUURJZBWZIQPKAPETQMHOCN");

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
    msg.setTimeStamp(0.5391150781337551);
    msg.setSource(44144U);
    msg.setSourceEntity(189U);
    msg.setDestination(44686U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.49483942778730505;
    msg.lon = 0.5152909607870403;
    msg.z = 0.7396032143483238;
    msg.z_units = 29U;
    msg.speed = 0.8650421156617789;
    msg.speed_units = 109U;
    msg.abort_z = 0.4478946763782776;
    msg.bearing = 0.268894929907763;
    msg.glide_slope = 34U;
    msg.glide_slope_alt = 0.8813397179702811;
    msg.custom.assign("BKIENSWIDUVTRKSRVYKNGJVAXJFQIHRZNQKUWLFFJRDLTWSBDEYEGRSRCTBU");

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
    msg.setTimeStamp(0.5817802575616859);
    msg.setSource(3764U);
    msg.setSourceEntity(119U);
    msg.setDestination(33212U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.016129988431045628;
    msg.lon = 0.779227215629204;
    msg.z = 0.8833706916587555;
    msg.z_units = 79U;
    msg.speed = 0.9314479368177379;
    msg.speed_units = 166U;
    msg.abort_z = 0.1546972412521348;
    msg.bearing = 0.6721194000126692;
    msg.glide_slope = 223U;
    msg.glide_slope_alt = 0.6603356829406978;
    msg.custom.assign("DDKEEUKMLGHDHNNDZSYHQMMHZFHDTVYLPRCTNLFVBUOYVJJUCGXZMFICCJMQUJDANLLETUARKGTYIMROPSFLHWYROHQGIQVTLPOAYSONKXIDZEONAXWVUXBTGWTVDWGFEJGSJDIAYXZLBZIPANQQKCKNROZEARJBEIMCVMQDFHSZUPPOJVEFRWPOKGTIKPVRXBICYIGFWRRXWKAMPBEQNSXHUMBUWALJLNUEVWBWSYJQC");

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
    msg.setTimeStamp(0.6405197150568654);
    msg.setSource(63065U);
    msg.setSourceEntity(26U);
    msg.setDestination(58487U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.5794962494661743;
    msg.lon = 0.31638829855520534;
    msg.z = 0.6490267758076413;
    msg.z_units = 77U;
    msg.speed = 0.5419187487021444;
    msg.speed_units = 235U;
    msg.abort_z = 0.8295243400650376;
    msg.bearing = 0.41495554296849946;
    msg.glide_slope = 179U;
    msg.glide_slope_alt = 0.35966858005473357;
    msg.custom.assign("WHQXAGFSMXBQIMLOHCWKPUACLIOJFVDDXUDLDWAYEENTNVVNLBIIFMSACTVTBIWVDGKFCAAZKZRKVGSYUJWDOURDYCIERPEHJPLVBTSYZUGRPAEMYSXLGAFSUWEENORMTHPJKJYXFBJKXLZNLLTFDUEZQMCZGVQUFCIFBUBOJJHJMGCHDINW");

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
    msg.setTimeStamp(0.46794845415253095);
    msg.setSource(7168U);
    msg.setSourceEntity(23U);
    msg.setDestination(43481U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.20392264636915214;
    msg.lon = 0.8762496985038322;
    msg.speed = 0.7039675094925382;
    msg.speed_units = 89U;
    msg.limits = 23U;
    msg.max_depth = 0.7234575270638881;
    msg.min_alt = 0.10909580531986751;
    msg.time_limit = 0.37951832316237766;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.38458272832709284;
    tmp_msg_0.lon = 0.09979452026137214;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MIUSTWGIBHZVSRETVULXTVAJCHMKNPYAYYVCHKXDDYHSAUOZFXNCGOOFYHKNTZBGIILZRZDHIFBKEENVSJDRYKAOZKBNYWOCFMXAIBQDPBRMCFPRGFPTUJGRQEXXI");
    msg.custom.assign("ZUSMPEHCPXCJXJOJGYDUEWROEQKCLGWANQIIZPJVAJAPBJNJYOUXTVRSFZLMKTAOLKRLHZVRCYBDYTQDOXRSMXDBUHSPBKMSEGLYNXXVLFIMTWOLAPKCSMACHPZVWHHZDLECVHUENDVLURNDZXPQYDMPXG");

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
    msg.setTimeStamp(0.5432041760044908);
    msg.setSource(48374U);
    msg.setSourceEntity(101U);
    msg.setDestination(51203U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.9483376984830747;
    msg.lon = 0.9573931767995223;
    msg.speed = 0.47988907729771557;
    msg.speed_units = 100U;
    msg.limits = 36U;
    msg.max_depth = 0.7902805671172588;
    msg.min_alt = 0.055932430308449854;
    msg.time_limit = 0.51219571957208;
    msg.controller.assign("UCLAOJDNOPSPNJQMEGTHWBBTZCFIAPQTFZSKULTRCYXIRBUHAMHZ");
    msg.custom.assign("JGQDWGVCFYMUSNAUOXUWOHEKJZTQLARXQNCEYPKVHRWLXDGQBGSAWGKRDZHMFNMRPAJHSFFDWHM");

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
    msg.setTimeStamp(0.9376357570974784);
    msg.setSource(29747U);
    msg.setSourceEntity(134U);
    msg.setDestination(40402U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.2519417965785652;
    msg.lon = 0.6565832031494975;
    msg.speed = 0.41375472191413576;
    msg.speed_units = 173U;
    msg.limits = 171U;
    msg.max_depth = 0.8085321972771221;
    msg.min_alt = 0.35586296317334376;
    msg.time_limit = 0.3512645177788467;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5273458992203698;
    tmp_msg_0.lon = 0.18779361826357743;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("BPUBKOUYJIYWVLEUAKPAGEAYHTXOZQWDPTSCSTIZRVFSHLWEAXGRLJWHYWQOCUACIBCOKPZNMWFLDRDNPTPVNHARIHGJUXXLZFX");
    msg.custom.assign("QTWLFHZCWRLKRNVSDKAIBWXMRAYJFPAVPZSRDJFIQAFTQEMNWUAMPQGFYUHIPVAKSCKXRCSYCITNSAPWNZGQQHZTUPADCNXYSQDOPOXMUOZWRJIQOMJBKYFALEJYVJMLKTCZXZTKBBOILGJDUJRBFYDNKHCDVXH");

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
    msg.setTimeStamp(0.015480868936349368);
    msg.setSource(2024U);
    msg.setSourceEntity(104U);
    msg.setDestination(23062U);
    msg.setDestinationEntity(168U);
    msg.target.assign("YHNZUFRAPTJXFKFWUBLILCZQQBSPXYSEVACEIBVYDDHNOKRIRIQVGUIGRMBBPXGOGXKAFTGNSUTVEXLEFRUZJGAMPJZPYPUQUJLNPLNQHMLPRRENSTTZSVFKCXXLQUNROZIRYQCWOYOSAVHIBCMHTDYSGXBKAMMESOKHFWMHGJAZYXWDKVSHCJKGMZCNHFCWOBPPTWILTIJCBUMJXVVWSLGNFBUYZKAAWDZKETNRJFVE");
    msg.max_speed = 0.2080691137820262;
    msg.speed_units = 6U;
    msg.lat = 0.7602112608380395;
    msg.lon = 0.8524774081074407;
    msg.z = 0.032346438195781535;
    msg.z_units = 76U;
    msg.custom.assign("PMNQWTYPXYTVPIQRGCBAWEUJFNCMEVBAICPVZSLLWKHAUDYNDYOBUGSQPFLDXBZFLAXZFDJENEFGKLSKDVLYZCSTUEVLVBCKXQFWOSNOGXTYLPHJRMRQBMSJPKHQKCIHIDAXNXPBPCWFQ");

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
    msg.setTimeStamp(0.6993216958115169);
    msg.setSource(65242U);
    msg.setSourceEntity(133U);
    msg.setDestination(36802U);
    msg.setDestinationEntity(161U);
    msg.target.assign("HYSICXYOTJHKCLRYTIFJIFYRYUKUQIZBMHPAUHOLISOSBTDMJSVEXZRVZPVSATZKSOFWDRSZXQUMAZVOWKWIVNFLBAQLJAOBQNPWXHGQZCMETGFGSQEYKVWTEYLEQDNNFLPJDPHECYCXGPJBJWRJCRCRNXXMPUIEB");
    msg.max_speed = 0.37155525239062326;
    msg.speed_units = 86U;
    msg.lat = 0.6729854933054811;
    msg.lon = 0.3347093496346356;
    msg.z = 0.6001231282246684;
    msg.z_units = 200U;
    msg.custom.assign("WREYXXLCETAZLWHDDIXJODLESQPQPUDSNEZHWNOTHMEAWYINOVTVAROVSESSFZAFAATXSKVFHABPMUUXJKMXXPBUUKWO");

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
    msg.setTimeStamp(0.8650995929719024);
    msg.setSource(21458U);
    msg.setSourceEntity(175U);
    msg.setDestination(8573U);
    msg.setDestinationEntity(28U);
    msg.target.assign("TUWDCUDQSJCZEYOSCEAURDXJTVOCEKUFUMHOKWCKGFAVHWIIEQPORZTZBKMIAUNFGLCVQNOERMLESKAHRZHZBXAOQRMNGWGSYGFXNIXAPOZIWMBKURYDTOCJPKPXPGHTACFNYYPTWQLTIBGXALBVCDAJHLQUVRHOWHJNGXHQVPQUSJEOLYQWSIJPTXLMNFAFLMTIBKNYYZSBIYDJEWBXBD");
    msg.max_speed = 0.08462462879524724;
    msg.speed_units = 6U;
    msg.lat = 0.1320738279081819;
    msg.lon = 0.9544340857849967;
    msg.z = 0.21952099529099656;
    msg.z_units = 222U;
    msg.custom.assign("PZOJHMXQVEMGEHDCDSTXKHZGEEOKTIXIEOFJKZCIVNNAJFQJLIKOYKOILMEENNAGMRORTDFBYMAJLDNWSNBLOGVOCPPRQFDVSLSGWJYADHXAHXIRPZGQQBYQNUSVGWCVTDHGEPCPCXXUZWJWIYFWRZXVMDHOYPUQLOLUNYMUKFPVWNZBBUBAGHZ");

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
    msg.setTimeStamp(0.3974765084251993);
    msg.setSource(37575U);
    msg.setSourceEntity(46U);
    msg.setDestination(28152U);
    msg.setDestinationEntity(81U);
    msg.timeout = 13295U;
    msg.lat = 0.8781218979319267;
    msg.lon = 0.30762704646615946;
    msg.speed = 0.9445446995449664;
    msg.speed_units = 239U;
    msg.custom.assign("ZEOTNHRXGUQLWXGFJRWOTRRJATFEBYHLWQIUFXTFWOCXKLABWRABLLQYAIEKDZVXBQBZNWJPNIGKMMSTFDIPGUSKNRJSESPXKOCHVISNEUDHZLHZMQRWJIKSPTHTUHMYQWTGDZQABCTBSCPULZDGYSDUDDAZYMWSXNEFDVNKMPJUVBIMLVSYNCHCVZQFKI");

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
    msg.setTimeStamp(0.7660999504676371);
    msg.setSource(12275U);
    msg.setSourceEntity(212U);
    msg.setDestination(53014U);
    msg.setDestinationEntity(241U);
    msg.timeout = 64002U;
    msg.lat = 0.07492332820144298;
    msg.lon = 0.20510347289147812;
    msg.speed = 0.699021715896787;
    msg.speed_units = 18U;
    msg.custom.assign("XGWVUVUTPKNIRHJVVGLZDWXFXJBETJVKXFQUPGAGCSJOYYUWJSTIJRKADDGJEEAMINFGDCAQVBTFPYEZWKCSNKR");

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
    msg.setTimeStamp(0.3258259070524758);
    msg.setSource(29439U);
    msg.setSourceEntity(114U);
    msg.setDestination(13830U);
    msg.setDestinationEntity(88U);
    msg.timeout = 21881U;
    msg.lat = 0.9618568292316421;
    msg.lon = 0.3535200040538312;
    msg.speed = 0.6819859965645;
    msg.speed_units = 122U;
    msg.custom.assign("MXHCLDDNPCYWZULUFGRMMNEJAXDYUAAVHHWSORCFVVCEIWKNETBKQIHFRIIGJEJQJJZVCBEWBWANQIZOGLNTDELCAFUIKSBJFPGODBOATGUKBYWTAMK");

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
    msg.setTimeStamp(0.48015569486134013);
    msg.setSource(56627U);
    msg.setSourceEntity(53U);
    msg.setDestination(53684U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.3778798785779318;
    msg.lon = 0.4319218655943192;
    msg.z = 0.05100595642769501;
    msg.z_units = 99U;
    msg.radius = 0.7660464394878911;
    msg.duration = 20346U;
    msg.speed = 0.7538747046347242;
    msg.speed_units = 159U;
    msg.popup_period = 43269U;
    msg.popup_duration = 24188U;
    msg.flags = 126U;
    msg.custom.assign("CVEXEHHWTTJIOYKJPKOCCDWFSAVMJNWAQHYFUPKWSBYYRUILGGVDUIKXVQMOPDCRDERTXOIQHBGMSHFMVORRJJWPAGATKNRSFFFPVSBZBUKQWLYCYLXIGOFGCWKUAPZFODBRYSSGJCJUKMZYWWZPHPHJLPDJLTMLXDENNXBVLINOCVK");

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
    msg.setTimeStamp(0.05749168474441213);
    msg.setSource(21926U);
    msg.setSourceEntity(111U);
    msg.setDestination(36574U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.7697195103062833;
    msg.lon = 0.8831237119562317;
    msg.z = 0.05049270187666266;
    msg.z_units = 70U;
    msg.radius = 0.9468299622201275;
    msg.duration = 55170U;
    msg.speed = 0.4180635183378436;
    msg.speed_units = 30U;
    msg.popup_period = 61556U;
    msg.popup_duration = 22955U;
    msg.flags = 51U;
    msg.custom.assign("ANYDNSPESPLDMELEPBTRQTCSEPHLKCXFXYKRPGTIDCIYZKGLSOGVDHIOATZWIROKFTQCRQLEPKZDLFBESTCXXVBVEBHHAYMYKUWNGCYRWEOVFQGRQUFFNQJIVVFMITDJWURXVMTOWRQCHFVSLHBSMJATWBBDJPYDWZPUHUWWMUNAMHJONXNDKDYCMOURUKZQAIAOJMSBMGABLPZZBJIAVSOEUGIOZYWQQUELCHZHFKXINGJAYSJKXGGF");

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
    msg.setTimeStamp(0.6880486976163068);
    msg.setSource(46323U);
    msg.setSourceEntity(45U);
    msg.setDestination(8192U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.25876742051459145;
    msg.lon = 0.5038649276367082;
    msg.z = 0.13014014133288032;
    msg.z_units = 238U;
    msg.radius = 0.36548795099877296;
    msg.duration = 10168U;
    msg.speed = 0.05108711328897397;
    msg.speed_units = 210U;
    msg.popup_period = 50463U;
    msg.popup_duration = 32273U;
    msg.flags = 193U;
    msg.custom.assign("SXHHWBALSLMAFKGRIKBRZRLRKLUFBSAUPDBBXOVUEPOEGXMPYMHZVLUWNZFVBCHYAMTKCWAJQYWHTSVVJINPIYRRDMTNUMYKXSSMDGLJDEYICCBLHHEFDHIGIOZYKUYVEZTNIAZSMCTEQAQIMKOAITDVWNTELMBGEJOPXDFQQTYJFDGOXVDFGOPGFBNQVNJXRNKIADWH");

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
    msg.setTimeStamp(0.8868517551711416);
    msg.setSource(44819U);
    msg.setSourceEntity(122U);
    msg.setDestination(40688U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.4265265015359062);
    msg.setSource(316U);
    msg.setSourceEntity(199U);
    msg.setDestination(44064U);
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
    msg.setTimeStamp(0.9655730019262179);
    msg.setSource(8320U);
    msg.setSourceEntity(208U);
    msg.setDestination(17428U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.9342060115380459);
    msg.setSource(37025U);
    msg.setSourceEntity(38U);
    msg.setDestination(2680U);
    msg.setDestinationEntity(27U);
    msg.timeout = 25060U;
    msg.lat = 0.24770064928969115;
    msg.lon = 0.40585194374603795;
    msg.z = 0.7513536872797318;
    msg.z_units = 173U;
    msg.speed = 0.3293229275124865;
    msg.speed_units = 51U;
    msg.bearing = 0.3335094065636951;
    msg.width = 0.7494205793813701;
    msg.direction = 55U;
    msg.custom.assign("NPVNUOPYJQTJSAQWTPAYNRUJRFLFFCGOKXJJJOCHVRNYPXQWRDPXASSEQSIZWXXLBLEECCXXSNLSBFEWQDRSLUCKQDYZMHALDBLBAKPYMUEJMHBGPNTWMCKCPEAMBFLDJGKFAMLCZITPREKSXDUVUQIOZUYIFHWOVKVYGIPOTCETWBHFSZSKR");

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
    msg.setTimeStamp(0.5051599372666132);
    msg.setSource(49570U);
    msg.setSourceEntity(131U);
    msg.setDestination(50654U);
    msg.setDestinationEntity(130U);
    msg.timeout = 34578U;
    msg.lat = 0.6288255117927444;
    msg.lon = 0.24392066290488157;
    msg.z = 0.13869442189527448;
    msg.z_units = 157U;
    msg.speed = 0.5384417372309881;
    msg.speed_units = 160U;
    msg.bearing = 0.5203783582208845;
    msg.width = 0.18293442178420571;
    msg.direction = 240U;
    msg.custom.assign("FBJNZMSFWMBAZDGEAHTLPKYIXKBWEYMWIOMDSTLZKULPKZOWPOBCBZNDEEGLDBYGHVARLHRHLNHQVQNCCGWAXN");

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
    msg.setTimeStamp(0.0859710556598402);
    msg.setSource(29014U);
    msg.setSourceEntity(190U);
    msg.setDestination(1398U);
    msg.setDestinationEntity(172U);
    msg.timeout = 22681U;
    msg.lat = 0.29122142168177045;
    msg.lon = 0.2613887016159707;
    msg.z = 0.6515259855282112;
    msg.z_units = 198U;
    msg.speed = 0.28241503589162564;
    msg.speed_units = 65U;
    msg.bearing = 0.27360410690851256;
    msg.width = 0.085852169428566;
    msg.direction = 164U;
    msg.custom.assign("YUMUELFQASZALDBJQUXOBNGWRMIMPKIHGVWTABNDPLFEKAIKCDTHYGUUFTPXQMPVXYSQSLRERWBKJSUCBDWEZMNHLOA");

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
    msg.setTimeStamp(0.7036965171878342);
    msg.setSource(56311U);
    msg.setSourceEntity(204U);
    msg.setDestination(40788U);
    msg.setDestinationEntity(199U);
    msg.op_mode = 84U;
    msg.error_count = 155U;
    msg.error_ents.assign("BDFWAHDLAZHAGNAZFPYZEPUGPMBMXSWOHRC");
    msg.maneuver_type = 30036U;
    msg.maneuver_stime = 0.6676808772172897;
    msg.maneuver_eta = 6270U;
    msg.control_loops = 3248966899U;
    msg.flags = 181U;
    msg.last_error.assign("WRUPFWKGBJRZCPKSGDLEZCAPVBXVDYXWRFIZBUIHZEFBUSELFDAHKPXTTXVDQUBQLMKDOQIRJTGJXJOXPGBTKHKVZYASIUMVLDGTUJZNEMJRLNFAWQYVOTJEJWAKBBFTAYPYZIPMCLWQMCZDRSJNYWFNAJQYXIXDOUOAMQQCGRPUVSPWBHEVNH");
    msg.last_error_time = 0.9113490756385373;

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
    msg.setTimeStamp(0.8425359282638034);
    msg.setSource(8089U);
    msg.setSourceEntity(182U);
    msg.setDestination(26749U);
    msg.setDestinationEntity(186U);
    msg.op_mode = 231U;
    msg.error_count = 250U;
    msg.error_ents.assign("UFPZOVZWDFGRVVLXATOJJQXGPZEHSPVLUKMGKJKEBLNVSYHRZBJDGDSDWMALAQKWXOGIRFCUFQWMTJOKTAPIFN");
    msg.maneuver_type = 35934U;
    msg.maneuver_stime = 0.5314220281969333;
    msg.maneuver_eta = 43756U;
    msg.control_loops = 1055374104U;
    msg.flags = 218U;
    msg.last_error.assign("ENKHFHAJHTUYEKYZWTZMUBCIPLBTDAJHWSXRTACYKILYSKWIBJRVXBQZWZPVNMYFZSWFEADVZZHBQKLRPUGBINXXOSWZNBEHLXSNEYGGEEQMUJCCIJSILEQYQFKMPDIXRQVSVPDOTLYXWLKCCWZJUOTMOSEDJRCDJQPFCJMUODXTHEWOKCQAAUSTFMFAGDVFLDUGQNPOLTQIBINUYHYBOZCUVFSRVBDRVL");
    msg.last_error_time = 0.1353481444786745;

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
    msg.setTimeStamp(0.001203652625564433);
    msg.setSource(10172U);
    msg.setSourceEntity(195U);
    msg.setDestination(22695U);
    msg.setDestinationEntity(78U);
    msg.op_mode = 147U;
    msg.error_count = 224U;
    msg.error_ents.assign("JNHLMRIGYRZNWZVNIQEAYWSFVLUXBHJZMED");
    msg.maneuver_type = 18546U;
    msg.maneuver_stime = 0.5465715013325688;
    msg.maneuver_eta = 23226U;
    msg.control_loops = 2008124241U;
    msg.flags = 64U;
    msg.last_error.assign("YNBEYMTOAPDVWVMFWKAHFDNYTCSQRDNCXSFFPNJYHMEGJJJBZXZVGSQKWJNVVGQODBLRSCDSNLYDSVSXNBEECFTQTVASOCKKEFKUUTPWGLNZIWCFIYZLKIVAIOMLRPEIUIXHLSHMPGLIYBPRJPYQLKAZVZKVRBLLTOMTPMJTGIMURYFODEXXOGRWPMWKSRXIRUWTOZAAFXZNUQCZNBCAIQAHUPJYO");
    msg.last_error_time = 0.9839108071469242;

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
    msg.setTimeStamp(0.7028336542497269);
    msg.setSource(27955U);
    msg.setSourceEntity(110U);
    msg.setDestination(13124U);
    msg.setDestinationEntity(6U);
    msg.type = 53U;
    msg.request_id = 53313U;
    msg.command = 207U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 26323U;
    tmp_msg_0.flags = 97U;
    tmp_msg_0.lat = 0.4988963012590678;
    tmp_msg_0.lon = 0.8559256556207924;
    tmp_msg_0.start_z = 0.8422007256486485;
    tmp_msg_0.start_z_units = 141U;
    tmp_msg_0.end_z = 0.35681139756094105;
    tmp_msg_0.end_z_units = 58U;
    tmp_msg_0.radius = 0.648490108343961;
    tmp_msg_0.speed = 0.8238703743601746;
    tmp_msg_0.speed_units = 80U;
    tmp_msg_0.custom.assign("HXEZHOEWSZOSKPYXCWYMQTVAXJXJQOOCOTBYKEVCVGNM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48843U;
    msg.info.assign("GNCSTKDFGFTQASBRIMAFCZNHLXFKXMUELMUPKVJCHXWCECVAVPKQLTPIXZIUVNIZNMYYAFJRTHSXBYUTMBLSGPFCHWDKSTPWNCYIXCDEZAEMVRJQNOYBSFXKO");

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
    msg.setTimeStamp(0.8596070942403238);
    msg.setSource(51365U);
    msg.setSourceEntity(249U);
    msg.setDestination(40276U);
    msg.setDestinationEntity(95U);
    msg.type = 47U;
    msg.request_id = 50174U;
    msg.command = 231U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.8755865923891007;
    tmp_msg_0.lon = 0.23249807643611298;
    tmp_msg_0.z = 0.8528824166280716;
    tmp_msg_0.z_units = 182U;
    tmp_msg_0.radius = 0.7421551976784714;
    tmp_msg_0.duration = 53308U;
    tmp_msg_0.speed = 0.24257522123824793;
    tmp_msg_0.speed_units = 135U;
    tmp_msg_0.custom.assign("XMJQAGFXSPKMAVGDKWXLCEKQOIYYQED");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20975U;
    msg.info.assign("KXEUDINHQIGSPLARNTMYOSNJWRLXOEGAAJDJBOLEUACKGSXVHUVUWSSYPJZTBNEFCVLOZUWKPHETMRLKNCXKWPXCSAUHDWPJQVBEIFUNZARXGPZPZHYEPVBXVIOZGMEABZIDG");

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
    msg.setTimeStamp(0.5791395151732972);
    msg.setSource(56786U);
    msg.setSourceEntity(85U);
    msg.setDestination(18238U);
    msg.setDestinationEntity(42U);
    msg.type = 87U;
    msg.request_id = 62605U;
    msg.command = 220U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("VJVGWSUFXTHDCHCVCMOGOIVZJSICEBFYSMMVRWWHQEIJPQQTPFAZEXAGJBCHFVHFWLKVTNTSITPCRFDICHCVAGDUEEFEOKAZREEXFMUIYGBQGZNXOOHUQJQMLIBP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 928U;
    msg.info.assign("CTFSQODGUJQISFHBXORDDWLBEVRVPFVOSUPCKTDNCIKSAYQTESBBEMRQZZDLPMRCODJEBYHCJRJNFGADCKBNQMHAWPZWMICCXYSPTMMMYFLIQCJUWIULYRJAJAKHCMZJXTJGTGWODZZOIKLIOEXEWHHBSKGOPQAHPKNYFVVEWKEAGZVP");

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
    msg.setTimeStamp(0.37909000994056896);
    msg.setSource(62752U);
    msg.setSourceEntity(47U);
    msg.setDestination(11980U);
    msg.setDestinationEntity(219U);
    msg.command = 41U;
    msg.entities.assign("JQHZREWBPDUVPCWMQKYNXUJLPXCZCGSOBLMUYEAYSFZKBXVD");

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
    msg.setTimeStamp(0.3883023517693447);
    msg.setSource(28913U);
    msg.setSourceEntity(231U);
    msg.setDestination(5158U);
    msg.setDestinationEntity(94U);
    msg.command = 1U;
    msg.entities.assign("JHKFPTUGJQJSHNKHMFXHERYMLZBMUMQRYYZOHCFEAVAYGUVFPQKJSINWCWWBQBTUSLQWCSQIOEPXBPTVCZPTMTPWMBJEQAWJGXHLJUKLPRWKVTVJWBNNIWFVDNCRSKVOZXGDMSXIOIAMYHGHZKFYZUAQNWCDVIHEDDQHMSUDZEILVLLBJNDIGFXOYL");

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
    msg.setTimeStamp(0.22618718283311223);
    msg.setSource(25174U);
    msg.setSourceEntity(197U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(152U);
    msg.command = 79U;
    msg.entities.assign("KOTAEACIYCBKXWGDIDPWOWSI");

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
    msg.setTimeStamp(0.6048420426363155);
    msg.setSource(22725U);
    msg.setSourceEntity(122U);
    msg.setDestination(61635U);
    msg.setDestinationEntity(37U);
    msg.mcount = 27U;
    msg.mnames.assign("YWDBNOJHZCJWVXLODUGSLANGHPWHQYNEMQVEZNHQKQCEMDLYMKTFHAAGRBAKCQTEXFXSTKVFWATJZSWGIBGUVZYSWKYFKOTZDPKHANRIUCPBPPBXIRCRBULJM");
    msg.ecount = 15U;
    msg.enames.assign("QYGNYFBRGQOUTIJXJUCUBXJFFFNEDDYJJRWPHIUXMRLXOXWMDVASCKNYTTHITMEZLABIXMISDSJITTAZLOVWHGQCLPRXLQTCLSMUNYJERQFZDOQPRRNZBUGVZKSCOEOQEFNHZAZGHUBLHOGTYQFYNVZODQNBCVZSCWVWPBESYJRWYWBEGIPIASAHDFNITMEOKFXMHMAXDGPMSK");
    msg.ccount = 133U;
    msg.cnames.assign("VFNAKDQVZLSRRFKDTGGBSVNQJNYGSKJNJDXTRMORJAVBKKVVLTJYPHXJQSXWJTIBEPZSHHDNWZYMYCJCGTSKHERMVROCFWOWTIXDYIEAHRFRFUVJXHZPYAELUCXAGLDLEDVEQMDWDYGZPCXEL");
    msg.last_error.assign("TBJSKFOKCKIEIPLVEDDUGLLWYEZTTJIFQWHTDXEUKQPLRCGHSAYPNQBEOPCVIAGKRNBFMZGRTXFQXADFDWX");
    msg.last_error_time = 0.3511072627797479;

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
    msg.setTimeStamp(0.5775466208860268);
    msg.setSource(59744U);
    msg.setSourceEntity(158U);
    msg.setDestination(22208U);
    msg.setDestinationEntity(97U);
    msg.mcount = 25U;
    msg.mnames.assign("VJWESAHSKNRSBTLATGFYSDJALCPJWPGREUFBUIZFOWGKAELTOAQMWZZMHVOQEGZRUSANIAQREXKOPXDBFKXUHUNSBMKYBMTNZDCVCGWQGEPGSCPMMXNDJNPAOFFXDDIPYYCIZJAXOKIFRGHZTDG");
    msg.ecount = 223U;
    msg.enames.assign("DODRWYVLRIZNWSWJETUVSNXKGKUEQANQGFOCCFITSWWCUFYJUKIAWXOSCPHZWPBLEVTZPSSMCDBYRPATOUIUVYRPBAUQXQOUPXTGYMMZHJDVEXJYSBIWAOQQAZWKYRVNFLGLQQNSRTSHGOWBBULOGHEMMCOTJXOHEHKLEVCRKFGEAVIMPDDBKGQZADMULLNRBCDCZXNFYDKJHIJEMVJDFPPLBNJMPFZX");
    msg.ccount = 111U;
    msg.cnames.assign("PFPNWSMHPHEFCSLTUAZHRQJXJOSWWFWBGOGUGHYYFTDKQARECJSUXOWMGNXWLBQHLYBTOZRMIRWOEMONVDQMIHFKUZPAIVGZSDGMAZPNRQBTTNCKXFADBEYSLLDDLJTFTAOOWMRDJVBTDIVICZOPCMEVZUVPMIKKUNJKXQSQKJXILYFNXBIKHEYA");
    msg.last_error.assign("ZVLFRRPNGISDXUUYQADGMLKOROBMPSVGGKPOBUPPBNJJJWOHPVZWA");
    msg.last_error_time = 0.651601070570082;

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
    msg.setTimeStamp(0.6000233604360509);
    msg.setSource(31501U);
    msg.setSourceEntity(8U);
    msg.setDestination(19567U);
    msg.setDestinationEntity(167U);
    msg.mcount = 107U;
    msg.mnames.assign("WNNKVVXYPBSRUBOJMIF");
    msg.ecount = 167U;
    msg.enames.assign("KCTHKMJTHLYBPTCDVEFLMCJZTTIOCXQOMGOKMAWLCNPRNHPHTW");
    msg.ccount = 214U;
    msg.cnames.assign("UQWHJPSBCWUFGXRLSWWJCLOZTDDBTEZFFMNPLRSOWBYPNKMOZSDYPCZCVZBJBBTZLITOCRCFDKCCHGMUXWKKYTYAPKSNOLQNYDMJWFTERAWMGGGEIEGGGKXHVIBZVWUVFRZCVAPJYIZKEJCAIY");
    msg.last_error.assign("UDOFBFLJZQVDIX");
    msg.last_error_time = 0.8967984758914177;

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
    msg.setTimeStamp(0.06351764805107996);
    msg.setSource(13288U);
    msg.setSourceEntity(198U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(78U);
    msg.mask = 93U;
    msg.max_depth = 0.49749988177644244;
    msg.min_altitude = 0.6930643005178773;
    msg.max_altitude = 0.7460142080705133;
    msg.min_speed = 0.04468767159950415;
    msg.max_speed = 0.7135408533324611;
    msg.max_vrate = 0.7310596473036767;
    msg.lat = 0.5275634727005827;
    msg.lon = 0.908344574093176;
    msg.orientation = 0.24520719413856695;
    msg.width = 0.6120847068777632;
    msg.length = 0.2395455074895062;

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
    msg.setTimeStamp(0.824709793841432);
    msg.setSource(28604U);
    msg.setSourceEntity(93U);
    msg.setDestination(61922U);
    msg.setDestinationEntity(247U);
    msg.mask = 172U;
    msg.max_depth = 0.9296265628843138;
    msg.min_altitude = 0.3738875753095271;
    msg.max_altitude = 0.08600058475472605;
    msg.min_speed = 0.7608737136887667;
    msg.max_speed = 0.9791002059811903;
    msg.max_vrate = 0.20162592501207655;
    msg.lat = 0.2847415103060832;
    msg.lon = 0.02514711806217651;
    msg.orientation = 0.5853737838728481;
    msg.width = 0.23985942153247286;
    msg.length = 0.6506582862490534;

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
    msg.setTimeStamp(0.2487128126035989);
    msg.setSource(40364U);
    msg.setSourceEntity(141U);
    msg.setDestination(4138U);
    msg.setDestinationEntity(236U);
    msg.mask = 244U;
    msg.max_depth = 0.28642797794665;
    msg.min_altitude = 0.4114694976619403;
    msg.max_altitude = 0.18736410616402188;
    msg.min_speed = 0.9082610341324114;
    msg.max_speed = 0.49199906528240234;
    msg.max_vrate = 0.53959870257396;
    msg.lat = 0.12927739574712405;
    msg.lon = 0.03856378588392151;
    msg.orientation = 0.1977917790501369;
    msg.width = 0.46717880896976727;
    msg.length = 0.6564969961262779;

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
    msg.setTimeStamp(0.03143093999563107);
    msg.setSource(12424U);
    msg.setSourceEntity(230U);
    msg.setDestination(27615U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.8362421896630764);
    msg.setSource(40026U);
    msg.setSourceEntity(53U);
    msg.setDestination(59712U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.46680128921638586);
    msg.setSource(26180U);
    msg.setSourceEntity(193U);
    msg.setDestination(59706U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.9872721429639804);
    msg.setSource(15847U);
    msg.setSourceEntity(191U);
    msg.setDestination(126U);
    msg.setDestinationEntity(60U);
    msg.duration = 10575U;

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
    msg.setTimeStamp(0.45577047918300295);
    msg.setSource(14970U);
    msg.setSourceEntity(163U);
    msg.setDestination(25252U);
    msg.setDestinationEntity(41U);
    msg.duration = 47434U;

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
    msg.setTimeStamp(0.251752488041704);
    msg.setSource(45808U);
    msg.setSourceEntity(123U);
    msg.setDestination(58386U);
    msg.setDestinationEntity(33U);
    msg.duration = 58368U;

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
    msg.setTimeStamp(0.9263659594539263);
    msg.setSource(17068U);
    msg.setSourceEntity(153U);
    msg.setDestination(38054U);
    msg.setDestinationEntity(134U);
    msg.enable = 169U;
    msg.mask = 1345568064U;
    msg.scope_ref = 4236031013U;

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
    msg.setTimeStamp(0.4072839709552224);
    msg.setSource(39817U);
    msg.setSourceEntity(88U);
    msg.setDestination(53870U);
    msg.setDestinationEntity(5U);
    msg.enable = 69U;
    msg.mask = 1086703553U;
    msg.scope_ref = 2845799974U;

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
    msg.setTimeStamp(0.13085471742894983);
    msg.setSource(54382U);
    msg.setSourceEntity(110U);
    msg.setDestination(38292U);
    msg.setDestinationEntity(189U);
    msg.enable = 29U;
    msg.mask = 3838831362U;
    msg.scope_ref = 3884290130U;

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
    msg.setTimeStamp(0.3382219102170838);
    msg.setSource(65041U);
    msg.setSourceEntity(197U);
    msg.setDestination(26868U);
    msg.setDestinationEntity(229U);
    msg.medium = 38U;

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
    msg.setTimeStamp(0.8519733853867303);
    msg.setSource(28919U);
    msg.setSourceEntity(239U);
    msg.setDestination(58974U);
    msg.setDestinationEntity(143U);
    msg.medium = 191U;

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
    msg.setTimeStamp(0.4045318437557339);
    msg.setSource(26842U);
    msg.setSourceEntity(119U);
    msg.setDestination(1597U);
    msg.setDestinationEntity(181U);
    msg.medium = 165U;

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
    msg.setTimeStamp(0.7242941691997355);
    msg.setSource(56580U);
    msg.setSourceEntity(94U);
    msg.setDestination(22790U);
    msg.setDestinationEntity(226U);
    msg.value = 0.5095242389789861;
    msg.type = 168U;

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
    msg.setTimeStamp(0.1973433527508779);
    msg.setSource(60597U);
    msg.setSourceEntity(88U);
    msg.setDestination(47313U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7582841513264762;
    msg.type = 170U;

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
    msg.setTimeStamp(0.46171445362850516);
    msg.setSource(33148U);
    msg.setSourceEntity(119U);
    msg.setDestination(28179U);
    msg.setDestinationEntity(186U);
    msg.value = 0.6544612984169468;
    msg.type = 85U;

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
    msg.setTimeStamp(0.8269609329130012);
    msg.setSource(63623U);
    msg.setSourceEntity(171U);
    msg.setDestination(33736U);
    msg.setDestinationEntity(167U);
    msg.possimerr = 0.9351076676895493;
    msg.converg = 0.633045155015532;
    msg.turbulence = 0.7511603695760435;
    msg.possimmon = 59U;
    msg.commmon = 242U;
    msg.convergmon = 247U;

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
    msg.setTimeStamp(0.6902723607784268);
    msg.setSource(57848U);
    msg.setSourceEntity(240U);
    msg.setDestination(34025U);
    msg.setDestinationEntity(166U);
    msg.possimerr = 0.8420929753186988;
    msg.converg = 0.7672640615235238;
    msg.turbulence = 0.0866005343060664;
    msg.possimmon = 209U;
    msg.commmon = 41U;
    msg.convergmon = 74U;

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
    msg.setTimeStamp(0.8910183701852324);
    msg.setSource(34374U);
    msg.setSourceEntity(166U);
    msg.setDestination(24809U);
    msg.setDestinationEntity(11U);
    msg.possimerr = 0.44514258533864826;
    msg.converg = 0.8536364951173023;
    msg.turbulence = 0.9220660186702578;
    msg.possimmon = 184U;
    msg.commmon = 191U;
    msg.convergmon = 38U;

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
    msg.setTimeStamp(0.5896310866855823);
    msg.setSource(22538U);
    msg.setSourceEntity(82U);
    msg.setDestination(18040U);
    msg.setDestinationEntity(5U);
    msg.autonomy = 232U;
    msg.mode.assign("TJXXPCUIGANHUDGHRUPCHNQORBIRZDECLYMMXOXNJGOQFFGDVMFBPEVKNXJGEMYZSJWVSEGDZXRATXHDAFIQNWYPMYYVSWGJYBCJKXLCTZSYKFICZLQWHUGNKTLULRATBQHSOAJMNVWIEZYSFPAN");

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
    msg.setTimeStamp(0.37186334167088053);
    msg.setSource(55020U);
    msg.setSourceEntity(111U);
    msg.setDestination(31764U);
    msg.setDestinationEntity(73U);
    msg.autonomy = 254U;
    msg.mode.assign("TALXLTOQCHNJQZGGPBAVNHIMXOBKZANWWIUJUKWORJWIMYKBAHUFTYURXRGPXOQYSUHEVENSGMUIPSDOZNLTHFSSPI");

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
    msg.setTimeStamp(0.41146828079395126);
    msg.setSource(42310U);
    msg.setSourceEntity(186U);
    msg.setDestination(61837U);
    msg.setDestinationEntity(135U);
    msg.autonomy = 245U;
    msg.mode.assign("IXLITDKFJVNOHFRCXSWCLCJHOUGKGPNXAOUXJFXNINEBYDTZHQHYKTEDJJYDBSXQKJDVAGSBOTCUZZBUEDJQALGIZYAZEBRHVMGFSMLYKHWXAEYKVNSFMOJWMJSPLAVZLUMRQAK");

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
    msg.setTimeStamp(0.8114257393128315);
    msg.setSource(51264U);
    msg.setSourceEntity(146U);
    msg.setDestination(53054U);
    msg.setDestinationEntity(193U);
    msg.type = 145U;
    msg.op = 74U;
    msg.possimerr = 0.7624566818862437;
    msg.converg = 0.8482912353623946;
    msg.turbulence = 0.2579990033127867;
    msg.possimmon = 151U;
    msg.commmon = 99U;
    msg.convergmon = 77U;

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
    msg.setTimeStamp(0.5320788035552726);
    msg.setSource(4421U);
    msg.setSourceEntity(199U);
    msg.setDestination(21494U);
    msg.setDestinationEntity(103U);
    msg.type = 166U;
    msg.op = 159U;
    msg.possimerr = 0.7986743204567394;
    msg.converg = 0.4513036870649406;
    msg.turbulence = 0.8634274852767344;
    msg.possimmon = 250U;
    msg.commmon = 87U;
    msg.convergmon = 46U;

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
    msg.setTimeStamp(0.9620368330166182);
    msg.setSource(15471U);
    msg.setSourceEntity(251U);
    msg.setDestination(62671U);
    msg.setDestinationEntity(84U);
    msg.type = 96U;
    msg.op = 209U;
    msg.possimerr = 0.573566178880418;
    msg.converg = 0.1989641906831794;
    msg.turbulence = 0.11801770816679857;
    msg.possimmon = 151U;
    msg.commmon = 122U;
    msg.convergmon = 81U;

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
    msg.setTimeStamp(0.6714691438957614);
    msg.setSource(57114U);
    msg.setSourceEntity(216U);
    msg.setDestination(35868U);
    msg.setDestinationEntity(161U);
    msg.op = 169U;
    msg.comm_interface = 109U;
    msg.period = 11515U;
    msg.sys_dst.assign("KGRANHZWRGDILAFIWEYEXOCFOQSVMRPNTJSXXEWDOLYFNRKQKZEAXIBIVTGEWPPASDJVFQITTWSCFWGZACYUCPZKSUXUYZRXJHKVLFPSZJSGUVQJNLAZMNPXHBBINMMYWIQLBHRBEYGZCGQARWFUNVIHCUXVSMNCKHTVUIMPLBMOQGMMJJRGQSIXDVLXUDNDOATBTEQOBLTRACUEKDOYFCEZWYGTYLFMNC");

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
    msg.setTimeStamp(0.1820036864665293);
    msg.setSource(47684U);
    msg.setSourceEntity(1U);
    msg.setDestination(40709U);
    msg.setDestinationEntity(184U);
    msg.op = 75U;
    msg.comm_interface = 132U;
    msg.period = 52785U;
    msg.sys_dst.assign("CULCXQGCZPAHYBOMLJYEIGVTQSDHDTHNWHBTBYJISVKWRFPFSDOUIRWAUMZVKDGSCEBUPJGGEMIDFNQGLDVYOQCCJDHNWZNEXZCITNARWQMOMFNRAWUJEVYAZRDABOKQXCYXPBTOEFEXKMPEWRGCNWLGRJPQSRECFUFSUBIHIQKXAOTFELZAUNIPPVSQIVLLHAJVKUGNYIUMLKHLHNZDBOXMJSTJBYZMZAKTJTKGSTWPLBRXSRQD");

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
    msg.setTimeStamp(0.4489481437189562);
    msg.setSource(24270U);
    msg.setSourceEntity(237U);
    msg.setDestination(27437U);
    msg.setDestinationEntity(218U);
    msg.op = 121U;
    msg.comm_interface = 243U;
    msg.period = 40955U;
    msg.sys_dst.assign("TIUOZHAEZEUVGLBAQCSNZBHMLQRDDQNZNNDENWHEVOAYVIHYJWGYAOEUTVAUCGFQSCUFPKRPMRKTMKHOGNXJDNHOWILWBAJPIKTYYKBGMSZRYOIBGDPRQKFKXBTTJDXWNTAWKCDEMYOOIMK");

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
    msg.setTimeStamp(0.3949025020091066);
    msg.setSource(54076U);
    msg.setSourceEntity(199U);
    msg.setDestination(34170U);
    msg.setDestinationEntity(179U);
    msg.stime = 1660750857U;
    msg.latitude = 0.5111573841599488;
    msg.longitude = 0.23388186459658244;
    msg.altitude = 39223U;
    msg.depth = 25105U;
    msg.heading = 7749U;
    msg.speed = 24322;
    msg.fuel = -118;
    msg.exec_state = 6;
    msg.plan_checksum = 57631U;

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
    msg.setTimeStamp(0.4026776983052742);
    msg.setSource(3500U);
    msg.setSourceEntity(237U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(96U);
    msg.stime = 1591328331U;
    msg.latitude = 0.8637341168514647;
    msg.longitude = 0.4014424122562854;
    msg.altitude = 27401U;
    msg.depth = 50823U;
    msg.heading = 59752U;
    msg.speed = -32038;
    msg.fuel = 3;
    msg.exec_state = -70;
    msg.plan_checksum = 30035U;

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
    msg.setTimeStamp(0.23301193093149652);
    msg.setSource(2184U);
    msg.setSourceEntity(234U);
    msg.setDestination(58450U);
    msg.setDestinationEntity(51U);
    msg.stime = 297483829U;
    msg.latitude = 0.5048129958118771;
    msg.longitude = 0.8948561844642943;
    msg.altitude = 5529U;
    msg.depth = 42516U;
    msg.heading = 35912U;
    msg.speed = 29163;
    msg.fuel = -73;
    msg.exec_state = -84;
    msg.plan_checksum = 40838U;

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
    msg.setTimeStamp(0.5682088170958465);
    msg.setSource(54602U);
    msg.setSourceEntity(174U);
    msg.setDestination(63699U);
    msg.setDestinationEntity(247U);
    msg.req_id = 12181U;
    msg.comm_mean = 199U;
    msg.destination.assign("SMJSLNPMSBQGCKGKGNPZXUKWYNOWAZOOWOXEVUDIYFBJNLTEEXVFXTEXGHHJFXDOQRCVEKBMXTRHXHZCMDNFMKWUERGVLWWBBFHEVJTJMWCLURVBEALLCPQQRJNUMRYCGYXZDPZALWOYALSMOFHBPMGKFQUAVHQEPIYTIDRHHDZPBFSYTNYNDAPROXDPEIZVQBKQUYSNSGQAHTSLSIYRGQBJAUCZGIKP");
    msg.deadline = 0.1977843779290036;
    msg.range = 0.47472291793491694;
    msg.data_mode = 181U;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 207U;
    tmp_msg_0.x = 29794U;
    tmp_msg_0.y = 36716U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZHUHCXFDSKEFNNVOTRQWMOVLTTRIWRJKTNNAQPZMCLANBVORMUSJUGAEKXSADNXMZOIXFWBMEDURCQRDVLAYCFKYPSBAVGHJNAOIEXENGYYPXNDMKRYUBFIVE");
    const char tmp_msg_1[] = {-119, -117, 57, 39, 78, 125, -96, -47, -72, -116, -42, 22, 25, -88, 7, -113, 63, -105, 5, -65, 109, -117, 124, -29, -5, 114, -115, 7, -37, 88, -3, 78, -28, 34, -14, 28, 38, -124, 80, 57, -44, 122, 63, 21, 125, -60, -21, -81, -122, -61, 37, 8, -56, 98, -89, -72, -102, -42, 39, 36, 33, 6, -75, 16, 105, 66, -53, -25, -17, -96, -73, 19, 103, 6, -95, -16, -54, 55, -27, -92, 56, 57, -24, -116, 115, 121, -110, -53, -17, -8, 19, 2, -111, 18, -89, -28, -4, -14, 18, 104, 107, 53, 1, -82, 31, 86, 60, 87, -80, 15, -106, -90, -97, -46, 124, -18, 94, 14, 37, 118, 2, 33, -105, -104, 93, -98, 10, -102, 52, -43, 14, 13, 33, -99, -110, -38, 7, 39, 74, -9, 55, 32, -15, -33, -37, 69, 87, 30, 11, -37, -55, 66, 48, 29, 3, 10, 23, -107, 38, 89, 104, 52, -109, -45, -109, 29, -71, -49, 91, -4, -80, 60, 30, -128, -65, 97, -102, -91, -100, -61, -86, -125, 71, -63, 75, -120};
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
    msg.setTimeStamp(0.6129569631018112);
    msg.setSource(37413U);
    msg.setSourceEntity(163U);
    msg.setDestination(18971U);
    msg.setDestinationEntity(178U);
    msg.req_id = 47952U;
    msg.comm_mean = 73U;
    msg.destination.assign("NWIKVPMUNSWOENQYVPAQTYCILCZPLJYIKBWUSYGARXKHRXYYGWKLGFWIBUVHTKOJFZRQZVEAUWUXMIRGNIRUMUFLAJTANDBXZKTOTOEDPHYXFNCSEHHSAMYRHYGUD");
    msg.deadline = 0.6536825922513968;
    msg.range = 0.5728777753381822;
    msg.data_mode = 55U;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 52968U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BZCYYPUKQSCNFLFXTZRTCLBDGQMKZDCDSSPRHXGAFTCOWIKLLTAWNQSNUYJNZPETSLFDSFTPCNGYUBLIHQDGDYXZEBFTIBIIXAOETJOQAMWUUBZGFHWKMVEKZVPDVVWLFLTOFIKEMMRKHDQQOGORYPR");
    const char tmp_msg_1[] = {103, 81, -45, 33, -20, 75, 23, 123, 59, 105, 40, -37, 90, -62, 114, -95, -63, 58, -54, 31, -11, -18, -88, -117, -95, -11, 100, -51, -112, 11, -56, -109, 123, -113, -38, 89, -35, 23, 14, -84, -88, -100, -70, 23, -58, 66, 99, -76, 72, 77, 41, 61, 122, -75, -59, 41, 5, 88, 66, 49, 89, 71, 70, -81, 55, -48, -88, 81, -23, -101, 2, 2, 9};
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
    msg.setTimeStamp(0.4535658139813733);
    msg.setSource(3991U);
    msg.setSourceEntity(14U);
    msg.setDestination(60584U);
    msg.setDestinationEntity(47U);
    msg.req_id = 27051U;
    msg.comm_mean = 247U;
    msg.destination.assign("JFBQOKMJBVLASRMSYSAEXPRYQOVLIFJSTIUKNICEXCPMFQZDAGDHPKLOYLYPEPWAVXBRPZLASVDLKBTEOEQRHIKNFCENCUJRJDXTOXVRPISQOVJFGTAFBCERJ");
    msg.deadline = 0.7160734246425572;
    msg.range = 0.7194260631464002;
    msg.data_mode = 102U;
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 47396U;
    tmp_msg_0.bearing = 0.9036882992444526;
    tmp_msg_0.elevation = 0.20036945935779493;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OOJPKDJAMOBLCBIBEJFFKUMQYVZKQTARHQNMHFPGRJW");
    const char tmp_msg_1[] = {34, -77, 52, -51, 60, 74, -48, -110, -55, 102, -47, -123, -30, -69, -94, 4, 81, 58, 73, -19, -88, -14, -90, 6, 91, 8, -19, -68, 70, 25, -95, 118, -31, 106, -21, 5, 112, 104, 48, 23, -46, -100, 4, -14, -2, 101, 13, 32, 22, 5, 117, -107, -103, -17, -71, 118, -50, 121, -90, 88, 125, 4, -17, 94, 111, 87, -86, -57, -39, -83, -25, -46, -18, -67, 63, -94, 0, -2, -57, -20, -72, -24, 51, -48, 62, 11, 92, -71, 33, -75, -44, 97, -49, -64, -20, -14, 11, -15, -4, 75, -56, -55, 19, 45, 34, -20, -16, -57, -100, -2, -92, -74, -53, 104, -117, 74, 32, -42, 85, -14, 112, 32, 100, -76, 50, -116, 122, 8, -93, -127, -46, 21, 109, -82, -48, -19, 43, 44, 22, 9, -83, 42, 51, 119, -99, 95, -38, 4, -115, -56, -113, -72, 43, 79, 64, 109, -24, -67, 16, -49, -50, -107, -26, -116, 72, -121, -19, -40, -64, 30, -95, 107, -104, 121, -40, -16, 19, -13, 4, 67, -121, -30, 74, -29, -69, -36, 59, 35, -109, -1, -6, -57, 56};
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
    msg.setTimeStamp(0.29657678696417566);
    msg.setSource(45516U);
    msg.setSourceEntity(58U);
    msg.setDestination(21497U);
    msg.setDestinationEntity(115U);
    msg.req_id = 50647U;
    msg.status = 120U;
    msg.range = 0.03582142481680417;
    msg.info.assign("AHWZOEWEFAZDAXPYDDNSXRSCACSSEYHKWKIMNQBUVFCJGQMLZIVWVVJNMYBDTUOXEFETVLMHJLODURBGVBKYWBTBSOUIMFGETTUGMQHUWYFSGFJMZISJLRNYFEI");

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
    msg.setTimeStamp(0.40990356440644693);
    msg.setSource(23647U);
    msg.setSourceEntity(166U);
    msg.setDestination(63687U);
    msg.setDestinationEntity(9U);
    msg.req_id = 60805U;
    msg.status = 131U;
    msg.range = 0.408123962928881;
    msg.info.assign("NHPCZGOKFHBTOJ");

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
    msg.setTimeStamp(0.3098300105703373);
    msg.setSource(8051U);
    msg.setSourceEntity(137U);
    msg.setDestination(2057U);
    msg.setDestinationEntity(93U);
    msg.req_id = 25970U;
    msg.status = 91U;
    msg.range = 0.3364384886847307;
    msg.info.assign("XDBQBJGTCFSEMHNZPBAPGDXTRPDTUPSVYYUKQMNQYDNWMFIRREOWCLDWKWNFHGKBFASLRQCFCPJKYE");

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
    msg.setTimeStamp(0.057306593987987986);
    msg.setSource(44786U);
    msg.setSourceEntity(167U);
    msg.setDestination(50329U);
    msg.setDestinationEntity(118U);
    msg.req_id = 53688U;
    msg.destination.assign("JHTNIRHNCMSTRQGLCRSJMKUFDSVGBXDIGZRPWAZVASDWGNJLGIEZLICCJKUIKWDWOFLTXMXUXGJPBSZAVDZFUMAQJAKFHPRPLCUFAFPJTVNADDRLDQNOBBXHOMNKBPOGCQTQIRYYOETOFRFTVUWYPYWALPYAYXXWDIQHCCHVHMVWFWSMLNOUPHYBQKEEMBNQJEXKZOOJWGSFXGJKYHLBEIZBHOMLRESUEAMZDIZBCIKTQZYGUEUVY");
    msg.timeout = 0.29081462417233905;
    msg.sms_text.assign("JRZIUQORAROSFKPHLKMYQFBTSTREYWKLXMQVDYPFMUYTDCDHWWCEGTRSNVMYUZASPQGJHTFVHIQNNDIILDZOQCPASLNCXUDCFEODRRWIASSZOFNMCAVBQINFWVJQUETCKIAXHTUJEPXOH");

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
    msg.setTimeStamp(0.9877615359125927);
    msg.setSource(11592U);
    msg.setSourceEntity(88U);
    msg.setDestination(44618U);
    msg.setDestinationEntity(28U);
    msg.req_id = 12612U;
    msg.destination.assign("XWXHVPMJYCSMQDVOYRCMVFZIWELRVRCWZJFEYNOEYBRTSFGGHZQIFSEGUAOFIJSNXZBWABXLOJAGTMJIWMHLAKUXSFREDTPCYKYHBIPCBNYZYKTONHTIPDJRKUSUOABHGBAVRPDKKIVLPRIWO");
    msg.timeout = 0.209349110705787;
    msg.sms_text.assign("QWRWMBNPAIRAWLULZXDRHZROQGPPOSEWAUQGHCOZWMQXDYHOXGKPKVGISDDMCWFNJSSIXUXIKSGZEHFMFJCETHJPXVAVDFOTRHFETQFXDRJJZLVMRBZEURNPJOCEZRYDMSVAFLDNJZGBKSVHNIMLIUHQBCSIVBQYYUYCDFIICOPGWGTONKUPAYYNPGNNLLKMBZAJUKUATQYXTERBUWKBQYJTLCVPTCQ");

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
    msg.setTimeStamp(0.6154413863106493);
    msg.setSource(52327U);
    msg.setSourceEntity(107U);
    msg.setDestination(55033U);
    msg.setDestinationEntity(148U);
    msg.req_id = 15828U;
    msg.destination.assign("RLYBIOIMZEFNGAIPOMUQAJFAOAOFBTCFHTAFTQNJWKJJBLMVWOGDSKUDYFMAUGXPYLQMVEMX");
    msg.timeout = 0.9006205766983536;
    msg.sms_text.assign("BUTTNGUBQTBIVCPFDDUPAWERPFQNZZTUCIPGDHBJZJSGIFLWHKHAZMSLBCVOKQAKCTRGMYRSNRLZWKPANRYSNDOKFHLVDLOEAHZYMHGNYTWEEXDIMADCVTBVOYTVZOSSBIWGFVURCXALNOIWGKOVDQYZ");

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
    msg.setTimeStamp(0.5944682740722195);
    msg.setSource(19133U);
    msg.setSourceEntity(124U);
    msg.setDestination(27702U);
    msg.setDestinationEntity(51U);
    msg.req_id = 17741U;
    msg.status = 74U;
    msg.info.assign("CSFUMDHQLZXZUZYNEKDNGXHZYRCXJCKKFMCEHPKOSRPRQGMEUOROIDGNVINYXKVDWUKIRSTMECYMTVYXHBTNTLWUG");

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
    msg.setTimeStamp(0.8086816833792201);
    msg.setSource(12476U);
    msg.setSourceEntity(136U);
    msg.setDestination(12953U);
    msg.setDestinationEntity(131U);
    msg.req_id = 1616U;
    msg.status = 235U;
    msg.info.assign("ZEVRXYJFOSSIDVODBRKLULEYHIYUBMHYLAUCPGIDQSSCNHSVBLJQTGVRCNSGXRNJTNAIIFOQPMWQUTEXGARMKEOKENHWOJZJKTWIKHEXAWBLGYYZOHEMPFOSTMKHIJU");

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
    msg.setTimeStamp(0.7785972999298075);
    msg.setSource(25776U);
    msg.setSourceEntity(67U);
    msg.setDestination(24353U);
    msg.setDestinationEntity(75U);
    msg.req_id = 59282U;
    msg.status = 200U;
    msg.info.assign("CRDBYFGGXKNKHFCCYZVOVIABVPZJNCSWENZQCYEXXNIFTZRUKFCDJKMHWXLNAKMJUGEYLEHAULAQYHIOCGLIIGKLNRWSLSIGWLOKCOMQZXNAEMDRAVLISPZWDSCPLRIIHRTZVRQCMHUPPYDYRDBFUMHHWEZOQTJBB");

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
    msg.setTimeStamp(0.22226911687157536);
    msg.setSource(32172U);
    msg.setSourceEntity(69U);
    msg.setDestination(41728U);
    msg.setDestinationEntity(107U);
    msg.state = 96U;

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
    msg.setTimeStamp(0.8669447622982611);
    msg.setSource(37939U);
    msg.setSourceEntity(169U);
    msg.setDestination(23150U);
    msg.setDestinationEntity(55U);
    msg.state = 151U;

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
    msg.setTimeStamp(9.55017364713262e-05);
    msg.setSource(17754U);
    msg.setSourceEntity(167U);
    msg.setDestination(5015U);
    msg.setDestinationEntity(47U);
    msg.state = 164U;

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
    msg.setTimeStamp(0.8974037747029028);
    msg.setSource(41407U);
    msg.setSourceEntity(176U);
    msg.setDestination(14431U);
    msg.setDestinationEntity(103U);
    msg.state = 4U;

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
    msg.setTimeStamp(0.9864231611466936);
    msg.setSource(21181U);
    msg.setSourceEntity(157U);
    msg.setDestination(15176U);
    msg.setDestinationEntity(108U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.686339168241012);
    msg.setSource(47417U);
    msg.setSourceEntity(109U);
    msg.setDestination(15001U);
    msg.setDestinationEntity(192U);
    msg.state = 14U;

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
    msg.setTimeStamp(0.13992463022085533);
    msg.setSource(423U);
    msg.setSourceEntity(134U);
    msg.setDestination(44265U);
    msg.setDestinationEntity(163U);
    msg.req_id = 55470U;
    msg.destination.assign("TZLNUUORDYMMRVHCAOTVIOLBMFDOBGEIWOSLVUHSQXVNHTFVXYLLZNFSWJLPSGQBPAXRVNJXYKAQFKBUEHGA");
    msg.timeout = 0.44085635550620283;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZVTXAGNUOPXNI");
    tmp_msg_0.type = 183U;
    tmp_msg_0.properties = 85U;
    tmp_msg_0.durations.assign("SLSMJWHCRIGCTQIQGOQOQAGHQDWISRXFKVLTOQPWMVDRMFEADMRZTNUKVPCYVFZMBELNCQDJCGPKSBBAGZDUYHZUTRBPUXIACXEUZOAYBNJTVDPYJCYFTASMUMBNHZHTEZNJ");
    tmp_msg_0.distances.assign("NMGNPRIQWHNFCBPTUWOKDYZP");
    tmp_msg_0.actions.assign("PJBIRQNQZGSMHLOZPMCGHHBRJTJFRCPQPZXWGDOEVXPLALUXFRXCQLCQJULOXZMJVSAMYCOTGBZNQSLWVNOMLDFDNWXPKKBFCWJZUGMVLQREJYIKBGCADWPJEZBAKSFOWVHIIOQFPGAFWFXVUYMUOTOIUDMGNDCHIKOMEIGMLVHLTXAAIVVHTYNEBAPJUCWTBIKYJXAEYKBYPYHQNZERNFTSZAR");
    tmp_msg_0.fuel.assign("SIPIDDHKBELRKNRUBGJFXGJILVZHKQYLOUNUCMNNIWVWMJKLQQBVYA");
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
    msg.setTimeStamp(0.013406763594241311);
    msg.setSource(10009U);
    msg.setSourceEntity(183U);
    msg.setDestination(52694U);
    msg.setDestinationEntity(95U);
    msg.req_id = 20899U;
    msg.destination.assign("TNUEUBDCVFFIDUOSYEBEGCBXJBSZORVHPJOZHAEEDTRLKBGCEBTCESJFWGZCUCYHIFYVSNBFNHMOKOVRQNBXNMHPPLMALYVYVXPIEMWDSKSOTCRPIGMQAJRGXMZRBNJVAGGQRQAVY");
    msg.timeout = 0.39978339959676457;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("GXIYJYMJUUNQWZXCHRBFEGNCMZOQRPXVPVRNIJPFSQLPSBGCZNEHVSFKOTQZ");
    tmp_msg_0.rssi = 0.005559130341714069;
    tmp_msg_0.integrity = 16040U;
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
    msg.setTimeStamp(0.5216996981170685);
    msg.setSource(449U);
    msg.setSourceEntity(139U);
    msg.setDestination(50052U);
    msg.setDestinationEntity(172U);
    msg.req_id = 27105U;
    msg.destination.assign("TYZJXVXRYSBGWCXNRFVMVGYIOLTLATUNXCKTSRRAHEJNMYJDKHPGAFSHOTGJWFHAWPLSPZWGRQDNLOBOIKEXGJQJMITQUZZJEBUXOIMVVYANBAHRQUGZQYPANCVTJPQCWNBQJIUBXOZKKVTQFLSLWDDVSSICEFZRUIYHUFEPMXIZYEDGEQOCETMHPMLMXMHSPUUHDLYKFBOPKUQNAXFPTEWCGRCSYASWOLNMBLWZFDGIBHNW");
    msg.timeout = 0.4580634619329923;
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("TMMEDCNOEYTGIYSZSALGPMHWJDSXBKINBRFRQICCVVOOYUJYGAVYBHJRUAMQWAXZKRYHEWEFGQCVNRJPOQXNIJBLQCWPJUZPFLHOXECRLLNGMRTVFGDALBEYYDHOPKREKUYUQPFKJVUWXWUZIHGLSOFZMKUDWHTCPSDXTCZINVNMFTZBOPAKAGAZVFASHJIWDDIQXNBISSQLSPKDXDTRLGKJYEUOMS");
    tmp_msg_0.timeout = 33542U;
    tmp_msg_0.contents.assign("QBWYUUVCOIFPMGTOPDPWTYOXSGEODSWIFTGYCWAUYHBKMZPKBZTXNQTHOAOAANCPTJLGBQISSZZHCGHFDQVTWGGGBNXFHYDEKLRKDMJILKWBRZCKPMKKFAAZJQJNNGFTVOUYKFYESHCUNHIQBMMICLZWDVVJPMUQZQCCAZWLRLJVWLDERHERAXMNSQFMYLAJXPTLHBSJUHYSYUVDVCPZRAOIGXWQIRRJLXNFEDN");
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
    msg.setTimeStamp(0.8670043485611507);
    msg.setSource(60185U);
    msg.setSourceEntity(21U);
    msg.setDestination(4087U);
    msg.setDestinationEntity(180U);
    msg.req_id = 42845U;
    msg.status = 249U;
    msg.info.assign("VDLOCJVEHQHMZHXUSQJDQSVAUGQLMUWNLBAFUZMPITKRAWAWJCMDVPJYGUPKWUROXOKZJRIKNQKECIGZPHQPEEGXSAWIOMRSVYJQJFNEGXELVRTWZZTD");

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
    msg.setTimeStamp(0.7241778738367673);
    msg.setSource(38284U);
    msg.setSourceEntity(13U);
    msg.setDestination(16924U);
    msg.setDestinationEntity(140U);
    msg.req_id = 64407U;
    msg.status = 233U;
    msg.info.assign("VEIDFHEZFDMRHQHJAZQENABUIEIHAOIGVKOCWUDUPZWCRRBNSXJYBHMXTEHKLOKSQLYRCBDSLQHNPTFOSEWGRCYVLXLCDPEAQOKNUSUBKGRTRDCKMUNMXVVAOBMVOPJBJTFPLISENZFGYNM");

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
    msg.setTimeStamp(0.5742302328177699);
    msg.setSource(16012U);
    msg.setSourceEntity(23U);
    msg.setDestination(37250U);
    msg.setDestinationEntity(204U);
    msg.req_id = 42949U;
    msg.status = 57U;
    msg.info.assign("NDCEDGSMENIRCOVUSICZUSLKGWCPQFUCQXYPLIFEQICJHUADFLFDWSHPKUWPERWBXDSBJZILKVRZOJZEZXSQGAHRKOYKMRVBZXTNUJLUIXZHQNYQYVQDJWOUYGTNNCGAJLMLVAUOECZXBFQPLDGOKEHDOHAPXXTHTBCDTVBXAJYGYAUVAMJTKJOHTWBPDXVKCGTHMAYFTKIYPIHJROMSB");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.32969038347634483);
    msg.setSource(55973U);
    msg.setSourceEntity(83U);
    msg.setDestination(13432U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.43015031234216683);
    msg.setSource(23436U);
    msg.setSourceEntity(206U);
    msg.setDestination(2033U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.8314598077220665);
    msg.setSource(26238U);
    msg.setSourceEntity(16U);
    msg.setDestination(34825U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.5466064365832887);
    msg.setSource(52288U);
    msg.setSourceEntity(227U);
    msg.setDestination(24628U);
    msg.setDestinationEntity(38U);
    msg.plan_id.assign("PLREBZFGCUDUQHGGGZZQVFOWDWCFFVFGVEVDQHHCHBJAYXIUXTKFATSPNIYNSDRKJIZLBRQYXMLDCUNRCHMAKAYSOELOSHBJDNSNWDQLYOZXURQSKOMUWXK");
    msg.description.assign("RCZEKZGONBOWPLLLMNHGEMDRRBAHSIKAEWPJTXXWFSASBCDUUETXXNRUSUPWZTJLHQQTIPZQCSHXCAPIFZTYVELGXDIVHGRHPKVPZSMHLVYFGJZOOFKEREUDFNGSVGPEUPAATFIUYVUMMMWATJKNBBOOQKVXCJOUYKTGWWKFDEJIBOHZTSKVZXJGVJBYIFXQQYYBYDCDLRQNWCONCMFRPYFIAMDBNMCSAQGWEHNNYIVDKZDQBOUCJWQJ");
    msg.vnamespace.assign("USYXZKJFXQXOVHRXDCYANTHNVSVDLLYGVZKZOGHTJNETXBZCSXRPVLMKXHLJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VMFUUJOJZMDOOSZMJWHEPKGOHRQMNKLXXPFVEYSKNILWNWFXTQGJULCRIZRDURGIVFPIUBFEKCYFUIQRKNXITVUVBCAGVQRXVKVBOIZPENBRGK");
    tmp_msg_0.value.assign("WUTISCREEDLPXURGBSPIJKKBPVCSEEYUHDMOZUAAGAU");
    tmp_msg_0.type = 119U;
    tmp_msg_0.access = 235U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CWPHTRKMHFNCIMMHOFEMOTMNTPILJIABKBXDPWYNPDBGEJPKXQINLRAJZCHHPLGVTCVZCKRMPBFCQVXTVCXHKAJDJSTAZRRCTFSFWXQDAMPVGUGAAIOUQEYQYKHFNGSNTJOUWIZQJGBZNOIOMZSCUJSBRLUUSIDJEGDKRNXVQCDMEUJXXDTQFRYSRNDHHOBZLUEUQWONSP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("VJMLAYEMPVVBIMURFRMGCGTTNCXKWNTFGOMSZUFQOXZGGVLWXCHLRDYUCRBOWZKUALXRIPKOIXBHTQRCJYOUYFDRJQWIMJSNOSOXKUCIDBBLKSRVBSANTFPEZNLWJHAQMZAQUEDQGJIXOEJVPHSEQATLAVBPEQIRPKNNPOLVHZJLDBEWXEPYFVFFWWMCDESRJWIVUHQFCJUDHTYCZKDHMSTZGHKTATNYKXZU");
    IMC::FollowPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.target.assign("TGOCAVTHMDPIBADWV");
    tmp_tmp_msg_1_0.max_speed = 0.25986262260291637;
    tmp_tmp_msg_1_0.speed_units = 46U;
    tmp_tmp_msg_1_0.lat = 0.3956648998247593;
    tmp_tmp_msg_1_0.lon = 0.942764821741559;
    tmp_tmp_msg_1_0.z = 0.21085042729684478;
    tmp_tmp_msg_1_0.z_units = 81U;
    tmp_tmp_msg_1_0.custom.assign("MSTHLMUVRTBJTHBPMBCYYCYFPGDTAIHZJHEKOQLEFGVSWGJDNJWWKNYXKIXBFJONAKETXYBH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AcousticSystemsQuery tmp_tmp_msg_1_1;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("OJYSJHXXZYEKHAMGXQYHCGQVSLKRBQAGEMZQIQVHGDPSFKZVDFXHWPUXDPRUHZCADTWSLWJRKYJGBMEOCOCWIQARMQBZRTBLISBRVHXNHAORMLRZUOPCCYLPSZDNIQXFKKKBIPYIAJDTOGUYKUWHBENEZZTNNYNAHEYROWIJTT");
    tmp_msg_2.dest_man.assign("SCSDHOWJEMTQGIAOUTZ");
    tmp_msg_2.conditions.assign("SCOFBXWXLYRFSUGRENYLEXMKUBBHMGGVDGWAVXCTDGPSDPPJKUUFOSBECKQNCREZECBWEMRPPLVYZTWQPJFVWTTDRZNQFEFQZMOQSINDLFWRPAEHJDILIWRWGYXKCJITDLOMKVXAOAWOEYIPWTUFYCKQYJNTQRZZTLVKKGJMDKIPURHEZGBNKFQBRVSZBMCIOUBNNHXVYJXHL");
    IMC::EntityInfo tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.id = 236U;
    tmp_tmp_msg_2_0.label.assign("ERBUQWUIUJSQJVLTVMCMBZJCQUOAHPXUAYFBEYUQFBDWJMEQOZKQCWTNRDTFTOPQRHSNHBOFSZRMDGDNYTQAHXLPZICGSBHNGLBWYJCNVCWKHGPRGDXJFCPEIGFKMDXKMBJRDPYWBVDEIFOLAGVERMKAMKMEJTDLVOAXWNZFCGIWHO");
    tmp_tmp_msg_2_0.component.assign("XGZJXBSUVQCFVHYGNYGPWXROOMLNPICYGZAODKAQLIYBOJODWYPAOFBVAVNCZUTGEPZFEKXFCLUQRTHMSDPLELLWTUBYTDBFCEJSPJDMKCKJQIZPUWVZDBDNWUHUGIVOMKHSMMHKNRA");
    tmp_tmp_msg_2_0.act_time = 60452U;
    tmp_tmp_msg_2_0.deact_time = 41733U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.042365754607054384);
    msg.setSource(50632U);
    msg.setSourceEntity(67U);
    msg.setDestination(40810U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("WUEUEANNADSZMQLQANMHISQHIBRUVKQXOFRMLSAJHYDTZREEHZXKTVHPQYQNVMVVFYGXGBDJHHHWBCBSMVAKRDFIVTXDWRIFUSCZRMWUSOLQUUAXTQZCTKEMPDKIKCSDTLLJAYINPTMRJJECPMFJDYNDUDGRJJCGEWLBVMZOBGZQXXAKRKIW");
    msg.description.assign("YRSLHPJFBFKDWTVCDVMQUZJQZKUAWRVWDTVIZNVEDFVWWCPVXZHQPBDOSE");
    msg.vnamespace.assign("SSNSQVVNXXDNEEBLDFMAGPYXAWRODEYVWRGROUGVUSTYIPPQCNQBXJTRPBFZIKINLVCQPOTQULBOXCEYBHMMXSIACHJWCWNJZKKSWTGZTCLKJPIAWIEVFJIHJYVBQCARYLBKFDUWROBZSNJHGYWALSFFTCQWULMRDZGRPGHKDHETMCTRDXHVLOAEZYDLUZDOHDKZUOGPXYMCNFAUHBEKP");
    msg.start_man_id.assign("NRHZFHPFKVCDUELQSCGSUGYVEGOXVYYFIAJWNLLGPJILATWZBIDNVJKPMMOAAZRBHSSXBCDNMERESZLUXSOOVOYPNAGTLEKYXYRKOSKWZTVROZQXTUPBSMWIMHPYEWLQDQUAHCXZXWDQYHBQRFWWHUBGFJXGEGGJFYTIJKDVNUKVBSPJCCDLVHRPBQADMREJSONWAJFURKMKCMTAVTFCCQLOIUMUGETIPJZZMACBKXQHIH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("ZRUYGFNLDVSEUBTQNUJGWAK");
    IMC::Takeoff tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7944136198084327;
    tmp_tmp_msg_0_0.lon = 0.712485530724671;
    tmp_tmp_msg_0_0.z = 0.43682384910306615;
    tmp_tmp_msg_0_0.z_units = 49U;
    tmp_tmp_msg_0_0.speed = 0.8456470677562393;
    tmp_tmp_msg_0_0.speed_units = 239U;
    tmp_tmp_msg_0_0.takeoff_pitch = 0.5825956206140371;
    tmp_tmp_msg_0_0.custom.assign("BETIZDCKLKDCPQVWEJHGHORNMGFZFDHIFXVWWYHMVRLKLHWEUYMPZRCQLLSUKNLJGATPIMIJAPDEEUWZUONZKYFMWEORTUBKNAGVC");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TotalMagIntensity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0410583876108116;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::UsblPositionExtended tmp_msg_1;
    tmp_msg_1.target.assign("WTTTFUJBZLBJVNDWVDWVCPJZANUJCIBBGOILYWEFMUCGZESXSTWDRZQOIVPORTFHNHCHPZZVQYQZMGUSDZQSJCMVWPWERMODGFBSREADBNXEGGMYSAPGRONTWAIISKHDEIGEHLANXRLIYMBXHCPYSQGNFKBECAPKUXLLFQQCDJQJXRHOHYOKWV");
    tmp_msg_1.x = 0.6055084879892237;
    tmp_msg_1.y = 0.7167331155181046;
    tmp_msg_1.z = 0.11614984683276208;
    tmp_msg_1.n = 0.4147843998240067;
    tmp_msg_1.e = 0.6918549416032571;
    tmp_msg_1.d = 0.6024294316773673;
    tmp_msg_1.phi = 0.021638776575210183;
    tmp_msg_1.theta = 0.43006518521982806;
    tmp_msg_1.psi = 0.3516621272439653;
    tmp_msg_1.accuracy = 0.6050835846610704;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Throttle tmp_msg_2;
    tmp_msg_2.value = 0.9301038921750697;
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
    msg.setTimeStamp(0.8579443964795688);
    msg.setSource(5139U);
    msg.setSourceEntity(190U);
    msg.setDestination(35847U);
    msg.setDestinationEntity(187U);
    msg.plan_id.assign("HKGSLFAOLQRUWVQRUHNIRHDYLLVJKBFITXFFYVGJMPPTEDGRIJGTFANDCJMQJKOANWZBPPBARPYDLEHYCQZWOOKWAXSNWEXIERTRECSVVZCLBMWKLEVAGJBVUFMXJJQFKDIYQCSSRIDPAJPWXTCGKFSQCANGMEUMEZVAYGDWWUONOYTXUXHXDTOBWUEFHLRSKDYIZYBOHMOMCVYUGSXGZJIDKNZPCIPTZPUXHBTMHONHZRMNBUELTQA");
    msg.description.assign("EMFAYXZTQWUNTXWDZNZRVFQFJCSGTRUJPJCVWEDSQGIIWKLSOSNDXZVYNGFMWLBRGACXZYXBYYKIKGPKYQBRHZOOKWIPVSPTOIXTILWZKCGXNEYETUDBFHZALCKEWLMKCRGVMHMFSHRRUTRXJMAQWCLAJHJGNSUYPQAYAPFTPBNODKGJVMDUVSHDQZXOQLLEAUHBVBFKDTIAPNNJINAJLEXICIMBVQEMHDUEOVGBBUM");
    msg.vnamespace.assign("KAMEOPZATNUHP");
    msg.start_man_id.assign("FXLSISESDYLXDQLDAPPZMRZJTHHJLECYUJOPKOQCGZBKGNIBUEFAOTTZWZXRUTATWGPKWVIAKZFIWHBUGINCRFTMZDKGAXHIERNKQCYURJVGJED");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("HHQQKVEYIAPQBMYXIKANZZDXRMSCGMOSPPGYBOXSLQAUKTZUVEDLUSNDGLHUALWYXQXQKFGGPWCWCXZBJCVVOYMHCW");
    IMC::Alignment tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 3220U;
    tmp_tmp_msg_0_0.lat = 0.08250299414083917;
    tmp_tmp_msg_0_0.lon = 0.14787952658305437;
    tmp_tmp_msg_0_0.speed = 0.2768155191620263;
    tmp_tmp_msg_0_0.speed_units = 48U;
    tmp_tmp_msg_0_0.custom.assign("JIJFXRFLUMOUMTUEJJMAATKVPZEKMUVKLDOZCSBBGAQKLJPXWHHEABWXXOOJDLGBCNFIPOAZPMHDCEGROZQQCSZOSBVTQYDNSCFHIJMABPVYNTIPXGV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AcousticStatus tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.req_id = 42209U;
    tmp_tmp_msg_0_1.type = 73U;
    tmp_tmp_msg_0_1.status = 231U;
    tmp_tmp_msg_0_1.info.assign("UYVCFYVJIZXFTPGZTAQZXZHKFDJNCCEUEXCFDDWVUQUBGYVGYAKAXHPYRRQVDBYHSRDOIGZHZKMMSGFORNRFUXXYPGQJLJUCPHGALZSHDPNBQTPNOCLNNVHCUZUOWRJWAWFIFCLWIKJOBSMLQAXMKXMOIHQTJAENYIEHQFPUQJMMBKLMRDLEPKEEDNYVVRWDKWNSILTOEGWEOTSTALXSB");
    tmp_tmp_msg_0_1.range = 0.07824659498974329;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::VehicleFormation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.7574587814080314;
    tmp_tmp_msg_0_2.lon = 0.8134990160782992;
    tmp_tmp_msg_0_2.z = 0.3037612352120881;
    tmp_tmp_msg_0_2.z_units = 82U;
    tmp_tmp_msg_0_2.speed = 0.7430358696405264;
    tmp_tmp_msg_0_2.speed_units = 22U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.x = 0.38771214408672183;
    tmp_tmp_tmp_msg_0_2_0.y = 0.16110835292193948;
    tmp_tmp_tmp_msg_0_2_0.z = 0.0020914577311027527;
    tmp_tmp_tmp_msg_0_2_0.t = 0.024442689953330876;
    tmp_tmp_msg_0_2.points.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.start_time = 0.6865975060949612;
    tmp_tmp_msg_0_2.custom.assign("QTMEHIASRNSYPUYMUKIALPKZLASPGXEWPVZDXPNQXPQTXCLEBCODBRRIUAMNFFWLSWBHROOYNESQDGDSZQEFIBTVAWUTIXJVOHGJATSHAXINVVVBWOJOOVBACCTMXKRAKKWIPXKZXJNCNJCYEYFJBOGCYQTDLQWKHCSBUTLUZYJMRLQQFSCNFDGMEWFR");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::AutonomousSection tmp_msg_1;
    tmp_msg_1.lat = 0.44838995130816384;
    tmp_msg_1.lon = 0.7182418133077978;
    tmp_msg_1.speed = 0.8566279562618463;
    tmp_msg_1.speed_units = 22U;
    tmp_msg_1.limits = 27U;
    tmp_msg_1.max_depth = 0.15604482551399435;
    tmp_msg_1.min_alt = 0.6094323000126042;
    tmp_msg_1.time_limit = 0.529940737787631;
    tmp_msg_1.controller.assign("IBENUZIZKPBPHIOJZVVVXXOSUAERPAVEVJMFCHCBKSOSHSFSZARGDYGFMUGDAYLBQRTLEWLHZBZXQSVGPGJYNNTQAKCMDEDJLOAMMQJBOFPOZTAJKKONRNFIGAZYLXVOWLPNHUDPRXOTGUCRLIQTYRLSAPXXCKQCBBHTKLCFETZTGHUQQWGFIEQWSIXGXLUOURN");
    tmp_msg_1.custom.assign("DVWUKSKPJOPGKMYLFPDXEDRWEYXSKLTCZYRMISATHLLGMU");
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
    msg.setTimeStamp(0.3731521665635116);
    msg.setSource(26775U);
    msg.setSourceEntity(204U);
    msg.setDestination(44878U);
    msg.setDestinationEntity(193U);
    msg.maneuver_id.assign("XJZHPKTOMDHBCIZVRDZHENNXFFYEAWLXICLQSLPJHXZVCWFZOWDMJYNLTHGXWVEPRHCTEPFDLGXZJJURUXAIMIXOSQKBBNYPBKAASJOPUIUMRNSPSYIOVNGPYNERCQZCWKICMRZEWKMDMHRYLQW");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.2650426548408673;
    tmp_msg_0.lon = 0.18334736798515616;
    tmp_msg_0.z = 0.30343602980147477;
    tmp_msg_0.z_units = 33U;
    tmp_msg_0.radius = 0.267944750265798;
    tmp_msg_0.duration = 43644U;
    tmp_msg_0.speed = 0.34018889531822805;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.custom.assign("QQECOSBTIXYVOGBRGJQZWJCEPPJGAFUYNYJEXHJRSORQMMNWPOFVFXVXRFHBMHU");
    msg.data.set(tmp_msg_0);
    IMC::SmsStatus tmp_msg_1;
    tmp_msg_1.req_id = 49319U;
    tmp_msg_1.status = 161U;
    tmp_msg_1.info.assign("RDCMJTKDROJXVMZERHOAJXNADPZKZLFHP");
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
    msg.setTimeStamp(0.9567766113123279);
    msg.setSource(41845U);
    msg.setSourceEntity(230U);
    msg.setDestination(14852U);
    msg.setDestinationEntity(201U);
    msg.maneuver_id.assign("YJEZYPFMCPDJFXSNHILJGYQTWOVPFGGVQKXDYWBNHOLLDISQ");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 532325425U;
    tmp_tmp_msg_0_0.start_lat = 0.363677199430115;
    tmp_tmp_msg_0_0.start_lon = 0.7527826686530772;
    tmp_tmp_msg_0_0.start_z = 0.7926938851211961;
    tmp_tmp_msg_0_0.start_z_units = 139U;
    tmp_tmp_msg_0_0.end_lat = 0.6514588329618892;
    tmp_tmp_msg_0_0.end_lon = 0.635172325206973;
    tmp_tmp_msg_0_0.end_z = 0.08023591372191785;
    tmp_tmp_msg_0_0.end_z_units = 169U;
    tmp_tmp_msg_0_0.speed = 0.42090077148520444;
    tmp_tmp_msg_0_0.speed_units = 115U;
    tmp_tmp_msg_0_0.lradius = 0.7659572914236903;
    tmp_tmp_msg_0_0.flags = 109U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 18528U;
    tmp_msg_0.custom.assign("MQGUXVLNYIFDREUFSS");
    msg.data.set(tmp_msg_0);
    IMC::ReportControl tmp_msg_1;
    tmp_msg_1.op = 236U;
    tmp_msg_1.comm_interface = 66U;
    tmp_msg_1.period = 12102U;
    tmp_msg_1.sys_dst.assign("WXKCCVUQPZIFBWWNHSWKQJEAXVJIXXHOUWUKEMNBETDOLYGMBDXRZQZSISKETJDHTSPKDHPLVUCGUVZPSAAGYKRAGEZFIFHBQBDGSKTYGJAUYDGBACHFILMERPESHCINSXCCRUGLOJFINFOKTTZZOCUHQYHWENBQMPLGOLCGDMFMLJJCPOUSNXRUNKWBHDNRBVIWAMJQMZYTRITVMVREFYVXATOYXPRFJQ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GroundVelocity tmp_msg_2;
    tmp_msg_2.validity = 6U;
    tmp_msg_2.x = 0.6084695198543199;
    tmp_msg_2.y = 0.6497769512006966;
    tmp_msg_2.z = 0.8568161301416034;
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
    msg.setTimeStamp(0.23880552802760158);
    msg.setSource(56070U);
    msg.setSourceEntity(120U);
    msg.setDestination(22310U);
    msg.setDestinationEntity(123U);
    msg.maneuver_id.assign("XNDPKFJUSSNNZLSABTELMCUIVFVPOOIEMRMLXBKTBROOBHJFFEKLIKIQIWJMEWVDSLQZJPBXVVDXGIOPSHDALGQULDTUPQDTRBQANQQVCAZBNXJCJWZGZ");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("MRMCUDRXIERMWIGXXKXVZTZGIQFHCERRKWWWCSBZHPOZCYAEDVOSYKZHEDZAIBHQFVNRFEKIXYKSQYOWSNOPAJBSDTOUZPUYQROHYTVGSTWLJC");
    msg.data.set(tmp_msg_0);
    IMC::ScheduledGoto tmp_msg_1;
    tmp_msg_1.arrival_time = 0.805906772442703;
    tmp_msg_1.lat = 0.1637779406990747;
    tmp_msg_1.lon = 0.3567311885547654;
    tmp_msg_1.z = 0.6699352408096905;
    tmp_msg_1.z_units = 14U;
    tmp_msg_1.travel_z = 0.34619104543895074;
    tmp_msg_1.travel_z_units = 70U;
    tmp_msg_1.delayed = 210U;
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
    msg.setTimeStamp(0.35825397975727435);
    msg.setSource(31444U);
    msg.setSourceEntity(111U);
    msg.setDestination(13255U);
    msg.setDestinationEntity(166U);
    msg.source_man.assign("DLLQXQSONKEEGGZBMJJYIYRTSCNNFKXPDCZJUBCRTPEOJHRFNXAGOPKZAREYJWMYESGO");
    msg.dest_man.assign("XTFAIJAJGUXREIEDIJRZHNGTDFWXHGFIGARACMFIPYUEJKOKZYOKQDNONBSYUXBBXTWFVERYWREUESNJAPANOSRQOZDFFBLXPHQNGKWBZMPFBKCLNESVQLMYDBCWVINEAHIMC");
    msg.conditions.assign("WGVFZANEZBVBXZCUXQFBIZGQGWFJHEIECMSETBYUFDPDILMBLAYSTILVFSLNPQTKDPTFHBWXAJAVYNZLENHCTGARLVDGMNZGMOOJSZJROIMJKWTLQHHOYILGDKOSERAIUQVSEYCWPCHHQGQQKKYPPORDAUJSUCSPHDSUNDPKEDRMBRQMVHNYNWACXVUVLTMXUKDRSGGIOWXCXJCWAZO");

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
    msg.setTimeStamp(0.31447956813160427);
    msg.setSource(65442U);
    msg.setSourceEntity(136U);
    msg.setDestination(16738U);
    msg.setDestinationEntity(101U);
    msg.source_man.assign("MKRBGBFZGUHOYQFXUEQSKSVNUHQFHFRHEVMEAISIUAASCKWZKWVHGIHRBBCTSKLMDLRKAJW");
    msg.dest_man.assign("LZSNQKZYMPSGAZELXTPMQWAPUVIBOVQUTSWIEQLQ");
    msg.conditions.assign("IHBOVJUHVSZECLERBDZRDVFFKQHOHYAOUPFFUXQTGQPUTSRYINFLCZDGWWIADYDFQJYSUVOXNQWMSOPUVPDUMMWZCTHDGBAFWBMWOJCENHEGLKELPMARXTARJSOIYCANCITBVYQJHZTGIJKYLWYWII");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("RSDDDYVRJBRGKRZPMALBUHJQICZEVOVQWTIEXWVXEMCOKGPMHVCYUPTTYI");
    tmp_msg_0.value = 107U;
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
    msg.setTimeStamp(0.06936283645731545);
    msg.setSource(22602U);
    msg.setSourceEntity(142U);
    msg.setDestination(48128U);
    msg.setDestinationEntity(239U);
    msg.source_man.assign("PIURSOMPDBCTHNVGPDEFVTFXEBXIYZUKFEXPXMVTAVEHDSPOYZGWUZLGQDQQKTZAWVFMNJCZFGZJRQAQQN");
    msg.dest_man.assign("UAUWZLWJPQSEXWUSNATJTQAGMGMHXBKYZAWCN");
    msg.conditions.assign("XVNLEARBPDYNDUZGZEACBEUBKOYSJRAFYXJWEVPULTQKFWWFXADTBBMGQNVDEOUSANQVHECBGOHIDSKYIWGRCXEIQKLQLMQRHCHSMHFWATKVHLLIYTSGJMEJGUSGTNJOUTZIDJPUOAZCCIZXKWDZNOXPQMJUQEIIBOKHJGH");

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
    msg.setTimeStamp(0.2802899492824843);
    msg.setSource(25523U);
    msg.setSourceEntity(221U);
    msg.setDestination(8303U);
    msg.setDestinationEntity(173U);
    msg.command = 71U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VEQMNHUCZOJTJVKPPHGXWVSKLUIVRUYBYWTIXYNQAXIYKEBXRGCUATSGBMAGMWGCBFRY");
    tmp_msg_0.description.assign("NXVZDPZJQVNNRFCUKIVSCPXWKKOSJHULFAPKTBDDOUBZPARSGOHTHXDOIUQHRYAPARGINWTALJVIBXICCOIXXTGKWULMJLQ");
    tmp_msg_0.vnamespace.assign("GBTQFJWNKZLKWKOVTVIVNRSDQHGCXSXVQPYZRUQPUEBWFSXPFIJGIFTRFVZJDOERGIPUUNAFHAKCIZYGMLBNBCHJBJORYDYKARZWXCNZEBASFHYFJTLXUDHKDYHJMHAFIULJRSWPHUHZEUJOMLFZGLTWBOPDEOSRLVEVDQLTAPQSTQPGXZCGDYLQGAUONIVKTCRKWOKXDEECTPSMAERZCGCXNNCMHI");
    tmp_msg_0.start_man_id.assign("JLEGCGIWDIXVTYZFSBKSQPCKQSRLMWUQAFPKITPIUMGFXASPKBIYDXTJTRFPITHYLQVNRNXAJRWZEYVGPYOPHKHMRAFDLOJCSJGFQRMLMQCUHSAVEDBHCTLSB");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("ADPQIZPXXHYUKBJRGDDGJRQPHNUGKRBYMTAZQSROSYWLEMGITEFDUPW");
    tmp_tmp_msg_0_0.feature_type = 158U;
    tmp_tmp_msg_0_0.rgb_red = 124U;
    tmp_tmp_msg_0_0.rgb_green = 11U;
    tmp_tmp_msg_0_0.rgb_blue = 34U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7498803489166886);
    msg.setSource(15521U);
    msg.setSourceEntity(228U);
    msg.setDestination(53969U);
    msg.setDestinationEntity(199U);
    msg.command = 13U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KTYUAPAPKGJGTXKPFNGGNCWBPGHGEEDJRBBHYPZNLLEAUTHXSYKYSMXQIINWEVQCJKWTMAZCVUOFOZYCVBVRVOJHDUGUMZLTKMSVWAXIOMRCYZGPSHLEMODNIGJPBZKTFMJAEQBFKYDFHJCWITLBEIINZSGFEHVNORSURXOPFARDRVVMXACDPLMHOEZFTZAHFWNXUYWCBTTXRIADXYIQUWNURBFRQJCKEDSQYKZBLQLOHDPWVWUJSXNQIQOM");
    tmp_msg_0.description.assign("KSQMKWYSXBWPOMRUENSIYXVDHEBTPXZ");
    tmp_msg_0.vnamespace.assign("FZOSBKDJNLCUXCQHZAADTGHFKUWAWVOTOVQSWWESGXIEEUDEVXJSBFNYDLQYOIBKTPDDXHPAUUZUYFCSKBCJLMKW");
    tmp_msg_0.start_man_id.assign("PGOCBEVQBZRGXCLUQOLZBPVXHDNMVZKIJWCLVOQSXOIAMAMRKUMJZFKXOZAXHJNKYMTEKITFTAOBPYAZUWPWJYQUKHAUUTXSLGPOPKELQCYEMHXWCYHEESRIW");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WTHAHWCOZAHNWZFEVUDLRAKEYIYUMCQGSXLFZDZQFADPKDMLNVGOXUWMBJGEYISICJAUDIINZFJQBMPJESUNLMVIQAYEXQDJXHNTMJTCGPPBAZBKYAFWPFFETZJCBTYXZQVODXSXXNSQHNTRFPYBEOHKVCRWSLONBRXYQERWAPWOCKRDELLFLVLT");
    IMC::Alignment tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 31610U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.1483436867385669;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2230998857419385;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6643122256783355;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 198U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("ZNAGCTUBKVMOTNSBGBHXBCQTRGAYJOLXSFCRWUVFARKWDIQKCELCRYJCYDQLEVCWMLNAPMFAMSVNTHIGTZHVFIHZPBEXEOPUVUFOBSQYWJGFPKCXUITPSAOKSWUBXCJTUWMBJQSIOPIYFSWODFIHTYZUNXGLCOFHZKWDVMETSQGXVSJZJGQMTGZBNPDVEQA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SetPWM tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 76U;
    tmp_tmp_tmp_msg_0_0_1.period = 3233615174U;
    tmp_tmp_tmp_msg_0_0_1.duty_cycle = 2525374671U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::Collision tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.value = 0.4653563074995887;
    tmp_tmp_tmp_msg_0_0_2.type = 43U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7200627761174485);
    msg.setSource(27171U);
    msg.setSourceEntity(110U);
    msg.setDestination(34655U);
    msg.setDestinationEntity(66U);
    msg.command = 25U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BOQYIFMGEIJEUDOFETGACHLBRSVKCKWGISUAPWZPBZGDXJVPFDRYKYVAIZILQ");
    tmp_msg_0.description.assign("CDQJBQCWMFFGSVWDAALZARXSBHFUCLJSHNKVZNZAZVHVZXDOQUMEZABMVRENTWTYKGBKJTJANQEXQJIYHREBINNUFXOKDUXCPJGOIQREFDFRSSROCDJMPWDCARKNGFSPTOM");
    tmp_msg_0.vnamespace.assign("OTVDDTLUGBMOQSGWUNRDMSSFTPXKVFQPCNXPYYPGMRFVEPWDYNZVCPLCZQQWJYOHKIJHLFARRZGWXEJLFXTBGBVTMKNCSNUKZFHSFQVVWRBGTZQUHIUUIEBNDBINAMSYIXMHABQHAEYZOHJYCDIRZURBYEIZSMYJIOMOCDWJTAFNLHQWOZVEEKCFKAOERBSCDKSSXPMEQZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TMDXZMWSABDKSVQHTXBCZHKSTJQHWOCJQEBVAROAZCHUABYTYXKGJCUXEUOPGWDGNBSNLQPQRZXVXLLMQCMQCETIADFMDPGMPRPBSEHXIFCKRNLVNUVEFRRUKRSGPYPVBWBPIQJFIKWULYFOOAWSUTCLEIZEHLKGHWODHMMZXTOUONWMFYS");
    tmp_tmp_msg_0_0.value.assign("OZHMRXQYFTAZZOZUYSRIXVQYBHSJMKXGPENAGCAUDDOUHKFPWMUVKTXPNYYPFNNZGVWKTHVXQWUAQJKBPBGDRRCLFVAOYJCXGURZFLMWGGJYUWJGUULGIJALDOSJWSFFSMCMNYED");
    tmp_tmp_msg_0_0.type = 111U;
    tmp_tmp_msg_0_0.access = 66U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KTTCLNSQYUILJJSBNKZCVBCMRYGYCRETYNKTJMSAVZOKAHLQVOMZIQXD");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RDCKQXGJJIFPHCNYGQWRSQOUYVCWIODEPVIRYEKFLKGEXYBADHRSOZKQOPXRKCSICTLVOFMLFTZVCJADJSDYEQZUEMSBIDIHTAETMPHKDLHXBAPHVMMYWNLAXWXHNSAQFTQTJNQRXVBNVTLVBAJTNJNGZLRRVFEYU");
    tmp_tmp_msg_0_1.dest_man.assign("BDWOKXNUSFBUDZIEQAPQGAZNNTJYJYDTCRWKJYWSRTLHLCMZIVZAFITXFXPKJDVOGBUKYJNAJHNLVDQEMBSFAVMSNZTTEIOAJSYYSNHQNRXTBWPFEHWRYEQIYUBRUUTOMKMWAXCNUCBF");
    tmp_tmp_msg_0_1.conditions.assign("ECHYMUXOOLJKZKTHQATDHNJCUCVNHUQCWDFOPRCDBMBSSEHQGKWEFUFZQZGLASL");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::OperationalLimits tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.mask = 162U;
    tmp_tmp_msg_0_2.max_depth = 0.04178243749564581;
    tmp_tmp_msg_0_2.min_altitude = 0.9302381078971382;
    tmp_tmp_msg_0_2.max_altitude = 0.1561568401230714;
    tmp_tmp_msg_0_2.min_speed = 0.5873456050948942;
    tmp_tmp_msg_0_2.max_speed = 0.9645684499321432;
    tmp_tmp_msg_0_2.max_vrate = 0.4867275042899284;
    tmp_tmp_msg_0_2.lat = 0.06741999469050464;
    tmp_tmp_msg_0_2.lon = 0.8177627513298462;
    tmp_tmp_msg_0_2.orientation = 0.27276307345852935;
    tmp_tmp_msg_0_2.width = 0.4217219642921002;
    tmp_tmp_msg_0_2.length = 0.014561462289545024;
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
    msg.setTimeStamp(0.3751448356478153);
    msg.setSource(51853U);
    msg.setSourceEntity(86U);
    msg.setDestination(54041U);
    msg.setDestinationEntity(134U);
    msg.state = 30U;
    msg.plan_id.assign("RYMSIMMDLIGNCWVETKUJQYXQJPYZZANORRZAXGPJBSITUZEYMDVTGNNDKCWFFPBALBFAEWRRHUAKEXIHIXOFTHMKYONCTONVSSOOAVHWVYMMQZRTBLFQSCPKJMKIBXBDBFGELKRDXUMAXJWWJLQNSWVWVNOSRGHDDTLGJUVZJIGAGLNYVF");
    msg.comm_level = 150U;

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
    msg.setTimeStamp(0.707622662409218);
    msg.setSource(7792U);
    msg.setSourceEntity(222U);
    msg.setDestination(31707U);
    msg.setDestinationEntity(248U);
    msg.state = 108U;
    msg.plan_id.assign("CBWBEMTUHAWAAKTLDZYXMXMFIMOVTGDUNGIIAROGKKXONIVEIDAQLKRZWWKBANQSHLFNNQTCYISXCPCRWBEKRLHFYCBUXLDHFZQSPZBHDVLHOUANNDVYKESXCWRYJEILFUWSBPFYUWEVNKJGJRAPQMOOFYNLODUJETZVTLQVTSQAQGGFJYPBPF");
    msg.comm_level = 60U;

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
    msg.setTimeStamp(0.8316155718670616);
    msg.setSource(55544U);
    msg.setSourceEntity(63U);
    msg.setDestination(49440U);
    msg.setDestinationEntity(63U);
    msg.state = 239U;
    msg.plan_id.assign("IDHFWNHFPGWEREQULGLZQSHQBJYDYLSLOFEJNINXZKVDMRVBJDJCOCHUWQIAUVHNXLCYVMBTZCPHPLXQQCOKJDQKGSYPETNBIMAKGHPHHFBUQNGWRWEBGBIYNMTEYFAXDVOMAVOZUCRGPVOIZKKCTGJTTUSCKMPXFEZX");
    msg.comm_level = 223U;

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
    msg.setTimeStamp(0.6789493260508989);
    msg.setSource(3176U);
    msg.setSourceEntity(61U);
    msg.setDestination(3270U);
    msg.setDestinationEntity(25U);
    msg.type = 5U;
    msg.op = 0U;
    msg.request_id = 8940U;
    msg.plan_id.assign("WFSBLJMYOOQRPTSWCENYAERBVLJGJYDSUPCWQOTZJXKIKUNZHJXSRZCGELKDURABKWBDTDFGULAUMPBCIIOWOMQAVTUZDEUECTVIRXSOXRZVIYMOPPHWGGRRRPJXNGHTYAHFBFNMFTFIWYQJYQAZJECDCMOMEKKJPWVHQVTLVCNCUBTIHEXWIIBHMYKGYHSFHAHGEUPXASZGKNTVENFLILROLJFNOQXPQXN");
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.29675833336788393;
    tmp_msg_0.base_lon = 0.04399843694588523;
    tmp_msg_0.base_time = 0.8096014602890023;
    const char tmp_tmp_msg_0_0[] = {-104, 13, 125, -26, 101, -75, 31, -104, -85, -75, 88, 20, 101, -54, -83, -35, -60, -40, 55, -85, -18, 59, -72, -116, -34, -78, 47, -73, 121, 54, 109, 34, -72, -99, 44, -26, -19, 119, -95, 86, -59, 86, 61, 50, -17, -11, 123, -63, 83, 112, 88, -43, 89, 73, 39, -97, 61, 103, -28, -71, 106, -32, 49, -20, -43, 28, 4, 113, -53, -73, -101, 7, 91, 93, 30, 30, 52, -108, -109, -126, -73, -40, -19, 90, 47, -27, 68, 97, -54, -79, 44, -75, 7, -76, -43, -12, 102, -22, 35, -81, -72, -16, -46, 99, 94, 106, -36, 23, -109, 95};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UDTKQYVZOXNKJOSBKMVWMLKIVBOWOHDCKLMRLFBBRGXEQDNGPDEKXCRQBMLLFWZCXNGVGYZEZUVPCMFZFTSHALAXN");

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
    msg.setTimeStamp(0.7353190291687771);
    msg.setSource(34473U);
    msg.setSourceEntity(60U);
    msg.setDestination(1186U);
    msg.setDestinationEntity(6U);
    msg.type = 58U;
    msg.op = 68U;
    msg.request_id = 62369U;
    msg.plan_id.assign("WMZMGRJKHRLBULYJSQTPNJGHAOZJBWRDHJYTRESGVATWODYBLESFYPHDCSUXGEKSWNVICPHOOXCAFENFQIBUUNPBFPWQQYBBSGYZJGLVCNQBCCEULINXMGAWZUMPWOZJVHRDREJQLOMIGMXLUSEQXECEQAVOBDYYNDXVNISLXPPFKCITVYIRKTZTGEFVAHFYLFCAAHZDPZMOKDUQU");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 62U;
    tmp_msg_0.value = 0.8519562017827822;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NROOBDPHWECVCUCQVSSOWKBUKXLZRFIUBDQXPWTLBULT");

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
    msg.setTimeStamp(0.618818404564766);
    msg.setSource(43955U);
    msg.setSourceEntity(169U);
    msg.setDestination(4467U);
    msg.setDestinationEntity(79U);
    msg.type = 187U;
    msg.op = 50U;
    msg.request_id = 27207U;
    msg.plan_id.assign("UURRPCQQPKCCAMULLKHAV");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("NTPZUGDJJOABDYDDSXZTCKQIULUMRCYPXQBLBENSJGZWZIREPLAYXCQLHKPXHFIUZPMGJIEAYVLWNKOWLENJUNWXOTBCKFMGWFAGQTJQFLYXNXTOKLCIHJKOWHIQDDAOHXKSSIQYXDOMSYZHCMEMVHVTTETCPSBVQWRKIJUWJSGBUUVXBRVVAOIYPHSZRZDFBMQG");
    tmp_msg_0.visibility.assign("WIQTEWGPVAHKRYIZLHMFKVPMGJJDLIQHVGDBCAMDRMQJZFZNEEBZKFKFIIDMQZBMTZLCPXEHUAYBOXQUTFKAROTYUSNJFRAGCGGCBAHVFYVIUKSNHUOYATRRSGHQHEGNSB");
    tmp_msg_0.scope.assign("LEYFVNPQZFSMBWZYTUVFCSPGHEHOQNKFXURZDMHEYSRXVAGXYGHIWUTQPYAQOZOLBYCKWBDWJVDSRLHYZIMMAEJVLCGIVJBRTPHGNQNRUARSSVKCQMMGNUKQDZEVHJRNONJUAKBISVTWHBNCCUXBETQDIOJIOCDZYJQCKRIAQDLTNDYUPEJMKRSKELAAXFHXGFFFCZOOFVDUCWMYSKJXLWRJMWPLLUHELGZXOPTINXTBOSGPX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TAJUWPGVTAYVHIYEUMAAMBOHIUZIJKAWBQCKTZANSECCCQXZIROWOFCRGWTWZIBURLVEOUVXSULR");

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
    msg.setTimeStamp(0.28074632936060306);
    msg.setSource(38578U);
    msg.setSourceEntity(139U);
    msg.setDestination(26631U);
    msg.setDestinationEntity(68U);
    msg.plan_count = 3061U;
    msg.plan_size = 2452615396U;
    msg.change_time = 0.5994873103708014;
    msg.change_sid = 38655U;
    msg.change_sname.assign("GQNNEGGUVAVTBPJQIYTYDNCXAYAGHMFDWQNVBWNYZOSXFMKHREBTIDNRTMRHBMJWBAZOSESXFVALBRPJETRZNZCJOOSWDTOPCKULLAWACIRUTEEKMKSLYLVJYNYEPWXCYAUJLIRHPKKQFOKDBLHXMQEPSXCGXOPKFZUIDAYHLRTFPHFBISMCXJRVHDZUZCGQRGWDJMGUVQBEHGWZUMLSIIIHMIFFKPVNDXZWOCPZXTJWTFJV");
    const char tmp_msg_0[] = {-91, 76, -107, 10, -81, 27, 38, -101, -96, -117, -71, 91, -35, -61, -51, -38, 35, 22, 67, -73, 95, 2, 43, -103, -108, -75, 43, -46, -122, 32, 55, -25, -125, 116, 20, 40, -68, 87, -103, 86, 68, 17, 0, -50, -89, -52, -31, 112, -31, -19, -53, -80, 48, -87, 113, -41, 95, -118, -29, 106, 113, -10};
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
    msg.setTimeStamp(0.810534517712108);
    msg.setSource(58611U);
    msg.setSourceEntity(83U);
    msg.setDestination(42210U);
    msg.setDestinationEntity(231U);
    msg.plan_count = 17388U;
    msg.plan_size = 3849009398U;
    msg.change_time = 0.06497314791960074;
    msg.change_sid = 4885U;
    msg.change_sname.assign("TFPJQKUWGIOMDSWSOEZEGRRNHTCJKCMVLCPGIWSIOHSRODRKNGCFHEAMVYPFBUWHNOJFMSJNUDMAOQVUNYJNPCZBIXPMTNOXUHQLKLPPHCRGZTKECZVDLKAIOX");
    const char tmp_msg_0[] = {11, 48, 57, -115, -103, 85, -36, 67, -19, -42, -127, -108, -52, 84, 118, -91, 7, 105, -90, -115, 30, -96, 22, 39, 118, 22, 5, 50, -19, 12, -111, -57, -105, 13, -64, -94, 3, -62, 13, -126, -95, 37, -41, -95, 69, -91, -78, -109, -61, -97, -83, -2, -128, -117, 16, 106, 17, 75, -28, -14, 97, -90, -76, 47, -48, -71, -105, 17, -3, 64, -66, 7, -43, -30, -15, 75, 46, 88, 81, -77};
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
    msg.setTimeStamp(0.28429546452243526);
    msg.setSource(53965U);
    msg.setSourceEntity(9U);
    msg.setDestination(13658U);
    msg.setDestinationEntity(43U);
    msg.plan_count = 21078U;
    msg.plan_size = 2846833061U;
    msg.change_time = 0.07597631375087255;
    msg.change_sid = 57132U;
    msg.change_sname.assign("UTIAQMAITTIKTAKWCQXEFPIYPQFZQ");
    const char tmp_msg_0[] = {82, -117, 50, -77, 76, 108, 51, 62, 0, -27, -14, 40, 50, -126, 49, 94, -29, 106, -7, 125, -15, 8, 48, -74, 65, -5, -46, 52, 52, -77, -19, -14, 35, -95, 54, -74, -92, -96, -48, -87, -126, -103, 46, -126, 49, -89};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RUDLKQBJAKPUAQSHEJXNMYZFXRIJHVTMURVYFAPWZCTDGQODXWBFRSIZTCFTGNUQHPVKPLKAYJZDOZLPHMYENOPCAZNJVDJNPLFENLRKHQJBCQGKPJCWYGTJLSEAGR");
    tmp_msg_1.plan_size = 46259U;
    tmp_msg_1.change_time = 0.5215547058603511;
    tmp_msg_1.change_sid = 60229U;
    tmp_msg_1.change_sname.assign("DBOEGJKCDIWXIOTACCVBMIKOPKUQXTGSDYURKUONCVAEHHZJEZTBZQORSELTEBGPIHQTDJNUXLKEFTHULJQHSPRBUFLWDQAYEHBLNQNWQXVXWWJPFPVAMNPHYGCKLSZUOUHSEBWFLYJLBLCTXIGPJQVJW");
    const char tmp_tmp_msg_1_0[] = {-79, 54, -116, -95, -35, -115, 46, -18, 114, -59, 6, 76, 8, -109, -64, -33, 66, -73, 66, -13, 86, 2, -18, -117, -12, 30, 119, -64, -89, 125, -70, -22, -62, -95, -87, -63, 17, -2, 77, 103, -34, 76, 76, 126, -25, -47, 121, -51, -8, -100, 90, 5, -29, 15, 117, 45, 73, -15, 95, 90, -3, 37, -20, 2, 48, -106, 83, 76, 3, 95, 86, 75, -70, 26, 48, 116, 110, -89, -19, -101, 4, -21, -124, 111, 72, 111, 1, -81, -77, 66, 30, 30};
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
    msg.setTimeStamp(0.08938954016497913);
    msg.setSource(7693U);
    msg.setSourceEntity(91U);
    msg.setDestination(5987U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("MXLAVYMQYUHGIFNUMCQLQYWUQIRBVETAZUEWIAENJNYORULLZFANSTRXNUSHKDCBOONPZHEMQVNJQWBAYIACJPUZDQZEGCXKWMFQXLJAMRGYEMHHGUISLRGFFTLKHCVJVABSOOYDCTKSGXUOZRGZCJNXPORIMKDDTNBYAMZJIQPNGVB");
    msg.plan_size = 27115U;
    msg.change_time = 0.6813313185874358;
    msg.change_sid = 54150U;
    msg.change_sname.assign("OWCYAIDXBTFHDZRHPWCPWLNOTOYJGVPSECCHWSEJKZWLXNJIRLXRHCHOGIBTVPSHFYMVMIPRJEUGSKTVBXLPACMTNAQMJMQAZHUMEVGAXEOOQEKDGXYVFNLUSLEVLNAOZWJYBSMNXAMDPDRIJEFAQLDIBUNZUKJYKKCTJWRLQKSYRYOBNPAKKHQZORTHUXZWXVUFQJYUBHFMBFZQWNDZVF");
    const char tmp_msg_0[] = {-82, -93, 111, -32, -31, -56, -81, -95, -96, -28, 16, 123, 0, 119, 71, 29, -78, -28, -14, -109, -112, 72, -66, 80, -105, 22, -42, 1, -50, -93, 126, -88, 7, 56, -115, 45, 93, -50, -101, -118, 32, 18, 52, -35, 15, 4, -17, -52, -116, 94, -90, -66, -26, 46, -28, 75, 89, -120, -92, -87, 83, 52, -17, 124, -5, -75, 104, -101, -128, 15, -117, 72, 52, -60, 44, -40, -33, -97, 51, -40, -81, -55, -74, 19, 82, 11, 106, 4, -3, 104, 119, -79, 118, 14, -87, -104, 49, 34, -61, -16, 115, -13, 14, 6, -75, 46, -65, -24, 93, 118, 13, 66, 36, 109, 78, 18, -126, -64, -69, 75, -111, 30, -33, -1, -93, 95, 92, 13, 20, 31, -39, -30, -106, 111, 81, -49, -96, 1, -107, -86, -54, 122, 93, 0, -95, -17, 110, 120, -83, 43, 29, 83, -38, -32, -107, -9, 33, -62, 23, -100, 112, -24, -117, -64, 51, -28, -106, 86, 60, -119, -30, 89, -43, -89, -118, -82, 64, -124, 79, 105, -37, -4, 34, 32, 124, -119, 40, 58, 11, -59, 19, 106, 70, 84, -93, 17, -13, -69, 80, 69, -5, -57, -7, 115, 26, 44, 109, -81, 7, 66, 85, -101, 77, -70, 58, 21, 32, -67, 107, -123, -59, 20, -94, 11, -52, 116, -96, -68, 86, 94, -118, 76, 113, -73, 18, -1, -114, 82, 110, 65, 54, -93, -51, 106, -91, 98, 50};
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
    msg.setTimeStamp(0.8956158477999925);
    msg.setSource(9593U);
    msg.setSourceEntity(25U);
    msg.setDestination(1711U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("FGPTUIWNLYYACPLWYQBTYHHOLCLVIBKLEVQUNJGUTNNRKKDJWFOVVRL");
    msg.plan_size = 9864U;
    msg.change_time = 0.488243554983001;
    msg.change_sid = 26587U;
    msg.change_sname.assign("IWMRXMELOSTMHCXEBTWUJVJFLKLKANSBOHSIOQDVNLJFWMDEPTRTNKWPFVLUFWZGOWOEJTJCOCZOBQAWUNCQNMSGLQXXSCFPEHBHIYBHZLAABWJSXZFFDYMKRJPVFZCHZJBEUUVEECZ");
    const char tmp_msg_0[] = {-98, -91, -103, -16, -57, -83, 60, -119, 97, 114, -76, 116, 102, 104, 94, 62, -48, 34, 84, 56, -17, -94, 54, 87, -84, -79, -64, 37, -41, -12, -46, 49, 36, -79, 39, -97, -121, 80, -113, 101, -93, 5, -122, 45, 60, 94, -100, 36, -83, -14, 47, 78, 49, -68, 1, 52, 49, 40, -56, 20, -74, -84, 83, 50, 42, -38, 46, 29, -81, -6, 56, -93, 120, 125, -91, -108, -109, -125, 17, 34, -25, 23, 49, -23, -65, -36, 98, -115, 38, 11, 56, -36, 67, -67, 17, 74, -109, -127, -123, -42, -127, 108, -15, -9, -82, -63, -2, -70, 21, -32, -27, -115, -100, 37, -6, -104, 118, -50, 17, -30, -117, 7, -64, -6, 71, -35};
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
    msg.setTimeStamp(0.2250438963639062);
    msg.setSource(4131U);
    msg.setSourceEntity(74U);
    msg.setDestination(18069U);
    msg.setDestinationEntity(222U);
    msg.plan_id.assign("AQHRMLJWZTQIIGBTGIHULOEDNXNGKOCERPAAUUTJUCXLNJHBLWFATVNVKBPGBKQKKNSAZXTHLOVCJLENAIXRHORFWUQJZJMFZHPQCMOQMYRHNMPDYETMOBAFWESIWWBSDCBBWUEQAST");
    msg.plan_size = 52155U;
    msg.change_time = 0.2579055446045132;
    msg.change_sid = 32154U;
    msg.change_sname.assign("WUQZVUSEOXFBRCMDHEOKZSKVSGUJQRJWRZUCEPNKCQXESFWHMBGHAQMNZKXJAOPMXUCABDHSPUWIQIPJCTIOOPHGCZGWNVLURDESVESAYDDLPAVNFLD");
    const char tmp_msg_0[] = {88, 74, 92, -54, -83, 107, -127, -15, 47, -93, -37, -39, -76, 75, -12, -17, 111, 59, -80, -21, -61, 118, -128, -83, 126, 77, 79, -95, 82, -31, -45, 83, 64, -92, -82, 104, -67, 73, -83, 81, -69, -63, 111, -56, 42, 4, 26, 104, 98, -27, 124, 1, -17, 56, 32, 103, -27, -128, 3, -74, 69, 91, 95, 39, -87, 32, 66, 83, 2, 105, 74, -102, -52, -79, 35, -7, -77, 107, -92, -18, -59, 119, -13, -98, 89, 117, -104, 62, -36, -90, -29, 104, 34, 35, 109, -65, -120, -121, 95, -11, -5, 105, 109, -54, 25, 91, -42, -91, 53, -48, -64, -79, 14, 54, -95, -49, -30, 122, -55, 10, -75, 81, -80, -101, -56, 17, 102, 44, -116, 33, 36, 52, 78, -15, -4, 45, 15, -3, -2, 63, 89, 63, -61, -46, -64, 12, 7, -65, 40, 64, 5, 24, -17, 113, -65, -57, 83, 39, 29, 74, -41, 20, 104, -16, 105, 124, 58, -47, -33, 94, 103, 21, 83, 62, 16, 75, -89, 32, -110, 93, -123, 28, 8, -53, 85, -20, 1, -72, -49, -5, 29, -87, -37, 91, 19, 119, 39, 26, 104, -100, 71, -11, 25, 86, -102, -121, -73, -127, 15, 92, 110, 21, 100, 51, -34, -98, 55, -117, 103, 6, 91, -26, -15, 53, -118, 72, -24, 45, 79, 68, 22, -75};
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
    msg.setTimeStamp(0.8290611308242635);
    msg.setSource(62260U);
    msg.setSourceEntity(73U);
    msg.setDestination(46908U);
    msg.setDestinationEntity(190U);
    msg.type = 132U;
    msg.op = 89U;
    msg.request_id = 35130U;
    msg.plan_id.assign("WLSNWHDMGTGCUMCQZFMTFZPFTEULYUAIODPVLFJSMOYOLVVTCQRRDARKQLXKFQWGHMGNETWGDPHIUGRCPMAWKOBPRAVKPBUIZNPZKVJOPDEYKSJYMXUCVCJJZTDTAJTTQHRFICXSVKWXAXQYWXXGNEWJWAHICXOONLICNWKVDIGYLAHFYLEHBIZNNJFQMZGRALNQVYUQYDX");
    msg.flags = 65469U;
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("TLMNWIUWEPQTJNGUGDWFCITWWFYDHKMAEHKYNEAAQVSRQZPFQZOXROHOSYCFVDSJWITRSDBFXUATIJKTVLLRQHEDYCOTBLBCPZPIHLMKVNXSJUKOMOOYCFZXQIBZQHEVAHVALFOUVRCHGPTLKDGCQVKRHEGAYPKRSUSZPGUXHOVJSYWLWDWGPDTVCFJILZRBWZ");
    tmp_msg_0.htime = 0.5577459743910991;
    tmp_msg_0.lat = 0.7923669461699863;
    tmp_msg_0.lon = 0.9025101836047723;
    const char tmp_tmp_msg_0_0[] = {-84, -98, 9, 116, 123, -17, -9, 75, 106, -22, 109, 8, -26, 66, -63, 34, 27, 126, 27, -75, -99, -67, 96, -45, 53, -46, 36, 68, -3, -22, 116, -116, 25, 123, 13, -126, -93, -37, 50, -121, 119, -119, 26, -87, 24, -73, 92, -63, 8, -61, 87, -107, -95, -94, 87, -42, -32, -35, 121, -23, -87, 38, -32, -46, 42, 58, 86, 24, -94, -77, 12, -112, -40, 61, 67, 70, -80, 71, 87, -45, -56, -103, -124, -2, -5, -26, -94, 0, -42, 17, 13, 75, 4};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XHKNAICKJHNCQRBOJOTQAFPECOANVJLUCVGAMX");

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
    msg.setTimeStamp(0.7517903781469677);
    msg.setSource(16174U);
    msg.setSourceEntity(76U);
    msg.setDestination(8805U);
    msg.setDestinationEntity(16U);
    msg.type = 128U;
    msg.op = 61U;
    msg.request_id = 52596U;
    msg.plan_id.assign("KAOYWUKMKIGCARDQRLLFJIJLYKBZQTWSCBZVVUHCSNNAPAVALOIYFTDXTGZRHEXFZYBNUTZVAFRKDVFGNPMPNACIQWFGQQTJODSUTPZYGGROBWWEVJFIOCUYSSMULOTFDGXMSEHPWEREXRTXKGAKGWSHZLCHOCPBSRAJLSWXZQPOLBBVDUOITDEMHPEIJXNLMIEIRUKQIDCBEPDFKJHGJWMPHWYM");
    msg.flags = 10034U;
    IMC::AcousticRelease tmp_msg_0;
    tmp_msg_0.system.assign("XVCPOODCDRLGYTDWMSQABVMDGPFIALIKZTLIQVUJMCWKEEOBIIEOPDPUWPARLJQJUUHWQAKGHAFOLNHYCBTYCNUQMRTIZRDEVMCVINXJFDERHYBMUFFCXLHTYZMDOFVHLGG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PJABZRMHLBJDFYAPTOZSLFYTQDIROTAYXCWTUJZRVSWHCKPRXHYAAQFQNDLLASGXEMMX");

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
    msg.setTimeStamp(0.04220174679845723);
    msg.setSource(11799U);
    msg.setSourceEntity(159U);
    msg.setDestination(3855U);
    msg.setDestinationEntity(122U);
    msg.type = 236U;
    msg.op = 27U;
    msg.request_id = 22025U;
    msg.plan_id.assign("ACOBMZVONQJKCFYLUMYWJQDLPEAODWGNRXJSKIWTQSYFGKENQMJHISDSDSAFJTPAYIPMXJUKBEJGKYRCXMHT");
    msg.flags = 44315U;
    IMC::Abort tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QOZLNCTRVLROXCIHAGVHAYXXAESDUDIWXFULRESOROZZTBZBNUMPDAILHJPPSEJFJFYMTFALICINCTEIFVPUBKQHRSKBPJYQCAENXGPUYDVUFLVNJRZJONPWTNXOKXKLHQEXWYBLECOOQQR");

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
    msg.setTimeStamp(0.3619822895048811);
    msg.setSource(9205U);
    msg.setSourceEntity(178U);
    msg.setDestination(31425U);
    msg.setDestinationEntity(152U);
    msg.state = 35U;
    msg.plan_id.assign("EOFAGRNZTEQDIMTJTKYVLWIOIBLFICLBSUHXKOKZOQFMSOMWFXRLBDGZYUSHQVUNBZLERZZGRTYWINVGNARHT");
    msg.plan_eta = -1199417896;
    msg.plan_progress = 0.8021202792150782;
    msg.man_id.assign("BNMUFICNWNKSOOPTGGWWRLZDIZHFSNQJVOAVLILQHNTZJWJBEGSXSCQUFFCYS");
    msg.man_type = 6172U;
    msg.man_eta = -1064142351;
    msg.last_outcome = 61U;

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
    msg.setTimeStamp(0.48848593790921035);
    msg.setSource(3084U);
    msg.setSourceEntity(7U);
    msg.setDestination(44210U);
    msg.setDestinationEntity(103U);
    msg.state = 70U;
    msg.plan_id.assign("YVGRRLDTKRIF");
    msg.plan_eta = -1055279054;
    msg.plan_progress = 0.6812046074292689;
    msg.man_id.assign("DGKWLKYULBPEPNJQODBVXDDARIIFRAIMNMHVRGCHTJIBVZXXANQSVSKRCEZTWRNOKTQNNZJJMASMNUOVPYOHWHMJYPCBQKJKAJKSZVOVFSTCX");
    msg.man_type = 39950U;
    msg.man_eta = -380480912;
    msg.last_outcome = 112U;

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
    msg.setTimeStamp(0.5793338160710404);
    msg.setSource(31956U);
    msg.setSourceEntity(137U);
    msg.setDestination(7886U);
    msg.setDestinationEntity(6U);
    msg.state = 29U;
    msg.plan_id.assign("ZSLYVMQMJQSVDONLFRWCRWTPYUCHSTHWXHUOSBIZQLLIPDJFOTWGIZRMJTTKZUMPZKVVEPAFYYMSFRWYLYNIAXPZDQQW");
    msg.plan_eta = -13860200;
    msg.plan_progress = 0.23017184577021133;
    msg.man_id.assign("YKFPCEHWPMJRWNCWZQSIWQSCZYWBJMPJYEGRBIYEMYXNUTQTDANHOQJFLJRNHUOMGYKFKHODSEYZZSFOGCDJSUQLJQLOSYMAGLBICUCZXTEVPSYFTXWDNPFQIHJVIXAIDUEAAQUAWVBVNDRGRUPZUSDFTFXGWPHLKAXIDYKIVKPVGTZMDMKDOUWCM");
    msg.man_type = 55777U;
    msg.man_eta = 115922756;
    msg.last_outcome = 229U;

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
    msg.setTimeStamp(0.35922198185698295);
    msg.setSource(1573U);
    msg.setSourceEntity(228U);
    msg.setDestination(19971U);
    msg.setDestinationEntity(62U);
    msg.name.assign("VZHLYQGMOVTJJVGQAOPRRAVJLBOYCUHWSBJXJXHRHCLZKRKPIHHEEULVHNCLSSNSTFQXDDMZFHKUVJOGGWNSDPYAEFQUXMNVEKLUBUPZQESWOQLKLHINXGYRICIKYCBWZYMPRTSYWDOQODFXGKMDMCWTMABRKXFDYT");
    msg.value.assign("TTYMQKZRACNAZRSNTPEGRXJGBBSTPZENAPIQZGXMIXLKOOVUFUZHJJFCMZDIQVXMBHIWKGDKQSPYBMIQOLNKGVMFFFWDFYVXKKLUWLRQZUAHOGXFGGIERDXLDIDCESJDAWUSZYBWVNJSELAHFEJCOMHVUZSCTGAPULINCBOUPZKAHRIEY");
    msg.type = 110U;
    msg.access = 245U;

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
    msg.setTimeStamp(0.5902064858550405);
    msg.setSource(37237U);
    msg.setSourceEntity(31U);
    msg.setDestination(12482U);
    msg.setDestinationEntity(74U);
    msg.name.assign("SOMOEGYNIIPXVORWGRJEUBLCFBYZIDJDIDKJUOVYBOJOQQPNFZNVBTYEXAXRWGURUEADFIYLEUMNJWERWMSMVCRCCOMMMPVJJPFBECLSLVAQLNTOIY");
    msg.value.assign("RFTXSGPIZAYWQCFGPXODLGPBXDRBICMHCWGFEQVNWUYBLWHZXMSZUKDPZEZCGKVUJSNYQRTUSEIXETOLHPSREEUWVEMIYOVWZKQBHCNVZFATNUYMBHHKFXORFMHSXAUXVLRNBOINRJVTZPBEMVGEMDKIJSDPRTVIQTWYDDEBCCKNIGONJQPYKDQAJHLLAUAOOGKIJKMJJRWAPTCXVRJUZJFYPCTSSFAGDTCLBINNWZFOHXGQQALFUBOQA");
    msg.type = 86U;
    msg.access = 39U;

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
    msg.setTimeStamp(0.15373965661735878);
    msg.setSource(40513U);
    msg.setSourceEntity(115U);
    msg.setDestination(38549U);
    msg.setDestinationEntity(68U);
    msg.name.assign("ZBQHAIVLKZHNGYXZYBIXNPDJGKXNKPYQZXCELVISVCCBVFWIEWHARXVMSYYRORZZSDKKEGNTPXDJPDAYCFWNUZKDQAAULXUMQQUWKJJTOODBGPAOCFCHOOCJEQILSCTZFHQVTVP");
    msg.value.assign("ICLYMZOFDAAUEDJK");
    msg.type = 13U;
    msg.access = 8U;

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
    msg.setTimeStamp(0.5440201517111786);
    msg.setSource(29957U);
    msg.setSourceEntity(238U);
    msg.setDestination(5553U);
    msg.setDestinationEntity(150U);
    msg.cmd = 190U;
    msg.op = 42U;
    msg.plan_id.assign("KWPFNXGXENDWTIYHUQOVVRLJWEBKVUTWJROTSBOADEGCXMHYLSATBGFCGWEKFLZHATGGWDVMRWXPRKHRWVCOOHJQ");
    msg.params.assign("TZEDTDFRPOCHXBIGXPKNRGFNSLVLCGHQERVSWCUPEEAGMUZYTKMXBZYOIMOGDXJLUOUIVJKM");

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
    msg.setTimeStamp(0.43322690377320705);
    msg.setSource(54596U);
    msg.setSourceEntity(55U);
    msg.setDestination(42645U);
    msg.setDestinationEntity(64U);
    msg.cmd = 198U;
    msg.op = 115U;
    msg.plan_id.assign("TTGMRILDWSJALSADWIQWNIJLLJHLWFVAKIFUDBYLBFLVENUZMACWEHUUBIMADCDXHNUKIIBMBDXSXHEIVQGQRBPQJPITNAWNBUMOCVCWVKZCJSMHEPZYOGVSAYKRXJOQOOKBEKAHCRKWPFQENSGGRGCZYGZFZOXYRMNRFHFXXHTTZYFMPZCTQTLVEASPBYSEBLPVYPFTFWEYNVDSUMNMIDYJNWVCG");
    msg.params.assign("GAKYIMECFIEKLDZRFJKWYAGZVTSXSWNFGHEVNGSSQVVJHNKQZTEJHATGQDQKPWYMELAMYCKKNODNXDJIDBFAVJCYCXBCFHZWOBWXKJCDXBNULRIPTYUPIPRTVTCXILVSGQMWYUHBFZDG");

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
    msg.setTimeStamp(0.8097136809666143);
    msg.setSource(47224U);
    msg.setSourceEntity(69U);
    msg.setDestination(36849U);
    msg.setDestinationEntity(165U);
    msg.cmd = 23U;
    msg.op = 55U;
    msg.plan_id.assign("YYMNOZPCOUKYEBLUCDEHWOFQCFAIVURQIGLVKAICEPLNLALMLNWDWGTZRVHJAZNNJWVKVANTSFOAZGQPFPOGVCWYFFRLDUKXXOJWKVMCWXMMQPENMWJMEUOZEQCXHIZPBQSGPQSIHJAATDJCPVPHTDDMKITKFQLCIRSIZREYBJAKHBQWEJSUBUNYJGTHRNKS");
    msg.params.assign("MTCXBBVOVHRRYIMCEBHPJDEHLNFDCFPZHKLBMPQKJRJAZQJGLXJKVUNKRLARWOZQERJBOYBQVDXTZSEBNYLWUNGPNRCEUYOASKTDXANYLNSGXJBZJOQUFWEIVICHHUPUTPDIDIFOWCFOBDDIUKIPNFKKWJTAVOMQPAPMIWFMTIVUWPMMXQSERYTSORSGDVSXTBYLHACGKXUTGNCRZAQXWSJYFFLZCHMHXLZQYGYWMQS");

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
    msg.setTimeStamp(0.5625620379896987);
    msg.setSource(38493U);
    msg.setSourceEntity(148U);
    msg.setDestination(57067U);
    msg.setDestinationEntity(14U);
    msg.group_name.assign("LMLNYOCJRPSKTIRXVVZQVOWXISRICJBDHECHGKVUSYMHVOHDDZDNFRAPNEJYLENJBFXMOHGFSXAMUMKQKHEGXJBTGUOUDWNFPDXWCJASODNENFNBEIRYISGCVTZKLHCISVXNDWOKJYZGHQIUCDVOSSTXYFFTZMWBPRMQLNRBYQGUELWQUDEJWZIQWZZSCURHGIFBALWPPYKTPVATGBJRAMBZFFHETPQAQALKYQUXUYRC");
    msg.op = 146U;
    msg.lat = 0.5922354078207679;
    msg.lon = 0.9084390244483259;
    msg.height = 0.9304190109846089;
    msg.x = 0.7469715404146341;
    msg.y = 0.8493839166931176;
    msg.z = 0.7954618926792364;
    msg.phi = 0.9666682145219826;
    msg.theta = 0.15993146482463672;
    msg.psi = 0.43218057193322945;
    msg.vx = 0.7560077949527199;
    msg.vy = 0.6415541837807395;
    msg.vz = 0.6867266354663116;
    msg.p = 0.19137327089746214;
    msg.q = 0.7839825324701498;
    msg.r = 0.3844993118581711;
    msg.svx = 0.9144113284139618;
    msg.svy = 0.021936130048501035;
    msg.svz = 0.336523223450071;

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
    msg.setTimeStamp(0.2729484767281697);
    msg.setSource(5742U);
    msg.setSourceEntity(115U);
    msg.setDestination(60492U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("FSPWSBUQJWJPRXQELXQSHNHAEDMUAAYABHOHQIYENOVDDJCSKIWURBTXXBAKTTPXCLRWYFHJQNIJNFTYNPVFKMQRIMAHUUKLYXZGQNZTWGADRJMFBFANDCLMXKVYHZPHCLGMPZIVTSFIUKWVOPQIUWLGTMNIBEHZZK");
    msg.op = 193U;
    msg.lat = 0.05860208591633731;
    msg.lon = 0.9257235894708802;
    msg.height = 0.20259559033538543;
    msg.x = 0.5120986963147934;
    msg.y = 0.776781686880073;
    msg.z = 0.2871264484710524;
    msg.phi = 0.8726018828449208;
    msg.theta = 0.45424176625762935;
    msg.psi = 0.008094355864445735;
    msg.vx = 0.3203174792506661;
    msg.vy = 0.21789113117291303;
    msg.vz = 0.6075009364789264;
    msg.p = 0.8991507987872513;
    msg.q = 0.10174120395045105;
    msg.r = 0.9478807727319971;
    msg.svx = 0.9177755194094611;
    msg.svy = 0.1576202569254036;
    msg.svz = 0.7898110846943044;

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
    msg.setTimeStamp(0.004243436806969703);
    msg.setSource(11582U);
    msg.setSourceEntity(117U);
    msg.setDestination(36972U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("NDTUTJPOWNHTJBPPEYBBPHQPLZZCQECMIPXACOCETHVMAVGYFGBZRAJHRGXDWOKROYGJSCXMOKLOXCRSCZVROXYGIIMJKXRILNPZHEDELBUDGASNICRTFSIYHVOQKDXDMSOVUVYPWKEDTMDHSKOHYIISKFIFJLCKT");
    msg.op = 103U;
    msg.lat = 0.20203453802792404;
    msg.lon = 0.1352952317349816;
    msg.height = 0.1908603691450632;
    msg.x = 0.9861560071135176;
    msg.y = 0.22002623256064036;
    msg.z = 0.1981557279235755;
    msg.phi = 0.12333986559970311;
    msg.theta = 0.20183521526710335;
    msg.psi = 0.12664975179940852;
    msg.vx = 0.23098976728703657;
    msg.vy = 0.49739222039677866;
    msg.vz = 0.5775709314513918;
    msg.p = 0.24702102810026172;
    msg.q = 0.43117636795461134;
    msg.r = 0.5540044239611438;
    msg.svx = 0.1637220821707226;
    msg.svy = 0.8648546721036068;
    msg.svz = 0.810612198715414;

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
    msg.setTimeStamp(0.06939928140841956);
    msg.setSource(18022U);
    msg.setSourceEntity(241U);
    msg.setDestination(65112U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("LBVZMNRAGGLKHAPFUXFDAOKATLVZESJCGILKDMQTQPOYJROTTKWCBGYTIOCIDRJXBNQIZOJTQTINYNPMHGVFSJWMDHPCBQUGGPTLBCAVAXZXRHLKFFMJERKRLGONZLSYCUXAPAVMSNMVYIMIFDVYVKORIWPADDUHKZBEWQUAZEPQDSFSKUHJIEYUYOCPFVMWUHPLXHTNJWUNYEDLDCGHFWYBEJZZVUQWQZQBOKCXOGSTXIEEWJRMSNRB");
    msg.type = 134U;
    msg.properties = 199U;
    msg.durations.assign("EKOQFZTQFDUBIUNAMETMFTLWWQMWUSHJFCLZVLQVFGAICSQJVYZSHKNNMURNWJQMIJILIMSDRBHLAVUZNHFXVNMRXRPUFATYBOJJKBGSIRTAXEDOZZYIKOBCOKCAVNEXPTIAGKOXYCRZXRJUSGYYORKTQDEEIDXZWHYJWGNYYUKWLDAYBJQPHMVNGESMCNQBU");
    msg.distances.assign("KOIFIEAUZAPKWERPVKMODDAIESHSWSQPNZNGNOZYYLDKTSLYJMDQQAPGCSFYGGVFMHWMBSURCCXIHLBVAWIEVXJPFIUOYYRZQHWPHSEANCPGTHWNMWWHUJNXRHQNCITZCIDXUBUYEJQXLFWRZFEYRBZBDURG");
    msg.actions.assign("NMMABHXSYWCZYMRGTSFVSTWXUNVHQJCTLBDNEPLVMKWUWLPEXGJOZSUYBEQHIBRUJQBNBAKPXODDJGDHCFFPTKHZPGPSMHCKIZNDWIGWCEGXDEFOBYYBIADQSFJERDAVOTZCZRZUAVTVFQRGXYXNIVRWFHMLXOZCOZHSPMSRLIJQRTUFWGERLXMVOPUWLXQIYJKORAHLFFTPKCLVGYAAEANLYJBDSASZNIET");
    msg.fuel.assign("LNUAUBCYUASJUJKFVHZHPKFJSYTRWACXQIEVIKGIPLEAOMQWIBFSAQLQXYLGMDFVEENTKDXVKOHMSNXEKRHOUFRJTGHVUAODOJMQTEXETRRDUGVBVXQNLOAJQHPIUNGWNNNVVWTFSGCSUHBDOPTSZMBDKMZPSZPQATBLJIXYYZIYJUKKBCQWZQIFWBDEHVXFAWGOWOJCMKRDPIEOJLCPTMHSIARYEBCCXGWZBRTYZFNDCLZMX");

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
    msg.setTimeStamp(0.24822602244105396);
    msg.setSource(10180U);
    msg.setSourceEntity(80U);
    msg.setDestination(3975U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("XNZJEDSCBVPKRZYBJHVHRFTMYWYMBKTOYCQUZKWTSQDUYXNOXWBPTRDQIMLGCLNORKSXSUOLAMWESHLAXEEIXOGBLLTBAEDIHBJJCDGFUFOGVGRNWCXZJOROFVFBUQAXZKTFPJYTIFAVMVCIYGIXWWQBTDEPKMSDFVNLIMEWZWDSCVGYJRHJN");
    msg.type = 244U;
    msg.properties = 56U;
    msg.durations.assign("HIDQXOTTUJAVRKCVXXLSNHTFBLFTTTUHJENEYXUSDLVTXLDDCZYQSJFSYVVQDOGYUWFWBMPOIPJEKFSIIBVJOMCAGVFHLZJGIGJLINFNKAASDCWMXZTPWNHRHEVYMUGBEBFYGB");
    msg.distances.assign("DKFNGRWMMNVTWBAPMWWKZWWXDHSRLJEAIPQTALMQNUDCMLTZMUXFRLRRCGDOXXCBBCHNKEXYUIIJBETFPWQPACBWXOFYAHQYLDUNNCETSLSFKSVRVLZNPHFGEUQJCTEUEKYOBYKPMWODGKIGIGIITDJAAZZVBKSDVNRSHQXULRCQQEAGZSUGWSOCIZJLVYEMTBQY");
    msg.actions.assign("JRQEVJYKJKTBCGYVUIBMHFCBHOSBEHEWZUEGVGUPTNETANRKKXAMXLYFXQQMSRDDHODLTDTYOHIJHPIIGAOWWBFUVWQPJNRICJNQWOLOZMIUULYKNCXJHFANGQFWSLHBQXZDHMFPWKCZBNCNMCJEVUARYYZEDPAMV");
    msg.fuel.assign("FKWCDMLXVVLWFCCNHNQEFNGFAJLRPJBSWPLQRQQTVZNHNIMIOYYYTXZSXPNATKQSODYZWUHWHTVGUKNGOETDLODAIDFLEPPBSIBALTVTDQ");

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
    msg.setTimeStamp(0.7762895472977444);
    msg.setSource(62750U);
    msg.setSourceEntity(213U);
    msg.setDestination(7699U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("YWKMXUAFGDOBALOTNJVYIEQNROHORZBHCQSJHSIDEZUVOAPCPVJCGKVBEXEIYKNHQVRAADQZWSJ");
    msg.type = 244U;
    msg.properties = 127U;
    msg.durations.assign("EXGFPXNRGKULHQAPQXPVGWUGXMTXJBYTYLUGOCMCIVSAAZORDSJNQPWKQPQBILENVURFLBSTHVZCOZFZLVUSDYTYHXWBPEVRDEKIWEHQHEJUYEDLOOOBHVJFYBDUHFZGQGPKTCJAHJKNVJDSZMWTBZYCVFLIMRKCNIAINQPGNALRAWBDUKEZSTRXZUIOADOBMYKOMJKRPYVTMMSWCRISHWTRUWSFJFNEGILMKCQAOYGWJXQEP");
    msg.distances.assign("SHCZAHGKQEJVDEWUVFCEJABLKAXVTWCWFRIAZKHRHICUDPDHQIPPDAJFDTTYMRXWEUJZGSMCROIXFOVGOWDEZNGSYSOZQJYGCDTSSLLVQELG");
    msg.actions.assign("ABAAFNICXHCGSFNRGGBFJPXQOIQTJXB");
    msg.fuel.assign("VCMICLGNOZCVWBDINQQKDWTBDWNDHIXUYYLZJHBJDJOJHMBTRDAFOEDGAAPIMULKPYRORJEUYGIUQFTOMNXKSEZRSRCOUKQXTHFMVHPHESBGGJRVQBRUAXL");

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
    msg.setTimeStamp(0.8922520333681168);
    msg.setSource(24770U);
    msg.setSourceEntity(11U);
    msg.setDestination(13233U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.5346882519902831;
    msg.lon = 0.5971815051274497;
    msg.depth = 0.0008746360180430512;
    msg.roll = 0.6769803127147717;
    msg.pitch = 0.9958687010180649;
    msg.yaw = 0.8507996425743836;
    msg.rcp_time = 0.2560178032586419;
    msg.sid.assign("VZBKBIEPULTGA");
    msg.s_type = 35U;

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
    msg.setTimeStamp(0.6049091390117922);
    msg.setSource(35103U);
    msg.setSourceEntity(45U);
    msg.setDestination(24506U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.7736589939611503;
    msg.lon = 0.655970824205128;
    msg.depth = 0.4879415264181245;
    msg.roll = 0.8092610463500205;
    msg.pitch = 0.11405340223672433;
    msg.yaw = 0.9524942073887147;
    msg.rcp_time = 0.18304817513312577;
    msg.sid.assign("HWHKJIJWYIUCZMCDYKGLWVXNQFGUKRCEWEXGHRHVPZGZAKQMFONRGLJSYIHCAEJKAOZJFPSBDNPSEATZEOFDYBHRXGIAALTGSGRUVJNRNYJSAUOFYDTLMOQTZCCRKTNLWXBPEJBEFELBLTNNBBVZDSKTODQXHUBIXNVPVKVIJHHIPMQTGRZAIDOSMAXWUXOUMQL");
    msg.s_type = 41U;

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
    msg.setTimeStamp(0.7238883967679502);
    msg.setSource(6920U);
    msg.setSourceEntity(61U);
    msg.setDestination(20291U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.3212952789871195;
    msg.lon = 0.23001153938296226;
    msg.depth = 0.33429430567785956;
    msg.roll = 0.3353778345155246;
    msg.pitch = 0.6880373513035755;
    msg.yaw = 0.09209237001687598;
    msg.rcp_time = 0.7830438862460668;
    msg.sid.assign("KWZYHJENRCJTAXACQNODKUZMABYUDIEPCUSPFUSGKQWUSXRRBYSAHZRFZMSOCNNRWHKUZWGDOVXMHQGVCBCKETAFTFKTBMIBVJXJKGMWAYWPDBVROQPSVIQLQCBJEWPLVXRDPMIWWALYJDOBZJAZIDKNSFUFCTFGOLMMQXSRMEPJNGVFLAPJAXYRQVY");
    msg.s_type = 185U;

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
    msg.setTimeStamp(0.007042517608884746);
    msg.setSource(1483U);
    msg.setSourceEntity(179U);
    msg.setDestination(47603U);
    msg.setDestinationEntity(39U);
    msg.id.assign("TKTVAVYYXBDNUIMPNHJHOOQFBHBOOXIYXHGJZWLCZFHDOZXJHQNFSNAGLUXZUMLCYWZBGYCTIMECXDMGJVQTTXBWVLNCKVCRAQDIDTJKGAERFRWAURAMITJGZQFIZHOSKPQYWWRJAXLMONSNMUAIZNIMBYWLUPRVHMKRTZRUCUDQSSTAEFELFEPYEENSOEOXHLEVVIJWBSPKPBKZQXKJRVBQCYJC");
    msg.sensor_class.assign("OLVQTWZKVWLZWJABNSZFAYLWEKVLCPRGDUFUSGRCDWUKMIZMFEYYTKJUNROMFWBN");
    msg.lat = 0.7702550617621022;
    msg.lon = 0.2294640278887926;
    msg.alt = 0.20145831169232942;
    msg.heading = 0.813948982654692;
    msg.data.assign("URJWAIBCPSUJAAUTNJKEPAAMLMNPRFVDVSFMNHEVGOWPRIJHGLZO");

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
    msg.setTimeStamp(0.9654189216758245);
    msg.setSource(27632U);
    msg.setSourceEntity(16U);
    msg.setDestination(49166U);
    msg.setDestinationEntity(183U);
    msg.id.assign("ZAEBCPWQMWXEBHPHBZLIMNDWNUFICUQRCXYNBOGAYLPBCWXUQQFVRLKUXGRIQURJAJIMVGGPSLPOHXCZGJRCAMEYBIPZLYAGRZYCDAXVDU");
    msg.sensor_class.assign("GQSFDDCXVPSJAUQNCRBESNKVZXHRTQOKUZJFELOIVSWAUHZQGWJMKHKNBHXBFPHHRZOWQUDSSAYYIAXMYRZGLYCPDVPBMOWMFYEAMTUUVGIKWZNEALQUEOPAAIRFOPRPNISFDCSOMCGWUWHJNCDYECOYQMWGKPBIGXJVIEXB");
    msg.lat = 0.8828052409402447;
    msg.lon = 0.45911787137470617;
    msg.alt = 0.9164567106777125;
    msg.heading = 0.03805203576169125;
    msg.data.assign("XOIMTSHGQKXFDROTELNEVMJVJTCKXEUNXGEISPSQZARSARMWDSPASHACEJBPVBOUPDKOTPOMLDSGHZTIIVDCPSDYICGARGVVK");

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
    msg.setTimeStamp(0.600776886744682);
    msg.setSource(43612U);
    msg.setSourceEntity(145U);
    msg.setDestination(59610U);
    msg.setDestinationEntity(58U);
    msg.id.assign("RESDQOPUWHNACSGLRPTUJULXAVSPDXSDDRIQRLNKJGWTVBDWAGTMCUWXVQHKZBGZXPFYFQSPDSCJRTTGUIFXCZUHXYZVNMOCVJMYEMAFWMGRKQKLYOFAHUDWDWM");
    msg.sensor_class.assign("XFCXTXQBCVOBDNXBLVDZKAQBJPRRGRYKGLDYGZDXODDJFYEEBZSLADTRCLAMISWVJASMWKNOLMJGVNDSIBHZCIRTTUNBQLLYNGIOVJFIPRSUCGPDVYLZPUQUGFGEHOHKMEBTTVIKTYNRE");
    msg.lat = 0.34050110504156095;
    msg.lon = 0.3261118094028256;
    msg.alt = 0.8801691973137451;
    msg.heading = 0.24654466057540314;
    msg.data.assign("LQRAGZDEMLTXYARHOHUJUKVZIHDGACNJQECSCKYVVKBEIVONNKCEJXONAWRLCBDKXXYYERQGKSMOFOTUWSWGLLWWSBBBPXVPSEXGYHMAHJCWRGI");

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
    msg.setTimeStamp(0.7638028570562491);
    msg.setSource(39744U);
    msg.setSourceEntity(62U);
    msg.setDestination(44288U);
    msg.setDestinationEntity(93U);
    msg.id.assign("THQWNJKHDCOEZTSDFQGFUPQGJFYJVQNJSPPVOIUZXOWPJQOSIUUHROJYKBBQAURENPGBUPUITBWTNDZSFKBEEODLFRRAKYGCDSNRHIARFDLCLXYNXBMPTERFCWIYOFSZVGMNWLNNOEDVDMTXBZATZTEKGLRMVJIDHYHC");

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
    msg.setTimeStamp(0.5062744159062372);
    msg.setSource(37274U);
    msg.setSourceEntity(9U);
    msg.setDestination(9305U);
    msg.setDestinationEntity(89U);
    msg.id.assign("FKBXTDZOUHBVKNGTRWOTLRTEZJQMBDYPIEGLTKSWOWVWXOKGOWMIQNJTIGXFQEXPEMVLVLFKGNUSXCPTQBUJRKCBKQIFODISPTINMWRAZYZXUAALPRGDHYHPBSQAMDZAMZFGZTJVRYHZFBCMFNVQWOAJYSEWHIMPJUUYAGQVULRXKIVEDOFNCLVOLCFHFN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RAPQEGDDUZCYPCBMIBBFZXAZRVBHHJRUDFMYEODRPLLFSIKZCMFEKPVWASWUEVRQVWDFBAZXTVLTWRKJUPXQZSANNSCBEQEZIOSWWYKBMOIKQOIAGEUKALFTJGSJNUOTTYGOOXXUCHDVAPCYENAPFTTCQNJNYPZJVLLRXKLIOKMQFNIWBRJILXMTMTGCSHRYWSQWDVVJRUNNGYOHDCHGXBEHNJFOHMIUBMZXXSTKHAGPPH");
    tmp_msg_0.feature_type = 125U;
    tmp_msg_0.rgb_red = 179U;
    tmp_msg_0.rgb_green = 73U;
    tmp_msg_0.rgb_blue = 249U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0004062465382359548;
    tmp_tmp_msg_0_0.lon = 0.7145978377496266;
    tmp_tmp_msg_0_0.alt = 0.8466263113884257;
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
    msg.setTimeStamp(0.3097594686934262);
    msg.setSource(35975U);
    msg.setSourceEntity(16U);
    msg.setDestination(3099U);
    msg.setDestinationEntity(131U);
    msg.id.assign("DSTNTJUFBPMPETULCPSMMBUJOZFPTUQAILRSJHOWECBNLXKAQGCRGBXDSBVVGABFMVXIHVCULFEJZRAXTEZYAYOPCBPXWHWFONGKZYKTCDAFVGMCIFIVSEQAFSHLHCXJSXHPPUOUVNRZVAIFEIZDZXEUNJJDKSJYNWZGMLUDILAJRKTKQEYYWSPDOIBYURCZGQDRO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LGAYJDVUOZXEPVFLSVPBCLLIWJFCIRQAXQGPBDQJHHKRJJTSLSGIODQAXFNAMUWLJNEVEGFHPOANYWUMZBAKQHZTYRXMMPGUGEPQGWTSKYVYRYPJOWCPNBBOJQCEZZNFTVSM");
    tmp_msg_0.feature_type = 110U;
    tmp_msg_0.rgb_red = 95U;
    tmp_msg_0.rgb_green = 123U;
    tmp_msg_0.rgb_blue = 210U;
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
    msg.setTimeStamp(0.5804562606604075);
    msg.setSource(64560U);
    msg.setSourceEntity(195U);
    msg.setDestination(41998U);
    msg.setDestinationEntity(166U);
    msg.id.assign("DJUYVGEMNEMEPWLCHTNBJVGQYJSOCFYXXHHMBKQGRDKRIBUVLZTCLXFKJSVNODKALOGWNMYRIVDLECSVOIQMPHQHVDJZKIMJWWEJBLGANLSSOEERGDXCNDOKPBDMBQLFZWXSYQZZLNAFCTQOGRSVQTHGKAOJXVPFDBWITYSRNHXRMIOAUFPGZSWDNFXZIAQUCYHPWXTUUFTJERSVYBHU");
    msg.feature_type = 250U;
    msg.rgb_red = 160U;
    msg.rgb_green = 147U;
    msg.rgb_blue = 214U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.34929631569832653;
    tmp_msg_0.lon = 0.9502980306604548;
    tmp_msg_0.alt = 0.8783528605597924;
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
    msg.setTimeStamp(0.6643185428955329);
    msg.setSource(53640U);
    msg.setSourceEntity(44U);
    msg.setDestination(36891U);
    msg.setDestinationEntity(52U);
    msg.id.assign("ZSZACTNORSPIZMCYTUIMHQXZGEKUGJYBFBABOKEMSY");
    msg.feature_type = 130U;
    msg.rgb_red = 249U;
    msg.rgb_green = 239U;
    msg.rgb_blue = 188U;

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
    msg.setTimeStamp(0.45723304020328615);
    msg.setSource(22483U);
    msg.setSourceEntity(206U);
    msg.setDestination(52152U);
    msg.setDestinationEntity(124U);
    msg.id.assign("APJLBKCAXGLERANNUXFFDGDSRDKRDMIBKRUVWXEFXOQZOOSRPNLWYPSOYEVEQCLHUYEFSYVSZBALBMYJUJOHQBCJKUMYEHTMVYONWLKFPXMNNGXCYGTUSWWNGVTXICQK");
    msg.feature_type = 59U;
    msg.rgb_red = 5U;
    msg.rgb_green = 1U;
    msg.rgb_blue = 44U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8672870165280213;
    tmp_msg_0.lon = 0.9658783475968405;
    tmp_msg_0.alt = 0.04909765928461929;
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
    msg.setTimeStamp(0.24337033836372446);
    msg.setSource(4141U);
    msg.setSourceEntity(252U);
    msg.setDestination(56166U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.24738966726476885;
    msg.lon = 0.26436514496717467;
    msg.alt = 0.01715098040083962;

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
    msg.setTimeStamp(0.5248093074277788);
    msg.setSource(1258U);
    msg.setSourceEntity(34U);
    msg.setDestination(20968U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.5994393593123416;
    msg.lon = 0.7441967929716211;
    msg.alt = 0.8383470102424355;

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
    msg.setTimeStamp(0.6676877523629031);
    msg.setSource(48335U);
    msg.setSourceEntity(76U);
    msg.setDestination(2410U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.9583323069386321;
    msg.lon = 0.9541066729808622;
    msg.alt = 0.578255290775883;

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
    msg.setTimeStamp(0.8007091745114184);
    msg.setSource(6082U);
    msg.setSourceEntity(152U);
    msg.setDestination(32612U);
    msg.setDestinationEntity(22U);
    msg.type = 186U;
    msg.id.assign("ZRZHYDRIWQYHIVYCTKDPQUYOULKIATPVWEBVEYPYIFGXZBSNOUVDKXCSFORRHHEGHF");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MTPJMKHUBCYZTOFGKHXILEMDNVYHKFAYPGGHGJAGXEIWRRAPWBCKOJQSOJSZQUAVDJIUCJIWAOLYGRUEEOLDFMXUJXXQMHWOWRDQLHGXIDFCYNTDDEVEWKPQZQAMMYIVBBFSLLXDKMJMAYTPZEUEFCHABHATNWVKCZXIILUWRJSHFNNSBFKBRXFCX");
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
    msg.setTimeStamp(0.33210188462195134);
    msg.setSource(10581U);
    msg.setSourceEntity(45U);
    msg.setDestination(18794U);
    msg.setDestinationEntity(230U);
    msg.type = 221U;
    msg.id.assign("FYHOPHFRVBJRMOGPOJJBQTCJVWGHZAJSKVHNINUZEZBJVCZYTBNWTFLRMZETSNDHSEKVOPSTKUULBLBAWGKQKDASHDZELLFQPJENOJNAXCFHZWUOMMOYXRDUIWSLCTSCQOVNIGVFHXYAGSKKPEIGYVYMXPJGGXHRPGKYRTRIMXWPDYETXWVWLQITBIMAPXVMOHWLUQYFRYQSB");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.2360741177368817;
    tmp_msg_0.lon = 0.7183902587647916;
    tmp_msg_0.z = 0.11204016131872052;
    tmp_msg_0.z_units = 146U;
    tmp_msg_0.speed = 0.14649991565298015;
    tmp_msg_0.speed_units = 205U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 8590U;
    tmp_tmp_msg_0_0.off_x = 0.7911862041769046;
    tmp_tmp_msg_0_0.off_y = 0.27946731585084594;
    tmp_tmp_msg_0_0.off_z = 0.19519956251107418;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.28847104704727344;
    tmp_msg_0.custom.assign("RQIGNCTMPFVDYJOQUZMSKGUDFIUEEIHBVRROZLN");
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
    msg.setTimeStamp(0.9598744123001745);
    msg.setSource(49583U);
    msg.setSourceEntity(85U);
    msg.setDestination(22865U);
    msg.setDestinationEntity(40U);
    msg.type = 99U;
    msg.id.assign("QSWXNEPVCYTMORRYOPRCAWYPHQDHEGDZCUJXNMLCQEPFOEDGCSBUXKZBTUEEDEZUASWUUIIUGPRRDNOHRMBYCPJUMBOXERMGIJTGDMLIXQQGFUSZKVAGBLASBCKHSRCBKJMJDZASLSYTKTNNOQJMAVAAYIWWOTFOAFGDE");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 50327U;
    tmp_msg_0.type = 238U;
    tmp_msg_0.utc_year = 53447U;
    tmp_msg_0.utc_month = 107U;
    tmp_msg_0.utc_day = 233U;
    tmp_msg_0.utc_time = 0.07401050454248892;
    tmp_msg_0.lat = 0.989258831110852;
    tmp_msg_0.lon = 0.393423807448401;
    tmp_msg_0.height = 0.0535569893077098;
    tmp_msg_0.satellites = 252U;
    tmp_msg_0.cog = 0.2949150345858661;
    tmp_msg_0.sog = 0.8984135625669183;
    tmp_msg_0.hdop = 0.010200186927129873;
    tmp_msg_0.vdop = 0.06604899336139702;
    tmp_msg_0.hacc = 0.34140635579025824;
    tmp_msg_0.vacc = 0.0758728792369775;
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
    msg.setTimeStamp(0.05316904848457693);
    msg.setSource(64156U);
    msg.setSourceEntity(170U);
    msg.setDestination(56132U);
    msg.setDestinationEntity(74U);
    msg.localname.assign("IJUEKFMXEMCNBWQWIGWTXKJLIEZZGJJNLPOSKOWBVGXWQADPOOOEGTMECTFQTWDAUJCISVYMIFZQOBOABMUSBTZRELBLMJUXFKWLZPXYUTGNVNVKENHBCSLRAFADQJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("AOAVWTECKZIQZKDHFIISMWNPCUQ");
    tmp_msg_0.sys_type = 23U;
    tmp_msg_0.owner = 43011U;
    tmp_msg_0.lat = 0.49170493202685783;
    tmp_msg_0.lon = 0.316668614577588;
    tmp_msg_0.height = 0.11075219996718733;
    tmp_msg_0.services.assign("YXFWJMVUSFBWIVAWBMAMLJNSFOCASIHOMVPBQSTKVFORJJPLKRNVRBFYFHTJWUMYQCAIJCLPGGUHKSHLPHNEUDIMDPYFRHFPMTIVZKZDEHNVXLZBRRAWMZWQKDUKUVXSOQIWDTQGGLCNAGJANUXKVBROVHDYEZWXAXNGCOWTNMGIBGOEUJUIQBXYSCNQYPDZOJSPIELXPRJTEGLZQXDCETLHAPLSMKIUEZQOTBXCSRRDFBFAOYZNYKYCZTHDQ");
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
    msg.setTimeStamp(0.34998031987239775);
    msg.setSource(44973U);
    msg.setSourceEntity(22U);
    msg.setDestination(11825U);
    msg.setDestinationEntity(94U);
    msg.localname.assign("KUQZQBZXQILRDCLWVSFAUEFHVCUYKBEFAPWLTSMRIBTHVJKFIKRSHMSLZEBMAVNFKTEFTYGEDUHWBBOXAWQJQZMTVXNINLMCUZRDGDALWQVTYWPNCRTZXYKUEIRAZKHVPNQPOPSBDNSGZXYDGKOMNKHROXDXOYLSWKNEHCCUROUDPQ");

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
    msg.setTimeStamp(0.08353442816800738);
    msg.setSource(15021U);
    msg.setSourceEntity(248U);
    msg.setDestination(2938U);
    msg.setDestinationEntity(225U);
    msg.localname.assign("OGIIRYFZQXKGFDOJHBVJYHSMDURKVRDUDHFCUKQRFNECOVDUQWFOIU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QBSIZTIIXNSSVIDJNFKMYFBUTFXEFBPKFWTPFKEUOPTGHLAPEODMZQBWZJRSMAOVLVYIMAPPCIYUWEUJXFVGXAQRLQUGMJTJZWDCMCLSCNZIJVAKNYSZZGCOJSLYDYMZWLUCFTZJGREWJVKHIKFQIQAVR");
    tmp_msg_0.sys_type = 90U;
    tmp_msg_0.owner = 31061U;
    tmp_msg_0.lat = 0.7060154537537235;
    tmp_msg_0.lon = 0.8445484058415867;
    tmp_msg_0.height = 0.6690705589665173;
    tmp_msg_0.services.assign("PPJYHRGQGWWNZFXTFNDEQXLEGZTOJDOUKQLKJSZDRAPHFQEZOBLII");
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
    msg.setTimeStamp(0.8284553200377665);
    msg.setSource(27236U);
    msg.setSourceEntity(61U);
    msg.setDestination(23982U);
    msg.setDestinationEntity(246U);
    msg.timeline.assign("FEVUEDLLLJHXWDCUMTYZRCXKZCIUTXHDSNRAXJUFQHLCJRJSLBYYIVFWXOEFLPGTSDZFJRBWZYIMDAZNHHXRPJALGIXRDVLUPVQTOATOAKXINQCMKQNTGXSYESVUNSPQEVUSWOIDJQWWGBYPKKBBCZJSJOVMUOUMAISUKMHMCATPYMGRFEFBYKHKDKREQNNNBABBOIYPFWAJFOQTZBPNTLGMIRTHSXMVZWHWC");
    msg.predicate.assign("YXABALMAVRVXQYYZWSLSWQOF");
    msg.attributes.assign("FFLYLNCPQZBLSIDSYXAZWGNNQPGRINLDMCGBIAZEKMDOWBQRZQFCZBVHFKQMSSHADC");

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
    msg.setTimeStamp(0.3962541105658729);
    msg.setSource(37355U);
    msg.setSourceEntity(208U);
    msg.setDestination(40306U);
    msg.setDestinationEntity(103U);
    msg.timeline.assign("KMLHKZBZGVVHCXJNFVGPAWLPLOWLQPIXXWIDETANVSYYCEHZOWDLEAUBONMSWGSSFSOVC");
    msg.predicate.assign("BYFLIQOFTYGCWGRAMBJNRKDDQSKRAAUYSPTRBKOXECQIPKLDVHUBMCCDLQGGWCZRTMKEGBNPPWCAKGXBSYZVXEQFIHNRLKLSHEOIFCZUXEEJKFHUBJXDIAMAAZLSHMWPGRJXWODAULJVIVUZPWHHTLNMNOFIXYMNPUTMUYKXVZNBNOVWCYIYSATDYZHCAJDSFGPDTFFTSQOWQCBVQRNXUPJEHRBJZVKWOIGYHLZST");
    msg.attributes.assign("KAACLTFPUABSXNJEOSFWHZSBNWMKESLJJVBXRDHCEGBWLVWQWTBXXQNRJLKGOAOCDBTVSTDDCXXWOFUFBUYJGIHITIVJKQ");

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
    msg.setTimeStamp(0.45321598489233017);
    msg.setSource(1042U);
    msg.setSourceEntity(3U);
    msg.setDestination(23471U);
    msg.setDestinationEntity(213U);
    msg.timeline.assign("DOKQFQTLYCSMQVOASFKCGHEKVUSSFQOLAZWWZJNNYTAIGVAIGLQYBQXSPOBPXVUEBLDQUNWXTLJZNVTDSRKKUSMEIGKSPEUMPFOCBJMZLHWCJIKHGQIEWOVUBZMIRAEYDMONYWCXDHCJYFHCZHFZBADILYGFDEOMDNTUKIBVCGAZLGTYPJPWTRAWXEDHXRRHWUGBTJIEPVRBKFAQUMRHXWF");
    msg.predicate.assign("AQQCHQVRKSLLSSITJAIDHYGFWXGATQPJEXYFSOADZWBPINFHBJNWHIBNRTGSUMNFETK");
    msg.attributes.assign("FLNHDYHMXYXQLKRFNMBVDHSCOWKUZBCEAYQYLFTAFLTWBSGCZFZBXZMSOQSJIZNABGEJEGRRVKJUSLXLLGMPQCJYRTTXFKHUMIUPDEOT");

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
    msg.setTimeStamp(0.5051618001566506);
    msg.setSource(30577U);
    msg.setSourceEntity(230U);
    msg.setDestination(42681U);
    msg.setDestinationEntity(98U);
    msg.command = 244U;
    msg.goal_id.assign("SLGKVRGYIURDWZHTFOPCIJIZVEOQARPZSQIZVLGLCXJNEHSSSMSOGRWLAMEKWRUSHHBLQVTC");
    msg.goal_xml.assign("TBOIKMUDQYQCLYXYTHPBRONZDVUMZTFJPHOHVFRNEIYGOFBDJLIIIXMTZJKBTPLSFPUTTMONCVJXMLEUGWLPXYDMRGEOCVQSCTTSHMWVSOPFFLNNFZKWQXARBPNFBW");

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
    msg.setTimeStamp(0.5796296419315727);
    msg.setSource(33630U);
    msg.setSourceEntity(45U);
    msg.setDestination(18651U);
    msg.setDestinationEntity(126U);
    msg.command = 26U;
    msg.goal_id.assign("TTRNACKWZSUUZJLXLFQOUIXPBJCTDNFQARBRKXDNGQXHNHOFIOYGPWTXHIMVPVBGWNYWYPALDNVZTXQEHJVQOZSZIVSLCYYSMBRUSTGJHQYMIDFMAAYFKPVNEDLEIIVCIMUZCFWMPHAEJKDVROPDQEFZJXWJRKWAPCIZRDMWRQTLSUTQCYWXMFYBOGG");
    msg.goal_xml.assign("KOZFOCGMVXKMJOYSHGCYEZQBOSWNUDECIQPYHMWZTFQJBXWIAPZCXTUBDOMZRELXLIKJIQFWXOUDKKCFJQTGAFHSLYTHFVCKFNAZTHJIOWGGSEVNYZJUROCEJCHBPRPAPLUWALLUMMASRBVXWRWMPVFSCBNHSGCGYBUJWPKRIUEBPQFADKTROJGYVNDNVQMSLDIRGKEBIDSJNRLZ");

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
    msg.setTimeStamp(0.24573667157954382);
    msg.setSource(48078U);
    msg.setSourceEntity(225U);
    msg.setDestination(39740U);
    msg.setDestinationEntity(27U);
    msg.command = 103U;
    msg.goal_id.assign("NNXBFHLTWWWPHQUBKCMQCOORKUZBWFVPPBBRREPNLGINNDHDMCRKIQBTQEXRTKSDQENVIGUSMJSAEOCGPHHSRZTEFKDFGIOAYRMWAEMBSIHVDTMRVLTATOYPGEVFKQZOADPNXAHVRIAQJKFCAISJEBJOZLYWVCMMJBHZSYUXLZLPQXKXNCPOHYICTJYUCFFKYIUWUVOZLDLEDRIEQUXHJJNYGZ");
    msg.goal_xml.assign("OWCFUZZFRELGBDAQZZHHYALYSGRWEWMYABVQMUWMDFMHIEAKATTQSINUDVYBLEWMSKHCBNIWKTXBJI");

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
    msg.setTimeStamp(0.7997305079889424);
    msg.setSource(20579U);
    msg.setSourceEntity(190U);
    msg.setDestination(47969U);
    msg.setDestinationEntity(241U);
    msg.op = 227U;
    msg.goal_id.assign("EQMPCQSGLZAQPXEBODIRHKIDRNZVMPQWTZBFSVJAFZUOLUJPBYJHKCKVOTAKMNSGDOLLYEBHFYGTQMXWIFJFWEBLYUGJNXPEMGSVKCOKUNDSPBHPQMVUSYGTA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CQEXXRCGZUPEQPZDKCNBWBVYGMDKSBORNIUFESQALIPVWYAVFQDQKMNHNJOMZQTCPXCYOICKTAGKQXGUFLLZQGLUJRTNXUIXJVUNSCVXXLFNYUYRBIJMTBLPEMASMWHC");
    tmp_msg_0.predicate.assign("UOKFCFBJILWAQYCDRZUCOSFXGMTVZUEUKAIONBLJWGTIVNJPRALMZWHMHXQOQERNRPTHMUFTDZVLIKQRGEPONKSYLHFOYJAEQZCOSCYZATJSNCKJZSAJJSLGUQMKIUWDSETXVPNGWFVYCH");
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
    msg.setTimeStamp(0.6866518315647457);
    msg.setSource(27535U);
    msg.setSourceEntity(66U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(60U);
    msg.op = 209U;
    msg.goal_id.assign("DKUIHQMLHPSTVTYDBQRCDGUITNZWDYQNUFTFEYYFAMTAMNTIULCYQEWDBXCNETVJQFEXORZF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GTLKKMDVRFILYKQQLPXDYNNEZMRMOYCFJOWVLHINXIXVQJAVDEEXZELHAWIWKBXWOYMRT");
    tmp_msg_0.predicate.assign("ALOAJCRXWBBOOBAWVAAYXQESZRHGHMJJEJQJUSMSNBIZEITBTLCQIGPYULKTZYXANANHPVCSPDSNANMULTEDFGX");
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
    msg.setTimeStamp(0.09243784148666323);
    msg.setSource(29784U);
    msg.setSourceEntity(204U);
    msg.setDestination(46992U);
    msg.setDestinationEntity(23U);
    msg.op = 160U;
    msg.goal_id.assign("ZAXIJEDVOJVNBMHPXJFZMJJZVVBFHDBBNGMP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TPCELIDARMWIJTALQGMUKRORBPYGQYDADVMTQIJPUGBHESPUBTKVLVKSPDHNFLZTNXOZKHWKMGEIKBIXFSLTDCPRXAKGMUJEPGXJKYXCZTBUEEUFPVAZQDBKTUNSVHCJAZOGBVNHWVESROG");
    tmp_msg_0.predicate.assign("NPCKQYVOEGXPNSXVHLMATYOBHIWVBLFUJEFWHXDRPFRZTPZFNYSYDRLLZGWUJOCJFSBZFHIHOIDUHKGRYGBV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("INMNPRYYIBAWWJBDJUILBUEJJSVEKTXHFIPYNQQTLBSQQBTJXGDBLXIEVFZWMCLKVQGJECELUCAIPFDTCMFDDZKFXGEOBHRGLNAYIACFZOLYOWLXGKQFZJHVJXJYBOTY");
    tmp_tmp_msg_0_0.attr_type = 22U;
    tmp_tmp_msg_0_0.min.assign("DEKIYGGCHMVQNBZBOOFTOFZSLEJDXPUGPWZQHEMVOMXUHPKGME");
    tmp_tmp_msg_0_0.max.assign("TRDRCVALENHIJVZQNLEJEEPGNURBEPBZVKZUWTGPSCAVYIBQQHMHMMFONHVIR");
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
    msg.setTimeStamp(0.16108039131843266);
    msg.setSource(50744U);
    msg.setSourceEntity(98U);
    msg.setDestination(17736U);
    msg.setDestinationEntity(22U);
    msg.name.assign("GEVZCJXQHENJOLQJXPDNFQGVDWAWTRMILWKBAGZSBOMHYWRXKLGYWUIZXGULADPFMVAWDVBUVXTBXXZNUSVSRLUJJSLTKUXZORKJLHZOYCNRVBKTHBIVLPDAF");
    msg.attr_type = 154U;
    msg.min.assign("NJKZHQCXNSGKDOOQXFGTQXSRXFZOMWTKZCQLZZDSJNEJRQNHPGMKWAHDBDKMJDBIXKVRAAQFUSIVLCWGFYJBTAALOHCHVXWXUXPRYJRKIWYCRBSRTAWVTQNVJSDFOOBE");
    msg.max.assign("HYPKSBNOHMRQQNUBZMHTYGLPFVFOAFDRWSQOVWNSTVONLWPIIPAFSOJKEVEYBJRLLFMDAKVPYNCAXEUHWEZDXOZXNCVJDSLCIULZGXGKXIRCJURCBKIHLYRZVZCZADMDIOMCBECHIAGAYBRFEZQWJTNQORKTQWISQPHTGQFBVDTUBKYFRWBMJMXUVSMHKJGKZFYRTEFONNDQAHGSMDNSTZLLPCTYBEQUPXYAG");

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
    msg.setTimeStamp(0.9279374875457035);
    msg.setSource(16945U);
    msg.setSourceEntity(81U);
    msg.setDestination(22170U);
    msg.setDestinationEntity(170U);
    msg.name.assign("OIPDWNVXVJTUWYDHZYHDQNUVISTCUARWOASDCMSOKGQRQETKJEQXVXGJQNEBPQKZGXIZBMKCASOHJDYFJLUCAOWMFJHBNGIRHOFCGRSBLNTBZXSUWPIAPRUFLAYCBTDQOFKKEPKEFKYIZSAZSYWAXMNWFXBLTWLAZOGJYHQZDXSVGQGEVURBIEECFIZNXFRMLYTKPAUQLRVDJRUFTVLJ");
    msg.attr_type = 180U;
    msg.min.assign("FPPBZJKXPYGQQUMGYOZQYNJHWZBJVWFVOMXSURDDSLRPLNCOSBCWVTBCVRQKDXVUMQTLEQGMVAFUZZSOTPNSQRSOIKJGXKJEANGTUECNFNYLLMNFCIPYTCKTDAHOAJMGQEPHIDXZBZUUWVQWBMBEDDEZTRBDAEMOJCDGWNLYHJZUGISIDXIVMYIPTYURXXHLOCHFWPOJHIVQVJEHZFBKAEAWGCYTIEWHP");
    msg.max.assign("WUNTVEBTXLZLNXWOTIRZIEXYRUNKCWJAPWPFFTMFKTLRCPJPMDVSCAWBIVIQRUXDMOZKHHTJXLIDWSBMQKSDLCDAAIRIPEXWYDZOHUOCZQBNXHMASYHQZKDQSIVYPJSJKFYRMBEMAZUGFKENOLAOHTPIEWVNCEJGHUSBDCVYAR");

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
    msg.setTimeStamp(0.37939196274595055);
    msg.setSource(32745U);
    msg.setSourceEntity(217U);
    msg.setDestination(2641U);
    msg.setDestinationEntity(182U);
    msg.name.assign("WUEQBSLLZVRQMFRIZTJYSAWWGGEDSKFNMHSJROQTVLHIMCPOYRUGYCTATPQRWVZYERLJKTOEJRUVYA");
    msg.attr_type = 22U;
    msg.min.assign("IRGNJXUIQMFALMCTLBHQRKQYZYSCGLDFXNYXRHFCVAWOFLDEUVGMTUDJPTFSPCFAOKKXTAKJ");
    msg.max.assign("UYIYWWXRSZTQLAMRPDWSOHWKAGESFONETHJPSMMQQGGJWPHHNUZUCZJVMBDXKBMJQUSJKBHRGDUXZCZJCYAOUDNKADTVBEFPQCNBYQPSNZXLNDTVONFRMZYLAACZLMTVIIIPKFHQKOYSYUOLHFEXFRKPQGADWNWBLPTPIVRSGGTEHVOHCSEEOOXLXEULUIFWDKQCCHJMXTXFDEVGMRIQZFWEITYSTGPYBONFNJMBAVJLGABKBXVARVZL");

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
    msg.setTimeStamp(0.19015356612114653);
    msg.setSource(63156U);
    msg.setSourceEntity(238U);
    msg.setDestination(48676U);
    msg.setDestinationEntity(31U);
    msg.timeline.assign("FHFVPWHLCHIRJEPTZNJXRSAAZIQPKHWDZFCNBDMBLVCIIQWFODUJUULTHNOOGPCLYYMUBCXFOPDKHVPYRQQMKSARZUJNQI");
    msg.predicate.assign("APLSTKNSLYUNXCZAHIFMIHEBPZKOLURQT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VIUWZLOPSUYLQGQLYAVTYULWEUXPRCILLZPTBWAXHKPORCDWIYUVZNFSQKNVTPGOUKAVVFKKHBAQFODSFAEDEVXIEJQTNEZXDDMYGUGRTAJMETDUABWRFYJMMEABRGKRMDKAGJNGFCLZVRVJSQOYQEPYCVDMXEXMDILHXOGCQRJSTXFYHNZJWCMCONWKNOGPDUZWRFUSPXSFZJM");
    tmp_msg_0.attr_type = 183U;
    tmp_msg_0.min.assign("BSFYITJFUSDCQYMCJWICBADDUZMZPGLUUVKILYKAPNRJHITOMOJDPKJVDGZIZQLVSU");
    tmp_msg_0.max.assign("WQELNAKIHMFJCQGKHXQTFUZBCYDWTWIKHXATVASQPKAYSBPNZDVSZENGGKLOQFNMYIYBSTSFWG");
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
    msg.setTimeStamp(0.6501426804228606);
    msg.setSource(36424U);
    msg.setSourceEntity(85U);
    msg.setDestination(7102U);
    msg.setDestinationEntity(169U);
    msg.timeline.assign("QCDVYAAZRGWKQMWTFDCAJRGCWJAEEBUMYBFXJONMEJEOHXNLISFRSQJIJDENEKSIYJAUNSJCLWYIHMYFV");
    msg.predicate.assign("GERTBZNLIZKRYQ");

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
    msg.setTimeStamp(0.7350048344640174);
    msg.setSource(49667U);
    msg.setSourceEntity(63U);
    msg.setDestination(57162U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("MUKTXOPQRPHZ");
    msg.predicate.assign("IHFMGCFMQZYWVISABJHJTRLEFRHIUQDGYGFTVQLIYKUWYEDYREPGXXHZGOVWYVAWATPQTUTPBPQSTIKQKNSXTFNOWVASDNLUQCFLNIFNJMOTAALDRPKGKGYORRSPLFOFEBEHBCUUNAKIN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TVFZYEGFGYAEXQPVVGBPMTIFHBDDROJSHOKBCKLCLJJKAXBDIJWOUHUQUQZGNPSZCRKPMQMWGYPLYLTJRELAYIXOPAEJBXQNNMOSKAQLQGNKPIJZCRWCXYTXNKOYJWYNBTPAHOZHMHKRBBITFDTUWFZSVASXQDVJAVZTIHUHSHVXMGWUDMKOEBPUGPIISTCQEZSWLC");
    tmp_msg_0.attr_type = 186U;
    tmp_msg_0.min.assign("KYCUYZGMBJFSWAI");
    tmp_msg_0.max.assign("HVUOEPEFHODKISKIZIDZWKZCHKQTTTNEZUORPZQFMCNOLWDRQQZERDOANJKUBMBSKXPJWNDBRTHCKEINLNBQBFPQQGMSXLFTRYJHJFHDAB");
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
    msg.setTimeStamp(0.6638818772361195);
    msg.setSource(27453U);
    msg.setSourceEntity(134U);
    msg.setDestination(20688U);
    msg.setDestinationEntity(225U);
    msg.reactor.assign("KJPZWHCSDMDYCHSLZJPSLFLUPCHOGIPZAXEOAIQTLUZSTJPJXMLGHYCIYAUIGVHRFFKHQOMFXAKUWANDSTJGFYCFDYZMVNLBXCNBWREBLATQHLFWKQMBJEYONFGSMFIJELWDXNSLGWDGARTOAQEZVZMVXBRQJBXVATQRCTPSAEBDIOSKVXGBPKNWEYJQTFSVUPKQETHKWDNVDJNNQPZCZBYZCRV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VFSGOCDKMYLQWHHXVOTHKRZQCMALUVNQCDHUHEUFWPRRTOHNDANDSMOLRJUEEAISPXVGYPCSWSPYZLTSLRJKBXQWVEPHDOJMABNYWHANOOOJTXKNKZVHIMCMNRKQOTTGZBJZGERLGFEKSJBWGETWBXDAYBDRZZTYWFYERIXZIBEUMJWKJMDTUACCQDDCIMRASJVZAGPFLVQIPNGIWXYUXQGESCFFXLKLPNTMUOKCQBZJPVI");
    tmp_msg_0.predicate.assign("QIKIYCVWQGCFNQRCTOJENSCVGYCTPADRKKZDZMAXBPKRUHXSYOSLNUSCL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XGUHHYGIZHOMJXDEDBPGMNRYOVSCQUSSRKOCHDPASFRUIGQNAUKKAUSFSCPZAKFQFWZYIVPGQXENYBXDPLXWDMJOYXNBEPTWOATYBIAVDTUY");
    tmp_tmp_msg_0_0.attr_type = 113U;
    tmp_tmp_msg_0_0.min.assign("LEUZOPZEFIYKQJACASDLJCRWNGMLDJUMBRUQDCIINUOEKXIGGWCHBXSRZN");
    tmp_tmp_msg_0_0.max.assign("RLROXTJHIZFHNAQUVVKEOXYKGPWFMDLXOGIWJVXGENHARNWONDZRUAOCXQLVMQQAUXARNDCSZQBPFNJUJVIJEMPDBOYJTZLCZUXEYYSIGBRUGMUJKGNNTSAXZQXIMOQBKQGLPYALYRSSVGPBPHOWBBPGQFTDEUTWBVTMUTDFYHWQEITECZATHHVIKFKTPNDRJSREFFYW");
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
    msg.setTimeStamp(0.6551086021383696);
    msg.setSource(45720U);
    msg.setSourceEntity(49U);
    msg.setDestination(32551U);
    msg.setDestinationEntity(28U);
    msg.reactor.assign("OQPAPRYWOVIVOCGSBGYHIZYEFMOLFVXZURLTRJGHJHGFQQKYUOKSABUWIFIUMSCPPYJFCVMTADAEHWDAOBXSNTBFQIYMGNUJKRIWXRGNEJVVSBZXCSYFKWDRMCIERKRGHDUGZJDZKNMASZPOCB");

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
    msg.setTimeStamp(0.7378993612652077);
    msg.setSource(27304U);
    msg.setSourceEntity(154U);
    msg.setDestination(65056U);
    msg.setDestinationEntity(25U);
    msg.reactor.assign("SOBOIDTDXWOZCXGEIKKBUTIJMUGCAHDFHDMJVQCHRSNTIZUBWPFFSNXAKQXBTCRWLOAPQYVKSRRSVMLZQWVDFORQJXVAWJUJCDEOSZNKVHLEBFFJNSEXXAMDKPEGFYUYPDCUWMNGJYTVQPUACZHQQSXUTCGJATNGCNILELYGWGVLQUILXAWYMQIIBNBWHFAPAXRTJRNOPVRO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SHXSVKZTSBWYJOGOFUOEJXDPEQJWRGDLVJNMIPXLOKVPDNDHJOFMPAONNCMRIQKRKYMAFGYBQREFUHSIHHHQZIJLMHWEBUCPYQZMGLSSXSZNEPVAJRTVBZCTDIZVZLPWMCUUWABUKWBNNQG");
    tmp_msg_0.predicate.assign("BECBYQWDCNHPOYLGRFYKTIOUVBPPYUONNLHACDHARUZEQINSECAQLITKQZOSEYRDRUXHDZWOVHBVSDRPCHOQUFKZGQQWUYVEILLYVIGWJOBFETCTWATJKXNEKFYBGMYAZMJZDQTGXIZJMRLWEAPNOLBURSGWZFCPSPNFM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NFWBOWMHBFSMYGVOEPGYKVJLWAESLPTBMMIVSZSDFOGLMQWAZRUDDBCWHKAWBIPIUYQJEEUMTLRQXOANHRFLBMEQTPLNSSFMFQZCRXFDJLVNVYSGTGDERHCOWYYCBQPNZDYAKLQXEFXNRTTCHGXUICODCD");
    tmp_tmp_msg_0_0.attr_type = 178U;
    tmp_tmp_msg_0_0.min.assign("HBQZHZCXOBTHDNACIJFQBBGMOVDTYDWPQECLZJACWTADWMMJQIRKNWWHNWAJKGKNIIMXYPZZMUEVVGFOUODCVRJSUNGKFEUZTUYBEAKXAFEMOXSROLVDKFRNBXLEJCQMRISVECVGGXDPQMBCAIOLFCRSBGROTZLNXPRVYPYSSTMAH");
    tmp_tmp_msg_0_0.max.assign("EPUSBYYCZNJUMGDTFHGIBGFRBXKNPRUZBCTFTQMDAICPQAAWXVIUBHBSDNAVTRFYZWPGYIEHAMEOBBSXCCDEWYEKXHEXGTISOJTHFMBKKKKXUJDLFORTIATUKJAKTNMAWJDZUSQMRQUCOVZXPEEFPXBUXWCMPJVMOLGFJWQVRYCHXRILJOLQVWQROOLNIWGTNPHLSINZYVRDCLOOYELHVHYHZV");
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
    msg.setTimeStamp(0.8745342889648159);
    msg.setSource(32287U);
    msg.setSourceEntity(152U);
    msg.setDestination(58464U);
    msg.setDestinationEntity(20U);
    msg.topic.assign("PUTEFSIQINSRZXNVSARIVDFJPQRTIALGANVLTKNHLZQSBEYUBTSHXYFKHVPVPMDKWNPGRWYZYHTENCSVJZE");
    msg.data.assign("BVJBLMNLDWVPVGHFBNKINTYTDHJPEUSQKZUCATINFVPBIVXRGSQYEBCMRPXACONMFQKABWIWYAMDEFPWLEUGZOEMZMTIMGUWAEMQYGAYDJQYTTFUAJYEKLBSIQHKLXPOBIELZZQPMHOJFYVDURLRNOSRPOCHMDKWHVZNUHJEXGFPSCWTILSHVGLQSXAHXNBXPHYRWARXZSKAGXJLDNFFRGUUSDTW");

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
    msg.setTimeStamp(0.41589134801934935);
    msg.setSource(17538U);
    msg.setSourceEntity(226U);
    msg.setDestination(65174U);
    msg.setDestinationEntity(244U);
    msg.topic.assign("FYZJXFUVODZPMTENOEKEQCZUNBRDTRKLA");
    msg.data.assign("BHJGNXWZMMXAFYGGWONLRZPFGWDZPHSTZQYSSIJUNPDQITMKRLOVNZIKGTDCRRZRGVTKBUURWMBKBQCQQCYKQJNJQNHEXWMPHNKDEIBLEIFSSPGOOBKBWLUKTDXHOAJULOWYBHFEMTAKTFSCVDAVLBEXDRFLVPIRIMNDVATWSQCUETZPLLYPEQPFQLCAWHWVOUAJOMEEYGVCXGZPYIMXZRXZYVOIMAAJEVXOHDJUNDB");

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
    msg.setTimeStamp(0.2874524023536904);
    msg.setSource(135U);
    msg.setSourceEntity(17U);
    msg.setDestination(33340U);
    msg.setDestinationEntity(139U);
    msg.topic.assign("GAFDXUYQCBXLESLQCDGOKZBTIEZUOAGEALZSKAHUFPUXPMDGXOHRG");
    msg.data.assign("YIZAUUMWKMWMFSGZBMRLJDGLPDQINCTVTUEUNOKDPAPQMXGVPYOEJIALSLHZQZKHREXSWVDHCTMDWMXGFQABKURJOARHDZKTWLGJBJYAVQISBOESONHNOOSIKXKQOCAPQWCSBWGGDJZNFMNITBHKXEIYCRHFNUITYUPNEWUXYETJKHCAIOXORTETEADFBBSJFDRGURLWZYRJSIPAFCQBXGLHH");

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
    msg.setTimeStamp(0.32802003711869);
    msg.setSource(36412U);
    msg.setSourceEntity(195U);
    msg.setDestination(28358U);
    msg.setDestinationEntity(111U);
    msg.frameid = 86U;
    const char tmp_msg_0[] = {65, 123, -79, -10, 101, -75, -66, -1, -25, -43, -101, 95, 121, 43, -17, -8, 38, 39, 64, 99, 57, -122, -104, 71, -81, -30, -117, -35, -78, -37, -96, -21, -33, -105, -93, 66, -49, 70, 15, -43, -120, 68, -2, -47, 118, -38, -102, 46, -125, 40, 97, 122, 31, 6, -58, -125, -30, 63, 47, -51, -40, -90, -69, -68, 66, -74, 15, 55, -122, -107, 36, -79, 54, -49, 106, -60, -79, 38, 39, 103, 10, -11, 1, -26, -127, -66, 109};
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
    msg.setTimeStamp(0.4253378659077405);
    msg.setSource(4095U);
    msg.setSourceEntity(130U);
    msg.setDestination(31082U);
    msg.setDestinationEntity(243U);
    msg.frameid = 87U;
    const char tmp_msg_0[] = {-62, 71, 93, 34, -121, 80, -18, -33, -115, -73, -95, 13};
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
    msg.setTimeStamp(0.24278959619404228);
    msg.setSource(5202U);
    msg.setSourceEntity(40U);
    msg.setDestination(65247U);
    msg.setDestinationEntity(228U);
    msg.frameid = 79U;
    const char tmp_msg_0[] = {123, -113, -4, -19, 13, 92, -27, 0, 32, -61, -104, 72, 53, -92, 105, -50, 90, 86, -127, -56, -1, 120, 26, -116, -114, 121, -62, 115, 21, 90, -63, 53, 106, -122, 77, 51, -17, 47, -126, -67, -63, -4, -51, 15, 16, 4, 59, -128, -73, -3, -101, -68, 15, 66, 96, -44, -15, 100, 79, 90, 118, 59, 81, 30, 8, -88, -57, 71, 96, 106, 60, -54, -76, 8, -21, -128, 91, 88, 74, -35, 52, 10, -128, 10, 2, -49, -11};
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
    msg.setTimeStamp(0.9226654139262861);
    msg.setSource(58886U);
    msg.setSourceEntity(114U);
    msg.setDestination(13571U);
    msg.setDestinationEntity(88U);
    msg.fps = 47U;
    msg.quality = 218U;
    msg.reps = 174U;
    msg.tsize = 51U;

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
    msg.setTimeStamp(0.17172169027134598);
    msg.setSource(14971U);
    msg.setSourceEntity(101U);
    msg.setDestination(50054U);
    msg.setDestinationEntity(231U);
    msg.fps = 77U;
    msg.quality = 97U;
    msg.reps = 41U;
    msg.tsize = 21U;

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
    msg.setTimeStamp(0.5265972035291401);
    msg.setSource(39529U);
    msg.setSourceEntity(251U);
    msg.setDestination(13860U);
    msg.setDestinationEntity(37U);
    msg.fps = 232U;
    msg.quality = 8U;
    msg.reps = 157U;
    msg.tsize = 168U;

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
    msg.setTimeStamp(0.2283751688744653);
    msg.setSource(58185U);
    msg.setSourceEntity(33U);
    msg.setDestination(14578U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.5441582678151923;
    msg.lon = 0.08919916448218401;
    msg.depth = 119U;
    msg.speed = 0.48685380816105295;
    msg.psi = 0.8379522483940698;

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
    msg.setTimeStamp(0.8735589843728511);
    msg.setSource(40586U);
    msg.setSourceEntity(11U);
    msg.setDestination(60511U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.6274320888676407;
    msg.lon = 0.35879681536813735;
    msg.depth = 193U;
    msg.speed = 0.4475725577720686;
    msg.psi = 0.32680332123083666;

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
    msg.setTimeStamp(0.564484683522119);
    msg.setSource(63883U);
    msg.setSourceEntity(237U);
    msg.setDestination(25889U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.41191652211451657;
    msg.lon = 0.6579186163918465;
    msg.depth = 187U;
    msg.speed = 0.7327640015872238;
    msg.psi = 0.2827294541517561;

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
    msg.setTimeStamp(0.046489821551202626);
    msg.setSource(58773U);
    msg.setSourceEntity(182U);
    msg.setDestination(19055U);
    msg.setDestinationEntity(184U);
    msg.label.assign("PFYKLPCPIIQFTAVOTZNDBNAJNNOVKYWGXPBYTHJCZEAJDJUYPXYVVRRSNGIJXG");
    msg.lat = 0.15037792553497098;
    msg.lon = 0.41338205728466815;
    msg.z = 0.35279305015133966;
    msg.z_units = 105U;
    msg.cog = 0.7945244820928058;
    msg.sog = 0.7485337500477015;

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
    msg.setTimeStamp(0.8665570449847666);
    msg.setSource(15054U);
    msg.setSourceEntity(81U);
    msg.setDestination(41706U);
    msg.setDestinationEntity(53U);
    msg.label.assign("QWYDXCSNNGOXNLJBLQBDIPFMSQHNEGBRGALTZWRCKSAMJHEOFAUZEWZRXI");
    msg.lat = 0.6965844892668156;
    msg.lon = 0.318108440819056;
    msg.z = 0.2128300641794375;
    msg.z_units = 61U;
    msg.cog = 0.8843573214106664;
    msg.sog = 0.8975145332290165;

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
    msg.setTimeStamp(0.4926431444921764);
    msg.setSource(35659U);
    msg.setSourceEntity(127U);
    msg.setDestination(55121U);
    msg.setDestinationEntity(149U);
    msg.label.assign("AYGAVQMTQJOVHVSLGLPNYNKCUPCMYNTVXBDLRYDMJIEGTSGKMYFYYIQCNNJZUHKM");
    msg.lat = 0.7063396903363124;
    msg.lon = 0.4444101398320893;
    msg.z = 0.7802442568092591;
    msg.z_units = 236U;
    msg.cog = 0.8496974521280345;
    msg.sog = 0.3809448955055377;

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
    msg.setTimeStamp(0.8337809221720056);
    msg.setSource(42908U);
    msg.setSourceEntity(41U);
    msg.setDestination(55032U);
    msg.setDestinationEntity(197U);
    msg.name.assign("ZPEWMYFMOQBPDZIHAHWTDORBFLHJSBIVJBHFIOKDLUSREXZFUIDFTCHPTYIVSTZKHAABHJALKXGXEGTNGNQAKCMFOPRWPNNUTDNBNZUBVCWGEZXMCDMNSBVAZBRWKSMDYYUYLGK");
    msg.value.assign("EPJASKWSBYFZEWYHOECPSDQXADYNXQOROGEISLCJYAQUNLWRBGECNASODOEWGOYVTSXBPKUDQVHJXMLAKWHHXCUSOHQPSNJNNRKTZQMVJGEDIXLLTIZJCVXXCIJGRGRIJSVAUDDPBMDGPVDKPQHXYIFBNJIEZKQATALUMVTGNCWLALRLMBHJUMMVTNCVRKBTORTFNYDFBZAHIFFGSEBBFTGXUOWEZVPZWOFKICFULZZ");

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
    msg.setTimeStamp(0.4148346229810287);
    msg.setSource(44564U);
    msg.setSourceEntity(173U);
    msg.setDestination(31059U);
    msg.setDestinationEntity(101U);
    msg.name.assign("RJCNVTFOOFQYHXMPIMFSUHRNQLFSUICIGQZAZAJYZLYLXCXOVJBVIZAHXUTIHBMWNEGTJBHCQRZEFJPTMEYTMYJHZVVFYGCOQMMOXCOLLXBAKWPUWKWICSZPTGUVFIADKKKGKAWTITPTHDLNZYDEFGWXOKELXGKNIZDWBLQUYDIWGSKLVKMSVNAESRQBDZPQJDDRABHCJRBVBJUXQCHUJPRCD");
    msg.value.assign("ZCMHMQOQCUINUFXQMLTWNBKLNFVHMQ");

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
    msg.setTimeStamp(0.2447510739145078);
    msg.setSource(52734U);
    msg.setSourceEntity(149U);
    msg.setDestination(61522U);
    msg.setDestinationEntity(211U);
    msg.name.assign("DLWMDTIIHMZJCAVZWRZUBUH");
    msg.value.assign("SBBJCKRRYVTEVRZEXZYZJBJXKTVOUROXQ");

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
    msg.setTimeStamp(0.6086558268460667);
    msg.setSource(2029U);
    msg.setSourceEntity(135U);
    msg.setDestination(17057U);
    msg.setDestinationEntity(182U);
    msg.name.assign("ECBZEAGQXBGKRLXHHKSKHVBIMTVSMWUUEYAZNANSRMITCSLTMNIUIXRZQHAQCRAKHMCFLJDDQJWFFBGSXEPDYBCWSOOOATPCOYKVFQVACZEDIJSIJVSGEJXUMWXFGMZLXRQWELUCKAYGKWRITVXDNYJFTPPXEBTOYFUFNYIDOUIVZAN");

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
    msg.setTimeStamp(0.89423175247002);
    msg.setSource(41417U);
    msg.setSourceEntity(188U);
    msg.setDestination(60726U);
    msg.setDestinationEntity(35U);
    msg.name.assign("HBYFYRGGYTWYNVUJISQGJBULEMLSNRKCRJXXNMVBONWSV");

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
    msg.setTimeStamp(0.7706038511202109);
    msg.setSource(61451U);
    msg.setSourceEntity(229U);
    msg.setDestination(13480U);
    msg.setDestinationEntity(108U);
    msg.name.assign("TLXJSXEKQQUBGPLTVSJQRBUCAQYISOKYTDPFUWTQLKM");

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
    msg.setTimeStamp(0.5594369086679875);
    msg.setSource(10531U);
    msg.setSourceEntity(230U);
    msg.setDestination(42915U);
    msg.setDestinationEntity(51U);
    msg.name.assign("BYHZFTBPIQCMYZMXDOIEGUZLGPNLJTCDAYKJMSUEKHAISFXWIYBVJDQKSYYEDLKIDFQRBSUKYMKBMXNLOYZTAWMNRASPLJNFQJSNHTJVIVKDXFCIVEGVUPQ");
    msg.visibility.assign("FMHPTALEUXZSCESDYWWUCRQFRCENAGAKLKGJSWWNCXXRAVSEWZREJLLSVROJFQDALMVAGOCMORDQXTZXDWOURTDJXKGXMIYYCMCULFVINUVGFMKIFHGVSFFPIJQUQJPOHKQITAHGTBDBXVZPRSKYLKTUYVIZEGHDPMEBZLOSTGYFHBZPWANSRVBNINNLMOQJYAFOZQADJYMNUXY");
    msg.scope.assign("SIQHFWCAMXWWCOKLAFKRGSRXQLVUFUAMIHAUMWECBIHKERPTIPWUVYJZMYAFHJHYSVNSVLMJTBCYSAGHWJZELZNMVTXE");

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
    msg.setTimeStamp(0.8087459011890735);
    msg.setSource(39529U);
    msg.setSourceEntity(21U);
    msg.setDestination(35518U);
    msg.setDestinationEntity(29U);
    msg.name.assign("RPXKJXVRSOPHSFOTJAFMXHDVEAREYVKNLDQHXSBPTNKQYYYIUMKWZCMAWBCTEOKYETOARHADUTDSNBKK");
    msg.visibility.assign("HXXHGOSYRBYMJVSJSEWRVUCJOPCROCTPTSDXZIN");
    msg.scope.assign("LLAPJCKGRTMFDTGNLSBLDSXVZKQIKVSRGEWWGQAHJOENZHJJCXEVZHFRDABOXFMRMUWHILUBQESNSCYYUZJDESWIFJJDXKKIMBGNWOIVMPFXS");

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
    msg.setTimeStamp(0.6562883630342038);
    msg.setSource(50134U);
    msg.setSourceEntity(49U);
    msg.setDestination(37727U);
    msg.setDestinationEntity(128U);
    msg.name.assign("ZTMEZDGPEHVWLEGYFZZZPSVMIYOLTABM");
    msg.visibility.assign("QHHYCIPURZOQZVKWDXPDQDNECPEFHNKJCVIYUXDRDGEUUCLCBTFYILXNAAEDZOTKGWNTLBMTWMWPBUYXHHZRIZSVXKACEFRAHMOVQKPSMHDBVKURFCFNGYGGJOTDFKQZAZZXPO");
    msg.scope.assign("IAIZGNXONKQOQOYRAMUTYCMCEAICCZLAOVWPWHXPSVUAJPPVZXRXKWQAPNKFDMTHYTDHCHCSAEPKZZUEEZRPNWJSYJDFNJBGLSQRHKUDZMPOUDMQVGIFBNROWOHFBLIHKLXIDNUW");

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
    msg.setTimeStamp(0.45046510634233694);
    msg.setSource(17655U);
    msg.setSourceEntity(249U);
    msg.setDestination(38115U);
    msg.setDestinationEntity(53U);
    msg.name.assign("GNIETWTIQFKBMYMIYHYOHWHBAVNNTDVTRYYCRSJPKUAMDLRXLSFKDDRNKORAXPJJWICXSVLPGGQUKXYOJMHBCFFHIGHCWVEUHNNSQDYSUPMHLCZUFOJAZXNEDNTOWGMIPXBMPISOMIQEBTQOQDGHLEZSBCPBPWCGFZKRPFATO");

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
    msg.setTimeStamp(0.1519546834208313);
    msg.setSource(21216U);
    msg.setSourceEntity(231U);
    msg.setDestination(15852U);
    msg.setDestinationEntity(129U);
    msg.name.assign("ZAEIIPMDCTYASILOBJXEXTRTDPHXNGCRWCUHAFKEVNCMWZAKHJYMLOXLPROMVMKKVIVMQVZJCFVFGLDGEKNLLVNKIXBC");

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
    msg.setTimeStamp(0.06077378073343764);
    msg.setSource(5535U);
    msg.setSourceEntity(163U);
    msg.setDestination(50464U);
    msg.setDestinationEntity(214U);
    msg.name.assign("RPTIGATRNGETHOPWEZKCRSJUHTAAWQJQZCNJFUWEKBDYISZQYNOPLKZZKMMXKICHPMBVJSOENDFGQMJXUFHVZN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WQKUZKXFUHZCJMNSMOWZYWJGUHHBQTCIRLPJICSUTTKBPHFDOEJKTXWIXPQLEKNDCTHESRPDRHGVZYVFVACAIDXXZWL");
    tmp_msg_0.value.assign("NDKBQNDICHNGUHCYXGWHPQVHNRAQWEAOVJDRJEWFKSVEBAKUOUAKZAGDEXBFRWFGASMGJLSERRCKNSOPLLZPFYMLTNPDOCMHKEPJOPYIFZAAMKNFBQIHUSDCMCWRHCGXYZVROUKPYBGDNFIYTILZFELSMYWAZVRZQUGPIUOCBSBWJNDHTPQREXVMVOTZHOTXUBIJJXIBIBTDLQPVMJZVYKQYTMCGATN");
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
    msg.setTimeStamp(0.5647426372325149);
    msg.setSource(12366U);
    msg.setSourceEntity(104U);
    msg.setDestination(6170U);
    msg.setDestinationEntity(202U);
    msg.name.assign("DFBCVMIIKAAECGRTKCDILMYXPYNVWAANLLRMZJUIOVDJSCAISLPTAZQSGFZSQNVGUOSOGYNBRJHURUYNSUDWKHEOMPEXHESYBMOLDPLEWHWJFZWWCSROBJRMCSCCYKZLBWXDIBQTVZGOVPTJFTMUJEXKRYJHDKMIPHEFXFQKGTNHTXHBIKNPVFQQKQECOXNBARGFJRYGQYFZCLPQWXYKGNSLOWDDOBXZDJVMMRE");

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
    msg.setTimeStamp(0.2148504038740936);
    msg.setSource(56748U);
    msg.setSourceEntity(210U);
    msg.setDestination(28354U);
    msg.setDestinationEntity(224U);
    msg.name.assign("SFDOLZKNSQMBSXCAOHFXFPIZKUHPJBGJAKTXUKSRZRQIRFYETATQZKGWIQDGYFTCVQKYPWLTBCUDCXEFQMLCOEZGCBQIDEDONSOLNUOGUPDOYLICFLNTRZBLBICJYADHNWSTNNGMPXONQJSXPYWLSIDWJPWVUEMPRAUMGWMIQXIJRUWLWTQERNHMBUEJVHFUDVYHOSOEXXBEVGDAJFVIVHYTNGRTPKKEVYZMYJGH");

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
    msg.setTimeStamp(0.259655312499095);
    msg.setSource(43675U);
    msg.setSourceEntity(30U);
    msg.setDestination(48143U);
    msg.setDestinationEntity(50U);
    msg.name.assign("BNKWPOMZZWDJTOIIIYQMNBVYFYVPXEYBSOBTXLRMDNNWOMLAITHQPGAFPVIHUTGEYZHRFWRCCRKUBOFPRSORKPJIJNCXNGMXDJLQNWIFNDMDQTHGEPYDRAFBKSRYTWXKMGXSYKQHLEZETYCQSDYVFTAJGRQHXJVQHJKUGSTAEOESZUWVSXLDGKMKVVM");

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
    msg.setTimeStamp(0.603639702732741);
    msg.setSource(24466U);
    msg.setSourceEntity(19U);
    msg.setDestination(24752U);
    msg.setDestinationEntity(236U);
    msg.timeout = 1731990118U;

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
    msg.setTimeStamp(0.4591292524794812);
    msg.setSource(33042U);
    msg.setSourceEntity(24U);
    msg.setDestination(65208U);
    msg.setDestinationEntity(178U);
    msg.timeout = 832191657U;

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
    msg.setTimeStamp(0.8882681449191429);
    msg.setSource(14729U);
    msg.setSourceEntity(158U);
    msg.setDestination(59290U);
    msg.setDestinationEntity(205U);
    msg.timeout = 387473144U;

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
    msg.setTimeStamp(0.6469971973337528);
    msg.setSource(14721U);
    msg.setSourceEntity(93U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(96U);
    msg.sessid = 1907837721U;

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
    msg.setTimeStamp(0.4814984679100752);
    msg.setSource(61624U);
    msg.setSourceEntity(183U);
    msg.setDestination(40522U);
    msg.setDestinationEntity(220U);
    msg.sessid = 505761197U;

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
    msg.setTimeStamp(0.3380244589593565);
    msg.setSource(59335U);
    msg.setSourceEntity(22U);
    msg.setDestination(11353U);
    msg.setDestinationEntity(154U);
    msg.sessid = 3324591377U;

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
    msg.setTimeStamp(0.0659105192885292);
    msg.setSource(61793U);
    msg.setSourceEntity(35U);
    msg.setDestination(15592U);
    msg.setDestinationEntity(230U);
    msg.sessid = 3684427861U;
    msg.messages.assign("CIERKNDVOTDMWTRYLXGASUQOKTAHYIGOCQIXECNGXBMEXKMPOAIOXRODBQVHMGMWNEQJUQWUUQQZKJPRVBTCPYWSILHMHVNMJFVEXRLTXQDSJROSOBOATBSPPGKGUUNFLQSNHUVLYVHFJHPGAGWGEICYBRLKVLLNKZWPIYKNDDCRJHLMAJHFPPSNYROGCMDILBYZFYJTNVHZBWWUZUYASEMCIEKDJZATZKSXBXCDBDZZXEIRTEAFCJFWFWVZ");

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
    msg.setTimeStamp(0.6293968100760022);
    msg.setSource(4570U);
    msg.setSourceEntity(49U);
    msg.setDestination(16886U);
    msg.setDestinationEntity(154U);
    msg.sessid = 2491234868U;
    msg.messages.assign("UBXEBDTYPVWRPKOVBPVXFLROMVRKTRQAOEFWNISZPVIDCQTAKWOTLGFARRWOBDDQSJTVFII");

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
    msg.setTimeStamp(0.30815886347337573);
    msg.setSource(5805U);
    msg.setSourceEntity(57U);
    msg.setDestination(34174U);
    msg.setDestinationEntity(133U);
    msg.sessid = 1716922306U;
    msg.messages.assign("SKAZKAXKBHYBZZOCXBYGJOHPLMWQDGHJOWTPGTTCEBSLXRMDMBBFPSUADKNKGLHJQXDSHPGAFCPHHHPYWGGSVWIKAJRMNCNHTMTZRBUCZSQSIYTJLPIIXGZCTYPSEYCKDZQJTEXDUKYEWNFJXLKVQMZREORQBGONYFVEQZENYSUMIGMDAZVEWBOFXFUVJWAUIJ");

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
    msg.setTimeStamp(0.6263678863164999);
    msg.setSource(738U);
    msg.setSourceEntity(29U);
    msg.setDestination(62991U);
    msg.setDestinationEntity(83U);
    msg.sessid = 128853974U;

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
    msg.setTimeStamp(0.811646115790292);
    msg.setSource(11522U);
    msg.setSourceEntity(252U);
    msg.setDestination(10620U);
    msg.setDestinationEntity(210U);
    msg.sessid = 885502092U;

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
    msg.setTimeStamp(0.6186819253532152);
    msg.setSource(12635U);
    msg.setSourceEntity(183U);
    msg.setDestination(14787U);
    msg.setDestinationEntity(11U);
    msg.sessid = 3309320109U;

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
    msg.setTimeStamp(0.3685105136649951);
    msg.setSource(28459U);
    msg.setSourceEntity(186U);
    msg.setDestination(40841U);
    msg.setDestinationEntity(20U);
    msg.sessid = 1851978394U;
    msg.status = 218U;

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
    msg.setTimeStamp(0.4110506662917719);
    msg.setSource(17632U);
    msg.setSourceEntity(253U);
    msg.setDestination(49559U);
    msg.setDestinationEntity(73U);
    msg.sessid = 3393650328U;
    msg.status = 194U;

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
    msg.setTimeStamp(0.30422678189200203);
    msg.setSource(39464U);
    msg.setSourceEntity(220U);
    msg.setDestination(14750U);
    msg.setDestinationEntity(21U);
    msg.sessid = 2140836180U;
    msg.status = 190U;

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
    msg.setTimeStamp(0.47041236144264975);
    msg.setSource(31341U);
    msg.setSourceEntity(148U);
    msg.setDestination(52587U);
    msg.setDestinationEntity(172U);
    msg.name.assign("TQZFLCBJJRWKAZIXZOMDPGMQEYAEOABUQZWXWEVXIYDOIYFNSQDTLXPMTYJFUSHUBBHTYZCJCTFSLBOKPTMGZKPORCPQUDRNSRKKPLGBTV");

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
    msg.setTimeStamp(0.703483493007688);
    msg.setSource(11679U);
    msg.setSourceEntity(230U);
    msg.setDestination(25627U);
    msg.setDestinationEntity(48U);
    msg.name.assign("UPUBPSTCUITOHYJIHHNJLDUPNXGFRBMLWRAOPWYSJYFRWDJNTPGMJUMKYZWKSPZBHYZSGXIBSZHGSXCODMEOLGTBUABIQRFMGRTNHVIOARVKTZCVJPQLVQRVACFBIBTJUWDLFCKCOJPUNDNKP");

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
    msg.setTimeStamp(0.13736439693349634);
    msg.setSource(6869U);
    msg.setSourceEntity(77U);
    msg.setDestination(55770U);
    msg.setDestinationEntity(42U);
    msg.name.assign("ZVPASTQZMMYBLVXDAFKOFNTIFSHQIVGATPUMGOYAREGHNEMBQVWZMVKEITWMHKICLISJJHLSWONGDXZMGXFNUMEOAQWQTARUBYRLEXCALXFQTTKPAJRBFICGWUOWVXMSCDCBIGDUPEPSKOZQEW");

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
    msg.setTimeStamp(0.03152185893503501);
    msg.setSource(28678U);
    msg.setSourceEntity(132U);
    msg.setDestination(16147U);
    msg.setDestinationEntity(86U);
    msg.name.assign("LYNYWNHAWWUBJYJJLCXEQVKYRHJKNEMDCWHYJTBLMLYUCJXTUGPFROZKUPEEUINPHVIZAVSNDLLIEQSWPIWQHEMKKBMWQKTBZQTOZBXAGPIZBVJCLFRBOQPSGFNBXSARRUDOHCHVMGWHFMDVGUFERNTTZBRZEDXSNOHVXPHG");

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
    msg.setTimeStamp(0.896966176956079);
    msg.setSource(7072U);
    msg.setSourceEntity(0U);
    msg.setDestination(20508U);
    msg.setDestinationEntity(63U);
    msg.name.assign("DASGYQKQJITFLKASGVYSOFMOLFNOHKPQEMJQCZRYCYXOLNRZRHPETXUFJJXVCVOIIRXUNUZCKRKHKXDNIVKLNFHBMWDBMGBYCWPJILSIYVRWMDGASAJUTQVTRATMCENQQCEYG");

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
    msg.setTimeStamp(0.7225110536053523);
    msg.setSource(1689U);
    msg.setSourceEntity(3U);
    msg.setDestination(24113U);
    msg.setDestinationEntity(213U);
    msg.name.assign("LDXQCXEARMUTLVFDMUPLNYSFSTUCROKCEPJZOWNOORFEHZBICRQWOUGCOVIIPQKBZOHVRSULIDQWBNIBVKIJMQYYLQUISLWJPPZDYIGALUFJIFNNCTJZJBSGPFRHXWKCMVYCTLSVMCUEZXXPGBAUGMWHOPWTNHYYKOKAZLYHHRGHJNRSEAVFVGTQXGCATBMK");

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
    msg.setTimeStamp(0.06743973743591791);
    msg.setSource(54735U);
    msg.setSourceEntity(56U);
    msg.setDestination(8356U);
    msg.setDestinationEntity(59U);
    msg.type = 157U;
    msg.error.assign("MSXTCBYGPJKNTBFRXFVMAKROSJPCZIFHUIUEPUDMHOLVTRQQMMIHCCLAQYXZBOTTCGWOXXYAIZVKUOBVCQXMTWGOWLOESLCFSJLJSVKJFLNNFIWYQEYNDSUUUBEPQCYDJRNAHHKVJDWBNZSVGHLNWPMUQAPQGVEWMNHBKWGDTUXEBAGNVRJITIJYZDXLTVWRYDGDPIKPRBMNERPYEZIODRFUKBHESXJZPFEHAGAIZSAAMO");

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
    msg.setTimeStamp(0.08365602991888077);
    msg.setSource(8791U);
    msg.setSourceEntity(90U);
    msg.setDestination(55024U);
    msg.setDestinationEntity(80U);
    msg.type = 250U;
    msg.error.assign("YAXMTBRTMYOHSICVUCYLBETHFLKWDNAUYZIQVARUZCYDNDLJQCDKJRIZPHJYSEUUWUFODKMHPRXAFOQKEIXKOQBNEKCNWTWFIKATHGLNAVLHPJBVVQDFOILZGPWUOMEXGHEYGBFVCPSJLQWYCXQFRNCRDATCVMIXOJLHEA");

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
    msg.setTimeStamp(0.9082122071740086);
    msg.setSource(53282U);
    msg.setSourceEntity(126U);
    msg.setDestination(58067U);
    msg.setDestinationEntity(32U);
    msg.type = 155U;
    msg.error.assign("UUAEHSJCOGWITKUWUEPAWGIPYCLVIICHSBNQWISAKYUMZPMJERQJHNQNBOPFFNKJTVTXTDOJYHMVCKFZFMRYAXJRDGKWKGHCOBZQRDTWAEGVLVMNCKAANWWYFZMFDAXWSXHTRUSPEDNUQCFZUOVIALEDCYZSUWITDGVZZPXJRDQBLXICPOLBEUROSXLVOTOMFDZRJYLCNXYBOSKEEHXNLRHKBHZFHBG");

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
    msg.setTimeStamp(0.5205239946636345);
    msg.setSource(59524U);
    msg.setSourceEntity(60U);
    msg.setDestination(48994U);
    msg.setDestinationEntity(240U);
    msg.seq = 19985U;
    msg.sys_dst.assign("UQTNHIEDXPMVPVEHRCETTAKIDVCODLRBUGSDYOGFCHRYBYFAJZHIORRMPXUBJHYDEHQEIGFOFMXBKNFJJVMXNSGCSKIXNLWEWLEXGCMWVVQRYTOSDJZKWKMKNYKMFDWGOZPOLLBRAWUFUFLTJHPZVIET");
    msg.flags = 205U;
    const char tmp_msg_0[] = {65, 50, -117, -45, -50, -85, -80, -30, -37, -51, 98, 86, 112, -37, -82, -113, 23, 32, 54, -78, -119, -101, 83, 31, 1, 86, 109, -80, 115, 35, 94, 28, 9, -113, 55, -116, 35, 43, -73, -127, -105, -18, -125, 89, 48, -81, -5, -22, -10, 27, 32, -125, 48, -97, 80, 81, -119, -77, 121, -123, 75, -42, -103, -35, -100, 88, 76, -119, -11, 69, 30, 94, 35, -45, -95, -1, -98, -120, -87, 116, 70, -116, -62, 34, 66, 90, 85, 103, -89, 5, 27, 112, -127, 77, -124, -69, 35, -8, 0, -3, -59, -111, -126, 43, -2, -120, -40, 50, -55, 25, -3, 108, 123, 103, 2, -34, 69, -26, -86, 25, -10, -40, 113, -124, -74, -72, 69, 43, -113, 58, 118, 55, 0, 47, 51, -111, -92, 7, 29, 38, 111, 5, 72, -83, -63, -116, 95, -88, 77, 96, 67, -71, 18, 62, -124, 20, -67, 124, 78, 2, -76, 53, -125, 124, -18, 107, -86, 109, 56, 26, -45, 7, 4, -62, -61, 53, -58, 115, 10, 113, -44, 52, 65, -28, -4, -90, 19, 33, 72, 66, -56, -126, -42, -22, -85, -127, -21, 67, -110, -95, -54, 111, 51, -111, -37, 33, -36, -123, -125, 106, -34, 87, 100, -77, 11, 68, 108, -112, -68, -107, 71, -56, 49, 124, 38, 6, 102, -40, 47, 2, -46, -73, 87, 93, 79, 41, -44, 30, 1, -48, 22, 68};
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
    msg.setTimeStamp(0.4132566324140394);
    msg.setSource(57351U);
    msg.setSourceEntity(44U);
    msg.setDestination(35918U);
    msg.setDestinationEntity(68U);
    msg.seq = 56912U;
    msg.sys_dst.assign("WBUYOLXVCKTFHRSPSLTWHKNJJISZZNNRNRFEYYRFLQABIAABTDZFBYCJQMVXCJIPMHRRCOOOMNUOSOHSOGPGMCAWULGHWCPXEOTGXDUKLQTDZEHJRMUZXJESWSSFEBSMVVRADHGDXYMZUWQMPLYKMPRXWQLINLPGBTVDFEAHCKKVFUNIXPBDHYXTVZAQIKNZILFHOFTWAJWUSYKKYJDNETMNIBBAGCZYEVVULVQ");
    msg.flags = 192U;
    const char tmp_msg_0[] = {-24, 63, -13, 112, 116, 82, 24, 115, -18, 34, 107, -111, 18, 83, 26, 96, -28, 116, -125, 27, 32, 78, -120, 32, -46, -105, -21, 82, -9, -65, -121, 76, -19, 64, -20};
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
    msg.setTimeStamp(0.8768763554113278);
    msg.setSource(37639U);
    msg.setSourceEntity(55U);
    msg.setDestination(22074U);
    msg.setDestinationEntity(35U);
    msg.seq = 6305U;
    msg.sys_dst.assign("OKWDAXXIYOUQZXNYJMBMGKTVGUHELBAAWLJRZEWVZTPYPUKKAHXEXAQVHWSCKIYSMOZFGNPJDRSFIVVCOFXNBUSPNSOZFORIATCVUDFJMRFQDLXPEHMYXTRSVLZODLBBYQMQWWVHBBPMQUGRLGITJIWPONNNFKYUWJMQZNNKJVOKDECTPBHSDHTRHDACZTCKBHHFMTZGECECILOXVSEZIPGNWRGURCAQBJUYFCGUDLKLJEJR");
    msg.flags = 13U;
    const char tmp_msg_0[] = {-100, 122, 69, -64, -24, 51, -80, -25, 17, -6, 79, -88, 35, 100, 53, -26, -90, 89, 22, -26, -66, 38, -3, -2, -56, -19, -33, -10, 26, -80, 66, 94, -115, 110, 115, -99, -46, -37, 43, -114, 30, 34, -38, -38, -108, -128, -41, 69, 58, -45, 103, -40, -34, 10, 49, 110, 77, 84, -86, 3, -17, 114, -13, -106, 32, 83, 119, -29, 122, -8, 72, -107, 123, -76, -44, -113, -60, 96, -75, 53, -30, -118, -49, 83, 22, -122, -54, 52, -78, -46, 94, 110, -9, -92, 3, 72, 2, -94, 102, 20, 7, 77, 7, -115, -106, -48, -86, -65, 7, -36, 62, 98, -96, 49, -99, 108, -35, -38, -59, -86, -93, -81, -128, -98, 87, 88, -12, -42, 25, 59, -116, 67, 99, -20, -88, -56, 68, 120, -111, 89, 36, 117, 62, -37, 101, 115, 56, -91, 53, 112, -44, 42, -95, -67, 28, -121, -75, -79, -120, 7, 101, 85, 90, -48, 116, -73, 107, 6, -125, 59, -44, 62, -101, 36, 26, 69, 59, -101, 34, -34, 7, 96, 5, -88, -127, -11, 90, 22, 66, -51, -110, -97, -106, -116, 29, -53, 109, 30, -37, 71, -88, 119, 126, 56, 8, -86, 34, -38, -53, -13, -57, -48, 16, 100, -18, 8, -7, 41, 27, 1, -65, -80, -50, 14, 32, -94, -30, 11, -7, 36, 70, -18, -27, 97, -15, 37, 16, -14, 110};
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
    msg.setTimeStamp(0.04763219131134544);
    msg.setSource(39074U);
    msg.setSourceEntity(213U);
    msg.setDestination(8246U);
    msg.setDestinationEntity(133U);
    msg.sys_src.assign("HYPYKCNXAGPEIFRTQZJPCDOENJSMZTURWYJJMVLJZNLCAFHYDRRMGGXEAJSVMOATHAVFIHDWKPWXMIJLXBTGRUEZGEHNIKLDUHABOUSCKZBBMXMISRXLBYHUTHCMTQYZXOARNKU");
    msg.sys_dst.assign("EUKCTKHXNPTEAUHODLCKRMBDFIFWWELEXMXXJBHAQCUPPMIYJGYIZMSSKVJWBXDVSHXFWFXGNERQNSHTTZYBRYNLXGIURRRUMHBIHCSWDVOBASGTJODYRACWYJZKCFQUAUVWRLVKEJTDGEFICYFHYVXDVZATAXLKZAMJKBLLFIPZTJAQSNMVI");
    msg.flags = 239U;
    const char tmp_msg_0[] = {-40, -87, 50, -44, -96, -109, -117, 16, 10, 86, 124, 19, -102, 95, 10, -89, 88, 32, -115, -6, 64, 35, -95, -100, 34, -9, 29, 27, 96, -26, 33, -95, 31, -47, 107, -115, 69, -38, 63, -115, -111, 108, -7, -125, -15, 33, -79, 75, -90, 92, -102, -122, -72, 101, 48, -39, 36, 82, -108, 48, -9, -115, -16, -92, -55, -21, -76, -88, 34, 108, 37, 52, -25, -71, 50, -116, 21, 87, 31, 60, 105, -68, -74, 64, 125, 98, 72, -47, 99, -86, -33, 57, -113, 104, -42, -48, -51, -96, 31, 47, 101, -56, -101, -100, -13, 26, 80, -16, -40, 43, 27, -10, 75, -107, 53, -27, 67, -96, -68, 98, -23};
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
    msg.setTimeStamp(0.7815773656626193);
    msg.setSource(46799U);
    msg.setSourceEntity(44U);
    msg.setDestination(12749U);
    msg.setDestinationEntity(235U);
    msg.sys_src.assign("MSBCYNRDEDTGCFSPRLGEUWEEVSPMZVUCADAFOOJAJIUHNODTGQLKKIVKVQTRYQNIYAMFBKHXGHWBSAIEIZUUHYLUDNIFLXOXWWSYQXJMZOOJNKG");
    msg.sys_dst.assign("LXJTHZXNAGLOQICMKAYLOCILOCWWEDABIR");
    msg.flags = 57U;
    const char tmp_msg_0[] = {47, -85, 1, -119, 121, -88, 118, 30, 118, -72, 40, -105, 110, 44, -29, 121, 8, 72, -127, -19, 26, -3, 37, 21, -126, 108, -63, 103, -23, -7, 5, -123, -93, -47, -18, -42, -93, 103, -60, 59, 89, -14, -112, 98, -83, -30, -120, 62, 104, -10, -33, 79, 0, -25, -96, -92, -30, -33, -79, 27, 43, 0, 61, -22, 7, 124, 103, 85, -61, 69, -14, 67, -3, -51, -20, -29, 93, 95, 33, 14, 0, -93, 29, -10, 103, -35};
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
    msg.setTimeStamp(0.8718764288131542);
    msg.setSource(25460U);
    msg.setSourceEntity(57U);
    msg.setDestination(44886U);
    msg.setDestinationEntity(1U);
    msg.sys_src.assign("GAMTPLGBBEVOKVXJFYYWCFEWNQNHAOBRXDLSWRECUOVQPLYCFZNHIBDDJZUIVWGBKIAMGRTBXQFPDQOZFVYPCRJGJPPNEQMKBFNIIWQVBKUEUXUDPWHNIZKTIZSXASRZCEPTOLJYEFGWVKLYNZMITHMDWYSDAQMYSETFADNFJJUHQKPLQWGXTLXGPRXGQAJBTTSERBCJGLTWDKSNSKHZHYZSMVRLHFRCSCHVEOOXJCXKUADOHRUMMVAOUI");
    msg.sys_dst.assign("CUEGZCQYJTFQRWIVINIPORFSTGRWSGZOFOCLPBVVFVCJKTFFBSXGC");
    msg.flags = 70U;
    const char tmp_msg_0[] = {-68, -25, 4, 117, 37, 72, -127, 2, -128, -10, -108, -90, 77, 54, -99, -60, 97, -49, 19, 1, 42, 38, -21, 102, -81, -48, 17, 40, 89, 34, -30, -40, -46, 69, 109, 78, -35, -61, -34, 98, 13, 94, -96, 27, -67, -32, 29, 83, 104, -107, -118, 73, -102, 77, -124, 59, 78, 70, -35, 47, -88, -72, -118, 57, 18, 92, 45, -114, 110, 62, -32, -81, 64, -9, -81, -39, -83, 42, -19, 42, 67, -115, 110, -59, 121, -28, -120, -96, 112, 7, 82, 75, 34, -77, 47, 119, 18, 93, 4, -34, 87, -63, -35, 93, 5, 10, -44, 63, -113, 63, 26, -123, 10, -45, -65, -13, 9, -49, -12, 90, -47, -67, 67, 49, 94, 48, -80, 119, 5, 83, 88, -128, -64, 91, -92, 67, 32, 61, 92, 75, 24, 116, -19, -71, 81, 9, 70, -103, -35, -114, 12, 93, -43, -105, 113, -25, -49, -24, 71, -59, 117, -14, -90, -55, 65, -37, -111, -119, 63, 37, 118, 102, 12, -32, -74, -21, -76, 43, -80, 61, -69, -67, -41, -74, -107, -64, 12, 34, -106};
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
    msg.setTimeStamp(0.7213164808841496);
    msg.setSource(26881U);
    msg.setSourceEntity(29U);
    msg.setDestination(60790U);
    msg.setDestinationEntity(252U);
    msg.seq = 26214U;
    msg.value = 97U;
    msg.error.assign("UTWFNHJYBLAHRSPTCJNAWTPUBSMTFMRMATAWDFRVSOKNGEDLJIGHQZYOJQMQXKXPYLMVZVAWPYADQWBQMTWOYCKXSNHVQPLITLUHEZFAPJNOHZDEBYEUVTNDBDZYNLHRGEKVKSBQJEHPUXSNXCNHLUMMSPKGFEDJFSBOJBXKDXRVM");

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
    msg.setTimeStamp(0.5450383559290072);
    msg.setSource(62551U);
    msg.setSourceEntity(217U);
    msg.setDestination(33094U);
    msg.setDestinationEntity(171U);
    msg.seq = 36520U;
    msg.value = 124U;
    msg.error.assign("HYHZRMHIEOCPGGJCUYYRABQDKFSZDKAYZFTEIPHEBWWJKVVWTTOILBTLSUFMAGVWDMICUFMVSOOMYCFBAVOTPUVFJPBJELJYLOQYQKVMWFYDGXNEHMGHNWRZRQACIDCYBMXPTPFUOKZRKXOZBNEGZCRPWHUCPRALLECJXRNAVBKGWNSQPJOTBTDGOUSUIWMDXNQVRTGFQSZJJDL");

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
    msg.setTimeStamp(0.04133639341342821);
    msg.setSource(42537U);
    msg.setSourceEntity(178U);
    msg.setDestination(18076U);
    msg.setDestinationEntity(38U);
    msg.seq = 59710U;
    msg.value = 243U;
    msg.error.assign("FBYZNIQJXHQUPYKWEFEKCXSPWTLVVVNDEAOUZVDLPFOYZDOAXZWAVHPKGDQKPUCMZBGSFRBRBNHAUZEJUWROWNOFHPZYGGOMKMERQSLIKMEIYSLKZQCTJEICNGFONLXRWMRTVNTXLEYKCANHBSOAIWODSHCWARXDYV");

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
    msg.setTimeStamp(0.8174178272904171);
    msg.setSource(15863U);
    msg.setSourceEntity(14U);
    msg.setDestination(1472U);
    msg.setDestinationEntity(225U);
    msg.seq = 23602U;
    msg.sys.assign("OXHLOOGPMZNDKRUTSTMKQVYVXNADZVXSLUQQKPARRPAIJBCKCLQWGOTRUEKFAZBTQXSDFVAGADDCNPPRBCMRZZPFGUHSELMSQXIHZYCTHRYSAVWDHTVLSXPWDWOLMUUNXDBIHUIQ");
    msg.value = 0.22560459256779508;

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
    msg.setTimeStamp(0.1544503014000399);
    msg.setSource(42162U);
    msg.setSourceEntity(182U);
    msg.setDestination(24505U);
    msg.setDestinationEntity(243U);
    msg.seq = 39925U;
    msg.sys.assign("XHTYFWKEKTAGUGHVWFUQSNUVFOGWGPRKCXJBRQBCQAFVUYTJACHHTBXVYTMRZEZISJPMRYMDHKTZEBCPWHLFKAABURPWMGMCLYEYC");
    msg.value = 0.4619708254926703;

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
    msg.setTimeStamp(0.5071698620276671);
    msg.setSource(46796U);
    msg.setSourceEntity(209U);
    msg.setDestination(22060U);
    msg.setDestinationEntity(101U);
    msg.seq = 51788U;
    msg.sys.assign("QXHNNULTWPRNIDBWCBQCDMYMLYBXYHCDNTYZJMXJAFAATIKZYFTPRZSHHEOTPAREWCPVZNRDSFUBNYAZIJAXHKXPJEJMRPTZBJSQOWUCLKGSKKGUFFXVLDISMKGVIHZCADHFQQGNLEZRORYMVOGZFSSKWNEQLNFYPHHHXMAEXBZVKBGVTPCLWGFEEJOQUJGOEURWWCCMYGVGXM");
    msg.value = 0.7416091589122257;

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
    msg.setTimeStamp(0.722449303004865);
    msg.setSource(47816U);
    msg.setSourceEntity(208U);
    msg.setDestination(55075U);
    msg.setDestinationEntity(111U);
    msg.seq = 54463U;
    msg.sys_dst.assign("MIIVMLQPQWPXOXJAWBRXJBKSYMMNYULGZIOPHYKHNAYEICHAQACVMHUHFLVEITXPZCAKZDFJITFZURDJJVFSDMTCENBWNFPHZELBWEYUROPJWSXZTLNRGUYRK");
    msg.timeout = 0.9243113284061423;

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
    msg.setTimeStamp(0.5554292030222524);
    msg.setSource(38753U);
    msg.setSourceEntity(182U);
    msg.setDestination(25412U);
    msg.setDestinationEntity(10U);
    msg.seq = 4767U;
    msg.sys_dst.assign("FUZZMCXUYNMPAJVTJNLUCGPVUTEZOZMRUJEGFRILEFFGSNBXDQMQMWMAXHTCCRROVLDISZTWASYFHKNKTRHUDXUGVPBDKYWCBGBDSHIGHQLOEZSDYPXYJK");
    msg.timeout = 0.27403586071737074;

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
    msg.setTimeStamp(0.46246338153789546);
    msg.setSource(21023U);
    msg.setSourceEntity(68U);
    msg.setDestination(30957U);
    msg.setDestinationEntity(126U);
    msg.seq = 22818U;
    msg.sys_dst.assign("LNNBKDWGTSZHAIVDQHPNIXERQWQVREOKLLZAIFESFBDIFZYORIROMRHBTMJHCOCBCSSFSIYQVXYXVULSPLOTDNHJWWUUFPEMXLMWZWKOKZDSCHYXHGUIRGKTRAYTKJFMUXRZTDGPCZGFEMBNTYVJEOQVFOKNKTBOUWWPICXZCXXXQDNGGAISEAPDSOWLRTCMLGTEZUVMBRD");
    msg.timeout = 0.1565590420684292;

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
    msg.setTimeStamp(0.6320634366131753);
    msg.setSource(49993U);
    msg.setSourceEntity(241U);
    msg.setDestination(6154U);
    msg.setDestinationEntity(26U);
    msg.action = 172U;
    msg.longain = 0.5287302072180966;
    msg.latgain = 0.3470995330132508;
    msg.bondthick = 3472763456U;
    msg.leadgain = 0.22373492969337705;
    msg.deconflgain = 0.6576421184136182;

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
    msg.setTimeStamp(0.40052469653402867);
    msg.setSource(45182U);
    msg.setSourceEntity(135U);
    msg.setDestination(31923U);
    msg.setDestinationEntity(105U);
    msg.action = 5U;
    msg.longain = 0.6822898879773736;
    msg.latgain = 0.4688809929065775;
    msg.bondthick = 2259008490U;
    msg.leadgain = 0.45735018050243614;
    msg.deconflgain = 0.3553963056768529;

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
    msg.setTimeStamp(0.9470384377781335);
    msg.setSource(58626U);
    msg.setSourceEntity(148U);
    msg.setDestination(36927U);
    msg.setDestinationEntity(17U);
    msg.action = 213U;
    msg.longain = 0.2998959393831502;
    msg.latgain = 0.28123910849868117;
    msg.bondthick = 970177458U;
    msg.leadgain = 0.547124792357761;
    msg.deconflgain = 0.5148397891976743;

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
    msg.setTimeStamp(0.1678319429419325);
    msg.setSource(16847U);
    msg.setSourceEntity(78U);
    msg.setDestination(45169U);
    msg.setDestinationEntity(32U);
    msg.err_mean = 0.7946990583054893;
    msg.dist_min_abs = 0.6106632069624656;
    msg.dist_min_mean = 0.5917981598599981;

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
    msg.setTimeStamp(0.4420822123555578);
    msg.setSource(37423U);
    msg.setSourceEntity(236U);
    msg.setDestination(10512U);
    msg.setDestinationEntity(191U);
    msg.err_mean = 0.5869720072817005;
    msg.dist_min_abs = 0.2692966937451895;
    msg.dist_min_mean = 0.47823944543335895;

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
    msg.setTimeStamp(0.03418943386998485);
    msg.setSource(9385U);
    msg.setSourceEntity(66U);
    msg.setDestination(42116U);
    msg.setDestinationEntity(129U);
    msg.err_mean = 0.3489673211071176;
    msg.dist_min_abs = 0.13481252635853502;
    msg.dist_min_mean = 0.39494470792256897;

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
    msg.setTimeStamp(0.8094756146743389);
    msg.setSource(30290U);
    msg.setSourceEntity(170U);
    msg.setDestination(59613U);
    msg.setDestinationEntity(104U);
    msg.action = 208U;
    msg.lon_gain = 0.7553658990241545;
    msg.lat_gain = 0.4801200545468196;
    msg.bond_thick = 0.34920406585819996;
    msg.lead_gain = 0.7718142204744798;
    msg.deconfl_gain = 0.779850272979461;
    msg.accel_switch_gain = 0.4623817189069801;
    msg.safe_dist = 0.1853274956233274;
    msg.deconflict_offset = 0.591788787556581;
    msg.accel_safe_margin = 0.5654040644370182;
    msg.accel_lim_x = 0.30516643964427337;

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
    msg.setTimeStamp(0.1927924561003439);
    msg.setSource(55912U);
    msg.setSourceEntity(144U);
    msg.setDestination(43626U);
    msg.setDestinationEntity(116U);
    msg.action = 220U;
    msg.lon_gain = 0.8355063569020089;
    msg.lat_gain = 0.2760860162460692;
    msg.bond_thick = 0.4798038498263536;
    msg.lead_gain = 0.01198970422678547;
    msg.deconfl_gain = 0.6799939690123293;
    msg.accel_switch_gain = 0.8100124805265362;
    msg.safe_dist = 0.38275127543457366;
    msg.deconflict_offset = 0.08135960736722325;
    msg.accel_safe_margin = 0.9334109025591282;
    msg.accel_lim_x = 0.46020193532477316;

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
    msg.setTimeStamp(0.6284218168905841);
    msg.setSource(43583U);
    msg.setSourceEntity(42U);
    msg.setDestination(21289U);
    msg.setDestinationEntity(6U);
    msg.action = 202U;
    msg.lon_gain = 0.8262765159755004;
    msg.lat_gain = 0.21630507171106717;
    msg.bond_thick = 0.082205998365384;
    msg.lead_gain = 0.724933419231068;
    msg.deconfl_gain = 0.6088813407122737;
    msg.accel_switch_gain = 0.8675922506988464;
    msg.safe_dist = 0.2077112861059367;
    msg.deconflict_offset = 0.7561248612947062;
    msg.accel_safe_margin = 0.6924033982283766;
    msg.accel_lim_x = 0.23704906050273178;

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
    msg.setTimeStamp(0.6833063923555441);
    msg.setSource(34972U);
    msg.setSourceEntity(84U);
    msg.setDestination(36114U);
    msg.setDestinationEntity(68U);
    msg.type = 180U;
    msg.op = 132U;
    msg.err_mean = 0.02579601007330734;
    msg.dist_min_abs = 0.13141087161198817;
    msg.dist_min_mean = 0.2917005832508083;
    msg.roll_rate_mean = 0.942190264952215;
    msg.time = 0.18853192913757888;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 185U;
    tmp_msg_0.lon_gain = 0.285426739607228;
    tmp_msg_0.lat_gain = 0.08054591898379304;
    tmp_msg_0.bond_thick = 0.006690928563191645;
    tmp_msg_0.lead_gain = 0.6929399309266874;
    tmp_msg_0.deconfl_gain = 0.6230124094195483;
    tmp_msg_0.accel_switch_gain = 0.40358430858786287;
    tmp_msg_0.safe_dist = 0.6545184481822114;
    tmp_msg_0.deconflict_offset = 0.2417954788364487;
    tmp_msg_0.accel_safe_margin = 0.5640706696551389;
    tmp_msg_0.accel_lim_x = 0.2853033921932544;
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
    msg.setTimeStamp(0.6902534596723646);
    msg.setSource(1713U);
    msg.setSourceEntity(97U);
    msg.setDestination(18217U);
    msg.setDestinationEntity(136U);
    msg.type = 53U;
    msg.op = 228U;
    msg.err_mean = 0.9820022790671145;
    msg.dist_min_abs = 0.7126443365360802;
    msg.dist_min_mean = 0.11616396624508318;
    msg.roll_rate_mean = 0.8575760740181475;
    msg.time = 0.03568255544781063;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 33U;
    tmp_msg_0.lon_gain = 0.9162452548431369;
    tmp_msg_0.lat_gain = 0.1151983155027102;
    tmp_msg_0.bond_thick = 0.7319702645170716;
    tmp_msg_0.lead_gain = 0.8710393036420011;
    tmp_msg_0.deconfl_gain = 0.16414512057253794;
    tmp_msg_0.accel_switch_gain = 0.35451485699619545;
    tmp_msg_0.safe_dist = 0.15107322845086602;
    tmp_msg_0.deconflict_offset = 0.09015421743973306;
    tmp_msg_0.accel_safe_margin = 0.6173911432193617;
    tmp_msg_0.accel_lim_x = 0.554498768912113;
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
    msg.setTimeStamp(0.1717988657067031);
    msg.setSource(48408U);
    msg.setSourceEntity(203U);
    msg.setDestination(23023U);
    msg.setDestinationEntity(118U);
    msg.type = 81U;
    msg.op = 205U;
    msg.err_mean = 0.043071575477519275;
    msg.dist_min_abs = 0.9602229784896227;
    msg.dist_min_mean = 0.9074509280576969;
    msg.roll_rate_mean = 0.11020738277625342;
    msg.time = 0.8412451694273636;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 44U;
    tmp_msg_0.lon_gain = 0.32756172437346043;
    tmp_msg_0.lat_gain = 0.20673188204038517;
    tmp_msg_0.bond_thick = 0.14219923435996074;
    tmp_msg_0.lead_gain = 0.20475714832213188;
    tmp_msg_0.deconfl_gain = 0.5187014446494272;
    tmp_msg_0.accel_switch_gain = 0.024170964432402076;
    tmp_msg_0.safe_dist = 0.69274135753281;
    tmp_msg_0.deconflict_offset = 0.1672366347310993;
    tmp_msg_0.accel_safe_margin = 0.8456375904311816;
    tmp_msg_0.accel_lim_x = 0.26259972443328905;
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
    msg.setTimeStamp(0.695819851833536);
    msg.setSource(64347U);
    msg.setSourceEntity(189U);
    msg.setDestination(30481U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.1298281835637345;
    msg.lon = 0.28765514845780327;
    msg.eta = 1876100768U;
    msg.duration = 11739U;

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
    msg.setTimeStamp(0.96688714665893);
    msg.setSource(49059U);
    msg.setSourceEntity(97U);
    msg.setDestination(25U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.3850347354637782;
    msg.lon = 0.9798114376580057;
    msg.eta = 1282012783U;
    msg.duration = 37402U;

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
    msg.setTimeStamp(0.41345800034335345);
    msg.setSource(56382U);
    msg.setSourceEntity(209U);
    msg.setDestination(47123U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.6448632862766773;
    msg.lon = 0.3685344839601079;
    msg.eta = 796395274U;
    msg.duration = 36748U;

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
    msg.setTimeStamp(0.03272363242316545);
    msg.setSource(62226U);
    msg.setSourceEntity(183U);
    msg.setDestination(42737U);
    msg.setDestinationEntity(56U);
    msg.plan_id = 42278U;

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
    msg.setTimeStamp(0.6662970013888015);
    msg.setSource(28721U);
    msg.setSourceEntity(242U);
    msg.setDestination(64211U);
    msg.setDestinationEntity(79U);
    msg.plan_id = 52134U;

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
    msg.setTimeStamp(0.008718117867788644);
    msg.setSource(39165U);
    msg.setSourceEntity(51U);
    msg.setDestination(34031U);
    msg.setDestinationEntity(180U);
    msg.plan_id = 33632U;

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
    msg.setTimeStamp(0.9086651505837896);
    msg.setSource(31122U);
    msg.setSourceEntity(202U);
    msg.setDestination(15131U);
    msg.setDestinationEntity(3U);
    msg.type = 142U;
    msg.command = 246U;
    msg.settings.assign("SFSBPHMJDAQVNNCNDRIOKCBYOKEROZSMZMMGGVTJKGSXWWUOOLPHJTESBEJBYABLNWIADFBGGRXKJVDBMZNCWNBYWFEJQRRDMQQZFRYKUPU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 59798U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FNFIVQMVITEQNIHDLJEHJMQTSNTRKNPJLXBYHLIWGKQXPHYFZBXTQSMYDRUSUPVDIOHHPOKAPELJAZGEYUKZAWSOORBMXAWTLBODCZLDUDYEDRJFGVHBFNIMFIGZKRUCSMKWCMBNHUQHYKTRRGLDOEIPVOJZACTGAUEUXMNZG");

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
    msg.setTimeStamp(0.9299058524847028);
    msg.setSource(18416U);
    msg.setSourceEntity(34U);
    msg.setDestination(33352U);
    msg.setDestinationEntity(185U);
    msg.type = 27U;
    msg.command = 159U;
    msg.settings.assign("MSAUJFOSGPOMZXSKYMFZWJNEEPZFRCKIHDBBSHQJPESZFNSAYWRGPWNGHLHIMGUJVUPZRVO");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 941U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7860502596912876;
    tmp_tmp_msg_0_0.lon = 0.23759220289550542;
    tmp_tmp_msg_0_0.eta = 2470806026U;
    tmp_tmp_msg_0_0.duration = 10508U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HJAYGQTFIKAZQPHLLGTPFPWTVLEADJETPMRTQSBGRDLPIIMHLYNRXZIBAKKYMAFYIKBJHBEJIXKRMUNKDLGSDRPUOVMGWVJRCCHXNEZNCZNXSDGVKAQMWSVPHXMSRDQMJUBK");

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
    msg.setTimeStamp(0.46857725917128945);
    msg.setSource(2297U);
    msg.setSourceEntity(222U);
    msg.setDestination(38313U);
    msg.setDestinationEntity(96U);
    msg.type = 98U;
    msg.command = 82U;
    msg.settings.assign("YIUELNDGWRJKCTSEVDKPUDHQCNFNVTQVITBGTWMHZGXZINCPAOLQLDDVRBRICORODYVETPOIOJHZTLIEPWWYUWWOJCAAUYZBGSNGHWVAECPXYSFBEMMBKHIXAAMNFPJMXPLFJIXGSNFDAOHZHMM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48256U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.07032160014677546;
    tmp_tmp_msg_0_0.lon = 0.09958232630451591;
    tmp_tmp_msg_0_0.eta = 630128903U;
    tmp_tmp_msg_0_0.duration = 42853U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UEOKQNCQVUXVLSCVNDSGGSMRUSASLQEOVOXFZIMWIXGWLYQDCYGLKKXVSSRTRHHZPFRETCXIMXAETEIWNTJNTWBVCKFBYBHOKYOWZOTJPVWJDDOISHQGMQJPQFUBARHAFLE");

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
    msg.setTimeStamp(0.4170594616287029);
    msg.setSource(18773U);
    msg.setSourceEntity(182U);
    msg.setDestination(7270U);
    msg.setDestinationEntity(66U);
    msg.state = 52U;
    msg.plan_id = 6571U;
    msg.wpt_id = 76U;
    msg.settings_chk = 47091U;

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
    msg.setTimeStamp(0.3989001184910884);
    msg.setSource(14479U);
    msg.setSourceEntity(183U);
    msg.setDestination(58778U);
    msg.setDestinationEntity(171U);
    msg.state = 9U;
    msg.plan_id = 18549U;
    msg.wpt_id = 5U;
    msg.settings_chk = 36502U;

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
    msg.setTimeStamp(0.7885339820954655);
    msg.setSource(3158U);
    msg.setSourceEntity(196U);
    msg.setDestination(15209U);
    msg.setDestinationEntity(245U);
    msg.state = 208U;
    msg.plan_id = 9934U;
    msg.wpt_id = 151U;
    msg.settings_chk = 49142U;

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
    msg.setTimeStamp(0.6305700859649709);
    msg.setSource(31046U);
    msg.setSourceEntity(171U);
    msg.setDestination(44323U);
    msg.setDestinationEntity(196U);
    msg.uid = 136U;
    msg.frag_number = 196U;
    msg.num_frags = 213U;
    const char tmp_msg_0[] = {6, -69, -87, -68, 112, -127, 88, -29, 75, -61, -107, 96, -96, -1, -102, -117, 60, -93, -74, -82, -112, 76, -39, 98, -106, 0, -50, -64, 15, 53, 114, -125, -71, 80, -24, -25, 87, -86, -38, -28, 27, 101, 106, -85, -100, 76, 104, 44, -114, -75, 27, 24, 102, 118, 96, 68, -117, -25, -25, -73, 73, -115, -1, 77, 81, -56, -90, -36, -120, -115, 19, -8, -6, -69, -38, 1, 43, 88, 117, 42, 62, 1, 29, -51, 43, -10, -63, -61, 33, 120, 32, 19, 89, 119, -19, 98, 30, 29, -33, -73, 95, 111, -114, 74, -128, -15, -67, -80, -5, -110, 112, -45, -102, -69, 95, -14, 11, 73, -64, 104, 113, -66, 87, 85, -7, 92, -94, 77, -113, -127, 43, -92, 20, -65, 40, -63, -28, 119, -65, -26, 24, -126, 19, -58, -19, 78, 0, -5, -113, 44, 56, 94, -73, -108, -5, 112, 98, -110, 114, 4, 20, -72, 31, 62, 109, -119, 67, -18, -109, 96, -45, -97, -59, -59, -56, -80, -104, 113, 122, 69, -7, -66, -89, -117, -112, -127, 31, 9, 120, -38, -37, -6, -50, -55, 68, -63, -47, -19, 51, -119, -113, 124, -84, -42, -59, -27, -32, -118, -114, -29, 52, -58, 86, 67, 80, 16, 110, 69, -99, -78, 18, -66, -120, -35, -27};
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
    msg.setTimeStamp(0.01974577703728586);
    msg.setSource(6965U);
    msg.setSourceEntity(17U);
    msg.setDestination(36489U);
    msg.setDestinationEntity(159U);
    msg.uid = 199U;
    msg.frag_number = 158U;
    msg.num_frags = 79U;
    const char tmp_msg_0[] = {12, -48, 122, -60, -124, 108, 112, -42, 118, 97, -22, -46, -34, 121, 33, -113, 9, 124, 89, -97, -54, 54, -69, 111, 122, 66, -43, 72, -116, -31, 94, -29, -108, 115, 25, -70, -57, 65, -14, -30, 35, -54, 80, 63, 26, -101, -95, -69, 28, -28, 118, -75, 19, -118, 26, -47, -9, -102, 84, -99, 62, -116, -82, -114, -96, -26, 88, 25, -14, 62, 60, 113, 116, 49, 74, -62, -40, 57, 104, 85, -91, 125, 72, 25, -50, -61, -126, -29, 100, 3, 75, -93, 1, -6, 114, -40};
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
    msg.setTimeStamp(0.992896990389968);
    msg.setSource(17372U);
    msg.setSourceEntity(169U);
    msg.setDestination(54126U);
    msg.setDestinationEntity(203U);
    msg.uid = 28U;
    msg.frag_number = 83U;
    msg.num_frags = 38U;
    const char tmp_msg_0[] = {63, 30, -124, -81, -22, 37, -78, -77, -40, -32, -61, -86, 74, 17, -58, 28, 0, -26, 124, 99, -17, -24, -71, -86, 119, -59, -43, -113, 43, -38, 52, -100, -70, 84, -32, -122, 91, -65, 53, -29, 16, -92, 13, 45, 28, -7, -45, -115, 14, -126, -89, 33, 68, 3, 98, -43, -90, -59, 100, -77, 123, -105, -87, 13, -14, 115, 122, -126, 105, -97, 3, -116, 124, 77, 8, -42, 120, -39, 39, -27, 24, 6, 0, 103, -67, 103, 68, -35, 56, -65, -105, -37, -48, -77, 77, 20, 35, -42, 52, 124, 10, 55, -16, 56, -92, -62, 51, -104, 108, -99, -97, -25, 61, -126, -79, 49, 109, -87, 85, 94, -40, -68, -5, -58, -95, 15, 60, -66, 30, 13, 82, -55, 15, 67, 18, 106, 32, 13, 116, 28, 8, 90, 34, 68, 99, -95, -7, -66, -21, -4, 44, 63, -49, -38, 119, -8, -46, 28, 47, -73, 66, 8, 53, -6, -119, 120, -1, 42, -67, -94, -113, 35, 83, -24, -84, -116, -114, 11, -122, 73, -119, 77, 99, -116, 22, -84, 102, -110, 57, 30, 49, -9, -111, -124, -62, 1, 106, -117, 108, 110, -31, -33, -25, -118, 116, -100, 116, -121, -18, 39, -9, -90, 106, -53, -55, -17, 56, 84, -28, -127, -86, 60, -39, -6, 45, -54, -2, -35, 5, 77, -64, -26};
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
    msg.setTimeStamp(0.3269065501525018);
    msg.setSource(28937U);
    msg.setSourceEntity(31U);
    msg.setDestination(34139U);
    msg.setDestinationEntity(25U);
    msg.content_type.assign("OCEZNWAKXTLWCUZPFVARMWCFABOOGWVKDCSCGTPMTTYZDRURTBINZLFIDUXQQAQCAFOVJCKCTORCZFPPISWNJOHUPKUWDMMXAOTILLLJTSXSMYEUVGFAPGQURJGELEPNLBKGVIVDIUHY");
    const char tmp_msg_0[] = {-20, 102, -88, -26, 37, -98, -37, -36, -33, -54, -127, 76, -5, -123, -59, 60, 83, -4, -52, -37, -16, 9, 81, -44, 11, 124, 117, -118, -7, 3, -50, -128, 119, -50, 12, -111, -99, -44, -117, -22, 94, -121, -121, -37, 47, 93, -87, 36, -47, -34, 47, -80, 22, 124, -31, -110, 28, 40, 93, 121, -32, -17, 112, 57, -121, 84, -109};
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
    msg.setTimeStamp(0.7018415483262532);
    msg.setSource(33182U);
    msg.setSourceEntity(40U);
    msg.setDestination(50697U);
    msg.setDestinationEntity(234U);
    msg.content_type.assign("QBAIDOQESKJXUYUEYVWAEMFHLKSGFTDWTRJIZBTHYOXDKABFXRQANUCQCTGSSCOIUPEMLCZUZYYDSNCJRWDROPGBZZWOPYVRGNGMQRHLYXOJMRTCZEAWFTTHSXSNPPIKOYAPUDVMWZAWFGJVQSVTMKAX");
    const char tmp_msg_0[] = {-122, -27, 29, -43, 1, -36, 73, 83, 52, -5, -55, 71, -122, 57, -66, -94, -46, 70, -39, -108, -69, 0, 1, 64, 67, 38, -1, 103, 119, -95, 33, -23, -109, -73, -53, 80, 64, -12, 120, 75, -74, 57, -100, 1, 73, 19, 72, 35, 79, 58, -36, -82, 82, -83, -22, 114, -15, 102, 37, 17, 41, -66, 18, -120, -9, -50, 106, 10, -35, 7, -70, -111, -39, 80, -43, 91, 114, 72, 111, -79, -64, 10, 17, 69, 72, 123, 119, 1};
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
    msg.setTimeStamp(0.7757594241841754);
    msg.setSource(51383U);
    msg.setSourceEntity(191U);
    msg.setDestination(9749U);
    msg.setDestinationEntity(41U);
    msg.content_type.assign("LWQIAMNXLGWQVACFYEQNBWPUAQVPUWKITZTAAJNNYRODFFMJTCGYHGRIGCPHNNKTEKKJEYSVECPRUVVBOVDBKPUHNTGPODHXVQIZVMUNXSWAKIILZZZUFHVFQLSTKEFIESMMNWBAJLBYJJPCUORMOYT");
    const char tmp_msg_0[] = {36, -23, -32, -63, 112, 30, -41, -105, 63, -123, 99, -32, 125, -95, 45, -102, 107, -39, 17, -124, -86, -3, 13, -40, 29, -20, 93, 50, 10, 124, 104, 73, -25, -100, 115, 122, -91, -115, 78, -117, -51, -35, 118, 55, 106, -35, -14, 3, -47, 37, -24, -10, 84, 106, -38, 112, 21, -55, 51, 18, -42, -51, 121, -119, -82, 9, -82, -100, 126, 2, -66, 104, 77, 36, -62, -66, -113, -40, -94, -107, -126, 38, -68, -8, -60, 45, -83, -2, -65, 57, 93, -24, 98, 16, 91, -116, -66, -19, 74, 49, 52, 35, -43, 113, -21, -18, 84, 43, 75, -49, 35, -109, 62, -8, -72, 84, -100, -116, -126, -44, -9, 17, -92, 24, -110, 126, -82, 34, -42, 108, -65, 119, 20, -23, -63, 73, -67, -57, -36, -55, 4, -92, -15, -97, 5, -82, -70, 105, 72, 40, 0, 77, -74, -110, 38, -70, -1, 40, 82, 107, -40, -123, 65, 96, -14, -89, -46, 32, -9, -111, 57, -66, -23, 61, 88, -58, -108, 106, -85, 10, -59, -103, 9, -63, -35, 32, -113, -74, -121, 7, 61, 21, 106, 44, 56, -21, -5, -121, 111, 57, -107, 74, 12, 122, 105};
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
    msg.setTimeStamp(0.9112693254124191);
    msg.setSource(36347U);
    msg.setSourceEntity(80U);
    msg.setDestination(42094U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.9195187844991954);
    msg.setSource(5563U);
    msg.setSourceEntity(204U);
    msg.setDestination(49476U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.027858120490798388);
    msg.setSource(14169U);
    msg.setSourceEntity(31U);
    msg.setDestination(7044U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.6779749969962535);
    msg.setSource(49115U);
    msg.setSourceEntity(211U);
    msg.setDestination(42358U);
    msg.setDestinationEntity(178U);
    msg.target = 1316U;
    msg.bearing = 0.5834556267678074;
    msg.elevation = 0.02897375306756189;

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
    msg.setTimeStamp(0.5688458863747998);
    msg.setSource(29775U);
    msg.setSourceEntity(174U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(121U);
    msg.target = 43671U;
    msg.bearing = 0.886682889770656;
    msg.elevation = 0.28762543428321985;

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
    msg.setTimeStamp(0.8267880990365619);
    msg.setSource(2705U);
    msg.setSourceEntity(137U);
    msg.setDestination(28855U);
    msg.setDestinationEntity(197U);
    msg.target = 5460U;
    msg.bearing = 0.8419634913925562;
    msg.elevation = 0.9381676558007209;

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
    msg.setTimeStamp(0.9095830076890922);
    msg.setSource(14400U);
    msg.setSourceEntity(64U);
    msg.setDestination(52865U);
    msg.setDestinationEntity(19U);
    msg.target = 20901U;
    msg.x = 0.19913359181837076;
    msg.y = 0.14783928357942866;
    msg.z = 0.9880421723436966;

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
    msg.setTimeStamp(0.29150662531489646);
    msg.setSource(40507U);
    msg.setSourceEntity(64U);
    msg.setDestination(4777U);
    msg.setDestinationEntity(151U);
    msg.target = 24656U;
    msg.x = 0.004482153685686052;
    msg.y = 0.34446828231644977;
    msg.z = 0.022857973573978785;

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
    msg.setTimeStamp(0.9254482688687448);
    msg.setSource(44165U);
    msg.setSourceEntity(62U);
    msg.setDestination(65008U);
    msg.setDestinationEntity(127U);
    msg.target = 22301U;
    msg.x = 0.7900846993767187;
    msg.y = 0.5253080919394976;
    msg.z = 0.9514326610777113;

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
    msg.setTimeStamp(0.816776585661038);
    msg.setSource(4965U);
    msg.setSourceEntity(253U);
    msg.setDestination(55436U);
    msg.setDestinationEntity(21U);
    msg.target = 10764U;
    msg.lat = 0.314788331831665;
    msg.lon = 0.7960025141290996;
    msg.z_units = 69U;
    msg.z = 0.7488329814288124;

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
    msg.setTimeStamp(0.7870543160141942);
    msg.setSource(30944U);
    msg.setSourceEntity(13U);
    msg.setDestination(43571U);
    msg.setDestinationEntity(126U);
    msg.target = 40159U;
    msg.lat = 0.1515581218151445;
    msg.lon = 0.34122982351812625;
    msg.z_units = 83U;
    msg.z = 0.43406690451497365;

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
    msg.setTimeStamp(0.7013110517528509);
    msg.setSource(55187U);
    msg.setSourceEntity(172U);
    msg.setDestination(41108U);
    msg.setDestinationEntity(125U);
    msg.target = 8224U;
    msg.lat = 0.09434796502311094;
    msg.lon = 0.28792819183498053;
    msg.z_units = 165U;
    msg.z = 0.41110543195107363;

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
    msg.setTimeStamp(0.0021491133067029766);
    msg.setSource(49626U);
    msg.setSourceEntity(4U);
    msg.setDestination(16161U);
    msg.setDestinationEntity(252U);
    msg.locale.assign("ZJVCRQEEGUHWFPHLDMAPQGSTVXLMWRAYKWMQFSBWDAOGFZLBDJYGLVEAENTKHXWKRBVZNCAXISKNYROIEONJIGXSRMPGZJAMNBCLBPMYHHQJGDHFUETQOESRSJDCYOPV");
    const char tmp_msg_0[] = {-78, 118, -71, -113, 9, 111, -30, 118, 4, -1, 57, -97, 25, -126, 10, -114, -122, -54, 83, 18, 115, 36, -30, 107, -89, 78, 56, 102, 41, -44, -53, 56, 40, 70, 16, 99, -16, -2, -108, 125, 95, 38, 17, 117, 49, -6, 63, 55, 89, -56, 122, 46, 7, -121, -74, -44, -16, -23, 4, -50, -103, -58, -111, -89, -48, 70, -54, -60, -10, 3, -44, -63, 65, 31, 103, 68, -42, 79, 92, 0, 66, -28, 13, -92, -110, 122, 26, 114, -109, 60, -49, 50, -59, -11, 53, -57, 116, -8, -110, 47, 37, 24, -36, -107, 82, -45, -3, -9, -46, 109, 29, 27, -97, 30, -43, 29, -100, -47, -65};
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
    msg.setTimeStamp(0.035155671640451414);
    msg.setSource(41647U);
    msg.setSourceEntity(146U);
    msg.setDestination(11247U);
    msg.setDestinationEntity(4U);
    msg.locale.assign("JCSBOPUKXFIISTLIWWNOTYMWVDXGNWZVMKYUQBZICZNUKUDLQJTHYCFMZQSHBYPLXAXELXXCWLYIUCFUBHROPBRYLKVGSGTIIVTMWRLKJEJETHGMYHAVJPNFYPSDDMOZQHWEPXTEOSOJXVGCLRUTLNHXQAZKFGESBADRBPGOWJDCQUJMNNRAGVZUPFKVRFQSOHRQMEIBDAAJYKGNAOWPDSOUELZFSK");
    const char tmp_msg_0[] = {111, 57, -9, -121, -66, -21, 47, -46, 96, 92, -38, -34, -49, 104, 88, -27, -44, -86, 107, -86, -21, -79, -113, -23, -43, -91, -50, 120, -91, 80, 13, -91, -23, -115, -43, -23, 21, -46, -22, -90, 96, 12, 79, 73, -102, -45, 76, -118, -122, 49, -42, -24, -121, -44, 111, -10, -66, -14, -101, -12, -90, -72, -25, -72, -87, -14};
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
    msg.setTimeStamp(0.5162932086836517);
    msg.setSource(17949U);
    msg.setSourceEntity(89U);
    msg.setDestination(7219U);
    msg.setDestinationEntity(47U);
    msg.locale.assign("OWSSFQXIKPWNUGCUNOALUJGCBHXZIUNZGWDBXZXXHBOWTLUSEETIJHFRCGAMSEYPLBQKQMPKEPXERVLPNYTGDS");
    const char tmp_msg_0[] = {39, -97, -48, 67, -115, -101, 124, 67, 73, 85, 19, -103, 115, 41, 29, 23, 64, 126, -81, 100, 45, -55, 96, 86, 100, 107, -41, -38, -85, -31, 15, -126, -4, -3, -39, -3, 54, 76, -21, 30, -74, -115, 45, 58, -112, 93, -21, 24, 111, 121, -117, 41, 102, 113, 22, 31, 71, -121, -10, -122, -118, -80, -95, 0, -36, 103, -11, -11, 53, 49, 2, 81, 41, 126, -19, -50, 94, -8, 68, 65, 106, -62, 57, -115, 88, -3, -86, -28, 72, 43, -104, -79, 59, 20, 48, -3, -84, 88, -90, 3};
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
    msg.setTimeStamp(0.45264873817171947);
    msg.setSource(14106U);
    msg.setSourceEntity(175U);
    msg.setDestination(9589U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.6746520310786364);
    msg.setSource(48490U);
    msg.setSourceEntity(61U);
    msg.setDestination(21789U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.4208322225499397);
    msg.setSource(62691U);
    msg.setSourceEntity(73U);
    msg.setDestination(21438U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.780521602490583);
    msg.setSource(46754U);
    msg.setSourceEntity(100U);
    msg.setDestination(9190U);
    msg.setDestinationEntity(38U);
    msg.camid = 81U;
    msg.x = 8529U;
    msg.y = 7929U;

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
    msg.setTimeStamp(0.6138250868081705);
    msg.setSource(62603U);
    msg.setSourceEntity(65U);
    msg.setDestination(58825U);
    msg.setDestinationEntity(110U);
    msg.camid = 127U;
    msg.x = 46816U;
    msg.y = 35668U;

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
    msg.setTimeStamp(0.6608199210305108);
    msg.setSource(62225U);
    msg.setSourceEntity(42U);
    msg.setDestination(11336U);
    msg.setDestinationEntity(240U);
    msg.camid = 150U;
    msg.x = 27148U;
    msg.y = 17578U;

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
    msg.setTimeStamp(0.5090030913392329);
    msg.setSource(19381U);
    msg.setSourceEntity(125U);
    msg.setDestination(10289U);
    msg.setDestinationEntity(34U);
    msg.camid = 3U;
    msg.x = 26112U;
    msg.y = 10904U;

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
    msg.setTimeStamp(0.3464704133412241);
    msg.setSource(42883U);
    msg.setSourceEntity(133U);
    msg.setDestination(24083U);
    msg.setDestinationEntity(142U);
    msg.camid = 11U;
    msg.x = 43454U;
    msg.y = 64186U;

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
    msg.setTimeStamp(0.8063359936726051);
    msg.setSource(15048U);
    msg.setSourceEntity(136U);
    msg.setDestination(9356U);
    msg.setDestinationEntity(56U);
    msg.camid = 197U;
    msg.x = 6422U;
    msg.y = 52829U;

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
    msg.setTimeStamp(0.5601670927931738);
    msg.setSource(17462U);
    msg.setSourceEntity(17U);
    msg.setDestination(53214U);
    msg.setDestinationEntity(152U);
    msg.tracking = 230U;
    msg.lat = 0.031572521286702515;
    msg.lon = 0.17844965075792307;
    msg.x = 0.10328218453709981;
    msg.y = 0.30541978861167507;
    msg.z = 0.004430664596939526;

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
    msg.setTimeStamp(0.31833699199411414);
    msg.setSource(14146U);
    msg.setSourceEntity(192U);
    msg.setDestination(61650U);
    msg.setDestinationEntity(40U);
    msg.tracking = 105U;
    msg.lat = 0.389989154687041;
    msg.lon = 0.8903790476913284;
    msg.x = 0.40330783935109027;
    msg.y = 0.5888157568320452;
    msg.z = 0.583061527285969;

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
    msg.setTimeStamp(0.35136504443463745);
    msg.setSource(36183U);
    msg.setSourceEntity(40U);
    msg.setDestination(40526U);
    msg.setDestinationEntity(126U);
    msg.tracking = 91U;
    msg.lat = 0.31444623444012654;
    msg.lon = 0.4144930131922765;
    msg.x = 0.8460649057764172;
    msg.y = 0.16483877920282997;
    msg.z = 0.5041431806521623;

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
    msg.setTimeStamp(0.5127990704931906);
    msg.setSource(38846U);
    msg.setSourceEntity(73U);
    msg.setDestination(17833U);
    msg.setDestinationEntity(210U);
    msg.target.assign("ZJFMJTUJHXOOVMAPSPSYDWIXYFLLHYBIZOPOEJVKSWKMYJHXYUJNBTUDDQPCBNYSZBTFTHAHYVAAYDHGSQGVFZOAFQEXMBOMXVIRQWDDJLCCEBGAATFUMLGQLXFGDNFRNRSUVWML");
    msg.lbearing = 0.8551622573339971;
    msg.lelevation = 0.09547758852689159;
    msg.bearing = 0.13545582196652683;
    msg.elevation = 0.2785489450987705;
    msg.phi = 0.18805613791384135;
    msg.theta = 0.45567328385963957;
    msg.psi = 0.15858728094355146;
    msg.accuracy = 0.023837174474896083;

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
    msg.setTimeStamp(0.6040408885417827);
    msg.setSource(55369U);
    msg.setSourceEntity(230U);
    msg.setDestination(57382U);
    msg.setDestinationEntity(169U);
    msg.target.assign("DOHUVZYNDMLBRBHXCZQCIPXEPOHZUPCXFQMQKEAQLWNBRDHGEKJCGFVIIKDSZTPVMNSAKJFWRDSW");
    msg.lbearing = 0.9646219910353971;
    msg.lelevation = 0.4583416590599313;
    msg.bearing = 0.7555304599429475;
    msg.elevation = 0.6324803362270593;
    msg.phi = 0.05706073215859697;
    msg.theta = 0.6548623349053446;
    msg.psi = 0.19149072721675964;
    msg.accuracy = 0.014684056850152394;

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
    msg.setTimeStamp(0.7331356304913795);
    msg.setSource(33984U);
    msg.setSourceEntity(163U);
    msg.setDestination(47410U);
    msg.setDestinationEntity(147U);
    msg.target.assign("DDTXVTVQZRXJKAVPUTHEUNHAUQLCEDHTWMZHEOTTQFDGDFSQIZAZRKZSCLBWTWDMDONIPQSSYLIDFJQLPXCPUQYH");
    msg.lbearing = 0.04318660862561019;
    msg.lelevation = 0.6194568023613608;
    msg.bearing = 0.28116017303759266;
    msg.elevation = 0.026860435757293022;
    msg.phi = 0.48417012423561334;
    msg.theta = 0.27333860915077346;
    msg.psi = 0.9901245335577166;
    msg.accuracy = 0.4591034505326357;

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
    msg.setTimeStamp(0.859111127659523);
    msg.setSource(36951U);
    msg.setSourceEntity(192U);
    msg.setDestination(30960U);
    msg.setDestinationEntity(227U);
    msg.target.assign("CASDROKUQZXXVDILDCDZNQDJZSZQPEJTMEVOSJIKHCHTGJICMPRHZWXHBDLMATRIRVFJYENYGFDOBROFYOKEXDDPNOFVSYOFYULSKQCIXWKLZLMUKNYUZNBNKXPKPJAWRFZRNGSHGVNYBQWBIVQPAGESVGNENGAQWAZRHQJMSRAFUOJWIWCGYUWV");
    msg.x = 0.9840236842183582;
    msg.y = 0.21627620671713843;
    msg.z = 0.2845643223109886;
    msg.n = 0.763670740051;
    msg.e = 0.41582051471228365;
    msg.d = 0.0626594931476101;
    msg.phi = 0.33940419408435085;
    msg.theta = 0.3837772833671026;
    msg.psi = 0.8699888838065516;
    msg.accuracy = 0.26475748099860374;

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
    msg.setTimeStamp(0.5736289397718617);
    msg.setSource(41056U);
    msg.setSourceEntity(64U);
    msg.setDestination(8727U);
    msg.setDestinationEntity(73U);
    msg.target.assign("BJKUBABIJDHJFFSCYZBGNQBKHPFICGSYRPZAFKJAGEQYXTQWJHDCPTQQRWLIGWGCBNBDITAEDVHKVUIPHUHYOLTRZRABYGJMGEEGJYEMUMLVRAMOPMDOFHVSHYAGEUHLFFKQKKZJMKQWNXPDETSLUYNSBSDEFNLNIUZIZJXSGNWTOZMPWVWPOOVXIZBXSALMKUQTDXCOWXVZNVWALHFXUDLESRPAIW");
    msg.x = 0.7299634504226261;
    msg.y = 0.26641063730229286;
    msg.z = 0.3023437437368651;
    msg.n = 0.2569410177928737;
    msg.e = 0.5661673004790274;
    msg.d = 0.7980733084076563;
    msg.phi = 0.150095024676833;
    msg.theta = 0.5413502855471859;
    msg.psi = 0.24907594050611592;
    msg.accuracy = 0.21166057167258556;

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
    msg.setTimeStamp(0.3243591283530757);
    msg.setSource(41946U);
    msg.setSourceEntity(222U);
    msg.setDestination(48514U);
    msg.setDestinationEntity(62U);
    msg.target.assign("BNBLQQJSXRPEACJRNFXGQJQMELFWWMVUWGTPANGSDVVMOYVGVDDUCGHXWAOKJTLVBCENXRFJ");
    msg.x = 0.3929967567316729;
    msg.y = 0.7645622932796234;
    msg.z = 0.23475636250652743;
    msg.n = 0.29860340287301;
    msg.e = 0.8111877790574281;
    msg.d = 0.2730304849665842;
    msg.phi = 0.8339725386254577;
    msg.theta = 0.9931188274061928;
    msg.psi = 0.5484446998351197;
    msg.accuracy = 0.6885901685329435;

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
    msg.setTimeStamp(0.15321078671749666);
    msg.setSource(17984U);
    msg.setSourceEntity(243U);
    msg.setDestination(54700U);
    msg.setDestinationEntity(185U);
    msg.target.assign("DQBTTVURKURVKANYYXGGLQQPCAXBUDFKOWRMAIPYSJJUQWZFRYIXZBIIMBJNNDQNTCVCBFVQUIVRHKDDLOVYJSUZNFGORGUCQXPQNLFIZWXHMWEKHQTFLDMOOCBKHEUFLJXBBUHEXIDPMZCZEUFVYXVXMZPTVFPCSFJRJDWJKKBMTWGSMWOXYHZCEPAOSIYQWIOGLJLAWOCWOPZETELGDGZYMDHTLEHVPN");
    msg.lat = 0.7427660919091471;
    msg.lon = 0.539822787504511;
    msg.z_units = 128U;
    msg.z = 0.7877299988110584;
    msg.accuracy = 0.7132960379687694;

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
    msg.setTimeStamp(0.3002824270596366);
    msg.setSource(58814U);
    msg.setSourceEntity(111U);
    msg.setDestination(40226U);
    msg.setDestinationEntity(201U);
    msg.target.assign("QTSPBLAEEWMSGLTLPWOQNSILMXLWSJRJEXDUMTVJSAZCNKUNYCDKAACXOBZZVDGIOKUYFURPHUYAYQMRSGBIQANPBOZNXVWJLNEZHXFRYKBIUVRFEOYDPJWKSMTKIKAWULGQQCDPFZRICJ");
    msg.lat = 0.8014244970720719;
    msg.lon = 0.7544509490231748;
    msg.z_units = 168U;
    msg.z = 0.6408734856194632;
    msg.accuracy = 0.6900564670124063;

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
    msg.setTimeStamp(0.6449568211177868);
    msg.setSource(51379U);
    msg.setSourceEntity(49U);
    msg.setDestination(37671U);
    msg.setDestinationEntity(129U);
    msg.target.assign("GXWBMMVERJEQVQNLOKVGFWFBMWURVIJDZAJHNUBEOGTCIHVXULZSKFDITMZZCYPWSNVZOSWQZSUJGGYZJYIWQXDYVJHXYIFBNOLHOBKSFDYQOBCFJEEVPWXRPQPUVLGKNVAUAQHPIAEULUYNLLBMDHSROTFNBZCYYCAMLHTZDTJFFEQLRMXGRYDTUZTWRKTEDCRISSPX");
    msg.lat = 0.3824314183412775;
    msg.lon = 0.5174171865959873;
    msg.z_units = 28U;
    msg.z = 0.6465381839552868;
    msg.accuracy = 0.7041245265176156;

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
    msg.setTimeStamp(0.28918854622743906);
    msg.setSource(31810U);
    msg.setSourceEntity(70U);
    msg.setDestination(38246U);
    msg.setDestinationEntity(72U);
    msg.name.assign("STZWVPHOLQKFGGZIKLQTJIRLCXWEEGPIQSPBDPVTEFBTMVIAPMDHKWAERNDSDMFXSLGPSTTCQXCWZBOVZUDWBRMAYORRYCHYBEYWFXPRVLJXXKRHOUSEACIZSUUMNHWKASNBCYFVDPJUNTUMTQQYJYNOCUNWBFXMVGELDAQLSGUPOMNBOQONHZEZUIFHTWFGQPHVGKKORRDXLWXJMZYEIBJIDHQSJLKZNFUFKYJTCMCAABGL");
    msg.lat = 0.3002477921773429;
    msg.lon = 0.9387071936158028;
    msg.z = 0.9553010687410435;
    msg.z_units = 21U;

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
    msg.setTimeStamp(0.3544260867204153);
    msg.setSource(25103U);
    msg.setSourceEntity(53U);
    msg.setDestination(44064U);
    msg.setDestinationEntity(216U);
    msg.name.assign("QFXWEIGQXZBRXPXCXJIVWVSBCPMHDPWHQKNZSHSAOHDEKNUKNRCYUDPIVVCDROAGLNLOLMOQDPMFPAWFMEMTZVBZKJRWCEULGDMIONNPKLFKSATCHWSTKROTUCSGUIJAFCTGGGJLHBALMKZOJVJSEWOEUJZBVTOXZVYLSWKQACENFEBURNUSXDNDREYKFZBPUPMZZHXQLY");
    msg.lat = 0.0618268443176303;
    msg.lon = 0.6803706310906219;
    msg.z = 0.7743556900899659;
    msg.z_units = 92U;

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
    msg.setTimeStamp(0.5370168741049923);
    msg.setSource(3143U);
    msg.setSourceEntity(212U);
    msg.setDestination(30840U);
    msg.setDestinationEntity(83U);
    msg.name.assign("HAMOEDGDLNMHPBVBUYPIWEUDSXTFSRIGYQZCFQXFICVFYVZYGSFHKCJSVXHPLWFPWO");
    msg.lat = 0.7313075325609814;
    msg.lon = 0.930625386023884;
    msg.z = 0.6974986468896333;
    msg.z_units = 146U;

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
    msg.setTimeStamp(0.683018338394797);
    msg.setSource(7619U);
    msg.setSourceEntity(17U);
    msg.setDestination(60057U);
    msg.setDestinationEntity(13U);
    msg.op = 116U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ZYKAVCTUFLLZLRIJBYISWDGPOUSPXQEDIVWNOKBMXNGMOEADIYJKPPVDJPGZOXOCEWHGEFOMOFIDEDUNHEOTUHVANLGKENFAYFQRBCMDKLLRTPTGKJUJDFZ");
    tmp_msg_0.lat = 0.2929500270699765;
    tmp_msg_0.lon = 0.8392895474366252;
    tmp_msg_0.z = 0.11039941051787638;
    tmp_msg_0.z_units = 137U;
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
    msg.setTimeStamp(0.7555790354165373);
    msg.setSource(39200U);
    msg.setSourceEntity(62U);
    msg.setDestination(44353U);
    msg.setDestinationEntity(85U);
    msg.op = 15U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("AJAQVNMRTGNIDDROBNPTORXJGJSQZUXWNMEJMVOHLDQDABOZLBOFCQHUNPSWCSHLMRTNUDFIARUUYGGEUTLOILWQWVYKRMQZDTXJVGIGKGILWOZMSDZQTPSTEJUIOJBQHPPKKVSLZPSGIJPDNPADZKBSIBKHEXYBYKWECHNABSIHNRDKQWCFAF");
    tmp_msg_0.lat = 0.20906844522028745;
    tmp_msg_0.lon = 0.4855989365986092;
    tmp_msg_0.z = 0.49470013995140216;
    tmp_msg_0.z_units = 67U;
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
    msg.setTimeStamp(0.9747090063996802);
    msg.setSource(35037U);
    msg.setSourceEntity(115U);
    msg.setDestination(63695U);
    msg.setDestinationEntity(66U);
    msg.op = 207U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FSODTNCBAVRNUCYKCSIL");
    tmp_msg_0.lat = 0.10615436292939817;
    tmp_msg_0.lon = 0.9017215899543125;
    tmp_msg_0.z = 0.2769492308692125;
    tmp_msg_0.z_units = 166U;
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
    msg.setTimeStamp(0.8455486787980498);
    msg.setSource(16941U);
    msg.setSourceEntity(12U);
    msg.setDestination(24278U);
    msg.setDestinationEntity(143U);
    msg.value = 0.29465379135576086;
    msg.type = 96U;

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
    msg.setTimeStamp(0.6062449328423687);
    msg.setSource(13589U);
    msg.setSourceEntity(80U);
    msg.setDestination(6786U);
    msg.setDestinationEntity(136U);
    msg.value = 0.32531751950801824;
    msg.type = 108U;

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
    msg.setTimeStamp(0.636168737379808);
    msg.setSource(4830U);
    msg.setSourceEntity(174U);
    msg.setDestination(16653U);
    msg.setDestinationEntity(0U);
    msg.value = 0.22800346928573711;
    msg.type = 170U;

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
    msg.setTimeStamp(0.09844012509516853);
    msg.setSource(23199U);
    msg.setSourceEntity(108U);
    msg.setDestination(32439U);
    msg.setDestinationEntity(152U);
    msg.value = 0.610401612156466;

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
    msg.setTimeStamp(0.16470224856723648);
    msg.setSource(27890U);
    msg.setSourceEntity(87U);
    msg.setDestination(58217U);
    msg.setDestinationEntity(48U);
    msg.value = 0.8933784550900503;

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
    msg.setTimeStamp(0.963143937827559);
    msg.setSource(22641U);
    msg.setSourceEntity(61U);
    msg.setDestination(20119U);
    msg.setDestinationEntity(57U);
    msg.value = 0.34216351894177977;

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
    msg.setTimeStamp(0.2629546071358426);
    msg.setSource(34617U);
    msg.setSourceEntity(32U);
    msg.setDestination(26656U);
    msg.setDestinationEntity(115U);
    msg.timestamp_last_service = 0.12126201682121962;
    msg.time_next_service = 0.30770556961524587;
    msg.time_motor_next_service = 0.8808676750993609;
    msg.time_idle_ground = 0.623373512355959;
    msg.time_idle_air = 0.25599327639660074;
    msg.time_idle_water = 0.6577988472127176;
    msg.time_idle_underwater = 0.8036200944869194;
    msg.time_idle_unknown = 0.9334420649562476;
    msg.time_motor_ground = 0.5287947543158915;
    msg.time_motor_air = 0.25358088548466007;
    msg.time_motor_water = 0.7158825658409175;
    msg.time_motor_underwater = 0.9464237746239182;
    msg.time_motor_unknown = 0.39975570587825926;
    msg.rpm_min = 5615;
    msg.rpm_max = -893;
    msg.depth_max = 0.31186919200765106;

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
    msg.setTimeStamp(0.4094639162147734);
    msg.setSource(24907U);
    msg.setSourceEntity(234U);
    msg.setDestination(56001U);
    msg.setDestinationEntity(94U);
    msg.timestamp_last_service = 0.6060002742970162;
    msg.time_next_service = 0.6878581307899743;
    msg.time_motor_next_service = 0.01199405174108037;
    msg.time_idle_ground = 0.5103100903258825;
    msg.time_idle_air = 0.5088193910201217;
    msg.time_idle_water = 0.8839771081185067;
    msg.time_idle_underwater = 0.7682810132899802;
    msg.time_idle_unknown = 0.9434538667282122;
    msg.time_motor_ground = 0.8803344633796084;
    msg.time_motor_air = 0.41515801774501815;
    msg.time_motor_water = 0.06575569254884372;
    msg.time_motor_underwater = 0.8018921189304609;
    msg.time_motor_unknown = 0.15772957997455317;
    msg.rpm_min = -19705;
    msg.rpm_max = 14036;
    msg.depth_max = 0.9275626283013508;

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
    msg.setTimeStamp(0.8043515935723369);
    msg.setSource(7253U);
    msg.setSourceEntity(130U);
    msg.setDestination(46425U);
    msg.setDestinationEntity(3U);
    msg.timestamp_last_service = 0.8389919467714071;
    msg.time_next_service = 0.009466032532888913;
    msg.time_motor_next_service = 0.34043580507926674;
    msg.time_idle_ground = 0.1485599060992996;
    msg.time_idle_air = 0.46508665879811406;
    msg.time_idle_water = 0.524593709256687;
    msg.time_idle_underwater = 0.5649301780252587;
    msg.time_idle_unknown = 0.879772863925558;
    msg.time_motor_ground = 0.4499957641943356;
    msg.time_motor_air = 0.07652903286906743;
    msg.time_motor_water = 0.4975480429862952;
    msg.time_motor_underwater = 0.7317792543618616;
    msg.time_motor_unknown = 0.3090193049314547;
    msg.rpm_min = -17739;
    msg.rpm_max = 15449;
    msg.depth_max = 0.060945349647941294;

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
    msg.setTimeStamp(0.21909769715234217);
    msg.setSource(59884U);
    msg.setSourceEntity(56U);
    msg.setDestination(29498U);
    msg.setDestinationEntity(40U);
    msg.severity = 151U;
    msg.text.assign("YUIVRZJDBCZYBGKHJFSBNRATDBWVILHEGJHLRBNJPWHAGZOKKWYMEHXUCWMRIFZGWHTJKFKSGZBWPSTISETCAYRGFILCGNVOXQTDRSLJSPQIENUNYDXMRHYUZFNXCKWZWXCFUGWUJ");

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
    msg.setTimeStamp(0.6198755569513633);
    msg.setSource(20518U);
    msg.setSourceEntity(249U);
    msg.setDestination(24202U);
    msg.setDestinationEntity(82U);
    msg.severity = 146U;
    msg.text.assign("URZHCZZFSYWZAHSIPNGKNZLGPYEDMDUOTSLSGSWSFXVZLQYRHKPZMFAFAFTPRYAFIWXMHCEPCQGHTJNAJBTDRVOJHFEHMADSQKXPG");

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
    msg.setTimeStamp(0.6884606247754808);
    msg.setSource(22366U);
    msg.setSourceEntity(65U);
    msg.setDestination(54109U);
    msg.setDestinationEntity(43U);
    msg.severity = 232U;
    msg.text.assign("VNZYGCQTMGPVOOXGRGNAMQWXZGSIOKPMUKFLKLENAXODFJCWORPKVMFMBIGHEYWTBRUEAIQRHWYDVZQRRPACFTJSJSKNYYETBDVZJGQBZLAXBDHYVHHPZMYCKTZFEHFBSCZSNRCWPNEBMKOIWAYGVDBMRDXDXWQFUQLJVNIZOHFVCTJLSBBLEIDTUTUSRADNQGHCKTLFXMJZYICJUPYACHWIUUXEPINJSURXVPNFTLXISKWU");

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
    msg.setTimeStamp(0.38287134624556896);
    msg.setSource(58513U);
    msg.setSourceEntity(189U);
    msg.setDestination(13039U);
    msg.setDestinationEntity(241U);
    msg.channel = 25;
    msg.value = 1929513953;
    msg.gain = 133U;

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
    msg.setTimeStamp(0.020056837703832375);
    msg.setSource(40231U);
    msg.setSourceEntity(208U);
    msg.setDestination(43211U);
    msg.setDestinationEntity(78U);
    msg.channel = 82;
    msg.value = -1355595637;
    msg.gain = 145U;

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
    msg.setTimeStamp(0.2504445211817483);
    msg.setSource(42844U);
    msg.setSourceEntity(136U);
    msg.setDestination(49818U);
    msg.setDestinationEntity(89U);
    msg.channel = 55;
    msg.value = -398283424;
    msg.gain = 192U;

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
    msg.setTimeStamp(0.08434250891729578);
    msg.setSource(9506U);
    msg.setSourceEntity(113U);
    msg.setDestination(24691U);
    msg.setDestinationEntity(134U);
    msg.ch01 = 0.16648044027091968;
    msg.ch02 = 0.8946594197505592;
    msg.ch03 = 0.24950685804372041;
    msg.ch04 = 0.47053666344664347;
    msg.ch05 = 0.10294059044081127;
    msg.ch06 = 0.9539114916232911;
    msg.ch07 = 0.1989909882968084;
    msg.ch08 = 0.6344094519392599;
    msg.ch09 = 0.5530160654485708;
    msg.ch10 = 0.6705133761496986;
    msg.ch11 = 0.6309065395351655;
    msg.ch12 = 0.4780656731626901;
    msg.ch13 = 0.3318316388231768;
    msg.ch14 = 0.42520996273350353;
    msg.ch15 = 0.8854735699134587;
    msg.ch16 = 0.31342167519084674;

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
    msg.setTimeStamp(0.8777666201800419);
    msg.setSource(64908U);
    msg.setSourceEntity(103U);
    msg.setDestination(23131U);
    msg.setDestinationEntity(159U);
    msg.ch01 = 0.0573134588861377;
    msg.ch02 = 0.7066064890856032;
    msg.ch03 = 0.6570492358036459;
    msg.ch04 = 0.7828073314843556;
    msg.ch05 = 0.014305185859466829;
    msg.ch06 = 0.41573338075495625;
    msg.ch07 = 0.17960987051647503;
    msg.ch08 = 0.6762183878352386;
    msg.ch09 = 0.4468683600155089;
    msg.ch10 = 0.4670277179635137;
    msg.ch11 = 0.006905931123110776;
    msg.ch12 = 0.6431724358763672;
    msg.ch13 = 0.194674828777472;
    msg.ch14 = 0.5152821720201842;
    msg.ch15 = 0.3051202461175705;
    msg.ch16 = 0.42957662297310606;

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
    msg.setTimeStamp(0.33443716083206465);
    msg.setSource(401U);
    msg.setSourceEntity(5U);
    msg.setDestination(48166U);
    msg.setDestinationEntity(236U);
    msg.ch01 = 0.48384555380220384;
    msg.ch02 = 0.5664357273091252;
    msg.ch03 = 0.7613210326049371;
    msg.ch04 = 0.35446022947521194;
    msg.ch05 = 0.7649548367546943;
    msg.ch06 = 0.49659884084525374;
    msg.ch07 = 0.6953762060588271;
    msg.ch08 = 0.6040143012819524;
    msg.ch09 = 0.5657407457226804;
    msg.ch10 = 0.8223518723597184;
    msg.ch11 = 0.46686134112429967;
    msg.ch12 = 0.8232195729972794;
    msg.ch13 = 0.3128836493725349;
    msg.ch14 = 0.16964960531402995;
    msg.ch15 = 0.6988576314317896;
    msg.ch16 = 0.8410079203017489;

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
    msg.setTimeStamp(0.6642969995429352);
    msg.setSource(37789U);
    msg.setSourceEntity(246U);
    msg.setDestination(2533U);
    msg.setDestinationEntity(36U);
    msg.op = 127U;
    msg.lat = 0.056839297551588897;
    msg.lon = 0.37112817562444267;
    msg.height = 0.5841334090956946;
    msg.depth = 0.0015896258485909032;
    msg.alt = 0.4121138663259535;

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
    msg.setTimeStamp(0.5553610852732815);
    msg.setSource(7224U);
    msg.setSourceEntity(241U);
    msg.setDestination(11494U);
    msg.setDestinationEntity(65U);
    msg.op = 164U;
    msg.lat = 0.5573495572748721;
    msg.lon = 0.6816039260200051;
    msg.height = 0.49234323187397644;
    msg.depth = 0.020457215241142523;
    msg.alt = 0.07297253706589624;

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
    msg.setTimeStamp(0.49045376846334965);
    msg.setSource(61759U);
    msg.setSourceEntity(238U);
    msg.setDestination(6103U);
    msg.setDestinationEntity(76U);
    msg.op = 224U;
    msg.lat = 0.8587473240243579;
    msg.lon = 0.9452549624389834;
    msg.height = 0.631565263375071;
    msg.depth = 0.45228992013381975;
    msg.alt = 0.4216747021588799;

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
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.8405054738977294);
    msg.setSource(54456U);
    msg.setSourceEntity(81U);
    msg.setDestination(56453U);
    msg.setDestinationEntity(225U);
    msg.req_id = 31599U;
    msg.type = 175U;
    msg.init = 1984014662U;
    msg.end = 822855863U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.8316694403117465);
    msg.setSource(51543U);
    msg.setSourceEntity(30U);
    msg.setDestination(34032U);
    msg.setDestinationEntity(70U);
    msg.req_id = 973U;
    msg.type = 193U;
    msg.init = 251899840U;
    msg.end = 3630660921U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesQuery msg;
    msg.setTimeStamp(0.5873401197916641);
    msg.setSource(24877U);
    msg.setSourceEntity(185U);
    msg.setDestination(30356U);
    msg.setDestinationEntity(214U);
    msg.req_id = 62399U;
    msg.type = 174U;
    msg.init = 3149128620U;
    msg.end = 4255137099U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.09641584544063186);
    msg.setSource(29941U);
    msg.setSourceEntity(140U);
    msg.setDestination(13464U);
    msg.setDestinationEntity(80U);
    msg.req_id = 5645U;
    msg.type = 191U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("QLVODYOSPDFHMHJIXUVTEZDEKLHJSJEBQANQFYUCLYBNICSQHSLTJJEGOGJVRHFREGVQLQMEPWXBSWTPMGHVNIWGIPBGIUZYVMRFUCRHKQHFACUCYTRZGRWINYSUEKEKMCGHDEFRVVMRKCTQIS");
    tmp_msg_0.frag_number = 40360U;
    tmp_msg_0.num_frags = 29217U;
    const char tmp_tmp_msg_0_0[] = {-98, 45, 22, 81, -31, -77, 96, -28, 9, 38, -102, -17, 57, 78, 87, 31, 51, -21, 22, 93, 55, 54, 126, 63, 42, -7, -69, -12, 61, 77, 49, -4, 11, -75, 41, -115, 83, 110, -17, -16, 31, -95, -105, -25, 15, 126, -16, 57, -61, 91, 70, 93, 7, 63, -107, -102, -80, -93, -82, -19, -87, -110, -48, 58, 13, -69, 59, 4, 62, -10, -41, 40, 24, -93, -37, -17, 101, 11, -99, 58, 90, 118, 88, -10, -111, 40, -55, -108, -57, -115, 49, 19, -121, -113, -85, 121, -97, 8, -18, -75, -119, -111, 92, 49, -6, -26, -43, -99, -78, -70, 15, -65, 11, -69, -96, 115, 103, -76, 20, 50, -64, 68, -99, 3, -35, -53, -25, -115, -12, -116, 39, 41, 58, 70, -103, 16, -83, 53, -67, -12, 96, 28, 83, -123, 68, 54, 34, -41, 1, -12, -92, -80, -126, -119, -92, 28, -113, 40, 70, -98, -117, -94, 82, -78, -105, -59, 1, -105, -127, -128, 82, 90, 51, 115, 10, -107, -1, -53, -21, -50, -59, 58, -30, -112, 46, -4, -96, 63, 0, -9, -44, -21, 63, -9, 68, -86, -58, -125, 119, 60, 10, -120, 10, -122, -31, -107, 85, 9, 48, 107, -73, 85, -4, -11, 20, -3, -33, 17, -32, 29, 125, -78, 5, -96, 98, -3, 53, -47, -56, -113, 9, 16, 6, 74, 109, -64, -127, -64, 49};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.8597358299159596);
    msg.setSource(33798U);
    msg.setSourceEntity(40U);
    msg.setDestination(28609U);
    msg.setDestinationEntity(134U);
    msg.req_id = 55702U;
    msg.type = 60U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("FZNGYFBRYFHJTJXWGXBUAXBKLSWGBSHUPYPDKOTP");
    tmp_msg_0.frag_number = 26173U;
    tmp_msg_0.num_frags = 34812U;
    const char tmp_tmp_msg_0_0[] = {5, 119, -113, -33, -16, 68, 28, 98, -122, 18, -100, -13, -2, -46, 70, -122, 41, -111, -47, -128, 99, 16, -41, -79, 109, 27, 52, -124, 65, -44, 86, 69, -38, -64, -13, -127, -73, -31, -55, 49, -90, -56, 56, 39, 102, 66, 11, -33, -113, 47, -44, 68, 98, 91, -97, 96, -37, -11, -66, -78, -14, -6, -94, -59, 47, -94, 69, 109, -16, 38, 41, 20, -35, 110, -85, -66, 34, -101, -57, -72, -44, 27, 105, -74, -43, 54, 16, -113, 17, -46, 38, -3, 36, -55, -11, -33, 66, 71, 7, 106, 63, -113, -71, 58, 123, 107, 74, 50, -27, -37, -75, -31, -128, -34, 80, -34, 82, -121, 92, 109, -91, 101, -82, 80, 87, 45, 74, -85, 9, 116, 24, 49, -19, -17, -40, 21, 40, -105, -16, -5, -111, 60, 67, 86, -111, -71, 75, 111, 115, -112, -85, 69, 113, 37, 7, -19, -13, -67, 61, -76, 18, 72, 94, 97, -53, -79, 10, 45, 57, -121, 118, 106, 64, 112, 31, 68, -112, -8, -20, -104, 11, -72};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogFilesReply msg;
    msg.setTimeStamp(0.5882304707463972);
    msg.setSource(34972U);
    msg.setSourceEntity(44U);
    msg.setDestination(43907U);
    msg.setDestinationEntity(170U);
    msg.req_id = 8168U;
    msg.type = 219U;
    IMC::FileFragment tmp_msg_0;
    tmp_msg_0.id.assign("TCMNRTFLJVGPBKQAWHSWCBTRKIAOLVXANUCKKFLHBMXACCBPRPXDOLLHIIYIHKDQJFNFNZWWMYVVXOGJJPKBCNZPHYUORYTCJADRMUSMNHIGGWORYDJFZWVFJZNQJZERL");
    tmp_msg_0.frag_number = 12534U;
    tmp_msg_0.num_frags = 32263U;
    const char tmp_tmp_msg_0_0[] = {99, -96, 47, -107, 51, -103, -113, 59, 57, 58, -39, -72, -36, 5, 116, -72, 89, -65, 52, -68, -55, 65, -37, -85, -47, 77, 95, 42, 10, -52, -97, 86, -48, -55, -81, 23, 120, -128, 11, 94, -100, 94, -76, 4, 5, -109, 82, 21, 101, 95, -73, 49, -73, -96, -119, 92, 15, -11, -31, -102, 3, -80, 97, 52, -54, 91, 120, 106, 104, -86, -7, 27, -47, -105, 62, 20, 124, 90, -67, 52, -4, 64, -107, -85, 50, 43, 32, -36, 39, 61, 120, 45, -111, 61, -50, 8, 104, 123, -85, -17, -23, -20, -19, 33, -78, -126, 106, 113, 91, -15, -5, 75, 104, 55, 53, -114, 73, 94, -119, -59, -80, 2, -9, 92, -101, 67, -57, 26, -22, 32, 17, 57, 102, -5, 104, -4, -66, 44, -1, 77, 36, -58, 63, -112, -48, 97, 37, 23, 21, -38, -48, 77, -82, -30, 117, -77, 27, 16, -112, 93, 42, 48, -84, 104, -61, 94, 21, -44, 96, 124, 44, 23, -7, -73, 87, 126, -54, -85, 29, 93, 123, 30, 84, 8, -83, -21, -103, -60, -125, -79, -15, 96, 35};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogFilesReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.948951632713275);
    msg.setSource(1676U);
    msg.setSourceEntity(101U);
    msg.setDestination(52606U);
    msg.setDestinationEntity(236U);
    msg.id.assign("AFBKMEADNLSPABLBCICWMQUXPWHZTDPAWSFXLCJJOLDKUPVOKFEBEBNMQEHRGIVBFVHXYVOXQQLUYYSNUPXOWPZIZXGNEZQARGDULCVHUIHWIKLREMTHZLXRRWXCNCGSE");
    msg.frag_number = 381U;
    msg.num_frags = 20924U;
    const char tmp_msg_0[] = {5, 12, -102, -14, -65, -83, -107, 13, 115, -115, -60, 20, 60, 9, 49, -21, 87, -3, -54, -64, -117, 82, 6, -56, -55, -82, -125, -80, 27, -74, 119, -30, -114, -84, 89, -86, 121, -53, 19, 103, 75, -66, -90, -98, -86, -99, 40, -42, -125, -48, -33, -71, 51, -104, 24, 68, -95, -63, -99, -17, 90, -115, -125, 102, 80, -121, 22, 106, 118, -45, -104, -6, -106, -19, -84, 65, -86, 9, -97, -114, -99, 124, 4, -85, 93, -44, -82, -77, 88, -108, 6, -82, -109, -55, 2, -90, 46, -59, -93, -34, -38, -109, -11, 89, -32, -53, -49, 6, -65, 125, 3, 66, -110};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.311163357744773);
    msg.setSource(50570U);
    msg.setSourceEntity(34U);
    msg.setDestination(25558U);
    msg.setDestinationEntity(64U);
    msg.id.assign("CMZPUVCJWFESIJTDTMFUAXPMYREWRXNOLGLAUZAMJJBSKAXLQGKHLSKDNRTIWRMQJWMSLULXYCDPUVBPMUERFHFCOAIMPFITVEDZYQAOEYHLHJSGRDCYARSJOGRXRQKZNCXIEYSOBVADSGQCZGHGWEU");
    msg.frag_number = 48976U;
    msg.num_frags = 26114U;
    const char tmp_msg_0[] = {-71, -115, 51, -42, -49, 1, -9, -34, -70, 40, -11, -120, -91, 41, -2, -29, -89, 44, 71, -81, -21, 13, -14, 45, -23, 30, 19, 88, 17, -58, -72, -46};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FileFragment msg;
    msg.setTimeStamp(0.9207408972232106);
    msg.setSource(56837U);
    msg.setSourceEntity(245U);
    msg.setDestination(27222U);
    msg.setDestinationEntity(199U);
    msg.id.assign("CTZFFDSTDDMUOXSVEHFIPVUOFKZFUMNANEJECPVBJAYLUKLRHFMQICSRRITWKIODJXHAKBGYASPAXISOZZPTBNYNCYCWCNAPRKMLOBMXBBSORHXJQJAWQMWYWRFJYSZUSPLJRYGTWNHTAINXZZLEPQUVHMSODEGCIFICDLOLKEELXDBYQAM");
    msg.frag_number = 23133U;
    msg.num_frags = 19206U;
    const char tmp_msg_0[] = {-20, -95, -121, 39, -2, 67, 121, -44, -95, 97, -60, 44, 125, -102, -121, -64, -60, 50, -83, 53, -26, -19, 74, 11, 29, 67, -37, 88, 84, -56, 121, 102, -70, 57, 27, -88, -88, -19, 9, -109, -128, 79, 9, -84, 47, 59, -106, -115, 80, -72, 13, 11, -58, 123, 107, -21, -60, 77, 43, 9, 43, 35, -84, -114, -98, 124, -108, 90, 68, 47, -3, 117, -74, 126, -87, -122, 25, 102, 12, -85, -77, 94, -58, 126, 2, -87, 96, -61, -41, 79, 15, -65, 32, -76, 48, -103, -27, -115, 108, 99, -76, -60, -16, -80, 22, -43, -105, -10, 111, 79, -119, -120, 60, 38, -66, 11, -112, 21, -11, -31, -116, 64, -24, 73, 46, 124, 95, -101, 8, -15, 32, 110, 38, 101, 101, 61, 31, -21, -36, -46, -32, 59, 45, -99, 97, 1, -7, -33, -35, -115, -90, -93, -37, 33, 67, -78, 14, -82, -86, 11, 40, 112, 109, 58, 25, -44, -123, 0, -39, -67, 42, -49, -122, 75, 6, -107, 29, 109, -61, -38, 89, 45, 109, -107, -15, -86, -127, 21, -27, -54, 17, 30, -46, 69, -115, -44, 33, -116, -22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FileFragment #2", msg == *msg_d);
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
    msg.setTimeStamp(0.10611823373150187);
    msg.setSource(46775U);
    msg.setSourceEntity(68U);
    msg.setDestination(9575U);
    msg.setDestinationEntity(25U);
    msg.nbeams = 105U;
    msg.ncells = 242U;
    msg.coord_sys = 61U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.6885919853892226;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.14100418403177417;
    tmp_tmp_msg_0_0.amp = 0.6783555111097169;
    tmp_tmp_msg_0_0.cor = 56U;
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
    msg.setTimeStamp(0.9118588550752887);
    msg.setSource(32776U);
    msg.setSourceEntity(12U);
    msg.setDestination(6007U);
    msg.setDestinationEntity(176U);
    msg.nbeams = 122U;
    msg.ncells = 71U;
    msg.coord_sys = 218U;

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
    msg.setTimeStamp(0.24102493144617154);
    msg.setSource(33239U);
    msg.setSourceEntity(251U);
    msg.setDestination(38240U);
    msg.setDestinationEntity(252U);
    msg.nbeams = 231U;
    msg.ncells = 208U;
    msg.coord_sys = 243U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.23772273025802504;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.0835624858935824;
    tmp_tmp_msg_0_0.amp = 0.2316405009835626;
    tmp_tmp_msg_0_0.cor = 188U;
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
    msg.setTimeStamp(0.1230338080623391);
    msg.setSource(59092U);
    msg.setSourceEntity(109U);
    msg.setDestination(2206U);
    msg.setDestinationEntity(213U);
    msg.cell_position = 0.3144422479271637;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6549758567787539;
    tmp_msg_0.amp = 0.834848143279907;
    tmp_msg_0.cor = 11U;
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
    msg.setTimeStamp(0.5863452394245767);
    msg.setSource(27251U);
    msg.setSourceEntity(169U);
    msg.setDestination(33926U);
    msg.setDestinationEntity(220U);
    msg.cell_position = 0.3202299606699438;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6382533633390102;
    tmp_msg_0.amp = 0.37709018472259537;
    tmp_msg_0.cor = 6U;
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
    msg.setTimeStamp(0.09185980695376028);
    msg.setSource(35886U);
    msg.setSourceEntity(96U);
    msg.setDestination(59644U);
    msg.setDestinationEntity(202U);
    msg.cell_position = 0.044697234056671364;

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
    msg.setTimeStamp(0.6273786627210578);
    msg.setSource(48522U);
    msg.setSourceEntity(137U);
    msg.setDestination(30751U);
    msg.setDestinationEntity(97U);
    msg.vel = 0.5298760172679402;
    msg.amp = 0.8611025838936381;
    msg.cor = 176U;

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
    msg.setTimeStamp(0.9460829924590161);
    msg.setSource(38861U);
    msg.setSourceEntity(43U);
    msg.setDestination(8059U);
    msg.setDestinationEntity(113U);
    msg.vel = 0.5284424177732014;
    msg.amp = 0.8253357973124282;
    msg.cor = 146U;

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
    msg.setTimeStamp(0.9254582479422996);
    msg.setSource(26478U);
    msg.setSourceEntity(174U);
    msg.setDestination(49960U);
    msg.setDestinationEntity(109U);
    msg.vel = 0.1081538604547514;
    msg.amp = 0.6403667373501741;
    msg.cor = 64U;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.441939084848038);
    msg.setSource(30455U);
    msg.setSourceEntity(117U);
    msg.setDestination(9971U);
    msg.setDestinationEntity(219U);
    msg.value = 0.22102637475069042;

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
    msg.setTimeStamp(0.9019890174392732);
    msg.setSource(22857U);
    msg.setSourceEntity(24U);
    msg.setDestination(7070U);
    msg.setDestinationEntity(136U);
    msg.value = 0.0485218796389113;

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
    msg.setTimeStamp(0.5722472691496172);
    msg.setSource(40434U);
    msg.setSourceEntity(118U);
    msg.setDestination(15925U);
    msg.setDestinationEntity(163U);
    msg.value = 0.043419241579795265;

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

  return test.getReturnValue();
}
