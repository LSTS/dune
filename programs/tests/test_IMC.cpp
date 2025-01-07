//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: bb7e455e8ed7cd2a544c27d8b5b10bc5                            *
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
    msg.setTimeStamp(0.2579020337972058);
    msg.setSource(242U);
    msg.setSourceEntity(12U);
    msg.setDestination(55599U);
    msg.setDestinationEntity(53U);
    msg.state = 195U;
    msg.flags = 11U;
    msg.description.assign("PRXGMUNHDCCZAHUNTQQAFSEBRKCMXLFNGMQSDJBXDIHALEDOEVXSBPNJMUWXCIOFEZYXHGTUVRYEMURLOVDYRBJCJBOYAOUFPPZWCFKLIASYZAZMQTNKLFUIUZXAV");

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
    msg.setTimeStamp(0.9747064843578116);
    msg.setSource(63539U);
    msg.setSourceEntity(111U);
    msg.setDestination(37091U);
    msg.setDestinationEntity(98U);
    msg.state = 112U;
    msg.flags = 129U;
    msg.description.assign("IZGAGJOFPSTFVYKLTBMMRKYWNYZAZDUVOHNXANCGIWLFYWFQPGXQVQYZFWRFJTXKDXHTXRTMDCMXZILFUHQQJMNCFNDWZQKIEEIJRRKEAPOLGBCPPZBEMUPNHBPFMESOLVTDHBPNVTLVCBOCNFRVONRUKHIGLMDOGDUABYQTEMBHEUMPSGSPGBBSCKRXAAIJQWJCIRHIHESVZUAOHJSDLWNIOTVUQWUKEXGZ");

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
    msg.setTimeStamp(0.2008202114445019);
    msg.setSource(11167U);
    msg.setSourceEntity(84U);
    msg.setDestination(15297U);
    msg.setDestinationEntity(52U);
    msg.state = 135U;
    msg.flags = 120U;
    msg.description.assign("XIHYCXMTOZHHDMYOPFKPXNDLKSNXJFVGVUEKATDWNEJJTSIYJTPXVOIZQEEVRZCNJWXSMFITUQMWTJTLZGWXCNNUZQMPXBQYNWMMOKCYSPAISIRHWHQHELGEJEGZFICXRMRBZGYIYQHTYAXVCHEGYOLFJLKFUMQPVYBAREAZKANBLGHQBJKKDQHPKRLFVCTRDRQCSPABBNARPWGDDSBOFSCWPZULBLSSUTKUONFOWURJV");

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
    msg.setTimeStamp(0.005464133446628661);
    msg.setSource(707U);
    msg.setSourceEntity(238U);
    msg.setDestination(27150U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.8047428004632046);
    msg.setSource(43026U);
    msg.setSourceEntity(141U);
    msg.setDestination(49370U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.7030382724755855);
    msg.setSource(23479U);
    msg.setSourceEntity(142U);
    msg.setDestination(53000U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.607013136240863);
    msg.setSource(64108U);
    msg.setSourceEntity(110U);
    msg.setDestination(8992U);
    msg.setDestinationEntity(124U);
    msg.id = 178U;
    msg.label.assign("LOQYYNQJTEJSWQOTQTYCNSQOGIGVCRIXTWUKZCWTQIZNVGBFJMFZEMWLXJXAFUMZHQIUYIPUHNCDUGYLDDYEAHLYOPPRJJXAGGRVVZNZDVBBRKKWCOIWMBDFJDOKZUNCBKQZHEUISDGANUSRWZAWPPFSTBQJYOH");
    msg.component.assign("BRKESPAWFYUZUPSFYGLJCIOSAGFMVBPJHKIRHOSDQIZBNCUSGULXWWYQISLDIXDOCPJRSKTJZGRQNWDVCRMMYXOBHVMUVNDJHAYUYYM");
    msg.act_time = 58926U;
    msg.deact_time = 9741U;

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
    msg.setTimeStamp(0.2010038619802612);
    msg.setSource(45838U);
    msg.setSourceEntity(63U);
    msg.setDestination(42151U);
    msg.setDestinationEntity(43U);
    msg.id = 72U;
    msg.label.assign("IGNSFRTOBCMMZLEVELTHWYHRPGCROUSYJPZ");
    msg.component.assign("TMRBHJOAWGEBUNIABUEVJMEOHQZIXGWOKWUFRITGAXLUFDZMSJMLUPDXPWVEEHXVCTMPWTPHYQFLTYSAWQTYASGJBYQHOS");
    msg.act_time = 2350U;
    msg.deact_time = 49146U;

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
    msg.setTimeStamp(0.2593478749125405);
    msg.setSource(1834U);
    msg.setSourceEntity(204U);
    msg.setDestination(10512U);
    msg.setDestinationEntity(105U);
    msg.id = 186U;
    msg.label.assign("WOIAUDAKFZFYZIYSAVNENNNBCEKWN");
    msg.component.assign("SIDTZPFNRMMZIVWRIUABOEPONHRGSOFCUUQFTLLCCLWJBKDSOLHJVYNWFFUPUFBYYQHEMQCHIQCEUKUXDZTATMBXPFYGCGIUAAYXRDSKQEDIPMYJDZMOWJTNYKASNFRKRKYGHZWVVAPGNDOXGQCLKTITEHTXLVXDOUIMXGESIKVEAAPWXEQLJMOGNLMSHHTYCBAJBAOLRJPCZWSVQLJUHKTBQRHRNWXWGBPISKWZCDEVGDSFZNFOPJRQXBE");
    msg.act_time = 61641U;
    msg.deact_time = 37341U;

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
    msg.setTimeStamp(0.8387718523007203);
    msg.setSource(14817U);
    msg.setSourceEntity(144U);
    msg.setDestination(10622U);
    msg.setDestinationEntity(89U);
    msg.id = 31U;

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
    msg.setTimeStamp(0.34585738028942115);
    msg.setSource(50343U);
    msg.setSourceEntity(124U);
    msg.setDestination(1325U);
    msg.setDestinationEntity(213U);
    msg.id = 225U;

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
    msg.setTimeStamp(0.3358270667455865);
    msg.setSource(5345U);
    msg.setSourceEntity(101U);
    msg.setDestination(31479U);
    msg.setDestinationEntity(67U);
    msg.id = 184U;

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
    msg.setTimeStamp(0.8016240802240723);
    msg.setSource(25384U);
    msg.setSourceEntity(89U);
    msg.setDestination(62240U);
    msg.setDestinationEntity(56U);
    msg.op = 116U;
    msg.list.assign("MBPIATAZMJTLZJTSCRBXMWFOZMLVQMGFIKBQKNLOQAPVPBSJTJLBKKTNKBEJYYZQVJBTPLINYTXYOQDNEEXMPFVGUCE");

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
    msg.setTimeStamp(0.5091808248473184);
    msg.setSource(3462U);
    msg.setSourceEntity(28U);
    msg.setDestination(51134U);
    msg.setDestinationEntity(208U);
    msg.op = 73U;
    msg.list.assign("HMDNOFNPWGBDHPQHQNYWCCOUXZAPTOLRZZ");

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
    msg.setTimeStamp(0.24275981693064952);
    msg.setSource(44944U);
    msg.setSourceEntity(187U);
    msg.setDestination(31918U);
    msg.setDestinationEntity(8U);
    msg.op = 219U;
    msg.list.assign("TPUYBWXLWUERNJZFVBPRUTORXKJAQWYJZKELAUZCHGQWPUZSUZQTTCHAQMVMEMQUEYDGRTHTKSCRWGVVLOJXHFLVIQCOGICOHDSBXVXPIMSWTPKCPEFNIDAZBGLYSBSXKEIXJ");

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
    msg.setTimeStamp(0.7321190996969823);
    msg.setSource(50261U);
    msg.setSourceEntity(192U);
    msg.setDestination(55982U);
    msg.setDestinationEntity(68U);
    msg.value = 77U;

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
    msg.setTimeStamp(0.20865894290879272);
    msg.setSource(31376U);
    msg.setSourceEntity(51U);
    msg.setDestination(9729U);
    msg.setDestinationEntity(244U);
    msg.value = 199U;

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
    msg.setTimeStamp(0.7114541820951937);
    msg.setSource(54580U);
    msg.setSourceEntity(221U);
    msg.setDestination(41866U);
    msg.setDestinationEntity(140U);
    msg.value = 181U;

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
    msg.setTimeStamp(0.6564911848253298);
    msg.setSource(20160U);
    msg.setSourceEntity(132U);
    msg.setDestination(2050U);
    msg.setDestinationEntity(145U);
    msg.consumer.assign("SPGPQBVIYF");
    msg.message_id = 52896U;

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
    msg.setTimeStamp(0.8242058980959098);
    msg.setSource(27647U);
    msg.setSourceEntity(68U);
    msg.setDestination(29095U);
    msg.setDestinationEntity(38U);
    msg.consumer.assign("TKBVAFBVSQNIRDMSGSMHMKWLOXCRRLLTGMWKYIRRYPQIMTYJGZXPAZXAJEJRIZHMXSRFPAIMSCNTUNRIVTBVHSAELAOVZFLYDHZDLGAWTPWEUNAYYCVOQNFUSHDFSLHYDWIHEHNBLWFVKXDWBGODWKHKKHTUPEWPCCOPBUAYFEXNZUJPNTKUDLV");
    msg.message_id = 30021U;

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
    msg.setTimeStamp(0.2825055920069083);
    msg.setSource(14085U);
    msg.setSourceEntity(72U);
    msg.setDestination(43550U);
    msg.setDestinationEntity(89U);
    msg.consumer.assign("IKWTQFWUPQLRJGHDFHVFPZDQEWSIGSSJFZBYHNONWIA");
    msg.message_id = 31290U;

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
    msg.setTimeStamp(0.30219727411000585);
    msg.setSource(50556U);
    msg.setSourceEntity(153U);
    msg.setDestination(31430U);
    msg.setDestinationEntity(30U);
    msg.type = 24U;

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
    msg.setTimeStamp(0.30331689322806143);
    msg.setSource(42403U);
    msg.setSourceEntity(208U);
    msg.setDestination(51956U);
    msg.setDestinationEntity(73U);
    msg.type = 104U;

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
    msg.setTimeStamp(0.9289864994673345);
    msg.setSource(15406U);
    msg.setSourceEntity(163U);
    msg.setDestination(35099U);
    msg.setDestinationEntity(20U);
    msg.type = 134U;

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
    msg.setTimeStamp(0.9383903146879599);
    msg.setSource(6518U);
    msg.setSourceEntity(30U);
    msg.setDestination(38952U);
    msg.setDestinationEntity(109U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.8888804313894295);
    msg.setSource(32777U);
    msg.setSourceEntity(174U);
    msg.setDestination(64443U);
    msg.setDestinationEntity(205U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.6148698600349966);
    msg.setSource(35221U);
    msg.setSourceEntity(122U);
    msg.setDestination(13553U);
    msg.setDestinationEntity(103U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.004870026709895003);
    msg.setSource(32415U);
    msg.setSourceEntity(0U);
    msg.setDestination(59831U);
    msg.setDestinationEntity(66U);
    msg.total_steps = 67U;
    msg.step_number = 238U;
    msg.step.assign("KFFCBXHEBVKBZAYVWELYTTGXEMUIZRDNIBNRPUTNLHQLKWTZNURKDMLCHDISAUFMJOJJLXXSETGFZOJHCHSRUMQQSMFSKNZEIIHVVZW");
    msg.flags = 79U;

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
    msg.setTimeStamp(0.8557489218093887);
    msg.setSource(58092U);
    msg.setSourceEntity(18U);
    msg.setDestination(17220U);
    msg.setDestinationEntity(3U);
    msg.total_steps = 4U;
    msg.step_number = 242U;
    msg.step.assign("MIFSZHDOPTDATPGVJNCEBOLCCWBQUSBLRQIVMXXNBVNSYXFFWDWQPLYGQCMKYWXAJUFZXIIVZQRQXBPYLEMYDTZKGFIAYULWGNHJBFDXVJWYFEKDYUBAGSYZHZGOEPCUVHJPMKHOOTFESBDZKPEOAASWQWRIKPJEUJTIURHONRQHCNTKXRUAPKLLJJCCGLVRANEFSGDSZXRMTBVERKIWDNSSWAMMVMGMOJLOQRTXTD");
    msg.flags = 22U;

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
    msg.setTimeStamp(0.8777510412870807);
    msg.setSource(17893U);
    msg.setSourceEntity(206U);
    msg.setDestination(1602U);
    msg.setDestinationEntity(225U);
    msg.total_steps = 127U;
    msg.step_number = 151U;
    msg.step.assign("EHQCYVZVURYEYRLPZHTAZFLJOIBYTZYFNUMRDROPEEOQKKZQWMWCSSIMCSWZLENCPQTVLIWPXSJBXOLUOWLMUHCOTGUWHRKCPNZJWYIVSDIFKURBBXFWDGMSGGXRVVFADAJVGUYXAAEJKHFZINHXDCTNREBHDUAQOJYXAMQ");
    msg.flags = 242U;

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
    msg.setTimeStamp(0.23916544243916382);
    msg.setSource(26615U);
    msg.setSourceEntity(181U);
    msg.setDestination(45257U);
    msg.setDestinationEntity(135U);
    msg.state = 120U;
    msg.error.assign("QZFQMHMJUVSRPYCJQRCBOKAEWZILAAEMOLQSFBVTZUMEFIPTQOWWZBQHDJISBWSYZSGHEDEFHHCBRQVLRIUGUDRBYVIGQKZTLGFWTCQBUTHWYLLNOVGGPKVWLOXSXZTFNMRWXTYLHBIKJJLNFAKDBX");

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
    msg.setTimeStamp(0.6645039941717807);
    msg.setSource(57166U);
    msg.setSourceEntity(188U);
    msg.setDestination(25912U);
    msg.setDestinationEntity(141U);
    msg.state = 85U;
    msg.error.assign("GKTWPFDUXAMGRYZYSEQCOJLVWSIVBSIWWHTRYRQRJBJPMCFCZVPCHRYXBRIFTJYBADJTKZPUAAHNXDMKXVYAPGHQCFSUEYFBGOFEGSWCOSLTDPBQNAXEOMLREDSTLWT");

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
    msg.setTimeStamp(0.7676400136384833);
    msg.setSource(1049U);
    msg.setSourceEntity(38U);
    msg.setDestination(10778U);
    msg.setDestinationEntity(225U);
    msg.state = 93U;
    msg.error.assign("UXARAGXPBFKSYHGMEJEOTZ");

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
    msg.setTimeStamp(0.8059549260867248);
    msg.setSource(8495U);
    msg.setSourceEntity(10U);
    msg.setDestination(42956U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.23995766033249022);
    msg.setSource(37842U);
    msg.setSourceEntity(5U);
    msg.setDestination(45378U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.07927435114700065);
    msg.setSource(15136U);
    msg.setSourceEntity(217U);
    msg.setDestination(1526U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.26618694979673874);
    msg.setSource(49372U);
    msg.setSourceEntity(129U);
    msg.setDestination(38590U);
    msg.setDestinationEntity(152U);
    msg.op = 10U;
    msg.speed_min = 0.5662827329842586;
    msg.speed_max = 0.940286875968062;
    msg.long_accel = 0.5838808768179738;
    msg.alt_max_msl = 0.4640887657864412;
    msg.dive_fraction_max = 0.7929215387897489;
    msg.climb_fraction_max = 0.059507446436017575;
    msg.bank_max = 0.8865614718912166;
    msg.p_max = 0.2632130149143028;
    msg.pitch_min = 0.31459512137496715;
    msg.pitch_max = 0.5905985425058609;
    msg.q_max = 0.47021310046756615;
    msg.g_min = 0.40797513995304024;
    msg.g_max = 0.5804093115063161;
    msg.g_lat_max = 0.9669942881855007;
    msg.rpm_min = 0.4365491932391269;
    msg.rpm_max = 0.068835515110091;
    msg.rpm_rate_max = 0.5552844004886711;

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
    msg.setTimeStamp(0.1307077815616987);
    msg.setSource(7653U);
    msg.setSourceEntity(33U);
    msg.setDestination(8672U);
    msg.setDestinationEntity(7U);
    msg.op = 222U;
    msg.speed_min = 0.8435645138532378;
    msg.speed_max = 0.6640178162157453;
    msg.long_accel = 0.48623224434691237;
    msg.alt_max_msl = 0.6957850257005966;
    msg.dive_fraction_max = 0.7982466416572248;
    msg.climb_fraction_max = 0.2766617899314341;
    msg.bank_max = 0.10601121360293553;
    msg.p_max = 0.4461796283036742;
    msg.pitch_min = 0.2517651621460071;
    msg.pitch_max = 0.6892859423953454;
    msg.q_max = 0.3930954935866503;
    msg.g_min = 0.9988959824156369;
    msg.g_max = 0.03872777915878478;
    msg.g_lat_max = 0.8365606280706309;
    msg.rpm_min = 0.12188444566317036;
    msg.rpm_max = 0.726749495641223;
    msg.rpm_rate_max = 0.11319345394799529;

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
    msg.setTimeStamp(0.5724824633431608);
    msg.setSource(21958U);
    msg.setSourceEntity(23U);
    msg.setDestination(6098U);
    msg.setDestinationEntity(245U);
    msg.op = 220U;
    msg.speed_min = 0.8971759641501234;
    msg.speed_max = 0.05329428861399488;
    msg.long_accel = 0.2132353348963255;
    msg.alt_max_msl = 0.5159285615312063;
    msg.dive_fraction_max = 0.37204492060336813;
    msg.climb_fraction_max = 0.22876243413520037;
    msg.bank_max = 0.9248823913342179;
    msg.p_max = 0.31288123240768184;
    msg.pitch_min = 0.47513175041300104;
    msg.pitch_max = 0.2535847053437371;
    msg.q_max = 0.08323418659300952;
    msg.g_min = 0.6138730054843443;
    msg.g_max = 0.4391761835614071;
    msg.g_lat_max = 0.9971511906330504;
    msg.rpm_min = 0.8907922939214563;
    msg.rpm_max = 0.6152906832193132;
    msg.rpm_rate_max = 0.5480844981736115;

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
    msg.setTimeStamp(0.14092678449587648);
    msg.setSource(8569U);
    msg.setSourceEntity(90U);
    msg.setDestination(41505U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.8179026168644498);
    msg.setSource(17954U);
    msg.setSourceEntity(207U);
    msg.setDestination(9946U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.3118653685425591);
    msg.setSource(41956U);
    msg.setSourceEntity(223U);
    msg.setDestination(23984U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.5470222753606484);
    msg.setSource(3677U);
    msg.setSourceEntity(235U);
    msg.setDestination(52927U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.40000398203158993;
    msg.lon = 0.7172390823242902;
    msg.height = 0.6105641279633716;
    msg.x = 0.16674265723422155;
    msg.y = 0.2255914207309584;
    msg.z = 0.7447836759781414;
    msg.phi = 0.92845900339275;
    msg.theta = 0.7723227780468471;
    msg.psi = 0.8824966143505466;
    msg.u = 0.9241210849271726;
    msg.v = 0.14147182234486155;
    msg.w = 0.12650275058160498;
    msg.p = 0.8206425458466967;
    msg.q = 0.9425848530061094;
    msg.r = 0.9844378159348268;
    msg.svx = 0.09122980684041349;
    msg.svy = 0.7686695981762763;
    msg.svz = 0.3030684942113746;

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
    msg.setTimeStamp(0.96299426656049);
    msg.setSource(5772U);
    msg.setSourceEntity(33U);
    msg.setDestination(48695U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.9194116761141514;
    msg.lon = 0.7285630135423233;
    msg.height = 0.13050736328494494;
    msg.x = 0.7116245412415898;
    msg.y = 0.15827558578749035;
    msg.z = 0.1296781807611015;
    msg.phi = 0.7216478357632202;
    msg.theta = 0.12419137801344038;
    msg.psi = 0.9808260921728366;
    msg.u = 0.7538790450544254;
    msg.v = 0.07291801527823327;
    msg.w = 0.7557463674902475;
    msg.p = 0.45412686985738215;
    msg.q = 0.5918720192467871;
    msg.r = 0.6763290013971128;
    msg.svx = 0.26553063922292564;
    msg.svy = 0.31398317843853196;
    msg.svz = 0.5473401342971179;

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
    msg.setTimeStamp(0.9386154887245391);
    msg.setSource(17709U);
    msg.setSourceEntity(101U);
    msg.setDestination(49759U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.5769845811905016;
    msg.lon = 0.8772406166949874;
    msg.height = 0.17894157852109138;
    msg.x = 0.7633992181743186;
    msg.y = 0.7602122737620217;
    msg.z = 0.663148357947916;
    msg.phi = 0.1603721997992299;
    msg.theta = 0.5464158662404186;
    msg.psi = 0.47264863249333844;
    msg.u = 0.6044762368986186;
    msg.v = 0.34352428653340406;
    msg.w = 0.4454884822587788;
    msg.p = 0.5164127187638465;
    msg.q = 0.2833060218492237;
    msg.r = 0.2772775737500355;
    msg.svx = 0.9166645235796556;
    msg.svy = 0.1833731810157927;
    msg.svz = 0.5794448580261813;

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
    msg.setTimeStamp(0.7140277096345453);
    msg.setSource(55105U);
    msg.setSourceEntity(167U);
    msg.setDestination(53480U);
    msg.setDestinationEntity(163U);
    msg.op = 251U;
    msg.entities.assign("UGOGJGNMVOJMQXKUHGQNYVDPLKZYSCCIVBCAVVWEEBWJNBWIFNCNIWORLFMOIJXHBTUXRSIQSGNPKAUWAQEOIASCAZMPTRVEZPNFBPQGAPVNIBVERALUEJFLNVEHLMVBXOBHTYQXEKYSSRFMXADQZHCMHTRFSWDTOEZODZJTUYXHKGUKKFLRCOZXKIIQ");

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
    msg.setTimeStamp(0.21133937503797406);
    msg.setSource(16730U);
    msg.setSourceEntity(52U);
    msg.setDestination(5638U);
    msg.setDestinationEntity(187U);
    msg.op = 116U;
    msg.entities.assign("SVJAXTEAQNNOMQOMIFENVVQMACQGKFEFAABQGECQNZUYHZRTGOYYXHNMKMMDCGIZEXQOLJRDFDUTSUKRTXZOOLXSWTWPLIHSLUJGSEFXERBZCQRGYXVKVBZPZJKVOXFSCKAASWVYVMDZJQ");

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
    msg.setTimeStamp(0.34627190967123855);
    msg.setSource(17691U);
    msg.setSourceEntity(95U);
    msg.setDestination(37392U);
    msg.setDestinationEntity(19U);
    msg.op = 109U;
    msg.entities.assign("JOHKMXVUOKQSJNSQWZXBNVJOQUHUNGDVGMYCOQWSOHCLMAOPDBNBWKLAZOWTXPQHRNTFXFFONDTNTQERSXJRVRWGFADCDFIZIKHGTJAWLCBWHVPXIMJKIBKBYFOEIUHMQYEIJEZLRNUUGBQVGRYDLPYJVTRCWLJSQLWSCYVFFSMBJRZSEDDKZYWTTAGOPMPFAXARKBFYPRTYGGKINUPTYAEPXMDXEPEELICHIKS");

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
    msg.setTimeStamp(0.6304832121229543);
    msg.setSource(38289U);
    msg.setSourceEntity(165U);
    msg.setDestination(1159U);
    msg.setDestinationEntity(239U);
    msg.type = 100U;
    msg.speed = 14340U;
    const signed char tmp_msg_0[] = {-45, -55, 46, -25, -20, 35, 29, -95, -122, -111, -76, 75, -62, -17, 120, -51, 70, -71, -28, -69, -118, 19, 35, -26, -29, -53, 36, -30, -88, -100, 14, -86, -106, 57, 64, 49, 46, -109, 91, 4, 3, 86, -46, 53, -97, -96, -15, 84, -59, -63, -12, 96, -80, 37, -80, 110, 34, 24, -16, 69, 33, 77, 70, -81, 56, -60, -86, -66, 58, -6, 104, 101, 89, 31, 44, 12, 73, 103, 54, -90, -18, 67, 50, 26, -123, -26, -99, -22};
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
    msg.setTimeStamp(0.4054764545272773);
    msg.setSource(20472U);
    msg.setSourceEntity(171U);
    msg.setDestination(4029U);
    msg.setDestinationEntity(147U);
    msg.type = 167U;
    msg.speed = 42449U;
    const signed char tmp_msg_0[] = {-77, 126, 42, 73, 20, -84, -91, 49, 78, 42, -112, -20, 53, -54, -84, -88, -76, 72, 25, -6, -108, -87};
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
    msg.setTimeStamp(0.3377777082814081);
    msg.setSource(10397U);
    msg.setSourceEntity(137U);
    msg.setDestination(31376U);
    msg.setDestinationEntity(130U);
    msg.type = 176U;
    msg.speed = 11485U;
    const signed char tmp_msg_0[] = {-56, -60, 35, 13, -20, -10, -81, -128, -34, 63, 25, 54, -123, -60, 40, -101, -50, -18, -123, -124, 5, -4, 28, -64, 11, -12, -97, 80, 11, 38, -4, -96, -84, -16, 122, -105, -46, -104, 122, -46, -93, -79, -67, -49, -126, -56, -113, 30, -82, 102, -113, -27, -1, 21, 72, -106, -128, -21, -114, -125, 83, -55, -66, -11, -125, 43, -41, -111, -104, -41, -97, 120, 44, -127, -117, -19, 95, 84, 79, -99, 59, -3, 46, 28, 10, -117, -80, -99, -102, -126, -4, -91, -67, 114, -75, -82, 13, -105, -25, 114, -56, -101, 93, 82, 29, 18, 77, -93, -119, 75, -120, 63, 104, -33, -111, 97, -8, -70, 61, -82, -15, 122, -84, 69, 38, 40, -127, -108, 62, 76, 38, -79, -36, 3, -77, -111, 8, 113, -27, 5, -87, -30, 112, 55, -57, -124, -57, -89, -32, 44, -44, 45, -41, -9};
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
    msg.setTimeStamp(0.9724899192417105);
    msg.setSource(38355U);
    msg.setSourceEntity(56U);
    msg.setDestination(54288U);
    msg.setDestinationEntity(19U);
    msg.op = 64U;
    msg.tas2acc_pgain = 0.6009014172289093;
    msg.bank2p_pgain = 0.1672360331138858;

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
    msg.setTimeStamp(0.6048216745961581);
    msg.setSource(17147U);
    msg.setSourceEntity(125U);
    msg.setDestination(24712U);
    msg.setDestinationEntity(45U);
    msg.op = 143U;
    msg.tas2acc_pgain = 0.9927783484585928;
    msg.bank2p_pgain = 0.09401874923354059;

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
    msg.setTimeStamp(0.3740853021625057);
    msg.setSource(55381U);
    msg.setSourceEntity(217U);
    msg.setDestination(41387U);
    msg.setDestinationEntity(182U);
    msg.op = 185U;
    msg.tas2acc_pgain = 0.4665942355879027;
    msg.bank2p_pgain = 0.6295962284402944;

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
    msg.setTimeStamp(0.9568024422768395);
    msg.setSource(27305U);
    msg.setSourceEntity(246U);
    msg.setDestination(29713U);
    msg.setDestinationEntity(154U);
    msg.available = 4253991747U;
    msg.value = 203U;

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
    msg.setTimeStamp(0.5425237470206715);
    msg.setSource(12566U);
    msg.setSourceEntity(69U);
    msg.setDestination(3350U);
    msg.setDestinationEntity(133U);
    msg.available = 2887224342U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.9470154945350532);
    msg.setSource(47195U);
    msg.setSourceEntity(249U);
    msg.setDestination(35885U);
    msg.setDestinationEntity(116U);
    msg.available = 1880735163U;
    msg.value = 212U;

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
    msg.setTimeStamp(0.5696134836688539);
    msg.setSource(40147U);
    msg.setSourceEntity(224U);
    msg.setDestination(60198U);
    msg.setDestinationEntity(93U);
    msg.op = 127U;
    msg.snapshot.assign("UXPKXGWBGPKEDVXRJPEQMOKUAGEURJWRMLPBDCFETAECRULWOUIKVGQSYFISSQDAJENAZRBOLRFJCVHTXMSTIUBTJQQYNZEVZYPTCWKRCVIEGIYNBSMBNUVXTQYQBINWYARKAVAZOHHYYNGODDKMQXFGUEKCOCYPKLKSHJIIJHUMHGAHPFZMXNCFVXLHRNFWPJDEQXOBTDHZSONNOWTCLBBFTLFSYPMZDSSXJAOWZJD");
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 167U;
    tmp_msg_0.numsamples = 229U;
    tmp_msg_0.lat = 0.37981212148600807;
    tmp_msg_0.lon = 0.32826110475896764;
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
    msg.setTimeStamp(0.9151897242656568);
    msg.setSource(49396U);
    msg.setSourceEntity(108U);
    msg.setDestination(15398U);
    msg.setDestinationEntity(75U);
    msg.op = 135U;
    msg.snapshot.assign("VGDDYVLDGDQXYIWXCBRUXERWLFNHAJEJZWDMFKAPMVNVCMGJPOCKPQYWARSITPDZPTVTKEMPGPIHPUWYTHEKIFZSEBWTALDNTIYBNAJCMGQGZYEXIILWJCDIVXTOUFLRQCXNFOWMDQVYBLYHJKGMXRIABHRQZOVMJXOKAPSCBUOANZNUSMUZOKGJZUJTHMYTQVUXNWSKWTSGLCYDEFFFHL");
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 15U;
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
    msg.setTimeStamp(0.5362891941270654);
    msg.setSource(27200U);
    msg.setSourceEntity(230U);
    msg.setDestination(18959U);
    msg.setDestinationEntity(242U);
    msg.op = 171U;
    msg.snapshot.assign("POPZYWGFEDGSUSCRFQBZFJBCNFACHZTPAORYAREBPIZUHCBWIKISXIEASDHNMLKDFYYYXGQCEKAOPUMGNXNJFOHZRFZAXRMBXCDOJVDLACDVOLUZMRSSKWILREWSPRWQQFDJABIIIUVZTUUGVBFVGPNHIWLUXLWTEJSVB");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 13495U;
    tmp_msg_0.lat = 0.8558075911986419;
    tmp_msg_0.lon = 0.13319963792315803;
    tmp_msg_0.z = 0.4963437896508609;
    tmp_msg_0.z_units = 190U;
    tmp_msg_0.speed = 0.371448968197742;
    tmp_msg_0.speed_units = 173U;
    tmp_msg_0.duration = 26653U;
    tmp_msg_0.radius = 0.7947054955342538;
    tmp_msg_0.flags = 94U;
    tmp_msg_0.custom.assign("SNQZTANCPRNEHSJGHBTWWQGEGVANTFGTLCRXNOFVKKMCZXQHNJFJKATSMPWFTBHXWEQRFPUHYOIRIBBKNIYOAOPGUVDKDKMABDQKXPBAIUSZEWQYAHVGOZJR");
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
    msg.setTimeStamp(0.70316032849951);
    msg.setSource(31110U);
    msg.setSourceEntity(138U);
    msg.setDestination(43295U);
    msg.setDestinationEntity(97U);
    msg.op = 49U;
    msg.name.assign("PCISQBRCCFABNFGUXRPYSTKJDUXHXZFAXZFVOZEJPYMYCNOIOOHZDISOKVFXVHJTSBGKKGWLZNSTUYMPEEMTRJCXKAIAEGJDRQSBTGBVMSLUQWBRXQKJABOCZARVXFPVEYHYLPMFWPLMNLNHMYZBOPHTQOSWHQYIZTRHLUFNXSUATUVDXZJCTQYEQCMCML");

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
    msg.setTimeStamp(0.22060498380255833);
    msg.setSource(3058U);
    msg.setSourceEntity(191U);
    msg.setDestination(11633U);
    msg.setDestinationEntity(221U);
    msg.op = 136U;
    msg.name.assign("AWVQGGTXOKYHABXPNEKERZICELOKHWXFVHYTXLROXHSSNAHMVHDVOCXHLDPJBWGZMRZRMBMLRSAQYDUDPNUOUCYFBNUUZGKCAKPHVBOBWIFESJJAQKSGERPSHLSLHJEDYCUNZIPFIJKEWWJQFMXYLRPLGGSKKUNWVZMGUWIQMOJQPIEYGCDTCIJQXVMAOARMRYVGODRVCYXNJBCFDNTTXBWNWSQUFQJIFKYTMT");

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
    msg.setTimeStamp(0.534357018614758);
    msg.setSource(14844U);
    msg.setSourceEntity(25U);
    msg.setDestination(45431U);
    msg.setDestinationEntity(16U);
    msg.op = 186U;
    msg.name.assign("YFDYIZAHCMFPYYSXD");

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
    msg.setTimeStamp(0.12725675357587574);
    msg.setSource(63500U);
    msg.setSourceEntity(59U);
    msg.setDestination(36927U);
    msg.setDestinationEntity(248U);
    msg.type = 124U;
    msg.htime = 0.10600467362369193;
    msg.context.assign("GEQQAKIWTHOARQEOLASRTXWIXXDZPGXRCXVOJMUYFKFZWSNGJYVGOHIJCINWWSMTMHLDNPXXVCJWPCZQYEJZDL");
    msg.text.assign("RIJXZPQEZBVKUIDOTIIWZEDPCJYWQRGMABDEUXOMXW");

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
    msg.setTimeStamp(0.5441903280559971);
    msg.setSource(2204U);
    msg.setSourceEntity(254U);
    msg.setDestination(34522U);
    msg.setDestinationEntity(16U);
    msg.type = 214U;
    msg.htime = 0.2668272075592447;
    msg.context.assign("DATYHZUDUMZRXPKREYIGESUPCCPEDTQ");
    msg.text.assign("WYHNZASPOBSYYZBYMNVCMUOHHEFESVYTQTTURZLAYKVRECACXKGXMNKQJFPNADZPPUFOXGDHIEAFBDYCJYALWQZBSRNRECOWPIUWGSBPQINUFCMMSAHJLOZTNQLMDGZZGKPGKOWQWVEMXWGRKMIJCLUCSATAVXRFIVADLNJBXLMVDQYOTQLGIIECXOSWPZSLVCNRMRB");

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
    msg.setTimeStamp(0.06303100467078104);
    msg.setSource(19597U);
    msg.setSourceEntity(26U);
    msg.setDestination(63037U);
    msg.setDestinationEntity(97U);
    msg.type = 216U;
    msg.htime = 0.018122624586800584;
    msg.context.assign("NHZIBINNWCUUICZJPJTECUPPOMLHOUSDDHGGAAYWDMDRXZXBDWTKMOJHHMXZYGTJTPQYXKSYWQLCVCRVVFKEAUWQVNIRWPNQUGZUTKFQBGTBLFEBDOLYEHOAYPLWVHESCKWSMMVWFONAAHMCQJDFIMXDVJRKDBUTOHTUEFAPVRPOBZRIIFSMQNDGKAFKXLXGITGROBZYEZKWYTARJSLUIYMZJGJKJZNQLQRBS");
    msg.text.assign("MODRAMDEMNKUXMKQZMCIKDQVOCISGJNEVNS");

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
    msg.setTimeStamp(0.03347782618399742);
    msg.setSource(44057U);
    msg.setSourceEntity(7U);
    msg.setDestination(31535U);
    msg.setDestinationEntity(3U);
    msg.command = 34U;
    msg.htime = 0.6519015135421062;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 163U;
    tmp_msg_0.htime = 0.24914460649742232;
    tmp_msg_0.context.assign("RYLWJDIWSPNXKVALWFUOGYWYHMQHKYVCULHWQVXAEIEBPBXDNFDTJBXMJJFSSLOKWRLJMVFNRRBYBINVGMETANSELRTAXFZKQSUPOBDCZSHPAQITUXFQOHMGHQSKOGJFTLBZOQXGDYIZVNVDBXLBZCSQYTQCVKEHIHOGWZAQAKLGNAUNGXFXMCAULB");
    tmp_msg_0.text.assign("AMKMZVJCUNMJJHCGJHNEFOEFRBUYUAXXADBPWVPLGPGEAXCRGHINMTLYDRCCZOIAZTQDPGSAEAWKXDPYOLHTZQLPSUYDZIBFQDWIVCMTKEJXHWTTRHYARKUPKAJPSOROYITQFWXSEHDHTUNGIFMLNEZBVOQODQVTGKEVGRGRJBPBNXKLFRKUPRNMWNMIHWNWMSLDOSKYYFZLWJVZBIIBGCBXUFBFSSIOLUFXONVJYSZEDYLCCUJ");
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
    msg.setTimeStamp(0.3989114847230326);
    msg.setSource(30836U);
    msg.setSourceEntity(148U);
    msg.setDestination(41861U);
    msg.setDestinationEntity(109U);
    msg.command = 176U;
    msg.htime = 0.07244187281522108;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 136U;
    tmp_msg_0.htime = 0.9832759396541768;
    tmp_msg_0.context.assign("RFOMVHJMQBFFIJWDFKKWXKLPOTWQBWMQNZGZIWYZESEZIQHADVTBXYKSGNHVCLVILGNDLNJUJDNHDAJAILGMFUYYYTUMQEJGSJVSXKITQIBZARCKTPCVUBDHKXCEFNSLGAREUOBYDZAZMSOBPOAOGAZKXRXUKNGFPEPVRAQOYFHUWMCNSWJZTLJMOTIOHGPSELPYFMEADVRDLNHTKRXUPXCIYBBNPEXWUB");
    tmp_msg_0.text.assign("FLAJGCYZEGUPSMLGMKWTYOEXGDWLIIRSWVJNSPJPIZRLLXGFOERRXZRPNKLAPQSQUBWGKRXXJTXRAMABFWNJDMBCQOMTFPGHSBRHPSOD");
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
    msg.setTimeStamp(0.4326688343971764);
    msg.setSource(7843U);
    msg.setSourceEntity(92U);
    msg.setDestination(64946U);
    msg.setDestinationEntity(117U);
    msg.command = 158U;
    msg.htime = 0.0714249141427159;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 161U;
    tmp_msg_0.htime = 0.03965597424992606;
    tmp_msg_0.context.assign("DRXYHJKCIRQAHEOFDZAJKIMQQZRGHAXXLDLAUYPZIZEWXDXUIWRTUNAUMMUCIQUODVRGIPWYYGFZIWTDCNVZQENOKVPNIRJFKMJVVZHLGSZYTQCMRITGQHOJMQYYNELLPVKWOSFMCEUGMEXYVTBCRLDOFTBHSSVGSBREPXBTPGKWVLJISJNZNHSQAHKTDWRSPOCNGTKAUYHWLJAKCTBAULZEBOFHCFBCPVJBOYEFGMDKDSPFBNPJQOEAWXSFMN");
    tmp_msg_0.text.assign("IFXBOCPNZRDJCSNICJNONCHCWEGMHRUPGQLYNLGMMLGGHVWIWOQYCWUXGBIRUYBERFUXUDPYKOZDPLOSZTROSWDFFUMJXKQLBQPTEUAPEAWQABFNLNBJCXXKYUFLCABVXEWHWHNMREGDJVOPPTHATKEKNJIVFSPNUFJYTYSATUKMIYTXZRSTIZZSTSVHYPAQKWJSVZJLQDLHQJKMODCXFZMTBIRCVODDIVZEEKYG");
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
    msg.setTimeStamp(0.49291706154586423);
    msg.setSource(64044U);
    msg.setSourceEntity(217U);
    msg.setDestination(38419U);
    msg.setDestinationEntity(35U);
    msg.op = 231U;
    msg.file.assign("LELNOGXWSTCUESTNUVSSFDKXDRHKQKUDEFEBJMTNGUJHYXLDLRGKPGLASOWWFUPFZHMHCRWHVMTRVNEYPASJWRJLICDGAZRPWYEZOCFYKUWGVDBBIGHCZXLYLDNJUSUBHRQIBITVNIVCPQZFYIX");

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
    msg.setTimeStamp(0.8879955565459965);
    msg.setSource(34084U);
    msg.setSourceEntity(176U);
    msg.setDestination(15214U);
    msg.setDestinationEntity(83U);
    msg.op = 37U;
    msg.file.assign("BKQSURWFMZSTTMQNPLHNMOELGJXCDOPQICPZUEPRBSRCJIKHCXAHCOAQGFNJSSTSVHBJAGKVHLRVWBEPTTTLEKQXKBZZJIBHXURYFSGDVUILNMMFLGWQIBDRHAJIGDFQGYOFHENXYHAODCZDGWLSBLJSNUBWWADMCUUF");

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
    msg.setTimeStamp(0.7304355919178426);
    msg.setSource(59872U);
    msg.setSourceEntity(226U);
    msg.setDestination(33252U);
    msg.setDestinationEntity(189U);
    msg.op = 226U;
    msg.file.assign("FJKCZKECSGYHJPFKVZRKTGEFXYWMDUISOQLBPICEMLPSJHASLXCLZDBOWWYNLKUJOYOXKULRLLVNJSNQPDKSALHGERCQRTGMXJNFTXSIZFBKGAIEFEOBHTJXVSJWETRAZG");

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
    msg.setTimeStamp(0.3003222809402769);
    msg.setSource(53042U);
    msg.setSourceEntity(12U);
    msg.setDestination(21185U);
    msg.setDestinationEntity(121U);
    msg.op = 192U;
    msg.clock = 0.6958010311370221;
    msg.tz = -112;

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
    msg.setTimeStamp(0.33781059876405495);
    msg.setSource(43323U);
    msg.setSourceEntity(224U);
    msg.setDestination(54393U);
    msg.setDestinationEntity(229U);
    msg.op = 52U;
    msg.clock = 0.756023525378995;
    msg.tz = 42;

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
    msg.setTimeStamp(0.6914040756080183);
    msg.setSource(50721U);
    msg.setSourceEntity(6U);
    msg.setDestination(33305U);
    msg.setDestinationEntity(200U);
    msg.op = 80U;
    msg.clock = 0.6551201763625075;
    msg.tz = 63;

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
    msg.setTimeStamp(0.6874620126457597);
    msg.setSource(39630U);
    msg.setSourceEntity(130U);
    msg.setDestination(59849U);
    msg.setDestinationEntity(31U);
    msg.conductivity = 0.7215522742598511;
    msg.temperature = 0.14988974613417316;
    msg.depth = 0.5944965275588595;

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
    msg.setTimeStamp(0.6115826146315191);
    msg.setSource(59512U);
    msg.setSourceEntity(149U);
    msg.setDestination(52835U);
    msg.setDestinationEntity(195U);
    msg.conductivity = 0.03485401269556465;
    msg.temperature = 0.5009622269432829;
    msg.depth = 0.250034192774527;

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
    msg.setTimeStamp(0.15824442838298547);
    msg.setSource(30911U);
    msg.setSourceEntity(168U);
    msg.setDestination(25871U);
    msg.setDestinationEntity(236U);
    msg.conductivity = 0.1584419964716356;
    msg.temperature = 0.6302585321309658;
    msg.depth = 0.126600614137506;

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
    msg.setTimeStamp(0.6268954930476089);
    msg.setSource(42811U);
    msg.setSourceEntity(63U);
    msg.setDestination(39970U);
    msg.setDestinationEntity(19U);
    msg.altitude = 0.5310493807153817;
    msg.roll = 21461U;
    msg.pitch = 63849U;
    msg.yaw = 37239U;
    msg.speed = -17950;

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
    msg.setTimeStamp(0.6501078908819257);
    msg.setSource(30855U);
    msg.setSourceEntity(117U);
    msg.setDestination(25222U);
    msg.setDestinationEntity(60U);
    msg.altitude = 0.520102240321484;
    msg.roll = 34405U;
    msg.pitch = 2173U;
    msg.yaw = 39900U;
    msg.speed = -30272;

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
    msg.setTimeStamp(0.5934165039336139);
    msg.setSource(4334U);
    msg.setSourceEntity(62U);
    msg.setDestination(30016U);
    msg.setDestinationEntity(28U);
    msg.altitude = 0.5630556502051123;
    msg.roll = 42626U;
    msg.pitch = 65320U;
    msg.yaw = 1556U;
    msg.speed = -1484;

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
    msg.setTimeStamp(0.6745366800035609);
    msg.setSource(47468U);
    msg.setSourceEntity(20U);
    msg.setDestination(40329U);
    msg.setDestinationEntity(251U);
    msg.altitude = 0.21146236845646715;
    msg.width = 0.23761880519393896;
    msg.length = 0.35320498723485416;
    msg.bearing = 0.4723160561841183;
    msg.pxl = -6801;
    msg.encoding = 244U;
    const signed char tmp_msg_0[] = {-51, -32, -105, 87, 123, -17, 47, 116, -18, 61, -59, -119, 49, -91, -47, -53, 64, 106, -5, 104, 86, 20, -43, -48, -40, 62, 89, 3, -10, -117, -40, 90, -67, 28, -55, -125, 27, 92, 33, 73, 35, -46, -98, -15, -18, 28, -26, -16, 49, 27, 53, 50, 100, 96, -73, 92, 89, 59, -80, 49, -119, -102, 3, -77, -118, -47, 75, -19, -126, 4, 94, -37, 9, -35, 123, 90, 57, 117, 29, 26, -56, -39, -74, 124};
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
    msg.setTimeStamp(0.9454873703349709);
    msg.setSource(63975U);
    msg.setSourceEntity(212U);
    msg.setDestination(55164U);
    msg.setDestinationEntity(155U);
    msg.altitude = 0.4877061528393829;
    msg.width = 0.7153630583284866;
    msg.length = 0.7392963099643873;
    msg.bearing = 0.6166991533242143;
    msg.pxl = -23181;
    msg.encoding = 172U;
    const signed char tmp_msg_0[] = {85, -76, 115, 58, 65, -40, 119, -18, -94, 102, -44, 14, 60, 92, -45, 95, 49, -109, -38, 39, -1, 55, 73, -13, 49, 113, 19, 2, 74, 82, -116, 54, 124, -25, 44, 80, -17, -126, -6, -30, 9, 48, 15, -87, 112, 118, -41, -15, -1, -97, 35, 53, 28, 13, 21, 116, 3, -111, -94, -64, -51, -43, 46, -60, 81, 39, 22, 89, -81, -59, 59, 106, 84, -111, -98, 16, 109, -7, -57, -37, 119, -69, -89, -116, 50, 109, 95, -92, -127, 81, -6, -92, 64, -94, -85, 53, -102, -114, -33, 37, 26, 56, 126, 46, -117, -101, 85, 19, 103, 16, 63, 63, 124, 12, -110, -101, 114, -98, -59, -67, -94, 7, 55, -70, -66, 32, -110, -95, 36, -90, 12, 104, -79, 107, 8, 117, 122, 94, -54, -26, 120, -67, -101, -5, 53, -85, 38, 107, 1, -28, -74, 57, 121, 93, -26, -6, -75, -117, -81, -42, 88, 20, -57, 10, 106, -88, -116, -26, 102, 10, 32, 116, 92, 109, -10, -94, -25, 23, 96, -74, 49, -109, -36, 57, -80, 104, 106, 38, 6, 37, 85, -87, -62, 35, -105, -25, 85, 61};
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
    msg.setTimeStamp(0.9526704479846698);
    msg.setSource(44204U);
    msg.setSourceEntity(157U);
    msg.setDestination(41019U);
    msg.setDestinationEntity(171U);
    msg.altitude = 0.8597871226838656;
    msg.width = 0.5520970829095152;
    msg.length = 0.36748797814113243;
    msg.bearing = 0.514892640949961;
    msg.pxl = -7912;
    msg.encoding = 102U;
    const signed char tmp_msg_0[] = {-79, -16, -54, 38, -112, -50, -95, -105, -43, 9, -120, 40, -93, -21, 33, 10, -102, -50, 117, -33, 42, -106, 85, -79, 70, -54, -102, -111, -38, -18, -97, 13, 104, -96, 109, 19, -85, -104, 113, 51, 27, 8, -20, -111, -58, -119, -83, -23, 103, 115, -103, 124, -25, -114, 18, -94, -62, -117, -65, 81, 57, 115, 5, -34, 85, 7, 28, -4, 14, -95, -119, -31, -10, -48, -20, 23, 54, -63, 49, 100, -8, -88, -50, -20, -80, 12, -71, 43, -82, -43, -111, -69, -19, -69, 34, -10, 114, -85, -11, 99, 96, -10, 78, 45, -119, -32, -68, 107, -96, -66, 19, -81, -70, 115, 10, -29, 48, 78, 3, -60, 115, -122, 77, -13, 46, -64, -24, -97, 84, 126, -2, 40, -112, 6, 85, 14, 82, -108, 30, -55, -28, -20, 87, 25, -54, 7, 91, -122, -32, -103, 41, -94, 116, -75, 62, 31, 89, -16, -79, -126, -95, 70, 53, -61, 54, 27, -41, -23, 72, 99, -93, 6, -40, -53, 100, 51, -2, 55};
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
    msg.setTimeStamp(0.40621572652756255);
    msg.setSource(49246U);
    msg.setSourceEntity(78U);
    msg.setDestination(63280U);
    msg.setDestinationEntity(123U);
    msg.text.assign("LNAKQZAEAVHTXQKKXCZAQJFHLNFZVYNACGFMJSVUTOZLFCJUEYAGXVLRPFSXNBUEXJRYPEBREZJMZUDPNXJWCOBYQWHWFMBOK");
    msg.type = 237U;

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
    msg.setTimeStamp(0.7048466118296136);
    msg.setSource(31522U);
    msg.setSourceEntity(24U);
    msg.setDestination(2442U);
    msg.setDestinationEntity(195U);
    msg.text.assign("XUJNJNZELUBSRGVSPXITXXGQVKDMZAEQHEGKJCXUHYDNHJEAPFBDIGYRRXBIINDFWGBPCFMIHAWFTAQOIHYCTGDSYBRACHRQBJRAFQVEQVENLUZDXNPTUTLOLAIVLOKWTRSIRXZWQYWSPPKCRZPPOSDRNWCMWMYAEXCGZIEWOVOSBQKKHKVJKBLMOFGGTLHVGDYWAHTOWJUSMZVJZNTKBCP");
    msg.type = 23U;

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
    msg.setTimeStamp(0.28253720898180057);
    msg.setSource(38787U);
    msg.setSourceEntity(111U);
    msg.setDestination(46069U);
    msg.setDestinationEntity(159U);
    msg.text.assign("HXGAKPSVMGQVPYHPJBCOHFNTIUXMOUCMKXPTQD");
    msg.type = 46U;

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
    msg.setTimeStamp(0.31048383777346067);
    msg.setSource(42736U);
    msg.setSourceEntity(88U);
    msg.setDestination(16174U);
    msg.setDestinationEntity(37U);
    msg.parameter = 252U;
    msg.numsamples = 121U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 28027U;
    tmp_msg_0.avg = 0.8671518926135245;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.4635454953774435;
    msg.lon = 0.1672283603800757;

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
    msg.setTimeStamp(0.31296502564687156);
    msg.setSource(18870U);
    msg.setSourceEntity(49U);
    msg.setDestination(42986U);
    msg.setDestinationEntity(113U);
    msg.parameter = 203U;
    msg.numsamples = 34U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 59046U;
    tmp_msg_0.avg = 0.35014071945419145;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5527028318570874;
    msg.lon = 0.08793904848590528;

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
    msg.setTimeStamp(0.11993516996520404);
    msg.setSource(40922U);
    msg.setSourceEntity(184U);
    msg.setDestination(14737U);
    msg.setDestinationEntity(213U);
    msg.parameter = 77U;
    msg.numsamples = 204U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 62109U;
    tmp_msg_0.avg = 0.6104001771162888;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9922655943112303;
    msg.lon = 0.4831114497112807;

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
    msg.setTimeStamp(0.44761119358261814);
    msg.setSource(40673U);
    msg.setSourceEntity(57U);
    msg.setDestination(44224U);
    msg.setDestinationEntity(170U);
    msg.depth = 31717U;
    msg.avg = 0.7490139652521486;

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
    msg.setTimeStamp(0.10490086765233941);
    msg.setSource(27323U);
    msg.setSourceEntity(98U);
    msg.setDestination(30844U);
    msg.setDestinationEntity(122U);
    msg.depth = 23842U;
    msg.avg = 0.005213574614562955;

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
    msg.setTimeStamp(0.28181654776688314);
    msg.setSource(6765U);
    msg.setSourceEntity(180U);
    msg.setDestination(52905U);
    msg.setDestinationEntity(199U);
    msg.depth = 50677U;
    msg.avg = 0.8851594004235611;

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
    msg.setTimeStamp(0.9100891064149652);
    msg.setSource(19276U);
    msg.setSourceEntity(104U);
    msg.setDestination(32780U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.2580641666652145);
    msg.setSource(41385U);
    msg.setSourceEntity(166U);
    msg.setDestination(27207U);
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
    msg.setTimeStamp(0.02584380605003389);
    msg.setSource(42593U);
    msg.setSourceEntity(125U);
    msg.setDestination(3996U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.5388360104924657);
    msg.setSource(51750U);
    msg.setSourceEntity(187U);
    msg.setDestination(36497U);
    msg.setDestinationEntity(115U);
    msg.sys_name.assign("WENHVUKBMLKAJNCJMWOGNQCGZLJWRAXIPHLEGSPFKWQGWCJCHMVXODSIWEASPIBNDQQYKMPEUDDEXRUOKNEKIPDXPNVYZQRBSTUQAZLGCUKAOTFHLAHYQAMTDBOCFULYNIJRABTDTPAGTMIUFKLOJLVPLMXSNKHTZRDSMRCTGGYZSRCYWZIFWSZLJXVWYUEURVZNEOCVYVBVEZBGBNBRHFOPAYIPWDBMOJUSXGSHKTOXDZFC");
    msg.sys_type = 69U;
    msg.owner = 7145U;
    msg.lat = 0.20781554290412363;
    msg.lon = 0.5847557849833157;
    msg.height = 0.06554098427635202;
    msg.services.assign("YNIAXIMKQCRYBLCMAFPEFSQGNPESKJOJMBSWSUDKRAOFTJHIMQYGPIDHJPQVCOZOHKYJEGAPGZLBNXFREEDJNWIHQVPRXCAJCRXDAFAVPLFCWIMEYBFKRCTGZYZHBUWZNBDYMEULDAEMHTXQCYWJQWKLUEKHBTMKOTNTHUVXZNOKHUTFRGWIDPSUCXUIMZALQBYVZVGIMJVWLSRJWQOFXKSNGGULNDORVVPSHNTAXSWSLOVBP");

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
    msg.setTimeStamp(0.018357699160679197);
    msg.setSource(21950U);
    msg.setSourceEntity(174U);
    msg.setDestination(13301U);
    msg.setDestinationEntity(97U);
    msg.sys_name.assign("ZUSKWEXSOLVTCHBJRHJUHYAINJJBXHYYUEENVWMUGGYCBMFOGRMSGSISALBFKVQCWKHVRBAECSXKAQJWIWCLDTBNHNYUIYZDDWURRQPDHFI");
    msg.sys_type = 248U;
    msg.owner = 55907U;
    msg.lat = 0.5455378530876387;
    msg.lon = 0.04248413089590719;
    msg.height = 0.5070271197961436;
    msg.services.assign("CDMXWLPRJRODFAEBDWZLNSPNYXSQGZUGNJQNOYTSFMQCTYEXDVCIHVAALZSAHMBZQFWKKCDSZLOCWQFTHLYFBYPIJTTHSYMIB");

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
    msg.setTimeStamp(0.8680246071155328);
    msg.setSource(5263U);
    msg.setSourceEntity(246U);
    msg.setDestination(31024U);
    msg.setDestinationEntity(182U);
    msg.sys_name.assign("LMOUSBPLEZKIPZMCFVQBJWBKYZLNDTCEMAXCEXQQVNMQQPIFZYBNCMHNBOHZVSATWWXDMXIRFSQHQDLZIWUSAMDXZRYFSIRYPFUCBAKTVULPVEZDDYPFJATHXGOQBWHJHNIGSCGGFFIGBGIZ");
    msg.sys_type = 217U;
    msg.owner = 47658U;
    msg.lat = 0.6482462972544555;
    msg.lon = 0.2672189833229912;
    msg.height = 0.8015330654420628;
    msg.services.assign("EWTUVLHOXCBPDFLDCLZMPAMFOWHEAWMOJPVRCBQTIFKUBLGCCBKUIDYEUDSBJXAQJBVQNEOJRE");

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
    msg.setTimeStamp(0.3757593309483709);
    msg.setSource(25867U);
    msg.setSourceEntity(118U);
    msg.setDestination(710U);
    msg.setDestinationEntity(244U);
    msg.service.assign("JKKKRCPKXASVAFWKOVAQTDGEODDOCHFKHCADRIVTSRCMNDQGXYIEYJEWMYCJTBAURXM");
    msg.service_type = 51U;

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
    msg.setTimeStamp(0.2780156636119081);
    msg.setSource(7583U);
    msg.setSourceEntity(241U);
    msg.setDestination(63780U);
    msg.setDestinationEntity(93U);
    msg.service.assign("DBCQVDHZXXCPPGHQYIBXTYOKPBMKEIG");
    msg.service_type = 125U;

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
    msg.setTimeStamp(0.36499578465477245);
    msg.setSource(5539U);
    msg.setSourceEntity(3U);
    msg.setDestination(44970U);
    msg.setDestinationEntity(185U);
    msg.service.assign("DUGGVZHFGXNOXTWUWUWRKDWJBAHNLKCLA");
    msg.service_type = 54U;

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
    msg.setTimeStamp(0.9070491315074898);
    msg.setSource(9221U);
    msg.setSourceEntity(220U);
    msg.setDestination(15386U);
    msg.setDestinationEntity(229U);
    msg.value = 0.559589224938342;

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
    msg.setTimeStamp(0.020692603597748715);
    msg.setSource(15101U);
    msg.setSourceEntity(59U);
    msg.setDestination(15827U);
    msg.setDestinationEntity(142U);
    msg.value = 0.2421095751083423;

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
    msg.setTimeStamp(0.2623506727375322);
    msg.setSource(51340U);
    msg.setSourceEntity(37U);
    msg.setDestination(38731U);
    msg.setDestinationEntity(219U);
    msg.value = 0.0909052022493183;

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
    msg.setTimeStamp(0.5385406572245087);
    msg.setSource(46484U);
    msg.setSourceEntity(23U);
    msg.setDestination(27515U);
    msg.setDestinationEntity(195U);
    msg.value = 0.953452112103115;

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
    msg.setTimeStamp(0.36791284490280285);
    msg.setSource(29309U);
    msg.setSourceEntity(84U);
    msg.setDestination(50605U);
    msg.setDestinationEntity(250U);
    msg.value = 0.9806647370934355;

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
    msg.setTimeStamp(0.11109988984264374);
    msg.setSource(64582U);
    msg.setSourceEntity(120U);
    msg.setDestination(42367U);
    msg.setDestinationEntity(9U);
    msg.value = 0.9454273685757322;

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
    msg.setTimeStamp(0.2170798338949974);
    msg.setSource(54185U);
    msg.setSourceEntity(77U);
    msg.setDestination(24471U);
    msg.setDestinationEntity(200U);
    msg.value = 0.35322144140325684;

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
    msg.setTimeStamp(0.801180946234602);
    msg.setSource(42715U);
    msg.setSourceEntity(245U);
    msg.setDestination(46359U);
    msg.setDestinationEntity(74U);
    msg.value = 0.14099251577139849;

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
    msg.setTimeStamp(0.1438809334799035);
    msg.setSource(28103U);
    msg.setSourceEntity(166U);
    msg.setDestination(9927U);
    msg.setDestinationEntity(158U);
    msg.value = 0.43179425753341893;

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
    msg.setTimeStamp(0.15716923690601503);
    msg.setSource(13427U);
    msg.setSourceEntity(132U);
    msg.setDestination(62358U);
    msg.setDestinationEntity(13U);
    msg.number.assign("MMYCNCDWDPKPFVYXAXUWLCBGEZTNASTYDGSFAZAWXNBPEFDTWHILNSCKIKOOGUWBSFMIUZVQORXDJZQZCJYSJKZQUHJBQKPJQXTVTQLMVRKLAWBFFWLNVERGAOSMDEBGPBTODIVONHPRCTVMAHCAXHBXFZXZXIEKUTAT");
    msg.timeout = 38114U;
    msg.contents.assign("NYECJXJZOJYVKNXEGHHVAUOCLEIFIYFMWBWXQFEBEKVKMHWWANMMZCPYSPOUHMHVFAVZFWSSPTBRNNQGHOBFHDILTDZFUASIRYCHQWMKZNCYQELCNBTVRQMOSGJJEGQRXCGPKPRDRDOYFAXSKLKTSIZFTXQYQUKECAUGZSEJNQDGVFMUOEPBBIHUJNPLTRPDRRLGKLUH");

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
    msg.setTimeStamp(0.19625198105313013);
    msg.setSource(11458U);
    msg.setSourceEntity(65U);
    msg.setDestination(56014U);
    msg.setDestinationEntity(245U);
    msg.number.assign("TWAHYRSDGEUIFULFNSSMCOQCUKHUJJUOKCVFZJYNDEGEBFUTBFVGHDHOHHEKYKRGFYJQHLXCAKVUVCJLFNERRIAHLZXPENLCNTB");
    msg.timeout = 5254U;
    msg.contents.assign("OXDFMYAGQAJGFXYFRIFKUACCWXZANBBDTXQ");

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
    msg.setTimeStamp(0.4384529509710009);
    msg.setSource(4077U);
    msg.setSourceEntity(229U);
    msg.setDestination(24708U);
    msg.setDestinationEntity(84U);
    msg.number.assign("BDJEELQEHVBGTGENUPXUYORXZOVDJNLOZMPRLRRZCVBQOFOAGJECWLLBXXFTUTKUMNPPMCFHWDNZBFYRBSSYFMMFWHASJPCUYVKJXCAQWSREAFKKOSZMFIICYHLXKTBHSOVVUIEQOMALUHLPMTNVTGTIAZAHKBCCQKNNWJQQWZSVYMGSNUKXVDJHTYRDAFSHTIDZXOVHWYQAGCICBPDJLBPTUQYWPEIAJKIIDPEJRYGQMZGZRNEIL");
    msg.timeout = 11643U;
    msg.contents.assign("NSJFTOBAZSQIAFXHZUAKCLYXZHOYFFSITBNEDVULYCJOHZHKKDMEJGTWNMRTGMQLDLITESHDJKOKQYRLCRECMFDCGJMVXTUMILBDPYIURHBNGLKFWSRJLRUSRQRNMSAZPGBQQMVWTSVOPRJNCWPOPWQFGFEEHZLAKDWSZUDCYYIOXZIHOFVBKCVSNCAHMEXEQWPVPUPMWXCKVUIGBGJZPGDUYXJYNKIEXQVTXABDAOO");

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
    msg.setTimeStamp(0.8065486954139245);
    msg.setSource(14314U);
    msg.setSourceEntity(241U);
    msg.setDestination(13852U);
    msg.setDestinationEntity(150U);
    msg.seq = 4136021606U;
    msg.destination.assign("UQVEXUIQHSGTDUEUZGIZFTJFFKGITBKKCVGRBXMVAMYVAWXERDYLAJITXWWBNRANCYPOIMLLYLQPWXCRDOMPNLCMLSVEGIMVPEGCKSZOFQFQHRSRQZDHFBYJURSOZDJRKNMNSBWJGTLXWHHZMSLFVIEFYDTOEHAUAHXSKIHKNLOVSSNDJJDPOMEJPZKTKFGBBJWPNWFIWXYYTMCRQADYPTAKEDBCX");
    msg.timeout = 35507U;
    const signed char tmp_msg_0[] = {-55, -91, -77, -59, -74, -56, -47, -114, 109, -109, -62, 12, 10, 48, 105, 31, -127, 47, -113, 55, -121, 79, 36, -14, 21, 28, -121, -7, 111, -57, -15, 99, -3, -44, 49, 83, 98, -86, -62, -97, 113, 43, -99, 87, -77, 118, -84, 66, -25, 55, 17, -19, 1, 45, 17, -89, 44, -122, -39, -108, -32, -112, -90, 23, -122, -21, -126, 60, -65, -91, -44, -60, -63, 79, -87, -122, 106, 42, -100, 47, 118, -19, -71, -93, -113, -10, 18, 28, -83, 21, 36, -86, -1, -49, 15, -19, -98, -24, 99, 111, 102, 78, -113, 116, -52, 104, 3, -65, 5, -90, -64, -1, 46, 41, 23, -54, -123, -124, 101, -40, -52, 85, -107, 43, -122, 69, 44, -17, -95, 63, 37, -40, -59, -32, 82, -48, -57, 29, -17, -117, 29, -28, -37, 102, 85, 79, 71, -125, 45, 12, 7, 123, -123, -36, -115, 75, 11, 61, -46, -50, -8, 93, -104, -101, 47, -20, -13, 31, 126, -18, 41, 52, 69, 92, 54, 124, -76, -56, -10, -115, 49, -1, 67, -64, -110, -69, -78, 6, 112, -35, 59, -5, 78, -13, -93, -106, 95, 31, -70, -73, -12, 94, 16, 90, -52, 104, 60, 49, -45, -108, 38, -102, -52, -80, -31, 98, -50, 96, -120, -115, -10, 71, 14};
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
    msg.setTimeStamp(0.8216031081868054);
    msg.setSource(55024U);
    msg.setSourceEntity(209U);
    msg.setDestination(52171U);
    msg.setDestinationEntity(140U);
    msg.seq = 2987077646U;
    msg.destination.assign("EYAKVLIHGBLGRZUUZNHJDJOEXLMEDSEFAGOXMHLDOTUEURQRNQYMYYKQTOSLUFXIKZOQUSBCLOPFBFFAOMT");
    msg.timeout = 18845U;
    const signed char tmp_msg_0[] = {99, -33, -26, -22, -95, -73, -40, -67, -60, -54, -57, -123, -44, -85, 4, -47, 94, -103, -81, -63, 93, -96, -93, 119, 94, -126, -13, -113, -24, 11, -125, -14, -87, 2, -17, -57, -87, 29, -6, 34, 101, -97, 55, 73, -42, 35, -34, 42, 26, 122, -78, -43, -88, 93, 27, 53, 111, 61, -66, 107, -50, 34, -23, 28, 59, -3, -70, 96, 59, -125, 90, -47, 115, -82, 50, -40, 7, -8, 101, -14, -95, -51, -36, 91, 19, 48, 10, 5, 79, -53, -95, -52, 126, 4, 59, -6, 108, 111, -61, -53, -107, 76, -30, 14, -56, 7, 59, -43, -72, 82, -1, -14, 8, -37, -114, 54, -12, -93, -118, -11, 9, -54, -13, -119, -75, -3, -84, 32, 1, -38, 52, 0, 37, -24, -10, 48, 101, -46, 41, 125, -44, 5, 93, -46, -43, 76, -16, 25, -57, -114, -33, -61, -43, 120, -11, 49, 98, 116, 80, -101, -2, 30, 96, -3, -28, -104, 62};
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
    msg.setTimeStamp(0.052306071434457424);
    msg.setSource(41287U);
    msg.setSourceEntity(3U);
    msg.setDestination(26799U);
    msg.setDestinationEntity(28U);
    msg.seq = 4250799309U;
    msg.destination.assign("DCTEYEWGEPYWELTMFXUKQNPLBOXMCRFODVLQXNDAUWSTLZQUBCVDBHODKWJEWHTCRZVYHUQRCZSTGJOGK");
    msg.timeout = 38578U;
    const signed char tmp_msg_0[] = {-15, -43, -84, -16, 12, 112, 73, 28, 70, 6, -7, -64, -62, 38, -2, 76, -43, -77, -119, 123, 14, 102, 104, 75, -77, -3, 98, -98, 57, 2, 67, 20, -14, 46, -77, -1, -47, -5, 117, 18, 14, 88, 71, 102, 4, 19, 81, 4, -1, 62, -96, -41, 78, 29, 109, 17, 56, 74, 31, 105, -90, -1, 101, -5, -16, 58, -37, -92, -30, -58, 94, -36, 70, 65, -125, -105, 71, -9, -6, 119, -10, 1, -28, 88, 10, -2, 109, -23, -96, 117, 6, 102, 40, 4, 97, 61, -58, -109, 8, -3, -105, -110, -103, -36, 64, 1, 79, -74, -47, 0, -109, 100, 100, -106, -46, -100, 110, -100, 38, -8, 90, -85, 1, 14, -22, 45, -42, -74, -74, 34, 77, 83, -104, 106, 41, 0, 99, 83, -9, -45, 123, -111, 92, 77, -41, -86, 32, -27, -116, -128, -41, 34, -97, 62, -117, 42, 39, 47, -44, -60, 36, 121, 91, 57, -127, -74, 64, 79, 73, 36, -100, -55, 85, -78, 80, -78, 17, -94, 117, -85, 7, -40, -62, -27, -64, 86, -123, -92, 104, 87, -41, 88, 116, -70, -38};
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
    msg.setTimeStamp(0.4877457403622647);
    msg.setSource(11962U);
    msg.setSourceEntity(1U);
    msg.setDestination(62387U);
    msg.setDestinationEntity(175U);
    msg.source.assign("KRKVQZVWPLLHDMVNXNRGCXTEBGPBZEYOZKASPDERFXSONNDKHDQMLINNACMYTHKOJCJKLWUSUIQQBRMKTFHVVSVJYNYMSSPCYEVJMMJUFPLFMHQTZYPLEHVCGCPCXFVVZYAYYD");
    const signed char tmp_msg_0[] = {42, 86, 98, -92, 19, -100, -77, 66, -10, -104, 24, 89, 111, 25, -79, -30, 8, 44, -49, 41, -80, 95, 100, 64, -90, 16, -34, 48, 58, -110, -106, -111, -62, 98, 114, 13, -48, -119, 26, -14, 10, 107, -109, 83, -68, 105, -10, -58, 39, -37, 50, -47, -57, 84, -41, 58, -58, -82, 65, -22, 44, -108, -44, 37, -43, 47, -93, -28, -22, 95, -118, 103, 50, -59, 116, -71, -115, 62, -19, -59, 39, -110, 86, 51, -113, -39, -3, 58, 98, 117, -43, -68, -48, -63, 28, 118, -84, -11, -98, -78, 102, 125, -52, -83, 55, -124, 111, 11, -127, 28, -11, 46, 68, -18, -1, -87, 98, 7, 69, 17, 26, 124, 115, -3, 47, 69, -14, -125, -77, -50, 99, -45, -102, -90, -28, -1, 16, -25, 89, 77, -95, -27, -50, 0, 36, 117, 67, -82, 13, -35, 48, 37, 118, -89, 46, -5, 93, 32, 8, -82, 1, -79, -15, -101, -22, 70, 75, 75, -56, 112, 37, -17, -57, -124, 88, 78, 27};
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
    msg.setTimeStamp(0.6148545012819365);
    msg.setSource(61615U);
    msg.setSourceEntity(244U);
    msg.setDestination(37933U);
    msg.setDestinationEntity(228U);
    msg.source.assign("CGFLJMBNYMFDEQZUUAKDJBIVZJZPGQOOIRUOEDQGWSSMUUQBHNATLEUOBOAFKUBMZTZWNMSBCAWVBFVZICPTYKKYXISYXWZKRMJXLCGHBXRVGGNPHVPVMPZHCIXQNPSIIKPDLNIMGOXRPHWPWFSAFIRCMSZVKJUJYTYWHFNDXCBNDARQITGNYTYTWVJSLEURQEHAEZQOWCEGKSDRPHAKFHQYAKJJEXTYFRTVLHLLASMOOCLREXJTEOWVFD");
    const signed char tmp_msg_0[] = {-30, 99, 26, 0, 68, 93, -81, 14, -81, -54, -81, -42, 40, -23, -126, 45, -65, 108, 74, -8, -71, -59, -21, -93, -33, -62, -26, 18, -52, 124, 45, -24, -13, -19, -33, -84, 80, -71, -26, 110, -97, 74, -81, -62, 69, -111, 15, -105, 41, -13, -15, -112, -19, 0, 89, 11, -33, 126, 98, -99, 24, -29, 109, 68, -46, 70, 101, -44, 12, -59, 115, 26, -55, 39, 84, 90, 121, 22, 79, -87, 78, -123, 74, -27, 1, 78, 62};
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
    msg.setTimeStamp(0.8210441681755745);
    msg.setSource(58596U);
    msg.setSourceEntity(37U);
    msg.setDestination(43275U);
    msg.setDestinationEntity(109U);
    msg.source.assign("GHTGNNEHLDBOSTVXGSROBQURWPPAQPWLGMKVJEIKFYSNHRWIFYYMMDQGPDVPYQZXQCKACHBUACRZVQLZAIAKCESXCAJRFAUTOXXRYJOLBRYWMAIXGHCLDSIWNMJBDCIGEWVHDZLSFCPJUYOGPQZNLEPKESFSKOV");
    const signed char tmp_msg_0[] = {36, -40, -112, 80, -115, 34, 77, -120, -86, -79, 123, 22, 52, 82, -26, 111, 93, -61, -24, -42, 69, 51, 20, -1, -109, -125, -87, 30, 26, 13, -59, -66, 24, -51, 97, -88, 87, 76, 28, 83, 86, 52, 95, -30, 115, 45, 64, 116, 73, -74, 85, 86, 50, 73, 5, 114, -45, 72, 63, 49, -42, 3, -4, -95, -9, -104, -16, -66, -50, 2, 86, -90, -124, 15, -93, 21, 88, -76, 65, -90, -83, 37, -116, -74, 124, -80, -69, -45, -118, 64, -21, 7, 41, -113, -18, 108, -31, -84, -57, 97, 53, 100, -21, -9, 69, 73, -120, -117, -71, -27, -17, 54, -64, -46, 14, -10, -32, -103, 85, 124, -78, 22, -26, -123, -98, 119, 86, 118, 98, -118, 5, -7, -4, 101, 81, 53, 57, 80, -13, 109, -108, -121, -11, -9, 63, 28, -98, 24, -47, -103, 111, 31, 51, -128, 8, 52, 17, 87, 12, -49, -39, 24, 38, -59, -66, -103, 2, 64, 87, -55, -61, -71, 71, -14, -96, 52, -12, -60, 45, -126, -123, 66, -102, -13, -110, -91, -108, 22, 18, 99, 55, -127, -23, -81, 41, -9, 9, 24, 123, -2, 54, -105, -116, 86, 66, 106, -65, 114, -100, -108, -62, 66, 126, -19, -47, 61, 125, -52, -88, 107, 109, -30, 16, 123};
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
    msg.setTimeStamp(0.010855507222923055);
    msg.setSource(6190U);
    msg.setSourceEntity(8U);
    msg.setDestination(40344U);
    msg.setDestinationEntity(233U);
    msg.seq = 2107724380U;
    msg.state = 241U;
    msg.error.assign("QFYBNJIOZPRSMQTVDWOQEQARDRAUHKWBPYKKVVGXFBBEGPGKKWKQITISECPVDYCJYLNLBLMCDJYJCZMMZTOAGBYFQNUYTVNRUTXLLFNVGCONZIHWSHYRFVSZQJLDANMXUDLTIFBUBOVUSSLNIUIAMIHMIQJGJFLSGCSRXJ");

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
    msg.setTimeStamp(0.23692106934119983);
    msg.setSource(8645U);
    msg.setSourceEntity(153U);
    msg.setDestination(57403U);
    msg.setDestinationEntity(164U);
    msg.seq = 840240107U;
    msg.state = 151U;
    msg.error.assign("XZLOMHNTITKPLNISINXVVLNTENGPCYVDXYSSXLIHBXUFNARTPVILERSMFCUIRGGBKUJLTNRVHFPGZZAWUHFJQMCSZGCODDMEPRQYJNLYAEQJNHTBJIRUTXTAMQCXW");

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
    msg.setTimeStamp(0.6902422344942434);
    msg.setSource(58511U);
    msg.setSourceEntity(188U);
    msg.setDestination(40071U);
    msg.setDestinationEntity(48U);
    msg.seq = 2156287948U;
    msg.state = 28U;
    msg.error.assign("PZYSMAPIRTZJKBOUSDAZAJAGKIKIHNNBBPSXASKKBPNLVZUDLQUGNWPLWVIDIGDVBFSYDYGMCOSZNEJONCAEKFCIVQEQDUCHUXHY");

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
    msg.setTimeStamp(0.8096301568578734);
    msg.setSource(647U);
    msg.setSourceEntity(221U);
    msg.setDestination(55402U);
    msg.setDestinationEntity(232U);
    msg.origin.assign("WHWPGRPAUYLERHONUGISXEYCETYQMHDDUSWIVFKXKAODSUWYGDHEHAULMTQFTKLVIS");
    msg.text.assign("XJHBVSEGPW");

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
    msg.setTimeStamp(0.17307516679005386);
    msg.setSource(32276U);
    msg.setSourceEntity(44U);
    msg.setDestination(6750U);
    msg.setDestinationEntity(129U);
    msg.origin.assign("TFNKJDSTIUNPFCAQZOSKRJSIEMBVDVGLFUXZXIBPGIAFIWGHZJGDDNOGCBUYPAWBNLMZLMMRBXAYNVEGKTTLTRCSJIAWOYLAPEJASTAKNOXDHZYZTCKESFUBMWVXUSXEMTYAKQFGOUPLMUZPRKBJQCIRIUCFLTHXOGPZDMKJOKYKRQYHXACVSRWREGOQVCPMEUBVNPVHDHSZFWDGONBHQQWUQMHHWXD");
    msg.text.assign("RPYZEUMWHLIPSOHKTTJQIQROOBIZFBFFHBLUNWKPBEAGPVTJVBUPDBZSIFVECJKCDPVHNXCDJUEAJMHXQRYGRGADWBDQKYKVOGZUUYXVRRZMCPRNAMKFIONTYELOQPJHWNMUZMYTKYJIEAWAPLJGZNDFVKVWTHSWRLBHMBNGHXTWGCQXNRGAXMCXFESLOXSUXTAFKEZLSFHDSQYJMCCYPI");

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
    msg.setTimeStamp(0.5438836295462444);
    msg.setSource(56241U);
    msg.setSourceEntity(14U);
    msg.setDestination(57492U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("NRYSFKSBJJTHRQXVQEBWQMKNBKSEETTIMFNBJCEJRCZVUYDNRAYHB");
    msg.text.assign("MDRJHLBDLOUWBFWVTSVXQOIENIHEIKTEYOXZAHRZSYVKGRPUYCCSMWQUMLEBSQZFHUYHFTDDGABTFONNFNFUWRYIZAWYVPNUJSEAQJXVBPJHNKZRZJJLCAWPGGQGYSZWVUDJLQLQIMOTLCPGHR");

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
    msg.setTimeStamp(0.5251575994474299);
    msg.setSource(46975U);
    msg.setSourceEntity(7U);
    msg.setDestination(37680U);
    msg.setDestinationEntity(166U);
    msg.origin.assign("KTTZOIBVXXKCZNPKHMCJGXSJZIQBPZYPIGUAHNDLIKPLSCTPHNSNQFUOGLFKILZFWRGGVLMRJRKPLHVSTJGQMZSRNPDWF");
    msg.htime = 0.8731800334797974;
    msg.lat = 0.23306032828159706;
    msg.lon = 0.8868597436932194;
    const signed char tmp_msg_0[] = {118, -70, -83, 85, 18, -104, 108, 32, 69, 70, 64, -113, -128, 32, 95, -33, 59, 8, 120, -106, 118, -41, -92, 125, -18, 125, 9, 34, -91, 106, 81, -29, 52, 77, -36, -74, -97, 64, -31, 118, 104, -36, 19, -127, 8, -120, -49, 56, -10, 22, 15, -103, -103, 72, -83, 120, -91, -59, -106, 57, -40, -37, -115, -65, -24, -70, 39, -91, 113, -116, 50, -114, -42, 78, -47, 121, 117, 109, -69, 47, 97, -104, 50, 83, 107, -78, 112, -92, -91, -27, 92, 101, -69, -68, -5, 4, 58, 69, -117, 10, 110, 102, -52, -114, 36, -102, -78, 81, -44, 98, 24, -64, -44, -29, 54, 122, 24, -75, 50, 117, 45, 115, 68, 17, 89, -50, 58, 92, 39, -3, 124, 40, 120, 15, -5};
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
    msg.setTimeStamp(0.746885436640235);
    msg.setSource(18061U);
    msg.setSourceEntity(200U);
    msg.setDestination(33121U);
    msg.setDestinationEntity(31U);
    msg.origin.assign("NXKUOIVLYIRICSSHLAQRUEJWADQRTVERSOVQDJAHUDQUSFTWRFXBBPFOVPHKGWGCOPDUYMYIYNYVMXPLUSYQZFYJBOGZTHINOZZLRDMS");
    msg.htime = 0.9098251767515237;
    msg.lat = 0.03234241624229384;
    msg.lon = 0.07468974390295402;
    const signed char tmp_msg_0[] = {56, 7, -89, 48, -2, 85, -103, 46, -70, -46, -59, -55, 21, 37, 33, -93, 85, 47, 69, 17, -28, 59, 2, 0, -31, -45, -53, -11, -126, 114, -30, -67, 79, 123, -112, -124, -53, -124, -30, 109, -103, -117, 6, -8, -128, 5, -60, 100, -85, 110, -19, -52};
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
    msg.setTimeStamp(0.5765915314140212);
    msg.setSource(52707U);
    msg.setSourceEntity(197U);
    msg.setDestination(9848U);
    msg.setDestinationEntity(156U);
    msg.origin.assign("IFXTZCJGSTRAIBIBNGRPUDTZGWLLACDLAFSFUNUQBOHMCMDAGXAGWPOPHRYFXZWWTHEXUCIUKCYFXWHPRLPQLBPNSQQQVAJNOVMXLURUMWTSDGCYOCVNYJVENYVIJWQQSRKYUBIKHLEFLSGCYTIOBTSKF");
    msg.htime = 0.9083580890452194;
    msg.lat = 0.9140603180333234;
    msg.lon = 0.9468454667972827;
    const signed char tmp_msg_0[] = {-45, 6, 104, 83, -5, 4, -6, -31, -85, 95, -128, -111, 94, -28, -76, 19, 35, -112, 26, -26, -112, -91, -73, -104, -92, 22, 69, -22, -2, -37, -1, -119, 85, 118, -86, 55, 52, -32, 98, -127, 26, -67, -2, -10, 31, 4, 3, -53, -73, -100, 10, -56, -93, 125, 20, -98, 28, -54, -13, -17, 29, 57, -3, -37, -29, 56, -101, -17, 17, 117, 62, 81, 72, 100, 79, 33, -86, -94, 120, 67, -20, -51, -111, 103, 34, -24, -28, 1, -28, -4, 10, -60, 39, -19, -89, 36, -84, 54, -107, 94, 22, -41, 84, -62, -70, -90, -49, 42, -39, 67, -88, -8, -14, -2, 72, 98, 65, -83, -107, -72, -45, 19, -48, 107, 125, 113, -5, -90, -4, 81, -48, -36, -32, -4, -11, -79, -97, -79, -64, -54, -74, 39, 111, 81, 17, 117, -121, 102, 104, -124, 71, 110, -73, 107};
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
    msg.setTimeStamp(0.9036352617778338);
    msg.setSource(60882U);
    msg.setSourceEntity(172U);
    msg.setDestination(4418U);
    msg.setDestinationEntity(225U);
    msg.req_id = 51707U;
    msg.ttl = 48386U;
    msg.destination.assign("EYZRSDWPQFHUAKOGMSFNRTKIFVDZMGOPPWSSPHKKAYBUZWOVVKVATMKICJMRLW");
    const signed char tmp_msg_0[] = {96, 59, 102, 7, -41, 120, -92, 46, 6, 18, -43, -104, -66, 19, -128, 26, 34, -20, 5, -122, 11, -73, -13, 48, 66, -1, 51, 3, -67, -109, -75, 47, -69, -43, -73, 33, -89, -79, -60, -51, -98, -116, -84, 15, 99, 13, -96};
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
    msg.setTimeStamp(0.9526215288975007);
    msg.setSource(15558U);
    msg.setSourceEntity(229U);
    msg.setDestination(33337U);
    msg.setDestinationEntity(179U);
    msg.req_id = 51619U;
    msg.ttl = 1725U;
    msg.destination.assign("UMNCUGGEMDUOSIIUGNQBYJQOGJWQTPEBZKDSUYFACSHCCVPCVTEMXJQWRILVFGKVHDZNVVZSEZYKNOOMVYTIQBDNHXBATSBHWMZRISKRWFPNMC");
    const signed char tmp_msg_0[] = {12, -120, 4, -112, 59, -1, -107, 39, -22, 51, -28, 28, 101, -76, -89, 66, 85, -14, -37, -35, 71, 39, -97, 77, 0, -114, 108, 49, -4, 9, -67, 47, -122, 101, 70, 98, 50, 36, -19, 5, -106, -65, 18, 37, 68, -2, 100, 45, 34, -19, 46, -66, -30, 91, 59, 60, 56, 23, 34, 114, 23, -115, 62, -75, 18, 114, 80, 110, 15, -121, -71, -44, -2, -48, 7, 15, -17, -71, 16, -64, -14, -84, -126, 48, 35, -128, 12, 3, -21, -46, 38, 99, -43, 51, 111, -67, 113, -98, 45, 62, -119, 14, -91, -74, 39, -79, 79, -6, 53, 82, 60, 17, -18, 85, -7, 68, 83, 51, 57, 28, 5, -56, -65, -22, -44, 69, 38, -59};
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
    msg.setTimeStamp(0.06869762216123787);
    msg.setSource(21239U);
    msg.setSourceEntity(107U);
    msg.setDestination(15493U);
    msg.setDestinationEntity(205U);
    msg.req_id = 29412U;
    msg.ttl = 1680U;
    msg.destination.assign("HPVCWZSIYMKRRMBTGUAUMPANNFATVXDPZKSOKIRBFSVVOIGLCRAVUIUCOODYZCWTZWWNEAXDFUOHPQPVVBZNLCXHELYVZKOHPLBSDJCVKGOXBAHQHESFKQAMNVMGHWXDRXELZYYQTWKBFFTEJWRQSCOTLGITTKBFUQCSLYCRYGGDWJHMZEBYAPJPGJHQAR");
    const signed char tmp_msg_0[] = {40, 102, -97, -126, -24, 121, 56, -51, -32, -48, -10, -37, -116, -5, 84, -4, 18, 24, 25, 61, 55, -127, 50, 53, 8, 28, -28, -107, -110, 125, -82, -8, 4, -64, -53, -94, 52, 20, 67, -95, 113, -98, 109, -90, 7, 93, 43, 66, -105, 101, 77, 105, -51, 77, 35, 63, 75, 37, -102, -4, -51, -18, -30, -104, -54, 60, -3, 40, -4, 46, -107, 84, -17, -17, 26, 118, -111, 96, -10, 126, 9, 31, -29, -99, -30, 2, 41, 14, -118, 63, -21, 116, -26, -52, -91, -1, -11, 50, 62, 22, -17, 60, -95, 39, -119, -49, 44, 53, 42, 81, 25, -34, 120, -64, -30, -124, -89, -121, 62, -27, 76, 91, -29, -75, -30, -90, 64, -66, 52, 77, 35, 18, 60, 84, -5, -97, 41, -25, 65, -73, 51, 91, -12, -78, 53, 99, -53, 116, 86, 4, -25, -10, 84, 51, -105, -86, 1, 63, 55, -39, 107, -120, 6, -93, 47, 32, -82, 2, 38, -60, 22, -47, 86, -93, 123, 41, -30, -39, -125, -120, -4, 102, -86, 22, 41, -57, 120, 123, 114, -111, -54, 63, 65, -74, -76, 108, -121, 23, -82, -97, -37, 97, -95, -8, -39, -88, 49, -32, -101, 21, -126, -5, 39, 52, 60, 92, 119, 12, -81, 98, 110, 80, -6, -84, -112, 8, 14, -49, 69, 53, 34, -12, 79, -17, -82, 122, -117, -16, 114, -39, -41, -17, 120, 101, 55};
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
    msg.setTimeStamp(0.2663146632786235);
    msg.setSource(57817U);
    msg.setSourceEntity(108U);
    msg.setDestination(38070U);
    msg.setDestinationEntity(99U);
    msg.req_id = 52074U;
    msg.status = 57U;
    msg.text.assign("SBEZNIGECZUAEIJKXBFTPBPQKZXUFMDLVHRWPRSDILBYOXREWQFWLAUNNSBOEDQTCGIADROMTNYJMRUMPVKCWELFBNGRSPLVMNSPTQYOQTGOBJTMZSIOSZDJYFOULAKXHDGNNMCHZGWAGUPMRXXQYCJIRKYPYYWCVJFEHLTKCPWOIWFXKYCQVBMHKVTFBYIDATRJTDKZOHNAQAZWJEVXUEJQUDWFOIEKLHSPSXDJBCIGHFZVVGH");

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
    msg.setTimeStamp(0.4877922922328547);
    msg.setSource(45602U);
    msg.setSourceEntity(231U);
    msg.setDestination(58350U);
    msg.setDestinationEntity(161U);
    msg.req_id = 50988U;
    msg.status = 147U;
    msg.text.assign("ATTFZCLOMVYUGTDSJLXXUVSTCCCZ");

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
    msg.setTimeStamp(0.891937813895402);
    msg.setSource(41352U);
    msg.setSourceEntity(119U);
    msg.setDestination(4718U);
    msg.setDestinationEntity(75U);
    msg.req_id = 5979U;
    msg.status = 121U;
    msg.text.assign("SUIKGTJOMGARDOXOTNCXQFBKMQSGEMLVATZSSTQGYCCZODZZIJEKFMKSJEWZYVSLKCXUMXLUHIGSFLABRIABNNBBROHUQPSKMWKOGMBPIXLTQCOZWHIFSBEASYBQFMMFJEOUNEGFHCHJDVXWYEJPNALULDQYYZQDLTANDHCPVYUNRFHEVNWKPRVDINMCY");

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
    msg.setTimeStamp(0.3084422691740687);
    msg.setSource(27565U);
    msg.setSourceEntity(175U);
    msg.setDestination(25786U);
    msg.setDestinationEntity(17U);
    msg.group_name.assign("OIKSWKXCFQJQECUKZCVYSJAWIZZEGJOEEHMTDUNHYXEYMMXRUAUJMIAKJQFBCCFXTQNUPRMKZXDAFPMYBDYFBXMRPDQIDVHZCDFKPCRTZOWLSJJQSTBPUPLRTAFENZTOUYWQGIHNLNCHN");
    msg.links = 882352149U;

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
    msg.setTimeStamp(0.9186104643800393);
    msg.setSource(45817U);
    msg.setSourceEntity(113U);
    msg.setDestination(31266U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("UUANXZTWXAQQWRUCQCIHBOGRAPWAVZIHHZNQCELYTNHMZVBZTNUDFJVOYPMNOLAHCMQZFWJLUSGIBIVRDSMGPXLCDVLSYHJMLOMFFHXMDJRJUPOMKAZKGSXISYUALBYYQWESGMWLIIBKXOIJNVWEKFDJPKOEWEYXTQETBFOHBBRTVFEONWKNCJOKGYLNRFUJKSPBLJSTEMUPARDDCTAEVIVGBZDQKH");
    msg.links = 1703536129U;

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
    msg.setTimeStamp(0.6157088604381196);
    msg.setSource(61630U);
    msg.setSourceEntity(32U);
    msg.setDestination(41560U);
    msg.setDestinationEntity(167U);
    msg.group_name.assign("MCJSWXEDQVUJRQBUPRZWWGAIAHKIZUNKPFQIHUUZZMILVZBGLUYQHPCKFWRBJHXFPBGRCUJQJKYCMNG");
    msg.links = 1113268450U;

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
    msg.setTimeStamp(0.6891448323979812);
    msg.setSource(52019U);
    msg.setSourceEntity(76U);
    msg.setDestination(12953U);
    msg.setDestinationEntity(9U);
    msg.groupname.assign("DKYODTOKIDQEDDXUGDCCEBKRWFLHZDSRKPMMJRALOXBCVFWDRIGEXSTQWBOCFRLYQPOVDOKIQSLWUNXVFWHLF");
    msg.action = 120U;
    msg.grouplist.assign("CQUBTKJPSAYTJKMHUCXJKNINGNVJNIONZBGCYHRDAZEOFPHJOEQWGCAETEJMIMSVJNVUQAYIMZQZPWXBHYBWGHJEWYDAYILDUDDQFMGZJSVXRTOSRAQTWLXWOQUKWKQXEZPLWVUKWPTDDABZUPHDCVSRKSEKGKXZUKQPRNHQUSOLFTGDGRIBXBLFYXIDMOTORIPHSJVECANWCTVFBHFLMGOEMXHOFPYLLCIEFBLTRRYCPVSRUIG");

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
    msg.setTimeStamp(0.21322457098905223);
    msg.setSource(3771U);
    msg.setSourceEntity(226U);
    msg.setDestination(61297U);
    msg.setDestinationEntity(118U);
    msg.groupname.assign("RSUAQVWHSOBMKGAXKOJHLGCKCYFHNELKWXTJLAKOUTEMMAJLFTFJWPXOQFEGDNXHNJWYQPMTFNTSDEJXHRZNAPFCVMWQCKUZIKCC");
    msg.action = 51U;
    msg.grouplist.assign("YUTCCCXBNRJKEMFQEGWVQEKJFAUDHPUEYPAJWNQIHNDTBMVOCDHNILPLPUQIVHPWBNLMWCRQDOHIXTYWAVSALMOOZNXAPOSCGSCDJSCJVKYPZUPAKYRJHINFWEGZFLKUKXPXFCQMTUIWOXFETXLGZWBZZIBTBUUWASLMZGAKVKGGGFXRHYTHGHAYZBYVLTJSRIXYDCOSQTENF");

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
    msg.setTimeStamp(0.514013984768594);
    msg.setSource(39705U);
    msg.setSourceEntity(216U);
    msg.setDestination(22024U);
    msg.setDestinationEntity(237U);
    msg.groupname.assign("TNXZBCXYOLR");
    msg.action = 30U;
    msg.grouplist.assign("NEWXLJPVXBLLQZSBIMAVQMBXTOLIJQTHETUBXAXIUCDIVSVPRQKLJWADYJKMPWWIKDOIWOYAVCSEHHOIEYCHEODAUEKWWFXGTBUKJGRDLFBAZVYNSMGOOTNJBNZUEDUPJGMMZRWCMYTFTQEERNNWONACIFNMDFGVFZIZPTPSBXSRJAZUDLAFSZYQUVRKYCHLYDYZGOHFCURVDCQNQRTUPWGVKFRSQRB");

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
    msg.setTimeStamp(0.22451696021287204);
    msg.setSource(37615U);
    msg.setSourceEntity(169U);
    msg.setDestination(4562U);
    msg.setDestinationEntity(113U);
    msg.value = 0.05492836038368798;
    msg.sys_src = 3986U;

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
    msg.setTimeStamp(0.9086691422649311);
    msg.setSource(56781U);
    msg.setSourceEntity(181U);
    msg.setDestination(65137U);
    msg.setDestinationEntity(95U);
    msg.value = 0.13881334194963424;
    msg.sys_src = 48849U;

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
    msg.setTimeStamp(0.9577169048875163);
    msg.setSource(44564U);
    msg.setSourceEntity(190U);
    msg.setDestination(8302U);
    msg.setDestinationEntity(69U);
    msg.value = 0.22021699449070442;
    msg.sys_src = 37797U;

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
    msg.setTimeStamp(0.7227038906619353);
    msg.setSource(44228U);
    msg.setSourceEntity(26U);
    msg.setDestination(49556U);
    msg.setDestinationEntity(196U);
    msg.value = 0.8299721786050365;
    msg.units = 213U;

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
    msg.setTimeStamp(0.9605216353205036);
    msg.setSource(20315U);
    msg.setSourceEntity(229U);
    msg.setDestination(51950U);
    msg.setDestinationEntity(187U);
    msg.value = 0.6968357709914637;
    msg.units = 184U;

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
    msg.setTimeStamp(0.0019122902531403252);
    msg.setSource(20985U);
    msg.setSourceEntity(30U);
    msg.setDestination(21051U);
    msg.setDestinationEntity(37U);
    msg.value = 0.040482310463247906;
    msg.units = 215U;

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
    msg.setTimeStamp(0.833513860995307);
    msg.setSource(44927U);
    msg.setSourceEntity(201U);
    msg.setDestination(42806U);
    msg.setDestinationEntity(179U);
    msg.base_lat = 0.3475757740103069;
    msg.base_lon = 0.5292637551575303;
    msg.base_time = 0.7745138804205026;

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
    msg.setTimeStamp(0.9167515358842389);
    msg.setSource(23580U);
    msg.setSourceEntity(37U);
    msg.setDestination(33946U);
    msg.setDestinationEntity(79U);
    msg.base_lat = 0.4797583064148764;
    msg.base_lon = 0.7639946985087416;
    msg.base_time = 0.7271634824053349;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 54838U;
    tmp_msg_0.destination = 64972U;
    tmp_msg_0.timeout = 0.34193920634140196;
    IMC::RemoteActions tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.actions.assign("AWUHRHRCQIKISTXCCFCWGUESOSAGJGUVBNJQQBLLXIDCLOLQPOGFDRNPENRRKVFXIPOVTLSYJWIZRUMTEUZNBONXASPKKHNGGYBHJODQGYUHHSY");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4287294393661265);
    msg.setSource(45935U);
    msg.setSourceEntity(183U);
    msg.setDestination(7402U);
    msg.setDestinationEntity(131U);
    msg.base_lat = 0.35963680859222524;
    msg.base_lon = 0.21569615964985922;
    msg.base_time = 0.9891977012440071;

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
    msg.setTimeStamp(0.3138568571594117);
    msg.setSource(5819U);
    msg.setSourceEntity(247U);
    msg.setDestination(30910U);
    msg.setDestinationEntity(15U);
    msg.base_lat = 0.6968376608964728;
    msg.base_lon = 0.09101591712240753;
    msg.base_time = 0.9583824179574526;
    const signed char tmp_msg_0[] = {34, 103, -8, 95, -59, 30, -120, -55, 27, -117, -111, 6, 123, -90, -17, 111, -39, -35, 98, -68, -49, -75, -86, -54, 93, -59, -16, -69, -124, 49, -9, 23, -3, 49, -44, -84, 105, -43, -37, 92, 105, 122, 41, -57, -15, 37, 6, -50, 94};
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
    msg.setTimeStamp(0.07908444833340667);
    msg.setSource(8217U);
    msg.setSourceEntity(245U);
    msg.setDestination(15972U);
    msg.setDestinationEntity(77U);
    msg.base_lat = 0.49089993619602035;
    msg.base_lon = 0.3781434344411372;
    msg.base_time = 0.541727258103807;
    const signed char tmp_msg_0[] = {-81, -62, -91, -33, 59, 65, -47, 109, 11, 43, 66, -14, -114, -98, 33, -48, 126, -117, -71, 1, 72, 76, 83, -37, 87, 109, 115, 60, 82, -4, -10, 47, 115, 8, 58, 39, -39, 27, -85, 55, -5, 7, 14, 124, 94, -122, -108, -64, -61, -116, 3, 54, -7, 67, 124, 2, 15, -69, -9, 54, -102, -108, -26, 35, -17, -7, 19, -104, 15, 74, 115, 49, 56, 19, -99, 84, -89, -105, -62, 90, 14, 103, -61, -98, 107, 56, 71, -45, -109, 94, 56, 9, 52, -86, -79};
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
    msg.setTimeStamp(0.6154426398214811);
    msg.setSource(16169U);
    msg.setSourceEntity(155U);
    msg.setDestination(49364U);
    msg.setDestinationEntity(106U);
    msg.base_lat = 0.3189778948408427;
    msg.base_lon = 0.2902670270022937;
    msg.base_time = 0.6739838731182007;
    const signed char tmp_msg_0[] = {-58, 92, -105, 45, -100, 102, 18, -90, -94, 44, 17, -2, 90, 92, 47, -97, -109, -57, -106, -90, -58, -29, -78, -88, -58, 24, -26, 25, 40, 79, 24, 57, 56, 60, -78, -65, -17, 3, 102, -12, 58, 81, -4, -61, 51, 37, -9, 91};
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
    msg.setTimeStamp(0.47706953938692465);
    msg.setSource(38263U);
    msg.setSourceEntity(29U);
    msg.setDestination(45421U);
    msg.setDestinationEntity(48U);
    msg.sys_id = 21249U;
    msg.priority = -18;
    msg.x = -29041;
    msg.y = 22338;
    msg.z = 21108;
    msg.t = -12526;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("TKSZLKJXIQMHWOJLKBCFJDMCLAHBABVCAFAHZCVWDOYTWDOFNIUHOZYYUQRXWXMHPCUBFFNOKUUXUDMNBUGSQFQQNMNFIBWZTDWPLQQINLFPWZAEOJIXSGCKLGIJRSAPTMASEGSTYWHTXKEXTRIVNEAUGPPBGGOSDXELVROLZF");
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
    msg.setTimeStamp(0.46513626562683696);
    msg.setSource(50637U);
    msg.setSourceEntity(67U);
    msg.setDestination(44278U);
    msg.setDestinationEntity(108U);
    msg.sys_id = 15355U;
    msg.priority = -105;
    msg.x = -24412;
    msg.y = -8218;
    msg.z = 8278;
    msg.t = 19590;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 209U;
    tmp_msg_0.frag_number = 118U;
    tmp_msg_0.num_frags = 144U;
    const signed char tmp_tmp_msg_0_0[] = {90, -55, 67, 9, 33, 41, -7, 99, 33, 30, 81, -86, 90, -12, 47, 68, 117, 116, 91, 14, 6, -15, -56, 40, -17, -128, 43, -27, 2, -48, 78, 37, -25, -3, 15, -28, 100, 92, -90, 59, -69, -125, 94, 124, -10, -69, 103, 66, -110, -79, -8, -28, -91, 14, -104, -67, 14, -11, 15, 77, 54, -25, -62, 3, 6, -25, -2, 121, 123, 84, 125, 33, 30, 121, 52, -121, 31, 77, -1, -111, -68, -67, -67, -50, -98, 83, 43, -108, 98, 21, 85, 125, -19, 36, 104, 8, -23, -100, -97, -18, -52, -96, -24, -31};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5385793149276582);
    msg.setSource(10575U);
    msg.setSourceEntity(162U);
    msg.setDestination(12720U);
    msg.setDestinationEntity(161U);
    msg.sys_id = 46349U;
    msg.priority = 126;
    msg.x = -24134;
    msg.y = -29239;
    msg.z = -3680;
    msg.t = -21499;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.12590475340006968);
    msg.setSource(63161U);
    msg.setSourceEntity(229U);
    msg.setDestination(23735U);
    msg.setDestinationEntity(70U);
    msg.req_id = 48256U;
    msg.type = 40U;
    msg.max_size = 22867U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6953213506203253;
    tmp_msg_0.base_lon = 0.13382850663668122;
    tmp_msg_0.base_time = 0.025585218845712188;
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
    msg.setTimeStamp(0.17484468473027226);
    msg.setSource(15196U);
    msg.setSourceEntity(87U);
    msg.setDestination(6615U);
    msg.setDestinationEntity(63U);
    msg.req_id = 27585U;
    msg.type = 60U;
    msg.max_size = 63854U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8504402007671346;
    tmp_msg_0.base_lon = 0.7271470782896627;
    tmp_msg_0.base_time = 0.9459508773503112;
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
    msg.setTimeStamp(0.4633192705018254);
    msg.setSource(10332U);
    msg.setSourceEntity(147U);
    msg.setDestination(5514U);
    msg.setDestinationEntity(219U);
    msg.req_id = 20062U;
    msg.type = 181U;
    msg.max_size = 49261U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.829447789762899;
    tmp_msg_0.base_lon = 0.5716069405380151;
    tmp_msg_0.base_time = 0.6983260819928354;
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
    msg.setTimeStamp(0.08867897552541193);
    msg.setSource(46645U);
    msg.setSourceEntity(138U);
    msg.setDestination(20658U);
    msg.setDestinationEntity(229U);
    msg.original_source = 63313U;
    msg.destination = 24229U;
    msg.timeout = 0.7810161337323125;
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.06091445017444641;
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
    msg.setTimeStamp(0.06681784741946417);
    msg.setSource(15936U);
    msg.setSourceEntity(146U);
    msg.setDestination(64981U);
    msg.setDestinationEntity(88U);
    msg.original_source = 54115U;
    msg.destination = 50395U;
    msg.timeout = 0.5911875227824364;
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 201U;
    tmp_msg_0.speed = 53568U;
    const signed char tmp_tmp_msg_0_0[] = {97, 27, -113, 13, -23, -39, -66, -48, -34, -71, -74, 110, 112, 49, -18, 36, -118, 13, 98, 70, 121, 65, -84, 96, 104, -31, -97, -78, -100, -31, 97, -44, 23, 97, 52, -70, -35, 93, 26, 98, 28, 49, 17, 94, 44, -125, -33, -45, -117, -4, -108, -90, 71, 17, -76, 38, 75, 81, -85, -90, -72, -90, 47, -41, -92, -90, -27, 109, 90, 117, 16, -57, -61, -111, 82, 85, 125, 17, 125, 114, 27, -99, 24, -27, -77, -84, -64, -112, -96, -118, -6, -82, 2, -55, 116, 24, -55, 83, -67, 99, 67, 121, 26, 98, -61, 40, 8, 71, 56, 5, 87, 47, 25, 85, -113, -59, 31, -29, -82, -112, 22, -113, -78, 67, -29, 41, -77, -114, -23, -81, -7, -101, -94, 21, -83, -121, -103, 5, -120, 103, -21, -74, 103, -59, -86, -66, -66, 95, -81, 37, -72, -37, -109, -11, 51, -41, -50, -75, 15, -22, -11, 39, -82, -32, -10, 107, -35, 98, 75, 19, 38, -82, 9, -107, 113, -15, -8, 75, -58, -124, -18, -2, 61, -99, 78, -113, -119, -103, 35, -109, 90, -96, 57, -122, 105, -25, 52, -72, -72, 15, -12, 124, -100, 71, 90, -119, 28, 114, -123, 38};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.733800854922149);
    msg.setSource(21683U);
    msg.setSourceEntity(112U);
    msg.setDestination(20763U);
    msg.setDestinationEntity(161U);
    msg.original_source = 14501U;
    msg.destination = 35886U;
    msg.timeout = 0.8744137308428795;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 1256027533U;
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
    msg.setTimeStamp(0.543423528886534);
    msg.setSource(65058U);
    msg.setSourceEntity(241U);
    msg.setDestination(29350U);
    msg.setDestinationEntity(178U);
    msg.type = 0U;
    msg.comm_interface = 59523U;
    msg.model = 52527U;
    msg.list.assign("UFEJGKPYEPIXXSNUROOZMVWWNNAHTFESFAJNYPHUDTDQLNUQMMRAMJZAQLNVVHJTTSXQEQXUVLPDIHZQVJTWCNOAFCPIZDEYKPANLQBEKI");

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
    msg.setTimeStamp(0.923511586517637);
    msg.setSource(64871U);
    msg.setSourceEntity(91U);
    msg.setDestination(61858U);
    msg.setDestinationEntity(118U);
    msg.type = 111U;
    msg.comm_interface = 5142U;
    msg.model = 23010U;
    msg.list.assign("XZNSENBTHADODCVKOFXHKSORLBBJJPRVHXBWRSMPYTJVZNQYGDXMAGWEWCJIAEQEXKMDEKQCQGIFMNJMYFUPIPLBXULFNPACWNLBHDMZCZEMCPTFOLGKOJCGNEJWVKTOSHWYLTWKKBIYOTJEGQRVZUMUDSUIYPB");

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
    msg.setTimeStamp(0.06512171184528814);
    msg.setSource(39530U);
    msg.setSourceEntity(86U);
    msg.setDestination(57885U);
    msg.setDestinationEntity(148U);
    msg.type = 178U;
    msg.comm_interface = 25608U;
    msg.model = 27373U;
    msg.list.assign("SZWMYHZLDAJGTECQURVOPOLEYOIRPUVHGXIPUHSTSXNPMTZVTDIQNWOMFDIMGMXQOVEWPITBAG");

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
    msg.setTimeStamp(0.7798948674989579);
    msg.setSource(167U);
    msg.setSourceEntity(17U);
    msg.setDestination(20268U);
    msg.setDestinationEntity(120U);
    msg.type = 207U;
    msg.req_id = 476889230U;
    msg.ttl = 40686U;
    msg.code = 75U;
    msg.destination.assign("KYTGNEBAHAYTQEZCTMGLUORSXIGIDOVSBIEIIMNJVKGHCXQUBJKPPPJDWGELUCXUVSXPSLMYTZMWWXJGO");
    msg.source.assign("CUCKVOAAFRVSGKGNPRSGPUODVWKPQSJZEYREFOVBBREZSDAOKUFONLLABXZRUGMHIOANYMFZJQESTEFJDCXUHHTZVTPJUXRMOJTXYURSWATYBOWMNEYCGEQRCNVNQLLHFDGIICINPCAQTKLRWQIHZOBLYESJBWTSVXZYIHBHUMFNATSNUWVHWYMICMXWIGAJQZWJBUJXCTYFMPLAMJPPGVZPIDXEKCEDIGKHNRXKXVPFMLDWHKKLGDTOFQSLBZ");
    msg.acknowledge = 37U;
    msg.status = 214U;
    const signed char tmp_msg_0[] = {43, -75, 65, -5, 3, -24, 3, 109, -113, 10, -122, 70, -15, -13, -92, -83, -31, -122, 64, 82, 81, 97, 111, -88, 30, -51, -44, -57, 67, -31, 57, 54, 46, -43, 15, -4, -19, -55, -41, -102, 8, -86, -56, -102, 62, -94, -90, -19, 82, 66, 16, 35, -123, 122, -122, 12, -79, -7, -65, 34, -89, 101, -99, 71, -124, 11, 107, 114, -110, -110, 85, -54, -58, 114, -68, 52, 45, -79, 23, 34, -91, 40, 93, -101, 47, -101, -43, -66, -117, 27, -25, 107, 25, 81, -22, 56, 114, 104, -1, -20, -23, 109, 0, -118, -6, 98, -69, 40, 110, -100, 55, -123, 74, 123, -38, -33, -84, 104, 10, -89, -121, -83, -19, 23, 65, -95, 74, -71, -111, 53, 92, -51, 64, -80, 44, 62, -120, -27, -89, 94, -19, 1, 39, -21, -24, 109, -24, 117, -103, 103, 8, 98, -113, -23, 72, 17, -87, -25, -15, -74, 106, -6, 45, 104, 26, -12, -31, -27, -25, -114, -70, -39, -61, -113, -108, -49, 7, -83, -84, 17, 7, 86, 124, 87, -102, -75, 103, 64, 26, 50, -12, -11, 80, -108, 51, 49, -25, -70, -82, 63};
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
    msg.setTimeStamp(0.3395034061359521);
    msg.setSource(38195U);
    msg.setSourceEntity(187U);
    msg.setDestination(27837U);
    msg.setDestinationEntity(59U);
    msg.type = 31U;
    msg.req_id = 2313172434U;
    msg.ttl = 49520U;
    msg.code = 217U;
    msg.destination.assign("VAJRWRZQTDZRBSGQGYCYLTXXXMQQDKLVMDMGXWYGCIZZSPKCTEBJGLNLQIDVFPYBSCDZBDPUNSHRBHMTEJXFIISCWVUKMJUAPPJBYEKPTDVUOUZFRVTCGNNIWMQLZLCHOJODQYLVEILHUKXUDNBUZRMOKFXHNHJWEFOJWVESSXEAAKGSXFQKAZJIAISBPAWHZKFYTBPYJRTIWIHDBUWONMYOCUQGFH");
    msg.source.assign("OOZATPMUGDJVURLAXBLMOMRDSAWMRGVISOGNJRQVNUZYEGHSNFMWJUXXJXHYWNFLXCCFEDGJDABPCYSFBTLWSIQHYSQFWLEYHQJFI");
    msg.acknowledge = 48U;
    msg.status = 42U;
    const signed char tmp_msg_0[] = {-114, -55, -56, -119, 77, 9, 71, 125, -107, 91, 67, -45, 51, -15, 2, 91, -94, 11, 64, 11, -23, 57, -88, -28, 71, -105, 1, -91, -84, -104, 103, -14, 47, 18, 19, -120, 54, -38, 10, 101, 95, 56, -33, -46, 65, 99, -79, 117, -102, 95, -125, -110, -18, 59, -89, 113, 53, 2, 118, -61, 61, -25, 60, -125, -9, 51, 118, 16, 64, -125, 114, -122, -40, -76, -121, 17, -50, -36, -28, -43, 104, 85, -125, -67, 74, -61, -64, -64, 54, -43, 78, 64, 84, -119, 75, -120, 116, -32, 36, 101, -65, 103, 98, 30, -60, -88, -39, 105, -11};
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
    msg.setTimeStamp(0.5373042367194059);
    msg.setSource(38594U);
    msg.setSourceEntity(237U);
    msg.setDestination(41541U);
    msg.setDestinationEntity(157U);
    msg.type = 83U;
    msg.req_id = 2917783874U;
    msg.ttl = 36085U;
    msg.code = 29U;
    msg.destination.assign("HAWJLSHPRRYXGQIZRVLFVQINHLVADDTDDQEWMRGKVNOFAHCBQDZWCFLSDPEWXBEHMIWGMDUUGCBKTKNHJKXMZDOYOHLXAYYQKIPZBJECLUEUCNVVPBQDOWJVZIYUISNEYSEFCKAGYTGTDWIIESLBXJZVJZYZTBLRNLHFPHGONNCBXOUP");
    msg.source.assign("OEQXNDHCGSFLUKVLMFUJLZIERGUPTWAVGQADJHMBAPCBAZEOTSQSRMFVRKOPUTLYKKEIXAXOVJDUPNXKNERPLZPCAQGNSVAIIJOFHAYBCXDQDTIUSOBGWBRYMLXWFUYWWSHY");
    msg.acknowledge = 27U;
    msg.status = 48U;
    const signed char tmp_msg_0[] = {67, -30, 93, -38, -101, 11, -34, -25, -99, -115, -27, -50, -18, 64, 5, 47, 51, 8, -96, -123, -8, 38, 101, 2, 96, -128, 101, 9, -64, -29, 1, 109, 42, -65, -111, 78, -53, 110, -89, -100, 120, -124, 12, -86, 53, -118, 10, 113, -12, 71, 25, 58, -16, 48, -97, -31, 125, -121, 65, -12, -128, -51, -39, 72, -24, 117};
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
    msg.setTimeStamp(0.6474872003402004);
    msg.setSource(57724U);
    msg.setSourceEntity(18U);
    msg.setDestination(1952U);
    msg.setDestinationEntity(126U);
    msg.id = 198U;
    msg.range = 0.3269444817778695;

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
    msg.setTimeStamp(0.5951012739087762);
    msg.setSource(15509U);
    msg.setSourceEntity(251U);
    msg.setDestination(260U);
    msg.setDestinationEntity(175U);
    msg.id = 219U;
    msg.range = 0.24832240547706774;

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
    msg.setTimeStamp(0.8686965513130064);
    msg.setSource(25233U);
    msg.setSourceEntity(5U);
    msg.setDestination(38676U);
    msg.setDestinationEntity(139U);
    msg.id = 243U;
    msg.range = 0.23893428545754758;

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
    msg.setTimeStamp(0.23017112269152162);
    msg.setSource(41406U);
    msg.setSourceEntity(174U);
    msg.setDestination(45751U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("MPWIRSMMQQVNZBNXZHSSMMXFWUOQEIYPFVXJRZQONCNAOYUHKORCKUWVWHAORTVBRGWIRDOBPIFTWEYPUGFSWXDVYLZADKJHIIHPUSEBNGPOKX");
    msg.lat = 0.8075476692638319;
    msg.lon = 0.017497924758468564;
    msg.depth = 0.7417405663509803;
    msg.query_channel = 86U;
    msg.reply_channel = 185U;
    msg.transponder_delay = 99U;

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
    msg.setTimeStamp(0.94938626651728);
    msg.setSource(35870U);
    msg.setSourceEntity(50U);
    msg.setDestination(40059U);
    msg.setDestinationEntity(155U);
    msg.beacon.assign("MRHGGOGIXJBAKUILOQTAWNUPKIZFBMDJWWODNBABGLBJZVOQWETHCNMTRQAZCIMCOFVICRPSGLXFAYMYWHFFYBDXZDIBSZVHWAQHSXQTWGDBKQKRECLLVFJLPKUGLVBYEYASUPTJTUONGVHJYDTEMMCWZVMTZSCZGRDSUXAUCUVFEJHRQUIEQZHOJRLHXYEZSHBJKTMNKONKXYEEQSPTKVRKCYP");
    msg.lat = 0.6163380824718174;
    msg.lon = 0.10871129264432755;
    msg.depth = 0.65301817961862;
    msg.query_channel = 24U;
    msg.reply_channel = 18U;
    msg.transponder_delay = 173U;

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
    msg.setTimeStamp(0.1848118297041038);
    msg.setSource(31836U);
    msg.setSourceEntity(124U);
    msg.setDestination(52637U);
    msg.setDestinationEntity(156U);
    msg.beacon.assign("RGQXNQLYQESPYUAKTGUXYLCEFELIUXOXAEDFKKCWYCCSRYWKEOXZUDRIOJWPQYBWKXNLZSBBZOYBDGGFWFHGNDXGBJQCVHDRZIPWAHCOUHZBLTVXVVKZQFEVMWJGEHGIMAIAUNHEJXUMKDVLUTCBLZMEBYMBHEPNMPKRTMGFPVSZVIWSKDWFQQILOLJATNVZ");
    msg.lat = 0.015017597368318314;
    msg.lon = 0.06595297811233825;
    msg.depth = 0.6501495968015208;
    msg.query_channel = 88U;
    msg.reply_channel = 199U;
    msg.transponder_delay = 239U;

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
    msg.setTimeStamp(0.8228552725918094);
    msg.setSource(11399U);
    msg.setSourceEntity(14U);
    msg.setDestination(63246U);
    msg.setDestinationEntity(228U);
    msg.op = 147U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RIRQGLQVAILLDMBBIOFNTGOSHYAUIDFVRZSTXXIZDXTRVHYRPIUUDHVEUYGUOKNZOLQNCCOXKAYAFYDNFZHWJPKJSWCDKEQHJQHGDJDS");
    tmp_msg_0.lat = 0.3001750697117004;
    tmp_msg_0.lon = 0.03667680086101899;
    tmp_msg_0.depth = 0.16776769494477273;
    tmp_msg_0.query_channel = 5U;
    tmp_msg_0.reply_channel = 29U;
    tmp_msg_0.transponder_delay = 220U;
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
    msg.setTimeStamp(0.9173675832538645);
    msg.setSource(58631U);
    msg.setSourceEntity(75U);
    msg.setDestination(3175U);
    msg.setDestinationEntity(79U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.6079574277170526);
    msg.setSource(4353U);
    msg.setSourceEntity(55U);
    msg.setDestination(39891U);
    msg.setDestinationEntity(251U);
    msg.op = 151U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MLCFYGGWPGLUQHWBNOOXPBAMBBIWVQJUWACAOGSHXJSTSCQYIKXFJLLQAMYYWPTFNSWR");
    tmp_msg_0.lat = 0.9673257579073504;
    tmp_msg_0.lon = 0.14581697870723187;
    tmp_msg_0.depth = 0.18910585277572567;
    tmp_msg_0.query_channel = 207U;
    tmp_msg_0.reply_channel = 125U;
    tmp_msg_0.transponder_delay = 134U;
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
    msg.setTimeStamp(0.20241777422345164);
    msg.setSource(44564U);
    msg.setSourceEntity(216U);
    msg.setDestination(23511U);
    msg.setDestinationEntity(10U);
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.7417828873456707;
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
    msg.setTimeStamp(0.6423139167333114);
    msg.setSource(16881U);
    msg.setSourceEntity(133U);
    msg.setDestination(19547U);
    msg.setDestinationEntity(77U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.5755986073269204;
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
    msg.setTimeStamp(0.5563596176476115);
    msg.setSource(26383U);
    msg.setSourceEntity(155U);
    msg.setDestination(41196U);
    msg.setDestinationEntity(207U);
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 143U;
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
    msg.setTimeStamp(0.28662815627593496);
    msg.setSource(43699U);
    msg.setSourceEntity(239U);
    msg.setDestination(65169U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.770610849386665;
    msg.lon = 0.9274395717687262;
    msg.depth = 0.9356659260504138;
    msg.sentence.assign("NAHRMPUBWURBUAJTFSLHOQDPOXXAKKQKXULWVOISUTYCWREMZIMIWMCRYEWOBPNLFSTHVBHVHQKDCFBHKARODLJGNQJYULOMFENVTDGEQGYBMSFAWEPEXLZNSYAZSDWJECNCFNGUHSZTMRHPQ");
    msg.txtime = 0.7873206426353818;
    msg.modem_type.assign("RSMJZUGRGRQNXUIWGLZOGTEYSSSMUDBBSWIQUMQPPDDWQNIEYQQVFFKMTNTDVHELEBZZHCCOGIKX");
    msg.sys_src.assign("DWPLDFIMEZLETSWJTYPQAZRGPRNNTQCVUFSVVVYUE");
    msg.seq = 11065U;
    msg.sys_dst.assign("VHMTDLDFKFLSYVXGOFEXRJMDTXHMGNIOHFNUFPSUDAZUPTYJIRBZBJKSUIOBFRHCQGPYXYTRQBXZQXOUFQTCAVSRVCCDRPRYBOCSVYNESCPATJHCKUWAWMAGUABPZJWJQKTEQJJVPWKHKCBPAMKGDNRLIMIQLCXDEVOTEVEBMPAYINBINQOECWWHGEVAPZDZDINZUIQAWYTD");
    msg.flags = 136U;
    const signed char tmp_msg_0[] = {-116, -29, -33, -112, -3, -103, 91, 32, 73, 121, 80, 63, -35, -76, 26, -39, -20, -44, 6, 42, 35, 4, 120, 101, 3, -35, 26, -114, -118, 65, 85, -83, 42, -111, 60, -31, 98, 41, -50, -37, 95, 39, -69, 6, -43, -70, -48, -120, 1, -76, 94, -105, 92, 56, -102, -72, -102, -26, -94, -55, -111, 112, 120, 38, -121, 90, -23, 16, -82, 37, 22, 28, 65, -46, -28, -59, -79, -24, 76, 96, 105, -122, 92, -90, -96, -104, 87, 88, 55, -54, -119, -2, -30, -87, 4, 60, -64, -108, -28, -11, -62, 84, -4, 109, -128, -63, -77, -17, 103, 105, -87, -89, -126, -10, -78, 31, -102, -58, -111, -49, -103, 65, -84, -81, -56, 21, 114, 22, 38, 10, 15, -41, -25, 125, -85, 87, 7, 32, 106, -78, 10, 27, 9, 0, -61, 14, -62, 85, -105, -64};
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
    msg.setTimeStamp(0.6913807114364596);
    msg.setSource(59386U);
    msg.setSourceEntity(131U);
    msg.setDestination(28386U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.05614406266727723;
    msg.lon = 0.5423841805508408;
    msg.depth = 0.3649909913614183;
    msg.sentence.assign("IJDIWZGUVWCRCHZCSSJJKGQWODQLTRFUFFOPEJQXGJYEFZSTCUKSBXEPUCABEGXKX");
    msg.txtime = 0.9208421044339744;
    msg.modem_type.assign("NWFLACGUGQIWROWNRZDJUTAHEWDHCOXVWPXRM");
    msg.sys_src.assign("ZGIYZWPTVEUUEPWRQXFATVQEGTRDLYYRESHOLCIVIUIDASQTSJXHUSGUCONTRHBNSQQTUYMOXKCZJBBKOJBDOMMKXJDICASAGGTHRMKNAEZMCRBLQYPLZVQKPYHRGBDVXDJODQHCCEWPUXMHAKHWOMZIADFVJBSJRLLNTKXAHZCEIWVNELLMCNFDGFALICPWYKSN");
    msg.seq = 20999U;
    msg.sys_dst.assign("MWTHRIJOGEMEIXEFTYIFJNGFTPVPNPZXVKUFWURCTEGVSPCYGBZOGLSCFHHNIBUZTLWDNBHMFNLIHAJSDWZLRJPKSETAOBGLLWLNQFDCZQXUB");
    msg.flags = 112U;
    const signed char tmp_msg_0[] = {-111, 14, -41, 3, -63, -44, -55, 67, 66, 115, -108, -86, -74, -57, 118, -69, 126, 18, 106, -13, -1, -54, -41, -35, -127, -81, 84, 55, -114, -103, 0, 77, -127, 89, 10, -12, -117, 34, 100, -53, 50, 40, -79, -117, -68, 125, 83, -23, -43, 92, 71, 36, 104, 27, 72};
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
    msg.setTimeStamp(0.9120863559820404);
    msg.setSource(49990U);
    msg.setSourceEntity(63U);
    msg.setDestination(59635U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.5096547847218345;
    msg.lon = 0.7223997956226547;
    msg.depth = 0.8557856023697679;
    msg.sentence.assign("XXHAJRUTOOZDJUZIKZSLCVETMUNWFDOVVNNCCJOMYGQLRZWMQWJGUAZSGIFOPIVNKUWCUEIKANHKRFZSBGSWOUGOFRKFAXPBHQSEZHSRMPYGFUEAXTVRACLPLSMTOMCOFLYPMWZNQWJVYEVQVGSSUGSCDHYJQAVYBDIM");
    msg.txtime = 0.2892902338131804;
    msg.modem_type.assign("WVGZEADSAQQZNDSSDMMNQHDBHHKOXUQZWXFGKHDMFCBSWEISNOCLTRKQYTNGCSHVDAMWLNCAOKBXOTEEEGQHUYFUUPZXUIGRZCWKEBEYGEKSJOMRMGFRVJJVBVJJUOTAAXPYPKJPROPCAVTNPBTWGVITTRSIVYPLBYIRJKTYYJMWWXIBWAQEMCLSDKVXUKU");
    msg.sys_src.assign("OQTAGWMDQLAPAVLCEQMLIIFKEZFUJZHYTQLVEFVJLXBRMETZKNHILTCHZOJBMNFRMTTNSHRMYKBLIGZRYVUIPALEJNEWQWAKTUXEBCFRXGIQGW");
    msg.seq = 48987U;
    msg.sys_dst.assign("TBMWVIWNQEKYTNPSWIEBJGPKAZOCRWXROLAXIBBZSDUQQOSQQSABMTFTWLLBRRNDSALHVVKPWPCLKWKUUEQEFPDFUFAXUMYCSOVNVSGEONFNVMATMXLGTYVQTXQYXBOMZSGZEHLQJKJOFSKZEHYECMTRCGXHCJWFJAKGLFDVJDYRVFZGDBMZYOPJRWHPIIHYRAZHHGJPXPCCKDCEUQDXUDOWHUIMDIN");
    msg.flags = 148U;
    const signed char tmp_msg_0[] = {46, -16, -11, -65, 12, -52, -17, -72, 65, -41, -4, 51, -88, 57, 95, -105, -73, -24, 125, 39, 111, 106, 72, 9, -64, 124, 23, -101, -62, -32, -35, -61, -107, 15, 32, 78, -24, -3, 20, 48, -46, 92, 19, -25, -79, -94, 14, -40, -53, -27, 96, 104, 64, -113, 110, 26, 13, 29, -64, -1, -105, 13, 70, 34, 73, -18, 80, 45, 90, 54, -42, -43, -20, 121, -93, -123, 40, 122, 113, -107, 70, -109, -85, -77, 14, -19, -27, 7, 68, 41, -123, 61, -11, 20, -41, 67, 105, -55, -83, -54, -87, -14, -104, 79, -95, -21, -120, -117, -47, 113, -112, -64, -85, -6, -5, -123, -106, 6, -99, -108, 123, 109, -61, -7, 78, 102, 10, 61, -101, 22, -51, 122, -68, 120, 105, 85, 16, -116, -111, -57, 103, 32, 126, 23, -119, -11, 18};
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
    msg.setTimeStamp(0.8424296717950829);
    msg.setSource(40423U);
    msg.setSourceEntity(234U);
    msg.setDestination(59860U);
    msg.setDestinationEntity(114U);
    msg.op = 68U;
    msg.system.assign("AYHZJMKGVKCZXBOLUCBDFZCKDUSXFGXVYVRKUSFZTFYBNXUYNHQYHPRJPMJXYIXLSNBAPTQQGRAIDNIWZDQXZLCMOLADZGQTIJSUOJPELORHMOSYONAKISCESHSALPKRCHIHJJUFAWQMETFEPAPMEKTLWNLVGMCB");
    msg.range = 0.03829617161076171;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6412424697600575;
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
    msg.setTimeStamp(0.3532201926553509);
    msg.setSource(7668U);
    msg.setSourceEntity(223U);
    msg.setDestination(10306U);
    msg.setDestinationEntity(29U);
    msg.op = 225U;
    msg.system.assign("RLZYKOHLMAHSSKQPIVKTUWIRXZNJBPZPKHGIVIXWDTSIJMXYSLANVGRFIVOCPXEJEEMGTMCGYDFZJMLRDLQQCFUQUZXJVHTJHDYTYWPNO");
    msg.range = 0.3406238450467457;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 210U;
    tmp_msg_0.htime = 0.41046415327473207;
    IMC::LogBookEntry tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 26U;
    tmp_tmp_msg_0_0.htime = 0.0983628251677241;
    tmp_tmp_msg_0_0.context.assign("QHPSMZTAEKYIKCVEEDNGEAWXOCNRYKOCFJJFNUIMXLAABG");
    tmp_tmp_msg_0_0.text.assign("SLRNXYNIRNVIGLQDKZTWAYAWPGYDXEGHAMTIJYOGCXYZCRKUJFGHAHXESFHGOMYULFFUHVPIPTRLJELXJUHC");
    tmp_msg_0.msg.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3387712233186577);
    msg.setSource(54987U);
    msg.setSourceEntity(93U);
    msg.setDestination(37316U);
    msg.setDestinationEntity(91U);
    msg.op = 239U;
    msg.system.assign("CGSWUUNSKPDYGMVMMYJALJIGKCCRQLTAELUZLRZZCRBGDAWFAFMHJIIEUVKPLAFXGXOELCHPIYNBRZPQCKZOJFSRAYMTTSTVFIHXKTBHVAETWVYRGMDOAXFKMDDZZFKVQTYWONRGUJBYVREZFPMEQNYIQNWIDUWVCDJIJHEDPKYTYHFKGBFZPGOGEBOLBNAQXATIMBUXSXICSZWJSWDSEKBXJPVWHUVRNHDOLOTSNQBOHSHQ");
    msg.range = 0.8591893301162322;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 49741U;
    tmp_msg_0.destination.assign("NPSFABIKCSRKENXRPIBDLFDXJYJEHMQXQBDBFBFESYKZMOCUCNCBGVVJJAVNLFNPCDWYQKGECETSFQRSAVLJGRAPHSIRLGUZOBLYNAAOUXDUKPNAYXLCWGHRHAKUIMUKZVWYSTOHWXTPQPOZWOZGUKXRJCODEJFGTZQDPNXZHMBMLKGTQWQXDEILTXFPHVTVISOHUZVJBNKOHUJCAUBDDFYTZIMVANOSLWMYIERZQEYIMFPQLSWTMGHVGCME");
    tmp_msg_0.timeout = 0.6562915936236168;
    tmp_msg_0.range = 0.20708959072710953;
    tmp_msg_0.type = 199U;
    IMC::LblRangeAcceptance tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id = 169U;
    tmp_tmp_msg_0_0.range = 0.3607300830249711;
    tmp_tmp_msg_0_0.acceptance = 106U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.15084790534175785);
    msg.setSource(64682U);
    msg.setSourceEntity(167U);
    msg.setDestination(11252U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.5409276445759611);
    msg.setSource(40845U);
    msg.setSourceEntity(158U);
    msg.setDestination(46758U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.12140238035140838);
    msg.setSource(47393U);
    msg.setSourceEntity(215U);
    msg.setDestination(62887U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.9835276316039874);
    msg.setSource(12365U);
    msg.setSourceEntity(130U);
    msg.setDestination(28045U);
    msg.setDestinationEntity(169U);
    msg.list.assign("AERSJIZJRCCSHSLPUNCNODEKZPIXHGWJIDQKBKWQVNZOFZLSGTCBTUKVWHUYJMWQDHQCOBXPXGKNOMRFLLFOHIRVYUXGZTVWBDVDAYYPZQCQEVKBPHYCITXRIWHHWLLNDEUSQZCPDMHYFDQKVSWUMGUWMGJNRIOYXVMATIUPLEIWPEEADALKGXJTAMHUYABFRRNTMIFSXAJZAGFRKFCNOQMJOSMEGSAEFYLUFGBTXPDYCNL");

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
    msg.setTimeStamp(0.9601900002451339);
    msg.setSource(55283U);
    msg.setSourceEntity(228U);
    msg.setDestination(39084U);
    msg.setDestinationEntity(178U);
    msg.list.assign("XZGSQSIVNGGUFSVFAMRNECUQUMIBLPKJYJACBGOVPIRGWPJFYDWPGQRURSGELNAAZTKFDXMRAKUZNBHXTYZANRHHWVVZYMHKQFUFMRYVSPCDTTIKKPCIXNIHJZK");

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
    msg.setTimeStamp(0.11377162507356486);
    msg.setSource(8943U);
    msg.setSourceEntity(89U);
    msg.setDestination(54584U);
    msg.setDestinationEntity(79U);
    msg.list.assign("OBESGSBSOEZZURDKMTMZYPHONVIKFDEZBNDJBJEXAULBKCTTMUWBOCATRFWEJW");

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
    msg.setTimeStamp(0.03651887781715624);
    msg.setSource(34917U);
    msg.setSourceEntity(199U);
    msg.setDestination(25911U);
    msg.setDestinationEntity(6U);
    msg.peer.assign("KFOJSITFVYECBNMOAEJDIWGJCUVQRVSTEFNCVFRHAZXWGOCVAUVDELWYDJPHOZWRAMLJLUXLPGQFFENWWKWNWSYCS");
    msg.rssi = 0.18642419092056906;
    msg.integrity = 695U;

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
    msg.setTimeStamp(0.7010457270209842);
    msg.setSource(36116U);
    msg.setSourceEntity(204U);
    msg.setDestination(35148U);
    msg.setDestinationEntity(76U);
    msg.peer.assign("KDDQIDIEMBUQCSMYGLDXAEWNDKVYUBMOITMACBYYPLJORPAHUHQKTBYJVXMEGQTNJPGHXDPFVTZRGPBTXCQTNZJZELSLZFJBEISRVCLVOJOGUBWGDHLFWKKLQIFPRTTURVMHAYXOISCVWUOJSCRUNZHLFGCCIWNNSEEZEQOJQKTSLFXRHKGSE");
    msg.rssi = 0.6367183187703235;
    msg.integrity = 3425U;

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
    msg.setTimeStamp(0.5483557766429252);
    msg.setSource(23183U);
    msg.setSourceEntity(136U);
    msg.setDestination(40437U);
    msg.setDestinationEntity(214U);
    msg.peer.assign("IPUYLHEQGOAFLJPRHSNRLSUYOSGJZNXVAGDPFNRTIAWYSTOOPUMXMOVBGUDBLCVQAICGJAXTTRZCMVDEJNZHIZEHCQNVCPBLIUBMWSLTXGQBRHGVONFTSQCYQXQGKCIWZQWURKDODJYDPWCFMEBIJBUUSJTGMBKSWAVJROUKKWPFAYSKNFNRZTQDEJDHNLOXVXTWIFKDFMGYAZZLFYEANTMKH");
    msg.rssi = 0.5156470466008447;
    msg.integrity = 54147U;

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
    msg.setTimeStamp(0.2524419789858956);
    msg.setSource(32391U);
    msg.setSourceEntity(94U);
    msg.setDestination(59962U);
    msg.setDestinationEntity(86U);
    msg.req_id = 26175U;
    msg.destination.assign("YGCERICUOSJVKIWGDBJRSASFNPZCXQOBNNPJJYLSGHLMEEVHWKVXKULHBGCXVXOWJSKXDDKVIETISAXWTRUFBNKZATHCYJGFCDITRDYMJDLEGUNIHNTMRNAQCKFZDQHGTQPQSPKM");
    msg.timeout = 0.848458754892428;
    msg.range = 0.9651693917937708;
    msg.type = 24U;
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.3342937535614431;
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
    msg.setTimeStamp(0.4522022420137247);
    msg.setSource(46232U);
    msg.setSourceEntity(175U);
    msg.setDestination(61161U);
    msg.setDestinationEntity(32U);
    msg.req_id = 48558U;
    msg.destination.assign("DOYFMYJSVDRLCZGRGBJXXSVVIWN");
    msg.timeout = 0.8700971214371326;
    msg.range = 0.9184116000671426;
    msg.type = 35U;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("OREHZKWUMTAVORZUGABCFMCIHJFRHKKQZYILSGHPTYYDBDRLLTNBYMTCOUMPMNPQOV");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("VXLODHHIHPCSJBMTUWESTPJOBINWGMVMJEJOFQDBWPRZJVFMNHMTSJPXMMDYXIHSIZGCLLJKAWZBATJWHSNOABGX");
    tmp_tmp_msg_0_0.sys_type = 100U;
    tmp_tmp_msg_0_0.owner = 61201U;
    tmp_tmp_msg_0_0.lat = 0.08379475572002926;
    tmp_tmp_msg_0_0.lon = 0.026171867928149406;
    tmp_tmp_msg_0_0.height = 0.4528314858657234;
    tmp_tmp_msg_0_0.services.assign("UMWYNXUCPJCWHJNYTG");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5964590309293639);
    msg.setSource(4542U);
    msg.setSourceEntity(99U);
    msg.setDestination(41370U);
    msg.setDestinationEntity(250U);
    msg.req_id = 700U;
    msg.destination.assign("XGKDVBSLGYOIKMTNAFLZRYCCPGGSYJOIQNCRFPJKNSQTAGYDQDWTOHBIHHQLMYEHUMHLTNEZXYWRDOBJWPZCAOGBQMUWHFOECRXNRYKCKVIXNCMWWNBN");
    msg.timeout = 0.07709159954468092;
    msg.range = 0.7586687165803517;
    msg.type = 253U;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 41U;
    tmp_msg_0.error.assign("HTYMMNOFNUK");
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
    msg.setTimeStamp(0.5993313940173973);
    msg.setSource(18007U);
    msg.setSourceEntity(108U);
    msg.setDestination(61665U);
    msg.setDestinationEntity(89U);
    msg.req_id = 20944U;
    msg.type = 112U;
    msg.status = 72U;
    msg.info.assign("PPJNEFVBNZQVATZPYIQHSIGXYBRDIDJBIQHZKDWGNLMQZOKFFGUAWZFRTNHDCDGURCGCSIJITFPXMRSKVNZTHQYJBATQNOVJZHZKYUMBEXDKKYINEYRNHBAFIBEDMTFMESJHMGVWYTWAAPMVOEGPDKQWUECCMUCLXBFIPMWLPSXQXSRIUYNORTORXKTQHPFFCSTOEZJLSPAOLXJLUVGWUYOCREKJLXBWAA");
    msg.range = 0.059583032597632424;

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
    msg.setTimeStamp(0.5303204232871975);
    msg.setSource(46361U);
    msg.setSourceEntity(85U);
    msg.setDestination(59665U);
    msg.setDestinationEntity(127U);
    msg.req_id = 53214U;
    msg.type = 82U;
    msg.status = 6U;
    msg.info.assign("YLYIPKAYMCMRTEIJPRYUTXKSKMYNUSFKWEOZRIJBCHEGJTUWOSOXKAKJCKIPHWQRV");
    msg.range = 0.23966010188406817;

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
    msg.setTimeStamp(0.7190835774336352);
    msg.setSource(34477U);
    msg.setSourceEntity(180U);
    msg.setDestination(18U);
    msg.setDestinationEntity(41U);
    msg.req_id = 30941U;
    msg.type = 87U;
    msg.status = 54U;
    msg.info.assign("KKBCSXGYPTYHZJBNDHWYCAKDWRKTPJSQLDAOBHNHGAPOGFFEXQVKGZLSWRJAZINJMBHTEXRCDSHLUIIXJPERNVXXTNMTG");
    msg.range = 0.30243461100842484;

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
    msg.setTimeStamp(0.7018617785757465);
    msg.setSource(53091U);
    msg.setSourceEntity(167U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(93U);
    msg.system.assign("UICMIQXBCBKULUJHIGDOARFNSFWWWPRVGKBQJCFUEGNESCRXZZXUYAJNZJBTRCKFDRZXGLELBAOOEODGVLMJSRVOYVFLJIHGKOYZQETJHSWAKWQUMXIWKZLLLYYNPMYISEEMOTDJKFDQXHQCJZVITAVUYXNYENWD");
    msg.op = 229U;

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
    msg.setTimeStamp(0.18887754256571387);
    msg.setSource(11653U);
    msg.setSourceEntity(184U);
    msg.setDestination(36856U);
    msg.setDestinationEntity(253U);
    msg.system.assign("RTFTUFQKBBQKVLTFNFJYLLVGHJLCOBDJHBYSWGIXWDIJSWWQZQDVZEGHOADKDVXYZNMWHVMISRJDTENJIQLPXFUPFMSAREPOTSNHSARYSUVMACJWPKOJEBLAPGOBFKIHXCWAIOCSCPRHMAZGVLJNEVQYMSMPSLDGIXWRGZXEWKPHVGZRTPCLINKUMGUOAFGKDYTOKRIXTAFJBEIXKERZNNZWTXYVQYUDCUDLHBM");
    msg.op = 20U;

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
    msg.setTimeStamp(0.7113190605896793);
    msg.setSource(23226U);
    msg.setSourceEntity(19U);
    msg.setDestination(21306U);
    msg.setDestinationEntity(61U);
    msg.system.assign("WOUYSZQRSDCXZEUZJHHOAPXURXOJGEXSYOQDVWSULPLSNZAHOUPUMKPGAWOHAVFAVEBZBEECHBMIVZSXWLKOQILDWCYTAMRRMNZUJNJPGOMIQXCFCUXSKJKGQNHDFWNNVPQLYRRCYGWNQDSMSQTXPLEIKFXTBNNPDDVEMRTVEUIBGDZPEOLVLBVXFABTWAIBDVLUHTAJMSABCJKKTCCZ");
    msg.op = 84U;

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
    msg.setTimeStamp(0.5620071020163437);
    msg.setSource(440U);
    msg.setSourceEntity(132U);
    msg.setDestination(5987U);
    msg.setDestinationEntity(181U);
    msg.value = 31687;

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
    msg.setTimeStamp(0.602353610196097);
    msg.setSource(35759U);
    msg.setSourceEntity(245U);
    msg.setDestination(58363U);
    msg.setDestinationEntity(130U);
    msg.value = 20571;

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
    msg.setTimeStamp(0.1772214981040945);
    msg.setSource(3065U);
    msg.setSourceEntity(0U);
    msg.setDestination(53002U);
    msg.setDestinationEntity(235U);
    msg.value = 6839;

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
    msg.setTimeStamp(0.4309216104069006);
    msg.setSource(62545U);
    msg.setSourceEntity(30U);
    msg.setDestination(3240U);
    msg.setDestinationEntity(83U);
    msg.value = 0.25600280526186536;

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
    msg.setTimeStamp(0.6755055740871545);
    msg.setSource(16224U);
    msg.setSourceEntity(171U);
    msg.setDestination(30061U);
    msg.setDestinationEntity(112U);
    msg.value = 0.2052095272591088;

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
    msg.setTimeStamp(0.1252999309147116);
    msg.setSource(1470U);
    msg.setSourceEntity(117U);
    msg.setDestination(17540U);
    msg.setDestinationEntity(157U);
    msg.value = 0.73823716516373;

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
    msg.setTimeStamp(0.7884924517501121);
    msg.setSource(14960U);
    msg.setSourceEntity(1U);
    msg.setDestination(50153U);
    msg.setDestinationEntity(143U);
    msg.value = 0.6026273156955926;

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
    msg.setTimeStamp(0.6775330502544621);
    msg.setSource(50823U);
    msg.setSourceEntity(209U);
    msg.setDestination(11505U);
    msg.setDestinationEntity(58U);
    msg.value = 0.6425054270258151;

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
    msg.setTimeStamp(0.32571805702688583);
    msg.setSource(23408U);
    msg.setSourceEntity(251U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(15U);
    msg.value = 0.7246670066979937;

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
    msg.setTimeStamp(0.7802576704321411);
    msg.setSource(41530U);
    msg.setSourceEntity(129U);
    msg.setDestination(53294U);
    msg.setDestinationEntity(253U);
    msg.validity = 21670U;
    msg.type = 36U;
    msg.utc_year = 10590U;
    msg.utc_month = 20U;
    msg.utc_day = 49U;
    msg.utc_time = 0.02843618634813949;
    msg.lat = 0.28556440961229335;
    msg.lon = 0.9501835244320963;
    msg.height = 0.7453563643608974;
    msg.satellites = 181U;
    msg.cog = 0.8659277754902248;
    msg.sog = 0.03464236853853386;
    msg.hdop = 0.5724003303973502;
    msg.vdop = 0.4691137698431457;
    msg.hacc = 0.1261745022012809;
    msg.vacc = 0.8001995490804013;

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
    msg.setTimeStamp(0.6756938399565977);
    msg.setSource(50047U);
    msg.setSourceEntity(244U);
    msg.setDestination(15956U);
    msg.setDestinationEntity(251U);
    msg.validity = 55926U;
    msg.type = 175U;
    msg.utc_year = 37381U;
    msg.utc_month = 222U;
    msg.utc_day = 173U;
    msg.utc_time = 0.6472643131570155;
    msg.lat = 0.7678264288077656;
    msg.lon = 0.3577419417590869;
    msg.height = 0.1676918447728467;
    msg.satellites = 72U;
    msg.cog = 0.49372692053187095;
    msg.sog = 0.4596319419888262;
    msg.hdop = 0.48116014727207845;
    msg.vdop = 0.5754563597510113;
    msg.hacc = 0.5754004598768228;
    msg.vacc = 0.6113642237946457;

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
    msg.setTimeStamp(0.2809584208345095);
    msg.setSource(17811U);
    msg.setSourceEntity(133U);
    msg.setDestination(46931U);
    msg.setDestinationEntity(219U);
    msg.validity = 36026U;
    msg.type = 213U;
    msg.utc_year = 10668U;
    msg.utc_month = 45U;
    msg.utc_day = 96U;
    msg.utc_time = 0.5504966822537534;
    msg.lat = 0.06428629831777843;
    msg.lon = 0.21470756852179695;
    msg.height = 0.7156939722719098;
    msg.satellites = 116U;
    msg.cog = 0.33273016905737973;
    msg.sog = 0.13817549977432386;
    msg.hdop = 0.46851386452720933;
    msg.vdop = 0.8105223267431021;
    msg.hacc = 0.10348472363151084;
    msg.vacc = 0.09193958510785372;

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
    msg.setTimeStamp(0.6272138287768638);
    msg.setSource(49184U);
    msg.setSourceEntity(193U);
    msg.setDestination(3609U);
    msg.setDestinationEntity(165U);
    msg.time = 0.6536710487912286;
    msg.phi = 0.8455280160935451;
    msg.theta = 0.8558631778535969;
    msg.psi = 0.4479719440844937;
    msg.psi_magnetic = 0.5226444097207563;

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
    msg.setTimeStamp(0.2887679560687707);
    msg.setSource(54047U);
    msg.setSourceEntity(110U);
    msg.setDestination(17339U);
    msg.setDestinationEntity(96U);
    msg.time = 0.4853431072843488;
    msg.phi = 0.26415573981105633;
    msg.theta = 0.49057038797223074;
    msg.psi = 0.05922755794449375;
    msg.psi_magnetic = 0.6085219251207346;

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
    msg.setTimeStamp(0.6534124636369975);
    msg.setSource(39136U);
    msg.setSourceEntity(226U);
    msg.setDestination(18897U);
    msg.setDestinationEntity(75U);
    msg.time = 0.3827058634087479;
    msg.phi = 0.9138991650805384;
    msg.theta = 0.6077187644643935;
    msg.psi = 0.35566279110998034;
    msg.psi_magnetic = 0.14383717838080978;

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
    msg.setTimeStamp(0.8066210273022737);
    msg.setSource(55798U);
    msg.setSourceEntity(147U);
    msg.setDestination(9164U);
    msg.setDestinationEntity(197U);
    msg.time = 0.11923332761029393;
    msg.x = 0.7360912155845116;
    msg.y = 0.6298745992082664;
    msg.z = 0.9247101987262899;
    msg.timestep = 0.22890569093671997;

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
    msg.setTimeStamp(0.8645951466579594);
    msg.setSource(63109U);
    msg.setSourceEntity(251U);
    msg.setDestination(37548U);
    msg.setDestinationEntity(90U);
    msg.time = 0.6620704149575998;
    msg.x = 0.640110945407236;
    msg.y = 0.6368237078856639;
    msg.z = 0.6458434537295936;
    msg.timestep = 0.9796440181111199;

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
    msg.setTimeStamp(0.8531052629681903);
    msg.setSource(22818U);
    msg.setSourceEntity(1U);
    msg.setDestination(3953U);
    msg.setDestinationEntity(2U);
    msg.time = 0.2048700985197811;
    msg.x = 0.17865055027203558;
    msg.y = 0.7886327103845172;
    msg.z = 0.7772620801809307;
    msg.timestep = 0.7686071442867588;

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
    msg.setTimeStamp(0.7882510069670696);
    msg.setSource(42894U);
    msg.setSourceEntity(218U);
    msg.setDestination(13684U);
    msg.setDestinationEntity(0U);
    msg.time = 0.628202744596969;
    msg.x = 0.6293882747248706;
    msg.y = 0.21741080125598589;
    msg.z = 0.1263459680435598;

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
    msg.setTimeStamp(0.12980759225237581);
    msg.setSource(8351U);
    msg.setSourceEntity(143U);
    msg.setDestination(7139U);
    msg.setDestinationEntity(97U);
    msg.time = 0.5959000786993883;
    msg.x = 0.08707276941136899;
    msg.y = 0.3316218229713044;
    msg.z = 0.431298620489482;

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
    msg.setTimeStamp(0.8666864765072889);
    msg.setSource(42034U);
    msg.setSourceEntity(164U);
    msg.setDestination(18194U);
    msg.setDestinationEntity(111U);
    msg.time = 0.39351439912644903;
    msg.x = 0.7146705512665487;
    msg.y = 0.10703460144934074;
    msg.z = 0.9065806197352932;

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
    msg.setTimeStamp(0.45655749385385624);
    msg.setSource(26365U);
    msg.setSourceEntity(7U);
    msg.setDestination(11346U);
    msg.setDestinationEntity(103U);
    msg.time = 0.012974557277519616;
    msg.x = 0.41597580631363196;
    msg.y = 0.4822905000636095;
    msg.z = 0.00409116685458899;

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
    msg.setTimeStamp(0.44612307064404877);
    msg.setSource(59855U);
    msg.setSourceEntity(69U);
    msg.setDestination(27885U);
    msg.setDestinationEntity(166U);
    msg.time = 0.5894266112635148;
    msg.x = 0.5062387659144784;
    msg.y = 0.299530357596533;
    msg.z = 0.3050402587822528;

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
    msg.setTimeStamp(0.11456480446306583);
    msg.setSource(14028U);
    msg.setSourceEntity(47U);
    msg.setDestination(48624U);
    msg.setDestinationEntity(17U);
    msg.time = 0.46940240234879094;
    msg.x = 0.2498975318165978;
    msg.y = 0.6422452113039274;
    msg.z = 0.09777837116340915;

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
    msg.setTimeStamp(0.8111836930452949);
    msg.setSource(34234U);
    msg.setSourceEntity(121U);
    msg.setDestination(15177U);
    msg.setDestinationEntity(38U);
    msg.time = 0.41440723554573644;
    msg.x = 0.8633047463508322;
    msg.y = 0.8910606269989098;
    msg.z = 0.8726871008783165;

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
    msg.setTimeStamp(0.9884255299949941);
    msg.setSource(43554U);
    msg.setSourceEntity(84U);
    msg.setDestination(39979U);
    msg.setDestinationEntity(76U);
    msg.time = 0.4528714549938532;
    msg.x = 0.005851978855721973;
    msg.y = 0.7067092552058317;
    msg.z = 0.5330741840140049;

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
    msg.setTimeStamp(0.8255945177707703);
    msg.setSource(36680U);
    msg.setSourceEntity(149U);
    msg.setDestination(49477U);
    msg.setDestinationEntity(137U);
    msg.time = 0.29563406915193646;
    msg.x = 0.5052538141155751;
    msg.y = 0.9956451939313165;
    msg.z = 0.09660207708455093;

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
    msg.setTimeStamp(0.5826635033744291);
    msg.setSource(37537U);
    msg.setSourceEntity(211U);
    msg.setDestination(13597U);
    msg.setDestinationEntity(108U);
    msg.validity = 247U;
    msg.x = 0.09880472810471475;
    msg.y = 0.050042407348668605;
    msg.z = 0.21701728935827513;

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
    msg.setTimeStamp(0.5023946495541391);
    msg.setSource(54100U);
    msg.setSourceEntity(123U);
    msg.setDestination(51893U);
    msg.setDestinationEntity(70U);
    msg.validity = 238U;
    msg.x = 0.36495235407657756;
    msg.y = 0.27423146613002547;
    msg.z = 0.6189977029956889;

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
    msg.setTimeStamp(0.31080374244172315);
    msg.setSource(1157U);
    msg.setSourceEntity(198U);
    msg.setDestination(28201U);
    msg.setDestinationEntity(26U);
    msg.validity = 195U;
    msg.x = 0.2059529086223698;
    msg.y = 0.4488748978389665;
    msg.z = 0.6148561335725863;

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
    msg.setTimeStamp(0.3031372120786694);
    msg.setSource(2339U);
    msg.setSourceEntity(163U);
    msg.setDestination(63752U);
    msg.setDestinationEntity(210U);
    msg.validity = 15U;
    msg.x = 0.12292661991057019;
    msg.y = 0.8552446019491168;
    msg.z = 0.08950827869351652;

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
    msg.setTimeStamp(0.7915533350915911);
    msg.setSource(53010U);
    msg.setSourceEntity(51U);
    msg.setDestination(33933U);
    msg.setDestinationEntity(123U);
    msg.validity = 126U;
    msg.x = 0.9021306075756114;
    msg.y = 0.2759967275782349;
    msg.z = 0.964866651519468;

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
    msg.setTimeStamp(0.6586034001545618);
    msg.setSource(3427U);
    msg.setSourceEntity(228U);
    msg.setDestination(25493U);
    msg.setDestinationEntity(80U);
    msg.validity = 142U;
    msg.x = 0.5920361689007667;
    msg.y = 0.2116720683770681;
    msg.z = 0.672029091110581;

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
    msg.setTimeStamp(0.35662638821071035);
    msg.setSource(37480U);
    msg.setSourceEntity(83U);
    msg.setDestination(21293U);
    msg.setDestinationEntity(208U);
    msg.time = 0.2231386614807811;
    msg.x = 0.6303321061205011;
    msg.y = 0.5875775867045502;
    msg.z = 0.11245608268204899;

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
    msg.setTimeStamp(0.7593033692810895);
    msg.setSource(1631U);
    msg.setSourceEntity(55U);
    msg.setDestination(56251U);
    msg.setDestinationEntity(103U);
    msg.time = 0.006298785127849427;
    msg.x = 0.9746366651817208;
    msg.y = 0.8055174223684617;
    msg.z = 0.8785191587101151;

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
    msg.setTimeStamp(0.959005698995175);
    msg.setSource(19312U);
    msg.setSourceEntity(102U);
    msg.setDestination(21857U);
    msg.setDestinationEntity(50U);
    msg.time = 0.2838740663256907;
    msg.x = 0.27786923255560936;
    msg.y = 0.280042813307797;
    msg.z = 0.827233846595494;

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
    msg.setTimeStamp(0.6679631782277159);
    msg.setSource(4071U);
    msg.setSourceEntity(236U);
    msg.setDestination(33950U);
    msg.setDestinationEntity(237U);
    msg.validity = 27U;
    msg.value = 0.7866287595358453;

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
    msg.setTimeStamp(0.020742742782202117);
    msg.setSource(48818U);
    msg.setSourceEntity(57U);
    msg.setDestination(61315U);
    msg.setDestinationEntity(132U);
    msg.validity = 250U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9149599522098633;
    tmp_msg_0.y = 0.030014216387868164;
    tmp_msg_0.z = 0.6142011957986337;
    tmp_msg_0.phi = 0.06580660884002454;
    tmp_msg_0.theta = 0.36512829205442676;
    tmp_msg_0.psi = 0.9518665977783238;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.05867463543166296;
    tmp_msg_1.beam_height = 0.4794956071270764;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.19380264317911777;

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
    msg.setTimeStamp(0.25931277992765156);
    msg.setSource(17391U);
    msg.setSourceEntity(172U);
    msg.setDestination(5519U);
    msg.setDestinationEntity(47U);
    msg.validity = 183U;
    msg.value = 0.25936320566999393;

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
    msg.setTimeStamp(0.7362780840804752);
    msg.setSource(2361U);
    msg.setSourceEntity(248U);
    msg.setDestination(40980U);
    msg.setDestinationEntity(162U);
    msg.value = 0.3043971545573695;

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
    msg.setTimeStamp(0.7357185504111455);
    msg.setSource(36553U);
    msg.setSourceEntity(113U);
    msg.setDestination(62533U);
    msg.setDestinationEntity(73U);
    msg.value = 0.8915621421723604;

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
    msg.setTimeStamp(0.6493627445072787);
    msg.setSource(57559U);
    msg.setSourceEntity(97U);
    msg.setDestination(13048U);
    msg.setDestinationEntity(182U);
    msg.value = 0.28319344739136143;

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
    msg.setTimeStamp(0.25690328460091494);
    msg.setSource(34594U);
    msg.setSourceEntity(161U);
    msg.setDestination(5509U);
    msg.setDestinationEntity(70U);
    msg.value = 0.44406628844423157;

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
    msg.setTimeStamp(0.8227695240890027);
    msg.setSource(40268U);
    msg.setSourceEntity(93U);
    msg.setDestination(21985U);
    msg.setDestinationEntity(185U);
    msg.value = 0.8785270296066914;

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
    msg.setTimeStamp(0.6112120481781419);
    msg.setSource(58169U);
    msg.setSourceEntity(134U);
    msg.setDestination(51275U);
    msg.setDestinationEntity(94U);
    msg.value = 0.9306722312259259;

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
    msg.setTimeStamp(0.377752428019029);
    msg.setSource(40577U);
    msg.setSourceEntity(198U);
    msg.setDestination(47707U);
    msg.setDestinationEntity(58U);
    msg.value = 0.9539390995965941;

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
    msg.setTimeStamp(0.5732482925282785);
    msg.setSource(47481U);
    msg.setSourceEntity(92U);
    msg.setDestination(17056U);
    msg.setDestinationEntity(69U);
    msg.value = 0.31747442737278897;

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
    msg.setTimeStamp(0.23879670527495256);
    msg.setSource(44222U);
    msg.setSourceEntity(67U);
    msg.setDestination(28380U);
    msg.setDestinationEntity(36U);
    msg.value = 0.04908850325031722;

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
    msg.setTimeStamp(0.19361778148844855);
    msg.setSource(8238U);
    msg.setSourceEntity(203U);
    msg.setDestination(40853U);
    msg.setDestinationEntity(175U);
    msg.value = 0.4284981913903766;

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
    msg.setTimeStamp(0.06920777287416813);
    msg.setSource(56485U);
    msg.setSourceEntity(51U);
    msg.setDestination(62131U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5608876645530917;

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
    msg.setTimeStamp(0.3585329437398216);
    msg.setSource(18915U);
    msg.setSourceEntity(154U);
    msg.setDestination(37696U);
    msg.setDestinationEntity(0U);
    msg.value = 0.1592237657308715;

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
    msg.setTimeStamp(0.24830523962428852);
    msg.setSource(41815U);
    msg.setSourceEntity(231U);
    msg.setDestination(7180U);
    msg.setDestinationEntity(192U);
    msg.value = 0.23362866210065758;

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
    msg.setTimeStamp(0.8520315465446421);
    msg.setSource(45740U);
    msg.setSourceEntity(71U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(122U);
    msg.value = 0.505819923996614;

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
    msg.setTimeStamp(0.9951531786319281);
    msg.setSource(4260U);
    msg.setSourceEntity(18U);
    msg.setDestination(58763U);
    msg.setDestinationEntity(113U);
    msg.value = 0.07735181423942095;

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
    msg.setTimeStamp(0.0724618190991766);
    msg.setSource(49423U);
    msg.setSourceEntity(54U);
    msg.setDestination(46778U);
    msg.setDestinationEntity(241U);
    msg.value = 0.36705209105263537;

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
    msg.setTimeStamp(0.0008689553352364543);
    msg.setSource(12110U);
    msg.setSourceEntity(227U);
    msg.setDestination(1742U);
    msg.setDestinationEntity(248U);
    msg.value = 0.39479876541371517;

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
    msg.setTimeStamp(0.28499199619588933);
    msg.setSource(62289U);
    msg.setSourceEntity(186U);
    msg.setDestination(6426U);
    msg.setDestinationEntity(221U);
    msg.value = 0.6973391766225598;

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
    msg.setTimeStamp(0.14302490603095808);
    msg.setSource(24163U);
    msg.setSourceEntity(170U);
    msg.setDestination(5670U);
    msg.setDestinationEntity(145U);
    msg.value = 0.425537297715313;

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
    msg.setTimeStamp(0.0062046389277773395);
    msg.setSource(18210U);
    msg.setSourceEntity(1U);
    msg.setDestination(25095U);
    msg.setDestinationEntity(129U);
    msg.value = 0.067220536537691;

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
    msg.setTimeStamp(0.5160984749135179);
    msg.setSource(2589U);
    msg.setSourceEntity(162U);
    msg.setDestination(8736U);
    msg.setDestinationEntity(4U);
    msg.value = 0.6758263172883604;

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
    msg.setTimeStamp(0.18052998203142434);
    msg.setSource(41893U);
    msg.setSourceEntity(110U);
    msg.setDestination(26118U);
    msg.setDestinationEntity(171U);
    msg.value = 0.20350336959255877;

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
    msg.setTimeStamp(0.9162850266372556);
    msg.setSource(12800U);
    msg.setSourceEntity(204U);
    msg.setDestination(52863U);
    msg.setDestinationEntity(223U);
    msg.value = 0.26367985806838223;

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
    msg.setTimeStamp(0.7619686683814801);
    msg.setSource(33645U);
    msg.setSourceEntity(125U);
    msg.setDestination(65488U);
    msg.setDestinationEntity(174U);
    msg.value = 0.7139476375373744;

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
    msg.setTimeStamp(0.9829689273150372);
    msg.setSource(58091U);
    msg.setSourceEntity(251U);
    msg.setDestination(48800U);
    msg.setDestinationEntity(149U);
    msg.direction = 0.5813180444304261;
    msg.speed = 0.9656730010069658;
    msg.turbulence = 0.8651471220412806;

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
    msg.setTimeStamp(0.9947591734793811);
    msg.setSource(53436U);
    msg.setSourceEntity(135U);
    msg.setDestination(21797U);
    msg.setDestinationEntity(148U);
    msg.direction = 0.3334842421392975;
    msg.speed = 0.47350265225364263;
    msg.turbulence = 0.9260776584876788;

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
    msg.setTimeStamp(0.9604128263566116);
    msg.setSource(45423U);
    msg.setSourceEntity(152U);
    msg.setDestination(229U);
    msg.setDestinationEntity(170U);
    msg.direction = 0.36622856580337115;
    msg.speed = 0.6134605427163479;
    msg.turbulence = 0.37800088348527927;

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
    msg.setTimeStamp(0.8581988911494091);
    msg.setSource(3932U);
    msg.setSourceEntity(87U);
    msg.setDestination(30533U);
    msg.setDestinationEntity(117U);
    msg.value = 0.2944595423098467;

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
    msg.setTimeStamp(0.3279364911423608);
    msg.setSource(31625U);
    msg.setSourceEntity(8U);
    msg.setDestination(35694U);
    msg.setDestinationEntity(194U);
    msg.value = 0.8516423483111154;

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
    msg.setTimeStamp(0.5679360099104941);
    msg.setSource(729U);
    msg.setSourceEntity(1U);
    msg.setDestination(59097U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5694264580280759;

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
    msg.setTimeStamp(0.8538549228716533);
    msg.setSource(37667U);
    msg.setSourceEntity(37U);
    msg.setDestination(36396U);
    msg.setDestinationEntity(160U);
    msg.value.assign("VPPRBMKTCJYUASGOHYPKCIXJELSRAPIUURTVHXCAQJHHXOVGDSGEQKCXNRWMIIMZRVSAVHQZBCXVKJLJOFCTDWNBAWLWTXBTDWGHDCFQFTUUBFDJELTQKUYUNJGPYSBHPSLFHZLKRMYWUZEGPAMEPFJNNLJESDZGMSERRUSTZIARTLMLKNOMEFIABCYCVIBOKBWFODWDVXMZYYOITOAMIJZNFVQDVZHWQQKEZOQOLYGRUPDPKIAYNGXGS");

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
    msg.setTimeStamp(0.5644740588523067);
    msg.setSource(54530U);
    msg.setSourceEntity(2U);
    msg.setDestination(30816U);
    msg.setDestinationEntity(52U);
    msg.value.assign("OJTICDWGYPWFRBPTXTUCYSAEJVJGFZZVROUXYJIXSYSCDFAVMAEHJRILCISWWDLVWFVYERMPXDQFLQLLDXUAZBWLBMDWKKNMBVTAPZKPRGTBYXNVPOAACKLMMNUBFEAQGFODZQXZQTHKKNQGJEUBTSGJJFGGUXIZUSFKIULRXVQOYJIXCHHRHDZLDYRKFHPOKENHTOYSWW");

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
    msg.setTimeStamp(0.7352492754276845);
    msg.setSource(46065U);
    msg.setSourceEntity(21U);
    msg.setDestination(33961U);
    msg.setDestinationEntity(41U);
    msg.value.assign("HZYJXAXEAWUVAAUEEUTBUBDDWQEOJPRLPTJUJXMBYCUTNRYGBENLVXJMOYFXYFSCEJZFMCVTBYWMVOAKPVHPLQKKIRMIRLOFFIWHQPKQFGAOJNQOOQCRYBCMTYWFHSXKAGCPKCVHDRTVZNQZRTYTMEIMQUJLALHZJBNWOSZCV");

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
    msg.setTimeStamp(0.2321449365842112);
    msg.setSource(32563U);
    msg.setSourceEntity(161U);
    msg.setDestination(55873U);
    msg.setDestinationEntity(246U);
    const signed char tmp_msg_0[] = {-117, -124, 47, -127, 86, -127, -48, 3, -38, 73, 15, 53, -26, -62, -28, -104, 90, 91, -112, 40, 103, -116, 31, 42, -4, -57, -30, 9, 2, 53, -126, -66, 58, -24, -102, 15, -5, -66, -100, -98, 80, -29, 122, -127, 35, -95, -76, 94, -12, 32, -113, 53, 89, 82, -54, 95, 39, -77, -25, -122, -13, -50, -104, 47, -46, -5, 59, 65, -52, -128, 125, 0, -119, 14, -16, -12, 119, -8, -11, -40, -66, -5, 21, -108, -104, -73, 116, -104, -90, 3, 13, 64, -49, 10, -13, 1, 14, 15, 118, 112, -19, 120, -124, 39, -11, 116, 80, 64, 72, -32, -32, 0, 25, -14, -18, 0, -97, 6, 7, -50, -65, 18, -125, -60, -2, -31, 84, 52, 61, 108, -46, 97, -13, -55, -22, 124, -69, 55, 126, -20, -107, 95, -14};
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
    msg.setTimeStamp(0.9008427269224185);
    msg.setSource(41052U);
    msg.setSourceEntity(193U);
    msg.setDestination(9295U);
    msg.setDestinationEntity(55U);
    const signed char tmp_msg_0[] = {65, -116, 122, -3, 83, -51, -67, 52, 8, 23, -19, -39, -10, 6, -57, 28, 92, -37, 108, 90, -77, -108, -66, 32, 82, -21, -5, -64, 6, -29, 93, -110, 10, -22, 35, 66, 111, -92, -61, 105, 119, -9, -34, -5, -26, 14, -102, 96, -76, -106, -79, -15, -3, 121, -77, -91, 115, 78, -51, -70, 36, -36, -10, -36, -10, 29, -15, -27, -98, 105, 87, -121, 93, -120, -56, 53, -14, -38, 121, -9, 79, 17, 38, 73, 49, 28, -122, -96, -19, -31, 113, -46, -60, -1, -112, 82, 42, 74, -60, -118, 66, -113, 43, 33, -87, 61, 1, 55, 17, 80, 110, -82, 105, -85, -64, -41, 7, 25, -35, -58, 86, -101, -122, 92, -81, -66, 82, 78, -77, -58, 73, -18, 24, -53, 19, 91, -71, 75, 121, -95, -10, -72, -56, 66, -122, -39, -22, 84, 37, 115, -42, 84, 121, 41, -17, -62, 8, -115, 70, 16, 80, -56, -94, -26, 37, 51, -24, 30, 90, 107, -121, -50, 45, 24, -32, -7, 59, -77, 81, -82, 10, 0, -33, -110, 32, 23, -76, 57, 9, 123, 105, 103, -31, 62, -73, -20, 73, 86, 101, -36, 71, -16, -28, 104, -107, -49, 105, -7, 23, 86, 20, 88, 107, -18, 103, -35, -93, 61, -83, -79, 1, -7, -3, 56, -71, -68, -33, 63, 20, -113, -4, -120, 114, 34, -10, 7, 20, -75, -116, 6, 49, 9, -33, 48, 113};
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
    msg.setTimeStamp(0.48239005806118085);
    msg.setSource(10191U);
    msg.setSourceEntity(126U);
    msg.setDestination(57583U);
    msg.setDestinationEntity(139U);
    const signed char tmp_msg_0[] = {66, 46, -92, 54, 109, -12, 108, -22, 40, -83, -76, -53, -48, -78, 18, -117, -15, -91, -121, -78, 36, -71, 2, 96, 118};
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
    msg.setTimeStamp(0.3514949474308787);
    msg.setSource(47607U);
    msg.setSourceEntity(47U);
    msg.setDestination(29126U);
    msg.setDestinationEntity(143U);
    msg.value = 0.4524494165151757;

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
    msg.setTimeStamp(0.3395324468601537);
    msg.setSource(45936U);
    msg.setSourceEntity(61U);
    msg.setDestination(2409U);
    msg.setDestinationEntity(23U);
    msg.value = 0.10432370283610315;

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
    msg.setTimeStamp(0.9911306136039238);
    msg.setSource(43337U);
    msg.setSourceEntity(50U);
    msg.setDestination(54747U);
    msg.setDestinationEntity(230U);
    msg.value = 0.49750642607167994;

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
    msg.setTimeStamp(0.26091439582624765);
    msg.setSource(7833U);
    msg.setSourceEntity(186U);
    msg.setDestination(59932U);
    msg.setDestinationEntity(202U);
    msg.type = 210U;
    msg.frequency = 85396296U;
    msg.min_range = 49545U;
    msg.max_range = 59306U;
    msg.bits_per_point = 28U;
    msg.scale_factor = 0.8240346199600591;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4163640021408811;
    tmp_msg_0.beam_height = 0.9885074578356362;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {30, -82, 94, 50, 57, -52, 0, 38, 88, -67, 95, 56, -43, -111, -68, -66, -64, 86, 32, -121, 119};
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
    msg.setTimeStamp(0.726060647175331);
    msg.setSource(16576U);
    msg.setSourceEntity(182U);
    msg.setDestination(32720U);
    msg.setDestinationEntity(77U);
    msg.type = 239U;
    msg.frequency = 1576904725U;
    msg.min_range = 17148U;
    msg.max_range = 25019U;
    msg.bits_per_point = 145U;
    msg.scale_factor = 0.8973148301137512;
    const signed char tmp_msg_0[] = {55, 87, 107, -17, -97, 23, -97, -123, 121, -106, 105, -127, 113, -29, -73, -39, -70, 9, 92, -44, -92, -80, -30, 39, 110, -60, 62, 88, -99, -26, 107, -68, 120, -74, 107, -106, 20, -37, 34, -115, 77, 14, -89, -94, -118, -71, -116, -23, -22, 41, 35, -23, -81, -57, 126, -92, 78, -118, -50, -115, 122, 29, 27, -115, -35, 106, 73, -80, -53, -1, -81, -109, -73, 102, 50, 59, 14, 86, -100, -20, 106, 102, 70, 22};
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
    msg.setTimeStamp(0.797805797422644);
    msg.setSource(63965U);
    msg.setSourceEntity(231U);
    msg.setDestination(14342U);
    msg.setDestinationEntity(169U);
    msg.type = 114U;
    msg.frequency = 3218363387U;
    msg.min_range = 3367U;
    msg.max_range = 31258U;
    msg.bits_per_point = 9U;
    msg.scale_factor = 0.893128772602093;
    const signed char tmp_msg_0[] = {112, 97, 79, 107, 71, -66, 5, 77, 69, 63, -17, 92, -38, 118, 29, -86, -63, -13, 108, 33, -2, 17, 42, 47, 86, -110, -54, -101, 49, -54, 13, -117, 72, -2, 55, -31, -5, -46, 108, -87, -72, 57, 98, -59, -119, -125, -34, 99, -16, 68, -108, -48, 20, 123, -10, 110, -27, 20, 18, -103, -12, -39, 8, 56, -95, 29, 103, 6, -18, 38, -99, -95, -114, 64, -82, 124, -10, -4, -112, 107, -99, 65, 22, -33, -97, -19, -98, -102, 107, 27, -54, -12, -1, -61, -18, -84, -89, -48, 122, -2, -88, -79, -106, 11, -24, 32, 1, -119, -32, 24, -91, -114, 22, -90, -20, 6, -10, 105, -127, 100, -115, -36, 44, 82, 51, -76, -49, 48, -85, -81, 66, 54, -34, -1, 56, -104, -31, -124, -103};
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
    msg.setTimeStamp(0.8669215122164285);
    msg.setSource(29455U);
    msg.setSourceEntity(217U);
    msg.setDestination(44370U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.5567587810692599);
    msg.setSource(22891U);
    msg.setSourceEntity(179U);
    msg.setDestination(36289U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.18158960926093914);
    msg.setSource(7690U);
    msg.setSourceEntity(230U);
    msg.setDestination(1363U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.5230341504036387);
    msg.setSource(25134U);
    msg.setSourceEntity(61U);
    msg.setDestination(8138U);
    msg.setDestinationEntity(229U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.31201688307019215);
    msg.setSource(5033U);
    msg.setSourceEntity(198U);
    msg.setDestination(23689U);
    msg.setDestinationEntity(12U);
    msg.op = 178U;

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
    msg.setTimeStamp(0.4019195248896519);
    msg.setSource(54720U);
    msg.setSourceEntity(133U);
    msg.setDestination(7731U);
    msg.setDestinationEntity(19U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.09057893634616543);
    msg.setSource(33235U);
    msg.setSourceEntity(162U);
    msg.setDestination(10643U);
    msg.setDestinationEntity(44U);
    msg.value = 0.028663017031809512;
    msg.confidence = 0.1324995652696399;
    msg.opmodes.assign("CTMYMJKNZTKDSFARSZZACLQEIGLAEFJYLREOPUEVRAQBTLZBHEAIFOXFIWNCQGSEHKODWTNQKJGXCDTGJCUTEZIOYRCVVRDDVLSXLPUSJYGQOYCLBLKXMUCBSPDHMITWXNZITPRUPFXVYPUWLXZHAFFSAWRMHBPPHWJIBMZEYOZTXCWYVSWKVYADPKIQHGKQDNKQQLRVPGUMHVSMXDJJFWAHIUBKGOBZNCRXTMJNOF");

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
    msg.setTimeStamp(0.6696341831259135);
    msg.setSource(52804U);
    msg.setSourceEntity(160U);
    msg.setDestination(56929U);
    msg.setDestinationEntity(170U);
    msg.value = 0.1911690911592443;
    msg.confidence = 0.26100885521547934;
    msg.opmodes.assign("ZGOPFXTGPUGZZDTGFSDXPEYHUJRDHIIILNZJCGCMUEDKWISOJHMKYJLLWDDCSDFEZAHYMPSFPBDLKIMET");

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
    msg.setTimeStamp(0.6931820198544628);
    msg.setSource(42378U);
    msg.setSourceEntity(207U);
    msg.setDestination(45437U);
    msg.setDestinationEntity(246U);
    msg.value = 0.5359661503564471;
    msg.confidence = 0.9566812098246515;
    msg.opmodes.assign("FECQUSIKRZEOJUFNAXAVGSOFWUUNLMMZTPO");

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
    msg.setTimeStamp(0.18939623698233599);
    msg.setSource(48647U);
    msg.setSourceEntity(138U);
    msg.setDestination(16219U);
    msg.setDestinationEntity(184U);
    msg.itow = 993161578U;
    msg.lat = 0.8484574463530781;
    msg.lon = 0.9612259247362875;
    msg.height_ell = 0.8434742657925796;
    msg.height_sea = 0.49318872928681134;
    msg.hacc = 0.508476540471891;
    msg.vacc = 0.6855941069741238;
    msg.vel_n = 0.4356633742939138;
    msg.vel_e = 0.5447061066924862;
    msg.vel_d = 0.06279119091413943;
    msg.speed = 0.17431777023107342;
    msg.gspeed = 0.09796584898882943;
    msg.heading = 0.2627350853458561;
    msg.sacc = 0.6136558889750061;
    msg.cacc = 0.11957415156949369;

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
    msg.setTimeStamp(0.9349287859635402);
    msg.setSource(17332U);
    msg.setSourceEntity(128U);
    msg.setDestination(54269U);
    msg.setDestinationEntity(171U);
    msg.itow = 3071272265U;
    msg.lat = 0.3264507525418753;
    msg.lon = 0.720555496080597;
    msg.height_ell = 0.17659094997393776;
    msg.height_sea = 0.15416905183151874;
    msg.hacc = 0.7862103566327991;
    msg.vacc = 0.143047518532607;
    msg.vel_n = 0.13257278913251602;
    msg.vel_e = 0.03537543631750062;
    msg.vel_d = 0.45276594226943556;
    msg.speed = 0.7388675910053117;
    msg.gspeed = 0.6757283734919056;
    msg.heading = 0.8256613405674493;
    msg.sacc = 0.022503593307751535;
    msg.cacc = 0.09869639954484222;

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
    msg.setTimeStamp(0.09554421413637915);
    msg.setSource(2733U);
    msg.setSourceEntity(31U);
    msg.setDestination(58723U);
    msg.setDestinationEntity(202U);
    msg.itow = 3552103622U;
    msg.lat = 0.07053307058138447;
    msg.lon = 0.614009195292038;
    msg.height_ell = 0.6537377759555442;
    msg.height_sea = 0.8467551249998864;
    msg.hacc = 0.6462061739875855;
    msg.vacc = 0.5622685593441508;
    msg.vel_n = 0.45378248561245427;
    msg.vel_e = 0.5900894689853542;
    msg.vel_d = 0.16609797144863359;
    msg.speed = 0.711968836685834;
    msg.gspeed = 0.8873421539084481;
    msg.heading = 0.7077588565247637;
    msg.sacc = 0.6651917637946233;
    msg.cacc = 0.18153908677228225;

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
    msg.setTimeStamp(0.5186207170014007);
    msg.setSource(25558U);
    msg.setSourceEntity(119U);
    msg.setDestination(13302U);
    msg.setDestinationEntity(222U);
    msg.id = 48U;
    msg.value = 0.19006490726687775;

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
    msg.setTimeStamp(0.6404989235901694);
    msg.setSource(56889U);
    msg.setSourceEntity(188U);
    msg.setDestination(22844U);
    msg.setDestinationEntity(136U);
    msg.id = 219U;
    msg.value = 0.7683515029064704;

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
    msg.setTimeStamp(0.47316474650985263);
    msg.setSource(19141U);
    msg.setSourceEntity(143U);
    msg.setDestination(64197U);
    msg.setDestinationEntity(193U);
    msg.id = 9U;
    msg.value = 0.419645938587931;

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
    msg.setTimeStamp(0.7048084801769824);
    msg.setSource(39528U);
    msg.setSourceEntity(16U);
    msg.setDestination(19536U);
    msg.setDestinationEntity(130U);
    msg.x = 0.5942702288773417;
    msg.y = 0.16209841936358915;
    msg.z = 0.35135371266309134;
    msg.phi = 0.7140842273493628;
    msg.theta = 0.9410621838639334;
    msg.psi = 0.6564228465847928;

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
    msg.setTimeStamp(0.1744979114324643);
    msg.setSource(12913U);
    msg.setSourceEntity(57U);
    msg.setDestination(29476U);
    msg.setDestinationEntity(146U);
    msg.x = 0.1477191181939821;
    msg.y = 0.7432752192271825;
    msg.z = 0.137667539847807;
    msg.phi = 0.8124645972015939;
    msg.theta = 0.8378521637056264;
    msg.psi = 0.2672403950920933;

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
    msg.setTimeStamp(0.8400480788541833);
    msg.setSource(22563U);
    msg.setSourceEntity(108U);
    msg.setDestination(1963U);
    msg.setDestinationEntity(150U);
    msg.x = 0.014364005465143714;
    msg.y = 0.2974066282715775;
    msg.z = 0.7743764748809722;
    msg.phi = 0.422953679302855;
    msg.theta = 0.25541005317797727;
    msg.psi = 0.6125255026879785;

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
    msg.setTimeStamp(0.7948373359538954);
    msg.setSource(27645U);
    msg.setSourceEntity(40U);
    msg.setDestination(49530U);
    msg.setDestinationEntity(107U);
    msg.beam_width = 0.8891972058881609;
    msg.beam_height = 0.5063767003155292;

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
    msg.setTimeStamp(0.13121141340801223);
    msg.setSource(16587U);
    msg.setSourceEntity(145U);
    msg.setDestination(35181U);
    msg.setDestinationEntity(183U);
    msg.beam_width = 0.16146070626977105;
    msg.beam_height = 0.497637362615976;

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
    msg.setTimeStamp(0.15548848706171947);
    msg.setSource(12628U);
    msg.setSourceEntity(27U);
    msg.setDestination(7411U);
    msg.setDestinationEntity(29U);
    msg.beam_width = 0.5097398035071803;
    msg.beam_height = 0.7377489822706974;

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
    msg.setTimeStamp(0.5037520251833515);
    msg.setSource(64732U);
    msg.setSourceEntity(243U);
    msg.setDestination(57714U);
    msg.setDestinationEntity(49U);
    msg.sane = 121U;

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
    msg.setTimeStamp(0.35790250038320137);
    msg.setSource(48097U);
    msg.setSourceEntity(76U);
    msg.setDestination(45615U);
    msg.setDestinationEntity(147U);
    msg.sane = 105U;

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
    msg.setTimeStamp(0.980824641498306);
    msg.setSource(63347U);
    msg.setSourceEntity(166U);
    msg.setDestination(20254U);
    msg.setDestinationEntity(30U);
    msg.sane = 73U;

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
    msg.setTimeStamp(0.2154831676909139);
    msg.setSource(55347U);
    msg.setSourceEntity(247U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(1U);
    msg.value = 0.4781103944784446;

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
    msg.setTimeStamp(0.4309348079076021);
    msg.setSource(63515U);
    msg.setSourceEntity(94U);
    msg.setDestination(58980U);
    msg.setDestinationEntity(154U);
    msg.value = 0.27138771798926287;

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
    msg.setTimeStamp(0.14561501670122812);
    msg.setSource(7045U);
    msg.setSourceEntity(208U);
    msg.setDestination(65007U);
    msg.setDestinationEntity(160U);
    msg.value = 0.965613341426049;

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
    msg.setTimeStamp(0.6613108259631502);
    msg.setSource(22968U);
    msg.setSourceEntity(133U);
    msg.setDestination(6285U);
    msg.setDestinationEntity(52U);
    msg.value = 0.34969846010338024;

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
    msg.setTimeStamp(0.15412190741954412);
    msg.setSource(40912U);
    msg.setSourceEntity(97U);
    msg.setDestination(59859U);
    msg.setDestinationEntity(41U);
    msg.value = 0.19944372953660627;

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
    msg.setTimeStamp(0.4989455869580349);
    msg.setSource(2575U);
    msg.setSourceEntity(161U);
    msg.setDestination(62836U);
    msg.setDestinationEntity(217U);
    msg.value = 0.4112613446196288;

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
    msg.setTimeStamp(0.7229542390876595);
    msg.setSource(44975U);
    msg.setSourceEntity(126U);
    msg.setDestination(63899U);
    msg.setDestinationEntity(101U);
    msg.value = 0.7369693761397407;

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
    msg.setTimeStamp(0.5569670200495155);
    msg.setSource(15186U);
    msg.setSourceEntity(102U);
    msg.setDestination(54235U);
    msg.setDestinationEntity(158U);
    msg.value = 0.3035054212835744;

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
    msg.setTimeStamp(0.5155601619837559);
    msg.setSource(65421U);
    msg.setSourceEntity(34U);
    msg.setDestination(3834U);
    msg.setDestinationEntity(230U);
    msg.value = 0.4265765297626193;

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
    msg.setTimeStamp(0.3125060980427341);
    msg.setSource(43498U);
    msg.setSourceEntity(62U);
    msg.setDestination(31275U);
    msg.setDestinationEntity(229U);
    msg.value = 0.976689477677179;

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
    msg.setTimeStamp(0.8513552024267211);
    msg.setSource(17278U);
    msg.setSourceEntity(204U);
    msg.setDestination(41457U);
    msg.setDestinationEntity(78U);
    msg.value = 0.18105021904418073;

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
    msg.setTimeStamp(0.5175434931886946);
    msg.setSource(45888U);
    msg.setSourceEntity(77U);
    msg.setDestination(61074U);
    msg.setDestinationEntity(77U);
    msg.value = 0.08640060374781189;

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
    msg.setTimeStamp(0.4516785128632753);
    msg.setSource(41677U);
    msg.setSourceEntity(130U);
    msg.setDestination(33448U);
    msg.setDestinationEntity(5U);
    msg.value = 0.08909662630564752;

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
    msg.setTimeStamp(0.1835889039838695);
    msg.setSource(31159U);
    msg.setSourceEntity(120U);
    msg.setDestination(60102U);
    msg.setDestinationEntity(39U);
    msg.value = 0.62933933457538;

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
    msg.setTimeStamp(0.44328171866218447);
    msg.setSource(44403U);
    msg.setSourceEntity(212U);
    msg.setDestination(61736U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5463479867177721;

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
    msg.setTimeStamp(0.9505330501541568);
    msg.setSource(6149U);
    msg.setSourceEntity(23U);
    msg.setDestination(15222U);
    msg.setDestinationEntity(150U);
    msg.value = 0.040043002371218384;

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
    msg.setTimeStamp(0.5078987847131166);
    msg.setSource(23052U);
    msg.setSourceEntity(180U);
    msg.setDestination(18700U);
    msg.setDestinationEntity(19U);
    msg.value = 0.034872425738303736;

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
    msg.setTimeStamp(0.7411506471179425);
    msg.setSource(22818U);
    msg.setSourceEntity(138U);
    msg.setDestination(14102U);
    msg.setDestinationEntity(254U);
    msg.value = 0.3996775274733374;

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
    msg.setTimeStamp(0.26512146708767725);
    msg.setSource(64887U);
    msg.setSourceEntity(238U);
    msg.setDestination(12759U);
    msg.setDestinationEntity(251U);
    msg.value = 0.8874370210456213;

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
    msg.setTimeStamp(0.40688020086295573);
    msg.setSource(20377U);
    msg.setSourceEntity(203U);
    msg.setDestination(21775U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8473905712398778;

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
    msg.setTimeStamp(0.49349204153779036);
    msg.setSource(22163U);
    msg.setSourceEntity(128U);
    msg.setDestination(8564U);
    msg.setDestinationEntity(79U);
    msg.value = 0.03165603076024903;

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
    msg.setTimeStamp(0.2842900855040661);
    msg.setSource(60393U);
    msg.setSourceEntity(95U);
    msg.setDestination(10413U);
    msg.setDestinationEntity(60U);
    msg.value = 0.5656110715335003;

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
    msg.setTimeStamp(0.5643105176275229);
    msg.setSource(22077U);
    msg.setSourceEntity(221U);
    msg.setDestination(61877U);
    msg.setDestinationEntity(36U);
    msg.value = 0.15647575299152394;

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
    msg.setTimeStamp(0.7285068570761383);
    msg.setSource(21790U);
    msg.setSourceEntity(18U);
    msg.setDestination(5840U);
    msg.setDestinationEntity(188U);
    msg.value = 0.8621747767678807;

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
    msg.setTimeStamp(0.1201242103580934);
    msg.setSource(14946U);
    msg.setSourceEntity(29U);
    msg.setDestination(2119U);
    msg.setDestinationEntity(49U);
    msg.validity = 61555U;
    msg.type = 245U;
    msg.tow = 849098628U;
    msg.base_lat = 0.5637677816013889;
    msg.base_lon = 0.23529758028614012;
    msg.base_height = 0.11219698725204164;
    msg.n = 0.5711053801277755;
    msg.e = 0.2391771873428944;
    msg.d = 0.07448907359659551;
    msg.v_n = 0.33438960592766487;
    msg.v_e = 0.21640947140606848;
    msg.v_d = 0.49537992526309493;
    msg.satellites = 216U;
    msg.iar_hyp = 25531U;
    msg.iar_ratio = 0.9742409024049717;

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
    msg.setTimeStamp(0.9074953187424347);
    msg.setSource(55428U);
    msg.setSourceEntity(41U);
    msg.setDestination(39293U);
    msg.setDestinationEntity(135U);
    msg.validity = 3514U;
    msg.type = 125U;
    msg.tow = 3666193846U;
    msg.base_lat = 0.7730235288946119;
    msg.base_lon = 0.4723485807585792;
    msg.base_height = 0.10545565266353518;
    msg.n = 0.5963676380814719;
    msg.e = 0.3485701111342575;
    msg.d = 0.03554788913507223;
    msg.v_n = 0.08624255225353039;
    msg.v_e = 0.4985031461354551;
    msg.v_d = 0.03661802934981595;
    msg.satellites = 22U;
    msg.iar_hyp = 29927U;
    msg.iar_ratio = 0.10599082427880169;

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
    msg.setTimeStamp(0.5894821566374088);
    msg.setSource(48274U);
    msg.setSourceEntity(17U);
    msg.setDestination(54461U);
    msg.setDestinationEntity(21U);
    msg.validity = 63849U;
    msg.type = 247U;
    msg.tow = 3959255707U;
    msg.base_lat = 0.6483344128673264;
    msg.base_lon = 0.5976113752868476;
    msg.base_height = 0.9766555583916131;
    msg.n = 0.432162663211627;
    msg.e = 0.4044958297072888;
    msg.d = 0.10095640389502991;
    msg.v_n = 0.9902515195233416;
    msg.v_e = 0.7871704557046705;
    msg.v_d = 0.6298986140425485;
    msg.satellites = 224U;
    msg.iar_hyp = 1093U;
    msg.iar_ratio = 0.17169418574932838;

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
    msg.setTimeStamp(0.5515169382298534);
    msg.setSource(53156U);
    msg.setSourceEntity(138U);
    msg.setDestination(13257U);
    msg.setDestinationEntity(243U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.918768377529963;
    tmp_msg_0.lon = 0.9274954304143422;
    tmp_msg_0.height = 0.9110869977536021;
    tmp_msg_0.x = 0.06947105467495496;
    tmp_msg_0.y = 0.22266551017526592;
    tmp_msg_0.z = 0.8461326314546952;
    tmp_msg_0.phi = 0.4363715933330121;
    tmp_msg_0.theta = 0.8555124050246734;
    tmp_msg_0.psi = 0.15401680208086455;
    tmp_msg_0.u = 0.560006666468584;
    tmp_msg_0.v = 0.792816692118272;
    tmp_msg_0.w = 0.8672813057365242;
    tmp_msg_0.vx = 0.8369221161472262;
    tmp_msg_0.vy = 0.18362028383711526;
    tmp_msg_0.vz = 0.7782356938338187;
    tmp_msg_0.p = 0.3708014468943327;
    tmp_msg_0.q = 0.13338662178473193;
    tmp_msg_0.r = 0.9919013824363009;
    tmp_msg_0.depth = 0.20054221085652424;
    tmp_msg_0.alt = 0.16479845519582503;
    msg.state.set(tmp_msg_0);
    msg.type = 113U;

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
    msg.setTimeStamp(0.7299011191207753);
    msg.setSource(8097U);
    msg.setSourceEntity(57U);
    msg.setDestination(15391U);
    msg.setDestinationEntity(51U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.23107952448505586;
    tmp_msg_0.lon = 0.4527661046085344;
    tmp_msg_0.height = 0.6686242723286968;
    tmp_msg_0.x = 0.8065413056872816;
    tmp_msg_0.y = 0.3288020486518207;
    tmp_msg_0.z = 0.9533161300617816;
    tmp_msg_0.phi = 0.09891832233329845;
    tmp_msg_0.theta = 0.1548100736280148;
    tmp_msg_0.psi = 0.6937111012607333;
    tmp_msg_0.u = 0.6908888645300743;
    tmp_msg_0.v = 0.7866461794712076;
    tmp_msg_0.w = 0.06451043210988971;
    tmp_msg_0.vx = 0.9333137760136382;
    tmp_msg_0.vy = 0.4863879295185555;
    tmp_msg_0.vz = 0.43409231017463246;
    tmp_msg_0.p = 0.48711542497175886;
    tmp_msg_0.q = 0.8400303501697923;
    tmp_msg_0.r = 0.6816389822467342;
    tmp_msg_0.depth = 0.3104715112766079;
    tmp_msg_0.alt = 0.06834846598289368;
    msg.state.set(tmp_msg_0);
    msg.type = 22U;

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
    msg.setTimeStamp(0.11475972012588309);
    msg.setSource(30036U);
    msg.setSourceEntity(97U);
    msg.setDestination(18882U);
    msg.setDestinationEntity(110U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.021396864200833754;
    tmp_msg_0.lon = 0.12416862882427748;
    tmp_msg_0.height = 0.8023842418174661;
    tmp_msg_0.x = 0.7700932018586364;
    tmp_msg_0.y = 0.4627422423692459;
    tmp_msg_0.z = 0.06423980570112131;
    tmp_msg_0.phi = 0.022776251808120374;
    tmp_msg_0.theta = 0.00019122177024166742;
    tmp_msg_0.psi = 0.600848067092711;
    tmp_msg_0.u = 0.561755794963414;
    tmp_msg_0.v = 0.08241640471831668;
    tmp_msg_0.w = 0.003343140692926738;
    tmp_msg_0.vx = 0.9305429744048299;
    tmp_msg_0.vy = 0.6280504845211288;
    tmp_msg_0.vz = 0.17649116279595234;
    tmp_msg_0.p = 0.5386863746314863;
    tmp_msg_0.q = 0.1867900307766318;
    tmp_msg_0.r = 0.8295365723681354;
    tmp_msg_0.depth = 0.18289115141770151;
    tmp_msg_0.alt = 0.47176664102412647;
    msg.state.set(tmp_msg_0);
    msg.type = 166U;

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
    msg.setTimeStamp(0.5463846119831375);
    msg.setSource(64979U);
    msg.setSourceEntity(232U);
    msg.setDestination(10535U);
    msg.setDestinationEntity(201U);
    msg.value = 0.41984659823385395;

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
    msg.setTimeStamp(0.0212187691221859);
    msg.setSource(1071U);
    msg.setSourceEntity(110U);
    msg.setDestination(61326U);
    msg.setDestinationEntity(162U);
    msg.value = 0.6007447087330524;

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
    msg.setTimeStamp(0.5314011415755395);
    msg.setSource(11482U);
    msg.setSourceEntity(154U);
    msg.setDestination(31033U);
    msg.setDestinationEntity(111U);
    msg.value = 0.10438786886068918;

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
    msg.setTimeStamp(0.8324541854603938);
    msg.setSource(45592U);
    msg.setSourceEntity(96U);
    msg.setDestination(35892U);
    msg.setDestinationEntity(140U);
    msg.value = 0.11007446839813606;

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
    msg.setTimeStamp(0.7250334406558225);
    msg.setSource(64468U);
    msg.setSourceEntity(248U);
    msg.setDestination(39926U);
    msg.setDestinationEntity(149U);
    msg.value = 0.4240301081444444;

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
    msg.setTimeStamp(0.46777670134716864);
    msg.setSource(11673U);
    msg.setSourceEntity(136U);
    msg.setDestination(28346U);
    msg.setDestinationEntity(216U);
    msg.value = 0.7375323850105927;

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
    msg.setTimeStamp(0.6000087876354938);
    msg.setSource(22797U);
    msg.setSourceEntity(235U);
    msg.setDestination(21196U);
    msg.setDestinationEntity(197U);
    msg.value = 0.3897432079553048;

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
    msg.setTimeStamp(0.3820052873821479);
    msg.setSource(1921U);
    msg.setSourceEntity(246U);
    msg.setDestination(47507U);
    msg.setDestinationEntity(113U);
    msg.value = 0.5721006195680546;

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
    msg.setTimeStamp(0.2582220762416201);
    msg.setSource(16466U);
    msg.setSourceEntity(75U);
    msg.setDestination(57941U);
    msg.setDestinationEntity(144U);
    msg.value = 0.5237297402004324;

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
    msg.setTimeStamp(0.30870228746986483);
    msg.setSource(25901U);
    msg.setSourceEntity(186U);
    msg.setDestination(28630U);
    msg.setDestinationEntity(58U);
    msg.value = 0.7780431821719413;

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
    msg.setTimeStamp(0.32055634977805325);
    msg.setSource(40255U);
    msg.setSourceEntity(222U);
    msg.setDestination(14480U);
    msg.setDestinationEntity(12U);
    msg.value = 0.2620302283045457;

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
    msg.setTimeStamp(0.9748170163597752);
    msg.setSource(21677U);
    msg.setSourceEntity(250U);
    msg.setDestination(44546U);
    msg.setDestinationEntity(138U);
    msg.value = 0.44233192297378254;

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
    msg.setTimeStamp(0.26561177296548444);
    msg.setSource(36366U);
    msg.setSourceEntity(129U);
    msg.setDestination(26617U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0631081066342235;

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
    msg.setTimeStamp(0.16245209205540567);
    msg.setSource(7331U);
    msg.setSourceEntity(77U);
    msg.setDestination(58831U);
    msg.setDestinationEntity(176U);
    msg.value = 0.3795427610425194;

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
    msg.setTimeStamp(0.4136871726979108);
    msg.setSource(43578U);
    msg.setSourceEntity(224U);
    msg.setDestination(35790U);
    msg.setDestinationEntity(65U);
    msg.value = 0.16032153421139417;

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
    msg.setTimeStamp(0.6016154361724532);
    msg.setSource(64274U);
    msg.setSourceEntity(83U);
    msg.setDestination(46980U);
    msg.setDestinationEntity(28U);
    msg.id = 240U;
    msg.zoom = 186U;
    msg.action = 1U;

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
    msg.setTimeStamp(0.6917743035781654);
    msg.setSource(1938U);
    msg.setSourceEntity(13U);
    msg.setDestination(58647U);
    msg.setDestinationEntity(33U);
    msg.id = 252U;
    msg.zoom = 59U;
    msg.action = 102U;

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
    msg.setTimeStamp(0.9731333893461601);
    msg.setSource(21632U);
    msg.setSourceEntity(132U);
    msg.setDestination(6790U);
    msg.setDestinationEntity(119U);
    msg.id = 72U;
    msg.zoom = 174U;
    msg.action = 167U;

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
    msg.setTimeStamp(0.7266287580579974);
    msg.setSource(23560U);
    msg.setSourceEntity(231U);
    msg.setDestination(93U);
    msg.setDestinationEntity(11U);
    msg.id = 103U;
    msg.value = 0.8990900984913444;

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
    msg.setTimeStamp(0.730331512681126);
    msg.setSource(23090U);
    msg.setSourceEntity(110U);
    msg.setDestination(40619U);
    msg.setDestinationEntity(46U);
    msg.id = 104U;
    msg.value = 0.040799017269096405;

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
    msg.setTimeStamp(0.8048435982208015);
    msg.setSource(36981U);
    msg.setSourceEntity(186U);
    msg.setDestination(48870U);
    msg.setDestinationEntity(92U);
    msg.id = 226U;
    msg.value = 0.727937398516091;

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
    msg.setTimeStamp(0.26609744895628096);
    msg.setSource(9827U);
    msg.setSourceEntity(72U);
    msg.setDestination(60543U);
    msg.setDestinationEntity(17U);
    msg.id = 140U;
    msg.value = 0.48859757630144773;

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
    msg.setTimeStamp(0.14925882005859092);
    msg.setSource(54558U);
    msg.setSourceEntity(227U);
    msg.setDestination(60376U);
    msg.setDestinationEntity(212U);
    msg.id = 197U;
    msg.value = 0.10654811665230479;

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
    msg.setTimeStamp(0.9304060610870531);
    msg.setSource(20328U);
    msg.setSourceEntity(156U);
    msg.setDestination(7087U);
    msg.setDestinationEntity(13U);
    msg.id = 252U;
    msg.value = 0.3334497619916226;

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
    msg.setTimeStamp(0.576398052541132);
    msg.setSource(47482U);
    msg.setSourceEntity(137U);
    msg.setDestination(26416U);
    msg.setDestinationEntity(157U);
    msg.id = 46U;
    msg.angle = 0.781496480959719;

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
    msg.setTimeStamp(0.7760390522554182);
    msg.setSource(38112U);
    msg.setSourceEntity(250U);
    msg.setDestination(59991U);
    msg.setDestinationEntity(1U);
    msg.id = 87U;
    msg.angle = 0.1905852454177972;

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
    msg.setTimeStamp(0.10385604297336637);
    msg.setSource(38480U);
    msg.setSourceEntity(249U);
    msg.setDestination(64323U);
    msg.setDestinationEntity(174U);
    msg.id = 214U;
    msg.angle = 0.6159487906370019;

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
    msg.setTimeStamp(0.542691911766449);
    msg.setSource(6935U);
    msg.setSourceEntity(140U);
    msg.setDestination(23644U);
    msg.setDestinationEntity(137U);
    msg.op = 172U;
    msg.actions.assign("AYILBCBNQYLJSZUJNXYYXKCGUKWZTLNJWOKKCWDSDMAHRHIQFMCEGKMOMQOTNGKXGHLYNBEDCVVZTUTSELCEORPAFFQXTPWEYYNDOPFJRVZPFOFTZFHDMNIVCLRKS");

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
    msg.setTimeStamp(0.13543134551484648);
    msg.setSource(60578U);
    msg.setSourceEntity(35U);
    msg.setDestination(21646U);
    msg.setDestinationEntity(225U);
    msg.op = 251U;
    msg.actions.assign("STWPXHCCLUAFCDVVXNWHEPMSMIPXKJMMXTRYTJHWPEPZLAPZRBZYLSAWPWJBVGKEDNDFVYSUERFGHNAVHQUZWPDRZAELYQBCLKTAVIKWOSXVTGONDJUTLTAIWTYYWMXQSDFGEXOUGIXFQABNRXOZZKJRQMMZFESCGEDLOCJSSGLRYYGUCFJUMKHJJWDMBVNFBKPKLBIIBHBNQOYZDOEZHATDNAQQMCKBOIGKUFLIIOUPNGFHROVUTNQ");

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
    msg.setTimeStamp(0.0068676144667833006);
    msg.setSource(48335U);
    msg.setSourceEntity(247U);
    msg.setDestination(25587U);
    msg.setDestinationEntity(40U);
    msg.op = 236U;
    msg.actions.assign("MTAJXKTBOSCEGWDYXQULWYUGYJRQLIEQVDCZYJLXAEWJPLABU");

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
    msg.setTimeStamp(0.914326105143724);
    msg.setSource(60825U);
    msg.setSourceEntity(179U);
    msg.setDestination(16003U);
    msg.setDestinationEntity(151U);
    msg.actions.assign("SYKIGVEBXEJRFFZBDTURZWNPUAKYJVQUJCEWUPHRYRGEBMZIVBULPNJDARQGBSHJEOCECIVFQPEBSVGFZSBQWVMMZGPXCAOHEMPQDUKTDQHLYKIXKQCGFFQNU");

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
    msg.setTimeStamp(0.008377981015663338);
    msg.setSource(40000U);
    msg.setSourceEntity(152U);
    msg.setDestination(9941U);
    msg.setDestinationEntity(238U);
    msg.actions.assign("BQVNEZRORLTMSWKCVQSMJXWXBZTVDPISCFT");

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
    msg.setTimeStamp(0.9581124179106689);
    msg.setSource(60128U);
    msg.setSourceEntity(124U);
    msg.setDestination(57043U);
    msg.setDestinationEntity(21U);
    msg.actions.assign("NNLSPQYAQWGEBBQXWJVRBGVRDTUDJNFTJHOJXWHLMSZPXBCBXNHDKBXLSWUGXGFIVKWIVZBWTAOMVUFHHLMZFCFZHYWQEPYFLGCXNROPFIDEWDIWHYHIVMAGALSPGTOSYQQKAMNNMOUPKPZGOUQLRCRKSVAOZMQNMJERCTEYDKDCOCXIUKCQKUSAUJITS");

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
    msg.setTimeStamp(0.761852317412823);
    msg.setSource(28993U);
    msg.setSourceEntity(150U);
    msg.setDestination(42906U);
    msg.setDestinationEntity(102U);
    msg.button = 82U;
    msg.value = 80U;

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
    msg.setTimeStamp(0.5735873404622562);
    msg.setSource(37507U);
    msg.setSourceEntity(95U);
    msg.setDestination(45817U);
    msg.setDestinationEntity(208U);
    msg.button = 202U;
    msg.value = 237U;

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
    msg.setTimeStamp(0.05070642148153681);
    msg.setSource(38372U);
    msg.setSourceEntity(34U);
    msg.setDestination(56556U);
    msg.setDestinationEntity(116U);
    msg.button = 65U;
    msg.value = 17U;

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
    msg.setTimeStamp(0.23191731288467476);
    msg.setSource(32248U);
    msg.setSourceEntity(6U);
    msg.setDestination(24459U);
    msg.setDestinationEntity(142U);
    msg.op = 245U;
    msg.text.assign("FIMNWIRWXZPRCRWMIDNIQOYBJVGJZPUGLFEHCXVCSOACEHBGPFZYJZBXSAQUCXOTZQGVOAFPRUCXNVJAHSLFIIRCHMVKJJTOIMPGOBGNFVSYZTDPMBDDHPDBRHLQXDKDLESUTRANXMSDMITLBRGMQVSYIKFGYTZYWLDQKKEYHUAFOOVLJNLNMGZSAVUZCEOXBIWQFPJGJKQWNTCKQKAPETBSHXWLMKRECUYOAKEUXAREZQ");

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
    msg.setTimeStamp(0.7555393834343388);
    msg.setSource(38924U);
    msg.setSourceEntity(9U);
    msg.setDestination(26668U);
    msg.setDestinationEntity(160U);
    msg.op = 92U;
    msg.text.assign("RMGHLMNIQMFJOBDPYGFMNXJQRSLQNXKPFKMCEAYMYKUJHKQAGSOAXQWVZOCMEVSGKLYPIWSRKWPCNBUKFZFZJLUVYYRZWEZSIRTUTNLWRROIEFUOWSWFKVGPCXJUTQQUFSJHVAVSPBZICZJBRMDAWAXXLUBLCMXWNDTTFCXEAKCGTEHBLXTGLRNVWSNDPVBBEIPDHZEQUTNIJJIMDYZRAODPEUXBOFYCIHG");

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
    msg.setTimeStamp(0.7626313571631519);
    msg.setSource(4086U);
    msg.setSourceEntity(56U);
    msg.setDestination(58062U);
    msg.setDestinationEntity(241U);
    msg.op = 50U;
    msg.text.assign("SCIACJZPBK");

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
    msg.setTimeStamp(0.006509284512484337);
    msg.setSource(59291U);
    msg.setSourceEntity(228U);
    msg.setDestination(65350U);
    msg.setDestinationEntity(38U);
    msg.op = 176U;
    msg.time_remain = 0.5527778943135695;
    msg.sched_time = 0.5655171491753633;

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
    msg.setTimeStamp(0.8333867800564482);
    msg.setSource(1770U);
    msg.setSourceEntity(137U);
    msg.setDestination(15278U);
    msg.setDestinationEntity(212U);
    msg.op = 80U;
    msg.time_remain = 0.8140074036127284;
    msg.sched_time = 0.7356098356984099;

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
    msg.setTimeStamp(0.03268198862237581);
    msg.setSource(63947U);
    msg.setSourceEntity(155U);
    msg.setDestination(55556U);
    msg.setDestinationEntity(3U);
    msg.op = 166U;
    msg.time_remain = 0.8038518874119247;
    msg.sched_time = 0.15922086252292855;

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
    msg.setTimeStamp(0.19754008963720726);
    msg.setSource(12264U);
    msg.setSourceEntity(139U);
    msg.setDestination(7434U);
    msg.setDestinationEntity(94U);
    msg.name.assign("HWWEVSLCZOSAMCFWDIELNVZFGHTFOWIWUTIQQ");
    msg.op = 184U;
    msg.sched_time = 0.8631995319422833;

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
    msg.setTimeStamp(0.5228765152325693);
    msg.setSource(4150U);
    msg.setSourceEntity(178U);
    msg.setDestination(35794U);
    msg.setDestinationEntity(18U);
    msg.name.assign("LSUAYTQYJJLWCLTIJAENHCSRUINBCOPRRVKMITSMFXWJGQPUOXGFDLZMEZVGMBYPOHKWYMCWTIPBOXHKOIYFHVMSCPJKXMGKVDEXJOPYKLRXGTIVFGCLKKXLJATBICWZAZMNELNUUYNSJEESLIQFZHFNPNVLPEQGZVUWCQFAZDDROSGHHAWMNCOPINBBEUWYQXKHJWUVCODDBXSQWMGHSBFYJDDAEBQRVUARQKFHZOTDPRZRERIVTBYXD");
    msg.op = 137U;
    msg.sched_time = 0.7335202660569076;

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
    msg.setTimeStamp(0.4604045729952424);
    msg.setSource(47443U);
    msg.setSourceEntity(48U);
    msg.setDestination(30010U);
    msg.setDestinationEntity(196U);
    msg.name.assign("POTGANLZWLAQYKKUZBC");
    msg.op = 235U;
    msg.sched_time = 0.709752932009296;

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
    msg.setTimeStamp(0.7868706987964548);
    msg.setSource(3551U);
    msg.setSourceEntity(118U);
    msg.setDestination(34695U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.28929041540451306);
    msg.setSource(47367U);
    msg.setSourceEntity(9U);
    msg.setDestination(14550U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.20839117430661291);
    msg.setSource(17153U);
    msg.setSourceEntity(137U);
    msg.setDestination(37788U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.9349524557021651);
    msg.setSource(18045U);
    msg.setSourceEntity(13U);
    msg.setDestination(17228U);
    msg.setDestinationEntity(31U);
    msg.name.assign("JXUIAETVANOAZESISXYWEQUNXXVTCXDKWQRANYC");
    msg.state = 139U;

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
    msg.setTimeStamp(0.3427695809407586);
    msg.setSource(49786U);
    msg.setSourceEntity(213U);
    msg.setDestination(42898U);
    msg.setDestinationEntity(235U);
    msg.name.assign("SEBBDUYLSRIKKBAUVPVJAFUMQZNYVDLAQOCVHMVVZDNWVJFTXAJPIUHKZLSHQLFEENWTXAQYCSCCPXCZOMDUKWXRDGZVMWVUORYNXBNSTPGFQSUFQKFACVPKHLNYWIXEQANOOJJSYXKZWIJOGBLMJIOZQOCMYEPHDWFTMTLOFPYDUTBGEXLSYRZIUEIATSMRGRFGRNRZHNIHGHGWMU");
    msg.state = 181U;

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
    msg.setTimeStamp(0.6084710487283946);
    msg.setSource(4105U);
    msg.setSourceEntity(84U);
    msg.setDestination(28584U);
    msg.setDestinationEntity(249U);
    msg.name.assign("MVRDJNEUCPXOXZXLVKZOMKJQJOQZYEJOFEFLTRTBEZTUMNMPHLEFVMAVTUUBBCDXZKWXCHCCSCKRSHEQHPDACPAYXNFSRAGDVQHICWODPNBTIHIPQK");
    msg.state = 248U;

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
    msg.setTimeStamp(0.10482691629580776);
    msg.setSource(22330U);
    msg.setSourceEntity(159U);
    msg.setDestination(9446U);
    msg.setDestinationEntity(112U);
    msg.name.assign("RPHTWQAKUKECDEGQJQYSXVGSJTGRNTZOZDQXIIQJJCNGQDLIJKWEFAMVCVYGUXOOLXSFSXGTCOHDYYBPIN");
    msg.value = 79U;

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
    msg.setTimeStamp(0.227499198704606);
    msg.setSource(56153U);
    msg.setSourceEntity(252U);
    msg.setDestination(28564U);
    msg.setDestinationEntity(187U);
    msg.name.assign("AAHVXDDFSQETWAYKUVOTUOMRGMSBUXIPGTNOYOQCBPJMHGJMVLDPFZWUSQZNWCRBOGGMLTXPAIXLHKGUHRCHLOMVEPTEZQESY");
    msg.value = 90U;

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
    msg.setTimeStamp(0.9774778532928216);
    msg.setSource(30527U);
    msg.setSourceEntity(141U);
    msg.setDestination(58193U);
    msg.setDestinationEntity(103U);
    msg.name.assign("MDWHEWTEMQCCUWYXTDNORUSLPYGROVBQLQOFLNWPOQRBFZPEQTCUIIILJXTVQITNNEOXSAAVDJKPNUWFJTJKSMUZSNRPRWYXMWXKTLHSOPHNMLXPAAMODQRNCVGJTSRXYZDGVIGAWKWZJVDEKIJGBSIZHJVKCLTEOKFGBLSNHYDPFHMXKBYGZIMSUIQFKDTMVOZJDGYJOCUZC");
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
    msg.setTimeStamp(0.7760647588759617);
    msg.setSource(252U);
    msg.setSourceEntity(133U);
    msg.setDestination(29777U);
    msg.setDestinationEntity(159U);
    msg.name.assign("WTEGYTXBPBCQVQDJDKPVIEVUWTDHDSBZZPLIEWQXSRCFXCOQFMUYZXHRRLDFUUHJUSEFUAFYAPMASERCHJMEBGOUTGTKAIOABZQOKJQKLCTYWWSHZHLBQRAOIMSTUHMOLSRNLDYPDMHQROLNHLXOMPCYKTLVYNDELMPBNIXVZSBRWYIOFVNJYZGKGHPVEJAYQGCCNZTQGEJMTWIBWRFNPFXKGVV");

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
    msg.setTimeStamp(0.6559740644378037);
    msg.setSource(54190U);
    msg.setSourceEntity(172U);
    msg.setDestination(61454U);
    msg.setDestinationEntity(196U);
    msg.name.assign("ZTDHVKCVBEMUNEZPDKMIVUFSFVLCPYPXDUGLYCTRGZVHSDAXHRSVROBTYBAGWWRFACHMPOOILEXXBGVJWJQLRJQELNNVUKQWGVMRLCOGUDZUNADQIGDQYHNIQBXJCMPKLYOLEAYBTWIEDIKIWOVGQTMTMBPJRIPTJMHLCURWAAZZFRNCHMFZIWJTPYUXGODSSAQKEXCRYSBCEFNKOEBHLAFOZKPJZQSTYYQJPTXFWSSFUFWGA");

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
    msg.setTimeStamp(0.6927967666049933);
    msg.setSource(42616U);
    msg.setSourceEntity(68U);
    msg.setDestination(27007U);
    msg.setDestinationEntity(185U);
    msg.name.assign("XSDVLMPZZBKKAMBJEUMGKTNHKPKCFPFJVAF");

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
    msg.setTimeStamp(0.45550196077394534);
    msg.setSource(59452U);
    msg.setSourceEntity(180U);
    msg.setDestination(57651U);
    msg.setDestinationEntity(170U);
    msg.name.assign("SGSKPGWMRKRWXPPJENZTQQIYVRTHOHMFDGFUDQXJYIZIIIPIEJAAQKNSYBHOGNDYTFSQNRU");
    msg.value = 206U;

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
    msg.setTimeStamp(0.47265203170413406);
    msg.setSource(32707U);
    msg.setSourceEntity(240U);
    msg.setDestination(30763U);
    msg.setDestinationEntity(35U);
    msg.name.assign("CNVOSYBXAQXFIPATZYJGIFQSNSULBELAGMBCGXREOFPEEHWRYWEUWDJTADMDLZNHBZXOPNBUGIPBQGZXAHIFCWTGXKASDZURPIKHYEPRRKGORPUYYEPJZBDKMNVVJVVBNQNOECABTBXOEOGTOWIIZXMHCSDWFZQFRAOFMUTGNUVOMXILQTVTVHJMKQMYKRLUSKKVUNUCJQ");
    msg.value = 240U;

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
    msg.setTimeStamp(0.6709380212225016);
    msg.setSource(13490U);
    msg.setSourceEntity(106U);
    msg.setDestination(56192U);
    msg.setDestinationEntity(130U);
    msg.name.assign("FLRWTCESEJGNWTOCWMGFRIZXLYEVPHFGAXZEJMXMHZQUQOYHVHDQXRBTTHDLFBYAKHPJXWSSZAUQMBWIOSPQETXJDHKQFADNFNQEIOZJLJVWOXFVAPXHVAESPYKDGMNWKUUVBICNUQMGTMFGCOWSSHNZCAZTPYLZMQURIIPLIPKCCKYJDRWGYSINVEUWARVKUZVRRKLKBOCYNFGRXEJADHGPBCIOMITBQEJFAJKUTY");
    msg.value = 95U;

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
    msg.setTimeStamp(0.9469257287617096);
    msg.setSource(27239U);
    msg.setSourceEntity(96U);
    msg.setDestination(61960U);
    msg.setDestinationEntity(166U);
    msg.id = 8U;
    msg.period = 2041027757U;
    msg.duty_cycle = 2450182214U;

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
    msg.setTimeStamp(0.5163809410485571);
    msg.setSource(50891U);
    msg.setSourceEntity(173U);
    msg.setDestination(13854U);
    msg.setDestinationEntity(36U);
    msg.id = 129U;
    msg.period = 330868635U;
    msg.duty_cycle = 1268881579U;

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
    msg.setTimeStamp(0.10559056491578722);
    msg.setSource(11287U);
    msg.setSourceEntity(245U);
    msg.setDestination(31151U);
    msg.setDestinationEntity(94U);
    msg.id = 153U;
    msg.period = 3091329198U;
    msg.duty_cycle = 605975005U;

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
    msg.setTimeStamp(0.612882604408634);
    msg.setSource(42744U);
    msg.setSourceEntity(228U);
    msg.setDestination(60652U);
    msg.setDestinationEntity(113U);
    msg.id = 151U;
    msg.period = 1077906896U;
    msg.duty_cycle = 2842230324U;

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
    msg.setTimeStamp(0.019420781595115177);
    msg.setSource(12240U);
    msg.setSourceEntity(206U);
    msg.setDestination(63108U);
    msg.setDestinationEntity(197U);
    msg.id = 246U;
    msg.period = 3546906997U;
    msg.duty_cycle = 3250032216U;

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
    msg.setTimeStamp(0.44200104797618);
    msg.setSource(52837U);
    msg.setSourceEntity(13U);
    msg.setDestination(36837U);
    msg.setDestinationEntity(235U);
    msg.id = 61U;
    msg.period = 1693687348U;
    msg.duty_cycle = 1357559972U;

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
    msg.setTimeStamp(0.20490670219054308);
    msg.setSource(12258U);
    msg.setSourceEntity(127U);
    msg.setDestination(41935U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.451301529209006;
    msg.lon = 0.0938118418968088;
    msg.height = 0.3780868866861081;
    msg.x = 0.8764951085463821;
    msg.y = 0.9616938184607311;
    msg.z = 0.719485036369619;
    msg.phi = 0.32901170627886445;
    msg.theta = 0.6723550905890491;
    msg.psi = 0.13458836282403874;
    msg.u = 0.9646942694721459;
    msg.v = 0.043926278898826276;
    msg.w = 0.7989767329652872;
    msg.vx = 0.6200388320103707;
    msg.vy = 0.9958488956399292;
    msg.vz = 0.06489691327092462;
    msg.p = 0.6047678431182819;
    msg.q = 0.008300450078466248;
    msg.r = 0.16102293079579866;
    msg.depth = 0.8971389312127945;
    msg.alt = 0.7174708436691771;

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
    msg.setTimeStamp(0.9179387879332992);
    msg.setSource(44767U);
    msg.setSourceEntity(247U);
    msg.setDestination(50287U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.3943897941882478;
    msg.lon = 0.07090947203121645;
    msg.height = 0.5836592316935847;
    msg.x = 0.0435896907335146;
    msg.y = 0.14811844866182478;
    msg.z = 0.6179303307909952;
    msg.phi = 0.41514087030938474;
    msg.theta = 0.41360284209255616;
    msg.psi = 0.6945982314319769;
    msg.u = 0.8729184119480444;
    msg.v = 0.39888471862088504;
    msg.w = 0.12171205889280479;
    msg.vx = 0.42600964383965634;
    msg.vy = 0.08438638277762;
    msg.vz = 0.7421430157884285;
    msg.p = 0.2806140588077385;
    msg.q = 0.461056312576261;
    msg.r = 0.26648938525268384;
    msg.depth = 0.6191989497713414;
    msg.alt = 0.3458849633282143;

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
    msg.setTimeStamp(0.5260694271239784);
    msg.setSource(19005U);
    msg.setSourceEntity(136U);
    msg.setDestination(13097U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.3989837551056089;
    msg.lon = 0.23485880155803007;
    msg.height = 0.0217991059215773;
    msg.x = 0.8272128447516237;
    msg.y = 0.20056328383579358;
    msg.z = 0.010217828157865427;
    msg.phi = 0.8926402070771456;
    msg.theta = 0.23671819896500224;
    msg.psi = 0.27605787876625265;
    msg.u = 0.49689114058266903;
    msg.v = 0.6000073216896477;
    msg.w = 0.05614205741702849;
    msg.vx = 0.5370632020236722;
    msg.vy = 0.7982025077243314;
    msg.vz = 0.8420015067528677;
    msg.p = 0.7478759034186577;
    msg.q = 0.11919854876968217;
    msg.r = 0.0320399589304442;
    msg.depth = 0.8021666167934716;
    msg.alt = 0.05885127368025855;

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
    msg.setTimeStamp(0.36842819237371716);
    msg.setSource(50148U);
    msg.setSourceEntity(208U);
    msg.setDestination(58174U);
    msg.setDestinationEntity(124U);
    msg.x = 0.7268198145809263;
    msg.y = 0.6554199446882636;
    msg.z = 0.5374378032948555;

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
    msg.setTimeStamp(0.7650833133466073);
    msg.setSource(41560U);
    msg.setSourceEntity(6U);
    msg.setDestination(51007U);
    msg.setDestinationEntity(153U);
    msg.x = 0.6860314091969404;
    msg.y = 0.08845109304646992;
    msg.z = 0.5647383237601767;

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
    msg.setTimeStamp(0.07744630967269184);
    msg.setSource(20827U);
    msg.setSourceEntity(47U);
    msg.setDestination(16735U);
    msg.setDestinationEntity(226U);
    msg.x = 0.031400383709561996;
    msg.y = 0.33485789497270446;
    msg.z = 0.9377850132100216;

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
    msg.setTimeStamp(0.664215722347463);
    msg.setSource(32368U);
    msg.setSourceEntity(115U);
    msg.setDestination(57335U);
    msg.setDestinationEntity(111U);
    msg.value = 0.9547913053341649;

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
    msg.setTimeStamp(0.7274846293152001);
    msg.setSource(24831U);
    msg.setSourceEntity(5U);
    msg.setDestination(51069U);
    msg.setDestinationEntity(97U);
    msg.value = 0.9666122518332829;

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
    msg.setTimeStamp(0.6942666979496712);
    msg.setSource(57869U);
    msg.setSourceEntity(173U);
    msg.setDestination(21163U);
    msg.setDestinationEntity(179U);
    msg.value = 0.6099445097569947;

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
    msg.setTimeStamp(0.8227526084644815);
    msg.setSource(10092U);
    msg.setSourceEntity(41U);
    msg.setDestination(25048U);
    msg.setDestinationEntity(252U);
    msg.value = 0.5472856007133221;

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
    msg.setTimeStamp(0.8756414176901673);
    msg.setSource(22777U);
    msg.setSourceEntity(245U);
    msg.setDestination(29521U);
    msg.setDestinationEntity(172U);
    msg.value = 0.2274077432699888;

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
    msg.setTimeStamp(0.4706410360666825);
    msg.setSource(7960U);
    msg.setSourceEntity(110U);
    msg.setDestination(25611U);
    msg.setDestinationEntity(181U);
    msg.value = 0.010628848287611792;

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
    msg.setTimeStamp(0.10837686563952631);
    msg.setSource(53591U);
    msg.setSourceEntity(114U);
    msg.setDestination(18246U);
    msg.setDestinationEntity(200U);
    msg.x = 0.1610776962597219;
    msg.y = 0.8453490083777921;
    msg.z = 0.8404329215318187;
    msg.phi = 0.5567195968288873;
    msg.theta = 0.2241651782218802;
    msg.psi = 0.478428396693225;
    msg.p = 0.06494512164360855;
    msg.q = 0.12540921415629513;
    msg.r = 0.4139282028671303;
    msg.u = 0.735165354701744;
    msg.v = 0.06225059605155414;
    msg.w = 0.8757339763085823;
    msg.bias_psi = 0.46851016013812086;
    msg.bias_r = 0.4075720249496434;

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
    msg.setTimeStamp(0.24799336989773146);
    msg.setSource(6934U);
    msg.setSourceEntity(150U);
    msg.setDestination(25483U);
    msg.setDestinationEntity(119U);
    msg.x = 0.6768548171502733;
    msg.y = 0.932029226824279;
    msg.z = 0.5299791760292862;
    msg.phi = 0.8810622943400624;
    msg.theta = 0.1553914250972167;
    msg.psi = 0.32525083673971644;
    msg.p = 0.032753021283954076;
    msg.q = 0.2788993255642007;
    msg.r = 0.2518153992466855;
    msg.u = 0.24955430634416276;
    msg.v = 0.3649383806518097;
    msg.w = 0.2832595572459822;
    msg.bias_psi = 0.6559284864042412;
    msg.bias_r = 0.3138469510654325;

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
    msg.setTimeStamp(0.5813980946007424);
    msg.setSource(44039U);
    msg.setSourceEntity(53U);
    msg.setDestination(27067U);
    msg.setDestinationEntity(43U);
    msg.x = 0.011792573765035397;
    msg.y = 0.8158049783964837;
    msg.z = 0.7748961529284562;
    msg.phi = 0.5059198734195158;
    msg.theta = 0.7034416148405677;
    msg.psi = 0.6058826372281536;
    msg.p = 0.7750342843557936;
    msg.q = 0.6746171118274689;
    msg.r = 0.15704664494283738;
    msg.u = 0.3083747132501652;
    msg.v = 0.2803348623867238;
    msg.w = 0.23594755398014577;
    msg.bias_psi = 0.10165920292736708;
    msg.bias_r = 0.3008455989522728;

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
    msg.setTimeStamp(0.16517485158529477);
    msg.setSource(49181U);
    msg.setSourceEntity(239U);
    msg.setDestination(24790U);
    msg.setDestinationEntity(2U);
    msg.bias_psi = 0.45865897022351;
    msg.bias_r = 0.019765904352460395;
    msg.cog = 0.5125663878158873;
    msg.cyaw = 0.7539406666423032;
    msg.lbl_rej_level = 0.09800725829619594;
    msg.gps_rej_level = 0.5703066588619983;
    msg.custom_x = 0.9425906304073298;
    msg.custom_y = 0.6339668702809543;
    msg.custom_z = 0.8913858065971009;

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
    msg.setTimeStamp(0.027487479500120537);
    msg.setSource(42212U);
    msg.setSourceEntity(154U);
    msg.setDestination(36447U);
    msg.setDestinationEntity(169U);
    msg.bias_psi = 0.3679705211726044;
    msg.bias_r = 0.022059696323724953;
    msg.cog = 0.6661199754808295;
    msg.cyaw = 0.2082816541443432;
    msg.lbl_rej_level = 0.9007522144500845;
    msg.gps_rej_level = 0.30856827144509136;
    msg.custom_x = 0.12354488352334514;
    msg.custom_y = 0.4661648524827392;
    msg.custom_z = 0.6648880916697693;

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
    msg.setTimeStamp(0.2357531338291763);
    msg.setSource(52086U);
    msg.setSourceEntity(129U);
    msg.setDestination(33689U);
    msg.setDestinationEntity(12U);
    msg.bias_psi = 0.6205473405969308;
    msg.bias_r = 0.5450792006693821;
    msg.cog = 0.049247457843812126;
    msg.cyaw = 0.15783954038000392;
    msg.lbl_rej_level = 0.680393192203403;
    msg.gps_rej_level = 0.7144754107055751;
    msg.custom_x = 0.7069269859602485;
    msg.custom_y = 0.6608898232573761;
    msg.custom_z = 0.49160534209140483;

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
    msg.setTimeStamp(0.33725164266942265);
    msg.setSource(55000U);
    msg.setSourceEntity(249U);
    msg.setDestination(20405U);
    msg.setDestinationEntity(210U);
    msg.utc_time = 0.5655749362996454;
    msg.reason = 168U;

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
    msg.setTimeStamp(0.8519476227716539);
    msg.setSource(32716U);
    msg.setSourceEntity(60U);
    msg.setDestination(62965U);
    msg.setDestinationEntity(75U);
    msg.utc_time = 0.6253138510537273;
    msg.reason = 73U;

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
    msg.setTimeStamp(0.5963434383222309);
    msg.setSource(57061U);
    msg.setSourceEntity(243U);
    msg.setDestination(15100U);
    msg.setDestinationEntity(124U);
    msg.utc_time = 0.01592222637267804;
    msg.reason = 101U;

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
    msg.setTimeStamp(0.6144843506982162);
    msg.setSource(47064U);
    msg.setSourceEntity(59U);
    msg.setDestination(2991U);
    msg.setDestinationEntity(171U);
    msg.id = 136U;
    msg.range = 0.9459756134230133;
    msg.acceptance = 46U;

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
    msg.setTimeStamp(0.351154181431675);
    msg.setSource(65177U);
    msg.setSourceEntity(52U);
    msg.setDestination(20222U);
    msg.setDestinationEntity(155U);
    msg.id = 90U;
    msg.range = 0.48781784435537145;
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
    msg.setTimeStamp(0.34926328488062486);
    msg.setSource(54273U);
    msg.setSourceEntity(168U);
    msg.setDestination(57856U);
    msg.setDestinationEntity(205U);
    msg.id = 204U;
    msg.range = 0.2524132756952633;
    msg.acceptance = 5U;

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
    msg.setTimeStamp(0.2787342611618415);
    msg.setSource(51181U);
    msg.setSourceEntity(209U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(236U);
    msg.type = 103U;
    msg.reason = 33U;
    msg.value = 0.7804119643350651;
    msg.timestep = 0.3872578302614569;

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
    msg.setTimeStamp(0.6579023281205355);
    msg.setSource(5341U);
    msg.setSourceEntity(27U);
    msg.setDestination(3304U);
    msg.setDestinationEntity(89U);
    msg.type = 156U;
    msg.reason = 10U;
    msg.value = 0.09055864157486904;
    msg.timestep = 0.6836368561354635;

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
    msg.setTimeStamp(0.5314116874554551);
    msg.setSource(25039U);
    msg.setSourceEntity(72U);
    msg.setDestination(6051U);
    msg.setDestinationEntity(37U);
    msg.type = 17U;
    msg.reason = 231U;
    msg.value = 0.6528533802090918;
    msg.timestep = 0.6654426456341701;

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
    msg.setTimeStamp(0.6875770160125675);
    msg.setSource(7676U);
    msg.setSourceEntity(188U);
    msg.setDestination(61024U);
    msg.setDestinationEntity(103U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UQBSYWNJKPKRQBFPBKRPQNYJJVPWRXPAOPQMDCAJOSTAGZDHSNNIYNAEJXCMZCAHRTUUVBAXDICBCLSPFLRMNSEJMRKFMBVZAMSEZKGIWYDHLOZIEGWQOXGQXYTJQMOWIJUEZQIBMVXUYFVCIPYCHNODKMEHIKCZGDUUUZEQOGRHPOTKXWXFDAFEMREWZFGYHYGTLSTZCBWVDDRTGDPTNNXOFWBJIAFXJLKGQCIAHKYLRVSOHWFTVBHLLLNE");
    tmp_msg_0.lat = 0.8370230043881048;
    tmp_msg_0.lon = 0.862925479203439;
    tmp_msg_0.depth = 0.8696798516304655;
    tmp_msg_0.query_channel = 236U;
    tmp_msg_0.reply_channel = 88U;
    tmp_msg_0.transponder_delay = 117U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.23029849861150598;
    msg.y = 0.5206151563996262;
    msg.var_x = 0.7941094943025581;
    msg.var_y = 0.40964722755309557;
    msg.distance = 0.19264398997602594;

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
    msg.setTimeStamp(0.6535378468343734);
    msg.setSource(4549U);
    msg.setSourceEntity(126U);
    msg.setDestination(27333U);
    msg.setDestinationEntity(220U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CCFJMKWVDOVEAYSZVXVLJZKOMNBWQNXYFDYRCTFFOLLMLRRBJB");
    tmp_msg_0.lat = 0.7256910790352488;
    tmp_msg_0.lon = 0.945538205469587;
    tmp_msg_0.depth = 0.6955496245541283;
    tmp_msg_0.query_channel = 52U;
    tmp_msg_0.reply_channel = 95U;
    tmp_msg_0.transponder_delay = 187U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.10848606087799073;
    msg.y = 0.03128600420783423;
    msg.var_x = 0.4956369044812424;
    msg.var_y = 0.22837356796666564;
    msg.distance = 0.8174863765895828;

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
    msg.setTimeStamp(0.7491885901602174);
    msg.setSource(19397U);
    msg.setSourceEntity(50U);
    msg.setDestination(57408U);
    msg.setDestinationEntity(165U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SGNIIVVWYJTOCEDKNBDCPRECXCMLWCZCAUFKIVVDLUQSSLPODJKAZNLHPSHEJJSVRGQJGUDBXPFYMKZMZRMZXWFXJRSTIUVMEPWCQNGEOOHSPYBKTIHOFYSXWFVTFHQCAUKUHMHMRRSYYQDNDALULZAQWUYHYNHQAQTRUGKPZBPWQJVGIYACBNTHAMKADXRIEEXJKBOBOOXOSYZIBNEDNZXIFOJMLRWGLB");
    tmp_msg_0.lat = 0.21447574975551043;
    tmp_msg_0.lon = 0.16949871831647134;
    tmp_msg_0.depth = 0.5528694868908279;
    tmp_msg_0.query_channel = 65U;
    tmp_msg_0.reply_channel = 82U;
    tmp_msg_0.transponder_delay = 145U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2635067685469238;
    msg.y = 0.87741918099465;
    msg.var_x = 0.8449233286886072;
    msg.var_y = 0.252265306075647;
    msg.distance = 0.2816275172249113;

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
    msg.setTimeStamp(0.2897005823521953);
    msg.setSource(21134U);
    msg.setSourceEntity(214U);
    msg.setDestination(31494U);
    msg.setDestinationEntity(64U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.6142127793477274);
    msg.setSource(10032U);
    msg.setSourceEntity(133U);
    msg.setDestination(7299U);
    msg.setDestinationEntity(9U);
    msg.state = 162U;

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
    msg.setTimeStamp(0.3402342861257047);
    msg.setSource(42862U);
    msg.setSourceEntity(7U);
    msg.setDestination(65354U);
    msg.setDestinationEntity(18U);
    msg.state = 170U;

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
    msg.setTimeStamp(0.5739304615809754);
    msg.setSource(61076U);
    msg.setSourceEntity(79U);
    msg.setDestination(25163U);
    msg.setDestinationEntity(76U);
    msg.x = 0.7506934146568008;
    msg.y = 0.7095299321142982;
    msg.z = 0.5584118815146045;

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
    msg.setTimeStamp(0.2553674033258386);
    msg.setSource(8978U);
    msg.setSourceEntity(146U);
    msg.setDestination(18709U);
    msg.setDestinationEntity(8U);
    msg.x = 0.9779326271519619;
    msg.y = 0.23889646925245378;
    msg.z = 0.06984466025704728;

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
    msg.setTimeStamp(0.4269720441264444);
    msg.setSource(63907U);
    msg.setSourceEntity(109U);
    msg.setDestination(7174U);
    msg.setDestinationEntity(242U);
    msg.x = 0.010888471224299257;
    msg.y = 0.6785891746275261;
    msg.z = 0.954781298441226;

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
    msg.setTimeStamp(0.4373655172581704);
    msg.setSource(32415U);
    msg.setSourceEntity(177U);
    msg.setDestination(39925U);
    msg.setDestinationEntity(119U);
    msg.va = 0.28808682444717093;
    msg.aoa = 0.594100003877654;
    msg.ssa = 0.052966687311251426;

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
    msg.setTimeStamp(0.7480309907773307);
    msg.setSource(38753U);
    msg.setSourceEntity(100U);
    msg.setDestination(5480U);
    msg.setDestinationEntity(38U);
    msg.va = 0.1442376163634148;
    msg.aoa = 0.7633783571797365;
    msg.ssa = 0.2344608897215652;

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
    msg.setTimeStamp(0.4643304231393367);
    msg.setSource(45042U);
    msg.setSourceEntity(111U);
    msg.setDestination(27891U);
    msg.setDestinationEntity(195U);
    msg.va = 0.48118303126368434;
    msg.aoa = 0.4661188884023675;
    msg.ssa = 0.48947786236571844;

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
    msg.setTimeStamp(0.32069304572357027);
    msg.setSource(390U);
    msg.setSourceEntity(189U);
    msg.setDestination(36349U);
    msg.setDestinationEntity(62U);
    msg.value = 0.9011839324780159;

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
    msg.setTimeStamp(0.343176006590754);
    msg.setSource(52334U);
    msg.setSourceEntity(148U);
    msg.setDestination(53870U);
    msg.setDestinationEntity(148U);
    msg.value = 0.16056999661962812;

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
    msg.setTimeStamp(0.9855171497532221);
    msg.setSource(51352U);
    msg.setSourceEntity(122U);
    msg.setDestination(7088U);
    msg.setDestinationEntity(196U);
    msg.value = 0.031123080895520627;

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
    msg.setTimeStamp(0.05795737397720757);
    msg.setSource(9575U);
    msg.setSourceEntity(120U);
    msg.setDestination(33581U);
    msg.setDestinationEntity(133U);
    msg.value = 0.8712538660330734;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.4402224491673865);
    msg.setSource(22572U);
    msg.setSourceEntity(103U);
    msg.setDestination(59415U);
    msg.setDestinationEntity(99U);
    msg.value = 0.06324555722522796;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.8880408179284169);
    msg.setSource(38357U);
    msg.setSourceEntity(106U);
    msg.setDestination(4310U);
    msg.setDestinationEntity(42U);
    msg.value = 0.6107899806908017;
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
    msg.setTimeStamp(0.4278030871708539);
    msg.setSource(41509U);
    msg.setSourceEntity(126U);
    msg.setDestination(6788U);
    msg.setDestinationEntity(235U);
    msg.value = 0.6489327268389917;
    msg.speed_units = 129U;

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
    msg.setTimeStamp(0.9034624092137846);
    msg.setSource(56942U);
    msg.setSourceEntity(124U);
    msg.setDestination(53076U);
    msg.setDestinationEntity(71U);
    msg.value = 0.07867594356967977;
    msg.speed_units = 250U;

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
    msg.setTimeStamp(0.305593179692624);
    msg.setSource(22473U);
    msg.setSourceEntity(195U);
    msg.setDestination(3497U);
    msg.setDestinationEntity(194U);
    msg.value = 0.006597564428439062;
    msg.speed_units = 242U;

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
    msg.setTimeStamp(0.4316365924650891);
    msg.setSource(52793U);
    msg.setSourceEntity(130U);
    msg.setDestination(5762U);
    msg.setDestinationEntity(246U);
    msg.value = 0.6059580751356479;

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
    msg.setTimeStamp(0.9952686514961173);
    msg.setSource(43875U);
    msg.setSourceEntity(233U);
    msg.setDestination(10817U);
    msg.setDestinationEntity(99U);
    msg.value = 0.5393797418989387;

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
    msg.setTimeStamp(0.14305146527046786);
    msg.setSource(23550U);
    msg.setSourceEntity(30U);
    msg.setDestination(27570U);
    msg.setDestinationEntity(151U);
    msg.value = 0.23509879137195577;

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
    msg.setTimeStamp(0.8259812701862321);
    msg.setSource(24389U);
    msg.setSourceEntity(95U);
    msg.setDestination(10961U);
    msg.setDestinationEntity(188U);
    msg.value = 0.46598203625068524;

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
    msg.setTimeStamp(0.8191799431639382);
    msg.setSource(39559U);
    msg.setSourceEntity(65U);
    msg.setDestination(36841U);
    msg.setDestinationEntity(184U);
    msg.value = 0.48492542419744467;

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
    msg.setTimeStamp(0.6781144117084272);
    msg.setSource(57998U);
    msg.setSourceEntity(43U);
    msg.setDestination(9976U);
    msg.setDestinationEntity(190U);
    msg.value = 0.13501135164254807;

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
    msg.setTimeStamp(0.9996160790084437);
    msg.setSource(31301U);
    msg.setSourceEntity(99U);
    msg.setDestination(35863U);
    msg.setDestinationEntity(159U);
    msg.value = 0.6362943932422721;

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
    msg.setTimeStamp(0.8735688276672603);
    msg.setSource(59784U);
    msg.setSourceEntity(141U);
    msg.setDestination(33723U);
    msg.setDestinationEntity(155U);
    msg.value = 0.11183152143664177;

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
    msg.setTimeStamp(0.29499481056770727);
    msg.setSource(5266U);
    msg.setSourceEntity(90U);
    msg.setDestination(32714U);
    msg.setDestinationEntity(238U);
    msg.value = 0.5027771137679504;

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
    msg.setTimeStamp(0.49291015333381083);
    msg.setSource(19517U);
    msg.setSourceEntity(43U);
    msg.setDestination(49407U);
    msg.setDestinationEntity(200U);
    msg.path_ref = 3316304498U;
    msg.start_lat = 0.08879954319424177;
    msg.start_lon = 0.7813137193825404;
    msg.start_z = 0.9463124917149314;
    msg.start_z_units = 177U;
    msg.end_lat = 0.5479497573067094;
    msg.end_lon = 0.7671344508581643;
    msg.end_z = 0.31769234818388414;
    msg.end_z_units = 135U;
    msg.speed = 0.9541994042758725;
    msg.speed_units = 159U;
    msg.lradius = 0.24590210274565238;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.39533823114869415);
    msg.setSource(44071U);
    msg.setSourceEntity(17U);
    msg.setDestination(60145U);
    msg.setDestinationEntity(218U);
    msg.path_ref = 205692388U;
    msg.start_lat = 0.044003753404655455;
    msg.start_lon = 0.7761681344549246;
    msg.start_z = 0.06452266295672171;
    msg.start_z_units = 9U;
    msg.end_lat = 0.9385058775239569;
    msg.end_lon = 0.959762193159566;
    msg.end_z = 0.7794715816083566;
    msg.end_z_units = 207U;
    msg.speed = 0.31338981739601246;
    msg.speed_units = 16U;
    msg.lradius = 0.4204869925480089;
    msg.flags = 67U;

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
    msg.setTimeStamp(0.2676408921302498);
    msg.setSource(1933U);
    msg.setSourceEntity(93U);
    msg.setDestination(7554U);
    msg.setDestinationEntity(188U);
    msg.path_ref = 1231858508U;
    msg.start_lat = 0.31889917397070455;
    msg.start_lon = 0.20607340251197515;
    msg.start_z = 0.6371539108097233;
    msg.start_z_units = 233U;
    msg.end_lat = 0.3848428096804567;
    msg.end_lon = 0.4114313287901159;
    msg.end_z = 0.30320614444155425;
    msg.end_z_units = 25U;
    msg.speed = 0.23973023041767028;
    msg.speed_units = 75U;
    msg.lradius = 0.17475825133093092;
    msg.flags = 240U;

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
    msg.setTimeStamp(0.14943421054543682);
    msg.setSource(15436U);
    msg.setSourceEntity(60U);
    msg.setDestination(2009U);
    msg.setDestinationEntity(165U);
    msg.x = 0.6001580389414772;
    msg.y = 0.31115755242117293;
    msg.z = 0.9774908695602135;
    msg.k = 0.6455252948096721;
    msg.m = 0.6790288581255612;
    msg.n = 0.4846978219887471;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.8105201188024542);
    msg.setSource(60842U);
    msg.setSourceEntity(148U);
    msg.setDestination(64973U);
    msg.setDestinationEntity(0U);
    msg.x = 0.4903393285900355;
    msg.y = 0.3876297698558385;
    msg.z = 0.47973808571077947;
    msg.k = 0.6553772421117782;
    msg.m = 0.4589598885969416;
    msg.n = 0.4116935494525753;
    msg.flags = 78U;

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
    msg.setTimeStamp(0.6823248975217446);
    msg.setSource(35753U);
    msg.setSourceEntity(181U);
    msg.setDestination(43477U);
    msg.setDestinationEntity(64U);
    msg.x = 0.7245083276459184;
    msg.y = 0.46403888075300914;
    msg.z = 0.3509403329879994;
    msg.k = 0.5040734812639691;
    msg.m = 0.39243155121397055;
    msg.n = 0.5378281487472577;
    msg.flags = 180U;

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
    msg.setTimeStamp(0.9657826459323259);
    msg.setSource(30230U);
    msg.setSourceEntity(40U);
    msg.setDestination(22527U);
    msg.setDestinationEntity(91U);
    msg.value = 0.847033120868497;

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
    msg.setTimeStamp(0.04207752064168335);
    msg.setSource(52849U);
    msg.setSourceEntity(162U);
    msg.setDestination(12149U);
    msg.setDestinationEntity(87U);
    msg.value = 0.2257130574225772;

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
    msg.setTimeStamp(0.6812008079082793);
    msg.setSource(30205U);
    msg.setSourceEntity(43U);
    msg.setDestination(63148U);
    msg.setDestinationEntity(7U);
    msg.value = 0.8034706089996169;

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
    msg.setTimeStamp(0.409026689182039);
    msg.setSource(42072U);
    msg.setSourceEntity(203U);
    msg.setDestination(51699U);
    msg.setDestinationEntity(44U);
    msg.u = 0.8636413944405374;
    msg.v = 0.5887180499956259;
    msg.w = 0.6850259918693961;
    msg.p = 0.4715730429788685;
    msg.q = 0.6916409270249333;
    msg.r = 0.013907166327738807;
    msg.flags = 53U;

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
    msg.setTimeStamp(0.8356738145101481);
    msg.setSource(52458U);
    msg.setSourceEntity(56U);
    msg.setDestination(2358U);
    msg.setDestinationEntity(234U);
    msg.u = 0.6771493726907077;
    msg.v = 0.3907441277098035;
    msg.w = 0.7350745324095409;
    msg.p = 0.5845448596920754;
    msg.q = 0.6341300245167505;
    msg.r = 0.3039989311475866;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.3214291426597561);
    msg.setSource(57631U);
    msg.setSourceEntity(105U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(155U);
    msg.u = 0.25926809165807074;
    msg.v = 0.061290720057339265;
    msg.w = 0.8568467844127872;
    msg.p = 0.011778613631494128;
    msg.q = 0.2879438346111949;
    msg.r = 0.15547454414487394;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.14194112209887155);
    msg.setSource(62213U);
    msg.setSourceEntity(94U);
    msg.setDestination(48145U);
    msg.setDestinationEntity(149U);
    msg.path_ref = 2849212681U;
    msg.start_lat = 0.10630976284159266;
    msg.start_lon = 0.1116689478586228;
    msg.start_z = 0.952390198890238;
    msg.start_z_units = 209U;
    msg.end_lat = 0.7100178707640502;
    msg.end_lon = 0.11022104981323178;
    msg.end_z = 0.8138211426849441;
    msg.end_z_units = 160U;
    msg.lradius = 0.10250225378434985;
    msg.flags = 13U;
    msg.x = 0.7177191660674922;
    msg.y = 0.4544050212502001;
    msg.z = 0.4757907772951774;
    msg.vx = 0.6919332751953726;
    msg.vy = 0.1833321275840255;
    msg.vz = 0.3256618245220644;
    msg.course_error = 0.31245497262113997;
    msg.eta = 37037U;

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
    msg.setTimeStamp(0.16787874702068528);
    msg.setSource(59759U);
    msg.setSourceEntity(181U);
    msg.setDestination(18699U);
    msg.setDestinationEntity(65U);
    msg.path_ref = 982690915U;
    msg.start_lat = 0.008860231255715667;
    msg.start_lon = 0.19183130122877867;
    msg.start_z = 0.02309760809110306;
    msg.start_z_units = 3U;
    msg.end_lat = 0.15724721398767472;
    msg.end_lon = 0.9495547742804141;
    msg.end_z = 0.8423469532602225;
    msg.end_z_units = 207U;
    msg.lradius = 0.20049967067506025;
    msg.flags = 134U;
    msg.x = 0.3468566698692406;
    msg.y = 0.08047604255827878;
    msg.z = 0.5734558434404017;
    msg.vx = 0.6124859386298968;
    msg.vy = 0.7304779669932955;
    msg.vz = 0.018258701317532378;
    msg.course_error = 0.986223733109062;
    msg.eta = 57960U;

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
    msg.setTimeStamp(0.036962854521744304);
    msg.setSource(52151U);
    msg.setSourceEntity(143U);
    msg.setDestination(340U);
    msg.setDestinationEntity(23U);
    msg.path_ref = 2769829974U;
    msg.start_lat = 0.5054833258297392;
    msg.start_lon = 0.5722423172041954;
    msg.start_z = 0.3228651416828583;
    msg.start_z_units = 240U;
    msg.end_lat = 0.25287278843681604;
    msg.end_lon = 0.5252552126383615;
    msg.end_z = 0.9935922894666038;
    msg.end_z_units = 174U;
    msg.lradius = 0.24986237062659467;
    msg.flags = 218U;
    msg.x = 0.37137315983760855;
    msg.y = 0.2723624323871646;
    msg.z = 0.8736220319325471;
    msg.vx = 0.09825433525076577;
    msg.vy = 0.009700742326845813;
    msg.vz = 0.6331788186630796;
    msg.course_error = 0.3156393934421071;
    msg.eta = 52283U;

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
    msg.setTimeStamp(0.7189637633900555);
    msg.setSource(37206U);
    msg.setSourceEntity(8U);
    msg.setDestination(7382U);
    msg.setDestinationEntity(35U);
    msg.k = 0.25693881925319284;
    msg.m = 0.9542110176547164;
    msg.n = 0.17116575805226197;

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
    msg.setTimeStamp(0.7344266824494387);
    msg.setSource(39304U);
    msg.setSourceEntity(186U);
    msg.setDestination(45787U);
    msg.setDestinationEntity(3U);
    msg.k = 0.5582100456718602;
    msg.m = 0.7961042426336832;
    msg.n = 0.8550440059665046;

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
    msg.setTimeStamp(0.011320659272720635);
    msg.setSource(57788U);
    msg.setSourceEntity(75U);
    msg.setDestination(29247U);
    msg.setDestinationEntity(164U);
    msg.k = 0.17225034412663398;
    msg.m = 0.6110206269867342;
    msg.n = 0.5131608974346382;

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
    msg.setTimeStamp(0.6298787000438232);
    msg.setSource(12906U);
    msg.setSourceEntity(20U);
    msg.setDestination(60896U);
    msg.setDestinationEntity(229U);
    msg.p = 0.7926175195869551;
    msg.i = 0.4883944108945739;
    msg.d = 0.22557902521988293;
    msg.a = 0.12079290024866851;

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
    msg.setTimeStamp(0.01359042204264016);
    msg.setSource(22252U);
    msg.setSourceEntity(108U);
    msg.setDestination(57880U);
    msg.setDestinationEntity(56U);
    msg.p = 0.2621442075961411;
    msg.i = 0.2520263742447273;
    msg.d = 0.6449981207953974;
    msg.a = 0.7649986428317884;

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
    msg.setTimeStamp(0.45341163441198584);
    msg.setSource(36077U);
    msg.setSourceEntity(104U);
    msg.setDestination(31954U);
    msg.setDestinationEntity(155U);
    msg.p = 0.18385303365967554;
    msg.i = 0.35500578063101906;
    msg.d = 0.2735912394001794;
    msg.a = 0.7015878129033828;

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
    msg.setTimeStamp(0.7451691830191198);
    msg.setSource(25664U);
    msg.setSourceEntity(208U);
    msg.setDestination(28316U);
    msg.setDestinationEntity(88U);
    msg.op = 191U;

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
    msg.setTimeStamp(0.41636987958035665);
    msg.setSource(47913U);
    msg.setSourceEntity(81U);
    msg.setDestination(5726U);
    msg.setDestinationEntity(123U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.5884982769684485);
    msg.setSource(31432U);
    msg.setSourceEntity(141U);
    msg.setDestination(60152U);
    msg.setDestinationEntity(45U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.7957107693822932);
    msg.setSource(36090U);
    msg.setSourceEntity(242U);
    msg.setDestination(23715U);
    msg.setDestinationEntity(136U);
    msg.x = 0.6416068908805027;
    msg.y = 0.005098832592883906;
    msg.z = 0.7603795803682512;
    msg.vx = 0.5040288329590202;
    msg.vy = 0.19882969255021432;
    msg.vz = 0.5576642111542441;
    msg.ax = 0.23852373982798036;
    msg.ay = 0.8806455370996786;
    msg.az = 0.5336643846061494;
    msg.flags = 50733U;

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
    msg.setTimeStamp(0.24830132180576492);
    msg.setSource(51764U);
    msg.setSourceEntity(36U);
    msg.setDestination(5629U);
    msg.setDestinationEntity(100U);
    msg.x = 0.7995758738430102;
    msg.y = 0.03170029600231172;
    msg.z = 0.017602077395948434;
    msg.vx = 0.5412997166384239;
    msg.vy = 0.7526648153745826;
    msg.vz = 0.14591128087271032;
    msg.ax = 0.5593117447561566;
    msg.ay = 0.16042273154417175;
    msg.az = 0.15908173918766932;
    msg.flags = 27503U;

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
    msg.setTimeStamp(0.7925199756647824);
    msg.setSource(31429U);
    msg.setSourceEntity(202U);
    msg.setDestination(41473U);
    msg.setDestinationEntity(29U);
    msg.x = 0.19506622831712417;
    msg.y = 0.17946410119242084;
    msg.z = 0.6018400998330478;
    msg.vx = 0.6171439025135969;
    msg.vy = 0.4240312106218588;
    msg.vz = 0.8240148144268324;
    msg.ax = 0.6084496709796586;
    msg.ay = 0.46642354106230577;
    msg.az = 0.32459172850583207;
    msg.flags = 32519U;

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
    msg.setTimeStamp(0.17231055990527888);
    msg.setSource(33803U);
    msg.setSourceEntity(252U);
    msg.setDestination(12436U);
    msg.setDestinationEntity(206U);
    msg.value = 0.36065221068156983;

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
    msg.setTimeStamp(0.21790003509005962);
    msg.setSource(23842U);
    msg.setSourceEntity(45U);
    msg.setDestination(13491U);
    msg.setDestinationEntity(70U);
    msg.value = 0.6891114576338033;

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
    msg.setTimeStamp(0.7724188985327788);
    msg.setSource(42820U);
    msg.setSourceEntity(181U);
    msg.setDestination(48772U);
    msg.setDestinationEntity(192U);
    msg.value = 0.6589982820905512;

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
    msg.setTimeStamp(0.3460484462856871);
    msg.setSource(18303U);
    msg.setSourceEntity(30U);
    msg.setDestination(56276U);
    msg.setDestinationEntity(152U);
    msg.timeout = 39540U;
    msg.lat = 0.21877985371426967;
    msg.lon = 0.3938357709343785;
    msg.z = 0.33257008237941343;
    msg.z_units = 208U;
    msg.speed = 0.5858652657563934;
    msg.speed_units = 188U;
    msg.roll = 0.28509262468970653;
    msg.pitch = 0.4058465006975429;
    msg.yaw = 0.6357753554275504;
    msg.custom.assign("IWYUPBDNEGJSJWAPTEIFZQKABWBBQAKLZAEEXHCHGPXYKIQBOTFFZFUUCJKULKE");

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
    msg.setTimeStamp(0.7465278985125051);
    msg.setSource(1009U);
    msg.setSourceEntity(31U);
    msg.setDestination(15083U);
    msg.setDestinationEntity(124U);
    msg.timeout = 52528U;
    msg.lat = 0.5766405447987589;
    msg.lon = 0.16194988530845456;
    msg.z = 0.8855862880997265;
    msg.z_units = 38U;
    msg.speed = 0.7397491519421474;
    msg.speed_units = 82U;
    msg.roll = 0.6153289755568513;
    msg.pitch = 0.2669926482254398;
    msg.yaw = 0.8145124362959156;
    msg.custom.assign("AYVNSKHGCCHCBKSCBNNEZVZENPRHFEEUDLUISBZAXXBTQDZTMDYWSRQJLMODTJVLEXCFWMLQWQPRIVDSJBGKBNMGOUPKFIGJJGAFKIPLHVRDLRTWWFWDCUGKMLXWALPMJMNWBZBIYVUKBCLVXAUSVYXDSG");

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
    msg.setTimeStamp(0.4095607003431285);
    msg.setSource(37262U);
    msg.setSourceEntity(197U);
    msg.setDestination(15100U);
    msg.setDestinationEntity(204U);
    msg.timeout = 47702U;
    msg.lat = 0.3621758188171099;
    msg.lon = 0.9571927066600214;
    msg.z = 0.7236364900639408;
    msg.z_units = 143U;
    msg.speed = 0.7915945934325375;
    msg.speed_units = 145U;
    msg.roll = 0.059700099279263896;
    msg.pitch = 0.9964372159871147;
    msg.yaw = 0.85794588653397;
    msg.custom.assign("KVSHWDWDXYDZGPRJIASXHPQRMWLJAYQQKHTIZVMXJWOEAFJEZMRAWZJRVAREGMXYHZLOOBNZKTLVYLIONEYKKBPJORUAQQTBQAGHTFMHDCBGGHGWMODIMZLBGUVPLJUNYRQRUCHSAJDETVXSTAUUSERYUVTAYFECITKY");

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
    msg.setTimeStamp(0.03645226543971947);
    msg.setSource(370U);
    msg.setSourceEntity(39U);
    msg.setDestination(36859U);
    msg.setDestinationEntity(101U);
    msg.timeout = 16725U;
    msg.lat = 0.8420799592382506;
    msg.lon = 0.879460861014318;
    msg.z = 0.8267054903904842;
    msg.z_units = 54U;
    msg.speed = 0.8527541036689318;
    msg.speed_units = 140U;
    msg.duration = 51292U;
    msg.radius = 0.008470522483686849;
    msg.flags = 61U;
    msg.custom.assign("YIRCIOVDCQGTZRFQPCTDBAGKNGPUUBFWAQHHSVURMNLUMEURNFTKCMYJIYLMJPBTVCZSMWIRWATCJNVULEYEVRAJZPUXKSKRWFDRMOFVJWQZBFJANBZJDTIGJLCDKODGSBMMEQFRGCSKCDFNPHIXGNIYJTDR");

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
    msg.setTimeStamp(0.5065685937897833);
    msg.setSource(30533U);
    msg.setSourceEntity(222U);
    msg.setDestination(5392U);
    msg.setDestinationEntity(17U);
    msg.timeout = 54601U;
    msg.lat = 0.5684449759594027;
    msg.lon = 0.7188764077865487;
    msg.z = 0.20525522546761077;
    msg.z_units = 133U;
    msg.speed = 0.16204965772092783;
    msg.speed_units = 213U;
    msg.duration = 22636U;
    msg.radius = 0.36760719145913834;
    msg.flags = 121U;
    msg.custom.assign("QDBPESAPFOLSESQXTJTBAHQVJXOUVPWNKTQHQRKWRXBNFTQJFFMCGHLWJDTUVCFUJBRAVMKDNWDFHIHZODROMTUVXGXOCRHPMLVGNTPMEULYH");

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
    msg.setTimeStamp(0.3928365502926068);
    msg.setSource(56436U);
    msg.setSourceEntity(176U);
    msg.setDestination(12870U);
    msg.setDestinationEntity(112U);
    msg.timeout = 14083U;
    msg.lat = 0.3698688326910857;
    msg.lon = 0.8941948536250697;
    msg.z = 0.02662528073908088;
    msg.z_units = 211U;
    msg.speed = 0.5395664054138637;
    msg.speed_units = 49U;
    msg.duration = 61234U;
    msg.radius = 0.6062474226173005;
    msg.flags = 130U;
    msg.custom.assign("PDSKSDUSKFBHLJMTIQCEBWZYKLIFNN");

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
    msg.setTimeStamp(0.31914431438225077);
    msg.setSource(13725U);
    msg.setSourceEntity(137U);
    msg.setDestination(2289U);
    msg.setDestinationEntity(204U);
    msg.custom.assign("VVTQYMBZCLKHNRJIJSEHFAWICTDOGTTQGTNWAIVBIKWZYYGVCEAAOTWJKPUL");

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
    msg.setTimeStamp(0.14172339018168556);
    msg.setSource(45852U);
    msg.setSourceEntity(194U);
    msg.setDestination(12190U);
    msg.setDestinationEntity(78U);
    msg.custom.assign("KXNRFDLOLJUCYALJGAXFNNDSBEBNZRECQQXXDWNKLJWROPNSPUIHJKCELZTVWMBOOYHEVHUCWCCHYZSM");

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
    msg.setTimeStamp(0.48328292772659953);
    msg.setSource(33573U);
    msg.setSourceEntity(63U);
    msg.setDestination(20367U);
    msg.setDestinationEntity(244U);
    msg.custom.assign("BAAWXCKORYVKXQVKHUGHARMDPNTH");

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
    msg.setTimeStamp(0.9827801230011763);
    msg.setSource(11660U);
    msg.setSourceEntity(180U);
    msg.setDestination(1376U);
    msg.setDestinationEntity(254U);
    msg.timeout = 11296U;
    msg.lat = 0.5877743175125274;
    msg.lon = 0.6689524099938309;
    msg.z = 0.27045358256368934;
    msg.z_units = 86U;
    msg.duration = 18124U;
    msg.speed = 0.5285748834398063;
    msg.speed_units = 110U;
    msg.type = 156U;
    msg.radius = 0.053078355164719704;
    msg.length = 0.7482525327488557;
    msg.bearing = 0.8630882672321124;
    msg.direction = 3U;
    msg.custom.assign("LIDNYHPKUKUSLRVQBNXFBXFZJWJMOJCKNKCGMETCVIZWZLNMRHSKPATOFOPOAZFAHWKVUJUPBYVIODGKXESBPWCWREHYASWDSFIIFVENQGWNITMDOVLZWMLYXGAKSOJGBBYPRNFPBAQJEXL");

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
    msg.setTimeStamp(0.12442218017010065);
    msg.setSource(30627U);
    msg.setSourceEntity(155U);
    msg.setDestination(32483U);
    msg.setDestinationEntity(152U);
    msg.timeout = 35643U;
    msg.lat = 0.01148086800327397;
    msg.lon = 0.6429263787439833;
    msg.z = 0.5189481800621094;
    msg.z_units = 153U;
    msg.duration = 60623U;
    msg.speed = 0.5260901595277938;
    msg.speed_units = 98U;
    msg.type = 184U;
    msg.radius = 0.9443875309933268;
    msg.length = 0.6061942142075896;
    msg.bearing = 0.5230313575624381;
    msg.direction = 18U;
    msg.custom.assign("SRSAKFESSYONHGDUMNBWVAOVLDUQIXLKIPQEUIJNSAWJLLTDIMJQTIMCAYNQLVGVNOCZTFFCOOCHXRMPFBYTJBQADYEMNZYUBSVLTKEZCIDBXBVLGDIGCVXRRQGGUR");

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
    msg.setTimeStamp(0.13208345233661634);
    msg.setSource(47470U);
    msg.setSourceEntity(52U);
    msg.setDestination(65317U);
    msg.setDestinationEntity(88U);
    msg.timeout = 55830U;
    msg.lat = 0.08556872187368447;
    msg.lon = 0.9146393174194618;
    msg.z = 0.3081816591044815;
    msg.z_units = 67U;
    msg.duration = 63088U;
    msg.speed = 0.5737650465326263;
    msg.speed_units = 196U;
    msg.type = 81U;
    msg.radius = 0.9883113394624398;
    msg.length = 0.029064155423119686;
    msg.bearing = 0.7825853200466265;
    msg.direction = 146U;
    msg.custom.assign("YJPXOAEPXSXKKTUZXLUXAAKCDVFOHPWYJSYDMVRHAKBNFAFWXNQDRWABRDWOVEKYQQETNQCWSLLFZBMQCTNDQTOSKVHOAVDCPYJGXGRGJSGPTMYUAQILUKDHHILOPBTTRQHUECVMNSPGKNFWESEVL");

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
    msg.setTimeStamp(0.3459227554951785);
    msg.setSource(19609U);
    msg.setSourceEntity(210U);
    msg.setDestination(55118U);
    msg.setDestinationEntity(57U);
    msg.duration = 61836U;
    msg.custom.assign("SNUSUQZHUUCDWMHRZTLSR");

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
    msg.setTimeStamp(0.3030120243798109);
    msg.setSource(59642U);
    msg.setSourceEntity(128U);
    msg.setDestination(63413U);
    msg.setDestinationEntity(230U);
    msg.duration = 36486U;
    msg.custom.assign("YAMYIIBHCIMLARBYMZGQSISELVDGIYFOJJKEIZYNWFGUBLOXSFINDZKXEDUVFQMZTAJPKACQDUXQPDJOPQGVJOTBVNIFSQKNFJXNTWADTLPPADCBEGGTUGBPGDQSSHZBFRTELUZLRTQEZBORNCEVCOLAZRRTWKOY");

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
    msg.setTimeStamp(0.3860878012382658);
    msg.setSource(61726U);
    msg.setSourceEntity(34U);
    msg.setDestination(38539U);
    msg.setDestinationEntity(125U);
    msg.duration = 25090U;
    msg.custom.assign("TRWVIVGQCBVBYWCDZPBXMYLVXDJTNLIQPOQBJSBNNDAULWCTBKUCPCKUZMHODSNQACJWRJPMKATYFKX");

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
    msg.setTimeStamp(0.6594295252703823);
    msg.setSource(41194U);
    msg.setSourceEntity(224U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(254U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3546457117U;
    tmp_msg_0.start_lat = 0.7062041004524533;
    tmp_msg_0.start_lon = 0.5444946847350505;
    tmp_msg_0.start_z = 0.8867346444688153;
    tmp_msg_0.start_z_units = 208U;
    tmp_msg_0.end_lat = 0.5157495512737635;
    tmp_msg_0.end_lon = 0.3158147860340511;
    tmp_msg_0.end_z = 0.5666477142453926;
    tmp_msg_0.end_z_units = 44U;
    tmp_msg_0.speed = 0.2662285523854041;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.lradius = 0.10220250471287362;
    tmp_msg_0.flags = 160U;
    msg.control.set(tmp_msg_0);
    msg.duration = 49696U;
    msg.custom.assign("HUMHKENTSHRYXNMQHQSADRFQMPSBDSUWZLFVKAWRTPCRGTQTWLAUQXRWLATGKSUGOJDSLCEJZPSXUJXM");

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
    msg.setTimeStamp(0.1464137805444733);
    msg.setSource(58483U);
    msg.setSourceEntity(122U);
    msg.setDestination(27836U);
    msg.setDestinationEntity(152U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.3353027377135598;
    msg.control.set(tmp_msg_0);
    msg.duration = 16393U;
    msg.custom.assign("LMSBAXBTJSXJWWTNWDSLCZLQIXIDGWSUJDUGQXJJARBMICYPBWIAGCGOELFHENTZEFJJZPYWRKAVPZYCDCVPFBCLQFJNJPFBPEPLVKEMDTHRRNNMTEKXOXISMYKUZYGB");

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
    msg.setTimeStamp(0.8965130179567876);
    msg.setSource(40033U);
    msg.setSourceEntity(147U);
    msg.setDestination(58177U);
    msg.setDestinationEntity(65U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.12105153054309115;
    msg.control.set(tmp_msg_0);
    msg.duration = 44065U;
    msg.custom.assign("IHTUAMOGJCODFZACUIRLPQDRGXQMFQDBTZSYCSGAFAYQQLBQPKSOTPBZNOTHSNGUPRAZJETTEFMCEQFMVLUHYMNXBHJDTXOKYYMGRJHJNCZOATWWGIWVIHBZGMPBHPVZAVKYWJPYGVNDBVZXWDRONVLOFKFPIYKUUKXWNWDE");

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
    msg.setTimeStamp(0.8682268856050256);
    msg.setSource(40695U);
    msg.setSourceEntity(51U);
    msg.setDestination(43808U);
    msg.setDestinationEntity(182U);
    msg.timeout = 8166U;
    msg.lat = 0.7557800137498227;
    msg.lon = 0.09723233446328261;
    msg.z = 0.45776871343017567;
    msg.z_units = 18U;
    msg.speed = 0.5157711406802247;
    msg.speed_units = 214U;
    msg.bearing = 0.8649827005302972;
    msg.cross_angle = 0.11047931531391997;
    msg.width = 0.4606042835725471;
    msg.length = 0.40698939825803315;
    msg.hstep = 0.25925590516276265;
    msg.coff = 66U;
    msg.alternation = 205U;
    msg.flags = 44U;
    msg.custom.assign("AHSQBZANYFGTFIOKCXYNJEZSWBAECVBFWOHNDUPIZPWGESMCHNBUXXBMDZOKTZVRDIWZNXWELQODVMXLMLQTIFJMOMIKJIFHCPPNUPRCVZKLOOFUFVADSWELGFBHJVEPNAXSJFGVUHMTASYGUSOCERQRXZCBKKRSWQMJYLQTHPTGLJOZ");

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
    msg.setTimeStamp(0.6191668628838533);
    msg.setSource(59165U);
    msg.setSourceEntity(240U);
    msg.setDestination(47002U);
    msg.setDestinationEntity(228U);
    msg.timeout = 61302U;
    msg.lat = 0.7325574191610383;
    msg.lon = 0.23354017279550576;
    msg.z = 0.4640738801283577;
    msg.z_units = 19U;
    msg.speed = 0.37362081940390923;
    msg.speed_units = 36U;
    msg.bearing = 0.801420653006808;
    msg.cross_angle = 0.4210434447149807;
    msg.width = 0.03060652978545042;
    msg.length = 0.8767500555395925;
    msg.hstep = 0.7508313662546079;
    msg.coff = 43U;
    msg.alternation = 236U;
    msg.flags = 8U;
    msg.custom.assign("JCLWXTJAAPRQTKLQUGFXCGNXHPQSWGUIODQFNBFWDLSRHDHIGHJVRIYEKZLSCODCPBVOWECQEZGNULMXNTABVOSAXMMWVOUHIFECPJRYYJRMGYRFHFFZKNJKHELBAEFPUKQXTELARJBAVECWCUDTOAEFUZLIKPKSYDSMMQPNXGYIMBEKYBAWZGK");

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
    msg.setTimeStamp(0.03979167315162846);
    msg.setSource(40531U);
    msg.setSourceEntity(181U);
    msg.setDestination(25111U);
    msg.setDestinationEntity(126U);
    msg.timeout = 59651U;
    msg.lat = 0.9418484227007534;
    msg.lon = 0.376773323298045;
    msg.z = 0.7763359329479654;
    msg.z_units = 205U;
    msg.speed = 0.9914074278713138;
    msg.speed_units = 247U;
    msg.bearing = 0.9182727260533071;
    msg.cross_angle = 0.3927043129827624;
    msg.width = 0.9452091541509283;
    msg.length = 0.7203766478882491;
    msg.hstep = 0.9155034178082917;
    msg.coff = 92U;
    msg.alternation = 146U;
    msg.flags = 190U;
    msg.custom.assign("OGYEEJHALZWZOXDXBARDJLURFQPYQKIQNHBMGOEJVCBWCCLDCWVVYCMWNSZUEEBXGTSSZHKPDOY");

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
    msg.setTimeStamp(0.4145987096849627);
    msg.setSource(58828U);
    msg.setSourceEntity(61U);
    msg.setDestination(3249U);
    msg.setDestinationEntity(88U);
    msg.timeout = 52398U;
    msg.lat = 0.2343697303470439;
    msg.lon = 0.7453735930316127;
    msg.z = 0.5340629546625014;
    msg.z_units = 102U;
    msg.speed = 0.46973462986566805;
    msg.speed_units = 128U;
    msg.custom.assign("ZKITLSIIGVJDSPGBGRWWRSDAAVEMTGJZQRWUHCYFUQLNITONHPVFRAPDWKVUCCSBBLCHXFFXRNLXHZMZUFUJAVXXPAJKEWXVSEGLYUGAKQKVCVZMFKUFTXCHLMACUMLROWYTSLTJEMTPXMJPHGJNBKIBNEOAQZBHUZLUQRODMORGSQRYNFYYDQMAVCAISDOCJMTFGSLODIBYETNHEDPDESQOTZVNYYQGPBKBPQNBE");

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
    msg.setTimeStamp(0.5745702383156305);
    msg.setSource(2763U);
    msg.setSourceEntity(60U);
    msg.setDestination(21474U);
    msg.setDestinationEntity(48U);
    msg.timeout = 30440U;
    msg.lat = 0.23095457593879787;
    msg.lon = 0.8044421687132641;
    msg.z = 0.15033514907685386;
    msg.z_units = 219U;
    msg.speed = 0.6344677195057146;
    msg.speed_units = 185U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8596375609479017;
    tmp_msg_0.y = 0.4956379077685823;
    tmp_msg_0.z = 0.3015214500819283;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UMKSRUATCIFZBMWKDHXQAGDZLUQEJAIITNJQOGASWJCESFMSYPLYLQINIGOIRTCIGZXAJHQCSZAWRLVYEKQESFPYVRDDOPNPMLHVENFCVMZMLVQHHIOERCZJWUHRPUGWNOUHXSGWWYNDXQJFOBAS");

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
    msg.setTimeStamp(0.6325081252521267);
    msg.setSource(18289U);
    msg.setSourceEntity(160U);
    msg.setDestination(56998U);
    msg.setDestinationEntity(118U);
    msg.timeout = 28033U;
    msg.lat = 0.2541190638255114;
    msg.lon = 0.40682964263187293;
    msg.z = 0.36203076212073704;
    msg.z_units = 217U;
    msg.speed = 0.4361236946081033;
    msg.speed_units = 38U;
    msg.custom.assign("LPKNGDYIWEEFFQBAVVFJPDROGZZNJSREMGKXNPTHBKHVNQFUXXCMCGCHIHBCWOMTMDPNRBRTQ");

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
    msg.setTimeStamp(0.915895624521057);
    msg.setSource(21084U);
    msg.setSourceEntity(144U);
    msg.setDestination(24681U);
    msg.setDestinationEntity(64U);
    msg.x = 0.34289265696482496;
    msg.y = 0.5033716277039223;
    msg.z = 0.9973279049118018;

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
    msg.setTimeStamp(0.8411479877759448);
    msg.setSource(21401U);
    msg.setSourceEntity(110U);
    msg.setDestination(56184U);
    msg.setDestinationEntity(141U);
    msg.x = 0.4406777332524813;
    msg.y = 0.029089423279225368;
    msg.z = 0.45538734214324583;

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
    msg.setTimeStamp(0.8664856272166612);
    msg.setSource(22615U);
    msg.setSourceEntity(221U);
    msg.setDestination(28464U);
    msg.setDestinationEntity(79U);
    msg.x = 0.946290914449985;
    msg.y = 0.5338606259381636;
    msg.z = 0.1410489516433675;

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
    msg.setTimeStamp(0.4389116066946639);
    msg.setSource(59663U);
    msg.setSourceEntity(129U);
    msg.setDestination(32075U);
    msg.setDestinationEntity(111U);
    msg.timeout = 40802U;
    msg.lat = 0.27412826194041406;
    msg.lon = 0.7053494469019946;
    msg.z = 0.3093715626203929;
    msg.z_units = 155U;
    msg.amplitude = 0.0032650390450794653;
    msg.pitch = 0.17864365592781772;
    msg.speed = 0.13963217410692363;
    msg.speed_units = 23U;
    msg.custom.assign("HXELJIDJUVSLPABABJNHTFHJZQPKIWOCOHCXJIUQOPWAACKPBQWHEKMFBRKMELQMZYBYLPVDAVMLSQXMOLLRYJZTFDTSBOKFFVGSIICPOEDEAMPKLNSUXSCNVMAUNPCCWJATQVQNXUZCRSNDOGXDEZYZRHPFJTSGBTKOMRORUANIEKVJ");

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
    msg.setTimeStamp(0.7915876993022428);
    msg.setSource(32794U);
    msg.setSourceEntity(214U);
    msg.setDestination(25695U);
    msg.setDestinationEntity(54U);
    msg.timeout = 30844U;
    msg.lat = 0.5650316313604444;
    msg.lon = 0.501405570770898;
    msg.z = 0.8883939468627066;
    msg.z_units = 39U;
    msg.amplitude = 0.27902462857776456;
    msg.pitch = 0.6209408713777189;
    msg.speed = 0.8768642655921518;
    msg.speed_units = 250U;
    msg.custom.assign("VXYRDINLUQGBCRZAWJOILSETNPKVAEXOUYGEHPNSINVHESKNSJSHXQGTMSKQTYGXPRHTAJMRDALURBTFVWAJMMPGABYWOBWFJFBUEDIPHYHLHBUQXXFMTZKRDZFCJICERCLZNT");

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
    msg.setTimeStamp(0.30457401117353555);
    msg.setSource(30697U);
    msg.setSourceEntity(182U);
    msg.setDestination(48057U);
    msg.setDestinationEntity(159U);
    msg.timeout = 10457U;
    msg.lat = 0.6749278336399406;
    msg.lon = 0.4750087453694454;
    msg.z = 0.4883461084467495;
    msg.z_units = 21U;
    msg.amplitude = 0.41064703434635574;
    msg.pitch = 0.535320196704052;
    msg.speed = 0.8667263909240375;
    msg.speed_units = 116U;
    msg.custom.assign("VVZVRZPBKWMHRWEGYTRMMMNCQWUMQTLRPVEXLZIANAZRUCNDPKAIVAUFSEVRIGNFYFAUNCNAOTSJKRQHDMNQOCQHFHTAUTJBVFVZTSLZCXYFXDUUWXEBSBJPYAGYRMGXDYPBOOQDWKCFJFULYOYSD");

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
    msg.setTimeStamp(0.7667791535009114);
    msg.setSource(37143U);
    msg.setSourceEntity(209U);
    msg.setDestination(38898U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.6924674600797238);
    msg.setSource(49572U);
    msg.setSourceEntity(26U);
    msg.setDestination(37160U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.5913952675911983);
    msg.setSource(27651U);
    msg.setSourceEntity(252U);
    msg.setDestination(61761U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.6284277303909945);
    msg.setSource(57043U);
    msg.setSourceEntity(113U);
    msg.setDestination(63486U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.24843917270469695;
    msg.lon = 0.7007656721094813;
    msg.z = 0.06717600161334658;
    msg.z_units = 58U;
    msg.radius = 0.262155679310741;
    msg.duration = 27614U;
    msg.speed = 0.9641673922941355;
    msg.speed_units = 25U;
    msg.custom.assign("VWAKKJBIBBLPTMJNMUEEKCUPPUCUOOIXOAYLXLGMZJUYGYGLKXZMCVYMXLZEYJNSZKUNQRWFZFJPNKDOVCGHKEGCWCLVNHTSQBSPGVTSAVYOJDFUADJIXYWJWOESSIDBBBRIHANGEIW");

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
    msg.setTimeStamp(0.8617074706866322);
    msg.setSource(13747U);
    msg.setSourceEntity(168U);
    msg.setDestination(2233U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.32046481196889454;
    msg.lon = 0.8541839928803887;
    msg.z = 0.27511903947571015;
    msg.z_units = 111U;
    msg.radius = 0.636993545932231;
    msg.duration = 11499U;
    msg.speed = 0.9375734537498446;
    msg.speed_units = 182U;
    msg.custom.assign("NDKDWNGYZMHMKAZKGQBBITJANYOVIGHZCXXATAPIXTPBQUNGHEAHZBEHOUXKVCYNDWUVPL");

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
    msg.setTimeStamp(0.024458107149390784);
    msg.setSource(2457U);
    msg.setSourceEntity(136U);
    msg.setDestination(40365U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.13974324785803005;
    msg.lon = 0.5794429642242902;
    msg.z = 0.8837976468145343;
    msg.z_units = 13U;
    msg.radius = 0.03208868828391531;
    msg.duration = 11161U;
    msg.speed = 0.3007627947059477;
    msg.speed_units = 22U;
    msg.custom.assign("UWVTZEXIPJTZEMAQGOKDYBIJLZLHVIURZAYSTGSIVOVXWGAJLFKBPEJXKUWZSNRVYRBGYOLGIHFUGAFDCPXHECOCACYHMVGWONOFTMQQZRLTJHHMRNOUBZYBXYDITFC");

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
    msg.setTimeStamp(0.3090969394917513);
    msg.setSource(24932U);
    msg.setSourceEntity(174U);
    msg.setDestination(31487U);
    msg.setDestinationEntity(49U);
    msg.timeout = 22868U;
    msg.flags = 57U;
    msg.lat = 0.4960372218660817;
    msg.lon = 0.9059275649587457;
    msg.start_z = 0.17383773432502525;
    msg.start_z_units = 11U;
    msg.end_z = 0.5363258095731863;
    msg.end_z_units = 182U;
    msg.radius = 0.8170848596468697;
    msg.speed = 0.030508137903909494;
    msg.speed_units = 165U;
    msg.custom.assign("SKAXGJLWJSTP");

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
    msg.setTimeStamp(0.9671469103290878);
    msg.setSource(60619U);
    msg.setSourceEntity(249U);
    msg.setDestination(57764U);
    msg.setDestinationEntity(44U);
    msg.timeout = 4958U;
    msg.flags = 112U;
    msg.lat = 0.643594132352705;
    msg.lon = 0.9377790925382138;
    msg.start_z = 0.049288567107898196;
    msg.start_z_units = 93U;
    msg.end_z = 0.9102554556138535;
    msg.end_z_units = 199U;
    msg.radius = 0.30143511770035003;
    msg.speed = 0.9532604338547414;
    msg.speed_units = 38U;
    msg.custom.assign("ROKUEJRDIOMUTXSKRBFXLOBVJNPJDYKTGTPUWYBWXYLPFSULJEVWFAHHFBFDMWCRSDJQPLHYUGMYRGQZXNVGZFXHFMDZNPJYQCEUACNI");

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
    msg.setTimeStamp(0.1972365690936534);
    msg.setSource(63989U);
    msg.setSourceEntity(223U);
    msg.setDestination(40756U);
    msg.setDestinationEntity(31U);
    msg.timeout = 17655U;
    msg.flags = 66U;
    msg.lat = 0.2663899775991213;
    msg.lon = 0.9586645557296395;
    msg.start_z = 0.021124634317922886;
    msg.start_z_units = 158U;
    msg.end_z = 0.8383955372882391;
    msg.end_z_units = 206U;
    msg.radius = 0.4106291646323691;
    msg.speed = 0.7526318910938791;
    msg.speed_units = 74U;
    msg.custom.assign("ZUMKFWYGRDDFFPJHOIZTVSZUMQBETXGRRTDAZBKTIJCXMKWHYZDPUMKFWMVVCJFDBXMSOOUBXEPVNATRKYUIHNRWQYNBNANZJBZLLLTGVYLPVMKWWVMPZYTOHHEWIXZHOSHISWJFKIWGO");

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
    msg.setTimeStamp(0.8581559962122965);
    msg.setSource(56698U);
    msg.setSourceEntity(42U);
    msg.setDestination(31743U);
    msg.setDestinationEntity(144U);
    msg.timeout = 47850U;
    msg.lat = 0.18203953329575973;
    msg.lon = 0.187068301073257;
    msg.z = 0.5608996255102964;
    msg.z_units = 188U;
    msg.speed = 0.46591706941115274;
    msg.speed_units = 13U;
    msg.custom.assign("FXGCENYDJLYNJPSUZLGHRQIBW");

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
    msg.setTimeStamp(0.14691507697308037);
    msg.setSource(11292U);
    msg.setSourceEntity(235U);
    msg.setDestination(21143U);
    msg.setDestinationEntity(157U);
    msg.timeout = 45280U;
    msg.lat = 0.7920991715830827;
    msg.lon = 0.4644368473342143;
    msg.z = 0.9916208740556737;
    msg.z_units = 145U;
    msg.speed = 0.7588831816434789;
    msg.speed_units = 120U;
    msg.custom.assign("FTLDEHUDRVKLIFELUEDGNFHLFJJGWSVDOYEPBYUHHEJISSBAILCGRDDZFXJSIMYLANVRDRZDNRQFKRXWMHTUKFCSWOHQWKXOPECTCZBWUTPORKMONSVZMQGHBSFFMYQGCBI");

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
    msg.setTimeStamp(0.4560290729009143);
    msg.setSource(2008U);
    msg.setSourceEntity(128U);
    msg.setDestination(29014U);
    msg.setDestinationEntity(221U);
    msg.timeout = 30667U;
    msg.lat = 0.12380675831200327;
    msg.lon = 0.06785212957614761;
    msg.z = 0.38298781259661285;
    msg.z_units = 228U;
    msg.speed = 0.992450631411555;
    msg.speed_units = 143U;
    msg.custom.assign("NPOVRIWTYDAHKNJVEDQIEJQDMKIQTPLGOYCHAANZSZ");

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
    msg.setTimeStamp(0.4154955886191868);
    msg.setSource(37426U);
    msg.setSourceEntity(199U);
    msg.setDestination(38089U);
    msg.setDestinationEntity(59U);
    msg.x = 0.4261849237176317;
    msg.y = 0.7724536925953688;
    msg.z = 0.8400436930660816;
    msg.t = 0.5439716507926227;

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
    msg.setTimeStamp(0.6545098717965694);
    msg.setSource(41322U);
    msg.setSourceEntity(123U);
    msg.setDestination(62189U);
    msg.setDestinationEntity(27U);
    msg.x = 0.5146682705954093;
    msg.y = 0.43692461007412586;
    msg.z = 0.13941186484860957;
    msg.t = 0.8258073889844594;

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
    msg.setTimeStamp(0.3181632531986538);
    msg.setSource(2689U);
    msg.setSourceEntity(229U);
    msg.setDestination(35071U);
    msg.setDestinationEntity(229U);
    msg.x = 0.03110016392060777;
    msg.y = 0.27970367488765524;
    msg.z = 0.2451921429228694;
    msg.t = 0.3377800014946424;

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
    msg.setTimeStamp(0.428228363379788);
    msg.setSource(62720U);
    msg.setSourceEntity(131U);
    msg.setDestination(12518U);
    msg.setDestinationEntity(32U);
    msg.timeout = 20243U;
    msg.name.assign("CNUWJYPJORQFDRIUSIVCSBZDYFALZMPIPFDPGKAVGLXLMLNONMBHTZJECETOQCSYOKVOAKCNWFZYMNEWJMMJXWFSVHMAZIXXOLJYUWARYGIGGPJIKLPSKBJNNUYXHDPGGTRFIUPHXIMRLTQSFSBLFXOQHZCTWZVYKRKHQGWGKVTKUEXPMRVTD");
    msg.custom.assign("IPNNNVHVLIHVIZBSQHTDYBGWRJLLQXPOGRHAMTKDABITGYMFVSXLPICKKODZSOJSYECWYHGGTPAOSPJXUYCJWDIAMUIJYWPCOZARLFARXMVNTFBHKWVTARVGNWDXOMJXARBUCREYYCNQEULJWCHKEWRZDUCWOUQABLLHZVBKISVGFDMIVQTUZZSPGDDGUMSETQMJONXTEIFXJOCHKPONYWBEUFUFANCZJKEERQXSTZFFELBQZMFPRBQKKLGQYH");

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
    msg.setTimeStamp(0.006490871109666618);
    msg.setSource(60841U);
    msg.setSourceEntity(173U);
    msg.setDestination(2318U);
    msg.setDestinationEntity(167U);
    msg.timeout = 3387U;
    msg.name.assign("UATTZFPBDGIBAMVUIJLOPAYFJNTMVYBGLNRSCXPOSUKEGJPLEYZPTYIKPHQNSYJVTTODQOWLZEQLLRXQZJQAGZJKXWNEHZWOKDKSHQHOVBDNRBDZAMZTQKCJDUR");
    msg.custom.assign("BZUSUODARSYIIBFJDCWOPSCY");

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
    msg.setTimeStamp(0.12276071676088351);
    msg.setSource(42934U);
    msg.setSourceEntity(144U);
    msg.setDestination(62673U);
    msg.setDestinationEntity(227U);
    msg.timeout = 62064U;
    msg.name.assign("ZJBEQCXQRMFGHYYUAZDZJFAUSXLWRZEFHLQAODECBVTQRAMTWCGTVUNBXYWEBWUIIKXUSSRKQNHJQILKGZGOROVJIXLKAKSPHIPNCBYZMTMGMBFRWTYQKTXGVCUGDWKJLPZAUHMKECZJFKUIPTYPNDYOMIJGWXSQRIULBQWHBVWKSYSPGNLYNXDFMVEPRCVNHBDFHNNODEESVOJTUYOCAJHIDREFRPIZCVXAFFTAXNMJOBOAQPVSPSLGEW");
    msg.custom.assign("WMEXFRTJCPHWVPXUHGZLYOGSMXBFLVIWLWHXUZNUVUTDCDRSNVASZVKPUBNFTUHVKYSBGNFGTWHASCKJBUOBZIPGORKRFMRIIYOORCMHZDFSFACPVAXFIEYLSUTJ");

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
    msg.setTimeStamp(0.43406957005288993);
    msg.setSource(44898U);
    msg.setSourceEntity(227U);
    msg.setDestination(26103U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.3582784846680651;
    msg.lon = 0.32918054142429287;
    msg.z = 0.5626158620038499;
    msg.z_units = 227U;
    msg.speed = 0.8605817935828391;
    msg.speed_units = 35U;
    msg.start_time = 0.13545801688690773;
    msg.custom.assign("GGHINQDMRTFJTZSISTAHBLOIRLRMRJRMPHJYEDBQIQBKJNRUDFRLFSGSLKDLYYEWUBQTLPKUKYACSNSDWNHAVYPOFROTJPCBEVEGCAQZWIWLOIXNEULXXAFPNIJWFZEGAK");

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
    msg.setTimeStamp(0.8553637139423652);
    msg.setSource(16784U);
    msg.setSourceEntity(69U);
    msg.setDestination(18291U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.5132372263895129;
    msg.lon = 0.5108410082014874;
    msg.z = 0.7742069652406824;
    msg.z_units = 72U;
    msg.speed = 0.5148802490317727;
    msg.speed_units = 184U;
    msg.start_time = 0.01735411279219201;
    msg.custom.assign("ICSNHRZCBRQWGSOOIQNKIYWHIZQBJSQUEXJUKXPMTQSYMSLTEIFAGJBFRLOLQMTFKYCWHADIGEERUMHSOTPIUDTXJCHFOGAVKMAPFI");

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
    msg.setTimeStamp(0.2703219687678293);
    msg.setSource(19145U);
    msg.setSourceEntity(242U);
    msg.setDestination(32328U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.3174925455761023;
    msg.lon = 0.8503134429336896;
    msg.z = 0.9633863560486434;
    msg.z_units = 143U;
    msg.speed = 0.6799230987954542;
    msg.speed_units = 79U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5597655678300837;
    tmp_msg_0.y = 0.8988163003173792;
    tmp_msg_0.z = 0.24688203272528209;
    tmp_msg_0.t = 0.35421082936167647;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 19397U;
    tmp_msg_1.off_x = 0.6621744880699981;
    tmp_msg_1.off_y = 0.5302803199807888;
    tmp_msg_1.off_z = 0.09620110728455067;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.2584286169285942;
    msg.custom.assign("SPVMJGVMZWBPZRHVCJNWDHAZARFIPENQCQGBUGBCOEQQLATOLASJNLBTFDKMYBUI");

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
    msg.setTimeStamp(0.7353072081208998);
    msg.setSource(8232U);
    msg.setSourceEntity(229U);
    msg.setDestination(59884U);
    msg.setDestinationEntity(233U);
    msg.vid = 29895U;
    msg.off_x = 0.8873802594746264;
    msg.off_y = 0.7369589126151249;
    msg.off_z = 0.11470724194734028;

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
    msg.setTimeStamp(0.5384281797264199);
    msg.setSource(17442U);
    msg.setSourceEntity(168U);
    msg.setDestination(21263U);
    msg.setDestinationEntity(3U);
    msg.vid = 39028U;
    msg.off_x = 0.8671705980677694;
    msg.off_y = 0.8594515550049969;
    msg.off_z = 0.9326732677810627;

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
    msg.setTimeStamp(0.20000840203563208);
    msg.setSource(3412U);
    msg.setSourceEntity(207U);
    msg.setDestination(18231U);
    msg.setDestinationEntity(171U);
    msg.vid = 23431U;
    msg.off_x = 0.8900128505874555;
    msg.off_y = 0.5508912883118451;
    msg.off_z = 0.4006430001128958;

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
    msg.setTimeStamp(0.975673614122612);
    msg.setSource(43589U);
    msg.setSourceEntity(122U);
    msg.setDestination(62547U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.24515885802784387);
    msg.setSource(14769U);
    msg.setSourceEntity(200U);
    msg.setDestination(60270U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.21848632052494865);
    msg.setSource(34421U);
    msg.setSourceEntity(174U);
    msg.setDestination(15708U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.9360404380058829);
    msg.setSource(31084U);
    msg.setSourceEntity(106U);
    msg.setDestination(55201U);
    msg.setDestinationEntity(220U);
    msg.mid = 59725U;

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
    msg.setTimeStamp(0.6013583430049384);
    msg.setSource(59090U);
    msg.setSourceEntity(139U);
    msg.setDestination(42285U);
    msg.setDestinationEntity(101U);
    msg.mid = 64892U;

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
    msg.setTimeStamp(0.005393992409198134);
    msg.setSource(19041U);
    msg.setSourceEntity(210U);
    msg.setDestination(13333U);
    msg.setDestinationEntity(70U);
    msg.mid = 58033U;

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
    msg.setTimeStamp(0.2554100965404089);
    msg.setSource(19056U);
    msg.setSourceEntity(102U);
    msg.setDestination(44542U);
    msg.setDestinationEntity(192U);
    msg.state = 234U;
    msg.eta = 10260U;
    msg.info.assign("MDWKLFQPXEQGYYXODOSXWVXKYTKSETIAZYOSERNQVCJIWSTFAPJDGRWMUBCNJXLNIMRNPBYPQINCEMDQYKZHRQVWYLBMWAMSMKCIXXQHQRGOZR");

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
    msg.setTimeStamp(0.21911503317795666);
    msg.setSource(65495U);
    msg.setSourceEntity(146U);
    msg.setDestination(24881U);
    msg.setDestinationEntity(100U);
    msg.state = 134U;
    msg.eta = 27140U;
    msg.info.assign("HIXKDOCIPENUIQLONBCLMVVANFMSSGQUKOCFOSKRJBTQPSDAFNSYJDADMMGPOYUTXBULFCUZQCCITNJJZHAIVGJTJOIZQLTFATYLWMEYBKVEOIYHBHRZVFEYUAZPBZVEWZRGBRSKJMZXGWNQLQMDDNLWYV");

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
    msg.setTimeStamp(0.25865031103656666);
    msg.setSource(15726U);
    msg.setSourceEntity(34U);
    msg.setDestination(10859U);
    msg.setDestinationEntity(39U);
    msg.state = 74U;
    msg.eta = 34047U;
    msg.info.assign("BROGGJUSGNXNUFJARRRXZAPVBYSCHLKAESKUTQMXDNXNSYUKFOQLZXYYGBPWTEEVHFGIMTEOXQJSNPWNRIQLOFJPPESJYFZNHVIRDGMLDFUQOPBBEMNDDYJCIMWRBBHXDGKBPWKCOUHAQKEAVPHLTLUWHCOUVWHFLKHVEFIAIKZUJSFUGXPZMXYD");

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
    msg.setTimeStamp(0.46008663856041143);
    msg.setSource(31960U);
    msg.setSourceEntity(2U);
    msg.setDestination(8745U);
    msg.setDestinationEntity(159U);
    msg.system = 31891U;
    msg.duration = 38764U;
    msg.speed = 0.12582874395450572;
    msg.speed_units = 90U;
    msg.x = 0.9171815425603459;
    msg.y = 0.014536950849120989;
    msg.z = 0.6208269091202172;
    msg.z_units = 109U;

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
    msg.setTimeStamp(0.5118784284412577);
    msg.setSource(50594U);
    msg.setSourceEntity(48U);
    msg.setDestination(28701U);
    msg.setDestinationEntity(177U);
    msg.system = 48793U;
    msg.duration = 26079U;
    msg.speed = 0.2764171689738295;
    msg.speed_units = 202U;
    msg.x = 0.4879722998871573;
    msg.y = 0.36614557720977325;
    msg.z = 0.6243118480163553;
    msg.z_units = 165U;

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
    msg.setTimeStamp(0.1564083108010208);
    msg.setSource(16895U);
    msg.setSourceEntity(56U);
    msg.setDestination(60859U);
    msg.setDestinationEntity(20U);
    msg.system = 45476U;
    msg.duration = 14381U;
    msg.speed = 0.8766967088180205;
    msg.speed_units = 14U;
    msg.x = 0.08639217561160073;
    msg.y = 0.6913009505480099;
    msg.z = 0.38266212192763516;
    msg.z_units = 186U;

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
    msg.setTimeStamp(0.934947702738821);
    msg.setSource(14491U);
    msg.setSourceEntity(220U);
    msg.setDestination(49350U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.30498712214354406;
    msg.lon = 0.5590811065399552;
    msg.speed = 0.20597241985826753;
    msg.speed_units = 222U;
    msg.duration = 40044U;
    msg.sys_a = 23408U;
    msg.sys_b = 40794U;
    msg.move_threshold = 0.9042933040265846;

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
    msg.setTimeStamp(0.774101131344111);
    msg.setSource(20128U);
    msg.setSourceEntity(84U);
    msg.setDestination(24978U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.32801013283574987;
    msg.lon = 0.6804155854702806;
    msg.speed = 0.8686957986032355;
    msg.speed_units = 120U;
    msg.duration = 47547U;
    msg.sys_a = 30683U;
    msg.sys_b = 27031U;
    msg.move_threshold = 0.2523080338954019;

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
    msg.setTimeStamp(0.26677096993300575);
    msg.setSource(25269U);
    msg.setSourceEntity(227U);
    msg.setDestination(17689U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.020751786478000356;
    msg.lon = 0.5493340034747424;
    msg.speed = 0.1318829120659405;
    msg.speed_units = 55U;
    msg.duration = 30537U;
    msg.sys_a = 34220U;
    msg.sys_b = 23409U;
    msg.move_threshold = 0.8309140231665081;

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
    msg.setTimeStamp(0.3037356343227947);
    msg.setSource(56192U);
    msg.setSourceEntity(80U);
    msg.setDestination(28985U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.4439477708203913;
    msg.lon = 0.39231243714563513;
    msg.z = 0.8356474575245924;
    msg.z_units = 31U;
    msg.speed = 0.009425604512647179;
    msg.speed_units = 135U;
    msg.custom.assign("ZJLQSYNVYUCRJNLOWUVLDBMLUKSWEMSNXQVOSVHGDPXHZUKGVCXHGMQOKKRYTFCECNEREJNRXCEQMNICTJNNNJWLBOTJRFXIYCEFUIVXGDZPJKAVLWPAPRLKHVHOHLMTGOBRRWMNGOSDKWPLPAFCJQGIIYVMFTQHCIDEOUBAIWTBUSEXXGZZRUDBAAS");

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
    msg.setTimeStamp(0.09342564229987049);
    msg.setSource(4559U);
    msg.setSourceEntity(2U);
    msg.setDestination(16565U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.9048682232213592;
    msg.lon = 0.5985777128740596;
    msg.z = 0.47091346528745137;
    msg.z_units = 241U;
    msg.speed = 0.742715969799826;
    msg.speed_units = 75U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6782478828369104;
    tmp_msg_0.lon = 0.07254582416277444;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GBQBYJHLDPYDLOMFIRWPUQJZZRWCYXNQOFGXTAGICRXYDTDQOJUOBYDXEEQKLBXLVEIKBOHQUSCUDOZEDHARAMONKJCFASAVRUKWJLGQOSTSPFGNWYYIMBGKVB");

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
    msg.setTimeStamp(0.5602596737991759);
    msg.setSource(42309U);
    msg.setSourceEntity(150U);
    msg.setDestination(5136U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.5723016274213616;
    msg.lon = 0.7189871738971967;
    msg.z = 0.015782147188238227;
    msg.z_units = 164U;
    msg.speed = 0.6350279835828007;
    msg.speed_units = 95U;
    msg.custom.assign("ETKRIQXJFHSIBXDFUMMHYAGQKGEFPDQWOVMWPNJOMWODOZIGIYOCLIDPONIYLBNXXSDRHBAMTFCMCLZJNGQBRAQRFEIZCVLUHEIDPHUCQTCRSRHBESKSBJRLYFTSTPEKAURJVWHWUHDYKHWFNMVIZVCTTGEQLYMZPZTAOZAWWAQANKQJYLYMXUKEPXZKGNYOXGKVISJPBPCAVUGSTUNUOMBQFGCXHJRELKDNXDBC");

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
    msg.setTimeStamp(0.5195569378070432);
    msg.setSource(11052U);
    msg.setSourceEntity(160U);
    msg.setDestination(64045U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.7711020529386255;
    msg.lon = 0.2367103456733436;

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
    msg.setTimeStamp(0.41283876262125874);
    msg.setSource(46294U);
    msg.setSourceEntity(97U);
    msg.setDestination(37608U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.9271517235982993;
    msg.lon = 0.9228411304197504;

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
    msg.setTimeStamp(0.9314550751806052);
    msg.setSource(26053U);
    msg.setSourceEntity(77U);
    msg.setDestination(64827U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.04814946015154031;
    msg.lon = 0.9499549900809614;

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
    msg.setTimeStamp(0.24933963761058686);
    msg.setSource(31823U);
    msg.setSourceEntity(127U);
    msg.setDestination(59923U);
    msg.setDestinationEntity(151U);
    msg.timeout = 35239U;
    msg.lat = 0.6005646216722575;
    msg.lon = 0.2762031150818882;
    msg.z = 0.7624209453975915;
    msg.z_units = 113U;
    msg.pitch = 0.2481970586292317;
    msg.amplitude = 0.46358158657928905;
    msg.duration = 51116U;
    msg.speed = 0.023502413885140183;
    msg.speed_units = 174U;
    msg.radius = 0.014111344267658588;
    msg.direction = 30U;
    msg.custom.assign("THPSCECOPNOWHXMHHMMNUQUGLOFPFXELENJESLRTHZQPCIRBKFTWZFAXEXICUVCAROFPPQYEUAJWNZNELBRAIDZAWERUYPUIGPQZQBLRYVSGQZINDHSZQFWXKTYEBXVSPKRIDMCUODYCVKDXBNJOZWY");

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
    msg.setTimeStamp(0.35182146920142576);
    msg.setSource(18601U);
    msg.setSourceEntity(216U);
    msg.setDestination(32559U);
    msg.setDestinationEntity(4U);
    msg.timeout = 12733U;
    msg.lat = 0.5480990091351142;
    msg.lon = 0.8243094438156932;
    msg.z = 0.03663809323111933;
    msg.z_units = 242U;
    msg.pitch = 0.10762491099379068;
    msg.amplitude = 0.8642677308971796;
    msg.duration = 60465U;
    msg.speed = 0.5182054863121764;
    msg.speed_units = 154U;
    msg.radius = 0.6214005270142634;
    msg.direction = 78U;
    msg.custom.assign("VYGXZTNUIFCFCHCISOZRL");

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
    msg.setTimeStamp(0.9691908133714087);
    msg.setSource(63834U);
    msg.setSourceEntity(134U);
    msg.setDestination(63263U);
    msg.setDestinationEntity(32U);
    msg.timeout = 55321U;
    msg.lat = 0.9096438801713159;
    msg.lon = 0.26488512731747615;
    msg.z = 0.8997838103421881;
    msg.z_units = 231U;
    msg.pitch = 0.6626314874204663;
    msg.amplitude = 0.7901568353541768;
    msg.duration = 16544U;
    msg.speed = 0.2467852199391949;
    msg.speed_units = 20U;
    msg.radius = 0.8743019810012839;
    msg.direction = 16U;
    msg.custom.assign("RZREABOVTCZJQGWUNHGNLJUKQYGRFLJJWSTAXYDTQAIHJTINQFBXYDJXSGDFOVKEEYVMRZVKTYXJKFHSSIXPU");

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
    msg.setTimeStamp(0.9103128752016005);
    msg.setSource(13481U);
    msg.setSourceEntity(249U);
    msg.setDestination(24201U);
    msg.setDestinationEntity(163U);
    msg.formation_name.assign("YXCYQOBYUYZWENPZZEVDMAMOUSGLSQMNVOJBSLKJDBVKPQGJBYXTJIZNGUPWGITCBWXTTTRDGAHWSGOBARXMTGTSYQQFFFNCBRNCMUKYLSXFZKSZLEENSBAIHDBOJMEZWIODZCKPDPVDHWKUYKKHIUFDZHHIVOAVGIPOWQABXREFXTPALHLKTHUEIFVRPFQJDMKJLVCIERCQQFVRUXCONWMXLHLDRJPAMMEPRXGCAEYFVGJNNWQCHSALZ");
    msg.reference_frame = 203U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 44836U;
    tmp_msg_0.off_x = 0.21766286773184607;
    tmp_msg_0.off_y = 0.10038773023860226;
    tmp_msg_0.off_z = 0.46085987379544113;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QWDOTAPQYPXHYXAQAZPJIDTKDNLKMI");

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
    msg.setTimeStamp(0.8432247566005572);
    msg.setSource(59321U);
    msg.setSourceEntity(152U);
    msg.setDestination(41134U);
    msg.setDestinationEntity(228U);
    msg.formation_name.assign("GPVDJGZGGCPMEUMENGUYAXLVKZIKYGJTLABYRIRITNXMFYONJXVRBLBNAWCXQINOVVOSJAHQZVXZOMYHXLKUFPALTDVHQYDBZSUJTZXQIBJWJNBTMQHEOKDHPMCWSAPDYKBOWWXXESGMSEJFLPALCFRBUFHPUI");
    msg.reference_frame = 242U;
    msg.custom.assign("FMPPQWCWETUNNWVNXSBLHAQUPYPQIJ");

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
    msg.setTimeStamp(0.49930362559807284);
    msg.setSource(46117U);
    msg.setSourceEntity(73U);
    msg.setDestination(53280U);
    msg.setDestinationEntity(149U);
    msg.formation_name.assign("CMDTFHATYIXOOJVTGTGVCWAOSITROMEISPAMUNEMZQPQKIQKBZBYHXDZQTWLSGHMGDLFKXDVSMWIWPTBRXSAIKHBBOLAVXCDIIFYRJPYUVFZCNJDUDWQCYRFYMTKMWXHUBEZSAEFVODFUSEFVLHWPKMRJGWNNEJHUVRJKBFXJLEZRLBOKCHQAHDWKCBAPGNALGMHKYTNSXAGUZYYEPEQRJZPPQFNZOJBVGCNLQSLNIJ");
    msg.reference_frame = 55U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39252U;
    tmp_msg_0.off_x = 0.17970103266252913;
    tmp_msg_0.off_y = 0.5201649175946569;
    tmp_msg_0.off_z = 0.6944288271232942;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZNVXEEPNOCRIYLOZBJJRDCKWMUKEWGATDJHAYSVZACQAFPXUNOWHJJLMWFSGNVFSGUHDBHFVCXEITCEYYIKMRLJRZQB");

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
    msg.setTimeStamp(0.7782177955260393);
    msg.setSource(43416U);
    msg.setSourceEntity(71U);
    msg.setDestination(27136U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("NZDODXHYNUQJNWYUNEMM");
    msg.formation_name.assign("WOQMJWAWSGSCJRTFCSDHEOOKFHTMMTAZZZQYYGRQVHJJTTWVFVAMFMNDARX");
    msg.plan_id.assign("SSZFKPABRREFPQKZ");
    msg.description.assign("NBJBTVFKOWDYLTSSNPVQIHGPZUHLTCQVEADPFCKUSHEXIAPLJYIPZNXBUTAHQYVPNMTGISUZHLZAFEFZWPSQXBAXCPMHIYADCTEJVCUFGUVRRHELZUCZXRBWTQSQWYIYWCXOJWSKDOZWRNTSMKCZDWMHNAEJKKKNOLGWGSKEOIKRMGUFGOKJFNCQEYNMUABRQBX");
    msg.leader_speed = 0.12538401754253903;
    msg.leader_bank_lim = 0.9202373450373349;
    msg.pos_sim_err_lim = 0.4173903305451362;
    msg.pos_sim_err_wrn = 0.21183130047235676;
    msg.pos_sim_err_timeout = 6666U;
    msg.converg_max = 0.179382684977745;
    msg.converg_timeout = 23732U;
    msg.comms_timeout = 36063U;
    msg.turb_lim = 0.8754898282218527;
    msg.custom.assign("LCNRMNUWPOBBCZCPAYDTDWKOCCHUZHINFTQKSRVHUDWMGEUSXLXAXMZIOQNEMRBVOOTEFGTBHESXKJIXLQITSYERJMCDDODDWRCBAKNVFIHEDNFAJWFHPBHGKVNWBATMAURUPXFUMNNJLETWFNIQYGCYXRJVZJQQXYTKLBIWDZVRJQPTQKAYVEFYPPLODVETZAOBSRGSCGWFOIGMGYIXUJUZMPBSSMSZRFSKLJYYPLGLCOUVEAAXP");

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
    msg.setTimeStamp(0.9944425787458688);
    msg.setSource(61756U);
    msg.setSourceEntity(157U);
    msg.setDestination(22415U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("ACIHUVIVMVSKYIYZGQOOAPHDNDKAIFHTRBOAVOGQRRMQGMMMZUMUEWZQVEDNKYTUJADRCLHBPPHYIPTFXXRGSXSICXMKZTZWUPYILJUJSTIXLNSVBNEBAEOYZLWEUEFGHHNNDJQDIBMWATJMULTYVQCEFDWJGPAZSNMCCVQQ");
    msg.formation_name.assign("QCVYHUOYSBXUAIEPWTOLHZGTFWPXFQEGERBPOJMYBKFFDUIDONWQLRCKXVMDJZBWPOQRQXYGDGNYNAFBMCBTVJUSFMRZRYKLTCNBMBKLVAVDLKJSPWGMEAIFHZDPEZRRWCXUVIYHWGSGWDRTQZYPZPTLPMOJMGEGISQZDNANKUCIFVFSQYCLGNILMJZAKJEAWNXASJREDRHTUKAITWJBHNOVAQSHXVCSSIOCEEIOH");
    msg.plan_id.assign("UOTJTWPLROSZDJANHRYIMSJYVGFVUKEXXYGHUPUSCYVBJITBHDCAJEHZLNGTZOQTHDFTXBCURMPRHQYQXGHUZIPADSGYUFEX");
    msg.description.assign("TKPLSDVBVSQYEVWGFVJQCALKLXEJTNRRVPAXXBFQAOGUIBRGLNOXJAYXLBPFYKEHYMMAENJVRHYHXCJAQBAKGZHNXTFOTUEZXRTFIPTNTANCVKOMSDCKGJFCPPQPNUICYMQKJGWPDDZJDOKXYIFEEZQVMRUUZOYBUEDWIWBNMLMCZAMOVJKWSUIHHYPOUIXRUSGYHD");
    msg.leader_speed = 0.8316292080594033;
    msg.leader_bank_lim = 0.9030916301204928;
    msg.pos_sim_err_lim = 0.6942104693305565;
    msg.pos_sim_err_wrn = 0.5785647266254023;
    msg.pos_sim_err_timeout = 23534U;
    msg.converg_max = 0.7050238049553147;
    msg.converg_timeout = 45843U;
    msg.comms_timeout = 13325U;
    msg.turb_lim = 0.48710430770619406;
    msg.custom.assign("BYIDMWTRLGHZUAQMSKPNEJDDNZRGUQFCHEJIROECVQJQKXHLNTEXOOWTGEOLXYQUADHXQVJXSYZMPGZGVCBXLLFGXKMVWCALAAXWTSYOBCWUBPEYEZKKKMZHFMCPDILOUQDINIBYRSJGQHSXHBLPGDKCMEANVMFJOFAZBJZTNUZWVNTDWURYFLJSHQOEHRMWARKSBPSLSKNBTCJREVWIUROQUIAKNWMSU");

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
    msg.setTimeStamp(0.8389400671887216);
    msg.setSource(58353U);
    msg.setSourceEntity(245U);
    msg.setDestination(32677U);
    msg.setDestinationEntity(98U);
    msg.group_name.assign("KMKZQJYLYEAHHECCSSIOZOJGEVQMXXIMXIITUDSNDTSDDDMCTTTOXEGAESOWYJFBPCRQHOVAOXXSPPRRZOLMVCEFQQUVAIUAPPEQMKJFWNTKPPZQURURLXYXIJJUPYKMLBIBHSKYBTSUHPQENLLUOWBRWFAHIDVGEBVKMWGVWHFJFCFKDAZRTGYJLJ");
    msg.formation_name.assign("AZEDOSKCKQSBWIEHYFJLNCAPXFGTWONWCYTFMTQHVSIOXNUVXAUDLZPNRYPKAXQBIANLQSMJHUFUTEDJOWAKSVKZPIBFPGWJXXWFQJICUHYQVDBXCMIDSUEVGUPYACGZWIFKZJDQXTWOFHSUZVLAECPHHADOALHNYEPRRKUVRDUPBOLLMJEIEYMJMRFKEPYVBMKGVLGMZIBGZGTXOLQKMBBQOGOTCNVSDZYWZJCQTEDNBRNFNRCRTSRTWR");
    msg.plan_id.assign("ELRZPSQOEUNSAOFTUFZDPATCUDRLZQVMJJBRRKWEZRUIJNOYMGPLLKULHIBNQPCUCOLXRGSBQKTVORBHLITYHNMGGJAMRCBUQIFQMLXVMJMYDCUYGNPFHFOSYXJNWKPXJCOAXHKVZHXEDBIYJTDDAWKAHCNZNGXSTZAIEBBUMBFBRFZSAHESEAEUGVNESJNTDCPVDJVQVWIYGFHHQXCSKIVYIKDLDGRZPFIEPMWTWKTGYWS");
    msg.description.assign("MYDBNHSMUOKNXLMPXNXBTODPNYHCBEYSBANQVKTWIWXUCSYDTWAQKCEUGCFBUUZTOJVNYYEHYHUJXYAFDLKUJVZHXRJVMGNXTZGIHFVXZLQZWDWHMKFEKAWSPEFBAULGFVBSUCISLICLLWZIEPANSEMPJCUMXQAJCDE");
    msg.leader_speed = 0.941677661975463;
    msg.leader_bank_lim = 0.8581506576812387;
    msg.pos_sim_err_lim = 0.8537221157882515;
    msg.pos_sim_err_wrn = 0.9641647687683319;
    msg.pos_sim_err_timeout = 49584U;
    msg.converg_max = 0.1266481529346668;
    msg.converg_timeout = 17249U;
    msg.comms_timeout = 65020U;
    msg.turb_lim = 0.7138470048819814;
    msg.custom.assign("GSVXZHYRMLAXXCIBSRDZBXUVCJPXEGVDWYBIPQNCJNTWRMYLKHUDLXJBOTZKMPNKWHFYQWSLRGBREKSLTHTRODDNPGMVQSVTJHXFJBRURYWMENOAAAEGPICANLIUZJZJATDAOZNAANUQVHKICEXFLSHMMIYRPNOYKKRHWTWFKYBBDCIFWZUELSLGJ");

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
    msg.setTimeStamp(0.5145484075328752);
    msg.setSource(35546U);
    msg.setSourceEntity(68U);
    msg.setDestination(60154U);
    msg.setDestinationEntity(75U);
    msg.control_src = 50446U;
    msg.control_ent = 17U;
    msg.timeout = 0.6430847618057963;
    msg.loiter_radius = 0.7119127311721712;
    msg.altitude_interval = 0.5416310688409081;

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
    msg.setTimeStamp(0.08586370961445966);
    msg.setSource(56473U);
    msg.setSourceEntity(36U);
    msg.setDestination(23134U);
    msg.setDestinationEntity(242U);
    msg.control_src = 16743U;
    msg.control_ent = 87U;
    msg.timeout = 0.6095402729107043;
    msg.loiter_radius = 0.5117747275862818;
    msg.altitude_interval = 0.3175866291556958;

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
    msg.setTimeStamp(0.08389565700160062);
    msg.setSource(9486U);
    msg.setSourceEntity(9U);
    msg.setDestination(29531U);
    msg.setDestinationEntity(168U);
    msg.control_src = 37258U;
    msg.control_ent = 226U;
    msg.timeout = 0.40907308282747845;
    msg.loiter_radius = 0.4466927755011546;
    msg.altitude_interval = 0.63187806008523;

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
    msg.setTimeStamp(0.6285368627523101);
    msg.setSource(17081U);
    msg.setSourceEntity(109U);
    msg.setDestination(48571U);
    msg.setDestinationEntity(240U);
    msg.flags = 89U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8294514701031389;
    tmp_msg_0.speed_units = 184U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7878794450218639;
    tmp_msg_1.z_units = 34U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8679855500306305;
    msg.lon = 0.3053940119039872;
    msg.radius = 0.33373174655683246;

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
    msg.setTimeStamp(0.8972864968768361);
    msg.setSource(3038U);
    msg.setSourceEntity(173U);
    msg.setDestination(58626U);
    msg.setDestinationEntity(47U);
    msg.flags = 33U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.640808441969455;
    tmp_msg_0.speed_units = 180U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.007948785378557921;
    tmp_msg_1.z_units = 104U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9466365460104957;
    msg.lon = 0.6988647279989295;
    msg.radius = 0.8931024508778564;

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
    msg.setTimeStamp(0.687429506220811);
    msg.setSource(2660U);
    msg.setSourceEntity(165U);
    msg.setDestination(43211U);
    msg.setDestinationEntity(143U);
    msg.flags = 166U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6004582868882513;
    tmp_msg_0.speed_units = 106U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.18910213120649377;
    tmp_msg_1.z_units = 46U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2321072255842096;
    msg.lon = 0.24516649452992179;
    msg.radius = 0.18556169205900563;

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
    msg.setTimeStamp(0.7502764332688897);
    msg.setSource(4849U);
    msg.setSourceEntity(113U);
    msg.setDestination(5191U);
    msg.setDestinationEntity(149U);
    msg.control_src = 63209U;
    msg.control_ent = 24U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 13U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8866842484167897;
    tmp_tmp_msg_0_0.speed_units = 128U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7270267263108847;
    tmp_tmp_msg_0_1.z_units = 165U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3773669037108305;
    tmp_msg_0.lon = 0.3508892823059947;
    tmp_msg_0.radius = 0.6298070652558612;
    msg.reference.set(tmp_msg_0);
    msg.state = 49U;
    msg.proximity = 164U;

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
    msg.setTimeStamp(0.03837557138050862);
    msg.setSource(972U);
    msg.setSourceEntity(75U);
    msg.setDestination(20841U);
    msg.setDestinationEntity(126U);
    msg.control_src = 33964U;
    msg.control_ent = 216U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 180U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.044243788761075264;
    tmp_tmp_msg_0_0.speed_units = 36U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6355870534220627;
    tmp_tmp_msg_0_1.z_units = 38U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9911572141183551;
    tmp_msg_0.lon = 0.6967621860013818;
    tmp_msg_0.radius = 0.6003242322349657;
    msg.reference.set(tmp_msg_0);
    msg.state = 149U;
    msg.proximity = 62U;

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
    msg.setTimeStamp(0.06322706249758481);
    msg.setSource(57811U);
    msg.setSourceEntity(184U);
    msg.setDestination(624U);
    msg.setDestinationEntity(236U);
    msg.control_src = 32845U;
    msg.control_ent = 80U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 25U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0623056920470485;
    tmp_tmp_msg_0_0.speed_units = 38U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6367430814384978;
    tmp_tmp_msg_0_1.z_units = 194U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2508554616103037;
    tmp_msg_0.lon = 0.2174519125248151;
    tmp_msg_0.radius = 0.32029963242080195;
    msg.reference.set(tmp_msg_0);
    msg.state = 53U;
    msg.proximity = 197U;

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
    msg.setTimeStamp(0.14408792582481933);
    msg.setSource(22853U);
    msg.setSourceEntity(111U);
    msg.setDestination(21907U);
    msg.setDestinationEntity(233U);
    msg.ax_cmd = 0.9168086904492856;
    msg.ay_cmd = 0.9054147112002032;
    msg.az_cmd = 0.445300673193073;
    msg.ax_des = 0.7491070513415283;
    msg.ay_des = 0.9798326324425907;
    msg.az_des = 0.17416423909256085;
    msg.virt_err_x = 0.9913891906338339;
    msg.virt_err_y = 0.945066285887086;
    msg.virt_err_z = 0.6819021510045269;
    msg.surf_fdbk_x = 0.7949040938922955;
    msg.surf_fdbk_y = 0.5861732016627945;
    msg.surf_fdbk_z = 0.1619740633288883;
    msg.surf_unkn_x = 0.45238102729952445;
    msg.surf_unkn_y = 0.1945161958046565;
    msg.surf_unkn_z = 0.9593588107525135;
    msg.ss_x = 0.771178800723157;
    msg.ss_y = 0.11433130444437989;
    msg.ss_z = 0.5655069407081549;

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
    msg.setTimeStamp(0.10780334496445232);
    msg.setSource(59936U);
    msg.setSourceEntity(220U);
    msg.setDestination(50621U);
    msg.setDestinationEntity(246U);
    msg.ax_cmd = 0.6031198785572096;
    msg.ay_cmd = 0.6857303271366797;
    msg.az_cmd = 0.364614566902972;
    msg.ax_des = 0.27062580609701437;
    msg.ay_des = 0.7436149213774855;
    msg.az_des = 0.7748133761926322;
    msg.virt_err_x = 0.6295226541785716;
    msg.virt_err_y = 0.7726081341462567;
    msg.virt_err_z = 0.2002606940829017;
    msg.surf_fdbk_x = 0.9850359747636223;
    msg.surf_fdbk_y = 0.3789430679782352;
    msg.surf_fdbk_z = 0.05466450758887276;
    msg.surf_unkn_x = 0.22784633429836754;
    msg.surf_unkn_y = 0.4521311638626567;
    msg.surf_unkn_z = 0.12607559038771865;
    msg.ss_x = 0.5620758597606479;
    msg.ss_y = 0.19495260310281426;
    msg.ss_z = 0.2774993925337589;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OYFNWKLVNLFXZDAYAGEHWXBXQAWPAAVWHYKOLQOHENMUOCTARQXEMWGCDRWVPTXTSCYHTFKGKBEUZEWJFGFXKKWZMSLJNROBQXRFRICMMBITGNVYSOWIYDPJNSSUQMVRYJJMIPSVXVIIXNE");
    tmp_msg_0.dist = 0.37222107230514967;
    tmp_msg_0.err = 0.993907225552052;
    tmp_msg_0.ctrl_imp = 0.33622324618798627;
    tmp_msg_0.rel_dir_x = 0.2828484578688487;
    tmp_msg_0.rel_dir_y = 0.43212783315857284;
    tmp_msg_0.rel_dir_z = 0.940696360388918;
    tmp_msg_0.err_x = 0.41468401266398425;
    tmp_msg_0.err_y = 0.6886548023423368;
    tmp_msg_0.err_z = 0.380948996749746;
    tmp_msg_0.rf_err_x = 0.4683454185788173;
    tmp_msg_0.rf_err_y = 0.4847735748865398;
    tmp_msg_0.rf_err_z = 0.8522254520447997;
    tmp_msg_0.rf_err_vx = 0.043703155988893405;
    tmp_msg_0.rf_err_vy = 0.15085165316281302;
    tmp_msg_0.rf_err_vz = 0.3737978561050882;
    tmp_msg_0.ss_x = 0.23348471525331504;
    tmp_msg_0.ss_y = 0.41265114588693097;
    tmp_msg_0.ss_z = 0.4378635198105426;
    tmp_msg_0.virt_err_x = 0.8309018667773393;
    tmp_msg_0.virt_err_y = 0.9880157856266376;
    tmp_msg_0.virt_err_z = 0.5913005532863927;
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
    msg.setTimeStamp(0.7525948812797482);
    msg.setSource(20034U);
    msg.setSourceEntity(194U);
    msg.setDestination(18513U);
    msg.setDestinationEntity(156U);
    msg.ax_cmd = 0.687570848940739;
    msg.ay_cmd = 0.24360500443196131;
    msg.az_cmd = 0.8209116623658568;
    msg.ax_des = 0.36893426067807855;
    msg.ay_des = 0.03361447267428164;
    msg.az_des = 0.1954026643060225;
    msg.virt_err_x = 0.16222500244613514;
    msg.virt_err_y = 0.6997363116303539;
    msg.virt_err_z = 0.5789558883884204;
    msg.surf_fdbk_x = 0.06724692985012626;
    msg.surf_fdbk_y = 0.09227877141942142;
    msg.surf_fdbk_z = 0.008666537437503341;
    msg.surf_unkn_x = 0.06054872666906386;
    msg.surf_unkn_y = 0.3028652497554941;
    msg.surf_unkn_z = 0.9560114838647439;
    msg.ss_x = 0.9641167265616604;
    msg.ss_y = 0.4142084832931522;
    msg.ss_z = 0.7402111918211443;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LCNGNHSOIMRGUETAPOQHNIWLULLWQEZMKFKHZLAJQRZTTKSVMGQVLJOXOKGEWIUWZJIZFWDDVXJCFDNPCQVWGDVZGTADSOIDIBHCBLOAHSXYXMHBTQXYYYOOKHWCRNPEVRTPWVGOWANJRARUPJFRPPIUSXZGAXSUBEHRYEVEJKVLFMBTKCUHMRJQIZANZMKBFXBCQWMCKFXEPDSPDSYYKNRQCTEMFGZDTGBPIYFNMQYCJSNXUFUOLB");
    tmp_msg_0.dist = 0.1294951275298285;
    tmp_msg_0.err = 0.8708872485025935;
    tmp_msg_0.ctrl_imp = 0.9134546576893344;
    tmp_msg_0.rel_dir_x = 0.46239679386148413;
    tmp_msg_0.rel_dir_y = 0.4312666744246969;
    tmp_msg_0.rel_dir_z = 0.7526557774427003;
    tmp_msg_0.err_x = 0.4865834640144895;
    tmp_msg_0.err_y = 0.13072574207985999;
    tmp_msg_0.err_z = 0.7154784652131168;
    tmp_msg_0.rf_err_x = 0.23151609660547734;
    tmp_msg_0.rf_err_y = 0.28201050520540194;
    tmp_msg_0.rf_err_z = 0.023361681533482836;
    tmp_msg_0.rf_err_vx = 0.5440647998189143;
    tmp_msg_0.rf_err_vy = 0.5229723939542316;
    tmp_msg_0.rf_err_vz = 0.7432002917453041;
    tmp_msg_0.ss_x = 0.4931728311378115;
    tmp_msg_0.ss_y = 0.8181908592992385;
    tmp_msg_0.ss_z = 0.3402418024937146;
    tmp_msg_0.virt_err_x = 0.07661064830858177;
    tmp_msg_0.virt_err_y = 0.12778367337695606;
    tmp_msg_0.virt_err_z = 0.6850886377521767;
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
    msg.setTimeStamp(0.5734822669377954);
    msg.setSource(9605U);
    msg.setSourceEntity(229U);
    msg.setDestination(17373U);
    msg.setDestinationEntity(67U);
    msg.s_id.assign("GSFGQWIAQZSDRVVDTJXFXHPIPRUWBIMDBLOMADZREWPRQWCJYFKKMAPQCYOEHRHCMSJKQCNBDKXQUOLKSMZGZTAOSBNTXUUOIKELPWYOOTFYWRSHHTVGHMTZGOMHHEAAJXBBWNDMYIDKVAGUJKJVDOKZTVPSLXRCQ");
    msg.dist = 0.4098142159659517;
    msg.err = 0.0777017624484102;
    msg.ctrl_imp = 0.7105699868055187;
    msg.rel_dir_x = 0.7408217727179145;
    msg.rel_dir_y = 0.6256122566584635;
    msg.rel_dir_z = 0.41538515256681896;
    msg.err_x = 0.24207516618553415;
    msg.err_y = 0.9866315959982005;
    msg.err_z = 0.20122804042286613;
    msg.rf_err_x = 0.664165617806499;
    msg.rf_err_y = 0.8798674443394114;
    msg.rf_err_z = 0.08488629828922123;
    msg.rf_err_vx = 0.7063729127612827;
    msg.rf_err_vy = 0.8313820707711499;
    msg.rf_err_vz = 0.13032154797215534;
    msg.ss_x = 0.9747529220986214;
    msg.ss_y = 0.8239393760843946;
    msg.ss_z = 0.23428673782701448;
    msg.virt_err_x = 0.20073564500482532;
    msg.virt_err_y = 0.24173700295723388;
    msg.virt_err_z = 0.03696874185747223;

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
    msg.setTimeStamp(0.46097102238738197);
    msg.setSource(28043U);
    msg.setSourceEntity(165U);
    msg.setDestination(65409U);
    msg.setDestinationEntity(112U);
    msg.s_id.assign("BQTIOJYLYKRNKMSXYLSOJNSRLAXVZOJHOQQMPGGCDRMFOESVXVZDGUYGXKTCHUGGDFWPFCQLZDFTTWYQEMUAIUGAKXEVNHXUHBDJMOEWUTBSQAEYIYXQJTEQLIGOCRRZSRVMMRYAFNBTWIYJLADZVSQAGNTBLHTCXGPZOPJXKZJBKFNLOVSNHZXEFCBFNCAIKTKVVSAERWJKWNIHFPIBMHLUUMCSU");
    msg.dist = 0.2221370612630228;
    msg.err = 0.22507109262193492;
    msg.ctrl_imp = 0.9541542327090841;
    msg.rel_dir_x = 0.9505133282681252;
    msg.rel_dir_y = 0.09669935997999635;
    msg.rel_dir_z = 0.13225491379106757;
    msg.err_x = 0.5707146568320408;
    msg.err_y = 0.6007924096628469;
    msg.err_z = 0.6505341050646233;
    msg.rf_err_x = 0.09288711383187365;
    msg.rf_err_y = 0.019221983654559294;
    msg.rf_err_z = 0.0824820981429556;
    msg.rf_err_vx = 0.2331687885924778;
    msg.rf_err_vy = 0.36241908910451637;
    msg.rf_err_vz = 0.4454954335059236;
    msg.ss_x = 0.09085064590278769;
    msg.ss_y = 0.4534893112931584;
    msg.ss_z = 0.35858047987407327;
    msg.virt_err_x = 0.5747017405568402;
    msg.virt_err_y = 0.5885896181803031;
    msg.virt_err_z = 0.7322991038222545;

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
    msg.setTimeStamp(0.21726712087632805);
    msg.setSource(7376U);
    msg.setSourceEntity(145U);
    msg.setDestination(16441U);
    msg.setDestinationEntity(15U);
    msg.s_id.assign("PZAJADAVDLQYJYYQFETMTCKQAEKMAKUSPSWSVRRKDXNCIEXANBHFXXOGGQJHITODCMUHHQLNQROIOSMFXBOYPRBUVTRXTNL");
    msg.dist = 0.21737383099872176;
    msg.err = 0.36162721708215473;
    msg.ctrl_imp = 0.07146480376157549;
    msg.rel_dir_x = 0.9172805378325649;
    msg.rel_dir_y = 0.8415993137829151;
    msg.rel_dir_z = 0.7397414843158502;
    msg.err_x = 0.9094584825244282;
    msg.err_y = 0.1248864827722378;
    msg.err_z = 0.32710746398961854;
    msg.rf_err_x = 0.7404436840415034;
    msg.rf_err_y = 0.5263796389587407;
    msg.rf_err_z = 0.9724219159964385;
    msg.rf_err_vx = 0.6904554560902908;
    msg.rf_err_vy = 0.0912529632235285;
    msg.rf_err_vz = 0.44054741551394627;
    msg.ss_x = 0.8366383842032469;
    msg.ss_y = 0.6818268603731484;
    msg.ss_z = 0.9494007564064473;
    msg.virt_err_x = 0.4217991958784606;
    msg.virt_err_y = 0.1326019452913616;
    msg.virt_err_z = 0.5270207189539678;

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
    msg.setTimeStamp(0.23917397275948993);
    msg.setSource(13480U);
    msg.setSourceEntity(147U);
    msg.setDestination(29731U);
    msg.setDestinationEntity(45U);
    msg.timeout = 15001U;
    msg.rpm = 0.04465780046692036;
    msg.direction = 147U;
    msg.custom.assign("KUWIZURNSBTSFUVPFJJOFGRGLFILPKKEJLPCIDAIWLTZAKEQOEPOTMMVNLGCAHEUIQUAZYHYGOCZJWKWJ");

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
    msg.setTimeStamp(0.6158374516704853);
    msg.setSource(1582U);
    msg.setSourceEntity(215U);
    msg.setDestination(5U);
    msg.setDestinationEntity(201U);
    msg.timeout = 61739U;
    msg.rpm = 0.5038222724145143;
    msg.direction = 155U;
    msg.custom.assign("OZUJVHMSJNOCUXSRQPMWEEZUMPPTXTIADINWVXJPBMOEQKDSINZXULCGPNAYXYGJNTHFWCLBHMKZEKTTPBDCVQUHGKNRFXGFXMETBNZHQUVYSFJCFFYQMDCMFRZMLZAKQYBGCBKGRVHVPYOOUWYLSCGDRJLUTASAACJKDIVTSPVWEGHBPHEXDWWDJHDOEAUW");

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
    msg.setTimeStamp(0.01481336510352016);
    msg.setSource(21127U);
    msg.setSourceEntity(85U);
    msg.setDestination(54323U);
    msg.setDestinationEntity(62U);
    msg.timeout = 42206U;
    msg.rpm = 0.04798510005719625;
    msg.direction = 63U;
    msg.custom.assign("QZSAOMQRYVSVHSZRFAMQZFDJBMLUIJTAZOXCPIYXOQGEXWXCUAWBNCHDIUJDSDJRVYWTSPYLJNMCIOBFPXURKCTJGIHRONDGHNVCRLTSMPOEKSUEXUVZGTIUVZXQNVKGXJFNSCTMLLFWNMTILERHTPDRUKONHBXFPAZYXFPAFLMKBVJPDWDELKZQZZTYBKMEFPKKEGYBCIIUGYQGWC");

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
    msg.setTimeStamp(0.22557844666265037);
    msg.setSource(37886U);
    msg.setSourceEntity(143U);
    msg.setDestination(52311U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("EGMUIURKZYCWCBZTYQNWAUYJRGMRTSXTXTBCWDMASQQEANAUHVSROPCKFIIMJOJGBYVZDMXLXUDPOTEJDCHJHYRGQAILCFWKHZTMGVQGQOUKXRHBTQCHSUWBAKMFKHZPNEFINOOJVGJASLPBVOCYSNDFBYJBCSNKOKVIVTZEZZUNHIDEWD");
    msg.type = 92U;
    msg.op = 234U;
    msg.group_name.assign("NQNEWLYIPF");
    msg.plan_id.assign("TOWKXVXWBJMVFIIG");
    msg.description.assign("ZNQFMCQCCHSMHSKQVCRWGZAEVLUKXFSTMNEWMCPYKAYCJRWXBLUDKYNPTZWAXSHRBYJKNOUFROWEIBGMJDOINQEUDGPLPZYDVAJPBIAOQNKZETZIYVEMHLBCWNKGYUUO");
    msg.reference_frame = 132U;
    msg.leader_bank_lim = 0.3218852323180421;
    msg.leader_speed_min = 0.3828931094071294;
    msg.leader_speed_max = 0.9563712232459213;
    msg.leader_alt_min = 0.7420015000267733;
    msg.leader_alt_max = 0.0016382292967169754;
    msg.pos_sim_err_lim = 0.18068590662769424;
    msg.pos_sim_err_wrn = 0.5160987411108916;
    msg.pos_sim_err_timeout = 17825U;
    msg.converg_max = 0.4575240055263313;
    msg.converg_timeout = 55908U;
    msg.comms_timeout = 49507U;
    msg.turb_lim = 0.8563833492396589;
    msg.custom.assign("RESBWMBEMLSGRPBBIQXSFALWOILCKFZUTRWYNKCDWECDSBQHJCQRWOPEFHUFDBTKKTGUWSVDAQBFXNEUIRILNJECMKSRLOVLGXUXKAUZOUDFVCEJNXOMWVPEARNXQRVCUHYJDGHMIBNMLWGPHRCKEBMYADTTXIPWZJLRAZXOVYHZLBPNGSPDGJZAYQZYSWGI");

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
    msg.setTimeStamp(0.18917268447558455);
    msg.setSource(54739U);
    msg.setSourceEntity(167U);
    msg.setDestination(45604U);
    msg.setDestinationEntity(205U);
    msg.formation_name.assign("CGWHDEFUSNZPSBUMGBNPCIXSRFTRKSUUAZNEXE");
    msg.type = 136U;
    msg.op = 17U;
    msg.group_name.assign("ENBOJRTZVUCJAZDURZITFFVFNGJLVEWUUPSUMNQXVBYGGRDYOLENHECHZPTJZODMJDGSOPBQKRQQMFHWMCAHTCKUMMTFJWVBRRKITEGEPYZMXWAQXBOXKHEYPDKKRFBLGBAUIKCLG");
    msg.plan_id.assign("IYPIZNFAHQIFKIAIXWYGLXUJHNXNUKX");
    msg.description.assign("IWYOUUHFWIDKSTWGPPQYIZKQHBUXZMKTVPMJGYLYQMCBGSZII");
    msg.reference_frame = 251U;
    msg.leader_bank_lim = 0.8354162399402221;
    msg.leader_speed_min = 0.9239670551675153;
    msg.leader_speed_max = 0.7965776285357188;
    msg.leader_alt_min = 0.20687530276481358;
    msg.leader_alt_max = 0.7521432326538335;
    msg.pos_sim_err_lim = 0.15248129552704004;
    msg.pos_sim_err_wrn = 0.6411282573345446;
    msg.pos_sim_err_timeout = 39957U;
    msg.converg_max = 0.404452368267333;
    msg.converg_timeout = 50232U;
    msg.comms_timeout = 9347U;
    msg.turb_lim = 0.6910509811543798;
    msg.custom.assign("QCQMIDLCOMKYNJGWOXEGEGNFTJWZHDB");

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
    msg.setTimeStamp(0.2803467283863226);
    msg.setSource(8959U);
    msg.setSourceEntity(196U);
    msg.setDestination(39393U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("WRIWOYUBBTOXQLVPMOLWCCYCIPXWLJFCSAENQLZJURFCSADAZONUTZTRCBLGHMPVVYNAPGEDXTMMSXHKWIDVTFTYMITGKICEBVUZRJLARQRFHXFEXVCORBUQFJJSZEEHSGUCWSKJKSUPXOBOBHYDHIVYYYIJAONDGDETZ");
    msg.type = 13U;
    msg.op = 249U;
    msg.group_name.assign("MVTUZZHNCIEUASSRNAUSGMIUOEIBKTATOVQ");
    msg.plan_id.assign("AZMHWPFYUPHWYGWDZIYJ");
    msg.description.assign("RSXTDZFPGQGMOFTATUCHFQXSNOMGYMUKRVYGKRXNRPMUQLECGCIDMHCEAROPZKWHXLLUALJESOYOZGPHDVDPGHDSKNYSQOIABSBBEILZXTLVICBHBZHQNTOCFHYEINPJYDVNAIMTWAJRJVFIULQRRQLUBCQWYO");
    msg.reference_frame = 85U;
    msg.leader_bank_lim = 0.025418826001069483;
    msg.leader_speed_min = 0.8946900091969759;
    msg.leader_speed_max = 0.5813466556923407;
    msg.leader_alt_min = 0.6109696033774898;
    msg.leader_alt_max = 0.2703104434975303;
    msg.pos_sim_err_lim = 0.5000684586222361;
    msg.pos_sim_err_wrn = 0.9356638717807222;
    msg.pos_sim_err_timeout = 23026U;
    msg.converg_max = 0.846771562799569;
    msg.converg_timeout = 23769U;
    msg.comms_timeout = 33544U;
    msg.turb_lim = 0.4588926323017207;
    msg.custom.assign("ZMQWRPCYHTYVIPHLIA");

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
    msg.setTimeStamp(0.33714135499161035);
    msg.setSource(25566U);
    msg.setSourceEntity(102U);
    msg.setDestination(28138U);
    msg.setDestinationEntity(233U);
    msg.timeout = 4719U;
    msg.lat = 0.8399883824913326;
    msg.lon = 0.31743263343187034;
    msg.z = 0.40563979115257665;
    msg.z_units = 63U;
    msg.speed = 0.4817632002918001;
    msg.speed_units = 243U;
    msg.custom.assign("EOVENBWYKUPQWPDIJIONUSSGGJUGMVJOIYFNVFLMFHITRTZEDUPXHFBQJFTQUCYLTILPDPDVWHMEOHUAWRKYORHATLWGMCBXCWSVYAUUOKBCRUVQOSENKZMCAGHAFTGMFKBUMSPPLWELKBLZKGGZMHHYDZEAZNBWRHOBZIPJGIQSJVSIAVRSJXQPDQNDEFFEKCTXPVJTFLCGYYVJNWQEILXCRZBANXARXQCWRI");

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
    msg.setTimeStamp(0.7279549464750414);
    msg.setSource(39459U);
    msg.setSourceEntity(143U);
    msg.setDestination(37842U);
    msg.setDestinationEntity(201U);
    msg.timeout = 38032U;
    msg.lat = 0.1447883696725456;
    msg.lon = 0.09658641847952798;
    msg.z = 0.2753548306049376;
    msg.z_units = 167U;
    msg.speed = 0.2593879972829036;
    msg.speed_units = 112U;
    msg.custom.assign("LJBTRILLIRWZTC");

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
    msg.setTimeStamp(0.6380277967941469);
    msg.setSource(45456U);
    msg.setSourceEntity(78U);
    msg.setDestination(48833U);
    msg.setDestinationEntity(57U);
    msg.timeout = 27415U;
    msg.lat = 0.0891134399814627;
    msg.lon = 0.5395534214157258;
    msg.z = 0.7663593536239408;
    msg.z_units = 62U;
    msg.speed = 0.07269874544837585;
    msg.speed_units = 221U;
    msg.custom.assign("OAXRWQQTNGCDGULFMIVFZYDJQRHJLUNPCBUMOGGWLNGOMVBZRTTQDIKYECETUHJYVSYKTRQSYHXISUOLK");

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
    msg.setTimeStamp(0.27678580956973753);
    msg.setSource(62074U);
    msg.setSourceEntity(95U);
    msg.setDestination(64668U);
    msg.setDestinationEntity(91U);
    msg.timeout = 64615U;
    msg.lat = 0.033967786270424294;
    msg.lon = 0.25042690102953513;
    msg.z = 0.5780625037680733;
    msg.z_units = 186U;
    msg.speed = 0.07109347004467925;
    msg.speed_units = 134U;
    msg.custom.assign("MLFXLPJNRVGKTGSFILOSYHHXPWMBKXCLJAOWCEAEOBPDUADBKXMWPFZRLUKWQUXORZZTCTGEFCINKPIOQUQBZKAWT");

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
    msg.setTimeStamp(0.9638286552004955);
    msg.setSource(71U);
    msg.setSourceEntity(238U);
    msg.setDestination(34716U);
    msg.setDestinationEntity(207U);
    msg.timeout = 1973U;
    msg.lat = 0.6436519450083044;
    msg.lon = 0.8864486790056509;
    msg.z = 0.06581971395889796;
    msg.z_units = 5U;
    msg.speed = 0.32882553801281167;
    msg.speed_units = 178U;
    msg.custom.assign("LTCLNGHQNXMUCZUTZQAKNUALFYTVCNJPKDURWVXGJDBNSYBYEIPDQUWREFOMHSTGCURWCLWHSIXNKSBRMOJAZDLVIBCPBEMXXPLUGGVFSGTSDJZMCEKMPKMRTGHYDCMQWJYNEBNYWPBTJZBIHY");

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
    msg.setTimeStamp(0.16068495343252798);
    msg.setSource(783U);
    msg.setSourceEntity(159U);
    msg.setDestination(23961U);
    msg.setDestinationEntity(149U);
    msg.timeout = 60347U;
    msg.lat = 0.268333384510539;
    msg.lon = 0.9947982784444654;
    msg.z = 0.9852230191659416;
    msg.z_units = 152U;
    msg.speed = 0.9303801729343775;
    msg.speed_units = 152U;
    msg.custom.assign("ENTQMXIWIDTQKROJBNIITJMSZFBTDWMBENKZOPFGDVFAZXLNXHCGWHNUCVAPBCFUXCYLDGRSDYSTIWZXKXROFPZCGFKJLWERJZXSZPFKMLLWDAASJLZRXRN");

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
    msg.setTimeStamp(0.9096409846133469);
    msg.setSource(8924U);
    msg.setSourceEntity(129U);
    msg.setDestination(5760U);
    msg.setDestinationEntity(174U);
    msg.arrival_time = 0.9302011389874315;
    msg.lat = 0.3228787290281032;
    msg.lon = 0.4522969539766827;
    msg.z = 0.37406963960553774;
    msg.z_units = 41U;
    msg.travel_z = 0.10557036922506868;
    msg.travel_z_units = 172U;
    msg.delayed = 154U;

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
    msg.setTimeStamp(0.011175076335915302);
    msg.setSource(65291U);
    msg.setSourceEntity(51U);
    msg.setDestination(45034U);
    msg.setDestinationEntity(253U);
    msg.arrival_time = 0.2602173770184163;
    msg.lat = 0.7285567603142211;
    msg.lon = 0.5864793562115064;
    msg.z = 0.2882192351495434;
    msg.z_units = 31U;
    msg.travel_z = 0.34294598977076096;
    msg.travel_z_units = 21U;
    msg.delayed = 78U;

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
    msg.setTimeStamp(0.7713121423797509);
    msg.setSource(20919U);
    msg.setSourceEntity(230U);
    msg.setDestination(4985U);
    msg.setDestinationEntity(199U);
    msg.arrival_time = 0.6000146380041119;
    msg.lat = 0.24898352153139625;
    msg.lon = 0.056403461576998715;
    msg.z = 0.6102152581230547;
    msg.z_units = 165U;
    msg.travel_z = 0.4257343054974422;
    msg.travel_z_units = 29U;
    msg.delayed = 180U;

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
    msg.setTimeStamp(0.5626020872568365);
    msg.setSource(59441U);
    msg.setSourceEntity(146U);
    msg.setDestination(42691U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.217598280535381;
    msg.lon = 0.44584000098093024;
    msg.z = 0.4667505597685826;
    msg.z_units = 249U;
    msg.speed = 0.27516956742280674;
    msg.speed_units = 86U;
    msg.bearing = 0.5004343217759312;
    msg.cross_angle = 0.8951281551316379;
    msg.width = 0.2196334856474823;
    msg.length = 0.5583973116774186;
    msg.coff = 113U;
    msg.angaperture = 0.38336525998210014;
    msg.range = 11169U;
    msg.overlap = 26U;
    msg.flags = 71U;
    msg.custom.assign("MYMVFASOIBQTHKQMHNHLDKYULVHOHOAMNEQXFQUYZCPRLZSTLFWYIRDYLBOGKKSQVNDWPNBPFOGXFATUYZRSOPUGCGPFWMRJQCLHMGCJPVVPXEXCWWZFGAWJQTZETAYLGRFBCCDTQTNCNEJAJJCRETLKOMRZSHDJEBTIHIPAGAVPUOOBIWBKSVNXOVSWRBXNUMNJBEKATVNLUIXAJRMUSPIFXCJ");

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
    msg.setTimeStamp(0.16481158863890188);
    msg.setSource(15073U);
    msg.setSourceEntity(34U);
    msg.setDestination(37586U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.7820901968750151;
    msg.lon = 0.4380275360029874;
    msg.z = 0.12285365870292175;
    msg.z_units = 4U;
    msg.speed = 0.9685441809834641;
    msg.speed_units = 156U;
    msg.bearing = 0.9972053503589636;
    msg.cross_angle = 0.3707682027120439;
    msg.width = 0.401540450900685;
    msg.length = 0.9050458194858515;
    msg.coff = 17U;
    msg.angaperture = 0.8159551555032911;
    msg.range = 45103U;
    msg.overlap = 184U;
    msg.flags = 249U;
    msg.custom.assign("SHGGUTBQURMCNEFWLYSZAFEWOMPVDGGDGEXJCJEHVKJMHZATILKIHNQABHIZOUWJMAYRNBEODZPRKXUBRLUPODODGIVQFYZJQKBPTULBYMOPXMCZ");

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
    msg.setTimeStamp(0.478086908961996);
    msg.setSource(12672U);
    msg.setSourceEntity(85U);
    msg.setDestination(33884U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.38597070296732483;
    msg.lon = 0.6191286052436874;
    msg.z = 0.6438258515150619;
    msg.z_units = 61U;
    msg.speed = 0.5896401509210727;
    msg.speed_units = 112U;
    msg.bearing = 0.9754265627755756;
    msg.cross_angle = 0.7899577310905722;
    msg.width = 0.3707306390120131;
    msg.length = 0.14421141831600515;
    msg.coff = 37U;
    msg.angaperture = 0.38491037823493424;
    msg.range = 22553U;
    msg.overlap = 55U;
    msg.flags = 139U;
    msg.custom.assign("XQNIVTFJFTGJYZDAFWOHBTUNZGKRKPFAUOVEZKQYCEPDHAWBCCRERGZIMNQPJTEJYRHGCSYSVGQBBJLVQVOTAIMTRISRUOACQWUSHABOCOGDPYUIPYITBSWZU");

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
    msg.setTimeStamp(0.5053739639817306);
    msg.setSource(28472U);
    msg.setSourceEntity(251U);
    msg.setDestination(7208U);
    msg.setDestinationEntity(37U);
    msg.timeout = 50643U;
    msg.lat = 0.7072791159170925;
    msg.lon = 0.5306510833698375;
    msg.z = 0.8666621173449277;
    msg.z_units = 201U;
    msg.speed = 0.3370184611705277;
    msg.speed_units = 33U;
    msg.syringe0 = 120U;
    msg.syringe1 = 96U;
    msg.syringe2 = 18U;
    msg.custom.assign("NOOTVICZEKDUGOXQPYSFZLMFQXPENMRKSYTVXVZDJNXCSRTCPOYMXEOLOPHGZUTJMEFMQDYKNWXABQUUIFAZSOZPTILRNURQQXGBLXARHKHKQGJCMYSVQLSOYYBTDABEUWVEDZAHCMHAGJI");

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
    msg.setTimeStamp(0.9030254287371825);
    msg.setSource(65246U);
    msg.setSourceEntity(101U);
    msg.setDestination(18013U);
    msg.setDestinationEntity(204U);
    msg.timeout = 19193U;
    msg.lat = 0.5781035398024256;
    msg.lon = 0.00890105771961891;
    msg.z = 0.12138086625433764;
    msg.z_units = 122U;
    msg.speed = 0.3567772811990937;
    msg.speed_units = 104U;
    msg.syringe0 = 234U;
    msg.syringe1 = 171U;
    msg.syringe2 = 189U;
    msg.custom.assign("LDZTYJLZYWCLIZKPDSYUZADIXJVPELMFRCWV");

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
    msg.setTimeStamp(0.6297234024036472);
    msg.setSource(56363U);
    msg.setSourceEntity(130U);
    msg.setDestination(8462U);
    msg.setDestinationEntity(121U);
    msg.timeout = 9624U;
    msg.lat = 0.30758143594775234;
    msg.lon = 0.6899257525422285;
    msg.z = 0.027329635326452606;
    msg.z_units = 153U;
    msg.speed = 0.21055412969260534;
    msg.speed_units = 156U;
    msg.syringe0 = 77U;
    msg.syringe1 = 239U;
    msg.syringe2 = 62U;
    msg.custom.assign("YEKFSYMAAHBS");

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
    msg.setTimeStamp(0.9887834927466984);
    msg.setSource(53307U);
    msg.setSourceEntity(111U);
    msg.setDestination(7325U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.8226078451726069);
    msg.setSource(55725U);
    msg.setSourceEntity(201U);
    msg.setDestination(60416U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.11563301912904522);
    msg.setSource(17618U);
    msg.setSourceEntity(73U);
    msg.setDestination(47311U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.594049991932629);
    msg.setSource(24244U);
    msg.setSourceEntity(99U);
    msg.setDestination(58531U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.8698907306432946;
    msg.lon = 0.09180434435222662;
    msg.z = 0.4725747954644858;
    msg.z_units = 149U;
    msg.speed = 0.20086155237484515;
    msg.speed_units = 51U;
    msg.takeoff_pitch = 0.0073271329363299165;
    msg.custom.assign("SPUTSPHWUOO");

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
    msg.setTimeStamp(0.42889493365306);
    msg.setSource(54244U);
    msg.setSourceEntity(52U);
    msg.setDestination(23696U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.4528214897151367;
    msg.lon = 0.22372797678658585;
    msg.z = 0.5539826905025953;
    msg.z_units = 157U;
    msg.speed = 0.6286054446665077;
    msg.speed_units = 232U;
    msg.takeoff_pitch = 0.3540696481512037;
    msg.custom.assign("ZVFQFDXURBIZIUWOCRQKUVLPBAQCHRHMLWTMNIQTSLEMPMNYSXLCZBDKAVIZIPXBGSCWQKODEGXLWDJUPMSAJPQ");

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
    msg.setTimeStamp(0.6083248522818169);
    msg.setSource(31062U);
    msg.setSourceEntity(106U);
    msg.setDestination(45377U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.7027220900755716;
    msg.lon = 0.5164335400937513;
    msg.z = 0.15392818724668644;
    msg.z_units = 141U;
    msg.speed = 0.5487100222214683;
    msg.speed_units = 44U;
    msg.takeoff_pitch = 0.0299874130403166;
    msg.custom.assign("ERLCNIICEXUMNCPVAVKXERTYWAKACOZYYMAUOLSQFJKVGFKFVKUKHGWRBBHRPAONOQEBFXHONIGAUQCHDUHQZSYCEHKOTQJ");

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
    msg.setTimeStamp(0.8373472215063169);
    msg.setSource(64843U);
    msg.setSourceEntity(73U);
    msg.setDestination(55079U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.8267764549135201;
    msg.lon = 0.7940866626505764;
    msg.z = 0.6730196823881791;
    msg.z_units = 253U;
    msg.speed = 0.46200053728250345;
    msg.speed_units = 78U;
    msg.abort_z = 0.5656331647086007;
    msg.bearing = 0.8296235584135805;
    msg.glide_slope = 33U;
    msg.glide_slope_alt = 0.44770774066888597;
    msg.custom.assign("KLVRRUJAOVWGYCWDLHIURWTPFXIVLRGSWKMBDASCCZYFQUOHUHLCXMMEHSPMTFGYLGTKESDKGISYMXRVMIHOIJBEEPQPYFECDHCMNVHTVSBODNKKFYXONZXIPFGRALWEHIKILEMMWUGQVTJVZXGXBRFVUCFTECEZNADWQPYBSCNPSSORIINTWDQFDU");

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
    msg.setTimeStamp(0.2863255410781316);
    msg.setSource(44707U);
    msg.setSourceEntity(225U);
    msg.setDestination(59309U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.8634714264028875;
    msg.lon = 0.0796147608196136;
    msg.z = 0.029773840549817687;
    msg.z_units = 30U;
    msg.speed = 0.7013315542926245;
    msg.speed_units = 135U;
    msg.abort_z = 0.8050036716949956;
    msg.bearing = 0.7858358089945262;
    msg.glide_slope = 105U;
    msg.glide_slope_alt = 0.43681926991115505;
    msg.custom.assign("QOBYTCMTWIFJPMXWDVMNKRNOCASMCWYFBGDFPMASVTNXQXTPIHFJBLFOKEQUSQQYMGLYNIQEWULVEDVERXETRPHJZZJMEIBKPLIHG");

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
    msg.setTimeStamp(0.8557052555327657);
    msg.setSource(8263U);
    msg.setSourceEntity(77U);
    msg.setDestination(36628U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.29060575355183116;
    msg.lon = 0.5612812812768811;
    msg.z = 0.4597229740877292;
    msg.z_units = 18U;
    msg.speed = 0.20294944700246553;
    msg.speed_units = 122U;
    msg.abort_z = 0.8054834616873072;
    msg.bearing = 0.6702630402843593;
    msg.glide_slope = 184U;
    msg.glide_slope_alt = 0.07369100574876386;
    msg.custom.assign("CUKUIKOTLWQFURQHKLNMYWUNEJLVDAAJAGRAEPQTEZFEIIMGUVFYDMBQPNFQICRNEBPCHMIPYJSHGLFHDIITRLKNRYZUPYGDI");

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
    msg.setTimeStamp(0.06731988792731347);
    msg.setSource(2793U);
    msg.setSourceEntity(107U);
    msg.setDestination(62599U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.010733099682998848;
    msg.lon = 0.5131962560397677;
    msg.speed = 0.8135128984790697;
    msg.speed_units = 128U;
    msg.limits = 188U;
    msg.max_depth = 0.8931221575488979;
    msg.min_alt = 0.3130469516078741;
    msg.time_limit = 0.8811594887076727;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8049660404949186;
    tmp_msg_0.lon = 0.15277004470972222;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TLXIMHGWVQKHDZLKYYPDWENVXYYFTITRDLBUOIGOSNFHCFPYQCEBZXUUIWCMILKOHJEYEWNMDPFJFMLTWGWRXKBQJBVYAEZREZEZKTEZDFWHVOLJMQSATCAOVDHDHAGPBCSSJGPSUKCGDFWMDBNRVNORMQOJAZPLOULSDNNPLTMJIMXJUGKKNGNGB");
    msg.custom.assign("WHECKANUFYLFSAXNFXJDOPFALLFAQCLSHIYWSRCTVCYXHVANPGIRNUYIUAZCQMBXDHRCTZSPJRTFTEKQXHELLOAMROQIKVQZWVCHKGJBBNWEKBEDZUOWIDTDOWJKMAQADPTDIPMEFR");

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
    msg.setTimeStamp(0.5226057695402297);
    msg.setSource(11617U);
    msg.setSourceEntity(253U);
    msg.setDestination(25143U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.5803578694277824;
    msg.lon = 0.11419534954536681;
    msg.speed = 0.8990496211569461;
    msg.speed_units = 111U;
    msg.limits = 139U;
    msg.max_depth = 0.9546081157378099;
    msg.min_alt = 0.33500100370475216;
    msg.time_limit = 0.06853839130998907;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.39478049543015803;
    tmp_msg_0.lon = 0.018250767092700904;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PMYEWYSBLPKWFUZUJGJMSCWCPDYCKUNDJPCTVWCOFYJKYUFBAXASKTO");
    msg.custom.assign("IGDKUQWZSCKZTZIFRVNYEBMRBFPVRTLGLSPDEDOYPOLCAOAGUZLZQYBHLETLRQDGVDEKCZFWIATHOUIGTEWWEUXYVSHCNFQ");

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
    msg.setTimeStamp(0.7763455913044812);
    msg.setSource(46571U);
    msg.setSourceEntity(58U);
    msg.setDestination(50049U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.618705968123986;
    msg.lon = 0.9599498164598426;
    msg.speed = 0.4609711464574838;
    msg.speed_units = 105U;
    msg.limits = 236U;
    msg.max_depth = 0.22924161533958753;
    msg.min_alt = 0.9715557558205508;
    msg.time_limit = 0.7600536035132819;
    msg.controller.assign("JYKHIIOUNAUCOGHNDHUCMEWLYVPJZCAPYKENTMNTJPUVHSBPOUMHWCQSFOEZMIASLIEHBSWVWRZKXQDBFHKHVFOCLJIYJCZXCL");
    msg.custom.assign("GMVCRBBJIWMHMQPRO");

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
    msg.setTimeStamp(0.6206139255075679);
    msg.setSource(26581U);
    msg.setSourceEntity(44U);
    msg.setDestination(62335U);
    msg.setDestinationEntity(82U);
    msg.target.assign("MSKYSDXUWFMECKQQMZQEJMCRWDGXXODXFZVMBMVEFHDVULCJDCDWTEWTBBYUTDCRFXGKEGVQEWTAANUFSHDUOOFQLNHAOGQXPXORTQAYAMBYEO");
    msg.max_speed = 0.10518814604872284;
    msg.speed_units = 216U;
    msg.lat = 0.8896101034148862;
    msg.lon = 0.9331151222411642;
    msg.z = 0.9666445165468502;
    msg.z_units = 6U;
    msg.custom.assign("MDCJIYVVAOJJCOHEWWJZJXVQNLEWZYSTIPGTIVMGODFUGIVSWDIIZRBSMRLXZRGQFJCHLYTAZTGRYVSNPJMQCXWTQMDGQLMOYKUQKATNSTQUNHBDIAAUFZZRDFQFNKNZPQGPSSKPOFFMXOXAXEQBTNBUVCWPRNLDKHITOOSCGIUVBDFRHMAVWBXUHUKXBESYZJSKGP");

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
    msg.setTimeStamp(0.028956322447148963);
    msg.setSource(31925U);
    msg.setSourceEntity(86U);
    msg.setDestination(4228U);
    msg.setDestinationEntity(193U);
    msg.target.assign("JJXTAYHYGJUERVKLUXANWIVPRUQRXQCBKWKEGULNOTRG");
    msg.max_speed = 0.1988974066184045;
    msg.speed_units = 238U;
    msg.lat = 0.48733903479657403;
    msg.lon = 0.4102498563184426;
    msg.z = 0.4890159423620293;
    msg.z_units = 103U;
    msg.custom.assign("JBNGMHCBHHMDHECBOENJGTOMPHTOBBYKJNSDQVWHDVCQUGDSZWXXQZKFXOABPAGTNZXJUCTIUE");

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
    msg.setTimeStamp(0.2187069093298316);
    msg.setSource(17270U);
    msg.setSourceEntity(181U);
    msg.setDestination(17872U);
    msg.setDestinationEntity(220U);
    msg.target.assign("CLSZGNLLKVTEZWZJCCABCSRMPUGFJXIQQMZVKYAMNJHMAIGXPQQRYDAQBOGDUDECGSKHMBHECCKPPZNBGLUIYQQGPRWTCKRAWZRHMOGBAKVVFGJINIDUQTTWFFOEYXUXJJRSTWHDBPMUHAFCWTARPZSITJ");
    msg.max_speed = 0.5689423932889145;
    msg.speed_units = 58U;
    msg.lat = 0.6976887085900723;
    msg.lon = 0.11936478819887097;
    msg.z = 0.7021040000413878;
    msg.z_units = 45U;
    msg.custom.assign("VGYJYZDMZSFBLAPOTVFXGELUUDIIEZSIDSJQQDRVU");

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
    msg.setTimeStamp(0.00022919348812844298);
    msg.setSource(58092U);
    msg.setSourceEntity(226U);
    msg.setDestination(37768U);
    msg.setDestinationEntity(94U);
    msg.timeout = 856U;
    msg.lat = 0.6239706782383111;
    msg.lon = 0.10131349639105014;
    msg.speed = 0.4473391188581405;
    msg.speed_units = 155U;
    msg.custom.assign("BDJBKDOGMVRWBQLWRKGNNCHBIOVHSMKPABHS");

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
    msg.setTimeStamp(0.26653277818184673);
    msg.setSource(32407U);
    msg.setSourceEntity(163U);
    msg.setDestination(36009U);
    msg.setDestinationEntity(106U);
    msg.timeout = 7389U;
    msg.lat = 0.7513311460865705;
    msg.lon = 0.5271753130745321;
    msg.speed = 0.5216210052943224;
    msg.speed_units = 78U;
    msg.custom.assign("DWRVZQZBIKYVGKUHLWVYQOZCXTTEBGIODCQVOIHXYARYEEFGNFUXSUCOPINCUBDRVYHCJTBHCMMPPUWAZTLRBRJBZBXFFAOAWNTLFXJJNWRSTEISKWKOVJVJIDUKSYFGWIUYSMIDZGMLRWLQIDXPZAVXSSYQKLNNERARXSXNTXUOCAVTHWEOFUVDDLLMAMGMPOPAPKMETFKWGJCG");

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
    msg.setTimeStamp(0.767095614240638);
    msg.setSource(53183U);
    msg.setSourceEntity(141U);
    msg.setDestination(15800U);
    msg.setDestinationEntity(210U);
    msg.timeout = 10647U;
    msg.lat = 0.9545609902916802;
    msg.lon = 0.9948842145262019;
    msg.speed = 0.2942288682178924;
    msg.speed_units = 177U;
    msg.custom.assign("XFNFWIRHURIFZCGJJCYMAWTDKJYOOMVLEDIOJCYTAHCMYQOYHMYXCDBIPVGPRNXQMVFZNSWQXBETLAPZETUQKZBIVVLBUEMDHDONXUKBAZVFFQVWCFXMQASEPRSPJPPZAGPKGLIJUQVONFUXC");

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
    msg.setTimeStamp(0.8386731513993761);
    msg.setSource(52405U);
    msg.setSourceEntity(50U);
    msg.setDestination(8879U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.7331433202551892;
    msg.lon = 0.9032476938256607;
    msg.z = 0.4708844262174162;
    msg.z_units = 107U;
    msg.radius = 0.5800273788847721;
    msg.duration = 43797U;
    msg.speed = 0.8665709369952429;
    msg.speed_units = 92U;
    msg.popup_period = 50801U;
    msg.popup_duration = 15963U;
    msg.flags = 2U;
    msg.custom.assign("WQUYIFRKPUZLZDOFKYPSEVQXFLHEPPBQIYROLSRQJWHAMBGXEHSTIJNPCNLDFGNJSICSKXAAWTTTMGRZJFXMGVXJGBYGBWQIZVAMKLWNCVLQYDQJMCRZHCNNFQNHRUXHKRMSDOCFUCLAOVALUBPZJATPXDYTDPVEDHGDMWNXLJPAJTBUCBVCVWGIQLSERZSSMRMHNKTUWUQIOXOZZXOUIYBEEMVYEZCUFDJTTKOED");

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
    msg.setTimeStamp(0.5393744709812011);
    msg.setSource(58613U);
    msg.setSourceEntity(103U);
    msg.setDestination(55675U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.7575854620462367;
    msg.lon = 0.9923274306052227;
    msg.z = 0.8894288936888343;
    msg.z_units = 144U;
    msg.radius = 0.1821726462220009;
    msg.duration = 11909U;
    msg.speed = 0.2048713536016541;
    msg.speed_units = 54U;
    msg.popup_period = 45134U;
    msg.popup_duration = 42124U;
    msg.flags = 223U;
    msg.custom.assign("WMAOONBCYRGIANTSZDBXUYULGWKKUVQHEPSHWXGHMEPXYEPQQRLMDXHSKFFZGFAOLTBJFNLVECWONMVSXNYNKJNPQRHVLUWXMRID");

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
    msg.setTimeStamp(0.2702441504648473);
    msg.setSource(61692U);
    msg.setSourceEntity(49U);
    msg.setDestination(12634U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.5137469273988434;
    msg.lon = 0.07293706509459308;
    msg.z = 0.9997823698699523;
    msg.z_units = 223U;
    msg.radius = 0.6304093896475108;
    msg.duration = 19785U;
    msg.speed = 0.7088071472947534;
    msg.speed_units = 20U;
    msg.popup_period = 12371U;
    msg.popup_duration = 8930U;
    msg.flags = 193U;
    msg.custom.assign("GQMSBFHIRUWXEIYZIDXGHOYCJUTOKBLDWBJTZELAPZVRORBJDSXDGGBMRNKPHKRDTCEEMBLVLMVVJCAVQMLICQHWDCHCOFQBIVPXANNURRLBCZQSZHPCDYTFAUQVFYSWFFGUDEQJAKGTNMEXREDOQXYMSPOPERLVWNFSOZITJQUHWYSUNWMPKOGZMJTI");

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
    msg.setTimeStamp(0.15282624380867416);
    msg.setSource(39524U);
    msg.setSourceEntity(231U);
    msg.setDestination(34752U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.14248576424250814);
    msg.setSource(17644U);
    msg.setSourceEntity(124U);
    msg.setDestination(13250U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.6137452014464191);
    msg.setSource(59129U);
    msg.setSourceEntity(17U);
    msg.setDestination(46934U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.12681996596792922);
    msg.setSource(49789U);
    msg.setSourceEntity(77U);
    msg.setDestination(63132U);
    msg.setDestinationEntity(232U);
    msg.timeout = 15457U;
    msg.lat = 0.4900806916397906;
    msg.lon = 0.5510055751711764;
    msg.z = 0.566127016344919;
    msg.z_units = 111U;
    msg.speed = 0.106217097941816;
    msg.speed_units = 22U;
    msg.bearing = 0.8317793411492749;
    msg.width = 0.6331739868942746;
    msg.direction = 221U;
    msg.custom.assign("CYIBSLLVVUBGBZOLXDYFQVUCMJGCPPJRPPPAYTEUIDKCQAGHEHNNIBQXZHQGDOZFHKROHOZRYESDOKAJGJPOSJJHMRHRYFMFWXHCKAJNKNBWEYXQOTWYUFJNZDXFJYSAUMNIAVDCPVISTLXXIFPVATGBSUVBWMDJKLTALVRPQCVMDSOEXGBBSTKKWWASZGGVIEZCKQPLNYZLEQCZYRTMKNAHTILMERMWOWIQWGOQTUFHXNW");

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
    msg.setTimeStamp(0.744636244437651);
    msg.setSource(36732U);
    msg.setSourceEntity(74U);
    msg.setDestination(60246U);
    msg.setDestinationEntity(13U);
    msg.timeout = 62032U;
    msg.lat = 0.8354591121373163;
    msg.lon = 0.003262323529782951;
    msg.z = 0.23349194313523713;
    msg.z_units = 155U;
    msg.speed = 0.3195615989803573;
    msg.speed_units = 175U;
    msg.bearing = 0.01409364887434883;
    msg.width = 0.4136623134466215;
    msg.direction = 105U;
    msg.custom.assign("DNHJIWJTCMTVRZFVCHXUCMPRCVGWNQRRGZQNJOIGDMKJHEBBZUDNENXM");

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
    msg.setTimeStamp(0.18354370098346762);
    msg.setSource(43089U);
    msg.setSourceEntity(250U);
    msg.setDestination(37136U);
    msg.setDestinationEntity(33U);
    msg.timeout = 36203U;
    msg.lat = 0.9098722933909509;
    msg.lon = 0.4461708743123539;
    msg.z = 0.3710180157006211;
    msg.z_units = 205U;
    msg.speed = 0.8551504180948736;
    msg.speed_units = 137U;
    msg.bearing = 0.8680910262954573;
    msg.width = 0.177052064714584;
    msg.direction = 55U;
    msg.custom.assign("JLSIXPXKFFURRQLXPEAEWFTUQWDAHETCHCJNWG");

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
    msg.setTimeStamp(0.7270658168055261);
    msg.setSource(62421U);
    msg.setSourceEntity(210U);
    msg.setDestination(2470U);
    msg.setDestinationEntity(130U);
    msg.op_mode = 128U;
    msg.error_count = 59U;
    msg.error_ents.assign("NORPZSMDTMPRZNGTVQMTBQSOIGACAWOCELREYMEKXXNVAFDZQOHIKJDSBGZPMXUYJQDGWMZKBHTYEVRWIAFCYFBCWZITEBRUESLJFLJNVMYWRPOOJSIMQIFNUXFGASFDABIECOLTZKISVCQFUHOQKEWYNKRFBBDCIPPBXQKVKZDRRPDPKHGANJDAPONCJWWJTNGSSVCHHEFYXLJUUANYIPAULLKGGETUVZHXHXGQSL");
    msg.maneuver_type = 50750U;
    msg.maneuver_stime = 0.34282112244113316;
    msg.maneuver_eta = 30731U;
    msg.control_loops = 2143773758U;
    msg.flags = 173U;
    msg.last_error.assign("KEOYBGTIDGTYQYJWZIPPMZKKXTSFFEJMXHVGCRGUNKJTXHLAUBZYGHWPEPGZCKAHUC");
    msg.last_error_time = 0.22584459785982058;

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
    msg.setTimeStamp(0.8710421008968997);
    msg.setSource(53867U);
    msg.setSourceEntity(159U);
    msg.setDestination(63747U);
    msg.setDestinationEntity(219U);
    msg.op_mode = 93U;
    msg.error_count = 34U;
    msg.error_ents.assign("FZEVQFVSJKC");
    msg.maneuver_type = 24214U;
    msg.maneuver_stime = 0.8991035807920764;
    msg.maneuver_eta = 54419U;
    msg.control_loops = 399534216U;
    msg.flags = 137U;
    msg.last_error.assign("RTWRWJLGBOEJOGTPBBZQDGQXJUFNPVWIUXGUJKFDXIMNBLMJCTHIDGOKHUCHCPQFCWHTNFSYYGSYWXZPDKBNZQSDFDGRRFSKJYZOTZEASESTKPWBJTDUOVMOXYVNGXTEJPRQKMFOVHCPBYWDVMJIE");
    msg.last_error_time = 0.7854547286885611;

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
    msg.setTimeStamp(0.7180409936672705);
    msg.setSource(10047U);
    msg.setSourceEntity(122U);
    msg.setDestination(18459U);
    msg.setDestinationEntity(229U);
    msg.op_mode = 95U;
    msg.error_count = 186U;
    msg.error_ents.assign("BQDKGFYYIYBNKXIRANHESTSUSUQMAKSIIEZUTEEKDKKOHWLEILLZCJXRXDGUFBWGVYCIQGOQCVSBBGWDCJVHHTJEOMZKLURVBHTTNPOJIDTTRWPGTBOMGJPOZQWLUEMNSWAAAHNPBSPBLMLVCMEORZAWWDECDXPOXKHXNFUNFJYVJXUVTKYZZAVYCGYMQPHKATANF");
    msg.maneuver_type = 9253U;
    msg.maneuver_stime = 0.15661742248098331;
    msg.maneuver_eta = 10519U;
    msg.control_loops = 139801577U;
    msg.flags = 134U;
    msg.last_error.assign("JZKCDHWXKUNGAVPSTERATNJJVUDSURWYBFGUVCTBUGPPCFNZHLSFHZHLOLIVDJFPETILZUMGMCODUTJYEAIULSXHNPNBLHGLVOOOQBFMIXEIQEJARFRGYYXCQEVAEOQUTQKOMEVLMZANOVXBAKKYKWBAPVBLJKXBTLKPUCZSWQGRCRMVFYSQNXOPRSCZWSDCINJCXRWMWWHDMDSPJGPSFYQ");
    msg.last_error_time = 0.44493589980692705;

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
    msg.setTimeStamp(0.7723399032136199);
    msg.setSource(15376U);
    msg.setSourceEntity(62U);
    msg.setDestination(11778U);
    msg.setDestinationEntity(190U);
    msg.type = 70U;
    msg.request_id = 23141U;
    msg.command = 10U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 1071U;
    tmp_msg_0.control_ent = 133U;
    tmp_msg_0.timeout = 0.386436270413242;
    tmp_msg_0.loiter_radius = 0.7395376834529214;
    tmp_msg_0.altitude_interval = 0.25961344116327467;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14485U;
    msg.info.assign("ROMHPQRZYQCAFLUPFNYWZVITKJCXQLODDUAUGQAIJZXINYDBFSFCGXHYNOSAMGQYNZVNGSJXBGPEJUNUWINZJDFOGOOKXIORBSDQBUPQF");

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
    msg.setTimeStamp(0.4746335241810794);
    msg.setSource(20967U);
    msg.setSourceEntity(253U);
    msg.setDestination(15723U);
    msg.setDestinationEntity(155U);
    msg.type = 149U;
    msg.request_id = 6333U;
    msg.command = 100U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.7236948576029607;
    tmp_msg_0.lon = 0.31756816745327665;
    tmp_msg_0.z = 0.6517420414641278;
    tmp_msg_0.z_units = 135U;
    tmp_msg_0.radius = 0.16588805204393076;
    tmp_msg_0.duration = 4456U;
    tmp_msg_0.speed = 0.9359174546060585;
    tmp_msg_0.speed_units = 90U;
    tmp_msg_0.custom.assign("XOCUQQSAJBIIQLPLTLFUQJMNKMSUKYFCNSLFRRKCHXCSAAGWOQPEFAINVCEPTGAZAAI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 18956U;
    msg.info.assign("JSNIAWHUXIDVILBKPERXPPGZEJEAOGBIJHJQPWYRKIZADHDYOLPECBWEQTJLZIRVDSGBMYMKXBHSVNFAYHMUVDTNQBUMPXNLXAXOSCUYQTHYACZRCRJYXFUZVIZTHAVKWVDA");

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
    msg.setTimeStamp(0.41711534077714973);
    msg.setSource(7919U);
    msg.setSourceEntity(196U);
    msg.setDestination(61764U);
    msg.setDestinationEntity(51U);
    msg.type = 77U;
    msg.request_id = 8084U;
    msg.command = 172U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("XHUJAGAULVJELIMQGTAYBSUDTASLAEBXOFKRBPJSMWQVFHBCGCTRABIAMKDAISMHYHTSFFKJZDNUJZWDXDLQWOGTZYKAUNMCZOROQUDFEJTYLTICVXTMOPDKNVPHHXHVZCLSBPFFXMBOVC");
    tmp_msg_0.max_speed = 0.48008975750491323;
    tmp_msg_0.speed_units = 248U;
    tmp_msg_0.lat = 0.4725488487322468;
    tmp_msg_0.lon = 0.5082556674424412;
    tmp_msg_0.z = 0.0662711393506753;
    tmp_msg_0.z_units = 192U;
    tmp_msg_0.custom.assign("BJXMQQTLAEMQPAEMRABYACJRMZYPVYPNIFAQLSCZNKVCCYSBDEGWGJWKKNUUR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 15067U;
    msg.info.assign("AAXPKGOMZJEFWDRMMYLRCYRHTVQIJTAVJXGOHKMUODUZKNKMBWLBGQNQLSEWPDIUZILYWGFULRGHXEBQBACYWGNZJIVXMLJQRGKKRAEAVBINXIKKYXGBHXQRTYSTOCSBNOFVGSURPPKNMYPTECULLIAEHDYSZZCKWCFDWPU");

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
    msg.setTimeStamp(0.24672066292074424);
    msg.setSource(63377U);
    msg.setSourceEntity(169U);
    msg.setDestination(28635U);
    msg.setDestinationEntity(154U);
    msg.command = 78U;
    msg.entities.assign("LROPVLGHQGQVZMPERVJUJRBFRPNJYZZFNDLYAEWYCFOYATOVMRIJTGRHZDGFMXPEJTUTVIVRZCAIYLIVWTXSZLQMSCWERIDSPJRLCKIDPNDUVQUZADNZNHXEONPDPUQUWSUCKWOOJZLQEXHDEAIAHVQWIFGINZEHPBSBXLBTOYTTYMEOWBHJSXSGWCYQIHAKUGXBFNKNEKSLGQSYCPCUMBTDAJFYW");

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
    msg.setTimeStamp(0.08400678761681235);
    msg.setSource(3977U);
    msg.setSourceEntity(211U);
    msg.setDestination(48758U);
    msg.setDestinationEntity(205U);
    msg.command = 217U;
    msg.entities.assign("AFRNCXWVFZYPOLAWQSEIJRVFOCSRIBLJMPXDAARLUHDALKQTHFFPRWPRYSNUMUBNSKWBWTOQTZTTGEEZPFDCEUUXCIXNMGAHEVCBNVSBBCAQLCONVUMQGJQPHIJQHBJUIJQIGBRLUMLPKKJIMTRGJSXZTHZBXLXFCMFZYTVSPRYUEZVWYHVACSNIRGIPYLDYKEHZGKOWNHXW");

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
    msg.setTimeStamp(0.4370273684648972);
    msg.setSource(8410U);
    msg.setSourceEntity(162U);
    msg.setDestination(5623U);
    msg.setDestinationEntity(37U);
    msg.command = 23U;
    msg.entities.assign("RAZNCVLWMXFHUKYJDZHJUVTEELOWTVBSVKAOQDVIFXIBWSVIDFELEVXIHFESPAURJBSNHHOYIVGEJBURQGQSRGRMWKMLLQVRXAGPZTLOCTYPAGJCGFOYFEBLJRRTJOWHNXGACWMNOZYNJSMZAEIMLGXADKYYFKHMCHUDKNUEKPRKNKGWOUPNBACFIFTNZLUEQYCDZINGZOVQIPYASHMCSXWMQDUDYXBZTOKBSBQUTXWPPXCRDLJSJWPP");

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
    msg.setTimeStamp(0.12396767048343793);
    msg.setSource(46599U);
    msg.setSourceEntity(127U);
    msg.setDestination(58301U);
    msg.setDestinationEntity(15U);
    msg.mcount = 245U;
    msg.mnames.assign("QWPWUAGAXNQOZVFPVVRPLZYCBXMLJHMCKIUZWZUJPQDOZERIFICEZAZSDWPBKV");
    msg.ecount = 251U;
    msg.enames.assign("MJNDPIHTXSASPXMLKVZPIGBVWYQXWVDSNMGPGIIUDIAVLKLJJPXZBFMPTGPWRKERRPLECGTCOBXMAQHVOGQELWUTYXOYJJDBCKRRUPOBCFXTUAVESKKUNSFESOJUFAQMCELVROKYBETMRIOWNNSHRJUAFJHIUJKNMKIAYQVTWHQOHLNZEXZZKZTWVGTNDHFBFGAHJWNDBPBHZCMUYYOYDGCNRSAZEFQOZWQCZLRIXFLD");
    msg.ccount = 130U;
    msg.cnames.assign("FYXBZDZIEERFMXTMYQRCPUFLRQOOUPDXYTBRVJCEEKWZGAZKHVZIKRAOEFULJDTKORPTLVEVUQKPHJMOKWKODPNKHPCFDYNRSCVDW");
    msg.last_error.assign("MOMGAZWRWQTCTFHVPYFTSABONSXVCPUCHJOWBGDLPMMNISMEIXSTAXUDUQZLUAZAHYZXRGHHQKLZKYRDFIVODFSUIOJXECVYZWV");
    msg.last_error_time = 0.9203495851085312;

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
    msg.setTimeStamp(0.10561704247497916);
    msg.setSource(5858U);
    msg.setSourceEntity(32U);
    msg.setDestination(6286U);
    msg.setDestinationEntity(49U);
    msg.mcount = 108U;
    msg.mnames.assign("RIUAWOWJGTIYFRRETFPBKZMQKTQAHXSMOAAIDBTYHYANZJCVWTZGPOYYRKDMPFBONMNBZWUDQRTJXNQEHXCUSPJMCURIMLYKJCLLCDETXVGCUPLRMSKUOSWOUFJNXXPFBLNXCPQEVSGIXFMWOZCHKRIEAOLBZCQQSNWTEDHVVBZFGSQXZZFYVADHWHMTDVSHGQRHPEMNILLFLBHVSEKGIKAUJVXYSJQUWG");
    msg.ecount = 19U;
    msg.enames.assign("QMXLMBWWBTNDTJUOWDLFYSHKMYKVGPXRSRSNMVQUKHZWACNOZXJHQVPRVVXEJSPNSCGGLJLRWYLUFPEECQNERWPZZEEEABLGTNOIBXJTAOWYCM");
    msg.ccount = 53U;
    msg.cnames.assign("VPUQIGEZQTLWGVXDBBSIQXXMYNAQCONIKAINIWEMEOWTLBURDTEZTSYOMYBRAGDGQNVXOVLJKOMWFHIKPBFLTFCJLHYTEXUJUZWNBRYSRXHLZNDHSTCUBVRHSKUEPSGAFWVIYFVUJLPNASCMHEXYPMYFXAJHOKAQOEJGIRDBQYOUVLSLBRRGGCMWQOCMVTJSFFDWWNOZJTNSDKAECRDKUAMULDACZIZFIWTRBFQKMPNHHXXPJPHKEZDGZC");
    msg.last_error.assign("CBHFLCKRAPQNXCCROSIPIGKFCYNKMRYKDGZXXHIQQZUEGPNATSNYFUGHQDURBOWGVYORWPMQDPAWOEXCBEZSRTPMSAOEIKVNZIFHVIEHDMVDLMVHCJYPKJTXUNLB");
    msg.last_error_time = 0.06510951310421553;

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
    msg.setTimeStamp(0.7367949093320862);
    msg.setSource(53217U);
    msg.setSourceEntity(5U);
    msg.setDestination(14992U);
    msg.setDestinationEntity(197U);
    msg.mcount = 203U;
    msg.mnames.assign("OUIKSZZKYOAGCJUTFKQVCWSCMZNLDPMAPNTCQYJIAPKNZXOWTGFSPHRLVPRWMOYEGTOHILUUJKQDPXOUSLHGLBBSZTMXYFIEZQBQTYJCWYPRSGTTBRXUZVXIAKRBJHMSDWMYWUKGBCRDHGNEWVVFKXBVNADDEJHMBIGFRVYXIIRXHPVLJGBJJQEMEZALWFFOOKFHQZCZXNPIQSSFTUFVTNKSEN");
    msg.ecount = 78U;
    msg.enames.assign("CITDQIADYTOSNDYNYQJIFVJVPKLVBGHHOXOOLEXKAGHFDYHUUJWRRYUSAHMZUUAUTNXOBQMSWKJABNXRNTHKREIATCBMXQERLBFPMYIGNNTJLOIBFXRLQFCKFZIQMZTYAJUPSDLUBREZZFZAWCHPGZJCGQGNSMMGFPCHUGJEHDLXSMLWPDSCRNPDZGRCXFSLNUJXIEYWPABSTVYFEOQLOBVDICMMXSEKWWGKJK");
    msg.ccount = 212U;
    msg.cnames.assign("FKHONFCHBXOSXFDZTKKLBKQYFPBXLGRQBXRSUGUJFILLNQYRQAYWWGEEOBNGADLYYZIAYEAAGHMUQMINVINHJVMUAKQBVQBCTPPZOPMDZSTNCGUVTIVLWDXKVWUAOSRDJWESOHDSTGRMWLKSCLQ");
    msg.last_error.assign("EAZQFIKDWGRTLFFKRMGYXMBPJNWPYJAHTPUBPFTQESCNIUWEKIUXORWJBPYNCVTRCABBAVBFAKUSPNBFSFIQDKBMCMDKHVCEUXSVVYKKGLJXFOXCVJQZDQMEGMYOZODZLILTXIJWNRAZHPUHSNMKGDHTOYXQEQKENJHAOBVUFIOUCEUELISTTSGWZLLDCCAGZAGAHHNQGPLMYLSHXVSMYCNWWFPYTWX");
    msg.last_error_time = 0.5062640264783956;

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
    msg.setTimeStamp(0.2758810233793466);
    msg.setSource(45573U);
    msg.setSourceEntity(11U);
    msg.setDestination(57224U);
    msg.setDestinationEntity(116U);
    msg.mask = 46U;
    msg.max_depth = 0.47980504628904863;
    msg.min_altitude = 0.697720260299318;
    msg.max_altitude = 0.1744252186898244;
    msg.min_speed = 0.24996561169233744;
    msg.max_speed = 0.7392800779352033;
    msg.max_vrate = 0.3254816462355158;
    msg.lat = 0.9765516611656048;
    msg.lon = 0.08441611277205585;
    msg.orientation = 0.8867101915057041;
    msg.width = 0.35335302553020476;
    msg.length = 0.5390257894474615;

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
    msg.setTimeStamp(0.7993585870564425);
    msg.setSource(37868U);
    msg.setSourceEntity(229U);
    msg.setDestination(63761U);
    msg.setDestinationEntity(185U);
    msg.mask = 168U;
    msg.max_depth = 0.17899223965423627;
    msg.min_altitude = 0.6983900252033043;
    msg.max_altitude = 0.4645939325872479;
    msg.min_speed = 0.6127039777837723;
    msg.max_speed = 0.35215320819044327;
    msg.max_vrate = 0.5612469632405676;
    msg.lat = 0.263690616606724;
    msg.lon = 0.3646719598071836;
    msg.orientation = 0.8570485635798913;
    msg.width = 0.21687684525504036;
    msg.length = 0.74359124824124;

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
    msg.setTimeStamp(0.5743847418876232);
    msg.setSource(2125U);
    msg.setSourceEntity(36U);
    msg.setDestination(15262U);
    msg.setDestinationEntity(234U);
    msg.mask = 116U;
    msg.max_depth = 0.8708776333042154;
    msg.min_altitude = 0.057750099305025504;
    msg.max_altitude = 0.4098479653185557;
    msg.min_speed = 0.5762436916330617;
    msg.max_speed = 0.2873006524486489;
    msg.max_vrate = 0.3851140853535494;
    msg.lat = 0.14626485417493285;
    msg.lon = 0.9077226346936887;
    msg.orientation = 0.2582495284838364;
    msg.width = 0.503526027291457;
    msg.length = 0.06059945548380874;

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
    msg.setTimeStamp(0.02258750254522579);
    msg.setSource(1491U);
    msg.setSourceEntity(159U);
    msg.setDestination(20784U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.8710418224970666);
    msg.setSource(53334U);
    msg.setSourceEntity(156U);
    msg.setDestination(29224U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.6697222628582673);
    msg.setSource(11643U);
    msg.setSourceEntity(141U);
    msg.setDestination(28792U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.5773032711807415);
    msg.setSource(14031U);
    msg.setSourceEntity(202U);
    msg.setDestination(34974U);
    msg.setDestinationEntity(162U);
    msg.duration = 44436U;

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
    msg.setTimeStamp(0.8443646403928012);
    msg.setSource(60826U);
    msg.setSourceEntity(144U);
    msg.setDestination(24257U);
    msg.setDestinationEntity(98U);
    msg.duration = 22724U;

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
    msg.setTimeStamp(0.7898363581632009);
    msg.setSource(13434U);
    msg.setSourceEntity(176U);
    msg.setDestination(31293U);
    msg.setDestinationEntity(49U);
    msg.duration = 20840U;

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
    msg.setTimeStamp(0.6891750171146297);
    msg.setSource(21917U);
    msg.setSourceEntity(254U);
    msg.setDestination(13238U);
    msg.setDestinationEntity(233U);
    msg.enable = 250U;
    msg.mask = 2993707996U;
    msg.scope_ref = 3266768248U;

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
    msg.setTimeStamp(0.5473515092221319);
    msg.setSource(27933U);
    msg.setSourceEntity(101U);
    msg.setDestination(2505U);
    msg.setDestinationEntity(189U);
    msg.enable = 3U;
    msg.mask = 165128380U;
    msg.scope_ref = 3095190203U;

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
    msg.setTimeStamp(0.015141499994082097);
    msg.setSource(29943U);
    msg.setSourceEntity(160U);
    msg.setDestination(11115U);
    msg.setDestinationEntity(95U);
    msg.enable = 117U;
    msg.mask = 2313715173U;
    msg.scope_ref = 1063882854U;

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
    msg.setTimeStamp(0.33934169820232196);
    msg.setSource(20011U);
    msg.setSourceEntity(24U);
    msg.setDestination(3813U);
    msg.setDestinationEntity(202U);
    msg.medium = 204U;

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
    msg.setTimeStamp(0.28930642675936047);
    msg.setSource(135U);
    msg.setSourceEntity(185U);
    msg.setDestination(2999U);
    msg.setDestinationEntity(79U);
    msg.medium = 62U;

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
    msg.setTimeStamp(0.024103406407384287);
    msg.setSource(36683U);
    msg.setSourceEntity(148U);
    msg.setDestination(56935U);
    msg.setDestinationEntity(163U);
    msg.medium = 127U;

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
    msg.setTimeStamp(0.6363796139679166);
    msg.setSource(40328U);
    msg.setSourceEntity(153U);
    msg.setDestination(50642U);
    msg.setDestinationEntity(224U);
    msg.value = 0.09519006676761466;
    msg.type = 232U;

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
    msg.setTimeStamp(0.8214269247036611);
    msg.setSource(37903U);
    msg.setSourceEntity(116U);
    msg.setDestination(8738U);
    msg.setDestinationEntity(44U);
    msg.value = 0.21950343030333153;
    msg.type = 208U;

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
    msg.setTimeStamp(0.6225049819986054);
    msg.setSource(20639U);
    msg.setSourceEntity(176U);
    msg.setDestination(43759U);
    msg.setDestinationEntity(235U);
    msg.value = 0.34126608722280727;
    msg.type = 92U;

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
    msg.setTimeStamp(0.6475075809917331);
    msg.setSource(53927U);
    msg.setSourceEntity(76U);
    msg.setDestination(14728U);
    msg.setDestinationEntity(35U);
    msg.possimerr = 0.9502191001801621;
    msg.converg = 0.7606546365259138;
    msg.turbulence = 0.5458978857281583;
    msg.possimmon = 151U;
    msg.commmon = 66U;
    msg.convergmon = 195U;

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
    msg.setTimeStamp(0.3170648105224557);
    msg.setSource(29564U);
    msg.setSourceEntity(101U);
    msg.setDestination(20753U);
    msg.setDestinationEntity(128U);
    msg.possimerr = 0.16744765772147496;
    msg.converg = 0.9916183700661254;
    msg.turbulence = 0.11743799699936752;
    msg.possimmon = 34U;
    msg.commmon = 122U;
    msg.convergmon = 14U;

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
    msg.setTimeStamp(0.9154197913024091);
    msg.setSource(44703U);
    msg.setSourceEntity(180U);
    msg.setDestination(18153U);
    msg.setDestinationEntity(141U);
    msg.possimerr = 0.7064890658084554;
    msg.converg = 0.5634698662163601;
    msg.turbulence = 0.09881267108865344;
    msg.possimmon = 248U;
    msg.commmon = 18U;
    msg.convergmon = 137U;

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
    msg.setTimeStamp(0.18982460729094386);
    msg.setSource(17364U);
    msg.setSourceEntity(207U);
    msg.setDestination(33430U);
    msg.setDestinationEntity(9U);
    msg.autonomy = 15U;
    msg.mode.assign("OQQHTLIOHMVULEYJGQVTPECCXBOSSJZBJEHZNJFOAGJPIXAEQPDNEHWUBYUWCQLZPNQXHGHJEBPCLPFVVEFFRAWASMRXLTZLIHCCWKYDGJQWDDMNSLYZXAAMXUTNMORXJVY");

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
    msg.setTimeStamp(0.1108546624578659);
    msg.setSource(7997U);
    msg.setSourceEntity(74U);
    msg.setDestination(55566U);
    msg.setDestinationEntity(40U);
    msg.autonomy = 245U;
    msg.mode.assign("WQZOUVEWGVCOEZBSDXRLASPEBKYHACWJCIMUVZOIWFPNOUSDIYHTNXXIWMKRPKWMGRPFNKEYARUYGJULAPLXTGRYBVTQDWQMJRYMM");

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
    msg.setTimeStamp(0.7415457911550196);
    msg.setSource(39360U);
    msg.setSourceEntity(178U);
    msg.setDestination(25372U);
    msg.setDestinationEntity(246U);
    msg.autonomy = 112U;
    msg.mode.assign("NMEYTMUAFYBIXETFYVFEUKINSHEEBIVRPGAFRXDCYVKBFSMDIEAYZUWDKCONWOHDZWGQNARYRJHOXOMBBVPSIJMJEBNKVOUYKOHXXNMTTGCSQXSBGLWHFMAUKLTZIWNFPHWDAQMPZCXDRVPZFSJIOYUHDLVSGTUEGPWDZJKUZJVCLBQDJRHRKOXJM");

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
    msg.setTimeStamp(0.21668687061794334);
    msg.setSource(41886U);
    msg.setSourceEntity(18U);
    msg.setDestination(48663U);
    msg.setDestinationEntity(249U);
    msg.type = 186U;
    msg.op = 25U;
    msg.possimerr = 0.0019101399685288456;
    msg.converg = 0.6029569330857111;
    msg.turbulence = 0.12517147218138636;
    msg.possimmon = 41U;
    msg.commmon = 139U;
    msg.convergmon = 236U;

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
    msg.setTimeStamp(0.9373794335143538);
    msg.setSource(64038U);
    msg.setSourceEntity(136U);
    msg.setDestination(35989U);
    msg.setDestinationEntity(249U);
    msg.type = 22U;
    msg.op = 36U;
    msg.possimerr = 0.5951424716916555;
    msg.converg = 0.48169118902903585;
    msg.turbulence = 0.2729944491116919;
    msg.possimmon = 58U;
    msg.commmon = 179U;
    msg.convergmon = 215U;

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
    msg.setTimeStamp(0.0701019691671615);
    msg.setSource(56615U);
    msg.setSourceEntity(57U);
    msg.setDestination(25426U);
    msg.setDestinationEntity(163U);
    msg.type = 216U;
    msg.op = 26U;
    msg.possimerr = 0.45153654607429017;
    msg.converg = 0.5523878932449844;
    msg.turbulence = 0.21885769957514933;
    msg.possimmon = 47U;
    msg.commmon = 54U;
    msg.convergmon = 244U;

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
    msg.setTimeStamp(0.3959576870528857);
    msg.setSource(56325U);
    msg.setSourceEntity(187U);
    msg.setDestination(5181U);
    msg.setDestinationEntity(216U);
    msg.op = 162U;
    msg.comm_interface = 72U;
    msg.period = 21341U;
    msg.sys_dst.assign("FUDCMIVYHQFQJLVAIPXUHAUTAWNGUDCDLJORNPKNNHIZQMDFHHKSEZPQMJWLDGPZMKQCFGBAYMTRTRKJSPCXWZRSOFSHRHNJETBKNUEXWWSYAZVAZUMAMGHTAEFSJGBLRGSFFJKCWEENNIPGOLKIKTJMGVVLLLORZBIUEXINBXSTFBPPSTDWCAYHIMWVVZLKYKOBDORTTXQGIZCCYVEXZSBUFDUQOXOJVXQUEBWYWYBC");

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
    msg.setTimeStamp(0.019746629834059504);
    msg.setSource(34636U);
    msg.setSourceEntity(141U);
    msg.setDestination(43096U);
    msg.setDestinationEntity(232U);
    msg.op = 4U;
    msg.comm_interface = 95U;
    msg.period = 46627U;
    msg.sys_dst.assign("HKWXXPKSYJWEVEKPRLDDHRYJOWDSBMSOFSHHCUPKSIMNPRJIIJYTFPOKDVMPUVITBPRDACTUFGAEGAQQQTGLSAUZICRCEROUTAJINONHJNHYELYVLT");

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
    msg.setTimeStamp(0.6300065090100372);
    msg.setSource(11086U);
    msg.setSourceEntity(140U);
    msg.setDestination(40623U);
    msg.setDestinationEntity(13U);
    msg.op = 151U;
    msg.comm_interface = 250U;
    msg.period = 47082U;
    msg.sys_dst.assign("HCFWMQGCFRVQWHVXXMGWDFHUTTLNXWXTVPEQMCOQZHPSRXEYSLLKSGKJRDWZZJMRNUNQSYSVBR");

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
    msg.setTimeStamp(0.08711823844887434);
    msg.setSource(7023U);
    msg.setSourceEntity(178U);
    msg.setDestination(10145U);
    msg.setDestinationEntity(216U);
    msg.stime = 1645835409U;
    msg.latitude = 0.03578145697827795;
    msg.longitude = 0.05944682922666045;
    msg.altitude = 37666U;
    msg.depth = 34109U;
    msg.heading = 11765U;
    msg.speed = 17754;
    msg.fuel = 37;
    msg.exec_state = -118;
    msg.plan_checksum = 9932U;

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
    msg.setTimeStamp(0.35766919993667967);
    msg.setSource(29839U);
    msg.setSourceEntity(220U);
    msg.setDestination(10350U);
    msg.setDestinationEntity(130U);
    msg.stime = 481947997U;
    msg.latitude = 0.7414911433447974;
    msg.longitude = 0.8568363903345171;
    msg.altitude = 2300U;
    msg.depth = 42694U;
    msg.heading = 20746U;
    msg.speed = -32599;
    msg.fuel = -121;
    msg.exec_state = 49;
    msg.plan_checksum = 3008U;

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
    msg.setTimeStamp(0.13766537155649894);
    msg.setSource(27998U);
    msg.setSourceEntity(17U);
    msg.setDestination(48013U);
    msg.setDestinationEntity(75U);
    msg.stime = 12210015U;
    msg.latitude = 0.21709627000099652;
    msg.longitude = 0.11675126602420494;
    msg.altitude = 39138U;
    msg.depth = 14797U;
    msg.heading = 13823U;
    msg.speed = 4829;
    msg.fuel = -118;
    msg.exec_state = -91;
    msg.plan_checksum = 62064U;

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
    msg.setTimeStamp(0.5125639842688958);
    msg.setSource(23917U);
    msg.setSourceEntity(243U);
    msg.setDestination(39781U);
    msg.setDestinationEntity(3U);
    msg.req_id = 64937U;
    msg.comm_mean = 10U;
    msg.destination.assign("FLYKBNZZJSIAXZXOGLEUPQUIWCOUGZVKYTOZQDCFMPDQMNSZFHRCXMWVCJVPMKGATMWTPUKBNHNIGWEV");
    msg.deadline = 0.43071381458881486;
    msg.range = 0.08168205602962109;
    msg.data_mode = 5U;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 129U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("VWKYVJHMNNBHNRJDSUWSUTYUDRRJNOFARMHNMGAEBNZHWLLTDZOOYJKXQVLKPLSDLKGCIWGDODWAAHXXVQEVPQRVJWQPIBIFPFTSZCCVTYMCUJEUBRIOUQJFWZFCGTNZTMQORNMEAPGMCSGPWZFBQGERFAWOLYLJIGXUVMAXKRCELRASKIVHBBIPZ");
    const signed char tmp_msg_1[] = {74, -51, -75, 33, -94, -120, -4, 70, 21, -98, -23, -104, -2, -33, 37, -119, -71, -7, -119, -84, -46, 28, -80, 25, -80, -54, 2, 26, 11, -4, 116};
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
    msg.setTimeStamp(0.7920300193875851);
    msg.setSource(15961U);
    msg.setSourceEntity(46U);
    msg.setDestination(12520U);
    msg.setDestinationEntity(85U);
    msg.req_id = 17468U;
    msg.comm_mean = 126U;
    msg.destination.assign("QDOYWTTQVYXWDPXKBIHWJGWBEQJUCRTPPYXIJUVKVBYAFVANMPMHQFKNZLYGXUSGDVLSLNHBGEMRTIKEGYWCZZRULHJSUYPKOOKGJICLMCAN");
    msg.deadline = 0.9195991581299903;
    msg.range = 0.43017138940105526;
    msg.data_mode = 124U;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 930031562U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KPGYCBTPQGTOXJDWFHKSNAEEQIAXFNASHHUBAKVHUTOBGEXPGCKNAYJUQRBZMWDKMISKRVTDPGYTWWQBDEELSLYHOGMFLDPQLLIARKJFTXKOOXBDKFMSGLOAGNJZWHMBUEEMWXNFMZZVPARFXCZIXRNBSEILCQCYZFRTVTJHPWRJIXZOUCYFURNCMTQMISHVDQKRCZVRZUWTVXBCLOUNPULSPJBGSIEECNYADHVOGYWHJIQYQVWVNYDD");
    const signed char tmp_msg_1[] = {35, 10, -40, 11, 106, 75, -69, -78, -111, 116, -52, 115, 7, -40, 32, 104, -106, -66, 19, -7, -7, 75, -20, -121, 20, 61, -32, -120, -51, 82, -120, 118, 27, -67, 55, 85, 89, 72, -61, 83, 76, -72, 8, -109, -102, -27, 12, 58, -90, 61, 93, -65, -126, -79, -25, -47, -45, -83, 42, 21, 31, -33, 64, 72, 87, 87, 104, 25, 22, -24, 94, 59, 53, 69, -123, 40, 49, 12, -30, 115, -98, -70, -63, -112, -118, 74, 95, -66, 7, -39, -21, -10, 102, -66, -28, -45, -102, -101, 1, 57, -53, -110, -95, 55, 126, -71, 5, 114, 115, 104, 97, 31, 121, -4, -87, 58, -49, 103, -55, -38, -86, 94, 85, -100, 76, 83, -90, 110, 28, 115, -115, 67, 33, 31, 59, 70, -94, 114, -49, -118, -76, 31, -106, 71, 61, -38, -93, 58, 4, 19, -70, -20, -2, -125, -24, -70, -18, -13, 114, -56, 25, -83, 119, 64, -21, -1, -96, 94, -34, 29, -118, -21, -83, 28, 2, -111, -73, 92, 57, -14, 43, 84, 124, 10, 33, -10, 23, 48, -122, 92, -104, -31, 63, -40, 112, 73, 70, -124, -57, -124, 78, 27, -22, -123, 0, 21, 113};
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
    msg.setTimeStamp(0.5661184619324535);
    msg.setSource(6800U);
    msg.setSourceEntity(200U);
    msg.setDestination(32459U);
    msg.setDestinationEntity(83U);
    msg.req_id = 49206U;
    msg.comm_mean = 152U;
    msg.destination.assign("NKEHODSACOTZLGJUZVLRMIACJZZOISNOCBZJHRTGRACAPMHDTBUIOPOUYXWKBPYYRGOKDAAINWNPTHAZLRFFHRDQRLYFPPDSFQQGJUJXFUFMCJCPKBLXJDGVTHCWCWQPBCMXVUKUGXBDGNKNQSTVGCYWQVSMGWSBALEISUVEPXMMNSQODNOYQZKYKIF");
    msg.deadline = 0.30948068391690475;
    msg.range = 0.3481892527550714;
    msg.data_mode = 82U;
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 3U;
    tmp_msg_0.htime = 0.4339520341606441;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("RGIYRJKPZKL");
    const signed char tmp_msg_1[] = {-80, -106, -82, -90, 74, -123, 116, 101, 33, -87, 5, -4, -29, 58, 125, 57, 124, -23, 93, -76, 116, -56, 55, 44, 41, 118, 65, 18, -34, 97, 31, 111, 47, -7, -72, -29, -92, -18, -8, 50, -84, -17, -115, 35, -6};
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
    msg.setTimeStamp(0.2296242020678212);
    msg.setSource(49397U);
    msg.setSourceEntity(226U);
    msg.setDestination(64295U);
    msg.setDestinationEntity(83U);
    msg.req_id = 54036U;
    msg.status = 254U;
    msg.range = 0.15811061225577183;
    msg.info.assign("TPUDOFJNTHSLWHHRHFDJCTGZBRICCAMHIKSBRTGRCTUJQJZSEUNXVEKRAKZPXCGKSPNVTRJEVZRGNGHADFOVNXAFUXXHWZOBIVURZMEXMIHBICAWNEEWQECCGFMQQLTDYIOBWYWUWJMNIAAFPFVVCDLKSLBDOMAPXUDBETK");

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
    msg.setTimeStamp(0.9876909090699036);
    msg.setSource(41569U);
    msg.setSourceEntity(76U);
    msg.setDestination(14358U);
    msg.setDestinationEntity(68U);
    msg.req_id = 33879U;
    msg.status = 21U;
    msg.range = 0.7508359326220306;
    msg.info.assign("QTTVUFTIDSKRNDRHZHHTZXCXYKGMQNOVPLQNFASCYMVHENGKMXIXAURJLBICQKRBMZITBMKYUREAMJNWBBLJEOZUAVKMUIABXOVQSSBHQYMXEPDLNLESCNJTBDWTPOHGCOWVXGKVKEQMGDC");

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
    msg.setTimeStamp(0.0027605632633006527);
    msg.setSource(6424U);
    msg.setSourceEntity(32U);
    msg.setDestination(63398U);
    msg.setDestinationEntity(199U);
    msg.req_id = 9694U;
    msg.status = 44U;
    msg.range = 0.2944619488037863;
    msg.info.assign("GZPBHFUMEAHXKULTFXZTCALIOPFRHLUISNYXDGTEBCPETGGKGLREFSZDJLWCBXSSGAQJXPIRZNTRMMAIYYMAPYVSQJVICQNZKKGJVQYYPRWTYIUULZFXDDVHRQASODVLGAWDKCMKNUBWJVOTBKARHUGQN");

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
    msg.setTimeStamp(0.843056414554861);
    msg.setSource(47232U);
    msg.setSourceEntity(154U);
    msg.setDestination(25298U);
    msg.setDestinationEntity(142U);
    msg.req_id = 59257U;
    msg.destination.assign("AYYKCTFKOXZMJSXOHXKEDMXUWPEATZCGHBDMEFISVJ");
    msg.timeout = 0.2351593248591073;
    msg.sms_text.assign("JSJUEMWXROMBUPVGCYOBEBOIFDIYKVQEGXYVTLQFSGLTCZJLWPDRSWN");

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
    msg.setTimeStamp(0.060111439623927954);
    msg.setSource(48494U);
    msg.setSourceEntity(250U);
    msg.setDestination(62178U);
    msg.setDestinationEntity(26U);
    msg.req_id = 26164U;
    msg.destination.assign("LTYHJYJSOAHZZQBCCGKOAMFCFUVZFEBTXKWRDVEHIDBNHNPCALOPIIWTXQPPHCRSAMZOBVUJFPIPERWCCRSYBRQIKUGIRHAUGMIJOJNWSFHYJNRRVRPJYAJDWMVNFVBBAOEWZNQZMUYPGHTDLQLN");
    msg.timeout = 0.17467534131831275;
    msg.sms_text.assign("QRNHZWCBYZYATDUGJESZAUYZHDVHKSXZHF");

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
    msg.setTimeStamp(0.8318112444114866);
    msg.setSource(42370U);
    msg.setSourceEntity(228U);
    msg.setDestination(31010U);
    msg.setDestinationEntity(17U);
    msg.req_id = 65251U;
    msg.destination.assign("PTSKSJSFLHQJTWMQQGOKGMGOKCZUBPCLONRIXAPKXXLUODAHRHDLQTWHOXXJEUAJFEZRMLNMWVFSEPGHYGLSEYRSFJRPNABMURBFJEUXYDBKVHWYYUGIJZIDANHQFDZJZUKVQHTQWNIFOBVCCECEXVTAJZAZKAPAIOMYWLQVWVWDDXKMSQIFNTKDZSBYOXNLTUEPPCEVKBLQAHSVLJPRYBUOWDFBIXDTEBPGYOVZCFMIGMC");
    msg.timeout = 0.22910993785056122;
    msg.sms_text.assign("UFQRDPLMNDIPFAWBZGBYVZECFBTWXVSSXWNYVDRGRXKLNIQPIRVDOHTOJLYDNXDKQJUYOMKVKRHZUUKFJYHUALNCB");

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
    msg.setTimeStamp(0.7946816311707992);
    msg.setSource(52273U);
    msg.setSourceEntity(2U);
    msg.setDestination(50262U);
    msg.setDestinationEntity(36U);
    msg.req_id = 57377U;
    msg.status = 200U;
    msg.info.assign("KBYKRXEXOKNHUOSVQAAZMDLULPCBROPCESQMZLDTXA");

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
    msg.setTimeStamp(0.7279074522040113);
    msg.setSource(32503U);
    msg.setSourceEntity(147U);
    msg.setDestination(48019U);
    msg.setDestinationEntity(149U);
    msg.req_id = 4038U;
    msg.status = 213U;
    msg.info.assign("HKVTTXZQWNJZWGWPBMLUCECAMXWVXVRWJGWXQRWKPIELMSJBJFFMCOVMNOSQKONISRLAPZTWXDFYBGSYYRXXJHNLTOGB");

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
    msg.setTimeStamp(0.08904923397586217);
    msg.setSource(13364U);
    msg.setSourceEntity(221U);
    msg.setDestination(19667U);
    msg.setDestinationEntity(48U);
    msg.req_id = 53228U;
    msg.status = 16U;
    msg.info.assign("LCSDDRHPWKEDLNYLPAGTHTQCNHVMINQWAIPEQEKHGNKNSYRBLMTLEHJIQXJIHURVDVFHCOYZUBFQCAWXVMKSBOESGZPNKSUZVODKJURUBXCXDTZRWOVSFYQGCATXGXBVPPMHEMBSMFACTKIKTFWWJBOIMUIZETRHWETILYBZONXSLRAVJQDILRMWNUZQGQAPXZUZODUNCEEMBOLFRVPTGYBGYJJFYM");

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
    msg.setTimeStamp(0.7653948948034529);
    msg.setSource(58653U);
    msg.setSourceEntity(31U);
    msg.setDestination(41543U);
    msg.setDestinationEntity(176U);
    msg.state = 106U;

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
    msg.setTimeStamp(0.587998829869061);
    msg.setSource(32964U);
    msg.setSourceEntity(131U);
    msg.setDestination(21024U);
    msg.setDestinationEntity(88U);
    msg.state = 254U;

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
    msg.setTimeStamp(0.3491611384412825);
    msg.setSource(19078U);
    msg.setSourceEntity(113U);
    msg.setDestination(9728U);
    msg.setDestinationEntity(161U);
    msg.state = 58U;

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
    msg.setTimeStamp(0.4195877827849426);
    msg.setSource(12780U);
    msg.setSourceEntity(215U);
    msg.setDestination(24300U);
    msg.setDestinationEntity(146U);
    msg.state = 220U;

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
    msg.setTimeStamp(0.8070184442901697);
    msg.setSource(62300U);
    msg.setSourceEntity(40U);
    msg.setDestination(2312U);
    msg.setDestinationEntity(16U);
    msg.state = 80U;

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
    msg.setTimeStamp(0.9164899328728088);
    msg.setSource(35634U);
    msg.setSourceEntity(188U);
    msg.setDestination(34711U);
    msg.setDestinationEntity(244U);
    msg.state = 143U;

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
    msg.setTimeStamp(0.5176504284186847);
    msg.setSource(6832U);
    msg.setSourceEntity(77U);
    msg.setDestination(55325U);
    msg.setDestinationEntity(35U);
    msg.req_id = 44753U;
    msg.destination.assign("RAZOYCYVKCHVLMIGTIOVXMNXVAQGENLGFJBWWFZRIDIAZCPMWTPSSUGHQUXBFCYBDROJAGGDGCLEIIKKQKUZIULWZQUEXKIXRHTZHSEWGNWLNEZDBQWOVBZ");
    msg.timeout = 0.3266550540820162;
    IMC::ParametersXml tmp_msg_0;
    tmp_msg_0.locale.assign("LXSBTIPTYKUIJMHHKSFDKDFGNRZWLOHGMWAFWRIIALRTINUL");
    const signed char tmp_tmp_msg_0_0[] = {-72, 43, 53, -95, -96, 16, -101, -16, 113, 76, -58, -46, -36, -17, 51, -114, -46, 38, -100, 8, -18, 48, 25, -102, 25, 42, 122, -123, 23, -60, 80, -124, 69, -70, 118, -113, 87, -86, -25, -52, 83, -66, -125, 57, 122, -90, 72, 52, 16, 58, -78, 18, -20, -91, 101, -78, 43, -5, -45, -39, -13, -88, 93, 88, 7, -36, -118, 99, 106, 104, -26, -61, 20, -34, 24, 97, 20, 56, 75, 75, -6, -19, -22, 19, -2, 109, 85, -32, -4, -75, 90, -2, 87, -52, 115, 48, -106, -70, 115, 106, -80, -122, 29, 84, 76, 63, -10, 69, -76, -71, -48, -75, 123, -114, -76, 41, -80, -124, -110, 124, -122, 116, 113, 90, 78, -106, -23, -103, -8, 68, -35, 76, -90, -75, 122, 75, -101, 75, 14, -73, 51, 16, -91, 115, 29, 121, 44, 107, 120, -16, -37, -19, 108, 16, 118, -24};
    tmp_msg_0.config.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.03576184764712165);
    msg.setSource(55433U);
    msg.setSourceEntity(48U);
    msg.setDestination(27314U);
    msg.setDestinationEntity(249U);
    msg.req_id = 13738U;
    msg.destination.assign("NDMRQZVFKHKKTXIDCTDCBVWZQJSSIDQBACTXKXVEYTOWPHDAYNEBLUMQOPJAZXXJRNJGHMJDGFYGQNDKKMVKSQWYNUORKAENTJQLUTWWHVVSLMRBC");
    msg.timeout = 0.04300168799911397;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.19954444800746263;
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
    msg.setTimeStamp(0.2375591001679931);
    msg.setSource(23288U);
    msg.setSourceEntity(247U);
    msg.setDestination(25180U);
    msg.setDestinationEntity(84U);
    msg.req_id = 1865U;
    msg.destination.assign("ZTUCCDYWEXKIHHEAUPJQHZETHYGBGCALQOCDDPWJUIXGRNLJVXETJFKBJGXDUWPWKQQPSLHNMGIOILMEKRSZRLJKVCXKQBCLBZWSYXJUBFKOMRUVCFZTIYAVJZZDMEAOYTOTDMMSNQFZYFRLBHFMQEQGPRVOYNTXUTWIZSPQHOAKJOEZECFELBQTSSDWY");
    msg.timeout = 0.7117268066803787;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.969820014987654);
    msg.setSource(15017U);
    msg.setSourceEntity(168U);
    msg.setDestination(15362U);
    msg.setDestinationEntity(225U);
    msg.req_id = 43619U;
    msg.status = 61U;
    msg.info.assign("EAMUAWOFECODOLLWCWIUAWCMHJVIUNWVXHPQRPFHJNSXZGUNLQPYLMKYJIKYOMUBYHOQDRCMJQYSVAGSASUCBXTRXSANHYTVOGGWSBFFDNIBCJVPOOZUSUQLEWUADWDRYZYTDIZTMTWWCVSNBUZCKRMNVTHKZEBIKM");

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
    msg.setTimeStamp(0.7176132823423759);
    msg.setSource(9804U);
    msg.setSourceEntity(3U);
    msg.setDestination(58468U);
    msg.setDestinationEntity(0U);
    msg.req_id = 15909U;
    msg.status = 60U;
    msg.info.assign("MSIKNIYMOCNBBWGUUPFLTVFGIMEHCUTJJAYCOLHGVLM");

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
    msg.setTimeStamp(0.6364757710913441);
    msg.setSource(35259U);
    msg.setSourceEntity(81U);
    msg.setDestination(64468U);
    msg.setDestinationEntity(54U);
    msg.req_id = 51193U;
    msg.status = 22U;
    msg.info.assign("HUHKNVCCUZWPIXMJGXEDYOYLGVQJLFXSDKAUWHVZWUOKNNWYIZQKAASWOWCVDTMMRUKFWUOZUYTPVTMZIBZLTPSIFVLOFLKATEBNEVAXYJJRGUDSCSLKALUENAYPFDLYXEGFMPYXYBWOGSXHUNTEDBGSMOCP");

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
    msg.setTimeStamp(0.2779894717449809);
    msg.setSource(60439U);
    msg.setSourceEntity(117U);
    msg.setDestination(5657U);
    msg.setDestinationEntity(135U);
    msg.name.assign("DRMGLCMSBWOHDYHTVCHWOJMLORBROHYIECWUSOKMJBVRWKJVXSDXZAFNLAIEMQFTWTMYGZSDSFOXZQEPMICSMYNPXNBDIPZWYJAH");
    msg.report_time = 0.8584770008858946;
    msg.medium = 238U;
    msg.lat = 0.5603279269520806;
    msg.lon = 0.9517665303684025;
    msg.depth = 0.6902905527356347;
    msg.alt = 0.7432370814048355;
    msg.sog = 0.14715401303399933;
    msg.cog = 0.6978813130639758;

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
    msg.setTimeStamp(0.8466281935266805);
    msg.setSource(19565U);
    msg.setSourceEntity(133U);
    msg.setDestination(17576U);
    msg.setDestinationEntity(86U);
    msg.name.assign("PBYQWMMICEZQGNTZZTIXJBIAKQRPXLSYXKBITGTLPUUSIJQHWLPKGXCCFPQZYVYTHGGAHYPHEUEZTFDABSLNGKECTYNJDQGOPRRPBRLUTXDWWBYVIQVQMSFDUFVHLLXZMORCJQFNAFBNENNYSJEWYSMDDSWOLAXMVFQXFFYJMDKGGUAROBWNVACDDKHIWSOZAXJPZCNIEXCJROHFKLKAMUPHVWBSZ");
    msg.report_time = 0.06777635769174983;
    msg.medium = 82U;
    msg.lat = 0.17201022930034182;
    msg.lon = 0.6689770532565221;
    msg.depth = 0.03780732189320957;
    msg.alt = 0.7784522612688409;
    msg.sog = 0.30832350922890317;
    msg.cog = 0.5672279444887074;

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
    msg.setTimeStamp(0.27030678226980687);
    msg.setSource(52036U);
    msg.setSourceEntity(123U);
    msg.setDestination(1761U);
    msg.setDestinationEntity(139U);
    msg.name.assign("LNLWRZWWKCRVKOPYPTGIJYPMBKOAVVUSFRHXFLILTWYXNXBQTQVMY");
    msg.report_time = 0.8110291951373325;
    msg.medium = 206U;
    msg.lat = 0.360674426846583;
    msg.lon = 0.459185276373676;
    msg.depth = 0.766359909504854;
    msg.alt = 0.8179454036317169;
    msg.sog = 0.9354049474290083;
    msg.cog = 0.21666038391868203;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("DECLGPPEVDZIDXMMTGQQTFSNNCPJJSABREEWXNBROYYFWWCVEWGTOOVSYUQIPVJKGAJHZGCTKTXMTIVDACFODTURAALLNUGHMTWFIBMHZLAKDKNKXUQABRBXOHYPMYXRDICUVXZOFZIADJKEVGEHNVZLSSWCLFXDCQNUKUZKYYPNEMJYGRLBMSFOBMKFGFSUYHBJJWLUTAIHNHLQDOVZCUZROWWGQEPELJJMIHZFN");
    tmp_msg_0.type = 231U;
    tmp_msg_0.properties = 0U;
    tmp_msg_0.durations.assign("TTRVYMHJEJZFPVCTPQEGZDCUCKIPSMXPUZYRFLXBANCVLJWKUZDODWWEFDIHUEDLEIAGVKZCNFLSSKIAXMETCSVBOGXBMWAJKHYUUKFMXHNQOOTDBSPPCLPTNLHYHR");
    tmp_msg_0.distances.assign("MZQUJUZYFPSBQBONRNKKFKQHIJHMPIEGPBHSGLAKFTURAGSXRR");
    tmp_msg_0.actions.assign("TKGIDKOASHQNNFCLYUTSYYDZCLJDWKOPLQWGHDRNUAMMFHGCLDPSNBKIZUMSZMACOMMJODPXJUIILJIPIUAWEQMGSPOJIGJGXBZESIDXYLANKKUYBQUQEPKVWEHCVLONXKIEDOZUTE");
    tmp_msg_0.fuel.assign("UHZLTJDPVDEOCVEALWMCKERMQMFIWONQHTFDXLFCOKIGUGCHBNHMTZFKKFEROMLKZHBRJAMHDNSOJYOJGOTETCEXRGZVIPHGADPQVXRFIPDWUJWAVBLOPXKNDGWPWHBWYYSUASARK");
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
    msg.setTimeStamp(0.7152460399067019);
    msg.setSource(44022U);
    msg.setSourceEntity(24U);
    msg.setDestination(13409U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.02201813007594433);
    msg.setSource(42172U);
    msg.setSourceEntity(97U);
    msg.setDestination(57336U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.6069925798193023);
    msg.setSource(22032U);
    msg.setSourceEntity(100U);
    msg.setDestination(54754U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.2559856957279645);
    msg.setSource(28087U);
    msg.setSourceEntity(42U);
    msg.setDestination(50438U);
    msg.setDestinationEntity(222U);
    msg.plan_id.assign("JXNZBYPEDYFPYJPMURGZGUFKPMDJDNTUNMVQVSPSIRWKYDWOOMHGYQAVZPIQCOGBCSHMJXGRBIPHZJEBAFXOTIVOTZUTARTROEXBEASKCQJZHWIXBAUWXCVWUCCCTBFIFHJWEMGEYXVSRKNYLLWKNFQFRBCRIWHGJLPUTYKIBLEOTLKMREZHVGSDLLWASXUAMBDNQNQLTIFYHROZFNXQODJQHTPVZFDA");
    msg.description.assign("PLQYXSUAJUBCHTPSGBPZQNDSTMQFQMZFLWDQXNEITMNAISVQMGJBICTJKEOXHTD");
    msg.vnamespace.assign("JGGKRYMLFXPGXZNLKVKVOOYOWEJABHXPCYDYLKPDIXSQWTFAZFALFKKVWYSWCMNPOBAMNDAMDKWVUZXXRRHBVJSPYHZPRQSHEOZDUUFBJHEYUMQSZQVQLRLUATCZCLIKDZUKVMNMCLMGWOXSGUTTAEPTHHHWRJHTJI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OMMAIAWVGNRTWBPKVTDFUJVJXPQVBUDXAQFGRLROISFCRCABSSUOCRUGDXYBNKUYBEVMJMEZFQHLPASLJTTNIQYXQCMQFGOIDVJMZSPTWMEHUZYGDBGXDMZXNDBEIZDYEGWWKPDYFKEDCYEHLANLGYCSKIFQCWQQHMKUR");
    tmp_msg_0.value.assign("QKBWXJUJKZKFTI");
    tmp_msg_0.type = 23U;
    tmp_msg_0.access = 243U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("WROJEZLULWIPXRWBQBXDCUKKZNTHJRCMDZGKPLWEAMCIYIALIQHGBTWARQGQFNEYHQRKGNOXQVBISKXMLVFKCVKZUCRLQTPCSXOXZNJGXZJNAVVDJJATMKPODWEGOAQBDYUPBRIMFGMCOKPXTHSYCLTUFEJPBGFTGYZLBUJPNKSUVNTO");
    IMC::DmsDetection tmp_msg_1;
    tmp_msg_1.ch01 = 0.6265993287624684;
    tmp_msg_1.ch02 = 0.5309508808526298;
    tmp_msg_1.ch03 = 0.305142005997301;
    tmp_msg_1.ch04 = 0.04414963147342521;
    tmp_msg_1.ch05 = 0.4946489721836731;
    tmp_msg_1.ch06 = 0.6973118834263192;
    tmp_msg_1.ch07 = 0.37803850421249297;
    tmp_msg_1.ch08 = 0.16157166416514745;
    tmp_msg_1.ch09 = 0.8933548374721751;
    tmp_msg_1.ch10 = 0.5857281830611275;
    tmp_msg_1.ch11 = 0.5175169203891903;
    tmp_msg_1.ch12 = 0.03819036539939835;
    tmp_msg_1.ch13 = 0.9014361844828496;
    tmp_msg_1.ch14 = 0.6569554598384336;
    tmp_msg_1.ch15 = 0.22349339703421534;
    tmp_msg_1.ch16 = 0.8672374127425005;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TCPRequest tmp_msg_2;
    tmp_msg_2.req_id = 29874U;
    tmp_msg_2.destination.assign("FVPIDGLTKBTGJLSLQDATPQOPHGRSYKSDZICYGTJYUCUNZHMJOABREKMNOHRJIFVDXGRUMPEWUVGNMVCJVEVEHNIWHEISKUDMJUASXYOELXLCBTKBCAWZSDBKQFYAAHBWJPYVBZBQPQ");
    tmp_msg_2.timeout = 0.7814766414618997;
    IMC::PlanManeuver tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.maneuver_id.assign("PGGRZOZETGRSESJPGIFMZCWYHVZKVKVOTKJCBBJYXILQPFLUCJQQDS");
    IMC::YoYo tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.timeout = 55706U;
    tmp_tmp_tmp_msg_2_0_0.lat = 0.7657913730466871;
    tmp_tmp_tmp_msg_2_0_0.lon = 0.254696587438349;
    tmp_tmp_tmp_msg_2_0_0.z = 0.45458240118034765;
    tmp_tmp_tmp_msg_2_0_0.z_units = 163U;
    tmp_tmp_tmp_msg_2_0_0.amplitude = 0.4258643142406031;
    tmp_tmp_tmp_msg_2_0_0.pitch = 0.7858416843349947;
    tmp_tmp_tmp_msg_2_0_0.speed = 0.07752616615329022;
    tmp_tmp_tmp_msg_2_0_0.speed_units = 222U;
    tmp_tmp_tmp_msg_2_0_0.custom.assign("RPZTPGZGDEPOOJSFOALTZBVXADRVPEAZWIAYVLRWLIKLOQZCHCVUYNIWJSCWVADIWKFXGLUMFQLHOGARGLKLXYFNPCKWQQMXIYENOGNHTWNFZRFDDIWMQMVZUPNQJEXHZATBS");
    tmp_tmp_msg_2_0.data.set(tmp_tmp_tmp_msg_2_0_0);
    IMC::WaterVelocity tmp_tmp_tmp_msg_2_0_1;
    tmp_tmp_tmp_msg_2_0_1.validity = 24U;
    tmp_tmp_tmp_msg_2_0_1.x = 0.18989949337131584;
    tmp_tmp_tmp_msg_2_0_1.y = 0.32414421668889914;
    tmp_tmp_tmp_msg_2_0_1.z = 0.5796106519116082;
    tmp_tmp_msg_2_0.start_actions.push_back(tmp_tmp_tmp_msg_2_0_1);
    IMC::AcousticOperation tmp_tmp_tmp_msg_2_0_2;
    tmp_tmp_tmp_msg_2_0_2.op = 159U;
    tmp_tmp_tmp_msg_2_0_2.system.assign("MPPRXBNEDOZHEDACXTKVOTFGGEXRGCAHPCVLFNUJQSNKWWZLAJYTRZGVJXKKVJMIBQEYOSGDTYVBILLCFRUEQGACTDUKWBJZSVHWYKDHUUPVFEVJIFEFMPLASQHLEGWOWZRSXPFOPLMV");
    tmp_tmp_tmp_msg_2_0_2.range = 0.04771452296783063;
    IMC::AcousticMessage tmp_tmp_tmp_tmp_msg_2_0_2_0;
    IMC::RelativeState tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.s_id.assign("TXFXBVXQKFBGOTUBLHXNITQPE");
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.dist = 0.5206183183152576;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.err = 0.3176584494741508;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.ctrl_imp = 0.29389348284648964;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.rel_dir_x = 0.2076829768262255;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.rel_dir_y = 0.399634907183925;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.rel_dir_z = 0.46228783490133984;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.err_x = 0.550288923416923;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.err_y = 0.30538550359539307;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.err_z = 0.20338144714038486;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.rf_err_x = 0.4336848095805681;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.rf_err_y = 0.7217657075869327;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.rf_err_z = 0.4296085252131683;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.rf_err_vx = 0.8759381477110993;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.rf_err_vy = 0.08513488825513615;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.rf_err_vz = 0.7580337225356728;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.ss_x = 0.5588874078379775;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.ss_y = 0.8240967406848951;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.ss_z = 0.04142806044157088;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.virt_err_x = 0.8478845062658943;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.virt_err_y = 0.626662425925869;
    tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0.virt_err_z = 0.5294753228212166;
    tmp_tmp_tmp_tmp_msg_2_0_2_0.message.set(tmp_tmp_tmp_tmp_tmp_msg_2_0_2_0_0);
    tmp_tmp_tmp_msg_2_0_2.msg.set(tmp_tmp_tmp_tmp_msg_2_0_2_0);
    tmp_tmp_msg_2_0.end_actions.push_back(tmp_tmp_tmp_msg_2_0_2);
    tmp_msg_2.msg_data.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.7629448048959382);
    msg.setSource(56843U);
    msg.setSourceEntity(49U);
    msg.setDestination(55565U);
    msg.setDestinationEntity(15U);
    msg.plan_id.assign("OMHGSMEAQLVPUQTDEKOGIM");
    msg.description.assign("OBVQASITWQOVTHDOVTZSQCNMOARGJFBYCWGQWCMGKMXUWIJXANFRHJVSYEMRKKWYAQARYIJDKWCLGGEAVUUIZESYKRXUZVECOJOTDSLGRAPZVYOFNWRTBTDIMWGUQLFCXIQJGEILUEHKLEJJSCBSTBUQWXPPHPXKPTQAGJAHXLIDPNIMYCZRBHNFFSAJSZSKBYYTOVBVXLNZCPEN");
    msg.vnamespace.assign("HXTBYIQDHKLUWYGBNMMHLZUZLLOIJXEJJMAZKCOJDKOOEJSATXQPTMLRRBNGKFQHFVYNXRWHAAPWLNWROIVSAPZBCGSSPYZJGMJVITHSIQOUNUYAELWRDTCFXHVXFLCSSVUUVVBGYVGEMUFKTKJDQFEMCLVGAJ");
    msg.start_man_id.assign("NTLAKYCMRTSWDMUKMATFGKJKHCQEJRYJZWYG");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 1668U;
    tmp_msg_0.x = 0.8119996212766556;
    tmp_msg_0.y = 0.03457755483440117;
    tmp_msg_0.z = 0.006528915428019033;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7258390704645369);
    msg.setSource(7525U);
    msg.setSourceEntity(121U);
    msg.setDestination(29248U);
    msg.setDestinationEntity(204U);
    msg.plan_id.assign("BDTSPMXPGYJQLWBCTFONUJWEJWIEHIISSUQWAFENEPHGJTEIBGQBUIMBMYKZWLQFHLNTWQPUSWIEIUJFH");
    msg.description.assign("XHBNQHNCNMEOBUIFCGTZTRHFRZKBLYCFXYATELDRJGGJWVZHJKLKQODAUCGSVDDWMYWZJCPIYMJURXORIRAAUNSLQQQTPXWMVAVHBLBUEVGNELJBVPPMXVDULCDJSOWTFMDPXPTTMCSMNIIKWLZSBWFFHGAIIPXOJWZRXQDKMWFOLBCOYQANRNJUEBSPYQJCEKX");
    msg.vnamespace.assign("OTCFAKDPGIWTLCMEYSWFJSIENNADWSROPQBDDZHYMQIPVFZYPHMLLWJUGXGTXLXMXOIGXZDOGWRAOYRSAVPACKUANVCOFFZEHUEZRSSRVKFLUGWGHBNTHXZQSLDWCJMOVMZTJEAAHCTVIZQILOIDUQFBOHGHLCAZWERDULGNJPBRNRYNULJXTBQBPMVKEIWKKMCYONMXUJVSBBYCQYH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("DQOJSFKZJRXUFRBCXFHIJXOQIBMIEZIRAGJBPSTTAQFICHGDOLXUNQXBGGTGLZPTRMODNIHMYS");
    tmp_msg_0.value.assign("OFFKVGMUFLHJDSVTIZXOJCRVBDKPGAHCFAHEPQMNEAENLDSVBFWLIEHYIKSTQSS");
    tmp_msg_0.type = 55U;
    tmp_msg_0.access = 76U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UDUYBMLSUVQQQLPPEMYQPWJHEKLGZYNVSTOCDXVUAZEEHLSHIPSPFNRCFBDFHGZNKPKMKDRJEPJABOWIBHTATDLIJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("YNVALBBXHSAPGOCPALKMCJLCHNQREFZEWYWNYISGMDZMURPTTTQGAZHWTQGONKBVFNGUSVKPZUTFWKHUVTIOJHZDLAQXOJXYJLTFIBCCDKJYQYOADWYCMZAIFNFUXSXPFLKDWJMIXJPRTKYXVIVXEIRDKVRYHDRJHTLRXHZFCQFMBKLBGIOOGHWABGUEPFCOPWESANOEVSQQDDNZRMBPSUDYSMLORBE");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::OperationalLimits tmp_msg_2;
    tmp_msg_2.mask = 230U;
    tmp_msg_2.max_depth = 0.2335941243297579;
    tmp_msg_2.min_altitude = 0.851881620541198;
    tmp_msg_2.max_altitude = 0.5224394532609923;
    tmp_msg_2.min_speed = 0.3557204434240747;
    tmp_msg_2.max_speed = 0.2735197177083847;
    tmp_msg_2.max_vrate = 0.6628583629069545;
    tmp_msg_2.lat = 0.23249352972268966;
    tmp_msg_2.lon = 0.5796630338413495;
    tmp_msg_2.orientation = 0.5298566061034686;
    tmp_msg_2.width = 0.8681684561036571;
    tmp_msg_2.length = 0.06097523439466668;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.44194617984498086);
    msg.setSource(19631U);
    msg.setSourceEntity(219U);
    msg.setDestination(4268U);
    msg.setDestinationEntity(240U);
    msg.maneuver_id.assign("ICOECINEPT");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 34859U;
    tmp_msg_0.lat = 0.11956561443834424;
    tmp_msg_0.lon = 0.8156833127714125;
    tmp_msg_0.z = 0.9799944514218875;
    tmp_msg_0.z_units = 96U;
    tmp_msg_0.amplitude = 0.7210511588869779;
    tmp_msg_0.pitch = 0.27114274195785004;
    tmp_msg_0.speed = 0.9102553834340417;
    tmp_msg_0.speed_units = 219U;
    tmp_msg_0.custom.assign("LXXKYGWQRNFYDDXSCLVYHTDQYAGRGHSJVADFYHIRPTIOOXYHBQMMZJHDSCOCSGOKBWLPYBZSVQRYEVMETUQMUAOEPSEP");
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
    msg.setTimeStamp(0.19260896378147396);
    msg.setSource(39856U);
    msg.setSourceEntity(210U);
    msg.setDestination(1736U);
    msg.setDestinationEntity(154U);
    msg.maneuver_id.assign("FRDGZOMQFITMPSYBTLSKCMJXOAUETKZVSXWMEXOFDHCCPKYNXCYWHRPLMJJOZRGVQVZULDPTKJUIB");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 850U;
    tmp_msg_0.lat = 0.263340029564226;
    tmp_msg_0.lon = 0.4744159683800767;
    tmp_msg_0.z = 0.7017413597781622;
    tmp_msg_0.z_units = 221U;
    tmp_msg_0.duration = 8360U;
    tmp_msg_0.speed = 0.8864892884077238;
    tmp_msg_0.speed_units = 174U;
    tmp_msg_0.type = 92U;
    tmp_msg_0.radius = 0.18810306214754702;
    tmp_msg_0.length = 0.17323267107480556;
    tmp_msg_0.bearing = 0.05766420692000751;
    tmp_msg_0.direction = 50U;
    tmp_msg_0.custom.assign("LQXXVBFREFXNJ");
    msg.data.set(tmp_msg_0);
    IMC::TransmissionStatus tmp_msg_1;
    tmp_msg_1.req_id = 44611U;
    tmp_msg_1.status = 159U;
    tmp_msg_1.range = 0.8589928040638566;
    tmp_msg_1.info.assign("DXCHFPBBCNAGEWMQOFKSVBFMBDAWKLUOIFHAQGMTJFCCZVD");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::DevDataBinary tmp_msg_2;
    const signed char tmp_tmp_msg_2_0[] = {-45, 11, 106, -31, 107, 110, -10, 104, 67, 91, -109, -113, 40, 76, 77, -36, 65, -86, -91, -15, -115, -81, -31, -66, 23, 17, -65, 61, -80, 23, -107, -116, 124, 119, 74, 120, -112, -109, 71, 38, 59, -37, -125, -117, 59, 59, -90, -79, 58, -19, -49, 19};
    tmp_msg_2.value.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
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
    msg.setTimeStamp(0.3565089364734656);
    msg.setSource(29181U);
    msg.setSourceEntity(207U);
    msg.setDestination(15401U);
    msg.setDestinationEntity(156U);
    msg.maneuver_id.assign("QNRAFKMYIUCRHBOJTODGXMJVTMEKCBPZHWBCVNDUQBUVMHZLVWSGBHXFJARFEGHNKLRWK");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.3262339424927051;
    tmp_msg_0.lon = 0.7210048069241813;
    tmp_msg_0.z = 0.09780355845947519;
    tmp_msg_0.z_units = 111U;
    tmp_msg_0.speed = 0.0018561483227875764;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.takeoff_pitch = 0.2406585093698409;
    tmp_msg_0.custom.assign("BIQFTSICNCAXHZOHKRLZHOWHJFYFFVAUBLICNXBRSHKFDAWXNXPQNWHZPAAEMGLGQORQUREVMCIPYLTOCC");
    msg.data.set(tmp_msg_0);
    IMC::SmsStatus tmp_msg_1;
    tmp_msg_1.req_id = 61103U;
    tmp_msg_1.status = 70U;
    tmp_msg_1.info.assign("KDAWYKRSSHQELAKWSHOAYHYNVPPVBPJKXNAROKBBUQOMHHCILHQAXEMTWZSFRXJHTIIRCPLDIEMDYXCTJYUAAJDMNCOXURLMUTBGBMUZOBPNVEUEPCGXWCGNFDVDGFQYVLINSJHORFQZVFOMTUIXWIUYJZMKGYDODZBNGQSLCKROGNPBCJXSWPBRTWFKMPOQZWNFFIQEIJZALEERDFJXZAZUXARIHSHSPZVTUCTQKGTLLWCVSEYYEQ");
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
    msg.setTimeStamp(0.23694351267341318);
    msg.setSource(39417U);
    msg.setSourceEntity(96U);
    msg.setDestination(50728U);
    msg.setDestinationEntity(204U);
    msg.source_man.assign("STPVBIRZMJKRUGCCZEJWTOMDKMIULADWILBMQA");
    msg.dest_man.assign("CSDEDSYVUEXQJKWERZOIMJSIJXXJXESYEJWFFNRVWLIUTYBUAPVCPGJPQGGSWXTOCNACKNGRYMUCFTIBBAKRMFGBQLDSPIAQUPBNZFZWLKIDTRPNJZHWRHDGZOYAJTEBOREHGOGYCKWJREYYKHLSLRFQOTBQTXVLDACFNSVTMZLXTVIYBASCCLBKNMOXQEXQGONMRPOWFPKUDZVIQKJIQMDUUHMAPZXFAHUEABNGDCDLULH");
    msg.conditions.assign("KVABVEPIVUECMSDSHTYKNSWMUPZMNAPATVKECFQTPLUFBIIDJJBUMOTOGCAUEYKNHXVOIRXZSIRRZTSBTYRZPKWNNRJDOKXQBRXCQMYAYHGZVBOYGTIDODJSWRARBIVLECCDODMLWNLETXPKAJZGMPHGZIMFFKHLNVOWLZYPHSWGAFXZRXQIUKMGWMJSHSBXJDWUESNDFYVGVCNBLTUQKGX");

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
    msg.setTimeStamp(0.29905269768948717);
    msg.setSource(50050U);
    msg.setSourceEntity(142U);
    msg.setDestination(25564U);
    msg.setDestinationEntity(141U);
    msg.source_man.assign("UJZQORDZSPBZRIPATZLSDCVKSIAZWTBJTDZUGXVUHMPIMRGABWKDCTMGQSZPVIJAAUNYXSUGQHPDVBPQYKXFRFXGSIDKEWLENGYDXXEKTVOAEUMELAHHWXFHCJOVZBNJSILXDRBPILHMJPYOWZNPBNWAJRQOEGTQPLQEYFVWYOAIHGGKNTJCWBMKVFCGHQJOKWOKMRQRECKN");
    msg.dest_man.assign("ICDAPXUYNEWVUYHLRPRCNNKCBXVSIMDMQZQEJKNAXGLJRCWXNIGXCBEQRJAOYJWMJHYCARMGRISZOCZCSWVLPIHONOYFTINRAYLPEVEK");
    msg.conditions.assign("WANEYXVQAMQA");
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.9290922023009175);
    msg.setSource(47940U);
    msg.setSourceEntity(160U);
    msg.setDestination(17267U);
    msg.setDestinationEntity(66U);
    msg.source_man.assign("QBDXCQFZRJICTVVMMFADNAZXXIHTOOGEGHEMNOOSEDXWSHJICELPNKFAWKYPHR");
    msg.dest_man.assign("FDVROWKEBJIFQQYNFVNTEXEMTWNHMOEBQNUNMGEGJDYEOCIYMBIMKGQZAKYOPFPNSTJIDULWZKNMGBVMFZAEYIZEJDSCSOGUNFHROUKYHTLRNFTWMBVVVTICPSMBQARKONZYBSAJARSFPECKFOVGZDDDLAHZVHLCYGISZAIPLFLJPXSQDCYRTAZQXQESWCLHRKIXCJSWWDJIPOGCWX");
    msg.conditions.assign("NHCZJGRAFKQQUNCKDXMNKYXIBIKFUWVVKJSMTSSTAOJZWKBZZGPVOEIACFOPNWMXIZRWBFCBHFFXJDLZGRTMXNSOHUFLZAMNTNJWQACPQIIPDJYBIROCYLPEVBWHVGEGZUKWSCRUETTPBDDUIPLRKOMGQFLBTPHCDKFNUMELXIBHQOSVLEJLYNSXYREQYTGHAEOVVJ");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 89U;
    tmp_msg_0.reason = 135U;
    tmp_msg_0.value = 0.17630681835712259;
    tmp_msg_0.timestep = 0.5857783877477369;
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
    msg.setTimeStamp(0.4030768541801484);
    msg.setSource(12741U);
    msg.setSourceEntity(236U);
    msg.setDestination(14905U);
    msg.setDestinationEntity(117U);
    msg.command = 48U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HEWYPLHCQZP");
    tmp_msg_0.description.assign("BHKRBSEPKVRXZFPFOWBMMOSIOUSLNLXODWFSAYYABMAPNJGXNZGFDUXPXPSQQFSETHZSCRIHQJMXPLCTYBVWQVFCYLVJRRNUDZGEUVMUHLHCRLEULFJ");
    tmp_msg_0.vnamespace.assign("DTOYAXQTROPQDOHENNDZFKEHAUMEYYAPFPBIEEHFESDIRWLENFHYBIZVXWTDRBYDZJXYNVPYKRCFLMOJCBFJWDPVZYEKQZTGWZRBIPPNYBREMCOGKLICUGMMWJSANSTKKXCPCTRTDMJVNRHPBZMOLJQVAIGPMXJQVFXJZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UWLBDFTHJCFAAQLBIKDTDZECSIASAYYATBM");
    tmp_tmp_msg_0_0.value.assign("FANVSPOBTUDJMGYJCVFFRHWKZQOL");
    tmp_tmp_msg_0_0.type = 174U;
    tmp_tmp_msg_0_0.access = 101U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZPADMTUEDXSMJZRKVFAICEYXEVDACQYHEODCLYCQODVXCOCICITPKFLTQTWQWVKUACYDGPWZGJJEYTQHIRJAIIPQXLDSGGZFSOIRLZWOZSFOKWHGNLMWHRRVUHYJEXBADLBPQWRNRBVNGWUSASUYMQAUHGFHNSPBFYOCTVZGXPENWTWKBDFRZTNTMOA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("FVORBKCZQFRKOHXZLZXHEIJBNEYTCQWXHDWKVEFTSFAHYRMAYBTELACWSPGDORQZOXCYZNBSNPSHPFOFHJMKJGPOYXIKDKGONRPZWDIHQSNXERMUIAUPDMRJZJIPLVTJOQVJGSPUQRULLQAQNWBWLULNYVGDANDUGTGKDFTVMRSCXHDUYMUEOGVRFZCGANTVSBLSOTMQIUYVEZTIEDFBAGKF");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BQVZNYYGCVYTLSDPSISWHVHCUSHAAUKVAXFMJONFDETOEKFEGIJZZEQOXKAUCYFUCPMJRFNPRCRERMGWGBZAIYJBWHJE");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::OperationalLimits tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.mask = 71U;
    tmp_tmp_tmp_msg_0_1_1.max_depth = 0.22676714825667865;
    tmp_tmp_tmp_msg_0_1_1.min_altitude = 0.9217760678887643;
    tmp_tmp_tmp_msg_0_1_1.max_altitude = 0.7614174027909223;
    tmp_tmp_tmp_msg_0_1_1.min_speed = 0.3998554234303626;
    tmp_tmp_tmp_msg_0_1_1.max_speed = 0.817878624071068;
    tmp_tmp_tmp_msg_0_1_1.max_vrate = 0.309562469887377;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.6590727178081776;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.8534437095673306;
    tmp_tmp_tmp_msg_0_1_1.orientation = 0.2086344744415004;
    tmp_tmp_tmp_msg_0_1_1.width = 0.9431400963461339;
    tmp_tmp_tmp_msg_0_1_1.length = 0.011768391998353;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::GpioStateGet tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("SEIFDGTRQJNXQNKLRDLRMGPICAJUIAOZXUGZFBDULQEUMGHFKRXMKMPTZNUYASINFTCVIBAWGIFIYZVYBWOAHYKNHBFOAKMLWJHEILMZVGBUACOSBSKUHYDULWWHBNPXC");
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
    msg.setTimeStamp(0.959312356887492);
    msg.setSource(59344U);
    msg.setSourceEntity(175U);
    msg.setDestination(60829U);
    msg.setDestinationEntity(253U);
    msg.command = 180U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WVXMNXZDDBOTVDXTNXJVKCIRJBWVHYBYOZQKRXVLTCHEOYGL");
    tmp_msg_0.description.assign("GFPOKKGYHJIUYMFSGBXKINUAHGMLPRZEDFLNZCMIEOTDAJWCKVQFOKKTLSMNXNBVTBVGPOIXJAWTMYMYCEWRAOATSURVFCSYOVDRITJCHVENFWHIDVAAVUJWRUEITJQUWEIQYRPTYXCOBZNQJLUUXXNHMDYOVBDCGHSDEKQNQZHTLHYWQLHFIGLDKXTZEYFVPXSDZPFDNQMXLIJLP");
    tmp_msg_0.vnamespace.assign("GOCNMSDHYTEXLXDGQXJTGLNDKAJMWPJAJFEBQLRPFRHRLMAKCYNHITNOTUHWSWRXZATFVPNZZZUPBWMOGWOOUVDIKPFNYQZGYVDQRVGKJUKIZOQSLBMEXMQPDFTVURYEJDKONJEYHIDALNXWVEGAWPGZTJHKAVV");
    tmp_msg_0.start_man_id.assign("JIUMQNKCUZVHSWMFHOAHXETLGFKSZADVURWSGKOHPSLXLQEMPGPXAZUVSFMXPIEVANKBYLFDDLIYCEQIZCNEMPHBZHWRKVIGEPVYVOSRDKWILVQXMTQBEDGY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CRTTTCREIOFAPJPDWBLZWZTEUQDHCMIFJWDIXMVOGVQYGZOKYHYAIQPGXDFHBSRSLEUFPGRVIPZRMWSIKYJLQRLASHEAQYJYZXBJBQGUYRQCBVECRWMLSZXOKFKUPHFFGYOPNITDVJLYRIBOLAWMIJTHHLPWWHKPGJWWEOXUQEEONTSXNNNSMOTOAMBIEHUM");
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 23263U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4325443406700331;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.006771577181165611;
    tmp_tmp_tmp_msg_0_0_0.z = 0.013897029919092474;
    tmp_tmp_tmp_msg_0_0_0.z_units = 250U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.2031000134824399;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 230U;
    IMC::PathPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.6628009848197886;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.8835054328228118;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.6399570549559901;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HLHNZCGVCGCPSHOBWJAYYTYYNIELYNCJTXUAZTFLYITVUZHFMPBJUAJVWNKGCZFCRGNZHHAGKQEFQPOFNLSVVDDEJDQSWFOXBXVPERYQBHRAIUOPYDWBNMWGU");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::DesiredLinearState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.3505398730864073;
    tmp_tmp_msg_0_1.y = 0.8983417344329611;
    tmp_tmp_msg_0_1.z = 0.11090679748154231;
    tmp_tmp_msg_0_1.vx = 0.9193092457173768;
    tmp_tmp_msg_0_1.vy = 0.10678029243937581;
    tmp_tmp_msg_0_1.vz = 0.7537362650079089;
    tmp_tmp_msg_0_1.ax = 0.6004384981114723;
    tmp_tmp_msg_0_1.ay = 0.08595856144394076;
    tmp_tmp_msg_0_1.az = 0.142386690280912;
    tmp_tmp_msg_0_1.flags = 14536U;
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
    msg.setTimeStamp(0.21140623302030204);
    msg.setSource(31534U);
    msg.setSourceEntity(144U);
    msg.setDestination(60630U);
    msg.setDestinationEntity(178U);
    msg.command = 177U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IUHESDYCNOKKDBXHEKJRRCLHTLVJEXWIAIUWRTXDQCOWPWVTRSAMLFLWPARVGSEBZPRWCIFCZAKAHQCUPBHGRIGDKHJFVNUDHMBSPOKFWCAJXZAEJSZNMOQUUFJXEUYEOAQIGQPLYQSLDNXNANXYLVWZZWOTETZFDJQIZGSYDOQMIRXBTHRNTOOSEMPYIBMSCVGFJYSYFKRZGXBXLVYVQCPP");
    tmp_msg_0.description.assign("JDZHYUXYWJBPFKTSDSPVCOLCFKJSABDEBTHVTUAYAPHRJKBOKTOXXXYNLRDEBZZNXJYVXOGZFZWRHMUQLSKTGETKGJGUILNPUEUNPEWZQCRGSWNHFRAOWN");
    tmp_msg_0.vnamespace.assign("SJSHJSHTQOLVNYMWXWEJJZNRJAFVBUMYPFQHEYKKQSUBISQWPDZMJOCTTFINGORZKGXBGZUAGCCACAGXLYKWLQMLUVMXHNWRRIPHJNUQLDYJGYCFDRFTOFOCHTDHNACPYILEZSKEPBMKZMWGSOUYPUSEJDLXTTQMHYDUWSDAHZRWBGOIOXGXEEACWNOBCAVZTPBOGDBRPVJBPSZXEKIVINNFT");
    tmp_msg_0.start_man_id.assign("FFOXVYPAZDYUHBZSQSMXUQEJEXFLULBKPMCPOAFVNHMQAKRPQIICNUWUMVUYVGXXKOGXHTFMVNGKTRSGEQHSBZSDQPABBEHKPCHDCLBHWOTPOUJTTBJDXIXNZWFEKJAFEYBCI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("UKZRLELPPEGSQOVXBSIZSASGDMGCWHRLPBWOKBIFGHYJOHNOTQRQZOKCKTTMIYC");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.35581881061060316;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8779862272424845;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.4283114439312833;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 0U;
    tmp_tmp_tmp_msg_0_0_0.duration = 65326U;
    tmp_tmp_tmp_msg_0_0_0.sys_a = 60713U;
    tmp_tmp_tmp_msg_0_0_0.sys_b = 9369U;
    tmp_tmp_tmp_msg_0_0_0.move_threshold = 0.2453437730814264;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("IRMPJMUSRBZDXSSKYREULMFBNPOAYIPBSNWSDRZLIFCEQAHYWFXWTRJRKHBVDYOLFLBLEBDJKYUVVXJOPIYWIVQNHMKICYAVUQQMKGRHGSHAVJZCLRZTL");
    tmp_tmp_msg_0_1.dest_man.assign("NDPIGYCWJMNSJQUDUGFKILXTVLEHGZLRZRNUVUGRZSBERMPTZEIGDXFUVAASFQRYGEOHSOASMEIQFTDFGMPNOQVOBQBVWMCJRGINDMERJYSZKGPBOZXPWWFRPVHZXNHFVXXICVUPBKUBRKUATKKQNLMASDWWBDJCYKCQBVVWMYJLMFNNOCKLQTUTKIZOYTI");
    tmp_tmp_msg_0_1.conditions.assign("HDUEUJMRWPTKQZPRSNCRXBZSZWFLYAVRRYUUTL");
    IMC::FollowSystem tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.system = 62889U;
    tmp_tmp_tmp_msg_0_1_0.duration = 60092U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.2930819334523238;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 109U;
    tmp_tmp_tmp_msg_0_1_0.x = 0.6965535942077031;
    tmp_tmp_tmp_msg_0_1_0.y = 0.8775408558621984;
    tmp_tmp_tmp_msg_0_1_0.z = 0.9959223532680475;
    tmp_tmp_tmp_msg_0_1_0.z_units = 110U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::GetImageCoords tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.camid = 107U;
    tmp_tmp_msg_0_2.x = 62568U;
    tmp_tmp_msg_0_2.y = 57960U;
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
    msg.setTimeStamp(0.5957355756188937);
    msg.setSource(57121U);
    msg.setSourceEntity(15U);
    msg.setDestination(29193U);
    msg.setDestinationEntity(207U);
    msg.state = 234U;
    msg.plan_id.assign("QRCFXVFFZRKXLPPXUWTRXGOHSIFDWWHEAKLVKGPLOMUIFIQHDOIHMKVSCQFBWRTGMONWDBK");
    msg.comm_level = 32U;

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
    msg.setTimeStamp(0.024210887086481225);
    msg.setSource(4436U);
    msg.setSourceEntity(189U);
    msg.setDestination(18534U);
    msg.setDestinationEntity(105U);
    msg.state = 89U;
    msg.plan_id.assign("QFMWLNOVRFGYIXPIEVUJLKYVEBHPTZRDHOYJGGGDKJCZABSLYSBENICAGOMSCCSATXNQUIGVTFSGIUKBAEDNDOLGQWJTLYTSTMWHWTZPFYMYIKHDNWHIXVMNMHIZURRVQHIPKQCZPELRKKVXCENMXHXPXXBJGUQLBZWKGHFEUWORJEPBF");
    msg.comm_level = 233U;

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
    msg.setTimeStamp(0.4166957860023597);
    msg.setSource(28077U);
    msg.setSourceEntity(84U);
    msg.setDestination(47226U);
    msg.setDestinationEntity(41U);
    msg.state = 12U;
    msg.plan_id.assign("NOUVYGFINSMEUMRAXJBXDOODOERPCRUVIQJPLSGTTAJGUZMXXHFDILXQFWHTEDMHFVAOQEDYSADITPBWBAYWKPSVGLHESKAHREJPYUQRJLHRVHGVDQFFRNENJMOSMNMLKWKGTEFIOYVFUXIYKWXNORYKMGSBLIF");
    msg.comm_level = 162U;

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
    msg.setTimeStamp(0.7468700516627226);
    msg.setSource(16759U);
    msg.setSourceEntity(189U);
    msg.setDestination(6895U);
    msg.setDestinationEntity(95U);
    msg.type = 132U;
    msg.op = 132U;
    msg.request_id = 62570U;
    msg.plan_id.assign("XPJHTBBXFVOHZIYOBNBDESLBLXUKGQGFWATQFUJNIABFIVYPRNUENZSWVQALOVYCYDEEEDLUYAWTCXZITJXPOLPSHMTOU");
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("YNGTCBEXMXAHKVJFGXEANOWAWVRUHIAZYQKLBUZBONFBPGUHSCYKQD");
    tmp_msg_0.type = 110U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HWRKSLJITTUNMZSYYQFGZKOVZUYRHYANNCBEOWZWZNGDDBJCURYCTKWUJQLECVOSHAXDTAPMULKFOMQZGFVSWOXXILAMTSTQYFEKLRKWGPFDJBFMAHGWCGBZYNHIBSJANQ");

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
    msg.setTimeStamp(0.8197617251696064);
    msg.setSource(36567U);
    msg.setSourceEntity(83U);
    msg.setDestination(9488U);
    msg.setDestinationEntity(224U);
    msg.type = 100U;
    msg.op = 93U;
    msg.request_id = 54954U;
    msg.plan_id.assign("XHVMQTRWKZRYLKQWAMAYHKWBOSESBGYEKVFGOERJLJNETNLRQJYASNPUKSXFPLRRBTYJMFVVZYQULZREPPCHYOWEMLMRZWJTOUSDFZAKKYWIQHQMZDAXTDBNJOHDCVHPVNFAPGIOIUKFGGDBG");
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 126U;
    tmp_msg_0.speed_min = 0.3942989073453439;
    tmp_msg_0.speed_max = 0.1809703970547547;
    tmp_msg_0.long_accel = 0.8833253293421856;
    tmp_msg_0.alt_max_msl = 0.5552461066024503;
    tmp_msg_0.dive_fraction_max = 0.8992353801171401;
    tmp_msg_0.climb_fraction_max = 0.8445120123365618;
    tmp_msg_0.bank_max = 0.4132872568324697;
    tmp_msg_0.p_max = 0.4393731677024595;
    tmp_msg_0.pitch_min = 0.35632668325923966;
    tmp_msg_0.pitch_max = 0.7586591599212051;
    tmp_msg_0.q_max = 0.8941728638358217;
    tmp_msg_0.g_min = 0.35260487116507977;
    tmp_msg_0.g_max = 0.6036096182923796;
    tmp_msg_0.g_lat_max = 0.8498360225380618;
    tmp_msg_0.rpm_min = 0.15575230877033908;
    tmp_msg_0.rpm_max = 0.7605157532179196;
    tmp_msg_0.rpm_rate_max = 0.5506347830320655;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YYMXWVICIRZUDLWASVIJJTAAMGRTCGTYRSNGOJNXUKUSQUOLJMFGEKHFKZSWVBRAD");

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
    msg.setTimeStamp(0.4094184327021977);
    msg.setSource(36462U);
    msg.setSourceEntity(2U);
    msg.setDestination(7518U);
    msg.setDestinationEntity(177U);
    msg.type = 88U;
    msg.op = 55U;
    msg.request_id = 46397U;
    msg.plan_id.assign("JTANYGQTOXKXGMLUOQNSYLEQBRWCIGZMUGOHCZQAHYZRLVHEGUTUUJREQ");
    IMC::AssetReport tmp_msg_0;
    tmp_msg_0.name.assign("SRJPFNCHATKMRHGKTPBQGYRJXGFPHSQEKXLGKZOIUE");
    tmp_msg_0.report_time = 0.9198714655884043;
    tmp_msg_0.medium = 23U;
    tmp_msg_0.lat = 0.5107518702579196;
    tmp_msg_0.lon = 0.12501246906983843;
    tmp_msg_0.depth = 0.9763736526330852;
    tmp_msg_0.alt = 0.22217893456990256;
    tmp_msg_0.sog = 0.34201247915521515;
    tmp_msg_0.cog = 0.5090360837129169;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EXFXDSMNUOBRZUBHEIINDMEJYZVYUJPEGFREGWYWMLHNCXFZQULLUSWFPHYVBXDVRBIPKGXUKTMNUVZHNHOCEAJIBSMCGJHT");

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
    msg.setTimeStamp(0.8537211903458221);
    msg.setSource(43033U);
    msg.setSourceEntity(191U);
    msg.setDestination(33057U);
    msg.setDestinationEntity(253U);
    msg.plan_count = 15150U;
    msg.plan_size = 323367073U;
    msg.change_time = 0.8236895730047897;
    msg.change_sid = 2041U;
    msg.change_sname.assign("AZWEQGLZIJSLZELXFHPTDIMHTEAJTODYABFRQRUYXSGSGQJDXAOTSZREUGGKRCOFCDNOAAVQHBZAFZLKMGZKKMZIWCMJRBVHGQIMBEOOTPGIVWVIVEUQWRSRJFYV");
    const signed char tmp_msg_0[] = {98, -105, -115, -65, -73, -17, -98, -1, 32, -13, -88, 88, 89, -36, -96, 52, -71, -128, 39, 112, -127, 99, 52, 110, 30, -115, -38, 118, 58, 23, 53, -65, -102, 1, -67, 110, 20, -34, -119, 51, -122, -47, -80, -99, 16, -118, -106, 68, 16, -115, -11, -33, 70, 19, -108, 80, -82, -29, -62, 113, -32, 123, 101, -35, -102, -72, 15, -46, 115, 43, 109, 62, -115, 75, -63, -122, -26, -43, -50, -47, 54, -36, -52, 75, 24, 62, 4, 49, 107, 86, -111, -87, 45, -6, 50, 69, 100, -9, -29, 47, -39, 69, 9, -52, -22, 96, -48, -126, 13, 33, -95, -113, -16, 97, -63, -105, 81, -110, 107, 79, -92, -121, 76, -45, 38, -42, -112, 31, 70, -115, -19, -45, -15, 51, -48, -3, 92, 75, 63, 112, -26, 121, 42, 34, -70, -102, -80, -58, 0, 112, -21, -24, -79, -94, 106, -104, 110, -28, -61, -115, -34, -96, 57, -40, -30, -44, -119, -53, 68, -11, 108, 30, 124, -72, -108, -104, -59, -88, -55, -79, 5, 67, 109, -64, -79, 86, -81, 102, -71, 1, 34, 63, 36, -120, -56, -80, 48, -105, 113, 125, -7, 87, 116, 76, 92, -115, -64, -44, 87, 36, -33, -15, -36, -58, -71, 25, 79, 19, 62, 2, 121, -103, 56, 70, -121, 6, 14, -55, 96, 31, -58, 21, 63, 36, 98, -5, 29};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XMHVBKLXNICPZMSLAQUPVLDBVRIJAFCGVPSMYFTEONNRFRWDGDYANSHUTSYBTXWXPKLOMTILJIVPQJXYWRMDZCLPCRFMZEQDJZQQUKSRRTUIWESCZZNKQOZITSQEDZKIQGONACMAEGPNOMNDWUTGDBAEHOZWUFJOFWARFUGRLFEJANXBFJYTAVBCJTOWQLBCXOWEUGXBHE");
    tmp_msg_1.plan_size = 1096U;
    tmp_msg_1.change_time = 0.23838145952184997;
    tmp_msg_1.change_sid = 54637U;
    tmp_msg_1.change_sname.assign("EELXFRXROIZODRFXOWQNJGMKSWLTJFCPMXAYVVDLXLEMPBSEEBFQMSCJZYTIIKHLNNFBNLYOOYGTNHGQJQSZDADHBZSPYUWSHIPTMAUYFRCHMZCASUHJNRENWIPEAVDZMJMKAVJUCPACZFNCUQYJGGTLQXNDPWLSLSBUCARWKZDIWRBPXKVOZJXDGQOITEKQDK");
    const signed char tmp_tmp_msg_1_0[] = {-94, 32, -2, 83, 117, -3, 50, 69, -11, -23, 68, -28, -95, 32, 124, -2, 7, 6, -50, 13, -57, -122, -52, -93, 94, 27, 107, -3, -59, -50, -32, -6, 115, -59, 25, -118, 37, -71, -55, 66, -38, 118, 9, 21, 72, -88, -67, 85, -77, 67, 98, -44, 77, 118, 49, -119, 15, 52, 85, 25, -38};
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
    msg.setTimeStamp(0.5075589228499093);
    msg.setSource(4194U);
    msg.setSourceEntity(80U);
    msg.setDestination(21452U);
    msg.setDestinationEntity(162U);
    msg.plan_count = 46342U;
    msg.plan_size = 3503496456U;
    msg.change_time = 0.828498295343612;
    msg.change_sid = 58046U;
    msg.change_sname.assign("LQGBSKBKVSVWDKRRHLMIONEGUJSVLLTRUAFEUWCKWYKPJIAK");
    const signed char tmp_msg_0[] = {-34, 48, -47, -35, -106, -99, -107, 58, -21, 19, 24, 123, 59, -74, -8, 53, -98, -67, -94, 11, -42, -86, -43, -84, -98, -78, 16, 103, -116, 83, -92, 118, -109, 93, -29, -10, 63, -39, 0, -103, -58, -19, 57, 63, -5, -74, 107, -37, 33, -19, 107, -38, 4, -11, -35, 60, -65, 45, 117, -82, 30, -64, -66, 109, 69, 14, -68, 122, -116, -72, 74, -15, 25, 124, -8, 92, -105, 53, -123, 53, -37, -95, -73, 29, 44, 111, 22, -48, 113, 21, -47, 50, 83, -114, 5, -125, 60, -53, 120, 89, 4, 62, -45, 110, 2, 72, 5, -63, -61, 98, 65, 43, 103, 74, 13, 67, -101, 9, 41, -16, 25, -100, 62, 82, -79, -101, 67, 21, -42, -43, -102, -57, 53, 109, -88, 35, -46, 84, -118, -117, 3, 7, -36, 125, 106, -86, 44, -10, -82, -121, -85, 103, -63, -16, 67, 85, -78, 12, -97, -36, 57, -114, 12, 114, 28, 47, 116, -16, -98, 40, 115, -93, -16, 31, 43, -11, -76, -24, -73, -82, -53, 47, -14, -41, -31, 34, 109, 120, -99, 6, -59, 101, -49, -95, 120, -28, -125, 120, 9, -64, 47, 22, -21, 31, -79, -33, 42, -102, 97, -23, 60, -95, -82, -42, 110, 74, 111, -65, 39, 11, 37, -106, -90, -85, 15, -80, -92, -126, -20, 123, 92, 53, 23, -10, -65, 123, -99, -106, 63, -1, -60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MYYBUBSBHFXCUNTFLHFAVOXBYXYPYVNOAAECVAWPPXSJGORQLKONMPZUWROWKZJXKMVSILDCZFXFASOIVMHFDMUZJQUIZVWJIGTYQTGGGIABNKHHFOWXWLMPDSLEACNERL");
    tmp_msg_1.plan_size = 7837U;
    tmp_msg_1.change_time = 0.773104324946859;
    tmp_msg_1.change_sid = 61131U;
    tmp_msg_1.change_sname.assign("QNRONLMGMBXYDSVCJBVADMMYMJEDHCKTFXCCJADAQUCERMRLETBSRXSVVQFUIJFOUKIZLGICTRTZTQCIOIZVSIJRENYXULFFTZQKSIKEGBVVBVRMLHNXJNUHADEAQLMIDASKKHYQXWQUWPFPSPODLLDCZZUEMPOYPSDZOAXSZQPOUHWEJOP");
    const signed char tmp_tmp_msg_1_0[] = {81, -103, 86, -121, -17, 51, -82, 73, 82, 63, 118, 4, -41, -108, -15, 11, -115, 67, 91, 52, -72, -9, -25, 92, 15, 116, 124, -3, 43, -104, 93, -63, -70, -12, -2, 1, -22, 89, -102, 124, 93, 33, 24, -119, 111, 7, -106, -92, 103, -125};
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
    msg.setTimeStamp(0.05737987849291282);
    msg.setSource(12239U);
    msg.setSourceEntity(178U);
    msg.setDestination(42640U);
    msg.setDestinationEntity(165U);
    msg.plan_count = 51049U;
    msg.plan_size = 3531537977U;
    msg.change_time = 0.7858179237627907;
    msg.change_sid = 60079U;
    msg.change_sname.assign("RWWHPLBNKIGTDSNOFOSCTTQJKYIWORPJSETBPKQQKRVNX");
    const signed char tmp_msg_0[] = {-25, -19, 100, -78, 74, -80, 111, -85, 27, 43, 104, -70, -19, 88, 94, -37, 116, -2, -51, 29, 21, -125, -51, -14, 93, 9, -37, -45, 59, -62, 117, -33, -58, 106, -70, -95, -90, 87, -86, 23, 111, 51, 4, -59, -85, 39, -65, 112, -91, -16, 30, 40, -36, -88, -9, -96, 13};
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
    msg.setTimeStamp(0.6698898468416982);
    msg.setSource(429U);
    msg.setSourceEntity(145U);
    msg.setDestination(40519U);
    msg.setDestinationEntity(34U);
    msg.plan_id.assign("TQAGZHILWJQSOTTARXSPDGTMKNECAOWCVARIPDLINHPACGCQB");
    msg.plan_size = 13920U;
    msg.change_time = 0.3438596006925131;
    msg.change_sid = 31661U;
    msg.change_sname.assign("VLLCMGEMNIRMPDVBVWFVHSWUDDGSGFMAKOWYUNTCHXJRKTFETXLYXEAZGHOWFNOKZGUOBOYSXHKZYEECGWHNNUMQUBPWORKXIVLCPRDFZAKZGFQTNKTIJABHADIQABOWJDUZAJYLCJUEUPUOXYISSBMIPNVYLQLGFCPILKY");
    const signed char tmp_msg_0[] = {-106, -54, 111, -110, -98, 82, 91, -59, 52, 98, -98, 57, 103, 61, -73, 67, -38, -41, 29, 3, -48, 3, 18, -103, 67, -51, -121, -128, -18, -39, 102, 96, 18, -96, 14, -82, -105, -65, -59, -36, 69, 99, -59, -85, 101, -125, 13, 111, -69, 71, -96, 48, -123, -82, 7, -38, 76, 28, -21, 123, -33, -120, 3, 2, 83, 97, 108, -36, -109, -35, -60, 104, -127, -5, 70, -38, -47, 22, 76, -116, 8, 7, -69, 25, 78, -98, -99, -74, 120, -54, -93, -76, -6, -96, -83, -57, -11, -85, -123, -22, 1, 126, 33, -42, -32, 10, 94, 109, -89, 14, -30, 18, 92, 8, 52, -115, -61, 52, -96, 7, -10, -7, 118, -91, -90, -18, -107, 31, -15, 75, 17, 72, 28, -121, 27, -128, 15, 71, -115, -37, 119, -72, -9, 45, -76, -95, -95, 38, 35, 77, -125, 40, -127, -99, 52, -37, 40, 48, 36, 20, -24, -33, 104, 123, 50, 14, -110, -89, -92, 119, 73, -9, -87, 50, 80, -111, -35, -57, 121, -17, 58, 40, 1, -120, 126, -10, 115, -73, 12, -79, -15, -82, -62, 66, 117, 49, -39, -38, -56, 25, 108, -127, 110, -40, 84, 61, 26, -43, 26, 26, 96, -2, 89, 83, 96, 113, -46, 12, 86, -13, 4, -81, -35, 121, 46, 102, -32, 64, 98, 65};
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
    msg.setTimeStamp(0.7578619794929885);
    msg.setSource(62346U);
    msg.setSourceEntity(141U);
    msg.setDestination(13283U);
    msg.setDestinationEntity(237U);
    msg.plan_id.assign("XNMDVSYTOKCEUVTMTNTWQIWOGQDSNJLYWQFTCREYWOZOJDRSFWIAPXUWXEPKDSAEXLRUJMLQHMPOLFOUEJISPFRSZKFXVBJENVVTZZSLFCPKTRIUFMGZQKLNBHCVDZHNQCMAGELCMYDILYZAAYVACZWJBJXYRMBCGBBHPQNDKHQEEKF");
    msg.plan_size = 61277U;
    msg.change_time = 0.7276677244837068;
    msg.change_sid = 45618U;
    msg.change_sname.assign("WDSGSWDGVUHPPMEZKHNFBFBOQXDKVUEYG");
    const signed char tmp_msg_0[] = {58, 46, -93, 108, -62, -56, 109, 126, -21, 126, 53, -95, -20, 21, 9, 45, 36, 119, -107, 60, -49, 33, -110, -48, 30, -49, -51, -99, 5, -118, 97, -47, 124, -21, -25, 107, 119, 103, 65, 29, 114, 53, 88, -122, 20, 97, 109, -13, 102, -14, -81, -98, -120, -89, 114, 27, -9, 41, -112, -120, 85, -25, -1, 34, 71, -81, 109, -18, 67, -5, 7, 33, -95, 114, 89, -26, -50, -20, -16, 92, -71, -11, 48, 74, 97, -2, 10, -112, 89, 74, -38, -118, -17, -59, 45, -94, 98, -62, -61, 69, -100, -29, -72, 41, -10, -29, 59, -42, -73, 26, 34, -8, 109, 79, 112, -46, 21, 41, 7, 36, 75, 65, -79, -63, 13, -25, 13, 125, -16, -118, 104, 101, -15, -78, 13, -111, 63, -32, 31, -118, -55, -38, 55, -41, 3, 97, -80, 70, -16};
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
    msg.setTimeStamp(0.36640197938729335);
    msg.setSource(23657U);
    msg.setSourceEntity(55U);
    msg.setDestination(20380U);
    msg.setDestinationEntity(29U);
    msg.plan_id.assign("YWZBVHCPMESTSFQJOWKIEULASIDNUGLZODYLSVGEQHXDHQJPVCTINCXUBDHQRHOUVLIBIZCXEGXMPOJRTUHZKYFKMGFKDVHYCNJNTBLYXWSMXKRINWITSECVYSGAAMHWVEKAOOUERBDFRGQQVFGNKAVIULMAOBFCRQTPWQTX");
    msg.plan_size = 9199U;
    msg.change_time = 0.8317113500775868;
    msg.change_sid = 9918U;
    msg.change_sname.assign("GCHAEOGDZWSUWNYUKLSMDEXHXCUPRFIJVYWQPEPYFIKLRJAARGHOXQWEGHGJTJAPFJWSBKXNDJOBCLUCNCHCVMLVUONAKQQUATYDEIPLOHHZJBWQRQZTLOIFLHQNVXRRVGYYZBTIOLDYFUDBVMUNDP");
    const signed char tmp_msg_0[] = {43, -111, -63, -118, -61, -8, -128, 62, 32, 88, -33, -103, -8, 81, -99, -108, 34, -81, 122, 42, -32, -23, 76, 111, 8, -17, -3, 104, 75, 65, -62, 73, 122, 69, -39, -108, 20, 99, 3, 90, -123, 61, 51, -105, -120, -20, 17, 44, -4, 90, 13, 23, -47, -7, 23, 17, -5, -58, -46, -63, -19, 73, 6, 6, 84, -113, -86, -61, 64, 42, 51, 111, 29, -15, 40, -41, 64, 73, -90, -46, -128, -30, -51, -124, -62, 39, 75, -110, 119, -60, 86, -125};
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
    msg.setTimeStamp(0.7131650204508988);
    msg.setSource(57158U);
    msg.setSourceEntity(228U);
    msg.setDestination(51285U);
    msg.setDestinationEntity(180U);
    msg.type = 190U;
    msg.op = 96U;
    msg.request_id = 34922U;
    msg.plan_id.assign("WJANUPSRRISHMNLPTIMHUOQPCJDNFKSCYIJWRBEZTLLHPCIEDKGUDHXYRPDZXDRLMWIQOLUVSSYYTSDKQXWUEZBZJBKPCYIJGZFABGGPWTFUWJFDABHTLWOWQJVTCGEOGKYVAMMQIVROHBBJXMDHLRDPAKMFNNVSJQYLBLZKRVOHYOVXGOKFZSNLQFQFNUOUXCRUXCAXAAEVNPONSKTVQZXCMI");
    msg.flags = 59740U;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.8728744172236736;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QWASLPCNYKAINZJJBQLRAFGCUZGFIECYXAEHLTAMTKBJDDGXOJAMOCXFREJGEKUSGUSMKGZIPTWADLRQJOVOQRISPGLJTIBNCTMEEMNYCYHZIHQNOBQSCKKXBYOQQXFFMHPZIACSPRPDEWKHRUHW");

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
    msg.setTimeStamp(0.5446430576866982);
    msg.setSource(5425U);
    msg.setSourceEntity(140U);
    msg.setDestination(57068U);
    msg.setDestinationEntity(214U);
    msg.type = 207U;
    msg.op = 145U;
    msg.request_id = 18536U;
    msg.plan_id.assign("YEFLZLHJELOVBMMLFIVOGDKGBMKTUSTOGIPUKZOYAMQUKPQUVPNXQEDOKFHGXZVUSTIRFJSUWCPYCKMAGUJSRXAOHJTAZHFNYLMAZFRYGIHQQWDDCRMRYEVPZVEZHRKXYGBCQODRNCAIBJJTBLOLAYJSZWCDNSWHJXN");
    msg.flags = 18901U;
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9342474138453863;
    tmp_tmp_msg_0_0.lon = 0.5567916781451867;
    tmp_tmp_msg_0_0.height = 0.8187547216478365;
    tmp_tmp_msg_0_0.x = 0.47039534543065487;
    tmp_tmp_msg_0_0.y = 0.9685275103285695;
    tmp_tmp_msg_0_0.z = 0.9262981011327811;
    tmp_tmp_msg_0_0.phi = 0.8014582483413445;
    tmp_tmp_msg_0_0.theta = 0.05807538993802741;
    tmp_tmp_msg_0_0.psi = 0.7134567983320389;
    tmp_tmp_msg_0_0.u = 0.1273309411113308;
    tmp_tmp_msg_0_0.v = 0.26844974763945917;
    tmp_tmp_msg_0_0.w = 0.12518218002120818;
    tmp_tmp_msg_0_0.vx = 0.7684270961246428;
    tmp_tmp_msg_0_0.vy = 0.5709813800535363;
    tmp_tmp_msg_0_0.vz = 0.5520856900706895;
    tmp_tmp_msg_0_0.p = 0.6368305665565012;
    tmp_tmp_msg_0_0.q = 0.9540052880908337;
    tmp_tmp_msg_0_0.r = 0.9899007266339309;
    tmp_tmp_msg_0_0.depth = 0.0949835632638456;
    tmp_tmp_msg_0_0.alt = 0.8145725417723602;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 63U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TCJQJVJVEWCAEIKNJRLUHBMLMYGZYCIPVHIMHEYXSUHHSBT");

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
    msg.setTimeStamp(0.07620496004502053);
    msg.setSource(6831U);
    msg.setSourceEntity(228U);
    msg.setDestination(27332U);
    msg.setDestinationEntity(235U);
    msg.type = 171U;
    msg.op = 3U;
    msg.request_id = 37454U;
    msg.plan_id.assign("WEOFVFQVIJRBLAPLXYBBIEFPTQKLQTCGDSCZKSMUTDSZYKRVNMHIYOBPKSSXXRLAUBANMW");
    msg.flags = 43507U;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.6242025964255916;
    tmp_msg_0.time_next_service = 0.1290496310857736;
    tmp_msg_0.time_motor_next_service = 0.8252424906465021;
    tmp_msg_0.time_idle_ground = 0.8310205339775287;
    tmp_msg_0.time_idle_air = 0.8415662711230718;
    tmp_msg_0.time_idle_water = 0.3865028558251402;
    tmp_msg_0.time_idle_underwater = 0.2051635315953112;
    tmp_msg_0.time_idle_unknown = 0.9148658475226382;
    tmp_msg_0.time_motor_ground = 0.15637815377518305;
    tmp_msg_0.time_motor_air = 0.717664343631739;
    tmp_msg_0.time_motor_water = 0.5940939811723212;
    tmp_msg_0.time_motor_underwater = 0.8609266367073913;
    tmp_msg_0.time_motor_unknown = 0.9179121657730871;
    tmp_msg_0.rpm_min = -9438;
    tmp_msg_0.rpm_max = 13080;
    tmp_msg_0.depth_max = 0.31025097261017875;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EVYGAEPPLGMDKFCUIZCQGNJSIQFYVVFGTOKITGRTVXMPPUVATOHALBBUSZMJOABJQEWBSHSPCLBUSUXCXAHCJHQKHUSXLGZMYSVUOWICOONQFXNDNEEQWTNHRITBAZDCSASQQURMKHWOCUWHTNNCJIZVWKPFBEPIMLUPDFCYLGXFDZKGQYVRDWXMRETOJMOBDYNXWIRHJOLWDRZBEJKSTIZ");

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
    msg.setTimeStamp(0.2590974825535586);
    msg.setSource(39623U);
    msg.setSourceEntity(10U);
    msg.setDestination(7937U);
    msg.setDestinationEntity(168U);
    msg.state = 131U;
    msg.plan_id.assign("NEKILDDSUQQVVDGOPRGCPMRBOYATDMQHXITXRVMEUKXMALTUHTKTLJPMBGENBOOSWSJAZWYLIBYWSGCQGFGVJHPEJZNHOIYBVXLQOTRFERJRRKXWPUXCFYUDINBPRCCYOFTHGTHSGJADJJEEDPLMVRAUFVFTPZDXZHNAAQMFHBLAIYZFYBIZKBEWLGVGWSOISCCK");
    msg.plan_eta = 135329609;
    msg.plan_progress = 0.7869389106431267;
    msg.man_id.assign("KGXNGNSUXDBYSBGRUNNRQGXRUPREYKFIDHRGNXPSBFEDWBWBNAAXAVOEARKWOOZVQSQQUQVWELZFAZMCJROBPGJCRCPGZNRFLQFAFPJSWJTLKKKHA");
    msg.man_type = 5669U;
    msg.man_eta = 93154032;
    msg.last_outcome = 194U;

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
    msg.setTimeStamp(0.41740029431103487);
    msg.setSource(26632U);
    msg.setSourceEntity(90U);
    msg.setDestination(25351U);
    msg.setDestinationEntity(119U);
    msg.state = 75U;
    msg.plan_id.assign("CKEONGHSMCYYSTFMNLKVPXZBWQWWFUGKTVBXTWYOMTWSVERUZYSIZEUKATBEPYVZQJQCGPBPTWUMNLCQEAXHMNDCCZOIXHJSCVCLETRSKMIQARIMFNDVADHORRDLHWISWJKRIOYUXKRAJWGBRAPDQBLRODIWZVLQPKJACPXULFAZXVYEJVQQZFXGFYGKPAHTBAJBUGCIBTNMROVJLNJFINGEBEIEOZLXKNHLQMSFHOUMHGJUFZDP");
    msg.plan_eta = 1642252374;
    msg.plan_progress = 0.5133179473955795;
    msg.man_id.assign("KLUGXUMVDGTFGVIQHZNUFNRSHZDCDJHYJOGOEIWBRPLTRYDWYEICCOZHELTSMMXXJRCIJNNQYLMXZANUBAFGXHCFEAHWBHSGSFJWGIHPDYVLOK");
    msg.man_type = 27669U;
    msg.man_eta = 1913675253;
    msg.last_outcome = 95U;

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
    msg.setTimeStamp(0.64730676069249);
    msg.setSource(24046U);
    msg.setSourceEntity(27U);
    msg.setDestination(13413U);
    msg.setDestinationEntity(170U);
    msg.state = 231U;
    msg.plan_id.assign("VWOYGKONXOIHREJRDVCDJKYXUYFHTPMSNKPZFARCEAXBRGNYLETAFSRUCSBPHACMQBMNHEGOTJFVGHBYBSIIKVVPKUWBDCXPTKIAGTNTYGQJNNDIJQZJEPFNESLLVQJRHJDMWNYREIPVLLSFCFQXUEBEDWMALTZXOAWK");
    msg.plan_eta = -1161197639;
    msg.plan_progress = 0.6969655098664618;
    msg.man_id.assign("RRWQLYARADCDZMCULVILGBMSHEWGQRXPWDU");
    msg.man_type = 26122U;
    msg.man_eta = -1804840312;
    msg.last_outcome = 176U;

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
    msg.setTimeStamp(0.11154618713271147);
    msg.setSource(10049U);
    msg.setSourceEntity(91U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(45U);
    msg.name.assign("IVKFVZMYTAQWBLIHRJYKPGSCHGSWLRZQFVYKZZDAXBYJKXUBGQMMXLZQMRIUMJUKJJYZXBTTXURWSLOUCBSCZOJJPIAHIZTDOFLOVODAUWXNDGADGYDNTEWEXVSMBIEPBJWWMYZHAXNCEHHVHECSVELFRYNTIWONBQRHYWKMJVQFTMPABOSDCAPFFDHFEINUGQDTCCZRPULGDPUQPKOEKMELJSCNLGCV");
    msg.value.assign("TZIZOKOVGAAJOXKFCEFZMWBRDNPMDLGDFPRXSNXVUCVWDNYEZQBGUHNDVVJTEAOVMOCQQPHXBMQYMKZPLTEPMNDMHOUFTPRUUHLTWCAQSYQFKLNJXXBQYXHRKSKYCPLTJZYWTWUWBFYFGBUIZQYXDIHNSCDZANHRTEDWORVIXMSWOWKKUIDHEOJJJIUEHTRGQYABMVSA");
    msg.type = 57U;
    msg.access = 53U;

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
    msg.setTimeStamp(0.2518690668429706);
    msg.setSource(233U);
    msg.setSourceEntity(204U);
    msg.setDestination(21854U);
    msg.setDestinationEntity(15U);
    msg.name.assign("WKXMVPHKLPQRQIKQDIKUFCCXNMYMXISJGAHBNYTXBRDXOVYTVIBUVADQHJHQOMNZREDOAGDEZTKUBHKZCBJMGQESEZCRVABRWQ");
    msg.value.assign("VZNXZYMIMWBYDKUJOYLUFXSGTOYNPIQDCSTARFVNHNVGQSRLMJCGDTJISRYGHABZNCYPKKQMGUQUDUDRWYEXGCWFMTFNOAKLEIAZUBHGVVMQMFSYHOCSWEGENQZNAKRKSIECUCPLIACEPJGXOMUAOMTOEDXTVDANZJKKNGSCEPJVLHDYPZIWXFXJKRLRSMXWWVKZOXOBYHJBPLFFUIILBDCVQRRBAUFQQTHLAITRHTEBPLWJJWXDOPZH");
    msg.type = 59U;
    msg.access = 64U;

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
    msg.setTimeStamp(0.14852698624324434);
    msg.setSource(17956U);
    msg.setSourceEntity(161U);
    msg.setDestination(45517U);
    msg.setDestinationEntity(116U);
    msg.name.assign("PVJUGZAILRDFPDEKSMPXWPWTFJHGDXMWEXJHZRABEHHJFIVNDEKCQ");
    msg.value.assign("NLLSUVYKEMZWEEHGTVAFMWFJTACCJOJEHWASUTJYUDVJYDNGBCZQOFLIEGRDGLZVLBSMHDFGCIAMBQMMQVLCPQXAXMJONKTAOAFRXRTDIRWUFXABYCZKZXDGHGTGHWYSDTSKBWRFPQZNGNPDNHIVYXQNJKZHNUSLTEQHMXYPPJWMFUUZQGLOXO");
    msg.type = 166U;
    msg.access = 26U;

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
    msg.setTimeStamp(0.18130294010923986);
    msg.setSource(14240U);
    msg.setSourceEntity(164U);
    msg.setDestination(19409U);
    msg.setDestinationEntity(168U);
    msg.cmd = 160U;
    msg.op = 232U;
    msg.plan_id.assign("VIFGZYTDGBTUZRPOCIYIUOUYXTCWKURELPMMCNOBVASAKZHEHMQTFFNSQIJWBCBOSPHLJHMZJZCADBVDXAZIETZHRSWUNITQMKBRIKLQCGPJXNLESTWLSQRKGRLPUWDKAJOLXYPCYOT");
    msg.params.assign("KJAYZWBBEWENDWGOACCWPYRGJMKCDHFEGEBFEDNBQYVPWPNQJSHCAWKINRVBOPDYVBCZKMOMZRGADLBFJNTCFRITSSYQGMUNFSNUFFOKTWOTHXVNMUIENGOMVHJJYALADUJAFKLOJHLRPXQSPHCUBVBTQIIMPITLACYUORIACMXNWZIXJXHUPZZKSEXPRZSKWECUDKLY");

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
    msg.setTimeStamp(0.9958612702926833);
    msg.setSource(2375U);
    msg.setSourceEntity(75U);
    msg.setDestination(2378U);
    msg.setDestinationEntity(89U);
    msg.cmd = 240U;
    msg.op = 189U;
    msg.plan_id.assign("LOHGRPUGAHFFHFZQHLCLOWSERLYYAQHPHYYQKISZIPSXSRAPKUAQLOJSJGNDANPMMWUCHYWXGZYVWXMKTRCAETVZEUCCCAJTXBDJFVYEAFJMBIRRTAEWXZEGBRDWHVKBTL");
    msg.params.assign("EWPDZKOWYDOCGNLGRZJFEEXLGETBNGCPQEJBEPUYKFIVHNTRUZRXVSZSQMJROVRFEPQLHWCHDPTSUSIPVLBDKMZETRKJAUQLILMNHNHYHMXLWF");

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
    msg.setTimeStamp(0.28751766695879766);
    msg.setSource(27294U);
    msg.setSourceEntity(111U);
    msg.setDestination(52913U);
    msg.setDestinationEntity(234U);
    msg.cmd = 242U;
    msg.op = 131U;
    msg.plan_id.assign("NFNPCAGGNZHFSDGFOJSBPJIZGJKENDWYZOTRHHMYCVQQCRTGFMLYUVSRZWUJICQ");
    msg.params.assign("EOABOACPVOKRUFDCTCBYYBGJ");

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
    msg.setTimeStamp(0.5139575610736351);
    msg.setSource(13099U);
    msg.setSourceEntity(185U);
    msg.setDestination(18398U);
    msg.setDestinationEntity(10U);
    msg.group_name.assign("LKEQFADWTISVAEBYJJDLXIBFTGDRZHUJVIKOYXCIGVYXOASIUZOVWOWWAFQUHPXIHWUBJDQKLQUBCIZIKUNHSMQMRDGTPESQFAFMEGKWMTTXRGFPMXZJSEWCTPTZKUOPTXBKGFGYTDXVQZHTOBLPNWNJRZCMBCDORUYHEJNVEYNPRFZGNZCWCGMBDHKWDHSOZLQAYFDC");
    msg.op = 137U;
    msg.lat = 0.9949253995579249;
    msg.lon = 0.4927192629914394;
    msg.height = 0.09725472731275009;
    msg.x = 0.1219683094293954;
    msg.y = 0.4768008577814563;
    msg.z = 0.6727275993853957;
    msg.phi = 0.29062327588136005;
    msg.theta = 0.6266879857905818;
    msg.psi = 0.46414501213662573;
    msg.vx = 0.5313154618111455;
    msg.vy = 0.9855314549534109;
    msg.vz = 0.7245086953696581;
    msg.p = 0.6372924451130065;
    msg.q = 0.8528007164391557;
    msg.r = 0.8384582808922749;
    msg.svx = 0.21359947084601172;
    msg.svy = 0.851287863547553;
    msg.svz = 0.2827101732608045;

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
    msg.setTimeStamp(0.7540533048304853);
    msg.setSource(42466U);
    msg.setSourceEntity(17U);
    msg.setDestination(5090U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("LPXHSJEPYQRXENNJABQPFHYHMVQTQRRIFWSU");
    msg.op = 157U;
    msg.lat = 0.2073408191346805;
    msg.lon = 0.32180476143303705;
    msg.height = 0.398385171529817;
    msg.x = 0.39895046528001066;
    msg.y = 0.006146678941482575;
    msg.z = 0.1143879666411034;
    msg.phi = 0.3019428691874556;
    msg.theta = 0.308703795933686;
    msg.psi = 0.9635815975322344;
    msg.vx = 0.6560286742312538;
    msg.vy = 0.3353299268620866;
    msg.vz = 0.5992735274807758;
    msg.p = 0.04462729091133444;
    msg.q = 0.4447625202034212;
    msg.r = 0.182434998666955;
    msg.svx = 0.04600272315268006;
    msg.svy = 0.4586783922191596;
    msg.svz = 0.664633882779302;

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
    msg.setTimeStamp(0.2446472428216625);
    msg.setSource(47388U);
    msg.setSourceEntity(19U);
    msg.setDestination(27190U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("NGFQKLYLPDQVYCSPHEMHCPIWJMCLQJESXFEFPTPRNJXAGMMDQOLCWVKHJCWEMAROAWPBPXTHXIWUDCKGCSBQCIWADKYIHIUQRUNVZMZGZXXLVBEHTKBZUFSYXYPRURLNVEXMDADNDFKTKVFAFIGWZYVGVTPSBGXOSFOAFINNDSCBFTUHBQAIEQWRZQTYZAVSJBJZEJJMYAUHHUGOKRIBTDUJBHLUMXO");
    msg.op = 117U;
    msg.lat = 0.7384149718639872;
    msg.lon = 0.7175666367483424;
    msg.height = 0.07496093295117234;
    msg.x = 0.8134694985204968;
    msg.y = 0.8477219330251293;
    msg.z = 0.2662256005884953;
    msg.phi = 0.4976599052839956;
    msg.theta = 0.9483848196214978;
    msg.psi = 0.5781837949415107;
    msg.vx = 0.8149539509938557;
    msg.vy = 0.6793974216422506;
    msg.vz = 0.16442969800435203;
    msg.p = 0.8419415893222054;
    msg.q = 0.8373324868532481;
    msg.r = 0.8781870648707072;
    msg.svx = 0.24510524820177815;
    msg.svy = 0.6539454588098254;
    msg.svz = 0.14921380252779914;

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
    msg.setTimeStamp(0.737267909656487);
    msg.setSource(57488U);
    msg.setSourceEntity(194U);
    msg.setDestination(41217U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("DTMAJPZBRXKFJYJKJDCWNBUPCOBZAGVDNXNAKAKPHTIBNHFRXJTXSVLLNOQZSUJHMISDHWDOYDLCKAHCFFXRQNWEADYURMTBUJZPFSCWKWYOIYYJLWEBGECKSIUNSSTYLRUVWCMTIGJLVOHPUQA");
    msg.type = 75U;
    msg.properties = 70U;
    msg.durations.assign("ATVFRGHPAMPAUYYOIEKNFMOWQLKJTYTIYRHDBTXDKCDFKJXLLYYLNXUSIIYGNNRCVFBHOCIZTKWSEQAFVAXKUOPBVOGHVZXLLUSJZZ");
    msg.distances.assign("YFVAGSIPDKSOUAQFOILCDLZMEAIPCHQABDWRNOZXFLJGYEBVDLMMMATCFVQNWTGXTSWPZFJCVRYYYVS");
    msg.actions.assign("SOXGFZPKIMNSUCVTXERAHWUBABXELTSLCAHXYGACQQVAVBDYHJECOLPEAYXZXEANIHIXYWJSMBUMHHOFVPIFVRIFCEKNGJZQRRPJNLGWJTRUELZSZNOFRGIYOUOPUUWXKJIXKDVQIDPSMKAJXTQOPDNFHQGVATJRDZYRSU");
    msg.fuel.assign("KQVRNZYXFDXTEOHDGWKHGMFAGJYPOTVGQVNVBIXMETBCPXTLJXKAWGQNLUGCYKKCEKLSNCVQFWJZDNZUMUSTABJRRUPMOLUBYAVZZRBOLLSRTHWQSRPIGTPOGDZYLYODJOMQNPRZCPVWOIEEERFVIDIUBAECJYJMTMCYVMKULISHFZXFNCAHAYH");

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
    msg.setTimeStamp(0.33370120510910395);
    msg.setSource(45175U);
    msg.setSourceEntity(224U);
    msg.setDestination(14047U);
    msg.setDestinationEntity(127U);
    msg.plan_id.assign("DVYOGMBYAF");
    msg.type = 9U;
    msg.properties = 34U;
    msg.durations.assign("BZWPCFVNDWSGTCUMGREVGRWLEDSSUJCLDDRIOZASPMZOHMRESUYFYNLLKWDQVYSXLWUCYIYFXHJHTIETZNDEMAGJUPCTASJCEBAHAKBQJBWGJTZCKVVORZZRBYXHRVTORENCMDTYTOIQFBQQWPVBYOLPF");
    msg.distances.assign("RILSYOJYFGGSVQHACJZCWDZZKDEFWUYAQCYCZDHZNWOUWUOSMTGKRGJVNMECHHXALSUWSITZFIIRNMJLWOAGRPKORJXAPZIMQDKEKVQCXLUJOXTVDPEYLPKHXVKCYQLFFJRZQULNTRT");
    msg.actions.assign("LDMAUGJRYNNHCR");
    msg.fuel.assign("MYQKTXLPIJPUULEMMIBSZFABDBPKOTUKHGVMHIHKFPNVPJLIMLZKPEOHDHZOBASGFQWYLXSUQCRNYWEYGADXBCTRYGDJKWNCLKDYJJBVAFCFULKPJIRLOVAFSAMVCODQWISOQVNMJVMCDVTIHEXTVYBCPQHZZLPUMQSPDEIBMACYNESGHEANXJWXUKWNRWTRXFGTSJRYEUCRZTOVSZWGWHJHR");

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
    msg.setTimeStamp(0.17249913450679433);
    msg.setSource(63227U);
    msg.setSourceEntity(55U);
    msg.setDestination(14848U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("DIETGUHZMGOYPTMBOZJXDXIKNIHXIPYNHGBYIYKLOQLOUGWRURVJPPFQEIEAAIKQYINZUVRZJVBDLMJQJSYKWQNLDVPWCONERXDVBJMTUKGRDSUPZGCXRGQCCHVZFPWDNCHELLWNKEAALWQHMEAKOSEJCSIVPXZHFMTFWXHBVBRNSTTANTZDVVGBBQBSCSFB");
    msg.type = 194U;
    msg.properties = 32U;
    msg.durations.assign("DCPNMOMAVPNAINKVCMBRVLQLTFUPEQUCFXBCYJSZFBCWGPWTWZVHKWKXRGXSSLMBDMUOMGFLAUIDHCYTQTTQDZWZQVLMRNRPTABIYKYTHZGGQGJCSARPQEMWIZVZCSBLQPUKPUOSEGN");
    msg.distances.assign("BDGNLZVUHPUJRWPFZHFPBYMTUCEPCJBFOADQPTLMBTXGEUJSDPBGBQSPQETLDZCXXYLONNKXEGUQYHRMHCMUORAZ");
    msg.actions.assign("NWGLRVFXQDYDCMHUMHQOYVLBQNCOBASQBFAHCIAPRODULTMPZWXNZUFAXUSZ");
    msg.fuel.assign("WSKOACNNMKTOBWQOYRLFFOBRTPDXJEYOQJTRWCXCSBSKYXYXVTEPVXUYDMFRLVZOUOJWGEEDQYFTGLUOKZEGZVSNARWGYB");

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
    msg.setTimeStamp(0.7577173899832754);
    msg.setSource(39017U);
    msg.setSourceEntity(177U);
    msg.setDestination(8265U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.5779126646757559;
    msg.lon = 0.6687984477250326;
    msg.depth = 0.34679373122709434;
    msg.roll = 0.20728826655381793;
    msg.pitch = 0.26403920182230767;
    msg.yaw = 0.426596143339537;
    msg.rcp_time = 0.3645272816318733;
    msg.sid.assign("ZPMBIMDKZJPOIBIYHHVRBZPHAAEINKLYWRDKMMKCGEQCAT");
    msg.s_type = 135U;

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
    msg.setTimeStamp(0.1880345555681413);
    msg.setSource(43008U);
    msg.setSourceEntity(216U);
    msg.setDestination(54832U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.8939287617228675;
    msg.lon = 0.10096022404766403;
    msg.depth = 0.7471033606440431;
    msg.roll = 0.08614309562728195;
    msg.pitch = 0.4385674009642704;
    msg.yaw = 0.5531428996655691;
    msg.rcp_time = 0.054327887861522206;
    msg.sid.assign("ICPYKKXFIDXLPQQLSKRRJZPYMNHTBETLQIFXIZKPLFEENYIBNBRFVTCTAGDJZIIRKOUXJUDAOYBQZDZOPXSHSUVYSWSRCR");
    msg.s_type = 139U;

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
    msg.setTimeStamp(0.9355816909978831);
    msg.setSource(63536U);
    msg.setSourceEntity(233U);
    msg.setDestination(15875U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.14985117648434976;
    msg.lon = 0.1945670806144978;
    msg.depth = 0.8045593758385953;
    msg.roll = 0.14629278285511693;
    msg.pitch = 0.845139458308221;
    msg.yaw = 0.34461862242904895;
    msg.rcp_time = 0.2896100184500987;
    msg.sid.assign("ICQMQOUZNVXMIOGBUWULSJFQLHEJYLRBTNPCCSVUTFEWIZPYMOKDPXYOLLVHHWXBXASZVENGWIPURTPDIRXSEOQJKYTYQCRBGNKJSVRJHDGXGOUKMOQSCMH");
    msg.s_type = 54U;

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
    msg.setTimeStamp(0.6765247660640457);
    msg.setSource(55403U);
    msg.setSourceEntity(118U);
    msg.setDestination(39262U);
    msg.setDestinationEntity(38U);
    msg.id.assign("LBCASSPQPMFVNXAKUQ");
    msg.sensor_class.assign("VOWZWVLBDWWEXGIYVHEZYSYCDCVJXUSNNLSMYECJFPIWNKCOUPOXKAUZLVIOUMDZAXQAITIJVGDQYRRZFBCXSTU");
    msg.lat = 0.020462449219737833;
    msg.lon = 0.5259349188638333;
    msg.alt = 0.8593047363671799;
    msg.heading = 0.5365991354639761;
    msg.data.assign("SIIXRGELDYOSZFKMFFOSURANZKUEZHUCBXFHCPQOPPKWFMTYBAOEACIQCUVLGRMXHTAXOAUJXDIGLTDKTTXQJPHFZHKNSVUBTLMIRETCVECMNWIJJAHSBNIUPNNXQEVVHROFQJTVEGLBZXJPZAYWRLBWDRJMY");

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
    msg.setTimeStamp(0.4442432794659643);
    msg.setSource(41724U);
    msg.setSourceEntity(85U);
    msg.setDestination(63316U);
    msg.setDestinationEntity(250U);
    msg.id.assign("HXYGBIXQAFGQMJBXYJWUYXKPNTPWEWEXKHORUVISEOSKVVLWPUDZXJJWLGIQFKOQQHIZOYTFHULTNPUBUSCZAJOSWSNPLILHNQQMEZNRRFTIDAMDVKAZDABJWRMKCRZRTVJHEODEAXPPUDGKKLQGWSLDVAZDYY");
    msg.sensor_class.assign("RZJYSNNXFAKGPUEQBCFEKHVGXPFOXPCRQMBCRJLRFVFSGFCOKIUQQNZMZF");
    msg.lat = 0.24006058057903468;
    msg.lon = 0.30062531729500663;
    msg.alt = 0.7258313024711782;
    msg.heading = 0.07877741137314076;
    msg.data.assign("YOMEFKGDUIUEWUIGXRODOMPLQJIQZBZZHQLMXBOAKYHXWFNXJVZLRVKAVLTFCTCSLKZNOBGIDDIHPTUSBSGKJGNYVRAYHENZNRYESKCUVIRCFBGSGVHYRKPQFNZCQJRZCQLJVUVGHCUUXWQCXTSOWJNTPBSIMTPSJXMRTWIWNMBDMJBWMPIFAFCWEFLREOYVRDKAHYHZOKJBLQVMBSPNIDDXHQJFAD");

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
    msg.setTimeStamp(0.09289344169153235);
    msg.setSource(4107U);
    msg.setSourceEntity(207U);
    msg.setDestination(9215U);
    msg.setDestinationEntity(16U);
    msg.id.assign("YBTLYQKLEALZNGYCFQYHANEPJIBGBKVISIGXBWEHTIDRQKZCYKFSETOGTDSTFDOXEDXPOGZZTJJLUAIHPBOFRQFCYNIDBJYYRUVCZVGQJYOJOEVUGMCUPFAVWRGSNRXBUMVWZILLJUPMHDAEKCYGTUZGSSXEBAMQWLKKHXHMPUIPMAFLEBNWNFWQXD");
    msg.sensor_class.assign("IWKYBTHAXNQKMTIFCWZXDSMUXYIJCKQSTSXFVONYTGMEHPTIIEBSUJBHUKVIYWIJSOQXZNPVQZUALKHG");
    msg.lat = 0.6493873901521833;
    msg.lon = 0.6316765362146392;
    msg.alt = 0.7697631136636104;
    msg.heading = 0.17186714594068253;
    msg.data.assign("JSDYDYCUMDKPLXIIUBDJGKZRTSLUNKBBLMVMOXIVVJOZVDIKICDIZYSUSUQPTRBPCPFWMBQKJOZRROVZOBXTDSFOHJGLQQIAFNF");

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
    msg.setTimeStamp(0.9622857775622646);
    msg.setSource(40006U);
    msg.setSourceEntity(81U);
    msg.setDestination(54895U);
    msg.setDestinationEntity(207U);
    msg.id.assign("MSFAACIEYSZNWUKCXNXUSBOCIUUYRZHPCHKISIPQUXDCDOINAJFKAWFFGWBIMMCJWTCTRXRYEGDZOMDJOLWXKPNSIQHPMMPHAJKQUMCALJEYATLVYFKUDEFFOGHLDARSVHDTAVPQHLYGHZCRNKEDVYSWXTZEIEMBVTBWQQUZGNVSBGAOIZQGZHTGYNFYSZPJBERJPLJVXTUVOXNTBGFQXRGOXRMNCSKLKLDHQUJYPVZLOROWBWJDTEELBKIF");

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
    msg.setTimeStamp(0.7576319913305497);
    msg.setSource(615U);
    msg.setSourceEntity(197U);
    msg.setDestination(29108U);
    msg.setDestinationEntity(194U);
    msg.id.assign("DQVOWSIFJGKURMVGJOYLNENZFKGPISEIWBGYBPHBADFOTBNCIARUQLHFHRDUHOZUXBVYGLYMGDFEVCMDNJIWZORXQGVMXYUKLWJTTCUYZLPZCFCTXFDCTSZOHPBVAXBQESYJXLSVEEGBEWSWNVLANGIRSMQRSDMTYBYUZHKKPIZCJHHZOVFGROLRYXT");

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
    msg.setTimeStamp(0.16274431221151875);
    msg.setSource(34340U);
    msg.setSourceEntity(194U);
    msg.setDestination(56499U);
    msg.setDestinationEntity(98U);
    msg.id.assign("QRHPBFSTTLKCXSUHOMTLIMAOGWVWCEPLVBXGFBMQDSETVZZQQBMXGHXGFIPXFDWENRCHCHYYOSZBZQWQSMEYKSANKTTOSRNTXPESMKJEIKAICBHJPIIQKOENRQNOVSYAJYCGXOADXYVUINMHZDDJFGLLJWYWTCZYLYZKGMULXUJFHCVCFIAMGVMENBXRWPOFUFZZJTAPRRWBTAJDKLDL");

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
    msg.setTimeStamp(0.5158206840991045);
    msg.setSource(684U);
    msg.setSourceEntity(32U);
    msg.setDestination(35297U);
    msg.setDestinationEntity(204U);
    msg.id.assign("WLEVAUVYXSNNSLEVIBFZJEOZZIPDMMQWMCYLPKRUFPKGMXCWCCFATIRGGTOVDRPXUHENARBVXQIOPHWQLPFCAIXQROYHLDNFUFFHNLGVGBCSDQDTNDEOZMMSUZCKPWHOUZEIOJYRRZKQUQUCSYDXJIZDBIKYLRAOFJAELNZFXTEHYIJAPBYMPTGSLVTNGJTBJYWBYWMKHNQQLSKXTHPNOACDXBVBTSMEQUDHSKFVGJHGAMJBIEWWZUXW");
    msg.feature_type = 196U;
    msg.rgb_red = 74U;
    msg.rgb_green = 198U;
    msg.rgb_blue = 52U;

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
    msg.setTimeStamp(0.5720721760267743);
    msg.setSource(23020U);
    msg.setSourceEntity(175U);
    msg.setDestination(64449U);
    msg.setDestinationEntity(29U);
    msg.id.assign("PFBHHYIQEIWGSNJHCKDBWGBFPEALWINABZPESSOGUMYTRENSQRBQULKRTQTMINJDXNGRJZCXORHWNQHGOSKNABPGUXWJVUOJKTCOPLFAOZVFEVFMACXLBPWGOURUUTDKWLYQCRZIEAKDSTHKPAGDIZVMYZTUWNSVINZQMPYRSVODCYRYYZVACZTKDWMHFRXHLAXJLSLEMWSVXIEJTDNCFXMTYDMCKI");
    msg.feature_type = 29U;
    msg.rgb_red = 225U;
    msg.rgb_green = 28U;
    msg.rgb_blue = 102U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7395424846754187;
    tmp_msg_0.lon = 0.6457249070335668;
    tmp_msg_0.alt = 0.5605568517218257;
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
    msg.setTimeStamp(0.45823808800636745);
    msg.setSource(9858U);
    msg.setSourceEntity(128U);
    msg.setDestination(30636U);
    msg.setDestinationEntity(244U);
    msg.id.assign("UUDTTNWGWPWXJTAJZTVNEOVDLSSCVYPMIDRQOIBMJHEBOTZXSCLLBFOAKHGQUWXDSHZSOICIEGZAAQGKESSRLCSZXUVRTWYLJVHGYVBDBPBUMRACJYDARJIYXGEMOEKETNDDKPFUIMUGLNQTVHYPLFDQSRWWNKAZMNVNJBACMB");
    msg.feature_type = 22U;
    msg.rgb_red = 226U;
    msg.rgb_green = 151U;
    msg.rgb_blue = 200U;

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
    msg.setTimeStamp(0.04567311116334605);
    msg.setSource(64921U);
    msg.setSourceEntity(105U);
    msg.setDestination(29983U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.4928440317710938;
    msg.lon = 0.018054233054418112;
    msg.alt = 0.8157380970516854;

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
    msg.setTimeStamp(0.5412502075687989);
    msg.setSource(10818U);
    msg.setSourceEntity(107U);
    msg.setDestination(8402U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.5611514546752688;
    msg.lon = 0.9460974474325539;
    msg.alt = 0.05096623880363538;

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
    msg.setTimeStamp(0.816061686536825);
    msg.setSource(53319U);
    msg.setSourceEntity(150U);
    msg.setDestination(26266U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.4557514313286293;
    msg.lon = 0.05484214489825623;
    msg.alt = 0.12336181945200253;

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
    msg.setTimeStamp(0.6364796540704636);
    msg.setSource(8922U);
    msg.setSourceEntity(36U);
    msg.setDestination(42559U);
    msg.setDestinationEntity(167U);
    msg.type = 77U;
    msg.id.assign("GQTLUVPZMEVMSZNPPCAJFVLOGDHKFMNNWFUKWCBAKERYBVOGZFSWHCSWHBVJKEPDPIBWPGCJRLNUAOWTYFMQQBAFQEE");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 135U;
    tmp_msg_0.snapshot.assign("TQBCMEGSCIJTVORBUDYAEAMMSVNRVEYFJRKERYODXHGVNPXFIMBZDDOVZMHZJCKBZWZAXOLZCJCKHXQPSIWCUJKAEBOVAWTDPXWHTCINWBTLXDOSHHYDKIFCRUNVRQBGCUEEZQKGFKUDHSKRTTLLNLRONXVTAVTORWUMUMFNIYIIXWFQGE");
    IMC::Sms tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.number.assign("MUPQZOMPKKCBKZWXGHQKWHMCGTXIPNBJULUVFWGBIKZKYMAFPZROMUSJRWVNYCHWXSRRQFDLHDQRDCLYALMHVOTASMWYGGDBVSAREZFREDOOZAPOHAIQGTNEQVUJGYLMZEXJJIXGWQNBONDFCVZVVHIRBTBUOYNQKJPUWJTXIIPEREBJSKKNNXLEGAMQCWLHYYFLWFZPFFUOPANBAKDITTNCULMSFQBATCPYXJECTHSECSSDOD");
    tmp_tmp_msg_0_0.timeout = 40679U;
    tmp_tmp_msg_0_0.contents.assign("TXMJZINMYMGUWVNBMSMYEDOXFOJCBHPCTBWZYVXEKRUBUYUMLNCLVDKLPOSXUHGBWRMGXWCRQBUBPPYRCKNVZAHNIKNMXBHQDFHSOHSXUQWPTPSUEZALJNSLTAVLAFGZGZSVVTEIISRPRAQLZKESYPRUODQHTCGFIKAWUIQCHCKOFJPACTDAIOC");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5814626085079442);
    msg.setSource(51596U);
    msg.setSourceEntity(243U);
    msg.setDestination(12609U);
    msg.setDestinationEntity(242U);
    msg.type = 112U;
    msg.id.assign("DIWVZGODZRYG");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 15U;
    tmp_msg_0.text.assign("RLDBZILOVMZCIIJVINJRNQOFLGLGBWIITDUHSUHWXAFYEKPPYMYEMZAZTMXZFZMJAYCNLNFHVJRNBHVEJKLDBNTHPAJBXVLVSUTZKSRHNFQOWWZTCQKSQOJKTTEBRFEPURWJSJQSEAGROLQGQDSQVOKXPIEDXW");
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
    msg.setTimeStamp(0.1755635782444257);
    msg.setSource(11931U);
    msg.setSourceEntity(54U);
    msg.setDestination(42224U);
    msg.setDestinationEntity(238U);
    msg.type = 165U;
    msg.id.assign("XXRDNNIYNHZAUDVNBGGPVUQJABPALZNHKJFTQEPUDTRVGBQHGOSPYWKFQCMTUNYFAKTOFKGVWROBINLGHRXRQUEAMVEKGNCXSLCRJNKWTGTCYYJFPMQZNXBXMYSVYIOJLPWIPOCCFHCUEBJHSDSUWODJZOOBZZSGJSCDWFDQMWEYPLIUYTSFVJXKLXIRJPZBOEDBTMHEDQFMYHXMMLXTRAKVZQOILEP");
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.1227709824939881;
    tmp_msg_0.time_next_service = 0.5426946588782344;
    tmp_msg_0.time_motor_next_service = 0.9248175720192372;
    tmp_msg_0.time_idle_ground = 0.3483417557911104;
    tmp_msg_0.time_idle_air = 0.8638780150621651;
    tmp_msg_0.time_idle_water = 0.5078270278440331;
    tmp_msg_0.time_idle_underwater = 0.18994735573544763;
    tmp_msg_0.time_idle_unknown = 0.4264586648492724;
    tmp_msg_0.time_motor_ground = 0.41387348048122263;
    tmp_msg_0.time_motor_air = 0.27219513840880616;
    tmp_msg_0.time_motor_water = 0.24890710460088983;
    tmp_msg_0.time_motor_underwater = 0.471669712479336;
    tmp_msg_0.time_motor_unknown = 0.2889609220190633;
    tmp_msg_0.rpm_min = -15338;
    tmp_msg_0.rpm_max = -19261;
    tmp_msg_0.depth_max = 0.26665836614962934;
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
    msg.setTimeStamp(0.11445561445561125);
    msg.setSource(24200U);
    msg.setSourceEntity(66U);
    msg.setDestination(60030U);
    msg.setDestinationEntity(52U);
    msg.localname.assign("AYLOAIQYIVVEDQUWIHMUJDJTGPJBGYOUEQKAFHSETDIIVLJBUOENWHFGSVMYIJUXMEEEGXBMFDHYRCMJINLJKLFFXWTJFILPCIZEUAACYKFRGFBVWSRBGMYYHZDWDKDXCBSTMFSCZOSGPWCZRGRNPXAVLGECOMNUWCUZNQKTTZZSJAPEIXNXOAQOVDPHSUCTLWVHVKZBPYKQBPNKNULKZRXPVCRQZPSRBQYRHNG");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KHGKSTFNAHMRWBTTEQOQZZBRQBIOWGWVNLXUHDBHMGAYZOPGMVOIASPCWLPURMBQAKRERJUJCGYWBIGDLDKBZVLEJPSNNEVJKBCQXMPUXXESDTLIPEXOCJMCTQWFZJECHAIAPPS");
    tmp_msg_0.sys_type = 170U;
    tmp_msg_0.owner = 31098U;
    tmp_msg_0.lat = 0.9489104224981045;
    tmp_msg_0.lon = 0.7467334411325751;
    tmp_msg_0.height = 0.26142770300233165;
    tmp_msg_0.services.assign("WPEYNGEILFIVQQFMRWSATDQOSRBJSTTWOJYCIODGNTSAMNRERJTHEFRTZMKZFQSTWOKIUPHGLFRYCKZNJCPGFXEWIKHQTNBLAHKRMBJRUNNQXWUUGDLVR");
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
    msg.setTimeStamp(0.6171539660564478);
    msg.setSource(38777U);
    msg.setSourceEntity(168U);
    msg.setDestination(53160U);
    msg.setDestinationEntity(49U);
    msg.localname.assign("SSVKQJJHPMTTFISUEDIXXNSYPUCSOTIQVNNVHBZTRGXODVSUUMEDLKTNNYQZZBPYRGGPSFCWMDZJOXBAHJXUQDSAZMZVALZBKRTFREJJJMKEEOBPLRCCYITDEAYCRILBVRENIQWFAGHXNMIZWOVJEEFLODQIUWGKWWVFCYKPNBWFHUUOSLDIWFACTXQV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ETOAWZMBYIDXLIEUHQQMTNTFOKGJCZEVLJUEPXIJGHGNAZBFICDJMRZLINIZFSTSRMFGMKAGNESOHRKTCYJYI");
    tmp_msg_0.sys_type = 126U;
    tmp_msg_0.owner = 9239U;
    tmp_msg_0.lat = 0.434353066982091;
    tmp_msg_0.lon = 0.809805056735041;
    tmp_msg_0.height = 0.19257951240944582;
    tmp_msg_0.services.assign("XTGRPLHCDXJMBDNFCOXDOQHAGFTIKRDRNTHNWZMWWJEEHNMDOTCZFYQEPGPMGVMIRCNJFGARLDWUQSHCLGTALIDAWSGUDDYPCRVGSIALQNVZXORJOIOKEVYTZBUUUKYKWMPYVXKGJBQSSALQWYIZRULMENVHEVLWHFTXNJHLQMBTEZNOJGSAFBFFWPBB");
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
    msg.setTimeStamp(0.6418437723251038);
    msg.setSource(23341U);
    msg.setSourceEntity(207U);
    msg.setDestination(57609U);
    msg.setDestinationEntity(175U);
    msg.localname.assign("CUJOSEDKQPPJPDMPLBXEMOCPUBXNUMMWDHSKFEMAVZUBNFTVWOQAZYJNYUYCBLVFOCJFQDJXQTIQRQSGQGZTXRXXFYJPIOKCBDZZTZDIZKWMWNAYVHPJFZFINCYABVNNGTLHOZKVRUWFJIEHIASEYHMKERMAHGCCGPELSFKRSYTHBHDBXVCOGHIQUADAPGHWXBJLFSVWEGIOKZOCUVLTJUWQBTLRNXRRLLRYSWRDANLTUWMIXIMSPVTK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UGIIXWCGBLLQQDPXXACIJCTSZVUPABJSAKRVYSMMBIEZOVHFMQRUGNRTTEKUNZFAVZHRKIOGJSAMUYPNPRWWLSUITNRKBNGOTTSDHOJGKDGEAVFJHQIVKTSMPZOFBFUHLFPOIFBFCAWEYCACMHXMXWHUYQNEDXEFVLDQUXWCWPSZWYKSOXXECRFBGZDKTLJKBNQQBNZRDDMCLILRVYOMGDZNEJOWRPDAYLAKJJEXSZYMPTPIJBQWGVHLO");
    tmp_msg_0.sys_type = 127U;
    tmp_msg_0.owner = 28545U;
    tmp_msg_0.lat = 0.010236254747835183;
    tmp_msg_0.lon = 0.39210284173878684;
    tmp_msg_0.height = 0.029675575870854787;
    tmp_msg_0.services.assign("NBZCAGARFJTQQBFJP");
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
    msg.setTimeStamp(0.07799563317918956);
    msg.setSource(30053U);
    msg.setSourceEntity(222U);
    msg.setDestination(20390U);
    msg.setDestinationEntity(13U);
    msg.timeline.assign("LBKMAEHOEZLGWIVDDSXHJWCJPNZTQKCFLUXMTSAVQTYRNPZJBTAZTOLADHQXUOVBDIRKCGWPHMLYZMZGMURPGSUODISKTQYEFGKDGXFVUJWQZUSIAAYNLFASCYQOCI");
    msg.predicate.assign("QDNKXVETZCOKXKEAPGPVHYMQODUDXOJHYGGFTIXISLKJMEWZFGSKNICJWHUQCXVSTQGJLNHADGPAPFBPVGFHQRJCWJOUNNRQABWZRDLACJZMWQLPQOVEDIRG");
    msg.attributes.assign("SSXMCBHPQGVTNYKGQPSDRKXWUZLMYTCNUWRJAGZLYTPVHXFHVXSPHHRLFIVRCZQBPUNNYGDLKUDBVMAKICVKHQBTQSQBFWYUCNREDDFQKOMNWGEJXMUILUAPSAZOAEAJMFVNZE");

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
    msg.setTimeStamp(0.9939386892498401);
    msg.setSource(32452U);
    msg.setSourceEntity(30U);
    msg.setDestination(32463U);
    msg.setDestinationEntity(147U);
    msg.timeline.assign("TXCYHCGAHODHEJPSJURAOCWLHPFWIQJBKMMLGASXGOFWYYLEGJVJOBRFEJCPYDQZFPKQQ");
    msg.predicate.assign("UYOIQBUNFBOZZQSWJYHVGPGIMIFODPKSWCBRRFDUCQRNVLEETVCXRQWEKDULKWNSCGXWGNBTBSEABLAKFISOYPEFYJYKHMGIJBCDDILGJAHQNMTNRTOHWULTJXBPGUDEZMJYECQZNIKHVRZCFPNQKOZLGMDVO");
    msg.attributes.assign("ZHCEXJKBXBPLSCHICNLNMPWZGGOFMYGSKXKGKUMQUPTYUPIEIFTGDQHTOFMIAHRRJWLUHGFMGWABANAATV");

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
    msg.setTimeStamp(0.8517411834453793);
    msg.setSource(56276U);
    msg.setSourceEntity(24U);
    msg.setDestination(41384U);
    msg.setDestinationEntity(7U);
    msg.timeline.assign("FJWCRAYYNCSMREIIJHOZYYJCXWBNSAMWLLSQRQRMPSFSYGCCZACXGTUZNPLMZXUNROCRIKPDVTGJVMUUBSKTYCNRWEGLEZUKGNIQWHOIXDQWANEPDWXKAPJUABZJBDVOTMDLMQHPRMEZIUVSBEOPXFPZSVLIGJCXHLAYYCOQUWTKVDZKQOPIALKDFOKAQVYRTABTXEKXNPTFUVEGGQGHM");
    msg.predicate.assign("JVUKNJVORBTXTZBOEOGVSJDXODTCCNQCMPQZJFTSLMCTXGGYXYIWOCNSLZQVFYSQORKGFBUYINKFSNDPUCFBARQYGLFSAVDYPEEJZLJIRAKGLEMHPHUPHRCKIGWZAEQYBFEGNTBSEKIWVKWBMCMBJNDOXKQFTRQHMAHWWRTTLSFRPLYUZYUDPGIAMXXVJVQHEPZWUUAFXUHIXSKHZLUIPZMZLMV");
    msg.attributes.assign("UMFSWJDPRNMMLJFDXTF");

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
    msg.setTimeStamp(0.5193805123524773);
    msg.setSource(1925U);
    msg.setSourceEntity(49U);
    msg.setDestination(59107U);
    msg.setDestinationEntity(108U);
    msg.command = 127U;
    msg.goal_id.assign("LKWDUXGAIYHZHYIDCB");
    msg.goal_xml.assign("IDHXSGJLITHAQRTXROUUARTONNZBYKZPAVJFTQIGSEHPDKZNXFHTVUNEOKMPUCWLMAPJNORNMZBFJYYHVPSICZHAAFOODCVLYPGJSBCBXDTOEQDMUIKTXLQDHISYBRWXNWWSCLSWPJRLNTNDCVVYKQVORUUUTDHXSGOZGAZMGJTLRFVLGEXYBIEKZILLKWAFFMEQXKEEGZQIUMAIMBRVXWPGWEPBDCJYOWCNQSKPFAUCJGFBDJMYCF");

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
    msg.setTimeStamp(0.20792571680680239);
    msg.setSource(14651U);
    msg.setSourceEntity(249U);
    msg.setDestination(21793U);
    msg.setDestinationEntity(7U);
    msg.command = 46U;
    msg.goal_id.assign("MSIOBMFBUJQYKZJXCQXSGHNYJWNQTAINNEPLAFTBGUYZIVSMOKOKPZKJLFYETVULYXQCKZUWLIBRPDRRWGFGVRPRSQXWTTBGXMRRSPDFVPOIMKIQUBZAEOCEMVQYFJIJCGYHGAVXBEHZHSDPVECJGHEGMLOKWHDRFWCWPQTAZCAPNUYTLEUOWYQHDDKTRZHNLSGBFKAOOQXFZNDUWDCHJANTHJJDBOAMVSUVVXICZNSFCDEIKTUXLAN");
    msg.goal_xml.assign("VSAYSUZZXONCJIMYLPDGOFMEKFCRQNORKSERIEHUJQUMTOXPWUBGBQIVXRJYKMKVHMJDHFJXPDMSZVXBFTYZLNZKUYIKLSLDXNBYREJSIFTGAARPQTGVENOFHMNCQIHRVJGLDFALBKATBLGDUKSGWREDWWZPJWSHEARNZCHPNBOXIPTFNWSQJWKCUVYQDUTAQUIGMCCYKUCEZLTMZBYWVEDXWPBLGHXAFHPVWOTLO");

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
    msg.setTimeStamp(0.0747734642385528);
    msg.setSource(29525U);
    msg.setSourceEntity(44U);
    msg.setDestination(36330U);
    msg.setDestinationEntity(82U);
    msg.command = 164U;
    msg.goal_id.assign("PXISMXUROEGHNVAHBFSMBBTKLCPSGLSSPGUPNYAEYAFTWRRJAADPMMFZVCSWAVHETZKCMWVIJLEDLGKUHZHCGMUS");
    msg.goal_xml.assign("OZRXIFLZTMETGWEXCLTFPLMORWKLPDQSUJPZGXFMIBUJOGMMNPBBQFSLUJKVHYUBIDEVCCCWBRAXUTOTVREPJIICZDWJNYFUBOJLWDGAQMHNAKVHAJB");

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
    msg.setTimeStamp(0.38216453286301033);
    msg.setSource(5857U);
    msg.setSourceEntity(123U);
    msg.setDestination(38578U);
    msg.setDestinationEntity(145U);
    msg.op = 169U;
    msg.goal_id.assign("PVEYYUIESHESRGWMJUYQNHKFRXXNOCQUUGNHVJDPRUAWKUQVBPRTOBXDHCLUEQG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TPOKPBFASKYREHDIIXRDGWKNAKYIGRYFOLNRFZLHALUQEXUMGRGFDZHRISLWHCBXTHCUZZCJUJKNPJLAIAAFYOPPJQYAZIUVSJXZVMOWGFHFFRMHMLUWNVCDQUWQDKVKDJBVXJHLTBFESEXEQZBYYNXWEWTDBANLSYSTRPIDCGELUEYNNUQMRKKVTYWXWNVHMVIQWCZTODZO");
    tmp_msg_0.predicate.assign("DAPKRHXPEKROUXACOQHVBSIPOCWMGRTVWNBOYAGEKPRTHRKFYYDVBXXLFEYJLLCOROZIKGGXYSSLHUKHQETUUBRQVXHACGNCGKJUDBHTTEINJVBSZDXMIQZQUYNIWOFBRHWOFYLJDYAAIWELRHODMSDQLTPPSZUFEEAZJPFMWASBNP");
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
    msg.setTimeStamp(0.7553126087502995);
    msg.setSource(39387U);
    msg.setSourceEntity(21U);
    msg.setDestination(13614U);
    msg.setDestinationEntity(223U);
    msg.op = 0U;
    msg.goal_id.assign("RFCZBDEXXMZHLPYGZRWIDEDKYUQIQJUAFRHEXSIJKRKFITALWWLNJCQWRBJBBSJPAFYICOBUNHINHGSKNFVPMDZTUNKICRAQWLJZXMKRPGTSJTXGXYHCMRGTNVHAKDBDUVZKTFEVUOLDVELXFYXUQOSZYQTQYOZTXJUONECLAIQCWMDBEINYPWVTWENODSBHRUDOVZVZGGAGHAA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KGZRUASJRTOCRFGPTUAIMICOFBJHQUNHZJRPQJDVWYQNFZZKZMRFGLDTVHDYTPACJIPOVIXYQCMTOXKQUMQKDYMSULTAQFTWGBXFXRSAWNPBFXMJARMZXLWJPIBRVE");
    tmp_msg_0.predicate.assign("WEGIQRUQIHPBTTQUOQRXUYIFSSJMTUKDRWRRNJBPZWVJLYAKYTENOQXZLFKVWFYCMDCEVZRNRXIMHSNHDIHXQSENGBUHEFALFBVUBDWJXSFLMPKPGKNAMKOCICPLZKYNGYDZGIUWPHJXYCDBAHAONJVKPOAFFXXZGQIFMYKTRCUWVOLJGEDIZSVTZTASRAMWMUEENMVR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZLVWADBGHCEYVQJXCXJTCWHIFOWZONUMEISQGBWQDZMILVCTFNELDUIYYNIOQZXPMHRPKRJYWGANXBODJWJKVVELUMERDIGAKIUTFAQAZHWCBDDKPYTKRXBVBJFNFUIZFTUSMGOMENHWSUGPUARHCYZYFKEISBOMCGNUVDPHIRK");
    tmp_tmp_msg_0_0.attr_type = 110U;
    tmp_tmp_msg_0_0.min.assign("JQSLXVXNJSKLLFPPFEOZXPDNHNHCEUVZXNERJHTBBEBBZSOGAWYPJDUQRYLQROAUUHGOMJBYITVNMUGZYUGNFTQWKWAQRTWXMVCKUSIXCKWMBTKENFBDAGKTDHQHYPMHVCBIWRYOIRFJILUPIDCEOCQXTZZRVDAFLMTFUIFAHMOGITVPWMX");
    tmp_tmp_msg_0_0.max.assign("HGLMVWYGYHNKGEBOHOIQOGAOWJZUQMYIEBVJEJXLBWKRJPUNLNVGQBFTMXHRAAZHFOUAGYJAKRCVREVCOUTUQAWJBIFIISTUDPVEIDJHYZAPDEISEZCNKYMWYJZDMNDUTMCXFHVTTKBDLLDGDUNXCWRIRMFDHTHXQPBUYWRNIBFLAQGLXKCQLJBFQMRSWGSSX");
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
    msg.setTimeStamp(0.6667255928891128);
    msg.setSource(40675U);
    msg.setSourceEntity(146U);
    msg.setDestination(44141U);
    msg.setDestinationEntity(126U);
    msg.op = 84U;
    msg.goal_id.assign("BKDYQAZYRZLYWHQGFUCGEKVCQTXPMJFOXLOUMDSBVDASMRUUDBFNFJAYJQWOPLNVSPRVLSXXECONWEXTUQCDXZIFPCHMHARMXTMGQCEKJSBJQXGAWBMQDLAFSP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DQSLNAQJTUFUELAXDQZNPZSPFDWRDPBNAIIREWPTGLHEBOZCGXZEWXCBVMVVLXDYHDEWOINJGYTSIHEBMOXPGGHATRKTIXBNTYMKQJHSLYJYMBYXGVHACEJLCRMIZPCOMUZAKKBHVQXWKPSNKRYJFIPJJZSFFXDUZJZKDUBASROSOQVFJWYKCUMBUNTCWTAUVKDIOMORLSNRWNOCTBTWLPISGPLQEVOFHCMYRAFIFZGRWH");
    tmp_msg_0.predicate.assign("JRQISOVEEOIABJLCKYXPSEBHXPQEGGKJVYXWXJKAVHLFUAHNMNDDTUKJZJQBBMQLVHKCYIXOTGSWMYRUZOUKIPTVCSJQIYYZCLCDMFBQGXTAXDORAGCNNUBTGBZUPRVGUWDRICVIZZFAFCQBTUEXYQLEZUTEYKSNSAWIAHLCKOWKGEPPNSUHOXJTDHWFFMEKVMHMRXJDRITSFZEDF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WSBERYVDDVGAIQSQCNWWLDMYCRICFPHBVLUTYXEQKDTBLLMGZJQQELLFQRUKOLXSOJEVHERYIVXCGNC");
    tmp_tmp_msg_0_0.attr_type = 168U;
    tmp_tmp_msg_0_0.min.assign("UTFENLFVCDDEPGZPACNVUXILDLDOHUBYXWEZAPICTUISSWGMLLZCSFJPALOTOPLKAHAEQGBXEINOHWGSWDXFGVBVPACTOYRRQRDNYQEOMYABFPLKMEDFWCRIKJLAWJDFZHVXGFZXGZCZDVCQGMBYWCZSKUEIDMHHNQBQIWMSLBKOTJNSVRWRPQAXXQEUQOHJRRPPBTTTONJX");
    tmp_tmp_msg_0_0.max.assign("DIKZLIMKLSMTYEEUXISVLDRVGFESPIPWBNLMNCQUARQJMXNVICWITXXHSEBHBJWUCZUZEYNVNYMKAHDLZGQHTJHTDWWSUYSOQJHGUMMRVBIRCFFLVZFRWNCRTPOURAEXRPDNWEKCQCEKBVGKXYNJATPCGCXUGDYKZSQFIHZMWTEODYNISPFPOQFYZOAQUDBAGYLVQBTOBQZHDDMKAOUTLXVFJOJMGGBOWXNKYGORAERJPASBKLCZHVFJJ");
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
    msg.setTimeStamp(0.37443459320760264);
    msg.setSource(12221U);
    msg.setSourceEntity(53U);
    msg.setDestination(6195U);
    msg.setDestinationEntity(11U);
    msg.name.assign("MGQBJZONVNBSYSABEHNRLGTYHOGZJKUHESPZNJVVWXIXHOTZROYKKBKDTNYJMLNBUPVQWYWUCLFPOEATUGXXQEVIRCRBGAQNXZOVCGFRBGWEPHSLCWXXQAGJKDDRHOGMQDMECIOMRFDXHKMVTFEZOOZTQLKAECBVUQDSSCYENKIIPCHLFMRXMUUHGLNFVIFCJAAJRYJWTIDWQY");
    msg.attr_type = 75U;
    msg.min.assign("NATSWVOOHKZFPASDYLOUDYPRTIWZOPMDTFABGENLKBWWUSYGZMIXVSMOVBZXQCAYPVRYRKODKEWQSWBIHLHFHASIGMJHNBNYGDNJBVNDIIXDXECGIKZQWSTQVJCPUPICLRDPJRPHYUTJEJMSBBJQN");
    msg.max.assign("TARLOUDQIEWNOQPFTCWSJBDALOTDIKQYIYXZSBMABMCFXEFDVHATYLTAZSFKSKRRZTLHWRTUSXFXEIHWMHYYQYKQGOZRMBINRJGJCGDLJNVFXOQXVEGUYNDACBYVBCYVIHGMGEEGPIZSDRLJOECEOWMPAMFKPOHWEQGVPPNCPOIDHSOLGGBMFVVTJMQUKYB");

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
    msg.setTimeStamp(0.7233643405025977);
    msg.setSource(15427U);
    msg.setSourceEntity(9U);
    msg.setDestination(62785U);
    msg.setDestinationEntity(188U);
    msg.name.assign("ZXFXRUTZOCUVAWXRXPLIWQAPCKWGOXZHIWWKSGVMKRFLIJTHFOPWLDKQTYNPLUGAIJGVYCBQBHDYZYAMHVOVJWHLJSRNAZPOPWYZUPKKIBTLZFIXJXYDSMQVSSNQSRTZFHESYBAVENNREJLMDEFBWJEQQBUEGXFMOCJGICSRZGUHFYGD");
    msg.attr_type = 17U;
    msg.min.assign("PDSUVWZPQRLQKBNJNFAFLTJHCEWGIMZTWSFULFKPQLNBWZRGMACVLTOXNWVJREFQMBGXMLSPGDHHOVYWVHZMVDZXYIIGKFFLUARCLSGXSIZIQOMOURXFNPTHWYNSNDDBACQESXEBSTCKSZLKEYYJXPONQVRUCMAHJBIYAKBHYWCDIBRXMXOAECIAYABUCYDGPJTWTFVHUQVEGWRUMCXIIYTKPEGVGKZQLNUJPNZPSKBOJOHAJOZHDT");
    msg.max.assign("FPWQNRIGALQUOBDHKAPMLZQYFSXNABUEXYFHJDDMSSHPQQXERNMDJXKPZJNCDHRWBZFUCUQCSWPORFAAIKUPKEJHOKQOWFAVKSJEJPVZMFGEZVIZJRWTIRQYYGDLNTSTIGIDBZT");

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
    msg.setTimeStamp(0.33881757862544637);
    msg.setSource(8862U);
    msg.setSourceEntity(215U);
    msg.setDestination(19544U);
    msg.setDestinationEntity(189U);
    msg.name.assign("BLZCQIPGLFXATUTQKVWUHWVPJXTBEFFXVEHJLPFOYMGPWMHJDGTRJJISXRZNSOOWZFBOGSZCYLFQYNNMAKBAVXQOTRKUPWRQNVWDEHLSSJHREGKVIGLYOKYHMUCDHIKPOFIBDBEFE");
    msg.attr_type = 29U;
    msg.min.assign("WWJLSNKABKVIQGMUJKAQVARMNWERPXBRQIVUKIBIXIKPLLSTKWHBUSJPZADQFOWTXMVWHVRPNLNPJRAEFYHNRZBLZGYTKIGDJACYSXDMXXPCEFYNRITVCWYGZZOCTCJTDZZGPYLGNFUJMFHBQCHMLWISDKQEELXJJYRKGOHGTDTREUAOBNHHMEGMHYKOAUTWOWNMYFEAVPEOVSVVGFDPHCCXQSPXQSZUZFOYBIZ");
    msg.max.assign("FGXXIHWJPANSYYBNKGGFSGZZPPWHSLBNYKSQOEAGRMVVZSJYCQKOIBUEHDDMUUHKDIUKLZERMCRXMKSNLZYVVLIMPOGYXWKUWLZCBDPVATNMGHXVQFTXCNCSBHQATPDXOTJSCWNTNWCPFOFVBADRFMIJLGCXCAVQUMXTUXFUQFEWPLYQPEHBOLHBAFYINUDJOEOKZYZVEHFQBKKAJWWJR");

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
    msg.setTimeStamp(0.37884870777122226);
    msg.setSource(21880U);
    msg.setSourceEntity(219U);
    msg.setDestination(20804U);
    msg.setDestinationEntity(124U);
    msg.timeline.assign("XWHTYJHRNKSWZZGZEMFCTUEBHYLEBGYBTLWNHDJTGQALFZOZKQATUIAMXLRIOMEXXGXXCIEWFHEVMVQVFVPNXNPVAMDQQBWKBRGFWORKTAKGSQNMYKVODKJQFKOOEBECIWPZCN");
    msg.predicate.assign("AFBWHDCANGWQQCDWILPMXCYBNVNBKIFORCMHMQSRKVVBROHKGIYFVUYSWYNFQXZFDGBPGSAEWOKYHHFZQPVIZZAQ");

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
    msg.setTimeStamp(0.6031783569750194);
    msg.setSource(15455U);
    msg.setSourceEntity(134U);
    msg.setDestination(33368U);
    msg.setDestinationEntity(213U);
    msg.timeline.assign("PDROJHOLTNXJBGNHBAIKBQMEGRZNWRKWBKWSAJDKNFSLKIMZTFZUCAIWOHBCYDFLSAIQZBIGWHMTTCEIUDYHXVWYSXJNFUK");
    msg.predicate.assign("YQJRTWPWHABFBTAIWPKOOBNMYIMNEGOYUXFMWQGURPEJSKWFQVGOTMYCTBFAISCYOAKEYKXFZJVJLEHDPHDNJAHUMXKVMVACDILLDIGYJBTRQXEUVALNZXAOSKRQNRYQFJPTOHWOVKDNGIKKMPUWMWTKYVQMNUISVQPEQSAXHHCHJXZGNUELCEJTBMOLXSZDCSWALZCGBFVUNDRDWFNBJDCRTORPZLFGSCXPU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PSILXJUSLRVTGMKREFCEKPNOCWSMZCLWWMYPTTEDQSGLFPQHMVUZGVUXIIDJEUQHMRGAHANJXKKPIVYONBZVXOQSELIWQWYENKKXDDHKGSTWJSNNGARBYUYJXPFHXBQBYRBQOQXYOHZVMPFZMHKCMALNHZDDNCFVIZGVBSZAJELMTJDFUWDUQYLQCZOJLAMAXFJCABTKWCBGTWPUGR");
    tmp_msg_0.attr_type = 66U;
    tmp_msg_0.min.assign("LVRFFMALQU");
    tmp_msg_0.max.assign("ZPGRHDGCKIDOHEHNXCKFCIDWATVHZWWRTXOAFGAFXWGESDLFMMKJVSYGNAXCECBCBGJANROIIXLUQSRZNJRZSPBFRMIYENOJVMDWNDLSTZISGSPQULSPCFQKHYGXDVLTZZRPJOHCVIOFRWVPWJPYJCBUHQ");
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
    msg.setTimeStamp(0.7476554123370337);
    msg.setSource(18167U);
    msg.setSourceEntity(106U);
    msg.setDestination(12234U);
    msg.setDestinationEntity(137U);
    msg.timeline.assign("TMYKKOGYNRLBICPVRUJEDJVJEWEULUYKIMHDUKJMUESOXUEVWOVNXRHANDASWLBADJXTIZFJNWRFZNCZAOPYZFCQHLCQNTYUGHILBPRBHANPBHUADGGSZTDAECMQWAZMTFAKTXPWRAEPWRGLHXPTSQDDFYQCSXSVZRYOUVCTGKWDFUVKVXBFRBSPCB");
    msg.predicate.assign("KXBJGDVEGRYQNLDKSNRXLUEAVDIECBEIFPJPHFLCNXATTTJXYINKNRYCNILPWFCSIPHJSPQOFHQKYBYHNIRRBUAZTKBASEOORTQAYVAKSRGJLZUCLTZHFRMEMHUHPYJXJZAEOLQXMMQUZDDNOVXYBGLQBNVKWWUEMXPAHIWOUDTEHUJOA");

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
    msg.setTimeStamp(0.5906152384837294);
    msg.setSource(10677U);
    msg.setSourceEntity(191U);
    msg.setDestination(55075U);
    msg.setDestinationEntity(6U);
    msg.reactor.assign("KZMWHLPGANRPVSJISHICALXNGMZRJLEGGIHGPVPUFDSDQHGJJXNPRUSAXKYFM");

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
    msg.setTimeStamp(0.9917231152956948);
    msg.setSource(64182U);
    msg.setSourceEntity(13U);
    msg.setDestination(46097U);
    msg.setDestinationEntity(70U);
    msg.reactor.assign("NCNJVXJSOWVIGACFKEFTYHVJJKRNVKGVRQMLAAUULFYEJOYEOIPPZKIJBSKDTDTLOHHILQYGBPHUMXHHOZCKMKTOWBJZRISBMMVWEYYZHFGFMSYSGXNLLRZAMTWSTCWQMGDOJQEGAEAXYFWFSPULZJLSNRT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KRIPOLIURRCQTPOWUWTNKMPJEDISXKSFQLCNGJMSNLFVBHPKNZODEEVVCMJOVIUQTFUDZQSWMEYWIFFZRKXAGSHHUJXMMXSVLTDGILABVEYVJWQZGSXMPWUZATAKOZUWBGUVXQOQHWHJXGSNNLBKDHZNIEIKRDVCNYRGHUOIMDOLSECHBEZDBQRTTBKYOYWCWQAC");
    tmp_msg_0.predicate.assign("CEMBMMDWIOZXOVGVYPCAEKCSSWNSUIIHDYGLMOXZOVGOELREBYYXSDGHBNFHNTTQPRLTMAPYRJDVJZYQGEKHSKRTCGMLGNAFXFDNKZJGMYNLWAVIKUHTRNQIPUANHXPXIFQFJTCVSKCIQOPDFRXCRUKVDXFBPWZGOQDCKSIBPMUTBEFAIVTTJURJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FMHLTLXYGCWNUGVORELPCKFCPFJXQBTLBWHFMYIFMIREZPOENSDWFETLBNDDOMGHUTDSKNQJAWQYKMHDUVRHJABGFCCAJZVUKCOFQNNOWZWMJYUOSMZXBHAKCZHIOETLTIFJZUDXWXCVAYHGDMASWVIOQXCYCWUASPNGBXSLRNDFSBAXR");
    tmp_tmp_msg_0_0.attr_type = 84U;
    tmp_tmp_msg_0_0.min.assign("YUTVOIHXEUNDGXWPNLRVSWLVGEVCQXSWZBCSFPQFGGAIKYQZAOMHVNDJJCBGQXDCCYXGDOEMFLVDEMCXPRHKZMWTFDJGNFOJWBKFIZWIJTTKLQKZBYRKSAMCFRNUOOYETRBPXQPTJHYL");
    tmp_tmp_msg_0_0.max.assign("LDKASDCEXQAYCVKVAWFMDZOSUEHKVCDVRFUVOZITPWKHGLXLWAQXIFPYXJOVYILGXGDGIRZBOLBRBGNHPEQHZQETMXFJDTRIDHQUMTRMOIONVLYCJMJAIRBSZKIQHGDKPTUUPBFFSNZSNWYJNME");
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
    msg.setTimeStamp(0.7925951004197288);
    msg.setSource(21526U);
    msg.setSourceEntity(104U);
    msg.setDestination(38951U);
    msg.setDestinationEntity(192U);
    msg.reactor.assign("BMISYTQDHAJXTQACARFXLBYDEGVKJEPTOEGBMDWGLEKOPGJRWMPFWZAOWLKKVUMLZIPHCTTJWYEAPNFESKNUCZDCFMASRRRMBOUBKAPVLJSSCPHFBMHUOYJYKUTYJUNVFDFYLGNLQKXYUBKQHUWYSVXGWGNJXEQZIAILUNDZRMNOUFRQVDFIZCVZWXVGEQRMLAFOKACCZNZETHXIPHYWXTVDTWJHSHIGNDZVCPQEGBOOCSSIJQNBLMIXB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HFMLKGJVHHNYQXSRBZWBVSDXNZXOGNVAYRTXQWRWKQL");
    tmp_msg_0.predicate.assign("BCZFUBSQJFNLOSMASGZGEJKETJMLOPDUNYCMIHWQHXWYOVIJPVXLGOFJPHHRRYIYMPWENDTHVNERUXKFCNMLCPDZGMWXOEQZBUSQVXDLBIKKTJSCGBDKNTIAULAVABGWRFVOFREULPOBTKIDTWQXAYZXDVYDPSCMXQTRDIHMPXFNQTFTWEZ");
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
    msg.setTimeStamp(0.4368333006804187);
    msg.setSource(53155U);
    msg.setSourceEntity(129U);
    msg.setDestination(54372U);
    msg.setDestinationEntity(9U);
    msg.topic.assign("VGQFLPJYPKUDPJLDCWATNKTGSUYZELWCPKGOLPYYVIQVYCDMOVZGTOXFPSBUSFYTXZXLBEADWTNWUBNGQQMSXXIWTPHOJUFZEUCHINJRHVEXYLYWBMHSMDIODSBOVJLBFQHEQJKZFBQLISRQGHDPKBISNVOKEXCGKUJWHFMAANIZCOIJFVWKWEJZIDINRHRETGXYRVDQANKNMTLCPLMSDBUHATQCV");
    msg.data.assign("TXSMWRSVRBNCSDEZOBNLWSUEDZJXOLIGMPHLTKAVALXPDHRRCANJEXACUFXBAZWZGJQYYIKHZGQNMKICICLYNCTRWMQRZICQMTHUFBWYLPXJUYTEFBWRWDKQYDNTTEUEYKMFIFZUMLVUVEOQDQBWQVIDNBOOKRJMPSCTVKHCSQSCOZUBFSSPTLGEFSOZWKPZWBEKG");

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
    msg.setTimeStamp(0.04320047601373955);
    msg.setSource(50839U);
    msg.setSourceEntity(145U);
    msg.setDestination(29555U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("ZERODCGAGVGZWKEPHCTIQICNLCDAGEVZITKEIOPVDPELKJSNTJRLUQSWVRZHJLISXPGFMFKVSREDQAJXVMIQRVPVYKAUMVZABCWEBWCLFZWZSGOFRNCABHDXSMYYDBBLJPUZQRNQEZGOETRBIDXPMBJRQYIRFKNAHWALEUYNP");
    msg.data.assign("GJKXNSZPTUOVWJMQSQMMRUANHNWKJHBCYLWUTMAQOGWYZKFCPHVEVHWNLVIIIZVDPXDM");

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
    msg.setTimeStamp(0.48009724965481815);
    msg.setSource(5298U);
    msg.setSourceEntity(45U);
    msg.setDestination(15232U);
    msg.setDestinationEntity(196U);
    msg.topic.assign("PKANZPTBNOPFTBUSWEVUUWDTIYVARGKRJAIJSPJLAHROXMWXXYZHVQILSKQOQGJYCRRENNBXPQPBHDECKMHRFZGLAWFBTPX");
    msg.data.assign("MJRFFJOUVVOUTUAELNWHMGVYBNPLXTGOBQWTSVKRYELWUFKELLISTYZNEJCHFIIEIXQBWUJXLFYWGMQEEEFJPQNZOLMPZBAMPYXAFOSVIPAIUHABVTQKTLFZACDHOKOGMLRISGDRJEZGPHAASAVCQZXFMDOXNPPZDSDEDRRUBWAWOXDIUXGQJXRPVKQXTYCBQHBLTNBDGKZCGHZTJBNCRJ");

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
    msg.setTimeStamp(0.08863088185789714);
    msg.setSource(7185U);
    msg.setSourceEntity(110U);
    msg.setDestination(30393U);
    msg.setDestinationEntity(31U);
    msg.frameid = 184U;
    const signed char tmp_msg_0[] = {-107, 27, -26, -19, 125, 84, 119, 82, 1, -15, 77, -101, -22, -34, -85, -85, -121, 25, -95, 28, -85, -24, -75, -89, 46, -41, 42, -107, -86, 1, -21, 94, -68, 1, 117, 6, 13, 89, -122, 67, -63, -31, 43, 40, 13, -19, 99, 101, -46, -74, 75, 65, 102, -104, -64, -44, 67, 104, 89, 117, 54, -35, 5, 9, -86, -38, -65, 47, 44, 81, 66, -11, -74, 60, 44, -122, -51, -30, 30, 126, -40, 113, -46, -1, -14, -33, 1, 124, -113, 88, -54, 4, -94, 36, -113, 18, 18, -59, 26, -52, 60, 101, 79, -115, 96, -110, -29, 47, -25, -123, -90, -1, -54, 46, 39, -9, 68, -85, -62, -4, -11, 82, 68, -80, -14, -66, 52, 26, 61, 109, -73, 108, 124, -52, 34, -33, 64, -19, -71, -27, 114, -81, 24, -51, 86, 73, 3, 97, 37, -118, -66, -13, -126, -38, -85, 106, -75, 37, -23, -52, 72, 27, 113, 51, 22, -27, -119, -38, 118, 37, -48, 14, -92, 87, 116, -60, 117, -79, 74, 125, -80, 97, 9, 116, -91, -87, 57, 61, 46, 59, -55, 3, -122, -74, -34, 33, 54, -104, -41, 57};
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
    msg.setTimeStamp(0.777591489266661);
    msg.setSource(14697U);
    msg.setSourceEntity(112U);
    msg.setDestination(49270U);
    msg.setDestinationEntity(184U);
    msg.frameid = 67U;
    const signed char tmp_msg_0[] = {-70, 14, -29, 29, -47, 116, 83, 51, 53, 27, -101, 12, 86, 15, -16, -11, -125, -112, 123, -120, -96, 98, -9, -111, 75, 61, 86, 55, -128, -75, -3, 119, -40, -53, 17, 24, 68, -52, 102, -7, -10, 112, 57, -88, -19, 68, -122, -107, 99, 21, -93, 40, -75, 118, -89, -40, 98, -115, 119, 9, 34, 5, 75, 85, 12, 124, -40, 19, -106, -112, -85, 126, -67, 23, -80, -64, 90, 16, -77, -16, 7, -107, -73, 52, 99, -11, 125, 43, 62, 40, -66, 73, 58, -87, 38, 27, 21, 62, -106, -2, 56, -81, -86, -36, -59, -23, -80, -65, -17, -104, -93, -127, -77, 116, 3, -43, 97, 35, 97, -57, -35, 120, -2, -43, -58, -115, 23, 49, -26, -73, -75, -16, 62, -22, 77, 1, -62, -116, -64, 57, -81, 38, 35, 71, 19, 101, 24, -75, -14, 12, -4, 84, -97, -81, 124, 95, 123, -75, 121, -97, -65, 106, 7, 24, 20, 118, -16, -97, 72, 123, 106, 61, -3, 120, -32, -101, -113, 116, 99, -58, -94, 42, 54, -31, -100, -31, 88, -90, 14, 117, -74, -83, -31, -79, 105, -33, 98, 4, 122, 75, -118, -113, 45, -104, -18, 80, 53, -78, 56, 32, 95, 85, 116};
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
    msg.setTimeStamp(0.7012423216610499);
    msg.setSource(1700U);
    msg.setSourceEntity(210U);
    msg.setDestination(1261U);
    msg.setDestinationEntity(100U);
    msg.frameid = 58U;
    const signed char tmp_msg_0[] = {121, 102, 3, -2, 23, 122, 7, 58, -30, 46, -85, 65, -37, 0, -46, 21, -77, -44, -120, -67};
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
    msg.setTimeStamp(0.5287034583243255);
    msg.setSource(50605U);
    msg.setSourceEntity(59U);
    msg.setDestination(23419U);
    msg.setDestinationEntity(166U);
    msg.fps = 54U;
    msg.quality = 111U;
    msg.reps = 222U;
    msg.tsize = 157U;

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
    msg.setTimeStamp(0.9522864890992101);
    msg.setSource(18629U);
    msg.setSourceEntity(115U);
    msg.setDestination(2137U);
    msg.setDestinationEntity(69U);
    msg.fps = 232U;
    msg.quality = 230U;
    msg.reps = 60U;
    msg.tsize = 104U;

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
    msg.setTimeStamp(0.1692050573730841);
    msg.setSource(25566U);
    msg.setSourceEntity(154U);
    msg.setDestination(34185U);
    msg.setDestinationEntity(126U);
    msg.fps = 241U;
    msg.quality = 235U;
    msg.reps = 97U;
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
    msg.setTimeStamp(0.12636309652945155);
    msg.setSource(51801U);
    msg.setSourceEntity(244U);
    msg.setDestination(2337U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.42419780662078;
    msg.lon = 0.8249052760490289;
    msg.depth = 191U;
    msg.speed = 0.3319361782869438;
    msg.psi = 0.6127726469863355;

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
    msg.setTimeStamp(0.8114178110402511);
    msg.setSource(28170U);
    msg.setSourceEntity(99U);
    msg.setDestination(1310U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.19692928700607826;
    msg.lon = 0.7422524463558472;
    msg.depth = 158U;
    msg.speed = 0.41320154480616333;
    msg.psi = 0.10595796945371716;

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
    msg.setTimeStamp(0.1310901252743769);
    msg.setSource(8034U);
    msg.setSourceEntity(234U);
    msg.setDestination(44803U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.6683672168099081;
    msg.lon = 0.0383028392399114;
    msg.depth = 203U;
    msg.speed = 0.49078856794645764;
    msg.psi = 0.34747522807968123;

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
    msg.setTimeStamp(0.9890512741454073);
    msg.setSource(7065U);
    msg.setSourceEntity(93U);
    msg.setDestination(7786U);
    msg.setDestinationEntity(22U);
    msg.label.assign("HKXSYFJNWGMTRIXENSCSZUJWTNHKRHODOGJJSTDGWQUHQHOKEKTCVSEUMIRGHQZRQCKXAMIBNJV");
    msg.lat = 0.6153926644353213;
    msg.lon = 0.5314397827237162;
    msg.z = 0.1297218217248327;
    msg.z_units = 244U;
    msg.cog = 0.7571931957331824;
    msg.sog = 0.46320113435889265;

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
    msg.setTimeStamp(0.06688818080378411);
    msg.setSource(52553U);
    msg.setSourceEntity(107U);
    msg.setDestination(20139U);
    msg.setDestinationEntity(178U);
    msg.label.assign("SMMOVRQAKWVWPCVKBWLZLHMEAWMXHOUEIKKYLUCSCBSZLY");
    msg.lat = 0.3817427798502945;
    msg.lon = 0.25421902006865904;
    msg.z = 0.43213647261383736;
    msg.z_units = 184U;
    msg.cog = 0.43205733370451904;
    msg.sog = 0.9837248762224726;

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
    msg.setTimeStamp(0.5916986923213212);
    msg.setSource(4027U);
    msg.setSourceEntity(40U);
    msg.setDestination(20682U);
    msg.setDestinationEntity(214U);
    msg.label.assign("ZUXCUTLOAVGEXNQTKHMNANJ");
    msg.lat = 0.33368099391800166;
    msg.lon = 0.9565342847128354;
    msg.z = 0.266848339027133;
    msg.z_units = 6U;
    msg.cog = 0.6247836180812519;
    msg.sog = 0.8436016497637151;

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
    msg.setTimeStamp(0.30443461306203423);
    msg.setSource(49043U);
    msg.setSourceEntity(231U);
    msg.setDestination(3675U);
    msg.setDestinationEntity(59U);
    msg.name.assign("ADVHAXGZXTWUONEJEZMSAPEVZSPLPNHUPQMLAKCKLWBFYQIRUEIGTALYJTWVYNFCYTNNJXOPQAWDKIOCPQDRDNFUGFIM");
    msg.value.assign("GVZCUQIKFOSOYDVLESHDUNWYOPLGOQLRJQMJVNAXQPLBRZQBVKGZFJKRGBSWCTIFLFWAIUZPHNVIYSBZMAHROACYSTDWUFTHXBCPJKWTJUEXOUWGRUIAPLDHMETXMSCSXTDBTWNSHAMXDNXMQKQYJYYEEIDNZZEVCLPRIGRBAHHMDXOCQBKRBEUJFEAQRWNTMUCJLANOTLZMKFHOMGPIHAFFKLPVGFDDGNQJOEVZYTNIWKSGBWPXUZYSIEYP");

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
    msg.setTimeStamp(0.9235310451952434);
    msg.setSource(58764U);
    msg.setSourceEntity(247U);
    msg.setDestination(52467U);
    msg.setDestinationEntity(65U);
    msg.name.assign("OREONFGDNRFVOKBSTFQUIWPZUFMZCWZHYHJIYAMNIUFRDZOMPXHLWDQJRQCUTSKYYGTXFECGIWZYGANORHFKICGQGOEBNXUUUIDKKMMPIZSAHOHEUXVWABN");
    msg.value.assign("RLEBHRJCGIPGWDZWODNPSLNSYKJNQTQSXJXAOBRXIPUVJRTYFPDQWMGSGZPPKGVCUSYCVQPNUOCVFJZBCOFQTIUUSYQHMQOKFFMAHSEBATNENJDUSPWMHDMXQYNZDROGTHUJMHJCXBARGAIGLBRGYOIEUUXKMKICZHVILWBTLVZXBSXTKMXMWMLVVETLECZVBEFFDIVZFDTRZEAEKSYKCORAUWKNNFQLAHOYDDRWHOCTQ");

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
    msg.setTimeStamp(0.9145926171879758);
    msg.setSource(15639U);
    msg.setSourceEntity(207U);
    msg.setDestination(15197U);
    msg.setDestinationEntity(55U);
    msg.name.assign("XWPXVKBJCDXTNIFTVSFYIINUEDJTZKZNGRCDQBTAFVZKTHBWYDZIXQWCJQFSTHOHPLWRLBWFIYCEEVRMMLRDNVHUQNFNYEHGZPTMQUETHAK");
    msg.value.assign("WTEVDLMNRHWNZFRRUVSFCWTJSBMGENEJBUIQFVZSTAVFKQSULTMEHZEYIVLODRUFSYZAFSIOJIPXHOBPNWATVKBKORAQ");

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
    msg.setTimeStamp(0.18883964947573373);
    msg.setSource(36300U);
    msg.setSourceEntity(85U);
    msg.setDestination(64589U);
    msg.setDestinationEntity(59U);
    msg.name.assign("CXTCZAMHDRSVNDBDBMLJDOHEKMNVTQYJANCZFXZIMHELGAQHWKOANNPTTYCOOUSEMRIGKCYBVFBVEJRLZERUFJJMUUNNLHPBSEHXOYCIIVADYTWKQUIMZXOFJDPDOZRRWQOYLHPAARWGVLZSMWYK");

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
    msg.setTimeStamp(0.9817199117841144);
    msg.setSource(15550U);
    msg.setSourceEntity(229U);
    msg.setDestination(38322U);
    msg.setDestinationEntity(193U);
    msg.name.assign("IOQJPPCZCUSHOYKFADMKSLWMYGSVPKARTUHMNTYNC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QBQIGEMWRRVWKFIFYXEKEDPSHFFJMNDAQFMTPPUYZHNRDBAAEQUSOLQFLCZCUPHCVGYWQQEMVJGZPXYASHBOTCJONIOXXXZTBVRLGLQVWNGXMTBTMMTNPYIHAJKUNRKVDJUCOAMRLMTIGEOEEXUVWUGABYJWBCWAQZWVJNBOGIXHKSBPLJVEXYIUFYPZDYIJAZNUOTDOCCRNKS");
    tmp_msg_0.value.assign("FHLWITLNSHRYVGHUOFNJGXLUGZELBVCBJKZNNMFFXZHOSIJOUUCUAWGQLAEI");
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
    msg.setTimeStamp(0.6972033721819622);
    msg.setSource(12148U);
    msg.setSourceEntity(16U);
    msg.setDestination(37455U);
    msg.setDestinationEntity(82U);
    msg.name.assign("UBJZJDFEUVNPWMSRJVAHIPJUEECAWHLDPDJSOTFTM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZBAZTUXCOVWCXGWQJHZAAWUJQRYIQNJPOWDJPIOGJDTCVBDYEULVAADERNHFMH");
    tmp_msg_0.value.assign("PXCVDOSRAKGAXMBRYZDQTWWTHSSLNHRHTRLIVCMGFGCFBLWCQUFDEQYAKXNOFBDBEKZOMZUBXAHYGXIVLZBAJGEPRTIARBIYVPYWWVNVTYYETPWXJLORAUQPGIPPKUHWDPOCOQQSYJRSLODJBCNMZKFUIIWPXVERTSUJGMEHSMOUPWZQXCDZUJHJQQNGBOMOYEZRSJK");
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
    msg.setTimeStamp(0.20377142658919978);
    msg.setSource(50827U);
    msg.setSourceEntity(111U);
    msg.setDestination(35990U);
    msg.setDestinationEntity(126U);
    msg.name.assign("RUEXCVKJYHTOXYJQVSQWABMVISMKBBNMLTGOKVPNKXGELDWJWWZROLMDBNIWRHNOAPXRTWSGLTZQYNYPKQKPTCXLIMCPDZGMEXUUAMYNVBSTJRVSOFCOYWUKMUCHEUETAZEFDUFVIXVVBPPJWFCBDBRUIHDSYNNESFNQWGPQGO");
    msg.visibility.assign("LWSFKAXQTFQKWGMH");
    msg.scope.assign("JLSJNXBKPFEDPHXTCJUEDERYWPZWLYAAGLFWFPSIGIGJKWSMZPQXWLRWMPHITKGAZVJVZUREVLAQJDZ");

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
    msg.setTimeStamp(0.3301740389564439);
    msg.setSource(7412U);
    msg.setSourceEntity(118U);
    msg.setDestination(54058U);
    msg.setDestinationEntity(253U);
    msg.name.assign("RLKHDGIXEEYCQCQYXRPHMKYFNMPQXEIHZVJNGNTUYODWORXDLWGMNMNTNIUGVGUBYWALJEOLLCVATDFQRRFRVTWOKSQEBHPWZEWEUJBHFAJJPAOLPCFZHBQMZLFIZNADWCWZRJFIDXOZHCZPRMTVUDASFVMXO");
    msg.visibility.assign("LPZPEEDOCWZCODLEKIBAAXFJTPGHGVVQKSWJBNQBFFVLLESMDDOHMFLIJIQGGTEOUSXPPANXUDVMQMHBUTDMPUBTMXYPWCRZCDRPKIVJTIECZUFCHGYNDWAZITRSHOFZUQMGYYBAJMYOYKXQGVCHAPLCIDVKNFUGRXUZBRFKNZHOYEFWDTNGMRKXYQJJBQWRECAATZYESIULBTSVVKLQIGKKRMIFJX");
    msg.scope.assign("JMQKBOLGDAGZIXJERHPVPXEMAHYOTDKACXNCBKPGEDRMJXPRXPLDSPNVYPAYUVNHVRJQVKUGCNTMLQLUIDWEGACFZLOMULVFZEETFYUBVEYHWPBOENXTFUWWHYVTJNQAJRJWKQLMKORFGSMYI");

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
    msg.setTimeStamp(0.7717493656965776);
    msg.setSource(29588U);
    msg.setSourceEntity(124U);
    msg.setDestination(65394U);
    msg.setDestinationEntity(142U);
    msg.name.assign("ZNYBKENDYCSHXZGPZYOZKYFEZPERNHOIGLZMOOBINISRNWXHYHVTLUPSYVQSSTAZAWBUEVGBPBITQJMKPCPYJLMIJCUXOMQAZWTGNUPMJROSUVG");
    msg.visibility.assign("QVPGMEFKKCYAFSXGMGEGCJPQHZUHZZXBTIDQFHCPVFJYIVDTYKOONXPKSXQSCIRBAIKQSMBRJQAWZJTUNQGLXUXVVATSYEUIJTWFPFS");
    msg.scope.assign("TVJKZYSEULQCMGGPAKMDOHZYAWWSSPHHJIRPTFJRBDMOQUQEKUTAKKBJCLZCMEKOZLGXNVUZTYERVPIWWNOIVAWEHCKLNDBUHWXMDBXFZPTMQXIXAYQVZVJB");

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
    msg.setTimeStamp(0.6149746775551502);
    msg.setSource(17980U);
    msg.setSourceEntity(6U);
    msg.setDestination(19722U);
    msg.setDestinationEntity(167U);
    msg.name.assign("GBNUNMDJCRNXRYEELOQKSXZKTYUYELXZHRJQVQEXFPHHFGWHVEARDRQWMPXOLHCFUSOADVJUJKIKPWLZHVKCKWVIGZTOTPACXDTLNEFPOLQCYONIRUNVGVOQCXVUIDTTWQBGZABTGAUBAYDCXFTIGIPVMNNQZJUNYITRSIYEKYDJDSFQHZWSUSKWKPMSZBYOLJMFELAGUMRSBWN");

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
    msg.setTimeStamp(0.7572637671462898);
    msg.setSource(42253U);
    msg.setSourceEntity(147U);
    msg.setDestination(23090U);
    msg.setDestinationEntity(133U);
    msg.name.assign("ATPFKUMZIHYCXGDHPWAVPGOESUFRISRNNUEEEQWOIZLPGVSUMYXOKGDKTCWRXISBZIFSWUFMGVXROBAFLOEDQVYQMYFNKZJUKIZQTDBHTDIQRNCYGVBSNHULLVKQMKTWYPSTJDYXOJTZDPJFFJVCJBYXAEWOSBMQQJPVKZLTHDPRBRBLQVIRIKNCDHBUCXZIOUTNJDGTZAZPELLVXWYMOCLSCAKAHGPQCOJNNNFGYEEAMASXAXH");

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
    msg.setTimeStamp(0.6516648524311391);
    msg.setSource(10436U);
    msg.setSourceEntity(77U);
    msg.setDestination(59976U);
    msg.setDestinationEntity(243U);
    msg.name.assign("IZNFUYTGIPKPNPCZLOHCHTMABCCRNKZWGOLTZIWGHSVDMCYNKIMOOFSHRKVZFZEITFSWEHOIPEFSBBLHPIRZUSWXUUMUKEBOJLXVQQRIYLEUAASDTGQQAOTXIYYHYYJMDOXJQOVMDNRKKAATVUVSMEAKGPDECIPUV");

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
    msg.setTimeStamp(0.18152089010160943);
    msg.setSource(52727U);
    msg.setSourceEntity(139U);
    msg.setDestination(32970U);
    msg.setDestinationEntity(191U);
    msg.name.assign("TYEXKIJABWMJZHEUPCO");

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
    msg.setTimeStamp(0.6156270132624635);
    msg.setSource(34784U);
    msg.setSourceEntity(50U);
    msg.setDestination(37045U);
    msg.setDestinationEntity(76U);
    msg.name.assign("IUNKFTSQKUVSP");

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
    msg.setTimeStamp(0.7902610271864361);
    msg.setSource(65053U);
    msg.setSourceEntity(80U);
    msg.setDestination(38486U);
    msg.setDestinationEntity(67U);
    msg.name.assign("MZNAHEQCHZAKUALXXQDGYTCLQIBVNINNBOCLWWHJYLUBIUEOTIFKBVWIKPZGHSMCC");

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
    msg.setTimeStamp(0.7872794581364078);
    msg.setSource(11686U);
    msg.setSourceEntity(249U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(3U);
    msg.timeout = 1925113756U;

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
    msg.setTimeStamp(0.8682859307722033);
    msg.setSource(64781U);
    msg.setSourceEntity(125U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(218U);
    msg.timeout = 3938212676U;

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
    msg.setTimeStamp(0.6207945806299846);
    msg.setSource(64603U);
    msg.setSourceEntity(65U);
    msg.setDestination(55235U);
    msg.setDestinationEntity(205U);
    msg.timeout = 1678661739U;

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
    msg.setTimeStamp(0.1248544840724366);
    msg.setSource(30857U);
    msg.setSourceEntity(248U);
    msg.setDestination(56084U);
    msg.setDestinationEntity(232U);
    msg.sessid = 2212038630U;

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
    msg.setTimeStamp(0.15231694040779853);
    msg.setSource(62423U);
    msg.setSourceEntity(37U);
    msg.setDestination(5432U);
    msg.setDestinationEntity(136U);
    msg.sessid = 2086242196U;

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
    msg.setTimeStamp(0.3265015875984506);
    msg.setSource(6142U);
    msg.setSourceEntity(29U);
    msg.setDestination(29678U);
    msg.setDestinationEntity(189U);
    msg.sessid = 3747284409U;

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
    msg.setTimeStamp(0.8515570958684308);
    msg.setSource(45382U);
    msg.setSourceEntity(103U);
    msg.setDestination(44367U);
    msg.setDestinationEntity(228U);
    msg.sessid = 832217351U;
    msg.messages.assign("TLHSMBSUNLGEBOLDKJSSOVUAXCXHUAGWBOMQCSXCE");

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
    msg.setTimeStamp(0.4741217062592349);
    msg.setSource(51225U);
    msg.setSourceEntity(132U);
    msg.setDestination(41726U);
    msg.setDestinationEntity(159U);
    msg.sessid = 1921905141U;
    msg.messages.assign("HVAOLZFNSSNCMAAJDHNRLUPYCLDXCYWUUJCTJFSHCEVBKLKROUHOOZFUMOINVMQGEWFUMFGZKFSDIYWOJPFIPHQXXYEQZYZWOKERJPFBGGMCLVG");

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
    msg.setTimeStamp(0.6428616145380228);
    msg.setSource(20286U);
    msg.setSourceEntity(56U);
    msg.setDestination(19952U);
    msg.setDestinationEntity(165U);
    msg.sessid = 3379249228U;
    msg.messages.assign("TGWHHORFOVBIYZBNKXJSLTPXGODTJXJABEPFNCBUZMHVGCAMJDFUHRTRWOMQOQLNCUDZFGT");

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
    msg.setTimeStamp(0.0228870838849079);
    msg.setSource(50336U);
    msg.setSourceEntity(93U);
    msg.setDestination(18729U);
    msg.setDestinationEntity(208U);
    msg.sessid = 2590611283U;

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
    msg.setTimeStamp(0.26347110578001265);
    msg.setSource(6647U);
    msg.setSourceEntity(72U);
    msg.setDestination(3125U);
    msg.setDestinationEntity(12U);
    msg.sessid = 2122687598U;

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
    msg.setTimeStamp(0.7522285386863715);
    msg.setSource(57267U);
    msg.setSourceEntity(132U);
    msg.setDestination(19635U);
    msg.setDestinationEntity(40U);
    msg.sessid = 91039619U;

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
    msg.setTimeStamp(0.6863913669405586);
    msg.setSource(27208U);
    msg.setSourceEntity(194U);
    msg.setDestination(15682U);
    msg.setDestinationEntity(48U);
    msg.sessid = 658496008U;
    msg.status = 162U;

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
    msg.setTimeStamp(0.682421829666355);
    msg.setSource(61799U);
    msg.setSourceEntity(233U);
    msg.setDestination(38148U);
    msg.setDestinationEntity(132U);
    msg.sessid = 4140753324U;
    msg.status = 234U;

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
    msg.setTimeStamp(0.5010715532356745);
    msg.setSource(52651U);
    msg.setSourceEntity(128U);
    msg.setDestination(46201U);
    msg.setDestinationEntity(241U);
    msg.sessid = 2181952109U;
    msg.status = 153U;

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
    msg.setTimeStamp(0.49455530448041474);
    msg.setSource(6251U);
    msg.setSourceEntity(156U);
    msg.setDestination(29419U);
    msg.setDestinationEntity(74U);
    msg.name.assign("FXBUMFLROZIFRWIPBMOJZBWXZQUSAXXUZVCLGNOLHSIXDQMZLVJOXHTIWHVQGFTKTVZMMAVFCYKTDDSDBAIMKWNEQGRFOFAJTRNTLUUQORGDCAMZFBXMVJPEPQETKOLVKYOZSLJYSHTRUNGJMSEIISOAVWA");

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
    msg.setTimeStamp(0.5643252710728662);
    msg.setSource(38900U);
    msg.setSourceEntity(52U);
    msg.setDestination(65020U);
    msg.setDestinationEntity(220U);
    msg.name.assign("ZKUIZCWQTHSEAILGYUMNLBHVGJHENZDXKNMJESMTRHLSNQGFGOAEYZSDQCHYSZDCWRXIMOFJAAWMKYOBLRWVPFHMUGKMUAIIRYXIHDXQSPSDIHWALLYLELMTJKZOPUOJVKTRPAXPGMIPBLQOURGUAEXZVCSEWKOPZTVEVWBBCNYKJTXQNQFLXRWSDVUQYCCTII");

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
    msg.setTimeStamp(0.16777752007270796);
    msg.setSource(10615U);
    msg.setSourceEntity(185U);
    msg.setDestination(10461U);
    msg.setDestinationEntity(166U);
    msg.name.assign("AILDHMBQDIPWGDJDJHFGZHSGQFRVWWVZJQVKXEPLONGSUWLBKGKXCQPYKYSGBMBMFCHRAKHZZBOPHOOBEZFRGHJESAZUSX");

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
    msg.setTimeStamp(0.2706318719324502);
    msg.setSource(60190U);
    msg.setSourceEntity(207U);
    msg.setDestination(6502U);
    msg.setDestinationEntity(189U);
    msg.name.assign("PZTFKZGRSCCDMVHJDPYUFCJANRLQAIAYIQNEWXAOBVOMGUGFVWTKNBKUXOZDYGPPOUUAVWQLIYEWQDBYQTJEUSHZMOPANHOPYJKIWGNWJZIGTHEXKTPQBBBEJVPOZIDDKLCSSNCXJYQXCAOM");

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
    msg.setTimeStamp(0.5166818669992358);
    msg.setSource(27650U);
    msg.setSourceEntity(228U);
    msg.setDestination(32279U);
    msg.setDestinationEntity(203U);
    msg.name.assign("PNMQBYCURLDG");

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
    msg.setTimeStamp(0.055148748727880004);
    msg.setSource(10890U);
    msg.setSourceEntity(36U);
    msg.setDestination(30820U);
    msg.setDestinationEntity(173U);
    msg.name.assign("SZRKDNYCWUKFLBCTDWOXPAGHIQBKIALAAGZRBVALCJZLIRIYPGTRNMEUYVWDQXDMKCVVCNZOTHCQMRIEIHXUXRNKYHXTLWPHWQFSDOCUAMKRZRUGCUO");

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
    msg.setTimeStamp(0.7589902015530714);
    msg.setSource(5716U);
    msg.setSourceEntity(27U);
    msg.setDestination(48137U);
    msg.setDestinationEntity(216U);
    msg.type = 104U;
    msg.error.assign("EJKZYNPIUNEFFSRXSFOBUAYRLSYQDWKRQBWTTMLWYFAUZRVPUSLOODHZIGIVJBYYFLPDDOXSJNRBCPTGDUREEMBMJHAEGDKHKPDECFIKMLJGPNUISCCGVVKVWJAWUJOMNQWMOSCRHUDKMWNLHZCAFNTGGHBCYIXONXTXTTJNMBKCBFWDAAYMCJOZQUEGVOZQGFATEQH");

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
    msg.setTimeStamp(0.5825016028619939);
    msg.setSource(54648U);
    msg.setSourceEntity(239U);
    msg.setDestination(22437U);
    msg.setDestinationEntity(44U);
    msg.type = 230U;
    msg.error.assign("RRWICHJZSARKDEASPPWWYKXJUQEWOZPXHKIYKIIDTHZTBHCRMXWLCJXWHBPZHSFGTOFTVYPYSSVQ");

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
    msg.setTimeStamp(0.5217456202015153);
    msg.setSource(16371U);
    msg.setSourceEntity(228U);
    msg.setDestination(12579U);
    msg.setDestinationEntity(24U);
    msg.type = 192U;
    msg.error.assign("SXXOIFAPFURVZEQXPMLRXVURDJSHOGGHWNZFCKICCBQYDKHWPGQFULWJMSMLFAJVSVMSZGPTTHOXYEPELOHWVZCROMQRYIKNZERDYWIHWKKCSMZIPTJEOIHDXDHAWHGCAKBLJLJDDVYKTIDUTXLMSNFCNTOOFTPVGPJWSUYXXFEGTBBRNLSBMELKPNZABNGUDTZUNQVJODMKVKRQJGQZANECCAQWGZEIUAYRO");

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
    msg.setTimeStamp(0.7487776827333033);
    msg.setSource(9547U);
    msg.setSourceEntity(176U);
    msg.setDestination(56300U);
    msg.setDestinationEntity(227U);
    msg.seq = 7444U;
    msg.sys_dst.assign("TAMZTFEBJJWCXMPJHEHILOOCQOSMKNUMJWUKBDOVVNFPIHAPFKSLZVPKTYFH");
    msg.flags = 206U;
    const signed char tmp_msg_0[] = {-103, 24, 68, 18, 82, 56, -81, -57, 83, -63, 70, 30, 38, 126, 110, -15, -37, -55, -107, -49, -80, -99, 87, 27, 120, -32, 116, 85, 19, 78, 120, 76, 13, -101, -8, -114, -107, 50, 96, 101, 106, 26, -122, -94, -70, 93, -78, 3, -64, 116, 42, 36, -32, -34, -7, 66, 8, -62, 90, 49, -26, 108, -29, -54, 118, 113, 104, 60, 85, -82, -72, -57, 33, 62, 33, 88, -91, -104, -6, 123, -117, -43, 106, -110, 98, 115, -48, -125, -14, -98, -82, -51, -17, 17, 93, -79, -66, 1, 121, 81, -13, 54, -30, 36, -110, -18, 122, 17, 64, -103, -56, 112, 9, -40, -4, -28, 114, 12, 47, 117, 31, 73, -16, -60, -101, -122, 79, 13, 28, -117, 33, -104, 8, 2, -19, 32, 44, -67, -113, 107, -82, 111, -97, -21, -4, -85, 14, 78, -4, 107, -120, -20, -74, -75, 106, -9, 45, -71, -69, -6, 7, -85, -115, -38, 27, 39, 0, 70, 39, 57, -92, 50, -12, 1, -102, 65, -119, -83, 42, 121, -74, -79, 84, 34, 105, -63, 86};
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
    msg.setTimeStamp(0.6899279679834934);
    msg.setSource(17839U);
    msg.setSourceEntity(131U);
    msg.setDestination(44067U);
    msg.setDestinationEntity(220U);
    msg.seq = 45180U;
    msg.sys_dst.assign("XHPYGTANAMROFKBWCPMDVOYOCOFMQPAXSWVEBLGERLIFEXHTNZVEUBUWWAOFROXLIFJKIFUYNZVSCFTUTUCYJLULSTJUBMJPIIYXLBZKMAAGYAYSQTQHLSXTWC");
    msg.flags = 34U;
    const signed char tmp_msg_0[] = {17, -85, 69, -48, -64, -117, 74, 63, 31, -87, 76, 34, -35, 9, 9, 43, 13, 38, -115, 67, 73, -3, 111, 49, -13, -116, -41, -97, 31, 54, 27, -76, -47, 44, -25, 97, -48, 47, -16, 87, -48, -96, -35, 52, 14, -45, 77, -27, 68, 27, -71, -7, -64, -46, -125, -108, -74, -82, -41, 107, 62, -122, -78, -87, -26, 61, -123, 84, -21, 106, -71, -45, -123};
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
    msg.setTimeStamp(0.05315920274201291);
    msg.setSource(53454U);
    msg.setSourceEntity(110U);
    msg.setDestination(13849U);
    msg.setDestinationEntity(136U);
    msg.seq = 5358U;
    msg.sys_dst.assign("YLQUNPTYRINLSHXJMEMNYWVYWAXCESODZKXTVJMOQILVXPHGSZZJVLQPWKCAJGHCERVODHMATWSWZCICEUVLPDSYPPAZMDVTXAUMDCFFONHZFPHYGOAZTVGZDQZLGOUB");
    msg.flags = 136U;
    const signed char tmp_msg_0[] = {-105, 120, 0, -54, -13, -72, 96, 60, -28, 17, -98, -123, -52, 73, -110, 24, -48, -112, -70, -100, -20, -41, -74, 93, -85, 72, -38, -61, 73, 94, -14, -20, 107, 35, -74, 59, 48, -108, -125, -64, 94, -32, 125, 52, 95, 21, -50, 100, -13, -15, 36, -125, -116, 86};
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
    msg.setTimeStamp(0.8376699636514717);
    msg.setSource(32415U);
    msg.setSourceEntity(188U);
    msg.setDestination(33302U);
    msg.setDestinationEntity(22U);
    msg.sys_src.assign("BUNPMMANOEGRYLYBBESVOMQCUQYQAJEJJHZFDDCMZTKTCBGODTVLIAIPPNCAOMFEGUOEONAVYHVNXCIPMMFCHZTLWZNIPGRWBWPSEKBYQWQFGUSIQTFRLZGZKMNAFHFSCVYTMMADKGSTJNLXKOUUZIVUGPSEIVIKIRFYWSLYJXRBCGTNXVJWFACWJKVHOUJHDSXAPTGQKAJDERXIPRDQRNBUYXRHHELBHQZDYFZZTXHBOKR");
    msg.sys_dst.assign("RYVVWXJOTWSICCFBOLM");
    msg.flags = 184U;
    const signed char tmp_msg_0[] = {79, -39, 119, 55, 54, -54, 37, -56, -99, -101, 17, -105, -119, 99, 10, -48, 43, 12, -51, 28, 17, 85, 9, -78, 10, -87, 6, 92, -52};
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
    msg.setTimeStamp(0.11375099609749628);
    msg.setSource(64524U);
    msg.setSourceEntity(98U);
    msg.setDestination(22315U);
    msg.setDestinationEntity(60U);
    msg.sys_src.assign("WPAQRGCGWUVVNKQITDXCQYBAQOKIWSSTQZSBEGEDYSYPUYHXQBQGCTLWKJGUTEJFUPRHZDPKZBDNCZHGNABAPIARRKTCBYKTIFSUGDVJPFVMFEDJEWJMISGDLSHRLSMLQNLOOHLXZMVQHMXFFPSAXYDHYBAMVIATUORYFFENA");
    msg.sys_dst.assign("IGHUSXFAYNQSAHALBSOZSQINRWZCIBBTDMVAEAQ");
    msg.flags = 182U;
    const signed char tmp_msg_0[] = {26, -48, -47, 8, -77, -37, -107, -128, 115, 18, 38, -67, 38, 25, -108, 41, 86, -120, 77, -119, 126, 34, 96, -95, -60, 14, -39, -116, 92, -64, 116, 4, 45, 123, -76, -87, 20, -62, 99, -65, 118, -5, 108, -98, 48, 33, 89, 110, -31, -29, 70, -30, 66, -98, 126, -29, 2, -31, 25, 103, 14, -118, 24, 38, -61, -33, -29, 2, 18, 73, -40, -68, -50, -66, -12, -14, -23, 53, -118, 75, -123, -18, 97, -99, 116, 123, -74, 7, 39, 34, -125, -49, -39, 119, 36, 75, 81, -110, 87, -42, 54, 34, 44, 27, -121, -27, 110, 62, -11, 43, 60, 77, 121, -6, -79, -80, 99, -21, -112, 2, 116, -22, 91, 78, -110, 67, 93, -7, 18, 98, -117, 77, -119, -120, -120, 22, -37, -78, 82, 111, -108, -41, -123, 13, 67, 86, 62, -32, 50, 1, -45, -24, 97};
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
    msg.setTimeStamp(0.606143008807637);
    msg.setSource(24766U);
    msg.setSourceEntity(174U);
    msg.setDestination(47251U);
    msg.setDestinationEntity(174U);
    msg.sys_src.assign("AYOVCXDDIYQSAQXVDXCKFOUQGZEYGKFBDGSCCWESEJBPRBBSGZZMTCDKJWPKXOAFOIJNIDLQHRTMWLCVLEQAFIJRZQNLUHNSYFBVUMSOGCHAUTFNJRKSXGERPRQHDKVISRHZUJRZBWZPZDIWUUWLNYWGVTOWVPNNMLPFYCFHBPLTWIGSBKAPRWPYIRVYUCHLQTDMJMMILH");
    msg.sys_dst.assign("UVAUFKIEQSGMYZDEKSMZFYMRBDLOPUIVVTTOBHALURBDCYEZWXPRUNVILKIHEJBCARHQYESNLYPOQIUSPBZGOMJGYJCZGTGNNADQRNRSOKJQKREDMTWFLERCBJHNMCUCRHUMUBLGKJKNCWORXOCJVXTWQSFMNFDJZXGKXAWTWCZZVELDPBWMZGQ");
    msg.flags = 129U;
    const signed char tmp_msg_0[] = {123, 83, 73, -93, 85, 116, -78, -124, 24, -25, -59, 42, 112, -68, -20, -9, 21, -115, -106, -94, 6, 45, 51, -57};
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
    msg.setTimeStamp(0.20083540162676505);
    msg.setSource(26696U);
    msg.setSourceEntity(102U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(133U);
    msg.seq = 33495U;
    msg.value = 219U;
    msg.error.assign("FILYKTNWCCDPOEICKOBNZFIGCRKWOLASBCQBFVMJBYGLHTWJILOHZNEQQBZPBISGSDZGQWGWJGSHELGFDCAUENTFLUXKEPADVEXXZNLDDDMPQUIJXJGYYBJSUHOQUAYEVXMMYNLUIPIKQCKUZJHQZMEVSFUTECABXRPRONVCSTEPMKZDAJMNDFJAOTBMHRWCYHIWKRVPWYOTFYPRXFVAKUHNPIJTSSARSRBVQXMXHXAMWDUHOLGNWYFRTVK");

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
    msg.setTimeStamp(0.7566669014616241);
    msg.setSource(46866U);
    msg.setSourceEntity(198U);
    msg.setDestination(5510U);
    msg.setDestinationEntity(56U);
    msg.seq = 29220U;
    msg.value = 77U;
    msg.error.assign("CAOPPWAYQAUVKKIGLSFMFUDBNENUDIIPKTIVANBSUVHWLEOPYILRBTMKLFVCEYOTXLZHBGXNXKJXXERRLXUBHCOQQIVINBFVHWDQDSSZHAGOAITFYCZEQHNOVHTJWNFJDYKHVSBMZZQOUCUOLXYGOUZRWRPQVTZDWFMWKEAYGWGYXGLILG");

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
    msg.setTimeStamp(0.06020200737415704);
    msg.setSource(23079U);
    msg.setSourceEntity(205U);
    msg.setDestination(36374U);
    msg.setDestinationEntity(51U);
    msg.seq = 7935U;
    msg.value = 151U;
    msg.error.assign("JIMXHIKASNOVEQQTFZLRIADLKQUNJTUVQATAZJHNWKMHFFOCJZNVBRPVHKMDMYUOQVGT");

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
    msg.setTimeStamp(0.5232098065915538);
    msg.setSource(13917U);
    msg.setSourceEntity(41U);
    msg.setDestination(18506U);
    msg.setDestinationEntity(253U);
    msg.seq = 60561U;
    msg.sys.assign("CINAYFPHAVWYTPLSDBMRTHQJKMW");
    msg.value = 0.6859441797497788;

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
    msg.setTimeStamp(0.6334145087514101);
    msg.setSource(19369U);
    msg.setSourceEntity(34U);
    msg.setDestination(12203U);
    msg.setDestinationEntity(27U);
    msg.seq = 19693U;
    msg.sys.assign("HFEHHEIAXOVNXBWGTHNULRZEBODBDYXAKACOKLJMJBJSKXGZVSZFNYFJJOGREORIUTPHLQCYDULRNMEFIQFKUFXGDSRXIVQWQNNGZLVKCWJOXEYGRLMDSIFJVYPUGYWBBAOSDOSL");
    msg.value = 0.2533218562292616;

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
    msg.setTimeStamp(0.5018114172899505);
    msg.setSource(25337U);
    msg.setSourceEntity(91U);
    msg.setDestination(62998U);
    msg.setDestinationEntity(154U);
    msg.seq = 2288U;
    msg.sys.assign("EPXGEAMPSSAIPBNUMEOSJGDUWDLQVKOVPGGJOFNCBWJOVKDRNLORTKMYZIVPAXHKEDPMCIZNFCQUSHRXTIVPQHVWTHVIYFIIKJAJGUWXHYYPOZTYUOAZCDHZBYELYWSYHICLCATKLZGOVUCUYRHGMJBSYLWBONLQMCKRXXJEJCNRMBQNTWWZSKQ");
    msg.value = 0.4791109075533715;

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
    msg.setTimeStamp(0.10232215608567397);
    msg.setSource(55323U);
    msg.setSourceEntity(207U);
    msg.setDestination(45941U);
    msg.setDestinationEntity(177U);
    msg.seq = 61329U;
    msg.sys_dst.assign("UKJJOIQHOOFBOFEYIQWFONTHIWHTHOSVLUBQUDFDGTAXFWEPDGANLNERQMDEZUWQGUQUATCPCZWFWXTHDVRZYRPECXRLJBJUBKXPVMSKSBVVVLYHZLMOCFXAXDQVNJRBCNOTUIYMAMWKYRWIIZSESFSKYKJEIHYMGHETGLISUNGLMXBHXYFSZKQMPKDPGPRJAZCMUNAIAT");
    msg.timeout = 0.7791041192314234;

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
    msg.setTimeStamp(0.5428223391252179);
    msg.setSource(4156U);
    msg.setSourceEntity(43U);
    msg.setDestination(38017U);
    msg.setDestinationEntity(239U);
    msg.seq = 40003U;
    msg.sys_dst.assign("ILEUKSJNELNURYHAOSQTWEZTVFSESJPMEYBXQILANLEGJ");
    msg.timeout = 0.4440628001685163;

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
    msg.setTimeStamp(0.44748664017612216);
    msg.setSource(29627U);
    msg.setSourceEntity(171U);
    msg.setDestination(18471U);
    msg.setDestinationEntity(10U);
    msg.seq = 61970U;
    msg.sys_dst.assign("QRQFCKVUADKLFJOCWYVRBMVXOWPFPUMLANCMZETIJKAMXMZGHAUFDNWVNT");
    msg.timeout = 0.5389211789810097;

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
    msg.setTimeStamp(0.389261201645699);
    msg.setSource(37517U);
    msg.setSourceEntity(81U);
    msg.setDestination(16952U);
    msg.setDestinationEntity(223U);
    msg.action = 204U;
    msg.longain = 0.6380768205303149;
    msg.latgain = 0.07692966479675512;
    msg.bondthick = 1211677843U;
    msg.leadgain = 0.32636840498558783;
    msg.deconflgain = 0.08432431173125143;

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
    msg.setTimeStamp(0.8750180286359011);
    msg.setSource(53252U);
    msg.setSourceEntity(144U);
    msg.setDestination(36099U);
    msg.setDestinationEntity(164U);
    msg.action = 56U;
    msg.longain = 0.18314237149420742;
    msg.latgain = 0.09359798081044213;
    msg.bondthick = 674666794U;
    msg.leadgain = 0.6898171461089065;
    msg.deconflgain = 0.5726308500001005;

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
    msg.setTimeStamp(0.02284490603145095);
    msg.setSource(38399U);
    msg.setSourceEntity(34U);
    msg.setDestination(4399U);
    msg.setDestinationEntity(163U);
    msg.action = 166U;
    msg.longain = 0.8174523517862209;
    msg.latgain = 0.9733733801603023;
    msg.bondthick = 1199857010U;
    msg.leadgain = 0.3070294776826249;
    msg.deconflgain = 0.4916062288812044;

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
    msg.setTimeStamp(0.7032351390706308);
    msg.setSource(32183U);
    msg.setSourceEntity(83U);
    msg.setDestination(54473U);
    msg.setDestinationEntity(153U);
    msg.err_mean = 0.3347592487825185;
    msg.dist_min_abs = 0.8894577981200695;
    msg.dist_min_mean = 0.4868117969674641;

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
    msg.setTimeStamp(0.48427113281912226);
    msg.setSource(1446U);
    msg.setSourceEntity(79U);
    msg.setDestination(42839U);
    msg.setDestinationEntity(130U);
    msg.err_mean = 0.417557280271163;
    msg.dist_min_abs = 0.14661822588093032;
    msg.dist_min_mean = 0.7932258550668375;

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
    msg.setTimeStamp(0.28454512998262593);
    msg.setSource(65486U);
    msg.setSourceEntity(212U);
    msg.setDestination(45841U);
    msg.setDestinationEntity(110U);
    msg.err_mean = 0.390045598665282;
    msg.dist_min_abs = 0.6787246015982374;
    msg.dist_min_mean = 0.4703087029574743;

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
    msg.setTimeStamp(0.19062745402822256);
    msg.setSource(54122U);
    msg.setSourceEntity(14U);
    msg.setDestination(28495U);
    msg.setDestinationEntity(65U);
    msg.action = 176U;
    msg.lon_gain = 0.8167665456956633;
    msg.lat_gain = 0.7376022469293411;
    msg.bond_thick = 0.7218725098448263;
    msg.lead_gain = 0.3143275986481373;
    msg.deconfl_gain = 0.3375122104261268;
    msg.accel_switch_gain = 0.4420538599883649;
    msg.safe_dist = 0.9599551279735072;
    msg.deconflict_offset = 0.9117648376503548;
    msg.accel_safe_margin = 0.9149214936639899;
    msg.accel_lim_x = 0.28831419408930636;

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
    msg.setTimeStamp(0.14554759494011826);
    msg.setSource(58413U);
    msg.setSourceEntity(27U);
    msg.setDestination(57252U);
    msg.setDestinationEntity(241U);
    msg.action = 12U;
    msg.lon_gain = 0.4009807933308023;
    msg.lat_gain = 0.22414882557078397;
    msg.bond_thick = 0.9716089554396597;
    msg.lead_gain = 0.2521221402905661;
    msg.deconfl_gain = 0.5429518916113603;
    msg.accel_switch_gain = 0.6001748793654635;
    msg.safe_dist = 0.3210066660640697;
    msg.deconflict_offset = 0.9060911389394314;
    msg.accel_safe_margin = 0.6176149862439061;
    msg.accel_lim_x = 0.9256041528336381;

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
    msg.setTimeStamp(0.015647119879463323);
    msg.setSource(52482U);
    msg.setSourceEntity(57U);
    msg.setDestination(50457U);
    msg.setDestinationEntity(12U);
    msg.action = 146U;
    msg.lon_gain = 0.21700120495555952;
    msg.lat_gain = 0.14568321104940862;
    msg.bond_thick = 0.23841855015778202;
    msg.lead_gain = 0.6122997578297956;
    msg.deconfl_gain = 0.16052307977763425;
    msg.accel_switch_gain = 0.9102971302941324;
    msg.safe_dist = 0.6121739264604947;
    msg.deconflict_offset = 0.6456143196441723;
    msg.accel_safe_margin = 0.5610805532389931;
    msg.accel_lim_x = 0.6126852758807649;

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
    msg.setTimeStamp(0.8001116292531171);
    msg.setSource(25163U);
    msg.setSourceEntity(182U);
    msg.setDestination(41283U);
    msg.setDestinationEntity(89U);
    msg.type = 251U;
    msg.op = 90U;
    msg.err_mean = 0.9888174269542506;
    msg.dist_min_abs = 0.39987855484726353;
    msg.dist_min_mean = 0.3585251361344066;
    msg.roll_rate_mean = 0.3908097377022671;
    msg.time = 0.7700614913893491;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 196U;
    tmp_msg_0.lon_gain = 0.15053627783353973;
    tmp_msg_0.lat_gain = 0.9005227223742257;
    tmp_msg_0.bond_thick = 0.18639090663518088;
    tmp_msg_0.lead_gain = 0.5371570456499214;
    tmp_msg_0.deconfl_gain = 0.41431733606719945;
    tmp_msg_0.accel_switch_gain = 0.5686528910690055;
    tmp_msg_0.safe_dist = 0.2558657340112548;
    tmp_msg_0.deconflict_offset = 0.3516931538176843;
    tmp_msg_0.accel_safe_margin = 0.19770564248811295;
    tmp_msg_0.accel_lim_x = 0.18623659770646972;
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
    msg.setTimeStamp(0.7245444813231784);
    msg.setSource(55228U);
    msg.setSourceEntity(210U);
    msg.setDestination(704U);
    msg.setDestinationEntity(180U);
    msg.type = 83U;
    msg.op = 33U;
    msg.err_mean = 0.21190037888911062;
    msg.dist_min_abs = 0.9243184659129119;
    msg.dist_min_mean = 0.773558638446005;
    msg.roll_rate_mean = 0.8893010868977711;
    msg.time = 0.5266654090691955;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 92U;
    tmp_msg_0.lon_gain = 0.8961899821102403;
    tmp_msg_0.lat_gain = 0.713289317959231;
    tmp_msg_0.bond_thick = 0.8355264079847483;
    tmp_msg_0.lead_gain = 0.8459251338207268;
    tmp_msg_0.deconfl_gain = 0.28310856739521073;
    tmp_msg_0.accel_switch_gain = 0.38934106352810205;
    tmp_msg_0.safe_dist = 0.7141189205882743;
    tmp_msg_0.deconflict_offset = 0.80701759341479;
    tmp_msg_0.accel_safe_margin = 0.3262023729230382;
    tmp_msg_0.accel_lim_x = 0.8064997725164766;
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
    msg.setTimeStamp(0.7942920841514233);
    msg.setSource(54821U);
    msg.setSourceEntity(52U);
    msg.setDestination(56716U);
    msg.setDestinationEntity(72U);
    msg.type = 157U;
    msg.op = 192U;
    msg.err_mean = 0.2985768193770071;
    msg.dist_min_abs = 0.10540576118804967;
    msg.dist_min_mean = 0.3620019831293688;
    msg.roll_rate_mean = 0.20164502275647211;
    msg.time = 0.46675824361115337;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 235U;
    tmp_msg_0.lon_gain = 0.591322707978129;
    tmp_msg_0.lat_gain = 0.4185168484079178;
    tmp_msg_0.bond_thick = 0.876949875923515;
    tmp_msg_0.lead_gain = 0.7453957433018121;
    tmp_msg_0.deconfl_gain = 0.8491875532114438;
    tmp_msg_0.accel_switch_gain = 0.281736267181383;
    tmp_msg_0.safe_dist = 0.7461919077860224;
    tmp_msg_0.deconflict_offset = 0.4943626382459274;
    tmp_msg_0.accel_safe_margin = 0.001977256688994289;
    tmp_msg_0.accel_lim_x = 0.8602091131825067;
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
    msg.setTimeStamp(0.9130293021492958);
    msg.setSource(19445U);
    msg.setSourceEntity(245U);
    msg.setDestination(23788U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.14445626162601566;
    msg.lon = 0.8786103009384124;
    msg.eta = 2493694843U;
    msg.duration = 62299U;

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
    msg.setTimeStamp(0.15300648728255795);
    msg.setSource(39470U);
    msg.setSourceEntity(66U);
    msg.setDestination(49560U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.4961851761961058;
    msg.lon = 0.3566734857045656;
    msg.eta = 3098347970U;
    msg.duration = 11664U;

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
    msg.setTimeStamp(0.3694899740805163);
    msg.setSource(50310U);
    msg.setSourceEntity(198U);
    msg.setDestination(35662U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.21783016958618884;
    msg.lon = 0.21035221531758075;
    msg.eta = 1891090111U;
    msg.duration = 43835U;

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
    msg.setTimeStamp(0.6110300633358934);
    msg.setSource(2832U);
    msg.setSourceEntity(99U);
    msg.setDestination(28405U);
    msg.setDestinationEntity(35U);
    msg.plan_id = 21790U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.1739661908512311;
    tmp_msg_0.lon = 0.8656586132745716;
    tmp_msg_0.eta = 1446318006U;
    tmp_msg_0.duration = 5157U;
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
    msg.setTimeStamp(0.5518124709068484);
    msg.setSource(42965U);
    msg.setSourceEntity(146U);
    msg.setDestination(1926U);
    msg.setDestinationEntity(176U);
    msg.plan_id = 63214U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.1146352859952594;
    tmp_msg_0.lon = 0.35859743343517647;
    tmp_msg_0.eta = 3875669512U;
    tmp_msg_0.duration = 57520U;
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
    msg.setTimeStamp(0.9442304778540254);
    msg.setSource(37905U);
    msg.setSourceEntity(88U);
    msg.setDestination(26427U);
    msg.setDestinationEntity(216U);
    msg.plan_id = 10776U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.7348497629537954;
    tmp_msg_0.lon = 0.8323019076088631;
    tmp_msg_0.eta = 2417662709U;
    tmp_msg_0.duration = 7637U;
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
    msg.setTimeStamp(0.8952679491331964);
    msg.setSource(53009U);
    msg.setSourceEntity(19U);
    msg.setDestination(10504U);
    msg.setDestinationEntity(49U);
    msg.type = 125U;
    msg.command = 134U;
    msg.settings.assign("CAGHARTNKIMAHTOKOHGUVIMEQWRFTRFWEUHIEBDSPBRDMWIQWFUYURZKELKWNKIJPJTZCSXYXTXPZJZQOMFDODULRLVNAVQJJEOPEVAMSWBCSQOQCRSXBIKWGWQZNZXAKWNYRCLNLQRHDWGIGUEGIPUYLSFDIOTRBXFSTLGLTJFAYTBSFBOAPXYPCDQNHNVUZZKCGAPHE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 55252U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7939758408122274;
    tmp_tmp_msg_0_0.lon = 0.9438750145418193;
    tmp_tmp_msg_0_0.eta = 1516213270U;
    tmp_tmp_msg_0_0.duration = 51528U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BJRZFLMZENMSCFRRYCXKNIHXVGECOVTJBUTPEJJZBKHGOQMPFXKCGTNXVPGWJSZIQWOYNRIWOGRKLTOLKMLUMKWDAMUAT");

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
    msg.setTimeStamp(0.9740001260036619);
    msg.setSource(32494U);
    msg.setSourceEntity(25U);
    msg.setDestination(16438U);
    msg.setDestinationEntity(205U);
    msg.type = 163U;
    msg.command = 110U;
    msg.settings.assign("CSOOXXDYBZZKJGHXLMKJSDDVSJSXYVGRBFTQUGTKKUCLIBPCWFAAYMCWFXUNMZMTPIBVMZSLHXOEGFKIVEEVARLGEFVYBCINIULHUEGDRUWEEYHPNVTLPTNGRJOITVJYDYOQJTGSNRRCWSQTQPAYKZXMJBHAPMWDXTZZRDWQKKCFDAWYLEUNQIFBFLOZUKQTSMZYKFCLGICGNMSHZAEQOHOVARJXRPNBP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 21478U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YOWZYTPXTIVXQHHKRNOVEMNSCVRURNJHMPPSAPCAMMFBXSIJXDPAYHJQVKRAUTJVTJKLPNHMQZGJJJQJRCFEIBNBWZIMNSTLLNHHCANDZYDXVWSHVMFGLAZRTEHYFYQLPOCUKDVDURLPQEDK");

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
    msg.setTimeStamp(0.9182995235540166);
    msg.setSource(4659U);
    msg.setSourceEntity(97U);
    msg.setDestination(38395U);
    msg.setDestinationEntity(99U);
    msg.type = 75U;
    msg.command = 40U;
    msg.settings.assign("WEIREFBKDLALARQQIMOELOTKEJBFNJHAXNDRJKJQECVCLADIIWWPBPSMSKWCHSASBOOZVBJFZVTNRWMXOYQHXNXAUZUOFHDZCLSSKEQUYBIYIXGBXOCNEBVAKRSHRVCUTGHGNYQPHVSXYBWFFFWISKKWLTMJRYUCQRBDLHYHDJJIVMRMMPALTUGUOZAAXDZYMCTXNLKQYPQRCUFZFDIDLMNKVGETZSEPWIZVJCOGYPZNGEVPQHU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 44238U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YRNTLKDYWGLSXGIXQQGBSVUNNDGSOQFHGGCXCJJBLLZIYRJASRMIRRWGZDUTIOBGVNZNIQEUEKTMPJUYZPQYWUDCCNBGRTDHFZOTAICGVSOHOOXKALFMBHFHEXHSZZULPLMUWNQZAAUTKBQQDKPTDMX");

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
    msg.setTimeStamp(0.4276578403161557);
    msg.setSource(43893U);
    msg.setSourceEntity(54U);
    msg.setDestination(40906U);
    msg.setDestinationEntity(223U);
    msg.state = 130U;
    msg.plan_id = 25009U;
    msg.wpt_id = 132U;
    msg.settings_chk = 41585U;

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
    msg.setTimeStamp(0.9377430668950489);
    msg.setSource(39705U);
    msg.setSourceEntity(123U);
    msg.setDestination(33005U);
    msg.setDestinationEntity(81U);
    msg.state = 172U;
    msg.plan_id = 59448U;
    msg.wpt_id = 70U;
    msg.settings_chk = 29275U;

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
    msg.setTimeStamp(0.3211784398888432);
    msg.setSource(41006U);
    msg.setSourceEntity(231U);
    msg.setDestination(53797U);
    msg.setDestinationEntity(81U);
    msg.state = 169U;
    msg.plan_id = 47894U;
    msg.wpt_id = 178U;
    msg.settings_chk = 13467U;

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
    msg.setTimeStamp(0.15435734357866804);
    msg.setSource(16020U);
    msg.setSourceEntity(141U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(174U);
    msg.uid = 34U;
    msg.frag_number = 70U;
    msg.num_frags = 35U;
    const signed char tmp_msg_0[] = {-77, 83, 48, -112, 53, -63, -71, 34, 89, -18, 62, 34, 76, 30, 79, 25, 29, 124, -73, -101, -2, -96, 1, 89, 78, 30, 52, -60, 56, -1, 88, 26, -80, -32, -3, -103, 44, -118, 126, -105, -100, -85, 30, -91, 103, 96, 123, 49, 23, 12, -105, 19, 113, -82, -118, -72, -67, -81, -1, -90, 103, 119, 66, -93, -104, -103, 13, 34, 102, -71, -103, -29, 87, 21, -105, 67, -56, -116, -110, 123, -38, 98, 116, -5, -36, 46, 54, -2, 64, 19, 63, 118, 7, -126, 5, 14, -89, -63, 20, -39, -65, -89, 38, -72, -11, 4, -39, -107, 5, 123, -24, -57, 91, 27, -69, -3, 52, -117, 3, 120, -40, -38, -121, -101, 29, -109, -17, -7, 27, 57, -5, 46, 55, -99, 124, 123, 126, -41, -109, -83, 89, 59, 14, -54, -17, 5, 76, 84, -80, -120, 36, 121, 14, -9, -36, 73, -71, -102, 123, -81, 35, 82, 55, 100, -91, -11, -85, 71, 6, 19, 15, 7, 126, -119, -81, 47, 21, 122, 97, -21, -74, 120};
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
    msg.setTimeStamp(0.21864670470703118);
    msg.setSource(18598U);
    msg.setSourceEntity(224U);
    msg.setDestination(25819U);
    msg.setDestinationEntity(84U);
    msg.uid = 2U;
    msg.frag_number = 129U;
    msg.num_frags = 78U;
    const signed char tmp_msg_0[] = {-116, 48, 79, -92, 60, 104, 43, -55, -102, -15, -15, -26, 120, -58, 115, -84, 94, 21, -53, -104, -44, -88, 51, 41, -77, 57, -104, 68, 20, -87, 60, -6, 121, -53, -28, 23, 39, 85, -34, 70, 85, -24, 76, 42, 22, 101, -74, 120, -68, 49, -19, 40, 112};
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
    msg.setTimeStamp(0.30462591582434995);
    msg.setSource(35814U);
    msg.setSourceEntity(167U);
    msg.setDestination(26184U);
    msg.setDestinationEntity(242U);
    msg.uid = 76U;
    msg.frag_number = 82U;
    msg.num_frags = 185U;
    const signed char tmp_msg_0[] = {-25, -28, 9, 108, 7, -30, -128, 93, 75, 4, 23, -8, -28, -24, 101, 72, 32, 114, -63, 48, -100};
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
    msg.setTimeStamp(0.28277356934510167);
    msg.setSource(58843U);
    msg.setSourceEntity(215U);
    msg.setDestination(51388U);
    msg.setDestinationEntity(234U);
    msg.content_type.assign("FBXKYWRNTOMJCAUWYFTJVMMOJLTMXFKOFOLGCAOGNMOBPYRKZTPNJUEBNDOBHWFACCEXMDYUCDJZSSPQCKNCONSZYHIPSLWIDAEZZELSEVFIFUUSHQNKMEUIHZQFARSQHUBYBOWDWKYPLJACXRNUTAWRTSBJBWQNDRLVGUYIRVTEORDGDEXEPCKYKGHNAZDQQ");
    const signed char tmp_msg_0[] = {76, -3, 112, 47, -29, -17, 57, -32, -91, -98, 10, -22, -10, -5, 19, -116, 45, 96, -90, 62, -12, 6, -101, 6, 80, 34, 59, 7, -124, -19, 98, 32, 111, 75, 42, -118, 14, 86, 53, -76, 2, -99, 24, -119, -104, 18, -21, -126, 93, 97, 47, -106, 35, -68, -102, -18, -89, -96, 65, -41, 15, -64, 102, 45, -17, -9, -47, 54, -59, -99, 71, -42, -105, -69, -45, 124, 116, 1, -58, 124, -88, 121, -102, 12, 97, 93, -91, -27, 38, 115, 88, -45, -52, 55, -83, 98, -11, 111, -12, 24, 91, -16, -91, -4, 22, -41, -94, 92, 85, -19, -116, -49, 92, 45, -46, 61, -63, 87, 28, 71, -111, 82, 19, 42, 89, 17, -11, -9, -126, 87, -97, -11};
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
    msg.setTimeStamp(0.32896704058342485);
    msg.setSource(19750U);
    msg.setSourceEntity(156U);
    msg.setDestination(34608U);
    msg.setDestinationEntity(139U);
    msg.content_type.assign("LJCKKOCSJOMKBBNFKVMSUAJAYPMBIDGMHZUGTVNXFQORSRRZYVDUIXXRYTJKQEVPULLCTFFI");
    const signed char tmp_msg_0[] = {-120, 56, 88, -97, 18, 62, -28, 92, -124, -83, -76, 119, -87, -78, 56, 54, 90, -117, -54, -123, -77, -125, 45, 10, 15, -51, 74, 97, -116, -13, 94, -27, 107, 33, -127, 64, -49, -13, -49, -50, -57, -81, -100, 75, 72, 95, 27, 115, 121, 112, -30, -97, 47, -93, -52, 69, 5, 126, 77, 15, -35, -25, 0, -46};
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
    msg.setTimeStamp(0.9886051466529316);
    msg.setSource(33125U);
    msg.setSourceEntity(234U);
    msg.setDestination(31131U);
    msg.setDestinationEntity(46U);
    msg.content_type.assign("KGREAPHLVYWWMKBGYDMGCRSTAKVGRFSCBBEBPTQHVVDXSJCKHTGCKWZQUIPMPRLOMLYUTIWLDDWBSNJCHBCAQGPAOIVRKYIYOWFOWGULRERGCZQTIUSWAQMQTZSHUJKZIJZZYSMKMXHDVMKNOSAUAHUFVNJWBRVDKCZYPMCUOUIPOLPHAYQPSFNBXXNBELYEIJFOCXQEAXEXONUNJEDTJLFXQSHZVTENMIGLRTGQHXVYDRBZ");
    const signed char tmp_msg_0[] = {-51, -14, -1, -21, -67, 32, -30, -13, 120, -25, -22, 44, 37, -94, 22, 89, -3, 113, -25, -42, 24, -50, -102, -8, 123, 47, 86, 63, 85, 20, -99, -90, 18, -82, 116, 80, 53, 108, -121, 84, 114, -72, -114, 119, -13, 27, 31, 43, 116, 2, 126, -76, 31, -73, -106, -122, 79, -123, 96, -104, -12, 11, 97, -15, 26, 74, 6, 79, -17, 53, 33, 8, 16, -10, -58, -70, 39, 52, 75, 36, 58, 29, -111, -7, -106, -107, 71, -68, -62, 89, -67, -76, -29, -48, 27, -47, 122, 69, -82, 88, 115, -81, 21, 2, 8, -121, -60, -87, -49, -75, -99, 65, -63, 91, -16, 84, -57, 123, -31, -90, -61};
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
    msg.setTimeStamp(0.2496408194141465);
    msg.setSource(27296U);
    msg.setSourceEntity(218U);
    msg.setDestination(32531U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.4141121001254746);
    msg.setSource(52420U);
    msg.setSourceEntity(193U);
    msg.setDestination(7446U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.1486318154012779);
    msg.setSource(11474U);
    msg.setSourceEntity(183U);
    msg.setDestination(23022U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.48454700991085753);
    msg.setSource(24088U);
    msg.setSourceEntity(62U);
    msg.setDestination(8741U);
    msg.setDestinationEntity(153U);
    msg.target = 34996U;
    msg.bearing = 0.562508369922079;
    msg.elevation = 0.27539482587163355;

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
    msg.setTimeStamp(0.6104008762799981);
    msg.setSource(55858U);
    msg.setSourceEntity(89U);
    msg.setDestination(17202U);
    msg.setDestinationEntity(116U);
    msg.target = 17295U;
    msg.bearing = 0.22495679153599635;
    msg.elevation = 0.41428324569942576;

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
    msg.setTimeStamp(0.8270456344846431);
    msg.setSource(2183U);
    msg.setSourceEntity(109U);
    msg.setDestination(52841U);
    msg.setDestinationEntity(198U);
    msg.target = 59394U;
    msg.bearing = 0.44072485067649725;
    msg.elevation = 0.0901653776408744;

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
    msg.setTimeStamp(0.35193143758328227);
    msg.setSource(17845U);
    msg.setSourceEntity(77U);
    msg.setDestination(29241U);
    msg.setDestinationEntity(34U);
    msg.target = 10916U;
    msg.x = 0.14682831145790298;
    msg.y = 0.9146822282908281;
    msg.z = 0.11885208474522613;

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
    msg.setTimeStamp(0.7570251592024345);
    msg.setSource(55055U);
    msg.setSourceEntity(90U);
    msg.setDestination(5166U);
    msg.setDestinationEntity(173U);
    msg.target = 46138U;
    msg.x = 0.17079588928635936;
    msg.y = 0.893499883932195;
    msg.z = 0.6822383137976804;

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
    msg.setTimeStamp(0.44332029507613635);
    msg.setSource(18158U);
    msg.setSourceEntity(204U);
    msg.setDestination(64997U);
    msg.setDestinationEntity(129U);
    msg.target = 38784U;
    msg.x = 0.5876797544313176;
    msg.y = 0.49856423693935525;
    msg.z = 0.10308922495059825;

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
    msg.setTimeStamp(0.0683498832425199);
    msg.setSource(38071U);
    msg.setSourceEntity(20U);
    msg.setDestination(62116U);
    msg.setDestinationEntity(125U);
    msg.target = 38710U;
    msg.lat = 0.281936541045567;
    msg.lon = 0.8882115119594247;
    msg.z_units = 40U;
    msg.z = 0.5405929713274945;

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
    msg.setTimeStamp(0.2015096543410151);
    msg.setSource(50933U);
    msg.setSourceEntity(6U);
    msg.setDestination(4474U);
    msg.setDestinationEntity(102U);
    msg.target = 58248U;
    msg.lat = 0.746910028178398;
    msg.lon = 0.43198865257092556;
    msg.z_units = 185U;
    msg.z = 0.9917733728239564;

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
    msg.setTimeStamp(0.3819404888395884);
    msg.setSource(51674U);
    msg.setSourceEntity(236U);
    msg.setDestination(64422U);
    msg.setDestinationEntity(90U);
    msg.target = 25363U;
    msg.lat = 0.03092957410585817;
    msg.lon = 0.10185802922114495;
    msg.z_units = 241U;
    msg.z = 0.299492949165866;

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
    msg.setTimeStamp(0.3433050908772606);
    msg.setSource(23992U);
    msg.setSourceEntity(157U);
    msg.setDestination(387U);
    msg.setDestinationEntity(31U);
    msg.locale.assign("OWKJBXUIRORDQXITFQXSSJBSCGLFGEUDGRLNBAONFBMKUUCGJZYLQAHDFKJOSFUQVHVTVFGLCDPMCBRYPGXLCQBSABKAJFAVHZILVEJHEZFHIIEFGBRPOYZVCMYNMTYSWQPJZUYVAORBEUJ");
    const signed char tmp_msg_0[] = {-79, -94, 42, -110, 62, 4, 36, 94, -116, -36, 19, 60, -2, 106, 74, -118, 3, 80, -107, -85, 33, -76, -120, -98, 76, -96, 35, -109, -60, -127, 45, 115, 116, -21, -60, 69, 30, -68, -103, -12, -95, 34, -37, 63, -96, -67, -52, 98, 90, -4, -29, 105, -11, -65, -101, 76, 50, 12, 22, 21, -51, -94, -89, 94, -97, 40, -48, -61, -59, 14, 86, -19, 66, 111, 50, -83, -6, 108, 102, -70, 12, -123, -58, 7, 65, 1, 13, -95, -73, -89, -13, -65, -98, 126, -14, -56, 29, -112, -49, 67, -91, 125, 85, -8, 50, 8, 119, 83, 22, -23, -61, -23, 106, -53, 10, 74, 92, 18, 16, 93, 83, -73, -105, 109, 46, 110, -104, -75, 14, -45, 115, -127, 25, 42, 78, -35, -57, -65, 91, -104, 25, -28, 39, -24, -15, -25, 109, 70, 63, -76, -37, 57, -25, 112, -79, -25, -120, 20, -58, 38, -114, -36, 34, -4, 83, 81, -33, -97, 3, 96, -43, 68, 45, 102, -45, 84, 72, 2, 23, 53, 59, 47, -80, 105, 75, -53};
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
    msg.setTimeStamp(0.38326826360435273);
    msg.setSource(38389U);
    msg.setSourceEntity(48U);
    msg.setDestination(39625U);
    msg.setDestinationEntity(88U);
    msg.locale.assign("TLFDRUVCILFUAWNQQEITVDPSMXCHAMXTKNBATVBCJKIZTHWASQDFFBKPWHEOEBRUYDCIFEJMMGYIGGXNABVYYQTPSFPOKDSFMPXLDRGJHVNKCEVOLEUWVRBRCJZNBANWPHYRQGKXMPJHGXBMASUOPPAHRDQMZQEZUVXTCORFHROWLTGWSHNIITAEKKL");
    const signed char tmp_msg_0[] = {-1, -45, -12, 82, 99, -58, 67, 53, 115, -40, -19, -46, 13, -81, -4, -96, -83, -51, -97, -127, 103, -88, -126, 88, 85, 93, -25, 17, -13, -86, 38, 85, -100, -35, -30, 80, 14, 97, -34, -96, -118, 110, -70, 14, -122, 121, 117, -53, 8, 114, -115, -13, -123, 113, 26, 51, -126, -113, -8, -43, 11, -121, -40, -46, -32, 5, -54, -49, -93, -41, -57, -74, 67, -69, -40, -9, -6, 120, 116, -3, -44, 94, 72, 100, 99, -72, -19, 125, 107, 76, 121, -57, 7, -34, 23, 48, -47, -69, -118, 69, -14, 106, -2, -23, -118, 3, 100, -82, -119, 72};
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
    msg.setTimeStamp(0.9273434974940835);
    msg.setSource(56694U);
    msg.setSourceEntity(6U);
    msg.setDestination(53129U);
    msg.setDestinationEntity(86U);
    msg.locale.assign("YJZBKQUNDYFSBOVUMRFYTIMEFSXIOWYZHBGRJHYLACRZNWGEXBLQKKXLRTTBHGZWJUZAUDAPQPTPUHCECWTCMDHSMLXKTYECSEXUFVWVPHIHZGQCFAOFIXLOATVEAGFCEMTGRZSL");
    const signed char tmp_msg_0[] = {-7, 69, -92, -12, 51, 93, -56, -77, -120, -89, -38, 1, -16, -101, 46, 65, 124, 85, -66, -8, -11, -21, 10, 93, 57, -47, 75, 100, 120, -106, -31, -87, -57, 16, -95, -43, -17, -86, 11, 28, 87, 85, 99, 36, -77, 65, 21, -78, 34, -15, 114, -42, 5, 25, -37, -98, 15, 74, -50, 46, -106, 67, -111, -91, 18, 0, 9, -64, 63, -111, 44, 28, -18, -74, -63, -22, 19, -99, -12, -3, -120, 24, -99, 103, 102, 79, -3, -124, 14, 55, 11, 3, -18, 1, -98, -21, 4, 50, 73, 98, -52, 116, -24, 4, 73, 3, 61, -124, 64, 34, -54, -59, 85, 32, -73, 108, 51, 6, 90, 12, -99, -20, -14, -90, -67, -98, 84, -113, -10, 43, -60, -35, 93, 24, 42, -39, 92, -11, -118, -9, -4, -30, -3, 68, 1, 11, 23, 120, -57, -60, -16, -18, -73, -98, -89, -51, 92, 119, 72, -84, -103, 0, -111, 22};
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
    msg.setTimeStamp(0.6046045929332587);
    msg.setSource(56158U);
    msg.setSourceEntity(153U);
    msg.setDestination(23373U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.30696561947747025);
    msg.setSource(11263U);
    msg.setSourceEntity(192U);
    msg.setDestination(8249U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.2636058473447125);
    msg.setSource(26026U);
    msg.setSourceEntity(242U);
    msg.setDestination(41386U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.3659015175626852);
    msg.setSource(15765U);
    msg.setSourceEntity(126U);
    msg.setDestination(15573U);
    msg.setDestinationEntity(128U);
    msg.camid = 67U;
    msg.x = 64128U;
    msg.y = 19127U;

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
    msg.setTimeStamp(0.1025579916201621);
    msg.setSource(9029U);
    msg.setSourceEntity(53U);
    msg.setDestination(11549U);
    msg.setDestinationEntity(247U);
    msg.camid = 57U;
    msg.x = 12619U;
    msg.y = 32453U;

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
    msg.setTimeStamp(0.5036510181387599);
    msg.setSource(7916U);
    msg.setSourceEntity(25U);
    msg.setDestination(28818U);
    msg.setDestinationEntity(2U);
    msg.camid = 18U;
    msg.x = 64733U;
    msg.y = 53369U;

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
    msg.setTimeStamp(0.1504095719826548);
    msg.setSource(7640U);
    msg.setSourceEntity(94U);
    msg.setDestination(12208U);
    msg.setDestinationEntity(130U);
    msg.camid = 62U;
    msg.x = 43909U;
    msg.y = 8949U;

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
    msg.setTimeStamp(0.052021388602693674);
    msg.setSource(1388U);
    msg.setSourceEntity(128U);
    msg.setDestination(11768U);
    msg.setDestinationEntity(63U);
    msg.camid = 219U;
    msg.x = 6500U;
    msg.y = 6870U;

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
    msg.setTimeStamp(0.8475739465713098);
    msg.setSource(21348U);
    msg.setSourceEntity(237U);
    msg.setDestination(2891U);
    msg.setDestinationEntity(69U);
    msg.camid = 201U;
    msg.x = 1881U;
    msg.y = 29663U;

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
    msg.setTimeStamp(0.29164238473422066);
    msg.setSource(19237U);
    msg.setSourceEntity(135U);
    msg.setDestination(9688U);
    msg.setDestinationEntity(56U);
    msg.tracking = 215U;
    msg.lat = 0.4205714221078265;
    msg.lon = 0.05442869540869899;
    msg.x = 0.32647896434902346;
    msg.y = 0.6800684892233383;
    msg.z = 0.3436837985614437;

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
    msg.setTimeStamp(0.6731963387349221);
    msg.setSource(24461U);
    msg.setSourceEntity(26U);
    msg.setDestination(64787U);
    msg.setDestinationEntity(238U);
    msg.tracking = 131U;
    msg.lat = 0.5353882429723421;
    msg.lon = 0.27719077375430456;
    msg.x = 0.04818368847211496;
    msg.y = 0.2894118870274667;
    msg.z = 0.34821393613210994;

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
    msg.setTimeStamp(0.6873712896250324);
    msg.setSource(44469U);
    msg.setSourceEntity(24U);
    msg.setDestination(24565U);
    msg.setDestinationEntity(103U);
    msg.tracking = 143U;
    msg.lat = 0.22080740492678919;
    msg.lon = 0.7270159032282768;
    msg.x = 0.9387299219979529;
    msg.y = 0.5517417294629321;
    msg.z = 0.5299666787777637;

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
    msg.setTimeStamp(0.5267200396421193);
    msg.setSource(27381U);
    msg.setSourceEntity(254U);
    msg.setDestination(43317U);
    msg.setDestinationEntity(3U);
    msg.target.assign("OCSPHCLGBQVDYNZWSWPWIRZLWGFKERAGWMZTTVUZXJEJDIZUFVVLQTWHVUQXLNMICRGPYIHMOJZABQLNINPNCMCVAVYJBAJQVWRYUFNFWRWOCBCGPRHISPSHXZKDCMEKVYMSFGHSETTKXZQUPKFAJGTXOUCSPVGWQXBAJQEKDSXNTRFYSDEASDPPOXIDRUFBNXILJLEEMMBEKKDOUHLBCTJBO");
    msg.lbearing = 0.3073243136261622;
    msg.lelevation = 0.5870463900665852;
    msg.bearing = 0.25786190181079693;
    msg.elevation = 0.9169363334130823;
    msg.phi = 0.2729334210469806;
    msg.theta = 0.16548819400609383;
    msg.psi = 0.26155579967246945;
    msg.accuracy = 0.9863753304618903;

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
    msg.setTimeStamp(0.5229448344409395);
    msg.setSource(11008U);
    msg.setSourceEntity(127U);
    msg.setDestination(9025U);
    msg.setDestinationEntity(179U);
    msg.target.assign("IELDNBAFLOJBQZNDCGVUVEWTDPBKIXVIPZFOLNGAYDCUHIDYFKSXMNGRHHPRRQXQJGJRODXFYBBMCZPTMWCYBNVEXKJIILHVBHUZPRWELYTTVLCKJNZSBKQSWACSWRDHEPDRGOXMSDLLHOAXIAQ");
    msg.lbearing = 0.5028929660390873;
    msg.lelevation = 0.03134670550468155;
    msg.bearing = 0.7654404770224204;
    msg.elevation = 0.006805526353166225;
    msg.phi = 0.6916539831864187;
    msg.theta = 0.02747467340168941;
    msg.psi = 0.41535027194417884;
    msg.accuracy = 0.49535355710246565;

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
    msg.setTimeStamp(0.037157243895315384);
    msg.setSource(23850U);
    msg.setSourceEntity(158U);
    msg.setDestination(56984U);
    msg.setDestinationEntity(153U);
    msg.target.assign("QSQUAWIMATHQCRQMUHIGNCQFNWKNMRXLYJKTXXPEFDVOZNVFPUVOABEGYYEEUPSNRUECPNRAHQUBOSOJOTXLGROLLVSBVXFQBKEFRVRDFWTGTKWAAWLIDKKCJHBPHHBBAJZVSGDRWDZBSIJTSMZGDRXWWCESXQKITZMIPVJYFGRFVUYELJOCHZLSAXMBLDJSJDZYIONNLKDZYXNIPCHPEHW");
    msg.lbearing = 0.42606952121618835;
    msg.lelevation = 0.8179052028486501;
    msg.bearing = 0.44746766439886765;
    msg.elevation = 0.9932825301929272;
    msg.phi = 0.38838063310382165;
    msg.theta = 0.6864485860461875;
    msg.psi = 0.0224868828295145;
    msg.accuracy = 0.19944908783883375;

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
    msg.setTimeStamp(0.08429615844637672);
    msg.setSource(60734U);
    msg.setSourceEntity(78U);
    msg.setDestination(27380U);
    msg.setDestinationEntity(230U);
    msg.target.assign("VQSYGDPIBDQXIUAJXCYMBNGABZYXWSFPRALHSXNPRJXENOYXALFWHEKKBVHZJJMXMTQEPJVDHTHOYZWRPYMDLNEBGUSMDXQSBHVLXGADULEVIQNCZHNBACFZRIKCIBYFQUWUKWMUFJQEFWYOATIFPJUVGCJHBMQDOTZKSNOATMKCGEIWVIXMEORBZWECYOGGKROLLLDPGZVUNUUPSLFOHVCTJCVRZTNQKWDHJFZA");
    msg.x = 0.46770320724419767;
    msg.y = 0.5088079560114064;
    msg.z = 0.3337974953115066;
    msg.n = 0.8584511381409032;
    msg.e = 0.8181380757321322;
    msg.d = 0.3384448258921059;
    msg.phi = 0.6683888229646975;
    msg.theta = 0.4589995860962979;
    msg.psi = 0.5357579949920264;
    msg.accuracy = 0.8808665201032727;

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
    msg.setTimeStamp(0.04804798016698908);
    msg.setSource(20211U);
    msg.setSourceEntity(67U);
    msg.setDestination(10517U);
    msg.setDestinationEntity(250U);
    msg.target.assign("UFAISSABVVTEJSZSMQZRULGNIYMKTWXRUFDXYXLUEMWAOYSNGBLKQTYUURNPKNSDRIFYRSOWZVGSHHVHUJTZRXTWIHBVAFANDDQOCFPIOMCORGLNQHMOLTWVYMVCGULDKELPEBPCBJUNVJVAAIZFCDZGMKT");
    msg.x = 0.5668645707042583;
    msg.y = 0.9054270033432049;
    msg.z = 0.5150804012279941;
    msg.n = 0.6537719386037987;
    msg.e = 0.8032883629778215;
    msg.d = 0.04212627154994131;
    msg.phi = 0.5157722782154217;
    msg.theta = 0.42233036801909196;
    msg.psi = 0.20955098611454814;
    msg.accuracy = 0.41384290486545194;

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
    msg.setTimeStamp(0.7371182951041182);
    msg.setSource(61081U);
    msg.setSourceEntity(38U);
    msg.setDestination(28553U);
    msg.setDestinationEntity(60U);
    msg.target.assign("EBEBDMXJWEZOTXYWRYGMFOZRJVKVPQNENYGHBEQLGHXFZUASDZHIVICFJZTKPETPXXLMFFVOJXVMQOR");
    msg.x = 0.8507849923369374;
    msg.y = 0.4670395126964295;
    msg.z = 0.6815830785117921;
    msg.n = 0.733322281095977;
    msg.e = 0.7024658749849821;
    msg.d = 0.7648819410144955;
    msg.phi = 0.9270411032278589;
    msg.theta = 0.4172253568113098;
    msg.psi = 0.8750831291638674;
    msg.accuracy = 0.7441085810746615;

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
    msg.setTimeStamp(0.18468257168738533);
    msg.setSource(36773U);
    msg.setSourceEntity(132U);
    msg.setDestination(53883U);
    msg.setDestinationEntity(192U);
    msg.target.assign("CDPDQFTLXWFVNWEGNXDJ");
    msg.lat = 0.8128341771235673;
    msg.lon = 0.2313818151520599;
    msg.z_units = 25U;
    msg.z = 0.2185533428064177;
    msg.accuracy = 0.1690160316061644;

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
    msg.setTimeStamp(0.7320981183809393);
    msg.setSource(30055U);
    msg.setSourceEntity(184U);
    msg.setDestination(43542U);
    msg.setDestinationEntity(31U);
    msg.target.assign("BRSTORDDFYSPALNCQUVRDESMFDVQUNTRJRVSNFLZYPGKELVKGBEXATLUQUUTQRXNUJSTTNPJMTFYKQMXCOPECUSWKOIFHYVBWLFMPOPOJEHCJZTNOYIJOKUKQEYMAJLWXDQCZDKGGWWLXYAMHNIZGOFYHODHSANPAYIVRBIIDQQHEIIWCXELADXHP");
    msg.lat = 0.07026884490323604;
    msg.lon = 0.7212242759274133;
    msg.z_units = 1U;
    msg.z = 0.048967680936297775;
    msg.accuracy = 0.3439834421529855;

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
    msg.setTimeStamp(0.19062587657747065);
    msg.setSource(10418U);
    msg.setSourceEntity(214U);
    msg.setDestination(19789U);
    msg.setDestinationEntity(16U);
    msg.target.assign("XAYRNFNWHNMZMCRARSJWUGJHJEEBZNSKBZWKJBVCKUJYZFVQYZUOHVWSPWIEF");
    msg.lat = 0.2249721309281657;
    msg.lon = 0.5498774756298541;
    msg.z_units = 224U;
    msg.z = 0.17808167819280485;
    msg.accuracy = 0.49026617493046354;

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
    msg.setTimeStamp(0.053930839810857445);
    msg.setSource(33427U);
    msg.setSourceEntity(204U);
    msg.setDestination(6888U);
    msg.setDestinationEntity(131U);
    msg.name.assign("WYPNZLDXNEGCNCOMRIJZOMPHOYYWEQUDGSMAFYB");
    msg.lat = 0.6228754249006258;
    msg.lon = 0.9167017782596815;
    msg.z = 0.5887309882119641;
    msg.z_units = 134U;

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
    msg.setTimeStamp(0.9570289435607706);
    msg.setSource(2357U);
    msg.setSourceEntity(5U);
    msg.setDestination(33969U);
    msg.setDestinationEntity(84U);
    msg.name.assign("RNKIMHPJMQRADEUQYKXVCKIUXFMUSFGAHATIDFZXDQCPRBLLKO");
    msg.lat = 0.1893863459114552;
    msg.lon = 0.5893086419699682;
    msg.z = 0.21147397279616342;
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
    msg.setTimeStamp(0.5546542097845745);
    msg.setSource(40427U);
    msg.setSourceEntity(190U);
    msg.setDestination(6609U);
    msg.setDestinationEntity(245U);
    msg.name.assign("NLIAHZTWVYHCWOGHZJW");
    msg.lat = 0.5609343610476923;
    msg.lon = 0.06608201059147278;
    msg.z = 0.35928442873049116;
    msg.z_units = 38U;

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
    msg.setTimeStamp(0.7395845056972629);
    msg.setSource(4548U);
    msg.setSourceEntity(252U);
    msg.setDestination(9547U);
    msg.setDestinationEntity(84U);
    msg.op = 251U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GYYOKZKZWWFVPEXRWLJNZLWJBECFUGQMGOHFSXXRHJKAQSGFILAKBQDVSSZEZIBMTQNXWOXOJIPXAXXFVKDYMZQIRVRDNSTRNQUNATPTNLORIHCIPPZOHUFLCVODANFPCBNNZHWWSVQZGBVPZWYLURMMBKYUBBESEFPVSELLVMUMGBCNCDKTARTPYBRDTJACQFEJDUJEDIMFEUHCRJXGYLJY");
    tmp_msg_0.lat = 0.6451870985018406;
    tmp_msg_0.lon = 0.569093710073986;
    tmp_msg_0.z = 0.20555978189739665;
    tmp_msg_0.z_units = 186U;
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
    msg.setTimeStamp(0.172973633843448);
    msg.setSource(27653U);
    msg.setSourceEntity(7U);
    msg.setDestination(61753U);
    msg.setDestinationEntity(106U);
    msg.op = 47U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HCJNWBMFTWVIQOINRYLAFQJYTYVPVAGLHOVELSSMXJAJPKMHVJHQODIHCPQWRAKVDHSETWXAXTCOCUIASFZSBGZHYXNTGEGYFPPTPMNWMVIWCWBCSHQPABPKNBMUFRXUDLXGEPQAGEYDQFTSXODCBLUZULYRVWOENZFDRYJXIKSIBWELOFNQWMMICZFL");
    tmp_msg_0.lat = 0.5441231816056066;
    tmp_msg_0.lon = 0.00032372130254376685;
    tmp_msg_0.z = 0.7471284699918899;
    tmp_msg_0.z_units = 78U;
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
    msg.setTimeStamp(0.8224106213014104);
    msg.setSource(50357U);
    msg.setSourceEntity(18U);
    msg.setDestination(23621U);
    msg.setDestinationEntity(43U);
    msg.op = 94U;

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
    msg.setTimeStamp(0.76107344472653);
    msg.setSource(49241U);
    msg.setSourceEntity(32U);
    msg.setDestination(8422U);
    msg.setDestinationEntity(215U);
    msg.value = 0.7946061498775834;
    msg.type = 50U;

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
    msg.setTimeStamp(0.34139840503737573);
    msg.setSource(56732U);
    msg.setSourceEntity(105U);
    msg.setDestination(60077U);
    msg.setDestinationEntity(105U);
    msg.value = 0.49546224392717075;
    msg.type = 253U;

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
    msg.setTimeStamp(0.695790616414449);
    msg.setSource(44158U);
    msg.setSourceEntity(250U);
    msg.setDestination(54320U);
    msg.setDestinationEntity(28U);
    msg.value = 0.17864565773622887;
    msg.type = 3U;

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
    msg.setTimeStamp(0.42678186452152544);
    msg.setSource(16249U);
    msg.setSourceEntity(168U);
    msg.setDestination(38348U);
    msg.setDestinationEntity(93U);
    msg.value = 0.14687988140662256;

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
    msg.setTimeStamp(0.21030421575983171);
    msg.setSource(30260U);
    msg.setSourceEntity(18U);
    msg.setDestination(58935U);
    msg.setDestinationEntity(254U);
    msg.value = 0.8465730254358733;

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
    msg.setTimeStamp(0.9549632715159985);
    msg.setSource(53045U);
    msg.setSourceEntity(191U);
    msg.setDestination(8022U);
    msg.setDestinationEntity(145U);
    msg.value = 0.16627054441806244;

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
    msg.setTimeStamp(0.3817219287003727);
    msg.setSource(29855U);
    msg.setSourceEntity(189U);
    msg.setDestination(5128U);
    msg.setDestinationEntity(111U);
    msg.timestamp_last_service = 0.957839245794091;
    msg.time_next_service = 0.9022691849949023;
    msg.time_motor_next_service = 0.7024779352942515;
    msg.time_idle_ground = 0.33556829230936625;
    msg.time_idle_air = 0.6441975903595947;
    msg.time_idle_water = 0.45443702546377085;
    msg.time_idle_underwater = 0.7449669178790557;
    msg.time_idle_unknown = 0.228887943289794;
    msg.time_motor_ground = 0.6383748584912575;
    msg.time_motor_air = 0.7156778725060153;
    msg.time_motor_water = 0.3168791502304965;
    msg.time_motor_underwater = 0.556771617528799;
    msg.time_motor_unknown = 0.8547485046767695;
    msg.rpm_min = -13345;
    msg.rpm_max = -15124;
    msg.depth_max = 0.45346166704579915;

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
    msg.setTimeStamp(0.9214881930829585);
    msg.setSource(60838U);
    msg.setSourceEntity(162U);
    msg.setDestination(23688U);
    msg.setDestinationEntity(78U);
    msg.timestamp_last_service = 0.4344107950084296;
    msg.time_next_service = 0.14646504971142948;
    msg.time_motor_next_service = 0.26815235851272756;
    msg.time_idle_ground = 0.12591805312291948;
    msg.time_idle_air = 0.2796776830542599;
    msg.time_idle_water = 0.7874690582867291;
    msg.time_idle_underwater = 0.03585304269114342;
    msg.time_idle_unknown = 0.38740552439117537;
    msg.time_motor_ground = 0.683053765153842;
    msg.time_motor_air = 0.524356102738362;
    msg.time_motor_water = 0.5507330819327668;
    msg.time_motor_underwater = 0.8475263247727117;
    msg.time_motor_unknown = 0.6752161140615756;
    msg.rpm_min = 31263;
    msg.rpm_max = 29484;
    msg.depth_max = 0.6384393144192886;

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
    msg.setTimeStamp(0.1204527916285415);
    msg.setSource(58617U);
    msg.setSourceEntity(231U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(249U);
    msg.timestamp_last_service = 0.1281092691422786;
    msg.time_next_service = 0.9780630295200039;
    msg.time_motor_next_service = 0.5203625589984681;
    msg.time_idle_ground = 0.530551780070347;
    msg.time_idle_air = 0.8206621760323006;
    msg.time_idle_water = 0.9010939265888617;
    msg.time_idle_underwater = 0.4378807687323676;
    msg.time_idle_unknown = 0.2852145201946584;
    msg.time_motor_ground = 0.10961128491311212;
    msg.time_motor_air = 0.07282496552806428;
    msg.time_motor_water = 0.07751636102573278;
    msg.time_motor_underwater = 0.16333114800526327;
    msg.time_motor_unknown = 0.6664295647103885;
    msg.rpm_min = -30526;
    msg.rpm_max = 918;
    msg.depth_max = 0.8117470824532833;

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
    msg.setTimeStamp(0.7785310762451457);
    msg.setSource(29168U);
    msg.setSourceEntity(176U);
    msg.setDestination(31210U);
    msg.setDestinationEntity(195U);
    msg.severity = 42U;
    msg.text.assign("DLWNTODMZOMGNQGFAOMDHVPZWPGGFZSRVHEQSIBZQFXEFRFTZHCLMWJFHDIRPHYUTNNEESOTGUCPPRYZDLBVGLZUXSTIBJMWIBMKPOUECRNAHLBGFEXQRJMTLJFSNLKYEWOCKVDYZNHGJDPACHWBRQOWAXHAYOSBDVVQJKVXDWBLICOMIIQKXKXLYM");

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
    msg.setTimeStamp(0.08176630734954715);
    msg.setSource(24413U);
    msg.setSourceEntity(197U);
    msg.setDestination(57867U);
    msg.setDestinationEntity(134U);
    msg.severity = 196U;
    msg.text.assign("HJDWHOAVDMZANPKZTXKMTWYHPISTQSIVJQDPFAKWRPOCGFSKCQFMWZZCBFSMXYEFZFEUETXFVHSBVKEUPRXDKINIWZCFUGWBJLVOSIQOHSJALYPCHLDTOUYRLPHDODXJCZXAYMMJMWTRWGINUOUODPKKMDUEYIXRWRALIXGSZVQRBZBTGMUNLRWULGJDLKBPQHBYQEXTACYSANOFL");

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
    msg.setTimeStamp(0.8256429937749119);
    msg.setSource(53046U);
    msg.setSourceEntity(166U);
    msg.setDestination(46290U);
    msg.setDestinationEntity(17U);
    msg.severity = 201U;
    msg.text.assign("UWRWPKPSPIEJYUTSCZQRTJKQYOMRZFLUWJBJEYZFVXJFCAFTTSUXGKQYSBONXREUIEVQLTVNQZRGTACUTLCVDQGCXJYLCKCAMWTUZWJXBSLUHEHEWOITHAN");

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
    msg.setTimeStamp(0.3278018234744148);
    msg.setSource(31747U);
    msg.setSourceEntity(144U);
    msg.setDestination(32795U);
    msg.setDestinationEntity(64U);
    msg.channel = 67;
    msg.value = -520209867;
    msg.gain = 83U;

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
    msg.setTimeStamp(0.4693365493014373);
    msg.setSource(27684U);
    msg.setSourceEntity(140U);
    msg.setDestination(6518U);
    msg.setDestinationEntity(173U);
    msg.channel = -20;
    msg.value = -317464540;
    msg.gain = 70U;

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
    msg.setTimeStamp(0.12385045423396268);
    msg.setSource(60207U);
    msg.setSourceEntity(185U);
    msg.setDestination(34261U);
    msg.setDestinationEntity(115U);
    msg.channel = 62;
    msg.value = 1658210588;
    msg.gain = 202U;

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
    msg.setTimeStamp(0.42737202076178493);
    msg.setSource(7918U);
    msg.setSourceEntity(73U);
    msg.setDestination(11741U);
    msg.setDestinationEntity(138U);
    msg.ch01 = 0.14005263278053937;
    msg.ch02 = 0.6717043292086453;
    msg.ch03 = 0.27187481097275146;
    msg.ch04 = 0.8040415212667552;
    msg.ch05 = 0.7457154027121486;
    msg.ch06 = 0.7024531486050272;
    msg.ch07 = 0.6156946686141744;
    msg.ch08 = 0.48335326945344315;
    msg.ch09 = 0.8084437910824881;
    msg.ch10 = 0.9544166210589958;
    msg.ch11 = 0.5254995174126352;
    msg.ch12 = 0.32822230689335363;
    msg.ch13 = 0.9768276559832879;
    msg.ch14 = 0.7413890980650747;
    msg.ch15 = 0.08504298976502989;
    msg.ch16 = 0.00400928119113475;

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
    msg.setTimeStamp(0.3682805187697139);
    msg.setSource(9474U);
    msg.setSourceEntity(143U);
    msg.setDestination(24805U);
    msg.setDestinationEntity(213U);
    msg.ch01 = 0.2771280129173379;
    msg.ch02 = 0.41220634072356965;
    msg.ch03 = 0.6471035277255951;
    msg.ch04 = 0.5334631531299903;
    msg.ch05 = 0.3998162794406892;
    msg.ch06 = 0.5302963580200621;
    msg.ch07 = 0.23385093438712445;
    msg.ch08 = 0.13580168639577972;
    msg.ch09 = 0.6204647326318957;
    msg.ch10 = 0.09687698248796317;
    msg.ch11 = 0.46754911659764786;
    msg.ch12 = 0.28021669624614143;
    msg.ch13 = 0.20930773852852458;
    msg.ch14 = 0.453885265613746;
    msg.ch15 = 0.9835610208195156;
    msg.ch16 = 0.32293884446435495;

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
    msg.setTimeStamp(0.7545555218411105);
    msg.setSource(9486U);
    msg.setSourceEntity(145U);
    msg.setDestination(52600U);
    msg.setDestinationEntity(107U);
    msg.ch01 = 0.7966799521032611;
    msg.ch02 = 0.9871809439442235;
    msg.ch03 = 0.7589265845791209;
    msg.ch04 = 0.529182192809207;
    msg.ch05 = 0.20686379746452654;
    msg.ch06 = 0.7188681856800976;
    msg.ch07 = 0.457165549815128;
    msg.ch08 = 0.012665528533453818;
    msg.ch09 = 0.32649602977447645;
    msg.ch10 = 0.8265755749976578;
    msg.ch11 = 0.3307967348841785;
    msg.ch12 = 0.9126243982752711;
    msg.ch13 = 0.3814828928172903;
    msg.ch14 = 0.5254649494513509;
    msg.ch15 = 0.828467678369472;
    msg.ch16 = 0.07463543189580746;

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
    msg.setTimeStamp(0.8079915668422006);
    msg.setSource(12160U);
    msg.setSourceEntity(197U);
    msg.setDestination(24131U);
    msg.setDestinationEntity(106U);
    msg.op = 35U;
    msg.lat = 0.20726690495553257;
    msg.lon = 0.8333815996824973;
    msg.height = 0.5045624681572316;
    msg.depth = 0.18236102514074026;
    msg.alt = 0.3985718167895582;

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
    msg.setTimeStamp(0.4899098427782408);
    msg.setSource(29474U);
    msg.setSourceEntity(39U);
    msg.setDestination(57227U);
    msg.setDestinationEntity(173U);
    msg.op = 131U;
    msg.lat = 0.6257095184473933;
    msg.lon = 0.9258219868497236;
    msg.height = 0.7397425133484928;
    msg.depth = 0.7847740557743639;
    msg.alt = 0.18300511501071393;

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
    msg.setTimeStamp(0.8457376176618523);
    msg.setSource(42419U);
    msg.setSourceEntity(69U);
    msg.setDestination(44967U);
    msg.setDestinationEntity(115U);
    msg.op = 82U;
    msg.lat = 0.19133934314141265;
    msg.lon = 0.8368014698849624;
    msg.height = 0.3507472318616265;
    msg.depth = 0.8935056208669518;
    msg.alt = 0.8799538280634855;

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
    msg.setTimeStamp(0.6370371945464854);
    msg.setSource(37813U);
    msg.setSourceEntity(108U);
    msg.setDestination(58235U);
    msg.setDestinationEntity(179U);
    msg.direction = 0.5484839899857893;
    msg.speed = 0.8875028566257744;
    msg.turbulence = 0.7542729632422477;

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
    msg.setTimeStamp(0.16415084472318775);
    msg.setSource(9444U);
    msg.setSourceEntity(150U);
    msg.setDestination(10588U);
    msg.setDestinationEntity(234U);
    msg.direction = 0.16609448290748785;
    msg.speed = 0.33006152107636255;
    msg.turbulence = 0.6895543362463227;

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
    msg.setTimeStamp(0.34490051116248066);
    msg.setSource(23601U);
    msg.setSourceEntity(150U);
    msg.setDestination(56986U);
    msg.setDestinationEntity(8U);
    msg.direction = 0.9748568137640796;
    msg.speed = 0.13204764324122187;
    msg.turbulence = 0.4267378362167581;

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
    msg.setTimeStamp(0.29088595210001555);
    msg.setSource(14862U);
    msg.setSourceEntity(74U);
    msg.setDestination(24665U);
    msg.setDestinationEntity(55U);
    msg.msg_type.assign("XYQWFIRURWXDODGMUHWSJQRJUCRFYPWVMKOBGMRKHTCRHORKCSLWSEAOOZGUNJTNRPIFOXDXMDSLSCPWAAFHSFUVVGDXEBVDVDLONBGMLPLHZZGWBLZXNNFSHNOVETHIIYXQWGA");
    msg.sensor_class.assign("RWYSCKPAUHFWMLZVWAMCTIHSMXSKXFGRHOQNDLLDBUQBIXFBFEOXTPSLLUTLDGYPBDPKFNIXFFDKJRZOBQUZKZATTRSOVQKYTKQNYHIMGUSJPSKBEAWENCXQISEDRTMPPOAPYMECOX");
    msg.mmsi.assign("JZJKFIJWDRZCWPAOQOJMSSLMMDVJKOFXEIBNXTLNEZNXRUWULPBFTGQBQAUVMDJPPNUATJGBLGNTNCBYMQDFVYGZREAGOMSANNHUFUHOUQUPKUBSRVYQEPKIXGOMQIOANMSW");
    msg.callsign.assign("EKJGSLWJBXLGFEKXXMHMDXFQICQDJJBNTPHVPJPAIAJKORGPSXVFDBBOBXCAWWIROYJCWBPCWSXWKZXREZCMWJHFZDVEGYNZFLODADGMIKGSOSNHCYSTGQZILCLUQNPXRRCQZVLVKAEDRMCUIUHTQYB");
    msg.name.assign("CBQEFREEHWXIDSIVCCHQXYHKEPBZAYWHYTEMPVCKRBLBDSUKBXBRPRTDQOBLWKYLIYWOOGXGTIIZVMSTKWTNYZAKFMAFUFGOKNMZVWQNLLASOVIOPTLVIEAWJRZVMWFGDQDLXJHGSLGJGPPUETLSJUVNIPPNGHQOYM");
    msg.nav_status = 229U;
    msg.type_and_cargo = 43U;
    msg.lat = 0.012634012381291915;
    msg.lon = 0.827406300891602;
    msg.course = 0.3580968696904433;
    msg.speed = 0.6126424390439676;
    msg.dist = 0.4401665569227263;
    msg.a = 0.855139437610917;
    msg.b = 0.13568755956829848;
    msg.c = 0.4864718605446917;
    msg.d = 0.24777472108459275;
    msg.draught = 0.34245493308868424;

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
    msg.setTimeStamp(0.710279394195744);
    msg.setSource(39857U);
    msg.setSourceEntity(240U);
    msg.setDestination(24334U);
    msg.setDestinationEntity(131U);
    msg.msg_type.assign("PFCKQZQTCSLKYQKNIHPZDQMPTTEGUJTAHWCWRRCSSHVQSOKHZKDVVPCWUSNXMMFTMIQCZ");
    msg.sensor_class.assign("QBGVKXHOMFXLYLRVBFUPUBNLNQSZEBMJFOSJZPESKPVVKBPXYQMZVSONCCUWCNXMQYLDSANBUPTYYATRAWRRJZODGWBKMXRQRSIMCIPMZTANGZLDXXJCUGYODZUJWUEEHDGQTDVWCICWBTORRFCRVTNUJ");
    msg.mmsi.assign("VLMTUVFLKKHCSQXFDZWQPXMFUAEATGOPLWDGVSMZBNYFCUNIMGQEUWLSCIXQAORMEDVHQXXLGDZTBHOZPKYTRIKYQNAFYJANNDSIBHXRHULJJVXOPLBZSEQWKBNWYAYASXKWJCJBSFNHVJLCFGNSGTAKPIMHGCWGQPXPHRZCRVIUDKDQIWLNWBSBNKFEHECOPJOHUYZVOIJCVPFUBTMZUIZGUJOWCRRMRTATED");
    msg.callsign.assign("QFGYXNJJAEQRETVEXHMEVSSAXPGTPWWULPCSFPZWAXKOZIQZIANSYQMGUWQKBJRQTYIEGVNFMAIHUWIJKXMTMRQVBOBUHOHWXELXDWGYNOILUKILGFOLCNSTZCTXHSYJDYNOHHRQBMYQAKPRIXHAKTPLDMFFPSKBDOEDFACWUSVZKVYLBQSNEPGJZJZCOHLFGCVBXNSKVAGTDJVBB");
    msg.name.assign("RJZOVUVYNSIHRTXYEIVQLLUAARMLYCNMUEORPPJKJCUDIBMIZGKMHCOPOWO");
    msg.nav_status = 128U;
    msg.type_and_cargo = 46U;
    msg.lat = 0.49110868257559015;
    msg.lon = 0.5788648282447868;
    msg.course = 0.9273054469602136;
    msg.speed = 0.43774212838026294;
    msg.dist = 0.3112710456921136;
    msg.a = 0.019419771827552612;
    msg.b = 0.3615819777991318;
    msg.c = 0.3816823985197313;
    msg.d = 0.6121827262690935;
    msg.draught = 0.6956733932931923;

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
    msg.setTimeStamp(0.023098289021082574);
    msg.setSource(11574U);
    msg.setSourceEntity(190U);
    msg.setDestination(43908U);
    msg.setDestinationEntity(68U);
    msg.msg_type.assign("HARORZDDTIILAQFFOLHXNCLLDXIXBCXTJMTSKVPPDFDKNZEZGSICSZKHQYJVDUNSKBWVLAEJDAOYAXXYKMCVPVSALSVDPCEAQAEUPPKQGATJQIMGZCQHHOYDMWYLPZFJZQFSNFRYZMCWYNZCBUWLTBTUHUWNYSEGAEGWQQPIWEVTGFUEMRZTREPOSOORWUVFRTGWQHHOBWOYKIRNJDXPLBUKHJHGVI");
    msg.sensor_class.assign("KCHXZOESGJTFDYSNEKNSZGZGFWOHRGIHXQBFQXDHFUVRRAZYLDQNQJSLLBMJESTTJGHBKCCDEJJXPQVLYYAOBQETPOUPOBSWHNRKJBLZACFQKCPBZWRZMOMFUIKVBOUSGVVVKLVUUYYZPLNXREPSKECDQILUPVGMUEBISAIXVXTDWHDQ");
    msg.mmsi.assign("KCESTCVWWDAHLPUKXSFWYGTEQG");
    msg.callsign.assign("UONRHSUOROGNVNYCQPDGLEQJGZECBVBEZHUXRKXCSAZGRDQIGUYYIMIOZSLVLAYOCGWJHWPJLFJEGATDOBXDYDMIAIMSQLBJYAYKZQHGVNRNVCBUVFMNQJJDRUMPGCRZAOZKEFEXJTFKWBIAUXHIFTTTKCOKKLQPEVZSUZZFNDPHTLPXYMABVNQFEGMKFDNVCWFSIYXBWTEXSWIDWRPHCBLYEWTJAWPDQLKUTXOMXRAPMCKNTPJBHHRWSFM");
    msg.name.assign("EZNPODHHKWARNELNKHJDPMVZDIMWLVIBEJCJQVUONWIAYPSZHQ");
    msg.nav_status = 123U;
    msg.type_and_cargo = 239U;
    msg.lat = 0.6727700866105597;
    msg.lon = 0.16293094429231003;
    msg.course = 0.2275996917461669;
    msg.speed = 0.7856409260062903;
    msg.dist = 0.5668501945354708;
    msg.a = 0.2103874633285645;
    msg.b = 0.9518135929566989;
    msg.c = 0.34858009051843064;
    msg.d = 0.06128128468393812;
    msg.draught = 0.6331953351093009;

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
    msg.setTimeStamp(0.04346705475583146);
    msg.setSource(31151U);
    msg.setSourceEntity(212U);
    msg.setDestination(44942U);
    msg.setDestinationEntity(174U);
    msg.depth_at_loc.assign("QMZTELWZXWDGTPCUOXJOCUGUBNQANGEKSPRYCSNVZXINFJFPKQDOHEHJKLHXSPXMJZFYGSIUZPYWVDLWLCAAAAWXXLDXBCTGSUAUJFYQZVFRPMBYDLNATMZMDIROVXSVLIQUFRPFRITMXPHTYWKBEHLZIKJVEIVSYDCMNJKCTOELOFYVQCPFKEWVMAWHZAYTDHKQRORBPEKWRFNKTIGSUDYBQNBDAHNQGNHRGUMOOESCLBTIUSZMOJ");
    msg.danger.assign("KSTESMDLUPHTHTOJDXIWKZNOLXFIPAALGYWPBTDUGWLWWLGWQQIFEMQBRFEKZZQSXLYBZQAJNTDHTMXEMPOBNVSYOCVAKAUFIRCP");

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
    msg.setTimeStamp(0.9651573875035664);
    msg.setSource(63795U);
    msg.setSourceEntity(144U);
    msg.setDestination(6681U);
    msg.setDestinationEntity(121U);
    msg.depth_at_loc.assign("PZVWRQPFMOLDLYLXKUQVAMGTLVMBADTIUYAYYFFGACUK");
    msg.danger.assign("VTYXCSHBLHYPLNFHTNOOKUYRVVUIXLUPVACLZIXRHBQCQEQRCZQWRPJWSQZYYMUAMUMGRSVDXWHWEBTSISZ");

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
    msg.setTimeStamp(0.680836474927177);
    msg.setSource(11471U);
    msg.setSourceEntity(157U);
    msg.setDestination(7728U);
    msg.setDestinationEntity(207U);
    msg.depth_at_loc.assign("IQQCYRZWFCXUJARFRZKEEPLQTLBEWOLVAZJKUDAYAWNYKFOGFVJKOVTODUKSMHEGRBSDPRGLQAWNLICHNDHYMHLAGQLPSRCUYTXDVZJGMPWNQJZECPLEMVXXEDOIOYMXUTXMTGAADTJYKRJRKDMBFQBNKROMVHINZQBCFVGLLNYZOMNSF");
    msg.danger.assign("MKHDSQODWOWYYRZCLWKGDJIZGXWTISAHMSRWHNEXTDUHUOXPYKSPAQNVPHKGQWAGZZJZFNASFSGJMBOVRKWDFVOLDFSIJTNUXRBONPGDBIBZLNEBPJNWCQLWQHECGFBPVJDR");

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
    msg.setTimeStamp(0.18778356879673297);
    msg.setSource(61633U);
    msg.setSourceEntity(36U);
    msg.setDestination(36194U);
    msg.setDestinationEntity(67U);
    msg.time = 0.38769058744236573;
    msg.x = 0.2292686122225126;
    msg.y = 0.26902689813641767;
    msg.z = 0.7646801409257326;

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
    msg.setTimeStamp(0.10167006145297741);
    msg.setSource(11226U);
    msg.setSourceEntity(22U);
    msg.setDestination(12511U);
    msg.setDestinationEntity(66U);
    msg.time = 0.44777492086202186;
    msg.x = 0.5536045368413055;
    msg.y = 0.0990342959540026;
    msg.z = 0.23719160236165104;

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
    msg.setTimeStamp(0.008822236371212822);
    msg.setSource(31237U);
    msg.setSourceEntity(35U);
    msg.setDestination(35282U);
    msg.setDestinationEntity(5U);
    msg.time = 0.654551272569981;
    msg.x = 0.2423472308156407;
    msg.y = 0.6749203775982006;
    msg.z = 0.634810610061365;

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
    msg.setTimeStamp(0.3975775483496339);
    msg.setSource(49181U);
    msg.setSourceEntity(169U);
    msg.setDestination(13521U);
    msg.setDestinationEntity(249U);
    msg.nbeams = 140U;
    msg.ncells = 105U;
    msg.coord_sys = 48U;

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
    msg.setTimeStamp(0.6617420173783177);
    msg.setSource(62067U);
    msg.setSourceEntity(215U);
    msg.setDestination(31173U);
    msg.setDestinationEntity(48U);
    msg.nbeams = 108U;
    msg.ncells = 178U;
    msg.coord_sys = 8U;

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
    msg.setTimeStamp(0.6316164508904648);
    msg.setSource(51306U);
    msg.setSourceEntity(239U);
    msg.setDestination(7128U);
    msg.setDestinationEntity(96U);
    msg.nbeams = 120U;
    msg.ncells = 209U;
    msg.coord_sys = 118U;

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
    msg.setTimeStamp(0.2750132720802275);
    msg.setSource(3557U);
    msg.setSourceEntity(188U);
    msg.setDestination(28829U);
    msg.setDestinationEntity(163U);
    msg.cell_position = 0.4364453205807588;

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
    msg.setTimeStamp(0.7357300048377011);
    msg.setSource(43840U);
    msg.setSourceEntity(247U);
    msg.setDestination(6391U);
    msg.setDestinationEntity(237U);
    msg.cell_position = 0.1141800255174058;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.01943867244182018;
    tmp_msg_0.amp = 0.768630876610139;
    tmp_msg_0.cor = 76;
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
    msg.setTimeStamp(0.36733616781464984);
    msg.setSource(52723U);
    msg.setSourceEntity(172U);
    msg.setDestination(16799U);
    msg.setDestinationEntity(75U);
    msg.cell_position = 0.4028929983541264;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.1546583304907062;
    tmp_msg_0.amp = 0.3613600094047421;
    tmp_msg_0.cor = -104;
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
    msg.setTimeStamp(0.2866286902780578);
    msg.setSource(44919U);
    msg.setSourceEntity(189U);
    msg.setDestination(60518U);
    msg.setDestinationEntity(159U);
    msg.vel = 0.6298887737689929;
    msg.amp = 0.09748467637369096;
    msg.cor = -70;

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
    msg.setTimeStamp(0.11425890892604595);
    msg.setSource(23641U);
    msg.setSourceEntity(192U);
    msg.setDestination(26475U);
    msg.setDestinationEntity(209U);
    msg.vel = 0.3454859778107914;
    msg.amp = 0.9294936326629183;
    msg.cor = -51;

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
    msg.setTimeStamp(0.004181947442963296);
    msg.setSource(3126U);
    msg.setSourceEntity(139U);
    msg.setDestination(24273U);
    msg.setDestinationEntity(92U);
    msg.vel = 0.264582849645265;
    msg.amp = 0.6098788208350037;
    msg.cor = -35;

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
    msg.setTimeStamp(0.8307814904683384);
    msg.setSource(51162U);
    msg.setSourceEntity(91U);
    msg.setDestination(174U);
    msg.setDestinationEntity(196U);
    msg.value = 0.9530294693101564;

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
    msg.setTimeStamp(0.6981724986719846);
    msg.setSource(61979U);
    msg.setSourceEntity(6U);
    msg.setDestination(60923U);
    msg.setDestinationEntity(57U);
    msg.value = 0.4449911249897722;

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
    msg.setTimeStamp(0.6346027094413835);
    msg.setSource(32234U);
    msg.setSourceEntity(232U);
    msg.setDestination(40338U);
    msg.setDestinationEntity(187U);
    msg.value = 0.33789156281323296;

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
    msg.setTimeStamp(0.7391711335271282);
    msg.setSource(60594U);
    msg.setSourceEntity(65U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(126U);
    msg.name.assign("QROTQQKOAMVBGHXCEUQGATPIZBPYSLWFNEBRIKBNUDPCHYMSKQOJZXUVMWWPDECJBKGLFMUM");
    msg.value = 246U;

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
    msg.setTimeStamp(0.11081271425165418);
    msg.setSource(498U);
    msg.setSourceEntity(146U);
    msg.setDestination(14003U);
    msg.setDestinationEntity(22U);
    msg.name.assign("TOVJZLNLPRQWOHGSYJQFYQVRDUWSCTSOUAJGPIKSCSSLMRNNYZMHIBERBJNEEMSJYMWETAHOHQITNKNVVLKXQKXDEBOEFBXXKYRTMPFURFAHWHDWCRAOERHDPTJFFMNDSQWLZCLIIWTLGMSAPIBGUQNKYBGTHGTZEVQPAUYAIIZXKXCPUHXOVVIWXQBUFHODJSCUPDMEYFDU");
    msg.value = 56U;

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
    msg.setTimeStamp(0.5167870083662789);
    msg.setSource(8377U);
    msg.setSourceEntity(70U);
    msg.setDestination(3493U);
    msg.setDestinationEntity(191U);
    msg.name.assign("KGRXOPBMQAJUOKOWZMHIJDU");
    msg.value = 44U;

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
    msg.setTimeStamp(0.9950592050713132);
    msg.setSource(9994U);
    msg.setSourceEntity(135U);
    msg.setDestination(2159U);
    msg.setDestinationEntity(223U);
    msg.name.assign("RVCLHOKRKPFDGJYGJPQLFKRRMAMUOLOCXXJLYPSYEBMUKBNHBC");

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
    msg.setTimeStamp(0.13259514682638618);
    msg.setSource(62080U);
    msg.setSourceEntity(234U);
    msg.setDestination(64197U);
    msg.setDestinationEntity(243U);
    msg.name.assign("YQVDCUBHQXZVVIVWQCNDFKRUFVCATXIAMSXVIKMLUJATOKLFRNESPUMNEBIPZSHLCPWNOGKLHYMOEVTOUQLBHPRLBJJOXUBDFGXLTQLSJLSHJJHXWSDVXZZUUQRGWFYEJTDIXGTCCPRTGRNEJBZOIWKWYMOJGTPQVZBBRPCZEKFWQGUKIAWNYYAMOOBDDWGEMZHXFYFCRIWBHFXCTUISCNGHPKENMHARRMQQYLNJZMADDPEEOASTZYA");

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
    msg.setTimeStamp(0.8622104668142022);
    msg.setSource(6832U);
    msg.setSourceEntity(64U);
    msg.setDestination(36145U);
    msg.setDestinationEntity(117U);
    msg.name.assign("YEXKAGUULTQKWGKIGIDGAMBZVVAEQQUTJHLPNFMFSEVLGEATBMCNYRNDKFYFMWQCJDVHBAUTCBURWWFMBIWPMLTUNIHUSFGZRSUXKTFIOCOKJRYHAXNTDVDVUBXEVIONCQPHSBOZKIGXDTWAYRTMGLGOISELMWPRJNLQRBCSPEFXPOECLYHKWXXOHQLCNYHQNSJBNBRZAEPOSRYQVMHDSOXZCDYZPWDJJXIGDC");

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
    msg.setTimeStamp(0.07689863794122798);
    msg.setSource(29698U);
    msg.setSourceEntity(224U);
    msg.setDestination(59852U);
    msg.setDestinationEntity(171U);
    msg.name.assign("SAHJXCKUYZZJNKGNNGHMQFNKSYLUMOJDZAWDKEIUQBELWQDGYLJABKSHVKDJHHXZNZGKFQEGOGLXIMOITIAOX");
    msg.value = 18U;

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
    msg.setTimeStamp(0.4256934119448955);
    msg.setSource(25159U);
    msg.setSourceEntity(149U);
    msg.setDestination(7992U);
    msg.setDestinationEntity(104U);
    msg.name.assign("HPXAVJMSFSWHFILWBLYMGPLFQAEWTNJKUHVCXECFXCHKAEONEVJDZAKSTNUWDGMAUSBTIKMPRSFPTHPAUGEGOLYCNFEBYRYQLRDYETJHERZYCJNXDZBMYRXDOBVCVILNUKRIPOXZUMY");
    msg.value = 196U;

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
    msg.setTimeStamp(0.9360985155201941);
    msg.setSource(48380U);
    msg.setSourceEntity(19U);
    msg.setDestination(9257U);
    msg.setDestinationEntity(12U);
    msg.name.assign("EYIJPVXWCAXXGRSWQJNTQVNSWPTCGFRPSBDY");
    msg.value = 52U;

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
    msg.setTimeStamp(0.8716395493097489);
    msg.setSource(2180U);
    msg.setSourceEntity(207U);
    msg.setDestination(39843U);
    msg.setDestinationEntity(234U);
    msg.value = 0.9228263928145365;

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
    msg.setTimeStamp(0.2726619596157579);
    msg.setSource(31612U);
    msg.setSourceEntity(53U);
    msg.setDestination(6139U);
    msg.setDestinationEntity(114U);
    msg.value = 0.5619791026846633;

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
    msg.setTimeStamp(0.9564431830436956);
    msg.setSource(7000U);
    msg.setSourceEntity(95U);
    msg.setDestination(53859U);
    msg.setDestinationEntity(232U);
    msg.value = 0.3732738759272456;

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
    msg.setTimeStamp(0.8769337956828733);
    msg.setSource(36848U);
    msg.setSourceEntity(26U);
    msg.setDestination(33476U);
    msg.setDestinationEntity(32U);
    msg.value = 0.7183975585468436;

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
    msg.setTimeStamp(0.1704022034832341);
    msg.setSource(22284U);
    msg.setSourceEntity(196U);
    msg.setDestination(28548U);
    msg.setDestinationEntity(198U);
    msg.value = 0.12678554023506106;

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
    msg.setTimeStamp(0.6673673586393128);
    msg.setSource(50672U);
    msg.setSourceEntity(98U);
    msg.setDestination(17233U);
    msg.setDestinationEntity(234U);
    msg.value = 0.12938914947814018;

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
    msg.setTimeStamp(0.514874591692164);
    msg.setSource(17211U);
    msg.setSourceEntity(20U);
    msg.setDestination(10042U);
    msg.setDestinationEntity(186U);
    msg.value = 0.09328601824860128;

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
    msg.setTimeStamp(0.6636258589971701);
    msg.setSource(32254U);
    msg.setSourceEntity(147U);
    msg.setDestination(3850U);
    msg.setDestinationEntity(39U);
    msg.value = 0.7114359055763587;

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
    msg.setTimeStamp(0.5213381289014549);
    msg.setSource(11695U);
    msg.setSourceEntity(35U);
    msg.setDestination(36684U);
    msg.setDestinationEntity(42U);
    msg.value = 0.28239358932513947;

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
    msg.setTimeStamp(0.28657393532726805);
    msg.setSource(59513U);
    msg.setSourceEntity(125U);
    msg.setDestination(19172U);
    msg.setDestinationEntity(57U);
    msg.restriction = 217U;
    msg.reason.assign("UZPLLNHMJMUOTWHIOJPJUAMZYINASRVEUEOONVRGPQYJANKVKNFNSVEQQRHTTSKNWYFJSXWLKXIBATRCRTQCYFWGDRQZKEKBSZZFZCQKDLWRICQXMQFALIUQZMCNOW");

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
    msg.setTimeStamp(0.898968645924014);
    msg.setSource(51977U);
    msg.setSourceEntity(44U);
    msg.setDestination(24491U);
    msg.setDestinationEntity(197U);
    msg.restriction = 116U;
    msg.reason.assign("ABVNYBPRYINTODDWP");

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
    msg.setTimeStamp(0.8874042848813675);
    msg.setSource(36340U);
    msg.setSourceEntity(3U);
    msg.setDestination(4009U);
    msg.setDestinationEntity(244U);
    msg.restriction = 139U;
    msg.reason.assign("ECHKLNUMDJXXIJNMUHPTERVGMEITBUAOPJNYAPWJTVCSNQPKZFYFEIVBHROASYHWKPDEIAYSRZMRUZSAZTCGKOQQLDNINRBMXVHRDNAKIBCCHFGDH");

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
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.6743171561853328);
    msg.setSource(62148U);
    msg.setSourceEntity(156U);
    msg.setDestination(37632U);
    msg.setDestinationEntity(165U);
    msg.op = 7U;
    msg.version.assign("RLGIBAJMANGVRBKHAAVFOKRMBWVMQAPOQPAFGKGSBMUUUSQLEXKDBBYHGOLXMUNYHLVCTUXXGNTAJQFHDYFLJIYYAWRKHEZDQIZNOKAETVSCWZKTDJNCAEGCETGOSQUWZPDYNNIZTXDOVSOWQFSKUPRSKVPTFUWILORJRCTTSEYCJLDKOJRFCBDLXZPIHVENXPRFIJSROHZMGTGWIY");
    msg.description.assign("BBWRFRDFBZOEHAHGWHVBDYTPUNZLYUOAFEUYFBRFHTI");

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
    msg.setTimeStamp(0.08072160628551772);
    msg.setSource(60249U);
    msg.setSourceEntity(243U);
    msg.setDestination(52693U);
    msg.setDestinationEntity(252U);
    msg.op = 163U;
    msg.version.assign("EYVIFMIBFSPXTNMVCGXPMRQEWKMVBWCKQDUFDZQOVGXSJYYKAYFRUTRHBNKYVSLJDUEAIIQHHJCSZPUOLXWNDJFSGAQRZIBYCTZVPHSFRXHFUQZWTTNXUEWUNRENGXESEOOZYOEZOAWLSVAPHFFBQQWYJGARCMLCVLWLPWHDEOMUBHDNKLMAXBVHKKJAODIRBCBDTKHGOQLFSIZI");
    msg.description.assign("APSJSSDOCMKCZEQLVRSNEJXLEPZEGZIPZYIOZWZRXTQWQKPDGMPRWQRLKPBDAKAQOOCEIKLHHBBSVPGLPVPUJKAYGHLFILDFLTVBYHFTYVFDWCODKTGXMCBKNYFHBJWF");

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
    msg.setTimeStamp(0.22651455586989067);
    msg.setSource(25945U);
    msg.setSourceEntity(250U);
    msg.setDestination(56748U);
    msg.setDestinationEntity(173U);
    msg.op = 200U;
    msg.version.assign("KYRPVPHDPGAFQVITRNMGZORQDRPMFGYGKANHFDGELGLCPWUNWNSMKLUGORCAUXZBCDITKWPVFVLQXXMLCKXVIXQJHLVOEFQXMHSZMYESJCBMBWTHFEEWLCZWAUVNTHNXTABTOUUXBZWTHNIHJVMIYRJAYEHASYOLPQPODJTTDLOYOBSIIZDCMZGIRRJYGFSAZFSEXDGLQBJETKXAOKRVSBDDUQREKQBCWSFMQWJUIIBNVKFJNSWZO");
    msg.description.assign("YBWPKMUFMDMJGVZYKTCIULMHTOAOGEZXARMSBGIIPQPTXDFVJNIWCJXEWGFXQHUNYGGASNJJAZXEFPBDQCWQTNTSUXSZALURPLWCJPKVLMLKRGMTHAHIESLKUWCFCEDDANMZDEIROADBYZNZASQASUCJPYWXOYSJGQFWKBHYFZBEDNEOSEPIBZVR");

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

  return test.getReturnValue();
}
