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
// IMC XML MD5: 1475fa614638846a72a0c7d1f7be82a9                            *
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
    msg.setTimeStamp(0.799670100455);
    msg.setSource(40623U);
    msg.setSourceEntity(96U);
    msg.setDestination(34091U);
    msg.setDestinationEntity(91U);
    msg.state = 239U;
    msg.flags = 115U;
    msg.description.assign("XOHBKSYPIUVFPHYOVIPGOGZJXTWGMOULKIMKBHEJCDFVIRAAXZNXRQHTSKFKESTHRONQHMPXYGDFQEVXJKUBQXVMBASAMYDCIRQRJAWTDSTGOTDNEJOCTYNFHZYFSPUX");

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
    msg.setTimeStamp(0.50298697168);
    msg.setSource(19947U);
    msg.setSourceEntity(91U);
    msg.setDestination(40664U);
    msg.setDestinationEntity(60U);
    msg.state = 135U;
    msg.flags = 64U;
    msg.description.assign("HBIURVRIMEUKWPBFLJCXYBGNPRFVZTQGZLDROIOCTSAIIPFOHYGELLKXRMWSBNYMNKZYLHBAQHQZHDJ");

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
    msg.setTimeStamp(0.758855418281);
    msg.setSource(29583U);
    msg.setSourceEntity(44U);
    msg.setDestination(50457U);
    msg.setDestinationEntity(180U);
    msg.state = 238U;
    msg.flags = 206U;
    msg.description.assign("KTXNSUGEFQRGHYIDWDDGAVLAVHZBIURINFHLXCYTCCEMGUPQZZJLZJKPAVWOBOMUUJKZWMSVLDEWAWTAGAGNAZZVPQQHPEKEBRVOKUJIQHJJWVLKXISJOLYBCRVWDXZBYF");

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
    msg.setTimeStamp(0.739455784794);
    msg.setSource(33296U);
    msg.setSourceEntity(97U);
    msg.setDestination(9073U);
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
    msg.setTimeStamp(0.647290762976);
    msg.setSource(54762U);
    msg.setSourceEntity(112U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.0327325318737);
    msg.setSource(39793U);
    msg.setSourceEntity(67U);
    msg.setDestination(58830U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.410942819254);
    msg.setSource(27993U);
    msg.setSourceEntity(204U);
    msg.setDestination(64908U);
    msg.setDestinationEntity(106U);
    msg.id = 158U;
    msg.label.assign("HESECZQQKRXXFNOKGYUUWKGOATLTIZLPAJSNQCHXFBUCCHTSDRVPRRUKEDWZBPTYIWXUUSQFPSQJQFSYZKBSWPPACZENVAVNOXZHTDWSMLCLJLTGRYXBBKWXNETEHVDVXLMBTGMVNRIOIAUUQUYGMQFJCDDYIAIJKWMWUTEHWABINABMCRLKVFNHVXS");
    msg.component.assign("YJELAIYOZMUGWJYFIGIOVWTI");
    msg.act_time = 24544U;
    msg.deact_time = 9609U;

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
    msg.setTimeStamp(0.106217114086);
    msg.setSource(40683U);
    msg.setSourceEntity(32U);
    msg.setDestination(10828U);
    msg.setDestinationEntity(129U);
    msg.id = 76U;
    msg.label.assign("DWEPETVVPRYJF");
    msg.component.assign("DSXSHVHXJZ");
    msg.act_time = 17683U;
    msg.deact_time = 50067U;

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
    msg.setTimeStamp(0.291241892764);
    msg.setSource(14178U);
    msg.setSourceEntity(80U);
    msg.setDestination(32363U);
    msg.setDestinationEntity(157U);
    msg.id = 227U;
    msg.label.assign("MPRPDKIBUTBEFNZOKSLFXMQJHPPPQOOCRASTTNJTMVQUEYZOBAU");
    msg.component.assign("EGRCTXLPADCDMGNAZGPGTQHGDZVKAPVLSNXFXOGMTJYYJWTECIDSVABKZUCYQPNKYXBBKVCROXXILQNHCYPXYSRZIKCZJFYNBADZTBUCFRAG");
    msg.act_time = 32002U;
    msg.deact_time = 3036U;

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
    msg.setTimeStamp(0.380269696961);
    msg.setSource(55703U);
    msg.setSourceEntity(138U);
    msg.setDestination(4118U);
    msg.setDestinationEntity(236U);
    msg.id = 235U;

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
    msg.setTimeStamp(0.583864626453);
    msg.setSource(16617U);
    msg.setSourceEntity(16U);
    msg.setDestination(41792U);
    msg.setDestinationEntity(216U);
    msg.id = 112U;

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
    msg.setTimeStamp(0.547895583346);
    msg.setSource(53020U);
    msg.setSourceEntity(196U);
    msg.setDestination(47887U);
    msg.setDestinationEntity(238U);
    msg.id = 199U;

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
    msg.setTimeStamp(0.668480474147);
    msg.setSource(8440U);
    msg.setSourceEntity(83U);
    msg.setDestination(31916U);
    msg.setDestinationEntity(161U);
    msg.op = 68U;
    msg.list.assign("XFPCMVRGUIWWUYYNWOXXLZXSHKTNHXSANBUJDYSCDIUTNPMUALJOQAYMMJRJCWNMZIZVQHXISETBBJCMTKYDAJGWFQJEPVVWUQEMCLGZXKOEFFGPLIAK");

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
    msg.setTimeStamp(0.275802515653);
    msg.setSource(50083U);
    msg.setSourceEntity(182U);
    msg.setDestination(42007U);
    msg.setDestinationEntity(204U);
    msg.op = 73U;
    msg.list.assign("VWOUETXYXHKEBDIAAUOFMRFWNVDFJXNZXFIIURQLE");

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
    msg.setTimeStamp(0.574643021271);
    msg.setSource(41526U);
    msg.setSourceEntity(201U);
    msg.setDestination(16840U);
    msg.setDestinationEntity(65U);
    msg.op = 181U;
    msg.list.assign("SFVJESONQYYKPZWMRAVZXGNTAGJOQQBYFBAYNJMMUECTUWJDOXFVXLVDPZZJGAYYIKRQVHVRNIOCFECLVMRGNPBVTESTSESMPTCESDTAHGBCEDUDAAVTLUHLVPRXMUWPHQXOGBICXWKOTMZKLHLIP");

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
    msg.setTimeStamp(0.522604084816);
    msg.setSource(23058U);
    msg.setSourceEntity(233U);
    msg.setDestination(32743U);
    msg.setDestinationEntity(8U);
    msg.value = 191U;

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
    msg.setTimeStamp(0.703094991219);
    msg.setSource(44807U);
    msg.setSourceEntity(131U);
    msg.setDestination(4344U);
    msg.setDestinationEntity(45U);
    msg.value = 22U;

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
    msg.setTimeStamp(0.991886522505);
    msg.setSource(39660U);
    msg.setSourceEntity(77U);
    msg.setDestination(21403U);
    msg.setDestinationEntity(90U);
    msg.value = 116U;

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
    msg.setTimeStamp(0.897625833481);
    msg.setSource(8710U);
    msg.setSourceEntity(234U);
    msg.setDestination(29732U);
    msg.setDestinationEntity(94U);
    msg.consumer.assign("IRKODPCGBXOJHKKBEATCYQSSKEMVUOAAZLBGLYMLJFOCEIFEBNTWJRTBPXRUGTZKBPSRKTDRWBCZBUGNS");
    msg.message_id = 404U;

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
    msg.setTimeStamp(0.117176130544);
    msg.setSource(35753U);
    msg.setSourceEntity(151U);
    msg.setDestination(52451U);
    msg.setDestinationEntity(48U);
    msg.consumer.assign("IHCBULJHHSDANQSPRQTSVGTAFXHWUKMCUSZXMPXAOUYAPCIEFNXECQRIVWZGTBGYHVJSXZPWKSEIZVFSWJJIKOAIOYGYVZORHMQWEDZVACJOAMGCRCXJBFFDLMWUZJLNHBFTVETSLAFQGJFLOBNKYABEWZVPDCLDOLPGTZFTTQDPKDMTRUCXTEPMHZXBJLXJBEMEGHYRKGDNNS");
    msg.message_id = 25360U;

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
    msg.setTimeStamp(0.907577567189);
    msg.setSource(3527U);
    msg.setSourceEntity(200U);
    msg.setDestination(36519U);
    msg.setDestinationEntity(30U);
    msg.consumer.assign("MEXNJBOOJCIZFHKGNYDQTFJJYHCKNVVLUAELQRMMGGCRLTEGJCOHKUSXXDKRWRVEMZYRSOHKDRIYJNFROBNB");
    msg.message_id = 9848U;

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
    msg.setTimeStamp(0.357868915932);
    msg.setSource(55292U);
    msg.setSourceEntity(101U);
    msg.setDestination(62191U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.335929143518);
    msg.setSource(58457U);
    msg.setSourceEntity(63U);
    msg.setDestination(47122U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.365317904417);
    msg.setSource(46782U);
    msg.setSourceEntity(198U);
    msg.setDestination(62358U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.584633418319);
    msg.setSource(1047U);
    msg.setSourceEntity(28U);
    msg.setDestination(20630U);
    msg.setDestinationEntity(19U);
    msg.op = 97U;

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
    msg.setTimeStamp(0.19993633454);
    msg.setSource(8641U);
    msg.setSourceEntity(173U);
    msg.setDestination(46271U);
    msg.setDestinationEntity(228U);
    msg.op = 103U;

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
    msg.setTimeStamp(0.395106708807);
    msg.setSource(2199U);
    msg.setSourceEntity(174U);
    msg.setDestination(65181U);
    msg.setDestinationEntity(162U);
    msg.op = 172U;

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
    msg.setTimeStamp(0.33151410958);
    msg.setSource(28742U);
    msg.setSourceEntity(159U);
    msg.setDestination(26922U);
    msg.setDestinationEntity(28U);
    msg.total_steps = 164U;
    msg.step_number = 147U;
    msg.step.assign("BKJMISWYIXUVUGFXJPBNRIBFSWBZARDNSIWKQRDQDLOO");
    msg.flags = 188U;

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
    msg.setTimeStamp(0.627149155859);
    msg.setSource(50466U);
    msg.setSourceEntity(208U);
    msg.setDestination(51727U);
    msg.setDestinationEntity(169U);
    msg.total_steps = 70U;
    msg.step_number = 115U;
    msg.step.assign("GBBFTCCLREBGEYXVGVOXKNUEJSYSAXDTDALSMJSIGPSDAHIHXWUMAWKSDMFUUUUMHWNTZYWSZRGHYYXKTM");
    msg.flags = 232U;

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
    msg.setTimeStamp(0.135121788451);
    msg.setSource(5583U);
    msg.setSourceEntity(82U);
    msg.setDestination(29445U);
    msg.setDestinationEntity(62U);
    msg.total_steps = 254U;
    msg.step_number = 109U;
    msg.step.assign("GJWUQXQNKWVRHFGOFNLICNPDYYUAENCAUEVSZRCXFHOATAJZMHBWVBLHSIFJEDEPJBLXKWUQOOYFUGRDSUATPFNDKNBULRHFXATGISPKUYKWFGXIRGWGVEIOOCILTGHUMSVYOQKOXHIKMLPMSCTLPLJSAPVZEYWXHTDGEEKSNJQTTKOZPIDBHDNARJHGLDXMCUEZPWMDKXZLBIIQTBYAWVASPQJCNJVZMZWDFXZYMYOVYRJQCTFS");
    msg.flags = 227U;

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
    msg.setTimeStamp(0.686113532956);
    msg.setSource(7279U);
    msg.setSourceEntity(210U);
    msg.setDestination(61124U);
    msg.setDestinationEntity(194U);
    msg.state = 91U;
    msg.error.assign("DCQNZJQZONIBVTXVDPJVM");

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
    msg.setTimeStamp(0.701388889442);
    msg.setSource(48531U);
    msg.setSourceEntity(135U);
    msg.setDestination(36370U);
    msg.setDestinationEntity(119U);
    msg.state = 159U;
    msg.error.assign("RPCXEDFAPXSJMYBJSUOKBXKFDWMCVXVISKAQBULMUHKTSRTAT");

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
    msg.setTimeStamp(0.134578095115);
    msg.setSource(34414U);
    msg.setSourceEntity(26U);
    msg.setDestination(31073U);
    msg.setDestinationEntity(241U);
    msg.state = 14U;
    msg.error.assign("VORAIELKKJWNADYGKFYKQJSDCQRQLHIWZWMPYJGCGHLBOTRKVMUNHSQZWGBKMRCCIIKQSDAJECLCHFXYVAOMNJLZCHXRGSMITVADYKBMFKFHPWJAMPLACLFUUQQIZUOVCJEVOPCRWRTUYXWEUXPEIVYEOBSIYQNTAFIEIXRZFTPLZBNNLTXSRHPLHFXFWAHHRGV");

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
    msg.setTimeStamp(0.765036537986);
    msg.setSource(25739U);
    msg.setSourceEntity(201U);
    msg.setDestination(62833U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.755128318368);
    msg.setSource(36117U);
    msg.setSourceEntity(224U);
    msg.setDestination(14503U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.0208511832403);
    msg.setSource(511U);
    msg.setSourceEntity(181U);
    msg.setDestination(23398U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.369093166042);
    msg.setSource(42059U);
    msg.setSourceEntity(195U);
    msg.setDestination(25944U);
    msg.setDestinationEntity(73U);
    msg.op = 214U;
    msg.speed_min = 0.0538509869714;
    msg.speed_max = 0.186254127425;
    msg.long_accel = 0.420227681295;
    msg.alt_max_msl = 0.997237350937;
    msg.dive_fraction_max = 0.802470201197;
    msg.climb_fraction_max = 0.788378256681;
    msg.bank_max = 0.500585297685;
    msg.p_max = 0.192634359172;
    msg.pitch_min = 0.55593736338;
    msg.pitch_max = 0.855804024662;
    msg.q_max = 0.352832473175;
    msg.g_min = 0.191231188914;
    msg.g_max = 0.416168392772;
    msg.g_lat_max = 0.625792582626;
    msg.rpm_min = 0.576309683588;
    msg.rpm_max = 0.431468938421;
    msg.rpm_rate_max = 0.973540418323;

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
    msg.setTimeStamp(0.284124930558);
    msg.setSource(52519U);
    msg.setSourceEntity(29U);
    msg.setDestination(12133U);
    msg.setDestinationEntity(122U);
    msg.op = 59U;
    msg.speed_min = 0.563102526231;
    msg.speed_max = 0.136435847417;
    msg.long_accel = 0.64221526518;
    msg.alt_max_msl = 0.7062387288;
    msg.dive_fraction_max = 0.00451351799487;
    msg.climb_fraction_max = 0.269549459965;
    msg.bank_max = 0.40146455404;
    msg.p_max = 0.924597316948;
    msg.pitch_min = 0.625141142979;
    msg.pitch_max = 0.0272354634693;
    msg.q_max = 0.987925876403;
    msg.g_min = 0.891780410066;
    msg.g_max = 0.26783485104;
    msg.g_lat_max = 0.107614641985;
    msg.rpm_min = 0.926330214884;
    msg.rpm_max = 0.82367940243;
    msg.rpm_rate_max = 0.0281300822063;

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
    msg.setTimeStamp(0.168810347438);
    msg.setSource(50352U);
    msg.setSourceEntity(0U);
    msg.setDestination(58260U);
    msg.setDestinationEntity(34U);
    msg.op = 152U;
    msg.speed_min = 0.871947544504;
    msg.speed_max = 0.193126790107;
    msg.long_accel = 0.32339323883;
    msg.alt_max_msl = 0.828431212349;
    msg.dive_fraction_max = 0.541875708818;
    msg.climb_fraction_max = 0.0914871338746;
    msg.bank_max = 0.550790475733;
    msg.p_max = 0.0713614728958;
    msg.pitch_min = 0.555252024707;
    msg.pitch_max = 0.716617926538;
    msg.q_max = 0.769612187683;
    msg.g_min = 0.350044096412;
    msg.g_max = 0.176560854579;
    msg.g_lat_max = 0.576943308408;
    msg.rpm_min = 0.194968153576;
    msg.rpm_max = 0.137636965559;
    msg.rpm_rate_max = 0.0314459142192;

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
    msg.setTimeStamp(0.930481584213);
    msg.setSource(14796U);
    msg.setSourceEntity(62U);
    msg.setDestination(16721U);
    msg.setDestinationEntity(217U);
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.512087638274;
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
    msg.setTimeStamp(0.269848067742);
    msg.setSource(40628U);
    msg.setSourceEntity(104U);
    msg.setDestination(57621U);
    msg.setDestinationEntity(213U);
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 111U;
    tmp_msg_0.goal_id.assign("MBKTKLEYDROSCTEZPUAPJIORDVEJGATJBLBHBFXQRQOCGSKATCTKGIZMMHGYZXDWRQMVRTWLWFFOXEYHJMRYGSRYOSHSHLQSTKKUBRZADCZJUQAVVAQVNUFUGC");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("CFTJXPIXCPIFTAVULRWWNMXZZJNRIMVGIFUHKBBIYBAZMCRSUVRSHQAUMDLWYWUJKLYHIHJXTOHNTREFHZOZSGYMMZLYHKPPUALTYTODBSOEWYNMFABVNYEZGXAVVQNJLVTGHSOSYWLCEKGFRBJPVPKXUCUCKCWREMFJ");
    tmp_tmp_msg_0_0.predicate.assign("SAPDYHVLBHNJCKWBZYMFZCVMJHLNXBCVJTKTNODK");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("IDXYCBWBATGZKEKMLRRDMQFXPLSWIIECUZQVDNKNZYTNBYTPDHCVLJOUFYXYCTWMYEBWMUDRCQKAUQRNZYZTHVB");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 173U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("TVSWVYWRKAQWRCQZHBTHCKHOAWDZEJYLUDPQDEFDAPTQUBITEZMYMTECNTMOZOGEXMWHKDFBOLHFOYOJYSHKPNLBAKPZNQQLXXZIPVHUYOVPMZDSNUFQMBJSJRRFKWXIQPXTTWZCRSOKULVXPJTXGAIRMJFELPKAVRBSSIGIICNZTDIGCBOGNBPCUJLJSGSNYANNYRDFACKYHBQXZXQFGMEWDUCRJAWVKFGWLIRMHEUJSGONCLIDVMG");
    tmp_tmp_tmp_msg_0_0_0.max.assign("WUJZYCOYQFPWZCSGBVEDPLXXFHKYFLIUSHOHEAPCPISTGSLVPGBVASZTWBBMSRQQVJFHCKARTYTNHWPSNENDZJWXIUZFEAWPWYURISXVMQTYVFAURXDIILHTGMITOCEMLVKENBATKEXVJRALQHNFQYXCWQMRNRMOCRGTWAMVJEXAJGVLJISLGEDOYBHKGOTBUNXKKCZJUCODGFD");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.77010366163);
    msg.setSource(29250U);
    msg.setSourceEntity(11U);
    msg.setDestination(2707U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.853337617181);
    msg.setSource(1501U);
    msg.setSourceEntity(137U);
    msg.setDestination(49021U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.768490701017;
    msg.lon = 0.677387233301;
    msg.height = 0.714927898021;
    msg.x = 0.378076427683;
    msg.y = 0.75061670695;
    msg.z = 0.146892268279;
    msg.phi = 0.47534413987;
    msg.theta = 0.494882813827;
    msg.psi = 0.529522086393;
    msg.u = 0.186051939101;
    msg.v = 0.199653614922;
    msg.w = 0.237271516618;
    msg.p = 0.650727664124;
    msg.q = 0.0845387892749;
    msg.r = 0.604001946331;
    msg.svx = 0.995769638975;
    msg.svy = 0.167927261855;
    msg.svz = 0.579623625481;

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
    msg.setTimeStamp(0.259267471799);
    msg.setSource(51463U);
    msg.setSourceEntity(118U);
    msg.setDestination(62775U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.1238532256;
    msg.lon = 0.527750221513;
    msg.height = 0.401691771925;
    msg.x = 0.830247213255;
    msg.y = 0.565308590474;
    msg.z = 0.297308554783;
    msg.phi = 0.394740237852;
    msg.theta = 0.739012819767;
    msg.psi = 0.972440623842;
    msg.u = 0.203856361251;
    msg.v = 0.489618888211;
    msg.w = 0.506063625337;
    msg.p = 0.322582082651;
    msg.q = 0.0661479802893;
    msg.r = 0.765019576017;
    msg.svx = 0.726427443443;
    msg.svy = 0.767548462096;
    msg.svz = 0.152157719174;

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
    msg.setTimeStamp(0.0469177181749);
    msg.setSource(24923U);
    msg.setSourceEntity(185U);
    msg.setDestination(65140U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.216194529616;
    msg.lon = 0.405550105945;
    msg.height = 0.61447870938;
    msg.x = 0.851596956686;
    msg.y = 0.989139003638;
    msg.z = 0.122206993339;
    msg.phi = 0.820838944661;
    msg.theta = 0.00755958962715;
    msg.psi = 0.618141129455;
    msg.u = 0.229818361536;
    msg.v = 0.470900985125;
    msg.w = 0.114980342937;
    msg.p = 0.435128629976;
    msg.q = 0.341091421975;
    msg.r = 0.574101063657;
    msg.svx = 0.77877268151;
    msg.svy = 0.932257004246;
    msg.svz = 0.619010205283;

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
    msg.setTimeStamp(0.794234407289);
    msg.setSource(44577U);
    msg.setSourceEntity(186U);
    msg.setDestination(38634U);
    msg.setDestinationEntity(114U);
    msg.op = 98U;
    msg.entities.assign("HPQDMWZZAFEPNHJYCJTXUADFVYSZDNRESQRKDFBFWBCWHXYXPSRVUQIBYFKLKYBGYWPVANVHOCIEMEIPBNEPHXGNRKGXHOSJWUNLQJVTSOVOZCGJDNMXHZAAIXV");

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
    msg.setTimeStamp(0.0706616997727);
    msg.setSource(6171U);
    msg.setSourceEntity(232U);
    msg.setDestination(6195U);
    msg.setDestinationEntity(44U);
    msg.op = 37U;
    msg.entities.assign("MDDZVZQPLFYQRCYNZWINEPYVNYINWSVTXCBJYBZTCCAEDDLMTXOUJBOCUVCIYTKLQFAYUUHCMUCGNKBFHSGCVWSGOKLXWPJNEDMJEAIHXHGQDEKOAOSPSALZXUMQMNXQRPAGVFWCGETPWWJPKZIFRXIHAUAJNWTQJDDIFBJTQWTZSEARKLVONHIHHEZYLNBR");

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
    msg.setTimeStamp(0.0865971274975);
    msg.setSource(31135U);
    msg.setSourceEntity(111U);
    msg.setDestination(2030U);
    msg.setDestinationEntity(81U);
    msg.op = 187U;
    msg.entities.assign("FSZCPOKWMNVOALZGXYQJFUITONPNXCDVTXHZYKBGCGIMDKKHNWBNGHBWQCRVTBHIQFNWAPRQXRMFEZZKKRFCJAQTOBQAYUMUVLFYUCSBQOYELJKEEDHTWOYSWZZGTNFINUGHSAOWDRPVLJRJLSPXVGHUUDJEIIVGDECQSBGRCZHIJMEAEQGQTRSXMJADIFASJAYVXZMMLVDXLWDPMOFBHOFHDIEBBRXYLPCLMWIYATR");

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
    msg.setTimeStamp(0.180419615045);
    msg.setSource(58351U);
    msg.setSourceEntity(51U);
    msg.setDestination(57142U);
    msg.setDestinationEntity(103U);
    msg.type = 204U;
    msg.speed = 25232U;
    const char tmp_msg_0[] = {18, -56, -56, 15, 29, 11, -115, 82, -12, 70, 7, -104, 15, 116, -84, 67, -9, 44, -90, 36, -59, -54, 66, -58, -87, -90, -103, -111, -60, -110, 65, -55, 10, -108, 54, 54, -21, 108, 98, 19, -20, -115, 107, 109, -64, -94, 125, 67, 126, 33, -2, 75, 65, 47, 90, 19, 7, 107, -64, -63, -78, -8, -33, -88, 34, 51, 58, 73, -12, -10, 97, -34, 108, 39, -89, -52, -54, -54, 124, 84, -81, 96, 89, -115, 126, -98, 97, 11, 84, -11, 106, 47, -61, 37, -32, -30, 95, -113, 82, -40, -114, 85, -19, 47, 66, -118, -125, -57, -5, -82, 126, -90, 47, -94, 88, 47, 70, -127, -90, 54, 121, 114, 118, -36, -44, -106, 39, 85, -93, -7, 57, -55, -98, -68, -94, -50, 123, -15, -123, 54, -24, 14, 2, -37, 53, -34, -94, -49, 81, -57, -111, -78, 111, -116, -39, -114, -108, 64, -38, 33, 12, 41, 8, -110, -84, -25, -116, 71, 55, 62, 34, -113, 91, -76, 99, -18, 108, -62, 52, 45, 13, 85, -109, -55, 109, -111, -46, 90, 54, 23, 124, -44, -114, -16, 26, -39, 105, 108, -109, 68, 75, -73, 42, -95, 46, 30, 20, -46, -128, -61, -18, -123, 38, 19, -5, -30, 44, 100, 121, 29, -6, -20, 115, 77};
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
    msg.setTimeStamp(0.152191319228);
    msg.setSource(30354U);
    msg.setSourceEntity(249U);
    msg.setDestination(34675U);
    msg.setDestinationEntity(184U);
    msg.type = 159U;
    msg.speed = 10747U;
    const char tmp_msg_0[] = {40, -62, -50, -61, 62, 83, -118, -118, 47, 98, 54, 47, -52, 126, 40, 96, 110, 86, -109, -90, 18, 109};
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
    msg.setTimeStamp(0.625431440002);
    msg.setSource(34295U);
    msg.setSourceEntity(246U);
    msg.setDestination(41627U);
    msg.setDestinationEntity(164U);
    msg.type = 48U;
    msg.speed = 19046U;
    const char tmp_msg_0[] = {-22, 96, -127, 71, 85, -80, 103, 126, 89, 98, -98, 124, -60, 106, -59, 27, 21, 61, 105, 43, -96, -62, 21, -49, -99, 62, -18, 93, 75, 58, -121, 96, -88, -73, 24, 49, 86, -59, 48, 39, 71, -113, 79, -74, 33, 54, 102, -82, -40, -11, 78, 10, -117, 3, -33, 27, -33, 10, 34, 33, -99, -2, 58, 122, -30, -48, 97, -91, -114, 52, -55, -81, 43, 0, -69, 44, -79, -111, 20, 37, 13, 110, -87, -6, 47};
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
    msg.setTimeStamp(0.731319395893);
    msg.setSource(29570U);
    msg.setSourceEntity(19U);
    msg.setDestination(17436U);
    msg.setDestinationEntity(158U);
    msg.op = 115U;
    msg.tas2acc_pgain = 0.716374462629;
    msg.bank2p_pgain = 0.563338694204;

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
    msg.setTimeStamp(0.0112068038262);
    msg.setSource(22688U);
    msg.setSourceEntity(47U);
    msg.setDestination(58537U);
    msg.setDestinationEntity(80U);
    msg.op = 135U;
    msg.tas2acc_pgain = 0.57919907902;
    msg.bank2p_pgain = 0.582643308979;

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
    msg.setTimeStamp(0.950601915334);
    msg.setSource(39928U);
    msg.setSourceEntity(187U);
    msg.setDestination(6485U);
    msg.setDestinationEntity(244U);
    msg.op = 63U;
    msg.tas2acc_pgain = 0.597577746831;
    msg.bank2p_pgain = 0.210523783004;

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
    msg.setTimeStamp(0.57825728445);
    msg.setSource(33901U);
    msg.setSourceEntity(150U);
    msg.setDestination(26524U);
    msg.setDestinationEntity(10U);
    msg.available = 1733685474U;
    msg.value = 229U;

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
    msg.setTimeStamp(0.0267083708747);
    msg.setSource(32150U);
    msg.setSourceEntity(66U);
    msg.setDestination(4931U);
    msg.setDestinationEntity(75U);
    msg.available = 568042816U;
    msg.value = 116U;

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
    msg.setTimeStamp(0.198071040282);
    msg.setSource(28373U);
    msg.setSourceEntity(227U);
    msg.setDestination(34834U);
    msg.setDestinationEntity(148U);
    msg.available = 3982214917U;
    msg.value = 251U;

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
    msg.setTimeStamp(0.499944262464);
    msg.setSource(22606U);
    msg.setSourceEntity(76U);
    msg.setDestination(60843U);
    msg.setDestinationEntity(208U);
    msg.op = 227U;
    msg.snapshot.assign("BWJVYZKVXCBKLNMYGZMDWORGDPTOQSDNESJBDMCFFZZWKYCBVAOCEAUTDUUOLRHCBWLTTUWFEYAXSPUTHPGUQAVDBISKMHLRSNKMPIPEZCLRKPTNDMBYYXUJFIGVGEHXKTJKTJOFHBFGVQIBGNJOWG");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 53019U;
    tmp_msg_0.value = 111U;
    tmp_msg_0.error.assign("RFRJWABFMLYKHIJCSEVHBWRDJPHJUPGDYZKQWGSICAM");
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
    msg.setTimeStamp(0.291632662397);
    msg.setSource(26628U);
    msg.setSourceEntity(182U);
    msg.setDestination(6470U);
    msg.setDestinationEntity(82U);
    msg.op = 124U;
    msg.snapshot.assign("FZAZRPCUOCTBDSOZAKDHDZXESXDLFIASLERUZFOSMFLNNNEGHUUUDUJTIIXXAQYYLOJYLSAYZYTIWOSGKTEMLMPRKQWW");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 34U;
    tmp_msg_0.step_number = 139U;
    tmp_msg_0.step.assign("JAJFMEYFHPAAQXIRMHGVQBTZLIOQLMRKSKWJBZCUGPZPPHJYOXJMDFWCRNWBKRNYCPRTXCTKWCHWUAYNQSVXVCKTBQYZSNJXUUGMMRIJYOYUKMHTZWOTPIWIMDXDRSGCPEXBVEGLAKCWSQBDDZYLVEKSWNFYAEZVGZUOGONPDCEBNFDBCAPJGIQIABSKVQHNHEKQLLWSLZOZIXSTDHPBGMV");
    tmp_msg_0.flags = 4U;
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
    msg.setTimeStamp(0.558429457527);
    msg.setSource(21604U);
    msg.setSourceEntity(88U);
    msg.setDestination(52219U);
    msg.setDestinationEntity(85U);
    msg.op = 192U;
    msg.snapshot.assign("ALEGHYKRHSCRIUAXLZFGNOTWNOQYEMWXVRCVKLGAILJJGVAQVYITZLHUYWPVPVPFMCGQUECWHQFPBBWRIEOYPDHBKHJBQTDOOJQZNQFDIOARYJSAIWMETUMWBXSQKKWYLMADUGLZHVHBS");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 181U;
    tmp_msg_0.error.assign("YTFQOMPCYNFYXIDPUCCVFKGDTZILXVSDYBNLXHDVVIWUNGTOUGEVHLJWUNKJKALXCLKRBIJLSBEXRAAFULDQFIMCDZRNVKDJQZPGGFROHHTXWJZXPFTBBJMQWWMUZWEPSHGAYUSEHPXIJSNCRLCNVMFWNYJJHALBWSRZQEMTWOK");
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
    msg.setTimeStamp(0.359070364783);
    msg.setSource(15865U);
    msg.setSourceEntity(13U);
    msg.setDestination(63338U);
    msg.setDestinationEntity(174U);
    msg.op = 48U;
    msg.name.assign("JQIDFSQFRANABZJU");

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
    msg.setTimeStamp(0.47637458628);
    msg.setSource(5946U);
    msg.setSourceEntity(73U);
    msg.setDestination(64618U);
    msg.setDestinationEntity(233U);
    msg.op = 170U;
    msg.name.assign("HCBKYNKMLTBOWHEDGLIFYIWYIABNQBQAGAJKNMWEHGWMIYCUURFTXRNKJRLCTISQBUHUFNOOVQFAPYSTHOXDTIYUKJAXYISPOGPOIYMDEIJDPRVONUZGWTOYEMFLEUYDKZMFNGMJZPZPGWEWHKTHQJTPLNHQWVWTLMGXEGFXZFSZZSVBBJVRCVBSMZAXIFALQPUKWDGURRXDAOJSNMTCQCEZHNBXODAFHESUCQRZCPLACV");

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
    msg.setTimeStamp(0.96677236934);
    msg.setSource(1546U);
    msg.setSourceEntity(174U);
    msg.setDestination(17007U);
    msg.setDestinationEntity(211U);
    msg.op = 4U;
    msg.name.assign("ATICKZWQAQKNSDMNWMCOQPRRIFNZGXYTBRATAORKZRMWEBHMDTHZOUDBFKF");

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
    msg.setTimeStamp(0.567684642496);
    msg.setSource(22928U);
    msg.setSourceEntity(24U);
    msg.setDestination(55850U);
    msg.setDestinationEntity(233U);
    msg.type = 40U;
    msg.htime = 0.580189811375;
    msg.context.assign("TKZVSDQHPCDSIXDMGEQROJZJUOVCMXWTEVFSVZKKTWDLJRNFYIPIHGWTLSDARCAZBSTQRBLEZKJUURNCJOEDOARUDVIPTZB");
    msg.text.assign("KXTLHSPWZQAUNDQOHENEWTUVWWOGKVMHALPARLIVUXYPDBSVFYMKQNYRNFTQWCQCJGWBMEIKWWBAISXYNLXFYODUWDEHUWLOFYJFOOVTZERISFLRXFMNBCSUPXMPGGAVLKBTJPCLMBCZZUOKNFPZGNJIYACSUZHSSNMSBMHYIMZYGIQVAETBKVELHZDRTFTDBYD");

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
    msg.setTimeStamp(0.291243041636);
    msg.setSource(19966U);
    msg.setSourceEntity(173U);
    msg.setDestination(63710U);
    msg.setDestinationEntity(46U);
    msg.type = 29U;
    msg.htime = 0.931705092187;
    msg.context.assign("APYXZZKZJRLKOVQOFRBJUHCLAAOLJIUUIINPIVACPWQKEMCVTUNVTIMGMOCDIOSWBKBMUENRSQPURSWCHNYUMGJYTHSBDNFWGDVAEQWLJTHAXFETFEVSFYUEJAXTCKYQNPECEYMTSGPSLOKHERWDRXGNKBBQDXYB");
    msg.text.assign("IBLVQNGQKMMDWDVRYNLYEXVIYLHKAQSUGFMHEYXQBOEHOVLAPAFDHBYLCPAFAPNDEDOGHEMENUBJRTAZUNXWMGYZXWBTAWGEXCUVH");

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
    msg.setTimeStamp(0.97997513906);
    msg.setSource(13377U);
    msg.setSourceEntity(66U);
    msg.setDestination(43043U);
    msg.setDestinationEntity(86U);
    msg.type = 157U;
    msg.htime = 0.473523622664;
    msg.context.assign("PCNFHTXOGOLMUNDOMTQIVQJYBUECPISTFYRUMJIUWMWALCGAHRDAOHZRCQGJUOWXCVPIBZYCPGGVB");
    msg.text.assign("FMXCYXMRSCCTKTVTRKMGHG");

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
    msg.setTimeStamp(0.339141291484);
    msg.setSource(28059U);
    msg.setSourceEntity(173U);
    msg.setDestination(13966U);
    msg.setDestinationEntity(182U);
    msg.command = 189U;
    msg.htime = 0.410195828271;

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
    msg.setTimeStamp(0.815007758748);
    msg.setSource(50295U);
    msg.setSourceEntity(211U);
    msg.setDestination(25847U);
    msg.setDestinationEntity(240U);
    msg.command = 242U;
    msg.htime = 0.356925006443;

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
    msg.setTimeStamp(0.60928404771);
    msg.setSource(50895U);
    msg.setSourceEntity(252U);
    msg.setDestination(15268U);
    msg.setDestinationEntity(133U);
    msg.command = 93U;
    msg.htime = 0.0587499105722;

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
    msg.setTimeStamp(0.457572532554);
    msg.setSource(36721U);
    msg.setSourceEntity(105U);
    msg.setDestination(27467U);
    msg.setDestinationEntity(189U);
    msg.op = 149U;
    msg.file.assign("NXRCMICAHTMRFTTEPYLBERWHKUKIUYXABJQWIWVWNMQZVYMVKCFVPIMZYOQASOJCTNAGYQYPGOHVLCUGKQDTXMBWKDJQVGVGNQCCRWRUDSOHCFLAPHFKJWBRAXOLQPRIXEJSWGBXNXJGLDSDZESZPZFIYOWRXGSMJPPZFILAMVOLJXDJANSAHBFQSLEUWTOIDCIZUZSPQXNUHGDDBEEIBNCHAOMTVRBEUUULKLZP");

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
    msg.setTimeStamp(0.95864904643);
    msg.setSource(20032U);
    msg.setSourceEntity(125U);
    msg.setDestination(46967U);
    msg.setDestinationEntity(78U);
    msg.op = 251U;
    msg.file.assign("YHJGYSTKAEQLATQUBGDFFYAQWKHWWWIETYBEGVQKHYKLMMRVNPQICXUNTLHUZNVCPZRTVPSXRORJXPRJISMOWNMWJTDFBGACHIWZVWSXADOZGPMWFIXEUILUNHVFCOWNOEGRLBQNRVGHDGLLZSKGNJHOUCRIMNYSCMHB");

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
    msg.setTimeStamp(0.957566498397);
    msg.setSource(56729U);
    msg.setSourceEntity(131U);
    msg.setDestination(49644U);
    msg.setDestinationEntity(33U);
    msg.op = 159U;
    msg.file.assign("YFHJIWZGCPJMGGLOODBHWQIUIBZPDERCGOULVHSHEMVYEKOCMEXGXBYLXJRNUTHNADVYTSINLYFQZKJXFWGVZJOUDTZLTQTIUDTROTJVOBPKKWQFCLOCZYXRSPXDAVFBJWEDYNBMUAE");

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
    msg.setTimeStamp(0.0110748086136);
    msg.setSource(44313U);
    msg.setSourceEntity(103U);
    msg.setDestination(3180U);
    msg.setDestinationEntity(188U);
    msg.op = 162U;
    msg.clock = 0.121696182286;
    msg.tz = 39;

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
    msg.setTimeStamp(0.294799747721);
    msg.setSource(12090U);
    msg.setSourceEntity(222U);
    msg.setDestination(14924U);
    msg.setDestinationEntity(226U);
    msg.op = 185U;
    msg.clock = 0.951251474996;
    msg.tz = 54;

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
    msg.setTimeStamp(0.413143922382);
    msg.setSource(49081U);
    msg.setSourceEntity(76U);
    msg.setDestination(50018U);
    msg.setDestinationEntity(149U);
    msg.op = 182U;
    msg.clock = 0.39327075507;
    msg.tz = -66;

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
    msg.setTimeStamp(0.326938057696);
    msg.setSource(59440U);
    msg.setSourceEntity(69U);
    msg.setDestination(27844U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.449717739977);
    msg.setSource(35500U);
    msg.setSourceEntity(207U);
    msg.setDestination(8185U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.577823994611);
    msg.setSource(52964U);
    msg.setSourceEntity(52U);
    msg.setDestination(63949U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.911885781531);
    msg.setSource(37926U);
    msg.setSourceEntity(0U);
    msg.setDestination(55780U);
    msg.setDestinationEntity(242U);
    msg.sys_name.assign("EKSAGRZQGVTNUGBUPRCKYWONOGEIXOXELGZSQOEUVTYDAPIRPODQWRWBGRYBVRLIKPZSZXFVHOPAHEJDTSUKQDCBUYULJBLSLLZLFQWJOBRPRFZYGFGWQMKASFPNNISHZMJNHCHFOAUJRW");
    msg.sys_type = 95U;
    msg.owner = 4694U;
    msg.lat = 0.05139151226;
    msg.lon = 0.177600732773;
    msg.height = 0.45561168832;
    msg.services.assign("OCDULVPREYSKMHMXFMVIMBBRAFSNUEBINKLPWOVTBMWFUTALBNZCWRESNQYPRXCNCP");

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
    msg.setTimeStamp(0.416567659048);
    msg.setSource(32895U);
    msg.setSourceEntity(100U);
    msg.setDestination(58695U);
    msg.setDestinationEntity(17U);
    msg.sys_name.assign("YQXTVVEGXKOYOBNMFQIQPLXHEVXODDKDVSNFNKQQHWRULBARNBEISOTLCSODSEYLJTAYCMYZJEOWZPAMNGPKANJNADUCNTYMTXSXIGGZRABRMTKIIFCTPPVXUHZTKHXSPLCSQRWMROJNROHZSBMJJBAJALVUMTEBRWFLOPDPBKFZGVXHVWQIQSGLE");
    msg.sys_type = 125U;
    msg.owner = 39405U;
    msg.lat = 0.196464149478;
    msg.lon = 0.821811511963;
    msg.height = 0.812758186432;
    msg.services.assign("EDLPICNLGPUIBUUURFJZMFSSKEEIVEQMFSMZEDHXCOXODGIYNMRZCNKGGGPTKRBKJYANUSMBYZHWGMQZVTHIACRIFQHAXFDIINYASNUOXJRRLLQJBHJGBHSMD");

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
    msg.setTimeStamp(0.14104782562);
    msg.setSource(33230U);
    msg.setSourceEntity(92U);
    msg.setDestination(45617U);
    msg.setDestinationEntity(203U);
    msg.sys_name.assign("TGISSMEBKJLRQLQMXVEVKVRJKITOYZMOZWKKUTYTFEDVIDYTWDKSGZSHGXLFORHBAHGICAXOYURXZVIIABAYTKWGYPPILOUXZPLCYYPEAZQBZXNJNMSFJLDMPNPMWGVXDCGNJNGMAGUJEB");
    msg.sys_type = 40U;
    msg.owner = 21740U;
    msg.lat = 0.0368766256975;
    msg.lon = 0.284955411627;
    msg.height = 0.127474937459;
    msg.services.assign("TACYGWBSJKJYUTZMNNIUUSWUSNRJKDYZYUFHAEOPFWSGMGBOBPTOKVLMRAMBYOCWXAEGICDXNIMPWICACGCZMKHLPYLUXJBLKKXUWJREAZSXITWFG");

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
    msg.setTimeStamp(0.706874722271);
    msg.setSource(61566U);
    msg.setSourceEntity(29U);
    msg.setDestination(13005U);
    msg.setDestinationEntity(213U);
    msg.service.assign("FBYPGNEIZSILMKJRJACJXZBUDQHJPRYUBVCQORAXBDZPMOBAQHEUNISHSNQRYANHZWYULVTYMBICRTCFZGUAPWYPSKRFAYRQLSVJUHGXNJPVCGKTLVPRHSJEDTZVZXCQVPOSIEJVAKHUKTWWFMUMDDKYOBDPOXMRLFQFGEYTNMFEXHZVXCFMIMFUEIQOBDXOGT");
    msg.service_type = 15U;

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
    msg.setTimeStamp(0.169630718251);
    msg.setSource(31368U);
    msg.setSourceEntity(211U);
    msg.setDestination(20580U);
    msg.setDestinationEntity(154U);
    msg.service.assign("TBCRKMNYMOSZWJMAVLCSLWFVIKUSPDMZJWDAIOOMIUSAHNHCTCGXDYIELZKCPWLEVEWRQXITSAXCZXQEFUOWCBSVYAFTJSFXGKXBHRDDOFKVVO");
    msg.service_type = 140U;

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
    msg.setTimeStamp(0.878786731024);
    msg.setSource(55193U);
    msg.setSourceEntity(245U);
    msg.setDestination(33715U);
    msg.setDestinationEntity(158U);
    msg.service.assign("DTFERQRKTTCFDPIEQWYQHLTMMNKRJYAGOYOXZRLYRMDTGXLKFTDGEAARMQBCLINVQKJHZYAQHSMZBUYUPPCDVEPXYIVSHTNYQJXBLIKWBFHCPNJRVGXOZZNQGHPQHULPKYFUDNWRJSXGCFHWSTSXZJFOZAXRNSYEGKEZBENLXEWIDSEZENOAOVCWKADLBULUMVJSMXKWVOAN");
    msg.service_type = 239U;

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
    msg.setTimeStamp(0.309754343891);
    msg.setSource(44855U);
    msg.setSourceEntity(183U);
    msg.setDestination(50936U);
    msg.setDestinationEntity(55U);
    msg.value = 0.51297562121;

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
    msg.setTimeStamp(0.806667021903);
    msg.setSource(14813U);
    msg.setSourceEntity(153U);
    msg.setDestination(55970U);
    msg.setDestinationEntity(82U);
    msg.value = 0.190021778859;

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
    msg.setTimeStamp(0.502204442215);
    msg.setSource(51374U);
    msg.setSourceEntity(99U);
    msg.setDestination(43401U);
    msg.setDestinationEntity(233U);
    msg.value = 0.399804801795;

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
    msg.setTimeStamp(0.467748868172);
    msg.setSource(61055U);
    msg.setSourceEntity(62U);
    msg.setDestination(47373U);
    msg.setDestinationEntity(238U);
    msg.value = 0.899700237588;

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
    msg.setTimeStamp(0.980083551781);
    msg.setSource(21073U);
    msg.setSourceEntity(42U);
    msg.setDestination(50175U);
    msg.setDestinationEntity(13U);
    msg.value = 0.858299753761;

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
    msg.setTimeStamp(0.792053562727);
    msg.setSource(27045U);
    msg.setSourceEntity(196U);
    msg.setDestination(40565U);
    msg.setDestinationEntity(197U);
    msg.value = 0.60844488903;

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
    msg.setTimeStamp(0.230395006947);
    msg.setSource(6655U);
    msg.setSourceEntity(25U);
    msg.setDestination(24087U);
    msg.setDestinationEntity(194U);
    msg.value = 0.908767050081;

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
    msg.setTimeStamp(0.857017849995);
    msg.setSource(18402U);
    msg.setSourceEntity(21U);
    msg.setDestination(35691U);
    msg.setDestinationEntity(67U);
    msg.value = 0.257977279118;

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
    msg.setTimeStamp(0.938269022354);
    msg.setSource(19409U);
    msg.setSourceEntity(25U);
    msg.setDestination(63202U);
    msg.setDestinationEntity(62U);
    msg.value = 0.880853762622;

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
    msg.setTimeStamp(0.411767066122);
    msg.setSource(40110U);
    msg.setSourceEntity(99U);
    msg.setDestination(55271U);
    msg.setDestinationEntity(206U);
    msg.number.assign("HAKVVLKFAAQSZXULOIUYVFSDLRNDCSQZBBBNNAKHGUKTNTHPWTTCGHDAJBMPCLBORGSWEMWOYPPEMLFRDGGCSAPOTRBXCDBNIVSUNGKLEJRWYTYVKPHLAXJEMDJXATDTKEXZZZTPKXYYFVEDHPJINKFCUJGXHJEMQUUIIBUHXFCCQMPZLSLZMOIYQLWYDOVSCFIWOFZWZGGQZIFEBCUAN");
    msg.timeout = 50410U;
    msg.contents.assign("HRDRPNMEDXBOXJJAJCQYGLOASFKZCTWCQHULWMJFDPIDHOXCONUARXBKYNZBETYKYVDHPUGLAIDUALKCOYNIFQUKNXZSWMFIIXBXITDXBVZQRUQWXRYTSPMGGLFEFZRSLFTZAELYQUBVWMOXMCVNCSEQCIVNPRVTJPYABIKPLIBSHKOWHMCHQTGVKJNNROTNOEOWYZSPAGSTHUESAFVKJJZUWQBCZRTEM");

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
    msg.setTimeStamp(0.100427622882);
    msg.setSource(52977U);
    msg.setSourceEntity(42U);
    msg.setDestination(30400U);
    msg.setDestinationEntity(230U);
    msg.number.assign("BMBEHPCZRLDNRYIKEQQKFHMUUPSOBQMTNPXKQZGCRCOIVPBSDSTMOGSVWYFUIGFELEZWCOIXYXIKADNLOVRBFJQUJDKQIZIYXVDVUSS");
    msg.timeout = 61693U;
    msg.contents.assign("FZZLNYKLIMYCEPBJFQPXOZYSABUUZGETCPGFCTZKOKEJBJTFCUDPHKBUEZRNVFMFOFVUYIEDNQMVBACPXMTMIETTMDGDRWNXOUHQBHSWDKZEGRPTSALRKMHJNEDOWFBGILHAMZJKDLTEJJXIBRXNWTGZOVCDHGPYFGUXAIYAPUWWGONDSYKPBRJLAMIVRCGDXCXQSUWLMYSHVRCIVTCJSEQQRQLSNBSIVOLUQVHPAXAVKNLXAWRYIQZKO");

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
    msg.setTimeStamp(0.332138166002);
    msg.setSource(58902U);
    msg.setSourceEntity(192U);
    msg.setDestination(52274U);
    msg.setDestinationEntity(89U);
    msg.number.assign("KMWSOBRJDOMAGDIYS");
    msg.timeout = 57665U;
    msg.contents.assign("RQYWNZWSMSWBJZUVDLBSMOUMFHEZJZZPYXLXBSYCEJQUHBTSSZSDYOINPKDEXZJVDITUMUYDAKUQFTXCTZKMKEJCXWEKCTSBFOWDJAFLGPANHNFPEIFXYELFKOEVILCKVSIWHGPXZUDEFMTNMHHKPIKRCPOAQMTIYVVAYNLMJGIVCIAAVLLTWBRPRMNNGQXSPRVQVDTCJPDYEJUBFXWYHANRQ");

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
    msg.setTimeStamp(0.882739439117);
    msg.setSource(45212U);
    msg.setSourceEntity(177U);
    msg.setDestination(45625U);
    msg.setDestinationEntity(125U);
    msg.seq = 3514082310U;
    msg.destination.assign("JLDPQHIIZYEQNMBAGIMHRSTGDHQMAFAVPSWBXHVKUEWVDXJDYUJJXVSPSGZMDMMBJVXOAVYZGRTENNFRXNBIKYTATFNJGDDQOHUWCXRWI");
    msg.timeout = 7103U;
    const char tmp_msg_0[] = {-64, 68, -77, -74, 105, -125, -3, 90, 36, 14, 25, 53, 105, -23, -31, -63, 52, 100, 10, -16, 70, -83, 22, 122, 20, 66, 117, 28, 87, -49, 40, 35, 84, 54, -13, -13, 53, -114, 17, 114, 6, 110, 66, -103, -13, -6, 12, -97, -105, -118, -22, -29, 1, 23, 60, -80, 111, -51, 113, -30, 93, -57, -26, -26, 43, -47, 42, 121, -1, -106, -51, -26, -57, 99, -11, 113, -81, -34, 85, 92, 91, -32, 55, 82, -41, 122, 75, 3, -107, 1, -4, -45, 48, -30, 39, -89, -56, -42, -84, -110, 109, -68, -118, -67, -1, -101, -84, 45, -113, 60, -56, -55, 36, 67, 121, 106, 73, -58, -117, 74, -35, 35, -62, -107, 50, 56, -3, 1, -117, -70, 9, 30, -16, -58, 32, 78, -50, -62, 103, 31, 34, -1, 86, -64, 96, -42, 46};
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
    msg.setTimeStamp(0.619985151128);
    msg.setSource(33588U);
    msg.setSourceEntity(107U);
    msg.setDestination(36593U);
    msg.setDestinationEntity(64U);
    msg.seq = 3259401376U;
    msg.destination.assign("YTVGPUOKOFNPJMDDWGRRYVAWOCKWZXKWRLDCVEIQKUUSODRPHJYXPH");
    msg.timeout = 6510U;
    const char tmp_msg_0[] = {-52, 41, 70, 32, -66, -41, -99, -32, 83, 51, 78, 110, 117, -78, 90, 108, 66, -21, 59, -93, 50, 8, -104, 62, -123, 66, -23, 84, 83, 38, 115, -4, 15, 67, -31, -25, -3, -35, -28, 81, -86, 78, -124, 9, -112, 84, 22, -49, 26, -111, 106, -46, 59, 75, -20, 14, 23, -124, -63, 24, -68, 84, -123, 82, -111, 20, -33, -58, 84, 39, -19, 12, 2, -34, 27, -58, 68, -89, 106, 70, 90, 16, 29, -39, -126, 10, -107, 55, 14, 2, -122, 74, 107, -111, -79, 106, 93, 49, 37, -14, -1, 60, 64, -74, 86, -16, 107, -103, 39, 42, 51, -56, 107, 38, -94, 40, -91, 120, -21, 122, 82, -121, 122, 69, -58, -61, 12, -44, 30, 41, -124, 49, 91, -65, -17, -63, -20, -18, -87, -102, 27, 78, -23, -13, -25, 50, 8, 21, 102, 9, -63, -22, -107, -74, 53, -6, -11, -87, 55, -53, 31, 119, 74, 53, -87, 98, 102, 88, 2, -35, 18, -7, -54, -9, -9, -95, 42};
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
    msg.setTimeStamp(0.792477694967);
    msg.setSource(42649U);
    msg.setSourceEntity(143U);
    msg.setDestination(21323U);
    msg.setDestinationEntity(108U);
    msg.seq = 3369874790U;
    msg.destination.assign("ODXZABKJTJFFPXNAQZBVMJMOKJUITHPVPLWNBLH");
    msg.timeout = 3525U;
    const char tmp_msg_0[] = {-109, -24, -70, 27, 117, -62, -33, -24, -68, -34, -55, -117, 1, 43, -79, -16, 96, -68, -20, -124, -47, 88, 45, 71, -19, 8, 117, -25, 89, -32, 20, 70, 60, -58, -34, 79, -17, -61, -17, 19, 28, -127, 7, 91, 9, 38, 89, -85, -27, -27, 41, -52, 72, 47, -72, 87, 107, -32, 79, 73, 87, 93, 124, 51, 62, -41, -97, 74, -104, 70, -102, -40, 117, -27, -101, 95, 90, -78, 3, 113, -111, -88, -26, 94, 33, -23, 96, -50, -64, -1, 84, -86, 125, 35, 120, 22, -35, 42, -78, 30, 55, -7, -34, -93, -96, -43, 45, 65, 29, 109, -77, 41, 29, 36, 96, 85, -11, 33, 84, 36, -121, -99, -10, 4, 108, 43, 7, 95, -60, -116, 58, -47, -115, -12, -89, -54, 2, 32, -121, -32, -60, -13, -18, 11, 105, -1, 57, 80, 15, 53};
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
    msg.setTimeStamp(0.470082233895);
    msg.setSource(22104U);
    msg.setSourceEntity(34U);
    msg.setDestination(52051U);
    msg.setDestinationEntity(207U);
    msg.source.assign("FPOBRFZSALJLBOELNPTGXOCDEUQNYVBAAXUORLXHLDRWWJWIPYMHXWMCUFMUVZFDCPAHZZIMQACPCKWYWSZIGQKHRUONQNTDJBA");
    const char tmp_msg_0[] = {-31, 103, 101, -17, 20, 45, -21, -82, -63, 79, 53, 111};
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
    msg.setTimeStamp(0.262939136252);
    msg.setSource(36974U);
    msg.setSourceEntity(232U);
    msg.setDestination(24763U);
    msg.setDestinationEntity(91U);
    msg.source.assign("GLWJUIXFTOEFPISZFTBIRYHDAZEDYJHUYTIELNGAXQJHEEPBCFYTOZFOOBRGHXMBZPHBRGKCGDPZFQZNVNCBRQCBIQJMEDPXLXKOKKWAVJJIKASWGWKSSVYLDIHNTNAXPYUTCCBLUQYFNLMTGAEULMRFVBVRXDIAYOUAGAKRCSFGYDIRLTXOSOJ");
    const char tmp_msg_0[] = {88, 21, -84, 117, 19, -114, -94, -91, 66, -87, 40, -67, -83, 110, -19, 53, -61, -31, 29, -13, -1, 47, -37, -43, -31, 91, -85, -32, 104, 60, -15, 47, 24, 21, -70, -71, 21, -81, 70, 108, 115, -46, -49, 75, 10, 105, 105, 69, -111, 6, 108, 89, -72, -73, 51, -11, 102, 92, 106, -92, 1, 97, -85, -118, -99, 24, -60, 19, 82, -111, 105, 44, -47, -87, 32, -46, 45, -75, -69, 23, -87, -110, -125, 87, 23, -44, 28, -74, -41, -26, -6, -73, -90, -77, -104, -10, 66, 104, -88, 22, -105, 103, 101, 109, 86, -47, -36, 85, -8, -66, -92, -92, -56, -69, -94, 8, -97, 35, -39, 108, -107, -28, -5, 87, -16, -71, -17, 47, -35, 68, 74, 93, -114, -58, 67, -76, -30, 11, 40, 88, -60, 88, -125, -118, 62, 55, -94, -20, -62, 88, 19, -117, -21, 100, 38, -46, 11, -115, 66, -119, -48, 126, -50, 126, 44, 85, -70, -39, 51, -5, -88, -14, -92, 112, 83, -74, 59, -56, -38, -3, -104, 39, -6, -106, -8, 13, 123, -82, 19, 122, 28, 34, -79, -55, 34, 125, 28, 98, -35, 0, 68, -122, 29, -17, -85, 34, 25, 89, -4, -43, 41, 70, -15, -60, 15, 47, -98, 24, -106};
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
    msg.setTimeStamp(0.369540337667);
    msg.setSource(9181U);
    msg.setSourceEntity(134U);
    msg.setDestination(31209U);
    msg.setDestinationEntity(146U);
    msg.source.assign("ZLSFQMXBAPUSKOKWTCSUORYDHYGJOOABMIIIRTYLZEXHMFNWNCWSZXLLBVSWSPHIEIALVABTJFUYWNPOMRPRUDNGZM");
    const char tmp_msg_0[] = {119, -45, 102, 15, 122, 73, 115, 99, -51, -29, 18, 65, 88, -32, 56, -97, -48, -6, 76, 102, 16, -74, 40, 78, -76, 95, 25, 25, -31, -33, -71, -25, 32, -83, -11, -77, 102, 104, 75, 11, 98, -23, 90, -77, -121, 99, 57, 9, 36, -31, -103, -76, -46, -125, 71, -109, -72, 87, 32, -126, 28, -27, -99, 1, -48, -125, -67, -116, -86, -51, -84, -118, -30, 125, 91, 2, 122, 77, -40, -23, -13, 113, -86, -14, 3, 11, -55, -15, -27, -120, 126, -106, 4, 43, -125, -103, 40, 0, -92, -49, -102, -16, 56, -64, -25, -118, -20, -12, -91, -68, 82, -15, -91, -116, -70, -74, 123, 43, 10, -92, 101, -52, -97, 125, 76, 100, 21, -23, -100, -28, 20, 48, 58, -12, -121, -21, -27, 119, -125, -119, -53, -3, 105, 3, -27, 25, -114, -98, 33, 26, -82, 97, 93, 104, -19, -56, 89, 14, -27, -33, -126, -19, 0, 67, -86, -8, 78, -35, 39, -52};
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
    msg.setTimeStamp(0.325403166398);
    msg.setSource(28886U);
    msg.setSourceEntity(178U);
    msg.setDestination(62776U);
    msg.setDestinationEntity(249U);
    msg.seq = 1606821343U;
    msg.state = 185U;
    msg.error.assign("KCKYZUGQYAVUCFIRGIXOXVAODZBFJMYKYUMVKZDTLZABSMPINBFHDRLOEOX");

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
    msg.setTimeStamp(0.981804533858);
    msg.setSource(57240U);
    msg.setSourceEntity(23U);
    msg.setDestination(6516U);
    msg.setDestinationEntity(165U);
    msg.seq = 2485336138U;
    msg.state = 44U;
    msg.error.assign("JSFBCHEMLQYRUBTQTBMGTNQVMERQAXOPLQSVILMMDJUFSLXDLNKPLDNRMZQJJIDAFWKCONHZIZFAZCEAYOHDIHVZLPJWEFHAZCWSSESXMOBCEVIGPIBGYHOQYRKKBPVFOOUVANAHRSFBXRTYOZKZLVDVXDXGELZWRPWHRWHGWCG");

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
    msg.setTimeStamp(0.162799530479);
    msg.setSource(45608U);
    msg.setSourceEntity(70U);
    msg.setDestination(16783U);
    msg.setDestinationEntity(15U);
    msg.seq = 2450811798U;
    msg.state = 175U;
    msg.error.assign("QKLDAZTQKSMKOIUMXKIJCILOHFORPZHXFDYBABEQQYAMPSAVYWQZFHAYCVNLGPWX");

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
    msg.setTimeStamp(0.620947306971);
    msg.setSource(40910U);
    msg.setSourceEntity(157U);
    msg.setDestination(17052U);
    msg.setDestinationEntity(123U);
    msg.origin.assign("JZFNCQOAKKAQTDUHCADKMZVHOFQAQPLHVGVXMGXJWZCPTKIIBCPCJXVHZYTWNRESGUCAELPJMFKYAESHYQHGVZKANJIY");
    msg.text.assign("NEYMSSWHIOBSJIKQBANMKURFCJHPEZGCPDOSTUHHBNVREYQLUWGVOCQCKJQBNAIYULLYMOCPFFCESBORVVRFMCIHFNRLKQHVOGEOUMYKVVDTZPDZX");

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
    msg.setTimeStamp(0.361905477087);
    msg.setSource(2931U);
    msg.setSourceEntity(33U);
    msg.setDestination(60944U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("CHJMWKRRQHIMOGVBQPCHUZTLUPZJFJNQDGQINAAUEBXFMJWEOEJMYZXLPMLINKOPVPEWWBRKLQHXLPQVYYWBVDGAJPCEUSKICIDZSEASURDBGRVORMRTSKTAGZLVGSSGBYWTYCUSDIOOUEXOOHKIQWJ");
    msg.text.assign("BNPUFNGEPXGCMFLEKFEGURRXJHEINGOIAHVDSGTGKHRYQWTTKNFIQTDPNISUSLJOVJMEZWCSHWBWMRVPBOEHUAQVVVIVWUQONTKJQXRPOJUSQCNZEFUKCGLPZHLUEZTNFYBOIETYYDWLKQZPKUCTJSVZRWQFAGAASBAIKRYXFLCJCKMZZDMODPSEYRXRCXBYZJOASKBUMQVZXVOBHDIJXXOMWGHRTPFDJMHFLLNMXBWYWBDCPCYQGISIAHY");

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
    msg.setTimeStamp(0.947249208998);
    msg.setSource(60224U);
    msg.setSourceEntity(161U);
    msg.setDestination(28U);
    msg.setDestinationEntity(153U);
    msg.origin.assign("UIJWDCSXBJEKQNZJAOCQNCVYAHWPMXGRRAVCUMYSJHRUMPGYYOVHHDCAWRQOLZXBTVHUOASRKARGCXIOFDJTENGLALTSFGFMMBUOVZSEBRCYIPBLGKWPUGFXDFBZTTWYBWIENEZUSSXKNCLZOYTJTVFTKXVXQOHJZPKXRDKZOKNFDGINWDAANDKLSDQHPMHEETJQGUYBEPNFBMRCAHHCVZKIOQLPEWQDSILSRVMULYMMYJ");
    msg.text.assign("WYAOUAZIYXUNEOQTQDNMBLJIEPKBEABWKYMLKTGFYUQRGFOKGFWLGOJDEZDQAZRSPRRATSVSCZGDCWKMNHBKMHHQNVZTSQGCTFOVKVFGTSOIHXUPICWKRQ");

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
    msg.setTimeStamp(0.711856988024);
    msg.setSource(47472U);
    msg.setSourceEntity(35U);
    msg.setDestination(46645U);
    msg.setDestinationEntity(112U);
    msg.origin.assign("EKIPGNJMQSFDEFIKCYXJYOUJHMURONCBOJTSCTYMWOZQTAKELRRFYKLNBTYQHTJQTLKEPXPSJRVSDQZMBNBNGWMVEFXTFHNLXGYLYHLXGWBJRXFRPINCGABPFMSBRZIUWLFADLQIDIUWEEQPCVCDUSRCGJMZV");
    msg.htime = 0.874042617411;
    msg.lat = 0.586820262861;
    msg.lon = 0.730348977165;
    const char tmp_msg_0[] = {-84, 26, 94, -71, 47, 91, 110, 41, -39, 38, -91, -23, -102, -118, 50, -94, 31, 56, -96, -96, 87, -126, -53, 80, 110, 18, -73, 42, -98, -28, 42, -12, 12, -125, 45, 118, -10, 116, 71, -70, 51, 87, 25, -124, -114, -22, 24, -81, -47, -56, -90, -110, -32, 32, -101, -41, 47, 115, -106, -60, -37, 18, 5, -97, 57, -111, -21, -27, -122, -123, -91, 30, -17, 125, 76, 68, -12, 52, -97, 7, 14, -75, 69, -100, 21, -70, -65, 13, -59, -29, 104, -51, -128, 80, -51, -21, -124, -115, 34, 101, 70, -49, 121, -46, -82, -85, 49, 26, 72, 105, -72, 72, -65, 118, -89, 55, 93, 88, -35, 15, 6, -116, -50, 5, 110, -115, -65, -81, -66, 25};
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
    msg.setTimeStamp(0.672162979325);
    msg.setSource(22780U);
    msg.setSourceEntity(182U);
    msg.setDestination(28028U);
    msg.setDestinationEntity(210U);
    msg.origin.assign("ZEBGTAHFBTNGBCAZLMKPVLFXHUIXTJJTWHEDGPFQYKKSGSMASXCVUQAQBLXRIYQJDAWCLVUZTCJEYKIOMKFQJQWZRIXLJGYOSVLGRAAYLZYROISPNDVCOW");
    msg.htime = 0.0114269006575;
    msg.lat = 0.391526264586;
    msg.lon = 0.662980117759;
    const char tmp_msg_0[] = {119, -80, -108, 51, -104, 11, -49, 72, -13, 87, 57, 117, -16, 60, -44, 63, 68, -51, 5, 108, 73, -86, -85, 6, -87, 38, 84, -71};
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
    msg.setTimeStamp(0.0740855009372);
    msg.setSource(59076U);
    msg.setSourceEntity(195U);
    msg.setDestination(23787U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("KIJAHWPLDLOIPA");
    msg.htime = 0.898250270014;
    msg.lat = 0.946817275191;
    msg.lon = 0.347303589838;
    const char tmp_msg_0[] = {-5, -122, -72, 29, 98, -104, 118, 40, -53, 122, -76, 17, -97, 25, -1, 49, 68, 117, 92, 119, -11, 57, -29, 123, -104, 94, 119, 97, 23, -71, -36, 11, -71, 116, 59, -60, -87, 124, 30, 43, -13, -44, -115, 109, -25, 24, 58, -27, 68, 114, 42, -68, -29, 114, 38, 116, -58, -93, -117, -78, 123, 54, -121, -11, -60, 100, -67, -49, 74, 38, -94, 17, 112, 61, 37, -14, 46, -87, 30, 122, 58, -6, -60, -127, -74, -36, 3, -48, -39, -36, -51, -57, 34, -126, -87, -2, 67, -58, 99, -97, -81, -127, -52, -33, -48, 91, -67, 83, -26, -82, 9, -120, 97, -51, 33, -15, -1};
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
    msg.setTimeStamp(0.746339294748);
    msg.setSource(20742U);
    msg.setSourceEntity(227U);
    msg.setDestination(9418U);
    msg.setDestinationEntity(241U);
    msg.req_id = 47531U;
    msg.ttl = 55524U;
    msg.destination.assign("TKNUAJHHOQDPGPKYRKOGFESRROANNVQARPRUCQSEQXMWIDTDXCJOFMSCYPPZHAOAMHETBLGLKRMUWINCGEIZTRFHXSSBVZOOXPWBNDUNWEZBVCZZAOVAKUEVDZTIHLVYIACZLPGYXUBHMWBLLEIMGUXJIJHGQUSYYFTWJEDLJYYKMTMLCQUQEPBPWQFKDTRNNKWKFVHLQCIXFXVVUIFPFBGRJGCTSEYMRZHDOBSGFJDAV");
    const char tmp_msg_0[] = {100, 111, 22, -43, -118, -69, -5, 61, 10, -80, -19, -65, -33, -75, 103, 36, 19, -13, 38, 20, 33, 22, -64, -7, -72, -117, 89, -29, -19, 122, -55, 70, -113, -6, 15, -81, -9, 61, -54, -115, 117, 112, 103, 23, 30, -82, 53, -93, -104, -75, 113, 125, 24, -51, 81, 72, -33, 10, -100, -24, -62, -123, -125, -72, 55, -49, 124, 116, -53, -71, -34, -116, 120, 36, -5, -119, 95, -36, -26, 57, -125, 121, -82, 62, 91, -34, -34, -37, -82, 12, -5, -37, 59, 114, 89, 70, -52, -50, 58, 89, 47, -94, 61, 64, -78, 9, -111, -15, 58, -93, 85, -13, -85, -56, 73, 104, -68, 52, -76, -95, -84, -84, -9, 13, -19, 45, -17, -116, 35, 32, -116, -117, -120, -48, -51, -75, -63, 49, 60, -5, -115, -67, 32, 104, 50, -98, 62, 41, 7, 59, -46, -48, 23, 120, -101, -54, 82, 44, 29, -2, -3, 92, -86, 77, -81, -27, -1, -32, -110, -127, 107, -45, 15, -67, -9, 49, 28, -58, 20, 123, -113, 8, 109, 90, 46, -118, -29, 79, 42, -91, -40, 49, -62, 71, -115, 93, 100, 62, 83, 116, 113, 96, -122, -116, 26, -126, 98, 78, 8, -104, 114, -45, 70, -127, 76, 33, -69, -115, -53, -76, -64, 123, 97, -100, 60, -100, -109, -80, -52, -92, 31, -70, -74, 56, 63, -83, 27, 57, -96, -48, -33, -119, -15, -66, 62, -15, 37, -111};
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
    msg.setTimeStamp(0.812808267674);
    msg.setSource(57313U);
    msg.setSourceEntity(244U);
    msg.setDestination(38728U);
    msg.setDestinationEntity(175U);
    msg.req_id = 27990U;
    msg.ttl = 62896U;
    msg.destination.assign("FJMWLMYBTNXWLOYEYQVSUMUJPWYPBKWHUPNLVISWKZGKPBULRZGBGANCFNAMHTTFOXVECBJILUVXBSDGDLCLKNOZHWHEDIWJYWIIPZTZFKDKQRFSCXHXVJPGORDDFEHZNMSGQUYRVMMVTAAOCUUSYRLDAAVJINDQBHGRFIWKQQCDWMPCVGRBKYXARNEXHAHDTLKJCEYZIUFKSMNQXOPZTCXOEPJOQLFTOAEIETRSTUGZHBMEN");
    const char tmp_msg_0[] = {-126, -66, -51, 49, -125, -118, -74, 46, -58, -94, 34, -76, -93, 14, -41, 7, -11, -73, -74, 25, -127, 94, -72, 125, -57, -21, 123, -112, 35, -30, -111, 10, 11, 101, 14, 60, 113, -119, -37, -101, -112, 116, -100, 111, -66, 65, 106};
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
    msg.setTimeStamp(0.448503389443);
    msg.setSource(28838U);
    msg.setSourceEntity(16U);
    msg.setDestination(29289U);
    msg.setDestinationEntity(116U);
    msg.req_id = 63913U;
    msg.ttl = 36079U;
    msg.destination.assign("OKQIWHZOXWQRUPMDAUTECILBIOTXTMFACVBBGMDDVWJGRHHIPPWBGMNKERGDZFDDWTDZLAMCKX");
    const char tmp_msg_0[] = {-85, 48, -3, -84, 120, -29, 76, 59, 38, 16, 84, -64, -32, 35, -17, -44, -98, 2, -39, -62, -55, 69, -100, -83, -6, 106, -97, -40, 65, 120, -39, 19, -86, 46, -63, 60, 87, -103, 38, -126, 38, -15, -124, 77, 29, -6, 39, 116, 80, -38, 67, -36, 89, 106, 104, -120, -29, -99, 3, 17, 109, 46, -14, -81, -35, -46, 15, -107, -3, 76, -47, 124, 26, -105, -9, 37, 51, -15, 25, -5, 6, -96, -5, -63, 124, 62, 89, 86, 46, 120, -17, -61, -83, 14, -18, 2, 30, -58, 72, -4, 44, 94, -121, 55, -25, -22, -24, -68, -99, 106, -126, -60, -120, 100, -79, 110, 1, 59, 78, 49, 83, 1, 54, 64, -30, -62, -2, -69, -58, 72, 59, 41};
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
    msg.setTimeStamp(0.58481710744);
    msg.setSource(1276U);
    msg.setSourceEntity(44U);
    msg.setDestination(22647U);
    msg.setDestinationEntity(22U);
    msg.req_id = 45932U;
    msg.status = 191U;
    msg.text.assign("TCWEEIBVGIXYOVFBSCIGMBHWFCPMQITFAVYNOSJEJZIMSYWUTBSLUFVTYUYQWCANXDKEBLFELNYRSVRZDQIMBPDPHOZPO");

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
    msg.setTimeStamp(0.087832431695);
    msg.setSource(40206U);
    msg.setSourceEntity(82U);
    msg.setDestination(5584U);
    msg.setDestinationEntity(67U);
    msg.req_id = 30314U;
    msg.status = 181U;
    msg.text.assign("BGCQTEPDQRMVWQKTUBUQZLQLNPRIDLGHGWCAKDYAHSJNGVJOIKERWWOYFELKZMZLRSSNVMDUQXZJEQDVCY");

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
    msg.setTimeStamp(0.969296910833);
    msg.setSource(18633U);
    msg.setSourceEntity(18U);
    msg.setDestination(39201U);
    msg.setDestinationEntity(230U);
    msg.req_id = 51308U;
    msg.status = 154U;
    msg.text.assign("RLOZDVVFMLGCUZNOJMLGPUXRVDYVZIBWRXUHJPOCFKMNITEYBEUKGJIVIDBBHATEQQIJQOXWLEMLUONQCSAUXJLKEMZKXNYPVPNCPKSLAZTMGCYWJJTXACKTWQRTMDKWDIVFUWSAIUPFDAHBOR");

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
    msg.setTimeStamp(0.165131483718);
    msg.setSource(33629U);
    msg.setSourceEntity(72U);
    msg.setDestination(29103U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("RINLGRUVSNZUBITUMEJIWCDOAOENMQPVVHXUYCBHJHWOHMFYCREFLPZKSSKMTWAMKIYHWJFKLZSBOYSITDPCLEFYFTLFBXGOKVZQACIVCTGXTWBFDPQKNGCTWXDVZJNFSTMCNEDZYHFZACDNLIKYBQWPUGVZBDMMPQZBNYXHSWSGUWXRXLLJYIQRJXSJOJHXZQIJPHUXKUODTOOADSYAPAQTAJVORRRHIEUAMPNGGENQKLDLEBVKVUGPFCG");
    msg.links = 1920416115U;

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
    msg.setTimeStamp(0.379047446156);
    msg.setSource(1106U);
    msg.setSourceEntity(204U);
    msg.setDestination(16478U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("XJIFPONKMPVNYPWAVMKZFOHEATZXNBTCQZIEYVGOYUIIYVZIDXDAYZYKSOHMHNKCBLSNWDIKCHTQAUJJGHIFZNRRXMXWRHOZWXSIUBUOVKDPBYAQARKRUTGOMVPECPLMHFTPGQKOTEYBLLBYFYIJMHFAUHNWDNQSEPJEKNMBFLDCMOULTCVQ");
    msg.links = 2501760028U;

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
    msg.setTimeStamp(0.539592412888);
    msg.setSource(43471U);
    msg.setSourceEntity(216U);
    msg.setDestination(8741U);
    msg.setDestinationEntity(63U);
    msg.group_name.assign("PEYYOHCKZAWYPQTUSJIAZPWTVNMDLVXKJIKORCDF");
    msg.links = 47724279U;

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
    msg.setTimeStamp(0.353524918262);
    msg.setSource(22094U);
    msg.setSourceEntity(185U);
    msg.setDestination(64297U);
    msg.setDestinationEntity(54U);
    msg.groupname.assign("UEXMXQXBTUHWGTWMEZLSQWMXMVYFKQCGOJNOFLNUPJRDRPJLOROHTOEQVDNBHOVRGLJRMZFOAVUAPCTILYMZXJSPYNFQEREDMNGADIFNHLOEACYTKRDTDGJCWXTDGTOEULMAMLUTJKKNSIBUOQHVYZEMUVVXYWAVNPYUSPDGUPHSSQRJIKNTBH");
    msg.action = 201U;
    msg.grouplist.assign("NSCCKOAEQIMAIVQVLSMYZCQTEMFICYZOEJRVHPK");

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
    msg.setTimeStamp(0.266482747895);
    msg.setSource(953U);
    msg.setSourceEntity(239U);
    msg.setDestination(33013U);
    msg.setDestinationEntity(46U);
    msg.groupname.assign("DPTLFLLBUUSVGPINUVHMHTLXIHZVXAGBYGSLNKZJDKDMOFYLCMWQLFSJDRAFYHCZEMOZVXITLXRVWSNHWZSUTEWAGKJGSLKNEIUBGICUWCPYAOQEZEMWHKFNFJVSMVWBJBQRNRODXSCQCKOYZUDNNBXRXDPOTNYRIGHPDMHMUEBFUKSKTOMXBHFAGVURYEBOAHISBCYPTFOOKZMEFNPIYXGQWJK");
    msg.action = 55U;
    msg.grouplist.assign("VDFUTTCXWOAVDYHGLKIUFYOAURRTQKKEMAOXVNAJBC");

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
    msg.setTimeStamp(0.418836026469);
    msg.setSource(31356U);
    msg.setSourceEntity(164U);
    msg.setDestination(32041U);
    msg.setDestinationEntity(242U);
    msg.groupname.assign("JSMUHNKYINDVIBNLNXGTMSFNRERGZQQSXFGEOAMEJXVQWWZSUNQIJGZTQFXHMALBMHZRXHQOYNQUCDSJJKPPLNDOBRVAZDFJBYKQAETLHZGIESPJXFCVOVVEYTPMHFPOUCDFCPNCZLYPXBOBKGXXVRKM");
    msg.action = 230U;
    msg.grouplist.assign("OJFWLPMKZLBSGFFVALQCPYWXCFZGXGTDPWHMCSJKFSJCSHXWVGAPEOOLXJGRGENSRIGKFYQOQSAPDZTUJURNKGMCVEIBSTNTUYQLQEUVWMETOBXZBHJHHHHTYAZNONRCRIHVIFRWMTDDUKCNMIGPPDADLLSV");

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
    msg.setTimeStamp(0.691727635106);
    msg.setSource(58320U);
    msg.setSourceEntity(34U);
    msg.setDestination(60343U);
    msg.setDestinationEntity(140U);
    msg.id = 252U;
    msg.range = 0.989767410387;

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
    msg.setTimeStamp(0.22059981467);
    msg.setSource(58231U);
    msg.setSourceEntity(115U);
    msg.setDestination(60850U);
    msg.setDestinationEntity(193U);
    msg.id = 50U;
    msg.range = 0.18590605678;

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
    msg.setTimeStamp(0.598683852551);
    msg.setSource(25503U);
    msg.setSourceEntity(121U);
    msg.setDestination(11518U);
    msg.setDestinationEntity(209U);
    msg.id = 48U;
    msg.range = 0.220017583342;

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
    msg.setTimeStamp(0.334142355365);
    msg.setSource(42220U);
    msg.setSourceEntity(163U);
    msg.setDestination(25968U);
    msg.setDestinationEntity(147U);
    msg.beacon.assign("BLQAYRRAHHPDWQDREUOKXHLAVFGRQFOGWNFOESZGTNMQAMVBZPFSEEHVRM");
    msg.lat = 0.364306776548;
    msg.lon = 0.742722481813;
    msg.depth = 0.586006452762;
    msg.query_channel = 78U;
    msg.reply_channel = 56U;
    msg.transponder_delay = 35U;

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
    msg.setTimeStamp(0.966497500042);
    msg.setSource(50870U);
    msg.setSourceEntity(141U);
    msg.setDestination(31793U);
    msg.setDestinationEntity(148U);
    msg.beacon.assign("RHQKMSBNZZQLDLWMBKDYSMYRGOZ");
    msg.lat = 0.334724910192;
    msg.lon = 0.85750457862;
    msg.depth = 0.377506545734;
    msg.query_channel = 249U;
    msg.reply_channel = 144U;
    msg.transponder_delay = 59U;

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
    msg.setTimeStamp(0.0528018544575);
    msg.setSource(15489U);
    msg.setSourceEntity(17U);
    msg.setDestination(15480U);
    msg.setDestinationEntity(234U);
    msg.beacon.assign("JCQYHQJPZZIKNKWT");
    msg.lat = 0.0417199754016;
    msg.lon = 0.50984918413;
    msg.depth = 0.000982062643061;
    msg.query_channel = 197U;
    msg.reply_channel = 11U;
    msg.transponder_delay = 6U;

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
    msg.setTimeStamp(0.513439746257);
    msg.setSource(26443U);
    msg.setSourceEntity(30U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(136U);
    msg.op = 133U;

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
    msg.setTimeStamp(0.373530092824);
    msg.setSource(7507U);
    msg.setSourceEntity(143U);
    msg.setDestination(37452U);
    msg.setDestinationEntity(117U);
    msg.op = 93U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KGYWTPRWYRMSFGFTVCFHDROTRANCPFHANEUZKXQYHINUTXQDZUJSLIVCUGUHYEEDXONKKOGVMRAWXFWOEBR");
    tmp_msg_0.lat = 0.861647261786;
    tmp_msg_0.lon = 0.985531660035;
    tmp_msg_0.depth = 0.858604705723;
    tmp_msg_0.query_channel = 8U;
    tmp_msg_0.reply_channel = 217U;
    tmp_msg_0.transponder_delay = 14U;
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
    msg.setTimeStamp(0.963525817694);
    msg.setSource(3281U);
    msg.setSourceEntity(11U);
    msg.setDestination(54839U);
    msg.setDestinationEntity(90U);
    msg.op = 125U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZNRHCBORMLIPXUYBMKGVTWUKNFMGHDESKQAGNXVKSPHJTSEJESGYXAETCWKKRGMKDJTZLTIMCTMLPAOKFJLFJKUISOCNQQZJHXQCHUBZJRNOAYCSFFUWPHBEMVNPIJMBMSJLBZBHYOICSAZYSULNWQQRAEXWPVUFYWODGARBRXVUZAPOTNDXHQDJZWIVIRTKRYIOCAFPACZQGRWVNYTGDHWFVLYPIBYUGW");
    tmp_msg_0.lat = 0.83917234839;
    tmp_msg_0.lon = 0.759274965877;
    tmp_msg_0.depth = 0.778715207668;
    tmp_msg_0.query_channel = 239U;
    tmp_msg_0.reply_channel = 118U;
    tmp_msg_0.transponder_delay = 166U;
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
    msg.setTimeStamp(0.792953114426);
    msg.setSource(48398U);
    msg.setSourceEntity(16U);
    msg.setDestination(607U);
    msg.setDestinationEntity(46U);
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 191U;
    tmp_msg_0.htime = 0.618963186464;
    tmp_msg_0.context.assign("ARYHDAATGGTZBZKQBLEXWBTQCNFZBCWVDKTVBVQOFZSUYMKHAENUGVSUOYKCAFJTLOCHERJBWFQKLMEFKGDEXVMVYTHOEHNULAONGYJJEQRLOPZIHXEIZPASZOWPNMLLUTTMQLDWZIJIYPUCFPRDPQIJSCCMDDHBKPKSDNIQCXHTPFRABLSXBFYNMIDCSJRVHEPYGWREUFQXMHRVMWJXOQTYOUN");
    tmp_msg_0.text.assign("ORUSLKWCGSQYTUIWXAILAVZNVUAYSZJCXLFXRLPIMLFSCYDDSAHVPEITXSJHTCHRBTZDGLJMKQPOSTATODNYGKPDJEYZXVGBHRVVEIVBKUGAHORFUUDKREDYPYZWUZHPCWDCZEWHBQJQFNOIFGBWLRMQMNSBXLGZZFAMTYXFUXDVCNUXJMJUYMJSJKPQCDLHWFITRIABEOJTEEQRWQTIWMMQGHPEAWKKHKPFRNKNVABGE");
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
    msg.setTimeStamp(0.294625288182);
    msg.setSource(183U);
    msg.setSourceEntity(167U);
    msg.setDestination(59751U);
    msg.setDestinationEntity(17U);
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 60528U;
    tmp_msg_0.ttl = 27867U;
    tmp_msg_0.destination.assign("TFIZCSXXYHADDRJHCVKKOSRQPVUHQVEAYPOGKRJASOWUJW");
    const char tmp_tmp_msg_0_0[] = {-79, 69, 1, 69, 121, -33, 97, 32, 20, 44, 61, 27, -7, 77, -105, 21, 46, -16, 103, 99, -97, -119, 94, 70, -85, 98, 124, -76, -47, -28, 102, 80, 100, -113, 62, 75, 96, 19, 40, 21, -33, -8, -113, -90, -116, 0, 99, 54, -73, 63, 60, -1, 97, 35, 111, 69, 82, 110, 104, -109, -53, -28, -63, -120, -52, -23, 21, 67, 69, -110, -120, -83, -53, -22, 89, 9, -1, 34, -105, -57, 24, 77, 5, 70, 101, 56, -1, -59, -108, -54, -117, -3, 89, 103, 102, 42, -78, 107, 50, 96, -67, -61, -43, 80, -128, 27, 95, 2, -110, 19, 54, 5, -99, -9, -70, 87, -49, 85, -50, -84, -13, -77, -77, 18, -51, -66, 62, -95, 63, 101, -110, -101};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.895135981874);
    msg.setSource(65475U);
    msg.setSourceEntity(19U);
    msg.setDestination(56187U);
    msg.setDestinationEntity(229U);
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.687629086604);
    msg.setSource(24441U);
    msg.setSourceEntity(171U);
    msg.setDestination(24579U);
    msg.setDestinationEntity(40U);
    msg.op = 207U;
    msg.system.assign("MHSZJRGSPNBVZROFOWMVJZTGNSLFTBITOPWJGQUILUDPDPIPPAREIZAFXBUKWTYKYYDIFTYKWOCOGECWITOLGXJJMTFCFEQQULIWLNMEPCJURKLNBXVVWFVCRMXSNCDFANZGQQMKEJNBHRQPSLGHUETHJSWZARHKKDGOAGDIZEX");
    msg.range = 0.225632656687;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 253U;
    tmp_msg_0.label.assign("STPBLGBIYHZRSRFMIMSZQOLEJRKSKGGFKFRDANGFLJDPWUCMCYOCMJOQCCUNNBJZVVVENSWCMVCKOBNTPMHYURWHWPYVGTAETBHZSQOXXAXPCIUSIGNJANEJHKEZDTDWGTRFNFXBXWHSVUYLUTXZUVAFVPCMQAZWDEEDDUBQQHEORKBL");
    tmp_msg_0.component.assign("NVHKYORNBORQMTHAKCMLCPBDSGMFRVKIISSQLGKALEIDDKJHHSZZPWUZUXONKTTGGDSKYJLCQLWBAOZFBVMZALEMBJZRJWZPEOBEHTBAUPTTUUMYTWQGNEIUWPEQMWUPFY");
    tmp_msg_0.act_time = 15503U;
    tmp_msg_0.deact_time = 30516U;
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
    msg.setTimeStamp(0.653307254487);
    msg.setSource(33776U);
    msg.setSourceEntity(22U);
    msg.setDestination(35838U);
    msg.setDestinationEntity(190U);
    msg.op = 51U;
    msg.system.assign("JHWHNWNWIOYHQQKHMWFBBPVOTWULELLBUQMDJVPRRKGXENELDAWJMQSALNMZCKMJIPIRJEORHQSXQKKOWAYCYETBEOMCCPUPRMYCSSWGYYZKGCISFQRGVVNOGBJNOPFHYIHBDCVRTRNFIFABVUNXMXTQTAUVEFIXTQZVAGUDYJPZTOFASRPEISLQHOXEFZXDNHGLAYWRZM");
    msg.range = 0.800625002561;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.280351969172;
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
    msg.setTimeStamp(0.833552122229);
    msg.setSource(49915U);
    msg.setSourceEntity(131U);
    msg.setDestination(39331U);
    msg.setDestinationEntity(234U);
    msg.op = 232U;
    msg.system.assign("AECFWJJALAIYIEBKUKUJVTWPQWVSAJPLMSENNAZICMTVGKDZMUDDTSBZBYS");
    msg.range = 0.911963084166;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.641547800715;
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
    msg.setTimeStamp(0.874886236191);
    msg.setSource(64890U);
    msg.setSourceEntity(95U);
    msg.setDestination(2203U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.483802835294);
    msg.setSource(39073U);
    msg.setSourceEntity(140U);
    msg.setDestination(45623U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.370777495381);
    msg.setSource(10744U);
    msg.setSourceEntity(201U);
    msg.setDestination(12053U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.871858853377);
    msg.setSource(61100U);
    msg.setSourceEntity(100U);
    msg.setDestination(19376U);
    msg.setDestinationEntity(187U);
    msg.list.assign("AIRKQNFZVGPWZUBZKNSGLRZCEOFNQBJEVFEFMCBVPIKBGZBCCCRLPYYTPPQPXXWWHJPAATRDCJQIFDGLNHOSBNXRZTSVDMRPDZLGJEQOBIUKSHXAXYUJSCOSUHCMQOQGTKTWMZIFIFYUAHAVUTS");

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
    msg.setTimeStamp(0.0251307755712);
    msg.setSource(36905U);
    msg.setSourceEntity(168U);
    msg.setDestination(60271U);
    msg.setDestinationEntity(20U);
    msg.list.assign("VEMMMJOXLRWERGARVEKMKTKZOGEUFKDUBBDPNLAXSZRHNIBQULXZBNEZIZSHRTLJPPJWGYYYDTCCIPJPAOOFZXREASXQAZJMRYWSNFXESBAVVDQQTIJWULHPHVGOHKVDGWHKNUVZNKNJUWXTVTDSUQMFXGBFXC");

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
    msg.setTimeStamp(0.128150615536);
    msg.setSource(37547U);
    msg.setSourceEntity(92U);
    msg.setDestination(47670U);
    msg.setDestinationEntity(57U);
    msg.list.assign("SZFPBTQTLNMMXBSVCAIZERWUXQUEZAHDSILEBDIYWWJVAHBJOYIRJFTAFKGDZFMPKRIYUITOWPUGGASRTTWFLZXFSOPNPLWRMTYKUTSMOQNELO");

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
    msg.setTimeStamp(0.356512019774);
    msg.setSource(29189U);
    msg.setSourceEntity(103U);
    msg.setDestination(52526U);
    msg.setDestinationEntity(199U);
    msg.value = 12615;

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
    msg.setTimeStamp(0.725760598589);
    msg.setSource(46947U);
    msg.setSourceEntity(210U);
    msg.setDestination(17191U);
    msg.setDestinationEntity(59U);
    msg.value = 23816;

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
    msg.setTimeStamp(0.328326305322);
    msg.setSource(57601U);
    msg.setSourceEntity(67U);
    msg.setDestination(42205U);
    msg.setDestinationEntity(162U);
    msg.value = -8058;

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
    msg.setTimeStamp(0.354612762704);
    msg.setSource(61774U);
    msg.setSourceEntity(225U);
    msg.setDestination(38613U);
    msg.setDestinationEntity(186U);
    msg.value = 0.273281512296;

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
    msg.setTimeStamp(0.570358915593);
    msg.setSource(32521U);
    msg.setSourceEntity(230U);
    msg.setDestination(62485U);
    msg.setDestinationEntity(161U);
    msg.value = 0.424142998736;

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
    msg.setTimeStamp(0.0486811999429);
    msg.setSource(5850U);
    msg.setSourceEntity(193U);
    msg.setDestination(53698U);
    msg.setDestinationEntity(222U);
    msg.value = 0.873189020444;

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
    msg.setTimeStamp(0.836810430223);
    msg.setSource(30899U);
    msg.setSourceEntity(224U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(243U);
    msg.value = 0.980251358727;

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
    msg.setTimeStamp(0.35627044482);
    msg.setSource(602U);
    msg.setSourceEntity(242U);
    msg.setDestination(6954U);
    msg.setDestinationEntity(20U);
    msg.value = 0.387232981367;

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
    msg.setTimeStamp(0.308978811497);
    msg.setSource(17724U);
    msg.setSourceEntity(96U);
    msg.setDestination(35565U);
    msg.setDestinationEntity(139U);
    msg.value = 0.827248563454;

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
    msg.setTimeStamp(0.887202355568);
    msg.setSource(46120U);
    msg.setSourceEntity(237U);
    msg.setDestination(61690U);
    msg.setDestinationEntity(171U);
    msg.validity = 20407U;
    msg.type = 18U;
    msg.utc_year = 55712U;
    msg.utc_month = 68U;
    msg.utc_day = 34U;
    msg.utc_time = 0.954165348158;
    msg.lat = 0.000491824755035;
    msg.lon = 0.355240689733;
    msg.height = 0.229838893139;
    msg.satellites = 64U;
    msg.cog = 0.358079657468;
    msg.sog = 0.125798263578;
    msg.hdop = 0.820287031859;
    msg.vdop = 0.179240745967;
    msg.hacc = 0.108647860776;
    msg.vacc = 0.804567037498;

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
    msg.setTimeStamp(0.953894579101);
    msg.setSource(29565U);
    msg.setSourceEntity(239U);
    msg.setDestination(31670U);
    msg.setDestinationEntity(67U);
    msg.validity = 33378U;
    msg.type = 115U;
    msg.utc_year = 58413U;
    msg.utc_month = 93U;
    msg.utc_day = 167U;
    msg.utc_time = 0.481015048057;
    msg.lat = 0.878825141026;
    msg.lon = 0.931158460267;
    msg.height = 0.74733116107;
    msg.satellites = 89U;
    msg.cog = 0.397085012812;
    msg.sog = 0.111717349998;
    msg.hdop = 0.886692175586;
    msg.vdop = 0.974213908309;
    msg.hacc = 0.294452682532;
    msg.vacc = 0.131366890863;

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
    msg.setTimeStamp(0.986480815672);
    msg.setSource(57710U);
    msg.setSourceEntity(109U);
    msg.setDestination(12858U);
    msg.setDestinationEntity(161U);
    msg.validity = 58031U;
    msg.type = 242U;
    msg.utc_year = 44212U;
    msg.utc_month = 3U;
    msg.utc_day = 55U;
    msg.utc_time = 0.0367172185681;
    msg.lat = 0.498272348803;
    msg.lon = 0.722328837877;
    msg.height = 0.469401845072;
    msg.satellites = 254U;
    msg.cog = 0.872239234596;
    msg.sog = 0.346707739487;
    msg.hdop = 0.482082510413;
    msg.vdop = 0.585093398055;
    msg.hacc = 0.786649825122;
    msg.vacc = 0.451538534301;

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
    msg.setTimeStamp(0.443697150637);
    msg.setSource(31197U);
    msg.setSourceEntity(50U);
    msg.setDestination(13310U);
    msg.setDestinationEntity(252U);
    msg.time = 0.943760680795;
    msg.phi = 0.376611003921;
    msg.theta = 0.259217328831;
    msg.psi = 0.196847423838;
    msg.psi_magnetic = 0.833067735719;

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
    msg.setTimeStamp(0.941041991266);
    msg.setSource(41706U);
    msg.setSourceEntity(57U);
    msg.setDestination(8137U);
    msg.setDestinationEntity(171U);
    msg.time = 0.0212765523522;
    msg.phi = 0.633799470257;
    msg.theta = 0.693477154529;
    msg.psi = 0.17862579887;
    msg.psi_magnetic = 0.406070612717;

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
    msg.setTimeStamp(0.729343452421);
    msg.setSource(46895U);
    msg.setSourceEntity(30U);
    msg.setDestination(4303U);
    msg.setDestinationEntity(155U);
    msg.time = 0.649714426961;
    msg.phi = 0.661414239133;
    msg.theta = 0.95031309027;
    msg.psi = 0.798591626292;
    msg.psi_magnetic = 0.0662318058729;

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
    msg.setTimeStamp(0.460278177886);
    msg.setSource(51328U);
    msg.setSourceEntity(67U);
    msg.setDestination(58596U);
    msg.setDestinationEntity(120U);
    msg.time = 0.402740675703;
    msg.x = 0.733558378361;
    msg.y = 0.233201955506;
    msg.z = 0.856921851727;
    msg.timestep = 0.790118626797;

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
    msg.setTimeStamp(0.639705254289);
    msg.setSource(59902U);
    msg.setSourceEntity(59U);
    msg.setDestination(12693U);
    msg.setDestinationEntity(136U);
    msg.time = 0.612569734473;
    msg.x = 0.733611098208;
    msg.y = 0.0620231807842;
    msg.z = 0.163353596923;
    msg.timestep = 0.915555546757;

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
    msg.setTimeStamp(0.420923371567);
    msg.setSource(19611U);
    msg.setSourceEntity(196U);
    msg.setDestination(63182U);
    msg.setDestinationEntity(233U);
    msg.time = 0.580352598745;
    msg.x = 0.345376772827;
    msg.y = 0.889197421451;
    msg.z = 0.741762376106;
    msg.timestep = 0.489822735508;

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
    msg.setTimeStamp(0.300911937994);
    msg.setSource(42738U);
    msg.setSourceEntity(87U);
    msg.setDestination(35971U);
    msg.setDestinationEntity(179U);
    msg.time = 0.681984916964;
    msg.x = 0.710359382531;
    msg.y = 0.161857417911;
    msg.z = 0.715165486084;

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
    msg.setTimeStamp(0.857109795116);
    msg.setSource(9536U);
    msg.setSourceEntity(203U);
    msg.setDestination(48843U);
    msg.setDestinationEntity(152U);
    msg.time = 0.583766826104;
    msg.x = 0.681641114269;
    msg.y = 0.175490429723;
    msg.z = 0.749582022153;

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
    msg.setTimeStamp(0.590380782935);
    msg.setSource(22129U);
    msg.setSourceEntity(238U);
    msg.setDestination(39766U);
    msg.setDestinationEntity(39U);
    msg.time = 0.081487388497;
    msg.x = 0.941422829075;
    msg.y = 0.940288272165;
    msg.z = 0.216811694615;

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
    msg.setTimeStamp(0.212853316456);
    msg.setSource(17041U);
    msg.setSourceEntity(148U);
    msg.setDestination(1315U);
    msg.setDestinationEntity(193U);
    msg.time = 0.0882196248173;
    msg.x = 0.0782455490881;
    msg.y = 0.86764445118;
    msg.z = 0.826752756536;

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
    msg.setTimeStamp(0.283856408055);
    msg.setSource(46695U);
    msg.setSourceEntity(150U);
    msg.setDestination(5175U);
    msg.setDestinationEntity(186U);
    msg.time = 0.917037388836;
    msg.x = 0.506187839672;
    msg.y = 0.207335046825;
    msg.z = 0.0890901522585;

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
    msg.setTimeStamp(0.0999800033714);
    msg.setSource(7181U);
    msg.setSourceEntity(46U);
    msg.setDestination(32531U);
    msg.setDestinationEntity(63U);
    msg.time = 0.5321322102;
    msg.x = 0.837712119203;
    msg.y = 0.725362641736;
    msg.z = 0.940264782409;

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
    msg.setTimeStamp(0.0203645846091);
    msg.setSource(43344U);
    msg.setSourceEntity(163U);
    msg.setDestination(55731U);
    msg.setDestinationEntity(49U);
    msg.time = 0.951251669432;
    msg.x = 0.956621853467;
    msg.y = 0.937773946441;
    msg.z = 0.209656739634;

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
    msg.setTimeStamp(0.25150762246);
    msg.setSource(53855U);
    msg.setSourceEntity(185U);
    msg.setDestination(1174U);
    msg.setDestinationEntity(150U);
    msg.time = 0.185116987882;
    msg.x = 0.513538410662;
    msg.y = 0.271846914626;
    msg.z = 0.545439346924;

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
    msg.setTimeStamp(0.645914220339);
    msg.setSource(60976U);
    msg.setSourceEntity(242U);
    msg.setDestination(9034U);
    msg.setDestinationEntity(133U);
    msg.time = 0.277829415364;
    msg.x = 0.993797162408;
    msg.y = 0.135493061253;
    msg.z = 0.898880345624;

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
    msg.setTimeStamp(0.31463295742);
    msg.setSource(19184U);
    msg.setSourceEntity(55U);
    msg.setDestination(29557U);
    msg.setDestinationEntity(49U);
    msg.validity = 208U;
    msg.x = 0.896035527949;
    msg.y = 0.443760973187;
    msg.z = 0.69698425848;

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
    msg.setTimeStamp(0.813509090358);
    msg.setSource(2823U);
    msg.setSourceEntity(168U);
    msg.setDestination(64611U);
    msg.setDestinationEntity(229U);
    msg.validity = 163U;
    msg.x = 0.111182417523;
    msg.y = 0.845102090344;
    msg.z = 0.32743294627;

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
    msg.setTimeStamp(0.264586883491);
    msg.setSource(20380U);
    msg.setSourceEntity(87U);
    msg.setDestination(41914U);
    msg.setDestinationEntity(13U);
    msg.validity = 241U;
    msg.x = 0.0414351034517;
    msg.y = 0.776173673505;
    msg.z = 0.152794269842;

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
    msg.setTimeStamp(0.529899486906);
    msg.setSource(55415U);
    msg.setSourceEntity(188U);
    msg.setDestination(39560U);
    msg.setDestinationEntity(216U);
    msg.validity = 158U;
    msg.x = 0.495720670029;
    msg.y = 0.707525109282;
    msg.z = 0.923278699662;

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
    msg.setTimeStamp(0.285365961819);
    msg.setSource(11003U);
    msg.setSourceEntity(150U);
    msg.setDestination(36699U);
    msg.setDestinationEntity(92U);
    msg.validity = 28U;
    msg.x = 0.340819492561;
    msg.y = 0.365774886227;
    msg.z = 0.304380266164;

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
    msg.setTimeStamp(0.269154279374);
    msg.setSource(56276U);
    msg.setSourceEntity(209U);
    msg.setDestination(41338U);
    msg.setDestinationEntity(88U);
    msg.validity = 47U;
    msg.x = 0.635835274978;
    msg.y = 0.901660072679;
    msg.z = 0.130381307006;

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
    msg.setTimeStamp(0.135932679509);
    msg.setSource(23364U);
    msg.setSourceEntity(103U);
    msg.setDestination(61099U);
    msg.setDestinationEntity(44U);
    msg.time = 0.634573646552;
    msg.x = 0.854201655609;
    msg.y = 0.767643474293;
    msg.z = 0.844631619833;

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
    msg.setTimeStamp(0.0795381058016);
    msg.setSource(64163U);
    msg.setSourceEntity(173U);
    msg.setDestination(58661U);
    msg.setDestinationEntity(80U);
    msg.time = 0.568387895785;
    msg.x = 0.350828490579;
    msg.y = 0.12771018552;
    msg.z = 0.0974349305681;

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
    msg.setTimeStamp(0.207003840852);
    msg.setSource(18647U);
    msg.setSourceEntity(222U);
    msg.setDestination(20800U);
    msg.setDestinationEntity(195U);
    msg.time = 0.438471543466;
    msg.x = 0.492689833313;
    msg.y = 0.954037257299;
    msg.z = 0.697824000399;

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
    msg.setTimeStamp(0.605953277163);
    msg.setSource(34609U);
    msg.setSourceEntity(125U);
    msg.setDestination(52345U);
    msg.setDestinationEntity(172U);
    msg.validity = 98U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.250249094644;
    tmp_msg_0.y = 0.619648540895;
    tmp_msg_0.z = 0.192466259495;
    tmp_msg_0.phi = 0.127181850207;
    tmp_msg_0.theta = 0.34388568358;
    tmp_msg_0.psi = 0.936219608845;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.693945432441;
    tmp_msg_1.beam_height = 0.740882553706;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.766621841156;

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
    msg.setTimeStamp(0.757984808672);
    msg.setSource(61176U);
    msg.setSourceEntity(108U);
    msg.setDestination(15044U);
    msg.setDestinationEntity(72U);
    msg.validity = 187U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.859496385358;
    tmp_msg_0.y = 0.781751965807;
    tmp_msg_0.z = 0.25496025822;
    tmp_msg_0.phi = 0.83248995946;
    tmp_msg_0.theta = 0.790147776578;
    tmp_msg_0.psi = 0.690606712405;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.331838988121;

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
    msg.setTimeStamp(0.0536752402409);
    msg.setSource(34066U);
    msg.setSourceEntity(68U);
    msg.setDestination(41151U);
    msg.setDestinationEntity(14U);
    msg.validity = 48U;
    msg.value = 0.543687578797;

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
    msg.setTimeStamp(0.0599473747579);
    msg.setSource(52379U);
    msg.setSourceEntity(123U);
    msg.setDestination(9252U);
    msg.setDestinationEntity(54U);
    msg.value = 0.212149281535;

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
    msg.setTimeStamp(0.261693656392);
    msg.setSource(19292U);
    msg.setSourceEntity(79U);
    msg.setDestination(36735U);
    msg.setDestinationEntity(116U);
    msg.value = 0.183994189521;

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
    msg.setTimeStamp(0.115841108549);
    msg.setSource(27608U);
    msg.setSourceEntity(37U);
    msg.setDestination(39570U);
    msg.setDestinationEntity(201U);
    msg.value = 0.207034255954;

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
    msg.setTimeStamp(0.699667734757);
    msg.setSource(4460U);
    msg.setSourceEntity(140U);
    msg.setDestination(58201U);
    msg.setDestinationEntity(133U);
    msg.value = 0.244708454533;

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
    msg.setTimeStamp(0.516936405932);
    msg.setSource(58914U);
    msg.setSourceEntity(41U);
    msg.setDestination(46948U);
    msg.setDestinationEntity(213U);
    msg.value = 0.550723528888;

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
    msg.setTimeStamp(0.41395412867);
    msg.setSource(54961U);
    msg.setSourceEntity(88U);
    msg.setDestination(2156U);
    msg.setDestinationEntity(95U);
    msg.value = 0.0707591503027;

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
    msg.setTimeStamp(0.846821779199);
    msg.setSource(39834U);
    msg.setSourceEntity(184U);
    msg.setDestination(58206U);
    msg.setDestinationEntity(33U);
    msg.value = 0.0496603961664;

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
    msg.setTimeStamp(0.56378547563);
    msg.setSource(20679U);
    msg.setSourceEntity(193U);
    msg.setDestination(10807U);
    msg.setDestinationEntity(160U);
    msg.value = 0.243679070821;

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
    msg.setTimeStamp(0.435960165542);
    msg.setSource(45611U);
    msg.setSourceEntity(0U);
    msg.setDestination(26805U);
    msg.setDestinationEntity(226U);
    msg.value = 0.269087487894;

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
    msg.setTimeStamp(0.223275360017);
    msg.setSource(22671U);
    msg.setSourceEntity(64U);
    msg.setDestination(17202U);
    msg.setDestinationEntity(149U);
    msg.value = 0.302762882189;

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
    msg.setTimeStamp(0.643340965879);
    msg.setSource(8170U);
    msg.setSourceEntity(151U);
    msg.setDestination(20716U);
    msg.setDestinationEntity(181U);
    msg.value = 0.103025573995;

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
    msg.setTimeStamp(0.095230517098);
    msg.setSource(47847U);
    msg.setSourceEntity(127U);
    msg.setDestination(22244U);
    msg.setDestinationEntity(225U);
    msg.value = 0.749902796688;

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
    msg.setTimeStamp(0.904057525105);
    msg.setSource(40140U);
    msg.setSourceEntity(195U);
    msg.setDestination(40510U);
    msg.setDestinationEntity(11U);
    msg.value = 0.571480541818;

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
    msg.setTimeStamp(0.924645485724);
    msg.setSource(62154U);
    msg.setSourceEntity(175U);
    msg.setDestination(30347U);
    msg.setDestinationEntity(239U);
    msg.value = 0.600478270614;

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
    msg.setTimeStamp(0.194899345656);
    msg.setSource(12430U);
    msg.setSourceEntity(38U);
    msg.setDestination(32931U);
    msg.setDestinationEntity(128U);
    msg.value = 0.830905209594;

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
    msg.setTimeStamp(0.178391001526);
    msg.setSource(20499U);
    msg.setSourceEntity(196U);
    msg.setDestination(8266U);
    msg.setDestinationEntity(216U);
    msg.value = 0.387575029011;

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
    msg.setTimeStamp(0.103439516246);
    msg.setSource(969U);
    msg.setSourceEntity(20U);
    msg.setDestination(56346U);
    msg.setDestinationEntity(130U);
    msg.value = 0.693709018595;

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
    msg.setTimeStamp(0.00877270482423);
    msg.setSource(39830U);
    msg.setSourceEntity(34U);
    msg.setDestination(1353U);
    msg.setDestinationEntity(115U);
    msg.value = 0.218069888307;

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
    msg.setTimeStamp(0.59939472356);
    msg.setSource(3268U);
    msg.setSourceEntity(16U);
    msg.setDestination(38184U);
    msg.setDestinationEntity(7U);
    msg.value = 0.368885465774;

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
    msg.setTimeStamp(0.368636890173);
    msg.setSource(22830U);
    msg.setSourceEntity(54U);
    msg.setDestination(15772U);
    msg.setDestinationEntity(148U);
    msg.value = 0.578537577483;

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
    msg.setTimeStamp(0.649961595329);
    msg.setSource(52057U);
    msg.setSourceEntity(148U);
    msg.setDestination(15593U);
    msg.setDestinationEntity(15U);
    msg.value = 0.842841638996;

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
    msg.setTimeStamp(0.0178077432974);
    msg.setSource(60368U);
    msg.setSourceEntity(177U);
    msg.setDestination(28001U);
    msg.setDestinationEntity(144U);
    msg.value = 0.15763436537;

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
    msg.setTimeStamp(0.434313618818);
    msg.setSource(40628U);
    msg.setSourceEntity(203U);
    msg.setDestination(21039U);
    msg.setDestinationEntity(138U);
    msg.value = 0.0281722542976;

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
    msg.setTimeStamp(0.0587777504796);
    msg.setSource(38392U);
    msg.setSourceEntity(194U);
    msg.setDestination(12930U);
    msg.setDestinationEntity(208U);
    msg.value = 0.748530195579;

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
    msg.setTimeStamp(0.248436837501);
    msg.setSource(11803U);
    msg.setSourceEntity(216U);
    msg.setDestination(38805U);
    msg.setDestinationEntity(240U);
    msg.direction = 0.36315136681;
    msg.speed = 0.692622374985;
    msg.turbulence = 0.0821265806702;

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
    msg.setTimeStamp(0.775444219333);
    msg.setSource(8784U);
    msg.setSourceEntity(124U);
    msg.setDestination(45214U);
    msg.setDestinationEntity(184U);
    msg.direction = 0.721982263226;
    msg.speed = 0.862180391224;
    msg.turbulence = 0.932056616408;

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
    msg.setTimeStamp(0.0561944257246);
    msg.setSource(64101U);
    msg.setSourceEntity(235U);
    msg.setDestination(43910U);
    msg.setDestinationEntity(215U);
    msg.direction = 0.49771706772;
    msg.speed = 0.832455872094;
    msg.turbulence = 0.273834047639;

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
    msg.setTimeStamp(0.93773206107);
    msg.setSource(18974U);
    msg.setSourceEntity(134U);
    msg.setDestination(39534U);
    msg.setDestinationEntity(172U);
    msg.value = 0.718905845699;

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
    msg.setTimeStamp(0.074212137009);
    msg.setSource(29059U);
    msg.setSourceEntity(170U);
    msg.setDestination(23716U);
    msg.setDestinationEntity(207U);
    msg.value = 0.454094525976;

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
    msg.setTimeStamp(0.245151440046);
    msg.setSource(51855U);
    msg.setSourceEntity(0U);
    msg.setDestination(17370U);
    msg.setDestinationEntity(46U);
    msg.value = 0.68335428349;

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
    msg.setTimeStamp(0.0954006371079);
    msg.setSource(46440U);
    msg.setSourceEntity(165U);
    msg.setDestination(35240U);
    msg.setDestinationEntity(124U);
    msg.value.assign("BOGSTIZISNXWGWRKTPTSLGLCHNIQGQVEQRMEAKKFRUVCLGXMDBCABRTLJQYZMBHJIIDWPJVIPNXUJWBBSLXSNOFTLKUODJCLFVEBXUYTCEFBHDNPNMPVYJXNJGOCXVIJHL");

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
    msg.setTimeStamp(0.85571426437);
    msg.setSource(37347U);
    msg.setSourceEntity(117U);
    msg.setDestination(55475U);
    msg.setDestinationEntity(228U);
    msg.value.assign("ATWXVKGOBWQMPWV");

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
    msg.setTimeStamp(0.223992582279);
    msg.setSource(36029U);
    msg.setSourceEntity(224U);
    msg.setDestination(54142U);
    msg.setDestinationEntity(204U);
    msg.value.assign("SFNACIJEMQVXHEMBNTYDIODSPJYFLUGRAXBFLWZSPSNZEQKPDCVYENAOCLBPGFRIZXJDCXFCGITSRLURYDMINKCIOVSRKVWKFWHTYKUURXREHLDYLMTCAHZQQXBUJKUJAOQVECXGHTXVREKFTRIGGGWOGGYVUFZSBE");

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
    msg.setTimeStamp(0.810558724067);
    msg.setSource(31733U);
    msg.setSourceEntity(162U);
    msg.setDestination(9741U);
    msg.setDestinationEntity(233U);
    const char tmp_msg_0[] = {-7, -93, -30, 102, -33, 125, 12, 78, 40, 21, -113, -16, -6, 105, -79, 55, -123, 85, 117, -38, -93, 53, 26, 62, -90, 25, 36, 124, -117, -52, 53, 83, -33, 114, -76, 124, -20, 66, -109, -21, -55, -12, 58, -127, 51, 118, 122, -60, 49, -16, -46, 116, -72, 69, 101, 97, -58, -30, -23, 20, -21, 74, 12, -33, -88, -79, -66, 85, 1, -108, -22, -67, 112, 7, 71, -82, 45, 52, -43, -71, 28, -93, 121, 78, -106, -42, -125, 124, 32, -23, 2, -46, 105, -79, -107, -15, -49, -83, -16, 12, 93, 100, 78, 38, 16, -3, -44, 101, -63, -28, -53, -107, -1, 108, 16, 1, 21, 15, 7, -111, 5, -100, -117, 92, -109, -98, -123, -43, 101, -15, -81, -39, -63, 42, -53, -49, -91, 68, -53, -80, -75, -115, -125, -118, 57, -117, 73, 81, -26, -107, -55, -9, 13, 126, -60, 61, -121, -96, -55, -51, 34, 1, 1, 100, -6, 19, -125, -8, 57};
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
    msg.setTimeStamp(0.714513927062);
    msg.setSource(16402U);
    msg.setSourceEntity(197U);
    msg.setDestination(13234U);
    msg.setDestinationEntity(60U);
    const char tmp_msg_0[] = {108, -45, 96, -58, 100, -81, 82, -26, 63, 86, -28, 68, -89, -27, -94, 54, 49, -13, -105, 9, -41, -29, 24, -71, -72, -105, 58, -84, -89, 55, -69, -91, -106, 68, -119, 90, 106, -35, 0, -11, 117, 106, -27, 119, 3, 76, 70, 55, -50, -12, 37, -18, 71, -120, -127, 83, -114, 1, -16, 99, -28, -107, -68, 87, 126, 71, 1, 94, 91, -63, 108, -70, 16, 65, -126, -114, 67, -5, -58, 77, -38, -115, 117, 45, 107, -91, -70, 5, 114, 111, 104, -53, -122, 100, 121, -1, 51, 87, -115, 104, -51, 2, 53, -70, 58, -88, -64, 15, 42, -125, 74, 44, -14, -70, 98, -12, -6, -79, -56, -9, 97, 40, -62, -103, -101, 34, 110, -27, 19, 30, 62, 96, -56, -120, -124, -18, 18, -123, 21, -41, -119, -3, 112, -3, -31, -76, 44, -25};
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
    msg.setTimeStamp(0.985177242716);
    msg.setSource(1420U);
    msg.setSourceEntity(154U);
    msg.setDestination(5280U);
    msg.setDestinationEntity(138U);
    const char tmp_msg_0[] = {104, -92, -30, -121, -8, -2, -77, -103, -85, 111, -28, -121, 26, -5, 111, 85, -125, 63, 83, -8, -19, 11, -127, -96, -30, -7, -5, 103, 17, 64, 125, -62, -31, 33, -116, 65, -84, 126, -92, 37};
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
    msg.setTimeStamp(0.281234748091);
    msg.setSource(18157U);
    msg.setSourceEntity(210U);
    msg.setDestination(9116U);
    msg.setDestinationEntity(133U);
    msg.type = 77U;
    msg.frequency = 1476165012U;
    msg.min_range = 28665U;
    msg.max_range = 55686U;
    msg.bits_per_point = 156U;
    msg.scale_factor = 0.719310814536;
    const char tmp_msg_0[] = {-43, 56, 111, 91, 100, 82, 2, -51, -31, -123, 42, 72, -107, 51, 92, 81, 117, 76, 58, 61, 52, -66, -91, -36, -38, -57, 123, 88, -72, 66, 0, 21, 89, 76, 52, 101, 6, 93, -115, -94, 91, 47, -1, -52, 85, 98, -105, -66, 17, 1, -45, -23, -49, 125, -80, 102, 69, 36, -63, 54, -7, -19, -90, 65, 110, 36, -83, 126, -19, 85, 75, 92, 42, -83, 56, -84, -16, -19, 105, 118, 41, -38, 10, 82, -75, 10, -7, 119, -38, -81, -115, 92, 19, 57, -86, 3, 59, -111, -83, -11, 118, 23, -63, -88, 0, 27, 13, 0, -92, 5, 14, 104, -77, -23, 87, 123, 120, -26, 64, 88, -51, 38, -122, -102, 108, 80, 126, -87, -79, 51, -57, 70, 1, -105, -107, -42, -67, 83, -82, 86, -114, 92, -25, 28, 61, -73, 88, 116, 116, 60, -35, 109, 44, -74, 9, -36, -100, -83, -64, -13, -70, -98, -100, 38, -121, -88, 98, -67, -128, 88, -45, 0, 24, -110, 50, 10, -35, -4, -110, 46, -40, -58, 72, 98, -125, -78, -72, -52, -20, -25, 6, -76, 104, 121, 4, -47, -69, 86, 34, -10, -42, -122, -75, -125, -9, -73, 3, -100, -101, 53, 8, 121, -43, -87, -58, 91, -89, -89, 4, 92, 98, -102, -88, 118, 84, 43, -13, -88, -44, -83, 66, 112, -41, 77, -108, 27, 49, 126};
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
    msg.setTimeStamp(0.386345026395);
    msg.setSource(6845U);
    msg.setSourceEntity(148U);
    msg.setDestination(38281U);
    msg.setDestinationEntity(145U);
    msg.type = 193U;
    msg.frequency = 3188005977U;
    msg.min_range = 38994U;
    msg.max_range = 8787U;
    msg.bits_per_point = 248U;
    msg.scale_factor = 0.126985922471;
    const char tmp_msg_0[] = {98, 18, 123, 70, -119, 105, -2, -75, -8, -78, -119, 13, 101, -79, 9, 44, -65, -40, 60, -36, 93, 10, 75, 3, -51, -105, 21, 13, 47, -59, 55, 125, 23, -109, 94, 26, -16, -14, 42, -56, 11, -51, -28, -33, -5, 120, 42, 26, 113, -69, 115, -116, -14, 12, -27, -88, 76, 79, 34, 50, 66, 97, -106, -41, -24, -15, -46, -125, -109, 22};
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
    msg.setTimeStamp(0.562241914005);
    msg.setSource(64675U);
    msg.setSourceEntity(163U);
    msg.setDestination(41260U);
    msg.setDestinationEntity(197U);
    msg.type = 151U;
    msg.frequency = 4022999811U;
    msg.min_range = 45416U;
    msg.max_range = 21780U;
    msg.bits_per_point = 112U;
    msg.scale_factor = 0.448368367462;
    const char tmp_msg_0[] = {-87, -88, -87, 126, -13, -117, -41, -45, 40, 61, -22, 59, -47, -104, -43, -18, 76, 18, 97, -121, 51, 91, 109, -126, -23, -31, 17, -124, 8, 4, -109, -58, 74, 112, 65, -2, 33, 12, 104, -23, 67, 69, 95, 96, -21, 9, 107, -63, 14, -26, -76, -82, -18, 108, -97, 25, 30, -103, -17, 90, 103, -20, -115, -84, -70, 87, 81, -28, 94, 26, 64, -121, 89, -73, -66, 44, 78, -58, -19, -114, -2, -16, -70, 55, -97, -49, -60, -56, 44, -65, -95, -124, -61, 118, 110, 105, 28, 82, 61, -51, -31, -14, -31, 57, 75, -98, -61, -34, -122, 94, 120, -45, 16, 112, 77, -12, -54, 15, -104, -51, -81, -23, -81, 58, -43, 64, 35, -77, -46, -98, -98, -12, -113, 1, -30, 102, -35, -40, -99, 65, -79, 83, 8, 67, -118, 70, -38, -20, -73, 68, 109, 107, -52, -60, -105, 83, -22, 81, -125, 104, 50, -48, 60, 18, -96, 94, 39, 63, 12, 111, 46, -61, -16, -28, -69, -125, 104};
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
    msg.setTimeStamp(0.0769851451525);
    msg.setSource(61599U);
    msg.setSourceEntity(203U);
    msg.setDestination(18145U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.540495494704);
    msg.setSource(40989U);
    msg.setSourceEntity(114U);
    msg.setDestination(13919U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.467555164194);
    msg.setSource(47004U);
    msg.setSourceEntity(197U);
    msg.setDestination(16838U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.78300458404);
    msg.setSource(50618U);
    msg.setSourceEntity(61U);
    msg.setDestination(59359U);
    msg.setDestinationEntity(88U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.215167256339);
    msg.setSource(20752U);
    msg.setSourceEntity(225U);
    msg.setDestination(62521U);
    msg.setDestinationEntity(226U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.761519958642);
    msg.setSource(26288U);
    msg.setSourceEntity(85U);
    msg.setDestination(9508U);
    msg.setDestinationEntity(90U);
    msg.op = 75U;

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
    msg.setTimeStamp(0.150711469263);
    msg.setSource(36506U);
    msg.setSourceEntity(85U);
    msg.setDestination(43361U);
    msg.setDestinationEntity(223U);
    msg.value = 0.0146109280894;
    msg.confidence = 0.882480460721;
    msg.opmodes.assign("SXBVMPJMDZPASINUCXUEXBKGVGJJCJXRKNXLAMNVVHNPIFRWBPGGEZFEFHFPBIELTSWOCFPMPSRTQUQTVQKNMNWALJIIOZNIZY");

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
    msg.setTimeStamp(0.470015563589);
    msg.setSource(42552U);
    msg.setSourceEntity(179U);
    msg.setDestination(13051U);
    msg.setDestinationEntity(15U);
    msg.value = 0.524362365239;
    msg.confidence = 0.242733065742;
    msg.opmodes.assign("ISTIVDUZZSESBXFMBSPSPOYZLNHUXMLOJZPHQQULSJPTDMVCEBAFZSCGDUWDTHYXRCVLCXSJPWJVGCRHPHFTDUHZYGRMHWUVICYEOZOZKGKQANFOJXAJZAJTBYMIYNCRUBSIHLYUVNWREMTTXPNLMMNUPRXK");

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
    msg.setTimeStamp(0.641272265055);
    msg.setSource(48529U);
    msg.setSourceEntity(90U);
    msg.setDestination(33283U);
    msg.setDestinationEntity(219U);
    msg.value = 0.213201737919;
    msg.confidence = 0.437988573765;
    msg.opmodes.assign("OPVTBMIOQYPEFPJRFGRATGJRHDIBHFBFOUIZRMNURHWYMPLKIODWGSVVDDGYMNNICJYUWNWKIPIOCHJLCZBXYXBLXLWLIEFAE");

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
    msg.setTimeStamp(0.855439720339);
    msg.setSource(57569U);
    msg.setSourceEntity(80U);
    msg.setDestination(4929U);
    msg.setDestinationEntity(28U);
    msg.itow = 1600806288U;
    msg.lat = 0.184029870132;
    msg.lon = 0.659969882657;
    msg.height_ell = 0.303155046104;
    msg.height_sea = 0.81981184793;
    msg.hacc = 0.461352446083;
    msg.vacc = 0.983972289227;
    msg.vel_n = 0.585291704186;
    msg.vel_e = 0.699586552197;
    msg.vel_d = 0.555950721082;
    msg.speed = 0.721866169989;
    msg.gspeed = 0.432711244277;
    msg.heading = 0.190663801561;
    msg.sacc = 0.70504383764;
    msg.cacc = 0.399447843132;

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
    msg.setTimeStamp(0.874469711608);
    msg.setSource(25123U);
    msg.setSourceEntity(228U);
    msg.setDestination(33237U);
    msg.setDestinationEntity(210U);
    msg.itow = 2047892815U;
    msg.lat = 0.928353424412;
    msg.lon = 0.740254567696;
    msg.height_ell = 0.344903431849;
    msg.height_sea = 0.814451344435;
    msg.hacc = 0.483609851486;
    msg.vacc = 0.228581820876;
    msg.vel_n = 0.508417400798;
    msg.vel_e = 0.426083951902;
    msg.vel_d = 0.94554025925;
    msg.speed = 0.232008337742;
    msg.gspeed = 0.466294755018;
    msg.heading = 0.00263605718736;
    msg.sacc = 0.0177935108486;
    msg.cacc = 0.977682338942;

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
    msg.setTimeStamp(0.384546265196);
    msg.setSource(18541U);
    msg.setSourceEntity(63U);
    msg.setDestination(42708U);
    msg.setDestinationEntity(238U);
    msg.itow = 1186821745U;
    msg.lat = 0.0332759874208;
    msg.lon = 0.247412418846;
    msg.height_ell = 0.997716939251;
    msg.height_sea = 0.695097761815;
    msg.hacc = 0.0499878312201;
    msg.vacc = 0.474561072445;
    msg.vel_n = 0.725930144078;
    msg.vel_e = 0.19880185604;
    msg.vel_d = 0.359529542761;
    msg.speed = 0.524997959015;
    msg.gspeed = 0.734271082788;
    msg.heading = 0.894561155925;
    msg.sacc = 0.249997186299;
    msg.cacc = 0.49024485017;

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
    msg.setTimeStamp(0.60638826081);
    msg.setSource(55012U);
    msg.setSourceEntity(114U);
    msg.setDestination(35987U);
    msg.setDestinationEntity(179U);
    msg.id = 235U;
    msg.value = 0.507364644482;

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
    msg.setTimeStamp(0.695990507475);
    msg.setSource(62073U);
    msg.setSourceEntity(134U);
    msg.setDestination(50773U);
    msg.setDestinationEntity(123U);
    msg.id = 77U;
    msg.value = 0.870715941802;

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
    msg.setTimeStamp(0.0215855732769);
    msg.setSource(8771U);
    msg.setSourceEntity(41U);
    msg.setDestination(20244U);
    msg.setDestinationEntity(98U);
    msg.id = 97U;
    msg.value = 0.853456342065;

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
    msg.setTimeStamp(0.517979313619);
    msg.setSource(51944U);
    msg.setSourceEntity(35U);
    msg.setDestination(23017U);
    msg.setDestinationEntity(7U);
    msg.x = 0.788805338432;
    msg.y = 0.620342749453;
    msg.z = 0.745367738591;
    msg.phi = 0.0118571903684;
    msg.theta = 0.589875477729;
    msg.psi = 0.92582457283;

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
    msg.setTimeStamp(0.128682608201);
    msg.setSource(786U);
    msg.setSourceEntity(39U);
    msg.setDestination(49299U);
    msg.setDestinationEntity(87U);
    msg.x = 0.590738522762;
    msg.y = 0.07024063574;
    msg.z = 0.0575960749096;
    msg.phi = 0.531589850208;
    msg.theta = 0.832546033633;
    msg.psi = 0.863092185885;

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
    msg.setTimeStamp(0.485077032874);
    msg.setSource(39592U);
    msg.setSourceEntity(136U);
    msg.setDestination(20116U);
    msg.setDestinationEntity(183U);
    msg.x = 0.222368054574;
    msg.y = 0.726793076365;
    msg.z = 0.0660643956485;
    msg.phi = 0.495795668336;
    msg.theta = 0.693364476598;
    msg.psi = 0.160355314953;

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
    msg.setTimeStamp(0.727502806231);
    msg.setSource(40004U);
    msg.setSourceEntity(203U);
    msg.setDestination(32785U);
    msg.setDestinationEntity(170U);
    msg.beam_width = 0.947034624464;
    msg.beam_height = 0.0103929564278;

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
    msg.setTimeStamp(0.560762121105);
    msg.setSource(47249U);
    msg.setSourceEntity(47U);
    msg.setDestination(62305U);
    msg.setDestinationEntity(81U);
    msg.beam_width = 0.671799963724;
    msg.beam_height = 0.525731310991;

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
    msg.setTimeStamp(0.300434458248);
    msg.setSource(33754U);
    msg.setSourceEntity(77U);
    msg.setDestination(32198U);
    msg.setDestinationEntity(61U);
    msg.beam_width = 0.325403964541;
    msg.beam_height = 0.696574195463;

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
    msg.setTimeStamp(0.558521396631);
    msg.setSource(13957U);
    msg.setSourceEntity(29U);
    msg.setDestination(13231U);
    msg.setDestinationEntity(76U);
    msg.sane = 199U;

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
    msg.setTimeStamp(0.921760757568);
    msg.setSource(7980U);
    msg.setSourceEntity(87U);
    msg.setDestination(10554U);
    msg.setDestinationEntity(119U);
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
    msg.setTimeStamp(0.773921456301);
    msg.setSource(48661U);
    msg.setSourceEntity(123U);
    msg.setDestination(47703U);
    msg.setDestinationEntity(23U);
    msg.sane = 194U;

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
    msg.setTimeStamp(0.543025162446);
    msg.setSource(23916U);
    msg.setSourceEntity(43U);
    msg.setDestination(32193U);
    msg.setDestinationEntity(17U);
    msg.value = 0.558240449908;

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
    msg.setTimeStamp(0.0364310576275);
    msg.setSource(33410U);
    msg.setSourceEntity(117U);
    msg.setDestination(16042U);
    msg.setDestinationEntity(10U);
    msg.value = 0.081562134879;

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
    msg.setTimeStamp(0.487479030696);
    msg.setSource(46653U);
    msg.setSourceEntity(214U);
    msg.setDestination(63871U);
    msg.setDestinationEntity(240U);
    msg.value = 0.0668067520757;

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
    msg.setTimeStamp(0.53480840466);
    msg.setSource(25831U);
    msg.setSourceEntity(38U);
    msg.setDestination(12752U);
    msg.setDestinationEntity(185U);
    msg.value = 0.0586696383937;

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
    msg.setTimeStamp(0.198968416388);
    msg.setSource(49465U);
    msg.setSourceEntity(170U);
    msg.setDestination(49604U);
    msg.setDestinationEntity(94U);
    msg.value = 0.479518143304;

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
    msg.setTimeStamp(0.850227663727);
    msg.setSource(47963U);
    msg.setSourceEntity(59U);
    msg.setDestination(39674U);
    msg.setDestinationEntity(203U);
    msg.value = 0.385251150314;

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
    msg.setTimeStamp(0.239810541315);
    msg.setSource(55238U);
    msg.setSourceEntity(84U);
    msg.setDestination(17907U);
    msg.setDestinationEntity(213U);
    msg.value = 0.996110266261;

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
    msg.setTimeStamp(0.329002566026);
    msg.setSource(63438U);
    msg.setSourceEntity(202U);
    msg.setDestination(3010U);
    msg.setDestinationEntity(130U);
    msg.value = 0.816745643158;

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
    msg.setTimeStamp(0.768431208366);
    msg.setSource(34679U);
    msg.setSourceEntity(114U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(209U);
    msg.value = 0.629367132114;

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
    msg.setTimeStamp(0.0192695147705);
    msg.setSource(12027U);
    msg.setSourceEntity(39U);
    msg.setDestination(30U);
    msg.setDestinationEntity(147U);
    msg.value = 0.317204118993;

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
    msg.setTimeStamp(0.698082171036);
    msg.setSource(2235U);
    msg.setSourceEntity(19U);
    msg.setDestination(2268U);
    msg.setDestinationEntity(136U);
    msg.value = 0.433368579878;

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
    msg.setTimeStamp(0.313930252394);
    msg.setSource(15267U);
    msg.setSourceEntity(146U);
    msg.setDestination(40363U);
    msg.setDestinationEntity(223U);
    msg.value = 0.375583581092;

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
    msg.setTimeStamp(0.120882855268);
    msg.setSource(28724U);
    msg.setSourceEntity(224U);
    msg.setDestination(38817U);
    msg.setDestinationEntity(122U);
    msg.value = 0.437503947072;

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
    msg.setTimeStamp(0.201881357138);
    msg.setSource(57390U);
    msg.setSourceEntity(63U);
    msg.setDestination(52693U);
    msg.setDestinationEntity(188U);
    msg.value = 0.642802124509;

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
    msg.setTimeStamp(0.107113240654);
    msg.setSource(61209U);
    msg.setSourceEntity(30U);
    msg.setDestination(36112U);
    msg.setDestinationEntity(194U);
    msg.value = 0.0134490883487;

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
    msg.setTimeStamp(0.270708460502);
    msg.setSource(7229U);
    msg.setSourceEntity(188U);
    msg.setDestination(30771U);
    msg.setDestinationEntity(206U);
    msg.id = 13U;
    msg.zoom = 45U;
    msg.action = 88U;

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
    msg.setTimeStamp(0.0976964207143);
    msg.setSource(58887U);
    msg.setSourceEntity(237U);
    msg.setDestination(52414U);
    msg.setDestinationEntity(57U);
    msg.id = 235U;
    msg.zoom = 33U;
    msg.action = 184U;

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
    msg.setTimeStamp(0.00511551696154);
    msg.setSource(25217U);
    msg.setSourceEntity(148U);
    msg.setDestination(33929U);
    msg.setDestinationEntity(95U);
    msg.id = 36U;
    msg.zoom = 70U;
    msg.action = 181U;

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
    msg.setTimeStamp(0.905052846114);
    msg.setSource(58768U);
    msg.setSourceEntity(169U);
    msg.setDestination(24455U);
    msg.setDestinationEntity(1U);
    msg.id = 100U;
    msg.value = 0.588458558928;

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
    msg.setTimeStamp(0.0148716348465);
    msg.setSource(12731U);
    msg.setSourceEntity(211U);
    msg.setDestination(20833U);
    msg.setDestinationEntity(118U);
    msg.id = 235U;
    msg.value = 0.638019409564;

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
    msg.setTimeStamp(0.567667332455);
    msg.setSource(30062U);
    msg.setSourceEntity(252U);
    msg.setDestination(6655U);
    msg.setDestinationEntity(215U);
    msg.id = 164U;
    msg.value = 0.471698852783;

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
    msg.setTimeStamp(0.704520920493);
    msg.setSource(33804U);
    msg.setSourceEntity(250U);
    msg.setDestination(52622U);
    msg.setDestinationEntity(2U);
    msg.id = 207U;
    msg.value = 0.675472053767;

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
    msg.setTimeStamp(0.989343108958);
    msg.setSource(40166U);
    msg.setSourceEntity(177U);
    msg.setDestination(3894U);
    msg.setDestinationEntity(176U);
    msg.id = 144U;
    msg.value = 0.531664378082;

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
    msg.setTimeStamp(0.384333565169);
    msg.setSource(18627U);
    msg.setSourceEntity(236U);
    msg.setDestination(41872U);
    msg.setDestinationEntity(52U);
    msg.id = 57U;
    msg.value = 0.744902733759;

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
    msg.setTimeStamp(0.778203534931);
    msg.setSource(41681U);
    msg.setSourceEntity(227U);
    msg.setDestination(31153U);
    msg.setDestinationEntity(34U);
    msg.id = 136U;
    msg.angle = 0.0516240339349;

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
    msg.setTimeStamp(0.794820035399);
    msg.setSource(36636U);
    msg.setSourceEntity(199U);
    msg.setDestination(6848U);
    msg.setDestinationEntity(150U);
    msg.id = 87U;
    msg.angle = 0.744720871131;

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
    msg.setTimeStamp(0.30168225877);
    msg.setSource(47070U);
    msg.setSourceEntity(203U);
    msg.setDestination(32840U);
    msg.setDestinationEntity(61U);
    msg.id = 125U;
    msg.angle = 0.445166191908;

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
    msg.setTimeStamp(0.724135894278);
    msg.setSource(54239U);
    msg.setSourceEntity(138U);
    msg.setDestination(52287U);
    msg.setDestinationEntity(15U);
    msg.op = 238U;
    msg.actions.assign("GTVQLWMWLVOSSTCQJGJBMGECJJDAVOKDNRXOBVVHNORJTIDSJOOAQIXMRGVEDUEQDNNPXIBUYVWNTFMYPZHLQPBLXSZLSKJFOXTKANBHEJIPURZDDGMHYZVQLHFCISQUTGTAGRZYHRJFXPUCXICENKCHKWRUFXDDWDBYNJXWVLNHBQZWQYRKYWCLKOFXMHUYBEVSRFTMFHCAMAZIBYOUETPGZLKKPPBZGGPESZMUIWCA");

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
    msg.setTimeStamp(0.365209915381);
    msg.setSource(64617U);
    msg.setSourceEntity(50U);
    msg.setDestination(11400U);
    msg.setDestinationEntity(164U);
    msg.op = 108U;
    msg.actions.assign("CTEQTFMYMILKPCHWLDSQIPYKZERYXBIYRKDVOHQBSBKPFLAVOLSZGCJNLNEFFURPWMIAWEVXZUUAVCQAMEJBBTWGJDZUAKDFMVV");

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
    msg.setTimeStamp(0.686641832034);
    msg.setSource(65122U);
    msg.setSourceEntity(220U);
    msg.setDestination(13142U);
    msg.setDestinationEntity(57U);
    msg.op = 40U;
    msg.actions.assign("UGJTKGTSJPXIWIPEEOCOENDBAOGZDPKZNXWIXOJECUOWMFFZCAQIAYSEMTHYFAESGYDERVTKIGGYTLRVLIVVTYRJWUOXRXANUUSNZVUSICPHKRGHXSMZMFPTMMMHNOVQZYRXNHBDWZUJBPWBBXUWCPGPBGABQLECYWDFKNSNSPLQERYEJDQHFQQHZAKLWCRIFJFZQCUNLIBTZWAJMKKHLAOVFQVRBAXHUOKTLRTDYJYPCBDJI");

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
    msg.setTimeStamp(0.0826438699084);
    msg.setSource(63057U);
    msg.setSourceEntity(34U);
    msg.setDestination(44344U);
    msg.setDestinationEntity(239U);
    msg.actions.assign("ZRHYTBYFFUADWPYBXZIJZSIPKBUQCTDJNUXYEYOCUGWLXACHZLWGLHAAXDAHKNBNCQOEMSZYLVHBWGITYMZVNVQHLOGHPOXSWMPOCGVWZDIVESTNAIEQBKFLTQMKEYSIUWGJFAJLPNOFHDRNPOQXVYVKRMF");

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
    msg.setTimeStamp(0.209496231189);
    msg.setSource(9592U);
    msg.setSourceEntity(208U);
    msg.setDestination(3147U);
    msg.setDestinationEntity(176U);
    msg.actions.assign("XVDKMSNEDQNCLPKYDHQSGNAIBPDMVRXCCBBAAWBIDYQOBDCJLCTTFGDJWKAORKGZMOJUPNDMMKUTUMPBLSBIHGKUHHUXWCLZKRPQFNWRDTVSUXZASETYLSHLFWNMYOIIKGCUWZNGFOKIRPXAVFOWQUVASVGWLREOWPZKHDYZFTMIGZVXVXQQU");

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
    msg.setTimeStamp(0.565166816136);
    msg.setSource(4572U);
    msg.setSourceEntity(91U);
    msg.setDestination(43940U);
    msg.setDestinationEntity(140U);
    msg.actions.assign("RBTTBISSIGFXRKBPLHGHDCQWMBMCHRQNHEYJFJZONCUKOCXTTJTIFLJPUEWVUNRWQFKPVGGSSAATOQQAFNVUZLIWHSGAXSMEPXZBDHVUKIZLQKAIEUUEGRYKDEVFOSKFRCHTDZAYKXUCBYQDIZJOJJWKMRETGIZMYMRYPWLFOVKXYOLJRGMTDDNOEPGQABACWWDNDVXLWMPCQHOSCMVHLSPEWUXIHGNNMVZFURSCLPQBEABOJNTYNI");

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
    msg.setTimeStamp(0.828388911311);
    msg.setSource(61005U);
    msg.setSourceEntity(120U);
    msg.setDestination(21696U);
    msg.setDestinationEntity(201U);
    msg.button = 23U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.798008266426);
    msg.setSource(62054U);
    msg.setSourceEntity(203U);
    msg.setDestination(22603U);
    msg.setDestinationEntity(20U);
    msg.button = 83U;
    msg.value = 197U;

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
    msg.setTimeStamp(0.717414134899);
    msg.setSource(33336U);
    msg.setSourceEntity(118U);
    msg.setDestination(60573U);
    msg.setDestinationEntity(78U);
    msg.button = 75U;
    msg.value = 38U;

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
    msg.setTimeStamp(0.39463117827);
    msg.setSource(6389U);
    msg.setSourceEntity(184U);
    msg.setDestination(19685U);
    msg.setDestinationEntity(182U);
    msg.op = 91U;
    msg.text.assign("UQCBTJWZYFAHWNZGKDEYEIPULTWFOJUNXKRBIOGHGJSCPTRFUKDODPILOUUQPYHKWMMXHAENSBWDXZNUCTYBWVKRACBSLXVFBPMDYJSSMDJDVTJASHVECDABQCYWKPXYKEXFCSRVCRRPBNLSQZVGNVFETQQMGKIFMQYEONDTSRXWHJBZ");

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
    msg.setTimeStamp(0.46960852485);
    msg.setSource(20035U);
    msg.setSourceEntity(70U);
    msg.setDestination(15046U);
    msg.setDestinationEntity(183U);
    msg.op = 113U;
    msg.text.assign("RMKBAWHIPPVKEZT");

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
    msg.setTimeStamp(0.399121672568);
    msg.setSource(30471U);
    msg.setSourceEntity(59U);
    msg.setDestination(18120U);
    msg.setDestinationEntity(231U);
    msg.op = 244U;
    msg.text.assign("USPAWKAEXOLKXCJIHPSBDMEQFDVZVLJNFBMVNXSSFQROXHXCKYZZGEYBQEROBZDSQXLHGHYVZIRFJVVWLEHSDBNJWKOIPTWXTJPFMNWGEVIGZJZTQMMSGUDAUGERRITPORKEDUJARSLNHVULTCOKDCWMSJWXBGAPHZQIYFTHKELLKJRYRNBYQKTCAPVEDRDQNXWFGQZQ");

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
    msg.setTimeStamp(0.802316438506);
    msg.setSource(32129U);
    msg.setSourceEntity(252U);
    msg.setDestination(56405U);
    msg.setDestinationEntity(125U);
    msg.op = 164U;
    msg.time_remain = 0.98597891729;
    msg.sched_time = 0.631411783058;

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
    msg.setTimeStamp(0.0670157465338);
    msg.setSource(30630U);
    msg.setSourceEntity(61U);
    msg.setDestination(19905U);
    msg.setDestinationEntity(195U);
    msg.op = 104U;
    msg.time_remain = 0.420839836163;
    msg.sched_time = 0.462122934201;

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
    msg.setTimeStamp(0.680896966805);
    msg.setSource(50272U);
    msg.setSourceEntity(22U);
    msg.setDestination(10854U);
    msg.setDestinationEntity(174U);
    msg.op = 236U;
    msg.time_remain = 0.0992712045512;
    msg.sched_time = 0.171334321716;

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
    msg.setTimeStamp(0.580204310287);
    msg.setSource(59216U);
    msg.setSourceEntity(130U);
    msg.setDestination(26582U);
    msg.setDestinationEntity(116U);
    msg.name.assign("ZBBNLKOQYTAWOQCDOVSYDFKCYIAYFUCUJTSAEJQNWWTZCDSQRXOONIQJSETMHYTWNYBLKUXMZXSPZULIHGORKBYFBOICJSEFERUDTDFELBPGXRRFQASUHLXZRMLOIZXNFJMITABSA");
    msg.op = 19U;
    msg.sched_time = 0.972395277263;

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
    msg.setTimeStamp(0.171168102304);
    msg.setSource(12138U);
    msg.setSourceEntity(248U);
    msg.setDestination(24369U);
    msg.setDestinationEntity(136U);
    msg.name.assign("IGNGYEILXWGALVGUJ");
    msg.op = 120U;
    msg.sched_time = 0.474576209591;

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
    msg.setTimeStamp(0.957284449073);
    msg.setSource(61229U);
    msg.setSourceEntity(162U);
    msg.setDestination(46905U);
    msg.setDestinationEntity(35U);
    msg.name.assign("IAHQFMSWPZQDKMIINSOKKOSQDAHGNBBRCMGJUCIDNQNWWXUCHXYRODPVMTPZXVEQRLTZJRLYWWDEQBWMZOUVHYLMUHGEWFPZXDHEANHUBFUXFCIQVDHORFEIYNVPCSUGZJPSSAMJKGHGBGZCNYJCYMPEAKTWLRBWSYNATOQTERGVMVXSLQUPSYOKTDEJPHSBI");
    msg.op = 249U;
    msg.sched_time = 0.717959239995;

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
    msg.setTimeStamp(0.374709016984);
    msg.setSource(64189U);
    msg.setSourceEntity(152U);
    msg.setDestination(16579U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.127828476623);
    msg.setSource(15070U);
    msg.setSourceEntity(71U);
    msg.setDestination(49035U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.952685109442);
    msg.setSource(36442U);
    msg.setSourceEntity(138U);
    msg.setDestination(4179U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.129220754006);
    msg.setSource(13364U);
    msg.setSourceEntity(41U);
    msg.setDestination(34982U);
    msg.setDestinationEntity(56U);
    msg.name.assign("CSXPCMBLATMUEUSLOWGTQZHGRCOUOIWJYUUIHUPKQDOMWAKCKKDXMHRZEJWEVLIVGBIGJY");
    msg.state = 98U;

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
    msg.setTimeStamp(0.461717426084);
    msg.setSource(54233U);
    msg.setSourceEntity(110U);
    msg.setDestination(5358U);
    msg.setDestinationEntity(174U);
    msg.name.assign("YZUZOXZXWURXBCLRNCQSEKZIMYEPTCLFPTDDPCDZLDGSWNGXQKVIXOTHBTXNRLGMFOONFSHKCLNSFITHXOHHOYLQZPDKUELHDQWPJJIAGDATEUAMUERWJZJJUHZMFFWOSCCMKKSTAAZXEWBGAFFLXKLIBBJRNYUYPMPBAVTYACGSPOKYMDIDGVVDRKGEFMJIGVWIYRTVNFUESQVMWCORJIUNUHJYEGNQNJQPVBEKBMXVLHZRAPASVBWQOIR");
    msg.state = 99U;

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
    msg.setTimeStamp(0.151034101154);
    msg.setSource(46972U);
    msg.setSourceEntity(180U);
    msg.setDestination(61486U);
    msg.setDestinationEntity(31U);
    msg.name.assign("EKPSRJUOKTGRUZFZWQNBLDWJTEDYEDDACLWQYXHKTAQCPQUYREMMIXOXMXAUWLXO");
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
    msg.setTimeStamp(0.170724950077);
    msg.setSource(49054U);
    msg.setSourceEntity(21U);
    msg.setDestination(15421U);
    msg.setDestinationEntity(249U);
    msg.name.assign("WAJAPTONCTVIPGRLIFGKSNDTHDXJVEZFLSSFEXTGTAXXKFHKIZFQYWACDBSCOYEUOBSAPEVKKABGSZKPALAQKDOZJYVVQIULAHKRNOZOHBGQHIFMXCHMXNQWJEDRNWWJSVYMMBUTAPHRVJRPWCFLLJGSONKFNQCMBYROSLDCI");
    msg.value = 244U;

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
    msg.setTimeStamp(0.714330378628);
    msg.setSource(7705U);
    msg.setSourceEntity(142U);
    msg.setDestination(33416U);
    msg.setDestinationEntity(191U);
    msg.name.assign("OVRFGNASUVODOMGTQAHHLKRYONTAZQJAIEJFVGTQUNBENMTCVBFNMJBIWPMIKCXHOKYEFXPGLAYPWDFUBNNXYNSFOSEHVALTQ");
    msg.value = 126U;

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
    msg.setTimeStamp(0.0558614382877);
    msg.setSource(16404U);
    msg.setSourceEntity(72U);
    msg.setDestination(60588U);
    msg.setDestinationEntity(89U);
    msg.name.assign("WYHAALGTVMBYBKZLSYXUBFQFFHWCKRWGWAFIDLHOLHDNKHJTSFWRHTNPVNHOZRXREVEJVPEJVYCVWIDUXDIKQEBHKASMIQDJICWYWTNCNYAUAZOSHJFMPZTFIQCJAXJNONBKFRPTLLCDOXUZGBXIPYKAWMVZOICKLYISVGZPEUCHFOCSAEVBBQVOPGGASRRQEUTRPDQCNJXSJDGURSPDMEGMQTLMQZXIBGJUTELZMRFUKPTDSYQMLE");
    msg.value = 85U;

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
    msg.setTimeStamp(0.433127379054);
    msg.setSource(26683U);
    msg.setSourceEntity(170U);
    msg.setDestination(64388U);
    msg.setDestinationEntity(161U);
    msg.name.assign("ZCLMWHIHOTZYCXWZYGJFELDALPCUTUFROIVHMYFDHLKNSMHDAXSEXVDWBQSFKRUVSSGJ");

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
    msg.setTimeStamp(0.807977589288);
    msg.setSource(37321U);
    msg.setSourceEntity(31U);
    msg.setDestination(64956U);
    msg.setDestinationEntity(102U);
    msg.name.assign("TKRUCFTJBHPUIXUSLECPOHIOXPECAOJTEOIKJSLQIPTMDGMEYILWGMRXSRCBPANFMCXQZZSESLKJOYPNXNRJMLTQZUQKVCFFIFBNGYIHHSPGNTAJGDSLVFTUUQSWWCVDDCKWBEMVCAWKWVAFKGQGJONSEHLFWUIRDVACZQDATKXOIVYBFGJEVVXZBHWQDWHBDTQLRFNVUHUZWANKATYXEANYBMBYRHRSOQLNRGMPMRZUGMOX");

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
    msg.setTimeStamp(0.932373866966);
    msg.setSource(25579U);
    msg.setSourceEntity(90U);
    msg.setDestination(37479U);
    msg.setDestinationEntity(186U);
    msg.name.assign("ZYTRCBGILFMPAILHEPQKMACUMAXGPZRB");

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
    msg.setTimeStamp(0.820619793102);
    msg.setSource(59144U);
    msg.setSourceEntity(118U);
    msg.setDestination(15787U);
    msg.setDestinationEntity(20U);
    msg.name.assign("YJCRCIDQBZPNYAMMDXFBTXWLSVNEPACXMDNDVZWTOAPZJQUJEGVJQQRTHMGDXWXCQKHZSNQRIXUYTROOVUOZEUTKSYGRZYCSBLUFFZBWJIDKGLBUDIKYIOMKJYKAPNLZAUMWSLSTFPTWNZACPPLVTQMHITKQHG");
    msg.value = 163U;

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
    msg.setTimeStamp(0.203783137371);
    msg.setSource(41362U);
    msg.setSourceEntity(82U);
    msg.setDestination(57174U);
    msg.setDestinationEntity(193U);
    msg.name.assign("ACROJXDLDZNEZENSDRXZPDLFDCHKBGOHYYNMRETKRUIZXKMXMCQTQKMFWUDBOISMLTSQXLCTDHMAHNQZSWTFOKLVKTUVRLCHUAGAPWBOFAVGFTVAVLUSYUUTSLCNRMOBNHMDPWVQGWFXEFPIBYSEQLREPIFGWCYCIUQSZCJPAESPYQNAAHIJWVJSZFXIBVJTPEPRKNIZXYXCPMZBIDQUEGOVRKJGB");
    msg.value = 131U;

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
    msg.setTimeStamp(0.0679103125124);
    msg.setSource(30618U);
    msg.setSourceEntity(97U);
    msg.setDestination(54383U);
    msg.setDestinationEntity(185U);
    msg.name.assign("RAWUNZXKFQWNAEDMOIHEFPFAVHDKUNRJFTDSSWHYXNGYUBSEQVPJNNHGVMJLFUXHROVMCRBJQJXJVBXZJZOCHYSURTXFPHVUKBUH");
    msg.value = 150U;

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
    msg.setTimeStamp(0.609208560536);
    msg.setSource(8370U);
    msg.setSourceEntity(200U);
    msg.setDestination(61595U);
    msg.setDestinationEntity(18U);
    msg.id = 199U;
    msg.period = 4227225736U;
    msg.duty_cycle = 598295653U;

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
    msg.setTimeStamp(0.211291736749);
    msg.setSource(44062U);
    msg.setSourceEntity(167U);
    msg.setDestination(42274U);
    msg.setDestinationEntity(118U);
    msg.id = 235U;
    msg.period = 2838763648U;
    msg.duty_cycle = 2023257710U;

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
    msg.setTimeStamp(0.0975271747518);
    msg.setSource(58464U);
    msg.setSourceEntity(202U);
    msg.setDestination(15498U);
    msg.setDestinationEntity(34U);
    msg.id = 247U;
    msg.period = 745621873U;
    msg.duty_cycle = 2981805390U;

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
    msg.setTimeStamp(0.909970327721);
    msg.setSource(1853U);
    msg.setSourceEntity(23U);
    msg.setDestination(24185U);
    msg.setDestinationEntity(55U);
    msg.id = 200U;
    msg.period = 2291987578U;
    msg.duty_cycle = 2418438179U;

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
    msg.setTimeStamp(0.587936677359);
    msg.setSource(48329U);
    msg.setSourceEntity(125U);
    msg.setDestination(52067U);
    msg.setDestinationEntity(240U);
    msg.id = 103U;
    msg.period = 434255074U;
    msg.duty_cycle = 1790123946U;

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
    msg.setTimeStamp(0.786927985037);
    msg.setSource(33570U);
    msg.setSourceEntity(239U);
    msg.setDestination(8162U);
    msg.setDestinationEntity(147U);
    msg.id = 230U;
    msg.period = 96545054U;
    msg.duty_cycle = 1418366915U;

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
    msg.setTimeStamp(0.719504666894);
    msg.setSource(24627U);
    msg.setSourceEntity(191U);
    msg.setDestination(21373U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.867504712122;
    msg.lon = 0.89374662488;
    msg.height = 0.656031794331;
    msg.x = 0.232757463855;
    msg.y = 0.156299185195;
    msg.z = 0.498066584042;
    msg.phi = 0.901562353702;
    msg.theta = 0.922211908403;
    msg.psi = 0.363937402666;
    msg.u = 0.0633426586776;
    msg.v = 0.388428510472;
    msg.w = 0.435620581318;
    msg.vx = 0.679106382352;
    msg.vy = 0.823569202152;
    msg.vz = 0.550063679453;
    msg.p = 0.56685010816;
    msg.q = 0.220293446916;
    msg.r = 0.437652481208;
    msg.depth = 0.143652858071;
    msg.alt = 0.876323007474;

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
    msg.setTimeStamp(0.497284166397);
    msg.setSource(57683U);
    msg.setSourceEntity(23U);
    msg.setDestination(9819U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.547239007093;
    msg.lon = 0.0732784381071;
    msg.height = 0.199907014892;
    msg.x = 0.191647896826;
    msg.y = 0.8677733218;
    msg.z = 0.0595847870724;
    msg.phi = 0.977762996201;
    msg.theta = 0.165801819293;
    msg.psi = 0.258068559863;
    msg.u = 0.879821989339;
    msg.v = 0.327946883266;
    msg.w = 0.894271971001;
    msg.vx = 0.934999020252;
    msg.vy = 0.738545549482;
    msg.vz = 0.0718903595572;
    msg.p = 0.314470963425;
    msg.q = 0.391493127795;
    msg.r = 0.978959216998;
    msg.depth = 0.475687469527;
    msg.alt = 0.710202601502;

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
    msg.setTimeStamp(0.382604039059);
    msg.setSource(56084U);
    msg.setSourceEntity(153U);
    msg.setDestination(34797U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.825531008706;
    msg.lon = 0.412171237556;
    msg.height = 0.609226237064;
    msg.x = 0.411902532334;
    msg.y = 0.757887950214;
    msg.z = 0.509869784262;
    msg.phi = 0.426458431839;
    msg.theta = 0.500873317859;
    msg.psi = 0.0750235005929;
    msg.u = 0.00707702602044;
    msg.v = 0.179999215689;
    msg.w = 0.04488270489;
    msg.vx = 0.915272900344;
    msg.vy = 0.446134129281;
    msg.vz = 0.797435111012;
    msg.p = 0.480252960162;
    msg.q = 0.104915995266;
    msg.r = 0.698483145193;
    msg.depth = 0.785278215346;
    msg.alt = 0.804953381466;

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
    msg.setTimeStamp(0.0483434270981);
    msg.setSource(47429U);
    msg.setSourceEntity(171U);
    msg.setDestination(21779U);
    msg.setDestinationEntity(73U);
    msg.x = 0.988066719156;
    msg.y = 0.00609733525966;
    msg.z = 0.593361403945;

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
    msg.setTimeStamp(0.609539454443);
    msg.setSource(43868U);
    msg.setSourceEntity(99U);
    msg.setDestination(19857U);
    msg.setDestinationEntity(237U);
    msg.x = 0.733214292675;
    msg.y = 0.582962697979;
    msg.z = 0.466871308509;

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
    msg.setTimeStamp(0.356240029057);
    msg.setSource(13560U);
    msg.setSourceEntity(230U);
    msg.setDestination(13173U);
    msg.setDestinationEntity(84U);
    msg.x = 0.245403384021;
    msg.y = 0.435582391552;
    msg.z = 0.480869911818;

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
    msg.setTimeStamp(0.353397262701);
    msg.setSource(26792U);
    msg.setSourceEntity(188U);
    msg.setDestination(57629U);
    msg.setDestinationEntity(131U);
    msg.value = 0.943040315321;

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
    msg.setTimeStamp(0.570466105372);
    msg.setSource(6699U);
    msg.setSourceEntity(55U);
    msg.setDestination(41916U);
    msg.setDestinationEntity(52U);
    msg.value = 0.544681343044;

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
    msg.setTimeStamp(0.00557610333032);
    msg.setSource(36751U);
    msg.setSourceEntity(194U);
    msg.setDestination(32609U);
    msg.setDestinationEntity(69U);
    msg.value = 0.615390005011;

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
    msg.setTimeStamp(0.653462223145);
    msg.setSource(43932U);
    msg.setSourceEntity(179U);
    msg.setDestination(26662U);
    msg.setDestinationEntity(47U);
    msg.value = 0.859743258113;

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
    msg.setTimeStamp(0.0727858453201);
    msg.setSource(23599U);
    msg.setSourceEntity(18U);
    msg.setDestination(54748U);
    msg.setDestinationEntity(253U);
    msg.value = 0.0899430042884;

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
    msg.setTimeStamp(0.289046205527);
    msg.setSource(42359U);
    msg.setSourceEntity(56U);
    msg.setDestination(1102U);
    msg.setDestinationEntity(96U);
    msg.value = 0.920728244212;

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
    msg.setTimeStamp(0.177685298162);
    msg.setSource(36887U);
    msg.setSourceEntity(144U);
    msg.setDestination(48063U);
    msg.setDestinationEntity(185U);
    msg.x = 0.191703909749;
    msg.y = 0.356517065066;
    msg.z = 0.265597118601;
    msg.phi = 0.275295128349;
    msg.theta = 0.868560309695;
    msg.psi = 0.673614549596;
    msg.p = 0.729928803868;
    msg.q = 0.972571337699;
    msg.r = 0.414413433286;
    msg.u = 0.385006232114;
    msg.v = 0.914593513294;
    msg.w = 0.185653016638;
    msg.bias_psi = 0.0332880533944;
    msg.bias_r = 0.428044406775;

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
    msg.setTimeStamp(0.717158433071);
    msg.setSource(50998U);
    msg.setSourceEntity(108U);
    msg.setDestination(19381U);
    msg.setDestinationEntity(93U);
    msg.x = 0.242010972984;
    msg.y = 0.670264848154;
    msg.z = 0.668418837547;
    msg.phi = 0.942326318161;
    msg.theta = 0.633670679097;
    msg.psi = 0.873840271557;
    msg.p = 0.983830970795;
    msg.q = 0.737688262898;
    msg.r = 0.264756666093;
    msg.u = 0.24194900793;
    msg.v = 0.819186302731;
    msg.w = 0.206406243934;
    msg.bias_psi = 0.677965258949;
    msg.bias_r = 0.219020235921;

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
    msg.setTimeStamp(0.330938564471);
    msg.setSource(54807U);
    msg.setSourceEntity(217U);
    msg.setDestination(52727U);
    msg.setDestinationEntity(39U);
    msg.x = 0.214061542073;
    msg.y = 0.397827231404;
    msg.z = 0.000272674399786;
    msg.phi = 0.889318585472;
    msg.theta = 0.483715778744;
    msg.psi = 0.376283569787;
    msg.p = 0.442106850104;
    msg.q = 0.155902558719;
    msg.r = 0.193166650701;
    msg.u = 0.892567573993;
    msg.v = 0.931496432947;
    msg.w = 0.702232078661;
    msg.bias_psi = 0.864541396524;
    msg.bias_r = 0.84256333608;

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
    msg.setTimeStamp(0.152163289156);
    msg.setSource(43309U);
    msg.setSourceEntity(189U);
    msg.setDestination(18980U);
    msg.setDestinationEntity(172U);
    msg.bias_psi = 0.874114145719;
    msg.bias_r = 0.067992117987;
    msg.cog = 0.16053066864;
    msg.cyaw = 0.114634819559;
    msg.lbl_rej_level = 0.564412785743;
    msg.gps_rej_level = 0.109354839829;
    msg.custom_x = 0.856581148456;
    msg.custom_y = 0.906782170486;
    msg.custom_z = 0.265164671592;

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
    msg.setTimeStamp(0.0641926002491);
    msg.setSource(62814U);
    msg.setSourceEntity(90U);
    msg.setDestination(40054U);
    msg.setDestinationEntity(64U);
    msg.bias_psi = 0.342810455996;
    msg.bias_r = 0.00508299008356;
    msg.cog = 0.91494080584;
    msg.cyaw = 0.620838384677;
    msg.lbl_rej_level = 0.132077843257;
    msg.gps_rej_level = 0.892476400111;
    msg.custom_x = 0.514256271537;
    msg.custom_y = 0.185150225284;
    msg.custom_z = 0.640143674999;

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
    msg.setTimeStamp(0.782687785688);
    msg.setSource(55854U);
    msg.setSourceEntity(117U);
    msg.setDestination(12974U);
    msg.setDestinationEntity(12U);
    msg.bias_psi = 0.454821869135;
    msg.bias_r = 0.736988060611;
    msg.cog = 0.342848050121;
    msg.cyaw = 0.36426244382;
    msg.lbl_rej_level = 0.642041863467;
    msg.gps_rej_level = 0.00561746020475;
    msg.custom_x = 0.308999102163;
    msg.custom_y = 0.335114176706;
    msg.custom_z = 0.865652405023;

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
    msg.setTimeStamp(0.49079862925);
    msg.setSource(44820U);
    msg.setSourceEntity(20U);
    msg.setDestination(25790U);
    msg.setDestinationEntity(236U);
    msg.utc_time = 0.208823282335;
    msg.reason = 56U;

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
    msg.setTimeStamp(0.763742834649);
    msg.setSource(50451U);
    msg.setSourceEntity(51U);
    msg.setDestination(25356U);
    msg.setDestinationEntity(50U);
    msg.utc_time = 0.407506557608;
    msg.reason = 1U;

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
    msg.setTimeStamp(0.754544350833);
    msg.setSource(43085U);
    msg.setSourceEntity(126U);
    msg.setDestination(54103U);
    msg.setDestinationEntity(57U);
    msg.utc_time = 0.187264641034;
    msg.reason = 229U;

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
    msg.setTimeStamp(0.896586463099);
    msg.setSource(31074U);
    msg.setSourceEntity(7U);
    msg.setDestination(1814U);
    msg.setDestinationEntity(95U);
    msg.id = 4U;
    msg.range = 0.669186067194;
    msg.acceptance = 150U;

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
    msg.setTimeStamp(0.523179701851);
    msg.setSource(1373U);
    msg.setSourceEntity(83U);
    msg.setDestination(29940U);
    msg.setDestinationEntity(228U);
    msg.id = 170U;
    msg.range = 0.356206910033;
    msg.acceptance = 162U;

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
    msg.setTimeStamp(0.14653265941);
    msg.setSource(61202U);
    msg.setSourceEntity(154U);
    msg.setDestination(49761U);
    msg.setDestinationEntity(55U);
    msg.id = 53U;
    msg.range = 0.671767092326;
    msg.acceptance = 47U;

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
    msg.setTimeStamp(0.854098192744);
    msg.setSource(33431U);
    msg.setSourceEntity(28U);
    msg.setDestination(37066U);
    msg.setDestinationEntity(220U);
    msg.type = 144U;
    msg.reason = 61U;
    msg.value = 0.28121984697;
    msg.timestep = 0.321781979916;

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
    msg.setTimeStamp(0.865452930603);
    msg.setSource(63548U);
    msg.setSourceEntity(160U);
    msg.setDestination(39158U);
    msg.setDestinationEntity(211U);
    msg.type = 64U;
    msg.reason = 51U;
    msg.value = 0.0499841321319;
    msg.timestep = 0.0868273798611;

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
    msg.setTimeStamp(0.92914019176);
    msg.setSource(27241U);
    msg.setSourceEntity(64U);
    msg.setDestination(22772U);
    msg.setDestinationEntity(20U);
    msg.type = 46U;
    msg.reason = 217U;
    msg.value = 0.256071402064;
    msg.timestep = 0.478018182625;

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
    msg.setTimeStamp(0.660323032547);
    msg.setSource(60384U);
    msg.setSourceEntity(208U);
    msg.setDestination(21738U);
    msg.setDestinationEntity(202U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PXTVDHJYLWTDLGMDRPUSLZHYSJNQQBCGUNGIRHGBJCFSRNUWMFSLXCYYFDPFYVSQDUTZ");
    tmp_msg_0.lat = 0.66908354349;
    tmp_msg_0.lon = 0.209149858321;
    tmp_msg_0.depth = 0.212531395637;
    tmp_msg_0.query_channel = 60U;
    tmp_msg_0.reply_channel = 219U;
    tmp_msg_0.transponder_delay = 205U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.265995888435;
    msg.y = 0.16401841753;
    msg.var_x = 0.580419473456;
    msg.var_y = 0.762357630112;
    msg.distance = 0.724791154576;

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
    msg.setTimeStamp(0.288178195146);
    msg.setSource(49075U);
    msg.setSourceEntity(226U);
    msg.setDestination(8486U);
    msg.setDestinationEntity(31U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OWOMZCUYKJHVOLJSKBDTSASTPMIQSVKYOSPNFMOZMXDZGDGQYUHVETPFFYFYDTJRPSHEWRSDWGHQ");
    tmp_msg_0.lat = 0.162893775736;
    tmp_msg_0.lon = 0.374386011791;
    tmp_msg_0.depth = 0.580035227849;
    tmp_msg_0.query_channel = 212U;
    tmp_msg_0.reply_channel = 110U;
    tmp_msg_0.transponder_delay = 16U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.291635632159;
    msg.y = 0.401943029017;
    msg.var_x = 0.608320656093;
    msg.var_y = 0.37602273532;
    msg.distance = 0.309942883779;

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
    msg.setTimeStamp(0.636339289075);
    msg.setSource(15430U);
    msg.setSourceEntity(2U);
    msg.setDestination(29997U);
    msg.setDestinationEntity(132U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UOGPNJCXWWWGDUAUIVJEXNTMQKFANGZWKISNDYSXJHDTHSQSDHQFGMYFHLYQSXFCAZSFVMRTICUNLGRTPBOEHVITBVDRRWRLUTMPVDCZVCJHBYNBEDJRTVOABEOQOJCL");
    tmp_msg_0.lat = 0.617233643991;
    tmp_msg_0.lon = 0.597051218026;
    tmp_msg_0.depth = 0.902095349435;
    tmp_msg_0.query_channel = 251U;
    tmp_msg_0.reply_channel = 112U;
    tmp_msg_0.transponder_delay = 122U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.552048567574;
    msg.y = 0.322453942473;
    msg.var_x = 0.9293308617;
    msg.var_y = 0.215854302821;
    msg.distance = 0.30051424252;

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
    msg.setTimeStamp(0.780541084995);
    msg.setSource(51095U);
    msg.setSourceEntity(229U);
    msg.setDestination(63611U);
    msg.setDestinationEntity(0U);
    msg.state = 140U;

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
    msg.setTimeStamp(0.18962138837);
    msg.setSource(62506U);
    msg.setSourceEntity(70U);
    msg.setDestination(40067U);
    msg.setDestinationEntity(170U);
    msg.state = 110U;

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
    msg.setTimeStamp(0.808310642143);
    msg.setSource(50956U);
    msg.setSourceEntity(1U);
    msg.setDestination(61806U);
    msg.setDestinationEntity(237U);
    msg.state = 39U;

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
    msg.setTimeStamp(0.909391948614);
    msg.setSource(55383U);
    msg.setSourceEntity(6U);
    msg.setDestination(9531U);
    msg.setDestinationEntity(0U);
    msg.x = 0.647763178345;
    msg.y = 0.22884124273;
    msg.z = 0.882192729671;

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
    msg.setTimeStamp(0.727402624894);
    msg.setSource(37912U);
    msg.setSourceEntity(126U);
    msg.setDestination(64119U);
    msg.setDestinationEntity(135U);
    msg.x = 0.466443742286;
    msg.y = 0.60676555832;
    msg.z = 0.729983815607;

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
    msg.setTimeStamp(0.578659111932);
    msg.setSource(12224U);
    msg.setSourceEntity(177U);
    msg.setDestination(37288U);
    msg.setDestinationEntity(128U);
    msg.x = 0.102745154966;
    msg.y = 0.470309972554;
    msg.z = 0.517154567906;

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
    msg.setTimeStamp(0.179712353953);
    msg.setSource(19839U);
    msg.setSourceEntity(82U);
    msg.setDestination(59067U);
    msg.setDestinationEntity(147U);
    msg.value = 0.293193828258;

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
    msg.setTimeStamp(0.0964496309586);
    msg.setSource(3606U);
    msg.setSourceEntity(172U);
    msg.setDestination(5175U);
    msg.setDestinationEntity(182U);
    msg.value = 0.52431863241;

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
    msg.setTimeStamp(0.532986190099);
    msg.setSource(17681U);
    msg.setSourceEntity(220U);
    msg.setDestination(27U);
    msg.setDestinationEntity(227U);
    msg.value = 0.550925197683;

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
    msg.setTimeStamp(0.51775776597);
    msg.setSource(30030U);
    msg.setSourceEntity(25U);
    msg.setDestination(34711U);
    msg.setDestinationEntity(179U);
    msg.value = 0.647111171791;
    msg.z_units = 172U;

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
    msg.setTimeStamp(0.269523714792);
    msg.setSource(5457U);
    msg.setSourceEntity(204U);
    msg.setDestination(41346U);
    msg.setDestinationEntity(168U);
    msg.value = 0.579026607347;
    msg.z_units = 196U;

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
    msg.setTimeStamp(0.279703377652);
    msg.setSource(47796U);
    msg.setSourceEntity(24U);
    msg.setDestination(62727U);
    msg.setDestinationEntity(111U);
    msg.value = 0.286178581536;
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
    msg.setTimeStamp(0.664567881434);
    msg.setSource(3266U);
    msg.setSourceEntity(212U);
    msg.setDestination(43075U);
    msg.setDestinationEntity(108U);
    msg.value = 0.48020816629;
    msg.speed_units = 194U;

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
    msg.setTimeStamp(0.20274525877);
    msg.setSource(29838U);
    msg.setSourceEntity(172U);
    msg.setDestination(36390U);
    msg.setDestinationEntity(194U);
    msg.value = 0.88417364489;
    msg.speed_units = 32U;

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
    msg.setTimeStamp(0.894159196053);
    msg.setSource(52360U);
    msg.setSourceEntity(217U);
    msg.setDestination(25833U);
    msg.setDestinationEntity(110U);
    msg.value = 0.117377238746;
    msg.speed_units = 70U;

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
    msg.setTimeStamp(0.932398573618);
    msg.setSource(45088U);
    msg.setSourceEntity(114U);
    msg.setDestination(51389U);
    msg.setDestinationEntity(135U);
    msg.value = 0.341031759252;

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
    msg.setTimeStamp(0.0670455506416);
    msg.setSource(43689U);
    msg.setSourceEntity(202U);
    msg.setDestination(11876U);
    msg.setDestinationEntity(183U);
    msg.value = 0.948760743619;

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
    msg.setTimeStamp(0.730442264756);
    msg.setSource(36404U);
    msg.setSourceEntity(86U);
    msg.setDestination(27798U);
    msg.setDestinationEntity(215U);
    msg.value = 0.825999361322;

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
    msg.setTimeStamp(0.458701269911);
    msg.setSource(18931U);
    msg.setSourceEntity(67U);
    msg.setDestination(21455U);
    msg.setDestinationEntity(99U);
    msg.value = 0.787849509704;

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
    msg.setTimeStamp(0.215080567783);
    msg.setSource(5435U);
    msg.setSourceEntity(233U);
    msg.setDestination(60203U);
    msg.setDestinationEntity(157U);
    msg.value = 0.940358927999;

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
    msg.setTimeStamp(0.615376889545);
    msg.setSource(29356U);
    msg.setSourceEntity(57U);
    msg.setDestination(42878U);
    msg.setDestinationEntity(250U);
    msg.value = 0.315062857055;

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
    msg.setTimeStamp(0.599467496353);
    msg.setSource(9919U);
    msg.setSourceEntity(105U);
    msg.setDestination(23453U);
    msg.setDestinationEntity(187U);
    msg.value = 0.881222190352;

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
    msg.setTimeStamp(0.972541760441);
    msg.setSource(1228U);
    msg.setSourceEntity(191U);
    msg.setDestination(10229U);
    msg.setDestinationEntity(43U);
    msg.value = 0.832697472456;

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
    msg.setTimeStamp(0.761471036654);
    msg.setSource(49672U);
    msg.setSourceEntity(12U);
    msg.setDestination(14049U);
    msg.setDestinationEntity(129U);
    msg.value = 0.563008635451;

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
    msg.setTimeStamp(0.318642055531);
    msg.setSource(11185U);
    msg.setSourceEntity(187U);
    msg.setDestination(48603U);
    msg.setDestinationEntity(176U);
    msg.path_ref = 3437356138U;
    msg.start_lat = 0.266238487088;
    msg.start_lon = 0.0122751006741;
    msg.start_z = 0.729846646458;
    msg.start_z_units = 34U;
    msg.end_lat = 0.128258130972;
    msg.end_lon = 0.00838131799525;
    msg.end_z = 0.731555151827;
    msg.end_z_units = 251U;
    msg.speed = 0.212319222733;
    msg.speed_units = 210U;
    msg.lradius = 0.726356678588;
    msg.flags = 170U;

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
    msg.setTimeStamp(0.590718960094);
    msg.setSource(40649U);
    msg.setSourceEntity(133U);
    msg.setDestination(41749U);
    msg.setDestinationEntity(57U);
    msg.path_ref = 1459667829U;
    msg.start_lat = 0.699638640638;
    msg.start_lon = 0.7535776735;
    msg.start_z = 0.986377682498;
    msg.start_z_units = 134U;
    msg.end_lat = 0.228895065743;
    msg.end_lon = 0.428806061242;
    msg.end_z = 0.796790134349;
    msg.end_z_units = 13U;
    msg.speed = 0.780773252467;
    msg.speed_units = 68U;
    msg.lradius = 0.409071804201;
    msg.flags = 80U;

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
    msg.setTimeStamp(0.696313168721);
    msg.setSource(57830U);
    msg.setSourceEntity(132U);
    msg.setDestination(2069U);
    msg.setDestinationEntity(124U);
    msg.path_ref = 1431887683U;
    msg.start_lat = 0.379464002936;
    msg.start_lon = 0.671443612399;
    msg.start_z = 0.891015991946;
    msg.start_z_units = 164U;
    msg.end_lat = 0.434779243411;
    msg.end_lon = 0.962516460324;
    msg.end_z = 0.847929271523;
    msg.end_z_units = 118U;
    msg.speed = 0.817112271732;
    msg.speed_units = 20U;
    msg.lradius = 0.425113594846;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.44675447371);
    msg.setSource(41047U);
    msg.setSourceEntity(119U);
    msg.setDestination(34835U);
    msg.setDestinationEntity(58U);
    msg.x = 0.33428294166;
    msg.y = 0.945329035548;
    msg.z = 0.307173935791;
    msg.k = 0.64164374908;
    msg.m = 0.938701892861;
    msg.n = 0.776601203874;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.969699057272);
    msg.setSource(16902U);
    msg.setSourceEntity(136U);
    msg.setDestination(37912U);
    msg.setDestinationEntity(66U);
    msg.x = 0.107965247669;
    msg.y = 0.290864428741;
    msg.z = 0.44753963447;
    msg.k = 0.874752579477;
    msg.m = 0.188772295241;
    msg.n = 0.71928820367;
    msg.flags = 97U;

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
    msg.setTimeStamp(0.00965382995759);
    msg.setSource(30338U);
    msg.setSourceEntity(32U);
    msg.setDestination(49846U);
    msg.setDestinationEntity(72U);
    msg.x = 0.785810279299;
    msg.y = 0.0582236668282;
    msg.z = 0.000137109090922;
    msg.k = 0.267646700391;
    msg.m = 0.879209946358;
    msg.n = 0.66827768209;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.279181404159);
    msg.setSource(61407U);
    msg.setSourceEntity(5U);
    msg.setDestination(57448U);
    msg.setDestinationEntity(0U);
    msg.value = 0.91991394749;

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
    msg.setTimeStamp(0.792919792243);
    msg.setSource(4750U);
    msg.setSourceEntity(144U);
    msg.setDestination(10575U);
    msg.setDestinationEntity(21U);
    msg.value = 0.613360914652;

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
    msg.setTimeStamp(0.906024756561);
    msg.setSource(63843U);
    msg.setSourceEntity(119U);
    msg.setDestination(16607U);
    msg.setDestinationEntity(98U);
    msg.value = 0.0347450072637;

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
    msg.setTimeStamp(0.816076477744);
    msg.setSource(1976U);
    msg.setSourceEntity(43U);
    msg.setDestination(13706U);
    msg.setDestinationEntity(85U);
    msg.u = 0.390643228455;
    msg.v = 0.768124367555;
    msg.w = 0.561294468234;
    msg.p = 0.99419565454;
    msg.q = 0.549431919863;
    msg.r = 0.890511817687;
    msg.flags = 213U;

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
    msg.setTimeStamp(0.434223682874);
    msg.setSource(7867U);
    msg.setSourceEntity(167U);
    msg.setDestination(21181U);
    msg.setDestinationEntity(147U);
    msg.u = 0.995813680434;
    msg.v = 0.280073355405;
    msg.w = 0.711187447537;
    msg.p = 0.433132393989;
    msg.q = 0.358468912783;
    msg.r = 0.0164133006396;
    msg.flags = 99U;

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
    msg.setTimeStamp(0.526677382198);
    msg.setSource(47298U);
    msg.setSourceEntity(58U);
    msg.setDestination(20704U);
    msg.setDestinationEntity(128U);
    msg.u = 0.742399922978;
    msg.v = 0.360007061068;
    msg.w = 0.668188480812;
    msg.p = 0.0643403202937;
    msg.q = 0.121808589754;
    msg.r = 0.461092469811;
    msg.flags = 226U;

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
    msg.setTimeStamp(0.615843124617);
    msg.setSource(13231U);
    msg.setSourceEntity(113U);
    msg.setDestination(54896U);
    msg.setDestinationEntity(3U);
    msg.path_ref = 3710187020U;
    msg.start_lat = 0.669479468352;
    msg.start_lon = 0.886118391652;
    msg.start_z = 0.258243294976;
    msg.start_z_units = 38U;
    msg.end_lat = 0.0814910013754;
    msg.end_lon = 0.824954788514;
    msg.end_z = 0.149525542594;
    msg.end_z_units = 176U;
    msg.lradius = 0.142745287009;
    msg.flags = 15U;
    msg.x = 0.789862785431;
    msg.y = 0.333621165815;
    msg.z = 0.299641641874;
    msg.vx = 0.0660605069042;
    msg.vy = 0.306438865338;
    msg.vz = 0.132836774783;
    msg.course_error = 0.394214207295;
    msg.eta = 2476U;

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
    msg.setTimeStamp(0.413807245258);
    msg.setSource(2909U);
    msg.setSourceEntity(25U);
    msg.setDestination(29809U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 1884347179U;
    msg.start_lat = 0.638268248729;
    msg.start_lon = 0.271717861356;
    msg.start_z = 0.132770406221;
    msg.start_z_units = 129U;
    msg.end_lat = 0.169591633154;
    msg.end_lon = 0.545248608984;
    msg.end_z = 0.845319247079;
    msg.end_z_units = 23U;
    msg.lradius = 0.888525877559;
    msg.flags = 69U;
    msg.x = 0.908021495854;
    msg.y = 0.720064096645;
    msg.z = 0.362325402803;
    msg.vx = 0.942853122417;
    msg.vy = 0.416464551769;
    msg.vz = 0.774878064085;
    msg.course_error = 0.826536694219;
    msg.eta = 44415U;

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
    msg.setTimeStamp(0.665418072985);
    msg.setSource(10379U);
    msg.setSourceEntity(39U);
    msg.setDestination(58906U);
    msg.setDestinationEntity(19U);
    msg.path_ref = 3927977334U;
    msg.start_lat = 0.159747922238;
    msg.start_lon = 0.263746802176;
    msg.start_z = 0.374284993362;
    msg.start_z_units = 91U;
    msg.end_lat = 0.603366155186;
    msg.end_lon = 0.481942874598;
    msg.end_z = 0.0906610003632;
    msg.end_z_units = 98U;
    msg.lradius = 0.929263075608;
    msg.flags = 102U;
    msg.x = 0.698059536366;
    msg.y = 0.432344079337;
    msg.z = 0.261988969861;
    msg.vx = 0.79098249695;
    msg.vy = 0.558348651088;
    msg.vz = 0.920722740974;
    msg.course_error = 0.325930230291;
    msg.eta = 51519U;

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
    msg.setTimeStamp(0.858623379789);
    msg.setSource(8730U);
    msg.setSourceEntity(243U);
    msg.setDestination(26873U);
    msg.setDestinationEntity(130U);
    msg.k = 0.102974584161;
    msg.m = 0.229850768012;
    msg.n = 0.402669104266;

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
    msg.setTimeStamp(0.345204692868);
    msg.setSource(55515U);
    msg.setSourceEntity(134U);
    msg.setDestination(55787U);
    msg.setDestinationEntity(195U);
    msg.k = 0.942865400937;
    msg.m = 0.198984088233;
    msg.n = 0.513378372163;

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
    msg.setTimeStamp(0.52643761513);
    msg.setSource(21216U);
    msg.setSourceEntity(1U);
    msg.setDestination(64602U);
    msg.setDestinationEntity(67U);
    msg.k = 0.940978516424;
    msg.m = 0.680051336025;
    msg.n = 0.222602624854;

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
    msg.setTimeStamp(0.199327853152);
    msg.setSource(1334U);
    msg.setSourceEntity(196U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(70U);
    msg.p = 0.0949460512023;
    msg.i = 0.295763470386;
    msg.d = 0.726228345817;
    msg.a = 0.204474373857;

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
    msg.setTimeStamp(0.300718334353);
    msg.setSource(59085U);
    msg.setSourceEntity(112U);
    msg.setDestination(61348U);
    msg.setDestinationEntity(155U);
    msg.p = 0.377948728377;
    msg.i = 0.102281997007;
    msg.d = 0.0723454888928;
    msg.a = 0.596788003501;

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
    msg.setTimeStamp(0.974251730623);
    msg.setSource(42274U);
    msg.setSourceEntity(171U);
    msg.setDestination(13181U);
    msg.setDestinationEntity(114U);
    msg.p = 0.959928309681;
    msg.i = 0.311729398154;
    msg.d = 0.18777885964;
    msg.a = 0.176613127734;

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
    msg.setTimeStamp(0.02831459067);
    msg.setSource(47577U);
    msg.setSourceEntity(223U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(86U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.608801975349);
    msg.setSource(17695U);
    msg.setSourceEntity(64U);
    msg.setDestination(7884U);
    msg.setDestinationEntity(2U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.751320501873);
    msg.setSource(8518U);
    msg.setSourceEntity(116U);
    msg.setDestination(52363U);
    msg.setDestinationEntity(73U);
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
    IMC::Goto msg;
    msg.setTimeStamp(0.151292815398);
    msg.setSource(9465U);
    msg.setSourceEntity(208U);
    msg.setDestination(64598U);
    msg.setDestinationEntity(26U);
    msg.timeout = 62118U;
    msg.lat = 0.895644137683;
    msg.lon = 0.737836587726;
    msg.z = 0.487796753594;
    msg.z_units = 142U;
    msg.speed = 0.351078934179;
    msg.speed_units = 192U;
    msg.roll = 0.336523459247;
    msg.pitch = 0.225198294886;
    msg.yaw = 0.277479356183;
    msg.custom.assign("GHJDPWASAVLKTBEBBROPDHMJDPVATNFKSWXYXMJRTZGNVJOZMGMYJOOCEANSMOYIGZFHQEUMEWEULGLXRIKNPJZLOHCXHQULNHXYHKPRJWDGASFJQVEQPLIRCNDQICLEXDEGFAWYUFRZARQKCUUB");

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
    msg.setTimeStamp(0.160202275411);
    msg.setSource(43448U);
    msg.setSourceEntity(3U);
    msg.setDestination(37288U);
    msg.setDestinationEntity(69U);
    msg.timeout = 65292U;
    msg.lat = 0.941947944303;
    msg.lon = 0.581472695671;
    msg.z = 0.501379070929;
    msg.z_units = 199U;
    msg.speed = 0.95783782801;
    msg.speed_units = 92U;
    msg.roll = 0.271844695468;
    msg.pitch = 0.379611564267;
    msg.yaw = 0.388764853909;
    msg.custom.assign("GSLQQWDTMDANKJWZLCRDSRWTHVPGTCJEGECXHLBPRPSOGBHKEDHPBXZYVTKCAYNUQQIGMXESXXHQYVNTZMYFRFDRALYSHSXBBQNHUWJFBHIALGJPJTYROPULIWWSMMZWZYRVJBPVE");

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
    msg.setTimeStamp(0.06381234517);
    msg.setSource(49342U);
    msg.setSourceEntity(241U);
    msg.setDestination(30803U);
    msg.setDestinationEntity(10U);
    msg.timeout = 27237U;
    msg.lat = 0.359387819314;
    msg.lon = 0.928316347522;
    msg.z = 0.10613046028;
    msg.z_units = 50U;
    msg.speed = 0.388405734884;
    msg.speed_units = 23U;
    msg.roll = 0.0121588073746;
    msg.pitch = 0.699240168902;
    msg.yaw = 0.762720679691;
    msg.custom.assign("CCKUUQTFQYVRGGAHMUAOHHSXZPPHUJUCDSLSTQJKJLNLAEDIYFCCVYXTIXWZRZAAFWXIDMOUBRVQQDFEZJRUMMDFWHPFGFJTPNMHOZAMQEYEDVKTGDFRQBNCAXV");

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
    msg.setTimeStamp(0.691198969032);
    msg.setSource(61677U);
    msg.setSourceEntity(96U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(11U);
    msg.timeout = 44691U;
    msg.lat = 0.682621549814;
    msg.lon = 0.0730514449994;
    msg.z = 0.598667830069;
    msg.z_units = 143U;
    msg.speed = 0.878820941803;
    msg.speed_units = 117U;
    msg.duration = 30475U;
    msg.radius = 0.825503973957;
    msg.flags = 35U;
    msg.custom.assign("YBURSTIIQXIWDBEZYSRWGOCEROLEBQHUVXAXODHNQXTMJQNKPBIGCSOTVDYGXDFBSCHWVNNKJMKLKNPGOAKLIEAVPINGWRKANRVTDJUPBHJSITTHCWPRSTXZXIAJOTSMJDUVYY");

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
    msg.setTimeStamp(0.878070789384);
    msg.setSource(32906U);
    msg.setSourceEntity(91U);
    msg.setDestination(46508U);
    msg.setDestinationEntity(125U);
    msg.timeout = 19701U;
    msg.lat = 0.569156638708;
    msg.lon = 0.505008662194;
    msg.z = 0.65933438733;
    msg.z_units = 24U;
    msg.speed = 0.869768054883;
    msg.speed_units = 239U;
    msg.duration = 15089U;
    msg.radius = 0.521108696975;
    msg.flags = 85U;
    msg.custom.assign("VRKZRMNKUWSRCJTVENSBXYLNO");

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
    msg.setTimeStamp(0.947049479984);
    msg.setSource(8061U);
    msg.setSourceEntity(52U);
    msg.setDestination(5889U);
    msg.setDestinationEntity(254U);
    msg.timeout = 10479U;
    msg.lat = 0.965580588554;
    msg.lon = 0.759121764353;
    msg.z = 0.631051242336;
    msg.z_units = 244U;
    msg.speed = 0.825522389228;
    msg.speed_units = 188U;
    msg.duration = 27441U;
    msg.radius = 0.964054854778;
    msg.flags = 24U;
    msg.custom.assign("OKHVDHKJILJDTNWWNYYOWKWAPS");

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
    msg.setTimeStamp(0.876852504429);
    msg.setSource(18443U);
    msg.setSourceEntity(109U);
    msg.setDestination(3444U);
    msg.setDestinationEntity(144U);
    msg.custom.assign("CGMCZWATVBEHZRLBNQCHRCIJPUCLUWWSLXAKSNOIQLJURANKVVWSRSEZHBGXTKQVPMNTYLBWHFQAVRLHDFAOZSOYDYYPZFCIMSZPGQAZGUNFQKHGBIJPARJDPBDEFLGXVOWCNXYYESSWXTQNIWEXUVMYHPTYDMDKTYCRDVDNCOLRHJXKAREFDOEPPEMTKE");

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
    msg.setTimeStamp(0.978606008708);
    msg.setSource(3301U);
    msg.setSourceEntity(65U);
    msg.setDestination(26882U);
    msg.setDestinationEntity(192U);
    msg.custom.assign("TGIPUPKSXODTAYZSMPYBWIDUWEEJIMDVDNRGXQQZVCWVTIZJGPDDASGPFKQYRKXYBUVXUYWHMKZOFZWSOUQKDYBTGURUJH");

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
    msg.setTimeStamp(0.0991815228251);
    msg.setSource(30544U);
    msg.setSourceEntity(248U);
    msg.setDestination(8621U);
    msg.setDestinationEntity(245U);
    msg.custom.assign("FAPFDCHDWWHUBFYM");

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
    msg.setTimeStamp(0.825977197245);
    msg.setSource(23302U);
    msg.setSourceEntity(249U);
    msg.setDestination(63706U);
    msg.setDestinationEntity(229U);
    msg.timeout = 57736U;
    msg.lat = 0.932644659781;
    msg.lon = 0.832794314405;
    msg.z = 0.33932293189;
    msg.z_units = 117U;
    msg.duration = 24996U;
    msg.speed = 0.883554270175;
    msg.speed_units = 14U;
    msg.type = 112U;
    msg.radius = 0.144438662299;
    msg.length = 0.0892115317253;
    msg.bearing = 0.238223746361;
    msg.direction = 229U;
    msg.custom.assign("SZEQKJFFGCVDVRZBAORJRANJYILKHTHZEBCGALDJHXURLRAMJFMEGHOX");

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
    msg.setTimeStamp(0.845422140398);
    msg.setSource(37717U);
    msg.setSourceEntity(52U);
    msg.setDestination(54163U);
    msg.setDestinationEntity(206U);
    msg.timeout = 8811U;
    msg.lat = 0.577923223475;
    msg.lon = 0.611993466587;
    msg.z = 0.192463604006;
    msg.z_units = 234U;
    msg.duration = 41424U;
    msg.speed = 0.629397391672;
    msg.speed_units = 80U;
    msg.type = 48U;
    msg.radius = 0.453105753729;
    msg.length = 0.14309023657;
    msg.bearing = 0.985873971072;
    msg.direction = 85U;
    msg.custom.assign("LXUKQYQWVLDYIQUXQUPOHOUOBTTZBBEWTZCZUBEEAJXABSHDQIDMBCXBTSEIUVREDTHNJCHIEJXIELZ");

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
    msg.setTimeStamp(0.582926839151);
    msg.setSource(30818U);
    msg.setSourceEntity(81U);
    msg.setDestination(553U);
    msg.setDestinationEntity(150U);
    msg.timeout = 23532U;
    msg.lat = 0.678156483631;
    msg.lon = 0.00645339298554;
    msg.z = 0.871711427569;
    msg.z_units = 191U;
    msg.duration = 12940U;
    msg.speed = 0.679004404327;
    msg.speed_units = 200U;
    msg.type = 154U;
    msg.radius = 0.466218920891;
    msg.length = 0.33377210665;
    msg.bearing = 0.572134413873;
    msg.direction = 123U;
    msg.custom.assign("GACBJGRJIRTXOZEQRMDDPTJHTVSDEHCQESFKZOIIUYFYEUTAVGCACMFTDFAWSUIZKABUYNBLIQPQERDJMYXDGLWPOGENEWCVFZIPMXQFEPBANPFZJEKONXKXQBQUWVZSMWBYCNDNOFHUWPMVHSCRHALOHALKGTSTVURVLJJRTOHYWKBVWZIGXQQJGGIONTLFBYRUHVDQYARUKVIMHDS");

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
    msg.setTimeStamp(0.45501214239);
    msg.setSource(56586U);
    msg.setSourceEntity(124U);
    msg.setDestination(60087U);
    msg.setDestinationEntity(195U);
    msg.duration = 19134U;
    msg.custom.assign("DAKAARJVWYTOBRJOBOAQEYGKWJMXPGTGPROCWVJPQDVVALUBBYLXVXYGFEPFOBVAXQMNJTNOTDBQSDKSDUEDOPGHITVBTAFVYXTUMTCNUZFQDNPHFINZRSNINZLZZHJHCEQMZGXLUZIUALRGLOKQSWZQLTLHFEXIRSNY");

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
    msg.setTimeStamp(0.0153947607074);
    msg.setSource(34318U);
    msg.setSourceEntity(88U);
    msg.setDestination(29676U);
    msg.setDestinationEntity(233U);
    msg.duration = 58317U;
    msg.custom.assign("HXIYMRPYQOBUYCATXDVLRIBRUHYPEQUZSYKIYVPACYAFIWKFIJERVHNKRVQEBGNXHJQUJJTCOJQMLGDSAXMWTQPDFPNTNQASFBWGUWWWNVGNMLZYXPWZEVCFETFXRUZCXVCKKEPBCLGOETDZRHARCISLWLLEGNGCHQFLDSBRUEGPKXWZYZOAPJHFDDQNAMINUDTDHFSEWQYSIRBUVKOIFOKHBZZMLCPLOBOODJMAJUXGKSXIMBOZNTHTSSKATJ");

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
    msg.setTimeStamp(0.450849128944);
    msg.setSource(43768U);
    msg.setSourceEntity(145U);
    msg.setDestination(22547U);
    msg.setDestinationEntity(101U);
    msg.duration = 43089U;
    msg.custom.assign("GWNYKLRLHTUTOIPRPXCGIXJOHDZXJFNJZRHXWPSBOCNGIMVAUZJVEMPSISCJUSYYTWHLIDYLSXIUBVYZEQTGIQVCHQWQU");

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
    msg.setTimeStamp(0.316076569821);
    msg.setSource(625U);
    msg.setSourceEntity(169U);
    msg.setDestination(58899U);
    msg.setDestinationEntity(28U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.637345565878;
    msg.control.set(tmp_msg_0);
    msg.duration = 10761U;
    msg.custom.assign("JUVZFKSMAXMQYGAYCFNRIXYQOHQNDTKMXAGMFPHLTYKFQCRUHSCNBCKFEASAWBGIYLBDVDIOECMUSXDBNNTENWSBPANSHWUPFQHCNQVJIABLPZGOVWRGXVYOPJGZNIDLVPWERLWKARKKXUCHYZMHAMJSJZAURDTGITLHEDOKGMWXTBXJDVTHYMQOJKOQOWYRUGSFUFTFQZJIJGRWZPIIRKPBVLZTCWJSETLOEE");

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
    msg.setTimeStamp(0.542282579453);
    msg.setSource(9229U);
    msg.setSourceEntity(144U);
    msg.setDestination(21730U);
    msg.setDestinationEntity(93U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.61557909043;
    msg.control.set(tmp_msg_0);
    msg.duration = 59025U;
    msg.custom.assign("XEUEQGKMACVQQUNGFQHVHWTMTSPPFBWDADZSKNXBZJZGSUDBBALWNHOJKGYJIUKLMXFEGXSVZAXJIAIPTHQSYRDXSSOZIJAWTRXIZZGKMZNKRRWWBAWRCPZKBMDVCCFUEIIDWSLNHAWBXKUMRDFJNLIENPPELJWQVBXUFLEQGVOEIGOTQOKFHSALXJBYUZSAULDTVRYNOOLGCYYGUEKQDDMHOCTLECR");

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
    msg.setTimeStamp(0.177869011643);
    msg.setSource(39091U);
    msg.setSourceEntity(178U);
    msg.setDestination(19527U);
    msg.setDestinationEntity(233U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.447012276794;
    msg.control.set(tmp_msg_0);
    msg.duration = 7092U;
    msg.custom.assign("LLTDBRAPZYUXVDITQVBMZBWCLGDMWRKMANWWZUAK");

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
    msg.setTimeStamp(0.102454735656);
    msg.setSource(17551U);
    msg.setSourceEntity(97U);
    msg.setDestination(63965U);
    msg.setDestinationEntity(59U);
    msg.timeout = 4494U;
    msg.lat = 0.220288227213;
    msg.lon = 0.816910111221;
    msg.z = 0.0261945564855;
    msg.z_units = 19U;
    msg.speed = 0.932790150386;
    msg.speed_units = 146U;
    msg.bearing = 0.245166151371;
    msg.cross_angle = 0.523462892329;
    msg.width = 0.970706368484;
    msg.length = 0.936730990084;
    msg.hstep = 0.00391898826096;
    msg.coff = 186U;
    msg.alternation = 239U;
    msg.flags = 51U;
    msg.custom.assign("JAFUHHOCYLONLMIZTKOMXQVJPDWHSFKQVJIISPPEEZDZTVYKRZCXXUFKCQFQXYGKJYVFEPGXWIUWCSNRKCLWEYAOGBRIANQPRYMNMSIAXZIFUADMGBUTDHHLPCLWSNZDKQAXCFGDYAWSBCKKBGAGXZDHWJQTYJTBMTRCXIFU");

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
    msg.setTimeStamp(0.39909395757);
    msg.setSource(5607U);
    msg.setSourceEntity(95U);
    msg.setDestination(62321U);
    msg.setDestinationEntity(99U);
    msg.timeout = 63385U;
    msg.lat = 0.375851949282;
    msg.lon = 0.0237544522871;
    msg.z = 0.702236203967;
    msg.z_units = 75U;
    msg.speed = 0.338304085418;
    msg.speed_units = 187U;
    msg.bearing = 0.509585672226;
    msg.cross_angle = 0.186621975839;
    msg.width = 0.270705537083;
    msg.length = 0.297345666226;
    msg.hstep = 0.013336534199;
    msg.coff = 86U;
    msg.alternation = 247U;
    msg.flags = 216U;
    msg.custom.assign("MIEKPXVQMTWUMLHQJUAO");

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
    msg.setTimeStamp(0.125889002928);
    msg.setSource(59579U);
    msg.setSourceEntity(53U);
    msg.setDestination(2716U);
    msg.setDestinationEntity(240U);
    msg.timeout = 35291U;
    msg.lat = 0.364495867689;
    msg.lon = 0.927782828352;
    msg.z = 0.871612203235;
    msg.z_units = 250U;
    msg.speed = 0.651931696333;
    msg.speed_units = 154U;
    msg.bearing = 0.715003985036;
    msg.cross_angle = 0.347196412749;
    msg.width = 0.740848056728;
    msg.length = 0.925643695515;
    msg.hstep = 0.761092554855;
    msg.coff = 220U;
    msg.alternation = 65U;
    msg.flags = 95U;
    msg.custom.assign("XNKREYWPHEZHGYBXYATRUVSHOGJQLRQDQVSCDRRVZCTVXJEMOFZUFCJOCKEKNZPTUVCFXYFHSUGTPBZNHQIWDAJEPMNIXUNVLYZOJARXQXHGPLDKPAFKBDBQGPDRCSMLLIPZDVABAYISMWUSHLDFWJFDLZNMWOHGNMKRCZZJEUPMVKQEIURGWLSXENFJHYKOBXTMYTWLARNHVSJOEMACGEWKYIGK");

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
    msg.setTimeStamp(0.53995181893);
    msg.setSource(39168U);
    msg.setSourceEntity(192U);
    msg.setDestination(30496U);
    msg.setDestinationEntity(250U);
    msg.timeout = 59645U;
    msg.lat = 0.705011731442;
    msg.lon = 0.24685570394;
    msg.z = 0.327822679048;
    msg.z_units = 138U;
    msg.speed = 0.360714426028;
    msg.speed_units = 165U;
    msg.custom.assign("AZPBPARIWFXTDPHGUZGXNXNFPDWOVRBSRVQDFNDFVTTEPZZXEGCMQMLGAAKZHGLJVGWHRKKMOCCIACP");

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
    msg.setTimeStamp(0.468144103189);
    msg.setSource(31320U);
    msg.setSourceEntity(8U);
    msg.setDestination(36278U);
    msg.setDestinationEntity(231U);
    msg.timeout = 18247U;
    msg.lat = 0.494830118092;
    msg.lon = 0.0256508216437;
    msg.z = 0.146258984924;
    msg.z_units = 184U;
    msg.speed = 0.0191468735132;
    msg.speed_units = 114U;
    msg.custom.assign("HCNAZROUEPHUCGNOJJDEKWPNPIKESOILCROMIXCBGTNFLSODESXWSRHLFQYVKBIHYEQMWBGRTPLUIPNTAGAUBKSYDRVSEGGTVEXHUGLVXMAVCKFODWYZTGEWQRRLVDISIUJPMZBSMATMXZGXPXQIJWHJBWQXZQALKEFQEOHCYRGLNVDYMMTFAJTYDFTRHDXPSZWQVZBSODDUHZIXYKJWFKOH");

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
    msg.setTimeStamp(0.0994374732717);
    msg.setSource(39067U);
    msg.setSourceEntity(46U);
    msg.setDestination(23965U);
    msg.setDestinationEntity(170U);
    msg.timeout = 34567U;
    msg.lat = 0.828641285831;
    msg.lon = 0.516249022316;
    msg.z = 0.751597476499;
    msg.z_units = 79U;
    msg.speed = 0.281925822672;
    msg.speed_units = 140U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.395783651446;
    tmp_msg_0.y = 0.853457383271;
    tmp_msg_0.z = 0.972852128852;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OTZRFGINDYETIJLXSGOSTSFZBOFGURZGGWUNOPJVDZQDMEOPFVFMNWJEPPDNZAQCCWRJKBGUFITLGBXDZKCPIIBOMMAFMMLQZYMHCUIVVODLVLHXVKTESJEJNXVIABRFPYDNHNSOACXUYWJCAPDURYTSSIWZTKCJQUNKWQPVBXHQYRYVBYSPABKSMQPZDKVWXCKLLASCUGYMNHGXQOLRHWTDJKLUTHAXFKUAARR");

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
    msg.setTimeStamp(0.366284955863);
    msg.setSource(1575U);
    msg.setSourceEntity(76U);
    msg.setDestination(7840U);
    msg.setDestinationEntity(59U);
    msg.x = 0.0257924967087;
    msg.y = 0.591046487644;
    msg.z = 0.912750249912;

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
    msg.setTimeStamp(0.47202536421);
    msg.setSource(15058U);
    msg.setSourceEntity(206U);
    msg.setDestination(63247U);
    msg.setDestinationEntity(251U);
    msg.x = 0.0441591405825;
    msg.y = 0.172101128069;
    msg.z = 0.565417068063;

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
    msg.setTimeStamp(0.608665371051);
    msg.setSource(62000U);
    msg.setSourceEntity(191U);
    msg.setDestination(26558U);
    msg.setDestinationEntity(22U);
    msg.x = 0.944639881161;
    msg.y = 0.575086403832;
    msg.z = 0.267047453839;

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
    msg.setTimeStamp(0.292413861468);
    msg.setSource(6431U);
    msg.setSourceEntity(24U);
    msg.setDestination(45736U);
    msg.setDestinationEntity(51U);
    msg.timeout = 58607U;
    msg.lat = 0.378073710137;
    msg.lon = 0.0762298449153;
    msg.z = 0.371358354276;
    msg.z_units = 219U;
    msg.amplitude = 0.755317139012;
    msg.pitch = 0.123464970449;
    msg.speed = 0.324056349858;
    msg.speed_units = 170U;
    msg.custom.assign("WJEYLVRTFCSUNHVQAUKCIKWGXZSFULWRBQYKWVDNFFHDMSSZOZRNGIJISLEGYFTCPWMTPERWWIATTQYBTKRAMCBJNAGHEIYOKRHIKDUCQJ");

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
    msg.setTimeStamp(0.514253275118);
    msg.setSource(6873U);
    msg.setSourceEntity(84U);
    msg.setDestination(43497U);
    msg.setDestinationEntity(157U);
    msg.timeout = 57443U;
    msg.lat = 0.119733586761;
    msg.lon = 0.694267985568;
    msg.z = 0.248206489434;
    msg.z_units = 136U;
    msg.amplitude = 0.146253271676;
    msg.pitch = 0.74459233574;
    msg.speed = 0.503579286747;
    msg.speed_units = 205U;
    msg.custom.assign("ILBFYTUIHHWZWLQCAGIRGSSCNUQZDAXHUGRWJAPFHDIOPNVZNZYGXYGKJYBZTYLIOWZTDUMHJMVYRQIMTNUEYXFAJNQPUFAH");

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
    msg.setTimeStamp(0.845701150948);
    msg.setSource(3473U);
    msg.setSourceEntity(249U);
    msg.setDestination(56514U);
    msg.setDestinationEntity(222U);
    msg.timeout = 22524U;
    msg.lat = 0.87778175771;
    msg.lon = 0.100512013357;
    msg.z = 0.609446618473;
    msg.z_units = 180U;
    msg.amplitude = 0.99486571279;
    msg.pitch = 0.95279687962;
    msg.speed = 0.453557437504;
    msg.speed_units = 124U;
    msg.custom.assign("WNUBIBXIDNTHYMZGVSGHKVPCEUPJBNTDQFXEAELSKSGUORVQJSQMVHUU");

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
    msg.setTimeStamp(0.930108287649);
    msg.setSource(33758U);
    msg.setSourceEntity(202U);
    msg.setDestination(30972U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.1785297861);
    msg.setSource(54464U);
    msg.setSourceEntity(40U);
    msg.setDestination(59456U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.873181529088);
    msg.setSource(47480U);
    msg.setSourceEntity(67U);
    msg.setDestination(14155U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.648692294);
    msg.setSource(14099U);
    msg.setSourceEntity(3U);
    msg.setDestination(18633U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.525705446468;
    msg.lon = 0.493259698256;
    msg.z = 0.00365297275733;
    msg.z_units = 252U;
    msg.radius = 0.72604098883;
    msg.duration = 62502U;
    msg.speed = 0.61362111581;
    msg.speed_units = 44U;
    msg.custom.assign("KXDNAGMJXAARVEOCPVPLNYBWNKUDULEBZBEBHTHWYSKAOQRYSLMCOZKONYCWDPXYLZLSXIMTQGPGJKSNKVBJXDJWYAWDGNYSEKFRUHZFNSPCOPFOWRIVKQIPMPEBQWAQMFTREQYAVQEBYLHMQAXFTJDGCTCRUIOOVCGAJGQ");

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
    msg.setTimeStamp(0.710819943094);
    msg.setSource(5261U);
    msg.setSourceEntity(163U);
    msg.setDestination(19195U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.984371618066;
    msg.lon = 0.14820125752;
    msg.z = 0.674450122547;
    msg.z_units = 152U;
    msg.radius = 0.41500984477;
    msg.duration = 2740U;
    msg.speed = 0.13705149154;
    msg.speed_units = 98U;
    msg.custom.assign("SZUHAPYKNXVCGFWJTDTBYNRHDLZOFIWWXSKFNDCCIWLLDUTNICAUHVUHEDDINXGZGWXRROKZTHJHOHAXPJFXFPMXMNRTPCEQIMZKTWCMCVKQPAIECTJCNPGJBREJBSYUYQBHDMOTVKKGKSLPZZGOEUOFEOOJLGTERILQSMPPWBLVRIVEJEMYAYOYAQFBE");

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
    msg.setTimeStamp(0.404117160863);
    msg.setSource(42574U);
    msg.setSourceEntity(3U);
    msg.setDestination(32935U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.238271677972;
    msg.lon = 0.895839754187;
    msg.z = 0.327227472981;
    msg.z_units = 132U;
    msg.radius = 0.940471058438;
    msg.duration = 48241U;
    msg.speed = 0.0721067873314;
    msg.speed_units = 84U;
    msg.custom.assign("VTUNXSHSNTCKFXKOOPOECQZEUBKNGYHOQYCVWD");

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
    msg.setTimeStamp(0.14785135958);
    msg.setSource(19386U);
    msg.setSourceEntity(6U);
    msg.setDestination(5887U);
    msg.setDestinationEntity(224U);
    msg.timeout = 14143U;
    msg.flags = 95U;
    msg.lat = 0.729927182638;
    msg.lon = 0.313499855136;
    msg.start_z = 0.808006568144;
    msg.start_z_units = 87U;
    msg.end_z = 0.287835407268;
    msg.end_z_units = 69U;
    msg.radius = 0.0721755729541;
    msg.speed = 0.825536465624;
    msg.speed_units = 93U;
    msg.custom.assign("DCHKFLTKPKVHZZJEFZJOZGGUKWRORNIIIWLKVCFOSQWTJPHDIPMLDMTKBTQCADAAAXPGNVNODINJMQGEYGFXSEJATNBLXPHIUZRRAYTP");

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
    msg.setTimeStamp(0.435789815855);
    msg.setSource(51513U);
    msg.setSourceEntity(34U);
    msg.setDestination(44U);
    msg.setDestinationEntity(9U);
    msg.timeout = 62138U;
    msg.flags = 12U;
    msg.lat = 0.164133739932;
    msg.lon = 0.355648484164;
    msg.start_z = 0.0646384123156;
    msg.start_z_units = 221U;
    msg.end_z = 0.68957995481;
    msg.end_z_units = 233U;
    msg.radius = 0.827390921246;
    msg.speed = 0.468584145184;
    msg.speed_units = 14U;
    msg.custom.assign("ZMJBMJJFKALMKCWIBZBILJWRWJUHHFSFPJPFOQD");

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
    msg.setTimeStamp(0.222171834908);
    msg.setSource(50985U);
    msg.setSourceEntity(204U);
    msg.setDestination(39623U);
    msg.setDestinationEntity(29U);
    msg.timeout = 52316U;
    msg.flags = 177U;
    msg.lat = 0.690662699338;
    msg.lon = 0.669539146523;
    msg.start_z = 0.571991010708;
    msg.start_z_units = 222U;
    msg.end_z = 0.514259679859;
    msg.end_z_units = 162U;
    msg.radius = 0.714389439315;
    msg.speed = 0.0728119134494;
    msg.speed_units = 3U;
    msg.custom.assign("ZDKEOGFGPXWJCJNARXGBIJDXMDRHKLYMFOKNDAMZKIBBNDYEIPYBYDSVPGLQUHNQXIIBLSOQGMLMVANSTXVBTGADKSLSHBZQTFARFELZWVCZFJOFIVZOOACJHQPLLTSJCMNDXXUUUPPHSCOPCKGOBWCRVRPWYCATTKEEKKTUVPDPFMZHSERSRNHYVSJWDYUNLHBTAKOXFIVMRWQQGTEUHAUYZXWNQQJZEIGYQIJAWIFJHUMUBLRYEO");

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
    msg.setTimeStamp(0.857774389289);
    msg.setSource(32379U);
    msg.setSourceEntity(70U);
    msg.setDestination(48683U);
    msg.setDestinationEntity(40U);
    msg.timeout = 1657U;
    msg.lat = 0.631653235108;
    msg.lon = 0.600501573609;
    msg.z = 0.317935435095;
    msg.z_units = 134U;
    msg.speed = 0.704774450258;
    msg.speed_units = 109U;
    msg.custom.assign("OUYEPOHXSAVCXGYRDJFHWBFJKTHFMQGHOUFOL");

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
    msg.setTimeStamp(0.457705960141);
    msg.setSource(5579U);
    msg.setSourceEntity(44U);
    msg.setDestination(39298U);
    msg.setDestinationEntity(119U);
    msg.timeout = 29407U;
    msg.lat = 0.983505268651;
    msg.lon = 0.884161171663;
    msg.z = 0.694514695052;
    msg.z_units = 144U;
    msg.speed = 0.608783533294;
    msg.speed_units = 110U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.608959458279;
    tmp_msg_0.y = 0.247219985241;
    tmp_msg_0.z = 0.00582363058226;
    tmp_msg_0.t = 0.5705319221;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NPWVEXUOAGAEZMJESTSGYVNIJAYPWJTDMHGHYSLWYIXRJIAVYIRCNVDXZKHLVMEQZITYQPMGQXLPQLAYIXOOFUF");

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
    msg.setTimeStamp(0.647165449252);
    msg.setSource(50700U);
    msg.setSourceEntity(252U);
    msg.setDestination(41046U);
    msg.setDestinationEntity(96U);
    msg.timeout = 2869U;
    msg.lat = 0.321237016422;
    msg.lon = 0.646223303845;
    msg.z = 0.630630683578;
    msg.z_units = 96U;
    msg.speed = 0.688694920141;
    msg.speed_units = 27U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.453499045572;
    tmp_msg_0.y = 0.624807341176;
    tmp_msg_0.z = 0.0682623845826;
    tmp_msg_0.t = 0.187247292593;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FXAZJDFXSMYBUVCXSPFVIGDXAAUMUJFDXCTFYDBYLHDTSPMWGZLSARCAFQUTEGQNAHZWRIRJGDLHCICYORZVZZRNHWTBVPEZEIC");

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
    msg.setTimeStamp(0.415490879448);
    msg.setSource(28429U);
    msg.setSourceEntity(40U);
    msg.setDestination(30832U);
    msg.setDestinationEntity(82U);
    msg.x = 0.362431781704;
    msg.y = 0.960328918299;
    msg.z = 0.0555756771561;
    msg.t = 0.659767942871;

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
    msg.setTimeStamp(0.777399001885);
    msg.setSource(25399U);
    msg.setSourceEntity(38U);
    msg.setDestination(25381U);
    msg.setDestinationEntity(236U);
    msg.x = 0.379495824517;
    msg.y = 0.220742589581;
    msg.z = 0.921829872829;
    msg.t = 0.145201239953;

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
    msg.setTimeStamp(0.265476628744);
    msg.setSource(63750U);
    msg.setSourceEntity(7U);
    msg.setDestination(40749U);
    msg.setDestinationEntity(101U);
    msg.x = 0.505638870382;
    msg.y = 0.65282872237;
    msg.z = 0.766420059141;
    msg.t = 0.902086776251;

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
    msg.setTimeStamp(0.756156379816);
    msg.setSource(42497U);
    msg.setSourceEntity(151U);
    msg.setDestination(26808U);
    msg.setDestinationEntity(94U);
    msg.timeout = 37406U;
    msg.name.assign("SHEGOYDMLPTEUOMSKZFOKITXIUWHANZQBHZUXRQZEBBRLNCNJRGTRSWPFWEILPNORODUHSCMJVHUZTBSEUHNMWGIDMHPOVJYETXVXRLZPZXAADYCKYGKEFNIQCJQQBXAFBXWKBJNDJJGHLJDVHRAFNGARTOYQEDYLCARBTQLUXFWKUKVCPKGTYBAONUEYTVIXOFSFZCCGVQMIFLJRZF");
    msg.custom.assign("ASOYFNZIYHAVJIOOHRJCFNDFXWQGVFOZHRCAPPUGLRFLMMSWUEPDILRCSAYXEMEGYBUAMPKYZXEFQDJHMTTLGWUNC");

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
    msg.setTimeStamp(0.859592657965);
    msg.setSource(6149U);
    msg.setSourceEntity(225U);
    msg.setDestination(36810U);
    msg.setDestinationEntity(175U);
    msg.timeout = 29322U;
    msg.name.assign("MVCNHSBHMSNHKNCRDNXYRDFIMLIMTGSBIIYDZQPTACZYZBCYJRCABEEFBDGMHGRBMSDQDLEVZAXGJJVJXHFSXQUMCLAUNGIUEVMFZLWWWFZOSRPRDKWHJ");
    msg.custom.assign("BCLVHDKGHAKEGZASXNGXLRYVNWFZOVWYJAOCAPIOPBQGYUCUVWKMECUMJZFPWDO");

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
    msg.setTimeStamp(0.886245348802);
    msg.setSource(40986U);
    msg.setSourceEntity(65U);
    msg.setDestination(21546U);
    msg.setDestinationEntity(66U);
    msg.timeout = 54493U;
    msg.name.assign("YYBJKQMAVYUXMETKZKNLUYOTJDEBWVTKURDFWZMGCWLGK");
    msg.custom.assign("ATNREYITNHKVSZQCXRZKENIKXBJULLZPHERTIOZEGRVNEDMJPRBBWVBKFGZVMYHUJVTRMOZONNMZWSCIEYMOOSZCWACNOTUGWLJMLGUGAIDUSFTWFXOWLCJVBVOPAQNFXGXUEZJOJVBXRQUEYHYVBLELIHHJ");

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
    msg.setTimeStamp(0.734055864382);
    msg.setSource(47149U);
    msg.setSourceEntity(155U);
    msg.setDestination(23559U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.54639559189;
    msg.lon = 0.00256236930129;
    msg.z = 0.34904746394;
    msg.z_units = 197U;
    msg.speed = 0.187430906395;
    msg.speed_units = 224U;
    msg.start_time = 0.138797921788;
    msg.custom.assign("QBAIIWDTNJMASMBYCDGVJEYHFDXJAGNIYOJWHKQMEOHAZTSDAGVXHFLMQSAGKFPBSHUHFZPWPEEBVZBWLQOOLBQXJMNDASLBRSVMFVDKMQNZCGRKLNYCHEYNUGEIYGRZCPTTTXHULVTWZKVSNKPAVOWJXEHEXECMPBRSOPUURIZKXLQWFYCFUUDXURGEIONWDPRYTYQAJWTOURSNTIZZONIOMLXXHYICLDCBTIFDZWQB");

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
    msg.setTimeStamp(0.703197347056);
    msg.setSource(24389U);
    msg.setSourceEntity(68U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.12578766129;
    msg.lon = 0.356948450658;
    msg.z = 0.846741262205;
    msg.z_units = 79U;
    msg.speed = 0.335965968704;
    msg.speed_units = 45U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.314954924266;
    tmp_msg_0.y = 0.27401856898;
    tmp_msg_0.z = 0.419115719595;
    tmp_msg_0.t = 0.148991221293;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 15750U;
    tmp_msg_1.off_x = 0.32728828372;
    tmp_msg_1.off_y = 0.6464464461;
    tmp_msg_1.off_z = 0.54260169095;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.981313733948;
    msg.custom.assign("YQFXYPRHFMRGCNHMRJXHDLONORMQXI");

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
    msg.setTimeStamp(0.139090255749);
    msg.setSource(57524U);
    msg.setSourceEntity(237U);
    msg.setDestination(62590U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.0765622716738;
    msg.lon = 0.124355807909;
    msg.z = 0.212484163562;
    msg.z_units = 245U;
    msg.speed = 0.684680008479;
    msg.speed_units = 201U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38225U;
    tmp_msg_0.off_x = 0.775930350032;
    tmp_msg_0.off_y = 0.0445834073363;
    tmp_msg_0.off_z = 0.072881352485;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.369633295482;
    msg.custom.assign("GXDDXCCZAYTLNPKCVLOHEQRJIMGPBSJHNEIXGWCFXZYFXBIJNVZWTKSEMGFTLNIOHPHMERSJXDXUVMRAH");

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
    msg.setTimeStamp(0.729088488149);
    msg.setSource(45998U);
    msg.setSourceEntity(188U);
    msg.setDestination(23476U);
    msg.setDestinationEntity(44U);
    msg.vid = 30772U;
    msg.off_x = 0.12416363825;
    msg.off_y = 0.620287802196;
    msg.off_z = 0.860789090395;

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
    msg.setTimeStamp(0.280043389421);
    msg.setSource(35401U);
    msg.setSourceEntity(214U);
    msg.setDestination(48921U);
    msg.setDestinationEntity(158U);
    msg.vid = 51524U;
    msg.off_x = 0.218501745637;
    msg.off_y = 0.422224118312;
    msg.off_z = 0.977736717428;

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
    msg.setTimeStamp(0.153821370554);
    msg.setSource(2397U);
    msg.setSourceEntity(164U);
    msg.setDestination(62430U);
    msg.setDestinationEntity(15U);
    msg.vid = 17969U;
    msg.off_x = 0.363264323651;
    msg.off_y = 0.409564588134;
    msg.off_z = 0.428517916243;

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
    msg.setTimeStamp(0.939218753757);
    msg.setSource(55826U);
    msg.setSourceEntity(253U);
    msg.setDestination(3535U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.343624536626);
    msg.setSource(12090U);
    msg.setSourceEntity(200U);
    msg.setDestination(5424U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.943117279089);
    msg.setSource(25031U);
    msg.setSourceEntity(7U);
    msg.setDestination(5448U);
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
    msg.setTimeStamp(0.99691819626);
    msg.setSource(5525U);
    msg.setSourceEntity(134U);
    msg.setDestination(29665U);
    msg.setDestinationEntity(2U);
    msg.mid = 30027U;

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
    msg.setTimeStamp(0.391924751232);
    msg.setSource(8540U);
    msg.setSourceEntity(250U);
    msg.setDestination(48318U);
    msg.setDestinationEntity(221U);
    msg.mid = 22080U;

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
    msg.setTimeStamp(0.908393460737);
    msg.setSource(59859U);
    msg.setSourceEntity(252U);
    msg.setDestination(52661U);
    msg.setDestinationEntity(237U);
    msg.mid = 61794U;

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
    msg.setTimeStamp(0.266871621446);
    msg.setSource(63943U);
    msg.setSourceEntity(239U);
    msg.setDestination(14492U);
    msg.setDestinationEntity(194U);
    msg.state = 71U;
    msg.eta = 9113U;
    msg.info.assign("TGDLWQTIRFRRKPQTCPUEWTCAMGVFCYEOPDIHDWEWUERHJAKNFNAOLSYYXAEQSOMZGFSVCWCONEGZJMRIJBBFQTQJTWTKWLKOGADPCUYUGGKTZMNLLYXULSGVZHLMVVRBINUVFVOXMHFVIHSSUVPZZBYUBSNXBLDHUJMSNZFPIKQEIBEFAM");

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
    msg.setTimeStamp(0.405108309973);
    msg.setSource(4512U);
    msg.setSourceEntity(22U);
    msg.setDestination(7582U);
    msg.setDestinationEntity(191U);
    msg.state = 86U;
    msg.eta = 58903U;
    msg.info.assign("WXSDXSPYTSBKDGCRCTREPWSAHKVPLBFH");

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
    msg.setTimeStamp(0.192986507085);
    msg.setSource(33390U);
    msg.setSourceEntity(143U);
    msg.setDestination(53955U);
    msg.setDestinationEntity(253U);
    msg.state = 60U;
    msg.eta = 33272U;
    msg.info.assign("MXFXLAAHDKYUXCWKYCERWWNZXQLTHIYDIWLHUSRRYPJZCOSGJKXUEJGKDSCOIBKQHOGGEHSHAWBHGSRTGTQFBVN");

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
    msg.setTimeStamp(0.870757621225);
    msg.setSource(17930U);
    msg.setSourceEntity(214U);
    msg.setDestination(3588U);
    msg.setDestinationEntity(194U);
    msg.system = 53901U;
    msg.duration = 56202U;
    msg.speed = 0.332392012996;
    msg.speed_units = 140U;
    msg.x = 0.280615023739;
    msg.y = 0.243934087256;
    msg.z = 0.795723300177;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.880564282541);
    msg.setSource(47457U);
    msg.setSourceEntity(167U);
    msg.setDestination(36207U);
    msg.setDestinationEntity(161U);
    msg.system = 25478U;
    msg.duration = 31339U;
    msg.speed = 0.29826482719;
    msg.speed_units = 101U;
    msg.x = 0.831028452872;
    msg.y = 0.411874792249;
    msg.z = 0.0700909116255;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.542944382207);
    msg.setSource(45641U);
    msg.setSourceEntity(160U);
    msg.setDestination(4476U);
    msg.setDestinationEntity(176U);
    msg.system = 44252U;
    msg.duration = 14473U;
    msg.speed = 0.201406161481;
    msg.speed_units = 178U;
    msg.x = 0.71523716874;
    msg.y = 0.763473239604;
    msg.z = 0.84688971047;
    msg.z_units = 201U;

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
    msg.setTimeStamp(0.349125195072);
    msg.setSource(40638U);
    msg.setSourceEntity(183U);
    msg.setDestination(16296U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.618245222766;
    msg.lon = 0.532589416191;
    msg.speed = 0.202753363647;
    msg.speed_units = 6U;
    msg.duration = 58319U;
    msg.sys_a = 23812U;
    msg.sys_b = 6523U;
    msg.move_threshold = 0.543169205673;

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
    msg.setTimeStamp(0.966743749194);
    msg.setSource(47615U);
    msg.setSourceEntity(228U);
    msg.setDestination(25166U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.382418759996;
    msg.lon = 0.165989036879;
    msg.speed = 0.0948883870475;
    msg.speed_units = 226U;
    msg.duration = 23199U;
    msg.sys_a = 2734U;
    msg.sys_b = 33047U;
    msg.move_threshold = 0.593309158546;

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
    msg.setTimeStamp(0.377774504145);
    msg.setSource(3402U);
    msg.setSourceEntity(66U);
    msg.setDestination(54314U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.498170291775;
    msg.lon = 0.681354434787;
    msg.speed = 0.107041892376;
    msg.speed_units = 132U;
    msg.duration = 58155U;
    msg.sys_a = 36879U;
    msg.sys_b = 30801U;
    msg.move_threshold = 0.694302145617;

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
    msg.setTimeStamp(0.464606317445);
    msg.setSource(62858U);
    msg.setSourceEntity(77U);
    msg.setDestination(64763U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.322824814532;
    msg.lon = 0.203829970882;
    msg.z = 0.192955868738;
    msg.z_units = 79U;
    msg.speed = 0.349391926534;
    msg.speed_units = 129U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.118232027002;
    tmp_msg_0.lon = 0.916705818695;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MQXTUXOYYXVACZBWXUMQJDQYHJOXPCTHYIRJFFDRAVVENGOUCKSZZCOIFNDJBAFJLOFHLFDKTXWNSQUHGGNPCWTSSLCLJNFGANEELEEYMNFMWKKACDB");

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
    msg.setTimeStamp(0.151066229703);
    msg.setSource(36455U);
    msg.setSourceEntity(117U);
    msg.setDestination(6581U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.767290330036;
    msg.lon = 0.857660314683;
    msg.z = 0.499162823606;
    msg.z_units = 210U;
    msg.speed = 0.490224544984;
    msg.speed_units = 77U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.766444209739;
    tmp_msg_0.lon = 0.0770593435704;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YUNKDITHGDYSWQXJDHCABWMIPJOUZMKXDYRLLOPDRXFIEWEEBKIAXJVGOWPCGVKBDRDKYYNANTUUIUHVTORNZXNAFZBTSB");

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
    msg.setTimeStamp(0.958669567982);
    msg.setSource(33573U);
    msg.setSourceEntity(17U);
    msg.setDestination(60582U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.794670298757;
    msg.lon = 0.412544536065;
    msg.z = 0.49991222459;
    msg.z_units = 75U;
    msg.speed = 0.040937160833;
    msg.speed_units = 227U;
    msg.custom.assign("GMIEIOOISOXBYSUGSKRAYGAMEKBJZZIMWVSHJQZXFCVLOELIWJIQQRNDEVRZBLVXHXHPCHKOLGMUNLYMOPPBTEOCLCQBRSDIWDCDBMSYNRZDVNSZKXEQVPACADHNUTWAFFFGWMEPJGZRXKTEYBYYEWSPQMKVSCUFGFDUQFLVRMPEJRFIQSQAOTUAZTLTRHTQ");

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
    msg.setTimeStamp(0.580467947014);
    msg.setSource(17175U);
    msg.setSourceEntity(49U);
    msg.setDestination(51601U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.335201835493;
    msg.lon = 0.203056397384;

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
    msg.setTimeStamp(0.515289275051);
    msg.setSource(63980U);
    msg.setSourceEntity(45U);
    msg.setDestination(43864U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.854147499243;
    msg.lon = 0.0353355969682;

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
    msg.setTimeStamp(0.482355369495);
    msg.setSource(60230U);
    msg.setSourceEntity(83U);
    msg.setDestination(9902U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.127394752754;
    msg.lon = 0.271844742849;

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
    msg.setTimeStamp(0.544734452313);
    msg.setSource(36828U);
    msg.setSourceEntity(174U);
    msg.setDestination(15720U);
    msg.setDestinationEntity(176U);
    msg.timeout = 49652U;
    msg.lat = 0.421538407466;
    msg.lon = 0.537954405002;
    msg.z = 0.666916549392;
    msg.z_units = 165U;
    msg.pitch = 0.306991990329;
    msg.amplitude = 0.739292476896;
    msg.duration = 26877U;
    msg.speed = 0.616769654025;
    msg.speed_units = 238U;
    msg.radius = 0.892166773118;
    msg.direction = 30U;
    msg.custom.assign("GZNLOOHKILUAHVNPMISEZNYQYYNWMWBHBAWQORIDVXUEDEPTQVJJUEZFPGEDKBIJFTCIDSRRAJVDYELRTSBRGVPRVLRKQDAWXFCEYAZKHQPCXAJDXSTPXGYKLNKVIGZHOXZMN");

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
    msg.setTimeStamp(0.0533541193504);
    msg.setSource(3599U);
    msg.setSourceEntity(75U);
    msg.setDestination(30155U);
    msg.setDestinationEntity(41U);
    msg.timeout = 24035U;
    msg.lat = 0.405420147639;
    msg.lon = 0.58842652453;
    msg.z = 0.59136058975;
    msg.z_units = 45U;
    msg.pitch = 0.407745687167;
    msg.amplitude = 0.480892622378;
    msg.duration = 31252U;
    msg.speed = 0.348161246075;
    msg.speed_units = 45U;
    msg.radius = 0.686687498842;
    msg.direction = 134U;
    msg.custom.assign("QWMTHGZTHABFFSZMVJWMDVUDEVBRUVGMGKHXHNMMZQNLPRPNEHLMWYOIIEEBPXQGPB");

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
    msg.setTimeStamp(0.0152871920695);
    msg.setSource(22992U);
    msg.setSourceEntity(5U);
    msg.setDestination(11816U);
    msg.setDestinationEntity(159U);
    msg.timeout = 33553U;
    msg.lat = 0.853978079122;
    msg.lon = 0.0373762783927;
    msg.z = 0.0923318287951;
    msg.z_units = 238U;
    msg.pitch = 0.807511561846;
    msg.amplitude = 0.90184803327;
    msg.duration = 36588U;
    msg.speed = 0.640539628656;
    msg.speed_units = 66U;
    msg.radius = 0.987971433137;
    msg.direction = 96U;
    msg.custom.assign("SPYWTDSYBWXAAXJGKZVHNJEUECTZLPBR");

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
    msg.setTimeStamp(0.755451974704);
    msg.setSource(52079U);
    msg.setSourceEntity(98U);
    msg.setDestination(18661U);
    msg.setDestinationEntity(151U);
    msg.formation_name.assign("EJSAYIPDCKKHJJXJTRIXGZPGTVILVHNQMWUANBIMKEOOUUSSXHEBBVQPOEWFGKDGLLCDPGASBYICGBUFZKTRTGXOJYGTNYQNZAPX");
    msg.reference_frame = 78U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52024U;
    tmp_msg_0.off_x = 0.675717880785;
    tmp_msg_0.off_y = 0.358561466429;
    tmp_msg_0.off_z = 0.206990214451;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JLZLZRLWRYKCDVGLQUCXIDBXUSFRSEHVIXHXYIKDPGKRZWMMHCXMBFONPIBNSQBEVIWFRPKXIAEVQHYUPUMVSFHEPMBVYBLTCOZKPWFEGAROJYRPJJITNOGJYMXCKQMFRADWBZAOGDZCABFEQV");

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
    msg.setTimeStamp(0.181019108559);
    msg.setSource(64126U);
    msg.setSourceEntity(212U);
    msg.setDestination(9575U);
    msg.setDestinationEntity(19U);
    msg.formation_name.assign("CJOONYYRYMCIFNUDUTTXAIXYSMERSFGBVEJGKTOLIVDHOETZEVTRQNHWVBLRKAFGTKMYHDOCBGYKNBGJGJNBFSTELJZQQJJUEJANFGUNBWEUVZMFLDWPBKHQUBKOJDUIZQTAMWYHSWFXPWKUUWFOPNX");
    msg.reference_frame = 207U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21736U;
    tmp_msg_0.off_x = 0.539619388146;
    tmp_msg_0.off_y = 0.821827275814;
    tmp_msg_0.off_z = 0.779256697575;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VPVKFODEZJWKAMVXBAEZLRRMYPBWGBHZEHEOCBSKJTKXERDLNZDWAPAXUATMPQIRCQWEFPWZLJYHMRGFGFNCNGCOGRRKCOJZRDIYODZJPFZIGNVVOLCDRACQFNMUQGJMUEUMMNWYOOWUJKHFXKQKTWKCNJPZUFAXDCWUINMLOPIAYDWTYMVXHSDSQTXJHVESIE");

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
    msg.setTimeStamp(0.851904968718);
    msg.setSource(57105U);
    msg.setSourceEntity(227U);
    msg.setDestination(27894U);
    msg.setDestinationEntity(234U);
    msg.formation_name.assign("KIPXLOSOEYTGDQGMLGBYMJNBDCKAFVEJHJZTGHRTVSMFEXJURSOCAXPNKAOHRMGDXPDCCWFEHBIQHZVFVMCSMUTBSWQVUEUVXLAD");
    msg.reference_frame = 143U;
    msg.custom.assign("ATHFUCLEEYXISIIHVLPUYLARFSZUYJXJIHJVLSKCJDACBHLRCAHHUDGKGJKSONFJTNOOENOOPZTBQAGZZAEWTGPDRGBUXXLVPQCDYIRCBQXMWWDLLWPBTWJWECGKPRYMNDMSFKMDNZWOXPTZLDKMUNKRZXVHQQNOQOKNIFWUUMKXEHFYPFJVGIECNIBQYROSUUSJSWZVROQTRSQCGDE");

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
    msg.setTimeStamp(0.954070157665);
    msg.setSource(24518U);
    msg.setSourceEntity(7U);
    msg.setDestination(24273U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("OMWDCRAEIRUPLNZTXFYRCUFBHDABISRGHJKIFETCQWQHGFCZROMMPMGAWFSECUKEHDLBXUWYYXIKJWNXYFRJLYQIMGSWJPOVYLVM");
    msg.formation_name.assign("QLUFKLIIPQAQXNFZVBEAXIZY");
    msg.plan_id.assign("KZQMJJSBEEKXRTWYDVTLCREYSKWTFYAQPRZVTGGLYMHJSVMBNYZQZLJDWIBKPCAQINXPXDPXRZBORAXKQKCHLDEPKRTHUFNGGFGGABNOEVMDJJMXTGMPHAAZONIZFBLOSSCUCWHHTWJPFXQOGVOYNPCNRLAMICMLCHXLJJYRWKBIVDVUOHFHTAPUQRFIQQFXUVYWNZDZISUDMSEKGBTBZ");
    msg.description.assign("SGEUEJHCECHKSXONZNEXUCXUZDF");
    msg.leader_speed = 0.105894166181;
    msg.leader_bank_lim = 0.386157649381;
    msg.pos_sim_err_lim = 0.476324527563;
    msg.pos_sim_err_wrn = 0.262256305594;
    msg.pos_sim_err_timeout = 44582U;
    msg.converg_max = 0.948591162085;
    msg.converg_timeout = 61479U;
    msg.comms_timeout = 32345U;
    msg.turb_lim = 0.596304610143;
    msg.custom.assign("FWSFCDNNCQWEWTMMTPHWZBYPIOLEXNKSOBXELQOKFRXVUWGTZFTSWKOCLLVZUCNARDJGGHPVYWUDKNZOCIJNPHEXZKAMEOJRKWSQUSMZEOABSBEWEHSNQKAQYFMJUMSBCIRZWXTTJJDHNFFOLFUJGLTQIGDAIHLRLNJYBKCJVTIADRVHDZEIPSBBEQYOMSCAXBHDGPVXACKBRZMPGYXHQXFIFQGGDMLYRI");

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
    msg.setTimeStamp(0.2619837909);
    msg.setSource(46261U);
    msg.setSourceEntity(11U);
    msg.setDestination(55145U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("ZMLVZFMEQDZPQTNOJIDGBQJPBCYGKLJXXPAHJXQTNDECDZIYFTUNSLOZQHWRAGKCTMJIJZWJBLPBFENVQEDLPHFKWIQGROZYVIGVTONPTDCBNUUMSXAWCAMSYFTEXLGYBRKWTUHATKXPSUHMELIKXXSZQRGKCWRBXBOUYOEXRMO");
    msg.formation_name.assign("BVNKYBFNGKHFWJAUGWCXGECHURPFBQUPFIZHWXMDWIVUQSJCPPKYQQVCINEBZORWFYRUACTSZLFQPIGZPLMDABTKQSJ");
    msg.plan_id.assign("PMMZVKKUXHHWVIXHNBOTSYUNNARIQDPGSCPFXLYHJQMXZQRACCLOKWKTBXYZMBTYKJAGUIBMZVLWQHAUSBCJOYJIZCVRTXDNBJQSRCZPQYFTUAKNLPWVFSFQDJFLNBVOCTPSEWQHKGRCEXOUKSGGGQVZMCXIXNBOTSMPQLRUWGUYJTWIURJOTIFRZEWFDMDMVJNEDWYHIOKEXSPDDYUKZDHOAC");
    msg.description.assign("OJACHHFPJEMSJLAZANSAIPHGPDNSRXJHDVFABVPKCMODTILLGQKYKHUISNVWWGREECNWRZQSRQFWVQUMIXOMMLULCGXYYFBQBDURENCVPTTPGUKHPWOUTAVHOVQCVMIRDNMQZVSJYGNCBDFAMKGWGAKXILDMRZDUAFGSKJYXEXEOAVUBTBFPRIHDZFSKDZPLRWJELNRYQQYINFSTIBUTQCIOHMWOXBLUJNOCJKYTFELBWOSXWYKTBC");
    msg.leader_speed = 0.665961606366;
    msg.leader_bank_lim = 0.705697951728;
    msg.pos_sim_err_lim = 0.754484011291;
    msg.pos_sim_err_wrn = 0.378799117443;
    msg.pos_sim_err_timeout = 24844U;
    msg.converg_max = 0.603669140988;
    msg.converg_timeout = 39769U;
    msg.comms_timeout = 32445U;
    msg.turb_lim = 0.110546320269;
    msg.custom.assign("KHPUMBMYVIQQNXQIMCEFCYJHRDFOKDBBPPHLGXWIATXODUTSZZGITFOHMNRJHYPMEBZHYWVPRVKJLFSKNZIOOWJXLTGRZFPANUNLAFGVUQHJQRLPVMRMDFLQAOCNNWFMPGZOBCHZWKVQASGIOTEXZJCGUSPJNF");

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
    msg.setTimeStamp(0.671364686902);
    msg.setSource(38514U);
    msg.setSourceEntity(242U);
    msg.setDestination(62290U);
    msg.setDestinationEntity(109U);
    msg.group_name.assign("GTQNYQROEHDOOLLSU");
    msg.formation_name.assign("WSYXGINVCTPZXPTTDACVEPKASOORVLMDWERKYNJUQOVJRPLXJXEGLIMZ");
    msg.plan_id.assign("DZSGSQFKQYDVOUXALARHJUPKQVHMTWM");
    msg.description.assign("HRJKZRXSLGIFIBECHOUHYYYUAEFVAEBNHGWQBOHTKYDTTVNTSIEVLWQCFSDIIVXMIMLSNZPLAOMEJXWJVRFHPQRCZZKRHRZYQZW");
    msg.leader_speed = 0.53418278452;
    msg.leader_bank_lim = 0.151528121824;
    msg.pos_sim_err_lim = 0.372757397088;
    msg.pos_sim_err_wrn = 0.364937517444;
    msg.pos_sim_err_timeout = 48179U;
    msg.converg_max = 0.936620962817;
    msg.converg_timeout = 40258U;
    msg.comms_timeout = 1818U;
    msg.turb_lim = 0.408794471358;
    msg.custom.assign("NOJMZFXFOMKGNSCHPQWOOUDPCVIESPHAZCQEYDVETPYOKGGSFRHXVNEYJYNGHUZCOWWINGHDLUIUKACDUXNJTLIDJKRHDCKTHCPEGLJTIQHMZDYJCAQWFIGWEMSZXRNXOEKQOAUTWVBSJGPVXQCUFYTNWJSVZXEBACZRLMIONTQFQPHSPILKRMBPETZRBXBIZSFFXQAEVJMGXYHVAAMJURMDVDLLFS");

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
    msg.setTimeStamp(0.12963416276);
    msg.setSource(1095U);
    msg.setSourceEntity(56U);
    msg.setDestination(31241U);
    msg.setDestinationEntity(245U);
    msg.control_src = 34875U;
    msg.control_ent = 31U;
    msg.timeout = 0.0339043501689;
    msg.loiter_radius = 0.700324172784;
    msg.altitude_interval = 0.641720394576;

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
    msg.setTimeStamp(0.601772476801);
    msg.setSource(58430U);
    msg.setSourceEntity(253U);
    msg.setDestination(47491U);
    msg.setDestinationEntity(214U);
    msg.control_src = 5862U;
    msg.control_ent = 79U;
    msg.timeout = 0.742256469158;
    msg.loiter_radius = 0.22497093323;
    msg.altitude_interval = 0.734009212616;

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
    msg.setTimeStamp(0.557308969412);
    msg.setSource(47583U);
    msg.setSourceEntity(253U);
    msg.setDestination(55747U);
    msg.setDestinationEntity(66U);
    msg.control_src = 43360U;
    msg.control_ent = 55U;
    msg.timeout = 0.84683088621;
    msg.loiter_radius = 0.978746287169;
    msg.altitude_interval = 0.796656834971;

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
    msg.setTimeStamp(0.0685535867824);
    msg.setSource(10403U);
    msg.setSourceEntity(25U);
    msg.setDestination(25724U);
    msg.setDestinationEntity(86U);
    msg.flags = 247U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.694300919621;
    tmp_msg_0.speed_units = 105U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.770597087104;
    tmp_msg_1.z_units = 41U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.881792183906;
    msg.lon = 0.639030890749;
    msg.radius = 0.398020739263;

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
    msg.setTimeStamp(0.4125366477);
    msg.setSource(14266U);
    msg.setSourceEntity(63U);
    msg.setDestination(25031U);
    msg.setDestinationEntity(54U);
    msg.flags = 57U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.12176708354;
    tmp_msg_0.speed_units = 62U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.344870564689;
    tmp_msg_1.z_units = 76U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0268952712526;
    msg.lon = 0.0613272911181;
    msg.radius = 0.199371242234;

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
    msg.setTimeStamp(0.601550913846);
    msg.setSource(43417U);
    msg.setSourceEntity(171U);
    msg.setDestination(21555U);
    msg.setDestinationEntity(1U);
    msg.flags = 92U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.999229655945;
    tmp_msg_0.speed_units = 11U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.457678050541;
    tmp_msg_1.z_units = 9U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.472075842507;
    msg.lon = 0.440360594055;
    msg.radius = 0.654702939943;

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
    msg.setTimeStamp(0.460369882796);
    msg.setSource(65478U);
    msg.setSourceEntity(194U);
    msg.setDestination(19954U);
    msg.setDestinationEntity(136U);
    msg.control_src = 41294U;
    msg.control_ent = 124U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 190U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.424975175149;
    tmp_tmp_msg_0_0.speed_units = 21U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.565902581374;
    tmp_tmp_msg_0_1.z_units = 245U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.450046919516;
    tmp_msg_0.lon = 0.649925760516;
    tmp_msg_0.radius = 0.941890248294;
    msg.reference.set(tmp_msg_0);
    msg.state = 175U;
    msg.proximity = 58U;

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
    msg.setTimeStamp(0.382975731917);
    msg.setSource(34441U);
    msg.setSourceEntity(105U);
    msg.setDestination(13867U);
    msg.setDestinationEntity(80U);
    msg.control_src = 24327U;
    msg.control_ent = 163U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 158U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0178287612596;
    tmp_tmp_msg_0_0.speed_units = 245U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.700301211507;
    tmp_tmp_msg_0_1.z_units = 116U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.944745963442;
    tmp_msg_0.lon = 0.39093553067;
    tmp_msg_0.radius = 0.0447304932047;
    msg.reference.set(tmp_msg_0);
    msg.state = 180U;
    msg.proximity = 144U;

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
    msg.setTimeStamp(0.841757265062);
    msg.setSource(54120U);
    msg.setSourceEntity(73U);
    msg.setDestination(3144U);
    msg.setDestinationEntity(235U);
    msg.control_src = 51534U;
    msg.control_ent = 196U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 222U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.122014141583;
    tmp_tmp_msg_0_0.speed_units = 11U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.973224008275;
    tmp_tmp_msg_0_1.z_units = 10U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.486393294607;
    tmp_msg_0.lon = 0.871694725119;
    tmp_msg_0.radius = 0.263715832496;
    msg.reference.set(tmp_msg_0);
    msg.state = 130U;
    msg.proximity = 81U;

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
    msg.setTimeStamp(0.967703812894);
    msg.setSource(53822U);
    msg.setSourceEntity(93U);
    msg.setDestination(31592U);
    msg.setDestinationEntity(172U);
    msg.ax_cmd = 0.600168434936;
    msg.ay_cmd = 0.751182085096;
    msg.az_cmd = 0.705189039607;
    msg.ax_des = 0.62884699935;
    msg.ay_des = 0.0933152268099;
    msg.az_des = 0.520494891706;
    msg.virt_err_x = 0.721889430959;
    msg.virt_err_y = 0.723678559236;
    msg.virt_err_z = 0.820681521704;
    msg.surf_fdbk_x = 0.874822822154;
    msg.surf_fdbk_y = 0.891943364224;
    msg.surf_fdbk_z = 0.0283674955529;
    msg.surf_unkn_x = 0.260769540103;
    msg.surf_unkn_y = 0.262670340361;
    msg.surf_unkn_z = 0.104601554034;
    msg.ss_x = 0.0922836606542;
    msg.ss_y = 0.267817973477;
    msg.ss_z = 0.065591154321;

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
    msg.setTimeStamp(0.589760848304);
    msg.setSource(48973U);
    msg.setSourceEntity(45U);
    msg.setDestination(39129U);
    msg.setDestinationEntity(195U);
    msg.ax_cmd = 0.97520919019;
    msg.ay_cmd = 0.078753538944;
    msg.az_cmd = 0.708496893254;
    msg.ax_des = 0.423313013723;
    msg.ay_des = 0.368932027105;
    msg.az_des = 0.471964836648;
    msg.virt_err_x = 0.467012030883;
    msg.virt_err_y = 0.394335851716;
    msg.virt_err_z = 0.369650866962;
    msg.surf_fdbk_x = 0.155659036352;
    msg.surf_fdbk_y = 0.753238628274;
    msg.surf_fdbk_z = 0.43188468254;
    msg.surf_unkn_x = 0.547715698276;
    msg.surf_unkn_y = 0.716006848903;
    msg.surf_unkn_z = 0.623156781219;
    msg.ss_x = 0.640693053465;
    msg.ss_y = 0.19271458122;
    msg.ss_z = 0.302888852128;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LONUSBJYFPVD");
    tmp_msg_0.dist = 0.78128647827;
    tmp_msg_0.err = 0.894190260604;
    tmp_msg_0.ctrl_imp = 0.66328918355;
    tmp_msg_0.rel_dir_x = 0.19287743527;
    tmp_msg_0.rel_dir_y = 0.914330803705;
    tmp_msg_0.rel_dir_z = 0.00418112565819;
    tmp_msg_0.err_x = 0.563204520527;
    tmp_msg_0.err_y = 0.556309787964;
    tmp_msg_0.err_z = 0.498598669741;
    tmp_msg_0.rf_err_x = 0.193955843572;
    tmp_msg_0.rf_err_y = 0.472629119387;
    tmp_msg_0.rf_err_z = 0.957413663816;
    tmp_msg_0.rf_err_vx = 0.036233361144;
    tmp_msg_0.rf_err_vy = 0.369529590607;
    tmp_msg_0.rf_err_vz = 0.0803098729683;
    tmp_msg_0.ss_x = 0.195477957713;
    tmp_msg_0.ss_y = 0.810168456733;
    tmp_msg_0.ss_z = 0.0606088624444;
    tmp_msg_0.virt_err_x = 0.921676777111;
    tmp_msg_0.virt_err_y = 0.765575103841;
    tmp_msg_0.virt_err_z = 0.593606826685;
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
    msg.setTimeStamp(0.211722563513);
    msg.setSource(61552U);
    msg.setSourceEntity(106U);
    msg.setDestination(54770U);
    msg.setDestinationEntity(101U);
    msg.ax_cmd = 0.922714915336;
    msg.ay_cmd = 0.893715099297;
    msg.az_cmd = 0.304796034605;
    msg.ax_des = 0.954149795339;
    msg.ay_des = 0.826735280188;
    msg.az_des = 0.116928792214;
    msg.virt_err_x = 0.383850335126;
    msg.virt_err_y = 0.697237966806;
    msg.virt_err_z = 0.308764780389;
    msg.surf_fdbk_x = 0.803046534076;
    msg.surf_fdbk_y = 0.943035632873;
    msg.surf_fdbk_z = 0.586493111683;
    msg.surf_unkn_x = 0.403518152031;
    msg.surf_unkn_y = 0.435656415927;
    msg.surf_unkn_z = 0.734858253139;
    msg.ss_x = 0.943181827978;
    msg.ss_y = 0.150319180459;
    msg.ss_z = 0.551435678476;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FLDYBGRYVQSBKTGFYFMXLWEUEXAJLOCQUBHDZRKDJTGQVZHAIPAYNB");
    tmp_msg_0.dist = 0.35164416632;
    tmp_msg_0.err = 0.338362998751;
    tmp_msg_0.ctrl_imp = 0.147272895911;
    tmp_msg_0.rel_dir_x = 0.966206500805;
    tmp_msg_0.rel_dir_y = 0.502936018599;
    tmp_msg_0.rel_dir_z = 0.932542068338;
    tmp_msg_0.err_x = 0.209213362017;
    tmp_msg_0.err_y = 0.468012142494;
    tmp_msg_0.err_z = 0.725794344573;
    tmp_msg_0.rf_err_x = 0.74705721397;
    tmp_msg_0.rf_err_y = 0.754865379663;
    tmp_msg_0.rf_err_z = 0.349137972842;
    tmp_msg_0.rf_err_vx = 0.968784777248;
    tmp_msg_0.rf_err_vy = 0.652120521351;
    tmp_msg_0.rf_err_vz = 0.0454791178825;
    tmp_msg_0.ss_x = 0.651537185268;
    tmp_msg_0.ss_y = 0.818637416419;
    tmp_msg_0.ss_z = 0.858982864669;
    tmp_msg_0.virt_err_x = 0.975852586018;
    tmp_msg_0.virt_err_y = 0.14268938496;
    tmp_msg_0.virt_err_z = 0.503513479187;
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
    msg.setTimeStamp(0.874083954604);
    msg.setSource(4632U);
    msg.setSourceEntity(156U);
    msg.setDestination(59581U);
    msg.setDestinationEntity(165U);
    msg.s_id.assign("BDSNKQVAOUQXFGIRZWVMVMVOUNIUKUEJHDGQRQTFWERKSXOYNAAYZSBLNEQMHTWDKTDELJGHSARWNVQWYUCBBZPGUVSFLPGAZEXVZSHOPDCCOBECZEIIMMTCBZRAQCVPFJFTJZDEPMGKWHTWXFPPSJJLLJUNRNFY");
    msg.dist = 0.533420839081;
    msg.err = 0.0259144659599;
    msg.ctrl_imp = 0.503269023135;
    msg.rel_dir_x = 0.0845300045313;
    msg.rel_dir_y = 0.0956659051604;
    msg.rel_dir_z = 0.95195852466;
    msg.err_x = 0.404732601814;
    msg.err_y = 0.956038086464;
    msg.err_z = 0.653501424378;
    msg.rf_err_x = 0.468954149359;
    msg.rf_err_y = 0.689615597008;
    msg.rf_err_z = 0.228659489523;
    msg.rf_err_vx = 0.406999001748;
    msg.rf_err_vy = 0.636427724516;
    msg.rf_err_vz = 0.400007630806;
    msg.ss_x = 0.773178931667;
    msg.ss_y = 0.831465614563;
    msg.ss_z = 0.304401779349;
    msg.virt_err_x = 0.400404610817;
    msg.virt_err_y = 0.927976787359;
    msg.virt_err_z = 0.293031389268;

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
    msg.setTimeStamp(0.227040582909);
    msg.setSource(54930U);
    msg.setSourceEntity(151U);
    msg.setDestination(59215U);
    msg.setDestinationEntity(254U);
    msg.s_id.assign("UVHVHDUOMFPSXYLNIYNKJXRBANDKWRLRQLUJGNYESKCNEVNJMJ");
    msg.dist = 0.267135130648;
    msg.err = 0.728903419347;
    msg.ctrl_imp = 0.617270461635;
    msg.rel_dir_x = 0.816698219232;
    msg.rel_dir_y = 0.0215763901804;
    msg.rel_dir_z = 0.627256664206;
    msg.err_x = 0.681320442639;
    msg.err_y = 0.883515831508;
    msg.err_z = 0.408563176054;
    msg.rf_err_x = 0.806290937418;
    msg.rf_err_y = 0.60704936329;
    msg.rf_err_z = 0.625888799594;
    msg.rf_err_vx = 0.906861302373;
    msg.rf_err_vy = 0.0601954674185;
    msg.rf_err_vz = 0.308482016952;
    msg.ss_x = 0.763391928506;
    msg.ss_y = 0.716465816489;
    msg.ss_z = 0.304875796577;
    msg.virt_err_x = 0.225874963891;
    msg.virt_err_y = 0.618437787166;
    msg.virt_err_z = 0.602118784514;

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
    msg.setTimeStamp(0.504578391282);
    msg.setSource(30485U);
    msg.setSourceEntity(229U);
    msg.setDestination(54387U);
    msg.setDestinationEntity(179U);
    msg.s_id.assign("KNYEAKREUYRYIDBLURTNOGEDAFXSNWVLVPZAAPMRRMZZVDFGVXAQKUIJKHZAKVQCXXIUXHBIFYOAOUGIUHSJFHQWFDRINSECMLKGKQMQTXOPHEPWYRTCNHJSDSHMMSGYD");
    msg.dist = 0.194900391168;
    msg.err = 0.534851540087;
    msg.ctrl_imp = 0.662286112025;
    msg.rel_dir_x = 0.65716859734;
    msg.rel_dir_y = 0.877567231583;
    msg.rel_dir_z = 0.350665975938;
    msg.err_x = 0.0253791013927;
    msg.err_y = 0.240136436773;
    msg.err_z = 0.326819570418;
    msg.rf_err_x = 0.95414423892;
    msg.rf_err_y = 0.605623706529;
    msg.rf_err_z = 0.422313835681;
    msg.rf_err_vx = 0.974070878442;
    msg.rf_err_vy = 0.612557134799;
    msg.rf_err_vz = 0.524618500367;
    msg.ss_x = 0.489824656118;
    msg.ss_y = 0.75754315369;
    msg.ss_z = 0.9851331487;
    msg.virt_err_x = 0.1271844134;
    msg.virt_err_y = 0.337860954928;
    msg.virt_err_z = 0.485938836429;

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
    msg.setTimeStamp(0.0841254587011);
    msg.setSource(13723U);
    msg.setSourceEntity(136U);
    msg.setDestination(56387U);
    msg.setDestinationEntity(204U);
    msg.timeout = 13521U;
    msg.rpm = 0.491459025476;
    msg.direction = 149U;
    msg.custom.assign("VMONAYOZKSRLKFBASMEUSLXGASGAVXPFAUEIRZZPNCODYNMTBLDCBYMUPRRJUUYGWTPTLBXVKMLJXJHCBWCTXOJUF");

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
    msg.setTimeStamp(0.971794054079);
    msg.setSource(2189U);
    msg.setSourceEntity(210U);
    msg.setDestination(45239U);
    msg.setDestinationEntity(168U);
    msg.timeout = 844U;
    msg.rpm = 0.0461916723927;
    msg.direction = 54U;
    msg.custom.assign("YYWUQDRJLUDAMNUFCKIIZEQAROHYUDHRFOUGIACFTNTDGNAPWTTXYXYPFMOGOIEZRWCRSZAOOXIQBTYEPFKDDNSM");

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
    msg.setTimeStamp(0.642123342214);
    msg.setSource(36334U);
    msg.setSourceEntity(6U);
    msg.setDestination(26587U);
    msg.setDestinationEntity(207U);
    msg.timeout = 39626U;
    msg.rpm = 0.810511410924;
    msg.direction = 133U;
    msg.custom.assign("OTADVZKZYFBFLEXTLRQFEVIHHJVAIEZPZNCUHGGVCFXZIVKSYSMRXNYRFFWUOEDNMMNEXESTYZZJICIPUWTDRFJOCTIBM");

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
    msg.setTimeStamp(0.640108920198);
    msg.setSource(42246U);
    msg.setSourceEntity(103U);
    msg.setDestination(59889U);
    msg.setDestinationEntity(215U);
    msg.formation_name.assign("NMLQSVSCKQGKPLFHFJYRCAEPDJJWHMUJRYOGOLRDHXUMBSMMONQIVKLQNFCKUAQIDPSBFZZLGHMFOBBVXKOQJINYOEEIREIVYSFYRWKSYGFVETYZQMULUIPCYDRRBACIEJNNKSXLJPHHUYZZOCFFHICDTATGAXZRWSWDPJEVSMAVADICGZJBWGTTDLBRNAXTND");
    msg.type = 133U;
    msg.op = 61U;
    msg.group_name.assign("PUIEMJKTQVQCDWTVTRKRIDYBIWLTAHTIRFHOATCJGEINSMXLVBQMCJVQXHJVXANSWSZHYUKBWCNSVZPRQFYWLZXHTPSLPHLBDPNIEOXHGEVRFRGOXGKPGVMQCUKFTZCNOESSENRGCEI");
    msg.plan_id.assign("ELEQJXMIVWACEOWQJXUUSAVBZFNICRTDTLZSRTTHKYNLGDNCLXIYOQRPOUFGMJXRQURMWWEHSVBJPPTMELMWAQHJDAOZYQADTGUEOIPNUKTNFRFXOZYJBPGAOJQXXRSRVAVGHPSIWBKYUKMYVVKKFRHMCWRFYZQTEPIDBTGIJLOZCIGYYKDIXNWZKNDGWDQHFMOQAVZBOAVNNDCHBCUPHZXFSYPUKSFMNHIU");
    msg.description.assign("QNLCEFRYJFBLDSTYCCEDBFHAKGPJPFSDXWGGNPETLUUGOSJJQYFGUSRLQZMZCXBKEZHNOPYKIPCSNITIEXUOFLM");
    msg.reference_frame = 130U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27615U;
    tmp_msg_0.off_x = 0.0252410858639;
    tmp_msg_0.off_y = 0.907129612701;
    tmp_msg_0.off_z = 0.911825422586;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.995178227408;
    msg.leader_speed_min = 0.575164526602;
    msg.leader_speed_max = 0.556611221352;
    msg.leader_alt_min = 0.287165052737;
    msg.leader_alt_max = 0.771295283662;
    msg.pos_sim_err_lim = 0.112609213918;
    msg.pos_sim_err_wrn = 0.864576336228;
    msg.pos_sim_err_timeout = 52355U;
    msg.converg_max = 0.177628496904;
    msg.converg_timeout = 16188U;
    msg.comms_timeout = 34595U;
    msg.turb_lim = 0.236528761076;
    msg.custom.assign("DDPTGYEDYCZNQTSFOEYOGTVMCHICPQOLBFOHHUSLSP");

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
    msg.setTimeStamp(0.167782555649);
    msg.setSource(1741U);
    msg.setSourceEntity(217U);
    msg.setDestination(48252U);
    msg.setDestinationEntity(206U);
    msg.formation_name.assign("YQHCYYEJGNRVUUMKWJFBPQTWEZONBJCQKDPDYBD");
    msg.type = 29U;
    msg.op = 214U;
    msg.group_name.assign("WLSWXGBDVIAZPPGIAYJOQZFRCWUVPJNGICHHSEOZZPVFMGEXBSRULOWLBOEYVCRUVMQOTHRVKRLJFTTNNCJSCZODHSNEHEVOXJSIBOPBRLBJKS");
    msg.plan_id.assign("JTLLKDUJGRPSXJSBSXDAWMPTDAJHXYUGRZNGINRETYQDUZWRZVTXNOZLPBHENOKFKXTNTXRFVGRGPLLYZODNYGOYRSTLHMDVKVHICEWAHCJWOIRDJCSAOYUIEMMNCQABZCJMSSRETHADYXMUDTQZIKWQVQECQFGMCIVUPLLCEOJPWVEJFKPWHKPSCKIFXZBZCYLUVNGIHXLOYPWJGTHVKSFEONAQRKUZBUQB");
    msg.description.assign("MUQAEPIJUMHXRKMUUWBUBJRFRAJATPGLRDPCTVLDMZBKEQVMLMSRCKCBXCWUJSYRIHJCHGFXPIFNCNFKJPHHXZQYSISTGLHMJBWZWTATAUBEQSNZLVDZFIONKTYFXMKNQGREEGOZHDEUWOQFBCWDRCVI");
    msg.reference_frame = 89U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64024U;
    tmp_msg_0.off_x = 0.679660943667;
    tmp_msg_0.off_y = 0.69293553673;
    tmp_msg_0.off_z = 0.20994590815;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.781281864808;
    msg.leader_speed_min = 0.801862887356;
    msg.leader_speed_max = 0.0980991060349;
    msg.leader_alt_min = 0.682270042431;
    msg.leader_alt_max = 0.0424357887051;
    msg.pos_sim_err_lim = 0.091804166793;
    msg.pos_sim_err_wrn = 0.214530221994;
    msg.pos_sim_err_timeout = 31335U;
    msg.converg_max = 0.689977840238;
    msg.converg_timeout = 52829U;
    msg.comms_timeout = 26203U;
    msg.turb_lim = 0.767218406945;
    msg.custom.assign("OZLXCYBAEFUKKANOPKFVJJWZFSMRWRVIEJJBLKCXVGYXOESNFIBUQQOQOSMCNTGKLAMBACAARVTWFITNVXITGLUGXSDXHHMEWSUYGPFDBZVSWAMHREPXWNBTFLOTMQKHDDRZDCTZLNF");

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
    msg.setTimeStamp(0.782217083245);
    msg.setSource(37682U);
    msg.setSourceEntity(175U);
    msg.setDestination(55583U);
    msg.setDestinationEntity(124U);
    msg.formation_name.assign("OCFNKPXFPXEYASFRBDHMCGRWJGNVYYWMAIHHAMBXOYLTZSBDQXXMVWFOLSVILZHPZWEJOHCYFOHIUKQCULNDNPQLLVWSESREKUALJOFZZUPXWIECPOXGWDFYNCRNMGTWUJZZJLDQDBKTBUQPBPFVSYRKOGBXIJNFTEMJGIURTQDRMMPVWTTMUIAVDSRTTHIHRYUSQECK");
    msg.type = 198U;
    msg.op = 77U;
    msg.group_name.assign("QBKMSORFIHYRQIAVULDIWGASFJGXMWLBVLZHPOGMCPQYIGWNKMHNOVXESZEWBJZNUPIMPEXCZZRAEYOZADGONRJKELYCRCJDXWS");
    msg.plan_id.assign("PNHTUVJTWMDSAOHFKZQHFANOSCDHPEGGYDGZUISTOSMKGXZRWUEDYZBMOBKCEJREQPDXTFWOUJNNQBIBAFJQWLGRXLILBKDQVVMROQBMNYJYULEUIMXYLTHAOVKMGLBWIEYNZFPQETZZWNLDMHPMQICLESYYBNPKGVJFAXVKGQCACRHWPGZPABJSXWDIQVRSOEFBVIKRPGWJKRXHOXOCTSSELXIZFZHIPCC");
    msg.description.assign("WUVQXJFIWWYLHABBCNDQSHRWULJAVKMVZZBEQUPCMUCXLJOVQFRJZAZCPWPRYEDLEZFHINVGCBBAUKMNWOIILGNOZZOGAOSUSSTMJD");
    msg.reference_frame = 155U;
    msg.leader_bank_lim = 0.439668032086;
    msg.leader_speed_min = 0.124375472188;
    msg.leader_speed_max = 0.146874983934;
    msg.leader_alt_min = 0.167037410384;
    msg.leader_alt_max = 0.0446951315242;
    msg.pos_sim_err_lim = 0.775330156487;
    msg.pos_sim_err_wrn = 0.950540920548;
    msg.pos_sim_err_timeout = 29327U;
    msg.converg_max = 0.723541484878;
    msg.converg_timeout = 19883U;
    msg.comms_timeout = 58315U;
    msg.turb_lim = 0.2957311902;
    msg.custom.assign("YABGDKWMTJEVUBCKXJJLETNTRBEILHJSGMKONCYUVBMWOQWJLSJBWQXGFHVTJVHRMWPNSSTFHIVXFNPBFLQONLMFASCWCERZAQIBQGFASPPVIZUTDSXUINJPIDEPUZXRHYTHPMRSQKOEUGLXDHXGCCTOOOHFWYKYNTKXGMSGVPIQIFHEAFWCKMWOTDXQQNZRLDVNDSHYAVYNUMLAJDKYVCXKCLEUFWIJYIEQZRRRRPEZOYGADGZZBCLUAUP");

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
    msg.setTimeStamp(0.708045680624);
    msg.setSource(53787U);
    msg.setSourceEntity(177U);
    msg.setDestination(7308U);
    msg.setDestinationEntity(239U);
    msg.timeout = 37212U;
    msg.lat = 0.242206953175;
    msg.lon = 0.428003043772;
    msg.z = 0.711818449472;
    msg.z_units = 62U;
    msg.speed = 0.753540420531;
    msg.speed_units = 44U;
    msg.custom.assign("DGGYKWERATYOLQKCASKEINSGWBHMHVDJNRMUBJUHSMDT");

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
    msg.setTimeStamp(0.456989961722);
    msg.setSource(30820U);
    msg.setSourceEntity(197U);
    msg.setDestination(1253U);
    msg.setDestinationEntity(70U);
    msg.timeout = 18224U;
    msg.lat = 0.709760398863;
    msg.lon = 0.214049458116;
    msg.z = 0.0534228426676;
    msg.z_units = 199U;
    msg.speed = 0.615665899067;
    msg.speed_units = 247U;
    msg.custom.assign("ZGQWONTJWFMOJBCHJAIECXGSRWYKNKYBRJXWLECHTVATC");

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
    msg.setTimeStamp(0.853826164921);
    msg.setSource(25793U);
    msg.setSourceEntity(225U);
    msg.setDestination(39599U);
    msg.setDestinationEntity(79U);
    msg.timeout = 62152U;
    msg.lat = 0.474079695767;
    msg.lon = 0.00209338552661;
    msg.z = 0.887605926071;
    msg.z_units = 15U;
    msg.speed = 0.865071760215;
    msg.speed_units = 43U;
    msg.custom.assign("FEZPTNZHGHXBSHGVKHJWTKBICPN");

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
    msg.setTimeStamp(0.293512219044);
    msg.setSource(6774U);
    msg.setSourceEntity(98U);
    msg.setDestination(7232U);
    msg.setDestinationEntity(128U);
    msg.timeout = 18570U;
    msg.lat = 0.935038878974;
    msg.lon = 0.223394777814;
    msg.z = 0.694888781938;
    msg.z_units = 132U;
    msg.speed = 0.202978240926;
    msg.speed_units = 18U;
    msg.custom.assign("WERKXEAZXUIYEUHJNNPVWVTUJSFFDHLIJHFMFYOCGJQUOCARXDTYQQBKVGGYPRGBTFMKWPIRMBHMOCKGUBGXYNPXSNTRELEFYMWHSCL");

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
    msg.setTimeStamp(0.962900169932);
    msg.setSource(20706U);
    msg.setSourceEntity(73U);
    msg.setDestination(60174U);
    msg.setDestinationEntity(164U);
    msg.timeout = 3481U;
    msg.lat = 0.468711572958;
    msg.lon = 0.312351643205;
    msg.z = 0.819356214457;
    msg.z_units = 146U;
    msg.speed = 0.403446443106;
    msg.speed_units = 203U;
    msg.custom.assign("FMFPCZKOIHZOREMDTSJYBUVANZAJLVDWXCRQGXDCHDPQMQUOMOBNFKHETONHZWLLJPWUNEJYBDGKWQXPCQYIFVSYBNCCATBWFETGGMTGTKSRXZBAULXMOHGGOXFTYPBOLHQFYFVIHRTZI");

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
    msg.setTimeStamp(0.023236248714);
    msg.setSource(28484U);
    msg.setSourceEntity(251U);
    msg.setDestination(41903U);
    msg.setDestinationEntity(78U);
    msg.timeout = 55840U;
    msg.lat = 0.892338385703;
    msg.lon = 0.989994790916;
    msg.z = 0.0907968361045;
    msg.z_units = 237U;
    msg.speed = 0.776448315339;
    msg.speed_units = 223U;
    msg.custom.assign("VOTQWYFSTTKSBBDRKMGQURLWIWGARESPIYXWYPJVYALNDEWVIGIGFRHTSZOJVFUFUKLZRXPKTQCRRAEGNQZOBNXOKDCALERFXJBMWPDACLHCZTCIWAHMBLSICTXPYYKRNOZSEUXKYXHVEBNISEHGMDSUPKONUDENCLQLIMUF");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.822492704482);
    msg.setSource(23327U);
    msg.setSourceEntity(33U);
    msg.setDestination(20356U);
    msg.setDestinationEntity(110U);
    msg.op_mode = 224U;
    msg.error_count = 58U;
    msg.error_ents.assign("QRDCQFIUTRCFSIJGVIVEYIHLENYQJICPFCIUJHHLJAUTTVOWVKUXYWOJFWKPZVLFDDJQHUIGYJLWMODXLCYQASYZPXHRVOAEABNDHVNKAHYNMTDHRBUQOPZTLGXBINZBASGSNXOGDSFXRMKVCQHBWEP");
    msg.maneuver_type = 13874U;
    msg.maneuver_stime = 0.852384524165;
    msg.maneuver_eta = 32644U;
    msg.control_loops = 2925066126U;
    msg.flags = 145U;
    msg.last_error.assign("UETFAWUMNTHWGQPGOJKFYHKAFTCGEMNPBFAIRBLCOVAPIFY");
    msg.last_error_time = 0.0519101154955;

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
    msg.setTimeStamp(0.371466538885);
    msg.setSource(33413U);
    msg.setSourceEntity(78U);
    msg.setDestination(62414U);
    msg.setDestinationEntity(70U);
    msg.op_mode = 116U;
    msg.error_count = 176U;
    msg.error_ents.assign("IUZGSXYXPHMDDYZJRFGMRHSNSHHLJMIPIVKADFDRMQFAWXPTYVRMSGBEEUGJGRVMWZFSUNZEXDSMHYPQOFXTRWDLOTLFYJPDXICLBUUCGKDBNKUEJHTCZINQZCLEWSOGZJPYCVHJICKTULNFYVYETBUQSNWQVPKXEDPWOTAQAVQTONWNBENQHMLJIO");
    msg.maneuver_type = 11408U;
    msg.maneuver_stime = 0.568964103155;
    msg.maneuver_eta = 60202U;
    msg.control_loops = 1805936839U;
    msg.flags = 191U;
    msg.last_error.assign("BVMROUGIUYRSISNFXIGUCLRVZMFSLFEHYKVGGTHBJQXYCEGFDVVJUNLIOTAXQYNJMDEFBSQMSXIWCIRBPBJVZQZMWHORREGWMEYHYZMUOKW");
    msg.last_error_time = 0.506173033242;

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
    msg.setTimeStamp(0.273392669513);
    msg.setSource(1550U);
    msg.setSourceEntity(99U);
    msg.setDestination(24372U);
    msg.setDestinationEntity(231U);
    msg.op_mode = 179U;
    msg.error_count = 127U;
    msg.error_ents.assign("KWDTWZGCXIHGVVNAPSRXDBVHPYEKHFFLFEXRYQMTZXJDLOVYOZSLULOREIXCZXCBPUECYGNDRGIWRDQMWBSRCOIQHGOVPPJAMUEXTAWGKEDJIRBJHFBQSUKCLFMBRAOMKYYHAWNSKVUQ");
    msg.maneuver_type = 24633U;
    msg.maneuver_stime = 0.123608489413;
    msg.maneuver_eta = 44902U;
    msg.control_loops = 3496877790U;
    msg.flags = 43U;
    msg.last_error.assign("YYBAZJMISVRECBQFLGMKTQPHBYXZLUZZJGWDVWIEAYHFUSPXKQONSHDGBBOORJHAKMAKFZNZZWOLEFFQHPLBKUZPRXJDIPNJHGPGOWBWWODKEQHFTPVMDAKBRMPVREWIJNUCCEIRNKVHPSYIVZXQECMUKDFJDXIOJQCTXFOUAFXIHAALULGMNSCITNSYTDSEYAS");
    msg.last_error_time = 0.459620923636;

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
    msg.setTimeStamp(0.795609916533);
    msg.setSource(36762U);
    msg.setSourceEntity(250U);
    msg.setDestination(24074U);
    msg.setDestinationEntity(229U);
    msg.type = 250U;
    msg.request_id = 61534U;
    msg.command = 136U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 9446U;
    tmp_msg_0.lat = 0.436770568181;
    tmp_msg_0.lon = 0.3450626097;
    tmp_msg_0.z = 0.446161880431;
    tmp_msg_0.z_units = 173U;
    tmp_msg_0.speed = 0.336285950429;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.custom.assign("GNIFWRGVRLGZCAPZUYJQLDNQXDXWRDHSQSKASCOTIYCZWCYLYESFXVQQRTCIPKMJKTVEBHYNPMZJTWMEPYMMDXONOWAPIKOXWNVIXDFASPVOWZPIAYHFCUTQEJGZGHBQQXABGBHNWWFKCZACOFDDVJTHTWXAXFVULNVLYOJUMNHLZTSSZFPUIMEEMEUSNLGPSREKIRRBKVGYYOOHTU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 3544U;
    msg.info.assign("OTHNNFATWBCTRSRLFKRYLJWBYYUNXCKEAXTWQGHNJFVAZLWARZFSKUMGIXKHDBO");

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
    msg.setTimeStamp(0.594583034437);
    msg.setSource(11527U);
    msg.setSourceEntity(17U);
    msg.setDestination(51474U);
    msg.setDestinationEntity(3U);
    msg.type = 211U;
    msg.request_id = 49348U;
    msg.command = 97U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.552073217571;
    tmp_msg_0.lon = 0.15491086805;
    tmp_msg_0.z = 0.250540084605;
    tmp_msg_0.z_units = 14U;
    tmp_msg_0.radius = 0.969159469822;
    tmp_msg_0.duration = 11086U;
    tmp_msg_0.speed = 0.545256038364;
    tmp_msg_0.speed_units = 98U;
    tmp_msg_0.custom.assign("LCQBSSQGFAUTTZIGHCKMKDBMGNNWSEDQQOLKBRCFEFYOJZMWOULUWWJBEUNRHGVZKWIZJHSRHSPXPVHLGTBZDYICGHECBKYQDPABXLUFJTOIIFPSDISHRRIHLWTCLPVUXVFPTFESPZDAFDEMOQAYYVOZMYONTTYMNXBJCXXKRWQWXCRJTYILNPFZNXOAAKBEBUMZZHTNGWPEUXMSJAGOAEQHPWUVMVFRRNECSYIV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15187U;
    msg.info.assign("KYYGPBDMJTHZIJFEPAKKMSXPSLRZKFFJWNVCWZMUMBENYTCLTELGKYODVRXLRLYWMRKPUMRYSCPQCVYIMWATDSXHIIFLXPCNIXEJRHCWZZXZQHSXFWQEHYFTVXLNZPOGWGBVLQIJETZE");

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
    msg.setTimeStamp(0.397107507579);
    msg.setSource(51457U);
    msg.setSourceEntity(24U);
    msg.setDestination(22032U);
    msg.setDestinationEntity(92U);
    msg.type = 169U;
    msg.request_id = 64920U;
    msg.command = 167U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 15690U;
    tmp_msg_0.lat = 0.176198335834;
    tmp_msg_0.lon = 0.593868740181;
    tmp_msg_0.z = 0.130750373792;
    tmp_msg_0.z_units = 177U;
    tmp_msg_0.speed = 0.816698986578;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.custom.assign("VWBRSFTYJOFUNWEYTDAZRQAJOVNMXZWDVPGAMOZJZYSTCXTFRGBKALKSEKNICOKBHDUGSVALEVNNXWPZVMEIEYWXLXMYONUYRZITDISELIKPHQDHVJQHMMBIRIYWXNKCXAFVLHQEJUAIBRUYNUFQDASPJXCGXIMWVLRWFRHPPVHOCGFBQTOMCMJC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53660U;
    msg.info.assign("TAAKAZELZCDOCAWVGHOJGMBHUTREAMXGFZZAMQVZXUXXCVUCTXLPDEWEFCOIDDBKVNLWVJIVBYSYBQGGRFUPFSLYFHTSEENYSMPTCVOMGVQHAQDVUPRZQHKNTHODSPXLYXYWCLXGBRIOJEBYKIQABLNSDBLGWNFK");

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
    msg.setTimeStamp(0.612636706883);
    msg.setSource(34217U);
    msg.setSourceEntity(15U);
    msg.setDestination(40350U);
    msg.setDestinationEntity(199U);
    msg.command = 242U;
    msg.entities.assign("TJSPLWWGFMFOLVVENOEHAZIDFYGIPKQTDBONCOSJEZKCJDACHCMEQQYZSTDVLQENX");

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
    msg.setTimeStamp(0.628231639652);
    msg.setSource(22362U);
    msg.setSourceEntity(245U);
    msg.setDestination(34703U);
    msg.setDestinationEntity(156U);
    msg.command = 80U;
    msg.entities.assign("NHBGKTQVIVSQHCCYTREAMQUEVYHSDTWLFILPTULHFXZIRSYQQEHEGZTGKSKNPPRKJJYXGWVKYWABXUHFXQUMRDEWIFOUFUBIDNPKKWHJBCEBYMQAOXOISPGGXCWLGMDMZYOEZYDMWVIUNTWIWDJJNTVRJPUCOQNBZFYIFNDLMZPFLASGJCNAEOPJNICTQFVMLTZBXMOCXZBODGGRKRU");

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
    msg.setTimeStamp(0.320099680679);
    msg.setSource(20280U);
    msg.setSourceEntity(134U);
    msg.setDestination(7839U);
    msg.setDestinationEntity(138U);
    msg.command = 38U;
    msg.entities.assign("RVOEMCAWDOQSZHBNBIWWDOVZRGLMDFAIFLSWOTEVQLSYGHCLJLSPPWCLJTKRPHYOZEVXIOQAXYSPQNXFCUZTGKWZOZUYFWVGJ");

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
    msg.setTimeStamp(0.572602732924);
    msg.setSource(577U);
    msg.setSourceEntity(252U);
    msg.setDestination(20774U);
    msg.setDestinationEntity(26U);
    msg.mcount = 30U;
    msg.mnames.assign("QYNHAOPIOYLPAJDXVZWVBLDBDOGCAXPTEMGRZAWVLECPPTINOVSUSCFSZRZZCDXSQQFOQDXVCLVRKFUUUBQIKFFRLSCPHIUKXJWHFZIWUPEWVWDOOSMKPEDTJIYXHNRISZLCBBFQCMQXADTNBUFAJSOMNYJJLECRYLLJVMNGHLGDMYMXIYAUPYOKTXJKHZMHEYGJOKCMKBGQSGQQAFTANRXTNWEIETAGHENEPUYGVFZWRSRGJVWZUINWBTMBR");
    msg.ecount = 16U;
    msg.enames.assign("KYHFHYIVRWIILPYLABAJHUIGYDQWPWEDLQPKXFGDHXZHNRSTZZBYCWDNRHBRHXEJBJQTGVDHNRZYGVTFURQBQMJEOZOXKUFTYFVRZMDPMECXE");
    msg.ccount = 138U;
    msg.cnames.assign("WKKLCISTNX");
    msg.last_error.assign("KDOXSUNYAGZTWOPSBRNHYTVCDFKQNSVBKWFCGVMTYRRUGAAUMZXYLQOUMHKFHPDKXEVDTDHGUPIRJLLNTXZIVYOEBPIWBAWULEAYFUJFJNLMAYENAOLBZZSTDZVSHFKLUWFWOYZJJECIJGCLMILK");
    msg.last_error_time = 0.293654336282;

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
    msg.setTimeStamp(0.153505209284);
    msg.setSource(8177U);
    msg.setSourceEntity(164U);
    msg.setDestination(27277U);
    msg.setDestinationEntity(144U);
    msg.mcount = 151U;
    msg.mnames.assign("DVOPFERIVKDHPLCMCWSXTSVDYGBBYJNRCYGFKISXHHNVIZLNWSCNVGPBZVOFYJDHXTWHINPWGTSZTNLOLGS");
    msg.ecount = 116U;
    msg.enames.assign("MRGTPUEFCQKTHRJOASJWASIOWPEOIVEGXQMYRWUBSEBMPGJEWCKSHQMXLYHKVMVLENMUIFOOCJKPRCPGHGRLYKRJB");
    msg.ccount = 192U;
    msg.cnames.assign("YCWMQQPGPHFVHQCUSUAZZFFDHDZSXVKDZOYSKAACUZWKEJQCWYOXUKQLQKPROVGAGGRBFSADGJLXTREMDLOSKYFOKYTYZJEAPJFEWWZXCBEWTMKIEXYXRNMYRPIVNXWULENINTVKUHLUKBDMWSAQYXPGBBZGVHJTCLSFIMOIXPTQLRUM");
    msg.last_error.assign("RWNGJRYXVONLUWNWFRTWGGFFYPLCMUMZXQHZSDLSTZUVFALTKW");
    msg.last_error_time = 0.930054607296;

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
    msg.setTimeStamp(0.62593663734);
    msg.setSource(39243U);
    msg.setSourceEntity(249U);
    msg.setDestination(8996U);
    msg.setDestinationEntity(98U);
    msg.mcount = 166U;
    msg.mnames.assign("CCIYDYDAGGOPXPIDSCZKNUMCGIMIPAKGWENLPGWTJSZRUZUXWNLVSWJBTBSEPCBUPTROPBWJXQXBTAIQRQGVYIPTILXOZHAUYMNOMQNDLKUJZRAYQXHMSOAJCBHGQJKWMGER");
    msg.ecount = 152U;
    msg.enames.assign("EPHZOXURQGAOGHSXWBFQXKDKCLDVYNUXMAYKOEKYLDVSIBGAWZABRAVFJIWXYKHCCUTISUIBRUVIMYLPCICRVCRZAJNGCDRNQOSICPMBIEWKVAFUUVWHEGCMLUMBNDDXOWEHHQHRGNGGOPSBBXREFPJJXAQRPNTWZAZKYQPXCBWZEMTJMDNOFTIOMESJTTWJHLUQZKPYHSDPVOELZDTFSNLDQEKNOVJ");
    msg.ccount = 235U;
    msg.cnames.assign("GZIMLAXTUDSEQDEOENHALJWYDICWNKKHJCOICDUDSGKYZKATFNGORMWNEUOQBQLPVGQMZKLKTVIMJPTNJEYPWANSVFRXDSANIOGTYNIHDTQZRLCFRRLCUHWMWWTVBBHJVBBSFUXLOTKQQIAMCIPFXAC");
    msg.last_error.assign("CTUPOKVIRWCNOQBXDELICNUGRYMVHOTRQZPWRLOAXWQDCSTIYJUDZPJBDSWBHKNUJGACRKKJCPUVNCJYGEXDSXFGXUFAPHAGKSGHHKOJGVZHIZHYEEZZFVYTWPOVMBFBNIQFBLCSSYAWHMBQETTACJOXEAQNCYVNGRXLLPFGWEUSIRLDHUXJUHDBTQZTYWERR");
    msg.last_error_time = 0.573521078416;

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
    msg.setTimeStamp(0.00472595995206);
    msg.setSource(56227U);
    msg.setSourceEntity(45U);
    msg.setDestination(52581U);
    msg.setDestinationEntity(124U);
    msg.mask = 95U;
    msg.max_depth = 0.240878619675;
    msg.min_altitude = 0.118989503868;
    msg.max_altitude = 0.244743339894;
    msg.min_speed = 0.156547750913;
    msg.max_speed = 0.00829024018624;
    msg.max_vrate = 0.453327430941;
    msg.lat = 0.0296215775274;
    msg.lon = 0.258667656622;
    msg.orientation = 0.238368642019;
    msg.width = 0.609356453169;
    msg.length = 0.978683306098;

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
    msg.setTimeStamp(0.0908114009188);
    msg.setSource(55153U);
    msg.setSourceEntity(134U);
    msg.setDestination(12923U);
    msg.setDestinationEntity(196U);
    msg.mask = 170U;
    msg.max_depth = 0.734547841769;
    msg.min_altitude = 0.126859478642;
    msg.max_altitude = 0.880929869805;
    msg.min_speed = 0.0456664518482;
    msg.max_speed = 0.0242233245313;
    msg.max_vrate = 0.548531049147;
    msg.lat = 0.509223667085;
    msg.lon = 0.257529189212;
    msg.orientation = 0.191487245223;
    msg.width = 0.156825592624;
    msg.length = 0.696351056178;

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
    msg.setTimeStamp(0.67943980026);
    msg.setSource(48952U);
    msg.setSourceEntity(21U);
    msg.setDestination(2290U);
    msg.setDestinationEntity(245U);
    msg.mask = 48U;
    msg.max_depth = 0.89070860792;
    msg.min_altitude = 0.362170916761;
    msg.max_altitude = 0.475580610273;
    msg.min_speed = 0.551973712869;
    msg.max_speed = 0.233099038531;
    msg.max_vrate = 0.596337525886;
    msg.lat = 0.961512123307;
    msg.lon = 0.0734496012444;
    msg.orientation = 0.733605535971;
    msg.width = 0.308999124059;
    msg.length = 0.807297898184;

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
    msg.setTimeStamp(0.65200377406);
    msg.setSource(40568U);
    msg.setSourceEntity(36U);
    msg.setDestination(40391U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.0948141228457);
    msg.setSource(55999U);
    msg.setSourceEntity(169U);
    msg.setDestination(1046U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.712954533257);
    msg.setSource(38714U);
    msg.setSourceEntity(232U);
    msg.setDestination(26594U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.254807201608);
    msg.setSource(2629U);
    msg.setSourceEntity(5U);
    msg.setDestination(56943U);
    msg.setDestinationEntity(101U);
    msg.duration = 40738U;

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
    msg.setTimeStamp(0.791800974604);
    msg.setSource(8788U);
    msg.setSourceEntity(249U);
    msg.setDestination(26040U);
    msg.setDestinationEntity(6U);
    msg.duration = 20946U;

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
    msg.setTimeStamp(0.591711930427);
    msg.setSource(59506U);
    msg.setSourceEntity(5U);
    msg.setDestination(16962U);
    msg.setDestinationEntity(44U);
    msg.duration = 8996U;

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
    msg.setTimeStamp(0.70325959887);
    msg.setSource(15605U);
    msg.setSourceEntity(248U);
    msg.setDestination(38916U);
    msg.setDestinationEntity(202U);
    msg.enable = 120U;
    msg.mask = 1143977967U;
    msg.scope_ref = 1877195641U;

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
    msg.setTimeStamp(0.185492253063);
    msg.setSource(3036U);
    msg.setSourceEntity(146U);
    msg.setDestination(59565U);
    msg.setDestinationEntity(163U);
    msg.enable = 206U;
    msg.mask = 499915611U;
    msg.scope_ref = 2789327522U;

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
    msg.setTimeStamp(0.481360114076);
    msg.setSource(64143U);
    msg.setSourceEntity(81U);
    msg.setDestination(50309U);
    msg.setDestinationEntity(38U);
    msg.enable = 203U;
    msg.mask = 3660844281U;
    msg.scope_ref = 1873501111U;

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
    msg.setTimeStamp(0.139366023021);
    msg.setSource(42664U);
    msg.setSourceEntity(99U);
    msg.setDestination(39624U);
    msg.setDestinationEntity(228U);
    msg.medium = 43U;

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
    msg.setTimeStamp(0.244246663562);
    msg.setSource(10961U);
    msg.setSourceEntity(161U);
    msg.setDestination(58189U);
    msg.setDestinationEntity(233U);
    msg.medium = 225U;

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
    msg.setTimeStamp(0.745604379466);
    msg.setSource(34384U);
    msg.setSourceEntity(154U);
    msg.setDestination(51536U);
    msg.setDestinationEntity(179U);
    msg.medium = 17U;

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
    msg.setTimeStamp(0.188542249072);
    msg.setSource(30721U);
    msg.setSourceEntity(97U);
    msg.setDestination(35849U);
    msg.setDestinationEntity(237U);
    msg.value = 0.214289650652;
    msg.type = 50U;

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
    msg.setTimeStamp(0.224672075808);
    msg.setSource(48554U);
    msg.setSourceEntity(221U);
    msg.setDestination(21358U);
    msg.setDestinationEntity(229U);
    msg.value = 0.374932200489;
    msg.type = 120U;

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
    msg.setTimeStamp(0.0491962807671);
    msg.setSource(55664U);
    msg.setSourceEntity(151U);
    msg.setDestination(3245U);
    msg.setDestinationEntity(63U);
    msg.value = 0.0317095175225;
    msg.type = 141U;

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
    msg.setTimeStamp(0.282111995454);
    msg.setSource(57821U);
    msg.setSourceEntity(57U);
    msg.setDestination(48342U);
    msg.setDestinationEntity(63U);
    msg.possimerr = 0.423007975567;
    msg.converg = 0.455257239199;
    msg.turbulence = 0.0578542616304;
    msg.possimmon = 165U;
    msg.commmon = 144U;
    msg.convergmon = 47U;

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
    msg.setTimeStamp(0.357511430895);
    msg.setSource(34901U);
    msg.setSourceEntity(222U);
    msg.setDestination(40308U);
    msg.setDestinationEntity(211U);
    msg.possimerr = 0.83445275388;
    msg.converg = 0.633836158463;
    msg.turbulence = 0.641627795024;
    msg.possimmon = 210U;
    msg.commmon = 80U;
    msg.convergmon = 193U;

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
    msg.setTimeStamp(0.91490562073);
    msg.setSource(45080U);
    msg.setSourceEntity(158U);
    msg.setDestination(12946U);
    msg.setDestinationEntity(104U);
    msg.possimerr = 0.737030334761;
    msg.converg = 0.835323098047;
    msg.turbulence = 0.417679086027;
    msg.possimmon = 251U;
    msg.commmon = 181U;
    msg.convergmon = 59U;

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
    msg.setTimeStamp(0.591144790278);
    msg.setSource(14828U);
    msg.setSourceEntity(54U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(118U);
    msg.autonomy = 112U;
    msg.mode.assign("FCFMSLQIGYBSQIDRTJOVTGBBIWMVEUNAEKJGVRFAZRHNNSIWBNXRMAHCVZYVIHKCCUXQKVNOLLDCWHZFJKLKBPMGDANXFYQTQMLFHNTPAPJDXDQSGWMOIXGYTPSCXQLXEEGHPDCUQOPDYJZEZQRYNWWWLWUBOJFMREATVHMBOJDF");

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
    msg.setTimeStamp(0.854312836582);
    msg.setSource(63974U);
    msg.setSourceEntity(124U);
    msg.setDestination(53883U);
    msg.setDestinationEntity(217U);
    msg.autonomy = 59U;
    msg.mode.assign("DESDRCZOCJLHHBXVCGMKKXLUECVHVPCBNHUZJIJIMUWXIWIGMCKSHPAKQQSKNABATDCTQDAUYCPUHHPUEWTTJOTPVGZTQXBXWLQOLASVSONYPQDWPMYMJJTLNDLAFVUAHOZRWITERTLDDIYFJRFBIEKHOZGVLEBBOKBYTNKUFZFYRSIVGAJCSFBRWGDVUSRLYZNRYMXYENGOPGFEGMM");

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
    msg.setTimeStamp(0.366618829371);
    msg.setSource(23431U);
    msg.setSourceEntity(64U);
    msg.setDestination(10629U);
    msg.setDestinationEntity(29U);
    msg.autonomy = 77U;
    msg.mode.assign("TECLACKSARUHVFHBPLLECPRRVWKAMAIQEBNCDPMPHTBDPOQXIJTCXNGCPLMLHXXSTFPWQYBKUEKGTEIZKCCBVWASTYFBGEZHQGYDEGFUWYROZEXKPRWWSPMJLQBJRIABGRHNJVUJJHNXINXRVDNSAOKQLUXJENOFGMUOLHJFKHVDWGNZKOSZVXQDSUILDTVLTYYCMOKYCZVD");

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
    msg.setTimeStamp(0.161700263586);
    msg.setSource(48567U);
    msg.setSourceEntity(230U);
    msg.setDestination(6777U);
    msg.setDestinationEntity(113U);
    msg.type = 85U;
    msg.op = 238U;
    msg.possimerr = 0.349421484804;
    msg.converg = 0.564414405728;
    msg.turbulence = 0.613358668746;
    msg.possimmon = 69U;
    msg.commmon = 36U;
    msg.convergmon = 141U;

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
    msg.setTimeStamp(0.317447298905);
    msg.setSource(53644U);
    msg.setSourceEntity(145U);
    msg.setDestination(11374U);
    msg.setDestinationEntity(114U);
    msg.type = 234U;
    msg.op = 94U;
    msg.possimerr = 0.16881225816;
    msg.converg = 0.142225570879;
    msg.turbulence = 0.327024949483;
    msg.possimmon = 253U;
    msg.commmon = 250U;
    msg.convergmon = 250U;

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
    msg.setTimeStamp(0.0517936733387);
    msg.setSource(45583U);
    msg.setSourceEntity(76U);
    msg.setDestination(33771U);
    msg.setDestinationEntity(37U);
    msg.type = 223U;
    msg.op = 249U;
    msg.possimerr = 0.895034285022;
    msg.converg = 0.933951517761;
    msg.turbulence = 0.506135062918;
    msg.possimmon = 137U;
    msg.commmon = 89U;
    msg.convergmon = 191U;

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
    msg.setTimeStamp(0.957471885227);
    msg.setSource(5096U);
    msg.setSourceEntity(161U);
    msg.setDestination(44836U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.0172996247693);
    msg.setSource(6077U);
    msg.setSourceEntity(119U);
    msg.setDestination(36259U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.82285001627);
    msg.setSource(24548U);
    msg.setSourceEntity(69U);
    msg.setDestination(7704U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.705003308885);
    msg.setSource(773U);
    msg.setSourceEntity(249U);
    msg.setDestination(52805U);
    msg.setDestinationEntity(109U);
    msg.plan_id.assign("KFYAYBICRDZIUVYTDABVJFBCYYDDAICMHHRVQBNEZEMJDDWDNQQMTRXLUFZWRUZNVMLGSWZULQLEMTGBSASPLCPOPAQTWCYJNAYOWEJXOAURISUKXJZUALLGHKKQEVIGOHFKOVWBFMSGEMBOLGEHJRSLHRPGDFGNTBQZHMVJCT");
    msg.description.assign("DRTMAEEFICWPPOYOZCWYAZUDVFBMZFOTQOUIUQWIZMGOME");
    msg.vnamespace.assign("VNJXXXIEBNVKUWCTVMVEFCOCRIGEGFFIILBKGLOCLXWSDAK");
    msg.start_man_id.assign("IMCHRDRNOKFNUYVXZCFZCBTBFABCOHYNSTQQOERAUGYHZMQSXTXOUZZSWFXMVGMCFNAWWBEPMETPRNVTCKQQODEFFIWWANVOBAIPGBRWHAYKKBIQYXJEKJHUKIRTSFZDVJTSGCJWCNIQGWWKMJEQYZBMFELDUIKYPJUPSDVUEHMYMTOIXSSVJABTHDAPUZXSHQULQVMLTCXSJPYLYBIDNGPPARDGLGKXPLWHCFDLUO");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QQBQFMOEWGMBJSUSSKVDHZYQBGFOTMNF");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.path_ref = 1904868736U;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.154241183145;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.375132786173;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.350990294231;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 141U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.779055523175;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.152283548135;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.85299890006;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 200U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.124214121631;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 208U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.671667743726;
    tmp_tmp_tmp_msg_0_0_0.flags = 0U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 59704U;
    tmp_tmp_msg_0_0.custom.assign("RSUEZOKRMEIVHGCSRVPHVBVAMACPCJGMGAZURKTIRATXLAQOEJPQIJZMBNPWZLHUMYTWUBGCWNTIFYCNNZWZEJVOURPCNUVOOQLGRGMEVDTEGQGETFEKBFNBDTNSJCZSWMBLCHOQVABLKZQDQXWLKUHKFSOYJPIFEGZTEXGQYTWMUWTXXFFDHWSCAYDIPXBJFLPPNMKHXFRDKLHUDKOLJYXIJONBYJDNUDWSDIQRSVRPVYZAFICYXAI");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::RemoteActions tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.actions.assign("GKHIPUSRBDYHMSIUAFAWRFKZODPWBFKOLWVPUJSQPUVZKDCXXQBEORNBVBADFCXPQJLWSW");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsNavData tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.itow = 3330539815U;
    tmp_tmp_msg_0_2.lat = 0.699453821335;
    tmp_tmp_msg_0_2.lon = 0.183882976158;
    tmp_tmp_msg_0_2.height_ell = 0.954509408598;
    tmp_tmp_msg_0_2.height_sea = 0.51237786191;
    tmp_tmp_msg_0_2.hacc = 0.697013492852;
    tmp_tmp_msg_0_2.vacc = 0.901992182878;
    tmp_tmp_msg_0_2.vel_n = 0.845584296183;
    tmp_tmp_msg_0_2.vel_e = 0.470839031111;
    tmp_tmp_msg_0_2.vel_d = 0.0113459057583;
    tmp_tmp_msg_0_2.speed = 0.138675549542;
    tmp_tmp_msg_0_2.gspeed = 0.205889570677;
    tmp_tmp_msg_0_2.heading = 0.795304286661;
    tmp_tmp_msg_0_2.sacc = 0.378305810403;
    tmp_tmp_msg_0_2.cacc = 0.889182686359;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::DataSanity tmp_msg_1;
    tmp_msg_1.sane = 23U;
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
    msg.setTimeStamp(0.605478151395);
    msg.setSource(53215U);
    msg.setSourceEntity(165U);
    msg.setDestination(37242U);
    msg.setDestinationEntity(202U);
    msg.plan_id.assign("GFTHSKCHAXPKLMEDYQBZADNRBKFCMJYGHMWVLPMJSLFVPZTCJIYCGBKWIEGZCBOXRZTQOLQBUIOEMAFVKDTMUAXAZTXPZWBNWDMKPVUVIOSBYKGDSAJRPGILUZSWATVSHCJUHBPYZEIQQYFHOFEDUTHTOUPULWANDNDHXZMFJQSXEYGIXCFILKHKVPAWRBSE");
    msg.description.assign("MDBLHHUMAUOJBGOQICMSENVZZWFPELIYUZTETHUMNARGFLMUDKAWJTAJTCVBKFTFKHMMVBOXXUGHKGVICBTYZIVPLZVQYRRSPUSITAIPHBSGQ");
    msg.vnamespace.assign("AQNOQTNABQYLDSKTWFGHUMLLZXHZVYTURPHNDVAIHZQFXWJJIKVOKUAKIBNICNYKAGIYPXVPXZWSIRSGDLWZJQGVKOSNETEMFBSWBVFMHALOZBCERHYJSUQTFGUFTTBZWBLYLULBUOCGIMDPTJJAHQFSCRRJIHHNGSCGTIREACRDDPRYDMY");
    msg.start_man_id.assign("KVDFZUIVIAFEFDZYMURWSIHOHY");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PRPKKZGLAIIKUPXTLJTOCBZVJECUHGCBYSMEODHWMVYMRCKVSIDFROGXKHHFWDLEMBIOFIWLIDNDIKNYJ");
    tmp_msg_0.dest_man.assign("HWRKSSIWVAFWFRKKPXECKDMVFPQXGNAVJGZXFPKKLKHHUHNGECHJTJWSGJTUEJTSFABVBPGXYHTPEUAQZQJDZGPYYLRUNLCRXODFIEVGQLBALCAQPVMEBPDQYNYANDUTMMXKGSWEYMOBIOWCQQZROBJZNFA");
    tmp_msg_0.conditions.assign("PQNZIXRHRPVBYLULGFDBKPWRCICJODKAEEUVTUKJTKZCELZNBWWVPDYUUFKCQHLLIVMLRTVNATXATHHEMVRSZTFJQYMMCKZTHIFBBRCNUENAUUIQDITHZHEGPTE");
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.606922842587;
    tmp_tmp_msg_0_0.lon = 0.440063757894;
    tmp_tmp_msg_0_0.alt = 0.593952013406;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::RSSI tmp_msg_1;
    tmp_msg_1.value = 0.176186887847;
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
    msg.setTimeStamp(0.271012789442);
    msg.setSource(6376U);
    msg.setSourceEntity(66U);
    msg.setDestination(8770U);
    msg.setDestinationEntity(238U);
    msg.plan_id.assign("HUPROFZJHFPPIAGITKPZMCASLICBGYCRYWYJGBHQNNDS");
    msg.description.assign("UGLIMQFGDOBFUGKKIGLVFZFPDUGUBEAIWZDKEBTBKXAXDYPSMYNSNZRDENOEMFXSLSQSJNVBYNZIVKOJOTRXKYWVFEGTDQQRWV");
    msg.vnamespace.assign("OCNSCRWJXFYBAEJSBEMHGXNFDUPKLOIOEQFIHYVPMLCQFWSETHAJYTCVQZKPGNADZNFAQTUWMDRPMWEBKGOXZDBUHWVMJRHKBWMAOCNYLRHYLKFKLPMJGIPMLRPKBJGDRCAOXXGNCFEQIIDIKNLMKSNZIRY");
    msg.start_man_id.assign("JQYFEKTTHBZPRMHXQDOXYNPPACLVUPYWWGKMDRIHBCESBMTVDVUYFJKKKVPCIDPTSLQNONNZUWZMIVYONGLLLZPWCIMHXBWYVECAPGNTQQSEYFDRAHRBGCXJBAMJBMZFKASQEFXGQEMVEADIACWSNQUZIAJBXCHJFDFUXUTSRJFKFTEBUUHNSTXLLRIY");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("BRZJLVNSJPVQOXHOAYCBHRQAFXITDIYWYKNMPHMPRASUCIHCKOCQFUJMWBGSPMWMKPDQZRCQOUHBONYLCDVUNVNJHYPAETKZIWBZKXYBFYPWIX");
    tmp_msg_0.dest_man.assign("XZFTTUERDXNNXPZVUACPBSMVZJMONQTBUZQLDEBWLLSOWLEBZDYKXJRYDUJIXYMVIXQCKZYACCISFDAPZWEBYCPNGWYDLMSWAVVNZBULOTDTQHQHGGTPYDVJHINMBKOYBTWTCFGPDGCOFBMXUHOOOJQH");
    tmp_msg_0.conditions.assign("RFWDUWCJUDBLVATWDQSFARPAXUIBMQQZRYWCDKIKAHXNPVSJRJKEQHO");
    IMC::UsblPosition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target = 44406U;
    tmp_tmp_msg_0_0.x = 0.301437697731;
    tmp_tmp_msg_0_0.y = 0.0887964596585;
    tmp_tmp_msg_0_0.z = 0.0877066951081;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.593154632965);
    msg.setSource(24880U);
    msg.setSourceEntity(144U);
    msg.setDestination(8572U);
    msg.setDestinationEntity(146U);
    msg.maneuver_id.assign("PVHPDJFIDYZDMPIMIMOWOKUPNLQBATBRSJBLWQXHQHMOQFHVTENDKOWMAEPUNRQXYJOQXNLSDUZGMEZIWHWSZIOWKPYGJVANUYBKJWDAAUQGFRMAUZDSOCGOLLFKBJCISRPHSCBLNZFALLCCDCSARKBKYLXVRXMZYNNTPQJCGVHWRFEBFUGIQIXEXEXDBCRKTK");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 14716U;
    tmp_msg_0.rpm = 0.0134884675068;
    tmp_msg_0.direction = 126U;
    tmp_msg_0.custom.assign("ZRYJWXBKCBPEKXWNIMGTZHUASCIERBVFHJGLCVJEWLRWLKSFMBIQNCDSTCIYYIHQEYAMKXCRTFUVRXDASMGKFLJQPPHAOJPAOWKADRAHNQZCYWGQTBYJAVYGT");
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
    msg.setTimeStamp(0.493715277966);
    msg.setSource(39238U);
    msg.setSourceEntity(252U);
    msg.setDestination(2682U);
    msg.setDestinationEntity(150U);
    msg.maneuver_id.assign("GJSFYXTNJCHVFRHZAINLQWQGIGRXZAJKDPHABPKQGAJASQFZWVCXSWNTKCUSZWEMJMSMRGMHBEXHGFPICYQVEDUTPWUPLPRFOFXEEZJYYWAMLGUHXDJOBCIZJGZNEUOSO");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.2324366198;
    tmp_msg_0.lon = 0.291222605507;
    tmp_msg_0.z = 0.0161469172531;
    tmp_msg_0.z_units = 99U;
    tmp_msg_0.speed = 0.652182434413;
    tmp_msg_0.speed_units = 209U;
    tmp_msg_0.start_time = 0.268477343959;
    tmp_msg_0.custom.assign("LNMYUNBBJOIULPAZXJGDUDFUXOFMZNYYEIVZUTIWPLHMSVFSFKVEBHDSEIDHJCEWIGJBVBBCAFGEYLTQARYZKVTTHAASDBUSOZKTYGJPAUYXOYPIJEFHPSODZHSCCLKIFGFWOLWKCCNQRTJQMPGXIBNYZQHMPUKJNGMWRCLOWXWNQUQGTLCRMASADKRRBBCGRNVMTNTEPRKKRHTDZPPQKNOHLWXMJZRVDF");
    msg.data.set(tmp_msg_0);
    IMC::VelocityDelta tmp_msg_1;
    tmp_msg_1.time = 0.416847159171;
    tmp_msg_1.x = 0.288785284264;
    tmp_msg_1.y = 0.167810782301;
    tmp_msg_1.z = 0.688154021308;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::PopEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("QVMQWOALBRMPRKXEZBDHYJSJCWWACKCFIDAGFTZLWIWUHGFCHDKWEUSHLRILVNGBCZYCNVQAPKKMYVH");
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
    msg.setTimeStamp(0.268040094923);
    msg.setSource(43943U);
    msg.setSourceEntity(64U);
    msg.setDestination(29087U);
    msg.setDestinationEntity(116U);
    msg.maneuver_id.assign("SWRDSWEPDNCQBWCDPMGUAWBXMKZOCWJRFTKKRCLYXFYAEJSNRZMHYLXUQZEGUGIACPLOUDLKTGOMUUIRHJAMNXTQPVXWBVGXZBWRHDCTWUBVHJABSZSDQNQOPHMAXZSIZVKRLSNFJKMVFEXNQFIPNYJZUMJKYTDGCWDYGTVYNFRUEFVESECYTVIDOKBLOAEOFHBFHLTRAEKMPEINPSHTYLOQMWIXQJIAPBQVLAZLJPSIVCUOONQBGFX");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 42315U;
    tmp_msg_0.control_ent = 207U;
    tmp_msg_0.timeout = 0.650460720908;
    tmp_msg_0.loiter_radius = 0.216360986379;
    tmp_msg_0.altitude_interval = 0.334556371807;
    msg.data.set(tmp_msg_0);
    IMC::Collision tmp_msg_1;
    tmp_msg_1.value = 0.18832949742;
    tmp_msg_1.type = 215U;
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
    msg.setTimeStamp(0.425023507557);
    msg.setSource(58366U);
    msg.setSourceEntity(107U);
    msg.setDestination(17060U);
    msg.setDestinationEntity(227U);
    msg.source_man.assign("GICQXHGMJUHDRSMGWWPJCLZEHMRLENOZLHUVDQBSULZPGUCRWUKTNSYFXXPVODLOXZBUIGQRWQBSDQMAFYSSTZRWBRQEMVJCNTQXVKFRATJVBYQOXVAOZBZKHUFATJOVOWKTPCPYYHICLPEEIMUIOTNMAATXEILSHWFJOMBKLNUDFDCLBVINPNU");
    msg.dest_man.assign("CSXQAAPMGDHMBFUJWLOARBBZJGQTEDE");
    msg.conditions.assign("YORMURBYLFLWORBKEJVBKREAWJASWDQPOM");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 48672U;
    tmp_msg_0.sys.assign("MDWKFVZLIWJJLZIHTGYUTAMJHPRLNWQSPKVDZIYPBEEPCFNJEDVEGXTFUQBXWOFCQWELBPRTXGPUBLTZWCHKTGCPPUADNRDXCAVXSSC");
    tmp_msg_0.value = 0.0105508661758;
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
    msg.setTimeStamp(0.335973141483);
    msg.setSource(2208U);
    msg.setSourceEntity(59U);
    msg.setDestination(50511U);
    msg.setDestinationEntity(209U);
    msg.source_man.assign("OLFNYLAJJSEZHKGVNVOXFXQKGOXUNHJXVACIXBMDWOUIYMCSOBVUYDUDTWPZQYMVQZIOEVNJSRPDZORNYXALHRSJUBOLUGMPPBTNDKTMFGHFXBGILVEPJNRVWBWRFBHEIHHXDJAQCEBMCIPAVVIKZKAFYWXMLTSGGTEQMJIQUWFYZOYATQALIJBHRSRANOKTLCEPZKXCEWZEPDSCQGCJBTQMPKZSKUZWDCTUDUFLHRANHRGIL");
    msg.dest_man.assign("MWPRCYYHEQVFJQDRTQKQVUIFVNHQBGUCLXLOHDBIFACRKDKWYTLZPIJREVCIOTNFOYGOOSUPERWBSILUDXTQPAAJBRUMNZUDDSAKCYCYJXINABHEYMEDRGJMOLNFAHBTKWMHUWS");
    msg.conditions.assign("CPPZHWEKUYFVPMYCSDQFPASKLGBQXBJACOLSYPWDYDVYCZHFTYEMMZIJAYILRMGSHROXREYZNGTSPPAARJHQXZJJUSJDOHWQVSWULSZJKYRCOUPNDRNLHKKVTRWCLORIFGBDIVSKDXBMFUQDITDSAIWXVNXZOIBAWCFTQAFUMTTVFZEPH");

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
    msg.setTimeStamp(0.278011491012);
    msg.setSource(59661U);
    msg.setSourceEntity(157U);
    msg.setDestination(31370U);
    msg.setDestinationEntity(188U);
    msg.source_man.assign("LVVTQCSTNFDZVANTFKIJTVAWNUVHPECWQASKANXKAMWYZBRRZYNZRMMJCZNQSSJIPUUFSSJESWJOGCJIDPUOOPGBFRXIPQHMBOHWBKZAIDCVGRXOZFESNPOZJFBUMCFOQCWIUIXFHXLGNLBCECBDHTTMTBMNJYTBARZYIEWKDLOEUGIRFWDQVHEXQJGUAGXKWALYIPDMRQTFMHLEMXDLKYLHYUQVOYRYKNHBGGOEEPVTHCL");
    msg.dest_man.assign("DSXYXVYIIDZROZWAECMRBDNYLYXPLSGKVCXATGPOMRWEAOOTUEZQEJEVFYFQIWQTXUWVYCNTRXRPZLOASRTHSIEGLJUKFPNSOPKTCYNUVITPMVHCFWQJWFJALMCXDHBHHNIBWQZYQOHREKKMTIMBURDDHCUCJONVHGNF");
    msg.conditions.assign("TVNZXOSHMLESTZEJEUVRFZULLANULIEDUQPITPXBJJPDIFXAKVUPIKSQYOZQPCFGYCBREFXEHYUEIJVMGVWPMOTDGNMMTALVXWGAHHXNUNBAJHUYYHLOLZZYDJKEHSMKBKMEWONCDNSZYGIXGKWSVSFCABCBPOOWTRITVQFZSMGKGYRJDCKNAXAFGBRQYSDNPTFELROHBAWCJDWZIYQBIJ");
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 189U;
    tmp_msg_0.error.assign("ZUEMMXMFRFEDTOKPNUKCKQRZBDVOJGLQVXIVOINFMCIRJLKSOUHDTXUPLPXVMEKFEHGQOLSZNJCPFIGWSGNVGAJHWNDTSMTILQVICVAJREBRAWIPG");
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
    msg.setTimeStamp(0.738311976729);
    msg.setSource(5611U);
    msg.setSourceEntity(226U);
    msg.setDestination(10237U);
    msg.setDestinationEntity(181U);
    msg.command = 107U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SLKGBOGIHBENFOATBVWVMJCRTIHCRLFMTNLAHEIIRVOBJOYSEPICZGDNMQMLSFESPNVPBIATWQOWDNERLKOMCWJVLOGXWGJUHGSFPBYUSLXLMSRSDYHITDYKXEDFMQMYEZPJFGTFZBUCWVYFIOYYAWBKCHYKZKRQXAJFXDLXTHPEIUMGWTQLQKPDSXPJVZUXOEIWXAKXAHTJQHRMVZDQAZTQFOK");
    tmp_msg_0.description.assign("AWLFXQSQYCRMPVOZIADHXWBPQAJDJEZTSIYESUGGFNCOUSNQMRKPRNCFEFKZCGFAYBHMINKTQPUBUEZXWPHJUDZBZCYXAHHTX");
    tmp_msg_0.vnamespace.assign("BQQHWIBWXMUSUOCIEYZSRIQJOEMRFXBAKGDATEGCBOGNOSMPIWOWFGS");
    tmp_msg_0.start_man_id.assign("LREABSXTUXAPTMPYOMRCITVDGLJQIYQGSZCEBPKTHVGQBWTPGGBQJXNMDGISWPKEJJIPEHSZUFUOWEFFJWFTDOBFYEPZKFALJAAZVVXCFUVQCZBXLHHOMLQKFOCAWRASAYXMTQEDITAPNAONMMNZGYUYDURMZKCJZDXEYOSWTVGGNQQICLCBKUKSWXRHHIMXBBNBLCNELQVNCRHYJUYYMURDNKLJSPFDUPVFRWID");
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
    msg.setTimeStamp(0.64764469978);
    msg.setSource(17795U);
    msg.setSourceEntity(54U);
    msg.setDestination(5808U);
    msg.setDestinationEntity(55U);
    msg.command = 172U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KIPTSRQTDXDNITNLO");
    tmp_msg_0.description.assign("BTZQGUOCPNWSXJKERXTJEIWWFKPAHZBTOGQRHCHRYEARXPVYZGAOJWIEMFHROFDJFFZATKQOBQMZIWEXDFQABSIZWG");
    tmp_msg_0.vnamespace.assign("TVNTOEVSBEWYGJNVCMAQVKRLJAQLSHFOGWLCHXTKOJRMCXXSHMDEIGEPVLTCYDQIITLNHYPRSDXAJCNXAGUFCZHDNGUZLUFGWMZFJPSQOCRLHMYALYEGSOZAJPFKUSWCVTNIIPTYYEXNVOAWNYJXMB");
    tmp_msg_0.start_man_id.assign("IVGYBPHUVFDSKHDPNLPPBADRGLCOXYCDTIMDFYETGWBDJZQAGQHUJXIXLHUSISUZHGCFCXNZLAOYFHOFCJXI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TLTWAMUJUQCBMXRYTKOCZJWAIYENQWMFVOXSSGQUHFWRXNKETLXZXOIRMDKMVWRESDUMGSPYDQGQGZIQRFVDAPDZRPAIOFDYPHYPBDLBMAQTFCAFNBLGRNXXNALHXFNZRPCBIZVJLUKLYJVAGUUWQ");
    IMC::FormationPlanExecution tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("DCZMIOFAYSYXAEMBIPHCRCNQHXVPYKHORJUEKTPBTJQGFJIQWTSJWTMWOVQKYGOHZXSYLACZZZKUQKVNCSFNEMFDNJXPFJG");
    tmp_tmp_tmp_msg_0_0_0.formation_name.assign("UKQAQBWLCKHGHCCWTTBRNMWSRNTMQIPHFRPSDBYIJMSQEGALPZKCDPBDDFWXVNRBJTPMSFTFWHSTAVSRYXQIFVYAOXYUZLDNTVACJKVOFXRHNWEFKUYYDOZBPAJWZKRWHUKFZNOJLLVLMMMPJEDKNOIEZTGJFOUMOJDPQBHBIVUAXUGLVNKYHEQQLXEIZWERUSHONFIACDJOLIGCORTZQPGBG");
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("KNYQBXYJBTKRYXSHUDNMYUNFTOFCVOUVLWHUUZJGMSNXWIHDSQZJTMOQUICDESWARWOFRQVTPWDKAPRFNJOSGOTGMNWWK");
    tmp_tmp_tmp_msg_0_0_0.description.assign("XDUNWCYJVELESXFTGBPQZPJKESZUVGVRQOJWLYNDRHXHTHR");
    tmp_tmp_tmp_msg_0_0_0.leader_speed = 0.674494635548;
    tmp_tmp_tmp_msg_0_0_0.leader_bank_lim = 0.470943919562;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_lim = 0.878416565553;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_wrn = 0.334912811797;
    tmp_tmp_tmp_msg_0_0_0.pos_sim_err_timeout = 42843U;
    tmp_tmp_tmp_msg_0_0_0.converg_max = 0.276904569607;
    tmp_tmp_tmp_msg_0_0_0.converg_timeout = 15265U;
    tmp_tmp_tmp_msg_0_0_0.comms_timeout = 59483U;
    tmp_tmp_tmp_msg_0_0_0.turb_lim = 0.0295860342377;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("TSSHFEGPTFNKBMVJCSZWIEYCOZMLEBDSNDSOUBOVCVXBYTRTGFZKAHGVUJJDJTJFGLDNQDLJJQCUWUPNFCWYPRGAWTQOODBIROPGXZDPJUCJRVOYMCLFEUYNRHHSIRYNKLBMQQQICA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::ControlParcel tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.p = 0.345199873026;
    tmp_tmp_tmp_msg_0_0_1.i = 0.212482702054;
    tmp_tmp_tmp_msg_0_0_1.d = 0.731199519883;
    tmp_tmp_tmp_msg_0_0_1.a = 0.282261833487;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op_mode = 187U;
    tmp_tmp_msg_0_1.error_count = 73U;
    tmp_tmp_msg_0_1.error_ents.assign("KEVYGWJNNOUTQBHVLNGMZTJMZSBJOWXNEJKAAMBTXZBVLJJZHRTMSJQZIQCFMPINRCYMILSNPYLCPAWTYAQYCJFTSUKXEMLTDGOBQHLXFHDEEHSKYXVEL");
    tmp_tmp_msg_0_1.maneuver_type = 22352U;
    tmp_tmp_msg_0_1.maneuver_stime = 0.558469264162;
    tmp_tmp_msg_0_1.maneuver_eta = 44158U;
    tmp_tmp_msg_0_1.control_loops = 2419328687U;
    tmp_tmp_msg_0_1.flags = 39U;
    tmp_tmp_msg_0_1.last_error.assign("VRICOCCZMNJQOWNJUDCTRIBLLUYF");
    tmp_tmp_msg_0_1.last_error_time = 0.895727219738;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.115033833582);
    msg.setSource(54293U);
    msg.setSourceEntity(207U);
    msg.setDestination(39278U);
    msg.setDestinationEntity(211U);
    msg.command = 240U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HUFLSVPQYEFZGXRXENGOWJRNDJPAPMCZGZZBTMTFZULXYLETYYHMCRQZVUGISWLKJZUIYHXVZASEOSDKFKKFPDWWKSOLNABPCBMQWXCOSNKMJACDPMRNVBLNHIETMLHGRVCOIQDDLQOTRWWGUIOFNXQEYKJOFJSPTYXACZRHLFGAIMYAPICNVGJ");
    tmp_msg_0.description.assign("SIHBZKGUGILJWCXWQNMPPEBTMOCMDWHMXKVPVCHVFEVGCSNQSUIKPUALEVONRUAEHTJDEKJZTSKPLLFHHUENKTQJYODJLUKZPZFSXTGZXARAHNDNVOIIMLWYVISCIIQFLSHTLMRFXVPUCKYDWFORTCLHFTMPQYUJWKDNWRWR");
    tmp_msg_0.vnamespace.assign("YRQOASXHYMWDQYPWJPMVIPSQAJYQQHXPZWDUZVFINQSUIVBGZTZNNJBURGKWOUBOWMXRSNLOOGIGSVOGTJZREHLCPAIWACAEHNANKDEXKWTRMMV");
    tmp_msg_0.start_man_id.assign("NZZKGWKPLMWZSQSIXOSHQLIRSZULZTBODCSRPOBBDPDAAVVQNWZUVBACHUIHNWXEAMHTYPDKWDYMEXUFNNLFGQEGTGVJVRBXIDYFRBFJJISBKWENLIDIEEQJIFPUEYNCMPKMFPARJTKQKXSFZWZWBMKDHTHKCGCQGCHCIORWZDCOPMTRIHCQVGNTMTVYYXCLQOGUKJAFONFVJPAEBFYBSRLLNJOYUUUJAZAVO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ZNFSKLAOJGDXTBYTAEKBQLKSSQKZZVGXIVBWOEEAWQJRHJNOGUJMHMXVRDOUDZCFGWDZBHTDTTYLDXISMPECWDGYJJUPVSEJYTXIDDFUVBCICLVILPNPOIVEDKKOPQRWEMAQWABUQKJCSJHKPRIQN");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 30985U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.865410946998;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.548471467718;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0953369005985;
    tmp_tmp_tmp_msg_0_0_0.z_units = 160U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.870614443674;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.837595789449;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.959622759046;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 104U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DCFRDFBNIZEEHGIRRIYEHAKAEHACXFHDYWMVCNKZVNXTEOUVTBWIZKIJXLZFOIXCOFGKRLSUPRMEYUKMRJDTGHBKBQSLQQJDFOOLMSTAWHJUVHQNCSDWNATJPAEXXRBPIPJGSFOKYSLNUAGGUVTXXPJAVVW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DevCalibrationControl tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.op = 194U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::WaterDensity tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.566265062611;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredRoll tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.419088229486;
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
    msg.setTimeStamp(0.852860125439);
    msg.setSource(40118U);
    msg.setSourceEntity(178U);
    msg.setDestination(36366U);
    msg.setDestinationEntity(35U);
    msg.state = 142U;
    msg.plan_id.assign("PKESSWKLVO");
    msg.comm_level = 229U;

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
    msg.setTimeStamp(0.651068731265);
    msg.setSource(60962U);
    msg.setSourceEntity(179U);
    msg.setDestination(53552U);
    msg.setDestinationEntity(239U);
    msg.state = 39U;
    msg.plan_id.assign("XNPIEDRDXLTZKYCTMBNGUKAZQHSQRIBFDUWUBZZNNEAVBNYPETHBGLSOJJFFNOPOKYEXHGNHNCDDOILWAXQDJMJFFUMQMOOTVXBWLEIEJUTJZVAQYZAOHVKEPTKWLNGZTHWOQGXSWTCCSSMBPCEARQQVUPHVZHCWXVUSRYFUVJRWYGGTZDMLLZSFTYHSAXWQFFIJSSILPQUVBCIRRAIYPYMRBJRKLDMNMAPEVJKYKIKOEXOM");
    msg.comm_level = 37U;

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
    msg.setTimeStamp(0.415743550421);
    msg.setSource(61047U);
    msg.setSourceEntity(127U);
    msg.setDestination(65464U);
    msg.setDestinationEntity(14U);
    msg.state = 218U;
    msg.plan_id.assign("LHINTXHJBPIGSLCCUVAMCV");
    msg.comm_level = 187U;

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
    msg.setTimeStamp(0.482391115938);
    msg.setSource(47368U);
    msg.setSourceEntity(52U);
    msg.setDestination(25014U);
    msg.setDestinationEntity(139U);
    msg.type = 195U;
    msg.op = 241U;
    msg.request_id = 11063U;
    msg.plan_id.assign("UCNUSJAGQRPUOPBNNOFDWZHMISDDCKOCLIHCSCKDRSNFOWCJEWMXDQPPQSEBYPFJTEIDLVRVLGEIQWHSQPZFJILOCRRDLTZBHBUPEVJJGGMCVEDFJLAMLKHBEARXWGZOKFEOIKMNCXUYEWIZPFQTXQKBTNMMZJAWYKGGSHKLUUOAJQHZTAAXNUVHTENPZ");
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 153U;
    tmp_msg_0.value = 0.81961383313;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MGZYFCSMSKVQCGVHJBQPMEOQWRYGUAQNQVDTTTUHMRGUIRCKWBIAZAUEMDZZDLDDTKYVJPHALJUKTSVRQNAEXXOMBUWHNLASLWSLRHZTRZKDFOGIWVWSTIBEWEIPMBCUCEYHXBKDJSNXYLTXCRIAKWPPPHCUVNIJQQLZJASULXAVFKBNPIDYGJBTKGFHENXDOJEMOQREHMODOSXZMTEYFXXHOGYSFONCIFQKRCOZPF");

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
    msg.setTimeStamp(0.247092407056);
    msg.setSource(45421U);
    msg.setSourceEntity(215U);
    msg.setDestination(35871U);
    msg.setDestinationEntity(149U);
    msg.type = 159U;
    msg.op = 195U;
    msg.request_id = 46371U;
    msg.plan_id.assign("OKIENXQAVCMNYRATOQXEJGWKEKRYNQNQGPBCYERBJUBTUSXCGLGYCVSJOXOMTSZBWAFHBASBXAHDFVOMAMXUDRAJHHLOTJFSHMWVPDUMMICBOQSKEEWDVCKZMUXPFJBHIWGQIIXUVPZFNNAJDSPIKUPDGRQMCUFCIYTDRWWRCASEBPEZJYXHYLYWDZZMRJJQLOKQZDPGDECIUNLPTLLVRKYBIPFWZSOHFGVELZTVNVTGFTTWZFLXHLHRNIUGYA");
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 16853U;
    tmp_msg_0.duration = 12825U;
    tmp_msg_0.speed = 0.922718074404;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.x = 0.630460149153;
    tmp_msg_0.y = 0.7700861097;
    tmp_msg_0.z = 0.742079315061;
    tmp_msg_0.z_units = 0U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BNMVMSPDTJJTLIIYVRMQTUZPOUQFPHEGHRZEMRSRJYMNJHDGLLFEXBMOUDYLFSPDOAHBZTAAFIWXABOQGVXQSBBCIECOREQJRXQQPNMASKASSWDTGCNVNFMPJXUQSXQMWIULVCUFVVYNDCHWXJGUKWEKMNBCCOO");

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
    msg.setTimeStamp(0.283549271586);
    msg.setSource(24601U);
    msg.setSourceEntity(96U);
    msg.setDestination(35728U);
    msg.setDestinationEntity(94U);
    msg.type = 139U;
    msg.op = 9U;
    msg.request_id = 56321U;
    msg.plan_id.assign("DUNVCAGGJFTAQDGLHSWTHXSYAPWLOQUHKMIJDIBLJHVXJFHYUKRYASDGBKFKZUVEIGEZWYXQFDOOBPULUCPRTGDTAKMRDWGWFRKFTZNNHLTFYGRVPZNIXXNDCDIBEZPPBDOZMLJLXJRZVSEVEKIRVTXJAWQSVUTIWQIOQENJZRNEPJGQECYUBWMFSKTMJWLVPCSKOFCUXBYBAMPQZMYNPZAXORHQKNTAMFQMHCB");
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 220U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.637160263595;
    tmp_tmp_msg_0_0.speed_units = 75U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.348714853073;
    tmp_tmp_msg_0_1.z_units = 93U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.794299505914;
    tmp_msg_0.lon = 0.995733576226;
    tmp_msg_0.radius = 0.789606553688;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QASBSJFIGDAIBPCCTNIRJWESIONKJFJUJGTJIMVHIRSYAYZGSPHCKLPCJMUTEPNLZWOFCXAHVNPWBWAGAOWFRSHXDYKTGILURTEOGVVVSSFUGVBRJRNHLLKMXMCOZQYAEQBZBGKPVELFHOSAXWPUTEIFTBJDWXFJNCHDZMKMDCTYOVAQEXNKWVKQLQGPBEOMRXQYG");

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
    msg.setTimeStamp(0.694406975006);
    msg.setSource(20268U);
    msg.setSourceEntity(103U);
    msg.setDestination(53236U);
    msg.setDestinationEntity(225U);
    msg.plan_count = 12054U;
    msg.plan_size = 3626990243U;
    msg.change_time = 0.941999889249;
    msg.change_sid = 32335U;
    msg.change_sname.assign("CABHQZXJACQQSJIIZGUURQSHVXYXMYOWKGTEQGKRLPFWAHDSMLTOCDENLOEMKEXLEXJZLVFMEOJRHNBYD");
    const char tmp_msg_0[] = {-24, -82, -83, 118, 86, -91, 17, -126, -28, -108, -61, -102, -87, 69, 3, -38, 18, 47, 121, -123, 49, -124, 30, 24, 79, -122, 101, 69, 69, -119, -83, 15, 5, 102, 61, 72, -99, -52, -62, -94, 47, 121, -94, -71, -10, 115, 30, -19, 17, 3, 21, -33, 119, 37, 70, -86, -122, 20, -1, -75, 27, 31, 106, 122, -63, 106, -30, -31, -31, -83, 16, 81, -64, -73, -41, -83, 66, -73, -28, -52, 86, -75, -70, -1, 35, -42, -9, -61, -35, 13, -56, -112, -24, -75, 26, -34, 66, 43, -8, -45, -56, 37, 98, 92, 17, -128, -9, -58, -56, 19, -90, 48, 103, 25, 83, -62, -88, -8, 37, -54, -17, 58, 83, -110, -115, -7, 20, -18, 57, -13, -113, 93, 118, 31, 71, -75, -113, 45, 117, 47, 24, -96, 10, 112, -126, 76, 3, 17, 13, -97, -121, 50, -83, -2, 41, 83, -85, -59, 83, 70, -104, -123, -126, -10, -86, 101};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NEFIBJOWOPHVNWMYKCBCIWSEJKYDKDTWTZSMQUTCEUHYYHGRJGBNDLVVNQHXPWQEKVGHMDQULUWIFCPAIGCMDIMAVNDDFPROEAITNRLLQZCLMCWQGVCAUPYMQMJUTOMXVBYEZVFRSFTOKBZAAHYSIPRAPHHREOOXXLRRSABQJBSZBJGFVIGJSDJFEFMHXZNNUCOKPESXKXAJSAYQNDL");
    tmp_msg_1.plan_size = 44291U;
    tmp_msg_1.change_time = 0.00696228831222;
    tmp_msg_1.change_sid = 9329U;
    tmp_msg_1.change_sname.assign("IRBAAAERQYXNIMOLSV");
    const char tmp_tmp_msg_1_0[] = {10, 60, 71, 40, 76, 110, -39, 71, -26, -23, -83, 89, 74, 62, -4, -46, 3, -37, -94, 71, 26, 57, 107, 30, -6, -11, 106, 126, -62, 73, -125, -106, 121, -68, -67, -108, 94, -21, 86, 117, 112, 61, -109, 122, 57, -67, 27, 17, -121, -8, -114, -122, -19, -110, 100, -128, -15, -10, -99, -68, -106, 50, -12, 59, -105, 10, 108, -114, -101, -3, -30, 49, 103, -50, 126, 92, 28, 23, -37, 65, 40, 11, 23, -57, -104, 103, -125, -108, 89, 67};
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
    msg.setTimeStamp(0.653011535205);
    msg.setSource(17860U);
    msg.setSourceEntity(234U);
    msg.setDestination(46800U);
    msg.setDestinationEntity(124U);
    msg.plan_count = 54061U;
    msg.plan_size = 2150424514U;
    msg.change_time = 0.666606659997;
    msg.change_sid = 30441U;
    msg.change_sname.assign("SEKBGRFEEYZLEYNUOIMUDCHFJKVTQFNJSPOTGULCICIVMGMQLRROODTZANGJKCHBXBGXZIEDGALKBVVQATADPOXLDZFXTQJRFRWOBPGSPTLEYOYTIUDNMKGMWZYMVIACMVNLQFEWSHZCEBWTPYAYZPLDJXAJRNRNICO");
    const char tmp_msg_0[] = {-17, -4, -16, -11, -22, 82, 7, 71, 16, -28, 28, 47, -34, -10, 96, -109, -92, -3, 112, 0, -49, -126, 24, 81, -112, 19, -39, -78, -56, -5, -51, -95, 31, 123, -43, 61, -70, 116, 8, 6, -126, -16, -100, 66, 62, 122, 4, 78, 24, 10, -78, 29, -80, 93, -110, 89, -53, -22, -22, -1, 100, 41, 9, -110, 19, -47, 32, 7, 58, 7, -110, 95, -98, 19, 123, -120, -63, 113, -71, -108, -127, 108, 39, 43, -92, 25, -85, 82, 106, -111, 81, -46, -47, -97, -80, 81, 122, -21, 25, -20, -58, 17, -116, -34, -7, -97, -53, 124, -103, 1, 106, 35, -2, 52, 78, -125, -113, 70, -19, -66, 107, -65, 108, -5, 73, -98, -118, 54, -71, -88, 123, -121, -38, -72, -55, 85, 88, 100, -92, 104, -13, -114, -20, 100, -77, 72, -69, 18, -120, -120, -56, -1, -1, 3, 112, -87, -41, -43, 36, -116, -49, -83, -68, -87, 126, -16, 15, 47, 72, 44, 63, -39, 114, 53, 7, -117, -117, 95, 114, 81, 56, -90, 118, 88, -68, -62, -56, -36, -117, 58, 4, -35, -48, -115, 84, 92, -39, -13, -43, -121, 16, -71, 47, -29, 76, -53, -17, 70, 99, 48, 82, -27, 31, -120, 108, -86, 59, 20, -46, -113, -51, 94, -16, 117, 102, 41, -66, 34, -3, 19, -32, -100};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FXVNHYFQEEWWJIRJQNKEKRBZIWBMVPWSXZMCMORAGVBZOAM");
    tmp_msg_1.plan_size = 18338U;
    tmp_msg_1.change_time = 0.0345048131765;
    tmp_msg_1.change_sid = 65119U;
    tmp_msg_1.change_sname.assign("AUTPBVDIDBLHFHCEZNGQOREFSRMKLNFMLFIVTLCVJQDXNUCWYEDRJNMNCPNIWEGVXGAYABWHXIMOSXIUKKCQZDIPEYHXXFMLZUODCZRKTZBOJGRZNTSBLGOLPSPKAAAJRIKCOIRSYNJHMSKYNERXSTSCUUMPVEKHFYYGPQJFPBMYGISQAFBHTBLZZQHVDAWWAOWZQJXVFVEUHBTSMDWKOU");
    const char tmp_tmp_msg_1_0[] = {-58, -22, 63, 4, 119, 110, 65, 50, -19, 55, 103, -109, -24, 14, -42, 119, -92, -61, 24, 125, -40, -105, 61, -25, 32, -17, 18, -61, 67, -64, 86, 31, -125, -38, -118, -89, 5, 64, -114, 58, 62, 83, 13, -106, 76, -43, 102, 90, -26, -54, 1, -27, -34, -118, -31, 69, 5, -59, 56, -89, 47, 120, -63, 38, 115, 66, -51, 48, -7, 71, -104, -67, 100, 62, 114, 90, 108, 66, 89, 119, -11, 111, -66, -117, 55, -97, 93, 123, 4, 39, 5, 62, -78, -59, -89, 69, 57, 8, 52, 25, 92, -98, -12, 32, 74, 11, 43, -56, -15, 60, -62, -39, -53, 12, -101, 65, 13, 76, -65, -8, -97, -105, -100, 57, 82, 122, 61, 96, -88, 48, -14, -20, -50, 26, -115, 64, -107, 59, -53, 108, 121, -37, 61, 42, -71, -56, 68, 121, 102, -120, 120, -12, -44, -6, 118, 119, -108, 38, 96, 92, 94, 107, 104, 119, 12, 6, 48, 74, -78, -3, 24, 70, -50, 46, 14, -29, -18, -50, -9, -19, 84, 120, -31, -23, 76, -93, -115, 67, 47, -119, 9, -42, -10, 117, 121, -25, 17, -40, -70, -88, -115, 124, -108, -45, 126, 75, -95, 112, 58, -2, 79, -115, -18, 58, 46, -53, 63, -51, -2, 92, 48, -29, 82, 118, 54, 113, -9, -100, 126, -93, -62, -101, 103, 102, 6, -31, 30, 36, -102, 59, 68, -16, 40, 49, 55, -61, 119, 38, -48, 9, 110, 13};
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
    msg.setTimeStamp(0.591316642128);
    msg.setSource(56529U);
    msg.setSourceEntity(56U);
    msg.setDestination(63798U);
    msg.setDestinationEntity(24U);
    msg.plan_count = 11156U;
    msg.plan_size = 601790528U;
    msg.change_time = 0.6520741433;
    msg.change_sid = 32453U;
    msg.change_sname.assign("NDTSQUSJSNPHAYZKPHYEYYWBURKUCGRVCQJPXGRRZWZSZQHRSDICQAXQBSPHRALDOCIGLRWVWVKZDWAUOQLOYZXQWKSUPMTFTGCVLRHFQJJBEILYESDQBYJJLKOZNBMDEOITJMPINFHWZBGDALCYMCVYTUOAFXDMT");
    const char tmp_msg_0[] = {95, 89, -37, 49, 96, 92, 85, -26, -44, -26, 124, -19, 116, 36, -73, -105, 25, -23, -126, 87, -107, -2, 105, 25, -27, -1, 88, -56, -3, -94, 78, 86, 40, 57, -2, 17, -75, 67, 33, -28, 40, -59, 9, -109, 94, 124, 30, -95, -84, -27, 55, -127, 23, 35, 53, 20, 15, -127, -89, 60, 83, -120, 57, 36, 105, 117, -74, -99, 81, 103, -98, -91, 9, -32, -96, -71, -59, -84, 77, 121, 74, 54, 118, 14, -118, 26, -4, -69, -53, 69, -42, -57, 121, -8, 102, -80, -79, -84, -11, -17, 99, 50, -25, 104, -113, -26, 104, -63, -21, 98, 121, -43, 101, 111, 65, -24, 39, 50, 104, 75, 12, 123, -40, 72, 65, -119, 76, -80, -18, 112, -92, -62, 75, 54, 113, -49, -89, 94, 0, 70, 23, -4, -1, 73, -110, 99, 92, 122, 68, -101, -87, -42, -101, -83, -69, 101, -79, 118, 61, -63, 30, 93, 83, -101, 115, -54};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TFIYUCPQNCHSOHVKYYRCNQIVRMMFAYPXUBHCLKPSABCKVDTALCUOUFBZZXRZKYIFTPXOMJDWJZGDNQNPCXWXQQXVIPJJDKINGGERELNLRTVWH");
    tmp_msg_1.plan_size = 60558U;
    tmp_msg_1.change_time = 0.877012081508;
    tmp_msg_1.change_sid = 21619U;
    tmp_msg_1.change_sname.assign("EXZKWYTITHVQJDFMEPXMIFHLHLQDEOLBJIWHROEGTCRFPSMJL");
    const char tmp_tmp_msg_1_0[] = {-105, -67, 35, -18, 59, -36, -9, 36, -35, 111, 90, -5, 79, -48, -43, 65, 7, -113, -44, -24, 90, 55, 29, 26, -95, 5, 103, -11, 37, 93, -12, -2, 8, 71, -22, 86, 86, 57, 16, 111, 115, -32, 34, -84, 123, 69, -33, 110, -75, -104, -112, 58, -3, -69, -22, -97, -84, 106, -20, -53, 29, -85, 111, 91, 53, -118, -3, 12, -68, 72, -125, -11, 77, 41, 105, -68, -123, -13, 19, -14, 76, 105, -99, -58, 61, -21, 66, 29, -68, 101, -125, -103, 83, 8, -66, 76, -19, 120, 5, 24, 34, 87, -91, -6, -91, -93, -103, -31, 34, 76, 56, -72, 3, 87, -78, 23, -105, -116, -2, 42, -70, 91, 122, 45, 47, 107, 115, 67, -41, 101, -4, -114, -40, 57, -48, 77, -39, 120, -125, -122, -88, 122, -15, -3, -116, 29, 9, -44, -19, -99, 12, -62, 17, 78, 78};
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
    msg.setTimeStamp(0.226008748896);
    msg.setSource(1791U);
    msg.setSourceEntity(127U);
    msg.setDestination(31284U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("DSARRMJELWAXHWETWJDWPWEPKORNTDDCQSUULLBQFZDDRTJMHYTNMEDLYGOXBJXMZGOPTIJKSLNTIVMCAEVRVJSUQQSELNGFJHAIMTPIAXBZBUKWDFNLUYERYPHLFXVGYYKVPMBXXCBHQYOJPGIIFOGASMXTMHBJRPHMQEHOJWONVWCSQLFZYLSKFCNBIYPZXBGWVAGTDCQEZOPVNSKCBUCZVHQKNKFYOUXAFAZATSVRCGIURIHDZNUKGEFRC");
    msg.plan_size = 8229U;
    msg.change_time = 0.585189388507;
    msg.change_sid = 1992U;
    msg.change_sname.assign("HRPFFHZDTPMUUDWIBGDWNSEBEXVVKKPHUSETJCEIFPESGLTAANGBPICGOPMQQIGUIMGHHRVMKWNJSAZGTJAUEUQQDBYUWVLZCCYCFIAXZLFWURQPOWOFABVJTLXHSRWSOOHBVNGXUBNKIEZMZNLNPXCCCFVRYPNYDVNHOMDDDLOOQSXBYTWQEKMYZKBV");
    const char tmp_msg_0[] = {65, 26, 31, 35, -3, -109, -40, -100, -114, 122, -119, 40, -108, -2, 6, 112, 75, 126, -117, -23, 79, -66, 120, -101, -107, -87, 56, -52, 101, 76, -77, -72, 64, 70, -40, -5, -104, 32, -67, -83, -111, 63, -3, -41, 115, 91, -71, 123, -101, -119, -30, -38, -11, -32, 58, -19, -42, -58, 122, -30, 27, -109, -111, -11, 58, 63, 42, 84, -38, -75, 47, 97, -91, 47, -29, -46, 34, 60, -109, 31, 96, 61, 39, -114, 12, -105, 111, -31, -101, 38, 109, 9, -43, 66, 83, 103, -84, 0, -7, -83, -82, -50, 108, 44, -126, -93, -6, 7, -76, 71, -18, 111, 108, 15, 9, -55, -49, 7, -65, 50, 121, 109, 70, -21, -104, 20, 50, -52, -26, -87, 104, 2, 29, -101, 34, 48, -51, 5, 99, -45, 115, 110, -36, 65, -39, -117, -59, -56, 98, -117, 18, -26, -97, 26, -118, 102, 21, -76, 22, 93, 9, 2};
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
    msg.setTimeStamp(0.214362179586);
    msg.setSource(22339U);
    msg.setSourceEntity(54U);
    msg.setDestination(48438U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("NKPFMIHNAMUXWIEGGZTZLLIMAERTGK");
    msg.plan_size = 20797U;
    msg.change_time = 0.631272172634;
    msg.change_sid = 3398U;
    msg.change_sname.assign("NEDLJGHDLRNQCBWCIUKJRJHLNHMZRRSZRYAWLVXQTXACYNCEQITJTOPI");
    const char tmp_msg_0[] = {-99, -75, -111, -61, 123, 27, 42, -66, -96, -16, 34, -4, -47, -83, -51, 14, -38, -31, -64, -82, 37, 4, 22, 66, -119, 69, 2, 64, -30, 72, 116, -85, -118, 13, -51, -98, -24, -19, -63, -39, 57, -26, -44, 37, 41, -44, -22, 111, 1, 0};
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
    msg.setTimeStamp(0.555432957726);
    msg.setSource(7720U);
    msg.setSourceEntity(225U);
    msg.setDestination(28211U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("ENBTQPNMCERIAANDYAKRGWLDELTGOZWTXWKMTWHFTFRHORULLICDMYUNFVGCMCNDUVUOZIPJKW");
    msg.plan_size = 45308U;
    msg.change_time = 0.525884138251;
    msg.change_sid = 57789U;
    msg.change_sname.assign("JCMIVNUVGKCWVAMUVYXAZETUVMKRQBCRNAZSUGWLELWRIODJJDTDXYSOPNHNTLUBIECPHXWVEALKWYNDSKFHRGKTBUCYFPXJOLUOXAUCTQLSDIQVNYZKXPBFOSCXNHEQARFJKCFGB");
    const char tmp_msg_0[] = {-101, 108, -113, 99, -107, 88, 121, -35, -73, -112, -9, 46, -125, 126, -14, 65, 44, -124, 27, 8};
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
    msg.setTimeStamp(0.637876701033);
    msg.setSource(56429U);
    msg.setSourceEntity(63U);
    msg.setDestination(59289U);
    msg.setDestinationEntity(232U);
    msg.type = 160U;
    msg.op = 130U;
    msg.request_id = 46026U;
    msg.plan_id.assign("GDPYDWOBEZMBPFVHVTLNYFXWZODNRDXJKFPEQITMVJFTEXSKLSLGSZGVPRIKYVQRXAD");
    msg.flags = 34391U;
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.709311125685;
    tmp_msg_0.converg = 0.862386054001;
    tmp_msg_0.turbulence = 0.490939002641;
    tmp_msg_0.possimmon = 180U;
    tmp_msg_0.commmon = 48U;
    tmp_msg_0.convergmon = 131U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YTVVDIPYNIEECKOOXGBXKFJEYCSKKXIVBPWSINEWUGDPIZBBUTFXMMAZDBNDALLZBYCBSVXEYLIVJKPNUUAHGRWGWIRPLFMJCEZOGEJBQGQTAQGNDAHTKWPVOTHRJENHLNLQSFHMUHSLCQR");

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
    msg.setTimeStamp(0.620325037518);
    msg.setSource(55005U);
    msg.setSourceEntity(76U);
    msg.setDestination(31972U);
    msg.setDestinationEntity(4U);
    msg.type = 70U;
    msg.op = 87U;
    msg.request_id = 49738U;
    msg.plan_id.assign("FWBQHJFZTJZKVHKSPJQQGBVWWRBFSPPHMQUJGQEYPOLMIUHMYSRAEFQCUFMOPRKXTGOTNOKTFYICXMKCCWCRDUMEFAIHYEGSXUTESVZVNJOXAHQNYYAAAZVLDGKSDRZDHUTJSXPVMPFBVRVBIUBSBZCGNEUUNOWOIOIHYCERITZGE");
    msg.flags = 33634U;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.731065789099;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MZSNHMDSTMCOLYFSAANHYQYVWLOJAAGAEWVKZCWAJEMFQKIPVNFTGLYJFERMFMPYXBEGZJOVYPCEVKVZYBFEXBSJUQTTLYKISZOGUPKDFQKYZHEDCZKGJJQMDIBQKWGJDTPLPVUOOIMIPCBDUQJHIXKX");

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
    msg.setTimeStamp(0.0790473698733);
    msg.setSource(9758U);
    msg.setSourceEntity(209U);
    msg.setDestination(19025U);
    msg.setDestinationEntity(226U);
    msg.type = 187U;
    msg.op = 161U;
    msg.request_id = 5228U;
    msg.plan_id.assign("SXCUFXERUAJRJVSBPSCVQGJUBXBRAINTSVKIKPSEGUSKBYALEXAVHDOFKORTQWTHKIZEKRTVNVCNWZZWROWFFWWHPQVPOEQCFSDYAYCIKGNPCLSDZGTXPUEOFYAHWXGMXWRTNOYDCBSHQTMVBHNKUEZJVLFYDDUMZJ");
    msg.flags = 9412U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 3U;
    tmp_msg_0.op = 129U;
    tmp_msg_0.request_id = 19498U;
    tmp_msg_0.plan_id.assign("PUUYJJEOGRYVHUFHDLDNR");
    IMC::AlignmentState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 196U;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("WCIBXCMTBROEQUINLTGDXSSDEJHJBJFNJOFVBQPOROIWDJIEYTRSCXWYFLELCGLUIALVDOGAVFKKTJMWSHVDFUQGHNTBWJPNVCOQXAHZHXWCUYBDZTZKRZZPUGJXAJLRYBIHYCTYXH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LHOMNNQOYDCLCTCOBCDMQHKGISHIXMVSFFUMIOJRUPFYKVSKHPCTPBVOFTFEEBWHSUGGKDUBNQRLGXHSBFEVILMUK");

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
    msg.setTimeStamp(0.363863516978);
    msg.setSource(13045U);
    msg.setSourceEntity(237U);
    msg.setDestination(44857U);
    msg.setDestinationEntity(40U);
    msg.state = 248U;
    msg.plan_id.assign("MDLQGQEVXRXASNLQDJAPYFGMZDRQRMKNBYSVXSBJFDBVNAWHOMQVFZPIREVWRLKPUKGEWLZLXYYXJXASGWBFDONDEKWCAMLWCQKPETFHIUTUDTSHEJIMLIE");
    msg.plan_eta = 298053730;
    msg.plan_progress = 0.556125789516;
    msg.man_id.assign("DKIATSYABHBTNIQXQQJGKLFPJGZGJPGXXZHONKRSEFCYONVFWDIZFXUAHRYQCQBJAYXBSCAEFIPTRLLUPWDHWBJJKCENRZFGOLCWLNIVUXBHJRS");
    msg.man_type = 52814U;
    msg.man_eta = 1133596826;
    msg.last_outcome = 168U;

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
    msg.setTimeStamp(0.0721647252909);
    msg.setSource(14222U);
    msg.setSourceEntity(111U);
    msg.setDestination(15083U);
    msg.setDestinationEntity(138U);
    msg.state = 111U;
    msg.plan_id.assign("FEPBGZDREVAEFGSATFDZROTQVJTDOLSHFSOVUBTYNTVCBDEUDTMPCRKAXIANUMLSXRLLAOHKBPQSSPZHMIGVXPMRYXZESSWQLQOFNLUZOAFIEVQRGOKRFTQNDHQQDEVWJOGJWAZBGCOTTKRWBIJSQXKJUICCHXXUDNKMPZCJJHBYWXYKCAEZDIGMPBZWPSHKLGMYEZHP");
    msg.plan_eta = -591534717;
    msg.plan_progress = 0.0116003350052;
    msg.man_id.assign("BLYZXEXDDNTYMGFJPWSFWKZQALBKOZZXXHTIIGCTJXCQQUKJGCNOABFGBOQIKWGUTCURHMZEQJSXKYQJRVEYOADVJCCELADYATLKREBLDGMFYZTNMBAPDPVONVDCNWFVSU");
    msg.man_type = 57580U;
    msg.man_eta = -2297326;
    msg.last_outcome = 73U;

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
    msg.setTimeStamp(0.964337191976);
    msg.setSource(4831U);
    msg.setSourceEntity(198U);
    msg.setDestination(19160U);
    msg.setDestinationEntity(74U);
    msg.state = 56U;
    msg.plan_id.assign("PRHGDUEMMKVTQPGAHDOVXDALZHQPNOIORCYKYMNCPMIIXHKTIRSSLCHBFFDXLSRHIOJACMKMWUOQQQVGYJ");
    msg.plan_eta = -1797544851;
    msg.plan_progress = 0.187779893321;
    msg.man_id.assign("IPPUGPBSRWZTAQZIEYRECYDDBALLOUDXDYYJWAYALSVBADIDXBCMQXNJMRFEBNMTGVQGKKJOHOEEIFCTSMRWWCPJPPYIYEUVHESIKQWSXFZFLLLKMKOAWLGGDZNFCKYVTANTUKUPHHDKZQQESGTTRBESBVMCCZDKWCNXYFVAWMEUVNQFRNGFUCJMMACSQHZHJVRLZGYRXIRZTOQBPAGUJFJLJPXTIDSBXHJROTOQNSIZXHWUXHGVFB");
    msg.man_type = 14017U;
    msg.man_eta = 904646671;
    msg.last_outcome = 201U;

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
    msg.setTimeStamp(0.66818364357);
    msg.setSource(25198U);
    msg.setSourceEntity(118U);
    msg.setDestination(17779U);
    msg.setDestinationEntity(89U);
    msg.name.assign("WGUIZSVYFZMCCNCFHKLVXRPMRTZDFQWCUBYHFVZLMWWLBSXILZSIBPUADIDEWHDX");
    msg.value.assign("ICVEOSQUHGYWZORUELQTTSEJFTCFPKJMYSBLIWWRPCXPNJXLWTJMRRQNKYVDGVIBQAKGWVGXZGCHYHMPEFWMRDDMVSKRMHOUEVVMJDINFDGZALGFWOBUHM");
    msg.type = 14U;
    msg.access = 9U;

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
    msg.setTimeStamp(0.857085584463);
    msg.setSource(18828U);
    msg.setSourceEntity(198U);
    msg.setDestination(64676U);
    msg.setDestinationEntity(168U);
    msg.name.assign("PWWZUQCSMFTCEXTQZYQQNGFSFOAUGVZGTGMGOUBHDQTAIRSGJFQCJTSPBIEWIKFHDCBLBUJOEMZXHFICXIKNSHWOKMVKWEUDMLZXSDVQDFDKCLDRALPBBBXYYENVUPKVRYVHOOGABRQAXDFOSEAIHHDTTRKLKJLSPNNLUOZJGCENTGEXCMYREANPWNAPRFW");
    msg.value.assign("ZGWTMMAUOASKITEPNTUFNLURLKLNFYQOZXNBHPHCUJXIKLKPEQRWWYCHEAQEVOBUKMJWFJUJRIFDUOZCPBTAIJDLDSNCKCWCIKWADHQFAVFHOCPNLSEDYVEANUUKWRZIFBDXBMYGNPJB");
    msg.type = 150U;
    msg.access = 248U;

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
    msg.setTimeStamp(0.884761083916);
    msg.setSource(35666U);
    msg.setSourceEntity(93U);
    msg.setDestination(61511U);
    msg.setDestinationEntity(224U);
    msg.name.assign("MBSICMWFFBROKCZAAXJJFAHYTPPBZIINBFWTAOGGQJOOARSFXZIBGWDJHUYMEOYIDDWPQTONHPAZDUJLENRNUGUMBPEAHDWYVSXRILKVBIVQQQRJWZPTWXLPCUDVKUHYFGOJKVKCYQOTWMY");
    msg.value.assign("VORKFTEIKGWPZUBMFCXAFCEDQOKAOJICENWMTVDTZBHGRRRQNVK");
    msg.type = 193U;
    msg.access = 4U;

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
    msg.setTimeStamp(0.765212843211);
    msg.setSource(44155U);
    msg.setSourceEntity(153U);
    msg.setDestination(394U);
    msg.setDestinationEntity(7U);
    msg.cmd = 10U;
    msg.op = 85U;
    msg.plan_id.assign("STADYAQUGEACNOLLLRIHIQJGKNDFQVECJSADMMKTDZRZNFXNMFNCIBLUYULVZWNCFUVMPNNRAHOZOWGCTSVEKWRCJXCBYVIYMVBZYHGKRIDZGBNYAHIYPMFTYPOGPMZOLWEYLFSRQBSHUHHPVRWHBDKFZECJFQIQIWUPSOIEKGJQVXMCTQAUUXEFKJRXDSJLJDTRESDCWXLNXPYEIGEAZ");
    msg.params.assign("BJQWRNIVCWKMQLPRQXNJWDUVKCLEZMDZEXSJHXOZSHFCHRLJYANFLGHLBIDFLLMBVNPPZZYEVNXGXLPTYFSTLHAOSGFQFYTECBWKEMFUVQJFWMDADYHOBWUYCUPJEFUXJHDBTOASKGEINOFDGAMPAXNGBTYOZAQWKPGCULGXQZAMTHTRAPMIVRURRJTSCNEOPZXMSI");

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
    msg.setTimeStamp(0.696219813694);
    msg.setSource(15168U);
    msg.setSourceEntity(189U);
    msg.setDestination(27861U);
    msg.setDestinationEntity(186U);
    msg.cmd = 70U;
    msg.op = 246U;
    msg.plan_id.assign("OGTSFMHQUAZECZLZSIBGGPSVDNEVLOWOCTJCGTVOLJLZEXUDWMGQPCRTOXFXYOBLMREFIJVXPESQBZEYRAAIF");
    msg.params.assign("MRXTWELMVKVBYKSLILOMYCPJGJVF");

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
    msg.setTimeStamp(0.960656814489);
    msg.setSource(153U);
    msg.setSourceEntity(77U);
    msg.setDestination(46741U);
    msg.setDestinationEntity(52U);
    msg.cmd = 150U;
    msg.op = 106U;
    msg.plan_id.assign("ZSHHLZVQMMDBBKOJCMNOQPPNAQGFKEWXRVGKRXIWOAJLRPWQCICEPGOSJFRJYVISWRKQTMCLVCRJZQEHGCQXEKULBSNHSUZMEDRIHOFNMIDUCTXUFPNDMXEDKJFWPYWBGUVOLRUYZFYTSGHMXATADBYZNUYAFTFQKXAHVWDLJMPXOFUIRYSABJVODJOOHPSEWGKIUSJXYAVQTGBWICKDHZBFUKGENLPYITXHPYBWMRNZTLQAAVBNZTTGDC");
    msg.params.assign("IPJZHYIXONQSXKEITROOHQFQGXBXJTBJPOFKNYGGDMEPBUDXFGXRAAKHSMDRBJYDZATXILOGCPVUCWPRIPYYOMSSYPYCBYKOGAFJLBULKDZNLMCMTBGLMOWLAVLWIWQUBVEVFUEGZUKVJAEEQZQRNCSZHWH");

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
    msg.setTimeStamp(0.854774443891);
    msg.setSource(1463U);
    msg.setSourceEntity(0U);
    msg.setDestination(27517U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("TEIBFIMJLTOMUTBLTLOXIJPAPQZFUAIWBAWE");
    msg.op = 23U;
    msg.lat = 0.415815234173;
    msg.lon = 0.471417920143;
    msg.height = 0.0598286052243;
    msg.x = 0.105313647846;
    msg.y = 0.855658876147;
    msg.z = 0.313541869827;
    msg.phi = 0.876750941299;
    msg.theta = 0.332673776527;
    msg.psi = 0.91997487823;
    msg.vx = 0.434627297514;
    msg.vy = 0.950349670177;
    msg.vz = 0.184543957575;
    msg.p = 0.76613245944;
    msg.q = 0.232880765931;
    msg.r = 0.958675192623;
    msg.svx = 0.95780488067;
    msg.svy = 0.854673470586;
    msg.svz = 0.194648521294;

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
    msg.setTimeStamp(0.807437130422);
    msg.setSource(38983U);
    msg.setSourceEntity(201U);
    msg.setDestination(44651U);
    msg.setDestinationEntity(110U);
    msg.group_name.assign("ZEEFWWEOLCCAALBUDUNTCAUNKWEWOYZALGPRAFDHXMXGJVQBHLUVBSJXHKRDLFJBKPKHTLXVBEARYPEMYIYD");
    msg.op = 136U;
    msg.lat = 0.956683017015;
    msg.lon = 0.817466435883;
    msg.height = 0.758671529323;
    msg.x = 0.24177409463;
    msg.y = 0.808298297065;
    msg.z = 0.487339545739;
    msg.phi = 0.456773595415;
    msg.theta = 0.129639202482;
    msg.psi = 0.715744296686;
    msg.vx = 0.693987685151;
    msg.vy = 0.962177459742;
    msg.vz = 0.056764463554;
    msg.p = 0.390231054332;
    msg.q = 0.698780227559;
    msg.r = 0.497344139698;
    msg.svx = 0.556934753736;
    msg.svy = 0.213255350855;
    msg.svz = 0.870279333266;

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
    msg.setTimeStamp(0.429871947553);
    msg.setSource(8113U);
    msg.setSourceEntity(245U);
    msg.setDestination(15856U);
    msg.setDestinationEntity(233U);
    msg.group_name.assign("DOZHGHNIXNFHJRKSRFECACKJDEHTAOYNGSBAEETZEOLVLECQFBVEGBCDIMILVWYQPFIBZCQKRVSDVABYZ");
    msg.op = 109U;
    msg.lat = 0.316414967183;
    msg.lon = 0.177034884435;
    msg.height = 0.551051572371;
    msg.x = 0.539002591399;
    msg.y = 0.945483894815;
    msg.z = 0.523034147827;
    msg.phi = 0.627947484989;
    msg.theta = 0.400103074463;
    msg.psi = 0.814655067824;
    msg.vx = 0.761325029033;
    msg.vy = 0.752304112121;
    msg.vz = 0.0911362852207;
    msg.p = 0.710043187825;
    msg.q = 0.894413827582;
    msg.r = 0.743131911583;
    msg.svx = 0.384323392927;
    msg.svy = 0.679730685302;
    msg.svz = 0.683331821844;

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
    msg.setTimeStamp(0.153238588804);
    msg.setSource(16560U);
    msg.setSourceEntity(139U);
    msg.setDestination(22084U);
    msg.setDestinationEntity(131U);
    msg.plan_id.assign("PHJAQWKMJUKETKDYCCRFFWLZJIZNCGDHUIVIWDCLMYPEAULRRDYDQXJUXDXORBCEZHSLMUGLGOBVUNPFYHGEXUBYSBJZGXMMMSFIHHCDDAACRFTCWDJTLEBPOVWCNQBPGUPCIAQGSKLGIOSYZTJWBRYXKJBEAEFFWEINXIWSZKOBXWVZNQTJVUNGRFXSPFZJXMRBIODNEPHIYKOKYZAOKEQRQHFUTVKVSVTGWQASNAOQNMOTZHPMVPQLMHSTN");
    msg.type = 43U;
    msg.properties = 215U;
    msg.durations.assign("KKEYFTXOSGJIQNFLEBPZDOFMGUIMKVOHTDTZSTNGWUQKPNXTUZXRULTXQOJDLPMYXECTDACBGAZUSSIRDYGQAZZDAXEILKCJGFLOQCOCPWEIMSPNMYP");
    msg.distances.assign("GMZGNANVRSGXOWBVTHDMMTQOCBNZHQZLXFROBSZFFJEBSHCJUZWOIJCHWTXPBFJELRXRDYJMVLLSDEFSYRPPDKOUDBPBVVLXPRBECZTTAOQKXPTNKIJQPNNHIFBUOTTYGRMNVAWPMWJHHUU");
    msg.actions.assign("TBJJXBBWYWVPQCMMOSJJSFDEIXEROWOLTZMBUWDKQRGULGRXZUYLCHAQITXHYIFNOJETDUMUDPOXXVRIWUKXBQDSEXZGJUQLVFCHADSYGNRLTBPCNOEEQMKXKBZDBTLPVEZNMAPIVQGNASGVTWNYGJW");
    msg.fuel.assign("XZECXKZDWRNXSHNNSHSZUOCXGQQPTRJPVKBZHGFHIOQKLCUTGBSWIXNNZYFOCOCJYQFBRTQWGFGWLKLHNAPVGNGVMVYLYLTEUEBGMILYAZAPNIPIWQLJSDDACJNRJKSEMPIOEATYPKHDJEEDXUIUUCXLABBVVFYWMMTVTTXIQF");

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
    msg.setTimeStamp(0.534294351835);
    msg.setSource(55142U);
    msg.setSourceEntity(102U);
    msg.setDestination(62594U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("CCPKTBPPGEIQD");
    msg.type = 74U;
    msg.properties = 166U;
    msg.durations.assign("YIRJHBUJOOGHVPFOYFHLLBAVZSERLWWSZDWLCGDSNDITOLVWZUKQSLOTIXMNIRYJXCCNBFMBMNRGYSIQIVOMHMQEZFXTWRMCBFVKRWDHQKNAUUKNZYZGPYMVOXTUKULYJJGEVLDTQSPKKFVFOPTQUSEHZAXHXNDWPDGXDBHJPJTPAEAKTIWEYPOAEGCLZGCWGNUGFZUOTENRJCDPFPKIICVMJCEAR");
    msg.distances.assign("ZHWOKKRWYXCYN");
    msg.actions.assign("VYJIIKYOCFBCVWKNNUUQOWKMIKVTJWEVQAMATFMEBPXFTMORHIRKEHCDEUHPHJIWRBGVGSPXCD");
    msg.fuel.assign("IHGAOJAOJUQVTKLUGBXNNTKRUCLWGZKYNBTWJVBHHTIJMSPFPLXSIHQTRCITCEUCDPGIAOQQSV");

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
    msg.setTimeStamp(0.616770713479);
    msg.setSource(26106U);
    msg.setSourceEntity(105U);
    msg.setDestination(28872U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("HGFECGHDMSGIOFOOXCKQMVJCGLOUPEXLSLTQBPGNDKBKPHWLALVPODRSFCIDYERXRDUWJHFOJQEYVSMZLQTRUSAWNYJTLABKXCAUGPHZGJXCQUOYIUSEXWTJCRMANKTQMHKXAPPWFZVVDKBZOZMNWENHWOMLERL");
    msg.type = 210U;
    msg.properties = 82U;
    msg.durations.assign("IIQHNBGHLNZXHQGRGEVMXDZYEBCOSJRAOFTBLPBLADAASBSEJKKQOHYCHQZDPUVMATNIJRKRCQQQVDPNIBQJGYULVSNZXKBMIZVGWCOAPMMDCYWOOXCFDCTKLZXKREWWORCFT");
    msg.distances.assign("LYLSETINIJOYMHBRULIKYADISEJWYHUZWZEMRJWSJWVJAPQLGTZIFCGBOACSWBNSXODHKFICRNPSDHSXGJUVXKUJCPLRSHTMWVKDKXIATMUVDGEHXRNDTHEIEFZRRXZQZQDANTMAGYBJDXKSCVCQOHFMTKIHDGMUJNZOKPFOGZVOBZCOMCEPFYQEGZONRIGWWNLVMLPLADPBCJTYYXOAXBEUFUARNEFQV");
    msg.actions.assign("TQKELGQNZYIEYHVJMYWIJXQFAKZRCWJRPDOPDJUSTVTATFLAEVIKZNNJ");
    msg.fuel.assign("SFNQBPSHJYJEZRRAYFSXJOZYPYFBWNXQWBJEVZTWLCKACJAXMUNFOICWOJUFTZITPVGSTGEGRFUEGCKLMSPGAYOAAWWHRKCNHIOIQEFLLOUIHQPMKVLXLGRJMSZBLDRYKUABMVZCJOHYTMDCWZVBPQXEAPPNXZNLZDSKECNDQMRXGDONXFDADNMSLBMGTWPRNBIIUQURKILDUGTQOKHVHCVWUTEFDZEHWYRYBUVIKDGYCJKXSMJTHEHQFSXOT");

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
    msg.setTimeStamp(0.189482654806);
    msg.setSource(38232U);
    msg.setSourceEntity(187U);
    msg.setDestination(16636U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.0210225904794;
    msg.lon = 0.108220882057;
    msg.depth = 0.710350243349;
    msg.roll = 0.687034725562;
    msg.pitch = 0.277300776498;
    msg.yaw = 0.903567156085;
    msg.rcp_time = 0.565604263115;
    msg.sid.assign("TGDDCUQIPENLFJGZRNADIVGPIAKPZSFWRCAXEEWCWDZJGRWMKRYZBRYMOVGDRJZVYLHKYSOAUQBTONATYBVSPEFTLSVWEYOXTBAJUSFTYPSNQLMOVDBFZJXXDSVWHSKWTBCGKMUIUQLPUKZZOJXFOQHSFTBNKJFVNC");
    msg.s_type = 38U;

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
    msg.setTimeStamp(0.931413757211);
    msg.setSource(65038U);
    msg.setSourceEntity(131U);
    msg.setDestination(59973U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.221848902823;
    msg.lon = 0.123961991308;
    msg.depth = 0.00659702753335;
    msg.roll = 0.286834725103;
    msg.pitch = 0.916642442944;
    msg.yaw = 0.615630910905;
    msg.rcp_time = 0.232801134991;
    msg.sid.assign("WDRORCFYTKNFSMJRYOEVJOBNUVIQOSIUNQSLQIZWZEPAOBDKAKYGGAVDEWWMKWQGMYFPYTUDOLUMORROQJLSWUEYSCYZCGNDJIIVDHAVADEEFZLSTZKTIGCRJBMXAVAOYUPCHURJVOYMLZWPXFFXPVJJTBSZVCPARBHGQG");
    msg.s_type = 161U;

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
    msg.setTimeStamp(0.187527225495);
    msg.setSource(49857U);
    msg.setSourceEntity(185U);
    msg.setDestination(4132U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.806696173217;
    msg.lon = 0.865170872815;
    msg.depth = 0.544321846133;
    msg.roll = 0.26154957065;
    msg.pitch = 0.179308787552;
    msg.yaw = 0.605395364004;
    msg.rcp_time = 0.737138829152;
    msg.sid.assign("VTUXWYKMIDSZIGBZYNAUTKHGDOBPOFUBPXXTYXGCLNADYUFBGKKISWLWTKGLSSPTEOKJHVXHAMHAVRTOMAOCNAONKCSDJ");
    msg.s_type = 74U;

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
    msg.setTimeStamp(0.245971221284);
    msg.setSource(53909U);
    msg.setSourceEntity(52U);
    msg.setDestination(24659U);
    msg.setDestinationEntity(208U);
    msg.id.assign("FINJQMVSEZCSKBGKZAYPYZQULCEKRKWQZNUEHHJEDDMAQEGOAILIPDPMFKLLUAEOSFXMNSMAEZPKAOYPTPNWSVMFKZQOCFYWTDTB");
    msg.sensor_class.assign("OKMMJWLCKUYXWRHZBVIQVPZBTNMNGSIHNCTKBLJBQQXWNUPCJPGINDXBQFUHNHMXYSXJTSDPFWOXFOFYAUTQZGPJEZHSYOEFYFTFAJEMFYAJBWWVLPJMXNVVIHESOIRDGCHJNTBQCLMZSUCJXAYILVKRBWMDUUURKKTACTTFEAKICVYGSWZMHOLXCYKXLRFDEEUBHGGGEABCZRZPDKZLAGPOQLGDESWKSRRHSVVOEOLTQI");
    msg.lat = 0.430404092226;
    msg.lon = 0.121136647859;
    msg.alt = 0.990808975343;
    msg.heading = 0.979960752023;
    msg.data.assign("UEWNFWGZQGHNTXKNE");

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
    msg.setTimeStamp(0.306239802189);
    msg.setSource(32648U);
    msg.setSourceEntity(88U);
    msg.setDestination(30980U);
    msg.setDestinationEntity(165U);
    msg.id.assign("YLWTBHGZUVGHYGCBLNHTEUXDIBDQPRGLUHXCJNHAGXQMCIXMRIFKIRNSKPMPNEHUJJDRHMTXPQBYAEOKMKGIFPZXELWOVTOFVQJWROMJOYZCZSUPGDKABCSREQHVCMYOVULDQTFNEAJAWOFSZWKELPWGPJIBENUTCHXLWYPLO");
    msg.sensor_class.assign("IIMLQFXLHTUXCEQKQLYKZMDQAPHNMBOKBBILEPGRGOAZUCKLINVBCUNGGMNHAUSZNGZSIFWEFABVYTSSDXBXJZPVYVQDWCXLCMTVSUVQFEUKUVRGWJPQOVGKCIQDZAEWOTXOYYWRZDEYZUQAGNOHFMAQEJOAVFXDFDHRHWPCNUBBNNCEJFRICZMS");
    msg.lat = 0.991791866179;
    msg.lon = 0.822840703647;
    msg.alt = 0.00489358791659;
    msg.heading = 0.427727189985;
    msg.data.assign("TLTVDQYYNGSPEJLLKRSPTQRNYGHOAGAFBPZPTRFLECFSLNMHVZBJZNQONMAMSKKUWHYNXRBFXEZQHROTYOFEQTJGNJMUODKSHYIAUGSBMKPXOSLHJFSZYSIOIOWGIZVDNHVPXWPRIDTFKRACPAGEIDGBTXBRLPLHDCVWVK");

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
    msg.setTimeStamp(0.329462110131);
    msg.setSource(14329U);
    msg.setSourceEntity(68U);
    msg.setDestination(44104U);
    msg.setDestinationEntity(169U);
    msg.id.assign("IMYMNDICYWIQKTSEDKXAZGRVXEHVICTBYQZUNZGRIXZELCLCHYWDGFBBJVRDFMRUPWBXFSTARPRQKUAECFUFMJZLWKWNNUDXPQMEQSNBKHUDJVZQKVLGCSXSWJYOCUVXTVZOVXPKTAVYRLYFJHXSJOOWHO");
    msg.sensor_class.assign("KGEJHVGEGHCCJFEZFTDXWNYYJDSIWSIXTRNZBVPMOPMQLXMZUWLXDINMWOCDQHMFLBAYZGTJUZLFEIOZYRQZTUKPGUPRAJTVDAFURSODCDINORSPVTRLCYXKFAXZECVSMCNIQGGHRFGKBPFMMWHKLHNZQSSWYXXVILLUPJYOIEVBUPHAAIWFQRYOBAWOXJN");
    msg.lat = 0.853347250265;
    msg.lon = 0.345551560144;
    msg.alt = 0.664647637228;
    msg.heading = 0.671645016357;
    msg.data.assign("TUNMULVTLKWBTCMOJGKJYPZCTFJJVQPSP");

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
    msg.setTimeStamp(0.291013519929);
    msg.setSource(6720U);
    msg.setSourceEntity(10U);
    msg.setDestination(27720U);
    msg.setDestinationEntity(40U);
    msg.id.assign("XWNXBKAZDOGUVPSYAZDZAWHPWEJJYRTLEFIXEETNXIPDKNBCWOVDVNYGVOJHUFXHKQZPJPDZSFFQYQSFSNHJTQWMMIUIQBTVXRJUUBKSQCATRSGIOEWVQIYLLYYCXQAKEZKKULTUFGJSMAUNHDTRPQVKLRZPOBYETWLPGLDEMZMANGJSCGOPLYKLAFKDIEIOHHOTBAIJCNEZWMVMNXGRHVPCCTFAYRLCRWMOB");

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
    msg.setTimeStamp(0.20096333443);
    msg.setSource(14016U);
    msg.setSourceEntity(36U);
    msg.setDestination(41520U);
    msg.setDestinationEntity(175U);
    msg.id.assign("IFJYGVCESLJXSPTHTIMGTMJWXHZVSKBADRHTKZORRIEUJAFKUGINSMLBAQPQEVZOVXGDNGWZBPJHCZHBMFCZKUCGQWIKAPLPGDOQVYFECVQTAUYUWTONZMHVSYUPAEWLIKNUDUFMFAHZWBORKKDUMNEQVJEDYQTLQWMJTIAPIILHXMCBSZKNXLRSBGZDXAYICUDWLXOHDBDOJEVMYRRFCCFBXLJTEFYSRTJAOHXFOGLKRBCPOQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JEOQFTOAWXKOOGRCOBCDAHLIAHMUZKEWQBVRSJLZGWKRQUFPTHVUJQKH");
    tmp_msg_0.feature_type = 75U;
    tmp_msg_0.rgb_red = 32U;
    tmp_msg_0.rgb_green = 39U;
    tmp_msg_0.rgb_blue = 63U;
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
    msg.setTimeStamp(0.741178326021);
    msg.setSource(43680U);
    msg.setSourceEntity(113U);
    msg.setDestination(58048U);
    msg.setDestinationEntity(251U);
    msg.id.assign("OOSIKFAYUNBVJXFKWNEIYEFSUQTMAHJNTTBTOMGWBAHLUHXGVVGHSWIGJVPPAFQBUGRVXHIYBIMAOZGHXDCKNPMGVMJCQDHAZLCCBIAJXZLENZMDENQLMYXKSUJURFLNCMNLTHSZLPYBXZDXKIODGVSBZJXKDHLFVWPOCRGRXYOYQHQPDKCYRFWAVQPUFCUUWSEVSEGZWDNOQNIQIDFESOTBMEYJWYPKQPTLDPRKRMTFEZLCIS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WELNOVEMTDCOKVREKOXOXRNFQFDZQHZBCMDYRIXIIKFGUIKNVUTBYKHBIINCRVAUZADNTKGSQLLZMUMGJSEMGYBLFPNEDKDOFULZPMGDQMPNKRRR");
    tmp_msg_0.feature_type = 154U;
    tmp_msg_0.rgb_red = 160U;
    tmp_msg_0.rgb_green = 239U;
    tmp_msg_0.rgb_blue = 161U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.590764250127;
    tmp_tmp_msg_0_0.lon = 0.917284583431;
    tmp_tmp_msg_0_0.alt = 0.396769462574;
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
    msg.setTimeStamp(0.778978835262);
    msg.setSource(17317U);
    msg.setSourceEntity(248U);
    msg.setDestination(24277U);
    msg.setDestinationEntity(235U);
    msg.id.assign("TSNPUFQNQPZTDSVXIKOEJMTJSVZDPKIBEKOVWVYJHM");
    msg.feature_type = 44U;
    msg.rgb_red = 177U;
    msg.rgb_green = 174U;
    msg.rgb_blue = 233U;

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
    msg.setTimeStamp(0.544579196963);
    msg.setSource(31236U);
    msg.setSourceEntity(209U);
    msg.setDestination(29080U);
    msg.setDestinationEntity(193U);
    msg.id.assign("GGIFYCBFHRVBQPSQOKFAISUGBGIEQAICWBXVOQZJKWRQYNCCMOOQUHQTXEWMWMVMZUSXLMCBZFADTEYTZEZENJKPEDLWSKLHXDBPGYATHREHIWUIXFNYCXWJGRTVLDCWDVBRSPKLAAIZXSKVTRSTDMCJVZBIELLPSRNYOUNCILGVJKTGNRJSFIODJXBMLHOCPMAFAMVRDKYP");
    msg.feature_type = 233U;
    msg.rgb_red = 184U;
    msg.rgb_green = 118U;
    msg.rgb_blue = 168U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.510559627261;
    tmp_msg_0.lon = 0.060637542789;
    tmp_msg_0.alt = 0.889373406759;
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
    msg.setTimeStamp(0.863242621584);
    msg.setSource(3474U);
    msg.setSourceEntity(85U);
    msg.setDestination(39769U);
    msg.setDestinationEntity(144U);
    msg.id.assign("OEMKDDFQNKOKFLIYHDSJUIUXNLIGEUOQVQIPRFVFWVKSGJKGMXBOZMYDSQEBMRXNGAVTGBOLOMRQFIYIRZAGCGQESNKZJQZNVAZTXRGJWBVAHYHSOEWPDRMCRHLQZJPYNUDKSNFREP");
    msg.feature_type = 52U;
    msg.rgb_red = 46U;
    msg.rgb_green = 99U;
    msg.rgb_blue = 206U;

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
    msg.setTimeStamp(0.528590456545);
    msg.setSource(46073U);
    msg.setSourceEntity(63U);
    msg.setDestination(41253U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.904000007952;
    msg.lon = 0.840348606518;
    msg.alt = 0.561047871206;

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
    msg.setTimeStamp(0.901194560244);
    msg.setSource(49549U);
    msg.setSourceEntity(48U);
    msg.setDestination(3033U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.461295250646;
    msg.lon = 0.6378395174;
    msg.alt = 0.208682197523;

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
    msg.setTimeStamp(0.74261084087);
    msg.setSource(50780U);
    msg.setSourceEntity(48U);
    msg.setDestination(43946U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.287841746928;
    msg.lon = 0.45649148454;
    msg.alt = 0.290057426647;

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
    msg.setTimeStamp(0.30067528212);
    msg.setSource(5930U);
    msg.setSourceEntity(136U);
    msg.setDestination(34298U);
    msg.setDestinationEntity(252U);
    msg.type = 227U;
    msg.id.assign("NZUFOYIKQZXKYPEELSEZKWBAGPBDANTCENOFHHJZPLBQXDKMLXRQ");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("MZVKNMJKEOHAGSSPVBWHTVQRXJGLXOBQBXTPBIBGMWNFLDZKJJXDDTAZEKILIIBBGYKWYUYCZEIUIQKSLVXSRJPGFZOUFQCBCQSYYQGUTODBEOLVNEYHRRVUBQXGIUMANGFLWENKFRTC");
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
    msg.setTimeStamp(0.894075957231);
    msg.setSource(42137U);
    msg.setSourceEntity(229U);
    msg.setDestination(27653U);
    msg.setDestinationEntity(161U);
    msg.type = 115U;
    msg.id.assign("PVFZURBHOEDBXDTFFZGPDBCWHVKVMGCKEZQXDJJZYGQYQSEVHLWR");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 59946U;
    tmp_msg_0.lat = 0.556005412607;
    tmp_msg_0.lon = 0.394114428799;
    tmp_msg_0.z = 0.980401695668;
    tmp_msg_0.z_units = 254U;
    tmp_msg_0.speed = 0.544281219816;
    tmp_msg_0.speed_units = 31U;
    tmp_msg_0.custom.assign("ACWNFIHZQWGJNWQFTMQJBGCJNVSLHIIWEZGNWKAZWDNFOKAVEVVBGEXNYMTVQPSKSDHGLHAPUPAOLDFZPQMSQBXYXCOMUIHYCMMFRMBEXXLVRMOWZRBMJAPZIJGHYCOURPYIOZTYAKLLTDSOWEUFHJETDFOMNXSJVZCXQKBGXB");
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
    msg.setTimeStamp(0.197738880586);
    msg.setSource(21999U);
    msg.setSourceEntity(192U);
    msg.setDestination(46426U);
    msg.setDestinationEntity(74U);
    msg.type = 153U;
    msg.id.assign("THSHDJPXBYHMJDYBMABLNFXUUJJVMULVFXJFJOGZRCHDTRQBTKQSLZNMDEKYPUNPPSXIVUSMPCICYKQTQEBEYHKLYWRAIKEGDVGLRDPR");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.450042024751;
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
    msg.setTimeStamp(0.66007356258);
    msg.setSource(59072U);
    msg.setSourceEntity(160U);
    msg.setDestination(37700U);
    msg.setDestinationEntity(188U);
    msg.localname.assign("GLQDRNBAIYEBGCRIDXTBVCJVGSUEZODUOEPBTZDSNVOZJLKWGGFFFYQQNDZKSRFMJHLTDXELOGRWDZCUYCLIEPHQMSNHBOOVXTVBZEFUNQCXJJCLPMPKADKIQISTOQPIFLHCUQXAJAMHUZBRVHFZOJVWKRSSUXGWEQDYTRWWAATPHLLQCUMFDJWRXEIMPKUKKZFGRMIWYMFVBCYNEWXKSU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YATZTFEKDJGHPSESBRFQZBTWNUMMOOJWGUVFHIJGUMYOAZSAVLWSPROJHHEALYLEJLOVQYKRBFQNEMCLXQWUEOISNLZRJFLGSXOWSCFEPDXKETPLDAIGZBKVDLPAIMPATIUQJWRKZNHDUQSAFVAJRXXUIXXFTVGMWCCRTINGDZYSUMZQABIXPRIZGKBIECOYVGOQNYYEHBKTHBYKNHWDKMHQCJUZKFXCNMVFPVXUVSBNTLDWCWDNT");
    tmp_msg_0.sys_type = 89U;
    tmp_msg_0.owner = 9306U;
    tmp_msg_0.lat = 0.437441954223;
    tmp_msg_0.lon = 0.926818309717;
    tmp_msg_0.height = 0.50992183637;
    tmp_msg_0.services.assign("JBZPDHWFXRHAYCGXOXYIMGVYBRGRBCSUCXNUGJBTBTMVWVCJYVDOLVUZCISTOSBEENLFAJDSLOLVKDBHFREHJNNUFSNNMJPPWTMYHNOIPWWMGTMOAPRBYWORVIXIXDHVXQDDQUFCMNAHMJZKEHRYCWSAZWFDZPEQNOTGKRQOKREXINQIGECZEAJKCQBSIGLLLIWGPYYFTTEAKKSSUPSIDYZFZMB");
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
    msg.setTimeStamp(0.99499187217);
    msg.setSource(10612U);
    msg.setSourceEntity(80U);
    msg.setDestination(57394U);
    msg.setDestinationEntity(216U);
    msg.localname.assign("RAYDSRRNKJTQQEEBJGULOMGQJFFOXUJCBMIMKZDBPGPMTNLCLTVVOQMDWVICKGYMUTGQEQAWHWSWKCXUJVUHYELVRSWYEWWSUNMQTXPZCANOQOCGHNEWSYDFZTDEJFSVECBIDXNOYRIJFKHKTIILJJLTAGBGRXGHYPMMHICLUNKFKUVSZBAZBPNZTPUBHPOEPXNLONEO");

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
    msg.setTimeStamp(0.395073538554);
    msg.setSource(41000U);
    msg.setSourceEntity(2U);
    msg.setDestination(20169U);
    msg.setDestinationEntity(227U);
    msg.localname.assign("VWKMVRCNLPHHQQEEOZCZJZXWJXDQITIPTYXWQSUUODYPVLKOFNMXXCQVELHRFUIFEKGNAXMBSGGCQLZPKMFVOKYBYPGVQJPKUSABXUFFICLEJOZAHASZOKJXWPDGDHNHIDGUBXAMRUWNRRJBCTDUCRXPWTJFTBNECQHATNYWWIOUCMPFGSGKELAFLGMALCOYIBVIDAVRSPMZZRNELTOLJSWBWTEKQJY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BVKTDCLOARMEFJUEQLAQYNALWLGKLIEIEPJIGNWCEINBIFWKDOHYOHQZMRTZYFSNOFXBNQAVRFXTULPHCVNUSJGAPMKHTWMRPOUSQVLDUEGSVSTRKEJHNCIMYQAYDGGLCEOVKDHXSHCEJWJKRZNOCYBJQEFXUYZZFALMIBYUWTZA");
    tmp_msg_0.sys_type = 14U;
    tmp_msg_0.owner = 45227U;
    tmp_msg_0.lat = 0.56722366998;
    tmp_msg_0.lon = 0.1486202419;
    tmp_msg_0.height = 0.0129236316326;
    tmp_msg_0.services.assign("FSEOPVCCJXJXOQXDNGOSXBKZWYUOZDBSYBHTRBFNARITILPNNOJFBHJDETFEJVNRYXVWQDACEFJGCYEMQMWJAN");
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
    msg.setTimeStamp(0.0579701623976);
    msg.setSource(56194U);
    msg.setSourceEntity(89U);
    msg.setDestination(40203U);
    msg.setDestinationEntity(130U);
    msg.timeline.assign("CDBNZFNRAYPCVTLOAZMOMZLKITUCNQKJJJHSCEPEGSQZWIUDFWRUEIQSTTIAHSOQMRZKUWQAKPUGOCBYGKXYKFYRZCKJHEHRNPWEASDSQMKQMDFOAXDXWAYPXWMXWUPRCDBLSBJEVCIDMLYKUUZUTLG");
    msg.predicate.assign("IBCGRFCBFUSPUAMEXHXHKUZOSOBVFVCPDFSDEWIYUZFATRLUMAVFURPFJVNQBDXYHXHOMTOKQUXANLQIWYXTLYGMZOQFQRJNMEWYRLIDPNXHMAETIVHQZLVHEZDHCYQKCKTIZBESUPEAKBSIIAYECWFMWXMWJNKTUXVGNCEPIQFGLGHCBKLKRKPGAJDMJSGSOYDLBGTRZBDRJPASLHSOTONTWJUJEARVL");
    msg.attributes.assign("WWTKEWMOQUBXNLAHWLJUJQVOTFDMVSSVGNMPAENFCMKKJVSEWJTENHINRBNFICTIELVYXZKPYZQUAVGCWIPPPVONDBROPPYPDOQZEDUKYSCRDKJGXINFZRCOQFZSULNTFDQYDGAMGBVMUUBRTSUIGALTQNLRHYIEQDTEMHJFXXKLVXARDDBWSKBHUUIBOYLQHZMRJTFYZCSAXTGXBCPZLROMGJGAVRHEO");

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
    msg.setTimeStamp(0.255190980496);
    msg.setSource(50482U);
    msg.setSourceEntity(155U);
    msg.setDestination(19891U);
    msg.setDestinationEntity(168U);
    msg.timeline.assign("MPNNVNTRZGWQNBVAAUYDMYIXXLOKEKYKQJKZQZJFFWOACOBJORAOIMDNEQYRHQSQNQPPBFFMHVOXDVTCCJYNRETPXVYIGKZHUTM");
    msg.predicate.assign("BKRONLGAHPRRITQWJKSJYTVVLBZHEEZZKPUSGCMZRVGQQNOREYBCATWWFCDFSKBSEHNV");
    msg.attributes.assign("GSEOZSLJGXDBRBUKHRQEGPIYUCDJGMTHAMLDCGAPPNBINBRTJUVDBNBESHAOSHUMXDQGYKEZYJYYZNFUQJFQMOYLDUEMLJHOSJXZZLFNAXNNNCSQRGLJUZKWWVRLVCKTBRWQDMNXAZXDHILCTUVETZVFYEYWLNCBDFWZORRKMPIECPKJWTLEHTASMOBSJATMTQRCIPPCCIDIHVWIPIFXFRXKTOWUVKEYXGKKPBHAUFFAOVGVHAPOSOGZFWWQM");

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
    msg.setTimeStamp(0.479549548322);
    msg.setSource(51229U);
    msg.setSourceEntity(26U);
    msg.setDestination(39905U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("JAIAOGXQPMBYZXJVCQILARDHTEYGSLSPTORJEQUBLOLBJDCGXZJVVKEFPEEDYQLHRAIJUZXHGFNDRXYMZGOKIBCJIJGOPOKOERIKGKKMWAHIKSBNYMASTOBVHVTBUMQVYQLRWHCWFCTGNPWERRBAVGC");
    msg.predicate.assign("OUMYAOELOASKCHTLTCQWBNWNUKVHVTZPDXHEDEQUSMINNXNVAOSYSCTDRI");
    msg.attributes.assign("DMSHUKCKJRGQCEYTCQYBFWNBCFCAKHZVKWIVN");

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
    msg.setTimeStamp(0.251139023945);
    msg.setSource(33198U);
    msg.setSourceEntity(243U);
    msg.setDestination(51739U);
    msg.setDestinationEntity(201U);
    msg.command = 233U;
    msg.goal_id.assign("NNTRYODGKVCXRCCRRGEJLSWKBTRYLPOYBBPHXUGKADAXSQYFEIPZVMGIJFUWEQJTCXMOBWIIKSZSISORDCJLHUKYXTKHFPETZDLVVJYWBDOCRGDFITWQNA");
    msg.goal_xml.assign("VZUYJWIKUNGCNRPRKYDEWASNUOSPQMXKPVNWRFMGJTSHODOQBYIANMGDTVBQBIKMNNPTUPFJJHTHUEBOFVLVOCKSBCZKHFATIWALFDMHAQXACJZSXVLKG");

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
    msg.setTimeStamp(0.69905646182);
    msg.setSource(57073U);
    msg.setSourceEntity(238U);
    msg.setDestination(54599U);
    msg.setDestinationEntity(211U);
    msg.command = 212U;
    msg.goal_id.assign("GPPJAIXJERCGRWWNXLLZPDVSQEKGVAHWDMSBBKJHTFRMXHIQZMVIQMUTJCZKAXVRNAEILMOKCIKANQDUJGYSOEZLFJWXAOQHWCPPOOTFWYZJYOSLLBUNSXABBDQHYEBZWWTUKKSASZVQPUHCXEBBPHILVMRTZQDWYUYNCHUHSGIBNRRVBQREATNTJUMDCFIDLDKKTCODQGZTSVSZTCNYIXOLFYYJENVEEKFGPGVF");
    msg.goal_xml.assign("OLMPEYQGALVFGVOXOBGWMIIIYSYJRMDCIHXNJNUSZJDMJCAYTPSAWICMOHFXPQFBVBOZUSVKFHPWXXQUCGGWYRGROBTUCRDRGRJMLOCQVWEZKDVDHYTVNHLRSNHLLQCDT");

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
    msg.setTimeStamp(0.0115427779383);
    msg.setSource(22489U);
    msg.setSourceEntity(62U);
    msg.setDestination(30348U);
    msg.setDestinationEntity(153U);
    msg.command = 74U;
    msg.goal_id.assign("ODTFSDQVUBTXPBYWSYKIXUINH");
    msg.goal_xml.assign("ZBJZGNNRNCLMFJQZKGUJFOHNVPAWNJOYIAQHTDKVDAWMTPRVOPMUWIDXZEZEGZICB");

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
    msg.setTimeStamp(0.962520152053);
    msg.setSource(43088U);
    msg.setSourceEntity(254U);
    msg.setDestination(24257U);
    msg.setDestinationEntity(243U);
    msg.op = 72U;
    msg.goal_id.assign("ZJAOVNTEMPUWSMNGWQJAXSGMRWSQYSFSIRVHFIPFZRNBHUBERLXCMWTJUVOCWCUDGAWIQXLCELOKIDUXNYFOEZGSHRTXMOKRLXJHXPKPIDQHPJLUJBVQTYAMBCFTMPESM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UMIAGJBQYDPMXYQLVQAQEHWKW");
    tmp_msg_0.predicate.assign("UJYVKKZRQIYEVJKDCZFSIVANDANJBLPOEPZMNDXJVWLFHRDLHKOTBGVWSUNMRSQLOFIYOQWTHCIBSXQJFCFMSTCWUHBAANJOUBHBOZVBWSXJWIUCTEVJMKTVCPZEEAMYDHSXDUJRYMPBMMBERUAFUPLFWLGHROWMSGNXPAGPGZKKYBLWXVGTKRPGCPUYFZQPKNTFNNATEZZVGDYEQJCDLAFQEUOCQTXRDYLHSZIREIRXXHIADIOLN");
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
    msg.setTimeStamp(0.918649474307);
    msg.setSource(25303U);
    msg.setSourceEntity(148U);
    msg.setDestination(34445U);
    msg.setDestinationEntity(252U);
    msg.op = 1U;
    msg.goal_id.assign("HBOFKQTDXRZMSRSEUMHGGCRQTKVFJJNUKPTXYYCOLFWDJAOEXRWSGMJIETBGSWCDKGCAMAOTXDWKIWSAMQVCLUOBNCEYBRLLFVMXHQEJJQLNFDVCRBLKCIGHESW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VRFEIZKKCWPJECLUUPDVBAHGYXJBDZHYLVLUZXXOUCQDSCYJTNSVSBHKICGANREEIOQTHJBBYEOODQOZVURCJHGFTWBWSDKJPNPXGVKWMSPWS");
    tmp_msg_0.predicate.assign("PVTUMLZYXGKIUIPMPAJUZOSIMZGGBHDKGCZPWOLKTTIDEEFUFAQYBNGXDAVVUBJVPMJFDQKWXICQHNEJSQBNFKNDNTUQEUCXWLXJCSARXHHDEHOLFBMADJRTZZEQTBEYMROLLQLPFHSOMKFVJRZXSUOASUFPEOJAHRYNTZRTZCHFDXNPDRVXWVIVKIKCWFBOBEAHJMLQ");
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
    msg.setTimeStamp(0.688932856209);
    msg.setSource(5278U);
    msg.setSourceEntity(184U);
    msg.setDestination(8395U);
    msg.setDestinationEntity(132U);
    msg.op = 190U;
    msg.goal_id.assign("LQTPIGTQNDTZEKFSXFSATSRYSPAQVJFXWTWPKMFCZCSUYONBJGCTJHVIPELZTAGBTDHVYJQZQEQMSZSDCGNGBUMVLNABFRUMMRJJIKJKACRYVUYKWYDPUUFRXOBVXNMQXGIWQJEMRKICGOOBMQFOUIOLDHYXHRNXBTJOVOWBKWVDGCWCSIDUGYDMSFLXLEHQIUWPPYOLBDCCZZARENBAPZFLHAMGEZJNOVIPHXISNLWK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FHDDJSIDCVYGTFGWHROTRKAMWOWVTSFVJRKZRBMWQUBBYEXCIILHCGEAKVSQCICSHPHRAJTRUDMGGQZFXPPOZZLXFZL");
    tmp_msg_0.predicate.assign("OSQQNJJSPYCIECIRAQOPVGLLGXTIEUXLEKZGWRQNDVUVYOFPKWXZOO");
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
    msg.setTimeStamp(0.00878321730758);
    msg.setSource(16098U);
    msg.setSourceEntity(85U);
    msg.setDestination(424U);
    msg.setDestinationEntity(162U);
    msg.name.assign("HTHWJZSEVMCDYXMFORVPBIFGEXNGCTJXDPNWMKRKBQFNHOUWKIHUWPZAGLBKSYHOSARRFXMELMVYQVPNTTKJSADKCFXVGZHDPWUJCRAOKLICEOIVBYPGLNESLNDJGFEPEMNXHFRDERWLVOUSPMXNSISDYTJNFYTQPAVQXPEZZTYTDTIBHCZKCXMFMDXUUSARAQZZICACSLUQZEVBYTNQUR");
    msg.attr_type = 99U;
    msg.min.assign("EBTQJMDIWKLGHEKMIBXBLTYMVZIZZWBBD");
    msg.max.assign("OHJWJFDBDZHUYAVGLWODRXCLDGBFMYPTURMOKRIYCQYOSZZENRYKUNUXUTZKPSOAJCAXBLMBEGKZEOIOUPFCIQGFFVSMGPRTWDWRYLVGJKYAWQXIJEVBKTQBJJCANLIINEIXUKRRTEUXCARLINEJDVJALAMMZQF");

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
    msg.setTimeStamp(0.90170402123);
    msg.setSource(55130U);
    msg.setSourceEntity(242U);
    msg.setDestination(933U);
    msg.setDestinationEntity(212U);
    msg.name.assign("ABJYLRNNKMZQYDSBHOSQQMIQSDEEADPCXNTPTLITDVTSDVARKUGVZHODBFKBHAHQXZTRCQWIOYYXRJLQQECLHOETPJXENPGXUNHTWKYIARPHAUDCIAQEEIJZMCGYCZOJMWFRUYBWSELKTLLWWNGMIFFBXGEMTVVZLFRBJIJCPBVIXFOGEONZFXSMJXFHDOKBBZKNGNVWQFASRUKVUKWHLSOPHMCLYGMYOIDSURJDS");
    msg.attr_type = 35U;
    msg.min.assign("RICHYNDQKDANLUBBEDFFHUWWKUOZXAPXNUBEQYTSWGWAOVQGTCFTAKMSALLPWXWZYMKRTGEXYOSTJSCRVSHCUPFRGITRLFKNVFMEXMGMJPLXWTNKVNISPIOBAJOFEEZMBFLJZQDYFYIRUHZNUQACOWNDKYRNDQJJBHVZLHBIXXOOSKAQARYUEPVLXXDEHB");
    msg.max.assign("UQHDBAYLZVICCPXSGLGPVDWPGFNXUJWOUIZSZVRTIDRGRLQBHNRWZJCIBFAAKCXHCEILCIFVKODTYLIGCMEOMWNOQGXLQDKHAAASOJJIGWJVSZPOBMRAIYUGTDNKRPNFHTPYZKRLOVLKEMJYYHFUWSEBUAMGKLXCZKBWUJTRTDVDBACPJPEJQVQNHYLMNOQVVFUTHKKOIU");

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
    msg.setTimeStamp(0.101939236261);
    msg.setSource(11630U);
    msg.setSourceEntity(141U);
    msg.setDestination(62967U);
    msg.setDestinationEntity(241U);
    msg.name.assign("XNYCSKLQSUTPZBODAFRHGZXZEVXIDFNGYHGWAWJVAUFPBAHDPIYCJFFKTSWOXQRONFKCSENLJUTQHLRKQKAEVKMYAGIRLBELPZLJCXADIRZSLDJSWDZOPHUUDYZXIOEDVBJBUMOLQXEBDTYUJMEVHYHOWNJQSECTTNEOZERNMFMRJMJUIIIHXFPKZQZXPGVKCXUSGVK");
    msg.attr_type = 108U;
    msg.min.assign("IXCIAAEMFLGVTNVDTHSCHYXZKGTOUQQNKYLWKYVNROWCRSTBYQCPJJBKMIUFGCNORSPGPQSDLZFUQRTZEBTSJUELYSDTFNGIZDUBMSTWBVJKEEUXTKUEIQDMFWIAZSLZCYR");
    msg.max.assign("URHOXZNKCRWIAYKRVZTMFDYSTHDHKMXYBAOPLQFGHOWIWTCCRJNPXDQLIXCXCECVQQEQALPNZUBENQVEOIHFHLSSVGMUAMNAKIUKVAVLMKXRNPSACLGGRSPFPJOBXHNSGPFIJJQBEJIXBCRZMGLZFWFIBUGHKGZDJWBUVJFYYD");

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
    msg.setTimeStamp(0.906446855662);
    msg.setSource(19198U);
    msg.setSourceEntity(10U);
    msg.setDestination(26398U);
    msg.setDestinationEntity(98U);
    msg.timeline.assign("EDMGISSFPYVREHXDZOUUKNUCCUIWGPTTSMWRYMLIPVJMDSIXTYBTDFZOANPKYHKNOFGGAFQDP");
    msg.predicate.assign("XUUNXXCEWSSUDYJRIONESTAAKCFJKCWCWIFJBMMDKFZVOBPQLOOPIGRBBXHLGFRJKHJJAEGZHKXLBAILQLHDTOPKTVABPWLUXQVQXLZATPARDOEGUDAJZII");

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
    msg.setTimeStamp(0.623183626391);
    msg.setSource(38930U);
    msg.setSourceEntity(190U);
    msg.setDestination(2433U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("MOCXLHIYIBBNGMPPHIWKXENKYTXWQMPWYNGIGHLXPDYZRHLRW");
    msg.predicate.assign("AYEVMZSILCFRODOWTNFVFHBYRZOCEAWSFZADWVGYDRMGOIDXTTJBTNXFBKZAIXMFBSVHWKQYTOQPPCZRVRVMVNXXS");

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
    msg.setTimeStamp(0.198637644829);
    msg.setSource(20953U);
    msg.setSourceEntity(1U);
    msg.setDestination(3602U);
    msg.setDestinationEntity(241U);
    msg.timeline.assign("MWZRFFORHXEHDOZSLXTLHLYPJPWYQJOQWZEWSUTKEEHQWKNICZOACUGMQGECAAYBNUUNDQQGMICGXJZCGBOEXNVVIRTLPFJLHIYRWVIBVFLZRIQOHTSLXNFBXKQCGMZDPKFPRWEPVMGRFOKHYHYGSHRUZFLGMQMIAQYJIKEGATDSLBYBDSVNTALFSVPCDCSCMUTAADJKKSKZMNHRWFXOODJJVUITJAMB");
    msg.predicate.assign("ZMIUHAGGXNJYAWHAJGJLZRHQYTBZZTJWZUNGCPEUEPWFBTKZCXKERZTOYVOBDFXIVNCGBHRDWIZONHBGGRDCCAFUJTKLMPDKKLELWIIMDYGKCRJQOUMTKIMLPILXFTXBDWDOBQYFMXAABVIFYXDQYMQAUISSSKHQCENZASJSYXCPNUEVCGUKSRWNBXFDMOQCMYUVOVF");

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
    msg.setTimeStamp(0.8157395469);
    msg.setSource(43267U);
    msg.setSourceEntity(214U);
    msg.setDestination(9197U);
    msg.setDestinationEntity(166U);
    msg.reactor.assign("HQRNYAZWIWVOXSAPNDOETOOWSICDBVCIHWPLNSTRKEHNGUMHWLEBFSLLNBDBLEURGSHXLVT");

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
    msg.setTimeStamp(0.37633329768);
    msg.setSource(14037U);
    msg.setSourceEntity(175U);
    msg.setDestination(17157U);
    msg.setDestinationEntity(121U);
    msg.reactor.assign("MYTPRESTYPFCIOLNZACXGVMQCJXFOGAMBTSIAMIBZEUKCGGZWRZTMNKWULIKNWNXXUCRJHYZPHZQWVGIADEVJRUUSVDXYQIFWPNUJDMHUVDHFICXSVXTYBD");

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
    msg.setTimeStamp(0.820417511509);
    msg.setSource(18678U);
    msg.setSourceEntity(25U);
    msg.setDestination(19150U);
    msg.setDestinationEntity(130U);
    msg.reactor.assign("LDWXJJHZUYQVKHZYRYPHTIFFZIEUEAUUAXOWOPNTGRQYCHNGWVJAOYCPOGVUFWRFPIHGSGHCEKKCXJSCKMAVFFIEIDSABIPXBELGKEC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BCNMNGUIKKWRDKYHVGQJOORXARRNLFNDVSOITKSACHAXAPLYHUYHMFGNBEVJPTDLCKPWQEZDUHDYOZAKXLXN");
    tmp_msg_0.predicate.assign("DTXYPAJBCLQWZWUCIWQOENAMNWWHXKYQNVKZODMSRORYINCWGAESCKCJVARORVCV");
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
    msg.setTimeStamp(0.0120806916983);
    msg.setSource(55098U);
    msg.setSourceEntity(227U);
    msg.setDestination(35996U);
    msg.setDestinationEntity(78U);
    msg.topic.assign("PSMFBBQZLPFYUQLRREZAVDOVSSPWKJRRTWEQXAWVGZXNLWCSRBHNEJUHIIHRSUEGMCYVXFSJKMGXRXFYPZQEEHWQJIJPOQPVZPICSBONLJFGDTIHIFGZMOMIBHFNKGJPSYBCOBLOCECZDUVCODNMGKTRQLIFBUYRFMTVVYXDJNKERAQWVN");
    msg.data.assign("SPQIVHZUNDIOLZPGMSNMIFUTDRSXTQRHPCPQZFHXEEQPRDYILXNQJORVBGXGBZAMEXTZMHJGBPS");

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
    msg.setTimeStamp(0.810644449023);
    msg.setSource(52974U);
    msg.setSourceEntity(50U);
    msg.setDestination(6970U);
    msg.setDestinationEntity(161U);
    msg.topic.assign("THUCJWCLAKXNZLQDBLPROLGSROCHXIODKSPSMFDIRSPCCYLKCZNRXGYEAIBNKOSGFZQGGTRVFJCJLKTMBNKLOTAYBPPVEWQJIQSVOXQMWVWOEYZXPWIBRUVADXJSZGYCRHEODWTAMJDAMPTHBIZUQQJWLMLVMGBNSKBVUMZEPWGDXDBYZAURFABFTCJODHENAXSUNYHPLRNZHQIYXQFET");
    msg.data.assign("NALUDHXJIZWIRMSDNIXJBHZRLOSGKMQNWZGXYLIEPVKNJVMEINWOYALDWONOFASLETDLTKTJTALAYYYEQRQAHCO");

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
    msg.setTimeStamp(0.847729158152);
    msg.setSource(18208U);
    msg.setSourceEntity(233U);
    msg.setDestination(47187U);
    msg.setDestinationEntity(89U);
    msg.topic.assign("KAGXYZQJCCDBFPHYIFTFITYGWMUCHXVUGPDGQWLGEJFTPUEWBSHVOODTDWPCUSYIHMXPXWBVNTXDDTPHCBFYBCMTVBBEMSTCNDXJELVHKZNANRRAABRIQRJQLNOKUCXWNYLQXSIMOPZLELNUOVETRNLJSQSJHFPVUFIWZZKJZSOKHKIMQA");
    msg.data.assign("PEZDZBFVZCWADAOTLKYWMJLFVPNRYITRJHDHYUAZUXAIKOJOKNTFFSMCKGSUXQGNSZZQNZZUJAVNYJBMLPDRULMHICTOGNVDUGRPSKLXBRHKAHCQFPXBHHURUKACQDADWVWXERAWOQXQLCWQJMCKRCIMJELNICOHGSUGEYMJECILMEOIEQQVHILVTOBT");

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
    msg.setTimeStamp(0.734452431007);
    msg.setSource(13068U);
    msg.setSourceEntity(42U);
    msg.setDestination(21606U);
    msg.setDestinationEntity(224U);
    msg.frameid = 175U;
    const char tmp_msg_0[] = {-82, 117, -3, -53, -7, -128, -122, 117, -43, -13, 106, -125, 77, 36, 95, -44, 38, -4, -45, 75, 115, 101, 18, 44, -15, 67, -40, -28, 32, -107, -89, 65, 114, -58, 55, 79, -87, 36, 5, 81, -23, 93, 87, 19, -53, 116, 90, 89, 35, -24, -54, 7, 91, -64, -63, -48, -119, 109, 81, -97, 35, 107, -118, -2, 70, 97, -112, -97, 45, 41, -109, 3, -23, -32, -125, 80, -4, -120, 124, -48, -61, 76, 29, -74, 6, 19, 28, -38, -26, 34, 5, 100, -26, -68, 78, -56, -63, -91, -45, 90, 5, 15, -66, -73, -93, 60, -97, -43, -122, 1, 42, -58, 90, -68, 24, -34, -4, -1, -94, 23, -45, -11, 65, -9, -92, 59, 107, -65};
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
    msg.setTimeStamp(0.458778957342);
    msg.setSource(6027U);
    msg.setSourceEntity(142U);
    msg.setDestination(45514U);
    msg.setDestinationEntity(220U);
    msg.frameid = 222U;
    const char tmp_msg_0[] = {-28, -24, 57, 126, -128, -34, 49, 110, 33, 1, -111, 111, -87, 5, 101, -68, 121, -40, 78, -8, -35, -84, -110, 13, -29, 53, 96, 59, -92, 99, -49, 59, -109, -118, 23, 89, 83, 32, 45, -17, 36, 124, -109, 126, -67, -66, -31, 51, -100, 119, 73, 107, -87, -119, 110, 118, -32, 20, 56, 16, -43, 87, -20, 21, -50, 10, -38, 41, 6, 47, 63, -73, 108, 66, 8, 106, 62, 34, -92, 116, 69, 84, -90};
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
    msg.setTimeStamp(0.466173249123);
    msg.setSource(24607U);
    msg.setSourceEntity(115U);
    msg.setDestination(49729U);
    msg.setDestinationEntity(122U);
    msg.frameid = 24U;
    const char tmp_msg_0[] = {-15, 88, -81, -29, 58, -34, 21, 83, -83, 68, 72, -1, 28, -49, -99, -102, 3, -93, -48, -92, 46, -54, -30, 85, 95, -32, -19, -110, -66, 28, -21, -126, -73, -27, -81, 86, -18, -84, -24, 80, -50, -86, 17, -72, -127, -86, -48, 102, 38, -84, -114, 109, -70, -27, -96, 4, 24, -29, 60, -6, -41, -109, 111, -10, 33, -89, -1, 23, 19, -101, 78, 39, 54, -37, -18, 77, -2, 103, 6, -80, -125, 29, -26, -25, -21, 7, 69, -49, -92, 50, -50, 21, -93, -94, 95, -61, -4, 39, 21, -21, -110, 12, 107, -24, -91, 95, -124, 61, 97, -2, -31, 97, -22, -51, -43, -11, -26, -68, 0, 28, -51, -50, 42, -16, 41, -92, -116, 34, -103, -2, 7, 113, 55};
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
    msg.setTimeStamp(0.756684061674);
    msg.setSource(33743U);
    msg.setSourceEntity(102U);
    msg.setDestination(21560U);
    msg.setDestinationEntity(192U);
    msg.fps = 125U;
    msg.quality = 246U;
    msg.reps = 54U;
    msg.tsize = 134U;

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
    msg.setTimeStamp(0.501896791742);
    msg.setSource(18317U);
    msg.setSourceEntity(0U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(14U);
    msg.fps = 222U;
    msg.quality = 125U;
    msg.reps = 193U;
    msg.tsize = 184U;

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
    msg.setTimeStamp(0.898474572596);
    msg.setSource(63174U);
    msg.setSourceEntity(104U);
    msg.setDestination(39660U);
    msg.setDestinationEntity(185U);
    msg.fps = 24U;
    msg.quality = 246U;
    msg.reps = 73U;
    msg.tsize = 215U;

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
    msg.setTimeStamp(0.948746025657);
    msg.setSource(11847U);
    msg.setSourceEntity(27U);
    msg.setDestination(35195U);
    msg.setDestinationEntity(10U);
    msg.lat = 0.0844946925367;
    msg.lon = 0.524835735233;
    msg.depth = 196U;
    msg.speed = 0.509561597054;
    msg.psi = 0.401597466974;

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
    msg.setTimeStamp(0.602844157527);
    msg.setSource(977U);
    msg.setSourceEntity(203U);
    msg.setDestination(22581U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.430934219603;
    msg.lon = 0.954458257535;
    msg.depth = 12U;
    msg.speed = 0.793977171657;
    msg.psi = 0.1891348664;

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
    msg.setTimeStamp(0.288729633321);
    msg.setSource(44210U);
    msg.setSourceEntity(44U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.417183084183;
    msg.lon = 0.411409144784;
    msg.depth = 138U;
    msg.speed = 0.719065511032;
    msg.psi = 0.349752640236;

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
    msg.setTimeStamp(0.660417765184);
    msg.setSource(43328U);
    msg.setSourceEntity(16U);
    msg.setDestination(25243U);
    msg.setDestinationEntity(58U);
    msg.label.assign("IILVOMZTVVFSURWHMAOGFGCGWVO");
    msg.lat = 0.654394237111;
    msg.lon = 0.313615409979;
    msg.z = 0.996882282543;
    msg.z_units = 36U;
    msg.cog = 0.596225909915;
    msg.sog = 0.642445856507;

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
    msg.setTimeStamp(0.472397448164);
    msg.setSource(48109U);
    msg.setSourceEntity(244U);
    msg.setDestination(53147U);
    msg.setDestinationEntity(136U);
    msg.label.assign("QYSAQDMJSCIWIIUOALWJLCJFTPZTVWEHFBCFSCOQAXHGYEKYMSXNPMTZZSRJXVTKJGRTEPBTDOKTONCDONDHIKCMROMEKLUAGUNQXZSFBRLFBNEWZKHZPDGZHEILLNVWNYAPCSJLEJEGIADGGYPWQWKBMTKBGVLSDFXXIUOWJYHLZBUAFUVUQFPVPZRRKLIBPVYWWQQHEIJOEYURHDZMFBSRYXVAPQVUGTJYMNSXOTGCHHDXNXFURKQRCO");
    msg.lat = 0.300987953255;
    msg.lon = 0.487317953005;
    msg.z = 0.331303571607;
    msg.z_units = 107U;
    msg.cog = 0.798841468755;
    msg.sog = 0.121266945222;

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
    msg.setTimeStamp(0.0557931749547);
    msg.setSource(9948U);
    msg.setSourceEntity(46U);
    msg.setDestination(19729U);
    msg.setDestinationEntity(122U);
    msg.label.assign("SWPLRALCAKJHEAPYOITUGDZSQMQULCJASITREHEMXFNPODPAVGYSSRKQPSIUXIRHWQBTDOGDQYYIRTXMTERRNLYABMTHUULVIWONXZBBXSGDFXRIHVWCMDGAKFMZHYMXECAHHXBUNJDNTVPWKLJNHSZXFVIBCVPYLDOTVAPIECJYWGCFLFLEZOKDVPJEFKTCNFUTZHO");
    msg.lat = 0.150800079149;
    msg.lon = 0.331564227908;
    msg.z = 0.217871141289;
    msg.z_units = 134U;
    msg.cog = 0.562703438004;
    msg.sog = 0.23657792245;

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
    msg.setTimeStamp(0.477000336508);
    msg.setSource(47142U);
    msg.setSourceEntity(254U);
    msg.setDestination(58163U);
    msg.setDestinationEntity(235U);
    msg.name.assign("RDGIECWYEZIQMCWNQQBATCVFLEHSCTGMQINHZYTLUKJXDZMVOOHIMIXUBZGYSVVNOOWKNHP");
    msg.value.assign("OVTUHMPJUIJLWIWEYGFMYIULRIWNITSWQDQDXTABNCLUJTTJEUKHPQZJRHMTEMXPMIGOLPACHXHTJQGKAENGMOKSWEROAYWWFKD");

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
    msg.setTimeStamp(0.310558250519);
    msg.setSource(45050U);
    msg.setSourceEntity(179U);
    msg.setDestination(64043U);
    msg.setDestinationEntity(206U);
    msg.name.assign("ZKTCZWQHKZOTNUTDKKIJWXNZVITGNQZSOASRYXAJHQHNOCZFWYZWMKLJCSCGQWIQSJLSFTBE");
    msg.value.assign("GDERSSHSJQPPSQCUGCUCSPVGYKIOQTDHNLVQJIQISBCODKIQTFEXHLSOYSXUFAGMELOZMHVOMDMGNEWCKHSLOXMKWJEFAWYWDANUTLJPZBDQTWUTUZRYRJPZMHVWFTPAUAVRQICZFUYWWFGKDTJNZXNVGINBBRXUZJEYLAGZPEVLQIRRNEBSXGXBLMQBHXRCLATRKZRJWMH");

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
    msg.setTimeStamp(0.439026860909);
    msg.setSource(19155U);
    msg.setSourceEntity(6U);
    msg.setDestination(32342U);
    msg.setDestinationEntity(19U);
    msg.name.assign("PKSOXIEVLCQVNSDKYHXCAJHIAMLYKWBUQYMMWZYASDRDQOFDVIIPUFNTAXNEQNDGYUXLYHXPTPDBSFIJUOEBQVZPKASLGQGGVVZKGOYEXPSYBMFEWCPTUCJCOPMNMFGIDVOWJNQCRXJNOCRKHTEWDLSKFOGZZEFLSAMUBGRQYDYZJRLRROLRTZSBFUIMWKJ");
    msg.value.assign("HMZLQHPKKLZYWSVNYJDECCMWPINKYCFAXYKTJRQYJRC");

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
    msg.setTimeStamp(0.246569653358);
    msg.setSource(11353U);
    msg.setSourceEntity(197U);
    msg.setDestination(13186U);
    msg.setDestinationEntity(237U);
    msg.name.assign("HJPGVRDTWIXTYFEJJORRAVNCBGMGRMJAONTNJSTISMEGAOGVZTWBVSSQWQJCPZDBSMKDTJWZMUEKKLCVNHFQOENYDXKVLRROACYXGPXQIPUEOWKWAAUCPWULPVIGCEXTFWLCFFVIHBLUEZLFOHRUAXNZ");

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
    msg.setTimeStamp(0.313930287059);
    msg.setSource(20640U);
    msg.setSourceEntity(88U);
    msg.setDestination(31806U);
    msg.setDestinationEntity(99U);
    msg.name.assign("OKBPBKLKDOHURBQNFPDJWJANJF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RSADNXPGVLQXXELJCWWIMMPSGRDFXGNCETSJWBHEGSXNKOUTKPCCCFZHKRLEEFXYPQJWBWFIVQSGIIRTQRNTYJGZMIBKBCHMHVOMIXPZVAQHAZAKBKZAFQFWSJSTEOVJBRYOHUYQYYUOKOYTJPDGWKTMSQCODYVBHTIUR");
    tmp_msg_0.value.assign("AXQOOHDBNPAOZIVQTULFQOCVWVLHPJXGQBSEFMUAGWJNMJGZMXTCZGRVSTJDCCZWTKSBASCRFPZYMXULYUYCENNHCXDONDSVIYMZYXUFOWLIGYTQKLGHJNRRWQFKXHGPYKUHDTXIHPWIEWLCVJTFJUPLKEQDEOBKZRBSZDWEKXCJNTICUDWPRMSBRAMQRBQGOMKOIFSAVRFAJNTVIIAYYNML");
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
    msg.setTimeStamp(0.15089202275);
    msg.setSource(56058U);
    msg.setSourceEntity(46U);
    msg.setDestination(44800U);
    msg.setDestinationEntity(242U);
    msg.name.assign("WUFRXLZKQTFZZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SCSWGEBAHDKVHDLECBZAEBPIFMAHUWDIFDUCYWVWULWMPTSLDRIP");
    tmp_msg_0.value.assign("UYLNVLAJAKWJWMUVA");
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
    msg.setTimeStamp(0.511313390604);
    msg.setSource(52873U);
    msg.setSourceEntity(80U);
    msg.setDestination(8801U);
    msg.setDestinationEntity(45U);
    msg.name.assign("DOHCBVDLGGMCJDJCINDNNBLKQROBRGZMKWFVPYBYGFILXSWANBSAQCOUNKWQQWEMSIRLVSHOUXJXZOIVRJNZDYYOHXDJEDRNGZAYFVFCOWMETAXTGISISUHZJLUNWAQVKMFGOJKAMPSVSRDPXEHQIXJZVYPFYFZHAEPM");
    msg.visibility.assign("YNRZHKGUOIQEZGWKPIIKETQWTDMTRSEWZFMBGWMRBJBGUFIASVKAEFUSPVIFLEZDDUSLKZ");
    msg.scope.assign("FVWBZOUBMTSNFPPVCMKAJTHIEZPYGQNSYXHXPPSWCJXLPMSNGSYKQNAXUCJAYTUSORIYDHRJDUPTKOVBQAOADDKSWTKTZIISYBXBQQDUZWWMQSIZRWWCFOUPBOCVINLPKCFBCTJMQYBDNWCTBQDVRAYXLRA");

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
    msg.setTimeStamp(0.271357535844);
    msg.setSource(25683U);
    msg.setSourceEntity(147U);
    msg.setDestination(24036U);
    msg.setDestinationEntity(142U);
    msg.name.assign("HPWVMPIAGURMSZNCEUTCLDVRHYIZDDHGHQEBQHEKJEBXDBYLVBXOTFFALMWRZYOZITULYCFGLUCSKWBGUPHLBMYPIFATMWNKRJLYVQNKJNEXMOFODZMOUOJWCDGZLPVDJPYKVGMKQKOZZGPCRNX");
    msg.visibility.assign("SHZHMIPIUYXDIBCVPWYMESNAZJDTRYVCLHOLXATTQDRJUQMHMSGKZIQPPCKNLRNITQXSCFWVTUMOJLCZOVIMYSZECYNKQZJGAXVDANUDENOEFUBOOKFICDUYWOEXQUVCZLPJAIYKLQEGVTGJWTDUHEQBXRSPPXYMKOGNBDNEHRRZWPEAHVWRJHFFTSGGFCGILDBSFORILANVPBTBXBKKKKAMWFJWSLMAOJXWFMHUPYQRLZUVNSBCYXQG");
    msg.scope.assign("JJFLVMFAMCGUOVRGGPBPOEVDIPFTPUYSKICXXSWTXAQAERZMWHVXGJMQYEWBBJO");

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
    msg.setTimeStamp(0.570644215752);
    msg.setSource(12510U);
    msg.setSourceEntity(81U);
    msg.setDestination(13887U);
    msg.setDestinationEntity(215U);
    msg.name.assign("RKQULKUVRIGNOTHTQC");
    msg.visibility.assign("YONOLDRPFUSWCYLOLTJFVILYXVRLTAKSKQWTUSZMYSAEWGFMZNBURWIZBZVEJZWGCUTEJZFYNKCZEWZEXLKMMVHNQJXDDAWIJCCSUKNTEMUHSJOPBPIQDSPDTXGAGUVBBRHXQLJMYKPABJXVFYXXNC");
    msg.scope.assign("HUEVJNUIQCBMVWOEKEATRSGDZMWGP");

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
    msg.setTimeStamp(0.801708900911);
    msg.setSource(29620U);
    msg.setSourceEntity(79U);
    msg.setDestination(12327U);
    msg.setDestinationEntity(152U);
    msg.name.assign("SLDISIZRLMMUZUQFHMPIAKQSRDHNBQNXDXTCBU");

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
    msg.setTimeStamp(0.868111118625);
    msg.setSource(53132U);
    msg.setSourceEntity(153U);
    msg.setDestination(57835U);
    msg.setDestinationEntity(19U);
    msg.name.assign("KWHKJQEWLIQDXTMPFLUOYXPALGOUPLYFKSUGMPADTPOZVDJMMAQCVZCFMIHXMLUIEBGNPBDREGMHQZZEYKDNBGKRFGHNJMSJJOPHQVZZTD");

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
    msg.setTimeStamp(0.610565995914);
    msg.setSource(42502U);
    msg.setSourceEntity(253U);
    msg.setDestination(1427U);
    msg.setDestinationEntity(144U);
    msg.name.assign("OODQQWXEVTUCEZWALGSCUZCZSEAKJBTLIZGLNYOSOPXLKCCUHZWESYEOJJUAVOPKKOASSUFVMPRYALYZQZWRGPXIQUFUTGTJFMMAEVXVQKGTHGZBWFPMIVYDNRFLTSGNWDMNMPHPCQLQZHFKYWRUHGNDVFHDQIFFIJLRCMDSBHEEJ");

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
    msg.setTimeStamp(0.621392296346);
    msg.setSource(9581U);
    msg.setSourceEntity(76U);
    msg.setDestination(53863U);
    msg.setDestinationEntity(210U);
    msg.name.assign("GOSHFSFHPOSXQWUWXKALTAMHECMHRULWIZBAHGOESGUAULKUYNWTQUQPLYLYDRNBXDJPIZLQBQXNZOOWSKGEYAKKZPATBSQFHAWIFJEHNIIBQCCPAPUYBKSKDORDRDQJHEDVZIVWEFTJMSPGWBMJTITVVFMBJMCMZTEIDGXRMVFURMJVXCMECGNPPGGICBNADEOWCYZQYLEXRNBHSRVOTTNHVVZWJJOYYVFRLFUYXXLZPDAODNSQK");

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
    msg.setTimeStamp(0.143139713023);
    msg.setSource(14569U);
    msg.setSourceEntity(77U);
    msg.setDestination(43796U);
    msg.setDestinationEntity(126U);
    msg.name.assign("FQSBUYVCVXMEVYJLUENGQRMACVARUEXSWCRJNTGQMZHIOIIEFADTAYIMLEMBWONHFWZVUTSIXRWGOWEYEDQLHLOBTCSTINKLFQKABZXVHBVDDVOKZXJCDXREPLXOBPFLJBYWMCQOJHNHUGTFGSCATLBAUTYZCJFPZPNKWMKJXUDRPRNFHLQRGICHJSGZPUWKSDJFPRDYKNPTYXVUAAIICFEZMWXNKAYOKSQWTQMZEKSDR");

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
    msg.setTimeStamp(0.590729566086);
    msg.setSource(34017U);
    msg.setSourceEntity(127U);
    msg.setDestination(19974U);
    msg.setDestinationEntity(125U);
    msg.name.assign("XEWNSFPZXPPMIJMJNZSTLXQMYHOBUSZFEPOFLEEHMLCTJGXIJNVMCWFVXVJXLRKOGZHYAHNYOSRABTDRQDUQJHKCPTVVJBPNMAXVQOIIZGPUXIYANZLHEKAWZRDKGRKXVPWOAEDHPWGGWVHTDLDKDCNBFZPQTOIF");

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
    msg.setTimeStamp(0.625297239487);
    msg.setSource(14505U);
    msg.setSourceEntity(47U);
    msg.setDestination(38782U);
    msg.setDestinationEntity(130U);
    msg.timeout = 3591694828U;

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
    msg.setTimeStamp(0.211507468116);
    msg.setSource(2856U);
    msg.setSourceEntity(214U);
    msg.setDestination(25427U);
    msg.setDestinationEntity(217U);
    msg.timeout = 2822809677U;

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
    msg.setTimeStamp(0.909435886211);
    msg.setSource(27802U);
    msg.setSourceEntity(61U);
    msg.setDestination(58583U);
    msg.setDestinationEntity(235U);
    msg.timeout = 2599765899U;

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
    msg.setTimeStamp(0.139473986945);
    msg.setSource(33483U);
    msg.setSourceEntity(235U);
    msg.setDestination(50593U);
    msg.setDestinationEntity(14U);
    msg.sessid = 918505701U;

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
    msg.setTimeStamp(0.754975401978);
    msg.setSource(11247U);
    msg.setSourceEntity(140U);
    msg.setDestination(13327U);
    msg.setDestinationEntity(152U);
    msg.sessid = 238487055U;

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
    msg.setTimeStamp(0.978314525957);
    msg.setSource(22760U);
    msg.setSourceEntity(138U);
    msg.setDestination(21356U);
    msg.setDestinationEntity(55U);
    msg.sessid = 1579674008U;

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
    msg.setTimeStamp(0.607026524745);
    msg.setSource(45229U);
    msg.setSourceEntity(49U);
    msg.setDestination(30827U);
    msg.setDestinationEntity(75U);
    msg.sessid = 1799156656U;
    msg.messages.assign("KOBKVPYWUSBOVRZXLVFKYSDJLVBGWEXEGNKLJPJILDGQBFZBCMCZBLAMDQUSWMTHAQGUBFFJGFHZPPTNYQNOGRXTNNZTRJYMTXJEAXOWJRPPRDZCIXHEMDPUUYRFWPRZSWCVBAFHULCCXUJGJDOQHOILSMISSMUIAMCIWXLTNIYPSILDQZZAUCQEVSYTOGEJZAKODRGDYWRTLKNYUMWAFVOMTHQEKVAQXTBENFSEHEPHHONCY");

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
    msg.setTimeStamp(0.572851715009);
    msg.setSource(41257U);
    msg.setSourceEntity(131U);
    msg.setDestination(39431U);
    msg.setDestinationEntity(49U);
    msg.sessid = 837966152U;
    msg.messages.assign("BXHVLCWHPXRRXVWVOPKSWTIDQQKFYXLLSMTNRIETDGOXSMKVTCPJSEDFSFUKOGLOGTFQMNXBUPTNSOUHJDRHBVNVPFYLIJIHKUAJDAMUXEBRNNSYQBYPVTCFHIXHPBULGGAPTAVMCAMNMAZUMDYQUKZJGWWDZEAKEXKNNZCOHZTQIHEQDKBOVALYPYCOQWEWUYSMZJYCCBBZTMEQRJRPOZRKIAAIWINXGHSDGIFVJFOWCEZJYCSFLULQEGLDBF");

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
    msg.setTimeStamp(0.398228422706);
    msg.setSource(13795U);
    msg.setSourceEntity(23U);
    msg.setDestination(13606U);
    msg.setDestinationEntity(210U);
    msg.sessid = 1907998978U;
    msg.messages.assign("XNZWWZYEBOVVREQ");

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
    msg.setTimeStamp(0.45211904588);
    msg.setSource(45745U);
    msg.setSourceEntity(81U);
    msg.setDestination(5207U);
    msg.setDestinationEntity(54U);
    msg.sessid = 1599760904U;

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
    msg.setTimeStamp(0.0754681231117);
    msg.setSource(47805U);
    msg.setSourceEntity(25U);
    msg.setDestination(14227U);
    msg.setDestinationEntity(239U);
    msg.sessid = 3214975630U;

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
    msg.setTimeStamp(0.0172604509633);
    msg.setSource(25706U);
    msg.setSourceEntity(205U);
    msg.setDestination(65043U);
    msg.setDestinationEntity(51U);
    msg.sessid = 1909296774U;

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
    msg.setTimeStamp(0.193220382649);
    msg.setSource(59172U);
    msg.setSourceEntity(93U);
    msg.setDestination(481U);
    msg.setDestinationEntity(183U);
    msg.sessid = 12993603U;
    msg.status = 214U;

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
    msg.setTimeStamp(0.941946012491);
    msg.setSource(29877U);
    msg.setSourceEntity(169U);
    msg.setDestination(65169U);
    msg.setDestinationEntity(144U);
    msg.sessid = 1288668204U;
    msg.status = 56U;

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
    msg.setTimeStamp(0.550247900795);
    msg.setSource(12366U);
    msg.setSourceEntity(207U);
    msg.setDestination(36150U);
    msg.setDestinationEntity(52U);
    msg.sessid = 1929430262U;
    msg.status = 242U;

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
    msg.setTimeStamp(0.978440938364);
    msg.setSource(41597U);
    msg.setSourceEntity(0U);
    msg.setDestination(7033U);
    msg.setDestinationEntity(45U);
    msg.name.assign("IKCIAHNXYLQZMPTRXCUMUJSBGIWKJAILWODUMZFQDRYVBXGIRZKQTFOPTFXMGRSTWHJNXAUCVVKHHJKLRGMMYRACVYTESFNNMVDDUOEDAHEFFPGWCECHICUQGAIE");

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
    msg.setTimeStamp(0.941697436432);
    msg.setSource(45665U);
    msg.setSourceEntity(98U);
    msg.setDestination(25532U);
    msg.setDestinationEntity(203U);
    msg.name.assign("KUANMRJPDZCSVFXFDQVKTKUAMGFADYIEWOADHHQCWAWBIDGOKYZXESJQJWSQHOJBZ");

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
    msg.setTimeStamp(0.654187008037);
    msg.setSource(27996U);
    msg.setSourceEntity(64U);
    msg.setDestination(17663U);
    msg.setDestinationEntity(0U);
    msg.name.assign("XJLLUCWDDTXQVYGHKPREOQVWOHBRRUWPFCLHCPZZDXUBXYIXSFYPSMPNPRXHNQXYHEAWHCJGJSWKKNTWTVWGGUUXFONYFMI");

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
    msg.setTimeStamp(0.813015317224);
    msg.setSource(18281U);
    msg.setSourceEntity(33U);
    msg.setDestination(14099U);
    msg.setDestinationEntity(165U);
    msg.name.assign("FPKYQWZGJSBXMOOIYBGKANBVCUCFVXMCPIBWVFYHOPORIWCWYTMPEZKQVGZPTDWUDZSPSEJZCUZU");

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
    msg.setTimeStamp(0.259189051232);
    msg.setSource(6873U);
    msg.setSourceEntity(169U);
    msg.setDestination(23492U);
    msg.setDestinationEntity(99U);
    msg.name.assign("IRNPEADOVPFVKJAENJLKFHZAPSCUXCSLTGDQMNFMDPEWSTWQLSHZLOBIASWXWUJBHVACKYVEBYWOGCR");

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
    msg.setTimeStamp(0.809984739028);
    msg.setSource(37209U);
    msg.setSourceEntity(97U);
    msg.setDestination(37041U);
    msg.setDestinationEntity(74U);
    msg.name.assign("WZGPSGZXBDDCFTXQDVRXJDFUICIPYOSRKEYKXGDISEKYQZNAMHHFSURZOEPVPOFLKBONQW");

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
    msg.setTimeStamp(0.19135482527);
    msg.setSource(4791U);
    msg.setSourceEntity(116U);
    msg.setDestination(34911U);
    msg.setDestinationEntity(62U);
    msg.type = 149U;
    msg.error.assign("WZDURZUBHDGPVQSQGAOZXSQJVDSUOZCTGYWTL");

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
    msg.setTimeStamp(0.331997476789);
    msg.setSource(28329U);
    msg.setSourceEntity(246U);
    msg.setDestination(5607U);
    msg.setDestinationEntity(247U);
    msg.type = 206U;
    msg.error.assign("ZBRVJDCIVHTFSSXRSPHHCKZVUYAYJZZWNFYJHNAMEUSXTFQOCHEPECFMPQWAHVUMOAQDZOIRDC");

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
    msg.setTimeStamp(0.288024711244);
    msg.setSource(4161U);
    msg.setSourceEntity(11U);
    msg.setDestination(38703U);
    msg.setDestinationEntity(33U);
    msg.type = 107U;
    msg.error.assign("GFYSGBTREUGFWAVNPNVSUBPAXZQRGWAOMXNSCMVIHFVJUZQKDLLHYCULYPQYCPVBBCIXTQOYIZNQLPF");

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
    msg.setTimeStamp(0.0381331486978);
    msg.setSource(40483U);
    msg.setSourceEntity(203U);
    msg.setDestination(26906U);
    msg.setDestinationEntity(32U);
    msg.seq = 44335U;
    msg.sys_dst.assign("YXUASLIEVETULHSYLCXOIVACXFKWTNNDWIGBFCBQRGJTEOGLJARWFCXOVPBNVAZUMPEQIJCWFPBRCUESPUUSYQZKBJIMVDODIKDVMTAJBNMKJZHLDJZGFYTGNVZEXLAAXERGPKMFRWKSRWOYWQYMZTHHBTGWWVPHROYUKBZJFHUNANMMFQROQSTPHSYLGZLQZBDURMGCCKJIKEVPSDLMBOQRDQSYGPNK");
    msg.flags = 105U;
    const char tmp_msg_0[] = {-96, -32, -53, 17, -68, 57, -90, 45, -73, -20, 85, -12, -62, 69, 89, 25, 95, -112, -58, -98, 34, -22, -64, -33, -44, -85, -37, 125, 51, -87, -87, 85, -70, -74, -13, -95, 14, 5, 17, -52, -117, -68, 114, 86, 41, -3, -124, 22, 43, 121, -76, -61, -80, 101, 73, 41, -53, 35, 48, -22, -60, 90, -128, 24, -57, 3, -22, -77, 66, 47, -89, -45, -85, -16, -113, 17, 64, -4, -71, -97, -2, 111, 75, 85, 84, 104, -66, -110, -118, -67, -100, 102, -9, 66, -103, -43, 104, -73, 85, 20, 117, -68, -102, 103, -15, -20, -52, 108, 126, -104, -43, 110, -108, -102, 105, 68, 36, 38, -39, 51, 104, -99, 60, -55, -72, 61, -50, -60, -7, 74, -106, 15, -84, 4, -40, 86, 99, 15, -97};
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
    msg.setTimeStamp(0.654174339508);
    msg.setSource(26058U);
    msg.setSourceEntity(149U);
    msg.setDestination(51565U);
    msg.setDestinationEntity(231U);
    msg.seq = 20965U;
    msg.sys_dst.assign("FNKVGPDIBTNTRMYGVNTJVAOKMBGRFYYIVLUSDFHHPHFBELDDULNFNLA");
    msg.flags = 223U;
    const char tmp_msg_0[] = {80, -16, -35, 118, 46, 52, -31, 91, -8, 104, 97, 61, 53, 70, -33, 32, -77, 16, 113, -47, 124, 80, -82, 54, -7, -23, 42, 93, -105, -37, 55, -73, -36, 103, 28, -84, -80, -24, -60, 89, 121, 113, 44, -31, -10, 47, 26, 64, -97, -50, -120, 48, -50, -99, 65, 16, 73, 47, 58, 54, -88, 114, 28, 37, -2, -81, -59, -1, -95, -62, 42, -17, -100, -13, 45, 68, -78, -26, -127, 89, 53, 32, -30, 26, -45, 107, -4, -119, -21, 52, -47, -96, -65, 57, 9, -65, -102, 98, 7, 108, 55, -66, -20, -98, 94, -22, -124, 19, -115, 7, -65, -47, 37, -90, -38, 122, -5, 50, -28, -90, -32, -6, -74, -41, -27, 38, -88, 15, 89, 119, 85, -15, 35, 75, -14, 34, -25, 56, 18, -102, -64, 68, -22, -21, -38, 36, -114, 32, -36, -41, 101, -112, 80, 65, 19, -14, -44, -78, -109, -84, -27, -73, -114, -91, 3, -113, 17, 105, -88, -61, 41, 33, 49, -62, -80, -27, 44, -101, 28, -46, -92, -53, 113, 112, 55, 43, 103, 83, 114, -92, 24, -107, -19, -78, 27, 119, -9, 97, 38, 69, -80, -69, -14, 56, 49, 55, -37, -40, -42, 125};
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
    msg.setTimeStamp(0.655027981881);
    msg.setSource(29949U);
    msg.setSourceEntity(82U);
    msg.setDestination(13075U);
    msg.setDestinationEntity(64U);
    msg.seq = 32390U;
    msg.sys_dst.assign("GRHZKAXHNBGTWAKSAGCFDNMNDEJMHKIFYSTBOVOYUFHRVPJBOXCEAJHLDBLFKQZCNKPKJNIIAZDTTYSLEPORUAOAGPPVQLGBLMFSSUEWGTWUSGCYA");
    msg.flags = 124U;
    const char tmp_msg_0[] = {126, -125, 2, -42, 43, -50, -101, 44, 120, 83, 117, -47, 7, -20, -14, 16, -126, -95, 5, -36, -47, -7, 107, -89, 92, 13, -65, 77, -85, 103, -126, -66, 12, 81, 119, 67, -55, -90, 102, -56, 70, 108, 29, 81, 25, -107, 41, -45, -122, -35, 42, -73, -69, 3, -30, 103, 119, 112, 34, -50, 63, 50, 79, -30, 74, -108, 90, -29, -93, 38, 93, 35, -58, 53, 63, -39, 72, -124, -102, 75, 7, 108, 94, 66, 118, 101, 49, -9, -29, -10, -58, 26, -84, 8, 91, -75, 58, -52, 99, -32, -16, 27, -20, -82, 11, 70, 74, -29, 1, 110, 84, 18, -24, -55, -26, -35, -79, 26, -90, -66, -9, 35, 114, -32, -66, -86, -111, -126, -106, 115, -52, -12, 72, -86, -96, 55, 25, -110, -14, 97, -61, -113, 101, 62, -24, 106, -112, 36, 43, 55, -71, -10, -72, -28, -32, -42, 17, -99, -12, 84, 124, -36, 55, 111, -111, -96, -14, 112, 31, 48, -104, 50, -76, -33, 61, 99, 111, -14, -45, 58, -18, 84, -2, -36, -40, -89, 34, -13, -82, -52, -62, 26, -47, 29, 95, 75, -69, -109, 67, -48, -80, 101, 61, 109};
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
    msg.setTimeStamp(0.503871272156);
    msg.setSource(59410U);
    msg.setSourceEntity(91U);
    msg.setDestination(64405U);
    msg.setDestinationEntity(98U);
    msg.sys_src.assign("FVAEFQMYLNZIZYRLYLAAMBANUJZYAWVROQRPZAZDAKHBSMIIUMOIJCWHBMJEDZI");
    msg.sys_dst.assign("DGLENNVXMLFNKIRTEQXJPIGCECLGZYBNWEXPABYWSZHOAKXUUNJQOPQJZBTVAYVJVFPZWAHDQFRKLFFFWRLIIQCHIXCKKUWVGE");
    msg.flags = 81U;
    const char tmp_msg_0[] = {-26, -47, -63, -82, 39, -106, 99, 60, 40, -57, 122, -121, 76, 90, -55, 117, 33, -97, -58, -115, -59, -93, 9, 101, 3, 73, -127, -114, 4, 107, -11, -5, -15, 69, -58, -40, -106, 87, 76, -66, -113, 4, -125, 50, 114, -104, -78, 38, 72, -122, -83, 6, 20, -78, -51, -117, -112, -27, 39, 87, -80, 70, -7, -98, -62, -25, -40, -91, 15, 114, 38, 78, -83, 31, 16, -42, 2, -106, 75, -60, -70, 51, -45, -64, 53, -120, 31, 100, -27, 94, -21, -33, -44, 98, 98, 104, -28, 20, 121, 92, 70, -95, -4, -27, -49, -117};
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
    msg.setTimeStamp(0.974920785543);
    msg.setSource(49940U);
    msg.setSourceEntity(65U);
    msg.setDestination(14251U);
    msg.setDestinationEntity(200U);
    msg.sys_src.assign("VVJXGBVGPPAFIEHAQVZDPTBXMKODUMLXCPGFULLSBVSXFEELTDPFIIPPCIVSLUBDQHRGJVXDODKMPQKAIMVEUYERZHWVMGJSOLTNNWBQDQPJUNFCCHOUKKTSEHLJAYMTCUFLDHXRQGJFLNOROCTISFHOZCXJWVBMNYYWTNWPOJEGZLRKRWDYWQCYYUAAKOTSEQQIGRMYIAKFUXNBJ");
    msg.sys_dst.assign("RNIAOGXDLVXOANKFUQSWZXWMSDJKCOVUBBGBFRQPYUIPIZUNDSJODBXUDCOWXNCRSOHTEWCVHIIVYFDKKNNSHQJERDCMPXGLHKOYDPSFPAURAQKEEZZJCVHZIEMEVINMTFVAMKGHPJAXPLDETJTZJEZBRMGSWHBUFBOSIQAEGWUTKJARNTLXHPMLPWH");
    msg.flags = 112U;
    const char tmp_msg_0[] = {99, 49, 35, 9, -6, 110, 33, 6, 29, 63, -18, -24, -111, -120, 41, -101, -127, -103, -107, 54, 20, -5, -119, 53, -71, -19, -97, 27, 101, -92, -74, -25, -127, 110, -45, -74, -91, 88, -35, -95, 37, 37, 21, -16, 26, -27, 71, 4, 87, -69, -30, -85, -6, 109, 59, 45, 57, 76, -12, 3, -42, 97, 74, 81, 60, -23, -87, 94, 56, -22, 32, 117, -127, -4, -62, 39, -38, 94, -11, -35};
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
    msg.setTimeStamp(0.86552125124);
    msg.setSource(51059U);
    msg.setSourceEntity(76U);
    msg.setDestination(7607U);
    msg.setDestinationEntity(28U);
    msg.sys_src.assign("EFHUINOPRYGWVWSNBCDKGRGAPQWZNJQYIUTLNP");
    msg.sys_dst.assign("GKQDPYYJHCJXJZGUXTFJGYWPIVXNPHWCDKYSQYDULELBJUFPGUQIRJNAVWPPHWVBLMXRBZLEVNFILIMOKCVNZYDEQLECCQRKEEMDWEGSNMUIYAAYWMDZCUSOKSTHATULTQZRAXRGCNRMNWBWGQFBXTPVRWQITLVFHFJFUM");
    msg.flags = 61U;
    const char tmp_msg_0[] = {36, 93, -10, -117, -122, 118, 85, 15, 83, 45, 65, -60, 15, -16, -35, 70, 8, 106, 97, 73, 6, 92, 10, -119, -35, -19, -14, 8, 2, 126, -74, 32, 85};
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
    msg.setTimeStamp(0.0368946473603);
    msg.setSource(23129U);
    msg.setSourceEntity(177U);
    msg.setDestination(70U);
    msg.setDestinationEntity(180U);
    msg.seq = 50916U;
    msg.value = 181U;
    msg.error.assign("IAYHIBRQPIFSXMJTDRMPGWMYZSGQBOSFTIJJRLBZUWXJVUATCENHCVCDXDTKMOWZPUHJEGLOUKWCRNAFNNPAXTBUKZJQROOPAYDNUXBQJPTBFVRWACYXGTXBLNFVECISIHMEGOJSVOLCTHQDB");

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
    msg.setTimeStamp(0.936263513041);
    msg.setSource(14567U);
    msg.setSourceEntity(90U);
    msg.setDestination(39768U);
    msg.setDestinationEntity(74U);
    msg.seq = 1320U;
    msg.value = 137U;
    msg.error.assign("GGUNFWAKDCLWBYTPJGBFNEYEFRERUDGHZDLTKSBNQHMSDDZLLSIQSVZONHZYBOQIGTULGQHIIJMNUMRBINWXXYIWVDCJXUWCXLBFJCPTVXCBJJFSOGVGEMYVZSJVUHUFMTWDJQPRYMTIICOQYEEYSNA");

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
    msg.setTimeStamp(0.612339005602);
    msg.setSource(55238U);
    msg.setSourceEntity(14U);
    msg.setDestination(38279U);
    msg.setDestinationEntity(138U);
    msg.seq = 18238U;
    msg.value = 19U;
    msg.error.assign("ZJZYGKGMHMEURCNYMCAUMAYLUMORNTVENTSFDIWVBOGBGYTLXDTVTRASRPYJFPQSEPSBDJIVFIGNMTPBAUWQZCMEZOWKRKAZFDQFFCYKBZDWJIBPEXRUUNHKJSBUOFCWVHTANONKZOPXQSKOCHHYHXVFEIHOXLXDMPJABWG");

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
    msg.setTimeStamp(0.68851433534);
    msg.setSource(54076U);
    msg.setSourceEntity(105U);
    msg.setDestination(3665U);
    msg.setDestinationEntity(99U);
    msg.seq = 9249U;
    msg.sys.assign("LEPSZOCPHMJKAHQTKTWNDINZPYMLCIFNCIDHYQNMJPXYAJLURLUNAUKAWIQVASOBNBLTENUPYCFYBNXGWFGISRBYGLDDRQQPPZSPFIMERAGUZMFLXRHJHVRTXLIVRDJEJTBCCTDRHEUMHMOSRVOZZBWYCIVANGUHWVKRVDKBUWJTLDEZNEGHOVCOKOAXESKPXQQMSAKJTEQESY");
    msg.value = 0.549196886791;

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
    msg.setTimeStamp(0.428683417324);
    msg.setSource(55851U);
    msg.setSourceEntity(73U);
    msg.setDestination(3436U);
    msg.setDestinationEntity(138U);
    msg.seq = 26243U;
    msg.sys.assign("UTGWMPCKVOECYQRLFPYTTNUIIXVVSMMSDLINYWJBV");
    msg.value = 0.530312279264;

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
    msg.setTimeStamp(0.899637252159);
    msg.setSource(10027U);
    msg.setSourceEntity(153U);
    msg.setDestination(32808U);
    msg.setDestinationEntity(147U);
    msg.seq = 47004U;
    msg.sys.assign("IXOGLMJXUOGKTPJDOAORIIDVCRRAVNQOYLSMHAY");
    msg.value = 0.815236800125;

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
    msg.setTimeStamp(0.66063271677);
    msg.setSource(57900U);
    msg.setSourceEntity(148U);
    msg.setDestination(44324U);
    msg.setDestinationEntity(94U);
    msg.action = 167U;
    msg.longain = 0.852724029431;
    msg.latgain = 0.00620747004506;
    msg.bondthick = 4235416337U;
    msg.leadgain = 0.719881094408;
    msg.deconflgain = 0.322604748905;

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
    msg.setTimeStamp(0.409499517306);
    msg.setSource(39653U);
    msg.setSourceEntity(158U);
    msg.setDestination(60118U);
    msg.setDestinationEntity(167U);
    msg.action = 54U;
    msg.longain = 0.397291995109;
    msg.latgain = 0.996608709575;
    msg.bondthick = 2359852522U;
    msg.leadgain = 0.364140687661;
    msg.deconflgain = 0.46633083239;

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
    msg.setTimeStamp(0.0836015688873);
    msg.setSource(3658U);
    msg.setSourceEntity(160U);
    msg.setDestination(55980U);
    msg.setDestinationEntity(55U);
    msg.action = 203U;
    msg.longain = 0.740926812931;
    msg.latgain = 0.322206345159;
    msg.bondthick = 2951553253U;
    msg.leadgain = 0.38906492673;
    msg.deconflgain = 0.606974397692;

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
    msg.setTimeStamp(0.15995175318);
    msg.setSource(695U);
    msg.setSourceEntity(180U);
    msg.setDestination(46683U);
    msg.setDestinationEntity(153U);
    msg.err_mean = 0.652891424826;
    msg.dist_min_abs = 0.113844902949;
    msg.dist_min_mean = 0.421958158983;

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
    msg.setTimeStamp(0.216315939957);
    msg.setSource(50676U);
    msg.setSourceEntity(238U);
    msg.setDestination(44897U);
    msg.setDestinationEntity(124U);
    msg.err_mean = 0.247791338085;
    msg.dist_min_abs = 0.800771412145;
    msg.dist_min_mean = 0.749441193923;

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
    msg.setTimeStamp(9.54451489333e-05);
    msg.setSource(10126U);
    msg.setSourceEntity(15U);
    msg.setDestination(21002U);
    msg.setDestinationEntity(226U);
    msg.err_mean = 0.0679973665215;
    msg.dist_min_abs = 0.315074778956;
    msg.dist_min_mean = 0.604491883267;

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
    msg.setTimeStamp(0.862494113824);
    msg.setSource(36496U);
    msg.setSourceEntity(159U);
    msg.setDestination(3312U);
    msg.setDestinationEntity(251U);
    msg.action = 106U;
    msg.lon_gain = 0.443245202176;
    msg.lat_gain = 0.691866049455;
    msg.bond_thick = 0.651109607673;
    msg.lead_gain = 0.71773892375;
    msg.deconfl_gain = 0.049921666119;
    msg.accel_switch_gain = 0.0491137176267;
    msg.safe_dist = 0.173983637248;
    msg.deconflict_offset = 0.702830759333;
    msg.accel_safe_margin = 0.706479270695;
    msg.accel_lim_x = 0.67882805242;

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
    msg.setTimeStamp(0.871520856389);
    msg.setSource(35975U);
    msg.setSourceEntity(185U);
    msg.setDestination(10033U);
    msg.setDestinationEntity(147U);
    msg.action = 254U;
    msg.lon_gain = 0.140887290992;
    msg.lat_gain = 0.810656804846;
    msg.bond_thick = 0.154365764638;
    msg.lead_gain = 0.764136812219;
    msg.deconfl_gain = 0.401347652378;
    msg.accel_switch_gain = 0.130208328833;
    msg.safe_dist = 0.900427340504;
    msg.deconflict_offset = 0.317191045718;
    msg.accel_safe_margin = 0.715547405179;
    msg.accel_lim_x = 0.710532363383;

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
    msg.setTimeStamp(0.158096277944);
    msg.setSource(35523U);
    msg.setSourceEntity(2U);
    msg.setDestination(54081U);
    msg.setDestinationEntity(168U);
    msg.action = 126U;
    msg.lon_gain = 0.30329664916;
    msg.lat_gain = 0.0907848312645;
    msg.bond_thick = 0.455426187035;
    msg.lead_gain = 0.784134491437;
    msg.deconfl_gain = 0.0473058895192;
    msg.accel_switch_gain = 0.464955429133;
    msg.safe_dist = 0.669217916762;
    msg.deconflict_offset = 0.880226428541;
    msg.accel_safe_margin = 0.403591001008;
    msg.accel_lim_x = 0.325592190501;

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
    msg.setTimeStamp(0.348438921079);
    msg.setSource(2324U);
    msg.setSourceEntity(140U);
    msg.setDestination(20097U);
    msg.setDestinationEntity(51U);
    msg.type = 178U;
    msg.op = 115U;
    msg.err_mean = 0.469549554671;
    msg.dist_min_abs = 0.526148669032;
    msg.dist_min_mean = 0.297645096591;
    msg.roll_rate_mean = 0.371526521808;
    msg.time = 0.367445488547;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 184U;
    tmp_msg_0.lon_gain = 0.145298536354;
    tmp_msg_0.lat_gain = 0.303598442716;
    tmp_msg_0.bond_thick = 0.0526060003591;
    tmp_msg_0.lead_gain = 0.672332040955;
    tmp_msg_0.deconfl_gain = 0.672787408841;
    tmp_msg_0.accel_switch_gain = 0.0435405465265;
    tmp_msg_0.safe_dist = 0.142308401953;
    tmp_msg_0.deconflict_offset = 0.0527613487465;
    tmp_msg_0.accel_safe_margin = 0.327066842186;
    tmp_msg_0.accel_lim_x = 0.331297913067;
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
    msg.setTimeStamp(0.545900307033);
    msg.setSource(41766U);
    msg.setSourceEntity(195U);
    msg.setDestination(62514U);
    msg.setDestinationEntity(155U);
    msg.type = 89U;
    msg.op = 160U;
    msg.err_mean = 0.478964217558;
    msg.dist_min_abs = 0.147565640583;
    msg.dist_min_mean = 0.176064719515;
    msg.roll_rate_mean = 0.631411436138;
    msg.time = 0.762046336605;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 26U;
    tmp_msg_0.lon_gain = 0.489889894242;
    tmp_msg_0.lat_gain = 0.276421917078;
    tmp_msg_0.bond_thick = 0.839302930435;
    tmp_msg_0.lead_gain = 0.0711830916617;
    tmp_msg_0.deconfl_gain = 0.0580890195428;
    tmp_msg_0.accel_switch_gain = 0.829787117908;
    tmp_msg_0.safe_dist = 0.980946193454;
    tmp_msg_0.deconflict_offset = 0.914580855572;
    tmp_msg_0.accel_safe_margin = 0.176678445045;
    tmp_msg_0.accel_lim_x = 0.200748159546;
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
    msg.setTimeStamp(0.037888797821);
    msg.setSource(1257U);
    msg.setSourceEntity(187U);
    msg.setDestination(10094U);
    msg.setDestinationEntity(89U);
    msg.type = 28U;
    msg.op = 222U;
    msg.err_mean = 0.371495910626;
    msg.dist_min_abs = 0.517603461034;
    msg.dist_min_mean = 0.828166626383;
    msg.roll_rate_mean = 0.968766776724;
    msg.time = 0.128845915195;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 24U;
    tmp_msg_0.lon_gain = 0.0335195417356;
    tmp_msg_0.lat_gain = 0.195852445992;
    tmp_msg_0.bond_thick = 0.821075305151;
    tmp_msg_0.lead_gain = 0.125699758604;
    tmp_msg_0.deconfl_gain = 0.911323599239;
    tmp_msg_0.accel_switch_gain = 0.523143092377;
    tmp_msg_0.safe_dist = 0.832001257804;
    tmp_msg_0.deconflict_offset = 0.232704235682;
    tmp_msg_0.accel_safe_margin = 0.599603868181;
    tmp_msg_0.accel_lim_x = 0.0442860912398;
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
    msg.setTimeStamp(0.906309382656);
    msg.setSource(2903U);
    msg.setSourceEntity(102U);
    msg.setDestination(37374U);
    msg.setDestinationEntity(217U);
    msg.uid = 49U;
    msg.frag_number = 13U;
    msg.num_frags = 197U;
    const char tmp_msg_0[] = {-36, -44, -29, -39, -67, -44, 44, 95, 33, -101, -36, -89, 48, 9, -7, 19, 0, -85, 20, 74, 34, 18, -40, -86, 30, -78, -9, 122, -51, -106, 75, 93, 45, -9, 74, 46, -8, -80, 122, 51, 46, -120, 17, -20, 53, 122, 15, -68, 44, 94, -18, -91, -92, -24, 13, -127, -78, -38, 58, 50, 64, -49, 6, -13, 77, 73, -73, 14, 107, -76, -52, -128, 63, 88, 98, 106, -88, -8, 57, 25, 95, -92, 49, 96, -35, -102, -21, 89, 61, -31, 93, 21, -121, 104, -39, -94, 41, 69, 78, 30, -43, -83, -97, -116, 122, -100, -13, 114, 13, -52, -113, 16, 103, -87, -92, -75, -32, 72, -68, -84, 3, 107, 17, 68, -105, 90, -89, -43, -97, 60, 112, 90, 110, 121, -66, 60, -85, -84, -93, 38, -37, -127, -73, -90, -40, 80, -13, 75, -43, 14, -70, -64, -122, -2, -50, -103, 16, -92, -71, -74, -107, 42, 124, -80, 26, 48, -11, 41, 107, -18, 64, 62, 54, -27, -116};
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
    msg.setTimeStamp(0.689907442283);
    msg.setSource(65074U);
    msg.setSourceEntity(214U);
    msg.setDestination(39183U);
    msg.setDestinationEntity(235U);
    msg.uid = 93U;
    msg.frag_number = 55U;
    msg.num_frags = 94U;
    const char tmp_msg_0[] = {59, 57, -116, 122, 51, -56, 32, 64, -96, -11, 27, 89, -113, -125, -61, -94, -63, -27, 28, 105, -89, -110, 102, 22, 87, 117, 33, -102, -66, -110, 12, -1, 119, -71, 21, 100, 37, -28, -52, 122, 38, -67, 33, 60, 49, -33, 29, 29, -91, -127, -101, -121, -89, 16, -84, -4, 96, 104, -48, 57, -95, 114, -90, 43, -61, 64, 85, -42, 47, -64, 65, 110, -59, -32, -50, 89, -107, -59, -58, 4, -105, -80, 91, 30, 122, -102, 15, 19, 16, -98, 36, -86, 10, -103, -49, -99, -67, -74, 93, 75, -21, 104, 113, 75, 74, 97, -70, 66, 120, -106, -23, 19, -34, -21, -122, -36, -121, 88, 57, -47, -71, 65, 99, -80, 124, -105, -120, 89, -73, -74, 44, -99, 31, -75, -7, -83, -32, 124, 4, 36, 102, 49, 108, 87, -41, -111, -79, -75, 13, 48, 67, 120, -72, -53, 42, -96, -34, -4, 109, 114, -33, 48, -25, -45, 7, -12, -85, 113, 41, 68, -74, 36, -43, 6, -81, 97, -128, -103, 1, -93, 54, -122, -57, 43, -59, 78, -119, -55, -28, 26, 87, -112, -53, -10, -112, -28, -13, 87, -38, -43, 90, -37, 53, -75, 67, 52, 95, -43, 90, 50, 81, 19, -54, -120, -48, -28, -59, -103, 0, -64, -98, -15, -53, -109, -79, -92, 88, -12, 36, 41, -95, -30, 26, -43, -95};
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
    msg.setTimeStamp(0.242903033633);
    msg.setSource(43256U);
    msg.setSourceEntity(168U);
    msg.setDestination(65416U);
    msg.setDestinationEntity(240U);
    msg.uid = 114U;
    msg.frag_number = 162U;
    msg.num_frags = 207U;
    const char tmp_msg_0[] = {71, -32, -126, 97, 42, 108, -72, 120, -51, -14, 108, -50, 62, 104, -63, 31, 63, 98, -81, 76, -41, 79, 18, 68, -78, 85, 10, 24, 36, 106, -31, 51, -33, -104, -57, 77, 71, -74, -123};
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
    msg.setTimeStamp(0.0249248728078);
    msg.setSource(65183U);
    msg.setSourceEntity(105U);
    msg.setDestination(3984U);
    msg.setDestinationEntity(246U);
    msg.content_type.assign("HKENCXAUPGDOLAICTZHGISBXCGSGVLLQTZJIYVQSXXPUGUIVKXEQRBQFRETEABYWKRWLHQDNAMDOTSGPPCRJNINEVJQPTAAMKFJXCXBHPUCNYGSOZKZOM");
    const char tmp_msg_0[] = {-37, 125, 72, -1, 1, 98, -85, 43, -18, 115, -73, -125, 12, -71, -62, -88, -51, 28, -53, -102, -44, -2, 57, -71, -36, -29, 85, -117, 56, 45, 93, -6, -11, 39, -7, -79, -84, -67, 56, 63, -9, -33, 124, -77, -89, -104, 33, 89, -60, 58, 50, -80, -117, 113, 26, -56, -29, -95, 85, 83, 0, 5, -39, -85, 83, -4, -18, 1, 125, 95, 99, -36, 46, -102, 122, 74, -42, 4, 111, 50, 3, -112, -18, 12, -107, 111, -31, -33, -10, -17, 53, -118, 76, 58, 8, -71, -20, -18, 92, 46, -98, 96, -1, 29, -115, -113};
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
    msg.setTimeStamp(0.928252878373);
    msg.setSource(17580U);
    msg.setSourceEntity(217U);
    msg.setDestination(17307U);
    msg.setDestinationEntity(243U);
    msg.content_type.assign("QCIPIBEUYMVAUAPJLOWMESTGOIIYTHDFKABOSRNOKWHWZZLFIUXYBZJGMXLSZAIEBFDAMQTDHVTKOOYSVIBVTHDWXPRURDBNW");
    const char tmp_msg_0[] = {75, -79, 32, 14, 103, -91, -53, -124, -8, -91, -18, 84, 99, -93, -86, 25, -127, -24, 5, 112, -29, 46, -51, 73, -63, -18, -96, -14, -42, 73, 99, -58, 93, 36, -36, 124, -13, -106, 49, -112, -9, -49, 79, -1, 123, -113, -20, 66, -6, 19, -7, 91, 62, 11, -77, -63, -125, -6, 112, 16, -47};
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
    msg.setTimeStamp(0.34452538982);
    msg.setSource(48878U);
    msg.setSourceEntity(201U);
    msg.setDestination(40427U);
    msg.setDestinationEntity(38U);
    msg.content_type.assign("VBBKTRMKWWCVGYPEFASOCPUZHMNYHCOPGCEPYFDNLASKNJTAXUTKALEHIGAQYGJWJCYEQZNWUZSQRLPZQRXGDAELWJSETYMZTILEAFMXOCYMNUJFUGTXFKVHXORQCTLVPRZZYXJVSLHDHBUTZWAAONRQBGXKDDBYNSTRQRHGUVRBJFBFVUHPUIWIDQOAPIKOLSTMKSSERYMSMWHBVMUKEXWNFDZJP");
    const char tmp_msg_0[] = {44, 16, -102, 26, -54, -92, 53, -107, -18, 23, -4, -72, -36, -12, 47, -70, -32, 99, -37, 69, 73, -23, 29, -60, -125, -40, -121, -54, -82, -21, -104, 65, -22, 26, 115, -54, 74, 67, -58, 32, 63, 40, -75, 61, -126, -52, 25, -58, 67, -29, 24, 66, 86, -94, -118, 39, 31, 112, 80, 0, -116, 93, -3, -23, -49, 123, 76, -48, 82, 38, -70, -102, -66, 25, -48, -43, -17, 13, 7, -107, 56, 86, 27, -127, -90, -41, -98, -77, -46, 30, -85, -39, 63, 27, 97, 7, -25, 54, -110, 92, 88, 46, 8, 0, 59, 34, 93, 98, 85, 51, -10, 68, 120, 32, -19, -76, 33, -97, 68, -78, 82, 75, -119, -121, -1, 47, -116, -6, -81, 76, -100, 57, 123, -47, -19, 118, 114, -51, 39, 101, -99, 112, -119, -8, 87, 124, -106, -60, 98, -93, -89, -44, -60, -65, -88, -69, 101, 34, -12, -101, 79, -39, 56, 89, -33, -47, -94, 1, -104, -18, 112, -62, -85, -81, 27, 93, -16, 100, -19, -52, -17, 22, 79, 36, -45, 63, 84, -39, -9, 78, -35, -79, 32, -53, 52, -24, 72, -45, -102, 11, 7, -30, 57, -81, -2, -66, -111, -111, -40, 65, -17, -102, 18, -36, 23, 60, 13, -61, -109, -35, 109, 50, -82, 34, 36, -92, 21, 5, 64, -106, 36, -123, -72, -105, -89, -2, 102, -68, -19, -105, 82, -81, -86, 94, 37, 1, -17};
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
    msg.setTimeStamp(0.413431843126);
    msg.setSource(15689U);
    msg.setSourceEntity(179U);
    msg.setDestination(46286U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.434901981258);
    msg.setSource(64105U);
    msg.setSourceEntity(109U);
    msg.setDestination(21963U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.330272995678);
    msg.setSource(9614U);
    msg.setSourceEntity(12U);
    msg.setDestination(63301U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.628672083844);
    msg.setSource(27256U);
    msg.setSourceEntity(102U);
    msg.setDestination(31896U);
    msg.setDestinationEntity(87U);
    msg.target = 13682U;
    msg.bearing = 0.799446918481;
    msg.elevation = 0.358477522773;

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
    msg.setTimeStamp(0.434450529521);
    msg.setSource(39743U);
    msg.setSourceEntity(142U);
    msg.setDestination(2872U);
    msg.setDestinationEntity(174U);
    msg.target = 22333U;
    msg.bearing = 0.777623957039;
    msg.elevation = 0.233032932675;

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
    msg.setTimeStamp(0.864339531222);
    msg.setSource(52835U);
    msg.setSourceEntity(82U);
    msg.setDestination(37296U);
    msg.setDestinationEntity(158U);
    msg.target = 10165U;
    msg.bearing = 0.87709518086;
    msg.elevation = 0.123327323642;

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
    msg.setTimeStamp(0.389513017705);
    msg.setSource(28700U);
    msg.setSourceEntity(242U);
    msg.setDestination(47441U);
    msg.setDestinationEntity(204U);
    msg.target = 60967U;
    msg.x = 0.0259971564494;
    msg.y = 0.560685073997;
    msg.z = 0.100728574735;

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
    msg.setTimeStamp(0.102649612778);
    msg.setSource(65214U);
    msg.setSourceEntity(241U);
    msg.setDestination(3594U);
    msg.setDestinationEntity(228U);
    msg.target = 6433U;
    msg.x = 0.171512273693;
    msg.y = 0.664284560715;
    msg.z = 0.860762277009;

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
    msg.setTimeStamp(0.985898900241);
    msg.setSource(41819U);
    msg.setSourceEntity(112U);
    msg.setDestination(24287U);
    msg.setDestinationEntity(172U);
    msg.target = 9582U;
    msg.x = 0.527864827643;
    msg.y = 0.376557101067;
    msg.z = 0.46644193435;

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
    msg.setTimeStamp(0.50899782517);
    msg.setSource(39018U);
    msg.setSourceEntity(30U);
    msg.setDestination(58786U);
    msg.setDestinationEntity(245U);
    msg.target = 5994U;
    msg.lat = 0.357948832291;
    msg.lon = 0.825079193423;
    msg.z_units = 6U;
    msg.z = 0.382030970025;

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
    msg.setTimeStamp(0.763723318992);
    msg.setSource(41435U);
    msg.setSourceEntity(74U);
    msg.setDestination(12658U);
    msg.setDestinationEntity(241U);
    msg.target = 34465U;
    msg.lat = 0.248543569932;
    msg.lon = 0.744406860768;
    msg.z_units = 40U;
    msg.z = 0.728039891138;

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
    msg.setTimeStamp(0.22367755353);
    msg.setSource(21096U);
    msg.setSourceEntity(108U);
    msg.setDestination(26369U);
    msg.setDestinationEntity(121U);
    msg.target = 33997U;
    msg.lat = 0.65492014553;
    msg.lon = 0.840407218186;
    msg.z_units = 210U;
    msg.z = 0.537121466351;

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
    msg.setTimeStamp(0.122594940691);
    msg.setSource(52075U);
    msg.setSourceEntity(192U);
    msg.setDestination(33815U);
    msg.setDestinationEntity(146U);
    msg.locale.assign("QVBAILEDDUWIHUGQONJEGAZDSTZPRUWUFRGTPJJVMHAFQMORFVWPWOFHTYXYJKKCSNNHAREHSYBKQWZOINYGORENMUVPXTNOKKQNCCMUSFVTVKAJFSLAOJZBDRPWDJHQBTLBISCXKXWFZPSBWXVMHBTAIOTJIYYVRFUXLBIDCYJQKXLDAREEXGNDBUPPCPKOZNYLYTJGGEGGCIXNAISVZHZBMPFQCELDOASM");
    const char tmp_msg_0[] = {90, 67, -21, -74, 125, -120, 21, 3, -47, 126, 0, -33, -66, -27, 109, 115, -124, 122, -6, 72, 29, -113, 9, 106, -54, -114, -6, 61, -5, -42, -48, 76, -95, 36, -69, -102, 87, -30, 101, 32, -22, 84, -32, -123, 94, -51, 63, 77, -91, 98, 117, -114, -107, -4, 66, 68, 53, 7, -62, 109, -110, 25, -74, -125, -109, 118, -81, 43, -20, -55, 82, -87, -46, 65, -80, 26, 12, -91, -51, 50, -10, -121, 24, 125, -23, 115, -23, 34, 27, -112, -46, -124, -2, -108, 81, 112, -98, -73, 87, 81, -92, 76, 7, -97, 86, 67, -16, -43, 72, 105, -91, 72, -86, -20, 28, 26, 62, 121, 37, -72, 121, -89, 14, -84, -83, -43, -112, 121, -72, -128, 78, 92, 90, -118, 31, 65, 21, -12, -32, 97, -105, -21, 56, 55, 100, 71, -60, 23, -124, -61, 35, -2, 38, -47, -47, 52, -13, -48, -37, 76, 100, -42, 89, -101, -30, -85, 104, 45, -45, -57, -31, 110, 37};
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
    msg.setTimeStamp(0.104893166891);
    msg.setSource(43665U);
    msg.setSourceEntity(214U);
    msg.setDestination(32865U);
    msg.setDestinationEntity(75U);
    msg.locale.assign("LGCLAAASSQRQINYRVEWZFBWMGLOKQUUDHWOXVTXXKDTUMFMJRANCPPZQSERGPXF");
    const char tmp_msg_0[] = {-43, -93, 27, -21, 64, -55, -98, -9, -57, 15, -92, 19, 125, 44, -75, -35, -120, 71, -2, 86, -29, 100, -120, 12, -14, -13, 32, -12, 27, 84, -22, -55, -2, -50, 102, 121, 114, 75, 20, 18, 86, -83, -96, -80, -45, -73, 60, 67, 110, -105, 18, -124, -20, -45, -45, 117, 9, -90, 69, -13, -92, -12, 95, 125, -127, 75, -56, 44, -51, -57, -43, -87, -5, 1, 49, -108, -12, 101, 114, 121, 126, -42, -95, 17, 99, 115, 96, 24, 110, 30, -76, 104, -5, 6, -2, -82, -127, -7, 51, 91, 56};
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
    msg.setTimeStamp(0.054589360548);
    msg.setSource(12615U);
    msg.setSourceEntity(216U);
    msg.setDestination(2957U);
    msg.setDestinationEntity(22U);
    msg.locale.assign("QJCVQTAKXEAOKIPYYHOYCNOLZOUKBAVLGSZXSPDELDCCKEVZABCXOQRRJJJSSHKBFFFGOILNTDKSWXUFBDQLHRFBUSWVDEHMLDYMVEQPFAIZDBQVLSFHCPNBGIRWPAFZRWPNEJCXPUQEPSZSTJBPASDTMGANCWUOYNZGZTLHKTYTL");
    const char tmp_msg_0[] = {85, -2, 15, 88, -44, -76, -105, -126, -95, -41, 37, -45, -37, 90, -90, 66, -60, 110, -90, -1, 12, 11, 90, 41, -65, 82, -27, -22, -25, 110, 80, 125, 10, -44, -12, -100, 101, -89, -60, -5, -28, -106, -64, 66, 93, 5, 55, -84, -95, -70, 114, 95, 95, 88, 110, 93, -59, 121, 74, -122, -89, -106, -44, -96, -81, 39, -98, 112, 17, 45, 0, -14, 64, 51, -74, 48, 101, 103, 69, 24, -63, -75, 66, 98, 39, -65, 44, -37, -50, -111, -36, 126, 70, -19, 93, 78, -65, 69, -124, 115, 79, -57, 37, -123, 40, 47, -123, 98, 25, 81, -27, -103, -122, 107};
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
    msg.setTimeStamp(0.230368921659);
    msg.setSource(16176U);
    msg.setSourceEntity(184U);
    msg.setDestination(45171U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.404785090064);
    msg.setSource(2354U);
    msg.setSourceEntity(201U);
    msg.setDestination(39799U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.303500638641);
    msg.setSource(45570U);
    msg.setSourceEntity(59U);
    msg.setDestination(4780U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.336715949994);
    msg.setSource(28477U);
    msg.setSourceEntity(51U);
    msg.setDestination(13728U);
    msg.setDestinationEntity(39U);
    const char tmp_msg_0[] = {60, -36, 34, 80, 4, 38, -102, 60, 92, 85, -73, -11, -121, 58, 32, -98, 116, 109, 90, 80, 23, -117, -99, -94, 37, 101, 22, 76, 98, -14, 126, 102, -46, 85, 43, -28, 35, -71, -126, -49, -75, -64, 104, 30, -82, 87, -127, -99, -116, -120, -113, -27, -24, 85, -31, 48, 50, -64, -92, -62, -80, -49, 78, -60, -96, -36, -31, -92, -4, 4, 30, -109, -47, -84, 2, -125, -12, 101, 76, -111, 14, 71, -89, -20, -91, -34, 98, 14, -51, -80, -7, -79, 64, 49, 60, 116, 71, -113, 3, -103, 117, 119, -32, -93, -117, 55, 42, 17, 53, -102, 70, 7, -49, -108, 16, 13, -53, -45, -15, -103, 62, 18, 99, -10, -89, 118, -10, -107, -44, 94, -55, -91, -66, -6, -97, -107, 54, 6, -18, -47, 91, -13, -18, -25, 29, -17, 43, 53, 85, -22, -112, 30, 107, 15, -14, 29, -116, 124, 53, -107, -37, -25, -128, -63, -119, 123, 1, 105, 107, -124, 102, -77, 104, 55, -35, 101, -34, -77, 73, 14, -29, -115, -36, -50, -59, -18, 66, 121, -26, -112, 123, 69, -49, -96, 122, -40, -17, -65, -41, -25, -74, -61, 70, 44, -115, -22, -64, 122, -14, 104, 110, -121, -120, 20, 25, -97, 82, 81, 124};
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
    msg.setTimeStamp(0.593976759307);
    msg.setSource(20866U);
    msg.setSourceEntity(117U);
    msg.setDestination(6584U);
    msg.setDestinationEntity(130U);
    const char tmp_msg_0[] = {-81, 86, -124, 10, -11, -71, -69, 15, -128, -15, 73, 126, -79, -9, -96, -43, -5, 33, 7, -55, 64, 87, 38, -6, -83, -116, 80, 74, -77, 32, 79, -49, 33, 116, 10, 72, 8, 26, -66, 23, 115, -25, 62, -102, -80, -107, 59, -126, -88, -3, 46, 46, 110, 88, -107, 25, 60, 41, -27, 92, 33, -101, -59, 64, -105, -128, 121, -13, -66, 21, 32, -45, -95, 86, 36, 16, -89, 50, -17, 96, 44, -21, -42, 32, -21, -54, -98, 112, 82, 98, -63, 30, -31, -74, 96, -77, 96, 16, 112, 23, -114, 105, -15, -69, 92, 17, -128, -9, -42, 50, 114, 76, -100, 112, -59, -6, -69, -65, 123, -54, 19, -108, 52, 115, -91, 87};
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
    msg.setTimeStamp(0.457097355933);
    msg.setSource(41146U);
    msg.setSourceEntity(106U);
    msg.setDestination(8026U);
    msg.setDestinationEntity(101U);
    const char tmp_msg_0[] = {-31, -43, 17, -103, -65, 44, 10, -63, 21, -23, -70, 83, 31, -15, -24, -62, 16, 15, 95, -101, -86, 23, 9, -40, -26, -12, -92, 115, 32, -37, 84, 34, -8, -27, -88, 55, 27, 29, -116, -94, -51, 96, -56, 61, -5, 59, 58, 85, 20, -96};
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
    msg.setTimeStamp(0.6982636463);
    msg.setSource(41289U);
    msg.setSourceEntity(22U);
    msg.setDestination(39631U);
    msg.setDestinationEntity(73U);
    msg.json.assign("QCAPUZIHJNBYYFJOFJKGHLHVRHSNYOFXZZIXGGTCWXLTNAGIWIMSXDFLXRJJCWLOJWRBYQUPLZNVSVTBGGLQBFXEKEQHSNEAPDTFCTEFHYUNAAPWKTZDIOYMHRKLJCAWZYMDTNIUAYGAKCVTMBPOCQDULIOSWUUOCHQPJKJQZJPNSUZVD");

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
    msg.setTimeStamp(0.889960498575);
    msg.setSource(22184U);
    msg.setSourceEntity(7U);
    msg.setDestination(56454U);
    msg.setDestinationEntity(183U);
    msg.json.assign("GKBWNYSKYKKCRSAJUUQLZBCMEQTFZPHFQNFWEEMNVPLAYUIPGUYDJHZDUHJVQOPPMOMSOAYXZNCINWQNFROROLFDUWIAIIZPSXHMIWADRLKCLKEVVMEKOBTSTGWKXZECIBBEDMBWYGJTXGAJZONJSLDPDVETWYKTBKWQGXRCVHRTCFAOMLBEXIZVFFXSMVALCAUNRSVUFRZEDNRFGNQJJTBZSITUSJVGYHXGAHXOPUTOPQHJCDMPQL");

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
    msg.setTimeStamp(0.97605131708);
    msg.setSource(55081U);
    msg.setSourceEntity(149U);
    msg.setDestination(32596U);
    msg.setDestinationEntity(36U);
    msg.json.assign("IDLXWJGKLWRUROVTHXXANRYWCHASUVFTZGGQJHKSYDDSMKNGQMFIREPWPKFOUDOZJMSSZHDRZAVUXTZOGCBUWYTHKJFGOKMUMBPZSBEJAFFPULQNEPKCCFTNCBIIPBMJBXKVRVHEDXFADTDCBFUWXVBQGKUOEWWEUZQNDPLSNXEXJAOQDGANYYIRAITOBVBKNHLWSLYMQWMHIPOJEZONACVJMLJXIVHYQIPTFRZI");

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
    msg.setTimeStamp(0.805685494325);
    msg.setSource(46369U);
    msg.setSourceEntity(105U);
    msg.setDestination(45381U);
    msg.setDestinationEntity(0U);
    msg.name.assign("CTGVGFNSPBQKVOLISIRLORUQCZVGVZEJYXETHXIREKISGPHWXCHHBHTDYPQPOUSBNYDDPYEONACMZJFMBFWFAELDXJAEDRGLHZKQEXJKBRDJTLQDDUZVXIYGPUNYHZUVCMSCAIVIUFSWHYIWJMDMNGSMSVIWRMDTWXYKXQQYLFMF");
    msg.servstat = 111U;
    msg.servmin = 3394730734U;
    msg.servmax = 4012321663U;

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
    msg.setTimeStamp(0.497833149534);
    msg.setSource(14669U);
    msg.setSourceEntity(206U);
    msg.setDestination(39736U);
    msg.setDestinationEntity(88U);
    msg.name.assign("ZGBXTWLEIJ");
    msg.servstat = 220U;
    msg.servmin = 4073931085U;
    msg.servmax = 3394047614U;

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
    msg.setTimeStamp(0.367170712866);
    msg.setSource(33843U);
    msg.setSourceEntity(156U);
    msg.setDestination(45965U);
    msg.setDestinationEntity(123U);
    msg.name.assign("JQAYWSCSMPOVVBVRLCBSSNYCJQNVJPVDCWPZAAABIKIGFGYPNNJICEZWLTAXMJRLMOXWDRYQGNZJJWFCKGHUHDQEGYARGDWJXBJWEBNHZMBEUNZTQMTSLFXDOFIXXTSQASEMKXGUPILRCTMGNWUIVDZSOVFHKALYZMKLUFZPQRVPUNBOHIWFUYKKIBTNEIEVDRCMLDHLCCKAOOKYKYPWDFSHEZXMRDTURAXFYOBEQ");
    msg.servstat = 209U;
    msg.servmin = 3703673019U;
    msg.servmax = 3348997820U;

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
