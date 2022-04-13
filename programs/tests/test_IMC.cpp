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
// IMC XML MD5: 5333e4e0128bcca236cc6af16db02bb0                            *
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
    msg.setTimeStamp(0.3083365406710613);
    msg.setSource(46655U);
    msg.setSourceEntity(34U);
    msg.setDestination(28404U);
    msg.setDestinationEntity(112U);
    msg.state = 147U;
    msg.flags = 111U;
    msg.description.assign("YWOYHRSZCIECXLRTCPBRGKUFZVMVWKQFWNLYNELMXE");

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
    msg.setTimeStamp(0.5038694609535603);
    msg.setSource(61178U);
    msg.setSourceEntity(87U);
    msg.setDestination(12157U);
    msg.setDestinationEntity(252U);
    msg.state = 4U;
    msg.flags = 250U;
    msg.description.assign("VLKADWGERNAVYSJVHXRBNZYLMISSQNWUXERMCZTCMGKWZFDBIHNLNVKNKSPQTJLJFMGGGIZBFNXSXYTHBEBJZGKHYRGQBXWXVADDTJIBUCZWPLRYEPEOTRMTMTBHXEHXQJPLGFYFPODHINRGACCKPHFOAIJWCOZGLBHJMQWIYRUCZF");

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
    msg.setTimeStamp(0.8536787747757797);
    msg.setSource(1540U);
    msg.setSourceEntity(29U);
    msg.setDestination(49300U);
    msg.setDestinationEntity(40U);
    msg.state = 122U;
    msg.flags = 81U;
    msg.description.assign("DCFRUPZRQWNWMQTLJTCKLSXHWABEPXNEYMBLKGSDYNTSMGVQODENTPYFJAITNJXRSQEYTLAIBUDKKUXCVQWJBCAJZIV");

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
    msg.setTimeStamp(0.1642669375306255);
    msg.setSource(38528U);
    msg.setSourceEntity(239U);
    msg.setDestination(26196U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.07036124694190904);
    msg.setSource(28417U);
    msg.setSourceEntity(83U);
    msg.setDestination(45347U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.58270001117226);
    msg.setSource(58612U);
    msg.setSourceEntity(100U);
    msg.setDestination(50345U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.21881773694433637);
    msg.setSource(25374U);
    msg.setSourceEntity(223U);
    msg.setDestination(59219U);
    msg.setDestinationEntity(219U);
    msg.id = 107U;
    msg.label.assign("NJKRICFFHERCMKWUHAKEZPYOSHIKPNCIXMAJEVYXVSGZIBVAYDJBOSWJCTJWGVRBWJGHTGAVXPXFEWMZNWZLKDYKDZWVMGONQUHOQMGECDIONLHTXXLZTIWBFGRQVDAXVNTEKROOJSBPDHECFRAYKIMLDSSJB");
    msg.component.assign("RUTPDVDTMKYOCNEGLHJKBUSDYTVMLFKRKZWAEYRACRDOPXPGTNQWAVULQRHZCHOWUEMWJSPBQGGOIO");
    msg.act_time = 35931U;
    msg.deact_time = 32783U;

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
    msg.setTimeStamp(0.5267828993478104);
    msg.setSource(32026U);
    msg.setSourceEntity(28U);
    msg.setDestination(57766U);
    msg.setDestinationEntity(50U);
    msg.id = 150U;
    msg.label.assign("JAREXMZFCTGFJUSWZLZIWNKANSULFYSGTMDUZHETRHVWQXOAKAGXVOICUWQCMMCUFSLJWILOYULQRDAMMQMYFNPBTBTVZNKFVGBEWOPTYDK");
    msg.component.assign("MPJDKNHMQIJLODCTMDZYLSQVEPACWCRLYFZRMLXOLXVWYIFZBGKNNZYUZKLIWROEPRDOOSTSEYMMVFTBZAQYVVNAZKHPWUWNQFBFEGUVWJCIMXHZQSOXAJHDFTUGCABRUEAFQNCVLRHVIANEQPXICGUZFWRUODBTTOUHWPCKSJCTIPXQDWVGNAOTQBZE");
    msg.act_time = 18797U;
    msg.deact_time = 39144U;

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
    msg.setTimeStamp(0.1243565127657632);
    msg.setSource(47222U);
    msg.setSourceEntity(98U);
    msg.setDestination(51680U);
    msg.setDestinationEntity(46U);
    msg.id = 178U;
    msg.label.assign("FESADELTTLQCCRRJDQQLQTSXNWCONZYAMUYDXYCLRFUKBOBJFREXKKIBGOVHAZDVIHYGPPBRYJAOPMEJMVSUHTOBHDNNLKEIGACCRXYJTCXIRECQGAFUMX");
    msg.component.assign("NYRBQNFYMWGBLGCZETYZHRCBMWAUFAFOIPRSNKEHIINRWZVEORFHLMLZCUVUJWVDJLFTSVALQVGGEHDZCPEHYPCKMKTNYXRQAQBBIOAKKGVSLDGEXEKPQUYIKJVDMXGJLAAAIMJDTSFBDEESCBSALOZBDCNWPOXJILUTDUKBQHVOFQGFTNNOMZ");
    msg.act_time = 5509U;
    msg.deact_time = 61871U;

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
    msg.setTimeStamp(0.540231828400098);
    msg.setSource(31885U);
    msg.setSourceEntity(148U);
    msg.setDestination(26142U);
    msg.setDestinationEntity(194U);
    msg.id = 188U;

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
    msg.setTimeStamp(0.20385856516281708);
    msg.setSource(4929U);
    msg.setSourceEntity(36U);
    msg.setDestination(4370U);
    msg.setDestinationEntity(98U);
    msg.id = 3U;

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
    msg.setTimeStamp(0.5510995501240649);
    msg.setSource(17394U);
    msg.setSourceEntity(82U);
    msg.setDestination(23784U);
    msg.setDestinationEntity(226U);
    msg.id = 51U;

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
    msg.setTimeStamp(0.9229095028012049);
    msg.setSource(32218U);
    msg.setSourceEntity(37U);
    msg.setDestination(11331U);
    msg.setDestinationEntity(163U);
    msg.op = 108U;
    msg.list.assign("BYKVXLEHZFBMLLNRAIWDRRCXCWDFCL");

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
    msg.setTimeStamp(0.100100024488334);
    msg.setSource(11786U);
    msg.setSourceEntity(124U);
    msg.setDestination(28587U);
    msg.setDestinationEntity(7U);
    msg.op = 32U;
    msg.list.assign("YRWLLHCIZLSAFSJAZQSRWVMSOWPDYGSCPQKIMPPLYUNHMWMAKOXPMPKQORLHVVXELEETJTIXZFK");

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
    msg.setTimeStamp(0.7060472613154131);
    msg.setSource(22482U);
    msg.setSourceEntity(13U);
    msg.setDestination(35519U);
    msg.setDestinationEntity(55U);
    msg.op = 210U;
    msg.list.assign("XZWQXNAJRJUZCTGRFQKZTEQMDOEGOXYYEBISUVLUEXEFUHMWOUAMAKHFHENPQKJZINACJHNSBCCSKMYTGQLALLLXPWJDZEXKSNXARNBCZITTMQZPLUZBUBTIPWFRYRZX");

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
    msg.setTimeStamp(0.8848359561774296);
    msg.setSource(32680U);
    msg.setSourceEntity(105U);
    msg.setDestination(2948U);
    msg.setDestinationEntity(225U);
    msg.value = 113U;

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
    msg.setTimeStamp(0.00555669642130463);
    msg.setSource(20459U);
    msg.setSourceEntity(240U);
    msg.setDestination(46110U);
    msg.setDestinationEntity(44U);
    msg.value = 211U;

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
    msg.setTimeStamp(0.9529811693712698);
    msg.setSource(33002U);
    msg.setSourceEntity(75U);
    msg.setDestination(23655U);
    msg.setDestinationEntity(99U);
    msg.value = 238U;

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
    msg.setTimeStamp(0.5550309714054662);
    msg.setSource(58032U);
    msg.setSourceEntity(116U);
    msg.setDestination(33847U);
    msg.setDestinationEntity(70U);
    msg.consumer.assign("HGWYQFVYXSRBQPICTUFRCDV");
    msg.message_id = 60010U;

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
    msg.setTimeStamp(0.3939025208212231);
    msg.setSource(44847U);
    msg.setSourceEntity(254U);
    msg.setDestination(41125U);
    msg.setDestinationEntity(194U);
    msg.consumer.assign("PDQFRGVJHIWSCXVWESRI");
    msg.message_id = 36883U;

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
    msg.setTimeStamp(0.8474801801337718);
    msg.setSource(1139U);
    msg.setSourceEntity(63U);
    msg.setDestination(13271U);
    msg.setDestinationEntity(199U);
    msg.consumer.assign("IDEXZFVBOUOHUQTFEWAIVEFXZXJWRVCAMXRCMMXWKKME");
    msg.message_id = 33289U;

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
    msg.setTimeStamp(0.6009180604993994);
    msg.setSource(1367U);
    msg.setSourceEntity(208U);
    msg.setDestination(3996U);
    msg.setDestinationEntity(135U);
    msg.type = 167U;

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
    msg.setTimeStamp(0.2569689004582951);
    msg.setSource(21019U);
    msg.setSourceEntity(209U);
    msg.setDestination(17648U);
    msg.setDestinationEntity(18U);
    msg.type = 145U;

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
    msg.setTimeStamp(0.06004546130440713);
    msg.setSource(20054U);
    msg.setSourceEntity(248U);
    msg.setDestination(50747U);
    msg.setDestinationEntity(237U);
    msg.type = 143U;

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
    msg.setTimeStamp(0.21238531245401504);
    msg.setSource(50210U);
    msg.setSourceEntity(159U);
    msg.setDestination(31640U);
    msg.setDestinationEntity(39U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.6603763997609446);
    msg.setSource(57517U);
    msg.setSourceEntity(172U);
    msg.setDestination(36226U);
    msg.setDestinationEntity(130U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.7326609140264632);
    msg.setSource(13055U);
    msg.setSourceEntity(39U);
    msg.setDestination(1403U);
    msg.setDestinationEntity(211U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.8610131428612369);
    msg.setSource(40065U);
    msg.setSourceEntity(6U);
    msg.setDestination(52877U);
    msg.setDestinationEntity(38U);
    msg.total_steps = 113U;
    msg.step_number = 69U;
    msg.step.assign("HCTVFQOOHYUMHPKTWHMCCNNVDKEIZGPZATSZFQMSPDDTWTCVJUKEEUASJAIAGSDJBGCFHMLJXAUPGPAXFLFTECEZVSWR");
    msg.flags = 51U;

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
    msg.setTimeStamp(0.7053314994986608);
    msg.setSource(40168U);
    msg.setSourceEntity(226U);
    msg.setDestination(56559U);
    msg.setDestinationEntity(91U);
    msg.total_steps = 110U;
    msg.step_number = 71U;
    msg.step.assign("BNDMRJUYLCIDHEABRJVBPFALSQPNMCVKQXPVOKMQWQYXCNQ");
    msg.flags = 29U;

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
    msg.setTimeStamp(0.2726176927000359);
    msg.setSource(54576U);
    msg.setSourceEntity(189U);
    msg.setDestination(53809U);
    msg.setDestinationEntity(122U);
    msg.total_steps = 69U;
    msg.step_number = 170U;
    msg.step.assign("XPJSEHSVIVAHYFAUVZZJQKPFQSBOGDIPAYQMGDUCNGGRALERRCYOFHU");
    msg.flags = 48U;

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
    msg.setTimeStamp(0.6672305292682652);
    msg.setSource(53546U);
    msg.setSourceEntity(38U);
    msg.setDestination(12585U);
    msg.setDestinationEntity(228U);
    msg.state = 83U;
    msg.error.assign("OGXJQLXPGGBJORMYVMTDAESXMWNJIGEBFXSGEYDDTGJAIIVOPXKIEZTZWOVXDCDHFWLTKMHAONLQPZNLWJPFBSTWDLXVODEUJEGIQCWFYPSZFHFDGMRFAUBIQOZHYUHCNTKJKHWJFZYMZQJACLAVRQDXUSUBQWRTWRMCOTURIKOERTLNJPNKIKAWPYERUAHKSBHBXZNLPNUMDPTSNC");

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
    msg.setTimeStamp(0.4196233131440288);
    msg.setSource(596U);
    msg.setSourceEntity(210U);
    msg.setDestination(5985U);
    msg.setDestinationEntity(139U);
    msg.state = 173U;
    msg.error.assign("VRXVWVMOEWLNHUTTLRGRBJONTWSLUSOZ");

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
    msg.setTimeStamp(0.5744600225659386);
    msg.setSource(43765U);
    msg.setSourceEntity(86U);
    msg.setDestination(45689U);
    msg.setDestinationEntity(59U);
    msg.state = 12U;
    msg.error.assign("WLCJUETYLIZVEVUMEDWSTPXFHMHNKMEOIVZOUKKGBTBGRXKKHBPSDUXIZVAEUFXZWAZTOZQYCPPDQVARXLKVIRGSJRSUYACYYKHVQSUAMNEWWROOMEWAGTJYGIAPNGXGDYRGDHDTBTMWLRWQRNTDYYNSJEAINOBQXOGRNLQNVFLIJCAZLMHOCQXYOUWLPELHNMHKCSWVDSSFJAKUCBPCBOCTIFZIFPFKIDHDLJQPJRBVBGXJMQ");

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
    msg.setTimeStamp(0.9492570917587195);
    msg.setSource(20976U);
    msg.setSourceEntity(154U);
    msg.setDestination(24020U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.29286672441065764);
    msg.setSource(49901U);
    msg.setSourceEntity(215U);
    msg.setDestination(2198U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.1283928510016663);
    msg.setSource(42169U);
    msg.setSourceEntity(168U);
    msg.setDestination(5297U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.23854317350595877);
    msg.setSource(28472U);
    msg.setSourceEntity(83U);
    msg.setDestination(51076U);
    msg.setDestinationEntity(62U);
    msg.op = 189U;
    msg.speed_min = 0.7167467261686182;
    msg.speed_max = 0.1256108568886949;
    msg.long_accel = 0.45441003905103283;
    msg.alt_max_msl = 0.05715041023975542;
    msg.dive_fraction_max = 0.10604060519847369;
    msg.climb_fraction_max = 0.2838595251961271;
    msg.bank_max = 0.8552172715136669;
    msg.p_max = 0.9534574069974913;
    msg.pitch_min = 0.03648554447345842;
    msg.pitch_max = 0.8103702878834438;
    msg.q_max = 0.5308298802353788;
    msg.g_min = 0.5486476250216682;
    msg.g_max = 0.9433019695035824;
    msg.g_lat_max = 0.533884623827224;
    msg.rpm_min = 0.5076304476408573;
    msg.rpm_max = 0.7998798744558216;
    msg.rpm_rate_max = 0.20210776940043818;

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
    msg.setTimeStamp(0.1740652936605207);
    msg.setSource(31297U);
    msg.setSourceEntity(236U);
    msg.setDestination(51313U);
    msg.setDestinationEntity(195U);
    msg.op = 134U;
    msg.speed_min = 0.10722843173154506;
    msg.speed_max = 0.013668812852542622;
    msg.long_accel = 0.7174335305350239;
    msg.alt_max_msl = 0.839097804402306;
    msg.dive_fraction_max = 0.4797540192942491;
    msg.climb_fraction_max = 0.00467030230365062;
    msg.bank_max = 0.3963648016602248;
    msg.p_max = 0.015509148365090542;
    msg.pitch_min = 0.8341195809538497;
    msg.pitch_max = 0.46431532432875244;
    msg.q_max = 0.9747404172684185;
    msg.g_min = 0.6134920224824009;
    msg.g_max = 0.9501358838982072;
    msg.g_lat_max = 0.7879917828235385;
    msg.rpm_min = 0.657285667169631;
    msg.rpm_max = 0.1164789844442422;
    msg.rpm_rate_max = 0.32471421473658135;

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
    msg.setTimeStamp(0.8198132861759434);
    msg.setSource(19581U);
    msg.setSourceEntity(125U);
    msg.setDestination(38567U);
    msg.setDestinationEntity(74U);
    msg.op = 83U;
    msg.speed_min = 0.4629945582432;
    msg.speed_max = 0.6637379629560299;
    msg.long_accel = 0.4798261221366409;
    msg.alt_max_msl = 0.945888173015914;
    msg.dive_fraction_max = 0.6429178420897799;
    msg.climb_fraction_max = 0.48754787066835403;
    msg.bank_max = 0.1619920139881601;
    msg.p_max = 0.9006608372078243;
    msg.pitch_min = 0.07776824536353111;
    msg.pitch_max = 0.6144902892293261;
    msg.q_max = 0.22319760740077432;
    msg.g_min = 0.9250973828551233;
    msg.g_max = 0.5743556396761116;
    msg.g_lat_max = 0.7771539472752736;
    msg.rpm_min = 0.4429218725963818;
    msg.rpm_max = 0.5312563099838203;
    msg.rpm_rate_max = 0.44462533720186115;

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
    msg.setTimeStamp(0.05765350182884388);
    msg.setSource(20990U);
    msg.setSourceEntity(238U);
    msg.setDestination(21287U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.4159740401728982);
    msg.setSource(24405U);
    msg.setSourceEntity(138U);
    msg.setDestination(57261U);
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
    msg.setTimeStamp(0.6505972126569224);
    msg.setSource(2825U);
    msg.setSourceEntity(149U);
    msg.setDestination(35388U);
    msg.setDestinationEntity(23U);
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.31491747635565137;
    tmp_msg_0.y = 0.5024295723150674;
    tmp_msg_0.z = 0.5452251338882649;
    tmp_msg_0.phi = 0.6265315373611923;
    tmp_msg_0.theta = 0.30557980096119686;
    tmp_msg_0.psi = 0.9661017683044134;
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
    msg.setTimeStamp(0.956965419159197);
    msg.setSource(32353U);
    msg.setSourceEntity(46U);
    msg.setDestination(60017U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.34555622329908653;
    msg.lon = 0.5788201472970484;
    msg.height = 0.9216395500578614;
    msg.x = 0.5517292025271635;
    msg.y = 0.6982619342994255;
    msg.z = 0.32971092245672196;
    msg.phi = 0.11448353818723;
    msg.theta = 0.7881179415823185;
    msg.psi = 0.3748283634767229;
    msg.u = 0.3163291605736206;
    msg.v = 0.24089552715170015;
    msg.w = 0.6391745051502687;
    msg.p = 0.6980921279073885;
    msg.q = 0.3853589657838157;
    msg.r = 0.8382842550817524;
    msg.svx = 0.06669885948413778;
    msg.svy = 0.6010043805765207;
    msg.svz = 0.2481589567131417;

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
    msg.setTimeStamp(0.6482350044395945);
    msg.setSource(11560U);
    msg.setSourceEntity(130U);
    msg.setDestination(15969U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.07314376422909097;
    msg.lon = 0.461548257306997;
    msg.height = 0.6476406922395304;
    msg.x = 0.6935229091484421;
    msg.y = 0.40383662675179144;
    msg.z = 0.4265578563954687;
    msg.phi = 0.30782926784251996;
    msg.theta = 0.49532455676355747;
    msg.psi = 0.20255212408251755;
    msg.u = 0.40515962087354374;
    msg.v = 0.7915670407503743;
    msg.w = 0.47110831447919954;
    msg.p = 0.41158548347286683;
    msg.q = 0.7157328140055195;
    msg.r = 0.17291613887556967;
    msg.svx = 0.3950599120374899;
    msg.svy = 0.23204358728106123;
    msg.svz = 0.9993954960296119;

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
    msg.setTimeStamp(0.31731864539110766);
    msg.setSource(56110U);
    msg.setSourceEntity(27U);
    msg.setDestination(25410U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.2797512832082226;
    msg.lon = 0.7841828347102597;
    msg.height = 0.7213426110460053;
    msg.x = 0.3927746380961079;
    msg.y = 0.092151335583603;
    msg.z = 0.598660458795822;
    msg.phi = 0.7724801947994354;
    msg.theta = 0.8247439976910547;
    msg.psi = 0.010473347218961648;
    msg.u = 0.09461532819835727;
    msg.v = 0.8754053918206033;
    msg.w = 0.9291277808933789;
    msg.p = 6.563976395568272e-05;
    msg.q = 0.3078560472636064;
    msg.r = 0.5611549566277245;
    msg.svx = 0.39523081419568173;
    msg.svy = 0.12896133123944775;
    msg.svz = 0.47711108675797353;

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
    msg.setTimeStamp(0.30555258015790465);
    msg.setSource(57257U);
    msg.setSourceEntity(250U);
    msg.setDestination(57021U);
    msg.setDestinationEntity(177U);
    msg.op = 103U;
    msg.entities.assign("JQFJYGRTVLBJIEJERZDCSLMKQTMIQXSDZZPIGQUXZHBMTNBDBWITXPEQDHSCMSGMIWBXASTUPZPTKMWUNKXKFPQFRPURAYYOUWYQCEBWCAAVCFIJREHLVGTITHVBRDMYZVZNZGKUMENXDGYQDIPGOJIPNXCOVVLHFWXOKLDDRPENLGKAWOMUXHQCSCUHJIDEFYBCAGKTFWHYHFOFLTAXJBRKMLWCOSLZJONLNVEURRSBOKASWUNQJPVSYH");

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
    msg.setTimeStamp(0.4370961867419697);
    msg.setSource(4017U);
    msg.setSourceEntity(58U);
    msg.setDestination(57098U);
    msg.setDestinationEntity(65U);
    msg.op = 82U;
    msg.entities.assign("CPPWAEOZCVGERVECDXODUDHIKMTRUBYOMMTGHILTCBKWBEOFNQDHBRHRPXFITIQHMPXGFNCLYJYMPQPSXOSGDXFMQHCBPWQAGXGRSGBLAWIVWWSNYZUBZUDDUJYAIAOKZNJTBSGEDHYNMANLOBCVKUMCYZFQTRTALNDFSPQAIAZWRYJEXBEEUYMHZSNWUGVYVOZSLTZVFHPMDKXJOIPFUWNLLUVSKCTWHREKQKFNIXJKALEJKZJTJ");

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
    msg.setTimeStamp(0.7316689677991646);
    msg.setSource(17147U);
    msg.setSourceEntity(29U);
    msg.setDestination(34263U);
    msg.setDestinationEntity(88U);
    msg.op = 132U;
    msg.entities.assign("SJSCRQILMSDSCDZQTLAFAQMZQCPZJGJMUFVSXTVRZWJYGOUUKHXERTQEUXRNUVQOMWDPYDAWLHJMWEIMJQOHRKHAAKNKPLKHUZGBTBEYCFVEXWPDHYOSCTYKOYIQOALFWYNCZYZJMLFFIKRYAWVBMVNPBIOKRFNMTQIGCTNDLIVABPVHCFZCRRFHJEDBNEBAGUGGXFLIWTWSBXUHXGPXDKXIVAPLEZBUSTSGHUDKRPN");

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
    msg.setTimeStamp(0.8382909256226804);
    msg.setSource(54023U);
    msg.setSourceEntity(165U);
    msg.setDestination(16186U);
    msg.setDestinationEntity(46U);
    msg.type = 148U;
    msg.speed = 12053U;
    const char tmp_msg_0[] = {74, 58, 35, 56, 23, -39, -101, -57, 88, -14, 114, 36, -3, 61, 59, -59, -124, 124, 16, -16, -40, -32, 78, -23, -72, -52, -57, -45, 45, 70, -19, -1, -38, -25, -97, -26, -53, -31, 83, 75, -99, -14, 83, 84, 56, 112, 51, -66, 26, 90, -58, 104, -3, -62, 9, -1, 13, -122, -44, -115, 3, 35, -83, -87, -82, 123, 113, 43, 46, 56, 32, 97, 35, -117, 52, -13, -23, -127, -11, -103, 21, -13, 121, 10, -41, -29, 2, 11, 83, 113, -30, 5, 12, 71, 85, 85, -51, -89, 55, 10, -91, -103, 74, -128, -79, -35, -34, 21, 58, -76, 67, 10, -32, -103, 17, 96, 118, 66, -4, 24, 75, 42, 65, 37, 81, 110, -35, -12, -59, -78, 40, 3, 103, -80, -82, -78, 66, -109, -69, -72, -101, 78, -63, 84, 48, -14, 77, 59, 1, -33, 77, -16, -20, -118, -42, 65, 27, -36, 53, -49, -24, 55, 25, 26, -66, 65, -98, 7, 82, -76, 29, 96, -67, -7, -44, 56, 24, 61, 34, 89, -39, -1, 107};
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
    msg.setTimeStamp(0.17140263903547182);
    msg.setSource(11727U);
    msg.setSourceEntity(180U);
    msg.setDestination(42485U);
    msg.setDestinationEntity(69U);
    msg.type = 117U;
    msg.speed = 26380U;
    const char tmp_msg_0[] = {28, -113, 51, -42, -4, -56, 125, 13, -60, 110, -112, -78, 9, -11, -1, 65, -58, -109, -93, -110, -2, -1, 92, -58, 95, 49, -122, 13, -25, -67, -59, 83, 50, 125, -105, 107, -63, 48, 28, -52, -69, -75, 44, 103, -74, -118, -115, 107, 71, 83, -3, -10, 60, -54, 77, -37, -105, -119, -54, -16, 58, -33, -121, 50, 90, 86, -73, -92, -73, -120, -98, -55, -114, -61, 80, 77, -128, -7, 126, -82, -22, 120, 124, -64, -54, -52, 89, 100, -85, -26, -108, -51, -106, 12, -75, -19, -41, -125, -59, -69, -25, -12, -95, -91, -99, 115, -82, 65, 82, 6, -82, 20, -95, -114, 125, -101, 76, -89, 86, -4, -115, 8, -16, 38, 61, -44, 9, -6, -86, 126, 20, 114, 45, 66, -9, 3, 113, 30, -71, 6, 24, 96, 64, -43};
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
    msg.setTimeStamp(0.698482313487664);
    msg.setSource(15759U);
    msg.setSourceEntity(9U);
    msg.setDestination(23219U);
    msg.setDestinationEntity(59U);
    msg.type = 129U;
    msg.speed = 30335U;
    const char tmp_msg_0[] = {-75, 29, 44, 86, -37, 58, 107, -122, -120, 15, 124, 79, -64, -98, 19, -63, 83, -120, -128, -38, -31, -70, -80, -50, 15, 2, -59, 110, 56, 64, -61, -44, -96, 88, -125, 62, -69, -102, 96, 51, 126, 97, 106, 109, 67, -46, -63, -66, 7, 8, -108, -66, 55, 84, 26, -120, 6, -93, 54, 76, -127, -114, 57, 76, -4, 59, 121, 1, 9, -78, 39, 8, 63, -66, -11, -102, 111, 108, -64, -77, 11, -121, -93, 122, -103, -7, 101, 111, 12, 13, 118, 81, 48, -96, 120, -117, -9, -105, 124, 64, 16, -13, -77, -73, -82, 36, 16, -114, 117, -94, 91, -61, -60, -107, -95, 13, -69, -42, -48, 5, 3, -32, 43, 41, 100, 10, 104, 16, 118, 57, -57, 88, 61, 33, 58, -32, -66, -84, -100, -2, -79, 100, 44, -5, -66, -6, -92, -73, 100, -89, -48, 27, 19, -66, 103, -49, 36, 113, 3, -26, 107, 103, -109, 72, 34, 2, -53, 40, 118, -1, 64, 0, 81, -60, -16, -19, 105, -92, 90, 108, 93, 39, -51, 74, 67, 114, -120, -92, 41, -7, -47, 105, 119, 64, 120, -43, -104, 102, 94, -91, 30, 57, 17, 6, 81, -108, -33, 63, -63, -11, 27, 107, -76, 108, 49, -19, 51, 68, 109, 101, 112, 124, 53, -2, -2, 84, 115, 121, -106, -16, 22, -113, 93, 24, -63, 110, 49, -11};
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
    msg.setTimeStamp(0.9142015614768002);
    msg.setSource(65078U);
    msg.setSourceEntity(13U);
    msg.setDestination(13779U);
    msg.setDestinationEntity(191U);
    msg.op = 128U;
    msg.tas2acc_pgain = 0.7648037614224236;
    msg.bank2p_pgain = 0.9439468844678585;

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
    msg.setTimeStamp(0.5023916469007425);
    msg.setSource(55384U);
    msg.setSourceEntity(159U);
    msg.setDestination(7274U);
    msg.setDestinationEntity(85U);
    msg.op = 238U;
    msg.tas2acc_pgain = 0.7009232893929586;
    msg.bank2p_pgain = 0.3277575050446805;

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
    msg.setTimeStamp(0.6672416259858228);
    msg.setSource(32571U);
    msg.setSourceEntity(66U);
    msg.setDestination(30252U);
    msg.setDestinationEntity(213U);
    msg.op = 237U;
    msg.tas2acc_pgain = 0.1221380551912471;
    msg.bank2p_pgain = 0.7970263870972438;

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
    msg.setTimeStamp(0.2173028181518084);
    msg.setSource(5014U);
    msg.setSourceEntity(50U);
    msg.setDestination(61097U);
    msg.setDestinationEntity(209U);
    msg.available = 2663130284U;
    msg.value = 55U;

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
    msg.setTimeStamp(0.880452693563595);
    msg.setSource(23429U);
    msg.setSourceEntity(254U);
    msg.setDestination(19600U);
    msg.setDestinationEntity(108U);
    msg.available = 2388729476U;
    msg.value = 156U;

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
    msg.setTimeStamp(0.19196897213512398);
    msg.setSource(20030U);
    msg.setSourceEntity(118U);
    msg.setDestination(17740U);
    msg.setDestinationEntity(212U);
    msg.available = 2041183075U;
    msg.value = 32U;

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
    msg.setTimeStamp(0.6630645974283771);
    msg.setSource(22986U);
    msg.setSourceEntity(243U);
    msg.setDestination(39907U);
    msg.setDestinationEntity(56U);
    msg.op = 156U;
    msg.snapshot.assign("AZBBPPYOCNLMVUIUZQDAIKSMZXIAOWNKAYUORSDWZFJIKZAXEWCRXSDTLSMSAIATTXFFULQXDWMSNURNCGNHGHBXLUJOAVBDMNWVVJEDXEHUKFIVYEUIIPOWTLJRETPYDMKZBPZWYTEDEFEJGHZKLAGXNLFOFZGQMFJZYFPTGAJNBJOPRCSBLYUCYTHHIORVYSOECSCPHNUJFIMPPCOWXCRWTYQRJGQTDHMQGGR");
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.5812015471087171;
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
    msg.setTimeStamp(0.7304234209704686);
    msg.setSource(25174U);
    msg.setSourceEntity(32U);
    msg.setDestination(55127U);
    msg.setDestinationEntity(143U);
    msg.op = 166U;
    msg.snapshot.assign("WLSGPFGQMXRKQPGPDONNMDSHBFADTFNXWICZTOGHZKNPNSTSPCCUINAKEICZBLQLMESEKVBRXAGZYBGUOITRMRWCFYB");
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.15570232548373464);
    msg.setSource(4430U);
    msg.setSourceEntity(58U);
    msg.setDestination(59604U);
    msg.setDestinationEntity(125U);
    msg.op = 138U;
    msg.snapshot.assign("XYGBDHPZKRERYFSFFBXGVZFOORYZTNUFUIDZEJNFBTQ");
    IMC::GroupMembershipState tmp_msg_0;
    tmp_msg_0.group_name.assign("BFVTCGGUNLLYOWBEUNVFZJGQCFHUIICXHLYIJBIEHXOFKAVDTDOPVPYKPQBWVTOCEWHAYSIUPZRNKQDKSJYKUGAMEIVOTBMZWRREDCAIGEEKRPFFGWLBUIEMZGUKZHUGDNPTZQABQVAKWRXNSTYCPZFCGM");
    tmp_msg_0.links = 4243709816U;
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
    msg.setTimeStamp(0.8290062357030072);
    msg.setSource(35626U);
    msg.setSourceEntity(225U);
    msg.setDestination(65024U);
    msg.setDestinationEntity(163U);
    msg.op = 201U;
    msg.name.assign("LRYVEDCJLOWHTBNXGRHSPKZPNQIHGUIAPYEVDCEPIVAYXRBOBQAHRYKXMBDDCNZTYGQTOHJGUYSWC");

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
    msg.setTimeStamp(0.1416086940490049);
    msg.setSource(53637U);
    msg.setSourceEntity(1U);
    msg.setDestination(25275U);
    msg.setDestinationEntity(130U);
    msg.op = 26U;
    msg.name.assign("QXGSFINGEXOZURZODASNKHBQAZHYVKFDRLDGYNVEUXFHVWFYUSEUYCIWMZPOPTTBKRQMRTCIOJDPMVTDFKEHILTOBOXMKDDF");

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
    msg.setTimeStamp(0.3796373467396348);
    msg.setSource(12394U);
    msg.setSourceEntity(187U);
    msg.setDestination(10007U);
    msg.setDestinationEntity(82U);
    msg.op = 72U;
    msg.name.assign("ZDBEAUUAHMWZRZXIAKSARJVCTNHQCJFPOGDFMRBEOHWTKVVTOGLQEFCYKXOYLNUVIP");

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
    msg.setTimeStamp(0.5830282703883019);
    msg.setSource(57855U);
    msg.setSourceEntity(220U);
    msg.setDestination(34361U);
    msg.setDestinationEntity(219U);
    msg.type = 32U;
    msg.htime = 0.8348275566719828;
    msg.context.assign("NHHSPHRHNDBRFQJMAJDLAYYZXYVQEZTDDUTSKIQXDQFCJOLRHTHDFGYRPTXMWYQNTONWESKSEDAWZZTXEEBOTJUBMCGZMMGXCSZFSQVJOUIPHCBMBOJNRSDVBZPKWUKPDXKKGFAXMCFIXWUAOLVCCNZAGVJCMTPZUTSRVRECVRLWXPYNJYLIIASIBNEODHAOHRLIGEYESBYPGQGZCLHXNFJLGIUQKFTVWUKVKANAMPYQWGPRUEQMOWLUWIBJF");
    msg.text.assign("LSEFBWHOYPMBQLPCIJQNPMJMXODEBVTQSJHEXNZUCXHCVEWPPRWHIKGZCNIOMTXJKZYKFDKJUVROVEFWQMIUAOFGSZBQFRPBVXYLAYOEGMGKAUIBSGAZRYKNFCIBRYZCJZVWGN");

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
    msg.setTimeStamp(0.15114864636761938);
    msg.setSource(29922U);
    msg.setSourceEntity(223U);
    msg.setDestination(34039U);
    msg.setDestinationEntity(228U);
    msg.type = 1U;
    msg.htime = 0.0013247462725439751;
    msg.context.assign("IIOAYMJOMLWWSUIKLEDKXNYXIZBRTNDFICDOYSIOBPIFBVRMPEAJRPOKQTDEEYWZRORGUUBANVEAJIKVCSRSKJQUMLCZDZHTELNLXRCQHXHOJFHWFTTSYLXVDVABFEPJTYAEZQNNISHVBGOMZJSTNJNQBGLHZQXUWBVVHIDQGHVPOQRSGGKKWBWYMXLBYTEASYWJLMWKCZFWFUPXALFPUURFQPOHMCPN");
    msg.text.assign("MXVGBJEIPDNVLXINSASHDSWUDLXVQPIQVGAK");

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
    msg.setTimeStamp(0.8433474749787803);
    msg.setSource(64536U);
    msg.setSourceEntity(118U);
    msg.setDestination(53997U);
    msg.setDestinationEntity(24U);
    msg.type = 146U;
    msg.htime = 0.2410948830439159;
    msg.context.assign("SUSINEJRDMBIDHBZYZXUXTNNWXCRLHKKBJJFDQOELOAWENTRRFZIHFUYRLOJRXMUCQHBSBFZKGLISFJRYGASAAMMVYPAUQTXTXOMQOWNUYHCQQYKDBOJKJPIZETDSEKYTQJZDPKGGPIDEAGWNXVCCYHCHFKYZZLFMQWSDPEUWNE");
    msg.text.assign("LEADVSYYHMARKIVIQDXCEBXDOJXLUUXEZFJMWHURKHAMESZFZDTIBROKZQRWSFCRPOQVGHTASJHPGGBIFQVEDXJYOUKXQENMYUSUKOGLHHPANFUIULWAVFMXMVKTLDBZPDLBNWMKZVMPCIPCDZEJMRUSFRBLKWWBYTYOCZSPXQJFJOSVMKXJIWOYBNRLAYWDPQWYZLRTDNAEETWFNQZGHGCGNTVITHASIAGCUNEBTLOKYOCTGHN");

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
    msg.setTimeStamp(0.26715836128170256);
    msg.setSource(22329U);
    msg.setSourceEntity(100U);
    msg.setDestination(24575U);
    msg.setDestinationEntity(217U);
    msg.command = 19U;
    msg.htime = 0.13713728164587513;

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
    msg.setTimeStamp(0.8281245110332397);
    msg.setSource(10597U);
    msg.setSourceEntity(204U);
    msg.setDestination(59780U);
    msg.setDestinationEntity(148U);
    msg.command = 76U;
    msg.htime = 0.7420035937378231;

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
    msg.setTimeStamp(0.7504228587176046);
    msg.setSource(26046U);
    msg.setSourceEntity(129U);
    msg.setDestination(33368U);
    msg.setDestinationEntity(91U);
    msg.command = 28U;
    msg.htime = 0.6304512351999398;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 105U;
    tmp_msg_0.htime = 0.6179429450114097;
    tmp_msg_0.context.assign("VCSSCVNMKOMPLUFXTOTPFEJLGKYNFNSHOSHIAJEOTYHXPHDCPKVGUKLBAMSJDYOWGVQRWEIBRK");
    tmp_msg_0.text.assign("RJWDSDBMJCSICQXYAASNHMNKBVOCHRVTRUATKLQFVGFYDSRTXGHPNPZMXYPDVOGEIUQWHMNTEARLCCHFKIEOTCAZBWFGVMDFAYJQNPGQEWNTRTUCVMWKPWMJLWHDSFAIQLTSESZLGSWXOHUBRBAIBYXPTZIOLNZJSPAVNKOWJZOUKNLVPUHVYUZIQEZGFONRZCTLXJRAEDYMLOXIYDOCWMYPU");
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
    msg.setTimeStamp(0.04491145702627364);
    msg.setSource(5311U);
    msg.setSourceEntity(64U);
    msg.setDestination(4084U);
    msg.setDestinationEntity(154U);
    msg.op = 24U;
    msg.file.assign("SJQZRXORIMSFTUJKIQG");

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
    msg.setTimeStamp(0.17282136810999582);
    msg.setSource(20814U);
    msg.setSourceEntity(231U);
    msg.setDestination(65202U);
    msg.setDestinationEntity(208U);
    msg.op = 94U;
    msg.file.assign("OTPLBCYCSHDTXVBGFWKOVIJJMNAHDIHGNYLUBMLPQXEQHUXKEAWLIWHMXFDVIMZMGCCTFESRXTGEKXBYDWSNPOFAEDYGRNQZBTJDZIRVEYOUOTJVNPVKXYPWBGOMIUQKPPGRSICCCJZWYULLSSKFEUHJVZWSCGDWVZQJSFIDWRHYBZLKFAQAZABZRUFHOJHUBSPNNOIUNRFMEXNWLALAMIKDYLQZRCTBVHOXKDRAGFGKTUQ");

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
    msg.setTimeStamp(0.08133276696875436);
    msg.setSource(46194U);
    msg.setSourceEntity(98U);
    msg.setDestination(1218U);
    msg.setDestinationEntity(194U);
    msg.op = 252U;
    msg.file.assign("BLPKYRNUZSDKYPQNJQHXNRPWNLBBOAHSAGKB");

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
    msg.setTimeStamp(0.8777394853272799);
    msg.setSource(57777U);
    msg.setSourceEntity(119U);
    msg.setDestination(19057U);
    msg.setDestinationEntity(216U);
    msg.op = 3U;
    msg.clock = 0.8363919568970891;
    msg.tz = -99;

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
    msg.setTimeStamp(0.06951208276559828);
    msg.setSource(60575U);
    msg.setSourceEntity(64U);
    msg.setDestination(31291U);
    msg.setDestinationEntity(42U);
    msg.op = 118U;
    msg.clock = 0.9635887140761308;
    msg.tz = 69;

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
    msg.setTimeStamp(0.29950721662019597);
    msg.setSource(58683U);
    msg.setSourceEntity(98U);
    msg.setDestination(44080U);
    msg.setDestinationEntity(101U);
    msg.op = 93U;
    msg.clock = 0.3666656786303947;
    msg.tz = 4;

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
    msg.setTimeStamp(0.4683047178637041);
    msg.setSource(13639U);
    msg.setSourceEntity(187U);
    msg.setDestination(3978U);
    msg.setDestinationEntity(24U);
    msg.conductivity = 0.0727110968161504;
    msg.temperature = 0.899211870798339;
    msg.depth = 0.8211026219990512;

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
    msg.setTimeStamp(0.537801098117952);
    msg.setSource(28974U);
    msg.setSourceEntity(14U);
    msg.setDestination(41459U);
    msg.setDestinationEntity(186U);
    msg.conductivity = 0.9472135936875693;
    msg.temperature = 0.6013628231965163;
    msg.depth = 0.002840856438681927;

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
    msg.setTimeStamp(0.2604167948000925);
    msg.setSource(19042U);
    msg.setSourceEntity(155U);
    msg.setDestination(36954U);
    msg.setDestinationEntity(49U);
    msg.conductivity = 0.7315860386830291;
    msg.temperature = 0.824458920802464;
    msg.depth = 0.407692683707532;

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
    msg.setTimeStamp(0.5098212597344196);
    msg.setSource(49938U);
    msg.setSourceEntity(112U);
    msg.setDestination(47617U);
    msg.setDestinationEntity(32U);
    msg.altitude = 0.1487441633819575;
    msg.roll = 3691U;
    msg.pitch = 7335U;
    msg.yaw = 55658U;
    msg.speed = -11408;

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
    msg.setTimeStamp(0.9433009904410016);
    msg.setSource(64546U);
    msg.setSourceEntity(193U);
    msg.setDestination(42091U);
    msg.setDestinationEntity(108U);
    msg.altitude = 0.6522181338627412;
    msg.roll = 59315U;
    msg.pitch = 51261U;
    msg.yaw = 60205U;
    msg.speed = 1335;

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
    msg.setTimeStamp(0.40661268470036727);
    msg.setSource(51246U);
    msg.setSourceEntity(236U);
    msg.setDestination(38907U);
    msg.setDestinationEntity(44U);
    msg.altitude = 0.4781155809876215;
    msg.roll = 51877U;
    msg.pitch = 8090U;
    msg.yaw = 58275U;
    msg.speed = -31017;

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
    msg.setTimeStamp(0.8548255143038335);
    msg.setSource(54585U);
    msg.setSourceEntity(237U);
    msg.setDestination(12631U);
    msg.setDestinationEntity(35U);
    msg.altitude = 0.04391244384010984;
    msg.width = 0.5261711645341908;
    msg.length = 0.8079595997679612;
    msg.bearing = 0.8556195328703221;
    msg.pxl = 12553;
    msg.encoding = 28U;
    const char tmp_msg_0[] = {-85, -72, -4, 19, -125, -26, 64, 11, -6, -10, 54};
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
    msg.setTimeStamp(0.23720601000319785);
    msg.setSource(1497U);
    msg.setSourceEntity(29U);
    msg.setDestination(43734U);
    msg.setDestinationEntity(211U);
    msg.altitude = 0.9258368928716892;
    msg.width = 0.7154177914263989;
    msg.length = 0.25097430893851114;
    msg.bearing = 0.09277458900202329;
    msg.pxl = 20086;
    msg.encoding = 148U;
    const char tmp_msg_0[] = {-112, -125, -63, 120, -37, 21, -16, 102, 67, 49, -12, -43, 98, -106, 70, -127, 45, 103, -19, 51, -49, -116, 122, -66, -26, -101, -18, -61, 36, 58, 59, -115, 10, 62, -4, 118, 52, -35, -56, -73, -32, -93, 18, 89, -32, -77, 53, -99, -57, -66, 123, 64, 121, 81, 50, -16, -117, -101, -26, -104, 69, 93, 58, -78, -21, -60, -112, -80, 97};
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
    msg.setTimeStamp(0.02093433141000045);
    msg.setSource(35431U);
    msg.setSourceEntity(158U);
    msg.setDestination(11715U);
    msg.setDestinationEntity(229U);
    msg.altitude = 0.9749137566463547;
    msg.width = 0.9792249424153912;
    msg.length = 0.5320725371751867;
    msg.bearing = 0.6907023177764181;
    msg.pxl = -11516;
    msg.encoding = 140U;
    const char tmp_msg_0[] = {-66, -95, -107, 126, 21, -66, 27, -118, 45, 107, -124, 43, 1, 13, -87, -108, 43, -97, -9, -42, 59, -76, 89, 49, -3, 12, 36, 57, 67, 21, -90, -50, -67, 103, -20, 13, -78, -89, 11, 88, -124, -72, 96, -71, 94, 50, -127, 81, -128, 74, -56, 20, -38, -101, 64, -92, -9, 68, -47, -23, -102, -78, 2, -71, -105, 32, 34, -69};
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
    msg.setTimeStamp(0.13946497995881169);
    msg.setSource(29778U);
    msg.setSourceEntity(17U);
    msg.setDestination(38957U);
    msg.setDestinationEntity(29U);
    msg.text.assign("VAKTPOUFHFFQFGZBFOTBCTFIMJATRPIRRDNBQU");
    msg.type = 169U;

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
    msg.setTimeStamp(0.08615551547199785);
    msg.setSource(29490U);
    msg.setSourceEntity(199U);
    msg.setDestination(57506U);
    msg.setDestinationEntity(15U);
    msg.text.assign("GDVJDFLAXBKSKTTZJQOZLQMOSUYXEGEQLQGLSCYPHGXDHOPKOCPOEEZGULR");
    msg.type = 36U;

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
    msg.setTimeStamp(0.3233761024295666);
    msg.setSource(40222U);
    msg.setSourceEntity(72U);
    msg.setDestination(39916U);
    msg.setDestinationEntity(50U);
    msg.text.assign("LVYMJWIMJEYABEYTICSLGFBECKBXDAGHDUOHRWYHLZDTAKBQFH");
    msg.type = 51U;

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
    msg.setTimeStamp(0.5940128476392632);
    msg.setSource(7104U);
    msg.setSourceEntity(31U);
    msg.setDestination(53728U);
    msg.setDestinationEntity(99U);
    msg.parameter = 13U;
    msg.numsamples = 194U;
    msg.lat = 0.8121703098767145;
    msg.lon = 0.19537845788851105;

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
    msg.setTimeStamp(0.6794267941132544);
    msg.setSource(6571U);
    msg.setSourceEntity(76U);
    msg.setDestination(54475U);
    msg.setDestinationEntity(240U);
    msg.parameter = 128U;
    msg.numsamples = 48U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 57622U;
    tmp_msg_0.avg = 0.29374271348673964;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9794594184463152;
    msg.lon = 0.7870269182551691;

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
    msg.setTimeStamp(0.0581356986514896);
    msg.setSource(20279U);
    msg.setSourceEntity(195U);
    msg.setDestination(31936U);
    msg.setDestinationEntity(133U);
    msg.parameter = 41U;
    msg.numsamples = 204U;
    msg.lat = 0.7505943470471775;
    msg.lon = 0.7745123401896096;

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
    msg.setTimeStamp(0.1816196085310613);
    msg.setSource(2418U);
    msg.setSourceEntity(15U);
    msg.setDestination(49430U);
    msg.setDestinationEntity(42U);
    msg.depth = 9224U;
    msg.avg = 0.6220923963361514;

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
    msg.setTimeStamp(0.7599977934578102);
    msg.setSource(21499U);
    msg.setSourceEntity(143U);
    msg.setDestination(48502U);
    msg.setDestinationEntity(23U);
    msg.depth = 31501U;
    msg.avg = 0.9018631648814863;

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
    msg.setTimeStamp(0.3695294273984495);
    msg.setSource(19867U);
    msg.setSourceEntity(105U);
    msg.setDestination(59573U);
    msg.setDestinationEntity(214U);
    msg.depth = 9496U;
    msg.avg = 0.8391875629911657;

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
    msg.setTimeStamp(0.8792004902564414);
    msg.setSource(29523U);
    msg.setSourceEntity(227U);
    msg.setDestination(21032U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.16555919420694254);
    msg.setSource(5183U);
    msg.setSourceEntity(150U);
    msg.setDestination(48320U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.771881576463006);
    msg.setSource(49613U);
    msg.setSourceEntity(44U);
    msg.setDestination(31801U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.7731263764657597);
    msg.setSource(36042U);
    msg.setSourceEntity(8U);
    msg.setDestination(52968U);
    msg.setDestinationEntity(207U);
    msg.sys_name.assign("EMJVCMOWDGAOZAFZPMBUKZQLDMWKXVRNMPNVGJYJHIFYBFKIJJLNLSPERWSBIPSZUEVRXEXQOATMZHTSXVGOYTABRODLPOFXXNKQKFBYMULHSFAZDDAYUERODKJTSEETIITWKMBEHJWQQYITQZLFTPJHSURKOHBVDAQALZYGZOWGXDHCXNFT");
    msg.sys_type = 70U;
    msg.owner = 7743U;
    msg.lat = 0.3073001005085153;
    msg.lon = 0.7619024776944197;
    msg.height = 0.3653029062935055;
    msg.services.assign("KILBIBWOEPXWNCEKPE");

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
    msg.setTimeStamp(0.4520470834455317);
    msg.setSource(3674U);
    msg.setSourceEntity(64U);
    msg.setDestination(384U);
    msg.setDestinationEntity(160U);
    msg.sys_name.assign("STDSEFJYVXBCTDAJRFGRCABWURTZHPDERQPUKWXFWNLEKAKBLHEQAPXLGTOLPBRVNFNYOQPSGRBOSVFTDHBTKYKMDTTIDAVCMYWWRJSHAIAOJCTNFSYQLYKPMDHGQCVZQIGGCVMULVWENDVUWMOHJC");
    msg.sys_type = 104U;
    msg.owner = 54818U;
    msg.lat = 0.7623918886066593;
    msg.lon = 0.7830700276041392;
    msg.height = 0.6177047576051516;
    msg.services.assign("JGZFWZNNBONBSQBQNSQSWXHWIROCZKAYUWWZBDAUGNRBLTPQXYBCYEBEUBOYJVASILNEVTTOQDHEVVAUOIMBUPCTHRPEJICHKMHRDXFTPYJHZYXWLMZQVFJOWJRMUVAFJPXCOZIOSFDAKIRDDGRSQXMXDLMAGARGTUKHNYLFTPQXMFFYGHWTK");

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
    msg.setTimeStamp(0.01819248834908327);
    msg.setSource(16629U);
    msg.setSourceEntity(26U);
    msg.setDestination(64993U);
    msg.setDestinationEntity(11U);
    msg.sys_name.assign("HGSNMYVAYGBLGOQRCYBLIDFVIWEAPEJZCCDBXSNJWNTEKOFIKAKXZOSSYIJRAVPGSMKVXWLXQAKKTHLYGMREJZGUZDRWOWONMYEPPPQFZCIUWMYHSYAYNEAJGJSJXCBARDULHCEMOLURGDIMEJFTKLIZNPHBVFFWKXLUQTQYBTFTMHWZBPCIUITQCFNERVBPGWHSJWOTTQDHLIDKFXJU");
    msg.sys_type = 130U;
    msg.owner = 26191U;
    msg.lat = 0.9637619525694886;
    msg.lon = 0.9734361771314121;
    msg.height = 0.7562654285765582;
    msg.services.assign("RIKHKODXIDDCQODIJUDZHOIXAJKWCGGGXTEPGNRVYCXVBOXNZFAZYNYVHDWMBSJIQHUKKRICFOIRAEUNMXVJGZMLPWYSMWCSLUZEAHBXAXFJNQVZPIWVWEVKLPBBOSMFQLYERTYATUBPCRVDBYTCBGLWNRSOWXOKSNMANTFMCJFHQUBYGCEUPZRXKDDQPSQFQKZMOTMEGGEQUTYOLFTLLMYLW");

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
    msg.setTimeStamp(0.2370759405892331);
    msg.setSource(57340U);
    msg.setSourceEntity(41U);
    msg.setDestination(3726U);
    msg.setDestinationEntity(89U);
    msg.service.assign("JQQCOZHFIBLEXXCPYBUIQKXMSRAGKQKSZULDGRYRJWIFSCHYSFMVIATDZ");
    msg.service_type = 95U;

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
    msg.setTimeStamp(0.9199168257975615);
    msg.setSource(52038U);
    msg.setSourceEntity(76U);
    msg.setDestination(50330U);
    msg.setDestinationEntity(8U);
    msg.service.assign("ZFZXDCNFQSTARHPIDQCRQHSGISUUPAJABHUNSZXTJVEUSDBXIYVPJQRLJRGWGLDTWEOBRRXZBUNCZBPEHNVXAYETTNCLUAJYSKDITALOXDQAKOKLYYNNGNYEGIWCWKSMYLVJLYBRWWOMMPGCPOGIMVTMJAZKSWLWPWKAFXIOMKXCEFDGETKMBAIZOUVDKMGHCCSPLJPDHNHWER");
    msg.service_type = 245U;

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
    msg.setTimeStamp(0.07183889620268613);
    msg.setSource(43314U);
    msg.setSourceEntity(210U);
    msg.setDestination(44630U);
    msg.setDestinationEntity(229U);
    msg.service.assign("INJWALQXOFZPHZUWTPRYUAWKPMXLXLOSPNEDFHAO");
    msg.service_type = 89U;

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
    msg.setTimeStamp(0.24712315348487146);
    msg.setSource(62095U);
    msg.setSourceEntity(209U);
    msg.setDestination(29800U);
    msg.setDestinationEntity(107U);
    msg.value = 0.3723835169980041;

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
    msg.setTimeStamp(0.16698123871970194);
    msg.setSource(45428U);
    msg.setSourceEntity(149U);
    msg.setDestination(45779U);
    msg.setDestinationEntity(147U);
    msg.value = 0.026998890232025397;

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
    msg.setTimeStamp(0.3788511017960817);
    msg.setSource(30715U);
    msg.setSourceEntity(92U);
    msg.setDestination(59706U);
    msg.setDestinationEntity(210U);
    msg.value = 0.8477761042037703;

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
    msg.setTimeStamp(0.9372268444639629);
    msg.setSource(38104U);
    msg.setSourceEntity(43U);
    msg.setDestination(14583U);
    msg.setDestinationEntity(48U);
    msg.value = 0.07500101928717329;

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
    msg.setTimeStamp(0.2743089953955933);
    msg.setSource(63358U);
    msg.setSourceEntity(58U);
    msg.setDestination(48577U);
    msg.setDestinationEntity(44U);
    msg.value = 0.11920403061454732;

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
    msg.setTimeStamp(0.6159885572366485);
    msg.setSource(4128U);
    msg.setSourceEntity(52U);
    msg.setDestination(9135U);
    msg.setDestinationEntity(117U);
    msg.value = 0.41592988684193544;

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
    msg.setTimeStamp(0.2146723988060838);
    msg.setSource(44951U);
    msg.setSourceEntity(100U);
    msg.setDestination(6537U);
    msg.setDestinationEntity(4U);
    msg.value = 0.025483520301515905;

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
    msg.setTimeStamp(0.5424237065768766);
    msg.setSource(21011U);
    msg.setSourceEntity(206U);
    msg.setDestination(57848U);
    msg.setDestinationEntity(246U);
    msg.value = 0.24257838760365058;

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
    msg.setTimeStamp(0.45865210598707007);
    msg.setSource(9736U);
    msg.setSourceEntity(157U);
    msg.setDestination(31489U);
    msg.setDestinationEntity(89U);
    msg.value = 0.2204240827468532;

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
    msg.setTimeStamp(0.6024487137885156);
    msg.setSource(44732U);
    msg.setSourceEntity(225U);
    msg.setDestination(3514U);
    msg.setDestinationEntity(181U);
    msg.number.assign("ZFSNMIZCNGKZZOLRRUAFEEQLESIALDOYXVPPTTOKMZYDRISKGHQMJMDAULFFJWXHI");
    msg.timeout = 49119U;
    msg.contents.assign("MPIIDWQBWBWJOVCARKOQTDQFXUXSHNUQBKZQTLDINJRJJTGIPHMEWGIZQRMHXECSGTGXYYOEHOJBZSNDDVWYGCKDRXDXVKBKLPKEEZPVWVSNOSAEAFUHCMAEHAIYZARCCMLVKXBLLPJGBOFRWSPFBDUVGFFFCHVUPHUQOTKRTCVAWNBTXFSDSWGRJJWZYDAMS");

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
    msg.setTimeStamp(0.5171994356383249);
    msg.setSource(45429U);
    msg.setSourceEntity(173U);
    msg.setDestination(16722U);
    msg.setDestinationEntity(213U);
    msg.number.assign("ASKOEXXIVEYYMUTKQXHAMSCTZA");
    msg.timeout = 572U;
    msg.contents.assign("DEINCUBYWWVEXNIVLDZPMQZAOJHGQGTWBMFXWHRPKUNKNTURBABLXFQUEVCLUDEYPIVHKWCWCMBMLNGSRZAVRJQDYHRAMZKTGEKSGXCHTSJHWXHCHTGIFOASFAUAINLYYLGAIGKO");

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
    msg.setTimeStamp(0.104522816518403);
    msg.setSource(27588U);
    msg.setSourceEntity(9U);
    msg.setDestination(52241U);
    msg.setDestinationEntity(62U);
    msg.number.assign("MAFFVCKWSJSBABZCHABFPSWHAWWKIETLJSNNFKDKVSYAIOPXDPCDSVJNDXNLRLVYPOYWREWGUGZXUTGJEQQMRBRTJAUKMLVGQWETYZFCBYGQUJPHAFU");
    msg.timeout = 4115U;
    msg.contents.assign("RGICDJTKZROJJYFNBAMTPNSJBCUKSQCILBXKFPAZBPIZVKJPJQVFAYPALBRTRTMNXHXGPMSDSCK");

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
    msg.setTimeStamp(0.3069741957903127);
    msg.setSource(2203U);
    msg.setSourceEntity(147U);
    msg.setDestination(15949U);
    msg.setDestinationEntity(23U);
    msg.seq = 972806324U;
    msg.destination.assign("EFUCPLBGZQXGFGNLATMIQDHLYREEEKSZCSNQIQKJUQUHBRZDKJGNIDW");
    msg.timeout = 47897U;
    const char tmp_msg_0[] = {-22, 61, 124, -34, 84, 15, 65, 7, 43, -66, 98, 57, -28, -86, -104, -74, 88, 65, 83, -4, 22, -47, 68, 34, -101, 47, -121, 68, -80, -85, 122, 79, 119, -26, -117, -13, 1, -16, -65, 8, 104, -128, 72, -66, 70, 38, 101, -58, -14, -85, -41, 38, -65, 124, -54, -93, 38, 63, -43, -61, 64, -89, 4, 100, -97, 96, -52, -49, 107, -127, -82, 121, -51, -3, 10, 48, 28, 120, -110, 91, -41, -32, 119, 117, -90, -125, 21, -112, 63, 99, -91, -85, -12, 30, -127, -79, 27, 81, -54, -49, -124, -126, -79, 114, -39, 43, 73, -77, -113, -93, -102, -117, 126, 96, 87, 58, 93, -32, 40, 21, -39, 49, 29, -113, 50, 98, 9, -28, 51, 13, 1, 98, 99, 20, 123, 116, -33, -50, 45, -9, 77, -72, 20, 31, 69, -81, 29, -42, 33, -45, 125, -7, 108, 101, -2, -3, 2, -80, -75, 30, 31, -51, 81, -113, -95, 99, 122, 14, -72, 61, -116, 111, -120, 19, 102, 10, -8};
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
    msg.setTimeStamp(0.7240840415060374);
    msg.setSource(47097U);
    msg.setSourceEntity(167U);
    msg.setDestination(43290U);
    msg.setDestinationEntity(243U);
    msg.seq = 2757263165U;
    msg.destination.assign("UQKTSNILVAUJLXRPCWTEPAWDHCILFCWBZIWPRKAJQVYVMMAZYJSNLMEJMXZBOMHGKCSBHZUWYWJSHLQNUUCPTGGJCVVXXYZQQXNKDVIKMM");
    msg.timeout = 35405U;
    const char tmp_msg_0[] = {-57, 112, 49, 114, 62, -97, 104, 103, -15, -43, 6, 100, -111, 102, 1, -52, -107, -57, 111, -60, 50, 34, 47, -112, -104, 33, -87, -49, 82, 56, 6, 84, 118, 115, 86, 88, -117, -123, -20, 64, 125, 41, -8, 113, -42, 107, 57, -58, 14, -50, -123, 99, -35, -77, 97, -53, -44, -53, -7, -98, -17, -95, 50, 92, -13, 17, -39, 37, -110, 16, 122, 96, -69, -90, -36, -72, -23, -84, -39, 6, 72, -77, -43, 43, 80, 30, -68, -85, -67, -42, -9, -122, -41, -127, 13, 107, -32, -21, 22, -89, 97, 51, -88, -128, -127, 61, 11, -114, 109, -42, -98, 84, -111, 122, -30, 121, 53, -99, 80, 28, 125, -91, 124, 115, -37, 104, 110, 49, 4, 52, -18, 92, -60, 69, -35, 76, -15, -84, 68, 59, -2, 81, -53, -8, -4, -84, -76, -68, -61, 36, 102, 12, -73, -14, 93, -40, 17, 66, 30, -46, 126, 106, 107, 121, -39, 24, -115, 34, -120, -52, -46, 99};
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
    msg.setTimeStamp(0.8692123127582526);
    msg.setSource(58845U);
    msg.setSourceEntity(232U);
    msg.setDestination(12732U);
    msg.setDestinationEntity(181U);
    msg.seq = 3932501316U;
    msg.destination.assign("PZLIFBDWEYVYDTSWGOFERNBJZDAJONZRBWSSDNAYPNINVQEFDQPPPSBRLJAJQGEFKGOZOHCFOZFOGWTYJMJXLVHLZEDMQIYTIRJCVCQMUYVTJQVSGBWJY");
    msg.timeout = 62822U;
    const char tmp_msg_0[] = {71, 74, -105, 96, 24, 112, -37, -15, 60, -63, 7, -43, -124, 24, 122, -110, 123, 64, 54, -27, 68, -62, -105, 9, -20, -112, 91, 33, 40, -47, -21, 69, 11, 84, 18, 3, -108, 45, -111, 81, -113, 108, 44, -118, 4, 0, -13, 104, 87, -18, -106, 121, 89, -128, 112, 119, 87, 111, 90, 107, 118, 87, -37, -92, -32, -63, -3, 27, -54, 102, -16, -40, -11, -103, -60, 67, 19, 113, -107, -87, 99, 78, -26, 25, -19, 8, 110, -10, 50, 57, -46, -62, -21, 23, -23, -38, -17, 120, -124, -80, 84, 100, -51, -53, -73, 70, -98, 38, 84, 91, -63, 48, 56, 15, -53, -47, -89, 112, -18, -118, 79, -85, 57, -90, -35, 83, 119, -39, 9, -105, 62, -79, 126, 58, 111, -60, -119, 33, 21, 46, 24};
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
    msg.setTimeStamp(0.03695036734737711);
    msg.setSource(46516U);
    msg.setSourceEntity(219U);
    msg.setDestination(8617U);
    msg.setDestinationEntity(50U);
    msg.source.assign("FNDTHJVRUEOEWZNJRECPGVCQWPEQBMCESX");
    const char tmp_msg_0[] = {46, -17, -26, 99, -89, -128, 123, -113, -125, 18, 89, -114, -10, -25, 22, -58, 35, 120, -8, 119, 10, -9, -91, -68, 16, 111, -68, -57, -85, -34, 107, 125, -59, 5, 0, -60, -26, 53, 27, -30, -21, -7, 98, -66, 30, -64, 70, -88, 108, -54, -64, -27, -127, -59, 54, 40, -35, 1, -65, -31, 58, -64, 10, -49, 66, -104, 33, -102, -113, -76, 36, -25, 16, -15, 66, 93, -4, -21, -74, -78, -120, 67, -25, -82, -14, 47, 32, -8, -78, -104, 89, 16, -127};
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
    msg.setTimeStamp(0.013021195839811761);
    msg.setSource(24034U);
    msg.setSourceEntity(201U);
    msg.setDestination(2860U);
    msg.setDestinationEntity(90U);
    msg.source.assign("FDEYOCNFCETKPRXNWTJLAFUPPYANKOZYKWWFKGLXWISEHKVBYVQZZSISTBGXZHLNJUVABRXGJXSDTGRK");
    const char tmp_msg_0[] = {-67, -25, 76, 108, -6, -36, -18, -80, 67, 48, -99, -120, 14, -79, 79, 114, -118, -6, 122, -37, -74, -127, 86, -112, 45, 63, 27, 90, -64, 118, 29, 98, 2, 20, -122, -106, -22, 108, 74, -18, 52, 58, -11, 26, -1, 63, 75, -55, -14, -71, -120, -69, 40, -37, 95, 91, -117, 1, 117, -3, 41, -23, 67, 78};
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
    msg.setTimeStamp(0.6702659100710687);
    msg.setSource(11588U);
    msg.setSourceEntity(20U);
    msg.setDestination(29831U);
    msg.setDestinationEntity(247U);
    msg.source.assign("NLVMHSSMLNTYJEORWJVGHAJDFPINCDYPZTLLWOUCLMXAVGKZXIOFTUXCIVAUIEPZRWOQNUGXBTEGAKVCVZBITGPPUFFRRRNCYMOYITQEQWJGQKCBEQMIQASFFDNFTDZTANEWQQBEYHDWMYBFPVYYKSDGLWKSDNSZA");
    const char tmp_msg_0[] = {-43, -50, 86, -7, 106, -28, 51, -32, 11, -12, 119, -12, -128, 67, -51, 98, -128, 70, -69, 104, -19, -25, -54, -100, -46, -31, -116, -17, 30, 83, 28, -84, 118, 49, -116, -52, 101, 85, -1, -94, -82, 43, 21, -85, -47, -19, -31, 99, 121, 47, -127, 40, 9, 42, -84, 86, 57, 7, -48, 44, 120, 93, -2, 125, -27, -7, -34, -78, 96, 46, 5, -20, 60, 93, 27, -42, -6, -120, -77, 27, -22, -6, 58, -125, -42, 31, -5, 80, -60, -63, 40, -71, -117, -45, 44, 34, 80, 116, -97, 31, -107, 79, -15, -38, 115, -32, 19, 28, -122, -3, -87, 46, 119, 47, 4, -22, 103, -107, -73, 100, -121, -50, 60, 29, -64, -63, -119, 61, 15, 9, -73, 56, 75, -60, 49, 43, -75, 12, 19, -65, -96, -32, 21, -18, -56, -13, -76, 60, 85, 116, 100, 95, -42};
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
    msg.setTimeStamp(0.8193148780457987);
    msg.setSource(61728U);
    msg.setSourceEntity(244U);
    msg.setDestination(3023U);
    msg.setDestinationEntity(49U);
    msg.seq = 3623386742U;
    msg.state = 176U;
    msg.error.assign("UFGUEIJAXZDSWRCEFMBNCSEXMEXXBTAJCCFDTEVJQKARBWUZPDESYTUMGZMKQHVDHMQUKDKJZWIJNAXMWRTHXWTNNQGPGZCGHAWUIOLBQNUVULRSJUANVANCJSBUFYISPERIFBVOMQONVWVSNWFOSEPOLQ");

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
    msg.setTimeStamp(0.14414727358401558);
    msg.setSource(50596U);
    msg.setSourceEntity(92U);
    msg.setDestination(3516U);
    msg.setDestinationEntity(149U);
    msg.seq = 4073783741U;
    msg.state = 38U;
    msg.error.assign("BFLFGGSHVKWUREFF");

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
    msg.setTimeStamp(0.10105235155167236);
    msg.setSource(4247U);
    msg.setSourceEntity(241U);
    msg.setDestination(6856U);
    msg.setDestinationEntity(48U);
    msg.seq = 3036481446U;
    msg.state = 63U;
    msg.error.assign("LJMEOMPPMFTQTCJKSXLKTHXBRSLAZRCBGUOWKJDB");

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
    msg.setTimeStamp(0.25806768242146805);
    msg.setSource(34333U);
    msg.setSourceEntity(182U);
    msg.setDestination(43802U);
    msg.setDestinationEntity(193U);
    msg.origin.assign("HQLVWNITILFCGEAOFJLQJGJKIZIHEUFWSZCRBEZAJWXY");
    msg.text.assign("UYOTYKYJIBQGWBFROCWFJHZDUFLXMUCSUHTNHMCKYWGGWJO");

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
    msg.setTimeStamp(0.9214537148775296);
    msg.setSource(17712U);
    msg.setSourceEntity(239U);
    msg.setDestination(59036U);
    msg.setDestinationEntity(115U);
    msg.origin.assign("UWUGSPZUIFIN");
    msg.text.assign("ZVHDBVWQFMFWGTZZPOJDYYNHKUIBATCBBWGMHPOEJSBHRQLSXAVIKNSILGIJMUHGRAKZZDEXMUKYJSEKUVSROQMWHTPOLEQYNGNENSFFVRRWLQKFIPYGMSASTIJYJTNDYDAWLALFEWXELRNTJRDMBTCBQEFJCR");

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
    msg.setTimeStamp(0.6976769527184107);
    msg.setSource(35082U);
    msg.setSourceEntity(219U);
    msg.setDestination(53019U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("NLGWTERKDWKZQMOJKSYUBDLNNCMYHRMBQHNSFHSHYWLMJOENIFVZPAVOCBABEDGTPIFZUCMFWGFZUATCEXTIFDPAELXDRJJXFXJOUVZBGWIVQLAUQLTPGRVCBMULKJIZQJDHTKTUASINZXGQOEKSJXYHORJRBGVYZEBWUOFRTBQKICCWUVPWHYXAJPGZTGSMSDDOOYQARKKCNEPMXYPZTCBRIA");
    msg.text.assign("YCFUYNMUQCBNHUOWCOGMHHKYZUNGIYKGXJLPZOGAYEOPIJQASQNRWFTAV");

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
    msg.setTimeStamp(0.8962565252824922);
    msg.setSource(57142U);
    msg.setSourceEntity(34U);
    msg.setDestination(47170U);
    msg.setDestinationEntity(253U);
    msg.origin.assign("ZDVDRDPSGACXSEMHBUJQUSNCBBVPXBZESXGENFLKIXTHTXTKIOUESJMTWAIHFIDRDWAYWUZYNWFKMINLPWZJDLHEJVCRYJLCZSNYDTSRMCQPFAVBRYJDRKIPULMPYGOOOKVKEXNXXMUWVUTQEONQTVSOGLSAJPZSPLKIUMCHMELMZAGCYCLHGGGHKKFQFZKONRBHIYXPPOW");
    msg.htime = 0.8079992678960174;
    msg.lat = 0.899835669132872;
    msg.lon = 0.7362979507626157;
    const char tmp_msg_0[] = {121, 12, 50, -36, -123, 17, 119, -59, -16, -32, -69, 71, 93, -126, -123, -100, 114, 25, 29, -75, 76, -37, -15, 16, -24, -93, 107, -26, 90, 63, -17, 109, -40, -114, -35, 31, -100, 55, 68, 58, -26, 6, 89, 9, -81, 27, 116, 23, -122, -116, 13, 114, 14, -63, 82, 42, 76, 86, 70, -18, 76, -81, 124, -83, -65, 3, -121, -74, 82, 3, -23, -117, 96, -123, 35, 105, -80, -80, 57, -96, -52, -35, 101, -17, -119, -58, 84, 103, -1, -53, -2, -31, -2, -101, -46, -98, -2, -117, -127, 32, -118, -106, -128, -98, -76, 68, -45, 103, 0, 9, 6, 86, -43, -91, 87, -28, -67, -117, 19, 60, 100, 54, -128, 32, 63, -57, 2, -79, -60, 1, -64, 56};
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
    msg.setTimeStamp(0.25224846190003236);
    msg.setSource(31502U);
    msg.setSourceEntity(7U);
    msg.setDestination(61187U);
    msg.setDestinationEntity(29U);
    msg.origin.assign("ZUDJLAKYFPIJJIMDUSCSKJKFTENJDYSHJSQPBTDTRVABUHRSIUDWIXCOOGWHRPXVIPDMIUUGCWMVHRKLWKDSBSSFZYVXRJTHDZWGLHMYQNWUZEAJEZQXTNDBXLYCNIYRYUKQZCLGXZFGWKTQIOIGAVFYHLMRXCNVDZTWAQRAEIQNEBNCWOOQBCCLKAMGXMGCKWONRYFELTFYONFKAOHZ");
    msg.htime = 0.2554134443341789;
    msg.lat = 0.22554971225430298;
    msg.lon = 0.8294878476280139;
    const char tmp_msg_0[] = {82, -31, 102, 90, -23, -48, 71, 84, -115, -104, 117, 123, 100, 119, -77, 55, -48, -50, -86, 104, -64, -73, 44, 30, -43, 18, 79, 7, 0, -47, -52, -78, 77, 9, 20, 97, 125, -3, 35, -76, 110, -72, 53, 19, -54, -71, -78, -68, 52, -48, 105, -75, -97, 27, 1, 35, 2, -11, 57, -42, -14, -102, 64, 119, 6, 119, -43, 82, 126, 34, -1, 29, -64, 62, 77, 49, -77, 60, 36, -44, -95, 4, 59, 56, 92, -93, -52, -8, 53, 121, -53, 42, -122, -24, -38, 22, 62, 83, -8, 73, 62, 75, 4, -11, -113, -68, 47, 21, -127, 112, -85, -79, 16, -89, 1, 87, -38, 72, -64, 87, 10, 16, 73, -67, -6, 65, -68, -40, 125, -12, -54, 23, -1, 47, -97, 9, -109, 104, -82, 62, 71, 28, 12, 109, 9, 2, 11, 65, 85, -33, 59, 91, -9, 87, 101, 97, 14, -26, 96, 106, -60, -100, -87, -97, 90, -54, 81, 2, 120, 120, -106, 120, -63, -119, 7, -123, 116, 104, 59, 35, -62, -68, -99, -114, -114, 68, 93, -41, -55, 20, 55, -103, 61, 102, -76, -97, 16, 99, -41, -123, -109, 49};
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
    msg.setTimeStamp(0.8685497475769874);
    msg.setSource(52688U);
    msg.setSourceEntity(74U);
    msg.setDestination(32935U);
    msg.setDestinationEntity(46U);
    msg.origin.assign("SRDUYOQZCOXLPCVEPMPTNOWVDZMKWJJIVXWQKYYFPJVVMXOASPFNTJWIXBMMJCHLIKXIGDHEOLACLNQIXMBJDKNFLXTTMMNAGQNUZUSQEEHARBCH");
    msg.htime = 0.3312096639369325;
    msg.lat = 0.6604994171115803;
    msg.lon = 0.3372211644274352;
    const char tmp_msg_0[] = {-89, -110, 44, -86, -93, 47, -99, -14, -23, 38, -1, -23, -78, -87, -63, 79, -123, -38, -68, 57, -103, -74, 23, 19, -103, 5, -84, 68, 52, 95, -43, 101, 49, -53, 82, -40, -39, 87, -32, 23, -22, -115, 20, -100, -73, 19, -38, -89, -11, -95, -120, 46, -96, 98, -104, -85, 69, 111, -12, 57, 9, -30, -127, 84, 92, -54, 1, 66, -84, 96, 65, -41, 125, -110, 80, -91, -59, 44, 121, -93, -38, 118, -27, 51};
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
    msg.setTimeStamp(0.38257207736250365);
    msg.setSource(55967U);
    msg.setSourceEntity(118U);
    msg.setDestination(45868U);
    msg.setDestinationEntity(191U);
    msg.req_id = 2869U;
    msg.ttl = 45437U;
    msg.destination.assign("QTMKSTTHBYEVKRBGETWTWEEZLVIESVXJCXZFRBWYQZFGCLGCVIXQSYMTKKQIFDIKDULTFGSMGYHVCLOHYJRDPNPIMCLPFFDQAKUVUNKCMMHXXOSPYPGXJQTBQN");
    const char tmp_msg_0[] = {-127, -85, 58, 60, -11, -127, 84, -99, -23, -69, 2, 72, 53, -86, 33, -6, 7, 116, -43, -99, -102, 18, 101, -92, -34, 92, 97, -60, 122, 20, 3, 20, 29, 116, -80, 0, 82, -46, 1, -94, -114, -20, 89, -119, 18, 81, -127, 2, 78, 108, -104, -3, -86, -39, -82, 53, 28, 40, 79, -8, 105, -80, 37, 15, -111, 26, 96, 18, -67, -122, -37, -125, -105, -43, 112, -7, -90, 49, 8, -123, -58, -7, -36, -64, -63, -84, -60, 86, -59, 25, 40, -122, -34, 28, -76, -107, -71, -127, 30, -70, 30, 2, -53, 29, -123, 104, 81, 63, -105};
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
    msg.setTimeStamp(0.07287464716326952);
    msg.setSource(32278U);
    msg.setSourceEntity(251U);
    msg.setDestination(27552U);
    msg.setDestinationEntity(186U);
    msg.req_id = 4770U;
    msg.ttl = 37001U;
    msg.destination.assign("HFEAAMWDAEBCEPKHGCWSFHDERNXVFBIRXAFHRJJGSWBILBJPLWVEMTCSQOPHHL");
    const char tmp_msg_0[] = {-54, -24, -22, 92, -63, -53, -26, 17, -60, -110, -120, 46, 122, -60, -23, -73};
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
    msg.setTimeStamp(0.3574306869305023);
    msg.setSource(16277U);
    msg.setSourceEntity(150U);
    msg.setDestination(15891U);
    msg.setDestinationEntity(190U);
    msg.req_id = 53080U;
    msg.ttl = 58036U;
    msg.destination.assign("IJHSANUVNGZRIFKOTZBBWELPPDRGZIDDWI");
    const char tmp_msg_0[] = {-45, -43, 76, -117, 43, -109, -69, 119, 9, -20, 111, -90, -68, -44, 17, -35, 70, -77, -57, 57, -5, -17, 14};
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
    msg.setTimeStamp(0.31250013593372694);
    msg.setSource(48942U);
    msg.setSourceEntity(143U);
    msg.setDestination(46305U);
    msg.setDestinationEntity(132U);
    msg.req_id = 18928U;
    msg.status = 175U;
    msg.text.assign("RNWSHTGOPMZIBSPDVPGFPRZMCLEYZKDDMMXJPYAHDXEFYRTZQBIYFAZWLOUIVCJDUNGADWQCSEXJFQKSCLFYONJZMHOMPWGXKTRMTVFCGCVSNETVWRJWMFD");

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
    msg.setTimeStamp(0.5901658138788702);
    msg.setSource(13240U);
    msg.setSourceEntity(113U);
    msg.setDestination(41530U);
    msg.setDestinationEntity(222U);
    msg.req_id = 45225U;
    msg.status = 161U;
    msg.text.assign("OAGZFGJWJKKUROQMTHJBDGHRLXTOSCHNVBAEXVWCLJHVMGRYYPCLQRDYTJIDNBGKVXKKKITKPHKLWOCAZXWSOVEXFUUIZASNWFIGQYGJUJYUZWNSMIDYQPVOFEAGXRLNANEAJJXLMURJSKIRBQCCLNVSMBFDSPNWDTGFBIGEKWLYQUISHYXBYTIDDVLUPTXTMENTAQTPFMEZAZWFCOPZOQCOEPLMVZIVMYBUHSDRNQEWDHRQHESFBZ");

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
    msg.setTimeStamp(0.34438038941812465);
    msg.setSource(46703U);
    msg.setSourceEntity(200U);
    msg.setDestination(42436U);
    msg.setDestinationEntity(213U);
    msg.req_id = 21112U;
    msg.status = 180U;
    msg.text.assign("LCKBEJQZYKSMBSCRAWXXMTCWAJAESXWVMGTIWVUOWRXDPOFOSCEIPPOLPDVJSLQVESZDQDXTZXKUETOHZQHFLOCUUQFQREYFZACISYOHXJWWRYFAGTNU");

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
    msg.setTimeStamp(0.474615480040981);
    msg.setSource(65100U);
    msg.setSourceEntity(55U);
    msg.setDestination(64852U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("FGZXZUFMIUVWBARQHZYYNCYBEEVPLBJKPGWBTDYZKVRVWILERTLGVXBNLRCJLIYGUPEDZYDMVEFXGDCTJCGVNJHHBGTWXYHEGBORXIAQMXAKUOAKSQMJJFXOSFQKZUZOUHNPATMDCFHWFRNJRAPCKZIUWDNZSJEASPPEPBFWPJIDAIONABWSUCWMVJDHADKSFNQNRHDOYXTEBTPQZTKSIFQMUYLLGCHTMOORTRVNOXGCQWXIOHQVECSYIQL");
    msg.links = 3465220595U;

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
    msg.setTimeStamp(0.42050341056116414);
    msg.setSource(27310U);
    msg.setSourceEntity(72U);
    msg.setDestination(60931U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("OMGBTVOZPUQETGYZZTKFCGPCSMDYTWPZENWEYCGTGFUNYCLJRFWXUILSLXYFUTJWMNPXFPQHNYJDNISDWCLBUXKDDTIAHQQSGBEVUDSXTKQHHMRNDSVAWTANKOSBKAXYGXGIACOLMOMAFBAJTJBAKUYGHEEDHPWZQDIRJELBWBOPYOZVENGDMFJXKCVM");
    msg.links = 2118376033U;

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
    msg.setTimeStamp(0.7801025068483445);
    msg.setSource(58316U);
    msg.setSourceEntity(130U);
    msg.setDestination(7902U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("UIHWPWVFZQPUHMRMISRSLOOYGIVOAOFQZRCTRVORGCDVLOKSGAJVRLEKNJMYGTQXIEFXTFLFJXCBDLYSXWIEAMWCSICGAXNBATHCSJPBADTKVJASIKJTHXQOPFMTVLAXOYWYBZZGQGSWZKDPOVNGSPNJFEBJOAHHIXQZCRNUMHGGFBYRFXPJWPUKCNLWADHTBZHTMXZJVRKFQCQQUYDDCLMYUURNLNKIDUZSDWNHZQYMVNUEEWD");
    msg.links = 1765007049U;

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
    msg.setTimeStamp(0.9026545445829441);
    msg.setSource(57446U);
    msg.setSourceEntity(15U);
    msg.setDestination(29429U);
    msg.setDestinationEntity(155U);
    msg.groupname.assign("AEUCAVYBFCBBKJKGEUKPGLUNDDOTZZUIQMQWPPYYKJLEQKPLKTLNVWRUXZOVDECAWAAIVZMQCHVOJCJKYXENHMXIFAMWWHJGFEZJBHVXICAFJKBRDOSGDGMZSYRYINONDNRQQMMOEDHMNYZZOWZBXCWFBYMBHTLAJTRGPTUOBZEVRXSCOSAMLVSIWOSQTQPUIEBCWLRGSUFFSGHTJULVPGWJFTXDVNGE");
    msg.action = 208U;
    msg.grouplist.assign("TZXLQXTLKOEFAVZRNSSYK");

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
    msg.setTimeStamp(0.8640137327980284);
    msg.setSource(54766U);
    msg.setSourceEntity(34U);
    msg.setDestination(65192U);
    msg.setDestinationEntity(224U);
    msg.groupname.assign("KCGNRUZUMIEGCHVBYFUKJNXJVFPWMZTPXXDWGFJGUWVALKPLZZMPMLHBQDNZRCVGXWHETRFSTOMYEKVBGTOJJDLUISAWOOROKYSYONVALZJQVOIPNFBFDGUUQMNPHBNLDAHQXHQZCVHALMZHXQAQCBIBGMNUASDIYHXKABYJIEEATAHO");
    msg.action = 90U;
    msg.grouplist.assign("ECHOWYHBWJQVSTXVYJXSUMTLXELZNDWHQDAZFJOSCDFVYRIUJQDAITNUKULVD");

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
    msg.setTimeStamp(0.762474785362773);
    msg.setSource(47344U);
    msg.setSourceEntity(173U);
    msg.setDestination(49780U);
    msg.setDestinationEntity(179U);
    msg.groupname.assign("HQGDZOTQNIGIKFUIJWRBSFHALZDEDVTTUKKWUSFAHRYEC");
    msg.action = 19U;
    msg.grouplist.assign("HCILZECPIVITJCGJFNLQYPBYUOLGQXOQJNKYVOKQHARAACHGMNQNIMWLGPKKFEXTAGHQDPRUHBUFGDESESZXBELONFRXDDZRMHWJMTPAMBNIIOAFCTSDSXGKZOBHBFZIUGHQSSZUKMSOZZMNTCLVGVZYVRDEPOOJSYGUTTPPDWECJIKWDQKFRCUV");

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
    msg.setTimeStamp(0.05694971943745497);
    msg.setSource(25741U);
    msg.setSourceEntity(70U);
    msg.setDestination(50198U);
    msg.setDestinationEntity(95U);
    msg.value = 0.3881675912464452;
    msg.sys_src = 54474U;

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
    msg.setTimeStamp(0.8908679050326906);
    msg.setSource(26117U);
    msg.setSourceEntity(90U);
    msg.setDestination(1393U);
    msg.setDestinationEntity(118U);
    msg.value = 0.24892646005267127;
    msg.sys_src = 18720U;

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
    msg.setTimeStamp(0.8116631949758436);
    msg.setSource(47759U);
    msg.setSourceEntity(211U);
    msg.setDestination(10961U);
    msg.setDestinationEntity(163U);
    msg.value = 0.8760164748332878;
    msg.sys_src = 56476U;

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
    msg.setTimeStamp(0.2636831680316958);
    msg.setSource(80U);
    msg.setSourceEntity(50U);
    msg.setDestination(20061U);
    msg.setDestinationEntity(222U);
    msg.value = 0.835731144646087;
    msg.units = 134U;

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
    msg.setTimeStamp(0.33689916215909577);
    msg.setSource(32936U);
    msg.setSourceEntity(89U);
    msg.setDestination(46978U);
    msg.setDestinationEntity(252U);
    msg.value = 0.03768132453990736;
    msg.units = 159U;

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
    msg.setTimeStamp(0.7221033187409339);
    msg.setSource(4928U);
    msg.setSourceEntity(95U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(183U);
    msg.value = 0.0031246387925912833;
    msg.units = 32U;

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
    msg.setTimeStamp(0.21579882259851135);
    msg.setSource(49487U);
    msg.setSourceEntity(133U);
    msg.setDestination(22519U);
    msg.setDestinationEntity(88U);
    msg.base_lat = 0.7325087899927434;
    msg.base_lon = 0.13733733333611386;
    msg.base_time = 0.014805739968955067;

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
    msg.setTimeStamp(0.2567735413589505);
    msg.setSource(60570U);
    msg.setSourceEntity(73U);
    msg.setDestination(6221U);
    msg.setDestinationEntity(61U);
    msg.base_lat = 0.20908396654360317;
    msg.base_lon = 0.07490124747611426;
    msg.base_time = 0.13412348406046248;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 14781U;
    tmp_msg_0.priority = 31;
    tmp_msg_0.x = 7311;
    tmp_msg_0.y = -4177;
    tmp_msg_0.z = -3297;
    tmp_msg_0.t = -18348;
    IMC::CameraZoom tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 146U;
    tmp_tmp_msg_0_0.zoom = 229U;
    tmp_tmp_msg_0_0.action = 38U;
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
    msg.setTimeStamp(0.44800068501963053);
    msg.setSource(45863U);
    msg.setSourceEntity(37U);
    msg.setDestination(5689U);
    msg.setDestinationEntity(247U);
    msg.base_lat = 0.58146740105409;
    msg.base_lon = 0.41719168629986114;
    msg.base_time = 0.7500271638089019;

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
    msg.setTimeStamp(0.6846748891685532);
    msg.setSource(33810U);
    msg.setSourceEntity(179U);
    msg.setDestination(1838U);
    msg.setDestinationEntity(248U);
    msg.base_lat = 0.2068198262739125;
    msg.base_lon = 0.9469161127287015;
    msg.base_time = 0.06263142900163199;
    const char tmp_msg_0[] = {-22, 60, 11, 68, 95, -84, 118, 59, 65, -21, 114, -81, 120, 94, -102, 51, 103, 84, 59, 72, 43, -6, -117, -116, 121, -113, -42, 106, -65, -66, -121, 28, -97, 119, 35, 79, -9, -59, -128, -120, 62, -61, -87, 72, 65, 6, 68, 37, -32, 31, -9, 108, 96, 0, 5, -1, 3, -5, 22, -5, 5, -118, -99, -7, 3, 1, -118, -105, -128, 85, -110, -47, 40, 67, 64, -66, -59, -48, -127, -59, 18, -113, -115, -122, -128, 116, -119, -66, -33, 124, 73, -20, 124, -112, 93, 2, 81, -92, 85, 103, 34, -55, -93, -67, 126, 51, 72, -85, -41, -61, -61, -15, 124, -108, 82, -75, 100, -122, 102, -127, -102, 13, 0, 67, -113, 113, 115, 44, -16, -109, -114, 37, 124, -96, -46, -79, -16, -101, -31, 21, -52, 126, -66, 50, -91, -74, -111, -17, 27, -59, -84, 118, 37, -45, 67, -43, 77, -21, -100, -9, -80, -24, -21, -121, 60, 68, -11, 13, -83, -125, 52, -12, 81, 118, -101, 92, 32, 107, -100, 70, -125, -100, -41, 90, -60, 5, 9, -14, 78, 72, -74, 9, -105, 91, 63, 98, -89, -6, -83, -40, -21, -3, 88, 5, 23, 97, -3, -93, 70, -104, -32, 33, -16, -22, 55, -74, -44, -98, -77, 50, -44, 123, 115, 78, -86, 70, 27, 110, 2, 5, 60, -88, 101, -18, 94, 57, -1};
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
    msg.setTimeStamp(0.4676895755408571);
    msg.setSource(26704U);
    msg.setSourceEntity(54U);
    msg.setDestination(9763U);
    msg.setDestinationEntity(198U);
    msg.base_lat = 0.12237123535693628;
    msg.base_lon = 0.4747991971641906;
    msg.base_time = 0.885180917393906;
    const char tmp_msg_0[] = {48, 95, -81, 53, 33, 72, -1, -31, -103, 95, 76, 19, -73, 92, -59, 117, -22, 113, 77, 50, 67, -66, -63, 59, -125, -105, -121, 67, 74, 9, 86, 65, -115, 52, -46, -73, 56, -14, 80, 69, -47, 111, 114, 50, 107, 84, 13, -115, -54, -42, -76, 10, -20, 74, -124, 25, 107, 16, 38, -38, -85, 116, -34, 44, 112, -61, -44, 24, -49, 32, 44, 17, -53, 71, 44, 66, 17, 52, 56, 68, -35, 61, -9, -121, 120, 27, 96, -93, -111, 40, 90, 70, 87, 21, -17, -69, 77, 112, 70, 102, -92, 61, -35, -119, -80, 113, -32, -18, 126, -100, -90, -127, 39, 117, 4, 95, 109, -91, -13, 111, -113, 90, 83, 62, 15};
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
    msg.setTimeStamp(0.2537072303967324);
    msg.setSource(1751U);
    msg.setSourceEntity(107U);
    msg.setDestination(61789U);
    msg.setDestinationEntity(78U);
    msg.base_lat = 0.6384655670700936;
    msg.base_lon = 0.6518946623112647;
    msg.base_time = 0.8952260330272872;
    const char tmp_msg_0[] = {-20, -9, 59, 117, 21, -61, -31, 20, -38, 59, -48, -123, -84, 31, -80, 126, -52, 76, -59, 113, 97, -66, 87, -24, -100, -84, -17, 79, -59, -118, -60, 32, 48, -99, 82, -44, 125, 88, -64, 50, -91, -115, -28, 50, -23, -60, -35, 32, 5, -104, 78, 83, 59, 123, 122, -96, -4, 29, 41, 37, -24, -127, -45, 113, -112, 59, -87, -105, -42, 26, -65, 64, 100, 84, -15, 62, 44, -90, -44, 20, 110, 79, -28, -66, -30, -117, 20, -18, -118, 86, 30, 31, 57, 100, 47, -13, 17, 8, -61, 66, -60, 100, 112, 112, -123, -97, -99, -5, -62, -103, -81, -7, 87, -73, 57, -120, -18, 59, 5, -56, 14, 28, 38, 43, 28, 14, -12, 74, -8, 32, -42, -87, 22, -118, -120, -31, -46, 65, 27, -83, 9};
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
    msg.setTimeStamp(0.2483365453407682);
    msg.setSource(3957U);
    msg.setSourceEntity(4U);
    msg.setDestination(10507U);
    msg.setDestinationEntity(175U);
    msg.sys_id = 31092U;
    msg.priority = 115;
    msg.x = -29721;
    msg.y = 7792;
    msg.z = -20104;
    msg.t = 1287;
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.19272822732254113;
    tmp_msg_0.aoa = 0.01900311854747827;
    tmp_msg_0.ssa = 0.727147304627075;
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
    msg.setTimeStamp(0.5279455503930552);
    msg.setSource(58963U);
    msg.setSourceEntity(17U);
    msg.setDestination(26141U);
    msg.setDestinationEntity(102U);
    msg.sys_id = 14278U;
    msg.priority = -28;
    msg.x = -25972;
    msg.y = 10189;
    msg.z = 10461;
    msg.t = 29697;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 206U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("GWMJQBWZUBTEZSBQSQJPAVELQXNLOINUHFZMSXHAFGVPMJOKGVYEUFXZYHDTKKVVPJSPLXKKCLURULXHOPBRLBELIFUATCKOACRCRRFGDYIRGWZJJAAZKBJHQSOMWSVKXEOJWWLIMOMEYYOETOAQHCNSVYBJOSWDHHWNIRNGIEMYCNDQDMQYCANZVNIDQFEMCIUNDKLFCSETCDYURIMAULVHRRXZTGTJVYPDFGPAFSUDBTNTGPB");
    tmp_tmp_msg_0_0.description.assign("GVYZHQZWBLVCHWMGZJVBKUPJESXLQBYNPOYNAVURWQTRQLZATFSTUDZSJEDUARWCLIJAGTEKFHYAMIBRISHZNPMEFTLOKZMSYFTBTPNCSAXYBCIUNZEXOGNCPHHFUJERVLAKCGVTJQKJJCNFNPRPRXOEIXIWQDXNVTCWZGBIQGYQRGEZGAKJMAVSXLLXBPBDNFMIMPKDWXDBHMRLYVOCSWIHYFKPFWUEOORUKFSUAJSTDD");
    tmp_tmp_msg_0_0.vnamespace.assign("BDKXSUPSXCGQUNIKWVOMYTALOZLWNRVMATWFYGXMUNEIEGQGXEJOPHSZYEUCFCHMWGXCATFDOCVRXIBQN");
    tmp_tmp_msg_0_0.start_man_id.assign("ZPFHAEYWKJOQOCVLMBJOYSTLTAVQZHLAZKPQAYEIXEWAWISKSHHTMMJERUJRBCVAJZURNVSNWQAFSIGEGOCFMPLKWUNLCHRBGOVNJRQZKBRJG");
    IMC::GetOperationalLimits tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.808892862803794;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 196U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
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
    msg.setTimeStamp(0.3136757532929312);
    msg.setSource(56380U);
    msg.setSourceEntity(23U);
    msg.setDestination(55747U);
    msg.setDestinationEntity(174U);
    msg.sys_id = 46861U;
    msg.priority = 7;
    msg.x = -11229;
    msg.y = -13979;
    msg.z = -13008;
    msg.t = 27771;
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 43U;
    tmp_msg_0.numsamples = 124U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 40845U;
    tmp_tmp_msg_0_0.avg = 0.5980570809611022;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.34298613044393855;
    tmp_msg_0.lon = 0.18429922108131613;
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
    msg.setTimeStamp(0.3679678005839818);
    msg.setSource(44727U);
    msg.setSourceEntity(209U);
    msg.setDestination(16708U);
    msg.setDestinationEntity(131U);
    msg.req_id = 3842U;
    msg.type = 62U;
    msg.max_size = 55895U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4380595463911098;
    tmp_msg_0.base_lon = 0.6147672950856454;
    tmp_msg_0.base_time = 0.15547779766093717;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 439U;
    tmp_tmp_msg_0_0.destination = 49677U;
    tmp_tmp_msg_0_0.timeout = 0.3824006016438236;
    IMC::LedBrightness tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("TWMKIYSXXOUUXBNDJHIEFGWLSEGGHSSFJUFVOBPUJQRXDQKUWOAZEUHPKLGFSXEZQYJVVDRWADXTLNCFYVUANDFYNRGMAEWCSLHDUVBLZNIPVWNYYWTNZKGCJQBTHAVBDLHEBRTPGZFTGMIICPKMCAEKSMFJRUCLEQNPAOTIPZLIPQNNQYXIEXOAOYCWDOWMGKJJMRBOUXYROVJAPHQGBKJESOQIXLDFCZMFRAPKBWSVZTMH");
    tmp_tmp_tmp_msg_0_0_0.value = 116U;
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
    msg.setTimeStamp(0.904984803984711);
    msg.setSource(63416U);
    msg.setSourceEntity(81U);
    msg.setDestination(22932U);
    msg.setDestinationEntity(123U);
    msg.req_id = 23022U;
    msg.type = 63U;
    msg.max_size = 17231U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6454887733688316;
    tmp_msg_0.base_lon = 0.9741203529791513;
    tmp_msg_0.base_time = 0.7121759120686325;
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
    msg.setTimeStamp(0.8912375581837706);
    msg.setSource(501U);
    msg.setSourceEntity(57U);
    msg.setDestination(3226U);
    msg.setDestinationEntity(174U);
    msg.req_id = 60814U;
    msg.type = 41U;
    msg.max_size = 14280U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6230859300856219;
    tmp_msg_0.base_lon = 0.8671220883603531;
    tmp_msg_0.base_time = 0.4713475768379004;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 31949U;
    tmp_tmp_msg_0_0.priority = -19;
    tmp_tmp_msg_0_0.x = -14176;
    tmp_tmp_msg_0_0.y = -26505;
    tmp_tmp_msg_0_0.z = 24412;
    tmp_tmp_msg_0_0.t = -8065;
    IMC::NavigationData tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.bias_psi = 0.5613045378699416;
    tmp_tmp_tmp_msg_0_0_0.bias_r = 0.9443942177258426;
    tmp_tmp_tmp_msg_0_0_0.cog = 0.032706301152732986;
    tmp_tmp_tmp_msg_0_0_0.cyaw = 0.9682536043739652;
    tmp_tmp_tmp_msg_0_0_0.lbl_rej_level = 0.43409317447821605;
    tmp_tmp_tmp_msg_0_0_0.gps_rej_level = 0.3743107770602794;
    tmp_tmp_tmp_msg_0_0_0.custom_x = 0.23224574012206556;
    tmp_tmp_tmp_msg_0_0_0.custom_y = 0.1264316598808236;
    tmp_tmp_tmp_msg_0_0_0.custom_z = 0.6327614394977608;
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
    msg.setTimeStamp(0.619074719330847);
    msg.setSource(45430U);
    msg.setSourceEntity(4U);
    msg.setDestination(9462U);
    msg.setDestinationEntity(208U);
    msg.original_source = 20911U;
    msg.destination = 17451U;
    msg.timeout = 0.9928984601288464;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 46U;
    tmp_msg_0.period = 2578417411U;
    tmp_msg_0.duty_cycle = 316375409U;
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
    msg.setTimeStamp(0.6085247868640297);
    msg.setSource(11862U);
    msg.setSourceEntity(2U);
    msg.setDestination(47120U);
    msg.setDestinationEntity(178U);
    msg.original_source = 27382U;
    msg.destination = 63792U;
    msg.timeout = 0.10817576694269493;
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.73459004264168;
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
    msg.setTimeStamp(0.7692429849618481);
    msg.setSource(27643U);
    msg.setSourceEntity(70U);
    msg.setDestination(42726U);
    msg.setDestinationEntity(80U);
    msg.original_source = 60835U;
    msg.destination = 39849U;
    msg.timeout = 0.12290196306297063;
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 49U;
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
    msg.setTimeStamp(0.5217073860584077);
    msg.setSource(60299U);
    msg.setSourceEntity(41U);
    msg.setDestination(48385U);
    msg.setDestinationEntity(231U);
    msg.type = 117U;
    msg.comm_interface = 30694U;
    msg.model = 6821U;
    msg.list.assign("OZSOPCNRCUCMZEAGZNMBZHNDAGIJSRJLOHVOBSSNWVDWNOMLKGALEKCETTODLBPJLJNMJDVFFMEYIDGE");

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
    msg.setTimeStamp(0.4394379747759165);
    msg.setSource(5160U);
    msg.setSourceEntity(182U);
    msg.setDestination(27094U);
    msg.setDestinationEntity(135U);
    msg.type = 239U;
    msg.comm_interface = 50307U;
    msg.model = 23322U;
    msg.list.assign("MYUGDIEANVPENJNGZCSMDRFDDGKXWGUENTZCCQLPWCJPVLEDJJWRSQKXQBXWBILFUATDCWFBHMYKMSSKYFPZBRFFTUSKYEOXVHRZTLRXWGTPXRAYJMKTKXMEITPPMCLIAFIBVQVBMPQBNVHVSEMIZWOMQHRGBEWUHPURJGVNYJQ");

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
    msg.setTimeStamp(0.9867339886449609);
    msg.setSource(23592U);
    msg.setSourceEntity(229U);
    msg.setDestination(35856U);
    msg.setDestinationEntity(237U);
    msg.type = 80U;
    msg.comm_interface = 52630U;
    msg.model = 47782U;
    msg.list.assign("ZVITQYAZZQKURKADPKSDNACIZYCOLOWBYRUPZLERMNEYYTUUHDOOPIWTLRNQQLSZYOCCYCEGLYBBRLXTUCP");

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
    msg.setTimeStamp(0.6198294506342862);
    msg.setSource(5162U);
    msg.setSourceEntity(250U);
    msg.setDestination(48837U);
    msg.setDestinationEntity(213U);
    msg.type = 193U;
    msg.req_id = 239897076U;
    msg.ttl = 50917U;
    msg.code = 125U;
    msg.destination.assign("VKJNRMFPYZBXGQVFUURPAGMPZUQWWDLZTKZUDGETJISOTVEVYEXDQKHIYCLMRMWILCNIYKLAGUGVTDXFSTMHXHSKFIOORIZWNBRWWDVXGBBSLJOYEEMZEFGXEPNHFQIRDBYBCYWTIMKLFWJGQYHALQSTOKKADEZPXISGSNCEPBWAWOMLHZVXQDPNENOASLKRHQADFZVJTVAACRMUUIXCUCQBYQNHMFFHOUPZVDBUOJKXHSCLJNTRA");
    msg.source.assign("BNLUFNODICCACZHOYSGJAHQXE");
    msg.acknowledge = 141U;
    msg.status = 52U;
    const char tmp_msg_0[] = {-3, 122, 19, 119, 24, -19, 30, -68, 57, -85, -22, -92, -115, -61, -45, -52, -110, -73, -69, -123, -58, -68, 62, -26, -85, -113, 101, -89, 91, -3, -35, 22, 92, -113, -6, -13, -74, -86, 63, -3, 112, 42, 21, 7, 125, 124, 79, -67, 106, -91, -114, -33, 102, -15, -36, -20, -27, -15, 67, -60, 71, -97, -122, 38, -88, 60, 84, -88, -12, -36, 77, -21, 27, -27, -105, -120, 78, 84, -40, -83, -114, -43, -4, -73, 3, -27, 84, -125, 93, 99, 75, -108, 53, -42, -118, -99, 110, 113, -123, -44, 72, 69, -22, -50, 65, 103, 5, -8, 71, 19, 83, 109, -100, 123, -104, 88, 13, -54, -16};
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
    msg.setTimeStamp(0.5598767546158409);
    msg.setSource(6237U);
    msg.setSourceEntity(134U);
    msg.setDestination(10977U);
    msg.setDestinationEntity(245U);
    msg.type = 154U;
    msg.req_id = 205595967U;
    msg.ttl = 54196U;
    msg.code = 214U;
    msg.destination.assign("SVHFDSMLTDPIYJXORZLENQAKKEEMIFUFUQHCWCVGFMBRHBMAOJETFDXZRXZVQMGUVJGATPSGHCNILKWRKQHIDTRUGCUEYGRYKTORYLJBUWFSNIGCPWAZBNOXNBDEKNIPWIUDPHPJAPZDOVZNSKVYZBZYTWDYDCWBOYTQBVCXLJBFWXQVUGQADYICFVMTGHSKGFNQLPWZPNMLKJESJUEOEQOTCZPO");
    msg.source.assign("OJYBNXYZGOSKBHYSFUQASZQDJTGYNDPYPAVLRJFPEQGEZLTWGKMFBJMZMYRRMURHXKCDHBJNKET");
    msg.acknowledge = 1U;
    msg.status = 99U;
    const char tmp_msg_0[] = {-54, -86, 88, -79, -119, 53, -55, -60, 102, -117, -94, -6, 19, -9, -71, 31, -4, 25, -64, -21, -67, -95, 65, -72, 63, 66, 68, -89, -90, -55, -10, 37, 17, -6, -98, -65, 70, -42, -65, 18, -67, -93, -114, 95, 76, 109, 61, 40, 25, -44, -1, -17, -125, -36, 19, -98, -63, -19, 18, -104, 29, 13, -66};
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
    msg.setTimeStamp(0.6403820656558277);
    msg.setSource(41245U);
    msg.setSourceEntity(173U);
    msg.setDestination(3824U);
    msg.setDestinationEntity(54U);
    msg.type = 25U;
    msg.req_id = 4242392291U;
    msg.ttl = 24531U;
    msg.code = 100U;
    msg.destination.assign("JTRBJHCPTREPWRKBHFNWWUJEHIJGIYIXICYUKPHZTKXUSLMBVGODLVCGKGKKEGPEZSUWCSRJDXLXZRNICYGMIGLTUBZVOFATENCACUFUDODOUBNNGQMXGNTENFTPBAROHIFHWEVPSYBZFWGXA");
    msg.source.assign("UFEMMJHQYBNIZDLTAKWHPMBXYKGPAWANHQHXJSECCGIKZDZFPAJMVOSGFREUGUUOTEMCWXRAJBNAXBNTSHXTTZARQNRKJVQJCQLAPEZTWKOWXDMRIQIVVGWKWLTLHONZHGDVBVASUIWPLXCRWUUVPOSVISEIDAYBKJBMSQGRGYNV");
    msg.acknowledge = 210U;
    msg.status = 5U;
    const char tmp_msg_0[] = {13, 15, 75, 70, -28, 1, 7, -78, 71, 107, -26, 49, 60, 79, -95, -102, 122, -3, 125, -117, 43, 97, 21, -17, 108, -107, -54, -78, 49, 32, -120, 64, -94, -76, -116, 51, 34, -25, -113, -106, -78, -29, -63, 119, 9, -40, -103, -15, -56, -126, 83, -83, 77, -63, -32, -96, -60, -51, -53, 109, -69, -111, 72, -85, 6, -87, 25, 6, -10, 70, -33, 88, 47, 105, 35, 61, -97, -36, 116, 31, 114, 94, -68, 78, -65, 36, 38, 96, -70, 102, 37, -88, 61, 25, 46, 115, 120, -90, -91, -86, 100, 18, -42, 71, -20, -34, -26, -56, 46, 67};
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
    msg.setTimeStamp(0.9642904231096692);
    msg.setSource(61129U);
    msg.setSourceEntity(77U);
    msg.setDestination(30336U);
    msg.setDestinationEntity(162U);
    msg.id = 229U;
    msg.range = 0.6674260738341631;

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
    msg.setTimeStamp(0.4535126754406317);
    msg.setSource(26334U);
    msg.setSourceEntity(225U);
    msg.setDestination(64989U);
    msg.setDestinationEntity(27U);
    msg.id = 201U;
    msg.range = 0.5349490191628343;

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
    msg.setTimeStamp(0.36218219364825943);
    msg.setSource(19141U);
    msg.setSourceEntity(90U);
    msg.setDestination(23922U);
    msg.setDestinationEntity(24U);
    msg.id = 88U;
    msg.range = 0.8958293997980986;

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
    msg.setTimeStamp(0.12503038150120005);
    msg.setSource(34630U);
    msg.setSourceEntity(251U);
    msg.setDestination(11912U);
    msg.setDestinationEntity(152U);
    msg.beacon.assign("ZMLKSVYYSQDEJBHGHFKLUEQHMTXSNPQBCWKSHXQLXNSWBZCJBMIVYIOGTSMQFFYHAITADICVKPMFCCCYNWIAICJYPEDYURKAQLTGJUSRJNETBTDCUHZOTNOLPTHZEBWBYRNIQOHGXTZGPWKOQUBRFVJAEKFFAOZIPLGQVDRURBOAETNZGXOBWWVCDMUVFXQJILUMMAKYEPKXLYIRDVSGKOSM");
    msg.lat = 0.8812657185377494;
    msg.lon = 0.6993595236628006;
    msg.depth = 0.4023112484899455;
    msg.query_channel = 203U;
    msg.reply_channel = 173U;
    msg.transponder_delay = 187U;

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
    msg.setTimeStamp(0.014509099657841196);
    msg.setSource(31720U);
    msg.setSourceEntity(191U);
    msg.setDestination(33696U);
    msg.setDestinationEntity(145U);
    msg.beacon.assign("CWPDXSQYZNUKLWKXIRBEZEFWVNHKXCQFJUBJMNIYDDYXPFSAQJFGHEHALYIWFVARTBWERDZUOLOIDGNTXATLINMVJJCRGSMDGDBSQFOTSCAWRSOHTZRYUPPYGRLUJNNULHXPUBFKBVXVAQVAUNRJOQSDMHUPDZMZKMHILZPSEHWKCBHWFACSKKOJMLQQOBBVEGJZQRZXXOPDFCWEAIW");
    msg.lat = 0.9140568275082642;
    msg.lon = 0.3097693297729438;
    msg.depth = 0.5195005525292369;
    msg.query_channel = 170U;
    msg.reply_channel = 173U;
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
    msg.setTimeStamp(0.4814807139465289);
    msg.setSource(38564U);
    msg.setSourceEntity(158U);
    msg.setDestination(46192U);
    msg.setDestinationEntity(112U);
    msg.beacon.assign("YABGFFHCYKBUWKDTVRMACJSXVWEEIXOTVJQJNLKYIZTZLZBFEIQNNUJRUTIBNUDWGGWMZLJSSDH");
    msg.lat = 0.980231294736665;
    msg.lon = 0.3706334495797443;
    msg.depth = 0.2422949274263534;
    msg.query_channel = 200U;
    msg.reply_channel = 96U;
    msg.transponder_delay = 182U;

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
    msg.setTimeStamp(0.6343404850561903);
    msg.setSource(8407U);
    msg.setSourceEntity(41U);
    msg.setDestination(1174U);
    msg.setDestinationEntity(158U);
    msg.op = 27U;

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
    msg.setTimeStamp(0.06347850743532868);
    msg.setSource(14446U);
    msg.setSourceEntity(170U);
    msg.setDestination(10859U);
    msg.setDestinationEntity(30U);
    msg.op = 68U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WGLOEHLXMOSBSLCZTKUARTODUTINVLMINJPASTTHASERCTKXPDILZGWYGWGRAJOYOQDZLCSDCUBJMQHLDSZXHOYQJFSXP");
    tmp_msg_0.lat = 0.8152409438087205;
    tmp_msg_0.lon = 0.7486366569991215;
    tmp_msg_0.depth = 0.4530614314097364;
    tmp_msg_0.query_channel = 139U;
    tmp_msg_0.reply_channel = 229U;
    tmp_msg_0.transponder_delay = 227U;
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
    msg.setTimeStamp(0.011313414838342917);
    msg.setSource(48681U);
    msg.setSourceEntity(86U);
    msg.setDestination(56322U);
    msg.setDestinationEntity(54U);
    msg.op = 130U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZRLSEPTPQKSTCYEWCWRJQCWSWIABUILAJDIEULQSDTNAXNMQODYHVZMDGAFTJBVMHFCAZVZCOCGUEBHIDKRCFRFYKGOEJEXMFRJNHLPUXIGSYGZIPDLVWLIZWBIEVGWWRZGCIVOXAKNASWJXNJQRFTDHO");
    tmp_msg_0.lat = 0.9677998624883465;
    tmp_msg_0.lon = 0.431749273197631;
    tmp_msg_0.depth = 0.17465085596413388;
    tmp_msg_0.query_channel = 204U;
    tmp_msg_0.reply_channel = 206U;
    tmp_msg_0.transponder_delay = 103U;
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
    msg.setTimeStamp(0.1101238330321268);
    msg.setSource(49875U);
    msg.setSourceEntity(16U);
    msg.setDestination(39751U);
    msg.setDestinationEntity(87U);
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.01581976981468436;
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
    msg.setTimeStamp(0.2520792503342727);
    msg.setSource(38970U);
    msg.setSourceEntity(110U);
    msg.setDestination(19399U);
    msg.setDestinationEntity(100U);
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 15944U;
    tmp_msg_0.lat = 0.6917759032794112;
    tmp_msg_0.lon = 0.8309576348436138;
    tmp_msg_0.z = 0.5185903118009649;
    tmp_msg_0.z_units = 204U;
    tmp_msg_0.duration = 13573U;
    tmp_msg_0.speed = 0.6229928103209651;
    tmp_msg_0.speed_units = 248U;
    tmp_msg_0.type = 76U;
    tmp_msg_0.radius = 0.47939949575966523;
    tmp_msg_0.length = 0.9202489264823692;
    tmp_msg_0.bearing = 0.6347586586530471;
    tmp_msg_0.direction = 114U;
    tmp_msg_0.custom.assign("MYKERAYVCMYGFTPOJXVUKJZBECNNPKSTZXWLDAUDPPSZNRGSGVUXHAPDFMHDSACLDBWVMQKMPCQX");
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
    msg.setTimeStamp(0.7248900764597067);
    msg.setSource(65083U);
    msg.setSourceEntity(14U);
    msg.setDestination(61972U);
    msg.setDestinationEntity(243U);
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 46U;
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
    msg.setTimeStamp(0.396437163905053);
    msg.setSource(57311U);
    msg.setSourceEntity(251U);
    msg.setDestination(31091U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.11205428574095033;
    msg.lon = 0.12376563613815128;
    msg.depth = 0.30975521042846044;
    msg.sentence.assign("UVWDWHZSYCIPEXOVVNEHLIBLNZAYSLAPDLRTLIBYKMTDNMTRGTBDKJQWSFTTPRIQPZQSWQMSDZOAAIXHXCZEOPVQYAPARUPFWXBUDMKYKQGKHJDYWEFRTHKKSYMLRHQJRVLJFMKOZUYOJPGBIGZGOCIAXMSACKYMFIEGXGFIPBAXFFWGYRLDNSCRCONNNUCTULKNLPWJAOGBEJRHVCZVF");
    msg.txtime = 0.8103941843168937;
    msg.modem_type.assign("GDGIUUSKODVJKHVCEBWXIEBNIUONQNIQALVPFJBJLMCKZNVRZFFPCIRALXKZYJFDRVQZVNASJOXYDTFFLXAIGQBNHRXECGHOSSSEPYQBLQMOKLCHJSHBZIWDPGBZEIKTALBUNLTTQANHMBVYFDVSSOXESEYEPHODJEQXKACPLCMYRRHTRXRYGYMT");
    msg.sys_src.assign("RUCLILHKQRRLEHPLHLKUDTNAAUIIZNDWBQSCBEWNYMPQSSTKARGLWJMCBWKFPVXTT");
    msg.seq = 58368U;
    msg.sys_dst.assign("TUTZIRQPIKCWCXPBGPOUXPDJCHFYYJSYIUKMPLGWPKKTEHDCJVNHXLHLZYQSOSEGMXYRMMXSNADNMSWVILLUXCIBWSKGTEOAZJEEMTMYQDVVPVZWQJCVZQFUXBYAAWAYJXDEDJOUNGFRTBDXHAKMAROFBLIPSZHFRRFOYVF");
    msg.flags = 220U;
    const char tmp_msg_0[] = {42, -60, -104, 99, -73, 61, -58, 26, 15, 8, -78, 100, 106, -74, 48, 42, 33, -32, 32, 121, -17, 53, 106, -10, 124, -30, 67, -2, 52, -43, -37, 25, -67, -105, -21, 76, -111, -50, 50, 110, 93, 118, 121, -22, -71, 96, 16, 81, 87, 50, 114, -62, 115, 71, -108, -108, 48, 94, -108, 79, -54, 27, -41, -95, -10, 47, -21, 44, -88, -26, -80, -72, -100, 66, -18, 40, 74, 105, 7, -96, 40, 13, 54, -4, 120, 16, 33, -120, 20, -102, -29, 12, 70, 18, 70, 51, 112, 52, 3, 51, -97, -78, 29, -88, 56, -85, 63, 82, -61, -65, 55, 119, 123, -63, 23, 64, -37, 2, 60, 114, -9, 47, -70, -33, 47, 88, 81, 119, 1, -53, 53, -113, -2, 94, 122, 75, -52, -52, 109, 44, 76, 86, 74, 48, -13, -70, 26, 44, 83, 90, 31, -123, 52, -124, -91, -75, 18, -102, -102, -101, -54, -103, -104, 105, -80, -24, 5, -87, -23, -88, -107, 43, 6, -90, 90, 69, -19};
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
    msg.setTimeStamp(0.9210579155943994);
    msg.setSource(64781U);
    msg.setSourceEntity(87U);
    msg.setDestination(51347U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.8706873283894137;
    msg.lon = 0.057600672396211805;
    msg.depth = 0.4556346742210473;
    msg.sentence.assign("NZIWPVLNGZCDSJTMFGYNOKWHCEIRPLLOBDNNREZJHFKASZOYRRRVINWUMXKCHJGCYPAGGZBCWWOIVFJBYXHPUQKEDJSAQLPFTLZCLWIYTTQABWMYRRJUNAKOMZXGMUBOLXQMXDEMVLLJUTSRCVBXMFEQVBXWHISKUXYBTEOZQAGEPZFIYDZFSWPEDTEPACQUXUPEHPLBTKNWIGSV");
    msg.txtime = 0.7822895509510365;
    msg.modem_type.assign("KYIRXJNNZDZIZQEXAXHPJGKJVPQFZRJHUBADWDFVMKNERISKLGYSEYCTCCWGCXCECQOIWMPXXTVQKWPGRVUZIPZCPQJILGYUGJNFMLOWTMYYAGVZKKWTASQVJAEMPFRBNBALDLOJH");
    msg.sys_src.assign("KLYPYTEKGQJZTMXVALRGZOXYMPGMIMREHJRYKZMQDPTQUIASBZFINXDSWQGASDAPQWVRCXTHUWPWUNHQKNDTWJLZVZNNWFUCDHERFJQNKPLEEVBVSNULSKXUZHTLIRXJMEODCALRUHGFNQJFTJOISMSZAOTCQMOHDXTWXUAGBBOOCJHXLEBBYMKTZAPAIZIHKCRBRORBGWLCD");
    msg.seq = 559U;
    msg.sys_dst.assign("WCRVQNRLJISWIBPQDMHGHKQHAGSAUNAKDXDCOLDZAJRWJHAPYJQJLFYPBZTWBUOKDVQZLNOHVXUFOAXSTECEMZHLVITKXEGNZVKTRDGCJOUZLMKQVLGEZYXPVEFBZDUEMBJ");
    msg.flags = 250U;
    const char tmp_msg_0[] = {46, 83, 108, 120, -111, -9, 67, 96, -11, -60, 29, 86, 40, -89, 93, 41, 107, -80, -92, 47, 88, -38, 3, -5, 101, 11, -70, -77, 22, -46, 37, 24, -66, -64, -45, -117, 50, -95, -101, 50, -25, -72, -32, -68, 36, 122, -7, 8, 51, -66, 17, 51, -100, 105, 89, 98, -54, -82, 90, 12, 100, 41, 5, -30, -29, 59, 78, 28, 3, 11, -80, 80, 11, -21, 78, 78, 119, 125, -8, -112, -34, -53, 55, -79, 106, -31, -27, -118, 41, -38, -71, 109, 120, -28, -7, -51, 31, 14, -72, 82, -55, 26, -75, 126, -29, 96, -51, -23, 90, 107, -26, -70, -108, -21, 75, 103, -99, 57, 18, -33, 12, 93, 70, -91, -113, -26, -84};
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
    msg.setTimeStamp(0.2625469485606653);
    msg.setSource(24238U);
    msg.setSourceEntity(243U);
    msg.setDestination(42259U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.3346560940544867;
    msg.lon = 0.29877576200192213;
    msg.depth = 0.47726667790760025;
    msg.sentence.assign("BPALDLPHMJAYHVBAHMDERVDNFLAXQKSJOFMJDSJEFUOIUBNQXARZKIRWBXXOQPDJN");
    msg.txtime = 0.42106629189536826;
    msg.modem_type.assign("SGXHQSJRSJZMQOEWZKROLUDBKETLBEPUIMWDAPYJYGYQJVIDVWQEAEQBJWQDGRUHUYZDZFUKWKXBPNCXNFTIAFJBSONWFKKKMYKGVLSETYMJXVFUOGBXHGTRRRAOVDISDXCDZUWEGBEUYCGXYJBHNGYLMSLHEIPPOMQVCZLANWUQCOAIZAMRWXPDZANOASFXILAPSMITDHSNTFCPCTFKTMINRQWRLOHLCXJOYRPBC");
    msg.sys_src.assign("URBNSZTNMPYYDVCMJAJZKILBCQVAJBBOPFCL");
    msg.seq = 61363U;
    msg.sys_dst.assign("DHBMMNBISNBCKKDGXJRCCKWEWAMMJJSLAQZLHWYEDHSERAATFLVUFAQBHPIDAGSZOFXRNPBOXVUQTCEDOUYWEMYKJDLPRMOYTZKQZFRVWQWOJYUGIKHNVSGVMBPIULEDWZEUGYOITSCNZNGTDQGLOGTQSRBTZAPXWCFTDCFCHXFPRYIFXYYPX");
    msg.flags = 150U;
    const char tmp_msg_0[] = {-109, 65, 41, 124, 115, -116, -125, -127, -30, -109, -65, 33, 68, -77, -34, -40, 66, 71, -53, 57, 117, 98, 123, -127, -122, 36, 57, 102, -25, 10, -86, -124, -107, 74, 118, 33, -88, -112, -53, -90, -87, -65, -113, -92, -109, 11, -3, 7, -10, -62, 55, -28, 64, 19, -53, -71, 103, -71, -75, 122, -115, 16, -38, 39, 12, 11, -76, 65, -45, -124, -100, -86, -35, 69, 97, -121, 85, 3, -54, -7, -13, 105, 113, -21, -107, -86, -64, 74};
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
    msg.setTimeStamp(0.7564257822279427);
    msg.setSource(42651U);
    msg.setSourceEntity(208U);
    msg.setDestination(26745U);
    msg.setDestinationEntity(70U);
    msg.op = 130U;
    msg.system.assign("KQJTPFHKGJAXCZJYEUXWEFPQAUHMDTOUDRWZCQIKYSNCJBJVXCGADYDQMMAZORKOGWAXTWHOHNTNUTIINZAXMDQZBBPPUXJSATMWRIINQMUEZTNSBKDIPHIVGFFPBFIMYSJLYPSJSQVWHRYGNAHGPLCHELAXRTINQCZSDL");
    msg.range = 0.14995469875145329;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 2671269379U;
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
    msg.setTimeStamp(0.3656241873794266);
    msg.setSource(28182U);
    msg.setSourceEntity(8U);
    msg.setDestination(24232U);
    msg.setDestinationEntity(204U);
    msg.op = 182U;
    msg.system.assign("KEXLOQDCXWFJGKKLLLVXGDSEMRZVTHMBUBJQZUUOFQOIFRFMWQAFCAVCTTSHPUCLQFLZYEAIDJQHKDWIPMEGAZOBVCERUPHPAZRMVZIPXBSPKAQDPNTEIOYCXLELNBONBNHNJICAOOKCZDYOWNSRKMRXJSXVIASDVGODHPHSVNHENWJYRFYILHGGKXEJVUMJNQIVRMCUTFYTBGTPYGLZDGBJMZCTUK");
    msg.range = 0.37283928343022077;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 174U;
    tmp_msg_0.mode.assign("RYLHFGYIQYJPDFKBNYKOGSFKANFKRCKQTTWZWZSOBQWVFHZHJPWEPXQPAAVWXGZIVLEONICXDSCQPIMNFCTBHASQUWHRZXYTPQABCPXHVNJDIUJRZHTESRBMYMIRMNWXOLLVGHJPYAPQUGGCYUSIZBEKTKIMFEEVAJXEJKUGNLWEILZAFUWFQNKVSYBRDZGRVMJTBDDMVLUFMIDDOULRWSTMQPSUTAXCCLJLAXE");
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
    msg.setTimeStamp(0.4460436488596633);
    msg.setSource(41726U);
    msg.setSourceEntity(232U);
    msg.setDestination(32484U);
    msg.setDestinationEntity(242U);
    msg.op = 107U;
    msg.system.assign("DDQTHSCEDASQMWVRNPKUFFZPGD");
    msg.range = 0.7689327946480273;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 174U;
    tmp_msg_0.tas2acc_pgain = 0.618404809614256;
    tmp_msg_0.bank2p_pgain = 0.3675271948385902;
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
    msg.setTimeStamp(0.9929450790330666);
    msg.setSource(61040U);
    msg.setSourceEntity(189U);
    msg.setDestination(12281U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.49526040010330463);
    msg.setSource(16493U);
    msg.setSourceEntity(249U);
    msg.setDestination(11800U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.8302708857601443);
    msg.setSource(55082U);
    msg.setSourceEntity(76U);
    msg.setDestination(5793U);
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
    msg.setTimeStamp(0.8569761349862688);
    msg.setSource(12856U);
    msg.setSourceEntity(150U);
    msg.setDestination(7612U);
    msg.setDestinationEntity(37U);
    msg.list.assign("XSOGXKPAPLKTTXHMMCOGCDOSUFFABPSJLKUNEUYNFLVTKSKYGLDAMNDSQBNEABVXEGHTIFCOGLBWWAAESKSEIRVAIYGPUZZXGKQDJOZFVBGZMBVIUOFGXIFXFJSPVMHOLBIJZWWJQOIPMMARTPEEZTNPDCDJTZPWMVIKJNKEEHMLWORTJYUSTNHRQUZMAQULYYLYD");

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
    msg.setTimeStamp(0.08749169822416103);
    msg.setSource(42456U);
    msg.setSourceEntity(48U);
    msg.setDestination(12684U);
    msg.setDestinationEntity(60U);
    msg.list.assign("NXUILVMRHEYEANSVGBEYQLXZSZIBWIPERZITWUDSRKFZKJOQGSOJGRGSJHNPFKXNGTGCLHFKEEDAASGBDOFNAPKLCQTLBQQYBZWCVXWTHCRLITITOZQMJLWP");

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
    msg.setTimeStamp(0.033915432181605865);
    msg.setSource(43919U);
    msg.setSourceEntity(128U);
    msg.setDestination(30575U);
    msg.setDestinationEntity(117U);
    msg.list.assign("TKZSDNCXYFTRXCDUIHQBCIKUTGBPMJHMEMSQJADIWMRLLYSSYAACISJKHDNBWJERKLQPOAMRCRMJZFSHSUVEVIATNMLBHUBIGVSVNGOKFJZGVSBHTMBFYOEVCGFXDFOHZLFRGY");

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
    msg.setTimeStamp(0.4642706445679735);
    msg.setSource(47285U);
    msg.setSourceEntity(100U);
    msg.setDestination(59810U);
    msg.setDestinationEntity(98U);
    msg.peer.assign("ENIRWJTMYKDTSZCLRSVKIZTQXBJFSSRZXZXLPYOYSBITMTOPUKDIWLCFHXDAVDXPHWZPOWMEGAAWLEUPROVIONUJQVXQAYAVHQNXCSPDUUJMUAZDMPOMNDKMNCERFUCJFEYSHBCHYMABGTOJHJPHUVZQET");
    msg.rssi = 0.1409043266598018;
    msg.integrity = 24040U;

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
    msg.setTimeStamp(0.6515987237207802);
    msg.setSource(36907U);
    msg.setSourceEntity(131U);
    msg.setDestination(28258U);
    msg.setDestinationEntity(169U);
    msg.peer.assign("XBZWGIDOHTXAPEUBJWKKAINEEVJOGONGRIDXMZPYWJHDEUICBLSSXWWXWMBSUTFMMJRWKICJEQDNCAIUPTSYVOXIZXOLUFJYCYSDUBMHFCQOZGGPKZ");
    msg.rssi = 0.9931005093587627;
    msg.integrity = 2709U;

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
    msg.setTimeStamp(0.4324630352229133);
    msg.setSource(49291U);
    msg.setSourceEntity(188U);
    msg.setDestination(52486U);
    msg.setDestinationEntity(128U);
    msg.peer.assign("ZNIMLDWUJOFDZQQSPKOBQDVJFENUJCSNUMJFEYBRVBCKMWVGERFKFUOGMHUGLPVWAVAWRTDTYXJMEYBOPGOHBDBGYRUBISLNCELSNOXLSCEZLHLGXWKHNJTKXLATETFBWHZUA");
    msg.rssi = 0.3657833077039184;
    msg.integrity = 22707U;

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
    msg.setTimeStamp(0.9427344648609656);
    msg.setSource(41563U);
    msg.setSourceEntity(223U);
    msg.setDestination(7026U);
    msg.setDestinationEntity(53U);
    msg.req_id = 4927U;
    msg.destination.assign("MENAEJKUBGXIMCXQTDGYJESHTFUTMOFWYUHRAGKMGHTVOOROOSHHWPDTJQXDZAGBAJBXQOVMNQFSLZSYRIZBLMEPZVXFNNXDRNFRDHPZCSTCLACULILJEMCVV");
    msg.timeout = 0.6273333046187081;
    msg.range = 0.3522410944221527;
    msg.type = 81U;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("OKUDNPRZZEDODAWMSWJVVXFRXEDYQKTPHHTOKRBYTJVCIAOSYVNQWLFUVBTKTXCPHNMUPCXOQYESCHBIHQGSGSKHYOMFYGXWABJXLJXVCFWSMLBNFUTKFPZCZKNWGIQZYBZLANYIOIWFPFHAGRTTERR");
    tmp_msg_0.type = 105U;
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
    msg.setTimeStamp(0.6916770592919133);
    msg.setSource(35084U);
    msg.setSourceEntity(31U);
    msg.setDestination(29902U);
    msg.setDestinationEntity(141U);
    msg.req_id = 53214U;
    msg.destination.assign("JHWMLKTYGBXZZSIIKIRUDYLRTJRUZJ");
    msg.timeout = 0.025469784220838343;
    msg.range = 0.7288246716517244;
    msg.type = 197U;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 187U;
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
    msg.setTimeStamp(0.011533888004913173);
    msg.setSource(32731U);
    msg.setSourceEntity(11U);
    msg.setDestination(55186U);
    msg.setDestinationEntity(190U);
    msg.req_id = 13900U;
    msg.destination.assign("AGERZYPPUSITSDGDNBIEHNYSDRCRQGCGRFJXZTBQFVNDVAIDBFZPASEZQXVKBERUVDHDVEOFKAUOXYKIQKBYBLCPZASGKFWXHBSGXNRUUVAYIBLPNJDZIEKOMOQHQGOYUWQFGCKSXNYMWWNCJOPJLFGMUXQHMWCKETMATVGRFIVLOJRTEUCJLXXIIZFAVFLEJWDI");
    msg.timeout = 0.948022341247868;
    msg.range = 0.10444359645470702;
    msg.type = 181U;
    IMC::AssetReport tmp_msg_0;
    tmp_msg_0.name.assign("BMNSEKKRHCAVBGNJUHAQMYYKDEIRBLEUDYPKXIFWPKLTJNZLCIIZGNURYQIUALFKMMCEECSKQXOWZSRJVMJFOVDRQOHWPWRRXVIFNSKBJHKHSFAHOTYOQXOZSXTAWYAGDRNW");
    tmp_msg_0.report_time = 0.9998063429318315;
    tmp_msg_0.medium = 34U;
    tmp_msg_0.lat = 0.11389488515764035;
    tmp_msg_0.lon = 0.906067867692762;
    tmp_msg_0.depth = 0.9560724821813855;
    tmp_msg_0.alt = 0.5528966221061176;
    tmp_msg_0.sog = 0.9136922126221957;
    tmp_msg_0.cog = 0.22179897143231964;
    IMC::VelocityDelta tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.372587584809566;
    tmp_tmp_msg_0_0.x = 0.11102440969662841;
    tmp_tmp_msg_0_0.y = 0.10832908234187821;
    tmp_tmp_msg_0_0.z = 0.7295542870341047;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.45736865457604536);
    msg.setSource(47618U);
    msg.setSourceEntity(211U);
    msg.setDestination(13942U);
    msg.setDestinationEntity(188U);
    msg.req_id = 1328U;
    msg.type = 175U;
    msg.status = 238U;
    msg.info.assign("KMOAQYACZGFJUENEHMLJDHZQPZXSAXLLAKSYFTAMMSDTYMKOLIPHPRHD");
    msg.range = 0.6451388584167274;

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
    msg.setTimeStamp(0.6668871734323157);
    msg.setSource(61439U);
    msg.setSourceEntity(127U);
    msg.setDestination(48329U);
    msg.setDestinationEntity(253U);
    msg.req_id = 5660U;
    msg.type = 83U;
    msg.status = 121U;
    msg.info.assign("XIUKFYVCPNMGPKMZCDEJHQEXMHQLMNKNDTVUAWXMTDXBVTVVNGOTBCSWGADWJMFSWOQFXIJTRQKOOEPYTEHIPQYSDFJOHZBTYUNMYGDTIOFZCDQUBYRIHPRSLEUSFSMNDLFXABGJUVVSJEHZDLEOROFRHWHECACYYZKJJTCMCHURKOSUXXGKEZSXEWLPASGFPYRFTKKIAVQBZGBUGQPBNINAWXQGVLO");
    msg.range = 0.9538792374083643;

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
    msg.setTimeStamp(0.0019691480640507963);
    msg.setSource(12911U);
    msg.setSourceEntity(103U);
    msg.setDestination(3153U);
    msg.setDestinationEntity(209U);
    msg.req_id = 50636U;
    msg.type = 253U;
    msg.status = 113U;
    msg.info.assign("NCWHZJLAXUTJ");
    msg.range = 0.2566827298026232;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.8271925235523265);
    msg.setSource(14581U);
    msg.setSourceEntity(3U);
    msg.setDestination(60840U);
    msg.setDestinationEntity(218U);
    msg.value = -16875;

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
    msg.setTimeStamp(0.3973421598095569);
    msg.setSource(47666U);
    msg.setSourceEntity(68U);
    msg.setDestination(8341U);
    msg.setDestinationEntity(159U);
    msg.value = 21889;

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
    msg.setTimeStamp(0.6510850955921776);
    msg.setSource(48738U);
    msg.setSourceEntity(199U);
    msg.setDestination(32220U);
    msg.setDestinationEntity(68U);
    msg.value = -11518;

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
    msg.setTimeStamp(0.9216254573695246);
    msg.setSource(438U);
    msg.setSourceEntity(27U);
    msg.setDestination(45245U);
    msg.setDestinationEntity(25U);
    msg.value = 0.5002670818388526;

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
    msg.setTimeStamp(0.4980374492259253);
    msg.setSource(19462U);
    msg.setSourceEntity(33U);
    msg.setDestination(59731U);
    msg.setDestinationEntity(232U);
    msg.value = 0.9026182245315876;

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
    msg.setTimeStamp(0.7899096136721999);
    msg.setSource(57040U);
    msg.setSourceEntity(12U);
    msg.setDestination(30599U);
    msg.setDestinationEntity(184U);
    msg.value = 0.07621144869346408;

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
    msg.setTimeStamp(0.5184845133140876);
    msg.setSource(35814U);
    msg.setSourceEntity(212U);
    msg.setDestination(52875U);
    msg.setDestinationEntity(38U);
    msg.value = 0.4995121822722399;

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
    msg.setTimeStamp(0.16494234690284693);
    msg.setSource(46007U);
    msg.setSourceEntity(26U);
    msg.setDestination(56531U);
    msg.setDestinationEntity(217U);
    msg.value = 0.9412623311617254;

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
    msg.setTimeStamp(0.5598212776710818);
    msg.setSource(56645U);
    msg.setSourceEntity(176U);
    msg.setDestination(42802U);
    msg.setDestinationEntity(115U);
    msg.value = 0.8206887439351674;

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
    msg.setTimeStamp(0.06095504236226412);
    msg.setSource(40046U);
    msg.setSourceEntity(127U);
    msg.setDestination(48600U);
    msg.setDestinationEntity(245U);
    msg.validity = 59314U;
    msg.type = 30U;
    msg.utc_year = 21174U;
    msg.utc_month = 69U;
    msg.utc_day = 53U;
    msg.utc_time = 0.0505004078813277;
    msg.lat = 0.618464602829283;
    msg.lon = 0.2966253990065403;
    msg.height = 0.3456271745517675;
    msg.satellites = 181U;
    msg.cog = 0.14965223437226416;
    msg.sog = 0.38643434980966374;
    msg.hdop = 0.7327102367673195;
    msg.vdop = 0.5405311503710706;
    msg.hacc = 0.133504713931358;
    msg.vacc = 0.9667607657063869;

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
    msg.setTimeStamp(0.7702580354875117);
    msg.setSource(44029U);
    msg.setSourceEntity(211U);
    msg.setDestination(29623U);
    msg.setDestinationEntity(38U);
    msg.validity = 5070U;
    msg.type = 37U;
    msg.utc_year = 57413U;
    msg.utc_month = 80U;
    msg.utc_day = 133U;
    msg.utc_time = 0.9025396792005659;
    msg.lat = 0.6601705960376298;
    msg.lon = 0.9479144988275154;
    msg.height = 0.14536930125742398;
    msg.satellites = 57U;
    msg.cog = 0.30222127809984667;
    msg.sog = 0.7804649398413228;
    msg.hdop = 0.956139917965498;
    msg.vdop = 0.48914256552514135;
    msg.hacc = 0.829551505677544;
    msg.vacc = 0.6314555896479652;

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
    msg.setTimeStamp(0.9640513714267225);
    msg.setSource(31306U);
    msg.setSourceEntity(125U);
    msg.setDestination(9049U);
    msg.setDestinationEntity(60U);
    msg.validity = 15174U;
    msg.type = 17U;
    msg.utc_year = 37355U;
    msg.utc_month = 230U;
    msg.utc_day = 175U;
    msg.utc_time = 0.5139779954809774;
    msg.lat = 0.3141898134216621;
    msg.lon = 0.30831952830479403;
    msg.height = 0.11226977988218534;
    msg.satellites = 15U;
    msg.cog = 0.5607809707625806;
    msg.sog = 0.6144585550969348;
    msg.hdop = 0.8248164472983981;
    msg.vdop = 0.9399304701108532;
    msg.hacc = 0.8714111414798565;
    msg.vacc = 0.06520569588369829;

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
    msg.setTimeStamp(0.6875530645187977);
    msg.setSource(64572U);
    msg.setSourceEntity(21U);
    msg.setDestination(53680U);
    msg.setDestinationEntity(238U);
    msg.time = 0.5334212277219201;
    msg.phi = 0.5373672217295173;
    msg.theta = 0.3656282827519881;
    msg.psi = 0.5729122192700847;
    msg.psi_magnetic = 0.2519503176980896;

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
    msg.setTimeStamp(0.9824793695698548);
    msg.setSource(44475U);
    msg.setSourceEntity(208U);
    msg.setDestination(55203U);
    msg.setDestinationEntity(76U);
    msg.time = 0.7441046158991241;
    msg.phi = 0.9364523761880388;
    msg.theta = 0.39722246830676633;
    msg.psi = 0.9453063179701755;
    msg.psi_magnetic = 0.33373555457413184;

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
    msg.setTimeStamp(0.7838447980643602);
    msg.setSource(50144U);
    msg.setSourceEntity(52U);
    msg.setDestination(49128U);
    msg.setDestinationEntity(197U);
    msg.time = 0.4600314784600268;
    msg.phi = 0.5948845773997229;
    msg.theta = 0.6922798587282455;
    msg.psi = 0.5964824514609007;
    msg.psi_magnetic = 0.2331219048438481;

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
    msg.setTimeStamp(0.0682950880163562);
    msg.setSource(43088U);
    msg.setSourceEntity(114U);
    msg.setDestination(4437U);
    msg.setDestinationEntity(246U);
    msg.time = 0.14809670878868253;
    msg.x = 0.6427070635654825;
    msg.y = 0.8489610677185278;
    msg.z = 0.9143740284165464;
    msg.timestep = 0.5723191588700688;

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
    msg.setTimeStamp(0.8686471181637471);
    msg.setSource(31515U);
    msg.setSourceEntity(22U);
    msg.setDestination(49989U);
    msg.setDestinationEntity(23U);
    msg.time = 0.9795002854126136;
    msg.x = 0.87137530375291;
    msg.y = 0.24539923297909727;
    msg.z = 0.9539254678263044;
    msg.timestep = 0.8768255917481729;

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
    msg.setTimeStamp(0.27951770736654147);
    msg.setSource(23109U);
    msg.setSourceEntity(87U);
    msg.setDestination(23059U);
    msg.setDestinationEntity(144U);
    msg.time = 0.3381248595561499;
    msg.x = 0.9378888951170201;
    msg.y = 0.9879749644007668;
    msg.z = 0.5169735367103837;
    msg.timestep = 0.24990112541665188;

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
    msg.setTimeStamp(0.6736912961534971);
    msg.setSource(46305U);
    msg.setSourceEntity(85U);
    msg.setDestination(61458U);
    msg.setDestinationEntity(0U);
    msg.time = 0.3506320030290744;
    msg.x = 0.44118164384736325;
    msg.y = 0.5584296944903544;
    msg.z = 0.49627920203526843;

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
    msg.setTimeStamp(0.8791382450235347);
    msg.setSource(231U);
    msg.setSourceEntity(127U);
    msg.setDestination(34932U);
    msg.setDestinationEntity(151U);
    msg.time = 0.6680111062846487;
    msg.x = 0.1745591722317672;
    msg.y = 0.366588059015885;
    msg.z = 0.035780486381429055;

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
    msg.setTimeStamp(0.021402561028201927);
    msg.setSource(10107U);
    msg.setSourceEntity(155U);
    msg.setDestination(937U);
    msg.setDestinationEntity(5U);
    msg.time = 0.5910957817532221;
    msg.x = 0.8099472596954649;
    msg.y = 0.7975896425913059;
    msg.z = 0.0031638446219550698;

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
    msg.setTimeStamp(0.6615563020266373);
    msg.setSource(51416U);
    msg.setSourceEntity(243U);
    msg.setDestination(25205U);
    msg.setDestinationEntity(114U);
    msg.time = 0.2934579501238118;
    msg.x = 0.4304544245621936;
    msg.y = 0.7478239696337158;
    msg.z = 0.21005695388882295;

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
    msg.setTimeStamp(0.3997819374356535);
    msg.setSource(6737U);
    msg.setSourceEntity(252U);
    msg.setDestination(38946U);
    msg.setDestinationEntity(124U);
    msg.time = 0.24533421647770037;
    msg.x = 0.6479910507409737;
    msg.y = 0.02522881486242723;
    msg.z = 0.0013136496234289474;

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
    msg.setTimeStamp(0.07003585581544869);
    msg.setSource(14798U);
    msg.setSourceEntity(246U);
    msg.setDestination(43876U);
    msg.setDestinationEntity(76U);
    msg.time = 0.8243117318657631;
    msg.x = 0.23656670363162036;
    msg.y = 0.581444176891315;
    msg.z = 0.9449887506622814;

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
    msg.setTimeStamp(0.4192743011197392);
    msg.setSource(5922U);
    msg.setSourceEntity(76U);
    msg.setDestination(2532U);
    msg.setDestinationEntity(154U);
    msg.time = 0.8254184978049062;
    msg.x = 0.8380571590743573;
    msg.y = 0.7266154452259169;
    msg.z = 0.8344109623400994;

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
    msg.setTimeStamp(0.011545152467452913);
    msg.setSource(59720U);
    msg.setSourceEntity(129U);
    msg.setDestination(37394U);
    msg.setDestinationEntity(167U);
    msg.time = 0.5535130557248943;
    msg.x = 0.38245179917915717;
    msg.y = 0.9340524432095395;
    msg.z = 0.8578843648427468;

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
    msg.setTimeStamp(0.2774290982452007);
    msg.setSource(41719U);
    msg.setSourceEntity(33U);
    msg.setDestination(6118U);
    msg.setDestinationEntity(136U);
    msg.time = 0.31780154075818245;
    msg.x = 0.6094025879427272;
    msg.y = 0.615653640713681;
    msg.z = 0.5379374699110756;

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
    msg.setTimeStamp(0.39062099114344717);
    msg.setSource(36020U);
    msg.setSourceEntity(249U);
    msg.setDestination(9709U);
    msg.setDestinationEntity(147U);
    msg.validity = 70U;
    msg.x = 0.509557463485432;
    msg.y = 0.1932176831279493;
    msg.z = 0.04331549707002946;

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
    msg.setTimeStamp(0.5817423499481919);
    msg.setSource(49816U);
    msg.setSourceEntity(118U);
    msg.setDestination(39530U);
    msg.setDestinationEntity(46U);
    msg.validity = 89U;
    msg.x = 0.2507805459732936;
    msg.y = 0.9675263463544941;
    msg.z = 0.013104529851973079;

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
    msg.setTimeStamp(0.9980934866968174);
    msg.setSource(14339U);
    msg.setSourceEntity(149U);
    msg.setDestination(16534U);
    msg.setDestinationEntity(132U);
    msg.validity = 108U;
    msg.x = 0.033818921890862885;
    msg.y = 0.7508602921220853;
    msg.z = 0.5588506150995634;

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
    msg.setTimeStamp(0.9252973707592458);
    msg.setSource(29032U);
    msg.setSourceEntity(177U);
    msg.setDestination(16575U);
    msg.setDestinationEntity(155U);
    msg.validity = 202U;
    msg.x = 0.8701311004292626;
    msg.y = 0.24457912025908757;
    msg.z = 0.7202773889871563;

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
    msg.setTimeStamp(0.456359007992007);
    msg.setSource(59556U);
    msg.setSourceEntity(131U);
    msg.setDestination(60066U);
    msg.setDestinationEntity(207U);
    msg.validity = 74U;
    msg.x = 0.7724876015876626;
    msg.y = 0.8865615159469076;
    msg.z = 0.9460229747228859;

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
    msg.setTimeStamp(0.6115012672559159);
    msg.setSource(59436U);
    msg.setSourceEntity(179U);
    msg.setDestination(26207U);
    msg.setDestinationEntity(1U);
    msg.validity = 127U;
    msg.x = 0.9840211767959225;
    msg.y = 0.8092793634712839;
    msg.z = 0.5995988692724243;

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
    msg.setTimeStamp(0.948624121694669);
    msg.setSource(22671U);
    msg.setSourceEntity(121U);
    msg.setDestination(53866U);
    msg.setDestinationEntity(51U);
    msg.time = 0.9427377542964899;
    msg.x = 0.4498107303152634;
    msg.y = 0.6116344485351545;
    msg.z = 0.6100551953053227;

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
    msg.setTimeStamp(0.2582264339831981);
    msg.setSource(58288U);
    msg.setSourceEntity(99U);
    msg.setDestination(14233U);
    msg.setDestinationEntity(205U);
    msg.time = 0.4965551817050763;
    msg.x = 0.6492843879892883;
    msg.y = 0.19060934469569368;
    msg.z = 0.7813844482078114;

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
    msg.setTimeStamp(0.5401926333458013);
    msg.setSource(45614U);
    msg.setSourceEntity(9U);
    msg.setDestination(4938U);
    msg.setDestinationEntity(97U);
    msg.time = 0.3833592910532121;
    msg.x = 0.6006004123632115;
    msg.y = 0.757183852561021;
    msg.z = 0.34842963723200215;

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
    msg.setTimeStamp(0.6390072241567251);
    msg.setSource(4923U);
    msg.setSourceEntity(176U);
    msg.setDestination(56142U);
    msg.setDestinationEntity(146U);
    msg.validity = 154U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.004110911375211357;
    tmp_msg_0.beam_height = 0.5424293102237162;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.36654670469901274;

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
    msg.setTimeStamp(0.27568580074754834);
    msg.setSource(54756U);
    msg.setSourceEntity(110U);
    msg.setDestination(5959U);
    msg.setDestinationEntity(184U);
    msg.validity = 230U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9233142848849261;
    tmp_msg_0.y = 0.9573387827815969;
    tmp_msg_0.z = 0.06528444260624944;
    tmp_msg_0.phi = 0.30404976492285885;
    tmp_msg_0.theta = 0.8759041057216157;
    tmp_msg_0.psi = 0.31266543317871454;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.806315683825301;

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
    msg.setTimeStamp(0.3724045094191947);
    msg.setSource(64691U);
    msg.setSourceEntity(162U);
    msg.setDestination(48305U);
    msg.setDestinationEntity(178U);
    msg.validity = 24U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.020489808388095332;
    tmp_msg_0.beam_height = 0.20550282086276095;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4601179328210615;

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
    msg.setTimeStamp(0.240254210135744);
    msg.setSource(37779U);
    msg.setSourceEntity(60U);
    msg.setDestination(64341U);
    msg.setDestinationEntity(242U);
    msg.value = 0.49347787718133496;

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
    msg.setTimeStamp(0.6824794285747746);
    msg.setSource(41397U);
    msg.setSourceEntity(70U);
    msg.setDestination(35935U);
    msg.setDestinationEntity(218U);
    msg.value = 0.013417542589644449;

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
    msg.setTimeStamp(0.6362305006166845);
    msg.setSource(32066U);
    msg.setSourceEntity(192U);
    msg.setDestination(60295U);
    msg.setDestinationEntity(207U);
    msg.value = 0.05403076164917742;

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
    msg.setTimeStamp(0.5771274928950725);
    msg.setSource(37846U);
    msg.setSourceEntity(134U);
    msg.setDestination(42608U);
    msg.setDestinationEntity(103U);
    msg.value = 0.5558899430716108;

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
    msg.setTimeStamp(0.16152443713265863);
    msg.setSource(34945U);
    msg.setSourceEntity(207U);
    msg.setDestination(28940U);
    msg.setDestinationEntity(27U);
    msg.value = 0.4446197195999063;

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
    msg.setTimeStamp(0.5066670372512079);
    msg.setSource(22409U);
    msg.setSourceEntity(155U);
    msg.setDestination(25378U);
    msg.setDestinationEntity(185U);
    msg.value = 0.8324881925065489;

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
    msg.setTimeStamp(0.2608221514964941);
    msg.setSource(8838U);
    msg.setSourceEntity(238U);
    msg.setDestination(48759U);
    msg.setDestinationEntity(163U);
    msg.value = 0.018914316680998522;

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
    msg.setTimeStamp(0.5223282687239196);
    msg.setSource(26172U);
    msg.setSourceEntity(238U);
    msg.setDestination(35006U);
    msg.setDestinationEntity(1U);
    msg.value = 0.7676433246160139;

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
    msg.setTimeStamp(0.4609005910232832);
    msg.setSource(30576U);
    msg.setSourceEntity(242U);
    msg.setDestination(60961U);
    msg.setDestinationEntity(31U);
    msg.value = 0.9224382531778323;

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
    msg.setTimeStamp(0.5357546574469673);
    msg.setSource(39091U);
    msg.setSourceEntity(83U);
    msg.setDestination(4478U);
    msg.setDestinationEntity(37U);
    msg.value = 0.32517319819721147;

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
    msg.setTimeStamp(0.5158172637881157);
    msg.setSource(41439U);
    msg.setSourceEntity(226U);
    msg.setDestination(56016U);
    msg.setDestinationEntity(39U);
    msg.value = 0.03978592028194061;

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
    msg.setTimeStamp(0.3629163069611966);
    msg.setSource(22782U);
    msg.setSourceEntity(70U);
    msg.setDestination(18696U);
    msg.setDestinationEntity(175U);
    msg.value = 0.0034271169103955446;

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
    msg.setTimeStamp(0.576944662041238);
    msg.setSource(22891U);
    msg.setSourceEntity(116U);
    msg.setDestination(267U);
    msg.setDestinationEntity(141U);
    msg.value = 0.5850306086935171;

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
    msg.setTimeStamp(0.5096717093988111);
    msg.setSource(48054U);
    msg.setSourceEntity(66U);
    msg.setDestination(20039U);
    msg.setDestinationEntity(248U);
    msg.value = 0.675979695919667;

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
    msg.setTimeStamp(0.913945007081839);
    msg.setSource(44653U);
    msg.setSourceEntity(179U);
    msg.setDestination(16748U);
    msg.setDestinationEntity(31U);
    msg.value = 0.9628299537844405;

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
    msg.setTimeStamp(0.5831058208341261);
    msg.setSource(22142U);
    msg.setSourceEntity(87U);
    msg.setDestination(2950U);
    msg.setDestinationEntity(250U);
    msg.value = 0.9873252545024335;

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
    msg.setTimeStamp(0.24277636096093214);
    msg.setSource(34039U);
    msg.setSourceEntity(16U);
    msg.setDestination(21038U);
    msg.setDestinationEntity(99U);
    msg.value = 0.7817847277136468;

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
    msg.setTimeStamp(0.05180602859075423);
    msg.setSource(44739U);
    msg.setSourceEntity(161U);
    msg.setDestination(39401U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8122616041859304;

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
    msg.setTimeStamp(0.939040919970537);
    msg.setSource(6993U);
    msg.setSourceEntity(220U);
    msg.setDestination(51387U);
    msg.setDestinationEntity(115U);
    msg.value = 0.9368041700773844;

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
    msg.setTimeStamp(0.42399958541358707);
    msg.setSource(12984U);
    msg.setSourceEntity(240U);
    msg.setDestination(52144U);
    msg.setDestinationEntity(34U);
    msg.value = 0.939419690643696;

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
    msg.setTimeStamp(0.254790334650277);
    msg.setSource(61681U);
    msg.setSourceEntity(252U);
    msg.setDestination(49267U);
    msg.setDestinationEntity(168U);
    msg.value = 0.45735295969412415;

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
    msg.setTimeStamp(0.8118817109227499);
    msg.setSource(9904U);
    msg.setSourceEntity(87U);
    msg.setDestination(34843U);
    msg.setDestinationEntity(96U);
    msg.value = 0.9241947653359189;

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
    msg.setTimeStamp(0.7138349962942805);
    msg.setSource(7423U);
    msg.setSourceEntity(41U);
    msg.setDestination(50493U);
    msg.setDestinationEntity(62U);
    msg.value = 0.2503872713801396;

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
    msg.setTimeStamp(0.660332436548224);
    msg.setSource(30259U);
    msg.setSourceEntity(39U);
    msg.setDestination(46786U);
    msg.setDestinationEntity(15U);
    msg.value = 0.8821327524411947;

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
    msg.setTimeStamp(0.08469085878104443);
    msg.setSource(18131U);
    msg.setSourceEntity(221U);
    msg.setDestination(7807U);
    msg.setDestinationEntity(141U);
    msg.direction = 0.2878777165869716;
    msg.speed = 0.7681527605116318;
    msg.turbulence = 0.8405622225551145;

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
    msg.setTimeStamp(0.1671874123017395);
    msg.setSource(10880U);
    msg.setSourceEntity(9U);
    msg.setDestination(60018U);
    msg.setDestinationEntity(23U);
    msg.direction = 0.9884649818763477;
    msg.speed = 0.8805610902795933;
    msg.turbulence = 0.41726031905384775;

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
    msg.setTimeStamp(0.8558910263556329);
    msg.setSource(21938U);
    msg.setSourceEntity(26U);
    msg.setDestination(2947U);
    msg.setDestinationEntity(235U);
    msg.direction = 0.7313791559626172;
    msg.speed = 0.7464423081579574;
    msg.turbulence = 0.04048264124786505;

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
    msg.setTimeStamp(0.5915825224063456);
    msg.setSource(34563U);
    msg.setSourceEntity(122U);
    msg.setDestination(16737U);
    msg.setDestinationEntity(57U);
    msg.value = 0.03037987279963983;

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
    msg.setTimeStamp(0.6486313404227357);
    msg.setSource(21887U);
    msg.setSourceEntity(229U);
    msg.setDestination(32108U);
    msg.setDestinationEntity(37U);
    msg.value = 0.1313477120774319;

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
    msg.setTimeStamp(0.5250251440174527);
    msg.setSource(1345U);
    msg.setSourceEntity(166U);
    msg.setDestination(49817U);
    msg.setDestinationEntity(229U);
    msg.value = 0.9824480580845357;

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
    msg.setTimeStamp(0.5153067072365177);
    msg.setSource(40931U);
    msg.setSourceEntity(242U);
    msg.setDestination(18227U);
    msg.setDestinationEntity(158U);
    msg.value.assign("QZCSKDWLOSALAGMUCFTKUIXORNUAGMOLVBTWMRJWRWUKRYMXFXIEYFWJIIEZKDODBTAIYXTOKPQBGRGBONDCWLBJJYTNEYWALHXZKFPXBAC");

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
    msg.setTimeStamp(0.2353040490299414);
    msg.setSource(47434U);
    msg.setSourceEntity(120U);
    msg.setDestination(61850U);
    msg.setDestinationEntity(151U);
    msg.value.assign("CDAPQKIFNMRRPZWWYYLBSGRWOINOJLQPTUKNMKIRWZBRNESCYJPKXPDYTNIXFEXNRQGAESFJTAYAJXXFCGFGXWKODBZAHHUGLXKHWOUCIFUJDLOESVMWZTKAUXIQTGFVKYFHBSHIPAAUVEYLABBFN");

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
    msg.setTimeStamp(0.40202630349537827);
    msg.setSource(21161U);
    msg.setSourceEntity(229U);
    msg.setDestination(43132U);
    msg.setDestinationEntity(209U);
    msg.value.assign("MDWDZAVJXDYTSMFRSNKPVHUEMBLHAPQCHJHWIHDVIJRRUMDLOCLSBBKYVMXTFNWMMFCWTXVJWOPVZDCFOZEHBLKYRQVVPZENJAKQRTEUOICVCGGZKTXCAUEEHPSJTLAPYOZSPXZNYSWWJNAOQXDDCKHGKFUIUBEDZQGHSRNBURZANGQIROASYTLGGCPRWWLMDULX");

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
    msg.setTimeStamp(0.22978210735920712);
    msg.setSource(61172U);
    msg.setSourceEntity(56U);
    msg.setDestination(16775U);
    msg.setDestinationEntity(105U);
    const char tmp_msg_0[] = {89, 42, -61, 120, -87, -23, 103, 71, 33, -62, -33, -102, -124, -118, -28, -35, 76, 112, 0, 125, 23, 40, -60, -108, 69, 86, -127, 91, 41, 36, -20, -93, 105, -18, 98, -72, -23, 104, 47, 22, -69, -125, 118, 53, 117, 70, -108, 62, 2, 40, -52, -21, -15, -48, -57, -55, 122, 63, 17, 123, 26, 64, 16, -43, -40, 88, 1, 124, 80, 98, 16, -126, -107, 0, -32, 126, -124, 26, -116, 4, 117, -120, -109, -50, -57, -66, -34, 126, -80, -116, 9, 85, 5, 35, -60, 40, -64, -119, -17, -99, 100, -88, -76, -11, -1, 24, -12, -28, -25, -97, 3, 50, -29, 74, -75, 88, 67, -1, -43, -72, -55, 42, -112, 31, -53, 26, -52, 8, -25, 126, 76, 106, -86, 31, -125, -13, -52, -14, -17, 5, -67, 16, -18, -10, 59};
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
    msg.setTimeStamp(0.39934843312050317);
    msg.setSource(23100U);
    msg.setSourceEntity(128U);
    msg.setDestination(6808U);
    msg.setDestinationEntity(235U);
    const char tmp_msg_0[] = {-62, 32, -123, -128, 4, -86, -54, -103, -15, -84, -3, 17, 105, -120, 65, -81, -85, 107, 20, 91, 91, 123, -13, -96, -83, -4, -74, -27, 59, -24, 67, -13, 119, -95, 57, 8, 37, 102, -82, -94, -92, 102, 72, -128, 98, -98, 12, 61, 35, 94, -96, -33, -10, 69, 5, 76, 70, -120, 75, 19, 8, 107, 117, 31, -81, -95, -108, 98, 60, -9, -124, 41, -116, 38, 9, 16, -118, -6, 55, 59, -73, 35, 66, 16, -3, -10, 15, -109, -70, -41, -119, -103, 103, 58, 47, 57, 69, -121, 45, -59, 37, -31, 88, 0, -119, 11, -88, -28, -50, 5, -33, -120, -38, 99, 13, -7, -106, 5, 13, -33, -49, -80, 20, 22, -102, 122, 71, -17, -72, -89, 119, 41, 126, -25, -14, -90, -62, 63, 113, 103, -53, 2, 75, 43, -81, -31, 112, 65, -30, -73, 10, 70, -66, 102, 114, 68, -19, -49, 89, 46, -33, -36, 86, -7, -58, -67, 117, 80, 125, 63, -41, -54, -125, -106, 88, -8, -126, 92, 68, -109, 30, -121, -105, -80, -76, 108, -91, -127, 49, -23, -18, 35, -79, -108, -1, -48, 78, -123, -64, -71, -78, 12, 23, -101, -121, -86, 60, 50, -11, 111, 116, 70, -41, -52, -77, 59, -35, 19, 17, -4, -70, -16, -44, -6, -4, 67, -114, -26, -71, 15, -37, -9, 68, -16, 22, -60, -5, -108, -70, -32, -51, 58, 25, -104, -105};
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
    msg.setTimeStamp(0.5834268997535588);
    msg.setSource(13115U);
    msg.setSourceEntity(167U);
    msg.setDestination(48826U);
    msg.setDestinationEntity(247U);
    const char tmp_msg_0[] = {115, 84, 78, 36, 90, -46, 30, -89, 68, -5, -85, 13, -78, -40, -72};
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
    msg.setTimeStamp(0.1836589069571547);
    msg.setSource(12560U);
    msg.setSourceEntity(21U);
    msg.setDestination(16588U);
    msg.setDestinationEntity(126U);
    msg.value = 0.24750892139238967;

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
    msg.setTimeStamp(0.5395003582979101);
    msg.setSource(3451U);
    msg.setSourceEntity(239U);
    msg.setDestination(17775U);
    msg.setDestinationEntity(172U);
    msg.value = 0.38472180765074404;

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
    msg.setTimeStamp(0.5622747717802131);
    msg.setSource(43198U);
    msg.setSourceEntity(9U);
    msg.setDestination(48596U);
    msg.setDestinationEntity(50U);
    msg.value = 0.5586691783093012;

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
    msg.setTimeStamp(0.6492177850215894);
    msg.setSource(19518U);
    msg.setSourceEntity(163U);
    msg.setDestination(48340U);
    msg.setDestinationEntity(88U);
    msg.type = 200U;
    msg.frequency = 596935475U;
    msg.min_range = 49588U;
    msg.max_range = 26997U;
    msg.bits_per_point = 167U;
    msg.scale_factor = 0.7545540953234132;
    const char tmp_msg_0[] = {-41, 101, 37, 26, 11, -44, 73, 6, -44, -45, 106, 93, -126, -11, -117, -79, -47, 12, -31, -60, -54, -80, 10, 121, -111, 18, 113, 15, -78, 74, -80, -84, 59, 88, 57, -90, -59, 125, 122, 60, -54, 82, 46, 62, 67, -50, 78, -11, 61, 97, 81, -33, 116, -89, -24, 19, 7, -98, -21, -89, -5, 73, 39, -23, 41, 118, -104, 25, -113, 88, -122, 126, -27, 65, -78, -89, 22, 22, 18, -81, 89, -110, 92, 0, 54, 92, -122, -115, -62, 120, -57, -27, 102, -84, 78, 18, 74, -18};
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
    msg.setTimeStamp(0.7236694683605588);
    msg.setSource(3452U);
    msg.setSourceEntity(34U);
    msg.setDestination(14113U);
    msg.setDestinationEntity(192U);
    msg.type = 187U;
    msg.frequency = 761201655U;
    msg.min_range = 26327U;
    msg.max_range = 2825U;
    msg.bits_per_point = 143U;
    msg.scale_factor = 0.4921822230358265;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0688037574622119;
    tmp_msg_0.beam_height = 0.9889806263942772;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-56, -45, -8, -65, -106, -109, -125, 19, -85, -77, -56, 66, -113, -25, 66, 76, -99, 71, -78, 121, -109, -14, 5, -72, -19, -10, -36, 81, 70, 71, 66, -47, 57, -9, -97, -27, -71, 95, 117, 104, -73, 40, -37, -20, -35, -1, 11, -84, -91, -72, 18, 9, -78, -104, 58, -24, -83, -14, -1, 14, 17, 39, -105, -126, 12, -50, 125, 54, -31, -54, 31, 92, 46, -13, 9, 66, 70, -86, -64, 63, -9, 74, 118, -58, 63, 28, -94, 94, 90, -63, 120, 12, 12, 70, 47, -32, -44, -87, -30, -22, 92, -7, -123, -88, -55, -121, 59, -16, 108, 124, -60, -58, -97, 89, 13, 1, -76, 53, -4, -110, 115, -101, 90, -37, -45, -33, -18, -113, 35, -46, -50, -76, -110, 62, -7, 33, -117, -72, 38, 105, 78, -128, -83};
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
    msg.setTimeStamp(0.569313337015264);
    msg.setSource(52716U);
    msg.setSourceEntity(94U);
    msg.setDestination(44765U);
    msg.setDestinationEntity(28U);
    msg.type = 177U;
    msg.frequency = 2325840660U;
    msg.min_range = 35577U;
    msg.max_range = 42688U;
    msg.bits_per_point = 254U;
    msg.scale_factor = 0.5640036578711045;
    const char tmp_msg_0[] = {22, -74, 65, 94, -122, 102, -2, 11, 67, 124, 68, -125, -19, 0, 67, 39, 59, -86, 31, -3, -37, 34, 99, -103, -104};
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
    msg.setTimeStamp(0.542620121030928);
    msg.setSource(43156U);
    msg.setSourceEntity(109U);
    msg.setDestination(30329U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.5773454776920909);
    msg.setSource(9387U);
    msg.setSourceEntity(229U);
    msg.setDestination(34661U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.44318031913442346);
    msg.setSource(65440U);
    msg.setSourceEntity(64U);
    msg.setDestination(6550U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.41873435321219266);
    msg.setSource(24577U);
    msg.setSourceEntity(209U);
    msg.setDestination(41230U);
    msg.setDestinationEntity(62U);
    msg.op = 226U;

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
    msg.setTimeStamp(0.17919313994340147);
    msg.setSource(24185U);
    msg.setSourceEntity(161U);
    msg.setDestination(13743U);
    msg.setDestinationEntity(212U);
    msg.op = 43U;

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
    msg.setTimeStamp(0.7417236361124454);
    msg.setSource(45210U);
    msg.setSourceEntity(19U);
    msg.setDestination(64401U);
    msg.setDestinationEntity(144U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.9539744500988099);
    msg.setSource(46218U);
    msg.setSourceEntity(127U);
    msg.setDestination(12757U);
    msg.setDestinationEntity(213U);
    msg.value = 0.8307454429191278;
    msg.confidence = 0.4014816181716466;
    msg.opmodes.assign("ZBQXBIJCTOSOVSQDUNFAXVOITFIMWWGIRDMLNJAGXFVTMNKXCVQEEQYELHWVNIMPCYBZTCLN");

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
    msg.setTimeStamp(0.05181167686726107);
    msg.setSource(61473U);
    msg.setSourceEntity(9U);
    msg.setDestination(51914U);
    msg.setDestinationEntity(45U);
    msg.value = 0.8288539851634757;
    msg.confidence = 0.8207419648238459;
    msg.opmodes.assign("UECYWRZGTGZAJDIHZRZYDQYPMNVRLRGAEEDYSQJEKVXTLDKIJKWELABEJWVSDVMCYYGAFDLYFXLODZGMNXTWFFWZRKTKHSNOONHAFNZQCVXCPOMSSIJTRITMJZFRXHMEHQGNPCGQBDSFDIQHRBCUQPJKBWXPAUJWUVOHIIPYUTVQCWHMBPLBNHBUPAVI");

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
    msg.setTimeStamp(0.7775136923448043);
    msg.setSource(6036U);
    msg.setSourceEntity(216U);
    msg.setDestination(59265U);
    msg.setDestinationEntity(62U);
    msg.value = 0.08360843422235797;
    msg.confidence = 0.8507249751815369;
    msg.opmodes.assign("AKALSHBOORKXJGSHEMUGGEVMXHEADQQZTYNDFGBVRQCBEYPKYKWZYJEMOLVAZMWMPGWJHOFXDNWIVSSCFEKPLKEAIPCPZFYIUXYEZVWMQJIBEA");

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
    msg.setTimeStamp(0.3175704090256912);
    msg.setSource(21224U);
    msg.setSourceEntity(159U);
    msg.setDestination(52277U);
    msg.setDestinationEntity(149U);
    msg.itow = 1745572645U;
    msg.lat = 0.8719732762739034;
    msg.lon = 0.6078541903953358;
    msg.height_ell = 0.7811581575362009;
    msg.height_sea = 0.3308126201376984;
    msg.hacc = 0.12403005068800599;
    msg.vacc = 0.537639259137154;
    msg.vel_n = 0.8985151684077465;
    msg.vel_e = 0.5102233014680256;
    msg.vel_d = 0.6192650089360592;
    msg.speed = 0.4274027102329061;
    msg.gspeed = 0.792721995404538;
    msg.heading = 0.28498764881824934;
    msg.sacc = 0.2709564411689881;
    msg.cacc = 0.6467180110529592;

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
    msg.setTimeStamp(0.7663270029310417);
    msg.setSource(44055U);
    msg.setSourceEntity(197U);
    msg.setDestination(7021U);
    msg.setDestinationEntity(226U);
    msg.itow = 3943629319U;
    msg.lat = 0.10639862396726452;
    msg.lon = 0.9146576824025823;
    msg.height_ell = 0.39379122625398677;
    msg.height_sea = 0.19792408422708885;
    msg.hacc = 0.5839394092513599;
    msg.vacc = 0.5410436957868395;
    msg.vel_n = 0.08663349049337954;
    msg.vel_e = 0.998037264095085;
    msg.vel_d = 0.7800250607140532;
    msg.speed = 0.8491946982354849;
    msg.gspeed = 0.01826830042892391;
    msg.heading = 0.5583849539996286;
    msg.sacc = 0.8394800907662742;
    msg.cacc = 0.5740053286009033;

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
    msg.setTimeStamp(0.477452093359666);
    msg.setSource(22088U);
    msg.setSourceEntity(105U);
    msg.setDestination(26164U);
    msg.setDestinationEntity(174U);
    msg.itow = 3009374056U;
    msg.lat = 0.9708109154022622;
    msg.lon = 0.4536285834312299;
    msg.height_ell = 0.07435255284665321;
    msg.height_sea = 0.929485916254849;
    msg.hacc = 0.023441348926745875;
    msg.vacc = 0.17409846788399386;
    msg.vel_n = 0.9950146888276089;
    msg.vel_e = 0.03434632004764293;
    msg.vel_d = 0.4698089682303599;
    msg.speed = 0.890571266091914;
    msg.gspeed = 0.8374388894174789;
    msg.heading = 0.9603186631896137;
    msg.sacc = 0.2596856935548205;
    msg.cacc = 0.9555716240217164;

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
    msg.setTimeStamp(0.8797746918343301);
    msg.setSource(14081U);
    msg.setSourceEntity(217U);
    msg.setDestination(65060U);
    msg.setDestinationEntity(192U);
    msg.id = 83U;
    msg.value = 0.9046211657077549;

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
    msg.setTimeStamp(0.25157284854584916);
    msg.setSource(20191U);
    msg.setSourceEntity(109U);
    msg.setDestination(37279U);
    msg.setDestinationEntity(62U);
    msg.id = 141U;
    msg.value = 0.022930029181127853;

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
    msg.setTimeStamp(0.2615955441040412);
    msg.setSource(31844U);
    msg.setSourceEntity(111U);
    msg.setDestination(2220U);
    msg.setDestinationEntity(187U);
    msg.id = 63U;
    msg.value = 0.5478995159408959;

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
    msg.setTimeStamp(0.07547086174731588);
    msg.setSource(10816U);
    msg.setSourceEntity(176U);
    msg.setDestination(32879U);
    msg.setDestinationEntity(182U);
    msg.x = 0.12036932347921059;
    msg.y = 0.6720528451501058;
    msg.z = 0.4218411193111101;
    msg.phi = 0.7674324583156515;
    msg.theta = 0.4577791942697462;
    msg.psi = 0.8497728102987941;

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
    msg.setTimeStamp(0.41762078148080395);
    msg.setSource(47759U);
    msg.setSourceEntity(18U);
    msg.setDestination(16514U);
    msg.setDestinationEntity(126U);
    msg.x = 0.7955089145104182;
    msg.y = 0.8889908574409295;
    msg.z = 0.7078429231048419;
    msg.phi = 0.20970583860919245;
    msg.theta = 0.6947256670205727;
    msg.psi = 0.2575653010632888;

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
    msg.setTimeStamp(0.5745100996086171);
    msg.setSource(22365U);
    msg.setSourceEntity(65U);
    msg.setDestination(19055U);
    msg.setDestinationEntity(4U);
    msg.x = 0.8466724730177495;
    msg.y = 0.8920987666763093;
    msg.z = 0.9650046720908799;
    msg.phi = 0.43196142611156874;
    msg.theta = 0.9651340726004236;
    msg.psi = 0.8567893229764375;

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
    msg.setTimeStamp(0.8950424992146097);
    msg.setSource(53302U);
    msg.setSourceEntity(41U);
    msg.setDestination(55535U);
    msg.setDestinationEntity(247U);
    msg.beam_width = 0.6242670366636407;
    msg.beam_height = 0.5368651379109917;

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
    msg.setTimeStamp(0.3697100442741611);
    msg.setSource(18316U);
    msg.setSourceEntity(247U);
    msg.setDestination(36666U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.3589688783142141;
    msg.beam_height = 0.3036755676011911;

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
    msg.setTimeStamp(0.7143876842735629);
    msg.setSource(25625U);
    msg.setSourceEntity(190U);
    msg.setDestination(30122U);
    msg.setDestinationEntity(4U);
    msg.beam_width = 0.6048069138834676;
    msg.beam_height = 0.22665206581736397;

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
    msg.setTimeStamp(0.123648259599903);
    msg.setSource(24003U);
    msg.setSourceEntity(38U);
    msg.setDestination(20702U);
    msg.setDestinationEntity(43U);
    msg.sane = 123U;

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
    msg.setTimeStamp(0.5739744616006169);
    msg.setSource(35822U);
    msg.setSourceEntity(222U);
    msg.setDestination(24755U);
    msg.setDestinationEntity(233U);
    msg.sane = 217U;

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
    msg.setTimeStamp(0.5393274714126353);
    msg.setSource(39119U);
    msg.setSourceEntity(149U);
    msg.setDestination(18401U);
    msg.setDestinationEntity(154U);
    msg.sane = 138U;

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
    msg.setTimeStamp(0.32275180347553833);
    msg.setSource(972U);
    msg.setSourceEntity(9U);
    msg.setDestination(36488U);
    msg.setDestinationEntity(91U);
    msg.value = 0.5932627155914348;

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
    msg.setTimeStamp(0.49366014146311277);
    msg.setSource(64328U);
    msg.setSourceEntity(249U);
    msg.setDestination(14375U);
    msg.setDestinationEntity(222U);
    msg.value = 0.5234889443554711;

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
    msg.setTimeStamp(0.9516883646562692);
    msg.setSource(8505U);
    msg.setSourceEntity(104U);
    msg.setDestination(41980U);
    msg.setDestinationEntity(86U);
    msg.value = 0.6472967286328513;

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
    msg.setTimeStamp(0.9073601499153781);
    msg.setSource(37716U);
    msg.setSourceEntity(17U);
    msg.setDestination(64683U);
    msg.setDestinationEntity(33U);
    msg.value = 0.8563688292658924;

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
    msg.setTimeStamp(0.9700905428850235);
    msg.setSource(51816U);
    msg.setSourceEntity(118U);
    msg.setDestination(50004U);
    msg.setDestinationEntity(62U);
    msg.value = 0.7932564393407063;

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
    msg.setTimeStamp(0.17356310901474925);
    msg.setSource(43251U);
    msg.setSourceEntity(74U);
    msg.setDestination(26014U);
    msg.setDestinationEntity(59U);
    msg.value = 0.6557944118951837;

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
    msg.setTimeStamp(0.14756129531998197);
    msg.setSource(764U);
    msg.setSourceEntity(80U);
    msg.setDestination(29866U);
    msg.setDestinationEntity(69U);
    msg.value = 0.08970097723865489;

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
    msg.setTimeStamp(0.12711553284546795);
    msg.setSource(38003U);
    msg.setSourceEntity(91U);
    msg.setDestination(32479U);
    msg.setDestinationEntity(98U);
    msg.value = 0.7732601358265653;

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
    msg.setTimeStamp(0.7347183278785361);
    msg.setSource(10841U);
    msg.setSourceEntity(69U);
    msg.setDestination(22677U);
    msg.setDestinationEntity(184U);
    msg.value = 0.06422641837707921;

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
    msg.setTimeStamp(0.8851961946410523);
    msg.setSource(23116U);
    msg.setSourceEntity(96U);
    msg.setDestination(30808U);
    msg.setDestinationEntity(126U);
    msg.value = 0.6982790991973308;

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
    msg.setTimeStamp(0.7714525582350943);
    msg.setSource(43615U);
    msg.setSourceEntity(80U);
    msg.setDestination(33111U);
    msg.setDestinationEntity(223U);
    msg.value = 0.8548611449998962;

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
    msg.setTimeStamp(0.5652197108485498);
    msg.setSource(97U);
    msg.setSourceEntity(180U);
    msg.setDestination(15661U);
    msg.setDestinationEntity(60U);
    msg.value = 0.08667933263167704;

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
    msg.setTimeStamp(0.015018424844958078);
    msg.setSource(48126U);
    msg.setSourceEntity(52U);
    msg.setDestination(61820U);
    msg.setDestinationEntity(240U);
    msg.value = 0.8165727584397676;

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
    msg.setTimeStamp(0.19094198729494116);
    msg.setSource(27997U);
    msg.setSourceEntity(208U);
    msg.setDestination(690U);
    msg.setDestinationEntity(93U);
    msg.value = 0.6113096755280462;

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
    msg.setTimeStamp(0.03171563206232042);
    msg.setSource(7606U);
    msg.setSourceEntity(103U);
    msg.setDestination(61205U);
    msg.setDestinationEntity(185U);
    msg.value = 0.44004346568867614;

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
    msg.setTimeStamp(0.7233468906391813);
    msg.setSource(1862U);
    msg.setSourceEntity(198U);
    msg.setDestination(10817U);
    msg.setDestinationEntity(247U);
    msg.value = 0.034777719276174235;

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
    msg.setTimeStamp(0.29984181641177343);
    msg.setSource(27197U);
    msg.setSourceEntity(63U);
    msg.setDestination(23720U);
    msg.setDestinationEntity(4U);
    msg.value = 0.4837140328421372;

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
    msg.setTimeStamp(0.27151903548767975);
    msg.setSource(65359U);
    msg.setSourceEntity(146U);
    msg.setDestination(33606U);
    msg.setDestinationEntity(145U);
    msg.value = 0.21691304963698188;

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
    msg.setTimeStamp(0.5063285333805961);
    msg.setSource(42887U);
    msg.setSourceEntity(87U);
    msg.setDestination(19123U);
    msg.setDestinationEntity(238U);
    msg.value = 0.7400378413958298;

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
    msg.setTimeStamp(0.3710038111152454);
    msg.setSource(63437U);
    msg.setSourceEntity(105U);
    msg.setDestination(24452U);
    msg.setDestinationEntity(138U);
    msg.value = 0.06791577880103872;

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
    msg.setTimeStamp(0.8107688341120136);
    msg.setSource(37744U);
    msg.setSourceEntity(51U);
    msg.setDestination(58072U);
    msg.setDestinationEntity(151U);
    msg.value = 0.9080612288325838;

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
    msg.setTimeStamp(0.5025442541247414);
    msg.setSource(18904U);
    msg.setSourceEntity(137U);
    msg.setDestination(34598U);
    msg.setDestinationEntity(101U);
    msg.value = 0.23365850107311725;

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
    msg.setTimeStamp(0.8736739354741543);
    msg.setSource(27279U);
    msg.setSourceEntity(207U);
    msg.setDestination(8361U);
    msg.setDestinationEntity(11U);
    msg.value = 0.7815303307098721;

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
    msg.setTimeStamp(0.39528234665859985);
    msg.setSource(56549U);
    msg.setSourceEntity(158U);
    msg.setDestination(59497U);
    msg.setDestinationEntity(180U);
    msg.value = 0.5224344702076914;

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
    msg.setTimeStamp(0.880418974175211);
    msg.setSource(62252U);
    msg.setSourceEntity(40U);
    msg.setDestination(23745U);
    msg.setDestinationEntity(91U);
    msg.validity = 34942U;
    msg.type = 156U;
    msg.tow = 1420241105U;
    msg.base_lat = 0.6321861558216758;
    msg.base_lon = 0.5251208969259376;
    msg.base_height = 0.7567723800817512;
    msg.n = 0.77538542652889;
    msg.e = 0.7800562789849861;
    msg.d = 0.7205822670533231;
    msg.v_n = 0.19300809266421215;
    msg.v_e = 0.08202379858734377;
    msg.v_d = 0.38999669466932396;
    msg.satellites = 15U;
    msg.iar_hyp = 25387U;
    msg.iar_ratio = 0.5612529575971301;

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
    msg.setTimeStamp(0.812081855033365);
    msg.setSource(38630U);
    msg.setSourceEntity(251U);
    msg.setDestination(54291U);
    msg.setDestinationEntity(94U);
    msg.validity = 15284U;
    msg.type = 3U;
    msg.tow = 1933741209U;
    msg.base_lat = 0.5624157259385258;
    msg.base_lon = 0.9808514057477831;
    msg.base_height = 0.07159051909447967;
    msg.n = 0.7441671130496441;
    msg.e = 0.7163956497924688;
    msg.d = 0.5028331075343995;
    msg.v_n = 0.6804398688719213;
    msg.v_e = 0.778889114490975;
    msg.v_d = 0.928132316874016;
    msg.satellites = 149U;
    msg.iar_hyp = 24142U;
    msg.iar_ratio = 0.7891599967765807;

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
    msg.setTimeStamp(0.642864804069221);
    msg.setSource(13631U);
    msg.setSourceEntity(254U);
    msg.setDestination(53998U);
    msg.setDestinationEntity(5U);
    msg.validity = 57845U;
    msg.type = 118U;
    msg.tow = 1344406545U;
    msg.base_lat = 0.3142773543745171;
    msg.base_lon = 0.42853230567988976;
    msg.base_height = 0.021820452334739393;
    msg.n = 0.19452520285688157;
    msg.e = 0.6693058362753587;
    msg.d = 0.8557286236641372;
    msg.v_n = 0.5840070539880746;
    msg.v_e = 0.6734533329864727;
    msg.v_d = 0.7985515559679601;
    msg.satellites = 85U;
    msg.iar_hyp = 38640U;
    msg.iar_ratio = 0.4543305412718023;

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
    msg.setTimeStamp(0.8195340543672535);
    msg.setSource(3345U);
    msg.setSourceEntity(225U);
    msg.setDestination(4619U);
    msg.setDestinationEntity(48U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.26968011340419895;
    tmp_msg_0.lon = 0.5563214202785882;
    tmp_msg_0.height = 0.6584755367884124;
    tmp_msg_0.x = 0.31537571592036895;
    tmp_msg_0.y = 0.806836768402385;
    tmp_msg_0.z = 0.19136184005681123;
    tmp_msg_0.phi = 0.2546747470775914;
    tmp_msg_0.theta = 0.8341516870256753;
    tmp_msg_0.psi = 0.9630709478383209;
    tmp_msg_0.u = 0.6351740261004273;
    tmp_msg_0.v = 0.37476200119086245;
    tmp_msg_0.w = 0.39162845476184704;
    tmp_msg_0.vx = 0.5918422940672518;
    tmp_msg_0.vy = 0.6147151256688775;
    tmp_msg_0.vz = 0.32628989311258394;
    tmp_msg_0.p = 0.5351273900217997;
    tmp_msg_0.q = 0.4829247029824273;
    tmp_msg_0.r = 0.9178213262236905;
    tmp_msg_0.depth = 0.14998400638523723;
    tmp_msg_0.alt = 0.2572142182185402;
    msg.state.set(tmp_msg_0);
    msg.type = 10U;

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
    msg.setTimeStamp(0.7645887863268832);
    msg.setSource(4524U);
    msg.setSourceEntity(205U);
    msg.setDestination(49883U);
    msg.setDestinationEntity(59U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9806044173534174;
    tmp_msg_0.lon = 0.07467505978195033;
    tmp_msg_0.height = 0.5009440269434787;
    tmp_msg_0.x = 0.6702082470898608;
    tmp_msg_0.y = 0.41066795931433786;
    tmp_msg_0.z = 0.44523101892467254;
    tmp_msg_0.phi = 0.4837859990764627;
    tmp_msg_0.theta = 0.9369570150827934;
    tmp_msg_0.psi = 0.11149002594602353;
    tmp_msg_0.u = 0.6533742079963474;
    tmp_msg_0.v = 0.4989654560782374;
    tmp_msg_0.w = 0.5538093468513366;
    tmp_msg_0.vx = 0.560980271138071;
    tmp_msg_0.vy = 0.17221928366015238;
    tmp_msg_0.vz = 0.3053030468310389;
    tmp_msg_0.p = 0.15779592706407897;
    tmp_msg_0.q = 0.544714471059267;
    tmp_msg_0.r = 0.14661606460890864;
    tmp_msg_0.depth = 0.029333965643587145;
    tmp_msg_0.alt = 0.7188273425050361;
    msg.state.set(tmp_msg_0);
    msg.type = 190U;

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
    msg.setTimeStamp(0.8748209043082439);
    msg.setSource(28958U);
    msg.setSourceEntity(207U);
    msg.setDestination(11769U);
    msg.setDestinationEntity(195U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.13883727725849682;
    tmp_msg_0.lon = 0.8226268032778707;
    tmp_msg_0.height = 0.4497600222987441;
    tmp_msg_0.x = 0.7497013511817515;
    tmp_msg_0.y = 0.909857607391495;
    tmp_msg_0.z = 0.3001254007582037;
    tmp_msg_0.phi = 0.24733070592379747;
    tmp_msg_0.theta = 0.2430794351083405;
    tmp_msg_0.psi = 0.8529843356602698;
    tmp_msg_0.u = 0.07645966347909439;
    tmp_msg_0.v = 0.34774995758083105;
    tmp_msg_0.w = 0.7852615127222027;
    tmp_msg_0.vx = 0.15159350759435797;
    tmp_msg_0.vy = 0.31853252699427737;
    tmp_msg_0.vz = 0.7775254341933836;
    tmp_msg_0.p = 0.08508252025264162;
    tmp_msg_0.q = 0.4910276472089874;
    tmp_msg_0.r = 0.22415700802194227;
    tmp_msg_0.depth = 0.002210430382055484;
    tmp_msg_0.alt = 0.474451287946133;
    msg.state.set(tmp_msg_0);
    msg.type = 219U;

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
    msg.setTimeStamp(0.17834369862913457);
    msg.setSource(11484U);
    msg.setSourceEntity(224U);
    msg.setDestination(2438U);
    msg.setDestinationEntity(136U);
    msg.value = 0.2692396430363564;

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
    msg.setTimeStamp(0.20460558615042357);
    msg.setSource(29498U);
    msg.setSourceEntity(197U);
    msg.setDestination(25574U);
    msg.setDestinationEntity(100U);
    msg.value = 0.9408140442657038;

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
    msg.setTimeStamp(0.9029383902579643);
    msg.setSource(42529U);
    msg.setSourceEntity(239U);
    msg.setDestination(18413U);
    msg.setDestinationEntity(249U);
    msg.value = 0.4534798691638463;

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
    msg.setTimeStamp(0.6229755625955177);
    msg.setSource(52668U);
    msg.setSourceEntity(59U);
    msg.setDestination(46965U);
    msg.setDestinationEntity(22U);
    msg.value = 0.008849417826258588;

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
    msg.setTimeStamp(0.5636856511415632);
    msg.setSource(18537U);
    msg.setSourceEntity(166U);
    msg.setDestination(28373U);
    msg.setDestinationEntity(163U);
    msg.value = 0.4170654114166289;

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
    msg.setTimeStamp(0.1275022951941901);
    msg.setSource(51770U);
    msg.setSourceEntity(146U);
    msg.setDestination(36148U);
    msg.setDestinationEntity(75U);
    msg.value = 0.3338287063891371;

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
    msg.setTimeStamp(0.1849958575913635);
    msg.setSource(31178U);
    msg.setSourceEntity(65U);
    msg.setDestination(3054U);
    msg.setDestinationEntity(156U);
    msg.value = 0.4519420219287251;

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
    msg.setTimeStamp(0.9518169969991469);
    msg.setSource(42845U);
    msg.setSourceEntity(227U);
    msg.setDestination(58212U);
    msg.setDestinationEntity(13U);
    msg.value = 0.23954028699793595;

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
    msg.setTimeStamp(0.27629973796178475);
    msg.setSource(31608U);
    msg.setSourceEntity(108U);
    msg.setDestination(61996U);
    msg.setDestinationEntity(171U);
    msg.value = 0.5595947911931433;

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
    msg.setTimeStamp(0.7158225922680225);
    msg.setSource(44766U);
    msg.setSourceEntity(220U);
    msg.setDestination(47462U);
    msg.setDestinationEntity(67U);
    msg.value = 0.7127218158439005;

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
    msg.setTimeStamp(0.8023749872946461);
    msg.setSource(36331U);
    msg.setSourceEntity(93U);
    msg.setDestination(53636U);
    msg.setDestinationEntity(15U);
    msg.value = 0.2561272479670873;

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
    msg.setTimeStamp(0.3083918496214181);
    msg.setSource(4041U);
    msg.setSourceEntity(153U);
    msg.setDestination(17814U);
    msg.setDestinationEntity(188U);
    msg.value = 0.12397056236986426;

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
    msg.setTimeStamp(0.21052886859062603);
    msg.setSource(22599U);
    msg.setSourceEntity(174U);
    msg.setDestination(29100U);
    msg.setDestinationEntity(128U);
    msg.value = 0.8543704242853182;

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
    msg.setTimeStamp(0.6493878830148081);
    msg.setSource(18253U);
    msg.setSourceEntity(13U);
    msg.setDestination(61396U);
    msg.setDestinationEntity(82U);
    msg.value = 0.5684298007762072;

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
    msg.setTimeStamp(0.5142822555128465);
    msg.setSource(31605U);
    msg.setSourceEntity(136U);
    msg.setDestination(8409U);
    msg.setDestinationEntity(239U);
    msg.value = 0.6956133264556617;

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
    msg.setTimeStamp(0.44659120206235503);
    msg.setSource(34167U);
    msg.setSourceEntity(242U);
    msg.setDestination(11291U);
    msg.setDestinationEntity(106U);
    msg.id = 47U;
    msg.zoom = 18U;
    msg.action = 118U;

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
    msg.setTimeStamp(0.2455101450617182);
    msg.setSource(18188U);
    msg.setSourceEntity(55U);
    msg.setDestination(41157U);
    msg.setDestinationEntity(120U);
    msg.id = 198U;
    msg.zoom = 105U;
    msg.action = 146U;

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
    msg.setTimeStamp(0.7531153378456968);
    msg.setSource(42768U);
    msg.setSourceEntity(99U);
    msg.setDestination(1122U);
    msg.setDestinationEntity(86U);
    msg.id = 86U;
    msg.zoom = 85U;
    msg.action = 152U;

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
    msg.setTimeStamp(0.8454531001975293);
    msg.setSource(61534U);
    msg.setSourceEntity(40U);
    msg.setDestination(33840U);
    msg.setDestinationEntity(15U);
    msg.id = 231U;
    msg.value = 0.3528289608681022;

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
    msg.setTimeStamp(0.46130525358568475);
    msg.setSource(55054U);
    msg.setSourceEntity(240U);
    msg.setDestination(24262U);
    msg.setDestinationEntity(126U);
    msg.id = 152U;
    msg.value = 0.3683853892979517;

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
    msg.setTimeStamp(0.4838761349587518);
    msg.setSource(1831U);
    msg.setSourceEntity(99U);
    msg.setDestination(39426U);
    msg.setDestinationEntity(224U);
    msg.id = 21U;
    msg.value = 0.6332259193221653;

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
    msg.setTimeStamp(0.3351815235795088);
    msg.setSource(22642U);
    msg.setSourceEntity(8U);
    msg.setDestination(44222U);
    msg.setDestinationEntity(117U);
    msg.id = 213U;
    msg.value = 0.8927656524843961;

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
    msg.setTimeStamp(0.19994060704547922);
    msg.setSource(42695U);
    msg.setSourceEntity(103U);
    msg.setDestination(32668U);
    msg.setDestinationEntity(87U);
    msg.id = 9U;
    msg.value = 0.32812400859357727;

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
    msg.setTimeStamp(0.9825332619581615);
    msg.setSource(61035U);
    msg.setSourceEntity(226U);
    msg.setDestination(22497U);
    msg.setDestinationEntity(206U);
    msg.id = 59U;
    msg.value = 0.5731406526297673;

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
    msg.setTimeStamp(0.9040406746511093);
    msg.setSource(10209U);
    msg.setSourceEntity(32U);
    msg.setDestination(2297U);
    msg.setDestinationEntity(147U);
    msg.id = 69U;
    msg.angle = 0.8742423792590466;

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
    msg.setTimeStamp(0.07619588257614529);
    msg.setSource(22685U);
    msg.setSourceEntity(158U);
    msg.setDestination(56472U);
    msg.setDestinationEntity(28U);
    msg.id = 14U;
    msg.angle = 0.2172428545734324;

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
    msg.setTimeStamp(0.42713459715540214);
    msg.setSource(33174U);
    msg.setSourceEntity(1U);
    msg.setDestination(55231U);
    msg.setDestinationEntity(231U);
    msg.id = 79U;
    msg.angle = 0.4740484449764004;

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
    msg.setTimeStamp(0.7981404729942494);
    msg.setSource(5370U);
    msg.setSourceEntity(218U);
    msg.setDestination(56725U);
    msg.setDestinationEntity(163U);
    msg.op = 216U;
    msg.actions.assign("USUHYEUWRBVALRGNNCTHPWCLNFXEGWIFSKLEGNEFKYLOQDPVCVDMGTAMQFCIHAHXVJQYHOFNUNMOPIKTOWWJDJUSNIIDGUXSVSCCAIXGOZKDLNBRSUDXCLAVWATCCIGXYQRSPMJJHKJMKYXRYAZZKZWQIHCTBPPNPZZQRUBTRFHAJVOIRWGGKBMOZJKEEO");

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
    msg.setTimeStamp(0.8938633143879036);
    msg.setSource(46023U);
    msg.setSourceEntity(168U);
    msg.setDestination(10621U);
    msg.setDestinationEntity(19U);
    msg.op = 0U;
    msg.actions.assign("ZQODZJXAJKZBVMYFBNCQNSVCHSEBKVPCLPJDRSAOHPBVDEUZVUXLBWBICFFUKQQIGUTPOCEMATTLGGZWITUHRZTBFFTERDNSOKVNYXDGBODGRCGHWTBLMQYJJEPISIIVOAGEANDLMFFGHQQDWTAQRUYMOJCWQAPKSRHXXIEPWMSAMNSLELAOEYNWEFFGZJWCRHKBYZJPZFHYYLTXVYZVMPXQHUISXSPRIJHKMDGCIKWNYRKNMDULJTCXWVOON");

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
    msg.setTimeStamp(0.28947660383835827);
    msg.setSource(41696U);
    msg.setSourceEntity(243U);
    msg.setDestination(23947U);
    msg.setDestinationEntity(7U);
    msg.op = 132U;
    msg.actions.assign("FLYBNLMVWPCDACJAGJXMASHSEETIEJXEVPSNGWNDGJSUZBUUKDAPXDOVJUFMWHTFRFWYTKJVGPVOJURQJRVAJUQZTRSGRSKAHZGYHBFUKEUKMOIADIPFLHAGEQWLXHXBFRLDIIKDPNGXCBWMQLGMQDEKNOOSZIYAZYRLJBTQZNVROTVDNYNFYHARLEWQIKMZXCYBZPUWFQHCFIXNIREDSTOCIZYCVSG");

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
    msg.setTimeStamp(0.20639506188886148);
    msg.setSource(41614U);
    msg.setSourceEntity(219U);
    msg.setDestination(14017U);
    msg.setDestinationEntity(243U);
    msg.actions.assign("MJBCLETNFTODBCBZJFDCSZIHAULKPCLLZGZKYMIHPOXYRZKFUAQVVDSSADZWEIQGNPBNSGXCRYYRXWRCDASELENPXRXUAPVHXRMFT");

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
    msg.setTimeStamp(0.10860894576223701);
    msg.setSource(33527U);
    msg.setSourceEntity(209U);
    msg.setDestination(31663U);
    msg.setDestinationEntity(65U);
    msg.actions.assign("SBCIPZJDDCFVYTCWLSNEXXAQJCZRQBGTIXUEAHHBJWOKCNTNDOAAXGGHQKVUDOBSICLJYPSFHMVOHNYZVQHQBSQEIWHHSXGYMTJKFTI");

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
    msg.setTimeStamp(0.8118013181883176);
    msg.setSource(30304U);
    msg.setSourceEntity(244U);
    msg.setDestination(34053U);
    msg.setDestinationEntity(133U);
    msg.actions.assign("WLTSYTRYXOTAMUTWAAWNIOWESLGHFDBHBWXRPVUXFFMZJEYJJULJKBDUJGBZJFUTYXCHPYRMGWVLVGPTCSPTLGOMBPWZQOSUADPVJOUZ");

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
    msg.setTimeStamp(0.9081479371139468);
    msg.setSource(5834U);
    msg.setSourceEntity(224U);
    msg.setDestination(64015U);
    msg.setDestinationEntity(195U);
    msg.button = 32U;
    msg.value = 87U;

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
    msg.setTimeStamp(0.17265452182359398);
    msg.setSource(59010U);
    msg.setSourceEntity(71U);
    msg.setDestination(7790U);
    msg.setDestinationEntity(128U);
    msg.button = 48U;
    msg.value = 4U;

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
    msg.setTimeStamp(0.48322886381530084);
    msg.setSource(9168U);
    msg.setSourceEntity(184U);
    msg.setDestination(21402U);
    msg.setDestinationEntity(179U);
    msg.button = 225U;
    msg.value = 173U;

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
    msg.setTimeStamp(0.9575579508353336);
    msg.setSource(15025U);
    msg.setSourceEntity(227U);
    msg.setDestination(57336U);
    msg.setDestinationEntity(86U);
    msg.op = 161U;
    msg.text.assign("GFJSQXPRYJXOCWIHDYVYCAIWOPTUKEOFKOZWRTYGCDKRQRJTIYUXAJFEPSNKZKDMRXTSFUPPCZVZQVUXSCRXCAYVEBSE");

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
    msg.setTimeStamp(0.9554622951341931);
    msg.setSource(62701U);
    msg.setSourceEntity(126U);
    msg.setDestination(3711U);
    msg.setDestinationEntity(124U);
    msg.op = 237U;
    msg.text.assign("NJDQIAYSEFSWICSKRNIFXOCTHZRNGAVEWAGYHCWSVUFZPLILTTLYYWBBDXAHQN");

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
    msg.setTimeStamp(0.23780248278997618);
    msg.setSource(25886U);
    msg.setSourceEntity(64U);
    msg.setDestination(13655U);
    msg.setDestinationEntity(238U);
    msg.op = 4U;
    msg.text.assign("CFFBYMKBZLHISFSMXCNSNQINVDJXNFGTZKCYQULSUAEGNHOBIYRMGPITRUOPFVBCVGLWMYVPHEZKXTZJOGDBNLOFKFNSQOLPUFOCPXRXYUNQEUSAICZDETKJYKMKWKLLQICJEPOXUYWZAWJDQXTPUQBIZRBCRHDRAKOECX");

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
    msg.setTimeStamp(0.07999563095548445);
    msg.setSource(21678U);
    msg.setSourceEntity(56U);
    msg.setDestination(52694U);
    msg.setDestinationEntity(172U);
    msg.op = 154U;
    msg.time_remain = 0.9616752354056961;
    msg.sched_time = 0.3326774896846031;

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
    msg.setTimeStamp(0.8843121182756934);
    msg.setSource(56452U);
    msg.setSourceEntity(130U);
    msg.setDestination(8685U);
    msg.setDestinationEntity(3U);
    msg.op = 241U;
    msg.time_remain = 0.5627053189961067;
    msg.sched_time = 0.20306662986930435;

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
    msg.setTimeStamp(0.0094439139014868);
    msg.setSource(38878U);
    msg.setSourceEntity(109U);
    msg.setDestination(24980U);
    msg.setDestinationEntity(243U);
    msg.op = 146U;
    msg.time_remain = 0.20864019651728338;
    msg.sched_time = 0.8881643703402169;

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
    msg.setTimeStamp(0.15512185651929056);
    msg.setSource(1566U);
    msg.setSourceEntity(71U);
    msg.setDestination(21707U);
    msg.setDestinationEntity(193U);
    msg.name.assign("VUFNUMVXDYAWKTSDGYUICYWIREILYEGTXZCHQKJAWEBEUNJDXEOHVASMJTPDQXRNNKFLFCVDULESHPEFCKFDPCZRABGAIPQGGHVSPHEJXJQYTUPNMORRNWKDQTTTLBGOOZANMVRAQPGVDIINHBSOZMBUBJUMHWWNJLFXTVXOOULIRZBMYTRXNJFLSRQD");
    msg.op = 28U;
    msg.sched_time = 0.3606346149074201;

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
    msg.setTimeStamp(0.28060182291199964);
    msg.setSource(49834U);
    msg.setSourceEntity(240U);
    msg.setDestination(26310U);
    msg.setDestinationEntity(114U);
    msg.name.assign("MJDPQFJUEZOMSWOFRELKEZQEMRTFEIQIXFKSITFIABJISFPLIABCSGMFIXTWNUCKBRHHFKKRTZ");
    msg.op = 10U;
    msg.sched_time = 0.6284362072272596;

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
    msg.setTimeStamp(0.23439409080306495);
    msg.setSource(11495U);
    msg.setSourceEntity(39U);
    msg.setDestination(7363U);
    msg.setDestinationEntity(6U);
    msg.name.assign("JYWSWCAHEAZWYIPQVLDXGRVTSDYWQOVLOMQANKBBDAALHTUVKARODCCDKILWFIGKXSZUYIWFPLCNENQWFXPFHMLKHXDGHVZCTZGAVTJNPCYOUNECWXUPBUPBZUKYSMATYPRRHLEGSZRXHUTHMGBRFYDMMCMTOMBGISSROILOJKMULUYNRYFPWMOCGFCGEJNSQDJZEXEZQAJXNTOENDFSZJJFGVXTBHBIJVB");
    msg.op = 98U;
    msg.sched_time = 0.6852521440578921;

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
    msg.setTimeStamp(0.35164889319186476);
    msg.setSource(8334U);
    msg.setSourceEntity(132U);
    msg.setDestination(30677U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.9785772220224526);
    msg.setSource(9472U);
    msg.setSourceEntity(61U);
    msg.setDestination(4182U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.39362212332234336);
    msg.setSource(30232U);
    msg.setSourceEntity(135U);
    msg.setDestination(64758U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.49443088802835566);
    msg.setSource(45551U);
    msg.setSourceEntity(173U);
    msg.setDestination(25624U);
    msg.setDestinationEntity(225U);
    msg.name.assign("OSGYPSFJVZTVQLNKUECAGCLMCNCQ");
    msg.state = 41U;

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
    msg.setTimeStamp(0.728680345389558);
    msg.setSource(59890U);
    msg.setSourceEntity(38U);
    msg.setDestination(54607U);
    msg.setDestinationEntity(60U);
    msg.name.assign("BZYFZITQQPLKDCUSVCRKLNYFMRZNNOBSFQBBIIYFSI");
    msg.state = 43U;

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
    msg.setTimeStamp(0.5998296263783626);
    msg.setSource(38984U);
    msg.setSourceEntity(115U);
    msg.setDestination(7000U);
    msg.setDestinationEntity(128U);
    msg.name.assign("RUFQCDZUBEOKPQCXYQNULWFDXQZPBFUKQIGFADEBNQDBLFKBIEYCDOZGHYHIASUDRNFMGTVWMVEXAYLLDUVYLESWKHPBOINZFRWOUATAMWQPINCSER");
    msg.state = 215U;

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
    msg.setTimeStamp(0.28418585126636753);
    msg.setSource(64105U);
    msg.setSourceEntity(51U);
    msg.setDestination(11077U);
    msg.setDestinationEntity(216U);
    msg.name.assign("AFGNKQVNUQMMHEDSDBYSOWJSZPSZKBNRXQBRIXFFMXRPSOUZYFOKXIAGFYFCDVCBEFRVOHFLANALETUHUQYMVBMATDOJTOHWNTPJMCRHQWOMXKEKYVZOIWLHTVGUMNICSJQJGWCQXWYDSFGLESRHTQIGLCCKMZPDWRIUODYCNUAQGPBZNHDPUPJNXJIVWRNKRLTOHCAG");
    msg.value = 169U;

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
    msg.setTimeStamp(0.44783221387626315);
    msg.setSource(23075U);
    msg.setSourceEntity(193U);
    msg.setDestination(58921U);
    msg.setDestinationEntity(54U);
    msg.name.assign("TJUCRCKXDYPKPCABBYPJGWTZWHLWSJKNLDMTJYFOVERUMGKGABLJMIMAGXAUVITEOVRCWQPULWIITPWIQYBZHTKDYQIFZFWZQNYUULINSOQSUWECZXGXACYMFCVHSPHLEQHSVPNSBCAFMEAUZTNDFLNXLDZQWLEHASJGFRNKDOBUHUJRKDOGDLVPVBRSIFNPENFTOORBOSRBZ");
    msg.value = 105U;

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
    msg.setTimeStamp(0.5105043775100896);
    msg.setSource(18171U);
    msg.setSourceEntity(20U);
    msg.setDestination(24381U);
    msg.setDestinationEntity(16U);
    msg.name.assign("ISMLVXBTFPDSXFLKZFZJZ");
    msg.value = 169U;

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
    msg.setTimeStamp(0.8447818547944066);
    msg.setSource(57924U);
    msg.setSourceEntity(218U);
    msg.setDestination(9014U);
    msg.setDestinationEntity(217U);
    msg.name.assign("KVRSTZQZBLDFUPTYBDNYXCPJBIHRVSOMALWNAWGYGIBDJOVHTISZNJRWRLUBNXGEKYUEETPMPDUJNLVZQKSRUG");

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
    msg.setTimeStamp(0.6101313522833895);
    msg.setSource(48811U);
    msg.setSourceEntity(93U);
    msg.setDestination(415U);
    msg.setDestinationEntity(32U);
    msg.name.assign("BDEXQYXEIVHLYOVBFNWQOJQPPLEUDOZMVGSJUNUCKBNLCDMZBKBKFTFTRHISUFCAEGXDKOWVHRYBVWCLKXZMSTSNXBJRIKAPCUOHPLTXRYDHIKIVFTGJZWDCYJODQWGKMRPGQRBQXJENPQTCDYBLYLZCEIVZRGPOOATNZBJVVTNXIMPVHXM");

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
    msg.setTimeStamp(0.862896065633005);
    msg.setSource(9001U);
    msg.setSourceEntity(49U);
    msg.setDestination(2561U);
    msg.setDestinationEntity(240U);
    msg.name.assign("INFKTZHOVWTIQBRLGQBUDJLXYKAAMCVZKFIEPUOXRCOZZWGSSBPTKJYIDSBMGUNXMXRVLLXXDCTXJZYCTAPYTBILPVCPVMQCAEWOTEORMYPXWHBZFACQJAVHCEGNJQFQSWCWXRFWHAUPYKMNDLKBKLYMVHRGDGZSCHSFWADSQUYHIDNFBDZSWNTJRAZNFTEKLYYUBGERQGMHULNVDU");

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
    msg.setTimeStamp(0.32902521316694167);
    msg.setSource(49065U);
    msg.setSourceEntity(162U);
    msg.setDestination(24692U);
    msg.setDestinationEntity(21U);
    msg.name.assign("WSVDPHCLZUCYVBVNKDNRUSEGALKXYSFQRPBTNPECMAJLEIUQUHNAOVILOIGQWFGVAKBVWDAFGDQBELSXJUGRESULKWWEBYTGIHZXPJSMJMLQOEABZEIXWSPZTIKOILFRBMGWCWCMFDGKKHSMX");
    msg.value = 178U;

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
    msg.setTimeStamp(0.07570995939605263);
    msg.setSource(59780U);
    msg.setSourceEntity(49U);
    msg.setDestination(54295U);
    msg.setDestinationEntity(172U);
    msg.name.assign("PWEWYCQKQNCNICMDMQPORHKNOHFKTJSUVXLIXBFTHXGZXGRMMBTAOPOJLXYVFRDSDYBWCWHJHXAIGCSUANARKPRILHNLSFKJMEBTSEWISEPOSXJGIYZIJFQDUTVGLHMUAIPOWUGMHLETZGROITKHBNKPALFDEZGUNQOMTSSTOYXMYBNNJFPRRXJBAZYEIGFKPQASZVVEZQRVRWCVUPUYYECVLKVCWMAJUEGBDKDVZWWDBLOQXTND");
    msg.value = 252U;

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
    msg.setTimeStamp(0.11319946640189127);
    msg.setSource(36356U);
    msg.setSourceEntity(156U);
    msg.setDestination(5090U);
    msg.setDestinationEntity(251U);
    msg.name.assign("IQLAEFVLBIGGSRHEUQWBFDXSPRBFGHPBHAQOZJAITEJXPUNLHXQQOSXAKYLKGIHUWJQIJPLNWHPYPHTOEDKDS");
    msg.value = 60U;

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
    msg.setTimeStamp(0.9511514821561174);
    msg.setSource(24653U);
    msg.setSourceEntity(93U);
    msg.setDestination(10719U);
    msg.setDestinationEntity(66U);
    msg.id = 204U;
    msg.period = 3097901398U;
    msg.duty_cycle = 2182986172U;

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
    msg.setTimeStamp(0.8209302582299803);
    msg.setSource(38541U);
    msg.setSourceEntity(105U);
    msg.setDestination(8507U);
    msg.setDestinationEntity(75U);
    msg.id = 232U;
    msg.period = 1822065071U;
    msg.duty_cycle = 920530065U;

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
    msg.setTimeStamp(0.34171650831025946);
    msg.setSource(28137U);
    msg.setSourceEntity(90U);
    msg.setDestination(61342U);
    msg.setDestinationEntity(107U);
    msg.id = 90U;
    msg.period = 1047049829U;
    msg.duty_cycle = 2394423692U;

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
    msg.setTimeStamp(0.002743516371543242);
    msg.setSource(59860U);
    msg.setSourceEntity(58U);
    msg.setDestination(11423U);
    msg.setDestinationEntity(13U);
    msg.id = 125U;
    msg.period = 3252792047U;
    msg.duty_cycle = 3278063030U;

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
    msg.setTimeStamp(0.6480005208060278);
    msg.setSource(50674U);
    msg.setSourceEntity(158U);
    msg.setDestination(22904U);
    msg.setDestinationEntity(26U);
    msg.id = 66U;
    msg.period = 2861300029U;
    msg.duty_cycle = 454119120U;

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
    msg.setTimeStamp(0.6536204955760122);
    msg.setSource(8095U);
    msg.setSourceEntity(50U);
    msg.setDestination(61802U);
    msg.setDestinationEntity(138U);
    msg.id = 41U;
    msg.period = 1785858630U;
    msg.duty_cycle = 3871992329U;

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
    msg.setTimeStamp(0.7725001289437569);
    msg.setSource(42006U);
    msg.setSourceEntity(189U);
    msg.setDestination(13118U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.9676802600486165;
    msg.lon = 0.14215021232699854;
    msg.height = 0.6348891277591998;
    msg.x = 0.05274584333352084;
    msg.y = 0.8593279695119993;
    msg.z = 0.14147754278625824;
    msg.phi = 0.35965741387971184;
    msg.theta = 0.20778603274956642;
    msg.psi = 0.5612521247175045;
    msg.u = 0.6330490183930084;
    msg.v = 0.879910469147706;
    msg.w = 0.8726593997310619;
    msg.vx = 0.7450105852207626;
    msg.vy = 0.3181733817664043;
    msg.vz = 0.7709564373517767;
    msg.p = 0.5745200638264255;
    msg.q = 0.1653864301850062;
    msg.r = 0.6904723364874029;
    msg.depth = 0.23124292587781503;
    msg.alt = 0.16018592950213928;

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
    msg.setTimeStamp(0.7848107340700279);
    msg.setSource(28925U);
    msg.setSourceEntity(163U);
    msg.setDestination(48872U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.29070545867589737;
    msg.lon = 0.47436055383537434;
    msg.height = 0.9414908663994357;
    msg.x = 0.4091348126586173;
    msg.y = 0.37911535888568093;
    msg.z = 0.08701742249862188;
    msg.phi = 0.23213213431049895;
    msg.theta = 0.7805097843254977;
    msg.psi = 0.4904316153687217;
    msg.u = 0.6541246392716579;
    msg.v = 0.6223504448387401;
    msg.w = 0.9545424033769994;
    msg.vx = 0.09888180536992675;
    msg.vy = 0.31458769023640787;
    msg.vz = 0.19985106544191378;
    msg.p = 0.7253329340783188;
    msg.q = 0.8267820436279919;
    msg.r = 0.9077134440894236;
    msg.depth = 0.6698213509482936;
    msg.alt = 0.28363149016206546;

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
    msg.setTimeStamp(0.41110296711219174);
    msg.setSource(13807U);
    msg.setSourceEntity(233U);
    msg.setDestination(40832U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.08878315548453541;
    msg.lon = 0.6651727566665604;
    msg.height = 0.6687230207833252;
    msg.x = 0.3901076755893962;
    msg.y = 0.37676496195326137;
    msg.z = 0.0587864753737638;
    msg.phi = 0.9813816058929348;
    msg.theta = 0.8822159969931366;
    msg.psi = 0.9502758616318903;
    msg.u = 0.3221646773259067;
    msg.v = 0.7476535916311169;
    msg.w = 0.2741211190705277;
    msg.vx = 0.4499481466848325;
    msg.vy = 0.9970831085653608;
    msg.vz = 0.3437954466414038;
    msg.p = 0.6691088221526433;
    msg.q = 0.8720905959624162;
    msg.r = 0.5804928745058991;
    msg.depth = 0.1531644201543757;
    msg.alt = 0.5461612383533715;

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
    msg.setTimeStamp(0.9219737233377928);
    msg.setSource(34165U);
    msg.setSourceEntity(199U);
    msg.setDestination(13924U);
    msg.setDestinationEntity(112U);
    msg.x = 0.3243165245495343;
    msg.y = 0.3375595431624401;
    msg.z = 0.4917098722435034;

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
    msg.setTimeStamp(0.3431176660058879);
    msg.setSource(36240U);
    msg.setSourceEntity(204U);
    msg.setDestination(42787U);
    msg.setDestinationEntity(47U);
    msg.x = 0.6063538464197449;
    msg.y = 0.3541760722966294;
    msg.z = 0.14320511040766615;

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
    msg.setTimeStamp(0.13706326591395657);
    msg.setSource(11425U);
    msg.setSourceEntity(8U);
    msg.setDestination(17906U);
    msg.setDestinationEntity(47U);
    msg.x = 0.36500340174251444;
    msg.y = 0.6595188838341697;
    msg.z = 0.941599523727305;

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
    msg.setTimeStamp(0.43178127152878776);
    msg.setSource(29809U);
    msg.setSourceEntity(237U);
    msg.setDestination(10004U);
    msg.setDestinationEntity(172U);
    msg.value = 0.4062887522694316;

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
    msg.setTimeStamp(0.6483470290329616);
    msg.setSource(61261U);
    msg.setSourceEntity(93U);
    msg.setDestination(1375U);
    msg.setDestinationEntity(185U);
    msg.value = 0.4704375930811948;

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
    msg.setTimeStamp(0.6635605215585962);
    msg.setSource(21093U);
    msg.setSourceEntity(89U);
    msg.setDestination(47097U);
    msg.setDestinationEntity(175U);
    msg.value = 0.08357933102854276;

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
    msg.setTimeStamp(0.9657072851520822);
    msg.setSource(2431U);
    msg.setSourceEntity(181U);
    msg.setDestination(11124U);
    msg.setDestinationEntity(124U);
    msg.value = 0.35742124800249686;

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
    msg.setTimeStamp(0.923799737122615);
    msg.setSource(37637U);
    msg.setSourceEntity(137U);
    msg.setDestination(47402U);
    msg.setDestinationEntity(223U);
    msg.value = 0.22778821900941026;

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
    msg.setTimeStamp(0.3470834571842095);
    msg.setSource(58351U);
    msg.setSourceEntity(19U);
    msg.setDestination(13521U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8403797934641829;

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
    msg.setTimeStamp(0.2027861172304991);
    msg.setSource(41410U);
    msg.setSourceEntity(198U);
    msg.setDestination(41968U);
    msg.setDestinationEntity(51U);
    msg.x = 0.2704468453457798;
    msg.y = 0.48631430287713984;
    msg.z = 0.5083077469957423;
    msg.phi = 0.36665778763065227;
    msg.theta = 0.6026597644095367;
    msg.psi = 0.782363061940055;
    msg.p = 0.012892755254002242;
    msg.q = 0.8154836240388739;
    msg.r = 0.9916243904450448;
    msg.u = 0.39038851075583747;
    msg.v = 0.3542069618689365;
    msg.w = 0.5641748129391996;
    msg.bias_psi = 0.18599056823767524;
    msg.bias_r = 0.6347090930870797;

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
    msg.setTimeStamp(0.45496859828501834);
    msg.setSource(15313U);
    msg.setSourceEntity(209U);
    msg.setDestination(9934U);
    msg.setDestinationEntity(73U);
    msg.x = 0.9309139378707385;
    msg.y = 0.0358498453338193;
    msg.z = 0.699809120636316;
    msg.phi = 0.48355840511256654;
    msg.theta = 0.34275852745846214;
    msg.psi = 0.5219489361032762;
    msg.p = 0.6694636957670607;
    msg.q = 0.8013576273130658;
    msg.r = 0.34644204715130145;
    msg.u = 0.20592689852328028;
    msg.v = 0.9767751790082408;
    msg.w = 0.2952691612096251;
    msg.bias_psi = 0.09965451924682134;
    msg.bias_r = 0.8713692105065054;

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
    msg.setTimeStamp(0.3551605096259569);
    msg.setSource(23392U);
    msg.setSourceEntity(144U);
    msg.setDestination(4454U);
    msg.setDestinationEntity(109U);
    msg.x = 0.22133398069728172;
    msg.y = 0.561824830604912;
    msg.z = 0.4925599114224528;
    msg.phi = 0.14764836125724023;
    msg.theta = 0.7859414375621303;
    msg.psi = 0.18870691869404832;
    msg.p = 0.7066104027017311;
    msg.q = 0.6479477843044651;
    msg.r = 0.38774541317290967;
    msg.u = 0.5393177657993489;
    msg.v = 0.7310419913555767;
    msg.w = 0.9548383461701156;
    msg.bias_psi = 0.43130182959623986;
    msg.bias_r = 0.12931059247023746;

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
    msg.setTimeStamp(0.7629810898668287);
    msg.setSource(5450U);
    msg.setSourceEntity(87U);
    msg.setDestination(23783U);
    msg.setDestinationEntity(48U);
    msg.bias_psi = 0.7330050517051214;
    msg.bias_r = 0.7395712189585381;
    msg.cog = 0.3627978122380717;
    msg.cyaw = 0.34588154911015323;
    msg.lbl_rej_level = 0.5011065544079895;
    msg.gps_rej_level = 0.7007427758319196;
    msg.custom_x = 0.7348021923314504;
    msg.custom_y = 0.2665071181890015;
    msg.custom_z = 0.46049493413598797;

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
    msg.setTimeStamp(0.7397477635722164);
    msg.setSource(44744U);
    msg.setSourceEntity(234U);
    msg.setDestination(48512U);
    msg.setDestinationEntity(206U);
    msg.bias_psi = 0.9488759820970013;
    msg.bias_r = 0.6423080621754241;
    msg.cog = 0.9941319598390163;
    msg.cyaw = 0.35010338575265276;
    msg.lbl_rej_level = 0.2345788009837808;
    msg.gps_rej_level = 0.888867926908851;
    msg.custom_x = 0.6475541050972863;
    msg.custom_y = 0.3649158237123785;
    msg.custom_z = 0.5623980663899514;

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
    msg.setTimeStamp(0.46374127203590676);
    msg.setSource(15584U);
    msg.setSourceEntity(65U);
    msg.setDestination(61092U);
    msg.setDestinationEntity(99U);
    msg.bias_psi = 0.9517582362047744;
    msg.bias_r = 0.8469452598188374;
    msg.cog = 0.27638959083692727;
    msg.cyaw = 0.8580626041916848;
    msg.lbl_rej_level = 0.19301783272083373;
    msg.gps_rej_level = 0.9939017751233938;
    msg.custom_x = 0.4073020145702062;
    msg.custom_y = 0.7345813988320521;
    msg.custom_z = 0.5254057320121396;

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
    msg.setTimeStamp(0.10370934822638245);
    msg.setSource(5274U);
    msg.setSourceEntity(119U);
    msg.setDestination(3838U);
    msg.setDestinationEntity(20U);
    msg.utc_time = 0.523385572211903;
    msg.reason = 11U;

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
    msg.setTimeStamp(0.2036274807428865);
    msg.setSource(55399U);
    msg.setSourceEntity(53U);
    msg.setDestination(8472U);
    msg.setDestinationEntity(169U);
    msg.utc_time = 0.5690531498202249;
    msg.reason = 195U;

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
    msg.setTimeStamp(0.16629989987711102);
    msg.setSource(27120U);
    msg.setSourceEntity(34U);
    msg.setDestination(62072U);
    msg.setDestinationEntity(188U);
    msg.utc_time = 0.041344810626889106;
    msg.reason = 192U;

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
    msg.setTimeStamp(0.30244264897816786);
    msg.setSource(17161U);
    msg.setSourceEntity(84U);
    msg.setDestination(37919U);
    msg.setDestinationEntity(238U);
    msg.id = 189U;
    msg.range = 0.36285889362085977;
    msg.acceptance = 169U;

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
    msg.setTimeStamp(0.8861926824919392);
    msg.setSource(11619U);
    msg.setSourceEntity(196U);
    msg.setDestination(32544U);
    msg.setDestinationEntity(52U);
    msg.id = 177U;
    msg.range = 0.20097447837819393;
    msg.acceptance = 97U;

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
    msg.setTimeStamp(0.8248282726183392);
    msg.setSource(7555U);
    msg.setSourceEntity(33U);
    msg.setDestination(23239U);
    msg.setDestinationEntity(219U);
    msg.id = 65U;
    msg.range = 0.9365832852451046;
    msg.acceptance = 181U;

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
    msg.setTimeStamp(0.9651737852725133);
    msg.setSource(62538U);
    msg.setSourceEntity(221U);
    msg.setDestination(63101U);
    msg.setDestinationEntity(222U);
    msg.type = 234U;
    msg.reason = 136U;
    msg.value = 0.8223828205162325;
    msg.timestep = 0.9875014581924645;

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
    msg.setTimeStamp(0.48045961784539426);
    msg.setSource(48142U);
    msg.setSourceEntity(183U);
    msg.setDestination(14882U);
    msg.setDestinationEntity(140U);
    msg.type = 73U;
    msg.reason = 71U;
    msg.value = 0.8923775727172066;
    msg.timestep = 0.500193142444905;

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
    msg.setTimeStamp(0.9367987853613491);
    msg.setSource(33701U);
    msg.setSourceEntity(127U);
    msg.setDestination(57063U);
    msg.setDestinationEntity(237U);
    msg.type = 213U;
    msg.reason = 152U;
    msg.value = 0.06316514017974595;
    msg.timestep = 0.03497983616134692;

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
    msg.setTimeStamp(0.5767114678213247);
    msg.setSource(28728U);
    msg.setSourceEntity(21U);
    msg.setDestination(63637U);
    msg.setDestinationEntity(178U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZNYRJCKJUQKDEDQWOOHDKLSVMVMPHXFILXYDAWENAWUKWWMAHHRTASVPUAYDACZSDIKIEWRGCZKHDUNENPFQUPAUVXBLNIQBEBMMTYQLVZCCCVXHFHSUYJIIGBXGNETIGQ");
    tmp_msg_0.lat = 0.05912134513578304;
    tmp_msg_0.lon = 0.7872174633074628;
    tmp_msg_0.depth = 0.43140976878003834;
    tmp_msg_0.query_channel = 5U;
    tmp_msg_0.reply_channel = 8U;
    tmp_msg_0.transponder_delay = 96U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2888564046823646;
    msg.y = 0.5262651506787092;
    msg.var_x = 0.9643655771887287;
    msg.var_y = 0.16615481374843621;
    msg.distance = 0.6701392152892689;

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
    msg.setTimeStamp(0.4046537903374523);
    msg.setSource(62252U);
    msg.setSourceEntity(201U);
    msg.setDestination(14399U);
    msg.setDestinationEntity(232U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WUEOUDLVWORCJDMGKNZXTVTBPKINZEQSBJQLUXJTTVLYTRBRIEZISONFPIQAZCRQIRTOGWWAVFLNRQPRTDXZHPSLGFCXJGDPMWFHDXIVDNDVEAVKAGPSMNBMQOJOECGYEATKWADU");
    tmp_msg_0.lat = 0.9231796051313371;
    tmp_msg_0.lon = 0.7547847152398605;
    tmp_msg_0.depth = 0.25012398852122575;
    tmp_msg_0.query_channel = 185U;
    tmp_msg_0.reply_channel = 51U;
    tmp_msg_0.transponder_delay = 89U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8843118938172545;
    msg.y = 0.7115540754932586;
    msg.var_x = 0.13914265477876453;
    msg.var_y = 0.21915663948562114;
    msg.distance = 0.7752506360227203;

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
    msg.setTimeStamp(0.9969622280570808);
    msg.setSource(21218U);
    msg.setSourceEntity(107U);
    msg.setDestination(8452U);
    msg.setDestinationEntity(116U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HIHHFMLUUVVXFYSRPYMTFIAROMUDNSJQMZXKGMIQSCEJKERJXNS");
    tmp_msg_0.lat = 0.3821634087582453;
    tmp_msg_0.lon = 0.4229850723147789;
    tmp_msg_0.depth = 0.6370671447078198;
    tmp_msg_0.query_channel = 27U;
    tmp_msg_0.reply_channel = 216U;
    tmp_msg_0.transponder_delay = 152U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9378204843020758;
    msg.y = 0.2343208592288859;
    msg.var_x = 0.8679979999347575;
    msg.var_y = 0.6172326309561348;
    msg.distance = 0.3890665074632672;

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
    msg.setTimeStamp(0.15659146420732162);
    msg.setSource(11851U);
    msg.setSourceEntity(252U);
    msg.setDestination(55725U);
    msg.setDestinationEntity(46U);
    msg.state = 227U;

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
    msg.setTimeStamp(0.48015345685851407);
    msg.setSource(1115U);
    msg.setSourceEntity(115U);
    msg.setDestination(62138U);
    msg.setDestinationEntity(1U);
    msg.state = 60U;

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
    msg.setTimeStamp(0.9398890106649883);
    msg.setSource(60770U);
    msg.setSourceEntity(219U);
    msg.setDestination(58139U);
    msg.setDestinationEntity(217U);
    msg.state = 159U;

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
    msg.setTimeStamp(0.9590640426665478);
    msg.setSource(63722U);
    msg.setSourceEntity(209U);
    msg.setDestination(50751U);
    msg.setDestinationEntity(239U);
    msg.x = 0.2590383980048141;
    msg.y = 0.9758134908451984;
    msg.z = 0.9350923522500343;

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
    msg.setTimeStamp(0.8203152625772557);
    msg.setSource(42428U);
    msg.setSourceEntity(16U);
    msg.setDestination(34570U);
    msg.setDestinationEntity(147U);
    msg.x = 0.17509523710190145;
    msg.y = 0.5546521624357671;
    msg.z = 0.9968506266939149;

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
    msg.setTimeStamp(0.7276765631628008);
    msg.setSource(3370U);
    msg.setSourceEntity(221U);
    msg.setDestination(9685U);
    msg.setDestinationEntity(188U);
    msg.x = 0.8365810984710927;
    msg.y = 0.7620391768688567;
    msg.z = 0.3294505914853654;

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
    msg.setTimeStamp(0.3897548858600035);
    msg.setSource(3554U);
    msg.setSourceEntity(168U);
    msg.setDestination(63037U);
    msg.setDestinationEntity(16U);
    msg.va = 0.3262457675766439;
    msg.aoa = 0.9878395910896539;
    msg.ssa = 0.26360257887010696;

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
    msg.setTimeStamp(0.13561021525878358);
    msg.setSource(3316U);
    msg.setSourceEntity(103U);
    msg.setDestination(59544U);
    msg.setDestinationEntity(58U);
    msg.va = 0.4716583767295456;
    msg.aoa = 0.10997762724286597;
    msg.ssa = 0.6092874188511611;

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
    msg.setTimeStamp(0.5706204607405363);
    msg.setSource(63649U);
    msg.setSourceEntity(197U);
    msg.setDestination(40929U);
    msg.setDestinationEntity(128U);
    msg.va = 0.7642008584702017;
    msg.aoa = 0.520466735762101;
    msg.ssa = 0.7014287052104128;

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
    msg.setTimeStamp(0.2060908137221964);
    msg.setSource(13935U);
    msg.setSourceEntity(183U);
    msg.setDestination(56282U);
    msg.setDestinationEntity(129U);
    msg.value = 0.9237343145841671;

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
    msg.setTimeStamp(0.8860031067663765);
    msg.setSource(57693U);
    msg.setSourceEntity(55U);
    msg.setDestination(16506U);
    msg.setDestinationEntity(52U);
    msg.value = 0.07924023242696432;

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
    msg.setTimeStamp(0.15684277111610467);
    msg.setSource(56095U);
    msg.setSourceEntity(161U);
    msg.setDestination(12398U);
    msg.setDestinationEntity(207U);
    msg.value = 0.07767393074008122;

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
    msg.setTimeStamp(0.36669543435275487);
    msg.setSource(39397U);
    msg.setSourceEntity(40U);
    msg.setDestination(42936U);
    msg.setDestinationEntity(32U);
    msg.value = 0.5023291126145649;
    msg.z_units = 241U;

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
    msg.setTimeStamp(0.40409936188530304);
    msg.setSource(40211U);
    msg.setSourceEntity(136U);
    msg.setDestination(4623U);
    msg.setDestinationEntity(54U);
    msg.value = 0.8016024744424346;
    msg.z_units = 88U;

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
    msg.setTimeStamp(0.3502000652325633);
    msg.setSource(54892U);
    msg.setSourceEntity(227U);
    msg.setDestination(63684U);
    msg.setDestinationEntity(14U);
    msg.value = 0.08228644556398612;
    msg.z_units = 92U;

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
    msg.setTimeStamp(0.7112253613502132);
    msg.setSource(10526U);
    msg.setSourceEntity(250U);
    msg.setDestination(29675U);
    msg.setDestinationEntity(82U);
    msg.value = 0.5262815137951147;
    msg.speed_units = 247U;

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
    msg.setTimeStamp(0.9694237056761938);
    msg.setSource(30805U);
    msg.setSourceEntity(116U);
    msg.setDestination(11871U);
    msg.setDestinationEntity(208U);
    msg.value = 0.9841315951859403;
    msg.speed_units = 218U;

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
    msg.setTimeStamp(0.6012459279181799);
    msg.setSource(43207U);
    msg.setSourceEntity(81U);
    msg.setDestination(22164U);
    msg.setDestinationEntity(129U);
    msg.value = 0.0008960414770241565;
    msg.speed_units = 122U;

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
    msg.setTimeStamp(0.10865360596434104);
    msg.setSource(27906U);
    msg.setSourceEntity(217U);
    msg.setDestination(2891U);
    msg.setDestinationEntity(92U);
    msg.value = 0.1691818608840835;

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
    msg.setTimeStamp(0.4966829012902413);
    msg.setSource(59237U);
    msg.setSourceEntity(254U);
    msg.setDestination(60439U);
    msg.setDestinationEntity(70U);
    msg.value = 0.42340907556021046;

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
    msg.setTimeStamp(0.7363093694787739);
    msg.setSource(12450U);
    msg.setSourceEntity(215U);
    msg.setDestination(57595U);
    msg.setDestinationEntity(179U);
    msg.value = 0.7636390117393396;

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
    msg.setTimeStamp(0.2965148065802681);
    msg.setSource(3993U);
    msg.setSourceEntity(63U);
    msg.setDestination(45442U);
    msg.setDestinationEntity(183U);
    msg.value = 0.4892320389817699;

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
    msg.setTimeStamp(0.3544208486077566);
    msg.setSource(12974U);
    msg.setSourceEntity(127U);
    msg.setDestination(7505U);
    msg.setDestinationEntity(97U);
    msg.value = 0.41218502027997483;

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
    msg.setTimeStamp(0.47019519369579055);
    msg.setSource(13346U);
    msg.setSourceEntity(65U);
    msg.setDestination(15954U);
    msg.setDestinationEntity(53U);
    msg.value = 0.9945896468140502;

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
    msg.setTimeStamp(0.6224375079392509);
    msg.setSource(47935U);
    msg.setSourceEntity(187U);
    msg.setDestination(44899U);
    msg.setDestinationEntity(20U);
    msg.value = 0.5101598081384361;

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
    msg.setTimeStamp(0.9469323670265988);
    msg.setSource(43308U);
    msg.setSourceEntity(170U);
    msg.setDestination(50268U);
    msg.setDestinationEntity(148U);
    msg.value = 0.9669357979851552;

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
    msg.setTimeStamp(0.6444792987868335);
    msg.setSource(34502U);
    msg.setSourceEntity(139U);
    msg.setDestination(18935U);
    msg.setDestinationEntity(13U);
    msg.value = 0.32878734101685003;

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
    msg.setTimeStamp(0.02151206234227443);
    msg.setSource(1536U);
    msg.setSourceEntity(26U);
    msg.setDestination(14905U);
    msg.setDestinationEntity(79U);
    msg.path_ref = 2424927253U;
    msg.start_lat = 0.7448662949287672;
    msg.start_lon = 0.9141248340296513;
    msg.start_z = 0.9727183339862758;
    msg.start_z_units = 246U;
    msg.end_lat = 0.885558446864435;
    msg.end_lon = 0.03607729585645014;
    msg.end_z = 0.35185232145748013;
    msg.end_z_units = 121U;
    msg.speed = 0.9507826132657917;
    msg.speed_units = 116U;
    msg.lradius = 0.9039020102117757;
    msg.flags = 214U;

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
    msg.setTimeStamp(0.6331364296533063);
    msg.setSource(36872U);
    msg.setSourceEntity(18U);
    msg.setDestination(37406U);
    msg.setDestinationEntity(44U);
    msg.path_ref = 835755061U;
    msg.start_lat = 0.7183525870961359;
    msg.start_lon = 0.15272460243753005;
    msg.start_z = 0.9145909866498426;
    msg.start_z_units = 67U;
    msg.end_lat = 0.9223924869321487;
    msg.end_lon = 0.4045792746744129;
    msg.end_z = 0.46280319740450526;
    msg.end_z_units = 39U;
    msg.speed = 0.32050358308118265;
    msg.speed_units = 22U;
    msg.lradius = 0.5125445734317977;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.47961182685518267);
    msg.setSource(58387U);
    msg.setSourceEntity(159U);
    msg.setDestination(30362U);
    msg.setDestinationEntity(204U);
    msg.path_ref = 767121370U;
    msg.start_lat = 0.26250405856021863;
    msg.start_lon = 0.763879925692711;
    msg.start_z = 0.38551900269019823;
    msg.start_z_units = 118U;
    msg.end_lat = 0.09261328764732424;
    msg.end_lon = 0.07552162697981013;
    msg.end_z = 0.0762164763663773;
    msg.end_z_units = 190U;
    msg.speed = 0.37873677149676244;
    msg.speed_units = 201U;
    msg.lradius = 0.9977083638971461;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.4818035239090004);
    msg.setSource(36378U);
    msg.setSourceEntity(17U);
    msg.setDestination(42489U);
    msg.setDestinationEntity(115U);
    msg.x = 0.6868335859424767;
    msg.y = 0.6544459061286292;
    msg.z = 0.17786171823646624;
    msg.k = 0.23893303296654855;
    msg.m = 0.23533369212456878;
    msg.n = 0.5954157993920409;
    msg.flags = 120U;

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
    msg.setTimeStamp(0.39541721317011813);
    msg.setSource(22647U);
    msg.setSourceEntity(109U);
    msg.setDestination(44239U);
    msg.setDestinationEntity(52U);
    msg.x = 0.5121404242362033;
    msg.y = 0.5316142461534985;
    msg.z = 0.08939115418289811;
    msg.k = 0.08402233477358023;
    msg.m = 0.9612340806999052;
    msg.n = 0.2384035424202645;
    msg.flags = 151U;

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
    msg.setTimeStamp(0.08269504574723552);
    msg.setSource(15437U);
    msg.setSourceEntity(188U);
    msg.setDestination(10339U);
    msg.setDestinationEntity(104U);
    msg.x = 0.20011192769311614;
    msg.y = 0.8912519221332746;
    msg.z = 0.7353408073777261;
    msg.k = 0.8086256470176315;
    msg.m = 0.43494872029670906;
    msg.n = 0.635299392906077;
    msg.flags = 253U;

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
    msg.setTimeStamp(0.2790579407849928);
    msg.setSource(15254U);
    msg.setSourceEntity(247U);
    msg.setDestination(65225U);
    msg.setDestinationEntity(224U);
    msg.value = 0.3705440442156731;

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
    msg.setTimeStamp(0.7397045152131203);
    msg.setSource(33012U);
    msg.setSourceEntity(165U);
    msg.setDestination(5759U);
    msg.setDestinationEntity(182U);
    msg.value = 0.13455308299634738;

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
    msg.setTimeStamp(0.22974512597270857);
    msg.setSource(50660U);
    msg.setSourceEntity(57U);
    msg.setDestination(706U);
    msg.setDestinationEntity(52U);
    msg.value = 0.5968121530554396;

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
    msg.setTimeStamp(0.6106198421247024);
    msg.setSource(27213U);
    msg.setSourceEntity(75U);
    msg.setDestination(32103U);
    msg.setDestinationEntity(76U);
    msg.u = 0.345825773828322;
    msg.v = 0.9150284243508884;
    msg.w = 0.9895896532411862;
    msg.p = 0.6537297620531047;
    msg.q = 0.20113353415362756;
    msg.r = 0.6706821282465019;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.7769065792504377);
    msg.setSource(56894U);
    msg.setSourceEntity(200U);
    msg.setDestination(49097U);
    msg.setDestinationEntity(53U);
    msg.u = 0.1088266636229609;
    msg.v = 0.7931198936624829;
    msg.w = 0.5217092484434606;
    msg.p = 0.7251563543745433;
    msg.q = 0.5276817085941256;
    msg.r = 0.09244461275220528;
    msg.flags = 56U;

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
    msg.setTimeStamp(0.25912366423843647);
    msg.setSource(14432U);
    msg.setSourceEntity(216U);
    msg.setDestination(143U);
    msg.setDestinationEntity(5U);
    msg.u = 0.33816351294024616;
    msg.v = 0.7048926012543705;
    msg.w = 0.39148132656157997;
    msg.p = 0.37010407380174837;
    msg.q = 0.5843593027695201;
    msg.r = 0.856239124803711;
    msg.flags = 185U;

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
    msg.setTimeStamp(0.5035465533772469);
    msg.setSource(12912U);
    msg.setSourceEntity(139U);
    msg.setDestination(311U);
    msg.setDestinationEntity(146U);
    msg.path_ref = 1128516117U;
    msg.start_lat = 0.3652253574985358;
    msg.start_lon = 0.5033196334407876;
    msg.start_z = 0.73854646694948;
    msg.start_z_units = 69U;
    msg.end_lat = 0.7665679491848136;
    msg.end_lon = 0.6385104752891226;
    msg.end_z = 0.033960806032661495;
    msg.end_z_units = 86U;
    msg.lradius = 0.8220865024882645;
    msg.flags = 150U;
    msg.x = 0.12277280607633323;
    msg.y = 0.38923069998201865;
    msg.z = 0.4824754551540962;
    msg.vx = 0.008980503615814817;
    msg.vy = 0.9039170566598714;
    msg.vz = 0.6191780468693259;
    msg.course_error = 0.7362419969832553;
    msg.eta = 9899U;

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
    msg.setTimeStamp(0.5742545128582985);
    msg.setSource(62986U);
    msg.setSourceEntity(38U);
    msg.setDestination(40186U);
    msg.setDestinationEntity(197U);
    msg.path_ref = 1161915447U;
    msg.start_lat = 0.8047061793538548;
    msg.start_lon = 0.6461122995007559;
    msg.start_z = 0.7922891708842834;
    msg.start_z_units = 213U;
    msg.end_lat = 0.8833633327737159;
    msg.end_lon = 0.49789710454164116;
    msg.end_z = 0.32069730631461235;
    msg.end_z_units = 28U;
    msg.lradius = 0.9878648269556224;
    msg.flags = 249U;
    msg.x = 0.06802291324661758;
    msg.y = 0.9780232034092586;
    msg.z = 0.504077163979945;
    msg.vx = 0.5141366013076193;
    msg.vy = 0.6107474919345451;
    msg.vz = 0.326610442488668;
    msg.course_error = 0.9851793878852038;
    msg.eta = 18328U;

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
    msg.setTimeStamp(0.5333835148180126);
    msg.setSource(1690U);
    msg.setSourceEntity(30U);
    msg.setDestination(28969U);
    msg.setDestinationEntity(76U);
    msg.path_ref = 2237800291U;
    msg.start_lat = 0.8610286727484102;
    msg.start_lon = 0.8608489984065109;
    msg.start_z = 0.05728861355707893;
    msg.start_z_units = 220U;
    msg.end_lat = 0.008496912484770913;
    msg.end_lon = 0.8565156145314449;
    msg.end_z = 0.4665720205903383;
    msg.end_z_units = 84U;
    msg.lradius = 0.6601563455279207;
    msg.flags = 155U;
    msg.x = 0.46968762795834196;
    msg.y = 0.3780113523811641;
    msg.z = 0.8735835830435237;
    msg.vx = 0.47644446097521753;
    msg.vy = 0.5700500283783223;
    msg.vz = 0.5337790032528728;
    msg.course_error = 0.26452461423913076;
    msg.eta = 39036U;

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
    msg.setTimeStamp(0.8786791810747149);
    msg.setSource(46063U);
    msg.setSourceEntity(37U);
    msg.setDestination(19273U);
    msg.setDestinationEntity(101U);
    msg.k = 0.5584091658502414;
    msg.m = 0.5864595301074823;
    msg.n = 0.8088853619582412;

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
    msg.setTimeStamp(0.99145421488538);
    msg.setSource(31324U);
    msg.setSourceEntity(237U);
    msg.setDestination(51172U);
    msg.setDestinationEntity(80U);
    msg.k = 0.6404275787736651;
    msg.m = 0.5975807927261025;
    msg.n = 0.9752562991350918;

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
    msg.setTimeStamp(0.2745973559023619);
    msg.setSource(12035U);
    msg.setSourceEntity(146U);
    msg.setDestination(30690U);
    msg.setDestinationEntity(13U);
    msg.k = 0.5624344177125056;
    msg.m = 0.8405206549332083;
    msg.n = 0.7867952870064167;

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
    msg.setTimeStamp(0.9861560946195523);
    msg.setSource(1048U);
    msg.setSourceEntity(117U);
    msg.setDestination(22433U);
    msg.setDestinationEntity(133U);
    msg.p = 0.8186193951692939;
    msg.i = 0.9578771829958608;
    msg.d = 0.523485366767321;
    msg.a = 0.7460846392034812;

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
    msg.setTimeStamp(0.9395997075856775);
    msg.setSource(60124U);
    msg.setSourceEntity(152U);
    msg.setDestination(6587U);
    msg.setDestinationEntity(51U);
    msg.p = 0.6678795450583451;
    msg.i = 0.8878461481877644;
    msg.d = 0.23056494034870612;
    msg.a = 0.2668132069535276;

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
    msg.setTimeStamp(0.990576869756737);
    msg.setSource(3616U);
    msg.setSourceEntity(191U);
    msg.setDestination(40990U);
    msg.setDestinationEntity(1U);
    msg.p = 0.7357071957094244;
    msg.i = 0.8444590338057609;
    msg.d = 0.12674339033455284;
    msg.a = 0.1758447701517698;

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
    msg.setTimeStamp(0.5780339630369979);
    msg.setSource(4245U);
    msg.setSourceEntity(250U);
    msg.setDestination(59310U);
    msg.setDestinationEntity(240U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.2154625169505454);
    msg.setSource(52234U);
    msg.setSourceEntity(239U);
    msg.setDestination(21851U);
    msg.setDestinationEntity(247U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.14318951254460333);
    msg.setSource(50750U);
    msg.setSourceEntity(227U);
    msg.setDestination(57622U);
    msg.setDestinationEntity(198U);
    msg.op = 5U;

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
    msg.setTimeStamp(0.2111271876173234);
    msg.setSource(32311U);
    msg.setSourceEntity(217U);
    msg.setDestination(51254U);
    msg.setDestinationEntity(54U);
    msg.x = 0.5938406258857967;
    msg.y = 0.8029373421795498;
    msg.z = 0.9938103485985997;
    msg.vx = 0.44135067665667804;
    msg.vy = 0.3654981178469482;
    msg.vz = 0.8195148541403484;
    msg.ax = 0.9059848432925749;
    msg.ay = 0.44305264475001205;
    msg.az = 0.9922373667587914;
    msg.flags = 30620U;

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
    msg.setTimeStamp(0.07207799740207155);
    msg.setSource(5697U);
    msg.setSourceEntity(143U);
    msg.setDestination(35108U);
    msg.setDestinationEntity(190U);
    msg.x = 0.07564387622029534;
    msg.y = 0.908925272392756;
    msg.z = 0.6781865630796834;
    msg.vx = 0.4640558884571776;
    msg.vy = 0.9142915247007378;
    msg.vz = 0.10218515935521899;
    msg.ax = 0.49560955358673553;
    msg.ay = 0.856368353808268;
    msg.az = 0.9991871767133105;
    msg.flags = 12195U;

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
    msg.setTimeStamp(0.3167077111801738);
    msg.setSource(16507U);
    msg.setSourceEntity(110U);
    msg.setDestination(63836U);
    msg.setDestinationEntity(28U);
    msg.x = 0.9324838888981198;
    msg.y = 0.8262107012086709;
    msg.z = 0.718439351717176;
    msg.vx = 0.2686057525593526;
    msg.vy = 0.2816515122844562;
    msg.vz = 0.11027489702960136;
    msg.ax = 0.33277092229997063;
    msg.ay = 0.6907141463272523;
    msg.az = 0.7116876242937872;
    msg.flags = 45354U;

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
    msg.setTimeStamp(0.2637816261462803);
    msg.setSource(41782U);
    msg.setSourceEntity(185U);
    msg.setDestination(58089U);
    msg.setDestinationEntity(148U);
    msg.value = 0.19874184217883273;

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
    msg.setTimeStamp(0.9507954034765594);
    msg.setSource(28410U);
    msg.setSourceEntity(248U);
    msg.setDestination(25989U);
    msg.setDestinationEntity(198U);
    msg.value = 0.7069142998811747;

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
    msg.setTimeStamp(0.5889162690656873);
    msg.setSource(35783U);
    msg.setSourceEntity(122U);
    msg.setDestination(20320U);
    msg.setDestinationEntity(212U);
    msg.value = 0.9580659495786011;

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
    msg.setTimeStamp(0.9230556348937078);
    msg.setSource(28131U);
    msg.setSourceEntity(55U);
    msg.setDestination(39924U);
    msg.setDestinationEntity(184U);
    msg.timeout = 6618U;
    msg.lat = 0.797809531102065;
    msg.lon = 0.8888194183557397;
    msg.z = 0.3955800725479113;
    msg.z_units = 96U;
    msg.speed = 0.5776129049999377;
    msg.speed_units = 93U;
    msg.roll = 0.4428171831597263;
    msg.pitch = 0.8029906286515658;
    msg.yaw = 0.3609393740711282;
    msg.custom.assign("BTHCZJVBHTGSTBGYAOEQLHAPIWJRHCVKDRKSHVRFOGYSRXPTWAMINNXTMATLWOLDQVQJJKEGPVMJBNKYAFWGXVLFWJEPWULMMRBLLZTZUIDWNGWBOHIGFWRGALQAHONCELZEJYZOKCRCURPMJXMPGEKFIXI");

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
    msg.setTimeStamp(0.2374675065840104);
    msg.setSource(35757U);
    msg.setSourceEntity(120U);
    msg.setDestination(9938U);
    msg.setDestinationEntity(137U);
    msg.timeout = 4618U;
    msg.lat = 0.06019078887191287;
    msg.lon = 0.40135210298513746;
    msg.z = 0.41419662794272494;
    msg.z_units = 66U;
    msg.speed = 0.8187265251899742;
    msg.speed_units = 66U;
    msg.roll = 0.8559630023868318;
    msg.pitch = 0.20034442680654607;
    msg.yaw = 0.29341179866800626;
    msg.custom.assign("AWPJLHINWHISPBQCLAEPJRQYPVAYJXJNYJUKQHXZHFOIEWCGUYYAMZRTBKUASFDKOVYCLNJTTMZWMKHMGAOLVUDPUASBQLGNIDUWRZNNVOJRDOUIBPQTFFJCCKKZRQVWOCAIQGIVEXZOSHPSEODAXXDRHFDMXT");

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
    msg.setTimeStamp(0.029758337694281378);
    msg.setSource(46062U);
    msg.setSourceEntity(228U);
    msg.setDestination(60954U);
    msg.setDestinationEntity(224U);
    msg.timeout = 45909U;
    msg.lat = 0.3871768064960326;
    msg.lon = 0.5292095857562854;
    msg.z = 0.5708014781756217;
    msg.z_units = 204U;
    msg.speed = 0.5777238929207011;
    msg.speed_units = 69U;
    msg.roll = 0.44376646462315184;
    msg.pitch = 0.03857091307643379;
    msg.yaw = 0.16834742672824277;
    msg.custom.assign("MKHTFYLZROQZDHJMIQIGZCIFMATHOBCSYPKNJBXRNWQQLEXC");

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
    msg.setTimeStamp(0.33265743038650686);
    msg.setSource(60659U);
    msg.setSourceEntity(18U);
    msg.setDestination(29619U);
    msg.setDestinationEntity(35U);
    msg.timeout = 43630U;
    msg.lat = 0.23887828827264768;
    msg.lon = 0.6525275694469095;
    msg.z = 0.039467526198472935;
    msg.z_units = 39U;
    msg.speed = 0.5897261090099861;
    msg.speed_units = 47U;
    msg.duration = 30289U;
    msg.radius = 0.7489716446131385;
    msg.flags = 226U;
    msg.custom.assign("LFTLMFJOWHAMNISTMTVKKLJGLNSQEPJEDZPKPVFKYLVIBERFZNDWYNMSLRHNINDSXAPCPERJUNOTESHOSJUTUQDIKWDMPPRU");

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
    msg.setTimeStamp(0.7438020516292683);
    msg.setSource(30762U);
    msg.setSourceEntity(19U);
    msg.setDestination(16612U);
    msg.setDestinationEntity(72U);
    msg.timeout = 51261U;
    msg.lat = 0.24453746757242223;
    msg.lon = 0.23800073876264272;
    msg.z = 0.2737836954133145;
    msg.z_units = 26U;
    msg.speed = 0.5427062556043817;
    msg.speed_units = 130U;
    msg.duration = 54964U;
    msg.radius = 0.5109549034073357;
    msg.flags = 12U;
    msg.custom.assign("MIHEYNEQVMILSPVYFRRIPJUOULWIWHEVHTCCQUAZDXBJWMMBICEMLZFBEZONISPOTTXRLCMMNXIYCGIMKOFXZCGFKHNDTOYDUSNTRWWFYYDOTEFFAWGOHRJAAJVVOUPXHLNFQEYCVVPBYLUXGJQWLKGDTBHQZADXSEPOSAZDWSEQXLVPQPSXNFRHHTWRMLSRKBKYZNFGBKZZAKUOMGDJWZEQK");

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
    msg.setTimeStamp(0.35803118132345824);
    msg.setSource(62652U);
    msg.setSourceEntity(110U);
    msg.setDestination(582U);
    msg.setDestinationEntity(97U);
    msg.timeout = 38561U;
    msg.lat = 0.5048998911755233;
    msg.lon = 0.19509112390255934;
    msg.z = 0.0175419721383564;
    msg.z_units = 98U;
    msg.speed = 0.3565569284046536;
    msg.speed_units = 122U;
    msg.duration = 12729U;
    msg.radius = 0.852114329836778;
    msg.flags = 69U;
    msg.custom.assign("IVTXJNHLRQXCREGEDVEGYUAVFJAKUFPEUHPKMJKZJFJJFXBWHRCTENCQRKIQDHLVPDCBPLFTTSYOWLXSMRIMHDMGWJ");

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
    msg.setTimeStamp(0.743326215456604);
    msg.setSource(35700U);
    msg.setSourceEntity(98U);
    msg.setDestination(20112U);
    msg.setDestinationEntity(22U);
    msg.custom.assign("FUWJPJKOLMVSJAEXRKHXPZRAJRVTVWKAWQGLRODJNGDYHMINXLRZVHBCJQIGNBSSPUCLIVBHHKZVGDMQMGPBZCHUWDXZKIEQFGCIVXVGEKTBXAESQCSAANY");

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
    msg.setTimeStamp(0.09708485351163021);
    msg.setSource(50288U);
    msg.setSourceEntity(219U);
    msg.setDestination(34984U);
    msg.setDestinationEntity(74U);
    msg.custom.assign("VETBQAGOVQMUPMXIMOPGOIMITZPZLCCITHRF");

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
    msg.setTimeStamp(0.03708607351317972);
    msg.setSource(29334U);
    msg.setSourceEntity(104U);
    msg.setDestination(62739U);
    msg.setDestinationEntity(4U);
    msg.custom.assign("RFOKWILCOCWXNPNAMXIKWIDDBHQFDJXRYZSMHLBRHUUJJSESMJNEBJBVUZCLFGDHWK");

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
    msg.setTimeStamp(0.7275959487177653);
    msg.setSource(51048U);
    msg.setSourceEntity(65U);
    msg.setDestination(39604U);
    msg.setDestinationEntity(16U);
    msg.timeout = 42018U;
    msg.lat = 0.06007443394535794;
    msg.lon = 0.3194214101443371;
    msg.z = 0.036720702250645054;
    msg.z_units = 26U;
    msg.duration = 24756U;
    msg.speed = 0.2032331020088286;
    msg.speed_units = 101U;
    msg.type = 130U;
    msg.radius = 0.46258827262072055;
    msg.length = 0.4989623917162379;
    msg.bearing = 0.529805328505175;
    msg.direction = 5U;
    msg.custom.assign("AYBDWMOZUKFBZBQGGDJLQMJJSAHCXPYAGLKDSAHDPQOMUIBDCQFZWFGDWCARXHJIJTLFISYYDHIEZPMPNSZOUWFCCSMUYECYPFMVRLABJETKAREFEIGYGROBSIKNKHXSRWGFJWH");

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
    msg.setTimeStamp(0.23095598308890808);
    msg.setSource(44491U);
    msg.setSourceEntity(98U);
    msg.setDestination(11407U);
    msg.setDestinationEntity(24U);
    msg.timeout = 28474U;
    msg.lat = 0.42089949135783844;
    msg.lon = 0.7156149693248274;
    msg.z = 0.6065209034354898;
    msg.z_units = 174U;
    msg.duration = 53582U;
    msg.speed = 0.14411225934278782;
    msg.speed_units = 123U;
    msg.type = 98U;
    msg.radius = 0.9865314683661249;
    msg.length = 0.7231691098857669;
    msg.bearing = 0.5011558304016682;
    msg.direction = 235U;
    msg.custom.assign("EZJHLXOLVBLNWBKQNTMWSCVGRBPVMJKTMPEUZOVCJDHZCQWWGIPIZEMWGIQVPETHBTAWGRYHSXGPPSTXRMHEOSHBXVUZHEQURXSQCZIXUPALFERKEONJLMMCCJKAZOONRVXPDDFAQSCDKGCKQAQULTIBXLWDUUTYLBLF");

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
    msg.setTimeStamp(0.5068735173094827);
    msg.setSource(13072U);
    msg.setSourceEntity(137U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(53U);
    msg.timeout = 64360U;
    msg.lat = 0.19437094092324436;
    msg.lon = 0.6050713591566268;
    msg.z = 0.01594959366873394;
    msg.z_units = 153U;
    msg.duration = 611U;
    msg.speed = 0.2516939187780921;
    msg.speed_units = 236U;
    msg.type = 207U;
    msg.radius = 0.2654694853686117;
    msg.length = 0.3302771407043147;
    msg.bearing = 0.5412939249786506;
    msg.direction = 47U;
    msg.custom.assign("VQFXJIABXZROHMPYQNXRYFNSORENLNYXHJLIFWCLZKVZDDZHSAYMVGTAGIEIXEOUITLNNUJGFBRNAREUQGEPHCEHPEYDXYJMOAEJTMSCWDQBVGAUVIWVKPGWOVGJRMRDPSQXIHZBEZTAFTNCZLOXDXOCSSWQLKMUULBVAJZPZPKTHKSFRPHHKQUCBZAULTFPTKBWCPDCUSDJTUYAFSNCYMFQYGBRDMKK");

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
    msg.setTimeStamp(0.22853883993694402);
    msg.setSource(1481U);
    msg.setSourceEntity(55U);
    msg.setDestination(1892U);
    msg.setDestinationEntity(20U);
    msg.duration = 18009U;
    msg.custom.assign("LBTZTTRHEYPDATGXPCLZIDQFVESVFILANMGLHJLJFIIIJQNENRQPFYSPJZKDVMFSMZBFXKMVYGDATOQWOUHWORDPRMEBYZXLRCBJJSYXOKOSZHUCKEEXYFBEQLIIGZPPATRDVBZUVAURMMCNRWUSA");

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
    msg.setTimeStamp(0.3484474404503961);
    msg.setSource(38154U);
    msg.setSourceEntity(163U);
    msg.setDestination(44222U);
    msg.setDestinationEntity(159U);
    msg.duration = 762U;
    msg.custom.assign("KHLWFNVVRLSURZCSHXUCYTAECMAWARNOVDWKINYNKSPCOUELJUEEFUDVFLCUEHFINMDDWSBOTTNRPMDRBHZKMGETYDCOZZKQVKAWCAOIDJMUZQYXWSBGGQCJKZYJVTPILMFUEWPYVOYL");

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
    msg.setTimeStamp(0.2491124809856582);
    msg.setSource(533U);
    msg.setSourceEntity(25U);
    msg.setDestination(6144U);
    msg.setDestinationEntity(31U);
    msg.duration = 44067U;
    msg.custom.assign("VHZZWQLMDWWDVHNSPTCKTXPGGJRIQYZIXNGCOKULLIVCHMSLDMXDVXQFKYVJBZDQFNJHUSPONUAKAZMBGRZEEPWWSFXHDAGIOTWRLBKFUKBPLQUMZOXZEAMYSOHLBMKIJJLILYFVNTVUVRYGQ");

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
    msg.setTimeStamp(0.07930109117023276);
    msg.setSource(56840U);
    msg.setSourceEntity(214U);
    msg.setDestination(43175U);
    msg.setDestinationEntity(248U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1054621421U;
    tmp_msg_0.start_lat = 0.6119189029637474;
    tmp_msg_0.start_lon = 0.5864028907893271;
    tmp_msg_0.start_z = 0.9739321770173998;
    tmp_msg_0.start_z_units = 180U;
    tmp_msg_0.end_lat = 0.5982757605366075;
    tmp_msg_0.end_lon = 0.6283684037057495;
    tmp_msg_0.end_z = 0.5744869449990163;
    tmp_msg_0.end_z_units = 95U;
    tmp_msg_0.speed = 0.2358507514184307;
    tmp_msg_0.speed_units = 166U;
    tmp_msg_0.lradius = 0.38026786352684516;
    tmp_msg_0.flags = 209U;
    msg.control.set(tmp_msg_0);
    msg.duration = 20068U;
    msg.custom.assign("QBLOKIXJSUDJLNCRHFNKYF");

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
    msg.setTimeStamp(0.7444913936833203);
    msg.setSource(52673U);
    msg.setSourceEntity(74U);
    msg.setDestination(45257U);
    msg.setDestinationEntity(133U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.867671909438942;
    msg.control.set(tmp_msg_0);
    msg.duration = 44403U;
    msg.custom.assign("LSEIYOPNADXGYKKVUVMZDCYBSTWPJFQRIZFZETFHBPIJB");

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
    msg.setTimeStamp(0.5462639192063458);
    msg.setSource(20967U);
    msg.setSourceEntity(228U);
    msg.setDestination(39175U);
    msg.setDestinationEntity(24U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.599419469696405;
    msg.control.set(tmp_msg_0);
    msg.duration = 33704U;
    msg.custom.assign("WCYREDKUGCIVPJLGJKATLPHZABUCFVANSLYENVPHOQJSBRQXGHXFEKBUVMYIDPLVYHVQIQBMYDJATLOLOSXYPNIZCWACBEKTHQYWZWEQGAJKGFTHOWFXNRZZIRMLKUSFOJCOXEDRNUKNFGOXHIMVNP");

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
    msg.setTimeStamp(0.09295698574121469);
    msg.setSource(8001U);
    msg.setSourceEntity(84U);
    msg.setDestination(12598U);
    msg.setDestinationEntity(124U);
    msg.timeout = 16572U;
    msg.lat = 0.08041245179694301;
    msg.lon = 0.03013411089691942;
    msg.z = 0.47346130788044616;
    msg.z_units = 107U;
    msg.speed = 0.01804904495500037;
    msg.speed_units = 234U;
    msg.bearing = 0.34177653012281195;
    msg.cross_angle = 0.006105966512008454;
    msg.width = 0.5697724893100004;
    msg.length = 0.768463647172445;
    msg.hstep = 0.7171412292976924;
    msg.coff = 15U;
    msg.alternation = 118U;
    msg.flags = 21U;
    msg.custom.assign("JHKVVTYNKQYHJDPAMRGFKDYLRXIPDSOBTLJCVSDDEYTREHTTKOBJUSEGPVSCGNELUAJNDICBGIUDOCYNPRJBPFLVSFWHIPTYNMXWOUAXACCFXZHWGMJWBOQMHIEVJTVQSPRFWGVZZGZYTEZQEORDHAYZWNCUSOAMXTVLJHNXKLLJWARQQOFCSXKQVYLKLXZMMHIUPIIAKMZOLNSPINGQBTBEERUPNGDZGBXBCWF");

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
    msg.setTimeStamp(0.6203477118502395);
    msg.setSource(5023U);
    msg.setSourceEntity(201U);
    msg.setDestination(10992U);
    msg.setDestinationEntity(5U);
    msg.timeout = 14725U;
    msg.lat = 0.7939659700089229;
    msg.lon = 0.9750477589101333;
    msg.z = 0.6980370867584869;
    msg.z_units = 224U;
    msg.speed = 0.2702937246433976;
    msg.speed_units = 245U;
    msg.bearing = 0.3194875474721761;
    msg.cross_angle = 0.4467681886138165;
    msg.width = 0.5846511510006938;
    msg.length = 0.5784387489748184;
    msg.hstep = 0.21709822029826809;
    msg.coff = 113U;
    msg.alternation = 69U;
    msg.flags = 130U;
    msg.custom.assign("OIIKJNPVQMRCDMPCOYNTXSDNNUHEHQIACUKLHNEWBSSNGGRZSJGKWEULRJITZAGOVWVDDEKTFDBUKCPPHEUOJLECPUYYNQRMSQZLZBDJQWBXC");

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
    msg.setTimeStamp(0.2820162691000867);
    msg.setSource(28971U);
    msg.setSourceEntity(71U);
    msg.setDestination(57458U);
    msg.setDestinationEntity(63U);
    msg.timeout = 37578U;
    msg.lat = 0.6253461536373471;
    msg.lon = 0.3323757777916918;
    msg.z = 0.2516168408999109;
    msg.z_units = 37U;
    msg.speed = 0.311840471824559;
    msg.speed_units = 84U;
    msg.bearing = 0.3271508188890002;
    msg.cross_angle = 0.37095116914567894;
    msg.width = 0.2580755812096326;
    msg.length = 0.6793765281857791;
    msg.hstep = 0.7196715461765375;
    msg.coff = 246U;
    msg.alternation = 151U;
    msg.flags = 76U;
    msg.custom.assign("FXQFWVILESNLTDTYVAONRILMPRMFMTDHVCJLBHMLSJBKXUQUGJOTYGGQQRBTOIDWMDCKNAZMJAHPW");

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
    msg.setTimeStamp(0.5074684059136402);
    msg.setSource(50894U);
    msg.setSourceEntity(122U);
    msg.setDestination(24018U);
    msg.setDestinationEntity(21U);
    msg.timeout = 32162U;
    msg.lat = 0.5822480510812963;
    msg.lon = 0.3267456725102228;
    msg.z = 0.6789508107019263;
    msg.z_units = 176U;
    msg.speed = 0.7249239292199382;
    msg.speed_units = 152U;
    msg.custom.assign("ICAGXWTWCVSRWPQBCEUVLBETRDKKSGATWZQATQJDODXIKJORUQSMINVXLFNNRURWNMMFGKJAKMZIJEIQSYNUCGBEDOOPMBFMSSAZBEBYPHGIXZUGVCYSXJNFUDEGEOXIPAPRFYCTRXASXDFZZVLYANHGYBNWCNFTOSPORBBDHEG");

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
    msg.setTimeStamp(0.27832063703694254);
    msg.setSource(9121U);
    msg.setSourceEntity(5U);
    msg.setDestination(17486U);
    msg.setDestinationEntity(134U);
    msg.timeout = 3378U;
    msg.lat = 0.9362762177532997;
    msg.lon = 0.6470062614216;
    msg.z = 0.8270117115099297;
    msg.z_units = 217U;
    msg.speed = 0.040689226258661004;
    msg.speed_units = 120U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6761467658997623;
    tmp_msg_0.y = 0.005955355668938789;
    tmp_msg_0.z = 0.3347237418815068;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KCIAHTTRSPZUFNETHMIKQTWQYWMXPSCTGUCVYFIEZOXVFEUTPCZEBLSGGBWLWMDKBRZPJBMJJDUMIJXAFLRQQWCXJOBNVFYABUJLFFKBMWGXDDPGEADQKVTVEDXBXFUXUAYQVZQIDGKPOPACMJOTMLHODQFMLQXPSNBPENYVACDSNFRYCIKUWCHRZWUVWXZVZZDCPIYSOOSSUWNNTBGJKEVR");

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
    msg.setTimeStamp(0.30286151226858016);
    msg.setSource(656U);
    msg.setSourceEntity(218U);
    msg.setDestination(4524U);
    msg.setDestinationEntity(193U);
    msg.timeout = 40613U;
    msg.lat = 0.6498451569528012;
    msg.lon = 0.516882001535966;
    msg.z = 0.6470868103912218;
    msg.z_units = 75U;
    msg.speed = 0.5899891161664806;
    msg.speed_units = 14U;
    msg.custom.assign("GMYFCISUMGJDCSLFOUAGDVHRVIVLAVWGYEYWQPXZWFTRCPFJUXUQSISJXMQNLLYNCADJJGDDVODVYKDWJQYSPXRXEIPWJMGNAPZOBWBLFAMZCRMTLQRYQTWBVTBWZNUDKLCHEKMQFKNNIJKOBQAQAXZOGEEHYLZRPEIIJAHZVNRCGUUSBFUOTLZKPHUCIBVXMSPWSOATFK");

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
    msg.setTimeStamp(0.04010719330703272);
    msg.setSource(20655U);
    msg.setSourceEntity(207U);
    msg.setDestination(946U);
    msg.setDestinationEntity(124U);
    msg.x = 0.10436304991027334;
    msg.y = 0.23636855019143155;
    msg.z = 0.9803254101728361;

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
    msg.setTimeStamp(0.305747484688188);
    msg.setSource(60256U);
    msg.setSourceEntity(16U);
    msg.setDestination(31033U);
    msg.setDestinationEntity(20U);
    msg.x = 0.1225137194746797;
    msg.y = 0.3738496847678302;
    msg.z = 0.8148497313432195;

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
    msg.setTimeStamp(0.5035911411396607);
    msg.setSource(20777U);
    msg.setSourceEntity(177U);
    msg.setDestination(50380U);
    msg.setDestinationEntity(171U);
    msg.x = 0.2572115943277251;
    msg.y = 0.3131108115203891;
    msg.z = 0.7860321812620231;

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
    msg.setTimeStamp(0.06433627236406869);
    msg.setSource(389U);
    msg.setSourceEntity(13U);
    msg.setDestination(40042U);
    msg.setDestinationEntity(176U);
    msg.timeout = 46856U;
    msg.lat = 0.9111926259355217;
    msg.lon = 0.8956917302242154;
    msg.z = 0.9832927586739705;
    msg.z_units = 122U;
    msg.amplitude = 0.21465444181553317;
    msg.pitch = 0.4614540968800387;
    msg.speed = 0.8973227558400826;
    msg.speed_units = 12U;
    msg.custom.assign("HJQBKXWSALTUZCTKHAFYTUXGIRNLGCJQSGTZYSWLGUUUBEXRAFCBQKCUCCCTFJTMREVNQZFAXJGNLVBKROIZHSMPTXWYKWNCNHHBAYDJUIXNPYWQVVSSRZHURZLNFMZWDIIFIMDOEKTOAQFJOUMDYPDEWQPBVNYHPNVUPRI");

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
    msg.setTimeStamp(0.9940770552054224);
    msg.setSource(60123U);
    msg.setSourceEntity(161U);
    msg.setDestination(8616U);
    msg.setDestinationEntity(35U);
    msg.timeout = 32229U;
    msg.lat = 0.21993130214197787;
    msg.lon = 0.07305938617659158;
    msg.z = 0.5131024159315798;
    msg.z_units = 180U;
    msg.amplitude = 0.8749163200871796;
    msg.pitch = 0.5140956628795627;
    msg.speed = 0.13262650028015266;
    msg.speed_units = 229U;
    msg.custom.assign("LCHKUKZSPZGKLRWRGPEJXKDTYTOJZBPDDXMLEEFVPXSMOCMVDOMYLSAUFHKYZOFMJUEUHEXLFBDNHDOWGTORRVXUCKPRFXQNZAZJVUXWNANRHSQAITCVLYXGRDTMIUGZMQDVKXWVFBMELSY");

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
    msg.setTimeStamp(0.36549963937932395);
    msg.setSource(17916U);
    msg.setSourceEntity(184U);
    msg.setDestination(40862U);
    msg.setDestinationEntity(228U);
    msg.timeout = 10676U;
    msg.lat = 0.605301865429908;
    msg.lon = 0.8112090590797701;
    msg.z = 0.908072401440739;
    msg.z_units = 229U;
    msg.amplitude = 0.018379252256799594;
    msg.pitch = 0.9496307005534574;
    msg.speed = 0.2669278385561955;
    msg.speed_units = 243U;
    msg.custom.assign("WMKDWTDQLIRPPQQEANNCXOQDFLZLJOBCGWTMVFVEZPBODIFJDHMZJWSPIBEABSEOXOEHCWTPZRBFJHHMCCAATNVEAIVCSAHIGDFTNSZIXWXYKJPTRCKKZDKGKKIVCZHSVUMVGLTKEFKAQNLUPMMJVGTBGXGIFQUFBQ");

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
    msg.setTimeStamp(0.24778395884028737);
    msg.setSource(57883U);
    msg.setSourceEntity(59U);
    msg.setDestination(4510U);
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
    msg.setTimeStamp(0.66598474897035);
    msg.setSource(62120U);
    msg.setSourceEntity(236U);
    msg.setDestination(55372U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.1941476585908295);
    msg.setSource(54987U);
    msg.setSourceEntity(5U);
    msg.setDestination(50751U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.7746212111398054);
    msg.setSource(2891U);
    msg.setSourceEntity(91U);
    msg.setDestination(34497U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.9691232320176142;
    msg.lon = 0.15886482394966572;
    msg.z = 0.3767316649773176;
    msg.z_units = 113U;
    msg.radius = 0.589607188619755;
    msg.duration = 45927U;
    msg.speed = 0.9400616769840572;
    msg.speed_units = 236U;
    msg.custom.assign("AIFFHVSOIZGLVVKIOKLBOBBQCVGWZHVOMTEZGNLXFMBZVFVWZCCROLQBMCQOCGOMHQDQKZMRZAPADQMWJXIGTANKOTMPDPNNHHHIIIGSTAMLTDWKRGNPDFBBSCPLDJRYYIJJ");

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
    msg.setTimeStamp(0.7917641077253267);
    msg.setSource(5448U);
    msg.setSourceEntity(216U);
    msg.setDestination(47537U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.6701145717572972;
    msg.lon = 0.9890515611421394;
    msg.z = 0.5578444581765074;
    msg.z_units = 197U;
    msg.radius = 0.5175131245999939;
    msg.duration = 13586U;
    msg.speed = 0.9462732651277713;
    msg.speed_units = 215U;
    msg.custom.assign("BFGMUGCFFWCNXPMNPZSXRUELHYHWGDBQNSQTIXUQULMAOWNRZICSPKPZWYXFGZGSUWYLGROKQRTDGTMEJBREUYMTYYJJBEXNUVVDZWGTIXVTACUIGLNYOEPKJFXPLDLWXIDCOPQZIWXVPDOSVFKVHWAIBKMJHESAHAKVOALJTDKROMAJWITQUCXCBCPRSEVN");

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
    msg.setTimeStamp(0.8550484282533927);
    msg.setSource(17471U);
    msg.setSourceEntity(43U);
    msg.setDestination(31535U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.9423044516786012;
    msg.lon = 0.7709886779067627;
    msg.z = 0.5572646517272754;
    msg.z_units = 120U;
    msg.radius = 0.8745846216713827;
    msg.duration = 54407U;
    msg.speed = 0.2324621447264582;
    msg.speed_units = 14U;
    msg.custom.assign("SMFCLVROKQZMJKRRMCFCZLVXGAOZGYVXUIWQGCANZSPBDXAQYWDSPDNMLOXNUTTJUKUCIXOWLAVHUGQZOJJVDPUFUPAHZBLOGOJIRDKEISHVMUCNGJMWOTZSVEJDWYHNFBNSEBDBHRDQ");

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
    msg.setTimeStamp(0.3015754324743205);
    msg.setSource(60975U);
    msg.setSourceEntity(159U);
    msg.setDestination(26883U);
    msg.setDestinationEntity(152U);
    msg.timeout = 3854U;
    msg.flags = 76U;
    msg.lat = 0.6827400224545775;
    msg.lon = 0.7099009767724167;
    msg.start_z = 0.07303796857369005;
    msg.start_z_units = 0U;
    msg.end_z = 0.7995553340971284;
    msg.end_z_units = 133U;
    msg.radius = 0.49270177306371177;
    msg.speed = 0.47365505278101505;
    msg.speed_units = 92U;
    msg.custom.assign("BRCLERCMFZJOTKOSKOWUQFWMBKYTWVETTADMYTTHSVMXIYVEWTGFPZJMKKPURQPIOGCJSVXZPOZWEALUHGMQZHWHCZBVHVEHBIXSRDNULNYGDEVNUNAOUXKSCDNJVLQDYXBXBMBKTOWXAXUPDDJFAILJUYWHNMOTUIZHKQRDIJSQQNAPGNNPAGCLELXLWZSKHZSFMV");

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
    msg.setTimeStamp(0.09725700383202884);
    msg.setSource(15073U);
    msg.setSourceEntity(112U);
    msg.setDestination(39143U);
    msg.setDestinationEntity(38U);
    msg.timeout = 8058U;
    msg.flags = 86U;
    msg.lat = 0.07549239294904542;
    msg.lon = 0.5133563816818704;
    msg.start_z = 0.031405302709957894;
    msg.start_z_units = 64U;
    msg.end_z = 0.23841241549447656;
    msg.end_z_units = 206U;
    msg.radius = 0.4370877952121357;
    msg.speed = 0.9204103002202695;
    msg.speed_units = 246U;
    msg.custom.assign("UBNCTDUTFNPSMQYBFWVRCSUQORHXTIMRRJFPDIKLFXVFEJECIJRBHGUFJULHCNANUMEBZKXUDCOFAIKTHOGVRTSPODTYXGASWJLCUZDHLEKGXAGZMQVZVAVSWABHDOIHIKLQFOF");

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
    msg.setTimeStamp(0.9486369926826267);
    msg.setSource(37644U);
    msg.setSourceEntity(192U);
    msg.setDestination(51598U);
    msg.setDestinationEntity(59U);
    msg.timeout = 27557U;
    msg.flags = 157U;
    msg.lat = 0.743612124586487;
    msg.lon = 0.6741990822566564;
    msg.start_z = 0.27177740547925455;
    msg.start_z_units = 116U;
    msg.end_z = 0.7068953676462953;
    msg.end_z_units = 168U;
    msg.radius = 0.5466636714538013;
    msg.speed = 0.24140393245156;
    msg.speed_units = 218U;
    msg.custom.assign("FFIXLGCXUYZEHDAEWOAGQDNTXLXOXEBLBDTQMXDBJZRGJSKUUSWBESMIHCDEDAUWSNQPXGRRUPTSIURKPKHLFOCXFFURQMBUDQKCOGTNONTJSIVRNGFRXHLPPYWPZAKKIO");

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
    msg.setTimeStamp(0.12956171855416532);
    msg.setSource(41519U);
    msg.setSourceEntity(183U);
    msg.setDestination(56623U);
    msg.setDestinationEntity(25U);
    msg.timeout = 40532U;
    msg.lat = 0.9897242572023822;
    msg.lon = 0.9953536019857099;
    msg.z = 0.33466759687547387;
    msg.z_units = 181U;
    msg.speed = 0.7128302957783303;
    msg.speed_units = 233U;
    msg.custom.assign("WECZXIOKUGHTOBWRKTMWNDBIVXQCKHUROGYIMWGLJMHVVEMHQTFSVEZHEQVIDOPLDSZXBOVDGUWUEUBLEJFNTSIFPLEVIRGGLRZQHTXNQFFOCKNKYQOCJJGUPUBABHCOFISFLSYFLCMNFBRSSNKJQZIPZZRVKDYPAPRJNDBGQDQVAUSALTCTAXBWJTHMOQNTZNEYLVWRUPYJAAMYJKDCMXAPHAZXYKNFUSPELMACTDXOJXIHPBZRWD");

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
    msg.setTimeStamp(0.11006699170673151);
    msg.setSource(20146U);
    msg.setSourceEntity(173U);
    msg.setDestination(45970U);
    msg.setDestinationEntity(138U);
    msg.timeout = 35759U;
    msg.lat = 0.6209138546077807;
    msg.lon = 0.24317927595021838;
    msg.z = 0.061656328929670434;
    msg.z_units = 247U;
    msg.speed = 0.8494767280438997;
    msg.speed_units = 109U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2970507124907754;
    tmp_msg_0.y = 0.8707764703851103;
    tmp_msg_0.z = 0.7997688947873817;
    tmp_msg_0.t = 0.6941625571837657;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZIORDDGZTLUMRQTAWNNSKGTSBWSJEIJKZPVHDWYUPVPAPEZQIAJFFKXSCXQAMWIFJUJACMGFTYVBWCEDJKOCBMKCLTUGEVONCHZUOYXRAZUBXWWOIPVNNIEHPGRAFCQHHEFVGOLGOKJODEYIEQGRHAQZDFFEYULXQHPPHBVOVDSHLBRRLMMRYILNNAVUZFWCCPQLGGBPCVHKKNKDWSBYTE");

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
    msg.setTimeStamp(0.6399632715121127);
    msg.setSource(64043U);
    msg.setSourceEntity(4U);
    msg.setDestination(45163U);
    msg.setDestinationEntity(36U);
    msg.timeout = 26102U;
    msg.lat = 0.9827778344404848;
    msg.lon = 0.9815804268392813;
    msg.z = 0.14484771129910512;
    msg.z_units = 122U;
    msg.speed = 0.9660528016810954;
    msg.speed_units = 228U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.47109529381243354;
    tmp_msg_0.y = 0.6928139869431985;
    tmp_msg_0.z = 0.7603931129127582;
    tmp_msg_0.t = 0.8052844976433247;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HYPLYRXZYDTGPLCC");

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
    msg.setTimeStamp(0.39211837290154594);
    msg.setSource(55439U);
    msg.setSourceEntity(175U);
    msg.setDestination(12641U);
    msg.setDestinationEntity(217U);
    msg.x = 0.9016370180716824;
    msg.y = 0.6570889603114204;
    msg.z = 0.12170675522475327;
    msg.t = 0.19500046269649862;

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
    msg.setTimeStamp(0.09200575292393298);
    msg.setSource(25851U);
    msg.setSourceEntity(122U);
    msg.setDestination(52473U);
    msg.setDestinationEntity(86U);
    msg.x = 0.9838235860812221;
    msg.y = 0.08477475452539662;
    msg.z = 0.29470928312203915;
    msg.t = 0.10311615731022183;

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
    msg.setTimeStamp(0.7404183128095508);
    msg.setSource(32303U);
    msg.setSourceEntity(1U);
    msg.setDestination(19811U);
    msg.setDestinationEntity(130U);
    msg.x = 0.857592353041341;
    msg.y = 0.5258913779383985;
    msg.z = 0.8838717387987991;
    msg.t = 0.28092991819342106;

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
    msg.setTimeStamp(0.5304466612587606);
    msg.setSource(24103U);
    msg.setSourceEntity(189U);
    msg.setDestination(10286U);
    msg.setDestinationEntity(73U);
    msg.timeout = 39693U;
    msg.name.assign("KVQDTYCPQQBOGHARFKODJKLMZVCHSFYDNYEHAPNEPHXBJZKLPEJRVTTWXLWNUXFIRDBURZNUWIFGPSXMVIAWRRHGAULYUDCVMWBQJVGWYZZQFGZABAPVDBHOSRRXU");
    msg.custom.assign("DATCWHIVLKVCRXOWJLPEAUQUFCIFWBXJDQBHTZYKJKSMXMZDDFYZVNNBRXHSZUYGBTOSPMUGRH");

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
    msg.setTimeStamp(0.34667512440087167);
    msg.setSource(57952U);
    msg.setSourceEntity(16U);
    msg.setDestination(56134U);
    msg.setDestinationEntity(240U);
    msg.timeout = 1399U;
    msg.name.assign("SAARLDIXUNLEUBZQAPUCMGGJJENUFVQDVYFOYHJWNAXMCJRNJULRPOQWNQSECJIBFBYFFPELGZAHNKGLZZKSXOZHXT");
    msg.custom.assign("VYSBLZHYFEEAC");

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
    msg.setTimeStamp(0.9458411872869785);
    msg.setSource(8060U);
    msg.setSourceEntity(3U);
    msg.setDestination(37065U);
    msg.setDestinationEntity(152U);
    msg.timeout = 3962U;
    msg.name.assign("CMTUFJRXLPYJAQKMKBLMNEMGYGNLGDOKXILZZYTANHEXNJECJRZDUWYQCXFBNLPFAFNZMKEHZNOODPAVVCERFUODUGQTUYHPTU");
    msg.custom.assign("JDMRUGUCXVERFMJOCLKBETGIHUQRFIIGNPQWFXZXFRXKZGIBVZGAJSEFBQZAHPTYIYOWXWQJNOZZFDWBKSPKPPAYXVBNGOABAVELYD");

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
    msg.setTimeStamp(0.9367960349882826);
    msg.setSource(30189U);
    msg.setSourceEntity(6U);
    msg.setDestination(5453U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.01721371404692784;
    msg.lon = 0.4701271506851945;
    msg.z = 0.7307786570086594;
    msg.z_units = 166U;
    msg.speed = 0.2525297131074066;
    msg.speed_units = 84U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8948091529695942;
    tmp_msg_0.y = 0.0829751043943201;
    tmp_msg_0.z = 0.7100224359805019;
    tmp_msg_0.t = 0.35553806083894757;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.18183936579440607;
    msg.custom.assign("KWNGEFDRFQTBOPMJVLTDQYNSWKRTXUJXKFHWQRHVPGEZLCKSCMYBXBBVZCUAQAHJTNPXTTZONRWOPKKIRSGLYXGCTAIFDCDPNQHHSVCBREQGQVHEJYFYBQIBGIUY");

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
    msg.setTimeStamp(0.07700406318425002);
    msg.setSource(36332U);
    msg.setSourceEntity(183U);
    msg.setDestination(57497U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.3116100619914014;
    msg.lon = 0.8244036591681027;
    msg.z = 0.38073169309211796;
    msg.z_units = 129U;
    msg.speed = 0.4650322584452701;
    msg.speed_units = 214U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8627174051523361;
    tmp_msg_0.y = 0.8842066106710698;
    tmp_msg_0.z = 0.4686297410100365;
    tmp_msg_0.t = 0.1594951645839191;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 30706U;
    tmp_msg_1.off_x = 0.18148871432264302;
    tmp_msg_1.off_y = 0.5618202269607758;
    tmp_msg_1.off_z = 0.8471500979491405;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6404217437140983;
    msg.custom.assign("HKEQYQAPTNYMKEURKNCKKEIAOFQBXYTSMSTDJWHS");

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
    msg.setTimeStamp(0.5466497670829369);
    msg.setSource(6296U);
    msg.setSourceEntity(17U);
    msg.setDestination(14979U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.8568592188765081;
    msg.lon = 0.9340667483670463;
    msg.z = 0.7907615710830984;
    msg.z_units = 27U;
    msg.speed = 0.5848560629606612;
    msg.speed_units = 235U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15701U;
    tmp_msg_0.off_x = 0.28562591357608624;
    tmp_msg_0.off_y = 0.2653284651789469;
    tmp_msg_0.off_z = 0.008695169554288062;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.3430342935026063;
    msg.custom.assign("MRCFPJTSIVLDEHOPDYHQDRPJAMVQXSNZJUQZBFQFMVNILEVXXREZWUDOZGKGTAQDMJGGMCTCNBESPPQXYVSOHNYQCFRWNDLOBNWKULZUILMGEAMRYWFGWKULGXSBZUQXQWZUSKCKVYMSVHLYVCVJYKNDUZJTHDEZJHDFUYWTZ");

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
    msg.setTimeStamp(0.05909585459794209);
    msg.setSource(42839U);
    msg.setSourceEntity(181U);
    msg.setDestination(35278U);
    msg.setDestinationEntity(111U);
    msg.vid = 4434U;
    msg.off_x = 0.6835302285895931;
    msg.off_y = 0.030542080159004725;
    msg.off_z = 0.8615187838672422;

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
    msg.setTimeStamp(0.7557127785352035);
    msg.setSource(46648U);
    msg.setSourceEntity(34U);
    msg.setDestination(59332U);
    msg.setDestinationEntity(91U);
    msg.vid = 27795U;
    msg.off_x = 0.9682017270669359;
    msg.off_y = 0.3022188931313109;
    msg.off_z = 0.3414047463290649;

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
    msg.setTimeStamp(0.7645668326277322);
    msg.setSource(35280U);
    msg.setSourceEntity(235U);
    msg.setDestination(8787U);
    msg.setDestinationEntity(136U);
    msg.vid = 60306U;
    msg.off_x = 0.8376354929576612;
    msg.off_y = 0.8766218170960585;
    msg.off_z = 0.8441917510653766;

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
    msg.setTimeStamp(0.7129311454604007);
    msg.setSource(59426U);
    msg.setSourceEntity(161U);
    msg.setDestination(30753U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.8330695373790147);
    msg.setSource(62680U);
    msg.setSourceEntity(107U);
    msg.setDestination(10770U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.0328477696958962);
    msg.setSource(9003U);
    msg.setSourceEntity(149U);
    msg.setDestination(39694U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.3470907409104569);
    msg.setSource(41356U);
    msg.setSourceEntity(94U);
    msg.setDestination(15868U);
    msg.setDestinationEntity(64U);
    msg.mid = 26085U;

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
    msg.setTimeStamp(0.04032377700964618);
    msg.setSource(23253U);
    msg.setSourceEntity(182U);
    msg.setDestination(39854U);
    msg.setDestinationEntity(107U);
    msg.mid = 33048U;

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
    msg.setTimeStamp(0.9792543027765289);
    msg.setSource(63293U);
    msg.setSourceEntity(114U);
    msg.setDestination(33982U);
    msg.setDestinationEntity(108U);
    msg.mid = 11732U;

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
    msg.setTimeStamp(0.4042731738197817);
    msg.setSource(62995U);
    msg.setSourceEntity(27U);
    msg.setDestination(54415U);
    msg.setDestinationEntity(240U);
    msg.state = 179U;
    msg.eta = 38755U;
    msg.info.assign("ZTMNPPLYKBOBTYFHBLIKUG");

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
    msg.setTimeStamp(0.43327457755165344);
    msg.setSource(59074U);
    msg.setSourceEntity(94U);
    msg.setDestination(37006U);
    msg.setDestinationEntity(228U);
    msg.state = 58U;
    msg.eta = 31893U;
    msg.info.assign("QJKSZQXDJTCLDFHZOQKOTXTUZBMTMKYNIUDBNZGKDDMKEHQWOLUSEJBPARWHGPTSZRWTEBMJZVFBMAAKRUWVJO");

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
    msg.setTimeStamp(0.6261021960520923);
    msg.setSource(51289U);
    msg.setSourceEntity(0U);
    msg.setDestination(59706U);
    msg.setDestinationEntity(229U);
    msg.state = 147U;
    msg.eta = 27158U;
    msg.info.assign("PSPBGYMKYOSUFOYOROHGWACZAHWFDAVQJYTWAYBWZRTPFKEKXRFTTRZTFUMHANAQHDEERSZKDVIGZBUSBUAOGBJXDREHMIQWQLZMECTYZUSRNHFEQFGQEIITKNKOIXHFTURNVJSXXDNWHBBRPKQIVCZVEYZCKXPBLHJVDGVOQJUCPLLPXNCAYKMMMLOCCJXNHDGINIPGDSDQFJKVNFMIQECGYXJIBS");

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
    msg.setTimeStamp(0.6521054829330162);
    msg.setSource(4095U);
    msg.setSourceEntity(186U);
    msg.setDestination(34662U);
    msg.setDestinationEntity(248U);
    msg.system = 29961U;
    msg.duration = 26541U;
    msg.speed = 0.1947640813760052;
    msg.speed_units = 40U;
    msg.x = 0.4239856644351595;
    msg.y = 0.9765900598101167;
    msg.z = 0.26161115936177815;
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
    msg.setTimeStamp(0.21822973703315163);
    msg.setSource(60975U);
    msg.setSourceEntity(217U);
    msg.setDestination(27364U);
    msg.setDestinationEntity(197U);
    msg.system = 39412U;
    msg.duration = 57378U;
    msg.speed = 0.9225178160368885;
    msg.speed_units = 123U;
    msg.x = 0.3823042057388022;
    msg.y = 0.022845990653385995;
    msg.z = 0.26567160998545825;
    msg.z_units = 44U;

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
    msg.setTimeStamp(0.22190288192081054);
    msg.setSource(8903U);
    msg.setSourceEntity(97U);
    msg.setDestination(15369U);
    msg.setDestinationEntity(68U);
    msg.system = 45765U;
    msg.duration = 10801U;
    msg.speed = 0.45693577530004026;
    msg.speed_units = 186U;
    msg.x = 0.3563527386452705;
    msg.y = 0.1842948744861551;
    msg.z = 0.07917895632329075;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.2540064350417154);
    msg.setSource(27975U);
    msg.setSourceEntity(34U);
    msg.setDestination(42497U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.4886607421934325;
    msg.lon = 0.43232291850344096;
    msg.speed = 0.07370441743493494;
    msg.speed_units = 232U;
    msg.duration = 4462U;
    msg.sys_a = 46969U;
    msg.sys_b = 31215U;
    msg.move_threshold = 0.348811195189382;

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
    msg.setTimeStamp(0.6560138637168506);
    msg.setSource(8996U);
    msg.setSourceEntity(152U);
    msg.setDestination(58683U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.6785092413921591;
    msg.lon = 0.11933856285469291;
    msg.speed = 0.06078329806692584;
    msg.speed_units = 141U;
    msg.duration = 26712U;
    msg.sys_a = 55623U;
    msg.sys_b = 39520U;
    msg.move_threshold = 0.5674263000588615;

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
    msg.setTimeStamp(0.3573922999811725);
    msg.setSource(38824U);
    msg.setSourceEntity(115U);
    msg.setDestination(54681U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.9008680441822466;
    msg.lon = 0.8416019180001121;
    msg.speed = 0.4086235555020925;
    msg.speed_units = 151U;
    msg.duration = 47199U;
    msg.sys_a = 12052U;
    msg.sys_b = 35431U;
    msg.move_threshold = 0.6237946430642818;

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
    msg.setTimeStamp(0.23500971357861533);
    msg.setSource(46271U);
    msg.setSourceEntity(59U);
    msg.setDestination(3630U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.5189506030885779;
    msg.lon = 0.7795548574081304;
    msg.z = 0.5462136422696303;
    msg.z_units = 236U;
    msg.speed = 0.8077103783341872;
    msg.speed_units = 214U;
    msg.custom.assign("TRMDQCGLEMIZDVWFRWBUARCIWAWJEKGWKAAOEOXMKGUATTJCMSRMTHZLNUHUHBGIFSCUVVEZEQVRNZYQOACLYOOPJSPPNMBDSPVQBRASDISFVNXIKGQKQDNJUTIAKHLTBKRFXORGNPFVCEVXXYLVCYEOYXPNHMHCKRQHWUELTLFGZXBJBNZWTBSHTZPJVDM");

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
    msg.setTimeStamp(0.8252997047630524);
    msg.setSource(6612U);
    msg.setSourceEntity(106U);
    msg.setDestination(59069U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.501440263778824;
    msg.lon = 0.03333129485073694;
    msg.z = 0.8183404667649222;
    msg.z_units = 160U;
    msg.speed = 0.2377915774921726;
    msg.speed_units = 103U;
    msg.custom.assign("YXUNYWQSJVTZSVHQLJQQGYDXUBVGYTQNOCTNGXCCNSMMWRSWQXJPHOSLTDCHMEXSRQXMPLBRDBMPUPRWKTDTFAJMHAVRMWAKVYRIWFZWHFYSKGHIEAZIKQPUYCFERHIKBCTEMOBDLKXIRUNJJPGZWADVLKTPAOFIEUYI");

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
    msg.setTimeStamp(0.9424669851616228);
    msg.setSource(33811U);
    msg.setSourceEntity(117U);
    msg.setDestination(62574U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.2822148095019573;
    msg.lon = 0.006550731512531938;
    msg.z = 0.23059155277706433;
    msg.z_units = 200U;
    msg.speed = 0.29885305533282747;
    msg.speed_units = 131U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.24010845533313507;
    tmp_msg_0.lon = 0.08858317951499206;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DGAIQCSDOYLPKFQAAQWXAAFVPLQUWCTURNRZHBTWLSHYFHDZNMJZVODNOSDCRVJYCVLBWTSPERHCIUVLIVTCBDIKQPPDOEYNOATANOZQWIBDPMBHYETWJHJGZIKEMJ");

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
    msg.setTimeStamp(0.016630907034646092);
    msg.setSource(56576U);
    msg.setSourceEntity(211U);
    msg.setDestination(27288U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.8045856008861777;
    msg.lon = 0.7119655006058118;

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
    msg.setTimeStamp(0.39624510384972855);
    msg.setSource(44918U);
    msg.setSourceEntity(35U);
    msg.setDestination(9170U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.6143129105147588;
    msg.lon = 0.40379629095060265;

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
    msg.setTimeStamp(0.7298585126076105);
    msg.setSource(16938U);
    msg.setSourceEntity(170U);
    msg.setDestination(51867U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.8066280352877724;
    msg.lon = 0.750957807890887;

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
    msg.setTimeStamp(0.4280163718483958);
    msg.setSource(51573U);
    msg.setSourceEntity(24U);
    msg.setDestination(44810U);
    msg.setDestinationEntity(95U);
    msg.timeout = 42363U;
    msg.lat = 0.06149725805532802;
    msg.lon = 0.7112373377830121;
    msg.z = 0.8837313492521529;
    msg.z_units = 242U;
    msg.pitch = 0.5754722688413393;
    msg.amplitude = 0.1858713060980105;
    msg.duration = 9475U;
    msg.speed = 0.4090023058701291;
    msg.speed_units = 61U;
    msg.radius = 0.8324344725208174;
    msg.direction = 179U;
    msg.custom.assign("YPJKBQPIWKRWZFRZUABHUGRUKQSTMOMGSPVOWYZTUDZRDNQSPRAGDTFTVBJSWSELLEVTJJKUWFVBXPBTXJGSSACYILIWOEKWENJUDGQQQFGMLYPUYNEACOWNAIHLGIFMBHHTARQOXCHVMOPXYLOCRYSJO");

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
    msg.setTimeStamp(0.4080615214972215);
    msg.setSource(3335U);
    msg.setSourceEntity(9U);
    msg.setDestination(12724U);
    msg.setDestinationEntity(27U);
    msg.timeout = 41839U;
    msg.lat = 0.9908139433994855;
    msg.lon = 0.27751332858504185;
    msg.z = 0.6504077542436794;
    msg.z_units = 123U;
    msg.pitch = 0.2424319419132822;
    msg.amplitude = 0.8831189533828476;
    msg.duration = 25340U;
    msg.speed = 0.36846948203083896;
    msg.speed_units = 10U;
    msg.radius = 0.14582618491993649;
    msg.direction = 197U;
    msg.custom.assign("DRXJQONLGSZHYVSKWFUULJGHBWZMZOHDARACRSBLZKUQGTNGPBDCYQOOYOSLKHZWVTQAZIXWHLPPGRIWNIMDMEMVFAJEYNSMBUSQQUJRLOYHVRHDEZCNXTUWNPEFINBJDNUIYSWBMYPCETLPXYLERWKUGPTUTVKDZPWRBOXPLVFQSBMSFRFEKCGOXGKDXRBZIASQEFKVVQM");

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
    msg.setTimeStamp(0.5530120172749298);
    msg.setSource(46367U);
    msg.setSourceEntity(88U);
    msg.setDestination(19583U);
    msg.setDestinationEntity(142U);
    msg.timeout = 50820U;
    msg.lat = 0.01577160682898937;
    msg.lon = 0.13226932847041883;
    msg.z = 0.06689661138034009;
    msg.z_units = 60U;
    msg.pitch = 0.1690294166352666;
    msg.amplitude = 0.4261992114377473;
    msg.duration = 60313U;
    msg.speed = 0.9663728828744779;
    msg.speed_units = 19U;
    msg.radius = 0.6318647435272804;
    msg.direction = 190U;
    msg.custom.assign("ZVODYCJATUJTHKDEUQNPKNKQMJTIDJLWXIHSOLGNPLOFVLXZTESXEEXRQCARFOTOYJCCWGLIYIRRSIVSQQXHCUMPIKTCXNAJPFCMUUGVGIQVGIWRXRVACQBGFAEKKBNVZLBWFRJJLBXQLEHZHBHZQVNU");

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
    msg.setTimeStamp(0.328043678140321);
    msg.setSource(57755U);
    msg.setSourceEntity(162U);
    msg.setDestination(24738U);
    msg.setDestinationEntity(154U);
    msg.formation_name.assign("PWJRBNXXKNVAUBEXLOKDYJDRVECSGXOHNCBAOBAWANENXOQWYNGKIIXZVZUGVBHKPGKSKPFTLGVBJQZRNFDPRTFWPDUPHDUDAHQSNDZIMOFHGSHJQWUQRHOCEBZLVL");
    msg.reference_frame = 136U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 65172U;
    tmp_msg_0.off_x = 0.6630938032983718;
    tmp_msg_0.off_y = 0.34732275393780976;
    tmp_msg_0.off_z = 0.7681899256396708;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("GRVMPYMTZTZOULVIQVHBWLKYVBEMWZXTAXVUYPEGYMAWFJNGVREKCPRLFHOFXLXOOZOJHSKLCQRIQVAPWSOKVDYNDPNUMFUECXUCEZZFLLRNKBZKLWUTHXXJDYBCFSWWDNMYPQBHCSOHZADHKIGTGFOSSCJQNSZTCQYHFFGBDIQUMW");

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
    msg.setTimeStamp(0.7804616810562803);
    msg.setSource(55275U);
    msg.setSourceEntity(4U);
    msg.setDestination(48579U);
    msg.setDestinationEntity(199U);
    msg.formation_name.assign("CBDOOIASBTYQBKPFUUTVDOAQTMXHXGBSHEUJRGTEXXMYRPNYHGHFPIWUVCXRTILPXGDJLDVWSIFNYYPHULNUQGWKCHANWMBRFOYLWQYVZA");
    msg.reference_frame = 254U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 55663U;
    tmp_msg_0.off_x = 0.7628674957045375;
    tmp_msg_0.off_y = 0.7501333231476854;
    tmp_msg_0.off_z = 0.16439235194025614;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FYIXGZMSOOUFVBQESGBNRENRKOHXNOKSLAUOXPXSIQWWRTEXLRGVLHDCVHMHHWFKYNQITPQCKFXMJWHBNGZVEYWLRQEFLEBTMUBZCCIFMGFPSLYNNMFUD");

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
    msg.setTimeStamp(0.9212616229103114);
    msg.setSource(48275U);
    msg.setSourceEntity(105U);
    msg.setDestination(26772U);
    msg.setDestinationEntity(85U);
    msg.formation_name.assign("SLJXPFNFFKAIPCALHZBMAOQVOEHXS");
    msg.reference_frame = 51U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31201U;
    tmp_msg_0.off_x = 0.32003118363170036;
    tmp_msg_0.off_y = 0.9912203300974591;
    tmp_msg_0.off_z = 0.5600149756893806;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("KWKFKRKFGMDMAQVSPOMJPGDZIAKNYNHCQACTLXIUJOABDUYDCRHSPCPHUMFKGMQBFJHQQXGKTDQZTWXNMFQRLBN");

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
    msg.setTimeStamp(0.21582168441051452);
    msg.setSource(53422U);
    msg.setSourceEntity(228U);
    msg.setDestination(9096U);
    msg.setDestinationEntity(228U);
    msg.group_name.assign("FTQKFEWCUKJGJOSMOHGQFODGELNPFXRNONUVAEPGESRDWDEKDTJBAJBIMCSKDTAPMOCUFOBPSSOTPYLXCDAVEVBSOMRNUNTYZTXVXLRABDRHRMFIVWUIXENROHUKPLZZNKNHIZLPXHBYSFRRQJXQJJMVQPGZAWCYTQESAVWBEXYZLIHHQXJYIIDGWCLUCDLVSHPJQK");
    msg.formation_name.assign("FZRLEOZQMBYKDFRQELNQONVPEMYYLCKPWTWPWQOBSTPBALHNFGVZSKNORWXYCJJXEBBOEFH");
    msg.plan_id.assign("ERCAYOHVUKKGXYWXYEMBZQNSGAXDYYXTZESGGUDTXKYMQWDRJETIOKMH");
    msg.description.assign("XDTGHUCRPGGRKXMPWBFPYS");
    msg.leader_speed = 0.7668814575832577;
    msg.leader_bank_lim = 0.8853284382599385;
    msg.pos_sim_err_lim = 0.7243233077365746;
    msg.pos_sim_err_wrn = 0.28208890958503285;
    msg.pos_sim_err_timeout = 20381U;
    msg.converg_max = 0.4353829198731074;
    msg.converg_timeout = 20515U;
    msg.comms_timeout = 16332U;
    msg.turb_lim = 0.637649385602581;
    msg.custom.assign("KZSDEPGIIXZNPBGQKGGJVKTIOIATFCLVYUXJIJGKCWVKFYTMOSMAUMIZ");

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
    msg.setTimeStamp(0.2090854266613934);
    msg.setSource(22000U);
    msg.setSourceEntity(154U);
    msg.setDestination(58618U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("ZJPFWRKIGUAGBVPSOJZHVYKWTWQJTKQDOPCKOCMYDPGFYXNELAOMACECUZPBCVPKSTLXMKNBISRGCREXFAEGSIWOSJSQTUKTZDBEZDMTLJHRGWHIHDDNJGIUEXNQLJMLKP");
    msg.formation_name.assign("TDTAUZPTXNLVEAJUNSWSPCOMMHZDUAQEIQPRLSTZLUWCYPUTGYDWLEOCXENHRTHKHWTAYFUIOBOXXDDGSNKUVACRVDPNSYOIIGMIKZEDMJFLKHSWOOBYFXZRVPBYQCKZUBFVRGQSTPZCGRAIPBJYEJSWBAJXHCMHWTAJFAQGELDLLOHQIWEPXGOAKXPCHWFMRUHGKZBNJIVKVYJENNCYQZOMZNKIUYVGDVSFWNMFR");
    msg.plan_id.assign("ZKBOJNMXIYSRFDAPGHNONVKIZHPKGWBOWHSEBZLEUDYGCTUOVEABAUIJELNKQWTXTYHMSENGIOXXRZJXSDLFLCXTOFYVYGGTIXKGOBWLKQRUGRARMEPCJJRJTVBPCMKWDSGZWVHFAVKRFDUNPQZHQDBXMCCMJOZWHIOPOIAQAYSFDMUCCWFELNANATMJRSTEQUDFLBPPYRQSLMKBKSWHQPZYMPAVDJDWYVTZLNYUQBVCHFR");
    msg.description.assign("XZKVJLUWUOXDUULCNFBHOMKRMBDWWQPZRJUZPTZGZXHYRAQYXBFTZPHGPBETSEQJTVXAPETEIFAULCFKXIXYGDRCVOLKGFMHYNBNHZQQQSVOGKSDASBHSEYDWCSFCLTVASVLNNIHIKACDIWIRWXMDTUGPOCWJSNEWORWNEGHOJLHECTBJPYVJKNSRLZJIBRBALVYHDYQMFSEUQIXUUZANMACPLQK");
    msg.leader_speed = 0.15640156881165024;
    msg.leader_bank_lim = 0.9525880784432423;
    msg.pos_sim_err_lim = 0.8182247396819893;
    msg.pos_sim_err_wrn = 0.867559970321584;
    msg.pos_sim_err_timeout = 37343U;
    msg.converg_max = 0.7895394177491074;
    msg.converg_timeout = 58209U;
    msg.comms_timeout = 39628U;
    msg.turb_lim = 0.8351008325456672;
    msg.custom.assign("PQXOJVZJQWSSPKUTCSYXSTVSAJGEAPMCIHAFLKQZYZLRDRFZYREBMLPCAFYFBXIRMNNHYUUNDGLURJSTEIFCDWJJMPJKILKHQAOHPSTLKFXWZNIFHYGRBVHPYVXICYEKV");

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
    msg.setTimeStamp(0.7504370961213823);
    msg.setSource(4390U);
    msg.setSourceEntity(30U);
    msg.setDestination(38806U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("GMSFNFLCQQHCTGLWUGYHZPVFWF");
    msg.formation_name.assign("EJKWTYCBALAFPGJDYTCCOROPMJGRGRVTWFDIQKYKKFEKLOWBVCCVIDZGUHMNSCLSUZFRSSKZXAXJIYOBHZHFHNMHWBSQSEYTXAQEUEBUSTLMTLCIIPYGNFRRFQRXMMWNGMEYEKJZSINHNLQKGYQHHCKDABOXTAG");
    msg.plan_id.assign("ABTNVFRPGFPRPLDRCWXYSFUCMZFTOEJUGPRRAMUBDWCZYGSHVUBDDOSGULOQZOEXNOWBPWNXMJVELITXHXWPIUDLUIDQLLMSSLYYGJBRYWZBENAEAHYW");
    msg.description.assign("PWNXBOHWJZTYUXFLHRCKEPTDDNTOFORNBZWNEHDPUNLLEGFBBFAHVSPYDPBBKJZOYAJYQTJVOZLMMQIIYEAYIEQNKCRHRLUPKOZMBEJCLDHQJHJGGAOABXCTWIMLQXIGLWSIVZCGCVUOR");
    msg.leader_speed = 0.3067819340909089;
    msg.leader_bank_lim = 0.963614766298315;
    msg.pos_sim_err_lim = 0.4501293977049732;
    msg.pos_sim_err_wrn = 0.6215297085000914;
    msg.pos_sim_err_timeout = 22390U;
    msg.converg_max = 0.32930792661717234;
    msg.converg_timeout = 38381U;
    msg.comms_timeout = 63723U;
    msg.turb_lim = 0.322991605265346;
    msg.custom.assign("ULRWPCRVTHJXKFIIEMAJIPONWSIXUYHGOJTNEFDJJENSMOLQIYUWAXZBQPJLSMKKMTUSQAEVHFGXPFNOPACMQIZJTBBZSVGJVQFLHRROVKWNYZBZBLCDXGLDWROUCODGFNVNUIETQLEYXMYRDIZMVHLVGOESOYSYZPRNBKHTIXTTSSYE");

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
    msg.setTimeStamp(0.6154033030846595);
    msg.setSource(63456U);
    msg.setSourceEntity(37U);
    msg.setDestination(62028U);
    msg.setDestinationEntity(108U);
    msg.control_src = 42020U;
    msg.control_ent = 197U;
    msg.timeout = 0.9885905828721093;
    msg.loiter_radius = 0.5426346099127057;
    msg.altitude_interval = 0.8840748635157285;

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
    msg.setTimeStamp(0.5708278452752441);
    msg.setSource(8499U);
    msg.setSourceEntity(62U);
    msg.setDestination(47293U);
    msg.setDestinationEntity(147U);
    msg.control_src = 16693U;
    msg.control_ent = 96U;
    msg.timeout = 0.7507036853513955;
    msg.loiter_radius = 0.8442397443816394;
    msg.altitude_interval = 0.8289787605023781;

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
    msg.setTimeStamp(0.8004831010052321);
    msg.setSource(30584U);
    msg.setSourceEntity(242U);
    msg.setDestination(37214U);
    msg.setDestinationEntity(87U);
    msg.control_src = 8615U;
    msg.control_ent = 225U;
    msg.timeout = 0.10867641600062816;
    msg.loiter_radius = 0.560061712520156;
    msg.altitude_interval = 0.40515410058228296;

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
    msg.setTimeStamp(0.5978472615797554);
    msg.setSource(65435U);
    msg.setSourceEntity(73U);
    msg.setDestination(32027U);
    msg.setDestinationEntity(197U);
    msg.flags = 220U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.47940661150919683;
    tmp_msg_0.speed_units = 81U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8487513640628248;
    tmp_msg_1.z_units = 160U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.27586075653486664;
    msg.lon = 0.11405873384213161;
    msg.radius = 0.2468629404000806;

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
    msg.setTimeStamp(0.4139095857436247);
    msg.setSource(44996U);
    msg.setSourceEntity(177U);
    msg.setDestination(48811U);
    msg.setDestinationEntity(201U);
    msg.flags = 109U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.30162446535214094;
    tmp_msg_0.speed_units = 180U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.16144459509792708;
    tmp_msg_1.z_units = 40U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3199178121032933;
    msg.lon = 0.2417478893919064;
    msg.radius = 0.7218446749923476;

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
    msg.setTimeStamp(0.42012775428688953);
    msg.setSource(32086U);
    msg.setSourceEntity(57U);
    msg.setDestination(24169U);
    msg.setDestinationEntity(207U);
    msg.flags = 199U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7994840678664398;
    tmp_msg_0.speed_units = 88U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6679297373956172;
    tmp_msg_1.z_units = 19U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7154723375610288;
    msg.lon = 0.5199247944599602;
    msg.radius = 0.6826945913702815;

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
    msg.setTimeStamp(0.7139947741979967);
    msg.setSource(59807U);
    msg.setSourceEntity(38U);
    msg.setDestination(10476U);
    msg.setDestinationEntity(78U);
    msg.control_src = 35426U;
    msg.control_ent = 114U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 196U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9857567341747224;
    tmp_tmp_msg_0_0.speed_units = 0U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6095722713771221;
    tmp_tmp_msg_0_1.z_units = 184U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.802547859988764;
    tmp_msg_0.lon = 0.9228391929903851;
    tmp_msg_0.radius = 0.9682746925926248;
    msg.reference.set(tmp_msg_0);
    msg.state = 74U;
    msg.proximity = 201U;

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
    msg.setTimeStamp(0.476407203926392);
    msg.setSource(14944U);
    msg.setSourceEntity(127U);
    msg.setDestination(61160U);
    msg.setDestinationEntity(95U);
    msg.control_src = 34243U;
    msg.control_ent = 37U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 196U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.43393818700343034;
    tmp_tmp_msg_0_0.speed_units = 47U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8842791280251043;
    tmp_tmp_msg_0_1.z_units = 4U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.037053517538852776;
    tmp_msg_0.lon = 0.9029771802385212;
    tmp_msg_0.radius = 0.8920344539859748;
    msg.reference.set(tmp_msg_0);
    msg.state = 45U;
    msg.proximity = 136U;

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
    msg.setTimeStamp(0.7311842187137891);
    msg.setSource(7241U);
    msg.setSourceEntity(199U);
    msg.setDestination(17066U);
    msg.setDestinationEntity(161U);
    msg.control_src = 31535U;
    msg.control_ent = 187U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 132U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.348395055839543;
    tmp_tmp_msg_0_0.speed_units = 183U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3955368067464635;
    tmp_tmp_msg_0_1.z_units = 182U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.011450069600939194;
    tmp_msg_0.lon = 0.013172430261430446;
    tmp_msg_0.radius = 0.3069751794690243;
    msg.reference.set(tmp_msg_0);
    msg.state = 45U;
    msg.proximity = 137U;

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
    msg.setTimeStamp(0.6700718412326578);
    msg.setSource(58868U);
    msg.setSourceEntity(209U);
    msg.setDestination(12316U);
    msg.setDestinationEntity(250U);
    msg.ax_cmd = 0.541049960120568;
    msg.ay_cmd = 0.779228371861498;
    msg.az_cmd = 0.00032267253983242483;
    msg.ax_des = 0.13894559054550326;
    msg.ay_des = 0.805139133640068;
    msg.az_des = 0.8118302090228305;
    msg.virt_err_x = 0.08948694976953808;
    msg.virt_err_y = 0.17924866402232775;
    msg.virt_err_z = 0.8035957632989869;
    msg.surf_fdbk_x = 0.975278662011275;
    msg.surf_fdbk_y = 0.5067191843977396;
    msg.surf_fdbk_z = 0.5711159824532777;
    msg.surf_unkn_x = 0.38744895977013627;
    msg.surf_unkn_y = 0.7571033720077057;
    msg.surf_unkn_z = 0.3033293504349497;
    msg.ss_x = 0.17348048030179686;
    msg.ss_y = 0.11800136861726773;
    msg.ss_z = 0.34276158931934564;

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
    msg.setTimeStamp(0.984867408904334);
    msg.setSource(58553U);
    msg.setSourceEntity(136U);
    msg.setDestination(30629U);
    msg.setDestinationEntity(223U);
    msg.ax_cmd = 0.5411551727513202;
    msg.ay_cmd = 0.040785914162353776;
    msg.az_cmd = 0.27691637892188237;
    msg.ax_des = 0.8527877756059146;
    msg.ay_des = 0.903559291443314;
    msg.az_des = 0.5741678702583011;
    msg.virt_err_x = 0.7284933327352131;
    msg.virt_err_y = 0.3111697770831664;
    msg.virt_err_z = 0.15574198123189187;
    msg.surf_fdbk_x = 0.5763443872784614;
    msg.surf_fdbk_y = 0.5749943470220497;
    msg.surf_fdbk_z = 0.38263052128862096;
    msg.surf_unkn_x = 0.15871294304896288;
    msg.surf_unkn_y = 0.17219484088542836;
    msg.surf_unkn_z = 0.2265914471386521;
    msg.ss_x = 0.04207078964250355;
    msg.ss_y = 0.5515968829698562;
    msg.ss_z = 0.5312447715713553;

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
    msg.setTimeStamp(0.5548384999675043);
    msg.setSource(27711U);
    msg.setSourceEntity(127U);
    msg.setDestination(57468U);
    msg.setDestinationEntity(81U);
    msg.ax_cmd = 0.874977583205667;
    msg.ay_cmd = 0.21007376818216006;
    msg.az_cmd = 0.9820170987867012;
    msg.ax_des = 0.571644063194208;
    msg.ay_des = 0.1787128935402068;
    msg.az_des = 0.40666714619376354;
    msg.virt_err_x = 0.6477381566517948;
    msg.virt_err_y = 0.9106566754625948;
    msg.virt_err_z = 0.5596921018786674;
    msg.surf_fdbk_x = 0.8976869799348953;
    msg.surf_fdbk_y = 0.6440501055355898;
    msg.surf_fdbk_z = 0.8334053717885463;
    msg.surf_unkn_x = 0.2658108927386489;
    msg.surf_unkn_y = 0.18511202948273386;
    msg.surf_unkn_z = 0.8211768203634838;
    msg.ss_x = 0.9221974820887543;
    msg.ss_y = 0.9113557161615108;
    msg.ss_z = 0.5094007463042182;

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
    msg.setTimeStamp(0.27721222664944656);
    msg.setSource(64843U);
    msg.setSourceEntity(164U);
    msg.setDestination(28092U);
    msg.setDestinationEntity(213U);
    msg.s_id.assign("BZRKDHQBEDZCAVJEFAAWIMZDVJUOTSPMNKJLORDZZSOKAYQCWLIAQWFQALKAUFSNMUGLJFWIUSQISRGOVPHJJRMVFEPWKTLLCGBGBHKPHYXYMMGLMSNKLOOTVCPTHZVYTBUHRUNYIMPOCVYRXDXEBYJGOWRWXDVHJXQMXTSRUKGOXICNIUFQOBNFZBMSHDKFSELDUTRCDFEGBFYIEEW");
    msg.dist = 0.028329263378652936;
    msg.err = 0.4331808317903414;
    msg.ctrl_imp = 0.2556686208155967;
    msg.rel_dir_x = 0.7165723807538369;
    msg.rel_dir_y = 0.6339076190163407;
    msg.rel_dir_z = 0.18441660891801648;
    msg.err_x = 0.5281005525421548;
    msg.err_y = 0.15226223561827745;
    msg.err_z = 0.2142482439375537;
    msg.rf_err_x = 0.8427641675208928;
    msg.rf_err_y = 0.540285852632916;
    msg.rf_err_z = 0.839785710238711;
    msg.rf_err_vx = 0.5051902632881321;
    msg.rf_err_vy = 0.9994782470637712;
    msg.rf_err_vz = 0.26020409039277004;
    msg.ss_x = 0.1535854899635407;
    msg.ss_y = 0.8416760478962036;
    msg.ss_z = 0.1444071173463367;
    msg.virt_err_x = 0.17710380263248382;
    msg.virt_err_y = 0.07122166036862088;
    msg.virt_err_z = 0.8068700298384788;

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
    msg.setTimeStamp(0.08910485888722552);
    msg.setSource(30233U);
    msg.setSourceEntity(35U);
    msg.setDestination(60866U);
    msg.setDestinationEntity(184U);
    msg.s_id.assign("WQUIGBUHIKROZQYGCLNAUFZTKDQAXPNMTTHQHEBPSECYLXAS");
    msg.dist = 0.30098755041539627;
    msg.err = 0.5460953386359239;
    msg.ctrl_imp = 0.9102420921626544;
    msg.rel_dir_x = 0.7221522540222197;
    msg.rel_dir_y = 0.11761949434681862;
    msg.rel_dir_z = 0.2788709790255057;
    msg.err_x = 0.8851036825506894;
    msg.err_y = 0.4665913183459268;
    msg.err_z = 0.8511236025620282;
    msg.rf_err_x = 0.4666593638309251;
    msg.rf_err_y = 0.8762229191267498;
    msg.rf_err_z = 0.5657886868187473;
    msg.rf_err_vx = 0.20643683479753794;
    msg.rf_err_vy = 0.4542304628939936;
    msg.rf_err_vz = 0.9194849298020737;
    msg.ss_x = 0.5832491635326512;
    msg.ss_y = 0.19348975794788825;
    msg.ss_z = 0.4436560397766307;
    msg.virt_err_x = 0.48193309468093803;
    msg.virt_err_y = 0.6084514881278306;
    msg.virt_err_z = 0.7983085558817016;

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
    msg.setTimeStamp(0.9062274694270769);
    msg.setSource(214U);
    msg.setSourceEntity(70U);
    msg.setDestination(43991U);
    msg.setDestinationEntity(125U);
    msg.s_id.assign("KDUVCMSIYCPNHIMDCUFEHAVMLPQXGZMAIYUZBCMIUAAJZFYJEDHNSDEWDGFVDBXRDVCXOXKRNFOKETJPPSMLKSMVESASCPSTBIZCFFJBWEUIQRBNJIQYTFIKWBOVNROOOSVTQRXXHILGOEUPTABWFMYYOLJEDBZGWTRYVXXGYQCWZRQJALAONTAREGTKJMNZHXKWLPQVSWQMKNCBFRHGDYDQNEJGHLQTPHI");
    msg.dist = 0.5708191161356286;
    msg.err = 0.05982727718648406;
    msg.ctrl_imp = 0.46775802719113313;
    msg.rel_dir_x = 0.7048790524684053;
    msg.rel_dir_y = 0.32605489541004584;
    msg.rel_dir_z = 0.6452096140766342;
    msg.err_x = 0.05030892756179561;
    msg.err_y = 0.5196428583527525;
    msg.err_z = 0.19268286782342237;
    msg.rf_err_x = 0.2927678234135085;
    msg.rf_err_y = 0.40648583501657465;
    msg.rf_err_z = 0.7824061627792149;
    msg.rf_err_vx = 0.7403410805034638;
    msg.rf_err_vy = 0.39743207891026755;
    msg.rf_err_vz = 0.8940870622198549;
    msg.ss_x = 0.48810348410775417;
    msg.ss_y = 0.029851782636451274;
    msg.ss_z = 0.39035605499080483;
    msg.virt_err_x = 0.7089121675319994;
    msg.virt_err_y = 0.45644060351197835;
    msg.virt_err_z = 0.03598325461725449;

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
    msg.setTimeStamp(0.14909678195291354);
    msg.setSource(36922U);
    msg.setSourceEntity(48U);
    msg.setDestination(44773U);
    msg.setDestinationEntity(210U);
    msg.timeout = 17527U;
    msg.rpm = 0.297206133221796;
    msg.direction = 23U;
    msg.custom.assign("ILTASKLJBHGYNNCGIGRJAXVYNNNKPKGYXWXJKBGHVROCITLPCRHZINCDZSBOUWQPVYDMOKEXAOKPDFQRDWZDTEASDX");

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
    msg.setTimeStamp(0.20183514290044957);
    msg.setSource(16285U);
    msg.setSourceEntity(169U);
    msg.setDestination(33417U);
    msg.setDestinationEntity(148U);
    msg.timeout = 22595U;
    msg.rpm = 0.8286531307753838;
    msg.direction = 206U;
    msg.custom.assign("JLMDMRCKNACCUBOLRSKZRCNJEGIYLZSPZCQFAEEYLHEZTRAOCLWMXZZCUJMFKOJQOTXPKIYPKJGJFIREPGHVZOVVQTBHOKNGBLTTEUSGAZUMFHDUJOIXORXGXNGQWVLJWFQUYIN");

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
    msg.setTimeStamp(0.7936675282173383);
    msg.setSource(57030U);
    msg.setSourceEntity(10U);
    msg.setDestination(36789U);
    msg.setDestinationEntity(84U);
    msg.timeout = 9636U;
    msg.rpm = 0.6769097025855113;
    msg.direction = 123U;
    msg.custom.assign("BSGGRESTYTPAOAMOGQZNTYWZCXPGCJXBLNJDATWPDRZUUWBVAOICVULXNZHSXCMHXAGWEJHLLRMOUQWHRXOIWAIM");

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
    msg.setTimeStamp(0.5587356213208898);
    msg.setSource(36202U);
    msg.setSourceEntity(169U);
    msg.setDestination(16876U);
    msg.setDestinationEntity(147U);
    msg.formation_name.assign("ONZEENDOSLCGMZHQWSIAQQMSUYHVOMUYCTZJLYTWZIPUENVXAJEWYAKACPKGHDGBADNZMAAXFPVPQEKTGXYPIRVFMUOODWVIMSGNMPTCHOXSHALDSBEXQLIMORGPOJYEFSRXTDLDNXBQUTBTVTCOQBUNPJWGGVLBYOFCSRAXUHBJRKEEDWQXZJGBKUYZRSQFFDZJLKKMLLHWUCLFRAHHCYFIUYIWIEVVHGRKNKZRXRCCPPIKDBNT");
    msg.type = 32U;
    msg.op = 123U;
    msg.group_name.assign("DAJCIJILXDEABSOQKHTNCPUMUUDFXZQGVZDKBDJXWTERKYVNFUTGTDDBNTRHQZWQXRXOPSSHGRAXNMWUYEDMIYJZLGR");
    msg.plan_id.assign("POQUANGLMNKHPAVOZUVMOPIAVUWIQSWIORYUUJBS");
    msg.description.assign("UUJYGZLAMAASMYIZWYMWRNHVESXKXLXJNYOPGTHVRRQYVCIJAQTCSVVHKGDOTDSCBJKCQANEPMXKRMHRREEOMQGGIBBZTAJAXWTKFOWNAZRLHFISGZXUIEHLQKUBNBPFOUPVBFLPLFUUROMKCHEVEKCEHAFGWCAZZJSULQBULBNONIDREFQHTZQMYCITW");
    msg.reference_frame = 197U;
    msg.leader_bank_lim = 0.3469501534068865;
    msg.leader_speed_min = 0.28690448375378463;
    msg.leader_speed_max = 0.47972967396542654;
    msg.leader_alt_min = 0.20306505889829962;
    msg.leader_alt_max = 0.03543290573802449;
    msg.pos_sim_err_lim = 0.15829236574012384;
    msg.pos_sim_err_wrn = 0.716358239052632;
    msg.pos_sim_err_timeout = 55828U;
    msg.converg_max = 0.919240956235583;
    msg.converg_timeout = 984U;
    msg.comms_timeout = 30677U;
    msg.turb_lim = 0.4977106297750047;
    msg.custom.assign("ZGVGSBVGOXEATFUIISVQUGPYZXWQVWOTISHBPBDGTWFJCLSNSSJZDUFDBKXLWNMGXSRRATVZATDHJDMRWTMABOXCCAMHLZFFTQOSWHMIMAXTSWSPZCWREKJYLGMVJLNKQMXECAKHMHRBEYHWDDUNWFNGILEPMJROAHCPUUUXYIBBYXEKOJFEDVTEOYKDJYRUOZHFQVZBDKZYBQFQCIGXTPGRNIQYLREUCJNCOHKLPFUAP");

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
    msg.setTimeStamp(0.2669902526986887);
    msg.setSource(24645U);
    msg.setSourceEntity(112U);
    msg.setDestination(61110U);
    msg.setDestinationEntity(223U);
    msg.formation_name.assign("HOESWOZKSLEMLZJKDWQIQNTIXFKXUDILVCZEVQVOQKETHOFPGQ");
    msg.type = 113U;
    msg.op = 46U;
    msg.group_name.assign("EHJCWKGRKATUZVFIBSONVIQKPJLKLPEABXTIDBBCMNXUXADKELJHHFUEWAGDWLZSZAKZYYRDQJUTGRBN");
    msg.plan_id.assign("AZFBRTLVCFGFRHJRUXCUPCVWSXHKKQLMWHTJZPUSGCXNJFCFBEYPYMKPLQWYEOEDIVZDUQYRBGRQGZRKSZCONCEHLOIMZUTRVODYSTTNISIBWGFVZVWKWHNSEQZKQHLUSRTXKQAIIFXUMXOMANICARDSTVMBUVKJKAYJPXKCINDZJTYCEIMLBDSOAMDOSQAHLNVJDQEZPENAPJTEUMHWOVGWWQYNNXFBBMBJIHLLOGLGYPYDHWEARBP");
    msg.description.assign("DOUBHILDSNPFAFYJLPSJFGBJYMRNLGHSCCUKWZLEQWWUHTRJOVEHIPJSDKNXB");
    msg.reference_frame = 26U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21764U;
    tmp_msg_0.off_x = 0.9888260394274628;
    tmp_msg_0.off_y = 0.44438246097385725;
    tmp_msg_0.off_z = 0.9906395440710596;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9336051251813088;
    msg.leader_speed_min = 0.2830931240920844;
    msg.leader_speed_max = 0.805845415337809;
    msg.leader_alt_min = 0.4122643685061862;
    msg.leader_alt_max = 0.9553009467680952;
    msg.pos_sim_err_lim = 0.4085139728477065;
    msg.pos_sim_err_wrn = 0.22125825020426637;
    msg.pos_sim_err_timeout = 46785U;
    msg.converg_max = 0.219860437169335;
    msg.converg_timeout = 13469U;
    msg.comms_timeout = 55517U;
    msg.turb_lim = 0.76099996998626;
    msg.custom.assign("SUQJZCOVEWAOVGNDMVKHNXJFTMHFPEBJYDIJYJPRZHJHMLRVOEWOUBRRKZAXCQZNJIWPNBJULDELNFGBZNDTSAXZUNSTYMTZDQFJCXPPOEXVOIDIMBYFDHKZUEKXOCQRGNKTKUGPLKGVCSILYSXQWGTVFPOGGWRMSWSPKLYCVGTKBMQHQEFOLSBQZW");

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
    msg.setTimeStamp(0.03017153213957746);
    msg.setSource(48274U);
    msg.setSourceEntity(138U);
    msg.setDestination(43036U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("IQEKZYJAZHIBKTBUHITMPYGLNQSADXRFTBXCRCEODMMMPWOKMVURQVPZIYXAURJYGDVTEISCEHKDHCNXRZTBZFODUUUDZLAGXLMPJJHFQMDYRTHYBJROICSJXWLNDVABMFGQB");
    msg.type = 224U;
    msg.op = 161U;
    msg.group_name.assign("TPZUKUYFBVVMNQZGJOJYINEBHVVXNMXLHXOJKFQVYBUTEKTURZJSXDDZXWCGQWFUXGCHHQLGRSUPRLAHJIFNJPVAVDNORQOCPYGDLTAJMBBZLFSUUFTAERHWSWCAYIDLJYKXNTKEWMJYAWLGNGPFDFKSL");
    msg.plan_id.assign("SSOKRCJCIBLWLNJCSPLMPLQROJCPKUFBATZNPHECHMIVYNXMNOMOSHVAFDNLDEQIZTLFAXRYJNHGBWFDBSTPAYUQEMOXIEBUORFHFEPYJYIRAUBGFNVAWARWFACAGWIWGTJCTDKXPUHNSJIKMSQPHCEXIUBZKTVOYVGNSKUTULKNDXSBQHGPR");
    msg.description.assign("HIXTSCUGUSOCSYLL");
    msg.reference_frame = 165U;
    msg.leader_bank_lim = 0.9730282268602259;
    msg.leader_speed_min = 0.9498645554324809;
    msg.leader_speed_max = 0.28761122281109774;
    msg.leader_alt_min = 0.7448049784742441;
    msg.leader_alt_max = 0.4526713543005697;
    msg.pos_sim_err_lim = 0.7700660568893496;
    msg.pos_sim_err_wrn = 0.16110591642770034;
    msg.pos_sim_err_timeout = 10418U;
    msg.converg_max = 0.27835530608225056;
    msg.converg_timeout = 19497U;
    msg.comms_timeout = 25027U;
    msg.turb_lim = 0.47797499808146904;
    msg.custom.assign("VPNNQEMZWKTCGUFNBTIKYJRTZEROWGMZEDIEYSZXJVWQJDFLUNMFSIPYPLBDHOYEVWHRUZBGXHKKGCGGXWMBPAKEOOSXLEQYHMYCQFPBZLWSJYSADNICXMJARLGYFQWFIEUQCXEJUOVWXYHVBBTLMOOBOCSLFNPXOIZCSEHKVUGTZLRPNTGNPJKZMLRTQUICIJQHNVBLSQPRIUCVKWR");

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
    msg.setTimeStamp(0.8302922342042351);
    msg.setSource(7969U);
    msg.setSourceEntity(117U);
    msg.setDestination(14694U);
    msg.setDestinationEntity(197U);
    msg.timeout = 43948U;
    msg.lat = 0.6878799700487027;
    msg.lon = 0.9890981285336049;
    msg.z = 0.17223325225256447;
    msg.z_units = 212U;
    msg.speed = 0.6622236654900767;
    msg.speed_units = 62U;
    msg.custom.assign("YKUUYBJUBKQPILFQCZPPFDASRHAEXGMJJFWNSAHEZEMMNURTGAKVXBRPDCLHCBSVIPLECCYPZOLVDFXDEWBDHMIYSIKDUOLHANJDZWKXQVYTNQCEZZZFRTNJUKBWWOAXHNAOIQDTJBCPZMXUFKBPSTWVGNTBYEJFSLKIMYRJGIBEMQD");

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
    msg.setTimeStamp(0.7371638885509907);
    msg.setSource(30328U);
    msg.setSourceEntity(196U);
    msg.setDestination(55991U);
    msg.setDestinationEntity(120U);
    msg.timeout = 25301U;
    msg.lat = 0.5928083382224211;
    msg.lon = 0.04874039474470493;
    msg.z = 0.763739868212287;
    msg.z_units = 117U;
    msg.speed = 0.9299105278955212;
    msg.speed_units = 89U;
    msg.custom.assign("HVBGHJZCOWGNJSAGQMURZGPPFTEIVOEYWYUUXOCKORNJOXUJSUDSPNLIQWBWAPEWNPDMGQSRQYBTMEWJPBJOEOBEUBFLCQHLJIUIIFBNSFQGYNVDZHEBKKIUZXKSGKWZGKTTAMQUNHPKHTIVVDJFFDMVPXWFTSIOHBCAKFISLXZCKOYUREXAEVQHIPYYRHRHDRRNRGLCEAKLBTWCOZLFMNVWVDPGCZAMLDLMMYCNXSX");

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
    msg.setTimeStamp(0.6997494960401425);
    msg.setSource(54588U);
    msg.setSourceEntity(210U);
    msg.setDestination(18982U);
    msg.setDestinationEntity(35U);
    msg.timeout = 44005U;
    msg.lat = 0.3219852657935395;
    msg.lon = 0.7684507263140267;
    msg.z = 0.6073027067624179;
    msg.z_units = 233U;
    msg.speed = 0.32109791955373057;
    msg.speed_units = 192U;
    msg.custom.assign("UXTENCDYMLVZLYPOVFQQUPKFRETTSOZGQBGAZTATSQIRQHZOVKBGOKFIVZJLACBVWSRBNDYNKTUZHWPDDGACMSGQMKAMJRIGXBQJSBFIIRDDCSOGTAPFPVAFDUYDUZMNPJLEJUULURHRINLCKYLVVBWKDNLPJSZGAOTHUWYEOHVEFVAQWWLYICNXZEJWXMQHBALSSYMGJGHNDMOJXUHZEWKPCMCSPXYCJBXHRFNEEEKOWNXQY");

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
    msg.setTimeStamp(0.9575073556936403);
    msg.setSource(27197U);
    msg.setSourceEntity(243U);
    msg.setDestination(57024U);
    msg.setDestinationEntity(169U);
    msg.timeout = 37933U;
    msg.lat = 0.2604396591562428;
    msg.lon = 0.370299171727682;
    msg.z = 0.12367272174520594;
    msg.z_units = 137U;
    msg.speed = 0.4950662397789216;
    msg.speed_units = 167U;
    msg.custom.assign("GIRGIDIVBIUPVWHJSFBSPTJWLKPDTLYZMVXPSGPJANVOIUTXXAGBLUBEWWTZYCOYKAWZBULPLWHCAOXHHTQCLBSSINJUCMWUUCRFMLKMVDYSJEJLGSARIHDEVRAQBEAYDN");

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
    msg.setTimeStamp(0.3620580785434129);
    msg.setSource(29315U);
    msg.setSourceEntity(38U);
    msg.setDestination(42331U);
    msg.setDestinationEntity(16U);
    msg.timeout = 22124U;
    msg.lat = 0.6728151410928119;
    msg.lon = 0.04961049420606434;
    msg.z = 0.8848909163982788;
    msg.z_units = 80U;
    msg.speed = 0.21098674902089676;
    msg.speed_units = 3U;
    msg.custom.assign("MPXVGQEJVQIXAYGLPIAOXKTHNNBCDZPATITBOKPGJSJWYLRGITWMRLAABFQLMFMAAURFNADIZKYILEZCBVSRDAZQXEJYBOKPJMQUOTSEPVDQENJHTKYJQWBJUCYZLPJUESXGGXKNKHCUVDADIGBVOWFKISRKSZIOSLOLRSLKZNPGWUNMVSDGWFXZREYNUHVHCTMRUFTGHHLDEC");

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
    msg.setTimeStamp(0.05764867201518342);
    msg.setSource(62415U);
    msg.setSourceEntity(191U);
    msg.setDestination(8299U);
    msg.setDestinationEntity(91U);
    msg.timeout = 7011U;
    msg.lat = 0.7519372424101408;
    msg.lon = 0.3330886356849069;
    msg.z = 0.204184341007852;
    msg.z_units = 105U;
    msg.speed = 0.08757872692688351;
    msg.speed_units = 254U;
    msg.custom.assign("WLRMRLHDYVRJTTQTROSFHTEXUGNEYOJZQQENJEXSBOZOHAFPKIBPAIYHKYUJMWHFVOICNVBDQSHLCUGCYBCSPVFISKKBYMMWOYIGMGJNUEGCKTJJGLPQZAMKIEMXBSFCURCXYSQRGLDSMFAFPINZBZWNFFYJPVVXPVHZCELVDQXKOXURWNKWQOIZIDBWLPDGLUNMXTYEAZSCUAXVGTOTWDDQQAKLDTRSWOJJDZFRAHHTBIUACMRBLXWKPPVEGU");

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
    msg.setTimeStamp(0.11449765283753655);
    msg.setSource(41262U);
    msg.setSourceEntity(40U);
    msg.setDestination(38641U);
    msg.setDestinationEntity(10U);
    msg.arrival_time = 0.1600039049519223;
    msg.lat = 0.6416788201181406;
    msg.lon = 0.6550853487596581;
    msg.z = 0.28080278460656105;
    msg.z_units = 8U;
    msg.travel_z = 0.8649020651286059;
    msg.travel_z_units = 23U;
    msg.delayed = 146U;

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
    msg.setTimeStamp(0.8057832080170332);
    msg.setSource(42956U);
    msg.setSourceEntity(107U);
    msg.setDestination(46804U);
    msg.setDestinationEntity(124U);
    msg.arrival_time = 0.4761897682348406;
    msg.lat = 0.28442839702676626;
    msg.lon = 0.47706473105104996;
    msg.z = 0.2567084959924577;
    msg.z_units = 250U;
    msg.travel_z = 0.9474870776541096;
    msg.travel_z_units = 40U;
    msg.delayed = 105U;

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
    msg.setTimeStamp(0.35565550653229716);
    msg.setSource(9585U);
    msg.setSourceEntity(55U);
    msg.setDestination(1904U);
    msg.setDestinationEntity(148U);
    msg.arrival_time = 0.8752209423648682;
    msg.lat = 0.35662582941280596;
    msg.lon = 0.611443305574037;
    msg.z = 0.6416844174121475;
    msg.z_units = 23U;
    msg.travel_z = 0.9073558071500963;
    msg.travel_z_units = 194U;
    msg.delayed = 31U;

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
    msg.setTimeStamp(0.9319658959047856);
    msg.setSource(27639U);
    msg.setSourceEntity(89U);
    msg.setDestination(40833U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.681691950764745;
    msg.lon = 0.6185094784598342;
    msg.z = 0.3986038934066085;
    msg.z_units = 134U;
    msg.speed = 0.5207311265378053;
    msg.speed_units = 241U;
    msg.bearing = 0.9238525416519042;
    msg.cross_angle = 0.16348088268062733;
    msg.width = 0.3277062276667084;
    msg.length = 0.1965955088675757;
    msg.coff = 170U;
    msg.angaperture = 0.7883031653030654;
    msg.range = 39531U;
    msg.overlap = 96U;
    msg.flags = 145U;
    msg.custom.assign("VASWCVKZYCBONXILSDIQBYEWCRPZUROWQRNZYVICVPFIFHPUQNAIGASNIYUQUEGRHOMEHQAANGPJZGDBEXMEMWZSXLJKPCVTOVRDRZEWZKFXHGFHHDEFLTSVMWQOHLUSYABDDYYYLMTJDBJJEACQKIGQH");

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
    msg.setTimeStamp(0.7673770770030394);
    msg.setSource(42136U);
    msg.setSourceEntity(27U);
    msg.setDestination(60418U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.03368372150150778;
    msg.lon = 0.9815940561950068;
    msg.z = 0.21805260020506056;
    msg.z_units = 219U;
    msg.speed = 0.893249247744948;
    msg.speed_units = 112U;
    msg.bearing = 0.5413972247528068;
    msg.cross_angle = 0.9781137953700202;
    msg.width = 0.22521270279500571;
    msg.length = 0.13016244704260882;
    msg.coff = 55U;
    msg.angaperture = 0.7091998397669892;
    msg.range = 18023U;
    msg.overlap = 76U;
    msg.flags = 165U;
    msg.custom.assign("AKTGLXRNLOKCEDCYTKSKWRMSONRKVTWTPRCOWFAHSQUMLUQUBALXLSSLXDCXYCAEZZWEWXIBKOPPVHJIFFVPHYRUOPNJSFEMJWNEVTRUBCOYSDMMO");

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
    msg.setTimeStamp(0.33320259348497183);
    msg.setSource(53147U);
    msg.setSourceEntity(14U);
    msg.setDestination(48873U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.037087365209556133;
    msg.lon = 0.0711874170288691;
    msg.z = 0.5713174790197727;
    msg.z_units = 236U;
    msg.speed = 0.6243013452870415;
    msg.speed_units = 207U;
    msg.bearing = 0.9676817490084856;
    msg.cross_angle = 0.6393055936402453;
    msg.width = 0.520117030342997;
    msg.length = 0.7421202406695669;
    msg.coff = 161U;
    msg.angaperture = 0.46567846164791615;
    msg.range = 63255U;
    msg.overlap = 250U;
    msg.flags = 61U;
    msg.custom.assign("MAAOLDSDOOKCSYQDGWEQCIVDIVGCSGZXTMXRLFLQDVKSUPKRQWOUYFZXI");

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
    msg.setTimeStamp(0.13241374225329994);
    msg.setSource(33849U);
    msg.setSourceEntity(205U);
    msg.setDestination(5722U);
    msg.setDestinationEntity(208U);
    msg.timeout = 46136U;
    msg.lat = 0.7944051185539627;
    msg.lon = 0.487774449698389;
    msg.z = 0.6372283415486465;
    msg.z_units = 159U;
    msg.speed = 0.8776537991711888;
    msg.speed_units = 31U;
    msg.syringe0 = 187U;
    msg.syringe1 = 244U;
    msg.syringe2 = 254U;
    msg.custom.assign("FLNUIXIWBVEVM");

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
    msg.setTimeStamp(0.28169629002820495);
    msg.setSource(40452U);
    msg.setSourceEntity(223U);
    msg.setDestination(50433U);
    msg.setDestinationEntity(131U);
    msg.timeout = 7925U;
    msg.lat = 0.36840751522628523;
    msg.lon = 0.29231731406176875;
    msg.z = 0.8716740836242426;
    msg.z_units = 177U;
    msg.speed = 0.49610505062632815;
    msg.speed_units = 88U;
    msg.syringe0 = 95U;
    msg.syringe1 = 249U;
    msg.syringe2 = 0U;
    msg.custom.assign("TMIWESNNYSVWJGMYJRTTQNIIYLVCIJBOFPDUENKIXAXECWDVLVZFBQYMJNLYMJTAUAUPAQYHRVJKDMOFPSEHLSXZEUMANWIRMQPNSWSQTQFAEHWHSPKVGFACLBPUJQOYICEGXAGJZWUCPLOWBOKHBPGRHQENKXVTHTUGXYBFCRVUKORLVDD");

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
    msg.setTimeStamp(0.2324088107149006);
    msg.setSource(64176U);
    msg.setSourceEntity(253U);
    msg.setDestination(52157U);
    msg.setDestinationEntity(235U);
    msg.timeout = 36830U;
    msg.lat = 0.30869296555036296;
    msg.lon = 0.0339934293877;
    msg.z = 0.03386027847588913;
    msg.z_units = 251U;
    msg.speed = 0.350562322215785;
    msg.speed_units = 27U;
    msg.syringe0 = 24U;
    msg.syringe1 = 105U;
    msg.syringe2 = 8U;
    msg.custom.assign("OSYGTLWFUNMXSVUMJFOMRKTAMMJWBKJOBCYXUSLRSFIQIAXPNLZHWDMQZLMVXSOHOYUAQTJWQWNNEHIGIPBTTDAEILZLVLXHWRCMIGXKWECDHBVYGRQFVLVMVFPZEPGYRNSCFZCIAHFJYAFNKQGZHANQCW");

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
    msg.setTimeStamp(0.4182571066504196);
    msg.setSource(37928U);
    msg.setSourceEntity(51U);
    msg.setDestination(40569U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.9006899918888237);
    msg.setSource(44976U);
    msg.setSourceEntity(143U);
    msg.setDestination(30634U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.9258846523853922);
    msg.setSource(19389U);
    msg.setSourceEntity(239U);
    msg.setDestination(44981U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.8692430403290121);
    msg.setSource(55351U);
    msg.setSourceEntity(202U);
    msg.setDestination(11480U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.887377240688306;
    msg.lon = 0.7789932694361266;
    msg.z = 0.14164758858715154;
    msg.z_units = 43U;
    msg.speed = 0.03796915674629686;
    msg.speed_units = 146U;
    msg.takeoff_pitch = 0.43179300966555145;
    msg.custom.assign("COIJTFPNDCTTXNZGLOYVGCSLBFDCE");

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
    msg.setTimeStamp(0.6057755560248478);
    msg.setSource(52736U);
    msg.setSourceEntity(219U);
    msg.setDestination(17408U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.5551079332810137;
    msg.lon = 0.10078708697724292;
    msg.z = 0.9465263975132264;
    msg.z_units = 186U;
    msg.speed = 0.3911233465332251;
    msg.speed_units = 239U;
    msg.takeoff_pitch = 0.9141859746522478;
    msg.custom.assign("XJLYAVYSLOSRRSPCPGDXACHMGZBDAOWLKQTBTGAPZWK");

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
    msg.setTimeStamp(0.6323552778686082);
    msg.setSource(20382U);
    msg.setSourceEntity(184U);
    msg.setDestination(55006U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.7876504295508564;
    msg.lon = 0.8935482709307162;
    msg.z = 0.10376430385775415;
    msg.z_units = 186U;
    msg.speed = 0.4699584977317868;
    msg.speed_units = 240U;
    msg.takeoff_pitch = 0.9627627065468751;
    msg.custom.assign("PGJAOZSSIAQUXZUKDVEGELUNRSYQXAHGMNQJFZJMTELVBRAQFHZHPOKTEZILYJQSGRXCTHIWBLGGFHPNRCWOYXBVUFTJVZTBCBHNREVXDDIAVPMRSCBNUUSTNRXAZRDHMJDQWXPU");

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
    msg.setTimeStamp(0.09404964821438278);
    msg.setSource(6293U);
    msg.setSourceEntity(225U);
    msg.setDestination(37093U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.43683985192731745;
    msg.lon = 0.6150595211860804;
    msg.z = 0.6598357905161296;
    msg.z_units = 250U;
    msg.speed = 0.057805487987912296;
    msg.speed_units = 153U;
    msg.abort_z = 0.7049210074219947;
    msg.bearing = 0.991941748016617;
    msg.glide_slope = 227U;
    msg.glide_slope_alt = 0.12049327381873254;
    msg.custom.assign("EQDEJXLEFSPFPGEZGIXNDEOURNCZRUFMJZAIFOPKIUADPHIEALTTGSTPDPQIZJHDLBOKKDLGXBTDMJLZJIUTUWAYVJGABHYWRHBBVUCWERHKOJDTAUYXXMWXYDL");

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
    msg.setTimeStamp(0.8080843983559071);
    msg.setSource(47758U);
    msg.setSourceEntity(79U);
    msg.setDestination(34527U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.8542094212561788;
    msg.lon = 0.14814760942674043;
    msg.z = 0.8629463883253359;
    msg.z_units = 0U;
    msg.speed = 0.5503584867910549;
    msg.speed_units = 77U;
    msg.abort_z = 0.5473890189568664;
    msg.bearing = 0.5804373791334773;
    msg.glide_slope = 188U;
    msg.glide_slope_alt = 0.5255467641769743;
    msg.custom.assign("ZXTIFSSIIPZSAJGMLGXMWLZVTSNHSNTGMTF");

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
    msg.setTimeStamp(0.5335212281982441);
    msg.setSource(62482U);
    msg.setSourceEntity(179U);
    msg.setDestination(1342U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.567587899951557;
    msg.lon = 0.9174112564340623;
    msg.z = 0.43299473813525013;
    msg.z_units = 201U;
    msg.speed = 0.5348982047857646;
    msg.speed_units = 162U;
    msg.abort_z = 0.8215214306430749;
    msg.bearing = 0.31700942599050075;
    msg.glide_slope = 127U;
    msg.glide_slope_alt = 0.37106883420486536;
    msg.custom.assign("PABYIFQUJJIFSGICKFRYURNUPGVWPXRFGBDWOCWSNCVMBDQJYSKULYLWSQRZKMPRMDPYPIBCTRVLNQITXEGUPKOJXNWJMQEWJKLRNBQDCCIWCULDFUITBPGMZAGTYZTPHQWAEBTVPRVANQCXEOKSWASNFDZHSLWUHR");

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
    msg.setTimeStamp(0.6218414041928124);
    msg.setSource(4601U);
    msg.setSourceEntity(128U);
    msg.setDestination(6423U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.5915463549546222;
    msg.lon = 0.30249883326252736;
    msg.speed = 0.6272955461127127;
    msg.speed_units = 230U;
    msg.limits = 54U;
    msg.max_depth = 0.0659378722507501;
    msg.min_alt = 0.7721947549013151;
    msg.time_limit = 0.8835997831629635;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.09273861515069937;
    tmp_msg_0.lon = 0.348080613710014;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EKFLNGFPDUYQXCJSHTQKRZEZTLSNDGJDUPMWFWCUHQJEMYNWWOBYXBPQUZNKYOOOEGTXFAILXBRVEZVCKNKMRIYBVSUTLBHSIJWOOSKOUSCEHAUIRPCITCNANSBPDKGLYQPHISXAR");
    msg.custom.assign("ACMCUBWLSYRRATBDVFBDUIQRAGFHZSMLNYUDEBFEIO");

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
    msg.setTimeStamp(0.9892461127769271);
    msg.setSource(3680U);
    msg.setSourceEntity(23U);
    msg.setDestination(49130U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.23390147829276509;
    msg.lon = 0.5844094909507646;
    msg.speed = 0.19318783394291117;
    msg.speed_units = 172U;
    msg.limits = 118U;
    msg.max_depth = 0.9097567090368321;
    msg.min_alt = 0.834512490834261;
    msg.time_limit = 0.8485204870092369;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.492343335159522;
    tmp_msg_0.lon = 0.6283072799910181;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("KROBPJBNUZDTGGISDAGJAWSQYIYYSGZULJVJOOUECRDKDQCREMLSEVBJMARLHKCXDJSOJTINPXJOVVBLHULUKYNYLUAXCXYTBZBHNGKFO");
    msg.custom.assign("CHUWXPSCEMHYDKDPKINUIOWCMNIAEPKJJJHBAADDDWHZHEL");

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
    msg.setTimeStamp(0.3949727230333422);
    msg.setSource(62345U);
    msg.setSourceEntity(36U);
    msg.setDestination(39377U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.1628041891299059;
    msg.lon = 0.903188206353986;
    msg.speed = 0.8076861463595415;
    msg.speed_units = 134U;
    msg.limits = 10U;
    msg.max_depth = 0.7212391002709498;
    msg.min_alt = 0.4512650208191471;
    msg.time_limit = 0.029352715853864453;
    msg.controller.assign("SWCSNHFIQVTVCIRPBQGOAWVFKHUVJARIPVZNWMYQGFZEJISIHLJKCUZHFSYVWUWXRSBOLCFJBCGDDPMJUTYRMIZBDTVYZPJIUKUZYQTNEFMSHSMXJZQBLWLMNFATMRBCGLYGLQEHSGULJCQDENDDXNESKAXNRNNEODELTGFAHPOJEZQZBRKOYCOBVGWAKFDOCLWVYPDDPGAWXAMXAXUUXHBXPOUIOBKTPIRQHEWQKPYYJMOITZLRFNXEHGT");
    msg.custom.assign("QOSKXDPFQWIXUEMRARONPCWSQWNMNDJUWLIKNVSKBMZICZGPRFNKBCVJYSMRMSSULTGTSLXOHKKOXDKXAPKIOTFEUYQAYDRAUGTSOCVBIPEJVKRHBPEQQHWVQHCLIWEDSUOILGFVYQYOQDXHCUMIATTHWWHEABBBGHZRVJQVCBRZGRWARJKVSLFEDUHYDFNGHUNYZXUZAMXPODGJYTJNMTBJZXELE");

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
    msg.setTimeStamp(0.6771437999394546);
    msg.setSource(16040U);
    msg.setSourceEntity(221U);
    msg.setDestination(6475U);
    msg.setDestinationEntity(108U);
    msg.target.assign("ZXGXIMCPZLBSYFARPGVBRDAYDJWIWYCHVUUFHQOQJVVRNLPLLWHFLAAOKJNYESCBDGVOKZKRDXJGMBLWNAAZPHMXEOQSICGOAHUNIWIJTLNEFMSYGQODABFCTPFXCTRCPCXPMUUXBNISKTHNPGKNHSEJAEZ");
    msg.max_speed = 0.458539243339562;
    msg.speed_units = 221U;
    msg.lat = 0.1038829784733386;
    msg.lon = 0.6110859475602246;
    msg.z = 0.7480369713754592;
    msg.z_units = 147U;
    msg.custom.assign("ILKSJZHRMFRZQWXIBCKEJWLAINSYJGXMPQBYJRNVHYUMDQCHWETPFXVYQULLHCEYFEMURZCIJKWHOHVQGIWAXRTTFCONXORHIC");

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
    msg.setTimeStamp(0.789532875823469);
    msg.setSource(24008U);
    msg.setSourceEntity(119U);
    msg.setDestination(42962U);
    msg.setDestinationEntity(149U);
    msg.target.assign("LTBSIKVPAHNOSOQXSPWJRRDIJLEMBHTPHDHMJHFXXUUQDFBUMKYJNGWIIFEZCYDORQYRQQWXBUTCCGLJNIUOXEVABLPRIUEMZNLUVQKGQFDAWNQYTOTSCKZVLKGSMZOWIOKAXKSHRJJYWFVCOEFHSZRKSDTBJAZNCTVAVMOUDAKGXYCLNHWBRCTAEMCLJIPRRPYDZEDZ");
    msg.max_speed = 0.4227699048354604;
    msg.speed_units = 75U;
    msg.lat = 0.1491501358123558;
    msg.lon = 0.5412951682622408;
    msg.z = 0.5795618489577424;
    msg.z_units = 74U;
    msg.custom.assign("WUZBKBZCGEKYOBNJEDSMCTGXERLHPPUHQBBJAVKDZAKZQVCMUOLXKTAYPYULMABTDNHIVNQMXKATSZXHMIBERGYHBGTRCGRRWKCUWENIMJXFGNDSGFTQDFSMISPQYHDNZOKLNXSDVUKZEJUSVBAZOWWOLESWQDWJNIWAHVILMCOLJENWPNCVLJXUKZCBYVHJ");

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
    msg.setTimeStamp(0.87428916633536);
    msg.setSource(30918U);
    msg.setSourceEntity(151U);
    msg.setDestination(44480U);
    msg.setDestinationEntity(94U);
    msg.target.assign("PIVLDGZLTWNCWDHKDLGEVMNZCOAPTALCQXOZIFEUPWNXKJPYOAXUISSLIAJXWJLDBBHHSLVAPUFYDWCOWIJHGMRIFQQYCNUVLRKXKNTVUERSGFGNYEASSAFPVGXPBTSYKRQPCKWEFOLYHOWYWERZBAMAGWNHQPJGXTQYTKKZDVYNIIFMTVEMQSQDDCOLRUEHNUTGJYQMHTOKVEDRIJDQMOBBBRPUCTVSISFRZFBZ");
    msg.max_speed = 0.39797669701772476;
    msg.speed_units = 121U;
    msg.lat = 0.5231139061804128;
    msg.lon = 0.8456653842417143;
    msg.z = 0.8931145204978398;
    msg.z_units = 201U;
    msg.custom.assign("BKABHGTDSFBKTCRKKQHQYUXRDGWJQJMFKDNSUGLCPHTSSOBZKECJTCLKOPMAZRYHXFJFUCMJTAWAOERPOBERSJEVTJHWLIOAZMSDNALTGDZKWYCVTZDIPXEUHSEVNBZFITMVHWRSAXIXGYVYUUWODXMMHCMZLJXLNCCIJE");

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
    msg.setTimeStamp(0.951878406135324);
    msg.setSource(955U);
    msg.setSourceEntity(228U);
    msg.setDestination(28588U);
    msg.setDestinationEntity(84U);
    msg.timeout = 46627U;
    msg.lat = 0.8364807179327802;
    msg.lon = 0.27640386413127793;
    msg.speed = 0.7499062261549135;
    msg.speed_units = 230U;
    msg.custom.assign("GQZLMTPQKBSSPFVCMEVFPAGODITAZXHTNQZYKJRJRTQEQINHCSDFAUQOCHZLGGQYFWJDQKOORIMVBIBWFBDMBMHCEAJNKSIXWTERZXXYSTJAGNLHZWUOCCAZTXRZOESUYVMTVDUGFFNSIIOLY");

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
    msg.setTimeStamp(0.8055729657544223);
    msg.setSource(61658U);
    msg.setSourceEntity(108U);
    msg.setDestination(13862U);
    msg.setDestinationEntity(160U);
    msg.timeout = 19712U;
    msg.lat = 0.8382996626702768;
    msg.lon = 0.3849751060510074;
    msg.speed = 0.5400993846526296;
    msg.speed_units = 201U;
    msg.custom.assign("VSHQFEBLYWLSMBPQTGDVWRCMXWKEIVCCLSUKEVPIDZNVRDUATZWKKJXMIGQZFESGDDAKOUZJUYILWCBDOUHCSPFPIMYNUBJQGGRIGGFFMRTVEVQTHCMFDTTPZCEXBPHKQSYRZMNKXUWHHJYMQIENYYEQJGLNXYCGAYDDNEBJZHPYIWWORUTNHKJJZPRTWOQNXAOBRONAKMCKHLRIDCNXBLBVE");

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
    msg.setTimeStamp(0.31376731342073794);
    msg.setSource(5598U);
    msg.setSourceEntity(80U);
    msg.setDestination(27233U);
    msg.setDestinationEntity(246U);
    msg.timeout = 10806U;
    msg.lat = 0.6410883707241453;
    msg.lon = 0.672789853290439;
    msg.speed = 0.5521248382928051;
    msg.speed_units = 20U;
    msg.custom.assign("IJDOXDRJHBMSXLTVYACKOFQHKKFMKFMXZRWCSPWACGEJGIYHDNNSSTJQQSYAUUASXKCGZVBBEALYPILJEWAQAFOHXEMHXQTAFYGNINGRCDBJVNZKDMBLTEKOXPZUUDWXMFUFORBROZOFPWHSCMFDKKLLZVMWXUBPNVQWWDVJMTZQTEACWTPNRPGPZQPCUWJNHGOIYGRGYSROLHIYIIVCBDEPBUFSENUHQQYLELRARIMTTCUSLJBKIDOYHVZVT");

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
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.7729786291074374);
    msg.setSource(55289U);
    msg.setSourceEntity(236U);
    msg.setDestination(23102U);
    msg.setDestinationEntity(191U);
    msg.control_src = 39672U;
    msg.control_ent = 189U;
    msg.timeout = 0.3078090960984151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.7953490924051838);
    msg.setSource(60286U);
    msg.setSourceEntity(213U);
    msg.setDestination(7973U);
    msg.setDestinationEntity(168U);
    msg.control_src = 1783U;
    msg.control_ent = 87U;
    msg.timeout = 0.6089698631429049;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommand msg;
    msg.setTimeStamp(0.3964294701486676);
    msg.setSource(34315U);
    msg.setSourceEntity(199U);
    msg.setDestination(22547U);
    msg.setDestinationEntity(158U);
    msg.control_src = 52015U;
    msg.control_ent = 76U;
    msg.timeout = 0.22864605234488278;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.2993625211610428);
    msg.setSource(60494U);
    msg.setSourceEntity(122U);
    msg.setDestination(62078U);
    msg.setDestinationEntity(94U);
    msg.flags = 158U;
    msg.speed = 0.6993718176474407;
    msg.z = 0.9035689908223735;
    msg.heading = 0.10943416142901508;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.743564086726148);
    msg.setSource(12669U);
    msg.setSourceEntity(109U);
    msg.setDestination(57311U);
    msg.setDestinationEntity(171U);
    msg.flags = 151U;
    msg.speed = 0.513748416122782;
    msg.z = 0.8067321650564239;
    msg.heading = 0.3899962079869942;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Command msg;
    msg.setTimeStamp(0.48916215737152013);
    msg.setSource(23668U);
    msg.setSourceEntity(179U);
    msg.setDestination(16682U);
    msg.setDestinationEntity(171U);
    msg.flags = 251U;
    msg.speed = 0.4639292711613061;
    msg.z = 0.16342615584429776;
    msg.heading = 0.1973727953464398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Command #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.1858986388608126);
    msg.setSource(64523U);
    msg.setSourceEntity(196U);
    msg.setDestination(59900U);
    msg.setDestinationEntity(175U);
    msg.control_src = 63207U;
    msg.control_ent = 224U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 84U;
    tmp_msg_0.speed = 0.4660109532911385;
    tmp_msg_0.z = 0.43514251476287713;
    tmp_msg_0.heading = 0.40268784520496204;
    msg.command.set(tmp_msg_0);
    msg.state = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.8020329035595288);
    msg.setSource(37582U);
    msg.setSourceEntity(205U);
    msg.setDestination(33487U);
    msg.setDestinationEntity(241U);
    msg.control_src = 44231U;
    msg.control_ent = 237U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 216U;
    tmp_msg_0.speed = 0.6423382380314452;
    tmp_msg_0.z = 0.6004822136308857;
    tmp_msg_0.heading = 0.14436313979546977;
    msg.command.set(tmp_msg_0);
    msg.state = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowCommandState msg;
    msg.setTimeStamp(0.3556734687491836);
    msg.setSource(44646U);
    msg.setSourceEntity(206U);
    msg.setDestination(3500U);
    msg.setDestinationEntity(218U);
    msg.control_src = 1044U;
    msg.control_ent = 44U;
    IMC::Command tmp_msg_0;
    tmp_msg_0.flags = 206U;
    tmp_msg_0.speed = 0.7292119997383338;
    tmp_msg_0.z = 0.9932068910739834;
    tmp_msg_0.heading = 0.48499564276706275;
    msg.command.set(tmp_msg_0);
    msg.state = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowCommandState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7219849218304556);
    msg.setSource(32877U);
    msg.setSourceEntity(0U);
    msg.setDestination(50693U);
    msg.setDestinationEntity(6U);
    msg.timeout = 4684U;
    msg.lat = 0.05426819812261374;
    msg.lon = 0.030198342999581795;
    msg.z = 0.12249391613984306;
    msg.z_units = 173U;
    msg.speed = 0.4167382658918032;
    msg.speed_units = 206U;
    msg.bearing = 0.7005421103527868;
    msg.width = 0.20651211018069104;
    msg.direction = 151U;
    msg.custom.assign("AKELJGYRYQILRDSPMYDOFIHJRLKAAPLJPDPCCABNXSEKOSWKWRQKXPENOOXCOZJFXEQSGQLUHUGAQYUJUVVJXCXNIGNQJTZVCFMJTMFGGKKSLBMHPGDOBEUIYAQSZCYBPTONKTLRDNTTSMBODQGXOY");

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
    msg.setTimeStamp(0.8228729249408325);
    msg.setSource(22618U);
    msg.setSourceEntity(38U);
    msg.setDestination(57318U);
    msg.setDestinationEntity(77U);
    msg.timeout = 30921U;
    msg.lat = 0.29904171266724444;
    msg.lon = 0.3890495929391071;
    msg.z = 0.8396690978266527;
    msg.z_units = 183U;
    msg.speed = 0.1705049622593069;
    msg.speed_units = 110U;
    msg.bearing = 0.8158701437510253;
    msg.width = 0.9746856093509344;
    msg.direction = 62U;
    msg.custom.assign("RUXLTJXMZFIUVSYIDRKEQZXCQTPGCSXXOMKYUSMFYKNVZWRENGSBJPBWWFLPNUACLGNRILSEAPMOVDAHWXBJPHEWFZBHDAFEBPV");

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
    msg.setTimeStamp(0.5456630604091054);
    msg.setSource(33773U);
    msg.setSourceEntity(35U);
    msg.setDestination(39315U);
    msg.setDestinationEntity(193U);
    msg.timeout = 64245U;
    msg.lat = 0.8869790087854813;
    msg.lon = 0.545064135254015;
    msg.z = 0.6109390113606424;
    msg.z_units = 12U;
    msg.speed = 0.8063635463917138;
    msg.speed_units = 138U;
    msg.bearing = 0.37424615334874556;
    msg.width = 0.14587865873173012;
    msg.direction = 61U;
    msg.custom.assign("TTIPIXSHFWRDFANEKGKSFPDJQTGLOHZHRZVZEMQBZCHNIAWDAMHOWUJSURUSWVJSNVRDCOGVRBCNLSVDXSWOXBHEKKKPDRYYLZOXGIRSCPRYSXABEQXABMUYTMJFCZJKZEAVGWYKTTBKCDYNZOGXCILAVDOHTOWCYQNIVEIXQMWPPAMGQPJXDAIFVBTFGJHNYLPQHIWNJUOFZJEVNNTUQMOTUYBLLCLPILMLQUFAGFEWRJXKEECGMF");

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
    msg.setTimeStamp(0.8397316635870714);
    msg.setSource(25710U);
    msg.setSourceEntity(128U);
    msg.setDestination(17362U);
    msg.setDestinationEntity(224U);
    msg.op_mode = 140U;
    msg.error_count = 248U;
    msg.error_ents.assign("PCZBNAYLNHEPQCYPEKJTVQGSWGIVSWIXRDSCUPNJCGPYPXFUMMOUGMZGEVCLHJIFHJMBOVEDASZZIXFWLUULJFBGZWBLLSTVNTZHHAADYHBFYDZBSN");
    msg.maneuver_type = 40223U;
    msg.maneuver_stime = 0.9689054751030585;
    msg.maneuver_eta = 32619U;
    msg.control_loops = 3105466360U;
    msg.flags = 24U;
    msg.last_error.assign("YDWXALLNOXALAUSKPHOPRHQWUQHBKUQNUSCJVWJMBYZCTFSUIZLYCETGTPMQKPUINCS");
    msg.last_error_time = 0.5710500154696286;

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
    msg.setTimeStamp(0.4135889645586339);
    msg.setSource(25987U);
    msg.setSourceEntity(182U);
    msg.setDestination(21943U);
    msg.setDestinationEntity(82U);
    msg.op_mode = 99U;
    msg.error_count = 105U;
    msg.error_ents.assign("QHEJDDNLBAMBAKQACVXOOYRHUNBHYQPCNUGMDNILYGJRONHBICRKKBIGMERTRTOEKSIIHYCEEXCXGJWRVLPQZBNALJFYUVSBYGSULUZDMINCIZDWROFJRLSTZFSETSDWSBTIYJZVQWDPSTPYPDHUOOFVKBPPFLKJXMJQDENECKWMYOAKWLZGHFZURISWLHEQAYWMAGGVZQFXVVPFCXCMKSXNUHRWTMHXIUAPZGOLM");
    msg.maneuver_type = 14586U;
    msg.maneuver_stime = 0.02820338619451357;
    msg.maneuver_eta = 40114U;
    msg.control_loops = 1465919424U;
    msg.flags = 21U;
    msg.last_error.assign("NRDMJBJTIVEAGDRUXBEZVNTLTYRUWCAGGUIIVXQORJNP");
    msg.last_error_time = 0.3800101112533141;

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
    msg.setTimeStamp(0.7325744057357864);
    msg.setSource(19212U);
    msg.setSourceEntity(81U);
    msg.setDestination(18705U);
    msg.setDestinationEntity(140U);
    msg.op_mode = 119U;
    msg.error_count = 74U;
    msg.error_ents.assign("NCBFRYAWVJORFZEUXILVRIQSKDXEKATGLFHHQHVPBIZOKLBHMJRTCFIQCUKDHFPZKENMMGQRIMSWCRRXGGSQDYVUYYADOHESJQSCQPBJNND");
    msg.maneuver_type = 42080U;
    msg.maneuver_stime = 0.6768370918764752;
    msg.maneuver_eta = 24190U;
    msg.control_loops = 205556683U;
    msg.flags = 92U;
    msg.last_error.assign("NIXOKWSFLMYVTFCMZRZHCIXBILYVSNAHHKREUVPGTBKEBDJECXCSTLZFZGPKKQTNADBWDUJPSKJQYDBLBWPQGKZXYXWBPPKCSCQYVERQWHMIDYXGHTCOKAFNLGNLHIXLHIJFXVZIFUNJMDMH");
    msg.last_error_time = 0.9136354977917978;

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
    msg.setTimeStamp(0.10930497278996765);
    msg.setSource(30310U);
    msg.setSourceEntity(165U);
    msg.setDestination(52723U);
    msg.setDestinationEntity(239U);
    msg.type = 135U;
    msg.request_id = 204U;
    msg.command = 205U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.5669388134167681;
    tmp_msg_0.lon = 0.47865158981972467;
    tmp_msg_0.z = 0.715044178179891;
    tmp_msg_0.z_units = 225U;
    tmp_msg_0.speed = 0.4461675042272568;
    tmp_msg_0.speed_units = 85U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7114123501738392;
    tmp_tmp_msg_0_0.lon = 0.9361656015494121;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MYKCDIXIEVNEIMQMQGRXXLDSAZXNHOMEYCDLEQZGTVZLTDOBOIUNUKLVEKHEHXFDXPMAZGYTSSEEWQFGQTACNUFFWHXVVZOBSNUAWFICHJUBWFPGYCUABWQVEVCOFZXLTVKAXGUKWJZZPDTNAHANVDPHNDBQMKLUYOSHYKOBJHYLROFPPZTAIGPJRIRSPJYGINQUSRWWWRPARNICTMLDIBVKJSEDMMQJFTLYOHQGZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12745U;
    msg.info.assign("LMCCVMJTNJRZABSIDCEOZPNAYGQQKZUMBKYRDLEVOWJQIHSDENAXFGLZRPLHFSXXZNIDGKGBHXGDWMZBBHWRWYCCYECXJP");

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
    msg.setTimeStamp(0.029011757296387164);
    msg.setSource(26396U);
    msg.setSourceEntity(217U);
    msg.setDestination(40852U);
    msg.setDestinationEntity(31U);
    msg.type = 117U;
    msg.request_id = 52361U;
    msg.command = 82U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.9525282040455765;
    tmp_msg_0.lon = 0.8498278479259536;
    tmp_msg_0.z = 0.4817594071358132;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.speed = 0.704265081769614;
    tmp_msg_0.speed_units = 28U;
    tmp_msg_0.abort_z = 0.4861924339154893;
    tmp_msg_0.bearing = 0.19294671739212055;
    tmp_msg_0.glide_slope = 13U;
    tmp_msg_0.glide_slope_alt = 0.5003113738471612;
    tmp_msg_0.custom.assign("LXTUOSBVJKJRNMPAPMGNQZCACQGKUXRCIMPFTDQRKJWSZRELIPBNMXGIFPJXTMZSUOBOCVSPIEZLOASUHBYJEIKZHKJVKQOMD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 7740U;
    msg.info.assign("HTTHSPBKUSNPRSMTORBHSEHGGCZQVYDHWMAUKSGJEIXMK");

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
    msg.setTimeStamp(0.8748673461742762);
    msg.setSource(36873U);
    msg.setSourceEntity(46U);
    msg.setDestination(43853U);
    msg.setDestinationEntity(180U);
    msg.type = 196U;
    msg.request_id = 50892U;
    msg.command = 146U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 15688U;
    tmp_msg_0.name.assign("KAPMPEDXUDGQKQQWEFUNGUPIMCIDHTZDPJXIGWXESEIZRBFLUNWXEMYSDHUTVLSYTNYHGAHBLHAUHCZZAHWYLFXPBZAPLLF");
    tmp_msg_0.custom.assign("CXVFMGTLZYKKYERYXXPQONQJNRWSQIIOHOPHTVGMNCIAEJSFQXLGDOKZVZIEYHTWMNZAJHAWXQCDMYINHEZRICEXIFCBUQLLFFRWOCBVVKVWFP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26060U;
    msg.info.assign("RFJGWTHYEDYPXQDMOZVJEFBIIMCKWYUWLMGPVDUXFNKMHJAZRFEARNUTZPWGLDJMYRCIDUBHSWEQOBAQQKWSNXUVHQUVTQTJRDXQZMMDGNKOXRNOHGAPWYPLDWUXVQDSKILDLPSNHZWTZCIMBFZBTWKIKXYICHBREEQ");

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
    msg.setTimeStamp(0.721283383440017);
    msg.setSource(50665U);
    msg.setSourceEntity(75U);
    msg.setDestination(4445U);
    msg.setDestinationEntity(102U);
    msg.command = 201U;
    msg.entities.assign("QDNJIIGGLBFAPTFMFWVVYAMQSLIJSJBKYGRJUZNNJBCYRXPCLTERDYSHXGWVWHANQOKWFZCWBKOQEQTSGFHIEXDTIACPOUWJVUYKZLMUAHEXRKXBCSM");

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
    msg.setTimeStamp(0.48374364008798754);
    msg.setSource(9790U);
    msg.setSourceEntity(247U);
    msg.setDestination(3155U);
    msg.setDestinationEntity(120U);
    msg.command = 68U;
    msg.entities.assign("PSDVKEFVUEIICYTYBLIXJNIZQQUMBJRCSKHHTUUSOZOAQEZGNSTIIHWEVUCJNNAQPKCJOYNHPFABSFZLSRWVLHHDQYBFQ");

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
    msg.setTimeStamp(0.3441693179888293);
    msg.setSource(61036U);
    msg.setSourceEntity(229U);
    msg.setDestination(7220U);
    msg.setDestinationEntity(85U);
    msg.command = 18U;
    msg.entities.assign("WVOTWLUQYFMFRIECYPXXOVXGENMCKEANRBZGUFJXGRPJCZJVBQJYBXIRKPSOGSFSLCTLT");

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
    msg.setTimeStamp(0.4328718631594506);
    msg.setSource(3876U);
    msg.setSourceEntity(155U);
    msg.setDestination(64481U);
    msg.setDestinationEntity(36U);
    msg.mcount = 189U;
    msg.mnames.assign("GTYJAUIVDGBYPDADFCMTECYHLRDBSMMHPEXUJKDQOBKIVMCZANBCSUIZNAZOOKLJGXNCLCFEULZ");
    msg.ecount = 246U;
    msg.enames.assign("QHWCZQSVVOUYSDZFMVNAJYQWPKEVP");
    msg.ccount = 191U;
    msg.cnames.assign("PTUXIRMEEZBRAUZQXJDSARYJRQYGEWQTZNXWFGSYPJKCCXOXMNBMYMVYBODEOUXJFMCLNVFVOSQHDEBXKLCAWWVMWFJT");
    msg.last_error.assign("POGSOQIBOUURDSBJZWWWBVAXACQPNSNEQTFSTFYKMXIPDPCDLCOCSAZDYPHTPAEEADBXOB");
    msg.last_error_time = 0.9645653958973339;

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
    msg.setTimeStamp(0.6119613009376609);
    msg.setSource(32892U);
    msg.setSourceEntity(30U);
    msg.setDestination(19141U);
    msg.setDestinationEntity(52U);
    msg.mcount = 0U;
    msg.mnames.assign("VXBISBJGTYYJXWENFALSGIFSUINNQGFKEKAQWECGIFOKJFQKWEVPLZATDCNWRJVRIEFGHWDABZVBMXHSEIJUCPHMTBDUBOACRGHKOJLFYLEMLKDQQITRKADBBMTONAYOKGKRVAAYHHUVSZURUPPQZTHMNWZSBDYCESPXZPLQRHGOXDOVJPWKTQMUMXPICTUS");
    msg.ecount = 207U;
    msg.enames.assign("DYPPTYTSEITHAHTSNVNJXEELIYQYJQIGENUQQACCQYZASHUINFKRFUAAQPFLXKWRTZCLMDVVTZQNARCFRTRGCLNXWFYROGWVRYECJOXKPWCUMTUCEBZIJJDCMBSGKDUBJPZURZGAXGSSICVYXOPBBZEAOXKGNHBXNOKLOAFQWIMVPEFVWOSHOONUVQBZAWDJFMDKHYWNMHXHSJTBRDMHIYIIBEVLGDMDKJLJDWKLSLZTPRWXGL");
    msg.ccount = 174U;
    msg.cnames.assign("KYOKWQUDNVDSDRLFILMKFAWQGVEYVO");
    msg.last_error.assign("EQOXKIDJTSYTNZWCTQAVUIFODOWW");
    msg.last_error_time = 0.6091765252703361;

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
    msg.setTimeStamp(0.5319871065501786);
    msg.setSource(29709U);
    msg.setSourceEntity(251U);
    msg.setDestination(6704U);
    msg.setDestinationEntity(240U);
    msg.mcount = 112U;
    msg.mnames.assign("KRMHQMULENJWGQZXITCNNVEZRANKJFOEPEKPWSVHQATOFADUMDITCUQYXEWHYLBLJLKKAKTWWSODGXIJFFTGZMCMSAYRUVSQEVPWOFBDTVJQDYSURSRCXQKUXSDNECPORDNVGRBBZYHIISXKUGCV");
    msg.ecount = 53U;
    msg.enames.assign("QKVEDMTWIGGJHDRZKESYCNTUDUQHPTSLQBMPUATCNATUHHYOTFTZFBSLSEODNTHLGJLBWUCFXYWIXWXRQZNCXJFOSIZPRNPAVNLYJCDL");
    msg.ccount = 166U;
    msg.cnames.assign("HPZLZHFFUNGJWUQKZXIUIODXBJYRPFYZVHZYPBRRVATHWXSYSEVVWFYLSNKIAPWIYGHCATOQODMIUASSUGKWLOWQGQMTJYAALWCRTDNSIEBYUODLCUUQRXVDCZENTLYCDKNYJNFPXMWFMIKCDXOXDHRARTKVJGUBLQRGPDGOPVKCMCRTKWVBTFPMTHLKJFPZIZVXBFNOBEXTCXMNLDMQZMPNGHNSHJKQQE");
    msg.last_error.assign("KXNANFPLLASHRVOCURTGATMVSAKJEKRYXYSUDZQGIVENDPMFABPRPULMEPBQOCUTSONB");
    msg.last_error_time = 0.24448033189019058;

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
    msg.setTimeStamp(0.3589483717651831);
    msg.setSource(35898U);
    msg.setSourceEntity(224U);
    msg.setDestination(53888U);
    msg.setDestinationEntity(15U);
    msg.mask = 186U;
    msg.max_depth = 0.9078086773366727;
    msg.min_altitude = 0.3038458642870062;
    msg.max_altitude = 0.016317397925378452;
    msg.min_speed = 0.2837514101651428;
    msg.max_speed = 0.8176565440668871;
    msg.max_vrate = 0.004507612144508011;
    msg.lat = 0.35990978983318156;
    msg.lon = 0.8557010234934148;
    msg.orientation = 0.8291495826405139;
    msg.width = 0.6842395861799373;
    msg.length = 0.8921234836621053;

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
    msg.setTimeStamp(0.18602235992987348);
    msg.setSource(65434U);
    msg.setSourceEntity(82U);
    msg.setDestination(62133U);
    msg.setDestinationEntity(248U);
    msg.mask = 79U;
    msg.max_depth = 0.591954186857878;
    msg.min_altitude = 0.804322425929531;
    msg.max_altitude = 0.21479493990613174;
    msg.min_speed = 0.6328460989682996;
    msg.max_speed = 0.38301823559487946;
    msg.max_vrate = 0.8568135566809425;
    msg.lat = 0.04053512654308378;
    msg.lon = 0.7812531868054091;
    msg.orientation = 0.9065907120171204;
    msg.width = 0.8492653962507608;
    msg.length = 0.7827806019933126;

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
    msg.setTimeStamp(0.44151983730278477);
    msg.setSource(57262U);
    msg.setSourceEntity(123U);
    msg.setDestination(28099U);
    msg.setDestinationEntity(182U);
    msg.mask = 134U;
    msg.max_depth = 0.5588764867924363;
    msg.min_altitude = 0.048070589654051865;
    msg.max_altitude = 0.7120971153423074;
    msg.min_speed = 0.7665054714117647;
    msg.max_speed = 0.9411398992865628;
    msg.max_vrate = 0.32809753019146815;
    msg.lat = 0.7943628779186844;
    msg.lon = 0.6922650207178197;
    msg.orientation = 0.6568378763847372;
    msg.width = 0.8846346571101454;
    msg.length = 0.9954801346672898;

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
    msg.setTimeStamp(0.662580987696984);
    msg.setSource(23995U);
    msg.setSourceEntity(180U);
    msg.setDestination(30719U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.0891729537841972);
    msg.setSource(30429U);
    msg.setSourceEntity(93U);
    msg.setDestination(47400U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.6680485966109866);
    msg.setSource(40106U);
    msg.setSourceEntity(121U);
    msg.setDestination(43910U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.3752040791304537);
    msg.setSource(58728U);
    msg.setSourceEntity(187U);
    msg.setDestination(13990U);
    msg.setDestinationEntity(90U);
    msg.duration = 61690U;

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
    msg.setTimeStamp(0.5392536953162834);
    msg.setSource(5280U);
    msg.setSourceEntity(118U);
    msg.setDestination(38688U);
    msg.setDestinationEntity(216U);
    msg.duration = 55033U;

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
    msg.setTimeStamp(0.16667273573266517);
    msg.setSource(31319U);
    msg.setSourceEntity(237U);
    msg.setDestination(41434U);
    msg.setDestinationEntity(248U);
    msg.duration = 47U;

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
    msg.setTimeStamp(0.7034245599589383);
    msg.setSource(20715U);
    msg.setSourceEntity(249U);
    msg.setDestination(35375U);
    msg.setDestinationEntity(163U);
    msg.enable = 240U;
    msg.mask = 1578926018U;
    msg.scope_ref = 1823516192U;

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
    msg.setTimeStamp(0.055899876110846014);
    msg.setSource(14164U);
    msg.setSourceEntity(62U);
    msg.setDestination(46598U);
    msg.setDestinationEntity(193U);
    msg.enable = 137U;
    msg.mask = 2533628657U;
    msg.scope_ref = 2544249806U;

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
    msg.setTimeStamp(0.2620855139115289);
    msg.setSource(54931U);
    msg.setSourceEntity(12U);
    msg.setDestination(31441U);
    msg.setDestinationEntity(7U);
    msg.enable = 62U;
    msg.mask = 2445358653U;
    msg.scope_ref = 3549421169U;

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
    msg.setTimeStamp(0.7923060926426106);
    msg.setSource(13338U);
    msg.setSourceEntity(227U);
    msg.setDestination(57030U);
    msg.setDestinationEntity(239U);
    msg.medium = 212U;

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
    msg.setTimeStamp(0.57630031285041);
    msg.setSource(51527U);
    msg.setSourceEntity(158U);
    msg.setDestination(22156U);
    msg.setDestinationEntity(97U);
    msg.medium = 126U;

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
    msg.setTimeStamp(0.5459898889150564);
    msg.setSource(593U);
    msg.setSourceEntity(227U);
    msg.setDestination(3162U);
    msg.setDestinationEntity(213U);
    msg.medium = 47U;

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
    msg.setTimeStamp(0.11052517916571791);
    msg.setSource(20582U);
    msg.setSourceEntity(229U);
    msg.setDestination(20448U);
    msg.setDestinationEntity(114U);
    msg.value = 0.2817834367257026;
    msg.type = 206U;

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
    msg.setTimeStamp(0.4585234303466009);
    msg.setSource(57891U);
    msg.setSourceEntity(127U);
    msg.setDestination(795U);
    msg.setDestinationEntity(203U);
    msg.value = 0.3120699613926451;
    msg.type = 175U;

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
    msg.setTimeStamp(0.03150598403615734);
    msg.setSource(20091U);
    msg.setSourceEntity(181U);
    msg.setDestination(64570U);
    msg.setDestinationEntity(202U);
    msg.value = 0.9776526440431316;
    msg.type = 229U;

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
    msg.setTimeStamp(0.9651838576834161);
    msg.setSource(47003U);
    msg.setSourceEntity(171U);
    msg.setDestination(25667U);
    msg.setDestinationEntity(122U);
    msg.possimerr = 0.5833074298901808;
    msg.converg = 0.9516360270435565;
    msg.turbulence = 0.21057674902436208;
    msg.possimmon = 238U;
    msg.commmon = 9U;
    msg.convergmon = 198U;

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
    msg.setTimeStamp(0.322056650097445);
    msg.setSource(48516U);
    msg.setSourceEntity(58U);
    msg.setDestination(34790U);
    msg.setDestinationEntity(232U);
    msg.possimerr = 0.11813283498187155;
    msg.converg = 0.25130992082831893;
    msg.turbulence = 0.9667537723713635;
    msg.possimmon = 85U;
    msg.commmon = 37U;
    msg.convergmon = 226U;

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
    msg.setTimeStamp(0.49355906975349706);
    msg.setSource(50251U);
    msg.setSourceEntity(184U);
    msg.setDestination(10183U);
    msg.setDestinationEntity(100U);
    msg.possimerr = 0.14240133233635344;
    msg.converg = 0.4189792800756753;
    msg.turbulence = 0.18089934733336221;
    msg.possimmon = 120U;
    msg.commmon = 211U;
    msg.convergmon = 187U;

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
    msg.setTimeStamp(0.14918656050764845);
    msg.setSource(46958U);
    msg.setSourceEntity(162U);
    msg.setDestination(9074U);
    msg.setDestinationEntity(195U);
    msg.autonomy = 97U;
    msg.mode.assign("RNVCKLWIWHXYOEANUQPWYMOGYWKBLROHHUDAIZQQPSRSFSPHSYRPTSAJUVSVEFLBAKEHDFWUJEJSMMEGVVRXRKWSUBQM");

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
    msg.setTimeStamp(0.30409665314785395);
    msg.setSource(3467U);
    msg.setSourceEntity(237U);
    msg.setDestination(55169U);
    msg.setDestinationEntity(65U);
    msg.autonomy = 25U;
    msg.mode.assign("TPNOSIETFDAFXRXNYDYXTWGIIXFMNTBTKVKLEJYCFODVMCLCHUYISQSEDNUFBGQGHKTHGKUVRLNVZSIPETMZPUYEYXLWHAURKWBRYSOQTXWBKQREIOMIVYUZCCSJBQZIRUQPXMXDHCRJPDGOOWHSJGCVZFWVSYWFUDZEALWHGIITSMLGFJAOKVOPBHAPRTQVAJAMNQXDVWGMF");

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
    msg.setTimeStamp(0.9106304865680447);
    msg.setSource(58314U);
    msg.setSourceEntity(221U);
    msg.setDestination(48954U);
    msg.setDestinationEntity(153U);
    msg.autonomy = 230U;
    msg.mode.assign("RWSBCJXIPXVGDVTYEQTPVIYKCRRZICNMGQZDNVYMSVXOUQJQCTKWAMWOYNFTWEUEBYZDDHQIFQSIHMAB");

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
    msg.setTimeStamp(0.43684608006856496);
    msg.setSource(36969U);
    msg.setSourceEntity(88U);
    msg.setDestination(54604U);
    msg.setDestinationEntity(115U);
    msg.type = 7U;
    msg.op = 201U;
    msg.possimerr = 0.5274359112264624;
    msg.converg = 0.5388554843533774;
    msg.turbulence = 0.961190876866144;
    msg.possimmon = 236U;
    msg.commmon = 170U;
    msg.convergmon = 15U;

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
    msg.setTimeStamp(0.4804095498041243);
    msg.setSource(28839U);
    msg.setSourceEntity(62U);
    msg.setDestination(44540U);
    msg.setDestinationEntity(102U);
    msg.type = 5U;
    msg.op = 160U;
    msg.possimerr = 0.47550529753034554;
    msg.converg = 0.7172252018708087;
    msg.turbulence = 0.2516848326537855;
    msg.possimmon = 254U;
    msg.commmon = 113U;
    msg.convergmon = 240U;

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
    msg.setTimeStamp(0.7467839446761974);
    msg.setSource(1110U);
    msg.setSourceEntity(9U);
    msg.setDestination(18039U);
    msg.setDestinationEntity(108U);
    msg.type = 83U;
    msg.op = 132U;
    msg.possimerr = 0.8026031691385944;
    msg.converg = 0.9912925367725471;
    msg.turbulence = 0.7407522304389015;
    msg.possimmon = 159U;
    msg.commmon = 233U;
    msg.convergmon = 21U;

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
    msg.setTimeStamp(0.42291938982591226);
    msg.setSource(39904U);
    msg.setSourceEntity(36U);
    msg.setDestination(25369U);
    msg.setDestinationEntity(87U);
    msg.op = 149U;
    msg.comm_interface = 81U;
    msg.period = 62122U;
    msg.sys_dst.assign("VRWNWXYCNAUTVEVJBPALTIANMJITGMZAYXMOELWZPZXWWXEZJACHRPQIVKWJJQGUCJWVEZGWQSFFLUQXZECRBYLYEES");

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
    msg.setTimeStamp(0.1655348815977592);
    msg.setSource(47444U);
    msg.setSourceEntity(89U);
    msg.setDestination(64031U);
    msg.setDestinationEntity(134U);
    msg.op = 196U;
    msg.comm_interface = 227U;
    msg.period = 11153U;
    msg.sys_dst.assign("MCZQINZQSNSRTEMFEKASHWVJHUUSVTFOMADJXLBYKCYKPBEIVZAFDOUDBJTEWXNUICONGQMPXUTKQHJSTXLOABGZHBGVZMHSFHXONTCHJUHTQQYZPPUWWZWKXVKGNPAPYGLDCBFRSVDHEJYLZMUBBCPDGXMRILWUTKYMITBIGLFCEKGKWYLFICOINKSHLOECVJRSEQBRLQDROPOWY");

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
    msg.setTimeStamp(0.4109672636047518);
    msg.setSource(62778U);
    msg.setSourceEntity(79U);
    msg.setDestination(35078U);
    msg.setDestinationEntity(32U);
    msg.op = 147U;
    msg.comm_interface = 8U;
    msg.period = 9795U;
    msg.sys_dst.assign("KHYYEAPYDMKGTFCIFPLMQRLBZHQFWIUCXYMMALCFAXXSOILZONHUVPXUAWDJHTMBERGVZBAEGQAMGGQNNPLLIRETVXLTWSOIFKFJOTHQCOUHKDPEQNBWHZARSOKEUORJSZTKZWSYABJCLOGFXVMZZXSGKPOBCTNIXDXWKMYTBICZEDLNWVVTIYJJNGSDLFUAGJYQDBSJD");

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
    msg.setTimeStamp(0.1439251067903322);
    msg.setSource(7561U);
    msg.setSourceEntity(162U);
    msg.setDestination(49229U);
    msg.setDestinationEntity(128U);
    msg.stime = 4140359530U;
    msg.latitude = 0.24522603523835484;
    msg.longitude = 0.35712779676739703;
    msg.altitude = 21861U;
    msg.depth = 52180U;
    msg.heading = 10360U;
    msg.speed = -20348;
    msg.fuel = 8;
    msg.exec_state = -6;
    msg.plan_checksum = 45239U;

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
    msg.setTimeStamp(0.5313814458657948);
    msg.setSource(41736U);
    msg.setSourceEntity(123U);
    msg.setDestination(50086U);
    msg.setDestinationEntity(88U);
    msg.stime = 2168442860U;
    msg.latitude = 0.912898387155195;
    msg.longitude = 0.10743333496028118;
    msg.altitude = 24879U;
    msg.depth = 13923U;
    msg.heading = 16337U;
    msg.speed = 2127;
    msg.fuel = -7;
    msg.exec_state = 78;
    msg.plan_checksum = 56075U;

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
    msg.setTimeStamp(0.8429046226654449);
    msg.setSource(10339U);
    msg.setSourceEntity(227U);
    msg.setDestination(19474U);
    msg.setDestinationEntity(148U);
    msg.stime = 2381477606U;
    msg.latitude = 0.5159230685763839;
    msg.longitude = 0.587175933665706;
    msg.altitude = 17102U;
    msg.depth = 28457U;
    msg.heading = 58093U;
    msg.speed = 934;
    msg.fuel = 93;
    msg.exec_state = -118;
    msg.plan_checksum = 51726U;

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
    msg.setTimeStamp(0.5227783024219755);
    msg.setSource(10895U);
    msg.setSourceEntity(226U);
    msg.setDestination(36639U);
    msg.setDestinationEntity(126U);
    msg.req_id = 31966U;
    msg.comm_mean = 49U;
    msg.destination.assign("OWDFZZQCGRHMKWBCYYSAIDXHKCWFXSOZRQVCULBFRFNAQLAJBNHPLWGUINRCZDDEXDLTPJQSJHDTLHINFCRUCVWAKFRIGUMLHQNNEJZEELUGMEIXSFXZDWLYAYEMHMVZJGABJSJKRBYUUWYUBMPFCKOMXVVYZNVHATIHXUPWJITETKJMZJGYXKGRBOVHRVOUAOOATSSFOFVGTKQBIQTMRPBLPEEDXIKPIQSQAGWLDPVSOPBCQZCYYNK");
    msg.deadline = 0.44617468381186265;
    msg.range = 0.03512064568623141;
    msg.data_mode = 118U;
    IMC::CommRestriction tmp_msg_0;
    tmp_msg_0.restriction = 66U;
    tmp_msg_0.reason.assign("FTMINFHPXCJIDRIOLUEUDAKFZCBZNDUGLWPFBVVSRUTCRHXUEUOTLWPPYZTEPADKIJCCDPKTKUXANCMDWRHXAPUZBOQWRGMOMTJGJZRPLNJNNWVSESDHQCMSXIYBKBBFAOOJAKYRHAGZYSTOLTTXETWQQJOIKLNRUEWFGWZHAVYBSCQFXXDZUJGSMGBPOANMLGKBSKMNJFWXIOQACY");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YIUGHSPMNCFXUGBXOIADAAMECQRWIUGETCRQXOTKOLFLBMCUPADVAQJNBUHFQYJESXJRFMQRQLSUHFJTQPBTIIJEDHXVCOWEGHZXLKAGYDHTAJPFYVQIECXSYVPDYLECPCSMFCHPNBUYGFNLZZNZTYTVKNIHWZMRIKFAOKVOWKMPSAJOQIWNRLTSNJKUZGKWBEVZLIWZBVBK");
    const char tmp_msg_1[] = {-65, 9, -49, 47, 92, -85, -118, 120, -37, 39, 123, 58, -68, 124, -98, -34, -20, -39, 64, 88, -3, 51, -101, -12, 47, 7, -68, -16, 85, 99, 110, -94, 17, 13, -39, 14, 6, -52, -34, 47, -18, 111, 0, -87, 74, 80, 86, -105, -48, 37, -24, 39, -112, -60, -53, -55, -63, -112, 84, -58, -85, -38, -117, -19, -106, -31, 44, -9, -98, -113, -61, -54, -119, 110, 29, -3, 43, 37, 27, 76, 30, -75, 59, -54, 99, -21, -67, 58, 92, 38, -28, 84, 33, -105, 66, -34, 22, -9, 10, -89, 83, -27, -71, -83, 78, 73, 4, 97, 119, 96, 5, -1, -102, -2, 69, 86, 123, 13, 72, 18, -81, 35, 2, -112, -9, 9, 120, -95, 91, -85, -66, -44, 23, 25, -97, 106, 124, -10, 44, 63, 29, -41, -97, -48, 40, 51, -42, -75, -50, 98, 118, 33, 120, 86, 92, -88, -40, 123, -118, 84, -29, 122, -47, -12, -1, 33, -120, 15, 39, 36, 120, 92, -55, 20, 89, -59, 76, -63, 108, -57, -125, -105, 9, 27, -52, -29, 85, -115, 26, 28, -99, -83, 31, -120, 125, -9, -94, 111, 106, -111, 100, -83, -64, 30, -51, -117, 58, -78, 67, -127, 113, -78, -70, 105, 101, 24, -61, -17, 82};
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
    msg.setTimeStamp(0.08493206067711212);
    msg.setSource(1884U);
    msg.setSourceEntity(146U);
    msg.setDestination(33027U);
    msg.setDestinationEntity(10U);
    msg.req_id = 49192U;
    msg.comm_mean = 90U;
    msg.destination.assign("LMYBPDOZXUXPRMKJUVKIIRPTDWHJORSLJEIYZYUXCFULQ");
    msg.deadline = 0.950037189819585;
    msg.range = 0.29030619186081974;
    msg.data_mode = 38U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("NSZBJWFTTCVIBEPNOROTQUSLVEGSNZMYMOXLMQIZPEKQPDJWACXLTVMXFCFWUDWABFKIVXESAGYYNNYGFKODXSCZUHSGAFLZIQJAGKIRJDJRNJQUMMEOXFGTQTVASVWOXTRMIIGCBLAIKXBSNLRMHHCHNDRRJWPJPDVUUYRZDFLFUWTSLUBFVUWXBMLSKCECHPZIPVQRPBDQYYBHZYEMJ");
    tmp_msg_0.max_speed = 0.11962580492401031;
    tmp_msg_0.speed_units = 46U;
    tmp_msg_0.lat = 0.12033350589446423;
    tmp_msg_0.lon = 0.5183688264854929;
    tmp_msg_0.z = 0.21472648894687352;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.custom.assign("BJAHPHNNDULSJCZEWHSXARUVWKSFVQJWUKHIQKYVFGAKHZMJWJLNCFWLTDHGITMPVAGL");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XUAWXJVRTPYWFSAZISGNEQTJPBLRTXPBCKUUHNTYKVSHEIIQVOCFXIQAMWG");
    const char tmp_msg_1[] = {-95, 110, -84, 60, 121, 23, -50, -43, 71, 69, 34, -44, -8, 21, -37, -19, 66, 70, -60, 85, 29, -87, 50, 90, -1, -54, -39, -56, -110, 115, -73, -62, 53, -20, 104, -106};
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
    msg.setTimeStamp(0.10355883686344713);
    msg.setSource(53220U);
    msg.setSourceEntity(187U);
    msg.setDestination(64885U);
    msg.setDestinationEntity(223U);
    msg.req_id = 29334U;
    msg.comm_mean = 194U;
    msg.destination.assign("FROCNKPXUGNIRTVYKANZSIRMOHSHREUITYLZFDGBKJMXXPPBSQNMICNJEIFWRBUFQFSMDSQLNAHTBOZJSHWVZDJXTVUFKIBCNLHRGGMQXVYDIPOAITVHJQDWLOCWREFMKEZLWQWSHGJFNXEOVAKNOAZLPYGENHTJVSFDWOKQBSBMYBHXRBJPPYWG");
    msg.deadline = 0.012276814225964716;
    msg.range = 0.7459987290976622;
    msg.data_mode = 251U;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 57190U;
    tmp_msg_0.sys_dst.assign("RAHMXMQDKXGJWLOJPZDKSJJTALUQHCZNJNEOHETYFKXULOVGAQ");
    tmp_msg_0.flags = 92U;
    const char tmp_tmp_msg_0_0[] = {23, 15, -118, -49, 42, 106, -39, -25, 62, -68, -43, -82, 10, 41, -21, 110, 32, -85, -66, -4, -71, 42, -82, -78, 107, 67, -31, 102, 10, -39, 98, 37, 66, -120, -29, 112, -10, 85, -20, 84, -5, 101, 74, 33, -16, -82, -37, -103, -2, 114, -51, -123, 68, 101, 94, 42, 61, 66, 77, -121, -117, 62, -11, -120, -63, -27, -5, -37, 47, -22, -120, 41, 53, -108, 20, -112, -120, 2, -10, -39, -63, -9, -118, 32};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZRYXSKXYAPRIQALBXJWSJAZQHUPENSJRRKZFALVWZAVIGZTMDHWGLURWJZXEJTMOJHCDUSVAYUGOBUBEKMPVGPRFTKCINTOIUDYNEUETKKVBXRBQSISWZFKKMXGDMLKNYVHNYLPUMJVHIHPACODFISVQSRMENTOCELFDYWXNBBCGDEEUCSQPMILJDLTGJMQFKORHWIFWCTDWQQYLXHZPCGFBNOE");
    const char tmp_msg_1[] = {54, 79, -86, -5, -105, 107, 20, 2, 56, -2, 23, -57, -22, 95, 104, -118, -81, -71, 26, -36, 66, -61, 58, -79, -92, 44, 20, 15, 54, -23, 60, 90, -29, 13, 2, -20, 115, 105, -77, 69, -24, -105, -37, 9, -118, -98, 9, 89, -99, -34, -43, 52, -117, -72, -14, 19, -76, -103, -36, 27, 34, 10, -113, 116, 16, 67, -104, -115};
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
    msg.setTimeStamp(0.2679007958916222);
    msg.setSource(40810U);
    msg.setSourceEntity(128U);
    msg.setDestination(353U);
    msg.setDestinationEntity(4U);
    msg.req_id = 60434U;
    msg.status = 250U;
    msg.range = 0.5053348604089468;
    msg.info.assign("ESXYESYIKSPMMHYPWSXTAPOTLJJVUFAFWGNEZBDNZZHTNUKAPMRXGAOOKXSTIGBHDSOFVRBIHQFNKTNZSQYFLPJZVGGESWCVKJRQPDWHDRCBWMFMACJWLBYVGUGPYKIJHAXTWBOOERDFGLMDDQNVCDNOXJZBUUWIAQXGRMIWKPIHACEKHHJUVCVMFQDSKQRLARPLOBJLYNHIXTLLABZOTQMRBIVDXEVJFYLMTCFPC");

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
    msg.setTimeStamp(0.012704409189071453);
    msg.setSource(1192U);
    msg.setSourceEntity(182U);
    msg.setDestination(27605U);
    msg.setDestinationEntity(21U);
    msg.req_id = 22630U;
    msg.status = 224U;
    msg.range = 0.41189784009036434;
    msg.info.assign("PYWHOUBDHBGQLCYTMJNYZLOPUGFFBDEPCJSUEYAQGAHCJLDZFGIEBLTHVSAUDKCNRISPMNSQBJOCNZAJYIHJZLLGXKMPXWTKXKIBUKFXEFMJLBWGDJOIFWNDIXNDVDBWPWRMQZOSVUEI");

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
    msg.setTimeStamp(0.4275544715272944);
    msg.setSource(64948U);
    msg.setSourceEntity(103U);
    msg.setDestination(63770U);
    msg.setDestinationEntity(11U);
    msg.req_id = 57769U;
    msg.status = 206U;
    msg.range = 0.22256863953113548;
    msg.info.assign("CHQQIRLOMOUMFIZKKCHBLKWCJVCFQHUHZPBRUEJRINNIWGQOCABZJSCDXZLXWEEYNAQLWMEJZWLOTGIEZPRMBCGUZ");

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
    msg.setTimeStamp(0.40659370247718474);
    msg.setSource(40268U);
    msg.setSourceEntity(16U);
    msg.setDestination(26764U);
    msg.setDestinationEntity(34U);
    msg.req_id = 12105U;
    msg.destination.assign("SLOGHVZVFAHOWIYEPNHKGMTGNABREWNWOYEWNNVDNRQGXJIBOAIVAMYGITTUTRJRCNNLFPXUYTBWUVHGMLMOTQCADNDCGPWDCFZSSVGFQZKMXQVRJCKSYEWBTCJKZNAMDUPPFQQTOCFMIXLXFRWFIIELLDBUOB");
    msg.timeout = 0.3069321676198081;
    msg.sms_text.assign("EHYBXGRYCKBXRTKZFXBBUJMXRQRTXUGKOBVABAPCZPDOYUSCLUKGCQQZGJFFAIACXMFGXPSEHLNSTHAKMWOZYDWYEYONANMGRPTLDHTRCFIDV");

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
    msg.setTimeStamp(0.33429515990186887);
    msg.setSource(10600U);
    msg.setSourceEntity(53U);
    msg.setDestination(51172U);
    msg.setDestinationEntity(36U);
    msg.req_id = 64837U;
    msg.destination.assign("LTGKWFRRECPBZLWUDMXXWDNOZGQPGOJPCRKYBDSMIPUMUILNWGJFGHJDVZJNOTVHVZMGEIZNTVAPUCEHYOCLFEXFHBAIAWZYVQIBZTLEHBTKKKDRSAXWSIQYEJUMARSOVFSP");
    msg.timeout = 0.7240296770428006;
    msg.sms_text.assign("BKWCQPFZPLLDAIETFWWDJEVJUBUBFWTAS");

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
    msg.setTimeStamp(0.032787415643697915);
    msg.setSource(18046U);
    msg.setSourceEntity(167U);
    msg.setDestination(3749U);
    msg.setDestinationEntity(187U);
    msg.req_id = 14437U;
    msg.destination.assign("PJNIBQONXFYQPPOETUKBQLGEAXNIUNVJRVZMXXKJEMPAHTLXFVVANBUBUKMHHHXLRGQPUIROMCCUWVIWSHOQMYSMCDJSK");
    msg.timeout = 0.8242231906813015;
    msg.sms_text.assign("YOOPTZUKMMWGACAZTBAHJGZAFHPHLDKYBWCSZKNNSDOKBOSRDITERQYEADUTWZL");

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
    msg.setTimeStamp(0.9928894809180142);
    msg.setSource(36168U);
    msg.setSourceEntity(187U);
    msg.setDestination(57792U);
    msg.setDestinationEntity(131U);
    msg.req_id = 10315U;
    msg.status = 10U;
    msg.info.assign("OKRHDJZPBQMVSDU");

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
    msg.setTimeStamp(0.5008591483615358);
    msg.setSource(12513U);
    msg.setSourceEntity(179U);
    msg.setDestination(56566U);
    msg.setDestinationEntity(247U);
    msg.req_id = 50011U;
    msg.status = 235U;
    msg.info.assign("FZQZVRSADAMUUZLHZXEJFHFKIQHABEKILFCHBLAURIJQPFDBJTUGBSUP");

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
    msg.setTimeStamp(0.2674163368997915);
    msg.setSource(2294U);
    msg.setSourceEntity(53U);
    msg.setDestination(59853U);
    msg.setDestinationEntity(214U);
    msg.req_id = 29164U;
    msg.status = 31U;
    msg.info.assign("TWRJXGFIKKTUZTQZBEHPHVTGJOACADKGLUQFCFOXKEYUIINOKSRUWOGEGUBFQOVDAFGCABUFYYZXMNYHZLTEFDLDAPEDASVNKHZZUZEJQBP");

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
    msg.setTimeStamp(0.618707947791473);
    msg.setSource(15587U);
    msg.setSourceEntity(148U);
    msg.setDestination(27837U);
    msg.setDestinationEntity(209U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.8960587253767469);
    msg.setSource(39751U);
    msg.setSourceEntity(136U);
    msg.setDestination(1067U);
    msg.setDestinationEntity(151U);
    msg.state = 155U;

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
    msg.setTimeStamp(0.39267350269343115);
    msg.setSource(24369U);
    msg.setSourceEntity(209U);
    msg.setDestination(15955U);
    msg.setDestinationEntity(89U);
    msg.state = 222U;

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
    msg.setTimeStamp(0.9337534133111027);
    msg.setSource(19876U);
    msg.setSourceEntity(145U);
    msg.setDestination(5154U);
    msg.setDestinationEntity(104U);
    msg.state = 40U;

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
    msg.setTimeStamp(0.9917529345729977);
    msg.setSource(63450U);
    msg.setSourceEntity(159U);
    msg.setDestination(65215U);
    msg.setDestinationEntity(247U);
    msg.state = 162U;

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
    msg.setTimeStamp(0.14863280459303752);
    msg.setSource(11827U);
    msg.setSourceEntity(115U);
    msg.setDestination(28457U);
    msg.setDestinationEntity(190U);
    msg.state = 159U;

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
    msg.setTimeStamp(0.12359062907440088);
    msg.setSource(48019U);
    msg.setSourceEntity(190U);
    msg.setDestination(7489U);
    msg.setDestinationEntity(138U);
    msg.req_id = 41784U;
    msg.destination.assign("KUOUZIYZKQRJUHSORZPBUDNUEEXTMFCDQLHJVQTAASRHENZZGDWEPFQHOKRESRWELTFFGPMEXIFQTNLVKNGXMSQCPWZZAVFDBWRBGYLAZCVTOCABVWTVJYWNIISOUQOKXSYTDMJXIVCOGDFXBANWOKGZCHTYWJFNDHLUGDLPICJRXUPIMRFGXMICSYDGJOKBKPSWIVQPWHLYNAEUDNHLUEBHYPARCCMYFQGBSPMTXRTLJAJSMAJOBVKLVYMQXI");
    msg.timeout = 0.6399611809140704;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.5999485509683101;
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
    msg.setTimeStamp(0.6937210957120233);
    msg.setSource(40922U);
    msg.setSourceEntity(193U);
    msg.setDestination(12461U);
    msg.setDestinationEntity(53U);
    msg.req_id = 34597U;
    msg.destination.assign("QBTSUAIHCFTRUILZDMQOUYYZZNRXFGNWPMPRMPGWVVKCRBLJLREAMGDRVHCGOGIXWTNOVXXIJVJFJSTUYFLZSKOKDVNNNFIDWQYQYZGWQXKGXHHVMBUOHOEAUYTRHJPUOVXPZFOTBCSMHNFLEJIKPWBGQRJBKKYIRVXNZZMSCGLESX");
    msg.timeout = 0.9320224229584722;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.012449730213050847;
    tmp_msg_0.time_next_service = 0.4679810192389078;
    tmp_msg_0.time_motor_next_service = 0.1881510754190443;
    tmp_msg_0.time_idle_ground = 0.402525794214202;
    tmp_msg_0.time_idle_air = 0.5465298313276324;
    tmp_msg_0.time_idle_water = 0.49276608423936097;
    tmp_msg_0.time_idle_underwater = 0.9959641413973849;
    tmp_msg_0.time_idle_unknown = 0.21217666088541753;
    tmp_msg_0.time_motor_ground = 0.9445313417071896;
    tmp_msg_0.time_motor_air = 0.34041366860739086;
    tmp_msg_0.time_motor_water = 0.3342105079841753;
    tmp_msg_0.time_motor_underwater = 0.1396807557806845;
    tmp_msg_0.time_motor_unknown = 0.17032684055627512;
    tmp_msg_0.rpm_min = -24263;
    tmp_msg_0.rpm_max = 5941;
    tmp_msg_0.depth_max = 0.9152139655352177;
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
    msg.setTimeStamp(0.0056683954767419165);
    msg.setSource(6106U);
    msg.setSourceEntity(210U);
    msg.setDestination(6330U);
    msg.setDestinationEntity(131U);
    msg.req_id = 1227U;
    msg.destination.assign("QKXQDFLPEEADLELORIGRJQKOHPYVNURFZZXLISOGXEOWQHGZEPWJBYPCVRKIDHAUVLDJCNTXKGDNKHBXOWITUOGAAWOBFGRFMSDCRYRMULXNUOIBUJDHSBEFWUZVPUSVUXDPAOSLTMWWMJECMNYTZFTCKQTKQKAELHVBTFFEFYFQWZBNCLPJIAPIDPCNKMXIMCXTZDYSZJKBBGYTXBUAHR");
    msg.timeout = 0.25679571041637284;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 50223U;
    tmp_msg_0.status = 105U;
    tmp_msg_0.info.assign("ORHXSLZAVTCOODTEIQBJYCJTGRKDPZWDSZSMUNWBULSDRPBFDGMEYBHUXAUCMQPJWJSEMWRXBLNSOPJSWJYNUAWRGCLVAAGLZVBRYQMAGNHNDUXZYTQVPAPETQLCJRVOLSVIUOOJKXCVYNXPOUIAIFJOKCHRVCXHMIZKITWHMDKKPCQZGEFTWKHAEGBDJEYZQDBFZHWHHENBQGSKIGIXKNVABRNYWFKQYYXUXMFMIFNFPOMLEITVSRLDE");
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
    msg.setTimeStamp(0.27781347559488667);
    msg.setSource(9581U);
    msg.setSourceEntity(243U);
    msg.setDestination(18695U);
    msg.setDestinationEntity(219U);
    msg.req_id = 50606U;
    msg.status = 198U;
    msg.info.assign("THEBPPYACJQTDHNLXCQLXTEBUVXDYQOSJAZQKCDJOJQTPAXLDWMHHURYVHUKQXWLXLZPCATEBO");

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
    msg.setTimeStamp(0.8593049937212318);
    msg.setSource(773U);
    msg.setSourceEntity(68U);
    msg.setDestination(26107U);
    msg.setDestinationEntity(92U);
    msg.req_id = 60109U;
    msg.status = 12U;
    msg.info.assign("QOQEUBRNIRLDEXWMWEAUPUXZTWPLULNHWMDIRGZACVDBFTFPAIRJMNQXTIFYIRPWNYWOVTAUDBQGYGNCKWKAPWKZOUSD");

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
    msg.setTimeStamp(0.8203782568837209);
    msg.setSource(19481U);
    msg.setSourceEntity(97U);
    msg.setDestination(21856U);
    msg.setDestinationEntity(109U);
    msg.req_id = 46799U;
    msg.status = 116U;
    msg.info.assign("XPKNKLCOXTBNRUDSLJAMYKXAWIYKXFGOJXRPBLTAVR");

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
    msg.setTimeStamp(0.8540580007659336);
    msg.setSource(13115U);
    msg.setSourceEntity(161U);
    msg.setDestination(54882U);
    msg.setDestinationEntity(159U);
    msg.name.assign("OQOQPDVAYZOJKFYHJWJRISXTYD");
    msg.report_time = 0.20512820141973365;
    msg.medium = 201U;
    msg.lat = 0.8574861668549656;
    msg.lon = 0.5957238183101755;
    msg.depth = 0.1278084866464041;
    msg.alt = 0.16741515498704074;
    msg.sog = 0.12920704774932879;
    msg.cog = 0.12084682435887939;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10601U;
    tmp_msg_0.off_x = 0.940381731486357;
    tmp_msg_0.off_y = 0.7177287522353284;
    tmp_msg_0.off_z = 0.35638801466493764;
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
    msg.setTimeStamp(0.378911210556125);
    msg.setSource(2064U);
    msg.setSourceEntity(128U);
    msg.setDestination(35948U);
    msg.setDestinationEntity(161U);
    msg.name.assign("YIUISLNETCTHDPSWWSTLGPDKZYFOQEKYQBIMPJPDBCQUIYAMLDVKZDBLRZOVNQLOUPFLSAGCTVRMOYIKEOLSGEHJEIRWTHTAXBBKSFWEQPRBFWOFQPWNQVAAFESMGFSPOUXZVTPGEXOTCCHMWKEGRCUVVOAWVWIVHXYXCERXJCLPXBRMUXCZQMSMVFNYGAHJLJBLDNQCJDZGYDBZDURI");
    msg.report_time = 0.5380256182201117;
    msg.medium = 207U;
    msg.lat = 0.0697693878815352;
    msg.lon = 0.4889837045210139;
    msg.depth = 0.11981637352266561;
    msg.alt = 0.2985689212524828;
    msg.sog = 0.7338480367620202;
    msg.cog = 0.2728423545207249;

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
    msg.setTimeStamp(0.11819689777190356);
    msg.setSource(29728U);
    msg.setSourceEntity(190U);
    msg.setDestination(31369U);
    msg.setDestinationEntity(133U);
    msg.name.assign("FOWXPLYVGXMYCQXM");
    msg.report_time = 0.5745426362842013;
    msg.medium = 222U;
    msg.lat = 0.6346618086126188;
    msg.lon = 0.7105456912515086;
    msg.depth = 0.585867041396319;
    msg.alt = 0.4686320708198126;
    msg.sog = 0.6144725525878177;
    msg.cog = 0.7058461287872778;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.8956919149649256;
    tmp_msg_0.lon = 0.8877397754276608;
    tmp_msg_0.eta = 3646152579U;
    tmp_msg_0.duration = 60642U;
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
    msg.setTimeStamp(0.43915160522152286);
    msg.setSource(58796U);
    msg.setSourceEntity(55U);
    msg.setDestination(64011U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.6667997679791892);
    msg.setSource(37563U);
    msg.setSourceEntity(10U);
    msg.setDestination(58270U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.9391124980560912);
    msg.setSource(18289U);
    msg.setSourceEntity(96U);
    msg.setDestination(18996U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.5882857932853918);
    msg.setSource(7085U);
    msg.setSourceEntity(76U);
    msg.setDestination(16015U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("ABHTHCVOKHXVLAWFQKEXHSSUGXZENDBZVBQCRTGZDIZLGUNWMCSNESN");
    msg.description.assign("CZMOISTLHSEGPWDMNRSMHRYEEUIBVGPCVHDDJGSAZAEQECCGOYSENLTZPEOJDBYBZAFMZMKFWIXGOQSMUOOEQNDYVTJMLLXDITWMPBCJJKZQNBSMOBUHSNOWHUFOZLXUNJVYDKNWXYQFBUELLXVCVRWAHUPYXAILAFPHGKRYLPRYWINQHKGHFL");
    msg.vnamespace.assign("TNMNBOWVESEBFQCXHBZTWRRPVKQHQIFXAFNTXQAZEHACOYUYSCSQPIWVOURFIELSTDKENJYOEOCCFUAIKHWIMAZMFNHRIOMTAJWCPSHTLVTETPMPJRLTBCHYGUKCJAQDDRRBKIPKJWLPJULHXPWGNVSMXDVGNAKOYKQGQOCDKGXYTZEWXMMJUBSMFLUQPGGLVYMZYODEOGDHBXJLNVZEFPZZWSJHXSLIURBDAUFXNVBRQIGLBNYUZGDRICJFYK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KGBSYJGELGXSXQFZFPLBSPXGOACXCMKBREHUNFALQUTIEWMCLMCEXOMMZCEITRHUWQNQDAUAXPXDAOOSLFNEIBUHKDNPYLEMOTLWJIQZDDRNPSBW");
    tmp_msg_0.value.assign("YXWLBPMQYYRZTUJNUNMUBOIBQKNSKYZCXDZHERTSLWTAXKEEHOGDPRJOKUPIVHLNQGQBLUTXML");
    tmp_msg_0.type = 65U;
    tmp_msg_0.access = 33U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KQAAEFDIGRGHIPSTVQPUCANOVCOVCDRWQFXUUGWHLSYRVLFFDNXOZZHZBRVKZENRKZXEDXLELKDYWKJIFLKGROKJRNDRYBQYNTWOFSAIUTXCHQPBEETSYQKRBZPJPPEIJ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("COWPGVTYVTYQOBFPLBXHUHRWWKJGVKCNMCIEQVIZCBHDYLFXZRJNABYDIEJTJKMJOUSIEJTKZDMRRSEVCDSOVYUOMRFDHKAZNAKRVHNQZWSPANIHLUMTBCLZXNJTWAQECZAFTOCNXNCHDMFOTOPYLIKBGHUFDFXWSZHSQFSPGJYRYQRUIBNFDAZPWELQFKUSMPGEGEDZ");
    tmp_msg_1.dest_man.assign("ZJFKRTGTUN");
    tmp_msg_1.conditions.assign("WRWLDECKTOTWSNRCWAFISBVFMUVKMIOHNRQTBPOYUMLSXJEVUCSGRMFJAQANQSHYZTSNBLQEVEJQZPCPPQHZDLITHYNPBTSQLRFKFDLDGACPLDFXCZXMPBLUNGGRVZJYTAHKDUJXFUAEBMFNMQHZIEMTUQCNXASEGGBILZMJDYIYJZOKDCBRJWYNOTWAUWCDRYXIROIKZAYOUDHBGGZXVNHLOVBXVPKWJEWCFUGHQKVGIESMOEHPIJO");
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
    msg.setTimeStamp(0.6925612643096153);
    msg.setSource(19535U);
    msg.setSourceEntity(5U);
    msg.setDestination(62704U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("ACRDAVPZHICDZIPYAISYLCOBJYZYURPONRLFKXHBMTIXSOGXMHNPSIJSNBTQNYJLLBGLNJYJPXFAEZQWDUXBNTMSUJEQBQOVNNQZZOQBOASZJMZAUXGPGHLAMVOTJ");
    msg.description.assign("EHNWKRPLUOBNWZASYCDLZLQFEMEKYWPCM");
    msg.vnamespace.assign("OYKHREOANXGVZIAYLVKIOIOJGTNBSWBLBTFISLJMSRCTXJWSFAVLKHFTJVNOKUQEIAYKQRKSWPGDCLTHPMVEHDMUGAURYAFMHCZOSGALSKYRZTLPONTHDJDWHPOXQAXWXUFPEIZRJHCAYHJTCZKZDVBBJGPBROMRCCEQMQFJSFGQFULCUVJ");
    msg.start_man_id.assign("TQKGUNTVOAQBYIUXHJMXTJGHDCYWLKQTJQCZMNXHOTCVYMSYPRIPQMEUVXSIJEUOERBPAOACVDDQCBBVYAHEDSBIUOTFROLRCRZQHJMML");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("ZMAJLWRWVHEODEIQSGUWYPBEIRPRMHXVKEHSPPSXFMNYRDZRQUNWBGXIKLYIDKVVJXHJOUUADDWZYNTIQGHIBYTOOVAQCQLOINHEYVPKGDOKQXFMVFFZQCWIPGAKCLXBSERQNYWCMLZHOCZWUGGFLCPRXZSGFZAKUCEDASMJZBYJGABHJWMHAKXOBSPBLSQPDJDCNBYCXLTTUFAFDKJOEMUYTENNMTJXOFINCRTH");
    tmp_msg_0.dest_man.assign("OCDYTGJSAGEBQULENWHHDKGFNTHWOJGADBMHOPRLCCPXSKXMKKHYRKLNAKGZUUXDSSOTQNXMUZXMYCFGIOJWYPUGJSFCAIKVLUFIBVWZDHGBNVJFWPWVRFIONTLQDSPBXEIZBMVQPYWQOQGHQRAVLRQDBZBFXKLUEVTMZAHMORMTEVRYEUICIELLTJFIOJNESTCJC");
    tmp_msg_0.conditions.assign("JCEFYNCMTRCMNAQXWZZZKZEXLWCGEPQSZARMDFGGIMFHCRPINTVDXGRIUTPJPKLEVVKMCHVBHJXGKWJDHUUYIRPBNENZUFVBAZTRXBQOIVDEUULYUETNCMRRHFUHTFRGHMIESBXRKITANDDKIBVPGMCLALGSIXKHEJYITXHNOOQAZKBOPJWKNJUSYYXSYPLPOZHODQZPFAQWWFGCBFSYMSYQMBDVDJOUKQTNJAOEWALDSCVYWF");
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6811978638480252);
    msg.setSource(19990U);
    msg.setSourceEntity(82U);
    msg.setDestination(64078U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("RMFSTHZGOYSAACVMCQBMHWGTZHNDZYQIWTWGORTYVRJUROQTXGXODFWCSVSIJIXTLEPWZNZVFBKBXDVFLOGAQFYJKTSMGKOXIGATFLQYKNBRUJCWHTRWXIUMBDODBDRMCSAXMAQHNPUG");
    msg.description.assign("UQOVWXXSVYMMBHLETPEQMCHFKLOMEBDQVMQVLFFXHKJPZPRGGNVADBPBFAONKADJMZEYVZZJBHCFNAGRYYXLQHTRRMYFWFYYKSVQCSTWHJHWJTKZQPDRDX");
    msg.vnamespace.assign("BMLRECUZGOEKLWMXBDRLSBRKMNHEPOPVNCASTAYQKLAZAUGQUWGJKWMVSRLOD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CCXHDYUTPTTBWTHRLMJXRQDWLNHOMVRXJWQQIHYJSPDMPWFTOCOENPMZDWKOLSGJBNGBSDXXUUOBECVBYZGEAICLBRRPFZZPPTAANIHRJNXDLUERFIXFGZSVYEVHWFXGNSDJADAGRYOHZBHGMBAKQLDBKWEZWTAOKFRUYJHCEJMDEMQQTSGUPCWNIAPACZIKVVKEZONTJFFSJLIFCVGQCLEIAYMVRNLVNUYOKOQSFGIZKMKHT");
    tmp_msg_0.value.assign("CYRPIYJKKBIAYCHBAREOYRZSHIHHWGACIHWVQGRPLGTMJMEUTZNHWUJGFTKAKDIBXOIPGLLSDRHOIIUQODXCJURAQVYDVZKLLKDSMFWSXTYNBSRGCXWQLBASDB");
    tmp_msg_0.type = 83U;
    tmp_msg_0.access = 26U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QNQRJZTVTDRMYFPUFEHTBXXNQWRPQGIWXRUDRCSVIYJKXFJZUCINAYVBLLRJVMKEFLYOMSYWNWHXJZFXHAHDWSCMWPMKPIXICAHQLLYURDGASLMISBADAEHUKCODDUBCJGCVKGFFSEVIOPRLLPEUMGOSOKTZEWOTNMXLUGBSKKQNOBVNATYGJVGBFDCOVZXENJRBXQBOEZZRGUHQZGYSTIQZWVKESFHPUNPWCKAQTHIOPINZLYWMTYA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("RYIDAZFWHDHOWUBMXHIDRUHGPQWKSOHLLLUOPIGVGBQRLBZYMBEEAVIJJGCBBNHAIQCGIZYDCCSOXMMSUXYTQKVFSEXPKVVRNDDJCVPQEZBMWCJXBVSZXBGNSGAXRTRUTPWEZPJLTUDCCKDJMYWSXMKOWONAYFFIEZWLJPGTPWEHNUQDASJZYHTYELSEPKFEKQMOUITIJRLOTANGAPQDSVHZNJUZVYBQNGOFFIFCXRQTR");
    IMC::FollowPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.target.assign("XIFSHSZMWUKMYMUCVZXXXDNVORRIVQJQDIIGFNPNSTDDKSLPVJQMLWCQZMSLYCHLEUQFSBHOUSUEWLVNKAWWIBPHAFMGYAQXQPABMSTEDJLUZJTWWYAUXPPGKRVPNBTNLRCEUCIQJGYBTKSJODJGHPILTZTAFETDCNHOOFKYLOFJZBXZGXMVEAIOVYPQGEJAFHCYECXIOZZLEKTTXIUJSREBNH");
    tmp_tmp_msg_1_0.max_speed = 0.7397690844308513;
    tmp_tmp_msg_1_0.speed_units = 26U;
    tmp_tmp_msg_1_0.lat = 0.6466960936809624;
    tmp_tmp_msg_1_0.lon = 0.3216407847857434;
    tmp_tmp_msg_1_0.z = 0.9844048522156783;
    tmp_tmp_msg_1_0.z_units = 103U;
    tmp_tmp_msg_1_0.custom.assign("DWIVQXGCQJOCQXXNLEPSRCOBECBKVFVW");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::CompassCalibration tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.timeout = 56671U;
    tmp_tmp_msg_1_1.lat = 0.8992846838354864;
    tmp_tmp_msg_1_1.lon = 0.6137493070647416;
    tmp_tmp_msg_1_1.z = 0.7492234138922047;
    tmp_tmp_msg_1_1.z_units = 87U;
    tmp_tmp_msg_1_1.pitch = 0.7615537661167894;
    tmp_tmp_msg_1_1.amplitude = 0.7396555457986886;
    tmp_tmp_msg_1_1.duration = 9471U;
    tmp_tmp_msg_1_1.speed = 0.4555591246428534;
    tmp_tmp_msg_1_1.speed_units = 112U;
    tmp_tmp_msg_1_1.radius = 0.48059653299661065;
    tmp_tmp_msg_1_1.direction = 141U;
    tmp_tmp_msg_1_1.custom.assign("DRPZUXRKYTITJBAREGDUKVIAPFYMYXHGSFCKIHRDEHNTVCHZKCLVTKAOJLNCALBQCNEPBZECKCNHBDTOWHWPUGUVMNNTMSEKBEGPLPQDIVMPFYBVXJCXCNRQXZLHOASQRVTZDMWSOPIBARUUGPJHKYTDOJYQWUIOJGXZOLMXUICYSQWHGKQHWEVJUDTMGBSONAOJXJB");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::FollowCommandState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.control_src = 905U;
    tmp_tmp_msg_1_2.control_ent = 152U;
    IMC::Command tmp_tmp_tmp_msg_1_2_0;
    tmp_tmp_tmp_msg_1_2_0.flags = 155U;
    tmp_tmp_tmp_msg_1_2_0.speed = 0.5753887934652863;
    tmp_tmp_tmp_msg_1_2_0.z = 0.6430881782978265;
    tmp_tmp_tmp_msg_1_2_0.heading = 0.4304582194382889;
    tmp_tmp_msg_1_2.command.set(tmp_tmp_tmp_msg_1_2_0);
    tmp_tmp_msg_1_2.state = 212U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("MHZGWXQEBOQUIYPDCIWSLFZFZTEFKPASTBXHRTEAQKDJNJUURDQNRBJYFBLPYOVGXSHKAZHEONDDZFTUMZSMBBNAWVEURIDRHPYWVXRGURKGKITPEXSFDEZJCBREIWMKQJVSTGXYDGYANQQKRLDFZOQHNOJMIAKLLVKOQFALCOYSMJGOSWLCGMYMWVMYUAGZCVPCOIAXNHZNKUSBBOPUVPIINRCWJWPBDFHHGFXETJXVTYAETQCLTPMCN");
    tmp_msg_2.dest_man.assign("IUNLSPVRGQLKJXPNJJCHDAFSBLB");
    tmp_msg_2.conditions.assign("ZDFIWIPTFGXMFRSXJNMARAIYLBUEZDWVKNEAIVGZHBDYYIVZAM");
    msg.transitions.push_back(tmp_msg_2);
    IMC::SessionStatus tmp_msg_3;
    tmp_msg_3.sessid = 3437316714U;
    tmp_msg_3.status = 219U;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::FollowSystem tmp_msg_4;
    tmp_msg_4.system = 30748U;
    tmp_msg_4.duration = 45743U;
    tmp_msg_4.speed = 0.3344883587330394;
    tmp_msg_4.speed_units = 64U;
    tmp_msg_4.x = 0.17331192686540853;
    tmp_msg_4.y = 0.8755920778725415;
    tmp_msg_4.z = 0.46197239200664497;
    tmp_msg_4.z_units = 63U;
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.6266595170051528);
    msg.setSource(48216U);
    msg.setSourceEntity(238U);
    msg.setDestination(47747U);
    msg.setDestinationEntity(127U);
    msg.maneuver_id.assign("ELWSZILIGWQUGWIUFYCPZJXGNTMMUJSCVEXEWLHOIKRAQSVCCNANGLLWBQGLDJIADUDCEYUUBXPEQOSFVGWQDZJVUXBTTPFFMOQIZHRNKJEFPCTSDNUKXRYSZPIYLVTKEKWZBHJZCFUUCXVXDBPBYPRWEOHHXTDHTRXQXJ");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 56548U;
    tmp_msg_0.lat = 0.9624479534104328;
    tmp_msg_0.lon = 0.7498236555797843;
    tmp_msg_0.z = 0.1126078157922874;
    tmp_msg_0.z_units = 180U;
    tmp_msg_0.speed = 0.15490698175463125;
    tmp_msg_0.speed_units = 124U;
    tmp_msg_0.roll = 0.014100249951673804;
    tmp_msg_0.pitch = 0.15347917070607275;
    tmp_msg_0.yaw = 0.09216270697641604;
    tmp_msg_0.custom.assign("YDSOURPOKVRSTBTSHNONCCPGWBIFWDTCPOJWTEXFMCHVJVXTANGBRAHNDIKLMUQBFUUFWQSLKNIWKJOFAVYELLDACFQXZQMYLLCKRWKSHDJXVOBZZITIUVANAYCMEOSUECMPIERLAUQZTZBGJTLAOEMYHXGPHYJDSYOGJNPERUZJXQKPBVFMKQPCXHNFWMTYSJDDRFBLHZKCTJDRBVMYVQSILNO");
    msg.data.set(tmp_msg_0);
    IMC::Salinity tmp_msg_1;
    tmp_msg_1.value = 0.6161077900547678;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SadcReadings tmp_msg_2;
    tmp_msg_2.channel = -19;
    tmp_msg_2.value = 637242810;
    tmp_msg_2.gain = 75U;
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
    msg.setTimeStamp(0.520985888740168);
    msg.setSource(64163U);
    msg.setSourceEntity(91U);
    msg.setDestination(48273U);
    msg.setDestinationEntity(229U);
    msg.maneuver_id.assign("OPWHAQQURIOLNDFPHFNKQMLBQAPZUWDDTVCMOYXIGXZBFKDPSMWPCLOJTCZOBMKMPZBCSJGXTYQSJFXZCRQIUBKZRAVEEHGCCIDYVMAUUEMLSIRXVTNGVSMJWTOGNUKZSFFSVEWZVNSFLTSQZLBYYFHZNIJRRICHWVFANTKIAPEYEYWIUOOYRQUXVJWAXVPXHWSKNGT");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("LNZFMMNQZDJQCZRXLFSLRREMSRBTXESGFPMGOELCWNUZODJIHJHZPLDHQQTHRGSBUYFIZHZNYSLXAHIKXTDQEZLENVIMMQEYAPYBMCHCGKPHMGYNFIWNOJFBTIDAKTAXWUIWBUFHKORITXRAUTVPBJUBQDOTEANWSIGWHFJKMYKFOPSUVLCKYVCDMYVLZXXNVCVYXWOPKBJTQEJK");
    msg.data.set(tmp_msg_0);
    IMC::DevCalibrationState tmp_msg_1;
    tmp_msg_1.total_steps = 78U;
    tmp_msg_1.step_number = 162U;
    tmp_msg_1.step.assign("BYWIKPZFTWODDTTRAIPYSYWUTUPONCXFEBBTMRXCRFWFCLPYRJOPMEHXPYJTNWUSSPNEYTHLJSCSGFDQENIOBQCJAIPMQXJEMBUORGGLCKUQTUOFVYKVWJHTEGMRRHZVAPVMGFNXDHJILAZGJMKLATSZPOZOIXSVFQMZVXCEDHHKULMWYAFLLKSBBRRKKIGCEH");
    tmp_msg_1.flags = 30U;
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
    msg.setTimeStamp(0.7373611631922555);
    msg.setSource(14101U);
    msg.setSourceEntity(136U);
    msg.setDestination(17130U);
    msg.setDestinationEntity(117U);
    msg.maneuver_id.assign("AESTRXGADBQMGDSNQVRQZYYZJDBETGRAVVNJMUUCTHRMPTIRLPMKUWGROWSHNEDQJCXODYBZSDIPLBVBFWYKSWFAMBCPEPFGFNVHQPLHEUUKBQHOOCZZIVIOFNEMAGMNCVSQCLYRFUKUIKVD");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 64845U;
    tmp_msg_0.lat = 0.87036789089015;
    tmp_msg_0.lon = 0.744927775402147;
    tmp_msg_0.z = 0.6259684206854448;
    tmp_msg_0.z_units = 85U;
    tmp_msg_0.speed = 0.20328936452342516;
    tmp_msg_0.speed_units = 18U;
    tmp_msg_0.syringe0 = 151U;
    tmp_msg_0.syringe1 = 185U;
    tmp_msg_0.syringe2 = 22U;
    tmp_msg_0.custom.assign("ANBJQZFBWUVJQPHLYONGDHWVDFUKBNIZLHHEVWMTNGQQBXSPWNRWYARFLCVJUXUJODZUREUDUXTCWTAAGZOMOMMOGKMVSRRDLIHNYKOLXDCPSQDYOD");
    msg.data.set(tmp_msg_0);
    IMC::SimulatedState tmp_msg_1;
    tmp_msg_1.lat = 0.1992028764448942;
    tmp_msg_1.lon = 0.28465689953511497;
    tmp_msg_1.height = 0.9621514937367169;
    tmp_msg_1.x = 0.2393962097903508;
    tmp_msg_1.y = 0.0324886545907449;
    tmp_msg_1.z = 0.6250833795251387;
    tmp_msg_1.phi = 0.11613560690173375;
    tmp_msg_1.theta = 0.26601858869626716;
    tmp_msg_1.psi = 0.5079768408765782;
    tmp_msg_1.u = 0.8401991576095944;
    tmp_msg_1.v = 0.9042488849428197;
    tmp_msg_1.w = 0.8787092097181721;
    tmp_msg_1.p = 0.897580541497529;
    tmp_msg_1.q = 0.239995788061255;
    tmp_msg_1.r = 0.7912990769307212;
    tmp_msg_1.svx = 0.18994603968366486;
    tmp_msg_1.svy = 0.5173500375734302;
    tmp_msg_1.svz = 0.5062236642468038;
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
    msg.setTimeStamp(0.06873748938706081);
    msg.setSource(47308U);
    msg.setSourceEntity(238U);
    msg.setDestination(12340U);
    msg.setDestinationEntity(13U);
    msg.source_man.assign("PKBOTFLORUCSHQUYFDQLUSTXDXWDIFMKPMWOVKJLGVASXONFUAIZLVCBLHTACSLINMHNTEKHPQXIOYRTRDPUNWSZEREOEVWWMNNGMGARVBGMHPETZSRNDYQFQOWXCHSBJQNRDURZIYCRYMAJXJZGAXYPATUPNVBHLETPFYZWVBJZKGEFIFXGQVASHSVKQQKYMDPZKUJCIHKCMYDJSEWLGBDDCKQNTWIIOUUFJPEVRXYCBTOFEAZCLGJ");
    msg.dest_man.assign("IOVFQURGTHNVLJSOPXOIKTETALKSTWMGMXLXUJGYVQZFFQVIDITPJMKYQNWSUTFRQKARXPEDRUOXFYUOTJUKYQEDVMDARDBSEEWYCCMZOFNWGNNJLZLUHROUFXETTPBZDXQCWAAMKIHSFFRRWSCEZAKKBDBNLY");
    msg.conditions.assign("MTTENCYSYSEAYGOTIVVIRQRLKOEWTEWQJTGSQFFRRSZMFMPZIVLXJDIMLTTRLTSBXFUMEAVLFXRLSOUNVOVWKLNIXXLBPGICLRGZCHDQWHBAFXFWWIYDHUUPUACPGKYJRKPWZEP");

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
    msg.setTimeStamp(0.34649171927337097);
    msg.setSource(40961U);
    msg.setSourceEntity(162U);
    msg.setDestination(58231U);
    msg.setDestinationEntity(177U);
    msg.source_man.assign("QRNEEJSTLBWADXCJTFWNRJYHKITKOYZSYVFIBZKRVPBONXWZMWLTCXUBOMVBAGPWA");
    msg.dest_man.assign("YVQGAEORPOPPBWESLMXFFUGXLKMZSGCCPCOACBIVADUHBPCHZDMVNBGCOAOHLAOXCTTJUNAFMTGNRIISVIZRREOBGIDNODTPNYRWBTKDLJVFSXKERHQMDICHQBFVFTJJVZJQWNIWQUWLZRHQLKPGZKEVLYQZHBXUULMSJZEPHNRYOKYJBDZGQUSDEDIWLITACDEUXAIEHMYGNAWMU");
    msg.conditions.assign("OBMVQWXQKGTLGNCCIMHFSWGEBSXEFDXGXIEHLEBYUCUZNCZOFIUPRVYSVIAZZRHGRWKXNMMGPZEXYJDCTDLWSPMBDMQOYQBMRRVDJRULVTDFLSEEFPDNMWIJZYSOUVPQBHZNRZXAKCOIHISJTTPJAXVNWWNKGJF");
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 146U;
    tmp_msg_0.numsamples = 66U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 37015U;
    tmp_tmp_msg_0_0.avg = 0.934330419240933;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.44071257455255397;
    tmp_msg_0.lon = 0.524880090715294;
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
    msg.setTimeStamp(0.9185434285121288);
    msg.setSource(2751U);
    msg.setSourceEntity(34U);
    msg.setDestination(17149U);
    msg.setDestinationEntity(77U);
    msg.source_man.assign("DXGMNYDQGYKXMHQETXLOIKNWEAFUQHFJVXJZNIAEXZQXNQNIADUSRKCLDOAQBIFEMKDZGRTLMZAFWLIKCHRTMLUHHVYHEWHTCHSGSJMHYWTDOZOPORBWPJIYBVZCYEUFVAUBDICESALQTTOJWTZRJPRWRYPBODFMCFGKEOTIRJNCVSXVGGJMYNXTHUUFKWQUSRAQBUZUAYMMVBSXPCGJJIFVYZBNANGXPS");
    msg.dest_man.assign("GWOMOBBNATCFSYQLOUFXUWBWXFLUNHVYJPPATKGPRCJUSNYBURRCUVXQQOPKEYDNKAMQKIOXMJZUZOMUCJGHMGIQODHIBMLIARGTVJYDMLLWAJWFFZELZHRCPDCLMDKRPEEHNABTSGBFIFO");
    msg.conditions.assign("TYAGJOKUBIEQSAQPGIZGMXCDECVGDVDCDOGJWOFMBQFPRLEJERAFIVRXICJKNNSWBLHR");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3265809449842819;
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
    msg.setTimeStamp(0.9355168267669233);
    msg.setSource(27902U);
    msg.setSourceEntity(189U);
    msg.setDestination(11875U);
    msg.setDestinationEntity(212U);
    msg.command = 51U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DNHKYIXPYPHFDCWYNHWGSLEJLIFRTNCTLYKFXWCUNEGRZQWOMPPEJPYKBMQZNJSJOAMDBOVELZDTAAMXUGHVQSSSDDTTDBJYTOKZWHRPZBWSQUBQWETGYIJKGGSPQDVOFQMMUKZQBZFBRAV");
    tmp_msg_0.description.assign("VNGQGCNRNJWHTDSPILRMBQKRKEHBYDAWQAUVISHAKYNKZCIWEEQHTWGFORCZDJEYDWPUWZ");
    tmp_msg_0.vnamespace.assign("RGUISQXXTAFAMOYUVQEUZNCWUSSGZHCYYXLHHAYL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SMHKXMNLCYTZUOLHMPJAPPNPJAIAYEFARYHDCQUCBTKLRVWSQBPOYZLIBRJCLFJ");
    tmp_tmp_msg_0_0.value.assign("JEWXKEWTIZAEIJQSABLTBPNUFISUJCHAGCRHMPZRQCNTMGOIVRFGYHYOALTKEEUPVHUNSLRAYNWKBFGQZ");
    tmp_tmp_msg_0_0.type = 35U;
    tmp_tmp_msg_0_0.access = 252U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RWHBPXYYEZNBSUENEASDFKNQSAFWNOGRXZEJAIDPKCWTFEXPYCKKAFBJSIIFDIVAJRFHSYIRLQHIHCHCUMIPPKUJAUQWGEUBKBPBGCIQLTNJULC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("FYADVONIEYKOARPLKQLUAWFGJKUDWREPADBNJZVWJNZDQWSLIOCZXSVKCRGYPTBFEWAOBCVHRFVTQTRFBHXLNFKEPUXLSHXGODKLPYYRZGLAGAKXMTHXKMMHPNZDDCGRIRHMUJUQSDUYXXUFGILEQEIUAJNVGHBIDFZMIMUUJYFIPJJSSFPLTESNICYCNLOJSVWM");
    IMC::ImageTracking tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::FormCtrlParam tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.action = 13U;
    tmp_tmp_tmp_msg_0_1_1.longain = 0.6539105904399755;
    tmp_tmp_tmp_msg_0_1_1.latgain = 0.12032378924807496;
    tmp_tmp_tmp_msg_0_1_1.bondthick = 1594542642U;
    tmp_tmp_tmp_msg_0_1_1.leadgain = 0.5669811319658501;
    tmp_tmp_tmp_msg_0_1_1.deconflgain = 0.15608212147886913;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
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
    msg.setTimeStamp(0.6736129099324489);
    msg.setSource(54987U);
    msg.setSourceEntity(95U);
    msg.setDestination(56464U);
    msg.setDestinationEntity(168U);
    msg.command = 1U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LQXKNKDLWWXZDTDPBWLRGDBFSCHFKJYGYEGFCQJPEJKECBABWAQGSATRMNKELYOOTAJNIDGFEKUMRHLEXXPIBYZULMYTCQVCZRIORXHKBUUEISJDCNKUGJAFHZTGLBOIPWOVSMMGXZSVYDMECIHXTQFVSZRIYVTNUJORWWHZZNVUAGPZNVQVNRRIKQ");
    tmp_msg_0.description.assign("OLRTIOYRKBLBDGQDFDBJATVHQRRBFORSJPWMICZCNOFZQMBKXNYLUFFWIYJAIZVCSXJGJKLGWGIPBLBZFHVXHGOCRXZTJDEUHRITZAMKCOKCXTEXFWBSCAWQESJUPPRIFCYNRAXPQVYTXAMHVXVBDDMZATWPUUEDIN");
    tmp_msg_0.vnamespace.assign("LCMHCOQSSBJHZBKDIGHZOSFQWMMGLWGPNHVYLUDWEZRKXFQSLFGOVRKSXERSOOOTYJQAUAQMAEXMJCTYNMXVWPZNTNFKFSIZDPPVOITMPKATYUJJSWZUWOVIHBQGIAWUPPKEBFTQIHDGDXBR");
    tmp_msg_0.start_man_id.assign("OCKUAGHWSUSHEYZMGOKNNUQBESMCZHXALTOQQIPRVKRDUSHUPVNJFLMCCRTSVBGWTJVIRMQYEWYBDQLAHKMRYEQBSCXIWFRJRFDBXVYDVHWGRMYKSGLPBPIZJFUQEXXGIKQPSDCCUGRDZPGOBLFADNPVQMJNOLYNIBWLJGPKKNNKBJAZJTTYVPZENVZMFWYAXFOCEUIMCQWYJHRWHAAHIPBLXZTFFXETOTSZODEOXWUICASETFLAOVMXLUJGDI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("PVBTRRODRKMLVNSZHQSYUNZKYOKKHPQKZAJKRNNCAXUBYGCIUJUGFGASOOUGHKWLRGVWMAQFQVTJDTUXVBAZICXHOCMJPQDFFLAECPGLAXWEEWPJHFHNFJHPXBLDSQYBQVYSJCEDUXDNIRPSPMYCTMKDLCGKUOZPZFIYAGPACWKTZBXGQBNXHIBULTYRYEBFV");
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 45830U;
    tmp_tmp_tmp_msg_0_0_0.flags = 241U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.533098790836391;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.4984772400913905;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.9302428004936691;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 142U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.12050661306466726;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 33U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.012876909646532653;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.11480962925544103;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 241U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("KEGVNQVDEUERQZFG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::SetServoPosition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 246U;
    tmp_tmp_tmp_msg_0_0_1.value = 0.9064318036103355;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::CapabilityMove tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.speed = 0.3330490333803575;
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
    msg.setTimeStamp(0.04479478398462311);
    msg.setSource(62082U);
    msg.setSourceEntity(194U);
    msg.setDestination(37401U);
    msg.setDestinationEntity(4U);
    msg.command = 187U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XEYQLWJSHLEDXNUFQLMTUMLKWGJNRTGEEWGJVMMTDXYY");
    tmp_msg_0.description.assign("MPEDIXKWBINFCHHKPSPVAXXLAUYZWSFDQZMU");
    tmp_msg_0.vnamespace.assign("WYBIQNDKAHEZKDQBUAIQASUXOPEUGFZSYSLJLTVICOBXBSUWTBEFJGTOCLFGPPFSFDUITEGTDCIGFMCAGHZXQZWLOPEHLBIGJDNOQXUCYKMW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KNFOSHQGUWEAIHCPYWKPYXMCCXXSBATKDPMZXRPLSHIADCOHZUUVJDYPEJIJBFZRXGYBTQFMDJWIYEQWOTNFLTWHXNLQBVUBQWTQEVAKMBTMJQBNIHDNRWQRLNNCWZAXCROKSPZPBIEZQHMGNZJFCFLTDMGAKFKYLTJGWGENGXJIVQRZHSWUAYGVDISAKSEUUZIFBFMVALSJTCDSZERUXXMUYVBGS");
    tmp_tmp_msg_0_0.value.assign("XOFPSTIVNENZZQNWYBTUDSCJODRCGEBAAKVDDLAQTBZIYDVKUASTHZOUXOBAPQKJCLLXREOVZLFLKIKTCKNHEXEGUUBNWVKGHDANMDOFRVXOHBVECCJWMAWEAEDHYOMCRQESFNTHVQDBAFIJRRKQPHCPVCHGPNLSYNBKYVNBGOJHXKQOTQZXZWFLYIJJYELSFWWPTAIRYWSUCFIGLMUJTGQIIIJYZGFSSTPRSMRPXMDJMMR");
    tmp_tmp_msg_0_0.type = 226U;
    tmp_tmp_msg_0_0.access = 232U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UVMINZSCWGXBCORJOUFSKGJAJGVDOIVLSZCANKFLWDDZHPEYOUCXLZKCBPRKZOYFYRFNJVNBNEDJFLPXIATYWBWNGQBVUHBXEYMPPBUFDJGAB");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LJRHJIUNQCVABIJGMULKBSP");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 57287U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.4804086684803719;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.4928878331236881;
    tmp_tmp_tmp_msg_0_1_0.z = 0.703835828493666;
    tmp_tmp_tmp_msg_0_1_0.z_units = 27U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6598256941292091;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 90U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CUAOENSBMBUFYSFPYPLMNSCKPZZVQXQQZWNHGKYGLKXRJUBHLOJGLVDKADRGMRMQZJEDOJWRSXCTBPITKIKNFDRACWFEOVEADSOCNXUHYQKXSCUIPROTSPBVNEAZHVMAMIIMVJBFIBYHWNXAAKQONQETYBDWIZMSAYOZQJHHTMCSBGLVFLFLXGHJVQXKYPWBWNWGOLGHVWHWZRLZIKTPXTORDIJSCYQ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.7830440739940594;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.5231563424118085;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.2724514481888718;
    tmp_tmp_tmp_msg_0_1_1.speed_units = 233U;
    tmp_tmp_tmp_msg_0_1_1.duration = 52902U;
    tmp_tmp_tmp_msg_0_1_1.sys_a = 4722U;
    tmp_tmp_tmp_msg_0_1_1.sys_b = 15057U;
    tmp_tmp_tmp_msg_0_1_1.move_threshold = 0.10478218717128673;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::QueryEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("KRSNFWCLCFZYNJZVEAAQJPGTSBKBMGTFQHDUMJBXOAUGNEKBCHQPSUHDAURPMOISINKPXQBXIDYHWNTYOEPSPDWOMVGWBRZP");
    tmp_tmp_msg_0_2.visibility.assign("TMUVAICAEEGSIKZJSMRRQVQPWUJOYLXUIXXCWLZSYMEOBIFGGNQVEHSLWYNHNHBZAZKCJJDAAEJFIDGKPCKFGTGHORFGGBQKHHLURUDTOWSVCBYTRVSFXGINPDDJVSDMNEHSZLTZMJAWYWCZXCNMDUEJVTQYOPPRZZNBQWMRQLTHIZBYPVXQLAUOAKBIXCRFUOXLTSWNMXDAPKPR");
    tmp_tmp_msg_0_2.scope.assign("TTWMCAOMVZVIDYVVTIPSXEGJAJEVHWKQQHCBTYWWMAFUJDFPIJJMQNZFJOSBEDPOZCFJUSEDSTDMGVX");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::SessionSubscription tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.sessid = 3169345984U;
    tmp_tmp_msg_0_3.messages.assign("DQYJGVQIAAJOWXSZGBPRCTEIEZSCYBACEVRPWBJDMRINQLUAYKVFUHZHORG");
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
    msg.setTimeStamp(0.8251919210242521);
    msg.setSource(46514U);
    msg.setSourceEntity(108U);
    msg.setDestination(49667U);
    msg.setDestinationEntity(138U);
    msg.state = 19U;
    msg.plan_id.assign("FWPFUFQVAIJNLXWWCQSQKSDRUFAOXBPRDAAIVPGMCRUDKMXMQQJSJLSHEJETAMSPYXIHCMGLUTYYSVHZHVOITJXRSQZOVSDVVCMNVKFMEGTTPBGFTIYDKULIZBKPYZPITDZHJBCCAIERHKTFLCBACGVWNNYBPXPRULMEWFOGKRUOEXAREEDGQUBQLNLZDJYLYKWHDINCNWRDONHZJNXGKZTWERFJQVUZTXJOXYMHWCNUGPEWF");
    msg.comm_level = 245U;

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
    msg.setTimeStamp(0.530994005680299);
    msg.setSource(26912U);
    msg.setSourceEntity(123U);
    msg.setDestination(62598U);
    msg.setDestinationEntity(158U);
    msg.state = 44U;
    msg.plan_id.assign("GWLYHSDNWYVOLGCZLDOLBTSJAYPBUFFRDWTXVTLRDLKNLBEFEZSHAIVPCVTYJMTCBYWMZSZRHCXPTDQJRDIY");
    msg.comm_level = 170U;

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
    msg.setTimeStamp(0.5282044834351218);
    msg.setSource(16645U);
    msg.setSourceEntity(105U);
    msg.setDestination(10689U);
    msg.setDestinationEntity(134U);
    msg.state = 73U;
    msg.plan_id.assign("AYJXQAIROVTLVSCFSKSWDJENDTKNRKYZZQRJDWTGWVDKHHESDUOWVZABDSSHCCAXIGRCZBOBMEUEBEKSZNGHQPUGQMXRIOJQKTOWBILYDLCFPOTZGOPUEAAHOIJMIXCFUXJBTCXDMMNPXZKSBWTHPOCFSFRMWOKPZHHIXWGRGXLQTULYAEYIVKNFRMTNHVGBFMICEBYJBAQNLUFLGFUVZPTYPAZUHJMLGNNAIVYKJLRMWYYDPPQNFVDQ");
    msg.comm_level = 86U;

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
    msg.setTimeStamp(0.8769959797933529);
    msg.setSource(33559U);
    msg.setSourceEntity(235U);
    msg.setDestination(4740U);
    msg.setDestinationEntity(137U);
    msg.type = 164U;
    msg.op = 189U;
    msg.request_id = 1240U;
    msg.plan_id.assign("NHOPMIBCUCQEZKTHGZCJRKGGVHPXNRXTELOGJVWVHLFCAXUTDISJVMAWPUWICRHOOMXBLIBQSFOXIRWPTXEPUOAKYIDKRCQAWYUMCRGJBSIAHSALRGYORPNUVDKVSAHQEKICBJWQEPKZEKCGLVTDHGMBQYLCJNDEFDQLNXPTYEF");
    IMC::HistoricTelemetry tmp_msg_0;
    tmp_msg_0.altitude = 0.9628584956481963;
    tmp_msg_0.roll = 37302U;
    tmp_msg_0.pitch = 37848U;
    tmp_msg_0.yaw = 43350U;
    tmp_msg_0.speed = -26804;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ESSWBJBUAFKSNIEWMXBCDLHRWNLMVNSGKGBLCSDANYCBXZPLIZIKKTFSTEDGYRQCAQRTDDAZRPMVAYTVJCYBMCJIOJVHPLRAYGEMSWXDQULHIGIKPOXOWXBXZCEJZYNXGQECTWVEHDFDEINLPWJZHVAAMPCKUWVQOHPZECVOQFYNMTLVPQQFEJUVZJNIAXBBLHFHYHGSUDWBSMOTOUGORTUZTNDKMUP");

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
    msg.setTimeStamp(0.9457169065469453);
    msg.setSource(4090U);
    msg.setSourceEntity(158U);
    msg.setDestination(27548U);
    msg.setDestinationEntity(83U);
    msg.type = 134U;
    msg.op = 124U;
    msg.request_id = 35723U;
    msg.plan_id.assign("EPOQUMEXKCNSCSMHQAIHVFPZCDELIRJXHMMVDRKTJGRUQLBOPBXEOYZFFUQQZDAKTTLWSZFXPWLBEYGKTXMNIVBTHKXIMIFQVCEMBATUAPURTVNZXBAYONBFIVTRWVSQHPKLAZRIDQXYSOUAPBLDWWEMVGDSUDIGZNYQHTWPHORKJJRSTADYVWLDLNFVLGBSYHUWSFYKEIOKMHUFRLYGXPIJGOYQPNEWJGBOHSFMJJ");
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.3946792025696978;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OAHYVLHACSFQCAPUORBNQMBFHMECJEXDPTZSLQZBXWLBJOOQKLIQJJZZHIFAEGGLNKWCFFHYHSTNSGKMZPYXIXKIHMRGTDXQCOJWYNSJKVKYGVOVQMNFFHEXBRXRTRWVYCTNLOUUMFTROEGJZPIBAHWJNMCXBYAINUKGBDYSEVPARPETRBTFBRONOSIQEYKLCVUVDXDGGWIPPITVYMSIFJSNLCUMKWASDZHMZWWGJCAAERUDXQLDEKZ");

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
    msg.setTimeStamp(0.15875344117624224);
    msg.setSource(38138U);
    msg.setSourceEntity(216U);
    msg.setDestination(64819U);
    msg.setDestinationEntity(203U);
    msg.type = 135U;
    msg.op = 36U;
    msg.request_id = 44995U;
    msg.plan_id.assign("JGGKTNITZYTZWHLCBDQIXITEDCJUMVZGRHQMPXHVUTKCVUBFRKLGLCWNDPFZHKVSWBOYGFFCKJYOIOWBYKAMTOSAIHJRBYPPLAXIHKETHSKDYEZNELJHPGJFDXMAXPEBOSHLZTJJVWEOQNSPSLULFBWPCTZYCCVIXVWQXFWADLBDQEUSMMUZVARQOMUAWVNRQROEFKXORMMGNOEPDYDBNRNFUVGSD");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 42892U;
    tmp_msg_0.lat = 0.5790539120294658;
    tmp_msg_0.lon = 0.8988509838858798;
    tmp_msg_0.z = 0.3421911844184016;
    tmp_msg_0.z_units = 17U;
    tmp_msg_0.speed = 0.6453751765272615;
    tmp_msg_0.speed_units = 118U;
    tmp_msg_0.roll = 0.708378636685426;
    tmp_msg_0.pitch = 0.9267433047170226;
    tmp_msg_0.yaw = 0.5360422021382417;
    tmp_msg_0.custom.assign("HTCBUSDJVFGHLPEPOCOSCYJACSXCRAZOUMLCPMEDYWETVDGBFWFPRMYNVGHPDIPAEZIOMKRIRYRYTFIUNIZODNMJLNXXBWPIQMVCLQSLQDOWYDUTLSFZMNBQPJFXBDTQUAHBEIXUDDQORGJKRILP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VQPJRNJLVSCCXDKGGLPCSMDFUIUUVIQGCKCZFWRXIFQMGAWEXAFYFLHYIPKMUQXWSXPCEWAMATVKMFBQTXPTNSXSVZZPDJRTVDOBZHGYHBQBEIZKRZBSCJZGLIMHONOWJQLTFDEBNMGDKXTVVUAYYPIEUPMVTZAGLNIPAKKFENRSAQCLJRJWIMUZHDHUWYATYVROEFQLJBOHGODWDFNPXBIQTWSUYR");

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
    msg.setTimeStamp(0.6778648404635936);
    msg.setSource(33128U);
    msg.setSourceEntity(40U);
    msg.setDestination(35128U);
    msg.setDestinationEntity(66U);
    msg.plan_count = 13959U;
    msg.plan_size = 4146593692U;
    msg.change_time = 0.09832971473568985;
    msg.change_sid = 21112U;
    msg.change_sname.assign("EGTZRLZMPATGIDHDXYLOQOXQZONYKQACLSRPTKPYRGASTFSDCVAWHBYAIYEAWWCNETWYVKGEILPSLFTISCHIHUDMWLIJVYJBVSXJRCZCONSIGVNXRKUMPXGBUKRQNFJOZXMQBTFALONBZUDWZNOGSHDEJUKLHCJUYNDHEEWKYOJXPXSWYCMHIQPMWVPUDMBORBRZKUZLLQGHOPBTFGVTKSQB");
    const char tmp_msg_0[] = {-118, 62, 61, 9, 3, 91, 83, 43, 85, -96, -30, -100, 29, -76, -102, 109, -69, 109, -38, 109, -2, -121, 27, 50, 16, -1, 87, -97, -54, -38, -103, 125, 88, -86, 88, 104, 39, 4, -62, -3, -2, 22, -43, 120, 47, -11, 78, 43, 1, 111, -32, -114, -64, -85, 44, 110, -44, 50, -104, 23, -93, -42, -103, 23, 42, 100, -119};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KHDCEKYOVUXHQFADJYYPKGYSTMSMBPERFBWLMLMRWOCOZMJQERDOQBLISEKIHOTZDYGGEAUSZANSWMDRGWQHROADPJGGNKNEXOBVTZADODSZYBQAUWNSMKJNCRHWJJVRCCMAXEXQSTANZVLGBBIFWKGPUMEK");
    tmp_msg_1.plan_size = 28652U;
    tmp_msg_1.change_time = 0.35289310263643625;
    tmp_msg_1.change_sid = 20457U;
    tmp_msg_1.change_sname.assign("GVPKVRHHPWZKAYGUBRGKWWHKYZRNCUDUFMMLVEXZMFANIADRPDLTTNZJNOELQKMYBKHXPMCDXFDHHFQZZBHAJTQDSHUXIYJTRQMHLPBBVLRXOXYZSSDBESSWTMCEEEXTKJSQVGHKCWGRGWXUOFIOMYCRRNIQTKJSAPAWNLEIOBCAOLWFCIWVIFNPXOOUDVWDFNEUAQLOSXYUTVNRMNUSPCYVEJBQZGQBAFKIYMCTYIOSGZBJPTEVLQAJDZPG");
    const char tmp_tmp_msg_1_0[] = {-84, -2, -89, -71, -88, 92, 17, -82, -28, 67, 93, -36, 101, 89, -59, -78, 11, 117, -41, 84, 63, -38, 41, 6, -32, -42, 63, 73, 31, 27, -4, -77, 30, -6, 45, -66, 71, -77, -30, 63, 46, 44, -59, -44, -54, 107, -90, -105, 117, 21, 53, 125, 42, 46, -78, -17, -68, 16, -41, 2, -1, -101, -34, 38, -39, -78, 67, -125, 94, 69, -100, -72, 11, 71, 58, -46, -33, -77, 36, 17, 85, -49, 53, -50, -124, 109, 92, -31, 36, -107, 47, 72, -15, -51, 95, 56, 23, -31, 68, 106, -2, -14, 97, -123, -80, -29, 6, 73, 7, -93, -13, -106, 11, 96, -107, 44, -21, -77, -30, 91, -33, -103, -69, -96, 78, 24, 118, -9, -19, 88, 71, -61, -77, -17, 68, -62, 102, -8, 68, 53, 98, 115, 121, 89, -57, -105, -24, -63, -68, 85, 63, -27, 54, 65, -91, -29, -67, 105, 92, 17, -52, 54, -113, 21, -52, 81, -81, -90, 103, -76, -92, -47, -23, 98, -36, -101, -106, 69, 8, 41, -59, -118, -69, -25, 73, -78, -69, -80, 55, 41, -38, -107, 74, -53, -15, 77};
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
    msg.setTimeStamp(0.7445208054019514);
    msg.setSource(56467U);
    msg.setSourceEntity(165U);
    msg.setDestination(48567U);
    msg.setDestinationEntity(4U);
    msg.plan_count = 59713U;
    msg.plan_size = 1338329733U;
    msg.change_time = 0.10402597434555816;
    msg.change_sid = 53638U;
    msg.change_sname.assign("JYODBVKMTISBZWOHFEYQWDQE");
    const char tmp_msg_0[] = {-15, 58, 12, -39, -90, -70, -102, 121, -85, 91, 102, -56, 36, 13, 17, -24, -88, -35, 27, 93, 26, -22, 12, -96, 18, -61, 30, 17, 44, 25, 20, -71, -73, 78, 94, -96, 60, -57, -96, -62, -1, -128, -26, 90, 8, -93, 44, -127, 115, -48, 33, -95, 71, -45, -62, -30, -47, -126, -1, -24, -64, 81, 72, 28, -43, 64, 50, -45, -73, -105, -103, -51, 35, -122, -41, -91, 125, 38, 13, -75, -83, 52, -72, 26, -37, 123, 34, -52, -92, -4, 17, 69, -95, 43, 41, -53, -94, -100, -109, -78, 12, -7, 38, 19, -65, 72, -124, 10, -127, -123, 84, -59, 47, 81, -45, 109, 26, 80, -50, -10, -61, 117, 26, -32, -39, 65, 77, -101, 69, -80, -96, 112, -62, 100, 64, -44, -118, -122, -65, 71, 93, -90, 87, -118, 34, 88, -103, 41, 87, -1, 100, 116, -57, 123, -93, -110, -34, -123, -85, 52, -24, 84, 125, -6, -39, 115, 15, -102, 12, -32, -68, 70, -77, -11, 76, -78, -112, -93, -28, -12, -103, 9, 74, -63, -114, 117};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ANJMHRSPYDGBTEEXFMEFTSPTBLJGDYNQIZUIQWDKWJTGAFEIBQZSI");
    tmp_msg_1.plan_size = 21649U;
    tmp_msg_1.change_time = 0.14940068653853866;
    tmp_msg_1.change_sid = 15397U;
    tmp_msg_1.change_sname.assign("BSNCDFXYCWRUSSOIZGNGQOGJLBEWUQBPJXQQGUXHHNZEMVIWKJECWLUINNAFEHZMLFKLKAGVPDXJEXGMBVDKHIUFT");
    const char tmp_tmp_msg_1_0[] = {66, 53, -55, -12, 52, -105, -105, -62, -91, 59, -44, -34, 118, -116, -65, 81, 118, -108, -58, 20, -98, -118, -42, -1, -83, -31, -105, -58, 44, -127, -72, 97, 35, 86, 78, 12, 123, 110, -50, 125, 24, -94, -73, 37, -108, -58, 124, -105, -127, -7, 121, 51, -40, 66, -124, -98, 30, -127, -48, 49, -80, -59, -105, -25, 16, -66, 102, -107, -11, -27, -76, -89, -11, 124, 89, -20, -16, 28, -71, 103, 24, -73, -110, 79, 106, -119, 98, -86, 34, -97, -56, -8, -16, 122, -88, -119, -125, 125, -100, -117, -33, -34, 92, -16, -48, -13, 71, -11, 105, 49, -79, 19, -60, 117, 66, 40, -106, 3, -62, 3, 104};
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
    msg.setTimeStamp(0.3641601410943207);
    msg.setSource(38506U);
    msg.setSourceEntity(134U);
    msg.setDestination(10287U);
    msg.setDestinationEntity(104U);
    msg.plan_count = 44950U;
    msg.plan_size = 767787207U;
    msg.change_time = 0.90302027570453;
    msg.change_sid = 34803U;
    msg.change_sname.assign("QJOGGOCRSDWTCGXOHPVC");
    const char tmp_msg_0[] = {59, 24, 28, -30, -10, -104, -105, -104, -79, 48, -56, 10, -108, -51, -107, -125, 38, -1, 59, -36, 18, 33, -28, -24, 0, -44, -99, -64, -108, 22, 118, 53, -126, -4, 59, 77, 43, -14, -70, -107, -105, -62, 104, -54, -20, 48, 75, -18, -41, 6, 124, -100, 115, 15, 84, -118, 42, 57, -81, 12, 57, -66, 29, -3, -105, 55, -69, 74, 60, 123, 36, 94, 26, -13, 75, -8, 117, 22, -69, 85, 67, 20, 26, -28, -21, -103, 72, -93, -126, -95, -17, 61, 102, 80, 20, -119, 44, -64, 46, -41, -47, -6, 29, -85, -87, 126, -25, -109, 106, -127, -39, 100, -125, -106, 68, 32, -85, -113, -97, -44, 111, 45, -29, 47, 28, -107, 109, 47, -73, 17, 83, -52, 48, 45, 20, 66, 57, -51, -124, 40, -120, -94, -26, -71, 92, -32, 91, -33, 25, -45, 49, 114, -66, 24, 36, -100, 105, -117};
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
    msg.setTimeStamp(0.9442107761328956);
    msg.setSource(44549U);
    msg.setSourceEntity(22U);
    msg.setDestination(17052U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("RZIGTGFZQHHCXSWPUOVRBQVLTHEDYHJDXJGNLONMRIIOLTLANMPVWAKQMTEDSCLVHZDCOPUTROOWRSTKAKHUBDJRLAUUOHYMWEXVYOXGMTRHFVOYWCIRKNMZUBIPGFUDBDKFJKIXFSXEZWWLLTBGEZAPQXISCMCJFVJPYX");
    msg.plan_size = 18450U;
    msg.change_time = 0.16386240966218735;
    msg.change_sid = 36U;
    msg.change_sname.assign("IXKSOVURSXUVLQETOZFHXIFFIQETSHNAOIQVUINVAAITRSXBPNRKMEJNUPHYAQCMQSNZDKIGZW");
    const char tmp_msg_0[] = {-46, -81, 71, -125, -118, -62, 23, 59, 86, -89, 59, -36, 40, -36, -15, 12, -60, -85, 67, -128, 34, -84, -22, 53, -86, -24, -90, -93, 87, 22, 27, 90, -72, -120, 105, -108, -7, -115, 78, -96, -88, 109, 78, -69, -128, 66, 112, -10, -49, 72, -56, 104, 124, -65, -10, -58, 114, 30, 110, 20, -47, -34, -28, 10, 44, 126, -49, 40, 15, 105, -99, 101, -81, -96, -93, 119, -94, 104, -113, 28, 90, 98, -76, 102, 104, -88, -53, 122, -118, -69, -105, -22, 77, 126, 70, 65, 37, 38, -44, -30, 70, -69, 56, 38, 26, 68, -96, 111, 107, -18, -64, -37, 13, -15, -49, 52, -98, -94, 44, 122, -9, 63, 101, -119, -126, 101, 37, -99, 124, -78, 58, -79, -87, 29, -54, -105, -59, -56, 77, 43, 105, 35, -57, -49, -37, -58, 66, 115, 123, 0, 48, 74, 95, -77, 13, 34, 88, 116, 105, 75, -110, 120, -56, -28, 89, 93, -56, -87, -3, 77, 103, 110, 90, -46, 44, -44, -88, -21, 4, -31, -65, -28, 19, 71, 67, 15, -60, -126, 106, -124, -60, 9, 22, -6, -127, -112, -68, -43, 5, -95, -8, 72, -88, 119, 78, 27, 19, 44, -103, -81, 45, 35, 80, 38, -61, 90};
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
    msg.setTimeStamp(0.2742770542505125);
    msg.setSource(41581U);
    msg.setSourceEntity(160U);
    msg.setDestination(31862U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("TZDCMRFZLOWYFCGEINVAHVXAVKYTRWGPKUCICSTIRUXXKRMZQINXHBIATUJQNZQNJUBQFVOMRLNNMLKHZLFHCUIIDOKXJDFMAQTCBGDHLAVPGTBSPUESPOSBRVWXRVWJYPBBEEMKOHYROFTPMLUFYJMSKFEQRVHNCOHVJCYBDCLTKSAEVYBWWAMXSYWAYDQEZDDZADJMFWXGKPTHQCZQNGGHWPUXNIJLEFZUEGLBASKOSLZTIWI");
    msg.plan_size = 1803U;
    msg.change_time = 0.4303446066292216;
    msg.change_sid = 43857U;
    msg.change_sname.assign("DRYONACXJSENUJRVHSZZXZZIOICQKSUPXXYGYCAAONQJXYEJNJJBZRKFZZQHKZWPNDFRYWOILVUKTKDFVDIHBTACLKXGBMQAQGNEZFJSUMVGBFDQRPFTPDMWATLFRRNCBLFEELVHLXJWYQEOHIKSHYCIYRREWUFPWGIVGWXLEVVASMPDRPSACDUJXNOPESKUEPAMGOHBGGLCLTTVZFYHMDUBWCBTNVQGSKTLWT");
    const char tmp_msg_0[] = {-80, 38, 5, 89, 44, 76, 81, -39, 31, -42, -3, -121, 38, -69, 116, -106, 20, 38, -123, 109, -28, 87, 87, 90, -99, -69, 85, 2, 67, -46, 122, 29, 93, -59, -91, 95, 5, -90, 39, 82, -121, -30, 44, 79, -52, -70, 19, 19, 73, -13, -88, 102, 98, -101};
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
    msg.setTimeStamp(0.41048392013795565);
    msg.setSource(6665U);
    msg.setSourceEntity(97U);
    msg.setDestination(43631U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("SPPOHRRLJCMVJAFHUZAOOSQIMJCRXGJCDJCYIQVIYMTOTWIBERYQZTGMHIVQLBN");
    msg.plan_size = 5324U;
    msg.change_time = 0.14420568655396426;
    msg.change_sid = 3087U;
    msg.change_sname.assign("DTSWFLMBKWFPFBSBQNKHYCRXOGWQPCRUQHWATKWYLVPEEMRVMJICRPZTHDGEVGZDXILHNIZSAWFAXWKBOKTZHLTJEPMFBUD");
    const char tmp_msg_0[] = {-28, -79, -11, -34, -47, 78, -108, -70, 29, 81, 109, 64, -50, -52, 9, -10, -71, 31, 66, -51, -65, 53, 54, -90, 112, -6, 68, -115, 51, -62, 62, -10, -81, -113, 70, -106, 58, -30, -16, -112, 86, 28, 42, -106, 33, -83, -40, -106, 26, -7, -7, -33, 34, 83, -73, -3, 63, 114, 26, 85, 16, -19, -110, -34, -57, -79, -8, 29, 110, -46, 29, 114, -32, 41, -32, 77, -94, 55, -124, 85, 42, -53, -67, -80, -24, 66, 118, -63, -126, 122, 95, -80, 21, -78, -55, 105, 85, 95, -101, -88, 61, -104, -72, -27, 70, -18, -83, 40, 63, 25, -112, -53, 64, 89, 57, -127, 45, 123, 103, 23, 104, -1, -55, -118, -77, 109, -5, 1, 73, -26, 14, -109, -89, 98, 108, -95, 58, 38, -34, 8, -58, 106, 88, -56, 74, 104, -24, -38, -10, 97, 94, -9, -119, 77, -87, -25, -60, 55, 8, 112, -84, 82, 96, -75, 111, 6, -19, -100, -17, 39, 34, 22, -2, 119, 110, 110, -67, -48, -45, 96, -89};
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
    msg.setTimeStamp(0.5901255474774081);
    msg.setSource(15533U);
    msg.setSourceEntity(191U);
    msg.setDestination(18229U);
    msg.setDestinationEntity(141U);
    msg.type = 198U;
    msg.op = 52U;
    msg.request_id = 10568U;
    msg.plan_id.assign("XQRIMCKXBINEUSSVQFFODEMOTUPJKHJWQUQUTEZKSRTAANDIHUOHMDWGFDZFSKWZSHPDBIWVTWXKZQBERTYWQHPGFYWNLGJVTNLOXRWRQAWEZLBRMAIDGNBFPYJGFZSXBNSRKBFFJPHVMLLVGPDTRCTGLIRCPCMDCQSXZZAXVJCEBJBYFCACOXKAGJDLUEHOCP");
    msg.flags = 45954U;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 31261U;
    tmp_msg_0.destination.assign("CTEPIURTMNCOYVNCXCYGYJRMOISEUEZWDLZGCOHJNRFOEQUGVWXJUHWMXZDRBCKLJGNDTBNCYSBIHQLMAGTZNTMTPRRUTJASFYPXSVZHIIJISFPFYNFCOLFKBPNMGAPGZKIRWQVQJPDXBMLCRH");
    tmp_msg_0.timeout = 0.3651783653448869;
    tmp_msg_0.range = 0.7487122587199768;
    tmp_msg_0.type = 33U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 17278U;
    tmp_tmp_msg_0_0.avg = 0.5889394381646492;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TSUFKNHEZQWYXHWZHDFSMEGFBMVDLKDXABVPWINQRMREWXUMBKGSVGADYOUYHAMFQBRFBBGXAOKQKZLKQGMEXTNBPWCCIGEEQOSZEFMXZTLKROATNLVYPVJJUNQUZJVLYCCZAZEZHWGICRDYRPOYAANOVHCJTLDTVRTUTNWIIFYBSDMBCUCUPNXEKIUNRHTKFXNOJFPJRDIQCJIHDOQZHIMOWGSHLDSVPUYPPCXGXA");

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
    msg.setTimeStamp(0.5869191607657002);
    msg.setSource(29283U);
    msg.setSourceEntity(107U);
    msg.setDestination(47485U);
    msg.setDestinationEntity(204U);
    msg.type = 62U;
    msg.op = 238U;
    msg.request_id = 5962U;
    msg.plan_id.assign("CGHDFTIKFACUDRKWQKDXUPFZBZRVLQEELGLWGCBDPUEWGJAHUDHLFJEQUOVBLBFMTNKCCIDQRJPCPATRGJVULXSZVILJNZPPNWSMLHKSCMYCQGOXIMXTZMVANHZYLNBHDMOZGSPKXTOOUVNFRQJSJATWNEOONUVKXQOQEYXYHRJNEESYK");
    msg.flags = 17760U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 37115U;
    tmp_msg_0.control_ent = 140U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 110U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.39321874267624;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 154U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.2549409594749823;
    tmp_tmp_tmp_msg_0_0_1.z_units = 31U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.8371931811749366;
    tmp_tmp_msg_0_0.lon = 0.8514268916934155;
    tmp_tmp_msg_0_0.radius = 0.01910328623711799;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 77U;
    tmp_msg_0.proximity = 211U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KOGSFSRHMSKDEGTQRWVAIBUCCFSAXZSVBSL");

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
    msg.setTimeStamp(0.7133567870371871);
    msg.setSource(24077U);
    msg.setSourceEntity(131U);
    msg.setDestination(41385U);
    msg.setDestinationEntity(134U);
    msg.type = 117U;
    msg.op = 233U;
    msg.request_id = 11467U;
    msg.plan_id.assign("PBTABEOHPIUSPMVVSBIVOYWSOUUDISYUHFHJNRYRSXGDADOVEUPMBRZMHLURJNEGIKMMYWDNZGYIFWCTXIAYNFXLQTOJTTFDBBIGTVWTFCWLDVJZIEZGYOJWHQMBLZVRCAV");
    msg.flags = 32710U;
    IMC::SetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 242U;
    tmp_msg_0.x = 50759U;
    tmp_msg_0.y = 60288U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LMYYURCTXAPHYSOHETUVIRNSWJAXDSFKLCJZOVZDAASAXDKQMXEIYKMHBWHHMLAKPUCQUQJCIKRNWOELNXEAGFQPZIZQVGRMBXWEDCFWIFAGQVKKUAWRLQQLUDYVSDDTLNEZXJCNMTXFMPXBFBSKTHIMPIKTOAYYBUBBHDRPPGGGFNOSVGD");

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
    msg.setTimeStamp(0.4963988344379394);
    msg.setSource(2325U);
    msg.setSourceEntity(179U);
    msg.setDestination(38499U);
    msg.setDestinationEntity(169U);
    msg.state = 191U;
    msg.plan_id.assign("PSQTDSOKWHGAWUSKBYTHDNTYLUMFZUOYQLCUKHRFQQITBFYSVAHBXJRDQNDMPEEONUNEMLYP");
    msg.plan_eta = 1234911474;
    msg.plan_progress = 0.0888857511056581;
    msg.man_id.assign("JCMHZSBOFHCQEOKSZVFMSUGFXMPKBOUSOTAJLKDZTXVLGWLNIEDXBDXKXYBOCOISDXYRTAZROSEVQHTYMSQNNGSREVTFQHNJMUEXDO");
    msg.man_type = 508U;
    msg.man_eta = -1355478096;
    msg.last_outcome = 20U;

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
    msg.setTimeStamp(0.5472627191428112);
    msg.setSource(46558U);
    msg.setSourceEntity(0U);
    msg.setDestination(2505U);
    msg.setDestinationEntity(115U);
    msg.state = 131U;
    msg.plan_id.assign("JALXJTVIPCSAVUKPBHQIGAIDKETO");
    msg.plan_eta = 1319647387;
    msg.plan_progress = 0.5590475428335907;
    msg.man_id.assign("NUQDYGVMUJWQXLTHXIITCYXZFUFNKSCTLIADEOYXUFNRZCDULFR");
    msg.man_type = 2186U;
    msg.man_eta = -311413182;
    msg.last_outcome = 130U;

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
    msg.setTimeStamp(0.456429005197438);
    msg.setSource(35538U);
    msg.setSourceEntity(87U);
    msg.setDestination(56132U);
    msg.setDestinationEntity(124U);
    msg.state = 56U;
    msg.plan_id.assign("HSQDVACKBOGGOADEXWTZSQGHETAL");
    msg.plan_eta = 2067944759;
    msg.plan_progress = 0.41721906077631477;
    msg.man_id.assign("SPBZYSEXHQVJIBRLGPRFTNMJZIDBLWJCUCGEQLGZIHFAQFXZOTXEIGWDAYYUHOOQSIVMYRBPAQTNIUPYAWBJHZCUGCBWYURLGFMOSHZSHSPDDZFSFMQBIVJATNHLWJKJAOQFQKQFQEKMPXOXNIENBECGKKIMVMMKGSLBYTLRKDRYZPDZENVKUHCON");
    msg.man_type = 32503U;
    msg.man_eta = -1490063832;
    msg.last_outcome = 185U;

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
    msg.setTimeStamp(0.9172599227456077);
    msg.setSource(60730U);
    msg.setSourceEntity(209U);
    msg.setDestination(12728U);
    msg.setDestinationEntity(197U);
    msg.name.assign("DSEMLVWNSHAHZZQRTAMZASGFRGGXCOYQOHXEKXA");
    msg.value.assign("QKZOWYGQFUZLISOVOUEQSGMHUIYKNWUGFAATCHWQLHWXINKNGIVGLNGXYWGR");
    msg.type = 60U;
    msg.access = 33U;

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
    msg.setTimeStamp(0.3388513508739245);
    msg.setSource(651U);
    msg.setSourceEntity(186U);
    msg.setDestination(59784U);
    msg.setDestinationEntity(80U);
    msg.name.assign("GCINCHFJDNDGLIMGYFSQXAIHVBBAAMKUYJAFRVOXDKXYONBTPBQNKMTRKZRXPTXNWHKBIYZVCRFGTQEEDAVSPHXZELCSYQWUTXAUWPBRBAOZGUKJZRGEKCIIAJJOLQUNJPGCLPEBZHIWCXPFQEOFVFPYHQCKSFXWNNJTUXMSRVVLOHTZWYIZOAIVQGSSGDYDMJDBMWRDKEFRVUUOSCAOYHMYTDWZJCMPBHEMFGMONISHZV");
    msg.value.assign("UOABVOTIFQTJTPHKTFXUAAXWBQWPEYOIFCLOJRNSIYIZFYOXYLDG");
    msg.type = 47U;
    msg.access = 228U;

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
    msg.setTimeStamp(0.6609630689584794);
    msg.setSource(39293U);
    msg.setSourceEntity(81U);
    msg.setDestination(62635U);
    msg.setDestinationEntity(49U);
    msg.name.assign("ALHIRGFBQLCGWGGRJFSHPOMJFYKEAQQINUZVCHXNFZHDMPDQVBGTZKLOBTSHUVFXKALYDPVPRIDXJSOVAGSPGARISOYZWMLXDUKVDUGEUYEKTZMDKDCDUVPCPFBAKXWSJRWKIBNLKXTPTXAZJINWHMCMQXYFUEVPZRUCERZLLYFTJRQMYJNVFSMBPVEIZEBXWWRQATYCLGOOJJTDROYSXIBEHOUOWWEJ");
    msg.value.assign("BHWYVQFGWTUEGUTGGDNPXTE");
    msg.type = 102U;
    msg.access = 224U;

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
    msg.setTimeStamp(0.698803819961328);
    msg.setSource(45878U);
    msg.setSourceEntity(129U);
    msg.setDestination(17715U);
    msg.setDestinationEntity(241U);
    msg.cmd = 70U;
    msg.op = 92U;
    msg.plan_id.assign("LWMCAVWUIXTVNJMBDWPXZYNYSFMCMOHRHBVLKTUKGLEGADAPVDDIJGCPOYFBBWERFIUSKQKSRCESOFIAQYEXXURILAHSQZMRPSFEHGJKGGTBZSLPAJFGMYSXNXJNMDSCJZORQXHOMLTVBWQIHLZZJOSGTOQCDEWYKVIICLQPWXDDOTOYQKZENMTIAXHVJHUVCRWQVKAWEHJCJTOMPNFCFFRULBBAVNYTZKINUYTUPDPBWUGR");
    msg.params.assign("UPFNOKQJTLQPCNDPBLTDSYIOXURYMHWAOXNIMOGBTVMAXVYUVVZIBWTPYOQSEZQORFYSWOWQWYZQZDCFIHHCLJMJVPURRCFXHGGGOTNCUPXBSKWAEHDDDPNXHGWSZOOAJKAUBUGMJKBUHTNAQLNKDXRYBZRZZZRIALSHTBRLYUJQTDVWEJRFI");

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
    msg.setTimeStamp(0.40964213307136244);
    msg.setSource(6129U);
    msg.setSourceEntity(12U);
    msg.setDestination(41669U);
    msg.setDestinationEntity(228U);
    msg.cmd = 22U;
    msg.op = 98U;
    msg.plan_id.assign("SSLCTLZTUINMYAWFZWOYQCTGBVSEYWADFADDTBPMSLNHHVYEWLIZEMEOMEOSLJYGMUGGPBZSJGQKCVWRILUTW");
    msg.params.assign("SAAIORZPHKREEYBPJBGNTDZMMRJKFM");

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
    msg.setTimeStamp(0.5119813641227665);
    msg.setSource(40106U);
    msg.setSourceEntity(230U);
    msg.setDestination(63442U);
    msg.setDestinationEntity(145U);
    msg.cmd = 60U;
    msg.op = 134U;
    msg.plan_id.assign("GIHPFOTNYEBXLKIVVDXEUWZQUTUXMAXDLQZACXVWNSCCHYZNWBXAMCMMLXFRROBFLZOKIDFFAHSPZRRKDDLGPGVEIBYRVSNQWCRSJUTOHEUBHAHYDLEUZJFHSSMTYEBWFOJQBLHYQTZHT");
    msg.params.assign("TYOCGVDQSGMGBVNNICSHIRSARHENNSQZAJKYCUVXPDPBQAWXRSWULIJLCEVSXNOIKOPYKWWRGPBTLTGTYESWLZAKFHMBAUHBAGMDKLHOAFQUMCBIYLVFEDJPBAK");

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
    msg.setTimeStamp(0.005701444539578326);
    msg.setSource(44548U);
    msg.setSourceEntity(52U);
    msg.setDestination(26399U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("LJSSQNKAQCXVUTTPWAMAWPMPZ");
    msg.op = 27U;
    msg.lat = 0.948152619322016;
    msg.lon = 0.17621451875233352;
    msg.height = 0.6955351166321554;
    msg.x = 0.7465140913301606;
    msg.y = 0.02157362064908719;
    msg.z = 0.2841287266849386;
    msg.phi = 0.4362777476178017;
    msg.theta = 0.08066180610086637;
    msg.psi = 0.46055480893330547;
    msg.vx = 0.9338562577430382;
    msg.vy = 0.9611710922123107;
    msg.vz = 0.18512225759874368;
    msg.p = 0.657823345866738;
    msg.q = 0.946983201890576;
    msg.r = 0.9254750986802491;
    msg.svx = 0.6635848407260575;
    msg.svy = 0.8872335041726804;
    msg.svz = 0.7051051397574849;

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
    msg.setTimeStamp(0.628701512691558);
    msg.setSource(31187U);
    msg.setSourceEntity(88U);
    msg.setDestination(4319U);
    msg.setDestinationEntity(231U);
    msg.group_name.assign("AKOMMITLMFPAZOTATSEIBGFAAYGZGPGMUJYHQXYNEHCSKOXBVCWCSVJAVLVKCMPECNDKLTBWEOVCKHNOUDRFRPNQUFADQHJEQNTHEOIEANYWZGOLFTGIXZAJF");
    msg.op = 78U;
    msg.lat = 0.7721117836147094;
    msg.lon = 0.6399900021425853;
    msg.height = 0.681680633503667;
    msg.x = 0.9569807170730978;
    msg.y = 0.1251784852134068;
    msg.z = 0.04196265051270587;
    msg.phi = 0.5824048011740074;
    msg.theta = 0.7831497047375365;
    msg.psi = 0.6083534914718233;
    msg.vx = 0.8184063677692601;
    msg.vy = 0.08072921255449328;
    msg.vz = 0.4148254825444433;
    msg.p = 0.10878892964191611;
    msg.q = 0.6524324888429082;
    msg.r = 0.3065815170121723;
    msg.svx = 0.032934822946429576;
    msg.svy = 0.028228194888104685;
    msg.svz = 0.7975985647198692;

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
    msg.setTimeStamp(0.32129317889440134);
    msg.setSource(51129U);
    msg.setSourceEntity(5U);
    msg.setDestination(60566U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("LMMTYGNONWRPGWBXSNWJHJOLHLJCNYGAWAVWRBCNPRMWWFZTSWTZDFMNKFUESAJQPXNLRTHTDNDCFYNIMBAEVDYEYXQPOSYAEKLSPUOIIBZDMJDJISAMKBBWEEPHUXFJJXKOHCGSBDOIGQUFREJBPKGCEIVETDRRVXGQYUKVSBRQICQKHHHAWLYFGCFMPCHGQANUFMSUPIDVOZDACOMOALZVKCIQJRQKXULGZHTZTBLYRVYFVVTZZE");
    msg.op = 179U;
    msg.lat = 0.07495443243569766;
    msg.lon = 0.5460157658530281;
    msg.height = 0.9188132767482079;
    msg.x = 0.3273463624468369;
    msg.y = 0.36174963926736414;
    msg.z = 0.5521586274274961;
    msg.phi = 0.5683720099085793;
    msg.theta = 0.47518224390868335;
    msg.psi = 0.1320222993836213;
    msg.vx = 0.6541818292018725;
    msg.vy = 0.2974499871972883;
    msg.vz = 0.9060983712805927;
    msg.p = 0.539177882503529;
    msg.q = 0.2372846673396395;
    msg.r = 0.5887837404340153;
    msg.svx = 0.5051292448731904;
    msg.svy = 0.3263582123601736;
    msg.svz = 0.9580759272377158;

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
    msg.setTimeStamp(0.9813228313728516);
    msg.setSource(49662U);
    msg.setSourceEntity(46U);
    msg.setDestination(24917U);
    msg.setDestinationEntity(133U);
    msg.plan_id.assign("GMANNCZMYMNHBAGLUCUQXPQSAXYQSVXXASZBOXSPLEHKDMYETXAIRPIZOWZTMVKCZBOMBSXEVLTZQWJYCREHHMEIMMAIVIBNRWKDFPGXQFGNPXTTFEUWRUDTEQ");
    msg.type = 244U;
    msg.properties = 140U;
    msg.durations.assign("DLGKMORFVFIZCLMVEPNXCMCCOYSDZRZQUPPDICVGFFCMTLDNZHVXUXHNBFVYSWZZBACYHQRBSJYKWYLOSGSSLFIVMLUPFXMBWZW");
    msg.distances.assign("APFLPNCAKGOWDEVPGFTCSPTIBMVJTAWFEBZCVZRJYZOTMOAAXEKMPUYFTYWYHQIYLDHIQHLSPZQABEDKGADQZVAWYUBWCMULDGJMUWIGWEXJDBXJMTUISCQ");
    msg.actions.assign("VBXJYVCYIXONNCBLOSNALZWMNRB");
    msg.fuel.assign("OYETHJPQTLW");

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
    msg.setTimeStamp(0.037953413371021094);
    msg.setSource(41628U);
    msg.setSourceEntity(199U);
    msg.setDestination(48464U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("JMUEOAHBKPXQQDWMAEYJFYDFGDMREBOPKJQRPMSSJBJCNFSRANTPSUKEWPFYCWUMTLXLXUIGILDALPVHIYGVGCEQUAJDIABTSYMFMGLLZABHYMKPOIOXTOZDWXKZFMUKTPEIXLGWQBLVSASZZKBJVJWXRCYHFATVIUDZ");
    msg.type = 23U;
    msg.properties = 184U;
    msg.durations.assign("JNPMORDKZRYVYTKLXLVJMHFZYVAHLGXPEOPFBASJMLDDLFBIKCFOYEXZCTIAPHXGYPLBEJARJFISDJRZNVXVSNACWQBHWWEUJWXNUIORGCTVPFGIQUFHJCADXIQXLSEURJOHTBMOKAZHWGXQUHQY");
    msg.distances.assign("UEOWGZAVCYUJRGPXXICHVNHLSLZZBXFCPYTDZWJXFIINKJEDMZUKPQIILRCTVHBHYDQRFUDAUKPRMKZIJXEWNIGUENBQAVHJCYZVYJLBXXSANXIJQETKSBCYBMTAPAE");
    msg.actions.assign("WTZESFVSFSQDKEXOALMTZOFZRWNSBP");
    msg.fuel.assign("GPKVTBSPPWRTZDEQFH");

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
    msg.setTimeStamp(0.5668673428625894);
    msg.setSource(31763U);
    msg.setSourceEntity(74U);
    msg.setDestination(26670U);
    msg.setDestinationEntity(137U);
    msg.plan_id.assign("TSDXBQDRHQYRPAWHTIILASBPOQAEKZFIPNTJANNECUNZVCWPJREUGKUKLVUHPCOXBYZVPJMKEBCJEVGKTMZLTNWOSRQWZIWRSJMBQANAUNXWOOVWFPHRADPDFTONSFDUSCQGRGIFULXYX");
    msg.type = 128U;
    msg.properties = 207U;
    msg.durations.assign("XAJEJWIHTHCKPLYWZFINPBCZSNKXFOLTDJJWTTWDBFZBAUSZPPEQNTVYQJLOHGQGMXBMSOIOCGFFHPSVXGESTRHSURIDMTYSXQZLAMNTTHHXSOPYIXAMUEXZIOKGFPQUWGQENAKORKYCWFEKPXHHLUEJRIGBDJDLHVSNYCKBCZVUOJMECZWYFWPQKZLAEAARRINDRZNXAVDWIVMBVUGSMMRRQDCUYNVDMBDVROQBFJNYP");
    msg.distances.assign("SHCSGMCTILP");
    msg.actions.assign("OFTRYNALNZXLUDTERRFCYJWZSHFWUXAITYBNXIQHDCIWJSBCZEIQTKROQZPXTKYNELYVXHPBIATWAVLDXLMSNWUVLSQNWTXOJEIVQDERWMKEKJKXJUIHBOUMBOKNGADNSJORBKBCASGUKFQZYUZJMOALPBECTKPPBPFLHKQGVPVCGSJWVIYXPUDAGOTWHMMFDMHSIRGOVMTSGPUYCZEQBYDXGHJRFNZFGRJWDCNVLEVAPUZ");
    msg.fuel.assign("DDPZIRRUNTFMOZCLOWMHVQZABJNPTVNFFDWYSYMCLQHCRWYIGJGVKTTATFIEVSNYPPOMBRVBMNEEUMEAJWPXACUNDLRUUXXTYFVIUHWYSAGGOFNHJKIKQROISVYQNLLOQKJIRCBLQEEQMZUGSTUYOKZIWXBIFAODJCWSBAKPMIEYCHJKRAUDGNZDWCPLDHDZBLYGSJFTVLLNSGZBJEEKFBMQXGOVPZGCKDHRSHWHOTMAEX");

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
    msg.setTimeStamp(0.5925051166977681);
    msg.setSource(7130U);
    msg.setSourceEntity(236U);
    msg.setDestination(27868U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.24281429670746568;
    msg.lon = 0.34885074208453637;
    msg.depth = 0.6073042111304793;
    msg.roll = 0.5339005127472973;
    msg.pitch = 0.4023242013231281;
    msg.yaw = 0.7550750372749141;
    msg.rcp_time = 0.2553837723948632;
    msg.sid.assign("YCEYAQHIGNGKHXPOPMQRVSJVNCSWYBMFVWBNCCAYZ");
    msg.s_type = 176U;

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
    msg.setTimeStamp(0.8338587651263148);
    msg.setSource(24741U);
    msg.setSourceEntity(55U);
    msg.setDestination(44384U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.7575818821906452;
    msg.lon = 0.11945458870145764;
    msg.depth = 0.4586220163442578;
    msg.roll = 0.2466235546345693;
    msg.pitch = 0.7562566953118324;
    msg.yaw = 0.47576596008243477;
    msg.rcp_time = 0.08291089961983622;
    msg.sid.assign("EWVRYWSOJCRGYEGJBQSXTFYSTPURALVQJXIEFVKMCXBHWPSFWASGAHLOAZGATWAHKZBESNQJYBRIUQZIYINNVXOIMAEGKLEZCUPIHFIEIKJUYOMDR");
    msg.s_type = 194U;

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
    msg.setTimeStamp(0.2307128955650043);
    msg.setSource(34708U);
    msg.setSourceEntity(167U);
    msg.setDestination(27377U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.9133103292982129;
    msg.lon = 0.4743984256065866;
    msg.depth = 0.5112790694995002;
    msg.roll = 0.6629456266807654;
    msg.pitch = 0.957624583926439;
    msg.yaw = 0.3373469243081374;
    msg.rcp_time = 0.20579570207063214;
    msg.sid.assign("GSLQPWVVCKXOAASGBLQNNXODGAXKNKZQKQMVFEMAWLSXQTNOUWNCMJYPCPVRUVWIZOIYFTHDTSLGXGIZRPDYKYXJSMLPBMSVKDJGVLDFHECMWWNEUIKQQCVJLGLFZTBFIXYOYFXGZPFUZDRSVIDYAYG");
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
    msg.setTimeStamp(0.9847557079322639);
    msg.setSource(18836U);
    msg.setSourceEntity(167U);
    msg.setDestination(15278U);
    msg.setDestinationEntity(60U);
    msg.id.assign("HLTSZJQOEAGZRJTMAOAOSNYGGZDIIJQOOUKZFANEJYFEYCKUXAVYVYVLIBCCEUQWCDTNOGHOUDWQNFCNKHSOEVYEZUXSASYBMPHBYHNJCXMHWXIKTZBHXXMJDDWRFPUIPUMIKFCDTJGMELXKXWGFRSTRLQPMAWRR");
    msg.sensor_class.assign("DWMINWUWNGXPWFQZICYSEQPUSMIKJFVKBFEKNIJDTVBTTRBJSZJHSDQEDORSVFLDPLTZWHAKSJMSHAQMKWODAGUMIFEEAAQLQTLMCVIHGMZUMIPRELTVXXOKOHJLUGLCKRHOPBCBNHEFCJZYHLWGZT");
    msg.lat = 0.4745480436696422;
    msg.lon = 0.3146040565219308;
    msg.alt = 0.5747380572476029;
    msg.heading = 0.7176477155685019;
    msg.data.assign("HWLPQDTWOPAFCYBESCREQMBDLBJSZUHGTTSDONDAONPHQQFZVKTIJKJIYIFXDVGBHCEEKADDVSFWREIJRICUHBHDURTXYDNMFIVGSQXJRLXHTMZGYELENAYRW");

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
    msg.setTimeStamp(0.035580782647029796);
    msg.setSource(23525U);
    msg.setSourceEntity(184U);
    msg.setDestination(38273U);
    msg.setDestinationEntity(178U);
    msg.id.assign("COYYPNSXSFMCTUYFTXFOWHFCJ");
    msg.sensor_class.assign("PYQJIRPRVWJGSBULVZUUWGXXNWRJMSKQWIQBPQFPGNLOYQGMHVSDDQDVAGZKMPLHCINXYJTHEHZRDENCEJSMVXYLFAABXPGBVHAKAFDJIOXDTZLLFDIUQWBBFLVTZSUFYHVKYIVSEYNZQYKNEGIPBYCABLDIRWBNJGRPHCXOKWTADUCKNWHDHUTZEPOFEZCOHSLTJXFMENGEAKRKCMOCOACILTSXUNYORKSZSTWZJXV");
    msg.lat = 0.09491735488317132;
    msg.lon = 0.7828283824110637;
    msg.alt = 0.014867447384930066;
    msg.heading = 0.9014032106796538;
    msg.data.assign("XGOZNCNVYJZWCHLWTKBLA");

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
    msg.setTimeStamp(0.8297369986695805);
    msg.setSource(45461U);
    msg.setSourceEntity(182U);
    msg.setDestination(38717U);
    msg.setDestinationEntity(115U);
    msg.id.assign("DTCDZRKICSYEMDNSEPCGCIGIVKUWXPWJEYMRAHURBMHEJBDMJSOFSQYXGQUNIIEULNRATHZKFACVQZZRAXBGJPXHPWMKRHCZ");
    msg.sensor_class.assign("WWDTJXUHGGCPCMFXKFXHFOHRZZYWBUIHCSRQICFGMRMZNNTISWSYTWVTQA");
    msg.lat = 0.5063471618836044;
    msg.lon = 0.025367310874855997;
    msg.alt = 0.03129150453458385;
    msg.heading = 0.07352663113612778;
    msg.data.assign("JMJSUHVNZDXTE");

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
    msg.setTimeStamp(0.8262046267226277);
    msg.setSource(17000U);
    msg.setSourceEntity(175U);
    msg.setDestination(24785U);
    msg.setDestinationEntity(74U);
    msg.id.assign("DCAWLSXPSMKXYPVRLZCHPTJUTKJMESAQDPVAJNIFALUWUIYBEHXTGDWVPCNWFFORNQHZUEPNLQXTIDOPJZDEPVAVKOMBQLVSSYEXLXBHEYATWRHPSEJUEXBYXMLRKVNVFKLPIUUGLWVFHIJQINZCMOGUKSRYHGDCKR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JNDTSCZXHSWJRPTRZCFIPNCSFAYNJCHYGMWWGPVVFKMBRQAQWRYQDZBNJTLWJELRYEKTMHOUOEHXMKWCIKXNZFHENBLOQUGKWFVJLRTSTQUUJWQKZMXBPUAVUDHGIOIX");
    tmp_msg_0.feature_type = 166U;
    tmp_msg_0.rgb_red = 101U;
    tmp_msg_0.rgb_green = 182U;
    tmp_msg_0.rgb_blue = 244U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.02413297224532185;
    tmp_tmp_msg_0_0.lon = 0.5976318051575339;
    tmp_tmp_msg_0_0.alt = 0.8681117574290754;
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
    msg.setTimeStamp(0.5153978053534598);
    msg.setSource(27589U);
    msg.setSourceEntity(44U);
    msg.setDestination(19718U);
    msg.setDestinationEntity(60U);
    msg.id.assign("OFDIVPLQWNGNGAUUOCLJXQJNWGWHMZSSFRSREDXVRDDFYSUYNEMLTYZFBXVNIJZLOALZJBLSKACTLQAESTHWWORNYJZLOQGBDTFGCMYFQBCPEIROMFUNTAAEHIWHCPIQKRPZDTIDOVQDOHUEHXPRHKKHYPWXEZEMOYCAQATAKXVBUIHNVZUXMKFOVQXVI");

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
    msg.setTimeStamp(0.13860853656614613);
    msg.setSource(35503U);
    msg.setSourceEntity(38U);
    msg.setDestination(45912U);
    msg.setDestinationEntity(104U);
    msg.id.assign("YJRFEVLDSHJENGIQJPPBTJZBPHYOXLWEBUZILPVDYDYCKKWMPHQYTFBCPLIWKNECMPWGZCFTKQQVORRNMXWDHMLNKVDAGOQYMIUETJAEBSXRGXQA");

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
    msg.setTimeStamp(0.9839773902024129);
    msg.setSource(54123U);
    msg.setSourceEntity(228U);
    msg.setDestination(26067U);
    msg.setDestinationEntity(15U);
    msg.id.assign("DEBAMRADLFTYJVQFEJJFYZVFSMFFPZSLGGFWQNTHOVHRMLXQUIUBGWXCVNCHMRGTLOUIXYIPOUNKXWAUIIGBAHWRQEYRTDBLZJXKSDCX");
    msg.feature_type = 161U;
    msg.rgb_red = 163U;
    msg.rgb_green = 90U;
    msg.rgb_blue = 154U;

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
    msg.setTimeStamp(0.865833157823237);
    msg.setSource(49137U);
    msg.setSourceEntity(241U);
    msg.setDestination(17849U);
    msg.setDestinationEntity(1U);
    msg.id.assign("UYCMQNWLNMETCGIOTWCFSTTZAKRVSHPQHNJPFKETDVERFIAVRCZECYTKRAUTZRFPMYSGKZLDYNPQVRIYBPOQMHOMPWQNLBWIHXJKHFEIQWDYRJABENUFBSGLOCDDBWSJXJMBULGBMBYAEQMLUHLNPXCKJWGJZI");
    msg.feature_type = 193U;
    msg.rgb_red = 198U;
    msg.rgb_green = 206U;
    msg.rgb_blue = 237U;

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
    msg.setTimeStamp(0.5673681104930425);
    msg.setSource(31787U);
    msg.setSourceEntity(170U);
    msg.setDestination(9457U);
    msg.setDestinationEntity(150U);
    msg.id.assign("LPKOQCRUIACGKWUTHTQLPABXTBQAYMLKCRTTPFKWCYSCMSNODZDNFBMXAYVKIOJSYIJRJWLJTWFRTQNZPRIFULTRIEPIZQNSET");
    msg.feature_type = 82U;
    msg.rgb_red = 146U;
    msg.rgb_green = 51U;
    msg.rgb_blue = 96U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.38098165332155964;
    tmp_msg_0.lon = 0.29369000231448106;
    tmp_msg_0.alt = 0.014966671173117119;
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
    msg.setTimeStamp(0.3647935034895492);
    msg.setSource(11026U);
    msg.setSourceEntity(221U);
    msg.setDestination(8427U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.8743546666055401;
    msg.lon = 0.15518250897081265;
    msg.alt = 0.7543950559680921;

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
    msg.setTimeStamp(0.2934145496006726);
    msg.setSource(15337U);
    msg.setSourceEntity(58U);
    msg.setDestination(29932U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.07373775778617209;
    msg.lon = 0.6112584090617609;
    msg.alt = 0.9426022088000671;

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
    msg.setTimeStamp(0.4049537106436121);
    msg.setSource(54806U);
    msg.setSourceEntity(114U);
    msg.setDestination(46124U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.45247946741246325;
    msg.lon = 0.709149164032135;
    msg.alt = 0.33200444922702277;

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
    msg.setTimeStamp(0.4443849563050384);
    msg.setSource(5796U);
    msg.setSourceEntity(19U);
    msg.setDestination(38663U);
    msg.setDestinationEntity(59U);
    msg.type = 243U;
    msg.id.assign("PHNVIHTNUCLUANPHTBOHWQBDCOJWTNFGNVRLTYJUEBJFGNVCTGBNFZOHTHLMOQYLLSYDLZOTJPZGFICDPAWPKEMKRBVKDURZBVRJQZX");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 35356U;
    tmp_msg_0.x = 0.2725007387890436;
    tmp_msg_0.y = 0.7883931273046065;
    tmp_msg_0.z = 0.8904722178141689;
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
    msg.setTimeStamp(0.16971416041686938);
    msg.setSource(49560U);
    msg.setSourceEntity(234U);
    msg.setDestination(61602U);
    msg.setDestinationEntity(85U);
    msg.type = 67U;
    msg.id.assign("RQRHZYTGKIMMEYMEFKEFTVTIPZXHVPTOGBQEMICNPWEDNWLUZCZRJRAKPVQFKWJJSQMOCJHAEJNGCJAXFIFQZVJYUZFFUAQSPIXTYGQWKCQDDHBKDWHBCZOTUHGPIXWDLBEUOSYVBYCRRYKZOHEMVNUEJVBKVHDSGAVCSUTXLUYONPSLLGSRJGGAGWRSZ");
    IMC::CapabilityAreaSurvey tmp_msg_0;
    tmp_msg_0.sensor = 123U;
    tmp_msg_0.resolution = 0.2161944760040564;
    tmp_msg_0.res_bathym_factor = 0.8997156818200751;
    tmp_msg_0.cov_rate = 0.05629632189958578;
    tmp_msg_0.cov_bathym_factor = 0.8874882071448131;
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
    msg.setTimeStamp(0.35926798639689494);
    msg.setSource(61553U);
    msg.setSourceEntity(208U);
    msg.setDestination(39456U);
    msg.setDestinationEntity(189U);
    msg.type = 210U;
    msg.id.assign("JEOMXMSXGSDQTNAAKBTPSAHJVXMFUWUBYBLXRFWHRZVKIOFGILBAEJRCLZAPXGGXHUKSLIAWCQJQYXZGWADEZQXODQKFYEKBDCOMLVPZAVVSFRNRNMCCSPOKPJMDHFNCDTSUMQPMNH");
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.39276986800362845;
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
    msg.setTimeStamp(0.022101557898390523);
    msg.setSource(1287U);
    msg.setSourceEntity(169U);
    msg.setDestination(12721U);
    msg.setDestinationEntity(223U);
    msg.localname.assign("MVKUVNQEZPLPMHIIAYWUQTQCEXFOEXPWATFNILZBQQSUPBEEHQOKMJWFKKRY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PWZLOYZFBLGHQMSYPXDLVORRTAQHWONGYJYITCBXQMQAGTFEKQWHYIZICN");
    tmp_msg_0.sys_type = 234U;
    tmp_msg_0.owner = 10404U;
    tmp_msg_0.lat = 0.4504825225719624;
    tmp_msg_0.lon = 0.45136202299869654;
    tmp_msg_0.height = 0.5475576249174159;
    tmp_msg_0.services.assign("TQQLDDIKJTPOQMOOCHERLVMMZNSHXZYDQWUEHM");
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
    msg.setTimeStamp(0.76424283745512);
    msg.setSource(58942U);
    msg.setSourceEntity(72U);
    msg.setDestination(33010U);
    msg.setDestinationEntity(222U);
    msg.localname.assign("KIFZGRTPRJIVXSGTHFQAJTCZIJDHPCWAZVMGWCCLUSANURYQLSYYMNPDNKPCSSKEYIWBICMXLLQWMJEXQCIEURCBHMTUIJFBUNIBJENHNOLUOMWSJWIOMDOSXKXGDOHOERUXNHTPBY");

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
    msg.setTimeStamp(0.30024700570569707);
    msg.setSource(25722U);
    msg.setSourceEntity(196U);
    msg.setDestination(53167U);
    msg.setDestinationEntity(15U);
    msg.localname.assign("IQJRAJKSYRQVQDZRDHTYIAEURVZOXESGWSYCXVIZXOBMUKEOUITOWBIHBAPMOGTCMPGLYCZHNNDJKGYZQTLLIQOFPZEZJUMRRKIHYMFVAWNFEFTAHJXAQGFAQECBPPWKFUVHAKTOMUKKVYYSXQWVTLJSHMKGVEUPRWLRMDP");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PCZJOEEXIVUIUQXALVAPKQEQNSDWVZGZULGCYTQTMJFNINHGUAUIDFTLSNEBHFGWWJGORGXBZIWZVRWOKYPKNJVWLCMZKJRBFUARDPQLZMOCBYHAYSFSSNWSSNDNQHMXYCXZKROUCQAJRBFECESPHPFLEVJDUCOFNQYVSKMXKOGETAGDBHGRJBLCPNXYXTKXEMYZPOMMBOAITCIIJ");
    tmp_msg_0.sys_type = 128U;
    tmp_msg_0.owner = 16318U;
    tmp_msg_0.lat = 0.9094156917930235;
    tmp_msg_0.lon = 0.7752024213606925;
    tmp_msg_0.height = 0.5118301215019121;
    tmp_msg_0.services.assign("LXFXSPIDYQUJJMWIYPHPGTXKBJCWLZENWCOKJILVCGRJTMZJMXXBULQPNCTGOEDGWPYPOXEFFHSTFVWMAQWHZPQGPTYBESBBOZSRGNAZYOKCDHANKUWBHXFOMSGYYGVHQRHHZDYNTAQGVSRUMIZUUXJFD");
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
    msg.setTimeStamp(0.038462619384033614);
    msg.setSource(46811U);
    msg.setSourceEntity(180U);
    msg.setDestination(2157U);
    msg.setDestinationEntity(106U);
    msg.timeline.assign("DKZONSWGOGBOREOOURXWLROVEUSUCVBQZNP");
    msg.predicate.assign("VSMJVIYMARWUUMYVQIEAVVAFQRCCQBZBCWEENXHFGBGMLQRXSWKCYOCBQGKEPEAJDNRDWRNGNXLFMZLIHVCCDXNPYATHBXCJTOTOXUOWGRLQSL");
    msg.attributes.assign("PNPKIYKJKGLF");

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
    msg.setTimeStamp(0.8890992895236635);
    msg.setSource(23925U);
    msg.setSourceEntity(97U);
    msg.setDestination(59120U);
    msg.setDestinationEntity(102U);
    msg.timeline.assign("GLDAKJLEKNKCWNOZMGSVVBPWWMATLLFBMORPIGWYSYMYCVUJHMHSSRDVJDZCEBQVKTPYFCUKGJHGUGYFYSBIVMEQANOPIBFKANEHGKDTQXHTNMMJGTCQHJJFOHXNRIQPIEIRUXFAUORMBKIZBLTPNXSDQELOYNDFOUQFYUZCUHOAARDJCABZODXQBXZNTEFZZJINBLVTMSXZPQDLWSWUFC");
    msg.predicate.assign("NCZTXBOUMHFHYLNZGHSFPGODBGTDUFKIWSDSAVIJLQWOMZCXNOCGPBGYFJDGADOHXNWJCTAULSPFMYZFYWUPJHNKNPUSDXFBDJLKAXZWJQRSMMQJDKKSWEBASEQRXQZUKKAGLTVQYFQHGLOLQEVYZQLUHICHCVXCKSEMHIG");
    msg.attributes.assign("KZFPZKFJHLAXLLHPDBLIOXURICWVGDZXKVPSMSATIZLJKQBXJCN");

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
    msg.setTimeStamp(0.03936331700598461);
    msg.setSource(23316U);
    msg.setSourceEntity(44U);
    msg.setDestination(10306U);
    msg.setDestinationEntity(252U);
    msg.timeline.assign("OQIXJJXMTRSZSVLTCUBBOXZYVIWLVXKAMGZAAXFRGYJWDDLDRDSOGUJSBYDDOWEYGMCSTXMNLIWSNHXHWBSGYXQHTLZELYNLJTNVPMIPDVBICCUCBQGMKEWQEBQF");
    msg.predicate.assign("FRMYNJXHDAQHCTIGOCNPRSLGHQXUSLUAKWNYVWOFMLEJXKBLXJZITZNTOBYICIUYPNDCJDAJFGSWIKEVDULSPYXGVMVZVPQRGZAUMRXBBILBNMUJYNOHHRYAWJLQCIEIWILTKSPBAAXCVFUZKHFFDCTIJPBTMTSJHQNEOKCUDUXPDXGGFSBWKRHVYRYMKZTGRCCTSQUKEQBBWQMPARMLPOKDVXGF");
    msg.attributes.assign("AWWLKPAXCZOGYJYYALAKKXYIBQYYZSTUUZJNQVIMBEZADTVBLRNSJKESFYBXROMQTJZOJUIRVFFPZXOTOAGIUFKAPVWYASTHJDLQWPGNMTXA");

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
    msg.setTimeStamp(0.8259234327761135);
    msg.setSource(45019U);
    msg.setSourceEntity(169U);
    msg.setDestination(3272U);
    msg.setDestinationEntity(148U);
    msg.command = 46U;
    msg.goal_id.assign("ONYHLCXAGUSASEVQYQCTVEQBPGQYFPOCJOZLSIYJZJCMMGHHJNTEMNHHVQUVLRYMEIQSI");
    msg.goal_xml.assign("TIEZMEAXIOBQJSPMBNMYPMSGWZVTGCMRZBLBKUICKELX");

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
    msg.setTimeStamp(0.49541030508103945);
    msg.setSource(34514U);
    msg.setSourceEntity(121U);
    msg.setDestination(13846U);
    msg.setDestinationEntity(182U);
    msg.command = 59U;
    msg.goal_id.assign("TFCVWKYTCZVWWMCOLMQSFTYSGEGLNYRBSDPEHYZPFQOFABTUEWAIABEIZVQEIJCMZRZYOQXQBALMXJYMUZPNFOSHGLMHALERCBBFHXCWTVFKCOXXJLDJVWSYULSCSAVOKWXNCZLSXCRSHWOFFMKIDWNKNRGGJRYJKUGDKODDDIJHYFUBGIQRUHVGRMZQAUQEUUKKHDNASPXMMGDJTHAWIRBAXPKPOINUHZTXLBTRT");
    msg.goal_xml.assign("FFDUXUWDUJHGKBLOQYCWYYFUVGBQBYPNHHOATUUBEOAPQLVDDPUVIXM");

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
    msg.setTimeStamp(0.18651936875539077);
    msg.setSource(25339U);
    msg.setSourceEntity(239U);
    msg.setDestination(43679U);
    msg.setDestinationEntity(146U);
    msg.command = 47U;
    msg.goal_id.assign("RXOGKTCDIXXINALYCLONJDOPWHGASKOCLBHYRSVVPEORLNPCMXKKFIGRZLZEKJXEURDUEJJXXQHIDYMWKLZDUMSWMKYIJHGECUVTCGAQLBOSMODPEQJZVQOYTHYKPHNGZTBXRZRJIAPUNEFWPSMGDBGNWTIEVKASWANZEGQWY");
    msg.goal_xml.assign("JTRAPBUEMIFKADIHXUSFHQGONBEGOLDRVVSBAQPDRCPWALPCTNXSXUFTCVQATIRHQ");

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
    msg.setTimeStamp(0.035461327189848846);
    msg.setSource(65398U);
    msg.setSourceEntity(222U);
    msg.setDestination(15097U);
    msg.setDestinationEntity(26U);
    msg.op = 146U;
    msg.goal_id.assign("YWUVYSDHVAWFLQEGKBVP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AJJIBOWPJWTYLNBTEDXGLVPTRAACMBWTDNLYJGYCWXUHDKDTSFRCZUAFIGKFJVEMBZYRVDVSUCJSGJRANF");
    tmp_msg_0.predicate.assign("FXWHRMKRXUIMDEQOBBDFAHDGWXBMQESRAOPXGKTMZKPUMRBINXPQTIKDQJTVBTYGSLWQRBNUNTLYNKSDJJQQSTSUVYCLVFMZEURDZIKIUGICDUJJVVXWFRPYZWLIOHGBWCPPZKNHQZOWBCJXHYHOKEOFANRWYLRFMAVZZFJEHGLCTNQGAHDDGPXLHALSNJOBRSTEUFELSKH");
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
    msg.setTimeStamp(0.8123537507090244);
    msg.setSource(5794U);
    msg.setSourceEntity(129U);
    msg.setDestination(33236U);
    msg.setDestinationEntity(3U);
    msg.op = 203U;
    msg.goal_id.assign("EECWZQHITTJQKKDFXIGYRYXSETDUJJQQMPTOLPLJVZRJVSJCBECKOHEMWCTSBNHGXTBCXPFRTLVQULNLHOFAPCDGPNDK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IMFUJOJTYPIKIRGQMPAJXOKKTWRQHJLAPTZHPLWJDLHFRRYTDTLRBIJQTSLVDXCDFNNGNSXEKTIBIXSBEYOBEEGSCPWBUMPUFAGNJWVEYQWKOTJHVXMBHIWSGLOWCZAUVMZSWXKCGJLQPDUQQCHYNUOJVYWFHNMUZUFHDXQFYOVAYANSKYFHOEVEEUDTGBCKIRMTNXBIRCVIGUVBPDDAZSNZPZKKVHYMER");
    tmp_msg_0.predicate.assign("CZOEUGCSOQSRLOTDMDRYPOHJFJOQXDVHOTLCVVNJZXRXQTBQUACDTMSIQWZZEJILIAXGFLRBZRYYCLAWPADKLJUUWQPAGRYPKTXEZPTLNJCHDWSFBCGXD");
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
    msg.setTimeStamp(0.1264864105305591);
    msg.setSource(43333U);
    msg.setSourceEntity(27U);
    msg.setDestination(17463U);
    msg.setDestinationEntity(180U);
    msg.op = 174U;
    msg.goal_id.assign("SBGWLMSKFFETUXQCOVYGQQYLZJAA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DZCJFYQDSOCCUIRXATNAEGFGGBNTVXBGFKIIYDMRNHMXVSHYBVVKODOZNWLHUZFVXIEWHLCNFTHTPHJNKREIGSYLZWNMGRDVOBEEWQTFZLVIKQBNJGJDFNJCHDTAOMZKLKAACBMRRQXHZILLEFIGKPRFUGMZVJRAYAUJXBOZPXOCAUDJPHMUWPSIQCGFWMREMBOLXJHTYKUQKESVB");
    tmp_msg_0.predicate.assign("RWVCVNXTWJDYSMKMKGYWFGGHHVUBRIRDYJEPPXOCDLCDRWQJASGIKELKHRRDXUBUEAVJEBJWDWLJLAFKNWUTYKCZJTNSWLFIVHHCXTSPHYSORIDQLOCAQOQNMQFLCCFONVGMEUYXUKICANPPMGKYZAMTSJPGASQLHNZ");
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
    msg.setTimeStamp(0.40704560237831733);
    msg.setSource(7175U);
    msg.setSourceEntity(182U);
    msg.setDestination(25627U);
    msg.setDestinationEntity(204U);
    msg.name.assign("CNAXPIOJECUHFYRVZSASSDQVGFXXJEA");
    msg.attr_type = 52U;
    msg.min.assign("GFNDJSDUGYWHMXBBVWEZIXSYGULOIYBCWOIUQZFUZXNQTZYLOPPHCOILPEVKJZGJWFKURXNURCHGQFOAJAVSCDSMJJHRKSDXQEKMZHDQIDTRNFZFCENOYRRVTQIGULTKDVRUCVWYHEELMKTTKBLMGPJ");
    msg.max.assign("FVSTRBOQQJTSUMWZZTGQCXBFBKYNGKKAMHDULGMRNYGIQLIZSCDIOICXFLXJKLKBNPEXYAKNGXWCMAWUHITIGJJWPBFXYGTQQJPIBTZWNPYGPUHJUOXABTZSLWVFEAOEEXPUNUYERBQGRWCZYOEPRDEMZOUKLVANBDMQROSRHJRSD");

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
    msg.setTimeStamp(0.1263615210616067);
    msg.setSource(6833U);
    msg.setSourceEntity(13U);
    msg.setDestination(61552U);
    msg.setDestinationEntity(198U);
    msg.name.assign("IGCLIXFFDZWODAMEQGPAFXUWZMAFZTOWNDWKKAHMFCTDMCORVMXGIFNSEHJGVSZZWLWNPVNYDBEIKQDNWBSBTCXCQXHIQAMSQGPUJYRPYTXDLSHUQGEACPMJIKABFHMUXWSUPBHURDTIUVYRJVLJCFQHRGGWYQVOJNPTLVYZMOPWLUCBVIABTGNKNJXLKIJIFYDYBOUKYVQRSNLBHOENKHLSZRBMKJXTY");
    msg.attr_type = 33U;
    msg.min.assign("NTUREOIPBVLLXWZLFWSCLNGEZOHPUJKYCIKMKOVOHUITZTZJANQUXQECSLSRKTLJNHKTYWPDYROOYPPBWHFEFVSVDEECVRXCPZCDSEGYXEJGTQRFJPKBGGBUSCSUQASJMKVJQXFHVRDDKVUGDINWBPZENMWBICHHYATIPKAEMDXQAIHFOMBIZLQCNGRASRMGZMASINAKQFUOYIQHVOYUYLJXTRBDWBYMXTAMQZWGDGOU");
    msg.max.assign("YTTQYLKRIFJEHYWJOUPOSBLONQYSYKSJZJVRFTJCFUEHEGBCKCIMKQDVRRCNUTDUXNOQGDXWFRGVCTWALCANEXBXWKLVHYGXASOEMZWCNDUYMVPFUHIAMYIMVIQXIGLRMPFAOGXUTZVMHSJWKS");

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
    msg.setTimeStamp(0.44511850437538525);
    msg.setSource(7250U);
    msg.setSourceEntity(69U);
    msg.setDestination(28887U);
    msg.setDestinationEntity(0U);
    msg.name.assign("SLRLIGGXYDPVUREAANPTAMXSEISHHBEADTWZWPPQUHAFTQIOSOSEUBBDEMYJNQJGKKBMBVRQOLLZDWUMPWIMDRQUYTUPCXQZWSITPNRVRXZPMTRHBOECNKKJNIGDZZUQGFGHYJMARSEZYFYMOEGHLOJSDKLFVJEOFFSFUNCTCBNMJUCSXLKXHKHZXWVKYLCJGVOIQJOQRRPWFVAIEDANYYKOCBFLTZCMVFIGAIGTBWUQPKYDZHX");
    msg.attr_type = 162U;
    msg.min.assign("TYRGPHIUUSPADTUMJQBPLOTQHFVOYRKFGAGCECFDUXORKWEKDQJTSDWKHGQFZBBVRPJXFYJVWDWTCCSHNLAXNETSHWAOMMCANCBZOKXLDDWJIVOGPQYBZITGGLHMDZLN");
    msg.max.assign("XOJIUVZGSUMYDQTGWWRQEIJKHRVJDGSTLJBVJTKHPHVINQBMPRFSAUCESAXIYEUOPMEKXRYAFWMQLVVGVRVULPZCWPGKBFNCLRNUUZNSJYNBMOQIHOKNGXSFCQJPKUAPZUCPHHQQDBASIDRGBOMVBBXVKRETTAQWXESSDALFWMTOGUWZNHHCDIPMEXFYCKZWI");

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
    msg.setTimeStamp(0.8386842049035818);
    msg.setSource(38913U);
    msg.setSourceEntity(165U);
    msg.setDestination(55576U);
    msg.setDestinationEntity(77U);
    msg.timeline.assign("IZOKWZKJVZYTMJBSAIDUEVYHAGRNNGPIQEOBHDPMIRGQAQEBFGJCZWFFPXYAWUNAMLKLTNGUSNIMXQMISTMLUBCKF");
    msg.predicate.assign("TBGVXTKKBZJNSFFALPEQHANYRWMBGHCFSJAAF");

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
    msg.setTimeStamp(0.8526741148050995);
    msg.setSource(51504U);
    msg.setSourceEntity(146U);
    msg.setDestination(27420U);
    msg.setDestinationEntity(185U);
    msg.timeline.assign("OHYPGAOQCIBLGFZVAEVKQSTQXIKUMIIODEK");
    msg.predicate.assign("UQFCWZPSAXWUQQETRLHIITUMRJQXLCGIOAPMXYFQDKLXCIETDVGFDKQLRQRTVUWMFBPSPMFWYENYPRASSNGOXOXBZELYCHTMLBPCCOKXGHMLWWDOFGVVKJJRZMNHBCBSCKNHSBZTFUZNFNXIALKIMAQKYZUEFWETPCJGJNZQGVDRVJZEEKITWYAIRDPCDDNUE");

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
    msg.setTimeStamp(0.06404199354909768);
    msg.setSource(2376U);
    msg.setSourceEntity(140U);
    msg.setDestination(40430U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("DMXDRWJYPDLYOIOJNPTBSQYDBGEBZFLXXJ");
    msg.predicate.assign("UITWQTXSJKOAVYQACTPGKCAXOLZGJIQISHWIVAUFUAQNHCPSMBSTFNJYAFEVHYFXKSLZHBRJIBVHWOCWUVXOBDOINWHHWMUAPPEQRYMLRFYMJLBCVDOTUSOKPEINGTSLXAZERMQCRYLDVDOPNXRQMRGTCUHOENZQMGLWGQRJZ");

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
    msg.setTimeStamp(0.8099326033129872);
    msg.setSource(4506U);
    msg.setSourceEntity(226U);
    msg.setDestination(49908U);
    msg.setDestinationEntity(35U);
    msg.reactor.assign("CKKAPADTYSLYCLMYVTMETDMDI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FJAXWVTPPJVGFAWDRWPNYGBKDSZJUDLCEPCLRJOEGBQGNKZBOCOHJLPPHHLYEQKTDQVCKUVAYQQQJHI");
    tmp_msg_0.predicate.assign("EBIGDYUHRUKLFDXYYLLCFXZDSAYASVHPYIWXQSXFZJGOELBGXQKSBUQYGVGNIRPHCIWDNYXCEQVULDVXCKTGWMVFVDKZBCTHNUAFKOEDWBROQLKNRKZQQMIZADEIOPYKHFWAATTKTLMRPZWPCSOFJSRNHMMEOMJXWSBFNFSEIX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UGIIDJLUCNTCWXTPJYTEFAYDTPYWKXQHVFXICTDEAYHDFEUKJBMWXSSFKHMORCAHYFABBUYOJNIKXSUHCXWIMMGJWRIZYBFXBERQULMYGMEZQEPBNJIODFFTNGSOOCUFPLHPJHKCNWMVOIEOVRNFGIDZAKLSBVESRUXRDKDRNLUEVYLZPKZCJNBZNZQLVDQLPXNTSQWYHSOWZOAGGMBMMQAVKQUTKAWGDJAHSSVPGEZJGPVHCTRXLQ");
    tmp_tmp_msg_0_0.attr_type = 187U;
    tmp_tmp_msg_0_0.min.assign("XHKDBLRMXVPPTJGWANSECHXLJGZBGQNORTBKRYSUQVWMQXEQLUDSIRXQCVJFJGNOLUYCNIMOTABYWCIOUQHGOGWNIFLWHUDIZBNZPKVFKXTPVADOVKMMOYVCEBPARAZPHYWWQUUMGKTDETQXJMKYFJESBUIKMCENMDFODGEHAKEREFXAVSSAVPZOLQICDPTBSJRQTRYFJNFRCXLNAPZTYUZCHOGRWVSZLCITY");
    tmp_tmp_msg_0_0.max.assign("FXTJQQTPCAMFPJEVCWBMZHWQLUUXSYJKVGYCTQFGZIEFKAVNOPZSBNZYCXICQESEUWCSQZXIJFRKEIOXROFSKSISKP");
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
    msg.setTimeStamp(0.38998504413304724);
    msg.setSource(49628U);
    msg.setSourceEntity(35U);
    msg.setDestination(48882U);
    msg.setDestinationEntity(217U);
    msg.reactor.assign("OAGQITRCJLXISOZRATRAYLMGKPPHEXOVBUFZQUBRPJELARFMEVZMPCNDHSZXARCKFEVMVOL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BDVTQQKRKUHQZJGJIMPESWOUSNKXGZRJCXPBPTUFGZLDUAFVFPRDVLIMKHAHXTXRHLYGYEQGKQSIRTNSTDENUNICQEXOHAIMVFKCJLXWVOKWNDMVBYZTCPJVYPUONIRQCMRMYWDCQQPILFTBFMSIYEXISLZJUUPWAAABPLBYLWWGMYVNZGAMEHAKSZEHSCQJAKFCBXRVLUOZOITGFPGDHJKJHDJYEELNCNZZON");
    tmp_msg_0.predicate.assign("TOFRLRBYODYISZZCSSHLDDAUONIA");
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
    msg.setTimeStamp(0.346782494715399);
    msg.setSource(1606U);
    msg.setSourceEntity(13U);
    msg.setDestination(61544U);
    msg.setDestinationEntity(157U);
    msg.reactor.assign("MIKLGITLRKLSCQRRIZUURHTWJSORQXMGDFXFJTRNWJSJYJEWLQFTZNCAIAYYEKSHUMCTZJSBYVVNOSEKPYIOOQHXFBPUHGBNCWVNGPRDRRBKVQETIDMKJZYDXSIVMUVPCIXXUZPOGBWBEBHNWASWPYXDHMELDFJOEVWZCPFGX");

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
    msg.setTimeStamp(0.5158134626140534);
    msg.setSource(60938U);
    msg.setSourceEntity(176U);
    msg.setDestination(1189U);
    msg.setDestinationEntity(209U);
    msg.topic.assign("KFMWNUPYIEBMKHOBMRIJLOXBELLRVYSZCCHTVMSEZRAAPSKNGFIWKFTAEQVVXQDAFZRHBTEFVKUEOHGSSCKYYASGEYCPKYFYBAYGRTHBDFBGNIBXXUGDKTDNWKKFOONLUUDQJNLHHGNJPZIQW");
    msg.data.assign("PBQEYVVRXGVKIBGZQQNAGEDKAQWSDMUJVXTYONZKZIUHNRBBZLBAY");

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
    msg.setTimeStamp(0.7742548854175137);
    msg.setSource(18511U);
    msg.setSourceEntity(56U);
    msg.setDestination(19494U);
    msg.setDestinationEntity(238U);
    msg.topic.assign("RKGAKHDXCHBJXIYIEIWSEVACLKPUYPQTALFVAUUPTUIGBKYYPMXBKQSCTSZBMAZYFXZOOXCLKLERQTWXVJWMPBPAIJNYGSHNNTVSRKGOJUDIJSIYKYRLLTQEFXOUDTQKFACMSVWDXZNZDGDFVOOJPDBCBLFISAACDKNQMLHGXPRVJHBZGWPBLEVYDWPAJQYHFRNGUNZMQUJRFBRFJNIETMWHQOWMHHUEITMOCNFGWZ");
    msg.data.assign("JBVWVVUFTVQRWTAGRRCQXILSZQQXLHMDARNBXPENHTTQCPJMPDYYIKRGUKAODBDCIBGEJJOBAQSUXYLGYEZFKIZSHONUUNEYMHVIVGKQVCRFMJEOFSCWQIWZUBMHODBKEBLLMOPZOKVNJSAJGDGKUSFIUKVSNOOZXYQKTPCSIENHLCPFDAUAHJWYZN");

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
    msg.setTimeStamp(0.329410562341496);
    msg.setSource(29315U);
    msg.setSourceEntity(189U);
    msg.setDestination(13696U);
    msg.setDestinationEntity(63U);
    msg.topic.assign("MQGXDKAMJVAFTFSVAWJKPVQJLXM");
    msg.data.assign("GSZHHGGRWXDVYFKRBMIRABZPH");

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
    msg.setTimeStamp(0.12084636254999115);
    msg.setSource(52234U);
    msg.setSourceEntity(42U);
    msg.setDestination(13333U);
    msg.setDestinationEntity(231U);
    msg.frameid = 179U;
    const char tmp_msg_0[] = {-51, 60, 29, 1, 6, 39, 67, 25, -23, -95, -118, -78, 126, 48, -34, 33, -115, 12, 112, -85, 108, 77, 38, -13, 110, 75, 80, 16, -127, -105, -21, -15, 126, -84, 117, -119, -68, 59, 77, 111, 123, -118, 43, -95, 6, 14, -10, 21};
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
    msg.setTimeStamp(0.12201884951400643);
    msg.setSource(64585U);
    msg.setSourceEntity(245U);
    msg.setDestination(35729U);
    msg.setDestinationEntity(52U);
    msg.frameid = 191U;
    const char tmp_msg_0[] = {80, 43, 118, 38, -71, -61, 104, -103, 101, -83, -51, -25, -121, -6, -68, -72, 95, 57, -128, 45, 77, -107, -117, 92, -70, 105, -51, -107, 21, -108, 83, -55, -54, -86, 112, 53, 27, -34, 87, -30, 1, -18, 102, -54, 70, 82, 28, 104, 7, -25, -109, -4, -4, 65, 54, 84, -117, 71, 95, 69, 2, -72, -87, -74, 23, 13, 19, -95, 114, -117, -23, -67, 15, -8, -106, -109, -7, 48, -110, -83, 36, 29, -2, 63, -67, -22, -103, -28, 106, 19, -51, 99, -109, 10, 51, -101, 15, 42, -55, 81, 98, -85, -35, -38, -99, 107, 28, 106, 22, -29, -3, -36, -107, -97, -28, -3, 72, 65, -9, 6};
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
    msg.setTimeStamp(0.02827011323034656);
    msg.setSource(17832U);
    msg.setSourceEntity(30U);
    msg.setDestination(48201U);
    msg.setDestinationEntity(184U);
    msg.frameid = 149U;
    const char tmp_msg_0[] = {-52, 107, 4, 23, 71, 52, 83, 80, -29, -55, 117, -5, 35, 38, 16, 62, -56, -99, -128, -55, -42, -67, 124, -114, 56, 45, -69, -103, -101, -104, -111, 76, -71, -73, -50, -101, 13, 65, -101, -39, -108, -38, 21, -9, -86, -49, -35, 39, -47, 102, 78, -102, -72, -86, 23, -52, -97, -107, 121, 83, 121, 11, 66, 84, 98, 69, 2, -36, -22, -111, 110, 14, 62, 120, -18, 85, -18, 50, -17, -24, -118, -52, -39, 91, 95, -99, 88, -92, -102, 120, 78, -92, 107, 47, -97, -1, 100, -88, 80, -62, 86, 65, 6, -38, -31, 106, -118, -70, 122, 58, 42, -6, 126, 123, -48, 123, 49, 106, -110, -94, -40, -1, -86, -54, 101, -109, -87, 21, 73, -64, 78, 52, -86, -51, 85, -72, 23, -42, -53, -38, -83, 44, -124, 69, 78, 81, -103, -3};
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
    msg.setTimeStamp(0.9811232504565259);
    msg.setSource(38003U);
    msg.setSourceEntity(76U);
    msg.setDestination(41042U);
    msg.setDestinationEntity(162U);
    msg.fps = 209U;
    msg.quality = 18U;
    msg.reps = 121U;
    msg.tsize = 117U;

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
    msg.setTimeStamp(0.4879850966982562);
    msg.setSource(25030U);
    msg.setSourceEntity(134U);
    msg.setDestination(6442U);
    msg.setDestinationEntity(30U);
    msg.fps = 141U;
    msg.quality = 194U;
    msg.reps = 80U;
    msg.tsize = 169U;

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
    msg.setTimeStamp(0.4260449837061423);
    msg.setSource(62357U);
    msg.setSourceEntity(169U);
    msg.setDestination(62240U);
    msg.setDestinationEntity(3U);
    msg.fps = 232U;
    msg.quality = 40U;
    msg.reps = 13U;
    msg.tsize = 223U;

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
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.8946549978257305);
    msg.setSource(56789U);
    msg.setSourceEntity(93U);
    msg.setDestination(7263U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.9797671072079698);
    msg.setSource(3333U);
    msg.setSourceEntity(83U);
    msg.setDestination(9312U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.3875037272501539);
    msg.setSource(41939U);
    msg.setSourceEntity(159U);
    msg.setDestination(44753U);
    msg.setDestinationEntity(249U);

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
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.6470674533833711);
    msg.setSource(35930U);
    msg.setSourceEntity(34U);
    msg.setDestination(8993U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.034162067503139215;
    msg.lon = 0.9437220637259484;
    msg.z = 0.2901478769212845;
    msg.z_units = 166U;
    msg.radius = 0.5428812295413913;
    msg.duration = 9030U;
    msg.speed = 0.25649257353869936;
    msg.speed_units = 149U;
    msg.popup_period = 64338U;
    msg.popup_duration = 39855U;
    msg.flags = 125U;
    msg.custom.assign("MJGZZPSUWMDLWNPLFHIUAEQHEJPDTMRQNROFMWBS");

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
    msg.setTimeStamp(0.9475182801771619);
    msg.setSource(2044U);
    msg.setSourceEntity(50U);
    msg.setDestination(59621U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.4013112864702233;
    msg.lon = 0.6704690573941494;
    msg.z = 0.9910080222811217;
    msg.z_units = 235U;
    msg.radius = 0.9291010178364802;
    msg.duration = 33581U;
    msg.speed = 0.6479400610952608;
    msg.speed_units = 250U;
    msg.popup_period = 39818U;
    msg.popup_duration = 12950U;
    msg.flags = 163U;
    msg.custom.assign("CIUHMWSYMNPHHTZCVMGZSIJWKOTIVDDEEFOCSPWGTAUNFGLRLROQGPOMPSBSFGCJALWXQNSYHEQFBS");

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
    msg.setTimeStamp(0.96480914542353);
    msg.setSource(16239U);
    msg.setSourceEntity(224U);
    msg.setDestination(29187U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.10475989640776162;
    msg.lon = 0.6704483354707346;
    msg.z = 0.30237582770027427;
    msg.z_units = 139U;
    msg.radius = 0.0756134512907114;
    msg.duration = 61578U;
    msg.speed = 0.899973169704095;
    msg.speed_units = 244U;
    msg.popup_period = 59973U;
    msg.popup_duration = 25696U;
    msg.flags = 76U;
    msg.custom.assign("OLQFXOCGNITYRKVTZQOBHANEUTKCPHRSFTQTZSVXIXTIOGMBINJUMZOSEYVJWFGQAFDXNUWVLFGKZWVSNSUWRYPZTXVVYFHUHAPTPAJBLAQSOQMPKLGHAPKWJLAHKSJVAXDWRDKYWPMEINXEVEHWNYOXOKDCQHUMZBFYDHCLMCPXSSVJGNXUSLPYCCIDBIRBKEZZUQEDIRANMKFNBZLORL");

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
    IMC::RemoteState msg;
    msg.setTimeStamp(0.08752414053596336);
    msg.setSource(27687U);
    msg.setSourceEntity(222U);
    msg.setDestination(52584U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.6920208960040088;
    msg.lon = 0.7194875631128896;
    msg.depth = 15U;
    msg.speed = 0.6695935330549555;
    msg.psi = 0.5655011663481314;

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
    msg.setTimeStamp(0.50769314726769);
    msg.setSource(14420U);
    msg.setSourceEntity(209U);
    msg.setDestination(25853U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.8230137263278648;
    msg.lon = 0.6113838584742023;
    msg.depth = 113U;
    msg.speed = 0.3710793634774897;
    msg.psi = 0.8254514050100084;

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
    msg.setTimeStamp(0.05912442697896603);
    msg.setSource(4204U);
    msg.setSourceEntity(159U);
    msg.setDestination(48369U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.4191794671490905;
    msg.lon = 0.8111365697849504;
    msg.depth = 98U;
    msg.speed = 0.6174993691259717;
    msg.psi = 0.932033327423195;

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
    msg.setTimeStamp(0.9198219271290398);
    msg.setSource(26146U);
    msg.setSourceEntity(4U);
    msg.setDestination(21208U);
    msg.setDestinationEntity(42U);
    msg.label.assign("JXLJCEIOXDOKSESCMWCIYLRQOBYPQP");
    msg.lat = 0.36788551572007255;
    msg.lon = 0.5114618866716654;
    msg.z = 0.6966054488286821;
    msg.z_units = 175U;
    msg.cog = 0.6156106603342505;
    msg.sog = 0.26974817910090554;

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
    msg.setTimeStamp(0.45694444389330213);
    msg.setSource(51414U);
    msg.setSourceEntity(140U);
    msg.setDestination(24752U);
    msg.setDestinationEntity(64U);
    msg.label.assign("NPRFIUBZSESTVJOWCNCELZDACKVKEOOQKSHBNMWXYMQXBLQJHGITPINAPALOUNFUFTHOQYQNHEJZGMTZSNSRRC");
    msg.lat = 0.6792095598083349;
    msg.lon = 0.6028479419414462;
    msg.z = 0.9809703828849465;
    msg.z_units = 134U;
    msg.cog = 0.7143462375393859;
    msg.sog = 0.46134831783695973;

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
    msg.setTimeStamp(0.3926423113264971);
    msg.setSource(64616U);
    msg.setSourceEntity(128U);
    msg.setDestination(56031U);
    msg.setDestinationEntity(56U);
    msg.label.assign("CHIPKFOFFGVOWQLPEAVKMIFOKJIQUDSULHEPSGOJOSDQMSYZYUMXNXJTKEZYIUABWTRKMLQIEJXUBFGNWYIYLZAFBZEXGFYJBUWTSGLVOIUKCQEGUWCKHAAECMCRJZWNNPZXLRMLNZVZCHFRJWUXGNCQNDARSIVAWMPRVVMBHCPBNELTQQSNIPYAQZGHLIVMTDPKFTBXYOYJDJBQHUEKWSVSHPHTCTXELTRGA");
    msg.lat = 0.00411990346640434;
    msg.lon = 0.5322254806481489;
    msg.z = 0.9823746005804183;
    msg.z_units = 16U;
    msg.cog = 0.40822897123318347;
    msg.sog = 0.7440433990686384;

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
    msg.setTimeStamp(0.5026593760578241);
    msg.setSource(40405U);
    msg.setSourceEntity(31U);
    msg.setDestination(7806U);
    msg.setDestinationEntity(85U);
    msg.name.assign("EXKTMHTYDTFIDYBPUZLFEUQQMSWVGHVRFTSIIJCHGLJCZPQOEBVBOTDOQHIGCNQVMPLBACIURHHVWROZTQYCTNCRDAHODGBFKGGKSABBXUXFZVJZQWQANLWKMUAJVFTJRXQSRDPGLUUBYINADXNROZWJNBGEWLSNHJ");
    msg.value.assign("GBKKZGUIVQUBKKPIZSMXFRUHAHNSRGMBFTTJUCTVIFTWPLQDAOTFDQXANVZPXOLSEAAGJQSNYUEJFOWDVWSAVNZYLNHVSJAPXYWRDZQIYTOHXCEVQYCDIEHHPFOCQMTMKYWLLUUEKPXUCADYS");

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
    msg.setTimeStamp(0.19963085153968774);
    msg.setSource(63285U);
    msg.setSourceEntity(158U);
    msg.setDestination(24174U);
    msg.setDestinationEntity(182U);
    msg.name.assign("UTHBCWAAAUEFBYZWZHLUVQDIOCQYGSKNWXQTXQZVZFRFMSUFIXBELUDIVZXPLMQNBKIECXVHSMBHMOIDWXHOSTPRYCEHRUXLWNMJKJLQDDUBBOECHSIYFNSRVVQTMZQTKFJOGNGWGRODNSALALAYJPJVXEPYICGPJTNHDXBWPTAERZRPFJRCAZPDGYSDGAPCNWUIOGPJRYBYSNKRNJLZTOGCMUFBZHSMDLQOCOWWXJH");
    msg.value.assign("LLJYRSVAEKYFIWVPCFPNGQYANPYLAKCHODLHXTKDJVGRBIDTPWQGWDJNIVJDSXLHMSYUSTBVTDUYOGFOTSNZZGZDTBOWYBMNQNXWCMQBERMVZFVCTESDGUFAAESLBELIZRKCTMGHFJRANRKBUEWZOJQFRICJAOCZKVUBJHEWQRBTQCWNOUWVVPRXXPYFYKILWSMKUGQFXCFEPLAOIMECMGAOSZZQGITPHYQHNXNDLXPHUSKOJIHBIHUZAEDMR");

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
    msg.setTimeStamp(0.7520529492626788);
    msg.setSource(15126U);
    msg.setSourceEntity(196U);
    msg.setDestination(8764U);
    msg.setDestinationEntity(104U);
    msg.name.assign("LHPDZHJMNQOMEVYQIGAEEDUABGQZYDOVLLPIKQOCEWZIIXGNIODFTXPPONLNUKFUSTWFWTRXHA");
    msg.value.assign("RSBHLFWPHCVVXZLZRMWOEGEHFVEEDOHSZOIISCYLUPFKIENNZJBUMRBKCJOMJNEDIGUBALLCIZAXMTYXFCQBVSXIWTKWTKMVXOHYFROXKUIPUPKASLFVGGDXTXPICZGTQUXMVZPNMNNZCKTLQZXFLQIJSJFDBEEHDOYSPOMHCTUAOHTPTTQRQZOFBGUYYYEDGDGNDVAPYJCRLNHJWRDHQIJKNKLWKSPSWDQGJMAYNRVEWAWGB");

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
    msg.setTimeStamp(0.1468602882557315);
    msg.setSource(24281U);
    msg.setSourceEntity(177U);
    msg.setDestination(48764U);
    msg.setDestinationEntity(176U);
    msg.name.assign("DHTFRCTSRPWULWMYXQVGLTGOEYEPFZTKXNUYRJQGMRJUBRDBLDOZGELAMNACUBKLNFCHDXQVWBISECHYPHCZGVVUCONNWQYFDDNZZXGJZZRMKTPHEFWIEMMNDTXPAJQHMEZNYXHLJIPFPYJTBACKILJAGVQGQROWCRKGWIUZAOYIRFYKOHBVSZVAQPABITKOO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SGIQYDCPUIJGQQKZBRWSQSQZNOCDWFYNSVCJTSFJCQPYAVPYAOHGYRIBSMTKNLRMEZBRVMSOUOOKDHCGUHPG");
    tmp_msg_0.value.assign("UJFTQOVEIIVMGIZCBCNIPYOOJSYGKDRFEKUVLFNAZPGDGDWRYAHYNPKMCHMQWAOMFSOXDEADELPZNEAHBNICQQESZFZAUIKSYOBKIKIDGXTFVRVEEUNUWWBBERTOXXNZ");
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
    msg.setTimeStamp(0.2696529611270505);
    msg.setSource(11471U);
    msg.setSourceEntity(194U);
    msg.setDestination(3205U);
    msg.setDestinationEntity(216U);
    msg.name.assign("ASULSNMVYAWWTOEWTHLFXOZENUZEZDINJQUXWRHWNIFMQDZBSEJOBPGRKS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OFHKKYTVBMEQNGHBHXLJYLNXPEZETBREADNOMVMAIRU");
    tmp_msg_0.value.assign("NRFYMGVETHGSHPWUMCTTEDICFOABQEMBMVNPJLZWQRZCPCADOJDIFXDHXZMCCZUWJVBDWUIYIKYDXELVXVNFVKSFBLVRUYLQOASGAHFZLQUHHQKGRLTWPYFKSJAMTVMVGAMSANOCJIEQRIGNRHLWFTXEBJQQIWABOBZE");
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
    msg.setTimeStamp(0.4623362204292494);
    msg.setSource(36992U);
    msg.setSourceEntity(16U);
    msg.setDestination(25938U);
    msg.setDestinationEntity(202U);
    msg.name.assign("BXLTFJVPMMTQFKDVXQVOKKYSIKXNGGMAAGFUTWELPHLUAFEPDOMDFVBMXBKHCOKJFSZFGDATAATWEEZCENOAWCRUWVXONPXXSUJPVLVHKJXBDMCZHLTQOSZTLCUFICOIGPINYICWQHLSIWNMGBWQTYLSYYUQRNOLCEGZGHRXPQUREJISMKBFUYIZURFJBABHNDDYTWCGDEJCVRNZQAKRHBYSYYHTRPZPMVSKGZNQSJELRDDZWUONEMRW");

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
    msg.setTimeStamp(0.18161323129996798);
    msg.setSource(1901U);
    msg.setSourceEntity(85U);
    msg.setDestination(47542U);
    msg.setDestinationEntity(108U);
    msg.name.assign("WXVKCGVJFLGXTOPINWCQWGRBPORAKULHHPVZZOJGBVABPQMZXJGQFOHWKRCXHCYUOLMDPSHLOPMFMEXDLOTPNUHMKAMNLITYEZZAILGEBI");
    msg.visibility.assign("MMXJDLFDGNDAQXGUQUNWCQNRTPTSEYEEGBQVZQKHXKIWOOIIVQIECCCDRDZJZDSULBFSAWJXMORJWAMRDGWQMTUXNRTLHEMZBKKBFPJAILTKLUFHBSVNJEBAIMKJXYVTHFEYNPOYWPHMZIYKDHKOHJFHBZAPUGOPAVFGCCWBCVYZKCUGYBTLOKEUUHGAFZNRWALIJRFYZCQXVNIBPTCOSQSRZXLEGVTVOHM");
    msg.scope.assign("NSSEVJVJDYIYQPHEGNADENOFPMHHBDBWEZPQOTKUETGQYHBLCJIMIUAGVJLVUBODXSZZEIDOMUWIWPKMCTLCIZWQBQPXJBYCFSFQRWFYIYCTAQGDEAVSPMBMSSZNUFVJGLOFXKAXNFCZLMRPNHVHURZNRJXKCIHBGGSKEATUVPQZPCQHNATBEZDC");

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
    msg.setTimeStamp(0.515175657965081);
    msg.setSource(22141U);
    msg.setSourceEntity(84U);
    msg.setDestination(26389U);
    msg.setDestinationEntity(92U);
    msg.name.assign("URMYMZWDXYHUWJEAZVPKYDFSMGIMUVWUSEBY");
    msg.visibility.assign("JQAYRIPMGVXUFIJVBGOKBUJPBPHWGSPLMGRKOAUNNDLYMCPSNKTLYKAZOFYCXJHGNQNFCZUMDHICDAFHZYSBSGLWHWVTWBIPWTAOZNSATQDFJGQQIHSZTBVXPYEJCRYZUOEORIGFXJDTVDREATXBRNJJBQISDMONSEKOQXSDZGKMFL");
    msg.scope.assign("SIBZFRWGQKRJTDJAIBCQOBCDVBESDDTHRPMWAZCGSQSMJBNOVSYTDPBCEWJWXTORNUFAUELYIIGQYWLAHTOPQVCKOMEUEFCCZXGPBPKGYXXZLMUILIFGXSNNOYKMXZOKUEWAVAABKWTNEDUUTFYDRYSAHFJGTJELQMGIRJXXBNDSKLLZCSCHQHQQRUVMMKLOZWVWVRNTFUXZUHYJKAGILHEPDFZPZNPXJSHVIREOGFVRFHPHQCONYILMWTKJ");

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
    msg.setTimeStamp(0.7626702051193247);
    msg.setSource(30859U);
    msg.setSourceEntity(29U);
    msg.setDestination(63383U);
    msg.setDestinationEntity(100U);
    msg.name.assign("VGSNMDHHMOJKDBMVEEHTLFDQU");
    msg.visibility.assign("IUGXLQEHTRZFOMCEKKYGSBXMCHIXOFTRTSCJWYKFVTDINBJPTRYQVOWZODWAHESUKTPJHWYCXWYHTQANZBAFDOUCPZUGLWIMPLBZYKCZS");
    msg.scope.assign("OAXSRLUZZWXJFPWYINOHIYTJHNUCAOIHYUWWPNBMXGQMXRWJVTURFEWGVAYVROZCIDBM");

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
    msg.setTimeStamp(0.20497858971706817);
    msg.setSource(43412U);
    msg.setSourceEntity(36U);
    msg.setDestination(27966U);
    msg.setDestinationEntity(185U);
    msg.name.assign("FIZBFIBQVTSTWNQAKVKARTXSHCKKGJWDNCTQCXOMEUHYXSLNLWDUPPBUSARJSNFZUCJTEZLUCRWNDVAEFMJXFTMVIJAOPGZDMOXQFUJHMKYQESADONQWRYCZHVJPIAYZRLKTIKJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VYXKQABWEMMRBHLLSYDJRZKPAZNTTLVMDLLFFRRUYOHWFSMIGPRVOEPIVYCTDPWUPAQXJKIBEODUPGHQYRTBLNENGFMTSAWYWKVUGXUMWKFFOZLUNXNIOZSRMQSKFWODCLAZDCWBFTUIAARTHBCTMCIBGHNSVJMDQOPYRFSFPGJYCJHOVMICZCVXZIEZZAAEILVREXI");
    tmp_msg_0.value.assign("JZUGOHAZAZLAOVYTGAVRCRUTCPRVYQFKIFGPATJLEJFXNGRBWSCCOBPKMKLLXTSEXYSI");
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
    msg.setTimeStamp(0.32855653107607896);
    msg.setSource(43888U);
    msg.setSourceEntity(31U);
    msg.setDestination(42645U);
    msg.setDestinationEntity(138U);
    msg.name.assign("XJTOLLDWAOJQYOAZUBXAUYIWFWTHYCBZJNSHTBDFZMPQUXTNOJWNQTHOTKPJRZEHAXVSCEIOLKGGTCXDRGEBLEWCHGXFSFCKSVOMECZJIHHQDPDMJMKZMPURYMFRCVRPISCZLKIDYMFBEAIKMCUGUHGNAOVTPTVEYRIPWDLWLBLNSNKLBOJQAIGVQEXLBXJXHOKNQSFIGRFQNUAPSEZSRRYTGUIVUCMKDNFQXEPBJN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CIQFDWDVWQESPEHPLTQJMBBJYQBBGIDCVNHHZAWMVEPGUZUTFFMPDNGRKLKJLODTHKSURRLBPVEZAAOOWYQJGJCCNXZDVSGTQYENFSTMORNTNKORRZUQFLGXZSBYMCWDTAFMWGZONTMVQNWSPXLAEKSIYUCECASLOIXCRBSVGARBDNUIOTBPCXUWVHFULYJUHKZYXGDIRAIKOXQIKQEZEPOLVGPLDYWJMKXRKMHFFNPIFVTAHJUEYJ");
    tmp_msg_0.value.assign("VAMTGHYWZGFTXROFKWQFNXNFCNSIVJRILWDVKCUH");
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
    msg.setTimeStamp(0.24755673222302654);
    msg.setSource(51654U);
    msg.setSourceEntity(211U);
    msg.setDestination(12378U);
    msg.setDestinationEntity(251U);
    msg.name.assign("WEHMHWTSHEZTJQGEZXJUKFTYNHEOSMPAKROOUDAPRPGNMJXCLGKJGAUCDSARDRSQJJKUNZNCITSFDKDGSWFZACTRPFBFYXHTYBVQSTMFIRZMFLUNAQWVOFWLVUVTJHJTUVKZQDXSBLUWZM");

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
    msg.setTimeStamp(0.26084520048968096);
    msg.setSource(48007U);
    msg.setSourceEntity(168U);
    msg.setDestination(415U);
    msg.setDestinationEntity(170U);
    msg.name.assign("HXPJIOVGMKMAXYA");

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
    msg.setTimeStamp(0.2282047664398693);
    msg.setSource(42239U);
    msg.setSourceEntity(184U);
    msg.setDestination(7570U);
    msg.setDestinationEntity(27U);
    msg.name.assign("FPTRNYQUPXPSQEHAYBJTCZTCQQYYYTXRUWAIRIFGUWVEMURCNHRVIGSRCSWUNGJWEWZSOUPYKJKEFTFSUXVF");

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
    msg.setTimeStamp(0.5283928170063954);
    msg.setSource(40888U);
    msg.setSourceEntity(126U);
    msg.setDestination(43258U);
    msg.setDestinationEntity(239U);
    msg.name.assign("SPMHOXOGYAOFARIMQTYZCLESBCJUOWKKQLMFVUGVCEWUUTHJCEMVIHHESXPMCQSHJXZJIRATBLGFWCCOYUPQJIRFRAAYVFJBKWWGWGRDDSKOWFMKEYUTNAOPEJTHOTPPPIRGZAVXVABLXYXVWRLZCJDTYIPZZUOLLMZVNZEMQNJXBDSXEZHLNKKDRGGQDACQIMNBDUHRUYTNBIWRCXSGFKDGL");

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
    msg.setTimeStamp(0.5466689719133432);
    msg.setSource(6495U);
    msg.setSourceEntity(68U);
    msg.setDestination(4581U);
    msg.setDestinationEntity(146U);
    msg.timeout = 1085958264U;

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
    msg.setTimeStamp(0.65666631496953);
    msg.setSource(64009U);
    msg.setSourceEntity(64U);
    msg.setDestination(21409U);
    msg.setDestinationEntity(132U);
    msg.timeout = 2548851792U;

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
    msg.setTimeStamp(0.7893957112903585);
    msg.setSource(22960U);
    msg.setSourceEntity(125U);
    msg.setDestination(1663U);
    msg.setDestinationEntity(63U);
    msg.timeout = 3347039829U;

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
    msg.setTimeStamp(0.02099563361056922);
    msg.setSource(17513U);
    msg.setSourceEntity(249U);
    msg.setDestination(63654U);
    msg.setDestinationEntity(241U);
    msg.sessid = 1446349448U;

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
    msg.setTimeStamp(0.424121349201233);
    msg.setSource(36124U);
    msg.setSourceEntity(79U);
    msg.setDestination(10809U);
    msg.setDestinationEntity(112U);
    msg.sessid = 452454704U;

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
    msg.setTimeStamp(0.08925171803920917);
    msg.setSource(40438U);
    msg.setSourceEntity(241U);
    msg.setDestination(952U);
    msg.setDestinationEntity(173U);
    msg.sessid = 930613023U;

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
    msg.setTimeStamp(0.35103081737343067);
    msg.setSource(52513U);
    msg.setSourceEntity(144U);
    msg.setDestination(20996U);
    msg.setDestinationEntity(40U);
    msg.sessid = 3667615321U;
    msg.messages.assign("NNMACFCNLJ");

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
    msg.setTimeStamp(0.7925296939489017);
    msg.setSource(19183U);
    msg.setSourceEntity(60U);
    msg.setDestination(18349U);
    msg.setDestinationEntity(65U);
    msg.sessid = 2169665636U;
    msg.messages.assign("GJTRQHMATTSXAMJIWHRSPXHQHLDOWYEIHCPYWVKBROLRUBMRCOUZRUAMBUEDCFVLAEMUEYAVOPDWDZWJOWBSJZGQTCVXYQEMKPYGLJQGYOCZTDPYJVYHNSZRWXJXUX");

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
    msg.setTimeStamp(0.6924503192927178);
    msg.setSource(13534U);
    msg.setSourceEntity(161U);
    msg.setDestination(38526U);
    msg.setDestinationEntity(153U);
    msg.sessid = 2325844821U;
    msg.messages.assign("QYHFJBVAVRGGLWLFGJSZUQLKRYUSIVEBCV");

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
    msg.setTimeStamp(0.38351362836216585);
    msg.setSource(1346U);
    msg.setSourceEntity(115U);
    msg.setDestination(18472U);
    msg.setDestinationEntity(217U);
    msg.sessid = 1378017211U;

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
    msg.setTimeStamp(0.9243774400836117);
    msg.setSource(46846U);
    msg.setSourceEntity(129U);
    msg.setDestination(41045U);
    msg.setDestinationEntity(205U);
    msg.sessid = 1000847196U;

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
    msg.setTimeStamp(0.1805060517879109);
    msg.setSource(34654U);
    msg.setSourceEntity(144U);
    msg.setDestination(10077U);
    msg.setDestinationEntity(11U);
    msg.sessid = 1474729613U;

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
    msg.setTimeStamp(0.7198319909344242);
    msg.setSource(15426U);
    msg.setSourceEntity(174U);
    msg.setDestination(44419U);
    msg.setDestinationEntity(68U);
    msg.sessid = 2697070304U;
    msg.status = 101U;

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
    msg.setTimeStamp(0.021386404871676645);
    msg.setSource(11717U);
    msg.setSourceEntity(120U);
    msg.setDestination(25502U);
    msg.setDestinationEntity(32U);
    msg.sessid = 3588147709U;
    msg.status = 170U;

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
    msg.setTimeStamp(0.027756756671408422);
    msg.setSource(33041U);
    msg.setSourceEntity(52U);
    msg.setDestination(64820U);
    msg.setDestinationEntity(167U);
    msg.sessid = 845073368U;
    msg.status = 223U;

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
    msg.setTimeStamp(0.1542682526213115);
    msg.setSource(60753U);
    msg.setSourceEntity(192U);
    msg.setDestination(41742U);
    msg.setDestinationEntity(181U);
    msg.name.assign("UCUNTYBBKGHKSPWCDXSMRXNLRRIKBVSKSBLWGDQVIXYHJXZONGVWCFNPZFREIXCCKTOJNZQTCOAUTRYLFDTOVAYBUHGPVDLKNWCJSOIWQWZHZJMQHGGLMWCRAPMFMRJLASVEUTYGTGSOJTLCYAYUJMZRXOPDNAWDDLIFVQQHEPI");

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
    msg.setTimeStamp(0.8293848742197526);
    msg.setSource(38652U);
    msg.setSourceEntity(154U);
    msg.setDestination(11222U);
    msg.setDestinationEntity(141U);
    msg.name.assign("BUZRTDVMZA");

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
    msg.setTimeStamp(0.9977520305120052);
    msg.setSource(5101U);
    msg.setSourceEntity(111U);
    msg.setDestination(62069U);
    msg.setDestinationEntity(66U);
    msg.name.assign("XOPTFGWCGAVRNPPZYBOFHKDXJEKZTXQUKAEHRASFAYMDTJZNVSHKOMAPLSYYFCOKTLNSJUYLE");

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
    msg.setTimeStamp(0.08106902605803368);
    msg.setSource(50422U);
    msg.setSourceEntity(233U);
    msg.setDestination(38241U);
    msg.setDestinationEntity(51U);
    msg.name.assign("UMDSSEFDRDOWXRAVQNQAUOLHXHNEHHQBQAVQLNOQMCDUALMXIXJBPISKLIMUAUSMGVWNLWKHTGJICTRISCKIZDEAHRBUZYJEOGWTREUORBXV");

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
    msg.setTimeStamp(0.6380752932023336);
    msg.setSource(36559U);
    msg.setSourceEntity(248U);
    msg.setDestination(14881U);
    msg.setDestinationEntity(21U);
    msg.name.assign("ZFQPSEYVZIZGOABKYPGIBTSFGSMJMHJGANYFMOBLHWQRDGOFWUTLUKVTWXJWCORNVSRZMKDUPIDVLLGTPOZURRIWOUQWQJBKUQRALVGYLOSAVALSGMJHMFDRODPIPAEEOCEHAXDDYNYXQYZNFVFJNIPDSXXIWLYPSWCXEJINABP");

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
    msg.setTimeStamp(0.9196258721289811);
    msg.setSource(50648U);
    msg.setSourceEntity(137U);
    msg.setDestination(11675U);
    msg.setDestinationEntity(238U);
    msg.name.assign("UHBLTZXGWQLFUHNDMXFVASQEKKOJSOWTGBCBBNRZLWOGJIRIUSKVKQEGKZIIEAMSZHTJRIIGCJPSPMNYQZDVDSVWUPORSIXCOVQTBHXXCMYUQNWTVCZDJPDJYRFCRIQBWFXKECFCDYM");

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
    msg.setTimeStamp(0.22174651270580314);
    msg.setSource(36991U);
    msg.setSourceEntity(163U);
    msg.setDestination(47473U);
    msg.setDestinationEntity(207U);
    msg.type = 226U;
    msg.error.assign("QJQWPNRIDJOEHYOEK");

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
    msg.setTimeStamp(0.1336396367384609);
    msg.setSource(34637U);
    msg.setSourceEntity(111U);
    msg.setDestination(2569U);
    msg.setDestinationEntity(235U);
    msg.type = 58U;
    msg.error.assign("NORYMZZUAAMXYJHNTMJYGEUFJAMQZGBVZSLWDFIPTNOACXZCYVDKESWUKKBFVUHXAPRQNZKHFASOIRDHNNPBIBZLDCHNYONJRLGDRJDQAPBGIUTVGYHM");

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
    msg.setTimeStamp(0.017945870363733962);
    msg.setSource(56393U);
    msg.setSourceEntity(187U);
    msg.setDestination(65264U);
    msg.setDestinationEntity(185U);
    msg.type = 46U;
    msg.error.assign("ICFKZKVQEJVLGUDPHSKYFZWBYZLTNYUBDBWKROSIG");

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
    msg.setTimeStamp(0.6351602234126624);
    msg.setSource(17698U);
    msg.setSourceEntity(149U);
    msg.setDestination(50664U);
    msg.setDestinationEntity(205U);
    msg.seq = 17328U;
    msg.sys_dst.assign("BCLOOEAHWWGRYCSPQUETGZNIKHXBSUHSDSWRTZMLNWOZOHRHNUBCBEFGJQNGTFXKXYZJHXJHIKSFWTZBGOKBZYDJZPDNATKMYYCMMIDVJJRWDAQMDUEWEPRPFFVAUIIDJEXQWHNOVKYAHXXRPMLLYYITDIYTEEMHFMKNLCFLRVXNMWRPBECPC");
    msg.flags = 70U;
    const char tmp_msg_0[] = {75, -30, -8, -45, 64, -69, -25, -31, -83, -29, 85, 105, 110, 97, 31, 15, 55, -102, -124, -55, -94, -91, 88, -41, 79, 68, 98, 114, -27, -41, -1, -53, -115, -87, 40, 49, 57, -92, 114, 79, -75, -127, 29, -108, 98, -85, -72, -84, 24, 80, -18, -119, -106, -94, 19, 67, 29, 18, 91, -118, -112, 24, -100, -71, -60, -5, 56, -3, 46, -86, -108, -28, 53, -62, -27, -117, 53, -117, 111, 49, 55, 88, -128, 51, 9, 90, -38, 40, 104, -88, -14, 29, 56, 109, -99, -64, -20, -46, -8, -117, -28, 68, -79, 70, 94, -7, -89, 70, 71, 7};
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
    msg.setTimeStamp(0.5139302036219604);
    msg.setSource(29246U);
    msg.setSourceEntity(26U);
    msg.setDestination(16658U);
    msg.setDestinationEntity(200U);
    msg.seq = 37070U;
    msg.sys_dst.assign("GYJMALTIIUDGBJMNFYNIXPKGSKXENHOPJDAEMKZXOEWOYEFOHKASDQGCNYNRFUTNVMIIJQJJZLOTSSBXAORWHTBPTPGLDMLNPXTQCCEVKVISGAHSHWNWTXEYABMCADQVGRLKQEZBQQTCSSGWTPYKZXULORVCFUOMBUCVM");
    msg.flags = 78U;
    const char tmp_msg_0[] = {-57, -118, 125, -37, 8, 3, 89, -114, -50, 19, -25, -58, -90, 46, -93, 108, 42, 11, -79, 122, -34, 57, 88, 83, -29, 98, 22, 105, -61, 87, 25, -34, -27, 76, 90, -14, -85, 26, -84, -81, 80, 105, 94, 12, -127, -65, 98, 81, 89, -63, -33, 109, 51, 90, -61, 21, -60, -105, 19, -66, 14, 7, 9, 49, -28, 14, -121, -81, -126, 64, 38, 9, 106, 122, 77, -24, -114, -51, -23, 61, -45, 21, 126, 23, -34, 33, -127, 126, -8, -75, 39, 78, 80, -128, -78, -45, 104, 49, -48, 108, 98, -123, 106, -110, 119, 115, -112, 59, 38, -41, 118, 16, 28, -26, 28, 115, -18, -93, 123, 44, -102, -23, 114, 13, 11, 92, 37, 94, -94, 54, 60, 126, -3, -99, 37, 61, -52, 31, 35, -5, -113, 97, 42, 67, 95, -6, 25, -75, 35, -80, 94, 110, 15, 64, 105, -39, 97, 10, -113, 5, 102, -36, 30, -58, 39, -38, 125, -105, 70, 29, 37, 53, 15, -102, -70, -118, 33, 65, 68, 21, 33, 125, -76, 76, 11, -123, 21, -10, -127, -89, -45, -80, 12, 26, 11, -71, -76, 28, 117, -52, -8, -75, -104, -31, 51, -49, 62};
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
    msg.setTimeStamp(0.417064700445685);
    msg.setSource(9441U);
    msg.setSourceEntity(229U);
    msg.setDestination(28699U);
    msg.setDestinationEntity(241U);
    msg.seq = 15042U;
    msg.sys_dst.assign("AOWVICCLRUAJUJLGBYTLFWDGMQNXLYPWGVXQKVEMLUODQOOGVYHNSQVBEPBPHTMKIJDFCZBIBNSTFXKKTGIZELKOAQWUCTIETIZGJOZDJFESCEADRXBQFMMCNPMUHWRRTRDMXZKTUWAGXOARIRNZBCHHYUFMOFZWTSSGLVFRHCYSQOJ");
    msg.flags = 179U;
    const char tmp_msg_0[] = {44, 83, -79, -10, -70, 28, 50, 61, 113, -95, 45, -41, 88, -121, 57, 32, -103, -125, -22, 66, 14, -94, 11, -95, 16, -118, -95, -45, 56, 104, 55, -107, -118, 2, 47, 77, -11, 85, -37, 27, -6, 108, -40, -117, 97, -41, -42, 4, -101, 105, 75, -66, 4, -87, -82, 12, -73, 77, 30, -62, 58, 95, 41, 106, 60, 73, -44, -103, 78, 126};
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
    msg.setTimeStamp(0.21596489166180444);
    msg.setSource(30426U);
    msg.setSourceEntity(79U);
    msg.setDestination(63959U);
    msg.setDestinationEntity(238U);
    msg.sys_src.assign("TWIBHAGRZHDJVFAIWKSGBUMJJFKUYXIUEONPHVNCZEVHQZVDPNCGCZOUNGTDEHPEIWDRMYFIORODMALSLFLYJAOIFAEGL");
    msg.sys_dst.assign("VSZMMNIGENKIJCSNSNLCDPUYNAUABVYALDOPMABLVTQEVHCIJTXPWUORIRJCRWFVGRBLYD");
    msg.flags = 230U;
    const char tmp_msg_0[] = {-89, 125, -27, 45, -7, -24, -87, -4, -32, -107, 61, 103, 113, 34, 119, -126, -6, 0, -23, -51, 11, -59, -34, 110, -12, -77, 126, -7, 98, 119, -36, 2, -49, 16, 91, 78, 0, -75, 72, -58, 21, 76, -74, 28, -5, -24, -17, 94, -77, -116, -117, -15, -20, -28, -123, -99, 103, 83, -72, -108, 45, 17, 21, 43, -7, -46, -31, -33, -55, -80, 80, 41, -30, 69, 55, 44, 67, -60, -111, -81, -80, -16, 60, -97, 76, 101, -50, 93, -80, 12, -20, 42, -99, 93, -108, 49, 73, -62, -23, 74, -105, -72, -118, 25, 99, -112, -102, -115, -55, 36, 43, 108, 109, 90, 118, -79, 107, 15, 52, 7, -35, 64, -111, 61, 64, 89, -113, 71, -116, 38, -82, 79, -38, -77, -81, -20, -40, 61, -78, -82, -102, 57, -83, -1, -41, 3, 101, 20, 21, -100, -58, -68, -122, -64, -74, 62, 52, 14, 59, -27, -45, -91, -72, 105, -5, -5, 56, 10, -82, -41, -34, 86, 58, -84, 59, 99, 55, 117, 120, -94, 124, 93, -8, 108, 81, 75, -107, 93, -55, -15, -17, -120, -35, -15, 119, -50, -15, 11, 12, -108, 117, -86, 38, 0, 4};
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
    msg.setTimeStamp(0.8734850913093097);
    msg.setSource(45090U);
    msg.setSourceEntity(149U);
    msg.setDestination(58780U);
    msg.setDestinationEntity(120U);
    msg.sys_src.assign("GBGHXEYZCZISPLHMWRUINZXGABWEOTKQWBMVSXXMMERQBKPEUOCOAWIQQDCNSKNAOFWWYJOVGQMXUJYXNRFIHCEYEBPWHXVZPRDEOUFMFPYAXRFLSAJVYKDZWUDHXFADPKTQGLQTKSVSTSNAPHMUTQDFKYQLBHLUBNRDLVHKJORCAYUJSWIOMLPDGJBCLYTVDUTVIZFJHEKSTRNZGJDIZUNMIGGAOXAYPVBPECKCCNIEJINMJCWFQ");
    msg.sys_dst.assign("HYEAIPEQYSMRRWOBOGCKNHGTJACZIHDVSXAGELVBYULWZVNXBRCWLCEGUURQQWUYESKQESATFBKMSKYTFKYPLFFMUINBOICGQDMJHQKQJPOTTPLNHHZQZTECFDJRDSPFJKLRZNYULNOZMWLIMBFHHIYXJGKWLBESIDZSFPHRECUMIXRCMNWZVWXXKGTRLUIJPXTXDXAHRX");
    msg.flags = 108U;
    const char tmp_msg_0[] = {22, 80, -121, 114, 76, -86, 30, -11, 42, -2, -116, 109, 30, 58, 104, 33, 13, -107, 114, 17, 40, 104, 72, -91, -100, 108, -73, 109, -9, 52, 33, -21, 4, -80, 87, 19, 121, 26, 83, -93, -117, -59, -108, -19, -84, 73, 79, -92, 15, -84, -2, 36, 27, -123, -74, 26, 124, 75, 37, -88, 114, -104, -5, -81, -8, 40, 115, -27, 106, -8, -7, 76, 126, 66, -5, -92, -36, 83, 110, -6, -69, -58, -76, -59, 31, -124, -18, -119, 16, 81, 104, -28, -29, -58, -56, 18, 116, -3, -113, -86, 2, -11, -97, 51, -43, -103, -90, 27, -26, 4, -26, 31, -128, 69, -61, 34, -41, 105, -124, -56, 39, 2, 111, -93, 20, 18, 21, -100, -91, 88, 49, 33, -40, 119, 70, 18, -57, -82, -21, -102, -55, 9, -121, 102, -112, 41, -48, -117, 93, -13, 99, -128, -52, -125, 8, -54, -81, 94, 45, -82, -5, 75, -72, -36, 100, 85, 67, -10, 60, 59, 14, 73, 88, 36, 62, -8, -91, -47, 55, 84, -108, -55, -10, 119, 72, -86, 9, 55, 92, -15, -107, -33, 21, 102, -101, 73, -119, 105, -126};
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
    msg.setTimeStamp(0.4688270040641134);
    msg.setSource(18447U);
    msg.setSourceEntity(203U);
    msg.setDestination(3434U);
    msg.setDestinationEntity(237U);
    msg.sys_src.assign("BDZXROJKJTUHVMSOQWAEUICWRIGZFFEYCXTKBELZNJMSMKDWIJXHPSVTESFMUMDRYLFOBOHUWUBDCUXARMBWOECIVCKTPWTVZCQLOGSYVZJVVQJYYFVIZBLCWIXPCEFXPZIYGZKHAAHBGJQONGKSLNVBPDADUXLLHQQQP");
    msg.sys_dst.assign("RGUUQRZSGLGNHXXYKAJBPSHBYEUARFMAJGTVJIVUSDCFZEQKLAQVBMYPNAWKKIRZUMBVBIZSTGJIYJAPHYMEKJFRIHTOXIDCTLOQPEHOPTAMSKSRXUBCRNYPYGBHSBMXLXQBVSZMMQXGTPUJLFYHWTEGKSKWOWOZFFQNI");
    msg.flags = 251U;
    const char tmp_msg_0[] = {-15, 105, 110, -54, 36, 54, -96, 75, -123, 110, 8, 74, -115, -65, 97, 18, -108, 4, -18, -21, -86, -120, 3, 23, -70, -65, -36, -50, 8, -54, 117, -124, 39, -113, 118, 12, -123, -59, -95, 35, -78, -29, -82, 117, -127, 58, 24, 20, -95};
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
    msg.setTimeStamp(0.44675533874325435);
    msg.setSource(63388U);
    msg.setSourceEntity(182U);
    msg.setDestination(3660U);
    msg.setDestinationEntity(47U);
    msg.seq = 46239U;
    msg.value = 186U;
    msg.error.assign("WPUEHYXCHWTRVGWARLVABYQPTPTS");

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
    msg.setTimeStamp(0.3907257182972055);
    msg.setSource(20367U);
    msg.setSourceEntity(214U);
    msg.setDestination(20223U);
    msg.setDestinationEntity(187U);
    msg.seq = 37290U;
    msg.value = 193U;
    msg.error.assign("UXAEWYVGVJPSBXNCXYJMFOOSTRZLNMZCMCYLVIIWQWKGVDLTIJIARGJHGIKLOPKHPSFNKGNAXCFRRRMSTAWYNMWUBPZVODQBKZDEUZUCUMWLFZTXDLPDDSHQFQXJDFYKLWBNARFUQEZYVBAXGOHGBYSIJEQHHRTMHZJZPXYKWNATAJKJSIOGSXTDRQYVCTPGNYEOEOREPPZHIQPNBWVQQOXCUELLFASTVMBLSJUHBMIICUKECTDFMEWDHUCNKR");

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
    msg.setTimeStamp(0.8138170183868603);
    msg.setSource(58231U);
    msg.setSourceEntity(187U);
    msg.setDestination(17609U);
    msg.setDestinationEntity(104U);
    msg.seq = 62168U;
    msg.value = 67U;
    msg.error.assign("DNYCFMFHCTFMWDGEMRCNPLGOBWAQFLUGYSRQAKJTWARJVMXNXALAPXZKKBOTAJDSDVPLZMQYEPIZQGHLMWOQPSMNEHBGYFSUDXUYHINSYYSTIRVEWQRVNBKHGZIUNKRZCWQHHEZLBVIAJRQHBPWMJDOLJFBKEUACWVVG");

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
    msg.setTimeStamp(0.5316686597934673);
    msg.setSource(50817U);
    msg.setSourceEntity(182U);
    msg.setDestination(20310U);
    msg.setDestinationEntity(164U);
    msg.seq = 39689U;
    msg.sys.assign("JKOHXANOAFGIDMIJIOJXRVXCGMEVKYYSTJYIRNZUPIJVCVNSBTLBYWNLOBVACFUOAZWMRWKWEMBZOEVBAGFKDKQEMPTWKLEEFYQGNXJSUSZBBEMZLHQHRPGWOHPGFTQWKHRNDHQQBGVNFEZVRLCAIPCQFFXDCJUTPRVHGRWVCXAACFSSOXWMMYTDAYOQBHOZIMHJLALWSLFTGDYPTZCKDTRQGPMRJQJEUUUYZPUISHPEDDX");
    msg.value = 0.5690882842218888;

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
    msg.setTimeStamp(0.24175704232763806);
    msg.setSource(17649U);
    msg.setSourceEntity(56U);
    msg.setDestination(12026U);
    msg.setDestinationEntity(28U);
    msg.seq = 59373U;
    msg.sys.assign("DKMLSVONWQDSFTIBRGBSLXVKGEGAOTZRALIWKPGEOXSGZATRGHLFJUDVADPXIYHHCERLQYAKVAVRXMCIOJEDCHEWJQTPLHOQILZXFYOLPYWWPWZRHUMFWEIKROWUFBZTFUSSZWTINBOVNUJPHQVMQ");
    msg.value = 0.9974473384264351;

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
    msg.setTimeStamp(0.4590783211555808);
    msg.setSource(51515U);
    msg.setSourceEntity(13U);
    msg.setDestination(16632U);
    msg.setDestinationEntity(126U);
    msg.seq = 12367U;
    msg.sys.assign("AWAJWPGQJYIINOLQWBCPMFGHEMFMKABIQTNICKUVRAPFHXVYCNUUHTRXADQKPCBYDNALFSVRCZGBDONQLTDVSAXCIYNWTVBTPDTMJMXCYLJDSKGYSESPYNKTFQMLLLHEBPUXQEABHURHVMWOGHPMBESIXGYTWZURZFTZEZGEFBOAXUKINCJLZOLSFWZDENXVWXJVHUOJWNKUJCIWUIKPLMSOSVJFQERDQYGKXHSEOTOOGCGRAYRHZIDRVB");
    msg.value = 0.45765866975077796;

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
    msg.setTimeStamp(0.7576785839383622);
    msg.setSource(32050U);
    msg.setSourceEntity(210U);
    msg.setDestination(56050U);
    msg.setDestinationEntity(121U);
    msg.seq = 64585U;
    msg.sys_dst.assign("CLKWKDWDCPIOKKOQIFZMNSVUGGBTQRVZAHSCUOVZSPNGEQGYQHRUUWSZPOSBITEMEJCWCELADTVLVIJXHRALFENPYLEBMXCNJJANHBFQXLYLXZXJSTDHIGYRPBTAYRTRVNGHBNYYUPNPFCSZDAKEBXVCSPWEQDMZCPGOOYNRZODRTYOODZTKRV");
    msg.timeout = 0.6198995481525059;

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
    msg.setTimeStamp(0.3547536007145231);
    msg.setSource(60508U);
    msg.setSourceEntity(17U);
    msg.setDestination(62600U);
    msg.setDestinationEntity(174U);
    msg.seq = 34557U;
    msg.sys_dst.assign("BFXSKYPSBFKUXABAHOWLKPZIZEEOGVTCQYYPYRBYTHUZCMZRVHATINCOUUUSLMPREVJZVWKFPGEVZJBTIHRSMDVFHYTJLVPGQBWCBRGVQJPAHQAELDABMJWMKIKZTYMWWFQDREUCJILCXLNMXDTXFOFNXMQXOGIFJDNYOUSPSNOLTUXEYKAHUTQBONMXRKPRDMWGGSZOLRNCQNZDGREVCIQDSLWEBAGCHWJKAEKLSF");
    msg.timeout = 0.4822211036026599;

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
    msg.setTimeStamp(0.43408631937154796);
    msg.setSource(48600U);
    msg.setSourceEntity(78U);
    msg.setDestination(14030U);
    msg.setDestinationEntity(219U);
    msg.seq = 50539U;
    msg.sys_dst.assign("QJPKOOQTFWPLYLXXEBPKHNKSPRQSIPZTZMYAJEHCMXNEOARBIQDLGRVSSKRRWNTDEYXMCCXQQQJIGCHXMHNPFPVKMNHHTARGYSJWBUEQTWGPTIFFKCCDQUHOETLZBJGOHOGYGYIFYNIFAKZUTOXUMFRUEYVCCSMODZURWJBMZMWIQDLPWGZDZLSNEXFSBEUDELRUKJBWF");
    msg.timeout = 0.8702531277028097;

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
    msg.setTimeStamp(0.0177787732186252);
    msg.setSource(10477U);
    msg.setSourceEntity(105U);
    msg.setDestination(46899U);
    msg.setDestinationEntity(49U);
    msg.action = 48U;
    msg.longain = 0.8647122227447429;
    msg.latgain = 0.4235524668602162;
    msg.bondthick = 3487355297U;
    msg.leadgain = 0.18440084468066642;
    msg.deconflgain = 0.7135300316389935;

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
    msg.setTimeStamp(0.9240232285310791);
    msg.setSource(45682U);
    msg.setSourceEntity(75U);
    msg.setDestination(22136U);
    msg.setDestinationEntity(114U);
    msg.action = 203U;
    msg.longain = 0.7537651141215463;
    msg.latgain = 0.0924453502473781;
    msg.bondthick = 2978934657U;
    msg.leadgain = 0.4404237246837154;
    msg.deconflgain = 0.5119108744459412;

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
    msg.setTimeStamp(0.10297052236536752);
    msg.setSource(27069U);
    msg.setSourceEntity(138U);
    msg.setDestination(65067U);
    msg.setDestinationEntity(37U);
    msg.action = 93U;
    msg.longain = 0.20029595558840207;
    msg.latgain = 0.1741329161369558;
    msg.bondthick = 2124674996U;
    msg.leadgain = 0.6526890298205967;
    msg.deconflgain = 0.35368120426468996;

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
    msg.setTimeStamp(0.24195443915898562);
    msg.setSource(63393U);
    msg.setSourceEntity(174U);
    msg.setDestination(2384U);
    msg.setDestinationEntity(248U);
    msg.err_mean = 0.7512414446591175;
    msg.dist_min_abs = 0.7906452782032809;
    msg.dist_min_mean = 0.430411718796618;

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
    msg.setTimeStamp(0.08934805855994166);
    msg.setSource(34093U);
    msg.setSourceEntity(237U);
    msg.setDestination(63590U);
    msg.setDestinationEntity(139U);
    msg.err_mean = 0.9142211932591991;
    msg.dist_min_abs = 0.25688829970457683;
    msg.dist_min_mean = 0.2967757537711907;

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
    msg.setTimeStamp(0.3201259516358951);
    msg.setSource(2247U);
    msg.setSourceEntity(3U);
    msg.setDestination(55884U);
    msg.setDestinationEntity(102U);
    msg.err_mean = 0.05497463016259996;
    msg.dist_min_abs = 0.14327614626552754;
    msg.dist_min_mean = 0.28400459802455547;

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
    msg.setTimeStamp(0.03194786796531135);
    msg.setSource(20221U);
    msg.setSourceEntity(46U);
    msg.setDestination(41938U);
    msg.setDestinationEntity(161U);
    msg.action = 175U;
    msg.lon_gain = 0.13480102733342048;
    msg.lat_gain = 0.6895596805853973;
    msg.bond_thick = 0.5972862303080921;
    msg.lead_gain = 0.14015196275699826;
    msg.deconfl_gain = 0.27245757331133447;
    msg.accel_switch_gain = 0.3349752658071503;
    msg.safe_dist = 0.3037649513876084;
    msg.deconflict_offset = 0.34343452631457516;
    msg.accel_safe_margin = 0.7462942578887024;
    msg.accel_lim_x = 0.10437605537296613;

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
    msg.setTimeStamp(0.024486998854852726);
    msg.setSource(24730U);
    msg.setSourceEntity(230U);
    msg.setDestination(16336U);
    msg.setDestinationEntity(151U);
    msg.action = 22U;
    msg.lon_gain = 0.6679345934720565;
    msg.lat_gain = 0.10153211567668352;
    msg.bond_thick = 0.8488087532468201;
    msg.lead_gain = 0.9321036062475536;
    msg.deconfl_gain = 0.6628052093365877;
    msg.accel_switch_gain = 0.9768503033487617;
    msg.safe_dist = 0.6684486432497917;
    msg.deconflict_offset = 0.7180179301637231;
    msg.accel_safe_margin = 0.8147386787567793;
    msg.accel_lim_x = 0.9963897041982259;

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
    msg.setTimeStamp(0.19202289722853605);
    msg.setSource(6004U);
    msg.setSourceEntity(137U);
    msg.setDestination(40984U);
    msg.setDestinationEntity(155U);
    msg.action = 30U;
    msg.lon_gain = 0.722455735455283;
    msg.lat_gain = 0.08153274416108014;
    msg.bond_thick = 0.9127893338152048;
    msg.lead_gain = 0.271320678025024;
    msg.deconfl_gain = 0.6117835165851179;
    msg.accel_switch_gain = 0.3913778855747244;
    msg.safe_dist = 0.20168105179928786;
    msg.deconflict_offset = 0.749215852534912;
    msg.accel_safe_margin = 0.8434565198973621;
    msg.accel_lim_x = 0.9908530552593688;

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
    msg.setTimeStamp(0.5892962144217879);
    msg.setSource(63156U);
    msg.setSourceEntity(139U);
    msg.setDestination(29996U);
    msg.setDestinationEntity(24U);
    msg.type = 122U;
    msg.op = 170U;
    msg.err_mean = 0.9692449920154503;
    msg.dist_min_abs = 0.4151398432026332;
    msg.dist_min_mean = 0.5922239424955311;
    msg.roll_rate_mean = 0.5589231391485008;
    msg.time = 0.6811956504267758;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 146U;
    tmp_msg_0.lon_gain = 0.1459602313632995;
    tmp_msg_0.lat_gain = 0.23411210774910307;
    tmp_msg_0.bond_thick = 0.193295448294323;
    tmp_msg_0.lead_gain = 0.9343322246510715;
    tmp_msg_0.deconfl_gain = 0.9212574480830501;
    tmp_msg_0.accel_switch_gain = 0.6021989457398058;
    tmp_msg_0.safe_dist = 0.04274620983780031;
    tmp_msg_0.deconflict_offset = 0.7149488465394355;
    tmp_msg_0.accel_safe_margin = 0.2726878083504479;
    tmp_msg_0.accel_lim_x = 0.14117501616482242;
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
    msg.setTimeStamp(0.18060809658514587);
    msg.setSource(23357U);
    msg.setSourceEntity(29U);
    msg.setDestination(9602U);
    msg.setDestinationEntity(245U);
    msg.type = 98U;
    msg.op = 21U;
    msg.err_mean = 0.9801228021620186;
    msg.dist_min_abs = 0.6697920906042925;
    msg.dist_min_mean = 0.15076576464428804;
    msg.roll_rate_mean = 0.08339486918499539;
    msg.time = 0.9062703864407856;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 180U;
    tmp_msg_0.lon_gain = 0.26610463012470675;
    tmp_msg_0.lat_gain = 0.05500210282341278;
    tmp_msg_0.bond_thick = 0.14071413410195743;
    tmp_msg_0.lead_gain = 0.7309125176090269;
    tmp_msg_0.deconfl_gain = 0.19029467476173312;
    tmp_msg_0.accel_switch_gain = 0.31073086793935223;
    tmp_msg_0.safe_dist = 0.4571174859585093;
    tmp_msg_0.deconflict_offset = 0.00881329587188251;
    tmp_msg_0.accel_safe_margin = 0.4571242236311306;
    tmp_msg_0.accel_lim_x = 0.15360706441905825;
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
    msg.setTimeStamp(0.9547928073322972);
    msg.setSource(10818U);
    msg.setSourceEntity(232U);
    msg.setDestination(64852U);
    msg.setDestinationEntity(54U);
    msg.type = 152U;
    msg.op = 16U;
    msg.err_mean = 0.40967683844961245;
    msg.dist_min_abs = 0.26420376953370805;
    msg.dist_min_mean = 0.9508240097034983;
    msg.roll_rate_mean = 0.04277982179876316;
    msg.time = 0.9310381480374857;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 97U;
    tmp_msg_0.lon_gain = 0.5971967017954284;
    tmp_msg_0.lat_gain = 0.5996549265863419;
    tmp_msg_0.bond_thick = 0.7221102360507172;
    tmp_msg_0.lead_gain = 0.4087095870941121;
    tmp_msg_0.deconfl_gain = 0.7730796620288425;
    tmp_msg_0.accel_switch_gain = 0.41757719582601605;
    tmp_msg_0.safe_dist = 0.49252527354125963;
    tmp_msg_0.deconflict_offset = 0.8861083123647711;
    tmp_msg_0.accel_safe_margin = 0.636968673537385;
    tmp_msg_0.accel_lim_x = 0.3847806092060295;
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
    msg.setTimeStamp(0.7917897551842324);
    msg.setSource(56011U);
    msg.setSourceEntity(215U);
    msg.setDestination(41752U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.6886234125573181;
    msg.lon = 0.43630584769271397;
    msg.eta = 656322984U;
    msg.duration = 56051U;

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
    msg.setTimeStamp(0.587788519616998);
    msg.setSource(62474U);
    msg.setSourceEntity(14U);
    msg.setDestination(39837U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.9561268121198191;
    msg.lon = 0.8798113350045493;
    msg.eta = 3899609340U;
    msg.duration = 38527U;

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
    msg.setTimeStamp(0.9353058375460997);
    msg.setSource(4034U);
    msg.setSourceEntity(40U);
    msg.setDestination(43388U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.24571551725291552;
    msg.lon = 0.7930386507795254;
    msg.eta = 947790060U;
    msg.duration = 40054U;

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
    msg.setTimeStamp(0.16422688433572208);
    msg.setSource(27759U);
    msg.setSourceEntity(56U);
    msg.setDestination(54151U);
    msg.setDestinationEntity(31U);
    msg.plan_id = 5440U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.15602198251132704;
    tmp_msg_0.lon = 0.656853523637294;
    tmp_msg_0.eta = 1521383693U;
    tmp_msg_0.duration = 16794U;
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
    msg.setTimeStamp(0.8583781873109902);
    msg.setSource(3634U);
    msg.setSourceEntity(118U);
    msg.setDestination(36268U);
    msg.setDestinationEntity(79U);
    msg.plan_id = 45390U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9272873879338897;
    tmp_msg_0.lon = 0.317215922421498;
    tmp_msg_0.eta = 4097323307U;
    tmp_msg_0.duration = 2801U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.48766546604714456);
    msg.setSource(33488U);
    msg.setSourceEntity(145U);
    msg.setDestination(47969U);
    msg.setDestinationEntity(24U);
    msg.plan_id = 49621U;

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
    msg.setTimeStamp(0.5410033566501006);
    msg.setSource(6752U);
    msg.setSourceEntity(91U);
    msg.setDestination(6306U);
    msg.setDestinationEntity(202U);
    msg.type = 64U;
    msg.command = 62U;
    msg.settings.assign("HISQSEYNOMCTBDTPRGEYVDPLHPUZWQQNTDZNKHALXQFGRJFTXIYDUMNBIXJCKMMJKCSXDWXLVUGVCSQOZEMNKVYBGVDRJEZVEFYNEAGUMDMAWDRHKPXKOASCDZLBHWIN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5562U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WNSMWUFYFFTSWUZCYIIGQMDFIGWMDOPHIERVPOJMEFLUODYUSBOGBCQYXTYSRZGOAOLYGWTMYZFOZWSAVMAKHGHLBNGSVQZBEGVKBSPUXEJJHRRMTILFVCMHSWIWUXZBRBXLDFAO");

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
    msg.setTimeStamp(0.22059227362401734);
    msg.setSource(7637U);
    msg.setSourceEntity(75U);
    msg.setDestination(21843U);
    msg.setDestinationEntity(111U);
    msg.type = 83U;
    msg.command = 152U;
    msg.settings.assign("BMFVGZNOOSQDBAEVLIPOGKPOZVRDMFQKHPQDRWIARZXBWQICXKAZKZPCHAESCWHWHQLLWXOPJLAZTCYMHULMNJZMBACFJAVTZHSTVTUVLNMLWUFBYXTLVFUIEBOODUNFYMYVSHRKWQURGYRYOTJDXEOOACBHCRFDAKCTCWRPUTJKNEEJEQDSUCXSJADEUBNXSMPGSUKYZSWXKHWJRLGFIKXJTDPYYSQTNZEBGPMIFHNGBVERIJNLDIQN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 37407U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.46977404513741106;
    tmp_tmp_msg_0_0.lon = 0.48537096391366785;
    tmp_tmp_msg_0_0.eta = 2938751404U;
    tmp_tmp_msg_0_0.duration = 53783U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DAMRTSYPTXYICQQSOQRWPQTPTWGHLGOVKLBFHBWXMZBZLFZNVSOMBGYQPSUBEKVICNGXITBODJEMDUACIKFAPKRXLLWRTNXUXIKVISABFLMJHGJQZ");

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
    msg.setTimeStamp(0.43826894232013003);
    msg.setSource(5336U);
    msg.setSourceEntity(194U);
    msg.setDestination(46256U);
    msg.setDestinationEntity(31U);
    msg.type = 11U;
    msg.command = 253U;
    msg.settings.assign("VCNLNZJFGQQPDGLUXZTDPZUUIEBZDPQVOKWMNMZKNTJQIJDAOHNIOBBXIDKHIFKERCMPTRROZTKGBAOUHNQCIINNXFCTNJJLZPYPQLEVSHLESRLO");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 31320U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3553889884399847;
    tmp_tmp_msg_0_0.lon = 0.9016042549838127;
    tmp_tmp_msg_0_0.eta = 4291570564U;
    tmp_tmp_msg_0_0.duration = 51939U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DIPZIOLAONWYHFBXEHFOMEJMASMVIXGGVVAORKDVFOZQSARPGJMQWDYUSPJLQYKMBEPTICLMJWKOYVAFBDNBDTOPRHXWEQSSUT");

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
    msg.setTimeStamp(0.9610046039579269);
    msg.setSource(844U);
    msg.setSourceEntity(108U);
    msg.setDestination(9715U);
    msg.setDestinationEntity(164U);
    msg.state = 62U;
    msg.plan_id = 22661U;
    msg.wpt_id = 7U;
    msg.settings_chk = 52240U;

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
    msg.setTimeStamp(0.37361223847635827);
    msg.setSource(20033U);
    msg.setSourceEntity(232U);
    msg.setDestination(29772U);
    msg.setDestinationEntity(96U);
    msg.state = 204U;
    msg.plan_id = 63151U;
    msg.wpt_id = 179U;
    msg.settings_chk = 27477U;

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
    msg.setTimeStamp(0.5964886573167285);
    msg.setSource(14042U);
    msg.setSourceEntity(230U);
    msg.setDestination(27033U);
    msg.setDestinationEntity(84U);
    msg.state = 19U;
    msg.plan_id = 2802U;
    msg.wpt_id = 214U;
    msg.settings_chk = 9686U;

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
    msg.setTimeStamp(0.3199637480124957);
    msg.setSource(37363U);
    msg.setSourceEntity(163U);
    msg.setDestination(62093U);
    msg.setDestinationEntity(78U);
    msg.uid = 220U;
    msg.frag_number = 8U;
    msg.num_frags = 33U;
    const char tmp_msg_0[] = {-112, 108, -66, 102, -61, 50, -43, 36, -89, 33, -18, 79, -34, -62, 4, 56, -77, -92, -90, 112, -9, -98, 30, -15, -78, -63, -39, 36, 94, -63, -65, 114, -76, 121, -71, -11, -85, 64, 55, -8, -123, -51, -16, -7, 80, -37, 87, -11, -27, -57, -58, -15, 72, -70, -127, -49, 28, 73, -19, 76, -44, 114, 34, 61, 14, -66, 19, 25, -103, -20, -3, -13, 126, 3, -51, 50, -79, 124, 86, 101, 51, -64, 92, 36, -23, 55, -85, 54, -37, 120, -72, 6, -62};
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
    msg.setTimeStamp(0.44728025473306987);
    msg.setSource(2060U);
    msg.setSourceEntity(128U);
    msg.setDestination(19858U);
    msg.setDestinationEntity(32U);
    msg.uid = 150U;
    msg.frag_number = 91U;
    msg.num_frags = 233U;
    const char tmp_msg_0[] = {66, -70, 6, -26, -118, -100, -15, 109, 90, -96, -69, 0, 35, 86, -95, 54, 104, -9, -112, -115, -73, -70, -94, 124};
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
    msg.setTimeStamp(0.8340702929306335);
    msg.setSource(10819U);
    msg.setSourceEntity(192U);
    msg.setDestination(47537U);
    msg.setDestinationEntity(139U);
    msg.uid = 145U;
    msg.frag_number = 168U;
    msg.num_frags = 224U;
    const char tmp_msg_0[] = {60, 62, -49, 118, 18, -102, -32, 105, 46, 66};
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
    msg.setTimeStamp(0.5191157115944888);
    msg.setSource(58735U);
    msg.setSourceEntity(199U);
    msg.setDestination(29815U);
    msg.setDestinationEntity(118U);
    msg.content_type.assign("QGKOMVWUODQAKSFJKASNVYSYLTZNQIVRVGBAPQOSP");
    const char tmp_msg_0[] = {71, 21, -35, 25, 103, -44, 101, -56, -17, -42, 24, -17, -71, -111, 41, -83, -122, -16, 88, 14, -35, -1, -65, 97, 78, -121, 2, -80, -8, -87, 24, -113, -96, 63, -81, -36, 9, 117, 0, -19, -128, 94, 103, -38, 78, 61, -6, 42, 24, -4, -43, 94, -88, 41, 37, -31, -75, 109, 28, -81, -81, 50, -38, 113, 12, -79, -23, -7, -6, -68, -3, -37, 126, -54, -58, 86, -80, -63, -93, -30, -45, -52, 58, 18, -73, 79, 59, 59, -118, 124, -48, -1, 3, -34, -116, 6, -95, -34, 72, 94, -63, 96, -5, -56, 26, 10, 60, -5, -116, -106, -50, -112, 20, 66, -97, -104, 88, -108, 104, -35, 124, 95, 26, 52, 100, -71, -3, 35, -102, 125, 51, 12, 1, -53, -115, -62, 108, 119, 4, -20, 26, -46, 1, 112, 10, -47, -35, 22, -110, -38, 21, 83, -8, 95, -24, -90, 38, 114, -31, 118, -40, 74, -43, -25, -30, -19, -12};
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
    msg.setTimeStamp(0.5446913114768341);
    msg.setSource(48666U);
    msg.setSourceEntity(180U);
    msg.setDestination(63753U);
    msg.setDestinationEntity(1U);
    msg.content_type.assign("QNVCLPYLIOIGBYKWMLHOQYOBXYEGGWXQQNMRNDNJJIAUNVQAATRORNROZBWRVMVXDRFZTLYZQZOJGCTCYPBDU");
    const char tmp_msg_0[] = {-53, -92, 46, -26, 39, 22, -116, -34, -119, -49, 123, -119, 73, 12};
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
    msg.setTimeStamp(0.3235821087690378);
    msg.setSource(40330U);
    msg.setSourceEntity(103U);
    msg.setDestination(404U);
    msg.setDestinationEntity(59U);
    msg.content_type.assign("OQUXEKMHDNFHHUUVKQETJXQSOFTYSBULJZCEGVMNYTLKWLCWFDXZKDMFXLYEMOPYYPRLIOINULITCGWQGIWGUADIGTYEZTPZKXRXYJATTTJXELJRIFRPAPWNWQBFWCPHUCTD");
    const char tmp_msg_0[] = {59, -30, -82, -90, -102, 16, -13, 69, 22, -115, 60, 0, 70, -77, -90, 73, 4, -6, -73, -61, 19, -6, 51, -29, 91, 87, -13, 87, -52, -103, -128, 103, -6, 17, 121, 112, 24, -100, 104, 55, -111, -25, -14, -2, -53, -39, 121, -67, 63, 110, 27, 110, 101, 116, -33, -7, -98, -100, -99, 22, -77, 25, 93, 57, -126, 46, 63, 33, 92, -24, -85, -86, -101, 77, 35, 70, 4, -112, -32, -57, -103, -28, 93, 24, 80, -67, 46, -111, 115, -44, 13, -81, -74, 25, 74, -22, 0, -19, -128, -69, 81, -83, -26, -49, 22, 23, 117, -114, 90, 102, 67, 115, -97, 32, 11, 122, 94, 20, -106, 113, 28, 76, 42, 110, -52, -14, 86, 17, 99, -40, -68, 48, 37, -64, 106, -96, -84, 108, -30, -98, 33, 67, -77, 80, -4, 2, -104, -3, 14, 85, 74, 86, 67, 62, -60, -30, -18, 15, 72, -47, -111, 95, 18, 85, -65, 48, 16, 27, -93, -28, 96, -64, 10, 45, -97, 107, 124, 30, -24, 20, 0, 16, 121, 112, 114, 53, -25, 113, -22, -84, 89, -68, 110, 20, -126, -45, 35, 63, 55, 43, -104, -104, 32, 106, -63, -112, -37, 113, -69, 104, 66, 104, -48, 94, -114, -59, -37, 95, -44, -7, -91, -33, -75, -10, 57, 8, -97, 118, 79, -110, -84, 109, -87, 111, -39, 36, -79, -87, -105, 46, -77, 93, -70, 78, 87, -97, 105, 4, 99, -17, 1, 59, -38, -50};
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
    msg.setTimeStamp(0.6721639198833376);
    msg.setSource(33095U);
    msg.setSourceEntity(241U);
    msg.setDestination(16730U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.07856675292120263);
    msg.setSource(62836U);
    msg.setSourceEntity(56U);
    msg.setDestination(41677U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.8239883933271727);
    msg.setSource(32954U);
    msg.setSourceEntity(56U);
    msg.setDestination(4592U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.4147730768196942);
    msg.setSource(48428U);
    msg.setSourceEntity(99U);
    msg.setDestination(28669U);
    msg.setDestinationEntity(63U);
    msg.target = 56185U;
    msg.bearing = 0.7551440307315388;
    msg.elevation = 0.46579661621701574;

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
    msg.setTimeStamp(0.9171744947440421);
    msg.setSource(9166U);
    msg.setSourceEntity(2U);
    msg.setDestination(12869U);
    msg.setDestinationEntity(142U);
    msg.target = 2544U;
    msg.bearing = 0.7589447900047015;
    msg.elevation = 0.48017331972029165;

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
    msg.setTimeStamp(0.950114111241161);
    msg.setSource(9222U);
    msg.setSourceEntity(250U);
    msg.setDestination(16654U);
    msg.setDestinationEntity(253U);
    msg.target = 2062U;
    msg.bearing = 0.29644594617298603;
    msg.elevation = 0.15655124573287194;

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
    msg.setTimeStamp(0.09102142859544349);
    msg.setSource(29640U);
    msg.setSourceEntity(221U);
    msg.setDestination(10018U);
    msg.setDestinationEntity(26U);
    msg.target = 4941U;
    msg.x = 0.45002037041386667;
    msg.y = 0.707097237888376;
    msg.z = 0.6935222446010098;

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
    msg.setTimeStamp(0.5194387385912472);
    msg.setSource(41179U);
    msg.setSourceEntity(127U);
    msg.setDestination(8260U);
    msg.setDestinationEntity(43U);
    msg.target = 14205U;
    msg.x = 0.23642949485815157;
    msg.y = 0.39806021743160735;
    msg.z = 0.20721828416465438;

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
    msg.setTimeStamp(0.3655616734558119);
    msg.setSource(24242U);
    msg.setSourceEntity(27U);
    msg.setDestination(830U);
    msg.setDestinationEntity(60U);
    msg.target = 10142U;
    msg.x = 0.31518275046301947;
    msg.y = 0.20916564036275742;
    msg.z = 0.7244121253793505;

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
    msg.setTimeStamp(0.20509358345339657);
    msg.setSource(46217U);
    msg.setSourceEntity(181U);
    msg.setDestination(7907U);
    msg.setDestinationEntity(27U);
    msg.target = 29480U;
    msg.lat = 0.31479958420739373;
    msg.lon = 0.8816610889575317;
    msg.z_units = 20U;
    msg.z = 0.6333011899399147;

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
    msg.setTimeStamp(0.2016466912228997);
    msg.setSource(18339U);
    msg.setSourceEntity(176U);
    msg.setDestination(55773U);
    msg.setDestinationEntity(104U);
    msg.target = 48990U;
    msg.lat = 0.5308046066054384;
    msg.lon = 0.25775072747080485;
    msg.z_units = 184U;
    msg.z = 0.26824857792747603;

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
    msg.setTimeStamp(0.37785416754947465);
    msg.setSource(2204U);
    msg.setSourceEntity(147U);
    msg.setDestination(24900U);
    msg.setDestinationEntity(151U);
    msg.target = 15287U;
    msg.lat = 0.9959548763378282;
    msg.lon = 0.7930614800307484;
    msg.z_units = 51U;
    msg.z = 0.910367419531564;

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
    msg.setTimeStamp(0.6513377798563046);
    msg.setSource(57503U);
    msg.setSourceEntity(152U);
    msg.setDestination(62616U);
    msg.setDestinationEntity(142U);
    msg.locale.assign("OGEPORTMGUOZYFDJISOKCFGBQRMWAEQJLHVEUCTJTKEKDOBFHHKKTVYBPDXSFCEKIXLYK");
    const char tmp_msg_0[] = {-8, 115, 63, 57, -14, -60, 54, 81, 113, -55, 91, -96, 59, 68, 69, -81, 100, -122, 50, 92, -97, 40, 120, 106, -98, 90, -116, 88, -45, -28, -50, -86, 22, 85, -94, -73, -12, 12, 6, -41, 96, -26, -78, 90, -63, -14, -32, -61, 112, -126, -29, 108, 101, -57, 24, -13, -71, -59, -95, 75, -84, -84, -20, -115, -37, -115, -56, -5, 84, 110, 34, 31, -16, 116, 81, -53, 62, 22, 1, -3, -95, 34, -48, 121, -90, 92, 66, 11, 92, -32, 61, 108, 26, 52, -15, 121, -90, -42, -125, -3, -22, 74, -62, -91, 60, 92, -44, -76, 105, -37, -88, -127, 64, -19, -37, -7, 114, -24, 53, -6, -56, -48, -68, -71, 15, 88, 12, 45, 62, -13};
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
    msg.setTimeStamp(0.31106583353452655);
    msg.setSource(53841U);
    msg.setSourceEntity(227U);
    msg.setDestination(23813U);
    msg.setDestinationEntity(94U);
    msg.locale.assign("SODKOKIIFFZXHLHFHNWVKAPCUOQBBLISFWJMRFKYUVARCKLZUDUJABWDBCFFTXGNTFSWRPANYPBKFAENEDDMNDQWCDIQHUEGWYYRSRVMEJXOCJMGHAAQNZXGQLVSEMDONQBRBXBMSWRRMGYPAGPMUGKIZLUSETBLOQJRKPNZPMSXIOCDWCGXCKZXFTMVIZUVVPEYNVXVEYBTEICHALUTQOWZQGSQIZPZPRENHTXYATKJSWLLJYOHHTCLT");
    const char tmp_msg_0[] = {123, -86, 118, -78, 104, -56, -94, 40, 14, -94, 120, -35, -65, -97, -113, -71, -55, 4, -26, -49, -70, -22, -77, 53, 47, 119, 46, -100, 23, -108, 16, -21, 0, 92, 66, -105, 90, 99, 95, 49, -89, 12, -40, -80, 42, -91, 107, -108, 106, 37, -76, -119, 115, 95, 19, 3, -81, 59, 50, 60, 62, 40, 10, 36, -32, 110, -126, -106, 47, 72, -32, -60, -39, 26, -55, 19, 55, 60, 41, 81, 121, -56, -110, -123, -82, 118, -5, 61, 16, -10, -116, -82, -107, 106, -80, 27, 43, 119, 37, -84, -113, -85};
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
    msg.setTimeStamp(0.3183373170899638);
    msg.setSource(18502U);
    msg.setSourceEntity(45U);
    msg.setDestination(14087U);
    msg.setDestinationEntity(24U);
    msg.locale.assign("PETBHJBREKULFUALFSVFANGRJDLWQUSXGNQYCEIZEPIWNCYKLTAXKHOLGVCXJMYAOTIUZZLGIIVJHDJFPSACRMHQDBEHOVORNXNOAIEFKZOYWXCGFYZSDVSHZYSXGISQJZRUQSTLHMRASTCMXJQUZKUAIKITBCMVDBCEKYKWVMLXPDJWPQDEPHPPSBYHVGNNIFOMLQGYMJPAGMCZOLKWFBEXDBNCWTTDFDBYUOVHQRF");
    const char tmp_msg_0[] = {-49, 92, -44, -56, 123, 0, 97, 91, -42, -35, -17, 56, -22, -36, -26, 41, -1, 20, 18, -19, 93, -4, -95, -83, 55, -101, -99, 110, -17, 73, -97, 26, 116, -38, 20, 126, -29, -95, -71, 61, 107, -100, -102, 69, 102, 85, -85, -128, -23, 126, 49, 115, -68, 57, -8, 63, 11, -8, -40, -8, -25, 89, -37, 16, 23, -86, -23, 62, 33, -87, 36, -2, -54, 94, 18, 71, 14, 38, 74, 114, 80, 103, -68, -50, 26, -64, -121, -28, 109, -117, 20};
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
    msg.setTimeStamp(0.2461120146609268);
    msg.setSource(54557U);
    msg.setSourceEntity(0U);
    msg.setDestination(28545U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.20305119016957884);
    msg.setSource(17627U);
    msg.setSourceEntity(119U);
    msg.setDestination(42769U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.17487612435134214);
    msg.setSource(48532U);
    msg.setSourceEntity(139U);
    msg.setDestination(1358U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.3982012491890047);
    msg.setSource(40934U);
    msg.setSourceEntity(141U);
    msg.setDestination(31445U);
    msg.setDestinationEntity(198U);
    msg.camid = 244U;
    msg.x = 39514U;
    msg.y = 42376U;

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
    msg.setTimeStamp(0.021036080881308372);
    msg.setSource(64212U);
    msg.setSourceEntity(125U);
    msg.setDestination(32102U);
    msg.setDestinationEntity(232U);
    msg.camid = 229U;
    msg.x = 63349U;
    msg.y = 53357U;

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
    msg.setTimeStamp(0.7293108516425344);
    msg.setSource(25956U);
    msg.setSourceEntity(175U);
    msg.setDestination(49497U);
    msg.setDestinationEntity(216U);
    msg.camid = 204U;
    msg.x = 45061U;
    msg.y = 43737U;

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
    msg.setTimeStamp(0.7455701590310319);
    msg.setSource(52074U);
    msg.setSourceEntity(233U);
    msg.setDestination(50130U);
    msg.setDestinationEntity(138U);
    msg.camid = 154U;
    msg.x = 27475U;
    msg.y = 49513U;

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
    msg.setTimeStamp(0.8934946061702005);
    msg.setSource(23627U);
    msg.setSourceEntity(239U);
    msg.setDestination(9266U);
    msg.setDestinationEntity(208U);
    msg.camid = 161U;
    msg.x = 39966U;
    msg.y = 30605U;

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
    msg.setTimeStamp(0.49656631567082177);
    msg.setSource(34270U);
    msg.setSourceEntity(61U);
    msg.setDestination(16337U);
    msg.setDestinationEntity(127U);
    msg.camid = 34U;
    msg.x = 31579U;
    msg.y = 51876U;

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
    msg.setTimeStamp(0.8626108978363198);
    msg.setSource(3026U);
    msg.setSourceEntity(155U);
    msg.setDestination(11493U);
    msg.setDestinationEntity(199U);
    msg.tracking = 82U;
    msg.lat = 0.8040224694845184;
    msg.lon = 0.36119445055011723;
    msg.x = 0.4850744531906521;
    msg.y = 0.18053495614363468;
    msg.z = 0.5832791501695475;

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
    msg.setTimeStamp(0.5025079222400652);
    msg.setSource(46181U);
    msg.setSourceEntity(107U);
    msg.setDestination(31183U);
    msg.setDestinationEntity(252U);
    msg.tracking = 77U;
    msg.lat = 0.41161109467795387;
    msg.lon = 0.8746984483400635;
    msg.x = 0.3528976290575456;
    msg.y = 0.15720166099006605;
    msg.z = 0.05909697856598284;

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
    msg.setTimeStamp(0.3843589735461125);
    msg.setSource(30200U);
    msg.setSourceEntity(135U);
    msg.setDestination(27643U);
    msg.setDestinationEntity(147U);
    msg.tracking = 246U;
    msg.lat = 0.7066682811499709;
    msg.lon = 0.7460854571626528;
    msg.x = 0.11308476068359907;
    msg.y = 0.1293966082159025;
    msg.z = 0.3841112535704091;

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
    msg.setTimeStamp(0.5594819370761951);
    msg.setSource(2221U);
    msg.setSourceEntity(121U);
    msg.setDestination(32933U);
    msg.setDestinationEntity(226U);
    msg.target.assign("HCEPYVYYATFANOXZKVOWZIEMAFUHYKZJMWDFGWUGTRKUNCGDMVWNAZXHOHVVQLUJMRWNZBZNYDVICVFLQTPVEKTMDKFOUMSIIJ");
    msg.lbearing = 0.5958331645328145;
    msg.lelevation = 0.8441349652691406;
    msg.bearing = 0.18605768867802897;
    msg.elevation = 0.3394768885105106;
    msg.phi = 0.3374384693756852;
    msg.theta = 0.8948132182320976;
    msg.psi = 0.06844425168151791;
    msg.accuracy = 0.22598725035767586;

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
    msg.setTimeStamp(0.9144675448221328);
    msg.setSource(41920U);
    msg.setSourceEntity(146U);
    msg.setDestination(26829U);
    msg.setDestinationEntity(252U);
    msg.target.assign("EOVRPWUMSWDNSUWZGVFTJFLEMEXDTKENYQWYVTPCLYVSMHKOLUOANRKPXJBXOGNBRWOFGDJHPFRSYLCLANZIQWOBBQJAGYSUQZNFYRYPSYGISDXCCKMNKRKWFIVTRPLGVEDNAZHXBUYCNHTJCZAUBTXQMOJGTCQYAA");
    msg.lbearing = 0.07434022595061962;
    msg.lelevation = 0.5027841411062255;
    msg.bearing = 0.07393326991077676;
    msg.elevation = 0.8930195552071052;
    msg.phi = 0.6972093716755435;
    msg.theta = 0.44264295014882393;
    msg.psi = 0.6528574434348658;
    msg.accuracy = 0.24698628146917612;

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
    msg.setTimeStamp(0.8873694500075148);
    msg.setSource(14507U);
    msg.setSourceEntity(27U);
    msg.setDestination(786U);
    msg.setDestinationEntity(163U);
    msg.target.assign("KGYEYSWHGOBXNSFLPUZRAGEAXZNVNNFJDDDRFIKUSCCKLECOQPMUDTPFWZOIJBLICVTQMAQUYWKURRAXXIKVJYJHJFIPBMXTWYHNUGNXTFOMSRPDFXAXRFSCGEDEHUSQMGSLMAITVBKDYEOSZEGQHLZZPHGJA");
    msg.lbearing = 0.967061561919157;
    msg.lelevation = 0.034956742438357225;
    msg.bearing = 0.842216041109499;
    msg.elevation = 0.7613991505771988;
    msg.phi = 0.557380968833711;
    msg.theta = 0.788246347922787;
    msg.psi = 0.6848073800231635;
    msg.accuracy = 0.41876716888288457;

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
    msg.setTimeStamp(0.6871528545628144);
    msg.setSource(17420U);
    msg.setSourceEntity(212U);
    msg.setDestination(39908U);
    msg.setDestinationEntity(139U);
    msg.target.assign("NFZPTGSNHFARTEXSMDJZMOJKFSAIZZFSDWAUEUEFRULCYYTVVNVOOWDNAONLAWOJPXUBIEPWCYGBXMXHNUPGDMJUCUSNUKWDCRZTIFWAFELDLJXBKLQVHMWQIGAPSRHCUAYEGC");
    msg.x = 0.6532213701648365;
    msg.y = 0.8177884713157859;
    msg.z = 0.09409517934043421;
    msg.n = 0.9815768934064062;
    msg.e = 0.7533663516109221;
    msg.d = 0.26929686385632956;
    msg.phi = 0.8928327896366596;
    msg.theta = 0.7173056345347842;
    msg.psi = 0.7041242915699578;
    msg.accuracy = 0.4955360825849864;

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
    msg.setTimeStamp(0.7549269990233157);
    msg.setSource(13122U);
    msg.setSourceEntity(190U);
    msg.setDestination(48433U);
    msg.setDestinationEntity(221U);
    msg.target.assign("IBQXEFVWPWDATNRTMLOKTZPQYRLYFSFQZYTFTBJEAOBACRDEFMGQRXRMYOPJMUVPJVGSKDAXMWYCQVEHXAGPNBHOGTQJTXLLXJEQCCRKJQHZBVENCLZMXNNCCFZXWEZVUVIYIHBLUBRWKSYDOPKWWCGGUNVOUHDUJRBQFSFRDHU");
    msg.x = 0.72770899600965;
    msg.y = 0.1891389598087908;
    msg.z = 0.18200252381914295;
    msg.n = 0.08506212718988237;
    msg.e = 0.14819380646347213;
    msg.d = 0.403033534100005;
    msg.phi = 0.424925177775635;
    msg.theta = 0.7701256156893146;
    msg.psi = 0.9278871702757423;
    msg.accuracy = 0.5035530606224145;

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
    msg.setTimeStamp(0.2634301467486265);
    msg.setSource(55143U);
    msg.setSourceEntity(121U);
    msg.setDestination(5787U);
    msg.setDestinationEntity(156U);
    msg.target.assign("YUKEIUBVOEEMYLDITLEHWBKQKRHJZNMQZDCOYBAEZHPJUJPCNNDOCNUOKQIJVRLDPSWQVQRWTCOGP");
    msg.x = 0.07977655658188776;
    msg.y = 0.738270022662708;
    msg.z = 0.567719723314586;
    msg.n = 0.5976876651089876;
    msg.e = 0.7341366087087121;
    msg.d = 0.01684387658173092;
    msg.phi = 0.9110359810278811;
    msg.theta = 0.6239981800594355;
    msg.psi = 0.0648391076609992;
    msg.accuracy = 0.3367230193298312;

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
    msg.setTimeStamp(0.13177277584619296);
    msg.setSource(33760U);
    msg.setSourceEntity(244U);
    msg.setDestination(60861U);
    msg.setDestinationEntity(159U);
    msg.target.assign("FNVRDAQMXMBMCTQOULXEVQTGSVSURJWCIQOP");
    msg.lat = 0.10482260579287195;
    msg.lon = 0.9390048334488817;
    msg.z_units = 6U;
    msg.z = 0.35320233404736223;
    msg.accuracy = 0.9087205295705225;

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
    msg.setTimeStamp(0.5156567407981704);
    msg.setSource(54758U);
    msg.setSourceEntity(246U);
    msg.setDestination(7829U);
    msg.setDestinationEntity(107U);
    msg.target.assign("FZHYTIFMBQAHUWREVIJRQOUFKVLAGPONFGFBWVTVZEOODMWHZRTYICOANMKKNVJHEYMRDGIEKHSIQNSHKAAHWPVRSNXDUGZDJPNFKIKPCJLXJUDCJSCXPSRSRNYHCT");
    msg.lat = 0.6308693322451845;
    msg.lon = 0.31070116056477237;
    msg.z_units = 105U;
    msg.z = 0.8350215240180225;
    msg.accuracy = 0.7204795973425951;

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
    msg.setTimeStamp(0.08317148993822276);
    msg.setSource(9458U);
    msg.setSourceEntity(183U);
    msg.setDestination(62251U);
    msg.setDestinationEntity(39U);
    msg.target.assign("XPYAZGXVGNZTLIZFZLCQYUIVTTBGRAUNESVLRXAOEGXMHILMQYXOQRBWFWQWSPIOAXGEBVLYQIZHOJKBABTBJDDWQGDOZCMFNUUONVHPWVKOMEACGQRMRJVLCZWTRURJNNWWJUQPFJOJGDCBCTQKFYDNYJUUEYHUXRDKI");
    msg.lat = 0.2786295742595801;
    msg.lon = 0.19334665505950344;
    msg.z_units = 139U;
    msg.z = 0.9370986585851048;
    msg.accuracy = 0.17196112609646974;

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
    msg.setTimeStamp(0.38492515731649335);
    msg.setSource(10004U);
    msg.setSourceEntity(120U);
    msg.setDestination(41831U);
    msg.setDestinationEntity(235U);
    msg.name.assign("RUDWMEBMHAWDBTCUAGFHHZZWKDEZUYQOXFGFPZRMRLSUFZAFMVSZCESIYLSSIJVIVIKYBHGFUIMDBEWPCZHQZRQTYOVGBPVNPERXKNWXEJNPGYSHQYBCDDIXXJATLIXUJNXGTNWGLCETTFJORDLTBFWTCHRKAQV");
    msg.lat = 0.7530615611645477;
    msg.lon = 0.02662054353306209;
    msg.z = 0.37246830202319914;
    msg.z_units = 4U;

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
    msg.setTimeStamp(0.9170679989616625);
    msg.setSource(59100U);
    msg.setSourceEntity(14U);
    msg.setDestination(6334U);
    msg.setDestinationEntity(207U);
    msg.name.assign("JENVRFFEWUXTBPUJGWESLEXTHNYLIDAINKSTGGOGZSGNMZKTZPNQXTVVNGNKCBQEDQUFQAOZKPSJCAJHSCWLUHJPXTPOIBADHBJDMOCMMNZTHGKCFFLXATQJLPRFWWANBQEKELEPAYTVRMZCFSZYYDWHEGOYPBOCMOBIRKAHUOQJOAUTCDDKVGFFZSRDQDMVBMUCLKOVQUGYWJZSYRASPLRHNQU");
    msg.lat = 0.5826345082139556;
    msg.lon = 0.03491496300658048;
    msg.z = 0.39055592319134624;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.7805749966797887);
    msg.setSource(54380U);
    msg.setSourceEntity(252U);
    msg.setDestination(33790U);
    msg.setDestinationEntity(93U);
    msg.name.assign("JAHDJEBONVRMGKGMERGAOWVSIUJESLNUSXHMJGZPOTKVDWSAPLHTKAZGZXNJGBURBWUHVWDCYERCFLQXRMBFHXQIDZXUQJNLDAORESOHXJYFUKQNNPGYWWPAZUFHZBNRFLDYIBCABQSDZ");
    msg.lat = 0.8397088762182293;
    msg.lon = 0.8152993717371909;
    msg.z = 0.7551801361625464;
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
    msg.setTimeStamp(0.5690416411008131);
    msg.setSource(41715U);
    msg.setSourceEntity(37U);
    msg.setDestination(50070U);
    msg.setDestinationEntity(141U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.7481481309476846);
    msg.setSource(2761U);
    msg.setSourceEntity(128U);
    msg.setDestination(32843U);
    msg.setDestinationEntity(192U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.7725691145179304);
    msg.setSource(48508U);
    msg.setSourceEntity(245U);
    msg.setDestination(61521U);
    msg.setDestinationEntity(52U);
    msg.op = 130U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JZPRFUVWRWEYQPSZGDOTUMUASNPJPHECGOQCNZMTFLBNBYKNMZIGJBKJKIWNJXGFUR");
    tmp_msg_0.lat = 0.9077454919472556;
    tmp_msg_0.lon = 0.11557654401675;
    tmp_msg_0.z = 0.439286925364344;
    tmp_msg_0.z_units = 138U;
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
    msg.setTimeStamp(0.24005090150058117);
    msg.setSource(46533U);
    msg.setSourceEntity(113U);
    msg.setDestination(28805U);
    msg.setDestinationEntity(114U);
    msg.value = 0.18665335327249055;
    msg.type = 174U;

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
    msg.setTimeStamp(0.5593842994682554);
    msg.setSource(29713U);
    msg.setSourceEntity(210U);
    msg.setDestination(34559U);
    msg.setDestinationEntity(26U);
    msg.value = 0.8465891784118679;
    msg.type = 132U;

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
    msg.setTimeStamp(0.4125138886079277);
    msg.setSource(51835U);
    msg.setSourceEntity(103U);
    msg.setDestination(41650U);
    msg.setDestinationEntity(212U);
    msg.value = 0.21910305080566317;
    msg.type = 148U;

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
    msg.setTimeStamp(0.7516373925880105);
    msg.setSource(10228U);
    msg.setSourceEntity(250U);
    msg.setDestination(170U);
    msg.setDestinationEntity(78U);
    msg.value = 0.8515673954996569;

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
    msg.setTimeStamp(0.4972716887095876);
    msg.setSource(12170U);
    msg.setSourceEntity(150U);
    msg.setDestination(5434U);
    msg.setDestinationEntity(250U);
    msg.value = 0.6029312511314457;

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
    msg.setTimeStamp(0.8123970939710384);
    msg.setSource(22287U);
    msg.setSourceEntity(179U);
    msg.setDestination(42964U);
    msg.setDestinationEntity(117U);
    msg.value = 0.8762364400067097;

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
    msg.setTimeStamp(0.5548906354174153);
    msg.setSource(20981U);
    msg.setSourceEntity(195U);
    msg.setDestination(29579U);
    msg.setDestinationEntity(84U);
    msg.timestamp_last_service = 0.25483543659792507;
    msg.time_next_service = 0.8729412519124606;
    msg.time_motor_next_service = 0.6424498224178097;
    msg.time_idle_ground = 0.5765804992469635;
    msg.time_idle_air = 0.3553962571220912;
    msg.time_idle_water = 0.7887601442291258;
    msg.time_idle_underwater = 0.5845612198724032;
    msg.time_idle_unknown = 0.16707243162995566;
    msg.time_motor_ground = 0.1769721335956732;
    msg.time_motor_air = 0.5278787844559396;
    msg.time_motor_water = 0.8282836029623045;
    msg.time_motor_underwater = 0.4758373984043279;
    msg.time_motor_unknown = 0.12081150559762743;
    msg.rpm_min = 12443;
    msg.rpm_max = 8959;
    msg.depth_max = 0.2228618040206699;

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
    msg.setTimeStamp(0.0674029092474312);
    msg.setSource(853U);
    msg.setSourceEntity(116U);
    msg.setDestination(35379U);
    msg.setDestinationEntity(210U);
    msg.timestamp_last_service = 0.6000660541201471;
    msg.time_next_service = 0.2957720822744625;
    msg.time_motor_next_service = 0.499248050472463;
    msg.time_idle_ground = 0.90239287545817;
    msg.time_idle_air = 0.5515063629298808;
    msg.time_idle_water = 0.6871716329666663;
    msg.time_idle_underwater = 0.872818414127724;
    msg.time_idle_unknown = 0.8034080428913897;
    msg.time_motor_ground = 0.23198597164559298;
    msg.time_motor_air = 0.35802951960646423;
    msg.time_motor_water = 0.8052955363579068;
    msg.time_motor_underwater = 0.4354723635432989;
    msg.time_motor_unknown = 0.3304416711682918;
    msg.rpm_min = -26597;
    msg.rpm_max = -4118;
    msg.depth_max = 0.7919962234970855;

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
    msg.setTimeStamp(0.2967514147924193);
    msg.setSource(6261U);
    msg.setSourceEntity(59U);
    msg.setDestination(39197U);
    msg.setDestinationEntity(45U);
    msg.timestamp_last_service = 0.7961464939109663;
    msg.time_next_service = 0.44191794916252736;
    msg.time_motor_next_service = 0.39731840355949655;
    msg.time_idle_ground = 0.5392936738977618;
    msg.time_idle_air = 0.2127523508602177;
    msg.time_idle_water = 0.5558565475470089;
    msg.time_idle_underwater = 0.8160141792013502;
    msg.time_idle_unknown = 0.9742996780799692;
    msg.time_motor_ground = 0.014041593980027578;
    msg.time_motor_air = 0.9336855725262893;
    msg.time_motor_water = 0.8959581914568431;
    msg.time_motor_underwater = 0.8266368540388485;
    msg.time_motor_unknown = 0.5974763007811299;
    msg.rpm_min = -6523;
    msg.rpm_max = -2065;
    msg.depth_max = 0.49511779976087844;

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
    msg.setTimeStamp(0.44708296236255707);
    msg.setSource(5517U);
    msg.setSourceEntity(47U);
    msg.setDestination(36184U);
    msg.setDestinationEntity(43U);
    msg.severity = 41U;
    msg.text.assign("CMINWJYMMMFEVQOUZAFRUTNBQGPYVWAQMOAHCFKJFFXQJ");

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
    msg.setTimeStamp(0.5762666074361589);
    msg.setSource(52474U);
    msg.setSourceEntity(8U);
    msg.setDestination(38741U);
    msg.setDestinationEntity(33U);
    msg.severity = 145U;
    msg.text.assign("HBPDICYTOPOGQPFTBISJVZYDFLNDWGJJIEEPADGUHUVVWWEUSAPUHFNBOZXPAAJRMRYFBQXEHYXMBMWWZIDDIMJVIAEKSHXADNNOTNOBRNZMZQVLTOHMGFBZMSYDHCRYQYEDQKXCGVUWCROXSIELEQJLETKKRQDLMTEXISGRQGZLMGAYTBNMTQKULAVZSAHLNKIORIXVCPCQPRCUZFWJPCKJFVSKAVKZWXNCGHOTYRKYG");

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
    msg.setTimeStamp(0.8961615456290674);
    msg.setSource(26805U);
    msg.setSourceEntity(244U);
    msg.setDestination(6260U);
    msg.setDestinationEntity(175U);
    msg.severity = 15U;
    msg.text.assign("KWSSXEYVPIFMXNPZDQURDYTLXGQASKKJFECENWOGCKROJKYOWCFNDXHLFQIGMUOFQDZKJTUCPTWXQHHSZMHAEGURAASVXLTPVDZAROHEBRFBSAVLLCONWIQUAWMZDNEIRKVZAGDYZFETCXGVYUHJIFQENTTNJNQRIPRZDBLGKBRWVLMPJGMALPLUHJWGNOXJSMYOFVXYCPBBMLIRMCXPQPJTBKBVJODWIIWBTQIEUFMCUHNUOSZGHC");

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
    msg.setTimeStamp(0.08124039944583117);
    msg.setSource(14556U);
    msg.setSourceEntity(158U);
    msg.setDestination(46796U);
    msg.setDestinationEntity(43U);
    msg.channel = -38;
    msg.value = 1450627949;
    msg.gain = 184U;

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
    msg.setTimeStamp(0.9184019258740846);
    msg.setSource(34546U);
    msg.setSourceEntity(5U);
    msg.setDestination(19048U);
    msg.setDestinationEntity(106U);
    msg.channel = -81;
    msg.value = -1690747711;
    msg.gain = 76U;

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
    msg.setTimeStamp(0.7089728863963063);
    msg.setSource(64975U);
    msg.setSourceEntity(146U);
    msg.setDestination(21070U);
    msg.setDestinationEntity(226U);
    msg.channel = -40;
    msg.value = 1071420114;
    msg.gain = 228U;

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
    msg.setTimeStamp(0.4514998802457598);
    msg.setSource(32992U);
    msg.setSourceEntity(72U);
    msg.setDestination(54265U);
    msg.setDestinationEntity(206U);
    msg.ch01 = 0.6413854507646587;
    msg.ch02 = 0.00022072684376461815;
    msg.ch03 = 0.2862021354772213;
    msg.ch04 = 0.7143071931871151;
    msg.ch05 = 0.7964273482640419;
    msg.ch06 = 0.8750480016326245;
    msg.ch07 = 0.8684265674696368;
    msg.ch08 = 0.21082704578533795;
    msg.ch09 = 0.9427555634748186;
    msg.ch10 = 0.8320134426867511;
    msg.ch11 = 0.10689017173884718;
    msg.ch12 = 0.4413245064010699;
    msg.ch13 = 0.43372507657578896;
    msg.ch14 = 0.7655766350510849;
    msg.ch15 = 0.5674479838305186;
    msg.ch16 = 0.09691011790945558;

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
    msg.setTimeStamp(0.06603675869890124);
    msg.setSource(44935U);
    msg.setSourceEntity(184U);
    msg.setDestination(55433U);
    msg.setDestinationEntity(41U);
    msg.ch01 = 0.8962644975618949;
    msg.ch02 = 0.30866426436091243;
    msg.ch03 = 0.11555925172987691;
    msg.ch04 = 0.5709781726950871;
    msg.ch05 = 0.33042280214929787;
    msg.ch06 = 0.9698908777770096;
    msg.ch07 = 0.8061588997901918;
    msg.ch08 = 0.40724435718959706;
    msg.ch09 = 0.9126692824442363;
    msg.ch10 = 0.04867635363109679;
    msg.ch11 = 0.6037391030230067;
    msg.ch12 = 0.6775020348060928;
    msg.ch13 = 0.3656663731767753;
    msg.ch14 = 0.5635288670923159;
    msg.ch15 = 0.11713199220424209;
    msg.ch16 = 0.3201502123415344;

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
    msg.setTimeStamp(0.3943216725736013);
    msg.setSource(32456U);
    msg.setSourceEntity(216U);
    msg.setDestination(2865U);
    msg.setDestinationEntity(209U);
    msg.ch01 = 0.9448537460811192;
    msg.ch02 = 0.7503546320454195;
    msg.ch03 = 0.02126569886577745;
    msg.ch04 = 0.14729662103952101;
    msg.ch05 = 0.857316985866554;
    msg.ch06 = 0.49708935587691117;
    msg.ch07 = 0.9667894032019598;
    msg.ch08 = 0.9383343759768213;
    msg.ch09 = 0.06850097084255302;
    msg.ch10 = 0.7075382153430985;
    msg.ch11 = 0.8853145953293687;
    msg.ch12 = 0.5767164835097396;
    msg.ch13 = 0.5252051739859652;
    msg.ch14 = 0.031378672445085964;
    msg.ch15 = 0.9290021800506286;
    msg.ch16 = 0.09772617300963637;

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
    msg.setTimeStamp(0.9706651707734599);
    msg.setSource(46648U);
    msg.setSourceEntity(135U);
    msg.setDestination(14336U);
    msg.setDestinationEntity(61U);
    msg.op = 90U;
    msg.lat = 0.8048271531752001;
    msg.lon = 0.1663260674184237;
    msg.height = 0.25367093455936895;
    msg.depth = 0.6483675157076157;
    msg.alt = 0.13807718168839855;

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
    msg.setTimeStamp(0.3646208227767539);
    msg.setSource(12462U);
    msg.setSourceEntity(193U);
    msg.setDestination(8405U);
    msg.setDestinationEntity(0U);
    msg.op = 39U;
    msg.lat = 0.49269665981122024;
    msg.lon = 0.8942688515812255;
    msg.height = 0.6688182223632757;
    msg.depth = 0.6823787821579115;
    msg.alt = 0.2533212609960044;

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
    msg.setTimeStamp(0.8344608765464784);
    msg.setSource(68U);
    msg.setSourceEntity(132U);
    msg.setDestination(26022U);
    msg.setDestinationEntity(229U);
    msg.op = 179U;
    msg.lat = 0.9166041697391198;
    msg.lon = 0.35825181755227997;
    msg.height = 0.7319569060674238;
    msg.depth = 0.036215465328447105;
    msg.alt = 0.05207017529689206;

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
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.08397565845002608);
    msg.setSource(37091U);
    msg.setSourceEntity(166U);
    msg.setDestination(43063U);
    msg.setDestinationEntity(56U);
    msg.nbeams = 153U;
    msg.ncells = 76U;
    msg.coord_sys = 59U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.7042897461332323;
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
    msg.setTimeStamp(0.060259358337754976);
    msg.setSource(44324U);
    msg.setSourceEntity(4U);
    msg.setDestination(60630U);
    msg.setDestinationEntity(132U);
    msg.nbeams = 114U;
    msg.ncells = 126U;
    msg.coord_sys = 167U;

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
    msg.setTimeStamp(0.6916317686054008);
    msg.setSource(16690U);
    msg.setSourceEntity(53U);
    msg.setDestination(56188U);
    msg.setDestinationEntity(110U);
    msg.nbeams = 133U;
    msg.ncells = 235U;
    msg.coord_sys = 25U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.25628402654612736;
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
    msg.setTimeStamp(0.23993075891636362);
    msg.setSource(213U);
    msg.setSourceEntity(66U);
    msg.setDestination(40183U);
    msg.setDestinationEntity(187U);
    msg.cell_position = 0.728654161417183;

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
    msg.setTimeStamp(0.01884285142061859);
    msg.setSource(23961U);
    msg.setSourceEntity(56U);
    msg.setDestination(13547U);
    msg.setDestinationEntity(194U);
    msg.cell_position = 0.47553158585401656;

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
    msg.setTimeStamp(0.45640898551456066);
    msg.setSource(53106U);
    msg.setSourceEntity(15U);
    msg.setDestination(10867U);
    msg.setDestinationEntity(196U);
    msg.cell_position = 0.9897742270327796;

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
    msg.setTimeStamp(0.19537702727285444);
    msg.setSource(56192U);
    msg.setSourceEntity(31U);
    msg.setDestination(25868U);
    msg.setDestinationEntity(67U);
    msg.vel = 0.7481918864815925;
    msg.amp = 0.2951614171304957;
    msg.cor = 88U;

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
    msg.setTimeStamp(0.7937043245964609);
    msg.setSource(9496U);
    msg.setSourceEntity(13U);
    msg.setDestination(36666U);
    msg.setDestinationEntity(229U);
    msg.vel = 0.22785138074371125;
    msg.amp = 0.1575645488469548;
    msg.cor = 155U;

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
    msg.setTimeStamp(0.5237270972303179);
    msg.setSource(3976U);
    msg.setSourceEntity(183U);
    msg.setDestination(32707U);
    msg.setDestinationEntity(232U);
    msg.vel = 0.2517753824098159;
    msg.amp = 0.4977836243273809;
    msg.cor = 79U;

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
    msg.setTimeStamp(0.20234809200636117);
    msg.setSource(61360U);
    msg.setSourceEntity(91U);
    msg.setDestination(49463U);
    msg.setDestinationEntity(204U);
    msg.name.assign("HDXZNSSDEIGOHG");
    msg.value = 107U;

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
    msg.setTimeStamp(0.046019664895247114);
    msg.setSource(19404U);
    msg.setSourceEntity(116U);
    msg.setDestination(57264U);
    msg.setDestinationEntity(185U);
    msg.name.assign("YBIKBBHAWPFANAKWUGCOXRYAZWERYZCDINEIRTUFXTTJPTMKPQDKFSQXKJFFJMRYQGTVUWYVJ");
    msg.value = 35U;

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
    msg.setTimeStamp(0.569812821146917);
    msg.setSource(65201U);
    msg.setSourceEntity(113U);
    msg.setDestination(39441U);
    msg.setDestinationEntity(159U);
    msg.name.assign("YEESAZTLJIHZYZYAKPDUBVBNHFLRNTULKOQVIMAXDKYIPTNEMNXHWBAVNBSHDZZWCLXZSEFFFOSWTRIRDAQUZGRWBPGMVCUOVBCVANQSYBAHEUKNOQSRMUIJTYKFIYSVEOUNGZDLJLIPHMNQXGMQPJXVTHJWILDXWD");
    msg.value = 78U;

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
    msg.setTimeStamp(0.12909470706651605);
    msg.setSource(48847U);
    msg.setSourceEntity(226U);
    msg.setDestination(14339U);
    msg.setDestinationEntity(16U);
    msg.name.assign("ONCBBHVGAYYUPXVAFVAWFQIKMSJENPGOZXWSTHYCZDJDZRJBFNAHKOFVDRIHMIDAIPEMTFPYRNSWLEBKHNEOEXWCAYCPUSNNLTUGOIGFBRNZUFPVIUYVVTYWWWJQMLSJYGCNPALEYFTLTBDEXTUOUBFMXENCMMHEVWURUCHJLBZUQWHQDDQOGDSZMZFLIZJKKAQKLRILCIGIRPKJGQPMVKCQXOAL");

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
    msg.setTimeStamp(0.2611458447809024);
    msg.setSource(32044U);
    msg.setSourceEntity(115U);
    msg.setDestination(50515U);
    msg.setDestinationEntity(13U);
    msg.name.assign("HEWNFZEBKQHVVSODGZSWOKAPGHCAJZDWPNOCJKMRDYTLURRHEOBMXIIYVOWYUKKBNKVRBWPVFCDMLDUQCNTDQUDUVTLLQGZILGNKWCRTJCMMQNYTEEDFSOZLYDIAYMXHGSTKMZUTEJMRPZBWUPOFAWXNXSGBTIOLHAFPDJTKOYXTQBSSBVHPJPNQWCBURLCYYZGEJJRYQEI");

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
    msg.setTimeStamp(0.9069864378254943);
    msg.setSource(3053U);
    msg.setSourceEntity(201U);
    msg.setDestination(18363U);
    msg.setDestinationEntity(143U);
    msg.name.assign("WQRLFROHOKBLVVILRFGONDRUBOGECNIIAGGAACCWGRFWHFQQNYIDJEQEJVRVHHTICMPEECMRAXBAHJJMSYQHZTBZRKIYVAYNEXLUDRUEGWSMEKWUPILXIDFLTMQEQDPANXXMUKMDORPTGTKVNQGPMGBDZCFONOSWJUMBWOL");

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
    msg.setTimeStamp(0.3685787394681246);
    msg.setSource(57421U);
    msg.setSourceEntity(114U);
    msg.setDestination(28404U);
    msg.setDestinationEntity(40U);
    msg.name.assign("OATFJKEQINDPJJWDYYEFGVGUFQQSTOVGKJESXRFPSKSXSRTNHFAOSSJYRMWLKZIRCPREZPNFWRYZQPGDBBCLMICNVMVQUQZBLVSMSRPOQEBYTZYAXKYWKTSHHVDICRDZLEBLUPCUBHMHAIXEUEQPJIHDXDOMXNNIKAGFXGNGUULAMHLHWHWYFHUAKRMAWYVQWXYNDBCOGXLMZZOKGTDFQ");
    msg.value = 254U;

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
    msg.setTimeStamp(0.5691180659972429);
    msg.setSource(50726U);
    msg.setSourceEntity(149U);
    msg.setDestination(54098U);
    msg.setDestinationEntity(6U);
    msg.name.assign("EXDIGEOKNSYQDJBUCAFNHFGEZMFVKBTTEFYCFPZAOCLXSZRZKFEZAHDXWDDPMATYIQAQOGPJUUSUBGPTMHNLMTUGKNMSRRPRXRMIRWPLEBURISUYGUZEWLQGPVLPYNFUKBVHCLPSQNIHYRDVFJRNHOCGBDJKQDJRTYWVMGEWOCVQVLCAEIAKUKCXWSN");
    msg.value = 188U;

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
    msg.setTimeStamp(0.5722435044158152);
    msg.setSource(8491U);
    msg.setSourceEntity(144U);
    msg.setDestination(26505U);
    msg.setDestinationEntity(196U);
    msg.name.assign("VOMWYIUEPZMNYCUPGRQDSCEFOUUEOAWFJWDYLRYFODHKEUNZIEOKIXSXEIIHVYZARLAXDVBSJTWTLNPHVGOVBHDWYOCUJAYCFSIRGPUWUVPCZDQOLQMWTJBKCDAKTBLNKASSEHOBZPBLXQGMFECFDOJZHJJTQSEHBLQGKIAIGZTNRSVKYAGHNFRRTSMMDKQVXGHKWWMWZHDPYXMUXLNQFBNRFGMX");
    msg.value = 138U;

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
    msg.setTimeStamp(0.809730177333288);
    msg.setSource(32617U);
    msg.setSourceEntity(227U);
    msg.setDestination(47989U);
    msg.setDestinationEntity(59U);
    msg.value = 0.18983096807084576;

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
    msg.setTimeStamp(0.5622429436105425);
    msg.setSource(45913U);
    msg.setSourceEntity(2U);
    msg.setDestination(19843U);
    msg.setDestinationEntity(161U);
    msg.value = 0.9819154159308519;

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
    msg.setTimeStamp(0.3309308464901003);
    msg.setSource(52589U);
    msg.setSourceEntity(203U);
    msg.setDestination(25613U);
    msg.setDestinationEntity(214U);
    msg.value = 0.3281483492734265;

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
    msg.setTimeStamp(0.4710028716477763);
    msg.setSource(58202U);
    msg.setSourceEntity(190U);
    msg.setDestination(43357U);
    msg.setDestinationEntity(202U);
    msg.value = 0.2077253907778206;

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
    msg.setTimeStamp(0.18362338518408983);
    msg.setSource(18042U);
    msg.setSourceEntity(64U);
    msg.setDestination(43553U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7251113346157594;

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
    msg.setTimeStamp(0.511167436619317);
    msg.setSource(15946U);
    msg.setSourceEntity(8U);
    msg.setDestination(60156U);
    msg.setDestinationEntity(125U);
    msg.value = 0.8911058583527297;

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
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.36565525372944274);
    msg.setSource(7022U);
    msg.setSourceEntity(157U);
    msg.setDestination(311U);
    msg.setDestinationEntity(17U);
    msg.req_id = 52988U;
    msg.ttl = 53560U;
    msg.expiration = 1238590402U;
    msg.destination.assign("GUGVXKJPDMJQOWAXMPQCJSZIRCNQOAHVYCRNQLMLQZFZBEFLMVWJNXPZUEXZXTHIGYEQBKRWMYQKKWCMISKITXTQKOEPNDAOZBYYIUFGBSFOCDEHWCAPRRRLFSVYVANFXKXNTSTLSZRNTN");
    const char tmp_msg_0[] = {-17, -24, 123, 44, 56, 56, -54, -56, 38, 123, 75, 54, 110, 102, -40, 43, 62, -47, 42, -18, 78, -26, 32, 20, 7, 92, 64, 61, 118, 49, -77, -127, -120, -82, 97, 101, 56, -128, 0, 86, 102, 90, -20, -84, -23, 100, 95, -122, 25, -49, -67, 94, -88, -50, 1, 81, 124, -127, -49, 63, -50, 77, -12, 57, -43, -39, -20, -116, 60, 79, 7, 52, -24, 32};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.3766755469967693);
    msg.setSource(45782U);
    msg.setSourceEntity(101U);
    msg.setDestination(58193U);
    msg.setDestinationEntity(223U);
    msg.req_id = 3596U;
    msg.ttl = 263U;
    msg.expiration = 788077776U;
    msg.destination.assign("UZBBYITUYSKBRWNAXNAQDMQZEASKMGKWFZASORTLXUXHWEPBRNVHHSAZWBYOFVHLPNZCKRGFAUGCOTICMKYKHQVWQTZYBRPKTLQABBEFPVVAXTPSGEIDYIFSUJFCNCONYFMOCFDHDJGWNOPGUKYORJD");
    const char tmp_msg_0[] = {38, -76, -82, -59, -32, 24, 58, 28, -30, -123, -99, -70, 98, -25, 110, -39, 87, -2, -90, 25, -26, -90, 7, -85, 56, -15, 34, 9, -111, 70, -119, -95, 58, 68, -83, 68, 76, 58, -12, -54, -42, -29, 76, -26, 83, -60, -48, -20, 32, -26, -96, 59, -113, 116, -12, -76, 101, -100, 50, 91, -95, -1, -118, -105, 20, -6};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTxExtended msg;
    msg.setTimeStamp(0.3060304528086285);
    msg.setSource(43661U);
    msg.setSourceEntity(251U);
    msg.setDestination(26171U);
    msg.setDestinationEntity(100U);
    msg.req_id = 13729U;
    msg.ttl = 62673U;
    msg.expiration = 3526074432U;
    msg.destination.assign("MEWFPIOWAILGMPNRYWRUUXSBOUMKKCUBBWSCELUJCWTHZVJCRQBMGYRGWUFYQOGSDADNRUJSQHBJJZXVKXMZJTYZXEVRNZGOBRLMDKYAZTHPFYDPDOFRFENEPP");
    const char tmp_msg_0[] = {46, -81, -122, -47, 49, -49, -115, -103, -79, -73, -83, 101, -46, 93, 110, 65, 54, 2, 69, 5, 101, 71, -31, 80, 119, 47, -38, -119, -36, 120, 69, -31, -86, -101, 61, -84, -20, 71, -56, -26, 22, 14, -61, 60, -30, 57, -126, -124, 115, 18, 33, 50, 56, 108, 19, 21, 65, -109, -111, -15, -79, 120, -120, 3, -56, -51, 111, 36, -22, 7, -125, 74, -86, -68, 30, -104, -92, 53, 12, 21, -64, -46, 62, 78, 87, 99, 50, -50, -60, 89, -10, 37, -8, -94, -29, -2, -19, 109, 62, 74, 88, -60, 88, -82, 2};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTxExtended #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7476627928971414);
    msg.setSource(39824U);
    msg.setSourceEntity(10U);
    msg.setDestination(46810U);
    msg.setDestinationEntity(239U);
    msg.value = 0.2612230921538383;

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
    msg.setTimeStamp(0.672679239978042);
    msg.setSource(58671U);
    msg.setSourceEntity(206U);
    msg.setDestination(39605U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5180128202478237;

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
    msg.setTimeStamp(0.17360393263723506);
    msg.setSource(13157U);
    msg.setSourceEntity(223U);
    msg.setDestination(59307U);
    msg.setDestinationEntity(73U);
    msg.value = 0.3474634943513766;

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
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.744488284288478);
    msg.setSource(58105U);
    msg.setSourceEntity(159U);
    msg.setDestination(48938U);
    msg.setDestinationEntity(12U);
    msg.type = 137U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 149U;
    tmp_msg_0.op = 32U;
    tmp_msg_0.request_id = 55873U;
    tmp_msg_0.plan_id.assign("CEDPRICGWWEQOSEZVIUXYGRXJQSMUWTUFLYYSBBASEKNVRUOXQJOXRPZYUPFVHFDJBMCGTWFUWHOMIQJHCNLFOWGZFSGCIKEBQGRSATZOZDDXFFHVGQSYPJWLTZACRPLMPOOBDNAYMQRQYHIAPTKNMVNTUVCVTPRLYZWFXLCBHBVNDJSLZGYNKKECPTABBDXQVEKNIZHKLANXERKOJUGRIHVJMWP");
    IMC::StationKeepingExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8576291698813284;
    tmp_tmp_msg_0_0.lon = 0.9897566602929726;
    tmp_tmp_msg_0_0.z = 0.30995258666545467;
    tmp_tmp_msg_0_0.z_units = 187U;
    tmp_tmp_msg_0_0.radius = 0.4621957901138949;
    tmp_tmp_msg_0_0.duration = 7763U;
    tmp_tmp_msg_0_0.speed = 0.43075447697337343;
    tmp_tmp_msg_0_0.speed_units = 41U;
    tmp_tmp_msg_0_0.popup_period = 8011U;
    tmp_tmp_msg_0_0.popup_duration = 19902U;
    tmp_tmp_msg_0_0.flags = 213U;
    tmp_tmp_msg_0_0.custom.assign("OQTOXRCJHBPTELHONQDIRTEVGLJESIMZGSZAGPLUTYPCPQRIBZYGPNEDQPGENRMNNMBJFOMFMIHFGYSWSDOSBYVWRZDHLWTDKMCNVIH");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("BGPAPQRCPOZXSHKQTF");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.3098885827890432);
    msg.setSource(9325U);
    msg.setSourceEntity(181U);
    msg.setDestination(3400U);
    msg.setDestinationEntity(40U);
    msg.type = 131U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 45U;
    tmp_msg_0.op = 31U;
    tmp_msg_0.request_id = 16825U;
    tmp_msg_0.plan_id.assign("PEMZRFHARVTNNWZTDHGZGHJJSLLQVYRKUWIHDHZNDQYORWGTPSBLWVTPDBXBVIKLHXAHBOBCCGXYFMCBWPCEFYCFUJHVEIRFVPPPAMGSZDCYZYSNFMALAMKJVDCNSLJWBJDMMOQUQLAQAYHETZFXRDPGULGXQJSUIVKOVNNKMCLWWEOEXNYOEGDMYRNFOLQSCTXRXBJTBNISQRMGJWAAKK");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("NZJFSMBKONXUAPBUZGOACRTVPBQXINWLKFECZMPVBPNRMRETRYCUVGRUCOQTSMSVZGDWVVCWLQASMJADALAJYOFINLYMJKAYAEBPHQRJCLGMFFRGDQOQGMVTEBJNBVJIXEIPRGYTDNLWSBXSLLUTJWVXCUKVJHTWYBKSWDYKWXHEYSXBQHCWZNGCAXOWHLFGTHPERXODIHHTIGQQ");
    tmp_tmp_msg_0_0.dest_man.assign("XATNYAQCPRPZYIFRYKIXCYQQQFBJZBVHZTEGSNBWNBUNDWHEVFV");
    tmp_tmp_msg_0_0.conditions.assign("FNKXRNBSMYCEXLLYJSUEUSKMNUBGMVHBRZLTSQBEGFAIFGLOQRJYGBY");
    IMC::GpioState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("YMFQZNWLAEIELYTQXJHODOVQQSSWPDJTSPKUTBWZXUUNRBOVBTXJSACWOEFUGGQRZZXOLOGUXMQZYSJIGVBAMNLTWEURHSKGLCQP");
    tmp_tmp_tmp_msg_0_0_0.value = 37U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("GPLGNQCGDZGLFOSXKZVFNXIZRQJTREGSDNPVRRMQUFMMAHIZEAC");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValidatePlan msg;
    msg.setTimeStamp(0.43835188362885547);
    msg.setSource(53858U);
    msg.setSourceEntity(184U);
    msg.setDestination(38471U);
    msg.setDestinationEntity(144U);
    msg.type = 141U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 37U;
    tmp_msg_0.op = 138U;
    tmp_msg_0.request_id = 24714U;
    tmp_msg_0.plan_id.assign("NESJJSJHZACTIJSHYBXDGWNQKTJHWOSVUGRATAAEZFRFISINTKBPFMMMCMCPEBSDPIOPEXXIXYLGNYEMZLCMKMZOLWAYUQEXXZLZYCUSRGUWSVUNIDEVXO");
    IMC::CommRestriction tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.restriction = 196U;
    tmp_tmp_msg_0_0.reason.assign("FJNLOQHOFHHCKPPNMWNIBZDJCPMYZGMDMVVUGEUTXNBORXSTXXAZ");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("BRTZWUEAGEHFPOLDGHKORABKVJKGNMYWFBNDSNAITAIKACOXCJRKMOGFYJNCZQQSKPTPMFEXLAJDAVXPVYXRIEVFMJNHBOETZSPOMJXGNBSHCXI");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValidatePlan #2", msg == *msg_d);
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
    msg.setTimeStamp(0.2467584122698947);
    msg.setSource(53374U);
    msg.setSourceEntity(165U);
    msg.setDestination(14764U);
    msg.setDestinationEntity(136U);
    msg.name.assign("WECMXCDNGSZASVQRHTDKFDPGMMSGLBDKTPIHOVCWRKHVNVSXZHMQBSIYMFQAAQWWFCYAMMHEZDTRTNKDRYYTHRNLLUGRGXBNMJUJYTYEKLWEJFEZJWKUREMUQPOVRGSSMJKOLIJCEPTUCJNPOFZVAQYCKJHXICXHBBIFLFULBUNDPOZVGOAWYDDQHBDHPJWXCQGBVIFVNOKXFBGSAPWXYEL");
    msg.type = 51U;
    msg.default_value.assign("CZJAIQKHYAVNUTLCWNEGJYQSOBESAAPRBDMBEBDWVGEHPAQSBQTUVNYUGOW");
    msg.units.assign("XQUGVWOLJHZCGPNEKUVE");
    msg.description.assign("QOTMRZQNOWBPUOPKHJEKCJACUENQBBPTSQAXBTSJSKTNCCFQZZALPLBLPXB");
    msg.min_value = 0.07890282063543552;
    msg.max_value = 0.38715699185734087;
    msg.list_min_size = 634936364U;
    msg.list_max_size = 3469777101U;
    msg.visibility = 42U;
    msg.scope = 122U;

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
    msg.setTimeStamp(0.6310463086419209);
    msg.setSource(34022U);
    msg.setSourceEntity(178U);
    msg.setDestination(2193U);
    msg.setDestinationEntity(187U);
    msg.name.assign("EXHTQBAEOKCWAHRQQSLBBEYLJFNOLRALSVIXDUOPUWNWUMVSJVXFPVTPEQBKFBMFIPKYPZNWTGYKWPMHNICXQDTFOIELTMMUBZWJOVNPJOLGVLMVSUVHPAAVRYZRIXPAQDYCYYGRWBSUXIHGYBGJOJZPRISTEWKMNJKKQDNOZFMIJAGDEHAKGDHLCKSIYGQZGNKUFCJTQUTZRCANZDWDECSYERZVJXOFWNDMUHFDFTXHILLQBUTC");
    msg.type = 86U;
    msg.default_value.assign("JRJOEVKXMOHIHKUKRFMIJYZKFAROCPQSPBDFZGXOOSAXQYZXFWKSLLDYQUDTQRATIICXWIMQQYUECKGRJPNDNUCKRJYTAQQMBSHDKPSNETQKWJMANQLXEASTVFYISVCEONLDYGUGRYHSXLZAVUCGZHWGWZDSLJJVMNJUEVELFOUNBCOEWHYMDDVFPMWTBAOEAPINBYKZCHVVUFGXFENZGGIBTHPWJCTROTSLDH");
    msg.units.assign("OFEAPEHVJMHNNZMWWQXUNQBENNXCSXLZGRDBMIDGIPULLVOWLQKDTRFLJBADTDZPHUWVYTXYPSNFZAGEUKYVJBUNRLVPZRZOEQGEACCACXHKIXMVXBMSWKLASPSYBPXGFHIOGAKYVFETTOTICMOYGPRVKMUZJAYWFUCOLCHNRMHOPTIRFFYQWUYJESKPCDJMJOEKTXVQWGZSYLRTDOJTBIHQ");
    msg.description.assign("FGIFROFLVWSBJRVKNCNCAPUBXIDHFPWRQJGNASQR");
    msg.min_value = 0.7350119951418173;
    msg.max_value = 0.9740889706502364;
    msg.list_min_size = 1857257873U;
    msg.list_max_size = 2943943250U;
    msg.visibility = 142U;
    msg.scope = 65U;

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
    msg.setTimeStamp(0.8248267496324365);
    msg.setSource(4221U);
    msg.setSourceEntity(48U);
    msg.setDestination(23583U);
    msg.setDestinationEntity(175U);
    msg.name.assign("ADJHVLSOWVNSTHMNMJCUKOKISNPACNAAWCRKUGBZMHXTARZDOEIIIGBVPMYFVUYDLTTFLYPQGXZIGBUKCOVFUMWGHGRNJHZRRHVCJJDSZJBWYXEUEDBSSTKJLGCREXINQWYOEMXZFLNPETJNKUYUSZTAGXECIITCOFFWVDXTWZALXUFEOGWQSAYOCWRZMSQONFAXJPRSQMGDXQMBPBKYAHVWHPLQZRQCBDEYMKDNLBLQKU");
    msg.type = 62U;
    msg.default_value.assign("TVVSLTEBYUZJSROOPWQIMDOYJIRLSARIEVUVWODIUGFQCTAICGCOJFBUKKBMKZKFNTTRVCUSHWBMMGUJEIVYZAYDRPAYZHYTXLGDMCWLTCGRYJJWZCDWQACMMPTKFOBTQEPSABSZJNXESXJRBUZXMRGHHXAPODPAMNGLVSPWUQONDQZBHOXKPWQGNJJQAGBEDXNFFWNIIKENGLNKTPCWRHVHYVUDHFLUHKEHF");
    msg.units.assign("XAOPNBUKGVIFVUXHZHQHJXBETXIGUMTLYVSZSRJRDBFVDLYPGOMDVKBNHHPYWRCXCHRFVAGETJEDDGAIMWPLWIAZUZRCCDFCPXMSBEAGSHAFLQEKMOQFLNPTSBICEAOZWHCMNKUYLCPCIROVLYERCXTXISTKDYNJEJXGYJEVWK");
    msg.description.assign("LORJDDWZAHYSSPSALWUTGSCOWFWGBXGAJUJYAIQSUGDVBDUPDURILGFNSYFZFKPXVBVHCNPCQKTQXBROTKJIVLTTQMAJCZCSPJXVCYZMHJATCIJMOCXDFNLIDHZHHEPKZLDYOVTKBREMEGKFGWRMFDDLNHYOKBMIEXOISUUSZLQLERXUMQKETFXWIMYVGGBFOQYUPEACF");
    msg.min_value = 0.25864787506971754;
    msg.max_value = 0.7033765995296175;
    msg.list_min_size = 830218603U;
    msg.list_max_size = 2294369502U;
    msg.visibility = 154U;
    msg.scope = 198U;

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
    IMC::TypedEntityParameters msg;
    msg.setTimeStamp(0.36173405695716976);
    msg.setSource(62000U);
    msg.setSourceEntity(152U);
    msg.setDestination(12019U);
    msg.setDestinationEntity(44U);
    msg.op = 6U;
    msg.request_id = 1084289783U;
    msg.entity_name.assign("ZIAJWPCMWILXCFQQRUKBMBYCNEIXGVGRGNFMSFFDPAXVJXHMXRHHQVRKVSAWMLULWTUMQZDVYBLPCJGKKCIQMTCRLNGMLYRGIUSRCNEARJAGUWUDANZTWOQDYZXSSGNJXOYLNUUIEPGOHTYNCWSFHKBDPABWHBDYOXZPLVJNQVROHQWKSEBEZBVIBNADZPITAFTJEKTBUOYVYSCMJPKSO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameters msg;
    msg.setTimeStamp(0.24041874268660468);
    msg.setSource(25314U);
    msg.setSourceEntity(227U);
    msg.setDestination(2649U);
    msg.setDestinationEntity(254U);
    msg.op = 248U;
    msg.request_id = 1045683970U;
    msg.entity_name.assign("KODVVRFLZUQREXDYMGEUPAMUSRKWJUXPUPNFWFWQBFMPKGJKPYFNCACMGAYWQGZYEXITMNPSUJKEVXBYLCCTQRSPVKRCETECZIGSFQHCMXFBIIJWXAQLTWDRXQUVXGFZSRNBTRIBINUKAKAHNTTSEXJPHKDRSUSPYGVJUOOOVTIHLVDFOVOHZW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameters msg;
    msg.setTimeStamp(0.07003000447197827);
    msg.setSource(7132U);
    msg.setSourceEntity(208U);
    msg.setDestination(62433U);
    msg.setDestinationEntity(7U);
    msg.op = 253U;
    msg.request_id = 1263809579U;
    msg.entity_name.assign("FTNVTPTXYURFDGBKVDTZRHVOGUWEEDYERSPPUCKGHDMBHONFQMLDNACONJRXEIHEHTUNSSGISVBQPBTSGXMKHDAWXNRVUPLFYASQFKYGRZSXMIDNKLSMOMISZETPKJAPYVNUIWUCLJFCVKOTNXTLZXIAZIOQQCJOJWJLTGWUSCELNIUCPMGWJBPZOBAZYJEYZJLZUGLEVVQZWCECWAFFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9515129868945399);
    msg.setSource(27430U);
    msg.setSourceEntity(100U);
    msg.setDestination(23878U);
    msg.setDestinationEntity(139U);
    msg.restriction = 57U;
    msg.reason.assign("GFBUYNJGIWLGYVNVJXKVKVCWLUSSENPCOO");

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
    msg.setTimeStamp(0.8972814179554176);
    msg.setSource(23958U);
    msg.setSourceEntity(178U);
    msg.setDestination(65438U);
    msg.setDestinationEntity(23U);
    msg.restriction = 232U;
    msg.reason.assign("QBMOQIWDEAHQRKKKGOJDZVUYTMXSULNCZNXOHILTYGPMCYBEPGHSAUNYHLSUQDSEVKOAUKDDCUXJIRBMWWAZLVNLRZFKNFZPBMVWPZPORMNXVHUFFJMLUDQHYFJGRTSQSBCTCYDKWPLGENHGJOGTBBKUXVSDLCFWOTGNCDIWZELPLYJAZXEHJSNFAXHSIRCZWVIVOMA");

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
    msg.setTimeStamp(0.759522956889418);
    msg.setSource(7201U);
    msg.setSourceEntity(88U);
    msg.setDestination(13529U);
    msg.setDestinationEntity(109U);
    msg.restriction = 125U;
    msg.reason.assign("KXQTXGUOUYCWPCCCXZNOXTEAEHKHUWLHRMKNZARPIBTGDQKNZDYMFGGAJMO");

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
    IMC::WifiStats msg;
    msg.setTimeStamp(0.13222038317438756);
    msg.setSource(52930U);
    msg.setSourceEntity(63U);
    msg.setDestination(34567U);
    msg.setDestinationEntity(11U);
    msg.mac.assign("ZMIQDKALOSKTPRBOOHNDUUCBJFEVYVERTBMTHSMXHPPVEGJXRLWIVGTEIFDDMJKSKZMNMKSYFXALSZ");
    msg.ip.assign("EZKPLBJQBWODQKOWGUJCVTXSKWAFZCPGPUNYYSIMSGLHLYXDHTTBFHMNNXMCBFRSSHDDTQCQFRJEXRRSIFAVIGKPIUNLAYDOXAQAOLZETXSJIKUZIIGJPEPVHHVKEVDLIGKIVCCXJLQGTDWJJWYEPSNGHGYWACFWZUZBHNNAQMVZTBVKHLDNZTBYTUUVRM");
    msg.ccq = 253U;
    msg.noise_floor = 30102;
    msg.signal = -13680;
    msg.rssi = 64338U;
    msg.rx_rate = -16466;
    msg.tx_rate = -28696;
    msg.tx_latency = 27724;
    msg.tx_power = -31371;
    msg.rx_count = 2240278984U;
    msg.tx_count = 3423284499U;
    msg.distance = 24327;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiStats msg;
    msg.setTimeStamp(0.7474587310356977);
    msg.setSource(63986U);
    msg.setSourceEntity(95U);
    msg.setDestination(25220U);
    msg.setDestinationEntity(37U);
    msg.mac.assign("JYMKUIYLSNHWIAPUGLUFJCTEOOUVFCHKQJEXKYPSTAIHXSMBRPLLCALVROVBDDRSOADGUGQHVPHFAEMPL");
    msg.ip.assign("OYKFJRCJRUAWYFRGPLCDUTWQAWTGPCENKFVFKRXFVUCVBCRLCSHJUFNMWIFVRXNEIJRBTSQXQXGNUNHZFHBEYTIYQODKHIGHVAIGQKHEBWOUSCGSCNYDYSWHMQMBSJDTNZMSKZLALFPOUTVJKMJTWSPZASIKXNJYAPWDOADGRBYZTZXEPBRQOAMLVLPXSVYTZQNEXMPGOLODATMVCKILDRGHEMBDGZEMZADLHVQWHBQPYEKOUZ");
    msg.ccq = 27U;
    msg.noise_floor = 4720;
    msg.signal = 15984;
    msg.rssi = 5953U;
    msg.rx_rate = -32399;
    msg.tx_rate = -21060;
    msg.tx_latency = -32157;
    msg.tx_power = 4417;
    msg.rx_count = 378604730U;
    msg.tx_count = 1830821325U;
    msg.distance = -2668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiStats msg;
    msg.setTimeStamp(0.8009780840683489);
    msg.setSource(55191U);
    msg.setSourceEntity(222U);
    msg.setDestination(9657U);
    msg.setDestinationEntity(111U);
    msg.mac.assign("JXOAQSTDAYVDVRDNQCKOSVPQLQIHSUNHWLVZXMCKPSGXAHFBQBCUWGSWXXWGULBDBFLAPORVCZEDSPXKTKNWUTYEMCQTRQPAZFQMWXFECJQIXZMZZZYKKNHAKDBKWBREMU");
    msg.ip.assign("FSSPXCOEOAVFDNIIRMJKTCSFKAEMECHBVZCYUKKNNMMPNEPHEYQHZXLBJDQYQALIZTXKQERIPAMRVMLTWWXONWITGMDXBTAYEJHRPOCK");
    msg.ccq = 14U;
    msg.noise_floor = 31972;
    msg.signal = 7539;
    msg.rssi = 64414U;
    msg.rx_rate = -6425;
    msg.tx_rate = -20821;
    msg.tx_latency = 17714;
    msg.tx_power = 26306;
    msg.rx_count = 3364973338U;
    msg.tx_count = 963318245U;
    msg.distance = 10183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiStats #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.1945137845648629);
    msg.setSource(56093U);
    msg.setSourceEntity(13U);
    msg.setDestination(46437U);
    msg.setDestinationEntity(21U);
    msg.essid.assign("ZALKTAGZVHHSRGLAGRYCHBJJKKZYCRALWELATCILNBVWUOVLDPBVVCCZCHYUMQDQOPHHHIWXFFGTKNUZ");
    msg.mac.assign("NDJSYJDLOMELCIXEODWAAXEUBMNEGVTIXKTZBWKVJLTFUWGADHFAARHNHWPXKZITAMNPQOQJRAENZIDSXBPJRABZVHHCJMPTTSVBPNNIVJOQYIHXYLUJCHRMLRWZZBNQWODAWITKNFSYYEQQBCMRUBMXF");
    msg.signal = 13523;
    msg.noise = -27838;
    msg.ccq = 107;
    msg.channel = 71U;
    msg.freq = 0.1169720609208289;
    msg.security.assign("SVPHSLTQCUHXBMKPYANGBIZQUAKCSKDWKGQWARBLJXP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.06200378997748224);
    msg.setSource(27193U);
    msg.setSourceEntity(203U);
    msg.setDestination(11348U);
    msg.setDestinationEntity(102U);
    msg.essid.assign("KUCQBRIQNTYRBGRWPDFNNGODRVKIRRCAYUMUZSMNZCVBNDKHFVJCERMQBLDYNLXAYPAIODHXHILATWAJZFEEWNHOLJFUEYWGOSNHXATCGHCMRUBWDZPIYEJTCTUQPSSPOIUIXNUZFDJLYSABXKKQPTWQKTOYOAEICJBOGNOKQLTVXZHXHJGVJPRALSWVKPUMZFPMEUTGRGYEWGKEAICFHFELSWPDTSVFMBVDJVLZMCHWXYSJKMBISXXQOML");
    msg.mac.assign("IUPHBNROCGAJIAFYBFUJDQGMW");
    msg.signal = -16484;
    msg.noise = 29216;
    msg.ccq = 23;
    msg.channel = 252U;
    msg.freq = 0.01846220065047921;
    msg.security.assign("TCFSDYCZWXOVVFALTJJFPEPDGLERHVRWGZXUPNJKHPHETSBEZFDZTRZSYHTZQGCGSKODHTEVJCKOWBTBYERNUZJEFUQVNAETZYWULFHAMEMOPJRWUISSARMGRMLA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WifiNetwork msg;
    msg.setTimeStamp(0.9577165617150153);
    msg.setSource(33079U);
    msg.setSourceEntity(201U);
    msg.setDestination(17931U);
    msg.setDestinationEntity(95U);
    msg.essid.assign("TRUIPCITHPREAPIHOCFCOLXFPVVRLWMURELLMYZTZDSXJVLXCCKVDCFOPGJZ");
    msg.mac.assign("NXLIDZYXXPFRHZYSHZGBUKBIYEQYACGMOMQNQSICTJDLRECKRJZGULWOKVODFIKKFWWIIKLZXLVPPVRJAUKGIPCRYQCTFNECRRDFXBSZNOJUBKXBMJGCFHAYEBIRZWQOAOVUDJSPDBKICJSVELJA");
    msg.signal = 13057;
    msg.noise = 25654;
    msg.ccq = -19;
    msg.channel = 103U;
    msg.freq = 0.26039705759313625;
    msg.security.assign("XHPZBLDFHPGULMDXRKXUGVJBRKKTIFPIPZDZWIRRYBMEZEYNVEKBZWDCKORTMCJCXUQIAAHSAFUVZHWTGOKYMEQOTYGFJPUPXYJASWIWHTPFZIVMPGVOOEQMULJWFQTXTWCMTGLCOCJGEBLNMYEJCBNSUIEAHGYJAUYLISRHLENTLMHCXKXLAFIQGKWYRVPUNZVDICNNSGWSYAPKKXVHDDJBDFQTXOSUFDVENSSCHAJRZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WifiNetwork #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.97012809064228);
    msg.setSource(34626U);
    msg.setSourceEntity(156U);
    msg.setDestination(4279U);
    msg.setDestinationEntity(168U);
    msg.frequency = -636099916;
    msg.pulse_length = -1251355423;
    msg.time_delay = -538874327;
    msg.simulated_speed = -1812670314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.04625234733064976);
    msg.setSource(41144U);
    msg.setSourceEntity(187U);
    msg.setDestination(26394U);
    msg.setDestinationEntity(226U);
    msg.frequency = -573352247;
    msg.pulse_length = -394760882;
    msg.time_delay = 1407585675;
    msg.simulated_speed = 242366652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarPulse msg;
    msg.setTimeStamp(0.29274970872264017);
    msg.setSource(18523U);
    msg.setSourceEntity(102U);
    msg.setDestination(20443U);
    msg.setDestinationEntity(142U);
    msg.frequency = -1745377890;
    msg.pulse_length = 1070356292;
    msg.time_delay = -427270163;
    msg.simulated_speed = -524836033;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarPulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WorldModel msg;
    msg.setTimeStamp(0.7714032716048357);
    msg.setSource(36483U);
    msg.setSourceEntity(213U);
    msg.setDestination(693U);
    msg.setDestinationEntity(88U);
    IMC::GeoFeature tmp_msg_0;
    tmp_msg_0.feature_id = 33809U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5744706559731059;
    tmp_tmp_msg_0_0.lon = 0.816929280986763;
    tmp_tmp_msg_0_0.alt = 0.05481286749700276;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    msg.geo_features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WorldModel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WorldModel msg;
    msg.setTimeStamp(0.6413025102765388);
    msg.setSource(62926U);
    msg.setSourceEntity(117U);
    msg.setDestination(4482U);
    msg.setDestinationEntity(33U);
    IMC::GeoFeature tmp_msg_0;
    tmp_msg_0.feature_id = 8762U;
    msg.geo_features.push_back(tmp_msg_0);
    IMC::CoverageState tmp_msg_1;
    tmp_msg_1.feature_id = 20865U;
    tmp_msg_1.state = 23U;
    msg.cov_states.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WorldModel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WorldModel msg;
    msg.setTimeStamp(0.26745264000254);
    msg.setSource(57831U);
    msg.setSourceEntity(117U);
    msg.setDestination(63789U);
    msg.setDestinationEntity(91U);
    IMC::GeoFeature tmp_msg_0;
    tmp_msg_0.feature_id = 22829U;
    msg.geo_features.push_back(tmp_msg_0);
    IMC::CoverageState tmp_msg_1;
    tmp_msg_1.feature_id = 25432U;
    tmp_msg_1.state = 210U;
    msg.cov_states.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WorldModel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GeoFeature msg;
    msg.setTimeStamp(0.9901384333099886);
    msg.setSource(19758U);
    msg.setSourceEntity(17U);
    msg.setDestination(60824U);
    msg.setDestinationEntity(177U);
    msg.feature_id = 6432U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GeoFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GeoFeature msg;
    msg.setTimeStamp(0.2511629938821692);
    msg.setSource(35701U);
    msg.setSourceEntity(206U);
    msg.setDestination(58939U);
    msg.setDestinationEntity(3U);
    msg.feature_id = 11038U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.743188153661045;
    tmp_msg_0.lon = 0.5160572244991661;
    tmp_msg_0.alt = 0.45276633373776365;
    msg.points.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GeoFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GeoFeature msg;
    msg.setTimeStamp(0.384263191031037);
    msg.setSource(34469U);
    msg.setSourceEntity(39U);
    msg.setDestination(16139U);
    msg.setDestinationEntity(125U);
    msg.feature_id = 52386U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GeoFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverageState msg;
    msg.setTimeStamp(0.9413146964495149);
    msg.setSource(21903U);
    msg.setSourceEntity(181U);
    msg.setDestination(29731U);
    msg.setDestinationEntity(36U);
    msg.feature_id = 25987U;
    msg.state = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverageState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverageState msg;
    msg.setTimeStamp(0.38197002889862375);
    msg.setSource(41944U);
    msg.setSourceEntity(193U);
    msg.setDestination(18747U);
    msg.setDestinationEntity(85U);
    msg.feature_id = 47627U;
    msg.state = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverageState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverageState msg;
    msg.setTimeStamp(0.4913880001170403);
    msg.setSource(28531U);
    msg.setSourceEntity(123U);
    msg.setDestination(7659U);
    msg.setDestinationEntity(71U);
    msg.feature_id = 50320U;
    msg.state = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverageState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskAdim msg;
    msg.setTimeStamp(0.8575455703664184);
    msg.setSource(22415U);
    msg.setSourceEntity(211U);
    msg.setDestination(6052U);
    msg.setDestinationEntity(168U);
    msg.tid = 27378U;
    msg.op = 131U;
    IMC::MoveTask tmp_msg_0;
    tmp_msg_0.task_id = 13088U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7471213974825027;
    tmp_tmp_msg_0_0.lon = 0.14176831476543672;
    tmp_tmp_msg_0_0.alt = 0.9358385459360751;
    tmp_msg_0.destination.set(tmp_tmp_msg_0_0);
    tmp_msg_0.deadline = 0.5456455166704471;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskAdim #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskAdim msg;
    msg.setTimeStamp(0.6316675922841181);
    msg.setSource(16886U);
    msg.setSourceEntity(36U);
    msg.setDestination(49776U);
    msg.setDestinationEntity(135U);
    msg.tid = 44941U;
    msg.op = 121U;
    IMC::TaskStatus tmp_msg_0;
    tmp_msg_0.task_id = 49279U;
    tmp_msg_0.status = 193U;
    tmp_msg_0.progress = 144U;
    tmp_msg_0.quality = 239U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskAdim #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskAdim msg;
    msg.setTimeStamp(0.2900869726095856);
    msg.setSource(866U);
    msg.setSourceEntity(72U);
    msg.setDestination(23405U);
    msg.setDestinationEntity(196U);
    msg.tid = 16696U;
    msg.op = 72U;
    IMC::SurveyTask tmp_msg_0;
    tmp_msg_0.task_id = 18782U;
    tmp_msg_0.feature_id = 47246U;
    tmp_msg_0.sensor = 94U;
    tmp_msg_0.resolution = 0.8819817953723358;
    tmp_msg_0.deadline = 0.9000061657805959;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskAdim #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchAdmin msg;
    msg.setTimeStamp(0.9306713234469927);
    msg.setSource(46097U);
    msg.setSourceEntity(140U);
    msg.setDestination(38618U);
    msg.setDestinationEntity(126U);
    msg.op = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchAdmin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchAdmin msg;
    msg.setTimeStamp(0.7006230169218064);
    msg.setSource(16689U);
    msg.setSourceEntity(74U);
    msg.setDestination(18726U);
    msg.setDestinationEntity(242U);
    msg.op = 205U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchAdmin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchAdmin msg;
    msg.setTimeStamp(0.5657939635850852);
    msg.setSource(6445U);
    msg.setSourceEntity(210U);
    msg.setDestination(7451U);
    msg.setDestinationEntity(212U);
    msg.op = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchAdmin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCapabilities msg;
    msg.setTimeStamp(0.3808489523958234);
    msg.setSource(50204U);
    msg.setSourceEntity(152U);
    msg.setDestination(53403U);
    msg.setDestinationEntity(229U);
    IMC::CapabilityAreaSurvey tmp_msg_0;
    tmp_msg_0.sensor = 204U;
    tmp_msg_0.resolution = 0.3295983308797231;
    tmp_msg_0.res_bathym_factor = 0.3982697712374691;
    tmp_msg_0.cov_rate = 0.41998161897712005;
    tmp_msg_0.cov_bathym_factor = 0.365581721874373;
    msg.capabilities.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCapabilities #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCapabilities msg;
    msg.setTimeStamp(0.15230186435044712);
    msg.setSource(5865U);
    msg.setSourceEntity(59U);
    msg.setDestination(9124U);
    msg.setDestinationEntity(58U);
    IMC::CapabilityAreaSurvey tmp_msg_0;
    tmp_msg_0.sensor = 9U;
    tmp_msg_0.resolution = 0.7035087458652827;
    tmp_msg_0.res_bathym_factor = 0.42536309007592166;
    tmp_msg_0.cov_rate = 0.27283605643642395;
    tmp_msg_0.cov_bathym_factor = 0.7675616799085849;
    msg.capabilities.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCapabilities #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCapabilities msg;
    msg.setTimeStamp(0.365682534764323);
    msg.setSource(31487U);
    msg.setSourceEntity(118U);
    msg.setDestination(50164U);
    msg.setDestinationEntity(249U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCapabilities #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityAreaSurvey msg;
    msg.setTimeStamp(0.506864046570939);
    msg.setSource(40659U);
    msg.setSourceEntity(117U);
    msg.setDestination(51692U);
    msg.setDestinationEntity(71U);
    msg.sensor = 163U;
    msg.resolution = 0.20835482145662054;
    msg.res_bathym_factor = 0.7167405039421066;
    msg.cov_rate = 0.4232459103452745;
    msg.cov_bathym_factor = 0.2556582617234666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityAreaSurvey #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityAreaSurvey msg;
    msg.setTimeStamp(0.9841970903855527);
    msg.setSource(24793U);
    msg.setSourceEntity(138U);
    msg.setDestination(47823U);
    msg.setDestinationEntity(126U);
    msg.sensor = 143U;
    msg.resolution = 0.03446501876061048;
    msg.res_bathym_factor = 0.8635016680732068;
    msg.cov_rate = 0.0076108474880351995;
    msg.cov_bathym_factor = 0.5361189641313576;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityAreaSurvey #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityAreaSurvey msg;
    msg.setTimeStamp(0.3866312649317424);
    msg.setSource(50808U);
    msg.setSourceEntity(194U);
    msg.setDestination(29585U);
    msg.setDestinationEntity(207U);
    msg.sensor = 219U;
    msg.resolution = 0.013769357672987592;
    msg.res_bathym_factor = 0.7188353671677411;
    msg.cov_rate = 0.3992836423457371;
    msg.cov_bathym_factor = 0.8655635009517396;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityAreaSurvey #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityPointSurvey msg;
    msg.setTimeStamp(0.8572462931655821);
    msg.setSource(42001U);
    msg.setSourceEntity(106U);
    msg.setDestination(45102U);
    msg.setDestinationEntity(61U);
    msg.sensor = 154U;
    msg.resolution = 0.09669885981097448;
    msg.duration = 0.11627447557623127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityPointSurvey #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityPointSurvey msg;
    msg.setTimeStamp(0.788559402673586);
    msg.setSource(23767U);
    msg.setSourceEntity(101U);
    msg.setDestination(43927U);
    msg.setDestinationEntity(12U);
    msg.sensor = 3U;
    msg.resolution = 0.5447719539114394;
    msg.duration = 0.07034392748125695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityPointSurvey #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityPointSurvey msg;
    msg.setTimeStamp(0.46814251293473685);
    msg.setSource(13801U);
    msg.setSourceEntity(42U);
    msg.setDestination(53469U);
    msg.setDestinationEntity(196U);
    msg.sensor = 4U;
    msg.resolution = 0.360389889800801;
    msg.duration = 0.4502988274608044;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityPointSurvey #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityMove msg;
    msg.setTimeStamp(0.09976509748229712);
    msg.setSource(32415U);
    msg.setSourceEntity(148U);
    msg.setDestination(6109U);
    msg.setDestinationEntity(184U);
    msg.speed = 0.3034782290440521;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityMove #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityMove msg;
    msg.setTimeStamp(0.30195180540393773);
    msg.setSource(46809U);
    msg.setSourceEntity(202U);
    msg.setDestination(7573U);
    msg.setDestinationEntity(151U);
    msg.speed = 0.04990271469513796;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityMove #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CapabilityMove msg;
    msg.setTimeStamp(0.3286244709090732);
    msg.setSource(623U);
    msg.setSourceEntity(128U);
    msg.setDestination(64791U);
    msg.setDestinationEntity(123U);
    msg.speed = 0.9105451794032193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CapabilityMove #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SurveyTask msg;
    msg.setTimeStamp(0.8752673774557254);
    msg.setSource(63485U);
    msg.setSourceEntity(5U);
    msg.setDestination(7595U);
    msg.setDestinationEntity(193U);
    msg.task_id = 59617U;
    msg.feature_id = 56837U;
    msg.sensor = 50U;
    msg.resolution = 0.8720749635215941;
    msg.deadline = 0.748588355687343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SurveyTask #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SurveyTask msg;
    msg.setTimeStamp(0.16845778436965897);
    msg.setSource(45520U);
    msg.setSourceEntity(56U);
    msg.setDestination(5300U);
    msg.setDestinationEntity(56U);
    msg.task_id = 25550U;
    msg.feature_id = 53560U;
    msg.sensor = 127U;
    msg.resolution = 0.549453217211961;
    msg.deadline = 0.759613196118377;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SurveyTask #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SurveyTask msg;
    msg.setTimeStamp(0.13412067947586548);
    msg.setSource(5244U);
    msg.setSourceEntity(245U);
    msg.setDestination(46150U);
    msg.setDestinationEntity(98U);
    msg.task_id = 18621U;
    msg.feature_id = 16400U;
    msg.sensor = 127U;
    msg.resolution = 0.5753312425633487;
    msg.deadline = 0.022977761883523407;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SurveyTask #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MoveTask msg;
    msg.setTimeStamp(0.3261115913768047);
    msg.setSource(40096U);
    msg.setSourceEntity(25U);
    msg.setDestination(52104U);
    msg.setDestinationEntity(71U);
    msg.task_id = 29718U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9725159322164623;
    tmp_msg_0.lon = 0.010404592084121478;
    tmp_msg_0.alt = 0.9263853366075403;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.8214547977921746;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MoveTask #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MoveTask msg;
    msg.setTimeStamp(0.7722536333523969);
    msg.setSource(54915U);
    msg.setSourceEntity(180U);
    msg.setDestination(36244U);
    msg.setDestinationEntity(8U);
    msg.task_id = 9372U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.45667572433308923;
    tmp_msg_0.lon = 0.006499948307141956;
    tmp_msg_0.alt = 0.5927313178184181;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.500272845384325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MoveTask #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MoveTask msg;
    msg.setTimeStamp(0.4608173188118241);
    msg.setSource(32332U);
    msg.setSourceEntity(216U);
    msg.setDestination(14628U);
    msg.setDestinationEntity(203U);
    msg.task_id = 4508U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6263116462148025;
    tmp_msg_0.lon = 0.7160075354461768;
    tmp_msg_0.alt = 0.8752170490403042;
    msg.destination.set(tmp_msg_0);
    msg.deadline = 0.15657192722503666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MoveTask #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskStatus msg;
    msg.setTimeStamp(0.1169103913047217);
    msg.setSource(42441U);
    msg.setSourceEntity(126U);
    msg.setDestination(53239U);
    msg.setDestinationEntity(173U);
    msg.task_id = 5132U;
    msg.status = 165U;
    msg.progress = 127U;
    msg.quality = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskStatus msg;
    msg.setTimeStamp(0.07219203337287272);
    msg.setSource(7245U);
    msg.setSourceEntity(120U);
    msg.setDestination(40540U);
    msg.setDestinationEntity(251U);
    msg.task_id = 31169U;
    msg.status = 134U;
    msg.progress = 148U;
    msg.quality = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TaskStatus msg;
    msg.setTimeStamp(0.5397237606105579);
    msg.setSource(26687U);
    msg.setSourceEntity(251U);
    msg.setDestination(14188U);
    msg.setDestinationEntity(104U);
    msg.task_id = 64344U;
    msg.status = 226U;
    msg.progress = 216U;
    msg.quality = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TaskStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchTask msg;
    msg.setTimeStamp(0.7757763597842293);
    msg.setSource(10820U);
    msg.setSourceEntity(195U);
    msg.setDestination(29554U);
    msg.setDestinationEntity(85U);
    msg.task_id = 10845U;
    msg.feature_id = 43174U;
    msg.time_window = 58887U;
    msg.deadline = 0.2898880257173624;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchTask #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchTask msg;
    msg.setTimeStamp(0.710034247385014);
    msg.setSource(30786U);
    msg.setSourceEntity(26U);
    msg.setDestination(45814U);
    msg.setDestinationEntity(146U);
    msg.task_id = 17778U;
    msg.feature_id = 57180U;
    msg.time_window = 50340U;
    msg.deadline = 0.38889711895091705;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchTask #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SynchTask msg;
    msg.setTimeStamp(0.8221082215711955);
    msg.setSource(14647U);
    msg.setSourceEntity(35U);
    msg.setDestination(8068U);
    msg.setDestinationEntity(197U);
    msg.task_id = 49078U;
    msg.feature_id = 15668U;
    msg.time_window = 4513U;
    msg.deadline = 0.434235765793213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SynchTask #2", msg == *msg_d);
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
