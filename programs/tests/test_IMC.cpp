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
// IMC XML MD5: b6cb49aa5642d80650daf495a50ba0dd                            *
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
    msg.setTimeStamp(0.8497784916047979);
    msg.setSource(46473U);
    msg.setSourceEntity(248U);
    msg.setDestination(36947U);
    msg.setDestinationEntity(113U);
    msg.state = 67U;
    msg.flags = 61U;
    msg.description.assign("DZPTVIMSOHGSYRWCWYCNUKNOWELAKXPLUZQDFBKXJBFRFMWNAOTWHGRAGUFSVPJVRZNDUUHIYOEJEJETFFOVKHXHDMSTGMBDDCQERAORIQPSXHCF");

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
    msg.setTimeStamp(0.09116490219832496);
    msg.setSource(38388U);
    msg.setSourceEntity(219U);
    msg.setDestination(7718U);
    msg.setDestinationEntity(230U);
    msg.state = 24U;
    msg.flags = 198U;
    msg.description.assign("AOYFEABCBBXTLCNTFAYMSCOZJJKKIOBIETJBAUSLBCNAWXMNRXHMWRRRPTWNMKOHHCINMAXMJQYKDTWKNOWEEXSSARKLKJEUPL");

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
    msg.setTimeStamp(0.08752351287929261);
    msg.setSource(32846U);
    msg.setSourceEntity(87U);
    msg.setDestination(50064U);
    msg.setDestinationEntity(55U);
    msg.state = 117U;
    msg.flags = 153U;
    msg.description.assign("BOCKWOXCVNRYRSFHQSGNQOSESTRKUMP");

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
    msg.setTimeStamp(0.4253931859044764);
    msg.setSource(53800U);
    msg.setSourceEntity(2U);
    msg.setDestination(45987U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.1573771729681417);
    msg.setSource(52557U);
    msg.setSourceEntity(234U);
    msg.setDestination(29871U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.003394843737483444);
    msg.setSource(35654U);
    msg.setSourceEntity(254U);
    msg.setDestination(28699U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.6675517318590268);
    msg.setSource(33293U);
    msg.setSourceEntity(89U);
    msg.setDestination(58049U);
    msg.setDestinationEntity(85U);
    msg.id = 159U;
    msg.label.assign("TNRHBNYDWGMWVXUARQUKSPCRAHBWJWIMJOACLLAEHHWTYHLEGPBJDHYNYEZH");
    msg.component.assign("ACZLUZJQAMFOMANYSWJBUPVEZQHIZZEYOKJKDFUSPGTCUTSHUMOHRURKPLFCVMGBWMTODNHXEXNCVOXDVDAGY");
    msg.act_time = 13685U;
    msg.deact_time = 36419U;

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
    msg.setTimeStamp(0.3335370507639547);
    msg.setSource(496U);
    msg.setSourceEntity(52U);
    msg.setDestination(9753U);
    msg.setDestinationEntity(63U);
    msg.id = 201U;
    msg.label.assign("ARULRXFZYIFZUVRNSMJEMBURNYRZJVJPSFDZFBGVWXKWYFWYUAWNDDSAHTLWTFWENOOQUESDKNQ");
    msg.component.assign("XGOYSXYGDNUDPWSIDFNMXQQVHYXMGQJTAYQPDOAHXMSLHEOXBFHFZZTWJOWUTCVVVKPKAOOEBGYXMJKCZT");
    msg.act_time = 59809U;
    msg.deact_time = 29764U;

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
    msg.setTimeStamp(0.07026835418974242);
    msg.setSource(62748U);
    msg.setSourceEntity(173U);
    msg.setDestination(65283U);
    msg.setDestinationEntity(110U);
    msg.id = 11U;
    msg.label.assign("ZWZAFYPFWZQEZNIPBZBKOWBEECTVGLVNSGTAUDJCFSOARUJVUZMQGCUJVQCNPMVBEPPJYDTUCGWTHQOTMYOYNXO");
    msg.component.assign("BCOJWFJRUJQCDBQFHZWSZUTEHCTZEHOJHPTYDCKARLXYJHLIIYAAMXVHFZQKWGAWWCBFRIZEOZ");
    msg.act_time = 9409U;
    msg.deact_time = 32340U;

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
    msg.setTimeStamp(0.29245798012070956);
    msg.setSource(22331U);
    msg.setSourceEntity(213U);
    msg.setDestination(20358U);
    msg.setDestinationEntity(237U);
    msg.id = 126U;

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
    msg.setTimeStamp(0.3031221415912342);
    msg.setSource(29121U);
    msg.setSourceEntity(155U);
    msg.setDestination(51236U);
    msg.setDestinationEntity(196U);
    msg.id = 47U;

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
    msg.setTimeStamp(0.2970936602508857);
    msg.setSource(59864U);
    msg.setSourceEntity(222U);
    msg.setDestination(21491U);
    msg.setDestinationEntity(148U);
    msg.id = 46U;

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
    msg.setTimeStamp(0.8546270411839322);
    msg.setSource(899U);
    msg.setSourceEntity(64U);
    msg.setDestination(326U);
    msg.setDestinationEntity(125U);
    msg.op = 15U;
    msg.list.assign("AMRTUCPVDFKFVRLXJFEJGNUGUVVSKOLFWQOTQEGBKHCFPOLXYILKL");

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
    msg.setTimeStamp(0.2588642174551984);
    msg.setSource(5433U);
    msg.setSourceEntity(55U);
    msg.setDestination(52671U);
    msg.setDestinationEntity(27U);
    msg.op = 160U;
    msg.list.assign("ZAKZXPRRHJZESVCCVGYFXCRKO");

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
    msg.setTimeStamp(0.9086812423331441);
    msg.setSource(11901U);
    msg.setSourceEntity(44U);
    msg.setDestination(10885U);
    msg.setDestinationEntity(65U);
    msg.op = 181U;
    msg.list.assign("PZNYLXTBQUVPIAXZXQFIVOERWVTGIKMFMOFTIERFOUOGNDYHMRWPXYPAUHWJGUCWOTDLWSRXASVGFLYIJJVXLFC");

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
    msg.setTimeStamp(0.4280972286561133);
    msg.setSource(54341U);
    msg.setSourceEntity(217U);
    msg.setDestination(64132U);
    msg.setDestinationEntity(22U);
    msg.value = 102U;

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
    msg.setTimeStamp(0.7636618424671738);
    msg.setSource(50911U);
    msg.setSourceEntity(199U);
    msg.setDestination(51528U);
    msg.setDestinationEntity(127U);
    msg.value = 238U;

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
    msg.setTimeStamp(0.762072914341389);
    msg.setSource(63209U);
    msg.setSourceEntity(185U);
    msg.setDestination(41876U);
    msg.setDestinationEntity(114U);
    msg.value = 183U;

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
    msg.setTimeStamp(0.4752065997458721);
    msg.setSource(52936U);
    msg.setSourceEntity(82U);
    msg.setDestination(49418U);
    msg.setDestinationEntity(183U);
    msg.consumer.assign("MPSKYAYIUQCWCWXEFLDQQOUXTMEULBUGUMMWXBKR");
    msg.message_id = 49499U;

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
    msg.setTimeStamp(0.9209196565180221);
    msg.setSource(706U);
    msg.setSourceEntity(78U);
    msg.setDestination(43191U);
    msg.setDestinationEntity(127U);
    msg.consumer.assign("UYSSTHGLHYTFQAVKZUNHJKHGLGZJWAXTMAFNCPCNMFVDUCOQRCITQ");
    msg.message_id = 14200U;

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
    msg.setTimeStamp(0.5667088013258502);
    msg.setSource(60593U);
    msg.setSourceEntity(68U);
    msg.setDestination(53659U);
    msg.setDestinationEntity(184U);
    msg.consumer.assign("EOAJFTMBWAUSRGTGIYEIAVILFBVFBIWVHYFEBQAFJKO");
    msg.message_id = 6914U;

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
    msg.setTimeStamp(0.07126269181018174);
    msg.setSource(63171U);
    msg.setSourceEntity(211U);
    msg.setDestination(58717U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.9594513799731832);
    msg.setSource(47862U);
    msg.setSourceEntity(6U);
    msg.setDestination(24504U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.03738852795330627);
    msg.setSource(33159U);
    msg.setSourceEntity(6U);
    msg.setDestination(43127U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.604017630768376);
    msg.setSource(2335U);
    msg.setSourceEntity(243U);
    msg.setDestination(50144U);
    msg.setDestinationEntity(108U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.7447710965088179);
    msg.setSource(59290U);
    msg.setSourceEntity(142U);
    msg.setDestination(51862U);
    msg.setDestinationEntity(106U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.767900956670915);
    msg.setSource(5162U);
    msg.setSourceEntity(113U);
    msg.setDestination(20576U);
    msg.setDestinationEntity(96U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.648501508334921);
    msg.setSource(13165U);
    msg.setSourceEntity(237U);
    msg.setDestination(56876U);
    msg.setDestinationEntity(135U);
    msg.total_steps = 161U;
    msg.step_number = 196U;
    msg.step.assign("WUPTOFNKVWPIMPSGFEWVVCFKYOZJTEDUJEGFFSHZROXFOXNZBCEZCAIJRBHIRVVNESHJHJYRMEUSZXZTJMAZQTWSBNKBNAQDWPWLCHPWFRTTNLVWLQGCEOSGLYGDYKRNIODNMEIILRSTXQICXQWYKQDGYTHGCQGYFEDCKBDJAVBNWYSOUDXQBUMPSAMTRVMOIIHFHAMKAMZDTJBJQZDXEOXLOKLPVCA");
    msg.flags = 134U;

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
    msg.setTimeStamp(0.846262278651008);
    msg.setSource(64125U);
    msg.setSourceEntity(193U);
    msg.setDestination(61211U);
    msg.setDestinationEntity(51U);
    msg.total_steps = 105U;
    msg.step_number = 78U;
    msg.step.assign("RHBCZPNSSMJAXBHKJLIAJXZYBOKNKEWOQIGPCBEEOIKXMVEROIAVRSFMDPDECMLHIWUUCRIAZUHHSUFKGAILNFIDSZWEFTUCAROLXUKDOGSXYIPHWMLHXYRMOOBWOLGRELHNBSDYJHNVYIJNKWSZCTQQFDJXYZNGEEUDLFNYTVMFVMXUPMJFQAFZTVLRNQDTKAPDWTERX");
    msg.flags = 61U;

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
    msg.setTimeStamp(0.8321613931147901);
    msg.setSource(48697U);
    msg.setSourceEntity(209U);
    msg.setDestination(14779U);
    msg.setDestinationEntity(110U);
    msg.total_steps = 34U;
    msg.step_number = 149U;
    msg.step.assign("VIHWPJZLHJUOZWYMHBOHFYFMEKXQEVAMRBNZFAGTFSCYSJKCZKQIDJEIOSIWEPGSGLKNPYRBSNUDMMBEGXMAXXSOBAKRFXASQZNSHQP");
    msg.flags = 17U;

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
    msg.setTimeStamp(0.3633301194701538);
    msg.setSource(5026U);
    msg.setSourceEntity(95U);
    msg.setDestination(7458U);
    msg.setDestinationEntity(120U);
    msg.state = 45U;
    msg.error.assign("QUHNYNWKKUSZSSLVIIFRAXIXWSPVLIDMGGHJXBQHPYICXAYRKTAFZMIENQOIDYMMZMPBPZQDCDDJEMFPUTVBCGHUZBXQGLOBEYLGKBFSKJWORVYTNJHNPZVQUKMPFDQOZVUCXTSGBGGVRQNNZAJERJSTLWXCAAXOYEUIVSELKBWTKAEZHMUEONCBCHMZSQE");

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
    msg.setTimeStamp(0.004011867251188184);
    msg.setSource(33270U);
    msg.setSourceEntity(149U);
    msg.setDestination(6553U);
    msg.setDestinationEntity(134U);
    msg.state = 70U;
    msg.error.assign("RPUDPTSUOPQFAESTQGXURXZTKABACRVYMHJOMEBQONTHVGGLHHYVDFKYINFNJJFXTWCNRELOTGBJKBBTIUDUZACRWEXIVLNKWILBOZYMWGBSKDEYXXDJFCZLDZYQSXMKPTIIHYHGLSMCZPCKYELEFALUIMVRJCVUOQANSQOSAOSQWMHYIKFBGFCDXUHEQXPJGKPHNPPVNRFOVCS");

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
    msg.setTimeStamp(0.8391333817747728);
    msg.setSource(54855U);
    msg.setSourceEntity(40U);
    msg.setDestination(11708U);
    msg.setDestinationEntity(203U);
    msg.state = 180U;
    msg.error.assign("UCPBHSVJAOTDYTJFGJKHTIILYVOIMSSFIEGONDFJZEUWJRWBIRAYJHVMGZK");

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
    msg.setTimeStamp(0.3734416151371086);
    msg.setSource(54527U);
    msg.setSourceEntity(42U);
    msg.setDestination(26992U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.4476950018989144);
    msg.setSource(40235U);
    msg.setSourceEntity(139U);
    msg.setDestination(29620U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.44623831175865236);
    msg.setSource(43177U);
    msg.setSourceEntity(238U);
    msg.setDestination(6730U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.6484919580843617);
    msg.setSource(38588U);
    msg.setSourceEntity(25U);
    msg.setDestination(28013U);
    msg.setDestinationEntity(16U);
    msg.op = 40U;
    msg.speed_min = 0.23125115338896984;
    msg.speed_max = 0.8109213854624155;
    msg.long_accel = 0.775595194666791;
    msg.alt_max_msl = 0.7110629423017703;
    msg.dive_fraction_max = 0.748443937989238;
    msg.climb_fraction_max = 0.8187982213445785;
    msg.bank_max = 0.6036203232311329;
    msg.p_max = 0.0029453535073623582;
    msg.pitch_min = 0.5885213476106758;
    msg.pitch_max = 0.02874208185482041;
    msg.q_max = 0.21225841563598224;
    msg.g_min = 0.7808097096581855;
    msg.g_max = 0.7057555441666349;
    msg.g_lat_max = 0.8816589774999879;
    msg.rpm_min = 0.20148138807252813;
    msg.rpm_max = 0.057541042684881916;
    msg.rpm_rate_max = 0.41500400954606753;

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
    msg.setTimeStamp(0.16311313549750572);
    msg.setSource(39431U);
    msg.setSourceEntity(212U);
    msg.setDestination(13165U);
    msg.setDestinationEntity(240U);
    msg.op = 30U;
    msg.speed_min = 0.5604564979885116;
    msg.speed_max = 0.3094803167237792;
    msg.long_accel = 0.014326595748022086;
    msg.alt_max_msl = 0.20412122677016376;
    msg.dive_fraction_max = 0.7612560148589127;
    msg.climb_fraction_max = 0.06264903468320482;
    msg.bank_max = 0.5692396140251857;
    msg.p_max = 0.9767890872347851;
    msg.pitch_min = 0.23762336930300587;
    msg.pitch_max = 0.5248921571514589;
    msg.q_max = 0.4904900294145348;
    msg.g_min = 0.7362006819334607;
    msg.g_max = 0.8063864596641518;
    msg.g_lat_max = 0.9709653833243389;
    msg.rpm_min = 0.8841014731697843;
    msg.rpm_max = 0.08701942472843738;
    msg.rpm_rate_max = 0.02366950134366086;

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
    msg.setTimeStamp(0.09747089104422946);
    msg.setSource(21133U);
    msg.setSourceEntity(64U);
    msg.setDestination(7542U);
    msg.setDestinationEntity(4U);
    msg.op = 36U;
    msg.speed_min = 0.36024786389508456;
    msg.speed_max = 0.7993754337241952;
    msg.long_accel = 0.05776280768140285;
    msg.alt_max_msl = 0.17623607582443868;
    msg.dive_fraction_max = 0.46171124170116495;
    msg.climb_fraction_max = 0.3324095470215984;
    msg.bank_max = 0.5079060363970148;
    msg.p_max = 0.8396432958407803;
    msg.pitch_min = 0.31176411837200035;
    msg.pitch_max = 0.699066783875075;
    msg.q_max = 0.8980413579640197;
    msg.g_min = 0.5084815866846186;
    msg.g_max = 0.7132076982691716;
    msg.g_lat_max = 0.7625759806892676;
    msg.rpm_min = 0.17818387335891572;
    msg.rpm_max = 0.6337975314864281;
    msg.rpm_rate_max = 0.5754705513702969;

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
    msg.setTimeStamp(0.7252840987238449);
    msg.setSource(48860U);
    msg.setSourceEntity(31U);
    msg.setDestination(7687U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.6785859665562591);
    msg.setSource(49560U);
    msg.setSourceEntity(209U);
    msg.setDestination(31059U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.7971673082691766);
    msg.setSource(48017U);
    msg.setSourceEntity(139U);
    msg.setDestination(28547U);
    msg.setDestinationEntity(154U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4470650846334082;
    tmp_msg_0.lon = 0.7888883182812058;
    tmp_msg_0.height = 0.7144221493706409;
    tmp_msg_0.x = 0.40087400911706206;
    tmp_msg_0.y = 0.315930226827299;
    tmp_msg_0.z = 0.20265821932944617;
    tmp_msg_0.phi = 0.608602715093671;
    tmp_msg_0.theta = 0.9622620187820428;
    tmp_msg_0.psi = 0.8611770608891874;
    tmp_msg_0.u = 0.016746787148785414;
    tmp_msg_0.v = 0.7370348443216214;
    tmp_msg_0.w = 0.852332361754034;
    tmp_msg_0.vx = 0.9167921320217528;
    tmp_msg_0.vy = 0.8612842505017323;
    tmp_msg_0.vz = 0.7500758205495979;
    tmp_msg_0.p = 0.18908542597788824;
    tmp_msg_0.q = 0.6340352365501147;
    tmp_msg_0.r = 0.9115943525272588;
    tmp_msg_0.depth = 0.2690270138803925;
    tmp_msg_0.alt = 0.4774983871638733;
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
    msg.setTimeStamp(0.4883758029393017);
    msg.setSource(57941U);
    msg.setSourceEntity(169U);
    msg.setDestination(35105U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.04578963315071938;
    msg.lon = 0.4387461759196115;
    msg.height = 0.8114810908880019;
    msg.x = 0.6384442391889333;
    msg.y = 0.7255365633064547;
    msg.z = 0.7442417497681049;
    msg.phi = 0.9928465057322478;
    msg.theta = 0.1169013004491587;
    msg.psi = 0.8479610288322341;
    msg.u = 0.01548015499882227;
    msg.v = 0.3369113147654216;
    msg.w = 0.0842884723194528;
    msg.p = 0.9739672231126894;
    msg.q = 0.2573575773422575;
    msg.r = 0.8850288969465934;
    msg.svx = 0.6610908806898896;
    msg.svy = 0.5410491389838695;
    msg.svz = 0.40671103862882463;

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
    msg.setTimeStamp(0.6098440200670708);
    msg.setSource(46470U);
    msg.setSourceEntity(23U);
    msg.setDestination(15349U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.7901058531547708;
    msg.lon = 0.6444020319724775;
    msg.height = 0.38470056557846743;
    msg.x = 0.08055667999336313;
    msg.y = 0.5136152076524575;
    msg.z = 0.07134144336634418;
    msg.phi = 0.327250823366262;
    msg.theta = 0.76089071759446;
    msg.psi = 0.7067604090112668;
    msg.u = 0.1741535790360097;
    msg.v = 0.7298640199181705;
    msg.w = 0.12843261457316746;
    msg.p = 0.5811162473081457;
    msg.q = 0.856478007920195;
    msg.r = 0.9690613596817574;
    msg.svx = 0.8155564642132185;
    msg.svy = 0.07726050820907349;
    msg.svz = 0.5559428825381596;

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
    msg.setTimeStamp(0.20371994410970362);
    msg.setSource(44643U);
    msg.setSourceEntity(133U);
    msg.setDestination(11344U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.9107801205618771;
    msg.lon = 0.34042680187122043;
    msg.height = 0.213570500290852;
    msg.x = 0.632407804390762;
    msg.y = 0.3393878677044183;
    msg.z = 0.6936335786628449;
    msg.phi = 0.6292450337333595;
    msg.theta = 0.48088258733719347;
    msg.psi = 0.34853338760585284;
    msg.u = 0.2916262165997009;
    msg.v = 0.325981271299996;
    msg.w = 0.6613611966717085;
    msg.p = 0.2348471735511367;
    msg.q = 0.719446651065677;
    msg.r = 0.5380421388454928;
    msg.svx = 0.772959807282844;
    msg.svy = 0.8319678798390808;
    msg.svz = 0.7731179901581858;

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
    msg.setTimeStamp(0.17405173103372407);
    msg.setSource(32975U);
    msg.setSourceEntity(218U);
    msg.setDestination(766U);
    msg.setDestinationEntity(127U);
    msg.op = 103U;
    msg.entities.assign("RWVJUHGBXRNDHLRQXOWUBVRECFBPLLMXQGDLZLTXJYPACCBLAJQIHKJYSHCFSSKWPOPEVRKXEFRLYIBDQWTQFXAOGFDGRQXNDVKUCWBAUCADHJCTCEYYKRAFYOHWGRESGOEODJGJMUQINYZETSEHLVFIJUQZYMTPIISUDPNNTETAJWMIXZAXVSIYWVMBDOVZNPFIGTPVOXZBNGUDAZKNOUZHFUPZCOSBFQJETMIHKKCPNV");

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
    msg.setTimeStamp(0.4587524143534708);
    msg.setSource(12131U);
    msg.setSourceEntity(230U);
    msg.setDestination(9013U);
    msg.setDestinationEntity(192U);
    msg.op = 225U;
    msg.entities.assign("CXOQLSCFKGTWMXQVKDTYTFEDLIUJWNNHFLVCYHZKRVOMNETITWCMYIVCLFGPAQSXNNWQIO");

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
    msg.setTimeStamp(0.8046486296365388);
    msg.setSource(22222U);
    msg.setSourceEntity(8U);
    msg.setDestination(11589U);
    msg.setDestinationEntity(229U);
    msg.op = 105U;
    msg.entities.assign("DTERNUTMLYZTLBRCRMJPPCZTYXJLHXJRRSZIADRQXSYAWAGBGXBEGMQJSLJBHZKUVRQNVDEIFHISNZHCIBWBFIOKCWCVMCLGPUXZKYIDIRXXAQKMGLVEXWFUQKODYPFUXTNHLONVIGCWPJVMWXLNKSWCAYUTGOOFYEQAMQUDSJPOOFNGZTAAYNQHIOMAJTFVFUKGKPPKRGCVHBYNDMBAWVHSFOPTRJJUEKBDWHEVFDTSMSNQ");

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
    msg.setTimeStamp(0.8572894054315215);
    msg.setSource(49156U);
    msg.setSourceEntity(82U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(125U);
    msg.type = 252U;
    msg.speed = 33349U;
    const char tmp_msg_0[] = {77, 14, -117, 10, 98, -98, 109, -37, 101, 106, -89, -73, 12, -126, -55, 51, 0, -55, 112, 59, 14, -38, -71, -68, -71, -39, 89, -51, -98, -8, 54, -68, -123, -128, -79, -110, 34, 11, -68, -93, 126, -85, 52};
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
    msg.setTimeStamp(0.5659245313817647);
    msg.setSource(32131U);
    msg.setSourceEntity(110U);
    msg.setDestination(47693U);
    msg.setDestinationEntity(167U);
    msg.type = 148U;
    msg.speed = 44399U;
    const char tmp_msg_0[] = {69, -65, 89, 7, -23, -83, -52, 35, 101, 48, -110, 11, 118, 64, -9, 13, -47, 27, 28, -71, -14, 83, 75, 55, -84, 43, -1, -122, -54, 77, -87, 108, -72, 30, 20, -124, -101, -97, 76, -63, -113, 116, 16, 99, -102, -72, -72, 45, -50, 99, 104, -30, -30, -109, -18, -65, 100, 63, -78, 77, -126, 31, 4, 88, 9, 108, 8, -17, -76, 103, -86, 113, 61, -2, 52, 29, 46, -85, -57, 88, -112, -73, 20, -17, -48, -92, 103, 7, -119, -83, -80, -84, -48, 79, -90, 98, 91, -74, 109, -106, 118, -88, -93, -38, -5, 111, -121, -65, 41, -93, 57, 13, -93, -106, -57, 100, -76, -105, 126, -61, 50, -25, -83, 113, 80, -78, -77, 77, 65, -2, -33, 16, 35, -32, -98, 86, -9, 105, -24, 48, 45, -79, -65, -72, 86, -114, -89, 16, 125, -36, -65, 90, 121, 67, -53, -67, -122, -95, 73, 86, -110, -23, -60, 118, -66, -81, -80, 61, 111, -118, -55, -75, -100, -127, 29, -85, -7, 105, -2};
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
    msg.setTimeStamp(0.24570899966560966);
    msg.setSource(19852U);
    msg.setSourceEntity(40U);
    msg.setDestination(2701U);
    msg.setDestinationEntity(200U);
    msg.type = 233U;
    msg.speed = 63154U;
    const char tmp_msg_0[] = {-109, -10, 101, -108, 9, -70, 6, -3, 123, -74, 120, 112, 100, -23, 29, -100, 124, -24, -92, 30, -62, -87, -95, -22, 41, -94, 12, -18, -11, -118, 104, -107, -49, -68, 84, 81, -80, -119, 89, 65, 70, 36, 48, 96, -126, 81, 3, -115, 54, -18, 12, -106, -57, -30, 2};
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
    msg.setTimeStamp(0.7269890451507695);
    msg.setSource(50730U);
    msg.setSourceEntity(40U);
    msg.setDestination(31445U);
    msg.setDestinationEntity(211U);
    msg.op = 250U;
    msg.tas2acc_pgain = 0.861956231627696;
    msg.bank2p_pgain = 0.1574437662102598;

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
    msg.setTimeStamp(0.7378358176800918);
    msg.setSource(60862U);
    msg.setSourceEntity(16U);
    msg.setDestination(61482U);
    msg.setDestinationEntity(9U);
    msg.op = 152U;
    msg.tas2acc_pgain = 0.6706432811686909;
    msg.bank2p_pgain = 0.8876752864873583;

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
    msg.setTimeStamp(0.8904760468206354);
    msg.setSource(34174U);
    msg.setSourceEntity(191U);
    msg.setDestination(46150U);
    msg.setDestinationEntity(91U);
    msg.op = 130U;
    msg.tas2acc_pgain = 0.3158350326809033;
    msg.bank2p_pgain = 0.04222319169057265;

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
    msg.setTimeStamp(0.39339714416756244);
    msg.setSource(38674U);
    msg.setSourceEntity(29U);
    msg.setDestination(59272U);
    msg.setDestinationEntity(197U);
    msg.available = 551744377U;
    msg.value = 124U;

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
    msg.setTimeStamp(0.7588236302247752);
    msg.setSource(12543U);
    msg.setSourceEntity(119U);
    msg.setDestination(27189U);
    msg.setDestinationEntity(162U);
    msg.available = 2065013526U;
    msg.value = 107U;

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
    msg.setTimeStamp(0.8323755150892712);
    msg.setSource(54679U);
    msg.setSourceEntity(42U);
    msg.setDestination(45265U);
    msg.setDestinationEntity(142U);
    msg.available = 968373941U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.11807062190267492);
    msg.setSource(15449U);
    msg.setSourceEntity(34U);
    msg.setDestination(21358U);
    msg.setDestinationEntity(178U);
    msg.op = 150U;
    msg.snapshot.assign("PFOLKXGDGUKBWOGEGMEYTIEDWALBXAIAHYLIFFTZZGVLYQXUSLISBJRHDZHCZVWJTYBYXJVMXPMBDCOJALUNZGTUOBJSURIGLTFXWBOQTVRSOQFUPCWNJDLQYKCDWMIPVRKNZCBMMRKJZAYBKQFTFMYFMVPMHWBEKWOIRHZINNQEUHDEHEESRHOPUACHCIOJDUSTLEZFNTWKRSSGFQNGVWSCMXXSZXQVYEVPXAPNRUAJDTVAHCAGLQQNPOKNKR");
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("HETWUGJSGISVJNHKTSHRZTAHRXYFZWUXGXANNELIHRUVRDHEKBPOPBDNFVEVAALRBDFOIWBKHVAJOYVQXBQCJTBAKXFETIPNIXSCWVCSXQXSLOLPEEQOVRZZJDOUYURBJNFSPASQIHFIMYCMQWMKFBDFMVOQEOSEDANXLGZCZUYJCHRAYQNKMXDPZLNEZYOPPWKQFJGPTC");
    tmp_msg_0.plan_size = 65389U;
    tmp_msg_0.change_time = 0.2964527566119537;
    tmp_msg_0.change_sid = 43620U;
    tmp_msg_0.change_sname.assign("GRROWTXSLRRRXUAJMHSMECFETFFKNFHKJWXRCJVJCIDZGHNMKTTGEPDOHMOPWAHXVUSYSKYCWPWCYULQBZVBMSGNWAFRFGVKQBPBLFVAEDJWONKCIRICYQLQTIEXRZVMNLTQAPFYGIULMEPOOSLMJYABCPNBINZ");
    const char tmp_tmp_msg_0_0[] = {-6, 1, -108, 96, 22, 59, -53, 64, 24, -96, 73, -49, -65, 34, 102, -30, -110, 117, -121, 106, 114, 96, 11, 107, -51, 95, 1, 95, 75, 57, -12, 23, -54, 44, 31, 17, -71, -40, -44, 112, -63, 20, -48, -42, 11, 20, -22, 50, -95, 99, 37, 117, 18, -115, 22, 55, 58, 119, 38, 56, -106, -7, -16, -54, 106, -71, 98, 4, 45, 80, -25, 12, 12, 87, 102, -13, 41, -29, -56, 77, -69, 7, -98, 5, 8, 39, 111, 85, 59, -29, -39, -42, 77, 4, 70, 105, -20, -92, 5, -61, 90, 92, -16, -72, -50, 35, -108, 75, -2, 67, 81, -101, 58, 96, 106, -126, -91, 40, 36, -85, -20, -121, 88, 23, 8, 62, -95, -14, 86, 68, -71, -69, -3, -1, 78, -102, 121, 93, -2, 84, -105, -63, 7, -85, 21, 102, -126, 68, -70, -32, -66, -127, 2, -69, 113, -83, -23, -72, 96, -46, 65, 79, -62, -92, -75, 21, -92, -61, -51, -100, 35, -12, 25, 114, 18, -48, 67, 70};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.049821286187393454);
    msg.setSource(34843U);
    msg.setSourceEntity(120U);
    msg.setDestination(47247U);
    msg.setDestinationEntity(185U);
    msg.op = 100U;
    msg.snapshot.assign("VMXWQCWBCFCQREQJCMJCJPPVQERUNVTKQZNHYGGFNASFWOLPSCEFUWYQTRYLSBUXLSOWDTKDQLLPEMCZDZKHQUXUGMUYNEDLUHXGYOIGIOWQYDQGGIOUEKJNFZMIXHDYVMPSAIGWHTLMCBHZKBXJBRINTNANPRIPXDFVOJSFOIOBCPXTJTSMEIVBYELXVJYBBWAKNZELRABHUZHUYDVISPHAKMKLSSCKTVZGKOFAARZRAHAD");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.7586456734572177;
    tmp_msg_0.lon = 0.016648342716579445;
    tmp_msg_0.depth = 0.823921762384489;
    tmp_msg_0.roll = 0.6436533353911484;
    tmp_msg_0.pitch = 0.16828861879366142;
    tmp_msg_0.yaw = 0.01091658811283136;
    tmp_msg_0.rcp_time = 0.8592749321931102;
    tmp_msg_0.sid.assign("ZCYSPNXHQMIJDPJUAJFKERRTFVEOXLWMNOAFKDXEGPOFHIPKFRLYDAPGZYUWMYPBVMDGXFJJEAESJFYTLMEOBNUVUSLHWICRWADPAKGGXKBIGTUTQHQMYCHRYJDSOCZCLMLAZPQECFRGQHQJQQBELXUTCOKYSLZBHZVMTQ");
    tmp_msg_0.s_type = 125U;
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
    msg.setTimeStamp(0.2573917684104532);
    msg.setSource(4759U);
    msg.setSourceEntity(63U);
    msg.setDestination(47828U);
    msg.setDestinationEntity(23U);
    msg.op = 106U;
    msg.snapshot.assign("NFIDNLHHGREFBSMBDJMFWYCKCNYUTPJMOXNPTWOWICEUSKWHQEPJXPVBDYGGLJXLBMNCHLBOHAQBVNUXLFDHFJRWKOFZCSDTQLYSXKHWUJWOMU");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.26285985332267814;
    tmp_msg_0.speed = 0.4552363747256598;
    tmp_msg_0.turbulence = 0.09375333067662894;
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
    msg.setTimeStamp(0.009189032552051946);
    msg.setSource(5653U);
    msg.setSourceEntity(68U);
    msg.setDestination(44231U);
    msg.setDestinationEntity(185U);
    msg.op = 188U;
    msg.name.assign("DLWFGHGUMJEKQCUSOXVVLXDTPRLZROLQLOFLSKDBDDKCHFIMJAQVZQNLTXBVEEPTMKZWWRJCSPMTEUTCXMMODWGPPAEDGCZOVJUNBOUCFDAYFFEAVYKPKCWYILNBDVKRAIWSAJEHRXTOJMXBSNGVIZEAHKRIB");

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
    msg.setTimeStamp(0.4535683422131124);
    msg.setSource(21149U);
    msg.setSourceEntity(12U);
    msg.setDestination(27936U);
    msg.setDestinationEntity(212U);
    msg.op = 97U;
    msg.name.assign("PEKZUZLTYBNSZVNLNSPRVGUNNVWZBHLKLSBXKZYXAFLUTYBEQWZASTEKZFCTASWFVIKNIKJIUHRCGPRENQJYOAOHBDIESNYNEUTDCMGPRMWYQOMGZRSPPIKUBLWYFGQROTVTHKXOWFDUHJOYJTMMMJPHEDQDXKOIXXXCSJIDFRFH");

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
    msg.setTimeStamp(0.47138703115731095);
    msg.setSource(1012U);
    msg.setSourceEntity(222U);
    msg.setDestination(6260U);
    msg.setDestinationEntity(102U);
    msg.op = 16U;
    msg.name.assign("BOUYUBJXMBLDJVZLVTDGLWSKRPTCJZQOKVDUSHAHXAKIWQERUYQIFYESPLTHYTVQHMXZTOLZJWWNKXYYDFYLMIRASWAINFMSMONDWRCFCVTKTJNVUABXPDCWFFAEKFITHORLOXHEVDNGGJPOFTEBWBLRREMDQDPOWEVBZKPQPXNPGIZSGHSCRJQUMHBHXYSOMGQFXLMAPANYGGAICVPESN");

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
    msg.setTimeStamp(0.28503739982133847);
    msg.setSource(30322U);
    msg.setSourceEntity(68U);
    msg.setDestination(39250U);
    msg.setDestinationEntity(8U);
    msg.type = 129U;
    msg.htime = 0.15802891561717758;
    msg.context.assign("HQJQYQJAOWIRCUETWIMJSWJJPAMEBDNYSPDLNXLTDNYGIYQBGUCWSUMAEKHMCQTMWPJVKMTFHFDOPUXAEVSIPBPFFCGCULVNEVGZGENHRUFSCK");
    msg.text.assign("SANRZYUIVEOKPYGYIGFBGTAUOKBTSLIUBHDUNSRQZNBLXNPORGBVCZUKVUDDWXKOHASREQHRKVVCAGSHXAECZCETGBAFQCIUXXC");

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
    msg.setTimeStamp(0.6528970090330499);
    msg.setSource(374U);
    msg.setSourceEntity(193U);
    msg.setDestination(34566U);
    msg.setDestinationEntity(48U);
    msg.type = 100U;
    msg.htime = 0.05282984239346855;
    msg.context.assign("OIUCCKJLGFZMXUGMYPGIIWBSHZWUKVEMZCVLLCHXRESRQXCATEDSBLGEIRTYTTKDKXKBRBYUINNCWSCAQLJDDFEWJAYMQOZFGDIJAZHYIHBULDMPDDFKPNRJJJOVPCPNAXSFKNOUGYOVVUWBZETHRKAXSRYQXZHOUW");
    msg.text.assign("ABHIQIMAZPRJHSFKJDBOGPHWNUDQFNRVNPBHOEEICBFYHTUPWXZDTBCRJUTRTYKEBJLJQVYISOSRHFMUOQWXSUXUMLWADTFMLNYSJYNRCWHEGACLMWRCVLEDQDSLIOMFKNWPGGZAOTNANCRQVSUNTVTSCQBJCXHUXYKZRYOSDIJIPSIJVLMEZKXOJBXGMIAWYFKZPVDXPPFWGLOZQRWZGPUQTUZALOFEDEYBXTYEGKVZHMMCC");

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
    msg.setTimeStamp(0.31935980647157614);
    msg.setSource(54155U);
    msg.setSourceEntity(138U);
    msg.setDestination(44138U);
    msg.setDestinationEntity(116U);
    msg.type = 14U;
    msg.htime = 0.8013039940049632;
    msg.context.assign("TSFGKLFPWISBZVLIEIJYFUSMEGPPQQWIGXLFCBGJKPXCBASTODRJOJJXAAPJL");
    msg.text.assign("VTSEJOODUTIKVMILBFBNIJSZOEQGMDVEHVYJHOXURQCYNBLCHTSOUFNEWYGDHXMCAUDPQEMDPZLOIFOLNRLSZCCRAXYWEZGWMMYTUPMRWDCUMDDLAPQZBOEJXVYB");

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
    msg.setTimeStamp(0.4192578812128308);
    msg.setSource(36091U);
    msg.setSourceEntity(95U);
    msg.setDestination(20348U);
    msg.setDestinationEntity(6U);
    msg.command = 99U;
    msg.htime = 0.5216278639920245;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 214U;
    tmp_msg_0.htime = 0.047394793675017866;
    tmp_msg_0.context.assign("ZGDVTPIKXPGFTMZHAULIAENXJQUBXSASAFRQFUBZUDOZZDBAEWZCTOMLYGKYRNKXOEKVKBTJEWIZDHFHJDVRJULIIKYPADFYGUHMPWHFUOJLWWNOMLKHMXCFXSSCBCRWCQRUSRJXFJBXPWDHOAXCRINNGVLPLHXEYNBVQBQTJISZVGLIZLVPUKSYTQIAMDCQOTQESYWVEPBZCGBNQCHLIROMYTPFNYCGNMSDQAVTAKTSRMGYEHNJFWKRUGMOWJ");
    tmp_msg_0.text.assign("GCQYTKVKNJDKTCJXPEGCOMEWCQZNNLWHARJTYBOZVWKZFPXFVYXIQXSBGFYQJLVNUCQXMAIQMBISRZBWUIYOOGIFDFGDQNJYPHBJBFIRACYOMQJULRSGORYDLYCEGDODTWZE");
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
    msg.setTimeStamp(0.559559574161795);
    msg.setSource(41881U);
    msg.setSourceEntity(109U);
    msg.setDestination(20212U);
    msg.setDestinationEntity(239U);
    msg.command = 221U;
    msg.htime = 0.5636505848864152;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 181U;
    tmp_msg_0.htime = 0.06247902050928067;
    tmp_msg_0.context.assign("BGQRTCJCWTAGCTKYWQQODSMBYUCZUATUMGUKYOTLNHBUSFZTHRMPECMWDHPOOHAOKHOPSFVAVJYRBRKJBZYHGSEZIRITEOFSQZGDVYNMPKZHPZCDDIWZBQWFXNAVWSCXQNWASILGUANXIMUZAEIRJORMNCLKIWYXDVFKVYGSEBRXB");
    tmp_msg_0.text.assign("XHOQGQRFALKOXPBMGRTJMQEUSUELSQOACCSUATCBKXSMZZQATAQVDXPMEYNCGTEAIUZTWQWYNEBLOYZKGRCGLBZFRHIIPCHLZVODESQJCVSPBCUUDNGXBHUFHEMIPLWDKRYMNAIPFVJBWDKIRKMYJRNTUKZGDNLSNIYVZOHJ");
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
    msg.setTimeStamp(0.24457237332608484);
    msg.setSource(20671U);
    msg.setSourceEntity(41U);
    msg.setDestination(21642U);
    msg.setDestinationEntity(97U);
    msg.command = 114U;
    msg.htime = 0.8102887615971051;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 184U;
    tmp_msg_0.htime = 0.45643209870759993;
    tmp_msg_0.context.assign("JAYJTJZVWHQKUUDWLRUEVBZXOFEPKUNYOXZHJMHQHHMNICSNTRDUFNXPRGCVLLYBVCELWFQURMOBCCIEFIRJOWLIPWJDKLBAWVTODMYAOCMISLFOKZQFOOYCTAVLQHHLYGXBMWKKQQDGSNGZCMPKUJPCJIGQITMZVRAZUCRFRGSSKNTVFTXLSBQETDYHJRHQMPDBFFYJKRIADP");
    tmp_msg_0.text.assign("KCJGWESOZDELXHVGTISJAKZQAZNDJUMVFGWTSFBCZRLYAAESNRJAKMMRRPUEJPKJJVZTIVHRRVGPOKCMSEXFDNBOLZMXGTNNLVSWBOFIWQNEVBUPLHWSWXDQFYHHYBABNWKDILRGGGTLZMQQHPSHMMAYUGSVCXDWYDFDEWCXQAUEFXUYUBK");
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
    msg.setTimeStamp(0.9678417599321115);
    msg.setSource(62663U);
    msg.setSourceEntity(194U);
    msg.setDestination(49285U);
    msg.setDestinationEntity(231U);
    msg.op = 135U;
    msg.file.assign("RADMWWJSEOPAICKBAATXSVNWBYEAXBMSRXTIHUQLZWMGDLXHCYJEHDKQGOSLZQDPFOFKSIRIPXNQJRFYRHHGYACJNNCUUMTVHBCTNRSTNACOWJAGVDPVZBEFOIOMDBEGZXERCMDTMYLVNUAHZBYKQJWZIEFPMUDUESXHFQQEUGTKYCBCURKWGSSXIVGKOMKHBOFNPULTCIKTQWGPYFWFJNNZQLRVDKHLBLOPVEUZJDPGJ");

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
    msg.setTimeStamp(0.941832100367547);
    msg.setSource(1072U);
    msg.setSourceEntity(33U);
    msg.setDestination(60196U);
    msg.setDestinationEntity(244U);
    msg.op = 23U;
    msg.file.assign("RRIAKEHHKVIURQACDTPNBAKQPFBHPOANCLYTZQRIMHCLLLGCQWDEOXKRCDEBIYGGXCXPNRSSRFNLVSHGWUHAPJBZUMQHNKFRXGSWYYISOI");

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
    msg.setTimeStamp(0.2805210556691464);
    msg.setSource(34317U);
    msg.setSourceEntity(226U);
    msg.setDestination(33157U);
    msg.setDestinationEntity(241U);
    msg.op = 233U;
    msg.file.assign("EPMPVTEBOLLFFRVWVJNYQMPICKEJMAUZRQJRMCBVZQXXUKAVJLWBENFJYXIIHRESMMTBR");

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
    msg.setTimeStamp(0.4348471022413477);
    msg.setSource(7099U);
    msg.setSourceEntity(156U);
    msg.setDestination(50813U);
    msg.setDestinationEntity(23U);
    msg.op = 171U;
    msg.clock = 0.5556844175492915;
    msg.tz = -106;

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
    msg.setTimeStamp(0.4456288749673728);
    msg.setSource(53333U);
    msg.setSourceEntity(0U);
    msg.setDestination(20627U);
    msg.setDestinationEntity(214U);
    msg.op = 89U;
    msg.clock = 0.8901915894024108;
    msg.tz = -13;

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
    msg.setTimeStamp(0.7439889814694909);
    msg.setSource(18933U);
    msg.setSourceEntity(232U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(8U);
    msg.op = 61U;
    msg.clock = 0.41850832231516355;
    msg.tz = 74;

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
    msg.setTimeStamp(0.7536613495169994);
    msg.setSource(22788U);
    msg.setSourceEntity(96U);
    msg.setDestination(51714U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.28996241069900663);
    msg.setSource(29179U);
    msg.setSourceEntity(191U);
    msg.setDestination(9999U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.35313680653862567);
    msg.setSource(20170U);
    msg.setSourceEntity(83U);
    msg.setDestination(19949U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.7995628953168957);
    msg.setSource(3567U);
    msg.setSourceEntity(247U);
    msg.setDestination(49773U);
    msg.setDestinationEntity(48U);
    msg.sys_name.assign("ONLBNZXKMNTXWD");
    msg.sys_type = 63U;
    msg.owner = 59492U;
    msg.lat = 0.46842055127616566;
    msg.lon = 0.7644579754702668;
    msg.height = 0.3023099578967986;
    msg.services.assign("HPGBHWXRKWFGKWUJKFDNOARMPAZEYDPSDPJGBQXPPTHEWIJKXNQMHFHUDGDLSRGEOQLOFNBYYVIYZCVUOSOSJLTEPURWQ");

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
    msg.setTimeStamp(0.30629051488846337);
    msg.setSource(22527U);
    msg.setSourceEntity(238U);
    msg.setDestination(45105U);
    msg.setDestinationEntity(133U);
    msg.sys_name.assign("AIOYGNEDRYDEMLDXADONDPBLTTMJZVCPLVYSICXQIPHINT");
    msg.sys_type = 44U;
    msg.owner = 25619U;
    msg.lat = 0.6157678908092165;
    msg.lon = 0.8633328434405463;
    msg.height = 0.967522472158725;
    msg.services.assign("XWDJAYZEVNEKUTSJFTBDCAEWWILGYFPWTHKPCMLXUHYJJPMCOPLENVNGIAWJWPOXXFQCUZGYEVEIXJCRZZUBFVYQQTIERQFJZQEEFGCPMHVLASJAQSOHTMDRXOYDKBGKKUAIHVRCPKROSLRAVOWRTTMKMSPIWLOFGCLZLXUWOSYSGMQYFUKUKINXNSQ");

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
    msg.setTimeStamp(0.6630834631808071);
    msg.setSource(63510U);
    msg.setSourceEntity(100U);
    msg.setDestination(30501U);
    msg.setDestinationEntity(103U);
    msg.sys_name.assign("LOCBHURNZKEQNSMWPNIDGATFXJRQAALGZLRWIUB");
    msg.sys_type = 124U;
    msg.owner = 17669U;
    msg.lat = 0.43800899297015616;
    msg.lon = 0.3702757471146272;
    msg.height = 0.6953674723540662;
    msg.services.assign("DRMUBQSSYTGWRUUSGVLNPRQGDEQELGJYQVPXJZOFJQKXO");

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
    msg.setTimeStamp(0.9712857232700868);
    msg.setSource(29548U);
    msg.setSourceEntity(79U);
    msg.setDestination(51571U);
    msg.setDestinationEntity(224U);
    msg.service.assign("UGSEKCFSUDTWGJRUPRDDWHYHXYPTMIQKFTZQPQKRVOLYSXMQDILUGNLKFIZBWZRAZEZCJXFIGJOBYNSTCKXBQSDTUQNUAOVIJQDJALWVIOFOELMMMJWUFCTWJLGGOYIPOMVGAHCGZRKZXWRZTJKAFIWFYHGPELWHVQBVGPYSLCAUCOAANUNVCQMPFUMEZDESNXPXYCKPMVP");
    msg.service_type = 11U;

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
    msg.setTimeStamp(0.03974050571695442);
    msg.setSource(3436U);
    msg.setSourceEntity(160U);
    msg.setDestination(147U);
    msg.setDestinationEntity(132U);
    msg.service.assign("COOPFTVSTTIAZSJUXRWXVJLFFZUWMHQETHYRODNOHHKHXGPCJAWHSPLKVGHEJXINQQCZDBDNWWKWZZBMWWRWLLPPVJRKVJUONFGZMHKIIRRUFSDWIUSZYJUXGYMQBAYYDLNLUSPUAA");
    msg.service_type = 25U;

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
    msg.setTimeStamp(0.643487561368555);
    msg.setSource(42895U);
    msg.setSourceEntity(135U);
    msg.setDestination(25832U);
    msg.setDestinationEntity(58U);
    msg.service.assign("YKXWHMADBEZHXDSWQFOEURLUPKVEVWIDCTAUYIOTRHBBLNVZLORDNPNGHUQDPGIUSAALJYHJBWUPDVQIMCHFRPXWZJWEGFDKTCYXQBGFMWSSLTVYXCOJ");
    msg.service_type = 178U;

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
    msg.setTimeStamp(0.41204182916954757);
    msg.setSource(15439U);
    msg.setSourceEntity(254U);
    msg.setDestination(24789U);
    msg.setDestinationEntity(100U);
    msg.value = 0.2513776942860686;

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
    msg.setTimeStamp(0.09855021271095976);
    msg.setSource(28199U);
    msg.setSourceEntity(17U);
    msg.setDestination(63192U);
    msg.setDestinationEntity(48U);
    msg.value = 0.7275242841507392;

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
    msg.setTimeStamp(0.25091649054035414);
    msg.setSource(21125U);
    msg.setSourceEntity(119U);
    msg.setDestination(32135U);
    msg.setDestinationEntity(46U);
    msg.value = 0.32925789437211717;

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
    msg.setTimeStamp(0.8510762263993933);
    msg.setSource(12522U);
    msg.setSourceEntity(38U);
    msg.setDestination(8702U);
    msg.setDestinationEntity(104U);
    msg.value = 0.6770403755804176;

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
    msg.setTimeStamp(0.540123223491319);
    msg.setSource(30374U);
    msg.setSourceEntity(188U);
    msg.setDestination(52859U);
    msg.setDestinationEntity(215U);
    msg.value = 0.28741041930980993;

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
    msg.setTimeStamp(0.7413098610895367);
    msg.setSource(61300U);
    msg.setSourceEntity(196U);
    msg.setDestination(19142U);
    msg.setDestinationEntity(18U);
    msg.value = 0.1603916969558865;

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
    msg.setTimeStamp(0.8556826803171041);
    msg.setSource(15811U);
    msg.setSourceEntity(68U);
    msg.setDestination(64679U);
    msg.setDestinationEntity(141U);
    msg.value = 0.5659639943415186;

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
    msg.setTimeStamp(0.8555392635813478);
    msg.setSource(59741U);
    msg.setSourceEntity(37U);
    msg.setDestination(37398U);
    msg.setDestinationEntity(64U);
    msg.value = 0.10168241014934987;

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
    msg.setTimeStamp(0.012964793400641605);
    msg.setSource(32185U);
    msg.setSourceEntity(224U);
    msg.setDestination(28098U);
    msg.setDestinationEntity(254U);
    msg.value = 0.8070166061308581;

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
    msg.setTimeStamp(0.13680123478967532);
    msg.setSource(60126U);
    msg.setSourceEntity(12U);
    msg.setDestination(5816U);
    msg.setDestinationEntity(24U);
    msg.number.assign("ZABROBGBQSWCMBXMAFZNJYEELVIPPFCTUDXQGNYLMRBRAEIZYKOGSRSZFWMZMUTHCPXWHQENLCYDLHLEVINJTPSERXAVHROBXYACFURHPNIIKHRCOLSXLKTYSNLZJGFNMTOFUJTQKVBSIPDZYDIWQTKWHFXP");
    msg.timeout = 16097U;
    msg.contents.assign("VBYJTJNQGAOBMTSDTQDSRWDZPFWCHHGKBYFRESXLJTIKLUYFSURTEYA");

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
    msg.setTimeStamp(0.7778545385446818);
    msg.setSource(56559U);
    msg.setSourceEntity(48U);
    msg.setDestination(53929U);
    msg.setDestinationEntity(78U);
    msg.number.assign("OGDPNXYMSDJNYLGFUSVEHOGSFBSTOLMZXYZTXEFQSFNKNVYEOICBGOUNUEWJQGDLTGQNTAPVEHVACKXMMJBIYIKGSHWBJRVKBGKDJTAHLWDRTLZSWQURWBFKCQPIOARXIKAWEPXHUTJBYLIYZHZOXDIMFMBYHZ");
    msg.timeout = 43092U;
    msg.contents.assign("DXAXGPWECFXSGHRJKLLDDIWUUHVOWFSBMZKNQYWBQZKSZXUMOICNVVEUYTPRFRCTHNEZHFIIAPDCGFEPNAOGPC");

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
    msg.setTimeStamp(0.652963044820763);
    msg.setSource(22492U);
    msg.setSourceEntity(81U);
    msg.setDestination(60479U);
    msg.setDestinationEntity(209U);
    msg.number.assign("PXYNKNDMRICHOAEXPTFEAGVGMFNCZBHUKIABSPRQBENQNTKWJLKGTEXASEMIQJAVCAJGJJLOWSWZVFNXYLGRDAXRMZWLISYDTCMEUSRBHVLJBTHHVPWSKYVYDLMUDDZQEICNFFAUMIWZQSDFENFKHQOHXGBJIGHJDCJUXKGUPUREOTIKHTVOOBQGAHPUOBZYWLPMQWOX");
    msg.timeout = 31587U;
    msg.contents.assign("XUJGTDFQBHMHOXROSCYWVEPITCBGDBBBSBUGWDVHZTRZCRXGLHURXFPOUCGZCVYADZXLRWWAITYMPSJJIMBLPNQYQEDCUYTXPHVAWOPZMUMYFSZKATCNKLLFCGZNPREXQARXJIBKMPNSXOAJIAROQTWSNYHQOJBFVTRJGNJLLEEVNJZSEEGYQKNOYKKLNATMKUZJFMQDXVGCFAOQHISEKLDZDTPHEFW");

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
    msg.setTimeStamp(0.05860932535339014);
    msg.setSource(24324U);
    msg.setSourceEntity(171U);
    msg.setDestination(50653U);
    msg.setDestinationEntity(160U);
    msg.seq = 2170135198U;
    msg.destination.assign("UGGLYCMPULJODYJOEPFMRQDATDKTDVAKGNPISZUBYSYUCEYNIPORQZMETXBVNTOHABCZNHRVIBLGXFPOPNXSVZOQBDLAWQIKGHSXBUFWLFDMRFOIXWAWAZKWPYAKE");
    msg.timeout = 42280U;
    const char tmp_msg_0[] = {33, 87, -25, -121, 46, -32, 34, 103, 116, -47, 113, 72, 125, 4, -71, -49, -2, 95, -121, 62, -74, 26, 13, -110, 8, -114, -74, 109, 27, 116, -66, -123, -13, -25, -50, 101, -93, -42, -75, 8, -53, -87, -68, -43, -26, 22, -81, 0, -107, -96, -78, 13, 118, -102, -69, 40, 67, 100, 55, -123, -79, -121, 94, -21, -114, -1, 114, -5, -33, -25, 75, -109, 36, 72, -72, 116, -105, 5};
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
    msg.setTimeStamp(0.040011270018329825);
    msg.setSource(61147U);
    msg.setSourceEntity(2U);
    msg.setDestination(45892U);
    msg.setDestinationEntity(115U);
    msg.seq = 3607557689U;
    msg.destination.assign("YBWBSRTIFHXLMNICHILQURRZYEDTPBDSXXJZXEMJVFLNVMMRJJUBVNLFNUTKFWUHMHGSIMYXOOYGUTGYZNUCAOCVMQQEBKSIODOKLIPLDOWCBAAASG");
    msg.timeout = 63116U;
    const char tmp_msg_0[] = {51, 110, 58, -88, 52, 120, -20, 28, -95, 26, 46, -15, -27, 119, -104, -115, -64, 27, 81, 34, -76};
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
    msg.setTimeStamp(0.28783905111731944);
    msg.setSource(45348U);
    msg.setSourceEntity(6U);
    msg.setDestination(8656U);
    msg.setDestinationEntity(28U);
    msg.seq = 2364549438U;
    msg.destination.assign("ASABDAKLJULQSWCOQHEQIQVOHJVKLIVCLXCHWICNWTOJKWEKFPFLJOYYMLEHTPTVBXPMKZXZDMQXTGSKCZGZSDSLDDPCXCRYD");
    msg.timeout = 47689U;
    const char tmp_msg_0[] = {108, -83, -27, 117, -71, 86, -44, 56, -88, 2, -117, -77, 22, 41, -27, -33, -54, -34, 9, -125, 125, 36, 87, 23, -96, 61, -74, 21, -67, 93, -40, 2, 4, 84, 21, -53, 108, 86, 55, -34, -37, 13, 8, -15, 32, 47, 22, 61, -40, -75, 118, -22, 13, -53, 1, 66, -127, -122, -62, 92, 12, 57, -65, -59, 45, 115, -27, -50, -117, -85, -119, -113, -125, 74, -11, 117, -128, -85, -114, 69, -80, -64, 7, 112, -41, 100, -88, 99, 116};
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
    msg.setTimeStamp(0.46574026915675637);
    msg.setSource(37785U);
    msg.setSourceEntity(210U);
    msg.setDestination(11632U);
    msg.setDestinationEntity(36U);
    msg.source.assign("UOIEYQPLBTLXNAZQSZWDRNHLI");
    const char tmp_msg_0[] = {65, 98, -122, -1, 29, -118, 66, -128, 28, -123, 96, 89, -119, 28, 39, 83, -12, -83, 113, 0, -96, -70, 84, 29, -125, -80, -72, 119, -4, 6, 48, 97, -82, -106, -70, -36, 0, 55, 121, -92, 39, -91, -37, -2, -23, 31, 6, 116, -90, -67, 83, -49, 85, 73, 21, -110, 36, 1, 105, -9, 74, 46, 3, -18, 102, -110, -27, 65, 1, -108, -26, 120, 7, 3, 97, 24, 83, 100, -2, -112, -9, 70, 9, -123, 54, 68, 77, 61, -42, 16, -31, -84, 75, 102, 22, -126, 7, -55, 63, -23, 74, -98, 125, -50, -95, -18, 17, -71, 97, -37, 4, 82, 46, 63, 90, 10, -107, -110, 56, -84, 64, -52, 7, 76, -114, -73, -46, -126, 54, -13, -62, 20, -20, 88, 67, -45, -120, -114, -95, -37, 102, 53, 63, 22, -7, -96, 58, -103};
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
    msg.setTimeStamp(0.689870201642179);
    msg.setSource(43985U);
    msg.setSourceEntity(32U);
    msg.setDestination(54776U);
    msg.setDestinationEntity(246U);
    msg.source.assign("EXGMYFHSRSBHRGFNACW");
    const char tmp_msg_0[] = {-71, -76, -128, 79, -100, 122, -91, -123, 81, 54, 28, -84, -7, 95, 110, -93, -86, 114, 114, -29, -57, 120, -106, -27, 77, 38, 15, -12, -74, -100, -51, -55, -86, 13, 54, -76, 10, -91, 120, -60, 47, 91, 53, -37, -29, 24, 109, -121, -100, -8, -46, 28, -53, -85, 82, 64, -127, 18, 79, -26, -50, 77, 114, 18, 99, -78, 44, 56, 24, -25, -6, 115, -107, 64, 73, 57, -91, -127, 71, -72, -115, 79, -93, -109, 2, 31, 62, -99, -60, 58, -53, 31, -20, 65, 52, -69, -57, 49, -113, 101, 116, -35, -14, -96, 96, -106, 90, -89, -112, 59, -121, -121, -97, 13, -33, 123, -115, 43, -102, -96, 23, -98, 47, 17, 33, -78, 106, 77, -37, 104, -20, -115, 36, 41, 92};
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
    msg.setTimeStamp(0.5402953552630883);
    msg.setSource(12783U);
    msg.setSourceEntity(91U);
    msg.setDestination(43193U);
    msg.setDestinationEntity(122U);
    msg.source.assign("OJCIZGHWZQDFENAPNLCLOKPTJLEFJLWYVBDSLITPBUMNCIKNAXNV");
    const char tmp_msg_0[] = {-28, -1, -64, -1, -4, 74, -127, -92, -56, 18, -93, -118, 79, -77, 52, -39, 101, -12, 120, 54, 49, -105, -24, 30, -61, -29, 29, 126, -2, 81, -24, -78, -20, 80, 108, -76, 126, 114, -24, -114, 50, -116, 3, -65, -97, -61, -17, -14, -84, -68, -100, -14, -89, 60, 96, 72, -84, -109, 58, 57, -2, -77, -56, -79, -23, -97, -25, 39, 62, -125, 117, -27, -12, -116, -59, 48, 38, 95, 49, -23, 64, 116, -118, 74, 60, 115, -62, -21, -61};
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
    msg.setTimeStamp(0.641062386387554);
    msg.setSource(37668U);
    msg.setSourceEntity(9U);
    msg.setDestination(64265U);
    msg.setDestinationEntity(124U);
    msg.seq = 269782747U;
    msg.state = 98U;
    msg.error.assign("VAZHFQCOBDEETURADXPSAVRVWUPISOXBXPKBQIOAYRWFZKPGLVTZXBLDTLQLEIKIDJDBRQRIGBPOCEPZCSPTQBKXRMMHTOKHSMTQUJYWINIOSGNFHTXNUATOZMRVEMHSDNXEGZKTSFAWYQJQYJDRPFUENSMAVMWMXFBAUJCORVQGIHYKKUJAQMRKJLNWAXFWVLYYWBUHGCHSYFYLNNFJC");

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
    msg.setTimeStamp(0.7497229795105248);
    msg.setSource(52912U);
    msg.setSourceEntity(211U);
    msg.setDestination(24597U);
    msg.setDestinationEntity(93U);
    msg.seq = 1075448857U;
    msg.state = 80U;
    msg.error.assign("VQRYJDWVONW");

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
    msg.setTimeStamp(0.3510233682560193);
    msg.setSource(58132U);
    msg.setSourceEntity(190U);
    msg.setDestination(7036U);
    msg.setDestinationEntity(7U);
    msg.seq = 769954851U;
    msg.state = 35U;
    msg.error.assign("RAIUBFCNQWCVVKDHMUTNEPZBZYTWIXBEKTDQNTSCXFRHNJARKFGMKHUWOPQQFSKNVXXIJJVYJOOCWQHSLBATCUDNJZPUIMKXRJNFZYTLYEIAVZFHSRTBQPVPJPCAMDSINLRYPPVGXVGDTYYUAZQSELLSXPKIDGOUHLWRCJHSFBHNDEOXKGUAJCFXHN");

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
    msg.setTimeStamp(0.24851819180767365);
    msg.setSource(37630U);
    msg.setSourceEntity(72U);
    msg.setDestination(10713U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("SICMTYRYLJVJUVAPEZYNHSKTZGAYHGKPKOFOPZAQORXRPBHRICFJGCVSZUHEVTTBWWSKTTKZKAVLVUMHLEJQHCMFVWPEPQNWSFLHGVVFKIXRMYGWBDESYQDGURDLEULOFPZJNWZQNXIXUFGRLYWZABCCTEGMJBQQPCUDDWIRZJDTNXOBFOFIMDCRCKBMONFQSJELGAXMNUMLVPTHOYDDACYBHIXWX");
    msg.text.assign("OMOWYBJDQRPEFNJZVGDQYVJOFFWGAIWEPZHKUUUCURJNRYPBPTOVEWAVSRTZDPEKXPNGQZANRBOUGXDTKMYSUHMVEHVTKOTOGTFAIFLRDEAPKEQKZQJIVDWUWSVGLJLYYYIVLITMQXGIFINRNBSCJHSXCBKSAOFAVKNLCXCZQQCBLTWYMZHXFBHJWEQXLISSEMFZLHPKBYDAXJTNRSLWJDALUZCGHGOHDGIXENCFPUYRMMWQ");

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
    msg.setTimeStamp(0.883145402102242);
    msg.setSource(44534U);
    msg.setSourceEntity(15U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(118U);
    msg.origin.assign("HTAEKVRHPYYJIGMSIIRNPJQXLUWSAFZJVSFOALZVTYBTEZJVDDCCWWCVNRGQWSWIFFWXAPZOROPKHLMHXZQLRRNRKGFGKUIBKPAPHXDTBEHYEXMCQOPZQYDIFBHXDBBIQYIGZMNCBWDUUCVSGTUBOOHQGDGJMACTSDWMCUAWUROYUXKZNAEJNLPRKBJTLHJAMYJCVVLNYFEWKTQESSERIVCUPYOT");
    msg.text.assign("ZAIBZPPHTXXEHKUROKIVPYPZCYHLLKILTSQGCEGEAYHGFFZQXONBPZRDDFOBMLBJCROIZSBUVAMFVNTVBSLMRYKDHJUQRGSVCSVITNYWIQXEEUTRHCSAOJADWWNPCYNCKMFGUNJOXCNRWEPFLLHAZCXMJ");

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
    msg.setTimeStamp(0.32874250729302334);
    msg.setSource(45384U);
    msg.setSourceEntity(200U);
    msg.setDestination(37155U);
    msg.setDestinationEntity(115U);
    msg.origin.assign("MQMSZBREIDZKAGCPTEGFOAZGSUUKNCCHZCNLJJBKUKSWEFGEIUPGHRWEMLVQAIVMYXYXDNJBTOQPTNOLQLPJMHEYWDYCFDUWKZQAWZMSUSBXLFERKWXQTILJILPGHWAYJCDMUSKMSYWXRBVPSQPJZJQXTCNFPSD");
    msg.text.assign("HZNQRMOPJZKAHXIOTFOSTBFEWPNIKVQPJNWPACYQSDLLQMJCUVVWQNFGDKAUTGYOTURLOLNTFBAAPZERWGLPFXHEJUUDDGEGGIQIUDYOIKIKXKMNYLRVHDFNFEMLWQTVFCZSBYSHIRQDBRZSENDVPXAWCQOMACJMRGNWKEYTKEMACBVAXYUPXRIFOYGYVJGTELAMBPZZKPMHHCJQRIWXZUHOZSGCBOBWDVCRCXIVX");

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
    msg.setTimeStamp(0.4583632363414343);
    msg.setSource(54896U);
    msg.setSourceEntity(241U);
    msg.setDestination(60779U);
    msg.setDestinationEntity(185U);
    msg.origin.assign("QYSBQRMWAYWPZFNJNEKRIJREPEGIYGONCQUZEDBOJQSKPTOFRWBZUTLBDSXDHENNWXJAOKL");
    msg.htime = 0.21258228677483926;
    msg.lat = 0.5499707078861229;
    msg.lon = 0.034020966958757115;
    const char tmp_msg_0[] = {0, -38, -76, -105, -20, 35, 90, 0, 14, -92, 66, 59, 55, 7, 66, 89, 44, -112, 114, 102, -83, 92, 58, 86, 1, 8, -45, -116, -27, -105, -82, -79, 87, 10, -49, 60, 87, -6, -69, -78, 104, 40, -89, -18, -93, -68, -112, -122, -63, -121, 55, -35, 124, 73, 46, -61, 28, -74, -14, 108, -93, -107, 125, -26, -71, -120, -26, -24, -6, 54, -58, 47};
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
    msg.setTimeStamp(0.6002229395466514);
    msg.setSource(47089U);
    msg.setSourceEntity(24U);
    msg.setDestination(13619U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("GXPDDXSTKZQIBANRDRMXGDLLZUMFJZVFALSMYGAZPJLGEQOXPHGLTJEFQIEAPSTRSGJIHTMVCFSREPHWEWNUDNHEDGOAIQPBEZNFHBILZORUMXTGZDVNHCQOIRLRHLOMANBUNLRPGMHAYATWYAQVDTGWCKXDCTFMWCJWKVRKKVBPZOWVSFFHMITEMKYXWQVIWQTXOYUNJRFWQUUSJNKEK");
    msg.htime = 0.48005351594451107;
    msg.lat = 0.3824890049434797;
    msg.lon = 0.44803900617600034;
    const char tmp_msg_0[] = {-118, -85, 95, -97, 5, -16, 5, -124, 51, 10, -8, -54, 50, 67, -105, -76, -62, -24, 71, -86, 0, -111, -53, 49, 73, 54, -106, -36, 80, -128, 47, -95, 88, 30, 102, -19, 125, -122, 14, 101, -90, 43, 14, -32, -116, -17, 70, 66, 105, 97, -108, -45, 83, 49, 8, 102, 77, -121, 33, -48, -30, -97, 66, 96, 84, 92, 60, -87, 15, 91, 107, -62, 125, -97, 17, 7, 18, -93, -13, -115, -30, -99, -64, -68, 31, -58, -61, 110, -46, -98, 103, -42, 106, -24, 61, 91, -94, 68, -110, -33, -37, 73, 3, 85, -46, -20, 64, 22, -103, 1, 93, -124, 126, -69, -119, 103, 32, 85, -125, 64, 61, 64, -121, 62, 45, 67, 26, 57, 70, 79, -35, -118, -120, -70, -25, -59, 47, 43, -18, 103, 18, -95, 64, 28, -16, 37, -117, 48, -86, -19, 52, -87, 19, -116, -43, -63, -104, -124, 6, -12, -105, 72, 17, 73, 104, 81, 40, 67, -1, -42, 12, 47, 112, 23, 49, 74, -34, -72, -90, 15, -124, 39, 74, 53, 25, 87, 51, -82, -55, -128, -42, -30};
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
    msg.setTimeStamp(0.19085893807789844);
    msg.setSource(54757U);
    msg.setSourceEntity(59U);
    msg.setDestination(14402U);
    msg.setDestinationEntity(36U);
    msg.origin.assign("JWCGHKPBIVKR");
    msg.htime = 0.4561566279939976;
    msg.lat = 0.39879503646356895;
    msg.lon = 0.3688615780883303;
    const char tmp_msg_0[] = {-97, 122, 90, 104, -38, -111, -2, 12, 120, -6, 124, 20, -62, 22, 101, 16, 98, -69, -61, 99, 116, 53, 14, 84, 55, 29, 8, -88, 104, 99, 42, -43, -117, -26, 20, 123, 70, -14, -119, -35, 30, -65, 71, 41, 119, -46, 123, -31, -72, -106, -3, 9, 11, -47, -95, -30, -19, -55, 39, 60, -15, 100, 69, 52, 94, -46, -1, 8, -102, 125, 39, -65, -65, 63, -4, 87, -65, -98, 0, -99, -51, -112, -100, 2, 60, 84, 111, 4, 69, 84, 34, 44, -9, 36, 38, -25, -33, 30, -121, -66, -8, 26, 83, 91, 51, -95, -57, 0, -25, -72, 109, 18, 115, 65, -92, 115, 40, -79, 54, -52, -57, 57, -106, -116, -8, -41, 118, -85, 21, -44, 50, 106, 66, -23, 3, 19, -75, -39, 19, 60, 17, 1, -20, -65, 1, 81, -33, -7, 100, -87, -58, -69, -17, -29, 20, -107, -45, 107, 20, 78, 109, 70, -33, -106, 107, -104, -39, -34, -22, 80, 32, -32, -120, 36, 123, -88, -14, -90, 83, -7, -96, 13, 117, 96, -105, 23, -123, -77, -116, -20, -120, 51, -54, -9, 19, -117, -104, 40, 116, 14, 78, -38, -41, 78, -71};
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
    msg.setTimeStamp(0.08784380386039392);
    msg.setSource(41650U);
    msg.setSourceEntity(176U);
    msg.setDestination(9742U);
    msg.setDestinationEntity(166U);
    msg.req_id = 17341U;
    msg.ttl = 27912U;
    msg.destination.assign("KMPDITCODUHGIZJHSLGRJQQFZLGJCNJWHKYIMGBVZQICEWWMTJVWALPTRCRNEYMVDVLCEYYTLIOKONSTXEUXYMVATAJMEKEXUSNUGQQZYOTMSWJTDHKBHYSDIBW");
    const char tmp_msg_0[] = {-101, 53, 49, -26, 9, 14, 31, 86, -22, -79, 69, 86, 30, -122, 8, -57, -14, -14, 112, 46, 44, -128, -61, 47, 123, -68, -81, 0, -115, -103, 118, 54, 47, 120, 73, 34, 104, 126, -97, -78, -83, -100, 52, -127, 110, 79, 43, 41, -11, -90, 77, -48, -87, -109, -112, 61, 44, 6, -46, -64, -56, -119, 100, -67, 88, 9, -71, -95, -60, -47, -63, 101, 21, 13, -88, 66, 42, 116, 122, 126, 94, -65, 49, -96, -115, 0, 3, -117, -111, 80, -78, -59, -37, -79, -44, -70, 80, 107, -90, 94, 72, -123};
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
    msg.setTimeStamp(0.5134294974630643);
    msg.setSource(64390U);
    msg.setSourceEntity(214U);
    msg.setDestination(31809U);
    msg.setDestinationEntity(7U);
    msg.req_id = 62698U;
    msg.ttl = 2441U;
    msg.destination.assign("VWOJSWPRDUQENDKCKLOWAZKTDNHJFBZVJUTQOPTGXLGACFCGSMNNWNHCOMYVLZCIYGROZZJHLAFLXEYMSOPSSVEXYUATUOBJWZKQJTDS");
    const char tmp_msg_0[] = {-51, 17, -30, -20, -123, -40, 50, 6, -109, -83, -55, -39, -121, -128, 109, 60, 98, 79, 113, 10, -7, -20, -124, -128, -80, 77, 86, 24, 84, -39, 19, -114, 3, 41, -48, 99, -50, -91, -55, 93, 126, 87, 69, 80, 35, -104, -108, -89, 6, -38, -22, -45, -95, 12, 43, 126, -5, -98, 63, -97, -2, 122, -54, -55, 46, 28, -128, 74, -122, -97, -83, -93, 19, 70, -10, -51, -105, 53, 50, 33, -56, -59, 105, -8, 93, -57, -12, -113, -77, 73, 96, -111, 25, 9, 56, -28, 14, -90, -40, -65, 9, 43, 23, 119, -27, 4, -60, 116, -80, 44, -35, -73, 69, 10, -26, -118, -69, -69, -91, -84, 102, -49, 10, 114, -19, -78, -77, 61, -112, 98, -75, -49, 14, -101, 31, 0, 84, 105, 101, 123, 116, -10, 32, -40, 59, -89, 103, -105, -56, 77, 64, 43, -36, -92, 53, 86, -28, 89, -19, 6, 59, -87, -30, 47, -81, 47, -110, -90, 122, -84, 30, 37, -39, 125, 79, 92, -100, 125, -47, 107, -113, -5, -72, -77, -56, -102, 48, -13, 76, -5};
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
    msg.setTimeStamp(0.09669492743789432);
    msg.setSource(62365U);
    msg.setSourceEntity(217U);
    msg.setDestination(26314U);
    msg.setDestinationEntity(37U);
    msg.req_id = 10504U;
    msg.ttl = 4262U;
    msg.destination.assign("NEOAXXWEZQBYADBPILBDGPOXFNKTOXHSKOIYOHMUZCCHXOKHVFMTFPWDRKRQDGREFNWREETAOUUQXEAVJFHDLPZSVWXVLLMLZRNXCSLEKJTUCQKYCLGCHWZBZTIPHGCJVKBRAQUSB");
    const char tmp_msg_0[] = {-50, 98, 36, -59, -31, 102, 80, 93, -68, 81, -30, 55, -38, -33, -7, 17, 49, -107, 89, 74, -51, -90, -17, 60, -122, -48, -63, 83, 120, -90, 83, -4, -108, 26, -46, -88, -127, 52, -86, -113, 35, -119, -36, 11, -49, -102, -69, -16, 114, -122, 93, 1, 56, 99, 56, -121, 123, -76, -65, 33, 103, 114, -88, -123, -32, -112, -11, -78, -68, -100, 101, -12, -34, -109, 116, 39, -15, -106, -123, -82, 88, -123, -94, -50, 73, 46, 90, 65, -70, 67, -32, 58, 64, -6, 38, 15, -60, -12, -119, -49, 69, 88, -68, -107, -75, 47, 49, -82, 78, 10, 7, 122, -127, 89, 46, -13, 60, 53, -26, 0, -117, -116, 121, -95, 75, 63, -57, -125, 51, -62, 106, -34, 84, 110, 35, -107, 31, 71, 73, -57, -61, -49, -3, -86, -84, -19, -51, -94, 60, 54, -53, -12, 110, -64, -119, -37, 29, 123, -87, -59, 22, -62, -66, 52, 72, 81, 60, 36, 55, -93, 14, -54, 93, -78};
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
    msg.setTimeStamp(0.4599721146926422);
    msg.setSource(31685U);
    msg.setSourceEntity(52U);
    msg.setDestination(26923U);
    msg.setDestinationEntity(220U);
    msg.req_id = 38509U;
    msg.status = 194U;
    msg.text.assign("FQXWZIOVNVQBXWMXASLNVXAJUMPDJS");

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
    msg.setTimeStamp(0.27193043893595314);
    msg.setSource(31111U);
    msg.setSourceEntity(117U);
    msg.setDestination(44250U);
    msg.setDestinationEntity(247U);
    msg.req_id = 7729U;
    msg.status = 228U;
    msg.text.assign("SCWFMGZGNGLJZKCSVVXYHSWZLKKYLXRDZQAOSEIYAQLGSFZEDWIUIHFVYYBULHTKSMBWITOWTNPYFRCNMDNIWDWMAHXANYPNVZXKXRRVODDJATRMJJCONNRFCPSEAXMRCPWHAZJVUSUEBIXTMUJRJPXEKHIGQHLAJFQRDFPQVPEDGPRBYQMQTZJYQDZEXBLKVOENATBUFKYBFKQHPAHUWUCLXTIICQUHCSFUGGBVLKMMBVGZPTITOOEDBE");

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
    msg.setTimeStamp(0.4501133243722154);
    msg.setSource(58161U);
    msg.setSourceEntity(164U);
    msg.setDestination(40119U);
    msg.setDestinationEntity(176U);
    msg.req_id = 41782U;
    msg.status = 43U;
    msg.text.assign("YOTQVZENJFERYDKQIGVZTKHXNBPIOURXWKOLQBPTXE");

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
    msg.setTimeStamp(0.7593074899640165);
    msg.setSource(10294U);
    msg.setSourceEntity(141U);
    msg.setDestination(23157U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("BLLGXISBJX");
    msg.links = 163614963U;

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
    msg.setTimeStamp(0.46391924104535454);
    msg.setSource(25289U);
    msg.setSourceEntity(10U);
    msg.setDestination(16024U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("LCEFOSEXQNIFQGLNQYAJPAPYSLOMRAWBVYPXBVQZDGVKEJABQHKEVPRTSBPXOCEMYCCMHWUGAFNZFDHHUESFFRBHGKZUSWWGOCYCDISLPTMIDSTJGFKYJJUZAQMHIUGZBDGKOOQDPXWTWJCAMUKUSCITRXTXKOJDIDDLOBERRCAVIYUNJVQIHNKRLLIGSPZZBZHVANENKXDTQQBXLJ");
    msg.links = 3323672318U;

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
    msg.setTimeStamp(0.37257319598112626);
    msg.setSource(34926U);
    msg.setSourceEntity(240U);
    msg.setDestination(29288U);
    msg.setDestinationEntity(2U);
    msg.group_name.assign("XILMEPDDTYNBZGQPHYWGCLQFQDSZVUPBGEXRDLBJXDKBAQRQJZVAQUOAAWGTNYVYBKUEFCNSRUIUKSMBNJNOITHQWIGOMYCRJDEVPFBYJJVZLZIGUAKXSJTKFVHNONTPXVYMGRSJHGSTMSCHLWLYAOCXRLWRZIVNRYFOPYHFCUTZJCQUPJFMDWXXAUIWAGCMQFHXZCFEAPIEQMMBDRHLEHWKRMPSKXTDBLOSENVTOCEGTOINEDLUBSZAWKWZF");
    msg.links = 2285191224U;

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
    msg.setTimeStamp(0.06580820836599266);
    msg.setSource(65017U);
    msg.setSourceEntity(132U);
    msg.setDestination(25867U);
    msg.setDestinationEntity(200U);
    msg.groupname.assign("XTNXLZXAYFZZWDVEDBDECSZWAFXPHUQLEPGSOBKZTUDGEBHQSFCVMPYULENLWQHIRCGLKIJVUTADZMAJHFVSTRTKVFKCSYFNOGGOLNMGAGHUOIOSXMKPERYBIQAHGJQCKXONXTYYALBYNYQUYJDJMDXPVERVRBZCTBDNJPQFROCHHMNILHWUWOJKNBNFQQKZMDVCIJEPWUCJ");
    msg.action = 249U;
    msg.grouplist.assign("BTDFXKLAWDEZOHXVNSCWBTPFWOJPQKOOLOATFDJERNNTZXGBTCJVBMIBJRJUWRUPZVGLVDBGHXNGMAEUVCYBJYLS");

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
    msg.setTimeStamp(0.3844070623223178);
    msg.setSource(17207U);
    msg.setSourceEntity(252U);
    msg.setDestination(12700U);
    msg.setDestinationEntity(185U);
    msg.groupname.assign("UTSYQTDZWSJZWHXBVDBNIJWMTQNCTEUCUDBDDLIBYGDEMJMNBJEHMGNEERFKXNYCZXNVTRIVRYLFRSLWQOTGCQYZHIJPKZFDATRQFAMHPVWMYUKHDXRGEXRXYCKDKEBIKJGOINRVCEZEJHLPZUPJQFTLMWSXRXBAQGCNZNOVOYUVLTOOANCOUOWPLGASPBUHXKPKHTCOCELBWFJKIQPGIFKPFMGSWS");
    msg.action = 171U;
    msg.grouplist.assign("MIFGDEKIWWVIOXAJLZNTAQRBDVOJLEYNVJXTZWYYOPSRHYCAJBCZDKBKU");

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
    msg.setTimeStamp(0.03803641030703375);
    msg.setSource(25304U);
    msg.setSourceEntity(118U);
    msg.setDestination(59379U);
    msg.setDestinationEntity(54U);
    msg.groupname.assign("HXGCSVULOWPEKJYKMPKZJKYFDVXAXPGCVXVMWVTTZWWMTDJIERNULQOIMNPDRZYHOZKOZQXBFUZMQ");
    msg.action = 103U;
    msg.grouplist.assign("GRHXQXVROMYJBIKATCFFNOPBPIGIENYRVALNCODYCZVZUMTEISYTVDZTZAKSFGKMLVLDRYA");

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
    msg.setTimeStamp(0.23329187526800332);
    msg.setSource(56172U);
    msg.setSourceEntity(150U);
    msg.setDestination(57399U);
    msg.setDestinationEntity(52U);
    msg.id = 107U;
    msg.range = 0.12498400934790532;

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
    msg.setTimeStamp(0.1166521136003611);
    msg.setSource(35387U);
    msg.setSourceEntity(219U);
    msg.setDestination(17523U);
    msg.setDestinationEntity(62U);
    msg.id = 195U;
    msg.range = 0.9297637171934553;

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
    msg.setTimeStamp(0.9273440373639601);
    msg.setSource(55316U);
    msg.setSourceEntity(181U);
    msg.setDestination(34565U);
    msg.setDestinationEntity(107U);
    msg.id = 206U;
    msg.range = 0.1008936849641423;

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
    msg.setTimeStamp(0.5746555598541472);
    msg.setSource(52862U);
    msg.setSourceEntity(99U);
    msg.setDestination(29610U);
    msg.setDestinationEntity(24U);
    msg.beacon.assign("JMTPKEBTTZTWKKJFCXDNMYRMPFPMLVRPAXVQGWYIEHOBRXXZBEFZIOPTKPGNWMB");
    msg.lat = 0.5360027841551493;
    msg.lon = 0.5890536532256552;
    msg.depth = 0.4678365233079461;
    msg.query_channel = 201U;
    msg.reply_channel = 215U;
    msg.transponder_delay = 190U;

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
    msg.setTimeStamp(0.3023704704687107);
    msg.setSource(47870U);
    msg.setSourceEntity(76U);
    msg.setDestination(58967U);
    msg.setDestinationEntity(37U);
    msg.beacon.assign("TFOIHCCPVJNZSDJHECMMHESFZLXGCPBMAWNSREEBVKTVDXQLLUJKJVWLJ");
    msg.lat = 0.46078214923898364;
    msg.lon = 0.8047950582333909;
    msg.depth = 0.6196261817683975;
    msg.query_channel = 251U;
    msg.reply_channel = 207U;
    msg.transponder_delay = 101U;

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
    msg.setTimeStamp(0.5861702935966844);
    msg.setSource(30655U);
    msg.setSourceEntity(221U);
    msg.setDestination(58961U);
    msg.setDestinationEntity(124U);
    msg.beacon.assign("CRJXYARFKPDNQIXPEFOCYIUCQPZNATMFGBGUZYLLHOKSIFYWQATTVDENVUUPSHCTRKEPUOWJFNOLQJECNRVSTUKEBWTWEDWXIROAPAZNHDVBLCZBWZQGVXTLFIUODAPLKLFSJPYMMMATXQJGRRXHFEFWVSHBGNCIKQLJDWRGKHOEZME");
    msg.lat = 0.06964625285499815;
    msg.lon = 0.4909276365796872;
    msg.depth = 0.4421951078274491;
    msg.query_channel = 189U;
    msg.reply_channel = 72U;
    msg.transponder_delay = 87U;

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
    msg.setTimeStamp(0.19314498716863782);
    msg.setSource(32832U);
    msg.setSourceEntity(73U);
    msg.setDestination(15904U);
    msg.setDestinationEntity(44U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.30766984447422896);
    msg.setSource(9762U);
    msg.setSourceEntity(236U);
    msg.setDestination(56821U);
    msg.setDestinationEntity(92U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.31187162460551665);
    msg.setSource(40433U);
    msg.setSourceEntity(87U);
    msg.setDestination(5833U);
    msg.setDestinationEntity(112U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.5390050561041173);
    msg.setSource(19676U);
    msg.setSourceEntity(3U);
    msg.setDestination(26460U);
    msg.setDestinationEntity(14U);
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 6025U;
    tmp_msg_0.sys.assign("DDHPTBPSYJPTNLQFUXOQSVRZHIIQJLVLNCLFZHWRRSJYHHXYBEWUKWCAXTCVNWWVEIZAKJLNCGQCLUGXNNIUKXYFJITCGAWFRTUNHDFAOEUJOYJZQGIAGOQ");
    tmp_msg_0.value = 0.4399007129566328;
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
    msg.setTimeStamp(0.35330449264698194);
    msg.setSource(23033U);
    msg.setSourceEntity(220U);
    msg.setDestination(36549U);
    msg.setDestinationEntity(63U);
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 82U;
    tmp_msg_0.value = 0.5238864281078891;
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
    msg.setTimeStamp(0.38840817312808584);
    msg.setSource(22208U);
    msg.setSourceEntity(183U);
    msg.setDestination(36409U);
    msg.setDestinationEntity(83U);
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.022919533820486393;
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
    msg.setTimeStamp(0.268002638124165);
    msg.setSource(59181U);
    msg.setSourceEntity(28U);
    msg.setDestination(51098U);
    msg.setDestinationEntity(216U);
    msg.op = 81U;
    msg.system.assign("GZEAVAXPOURHJINWLVAJXEBXNWYXRCYMTNUXIQBWGMXBPAKOPIQLKJBRDMZEYFLUOCTNZVGNBWCFKTJCXVBKFPQVAMZTEFSFNUNOBQQJMUOZVOS");
    msg.range = 0.5508160229633059;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 1965725664U;
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
    msg.setTimeStamp(0.7095780337673033);
    msg.setSource(56400U);
    msg.setSourceEntity(198U);
    msg.setDestination(4920U);
    msg.setDestinationEntity(81U);
    msg.op = 2U;
    msg.system.assign("PIRMCAYXLNFSAGURZUMNEMLVEVOXQCDLLLRRKCRVGJKFETGQNNZKIYQQVGDMHSFUAPEMKBRPPYMQNIGJHTNLDHHDYRCYVRZTSEDVXTBVFKICGJPTVDJVJHQUAUMFZEGATXG");
    msg.range = 0.04582596494848379;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 29707U;
    tmp_msg_0.lat = 0.6048390901004275;
    tmp_msg_0.lon = 0.28243109501780994;
    tmp_msg_0.z = 0.19138810588941357;
    tmp_msg_0.z_units = 93U;
    tmp_msg_0.speed = 0.4741549751014362;
    tmp_msg_0.speed_units = 169U;
    tmp_msg_0.custom.assign("FOREVGTYLKQRKILWYIJQSZBNDYXILGUHKBPDQSZDDHQJYVMVZAOAJXOTFUYUPKJNKQNHGVHSQMKEFOFPXHYFOQNJZMHVXGRQRUSOMTVZAWNXEIXAAMJLATJOLTXULERTPEFTWBMIWPXGJMGIEUDBXZET");
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
    msg.setTimeStamp(0.6473621329677844);
    msg.setSource(44313U);
    msg.setSourceEntity(200U);
    msg.setDestination(11086U);
    msg.setDestinationEntity(0U);
    msg.op = 78U;
    msg.system.assign("JWSWNMROLYHCAEGSWYKNEKADWTZFEFTOGHCQRMXVQUKFYPQBORBNXTYEXOGVQLIVTQKWFMLDIRZNENFBHBAUHOXYYQMUGLJFKFNBZBZVPMZHGRMOADHKIIAALMTKQK");
    msg.range = 0.8143158571954703;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("QSPGAFNJZLWROLXRMZVGFOYOZZXGAAMFAYMTUVBYSIMFKVWRPVPVPSBZHUBHBSGNIIABCJRLTWXVOXXZIKTWURGBDWTAGXYKTIQHQRPNDPQJHVONMSYOLFFNJLEABNSCLHEZXJKBLMQCEVIJYQDTSNUKDFZRYWDSEJCPSPOKMDPRHLYCXYZQWKCQFGDDFNLSVCGWBXHLINUKTDIKJEIACJHEMBR");
    const char tmp_tmp_msg_0_0[] = {43, -44, 99, -58, -11, 37, 50, 111, 70, 60, -83, -2, -7, 95, -100, 121, 80, 41, 26, -8, -70, 68, -117, 70, -43, 114, -79, -47, 21, -99, -37, -9, 116, -58, -94, 41, 47, -105, 13, -120, -47, 85, 40, -83, 58, 75, 3, -127, -9, -15, 110, -30, 22, 87, -115, -28, -73, 6, 122, -74, 101, -9, 92, 61, 93, -71, 90, -107, -39, 104, 22, 8, 83, 104, -75, -115, 70, 100, 53, 32, 56, 48, 115, -22, 48, 110, -78, 29, -83, 19, 28, -49, -108, -111, 51, -32, -9, 84, 68, -38, 2, 58, -19, 22, 6, 73, -15, -48, 20, -44, 44, -91, 120, 62, -18, -69, 125, -98, 91, 80, -46, -122, -82, -67, -64, 103, 53, -125, -82, 115, -6, -68, -33, -23, -99, -13, -89, 49, 3, -51, 65, 39, 66, 45, -26};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8670779505465608);
    msg.setSource(11986U);
    msg.setSourceEntity(104U);
    msg.setDestination(49639U);
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
    msg.setTimeStamp(0.972356495484755);
    msg.setSource(42604U);
    msg.setSourceEntity(18U);
    msg.setDestination(55001U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.19096847335101808);
    msg.setSource(2932U);
    msg.setSourceEntity(206U);
    msg.setDestination(34081U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.10443769361181099);
    msg.setSource(59632U);
    msg.setSourceEntity(67U);
    msg.setDestination(56705U);
    msg.setDestinationEntity(71U);
    msg.list.assign("IBUPINCPDYHJVMYTCYYOQPJDAKCEKBGNLNIVWZSZPJHRJZGUSIOJMQTVRAHLSEDWXZQFHRURHQNTDMBEZSWRKDMCEUFYZNTELAMANPKLOVIMXTSIAXSSQDFONYJMMMYGRHWFRJBQKSYVHGKHECBTEPKOHDBGDPYADMQCCLKBSNJCPGLVNITQUAIQWXJFWKXQETFRLXWZOFTWYPKUWPVBOEVOAUFSLXVZJUFIAGIRUUXADZ");

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
    msg.setTimeStamp(0.8709552565560484);
    msg.setSource(13873U);
    msg.setSourceEntity(238U);
    msg.setDestination(24529U);
    msg.setDestinationEntity(245U);
    msg.list.assign("ZNJNKCVQBPCHBSMHDDRCQYVYFJLUFTRZHCUQX");

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
    msg.setTimeStamp(0.5260606234126257);
    msg.setSource(16243U);
    msg.setSourceEntity(247U);
    msg.setDestination(62608U);
    msg.setDestinationEntity(208U);
    msg.list.assign("BFPROKRSDNUCNCMNZDBTYHGSERMMGXYFSWUPWHQAGVYBHXTVMTMQNDOBJNINVETVNIZVRFUQXBBDMDVWBTPEHZWGAZSIWHTQOEQKKGXVLOKALSJEJQRLKIBYAAZPNGXOTUUAOAKZZZTJJPJADOUGPXXDBSAPCRYHUONLUFWYQMYKYEMYFJSIQFXIIOWKLRWCJSAURGIBFLULZ");

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
    msg.setTimeStamp(0.7421054440161989);
    msg.setSource(13250U);
    msg.setSourceEntity(105U);
    msg.setDestination(26051U);
    msg.setDestinationEntity(132U);
    msg.value = -12340;

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
    msg.setTimeStamp(0.05512424084940193);
    msg.setSource(64076U);
    msg.setSourceEntity(186U);
    msg.setDestination(63879U);
    msg.setDestinationEntity(54U);
    msg.value = -11688;

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
    msg.setTimeStamp(0.8739514684945561);
    msg.setSource(50047U);
    msg.setSourceEntity(188U);
    msg.setDestination(6360U);
    msg.setDestinationEntity(118U);
    msg.value = -17060;

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
    msg.setTimeStamp(0.5943871759779549);
    msg.setSource(28675U);
    msg.setSourceEntity(5U);
    msg.setDestination(28808U);
    msg.setDestinationEntity(130U);
    msg.value = 0.5756520921714022;

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
    msg.setTimeStamp(0.6843216671318759);
    msg.setSource(13366U);
    msg.setSourceEntity(112U);
    msg.setDestination(15712U);
    msg.setDestinationEntity(241U);
    msg.value = 0.27264117307074087;

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
    msg.setTimeStamp(0.10247282661486867);
    msg.setSource(53608U);
    msg.setSourceEntity(144U);
    msg.setDestination(22011U);
    msg.setDestinationEntity(253U);
    msg.value = 0.041994096810314185;

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
    msg.setTimeStamp(0.7026174107630909);
    msg.setSource(2774U);
    msg.setSourceEntity(235U);
    msg.setDestination(46912U);
    msg.setDestinationEntity(75U);
    msg.value = 0.9936665984802022;

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
    msg.setTimeStamp(0.0077510876929124395);
    msg.setSource(35751U);
    msg.setSourceEntity(147U);
    msg.setDestination(34032U);
    msg.setDestinationEntity(16U);
    msg.value = 0.7878273141129802;

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
    msg.setTimeStamp(0.3669490853687114);
    msg.setSource(51259U);
    msg.setSourceEntity(115U);
    msg.setDestination(39872U);
    msg.setDestinationEntity(171U);
    msg.value = 0.4497882811110967;

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
    msg.setTimeStamp(0.14357002399063323);
    msg.setSource(51728U);
    msg.setSourceEntity(185U);
    msg.setDestination(18723U);
    msg.setDestinationEntity(236U);
    msg.validity = 65097U;
    msg.type = 54U;
    msg.utc_year = 43973U;
    msg.utc_month = 187U;
    msg.utc_day = 143U;
    msg.utc_time = 0.4186037811583617;
    msg.lat = 0.4429023957021291;
    msg.lon = 0.16194727777292772;
    msg.height = 0.9805758235458928;
    msg.satellites = 184U;
    msg.cog = 0.7452879077508978;
    msg.sog = 0.01654299934266379;
    msg.hdop = 0.20168567209872423;
    msg.vdop = 0.014691717819499295;
    msg.hacc = 0.7224050562402349;
    msg.vacc = 0.023628720787600144;

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
    msg.setTimeStamp(0.6429716191175077);
    msg.setSource(45160U);
    msg.setSourceEntity(92U);
    msg.setDestination(41913U);
    msg.setDestinationEntity(19U);
    msg.validity = 43477U;
    msg.type = 135U;
    msg.utc_year = 63873U;
    msg.utc_month = 191U;
    msg.utc_day = 182U;
    msg.utc_time = 0.6390000972393075;
    msg.lat = 0.44778099451876285;
    msg.lon = 0.6866477801029841;
    msg.height = 0.5595764929578696;
    msg.satellites = 229U;
    msg.cog = 0.6771513690358437;
    msg.sog = 0.29190409938942985;
    msg.hdop = 0.3783996740473399;
    msg.vdop = 0.231831125110474;
    msg.hacc = 0.9991637024082707;
    msg.vacc = 0.3114081964974731;

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
    msg.setTimeStamp(0.46836182033221607);
    msg.setSource(17359U);
    msg.setSourceEntity(104U);
    msg.setDestination(19326U);
    msg.setDestinationEntity(188U);
    msg.validity = 29540U;
    msg.type = 72U;
    msg.utc_year = 6110U;
    msg.utc_month = 237U;
    msg.utc_day = 109U;
    msg.utc_time = 0.23296121164459616;
    msg.lat = 0.11775267852221494;
    msg.lon = 0.41872900097070975;
    msg.height = 0.6701167222375908;
    msg.satellites = 123U;
    msg.cog = 0.5973150646262267;
    msg.sog = 0.7997129803886228;
    msg.hdop = 0.06035426268154831;
    msg.vdop = 0.6997486855374306;
    msg.hacc = 0.31657606230977764;
    msg.vacc = 0.8456714959323888;

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
    msg.setTimeStamp(0.45303015749028563);
    msg.setSource(47499U);
    msg.setSourceEntity(180U);
    msg.setDestination(42150U);
    msg.setDestinationEntity(86U);
    msg.time = 0.6533287301007639;
    msg.phi = 0.013035367105995399;
    msg.theta = 0.87838934720593;
    msg.psi = 0.6972307702314502;
    msg.psi_magnetic = 0.49679160618540485;

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
    msg.setTimeStamp(0.3421351524862115);
    msg.setSource(64113U);
    msg.setSourceEntity(240U);
    msg.setDestination(25713U);
    msg.setDestinationEntity(109U);
    msg.time = 0.6340670850057946;
    msg.phi = 0.35877501180084703;
    msg.theta = 0.3320975605574966;
    msg.psi = 0.898187652729209;
    msg.psi_magnetic = 0.14399409812709896;

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
    msg.setTimeStamp(0.36201521817232163);
    msg.setSource(2883U);
    msg.setSourceEntity(153U);
    msg.setDestination(64944U);
    msg.setDestinationEntity(35U);
    msg.time = 0.14325386510300808;
    msg.phi = 0.025021747428661922;
    msg.theta = 0.6558561831106613;
    msg.psi = 0.07382487148820849;
    msg.psi_magnetic = 0.5378784599856773;

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
    msg.setTimeStamp(0.2052093804427766);
    msg.setSource(37105U);
    msg.setSourceEntity(206U);
    msg.setDestination(36582U);
    msg.setDestinationEntity(56U);
    msg.time = 0.6757438604201095;
    msg.x = 0.25959978760190616;
    msg.y = 0.025703888648698214;
    msg.z = 0.9465545457461662;
    msg.timestep = 0.4054202759430192;

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
    msg.setTimeStamp(0.1683485882843968);
    msg.setSource(49643U);
    msg.setSourceEntity(171U);
    msg.setDestination(28806U);
    msg.setDestinationEntity(236U);
    msg.time = 0.11031037893011197;
    msg.x = 0.1323621193733444;
    msg.y = 0.19720416937407392;
    msg.z = 0.7895223561133163;
    msg.timestep = 0.9692721085800285;

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
    msg.setTimeStamp(0.9815893931126589);
    msg.setSource(23498U);
    msg.setSourceEntity(159U);
    msg.setDestination(33751U);
    msg.setDestinationEntity(145U);
    msg.time = 0.32456035290769425;
    msg.x = 0.2300084806513475;
    msg.y = 0.039746157287203654;
    msg.z = 0.03713235061518416;
    msg.timestep = 0.5278562719531055;

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
    msg.setTimeStamp(0.5525962612586588);
    msg.setSource(62975U);
    msg.setSourceEntity(143U);
    msg.setDestination(48337U);
    msg.setDestinationEntity(60U);
    msg.time = 0.32383570939696327;
    msg.x = 0.10154749322042322;
    msg.y = 0.6184411525960252;
    msg.z = 0.44309001952261595;

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
    msg.setTimeStamp(0.12876256807814102);
    msg.setSource(9995U);
    msg.setSourceEntity(214U);
    msg.setDestination(62801U);
    msg.setDestinationEntity(191U);
    msg.time = 0.6896871815051754;
    msg.x = 0.4283698683797137;
    msg.y = 0.5853232223663457;
    msg.z = 0.05728057248249463;

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
    msg.setTimeStamp(0.03472619381124109);
    msg.setSource(56U);
    msg.setSourceEntity(15U);
    msg.setDestination(19258U);
    msg.setDestinationEntity(216U);
    msg.time = 0.23349446243033556;
    msg.x = 0.3750574342206662;
    msg.y = 0.1831425002710555;
    msg.z = 0.32926292037424676;

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
    msg.setTimeStamp(0.19681817115770084);
    msg.setSource(64212U);
    msg.setSourceEntity(207U);
    msg.setDestination(57851U);
    msg.setDestinationEntity(167U);
    msg.time = 0.8104530326816052;
    msg.x = 0.9870999347751751;
    msg.y = 0.483678659609755;
    msg.z = 0.1894363294510265;

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
    msg.setTimeStamp(0.370306228310051);
    msg.setSource(17960U);
    msg.setSourceEntity(201U);
    msg.setDestination(29817U);
    msg.setDestinationEntity(221U);
    msg.time = 0.06947204044220034;
    msg.x = 0.730189028601877;
    msg.y = 0.16513801674651807;
    msg.z = 0.9404335224013134;

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
    msg.setTimeStamp(0.9252576882641851);
    msg.setSource(49101U);
    msg.setSourceEntity(165U);
    msg.setDestination(23534U);
    msg.setDestinationEntity(76U);
    msg.time = 0.9418524932737432;
    msg.x = 0.09749535878951465;
    msg.y = 0.011810965876542956;
    msg.z = 0.2943444723517482;

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
    msg.setTimeStamp(0.23047893044074652);
    msg.setSource(38368U);
    msg.setSourceEntity(65U);
    msg.setDestination(32694U);
    msg.setDestinationEntity(80U);
    msg.time = 0.5473189798347211;
    msg.x = 0.4104461994032321;
    msg.y = 0.6703380590485833;
    msg.z = 0.538131688801615;

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
    msg.setTimeStamp(0.4918055203163396);
    msg.setSource(3641U);
    msg.setSourceEntity(241U);
    msg.setDestination(14256U);
    msg.setDestinationEntity(182U);
    msg.time = 0.3154054781967931;
    msg.x = 0.42327846363834165;
    msg.y = 0.9922895416723637;
    msg.z = 0.8821521091458013;

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
    msg.setTimeStamp(0.33988075540616747);
    msg.setSource(40088U);
    msg.setSourceEntity(88U);
    msg.setDestination(50433U);
    msg.setDestinationEntity(49U);
    msg.time = 0.4137522054080598;
    msg.x = 0.8747677443157235;
    msg.y = 0.31118465318256916;
    msg.z = 0.9592703815622781;

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
    msg.setTimeStamp(0.467195574918145);
    msg.setSource(27831U);
    msg.setSourceEntity(78U);
    msg.setDestination(11923U);
    msg.setDestinationEntity(102U);
    msg.validity = 96U;
    msg.x = 0.3391984878125939;
    msg.y = 0.2538118968974724;
    msg.z = 0.14751467219471914;

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
    msg.setTimeStamp(0.8271362626654835);
    msg.setSource(20807U);
    msg.setSourceEntity(59U);
    msg.setDestination(4436U);
    msg.setDestinationEntity(37U);
    msg.validity = 155U;
    msg.x = 0.9041902424934708;
    msg.y = 0.11909575415588702;
    msg.z = 0.4429195550014532;

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
    msg.setTimeStamp(0.21747873622784664);
    msg.setSource(56647U);
    msg.setSourceEntity(130U);
    msg.setDestination(6152U);
    msg.setDestinationEntity(219U);
    msg.validity = 220U;
    msg.x = 0.060549329536609076;
    msg.y = 0.34409084501875165;
    msg.z = 0.6787907455776305;

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
    msg.setTimeStamp(0.1626277735858923);
    msg.setSource(46716U);
    msg.setSourceEntity(134U);
    msg.setDestination(5049U);
    msg.setDestinationEntity(202U);
    msg.validity = 59U;
    msg.x = 0.8452978150461912;
    msg.y = 0.14887430391961842;
    msg.z = 0.6751686698405178;

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
    msg.setTimeStamp(0.32889768421303855);
    msg.setSource(52439U);
    msg.setSourceEntity(25U);
    msg.setDestination(64088U);
    msg.setDestinationEntity(33U);
    msg.validity = 210U;
    msg.x = 0.09409160928619331;
    msg.y = 0.16580180186435922;
    msg.z = 0.6153184324280013;

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
    msg.setTimeStamp(0.004964655830750009);
    msg.setSource(40302U);
    msg.setSourceEntity(6U);
    msg.setDestination(18592U);
    msg.setDestinationEntity(216U);
    msg.validity = 76U;
    msg.x = 0.09568931516008183;
    msg.y = 0.7853738475514632;
    msg.z = 0.6564269776076849;

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
    msg.setTimeStamp(0.7287929059547849);
    msg.setSource(13641U);
    msg.setSourceEntity(107U);
    msg.setDestination(45192U);
    msg.setDestinationEntity(127U);
    msg.time = 0.8845347772115487;
    msg.x = 0.9216646216626968;
    msg.y = 0.5462967877262447;
    msg.z = 0.3932329529291163;

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
    msg.setTimeStamp(0.33145929878057956);
    msg.setSource(37944U);
    msg.setSourceEntity(213U);
    msg.setDestination(21476U);
    msg.setDestinationEntity(105U);
    msg.time = 0.4639570813002736;
    msg.x = 0.2647381480564529;
    msg.y = 0.7683158354997061;
    msg.z = 0.9519845416055277;

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
    msg.setTimeStamp(0.7446164121132022);
    msg.setSource(50512U);
    msg.setSourceEntity(77U);
    msg.setDestination(28919U);
    msg.setDestinationEntity(109U);
    msg.time = 0.477634765413115;
    msg.x = 0.1119830293050933;
    msg.y = 0.4963935294534486;
    msg.z = 0.42440560659317994;

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
    msg.setTimeStamp(0.7735212777081819);
    msg.setSource(48353U);
    msg.setSourceEntity(122U);
    msg.setDestination(2010U);
    msg.setDestinationEntity(135U);
    msg.validity = 162U;
    msg.value = 0.4641743003341331;

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
    msg.setTimeStamp(0.6576990999281607);
    msg.setSource(25876U);
    msg.setSourceEntity(18U);
    msg.setDestination(55809U);
    msg.setDestinationEntity(64U);
    msg.validity = 197U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2959403878437872;
    tmp_msg_0.y = 0.8723325914588691;
    tmp_msg_0.z = 0.3794119066678667;
    tmp_msg_0.phi = 0.27526909832227975;
    tmp_msg_0.theta = 0.14165271780718602;
    tmp_msg_0.psi = 0.8343039419372901;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.48070299881297995;

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
    msg.setTimeStamp(0.3492006653085291);
    msg.setSource(45216U);
    msg.setSourceEntity(182U);
    msg.setDestination(12128U);
    msg.setDestinationEntity(68U);
    msg.validity = 4U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.16034315878396466;
    tmp_msg_0.y = 0.22952858100002926;
    tmp_msg_0.z = 0.25511295084405194;
    tmp_msg_0.phi = 0.7453891524306554;
    tmp_msg_0.theta = 0.902351362914584;
    tmp_msg_0.psi = 0.6182700450420765;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.2914214081382327;
    tmp_msg_1.beam_height = 0.3722520478966198;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.08899691560492062;

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
    msg.setTimeStamp(0.9970875711545314);
    msg.setSource(8676U);
    msg.setSourceEntity(106U);
    msg.setDestination(624U);
    msg.setDestinationEntity(127U);
    msg.value = 0.8350691373738057;

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
    msg.setTimeStamp(0.16414394969670498);
    msg.setSource(30828U);
    msg.setSourceEntity(141U);
    msg.setDestination(60444U);
    msg.setDestinationEntity(45U);
    msg.value = 0.45762454251584617;

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
    msg.setTimeStamp(0.04571940184543377);
    msg.setSource(3990U);
    msg.setSourceEntity(74U);
    msg.setDestination(45446U);
    msg.setDestinationEntity(225U);
    msg.value = 0.5501152116819785;

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
    msg.setTimeStamp(0.6275292129736925);
    msg.setSource(62506U);
    msg.setSourceEntity(143U);
    msg.setDestination(55303U);
    msg.setDestinationEntity(35U);
    msg.value = 0.4494983366151255;

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
    msg.setTimeStamp(0.6456431127257534);
    msg.setSource(14594U);
    msg.setSourceEntity(247U);
    msg.setDestination(26872U);
    msg.setDestinationEntity(243U);
    msg.value = 0.05710233345913107;

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
    msg.setTimeStamp(0.6297712932784816);
    msg.setSource(52589U);
    msg.setSourceEntity(15U);
    msg.setDestination(1461U);
    msg.setDestinationEntity(217U);
    msg.value = 0.763880533382808;

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
    msg.setTimeStamp(0.6245075070602246);
    msg.setSource(23918U);
    msg.setSourceEntity(217U);
    msg.setDestination(8543U);
    msg.setDestinationEntity(17U);
    msg.value = 0.5700256930828841;

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
    msg.setTimeStamp(0.40936386651715895);
    msg.setSource(4574U);
    msg.setSourceEntity(175U);
    msg.setDestination(6491U);
    msg.setDestinationEntity(204U);
    msg.value = 0.6654818028245645;

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
    msg.setTimeStamp(0.5764681513879819);
    msg.setSource(22797U);
    msg.setSourceEntity(150U);
    msg.setDestination(8250U);
    msg.setDestinationEntity(179U);
    msg.value = 0.8177954968727541;

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
    msg.setTimeStamp(0.8217730357912925);
    msg.setSource(952U);
    msg.setSourceEntity(178U);
    msg.setDestination(63786U);
    msg.setDestinationEntity(214U);
    msg.value = 0.3343129736874033;

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
    msg.setTimeStamp(0.6491593819158292);
    msg.setSource(50511U);
    msg.setSourceEntity(186U);
    msg.setDestination(19028U);
    msg.setDestinationEntity(170U);
    msg.value = 0.09805286388094314;

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
    msg.setTimeStamp(0.9386799252068656);
    msg.setSource(54166U);
    msg.setSourceEntity(83U);
    msg.setDestination(41500U);
    msg.setDestinationEntity(87U);
    msg.value = 0.5235343264066751;

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
    msg.setTimeStamp(0.8578558335914224);
    msg.setSource(41934U);
    msg.setSourceEntity(139U);
    msg.setDestination(29438U);
    msg.setDestinationEntity(200U);
    msg.value = 0.33170747383867527;

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
    msg.setTimeStamp(0.16371207178048264);
    msg.setSource(17430U);
    msg.setSourceEntity(92U);
    msg.setDestination(59628U);
    msg.setDestinationEntity(165U);
    msg.value = 0.35282414955864627;

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
    msg.setTimeStamp(0.0875816143292798);
    msg.setSource(43227U);
    msg.setSourceEntity(108U);
    msg.setDestination(45735U);
    msg.setDestinationEntity(65U);
    msg.value = 0.6908981244823887;

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
    msg.setTimeStamp(0.44920987791752476);
    msg.setSource(39889U);
    msg.setSourceEntity(125U);
    msg.setDestination(32789U);
    msg.setDestinationEntity(129U);
    msg.value = 0.5214003107242601;

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
    msg.setTimeStamp(0.14788154585025293);
    msg.setSource(13451U);
    msg.setSourceEntity(251U);
    msg.setDestination(38515U);
    msg.setDestinationEntity(242U);
    msg.value = 0.9703204556510715;

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
    msg.setTimeStamp(0.21816989557959066);
    msg.setSource(14353U);
    msg.setSourceEntity(107U);
    msg.setDestination(29483U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5099011161225938;

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
    msg.setTimeStamp(0.7904204793997833);
    msg.setSource(14816U);
    msg.setSourceEntity(44U);
    msg.setDestination(9532U);
    msg.setDestinationEntity(236U);
    msg.value = 0.566848315140012;

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
    msg.setTimeStamp(0.8673611419242329);
    msg.setSource(17370U);
    msg.setSourceEntity(70U);
    msg.setDestination(8667U);
    msg.setDestinationEntity(38U);
    msg.value = 0.7995144198896581;

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
    msg.setTimeStamp(0.22895320607440217);
    msg.setSource(27274U);
    msg.setSourceEntity(97U);
    msg.setDestination(31021U);
    msg.setDestinationEntity(169U);
    msg.value = 0.20379516031271816;

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
    msg.setTimeStamp(0.40100830592068604);
    msg.setSource(57375U);
    msg.setSourceEntity(36U);
    msg.setDestination(47135U);
    msg.setDestinationEntity(10U);
    msg.value = 0.47866457440251153;

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
    msg.setTimeStamp(0.7110538194605628);
    msg.setSource(57399U);
    msg.setSourceEntity(106U);
    msg.setDestination(15916U);
    msg.setDestinationEntity(84U);
    msg.value = 0.35388339869318086;

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
    msg.setTimeStamp(0.9738598725512994);
    msg.setSource(50338U);
    msg.setSourceEntity(226U);
    msg.setDestination(11923U);
    msg.setDestinationEntity(118U);
    msg.value = 0.725288235432394;

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
    msg.setTimeStamp(0.23759310422451496);
    msg.setSource(975U);
    msg.setSourceEntity(127U);
    msg.setDestination(21460U);
    msg.setDestinationEntity(28U);
    msg.direction = 0.74771761672071;
    msg.speed = 0.46439789314536084;
    msg.turbulence = 0.23033228490990754;

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
    msg.setTimeStamp(0.27194232448302946);
    msg.setSource(29171U);
    msg.setSourceEntity(0U);
    msg.setDestination(3655U);
    msg.setDestinationEntity(0U);
    msg.direction = 0.3806433188956795;
    msg.speed = 0.19454990110160042;
    msg.turbulence = 0.48901728883594864;

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
    msg.setTimeStamp(0.5853301368447013);
    msg.setSource(20953U);
    msg.setSourceEntity(93U);
    msg.setDestination(21127U);
    msg.setDestinationEntity(115U);
    msg.direction = 0.7144379825787508;
    msg.speed = 0.43721257996330065;
    msg.turbulence = 0.4531609085151471;

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
    msg.setTimeStamp(0.29417450405848633);
    msg.setSource(45259U);
    msg.setSourceEntity(155U);
    msg.setDestination(52910U);
    msg.setDestinationEntity(132U);
    msg.value = 0.8546785670305416;

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
    msg.setTimeStamp(0.28417519463859564);
    msg.setSource(17098U);
    msg.setSourceEntity(32U);
    msg.setDestination(36935U);
    msg.setDestinationEntity(76U);
    msg.value = 0.2597510803210319;

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
    msg.setTimeStamp(0.41962648953983106);
    msg.setSource(56605U);
    msg.setSourceEntity(14U);
    msg.setDestination(8933U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9149666688203157;

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
    msg.setTimeStamp(0.8322134151771238);
    msg.setSource(1068U);
    msg.setSourceEntity(99U);
    msg.setDestination(44150U);
    msg.setDestinationEntity(76U);
    msg.value.assign("YOLLTUERSRQPAAQYMNEBSVKCALQTDCQNWKAYHNCGFLFIWBLCIJZVWWHOEUNVNXIQUKREIMJDBXH");

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
    msg.setTimeStamp(0.06341777274728333);
    msg.setSource(1632U);
    msg.setSourceEntity(107U);
    msg.setDestination(45549U);
    msg.setDestinationEntity(129U);
    msg.value.assign("HEBDIHPWIACLTSDWQOVHKWPSBDUCKZAMMYRYADFCDIKVLAXPEHLFCXBAEJGJLZMCIXXBYVGJSYHVZUYKUUFORNUSRHRUSFTKDQACAKGKGTLIVOWTSYTNNQOUSQSGABPTMORWYQVMAFJFNRAIWXXIBZUMZRKYVPUEKNROQWFXOEPFQEDNGUYVBJJBGENCPJBLNRQCTHIIMDS");

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
    msg.setTimeStamp(0.9923982172954318);
    msg.setSource(37731U);
    msg.setSourceEntity(6U);
    msg.setDestination(10683U);
    msg.setDestinationEntity(93U);
    msg.value.assign("FYPIDLGRBMQIMFMFFOVBQGQSSNETLKMNKWGQXVVMICCQKEJEMHRBZYDNMUFOEYBJAOGDCSJSOILHLGIXMGQRRZZ");

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
    msg.setTimeStamp(0.44929804386129335);
    msg.setSource(53039U);
    msg.setSourceEntity(85U);
    msg.setDestination(37655U);
    msg.setDestinationEntity(250U);
    const char tmp_msg_0[] = {-116, 30, -122, -87, 112, -27, -82, 39, -66, -26, -44, 87, -125, 74, -48, 78, -118, -102, -39, 103, -20, -70, 86, -46, 51, -49, 61, 9, -88, -103, -97, -78, 3, -47, 11, -85, 24, -127, 101, 66, 50, 24, 80, -98, -39, -74, -42, 108, -100, -80, 76, 120, -2, 63, 100, -123, 46, -113, -65, 5, 16, 88, -75, -5, 63, 77, 54, -40, 33, -68, 96, -53, -87, 105, 61, -121, 76, -118, 49, 25, 62, 58, -18, 106, 59, -65, 111, 46};
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
    msg.setTimeStamp(0.430878149552424);
    msg.setSource(60339U);
    msg.setSourceEntity(104U);
    msg.setDestination(2075U);
    msg.setDestinationEntity(111U);
    const char tmp_msg_0[] = {110, 12, 37, 59, -79, -67, -69, 93, 24, -80, 17, 41, -48, 124, 61, 115, 12, 22, -111, -39, -17, 30, 107, 51, 126, -71, 95, -25, 61, 112, 78, -32, -80, 58, -68, -121, 66, 104, 100, 119, 63, 2, 117, -92, 92, -60, 55, 43, 14, -19, -105, -2, -84, -10, 94, 86, 16, 89, 29, -18, 71, 31, -14, -123, -97, -63, -96, 115, -34, 88, 125, 50, 30, 34, -95, 62, -104, 60, -100, -12, -45, -38, -14, 1, -84, 77, 49, 30, 85, 114, -49, 50, -88, 83, 0, 94, -122, 98, -120, -20, -111, -43, 39, 17, -102, 0, -93, -124, -25, -87, 23, 88, 26, -89, -5, -84, -22, 67, 118, 107, 30, 26, 96, -18, -25, -127, 10, 44, 46, -55, 81, -75, 102, 49, 45, -60, 107, -12, -21, -47, -69, 20, -29, -125, -2, -42, -126, -90, -7, -61, -21};
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
    msg.setTimeStamp(0.9286923985437477);
    msg.setSource(16013U);
    msg.setSourceEntity(218U);
    msg.setDestination(14326U);
    msg.setDestinationEntity(195U);
    const char tmp_msg_0[] = {-77, 51, 104, 79, 3, -111, 3, -111, -125, 31, -119, 37, 42, 13, -119, 126, -96, -91, -98, -95, 22, 56, 81, 9, 77, -40, 64, -58, 14, -103, 111, -55, 32, 95, -83, 88, -1, -102, 56, 61, 77, 55, -50, -12, -72, -123, 71, -101, -68, 33, -95, 100, 120, 53, -100, -60, 5, 23, -27, -103, -9, 122, -121, 20, -39, -95, 90, 48, 42, -31, -4, 10, 90, 45, -4, -90, -20, 92, 98, -120, 20, 91, 23, 82, 82, 7, 15, 55, 0, -112, -111, -127, -72, -34, -56, 95, -127, 44, -1, 122, 67, 33, -127, 50, -10, 6, 121, 40, -81, 126, 115, -56, -115, 103, -54, -80, 49, -83, 116, -75, -108, 7, 91, 37, -15, 64, -56, -98, -43, -119, -33, 55, 8, -53, 5, -65, 26, 25, 18, 93, 29, 39, 39, 22, -73, 66, -72, -105, 99, -84, -85, -14, 112, 19, 47, -31, -21, 122, 38, -28, -61, -42, -94, 56, -45, -13, -66, 76, 92, 109, -17, 106, 90, -64, 105, -58, -116, -77, -124, -6, -78, -54, -23, -33, -58, -1, 30, 126, -20, 59, -127, -70, -124, -81, 15, -4, 6, -26, 114, 21, 43, -3, 91, -13, 38, -3, 8, 75, 9, 53, -48, -6, -23, 121, 64, -127, 4, 120, -96, -102, 119, 30, -22};
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
    msg.setTimeStamp(0.6152969493237515);
    msg.setSource(30548U);
    msg.setSourceEntity(40U);
    msg.setDestination(46792U);
    msg.setDestinationEntity(248U);
    msg.type = 132U;
    msg.frequency = 822407829U;
    msg.min_range = 40297U;
    msg.max_range = 58788U;
    msg.bits_per_point = 125U;
    msg.scale_factor = 0.8033069137046703;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.24579452769365973;
    tmp_msg_0.beam_height = 0.4612384076987268;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {98, 8, -94, -126, -73, -60, 9, 66, 24, 67, -32, 76, -44, -77, -116, -53, 102, 123, -11, 101, -5, -65, 43, -117, -42, -10, -104, 26, 66, -81, -94, -114, 10, 17, 12, -113, -74, -53, 62, 40, 126, 89, 122, -1, -52, 109, 36, -45, 51, -111, 107, 107, -33, 38, 104, -79, 26, 102, 76, 97, 4, 42, 107, 86, 51, -70, 50, -114, 124, -108, -82, -77, -77, -86, -113, 62, -44, -51, -24, -16, -24, -1, -87, -128, -19, -81, 60, -59, -16, 110, 60, 35, 15, 103, -82, -2, -29, -113, -43, -82, -30, 124, -111, -66, -2, 60, -79, 45, -30, 49, -89, -53, 64, 32, -54, 22, 103, -101, 91, -97, 108, -117, 115, 53, 63, 71, 49, -99, 4, -97, -116, 43, -110, -8, 96, -74, 51, 47, 15, -85, 87, -108, 17, 15, 96, -40, 98, -60, 79, -39, -37, 27, -19, -19, 24, -4, -106, 64, 101, 69, -102, -74, -124, 37, -3, 3, 91, 32, 21, 64, -51, -19, 26, 86, -40, -66, -1, 102, -24, -69, 55, 50, 74, -43, 111, -50, -13, 82, 19, -60, 113, 92, 67, 4, 70, 47, -125, 80, 99, 117, -59, -103, 49, 90, 38, -81, -119, 92, 90, -123, 88, 101, 49, -28, 7, -54, -127, 101, -104, -12, -11, 5, 64, 34, 100, 57, 85, -34, -67, -99, 41, 37, -93};
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
    msg.setTimeStamp(0.8463530322137223);
    msg.setSource(6051U);
    msg.setSourceEntity(113U);
    msg.setDestination(34835U);
    msg.setDestinationEntity(252U);
    msg.type = 244U;
    msg.frequency = 346655574U;
    msg.min_range = 28374U;
    msg.max_range = 46427U;
    msg.bits_per_point = 147U;
    msg.scale_factor = 0.9162731308231403;
    const char tmp_msg_0[] = {-5, -119, 70, 87, -126, -73, 58, -111, 120, 88, 66, -72, -47, 41, 93, 19, -59, -125, 29, 39, 52, -46, 58, 89, -107, -91, 124, -109, 11, 22, -20, -82, -42, -116, 87, 78, 56, 31, -69, -24, -79, 81, -124, -1, 10, -92, -56, -3, 83, -28, -65, -5, 78, -87, 60, 41, 123, 58, -103, -15, -66, 108, -59, -81, 51, 41, -110, -112, 8, -39, 37, -122, -50, 102, 64, 87, 42, -63, -17, -102, -34, -53, 80, 67, 26, 90, 28, 89, -50, -51, 45, 50, -30, -58, 38, -62, -31, 22, -93, -128, -1, -125, -79, -59, 124, 33, 24, -87, 50, 106, 50, 123, 29, -73, 22, -119};
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
    msg.setTimeStamp(0.11413019727034235);
    msg.setSource(16775U);
    msg.setSourceEntity(111U);
    msg.setDestination(48698U);
    msg.setDestinationEntity(47U);
    msg.type = 194U;
    msg.frequency = 2160095769U;
    msg.min_range = 24404U;
    msg.max_range = 15824U;
    msg.bits_per_point = 225U;
    msg.scale_factor = 0.6164681282732901;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.904568919249555;
    tmp_msg_0.beam_height = 0.7665026953131646;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {11, 46, 113, 120, -77, -81, 44, 47, 17, 5, 55, 9, 15, -43, -123, -19, 69, 39, 86, 85, 119, 88, -73, -71, -99, -52, -19, -114, 108, 23, 9, -45, 25, 20, -89, -104, -72, 43, -59};
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
    msg.setTimeStamp(0.7810969207628231);
    msg.setSource(32432U);
    msg.setSourceEntity(196U);
    msg.setDestination(4099U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.34514988924467327);
    msg.setSource(2538U);
    msg.setSourceEntity(127U);
    msg.setDestination(50870U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.27617641343358246);
    msg.setSource(12390U);
    msg.setSourceEntity(15U);
    msg.setDestination(47486U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.09235859497332);
    msg.setSource(35988U);
    msg.setSourceEntity(114U);
    msg.setDestination(35983U);
    msg.setDestinationEntity(156U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.24352500730612014);
    msg.setSource(57910U);
    msg.setSourceEntity(24U);
    msg.setDestination(5931U);
    msg.setDestinationEntity(70U);
    msg.op = 2U;

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
    msg.setTimeStamp(0.03512784774743927);
    msg.setSource(36965U);
    msg.setSourceEntity(169U);
    msg.setDestination(51784U);
    msg.setDestinationEntity(18U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.1670488003102193);
    msg.setSource(6882U);
    msg.setSourceEntity(101U);
    msg.setDestination(22331U);
    msg.setDestinationEntity(200U);
    msg.value = 0.6703704773374156;
    msg.confidence = 0.9528863885482624;
    msg.opmodes.assign("TCHNHZNWIPTASYJDKMXIJZKOLHYFMRWXLUMCOSBNEDSARPTQIILWJSWRCXKHFRHSNVPZUGOPULARAGKMKKKQISXIMDLGDRSHZPTAYQQOFUFYQJDBINJAKDFUWYXNAQTUZJVCJHCHTRKBVUWYXIDTBIUSSGTJAFFETQOCZVFLWLZNZRVBEEEVNISVXCNWYGACOELARQDWBEDGVBYGRFBHEUV");

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
    msg.setTimeStamp(0.7599410542749969);
    msg.setSource(44061U);
    msg.setSourceEntity(41U);
    msg.setDestination(37119U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9024796029234576;
    msg.confidence = 0.6857871759888159;
    msg.opmodes.assign("HJCVYNXFEKBWJRUCZEFTAOBJFPAXIAUFUKJUAFUERYZYMSCMPTQLOZLCXZWPIBCKPRIBKXOUYNWTZCSTAZNDGQQQVEDZCHLFDGPOOWAZVNTLRJLQJUOOGVDSAMS");

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
    msg.setTimeStamp(0.6065394306630195);
    msg.setSource(8U);
    msg.setSourceEntity(107U);
    msg.setDestination(41544U);
    msg.setDestinationEntity(158U);
    msg.value = 0.17715740925129575;
    msg.confidence = 0.042453560506896304;
    msg.opmodes.assign("INPGNEDISBHGMJOT");

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
    msg.setTimeStamp(0.12161899918299812);
    msg.setSource(48176U);
    msg.setSourceEntity(133U);
    msg.setDestination(12886U);
    msg.setDestinationEntity(82U);
    msg.itow = 629171742U;
    msg.lat = 0.6532247803595134;
    msg.lon = 0.28056892498639785;
    msg.height_ell = 0.8082006565340306;
    msg.height_sea = 0.6516804918297138;
    msg.hacc = 0.5212837247396395;
    msg.vacc = 0.38462858512142917;
    msg.vel_n = 0.04317756150616536;
    msg.vel_e = 0.03789306794298253;
    msg.vel_d = 0.9727060509398517;
    msg.speed = 0.6421720734052349;
    msg.gspeed = 0.7974153267147541;
    msg.heading = 0.7874436589284374;
    msg.sacc = 0.5300426688382023;
    msg.cacc = 0.450617940908256;

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
    msg.setTimeStamp(0.07730533911701631);
    msg.setSource(20409U);
    msg.setSourceEntity(21U);
    msg.setDestination(29950U);
    msg.setDestinationEntity(134U);
    msg.itow = 2800150744U;
    msg.lat = 0.31916202644117786;
    msg.lon = 0.6756280888972731;
    msg.height_ell = 0.3892919106018169;
    msg.height_sea = 0.9214335915801299;
    msg.hacc = 0.5532321013490107;
    msg.vacc = 0.8758374842147829;
    msg.vel_n = 0.8566985836946791;
    msg.vel_e = 0.8652808207139535;
    msg.vel_d = 0.49014338355842024;
    msg.speed = 0.2007766776055706;
    msg.gspeed = 0.45781273853452675;
    msg.heading = 0.9094420545683889;
    msg.sacc = 0.3859466927964921;
    msg.cacc = 0.08361139197183931;

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
    msg.setTimeStamp(0.9538491067970591);
    msg.setSource(37894U);
    msg.setSourceEntity(117U);
    msg.setDestination(3933U);
    msg.setDestinationEntity(53U);
    msg.itow = 1587236328U;
    msg.lat = 0.16680054867015826;
    msg.lon = 0.43444368493134655;
    msg.height_ell = 0.2249256958125635;
    msg.height_sea = 0.059818550531959835;
    msg.hacc = 0.5037519858804186;
    msg.vacc = 0.6148968982211435;
    msg.vel_n = 0.060574895901645776;
    msg.vel_e = 0.05905006343499386;
    msg.vel_d = 0.7960766169557733;
    msg.speed = 0.12147362050777522;
    msg.gspeed = 0.44964737991678594;
    msg.heading = 0.8139517850587081;
    msg.sacc = 0.3908009446907037;
    msg.cacc = 0.5016389350167347;

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
    msg.setTimeStamp(0.7991059303084203);
    msg.setSource(61508U);
    msg.setSourceEntity(128U);
    msg.setDestination(13445U);
    msg.setDestinationEntity(59U);
    msg.id = 251U;
    msg.value = 0.7468698810959918;

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
    msg.setTimeStamp(0.05222048064208973);
    msg.setSource(58746U);
    msg.setSourceEntity(178U);
    msg.setDestination(49017U);
    msg.setDestinationEntity(218U);
    msg.id = 234U;
    msg.value = 0.844574311988427;

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
    msg.setTimeStamp(0.0388136904068912);
    msg.setSource(39133U);
    msg.setSourceEntity(214U);
    msg.setDestination(55097U);
    msg.setDestinationEntity(76U);
    msg.id = 208U;
    msg.value = 0.7422848390892203;

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
    msg.setTimeStamp(0.6301076095079164);
    msg.setSource(52658U);
    msg.setSourceEntity(98U);
    msg.setDestination(13116U);
    msg.setDestinationEntity(86U);
    msg.x = 0.541297351231403;
    msg.y = 0.588189944621719;
    msg.z = 0.6455582700729116;
    msg.phi = 0.2856612881240401;
    msg.theta = 0.8149665797142622;
    msg.psi = 0.33996877343139975;

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
    msg.setTimeStamp(0.6398785158082604);
    msg.setSource(54786U);
    msg.setSourceEntity(245U);
    msg.setDestination(53014U);
    msg.setDestinationEntity(64U);
    msg.x = 0.7976215796568977;
    msg.y = 0.04253698514748461;
    msg.z = 0.11672686640838592;
    msg.phi = 0.6440900013466913;
    msg.theta = 0.6046520641791675;
    msg.psi = 0.2923367548762287;

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
    msg.setTimeStamp(0.731313900375088);
    msg.setSource(51497U);
    msg.setSourceEntity(52U);
    msg.setDestination(5121U);
    msg.setDestinationEntity(67U);
    msg.x = 0.9859062548235381;
    msg.y = 0.08339414384844801;
    msg.z = 0.1782812758743323;
    msg.phi = 0.5955399313156526;
    msg.theta = 0.34155260073299554;
    msg.psi = 0.06206132958982791;

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
    msg.setTimeStamp(0.521607545496036);
    msg.setSource(61593U);
    msg.setSourceEntity(56U);
    msg.setDestination(2518U);
    msg.setDestinationEntity(20U);
    msg.beam_width = 0.25047854749877474;
    msg.beam_height = 0.43617899415419414;

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
    msg.setTimeStamp(0.7620974263689759);
    msg.setSource(27004U);
    msg.setSourceEntity(240U);
    msg.setDestination(35261U);
    msg.setDestinationEntity(227U);
    msg.beam_width = 0.6278168975492509;
    msg.beam_height = 0.11162810954672286;

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
    msg.setTimeStamp(0.9834993201796667);
    msg.setSource(47862U);
    msg.setSourceEntity(0U);
    msg.setDestination(64885U);
    msg.setDestinationEntity(72U);
    msg.beam_width = 0.5968598167071483;
    msg.beam_height = 0.6121470717930991;

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
    msg.setTimeStamp(0.7826856251763968);
    msg.setSource(9280U);
    msg.setSourceEntity(151U);
    msg.setDestination(3096U);
    msg.setDestinationEntity(102U);
    msg.sane = 43U;

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
    msg.setTimeStamp(0.7957316215293601);
    msg.setSource(37922U);
    msg.setSourceEntity(74U);
    msg.setDestination(15042U);
    msg.setDestinationEntity(130U);
    msg.sane = 20U;

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
    msg.setTimeStamp(0.9921457668447412);
    msg.setSource(14689U);
    msg.setSourceEntity(47U);
    msg.setDestination(15870U);
    msg.setDestinationEntity(123U);
    msg.sane = 214U;

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
    msg.setTimeStamp(0.7917936719881413);
    msg.setSource(62663U);
    msg.setSourceEntity(254U);
    msg.setDestination(17953U);
    msg.setDestinationEntity(75U);
    msg.value = 0.7596736969849415;

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
    msg.setTimeStamp(0.3221125009878151);
    msg.setSource(7018U);
    msg.setSourceEntity(64U);
    msg.setDestination(30804U);
    msg.setDestinationEntity(206U);
    msg.value = 0.5640509137972499;

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
    msg.setTimeStamp(0.07180975294982728);
    msg.setSource(19129U);
    msg.setSourceEntity(138U);
    msg.setDestination(15441U);
    msg.setDestinationEntity(64U);
    msg.value = 0.03585805302227363;

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
    msg.setTimeStamp(0.067564287427056);
    msg.setSource(34191U);
    msg.setSourceEntity(215U);
    msg.setDestination(33676U);
    msg.setDestinationEntity(45U);
    msg.value = 0.25277099739309583;

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
    msg.setTimeStamp(0.14546111360736214);
    msg.setSource(30951U);
    msg.setSourceEntity(70U);
    msg.setDestination(50081U);
    msg.setDestinationEntity(57U);
    msg.value = 0.667015185961377;

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
    msg.setTimeStamp(0.19967374249362402);
    msg.setSource(58001U);
    msg.setSourceEntity(202U);
    msg.setDestination(33879U);
    msg.setDestinationEntity(211U);
    msg.value = 0.2757925469100082;

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
    msg.setTimeStamp(0.31955918885463164);
    msg.setSource(61644U);
    msg.setSourceEntity(90U);
    msg.setDestination(27842U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0037359944980471793;

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
    msg.setTimeStamp(0.5514006532652643);
    msg.setSource(46191U);
    msg.setSourceEntity(105U);
    msg.setDestination(4035U);
    msg.setDestinationEntity(199U);
    msg.value = 0.887899954345971;

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
    msg.setTimeStamp(0.4709653425678927);
    msg.setSource(23877U);
    msg.setSourceEntity(59U);
    msg.setDestination(14611U);
    msg.setDestinationEntity(149U);
    msg.value = 0.8952028752243747;

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
    msg.setTimeStamp(0.19214992850496426);
    msg.setSource(1046U);
    msg.setSourceEntity(228U);
    msg.setDestination(22557U);
    msg.setDestinationEntity(116U);
    msg.value = 0.9818406386943046;

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
    msg.setTimeStamp(0.5535838103022982);
    msg.setSource(31112U);
    msg.setSourceEntity(117U);
    msg.setDestination(35259U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6951816435371634;

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
    msg.setTimeStamp(0.9136646319594244);
    msg.setSource(23123U);
    msg.setSourceEntity(195U);
    msg.setDestination(37115U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5495455865977105;

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
    msg.setTimeStamp(0.6960927800591302);
    msg.setSource(52832U);
    msg.setSourceEntity(74U);
    msg.setDestination(11183U);
    msg.setDestinationEntity(188U);
    msg.value = 0.9079797159858385;

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
    msg.setTimeStamp(0.25188481502955584);
    msg.setSource(49565U);
    msg.setSourceEntity(72U);
    msg.setDestination(51825U);
    msg.setDestinationEntity(135U);
    msg.value = 0.2828031228838359;

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
    msg.setTimeStamp(0.4787598588454022);
    msg.setSource(62980U);
    msg.setSourceEntity(54U);
    msg.setDestination(49743U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7494575808702446;

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
    msg.setTimeStamp(0.9332816511614008);
    msg.setSource(23586U);
    msg.setSourceEntity(179U);
    msg.setDestination(58292U);
    msg.setDestinationEntity(70U);
    msg.id = 224U;
    msg.zoom = 180U;
    msg.action = 77U;

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
    msg.setTimeStamp(0.8116358674543915);
    msg.setSource(55715U);
    msg.setSourceEntity(57U);
    msg.setDestination(41664U);
    msg.setDestinationEntity(192U);
    msg.id = 80U;
    msg.zoom = 94U;
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
    msg.setTimeStamp(0.8376304172568966);
    msg.setSource(32361U);
    msg.setSourceEntity(34U);
    msg.setDestination(21459U);
    msg.setDestinationEntity(235U);
    msg.id = 156U;
    msg.zoom = 220U;
    msg.action = 117U;

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
    msg.setTimeStamp(0.7370461839359546);
    msg.setSource(50556U);
    msg.setSourceEntity(190U);
    msg.setDestination(59233U);
    msg.setDestinationEntity(10U);
    msg.id = 44U;
    msg.value = 0.9492382549544847;

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
    msg.setTimeStamp(0.44274857174607585);
    msg.setSource(62034U);
    msg.setSourceEntity(243U);
    msg.setDestination(41175U);
    msg.setDestinationEntity(79U);
    msg.id = 42U;
    msg.value = 0.2782859865613675;

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
    msg.setTimeStamp(0.040299281882659854);
    msg.setSource(59416U);
    msg.setSourceEntity(149U);
    msg.setDestination(15695U);
    msg.setDestinationEntity(192U);
    msg.id = 82U;
    msg.value = 0.06447093942240911;

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
    msg.setTimeStamp(0.29335171114871617);
    msg.setSource(26092U);
    msg.setSourceEntity(199U);
    msg.setDestination(2898U);
    msg.setDestinationEntity(85U);
    msg.id = 211U;
    msg.value = 0.1803401148286069;

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
    msg.setTimeStamp(0.14013915415207578);
    msg.setSource(15768U);
    msg.setSourceEntity(96U);
    msg.setDestination(45303U);
    msg.setDestinationEntity(109U);
    msg.id = 241U;
    msg.value = 0.3267159554696871;

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
    msg.setTimeStamp(0.7835975342977771);
    msg.setSource(31453U);
    msg.setSourceEntity(144U);
    msg.setDestination(49044U);
    msg.setDestinationEntity(124U);
    msg.id = 146U;
    msg.value = 0.4850688479480041;

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
    msg.setTimeStamp(0.10289613404234454);
    msg.setSource(49449U);
    msg.setSourceEntity(254U);
    msg.setDestination(52888U);
    msg.setDestinationEntity(87U);
    msg.id = 223U;
    msg.angle = 0.16896264530443095;

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
    msg.setTimeStamp(0.2552761594345284);
    msg.setSource(31357U);
    msg.setSourceEntity(223U);
    msg.setDestination(11277U);
    msg.setDestinationEntity(112U);
    msg.id = 216U;
    msg.angle = 0.6448871681044954;

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
    msg.setTimeStamp(0.6961200112889565);
    msg.setSource(5271U);
    msg.setSourceEntity(103U);
    msg.setDestination(51869U);
    msg.setDestinationEntity(122U);
    msg.id = 124U;
    msg.angle = 0.7950402893000852;

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
    msg.setTimeStamp(0.6685380551792168);
    msg.setSource(48045U);
    msg.setSourceEntity(45U);
    msg.setDestination(18971U);
    msg.setDestinationEntity(211U);
    msg.op = 204U;
    msg.actions.assign("UYBNKMOTNCNBEEOBYKNZCOYIVTSDNJISTFQJTUTEOPZSTHRYQUEGBWXKZOVGVMNLCRFLSLOCSXIUHUGVPRWYVCMJIDJAISRMSZVMNLZHWHZTIWIQAWAXDNOQYKKQIBRAJCPZOCLWXJYZPGVFEDURSBFBRVPFXNHDEWAKDGZCHLBZURTUNPJFAFGQWFVPHPDGJBVOXHYMXHIDHFLETEJMBAWKO");

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
    msg.setTimeStamp(0.5673027097194263);
    msg.setSource(61253U);
    msg.setSourceEntity(78U);
    msg.setDestination(61780U);
    msg.setDestinationEntity(136U);
    msg.op = 198U;
    msg.actions.assign("DMRTEKAAGLNUXCWOSNIBQTFGFJZDZABXSMETBJSLKTGZPKFMJYJVOPJPGCPHCWQWERVKBVAQHCDTSIRMPVVHUHJHTUUDALCDGORRVDCIYIQYZFRIMYNXZBIXPCOERAWKEOCYRNBFOPXJSBFJFBRBMRQTOIZUVNEYZLNNGGDSEFLWMMHUMZNEQUWVSWYQUODLSXUYQYLDKDWMZKKUPLHSOLAF");

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
    msg.setTimeStamp(0.007665334702978477);
    msg.setSource(2444U);
    msg.setSourceEntity(46U);
    msg.setDestination(41647U);
    msg.setDestinationEntity(168U);
    msg.op = 73U;
    msg.actions.assign("IDLECVRHUWMDBZWLURZAEBQPJLKVHWOQLXFPWKTPMMDGDGYYHFPLLRCSCHSTVIZZVHOGPHMGDATMXNQRUKOCXPYQDLGEUQVNYMGEMUXIK");

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
    msg.setTimeStamp(0.37581681753705953);
    msg.setSource(58475U);
    msg.setSourceEntity(110U);
    msg.setDestination(45844U);
    msg.setDestinationEntity(37U);
    msg.actions.assign("UWXYZZCJREJQGBKTAXAFORVRFGVDQGDQNSEJITFMWBTNBNGRZXIWNDFYAUOEXQZDLTSZKAVUNJNWBFULRTVIUCBBYXTQZBUMNCTZSSHHQDYKYRUPLMGBLNJHIHMHEPWKEWPFRXHACFPREZKOHDQFVOMTXGJMEROHEGSSSSWVC");

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
    msg.setTimeStamp(0.5692302037587245);
    msg.setSource(34260U);
    msg.setSourceEntity(140U);
    msg.setDestination(17908U);
    msg.setDestinationEntity(60U);
    msg.actions.assign("ZFRIQEMJYERIOIVQABBCVRRNZYNDGDDVHUWIOTBWSBXXKUFYRWJEJQGVSUVEGLHMPKUNLUUZAZRHJTHXZFCWPQANXWBAOAZKYLYWNLAOCFJTOAXOOZK");

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
    msg.setTimeStamp(0.6481072223650824);
    msg.setSource(25650U);
    msg.setSourceEntity(225U);
    msg.setDestination(33145U);
    msg.setDestinationEntity(159U);
    msg.actions.assign("APMSHKKPEZAONAWWADZXPUJOFWTZGGMGCZUBLCTGMPXNKWXHVVGCLBEFZLDOKJLCZIBBLILLDGRXHOEEYESAQNMZUDYRNJUTOCYOENOGRWQYMTURWJNTITYFVIGHSBVBZMUDQHXTROJGCUBUOZTJVSYQKPECHXKXKXHCXMWSMEIFBQANIAQJPNMPVIGBYLRUYLWDBAKMEYSQFIAEPYDPSHFHQQRKDWAXRPVVVTISIKFNHSJQULCOJWF");

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
    msg.setTimeStamp(0.03263757385006272);
    msg.setSource(63237U);
    msg.setSourceEntity(194U);
    msg.setDestination(10262U);
    msg.setDestinationEntity(252U);
    msg.button = 114U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.4567796664979522);
    msg.setSource(25239U);
    msg.setSourceEntity(4U);
    msg.setDestination(64467U);
    msg.setDestinationEntity(200U);
    msg.button = 247U;
    msg.value = 226U;

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
    msg.setTimeStamp(0.3866321666781267);
    msg.setSource(18263U);
    msg.setSourceEntity(225U);
    msg.setDestination(53975U);
    msg.setDestinationEntity(96U);
    msg.button = 3U;
    msg.value = 183U;

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
    msg.setTimeStamp(0.8594089849454822);
    msg.setSource(56320U);
    msg.setSourceEntity(230U);
    msg.setDestination(15410U);
    msg.setDestinationEntity(65U);
    msg.op = 35U;
    msg.text.assign("GUYEQYHHVOYXLRGNQZTKYPXFUHAXFIFLQHODVNYKRNJE");

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
    msg.setTimeStamp(0.06736642343839472);
    msg.setSource(46852U);
    msg.setSourceEntity(98U);
    msg.setDestination(62490U);
    msg.setDestinationEntity(153U);
    msg.op = 77U;
    msg.text.assign("HIJCRMECZSQCURZNTSLFQQJLPAEKFUKZQJVNRBRYWJZRHWGCOBSKBUEYTFSPUCGTPBAXDQKMKJGEAOIGLUMTDZMKHIRBDEQPDASLYCBHZLXIQQISXCJIEZPEXIFRWZGXVRUNGQAWGVYFSFJOINHHOMFTNBWWSAPNXBFZBSJHXAVYKOIRPJCFDFTVNTKNVXUTHOMUYMHRYVVOMJGPKKQPZGEICWYWPLBXNWDVALUOMM");

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
    msg.setTimeStamp(0.8407998636031775);
    msg.setSource(46237U);
    msg.setSourceEntity(247U);
    msg.setDestination(18610U);
    msg.setDestinationEntity(39U);
    msg.op = 102U;
    msg.text.assign("MMSZZRZWNCGUTRXIDXDKQYGVJWMANMIHEIGWMSLTIUDUXQAFPHOFFTNXTNHOSEYKAPBXLUOKEJJMFVEORZVADYESUQRPLDCSTWEAPSLPWKOBHJWOGRHEZZKIGBNRWNUOCZLAJELFOYAFYQSNBCHTFFJSVEANMVVAUGOQKNQJFBXIQBETAVSGRMTPQMIPLCZVYKWICYPRMLQJ");

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
    msg.setTimeStamp(0.8617539878530073);
    msg.setSource(44518U);
    msg.setSourceEntity(206U);
    msg.setDestination(17410U);
    msg.setDestinationEntity(29U);
    msg.op = 145U;
    msg.time_remain = 0.6742570611176811;
    msg.sched_time = 0.9485372891154545;

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
    msg.setTimeStamp(0.1725092042988401);
    msg.setSource(57139U);
    msg.setSourceEntity(166U);
    msg.setDestination(2388U);
    msg.setDestinationEntity(87U);
    msg.op = 196U;
    msg.time_remain = 0.7249529678079576;
    msg.sched_time = 0.9007149514748867;

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
    msg.setTimeStamp(0.5851678379828354);
    msg.setSource(9230U);
    msg.setSourceEntity(241U);
    msg.setDestination(42110U);
    msg.setDestinationEntity(209U);
    msg.op = 91U;
    msg.time_remain = 0.6392997812864458;
    msg.sched_time = 0.10780253209472646;

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
    msg.setTimeStamp(0.5020438159176367);
    msg.setSource(40712U);
    msg.setSourceEntity(204U);
    msg.setDestination(63306U);
    msg.setDestinationEntity(49U);
    msg.name.assign("KTBMPFYLWOIHQEA");
    msg.op = 253U;
    msg.sched_time = 0.2549092840709887;

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
    msg.setTimeStamp(0.14370792634775964);
    msg.setSource(60880U);
    msg.setSourceEntity(59U);
    msg.setDestination(52198U);
    msg.setDestinationEntity(177U);
    msg.name.assign("SRDTYKVORDEFVIEMHYTVYFNZCNQLYZWGO");
    msg.op = 192U;
    msg.sched_time = 0.7782529179293823;

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
    msg.setTimeStamp(0.6909068463379223);
    msg.setSource(57488U);
    msg.setSourceEntity(10U);
    msg.setDestination(16195U);
    msg.setDestinationEntity(112U);
    msg.name.assign("RLTTLVKXMREYWXLTANPCTKGGNLIYJLAMLSFPJOVEQVIYGDCMECOSKGRYGMRZKERXYUOQETZU");
    msg.op = 147U;
    msg.sched_time = 0.9134275239277142;

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
    msg.setTimeStamp(0.7423840257557813);
    msg.setSource(36875U);
    msg.setSourceEntity(71U);
    msg.setDestination(48279U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.5105167609815737);
    msg.setSource(45872U);
    msg.setSourceEntity(64U);
    msg.setDestination(38671U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.6338579051487783);
    msg.setSource(61044U);
    msg.setSourceEntity(102U);
    msg.setDestination(3540U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.506122576326966);
    msg.setSource(14590U);
    msg.setSourceEntity(206U);
    msg.setDestination(57243U);
    msg.setDestinationEntity(211U);
    msg.name.assign("TSMCKWCATAOBJEPZVHKAOZJDZVWGTXJFYLHPTRMWXRDCXWOTHRGQEYTOBIUQLITVFKQQCOQVUMJNPIEYMVEMXQNQNXHFLYTPKJRKZUXDDABHJBSYSFRPDZYDACFYHEIKSMZPYYVZXJSQIFXCAAQBFUORCOGKWXOGZFESSIHXPUKMUPZWWNJCSHETUGILVEEGLHIDRRNTRWKRKVNWAI");
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
    msg.setTimeStamp(0.36006066244120805);
    msg.setSource(2037U);
    msg.setSourceEntity(132U);
    msg.setDestination(15047U);
    msg.setDestinationEntity(129U);
    msg.name.assign("DEJXPLJPPXJYQYKOPKDBSJUWCIXYPSMHEUEYUEJFYWQOPCZMHGTPISOZRWFBHRNVZIS");
    msg.state = 68U;

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
    msg.setTimeStamp(0.9220300837100882);
    msg.setSource(54537U);
    msg.setSourceEntity(194U);
    msg.setDestination(59184U);
    msg.setDestinationEntity(4U);
    msg.name.assign("XNKOYLPMZYAWWEYCGRNPHIWMDKISUOSNFXPANAABSIYZXCQPKZBGDALQVQAYMGBXRQBUGRFDKZKVQTNFTKMRGDHYRRMHJVTIHMDEVIQDRLJHVST");
    msg.state = 141U;

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
    msg.setTimeStamp(0.8763167420397573);
    msg.setSource(58530U);
    msg.setSourceEntity(20U);
    msg.setDestination(3047U);
    msg.setDestinationEntity(154U);
    msg.name.assign("ADHOXRUPRBADMUUIVTIAEWKASGTVHOCDIZYEQDPKUBSVVRMYTGTAGAXRURCBJJPWKVDPRNHKPEEXSRZZOXVKGNAQFPMXOYCVXCQBTKWXBZZFUXKOYNLCTEGMVWTLKSDHZBBAUQQJPNTONFZBCELYKLJGCSTZFHS");
    msg.value = 199U;

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
    msg.setTimeStamp(0.7037359222605568);
    msg.setSource(54511U);
    msg.setSourceEntity(47U);
    msg.setDestination(46813U);
    msg.setDestinationEntity(212U);
    msg.name.assign("EDCKTKTPSXMCSBDSDBGNYLOPQPJDLWKMAVLOJMYEKQYHJRKUXHOSFBCLZVJUNYHWKGOKHCMYRCIHLJKJCIPWYQGRXAIUEZQOFVXESRINXJQVWNNGTPZAHCIGLCMMHHNVORZXNCTGFCDSFTVWTIRYPXHDAKVJYTUFLMVAWQLPEAIW");
    msg.value = 214U;

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
    msg.setTimeStamp(0.4581134825289117);
    msg.setSource(11004U);
    msg.setSourceEntity(157U);
    msg.setDestination(35099U);
    msg.setDestinationEntity(194U);
    msg.name.assign("UUFNZMYTBQIFRHCSISJMLYRDMLSDFGHSXBDTWUIZCHVCWOFVUIMEFEXRVZHVDNYCUYLADJKBUAKWVRONNXMRNMGAJQONOOZUGVYQCSYYSWHRILAWTNOQVE");
    msg.value = 151U;

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
    msg.setTimeStamp(0.7403533557957431);
    msg.setSource(39722U);
    msg.setSourceEntity(128U);
    msg.setDestination(18223U);
    msg.setDestinationEntity(29U);
    msg.name.assign("JRZWNEUMSRXLWEIYLDXISJIHCLJYPDVFZVFURYEWVTTBRSFMHTPLSAWDFPEDCALGNCINGJKUAXOJXVVQMGVBXKZQEOPZOVUONMDKEQSQPWKUAZOHWDVESHQIZHIWBVHMTLCNUQUGOHWFXOWSNEPINNQDYGFTKCYOBCPBIYMATBZFDQYZHZRIRXMLKQRHGLVGXRIPQBRLYMKBANJWAOYCDTTLJFAEKPUMPKSMUYGFGXEFKBCTJZDUXSA");

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
    msg.setTimeStamp(0.18714539992814538);
    msg.setSource(37580U);
    msg.setSourceEntity(245U);
    msg.setDestination(23421U);
    msg.setDestinationEntity(54U);
    msg.name.assign("HGKIMTQVQBTYCSZVUUYVWBRHBSTGNZHGFDCPFWORKMUHK");

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
    msg.setTimeStamp(0.3946132423854428);
    msg.setSource(31135U);
    msg.setSourceEntity(206U);
    msg.setDestination(890U);
    msg.setDestinationEntity(35U);
    msg.name.assign("EETKVPMBIXLDJLXANKCVWJISJDAWEUZXXKLHYUADTRMJSFIUBTQFS");

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
    msg.setTimeStamp(0.09185471225269748);
    msg.setSource(37536U);
    msg.setSourceEntity(149U);
    msg.setDestination(41092U);
    msg.setDestinationEntity(28U);
    msg.name.assign("HQOGYOIPNJFBEZSSOBYMPZJIUAELIQTKLFCGYSTTLQZPASHRJLDRWJPTXAWKKKZAWGJTLNCKUIBVVPGMDFXHHYCCIOMUXRAPLDYYQSICNZUXRJRHGDUTFPMKZFSTNNNNRHOOVREWOTCVSRMHYGQWNQKSRAWFIHEMDXDOCAJKMTPWVCBLUVLAGBWZGSMBVLZVUGSWTEXRB");
    msg.value = 205U;

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
    msg.setTimeStamp(0.45481190888733947);
    msg.setSource(4252U);
    msg.setSourceEntity(164U);
    msg.setDestination(52960U);
    msg.setDestinationEntity(211U);
    msg.name.assign("VEESBSCYJCQVWEQPWGRPUKJZOWIWEZEABVXUTOCFNNYIFBRJQDBAXAXUMWOWKQKSTRMOXONALHQCIBANJJCLZSWSAGGRXUOHHZYXYWUZFFDITIEGJBVG");
    msg.value = 126U;

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
    msg.setTimeStamp(0.4635092841546723);
    msg.setSource(4426U);
    msg.setSourceEntity(172U);
    msg.setDestination(30975U);
    msg.setDestinationEntity(74U);
    msg.name.assign("USLXXEOFQNTCMCNJIXJSBMQNKBPGZDZJTLVHRUXPOALWNOLGEHDNTZDXZRZLAWSHRFCBIDCWQYIQQSUHDKWMWGONVDPBJYVNYTGICMWGKSAOFAKSUAZDKURVHLHKYKYTBMZRPCELUQNLAUTJCEGRAAQYKOD");
    msg.value = 119U;

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
    msg.setTimeStamp(0.03666175028254692);
    msg.setSource(18972U);
    msg.setSourceEntity(168U);
    msg.setDestination(8446U);
    msg.setDestinationEntity(188U);
    msg.id = 112U;
    msg.period = 1756558331U;
    msg.duty_cycle = 2597191628U;

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
    msg.setTimeStamp(0.23591875559352893);
    msg.setSource(17649U);
    msg.setSourceEntity(37U);
    msg.setDestination(2646U);
    msg.setDestinationEntity(129U);
    msg.id = 213U;
    msg.period = 2566472805U;
    msg.duty_cycle = 3643092421U;

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
    msg.setTimeStamp(0.48254052108705636);
    msg.setSource(27053U);
    msg.setSourceEntity(223U);
    msg.setDestination(2727U);
    msg.setDestinationEntity(66U);
    msg.id = 178U;
    msg.period = 3198307948U;
    msg.duty_cycle = 333713032U;

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
    msg.setTimeStamp(0.20200595878026328);
    msg.setSource(59904U);
    msg.setSourceEntity(212U);
    msg.setDestination(27680U);
    msg.setDestinationEntity(131U);
    msg.id = 175U;
    msg.period = 2406338496U;
    msg.duty_cycle = 1173100919U;

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
    msg.setTimeStamp(0.7012316503539954);
    msg.setSource(32310U);
    msg.setSourceEntity(65U);
    msg.setDestination(42507U);
    msg.setDestinationEntity(74U);
    msg.id = 5U;
    msg.period = 444371367U;
    msg.duty_cycle = 534155801U;

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
    msg.setTimeStamp(0.06058480345323014);
    msg.setSource(62569U);
    msg.setSourceEntity(235U);
    msg.setDestination(27277U);
    msg.setDestinationEntity(42U);
    msg.id = 253U;
    msg.period = 1781229610U;
    msg.duty_cycle = 1456881601U;

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
    msg.setTimeStamp(0.6330511116026953);
    msg.setSource(19325U);
    msg.setSourceEntity(67U);
    msg.setDestination(11841U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.6515787590256139;
    msg.lon = 0.11559090553418727;
    msg.height = 0.19247438341316192;
    msg.x = 0.4315238895926983;
    msg.y = 0.2652107114260722;
    msg.z = 0.19359614543958303;
    msg.phi = 0.5275158840933444;
    msg.theta = 0.20510204977132718;
    msg.psi = 0.3738204548643591;
    msg.u = 0.45971570979126475;
    msg.v = 0.7879751228383478;
    msg.w = 0.9939480255736542;
    msg.vx = 0.11860210973109564;
    msg.vy = 0.9473300630694529;
    msg.vz = 0.6493373558771723;
    msg.p = 0.728071111430162;
    msg.q = 0.4309712551445304;
    msg.r = 0.5987856309872079;
    msg.depth = 0.357034159083885;
    msg.alt = 0.9615397617971645;

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
    msg.setTimeStamp(0.33984079253976796);
    msg.setSource(60671U);
    msg.setSourceEntity(199U);
    msg.setDestination(16898U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.8107377104759727;
    msg.lon = 0.6775351941941078;
    msg.height = 0.9538178113294344;
    msg.x = 0.35807398830336834;
    msg.y = 0.36929005954897254;
    msg.z = 0.6630555349235;
    msg.phi = 0.39555195212939454;
    msg.theta = 0.4839998795786168;
    msg.psi = 0.6956317053125679;
    msg.u = 0.03600836001340513;
    msg.v = 0.3927212705400619;
    msg.w = 0.9358488849055813;
    msg.vx = 0.07323194391971777;
    msg.vy = 0.22749234511332783;
    msg.vz = 0.9560906283702744;
    msg.p = 0.5092239858530049;
    msg.q = 0.5433471142820615;
    msg.r = 0.31679264359279713;
    msg.depth = 0.33190505614718246;
    msg.alt = 0.6597775321261832;

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
    msg.setTimeStamp(0.031626189027971874);
    msg.setSource(21034U);
    msg.setSourceEntity(77U);
    msg.setDestination(51526U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.5133585951922061;
    msg.lon = 0.48844166637740005;
    msg.height = 0.08012521505524972;
    msg.x = 0.009591671376357191;
    msg.y = 0.5886627773515736;
    msg.z = 0.6985687462244381;
    msg.phi = 0.40246690285643094;
    msg.theta = 0.4209229096497118;
    msg.psi = 0.9533489212820192;
    msg.u = 0.6351762931869134;
    msg.v = 0.8481630387868272;
    msg.w = 0.09684749608787224;
    msg.vx = 0.6818535359510859;
    msg.vy = 0.35468909172726426;
    msg.vz = 0.7965639070335994;
    msg.p = 0.5218393865743527;
    msg.q = 0.4443533608762129;
    msg.r = 0.8557193012730775;
    msg.depth = 0.1732790078090577;
    msg.alt = 0.15709887343342188;

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
    msg.setTimeStamp(0.6650093649072125);
    msg.setSource(880U);
    msg.setSourceEntity(146U);
    msg.setDestination(60417U);
    msg.setDestinationEntity(203U);
    msg.x = 0.4955912674380081;
    msg.y = 0.019538090530704322;
    msg.z = 0.9981147185815163;

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
    msg.setTimeStamp(0.6432993789325953);
    msg.setSource(47752U);
    msg.setSourceEntity(15U);
    msg.setDestination(65394U);
    msg.setDestinationEntity(112U);
    msg.x = 0.878966567685276;
    msg.y = 0.5572172971686903;
    msg.z = 0.1666508848944317;

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
    msg.setTimeStamp(0.6946330601138455);
    msg.setSource(52508U);
    msg.setSourceEntity(122U);
    msg.setDestination(56413U);
    msg.setDestinationEntity(238U);
    msg.x = 0.6276457115460397;
    msg.y = 0.10324808307631084;
    msg.z = 0.3211963211925093;

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
    msg.setTimeStamp(0.6481123963323748);
    msg.setSource(36401U);
    msg.setSourceEntity(249U);
    msg.setDestination(27605U);
    msg.setDestinationEntity(139U);
    msg.value = 0.2823512461150077;

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
    msg.setTimeStamp(0.30894462842179793);
    msg.setSource(15947U);
    msg.setSourceEntity(9U);
    msg.setDestination(49834U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8470895691316442;

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
    msg.setTimeStamp(0.6067114214421242);
    msg.setSource(55022U);
    msg.setSourceEntity(226U);
    msg.setDestination(51869U);
    msg.setDestinationEntity(247U);
    msg.value = 0.7002177877170433;

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
    msg.setTimeStamp(0.4934921220351748);
    msg.setSource(50992U);
    msg.setSourceEntity(16U);
    msg.setDestination(2683U);
    msg.setDestinationEntity(189U);
    msg.value = 0.15355177352495397;

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
    msg.setTimeStamp(0.66868274405863);
    msg.setSource(36742U);
    msg.setSourceEntity(159U);
    msg.setDestination(32540U);
    msg.setDestinationEntity(225U);
    msg.value = 0.7933466010385788;

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
    msg.setTimeStamp(0.03825511645749691);
    msg.setSource(22435U);
    msg.setSourceEntity(149U);
    msg.setDestination(1298U);
    msg.setDestinationEntity(103U);
    msg.value = 0.17863439736982933;

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
    msg.setTimeStamp(0.533969922069038);
    msg.setSource(17377U);
    msg.setSourceEntity(68U);
    msg.setDestination(58720U);
    msg.setDestinationEntity(110U);
    msg.x = 0.27828085310943584;
    msg.y = 0.5692572546399669;
    msg.z = 0.4838061866146761;
    msg.phi = 0.710263565638645;
    msg.theta = 0.25220918761941336;
    msg.psi = 0.42889759085697965;
    msg.p = 0.6555996818299441;
    msg.q = 0.7930328672666607;
    msg.r = 0.49269986977166247;
    msg.u = 0.8978200545347194;
    msg.v = 0.5093779120882153;
    msg.w = 0.6135898146815366;
    msg.bias_psi = 0.6454436692241583;
    msg.bias_r = 0.4569048978708605;

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
    msg.setTimeStamp(0.26954092894321);
    msg.setSource(24332U);
    msg.setSourceEntity(239U);
    msg.setDestination(40087U);
    msg.setDestinationEntity(228U);
    msg.x = 0.47971846567001053;
    msg.y = 0.7614738219062468;
    msg.z = 0.11081049164338119;
    msg.phi = 0.7752366203458413;
    msg.theta = 0.3131468164478096;
    msg.psi = 0.015093164086037558;
    msg.p = 0.013743835321810893;
    msg.q = 0.45623476335603075;
    msg.r = 0.42457780105186727;
    msg.u = 0.9232792755043432;
    msg.v = 0.7756745795035767;
    msg.w = 0.3800281462211649;
    msg.bias_psi = 0.6966997924485956;
    msg.bias_r = 0.48241102032910943;

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
    msg.setTimeStamp(0.12420663159412215);
    msg.setSource(62328U);
    msg.setSourceEntity(52U);
    msg.setDestination(58491U);
    msg.setDestinationEntity(115U);
    msg.x = 0.3070991005849788;
    msg.y = 0.8205234887739934;
    msg.z = 0.3841014587285909;
    msg.phi = 0.5353050659528212;
    msg.theta = 0.8522325828863144;
    msg.psi = 0.4320078740806159;
    msg.p = 0.8314749717550333;
    msg.q = 0.9059847624634032;
    msg.r = 0.30142298064747575;
    msg.u = 0.4958553624658173;
    msg.v = 0.24955357830670832;
    msg.w = 0.23107816180226848;
    msg.bias_psi = 0.20636969544792627;
    msg.bias_r = 0.9939647025409283;

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
    msg.setTimeStamp(0.26621986119236285);
    msg.setSource(8836U);
    msg.setSourceEntity(204U);
    msg.setDestination(32101U);
    msg.setDestinationEntity(219U);
    msg.bias_psi = 0.061389968536381456;
    msg.bias_r = 0.7965597954793259;
    msg.cog = 0.7785494145447521;
    msg.cyaw = 0.5813836783581785;
    msg.lbl_rej_level = 0.95353484377686;
    msg.gps_rej_level = 0.013472889836984914;
    msg.custom_x = 0.5284185130177748;
    msg.custom_y = 0.4737664444036356;
    msg.custom_z = 0.5124544529958848;

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
    msg.setTimeStamp(0.05123904678931801);
    msg.setSource(57579U);
    msg.setSourceEntity(185U);
    msg.setDestination(17075U);
    msg.setDestinationEntity(172U);
    msg.bias_psi = 0.20755930930281885;
    msg.bias_r = 0.4173447274276759;
    msg.cog = 0.7883848052077038;
    msg.cyaw = 0.11722089865903851;
    msg.lbl_rej_level = 0.7782246506163302;
    msg.gps_rej_level = 0.24563496023200881;
    msg.custom_x = 0.19835397865473403;
    msg.custom_y = 0.19972191038254083;
    msg.custom_z = 0.19790184398119604;

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
    msg.setTimeStamp(0.472316196078296);
    msg.setSource(56837U);
    msg.setSourceEntity(172U);
    msg.setDestination(19979U);
    msg.setDestinationEntity(100U);
    msg.bias_psi = 0.392164286023326;
    msg.bias_r = 0.35181521843155406;
    msg.cog = 0.5206610726774606;
    msg.cyaw = 0.3742656576173786;
    msg.lbl_rej_level = 0.3882436801924509;
    msg.gps_rej_level = 0.2062527170636469;
    msg.custom_x = 0.2434393595686759;
    msg.custom_y = 0.9305831873787954;
    msg.custom_z = 0.17651752746828997;

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
    msg.setTimeStamp(0.9071141804561333);
    msg.setSource(6717U);
    msg.setSourceEntity(238U);
    msg.setDestination(60237U);
    msg.setDestinationEntity(82U);
    msg.utc_time = 0.7246327428126182;
    msg.reason = 23U;

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
    msg.setTimeStamp(0.9326767006255998);
    msg.setSource(60334U);
    msg.setSourceEntity(251U);
    msg.setDestination(8006U);
    msg.setDestinationEntity(147U);
    msg.utc_time = 0.05530945970778445;
    msg.reason = 115U;

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
    msg.setTimeStamp(0.714794041639369);
    msg.setSource(42789U);
    msg.setSourceEntity(89U);
    msg.setDestination(53961U);
    msg.setDestinationEntity(231U);
    msg.utc_time = 0.11903482421438039;
    msg.reason = 82U;

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
    msg.setTimeStamp(0.678345855405134);
    msg.setSource(2643U);
    msg.setSourceEntity(192U);
    msg.setDestination(4203U);
    msg.setDestinationEntity(216U);
    msg.id = 46U;
    msg.range = 0.7202387651992818;
    msg.acceptance = 115U;

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
    msg.setTimeStamp(0.048590085679226624);
    msg.setSource(10783U);
    msg.setSourceEntity(208U);
    msg.setDestination(12371U);
    msg.setDestinationEntity(180U);
    msg.id = 39U;
    msg.range = 0.14257005571086134;
    msg.acceptance = 171U;

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
    msg.setTimeStamp(0.8440476005682565);
    msg.setSource(17903U);
    msg.setSourceEntity(193U);
    msg.setDestination(55489U);
    msg.setDestinationEntity(110U);
    msg.id = 56U;
    msg.range = 0.4038910125841304;
    msg.acceptance = 235U;

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
    msg.setTimeStamp(0.12180742072283668);
    msg.setSource(4830U);
    msg.setSourceEntity(40U);
    msg.setDestination(6168U);
    msg.setDestinationEntity(98U);
    msg.type = 23U;
    msg.reason = 237U;
    msg.value = 0.05858805656625776;
    msg.timestep = 0.1633163370633487;

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
    msg.setTimeStamp(0.6803441304589901);
    msg.setSource(31941U);
    msg.setSourceEntity(211U);
    msg.setDestination(36590U);
    msg.setDestinationEntity(246U);
    msg.type = 97U;
    msg.reason = 41U;
    msg.value = 0.2567998891916642;
    msg.timestep = 0.20346843942867832;

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
    msg.setTimeStamp(0.10994438718389332);
    msg.setSource(43683U);
    msg.setSourceEntity(223U);
    msg.setDestination(12309U);
    msg.setDestinationEntity(32U);
    msg.type = 157U;
    msg.reason = 32U;
    msg.value = 0.4163010434975378;
    msg.timestep = 0.3910734096949855;

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
    msg.setTimeStamp(0.9461462150403713);
    msg.setSource(9109U);
    msg.setSourceEntity(58U);
    msg.setDestination(34293U);
    msg.setDestinationEntity(236U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EZSYQIWFWMPYUURZXXXJAXNBHZABDGCZIORXMTSTEHNFHNKKVOGNABQBQJUHOSSPYAKWSHEMQATELNBENPNCXTUIVKPJCJDOARKKIAYLWRDUPIQZMYTZWK");
    tmp_msg_0.lat = 0.8806410971866102;
    tmp_msg_0.lon = 0.19954436135559117;
    tmp_msg_0.depth = 0.3300548060403644;
    tmp_msg_0.query_channel = 177U;
    tmp_msg_0.reply_channel = 130U;
    tmp_msg_0.transponder_delay = 248U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.23659175897121132;
    msg.y = 0.9472469674289022;
    msg.var_x = 0.5392678403043751;
    msg.var_y = 0.9485587791347505;
    msg.distance = 0.9963459436208151;

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
    msg.setTimeStamp(0.8215077933671667);
    msg.setSource(29253U);
    msg.setSourceEntity(10U);
    msg.setDestination(12758U);
    msg.setDestinationEntity(198U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XJCHHHYLEBEMZFWRRFCIXHNMFCN");
    tmp_msg_0.lat = 0.09838858707890952;
    tmp_msg_0.lon = 0.2488231695439962;
    tmp_msg_0.depth = 0.8667192995860673;
    tmp_msg_0.query_channel = 29U;
    tmp_msg_0.reply_channel = 189U;
    tmp_msg_0.transponder_delay = 223U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.44705735324957074;
    msg.y = 0.6499716224653721;
    msg.var_x = 0.9363691052186076;
    msg.var_y = 0.502127346669317;
    msg.distance = 0.14216739575697224;

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
    msg.setTimeStamp(0.10316978593466208);
    msg.setSource(45777U);
    msg.setSourceEntity(142U);
    msg.setDestination(50972U);
    msg.setDestinationEntity(253U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WNLENSAGTPUYKFXANQRQDGEFEFDKWLQSWAKBV");
    tmp_msg_0.lat = 0.04654540426404541;
    tmp_msg_0.lon = 0.8683575970053162;
    tmp_msg_0.depth = 0.4687685308528964;
    tmp_msg_0.query_channel = 171U;
    tmp_msg_0.reply_channel = 190U;
    tmp_msg_0.transponder_delay = 63U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6271147464395259;
    msg.y = 0.6127666245751591;
    msg.var_x = 0.5159138846908731;
    msg.var_y = 0.2681438039935833;
    msg.distance = 0.8835422543579441;

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
    msg.setTimeStamp(0.6580316462088948);
    msg.setSource(36086U);
    msg.setSourceEntity(141U);
    msg.setDestination(29788U);
    msg.setDestinationEntity(128U);
    msg.state = 204U;

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
    msg.setTimeStamp(0.7488092384957228);
    msg.setSource(56205U);
    msg.setSourceEntity(240U);
    msg.setDestination(51679U);
    msg.setDestinationEntity(211U);
    msg.state = 93U;

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
    msg.setTimeStamp(0.3041868648607725);
    msg.setSource(18060U);
    msg.setSourceEntity(216U);
    msg.setDestination(42232U);
    msg.setDestinationEntity(134U);
    msg.state = 209U;

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
    msg.setTimeStamp(0.04354547924645291);
    msg.setSource(57084U);
    msg.setSourceEntity(166U);
    msg.setDestination(21492U);
    msg.setDestinationEntity(197U);
    msg.x = 0.628412530078525;
    msg.y = 0.31269368219354243;
    msg.z = 0.5508141526201016;

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
    msg.setTimeStamp(0.6511006760230074);
    msg.setSource(58093U);
    msg.setSourceEntity(203U);
    msg.setDestination(54152U);
    msg.setDestinationEntity(205U);
    msg.x = 0.6747185153742252;
    msg.y = 0.8095622651016353;
    msg.z = 0.46361831435137035;

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
    msg.setTimeStamp(0.5959946455072858);
    msg.setSource(34835U);
    msg.setSourceEntity(21U);
    msg.setDestination(12424U);
    msg.setDestinationEntity(122U);
    msg.x = 0.912446148886146;
    msg.y = 1.5255167501226907e-05;
    msg.z = 0.5807229385117164;

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
    msg.setTimeStamp(0.34089804364188436);
    msg.setSource(15571U);
    msg.setSourceEntity(40U);
    msg.setDestination(42181U);
    msg.setDestinationEntity(179U);
    msg.value = 0.8123264954065978;

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
    msg.setTimeStamp(0.4354996672235466);
    msg.setSource(61261U);
    msg.setSourceEntity(52U);
    msg.setDestination(41115U);
    msg.setDestinationEntity(183U);
    msg.value = 0.7182124414482289;

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
    msg.setTimeStamp(0.174264341596435);
    msg.setSource(32559U);
    msg.setSourceEntity(212U);
    msg.setDestination(62886U);
    msg.setDestinationEntity(91U);
    msg.value = 0.9210384203364159;

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
    msg.setTimeStamp(0.3342616952352555);
    msg.setSource(44050U);
    msg.setSourceEntity(6U);
    msg.setDestination(51088U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9971432697444964;
    msg.z_units = 154U;

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
    msg.setTimeStamp(0.1661328904626338);
    msg.setSource(34916U);
    msg.setSourceEntity(117U);
    msg.setDestination(11641U);
    msg.setDestinationEntity(248U);
    msg.value = 0.5347156577412068;
    msg.z_units = 41U;

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
    msg.setTimeStamp(0.5268335323009199);
    msg.setSource(45887U);
    msg.setSourceEntity(7U);
    msg.setDestination(7227U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5049503960968093;
    msg.z_units = 162U;

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
    msg.setTimeStamp(0.9106257527305376);
    msg.setSource(14380U);
    msg.setSourceEntity(146U);
    msg.setDestination(52449U);
    msg.setDestinationEntity(103U);
    msg.value = 0.2342367512165744;
    msg.speed_units = 212U;

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
    msg.setTimeStamp(0.9880695869215234);
    msg.setSource(2775U);
    msg.setSourceEntity(94U);
    msg.setDestination(10230U);
    msg.setDestinationEntity(104U);
    msg.value = 0.3037355406702352;
    msg.speed_units = 246U;

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
    msg.setTimeStamp(0.6406420084834409);
    msg.setSource(11638U);
    msg.setSourceEntity(31U);
    msg.setDestination(20337U);
    msg.setDestinationEntity(21U);
    msg.value = 0.9003972090952758;
    msg.speed_units = 1U;

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
    msg.setTimeStamp(0.2983395099877545);
    msg.setSource(8452U);
    msg.setSourceEntity(99U);
    msg.setDestination(6361U);
    msg.setDestinationEntity(180U);
    msg.value = 0.3182673762524314;

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
    msg.setTimeStamp(0.37700840977573546);
    msg.setSource(22642U);
    msg.setSourceEntity(193U);
    msg.setDestination(55151U);
    msg.setDestinationEntity(192U);
    msg.value = 0.6748229037423418;

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
    msg.setTimeStamp(0.19814884683076284);
    msg.setSource(26121U);
    msg.setSourceEntity(72U);
    msg.setDestination(39384U);
    msg.setDestinationEntity(204U);
    msg.value = 0.819355660310332;

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
    msg.setTimeStamp(0.21441435111184415);
    msg.setSource(51143U);
    msg.setSourceEntity(122U);
    msg.setDestination(12821U);
    msg.setDestinationEntity(110U);
    msg.value = 0.752871645345528;

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
    msg.setTimeStamp(0.7806136892618629);
    msg.setSource(13944U);
    msg.setSourceEntity(243U);
    msg.setDestination(27338U);
    msg.setDestinationEntity(209U);
    msg.value = 0.9135970543831546;

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
    msg.setTimeStamp(0.8440243144467082);
    msg.setSource(47464U);
    msg.setSourceEntity(70U);
    msg.setDestination(51433U);
    msg.setDestinationEntity(11U);
    msg.value = 0.38697315091653006;

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
    msg.setTimeStamp(0.17453138680699298);
    msg.setSource(60073U);
    msg.setSourceEntity(206U);
    msg.setDestination(49843U);
    msg.setDestinationEntity(189U);
    msg.value = 0.17928409746347995;

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
    msg.setTimeStamp(0.4860673334148843);
    msg.setSource(41453U);
    msg.setSourceEntity(176U);
    msg.setDestination(14397U);
    msg.setDestinationEntity(117U);
    msg.value = 0.5381578036535418;

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
    msg.setTimeStamp(0.17069938795912853);
    msg.setSource(9701U);
    msg.setSourceEntity(254U);
    msg.setDestination(11027U);
    msg.setDestinationEntity(247U);
    msg.value = 0.7474101824672857;

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
    msg.setTimeStamp(0.5331678655629257);
    msg.setSource(35632U);
    msg.setSourceEntity(114U);
    msg.setDestination(48709U);
    msg.setDestinationEntity(220U);
    msg.path_ref = 3372387053U;
    msg.start_lat = 0.42949699264175134;
    msg.start_lon = 0.7864994807373055;
    msg.start_z = 0.6079006772556137;
    msg.start_z_units = 161U;
    msg.end_lat = 0.03620974368424601;
    msg.end_lon = 0.13237937711069436;
    msg.end_z = 0.22146225181377244;
    msg.end_z_units = 23U;
    msg.speed = 0.2780904447603555;
    msg.speed_units = 246U;
    msg.lradius = 0.6903210978911705;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.3641407391847299);
    msg.setSource(48193U);
    msg.setSourceEntity(127U);
    msg.setDestination(63666U);
    msg.setDestinationEntity(177U);
    msg.path_ref = 166381609U;
    msg.start_lat = 0.6518129344546231;
    msg.start_lon = 0.2474363837031388;
    msg.start_z = 0.16685009014018537;
    msg.start_z_units = 6U;
    msg.end_lat = 0.8494793957641152;
    msg.end_lon = 0.7510861530624029;
    msg.end_z = 0.5363136618193334;
    msg.end_z_units = 105U;
    msg.speed = 0.22953726352835813;
    msg.speed_units = 57U;
    msg.lradius = 0.36700086700889545;
    msg.flags = 88U;

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
    msg.setTimeStamp(0.10236516946498797);
    msg.setSource(40524U);
    msg.setSourceEntity(238U);
    msg.setDestination(50075U);
    msg.setDestinationEntity(105U);
    msg.path_ref = 1890397113U;
    msg.start_lat = 0.9974507717436223;
    msg.start_lon = 0.7261035350868141;
    msg.start_z = 0.18950969990902655;
    msg.start_z_units = 46U;
    msg.end_lat = 0.5907027596100493;
    msg.end_lon = 0.004150049315564175;
    msg.end_z = 0.4081390566779176;
    msg.end_z_units = 42U;
    msg.speed = 0.03442913870926956;
    msg.speed_units = 159U;
    msg.lradius = 0.48725837736894106;
    msg.flags = 65U;

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
    msg.setTimeStamp(0.8061228743809067);
    msg.setSource(18511U);
    msg.setSourceEntity(106U);
    msg.setDestination(5219U);
    msg.setDestinationEntity(30U);
    msg.x = 0.9840098361817154;
    msg.y = 0.06525600681505916;
    msg.z = 0.08517595188258487;
    msg.k = 0.717003941190841;
    msg.m = 0.5022706809048849;
    msg.n = 0.10032726322194097;
    msg.flags = 18U;

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
    msg.setTimeStamp(0.5631488947473495);
    msg.setSource(6906U);
    msg.setSourceEntity(115U);
    msg.setDestination(13407U);
    msg.setDestinationEntity(79U);
    msg.x = 0.5625709996533451;
    msg.y = 0.17549584156994114;
    msg.z = 0.12944062997439865;
    msg.k = 0.4991336014202197;
    msg.m = 0.4478505600421171;
    msg.n = 0.6362557788844644;
    msg.flags = 217U;

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
    msg.setTimeStamp(0.03463188007653917);
    msg.setSource(52920U);
    msg.setSourceEntity(38U);
    msg.setDestination(46717U);
    msg.setDestinationEntity(0U);
    msg.x = 0.8153848628165127;
    msg.y = 0.028084980675945892;
    msg.z = 0.3296234204911008;
    msg.k = 0.24897905881281912;
    msg.m = 0.4158733456569914;
    msg.n = 0.7903037695128261;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.39507239667229743);
    msg.setSource(8132U);
    msg.setSourceEntity(220U);
    msg.setDestination(60703U);
    msg.setDestinationEntity(27U);
    msg.value = 0.5369581034708003;

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
    msg.setTimeStamp(0.6606247933272316);
    msg.setSource(39998U);
    msg.setSourceEntity(99U);
    msg.setDestination(30546U);
    msg.setDestinationEntity(109U);
    msg.value = 0.36236933545013816;

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
    msg.setTimeStamp(0.9905608343083121);
    msg.setSource(56807U);
    msg.setSourceEntity(18U);
    msg.setDestination(1876U);
    msg.setDestinationEntity(55U);
    msg.value = 0.38139855974726133;

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
    msg.setTimeStamp(0.4248841274880306);
    msg.setSource(25789U);
    msg.setSourceEntity(60U);
    msg.setDestination(61771U);
    msg.setDestinationEntity(141U);
    msg.u = 0.3706964309340851;
    msg.v = 0.5553868209335386;
    msg.w = 0.329795796016783;
    msg.p = 0.9734121171662012;
    msg.q = 0.5798948479018682;
    msg.r = 0.7438298334264708;
    msg.flags = 68U;

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
    msg.setTimeStamp(0.5000889161906567);
    msg.setSource(19622U);
    msg.setSourceEntity(158U);
    msg.setDestination(63877U);
    msg.setDestinationEntity(206U);
    msg.u = 0.28259942861380294;
    msg.v = 0.49712429483218135;
    msg.w = 0.8869340675158224;
    msg.p = 0.7405229267472714;
    msg.q = 0.8274691724831825;
    msg.r = 0.34669325542144014;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.12853978669830457);
    msg.setSource(20729U);
    msg.setSourceEntity(9U);
    msg.setDestination(9654U);
    msg.setDestinationEntity(102U);
    msg.u = 0.02083131907742608;
    msg.v = 0.7077273832567472;
    msg.w = 0.10895885871548383;
    msg.p = 0.4784053283015258;
    msg.q = 0.28801004181611845;
    msg.r = 0.2836163630319801;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.7147712451363556);
    msg.setSource(63719U);
    msg.setSourceEntity(10U);
    msg.setDestination(25531U);
    msg.setDestinationEntity(106U);
    msg.path_ref = 2965731035U;
    msg.start_lat = 0.7742341406970414;
    msg.start_lon = 0.42420589174150547;
    msg.start_z = 0.8971917418381483;
    msg.start_z_units = 150U;
    msg.end_lat = 0.16926147122279356;
    msg.end_lon = 0.35601793022134054;
    msg.end_z = 0.3176361499690903;
    msg.end_z_units = 216U;
    msg.lradius = 0.5696938353554571;
    msg.flags = 136U;
    msg.x = 0.12967752965594614;
    msg.y = 0.29841228026881617;
    msg.z = 0.7831597505139326;
    msg.vx = 0.8949833760886182;
    msg.vy = 0.45488883914013145;
    msg.vz = 0.12743935348149726;
    msg.course_error = 0.4509103841911172;
    msg.eta = 34291U;

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
    msg.setTimeStamp(0.7894865037467044);
    msg.setSource(12998U);
    msg.setSourceEntity(40U);
    msg.setDestination(46346U);
    msg.setDestinationEntity(40U);
    msg.path_ref = 1254943427U;
    msg.start_lat = 0.31248237494257014;
    msg.start_lon = 0.6516941679827426;
    msg.start_z = 0.08254031666559458;
    msg.start_z_units = 246U;
    msg.end_lat = 0.49831572108149347;
    msg.end_lon = 0.3145635733438813;
    msg.end_z = 0.5154709837585288;
    msg.end_z_units = 240U;
    msg.lradius = 0.38133867022297907;
    msg.flags = 152U;
    msg.x = 0.340862697234502;
    msg.y = 0.2845647260735783;
    msg.z = 0.7705144226318499;
    msg.vx = 0.15572896208221443;
    msg.vy = 0.6421300981236705;
    msg.vz = 0.6010823065673413;
    msg.course_error = 0.37140369557414954;
    msg.eta = 30642U;

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
    msg.setTimeStamp(0.48443382235218924);
    msg.setSource(431U);
    msg.setSourceEntity(209U);
    msg.setDestination(42017U);
    msg.setDestinationEntity(149U);
    msg.path_ref = 4131520710U;
    msg.start_lat = 0.6310348164477199;
    msg.start_lon = 0.7353576449413515;
    msg.start_z = 0.7100769675251001;
    msg.start_z_units = 181U;
    msg.end_lat = 0.579571589254419;
    msg.end_lon = 0.46878955263983846;
    msg.end_z = 0.06279761747536727;
    msg.end_z_units = 214U;
    msg.lradius = 0.15388333138056765;
    msg.flags = 99U;
    msg.x = 0.40095868566403414;
    msg.y = 0.7737820890012629;
    msg.z = 0.6022684020173311;
    msg.vx = 0.06621321776383482;
    msg.vy = 0.709609383631206;
    msg.vz = 0.23938070859334137;
    msg.course_error = 0.9031455850489526;
    msg.eta = 33747U;

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
    msg.setTimeStamp(0.6794294836209549);
    msg.setSource(29483U);
    msg.setSourceEntity(126U);
    msg.setDestination(32853U);
    msg.setDestinationEntity(68U);
    msg.k = 0.6347031337949942;
    msg.m = 0.2135154177068549;
    msg.n = 0.7147261139736047;

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
    msg.setTimeStamp(0.9368313588991433);
    msg.setSource(48622U);
    msg.setSourceEntity(214U);
    msg.setDestination(26931U);
    msg.setDestinationEntity(138U);
    msg.k = 0.7727557495475729;
    msg.m = 0.40340866557114197;
    msg.n = 0.7483466103962803;

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
    msg.setTimeStamp(0.022239524984062453);
    msg.setSource(13283U);
    msg.setSourceEntity(47U);
    msg.setDestination(57761U);
    msg.setDestinationEntity(176U);
    msg.k = 0.49718516399941104;
    msg.m = 0.8165211172307243;
    msg.n = 0.3354191943896052;

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
    msg.setTimeStamp(0.3515334931112368);
    msg.setSource(44338U);
    msg.setSourceEntity(35U);
    msg.setDestination(60244U);
    msg.setDestinationEntity(47U);
    msg.p = 0.12223923950602467;
    msg.i = 0.7037781707342089;
    msg.d = 0.26572899647017933;
    msg.a = 0.27158638677368985;

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
    msg.setTimeStamp(0.9562029676031629);
    msg.setSource(46345U);
    msg.setSourceEntity(50U);
    msg.setDestination(39716U);
    msg.setDestinationEntity(5U);
    msg.p = 0.06814350001159142;
    msg.i = 0.4345802681659625;
    msg.d = 0.5829302841008245;
    msg.a = 0.11025070790280511;

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
    msg.setTimeStamp(0.8226187812118935);
    msg.setSource(34141U);
    msg.setSourceEntity(251U);
    msg.setDestination(24207U);
    msg.setDestinationEntity(147U);
    msg.p = 0.9307042044794628;
    msg.i = 0.1275429545158966;
    msg.d = 0.5689479128806154;
    msg.a = 0.5720517100273251;

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
    msg.setTimeStamp(0.1689929208126718);
    msg.setSource(47308U);
    msg.setSourceEntity(43U);
    msg.setDestination(47096U);
    msg.setDestinationEntity(82U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.6005724627418665);
    msg.setSource(20810U);
    msg.setSourceEntity(145U);
    msg.setDestination(13729U);
    msg.setDestinationEntity(119U);
    msg.op = 245U;

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
    msg.setTimeStamp(0.8098253048839833);
    msg.setSource(46385U);
    msg.setSourceEntity(92U);
    msg.setDestination(18875U);
    msg.setDestinationEntity(169U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.6482236679914258);
    msg.setSource(10325U);
    msg.setSourceEntity(41U);
    msg.setDestination(42341U);
    msg.setDestinationEntity(140U);
    msg.timeout = 44831U;
    msg.lat = 0.01332110781321627;
    msg.lon = 0.03269084510896758;
    msg.z = 0.10977660207020856;
    msg.z_units = 39U;
    msg.speed = 0.18764865953101162;
    msg.speed_units = 0U;
    msg.roll = 0.01060623464577648;
    msg.pitch = 0.1060949567505215;
    msg.yaw = 0.48485157477141594;
    msg.custom.assign("CZRNOZXWRBBKCCDJZURADKHFUGXRPUMYMAYUGMAFKAEOITHSAYZECSHGOKOLWLMVSHYOMXYFQUQVHYGNYPOPPDGMIAMATBUBOHBHCJUCMRLPSQJLVURBFIZOHBHIEIYTPDDHKFXJKZGDXMXWDJJRAKEPEEQVOIDGIEUJIRDWETVLZJBICNOVKNKLBVGXETR");

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
    msg.setTimeStamp(0.8435913950082785);
    msg.setSource(17100U);
    msg.setSourceEntity(168U);
    msg.setDestination(13665U);
    msg.setDestinationEntity(65U);
    msg.timeout = 29586U;
    msg.lat = 0.9071348619511621;
    msg.lon = 0.6380984603336383;
    msg.z = 0.23084871550120456;
    msg.z_units = 86U;
    msg.speed = 0.9199280180110792;
    msg.speed_units = 96U;
    msg.roll = 0.7654339551148498;
    msg.pitch = 0.17210978849455305;
    msg.yaw = 0.9340845397986425;
    msg.custom.assign("QJXICUKWGMSNARWWOZTDRAOWJKNEKIYPCGZJLCD");

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
    msg.setTimeStamp(0.8023860329321895);
    msg.setSource(20967U);
    msg.setSourceEntity(125U);
    msg.setDestination(36221U);
    msg.setDestinationEntity(213U);
    msg.timeout = 34890U;
    msg.lat = 0.5371976908249253;
    msg.lon = 0.9438553072439636;
    msg.z = 0.2912493051174849;
    msg.z_units = 141U;
    msg.speed = 0.6553947429034355;
    msg.speed_units = 38U;
    msg.roll = 0.1288920943565438;
    msg.pitch = 0.9750515023532111;
    msg.yaw = 0.10045011023722983;
    msg.custom.assign("FVNSTPBQJRFWYWAJKJCRHSRXVPALFGXDIGYNIADHSYHWYZUQFSULZPFLMSHDAJFMLGEQYOIFYZGLPRXDEEXNGGHQXUIDYACWXBXTGIRUDLAKPCVBPPUPMFXSZTNFEHZOTKCZJTKUZGZCQGNOABDBQVDBQTSVEJRJMOMNKIWHBBILARJZECVFIACWSEXNKCVHUGOVESLCOTOROUKULJMYHPVUKTJ");

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
    msg.setTimeStamp(0.9906629816213309);
    msg.setSource(15493U);
    msg.setSourceEntity(61U);
    msg.setDestination(54017U);
    msg.setDestinationEntity(159U);
    msg.timeout = 22031U;
    msg.lat = 0.29200015436666316;
    msg.lon = 0.4506802793403032;
    msg.z = 0.0983553707931446;
    msg.z_units = 209U;
    msg.speed = 0.9034634463166145;
    msg.speed_units = 28U;
    msg.duration = 64806U;
    msg.radius = 0.1465879612561347;
    msg.flags = 210U;
    msg.custom.assign("KKKGGURXTQXTDAWTRXFKRJPPZNVYDHPNIQWXTMHHSQMKADGDZIBZEDYYJLSOMWOKNHYXBYYWNIPKMLFZTKTSURBSVVVORGCBFIAOTOSFHWDYLAUUXXZACNUQHWFLJYVJSZKBDWHXMDFMESWCPRBNGGBLPNATNAUVCMCEJUBUZJJMDIVRSIEC");

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
    msg.setTimeStamp(0.24405509996504982);
    msg.setSource(2435U);
    msg.setSourceEntity(248U);
    msg.setDestination(31372U);
    msg.setDestinationEntity(98U);
    msg.timeout = 10118U;
    msg.lat = 0.3964529120409205;
    msg.lon = 0.013516092227570997;
    msg.z = 0.8096412223937938;
    msg.z_units = 27U;
    msg.speed = 0.8125790611735769;
    msg.speed_units = 1U;
    msg.duration = 13273U;
    msg.radius = 0.7583975541019479;
    msg.flags = 20U;
    msg.custom.assign("HBFWJMYSZRKDLPXXCZMSMFQJLBOOEDTWOSWSAFTAKCPKZPGXSJUABGDKENDJZTPJAMICRZPIQVKDHITXCVRVXCFCFXIIKKSCCVXLHMERDWPOGQQVYGNXLEJTBWSOGKKITYZIQGJWWNMAHMZYUMQUBNEDFRO");

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
    msg.setTimeStamp(0.5947924372121826);
    msg.setSource(29464U);
    msg.setSourceEntity(17U);
    msg.setDestination(57595U);
    msg.setDestinationEntity(96U);
    msg.timeout = 52493U;
    msg.lat = 0.1739816066612906;
    msg.lon = 0.6833028194106227;
    msg.z = 0.5882628149069825;
    msg.z_units = 102U;
    msg.speed = 0.5692957306211384;
    msg.speed_units = 160U;
    msg.duration = 406U;
    msg.radius = 0.6927920369674357;
    msg.flags = 149U;
    msg.custom.assign("SHCYRQHWDEMCLHXPSWEJGZLGDVNBXUPMMYEDKMUWOWPKTTTIJGCSKRJJPRJFYKYCJADVAFLTWTTPTRFBZJHQXAHXVFEFTFWLNBICARLKOYUPKHEXORUUCPCBOWKOVORCIGUBZEWGONFQBLJAADRIYYEZCJINVQFXEZUHBGJKQLAVPKBBFHAQPMTAIUGRSXQZIQWSOSNNFDEVSDSCZUKNHTBQ");

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
    msg.setTimeStamp(0.4168449080079669);
    msg.setSource(48010U);
    msg.setSourceEntity(4U);
    msg.setDestination(19276U);
    msg.setDestinationEntity(189U);
    msg.custom.assign("KKJJKPOIBLEWUYTWTFFUAIHQWWZHBUGADBIJYYBIREECSNYIJPZQVRJXDQRMUOVRNIFZIVXSVCAUNBMJQJSXNYHHUSQKCLKPIXGFSMDAVVPCRKHZKXBAYUUTXFUWCZMPAJEUCYBQWMNVATODPJPOCLXVXNYFNHZRKGEHNDESFAGDQOMQSHWMBBLKTSZREFCJVGGHGIICMREOOMMLPFLWEXDKDSTLDRWTNOLOZYZPQDLXOYRPFSACLT");

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
    msg.setTimeStamp(0.605834078808572);
    msg.setSource(45485U);
    msg.setSourceEntity(142U);
    msg.setDestination(24209U);
    msg.setDestinationEntity(93U);
    msg.custom.assign("KJPWYFTFBXQLVQKDVMPRJGLGTZKQOEPERXDLHOWAUJELHSDCKKYIMFAUBUICEIWIQCIXJDMQYNUTZNXTNWLBIRAELRCGGVZUSLMT");

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
    msg.setTimeStamp(0.36009653630078164);
    msg.setSource(56051U);
    msg.setSourceEntity(135U);
    msg.setDestination(8254U);
    msg.setDestinationEntity(45U);
    msg.custom.assign("ENUNEIHWWIQABUOQTKWVOVJNKCOHALPCPYZLTDUZIYZPAMFTBEGTIHTFFNROJHPOBGHEOBRJJJRUDQXYBFRYSTYUWGKSRYXCESDKBQPLWKVT");

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
    msg.setTimeStamp(0.0844885620580954);
    msg.setSource(30591U);
    msg.setSourceEntity(177U);
    msg.setDestination(23987U);
    msg.setDestinationEntity(33U);
    msg.timeout = 51538U;
    msg.lat = 0.6084053784665682;
    msg.lon = 0.1328264492631347;
    msg.z = 0.9585070999506998;
    msg.z_units = 229U;
    msg.duration = 41119U;
    msg.speed = 0.2094931003151974;
    msg.speed_units = 181U;
    msg.type = 143U;
    msg.radius = 0.47554296199534263;
    msg.length = 0.4414548501552894;
    msg.bearing = 0.6673862212208419;
    msg.direction = 190U;
    msg.custom.assign("SKOIKEOHQXVAZSWKHDXLACGHBKRYLMTLNPQLUVVJAFUSYEJJOZPGCGVBRQSGLHCDCFPAFFEGXDPZIENLNAMTSDSRBZUMHTDGTZRXVJYYUCNINFYNLSGCPQPTUFVHWJPHYSTUEJYQEUTKDYFRTINLQQBXJGRCBJTNWWEDSIOHOBAJADIBOZHPVXCARUDFMWXMRSIQMBKBXKQNRTXHUMAMVCXBLZEWR");

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
    msg.setTimeStamp(0.47588052759829436);
    msg.setSource(18312U);
    msg.setSourceEntity(58U);
    msg.setDestination(22533U);
    msg.setDestinationEntity(252U);
    msg.timeout = 29290U;
    msg.lat = 0.10762382104642043;
    msg.lon = 0.43254748226950823;
    msg.z = 0.8570001211755668;
    msg.z_units = 150U;
    msg.duration = 14697U;
    msg.speed = 0.8045959927769698;
    msg.speed_units = 30U;
    msg.type = 212U;
    msg.radius = 0.4379030705620819;
    msg.length = 0.6438892613225702;
    msg.bearing = 0.9319027778594524;
    msg.direction = 56U;
    msg.custom.assign("QEEHVVNSZCPXICDJXHDTHETOXILEMDYFNKELGKYBXBIOBPSBLCFD");

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
    msg.setTimeStamp(0.8427014776231955);
    msg.setSource(2281U);
    msg.setSourceEntity(160U);
    msg.setDestination(8083U);
    msg.setDestinationEntity(44U);
    msg.timeout = 5641U;
    msg.lat = 0.4170902198261933;
    msg.lon = 0.727292200527009;
    msg.z = 0.2704080008180969;
    msg.z_units = 106U;
    msg.duration = 20346U;
    msg.speed = 0.6855864205908494;
    msg.speed_units = 39U;
    msg.type = 61U;
    msg.radius = 0.857423156037633;
    msg.length = 0.4435948666891967;
    msg.bearing = 0.15468361669655273;
    msg.direction = 2U;
    msg.custom.assign("MJTIPBBNLCSKEEHAHGDAFQAVZCOARBQBNRJXZTISUMDSXPOJOARDFUKLLYLYKUALYIEVVBSRPNWANLQOVCLYGZDTAFGAJPHSXPDFLJXWIRIFFZCQMELEGLIFGYYTVMMSEJSFXPVTCFYOSXYMUHBHXUJQRNRTKIBDJQUGB");

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
    msg.setTimeStamp(0.04259588511084744);
    msg.setSource(46037U);
    msg.setSourceEntity(114U);
    msg.setDestination(42131U);
    msg.setDestinationEntity(90U);
    msg.duration = 45287U;
    msg.custom.assign("YCKZQVEOLUOWTOZSWLQCMTVMGPBVOUUGWMILCSQFVTODXVMIEZTZRLKERJJBTUPBXTZZJMIDHE");

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
    msg.setTimeStamp(0.3082562077659924);
    msg.setSource(2422U);
    msg.setSourceEntity(65U);
    msg.setDestination(9233U);
    msg.setDestinationEntity(188U);
    msg.duration = 10105U;
    msg.custom.assign("DDOVKCYSILTCGNYFSDTZUITIUGMQNUGOYQBHGQLFVGDXZSHBCODSOITHBTJAWNVOTBFVZIRYSNWQXFSXLRWIYLNMKCAGKIWFZAWLZCZXYMEARQWTLSITFUZEBPFJJXWKPOKYBRNPJMJVUEVAOLHEQHIAHUXPEJNMUPRNTGCVEKNFLPODQL");

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
    msg.setTimeStamp(0.9862011425717687);
    msg.setSource(15438U);
    msg.setSourceEntity(108U);
    msg.setDestination(65270U);
    msg.setDestinationEntity(67U);
    msg.duration = 29645U;
    msg.custom.assign("SGKBMUUBVEWUMJNPHETDVXNAKCEPOTMDNEZMYYPLDDCRUIUVTJERNCVKUNZKZSRHEAEJAYBDMKAXWQIRIHYIZCLBLLWGJQFLWIVUYFDCMQMXNXFOTPHYOKSCOEGRYHWXQCNAWBFHRFTHSTVBRVBSWLKCCDUICZSWWDTJJOAVGBNQQFGFGGPTAKXORZEIQHGEPZOPIPXQLVBHF");

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
    msg.setTimeStamp(0.8197430688528943);
    msg.setSource(48545U);
    msg.setSourceEntity(54U);
    msg.setDestination(22356U);
    msg.setDestinationEntity(248U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4187829383U;
    tmp_msg_0.start_lat = 0.5849839436810264;
    tmp_msg_0.start_lon = 0.425207402311635;
    tmp_msg_0.start_z = 0.8612276393473414;
    tmp_msg_0.start_z_units = 14U;
    tmp_msg_0.end_lat = 0.811785290788723;
    tmp_msg_0.end_lon = 0.07021717571572583;
    tmp_msg_0.end_z = 0.29434136073195927;
    tmp_msg_0.end_z_units = 139U;
    tmp_msg_0.speed = 0.8255005729971309;
    tmp_msg_0.speed_units = 228U;
    tmp_msg_0.lradius = 0.03869745269736613;
    tmp_msg_0.flags = 7U;
    msg.control.set(tmp_msg_0);
    msg.duration = 17524U;
    msg.custom.assign("YMCKWWCGUKLGCWJTBVEARSEKKKVSYHHERNBDJMRXXQQAGWXOTJUIWFBSESNLOQWCINIYGVUOOESTRDWISLGUFIAZFBBRYNOICHRVHQTDQDDPFXTDBAVIPUKIUZGQPPUESAXUMZZCVTPNKTPSFXBNYRLJNAGVZFUCZYDBLOMEPDHVNVZJPGKRBXRFJSTYHQHQFMKPLAIJQALXCMWMGQSLEZNIELTEXWCDCVMOPMZUWMKA");

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
    msg.setTimeStamp(0.7808291077634354);
    msg.setSource(59997U);
    msg.setSourceEntity(105U);
    msg.setDestination(1245U);
    msg.setDestinationEntity(149U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.6248634387586618;
    msg.control.set(tmp_msg_0);
    msg.duration = 8042U;
    msg.custom.assign("OMRVASSRNYKLXRICJWTNKFMUTXEDWTGCLCEMOFZPEWPKINKMUXQLOYEURMWKDICDNWJZRWFPBXQQJLIVQOKPPHATMAKJEIGLGQMNKEMZPFSANYOOQVYBDHVIFINJGEOUQSBAYFA");

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
    msg.setTimeStamp(0.10625459204349075);
    msg.setSource(50150U);
    msg.setSourceEntity(183U);
    msg.setDestination(46370U);
    msg.setDestinationEntity(81U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.1620197901259236;
    msg.control.set(tmp_msg_0);
    msg.duration = 2918U;
    msg.custom.assign("BNZWSZVRPCSTSBLIQGFHXBTDVVFWFZEUGNTRDAHKLBNBKZMETTHADZHVEBZOKLUUNXXYREOWIOTGNWVIOQJSLMKBLWJQMUJKVLWQOMQZJRIJKRWVVAYCXDYYEQKNQYUZPSHYPIJXFRIDMTUTNCHYWMHILXTIFORPEADDSRYPUQHGFMGKGURAXBOTPOAJMFEADVJPCJYGFCHSUFJPXSQADNCLWCVGIMSXCCAGZQXSEBNHDGEIBO");

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
    msg.setTimeStamp(0.014078202953870855);
    msg.setSource(63027U);
    msg.setSourceEntity(232U);
    msg.setDestination(27843U);
    msg.setDestinationEntity(69U);
    msg.timeout = 11663U;
    msg.lat = 0.18260641387375653;
    msg.lon = 0.09575590159329517;
    msg.z = 0.4820153452083302;
    msg.z_units = 216U;
    msg.speed = 0.7963960273431211;
    msg.speed_units = 212U;
    msg.bearing = 0.6299971247122554;
    msg.cross_angle = 0.9905803902067402;
    msg.width = 0.6410070938295686;
    msg.length = 0.0647221319375001;
    msg.hstep = 0.1157042413042132;
    msg.coff = 22U;
    msg.alternation = 174U;
    msg.flags = 84U;
    msg.custom.assign("VCXHLAEEUGLWBZPCQGFJCSRYJSZBUIVMJMUKGZVLGAKASVFRHUBEROEWPBPTOXTWAMJFEQHJTMKYQLDRUXDEDPNYOAOMUXRCRKWNWFVICNGCTZRXKVQLNSSUGKMHSEBPVCNAHBOMKJFHPIQHGWHRGBODZKAICYFWLPWLTDASTYZIYYJJEBIIUSZNOPTYIGDVXSXFTYALZNKEQDLOTZOLPFNDVWENMCFDX");

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
    msg.setTimeStamp(0.5815479094447602);
    msg.setSource(51736U);
    msg.setSourceEntity(83U);
    msg.setDestination(56640U);
    msg.setDestinationEntity(154U);
    msg.timeout = 57779U;
    msg.lat = 0.8097481883051096;
    msg.lon = 0.4540781413491709;
    msg.z = 0.3584427130519162;
    msg.z_units = 101U;
    msg.speed = 0.8188086467972788;
    msg.speed_units = 187U;
    msg.bearing = 0.28315438522839187;
    msg.cross_angle = 0.4825475527555453;
    msg.width = 0.541254901089151;
    msg.length = 0.4533428361176808;
    msg.hstep = 0.8642812259377316;
    msg.coff = 41U;
    msg.alternation = 85U;
    msg.flags = 29U;
    msg.custom.assign("VIBBUZAVCASXZQPOBU");

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
    msg.setTimeStamp(0.2713682082419612);
    msg.setSource(59868U);
    msg.setSourceEntity(81U);
    msg.setDestination(11161U);
    msg.setDestinationEntity(19U);
    msg.timeout = 33567U;
    msg.lat = 0.7123688742581884;
    msg.lon = 0.6273560866276178;
    msg.z = 0.8195612661993493;
    msg.z_units = 47U;
    msg.speed = 0.816283247738278;
    msg.speed_units = 41U;
    msg.bearing = 0.8225264353202072;
    msg.cross_angle = 0.37655634118554815;
    msg.width = 0.8565261782690898;
    msg.length = 0.3606524074871128;
    msg.hstep = 0.22048446485816187;
    msg.coff = 176U;
    msg.alternation = 219U;
    msg.flags = 247U;
    msg.custom.assign("VRSESBDUYFQOLEZQGTBSLTLTGLQOUJXQ");

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
    msg.setTimeStamp(0.908512997732664);
    msg.setSource(13144U);
    msg.setSourceEntity(86U);
    msg.setDestination(27796U);
    msg.setDestinationEntity(111U);
    msg.timeout = 13550U;
    msg.lat = 0.5290094545105931;
    msg.lon = 0.9128652613229171;
    msg.z = 0.7239052423158606;
    msg.z_units = 81U;
    msg.speed = 0.012859987837876896;
    msg.speed_units = 160U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.27487306851435234;
    tmp_msg_0.y = 0.2315214314307138;
    tmp_msg_0.z = 0.4081258455323582;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ULEHATPXFVVNEOPKKTGRABTXWHHQTMYOIAWXIHTKYUGMSVMBCYJZJDRBTUMNYWAMYXVUIJMFVXLJBVUPKZCZZSDHFFMZBNSNGOTRKDSKOKIOLEZF");

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
    msg.setTimeStamp(0.8186465369522645);
    msg.setSource(14468U);
    msg.setSourceEntity(123U);
    msg.setDestination(7176U);
    msg.setDestinationEntity(51U);
    msg.timeout = 60872U;
    msg.lat = 0.21556646903655752;
    msg.lon = 0.23026270741895694;
    msg.z = 0.6245456368534341;
    msg.z_units = 102U;
    msg.speed = 0.8473466387185468;
    msg.speed_units = 74U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.522853368763856;
    tmp_msg_0.y = 0.5758872223757701;
    tmp_msg_0.z = 0.3192570092057233;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HWNJZEFTOTHUSBGGVZERHLIYAVIZEZACXCIDQLVJOLHIWJPGKTAXZMVCNSAWJPMXJLUIDSEWQYIOWAGFRDTKQSNKOVPI");

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
    msg.setTimeStamp(0.11042210112572293);
    msg.setSource(24991U);
    msg.setSourceEntity(240U);
    msg.setDestination(47056U);
    msg.setDestinationEntity(100U);
    msg.timeout = 35637U;
    msg.lat = 0.45365880890780275;
    msg.lon = 0.38257469229825736;
    msg.z = 0.684705623335684;
    msg.z_units = 174U;
    msg.speed = 0.003218422412840427;
    msg.speed_units = 52U;
    msg.custom.assign("ATWUYLHQXDWBVLARUJXDMOCNITGUTFSHNFXUJENMISTMZGYCIENIVOFHJKPHHMRXQLKPRGSYURIKQZVXOQYWFLAOBWSSCGJNYYPDEKVEFJGZQTKRMQZRAJKWXEDPUQ");

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
    msg.setTimeStamp(0.7618612648719144);
    msg.setSource(14401U);
    msg.setSourceEntity(166U);
    msg.setDestination(12804U);
    msg.setDestinationEntity(141U);
    msg.x = 0.47569147671142176;
    msg.y = 0.2407047855510398;
    msg.z = 0.614458673827402;

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
    msg.setTimeStamp(0.40182590800438034);
    msg.setSource(64389U);
    msg.setSourceEntity(90U);
    msg.setDestination(56465U);
    msg.setDestinationEntity(236U);
    msg.x = 0.9737687833435044;
    msg.y = 0.3986764696891669;
    msg.z = 0.643865225055101;

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
    msg.setTimeStamp(0.23719068144379352);
    msg.setSource(29905U);
    msg.setSourceEntity(39U);
    msg.setDestination(35371U);
    msg.setDestinationEntity(36U);
    msg.x = 0.5852027098900329;
    msg.y = 0.2296074989926059;
    msg.z = 0.9466812953688916;

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
    msg.setTimeStamp(0.8390868155747019);
    msg.setSource(59510U);
    msg.setSourceEntity(105U);
    msg.setDestination(29776U);
    msg.setDestinationEntity(119U);
    msg.timeout = 36603U;
    msg.lat = 0.5101028205691862;
    msg.lon = 0.5919076697330351;
    msg.z = 0.8745874703587223;
    msg.z_units = 9U;
    msg.amplitude = 0.21704665632480147;
    msg.pitch = 0.38185762887931096;
    msg.speed = 0.6329510015763248;
    msg.speed_units = 213U;
    msg.custom.assign("EOIAPQVGVHUZNWWTTOSGJLWXKLXNCDEYDQZHVVAOFBLGEKFERWWKXMFSEMOXOODODUWABFXVGHKWIHYATGFMXTMZJTVHCVQYAZEGZXNUITZFQPHSCEATDODFVHRSRLOZPYDNMIBKNUIAGXOUCPCZQTKKIQRRUMGEUDFSJRCCJLTJWAVUBLPDMPLUJLCZNIPKBURJRXNCMKBBRQQ");

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
    msg.setTimeStamp(0.9197394502905755);
    msg.setSource(15794U);
    msg.setSourceEntity(232U);
    msg.setDestination(59420U);
    msg.setDestinationEntity(29U);
    msg.timeout = 34377U;
    msg.lat = 0.5556325385524092;
    msg.lon = 0.4149811642083321;
    msg.z = 0.5784186934073389;
    msg.z_units = 159U;
    msg.amplitude = 0.9993727881383497;
    msg.pitch = 0.4697292975581;
    msg.speed = 0.19473044854232113;
    msg.speed_units = 113U;
    msg.custom.assign("LBPWUPYGIMHMKJMPAQNFJORIMTCWNVQAXESDKDYEVTMKCFNZCADLTZBNZVUEEFSWOZRZEUOSPOKPTKVAAIWZHLCYINXRWGINEXBZKDRDENSXPFIGGVHFKGRZJHKQLMBVUESXVKTHCYJJFGXYUNDWOMWZPAWMABBYSMLHAIQDQYZEIGUORWPALBSDMHUCOHQBQNNHQG");

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
    msg.setTimeStamp(0.4141914163397782);
    msg.setSource(7209U);
    msg.setSourceEntity(100U);
    msg.setDestination(50727U);
    msg.setDestinationEntity(197U);
    msg.timeout = 55454U;
    msg.lat = 0.7025036720462882;
    msg.lon = 0.7921327492267226;
    msg.z = 0.2439662513466998;
    msg.z_units = 119U;
    msg.amplitude = 0.6878643915061671;
    msg.pitch = 0.2908330349219743;
    msg.speed = 0.5401825726512721;
    msg.speed_units = 44U;
    msg.custom.assign("NHJEXUKDPVPDBEGARXTXSHVVPGMVQYGFIXGRDXQYRKOORSAAYXPBXFVJSHUZLJMIJEIHIWVROURWJIUWRQLSGZIUJNJFDTMCTZATFLIOWVNAWZHEEWJEOMVSKNPEJHIDKMDTSWCGGGKREPZUYLZPQHFHBXCZCABFNSSOAAZTCFFWPKQKJYOBDKBFPLQLB");

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
    msg.setTimeStamp(0.7906333406541457);
    msg.setSource(61060U);
    msg.setSourceEntity(136U);
    msg.setDestination(52551U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.04655642911672475);
    msg.setSource(20444U);
    msg.setSourceEntity(7U);
    msg.setDestination(45080U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.2015942468588534);
    msg.setSource(45732U);
    msg.setSourceEntity(125U);
    msg.setDestination(8971U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.6337634863179);
    msg.setSource(26935U);
    msg.setSourceEntity(147U);
    msg.setDestination(60804U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.22872073057618936;
    msg.lon = 0.8112037384887815;
    msg.z = 0.82327606890098;
    msg.z_units = 217U;
    msg.radius = 0.03741797498917476;
    msg.duration = 61015U;
    msg.speed = 0.1265269888283007;
    msg.speed_units = 52U;
    msg.custom.assign("WZKTHLJYSFBZXRUSHCEOEDYATCDZXPTWJDTTQRPKDLAHMFNDSASQPXDOKASCGHGXJYDIGKAGCMSWLUXBZGDQMOPK");

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
    msg.setTimeStamp(0.6443624137391325);
    msg.setSource(27147U);
    msg.setSourceEntity(179U);
    msg.setDestination(36211U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.4084172772575386;
    msg.lon = 0.5495404696418704;
    msg.z = 0.8211397218636578;
    msg.z_units = 73U;
    msg.radius = 0.026432494245691274;
    msg.duration = 17871U;
    msg.speed = 0.11424881233568751;
    msg.speed_units = 219U;
    msg.custom.assign("CHFHOQIXGIPLQSZFXVJNHEYTSTWLOTJWYWCLMAHQFZHPEFGKRVGFRVQSSLTFQEXCBBNDJQDBFVRLTNXEJVOTHYSPAAWJCYKADVXFHIMSUJNRPKIOTETNXZMPDOYUFPKEGFKOBCDWDRWKXAUZDMBLVKBMYTLCBOROPZNMVDQPUEJGUBADCJZBSWAGCKDUSZILUIOWGVIJKSLKIESUENAIUHHBOYTRUGRZGXYRQ");

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
    msg.setTimeStamp(0.037759200168046125);
    msg.setSource(52342U);
    msg.setSourceEntity(112U);
    msg.setDestination(28887U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.11952036982538339;
    msg.lon = 0.4109346840162924;
    msg.z = 0.8112855413841247;
    msg.z_units = 135U;
    msg.radius = 0.7895427520758475;
    msg.duration = 36492U;
    msg.speed = 0.548173399560744;
    msg.speed_units = 222U;
    msg.custom.assign("VADWYJZINCESZKTDPDZREARELHKIRKFMWGIMTQRHLDXQHGONKHDYPXUGSBMLHNPTQBXORYZLAPJGRFGUKYEXTQVSSCFDYXVFJMAKOIXMUSALZJRCJMITCCMJQLKRHLVJGGQECUZNSGCNHTKCSBTGVQZPJTAJDUXQWLXENUZEIWQWFBZBAOTUNNBPLCTEFCUBNSWPADSOGOSWMBRYORWOEIWIXJYADVYFAMPEV");

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
    msg.setTimeStamp(0.8431267827169562);
    msg.setSource(55885U);
    msg.setSourceEntity(147U);
    msg.setDestination(19061U);
    msg.setDestinationEntity(32U);
    msg.timeout = 40520U;
    msg.flags = 192U;
    msg.lat = 0.610108583737035;
    msg.lon = 0.9224353003134013;
    msg.start_z = 0.9793570603084298;
    msg.start_z_units = 176U;
    msg.end_z = 0.6441411359291086;
    msg.end_z_units = 229U;
    msg.radius = 0.3532351017481208;
    msg.speed = 0.9391080687059241;
    msg.speed_units = 163U;
    msg.custom.assign("GTHLTLBDEBWMYQWIUEZKONUPUXJWEAFJGFYHCROUKVNMQGQAPITYVAYFOCLGOENRBANNOKLRNTJFBSLCTHXHIHQNDPZIEDBBGDHQG");

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
    msg.setTimeStamp(0.04129587962313519);
    msg.setSource(31186U);
    msg.setSourceEntity(198U);
    msg.setDestination(26099U);
    msg.setDestinationEntity(127U);
    msg.timeout = 39900U;
    msg.flags = 242U;
    msg.lat = 0.6382788138481951;
    msg.lon = 0.6425046013165655;
    msg.start_z = 0.7443274760625297;
    msg.start_z_units = 244U;
    msg.end_z = 0.6330856556166293;
    msg.end_z_units = 5U;
    msg.radius = 0.6846398168819378;
    msg.speed = 0.6545270659688186;
    msg.speed_units = 13U;
    msg.custom.assign("DWUWVRIRCCKZCXOCQWEZGIEJNMDTSIJDIOCULFXVRVPMONYOYJBUZILOKTGKGZYMFGDPROSHBAYHTNHUFNPEYYGFYEKSKAGCSAIEHOBLVDCAXGWOLLJQANBZUMUR");

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
    msg.setTimeStamp(0.6665021898728593);
    msg.setSource(58649U);
    msg.setSourceEntity(207U);
    msg.setDestination(62048U);
    msg.setDestinationEntity(143U);
    msg.timeout = 18897U;
    msg.flags = 172U;
    msg.lat = 0.38574348462132324;
    msg.lon = 0.2402666633853956;
    msg.start_z = 0.8282589830510064;
    msg.start_z_units = 86U;
    msg.end_z = 0.8567489070195756;
    msg.end_z_units = 186U;
    msg.radius = 0.26357021399005487;
    msg.speed = 0.6984634272222487;
    msg.speed_units = 180U;
    msg.custom.assign("IJFFVPJKDRENSHDMOSNEODCOLGHJMAUFLCAGZSXDVSGCEDPSRTXIVVCLTWYCIYQAYRBIMWKKZHVQAHLAFVDGCQJJVFZNWXBXOMKTXPDJRWEJPCXUNEYRWODGQBMLSKEQMIFYFSBGNHUWDHSLHBRLKMMBU");

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
    msg.setTimeStamp(0.0789402999397456);
    msg.setSource(31208U);
    msg.setSourceEntity(175U);
    msg.setDestination(58895U);
    msg.setDestinationEntity(232U);
    msg.timeout = 37520U;
    msg.lat = 0.5465735710066867;
    msg.lon = 0.6186020606579442;
    msg.z = 0.3127266800102153;
    msg.z_units = 168U;
    msg.speed = 0.8678342596365104;
    msg.speed_units = 126U;
    msg.custom.assign("SOEZXJTBILHXWCTFCAIZRRLAKQWERRDRJPZBFUYWWHSTBBLYK");

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
    msg.setTimeStamp(0.40603441463846235);
    msg.setSource(52525U);
    msg.setSourceEntity(77U);
    msg.setDestination(11914U);
    msg.setDestinationEntity(247U);
    msg.timeout = 2098U;
    msg.lat = 0.8152973074659532;
    msg.lon = 0.5197379013880479;
    msg.z = 0.19876769451927756;
    msg.z_units = 229U;
    msg.speed = 0.7326601587569879;
    msg.speed_units = 241U;
    msg.custom.assign("VJTVTNIZYPRTEYMUMDYMJQLKNPKUQWEFVDPSNTIYRNJXUJADHTOOLPZFLJPDMBVZTUCFLHKXLQRWDRLITEWZLCBVXHQHQRCDAHGYEOWYEFFAMHSXNIXSBYQIPGXOEUUFWLWZUEHBKCCJHEQGOQBBKFHRSXMWYZSDNCFCECPKONUATRZFBANKGESODLPTMNWUKPQIOIVWSJSXOJAMWYHJCBIVAIRGBAZPCZDGGANGTDRVJUIXB");

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
    msg.setTimeStamp(0.19391546737329712);
    msg.setSource(62873U);
    msg.setSourceEntity(153U);
    msg.setDestination(45339U);
    msg.setDestinationEntity(219U);
    msg.timeout = 47854U;
    msg.lat = 0.9791382156309535;
    msg.lon = 0.007145512743091387;
    msg.z = 0.13622023786491344;
    msg.z_units = 209U;
    msg.speed = 0.8493156155303322;
    msg.speed_units = 174U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.274450660552337;
    tmp_msg_0.y = 0.5519406895837278;
    tmp_msg_0.z = 0.3011458721884669;
    tmp_msg_0.t = 0.9173675518547924;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XGINFAYUROFZIQDGRKGHOMDYXLHKLBMQGLIAJZMGJCDJPBSINONKSQUSIPNCQWIGZTBTBRAKVKFWYPWCKFAVVZQGUIGESH");

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
    msg.setTimeStamp(0.7409924583679489);
    msg.setSource(2762U);
    msg.setSourceEntity(96U);
    msg.setDestination(15859U);
    msg.setDestinationEntity(117U);
    msg.x = 0.7644185828846591;
    msg.y = 0.6939395272843418;
    msg.z = 0.9635122832232466;
    msg.t = 0.9280894335919349;

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
    msg.setTimeStamp(0.693865487821404);
    msg.setSource(55120U);
    msg.setSourceEntity(136U);
    msg.setDestination(54271U);
    msg.setDestinationEntity(36U);
    msg.x = 0.5656776406902659;
    msg.y = 0.5689990369028151;
    msg.z = 0.7760506179245612;
    msg.t = 0.8259133151573177;

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
    msg.setTimeStamp(0.13691177986530356);
    msg.setSource(63187U);
    msg.setSourceEntity(61U);
    msg.setDestination(21103U);
    msg.setDestinationEntity(13U);
    msg.x = 0.9276459003498105;
    msg.y = 0.3890643711072558;
    msg.z = 0.6513736203630835;
    msg.t = 0.5925334919999138;

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
    msg.setTimeStamp(0.840596167009918);
    msg.setSource(23012U);
    msg.setSourceEntity(87U);
    msg.setDestination(31657U);
    msg.setDestinationEntity(124U);
    msg.timeout = 243U;
    msg.name.assign("BYKREDMSJRTAHQTFCDHQOYCUKPDPUEKAVHFQLYQHTZRCRICFAEQMRQKDINDXNPMCRXAFWMOUJOSMUAJECLZXUCRIBTTOFBWKLBKZPIFGSXFBVBGJCOOVID");
    msg.custom.assign("RGBALKGOMXPBZNHNZPZTAGVCQSHQMARIJLSTOIWNRBXDVTQEKCBBIWUWSPONWEGAAVOAGYBHYDPMSZMWNFJPWKDJYKNPFDPSFUXLWRTDXTLUARDBGVTJJXMYUWIPCBZRDCMOUFSSQHVCKXFOJYEHTFZQIKUXVQNGRIODHASODYNMIUDQJOMZEXZQZ");

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
    msg.setTimeStamp(0.5405711520585882);
    msg.setSource(27142U);
    msg.setSourceEntity(40U);
    msg.setDestination(19592U);
    msg.setDestinationEntity(174U);
    msg.timeout = 14441U;
    msg.name.assign("JNDTBMQHYTPYBGCKYFZMXKVWTNXJPUODKPJOJJFZLNUXKFFPDNQNDOQJXMUCP");
    msg.custom.assign("UDQBCSLXXXLGGWBYAYCAOMOHJVDEPRTADEWQCGPTEHVKGXHQOUWZVSMRFMVCTQYSWTZZAOGYOUPOYZGVNSYTVKLQNPCZKGMVHANLKNBEDASKNJFFHQILOJYXYJANFBZCMKJEQVRHBIPVOFRLRCUXHCKSSGNRFAQNEESWEDBICRAKSSUEPPMOFKJADZHBBZXLFLJYHQJFWPGTWINQWIJIMZFUUKEUDBIMUZYIGLCMIIXXMTDTTNRLBVDPPUR");

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
    msg.setTimeStamp(0.44099279502837796);
    msg.setSource(28472U);
    msg.setSourceEntity(20U);
    msg.setDestination(54251U);
    msg.setDestinationEntity(127U);
    msg.timeout = 1999U;
    msg.name.assign("QDLMCQGHXBDPSRJMVAWJKVXJBDLPEAPKKYOWHZVLMLFHVSWOFQUM");
    msg.custom.assign("OKKAUWZCAQHOMRWNXXXBMUEDDNDGAGTGQCVXLXFXYIHSHKISFJPQKWLVEIGMOMZCAQPFOKLFKEYLBZMYTPSQSONGHWQNINPZFVZLYDDCZBXCPDTJBST");

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
    msg.setTimeStamp(0.017070352264185407);
    msg.setSource(51934U);
    msg.setSourceEntity(84U);
    msg.setDestination(18775U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.29069267461669923;
    msg.lon = 0.47268001053536934;
    msg.z = 0.9129394154556668;
    msg.z_units = 238U;
    msg.speed = 0.09358966358903908;
    msg.speed_units = 65U;
    msg.start_time = 0.5491677926523487;
    msg.custom.assign("FFSDEZSGTHXCMVSGMDELQIGZVN");

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
    msg.setTimeStamp(0.2841079809301703);
    msg.setSource(40004U);
    msg.setSourceEntity(180U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.6604672252311247;
    msg.lon = 0.22077599968295236;
    msg.z = 0.5949390000489648;
    msg.z_units = 227U;
    msg.speed = 0.5041256533127576;
    msg.speed_units = 46U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8668569593708771;
    tmp_msg_0.y = 0.06812363207396921;
    tmp_msg_0.z = 0.2728667657542284;
    tmp_msg_0.t = 0.059823095444519914;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6225409783780338;
    msg.custom.assign("EYHUYXCWAWGKSUJZXYQKGIQVYSHXCBHQBFWCEMJAQIFWTFZSFONUPICHBBUPRVHVPQIXNMBPZZSATMTLDOEOEOYAOHZGGECLKSDVAKHGNTONGYDBWFVFPJBHRERDLKWRPNHTUJRRMMDYGJ");

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
    msg.setTimeStamp(0.644336035085591);
    msg.setSource(60314U);
    msg.setSourceEntity(213U);
    msg.setDestination(27046U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.7973342713687739;
    msg.lon = 0.886876487769572;
    msg.z = 0.9084644135365879;
    msg.z_units = 250U;
    msg.speed = 0.7180537101927241;
    msg.speed_units = 124U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34310U;
    tmp_msg_0.off_x = 0.4714980341157624;
    tmp_msg_0.off_y = 0.8894311176350449;
    tmp_msg_0.off_z = 0.17421386423925922;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8281039106253094;
    msg.custom.assign("UWLFVBJCXEIANZLAYNRKXRSKCKEXUJOUOHYEBRRCTQEGYLJWYKPWYORSPKXQIQTNZVDVWJSVTTMCFVZCMZHLLFNMDQYZHKCPIGLILPDFNSJRUVCFTHYAMVAABGCMPAXFFDXDTJQZYQVZGAZHBDPWBOETKTVUJCIGOBQOTQGRHVYRKUMGHARENXENGKWBLJWPFWHNZCNBXREWSOEPSODBLPIOWNJDHEUGHIXMOISMSGFUMU");

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
    msg.setTimeStamp(0.1351982908824746);
    msg.setSource(17718U);
    msg.setSourceEntity(15U);
    msg.setDestination(52498U);
    msg.setDestinationEntity(177U);
    msg.vid = 47817U;
    msg.off_x = 0.24446465675774898;
    msg.off_y = 0.5522391933441791;
    msg.off_z = 0.0859808913648702;

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
    msg.setTimeStamp(0.06012733151391725);
    msg.setSource(40140U);
    msg.setSourceEntity(20U);
    msg.setDestination(20675U);
    msg.setDestinationEntity(199U);
    msg.vid = 46396U;
    msg.off_x = 0.7414790705282274;
    msg.off_y = 0.41965634257172124;
    msg.off_z = 1.7228536141056239e-06;

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
    msg.setTimeStamp(0.4316748637323571);
    msg.setSource(32356U);
    msg.setSourceEntity(225U);
    msg.setDestination(45726U);
    msg.setDestinationEntity(171U);
    msg.vid = 3825U;
    msg.off_x = 0.414887898656621;
    msg.off_y = 0.03400588508696156;
    msg.off_z = 0.4734647062305959;

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
    msg.setTimeStamp(0.6255866427215243);
    msg.setSource(10897U);
    msg.setSourceEntity(16U);
    msg.setDestination(61308U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.7389103160915397);
    msg.setSource(48715U);
    msg.setSourceEntity(148U);
    msg.setDestination(48314U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.7494535441919372);
    msg.setSource(9600U);
    msg.setSourceEntity(232U);
    msg.setDestination(41470U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.5084300879666782);
    msg.setSource(19009U);
    msg.setSourceEntity(164U);
    msg.setDestination(51051U);
    msg.setDestinationEntity(196U);
    msg.mid = 33683U;

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
    msg.setTimeStamp(0.5558640616525142);
    msg.setSource(36333U);
    msg.setSourceEntity(237U);
    msg.setDestination(12017U);
    msg.setDestinationEntity(37U);
    msg.mid = 18854U;

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
    msg.setTimeStamp(0.08463553738906415);
    msg.setSource(53280U);
    msg.setSourceEntity(53U);
    msg.setDestination(96U);
    msg.setDestinationEntity(132U);
    msg.mid = 42852U;

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
    msg.setTimeStamp(0.6362689921723608);
    msg.setSource(13924U);
    msg.setSourceEntity(49U);
    msg.setDestination(5004U);
    msg.setDestinationEntity(115U);
    msg.state = 144U;
    msg.eta = 21569U;
    msg.info.assign("FVVMYVQESDWRFMLXPVTABYHOJJOTELJYBJWGROHJAYGTFIARNEEPKGTRZUIPHYZIQKODLBWSTQVODBFIFGHELRMYMMFRCLJDWOULKHRFVSAMZAALGKCGXZYFNIDKUUNKXWNZKWZCSROPMMVLGPMZUNUNXVEZWTNQFNRDDOSCIWEKDYCJSUPQCBKAUBSCQGATXXVSQXHDTTGFCOQJRIDBBHLMOBALHUAYEIVWIHQNKZJPEIPNQYJCHPXXSPTWBG");

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
    msg.setTimeStamp(0.24264470810756722);
    msg.setSource(37660U);
    msg.setSourceEntity(67U);
    msg.setDestination(35428U);
    msg.setDestinationEntity(167U);
    msg.state = 1U;
    msg.eta = 60697U;
    msg.info.assign("KWZJAXDGIHNCSSARYHWDQIYCCWENEBHLZMLOMJVKGHQGOELNSTOBEHALXANAUMUYDSITZLUXOQVFSFIXCYAFVARDJMVPPFPYGOXBVVZYGYSXQGRHRDIGRKHGYRMMUTFKDJBBNVYVFYBVENCQRSBMTUZPI");

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
    msg.setTimeStamp(0.4464091405555125);
    msg.setSource(29074U);
    msg.setSourceEntity(140U);
    msg.setDestination(54376U);
    msg.setDestinationEntity(210U);
    msg.state = 123U;
    msg.eta = 33589U;
    msg.info.assign("LNYHROHURMULBNWLJVFWZFTENUJKDICCCPTKMCDAIDTQIFJFAPSWNAHJLZYPRMUROOKPLMFVIVEGGCZLIUIKBPXKPDAQIKBZONSZFCOPUAIZJPNQWZAWXETRSUOXFRGBWCKENAESBOMTEXOZBB");

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
    msg.setTimeStamp(0.012446527550364461);
    msg.setSource(10122U);
    msg.setSourceEntity(249U);
    msg.setDestination(37302U);
    msg.setDestinationEntity(181U);
    msg.system = 15925U;
    msg.duration = 60083U;
    msg.speed = 0.6501588685905627;
    msg.speed_units = 214U;
    msg.x = 0.5660681279202439;
    msg.y = 0.3837340955377593;
    msg.z = 0.90762122510166;
    msg.z_units = 235U;

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
    msg.setTimeStamp(0.43982951135136417);
    msg.setSource(7994U);
    msg.setSourceEntity(237U);
    msg.setDestination(44637U);
    msg.setDestinationEntity(39U);
    msg.system = 64607U;
    msg.duration = 51396U;
    msg.speed = 0.0562962373881879;
    msg.speed_units = 213U;
    msg.x = 0.21834645971551025;
    msg.y = 0.8998566375213064;
    msg.z = 0.4043934747096659;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.9586076983561973);
    msg.setSource(43854U);
    msg.setSourceEntity(45U);
    msg.setDestination(57699U);
    msg.setDestinationEntity(108U);
    msg.system = 16536U;
    msg.duration = 5966U;
    msg.speed = 0.9699245975493452;
    msg.speed_units = 211U;
    msg.x = 0.4476412807645389;
    msg.y = 0.9331924517185749;
    msg.z = 0.016430545347662084;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.8289654850697991);
    msg.setSource(56240U);
    msg.setSourceEntity(21U);
    msg.setDestination(59846U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.18694704244957705;
    msg.lon = 0.23805809878918338;
    msg.speed = 0.707096044437028;
    msg.speed_units = 131U;
    msg.duration = 43211U;
    msg.sys_a = 1880U;
    msg.sys_b = 6816U;
    msg.move_threshold = 0.6294939482653817;

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
    msg.setTimeStamp(0.9707721224185287);
    msg.setSource(11539U);
    msg.setSourceEntity(117U);
    msg.setDestination(33475U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.6390553136268212;
    msg.lon = 0.02316056091673091;
    msg.speed = 0.6666358332531053;
    msg.speed_units = 130U;
    msg.duration = 37738U;
    msg.sys_a = 26797U;
    msg.sys_b = 6457U;
    msg.move_threshold = 0.4732017415723706;

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
    msg.setTimeStamp(0.22729256429903144);
    msg.setSource(25098U);
    msg.setSourceEntity(243U);
    msg.setDestination(51791U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.9372896048184811;
    msg.lon = 0.8671501108251495;
    msg.speed = 0.3217794405270742;
    msg.speed_units = 39U;
    msg.duration = 44021U;
    msg.sys_a = 34620U;
    msg.sys_b = 55469U;
    msg.move_threshold = 0.19814341463430374;

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
    msg.setTimeStamp(0.4759140527396907);
    msg.setSource(47151U);
    msg.setSourceEntity(222U);
    msg.setDestination(30025U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.41378845229711614;
    msg.lon = 0.4556848760564144;
    msg.z = 0.8072801884524925;
    msg.z_units = 52U;
    msg.speed = 0.6243054546886971;
    msg.speed_units = 81U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.46131574805258535;
    tmp_msg_0.lon = 0.20674494817282185;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UNOATSZNCSPXVQDUXDPOCLTSCVZEONUJGKQBTKGRZNBZCJWGOSEZCJYIONQWFUEVMBTOAJHKDYDIWEIEMEGVJQWGHYXZLDPNCFTLYSAVESPDQUNVAZBMXERKLGOKMCQRHNHSWRHVTRTCRAPYLULDKXTGYALGKEVWEOLLIDYPUHRNWKCXOLROIBIJUWIVQRQQICFJPYK");

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
    msg.setTimeStamp(0.17269872608468884);
    msg.setSource(65122U);
    msg.setSourceEntity(15U);
    msg.setDestination(8610U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.17630844714262472;
    msg.lon = 0.8979540953651995;
    msg.z = 0.7549551129810969;
    msg.z_units = 145U;
    msg.speed = 0.011865048301825665;
    msg.speed_units = 63U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9934158048664384;
    tmp_msg_0.lon = 0.8453596791819674;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YECVGFMXROJRHEBTCOUPDCBLQGHNIDLIYSMPFNQTYLASUPNVFWBWIPJHRGSBQJFDZNVCMYMFGSQZMDKNPBLANUFREOTWLHEJMBIJXKOIYTTFVRNTRGSSEMTRUOWMVRDKOCVQJZIZUVUYQEFFLDAVGPDEKMRISNSFWWAOAOVHITXCYQKBXYWNEWBAHLZCQCHJXPQGLAXUDTTCGBXXAJZWVYUHJORKPGKHUHEDUIPDOI");

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
    msg.setTimeStamp(0.7785236036103007);
    msg.setSource(50978U);
    msg.setSourceEntity(10U);
    msg.setDestination(42701U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.553345039697248;
    msg.lon = 0.28257764310583455;
    msg.z = 0.3405704248627103;
    msg.z_units = 53U;
    msg.speed = 0.35277757113414443;
    msg.speed_units = 70U;
    msg.custom.assign("TDCQXZLFTAZKXNM");

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
    msg.setTimeStamp(0.7843671345759807);
    msg.setSource(28972U);
    msg.setSourceEntity(184U);
    msg.setDestination(62970U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.250260606074569;
    msg.lon = 0.826562931121935;

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
    msg.setTimeStamp(0.5856441606061457);
    msg.setSource(9640U);
    msg.setSourceEntity(228U);
    msg.setDestination(15430U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.7119977787951586;
    msg.lon = 0.3342642892334068;

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
    msg.setTimeStamp(0.06563897588861467);
    msg.setSource(13185U);
    msg.setSourceEntity(77U);
    msg.setDestination(41048U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.46702962739082865;
    msg.lon = 0.8535982442093246;

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
    msg.setTimeStamp(0.738503337544727);
    msg.setSource(1536U);
    msg.setSourceEntity(98U);
    msg.setDestination(33348U);
    msg.setDestinationEntity(227U);
    msg.timeout = 37283U;
    msg.lat = 0.589828871753019;
    msg.lon = 0.26144858848510266;
    msg.z = 0.06597881919351456;
    msg.z_units = 166U;
    msg.pitch = 0.9367983844906038;
    msg.amplitude = 0.33038489207999344;
    msg.duration = 20450U;
    msg.speed = 0.2743250387660132;
    msg.speed_units = 120U;
    msg.radius = 0.7832320307331113;
    msg.direction = 103U;
    msg.custom.assign("POOWXHRAAGKTJSZTNRNCVMYMIKDKXQCJLRIWKPELRNTKMPVUNAFGVWJAWJCKABUDYSGJFSMLUP");

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
    msg.setTimeStamp(0.7351872335601076);
    msg.setSource(40279U);
    msg.setSourceEntity(10U);
    msg.setDestination(37365U);
    msg.setDestinationEntity(89U);
    msg.timeout = 22672U;
    msg.lat = 0.927098711788263;
    msg.lon = 0.7932815672187484;
    msg.z = 0.9148936823274885;
    msg.z_units = 239U;
    msg.pitch = 0.5218366724999425;
    msg.amplitude = 0.8245213903883766;
    msg.duration = 14580U;
    msg.speed = 0.533758956018644;
    msg.speed_units = 180U;
    msg.radius = 0.24831508837967842;
    msg.direction = 71U;
    msg.custom.assign("KNGFFZFUASYTMVKWYYZXYWOKICKLEB");

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
    msg.setTimeStamp(0.4204082634333728);
    msg.setSource(14851U);
    msg.setSourceEntity(112U);
    msg.setDestination(39729U);
    msg.setDestinationEntity(23U);
    msg.timeout = 65352U;
    msg.lat = 0.2739396386613199;
    msg.lon = 0.504569858225443;
    msg.z = 0.02771461109198292;
    msg.z_units = 119U;
    msg.pitch = 0.08301673377523555;
    msg.amplitude = 0.527313813646599;
    msg.duration = 43765U;
    msg.speed = 0.37186692094791907;
    msg.speed_units = 149U;
    msg.radius = 0.38368061213650584;
    msg.direction = 220U;
    msg.custom.assign("KTNNKJBERJRBHFVZXSFGJZGYAXKEKCTTQOPOROWJFQRUCNDWPUNEIUCOSZHLKSHRFTDLXSARJNJBVIMMYMMDSJBEVFAUBDX");

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
    msg.setTimeStamp(0.6511307445919645);
    msg.setSource(4544U);
    msg.setSourceEntity(249U);
    msg.setDestination(43445U);
    msg.setDestinationEntity(98U);
    msg.formation_name.assign("WJKHVRTEJFVLIAUBEEQPXTYKGTTDUACHYDHNYUIJGAMKQWFROLLEUDLYULAXXNVDILVRZQTMA");
    msg.reference_frame = 19U;
    msg.custom.assign("BWIYMTKFGEMRIIYUNZJJJGVZBTTFAHNASIVUVJHHQERNITRHSOUHMAYCENIHYFCRXNQLODDODJOKLYPOZAONQBABLRPUDLWGUKQCIKVEUVXHNIHODTNXLKCWYGKGUDJJTAZLTZOSHCPGCPPVVSLDBUOPIEWZPXJXSYEXASWEZUWXPMHFBLMCNUQ");

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
    msg.setTimeStamp(0.12684200377932076);
    msg.setSource(60128U);
    msg.setSourceEntity(170U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(177U);
    msg.formation_name.assign("FPNCVMWCRUQMYBVXPELPGVNUWHJRBAGXJTJEAZSXMUKPIDJKDJTPGUUFQEXWNOGSGUINVDVSEINAMGYCPLDJYVHMVVOSTFBOCOBWUTZPMRHHBYRLABDXLTZLIFIKMSNHRTYQARJQKOJENJZFSMXKGZRFOXTZCAGHSFXKRGISPVEOLNMQWIHUDCQPWYNTY");
    msg.reference_frame = 19U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23564U;
    tmp_msg_0.off_x = 0.9105772593648178;
    tmp_msg_0.off_y = 0.28154059212586824;
    tmp_msg_0.off_z = 0.6985013134443233;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FZHLYUJSPIMGYEKSODGBSMDPNMDUIJXPKBBVHIJREOHGLSMWTQXKRAWIFVFMMPZAGRAAHQXKTDLXSRZI");

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
    msg.setTimeStamp(0.769133740513525);
    msg.setSource(52277U);
    msg.setSourceEntity(58U);
    msg.setDestination(34337U);
    msg.setDestinationEntity(75U);
    msg.formation_name.assign("AQXKDUJXVACOVKQPVMYSZEDHFFCNTIXULLHJZANGICYLFFVEUDWBKNRPDDHMEGLLWIJZCWEZUFKXMQPRTPUMPNWOZ");
    msg.reference_frame = 122U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 33347U;
    tmp_msg_0.off_x = 0.40624381655651887;
    tmp_msg_0.off_y = 0.654424361823751;
    tmp_msg_0.off_z = 0.4089000998232186;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FKNADZTPGTSIUVRQEHOYSAEPUPJKUMVMTJXEXWCVJVXKCPURSWNWZTHJZZYYKQOGEIRKIFWEIZLIQKAOBDPMGXDDWRHIHZCJQWHGZCJQKCLNABFUJGONPNVWFAJBMYBTHGTVAMSTFTGSLOWSXGAQYDWPSOYIEXZZAYOYURTNUNJPGHEEMDMBXXI");

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
    msg.setTimeStamp(0.2954946966388786);
    msg.setSource(62878U);
    msg.setSourceEntity(35U);
    msg.setDestination(17161U);
    msg.setDestinationEntity(173U);
    msg.group_name.assign("ODOEPJRATFPAWEGFQQCODVWXEWBFNAAWCBSVVKIHMMVHJKCDDKWHARPVUARZCUJREURZJIDZRPOXIONFPGVAIBPLNYNVXCEKLNFRZEGSQAGMFISNKBFDMOZUBRJSGSHCJYMNXIICHLKRZWXTNQLYBKMUGHVOMTBBIGYHEQXNHPSWZNTKJWRYDT");
    msg.formation_name.assign("CFXRBZNDYMHFVTAWPVCGDUKYPAOUEYAYIJHIMHTUIOWNWMNNUVWLLSFQLSTSVMJMQLGHCVIZXGCPRNSKOGWZRJOBFHZPEAQXQJGJXQJRABGDRONRXLFSILIVDQNVUT");
    msg.plan_id.assign("QFOQXMROOCYLXDZRLFXKAKAPETEGODPLKIQBFBEMDUHTZSRCGPQNUHZXVYSCRVJSATIHZXGLZZESDADXYOEWYDXWJQKHGGNNQQNKLJSXUSRCPEMMGTILBSBDZIFPWYLCTHUYMBMNVVUKKSITVJJOQNFBPUXI");
    msg.description.assign("JNIQEVCAYRZSSFHZEEBYSMRAHMOHCGCYJDJUBMNJWIKRRKOZWOOSALFOYRLPMCWMWUPQGVKBLIUZHYLQZCAXSAPGIXCFDPQIYVFKBRZADCPQXSGL");
    msg.leader_speed = 0.3651124641997311;
    msg.leader_bank_lim = 0.6667420084012289;
    msg.pos_sim_err_lim = 0.5342293841883239;
    msg.pos_sim_err_wrn = 0.20861721316425064;
    msg.pos_sim_err_timeout = 60450U;
    msg.converg_max = 0.4093679267485246;
    msg.converg_timeout = 48410U;
    msg.comms_timeout = 7287U;
    msg.turb_lim = 0.062416391946783945;
    msg.custom.assign("TJKNNMVLCUIKQSDAGYBWFHNRLSMUSUSWFMYXWPLFSBANERWJTPZAYQVJUMNIGHKXFKKTPVVPNDCBORMVBJEMMURVSPXFOCZLGWIEHEXOZLCXSDTEBDRHVONLNGG");

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
    msg.setTimeStamp(0.44846692502771);
    msg.setSource(10000U);
    msg.setSourceEntity(118U);
    msg.setDestination(48775U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("CXPADHHPPMAAIAHVDUUMAQPRKDKUYOTXOOHSEBBSBDFZVOJGVEXVFAVJGIHXQCYWZNUMLRBQMKXFJNNKXYMNNIKYDAJVFGCNSEECIEELYFFVSYYZKJCCCJUHTOARYOHRFWAEWQEBRFBIJDUWQXLFUDZGJHPIGPROJRLPGLXTSDCAZDZBSHENBWQKLRTVTVLSSKJQHTIQLGTNYRZYMSQZDNWLCEXBIGMFZRTGMLBGWIZPVS");
    msg.formation_name.assign("ZNGRHSBNQOXSZBMEDCWHDOFZEGUJUMSVFPANBOVKMCSPOCZHBSRCUBGSRRIZGCKOYAVAQULYNWRHCSJKTTODFAVIIRWEDWPETCALYOWNNNTWSRLMDDGYWXRPCXHDLKUDISFBQYETMMBTUOUAMUOGBEAROILIIBDMLJXVHIJHYQTYCQNGZAPKRVUAXYJVLCDMLKKQSGJEWXZXULFEYEIFVXLEVFJAJQPJFJHQZPPPXZGKITFFT");
    msg.plan_id.assign("TXDXPJSCYHRRGYQIBXPTTCTUNROHKQFJVWIRIFSJTUZRBAVLARBUMFMPRIMNHDMGLISYFNCYAVFZKEMNWOGMTHO");
    msg.description.assign("MKNXNGTVUNCWRXIYOSBPHHKUFWAUIAOOBWQLMTIRXMXEQPCIKYUHPXOENGQEHUQRLCAECGJHPRFCVBANJTULJWSLNLRMDZDBVQGJZEDTYJFHSFBZAKWBENNJXCLJMZPWRTXTMIESKAUNGSWAOFGFBMCPLORZJRLEZOKQAPBAYBQEYTDWVXBFVYHCDDLSMMKDYKCEVJYAYOVDXTRKQIIKTSXPYOHFTZGIH");
    msg.leader_speed = 0.807923072641719;
    msg.leader_bank_lim = 0.980998549998969;
    msg.pos_sim_err_lim = 0.44447045584612377;
    msg.pos_sim_err_wrn = 0.12126331466751195;
    msg.pos_sim_err_timeout = 17202U;
    msg.converg_max = 0.3289769717142943;
    msg.converg_timeout = 35264U;
    msg.comms_timeout = 53130U;
    msg.turb_lim = 0.9316556560075865;
    msg.custom.assign("BCAFEGJLRKHHVINVWUGMYIOHIQESTUALTLPDLCPVDFJPUIYLTAIESJRKYCEXKXRTDPOVZJMVPSMGEDOZHHIQDIOZDLFFDKSRBECQCQAUCAYOTMKIDWZISASNUFWXJYXKCOPNKPLLRSMGORQOQAUAEZGXBMZNNBQTMXTWLDCNX");

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
    msg.setTimeStamp(0.3154268811184181);
    msg.setSource(10350U);
    msg.setSourceEntity(100U);
    msg.setDestination(26551U);
    msg.setDestinationEntity(222U);
    msg.group_name.assign("BKQCNOZZWBFL");
    msg.formation_name.assign("MNRLZACUDEAKOSQPNJKJZJBEVDWUGEQDAFLHJEZXCQBPVJOLHGFHCYWKTMYSISAFPNITXKLLDOKGLFFXXZRFAWYTCAFYNZERMKNMOJPSCXDYFMVHSOAXXGVSSHIHED");
    msg.plan_id.assign("ZUCZOUGOBQSNSRKLSNPKSTFCWCJJDTLLGQQJWFIAYAGCLVHIRUMBBAGIPFMSKRGWDFJSRZOTBWKQMAOQCCVLVGBNUXZKORTVNNYZRWTMXMUFDNQOQUFSHMHICYZZFMQYOVOKHXDNJELLAUJCRLRFRFMPWERNQTPSSIBZEFOVYDPGTDEXPYGJIWBHAMUXCSUJAWJNBZKKEIIHXCENEAHYVXGDZEBEKIAIVXYKTVAPYTTLHBPWXOWHVHDMYX");
    msg.description.assign("OCULIVZBKDNQFJSNCYRDOUDKROCPGVITHEDOFQAQSVJKYDFHEIEWMZISIGKLVAUCTUJDBFNGXTJIMEGRPNYMVZDVCX");
    msg.leader_speed = 0.5570983290795861;
    msg.leader_bank_lim = 0.18129354663746133;
    msg.pos_sim_err_lim = 0.2644785405501646;
    msg.pos_sim_err_wrn = 0.3372822930373014;
    msg.pos_sim_err_timeout = 2067U;
    msg.converg_max = 0.7111156192121596;
    msg.converg_timeout = 51976U;
    msg.comms_timeout = 12832U;
    msg.turb_lim = 0.3330456728784519;
    msg.custom.assign("TTCWKSMQIKQQRSDAVONDNXTHGJRTUKUTIDUKMXYNBEJVHINYYQVSBYGZAOSNRBOGEQPUXJUDPESDOKH");

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
    msg.setTimeStamp(0.4565379729947733);
    msg.setSource(39698U);
    msg.setSourceEntity(124U);
    msg.setDestination(61320U);
    msg.setDestinationEntity(202U);
    msg.control_src = 61402U;
    msg.control_ent = 232U;
    msg.timeout = 0.5945270508066813;
    msg.loiter_radius = 0.8253049599238312;
    msg.altitude_interval = 0.06823840604936104;

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
    msg.setTimeStamp(0.5680318628257401);
    msg.setSource(63417U);
    msg.setSourceEntity(158U);
    msg.setDestination(30342U);
    msg.setDestinationEntity(17U);
    msg.control_src = 14869U;
    msg.control_ent = 188U;
    msg.timeout = 0.19769434186028156;
    msg.loiter_radius = 0.9825166188819541;
    msg.altitude_interval = 0.07496074709578693;

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
    msg.setTimeStamp(0.22539502478456497);
    msg.setSource(42032U);
    msg.setSourceEntity(223U);
    msg.setDestination(3643U);
    msg.setDestinationEntity(189U);
    msg.control_src = 13596U;
    msg.control_ent = 89U;
    msg.timeout = 0.9957521718425449;
    msg.loiter_radius = 0.2660483688597969;
    msg.altitude_interval = 0.5193607984542754;

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
    msg.setTimeStamp(0.6204288189944805);
    msg.setSource(31680U);
    msg.setSourceEntity(251U);
    msg.setDestination(901U);
    msg.setDestinationEntity(231U);
    msg.flags = 125U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.14719403367614747;
    tmp_msg_0.speed_units = 41U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.40839713599824146;
    tmp_msg_1.z_units = 67U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.49359826390790085;
    msg.lon = 0.8151180080717604;
    msg.radius = 0.5937265086475159;

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
    msg.setTimeStamp(0.06241639276138122);
    msg.setSource(57338U);
    msg.setSourceEntity(13U);
    msg.setDestination(2085U);
    msg.setDestinationEntity(77U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.21665883869423563;
    tmp_msg_0.speed_units = 230U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8261594534377259;
    tmp_msg_1.z_units = 178U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9006165008889858;
    msg.lon = 0.7947797282304561;
    msg.radius = 0.4755915639293199;

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
    msg.setTimeStamp(0.4446805774593984);
    msg.setSource(31277U);
    msg.setSourceEntity(60U);
    msg.setDestination(53446U);
    msg.setDestinationEntity(93U);
    msg.flags = 102U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4663432648461725;
    tmp_msg_0.speed_units = 120U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.756296223066809;
    tmp_msg_1.z_units = 252U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6323893718982506;
    msg.lon = 0.47854901981433007;
    msg.radius = 0.5538849841345592;

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
    msg.setTimeStamp(0.5751536097952493);
    msg.setSource(5842U);
    msg.setSourceEntity(196U);
    msg.setDestination(20923U);
    msg.setDestinationEntity(121U);
    msg.control_src = 57631U;
    msg.control_ent = 193U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 214U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4186854273778283;
    tmp_tmp_msg_0_0.speed_units = 199U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9856786003985248;
    tmp_tmp_msg_0_1.z_units = 111U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.15978271874636163;
    tmp_msg_0.lon = 0.7611678646209856;
    tmp_msg_0.radius = 0.8327693611844943;
    msg.reference.set(tmp_msg_0);
    msg.state = 208U;
    msg.proximity = 11U;

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
    msg.setTimeStamp(0.9572379302866569);
    msg.setSource(13840U);
    msg.setSourceEntity(41U);
    msg.setDestination(19552U);
    msg.setDestinationEntity(244U);
    msg.control_src = 13280U;
    msg.control_ent = 55U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 2U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8363043977100005;
    tmp_tmp_msg_0_0.speed_units = 174U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8953951109316391;
    tmp_tmp_msg_0_1.z_units = 58U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.13329678296121217;
    tmp_msg_0.lon = 0.9950930261198454;
    tmp_msg_0.radius = 0.5650370025509139;
    msg.reference.set(tmp_msg_0);
    msg.state = 92U;
    msg.proximity = 38U;

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
    msg.setTimeStamp(0.5582094982448521);
    msg.setSource(4547U);
    msg.setSourceEntity(84U);
    msg.setDestination(62541U);
    msg.setDestinationEntity(52U);
    msg.control_src = 18414U;
    msg.control_ent = 135U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 253U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6113610143496129;
    tmp_tmp_msg_0_0.speed_units = 25U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.23680348926197237;
    tmp_tmp_msg_0_1.z_units = 43U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.19229477766990455;
    tmp_msg_0.lon = 0.13679273405329273;
    tmp_msg_0.radius = 0.03811785136893875;
    msg.reference.set(tmp_msg_0);
    msg.state = 10U;
    msg.proximity = 251U;

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
    msg.setTimeStamp(0.47778038793639477);
    msg.setSource(12391U);
    msg.setSourceEntity(20U);
    msg.setDestination(26230U);
    msg.setDestinationEntity(211U);
    msg.ax_cmd = 0.5919328224481305;
    msg.ay_cmd = 0.5133449895506697;
    msg.az_cmd = 0.4389696504827192;
    msg.ax_des = 0.4297354321463057;
    msg.ay_des = 0.7624830286565276;
    msg.az_des = 0.5174951570789307;
    msg.virt_err_x = 0.14145033133022622;
    msg.virt_err_y = 0.37435748272642977;
    msg.virt_err_z = 0.49699784921017265;
    msg.surf_fdbk_x = 0.889940536691271;
    msg.surf_fdbk_y = 0.6448466740308771;
    msg.surf_fdbk_z = 0.9618721357611775;
    msg.surf_unkn_x = 0.24474779959501936;
    msg.surf_unkn_y = 0.5131440049936316;
    msg.surf_unkn_z = 0.2811153379043613;
    msg.ss_x = 0.4767052874513017;
    msg.ss_y = 0.22492550605615969;
    msg.ss_z = 0.03911397119171223;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JWAYDVMKNOKRLVZIGEBMXNXTRMSSVGOJGQYJNJVWYEPPIOBFZDBNFKRYCDUQCNUHPKUAUCRRHCZMCBAYXLGSEESQLXRDCATQVNUWHSTPWWSFZZZMFVWQHPYLYJTJUDDOLABBBEDIIMAEHSROVCLKHQBQMXADDSOKETQEYEUHKTCQINNGFXRFLQHJWPRZMCGYBUBHNXFPRZKTXGFLVPILNGWIOZEAFWVIDTGKLSXMJOUHJP");
    tmp_msg_0.dist = 0.9667619226184321;
    tmp_msg_0.err = 0.15383160020329023;
    tmp_msg_0.ctrl_imp = 0.9492845585084444;
    tmp_msg_0.rel_dir_x = 0.31688060156972997;
    tmp_msg_0.rel_dir_y = 0.2509945255184284;
    tmp_msg_0.rel_dir_z = 0.29196325900108455;
    tmp_msg_0.err_x = 0.33367088472092554;
    tmp_msg_0.err_y = 0.035768088819419175;
    tmp_msg_0.err_z = 0.28820004992698334;
    tmp_msg_0.rf_err_x = 0.14099362429663598;
    tmp_msg_0.rf_err_y = 0.12058464680231529;
    tmp_msg_0.rf_err_z = 0.35937789014488475;
    tmp_msg_0.rf_err_vx = 0.4020530676622206;
    tmp_msg_0.rf_err_vy = 0.04582564893690044;
    tmp_msg_0.rf_err_vz = 0.9550663500569345;
    tmp_msg_0.ss_x = 0.8334043977075739;
    tmp_msg_0.ss_y = 0.9519825478600104;
    tmp_msg_0.ss_z = 0.5688669269581783;
    tmp_msg_0.virt_err_x = 0.9910183365868361;
    tmp_msg_0.virt_err_y = 0.4778617797759025;
    tmp_msg_0.virt_err_z = 0.49534987713083944;
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
    msg.setTimeStamp(0.4416160699836692);
    msg.setSource(33043U);
    msg.setSourceEntity(75U);
    msg.setDestination(52559U);
    msg.setDestinationEntity(159U);
    msg.ax_cmd = 0.38575562096693505;
    msg.ay_cmd = 0.7524470660200434;
    msg.az_cmd = 0.37151352074300303;
    msg.ax_des = 0.8196591418335748;
    msg.ay_des = 0.9031148792358425;
    msg.az_des = 0.5248230724201529;
    msg.virt_err_x = 0.7468646637297215;
    msg.virt_err_y = 0.7271869393363903;
    msg.virt_err_z = 0.7356992953724928;
    msg.surf_fdbk_x = 0.6908211736657595;
    msg.surf_fdbk_y = 0.3550728291897589;
    msg.surf_fdbk_z = 0.4554730680336393;
    msg.surf_unkn_x = 0.49356423370262525;
    msg.surf_unkn_y = 0.24781923890991697;
    msg.surf_unkn_z = 0.08064157402607075;
    msg.ss_x = 0.3293997576084391;
    msg.ss_y = 0.847008804156484;
    msg.ss_z = 0.9840434791411817;

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
    msg.setTimeStamp(0.7932706867077559);
    msg.setSource(37574U);
    msg.setSourceEntity(34U);
    msg.setDestination(31388U);
    msg.setDestinationEntity(53U);
    msg.ax_cmd = 0.042867630619336405;
    msg.ay_cmd = 0.4521237296098941;
    msg.az_cmd = 0.6665433159437762;
    msg.ax_des = 0.7522431963911006;
    msg.ay_des = 0.8685733450632716;
    msg.az_des = 0.5645927976422366;
    msg.virt_err_x = 0.16859825281828955;
    msg.virt_err_y = 0.26699499224617784;
    msg.virt_err_z = 0.32468598035930274;
    msg.surf_fdbk_x = 0.5056785564737397;
    msg.surf_fdbk_y = 0.9845174432328111;
    msg.surf_fdbk_z = 0.40805626943589113;
    msg.surf_unkn_x = 0.7511586381150205;
    msg.surf_unkn_y = 0.736276081080838;
    msg.surf_unkn_z = 0.6165707465007748;
    msg.ss_x = 0.42431037468629906;
    msg.ss_y = 0.7217401958451624;
    msg.ss_z = 0.8195194681216431;

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
    msg.setTimeStamp(0.897196655136435);
    msg.setSource(41588U);
    msg.setSourceEntity(8U);
    msg.setDestination(3237U);
    msg.setDestinationEntity(229U);
    msg.s_id.assign("CQPJREWITXZWPDZIVOFQYXLXIECBHLMTEBQYCPYBVRGLRMOHYBNVKMRZBAEWTSPAQSHRMCTFYUKQSPLJWWZOECUVMQKGHAIVAPJIGAMVIQSDPPFDJJOQWITIONDLXKHRROBHSNWZHUWGVNUYPZGKTXNNTBUOGVOWXSMLKCXJUCJWJLCZTLFUYZBKXSAOFYTGLDVFEBHQFZHDJAGMULNCXRIDFUTBYEGX");
    msg.dist = 0.6490014284779327;
    msg.err = 0.8976262853381217;
    msg.ctrl_imp = 0.9042174519217268;
    msg.rel_dir_x = 0.018244300304008698;
    msg.rel_dir_y = 0.6497630910754717;
    msg.rel_dir_z = 0.9201028334394794;
    msg.err_x = 0.07426313000008122;
    msg.err_y = 0.9539593382510364;
    msg.err_z = 0.01426012848354652;
    msg.rf_err_x = 0.5731301087891306;
    msg.rf_err_y = 0.398152903649422;
    msg.rf_err_z = 0.4693265846100182;
    msg.rf_err_vx = 0.21035469947435181;
    msg.rf_err_vy = 0.3754339875941708;
    msg.rf_err_vz = 0.041417010663570175;
    msg.ss_x = 0.9458514461452695;
    msg.ss_y = 0.9819067730586425;
    msg.ss_z = 0.6012858478407923;
    msg.virt_err_x = 0.44426650872500595;
    msg.virt_err_y = 0.3419334320358113;
    msg.virt_err_z = 0.8092375672743337;

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
    msg.setTimeStamp(0.09964510759372203);
    msg.setSource(33365U);
    msg.setSourceEntity(88U);
    msg.setDestination(18217U);
    msg.setDestinationEntity(84U);
    msg.s_id.assign("TAUCGGSAEWHFTCCUYDOXBZZJEMT");
    msg.dist = 0.9310045502514692;
    msg.err = 0.44378766437988015;
    msg.ctrl_imp = 0.9104983056520912;
    msg.rel_dir_x = 0.23580848327515858;
    msg.rel_dir_y = 0.5609351458720622;
    msg.rel_dir_z = 0.9290044938231914;
    msg.err_x = 0.6042954932674695;
    msg.err_y = 0.30071530864222173;
    msg.err_z = 0.24255558455591486;
    msg.rf_err_x = 0.6783652102241833;
    msg.rf_err_y = 0.17777359226573186;
    msg.rf_err_z = 0.05907857833534902;
    msg.rf_err_vx = 0.5208733335052916;
    msg.rf_err_vy = 0.3216081251454126;
    msg.rf_err_vz = 0.3320385306457483;
    msg.ss_x = 0.6128027224130658;
    msg.ss_y = 0.02581047221145938;
    msg.ss_z = 0.2605837008635077;
    msg.virt_err_x = 0.2576127548890136;
    msg.virt_err_y = 0.3261212999772958;
    msg.virt_err_z = 0.3422400262190475;

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
    msg.setTimeStamp(0.8610414372336043);
    msg.setSource(62027U);
    msg.setSourceEntity(245U);
    msg.setDestination(24516U);
    msg.setDestinationEntity(221U);
    msg.s_id.assign("CIPAOZYJUZHLQUZNQAYGYMKBRBSSVKJUWJCRCTLGVNNKKOBMJYENDXXYKMEXOAJPDVVNEPXGWBSFKIIWBXVDFOHTFHJB");
    msg.dist = 0.9920818715146902;
    msg.err = 0.8296381195287896;
    msg.ctrl_imp = 0.9448612386651931;
    msg.rel_dir_x = 0.13846497289687532;
    msg.rel_dir_y = 0.7687162770198209;
    msg.rel_dir_z = 0.4427026431161659;
    msg.err_x = 0.23584020925508842;
    msg.err_y = 0.18856048793128333;
    msg.err_z = 0.339168646748395;
    msg.rf_err_x = 0.8473029753198494;
    msg.rf_err_y = 0.9458732609416508;
    msg.rf_err_z = 0.5379513053947108;
    msg.rf_err_vx = 0.4291763369698408;
    msg.rf_err_vy = 0.9951305447465726;
    msg.rf_err_vz = 0.06332484208308309;
    msg.ss_x = 0.8846105629483029;
    msg.ss_y = 0.45282911491911604;
    msg.ss_z = 0.6213039893292026;
    msg.virt_err_x = 0.6725322980157581;
    msg.virt_err_y = 0.7688298561714767;
    msg.virt_err_z = 0.7093170007573014;

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
    msg.setTimeStamp(0.7296305886958943);
    msg.setSource(26656U);
    msg.setSourceEntity(59U);
    msg.setDestination(48755U);
    msg.setDestinationEntity(245U);
    msg.timeout = 55092U;
    msg.rpm = 0.7259128562886404;
    msg.direction = 51U;
    msg.custom.assign("XOXYMWTEWMNURXKADOAIVXFBEFFQEKBBSARCAJUKKYJJVIDHDICOBVSJPMVEAXGPHDOHXJSCGNWXCVYMFWRGGOBNTFUZECLDUESIFNKRSFKAJGTWQQTBSQNXVNZYWJDQHRDRZAGMUGPFUGKVMZDBPPCPROPHCMTTYWPPMDPSEETLLKALUIYQXWVYLZUSHRNLOUDVQMFUBI");

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
    msg.setTimeStamp(0.9288833771165814);
    msg.setSource(56968U);
    msg.setSourceEntity(247U);
    msg.setDestination(32337U);
    msg.setDestinationEntity(72U);
    msg.timeout = 50457U;
    msg.rpm = 0.3230747150088542;
    msg.direction = 173U;
    msg.custom.assign("CORUWTAHYJVMPFGICVWJBQUUFYKXKBEGJFGENINYRARTLPYIYIXMPXCQKWEIXPJSFCOQLABRQOAWRSDSPKZJKNDKHKNQAKXMFJPABHHEEXTJLXSCMCNFFBCZIMMGHVUSRFLRJOSABVYOOHTMCMVDTQESNGEFUBTVTXZDHYQTPIDRWGSNVPDEHUUTVGZUABOXIRZYSOLOL");

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
    msg.setTimeStamp(0.24450274075205736);
    msg.setSource(732U);
    msg.setSourceEntity(22U);
    msg.setDestination(60970U);
    msg.setDestinationEntity(185U);
    msg.timeout = 34908U;
    msg.rpm = 0.6878705094050304;
    msg.direction = 64U;
    msg.custom.assign("SASJJFOUKSWYBCVWTMKDYNMRVVQDFEKXOMQEOXLRMZAXLBPABPXITIHTTR");

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
    msg.setTimeStamp(0.4268756956857932);
    msg.setSource(61857U);
    msg.setSourceEntity(176U);
    msg.setDestination(7838U);
    msg.setDestinationEntity(226U);
    msg.formation_name.assign("VTEZRPANJSRUICJMOIKWROEQZHHQMHICQTNCEZOAHCMIBJYOJJWYOGNLXWLKNTYHXCXRAWWTSUCYZVXAAYQFNFEXVMSSPETBXLGYIQOW");
    msg.type = 131U;
    msg.op = 24U;
    msg.group_name.assign("BLLIICUXRXFUNUCASXPDPR");
    msg.plan_id.assign("ZUHKPSWTZTMLNTBYVOYCQDVSXXUBCXEPEVSCYEIDPJFRHXKIZISBHGFACAIHEFFDDULBIOQWRGWCKVBLFGSCSNAQOFIZNGLLJRZTYUHRFJYVRDUNSRWMUGTDBOAXSNGXOPVKECTEMWTZNZMACJVKARKQRYLZFQT");
    msg.description.assign("VQUBBXALVALXJGMOBXKFGQJNMSIYWZIDNUBOZWTWRNWVMRYPAFYBKQJSEGMZTUFFJDHICWAKMATPDEVMGKSYQHADDZTGIZOVOHLUGPSCOCBIUEQQSCABBEFXKHYLOFZICYECWNUJO");
    msg.reference_frame = 202U;
    msg.leader_bank_lim = 0.03034951108516193;
    msg.leader_speed_min = 0.2854610647473218;
    msg.leader_speed_max = 0.7416716765155794;
    msg.leader_alt_min = 0.26695202610707636;
    msg.leader_alt_max = 0.35557598726077067;
    msg.pos_sim_err_lim = 0.4757015375957103;
    msg.pos_sim_err_wrn = 0.43522487664992426;
    msg.pos_sim_err_timeout = 38230U;
    msg.converg_max = 0.2312995728895828;
    msg.converg_timeout = 60596U;
    msg.comms_timeout = 49236U;
    msg.turb_lim = 0.09938946285072792;
    msg.custom.assign("UWMFXFHOMNBISIAHQBYUDZENEWZEYTBKYNXBVIEDGVNOPHTRSODHYZOROHWSQQTPCKAGBRWJZHRCHKWMDESBZCRLKMAXRCPOPKXIYOIRGPTICCJULIJCSUWUKBNOBNCGEXVQYIYMDWFUFAKRFGNAEUQE");

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
    msg.setTimeStamp(0.6108334298677223);
    msg.setSource(35490U);
    msg.setSourceEntity(245U);
    msg.setDestination(1070U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("JBPWQWJRVNOIEUVLBKXEBEANOQEMBLJJPLRILPYJETTBSQVXQHXLKPGZXDOLOAWTOUUEJDCIZFXVNICDHATQRFHKPFACKVTDUCKMWAAOYCGSLIIYHGUKJCFMKVSMTBSYIYXXLRDFFXMUIGYUOEQFLSDXCXIAOZDSNQZN");
    msg.type = 33U;
    msg.op = 82U;
    msg.group_name.assign("BTZYRNJQISNVUWCGHXCQJUNXEJSTICQBLPXSGEESHUZRDYZNUBOBHGKJDFMAGXUS");
    msg.plan_id.assign("XHREMZVCYKHWPUMENIMGWDSVBQGXMGMCYQSUZWGRALNHONYYEPFJBCISLAAVBPHXKUZCDOJOUQOLCBJTVMRFRHZUXBEVFSEWBNNSSICXKXYEACZTPBZXDLEOHQOCKHBYTVPTZFGDZTRAAJKKPOURIGUIUVJPKFGHKJWNDWFUTXTWNLBIEEMDZG");
    msg.description.assign("JUVUQPRGEN");
    msg.reference_frame = 175U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44720U;
    tmp_msg_0.off_x = 0.21379658551133374;
    tmp_msg_0.off_y = 0.022136025371542134;
    tmp_msg_0.off_z = 0.42524889930995535;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.07562178994118807;
    msg.leader_speed_min = 0.25695553467193366;
    msg.leader_speed_max = 0.9542649019736512;
    msg.leader_alt_min = 0.3826721403499217;
    msg.leader_alt_max = 0.8190978567141566;
    msg.pos_sim_err_lim = 0.7573899684606801;
    msg.pos_sim_err_wrn = 0.5657269426818984;
    msg.pos_sim_err_timeout = 65211U;
    msg.converg_max = 0.5791323932150801;
    msg.converg_timeout = 45333U;
    msg.comms_timeout = 34886U;
    msg.turb_lim = 0.9615021936684481;
    msg.custom.assign("WCNKPFNUGKUSMDJWEOMRAYABGMHZPXSHROEFIIRNIAQOTVSIZFBFKGXMJXPIBNUTBH");

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
    msg.setTimeStamp(0.8792006762420991);
    msg.setSource(42709U);
    msg.setSourceEntity(59U);
    msg.setDestination(56823U);
    msg.setDestinationEntity(160U);
    msg.formation_name.assign("CKIIYNLNNCYELFRWRPJMJWJYWPMBULIMCCJLOGYBDVAAHDVNKEYRKIMDOQXZUWHLREOJDOGFJAHTAUJZTOGPRTQBFPHCEVKGBVBSQVXMNZZKTOFKUDDVCUSRGXOFENTMMFWAXYSQBSZNPEIXGQDPJNHGLRWPZNHBMWA");
    msg.type = 209U;
    msg.op = 125U;
    msg.group_name.assign("TYPBILPEPZGEUIFGMFFBYYHMZJEHMXBRMWLGCYNCLEUAXMWQAVAOJGXSTNTVJURJJRTBSNIHNRQEMDVSJPWCWDPDCQOKMFKBQEFVGVUYCXNIWRGXGFKND");
    msg.plan_id.assign("VWNYTSWYZJVPOTCTFDHPGSQKUEIYDFCCJPZWBEUUUBQVEGBKOCZZRHKOXOMHKUKSEURTSELIBHMIJLFIWNMOVEASYBIC");
    msg.description.assign("XSWAEBZVCQIRTQRBADPUMTJPFMZGBMBEKKLRODYTXIHWOQWBBAJCRGVBVICDWLDYIUOTISKVMZGZRAWRABYPZCUGT");
    msg.reference_frame = 133U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45640U;
    tmp_msg_0.off_x = 0.08075633118589964;
    tmp_msg_0.off_y = 0.9210776058493446;
    tmp_msg_0.off_z = 0.9267245778064787;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.710562536847214;
    msg.leader_speed_min = 0.583580781517688;
    msg.leader_speed_max = 0.5638980809721013;
    msg.leader_alt_min = 0.11880716597429841;
    msg.leader_alt_max = 0.7156898817817787;
    msg.pos_sim_err_lim = 0.42306250069530893;
    msg.pos_sim_err_wrn = 0.3475091644859767;
    msg.pos_sim_err_timeout = 58051U;
    msg.converg_max = 0.530593554408657;
    msg.converg_timeout = 42616U;
    msg.comms_timeout = 58573U;
    msg.turb_lim = 0.36723370846941117;
    msg.custom.assign("OMNOOXBQBMLQIBUIESMPGLFTYVASJDNHC");

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
    msg.setTimeStamp(0.9626101674480515);
    msg.setSource(21372U);
    msg.setSourceEntity(240U);
    msg.setDestination(9554U);
    msg.setDestinationEntity(208U);
    msg.timeout = 26055U;
    msg.lat = 0.7921112028264607;
    msg.lon = 0.6725183332084963;
    msg.z = 0.5743959207246706;
    msg.z_units = 15U;
    msg.speed = 0.22750917914018431;
    msg.speed_units = 66U;
    msg.custom.assign("FLUICBDOVKMSQEUQXYMLPIMVNKGGYKAZRHDATMAHBPVUXFTTVUWYWXCWSEEITSH");

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
    msg.setTimeStamp(0.9963685425991546);
    msg.setSource(32142U);
    msg.setSourceEntity(94U);
    msg.setDestination(52469U);
    msg.setDestinationEntity(6U);
    msg.timeout = 37496U;
    msg.lat = 0.9979013573378068;
    msg.lon = 0.6851411371514515;
    msg.z = 0.006034499602187271;
    msg.z_units = 66U;
    msg.speed = 0.8970186632241305;
    msg.speed_units = 105U;
    msg.custom.assign("IDRTDVFOYUNLANUROCFIPXIMEZWJNWYSMDFGACQULTPOJXBSNXROGUZPEBMUATWCPDTBWDBTBDLAFZAVMSPZCUBGNMAMWYXNFQJSGTRUJKBGQCZXXSARAEZGVXCZMFXCOWFZLELNESMORHFHEXPH");

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
    msg.setTimeStamp(0.6617414299717583);
    msg.setSource(566U);
    msg.setSourceEntity(231U);
    msg.setDestination(7326U);
    msg.setDestinationEntity(152U);
    msg.timeout = 34162U;
    msg.lat = 0.026184733740323263;
    msg.lon = 0.9170962879801602;
    msg.z = 0.2700020642582974;
    msg.z_units = 192U;
    msg.speed = 0.0072840174226592724;
    msg.speed_units = 95U;
    msg.custom.assign("XCKQETKPNPCWAJCTMFPSTZTHCZBUKXQVTIOGIRZSJDFZSTHOFDKLJVQAYLBRHRYVKGQYIJEWHWUDTOZMAEZLEDZNPKNZSLMGNMJLHWHODGTRNHUPFYVNOPIYMAPMAFNCDVWEVRRUXGUSRXQCJGXLQIIYHLVWCTMWBBDXRFKBEYFZVEYGSBWBOESPQMXQIXOJIVMBOUFLZAIAKNDVYUCJCYWQGULRCBFJGRETNAFDABLSQSWKGPSAN");

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
    msg.setTimeStamp(0.9661110781472035);
    msg.setSource(49738U);
    msg.setSourceEntity(56U);
    msg.setDestination(27478U);
    msg.setDestinationEntity(221U);
    msg.op_mode = 176U;
    msg.error_count = 53U;
    msg.error_ents.assign("DCBIOSQAGMSSUOJFGNLGDEUXLNZWYWWDSYPPXHOGFRXTDTKUVGVQBAXPKOZJYLAHBQWGERJNHNJWLCMVEQCMGPMNYWRHHVVARKIWRHRBCWQMMYWXSMJJLFMFYUPIQUELVEIFTHKYTFLXLZZZPVOCHACUFFNODBCXSIIJIITSBDCXJTGKNNHBNIGIOPTZKTOESZCDEKMKKSEFZPBQADGZBOR");
    msg.maneuver_type = 20518U;
    msg.maneuver_stime = 0.06417370800957578;
    msg.maneuver_eta = 60513U;
    msg.control_loops = 3165303096U;
    msg.flags = 39U;
    msg.last_error.assign("WTVTUDXZALNSXZPYECOKVMQFFJENMCO");
    msg.last_error_time = 0.49174238229193146;

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
    msg.setTimeStamp(0.04675091219555827);
    msg.setSource(33397U);
    msg.setSourceEntity(155U);
    msg.setDestination(63634U);
    msg.setDestinationEntity(187U);
    msg.op_mode = 211U;
    msg.error_count = 32U;
    msg.error_ents.assign("SKEQYMJFNUHMMPWXQGXRJTYNHCAQEYHSORSLUJQVCPKUUZYBVASGWNHUHWAICEBYEOZFLBPIXJUIWKCTERSOWMPBIOFCCDFJG");
    msg.maneuver_type = 52357U;
    msg.maneuver_stime = 0.6956399718301274;
    msg.maneuver_eta = 53983U;
    msg.control_loops = 2930719369U;
    msg.flags = 110U;
    msg.last_error.assign("LTRIZPJWNAYQWTBUAONVCIHVPOJGKDUCYMCROMJYOGTICAVUBEEDGXPFIDRYENGGFFTSBZPKZXDNWDQZPENEFRWHMHJRAJMUFBSQCKJLYMDNXXZMQOGPWFVSHCKEYNCVANKTFZIZG");
    msg.last_error_time = 0.88814573917115;

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
    msg.setTimeStamp(0.6274976550097771);
    msg.setSource(62552U);
    msg.setSourceEntity(203U);
    msg.setDestination(53458U);
    msg.setDestinationEntity(132U);
    msg.op_mode = 28U;
    msg.error_count = 117U;
    msg.error_ents.assign("BOPLTNXIALKRVEEEDRCAYLFQUOTOVPDIFEGXKJZGOZDTBJUUEOZFQLGHGQHQUJWIOFKYKGCOFXAYCCMMRVONDQJBDMTYR");
    msg.maneuver_type = 41422U;
    msg.maneuver_stime = 0.9195030533506717;
    msg.maneuver_eta = 33457U;
    msg.control_loops = 2698501264U;
    msg.flags = 98U;
    msg.last_error.assign("ACQHKRQTRTCFDOEQLOZFPKBVMEYUKICYBWKCEWBNGSTEQLMFQPQAHNALWEPNNBVCRXXVHKFTJSNAGOZSRYPKJGDQKIOUWXAGBJWYDITSUMZVCHVTDPZPZYUGZLIPLXRUAUXOEHLXYKVIVJSNY");
    msg.last_error_time = 0.9692969724211176;

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
    msg.setTimeStamp(0.19023909864262534);
    msg.setSource(16108U);
    msg.setSourceEntity(195U);
    msg.setDestination(21848U);
    msg.setDestinationEntity(181U);
    msg.type = 163U;
    msg.request_id = 57429U;
    msg.command = 19U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.7512917765460958;
    tmp_msg_0.lon = 0.948774148312731;
    tmp_msg_0.z = 0.026051235435932685;
    tmp_msg_0.z_units = 7U;
    tmp_msg_0.speed = 0.4973550079832222;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.custom.assign("CNRUICMWLLZCHYKFNBRUHZQDILDNAONMPXKYMNAUTYNXDJMDPEJSQRFZKXXEUQKJVXIVIFJKBVFSVFWREOMBHSLTHTQSXJHFHEGGXOMZOQSDSEEMWYRRLFGWPZRGDNTYUAPCAOGAJBFKVAWGMMHIUSIWCVWKFTRJWZXMLYJOOEQWQPXIEAKTTDBEGZLQXCINADESYVRKITBLHSTZCUZOHGCOTYCUUOLIRCVBDYBQGPBYUWJKPJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56964U;
    msg.info.assign("VNIJFOUKEPQAUNWHLEEKMEUPIPSQNJLTMPYNTCQHKRHWITGBPAKKQDXXJCFMWPGQRLDVRJNOKAGICBZJBGLHYUVFHJVOVXKCFQWURTLJSXNSCOHYGNZSQXGMTVWOXZQKDCDTEBIIAMULLTLIQWRGVCQHTLYCIBCFNAEOWDYZURVMKZMAFOBYIFMDDXSAFRSHJK");

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
    msg.setTimeStamp(0.8072075309542265);
    msg.setSource(20973U);
    msg.setSourceEntity(231U);
    msg.setDestination(20549U);
    msg.setDestinationEntity(174U);
    msg.type = 211U;
    msg.request_id = 10517U;
    msg.command = 20U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("MQGUDHCUOBXOIOUOGGPGRSKRUWECVTJTQYNZPKNRAQTUIWIHORPQCZGJELERCCFJZHDNQGLFOHJYUAPTDRGICOHKNMTLNFYAKMFVWLTELOSDWHVSFHAFQPYQQMWVLZQMDKLZPJAIEBFNVLASMKIAXBJCNBDXERFWMUNEKADVVPIRJUGWYLYZVJTWXFYYSTPPUIBFBOMXXKQZXDGEXYDXMPWSCHAIOBEUYCDRSTCJSTVZWIKXHRB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 23004U;
    msg.info.assign("PBBCZVLQMXFUHCKGCSWUFTOOXASPSIWBUQDGKBOFCUFWXEPNUEIVIONDWIGLDRYJRMAUSPHFRVMIXLJRWSGXYIWFACOWNHQBSKBPRAZDLBCJYNMJNZDCYFVHLCKTTMKLZPJKAKRDOYGVAMTNQQEHTGZQHBCHTMXWUUNKKSUMENEZIBJQGPMJDYTNIALMJSNYAREZZPJIPSBZGGUQEHFYOVSDWGFPVDTRRHKTX");

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
    msg.setTimeStamp(0.37691688278004987);
    msg.setSource(48890U);
    msg.setSourceEntity(24U);
    msg.setDestination(23484U);
    msg.setDestinationEntity(63U);
    msg.type = 40U;
    msg.request_id = 55220U;
    msg.command = 246U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 62599U;
    tmp_msg_0.rpm = 0.08485152665699214;
    tmp_msg_0.direction = 162U;
    tmp_msg_0.custom.assign("NGUCVVFJARRFNRPDCOBOAOVIZSBSMTLPGSEALGILAQHWFFPEEAKHPNJDUZZDHJOKNJWSMXJITNDQHUYXZFCZMPWRWTDPVQWTEEPYBRKBFKIBCXDX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 13968U;
    msg.info.assign("DPXLROCFCJMYEBTNIJZEVZRUGBGIUPQNEXDMXSEMTQKESZHASVUOGRMWHWDDMNDKRZIIJBEGHDRCIXWUCFTDBVZIVTRLFJKXGYPXDUVCOMHCYHNHVWYSKNWJYGVEOSZFNSUFMBTGQRMATLTUIYBATYDKKIIZFNOHMPQYQPBASSPALBZSPGHPVAJKBCFXVFQKWLQMWJXKFOIUUVAORPXCLOPGNRWBLYLJTGHLJEWSAHJF");

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
    msg.setTimeStamp(0.33193662893695375);
    msg.setSource(52573U);
    msg.setSourceEntity(172U);
    msg.setDestination(33482U);
    msg.setDestinationEntity(174U);
    msg.command = 158U;
    msg.entities.assign("PJVUBVDTCCLTYZKQUXVTQFUGJPEZYMQXDOWYIOFEHXGOJZWHHBMTWIOHZEPPXCJZVRLJFNXMGWHJHBVHERQFLAUWBBHSJRQDWWLKORNRSYCYIMYLIKBZGAKOQMFPBNAFXLUOTIDMLRWTAUEBXPLYGNRIDBV");

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
    msg.setTimeStamp(0.599385498945591);
    msg.setSource(45612U);
    msg.setSourceEntity(100U);
    msg.setDestination(55132U);
    msg.setDestinationEntity(156U);
    msg.command = 129U;
    msg.entities.assign("ZICFFRVKKFBGPQYKCCSVWVLDBGMFKQNHRXSSUCGWYOQOPBDQPALZVTIHIIKNYYJMPZWTYEXGGYTSDTHULXAFDJQBBENQUZFOVQRGBZVQOXONLHNIRNEGLERZNIUJHTDUCAOISTLZWGICAPPGVKGJDMWENZIJPRDOPFAAESZKACHAOPPMXTYULROHUDRAHVXNTRCUYSMQWOUYYVJUKXJCKBIVNBWCSEJHBMLEFJXZDJAWDLERHQ");

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
    msg.setTimeStamp(0.7781984278265157);
    msg.setSource(30060U);
    msg.setSourceEntity(189U);
    msg.setDestination(23967U);
    msg.setDestinationEntity(135U);
    msg.command = 160U;
    msg.entities.assign("RAXXSCQGLJYPXHAEKSSKUQWQNFDIVUPTLLDLNIWFPGREHVQCRHDUGTWGICIKCWXGVNTKZTBPQ");

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
    msg.setTimeStamp(0.2591577738362808);
    msg.setSource(51674U);
    msg.setSourceEntity(91U);
    msg.setDestination(16827U);
    msg.setDestinationEntity(16U);
    msg.mcount = 24U;
    msg.mnames.assign("POHWYNQEGVJZPIDHLAVOKHVXOPQIAJAWTFCLUBJFEAUKPPUMW");
    msg.ecount = 40U;
    msg.enames.assign("GPRMRCRFLGUJQEINSAOAPXQUTLVPVORKVERFLRDVEUAIJTXIBEJVIQCDGIZZBPBVYQAQBPYTCJWKKK");
    msg.ccount = 111U;
    msg.cnames.assign("AYCGFFJNMOTVRIZMMEBNMLTOHUQYEWXDXFGGVYRFWTWDADCUXACMBGZKLKQLEQHBPZTAHQVKAHJKLRHQFONFHHDGAYBEMISOXRILXKDYTCWFMUPDAIJIHQPULDSIULKLOBWDQKREBZZKYSHNNZIXRTZFONYRUVJVTVCSVANPEOVEEBQSCMNCOMIIGCXIYJAXPVPKUBWUKUUJQYFGM");
    msg.last_error.assign("ZTYHPXDFAMFMFWDBFXNZTSHDZMHKXXWBTTEGVPCUEHOMUCIJYZPMUGLGZIHRBEUS");
    msg.last_error_time = 0.9650845013583724;

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
    msg.setTimeStamp(0.514931521494514);
    msg.setSource(16985U);
    msg.setSourceEntity(180U);
    msg.setDestination(10907U);
    msg.setDestinationEntity(96U);
    msg.mcount = 2U;
    msg.mnames.assign("QPHNCYGROEGTZUGLADRWYPQIQSFOHIZVZZLJRXAPEPYMCLFJWLHYJCUYPBAVRQHKYQNXSINOPMLMWCOFIFTELBOUGQJMLIBJCTBWJISUXAYVIRDHHKGQGZDTJKDZSCXYWJAYEDQTFRHQBUKFRYGMLPCMAZ");
    msg.ecount = 67U;
    msg.enames.assign("PSYVZGTIUTFSPMTAOMBJWTNLWOCOHDQBRCTKKXVXSQPEXZEJYNREIILWQDCTDOFJGAZNOPXQOQAGODCOCEXMWRKAPLQSMWMDUBJDFRSKUVNLERKWFBUMVBJELBPNKGXCBPVSBUJCSWCGIHITNSYWKLDNEELYJJARMKVZHOHDIGUEHUXIXJOFDLLTUYPIZNZQXVZTRGXUCYGQLNFAACMQQRYZFFSZM");
    msg.ccount = 149U;
    msg.cnames.assign("POBLTLGXDCPCLMAAHPZHVGLIPOAQYVOMZZVS");
    msg.last_error.assign("OQNUZOLIGCGAVQXNRZLHMJUQIRVSYLKOUAOWAKMFLSDGBCHI");
    msg.last_error_time = 0.7319508740677056;

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
    msg.setTimeStamp(0.6143359611627376);
    msg.setSource(65441U);
    msg.setSourceEntity(208U);
    msg.setDestination(31348U);
    msg.setDestinationEntity(109U);
    msg.mcount = 149U;
    msg.mnames.assign("INRIKEORQKOCFUGWZLJCHSYVZFZORBDGIEQBPBHO");
    msg.ecount = 83U;
    msg.enames.assign("SHOUEEPZMAKANHGVPMTHKXTDTLBVBTCFBIWKKTSSPYYIEBUFPOXCKWCCFFMXUZWGZZLFWAKTVKOMMNGRXUQVCHRMQXUNGYERWJVQPEUIZOOTNNFVDMYQKTGBFCHXECOSVAKEPSNHBBPCSDLGGXIILAOJ");
    msg.ccount = 199U;
    msg.cnames.assign("FDBLLCPRUASXQPYBFHHFDEXCLYDEBMGVIVAKWFWQVDQGJCDYQPGXZJVKTMVDPAKCPYKIKSURJTBFWWRJXZGMRZQHZAULGTZKHWLOHUXUSNXORYIQKSGNVYCEWVSPOJMSNNOMTCUNTYJEOHONGSIXZTEJFIAKYHGOIMLSTXPXLMLBWWASDPFHJVXCABNLUA");
    msg.last_error.assign("FSDUDRATFYXHQWUUGICZCDNUYCUPHWETFYKWFWJTXGHMBJQMWDCLBQPTJFNNSWHESTVZEQVIOLOXGZSBNBKKXDMMJPEJORZZETGSSGILSQAXELCSCZJJGAVTVYWLFOCBYLKAVZQNHFKVPLUGSQXRPOLHJMAELELZXOBXCOHZGDAAVENRAKEOBPVJKGIDDTMN");
    msg.last_error_time = 0.851830001913662;

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
    msg.setTimeStamp(0.29413957523893164);
    msg.setSource(15923U);
    msg.setSourceEntity(250U);
    msg.setDestination(46353U);
    msg.setDestinationEntity(176U);
    msg.mask = 73U;
    msg.max_depth = 0.40087404860521003;
    msg.min_altitude = 0.659418773199247;
    msg.max_altitude = 0.0725038481083553;
    msg.min_speed = 0.861202576327439;
    msg.max_speed = 0.7010313402246311;
    msg.max_vrate = 0.7827357951738714;
    msg.lat = 0.2365632913746597;
    msg.lon = 0.3066092796065226;
    msg.orientation = 0.2509333986728587;
    msg.width = 0.1828770538514468;
    msg.length = 0.335780041581371;

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
    msg.setTimeStamp(0.38830350149173987);
    msg.setSource(1028U);
    msg.setSourceEntity(57U);
    msg.setDestination(45814U);
    msg.setDestinationEntity(234U);
    msg.mask = 158U;
    msg.max_depth = 0.024115546976328783;
    msg.min_altitude = 0.9347585853908014;
    msg.max_altitude = 0.9431021074079428;
    msg.min_speed = 0.5315737052652514;
    msg.max_speed = 0.64418833713023;
    msg.max_vrate = 0.8755976866639498;
    msg.lat = 0.8850663632536331;
    msg.lon = 0.42920957820005523;
    msg.orientation = 0.6211515459676122;
    msg.width = 0.0005252014505394698;
    msg.length = 0.6428497330316948;

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
    msg.setTimeStamp(0.8808159277741399);
    msg.setSource(4633U);
    msg.setSourceEntity(142U);
    msg.setDestination(19315U);
    msg.setDestinationEntity(174U);
    msg.mask = 44U;
    msg.max_depth = 0.7137939412304176;
    msg.min_altitude = 0.4595952931723635;
    msg.max_altitude = 0.8721524976624527;
    msg.min_speed = 0.34624845038417285;
    msg.max_speed = 0.1436347384468185;
    msg.max_vrate = 0.38725045246261447;
    msg.lat = 0.3530240010088832;
    msg.lon = 0.16550538193600772;
    msg.orientation = 0.1100150297272029;
    msg.width = 0.31454287037532613;
    msg.length = 0.39267763736508254;

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
    msg.setTimeStamp(0.11965615447703382);
    msg.setSource(2348U);
    msg.setSourceEntity(76U);
    msg.setDestination(62155U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.7603761094075089);
    msg.setSource(25271U);
    msg.setSourceEntity(13U);
    msg.setDestination(18970U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.04221220556695093);
    msg.setSource(16583U);
    msg.setSourceEntity(196U);
    msg.setDestination(29069U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.21758319002754167);
    msg.setSource(18322U);
    msg.setSourceEntity(224U);
    msg.setDestination(3049U);
    msg.setDestinationEntity(19U);
    msg.duration = 23449U;

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
    msg.setTimeStamp(0.5702532531110213);
    msg.setSource(1779U);
    msg.setSourceEntity(74U);
    msg.setDestination(18992U);
    msg.setDestinationEntity(59U);
    msg.duration = 27130U;

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
    msg.setTimeStamp(0.823226968827313);
    msg.setSource(51804U);
    msg.setSourceEntity(35U);
    msg.setDestination(10050U);
    msg.setDestinationEntity(229U);
    msg.duration = 21496U;

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
    msg.setTimeStamp(0.7142039421649874);
    msg.setSource(39637U);
    msg.setSourceEntity(143U);
    msg.setDestination(24878U);
    msg.setDestinationEntity(96U);
    msg.enable = 100U;
    msg.mask = 3286173184U;
    msg.scope_ref = 3199028591U;

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
    msg.setTimeStamp(0.5594695890931212);
    msg.setSource(53330U);
    msg.setSourceEntity(230U);
    msg.setDestination(47134U);
    msg.setDestinationEntity(215U);
    msg.enable = 45U;
    msg.mask = 983549707U;
    msg.scope_ref = 944343699U;

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
    msg.setTimeStamp(0.24505674849052572);
    msg.setSource(30835U);
    msg.setSourceEntity(229U);
    msg.setDestination(38163U);
    msg.setDestinationEntity(51U);
    msg.enable = 35U;
    msg.mask = 2570779841U;
    msg.scope_ref = 651861649U;

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
    msg.setTimeStamp(0.2517358943334146);
    msg.setSource(9867U);
    msg.setSourceEntity(173U);
    msg.setDestination(49522U);
    msg.setDestinationEntity(63U);
    msg.medium = 16U;

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
    msg.setTimeStamp(0.2620146032423619);
    msg.setSource(64236U);
    msg.setSourceEntity(66U);
    msg.setDestination(38158U);
    msg.setDestinationEntity(137U);
    msg.medium = 59U;

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
    msg.setTimeStamp(0.5043977545574687);
    msg.setSource(10406U);
    msg.setSourceEntity(52U);
    msg.setDestination(16243U);
    msg.setDestinationEntity(87U);
    msg.medium = 99U;

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
    msg.setTimeStamp(0.08426117602762273);
    msg.setSource(20797U);
    msg.setSourceEntity(26U);
    msg.setDestination(38079U);
    msg.setDestinationEntity(70U);
    msg.value = 0.7188796055420705;
    msg.type = 80U;

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
    msg.setTimeStamp(0.8168515365579236);
    msg.setSource(12689U);
    msg.setSourceEntity(224U);
    msg.setDestination(12354U);
    msg.setDestinationEntity(70U);
    msg.value = 0.36658307510088495;
    msg.type = 45U;

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
    msg.setTimeStamp(0.3028895146295838);
    msg.setSource(40861U);
    msg.setSourceEntity(104U);
    msg.setDestination(53067U);
    msg.setDestinationEntity(131U);
    msg.value = 0.5516074328350549;
    msg.type = 74U;

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
    msg.setTimeStamp(0.7465318584295694);
    msg.setSource(20271U);
    msg.setSourceEntity(145U);
    msg.setDestination(52047U);
    msg.setDestinationEntity(246U);
    msg.possimerr = 0.29871472730168724;
    msg.converg = 0.8234788986300623;
    msg.turbulence = 0.710729227544338;
    msg.possimmon = 12U;
    msg.commmon = 131U;
    msg.convergmon = 15U;

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
    msg.setTimeStamp(0.5265053467401486);
    msg.setSource(38743U);
    msg.setSourceEntity(209U);
    msg.setDestination(27800U);
    msg.setDestinationEntity(147U);
    msg.possimerr = 0.8798479752651679;
    msg.converg = 0.5773447743172863;
    msg.turbulence = 0.6334904902457058;
    msg.possimmon = 132U;
    msg.commmon = 181U;
    msg.convergmon = 206U;

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
    msg.setTimeStamp(0.7166582818408619);
    msg.setSource(12079U);
    msg.setSourceEntity(86U);
    msg.setDestination(46152U);
    msg.setDestinationEntity(6U);
    msg.possimerr = 0.8636718915652494;
    msg.converg = 0.8529009479474011;
    msg.turbulence = 0.8341255053167899;
    msg.possimmon = 189U;
    msg.commmon = 134U;
    msg.convergmon = 42U;

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
    msg.setTimeStamp(0.6195792771519264);
    msg.setSource(7358U);
    msg.setSourceEntity(95U);
    msg.setDestination(61038U);
    msg.setDestinationEntity(206U);
    msg.autonomy = 21U;
    msg.mode.assign("HWTJGLAIESGOCKGWQUAPTLRJIBBLQJJDPRSFEBHODRZOXTXHXMKMGNRZUIWACUDARUCAMCBOWGRFN");

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
    msg.setTimeStamp(0.7261345850959908);
    msg.setSource(11935U);
    msg.setSourceEntity(54U);
    msg.setDestination(24914U);
    msg.setDestinationEntity(15U);
    msg.autonomy = 194U;
    msg.mode.assign("UPHQNNDEXZLQVZIZMFYCRNCRSIZAKGCLNBQAHZWFALWLOZDUQVJPZKDRHWOUFKCHQXXJZLTDNIFLJXUTKXGFJOJNWWWIEWVLNMHSZPRSUIEEBTPKKGOHXGYSYYAOVCEAMHSYICVPBVJIQVDTGKEOSFWLGRBXYDGAMAKYQBRDNPAMVBIF");

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
    msg.setTimeStamp(0.5701242278413527);
    msg.setSource(33015U);
    msg.setSourceEntity(18U);
    msg.setDestination(64187U);
    msg.setDestinationEntity(223U);
    msg.autonomy = 243U;
    msg.mode.assign("DKGQNFMRAJIRUKOIRKLE");

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
    msg.setTimeStamp(0.8098658622959721);
    msg.setSource(33064U);
    msg.setSourceEntity(248U);
    msg.setDestination(26633U);
    msg.setDestinationEntity(90U);
    msg.type = 42U;
    msg.op = 33U;
    msg.possimerr = 0.18753757367666424;
    msg.converg = 0.20353507139318472;
    msg.turbulence = 0.5026458149817953;
    msg.possimmon = 249U;
    msg.commmon = 21U;
    msg.convergmon = 9U;

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
    msg.setTimeStamp(0.025183610398364364);
    msg.setSource(49559U);
    msg.setSourceEntity(71U);
    msg.setDestination(7140U);
    msg.setDestinationEntity(181U);
    msg.type = 134U;
    msg.op = 15U;
    msg.possimerr = 0.2585873127299232;
    msg.converg = 0.7569616428416306;
    msg.turbulence = 0.9503647734063276;
    msg.possimmon = 221U;
    msg.commmon = 135U;
    msg.convergmon = 64U;

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
    msg.setTimeStamp(0.32207331988597765);
    msg.setSource(57637U);
    msg.setSourceEntity(44U);
    msg.setDestination(62198U);
    msg.setDestinationEntity(193U);
    msg.type = 77U;
    msg.op = 87U;
    msg.possimerr = 0.675100179088728;
    msg.converg = 0.3902861153156659;
    msg.turbulence = 0.5440325795520256;
    msg.possimmon = 251U;
    msg.commmon = 195U;
    msg.convergmon = 158U;

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
    msg.setTimeStamp(0.20532257369716145);
    msg.setSource(51609U);
    msg.setSourceEntity(119U);
    msg.setDestination(45585U);
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
    msg.setTimeStamp(0.7741326364448745);
    msg.setSource(40645U);
    msg.setSourceEntity(63U);
    msg.setDestination(39574U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.1646673940141714);
    msg.setSource(10855U);
    msg.setSourceEntity(209U);
    msg.setDestination(13961U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.1776258133534021);
    msg.setSource(6597U);
    msg.setSourceEntity(41U);
    msg.setDestination(49918U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("VIAAWBUNVJKLGYZUTEGWHPNMMYIDV");
    msg.description.assign("LHQYOZPVPDLMHJQJBLDZXVXBZAEFZGUPBMBAOVXDHSSMKNUOKSEAUXGHIIYKECISTNTCNJBCPCPFTIQKDZKSIM");
    msg.vnamespace.assign("OEGCHJKMONFITAXRKTUTMKPIXQEVMQMHUCGJBDFSHIFALNLVEJBBHAIICVBFIDSOYHQJCNNGYWNPERZFPYMMKGGZWUZTEULGZBRDOGDKASKLZDLMFXCIOYKPSRRRTZAKUSEGXZYHADBVQUXIMLYDSCUPJYQLQXRPJFRVJCNRXJCTBWIUKNQONTOCVYBTSGQFDEUZFWEKJWVLSFXWWAW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CDKMFOLMZDEGFLYBXAVCJVYBOKITUGQFMQVYZWJYPWMCTSNILTUUNQAZQWOTXMORAPJDNCKUVRNBBEJRTXDCCSGFLLZMLTYSUERDLSTHLDBSNGPNHXZWZFEJHPSGKPTGMRDDUBCIHPPSOWGWLWWZJGUKQQCDOFAIAVUIFEFRJKXCKIZBHDOSWYPSTEYIPUVJZHWBSJNNIR");
    tmp_msg_0.value.assign("ADYPOXAVHKB");
    tmp_msg_0.type = 154U;
    tmp_msg_0.access = 139U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("NNQVWQEQRMHZDKISVWXYMUIQRJYGMYXSSCKDBDBCJLOBCJHSVQOBFKHUIPKFPAPKPEQWYPVRRLKHCUNMTLEGLSYMISRJODMUGWRGBBXCPBGZFTIEYEZRETYEANZHIXXNLCKXRQFLNCSAJESGPTJBOPFGXFGCJYBPALIHDEQFOQZDLDTWFZKVOXMRWJTOFLCUAKWAGNUIMLATSDHYAJZYBSNWWATVIHNAKVZWOUXMXGVTOTMRDDIVNZCPFV");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("XBFDAQFLHMFFBUTIUWYWTASVDXGILEORNXTOJPAPPMVIGLOBSNJOQUEJNYJAUKSDXRVIGZKZLWPCPTIGBFODMSZDLIPWWMOVXWMOGJAJZQJVRUKUOTIZDMYEKSHJBRKWKMUMUBRKALZHWQOIGNPCQYVYDT");
    tmp_msg_1.dest_man.assign("VGZXFAPQRQHQLAFIEZHASKIVDFGTODVQNBSCYHFMJJZLLKJBFLGINXIUZJGRSNAUJGVXQPXVHCXDUQYEOWIUKDAXWWTRSBCGSEIWPEKKVWIUJBIQKHMTFBPBACNXPYOEXLWNJMUYHRKFTCCMEMWDZPNGVEHNUMNPOTWDLQORUJKVMHYCDGHWRNURTVTIECFOGKYYOQDXOBYEITZAJLDWPOBOMAMRLDASLFSZTQTMKNYJUEZYZSVPFHSPZGBCSC");
    tmp_msg_1.conditions.assign("BSXTFRRQRAYIDNRTLMGYCEBHICOQWPUBLXSAHRGRFCIKYWWYBFAREOKBMLPJOGWBHIDUCNWNJUFSLGYK");
    IMC::Sms tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.number.assign("NESARTBWINMVTVYCCNVDWRKYCFXIZJDLEYDBKAIPJVHPNIQDEIJLLOJABLWFGCHRQXUIWUSYCZWUGKPSVQTPIFXHQUJKLBBQNUDLQGEBAUUGEOAIAOOCXYGYFSBGPOMYWGUXAJZCJBSZVHCVGGFNTXHNRQYAMNCIFAMDJWNFDKQPBKLLOTXRIFHPKKLZXAJPHMCPTSTSVRWRFLXMOQZJMUZTOMRSB");
    tmp_tmp_msg_1_0.timeout = 63744U;
    tmp_tmp_msg_1_0.contents.assign("LMRVFNGYQZREREQNZWPWIBZXXPKQZZDFBBTADXSIIBQZMEXNUHWOKOUYJVIPESUKFTAPMAWOL");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::GetOperationalLimits tmp_msg_2;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::LogBookControl tmp_msg_3;
    tmp_msg_3.command = 87U;
    tmp_msg_3.htime = 0.11503081199977216;
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
    msg.setTimeStamp(0.09894300523627375);
    msg.setSource(49398U);
    msg.setSourceEntity(201U);
    msg.setDestination(50035U);
    msg.setDestinationEntity(249U);
    msg.plan_id.assign("IEXUFMCGWAUSJSXHGDLLRAEXUKYMLVCZPNFOMIIDPZNQTQVNXPBPFRPVHEMCPWUIIHSOOGDJZOGWSYTAABCAO");
    msg.description.assign("ITNPVBFKLDRYVHVDQNVGSBCRCCRGPRELDOXMQRFQNCDNEKZSYECFYAWYAXQLPKMCUWMULKBJNGODWBBMQPXRZOEVWFETPYPTXOOAXYVDBGUJNOVTHYXXGKPHFSAEKSCGDGMVLZOXIKILHHFAZQHZLOSTSGLG");
    msg.vnamespace.assign("HTCFAUXITOKPGXXOPBHZXTGUIASFJYOZWPVUSMFLUQSRWPNBMAZSVQOKYMGNDNVPICKGQTFRYIJNBQRNWCYVDQGZVNDFRXMG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BRQYSCEGUZWOZOAV");
    tmp_msg_0.value.assign("BHPQBOJRSIPANEVSUXDQTAOQIVJYQPATYLXOMHMAMKVWCFFPKQTDGKCDTBHOCIOMJTCPZCIAFTFLNVCHAIRGNQBFWRVEAYZLLJQNCNQWNLJMRHTAP");
    tmp_msg_0.type = 178U;
    tmp_msg_0.access = 96U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IIOCKNHMAAFFPQONXCTLSRGYRYFTJZHERKCGYQBUXTHZLUJTKECREMLIUXSMHJTZWGSBSHUTLKDKEOLGIDAHWWJTEOLGFTEMOKZIVOVPMBBENPQPEDACWACLFSRHYDRVPWBCAWQFZAWIRQSFRHPLMMVJSYLIFOTJWGMIYUJPJCNHVSBNBNQGVJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("IZLCKHPPPXCFEJURKWDSVWUCOIBYLEPAWZNXLNZIXCEDFTYQJVNTAWGEMFLOIVDBNMABZXTWMESJOARLVATQKGLISGGYHXPSLHFDZYVRZRARUQGFTHEOAUHVXHCKRQAJQQJVDQTWFK");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.7941342832671806;
    tmp_tmp_msg_1_0.lon = 0.23510441728430287;
    tmp_tmp_msg_1_0.speed = 0.6010058144660989;
    tmp_tmp_msg_1_0.speed_units = 29U;
    tmp_tmp_msg_1_0.duration = 4601U;
    tmp_tmp_msg_1_0.sys_a = 28491U;
    tmp_tmp_msg_1_0.sys_b = 40992U;
    tmp_tmp_msg_1_0.move_threshold = 0.6971831492528863;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Current tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.45073611345224385;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::PathPoint tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.x = 0.9329217612219095;
    tmp_tmp_msg_1_2.y = 0.6394439008302256;
    tmp_tmp_msg_1_2.z = 0.4612404731010431;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PowerChannelControl tmp_msg_2;
    tmp_msg_2.name.assign("AZWXRJNABEBJQJYRPKQMNLHUYYZMZKSSUBGPACFFFRWCWVNJSAMPXSBQRDMTISWXCIFJDAAUM");
    tmp_msg_2.op = 224U;
    tmp_msg_2.sched_time = 0.41572644382965995;
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
    msg.setTimeStamp(0.8586383202888839);
    msg.setSource(43270U);
    msg.setSourceEntity(1U);
    msg.setDestination(2181U);
    msg.setDestinationEntity(145U);
    msg.plan_id.assign("OUAVGDOLWMAXQXCFSBMYLOGLFTRXVZWPWSPYKDOGBACGTKKNHSIIAZOBYAUFNTMKZTWTSKGAUEVQQRESSREXPJWXNQIJYPWIUARQGQHYCJBDLYURKBZHHEWFVCLCSICWAJBQLKTVMNRQEZOFTLFGHFMBHDRQYVJSIUXEKLIJNQJMIIVMPDJVFUOCPA");
    msg.description.assign("GOWDSOSJVMJZTFBZVHDFAHUPWBCIMAYZYTONGQAQDIOZDDPLPEIBXNRPDVOUEDHKLGRLWLRSMWADTSCFKPUMVEUIBRWXBYGJXEFTTXYIKHAEWQVOSGLHHNZJTCIIEORTQKOYEKWPRXTZQ");
    msg.vnamespace.assign("DMRKYORNJAMIWXOJHPXVNSPHXTCDZYKSARFKPSIGZRKDZPCMIOGLMVJTYPPJDQRNVXNUFAHSOCXETEVAQANULHDTXUCUEVWIZZNGGGPWWZDBVKLEOMFGAJNQLGNHQYRQKDLWPUVJITDDETSHLHJFVBEPBBZMFMGJRVVMASSWYXETQFBUWBKMUGHFILXCUBTJKUNHPMIOXCQCYELGRFFSLKZAFXIOYAYBBCSSOIKHUYCRTIYQZOOWNEDQQRW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DNYNENQHKQRVSJAGUPSZGEQGUCWZHEFZBKBOYRWTEZSFIIVJRSKGMUOZSDPBCETFKSWHYMAFDJAOTGIVVSWCPPKTQMOBQAWPKDTUUNDBJLEUHCDIHVOLXXGWCBOCWYMRXTZSCLLVLEMIQVQCKWAMUPCARYQAPRJHTRFNVMIPXULMLKHVHREWXNSDMQEIVYFWFZGJXIOCAFJLMXURZYYNGZJBRHFANDBGANJDISG");
    tmp_msg_0.value.assign("GDMUREJLVMPNYWBBPRIICDYCXFXJZHBAAHLZRGCVEBTEOZZRRVPLXLQKKSDVNJDQAWOJDCBAIYYTFCVWKDBEVLNTAQPWFFSXCQNMEVTQXHGCIXAUMJVFJYLXKGFSUBZNLPWYUSJPODIKBWGRGYQZO");
    tmp_msg_0.type = 17U;
    tmp_msg_0.access = 165U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GXTIUCOXIATNKCGFHUTLGVEUUXAQYNSLUQYQGDROVPCCLJTXMERPKXXUIHKPRDAVYSOPZKQMKONEGFOJDMWHRTICJSXAZEZAWGVYCBPHKSNEHFPJBEQSAIFOBTJWTKKULWXWGQAAVWOPYRCRMYEXPFRZBZAIISLBSDHGHKBNOKLYJBVREONJPDNF");
    IMC::NavigationUncertainty tmp_msg_1;
    tmp_msg_1.x = 0.703703117310655;
    tmp_msg_1.y = 0.11817292584186967;
    tmp_msg_1.z = 0.38622938471721546;
    tmp_msg_1.phi = 0.23159085357079734;
    tmp_msg_1.theta = 0.10765971575320932;
    tmp_msg_1.psi = 0.05239411052485021;
    tmp_msg_1.p = 0.512252977961703;
    tmp_msg_1.q = 0.8632347215587216;
    tmp_msg_1.r = 0.37112345154671755;
    tmp_msg_1.u = 0.3982706412339865;
    tmp_msg_1.v = 0.18203235941052776;
    tmp_msg_1.w = 0.41222580396024755;
    tmp_msg_1.bias_psi = 0.05829915398086538;
    tmp_msg_1.bias_r = 0.49172684652147336;
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
    msg.setTimeStamp(0.16067265898726957);
    msg.setSource(12009U);
    msg.setSourceEntity(135U);
    msg.setDestination(30383U);
    msg.setDestinationEntity(128U);
    msg.maneuver_id.assign("DGKJESQOSARQKNNPHILSIVOYCDQPBUYCGGMASOQBJTXMNSZGYAZGDHABVGHKOYELHKQTFPYPPIWJFIYYOQUWFHOZAFTMREPODMJRUCHXWHWLFESNVNARYLJVBIJCEWPAXFUZKWRPFHXLFPFDWXEUYQVSIWDMSXLGXAQVCTTRBTMKWIGKZGODNIRAGC");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("MUSPFBVOKWVHZLYIHXJIKYMFFIHJJUKDFOQGSMLNKHKKQADZPTGWHNSIDWCNCXRGGIUWVFVTYVPEAD");
    msg.data.set(tmp_msg_0);
    IMC::SmsTx tmp_msg_1;
    tmp_msg_1.seq = 3486621010U;
    tmp_msg_1.destination.assign("OYILTDGQWGABEMOUQATHYS");
    tmp_msg_1.timeout = 57471U;
    const char tmp_tmp_msg_1_0[] = {-102, -61, 37, 122, -89, 114, -5, -44, -13, -26, 3, -44, -36, -107, -49, 93, -96, -98, 48, 107, -27, -60, -126, 21, 46, 116, 33, -84, 7, -80, -100, -100, 19, -10, 24, -32, 39, -85, -48, 83, 122, -115, -84, -107, -104, -123, -57, 72, 1, -102, 63, 92, -39, -106, 26, -113, 58, 63, 5, 92, -96, -60, 83, -86, 22, -124, -114, -76, 75, 57, 118, 27, 31, 60, -117, 93, 75, -25, -92, 111, -98, -17, -20, -126, 90, 98, 4, -87, -119, 101, -93, -72, -47, -5, 61, -116, 13, -5, 4, 69, -114, -58, -15, 66, -51, -29, -34, 105, -113, -58, -52, -55, 20, 74, -37, 79, -38, 119, 66, 15, 45, -16, 86, 18, 60, 68, 34, 85, 29, 50, 111, 45, 32, -106, -63, 39, -114, -15, -42, 72, 6, -63, -70, -104, 111, 0, -51, -72, 89, 52, 10, 77, 111, -75, -123, -49, -70, 96, -48, -37, 85, 75, 115, -60, 7, 120, -14, -50, -44, -111, -109, -51, -28, -86, -55, -15, -85, 5, 63, -9, 88, 62, 7, 88, 110, -9, -77, -103, 32, -118, 19, 106, -32, 81, 94, 57, 20, 60, 19, -30, -27, 39, 46, 29, 44, -55, 41, -11, 38, 110, -72, 57, 20, 16, -13, 43, -117, 35, -82, -56, -59, 112, -27, -110, 50, 116, 16, -17, -3, -28, -14, 45, 41, 89, 96, 122, -59};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::JsonObject tmp_msg_2;
    tmp_msg_2.json.assign("MLTFCCKDLLJVGSEIBMIOEHSFEHDHCCTNQAWDGQMTJXLLKDTCAHVWGVXNXNDJRRCSJWVHQHUYUIFYIDAKGT");
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
    msg.setTimeStamp(0.14468546853968034);
    msg.setSource(63872U);
    msg.setSourceEntity(236U);
    msg.setDestination(13978U);
    msg.setDestinationEntity(202U);
    msg.maneuver_id.assign("EFLUFQERYXAHLVYRFOIGQOWRQPXMRUAUWEHRKUPMNTCHZILYLOJTWMBCPT");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 38163U;
    tmp_msg_0.lat = 0.29910784002102797;
    tmp_msg_0.lon = 0.9129472584386717;
    tmp_msg_0.z = 0.4537958962241645;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.pitch = 0.4736301287922612;
    tmp_msg_0.amplitude = 0.7741358284675437;
    tmp_msg_0.duration = 27783U;
    tmp_msg_0.speed = 0.005150026746349012;
    tmp_msg_0.speed_units = 174U;
    tmp_msg_0.radius = 0.5317035564460636;
    tmp_msg_0.direction = 221U;
    tmp_msg_0.custom.assign("RXEXNTIRBRPUPCYWZZVSCAIXDPVBQCDVMFZIOEOMGKADBZLSFKNHIGJSWTJKRBEENQBUYXJVCAMVYNPAQGKYRLS");
    msg.data.set(tmp_msg_0);
    IMC::SmsTx tmp_msg_1;
    tmp_msg_1.seq = 3939291726U;
    tmp_msg_1.destination.assign("OZLDGGFXGFAPAKENZGPLJFYPUZHDABHUSVMIHUNFYLHWMHGDEJBZCCQSXYDPWITTYIKQMALRCMNXKJTCRDGONQYAMSXQTNRJVCUFBVUIKMNSL");
    tmp_msg_1.timeout = 6320U;
    const char tmp_tmp_msg_1_0[] = {-39, 61, -63, -89, -16, 13, -57, 99, 119, 39, 117, 51, -85, -49, 13, 64, -12, 95, -15, -100, 126, -47, -103, -111, 65, -43, -8, -120, 0, -107, 53, 9, -37, 99, 62, -13, -66, -76, 125, 13, 19, 45, 101, 22, 25, -4, 10, -37, -7, -127, 14, -1, -3, -19, 72, 115, -49, -40, -75, -33, 55, 60, 54, 108, -84, 105, 93, 77, -127, -34, 21, 56, -88, -85, -81, -78, -100, 107, 29, -42, -42, 24, 37, 108, 62, -67, 19, -45, 97, 34, 57, -44, 0, -3, 43, -117, -60, 43, 114, 90, -52, 11, 120, 47, -87, 11, -38, 45, -13, -4, -73, 63, 41, 108, 17, -87, 8, 52, -38, 111, 102, 13, 118, -76, 86, -80, -128, 77, -37, 77, 35, -98, -37, 31, -79, -61, 102, 124, -1, -101, 56, 87, 123, -84, 125, -46, 71, -8, 96, 58, 3, 120, 92, 35, -18, 49};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.4940108267258331);
    msg.setSource(48320U);
    msg.setSourceEntity(63U);
    msg.setDestination(57102U);
    msg.setDestinationEntity(120U);
    msg.maneuver_id.assign("AJFWNOIDYVXEGJMLCPIKURDEHSQVYFYLVTKOBEMLHTTKWSAZAKOIMXHBUJLUJAQPFCQZRHNDKNZMUIJNDTQLNPCRYSAHZKMPRNVKWZIAOFOPBEREGSFENCOGRCXMCYDGSZEGYCEQSGBAGGWAWFTKHXDCHBJSQZDQQCKFMBBGIVNJUWZQRSXDZLRXXYTUOWWXVFVGOXJPULAAYPVKEL");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 53086U;
    tmp_msg_0.custom.assign("LWDITIFXJDKXLVPULRJOLGIPZBSBKHSYNNLJYGKVGDZMOCJRASVGDGQNRUMAPIJKKMUHLUBYNDMREHDZIWNTRQFBLVUYFMSEVDMWHUKQOTFAO");
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
    msg.setTimeStamp(0.8221875300099585);
    msg.setSource(22941U);
    msg.setSourceEntity(234U);
    msg.setDestination(31190U);
    msg.setDestinationEntity(25U);
    msg.source_man.assign("CXWHSAPAXOVGDLXKNXCRGWJTCHQMEPYGJJBHZUWMDKTZYATFNRVPUPIFYKYMZSBTUWVVEIYLAIGFILBXWSBVQWNHPDUDQJYQNPXBKNMHFRPUJGSJOGRREDNOMTZJFSBVCNOWINJJEIGWMD");
    msg.dest_man.assign("QHUHHQOAAZEFFPWPHCRAQFIGEJJOKRFWSVCIVZFRDZMFAENIJWVTIWWGZHOBNTPHJAQCLLLLSYRNKRDBXVKTUYZQRUBLWSSAWXSXVMMN");
    msg.conditions.assign("KSEYLWOTLWOSPWKDJMILFECJRCLJQRSJHGCOSCADHSPUVLRAHHUMDCYWYASXQDKPETYKPZEVEFWIATZLLPHBGQGCQVORHMUOXVNVAKBFUHPTIXXWVTZDSHQAIQPUNIGFMYDGEXXIPNFMNDBJAYRZYXSTLZYMYECKRIOGEEFXJHRAUBNYBBDRIZICJ");
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7433441345295191;
    tmp_msg_0.y = 0.20638398705768424;
    tmp_msg_0.z = 0.6436137730982839;
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
    msg.setTimeStamp(0.8108166216123261);
    msg.setSource(46353U);
    msg.setSourceEntity(179U);
    msg.setDestination(19786U);
    msg.setDestinationEntity(205U);
    msg.source_man.assign("DUVOWHYYCXLFMTHKJBCQPLSJITKNVFQTYBOAJNEUYWOZSHXJOOOIVESGNJQNHXIQZKGGAQWMPJGIWXEANZBSTPLMCKRVZONUSPRJQFAGFCRLMPCUXZOEQFRETANBILEZWMBLCTPWKZSRENTDXRBRFPWISKGKMLOGDSTRQDJWCZNIHFUOCDACKYUNUFHREIUJRXBPHAV");
    msg.dest_man.assign("ROAYIGOHBPEGNXYZWSLCCKRZGMZVMMADRSPNTOIYFTGALRIWQSSHDEUUIGSTARZAYRGPJSYWMFNQAFNJQEFDNMIZTSGLLQHXFJLDIVMBRIPWXVQBYPVJFHGHKEYJLZTUZEDGDIWCTTBEXNIWVPB");
    msg.conditions.assign("XJXBMRFLDMALBRBIDPUHBHXLOMYLMYJLIVCXEKBOSAZKRBGPBNXSZVNKVZLDSQWWADKKXPKJATREEOJUNOICZAAHFNBTZCHHOTUUMPUFRQYIECXSVWGCCJFNSKSTWMLTLIFOEEVHISRQUMUUPZIQFHDFTHNAWJPPIBQDPUYRDYYWGTGCFGFVVPWETOZRCGVWYKGNKOCNHHWAMYIDTXRSEJVQWZ");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 227U;
    tmp_msg_0.angle = 0.16859564417849682;
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
    msg.setTimeStamp(0.10269971505399167);
    msg.setSource(4795U);
    msg.setSourceEntity(30U);
    msg.setDestination(19908U);
    msg.setDestinationEntity(60U);
    msg.source_man.assign("QSYIHTOKXDGLRJCELYLXKHDMJFZJRDIWNGFQRGDZUDQWBAZVQUZAJFTOBMKALJTAPBVOCGGANRUARZCQXPIWOWUOVCQPMYVHEDVYCWCGPIMSRAAXXGEOPTOFANIDHZIDNAJLTKWFKOVYSMSQSVLFUKMIM");
    msg.dest_man.assign("WELSAQMBCUROCUMELHPBEHCBTTVMADKZKJNOKMFZLURCSZJIGEHGZSOAHHLUMIZRTFPWLUBTXOENUBHVKPNKTXRAFLNIKQPUBNLTAGPXYATJIIJDEROSCECUZKYBOBESLRFGXZZMSGMDVHRWGFNRNSILKDEFQKCPQRNWXXWFOGAVBZWYRDFWDXIXYUSPTVCJMDAQKIPYJXYYTDZJDANAGYIUHCFPVVWQISHOGMQQ");
    msg.conditions.assign("XAJKHDGKBCNCEHZJROZJOMQRAFXLVOOAXPATYDVVDWTYBCWASZKORBEWKUCDORCYFRUTNSVKPONPMZWCMENLATQLVQTPENDSOLOYVUGAZLCKFWRQSSLGZDCOXHMRKBGBPDIHSVFWVPEIZRFQMYBUEXZEGDWBHEITNHUCYTKYMQUKLUNGQSUBPFHNMNTTIDWSXVMMJG");

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
    msg.setTimeStamp(0.9290664312914237);
    msg.setSource(61951U);
    msg.setSourceEntity(150U);
    msg.setDestination(23819U);
    msg.setDestinationEntity(224U);
    msg.command = 65U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SMYZCHUXQIDLAJARGBHYLABQHNNPOPWSEAXFOKMMKRPJXXOJTYRRXAYWOPDCZJVTHGWIFKLB");
    tmp_msg_0.description.assign("IXONBCHLBGAQKLXMGYUZUBVCRRPSCLXCIHYREHFLCTKPRMDNPYSBHIPGYAMXNLRBDERINQCZGGWVVCJEWHYLQERFQPNTAAIRWZOFDWLWKHAMBEADZWYGKJWSOKVTSNBLCMXKSJKQZUBQEIQFCGVDYZKTJPOAXQJMNJSGZAOXDQUJDFMKESIPTTMOKFBIFWHVDQTUTSXPUHNYVTGFFUPDVYZGOYDIZT");
    tmp_msg_0.vnamespace.assign("CBQISGVWXTZGDDVOAPFQHBYDEDWLBNKYNKFAUHXJNUMRWNBKEMLEKQHSYISAJWTKQKZEPLEJIQXARHVOBFLRROTCZLVBAPDIRFCMFSMROPNQTYHHQYTNZOVGZTSUSXTFSFWXEDFGCHXYRNALFDIMRATIHJXGNJOCWUDTVHPKMUOQVQCYUGCYWZSGFMOXNLJJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TCSQNFNYGAP");
    tmp_tmp_msg_0_0.value.assign("XXHWRMRTWGUZCTBXUZTIZFCWOHSTCXEZGBNHGYCHJZQGJLOQSYQWFRLFVGGUEMOBEIP");
    tmp_tmp_msg_0_0.type = 215U;
    tmp_tmp_msg_0_0.access = 211U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OPUEUMGJZVQVEFRBHBTRGJGPFPOCMRQHUGZJFSDWRLPMTPQSMDVXXMIRGIUGKWHNKVDBHIMCKFTTBEFQUIPAUZYOQIEWOTRNCVQXSHMNPISCLOLQUAXCZPSVLYGALKTEWHZFCZZOFBA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("SNHEPZSGZLJLKDGYUTQSFPVHZDIHKLXKJJNQLJUSGOIYFKRKFUMHRMNLZWHBAPREVDMJXVCNJLWOPVLURHMHIWKBWWSOHKKKWBNREDZMOBOUVXLMNBMVVEFFTQUGEEBKRQIXTHMSBYBQJQYOIBNDAUSNUFCLPTATXXZSRTANPJYTQGWTICXZYVJPEVOQVCZMINYXGSCIXCQAIXOOWZDQCETAOAIRGPYDDGWFWCFYMCRRUHASAPY");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 16773U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.3677941314690618;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9535945834424544;
    tmp_tmp_tmp_msg_0_1_0.z = 0.038961740084549334;
    tmp_tmp_tmp_msg_0_1_0.z_units = 250U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7376209849460537;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 152U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.06282538475043464;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.4247815507679905;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.14739410111207185;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.t = 0.33459006074495756;
    tmp_tmp_tmp_msg_0_1_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("UFKJCIORDIUDAMVMKXGOPCDRXGCIQWUGXWFDYQSLQOJPKWCKWLRQJNONEPZREYMLJALELKNVUXHMWHWXTRINBEG");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Pulse tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::LblEstimate tmp_tmp_tmp_msg_0_1_2;
    IMC::LblBeacon tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.beacon.assign("FCWYHOJZEPYQVGPHKEIYAOCRMLDDOSSYHLAZMWRQXGMZHILBFERJZETTIKGFBFNMLMPCPFOAZYUKWCLJASQNZEJTGXUDBUNWSPKSHRTNAF");
    tmp_tmp_tmp_tmp_msg_0_1_2_0.lat = 0.3053908287805226;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.lon = 0.5819265884382854;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.depth = 0.31245065919570336;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.query_channel = 8U;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.reply_channel = 238U;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.transponder_delay = 166U;
    tmp_tmp_tmp_msg_0_1_2.beacon.set(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    tmp_tmp_tmp_msg_0_1_2.x = 0.43256765954744647;
    tmp_tmp_tmp_msg_0_1_2.y = 0.6276335693677476;
    tmp_tmp_tmp_msg_0_1_2.var_x = 0.4996177120148415;
    tmp_tmp_tmp_msg_0_1_2.var_y = 0.25332383036561956;
    tmp_tmp_tmp_msg_0_1_2.distance = 0.4268302832882921;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XTEWULCAHGYOWNWMJVAJKBVDHNRGKP");
    tmp_tmp_msg_0_2.dest_man.assign("CZEBUZNBHQYTVKQZZOVWSOTFDSKHWZYOCPRNNWFILUBAZFHZRXDFQFJFCSHGMESHTXOIDCGNGSAUTEDXWIGYTVNBHJBQFEXUXWTGRHDOLXRXPZMKJLMACTXCGQQQYYDOGWHDKGDLPJNWKLKHSAFSUIPVREACYEBPAJOEVYGLZVPRSMNOXADVMDNPMIRATVYPQNUPQMUKYMTLEEHCKBSRNMPRGJTOKIRIIMFJVOAJSWIXUFLVKYQEBICUL");
    tmp_tmp_msg_0_2.conditions.assign("OEZAJBMFKYOOOYGPPLQUXXDTZVAFZYKJSZBMIGLHGNLKMAWTLPMOJLJWRHOJJESUOHUSILWJPKOEEXZOAIRHEQNEVUKONUCYMHKHDZIXHWSTWGEFDFGSMCCGBVURTTN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PathControlState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.path_ref = 2220854773U;
    tmp_tmp_msg_0_3.start_lat = 0.7568506246343417;
    tmp_tmp_msg_0_3.start_lon = 0.058833611942972874;
    tmp_tmp_msg_0_3.start_z = 0.24542016015478896;
    tmp_tmp_msg_0_3.start_z_units = 170U;
    tmp_tmp_msg_0_3.end_lat = 0.5372839748552553;
    tmp_tmp_msg_0_3.end_lon = 0.821845289328982;
    tmp_tmp_msg_0_3.end_z = 0.7469296949692138;
    tmp_tmp_msg_0_3.end_z_units = 84U;
    tmp_tmp_msg_0_3.lradius = 0.822515114271663;
    tmp_tmp_msg_0_3.flags = 76U;
    tmp_tmp_msg_0_3.x = 0.17615255462047985;
    tmp_tmp_msg_0_3.y = 0.1374489411493991;
    tmp_tmp_msg_0_3.z = 0.9009494671676588;
    tmp_tmp_msg_0_3.vx = 0.7485609630366401;
    tmp_tmp_msg_0_3.vy = 0.8435708481245175;
    tmp_tmp_msg_0_3.vz = 0.38918015477104406;
    tmp_tmp_msg_0_3.course_error = 0.12733835863536314;
    tmp_tmp_msg_0_3.eta = 37238U;
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
    msg.setTimeStamp(0.9372916374631113);
    msg.setSource(2648U);
    msg.setSourceEntity(44U);
    msg.setDestination(10086U);
    msg.setDestinationEntity(241U);
    msg.command = 169U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TBKJOAOWXLXMISXOXQUZJNRQZNFCJLPHHBV");
    tmp_msg_0.description.assign("NRSEDJFZIAUSJHVNKRCXIQNZMIMCPWUXTHGORLLUIKZPHVYCGBRLMMEPBRQEAKEHFXOSNEJYYDGOMXDBRISVJTMVQFNGGIISBDZLYZWLPKMABFW");
    tmp_msg_0.vnamespace.assign("KXFAVOSLYFUXQDZHEVWQZMLBGTLOOBVXOC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GXHPNMRVWGNTGLXOAJNOSIWCFJIPQABZYZFBPYTNGJSFWDQCWHUDZUUNJBKFERIYMMNDKGZHFDAGAOXMYRZCC");
    tmp_tmp_msg_0_0.value.assign("PAQYIIZJULKETIBWSQECOPKLFZQVGUQNXENUARVMXATKYQDXOLGKBCVAWHYCBDCJCTKLPFHBGTYHGXXFWXUQZZVANXLRYBFHMCDOCN");
    tmp_tmp_msg_0_0.type = 100U;
    tmp_tmp_msg_0_0.access = 121U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CRAZAOZATNQGMNGWPGNCRFIYXVXFDHWWIDNRBPFVKJXTADZSAAER");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WRFHELSLJQQLRQAEYIPQGCDOTAFNOMGVRNJVZZWVZIPZYSOCLKYHQHNRYAYMXTBKRMDYGYGBIVCBXCFEJPJIXWVHSLDTWJMIAMFSBOEPZILIEZHTHTGIPFUWDQZNFUQHKXEZRKXRSAVHKAVCIKBCZJOUCLPNCBPYMAFGSTDMRKCVPV");
    IMC::YoYo tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 20315U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6074045413365886;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.6417863197602952;
    tmp_tmp_tmp_msg_0_1_0.z = 0.9683736592075435;
    tmp_tmp_tmp_msg_0_1_0.z_units = 71U;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.007622395170803875;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.5307065338816348;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.9873082319659214;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 107U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("VHDYMQISUWVRVYGRVRPZSTLDSTKKPADGFQQHMBOECAJOXBWDVJQKOLFBOMOSHAZUYFSNWFEKMUTAGCAEVCLYEXRLGJLNGIMYAANPHTQARKYYQIOCYWBJNFNIFWWXZWXNMDQVJGZIFVDDUXKADRIINIIPOGVCTMPC");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::RemoteSensorInfo tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id.assign("YJWALPRXRCHDKEYFRAGFYOTRPHDHCWEJFKABTPQGEISUMAXUSPLBFLKACUZCHMERBDJEKLTTZMQBOUPKXDIESHWOPBJATVLXXURWEMOVOSNRXGGKSJFCWNAKINQGPBGHRWDKDDQDMGCZOUYIQXQGZYQONUNEGSFAPSWJHZZIHMRTWUMJLVIZYLFWMCVBAVONMSXTYRTITAEZVXZOFN");
    tmp_tmp_tmp_msg_0_1_1.sensor_class.assign("LOIGUHBUUBMDCLTQBPVFQTFODJASWBAPTIRIDCXIZXDPBAGSUPDUHOXNPZZZDHCSJRHAPGRMOSQMYNQPVFMKEXVFHBONZNQGCVEYHDGPATKEGRMEOFWATRQ");
    tmp_tmp_tmp_msg_0_1_1.lat = 0.6086444890241489;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.4781204963289505;
    tmp_tmp_tmp_msg_0_1_1.alt = 0.44022060771403126;
    tmp_tmp_tmp_msg_0_1_1.heading = 0.31311852418476016;
    tmp_tmp_tmp_msg_0_1_1.data.assign("FSVEOTNABVOGUBUOAIAECHWKEFXWPNPHXKPGLXOZTNKZCTQSESBREBRUMMZZWFON");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("CJLVTUGSSWJNKZUKKZBGRGBLQNYUZTMWHAQUUALFCKZOXJANBMKZVGAKPNWDXGWCMSPCEVQOIVEELDVMQTSKDYDRWXYUTGAVYOSHNLFJWPBXRROJECJYEJUNDTRQKOQTDRLVELPQFFIZUSHAPTIIJHFCQPNSXHXMVDLLZVIBWHSYSTIZHORCURPDBJOGYWNFAEPNDGWBWCEXMMAHRCHFBFDIBTHYU");
    tmp_tmp_msg_0_2.dest_man.assign("TLQITWIXNPRFAQNKPVEZQUIFSBPDOBSPQRFQGAVXYEMMURYDIZWNXFQYURKLGHKWUONIXBADIUIMEALVZGVBJHIAOLBYOHDPKCAGMDPBVQWSHVSPJJCCFTNLSWRUBCVSKMWKALTYCMFTEXHGJLTXHREDRKBAUVDFPJCNJQGSNXHNRWDXEAUBYUYYVDGEFSQWIMSJMOTZJEVZ");
    tmp_tmp_msg_0_2.conditions.assign("CLCSOPGDUUWWFSXFZQTTNCCZCXASJBVDTBXFPLXEHVGGQQCKOIYMKQQKJFEUNITLOVNSJQDLNENOGWYGWLBDJBYXSKDHVTKWKHIIWQYJOUXARYSTVRULUOPYVWFBKTWAFHIOYHPJHEXHNWEFESMUDSXCGNLZOORRIAPJBRFMPDINMCRAGFVMAIJVEUNBSILSBYAEICQTENHKZXJDRAMK");
    IMC::QueryEntityInfo tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.id = 97U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.3481764413050471);
    msg.setSource(38011U);
    msg.setSourceEntity(67U);
    msg.setDestination(54621U);
    msg.setDestinationEntity(42U);
    msg.command = 111U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZZKMBPGOYOCPBGZXXTNSWBJFOHNSMJIOTNDDTKVULPKKIRPQIPYKYMLCGIDDXGTAXVSVQYZHKARSVQRBEQGDWWMGCSYBDGVAMTWOBN");
    tmp_msg_0.description.assign("AOEJQYLOKIBTGRBDYKVOJHYJDXTAIHNPZGYHXRLWSFZOQRHMKDJFNL");
    tmp_msg_0.vnamespace.assign("LFNOKSCKOWRDPIDCKSVYQHYLZSQFMSTNOZHIOKMCHGLXUEEJLFRHROXZUVAQNRXYUUMJWGGVQPFNZWCPBWVBTNSPBEUYFDMAKMXEAWKWAZEYWYZOATJXLTDRVDBGJGPLJVCYMRSTMGNUAIREIVQWQKVIGXHAECUSBQGNUWDPIPOEUIMPEBHXORZZSHTJIBXSGFWTBCD");
    tmp_msg_0.start_man_id.assign("QYACROLBKSLIHQPKDFSUFMXOSEFSEGZVUTUTSNFKUHDUGMVJBYWNNWPLIVWPKMBGIEOCYUZOLMGJHLDQHWKNAMBKEOVOPFZAGXCAKYRLSGNEQXCWQFGQBZRMEYOPTKXYJTHXODMRDSFJSVEFVRITFDRJIJATUXCYVRNDENNPURHIJCCOAWBGVLPCXYLUXQAZTIGTRAZNRQMJHLDPVYTZZ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TOZUQUXTMTLVKQFHDCKYIYBAEWRWWHOIKVZNJXMDFJHNATKITCYKICLJWNWWX");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.859425717989839;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 194U;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 46017U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JCCBBOPFMWMBXCEVGMJQDJCDCBLPZFSUURMKL");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanDBInformation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("XHJOQUHUASDYA");
    tmp_tmp_tmp_msg_0_0_1.plan_size = 27605U;
    tmp_tmp_tmp_msg_0_0_1.change_time = 0.8892007777496166;
    tmp_tmp_tmp_msg_0_0_1.change_sid = 15599U;
    tmp_tmp_tmp_msg_0_0_1.change_sname.assign("HGMAZOBRHXOFQQPTWVQUPOXNEKYOKKZWKAKNWRISMMDBXQGBJDBWFHJJDUYVGYESBCSNBLPERFESDDPGHFMUUOBDCAWZZCCPLRRCTFPSHVNXAILYQCPGQXAFTUFZWKROWIIXGZWVZJT");
    const char tmp_tmp_tmp_tmp_msg_0_0_1_0[] = {30, 89, -75, 36, 20, 82, 81, -4, 100, 56, -108, -20, -102, -39, -86, -63, 6, -38, -25, 85, 72, 44, 115, -67, -66, 70, -73, 8, -125, 93, 97, 28, 7, 55, 26, 22, 15, 8, -70, -92, -12, 15, 113, -12, -127, 120, -93, 106, 116, 117, -18, 24, -29, 114, -124, 55, -13, 44, -93, -73, -99, -123, 90, -71, 96, 54, 118, -51, 45, 119, -99, 88, 8, -25, 7, -42, 75, 87, -124, 2, 78, -93, -120, -9, -119, -37, -69, 103, 118, -2, 91, -26, 110, 9, 93, -48, 40, -124, 45, 26, 107, 61, 100, 45, -121, 72};
    tmp_tmp_tmp_msg_0_0_1.md5.assign(tmp_tmp_tmp_tmp_msg_0_0_1_0, tmp_tmp_tmp_tmp_msg_0_0_1_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_1_0));
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::Distance tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.validity = 77U;
    IMC::BeamConfig tmp_tmp_tmp_tmp_msg_0_0_2_0;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.beam_width = 0.40515269518971075;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.beam_height = 0.9214367746069765;
    tmp_tmp_tmp_msg_0_0_2.beam_config.push_back(tmp_tmp_tmp_tmp_msg_0_0_2_0);
    tmp_tmp_tmp_msg_0_0_2.value = 0.36795603770684626;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.12428749886514645);
    msg.setSource(5429U);
    msg.setSourceEntity(162U);
    msg.setDestination(112U);
    msg.setDestinationEntity(222U);
    msg.state = 47U;
    msg.plan_id.assign("WRQNPJRIFOIEZTWYGYFGTMGFPIIUXRSOKGBQRXOZQFCOMNWGYVNESXTEOQLCSQUYSWDRKTTV");
    msg.comm_level = 86U;

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
    msg.setTimeStamp(0.551971159643017);
    msg.setSource(47992U);
    msg.setSourceEntity(83U);
    msg.setDestination(34174U);
    msg.setDestinationEntity(91U);
    msg.state = 110U;
    msg.plan_id.assign("CNPCTEIXKUXAGYEVXNVHBYLSADNJTBVULUNCJPEFVPNGTARYEWLZOGYNIIPZSEPAOOMUGBOJTZKIMWAHPULRDXGESMBWSVJGHSSBBZTXKQIBCQWOAXIOHMMFIYMQDYGKIQBTCOMDSJFWGXKOFRHFFBAXJDNZIOOILMKPNLJHQNZDGCWQEURMXN");
    msg.comm_level = 135U;

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
    msg.setTimeStamp(0.042122758735698485);
    msg.setSource(1536U);
    msg.setSourceEntity(8U);
    msg.setDestination(46488U);
    msg.setDestinationEntity(228U);
    msg.state = 91U;
    msg.plan_id.assign("GCTTPIOQXXNHWCIUDXGQUCSKPWGWQFFFNJLTHVHSTYAQWMODSXPTMCXJDBKOSMZVVFTFITPUHQUEDZFCDOAFVNJROAUBXNXYMKEYLNGYIANNVMBOMCQWSEZJFGYTCYAURLHQRWGKEIZGEOBDCEPESXRNYRLHODUOVFGAQAKIPRTKGZDJJS");
    msg.comm_level = 103U;

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
    msg.setTimeStamp(0.7119559452026963);
    msg.setSource(10631U);
    msg.setSourceEntity(97U);
    msg.setDestination(37690U);
    msg.setDestinationEntity(39U);
    msg.type = 51U;
    msg.op = 220U;
    msg.request_id = 27997U;
    msg.plan_id.assign("VOXRKEVXAOCDIQLNWBGSGIDUYLFTXRAXBZIEDMGTOGEEKDUSIZEYHYLWQAUIVSESWNTWBLMHGGIPJDTAXJAYQVGUMVVPBZQPJYNKVSAGLAPUHMOSEMJYZCDVCUWPBBKWROKZPFHTKLDUHHDBHAYNJOBYMRLXNVTLYTIZPGRETXTNOUQROIRNGAJJFRCZWQIANCFFMQBHECKSCKFLBPZMWHMQHWKVQCLQZDZEPRCSFIRJOFF");
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 209U;
    tmp_msg_0.frag_number = 14U;
    tmp_msg_0.num_frags = 223U;
    const char tmp_tmp_msg_0_0[] = {-113, 98, -93, -28, 54, 99, 95, -101, 97, 40, 110, 106, 36, 34, 123, 83, 14, -116, -17, -94, -15, 21, 42, 103, 61, 72, 25, -79, -93, -37, -56, 123, 53, -45, 125, 0, -59, -21, -6, -42, 0, -69, 50, -10, -18, -8, -34, 53, 101, 71, 51, -65, 32, -34, 4, 16, -100, -55, -21, -14, 44, 35, 38, 52, -71, 90, 96, 74, -2, 66, -72, 16, -24, 59, 4, 19, 17, 44, -47, 112, 14, -93, 115, -95, -23, 100, -102, -35, 85, 46, 39, 116, -52, 68, 122, 93, 125, 117, -80, -117, -54, -123, 46, 19, 37, -37, 96, -86, -77, 41, 48, -85, -82, -40, -110, -77, -42, -95, 88, -35, -49, 79, -64, 42, 116, -115, 54, -103, -53, 37, -112, 78, -99, -88, -64, -11, 57, 64, -20, -86, 50, -96, 44, -8, -113, 28, -112, 77, -123, -108, -54, 67, 55, 118, 3, 13, 94, -29, 20, 14, 112, -104, -22, -70, -6, 118, 124, -107, -13, 42, 20, -57, -113, 78, 17, 91, 89, -81, 95, -51, -67, 12, -49, -124, -8, 124, -59, 118, 61, -90, -36, -10, -45, -42, 111, -30, 103, -20, 75, 74, -85, 58, -121, 113, -101, -42, -45, -127, 52, 58, -63, -86, -108, -78, -46, 73, -68, 90, -49, -45, 126, 3, 71, 9, 64, -10, -60, -16, -23, 10, 105};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KFOCKBGTZCIPXHHMIWUVCSZBRCGMBCIFGQISGEMHLOOXTRVNUFJPHOFUJJLUDLGSYRUBOSOHRTSQFJZRUBOVPWYUPEAXEAWDANQFMHAVVJEKXCTRNTWQDBTYURMVDSQHBISZKLWWPWQDYMGJALPHNDBUCPZD");

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
    msg.setTimeStamp(0.15228344673052086);
    msg.setSource(65339U);
    msg.setSourceEntity(99U);
    msg.setDestination(40902U);
    msg.setDestinationEntity(229U);
    msg.type = 210U;
    msg.op = 11U;
    msg.request_id = 60021U;
    msg.plan_id.assign("JNRZLLYDVSOZQKYCFGJYGVNSXXONPFKPUMJNCKLKBCZTRESSZJFPFEOERFTSFGAAYISMKAHEODXCOYLQLQJMDAQRZYWJMOJSAKLKFWGUBKTTUDJBLHDOAVIZMHEBNCWXIZQMKIQRHUNTWWBGCDQUTMPVRWGEIXKPPBEOQJCCAFWBYIBVXBLMYWGITCYJLHXTYGLOVF");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 142U;
    const char tmp_tmp_msg_0_0[] = {37, 13, 1, 43, -75, 48, 114, -64, -120, -51, 32, 103, 62, 27, -30, -21, -61, 92, -64, -112, 65, -29, 6, 115, 56, -49, -84, 55, -19, -32, -107, -42, -68, -14, 65, 27, 71, -120, -44, 1, 27, -43, -63, -62, 72, -105, -104, -52, 1, -92, -88, 93, 25, 59, -113, -8, -122, 101, -25, 46, 66, 80, -71, 83, 64, 37, 99, -103, 120, -52, -110, -101, -107, -27, 99, 23, 43, 62, -75, 18, 58, 13, 40, -72, 122, -103, 103, 63, -127, 47, -57, 61, -36, -57, -112, -108, 106, 97, -91, 33, -41, -21, -51, -46, 101, 79, 26, 5, 15, 80, -58, 3, 28, 28, 107, 111, -123, -99, 31, 89, 109, -92, 83, -1, 65, -70, 52, 12, -97, 59, 46, -120, -105, 114, 97, -54, 0, -41, -44, -118, -30, -35, 110, 48, -73, -13, 116, 106, -126, -74, 41, 110, -37, 105, -61, 73, -128, -108, -89, 30, -24, -8, 106, 99, -124, 31, 72, 40, -46, -107, 75, -11, 119, 25, -42, 80, -49, 125, -111, -90, 91, 118, -42, 14, -33, -76, -102, -13, 78, -91, -103, -13, 88, -128, -128, -121, -37, 96, -52, -61, 116, 36, -90, 6, 41, -7, 19, -15, 73, -62, -17, -2, 64, -93, 126, 114, -72, -39, -76, 91, 23, -19, 102, 49, -91, -34, -42};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BSNDEOVDGEOXRMAOBAIRPUWIHEPXXDDHGOKPQMIVLCGBPJWCSCNGZZVAEAQYDZRUECGSGQCTPKENBDYNIFIWXVNPEUWHQWDAYNSMUHOYJZTTRRTAKBFHQHSRGSYBEKBWCZNJGXHDZPBHRFFWNIAYMWPDZTCSIPXKFMJLOIWQRAVJVOOXOQMCKYRNFOTJSUCLNUTXSBLLLEJYF");

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
    msg.setTimeStamp(0.07164331749558495);
    msg.setSource(21485U);
    msg.setSourceEntity(187U);
    msg.setDestination(17545U);
    msg.setDestinationEntity(249U);
    msg.type = 205U;
    msg.op = 198U;
    msg.request_id = 6626U;
    msg.plan_id.assign("ITWEONXUGSYIUMFAVNWJORTQMSXCDASLYOQGQNTYDBRXVTCLJHPIFCI");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 20881U;
    tmp_msg_0.control_ent = 19U;
    tmp_msg_0.timeout = 0.7241171480559949;
    tmp_msg_0.loiter_radius = 0.054115897998302964;
    tmp_msg_0.altitude_interval = 0.6379920858180917;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SOYCQWVYOQJHKMYRLVROEHEISMUQSHJVFKMRAGSYCGPTLTDIHRMZIQXNUTDBWZONYTAPMIAJKNUENWABEOFXFDWBJLSPVVSLHWDUKDTFGHMZHUXAFAWDHJBFBI");

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
    msg.setTimeStamp(0.1295987530252516);
    msg.setSource(11357U);
    msg.setSourceEntity(71U);
    msg.setDestination(3043U);
    msg.setDestinationEntity(138U);
    msg.plan_count = 49565U;
    msg.plan_size = 447270717U;
    msg.change_time = 0.6669438597440488;
    msg.change_sid = 42710U;
    msg.change_sname.assign("FWLCIUKTCFZYFEZUEABDXUFRYVGMOYZSNSPDCSCDZMXTLYFHCABSJAVKWKLWRJRFNEPNTTIEHNKHJXPNAJXGSTLRLZZVRDWPDWLYVZOUEBMODQPKQNIMOTIMLRKSUBJVVFGTIEAURKHFUUTBCHGRHBYYFVAOMJBUAENVEQIYRHMKOSLCVJBPRDWOFINODCZXXCEXMGSPEIGQCJUJKQSLMNGQDXHYAGJGAHHWPPTQYWDNOIS");
    const char tmp_msg_0[] = {99, 8, -41, -35, 39, -64, 34, -94, -3, 35, -33, -98, -1, -33, 91, -13, 97, -70, 70, -113, -73, 39, -39, 24, 102, 55, -108, -71, -58, -67, 2, -32, 51, -33, -113, -87, -57, -102, 56, -47, 99, -76, 115, 7, 107, -102, -3, -72, -49, 6, 112, 64, 38, -17, -4, -41, 33, -99, 22, -94, 9, 76, -94, 115, 32, -67, 120, -76, 27, -57, -21, 29, 7, 15, -20, -70, 7, -13, -47};
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
    msg.setTimeStamp(0.0866743229844611);
    msg.setSource(41477U);
    msg.setSourceEntity(104U);
    msg.setDestination(41522U);
    msg.setDestinationEntity(84U);
    msg.plan_count = 18532U;
    msg.plan_size = 182409646U;
    msg.change_time = 0.27827052081234915;
    msg.change_sid = 49514U;
    msg.change_sname.assign("DSNIURIYTQCWNWSCIELBMSQYCWJJJFFMAJZKEQPBYYBGZBNSXEWFTYEANUUGPSAZHNZRNTGBBWQXBRQAWVRZCLLRCDKUMNWYHVIUHMOMTCDKOTMBKSFKHXVDHVZCJRGMUHNXRBOYEEOBYHPJQPXEHKFXOGLTSAQZLFCEWVIDPXYVSGKGSTZWRTQEXZF");
    const char tmp_msg_0[] = {60, -26, -13, 71, 20, 115, 51, -77, -77, -79, 123, 36, 97, -9, 54, -15, -38, -99, -10, -82, 58, -22, 9, -14, 90, 55, 64, 99, -97, -9, -54, -69, -121, 15, 44, 3, -45};
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
    msg.setTimeStamp(0.49500873315280414);
    msg.setSource(26462U);
    msg.setSourceEntity(6U);
    msg.setDestination(38266U);
    msg.setDestinationEntity(150U);
    msg.plan_count = 4991U;
    msg.plan_size = 2486725119U;
    msg.change_time = 0.5512639402595206;
    msg.change_sid = 32371U;
    msg.change_sname.assign("BQKPNMBIIZWQIYNZHFKLSRWYOHNLGFTDOFVMPVWFMWOXUXUGLLYDTBVUPKGAAVBEBNGUAPHCEEJCRHJEBSJZZUIMKSRNZFETNAWFTAIYBXROXPQEVXZMSOMXAHAPKWJCLMGFIQJQRGEXWVDRDKHXCPSUPSPYCFTBXKLESVCHJIMALKFGJERQDUSYPZCA");
    const char tmp_msg_0[] = {0, -36, -24, 40, -104, -108, 102, 79, -33, -40, 22, -75, -51, 88, -23, -23, -96, 125, -103, 53, 43, 57, -119, -32, 84, 21, 47, 50, -10, -4, 41, 116, 43, 9, -43, 57, -91, -51, -111, 90, -2, -18, -32, -18, 70, -70, -94, -104, 115, 45, 110, 39, 112, 23, -105, -27, 108, 60, -44, -97, -46, 7, -59, 59, -113, 90, -117, -63, 97, -115, -76, -56, 55, -35, 16, 7, -115, -90, -14, -86, -97, -4, -105, 107, 68, 71, -3, -26, 87, 81, -76, 33, 37, -16, -83, -73, 1, 18, -100, -121, -12, 44, 21, -4, 32, 32, 79, 29, -108, 102, 108, -55, 44, -39, 89, 32, 104, -119, 19, -96, 27, 41, 74, -103, -82, -36};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RQHPVJZLHHBYSOKARBXXFYBKGFYFIZWJQPFIYEDVHBANFIMWBBBRZVSYPLAVFNQSJIDWLGTJXMCRTKMUXKTGLTQGODKNCTMJHQKWTPIZRONUDHQGOWXFUAZTIUMDB");
    tmp_msg_1.plan_size = 13633U;
    tmp_msg_1.change_time = 0.7577201765008243;
    tmp_msg_1.change_sid = 927U;
    tmp_msg_1.change_sname.assign("WYUHXTPZWAZMWMDNEGSPDLPHDTCTUWCFIFVOIULHNCPMMSIZJSGDZCFKOQVAROBWSTZFIHCMENKPYXXQGAHLKEJNKLQVCJ");
    const char tmp_tmp_msg_1_0[] = {-73, 10, 18, -108, -8, 105, 39, 98, 4, -70, 30, -49, 4, 2, 79, -93, 14, 25, 61, -14, -106, -115, -38, -88, 66, -39, 71, -79, -9, 79, -37, 112, 108, 65, 73, 81, -13, 33, -111, -111, 3, -125, 114, -84, 36, -2, 65, -89, 1, -104, 100, 23};
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
    msg.setTimeStamp(0.9868089838769811);
    msg.setSource(39588U);
    msg.setSourceEntity(47U);
    msg.setDestination(9691U);
    msg.setDestinationEntity(159U);
    msg.plan_id.assign("HTVWXTCPFXNQTZ");
    msg.plan_size = 50309U;
    msg.change_time = 0.38576164078913466;
    msg.change_sid = 26015U;
    msg.change_sname.assign("ZVLJQZBKDJQZCVKQIGNZHDLNVTPMXCYKQDTLGRGZXVVFYE");
    const char tmp_msg_0[] = {-31, -56, -51, -86, -128, 43, 46, -29, -23, -52, 37, 81, 65, 98, 10, 75, -56, 48, 50, 22, -28, 45, -101, 84, 30, 42, 74, -9, -9, 62, 67, -11, 32, -74, -20, 30, -17, -48, -93, 92, 75, 27, -90, 3, -105, -63, -38, 108, 108, 5, 43, -126, -77, -52, -64, 18, 18, 5, 88, -39, 102, -22, 81, -7, 32, 45, 110, 91, 13, 50, -95, -126, -108, 6, 60, -87, 32, 125, 123, 54, 23, -84, 24, -58, -101, -37, -66, 9, 77, -61, 92, -128, 95, -121, 36, 50, 75, 9, 57, -37, 115, 118, 73, -11, -25, 80, 68, 39, -16, 62, -58, 36, -68, 33, 70, 60, -50, 73, 108, 96, -127, -31, 25, 40, 67, 54, -49, -90, 112, -4, 94, -47, 51, 88, -25, -33, -49, 126, -13, 117, -15, 44, 89, 104, 60, 64, 15, 39, -90, -73, 107, -97, -76, -34, -46, -48, 116, -22, -18, 118, -82, 82, 124, -47, -97, 46, -49, 85, -12, 90, 83, 50, -80, -121, 32, 123, -6, 122, 95, 86, 117, 53, 111, -96, -88, 79, 110, -82, -124, 75, -47, 83, -123, 81, -43, 89, 115, 122, -99, -27, -7, 79, -31, -16, 89, -45, -79, -110, 93, -1, -9, 115, 10, -26, 88, 40, 12, 56, 10, -78, -42, 1, -43, -36, -84, 32, 50, 75, -64, -55, -102, 29, -102, 40, -93, 15, 30, 111, 115, -26, 81, 0, -69, 0, -104, 93, 27, 67, 33, 2};
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
    msg.setTimeStamp(0.6514403861322746);
    msg.setSource(59998U);
    msg.setSourceEntity(142U);
    msg.setDestination(27639U);
    msg.setDestinationEntity(226U);
    msg.plan_id.assign("ISLKEDIMLVQOCYSRHNVTGHNK");
    msg.plan_size = 49227U;
    msg.change_time = 0.8293067450306428;
    msg.change_sid = 19170U;
    msg.change_sname.assign("TSXIMCNXHIOTSUYYFJMBUVTANQYWUHMEYJYXEBARBSSABHXIZJMEJKRVLUMFHUIZICLBPFHDDBKATJCIGFFFKBPATIXGHYJVRHZWROQMNCZCSVDZALNBCLKCQGIQUYGCXPPZXGLUTQPRAWSTOUWHOZGOBSPPDFNNTKAQWLUHOHESTVRFCTMJXNWRRIBFSKEYOGQLDNKKQKFAPEGVDZZLELEVDRMOMVNJPLWS");
    const char tmp_msg_0[] = {60, 67, -117, 39, 4, 42, -53, 36, 125, -88, -116, -71, 46, -116, -128, -65, 19, -92, -113, 9, 42, -83, 6, -39, 95, -46, -68, 52, 16, 74, 44, -45, 61, 87, 29, 123, 19, 124, -84, 35, 23, -38, -11, 61, -119, 119, 24, -68, 72, 37, -54, 48, 61, 77, 104, -55, -120, 66, 82, 66, 15, -1, 109, 47, 48, -36, 25, -104, -18, 8, 42, 45, -110, 23, -44, 98, -18, -120, 49, 78, -1, 110, 33, 15, 27, -20, 24, -70, -69, 53, -112, -55, -20, 24, 113, 91, -57, -63, 107, 11, 113, 58, -49, 87, 92, 76, 56, 116, 25, 112, -44, 113, -26, 65, 16, -32, 36, -87, -17, 48, 10, -109, -127, -17, -2, 83, 56, -65, 42, 74, 44, -107, -69, -123, 82, 22, 117, 86, 86, -107, -24, -28, 33, 74, 40, 77, 124, -73, -4, -125, -106, -94, 63, 6, 114, 82, -118, -93, -34, 61, 123, 103, 97, 67, -94, 63, -54, 75, 44, -61, 52, -47, -108, -39, 18, 75, -113, -65, -84, 26, -117, -107};
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
    msg.setTimeStamp(0.8991729647227737);
    msg.setSource(15543U);
    msg.setSourceEntity(234U);
    msg.setDestination(27790U);
    msg.setDestinationEntity(3U);
    msg.plan_id.assign("ZRPACQUKDESOEELUYHQSYHWPSBWBNFATMLZDMTOUIAGBFAUZRGORNPFAEMCHAVGCJBUNRCKLVAPGSZXWOQYZNHOYUQOQOIXZUVIPSEYVYTJLHXQDMSJHEIZYTMKONJMPGTLTMJFRVKLJBTPAFYLQTURMNWKKOBNXFSXPBZBCJJXCXBGSWWDFVIWJANKRTQQPFSHRTKGHDLIHJXCZYIWZMVEDOXGKNVUSDEUENGDVVRDFCGIDEQXLLCMYHCR");
    msg.plan_size = 17547U;
    msg.change_time = 0.8441123070597288;
    msg.change_sid = 53400U;
    msg.change_sname.assign("LLFQFKXMNGPIUMKELYVZSAVCRCQIPKUQIYICGHKAFBRMYXPPMBNEOFNRORJKNJTPUTSONJEYLLPXGZJVUBUREOGUY");
    const char tmp_msg_0[] = {91, -54, -25, -4, -47, 123, 49, -25, -102, -7, 63, 76, 107, 55, -32, -57, 37, -2, 106, -25, 55, 30, 97, -88, 51, 8, 89, 109, -101, -48, -74, 5, -27, -56, -126, 43, -5, -31, 117, -32, 80, -102, -71, -95, -74, -67, 93, 66, -5, 20, 1, 47, -105, 37, -88, -117, -127, -51, -12, -107, -16, -91};
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
    msg.setTimeStamp(0.723607354290723);
    msg.setSource(38679U);
    msg.setSourceEntity(88U);
    msg.setDestination(61532U);
    msg.setDestinationEntity(173U);
    msg.type = 31U;
    msg.op = 254U;
    msg.request_id = 1079U;
    msg.plan_id.assign("XVCNSKUHKSOOXP");
    msg.flags = 25866U;
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 18391U;
    tmp_msg_0.status = 254U;
    tmp_msg_0.text.assign("GWRQITCEOHJ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VXDJIYOPNXETSEUZOXNZIVGIJDRCLCAXMWKFGDRLDSOFVYLFPCAQHYXMIWMKPIIBNOXVAMWIHUDHQKFOSQKPDAFTYYDUXNICDBLSTGHWZABJVPAOBERQZJJWGEGZLTJRUM");

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
    msg.setTimeStamp(0.018556986510617213);
    msg.setSource(33410U);
    msg.setSourceEntity(154U);
    msg.setDestination(47929U);
    msg.setDestinationEntity(76U);
    msg.type = 145U;
    msg.op = 189U;
    msg.request_id = 24881U;
    msg.plan_id.assign("JENYONEVEVXPJSKKGFIJMTOAAFFZWGWAZEYGUJFVPJNIMCXWMQVPSIHRLEWBVCQRJPBDBUNFVKMRUZLDCNHK");
    msg.flags = 52757U;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.3142229925361656;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TAMBOGCCTBAFNGZIOGCJSPZWWFBNVWQPOWTQFZSPETQDMIHRYIEYSDKHJXEKKPQWUYKPPIPKAZPNOJSHLXJZDQGWKUTBYGOXQDLDCGZFTTTORQCHUE");

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
    msg.setTimeStamp(0.4839684437168794);
    msg.setSource(23344U);
    msg.setSourceEntity(76U);
    msg.setDestination(37528U);
    msg.setDestinationEntity(1U);
    msg.type = 108U;
    msg.op = 149U;
    msg.request_id = 23459U;
    msg.plan_id.assign("FRPIHBPRVJUEYPMSNHAXYXBMLDVCOIERZJHTOCZWOSADCIWQREIVZKCSDXPUGQQDLSCKZJOYGDRHUWGTAHGGYYLVQNSULMVIOKJHIHYPUTITBWBOSXPNHESVMMMSOABDYEFMKTLNGIKRBLWQFNZKYDJTUTCNCULEJFVBBJFURWFDENMKAXKXJCFANGGSDUUDRXOXMLGHFWKXPWVWEPRN");
    msg.flags = 44212U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.3448289069266809;
    tmp_msg_0.lon = 0.4074459780003128;
    tmp_msg_0.z = 0.9175459021100102;
    tmp_msg_0.z_units = 155U;
    tmp_msg_0.radius = 0.3065940004043952;
    tmp_msg_0.duration = 12028U;
    tmp_msg_0.speed = 0.07697077399503582;
    tmp_msg_0.speed_units = 181U;
    tmp_msg_0.custom.assign("WPNZCVKKOWFWEXHRHGPRONRDOTCKXKPLWJCUWTJTBDBIUMSOVKSGCSMLWAXHRJGQZVUEONFAPFJPKDYILJRIKNSMANDULJQWHPEYISHOMXJBZFYDIUMYSAFHVLVIUXXTVBYIBDLZHSDQZIOLOZCBMJQRECSRDTTEMVFQNFBQGRPCFIBDGWNJYUEEQOUZONEGQQXRWCBKAMYPGAYATHGTHVSNMKXGDFUCXK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DEUKFEKZCHHVNYWYUWKKSEJOMOWGMZLWYVRLCJZXSZAXQVSHLJTUEVCIYEKFURFHCITNMFWQAFPNCDIWMBSVNATKLFXPNAJIQIXOSZRGHOTQARIMBASCWWBEYGXMMFYGMYPJAIDDFKEGAKNTJIPGLUQRBVCBZXCOJTWQRKMPLOFCVJSXBHPQ");

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
    msg.setTimeStamp(0.743233613588549);
    msg.setSource(24885U);
    msg.setSourceEntity(251U);
    msg.setDestination(30110U);
    msg.setDestinationEntity(254U);
    msg.state = 183U;
    msg.plan_id.assign("BHJWHUKQJPAFZPPDMSTNZYHCRSGDPSYQLKGYLGCUEIQSEJIXXUXNRZETBSOSMIACKPVFCPYBZEPGHYSZQVQBOGTGQVOAWVMAJYEHUEXQOVCVYGKGDXKRFFJUTEKORFPRABYTUHMBCRIQTOGEIWDVWFOYAANVTNMWVHMTOJUMDZDSIKUDRKLNRUJECRAINBPCPGWF");
    msg.plan_eta = -1150676917;
    msg.plan_progress = 0.8880163464799233;
    msg.man_id.assign("RFEYTICEQJBSPJKRVZVNVLKYOP");
    msg.man_type = 19156U;
    msg.man_eta = -1602816774;
    msg.last_outcome = 184U;

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
    msg.setTimeStamp(0.3128729564632735);
    msg.setSource(38916U);
    msg.setSourceEntity(87U);
    msg.setDestination(20376U);
    msg.setDestinationEntity(71U);
    msg.state = 152U;
    msg.plan_id.assign("BGZSXAHVZIIMCJQQTIWZUWLSWNPJBDWJOIXHRYKAZRJCFSSDUZOBMXVCAHAJIOOEGWHJZPYPQGAZEOMYEZPNNENRWEKTIOSMKNLVCEUPRGMTYIYHWQNMRAGFPKDGYHQUYBSIZUKFQNDJAUBAXPRRWPNFESSJLILLFTVJCDEVFGNULKDBULXLGTOAHBDDXDVBOUVVXCXLURQBKBPCEMMRQIOHFEHXPGFTNKOQMRXKLCTW");
    msg.plan_eta = 778256494;
    msg.plan_progress = 0.1117060409198094;
    msg.man_id.assign("PLTMHYNHCLARLLIRWAVFLLLPJOBGKEZRMNMTWFFJZBFMGCBOGPQWFEKKCPNVTXHERWVKIDUAEPGGQIVOCYPQBJGDXDKSGNBYVBEBGUXKIMZSZQRBYXYKDWOZXOLRQOJEDSSREWEXQKNTMTWUCSZXHSOSRIXMCNYACKGHWLKTJZZATBDFFHMUXXEPFPJACRUTVZUYQSMHDVJAUIPQYTSJIAAVCNGOF");
    msg.man_type = 33386U;
    msg.man_eta = -887921555;
    msg.last_outcome = 76U;

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
    msg.setTimeStamp(0.06929413645735749);
    msg.setSource(10476U);
    msg.setSourceEntity(153U);
    msg.setDestination(50675U);
    msg.setDestinationEntity(233U);
    msg.state = 236U;
    msg.plan_id.assign("ALNDCTPVTAAQSYKEOMVYRGSURMFJIHHSOKEGHVMEXTGOOYGKDGUHJDPCGYQABSXGMZAPPOFJLB");
    msg.plan_eta = 967209323;
    msg.plan_progress = 0.6409260491824559;
    msg.man_id.assign("FQSBUMVQTSBKRSCMLWOUTPTMMDYQEOGJDIYBOEJDFJCHFORNNTZIYBJDFDIULEECJPXXJSHWFKMGYVEDYUQVLXCWJMVBPQZOPGPFLJIWKOVBOIZVHXWIMWPHSGTZBCYNLRDEWKPHAHPYBVCNTVGFAEZHNWMGUUHRHXYPTKYRITAJTSIXRAUNEANUVOOWCINGQMEJXGKQFFATXQWZQHCYLQBCKNNLVEZRRCZOIBRSARASGAXXZKFLKMPLKGLDUU");
    msg.man_type = 26794U;
    msg.man_eta = 1678206768;
    msg.last_outcome = 34U;

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
    msg.setTimeStamp(0.16612822381250325);
    msg.setSource(20658U);
    msg.setSourceEntity(140U);
    msg.setDestination(5515U);
    msg.setDestinationEntity(227U);
    msg.name.assign("JPONHEPPKPWKGOHBRGNXDFNQSWFJLYTCNUVSMQYIOOCWSXPUVWTIEFAJECLSRIKKRKXJVJZCVIBODHPTSKPWXYESVECQIAQVYUJVFEEQNUBDODFYOKNQLCLBEFQLXAWKBRGDPZTJSOZWZHLSYTWDWGISJTULGMGUFRTAEHAMZHBZATHUTBJQHMYOFXYAHVQX");
    msg.value.assign("BRHCYKNQNLKRHCGLDIXJCPNAGMFJSXTWAWZIIOUQVRFSIZPDXTWHPENR");
    msg.type = 238U;
    msg.access = 155U;

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
    msg.setTimeStamp(0.3382747324702582);
    msg.setSource(44407U);
    msg.setSourceEntity(98U);
    msg.setDestination(61725U);
    msg.setDestinationEntity(65U);
    msg.name.assign("SXFTIYTICORVHQUDRUVPYBQMAADJOJCVLFIQRMSPAEHUOGDSAWFFNSLTBZRPEPCJOJHXCOLDIUNZBWVLPH");
    msg.value.assign("UEMAXRNFRWVZCRZYBKYXFKEEOPXJAHEOTYAKXNLMWDUTYUCTALZELEGKIMIPYWCANWGPFBRAPPR");
    msg.type = 195U;
    msg.access = 193U;

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
    msg.setTimeStamp(0.40988532650423837);
    msg.setSource(29057U);
    msg.setSourceEntity(123U);
    msg.setDestination(9125U);
    msg.setDestinationEntity(2U);
    msg.name.assign("EWJLWFXAEYMQPPOHIRFMKFRKCMTUMSMXG");
    msg.value.assign("WXHXRJXMMDQLRLHLDVGGR");
    msg.type = 158U;
    msg.access = 189U;

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
    msg.setTimeStamp(0.41266988950637074);
    msg.setSource(48217U);
    msg.setSourceEntity(40U);
    msg.setDestination(16857U);
    msg.setDestinationEntity(132U);
    msg.cmd = 246U;
    msg.op = 165U;
    msg.plan_id.assign("UMTWJMYIHVEHPBCIAKJEMCKTWJXHGQLFUTXLZAFZEPNCTSDFPQYQKCEEPFMRFESTIBNZFHUVSQSCOMVMNUVOXYGSWWYNZZTAKXZXREHSHGRKAPPLRIYTPGVDOUGISXGWAKIBNQPLG");
    msg.params.assign("QJBJBVPOCVAUNSUMXEKMJDPXYWTIICUVJYCBQHBSWVHYWRSPVSLWXDRSZKIDGGHIGUDPRORKSUSGVPGTZZOJMXLQLFELAJCUPTEWJMEZFXOZQLKKYXSCSHFYYTHQ");

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
    msg.setTimeStamp(0.584345456821173);
    msg.setSource(57910U);
    msg.setSourceEntity(16U);
    msg.setDestination(25474U);
    msg.setDestinationEntity(214U);
    msg.cmd = 90U;
    msg.op = 210U;
    msg.plan_id.assign("DWBKSHDWLHQJCUJRPXFMFUFDNEMTKPDRMTCSNISWVWPRYJJQPQNLVBUGTNLEVMWSYTTIUROBOGFBKLOVZAAZUPYHAGIHDYPCNULTTPWX");
    msg.params.assign("NXIIMTONTYMZAISPZSQIXLLCCZEGVKCRRHDPT");

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
    msg.setTimeStamp(0.3254337685045767);
    msg.setSource(4077U);
    msg.setSourceEntity(37U);
    msg.setDestination(31778U);
    msg.setDestinationEntity(236U);
    msg.cmd = 194U;
    msg.op = 189U;
    msg.plan_id.assign("MCJCWXPRNVTPRHORKBVTIOUWLKGTHUTBAQJMPIBYJZSLBKIEATACNAHYUITYMVXTFGRVDEIUNZXPKPDZGWFOBZQVATYYFYXDEYQACGEBVQTELWEMWFWLWLRKZURPGRXZAXDKHJFSRFKCHVWOMWJQCF");
    msg.params.assign("TDIWBRLUZDDCCFKEQX");

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
    msg.setTimeStamp(0.19104452097685543);
    msg.setSource(46224U);
    msg.setSourceEntity(53U);
    msg.setDestination(56723U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("NRZVTBZSTTRPVSXKEJGGYBSDHBUG");
    msg.op = 88U;
    msg.lat = 0.8328903244383049;
    msg.lon = 0.012894644297402835;
    msg.height = 0.4096903522837064;
    msg.x = 0.47145359476911697;
    msg.y = 0.053721594643494686;
    msg.z = 0.5052808900322425;
    msg.phi = 0.2660453995075721;
    msg.theta = 0.02614539651866188;
    msg.psi = 0.8442312888614918;
    msg.vx = 0.9365318443116868;
    msg.vy = 0.8849433660532087;
    msg.vz = 0.700105921596526;
    msg.p = 0.11888485171510388;
    msg.q = 0.10293332862425808;
    msg.r = 0.06513196194390392;
    msg.svx = 0.9030477469294894;
    msg.svy = 0.1613920060253189;
    msg.svz = 0.5493597805024284;

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
    msg.setTimeStamp(0.8772065945142568);
    msg.setSource(37235U);
    msg.setSourceEntity(145U);
    msg.setDestination(48551U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("XFVSLTGWTMVTKOOKDAPMDQZVAISGEVJFJTWNQYXHHLXXFYJDSOEHQRLPBBSNMDZBRBPXTMHWZJLZXOSITHITPOGKZUBCBHNDAFAPOKYNJFCUUPAMNHEGJOYZP");
    msg.op = 208U;
    msg.lat = 0.01202719618367143;
    msg.lon = 0.4639448602611791;
    msg.height = 0.6641076548324544;
    msg.x = 0.9483698607154958;
    msg.y = 0.33102493459113425;
    msg.z = 0.8206031128243334;
    msg.phi = 0.8956554517538196;
    msg.theta = 0.24221025805162777;
    msg.psi = 0.4144785460348548;
    msg.vx = 0.4067468669350527;
    msg.vy = 0.3992868758831434;
    msg.vz = 0.6111828368861885;
    msg.p = 0.6324523535871085;
    msg.q = 0.030061821557491708;
    msg.r = 0.17854855716894447;
    msg.svx = 0.19683399433534343;
    msg.svy = 0.6886253140797913;
    msg.svz = 0.9850923592652735;

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
    msg.setTimeStamp(0.12369296885767922);
    msg.setSource(9858U);
    msg.setSourceEntity(209U);
    msg.setDestination(50930U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("FXRWPUWVEIMNENZXJZDVQQLMNFXWCVHADZIEXBXZZYUEJTQOGVEIGHBMOSNGYRYWAZHFNKJUHAQYDWRGRJORGJDIGRUTLPFMVTYEAMMNVPDDZSTQCYFNKAO");
    msg.op = 180U;
    msg.lat = 0.11271750671520941;
    msg.lon = 0.6089630699088519;
    msg.height = 0.8416009779293676;
    msg.x = 0.5963532590754431;
    msg.y = 0.05943747320006021;
    msg.z = 0.4083760729016711;
    msg.phi = 0.23671578209314525;
    msg.theta = 0.22408104395544548;
    msg.psi = 0.31880983351017544;
    msg.vx = 0.14907973129447905;
    msg.vy = 0.2258784878513037;
    msg.vz = 0.18348233311344453;
    msg.p = 0.9225290731766187;
    msg.q = 0.7034614364021373;
    msg.r = 0.4860297795694458;
    msg.svx = 0.5629504468197012;
    msg.svy = 0.5136586704633064;
    msg.svz = 0.17353425911856135;

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
    msg.setTimeStamp(0.8101284903019369);
    msg.setSource(3256U);
    msg.setSourceEntity(240U);
    msg.setDestination(64515U);
    msg.setDestinationEntity(172U);
    msg.plan_id.assign("PYMFZLIHOQXTXJYHFJVLLZNKJPECENISWVOBJXZCJKBYEDWYNYJUQGVSLVXYPQXQSXUURDVLJNHGWAEIJQHTQXSVZPQIYQBUMHCANBMTUCTZKSBZHZLTKOMPBOSTIFXPREFKOWANSNOPUMMZDUDCYOPKCEKRCHDNRURQAVZNPLHGMBRWRMLSAACFVNTDD");
    msg.type = 121U;
    msg.properties = 176U;
    msg.durations.assign("CXEANISOVOFVZBFUMQEKWRGEPAKRTKNAWICSIBXFKFDHPQUEZVXITTQGVLYKBSBGBJDIIEQOIRZWLUARJCOGMCDSUVZRGQCUGUXNZNQTOTYLLZBNOLSYJKQHBDWFEZTKTLUWXAUMBVZOLFMIMIWQGPJYAWKNPDYWMVYJOEXRWAFEECSAMCZAFTJHEYTXFPUPXSOBGZHRPKUPPH");
    msg.distances.assign("LGITHKYVPQLOCNUXSFNRRKZJVPSLJJBCJYMDQDHLYNJOFTRIOHVSKFPWGSL");
    msg.actions.assign("EBADJXTZFAENAUYCGEKYVGMXJKCJGRWWNDHXITUJRPSYIOFVVGMWQVDYCDGMOLDGIPLZSSNQJTLPWBARDZOFOXDUKTEUUKKFUIALUTKJFVNKICAPTOTBQMAWEPXLMZFQWIHQMREYPAOCYWOGOHPEISW");
    msg.fuel.assign("WPMCNFLYIRXFDJFYEURSIRQKUGBXXUDOQHMJECVXLJXIOWFNJQHBCAGJVVCMEVLJYXTPEVQZITRTSFVEDCPWVFYSMAZUXKYGIJOCCEIMPNSEWHADSOTBYYFHXKCDDIDPNPZBCDRWWRLDCRQGEJHLSEZZRZALVOXKNBPZYKULJJBPHBHOTSGTBKUHQOUMZAA");

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
    msg.setTimeStamp(0.6203224225615621);
    msg.setSource(16693U);
    msg.setSourceEntity(190U);
    msg.setDestination(25324U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("UBMLGCUCBZNSGMVHCMZQFOVLFWMEITXFDGHTZCSHZQZHNUBWQITADJRMPDWYNRECQSKXSFNPLPAZOSUDSAAVFXPVTOTTSQAAMSROISNBXKTUIEDBWXGLDFGDYWTWCJWLRPQXXGCGBYOTBKENFXYBZLYLGRAIYDDARQSOHQBMZPNZKFCRKVCWHNWRJJLBKNEYJOKRMIAKVLUVGEJEU");
    msg.type = 217U;
    msg.properties = 108U;
    msg.durations.assign("EDWKCESKDLWOWMNFHAPUSMYVGCGINUGDZTXXJFNUGTRAPWHGGQGYLLLBDIWDKXVJTXBAUCAEXJBSVKBQVCLGEMFNOSYQINKIGJATKRLUQFAHPRCBZCKXRBJNOZZJPIMNFZAFWVTQNPSQLWPZRDOMONNRTYZXUWDODYMBKRQPGOFKCKFXRJETOCIPQDSVETEDJJTEHQERSSLVJUOUBMPVBOYSAHHVLQHXYUIMZYMLZXASIE");
    msg.distances.assign("LRBAQHTIGXRUZLZO");
    msg.actions.assign("JXIMVGKYKXPLPFQCWDIEULRIFTJOPTBDHIFFMAKPPJJWYXQMAJGEZJVEHAHEUOZVDNBMADXBXKDETPGHCKVFWTJNMOXSYRTMCJCVYAOBKZOFBV");
    msg.fuel.assign("HSXWXJQMZOSHOJVXNEOIXSFARKTHWTGCODTYONBPCFYPOUUATAKQWLFKNRNSYSKCASAMPSBKLBTMDJIINLIOVIEGDLQQGDBXYZGPFDGPUSRCMAMACRQRRWQJCWVEDLOMNGZJNYVRRELXYZFKGPYFNUGUEUWUWKFVPCZLOLGZTYZWXNDVUCEBPBRYKRKVAHBBEOUTJITJCIIHTHHYEPZSWCIDNQWIHKBSLQJAVJXFEFQXMTHDA");

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
    msg.setTimeStamp(0.1449090107326122);
    msg.setSource(7771U);
    msg.setSourceEntity(251U);
    msg.setDestination(3847U);
    msg.setDestinationEntity(216U);
    msg.plan_id.assign("ZZHWZULHVAAEJLTTCRDNUTTXFQOXLVHGJZAAPQACUHWFMRFFSDXOJRNVOQOPHYKMSUHTGSNCPLHTHGRNWYKAJDMSKFERYMURLEGSXWNDKDCYQBCZEIZDNOLBGFIIJKUIGCPCYBVQMEXOYVFOPFSXCYMJGFZLYYWZIBZHZVJKDDRAEISDATVQXGDEULIWPPTVEUBBXXJIQWNSKXWNPBMLIMJSUKNKCQIOJQQFEUBNOKPWHVRRGRATPEMSOBLVCG");
    msg.type = 64U;
    msg.properties = 45U;
    msg.durations.assign("MOYYSANQZQXQHEK");
    msg.distances.assign("HEBQUMAXYCVPILILNYZYNFAMMOTGKJWEIGTULFMVDPAEHLANDQLYGUMIVQDFNSBPENTTAOMRMQFHPCDZOGYHXTMCJZQRKRCHFWXUIJDDCFCOOCOYRXPCKKRSFWXVJPRRRBYBWOWBJOXCLNBFVSXTTJXBWXXWFCZKGRHZAKBHPSRJZIIEMYJDWKA");
    msg.actions.assign("IGMXTYJBUPLTBUHCECEBPJUU");
    msg.fuel.assign("TRNHSJUVZEVSTRGDRVFUMYLKWUAFBREOLZFJNZXDQUBIGOHAJVPOBIUHHJBXDNDDZYPFMLZWYGXKJRQUPDSYKAPPCZENTRJNOJOYWGJDWGTXMCWBMCCQTQGAIMRKZOUSULNCHTIODAPTGMCTBBSOFSFYMFYMLGQZWQHTYMFAWHXWKGUKXECEOAHEKRKRVHISJNNWHSBLYERQSVIQBECIACLBTFLIKW");

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
    msg.setTimeStamp(0.5981356266458105);
    msg.setSource(34112U);
    msg.setSourceEntity(73U);
    msg.setDestination(17816U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.14740166630227713;
    msg.lon = 0.7983487089060958;
    msg.depth = 0.4362714899585459;
    msg.roll = 0.46651630021517254;
    msg.pitch = 0.7937272373995946;
    msg.yaw = 0.7014065080529079;
    msg.rcp_time = 0.4678393864963858;
    msg.sid.assign("VTJLTVOMMNCMB");
    msg.s_type = 46U;

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
    msg.setTimeStamp(0.29695847918538465);
    msg.setSource(52731U);
    msg.setSourceEntity(40U);
    msg.setDestination(7912U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.2868022539688;
    msg.lon = 0.030354671071763595;
    msg.depth = 0.8406862504659659;
    msg.roll = 0.13918339919573275;
    msg.pitch = 0.5042847649903687;
    msg.yaw = 0.5620605958028132;
    msg.rcp_time = 0.8937780891719557;
    msg.sid.assign("AVQMHJJBKNOMRPAENYICPPJAADMOSERHWJYJFAFNLCFXLYZMSDEWLOLVVBTUXLXHZVPDYKXQWIYREUMTZTKJGTOEWZSXHSTUQE");
    msg.s_type = 105U;

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
    msg.setTimeStamp(0.36615824205898706);
    msg.setSource(43804U);
    msg.setSourceEntity(4U);
    msg.setDestination(17091U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.5412309825050919;
    msg.lon = 0.6800250286165546;
    msg.depth = 0.5092471025283005;
    msg.roll = 0.5844650392704991;
    msg.pitch = 0.6729626702119222;
    msg.yaw = 0.029726528107947736;
    msg.rcp_time = 0.5381157703739079;
    msg.sid.assign("YDIUMLZXLFNZJAMWYAKSFGPPHTITGMOBEEVQDZTCCEYJRHREJCGDOEXGWQNETPYIKIJTVHYJXKGSCSJUYMCZBQEYDLNUXKBFZCKNGFBRJFSTXALHULXXKWXZUHKWWVFVNGJHRWQUKCPISNHDDVNPRCWOGZCPATMOSBWQKXQLHYPFTIFGMOQASVPSAJVELOKDXZEAYIIOSQVPZBTRNIQOLBCNTAJMDUOFPHYAOLDIBGLBMUAREVVURRZMUM");
    msg.s_type = 92U;

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
    msg.setTimeStamp(0.42856911807343745);
    msg.setSource(50083U);
    msg.setSourceEntity(0U);
    msg.setDestination(19943U);
    msg.setDestinationEntity(99U);
    msg.id.assign("SSFKYMIFGTMZTQVFIQUWXCNBMJYRAICWFLGWNOIDCTVSJEIMGQKTNQGAFJLIZQEADPYNIAFECNWKDOCGNBZEIDDHUWLSEBHJWPPSQLRHTOYBZLMBXREBKRPXDXUJLJMCICSRESHFOQVZUHXWVIZPBGYPWRTMOGBSJHVAOZMHATNVZLMXUPZRDXKPCHKGDVVLDUTBUQTFJOFWUEKHXVPQRJQGELGURBYA");
    msg.sensor_class.assign("TWDSNHAMPFPCRDOKGXJTCLLZDOOTKHBGYSFJQWXXJBJYXUPVIHPAYODIXARHXEATMGXCEUHEBCSJEIYESKKUQKLIGOMFNOBJMNUTRFLVICUWEZXVBCJSFXVJNKXLCWQYVLMTWIRYKMMDQWHPBPDBYSAIDGRHGZKPUNKZKTMHZQOESFYASEZPLPTABNPHVDVFQNZVBIUWRDJMZAFREVFSRWAWNOGYGZNC");
    msg.lat = 0.6684406119148475;
    msg.lon = 0.9009180354964641;
    msg.alt = 0.7951800911624128;
    msg.heading = 0.3575456029569486;
    msg.data.assign("HUMXSPLOEULGDHPVAIYOHPKQHDWPZUCUJKUWVKBHQPTMAYJRMTQSYBVBLGSABXIVIYSTUKQGWORMGVKWNEMSGTNEZANDRYFKCZGYPBOFKEDLNOQPWXUKPGDJCAXZJIIQCUMFWQTXHZBDYXZCWYTZRGQWQGBOZNFSJVWLBTEHDXJQETMCOUXVLXRFNLFJDBEIVRFNFJDHECHMANSIHLOKGEJZYCOAZIFNDRMRFSAS");

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
    msg.setTimeStamp(0.7688304630636074);
    msg.setSource(43610U);
    msg.setSourceEntity(49U);
    msg.setDestination(16666U);
    msg.setDestinationEntity(112U);
    msg.id.assign("PTDFLUNQQBIDZGVRMJETVBPSPKNOIKGGKWNVZHV");
    msg.sensor_class.assign("YLASBBZALLPKKFUMGDQDKAODHLRTQVVCMTDIBNCXCZBHGCHBCYWGXEHJHKGPGIPWFPLXTTHBUVAEKXPQROAWOYXWLSXNCQNCKLPIKNZGESUQWVGZHTJYEDQTOCHUQUIGJUWMQVNOMEIHRIJUBOCXRWMVFEWJZNBOQRADDYZKFZEPPZSUXSJSFFBOTAYTFLXFAYJXNMEPFJWEZRPZIMMIIUVJSAJQRCSIGDLSRKOEYGFWNORM");
    msg.lat = 0.39596075464897174;
    msg.lon = 0.5177104785067949;
    msg.alt = 0.2048066045194873;
    msg.heading = 0.4734616896244159;
    msg.data.assign("CYOMGXBYJQITLQHRJWKPHGLZHVWUOKNSITZVJEQSOAELIZVKBXGEHONYKXTPBABTNBDKPNVPMDZXOYXBDLECCFIZJGDKPSWR");

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
    msg.setTimeStamp(0.18365415412771868);
    msg.setSource(12113U);
    msg.setSourceEntity(61U);
    msg.setDestination(24055U);
    msg.setDestinationEntity(159U);
    msg.id.assign("XLAPUSXKFGNAFIFLTZAPTOHLFFWPGKZTTTRFINSLTKDEVTGWFMIYUUAQBCSUOJXCEVURTHPYSXVPAMBHHRPUOSXOSEQNYRVZTVARQBWDJNVSRBEDMMQQWLYGIIVXVNECMURRSDHDBHGBKRCFEBLBXNZCOPKHPIJHRVJMWXYZOSCJZFGEQMVJEWCCNDWZZZDQTCLGELGM");
    msg.sensor_class.assign("FURQYTXVINXSFUICAACJOYXHPMUSIVMRYELMDHSRWOWNWAVLYTQXUWPSRFZOYPYSYQNSHHAGDQBFCUCNRZQTDTGHZFPJRWOMHPD");
    msg.lat = 0.516839826444712;
    msg.lon = 0.7101330059116463;
    msg.alt = 0.49407675282822705;
    msg.heading = 0.9437959871284849;
    msg.data.assign("SFRLQGHSFLMTXTWJHWAAPJTOJPWLIQIDGCCBOYNFUMHUKNASOWVWEOVCXBMBQHLDUUVWOPAVXNWEGKCLQOTSSYRTNFKLNFCYTCAPXKSZQGMMVEGKQEIODQYFSZVWRSADUDTPRZIBIKZELDCM");

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
    msg.setTimeStamp(0.49110457046486844);
    msg.setSource(11396U);
    msg.setSourceEntity(211U);
    msg.setDestination(33886U);
    msg.setDestinationEntity(24U);
    msg.id.assign("VSFQCPRMBFDSJSLKPJOSAKMBFWPVMHKZIKTAXIJGPKLIASLGMFQVDWTZDCVEAMWIXOBNUDUYIGKJPVQASUHUEXBKPDBGWHXNHRQRCISPLJFUNYRECOXMTQMDYSIOFQRZLMAYZEJZQGUOFRVLYBLDS");

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
    msg.setTimeStamp(0.5575762725141147);
    msg.setSource(24599U);
    msg.setSourceEntity(120U);
    msg.setDestination(50995U);
    msg.setDestinationEntity(128U);
    msg.id.assign("NDJSAQJVDOHGUZOIPH");

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
    msg.setTimeStamp(0.7439937729894435);
    msg.setSource(39287U);
    msg.setSourceEntity(81U);
    msg.setDestination(53015U);
    msg.setDestinationEntity(43U);
    msg.id.assign("WHEYPWZSGKXGXWXVQUGOIJBZREYLNNTTUYSUNIJKTYMWTSQBXBBHABEEBGOAATMKCTPEWBPWPCWOUBHSYXNDVHWZURJBRAQKCOUFZKCHVGCLOGYVDFJLWIULFHDMUEDTHYIFAZJNADLNDTNVMLJZKIOQQPLAOERGDHGVKEFYPFRCTZUKIEXSPRVS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HZCOFYQBDUSHWIRFFWUKCSDLZFPODOGVWJGRNDKXYPDHIOTCHTNGCRTBRPIPBZGIJASXJEEQCBWTWXNRLZTMAPMWQIVLWLAXAWUQBFQDVADYGSEBCBJNIRAVKLGFWYKNLUJNWZAHLTLUTVLXXNOAKERPLFTZJVXJFOVSHGDOMBVMEMXMMNBPDMZJKDOTSREUPIHCUFMEQZHHEQQYCKENTYZGCPZCAIIA");
    tmp_msg_0.feature_type = 228U;
    tmp_msg_0.rgb_red = 187U;
    tmp_msg_0.rgb_green = 234U;
    tmp_msg_0.rgb_blue = 184U;
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
    msg.setTimeStamp(0.30578388097548714);
    msg.setSource(51094U);
    msg.setSourceEntity(177U);
    msg.setDestination(22811U);
    msg.setDestinationEntity(172U);
    msg.id.assign("UWYDFEDBWAZCYFWKGNEZSOXFXMDCNFABQRLRHSIINZUGMYJHLPZJOEHHYGVYQRZDWDMWMTJLGNOWDBSBBODGQFERTXKDVJEPXBROQKWCVMPAASACKUUOSDFLELCOUVVLWGQLKIAGYNMZIVIUYRJNGZIVPAEYTRCJOSAHZK");
    msg.feature_type = 25U;
    msg.rgb_red = 21U;
    msg.rgb_green = 57U;
    msg.rgb_blue = 53U;

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
    msg.setTimeStamp(0.6040296231470251);
    msg.setSource(62812U);
    msg.setSourceEntity(194U);
    msg.setDestination(28028U);
    msg.setDestinationEntity(233U);
    msg.id.assign("XLXOKKYLEWYPFSIIPAOBJDHIQGDUQRLZUEABSEGLHUFADBJEOPFXXCQQSMXVAJEMBPZBNNVPUYBMWJPPBWZL");
    msg.feature_type = 112U;
    msg.rgb_red = 31U;
    msg.rgb_green = 137U;
    msg.rgb_blue = 205U;

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
    msg.setTimeStamp(0.3534372545401726);
    msg.setSource(866U);
    msg.setSourceEntity(76U);
    msg.setDestination(22545U);
    msg.setDestinationEntity(191U);
    msg.id.assign("PCONSIDFWLVLAUTIYLDXNTDCWQKMFQEAQHZTMZRTZWZYYGMVRGUGVFFXKYNHSDOKSHVMNYAXIJAOCTTNKVFVHXUDABSUEBSBRMGLBHMOHGOEJDMVWXQHSBVAIMVHAXPAYWUFRCUSCKCAPBFOQCEQJBLOCGKJPPWYLPEDQHXOGBYUTVIFQLZGRTLMYAEOKBSJJUEEDWIZKUEQYIIPBTPRZWJREJD");
    msg.feature_type = 83U;
    msg.rgb_red = 25U;
    msg.rgb_green = 139U;
    msg.rgb_blue = 117U;

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
    msg.setTimeStamp(0.0024596310155199363);
    msg.setSource(8715U);
    msg.setSourceEntity(242U);
    msg.setDestination(1926U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.3240179998626732;
    msg.lon = 0.7651881850112517;
    msg.alt = 0.3498050459462274;

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
    msg.setTimeStamp(0.5462768658421603);
    msg.setSource(35242U);
    msg.setSourceEntity(25U);
    msg.setDestination(53045U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.963320828343109;
    msg.lon = 0.5704117442393055;
    msg.alt = 0.6099145070682006;

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
    msg.setTimeStamp(0.9474227120961495);
    msg.setSource(16273U);
    msg.setSourceEntity(158U);
    msg.setDestination(58087U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.1945575956343052;
    msg.lon = 0.5135140908518099;
    msg.alt = 0.6933622636740049;

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
    msg.setTimeStamp(0.3716022777379081);
    msg.setSource(33173U);
    msg.setSourceEntity(18U);
    msg.setDestination(1780U);
    msg.setDestinationEntity(251U);
    msg.type = 93U;
    msg.id.assign("SQVJVLAYRFWJHXNCUXBDKGNKXMGJTVVKWEYDFPCOMKNLQQVFEIZBTRJUDNWZDKMPAMWTTBIVGDAIERSXBHIPCBNZTTMFYPMDICYEPQPWPTSRRBKZAWOGEDMDTDVOZXNOYPAHGULCGSOJHL");
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("LTIMFAEXOTJVKVUURQEYIPSGBODCJAFGRSNWJIDTFBFALGAQXQOXWRVYNASLMUZNCXHAPWRGNOUMXSMVTZCEJMPIDUTPMMQHQUNPMGMPKIQFXOBORNCSJDWIZRULGRBESFOUAKUCHSQTZQXPBCFXYPKIGITHWDPCLZNLDEYWASLVVGR");
    tmp_msg_0.value = 109U;
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
    msg.setTimeStamp(0.8168513405502307);
    msg.setSource(25930U);
    msg.setSourceEntity(201U);
    msg.setDestination(37657U);
    msg.setDestinationEntity(183U);
    msg.type = 246U;
    msg.id.assign("JAFMHZJPIHIREMLXWBQLSUXEFCV");
    IMC::SessionStatus tmp_msg_0;
    tmp_msg_0.sessid = 1046326330U;
    tmp_msg_0.status = 126U;
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
    msg.setTimeStamp(0.6362082495445102);
    msg.setSource(37844U);
    msg.setSourceEntity(155U);
    msg.setDestination(2444U);
    msg.setDestinationEntity(124U);
    msg.type = 249U;
    msg.id.assign("WFLUPRYZQEMUZTDCVBHOQVQYFMRDIFPXKCAJXLIBBRNESWJLAAXKCNKSTJMPSMOKCRBEVKMSREKAXDNUOQQ");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("OBHPMYTTTLPJCPONNRJQMFZXELQXWLZEMMWQKKAGKMIXUAVXQHUBYMPXGRHQWSGQUMKZBVFIKYUWDXIPLKVCMNYDLZCJCHAAHVSTACOHLUGNHKXWXCWPYIYQPGGTILTPBZRNNGCDWNGSDGHSSLDEHMNXDUIWTXBKFWECRF");
    tmp_msg_0.timeout = 31362U;
    tmp_msg_0.contents.assign("LWOXAXFFANZAHGVVJHCQLLHSFFQIBBNPURPUHDDYIBLKSVYFBSITWFUPBOGNCPHVCWNJZRFMMVDKYIKYTITDMGXDSTARVTTHIRMQYANSJNEPVLKRBSQFGOWTQREPAYCKCVQESZXIJUGJIKQLVSXENCWASMEKCMCNKETZRLEUNOPYOGJDTZGWMJEDUQZXNWOAZFCTGEZBVWDZOUHCOHAPUOKYGWUIJDBDPPHLXQLRXFMYBEHBXOYKJWX");
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
    msg.setTimeStamp(0.6472712497345915);
    msg.setSource(44551U);
    msg.setSourceEntity(157U);
    msg.setDestination(32957U);
    msg.setDestinationEntity(91U);
    msg.localname.assign("SJSSHALSDITIZDKOTXXVNVYPCCSHLEYLRJCXFBETTKGEHPUNVTQDCUJQDUKLERRWMQYZFROYINTDSBAGPEMVVWGHXFUGIRZWWDMRMJRFCUHUWXNEBTPQBJTAOQLXWYEBIGZFBHSFFJZEPMCDGKGYPYLCENGPCJHNUZBFKIKWZWUIWONOMUXXGFMLQAHQXOLEWJVKYODAOCAVBNAHJSMMIXVUAOYVNKLR");

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
    msg.setTimeStamp(0.5291757791844306);
    msg.setSource(31320U);
    msg.setSourceEntity(174U);
    msg.setDestination(41878U);
    msg.setDestinationEntity(138U);
    msg.localname.assign("BRLADDYTZUNYHXEMUNKQCCFUAIWJAVSBGFVPESXCKIAFNNKQZGZVHJJPWUWIIXLBMCDGIGIDISKRZVWSZHMYVIXTHYXERQOLWVO");

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
    msg.setTimeStamp(0.21958488065724968);
    msg.setSource(20882U);
    msg.setSourceEntity(247U);
    msg.setDestination(40224U);
    msg.setDestinationEntity(62U);
    msg.localname.assign("OTOMOTJZUTVQNRDXIRVMLRDWUYHZKZEWLYWMZAMBWXSAQXHNIGMUEYQHHPHBLOTSUFCFWMKGNMSUOCCMG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SGAVERFOGIDBTRCQSYIPFUBXRTGFCQOELZPTFOJGYHQJCHSYVRIYFCKFVQEKZNHZTLVFBHSJWKWNSAZPNUUQUCPGXMFTJZPDQAJOZXDVPUTZWDEDETSKFHYNVEZIXMXAYSXTIPLQHECSNUDGJIUOPXBOMPIOHBPYQGTVWUVLIVBRXSBJZLKDOOAMEMGHBQNLJYJRLWXRMWUCWWENRTYLFAMEDKNLRALUAWNSKOCMBRYBGJKMHGQCHWNKIZVACK");
    tmp_msg_0.sys_type = 205U;
    tmp_msg_0.owner = 28274U;
    tmp_msg_0.lat = 0.26773594266298795;
    tmp_msg_0.lon = 0.6243940923942418;
    tmp_msg_0.height = 0.6423605513798474;
    tmp_msg_0.services.assign("HVJLJNOFUHRLXPHKVLFELVYZGVHSTFMNOGZCEDLBFFSDQZBGRHSKJTKAFCTHEBTUXYCCKVPBITHOVTEUKXBGAZTEEXFDZRKIFCAYXMWILDYDJAZWBCQMKCHXERXWMENJQIOXVPFEDRZSISIRGATCDUBQAMMKP");
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
    msg.setTimeStamp(0.04067264706470386);
    msg.setSource(12607U);
    msg.setSourceEntity(77U);
    msg.setDestination(28726U);
    msg.setDestinationEntity(191U);
    msg.timeline.assign("SDJRRQGJEWYLXDIIBDWIWUYKLRIIDVXJCMZIWABHJKMFSJFMEQQIPKVBEUCHSWGYETERELKPQQZNZZTCWCNKPUFUIDXAVPYLVANXMFEHTKTTLNFSAOEMBGJSGCTMCEMOGFDHUXXBGHRMNUZZJOTKHBZHPKJQTNBAHDUVSMNPRYGHMWQEYQOWDCANZQNUOWDHLYRNOJIVZXUGYAFX");
    msg.predicate.assign("XWBXFAGZPXOUVQYRMGDKYQEMUHBDGPCNLDSJUIDKCQFICASTRAKCDOARVBOJMEOJREYZXLSGPYKQTNKZUNPVZGSFSNJOKLQMVAPMUGRDVCZPZOTAQUUZSDPEIVIBFOWLFEJWHTEPCHKHWQRWKDWRNLBFYDIWEFJNXKAWQTOFIRJRSBHRBWMIDLVUHTHHIEJSIFBTPLVMHJYXKHMZMNYPGZOWXZEBECSNGXFNILQUOTGLBYC");
    msg.attributes.assign("WZONVMFAVWEYDJVFIAYDYCCJXWZVIRBRNJMLOTGLPSLLMRNRHPKGKLVKOCESOFXGPEUCETJUQWDZAIFBGAFJVWHSOHUEIQSNJCHRJXBQRZMFKATLDHKYWIDSMXCTXMHBJIEFICKODBSNWSBRYGAKJIYDZXUPNEKT");

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
    msg.setTimeStamp(0.5190153899117638);
    msg.setSource(3546U);
    msg.setSourceEntity(203U);
    msg.setDestination(3801U);
    msg.setDestinationEntity(97U);
    msg.timeline.assign("MAAXGMANZBLNISLXWBQRHZUSXCQMRTDBYPYAFDXZFFCLSUKPYHVZJLWEIUGCWYVXGORXJCCMHEPJHBFWDVPIRZQK");
    msg.predicate.assign("UBDFHXPUNHZUVBRIDTLPLLNWDAMUYIFEQJCFFJXNZANKPPGSUTBCIEEOCKSRQWOJGGRGCROGPRBPQKPHDUQOSIKZYMQXV");
    msg.attributes.assign("XBOJDRIPFADYTEIRIORRQJMBADPOVTUQBUYMWVDWHPOGEBJLFPUOEWQGORZYXMOTZUZPFELXMDVKTRSIVPMSASKFSFGQXQCUEKMKHKAYBZKIWZNTBDETXDAVGCTDKASLWUBYUWGTNXGBHNNJFDLQNHSFJMGJFQVMJIHCYQEPWECHRWVJQFICHLRXZNCLBNZCACNAKUAP");

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
    msg.setTimeStamp(0.7206721069352362);
    msg.setSource(22626U);
    msg.setSourceEntity(109U);
    msg.setDestination(15916U);
    msg.setDestinationEntity(214U);
    msg.timeline.assign("MDWRLIYGPJEPNGGZODZZPHMMRXXYBYBFMRXJXWXKIWISHIGSFOKOOOBMCLPVTEADHUEDHJODBHDFBMEWYCGNEUBKEFACNKLGYULTGLACZXFTVBXEVYH");
    msg.predicate.assign("SOHIGMNTTVLXJXQQWJSQYVUNEWKJGPRRTSQCYFZGSMAPLPNYQVPUZTOHBVMSWKOXRCYCWFBRWDUOMUZVULEZYDRKKHNDIQXEDFLPZGBZQGMLUBXMAYHKABOVONSCWIFXBQO");
    msg.attributes.assign("XNGMXFGAALZCIESXZDJCYGFTZFFTSHUOJUOKAAFGOVPJNGAYCIJTSFKEPEKJJJMBBMWPIQLLZRMDKRLEQGWCKQVGZLVQZDJVACFHYYMTDPIDMUNNIAUQGPEDDSXLNSVVRUCVOARKPRKOFXNWTOQHEULITXOYJOAKPLNHQAQZWWNIUIIHHYGOYHLSEYDBMTSPBIDWBNZCPR");

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
    msg.setTimeStamp(0.5509136790039445);
    msg.setSource(7055U);
    msg.setSourceEntity(237U);
    msg.setDestination(12892U);
    msg.setDestinationEntity(53U);
    msg.command = 158U;
    msg.goal_id.assign("LSZMKRJMQQBKDWDUVWZSIIVMFQXRQWCZMSTJOBKFCKIODAFLVSGPEZUAIZZFWGNY");
    msg.goal_xml.assign("XZTRXZYHSCHOBAHTEUVWNOJNVEOHRBPNUHINHWQDRTLPJZWQQKDJLSKGDWPUTANEDRDCFTFFXLAYXBEYGMUYZYFVIFPYJMSTZLJJTDXWHCZVEPKMJCYNWPLEVKNGGDOUAUNAVZSSWGMARFJFMKXDYATDSICCNFNXVJUTRFB");

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
    msg.setTimeStamp(0.6950020836188114);
    msg.setSource(50495U);
    msg.setSourceEntity(249U);
    msg.setDestination(60518U);
    msg.setDestinationEntity(216U);
    msg.command = 189U;
    msg.goal_id.assign("AJVMFVVRIWXSTBATIXZFGBQMKCPCNPEUPZHDBMLUJFWNYWCCGHOCBGBZKOEKSVEOSQPRPXTOXQFEPBQTNURDIAZJDVSDMUNHIEBKFIXGWKKPGVAVMDISGESAWUMJJCQ");
    msg.goal_xml.assign("NIINZDJQLEKLQECLSJJBEQPZQUQOFTIAZWOPKUBWCVIXCMAYABDEWKMCGQGEHRVHIHGONIJHPMJVKXANUVDPGRWARIOSBZMNSAGESEQLHLXLCZEXGNKSBFGMINZEVDDFIFAJORMBUTBPAUYYGYMKTDKBZSFNAQUTFFWXPLDWHJPPWPYWOZTFOCVUR");

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
    msg.setTimeStamp(0.8309215240649449);
    msg.setSource(4513U);
    msg.setSourceEntity(110U);
    msg.setDestination(4472U);
    msg.setDestinationEntity(181U);
    msg.command = 203U;
    msg.goal_id.assign("VMIWOTIRQCWHEHDLSXYCXABGOQEZBVCMGYEORZHFTJWIXTYMKCHUSKKXAQCWDVWVLUAGUHJZFWKHSBBFGDSQSEQWUPQFNQJXGZYRPPDROJMARVZPKMLSUYJHKHDW");
    msg.goal_xml.assign("CWMETPUQXOHAJFSUFYSQVHENOLLMFDWIXPSBFVVGSUOSUNCQIYHJZVBKLOVCHLQUIJGPOTPDNISWTKTNDHEYZPLDXYBONIRDTWRXGPMNXVRFNFSZMAGPERGTWMYQAZXINCBWDWMFXVGCEBDAIDGVAIAAERKJYSGCRPLHHYRXEKBWLMOIDHZRLGOMWKJBXHZKRVJBPRDZUTAOBCKVSQZSTEZQUEYLAJMY");

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
    msg.setTimeStamp(0.2699544919849177);
    msg.setSource(538U);
    msg.setSourceEntity(16U);
    msg.setDestination(49988U);
    msg.setDestinationEntity(70U);
    msg.op = 243U;
    msg.goal_id.assign("EOBBVQAPKZFYDLVFRHHLPVZZGTBGQXIJDMUMJTHTAZWVWZIWUMRXDSMUGEPUGVCBNHSFNLAVGYNPROWSLQPWBFAYIEZBTQJNNEUJSIQCVXXKAGWITIP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GSCYREMNTUUGNXGCDABKQHBBZUWABYNKOASICCWHLIQRDAZHPEKIMVPSDRWOXJDLTCFUUDGQEWDSFFKWIWKLXWFPNPJRJZOSFOVWDHTILOZCQXVXVYEPOGLOJJZSNHDZNFBMBVZAVIRQKFTZMHYPGYKNPUZEYDEAXPGDCAYVZMCURBELIUOXLAJQMATLOYFPTGMTIWJHCBSVTFT");
    tmp_msg_0.predicate.assign("IYHBJQEGEQQEIRTVQRXCYCVDFBFNEUIBGKBEHGMWDGBASPILPEFNVIFWFRCNUHFNHHEKRQSBYVOJCROJMIJTMSOLQSAYOKIBLZRRCBYENWGWPJAUUJKJXDQXDFSBXLKWIXEIHHRPFDMFGSFNGHXSYRVVIPAGHAJLPQTOAM");
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
    msg.setTimeStamp(0.50780212221028);
    msg.setSource(26731U);
    msg.setSourceEntity(76U);
    msg.setDestination(3605U);
    msg.setDestinationEntity(54U);
    msg.op = 45U;
    msg.goal_id.assign("QMSEMZDQSFXLYDRQIVEHMYJXFDSQHUAQVYNNMAOSYZBEDADCPNGRHAHBWMCCTEU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("COZOGQARNWJAVNPGGBVPWNPYFJCMUYEKUFGPAURQLZCTGGXS");
    tmp_msg_0.predicate.assign("HUKWXXKCJZPPHXFMNSDKKXLAEMMZOHKYPVOKBQSAXKQTJOPISJWCRRVMYMODWGHOZDOYQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NUGPKKVRENVDSTUFYJFESIIELMZHLDTPJXXGKUCYXLGTOMIJYFOOCYDCNVSPZSKVQWLHBIJBCGDMALZEHHQZTOSDRDFNJLCVUJQRXPZCZREOUWURTRVHLZAKGQVPZGYHFMANNXWFTACBTRFAJHAHNIWBIMKMQYSXUTFFQNCGHEDFEEDXW");
    tmp_tmp_msg_0_0.attr_type = 152U;
    tmp_tmp_msg_0_0.min.assign("JQDEHYVDFJWKVDNWAPTYEZRZJAJIEZCFLSIRTPZCIXKOFH");
    tmp_tmp_msg_0_0.max.assign("MTCCPHZVJWXSYYTJZAWJFHPQWBMKBMGZYWLOYNTEHJLUAGSRLCDVWJTZODJURETREPZBSITYNJIWOCKEIWQWQDKDYCAAXNCTXULJSPROFQGHFQFAQAXNVGEOAVRVQDPIDBZVNMEGEXILYYOOZUIHUZAVJKXBBKLCIBFIKAL");
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
    msg.setTimeStamp(0.17646818226063543);
    msg.setSource(30142U);
    msg.setSourceEntity(114U);
    msg.setDestination(26392U);
    msg.setDestinationEntity(119U);
    msg.op = 197U;
    msg.goal_id.assign("QJJHYCHIFXQFWKAAOZKBGCVQNCXPVOVRSTUIPUSKDKSMQSMLZYYEQBLIHHZXQCOAFJFNDCLHSEZQGIIUIMXHRFPLRHREGASMTDUNGPOJILTIEGOBJCHYNRGIKNUXEYHJPGOJYNEUJTFDPLWPATZVPORUKAODWWYRCKDCQWBZUAWVYDVIELTJBWXFRMAXPKWTNKRBSAQDNMNMOLVWDDLNYBOCBMBEKS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YNKFXLTBENXGJHPCBJIWFLDMTWETHSFXGZMHQJFVAPCOLCQNEZNSNHLVBKMTPSJSLAFNDOEIACUWMDVDCRWTRFVPOCUIDIRVVYUNXWJQJZRWYAHVQLCPZKBXBWOHOFAN");
    tmp_msg_0.predicate.assign("QMXVHQEIULPLAPBCIEUKTVDRPSTDNDCOEABXCIUNMGQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ESQXESIWEWTKYZTAMYUXLSCDQTNXMUJEBLPIMODLUOJRBIKQDRCYUXAGUFUGZNWPSQSBGMFXNNOTTZRUGNVNQNZDFCCQDHAARSKMAZBXJTCRVVMGQYHXEEAIWJHQSGMBJCDSKZIWBWVCKUPWHRDLBEPBYOYKTCAADZEKPHUPVVGDZVEGJMCIYFYRHVDFNWTYXFXINPHQAATNHOWYZGJLVU");
    tmp_tmp_msg_0_0.attr_type = 113U;
    tmp_tmp_msg_0_0.min.assign("PUUCDIJAVBBKNDYBSGEZKNQSAVGELPBXEYXNNARMVLKRKGQXWFJMLXGXQHIHGIGCHB");
    tmp_tmp_msg_0_0.max.assign("QRVNIBIDYZJECHBBYBVGIRIWENWWPTSLOESNGCKWYATUFCELRVDORZZFIXRNPDYFFXKZCWLXKXPGLTOKZNMNUQHTSSJEHGMUXOSLVDTNTFYXKTXAUAGQZMCFYFBIIXUNWVQRPVIFUMJVUPGAIESXCEEALJSKHKUVISPDDHTHOKBEWCZJWGMMHCETMDTVPHKXPNQGSJFCLZJZRDUYYKQPOQAYLAAWRLQGOVNHLFCBQPHOYDMR");
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
    msg.setTimeStamp(0.06919200195757003);
    msg.setSource(59464U);
    msg.setSourceEntity(185U);
    msg.setDestination(41281U);
    msg.setDestinationEntity(148U);
    msg.name.assign("FBPEHUJJCIWDYDPTRYPZYGUGINPFOBIFEVMZVRIVMZEPJAPNYGVNRDUEIDAHBODNHHINCTJUWSZXBOPCGQ");
    msg.attr_type = 139U;
    msg.min.assign("KAZYTFDRFENPURJVZMJFJRTSICZYEXUIVVJGUZVKLCCRGSUSPBGWXNKKFYCCBXJBYHVETSALCUNHTZHHRPSDZPWPSZFLQHKGZTIHVHDIDLSWPOAMBOLCTUMXNWUEWYIIQC");
    msg.max.assign("XJQXHQUEPBJENWDPAGTOTETYXDHDEXIRGLHUBVZGPAWXCRGHQZGAPNJNPDYQSMOKTZYXFMRUQTUROTODYPKBAIIMMBEEFLWODLRGSBEYZKABELQWOOYSTMLRDWHCVWXFYRQSCZZWSPSGXCSTKVKAEVUURZIOSJFZMFAAYIJRHKSSFJTOVGVGCTKNHNBICULKLBVZIVWCL");

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
    msg.setTimeStamp(0.11245382009806992);
    msg.setSource(56738U);
    msg.setSourceEntity(126U);
    msg.setDestination(3341U);
    msg.setDestinationEntity(160U);
    msg.name.assign("NFYWEUACQNNHJXOPXZBKOHCEFQPOOXSQRMWDMBNBLQTLYPUXXAUHLANFMFIEOJRDISGHWWUVRAUWOSDGHVYYXUJTPLZUSPAZLZCJBQGWZZDKIQXRRWTKVVSYWIPVMJLFPRELTZFIXJZMOQYZIXVBRD");
    msg.attr_type = 171U;
    msg.min.assign("HWMWAYJXKMBCIMFLZTQSAXVYGRBUVWQLTNABMDPNBZHBONDULBVYQMUZMFQJFDRWPZTRDIAHIRXARZGMNOEXEFHIXKZWDUQGPKVWRTTPDVHKEYXIRFCUNYJFPGYJJSLEWSHUIQTHFIUUAHGLNPHKCXBEJSZCFLJCXJQCOTXDUNFNLQVYKPYLVERARTZGSKCBUISSZCMYEXLCHSGEEDROAFIGIOVQPDWGODTKWPKOSJAKOMOJPNSEBCBWQOMZT");
    msg.max.assign("AEYFPESNDKDMFROGWUPZGXPTQLMJSLAYADNBMDQHUJTMGMGHUAQNGSYMWYZRFKHXRTA");

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
    msg.setTimeStamp(0.26651190688635196);
    msg.setSource(14797U);
    msg.setSourceEntity(150U);
    msg.setDestination(29878U);
    msg.setDestinationEntity(163U);
    msg.name.assign("LLAZZCOVVFFKKVTQWYXEFXNSANUAQSXYNBGMBTMNRVDHJENIOROWOCCCUVFGGPLPTGNHMGAIXKKRDUIUPMBTCJBPRWNDKPSXCYBEFJZIDWDLMQIOFMHLLUHDIRZWTSCRGMROOXLPQDE");
    msg.attr_type = 84U;
    msg.min.assign("ASKJUIXJVEDNFPUWTOVTKUCCCXGUMESFRDJYTQWCJTUKZONPYMBHNMYMEIWZUSSZRUKEOEFXQVMFEEARNFZPCPZIYDFKUGZWQX");
    msg.max.assign("BIOWRGQNNWJNPEZNJOKPJRMDLVGRSZUBJEKGOBCTHDIDGJRLBTEMTNLQSQUUCNKHTSAFSWHHDCOJHYKUXILJZIZAWAFSHRRBSRYOHAVTLOQBYNODNGKDBCFXCZQIDXUFVULOIBXMJQCMXPYIEGZTOLNMLFYYAXFPCSKMAWHVGSPHUIPITXRDRFQEEPCFRVXXKQSTVDWGWZMMCMHUKEYJGAESUUVXQFQLZTCY");

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
    msg.setTimeStamp(0.5758408212097389);
    msg.setSource(20334U);
    msg.setSourceEntity(46U);
    msg.setDestination(42339U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("FCUDVXDHDOTWLVUABVIVZMGYZGKFAQUXRJUMYONORJBHPCTICCPPDHZRZANTNXLTNVVVRWEXCIEROMSPMSQQFJOSFTKQTVMTZMVEGWGSLGZKIKCSXSNXHRAPNYNFFGXHWKQHZLEPXBZXIEQONHOYUVWHCPNBALWCAJKBBYEIFMUTJIBZOKEHMDQAKYSQJDGPIGNQDUIDUOQKTEUZRSWAJPLKAJLBLSWJYCIUXWEMJSDFYDRFERTHBFLYPR");
    msg.predicate.assign("VPCRWXAVXUZXDAQKMPFIVXIUTKQRMBMUHASRLBVPPQNPRPETFJSHSFLGJQVFWGLEVSZUZYENAUTDGFBVNAKXXWOGTOXBJYVWQQJEYZBVNNXWYIDULQMNZBSEOYILAHUYOAZRTPMQZALGSGHZNMVCJECIDCDUCWHGWFGEWNRGZBKLFBOTDDIPKIHORZCOPNKOBTKIYEQDJBYLKSOPHTAMULXTFCCFAJYKCJRRKLTIWHXMMJSFEHMUQ");

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
    msg.setTimeStamp(0.7924292003588839);
    msg.setSource(6748U);
    msg.setSourceEntity(23U);
    msg.setDestination(59941U);
    msg.setDestinationEntity(254U);
    msg.timeline.assign("LDCXQGJDLOIZZVXOKHUCWBODAZMKEAAQEVVNMIEBDTRHVXKRKFYYCVZVUASURHSUUGEXPJZWCVYOWBLYYIDPMWWOJVYRZFCOGCSLLAGGHXYBQRUJNLHNDMFGZVM");
    msg.predicate.assign("UIZPMHWVAFCPYLBDFJKXEDNLYWNSKTYUEOPTQMNMTSIMWNAVNMPCVWKDHCSSPZHEUFOYTAH");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CLBGPJKNIKVSMHQTJZRNPGWAXTRUJYVYFDIXFFVBXKLWVBXUCTTIZOWYJUZQDUIMCWEBBATUGHC");
    tmp_msg_0.attr_type = 136U;
    tmp_msg_0.min.assign("ESWOHRZPLPKQKZWGMNIWFNGKKKFDQWZZOKLHDRZHRNOJNJTDVTMCMA");
    tmp_msg_0.max.assign("ABECXFOCQMLEOZIIUUKIYJDEGDDDECIWUFFQSYTBHZMPVAUGPKFCLWORVLSRAPSPNCKVPSHFVKQPKRXHWPLAGNMHFLRNWWGVBOASYVTKSQODBEUQEWSFDLVYMTNTSMKAZCXLLCORURPPDVUUFJHILOMTGQZKYJKOZQSJNACBMJKJXGZVZJXBOHGQTYXIYEISYMGRWJMCMIWYXHEQXRJAZLUBWNNDBEGNFHBJBVFTDZAARXUTGCNDPZHXOTWY");
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
    msg.setTimeStamp(0.325915199505457);
    msg.setSource(7253U);
    msg.setSourceEntity(247U);
    msg.setDestination(12014U);
    msg.setDestinationEntity(85U);
    msg.timeline.assign("LMYPYZZBVFKIGJKBWJDGTLEPUJRTZBSQPHXFZRMTDKLYPBSBLATNCWDLJYOVSOCIFIGEYUNEYPRMRGAGMPQZWWKJGE");
    msg.predicate.assign("HZHXFXWDXQENGUUAPKZPURXWSBVVBLWYPMBXDUUEKAMQSLEIDHITKZJSATXRNVMDPHARJYVWLCYSCDMUFJNMIZMHQNWVCYTNZHKVOBHCUSLTPKOPCLZKCVMITXYRYFIPUJOSNZUJTGNQIDRNTJOLVKCBJDMBGQLGWXABRKCBRGPLJAKWPCZEEXLMAQWSUAQLGIHWHKF");

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
    msg.setTimeStamp(0.8079231967128885);
    msg.setSource(46202U);
    msg.setSourceEntity(167U);
    msg.setDestination(15379U);
    msg.setDestinationEntity(153U);
    msg.reactor.assign("DQBHDHFRDXTKCAGIJVMHBIGXAFWTCCZELICRUWUFEEUJACSIETTEOAPJZCQERUXXPKRSQPTRMQLSZNBMMNMCCNKGOPPZVUXHYFXLBTRBWXAVKWGWZUKAYTXHYRMVNGFYVFIQYUKJPDPBEDOWLNHBGSLJPZLGTGU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ITJZMDJHTMHJUM");
    tmp_msg_0.predicate.assign("VVBCQFRMVAZHLCXGOQIGMQZATLODONNVGFEPEXWMGJUYHOXJNXMUAELPUNNOTLUTKUOFQRI");
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
    msg.setTimeStamp(0.3799047838837406);
    msg.setSource(9675U);
    msg.setSourceEntity(174U);
    msg.setDestination(16505U);
    msg.setDestinationEntity(75U);
    msg.reactor.assign("YHDSAYJZLIMTKFOBQWRFGVLOEDMRSEFKCKVXVTOUYHWRGVIJCXEAEMIDAPYBVCPFYOISKJIXAZKOVJZMYBDUDTXHTWEIMTTUPWOHCJZSNLLNLJJXWOCKURLGBGDFQZCAQPHYIVCITRXRZWPNNBMHGKZWAQZTDSOFUVCNEQRNGBNLHANSUZZGBYWJYGLFUSPT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MACNHHGKKFYDDFLFGNJTZSMOQOXUZAVSOKQWYAXTMDTPUIHAMKMJCQRGJWGLPPKXKECWXOUVZNWFEEYIXLWZJWSPAEXQYAXBBNLJBDESMMLGXQER");
    tmp_msg_0.predicate.assign("KKLVHMGUOXWBYBIVXLNANPUJZZZPAEQHSDKZRJBEGTNOPIWAITEHAIABKIROMFFMQHDLWNDYXSPSGMARJYHRRVOQPVRKNOCFSQEIRNOTPIYDHKIZSIUCCXFPEYAXOLKQGWQJNBECDHTUGWYZLSMIECHPTVXDKFWKTEAWOGMSCJCUXUMZAGLSTQBWRFBORZVJC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XEASRWMEKVLLJTAGDWYQBWVSKEHFBWIDRVVJDZATSCHVKRBHXOBPQLGJAGLTGOKFDVWEJEOTUZUMVBQQYPZNNFRTRPIWHKZUEMXECYBNTLQGYXLMOXKESZANPABNNASHUYGJOAAIPCRVYCIZJEMLJLRGBWQNSCPKYF");
    tmp_tmp_msg_0_0.attr_type = 8U;
    tmp_tmp_msg_0_0.min.assign("YOVQAZACDWCWTFRXJGZUNHFWKYZPFEGHNIUZVDMEMJITBDDWNNYKXMJQYEXFMBHCQXBDLM");
    tmp_tmp_msg_0_0.max.assign("RMFQSMHQMNXJSUOCKDRTZEIHCDCJQVAKNVLOXTYDIKYUGGMIVZNEPGBWDOPSYOTSFYBBPIWXWJFGRSXUYSJXGZKRPIDWVHQCACMLDBLSQJATPVMDMELCDWTAVJRVTSNUWBXEHOWCQQURIYDNKVAGZPIFZIZOYGEPMZFKHSFHTNKAWACTK");
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
    msg.setTimeStamp(0.6076833357753441);
    msg.setSource(26090U);
    msg.setSourceEntity(58U);
    msg.setDestination(58398U);
    msg.setDestinationEntity(160U);
    msg.reactor.assign("QIBOWGASPKLFNOYZJANBRVKFUSXOSLINFWUJTJDAUVPKVLWGRCPURGQCQCRXGOJBCYPBMUYMYEDHQJSTFDDSWBDNHLOHYVWXLAYMZGUMALKDHMANHZSKMYKFMNUXJPRHZKWOHQCESSKEBPWOCXGKHFGTCZHJPVTEJMFETDXIVXPOACWIRGIQCGHLYRDZLFZEY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MAJCUACNFZZMNGOCRPBATHEJLUJDZSVQUOSZQRGLMIKOBMXPRFOOWWEEQCVNEMVSEJOAKSGEDZYOKKRUWTJHNHGZDIFSGVCYKTKXPWYLFMHTPNWRR");
    tmp_msg_0.predicate.assign("RRTMGQWXPSGKXXRIJQEYAMP");
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
    msg.setTimeStamp(0.964529485829783);
    msg.setSource(47753U);
    msg.setSourceEntity(182U);
    msg.setDestination(45180U);
    msg.setDestinationEntity(211U);
    msg.topic.assign("ZXIYNDIIMSLQOPWAMNGTLWSPJGDMCLHXTHAODMIYQUXPGTHPYBAJDXIJZJNPTUEVZONGHQDLIOTDNBSUAUPWGCEAKIYZGYR");
    msg.data.assign("VKAYZXCRJGCWBYNDYKAPGXUAFIUSQMZCKSYXOFENQQCUDVVTOUYJRKWRKSZBQMKUAQKIXFTOJORQNQDCQLLFPVVDYHRSCOHRNYSGFWULGLPDUWIQPHICRYCVBBIVUDEZROIQPJNZTXSP");

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
    msg.setTimeStamp(0.6163434037641196);
    msg.setSource(19871U);
    msg.setSourceEntity(18U);
    msg.setDestination(62162U);
    msg.setDestinationEntity(244U);
    msg.topic.assign("ZZQYGQHWMGDDFIXSDRJPHFMRJRGYTUVFXECORZVIBDKFJDUEVUPBIEZREMNLAXCFMNBADYKBMAYPNXKHQDOSXLUXVWMKVQHSSELHPKQLAKYUYWFRDPEAOGAAYCOCEOEGCPHWGJGGARLNWUIYHBNOHIOQWWDNMVQOETIXPURSUZLSZWSTKWKXRKLQNFKSHVNCBIJTENGVFGYPLXICTPJJO");
    msg.data.assign("KEWCYSQNUNMEOJTQJOLKPBXIVWTKYSHDUPSNGHZXGFXJMYWEMNNPEYHDYKJWBYCEGRBFWZIRCFSZJGXURHGZMFLUAPIBPMIOTFDIYFVCCTFEPFCQKKVZTCBOJSIBRSKXQHIRRZUTGWMNODUAFVGVMREAYWLBDAULNLKQAWLTKXGQSWVPZQHJRURHWAOXGGNTJLAALNEEYLSZPJZRTPJUZCMPCISECHXXMAKVDI");

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
    msg.setTimeStamp(0.972822757692552);
    msg.setSource(17765U);
    msg.setSourceEntity(185U);
    msg.setDestination(4815U);
    msg.setDestinationEntity(174U);
    msg.topic.assign("QDTDJNKRIUOOZPMZUYPBEDYETVBQFDODSCWORSDNHBLAGJBLUUFLQXZVMXPMTRKCGENWNSUNDZXIKJENCYGUHNQJFBFLWZQVVIECBHMKRFKYPJRSDFSIWLEGDQHZKAXLPBZQEFAMAMFWCXGJVIYLZYQLPUYPCJXCYFTMVGWHAIRSSHQZLTDPOYVEBGKGVPROKTMRVCAVXSAIFSUQSXOUHERKG");
    msg.data.assign("AXSSQLOATMIICYCGRNQNPBPWSBQKSOCVOUJMULDFDLAJAKROEHJOXPKTQROKHPORCZDXCHVBJMUQCLDTJFFHPAZGPYRWXNCLGKRVGIQHNBMUAEZYEWFGTKHEPAGVCJBKOJLUVXG");

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
    msg.setTimeStamp(0.7820765987572034);
    msg.setSource(51630U);
    msg.setSourceEntity(179U);
    msg.setDestination(1759U);
    msg.setDestinationEntity(125U);
    msg.frameid = 63U;
    const char tmp_msg_0[] = {-21, -88, -114, 126, -95, 43, -116, -123, -106, -57, -107, -89};
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
    msg.setTimeStamp(0.24117110111446072);
    msg.setSource(48466U);
    msg.setSourceEntity(45U);
    msg.setDestination(6274U);
    msg.setDestinationEntity(62U);
    msg.frameid = 229U;
    const char tmp_msg_0[] = {-68, 36, 51, 109, 88, 59, 14, -113, -116, 64, -18, -86, 32, -112, -82, -108, 43, 19, 111, 92, -117, -14, 39, 10, 42, -28, 41, 42, -11, -106, 48, 125, -8, 40, -125, 88, -85, 20, -60, 78, -56, -78, -15, 14, -101, -81, 5, -9, 70, -102, 103, 114, 52, 44, -126, -71, -81, 62, -1, 93, 14, -91, 57, 47, 11, 93, -85, 123, 76, 116, 50, -88, -22, -39, -19, -22, -12, 101, -16, -101, 97, -50, -38, -51, -107, -33, 61, -49, 46, -50, -51, 41, 41, -57, 58, -11, -55, -14, -62, 84, 86, -8, -108, 12, -123, -127, -111, -50, -33, -54, 23, 89, 75, -32, -106, -77, 59, -75, -35, -96, 81, 109, 99, 120, 69, 40, -8, 107, -37, -24, 73};
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
    msg.setTimeStamp(0.921082530685543);
    msg.setSource(50443U);
    msg.setSourceEntity(8U);
    msg.setDestination(12768U);
    msg.setDestinationEntity(24U);
    msg.frameid = 0U;
    const char tmp_msg_0[] = {51, 16, -48, -78, 47, -16, 109, -39, 79, -2, -13};
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
    msg.setTimeStamp(0.10955531706570931);
    msg.setSource(20814U);
    msg.setSourceEntity(0U);
    msg.setDestination(61794U);
    msg.setDestinationEntity(112U);
    msg.fps = 43U;
    msg.quality = 12U;
    msg.reps = 134U;
    msg.tsize = 216U;

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
    msg.setTimeStamp(0.10725956923942181);
    msg.setSource(61902U);
    msg.setSourceEntity(101U);
    msg.setDestination(42836U);
    msg.setDestinationEntity(89U);
    msg.fps = 130U;
    msg.quality = 16U;
    msg.reps = 13U;
    msg.tsize = 228U;

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
    msg.setTimeStamp(0.5698568408325871);
    msg.setSource(53194U);
    msg.setSourceEntity(79U);
    msg.setDestination(30079U);
    msg.setDestinationEntity(101U);
    msg.fps = 27U;
    msg.quality = 2U;
    msg.reps = 210U;
    msg.tsize = 249U;

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
    msg.setTimeStamp(0.00024076849440812786);
    msg.setSource(7641U);
    msg.setSourceEntity(82U);
    msg.setDestination(54892U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.37608156281574756;
    msg.lon = 0.36392732898991675;
    msg.depth = 221U;
    msg.speed = 0.39172203452707555;
    msg.psi = 0.8481937491205831;

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
    msg.setTimeStamp(0.5112049956209823);
    msg.setSource(24965U);
    msg.setSourceEntity(126U);
    msg.setDestination(62150U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.7386311338857746;
    msg.lon = 0.2016077137048814;
    msg.depth = 24U;
    msg.speed = 0.03416847518872357;
    msg.psi = 0.03456063263260145;

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
    msg.setTimeStamp(0.4196006142271599);
    msg.setSource(47565U);
    msg.setSourceEntity(179U);
    msg.setDestination(16584U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.734346128140789;
    msg.lon = 0.7763153165833158;
    msg.depth = 119U;
    msg.speed = 0.6015955450428754;
    msg.psi = 0.40858367231765036;

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
    msg.setTimeStamp(0.9734202190351872);
    msg.setSource(4834U);
    msg.setSourceEntity(101U);
    msg.setDestination(50366U);
    msg.setDestinationEntity(87U);
    msg.label.assign("SFAHYSOYJHPXRMDABSUXFVVAMEKYPNSAUBPCLFFCZXBXLCIUEZJPUNJTNBHBAMZRSXQLWKWYBNTQHNLLOXWVFHWXDYUXFAOI");
    msg.lat = 0.5897541920646181;
    msg.lon = 0.24261738754787798;
    msg.z = 0.23866326206702293;
    msg.z_units = 168U;
    msg.cog = 0.4310830253633374;
    msg.sog = 0.523262867634602;

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
    msg.setTimeStamp(0.6449897441240802);
    msg.setSource(2077U);
    msg.setSourceEntity(135U);
    msg.setDestination(55495U);
    msg.setDestinationEntity(249U);
    msg.label.assign("WUMLGMJGXETLYJTDRRWERTDSYZQUSLCGIQVFOIYMYMBSVFUUHLKSXKDULIPZKPANVNWRGHDAHXPURHXILCOPYCAUJKZFYTETGQNTRJIBPSLWZERXIJVWJHLFFKTWRWIDCWBZFVZMBAXTOYJHHRCDPCQDGPDEYPGMLFTNEKIUQONSBODOBOYCACMH");
    msg.lat = 0.20824835428448152;
    msg.lon = 0.28601361217311483;
    msg.z = 0.019470463935082227;
    msg.z_units = 235U;
    msg.cog = 0.20993465040268;
    msg.sog = 0.6343789873603067;

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
    msg.setTimeStamp(0.7443553724888385);
    msg.setSource(29710U);
    msg.setSourceEntity(239U);
    msg.setDestination(693U);
    msg.setDestinationEntity(252U);
    msg.label.assign("QVLINTQITOJZTWPAJFFQJNAFXLIEFJEHWSNKK");
    msg.lat = 0.9329647532512125;
    msg.lon = 0.9740810584973698;
    msg.z = 0.03548306975772442;
    msg.z_units = 88U;
    msg.cog = 0.6386643050295957;
    msg.sog = 0.43258692104157426;

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
    msg.setTimeStamp(0.5076473273683187);
    msg.setSource(3171U);
    msg.setSourceEntity(117U);
    msg.setDestination(62440U);
    msg.setDestinationEntity(80U);
    msg.name.assign("WPBAQZGJXRMCGXZSCQWAZWJWBKDIUCUCVTTVYOMQEKEPTLYGDRPCECITDMMJECHIFNCJOSAMXLZVMBNFIORUHWYHVPKFLPELSSSOSIIOEEQRLGMEQOUDYFNAPUONBHDBKWZFSZGYKFFJVNGSGVCBYKALUWGFZUYXYR");
    msg.value.assign("PLRSFKXDXLJHJRNWWJNTKGAVPHAYCERBJD");

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
    msg.setTimeStamp(0.9999264232912962);
    msg.setSource(9743U);
    msg.setSourceEntity(14U);
    msg.setDestination(57507U);
    msg.setDestinationEntity(236U);
    msg.name.assign("TYEWEAUDTQIIYDGGNVWBHGTBHORAJTFOJFBWCPECZKNIMJLIGGHBYZRBSLPZALYQCLPSXWKVMQGDKLBXVAACRNVJMV");
    msg.value.assign("TCTRXLPQWUWNLZBIRDFFIKNNJEEGSMICKLBMUOBOSRHJCKBHAFQBPRFYAIYBXSWJAGNFJKSDUKDMVIZEAMLDHPCQATMNUFSYRDWHXSIQOCTXJGTYEHVXLZUWFBGKPIFTAVOMERHMTLUQDJROWZACCUPSNDJYGVLPVOBWKYTFAZDVSZFOMXOGE");

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
    msg.setTimeStamp(0.1132496074851238);
    msg.setSource(57964U);
    msg.setSourceEntity(57U);
    msg.setDestination(22024U);
    msg.setDestinationEntity(75U);
    msg.name.assign("AOIDBVHMVGJLNOPMLUHNGCPMZSFJQMVGBBLWFRSLQDZSHCWDNYKUOLSQQRPSSXVJUTEPTOYTYWEHOCHWGIZQ");
    msg.value.assign("GPDPWRQQPUDZVZOZISAVJMHHUWCINIPJUYSDZPXIQJZEOAQRNIAJGMEVLVFJJYMTFYSNLNKQTPKBKPHOODTEBCYFVULRIHHCYSZLANBJATECASYFGYNCTWZZFWMEVHWWYKMXXERRJRZUQXNOHNFABSGKEJLBFCUQTYTLICBTMUMCTUDDHQVKEXGIWX");

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
    msg.setTimeStamp(0.9336342338337226);
    msg.setSource(22216U);
    msg.setSourceEntity(188U);
    msg.setDestination(57707U);
    msg.setDestinationEntity(183U);
    msg.name.assign("GRWRPBYJNSRDXGKZOHATGMLTPVSGPYLHMXIOWNCUMGYLFNSNVPRIUPTRYAOKTVHVMOIUGHVECCESFZWKHCMJEEKBCCFWTEKOWTWIUXOKFHCZNTYXCJNDLLBZZGABXZTQLDNQIYKJERQTMVQNPEZKPHESAVXMIKIXIOBCBDQJZWINXPSSWMAADUYSFBV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XBBJLYBATLBGQRMOGIDPKZZBXWHIMWSKFKOELKNXHVYJBUDSSA");
    tmp_msg_0.value.assign("BNVDMFVGWENFGZVJRYEPIYCBKIDPJQMJEMUCGYFCFGHPIIXZFXCVYKOXLQUFCIHWZAXVZJHAJPSEVSSXRDUTRNYEUQQTHBEITYDNUXYSFATOZZNHPDPCZQUQKCHXSKCGZMGNOLMWAPTBPILVAASWEHERZBGDO");
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
    msg.setTimeStamp(0.30933692964372916);
    msg.setSource(5736U);
    msg.setSourceEntity(64U);
    msg.setDestination(44656U);
    msg.setDestinationEntity(170U);
    msg.name.assign("IDMSFOEQENLGLCJUGKMXIUZSPKWIVPWSUHIUPDWBVZRGPVXMGBKVQDJNSZMVFPJHUKMUWDTOCMJMLTTZLDGRLJYSKOPJNEDVTME");

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
    msg.setTimeStamp(0.5764855166653917);
    msg.setSource(20852U);
    msg.setSourceEntity(147U);
    msg.setDestination(34927U);
    msg.setDestinationEntity(56U);
    msg.name.assign("ERFXNDIFRUHZRESJLRBCLWFTUNSYKNQLQUEWLGIGITUPCXZFLCWYAVNQWMY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TAQBAXFMVMDYUTYTSFVWERNFQZOQNVULMDZJMOTNYIHMQRLLWGXDHMZMWPWGCEJIDFVNADPIQOYVKLDWKIGSMIDAEAVFOLXPKKHTUPIVUFOIVGILGGFTFSBYRHYPLICBAYCLQJKOXLJXCOOREXYBFMHVSUZRKJSGBKXZZWEPKCIKJEKNCXUEATJNLXEWQBSCPBUOTJPWYDSSZCMXA");
    tmp_msg_0.value.assign("GKZBVPWEWKAQOVNVPQPYXJITJBRVBGFCTUSTYGQDEQSJKVPAEDLQTVXYWIMGCLDIPRBEXTTFYGABTOKHXVYHDVHSWRUOSVPZKUJFFAOHRDSBOUJWNCNOXFODCKQYRJHHWPHTHLIHMNFKTXXXJMNBG");
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
    msg.setTimeStamp(0.6598518617590176);
    msg.setSource(48412U);
    msg.setSourceEntity(215U);
    msg.setDestination(22073U);
    msg.setDestinationEntity(177U);
    msg.name.assign("PIAVDPRQHZEG");
    msg.visibility.assign("IEUXAZPVIZSECDJTYVMVVCBFOPTYUWETMVOYQBSACGKKQCHKCXAMDANEARCXTTJOQLDSAOEOLTFORJIJILYGNYDUGMNDUIPRSZFHXFQXSHXMRMSRGWCPUEKHUJQQY");
    msg.scope.assign("KPDICAKMAVABZTQYBGNGDMNAUVRKGWROXWHKPNSFLYXUIEQHSJUZVPGVUAWCWMHVOGZWGKQTFJYONIMIELQYRJRUIBXBRUTSQWMHMOLFPHEDTSACLMUGPTICJJQYZENOEMICLCDSAJHZSLABZUBDHNRIHTQVOEZXRKQHANHPAPPKYSOFVCBFYEXCXVYKFMBBTUOWNGWEKJLDWCPJUNQLXFGWTIOSCJXXPORKZTRLIYZMEDSDJSEFRYVXTQN");

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
    msg.setTimeStamp(0.3515212768436352);
    msg.setSource(27772U);
    msg.setSourceEntity(195U);
    msg.setDestination(15533U);
    msg.setDestinationEntity(206U);
    msg.name.assign("FOLQAPTKYNSUDUUOAAOYBRUOCMFBORWIUFUWBPAZGLVXNKMKLBZVMAADIWIRGTQYFCDDPPZAAYTZSGKNXMMORZZHHJXBSEAOTLPCDSXBELLFPMGTGWJSCPKEJFINJVENHSBNQHGCWSOIQPVKDZUFPVUIKDIDRTJKRXHCHIXJXTHBYSRRBDEMWCXYTYUNSPTVZGCKDQMLMNALBJFFXYWVOINJRUCVELGHHZQHQVFIEK");
    msg.visibility.assign("DFIJIPLGZCZFPRESFLLNXKIVTCAUYQHUEJCGKMPLAVOTRWSFCZPIFCSRDNAEPDAVRECSILHQMUFQQTZX");
    msg.scope.assign("MZPRRDDRIXYXURVIJEFVZAVYCXEKJQLCTSKSHBQIOASNMBSVMHUHZEHRLAHOTIHIYNOISDGUUKJLJZWFFNNWORMSUAWYFEFHAYVDPCAXCCLGTRHJNPUVQDTLDXSZPMRKJTVKPDPVZMFBKOBZXYWNVWPWJPIBMWEFSXQWQGMLCTQYYSCLEXA");

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
    msg.setTimeStamp(0.5439535309560938);
    msg.setSource(64205U);
    msg.setSourceEntity(240U);
    msg.setDestination(49543U);
    msg.setDestinationEntity(38U);
    msg.name.assign("FGPCUAAHFJLQGOEULCEAUMGVSMVCPMMXGACWBFDTEXJMDQRHURLRNQSNSRVOSBZFHTLZYINKHZCHUHIOXAVVMFADEJSPOERISSKQEEFJSESPYFLEWXMHZGUXXAGCNURJLNH");
    msg.visibility.assign("FDCVFGSESLVMRIOZVYNNUMAKDHCGXBQOJCWBTZCNIYZSCXABAUEZMMXHHWTGMJHBKCSSIQYNHYTWZFOLTOBPHPYZSLRJIYYDPGRELOMRPDNQAOAXSTPNTVJVEWKLIMFTBORCVNJSIHDNUTHKJAFWFHLTCVPXEYSCUOUQAEELXZQUVJUQIDKFBZWJJGFDCGRJBKYZKOEIYDZABDEDBGURIUX");
    msg.scope.assign("KUMFUQFXSKPHRCEBDURVGRMZTGWBYVODJAWFCOCNSTYZNSYRTOAXYKPPLRIJMQZKXVBMBSDEUMZQCYWTGX");

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
    msg.setTimeStamp(0.3733820713491518);
    msg.setSource(36874U);
    msg.setSourceEntity(221U);
    msg.setDestination(35284U);
    msg.setDestinationEntity(157U);
    msg.name.assign("TCBDIFKWJNXLQZBTSGSGCKTYKUNXMBQDNPMXPRJZYSMEBPYPCJRLUHQEGAFWMOHPZEYOHYECIDQQLKGRRTXTJYITGBNUZDEKKTDLFNWFIXSVJHGIVKRXNXJYMTCMVLVURMFZNPVNXLWSAGRBWHARGUFFZKEJHAAVQHJFERDJQSM");

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
    msg.setTimeStamp(0.03512531820485987);
    msg.setSource(3400U);
    msg.setSourceEntity(198U);
    msg.setDestination(49651U);
    msg.setDestinationEntity(156U);
    msg.name.assign("BTEZDTYFAMEQCVRKHRLYGGCYHBUPQAMSEIYGCGNYJBWQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CCHMBSJVJEVWCWZIQKAPOKEXDUGFTLKRQJ");
    tmp_msg_0.value.assign("LEOVXRNQUVBTSCLGLCTJHFCUO");
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
    msg.setTimeStamp(0.6772256494771375);
    msg.setSource(32774U);
    msg.setSourceEntity(165U);
    msg.setDestination(57842U);
    msg.setDestinationEntity(144U);
    msg.name.assign("SMVNOLLFNIMYUPLZDCCVSTDIMCSCWYEGWDEZTRXKUVGAXSJHVEEJGFYWUIOBKXDPWABTHS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QCNKYQZVPPIBWMBWDBLNJHELSCIRVWKDFUAKZREMYKYEA");
    tmp_msg_0.value.assign("NJVZDGBEVSBQQJRCKBWMFCTZJBWLRINETDAWK");
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
    msg.setTimeStamp(0.758186126850047);
    msg.setSource(49428U);
    msg.setSourceEntity(30U);
    msg.setDestination(34986U);
    msg.setDestinationEntity(107U);
    msg.name.assign("CZXIKMAJIEYPTHWAMZUPELVHCSIWBQVFKDXNBVRLUTSGGBULQOBUKMYEAWAJOPFIGMCYKXNRRIANXKQLJRJKWWLOFZKOAQCKTHCSFREJHZQZNBEAEHDFCUMDDZSWYPOXDYDJFQTODNMYGKGVLVORLSCDQEBRFPABWTCRPGVFWXPMGGMMUPQRHYMSICDISNNUSVLP");

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
    msg.setTimeStamp(0.17350419185293287);
    msg.setSource(25438U);
    msg.setSourceEntity(245U);
    msg.setDestination(18011U);
    msg.setDestinationEntity(36U);
    msg.name.assign("FQWPZJTRPQHKVJMMGZYDYLKCZWJMOVSCJGXGMFTKBOSTXXSEDUKJAJTTIOVFKNHRQVYKBZWCUPSARDCWZVPSBJUBPRQDPVEVFGWQNGTZJCSTWUVXFEEWXLXKYJFSDHANLBEOQCUBBYZKDEKHX");

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
    msg.setTimeStamp(0.7369563278679131);
    msg.setSource(18865U);
    msg.setSourceEntity(217U);
    msg.setDestination(45180U);
    msg.setDestinationEntity(112U);
    msg.name.assign("MFHGCBTGCUYUWIH");

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
    msg.setTimeStamp(0.6970791557366629);
    msg.setSource(31117U);
    msg.setSourceEntity(24U);
    msg.setDestination(28718U);
    msg.setDestinationEntity(15U);
    msg.timeout = 2572211726U;

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
    msg.setTimeStamp(0.7985258004788263);
    msg.setSource(37071U);
    msg.setSourceEntity(26U);
    msg.setDestination(58800U);
    msg.setDestinationEntity(18U);
    msg.timeout = 1389655170U;

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
    msg.setTimeStamp(0.021504952607746874);
    msg.setSource(49865U);
    msg.setSourceEntity(105U);
    msg.setDestination(61524U);
    msg.setDestinationEntity(248U);
    msg.timeout = 3741487709U;

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
    msg.setTimeStamp(0.3653422461753366);
    msg.setSource(28091U);
    msg.setSourceEntity(37U);
    msg.setDestination(4625U);
    msg.setDestinationEntity(123U);
    msg.sessid = 2954520807U;

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
    msg.setTimeStamp(0.2579479342577353);
    msg.setSource(63235U);
    msg.setSourceEntity(205U);
    msg.setDestination(53976U);
    msg.setDestinationEntity(172U);
    msg.sessid = 1817262384U;

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
    msg.setTimeStamp(0.6077110000909817);
    msg.setSource(41366U);
    msg.setSourceEntity(186U);
    msg.setDestination(29270U);
    msg.setDestinationEntity(221U);
    msg.sessid = 4232196761U;

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
    msg.setTimeStamp(0.3584342695222551);
    msg.setSource(33937U);
    msg.setSourceEntity(106U);
    msg.setDestination(14194U);
    msg.setDestinationEntity(33U);
    msg.sessid = 594821707U;
    msg.messages.assign("STSIAWJISQROOVRUILGOXLPWMAJOZRHYEYJRDVNMMNEBHADRVKXUJCWFOQCLSJDNZCPMLCTZZVEPQNLVBTPYXFLOSUFVATSXSEUABJOWRXNBYKNQYPPWHXRSDBTMIEMMTKUZBXNXNHEMLYQHYHYO");

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
    msg.setTimeStamp(0.3108736228950806);
    msg.setSource(61241U);
    msg.setSourceEntity(173U);
    msg.setDestination(48413U);
    msg.setDestinationEntity(230U);
    msg.sessid = 2435054035U;
    msg.messages.assign("YTNOVQWJTVMZFIPLAKZKHYGLIDHQDRJGFRSMAEKATJZVLSVQGISOUUPDUOWXLBTORFWEQDACNGZBMGIK");

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
    msg.setTimeStamp(0.8799826665009157);
    msg.setSource(19264U);
    msg.setSourceEntity(133U);
    msg.setDestination(12484U);
    msg.setDestinationEntity(50U);
    msg.sessid = 1201392132U;
    msg.messages.assign("YAACWRPEQGCHFRWPTTSFAADJVIIXBIZMSVOMQAZDPTUMFGOBHZSVLHKZMRDXLKOQVDPTWEMZPGXKNJNBREJVXLFGCDOFLUYHOJKIFIEJCPCWDTSSDBCMLITFEUYAOYKHDTEZJKLGDUEFPV");

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
    msg.setTimeStamp(0.23275808840950385);
    msg.setSource(30924U);
    msg.setSourceEntity(194U);
    msg.setDestination(40433U);
    msg.setDestinationEntity(97U);
    msg.sessid = 985225057U;

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
    msg.setTimeStamp(0.2569012453253562);
    msg.setSource(39754U);
    msg.setSourceEntity(178U);
    msg.setDestination(34597U);
    msg.setDestinationEntity(19U);
    msg.sessid = 611474366U;

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
    msg.setTimeStamp(0.9246613740744521);
    msg.setSource(59906U);
    msg.setSourceEntity(231U);
    msg.setDestination(46780U);
    msg.setDestinationEntity(202U);
    msg.sessid = 4207416243U;

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
    msg.setTimeStamp(0.32018339359145753);
    msg.setSource(18215U);
    msg.setSourceEntity(29U);
    msg.setDestination(50404U);
    msg.setDestinationEntity(228U);
    msg.sessid = 3002349083U;
    msg.status = 59U;

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
    msg.setTimeStamp(0.8226557767482093);
    msg.setSource(56790U);
    msg.setSourceEntity(97U);
    msg.setDestination(13646U);
    msg.setDestinationEntity(254U);
    msg.sessid = 1952127007U;
    msg.status = 214U;

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
    msg.setTimeStamp(0.07202687304330235);
    msg.setSource(57645U);
    msg.setSourceEntity(127U);
    msg.setDestination(37517U);
    msg.setDestinationEntity(72U);
    msg.sessid = 3274785217U;
    msg.status = 106U;

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
    msg.setTimeStamp(0.27927330560385133);
    msg.setSource(12331U);
    msg.setSourceEntity(136U);
    msg.setDestination(26905U);
    msg.setDestinationEntity(80U);
    msg.name.assign("SKIXSAIYWBJAAFSBJBZJLRHGGPYGTTRQGUJXOVVLNTLIZEYMSXZLAWLPUDRBMFYSLADHIOSTWJZNVJZFVIUPCQOWFEDQFTYNWHMMPXKRBDSXZMVMZ");

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
    msg.setTimeStamp(0.8129840456491862);
    msg.setSource(29306U);
    msg.setSourceEntity(101U);
    msg.setDestination(44912U);
    msg.setDestinationEntity(240U);
    msg.name.assign("OKALDEMEOYXLJFKGEIXSNQLCIGOLYOCVJQFKYBLTNFBLNQMYWGRFFJZVHAKBMJKYUMFMWJBZAURKLWODDIQCKBIMRTCEUPEIYDTGMRORACRKSXDPRZZVPTWEZEPLSBAFCPHAXPIKOSTNQZRJBHBGTVGCLIIODIHQXVPCDYWPVBAGUSAVHTZHWRXYPTMSZJXDJWVHAT");

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
    msg.setTimeStamp(0.8930739353544631);
    msg.setSource(54727U);
    msg.setSourceEntity(183U);
    msg.setDestination(33852U);
    msg.setDestinationEntity(75U);
    msg.name.assign("VTABKQQSXWPRMWKDTZHOTVCNBJWZNMROVYXFGNLLUSRTKYZJPVUSVEAUACTGHXDGIEMCAYQMNODZBXBIQWVITSYBFMJHCNMPYSIONHZJWYWGWEJNDAPQSDLOLREZJNBXIUKDHSBQFVIPUUBXDFCAUXBDQRTRFAJSHPXFGAGZCDQZSGTHEOEILOGMZEAWOPCVKXKNMRHRYOLJLJLAKXJZGPCCLYKR");

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
    msg.setTimeStamp(0.21711838292139418);
    msg.setSource(380U);
    msg.setSourceEntity(84U);
    msg.setDestination(16808U);
    msg.setDestinationEntity(111U);
    msg.name.assign("NLFXNVTGIKBCWWXRMPIUPHQJDUQVHXRDQVWJTZHYGASTKYAQNHYASBKDXZLZQQPSRWCRTBGQCRSEEEQFOBZUMNGERJIOWHZAXWFFJKFAXRBIXCWKGLONVVPJEDPQLBNZAKCFDQPALILFGNAWCJORNNDKTONUHXMEWHLPJYAZOMVIHESVOMLVZKTYZSSSCWFIVVULUYJIXSGYRMDFMXEPGKGAMEDEIBCH");

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
    msg.setTimeStamp(0.3949965120599386);
    msg.setSource(8915U);
    msg.setSourceEntity(223U);
    msg.setDestination(64200U);
    msg.setDestinationEntity(21U);
    msg.name.assign("IQOWLIWKQGNJBGYUDWCZREGCVNBBOIBJCSZPIESAZHRROBFEKMMJDKCASUCXGFXIWNLZKNEPXRLJCMFHYDZKOVCAZPQAKIVUFPVYVOEMXQVXBNNFTKSTNJTBWRMWHJUQQFAKUDHOIZCDGAJDGGVXYLTLTSPMGFTRIFELPMAPOERJFSAEVJYUKMUUTE");

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
    msg.setTimeStamp(0.45182109864988573);
    msg.setSource(32092U);
    msg.setSourceEntity(129U);
    msg.setDestination(41358U);
    msg.setDestinationEntity(197U);
    msg.name.assign("OOAZUQVQPLBKQLQXHUBBCHFJRCOAMXUDIAXNMZTDN");

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
    msg.setTimeStamp(0.9361047531368867);
    msg.setSource(45246U);
    msg.setSourceEntity(203U);
    msg.setDestination(27014U);
    msg.setDestinationEntity(25U);
    msg.type = 136U;
    msg.error.assign("RATFUBWTPGBIXLDPULRHEFVFPWCMZXVLTHVAUYVSSDGJVMKYOLJYQOBDMQYQRGEIVFXGWCAXOJIODZBJCFHTRZZKSOKECEDVLIKEZOUFVUZDOIREYCGXGESAMWFSLWTXMGDPJRBKSJAAKHGNSQAYBPNQSAQQYMANPYBIHNXZRNCTHKEBJUDTFHHKS");

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
    msg.setTimeStamp(0.6607659347940611);
    msg.setSource(58260U);
    msg.setSourceEntity(132U);
    msg.setDestination(15675U);
    msg.setDestinationEntity(10U);
    msg.type = 135U;
    msg.error.assign("DWTRQEXTYLKXHEUJOINUJUTEISAJSYBYRAOGHSTQXBWLTCKMYVQBZLBHPHZKFNKYZCEDIOSZTOPMJEWABSITABXMGAPHMNVRQLYDSDBWRVJPNZHPDWQGZJYFVYZFHQMLUTXODTGRCXVSOKLNFXFMOSJEOUVEJGFDEZNAIAGMGXKMNCFULVIGMQOHRBKHYVWRNEFXDIXKZWULPJLRJRKGCLPCNBDATFPWUAKCPWQFVP");

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
    msg.setTimeStamp(0.5203738263022573);
    msg.setSource(34136U);
    msg.setSourceEntity(246U);
    msg.setDestination(28977U);
    msg.setDestinationEntity(52U);
    msg.type = 173U;
    msg.error.assign("EURLKEHWSYUQAYXDPPFJBONLBTWIPYCHHBEXVIAUNGJGYSTFIQZHAPWYROGKTOWAJEFVMOBYNGVEWLSBCZDKJWEVAFMCYJBC");

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
    msg.setTimeStamp(0.4336655686248867);
    msg.setSource(12226U);
    msg.setSourceEntity(147U);
    msg.setDestination(5930U);
    msg.setDestinationEntity(136U);
    msg.seq = 60679U;
    msg.sys_dst.assign("GNDLYQGBNABOPBVRUFATGNGFJEAMBXWPWJHUXBAZFNTOUMXFFEWKHQKCULUQKUSABCZLGPCOEIEHMJIOGFJOJCMNUIMLPDJDQKSONRYQLYYVXU");
    msg.flags = 152U;
    const char tmp_msg_0[] = {-55, -100, 74, 66, 25, -35, 68, -126, 112, -68, 25, -76, 59, -6, 36, 8, -53, -29, 105, -46, -1, -71, 48, 86, -103, -41, -41, -126, 29, 27, 80, 116, -20, -32, 101, -93, -81, -80, 33, -33, -45, 63, -6, -46, 0, 56, 79, 23, -66, -116, -116, 67, 90, 12, -48, -19, 110, 23, -99, -2, -94, 110, -21, 27, -51, 20, 40, 34, 103, 19, -25, -75, -51, -121, 20, 19, -62, 108, -55, 34, 69, -22, -72, -124, 112, 86, -19, 23, -28, -113, 28, -102, -48, -66, 95, -7, -97, -88, 84, 126};
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
    msg.setTimeStamp(0.14672686646664101);
    msg.setSource(11563U);
    msg.setSourceEntity(196U);
    msg.setDestination(32277U);
    msg.setDestinationEntity(200U);
    msg.seq = 63182U;
    msg.sys_dst.assign("QVNYUBWPTMSNSVHRRILKOVKIZOLKVZJISQDCGDQFNZAOIQMKERSTPBMCDFCAUTDILABQHXXFCBAMFETUBWCIZIHSDGDHGNVULHXCJNRLEXZGJOGXODEGFMEJASCBYJHPAURYEXFUPVKIJPXEQSDZMEGNOZWUKFIYVLTZDGSEWTMPKQAVYNQOJSHNPWFXZLORRMYTGWPVALASKBFYI");
    msg.flags = 59U;
    const char tmp_msg_0[] = {-116, 87, -2, 69, -17, -101, -38, -24, 102, 111, -89, 31, -46, -94, 79, 3, 2, 70, -24, 10, 31, -40, 121, -17, 83, 30, 79, -117, -28, 97, 105, 52, -10, 105, -38, 101, -52, -63, 96, -11, -28, 22, 50, -97, 22, -23, 93, -52, -65, -83, -118, -13, -58, -68, -5, -54, -92, -8, -93, -122, 73, 39, -126, 86, -90, 20, -47, -104, 97, 18, 106, 66, 36, 126, 5, 47, 60, -121, -107, 83, -65, 73, 88, -70, -79, 18, 23, -110, 93, 34, -32, -85, -110, -126, -59, 73, 75, 7, -56, -68, 9, -82, 62, -40, -34, 72, -32, 14, 107, 102, 0, 125, 56, -32, -10, -88, -97, -127, -5, -58, 83, 92, -29, 12, -96, -115, 81, 111, 19, -50, 109, -82, 69, -40, 42, -68, -110, 55, 43, -15, -44, 40, 48, 86, -127, 23, 27, -45, -79, 118, 97, 80, -63, -94, 104, 86, -121, 3, -3, 119, 122, 78, -57, -91, -46, 85, 40, -42, 80, -25, -55, 51, 41, -124, 77, 124, -41, -62, 77, 77, 35, -30, 32, 106, -84, -74, -68, 94, 27, 43, 13, 42, 123, 78, 80, -81, 7, 93, -114, -73, 45, -123, -38, -66, -25, -113, 70, 77, 115, -81, -108, 10, -100, -95, -94, -14, -126, -23, 35, -58, -96};
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
    msg.setTimeStamp(0.5525594122807467);
    msg.setSource(15267U);
    msg.setSourceEntity(212U);
    msg.setDestination(2514U);
    msg.setDestinationEntity(201U);
    msg.seq = 963U;
    msg.sys_dst.assign("MNUOJWGAUDRXTQALBFQFQYBYETJYBFZBUSUKTTVAWKJFVDYMZATMIHCAIGYHGCHBQOTXNQJEVIIYMQYXSDUDGRMLJVPLDVXOTLRIMKALROSBOJNGPAQVHLNKKWXHOPICSLMZHVFDZFLRYDJVQENUDRWKMYJZZLSSBETOPXHANZMIJPSHCKCZWEUNRXXPJOTWCNEEOXPFWWGFFZBPIUALVAESSFECITVIQPWNUOZXBY");
    msg.flags = 99U;
    const char tmp_msg_0[] = {5, 56, 36, -89, -107, 99, 118, -76, 83, 72, 29, 51, 26, 11, 107, -53, 8, -27, -106, -51, 90, -51, -24, -126, 121, 50, 99, -104, 28, 65, 118, 98, 115, 81, -61, 76, 74, 0, 56, 19, -107, 70, -19, 125, 16, 31, -71, -55, -84, 54, 13, 66, 116, -43, 10, 7, -92, 114, -57, 121, 17, 109, -32, 110, -53, 116, -26, -3, -8, -78, -45, 24, 22, -17, 88, -79, 117, -20, -63, -115, 117, 0, 3, -21, -63, 113, 86, -58, 72, 115, 7, -103, 113, 116, 88, -28, -38, 4, -12, -94, 109, 54, -36, 112, 33, 115, -35, 14, 4, -98, -19, -92, -33, -103, -42, 54, -96, -37, 5, 20, 119, -34, 70, 83, 84, -70, 93, -1, -18, 107, -65, -37, 8, 122, 54, 71, -64, -125, -47, -84, 22, -111, -9, -5, 7, -81, 93, 82, -3, -102, 126, -62, 53, 26, 88, -50, 58, 89, -84, -128, 35, 78, -46, 54, 119, 13, 106, -68, 86, 79, -69, 40, -32, 107, -122, 115, 12, 79, -110, -22, 20, -81, 9, 1, -12};
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
    msg.setTimeStamp(0.9899692497622791);
    msg.setSource(3585U);
    msg.setSourceEntity(105U);
    msg.setDestination(51222U);
    msg.setDestinationEntity(215U);
    msg.sys_src.assign("UCLSGMLCMHUTVRBHJQFGVMDCOHLDJIXALCESHRDISMGBOJYDKVXGBZOMVWBVTLAOXTDUANUXIPTYRXKGSPEECJZAIJYPPUFVMJFROLYFZMVGFVTNQOQEOXPTBWRWIDQMQHKGSNYSIYRNDUKPYRAPWYFQDVHSH");
    msg.sys_dst.assign("NQBOVBHECITVOXFGJZBCPSCWMWKYDOOAVZPHKSJRPIHEJDLDJPDCQJLNERLDJBXMTQRZIFJOADXZYWPECMFSQFUGXWSU");
    msg.flags = 98U;
    const char tmp_msg_0[] = {35, 24, 2, -4, 111, -69, 89, 122, 57, 119, -99, 23, -47, -103, -119, -91, -91, -42, 39, -103, -113, 96, 82, -46, 95, -21, -81, -21, -101, 57, 67, 86, -121, -118, -25, 55, -90, -4, 111, -32, 45, -65, -37, -124, -39, -13, -70, -21, -87, 58, 55, -46, 104, 14, -58, 58, -92, -1, -101, 12, -108, -93, 86, 6, 20, 124, 99, -121, -54, -54, 106, -90, 29, -7, -58, -16};
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
    msg.setTimeStamp(0.32953766296822995);
    msg.setSource(27436U);
    msg.setSourceEntity(106U);
    msg.setDestination(29945U);
    msg.setDestinationEntity(241U);
    msg.sys_src.assign("HFMDRCHROBJCSXNOUSHFIMROVLDMMOSBTHUAEALRFZQWOGJZSVQIDPXDWCOWDUFNYKDYRHTERXTWSGSVRNJKMEGUFVGIJOTTLPTKICMLBGIZFIZDPHVBJMGBECUFPNQWCDSRVTSQXUYAPZGQKAXKV");
    msg.sys_dst.assign("HMWUAAAAYLEGBCKOTWZEEMVPJFXNNWMUAMFESUVTHGOEWPDBRCLVLTGIRJQCIUHVBDHGNNKXMZLCQXIGOPSPQXNZHXSNVDPTBFHWSUZJJAQYPCPNOXRYWKSYIZLJOUQUPKMEQMFDMYCXPDWRFVLCBHUCGVVKJISRGDUHSFOKTJCEXLLRRMDGEBGVRDXIFEWWJIOWBUAYZTTFKAIZNYDOBRLFXROQYKBKQA");
    msg.flags = 248U;
    const char tmp_msg_0[] = {97, 86, -38, -7, 1, 120, -35, -110, 23, -104, 122, -24, 84, 68, 25, -63, 70, 54, -128, -10, -47, 27, -2, -17, 26, 75, -99, 31, -21, 24, 48, -29, -45, -84, -9, -7, -72, -22, 74, 106, -63, 12, -100, -114, 67, -86, 12, -84, 94, 118, 91, 64, -68, 61, -107, 39, -80, -85, -100, 106, -126, 26, -83, 29, -77, -72, -97, -100, 115, -60, 2, 69, 50, 111, -103, -2, -105, -82, -127, 84, 76, -106, 75, -58, -110, -15, 21, -4, 112, 87, -45, -82, -24, -29, 94, -24, -9, -12, -59, 15, 103, 71, 49, -75, 81, 55, 121, 67, 32, 29, 47, 106, -59, 68, 8, -44, 21, 67, 23, -70, -64, -4, 86, -80, -2, -3, 64, -98, 74, 44, -43, -17, -1, 19, -7, 99, 109, -13, 110, 15, -109, 40, -48, -63, -125, 55, 77, -84, 21, 108, -1, 45, 124, 18, -15, 84, 9, -56, 83, -74, -2, -57, -68, -4, -108, 35, 58, 102, -69, 68, 46, -121, -121, -26, -44, 16, 47, -97, -25, -90, -11, -48, -28, 12, 107, 80, -96, -47, 47, -26, 53, -98, -128, -53, -104, 35, -47};
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
    msg.setTimeStamp(0.21117452177672902);
    msg.setSource(20694U);
    msg.setSourceEntity(105U);
    msg.setDestination(62985U);
    msg.setDestinationEntity(53U);
    msg.sys_src.assign("MXLDTEHNJKWPVCDEFUJNOINYDDYYGGWRWMWBLQEZAXFSTBXULMNRYFROIMMGAITBNZZRJRVLJASIQLUZYRMEASCXCUGYFKNZBGDQFKKTP");
    msg.sys_dst.assign("CYBKIVDUWCGFCQPRDHMTXAKZKADBTXWGQEHCUJWJSMTQKQZZFQDZKIZTCLTHHZRNLWBSUOMCGETZNAGDHFPMMOQNXHOJNWJLQVAVLEIYSHJYEFCODFOZPSIQPY");
    msg.flags = 45U;
    const char tmp_msg_0[] = {-40, 14, 86, -12, 13, 24, -68, -27, -83, 84, -122, -6, -116, 44, -62, 85, -6, 47, 27};
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
    msg.setTimeStamp(0.09307350448783125);
    msg.setSource(43362U);
    msg.setSourceEntity(196U);
    msg.setDestination(26064U);
    msg.setDestinationEntity(155U);
    msg.seq = 17386U;
    msg.value = 115U;
    msg.error.assign("HBQNZGPLNUFUEKURRDYRR");

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
    msg.setTimeStamp(0.304096851113532);
    msg.setSource(29660U);
    msg.setSourceEntity(170U);
    msg.setDestination(866U);
    msg.setDestinationEntity(159U);
    msg.seq = 16859U;
    msg.value = 163U;
    msg.error.assign("APTWLOCSJQJMHJELSYTEXPQWCKIMMGGYOMJUVRLUNKBZLZKCXCUYWLYUTUPHSPOFWIMEXGYAEJHADNJZLOALZGMHNRQRHIUTQROFPBRTZGEHOCNPSWMFPQQUXIKRKYJRSBXZFPDGBFKSAAQSXKDBNVSFFHVSLMTIWRBD");

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
    msg.setTimeStamp(0.9856294082933056);
    msg.setSource(43812U);
    msg.setSourceEntity(230U);
    msg.setDestination(7351U);
    msg.setDestinationEntity(170U);
    msg.seq = 17538U;
    msg.value = 134U;
    msg.error.assign("CCTOOZMRBAEQOXKHIUTYRPRWYIPVHNJOPPVMJKQCSNNLHJZGBZBYKUNXZVNYZQIHJEULUSSYOJZUZLUOTSWCTAAMJUKXBQFANXRWUDZPSEIWEDKXMWDOWQRERFQGHGMDDLIANXKUPAJGRHJDLQSZYFDRDCBVIVCIGNOYABLITU");

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
    msg.setTimeStamp(0.5387492647652419);
    msg.setSource(45803U);
    msg.setSourceEntity(146U);
    msg.setDestination(33585U);
    msg.setDestinationEntity(168U);
    msg.seq = 14737U;
    msg.sys.assign("XUQZKGSNISOCDUSBVNKLSNFLZPODKYMGRIFROQPRDROYBBMQFKLVTCWKATYEJCSIJOLGBRTBEYISPFPWYYUVVFWCSJMVKEQWLTFCIXXUMDXGYFLPAHZRTDGMYWUQLBHAYCSNHDTDEAQWKEZQDCNUANAGRKXIUMXFAUAINHHJJROTFZPXNBOEKBJLHCMQGPWZOPTEXIK");
    msg.value = 0.49035436087260964;

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
    msg.setTimeStamp(0.3544965205300159);
    msg.setSource(56388U);
    msg.setSourceEntity(163U);
    msg.setDestination(32277U);
    msg.setDestinationEntity(7U);
    msg.seq = 58077U;
    msg.sys.assign("ROIEWEWCXYXKLMDOBYJCFCIAFYPSUTXZXWADHLANGBVFJULBEIXTLIHBSOFEQCZTDCRSOFGFPUIZNSSYIHLTOSKAHB");
    msg.value = 0.5302650150879038;

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
    msg.setTimeStamp(0.7432837721345323);
    msg.setSource(13358U);
    msg.setSourceEntity(20U);
    msg.setDestination(33180U);
    msg.setDestinationEntity(105U);
    msg.seq = 58381U;
    msg.sys.assign("HDXLAANVKUUCENEZQJPKHLJXYZEWSETTQKHTOFYXECVUNOPKVDJDWSXFWVYQHQHWFNUIGBXNRXKY");
    msg.value = 0.22869084889615876;

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
    msg.setTimeStamp(0.09489744317209947);
    msg.setSource(53531U);
    msg.setSourceEntity(2U);
    msg.setDestination(19902U);
    msg.setDestinationEntity(102U);
    msg.action = 232U;
    msg.longain = 0.7920056829273364;
    msg.latgain = 0.3167801853142478;
    msg.bondthick = 4270952180U;
    msg.leadgain = 0.04311809327878635;
    msg.deconflgain = 0.741174760093504;

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
    msg.setTimeStamp(0.7031055123001174);
    msg.setSource(58180U);
    msg.setSourceEntity(219U);
    msg.setDestination(4525U);
    msg.setDestinationEntity(218U);
    msg.action = 91U;
    msg.longain = 0.6320190486305896;
    msg.latgain = 0.1184595138678799;
    msg.bondthick = 2405016374U;
    msg.leadgain = 0.2470709699739364;
    msg.deconflgain = 0.05659940558405696;

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
    msg.setTimeStamp(0.3280805992811693);
    msg.setSource(17789U);
    msg.setSourceEntity(68U);
    msg.setDestination(50807U);
    msg.setDestinationEntity(168U);
    msg.action = 1U;
    msg.longain = 0.8048107910375678;
    msg.latgain = 0.6073787170842427;
    msg.bondthick = 1465194767U;
    msg.leadgain = 0.8660582292045571;
    msg.deconflgain = 0.7922848014224205;

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
    msg.setTimeStamp(0.2043529227691676);
    msg.setSource(5744U);
    msg.setSourceEntity(156U);
    msg.setDestination(19493U);
    msg.setDestinationEntity(128U);
    msg.err_mean = 0.6309987689487323;
    msg.dist_min_abs = 0.7684156165198759;
    msg.dist_min_mean = 0.45569760616429367;

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
    msg.setTimeStamp(0.8427419392215565);
    msg.setSource(13556U);
    msg.setSourceEntity(23U);
    msg.setDestination(39782U);
    msg.setDestinationEntity(19U);
    msg.err_mean = 0.8283644445702222;
    msg.dist_min_abs = 0.5431427641776477;
    msg.dist_min_mean = 0.17328248387918976;

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
    msg.setTimeStamp(0.00039666952091432783);
    msg.setSource(16688U);
    msg.setSourceEntity(45U);
    msg.setDestination(3268U);
    msg.setDestinationEntity(192U);
    msg.err_mean = 0.5156576828230753;
    msg.dist_min_abs = 0.25226129363942673;
    msg.dist_min_mean = 0.1796328517188739;

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
    msg.setTimeStamp(0.5164538187041339);
    msg.setSource(29852U);
    msg.setSourceEntity(88U);
    msg.setDestination(69U);
    msg.setDestinationEntity(166U);
    msg.action = 27U;
    msg.lon_gain = 0.0819898152374271;
    msg.lat_gain = 0.3986282418840571;
    msg.bond_thick = 0.47434455930697184;
    msg.lead_gain = 0.1232335381544859;
    msg.deconfl_gain = 0.5225670129324983;
    msg.accel_switch_gain = 0.1908692870265607;
    msg.safe_dist = 0.4268316016307059;
    msg.deconflict_offset = 0.09898422057180101;
    msg.accel_safe_margin = 0.2140852536995459;
    msg.accel_lim_x = 0.464821766141843;

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
    msg.setTimeStamp(0.8927963244997063);
    msg.setSource(2769U);
    msg.setSourceEntity(203U);
    msg.setDestination(5665U);
    msg.setDestinationEntity(88U);
    msg.action = 187U;
    msg.lon_gain = 0.27738672725805713;
    msg.lat_gain = 0.5170104441288829;
    msg.bond_thick = 0.16472074288601146;
    msg.lead_gain = 0.12947382075277158;
    msg.deconfl_gain = 0.21486962648090846;
    msg.accel_switch_gain = 0.34129116662937;
    msg.safe_dist = 0.18828366033834232;
    msg.deconflict_offset = 0.33941864451286985;
    msg.accel_safe_margin = 0.5857791831348327;
    msg.accel_lim_x = 0.12024227432540446;

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
    msg.setTimeStamp(0.838635450397664);
    msg.setSource(31072U);
    msg.setSourceEntity(111U);
    msg.setDestination(60026U);
    msg.setDestinationEntity(21U);
    msg.action = 246U;
    msg.lon_gain = 0.2939903282573192;
    msg.lat_gain = 0.22173370065751552;
    msg.bond_thick = 0.8504252824674381;
    msg.lead_gain = 0.3694378003134835;
    msg.deconfl_gain = 0.8164377000094409;
    msg.accel_switch_gain = 0.6630201678695807;
    msg.safe_dist = 0.7693408332838549;
    msg.deconflict_offset = 0.5020226466573897;
    msg.accel_safe_margin = 0.4108833342386612;
    msg.accel_lim_x = 0.07502430251386938;

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
    msg.setTimeStamp(0.26198707831899637);
    msg.setSource(47518U);
    msg.setSourceEntity(149U);
    msg.setDestination(36158U);
    msg.setDestinationEntity(136U);
    msg.type = 250U;
    msg.op = 109U;
    msg.err_mean = 0.3187747300383045;
    msg.dist_min_abs = 0.6650471559188934;
    msg.dist_min_mean = 0.723374752114324;
    msg.roll_rate_mean = 0.9575720016616648;
    msg.time = 0.1974714269059964;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 225U;
    tmp_msg_0.lon_gain = 0.6321003102489742;
    tmp_msg_0.lat_gain = 0.19845102794267178;
    tmp_msg_0.bond_thick = 0.05954170436054729;
    tmp_msg_0.lead_gain = 0.8075486646477938;
    tmp_msg_0.deconfl_gain = 0.4126585606280806;
    tmp_msg_0.accel_switch_gain = 0.7820844078397923;
    tmp_msg_0.safe_dist = 0.35226981810013946;
    tmp_msg_0.deconflict_offset = 0.7569388184309441;
    tmp_msg_0.accel_safe_margin = 0.28677772940896507;
    tmp_msg_0.accel_lim_x = 0.831233487359546;
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
    msg.setTimeStamp(0.49082763057039025);
    msg.setSource(6516U);
    msg.setSourceEntity(38U);
    msg.setDestination(22263U);
    msg.setDestinationEntity(12U);
    msg.type = 152U;
    msg.op = 244U;
    msg.err_mean = 0.006432581980898466;
    msg.dist_min_abs = 0.26336039609946804;
    msg.dist_min_mean = 0.21654515665740004;
    msg.roll_rate_mean = 0.05150166385577282;
    msg.time = 0.70420679045182;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 68U;
    tmp_msg_0.lon_gain = 0.48406788734555717;
    tmp_msg_0.lat_gain = 0.2783049172513249;
    tmp_msg_0.bond_thick = 0.19025211249512064;
    tmp_msg_0.lead_gain = 0.907420570255968;
    tmp_msg_0.deconfl_gain = 0.2811090903396144;
    tmp_msg_0.accel_switch_gain = 0.35675259873411413;
    tmp_msg_0.safe_dist = 0.6450533074473286;
    tmp_msg_0.deconflict_offset = 0.39904402349615575;
    tmp_msg_0.accel_safe_margin = 0.5956785593071985;
    tmp_msg_0.accel_lim_x = 0.14984116525914482;
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
    msg.setTimeStamp(0.9236184479908301);
    msg.setSource(9261U);
    msg.setSourceEntity(64U);
    msg.setDestination(19882U);
    msg.setDestinationEntity(23U);
    msg.type = 17U;
    msg.op = 106U;
    msg.err_mean = 0.4295205703433955;
    msg.dist_min_abs = 0.6287195537540878;
    msg.dist_min_mean = 0.7756317381039641;
    msg.roll_rate_mean = 0.019980011670941322;
    msg.time = 0.649849118842185;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 62U;
    tmp_msg_0.lon_gain = 0.5539545396048152;
    tmp_msg_0.lat_gain = 0.16966481475427309;
    tmp_msg_0.bond_thick = 0.5760667946532895;
    tmp_msg_0.lead_gain = 0.8211617191758938;
    tmp_msg_0.deconfl_gain = 0.8558307288815342;
    tmp_msg_0.accel_switch_gain = 0.08556026117492965;
    tmp_msg_0.safe_dist = 0.6268904071277509;
    tmp_msg_0.deconflict_offset = 0.8221957375670885;
    tmp_msg_0.accel_safe_margin = 0.22532271747222798;
    tmp_msg_0.accel_lim_x = 0.18054508063521868;
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
    msg.setTimeStamp(0.7953514014121833);
    msg.setSource(43927U);
    msg.setSourceEntity(122U);
    msg.setDestination(20405U);
    msg.setDestinationEntity(21U);
    msg.uid = 156U;
    msg.frag_number = 41U;
    msg.num_frags = 194U;
    const char tmp_msg_0[] = {-77, 24, -52, 112, -35, -29, 121, 62, -54, -68, 20, -125, 13, -42, -125, -22, -107, -113, 35, -91, 111, -94, 66, -37, -63, 114, -16, 88, -66, -29, -56, 25, -40, -82, -108, -106, -87, -106, 12, 1, -51, -89, -112, 81, 98, -79, 17, 43, 83, -18, 8, -86, -46, -106, -98, -38, -105, 109, 110, 109, -90, 100, -73, -38, -53, -5, 2, 84, -98, -20, -105, 69, -71, 70, 81, -39, -104, -59, 11, 122, 120, 68, 18, -80, 61, -5, -62, 84, 57, 16, 17, 48, -27, -19, -92, 122, -6, -8, 47, -59, -111, -6, 17, -8, -39, 43, -42, -86, -85, -60, 30, 110, -117, 109, 63, -88, -56, -30, -44, -23, 124, 126, 100, -18, -76, -28, 109, 14, -110, 65, 27, 46, -109, -85, -75, -119, 69, -42, -80, 5, -119, -28, -120, -47, 7, -83, 107, -36, -26, -127, 30, -7, 14, -76, -108, 39, -124, -64, 30, -1, -37, -100, -109, -100, -37, 102, 69, -107, -106, -72, -57, 21, -105, 1, 3, 112, 59, -47, -15, 66, 59, -75, 72, 68, -88, 97, -68, -63, 89, -120, 91, -98, -4, -127, 44, -72, 56, -62};
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
    msg.setTimeStamp(0.48381561412064356);
    msg.setSource(31336U);
    msg.setSourceEntity(29U);
    msg.setDestination(61045U);
    msg.setDestinationEntity(101U);
    msg.uid = 145U;
    msg.frag_number = 186U;
    msg.num_frags = 65U;
    const char tmp_msg_0[] = {-8, -39, -85, 122, 54, 99, -113, 3, 85, 85, 94, -102, -57, 81, 69, 11, -22, -13, 58, 67, -6, -87, 98, -39, 54, 65, -91, 15, -27, 8, -45, -9, -29, 43, 76, -91, -15, -56, -106, -32, 99, 123, 44, -22, -102, -111, 60, 97, -91, 110, 11, -101, 103, 38, -46, 47, 82, -99, 15, -57, 112, -75, 123, -100, -100, -119, -103, 65, -105, -32, 126, 126, -36, -112, -109, 12, -63, -37, 14, -31, 5};
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
    msg.setTimeStamp(0.41496105390625226);
    msg.setSource(8947U);
    msg.setSourceEntity(124U);
    msg.setDestination(51334U);
    msg.setDestinationEntity(173U);
    msg.uid = 119U;
    msg.frag_number = 250U;
    msg.num_frags = 66U;
    const char tmp_msg_0[] = {13, 94, -77, 71, -125, -107, 83, -54, -124, -106, 119, -24, 86, 109, -27, -32, -51, 6, -109, -24, -63, -39, 66, 107, 49, 28, 5, 84, 113, -13, -127, 95, -43, -6, 63, 17, 95, 98, -123, -33, -76, -114, 12, -116, 2, -13, 113, 75, 122, -116, -10, -39, 111, 57, 118, 43, -86, 26, 26, -64, 33, 52, 57, -59, -57, -98, 120, 101, 122, -25, -30, 71, 6, 63, -110, 19, 64, 26, -94, -71, -98, 28, -110, -4, -53, 40, -104, -49, -121, -69, -37, 53, -104, 89, 32, 76, 85, 60, -33, 117, 97, -3, -58, -46, -38, -29, -75, 83, -19, -97, -125, 5, 75, -56, 97, 31, -63, 107, -101, -30, 72, 110, -9, 37, 88, 124, 72, -100, -124, -3, 62, 94, 68, -60, 61, -110, -13, -82};
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
    msg.setTimeStamp(0.1521574362554874);
    msg.setSource(27173U);
    msg.setSourceEntity(41U);
    msg.setDestination(30938U);
    msg.setDestinationEntity(121U);
    msg.content_type.assign("DJIDAZWVOXHLNHMWHZSFFSBSFJYFIMXNMSUJWDLBJDNHZXFQDUOHLJCSFOKNGEUXBOMSEJDRBRKFCFEVTVASPBVPTONVPLWJIGACQEZQEKSRUJYRPIB");
    const char tmp_msg_0[] = {-45, -10, -97, -119, -7, -55, -24, 59, 24, -4, -25, 119, 106, 118, -82, 77, 7, -39, -43, -87, -101, 33, -42, -61, 39, 36, 72, -108, -87, 83, -36, 70, 110, -29, 109, -5, 22, -70, -67, 65, -14, -43, 47, 57, 104, -11, -10, 126, -71, 3, -102, -69, 39, -50, 28, -33, 103, 115, 123, 37, 55, -120, 1, -90, -115, 30, -22, 118, 43, -99, 116, 126, 12, 34, -36, 93, -39, -92, 49, 101, 81, -49, -82, 29, -124, 6, 6, -45, 118, -119, 12, -4, 115, -29, 90, -86, 29, 12, 11, 28, -11, -11, 45, 96, -80, 70, 34, 32, -17, 0, -68, 110, -87, -56, -9, 3, 109, -50, 26, 54, 22, -16, 40, 118, -127, -108, -43, 67, 93, 17, -99, 50, 33, -30, -19, 100, 54, 108, 74, -2, 93, 36, 120, 57, 83, 15, -122, 106, 21, 98, -58, 81, 59, 111, -78, -10, -100, 60, -73, -76, 18, 5, -105, 46, 106, -97, 124, 97, 92, -95, -19, 3, 8, 73, -35, -112, 65, -125, 88, 106, -97, -125, -71, -110, 48, -2, -22};
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
    msg.setTimeStamp(0.11220444067465218);
    msg.setSource(14463U);
    msg.setSourceEntity(140U);
    msg.setDestination(42537U);
    msg.setDestinationEntity(93U);
    msg.content_type.assign("UQENMHOIZOEKROYSEGTBRCGPIWLFMXLLHEVSHEWSGDYBMUJEPZKIJRTHPNVRPRQLBANEHQTAZZVNLIWKJKGGJGGZHYROYRCVMCHEKBVMMUKXHFEQWVTIPFAUUYPWCQVDWXZOQQXLXBVLZJOTSJFSAKFPPNNCRAHDXYSDTTYBDIZYAIZRUAUPOQSWADXNCDLTAZYBWCUCGIQGKNFDMXIDPQTFXXMSCJTHAUUVGORNBSVJEKYKFIJF");
    const char tmp_msg_0[] = {-69, -56, 60, -37, -115, 119, -28, -60, 108, 40, 58, 64, -9, -100, 34, 85, 96, 82, 51, 107, -30, 28, 115, -15, 91, -113, 14, 33, -20, -26, -60, 48, 8, -82, 84, 5, -119, -28, 69, -32, -7, -128, 1, -23, -39, -48, 77, -122, 121, -56, -122, 58, -63, -105, 36, 2, -3, 31, 74, 10, 114, 71, 27, -69, 106, -37, 54, -24, -63, 117, -7, 42, -61, 84, -30, 30, 65, 119, 61, -110, -110, 94, 14, -107, -111, 35, 17, -54, -101, -102, 84, -45, -111, -39, 14, -112, 19, -66, -33, 32, 48, 45, 126, -97, 28, -61, 20, -18, 41, 96, -59, -3, 106, -47, 69, 13, -79, 84, -35, 50, -33, 89, -128, 69, -31, 8, -19, 93, 81, -51, -40, 97, -75, -24, -90, 56, -77, -85, 84, -115, -49, 92, -33, 113, 53, 102, -100, 119, 36, 102, -113, 110, -12, -5, -95, 76, -112, 105, -80, 114, -56, -94, -102, 6, -26, -26, 53, 85, 40};
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
    msg.setTimeStamp(0.9884204667124674);
    msg.setSource(17512U);
    msg.setSourceEntity(56U);
    msg.setDestination(5395U);
    msg.setDestinationEntity(58U);
    msg.content_type.assign("YGBPQDNNFWRCMXFOXEIODUHCHFZCMAATZNGSDTWFGKQYJBTEVUXIAOHZRMQJVAYQSVCFPCGJBOYDSAWSPSDLREUEOZKKZEGJISUVLXXDHPGSNWTOIJSMJLJPFGSODRPBFNNBHWZNYJUEYHQNOTMOUVLEAGWRXMCVMHIQILURWDLFVPQXSEKDZBZMXVZMDQPATLIJRBVCHATY");
    const char tmp_msg_0[] = {15, 79, 116, 0, 10, -40, 101, -27, -26, 36, 34, 45, -113, -72, -10, -44, -72, -70, 110, -93, -91, -12, 31, 125, -10, -39, 9, -56, -10, 14, 47, 51, 64, 34, 73, -112, -115, -56, -50, 36, 11, -53, 107, 101, -13, -14, -40, -24, 31, -71, -62, -59, -25, 88, -109, 75, 79, 80, -124, 38, -60, -10, 116, 15, -112, -128, -95, -17, 25, 37, -1, 64, 58, 98, 35, -57, -12, -112, -108, 104, -11, 113, -25, 111, 116, 20, -13, -59, 56, -128, 123, 18, 124, -56, -80, -79, 82, 106, -122, 27, 1, -121, 23, 124, -10, -102, -84, -88, 122, -81, -115, 0, -17, -7, -50, 9, -50, 124, 10, -52, -82, 112, 116, -17, 11, -32, 20, 3, -19, 67, 24, 6, 29, 107, -1, 105, 117, 53, -22, -127, -113, 91, 107, 4, -95, -2, -60, -26, -105, -65, -7, 48, 60, -106, 43, 111, 106, 111, -48, 28, 66, 25, -81, 69, 83, 49, -58, 93, -3, 2, 108, -79, -29, 19, -28, 65, 109, 74, 7, 16, 2, -53, 108, 99, 18, 63, -38, 34, -82, -18, 107, -22, -14, 112, -41, 95, -74, -7, 53, 4, 110, 123, 71, -31, 66, 110, 91, -26, -2, -61, -78, 92, 75, 73, -91, 110, -7, 78, 39, 24, -57, 25, 47, -112, 41, -123, -9, -63, 78, -99, -83, 104, 79, 123, 67};
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
    msg.setTimeStamp(0.3590734654109884);
    msg.setSource(56423U);
    msg.setSourceEntity(191U);
    msg.setDestination(20116U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.43090170541017236);
    msg.setSource(2535U);
    msg.setSourceEntity(216U);
    msg.setDestination(15464U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.060553283007885206);
    msg.setSource(55719U);
    msg.setSourceEntity(127U);
    msg.setDestination(57719U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.1681405163147679);
    msg.setSource(20304U);
    msg.setSourceEntity(103U);
    msg.setDestination(55500U);
    msg.setDestinationEntity(239U);
    msg.target = 6457U;
    msg.bearing = 0.04599449020097757;
    msg.elevation = 0.17652365231705636;

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
    msg.setTimeStamp(0.4336154788362775);
    msg.setSource(58836U);
    msg.setSourceEntity(208U);
    msg.setDestination(63105U);
    msg.setDestinationEntity(90U);
    msg.target = 24854U;
    msg.bearing = 0.9567948059805905;
    msg.elevation = 0.18689756597518326;

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
    msg.setTimeStamp(0.4231057641304522);
    msg.setSource(58572U);
    msg.setSourceEntity(56U);
    msg.setDestination(10588U);
    msg.setDestinationEntity(45U);
    msg.target = 24796U;
    msg.bearing = 0.9008486809514148;
    msg.elevation = 0.9282897795909915;

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
    msg.setTimeStamp(0.12734752760190104);
    msg.setSource(17393U);
    msg.setSourceEntity(37U);
    msg.setDestination(31406U);
    msg.setDestinationEntity(18U);
    msg.target = 20708U;
    msg.x = 0.6685408929717684;
    msg.y = 0.820968851205956;
    msg.z = 0.2055998631043432;

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
    msg.setTimeStamp(0.28581630457738494);
    msg.setSource(30732U);
    msg.setSourceEntity(204U);
    msg.setDestination(30848U);
    msg.setDestinationEntity(7U);
    msg.target = 11101U;
    msg.x = 0.7600535876677788;
    msg.y = 0.013241427427173935;
    msg.z = 0.5609157784447558;

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
    msg.setTimeStamp(0.9061174854464513);
    msg.setSource(5844U);
    msg.setSourceEntity(188U);
    msg.setDestination(12455U);
    msg.setDestinationEntity(158U);
    msg.target = 20790U;
    msg.x = 0.06749448781190082;
    msg.y = 0.35318995919452356;
    msg.z = 0.1366059394269794;

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
    msg.setTimeStamp(0.5266829650797541);
    msg.setSource(53712U);
    msg.setSourceEntity(14U);
    msg.setDestination(19537U);
    msg.setDestinationEntity(50U);
    msg.target = 26116U;
    msg.lat = 0.34166389635624506;
    msg.lon = 0.4994528723116428;
    msg.z_units = 159U;
    msg.z = 0.993419765532107;

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
    msg.setTimeStamp(0.5260745914073814);
    msg.setSource(33518U);
    msg.setSourceEntity(43U);
    msg.setDestination(54176U);
    msg.setDestinationEntity(136U);
    msg.target = 32723U;
    msg.lat = 0.11536190741077079;
    msg.lon = 0.5773943135741826;
    msg.z_units = 111U;
    msg.z = 0.6108796661427066;

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
    msg.setTimeStamp(0.5859601977239127);
    msg.setSource(8833U);
    msg.setSourceEntity(70U);
    msg.setDestination(2978U);
    msg.setDestinationEntity(177U);
    msg.target = 50135U;
    msg.lat = 0.7109610682757084;
    msg.lon = 0.2884440232067601;
    msg.z_units = 112U;
    msg.z = 0.9973158471299118;

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
    msg.setTimeStamp(0.22743785998568777);
    msg.setSource(57389U);
    msg.setSourceEntity(172U);
    msg.setDestination(51630U);
    msg.setDestinationEntity(47U);
    msg.locale.assign("HMGDBKNYDLVTJUQOFEAMPEERYPFMBNLMKUSFVIHGMJAUQIKZESYTDHBQZZPBOXIUIZOXBQAHIMANMAPEUVLKXSLMXLKXAZJK");
    const char tmp_msg_0[] = {6, -39, -2, -4, 10, 80, 38, 81, 28, -96, 46, -88, -10, 31, -89, 30, 61, 97, 42, -39, -104, 1, 115, -88, -115, 23, 64, -37, 84, 48, -122, -24, -4, 100, 29, 34, 2, 12, 71, 2, 77, 9, -99, 95, 94, 107, 28, 36, -57, -123, -14, -127, -99, -17, 7, 104, -119, 20, 106, 84, -89, 66, -88, 73, -86, -86, 103, 124, 9, -20, 47, 75, 58, 1, -27, 52};
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
    msg.setTimeStamp(0.6183691799819794);
    msg.setSource(7283U);
    msg.setSourceEntity(233U);
    msg.setDestination(10748U);
    msg.setDestinationEntity(79U);
    msg.locale.assign("JADELQBWQHX");
    const char tmp_msg_0[] = {-110, -23, -61, 121, -11, -5, -111, 22, 17, -65, 84, -38, 113, 109, 5, 25, -50, -17, 84, 87, 119, 17, -5, 50, 37, 28, -103, 11, 96, 122, -65, -74, -46, -10, -33, 123, 21, 88, -70, 117, -83, 84, 97, -23, -92, -61, -29, -122, -4, -68, 85, 25, 25, 100, -87, -12, -127, 81, -127, 113, 81, -25, 62, 93, -51, -93, 35, -30, 0, 5, 90, -71, -55, 76, 82, -82, 46, 30, 38, 26, -91, -115, 58, -45, -116, 99, 3, -112, -34, 17, -24, 101, -17, 22, -66, -21, -4, 124, 57, -115, -109, -76, 4, -11, -116, 12, -7, -110, 105, -105, -61, 34, -64, 58, 59, 86, 37, -26, -64, 81, 43, 107, 48, 63, 13, -7, -121, -50, -34, 43, 106, -57, -21, 73, 62, 48, 19, 77, 121, -79, -56, -58, 58, -27, 17, 48, 73, -103, 34, -37, 108, -98, 87, 100, -109, 100, -102, -1, -55, 92, -8, -4, -41, 105, 45, -29, 83, 38, -83, 15, -69, 116, -78, 116, -114, 123, -112, 51, -104, 49, 21, 118, -6, -18, -120, -88, -28, -67, 71, -127, -110, -1, 84, -127, 80, -32, 60, 10, 24, -79, -97, 84, -77, -112, -119, -104, -11, 64, -54, 116, 68, 68, 86, -88, 21, -126, 8, 74, -21, 114, 20, 53, -11, 29, -83, -52, 104, 100, -26, 102, 10, -43, 20, -82, 32, -83, 45};
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
    msg.setTimeStamp(0.6372800037151367);
    msg.setSource(26543U);
    msg.setSourceEntity(227U);
    msg.setDestination(41261U);
    msg.setDestinationEntity(57U);
    msg.locale.assign("JDTVCPMAYMDTVONKPAAZSCSOZUKPVQEHSQZOMRPYOBLLVEJHTXIANJPITRGILLFBCGTVEMWYSWKZLDZYDGHRQSPIIGBTXWTRFAPBSFYRUHVZREAOHWRSTBNEARMOBBNJXVVTFCLYEDZNSXXTKIVOBQODCMEQGMUFPNDGWKCPUDHGAUPLFJSDRKQHMMFLZWYQFXJDWLZUBEQISXEUICAYKCVIJNJXZC");
    const char tmp_msg_0[] = {112, -97, -101, 25, 80, 94, 93, 110, -2, -69, -24, -48, 21, 11, -27, -61, 15, -34, -109, 17, -126, -83, -104, 71, -15, -37, -113, -74, 43, 116, -6, 63, 61, -82, 64, -16, 7, 16, 96, 32, 57, 104, -96, -68, 117, -7, -56, 108, 47, 28, -81, -9, -127, 110, -43, 37, 20, 117, -79, 32, 8, -55, -118, 115, -8, -124, 85, -51, -84, 93, -62, 17, 105, 99, 113, 110, -48, -114, 1, 2, 62, 108, 13, 115, 109, -25, 100, -106, -45, -92, -22, 62, -115, -59, 22, 82, 67, -8, -89, -9, -103, 65, -27, -86, -65, -35, 83, 94, -115, -1, -128, 86, -4, -88, 15, -35, 70, 117, 85, 10, -120, -67, 87, -55, 115, -47, -122, -114, -71, -116, -124, -58, 82, -109, 61, -84, -80, -27, 60, -73, -23, 71, -24, 6, -13, 98, -20, 21, -86, 81, 99, -121, 35, -107, 90, 96, 30, -92, -33, 113, -122, -50, -34, -84, 122, 52, 97, -29, -118, -89, -100, 126, 113, -31, -69, -49, -21, 18, -73, 116, -117, 35, 96, -118, 125, -19, 100, -116, -104, 70, -128, -114, 119, -39, -94, 17, -41, -101, -16, 4, -98, -13};
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
    msg.setTimeStamp(0.9232678312308894);
    msg.setSource(30673U);
    msg.setSourceEntity(0U);
    msg.setDestination(43355U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.849902301511153);
    msg.setSource(53859U);
    msg.setSourceEntity(178U);
    msg.setDestination(22839U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.708562635257372);
    msg.setSource(47866U);
    msg.setSourceEntity(245U);
    msg.setDestination(63396U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.8073258115898726);
    msg.setSource(39642U);
    msg.setSourceEntity(177U);
    msg.setDestination(35054U);
    msg.setDestinationEntity(61U);
    const char tmp_msg_0[] = {72, -48, -54, 65, 87, 117, -55, 22, -21, -119, 97, -119, 92, 22, -13, 84, -7, -10, -25, -31, 27, 27, -119, 117, 79, 47, 49, -123, -57, 76, 117, 79, 63, -34, -126, 9, -57, -59, 13, 56, 62, -11, -117, 124, -28, -84, 83, -2, -35, -37, -112, -25, 92, -99, -53, -65, -88, -45, 98, 109, 57, 26, -57, 25, 68, -32, 0, 110, -42, -58, -62, -91, 73, 7, 125, 100, -1, -40, -52, -70, -41, 46, 110, -4, 58, -110, 54, 35, 124, -101, -44, -19, 18, 71, 107, 125, -25, -3, 50, -1, 90, -50, -46, 99, 79, 61, -77, -127, 106, 53, 34, -19, -44, -26, 73, -15, 110, -114, -117, 103, -100, 99, -100, -50, 4, 117, 32, -117, 52, -12, 25, -119, 62, 5, -20, -73, -103, -25, 115, -52, 14, -7, -100, -10, -125, 54, -54, 9, -70, -38, 85, 14, -94, -66, 7, 81, -37, 76, -112, -9, -60, 108, 7, 59, 92, -19, 104, 10, 58, 113, 46, 91, -125, -121, -65, -27, 103};
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
    msg.setTimeStamp(0.8031355852879598);
    msg.setSource(32046U);
    msg.setSourceEntity(234U);
    msg.setDestination(36U);
    msg.setDestinationEntity(201U);
    const char tmp_msg_0[] = {-116, -9, -48, -96, 116, 92, 63, -105, -48, 12, -47, -23, 25, -73, 122, -1, 50, -30, 98, -15, -19, -24, -72, 56, -76, 52, 78, 95, -22, -75, -99, -118, 73, -52, -11, 40, -31, -101, -24, -110, 50, -108, -38, -119, 52, -53, -43, -112, 50, 120, 48, 66, -113, 43, 39, 8, 47, 48, 75, -82, 123, -110, -62, -52, -79, -82, 92, -43, 79, 23, 105, -76, -101, 126, -119, 74, -85, 84, 110, -39, 44, -100, 95, 55, 55, -127, -108, 22, 45, -6, -35, -60, 19, -69, -124, -112, -127, -55, -95, -57, 78, 29, 51, -95, -92, 61, -37, -4, -85, -69, 52, 85, -9, -96, -41, 8, 74, -24, 68, -48, -101, -111, -88, -33, -72, -105, 111, -97, 48, 49, 71, 76, -56, 31, 40, 81, -59, -74, -105, 47, -64, -103, -64, 18, 1, -97, -36, -122, -2, 91, -125, 109, 102, -11, 1, -115, 50};
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
    msg.setTimeStamp(0.13785611610275295);
    msg.setSource(37464U);
    msg.setSourceEntity(173U);
    msg.setDestination(1980U);
    msg.setDestinationEntity(183U);
    const char tmp_msg_0[] = {27, 56, 41, -37, -115, -2, -97, -51, -122, 63, -41, -87, -15, 39, -14, -4, 1, 21, 8, -78, -2, -115, -25, -121, -16, 85, -52, -6, -52, -58, 18, -61, -123, 29, 56, 42, -59, 122, 116, -17, -126, -4, 103, -57, -4, 21, 83, -24, 41, 91, 36, -5, -69, 33, -29, -112, -44, -78, -65, -45, 3, 124, 37, -9};
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
    msg.setTimeStamp(0.6498772612255321);
    msg.setSource(169U);
    msg.setSourceEntity(2U);
    msg.setDestination(36910U);
    msg.setDestinationEntity(131U);
    msg.json.assign("KKTYDNABBBYRIPXTPWMFOGIBMBZGJFBNVOKSJAOWCHELPAPXIXRNVDIJPXZPMVSALDWGQZWVQNYTRXOSTVELCDPUJYHOIMZRWCZLIGNJAYX");

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
    msg.setTimeStamp(0.9291161159454544);
    msg.setSource(239U);
    msg.setSourceEntity(209U);
    msg.setDestination(44968U);
    msg.setDestinationEntity(149U);
    msg.json.assign("OPKGQUXXZOYCEIWMRGUDNEPCVCNPSBAAYLAKUCOERSVILHFOJSTXFNSYRYJIPFHJPDGRLEYVBAPKACWX");

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
    msg.setTimeStamp(0.8800775863866396);
    msg.setSource(41778U);
    msg.setSourceEntity(218U);
    msg.setDestination(25997U);
    msg.setDestinationEntity(40U);
    msg.json.assign("TEXKVQPQFLJJQCWRPJUMLOQLBMISMDQRYGNQKUAYNDXGGAYIRTEWJZGPCIIUDBUSPRCPBYXAZENJVSEFPHVJLCSCTQNRGSFIDPWKGYIOUTLGIFSCZOBVYACEMVUORWJYUVHDHPNQHQMAXTRKWOZAEHSNENMSKDPZXBMGB");

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

  return test.getReturnValue();
}
