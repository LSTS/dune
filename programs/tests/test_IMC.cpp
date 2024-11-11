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
// IMC XML MD5: 71eb2792b561a939f1167a53fe7c5298                            *
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
    msg.setTimeStamp(0.9026972256632413);
    msg.setSource(38U);
    msg.setSourceEntity(71U);
    msg.setDestination(22409U);
    msg.setDestinationEntity(117U);
    msg.state = 104U;
    msg.flags = 141U;
    msg.description.assign("ACTJDEHMESZNXCPHCISNYQFTSGGJDGCSBMDAXKUIQVJEBGTURKIZRWQKADXRAQFZIEXLBVDWOJESHVMLZJHHUJJCXSFXHMNRWTXPMVKPRMERENUYBPRFFBHQASMKEZVOYZYZBHZLMIOQERCKQXKOGIGPTBTPOCLVLVPRZPT");

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
    msg.setTimeStamp(0.8154164931484823);
    msg.setSource(17738U);
    msg.setSourceEntity(151U);
    msg.setDestination(8708U);
    msg.setDestinationEntity(161U);
    msg.state = 131U;
    msg.flags = 189U;
    msg.description.assign("HIDLUDXHVNJDUIAOUSRPLRQNGXZHF");

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
    msg.setTimeStamp(0.9960483632585748);
    msg.setSource(20242U);
    msg.setSourceEntity(147U);
    msg.setDestination(32152U);
    msg.setDestinationEntity(5U);
    msg.state = 131U;
    msg.flags = 184U;
    msg.description.assign("RHUJWVUABBVCKPTGICMPROJDNHSFZZKJIYQIOILCSLHXVHZSXEQDPDJNNWODR");

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
    msg.setTimeStamp(0.7902223622809804);
    msg.setSource(7218U);
    msg.setSourceEntity(96U);
    msg.setDestination(4677U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.8472244675128572);
    msg.setSource(28248U);
    msg.setSourceEntity(229U);
    msg.setDestination(53487U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.791338102721434);
    msg.setSource(57582U);
    msg.setSourceEntity(73U);
    msg.setDestination(30811U);
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
    msg.setTimeStamp(0.13210767079472285);
    msg.setSource(54423U);
    msg.setSourceEntity(150U);
    msg.setDestination(945U);
    msg.setDestinationEntity(13U);
    msg.id = 225U;
    msg.label.assign("KAOKDFQZFJNPLYUOVFKZMWHSCAMWRAWZVEDVRIQQKWAKACOLJNAMWCLGLYZUIF");
    msg.component.assign("ETJTRPLGYSUHJV");
    msg.act_time = 19046U;
    msg.deact_time = 9759U;

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
    msg.setTimeStamp(0.461103778910977);
    msg.setSource(29153U);
    msg.setSourceEntity(222U);
    msg.setDestination(58105U);
    msg.setDestinationEntity(173U);
    msg.id = 225U;
    msg.label.assign("ZTCWFVKVYUMFYKCQDMXARZHOLRTFKSKHAOGNGIXCDSOCVOJDQDBPQJUEVEQWJUFWPEGJGBRNRNNNIPHBAEDPXRVXTYHZGMSJPOZVSSEZXRIQMQQGNABJTORLBLCMBCWLUAONHIEMJKAYFABEVXZIFVIXPCYLNRYHMDKUDWWYXZCPYCHSLOQLFTJBNPPGJWIIQWKJWZSVKTELUHIFODYGBFTIERTMFYLMDDGKKUZZG");
    msg.component.assign("YBPXVYDLNFDFKXZQAUNBZQNHFGVENQUNAJBNMKOMTJRDHKWEGFGXUZAMOLBRHIUBFORDNJTQJZIYGMFPVLRZXLPWJPTOYSVQVMHRZUCAEMPHIWUIGHZACRTCYPYSS");
    msg.act_time = 16542U;
    msg.deact_time = 63959U;

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
    msg.setTimeStamp(0.2613910617769486);
    msg.setSource(7036U);
    msg.setSourceEntity(172U);
    msg.setDestination(62326U);
    msg.setDestinationEntity(218U);
    msg.id = 95U;
    msg.label.assign("TUXZKTWFGTTPHQFYQIUTXNZJHGOBHXDYVRPJBDSYIUPXSMMNBLQAQCHFPKWMRREGUGVDQRTRILUOKMZSEBDCUGAZEBVSSPNLFDVXKAOJGWEQNCPXIVSPAPVQKEEHGJSLFDUMJLAOVEUOIDCYBUZJNTOVSMXYALTCJQOPYKXRTFLNQLFCEJCRZHKYYWGWXQGAANMZNLSZDRNAPANHMVWIDITYWCUWYJ");
    msg.component.assign("ZGRSNQIEPDDZXNDYWXRJQHZFGEIOSYUXOKFPFNUUBFVECVXQYCUBMNCMEC");
    msg.act_time = 43973U;
    msg.deact_time = 31774U;

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
    msg.setTimeStamp(0.20839347600351632);
    msg.setSource(52022U);
    msg.setSourceEntity(202U);
    msg.setDestination(20401U);
    msg.setDestinationEntity(207U);
    msg.id = 138U;

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
    msg.setTimeStamp(0.529792732628514);
    msg.setSource(27850U);
    msg.setSourceEntity(119U);
    msg.setDestination(47068U);
    msg.setDestinationEntity(194U);
    msg.id = 69U;

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
    msg.setTimeStamp(0.30431477830678255);
    msg.setSource(17647U);
    msg.setSourceEntity(216U);
    msg.setDestination(49538U);
    msg.setDestinationEntity(30U);
    msg.id = 130U;

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
    msg.setTimeStamp(0.05056168280919493);
    msg.setSource(32887U);
    msg.setSourceEntity(221U);
    msg.setDestination(12556U);
    msg.setDestinationEntity(236U);
    msg.op = 19U;
    msg.list.assign("JFXVEWLUOLXOANYYKQCUTRIINNCHDFPCLVHHEFSRTLPUOWLFXZBJJWKHQGZDFKQBUAWMZGH");

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
    msg.setTimeStamp(0.9956954153360366);
    msg.setSource(42541U);
    msg.setSourceEntity(26U);
    msg.setDestination(817U);
    msg.setDestinationEntity(74U);
    msg.op = 254U;
    msg.list.assign("XIAHQVFIZSAQECAJYPGUMNGKDYPTSJADVTBRHZDRHKGJUPBEVFIVVPWYCXCVRSLXYGAJYEOTCGZTEHMKMIECDKRWHKKJBLDBDUPNIMKSLMERKYUTNCUZDQIXWIN");

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
    msg.setTimeStamp(0.9163592757057314);
    msg.setSource(63786U);
    msg.setSourceEntity(80U);
    msg.setDestination(43826U);
    msg.setDestinationEntity(104U);
    msg.op = 112U;
    msg.list.assign("KFANOWTUQTDAERUZXKJDPLPCRRTDJLKAHGBP");

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
    msg.setTimeStamp(0.6601319731646027);
    msg.setSource(30761U);
    msg.setSourceEntity(182U);
    msg.setDestination(6344U);
    msg.setDestinationEntity(43U);
    msg.value = 178U;

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
    msg.setTimeStamp(0.9302348187729883);
    msg.setSource(54231U);
    msg.setSourceEntity(69U);
    msg.setDestination(63222U);
    msg.setDestinationEntity(87U);
    msg.value = 210U;

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
    msg.setTimeStamp(0.14920662180818411);
    msg.setSource(12453U);
    msg.setSourceEntity(216U);
    msg.setDestination(19042U);
    msg.setDestinationEntity(147U);
    msg.value = 160U;

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
    msg.setTimeStamp(0.706891493708834);
    msg.setSource(15423U);
    msg.setSourceEntity(101U);
    msg.setDestination(57579U);
    msg.setDestinationEntity(125U);
    msg.consumer.assign("JSTQFROUILHXKUREBSKZLTJADISXGKMYEOZRBIZUGNDYMCKVDAPTURGWBLJODITHAYGLGVXPZRWOUDIDHHSQALRTAHOQSOUFN");
    msg.message_id = 35054U;

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
    msg.setTimeStamp(0.8956102146299723);
    msg.setSource(3568U);
    msg.setSourceEntity(111U);
    msg.setDestination(41937U);
    msg.setDestinationEntity(95U);
    msg.consumer.assign("SNERFRWEBEDFWAQLCCKVDRGQVAXIBDLLWBTSAYRXWTVFJMQIZTERPIVTMEMODVPTZJXNJAIJIXJZTPAHHVVISCTKNICJUUDGFNHFVDAWGOSNRGHYQUYRNZWWLULTPHMYK");
    msg.message_id = 5185U;

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
    msg.setTimeStamp(0.6533267861130655);
    msg.setSource(11785U);
    msg.setSourceEntity(175U);
    msg.setDestination(53440U);
    msg.setDestinationEntity(217U);
    msg.consumer.assign("SDWXVLPMDTWENZNRKZLWOAXSEDPVQFIMNVUBBYMSYZDLCHYTKGJRSFCZAXSWURXCCXNUMVNGIWOOBRWPEMFUIPVOQJJHCKVDESLYBQTVHRTAJDBHUYPJGSASZCZLEFNVZUGGUTFKWXKDINMFAKDUBRAFDXJPXAWLA");
    msg.message_id = 28662U;

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
    msg.setTimeStamp(0.44673526880561587);
    msg.setSource(44111U);
    msg.setSourceEntity(50U);
    msg.setDestination(58992U);
    msg.setDestinationEntity(3U);
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
    msg.setTimeStamp(0.7324587365353679);
    msg.setSource(8933U);
    msg.setSourceEntity(65U);
    msg.setDestination(28814U);
    msg.setDestinationEntity(87U);
    msg.type = 209U;

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
    msg.setTimeStamp(0.4670059742397942);
    msg.setSource(31846U);
    msg.setSourceEntity(70U);
    msg.setDestination(56561U);
    msg.setDestinationEntity(165U);
    msg.type = 97U;

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
    msg.setTimeStamp(0.5218618039228793);
    msg.setSource(24161U);
    msg.setSourceEntity(196U);
    msg.setDestination(17245U);
    msg.setDestinationEntity(52U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.5014324485755993);
    msg.setSource(60776U);
    msg.setSourceEntity(221U);
    msg.setDestination(59114U);
    msg.setDestinationEntity(235U);
    msg.op = 61U;

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
    msg.setTimeStamp(0.5673391316083849);
    msg.setSource(31842U);
    msg.setSourceEntity(104U);
    msg.setDestination(16536U);
    msg.setDestinationEntity(27U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.9835017238109866);
    msg.setSource(6639U);
    msg.setSourceEntity(186U);
    msg.setDestination(37220U);
    msg.setDestinationEntity(194U);
    msg.total_steps = 191U;
    msg.step_number = 184U;
    msg.step.assign("ABTZYOBPRCWZOJWHKCXNLMUIQUDIJKECUKALWPCMNBRZBHTUIZKXDIFRAEIDRTZARCEAFQHIFYZPTRTOOAXBFVOPJLXSWSIBYNWAASWJGGNPHSTNCINHVOUXJRXKGUYVJJNCOUFAGTVGLEQRBXK");
    msg.flags = 186U;

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
    msg.setTimeStamp(0.6161972159639084);
    msg.setSource(23177U);
    msg.setSourceEntity(51U);
    msg.setDestination(393U);
    msg.setDestinationEntity(252U);
    msg.total_steps = 171U;
    msg.step_number = 34U;
    msg.step.assign("ETKUQAHRREXVXODPDSLFBMVJEXFVQYMZBYCPTZJYSPQWLEIOOOWBIKOLZWHIRYKXEAODUTKAGZCTIXLWPQTABWMXSSVUHURWPAMGMYMTVJEXKAJFLGKJRLBTSHGZCNFPCDUQGVSZWPDVVFNLNZERHYGJTDGISOIMCKEWNUGHXYHIOHCRLPNFZ");
    msg.flags = 30U;

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
    msg.setTimeStamp(0.263364107275215);
    msg.setSource(31405U);
    msg.setSourceEntity(242U);
    msg.setDestination(61379U);
    msg.setDestinationEntity(104U);
    msg.total_steps = 53U;
    msg.step_number = 26U;
    msg.step.assign("ERWBCMQZSHNJRVTESUHRDTORSJXVAAMSQLAUKFOONGTNWVTCOJFFYHLDBARRDIKUYVNOKNFKHHQIZNXLBOQMMUTEWQIKJJSMQYVPMVMHGAPUYNBEQGDDWHPBAYCLQFOVLFGGSXJKBSVEILINHIMWDAQPAWJRLGSZTUHWBYFCZOZIJUPWCURMGCPGWZMJVANUYCKYTELDLQCPOPEFIXGKRXKZZHFSSZXVTFPYCEDRBXPOCXBDGYUEJLWTX");
    msg.flags = 82U;

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
    msg.setTimeStamp(0.7383932141303724);
    msg.setSource(48573U);
    msg.setSourceEntity(158U);
    msg.setDestination(53227U);
    msg.setDestinationEntity(226U);
    msg.state = 53U;
    msg.error.assign("AEWICSEJCZHTMGQIAYCYOYXAJUGJIZZSBRLGXMMFVFXEZYNMSCPLAYHDZPVBOYFZXRXVNMWQBFQWJDNADKRQ");

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
    msg.setTimeStamp(0.7324251221270842);
    msg.setSource(44869U);
    msg.setSourceEntity(198U);
    msg.setDestination(22714U);
    msg.setDestinationEntity(219U);
    msg.state = 11U;
    msg.error.assign("ABEKCFVXQFPSUUZDPIWZKRAZFTIKCMROILXJLXBQMWYLEOYLDUXGQBCAWREJTHHKPWOGCJGHLUGHBSMGWEIGDGAMTEPHKZANRFUOYXBARXNPUINJCDHHDSCYQNDJBMNUOAOIAVBDOKYWDZCFGBLWZRZRQCEEDDIFNPXISVPNMTTVJBSOYTSRKIPWQYOHERVQUJXYFLLFVUTZNELJAMJVCEPXMPVSMIYR");

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
    msg.setTimeStamp(0.08100461321523778);
    msg.setSource(47277U);
    msg.setSourceEntity(174U);
    msg.setDestination(24011U);
    msg.setDestinationEntity(86U);
    msg.state = 19U;
    msg.error.assign("BQJIFUOHPSMTEPKCXMTISVBSZNDVZOIGXZABTHFUEZ");

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
    msg.setTimeStamp(0.40605976373828423);
    msg.setSource(10020U);
    msg.setSourceEntity(68U);
    msg.setDestination(16342U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.7638531209742976);
    msg.setSource(14205U);
    msg.setSourceEntity(190U);
    msg.setDestination(27731U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.057737095685588935);
    msg.setSource(23884U);
    msg.setSourceEntity(137U);
    msg.setDestination(43193U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.43988458441884226);
    msg.setSource(50826U);
    msg.setSourceEntity(250U);
    msg.setDestination(54153U);
    msg.setDestinationEntity(208U);
    msg.op = 138U;
    msg.speed_min = 0.5946752559194364;
    msg.speed_max = 0.4822298972556578;
    msg.long_accel = 0.0013398071624740604;
    msg.alt_max_msl = 0.7498151949319113;
    msg.dive_fraction_max = 0.9915312511445541;
    msg.climb_fraction_max = 0.2897208676851082;
    msg.bank_max = 0.5358620623537127;
    msg.p_max = 0.5039506473568027;
    msg.pitch_min = 0.37917027337715825;
    msg.pitch_max = 0.6386375110539695;
    msg.q_max = 0.49456970842450587;
    msg.g_min = 0.39822683231928246;
    msg.g_max = 0.8823214459117514;
    msg.g_lat_max = 0.7657017309726735;
    msg.rpm_min = 0.1880019963037769;
    msg.rpm_max = 0.21538617093243517;
    msg.rpm_rate_max = 0.19920125697616264;

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
    msg.setTimeStamp(0.30130402281886093);
    msg.setSource(10722U);
    msg.setSourceEntity(155U);
    msg.setDestination(47068U);
    msg.setDestinationEntity(114U);
    msg.op = 235U;
    msg.speed_min = 0.5325439285418597;
    msg.speed_max = 0.18029193239760277;
    msg.long_accel = 0.5336664082479087;
    msg.alt_max_msl = 0.36543580838887935;
    msg.dive_fraction_max = 0.6769460082088091;
    msg.climb_fraction_max = 0.7380998332118598;
    msg.bank_max = 0.9777293463062486;
    msg.p_max = 0.6708112488214035;
    msg.pitch_min = 0.23496850848629847;
    msg.pitch_max = 0.5311290355158742;
    msg.q_max = 0.15695795215791064;
    msg.g_min = 0.330023126258719;
    msg.g_max = 0.14351572389207834;
    msg.g_lat_max = 0.5130208358910437;
    msg.rpm_min = 0.42401464244551457;
    msg.rpm_max = 0.1126401879486062;
    msg.rpm_rate_max = 0.5346480720856018;

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
    msg.setTimeStamp(0.5206887492756209);
    msg.setSource(63692U);
    msg.setSourceEntity(25U);
    msg.setDestination(23808U);
    msg.setDestinationEntity(224U);
    msg.op = 97U;
    msg.speed_min = 0.9239684045500535;
    msg.speed_max = 0.6161397549171237;
    msg.long_accel = 0.8910539490320144;
    msg.alt_max_msl = 0.581222270065998;
    msg.dive_fraction_max = 0.8020560226932217;
    msg.climb_fraction_max = 0.1929708094427781;
    msg.bank_max = 0.6311804615855982;
    msg.p_max = 0.4026186954054768;
    msg.pitch_min = 0.2940513104001249;
    msg.pitch_max = 0.3864001914661158;
    msg.q_max = 0.786982416751719;
    msg.g_min = 0.05969238069193561;
    msg.g_max = 0.29526381705935156;
    msg.g_lat_max = 0.40568420091911683;
    msg.rpm_min = 0.5551230371067758;
    msg.rpm_max = 0.1886891855200159;
    msg.rpm_rate_max = 0.7322939161965115;

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
    msg.setTimeStamp(0.10811699060201929);
    msg.setSource(28739U);
    msg.setSourceEntity(135U);
    msg.setDestination(4224U);
    msg.setDestinationEntity(64U);
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MYDWTJMAFJHBVZKCFKGRXEJQJHQMWCIDUKMJEQKGQAWQCTVOHGXOPPURNFXUQUPOMYSXLTDFIWXYRNEKBGFAEQIAPHSTLSNTACKUZERUPOMSEZSZRGPERTIYNDMOVDISQGBCBTRKPNLBISNHTHWINFBBVUDWHOSXHIZTOZCKWLLJXECIDIORMRLMRVNCUSKFWWVXAHJ");
    IMC::VehicleFormation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.22940447194423852;
    tmp_tmp_msg_0_0.lon = 0.8760255007149435;
    tmp_tmp_msg_0_0.z = 0.9725182199121835;
    tmp_tmp_msg_0_0.z_units = 141U;
    tmp_tmp_msg_0_0.speed = 0.31615941217976296;
    tmp_tmp_msg_0_0.speed_units = 217U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.010192264148379704;
    tmp_tmp_tmp_msg_0_0_0.y = 0.6155680786444792;
    tmp_tmp_tmp_msg_0_0_0.z = 0.9017954250277251;
    tmp_tmp_tmp_msg_0_0_0.t = 0.5719450408018236;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_time = 0.9783273538717526;
    tmp_tmp_msg_0_0.custom.assign("FYBWAKYVBUBJIYMPTCYIKOZBNPCUGIEJZSYOKXDLPVJYKHQVYUCJSILYCQMFUXBUHKPFUNROCHXCDHGTSWJLSNRZVQYPRPPUVZOZVEBUAACVMWXTANDAEOESSZIEQSQHDQMWXUTPNXISFGMOTQDWKFDBLXJROEFQANKHGQTFNWMWJIILFXKUAGCBFHYX");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SmsTx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 2855324658U;
    tmp_tmp_msg_0_1.destination.assign("DDIESFXLFUGTAMUFBRKCGBOTSMWDPCERZFPVMQPWCNBSPSKGOQCQLSEVUWYJFYVUGFFRIRTQKICKDAJDAEYQKXLXYNOTJTGTSGCIGOVANFKEHWMBWIRSODNNPGBFKLJBVIINRZTLZEKWHQMHTQHPNUE");
    tmp_tmp_msg_0_1.timeout = 64868U;
    const signed char tmp_tmp_tmp_msg_0_1_0[] = {53, 27, -70, 83, 91, 102, 14, 4, 61, 29, -39, -66, -102, 62, -8, 102, 80, 66, -71, -44, -91, -53, -67, 68, 32, 9, 10, 70, 46, -39, 84, -92, 2, -15, -36, -61, -31, -83, -49, 12, -103, 2, -63, -67, 36, 62, -121, 13, 28, -85, -127, 45, -92, 61, 86, -2, 30, -77, 94, 34, 26, 23, -70, 13, -98, -47, 50, 43, 62, -77, -116, -73, -52, 27, 70, 11, -45, -15, 106, -119, 113, -15, 53, 97, -99, -66, -62, 23, -123, -48, -14, 35, -11, 117, 92, 87, 84, 82, -54, -89, 10, 105, 101, -64, -116, 86, 75};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.06557583685582802);
    msg.setSource(38896U);
    msg.setSourceEntity(30U);
    msg.setDestination(32396U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.7226721157473966);
    msg.setSource(63057U);
    msg.setSourceEntity(70U);
    msg.setDestination(25217U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.10645442925094106);
    msg.setSource(34098U);
    msg.setSourceEntity(86U);
    msg.setDestination(29941U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.08383239021926925;
    msg.lon = 0.8400606159756578;
    msg.height = 0.4937196591958246;
    msg.x = 0.6049365683607267;
    msg.y = 0.31421776453940475;
    msg.z = 0.03485626379875273;
    msg.phi = 0.6310250735471324;
    msg.theta = 0.7185508865132902;
    msg.psi = 0.3310789115154744;
    msg.u = 0.5320932874958587;
    msg.v = 0.7748406951317635;
    msg.w = 0.4962825847047193;
    msg.p = 0.6413391926065273;
    msg.q = 0.9565004848805255;
    msg.r = 0.7584220226756898;
    msg.svx = 0.44651681854231096;
    msg.svy = 0.26376801286242435;
    msg.svz = 0.2373444033309684;

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
    msg.setTimeStamp(0.9294970940590863);
    msg.setSource(5449U);
    msg.setSourceEntity(91U);
    msg.setDestination(26584U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.4056934392502741;
    msg.lon = 0.7217372953450553;
    msg.height = 0.4389708738503282;
    msg.x = 0.7191824617173932;
    msg.y = 0.9691512190404465;
    msg.z = 0.700603338883265;
    msg.phi = 0.594923616675702;
    msg.theta = 0.16151168797144355;
    msg.psi = 0.6754485013936251;
    msg.u = 0.07147545278225853;
    msg.v = 0.22350196981764614;
    msg.w = 0.3469768472359933;
    msg.p = 0.994131016960794;
    msg.q = 0.0068203052558680755;
    msg.r = 0.7527545216941817;
    msg.svx = 0.2623823779579738;
    msg.svy = 0.6883659836720738;
    msg.svz = 0.025357601080576275;

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
    msg.setTimeStamp(0.6568167653222735);
    msg.setSource(60074U);
    msg.setSourceEntity(249U);
    msg.setDestination(13056U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.24498041561905293;
    msg.lon = 0.2153655611667462;
    msg.height = 0.8257161831107587;
    msg.x = 0.683763323529929;
    msg.y = 0.6273083352113001;
    msg.z = 0.24629066352872397;
    msg.phi = 0.42159495257814106;
    msg.theta = 0.10143779196664393;
    msg.psi = 0.7274002350582759;
    msg.u = 0.8075242103639744;
    msg.v = 0.7149506391687329;
    msg.w = 0.3998908479351735;
    msg.p = 0.603465928738001;
    msg.q = 0.5817441132713425;
    msg.r = 0.6987626356593147;
    msg.svx = 0.28153429125159346;
    msg.svy = 0.6373314880002768;
    msg.svz = 0.09971183614080792;

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
    msg.setTimeStamp(0.5974567755425643);
    msg.setSource(37228U);
    msg.setSourceEntity(63U);
    msg.setDestination(60172U);
    msg.setDestinationEntity(184U);
    msg.op = 5U;
    msg.entities.assign("DGGMBNLHVVEWAIUOYIBBRDYSJYFZLUYZ");

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
    msg.setTimeStamp(0.9635749067183565);
    msg.setSource(34931U);
    msg.setSourceEntity(32U);
    msg.setDestination(367U);
    msg.setDestinationEntity(58U);
    msg.op = 182U;
    msg.entities.assign("GLLIGJCQIISHSFNVFVTLQCWSEOBEFDHLYYICQQMGTRXNZCTBPGHXBUJUMRSIRMZYFAADKEKAOZLZTWJZGJIJOE");

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
    msg.setTimeStamp(0.6792925526416616);
    msg.setSource(58782U);
    msg.setSourceEntity(77U);
    msg.setDestination(31536U);
    msg.setDestinationEntity(247U);
    msg.op = 178U;
    msg.entities.assign("RXLAMWEDHTBNXLNOYEHURXDQLFSHYJRQJQMAXGCYWGQMXRGXECWEKCTQGHBVKBFRPNEYILBCRTUFSJNJQIPIPUAKPJOTZVNWFDPTEAVKWUVOZJHZRCSGYHABVQRLIGAMSFPMVWBDFUIKZVZLAIVBHTIIJOUYUXDNSBOJOGKYDRZYXTMSKKYQDEDEQZZGMKOLFSEPXFUVMZKWBPWAZNBX");

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
    msg.setTimeStamp(0.5958746987374381);
    msg.setSource(21709U);
    msg.setSourceEntity(228U);
    msg.setDestination(14154U);
    msg.setDestinationEntity(198U);
    msg.type = 5U;
    msg.speed = 26247U;
    const signed char tmp_msg_0[] = {-63, 34, -32, -35, -35, -7, 58, 38, 107, -95, -11, -54, 125, 98, -91, 23, 45, -44, 72, 3, 65, -114, -12, 121, -32, 109, 53, -107, 123, -53, -46, -74, -52, 6, -72, 105, -31, -49, -73, -61, 38, -121, -30, -6, 119, 21, 26, 6, 100, -125, 46, -61, -70, 104, -81, 29, 117, -126, -67, -12, -127, 30, -20, 114, -111, 4, 28, -39, 13, 5, -65, 74, -95, -4, -97, -109, 108};
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
    msg.setTimeStamp(0.9480822049674125);
    msg.setSource(22843U);
    msg.setSourceEntity(116U);
    msg.setDestination(47678U);
    msg.setDestinationEntity(240U);
    msg.type = 87U;
    msg.speed = 27859U;
    const signed char tmp_msg_0[] = {-81, -109, 26, 47, -55, 17, 81, 14, -65, 91, 9, -4, -104, -93, 22, 67, 115, 94, 125, -15, -104, -84, 13, 17, 27, -109, -22, -125, 8, -53, -19, -51, -25, 11, -88, -37, -37, -54, 17, 39, 44};
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
    msg.setTimeStamp(0.29555308144218695);
    msg.setSource(15702U);
    msg.setSourceEntity(51U);
    msg.setDestination(13473U);
    msg.setDestinationEntity(225U);
    msg.type = 208U;
    msg.speed = 60784U;
    const signed char tmp_msg_0[] = {-59, -34, -87, -63, -81, -110, 0, 107, -100, -95, -64, -83, 83, 32, -18, -98, 74, 114, 63, -118, -25, -96, 105, 29, 122, 53, 6, -117, -114, 58, -123, -65, 113, 1, 2, -113, -23, -83, 50, -36, 1, -7, -110, 104, -84, 20, -43, 106, -2, 42, 117, -43, -117, 107, 79, -87, 0, -86, 33, -56, -39, -86, -99, 116, 11, 67, -15, 18, 62, 89, -94, -14, -89, 74, -33, 107, -8, -80, 18, 111, 3, 27, 110, -54, -86, 74, 34, 14, -126, -4, 111, 66, -21, 27, 31, 4, 14, -49, -80, -17, 4, -25, 29, 117, 104, 17, 116, 27, 106, 29, 26, -61, -35, -125, -34, -96, -30, -105, 21, 98, 87, -46, -34, -109, -128, 69, -127, 1, -112, -30, 78, -53, -81, 118, 54, 66, 31, 70, 34, 77, 118, 102, -13, -34, 44, 29, 17, -125, 92, 49, -48, 3, -69, -23, 102, 125, -110, 16, -96, -33, 38, 26, 3, -46, -36, 89, 125, -44, 104, -74, -43, 32, -2, -46, -37, -112, 82, 116, -66, 55, -68, -94, 34, -124, -19, 8, 7, -51, 114, -3, -66, 94, 70, 108, 122};
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
    msg.setTimeStamp(0.41939248021331);
    msg.setSource(9303U);
    msg.setSourceEntity(175U);
    msg.setDestination(27547U);
    msg.setDestinationEntity(170U);
    msg.op = 172U;
    msg.tas2acc_pgain = 0.5448003765197688;
    msg.bank2p_pgain = 0.7708206471751704;

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
    msg.setTimeStamp(0.6349577340583692);
    msg.setSource(8380U);
    msg.setSourceEntity(108U);
    msg.setDestination(45112U);
    msg.setDestinationEntity(253U);
    msg.op = 247U;
    msg.tas2acc_pgain = 0.019663795071263035;
    msg.bank2p_pgain = 0.49018530028690266;

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
    msg.setTimeStamp(0.4019522387410016);
    msg.setSource(30369U);
    msg.setSourceEntity(134U);
    msg.setDestination(891U);
    msg.setDestinationEntity(91U);
    msg.op = 88U;
    msg.tas2acc_pgain = 0.2304650469534173;
    msg.bank2p_pgain = 0.7850957107071641;

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
    msg.setTimeStamp(0.8625351612817292);
    msg.setSource(45772U);
    msg.setSourceEntity(158U);
    msg.setDestination(7976U);
    msg.setDestinationEntity(7U);
    msg.available = 745949101U;
    msg.value = 252U;

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
    msg.setTimeStamp(0.33346591636560063);
    msg.setSource(24850U);
    msg.setSourceEntity(100U);
    msg.setDestination(45938U);
    msg.setDestinationEntity(164U);
    msg.available = 2575455794U;
    msg.value = 226U;

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
    msg.setTimeStamp(0.43827595651099327);
    msg.setSource(33269U);
    msg.setSourceEntity(204U);
    msg.setDestination(36044U);
    msg.setDestinationEntity(136U);
    msg.available = 267078087U;
    msg.value = 41U;

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
    msg.setTimeStamp(0.2441010112979778);
    msg.setSource(22393U);
    msg.setSourceEntity(25U);
    msg.setDestination(19219U);
    msg.setDestinationEntity(45U);
    msg.op = 167U;
    msg.snapshot.assign("XYZIFKLWOGMWWFIUIYHGTPYGJENDQHOCRNTKPYRQVOAPGDOBEWWIQTMCAYTLCLRBACKNHSJGVKULVYQEZYWNIKDXAJSEUMWTWNVVTHAVGXKUPLNPHRUISQPMZGJLTMUBWMVJAFPYFJEAIIJVJDXHDNEGVBHJLHDSZXBQQFZPCHUOBMT");
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("HBMILEJVXYOANZKGBAEDCDFEWTLDFYIFCLPIOMWQMJCZNPTPUHVMWBHNJTYVDCQLAUFDUMAEQGVCYIXQXNSJATFUYBJLBPGQURAIRFLCZWGVSCXWSYSFGQZWCTRUXOVVQKDPOZXLNNBURODGOQXJEJDXKQLYCHJKHALPKZPRSVSI");
    tmp_msg_0.lat = 0.37349878371051803;
    tmp_msg_0.lon = 0.8317364611653072;
    tmp_msg_0.z_units = 106U;
    tmp_msg_0.z = 0.7162217975807192;
    tmp_msg_0.accuracy = 0.3631988556487389;
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
    msg.setTimeStamp(0.035988478860624284);
    msg.setSource(65259U);
    msg.setSourceEntity(254U);
    msg.setDestination(23093U);
    msg.setDestinationEntity(143U);
    msg.op = 11U;
    msg.snapshot.assign("LUPVLHXLRCLKRTUSJOWWLULIHHTEJMAXZHYBBTSQPTBJTWRAZHKFWMGGQCGWZRLQQJEMOUNMUFKVTSZCRSZSFEGRIIEDIZQQMCRYBBQFGXOHUANSNPIFAUOVEAMZZMMDBKGNWPDUWTPHPRVSCBJZFNJEKOFHCJFAXWIVEOSUXKMGAFWDVYURHTKKPLSDCDVXXVEGFKAXBMWEQDONPNYDNAHYPLY");
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("UDUEKDKOYRUWAOSLXHJXTSGJMSIMIOOGJIPQBNQPUJNZDUXQLFROHGSLGUWSYOMEZNBFZVAOIJLKWQRIQTVGXSEVMBZRNBYFCMTBUUBCIHMPGGBBOGTQOHXJPXAJHRNLRVQZLEKXCSTRRKZYFF");
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
    msg.setTimeStamp(0.13471809846906035);
    msg.setSource(40438U);
    msg.setSourceEntity(69U);
    msg.setDestination(39032U);
    msg.setDestinationEntity(45U);
    msg.op = 152U;
    msg.snapshot.assign("GSEKRPUUMYGYUSYWEQOOURLVJZWCVJJCJJVEDRFHXDWNZBATWAMZLBVPUOHJBSUBLFHTXNGGJRSHCKLRDDTNFINGPEMIXFNWQPOAYFAGYBMHKQCTDXZWWNXIVKYQCNIPNPQLASMBMTMCFGKSIVGDQCEZBADTOYALIOIMIUMBSEMDSBPQQZWCYCAPHARTJHXXVELPZEJUKRXVYKZUOY");
    IMC::Fluorescein tmp_msg_0;
    tmp_msg_0.value = 0.6303699213661492;
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
    msg.setTimeStamp(0.08817304866191977);
    msg.setSource(50549U);
    msg.setSourceEntity(224U);
    msg.setDestination(18367U);
    msg.setDestinationEntity(208U);
    msg.op = 139U;
    msg.name.assign("KOTLUXJMCRGDVGTMSE");

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
    msg.setTimeStamp(0.01197701269237128);
    msg.setSource(61684U);
    msg.setSourceEntity(5U);
    msg.setDestination(60682U);
    msg.setDestinationEntity(70U);
    msg.op = 219U;
    msg.name.assign("FTEZYHRHOLPDJKJBPNFKDSNLPMEJJAEGIVBQBVWBCTW");

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
    msg.setTimeStamp(0.7333469789593838);
    msg.setSource(27889U);
    msg.setSourceEntity(166U);
    msg.setDestination(4875U);
    msg.setDestinationEntity(137U);
    msg.op = 204U;
    msg.name.assign("OVHJVNAKGJNDGIOGOJYUARIFMQGAKBJHPWDBNZIBWFXLXKMGRCFRSRMMJDUYNSSJXWIFDDSAPWNNFOTLBXTTVVKTCMABRQOLALDUQOFEMYVZRGIFMYBJAKTIRXEZCHUEIEEHUSTYQYIVNZIC");

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
    msg.setTimeStamp(0.5806711703794203);
    msg.setSource(57115U);
    msg.setSourceEntity(114U);
    msg.setDestination(61485U);
    msg.setDestinationEntity(188U);
    msg.type = 15U;
    msg.htime = 0.4311608974048581;
    msg.context.assign("MPSBVKJLNRZEREUPUNESCIWVXWOFCIVWBVRAKDRSQFJZKEQCOTSGKCJRBDJQUOHKDSALFOMRMAITAHLOQLPSYICTDCETIDYIAXHZHNWFNGJQFHKQEIXPIBZWIOODXTVNPUEGGXLSHGFNLSBQRLUHPBUYTAUABJWQKMBFTVXNTHGJZXHVWMLXHRMCGDGYSMMWKEECZWYBPYNJGTOCXPFTQAJMZZKRFYLOQVPZVCRWOJEADMG");
    msg.text.assign("CMYROOOOTEWLZBUDUDZERTNEDIHOPKKEUJIEPVKOASFHXUXRQSRFOXYLEFVKMWPQQGVDQ");

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
    msg.setTimeStamp(0.7280636154704501);
    msg.setSource(23723U);
    msg.setSourceEntity(227U);
    msg.setDestination(10925U);
    msg.setDestinationEntity(64U);
    msg.type = 239U;
    msg.htime = 0.7506338506948623;
    msg.context.assign("CUMWLFMWKNHLOBPGEUYIDKZMXXCEKRYCXWFKACQJIJYUOGZJMOCDQAHGZUQFITBQUMZQXSHFTSMHRPRJORKZJARLBJUYRDFDCRCPGUWJVWIGNBLHSHNTIZAURVIGKOJTFGXEMPAXSPEBXTPRVLDSIXVYPGLYESFB");
    msg.text.assign("LCTMVZDXEKFSPULEAXOAUCZ");

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
    msg.setTimeStamp(0.8180013905888271);
    msg.setSource(19648U);
    msg.setSourceEntity(57U);
    msg.setDestination(65459U);
    msg.setDestinationEntity(39U);
    msg.type = 113U;
    msg.htime = 0.7954648762207469;
    msg.context.assign("HEWEOYIBJIQLYHXSTBULPOJDDTZOHQFTVRKSPNZEWPCAXRQFZGMPCVMYUTHLBRBFWJRTXIECWHVHUNFGUKSEXLRYTWOEZIVGIQHKEXTEBPBNNYSGBZBUAKJVXKOLPMODCTABZCXJVYGRP");
    msg.text.assign("FHJZYWFKOXUWPTAPYZYQWJSKPFGUGVJCJMEUWWXINIVZGJZSGLOUWXMMQSVJKINRAXJELBCCEVRAYCJHESMQIFKZFMPOXBDIFRBELDQTVGKOCNWKUALRHCAXUSSKIEAHBPLFPTBETNOSVRDZNAHJUFQQYYXCQQELDZTFOHNI");

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
    msg.setTimeStamp(0.2035893607159882);
    msg.setSource(475U);
    msg.setSourceEntity(40U);
    msg.setDestination(49423U);
    msg.setDestinationEntity(196U);
    msg.command = 123U;
    msg.htime = 0.9145529141851795;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 251U;
    tmp_msg_0.htime = 0.09695650616701079;
    tmp_msg_0.context.assign("QEBDKZIWWOPUZTGADULMUXLSLZVHDROEURMRGYFIVXWUFPNTJNKQXAHGQFNFAIFYFGPVYUILTKFKSTTCBVAMBSTJBTUJVLYPCPZCKRIYCEWNSEVMKGZHBHQEISWRSEOTHXUXMCGGEVKFAESMOPTAZNLDAGKKISNUJAWYNCOVMOXWOQNJQLOXYRDBPJAYHUQXPJLZZZPDCWDYCGFPHBZEERCDKTBWMBMMLYBSHIAGQQJCDXFHVJHIRRROS");
    tmp_msg_0.text.assign("EOCMCEGQRPLZYOWJCJIMSFOPXFUNDGIETLUHYRTCITDPTHXQVAGZYFIVIZUCHRLTQJSMLYFPWSVGXSHQXDQJJDVXPKRRIBJRHSKEGIDOUNIEHASYOLFUAJZKTOYGVKREEWEMNWWNJAKFKBFHNAYELGKQQSBBVKZMDXDPUATYBRIJGQOSTPHKAFMCPAWVMAXVYNDWUZFBESCVLISTXKYROZRBUXJNZPOTDHCQLNZGXFMHWVAUZMNDBUL");
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
    msg.setTimeStamp(0.9205984659115986);
    msg.setSource(47023U);
    msg.setSourceEntity(24U);
    msg.setDestination(38149U);
    msg.setDestinationEntity(46U);
    msg.command = 168U;
    msg.htime = 0.8374883220467271;

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
    msg.setTimeStamp(0.988877919413248);
    msg.setSource(11624U);
    msg.setSourceEntity(92U);
    msg.setDestination(23706U);
    msg.setDestinationEntity(37U);
    msg.command = 234U;
    msg.htime = 0.23968797340674963;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 142U;
    tmp_msg_0.htime = 0.010876779070660092;
    tmp_msg_0.context.assign("HQJGLACYZJBDXVLMYAVWIRCFOJOVMQLEEWPOZBSOGNRVFBQYPTDHSTPARTMLKIHGWBXWTBQPCWUWBJEAAKLMOCNGZKEVOJICWPNFQUKGYQNXXNCXUHSOSFHZURSMEERKDIDHMJLNSURZVJBYZUGEAHNEUDPDNZOVULKZCGFIKJFGYRJWFXYSTBTAKWTYUI");
    tmp_msg_0.text.assign("SMIXRRAMATMLDYCCWHFFLKIAOYOUGYNNOSUNFZECOZHSYXIJKEUNAVGXQWKCUALGXXJCZBDVZJPVVFIDHJWNTTVBQKPNKEZUFYRBUCDRPLMNFBKWQJEMGXLPBOCQQECAABHFIBGHSTEKBDUZDLYVYQUHDXXBTWPKLZUOEJDASQMPSNRVXGJHFKTQQETSGHGWWORJQXULIMJRYBSDWGKROIEYSHLIACGNTNTVLIDPAPFTZO");
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
    msg.setTimeStamp(0.25625983823528564);
    msg.setSource(14194U);
    msg.setSourceEntity(120U);
    msg.setDestination(64988U);
    msg.setDestinationEntity(235U);
    msg.op = 118U;
    msg.file.assign("KPEJQLXGLQPWWFIAIHRSASEMWKRFAJYQRXGLKVNPMEZCAJ");

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
    msg.setTimeStamp(0.9494564798413903);
    msg.setSource(46108U);
    msg.setSourceEntity(97U);
    msg.setDestination(47228U);
    msg.setDestinationEntity(69U);
    msg.op = 4U;
    msg.file.assign("XMGOKBNAKULCIWQCAVZZZAVGYCJTVURGSQKHDOZDSHJKBWVPRFXHXOENCHBPFWXDIFITMMTSQTHXLFTNMFCZQEFWGXSXDLHFRLIMLMADUEYNUMSJRQMAFSUBHYJIVKVCVJUVEYWLPGUBAWHQAKPLBGDZBQMUYXGEHFZCO");

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
    msg.setTimeStamp(0.4174222588865315);
    msg.setSource(39900U);
    msg.setSourceEntity(188U);
    msg.setDestination(39003U);
    msg.setDestinationEntity(191U);
    msg.op = 63U;
    msg.file.assign("EKYNOOYRHHLVWREMKOUTFIXGJGFIRNMLEIHWPRMTSTAHFZLIRCSNZSBRPFVCBGEAQJZVMELIBMSKHMWPHVQDNGPIFDUVVZTPXAASCQOEYBRRTPWOVFFRSJBSYWAXHSBJALOQLYSHXMKQKXGJDMTWVIUGWJHDJCONUIQGPDJDGWGAWQLOKFXNNQXZJBELKKPAEDCZMYEUYUOTUVTWZLXZKUCCOSFDFINHGZZNTPV");

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
    msg.setTimeStamp(0.1388383480030163);
    msg.setSource(63880U);
    msg.setSourceEntity(162U);
    msg.setDestination(6078U);
    msg.setDestinationEntity(192U);
    msg.op = 35U;
    msg.clock = 0.07165455897349193;
    msg.tz = 21;

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
    msg.setTimeStamp(0.7845166705433868);
    msg.setSource(43104U);
    msg.setSourceEntity(190U);
    msg.setDestination(58452U);
    msg.setDestinationEntity(35U);
    msg.op = 183U;
    msg.clock = 0.30392033350771486;
    msg.tz = -112;

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
    msg.setTimeStamp(0.13872840659202823);
    msg.setSource(32939U);
    msg.setSourceEntity(169U);
    msg.setDestination(56113U);
    msg.setDestinationEntity(223U);
    msg.op = 26U;
    msg.clock = 0.2482945523259742;
    msg.tz = 68;

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
    msg.setTimeStamp(0.9444106196356965);
    msg.setSource(13085U);
    msg.setSourceEntity(221U);
    msg.setDestination(12272U);
    msg.setDestinationEntity(158U);
    msg.conductivity = 0.8020965184544641;
    msg.temperature = 0.1541261272198886;
    msg.depth = 0.16537266012782315;

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
    msg.setTimeStamp(0.6483514188872904);
    msg.setSource(11193U);
    msg.setSourceEntity(7U);
    msg.setDestination(50459U);
    msg.setDestinationEntity(62U);
    msg.conductivity = 0.08604860359019062;
    msg.temperature = 0.9615865632946525;
    msg.depth = 0.7222602230745624;

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
    msg.setTimeStamp(0.1911963493127754);
    msg.setSource(63523U);
    msg.setSourceEntity(80U);
    msg.setDestination(65094U);
    msg.setDestinationEntity(122U);
    msg.conductivity = 0.32660091059268304;
    msg.temperature = 0.025996937775268347;
    msg.depth = 0.5808370086849838;

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
    msg.setTimeStamp(0.009483218104309188);
    msg.setSource(49090U);
    msg.setSourceEntity(2U);
    msg.setDestination(28954U);
    msg.setDestinationEntity(123U);
    msg.altitude = 0.36785861587568214;
    msg.roll = 26333U;
    msg.pitch = 33165U;
    msg.yaw = 4831U;
    msg.speed = 17744;

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
    msg.setTimeStamp(0.5505397916711611);
    msg.setSource(9098U);
    msg.setSourceEntity(96U);
    msg.setDestination(2515U);
    msg.setDestinationEntity(152U);
    msg.altitude = 0.34938306208391356;
    msg.roll = 62648U;
    msg.pitch = 20627U;
    msg.yaw = 15293U;
    msg.speed = 174;

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
    msg.setTimeStamp(0.5140930531046868);
    msg.setSource(41323U);
    msg.setSourceEntity(45U);
    msg.setDestination(35468U);
    msg.setDestinationEntity(126U);
    msg.altitude = 0.8779885594583368;
    msg.roll = 37606U;
    msg.pitch = 13626U;
    msg.yaw = 9274U;
    msg.speed = 12894;

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
    msg.setTimeStamp(0.6756838754721776);
    msg.setSource(48567U);
    msg.setSourceEntity(143U);
    msg.setDestination(13752U);
    msg.setDestinationEntity(63U);
    msg.altitude = 0.7390868181887528;
    msg.width = 0.3712472697001512;
    msg.length = 0.3978440742163789;
    msg.bearing = 0.32582642171723064;
    msg.pxl = -14195;
    msg.encoding = 199U;
    const signed char tmp_msg_0[] = {-7, 92, 22, -90, -123, 94, -92, -49, -85, -21, -31, 19, -62, 42, -109, 70, -93, -95, -78, 35, 45, -64, 81, 75, 11, 55, -30, 56, 7, 83, 83, -7, 21, -107, -104, 27, -114, -8, -22, 122, -103, 125, 48, 108, 28, -107, 33, 117, 59, 56, -123, -36, 35, -105, 14, -121, 23, -109, -97, -92, -55, 76, -122, -103, -99, 26, -86, -26, 72, -76, -105, 35, -100, -117, 4, 71, 4, -53, 45, -48, -9, 39, 32, 124, -113, 91, 89, -32, -49, -4, -85, 109, -57, -90, 50, 3, -61, 112, -46, -16, -77, -103, -46, 6, -85, -91, 102, -1, 3, -55, -122, 116, 109, 99, 122, -90, 59, -124, 69, -90, 93, -79, 57, -124, 39, 79, -53, 49, 8, -111, 20, 17, 36, -68, -122, 86, 33, 37, 70, 70, -31, 98, 74, 104, 78, -23, 6, -44, -40, 84, 54, 119, -98, -92, -7, 96, -15, -81, -118, -92, -122, 6, -25, 26, -125, -28, -94, 20, 82, 102, 23, -59, -65, -83, 36, -106, 49, 101, -66, -11, 81, -30, -25, 124, 122, 19, -112, -5, -61, 111, 7, 13, -22, -3, 77, 27, 103, 5, -64, 88, -85, 109, 25, -92, -75, -58, -53, 83, -66, 16, 109, 6, 61, -64, -120, -33, -49, 89, 124, -114, -98};
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
    msg.setTimeStamp(0.6194413111226048);
    msg.setSource(14904U);
    msg.setSourceEntity(65U);
    msg.setDestination(40823U);
    msg.setDestinationEntity(138U);
    msg.altitude = 0.410110472088687;
    msg.width = 0.05006299413135018;
    msg.length = 0.845683775012658;
    msg.bearing = 0.6792849971511434;
    msg.pxl = 9270;
    msg.encoding = 193U;
    const signed char tmp_msg_0[] = {81, -65, 25, -95, -66, 84, 10, -92, -111, 45, -112, 7, -75, -43, 84, -47, 32, 86, 75, 66, 124, -78, -93, 126, -17, -126, -75, -112, -105, -11, 112, 107, 88, -16, -80, 2, 32, 47, 11, -79, -78, -97, 89, -101, -85, -11, -51, -43, -56, -99, 102, -17, -10, -31, -32, -74, 71, -125, 93, -13, 83, 48, -24, -119, -31, -32, -3, -122, -45, 46, 37, 26, -96, -68, 92, 78, -94, -104, 19, 21, -127, -100, 122, 124, -67, 111, -66, -78, 121, -55, -36, -100, -74, -74, 111, -109, -22, 37, -91, 15, 87, -9, 23, 94, 27, 32, -72, -97, -109, 60, -62, -4};
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
    msg.setTimeStamp(0.27837204657180326);
    msg.setSource(10411U);
    msg.setSourceEntity(68U);
    msg.setDestination(30120U);
    msg.setDestinationEntity(159U);
    msg.altitude = 0.7290764444069048;
    msg.width = 0.4013844597329468;
    msg.length = 0.619436257154898;
    msg.bearing = 0.5806576894070837;
    msg.pxl = -22655;
    msg.encoding = 43U;
    const signed char tmp_msg_0[] = {-45, -99, 44, -41, 114, 21, -107, 43, -9, 101, -33, 84, -8, 50, -108, -114, -49, -43, 70, -51, 67, -77, -36, 64, -81, -92, 36, -106, -89, -48, -56, 87, -45, -9, -108, -37, 90, 92, -71, 14, 55, 44, 38, -57, -69, -104, 72, 6, -77, 61, 24, 62, 59, -45, -25, -52, -101, -108, 61, 37, 62, -38, -100, 20, -21, -71, 32, -112, -105, -108, -96, 18, -113, -40, -29, 16, -46, -98, -96, 58, 86, 33, 93, -121, -58, -27, -66, 120, 82, -63, 23, -98, -64, 64, 41, -92, 123, 102, 57, -27, -93, 71, 27, -6, 102, 10, 18, 32, -48, -106, 1, -56, 3, -106, 78, -11, -86, -98, 107, 22, -96, 81, -104, -122, 4, -74, -101, -29, 122, 97, -47, -72, 1, -73, -117, 3, 119, 74, -49, 92, 81, 40, 91, -104, -99, -123, 21, 123, -104, -58, -52, 44, -72, -44, 102, 22, 112, 82, -17, 70, -55, 32, 38, 24, 72, 5, -10, -78, 34, 39, -22, -83, 72, -38, -112, 11, 45, 48, -78, 111, 29, 71, -24, 107, 62};
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
    msg.setTimeStamp(0.5914058591744776);
    msg.setSource(23540U);
    msg.setSourceEntity(159U);
    msg.setDestination(64100U);
    msg.setDestinationEntity(39U);
    msg.text.assign("XIIEMWARIHATTXFTWOBPPHEMZWFQORERQRPCQCGJLSKEJVQNSQXAVZYKGBGAZPXVDASORUSPNUPBQILGBRSVTJUFYHIUHJDLVO");
    msg.type = 208U;

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
    msg.setTimeStamp(0.30485975247484154);
    msg.setSource(5396U);
    msg.setSourceEntity(251U);
    msg.setDestination(40290U);
    msg.setDestinationEntity(158U);
    msg.text.assign("NFRTSKFGWZOLDSLWOCJBULMIIHEGYEWPFVBEFUMSJWGOKTYEHRECLXVBDKQSMHJBURQUKMAXSUWKTOXOBFLQFOSRCCTPZAOVEPCTCNLUHOHKCYBSUNVRQBJSMEZPPPDQHHIVTEZOLQINDYDLTVAQWB");
    msg.type = 139U;

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
    msg.setTimeStamp(0.8940589066604999);
    msg.setSource(9627U);
    msg.setSourceEntity(29U);
    msg.setDestination(46552U);
    msg.setDestinationEntity(201U);
    msg.text.assign("FXIWYPDIWBLTSKTCONAPEZXZZQHUFRMKCDAMDEPQVDVOYRKKLPMTRMWCSOZHBMHAQHIKTJXYFTFWVKGWWICNCEOIIWSDZDSFVMSZBHFNEYEZVXQHROHILUDBWXQZPQJOAJXAYBVOMQDBAAWFUYLGJGGRELEGEUGERAJGODUBUEVRRVROTCNVPCCJKXBTSCPPDLI");
    msg.type = 206U;

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
    msg.setTimeStamp(0.49195848287884814);
    msg.setSource(19592U);
    msg.setSourceEntity(205U);
    msg.setDestination(64891U);
    msg.setDestinationEntity(45U);
    msg.parameter = 178U;
    msg.numsamples = 61U;
    msg.lat = 0.9351088808561163;
    msg.lon = 0.9174965003592838;

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
    msg.setTimeStamp(0.5503945367920824);
    msg.setSource(27083U);
    msg.setSourceEntity(144U);
    msg.setDestination(49000U);
    msg.setDestinationEntity(123U);
    msg.parameter = 137U;
    msg.numsamples = 121U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 21136U;
    tmp_msg_0.avg = 0.25259106720727065;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9137424336613785;
    msg.lon = 0.14905273539887698;

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
    msg.setTimeStamp(0.898616370793864);
    msg.setSource(18664U);
    msg.setSourceEntity(78U);
    msg.setDestination(7348U);
    msg.setDestinationEntity(201U);
    msg.parameter = 80U;
    msg.numsamples = 244U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 54709U;
    tmp_msg_0.avg = 0.4895781993646159;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.45935913932090344;
    msg.lon = 0.9464275384828531;

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
    msg.setTimeStamp(0.33913476016013866);
    msg.setSource(25436U);
    msg.setSourceEntity(38U);
    msg.setDestination(5443U);
    msg.setDestinationEntity(209U);
    msg.depth = 17279U;
    msg.avg = 0.4368915631960769;

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
    msg.setTimeStamp(0.6659012602165696);
    msg.setSource(2435U);
    msg.setSourceEntity(15U);
    msg.setDestination(1121U);
    msg.setDestinationEntity(103U);
    msg.depth = 63071U;
    msg.avg = 0.7182848093746755;

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
    msg.setTimeStamp(0.9636336652842884);
    msg.setSource(47773U);
    msg.setSourceEntity(77U);
    msg.setDestination(65262U);
    msg.setDestinationEntity(28U);
    msg.depth = 62473U;
    msg.avg = 0.07176370856733882;

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
    msg.setTimeStamp(0.47018431507235914);
    msg.setSource(5158U);
    msg.setSourceEntity(225U);
    msg.setDestination(47760U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.9118028437061856);
    msg.setSource(35583U);
    msg.setSourceEntity(140U);
    msg.setDestination(65271U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.5255262876540653);
    msg.setSource(33080U);
    msg.setSourceEntity(66U);
    msg.setDestination(55058U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.6634911439452973);
    msg.setSource(24668U);
    msg.setSourceEntity(112U);
    msg.setDestination(58530U);
    msg.setDestinationEntity(95U);
    msg.sys_name.assign("CPOSANMGTFWPDSBITOYQNJJOGQXWPMASCHXEVGFDQXFORZZFTLGZEUIKIWSWBRZEUZGWOSYMCYAREDJVSKNELOPLIEZDJRJKIRCHNEVKGDYBXCKCDFOITPUQBTJBBNJUHZDKVPMTLBHLECVTZYFLZVFLHMKXIVAOWYOSAMESXT");
    msg.sys_type = 49U;
    msg.owner = 64297U;
    msg.lat = 0.9561143105997547;
    msg.lon = 0.8139834851011135;
    msg.height = 0.7128584150928498;
    msg.services.assign("ZKTNNITGBVOQZCUESWLJYDOAEWFJQXUHHKIRTLODYVFMOLCKZFHQNTVORWLGJKZBMCYSJHGNTSTEBYEJKRTQWSTEPUBLOMJCAY");

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
    msg.setTimeStamp(0.774346979174244);
    msg.setSource(45817U);
    msg.setSourceEntity(23U);
    msg.setDestination(46743U);
    msg.setDestinationEntity(77U);
    msg.sys_name.assign("VFHQUMXXICAGWOTKJXHBVWFDUYTAISCHGBCZUXDHIFEGVGVCKFJTFMRHSVXLNASMEWPTJHFOTDQZAQIP");
    msg.sys_type = 253U;
    msg.owner = 48219U;
    msg.lat = 0.14238620864148;
    msg.lon = 0.2698785359547984;
    msg.height = 0.9734180271731987;
    msg.services.assign("MYMQQTVMTDOZHBJGCDKYFSCVGWTGMDSRHIWONXXTVBBDPILKPNUSYVZFBFCEZIJOIGZJOMPEAONWXRSPJOFQHWRWCYJHUUXLTKNUTAXIUNLBGWQKKJPAMNVCCDFWZZKHEORVUAOQYTVAATPEWAFPCQ");

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
    msg.setTimeStamp(0.2172694928978297);
    msg.setSource(28518U);
    msg.setSourceEntity(245U);
    msg.setDestination(29660U);
    msg.setDestinationEntity(78U);
    msg.sys_name.assign("SIFBTUEAYSRIXRFOQNZCPVMDTFHSCMPXRSWYINSLIVII");
    msg.sys_type = 159U;
    msg.owner = 5257U;
    msg.lat = 0.03281341509350855;
    msg.lon = 0.5888124171472449;
    msg.height = 0.4226703802091434;
    msg.services.assign("EKDAEBFIWCTVSBHPADQG");

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
    msg.setTimeStamp(0.9952999803690552);
    msg.setSource(37826U);
    msg.setSourceEntity(62U);
    msg.setDestination(48368U);
    msg.setDestinationEntity(247U);
    msg.service.assign("TKWCQTQKYADEMKBBRKTOBBXLUGYPAFMKAMXRNZUSXEZWBTVYXWSXZOVRFEFPEIFSGPNDAZUHLPIZZJMIEJPVTJKHFDXVVGJUGDUKLXORJIXAOTHVLHOBGPTUBYKRYCFSNJQHGTWHLNFCNGBHAW");
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
    msg.setTimeStamp(0.31242538003603926);
    msg.setSource(11893U);
    msg.setSourceEntity(37U);
    msg.setDestination(1549U);
    msg.setDestinationEntity(146U);
    msg.service.assign("FGUENGZFXPIREHNZCNIVVQVIABWLOGVWAHQJW");
    msg.service_type = 39U;

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
    msg.setTimeStamp(0.7974885583333313);
    msg.setSource(44012U);
    msg.setSourceEntity(4U);
    msg.setDestination(50965U);
    msg.setDestinationEntity(204U);
    msg.service.assign("GAHFUVWUTFKLIGNISIMPEJSDNVHCFWCVYOEOEDGAJNGJQARUEYCPECMKUBRGDBINKYVKCLAIHVYNQYOPGVHCNPBAAFYDRQQHBFNHZZJZFZOOCDXKBPRLXBZIMDRBJKMMATMTIHFGBTTTTIXGXSFJYKXBPFWHWQQXEJLNAIJQQWQDNLSYSWETPWPR");
    msg.service_type = 49U;

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
    msg.setTimeStamp(0.90373058803696);
    msg.setSource(17142U);
    msg.setSourceEntity(172U);
    msg.setDestination(38792U);
    msg.setDestinationEntity(202U);
    msg.value = 0.9947101433379549;

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
    msg.setTimeStamp(0.8392513326438439);
    msg.setSource(36756U);
    msg.setSourceEntity(165U);
    msg.setDestination(33582U);
    msg.setDestinationEntity(24U);
    msg.value = 0.2869626009810815;

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
    msg.setTimeStamp(0.8007138259060261);
    msg.setSource(62693U);
    msg.setSourceEntity(154U);
    msg.setDestination(14734U);
    msg.setDestinationEntity(161U);
    msg.value = 0.6500095543631047;

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
    msg.setTimeStamp(0.5238157426211568);
    msg.setSource(30329U);
    msg.setSourceEntity(90U);
    msg.setDestination(35589U);
    msg.setDestinationEntity(27U);
    msg.value = 0.057017681898453465;

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
    msg.setTimeStamp(0.9583030050218903);
    msg.setSource(46015U);
    msg.setSourceEntity(253U);
    msg.setDestination(17184U);
    msg.setDestinationEntity(219U);
    msg.value = 0.8802994610853311;

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
    msg.setTimeStamp(0.8243579050412458);
    msg.setSource(6717U);
    msg.setSourceEntity(228U);
    msg.setDestination(25554U);
    msg.setDestinationEntity(131U);
    msg.value = 0.22382971686706365;

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
    msg.setTimeStamp(0.4367501735823267);
    msg.setSource(60377U);
    msg.setSourceEntity(115U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(16U);
    msg.value = 0.333400023702061;

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
    msg.setTimeStamp(0.5796649863334846);
    msg.setSource(29383U);
    msg.setSourceEntity(210U);
    msg.setDestination(64256U);
    msg.setDestinationEntity(115U);
    msg.value = 0.3849481940466233;

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
    msg.setTimeStamp(0.9810860451506762);
    msg.setSource(24553U);
    msg.setSourceEntity(226U);
    msg.setDestination(36501U);
    msg.setDestinationEntity(152U);
    msg.value = 0.2703309285926496;

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
    msg.setTimeStamp(0.8482180018106109);
    msg.setSource(48088U);
    msg.setSourceEntity(61U);
    msg.setDestination(22221U);
    msg.setDestinationEntity(174U);
    msg.number.assign("NKIYPWKQSQONCSWQDSHBZDXDCJVOWKJYUCHXBTGFDUIHICOAVFQDNJKUISAJCKXYQSFTVVPPORONUMNRGYAEAPHTRCGUWKIMMJWLLNLSERRVAQBSTNZMFKGARPTFXSKSBMGLJDZMGOMPTZTXLTBGGMABZYKDXIUNBWPYUJFUBDQECRFCHJXTELLCMUPPGAIDERBZQEUFOWLBOKHPLEYYZMZSRNGWVVZXLOOENFXWYEHVCREFJA");
    msg.timeout = 17083U;
    msg.contents.assign("LMPXEBCYMOEVEPNSJJGLZZLAGLVVICJABDDHCMWXEDVNRAHKAVRGCIFFUEBTAEDYZRAOTRAVQIJKQOFPBCHHPNSSPNPJYKHHQXFIMJUSICHMWMCMIIYGGLDYZRUWEQNNCTJMJYXLKITRSZPVDLSDFUQKOBWQAAFJYSNNPXRWVKTTTB");

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
    msg.setTimeStamp(0.8581329192380244);
    msg.setSource(29169U);
    msg.setSourceEntity(55U);
    msg.setDestination(52403U);
    msg.setDestinationEntity(222U);
    msg.number.assign("ODLYNLEZSDQHJOVRFWBMJTUMAWWSHUL");
    msg.timeout = 11181U;
    msg.contents.assign("EFHAMDROMHGRJUHZAMFZKAOJINEZYXONITHBNSDKRIINFXGEUVHNUDYCBTVYFPEREGBXXQKOTKXQGW");

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
    msg.setTimeStamp(0.5265379850785147);
    msg.setSource(42619U);
    msg.setSourceEntity(123U);
    msg.setDestination(20569U);
    msg.setDestinationEntity(222U);
    msg.number.assign("FENXJYXKMMBUGURSKVWRBWXFRBHJKROILOJZNYZCEAFEVONYFNFQFAULJZXZCLOOSSHVBXGPMPDGPPLIKSDXDZIFSSTLJQKCDMCXZYETAVMFCVMZRBKTIPOHRNASJVWFGHCEYHHVYJKGXUQP");
    msg.timeout = 20468U;
    msg.contents.assign("AQVSPNRSVQMEUYHCRGFQJIMXOHSQZOZLSVPSVTZXIGVCMSQXOPRIEBKAYBALCXHKDCKBRLSANUNVCLNKODIGMUJEPLNOPCXYRJTZBLCGZSENMNTHTPHSQXKXBPEXAUWYTEFIJBUAMZYJBXMIYJWRIDWLLBTDWCDDBZSRIAOTOAZXNYVNFHMUCOPIWVFHOHWDRJFWFYLCDTANJQHVGWZGBKGPLGJUKTGETYHFYRWFQADVQEMFD");

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
    msg.setTimeStamp(0.8112092118762486);
    msg.setSource(57407U);
    msg.setSourceEntity(180U);
    msg.setDestination(20878U);
    msg.setDestinationEntity(2U);
    msg.seq = 438403583U;
    msg.destination.assign("JSOEXIOTWAOKHACZQWRTDMBFRCUUEXQWGV");
    msg.timeout = 44739U;
    const signed char tmp_msg_0[] = {-27, -114, 105, 52, -65, -19, 35, -45, -33, 81, 118, -70, 104, 20, 102, -105, 58, 43, 13, 22, -26, 87, -116, 43, 101, -8, 79, 75, 114, 30, 118, 83, 39, 5, 73, -79, -122, 37, -93, -71, -44, 123, -40, -103, -52, -22, -68, -62, 52, -89, -81, -108, -9, 18, 108, -78, -4, 26, 5, -12, 0, -116, 62, -106, 98, 49, 49, -66, 8, -52, -86, -128, 24, -4, 7, 57, 61, -104, 65, 125, -3, -85, -103, 1, 47, -89, 8, 32, 3, -45, -55, 50, -120, 82, -96, -111, -4, 34, 90, -65, 16, -89, 104, -87, -97, 54, -98, 50, -3, 63, 115, -35, 1, 40, 2, -96, 23, -121, 125, 26, -98, -78, -70, -4, -11, -51, -54, 54, 40, 78, -123, 122, -113, 99, -31, 24, 82, -95, -63, -75, -98, -19, -4, -102, -92, -24, -100, 105, -127, 76, -117, 55, 101, 89, -9, 76, 2, 54, 121, -47, 94, 63, 41, -8, 63, -54, -27, 105, -121, -34, -126, -44, -78, 78, -64, -91, 124, -76, 108, 111, 92, 55, 4, 98, 33, 47, 54, 73, 124, -66, 54, -70, -8, -69, -126, 90, 116, -91, -128, -77, -5, -116, -30, -41, 41, -108, -98, 6, 28, -6, -120, -89, 94, 27, -63, 13, 10, 1, 39, -11, -107, -96, -113, 18, 87, 52, 29, 9, 45, 43, 70, 89};
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
    msg.setTimeStamp(0.5285860976918281);
    msg.setSource(908U);
    msg.setSourceEntity(101U);
    msg.setDestination(58909U);
    msg.setDestinationEntity(180U);
    msg.seq = 860766450U;
    msg.destination.assign("WRMXEEQABZWOHZNXGHNXNIRTFM");
    msg.timeout = 13206U;
    const signed char tmp_msg_0[] = {71, 51, -22, 0, -83, 91, -127, 65, -65, -72, 67, -37, -54, -28, -63, 80, -20, 126, 126, -17, -72, 84, -84, 9, 65, -112, 116, 105, 119, 2, 33, -116, 62, -1, -76, -32, 57, -67, -10, -123, 41, -82, 104, -46, 70, -90, -53, -39, 1, -3, 37};
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
    msg.setTimeStamp(0.051425409879143014);
    msg.setSource(52708U);
    msg.setSourceEntity(235U);
    msg.setDestination(46028U);
    msg.setDestinationEntity(44U);
    msg.seq = 802616485U;
    msg.destination.assign("FIHMJYWOPBATLGZIERNVANPDNVYQRYSXYOMBRPVHGUBBBFHKQWKWLECCMSEGIVCLMMQPYKMSBQNQJLNFPJISJXGCXJWUCWTOYOCOHZTXZTLSDASGKNZLCXEGQMZWZSTIAHDLIRGWPUWZFJJPKFRJSNIXPAKTHCEIDBDNXCZDGUOIADDASGULUKFFQAAUBHVKEFFKHTRHTSOEVVJFLRAUIJWLYEPNZQUGWDMBQRYXTUEVYTOCBXH");
    msg.timeout = 40124U;
    const signed char tmp_msg_0[] = {-77, 88, -121, -45, -82, 20, 11, 7, 14, 124, 5, -10, 61, -86, 76, -90, -8, -66, -111, -14, 38, 97, -63, 102, 85, -65, 43, -118, 50, -31, -8, -4, 54, 108, 46, 22, 32, -1, 58, 34, 27, 64, 121, -61, 7, 30, 21, 34, 62, -60, -70, 37, -99, -62, 48, -33, -115, -87, -116, 11, -5, 41, -75, 6, -85, 88, -77, -33, -3, -46, -39, -18, 107, 23, 47, -34, 43, -100, 9, -97, 24, -97, -36, 56, 123, -55, 25, -19, 90, -104, -79, -88, -78, -5, 106, 78, 42, 105, -74, 66, -114, -42, -30, -128, -104, 20, -119, 4, -116, -41, -121, 65, 118, 96, 31, 16, -76, -110, 27, 114, 45, -25, -99, 53, 48, -107, -12, 96, -96, -72, 8, -84, 93, 34, -122, 126, -37, 1, 20, -106, 49, 73, 16, -57, 5, 48, 112, 11, -125, -10, -86, -24, 57, -76, 30, 23, -63, 20, 87, 29, -36, 64, -17, 59, 50, -72, -9, -86, 20, 63, 80, 8, -110, 123, 63, -54, -114, 15, -95, -110, -79, -100, 109, -84, 63, 31, 110, 56, 87, 59, 55, -11, -27, -122, 62, -83, -43, -81, 18, -32, 97, 69, 40, 66, 69, -126, -106, 125, 32, 58, 104, -125, -6, -106, 35, 65, 91, -110, 12, -18, -42, 94, 1, -87, -58, 79, -94, -80, 106, 2, -38, 112, 123, 122, -122, -24, -55, 103, -15, 27};
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
    msg.setTimeStamp(0.7664271046236865);
    msg.setSource(14860U);
    msg.setSourceEntity(80U);
    msg.setDestination(44946U);
    msg.setDestinationEntity(122U);
    msg.source.assign("QLOPPCKTENDWZMBRFJQWIUCXWGKIKEPSDNFZGAZAVICZPMGYEHAOWHGGPTODASLHWBORCJJQGRKYMVFVCVYTDWVJLWXKFVRQAZKZSNHGJWWNAPJAQYBNCNFDTOSSXBIFBO");
    const signed char tmp_msg_0[] = {-102, -18, -59, 119, -38, 31, 67, 110, -109, 60, -81, -27, -22, 120, -98, 14, -91, -89, 25, -44, -123, -123, -13, 68, 101, 56, -45, -54, -18, 18, -124, 22, 47, -105, -93, 23};
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
    msg.setTimeStamp(0.10410641741820648);
    msg.setSource(44099U);
    msg.setSourceEntity(123U);
    msg.setDestination(49611U);
    msg.setDestinationEntity(111U);
    msg.source.assign("HMQIOWUPEDCSPLMBLBTXSVLCDHQZXXWGCAXIMNLZBXEOSNVBXZUNPPWOWFYDA");
    const signed char tmp_msg_0[] = {72, -47, 51, -68, -52, 26, -103, 22, -51, 37, 89, 67, 79, -72, 41, 119, -66, 41, 27, -69, -35, -6, 26, -108, -7, 122, -73, 28, 126, -6, 99, -72, -77, -16, 82, 56, -87, -48, 23, 2, -28, -74, 61, 123, 8, -51, 10, 77, 31, -19, -33, -107, 77, -79, -20, -30, 48, 44, -31, -107, -51, -62, 6, 59, -29, 106, 51, -10, 34, -24, -95, -121, -111, 95, -124, 92, 101, 53, -115, -104, -28, -119, -125, -85, 90, -39, -9, 16, -24, -110, 17, 119, -56, -71, -33, -57, 19, 6, 103, 79, 107, -128, 56, -6, 86, 114, -69, -86, 51, -68, 8, 72, 2, -61, 69, -28, -27, 35, 0, -127, -104, 112, 94, 48, -72, -91, -92, -18, -114, 81, 42, 37, 118, -81, 99, 83, 90, 123, -20, -39, 13, -105, -8, -69, -33, -53, 96, 82, -4, 112, 74, -17, 99, -69, 13, 120, -55, -14, 116, -82, 2, -115, 21, -7, -44, -5, -39, 124, -111, 120, -105, -19, 79, -61, -26, 17, 78, -70, 86, -106, 97, -61, -73, -123, -114, -117, 12, -112, 96, -124, 60, 47, 52, 38, 119, -83, -92, 75, 122, -4, 89, -21, -110, 75, -95, -100, -47, -77, -23, 28, 27, 6, -6};
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
    msg.setTimeStamp(0.00858267454328454);
    msg.setSource(61851U);
    msg.setSourceEntity(223U);
    msg.setDestination(60269U);
    msg.setDestinationEntity(16U);
    msg.source.assign("NFGMCPGXKBIQJCMZNSQLTZHEUMVWOYOZWLOBBAMVMBMGZAPJPSOKBBABXLTP");
    const signed char tmp_msg_0[] = {66, -106, -114, -89, -27, -88, 60, 90, -7, 0, -113, -99, -107, -90, -123, -126, 0, 56, 81, 92, -123, -11, 120, 0, 118, 63, 106, 111, -76, -25, 38, -86, -87, -92, 13, 6, -106, 121, 35};
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
    msg.setTimeStamp(0.07819113550013412);
    msg.setSource(20962U);
    msg.setSourceEntity(229U);
    msg.setDestination(19718U);
    msg.setDestinationEntity(251U);
    msg.seq = 441361523U;
    msg.state = 57U;
    msg.error.assign("URPGZMNCZJZURLTZVJPDCPUNQJHDYTHOCZKJHRZLNMLTSPKUYEDFPFQRREENTVAFUYSLXI");

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
    msg.setTimeStamp(0.4356687647846732);
    msg.setSource(35170U);
    msg.setSourceEntity(125U);
    msg.setDestination(18876U);
    msg.setDestinationEntity(72U);
    msg.seq = 476641081U;
    msg.state = 144U;
    msg.error.assign("BEMVGZOYMTVULUVOMENQSCIVWJCPSJPBPEFNWDEHAYGPTFXQNRMTCESWOVJRARNCDYQZOKVLPXRLNTVFXJXCDZSIBIUAADGLXKLARUXAYVMWDHXUGBZYZBPDBCBXHYKPHGJLBZ");

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
    msg.setTimeStamp(0.6643969091443289);
    msg.setSource(29982U);
    msg.setSourceEntity(86U);
    msg.setDestination(7966U);
    msg.setDestinationEntity(220U);
    msg.seq = 10328453U;
    msg.state = 50U;
    msg.error.assign("IFDWPWKWBFANWZRTEFKSVLSDOPZQTUYKKVLOISXJXTRQUIJGPKXWSJRJZQBGFWNGXIOAPQFEZOHLNSHUNXKHTYTBPMDLUJRHJOXOGROIPEMHDVMTZITTCHTFAEPFYUSVLWTPSCRFRJSEJQVXQNBRKNCMVVDZVGRCXDMOBZBCMUIGLXDXJZAGAVEMZMCAQBBVEBCQJQCLHUCWIFOYYYNWSKAMQRHGINFUPEYNDCYEAKMZAY");

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
    msg.setTimeStamp(0.45695381650420985);
    msg.setSource(39990U);
    msg.setSourceEntity(232U);
    msg.setDestination(15772U);
    msg.setDestinationEntity(27U);
    msg.origin.assign("PHMCXXTQFFIDNYEERBSKSYZRJJDEPFYGJEUJNYVLKVVH");
    msg.text.assign("REHSKMOVIQLZBCNVKDQOOSYVDLZZXARPCWBECBOCXUTWFUQKDQMQGUJSLZDWEEPFCYIPIXABNUEQEIWXRGOJPJRZMXXBJIYJOJQUNUULGSPDEPGLBSIUIOQZWFKHDFSFZBKKDVAHLOZZEFHTFTNRSAMYNDCTGYGHQJMFPBSNJMWUTNEGHVMHYXRKRXMBGYAHSJVIATIBYXWMSLEUORPXCDQTVHDVWGWLVVANKRW");

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
    msg.setTimeStamp(0.4431917903913084);
    msg.setSource(28408U);
    msg.setSourceEntity(62U);
    msg.setDestination(38044U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("SNLEUAPMIKFJQXDQKZSAXTEZTYLTEBVONSXPHHNIIYIYRVDNDULEFOBPZSWTYCERHUYDJZLYOAZOXJDRWGWMWCJQGZACPUXNGVVKOHNGOVDQWWADQWKXPQMLKNNFHWAXYMVRRMACSLSUTTGGFLFRJFZPVHOEBAYIBNQMRJGMXTFBGHWLWLEUNZETDBIRRPUOIQOMKFTCKXGPIEHCASPCHKJDBYGVFZQHQPKEYROSXI");
    msg.text.assign("GLUSLMXYHGJBXKCPBOXMYTEFAYMDIAQGZLMIYCUXHTNKFLODDYJTHIQKXGVAJPYBBCTWEJRFUWAXG");

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
    msg.setTimeStamp(0.8355038246624761);
    msg.setSource(9007U);
    msg.setSourceEntity(163U);
    msg.setDestination(18926U);
    msg.setDestinationEntity(82U);
    msg.origin.assign("LPHIJFQOGRCWYYOJGZBKHJHPAQPDAHQNZFIQWTKSRYDMURBMRYOLLTWBVLVFTNUAWWCWHEQYNVXXDQURETTPNOVFICPBRCLHNSFERZTDIJMFKUOZIHCTCURXELQDSPVASD");
    msg.text.assign("NYPFHGHBGGYZPVUIEYJMIFFPVEJOHGXQKYJICDRVXHDJLHTTGXWAPTKZAXWBRHTZRHXZYMRUOWMVQMQVBQBDWGRNZLJXEONNGLQXAIEUAJJCYSIPSQKAUWHSOTUFWAOVVXDEQFVMLMKODUMIMWJLTEKVFNRZUONSXJLSDYICHDNYBGLYECFKIPESNWFMRPSNCABKCCBSBOSPFLTOKAUOCQZBVJCLKHWEPEXDPTAZBGRFCIK");

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
    msg.setTimeStamp(0.7385988590119159);
    msg.setSource(48023U);
    msg.setSourceEntity(247U);
    msg.setDestination(65322U);
    msg.setDestinationEntity(106U);
    msg.origin.assign("AHMDSHRFYUOTFRUCYQBUPEYSQVMEHL");
    msg.htime = 0.16853178926534873;
    msg.lat = 0.4735103293414812;
    msg.lon = 0.6759796135653744;
    const signed char tmp_msg_0[] = {-87, -94, 22, 24, 38, -123, -72, -37, -48, 19, 0, -23, 111, 57, -128, -109, 9, -95, 82, -68, -123, 29, 126, -119, -34, 73, 1, 55, 45, 42, -86, -25, 71, 96, -6, 36, -77, -74, 21, 116, 93, -122, -49, -51, 51, 124, 91, -28, 95, 95, 112, 67, -57, 64, -40, -120, -96, 46, 97, 56, 44, -126, 54, 23, 105, 42, 100, -106, 51, -103, -27, 78, 25, -15, -10, -124, 50, -51, -9, 10, 51, 10, 92, -43, -104, 100, -15, 115, -122, 44, -119, 122, 107, 98, -66, 47, 121, 30, -51, -59, -89, -14, 52, 98, 49, 57, 99, -7, 116, 15, -114, -64, 28, -48, -96, 62, 81, 74, 87, 56, 62, -64, 32, -35, 125, -1, -38, -13, -42, 53, -113, -82, 82, 66, 52, -87, -88, -45, -98, 63, -71, -114, -101, 90, -84, 8, 7, -81, 95, 69, 55, 46, 60, -121, 69, -20, -33, 115, 109, -38, 105, -60, -28, -120, -48, -84, -114, 33, 98, -95, -38, -21, -106, 95, 65, -90, 30, 0, -38, -116, -111, 41, 6, -53, 55, -28, 75, 120, -59, -15, 83, -78, -118, -66, -45, 1, -22, 45, -36, 82, 31, 17, 75, 0, -35, -58, -67, -10, -21, 48, -18, 119, 4, 107, 78, 82, -69, 64, -125, -72, 23, -60, 47, 66, 47, 39, -61, 10, -124, 115, -17, -44, -93, 100, -4, -113, 60, 65, 23, 37, -121, 92, 108, 116, 107, 14};
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
    msg.setTimeStamp(0.5917760645988459);
    msg.setSource(18201U);
    msg.setSourceEntity(178U);
    msg.setDestination(7211U);
    msg.setDestinationEntity(254U);
    msg.origin.assign("TXATVEWCCUTAHOGPAIPGGIHKYVBHDTCQHKFPBPECNQLXXOUMDDEWIWFHZCJHYNSSKLSAYLSKGZJNGOBSWRCEBJWMNAIQFKSWTHUCVNKUFHROIXFMIYX");
    msg.htime = 0.34424467295081806;
    msg.lat = 0.13601425369482922;
    msg.lon = 0.8385295560214836;
    const signed char tmp_msg_0[] = {30, -106, 86, -94, 12, 38, -24, 2, -23, -59, 119, -9, 32, -113, 73, 115};
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
    msg.setTimeStamp(0.9574262528194514);
    msg.setSource(53756U);
    msg.setSourceEntity(200U);
    msg.setDestination(54175U);
    msg.setDestinationEntity(156U);
    msg.origin.assign("IGDSYEBPAHQMZHTIPMQEUSOIQPWLJEJOYSBGRKCHCJAXQMWUFJNSYBUOPJGCXEBNGZWFCZRLFTKYRMIVGGTFLFYMWEJPIVCOHJUTCGKXCWHTNKOFLVO");
    msg.htime = 0.9273989266579185;
    msg.lat = 0.9713893717958044;
    msg.lon = 0.7710002067240453;
    const signed char tmp_msg_0[] = {108, -52, -128, -61, 106, 27, 110, -42, -81, -18, -86, 104, 118, 71, -32, -128, 112, 39, -8, -82, 17, -81, -16, 108, -95, 4, -82, -111, 125, -104, 62, -122, 70, 44, -28, -58, 84, 105, 122, 100, -47, 16, -28, 101, 5, 9, 31, 94, 31, -21, -81, 38, -56, 110, -8, -114, 120, -106, 78, 26, 84, 54, -96, -11, 44, -68, 111, 81, -27, -17, 4, 41, -61, -54, -16, -37, 67, 77, 103, 60, 106, 67, 59, 111, -29, -90, -75, -115, -90, -59, 51, 118, 31, 65, -42, -96, 82, 80, 4, -49, -97, 96, -39, -61, -63, -81, -114, -63, -43, -44, 113, 71, 97, 50, 90, -103, -72, 20, 112, 56, -85, -61, -96, 41, -31, -55, 121, 43, -26, -66, 37, -10, 116, -114, -96, 31, 54, -88, -94, 123, 18, -67, 36, 110, -1, -90, -44, -97, -87, 117, 0, -80, -54, -74, 120, 126, -86, -24, -31, 94, 4, 105, 94, 80, -15, -101, 112, 100, -117, -73, 33, -13, -118, 107, -79, -25, -65, -81};
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
    msg.setTimeStamp(0.30171846769019917);
    msg.setSource(54780U);
    msg.setSourceEntity(178U);
    msg.setDestination(26851U);
    msg.setDestinationEntity(225U);
    msg.req_id = 12632U;
    msg.ttl = 49284U;
    msg.destination.assign("FCQYETGRPIVSVUZIKKOIMLMJOVHLIHYODRWSRIXOQTJDVNHLSQQXYJXHREOYABYCUUQFCIDFVZJFQZUCJYCNEXGTXIDQIPOCEQEHRYVMIVKWPPBWZKAABVSTGRLUGWDYWQJFAXSPZLMTBSGTADNGKHPHGO");
    const signed char tmp_msg_0[] = {71, -117, -51, 20, -121, -37, -74, 18, -38, 120, -121, 74, 81, -32, 39, 87, 94, 117, 53, 28, 1, -42, 40, 85, -56, -46, 17, -14, -25, -42, 107, -87, 110, -62, -75, 77, -79, 69, -4, 80, 77, -110, 40, 87, 93, 11, 53, 44, 45, 86, -11, -36, 7, -24, -77, -109, -5, 78, 12, -65, 25, 111, -18, 24, -52, 31, 41, -14, -93, 42, -31, 34, 41, -10, 69, -57, -86, -75, -16, -53, 28, 5, 69, -42, 123, -118, -112, -49, 26, 76, -48, 94, 25, -84, 106, -47, -128, 102, -5, -23, 18, 67, -41, -56, 108, -98, -33, 81, -24, 30, 23, 90, 28, -115, -79, -19, -81, 6, 1, 48, 51, -78, 104, 43, -120, 27, -46, 3, 120, -45, -92, -20, -60, -35, 5, 105, -121, 9, 75, 113};
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
    msg.setTimeStamp(0.7299292192155229);
    msg.setSource(56847U);
    msg.setSourceEntity(112U);
    msg.setDestination(36154U);
    msg.setDestinationEntity(112U);
    msg.req_id = 61564U;
    msg.ttl = 55462U;
    msg.destination.assign("MIQCZYWMDFIQMRBJFEKODKIRJQUUAVPBXLEKBNOWYSYTBPBVZDHUKWIZELLZCNEWGLRWTZHGZMXVXPMQBCCBNZKSAWPCCGLYYHHMTGXDYJJPTYFCSWOZAVFBJNVRNSIGOKSPFJOKISZTPCXKMRFRQHAUTQBJIUPZMFSNOFTOJIGQLEJHEEMKGIVYQDHURNQBXAG");
    const signed char tmp_msg_0[] = {-40, 6, 58, 35, -104, -85, -4, -70, -50, 8, -16, 114, -109};
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
    msg.setTimeStamp(0.3495009300456172);
    msg.setSource(60920U);
    msg.setSourceEntity(137U);
    msg.setDestination(27704U);
    msg.setDestinationEntity(240U);
    msg.req_id = 17841U;
    msg.ttl = 12593U;
    msg.destination.assign("CYGBMUGOXINLXZKARTOJZYWGOSXGRLNQSNTJPJHAHLEIMWUMUDINMSIIZMQUVPROCRBLVOQYKVCTVCKDRUTUYPXYKNRABSEJAENJWQXHQZJGZQXLRCSEQWKDQW");
    const signed char tmp_msg_0[] = {-123, 66, -35, -42, -100, -11, -7, 80, -39, 63, -75, -55, 105, -75, -117, -54, -21, 12, 22, -32, -50, -121, -126, -102, -124, -13, -104, 98, 36, 121, 70, 86, -71, 8, -106, -85, -108, 58, 86, 13, -27, -13, -89, -123, 64, 52, -38, 49, 111, -120, 24, 39, 60, 38, 117, -105, 81, 123, 74, -50, -55, 18, 10, -103, 22, -53, 87, -66, 47, 69, -69, 99, -16, 107, 16, 8, -69, 17, -57, 7, 12, -58, -106, 3, 17, -87, 110, -111, 11, -69, 55, -25, 118, -20, -71, -116, -27, 57, 80, -45, 91, -21, 91, -61, -125, 47, 13, -112, -49, 24, -66, 74, 11, 23, 3, -9, -59, -75, -86, -36, -25, 92, -13, -27, -26, -128, 9, 58, 6, -115, 27, 1, -85, -27, -48, -3, -94, 75, 59, 78, -37, 61, 107, 51, -49, 79, -107, 74, -91, -33, -94, -96, -7, 69, -40};
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
    msg.setTimeStamp(0.08905760197808166);
    msg.setSource(30880U);
    msg.setSourceEntity(22U);
    msg.setDestination(48195U);
    msg.setDestinationEntity(92U);
    msg.req_id = 60259U;
    msg.status = 167U;
    msg.text.assign("JWNAYHHSBAVKIACFIDHTZSPTDRNEQGDASYGEALKXIJU");

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
    msg.setTimeStamp(0.5662883923612342);
    msg.setSource(56794U);
    msg.setSourceEntity(162U);
    msg.setDestination(32948U);
    msg.setDestinationEntity(176U);
    msg.req_id = 60469U;
    msg.status = 72U;
    msg.text.assign("VKBZBFUDNOJDRXOZXYCMWJZDWLRCTETPHZPPZUCTTHIQEOPKEOSLKVTSLYAYAYCVMJHUIDMXFVYSWEVAQIOOCRRLJKZBMWQUBHGDUPVDJIXAMMZGXMHIEKTDFDQNQAGRSBNRWXKWYIRCANMTAHNEIFBQAQGPXVCIGMRPEYCYASFOKMGKHQHUCTXKIGPN");

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
    msg.setTimeStamp(0.3583348748858758);
    msg.setSource(42500U);
    msg.setSourceEntity(48U);
    msg.setDestination(29686U);
    msg.setDestinationEntity(0U);
    msg.req_id = 28085U;
    msg.status = 175U;
    msg.text.assign("IYOAEZZWJSRXYEFYLFXLKTUZJNCEBUYSLCWRWPSMBVCKPG");

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
    msg.setTimeStamp(0.6426113996369477);
    msg.setSource(20184U);
    msg.setSourceEntity(183U);
    msg.setDestination(35694U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("TAJZBMCJYHIHKQJSUFACPCOQHRZUPYXLWNSYWAXMKISTRCAJBXGOSDFPKBKNDEIMWDMHYSVFCMZLYNXWPFUYUHDPZOECMNQQROFYEZROTHBBPKNVXPINLRJDQWDSVZKWHIAPVXREJEGVGSEHCNUFJISBEALRXKTVPOQBLRLIALSTKYVZFUNWBDVIB");
    msg.links = 4073620837U;

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
    msg.setTimeStamp(0.0327415851920656);
    msg.setSource(28764U);
    msg.setSourceEntity(190U);
    msg.setDestination(7283U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("BETEJFKOHIOOSIKGRUMOUKMXUCXQVGKUAFWSJWOLAJLSDZBVHLQEYRIDNPTQVDWMTSHLJARGALYVVKFNHWBSCWYUPZSOQLZZUPHOPYSZNTJJBMBTDNEARFTKBGFCIAILLPMZQXIFQREGUKQGUUFMINICGHGEYXOTCQKVZ");
    msg.links = 1657181162U;

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
    msg.setTimeStamp(0.37369809941810284);
    msg.setSource(4952U);
    msg.setSourceEntity(0U);
    msg.setDestination(44145U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("GFBSZRGLDVFYWWOQMRJEUJTJNATSNLRDIJQSYDLOUODSGMQAXOKDAMTZPAKYFXOHJSEYZCEGKEJIRKMJVHIDJUGPSLQIPNHIVRFFPNNXHOQNBARYVXYHYVMKOPTGAGTRXAZTKWLCPSWLWEBRQLMYDWURMQZHHUOODBCUOPLHVTWUSXICYUZLBGSV");
    msg.links = 1934308993U;

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
    msg.setTimeStamp(0.9757897387799568);
    msg.setSource(34026U);
    msg.setSourceEntity(116U);
    msg.setDestination(52248U);
    msg.setDestinationEntity(118U);
    msg.groupname.assign("HHFECHTDTUEYRDOPNHUJCWYMVJPSGIPVEAFHRALXPMRDRDWBLRQZGWOQMBRGRTAYBQOROCVUNCCHFJFKWMZCNZKLIHVNEIEIDFVKQESDJXVIUDXWLFTOBLXBXICNGZAFFXAQBPEBXKQBMMXYGYLZNLUBISJKSPTAXCJNHYCQGODTATUVGZKQSABJOYVAYZKWN");
    msg.action = 222U;
    msg.grouplist.assign("UHAGYASOIMLWLOBEUXIEUZAZNYLXYCSWFPHMDHFCXQIMGOCDZLZNBRPSYZFAJORIWSH");

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
    msg.setTimeStamp(0.5388032770013388);
    msg.setSource(9629U);
    msg.setSourceEntity(69U);
    msg.setDestination(8047U);
    msg.setDestinationEntity(112U);
    msg.groupname.assign("YXXALZYVEKRFSDDDBGGTMYACDJSLOEQHIIWCNJUWTUCYTPJQNACPMKRBDQJPRSSUIZONVBDIJWYIDQNWHOSTGPQOMBEFPEERRLFUXOISZIKSBJFNYELPUTDLTHKZXNLUCTKCFKSOXYMSKGRMGZTDWXBYEXVQTWFBVFLOOZMHCHPVPXZQXZLNDYWJICRAZOMHMGQEGCUFNQRPFELFVHGJAJSNMBAIJCLKMGEOIRVRVPWAVYKXTB");
    msg.action = 35U;
    msg.grouplist.assign("NWPSLFNIMKRKELSDECWUXORDXAUTFBJRJQKACPQFPMQDLJBHCNOPBBVWGBEKBAJJOSEMUH");

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
    msg.setTimeStamp(0.3042974566885779);
    msg.setSource(49615U);
    msg.setSourceEntity(59U);
    msg.setDestination(10662U);
    msg.setDestinationEntity(130U);
    msg.groupname.assign("FFSGZJUEZZHFBUSPWOITRROCFAVSPQPXDNHMGKEYKRGTIWCDQCRHXNUJGCXBPJNDSMBEJBZQAPKKFCYHFLACXUKTRWHDVSCJGCGNIINPOTAEAUSZVWQRKHHGKMTVGOARJIKWQZMXTEWIBEFYCPAVLZOUZYXJHKGFIQPHRLQDNILOTAZKVNIAYDEZVDVUNVYOBSUILEJCYYTSPASWBXWOQXBOTJWRMLPXTMMWFMLGEEDMRQJBV");
    msg.action = 184U;
    msg.grouplist.assign("PFTSUIHKRYBKBBWQACGWOFAKHGAOIMLDONWRUXOSNBRPXEOYJYTDVLLZYNZETHXCCXZIOCSEZVUMGIEVNKESBJHWCALEKFMOVSMPAUMBTAULFNBTVYDKMBCPWIJGGTRSIHKYM");

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
    msg.setTimeStamp(0.2884875118485809);
    msg.setSource(30168U);
    msg.setSourceEntity(5U);
    msg.setDestination(56640U);
    msg.setDestinationEntity(5U);
    msg.value = 0.226832930911259;
    msg.sys_src = 23287U;

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
    msg.setTimeStamp(0.16755169546243853);
    msg.setSource(49521U);
    msg.setSourceEntity(157U);
    msg.setDestination(20278U);
    msg.setDestinationEntity(224U);
    msg.value = 0.2062516601786737;
    msg.sys_src = 39667U;

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
    msg.setTimeStamp(0.9883753655855889);
    msg.setSource(5996U);
    msg.setSourceEntity(20U);
    msg.setDestination(22700U);
    msg.setDestinationEntity(218U);
    msg.value = 0.4180454303552654;
    msg.sys_src = 3602U;

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
    msg.setTimeStamp(0.6953340010577749);
    msg.setSource(17664U);
    msg.setSourceEntity(218U);
    msg.setDestination(47608U);
    msg.setDestinationEntity(156U);
    msg.value = 0.9891686524163634;
    msg.units = 79U;

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
    msg.setTimeStamp(0.11347075131729434);
    msg.setSource(25379U);
    msg.setSourceEntity(254U);
    msg.setDestination(3198U);
    msg.setDestinationEntity(96U);
    msg.value = 0.1635928331886587;
    msg.units = 97U;

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
    msg.setTimeStamp(0.33840546384248915);
    msg.setSource(28262U);
    msg.setSourceEntity(169U);
    msg.setDestination(44715U);
    msg.setDestinationEntity(50U);
    msg.value = 0.22673002870230807;
    msg.units = 248U;

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
    msg.setTimeStamp(0.25199508276843596);
    msg.setSource(44332U);
    msg.setSourceEntity(55U);
    msg.setDestination(20304U);
    msg.setDestinationEntity(27U);
    msg.base_lat = 0.2710131990128676;
    msg.base_lon = 0.30457575740110276;
    msg.base_time = 0.654154637149691;

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
    msg.setTimeStamp(0.5082602419617454);
    msg.setSource(30815U);
    msg.setSourceEntity(0U);
    msg.setDestination(46660U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.6437512265346836;
    msg.base_lon = 0.6771644123562599;
    msg.base_time = 0.8842596349487796;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 52062U;
    tmp_msg_0.priority = -5;
    tmp_msg_0.x = -22343;
    tmp_msg_0.y = 18443;
    tmp_msg_0.z = -8891;
    tmp_msg_0.t = 2557;
    IMC::MsgList tmp_tmp_msg_0_0;
    IMC::SoiPlan tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id = 33913U;
    tmp_tmp_msg_0_0.msgs.push_back(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.3416549505830069);
    msg.setSource(40498U);
    msg.setSourceEntity(87U);
    msg.setDestination(47708U);
    msg.setDestinationEntity(96U);
    msg.base_lat = 0.8860557215916558;
    msg.base_lon = 0.36534143734776037;
    msg.base_time = 0.5246578743798878;

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
    msg.setTimeStamp(0.07331164484133945);
    msg.setSource(25384U);
    msg.setSourceEntity(250U);
    msg.setDestination(13414U);
    msg.setDestinationEntity(225U);
    msg.base_lat = 0.5229239007532407;
    msg.base_lon = 0.1857321316226529;
    msg.base_time = 0.3791933280241554;
    const signed char tmp_msg_0[] = {-42, 6, -60, 16, -91, 2, -116, 43, -128, -56, 36, 4, 89, 53, 24, 59, -56, -13, 21, 126, 6, 44, 90, -74, -54, -38, 65, -79, -110, 46, -32, 38, -14, -77, 122, -87, -35, -37, -76, -87, 119, 38, 68, 48, -5, 100, -103, -24, -14, 10, 46, 74, -125, -81, 78, 108, 82};
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
    msg.setTimeStamp(0.5612651663206626);
    msg.setSource(60495U);
    msg.setSourceEntity(221U);
    msg.setDestination(32083U);
    msg.setDestinationEntity(137U);
    msg.base_lat = 0.5034943626528167;
    msg.base_lon = 0.4799842532650468;
    msg.base_time = 0.32542207648544164;
    const signed char tmp_msg_0[] = {-79, -118, -62, 23, 66, 68, -90, 102, -56, 7, 103, 27, -9, -89, 14, -15, -34, 23, -37, -12, -16, 11, -35, 64, -3, -125, 88, -76, -97, -56, -3, 34, 82, 75, -27, -74, -106, 75, 97, -58, -34, -84, 17, -109, -62, 30, 4, -75, -44, -40, -108, 34, -12, 13, 122, -34, -111, 61, -65, -68, -112, 26, -2, 69, -25, -78, -115, -9, -124, -59, 12, -49, 117, -34, 27, 24, -122, 76, 67, 98, 39, -29, 43, 17, 61, -119, -38, 75, -71, 53, -95, 64, 57, -26, -5, 97, 3, -26, 122, -28, -112, -51, -35, -107, 35, 48, -105, 61, 14, -62, -102, 12, 42, 96, -74, 97, -7, 113, -80, -15, -79, 124, -5, 65, -68, 90, 36, 124, -100, 90, 69, 11, -97, 50, 93, 53, 83, -47, -84, -10, 68, 21, -85, -75, -102, 79, 17, -46, 22, -110, -76, 92, -88, -103, -86, 19, -118, -34, 80, 4, -66, -1, -119, 65, 26, 11, -111, -109, 71, -115, -21, -27, -119, 9, 4, 57, 27, -5, 54, 95, 41, 68, -67, 31, -81, -63, 113, -72, 3, 71, 7, 113, -76, -88, -58, 53, -122, -17, -87, 16, 112, -111, -50, -89, -16, 117, -117, -16, 91, -66, 106, 97, -24, 14, -27, 4, -94, -22, -116, 74, -108, 96, 26, -35, -19, 16, -63, -71, -122, 114, -81, -78, -31, 121, -116, -30, -12, -104, -41, 22, -85, -80, -19, -75, 43, 42, 47, -10, -27, -120, 95, -22, -16, -66};
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
    msg.setTimeStamp(0.2838781222788507);
    msg.setSource(18520U);
    msg.setSourceEntity(148U);
    msg.setDestination(62894U);
    msg.setDestinationEntity(38U);
    msg.base_lat = 0.7023016146552546;
    msg.base_lon = 0.6390383117547418;
    msg.base_time = 0.9024792487959136;
    const signed char tmp_msg_0[] = {100, 40, -24, 63, 25, 26, 32, 1, -90, 89, 93, 84, -92, -125, -97, 67, 39, 20, 80, -127, -42, -121, -16, 62, 52, -48, -105, 95, 61, -23, 112, 125, -123, 55, -76, 3, -16, 124, -101, -98, 60, 112, 71, 41, -90, -56, -39, 71, 124, 37, 54, -25, -55, -98, -22, 110, 28, 92, 114, -59, -118, -11, -60, -125, -49, -26, -93, 115, -97, -51, -40, -77, -100, 110, 92, 38, 77, -90, -39, 102, 13, 50, -31, 80, 9, 59, -68};
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
    msg.setTimeStamp(0.5242698451674532);
    msg.setSource(40891U);
    msg.setSourceEntity(138U);
    msg.setDestination(56590U);
    msg.setDestinationEntity(211U);
    msg.sys_id = 54578U;
    msg.priority = -61;
    msg.x = -5739;
    msg.y = 29635;
    msg.z = -22868;
    msg.t = 438;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 124U;
    tmp_msg_0.frag_number = 82U;
    tmp_msg_0.num_frags = 229U;
    const signed char tmp_tmp_msg_0_0[] = {-91, 120, 7, 123, -13, 103, -101, 66, -50, 44, -100, 33, -127, 23, -13, 42, -61, 12, -26, -12, -8, -69, 92, 93, -110, 109, -98, -50, 120, 21, -45, -5, 42, 84, -37, 122, 40, 81, 113, 83, -95, 33, -15, -67, 64, -42, 6, -116, -1, -69, 28, -122, 46, -127, -98, 41, -52, -96, -1, 99, 113, -118, -108, 119, 100, -45, 18, 73, -108, 33, 78, -97, -87, 115, 119, 89, 122, 110, 72, -99, 68};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.23265226819210127);
    msg.setSource(59650U);
    msg.setSourceEntity(46U);
    msg.setDestination(64589U);
    msg.setDestinationEntity(162U);
    msg.sys_id = 19272U;
    msg.priority = 111;
    msg.x = -489;
    msg.y = -3888;
    msg.z = -5378;
    msg.t = 19995;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 40159U;
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
    msg.setTimeStamp(0.17731534029593965);
    msg.setSource(51283U);
    msg.setSourceEntity(230U);
    msg.setDestination(35279U);
    msg.setDestinationEntity(240U);
    msg.sys_id = 63075U;
    msg.priority = -126;
    msg.x = 9263;
    msg.y = -12559;
    msg.z = -6804;
    msg.t = 9933;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.44801703844410445;
    tmp_msg_0.time_next_service = 0.7955922491209834;
    tmp_msg_0.time_motor_next_service = 0.7942124777395047;
    tmp_msg_0.time_idle_ground = 0.08375672770758746;
    tmp_msg_0.time_idle_air = 0.6442945854968576;
    tmp_msg_0.time_idle_water = 0.07755087584433062;
    tmp_msg_0.time_idle_underwater = 0.8698802050686809;
    tmp_msg_0.time_idle_unknown = 0.07543756331597429;
    tmp_msg_0.time_motor_ground = 0.7368187046308925;
    tmp_msg_0.time_motor_air = 0.5260622075795547;
    tmp_msg_0.time_motor_water = 0.5103561808344672;
    tmp_msg_0.time_motor_underwater = 0.18515788776610909;
    tmp_msg_0.time_motor_unknown = 0.166561200865887;
    tmp_msg_0.rpm_min = -22238;
    tmp_msg_0.rpm_max = -12337;
    tmp_msg_0.depth_max = 0.46670037130111863;
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
    msg.setTimeStamp(0.07761786251196645);
    msg.setSource(13438U);
    msg.setSourceEntity(47U);
    msg.setDestination(40361U);
    msg.setDestinationEntity(231U);
    msg.req_id = 48682U;
    msg.type = 73U;
    msg.max_size = 44256U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.02266757863964508;
    tmp_msg_0.base_lon = 0.7153720247139623;
    tmp_msg_0.base_time = 0.5135568205972711;
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
    msg.setTimeStamp(0.903388681051937);
    msg.setSource(42401U);
    msg.setSourceEntity(63U);
    msg.setDestination(10925U);
    msg.setDestinationEntity(49U);
    msg.req_id = 26999U;
    msg.type = 164U;
    msg.max_size = 64348U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.60974624214112;
    tmp_msg_0.base_lon = 0.8719815057679539;
    tmp_msg_0.base_time = 0.09777213702705867;
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
    msg.setTimeStamp(0.8623166836466938);
    msg.setSource(2680U);
    msg.setSourceEntity(157U);
    msg.setDestination(61253U);
    msg.setDestinationEntity(69U);
    msg.req_id = 22708U;
    msg.type = 45U;
    msg.max_size = 39402U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6361692274637185;
    tmp_msg_0.base_lon = 0.4568240924599303;
    tmp_msg_0.base_time = 0.41252228782676326;
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
    msg.setTimeStamp(0.6638248480634784);
    msg.setSource(57565U);
    msg.setSourceEntity(77U);
    msg.setDestination(48165U);
    msg.setDestinationEntity(239U);
    msg.original_source = 12761U;
    msg.destination = 42524U;
    msg.timeout = 0.9681371991818134;
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 13U;
    tmp_msg_0.mnames.assign("LPXOGQSVNCSQBRMWMDPZHJJTYZUIFOWCPYUFUKIBVHIPVJRDTHCXUBVPYAYWSQDCNAQSTPOM");
    tmp_msg_0.ecount = 27U;
    tmp_msg_0.enames.assign("MKHROZXJGGDITUMBEFOXLWLTMLWKSRMQJNTVSBEEOLFICZEKPXWJMVJYCWMRJSBWVAOVPEAGWDVULMYUPNFSGYBHCOYFAHPPILFQOFTKGCDHUFODYHJDQWHYKUVIYSHNNCYPNH");
    tmp_msg_0.ccount = 151U;
    tmp_msg_0.cnames.assign("DFIJBLEXDOZTDSDPQLAZAGOBOTPQEOBCIVVUOMRRCDUSUFQIMRCLKSEZPPFUTAONYTWVLFCLATUBYJLPJNWMITGIKSXBQXNWDYOQMGHNTIEBVMWXGASRLVGINGTHGRGWKUUZXRZDOXYQWYOZZSYHDDYBDTIJUWZCEPAKFPRMJPWBYFNENYIEJJWEMCEUPKVTSXECKHFJVCVXMYHQKGRXHNQGCKJFLAMN");
    tmp_msg_0.last_error.assign("HVOQAYKPBOUOFDKE");
    tmp_msg_0.last_error_time = 0.6164107025480344;
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
    msg.setTimeStamp(0.5847984485477025);
    msg.setSource(61864U);
    msg.setSourceEntity(168U);
    msg.setDestination(16810U);
    msg.setDestinationEntity(47U);
    msg.original_source = 7640U;
    msg.destination = 61097U;
    msg.timeout = 0.21507465110287127;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LSAWGMPIRZFJVCQQWNKIZNLGFXWVVNLHCORYPEIJBCIDNDMNJBLLRUQKOMBMGOBYGNGURZTXEHEYEQZPDLRWZHSTUZOYLKMIKWJDDJXPQFZMGOPCJDOPAVTHNPEYUSFJHQYZVRYLESSSNHVATVYFNIAGFSIZKFTXDTMIKBKXVCTOWOBOKWHBNEWPUBREDGGEWQYMAXJRSPTOLCTBQDCMJARDXFHUAUCCJUITVFAXXASI");
    tmp_msg_0.feature_type = 132U;
    tmp_msg_0.rgb_red = 33U;
    tmp_msg_0.rgb_green = 21U;
    tmp_msg_0.rgb_blue = 254U;
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
    msg.setTimeStamp(0.708358794024526);
    msg.setSource(8651U);
    msg.setSourceEntity(173U);
    msg.setDestination(54695U);
    msg.setDestinationEntity(24U);
    msg.original_source = 32503U;
    msg.destination = 5314U;
    msg.timeout = 0.6496813985366265;
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 40196U;
    tmp_msg_0.destination.assign("NVUFKJDXMFWXMCXXYVUPRGMECCAJJYTIOPONOABGYYCXUUWDUKWHWKLGTQIDXHISCNRGJBNNFEQFBPMSWLDKUVNENEEHFURZTZGWADYSFRREKBZKIKQTZQGSCFHYGMIZTAVIJCBSHQQHDBVCEMIJASANUANVRPLDDOWUIJGKZSPYAFIDHERWYAPRHSTMVNLBYFBILSASLVPPQZKVXJCMBDOYWFPLLLGTGLT");
    tmp_msg_0.timeout = 0.7024878885901793;
    IMC::ScheduledGoto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.arrival_time = 0.7755337544088481;
    tmp_tmp_msg_0_0.lat = 0.5476573735939109;
    tmp_tmp_msg_0_0.lon = 0.9756135411213438;
    tmp_tmp_msg_0_0.z = 0.11886128800153295;
    tmp_tmp_msg_0_0.z_units = 195U;
    tmp_tmp_msg_0_0.travel_z = 0.8965180425802027;
    tmp_tmp_msg_0_0.travel_z_units = 148U;
    tmp_tmp_msg_0_0.delayed = 102U;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5797597421782329);
    msg.setSource(20096U);
    msg.setSourceEntity(102U);
    msg.setDestination(62967U);
    msg.setDestinationEntity(58U);
    msg.type = 45U;
    msg.comm_interface = 49095U;
    msg.model = 15669U;
    msg.list.assign("GWBMLUDRYQWHXCJZRSQSPEGKRYGJSEUDOFKPKRSAQLQTDSILQIWDPGRPAPKIQBHOOWTXZMNTCYUYTHFQWXTMPJTENWCOPBYWIOGVOFYDPTZWHQMLJCUZNIZGLVHJJEVRDOXHARCDBTVRGGODZYBSVYBHCKBINFMLZPXEAUSCANJZTYVSGHAHUFVAYHKCMAMSMLXFKEAXULB");

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
    msg.setTimeStamp(0.3684427823142925);
    msg.setSource(29330U);
    msg.setSourceEntity(77U);
    msg.setDestination(36882U);
    msg.setDestinationEntity(230U);
    msg.type = 101U;
    msg.comm_interface = 27418U;
    msg.model = 58471U;
    msg.list.assign("KFYQVHSLDJEZFRJSPLZNHFVNZSJILDLULVYKLPHPOIBHYQUFJTLRPNQACDXYMYDAZOBMJTCOUDBWTABWUZXIDNFOSAXPRMPGEHCTQBWQBUAWFOMVKMEWRBXSRXTGSGMCIQJCNNYHIL");

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
    msg.setTimeStamp(0.5800582506552994);
    msg.setSource(16030U);
    msg.setSourceEntity(77U);
    msg.setDestination(54733U);
    msg.setDestinationEntity(38U);
    msg.type = 84U;
    msg.comm_interface = 46718U;
    msg.model = 17661U;
    msg.list.assign("TGRKTMAKXKIEXGROMYOSMLXLAJQRVEVZEEBESXIUDIFTYVDRNLPCFDGHYODLEHSEAOFPCUQRELGWJKDATXXSXZHUPVWCSFSQZVDYYEZGAOKALB");

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
    msg.setTimeStamp(0.6921838697716596);
    msg.setSource(19359U);
    msg.setSourceEntity(59U);
    msg.setDestination(7422U);
    msg.setDestinationEntity(225U);
    msg.type = 95U;
    msg.req_id = 2830512503U;
    msg.ttl = 24341U;
    msg.code = 110U;
    msg.destination.assign("LEZFJKJIAJXDKTHGCMWLNFZAQWISUIYYXUDSDBHMXFEPNVNUZQOUNRPLEJTJJOMNHNAYFOHIQLDCSPYXGDVGEXJVQGIWMBJNMAMBQFMBGKRQLOHYQKZFGKXKSGVZSIUPNVDMXDQLRUXLOXJKWHBSYFSEEZRAKEFAFEWCMRRTVTCIHCEBAOPRRIRSIUYCZPO");
    msg.source.assign("JIGUIOHOITILBZUOYFZEIGDBCQOYDAPRKFPXYNNXENYBSVDKUGKHVWCCYMLPDGAMBLXVDNWKJCSRGCXRALJTMENBAPMIALSXTKWJUHNOROTVQBESSKXSWQRRGYIKJEFROXENPOFTLCLKKRJHJGZJUHPWMUBYAJAVLHPPPTQWFEQFVMZKXVWUZHDNTWCVEARFEZGVBFDZPMMTDXRBGSUJZFOETNUYGCINQQQAALB");
    msg.acknowledge = 91U;
    msg.status = 99U;
    const signed char tmp_msg_0[] = {-24, -17, -55, -127, 116, 99, -15, -12, -28, -99, -31, -44, -127, -105, -9, 3, -11, -67, 60, -114, -113, 31, 20, 87, -70, -39, -124, 57, 102, -17, -70, 63, -38, 44, -7, 19, -20, 39, -93, 20, 114, -9, 2, 65, 38, -119, 15, -24, -43, 48, 101, 37, -1, 95, 124, 25, 71, 38, 112, -89, -37, 13, -59, 14, 124, 50, 106, -52, 35, 5, -63, 89, -119, 113, 13, -32, -32, 61, -59, 66, 5, 114, 26, -100, -37, -7, 13, -17, 92, 32, 106, 103, -125, -127, 114, 74, -77, -92, 62, -68, -29, 62, 89, 57, -56, 102, -93, 115, -104, 89, 85, 3, -115, 114, 16, -68, 92, 103, 54, -94, 79, 75, 0, -51, -115, -20, 18, -73, -94, -64, -25, -9, 37, 80, -57, 39, -68, 39, 110, 80, -20, 9, -94, 46, -127, -70, -123, 27, 26, -93, 27, 27, -29, -103, -72, -31, 115, 5, -70, 114, 6, 51, -60, 7, -49, -126, 65, 15, 21, 41, 84};
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
    msg.setTimeStamp(0.9564192135382592);
    msg.setSource(9586U);
    msg.setSourceEntity(118U);
    msg.setDestination(63031U);
    msg.setDestinationEntity(243U);
    msg.type = 59U;
    msg.req_id = 3250714765U;
    msg.ttl = 4622U;
    msg.code = 27U;
    msg.destination.assign("HXTLRCVSFYDQWFLKQNJBSCHTHDPUOKBDFDJMQXORLWNVITNILJJDYOUZHVMXZDAKGWVGZRKQTECBJULBBKHQBDXCXGMAWKIGIFFPXDMABFRQNWYTVXJODVMPYTUNZRHGSNCXXLUWZMATMWIHSUBOVENZ");
    msg.source.assign("IZROCWBPVIAFDKPHTUGCWBQKFRJQXNYCECHBMJTKBAHPEGXJGPCSLTMFOZXVWWVVREQEMLNOMRIKNPIIWEJJTZSLOVCAKHOWAHZKURKRKSPUQEMABWIGLXZBIQZUTNFZQUYHXCCUFVVAVFLXABXVNMYZCIDXRFHLZONYXTDJLGJKTPLMMSDUDBSPC");
    msg.acknowledge = 159U;
    msg.status = 198U;
    const signed char tmp_msg_0[] = {106, -37, -15, 117, -21, -25, 114, -8, -97, -102, 37, -65, 106, 58, 85, 48, -8, -110, -89, -23, -71, -89, 7, -126, -62, 91, -12, 43, -57, 48, 46, 36, -72, 54, 21, 33, 126, -33, -81, -12, -79, 43, -90, 8, 121, 51, -45, -56, -70, 114, -96, 1, -96, -50, -114, -86, -119, 64, -15, 70, -62, 64, -44, -45, 61, 106, -40, -55, -116, 21, -58, -120, -1, 91, -83, 23, 104, 96, 85, 21, 52, -8, -93, -7, -37, 98, 59, 102, 101, 101, -50, -33, 2, -79, 5, -34, -29, 65, 62, 119, 0, -94, -103, 42, -36, 78, -94, 6, -87, -34, 49, -74, -48, 19, -14, -43, 80, -73, 62, -124, 85, 44, 107, -103, 68, -48, -128, 40, -95, -125, -77, 18, 33, -85, 121, 71, -109, 83, -113, 56, 42, 2, 112, -84, -94, 85, -34, -16, -39, 16, -65, -54, 85, 92, 64, 15, -39, 65, 82, 93, -12, 14, -43, 66, -30, 83, 32, 60, 77, -23, -73, 120, 66, 121, 102, -105, -111, -95, -14, -106, -106, -114, -122, 43, -74, 61, -124, -46, 54, 21, -72, -24, 69, -103, -110, -12, 14, 31, -16, -126, 21, -18, -36, -72, -44, -37, 8, -31, 49, -14, -99, -77, -104, -61, -9, -104, -45, 21, -112, -119, 35, 70, -7, 77, -51, 68, -24, -50, 93, 12, 64, -28, -93, 111, -89, 47, -106, -21, 72, 81, -68, -127, 67, -117, 3, -90, -32, 50, -88, 99, 96, 60};
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
    msg.setTimeStamp(0.9836530782308319);
    msg.setSource(39659U);
    msg.setSourceEntity(68U);
    msg.setDestination(8771U);
    msg.setDestinationEntity(142U);
    msg.type = 140U;
    msg.req_id = 77102582U;
    msg.ttl = 12156U;
    msg.code = 46U;
    msg.destination.assign("JKEPWLPGHDPGEODHXWFNDBFCOIPXTSBEPBLPTMRSFRCITGZKRTMZDCCVQUDIVSSYQMTUSIJLLYYHIAUWEDGOCYJURXMUHKQTOLEKQASAVLKYWALKOFJFBSHWHVZPLFDVNZJMHTGLGMUXECLUNRJCFAHHNCAQAEXGYWAEZAWQHOQMBPFFOZUOOTPNQIZAJZMDKKIJCXDVZGYUYWSYPBBBBFIVJQNX");
    msg.source.assign("ROYFAEQZUPURUTVOIGNTYOESRFJSXDGOTLS");
    msg.acknowledge = 19U;
    msg.status = 161U;
    const signed char tmp_msg_0[] = {-83, 44, 85, -88, 63, 76, -83, -106, -76, 96, -78, 14, 20, 50, -57, -40, -27, 16, 63, 72, -96, -123, -120, 100, -92, -24, 30, -111, 28, -9, -86, 69, -67, 43, 121, -97, -69, -32, 42, 80, -69, 67, -9, 34, 41, -10, 54, 35, -37, 64, -128, -120, -104, 125, 13, 12, 17, 123, 14, 84, 115, 45, 110, 22, -4, 78, 45, 44, 113, 53, 28, 37, -80, 68, 36, 13, -125, 3, -116, -84, -116, 55, 118, -99, 26, -2, 77, -19, -59, 46, 52, 124, 56, 79, 63, 122, 85, 49, 42, 55, -69, -53, 110, -84, -47, 6, 5, 99, 108, 122, -87, -73, -126, 25, 88, -105, -13, -119, -90, -26, 30, 32, 13, 30, -90, 44, 79, -119, -42, 18, -27, -118, 5, 31, 77, -101, 49, 113, -62, 106, 122, -19, -69, 8, 67, -91, -67, 94, -7, -62, -2, -14, -90, -3, 92, -5, 41, -8, 79, 74, -30, -22, 58, -81, -19, 33, -55, -78, -99, -77, -22, 118, 26, -48, 8, -33, -90, -102, -8, 0, -73, 36, -8, -37, -66, -48, 40, 24, 45, 86, -87, -28, -20, 22, 81, 105, 14, 38, -67, 46, 34, -87, 27, -88, 19, -52, 0, -43, -17, 118, -22, 35, -87, 77, 24, 78, 71};
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
    msg.setTimeStamp(0.8419202379764474);
    msg.setSource(44232U);
    msg.setSourceEntity(181U);
    msg.setDestination(47326U);
    msg.setDestinationEntity(27U);
    msg.id = 6U;
    msg.range = 0.07269806322165107;

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
    msg.setTimeStamp(0.8410586455390535);
    msg.setSource(15794U);
    msg.setSourceEntity(163U);
    msg.setDestination(38544U);
    msg.setDestinationEntity(17U);
    msg.id = 105U;
    msg.range = 0.04900125723347548;

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
    msg.setTimeStamp(0.47316340188491235);
    msg.setSource(11309U);
    msg.setSourceEntity(42U);
    msg.setDestination(50369U);
    msg.setDestinationEntity(137U);
    msg.id = 201U;
    msg.range = 0.5903914585387667;

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
    msg.setTimeStamp(0.1470074740458347);
    msg.setSource(22113U);
    msg.setSourceEntity(237U);
    msg.setDestination(57737U);
    msg.setDestinationEntity(192U);
    msg.beacon.assign("TXXZQVBZXVPSTWOVLBFINMDOEIQEIPHHERMQBMDZPCLKXQVJHTLNRPMBXIFNHNZOEVYKTYOYJMRXZKSKQECTAJEUHIYLNLDMUFDMJPPTFNKAYWAMCSFUKWOBGEUNBJVGPEAZHCRAJWRUIIOUGYYLPDKVCVLJCWYBABLZHIHKBOESIRFXAWKQMWZTJBFUUMRSFONWSDRGWGCNHQLZADGNFJTDDZRKFXJYOSDCOUPIRGQSVQXPCGEYAT");
    msg.lat = 0.7739057001056207;
    msg.lon = 0.3027685091271697;
    msg.depth = 0.3059295157904225;
    msg.query_channel = 53U;
    msg.reply_channel = 179U;
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
    msg.setTimeStamp(0.23335060094083593);
    msg.setSource(55369U);
    msg.setSourceEntity(152U);
    msg.setDestination(44644U);
    msg.setDestinationEntity(172U);
    msg.beacon.assign("MVQHOPIOALTKDSTHDDZLDHYZDNKYBSOXLXVDDHBKQIFPPULCPJMGRGQBMFFHUIZJFNRCLQFEBUNRWIEUWCPWOWKAPGRJISEYZLDASVZXKCTBHTJOXSQGWVPYMKYYQGNZEJCA");
    msg.lat = 0.004441009406333518;
    msg.lon = 0.34043883974377354;
    msg.depth = 0.7912272563608796;
    msg.query_channel = 130U;
    msg.reply_channel = 184U;
    msg.transponder_delay = 212U;

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
    msg.setTimeStamp(0.9791632177639527);
    msg.setSource(42506U);
    msg.setSourceEntity(17U);
    msg.setDestination(6546U);
    msg.setDestinationEntity(17U);
    msg.beacon.assign("TGZNJKJOCMWWBDQPQJSYELELHBYQKSBIELTOMPXOUUZAXLKTQVAGDBNTMKHHPMERUIXTDXHZTAUIKSGSDYREWEERAXFLPBHNMONKWOGKHJOSNRAQCSZBEJUNVWJGMUQRFSXVWIAQANOVKXIALYOCPWHDGHFEJGSLPWCAUADNYOFTFFYVPRZUBUDJMYTXQGRTPIBCCIQRMZBSHBCWUIGKFFVTJ");
    msg.lat = 0.477210355144185;
    msg.lon = 0.28509376834170597;
    msg.depth = 0.43596056037377406;
    msg.query_channel = 166U;
    msg.reply_channel = 9U;
    msg.transponder_delay = 165U;

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
    msg.setTimeStamp(0.6393984288458197);
    msg.setSource(1093U);
    msg.setSourceEntity(154U);
    msg.setDestination(12074U);
    msg.setDestinationEntity(94U);
    msg.op = 17U;

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
    msg.setTimeStamp(0.6995540386045224);
    msg.setSource(56740U);
    msg.setSourceEntity(73U);
    msg.setDestination(60313U);
    msg.setDestinationEntity(135U);
    msg.op = 6U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WOVZYZIAFPEMRUWFPPLOZQZWAMKYLGUVCTFVCWGHJNOSKETSCCRRNMUWNTMSDPETMLQMVGALGFEBHKOSYBWHGDASITCUAPWYXHDZSQSNEEFICGFZOYHTELHQBNBBWIGTMQXFZFOXRMAJXZUCB");
    tmp_msg_0.lat = 0.8240428322831843;
    tmp_msg_0.lon = 0.9840093294519845;
    tmp_msg_0.depth = 0.2651875829988738;
    tmp_msg_0.query_channel = 177U;
    tmp_msg_0.reply_channel = 15U;
    tmp_msg_0.transponder_delay = 184U;
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
    msg.setTimeStamp(0.931396459033621);
    msg.setSource(44828U);
    msg.setSourceEntity(71U);
    msg.setDestination(29003U);
    msg.setDestinationEntity(70U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.9204654312960315);
    msg.setSource(59428U);
    msg.setSourceEntity(188U);
    msg.setDestination(16407U);
    msg.setDestinationEntity(141U);
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 34U;
    tmp_msg_0.entities.assign("QATRPSOLCQVGYLRUFATJZBMPOPXJCNPMWOFABESVFBIGSAMEPCHZXJKPNEOBTMFDFGMNKQDEEBNOTFSHWMDJHSTMLRNMZBWIFKJUSTDTKQNTJLHXRKAYIASQIQDHNGUDRXUGHUZXOXHEVRZAFSRXWWAZZQMUFNBVNDTPGWLLCJYY");
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
    msg.setTimeStamp(0.28284886944834764);
    msg.setSource(49513U);
    msg.setSourceEntity(100U);
    msg.setDestination(13171U);
    msg.setDestinationEntity(32U);
    IMC::SimAcousticMessage tmp_msg_0;
    tmp_msg_0.lat = 0.6698077888172635;
    tmp_msg_0.lon = 0.8769823622386574;
    tmp_msg_0.depth = 0.35690195374890965;
    tmp_msg_0.sentence.assign("ELTGDWRABEVXDJPVWKGKCYLQBPQKKLCIGJVCIOEGGLQUNWTZUPMEMMYCHKKROFBHKIENFQFDNCHNESDJMKLZYXIAPPUTAHPTAMVBFZRRMRNPDMSCFEFWYJSJYWHYZXQLTDPPZSROZMUSXVVYXRDBDSAQARWDHVJDIFAZTHZVTEOAIUCXCOMUBKLQOHFYOCHMSWEXIIGVJNSRSGFHGLOBQJIQLWNN");
    tmp_msg_0.txtime = 0.16694022445271484;
    tmp_msg_0.modem_type.assign("JNTSRONFOVLXKDRXPZKUBUITBIRBZJGFWXNCVARYPFBVTEUOVCNACHPHIEKJUYQOUQFWRCPPQBAVKGEQDZXSHIJEQXPKONJWLTCDJOEXLZWTSDEDRHJKMLCDYMWZTCHFOUMSRHBAIPWMLMADVVLZRQSYGSVKHYJPIGNTMERIOVILFZYXGAZFFDBTPITSXLYM");
    tmp_msg_0.sys_src.assign("ZSBQXBDKMNHZFZTYJQXPTBJJIZOFPIWCNXGPCNBVFMWKCEVAMJWPOLLHXTHQIGACEKAOAHGURQTRZFCKKYYWFDDWAPLEYUVLSEEKGUVIPHNVYSHSAFHLBXZJOIPOBYQGCENRTOVSVJS");
    tmp_msg_0.seq = 64772U;
    tmp_msg_0.sys_dst.assign("MBOBNRDNYBUCAWPJARHWKTDXAYBDAHCHVNIEPXISONYSPPBPJLDHUURWPGWVIBIOYFONXJGMQLTSKKARIXURZPNSZVQWHJMCJHZUFUBLLMYFZJQALSGTCOSDGSHFF");
    tmp_msg_0.flags = 33U;
    const signed char tmp_tmp_msg_0_0[] = {-23, -34, 9, 45, -80, 73, 38, 69, -87, 104, -74, -1, -37, 66, 19, 85};
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
    msg.setTimeStamp(0.38854423809198313);
    msg.setSource(60297U);
    msg.setSourceEntity(227U);
    msg.setDestination(14484U);
    msg.setDestinationEntity(174U);
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("MPGDTHLVAZAUFFDDEOLSYNIEVAYLXCTUJQLNLMBOXKPLSJBPOVMWMQBFDTYKENVGWTLWUBWHFFDSIBPGWBERNQCFXQGGNAKHJNHSTHHLQGXMARJPIPRLUUJEDQCYPVISFCPXYWUOVTOAIRMANEYRXMOCHRZZBJTJSCVKTZDKSGHYVNNERXGPIWJVMZIZQEWZSUAKSOFQHXHDCQZUMXZRBXKDGEWBAVSKYROITERIB");
    tmp_msg_0.data.assign("BVKVORAVTXYSZRMQCBAGQOSLAWFEFGPKMTIPZCAWEXXPGCTREPUJHWYKTTCSEYMIKREUGVBIUQGNJQBIHSYCFPODVLGNNIMUXUXSDFVDINQKDXWJQWXBZZDNDMLKTMFPCBJLTCCOUALAYWTUHHLMHMADPJOKFEZYICVSBEMXSVYSUVDZFQRLPIQHTRAJFGIYNJWUZVJZRHOMWQWNBRYOZTREQLZPWNILAHSN");
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
    msg.setTimeStamp(0.28919477470469446);
    msg.setSource(54619U);
    msg.setSourceEntity(30U);
    msg.setDestination(42192U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.8429480529605174;
    msg.lon = 0.3949351942441266;
    msg.depth = 0.547249403975751;
    msg.sentence.assign("BAVSETCBEKAXGRQXWHHBGYEDCUMVPVJMDOJRDXIXKGIEABPRFQMUNYDTIAPYCPFIAOMXSYSHRGROKELLJKNBRVBGEBCPZHHNQ");
    msg.txtime = 0.41056916124897147;
    msg.modem_type.assign("VZSJRXQSYXTCPOYJCKOIILTKTQFFIHXFUIXEZPFUJSIJRMHQCWVGBGZQLNDODCEPAEIYHOFBAOGVLBDCVDEEVTWAEMNMQSIYOEOKYFPDRHAFTAMSWMPGYRKRFEKSZNWQWUMCSMPIKTYMHYBPUHUQXREJUXVGLPPHDZGUNWDMLLRJGXTNNVTHILQYYRKKAGLBLRCSZFVVAZCWAHQADBUSJRBEIAKTGXNU");
    msg.sys_src.assign("YMCHBIACUNAHIQRYXTVBOCHVPLMWUXHGMWPHOPZPNOOIKJXKDBGIEOMJSHANIPNAAXABDKXREQZXFSGPJJZTCKLBKCVFVFQZJHUKZTYSQRBVTEIZNFXQLCSDLMWXQLYQAFZKUGEEIWMOBELVNDUOYPGQCCVEAVDXIDSSIFATZNMSHWQOKZBRUALGFHYNEOMCRJG");
    msg.seq = 51054U;
    msg.sys_dst.assign("RKSQFKVNLVFIKHWBDZJIHRCTVSPKGLUMWWYYZTCMUORIECXTYONKDIVDJIIJREBNDQZIFTHTHPQJXEXYYCFTVDIBALWBKROXGNOTZPSIEZDCBUOJLREPPNXTCTVFKNWGGUHUWCYVPCJHBMBENAFSLTXZHDAFONUOFULZGXVAJBEQLAGEAM");
    msg.flags = 247U;
    const signed char tmp_msg_0[] = {28, 117, -65, 47, -13, -109, 83, -113, 60, -40, 42, -70, -25, -75, 62, 30, 87, 61, 96, 25, 40, 27, -55, 124, 84, 125, -68, -119, 86, -72, -103, 68, -92, 126, -28, 29, -24, 112, -30, -69, -85, -83, -120, 87, 112, 69, -36, 64, -89, 55, 93, 93, -15, -97, 4, 123, -59, -119, -13, 47, -4, -7, -87, 65, 80, 104, 58, -32, 107, -80, 86, -59, -54, -89, 82, 30, 45, 36, 60, -53, 66, -100, -40, 85, 8, -44, 113, -17, -100, 120, -65, -94, 51, 104, 107, -18, 80, 53, -15, -7, -123, 87, 77, -12, 72, -77, -64, 37, 78, -49, 52};
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
    msg.setTimeStamp(0.4411485668163342);
    msg.setSource(18890U);
    msg.setSourceEntity(114U);
    msg.setDestination(36648U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.7950122811703503;
    msg.lon = 0.855042236668176;
    msg.depth = 0.06252475626299503;
    msg.sentence.assign("MJBOVMUHZUHBTORBNKEZYWMMUQMPDANURKDBIGOSPYGUYJDPSORAHCLWMWMJPYLAIQEXTYAZMSXIJMKFEWVXRQLNGKCPATXTRHLVLUUBYJCXXVKYCRWFOIQDVQTVLOSWVZVCYACWPWABHPHTSGEFGTIXEKGZLW");
    msg.txtime = 0.6843259582171272;
    msg.modem_type.assign("VUUOHUWUHOVKWNKFMNHPDDBHGBBVZOSIOWOYBUVLEJLJPSPFDOFPBGPKKHSAFFHUVGBBGXKPEKGZXLDNOGARQRMMXWYIVYGWDJCSPSYQQIXZIGYEDSRXQWOCERJNZUCMWRMARSXZCZJWMJBWTEJRSTFAPF");
    msg.sys_src.assign("TVLCERXXZGYAWHZOMHYSWNFOJSWIGJAOQHMQEPKJOXSJALRHJVJSWLRKWNIQQIOKTPDLDCTEBSGEY");
    msg.seq = 46274U;
    msg.sys_dst.assign("FMSPYEFIQCPYKZETDLMUOGNPKXUNWRSHPLIMVVWLVBSODOTYXTKNOQIGJCCTMKFFXCQUDXVPEAHBFYKDJJVMAXAUMZRDDQVIZMGKDCRTHWBAHNNIYVQGAYUNZKCLYUVQEUNOYLTKQITWEIFAVIRFTIOUOBAJPIJSYBDAFZHEJMCSMSRGLLLWJAOBZURDKMFWNJHOPDRN");
    msg.flags = 189U;
    const signed char tmp_msg_0[] = {121, 113, -59, -65, -4, 45, 84, 88, 53, -18, 110, 112, -13, 103, 9, -122, 4, -56, 38, 23, -46, 64, -49, 21, -116, -55, 34, -63, 72, -91, -3, 84, -115};
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
    msg.setTimeStamp(0.7349265672877838);
    msg.setSource(56049U);
    msg.setSourceEntity(199U);
    msg.setDestination(44938U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.5595737807244745;
    msg.lon = 0.7302508143684328;
    msg.depth = 0.6186397352580169;
    msg.sentence.assign("DEHHKMGGHZMLFBYXUVXFYRJASCGAHFCEPCLOVTSDFYLKGTRIUJUQVVOXUCORPKBLNBIZIYSHKSTEPIJQIGIZWLMKACPOYGNMJRNQBEWYSKFDUYUNNTWCQUUAKLEATPUQSRGANWWMOWHVOMMTSCOLEXQPADGDUBCLISRFVRVHMJSONDCORKJJXTWHIRPXDVXZFFLWZMABJALAEHKVDXBPXJEYDZYZONDZFXNJKZZHQP");
    msg.txtime = 0.8610479017808454;
    msg.modem_type.assign("AGRUXNQZSWCGBIKQVUTLLRAPBSYJJWAVIDIETZQMXSPPHFEJTQXJXOXEWMCIMLKNTDFBNMQIFLVZYOAKQLMGODHDECCYUOCKUGLLPAWDDBIA");
    msg.sys_src.assign("HTQVTCCJNRVZZKNVPJXRPVJSYIEUULSCHALYJVBQEFFWOBZMRSSYUEDEIGECQATHKVIOOAVAMAPKBFTVOTASAHZRIM");
    msg.seq = 62681U;
    msg.sys_dst.assign("GUHUVYJTGDEFQSEUIERUFAUVSAYPAHNQDZPPSCLEFOCGNVPNKEQURIQBXTIYFDQLMJCHMDLWHDVTEPQXGZRWNOFTISEGAFOXKOR");
    msg.flags = 214U;
    const signed char tmp_msg_0[] = {-107, -26, -24, -74, -88, 119, 12, 36, -39, -70, -47, -105, 54, 28, 72, 124, -20, 16, 112, 85, -34, -74, -103, -64, 83, -120, -101, 75, 10, -79, 124, 56, -4, 106, 53, 93, -42, 102, -18, -1, -46, -107, 3, 53, 120, 36, 3, 72, 74, 9, 26, 26, 44, 91, 69, -110, -10, 38, -48, -16, -38, -14, -51, -60, 124, 32, -123, -27, -117, 65, 18, 67, -98, -87, -19, 13, 38, -7, 80, 67, -48, -42, -58, -25, 59, -44, 47, 44, -51, 69, 70, -80};
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
    msg.setTimeStamp(0.735517158346682);
    msg.setSource(20056U);
    msg.setSourceEntity(53U);
    msg.setDestination(14466U);
    msg.setDestinationEntity(15U);
    msg.op = 124U;
    msg.system.assign("NYWGJHZEKIAKCHAVPQOGRUKHDILQPEPZUADNEBJHKTKKQWVJCFPCOMUHCSZCOEOAZPYIALLUINNGLWLVDTUSVDOYKRPYVBNVDXXWKYIIBTMTTH");
    msg.range = 0.12774873762470618;
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 161U;
    tmp_msg_0.lat = 0.24725899050065991;
    tmp_msg_0.lon = 0.7717128123254384;
    tmp_msg_0.x = 0.2603087886018701;
    tmp_msg_0.y = 0.585563570629874;
    tmp_msg_0.z = 0.06441686842185335;
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
    msg.setTimeStamp(0.037924440403311);
    msg.setSource(10254U);
    msg.setSourceEntity(254U);
    msg.setDestination(10760U);
    msg.setDestinationEntity(139U);
    msg.op = 161U;
    msg.system.assign("QJCWPAMKBEBPUTMFOTVWVNEKFADDIMSRNXKCNSDKSEZNLUXIWHIPVXZRHFJXLQDCOOHKAUBKSWMBLOACKORBHJMANEJQJOWWTUESBZHRGPEFHVLFAYIDLNAPGFMXWQUZOYLGCKVZFDVTEIHYUQN");
    msg.range = 0.32636129751760923;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 564922170U;
    tmp_msg_0.destination.assign("PAGIFRACHCAPTYXGZQRQWPNROPDJDGSXIIFKHDZITFGCUPBWLAQYEEPSGIFUFLJBBUVIGBEHVERFDSSPAZPPCMLCTVIBTUGMLGSRVQXQTKSWMFICYKEOFUGVVVALAPDJBSENZWKRTNJWTTYDQOHUNJLBMQDTFSNUAVNJKYYMHDCWKOOBOYEQXAGNMDQBCXKRMONKHJYEZHM");
    tmp_msg_0.timeout = 870U;
    const signed char tmp_tmp_msg_0_0[] = {-114, 63, -128, 66, -24, 61, 105, -87, -119, -33, -33, 57, -68, 107, -37, 97, 34, 50, -94, -98, -76, 14, 25, 36, -19, 9, 49, 92, -90, -59, -105, 1, 89, 16, -53, 56, -37, 96, 61, 66, -10, -9, -102, 94, 55, 89, -110, -110, 50, -108, -42, -57, 81, 5, -106, 8, 77, -24, -44, -50, -88, 3, 50, 113, -106, 86, 102, -72, -55, -95, -127, 34, 62, 51, -126, 82, -73, 105, 124, 124, -88, -68, -65, 76, 115, 99, 6, -83, -127, 71, -60, -122, 92, 107, 68, 12, -57, -90, -88, -44, -50, -24, 36, 65, 75, 40, -126, -111, 22, -93, -17, 110, -88, 39, -83, -70, -73, 27, 22, -85, -86, 98, 79, 81, 120, -116, -28, 79, -106, -93, -30, -89, -74, 33, 12, -93};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7159028653608354);
    msg.setSource(19419U);
    msg.setSourceEntity(150U);
    msg.setDestination(40605U);
    msg.setDestinationEntity(72U);
    msg.op = 108U;
    msg.system.assign("XSCCSRYBWJAIFMCLFUUIPYEBUEAOVMHGWWJK");
    msg.range = 0.8313212988785265;
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 23862U;
    tmp_msg_0.lat = 0.010752426809219173;
    tmp_msg_0.lon = 0.724853134886532;
    tmp_msg_0.z = 0.49945089155314293;
    tmp_msg_0.z_units = 38U;
    tmp_msg_0.speed = 0.9034486320946513;
    tmp_msg_0.speed_units = 133U;
    tmp_msg_0.syringe0 = 240U;
    tmp_msg_0.syringe1 = 23U;
    tmp_msg_0.syringe2 = 162U;
    tmp_msg_0.custom.assign("WMYWFASXYRNBFECHCXOJWHLSJHUAIQPPUHGIOFJRWYOFZCWDREFRNKXIMADAVGLTPYGJYNQUMIBFLLVMIVGZBGBVIJWIWZNNVKXNISGVCZEEOGOEKAYNSCTDQSLKUQDAKATTEIKQQATPCXMRMDLZHHPHORYWODHPRXQYJUXGKUNINEZCMXDSOVMQFJJYKDELFWQBYUBNPV");
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
    msg.setTimeStamp(0.6812936217750053);
    msg.setSource(18888U);
    msg.setSourceEntity(96U);
    msg.setDestination(22030U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.9154342332955554);
    msg.setSource(56357U);
    msg.setSourceEntity(249U);
    msg.setDestination(10234U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.9870818052760015);
    msg.setSource(33793U);
    msg.setSourceEntity(34U);
    msg.setDestination(37195U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.8183040072854952);
    msg.setSource(15450U);
    msg.setSourceEntity(111U);
    msg.setDestination(39351U);
    msg.setDestinationEntity(151U);
    msg.list.assign("WKMEQGFSIYJHIZCNUBOXNBMKRJIABYNJFOGOCDTTHSZMQHXWYVDZJUDEDDKSNBKHVASMFHGRCXRRQKEAOZMDWAPWISPLOBSYTTHLPKHRYXHFCCDKCUVODJIYNGUVLWWQSKXNHVALXFLPDQAOPBZQCNUIMIXQRNMKJGLWWERUEJZPTGM");

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
    msg.setTimeStamp(0.4005624137629318);
    msg.setSource(39901U);
    msg.setSourceEntity(164U);
    msg.setDestination(14853U);
    msg.setDestinationEntity(3U);
    msg.list.assign("XIARMYCWYSWNUNSAVFGBPUANYCLGGZQJGGXUUFYTQLILMWTSLVAWOQEJDMWTEHIDPVKISBVCVKKHZBMJTZLSWYUMRPGLRDGNMKTUIXHIPNTLOLEHBYZHJNUHDVQCHBOWYTEXOCRZSFHSQGFAVCIDPXLXAAOMYODTACAZSBIYEDROOQTOAXPQXRUFFMNKDKUEBOZLZRBDJZRESUXVRHQHRBJNJPYDFEPVCECJKVZXKWPWFI");

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
    msg.setTimeStamp(0.32515748676783196);
    msg.setSource(62659U);
    msg.setSourceEntity(3U);
    msg.setDestination(31330U);
    msg.setDestinationEntity(157U);
    msg.list.assign("EQRTDUBVJVCPEDYMTIZOWWECEGYAHUHUCYHZRISTOCDQYTGWBLMMXYFQWKJVNFTJFVFZRQZP");

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
    msg.setTimeStamp(0.07882289974195178);
    msg.setSource(34259U);
    msg.setSourceEntity(78U);
    msg.setDestination(46632U);
    msg.setDestinationEntity(48U);
    msg.peer.assign("IQGARLEOTXCSJXEGZJRHWASSBHNVTNQIFQKUETWIFUXEWIFJRJASHBKWXOHGMIDADRAARBLKZVJCODUCBTKPISFKNBGQFLDOPPJZBSXWNYZMWASPDETKUPFTUIGXDBCMJMPWPLJQAMBRLMUDAVQVNUEGZDYHZUIXWYROGMFYNOZTHRBKMYCPPSLTTNBQAZMZDGYZSYUKNORVGVVICEMHWCYQXVOOXESQLKIHJ");
    msg.rssi = 0.4449073215603847;
    msg.integrity = 2457U;

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
    msg.setTimeStamp(0.9657271931934815);
    msg.setSource(24732U);
    msg.setSourceEntity(112U);
    msg.setDestination(28134U);
    msg.setDestinationEntity(86U);
    msg.peer.assign("ZXQOHSEZMIIKGLCBBGTGDERDEIRWAOIYYXSQWMTOFGNBMWQDFGWYYVZQUUVCDDBNHOPTYRHESYDICPFTFPTSQTSHWHPNVTBGNQJVQHAFIZHDNCNWGZXAKPAUZAJVUFZM");
    msg.rssi = 0.5686437860453382;
    msg.integrity = 4785U;

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
    msg.setTimeStamp(0.5578669036476832);
    msg.setSource(53780U);
    msg.setSourceEntity(181U);
    msg.setDestination(36249U);
    msg.setDestinationEntity(73U);
    msg.peer.assign("SIBCPZJABRWKOLLBMKLWKLIHCQGJJOVEVAFXRUGMKCADDJCSNRETWHGHZMIIGJQRVZKLYNPUYEGNAZTABTLDZHPAMHRPVKXSVUCTQDXUBBYBATFJTPYUBYGGXOXRQMNNLHIPOBXYFDMVCUDKWEJGQOFAYWOJZLWFDWTZEVYKZQXYXQCPHZSSNTZIMVJDR");
    msg.rssi = 0.17486509774925718;
    msg.integrity = 23950U;

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
    msg.setTimeStamp(0.8957534116985587);
    msg.setSource(19363U);
    msg.setSourceEntity(176U);
    msg.setDestination(9060U);
    msg.setDestinationEntity(253U);
    msg.req_id = 13496U;
    msg.destination.assign("CCXFIDGLACSHPYIJQDQRWSOPBOXZATIZGJPPYOKJUAWJJHSMMGQXISXJVVZNX");
    msg.timeout = 0.5184733066777903;
    msg.range = 0.273210142156881;
    msg.type = 182U;
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.2606868573030693;
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
    msg.setTimeStamp(0.5668946989858354);
    msg.setSource(47431U);
    msg.setSourceEntity(208U);
    msg.setDestination(39581U);
    msg.setDestinationEntity(47U);
    msg.req_id = 29453U;
    msg.destination.assign("QBVILMYFZEYQHCVFIKCCFCASEOGFFUAWERFEUONSIYDATMOWPDNQBVVLCZZTXFIHHYXUXTIQKNJLTCOAMKPESKVRIYHJTWNBSUZOQZGZBRWVNGEGJSAXOXTNUOJZQJYHUKBDJLVZWBYPPLMVQXWP");
    msg.timeout = 0.20276524269013085;
    msg.range = 0.11712471258448165;
    msg.type = 93U;
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("YPHHOXPSRVQTKACCDVJFGLKMVMEXYOTIEWZNYXOLOGHSBKHZAJRQSQDRCYTHWCFPJNBMVPBAUCDTLKCIIMTPBEMCIAMXSSGEBSJS");
    tmp_msg_0.htime = 0.8787362842853534;
    tmp_msg_0.lat = 0.6601849481673658;
    tmp_msg_0.lon = 0.3086611881206738;
    const signed char tmp_tmp_msg_0_0[] = {-33, -90, -78, 34, -55, -57, -10, -91, 69, -3, 32, 57, 4, -97, 84, -51, 57, 105, 13, 31, 79, 59, -12, 12, 62, -63, 9, 77, -24, 114, -28, 12, -20, 111, -77, -1, 90, -47, 3, -93, -28, -127, 25, -128, -92, -83, -79, 79, 37, -65, -56, 44, 115, -114, -128, 37, 43, 65, -93, -86, -25, -70, 63, -21, -63, -128, -31, -95, -69, 125, 34, 90, -89, 43, -115, 20, 53, 123, 0, -28, -44, 11, -77, -106, -19, -49, 64, 37, -54, 103};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.3517396714782519);
    msg.setSource(28027U);
    msg.setSourceEntity(72U);
    msg.setDestination(48649U);
    msg.setDestinationEntity(123U);
    msg.req_id = 41418U;
    msg.destination.assign("YJRIEIRYUDATCSSBUGDXTPDDESXVFFRAWFONCQUQMSPOEZLJRH");
    msg.timeout = 0.8301166280429699;
    msg.range = 0.6982621783941187;
    msg.type = 151U;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 31U;
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
    msg.setTimeStamp(0.20444835421441743);
    msg.setSource(39940U);
    msg.setSourceEntity(104U);
    msg.setDestination(61901U);
    msg.setDestinationEntity(123U);
    msg.req_id = 20301U;
    msg.type = 48U;
    msg.status = 188U;
    msg.info.assign("KIQZVWXECMGWXYDQBLIJXOPRMTVTYNPKDERPGYWHHBSCALGZNBYRXXGQTINWKWNAZLJOCBDTLFAGSVIKXWCFNJQLJUOTHHSQLCIHVKGEK");
    msg.range = 0.6107146171369561;

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
    msg.setTimeStamp(0.8341145538344101);
    msg.setSource(11085U);
    msg.setSourceEntity(170U);
    msg.setDestination(24161U);
    msg.setDestinationEntity(98U);
    msg.req_id = 18523U;
    msg.type = 143U;
    msg.status = 107U;
    msg.info.assign("WZRTDLTGAMFDDFIBWCYKIDLMPSRMVVICNTTMASIEXPOPRWXUOVCOHEPMLKGEQBYXHDMWXCKWQSBERCSHNZBIGGJRTPOUADKRTJAVWUPLQKYVEOCBQTJGCEMDIEXBHTZNFLKLXZDDBAWJFLPNHHQFVRTULZOJPYUKKWYMDBBMCNJKIZMWESJIQONZCQXQFZALFRAUXQQSVHOZHUNPAOFBSVISSOFCINJXYSVGRYTGLJVPAEYRUYGNGW");
    msg.range = 0.8019921933575632;

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
    msg.setTimeStamp(0.24271876563584271);
    msg.setSource(18711U);
    msg.setSourceEntity(227U);
    msg.setDestination(26590U);
    msg.setDestinationEntity(107U);
    msg.req_id = 39941U;
    msg.type = 95U;
    msg.status = 240U;
    msg.info.assign("DLEBXLWYSIOFHFQXAOLGIKGGNPPAWDQLPWDNYAPCAECQWTTTCVIWARBVSVCRNJEVLAUXTIZDBZBFTJFVHXPPTTEZROHNRJMYJKVSRPZQKUYSGAVQNGNBBOIFNOUYWUOMXCAKUZCQFJXENQUGQFDMSHJUYCUDSBXFVMSIXCMRDURHTWBQSDPDTZOJGKIPMY");
    msg.range = 0.39826864133361706;

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
    msg.setTimeStamp(0.6495904508821476);
    msg.setSource(10425U);
    msg.setSourceEntity(236U);
    msg.setDestination(52693U);
    msg.setDestinationEntity(58U);
    msg.system.assign("FMDYTCISPBYSLJQQMIDHTTA");
    msg.op = 238U;

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
    msg.setTimeStamp(0.19093819121808664);
    msg.setSource(38618U);
    msg.setSourceEntity(158U);
    msg.setDestination(4539U);
    msg.setDestinationEntity(160U);
    msg.system.assign("EDKOYFHGWUZTUJJLIYHUADBXZGJDSCMQTBAQSTPKULYXMOZMCDJEWFDBTGZOSDWVYNWEKIRPBQTONEZFTVQKKTLWJOXYWCZLNZUODNUOFVIMCYRBNBCIANFGKSERGDSAOSNXISKZPMHTQNGWBJWLKEVEQYACOEIRK");
    msg.op = 167U;

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
    msg.setTimeStamp(0.6175135423549071);
    msg.setSource(4120U);
    msg.setSourceEntity(118U);
    msg.setDestination(37450U);
    msg.setDestinationEntity(131U);
    msg.system.assign("RDVROQATXVKAJXRRCXVQHUSICMUJATGZIDHTMVSWZBUGIVDGCAECXKCXRXYJSPENWOKEMZOBPQOOPJLSZQPKUWRNSYZYHLZBFPWBLXEVGNNQLQOTJ");
    msg.op = 128U;

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
    msg.setTimeStamp(0.5188334696377125);
    msg.setSource(35989U);
    msg.setSourceEntity(238U);
    msg.setDestination(19011U);
    msg.setDestinationEntity(71U);
    msg.value = 26896;

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
    msg.setTimeStamp(0.13849150102448948);
    msg.setSource(50561U);
    msg.setSourceEntity(32U);
    msg.setDestination(63237U);
    msg.setDestinationEntity(146U);
    msg.value = -10918;

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
    msg.setTimeStamp(0.6069551214340774);
    msg.setSource(56759U);
    msg.setSourceEntity(6U);
    msg.setDestination(51407U);
    msg.setDestinationEntity(177U);
    msg.value = 28534;

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
    msg.setTimeStamp(0.6153867011860351);
    msg.setSource(6984U);
    msg.setSourceEntity(29U);
    msg.setDestination(59002U);
    msg.setDestinationEntity(145U);
    msg.value = 0.2681732020841905;

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
    msg.setTimeStamp(0.781804770818845);
    msg.setSource(23901U);
    msg.setSourceEntity(178U);
    msg.setDestination(63604U);
    msg.setDestinationEntity(69U);
    msg.value = 0.21254720997010645;

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
    msg.setTimeStamp(0.33165981943731937);
    msg.setSource(31167U);
    msg.setSourceEntity(191U);
    msg.setDestination(23369U);
    msg.setDestinationEntity(83U);
    msg.value = 0.8496247569739843;

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
    msg.setTimeStamp(0.4187754955774745);
    msg.setSource(28939U);
    msg.setSourceEntity(120U);
    msg.setDestination(61879U);
    msg.setDestinationEntity(203U);
    msg.value = 0.4999489582373312;

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
    msg.setTimeStamp(0.6559001767842598);
    msg.setSource(53081U);
    msg.setSourceEntity(82U);
    msg.setDestination(52420U);
    msg.setDestinationEntity(158U);
    msg.value = 0.23264653794310364;

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
    msg.setTimeStamp(0.3371763780799395);
    msg.setSource(52080U);
    msg.setSourceEntity(137U);
    msg.setDestination(55288U);
    msg.setDestinationEntity(160U);
    msg.value = 0.6592483739212701;

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
    msg.setTimeStamp(0.556901214451878);
    msg.setSource(50064U);
    msg.setSourceEntity(177U);
    msg.setDestination(56688U);
    msg.setDestinationEntity(127U);
    msg.validity = 60285U;
    msg.type = 161U;
    msg.utc_year = 3355U;
    msg.utc_month = 39U;
    msg.utc_day = 81U;
    msg.utc_time = 0.015279098128839208;
    msg.lat = 0.0853008703793754;
    msg.lon = 0.0495128923878323;
    msg.height = 0.27000846371184706;
    msg.satellites = 102U;
    msg.cog = 0.06411776964113769;
    msg.sog = 0.475537142214956;
    msg.hdop = 0.7449088945130186;
    msg.vdop = 0.6490048767089736;
    msg.hacc = 0.5641256062329889;
    msg.vacc = 0.3732593045854158;

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
    msg.setTimeStamp(0.6287970536959698);
    msg.setSource(26343U);
    msg.setSourceEntity(178U);
    msg.setDestination(42624U);
    msg.setDestinationEntity(236U);
    msg.validity = 36342U;
    msg.type = 68U;
    msg.utc_year = 63095U;
    msg.utc_month = 181U;
    msg.utc_day = 238U;
    msg.utc_time = 0.33598019103107735;
    msg.lat = 0.8034496284430371;
    msg.lon = 0.907014418823186;
    msg.height = 0.41717416076768343;
    msg.satellites = 25U;
    msg.cog = 0.03559306630698922;
    msg.sog = 0.5809424863499563;
    msg.hdop = 0.1420461040970259;
    msg.vdop = 0.3272553090335798;
    msg.hacc = 0.5346710415016024;
    msg.vacc = 0.4690333210718157;

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
    msg.setTimeStamp(0.5175449546760642);
    msg.setSource(59166U);
    msg.setSourceEntity(198U);
    msg.setDestination(58497U);
    msg.setDestinationEntity(132U);
    msg.validity = 38578U;
    msg.type = 168U;
    msg.utc_year = 43612U;
    msg.utc_month = 147U;
    msg.utc_day = 144U;
    msg.utc_time = 0.4419591233567519;
    msg.lat = 0.4893050619363676;
    msg.lon = 0.28637578210679226;
    msg.height = 0.6833194807377836;
    msg.satellites = 116U;
    msg.cog = 0.5511671924416195;
    msg.sog = 0.08786943920085799;
    msg.hdop = 0.35094358869937614;
    msg.vdop = 0.4222315203337529;
    msg.hacc = 0.5029764366003052;
    msg.vacc = 0.5786381916383763;

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
    msg.setTimeStamp(0.4979378866596966);
    msg.setSource(16296U);
    msg.setSourceEntity(26U);
    msg.setDestination(52983U);
    msg.setDestinationEntity(250U);
    msg.time = 0.9981103179463263;
    msg.phi = 0.453411667228957;
    msg.theta = 0.14217923890981876;
    msg.psi = 0.2360249886485184;
    msg.psi_magnetic = 0.15032699558083107;

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
    msg.setTimeStamp(0.3071215369205006);
    msg.setSource(39500U);
    msg.setSourceEntity(204U);
    msg.setDestination(9731U);
    msg.setDestinationEntity(111U);
    msg.time = 0.05413627664803977;
    msg.phi = 0.094784994530826;
    msg.theta = 0.4638787533042129;
    msg.psi = 0.1088595042008742;
    msg.psi_magnetic = 0.25333850954129933;

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
    msg.setTimeStamp(0.458260231909304);
    msg.setSource(50819U);
    msg.setSourceEntity(164U);
    msg.setDestination(25408U);
    msg.setDestinationEntity(36U);
    msg.time = 0.3927579135921344;
    msg.phi = 0.6159628718958403;
    msg.theta = 0.5792393710628481;
    msg.psi = 0.030093977401173144;
    msg.psi_magnetic = 0.08836547708780862;

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
    msg.setTimeStamp(0.025124192575911697);
    msg.setSource(17131U);
    msg.setSourceEntity(220U);
    msg.setDestination(31257U);
    msg.setDestinationEntity(218U);
    msg.time = 0.5093345199989442;
    msg.x = 0.10483770489625999;
    msg.y = 0.06429691025268935;
    msg.z = 0.43906285880118945;
    msg.timestep = 0.9486320559427743;

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
    msg.setTimeStamp(0.329036047291824);
    msg.setSource(48766U);
    msg.setSourceEntity(212U);
    msg.setDestination(8604U);
    msg.setDestinationEntity(211U);
    msg.time = 0.7991665716618376;
    msg.x = 0.33865361538484096;
    msg.y = 0.16251996928519064;
    msg.z = 0.5315861534462202;
    msg.timestep = 0.18822289561211758;

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
    msg.setTimeStamp(0.20288679455421244);
    msg.setSource(1819U);
    msg.setSourceEntity(111U);
    msg.setDestination(12145U);
    msg.setDestinationEntity(248U);
    msg.time = 0.8000606866372786;
    msg.x = 0.8838024317575262;
    msg.y = 0.7394830628974116;
    msg.z = 0.6542046986988346;
    msg.timestep = 0.3718021285956681;

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
    msg.setTimeStamp(0.0234754646198837);
    msg.setSource(23698U);
    msg.setSourceEntity(61U);
    msg.setDestination(43918U);
    msg.setDestinationEntity(121U);
    msg.time = 0.41905851915855385;
    msg.x = 0.8043081967946838;
    msg.y = 0.8364587541369273;
    msg.z = 0.16452316233970654;

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
    msg.setTimeStamp(0.8049054858750505);
    msg.setSource(59189U);
    msg.setSourceEntity(183U);
    msg.setDestination(6678U);
    msg.setDestinationEntity(76U);
    msg.time = 0.28257619076768703;
    msg.x = 0.15643962136293765;
    msg.y = 0.3999743988055289;
    msg.z = 0.45939296927180473;

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
    msg.setTimeStamp(0.7397831907015752);
    msg.setSource(12290U);
    msg.setSourceEntity(94U);
    msg.setDestination(28306U);
    msg.setDestinationEntity(4U);
    msg.time = 0.41197622284383917;
    msg.x = 0.21914025730142017;
    msg.y = 0.3553751535491818;
    msg.z = 0.25988949043870135;

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
    msg.setTimeStamp(0.894224961562495);
    msg.setSource(59805U);
    msg.setSourceEntity(76U);
    msg.setDestination(54825U);
    msg.setDestinationEntity(17U);
    msg.time = 0.8893283975156067;
    msg.x = 0.3011286291292732;
    msg.y = 0.3094033137649438;
    msg.z = 0.9804813439486377;

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
    msg.setTimeStamp(0.8018573473548791);
    msg.setSource(2041U);
    msg.setSourceEntity(0U);
    msg.setDestination(47094U);
    msg.setDestinationEntity(135U);
    msg.time = 0.20728578978525591;
    msg.x = 0.45592947237638004;
    msg.y = 0.4350664423706321;
    msg.z = 0.48259428608773935;

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
    msg.setTimeStamp(0.6114772541664207);
    msg.setSource(34422U);
    msg.setSourceEntity(224U);
    msg.setDestination(55882U);
    msg.setDestinationEntity(99U);
    msg.time = 0.28999766441907193;
    msg.x = 0.9555527583415706;
    msg.y = 0.979438537765675;
    msg.z = 0.6946693317030548;

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
    msg.setTimeStamp(0.19088417476809838);
    msg.setSource(4410U);
    msg.setSourceEntity(126U);
    msg.setDestination(15715U);
    msg.setDestinationEntity(38U);
    msg.time = 0.44941238788055904;
    msg.x = 0.8818630828842132;
    msg.y = 0.4549488777992171;
    msg.z = 0.5069084439160009;

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
    msg.setTimeStamp(0.31537696062099463);
    msg.setSource(53269U);
    msg.setSourceEntity(253U);
    msg.setDestination(49769U);
    msg.setDestinationEntity(193U);
    msg.time = 0.9283779148033329;
    msg.x = 0.3339715339215725;
    msg.y = 0.41104187962430316;
    msg.z = 0.3348063656824509;

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
    msg.setTimeStamp(0.3978127843227093);
    msg.setSource(52509U);
    msg.setSourceEntity(146U);
    msg.setDestination(40064U);
    msg.setDestinationEntity(28U);
    msg.time = 0.17414769027561172;
    msg.x = 0.10071226247610954;
    msg.y = 0.8490943264497757;
    msg.z = 0.21986778153854114;

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
    msg.setTimeStamp(0.30824314300696765);
    msg.setSource(16219U);
    msg.setSourceEntity(85U);
    msg.setDestination(49694U);
    msg.setDestinationEntity(153U);
    msg.validity = 48U;
    msg.x = 0.5120105601703094;
    msg.y = 0.6994533351405943;
    msg.z = 0.32854873598782375;

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
    msg.setTimeStamp(0.2949968242864782);
    msg.setSource(38305U);
    msg.setSourceEntity(86U);
    msg.setDestination(3783U);
    msg.setDestinationEntity(211U);
    msg.validity = 247U;
    msg.x = 0.06925323824701513;
    msg.y = 0.37822447486556643;
    msg.z = 0.6227220658754229;

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
    msg.setTimeStamp(0.11320250513143737);
    msg.setSource(34078U);
    msg.setSourceEntity(192U);
    msg.setDestination(33026U);
    msg.setDestinationEntity(97U);
    msg.validity = 40U;
    msg.x = 0.15663056261734531;
    msg.y = 0.15008474687098572;
    msg.z = 0.09336540475353416;

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
    msg.setTimeStamp(0.6314612977305367);
    msg.setSource(57165U);
    msg.setSourceEntity(223U);
    msg.setDestination(50274U);
    msg.setDestinationEntity(187U);
    msg.validity = 32U;
    msg.x = 0.969427157003918;
    msg.y = 0.8916444962701588;
    msg.z = 0.3145820275307589;

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
    msg.setTimeStamp(0.2948530372902778);
    msg.setSource(60186U);
    msg.setSourceEntity(215U);
    msg.setDestination(56991U);
    msg.setDestinationEntity(91U);
    msg.validity = 232U;
    msg.x = 0.7044889233444496;
    msg.y = 0.6093415619376438;
    msg.z = 0.9416827899526277;

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
    msg.setTimeStamp(0.05848758391661746);
    msg.setSource(31186U);
    msg.setSourceEntity(210U);
    msg.setDestination(1464U);
    msg.setDestinationEntity(13U);
    msg.validity = 4U;
    msg.x = 0.3936372220347305;
    msg.y = 0.5350697679415244;
    msg.z = 0.3079033778711803;

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
    msg.setTimeStamp(0.2949504948836833);
    msg.setSource(36466U);
    msg.setSourceEntity(57U);
    msg.setDestination(24692U);
    msg.setDestinationEntity(34U);
    msg.time = 0.5196609932579861;
    msg.x = 0.776144246983437;
    msg.y = 0.6909864953394377;
    msg.z = 0.2630864259986849;

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
    msg.setTimeStamp(0.8218079141446444);
    msg.setSource(65090U);
    msg.setSourceEntity(111U);
    msg.setDestination(58738U);
    msg.setDestinationEntity(206U);
    msg.time = 0.9740962160208219;
    msg.x = 0.9205862860914915;
    msg.y = 0.8654781418278231;
    msg.z = 0.11106997107312444;

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
    msg.setTimeStamp(0.10422831946525479);
    msg.setSource(61488U);
    msg.setSourceEntity(146U);
    msg.setDestination(17473U);
    msg.setDestinationEntity(239U);
    msg.time = 0.20274282003200483;
    msg.x = 0.3042271489479924;
    msg.y = 0.5856622403389491;
    msg.z = 0.7879104038783878;

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
    msg.setTimeStamp(0.24453621629290578);
    msg.setSource(60509U);
    msg.setSourceEntity(136U);
    msg.setDestination(10152U);
    msg.setDestinationEntity(199U);
    msg.validity = 8U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.25077475976050756;
    tmp_msg_0.beam_height = 0.9139666421324375;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8603111087609626;

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
    msg.setTimeStamp(0.6953346990095813);
    msg.setSource(19248U);
    msg.setSourceEntity(180U);
    msg.setDestination(33110U);
    msg.setDestinationEntity(187U);
    msg.validity = 95U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7745292667816213;
    tmp_msg_0.y = 0.1346998116808673;
    tmp_msg_0.z = 0.48306409364939684;
    tmp_msg_0.phi = 0.7125173550633428;
    tmp_msg_0.theta = 0.23285225655208264;
    tmp_msg_0.psi = 0.9116747992581625;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.16676031386463486;

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
    msg.setTimeStamp(0.32188070817179704);
    msg.setSource(52485U);
    msg.setSourceEntity(25U);
    msg.setDestination(64214U);
    msg.setDestinationEntity(94U);
    msg.validity = 44U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.48630603620608603;
    tmp_msg_0.beam_height = 0.8601810262065421;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.5031408140824075;

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
    msg.setTimeStamp(0.9031890726153637);
    msg.setSource(12899U);
    msg.setSourceEntity(0U);
    msg.setDestination(48917U);
    msg.setDestinationEntity(131U);
    msg.value = 0.8162391778441457;

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
    msg.setTimeStamp(0.35415105080024945);
    msg.setSource(48412U);
    msg.setSourceEntity(178U);
    msg.setDestination(61222U);
    msg.setDestinationEntity(61U);
    msg.value = 0.6576290767470555;

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
    msg.setTimeStamp(0.7804201581279817);
    msg.setSource(10418U);
    msg.setSourceEntity(149U);
    msg.setDestination(37587U);
    msg.setDestinationEntity(88U);
    msg.value = 0.8033381882425839;

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
    msg.setTimeStamp(0.12093252363980989);
    msg.setSource(3958U);
    msg.setSourceEntity(190U);
    msg.setDestination(41753U);
    msg.setDestinationEntity(248U);
    msg.value = 0.6116603637014404;

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
    msg.setTimeStamp(0.8323711180985236);
    msg.setSource(45975U);
    msg.setSourceEntity(199U);
    msg.setDestination(9250U);
    msg.setDestinationEntity(48U);
    msg.value = 0.9395249150281246;

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
    msg.setTimeStamp(0.48069217475424475);
    msg.setSource(14456U);
    msg.setSourceEntity(167U);
    msg.setDestination(48761U);
    msg.setDestinationEntity(102U);
    msg.value = 0.6989866754226981;

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
    msg.setTimeStamp(0.7103625968501296);
    msg.setSource(2374U);
    msg.setSourceEntity(188U);
    msg.setDestination(21687U);
    msg.setDestinationEntity(107U);
    msg.value = 0.8272872702839905;

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
    msg.setTimeStamp(0.9447863054867074);
    msg.setSource(4002U);
    msg.setSourceEntity(121U);
    msg.setDestination(53386U);
    msg.setDestinationEntity(115U);
    msg.value = 0.09690516433255014;

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
    msg.setTimeStamp(0.5707233469741121);
    msg.setSource(54096U);
    msg.setSourceEntity(206U);
    msg.setDestination(62268U);
    msg.setDestinationEntity(143U);
    msg.value = 0.22870802104495214;

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
    msg.setTimeStamp(0.5801257805943182);
    msg.setSource(9732U);
    msg.setSourceEntity(124U);
    msg.setDestination(20295U);
    msg.setDestinationEntity(191U);
    msg.value = 0.06213060360372291;

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
    msg.setTimeStamp(0.26058902855931443);
    msg.setSource(15497U);
    msg.setSourceEntity(200U);
    msg.setDestination(15408U);
    msg.setDestinationEntity(115U);
    msg.value = 0.0753608091019684;

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
    msg.setTimeStamp(0.5572995191141598);
    msg.setSource(31289U);
    msg.setSourceEntity(119U);
    msg.setDestination(52720U);
    msg.setDestinationEntity(27U);
    msg.value = 0.31145056650607095;

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
    msg.setTimeStamp(0.26436254303368156);
    msg.setSource(7496U);
    msg.setSourceEntity(180U);
    msg.setDestination(44694U);
    msg.setDestinationEntity(241U);
    msg.value = 0.407405569247522;

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
    msg.setTimeStamp(0.12388638174185174);
    msg.setSource(114U);
    msg.setSourceEntity(235U);
    msg.setDestination(9889U);
    msg.setDestinationEntity(45U);
    msg.value = 0.057046981035698496;

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
    msg.setTimeStamp(0.7546650422668888);
    msg.setSource(51428U);
    msg.setSourceEntity(109U);
    msg.setDestination(54226U);
    msg.setDestinationEntity(205U);
    msg.value = 0.4648735218463883;

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
    msg.setTimeStamp(0.5733785448336944);
    msg.setSource(33061U);
    msg.setSourceEntity(126U);
    msg.setDestination(30133U);
    msg.setDestinationEntity(50U);
    msg.value = 0.7595495876250373;

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
    msg.setTimeStamp(0.9928863356008024);
    msg.setSource(20705U);
    msg.setSourceEntity(111U);
    msg.setDestination(1491U);
    msg.setDestinationEntity(3U);
    msg.value = 0.22255515004527815;

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
    msg.setTimeStamp(0.8828762328114041);
    msg.setSource(55251U);
    msg.setSourceEntity(107U);
    msg.setDestination(15551U);
    msg.setDestinationEntity(100U);
    msg.value = 0.6582844743637954;

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
    msg.setTimeStamp(0.2600759463568453);
    msg.setSource(49016U);
    msg.setSourceEntity(232U);
    msg.setDestination(31691U);
    msg.setDestinationEntity(225U);
    msg.value = 0.32678735967008865;

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
    msg.setTimeStamp(0.5365364679385473);
    msg.setSource(7386U);
    msg.setSourceEntity(110U);
    msg.setDestination(10113U);
    msg.setDestinationEntity(77U);
    msg.value = 0.02390841909889485;

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
    msg.setTimeStamp(0.5809583762284065);
    msg.setSource(40300U);
    msg.setSourceEntity(168U);
    msg.setDestination(62483U);
    msg.setDestinationEntity(189U);
    msg.value = 0.22087850365979766;

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
    msg.setTimeStamp(0.26691976669547324);
    msg.setSource(1523U);
    msg.setSourceEntity(116U);
    msg.setDestination(14576U);
    msg.setDestinationEntity(148U);
    msg.value = 0.5905038482721172;

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
    msg.setTimeStamp(0.6916882692698443);
    msg.setSource(20378U);
    msg.setSourceEntity(103U);
    msg.setDestination(58461U);
    msg.setDestinationEntity(106U);
    msg.value = 0.8300379319708865;

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
    msg.setTimeStamp(0.9437803214464012);
    msg.setSource(2887U);
    msg.setSourceEntity(98U);
    msg.setDestination(36456U);
    msg.setDestinationEntity(152U);
    msg.value = 0.6895742975312891;

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
    msg.setTimeStamp(0.7062403803592114);
    msg.setSource(57796U);
    msg.setSourceEntity(223U);
    msg.setDestination(32213U);
    msg.setDestinationEntity(248U);
    msg.direction = 0.4083537866024587;
    msg.speed = 0.9997641883257572;
    msg.turbulence = 0.682775874194434;

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
    msg.setTimeStamp(0.865455692718729);
    msg.setSource(44196U);
    msg.setSourceEntity(183U);
    msg.setDestination(21926U);
    msg.setDestinationEntity(92U);
    msg.direction = 0.5126227905235327;
    msg.speed = 0.09271162625070961;
    msg.turbulence = 0.07578035894084156;

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
    msg.setTimeStamp(0.6276780434735754);
    msg.setSource(60417U);
    msg.setSourceEntity(60U);
    msg.setDestination(43456U);
    msg.setDestinationEntity(237U);
    msg.direction = 0.5230984153930203;
    msg.speed = 0.2351056255343722;
    msg.turbulence = 0.261715928668126;

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
    msg.setTimeStamp(0.7285522786946368);
    msg.setSource(41804U);
    msg.setSourceEntity(212U);
    msg.setDestination(47413U);
    msg.setDestinationEntity(74U);
    msg.value = 0.864762668946375;

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
    msg.setTimeStamp(0.5134326225340253);
    msg.setSource(28547U);
    msg.setSourceEntity(126U);
    msg.setDestination(26294U);
    msg.setDestinationEntity(70U);
    msg.value = 0.9666430582736842;

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
    msg.setTimeStamp(0.28947553601768694);
    msg.setSource(62998U);
    msg.setSourceEntity(104U);
    msg.setDestination(39767U);
    msg.setDestinationEntity(5U);
    msg.value = 0.9246492152584246;

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
    msg.setTimeStamp(0.41906810557682905);
    msg.setSource(63834U);
    msg.setSourceEntity(164U);
    msg.setDestination(36692U);
    msg.setDestinationEntity(252U);
    msg.value.assign("XHABPNMYOAJENDDOQGCVTUXMV");

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
    msg.setTimeStamp(0.7712771768132619);
    msg.setSource(35204U);
    msg.setSourceEntity(229U);
    msg.setDestination(33707U);
    msg.setDestinationEntity(85U);
    msg.value.assign("CSUWUCUDTEZGXDXOKPNBXQCLGNMQMQOJSWGNAUQWFHRHIODQJGFEEPXGHJTIKBUVOLEYYAKWPDKHYUARFJNJBOGAHZWRTJXFSCTQXAVAYSJFSVNEOKKUYZMPYRWIOPZDVTGDOUBLLAIZRKPJIHHCHJVHDNNIVELEDBVIRAKYVTQXYVONLSKMCAPRPAQVWIZBJEHDRCQWMSPMGETMZRFOCLGZTZBBYLSNICRK");

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
    msg.setTimeStamp(0.022592677132397765);
    msg.setSource(9655U);
    msg.setSourceEntity(81U);
    msg.setDestination(45543U);
    msg.setDestinationEntity(51U);
    msg.value.assign("RDHXTDOZHPJQAOKTGSYYIQSXPSKDLMLRBZYQWAMEDUOZIHJJZSUCNQGECUEICQMWSFGVCTHKBFKOVOWFEMEDJNMCNYNOUIXZQWIHZZUBFKHXTUFENRXEPMCVBRFIWCMTRQAKLRGMDVXLAAXTYVYRHDDBZR");

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
    msg.setTimeStamp(0.8878049224599328);
    msg.setSource(31629U);
    msg.setSourceEntity(229U);
    msg.setDestination(60021U);
    msg.setDestinationEntity(215U);
    const signed char tmp_msg_0[] = {-104, 59, -126, 57, 4, -55, 115, -86, -94, -100, 44, 115, 32, -110, -61, -37, 76, 31, -74, -52, 59, -126, -75, -44, -2, -95, 21, -126, 60, 66, 79, -43, 61, -39, -19, -44, -70, 32, -30, 15, -128, 53, -77, 19, -117, -91, 86, -82, -13, 40, -51, -79, -125, -22, -99, -33, 41, 7, -122, 126, 100, -78, -10, -36, -40, 33, 28, -111, -59, -70, 78, -23, -71, 52, -27, -103, 123, 54, 22, 96, 64, -31, 124, 52, 93, -62, -91, 99, 33, -23, 110, -101, 62, -21, -26, -25, -107, -93, 13, 8, -118, 29, -101, 60, -115, -84, -81};
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
    msg.setTimeStamp(0.47153616457215874);
    msg.setSource(31328U);
    msg.setSourceEntity(65U);
    msg.setDestination(26472U);
    msg.setDestinationEntity(8U);
    const signed char tmp_msg_0[] = {-60, 33, 86, -57, -16, 106, -84, -82, -69, 13, -15};
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
    msg.setTimeStamp(0.8759515424570008);
    msg.setSource(15558U);
    msg.setSourceEntity(121U);
    msg.setDestination(11294U);
    msg.setDestinationEntity(34U);
    const signed char tmp_msg_0[] = {-23, -95, 126, 93, 126, 9, -30, -44, 10, 107, -3, 60, -90, -40, 8, -72, 5, 43, -38, 31, 80, 50, 59, -32, 42, -33, -85, -88, 35, 114, -105, -106, -58, -35, -34, -88, -23, 45, 20, 75, -52, 118, -124, -83, -88, -122, -59, 85, 100, 124, 35, 84, 15, 23, 17, 113, -84, 38, -80, -56, 17, -2, -64, -12, -36, -57, -122, -8, 78, -113, -87, -68};
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
    msg.setTimeStamp(0.38556059491794903);
    msg.setSource(4172U);
    msg.setSourceEntity(125U);
    msg.setDestination(24431U);
    msg.setDestinationEntity(250U);
    msg.value = 0.8976976976659962;

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
    msg.setTimeStamp(0.8935174062937828);
    msg.setSource(46119U);
    msg.setSourceEntity(178U);
    msg.setDestination(2555U);
    msg.setDestinationEntity(2U);
    msg.value = 0.12971419945733464;

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
    msg.setTimeStamp(0.49250515504599723);
    msg.setSource(1682U);
    msg.setSourceEntity(133U);
    msg.setDestination(37086U);
    msg.setDestinationEntity(55U);
    msg.value = 0.13950497617634694;

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
    msg.setTimeStamp(0.2217058152905239);
    msg.setSource(41206U);
    msg.setSourceEntity(42U);
    msg.setDestination(6181U);
    msg.setDestinationEntity(164U);
    msg.type = 11U;
    msg.frequency = 137940466U;
    msg.min_range = 57486U;
    msg.max_range = 43478U;
    msg.bits_per_point = 125U;
    msg.scale_factor = 0.10812614820699684;
    const signed char tmp_msg_0[] = {-75, 39, -43, -83, 76, -63, 36, 111, -20, 67, -27, 18, -37, -27, -116, 43, 116, 5, -64, 99, 71, -66, 3, 101, 64, 71, 76, 89, 107, -21, -101, 100, -97, 88, 31, -61, 81, 117, 10, 38, -41, -44, -90, 61, -39, -119, -7, 25, 50, -80, 76, -18, 75, 83};
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
    msg.setTimeStamp(0.6542230266948564);
    msg.setSource(57078U);
    msg.setSourceEntity(118U);
    msg.setDestination(53500U);
    msg.setDestinationEntity(84U);
    msg.type = 167U;
    msg.frequency = 667422278U;
    msg.min_range = 31721U;
    msg.max_range = 48516U;
    msg.bits_per_point = 213U;
    msg.scale_factor = 0.14316689273374272;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6447771205737548;
    tmp_msg_0.beam_height = 0.46179288519517403;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {67, 76, 28, -126, 68, -7, 106, -106, -73, 19, 115, 126, 6, 28, 35, 116, 71};
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
    msg.setTimeStamp(0.7476743547003137);
    msg.setSource(63235U);
    msg.setSourceEntity(158U);
    msg.setDestination(57493U);
    msg.setDestinationEntity(1U);
    msg.type = 115U;
    msg.frequency = 859570076U;
    msg.min_range = 16426U;
    msg.max_range = 62895U;
    msg.bits_per_point = 198U;
    msg.scale_factor = 0.416295694196134;
    const signed char tmp_msg_0[] = {-29, 28, 59, -125, 101, 60, 82, 114, -4, 19, -95, 104, 47, 9, -55, -60, -84, -106, 104, 17};
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
    msg.setTimeStamp(0.011335718036639242);
    msg.setSource(57753U);
    msg.setSourceEntity(34U);
    msg.setDestination(428U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.37702187091860684);
    msg.setSource(37872U);
    msg.setSourceEntity(14U);
    msg.setDestination(65482U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.9770131499994686);
    msg.setSource(5382U);
    msg.setSourceEntity(201U);
    msg.setDestination(27082U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.07889529802988782);
    msg.setSource(50876U);
    msg.setSourceEntity(163U);
    msg.setDestination(35266U);
    msg.setDestinationEntity(190U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.20946210825690936);
    msg.setSource(62094U);
    msg.setSourceEntity(155U);
    msg.setDestination(6505U);
    msg.setDestinationEntity(173U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.6228588175622579);
    msg.setSource(63115U);
    msg.setSourceEntity(24U);
    msg.setDestination(42486U);
    msg.setDestinationEntity(35U);
    msg.op = 248U;

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
    msg.setTimeStamp(0.376536320658893);
    msg.setSource(46156U);
    msg.setSourceEntity(126U);
    msg.setDestination(42124U);
    msg.setDestinationEntity(19U);
    msg.value = 0.9522293026784522;
    msg.confidence = 0.004317069230375337;
    msg.opmodes.assign("LPVNEIQOUHTLIRPQKASXXMRBNZGCTMSJOVSTVQBCNSIOCLIBUKLUYWJMVMUDEOHUCQORGQPBXJTWGREGNBHZRZPMNPECYDWRIPEAKZLUMKNTSJKHDAXEOWJGMHJVTXQXXVCQBVJXKHDFWALBMSHBYGAFAOEUERQIKNOYSADJUODIGIFMDKYQFFKDIBACZTAVTFVZZGHLWYFHWQOUWYNSLCGXNPHCIGFWZJDY");

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
    msg.setTimeStamp(0.09345835838175698);
    msg.setSource(57875U);
    msg.setSourceEntity(31U);
    msg.setDestination(56772U);
    msg.setDestinationEntity(41U);
    msg.value = 0.7746290032276182;
    msg.confidence = 0.5438237391015062;
    msg.opmodes.assign("FTMWDOWFPLMOCJQCVULAIBPMAWLZJDSRGHXMWQVGEECXZUAYZBZMLCLDJAIJMHPPBDQDONKBMANURMTGSYBCFENZPLW");

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
    msg.setTimeStamp(0.7202921608881289);
    msg.setSource(41159U);
    msg.setSourceEntity(196U);
    msg.setDestination(56260U);
    msg.setDestinationEntity(194U);
    msg.value = 0.5456501190549933;
    msg.confidence = 0.4428809616775119;
    msg.opmodes.assign("OUGUFOCKFQTLQ");

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
    msg.setTimeStamp(0.8171488404612768);
    msg.setSource(51834U);
    msg.setSourceEntity(47U);
    msg.setDestination(54984U);
    msg.setDestinationEntity(27U);
    msg.itow = 220295861U;
    msg.lat = 0.5049705762110528;
    msg.lon = 0.11193948441392743;
    msg.height_ell = 0.6563426569113251;
    msg.height_sea = 0.44123557492295584;
    msg.hacc = 0.048661580861659726;
    msg.vacc = 0.9478053292600843;
    msg.vel_n = 0.3393677317740741;
    msg.vel_e = 0.4029536572899275;
    msg.vel_d = 0.6122079217239318;
    msg.speed = 0.32149579940511563;
    msg.gspeed = 0.8692057125541727;
    msg.heading = 0.6769986461238029;
    msg.sacc = 0.9925303344459294;
    msg.cacc = 0.4014954859659736;

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
    msg.setTimeStamp(0.2207770555128855);
    msg.setSource(63885U);
    msg.setSourceEntity(11U);
    msg.setDestination(13261U);
    msg.setDestinationEntity(97U);
    msg.itow = 3378471236U;
    msg.lat = 0.19485398324802483;
    msg.lon = 0.15621881923915826;
    msg.height_ell = 0.839893600371527;
    msg.height_sea = 0.5270895196461359;
    msg.hacc = 0.03973633324030401;
    msg.vacc = 0.8596430393855311;
    msg.vel_n = 0.8990506372260115;
    msg.vel_e = 0.9754724846163897;
    msg.vel_d = 0.8664737422014952;
    msg.speed = 0.6465221687099331;
    msg.gspeed = 0.7536089027356503;
    msg.heading = 0.4743606556947947;
    msg.sacc = 0.518879458957003;
    msg.cacc = 0.21167716547185955;

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
    msg.setTimeStamp(0.09280610797732369);
    msg.setSource(49597U);
    msg.setSourceEntity(27U);
    msg.setDestination(36982U);
    msg.setDestinationEntity(18U);
    msg.itow = 2211175708U;
    msg.lat = 0.5287328799229765;
    msg.lon = 0.6181447881621603;
    msg.height_ell = 0.912816553760484;
    msg.height_sea = 0.09259884156269682;
    msg.hacc = 0.8918432365906854;
    msg.vacc = 0.10569242089939646;
    msg.vel_n = 0.18834267278389805;
    msg.vel_e = 0.01880766150788593;
    msg.vel_d = 0.4842354733765266;
    msg.speed = 0.18616840894480557;
    msg.gspeed = 0.6429768659489624;
    msg.heading = 0.0037118776595685965;
    msg.sacc = 0.9212447549410835;
    msg.cacc = 0.39956559146282744;

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
    msg.setTimeStamp(0.8994063523408741);
    msg.setSource(53043U);
    msg.setSourceEntity(31U);
    msg.setDestination(38735U);
    msg.setDestinationEntity(166U);
    msg.id = 9U;
    msg.value = 0.02903846732758686;

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
    msg.setTimeStamp(0.19880085476647613);
    msg.setSource(31797U);
    msg.setSourceEntity(166U);
    msg.setDestination(16742U);
    msg.setDestinationEntity(175U);
    msg.id = 81U;
    msg.value = 0.0938201030399437;

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
    msg.setTimeStamp(0.8964386357004835);
    msg.setSource(3138U);
    msg.setSourceEntity(234U);
    msg.setDestination(18339U);
    msg.setDestinationEntity(117U);
    msg.id = 212U;
    msg.value = 0.6509863981141629;

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
    msg.setTimeStamp(0.049831346146795075);
    msg.setSource(48189U);
    msg.setSourceEntity(215U);
    msg.setDestination(17377U);
    msg.setDestinationEntity(157U);
    msg.x = 0.5444511420212457;
    msg.y = 0.15171374094643675;
    msg.z = 0.1412668207052401;
    msg.phi = 0.12050541599401732;
    msg.theta = 0.8176133766691992;
    msg.psi = 0.859627379182509;

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
    msg.setTimeStamp(0.9322905464833392);
    msg.setSource(19020U);
    msg.setSourceEntity(168U);
    msg.setDestination(8518U);
    msg.setDestinationEntity(212U);
    msg.x = 0.04766894105621655;
    msg.y = 0.6976529448005502;
    msg.z = 0.8924559264406108;
    msg.phi = 0.23078474800736015;
    msg.theta = 0.16403185480225024;
    msg.psi = 0.005721055389136254;

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
    msg.setTimeStamp(0.30555607457956535);
    msg.setSource(26059U);
    msg.setSourceEntity(52U);
    msg.setDestination(23130U);
    msg.setDestinationEntity(125U);
    msg.x = 0.9774641856493581;
    msg.y = 0.7630847238186441;
    msg.z = 0.8201728844288046;
    msg.phi = 0.3918188480205562;
    msg.theta = 0.15140593796527024;
    msg.psi = 0.3117713604884871;

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
    msg.setTimeStamp(0.6227292925495416);
    msg.setSource(20183U);
    msg.setSourceEntity(162U);
    msg.setDestination(35687U);
    msg.setDestinationEntity(218U);
    msg.beam_width = 0.6926808275104117;
    msg.beam_height = 0.9728457780929775;

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
    msg.setTimeStamp(0.7655971164790628);
    msg.setSource(65061U);
    msg.setSourceEntity(138U);
    msg.setDestination(31671U);
    msg.setDestinationEntity(163U);
    msg.beam_width = 0.04185765412345466;
    msg.beam_height = 0.8461043587767164;

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
    msg.setTimeStamp(0.0033124980512997393);
    msg.setSource(57117U);
    msg.setSourceEntity(86U);
    msg.setDestination(45682U);
    msg.setDestinationEntity(97U);
    msg.beam_width = 0.23688789941585253;
    msg.beam_height = 0.7723644645367242;

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
    msg.setTimeStamp(0.37281721048412386);
    msg.setSource(10937U);
    msg.setSourceEntity(92U);
    msg.setDestination(5756U);
    msg.setDestinationEntity(108U);
    msg.sane = 240U;

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
    msg.setTimeStamp(0.18841008851490437);
    msg.setSource(19297U);
    msg.setSourceEntity(241U);
    msg.setDestination(1972U);
    msg.setDestinationEntity(173U);
    msg.sane = 39U;

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
    msg.setTimeStamp(0.4974854463117032);
    msg.setSource(34496U);
    msg.setSourceEntity(95U);
    msg.setDestination(19432U);
    msg.setDestinationEntity(208U);
    msg.sane = 189U;

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
    msg.setTimeStamp(0.2609010518453101);
    msg.setSource(17789U);
    msg.setSourceEntity(140U);
    msg.setDestination(19724U);
    msg.setDestinationEntity(165U);
    msg.value = 0.02374105696327322;

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
    msg.setTimeStamp(0.31639248876541437);
    msg.setSource(60543U);
    msg.setSourceEntity(251U);
    msg.setDestination(20392U);
    msg.setDestinationEntity(52U);
    msg.value = 0.3941365959718717;

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
    msg.setTimeStamp(0.385030768407678);
    msg.setSource(65282U);
    msg.setSourceEntity(234U);
    msg.setDestination(45426U);
    msg.setDestinationEntity(200U);
    msg.value = 0.830592209575875;

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
    msg.setTimeStamp(0.6373758758381218);
    msg.setSource(17754U);
    msg.setSourceEntity(26U);
    msg.setDestination(27378U);
    msg.setDestinationEntity(184U);
    msg.value = 0.4986008460620206;

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
    msg.setTimeStamp(0.8166928255320294);
    msg.setSource(18257U);
    msg.setSourceEntity(173U);
    msg.setDestination(61561U);
    msg.setDestinationEntity(131U);
    msg.value = 0.7175777194788833;

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
    msg.setTimeStamp(0.8923671807637557);
    msg.setSource(48215U);
    msg.setSourceEntity(210U);
    msg.setDestination(46945U);
    msg.setDestinationEntity(45U);
    msg.value = 0.4404422650382336;

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
    msg.setTimeStamp(0.1331008434738501);
    msg.setSource(18148U);
    msg.setSourceEntity(169U);
    msg.setDestination(36790U);
    msg.setDestinationEntity(234U);
    msg.value = 0.6250515075541527;

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
    msg.setTimeStamp(0.9550197910225804);
    msg.setSource(42713U);
    msg.setSourceEntity(59U);
    msg.setDestination(38586U);
    msg.setDestinationEntity(131U);
    msg.value = 0.7583898241420781;

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
    msg.setTimeStamp(0.7892356873245975);
    msg.setSource(5892U);
    msg.setSourceEntity(120U);
    msg.setDestination(50166U);
    msg.setDestinationEntity(104U);
    msg.value = 0.528589968989311;

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
    msg.setTimeStamp(0.5227937511868328);
    msg.setSource(32743U);
    msg.setSourceEntity(252U);
    msg.setDestination(48081U);
    msg.setDestinationEntity(78U);
    msg.value = 0.19422100056511526;

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
    msg.setTimeStamp(0.4201753813288135);
    msg.setSource(46650U);
    msg.setSourceEntity(9U);
    msg.setDestination(19480U);
    msg.setDestinationEntity(91U);
    msg.value = 0.863923673349511;

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
    msg.setTimeStamp(0.18855496508214242);
    msg.setSource(1165U);
    msg.setSourceEntity(79U);
    msg.setDestination(12935U);
    msg.setDestinationEntity(176U);
    msg.value = 0.23495351892734928;

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
    msg.setTimeStamp(0.6711938328220017);
    msg.setSource(49648U);
    msg.setSourceEntity(7U);
    msg.setDestination(15914U);
    msg.setDestinationEntity(46U);
    msg.value = 0.5918309816264737;

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
    msg.setTimeStamp(0.7626487187017965);
    msg.setSource(59381U);
    msg.setSourceEntity(214U);
    msg.setDestination(51984U);
    msg.setDestinationEntity(88U);
    msg.value = 0.7941337836622223;

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
    msg.setTimeStamp(0.927139111404331);
    msg.setSource(40585U);
    msg.setSourceEntity(128U);
    msg.setDestination(64448U);
    msg.setDestinationEntity(129U);
    msg.value = 0.49829559337292173;

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
    msg.setTimeStamp(0.2072556290051487);
    msg.setSource(17675U);
    msg.setSourceEntity(62U);
    msg.setDestination(59101U);
    msg.setDestinationEntity(159U);
    msg.value = 0.3694356494688851;

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
    msg.setTimeStamp(0.9117793962150376);
    msg.setSource(61990U);
    msg.setSourceEntity(95U);
    msg.setDestination(56605U);
    msg.setDestinationEntity(225U);
    msg.value = 0.6590376222459329;

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
    msg.setTimeStamp(0.13795124587442897);
    msg.setSource(41583U);
    msg.setSourceEntity(17U);
    msg.setDestination(35622U);
    msg.setDestinationEntity(232U);
    msg.value = 0.7061952372266624;

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
    msg.setTimeStamp(0.18203373545878254);
    msg.setSource(52406U);
    msg.setSourceEntity(226U);
    msg.setDestination(33541U);
    msg.setDestinationEntity(224U);
    msg.value = 0.9993324917909805;

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
    msg.setTimeStamp(0.5528364974653128);
    msg.setSource(2043U);
    msg.setSourceEntity(26U);
    msg.setDestination(64530U);
    msg.setDestinationEntity(224U);
    msg.value = 0.9357050323119731;

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
    msg.setTimeStamp(0.4705075373086446);
    msg.setSource(58928U);
    msg.setSourceEntity(122U);
    msg.setDestination(15541U);
    msg.setDestinationEntity(107U);
    msg.value = 0.80127257383508;

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
    msg.setTimeStamp(0.2738802398860124);
    msg.setSource(8965U);
    msg.setSourceEntity(104U);
    msg.setDestination(50476U);
    msg.setDestinationEntity(62U);
    msg.value = 0.11562647180472507;

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
    msg.setTimeStamp(0.2695209635442034);
    msg.setSource(30846U);
    msg.setSourceEntity(85U);
    msg.setDestination(49501U);
    msg.setDestinationEntity(111U);
    msg.value = 0.27024874638496477;

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
    msg.setTimeStamp(0.1848554498411552);
    msg.setSource(32129U);
    msg.setSourceEntity(193U);
    msg.setDestination(15896U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5779744408302262;

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
    msg.setTimeStamp(0.9898423533375222);
    msg.setSource(1775U);
    msg.setSourceEntity(56U);
    msg.setDestination(16623U);
    msg.setDestinationEntity(45U);
    msg.validity = 21000U;
    msg.type = 123U;
    msg.tow = 2615264675U;
    msg.base_lat = 0.6949561265192565;
    msg.base_lon = 0.6438352724480774;
    msg.base_height = 0.7774746926544411;
    msg.n = 0.7739916418051637;
    msg.e = 0.28873337789638365;
    msg.d = 0.8373461721255235;
    msg.v_n = 0.7619266706102497;
    msg.v_e = 0.9132010554600893;
    msg.v_d = 0.008820614131394122;
    msg.satellites = 56U;
    msg.iar_hyp = 29954U;
    msg.iar_ratio = 0.8531371743859697;

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
    msg.setTimeStamp(0.446941826423946);
    msg.setSource(58662U);
    msg.setSourceEntity(38U);
    msg.setDestination(9639U);
    msg.setDestinationEntity(231U);
    msg.validity = 21532U;
    msg.type = 204U;
    msg.tow = 224569597U;
    msg.base_lat = 0.8593907644156156;
    msg.base_lon = 0.5813845455922405;
    msg.base_height = 0.9755778510488187;
    msg.n = 0.7441362591244736;
    msg.e = 0.9085425749442432;
    msg.d = 0.0236207963482451;
    msg.v_n = 0.5540234085063188;
    msg.v_e = 0.17084632853520454;
    msg.v_d = 0.8551657996836555;
    msg.satellites = 173U;
    msg.iar_hyp = 39235U;
    msg.iar_ratio = 0.28391328807844984;

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
    msg.setTimeStamp(0.2857546796226277);
    msg.setSource(28659U);
    msg.setSourceEntity(231U);
    msg.setDestination(32132U);
    msg.setDestinationEntity(82U);
    msg.validity = 13292U;
    msg.type = 163U;
    msg.tow = 3933568507U;
    msg.base_lat = 0.8415935176470458;
    msg.base_lon = 0.1536959880205132;
    msg.base_height = 0.9797189187264378;
    msg.n = 0.7160453943626639;
    msg.e = 0.6153688607087154;
    msg.d = 0.4503421416607074;
    msg.v_n = 0.3848473710047816;
    msg.v_e = 0.05784964953378513;
    msg.v_d = 0.4175273210298365;
    msg.satellites = 152U;
    msg.iar_hyp = 18984U;
    msg.iar_ratio = 0.5757239651915433;

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
    msg.setTimeStamp(0.0034536761903650737);
    msg.setSource(25186U);
    msg.setSourceEntity(166U);
    msg.setDestination(56435U);
    msg.setDestinationEntity(246U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9413539162267249;
    tmp_msg_0.lon = 0.6881350800652261;
    tmp_msg_0.height = 0.7289837000365755;
    tmp_msg_0.x = 0.7083693225509196;
    tmp_msg_0.y = 0.42508572391149646;
    tmp_msg_0.z = 0.6394831930182102;
    tmp_msg_0.phi = 0.5758421222699462;
    tmp_msg_0.theta = 0.9273544456576023;
    tmp_msg_0.psi = 0.03945456269069436;
    tmp_msg_0.u = 0.10276658364170055;
    tmp_msg_0.v = 0.0013173777818628052;
    tmp_msg_0.w = 0.9233599680797295;
    tmp_msg_0.vx = 0.03740944878631758;
    tmp_msg_0.vy = 0.4651631280440187;
    tmp_msg_0.vz = 0.04321229435164631;
    tmp_msg_0.p = 0.24583748404931716;
    tmp_msg_0.q = 0.7932636044845828;
    tmp_msg_0.r = 0.8246136268249561;
    tmp_msg_0.depth = 0.2167648617103748;
    tmp_msg_0.alt = 0.5449607602220181;
    msg.state.set(tmp_msg_0);
    msg.type = 164U;

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
    msg.setTimeStamp(0.041746149154369916);
    msg.setSource(45896U);
    msg.setSourceEntity(165U);
    msg.setDestination(43499U);
    msg.setDestinationEntity(37U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7360735912518619;
    tmp_msg_0.lon = 0.32781978954318824;
    tmp_msg_0.height = 0.7381011560988556;
    tmp_msg_0.x = 0.7279455693672059;
    tmp_msg_0.y = 0.1338998798203641;
    tmp_msg_0.z = 0.7473681043350547;
    tmp_msg_0.phi = 0.40607749688042427;
    tmp_msg_0.theta = 0.11514047186361231;
    tmp_msg_0.psi = 0.6578401499505322;
    tmp_msg_0.u = 0.430458328218715;
    tmp_msg_0.v = 0.1309974839013407;
    tmp_msg_0.w = 0.5811832742751116;
    tmp_msg_0.vx = 0.6915526723478084;
    tmp_msg_0.vy = 0.17601412318147003;
    tmp_msg_0.vz = 0.6978780551943558;
    tmp_msg_0.p = 0.18060044255670538;
    tmp_msg_0.q = 0.8885531891443228;
    tmp_msg_0.r = 0.7245207724465734;
    tmp_msg_0.depth = 0.37343163715912053;
    tmp_msg_0.alt = 0.590367623052177;
    msg.state.set(tmp_msg_0);
    msg.type = 210U;

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
    msg.setTimeStamp(0.6879742661850621);
    msg.setSource(10553U);
    msg.setSourceEntity(114U);
    msg.setDestination(62872U);
    msg.setDestinationEntity(68U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8922810986071068;
    tmp_msg_0.lon = 0.2808194436693102;
    tmp_msg_0.height = 0.6969815060196962;
    tmp_msg_0.x = 0.9089992777204325;
    tmp_msg_0.y = 0.8264114737615456;
    tmp_msg_0.z = 0.8186527621668366;
    tmp_msg_0.phi = 0.6132377386033494;
    tmp_msg_0.theta = 0.9364349610843454;
    tmp_msg_0.psi = 0.5243979997418565;
    tmp_msg_0.u = 0.47815921939355366;
    tmp_msg_0.v = 0.9481310852046639;
    tmp_msg_0.w = 0.23476965181506648;
    tmp_msg_0.vx = 0.8651722402705535;
    tmp_msg_0.vy = 0.9509760360065419;
    tmp_msg_0.vz = 0.022045865221729355;
    tmp_msg_0.p = 0.7689398158727649;
    tmp_msg_0.q = 0.2587216638410029;
    tmp_msg_0.r = 0.06104457209646508;
    tmp_msg_0.depth = 0.3457369917067701;
    tmp_msg_0.alt = 0.9128353548330683;
    msg.state.set(tmp_msg_0);
    msg.type = 20U;

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
    msg.setTimeStamp(0.7293016444071063);
    msg.setSource(53272U);
    msg.setSourceEntity(153U);
    msg.setDestination(46790U);
    msg.setDestinationEntity(42U);
    msg.value = 0.3090360713247503;

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
    msg.setTimeStamp(0.09022282351914535);
    msg.setSource(65414U);
    msg.setSourceEntity(64U);
    msg.setDestination(45988U);
    msg.setDestinationEntity(170U);
    msg.value = 0.4119499439644324;

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
    msg.setTimeStamp(0.9440294304974421);
    msg.setSource(15935U);
    msg.setSourceEntity(85U);
    msg.setDestination(21107U);
    msg.setDestinationEntity(31U);
    msg.value = 0.8941459429475426;

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
    msg.setTimeStamp(0.9932950494807864);
    msg.setSource(55464U);
    msg.setSourceEntity(70U);
    msg.setDestination(12414U);
    msg.setDestinationEntity(109U);
    msg.value = 0.015718079479590807;

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
    msg.setTimeStamp(0.095612943829533);
    msg.setSource(7581U);
    msg.setSourceEntity(217U);
    msg.setDestination(11949U);
    msg.setDestinationEntity(79U);
    msg.value = 0.2544097468788691;

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
    msg.setTimeStamp(0.9053614835978971);
    msg.setSource(64343U);
    msg.setSourceEntity(117U);
    msg.setDestination(7998U);
    msg.setDestinationEntity(199U);
    msg.value = 0.29236780919893446;

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
    msg.setTimeStamp(0.8762463058625145);
    msg.setSource(57420U);
    msg.setSourceEntity(228U);
    msg.setDestination(58969U);
    msg.setDestinationEntity(110U);
    msg.value = 0.9611642246371549;

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
    msg.setTimeStamp(0.1330698535419329);
    msg.setSource(12231U);
    msg.setSourceEntity(70U);
    msg.setDestination(42983U);
    msg.setDestinationEntity(92U);
    msg.value = 0.8013605964431094;

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
    msg.setTimeStamp(0.00011633605537098024);
    msg.setSource(26087U);
    msg.setSourceEntity(139U);
    msg.setDestination(49748U);
    msg.setDestinationEntity(182U);
    msg.value = 0.7854345758489206;

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
    msg.setTimeStamp(0.6102599844108669);
    msg.setSource(58411U);
    msg.setSourceEntity(88U);
    msg.setDestination(39865U);
    msg.setDestinationEntity(57U);
    msg.value = 0.42517492344159336;

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
    msg.setTimeStamp(0.05537137865582398);
    msg.setSource(59874U);
    msg.setSourceEntity(160U);
    msg.setDestination(929U);
    msg.setDestinationEntity(182U);
    msg.value = 0.7946909951127599;

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
    msg.setTimeStamp(0.24542008897173728);
    msg.setSource(28949U);
    msg.setSourceEntity(9U);
    msg.setDestination(24707U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8442878713365259;

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
    msg.setTimeStamp(0.9829154059074736);
    msg.setSource(302U);
    msg.setSourceEntity(237U);
    msg.setDestination(6599U);
    msg.setDestinationEntity(7U);
    msg.value = 0.4765784458389484;

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
    msg.setTimeStamp(0.36203655363601017);
    msg.setSource(53968U);
    msg.setSourceEntity(252U);
    msg.setDestination(53317U);
    msg.setDestinationEntity(172U);
    msg.value = 0.3478856563064514;

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
    msg.setTimeStamp(0.8071644965956027);
    msg.setSource(49163U);
    msg.setSourceEntity(133U);
    msg.setDestination(46170U);
    msg.setDestinationEntity(59U);
    msg.value = 0.6696961830153368;

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
    msg.setTimeStamp(0.8080950119980794);
    msg.setSource(21770U);
    msg.setSourceEntity(145U);
    msg.setDestination(552U);
    msg.setDestinationEntity(59U);
    msg.id = 234U;
    msg.zoom = 36U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.3130930870621077);
    msg.setSource(895U);
    msg.setSourceEntity(90U);
    msg.setDestination(33655U);
    msg.setDestinationEntity(216U);
    msg.id = 85U;
    msg.zoom = 161U;
    msg.action = 77U;

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
    msg.setTimeStamp(0.9696477420921632);
    msg.setSource(2678U);
    msg.setSourceEntity(52U);
    msg.setDestination(57904U);
    msg.setDestinationEntity(53U);
    msg.id = 174U;
    msg.zoom = 86U;
    msg.action = 82U;

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
    msg.setTimeStamp(0.032912795741214085);
    msg.setSource(50117U);
    msg.setSourceEntity(94U);
    msg.setDestination(41111U);
    msg.setDestinationEntity(94U);
    msg.id = 211U;
    msg.value = 0.44098716592999154;

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
    msg.setTimeStamp(0.3304442951942075);
    msg.setSource(49538U);
    msg.setSourceEntity(150U);
    msg.setDestination(51216U);
    msg.setDestinationEntity(252U);
    msg.id = 79U;
    msg.value = 0.08126322077482484;

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
    msg.setTimeStamp(0.4093151895868481);
    msg.setSource(46331U);
    msg.setSourceEntity(125U);
    msg.setDestination(25582U);
    msg.setDestinationEntity(104U);
    msg.id = 83U;
    msg.value = 0.6151347897535119;

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
    msg.setTimeStamp(0.6667588736607066);
    msg.setSource(41556U);
    msg.setSourceEntity(61U);
    msg.setDestination(21690U);
    msg.setDestinationEntity(57U);
    msg.id = 186U;
    msg.value = 0.2604190199199057;

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
    msg.setTimeStamp(0.5039015994662353);
    msg.setSource(43577U);
    msg.setSourceEntity(224U);
    msg.setDestination(52431U);
    msg.setDestinationEntity(18U);
    msg.id = 32U;
    msg.value = 0.23100816558985837;

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
    msg.setTimeStamp(0.5450452745398507);
    msg.setSource(930U);
    msg.setSourceEntity(116U);
    msg.setDestination(15286U);
    msg.setDestinationEntity(216U);
    msg.id = 61U;
    msg.value = 0.9690169387694888;

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
    msg.setTimeStamp(0.9766393937616117);
    msg.setSource(39749U);
    msg.setSourceEntity(151U);
    msg.setDestination(54687U);
    msg.setDestinationEntity(56U);
    msg.id = 133U;
    msg.angle = 0.6440110584188105;

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
    msg.setTimeStamp(0.8259697204614895);
    msg.setSource(46431U);
    msg.setSourceEntity(103U);
    msg.setDestination(41520U);
    msg.setDestinationEntity(173U);
    msg.id = 100U;
    msg.angle = 0.9569727261984124;

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
    msg.setTimeStamp(0.5729067255939151);
    msg.setSource(17270U);
    msg.setSourceEntity(7U);
    msg.setDestination(37963U);
    msg.setDestinationEntity(218U);
    msg.id = 133U;
    msg.angle = 0.751366431028877;

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
    msg.setTimeStamp(0.19270062504080454);
    msg.setSource(16916U);
    msg.setSourceEntity(4U);
    msg.setDestination(24962U);
    msg.setDestinationEntity(96U);
    msg.op = 210U;
    msg.actions.assign("QYDEZURNFKRUXMVVLAHFCEDBTPAJWTKAJROYIZLYXNFKCRYEDAGBNTSUPQXUOOIJZTLJCYFHNYKVAAVMFGDOTFHWRGGCMMRUUCMNTFVBLQUBQOZMOHMNZJZCYURINWQNKWJPPRBLLJFEAXCXBIWVEGSULTQPTSISHZHJKSWHCPEMGDOJI");

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
    msg.setTimeStamp(0.03683223789851786);
    msg.setSource(47476U);
    msg.setSourceEntity(24U);
    msg.setDestination(41171U);
    msg.setDestinationEntity(176U);
    msg.op = 186U;
    msg.actions.assign("QOIHBSWYBIIZRDMOFVHSCOSULKZYTPXAOVEDSUXFBQIOJAHFCJYJKZPKMKPOVQTZWRNCEVENPGAURQUZNLVRXNNGGUFHOBCMQIMGIAIOLVUJUCQPUGCYZEBXCADNOFCPZNDXNTBYMXVCAKHABHESDLUAAKNHSTRJYTTVTSTRKDIPGREBPLFRJHFQYDVQMDXWYLEXQFZDWRMFKJLFZGSQSEGSBGYRWLLWWTJJUEPWKDBAWIIMVXPLKCXGWONJM");

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
    msg.setTimeStamp(0.2952481669142608);
    msg.setSource(55133U);
    msg.setSourceEntity(128U);
    msg.setDestination(4124U);
    msg.setDestinationEntity(169U);
    msg.op = 232U;
    msg.actions.assign("DNCEIZRKULNDCGFGLGDAAUUIWURYBZTETPQIPEXZDDDKIRTYKYLIVSNEIRZJHXNYSCRZALJHKFAJXZXXNHRHWOVNXMUMUTFMIWJGLGKEEULGYCEJKQPJABWPCVWSZOVMMFTTHZICBQMAHJZHNYSRCXVMGQBUBNWSOODEJBFTUYDLPIPQYCOPCQOGOTBEQTSWXQAPNRWZJLPOWFGXTVHNCUIORSMAKAVK");

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
    msg.setTimeStamp(0.4199907789661146);
    msg.setSource(63125U);
    msg.setSourceEntity(80U);
    msg.setDestination(44044U);
    msg.setDestinationEntity(133U);
    msg.actions.assign("WVXBIZBYEENZLWEGIYPQKHCCONPASSWLIMHXPXUURITDHXVRDKTOTLZGIYZYNVRSKAWFFDBRROIUVH");

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
    msg.setTimeStamp(0.5871399329970858);
    msg.setSource(1341U);
    msg.setSourceEntity(25U);
    msg.setDestination(44262U);
    msg.setDestinationEntity(146U);
    msg.actions.assign("JXMQQECGIYUUGTDJNCAUXHDKTBRBFXRMSHMKWDUTKYZW");

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
    msg.setTimeStamp(0.8700065905701501);
    msg.setSource(34032U);
    msg.setSourceEntity(119U);
    msg.setDestination(37299U);
    msg.setDestinationEntity(93U);
    msg.actions.assign("TAOJOEQEVUFOSACBMUNRGCHSJIMCXSTRUXELEVGUIINUHTRDXQRYPWLJDQPYOQJAGTOGVSPMYMNVKWLCRRCWLWNEFZYATIMUZTIDHNWSHQNNBPMOVJWLKXUHOWZZFJGNKDHRTQPLZOICTBFJAGXUXKAMZQMEBSLXZVYZDAFEUMDDVFEBVBXISTCKIFRXNHQGWWYJZRVRDQBZPYHISTSVOYBFKJCJPHMAPOCKQWYKSG");

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
    msg.setTimeStamp(0.7046398604676957);
    msg.setSource(57148U);
    msg.setSourceEntity(77U);
    msg.setDestination(52794U);
    msg.setDestinationEntity(79U);
    msg.button = 181U;
    msg.value = 200U;

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
    msg.setTimeStamp(0.6197809043411694);
    msg.setSource(55024U);
    msg.setSourceEntity(248U);
    msg.setDestination(1659U);
    msg.setDestinationEntity(66U);
    msg.button = 215U;
    msg.value = 138U;

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
    msg.setTimeStamp(0.291996089688738);
    msg.setSource(53861U);
    msg.setSourceEntity(127U);
    msg.setDestination(55798U);
    msg.setDestinationEntity(91U);
    msg.button = 184U;
    msg.value = 100U;

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
    msg.setTimeStamp(0.7261324080928767);
    msg.setSource(46811U);
    msg.setSourceEntity(115U);
    msg.setDestination(36861U);
    msg.setDestinationEntity(23U);
    msg.op = 16U;
    msg.text.assign("TFLZZAZZITVEPXBQBXSMHCSWIVKNSVMD");

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
    msg.setTimeStamp(0.13491898432462013);
    msg.setSource(53289U);
    msg.setSourceEntity(101U);
    msg.setDestination(44264U);
    msg.setDestinationEntity(199U);
    msg.op = 88U;
    msg.text.assign("FCABDDSRQMYQELIRETMAVGRNXIIXFCGJEAGOERNAMJLKLVJVMEZQPFWXCBDGOCSFKUKYULTZNWHAUPTLSJGYHWYOYDOHELXTCZUAZBGRQRKBGWYOWMDBXMCHMJGFJTZRQUMELXVWQSPNHYHROQAIKOAWKKINEOBUZYGFNZQHDAQWOVTQNSKVJPCFEJVSIADSLSFHBHDUWPKINTYIEDCTVHCRMILJPSRYFOJBFTBXKVNUCLX");

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
    msg.setTimeStamp(0.7296424402989626);
    msg.setSource(11323U);
    msg.setSourceEntity(36U);
    msg.setDestination(1570U);
    msg.setDestinationEntity(84U);
    msg.op = 102U;
    msg.text.assign("FGYDFNQKSOXECLJPJKA");

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
    msg.setTimeStamp(0.24334859596373148);
    msg.setSource(18621U);
    msg.setSourceEntity(119U);
    msg.setDestination(38107U);
    msg.setDestinationEntity(86U);
    msg.op = 165U;
    msg.time_remain = 0.1855052336626979;
    msg.sched_time = 0.6930192119399786;

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
    msg.setTimeStamp(0.2684385102428901);
    msg.setSource(4266U);
    msg.setSourceEntity(72U);
    msg.setDestination(17581U);
    msg.setDestinationEntity(253U);
    msg.op = 189U;
    msg.time_remain = 0.8178943330563548;
    msg.sched_time = 0.5504374255225319;

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
    msg.setTimeStamp(0.4628988825213348);
    msg.setSource(51554U);
    msg.setSourceEntity(119U);
    msg.setDestination(35170U);
    msg.setDestinationEntity(71U);
    msg.op = 83U;
    msg.time_remain = 0.7098224748578693;
    msg.sched_time = 0.6892028790538421;

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
    msg.setTimeStamp(0.18660566020563296);
    msg.setSource(50227U);
    msg.setSourceEntity(104U);
    msg.setDestination(36717U);
    msg.setDestinationEntity(235U);
    msg.name.assign("AVBZIOTQVNWNUPBEFLXJGEXNKGYGOKCDLBLLYXZTNLDPLLWHFEABYTPOFTYURFZEGOARQJIPMXIMSREKVYTZTNASMKXRVDVHICYKGHAHMMZNHPPFYNFPESLIRQUDBMUYYKNWCCVKMQZJIGUIOOCEEMJXBOCLDGCGSJRHFNTOXPKXJYWKWXEJJVUNZRJHQZCSTOWDBDAWQOXLKTRDQVZVFFDSIRI");
    msg.op = 7U;
    msg.sched_time = 0.18194327921360454;

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
    msg.setTimeStamp(0.8224741132209007);
    msg.setSource(52801U);
    msg.setSourceEntity(136U);
    msg.setDestination(31079U);
    msg.setDestinationEntity(79U);
    msg.name.assign("OHZWYJOXYSJMZPICCSVIVEKHQMQRGAWLIKUDSMFOXDTNSFLQLKTSGXLHFQAVDPYKAFGAWYPEQMTPWXELWYXVVEDTCJLOKDCWNBLHPINUJKFAUSXEKEAIKLCIUARBXVNUIOFVETMQZGFOEZYWGTAUISVFTBGHFOGHBQBPBECCRJZZBTRJZXNNUQAQB");
    msg.op = 118U;
    msg.sched_time = 0.2244753132745102;

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
    msg.setTimeStamp(0.046385387803990485);
    msg.setSource(40643U);
    msg.setSourceEntity(214U);
    msg.setDestination(33275U);
    msg.setDestinationEntity(173U);
    msg.name.assign("JYNQWPHAOUIRSJVDKDAIFLEWVHHFNHZHJQJCIRMOUFKDLOLPPXMOGFYPIRYLOWBMRQTQCMNTPBKXZFVVOARRUYCGPZEUJQTEWSCPZNOISANWMWCDIQFVYFBWMKXFRGMRISVGSWFOB");
    msg.op = 50U;
    msg.sched_time = 0.3455314307185362;

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
    msg.setTimeStamp(0.6987935131774102);
    msg.setSource(36634U);
    msg.setSourceEntity(235U);
    msg.setDestination(58621U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.671101508390001);
    msg.setSource(50023U);
    msg.setSourceEntity(248U);
    msg.setDestination(22523U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.30971177771512837);
    msg.setSource(32163U);
    msg.setSourceEntity(225U);
    msg.setDestination(61851U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.9730365534795506);
    msg.setSource(36807U);
    msg.setSourceEntity(151U);
    msg.setDestination(32344U);
    msg.setDestinationEntity(91U);
    msg.name.assign("UWVMRMHVBSUEROBXKMUKHZEBOCXTEAFQMSMQUG");
    msg.state = 241U;

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
    msg.setTimeStamp(0.854258549438004);
    msg.setSource(26121U);
    msg.setSourceEntity(167U);
    msg.setDestination(29372U);
    msg.setDestinationEntity(153U);
    msg.name.assign("YNFJHIMPUDOERGTFFOGXCRBKOXRTBQNCSOJFJLAZQDDRHYSUGQOUQUNKLLKXXEQGSLTOJUJYRPNMKVPKEJVRHOWGDFSZEBYEHUW");
    msg.state = 161U;

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
    msg.setTimeStamp(0.0007715060692540243);
    msg.setSource(19180U);
    msg.setSourceEntity(155U);
    msg.setDestination(614U);
    msg.setDestinationEntity(151U);
    msg.name.assign("XCRMHPAUNCZVKLLCUOYUBFZAQHY");
    msg.state = 182U;

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
    msg.setTimeStamp(0.6137800367183016);
    msg.setSource(3565U);
    msg.setSourceEntity(197U);
    msg.setDestination(22680U);
    msg.setDestinationEntity(123U);
    msg.name.assign("YYJYEMPAXHRIDKWQJFOXBAXIVVVGUGBVUIARUVVMEYESCTSLZYLOSLKSNPHNJQWURPTJAGYXSPMORASPLAULZDVVLIXTWIGBEPEHJJGYCWMMBJTFCMYPUHKCVHWUEMQCTNLENMQBICBRYIKSTZJTDWOGIHJKHFQKDOFDTSNHGBNQLRHUMNJETGSQXADZRDGNEWLTIRCOBNGKHKXQWOKAMXSURNYXQQIODZAZLDZPEWZPFFBCCFXWCVOKFFBPZ");
    msg.value = 184U;

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
    msg.setTimeStamp(0.004687955416054046);
    msg.setSource(31698U);
    msg.setSourceEntity(30U);
    msg.setDestination(36731U);
    msg.setDestinationEntity(221U);
    msg.name.assign("YSTFAXRIQBDZZYXIRMROVJKVWLNUUBXZFAVBZPUHJOXLDUNJJMMFKIYEWFGXFXETSVAGXZOZLSQCKHEEMRLTUROQLTTPQISCMUCCYEOMZWSZWPBFUIDVKCRWVEIOSFPNNWHBMEJAHXINBNVGAHSVTDCWWEPWPRVDSMKOEAJGBQHGTXNUGDJPQQQPYAMMIJPURNGRNAEJCZLYDKQBAG");
    msg.value = 97U;

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
    msg.setTimeStamp(0.3134152716875227);
    msg.setSource(54699U);
    msg.setSourceEntity(20U);
    msg.setDestination(19624U);
    msg.setDestinationEntity(92U);
    msg.name.assign("TIPTVYWZOVIYJKVADEGUBPGUKNMWFADWNMMVDXERJNNZZXCQDPSLHICDBPOJWBYWEGTEDKBEFGOOOJMLYGCMFSERIAAQUVVSHYKWSWBGWNHJSQMLRNDXEUYGGIQQPTTVIBHKRBHLNYHPICJPXAFECWBMYIRRFLJQLKLGCFBXSREMZUCHZWKGNVTROMTAAQCKFXUEJUODFKYTVYXKSZNO");
    msg.value = 232U;

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
    msg.setTimeStamp(0.79934869075231);
    msg.setSource(8243U);
    msg.setSourceEntity(132U);
    msg.setDestination(62298U);
    msg.setDestinationEntity(250U);
    msg.name.assign("SKSJXAQPLWLIKUFOTMIRYCQBIAKRYBTZTGSSALDEHIEMXBQRCGFJDMWLXQZIFAMBKZUNLFJCWHNTRLNSVETJGWVPVLOPREQQEUCDGOKWBYMXDJCHJKNQAOJEVONZYDHSKVZIQL");

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
    msg.setTimeStamp(0.32395815086464175);
    msg.setSource(13803U);
    msg.setSourceEntity(175U);
    msg.setDestination(19554U);
    msg.setDestinationEntity(13U);
    msg.name.assign("RHERHMYORIGKQKBTQUYCXVUCMTPNOLAUWYNTSAGRILJAMRKWTIXNCKKFXHKBKYXGHLCCFMPTZZGBUXOJVCYHNOIEBXYTZACOCXLHTPVFLYQNFLVDLGYMIUXEDBSPUJGARWQPFVORJQPSEEGQJOFFNJHSWQBZHVWSVIZFUALDKERZAUDZSVMMR");

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
    msg.setTimeStamp(0.2901750414266169);
    msg.setSource(40868U);
    msg.setSourceEntity(7U);
    msg.setDestination(12199U);
    msg.setDestinationEntity(170U);
    msg.name.assign("XFQTZTQWXTNDNPECUX");

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
    msg.setTimeStamp(0.2784950537870329);
    msg.setSource(53040U);
    msg.setSourceEntity(51U);
    msg.setDestination(23981U);
    msg.setDestinationEntity(74U);
    msg.name.assign("REQWGCGELWVPWFVNZODSSBEPWJFGIODWUNHETLRNHLJCUWTYZTUHBYZQKHBLTTGDPINI");
    msg.value = 21U;

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
    msg.setTimeStamp(0.06669564577731057);
    msg.setSource(43609U);
    msg.setSourceEntity(12U);
    msg.setDestination(26137U);
    msg.setDestinationEntity(119U);
    msg.name.assign("IOETGZNLEBAXWZOVDQZBSCPVXPKGBFOSRDHYWNZEAWJKBSYARSOHNBKDQDFGTKMICQGPBPZQZZWDNPLRZJFHUAWRRLPJEVLIWVPIMRQCFFMQMXRACCJOTXFGDYXPNRYPIOWZLHKYKBLCMBNVXUXSMQBMUZSJMGIEEJQ");
    msg.value = 64U;

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
    msg.setTimeStamp(0.47327027244659536);
    msg.setSource(49133U);
    msg.setSourceEntity(32U);
    msg.setDestination(50560U);
    msg.setDestinationEntity(250U);
    msg.name.assign("MWOFHQTRQLUQPAMYAHKZBANHLHSNCZSHXPQSGYVAEWLSGECUKJAZEKGOWRMEHXQATXDCABCQJRSORWOGJCFPMKOXGBEYVWNEKIHNNIVUWHQYEFWSNOSJAJLBRBDAZHZIBPYAKFTCBEBMYRFLKKKQTTVIBDJXXORYIFDMTSUZUIFLPRXPVFGZMIZLVGDWGNUHDXPLRKTUDDMRFTCJGNCQVYIIJZLYEOFUPGOJLESPBS");
    msg.value = 15U;

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
    msg.setTimeStamp(0.3841630598082374);
    msg.setSource(33347U);
    msg.setSourceEntity(226U);
    msg.setDestination(29377U);
    msg.setDestinationEntity(141U);
    msg.id = 51U;
    msg.period = 3114038554U;
    msg.duty_cycle = 89173257U;

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
    msg.setTimeStamp(0.0333132423547049);
    msg.setSource(52630U);
    msg.setSourceEntity(198U);
    msg.setDestination(11998U);
    msg.setDestinationEntity(88U);
    msg.id = 117U;
    msg.period = 444504679U;
    msg.duty_cycle = 1238347169U;

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
    msg.setTimeStamp(0.7385905068634381);
    msg.setSource(3494U);
    msg.setSourceEntity(47U);
    msg.setDestination(43681U);
    msg.setDestinationEntity(82U);
    msg.id = 72U;
    msg.period = 2636664370U;
    msg.duty_cycle = 337480530U;

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
    msg.setTimeStamp(0.12251675100620063);
    msg.setSource(59038U);
    msg.setSourceEntity(191U);
    msg.setDestination(3736U);
    msg.setDestinationEntity(31U);
    msg.id = 186U;
    msg.period = 3007870320U;
    msg.duty_cycle = 3872913320U;

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
    msg.setTimeStamp(0.09835674084079782);
    msg.setSource(4774U);
    msg.setSourceEntity(89U);
    msg.setDestination(2928U);
    msg.setDestinationEntity(195U);
    msg.id = 26U;
    msg.period = 412172419U;
    msg.duty_cycle = 1213743704U;

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
    msg.setTimeStamp(0.7208395584831494);
    msg.setSource(40662U);
    msg.setSourceEntity(192U);
    msg.setDestination(57978U);
    msg.setDestinationEntity(221U);
    msg.id = 136U;
    msg.period = 1505786276U;
    msg.duty_cycle = 2280748427U;

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
    msg.setTimeStamp(0.07599309479701466);
    msg.setSource(20555U);
    msg.setSourceEntity(18U);
    msg.setDestination(28303U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.4891955493232436;
    msg.lon = 0.3604028943426425;
    msg.height = 0.24512649427042998;
    msg.x = 0.5158901568381188;
    msg.y = 0.9389507678819026;
    msg.z = 0.5400455644994493;
    msg.phi = 0.7952119261624031;
    msg.theta = 0.991638411277075;
    msg.psi = 0.16482123528788328;
    msg.u = 0.5015881440744404;
    msg.v = 0.35806353897102683;
    msg.w = 0.4998903557961053;
    msg.vx = 0.3273772712358878;
    msg.vy = 0.09517980264339321;
    msg.vz = 0.7053863680395964;
    msg.p = 0.22458407207410713;
    msg.q = 0.7200323825162849;
    msg.r = 0.5180736344463522;
    msg.depth = 0.9383216848574885;
    msg.alt = 0.782768312314287;

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
    msg.setTimeStamp(0.9127608336388147);
    msg.setSource(29183U);
    msg.setSourceEntity(20U);
    msg.setDestination(8114U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.07800114261533542;
    msg.lon = 0.2917892909182652;
    msg.height = 0.21040873861578058;
    msg.x = 0.4753111869631965;
    msg.y = 0.6214010653787152;
    msg.z = 0.5419912318151203;
    msg.phi = 0.8316316678475696;
    msg.theta = 0.935886494866865;
    msg.psi = 0.007835960654141827;
    msg.u = 0.06364747329296083;
    msg.v = 0.8110301462196504;
    msg.w = 0.6933029903794006;
    msg.vx = 0.8350676553168149;
    msg.vy = 0.1548376502427472;
    msg.vz = 0.8663346782703135;
    msg.p = 0.35036375117190954;
    msg.q = 0.5831070170768013;
    msg.r = 0.40224104817142103;
    msg.depth = 0.3316817924214066;
    msg.alt = 0.3667085214670561;

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
    msg.setTimeStamp(0.5455060542106019);
    msg.setSource(36443U);
    msg.setSourceEntity(55U);
    msg.setDestination(14769U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.9015688713506961;
    msg.lon = 0.6107808083722072;
    msg.height = 0.4968961103329035;
    msg.x = 0.6291784967194083;
    msg.y = 0.18749660568612614;
    msg.z = 0.5682589507322041;
    msg.phi = 0.9836616187922794;
    msg.theta = 0.0543017943182772;
    msg.psi = 0.6897428509962485;
    msg.u = 0.51595037365444;
    msg.v = 0.9911422617045198;
    msg.w = 0.2605859553224753;
    msg.vx = 0.3896341414940081;
    msg.vy = 0.5902636723580194;
    msg.vz = 0.40101582498429134;
    msg.p = 0.043208028399624454;
    msg.q = 0.6143431963336581;
    msg.r = 0.20609403313046193;
    msg.depth = 0.25393398363985686;
    msg.alt = 0.17487658954829433;

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
    msg.setTimeStamp(0.035728604994550994);
    msg.setSource(42645U);
    msg.setSourceEntity(129U);
    msg.setDestination(29434U);
    msg.setDestinationEntity(111U);
    msg.x = 0.24314942740706458;
    msg.y = 0.7679992870598965;
    msg.z = 0.6670038631633521;

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
    msg.setTimeStamp(0.5415199844650509);
    msg.setSource(43097U);
    msg.setSourceEntity(131U);
    msg.setDestination(15553U);
    msg.setDestinationEntity(127U);
    msg.x = 0.8631913572882093;
    msg.y = 0.26601256742079815;
    msg.z = 0.7614796711103203;

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
    msg.setTimeStamp(0.7963930163208923);
    msg.setSource(20600U);
    msg.setSourceEntity(118U);
    msg.setDestination(7199U);
    msg.setDestinationEntity(109U);
    msg.x = 0.1373654033231586;
    msg.y = 0.7014610749644229;
    msg.z = 0.4532154830078402;

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
    msg.setTimeStamp(0.16042725896797805);
    msg.setSource(45192U);
    msg.setSourceEntity(190U);
    msg.setDestination(48438U);
    msg.setDestinationEntity(203U);
    msg.value = 0.4576510894170239;

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
    msg.setTimeStamp(0.13170493541571215);
    msg.setSource(27117U);
    msg.setSourceEntity(22U);
    msg.setDestination(56681U);
    msg.setDestinationEntity(105U);
    msg.value = 0.268392954578047;

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
    msg.setTimeStamp(0.032623026145595424);
    msg.setSource(57176U);
    msg.setSourceEntity(89U);
    msg.setDestination(841U);
    msg.setDestinationEntity(26U);
    msg.value = 0.5143981841724116;

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
    msg.setTimeStamp(0.3967603121058755);
    msg.setSource(5578U);
    msg.setSourceEntity(65U);
    msg.setDestination(50163U);
    msg.setDestinationEntity(164U);
    msg.value = 0.5914956172283667;

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
    msg.setTimeStamp(0.16239888854936713);
    msg.setSource(31138U);
    msg.setSourceEntity(19U);
    msg.setDestination(496U);
    msg.setDestinationEntity(77U);
    msg.value = 0.8114793059009607;

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
    msg.setTimeStamp(0.7459942063220112);
    msg.setSource(35190U);
    msg.setSourceEntity(109U);
    msg.setDestination(16961U);
    msg.setDestinationEntity(157U);
    msg.value = 0.8044390257736592;

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
    msg.setTimeStamp(0.5328928748789381);
    msg.setSource(39040U);
    msg.setSourceEntity(49U);
    msg.setDestination(41904U);
    msg.setDestinationEntity(173U);
    msg.x = 0.6234091080728835;
    msg.y = 0.06769116576642453;
    msg.z = 0.35702815539595223;
    msg.phi = 0.49579414561047697;
    msg.theta = 0.06190510439040875;
    msg.psi = 0.1270110716138919;
    msg.p = 0.5824251555194785;
    msg.q = 0.30318319868459453;
    msg.r = 0.7578464336768439;
    msg.u = 0.5103108147711922;
    msg.v = 0.3991726821099376;
    msg.w = 0.9500897736108779;
    msg.bias_psi = 0.4250723364919058;
    msg.bias_r = 0.1991397064112299;

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
    msg.setTimeStamp(0.9430130051883717);
    msg.setSource(11218U);
    msg.setSourceEntity(207U);
    msg.setDestination(31693U);
    msg.setDestinationEntity(29U);
    msg.x = 0.263069528923375;
    msg.y = 0.3479570406940188;
    msg.z = 0.4789661521885493;
    msg.phi = 0.045280290552004776;
    msg.theta = 0.11703183820039842;
    msg.psi = 0.5115817344428354;
    msg.p = 0.18559464580320117;
    msg.q = 0.6904272975604454;
    msg.r = 0.09063981533098076;
    msg.u = 0.8037287280459339;
    msg.v = 0.4164827417859813;
    msg.w = 0.27876683536908387;
    msg.bias_psi = 0.5673659924242346;
    msg.bias_r = 0.33955080205293897;

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
    msg.setTimeStamp(0.1661411838408008);
    msg.setSource(61950U);
    msg.setSourceEntity(218U);
    msg.setDestination(41148U);
    msg.setDestinationEntity(51U);
    msg.x = 0.9146057853969909;
    msg.y = 0.8510742048767841;
    msg.z = 0.26762536523909763;
    msg.phi = 0.6207283031380498;
    msg.theta = 0.5691411178841786;
    msg.psi = 0.7457845220319971;
    msg.p = 0.4777360220597482;
    msg.q = 0.28602754580937795;
    msg.r = 0.8552157932878247;
    msg.u = 0.8115110194051609;
    msg.v = 0.8348219097079156;
    msg.w = 0.3271177702988577;
    msg.bias_psi = 0.4913403473175255;
    msg.bias_r = 0.822079017926179;

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
    msg.setTimeStamp(0.9428018824286527);
    msg.setSource(35775U);
    msg.setSourceEntity(50U);
    msg.setDestination(43992U);
    msg.setDestinationEntity(151U);
    msg.bias_psi = 0.11680758697955795;
    msg.bias_r = 0.06889012105990755;
    msg.cog = 0.9268952925832504;
    msg.cyaw = 0.7840872236658973;
    msg.lbl_rej_level = 0.7339654960379883;
    msg.gps_rej_level = 0.5356063784324939;
    msg.custom_x = 0.4702806012932529;
    msg.custom_y = 0.5190126516240636;
    msg.custom_z = 0.1553056741041241;

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
    msg.setTimeStamp(0.8564013737786412);
    msg.setSource(3976U);
    msg.setSourceEntity(156U);
    msg.setDestination(24244U);
    msg.setDestinationEntity(145U);
    msg.bias_psi = 0.42893060981757425;
    msg.bias_r = 0.9663577325214351;
    msg.cog = 0.27299504049702983;
    msg.cyaw = 0.8564684658689803;
    msg.lbl_rej_level = 0.3804042367106071;
    msg.gps_rej_level = 0.46917710943209356;
    msg.custom_x = 0.6700272439038871;
    msg.custom_y = 0.27505543115954667;
    msg.custom_z = 0.08692796989904616;

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
    msg.setTimeStamp(0.3178436109954704);
    msg.setSource(62236U);
    msg.setSourceEntity(185U);
    msg.setDestination(57373U);
    msg.setDestinationEntity(101U);
    msg.bias_psi = 0.15951624472168313;
    msg.bias_r = 0.28017705209768207;
    msg.cog = 0.01267010495529175;
    msg.cyaw = 0.04005765139556228;
    msg.lbl_rej_level = 0.776403821781689;
    msg.gps_rej_level = 0.30782400399276244;
    msg.custom_x = 0.8063806038869872;
    msg.custom_y = 0.7598563558830311;
    msg.custom_z = 0.2916987640146219;

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
    msg.setTimeStamp(0.39436023909617424);
    msg.setSource(14315U);
    msg.setSourceEntity(142U);
    msg.setDestination(27672U);
    msg.setDestinationEntity(107U);
    msg.utc_time = 0.2945987561012775;
    msg.reason = 248U;

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
    msg.setTimeStamp(0.7103847988012926);
    msg.setSource(44323U);
    msg.setSourceEntity(210U);
    msg.setDestination(17345U);
    msg.setDestinationEntity(206U);
    msg.utc_time = 0.022490540281178695;
    msg.reason = 145U;

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
    msg.setTimeStamp(0.5107216649124443);
    msg.setSource(31326U);
    msg.setSourceEntity(144U);
    msg.setDestination(55014U);
    msg.setDestinationEntity(62U);
    msg.utc_time = 0.33240010281285604;
    msg.reason = 209U;

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
    msg.setTimeStamp(0.18892010483772925);
    msg.setSource(3229U);
    msg.setSourceEntity(166U);
    msg.setDestination(61598U);
    msg.setDestinationEntity(170U);
    msg.id = 102U;
    msg.range = 0.800432857440325;
    msg.acceptance = 128U;

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
    msg.setTimeStamp(0.5993921316888458);
    msg.setSource(61614U);
    msg.setSourceEntity(186U);
    msg.setDestination(13319U);
    msg.setDestinationEntity(176U);
    msg.id = 178U;
    msg.range = 0.19011546916371758;
    msg.acceptance = 26U;

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
    msg.setTimeStamp(0.23982767505774372);
    msg.setSource(59017U);
    msg.setSourceEntity(34U);
    msg.setDestination(18232U);
    msg.setDestinationEntity(193U);
    msg.id = 80U;
    msg.range = 0.17040440716116056;
    msg.acceptance = 75U;

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
    msg.setTimeStamp(0.42102667879306377);
    msg.setSource(3891U);
    msg.setSourceEntity(221U);
    msg.setDestination(57511U);
    msg.setDestinationEntity(171U);
    msg.type = 21U;
    msg.reason = 12U;
    msg.value = 0.9778676324215084;
    msg.timestep = 0.9675183225894379;

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
    msg.setTimeStamp(0.9893554896658434);
    msg.setSource(23575U);
    msg.setSourceEntity(34U);
    msg.setDestination(4443U);
    msg.setDestinationEntity(108U);
    msg.type = 217U;
    msg.reason = 52U;
    msg.value = 0.4348039020709883;
    msg.timestep = 0.6199024996927297;

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
    msg.setTimeStamp(0.562927310429833);
    msg.setSource(63623U);
    msg.setSourceEntity(97U);
    msg.setDestination(9550U);
    msg.setDestinationEntity(121U);
    msg.type = 134U;
    msg.reason = 79U;
    msg.value = 0.8428046151430396;
    msg.timestep = 0.9328859448997432;

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
    msg.setTimeStamp(0.46261306278975733);
    msg.setSource(55236U);
    msg.setSourceEntity(153U);
    msg.setDestination(8641U);
    msg.setDestinationEntity(160U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZZQLLJGLXLEVNDUKFLVVRVBXXHSCCHFZEFNFQGAOPYDPGWNPDHMIJSAAOJWHXJOMBLKXRTZBJBNNELJYYCPBGTTCRIPXAAKRGMOLISXBGDNKIPGJSIFFICTPHHQKSWUZJAWKWLUTVEPIHHDGTUESCHYNBICEGACQWSTQYQRDUMQ");
    tmp_msg_0.lat = 0.8420216559602853;
    tmp_msg_0.lon = 0.32847980058898174;
    tmp_msg_0.depth = 0.48041639441834727;
    tmp_msg_0.query_channel = 62U;
    tmp_msg_0.reply_channel = 214U;
    tmp_msg_0.transponder_delay = 125U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2336238081082861;
    msg.y = 0.3240572232556196;
    msg.var_x = 0.9429800729503813;
    msg.var_y = 0.6164372247341695;
    msg.distance = 0.4912617410228829;

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
    msg.setTimeStamp(0.4749890340706878);
    msg.setSource(53467U);
    msg.setSourceEntity(178U);
    msg.setDestination(59902U);
    msg.setDestinationEntity(105U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OUNIDPQOXUXGPXJPWECUCEQUKPQFXPRGVWJXYIVPSDTDILGRTMGTVJFMHTOAKBYZLAMAMZUNQSISCBYTZOPKHXJHTQMUBCXZDOPIXDMNZRKCWJ");
    tmp_msg_0.lat = 0.39472923736606136;
    tmp_msg_0.lon = 0.47790416191651197;
    tmp_msg_0.depth = 0.2954458344290276;
    tmp_msg_0.query_channel = 63U;
    tmp_msg_0.reply_channel = 241U;
    tmp_msg_0.transponder_delay = 237U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.43687024251175066;
    msg.y = 0.2563105974228902;
    msg.var_x = 0.5474712651765519;
    msg.var_y = 0.14964580994609478;
    msg.distance = 0.7975013381817829;

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
    msg.setTimeStamp(0.6543965199548968);
    msg.setSource(63239U);
    msg.setSourceEntity(162U);
    msg.setDestination(30472U);
    msg.setDestinationEntity(234U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OSWJLRQLXXOGVTJUQNYAUKHQXVTDJZLIECBVGBVGNPBDVHBETMWWNZEUODHOZJXFVUWFVGMBUZTDCTWHLIDHSDLAZGYAQKZPSCADBXEREPHQIQRJLKLTBTXJNUIFGPIOYCEKHINXISFOBSKVGWRFCMTJBAZUMPQOLPZRSOPBTGEPKCANUFRJJLMFMYNEYIRVUG");
    tmp_msg_0.lat = 0.4322773895295995;
    tmp_msg_0.lon = 0.6937136629250882;
    tmp_msg_0.depth = 0.4261213146844163;
    tmp_msg_0.query_channel = 214U;
    tmp_msg_0.reply_channel = 52U;
    tmp_msg_0.transponder_delay = 27U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.206877885781093;
    msg.y = 0.4975784517310794;
    msg.var_x = 0.5713421477344425;
    msg.var_y = 0.3154143109118225;
    msg.distance = 0.012281136135173454;

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
    msg.setTimeStamp(0.5768701528806208);
    msg.setSource(52766U);
    msg.setSourceEntity(113U);
    msg.setDestination(58822U);
    msg.setDestinationEntity(199U);
    msg.state = 254U;

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
    msg.setTimeStamp(0.43248403920003187);
    msg.setSource(9009U);
    msg.setSourceEntity(94U);
    msg.setDestination(31288U);
    msg.setDestinationEntity(133U);
    msg.state = 62U;

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
    msg.setTimeStamp(0.7245674265073301);
    msg.setSource(34740U);
    msg.setSourceEntity(118U);
    msg.setDestination(20041U);
    msg.setDestinationEntity(193U);
    msg.state = 234U;

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
    msg.setTimeStamp(0.7551963725873541);
    msg.setSource(17386U);
    msg.setSourceEntity(59U);
    msg.setDestination(39010U);
    msg.setDestinationEntity(237U);
    msg.x = 0.7785379218459377;
    msg.y = 0.7559402967463715;
    msg.z = 0.3815528119593642;

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
    msg.setTimeStamp(0.5739415552293357);
    msg.setSource(45771U);
    msg.setSourceEntity(236U);
    msg.setDestination(37837U);
    msg.setDestinationEntity(107U);
    msg.x = 0.9673737330821974;
    msg.y = 0.5577189026424945;
    msg.z = 0.6643243158271154;

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
    msg.setTimeStamp(0.6725934497786257);
    msg.setSource(40565U);
    msg.setSourceEntity(214U);
    msg.setDestination(54250U);
    msg.setDestinationEntity(184U);
    msg.x = 0.7656003968830563;
    msg.y = 0.5965977883110144;
    msg.z = 0.2241946676618466;

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
    msg.setTimeStamp(0.32450821331692026);
    msg.setSource(9470U);
    msg.setSourceEntity(126U);
    msg.setDestination(1472U);
    msg.setDestinationEntity(31U);
    msg.va = 0.19660283965657643;
    msg.aoa = 0.890591210852009;
    msg.ssa = 0.8295122107012473;

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
    msg.setTimeStamp(0.8644590637328204);
    msg.setSource(28187U);
    msg.setSourceEntity(43U);
    msg.setDestination(13892U);
    msg.setDestinationEntity(179U);
    msg.va = 0.6803848762693228;
    msg.aoa = 0.47681990344096625;
    msg.ssa = 0.5607092654487784;

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
    msg.setTimeStamp(0.25496801854581674);
    msg.setSource(34783U);
    msg.setSourceEntity(208U);
    msg.setDestination(47481U);
    msg.setDestinationEntity(47U);
    msg.va = 0.21039179367233452;
    msg.aoa = 0.9412266427795299;
    msg.ssa = 0.5997108171007942;

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
    msg.setTimeStamp(0.28792713500703615);
    msg.setSource(44153U);
    msg.setSourceEntity(220U);
    msg.setDestination(43217U);
    msg.setDestinationEntity(218U);
    msg.value = 0.07804378829029635;

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
    msg.setTimeStamp(0.029616413025613353);
    msg.setSource(9079U);
    msg.setSourceEntity(5U);
    msg.setDestination(28805U);
    msg.setDestinationEntity(219U);
    msg.value = 0.47853877752578744;

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
    msg.setTimeStamp(0.8783143451628092);
    msg.setSource(594U);
    msg.setSourceEntity(80U);
    msg.setDestination(63636U);
    msg.setDestinationEntity(206U);
    msg.value = 0.5772795026019321;

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
    msg.setTimeStamp(0.15061357880212334);
    msg.setSource(33445U);
    msg.setSourceEntity(95U);
    msg.setDestination(6805U);
    msg.setDestinationEntity(21U);
    msg.value = 0.5557091668266926;
    msg.z_units = 23U;

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
    msg.setTimeStamp(0.40198502483001175);
    msg.setSource(5170U);
    msg.setSourceEntity(58U);
    msg.setDestination(8596U);
    msg.setDestinationEntity(21U);
    msg.value = 0.543755968352382;
    msg.z_units = 111U;

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
    msg.setTimeStamp(0.10418157645054582);
    msg.setSource(3913U);
    msg.setSourceEntity(14U);
    msg.setDestination(52834U);
    msg.setDestinationEntity(166U);
    msg.value = 0.8295931657639368;
    msg.z_units = 195U;

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
    msg.setTimeStamp(0.889495574483365);
    msg.setSource(13182U);
    msg.setSourceEntity(54U);
    msg.setDestination(63592U);
    msg.setDestinationEntity(103U);
    msg.value = 0.5081452496871017;
    msg.speed_units = 151U;

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
    msg.setTimeStamp(0.004746866681587192);
    msg.setSource(31670U);
    msg.setSourceEntity(161U);
    msg.setDestination(24779U);
    msg.setDestinationEntity(76U);
    msg.value = 0.9333141321105627;
    msg.speed_units = 70U;

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
    msg.setTimeStamp(0.04617184095043403);
    msg.setSource(7701U);
    msg.setSourceEntity(113U);
    msg.setDestination(37788U);
    msg.setDestinationEntity(200U);
    msg.value = 0.691638418892483;
    msg.speed_units = 162U;

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
    msg.setTimeStamp(0.6237816100344042);
    msg.setSource(37019U);
    msg.setSourceEntity(127U);
    msg.setDestination(17009U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5227153710092606;

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
    msg.setTimeStamp(0.11044725922103416);
    msg.setSource(14117U);
    msg.setSourceEntity(106U);
    msg.setDestination(20546U);
    msg.setDestinationEntity(148U);
    msg.value = 0.49339698683002453;

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
    msg.setTimeStamp(0.5124743707943373);
    msg.setSource(12604U);
    msg.setSourceEntity(19U);
    msg.setDestination(38336U);
    msg.setDestinationEntity(102U);
    msg.value = 0.7867745872424109;

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
    msg.setTimeStamp(0.9959656924770224);
    msg.setSource(32228U);
    msg.setSourceEntity(191U);
    msg.setDestination(6213U);
    msg.setDestinationEntity(254U);
    msg.value = 0.706294013790384;

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
    msg.setTimeStamp(0.15954112868092818);
    msg.setSource(32143U);
    msg.setSourceEntity(27U);
    msg.setDestination(10421U);
    msg.setDestinationEntity(254U);
    msg.value = 0.7343668312545435;

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
    msg.setTimeStamp(0.21271195197905546);
    msg.setSource(23587U);
    msg.setSourceEntity(214U);
    msg.setDestination(27609U);
    msg.setDestinationEntity(142U);
    msg.value = 0.04502539660806104;

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
    msg.setTimeStamp(0.7182980379626936);
    msg.setSource(32782U);
    msg.setSourceEntity(126U);
    msg.setDestination(5144U);
    msg.setDestinationEntity(191U);
    msg.value = 0.3483319076248027;

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
    msg.setTimeStamp(0.863529899385284);
    msg.setSource(59384U);
    msg.setSourceEntity(124U);
    msg.setDestination(50550U);
    msg.setDestinationEntity(198U);
    msg.value = 0.320724795272357;

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
    msg.setTimeStamp(0.7263048157414227);
    msg.setSource(5233U);
    msg.setSourceEntity(192U);
    msg.setDestination(34119U);
    msg.setDestinationEntity(125U);
    msg.value = 0.45918023009921305;

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
    msg.setTimeStamp(0.12446070936248155);
    msg.setSource(39583U);
    msg.setSourceEntity(209U);
    msg.setDestination(9977U);
    msg.setDestinationEntity(153U);
    msg.path_ref = 771780556U;
    msg.start_lat = 0.5438459272175761;
    msg.start_lon = 0.07322730864734017;
    msg.start_z = 0.17883728861315062;
    msg.start_z_units = 59U;
    msg.end_lat = 0.3582351432856916;
    msg.end_lon = 0.3870309335867327;
    msg.end_z = 0.004704990657070973;
    msg.end_z_units = 131U;
    msg.speed = 0.5129847912591184;
    msg.speed_units = 120U;
    msg.lradius = 0.047907091436462546;
    msg.flags = 2U;

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
    msg.setTimeStamp(0.6600769800176648);
    msg.setSource(27316U);
    msg.setSourceEntity(235U);
    msg.setDestination(33475U);
    msg.setDestinationEntity(54U);
    msg.path_ref = 1663978255U;
    msg.start_lat = 0.11032227490625246;
    msg.start_lon = 0.16864461225536231;
    msg.start_z = 0.8184585834897709;
    msg.start_z_units = 89U;
    msg.end_lat = 0.4409392743049281;
    msg.end_lon = 0.8213814014958394;
    msg.end_z = 0.3694335480118842;
    msg.end_z_units = 117U;
    msg.speed = 0.4122459907324654;
    msg.speed_units = 13U;
    msg.lradius = 0.19974472491672746;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.5694315340516488);
    msg.setSource(56975U);
    msg.setSourceEntity(148U);
    msg.setDestination(5807U);
    msg.setDestinationEntity(253U);
    msg.path_ref = 2103657471U;
    msg.start_lat = 0.5786305980365921;
    msg.start_lon = 0.29354603644558264;
    msg.start_z = 0.3931435777668171;
    msg.start_z_units = 51U;
    msg.end_lat = 0.6384098085184042;
    msg.end_lon = 0.4525077139531539;
    msg.end_z = 0.6505960805398409;
    msg.end_z_units = 253U;
    msg.speed = 0.7614488250002349;
    msg.speed_units = 162U;
    msg.lradius = 0.6283939368536092;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.4109930613242765);
    msg.setSource(51617U);
    msg.setSourceEntity(89U);
    msg.setDestination(35328U);
    msg.setDestinationEntity(199U);
    msg.x = 0.6437159179208745;
    msg.y = 0.7385868236309553;
    msg.z = 0.4765268845206534;
    msg.k = 0.18318216403564402;
    msg.m = 0.8939785913079771;
    msg.n = 0.8641803381967369;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.10542541988871446);
    msg.setSource(23880U);
    msg.setSourceEntity(216U);
    msg.setDestination(59592U);
    msg.setDestinationEntity(202U);
    msg.x = 0.2360817151010165;
    msg.y = 0.7277914404776403;
    msg.z = 0.06937243205457366;
    msg.k = 0.625549394071208;
    msg.m = 0.7222140254081763;
    msg.n = 0.19319612191111968;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.22517017482985546);
    msg.setSource(32384U);
    msg.setSourceEntity(212U);
    msg.setDestination(33277U);
    msg.setDestinationEntity(240U);
    msg.x = 0.5795108918417379;
    msg.y = 0.16359883124090968;
    msg.z = 0.5460193379945939;
    msg.k = 0.03302259655204798;
    msg.m = 0.23942966970946322;
    msg.n = 0.8919410201451713;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.1703240547554321);
    msg.setSource(51648U);
    msg.setSourceEntity(158U);
    msg.setDestination(37967U);
    msg.setDestinationEntity(140U);
    msg.value = 0.31206723526437996;

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
    msg.setTimeStamp(0.022139620875011534);
    msg.setSource(53960U);
    msg.setSourceEntity(101U);
    msg.setDestination(61607U);
    msg.setDestinationEntity(217U);
    msg.value = 0.7024754046847583;

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
    msg.setTimeStamp(0.8417101726367281);
    msg.setSource(56368U);
    msg.setSourceEntity(21U);
    msg.setDestination(33236U);
    msg.setDestinationEntity(33U);
    msg.value = 0.05136561996848543;

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
    msg.setTimeStamp(0.4741701583980611);
    msg.setSource(26345U);
    msg.setSourceEntity(100U);
    msg.setDestination(18036U);
    msg.setDestinationEntity(88U);
    msg.u = 0.751363001896803;
    msg.v = 0.7339147549975704;
    msg.w = 0.1233308917303435;
    msg.p = 0.3888126756303013;
    msg.q = 0.5573498898268451;
    msg.r = 0.7430183931454375;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.32035847183163524);
    msg.setSource(43437U);
    msg.setSourceEntity(12U);
    msg.setDestination(34232U);
    msg.setDestinationEntity(155U);
    msg.u = 0.29763788433431193;
    msg.v = 0.5958088840294871;
    msg.w = 0.10574720915328906;
    msg.p = 0.5532535811862394;
    msg.q = 0.8184685932699207;
    msg.r = 0.2651450067199064;
    msg.flags = 160U;

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
    msg.setTimeStamp(0.01597615613968073);
    msg.setSource(63898U);
    msg.setSourceEntity(118U);
    msg.setDestination(9395U);
    msg.setDestinationEntity(169U);
    msg.u = 0.8969504837272939;
    msg.v = 0.181990026490233;
    msg.w = 0.9957802280644473;
    msg.p = 0.6559696704977265;
    msg.q = 0.36150661201268863;
    msg.r = 0.1631986170703833;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.9628547713130061);
    msg.setSource(59873U);
    msg.setSourceEntity(22U);
    msg.setDestination(22160U);
    msg.setDestinationEntity(182U);
    msg.path_ref = 2465924378U;
    msg.start_lat = 0.8385852761111806;
    msg.start_lon = 0.8870084326011252;
    msg.start_z = 0.6159584695586791;
    msg.start_z_units = 217U;
    msg.end_lat = 0.14829039354029028;
    msg.end_lon = 0.1364637966811414;
    msg.end_z = 0.5435284826423376;
    msg.end_z_units = 28U;
    msg.lradius = 0.35197055885320405;
    msg.flags = 120U;
    msg.x = 0.9268846933823887;
    msg.y = 0.3936757539736161;
    msg.z = 0.1775377828009328;
    msg.vx = 0.2258765078890752;
    msg.vy = 0.153404778094965;
    msg.vz = 0.028555705675189835;
    msg.course_error = 0.7430958131409235;
    msg.eta = 27199U;

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
    msg.setTimeStamp(0.10730743125536713);
    msg.setSource(27026U);
    msg.setSourceEntity(208U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(23U);
    msg.path_ref = 73300150U;
    msg.start_lat = 0.29689637180288786;
    msg.start_lon = 0.2399216580968625;
    msg.start_z = 0.6923675321021167;
    msg.start_z_units = 198U;
    msg.end_lat = 0.3212115741025374;
    msg.end_lon = 0.35676649896439616;
    msg.end_z = 0.16890061456729655;
    msg.end_z_units = 2U;
    msg.lradius = 0.4420211329056569;
    msg.flags = 147U;
    msg.x = 0.08799478916938441;
    msg.y = 0.8657232332712043;
    msg.z = 0.2972651261112105;
    msg.vx = 0.9876841939630526;
    msg.vy = 0.03544637591431177;
    msg.vz = 0.1584283519555697;
    msg.course_error = 0.09150714065649679;
    msg.eta = 54163U;

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
    msg.setTimeStamp(0.6081622428003265);
    msg.setSource(61294U);
    msg.setSourceEntity(171U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(78U);
    msg.path_ref = 2331410091U;
    msg.start_lat = 0.6517342580001992;
    msg.start_lon = 0.9105005507220287;
    msg.start_z = 0.5013612027113702;
    msg.start_z_units = 193U;
    msg.end_lat = 0.08926609573557054;
    msg.end_lon = 0.012279890144369254;
    msg.end_z = 0.6586959895402386;
    msg.end_z_units = 126U;
    msg.lradius = 0.4661781617414047;
    msg.flags = 93U;
    msg.x = 0.9226544609908142;
    msg.y = 0.9315914337828392;
    msg.z = 0.9164103621610638;
    msg.vx = 0.8468679842156883;
    msg.vy = 0.009461992166854394;
    msg.vz = 0.03972651768650903;
    msg.course_error = 0.3473891568400732;
    msg.eta = 52679U;

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
    msg.setTimeStamp(0.018457183441207503);
    msg.setSource(55354U);
    msg.setSourceEntity(59U);
    msg.setDestination(24401U);
    msg.setDestinationEntity(86U);
    msg.k = 0.5397411246877174;
    msg.m = 0.4325615669675741;
    msg.n = 0.24351500131198422;

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
    msg.setTimeStamp(0.8375654248429676);
    msg.setSource(12539U);
    msg.setSourceEntity(10U);
    msg.setDestination(49097U);
    msg.setDestinationEntity(147U);
    msg.k = 0.317332106517517;
    msg.m = 0.629937182378963;
    msg.n = 0.8617900886702976;

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
    msg.setTimeStamp(0.8373363671466002);
    msg.setSource(36718U);
    msg.setSourceEntity(28U);
    msg.setDestination(13570U);
    msg.setDestinationEntity(86U);
    msg.k = 0.9029411128740367;
    msg.m = 0.3226521985385721;
    msg.n = 0.4326639820495809;

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
    msg.setTimeStamp(0.7569781129371563);
    msg.setSource(57867U);
    msg.setSourceEntity(29U);
    msg.setDestination(45223U);
    msg.setDestinationEntity(215U);
    msg.p = 0.6724591972544235;
    msg.i = 0.17861067884228032;
    msg.d = 0.41184390870912224;
    msg.a = 0.0878595699066883;

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
    msg.setTimeStamp(0.21498637553282607);
    msg.setSource(43749U);
    msg.setSourceEntity(44U);
    msg.setDestination(44049U);
    msg.setDestinationEntity(83U);
    msg.p = 0.7954085069744575;
    msg.i = 0.12820868305356237;
    msg.d = 0.844831986177662;
    msg.a = 0.11622968552640145;

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
    msg.setTimeStamp(0.4509075497381597);
    msg.setSource(21783U);
    msg.setSourceEntity(88U);
    msg.setDestination(61405U);
    msg.setDestinationEntity(213U);
    msg.p = 0.8826818696987421;
    msg.i = 0.661636558636827;
    msg.d = 0.8118210439082226;
    msg.a = 0.5078342545541855;

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
    msg.setTimeStamp(0.23143864064567166);
    msg.setSource(55663U);
    msg.setSourceEntity(110U);
    msg.setDestination(48402U);
    msg.setDestinationEntity(76U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.35135455423737105);
    msg.setSource(12498U);
    msg.setSourceEntity(119U);
    msg.setDestination(810U);
    msg.setDestinationEntity(204U);
    msg.op = 38U;

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
    msg.setTimeStamp(0.479846671032797);
    msg.setSource(21428U);
    msg.setSourceEntity(58U);
    msg.setDestination(25646U);
    msg.setDestinationEntity(101U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.6660293972687742);
    msg.setSource(13075U);
    msg.setSourceEntity(227U);
    msg.setDestination(47173U);
    msg.setDestinationEntity(215U);
    msg.x = 0.33736956648287375;
    msg.y = 0.3251931939361963;
    msg.z = 0.6866291516062297;
    msg.vx = 0.7570604033132873;
    msg.vy = 0.6470616304295705;
    msg.vz = 0.07063533891336193;
    msg.ax = 0.5798041605489012;
    msg.ay = 0.264104642690296;
    msg.az = 0.5466260583881157;
    msg.flags = 55460U;

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
    msg.setTimeStamp(0.5802949564278815);
    msg.setSource(11458U);
    msg.setSourceEntity(86U);
    msg.setDestination(25400U);
    msg.setDestinationEntity(164U);
    msg.x = 0.1074525635620962;
    msg.y = 0.27412877337777386;
    msg.z = 0.0830602481327064;
    msg.vx = 0.4769362906657092;
    msg.vy = 0.11892234676693259;
    msg.vz = 0.6274659433947407;
    msg.ax = 0.5057939056603112;
    msg.ay = 0.4753465064443658;
    msg.az = 0.9807653863406549;
    msg.flags = 1867U;

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
    msg.setTimeStamp(0.7249822577490063);
    msg.setSource(21105U);
    msg.setSourceEntity(38U);
    msg.setDestination(41585U);
    msg.setDestinationEntity(177U);
    msg.x = 0.6846554865062974;
    msg.y = 0.9201579563156767;
    msg.z = 0.5579688163093285;
    msg.vx = 0.34347780142051265;
    msg.vy = 0.2771896246024853;
    msg.vz = 0.9396845112177731;
    msg.ax = 0.31227191957851963;
    msg.ay = 0.4276038523914193;
    msg.az = 0.12702063398336572;
    msg.flags = 41063U;

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
    msg.setTimeStamp(0.5259536242426305);
    msg.setSource(35869U);
    msg.setSourceEntity(242U);
    msg.setDestination(47801U);
    msg.setDestinationEntity(112U);
    msg.value = 0.1822707423093094;

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
    msg.setTimeStamp(0.8277447301068598);
    msg.setSource(56462U);
    msg.setSourceEntity(188U);
    msg.setDestination(7318U);
    msg.setDestinationEntity(47U);
    msg.value = 0.9480256503475721;

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
    msg.setTimeStamp(0.07462677424713482);
    msg.setSource(14556U);
    msg.setSourceEntity(239U);
    msg.setDestination(37266U);
    msg.setDestinationEntity(126U);
    msg.value = 0.7521222011201288;

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
    msg.setTimeStamp(0.8662592891859521);
    msg.setSource(29215U);
    msg.setSourceEntity(23U);
    msg.setDestination(3861U);
    msg.setDestinationEntity(126U);
    msg.timeout = 22523U;
    msg.lat = 0.8759104769911296;
    msg.lon = 0.3799567910189423;
    msg.z = 0.7036573027631986;
    msg.z_units = 227U;
    msg.speed = 0.3642979816798875;
    msg.speed_units = 195U;
    msg.roll = 0.6982655353740679;
    msg.pitch = 0.08210236469196786;
    msg.yaw = 0.05446783618845907;
    msg.custom.assign("HFQPOAXWGLMTLXHBBVSKHVGTNROABZGVYABLODKFQUPTSUKJYPRUHEYRSEMXMUZDITCWWERAGBLDOPXILRUBOCBMYSFZGMFXOWFQMZPEDANROPTVCGRQJXJIWIANVVYSTQZAIOCSMWSYSKLUFEKLIEYEKCKJ");

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
    msg.setTimeStamp(0.853642051009024);
    msg.setSource(12953U);
    msg.setSourceEntity(81U);
    msg.setDestination(31925U);
    msg.setDestinationEntity(230U);
    msg.timeout = 48922U;
    msg.lat = 0.0406835505540748;
    msg.lon = 0.3758146211737228;
    msg.z = 0.8526160475482223;
    msg.z_units = 230U;
    msg.speed = 0.985145054624987;
    msg.speed_units = 4U;
    msg.roll = 0.8881447137088316;
    msg.pitch = 0.3324510621985085;
    msg.yaw = 0.20387450525328454;
    msg.custom.assign("YAZZRFQCLCISHLFYOFQAAKNRRKVUUWJOZIZTQEODUNXQHNBIVGPEJGHPHYDJJCAXMVMRYPATCMKGXBBYKOIHCSSRADJFOJGUALSLFIMTVNLASSVBZRXQLYXSMZZYGTEIUGTWMEPEOEXUQIZVXHLGWKHKLBPGPRIFHHCZTOBQDSDDXYAWPPEMRTXOVELYRUNDNCQDDCWUSITBDXYMTKNLTUNKJWQWFJNFEABVIPFCJ");

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
    msg.setTimeStamp(0.39462713472433);
    msg.setSource(24029U);
    msg.setSourceEntity(177U);
    msg.setDestination(34557U);
    msg.setDestinationEntity(160U);
    msg.timeout = 32076U;
    msg.lat = 0.5055317962934129;
    msg.lon = 0.707093813688623;
    msg.z = 0.8697811525934687;
    msg.z_units = 181U;
    msg.speed = 0.5305971609710732;
    msg.speed_units = 64U;
    msg.roll = 0.4857556831837073;
    msg.pitch = 0.45556194158004193;
    msg.yaw = 0.37023477485242695;
    msg.custom.assign("YGUNFZXJYIKAYNVWORZWNKEKIKLDFNMDSOFSUWDUTCBALHMDOQKOTNSFKRRATHZEMZKBIYULCAXYJFBTRUNXNDYVFSLPCOJWHOLCLN");

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
    msg.setTimeStamp(0.3194976328836876);
    msg.setSource(50136U);
    msg.setSourceEntity(1U);
    msg.setDestination(7229U);
    msg.setDestinationEntity(20U);
    msg.timeout = 51131U;
    msg.lat = 0.06135392527984784;
    msg.lon = 0.8203321674343863;
    msg.z = 0.23860385380671623;
    msg.z_units = 212U;
    msg.speed = 0.465826140139155;
    msg.speed_units = 235U;
    msg.duration = 21091U;
    msg.radius = 0.4544075223198395;
    msg.flags = 132U;
    msg.custom.assign("OSPXSEWNYJIWFPDTNBELQYFXSSMOGQVCNUDKZWNBPXGICMPVOIKNIJAIHWQIACMLDOGTYCOKZYVUVTXOOVMWSMGHHZAUADSGLGKFQXJRIUTPWBXLRGKQKUMPRHJPGQDQYTKZCFNVCYUHZGRMLQXNHRHTRYZPYA");

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
    msg.setTimeStamp(0.07814080506206078);
    msg.setSource(24983U);
    msg.setSourceEntity(53U);
    msg.setDestination(62859U);
    msg.setDestinationEntity(67U);
    msg.timeout = 37619U;
    msg.lat = 0.5924138705730408;
    msg.lon = 0.9824127009411908;
    msg.z = 0.25737024677414067;
    msg.z_units = 163U;
    msg.speed = 0.16077550921529993;
    msg.speed_units = 220U;
    msg.duration = 20506U;
    msg.radius = 0.2712186462599645;
    msg.flags = 128U;
    msg.custom.assign("GLXBHCIGWPOHSHDEGXMANUPXOJRCJJRATCJYBFBSKWQLIBGNJXUFKOYKXEJTMNVMTCVBLAPQGAOCQCXUMAAPFSLGIOXGXOHWUGWIGTAFQVERJQZVRBWWDYZTXWSTBYNKMCPUDDTHPWQPBEFRPLKRMLNIUDBJTPISTZJCVZLOTVZSSDAZEYYMDXFBNQCZGWCOIAHMDLDOYQZEYLYZQDFUUMIEKSVEQKUMONNVVNLKFYRFHKWUIHSARVH");

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
    msg.setTimeStamp(0.8135421112329038);
    msg.setSource(16988U);
    msg.setSourceEntity(132U);
    msg.setDestination(16222U);
    msg.setDestinationEntity(111U);
    msg.timeout = 3092U;
    msg.lat = 0.8025346198159291;
    msg.lon = 0.7572515563659084;
    msg.z = 0.8724752587507849;
    msg.z_units = 241U;
    msg.speed = 0.33773314087844253;
    msg.speed_units = 254U;
    msg.duration = 28173U;
    msg.radius = 0.3296042238940905;
    msg.flags = 247U;
    msg.custom.assign("YFNIFWKLLESJTL");

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
    msg.setTimeStamp(0.09590586545483981);
    msg.setSource(13288U);
    msg.setSourceEntity(79U);
    msg.setDestination(64921U);
    msg.setDestinationEntity(40U);
    msg.custom.assign("YIQYTUBKRBPZIVORGCEHSXDIUKYHLPURQBWPWSAAMSVWOIOJFJO");

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
    msg.setTimeStamp(0.5291498418585504);
    msg.setSource(9061U);
    msg.setSourceEntity(122U);
    msg.setDestination(62845U);
    msg.setDestinationEntity(245U);
    msg.custom.assign("XTIXUFWHMAUBMNNHCQYPKOSUDATDIWDNGJFPPYMEICFYNGVZEUOMQQFAGMJDEOXGOITVLMFPZOAKFVJXOHZOLCUGHELYZRNMFOIR");

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
    msg.setTimeStamp(0.689610604685975);
    msg.setSource(59090U);
    msg.setSourceEntity(146U);
    msg.setDestination(18077U);
    msg.setDestinationEntity(221U);
    msg.custom.assign("PPFRHNIANJJHROGHZNKJMVTEVXCQOWYXUCDIWKEYGDQZWYSMNRWNMBPKAQCRWLCMDNQZLUUFRLEAN");

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
    msg.setTimeStamp(0.38474055342695235);
    msg.setSource(3225U);
    msg.setSourceEntity(188U);
    msg.setDestination(1661U);
    msg.setDestinationEntity(234U);
    msg.timeout = 36671U;
    msg.lat = 0.6023943371275995;
    msg.lon = 0.15662403821144444;
    msg.z = 0.5291159634298431;
    msg.z_units = 192U;
    msg.duration = 10093U;
    msg.speed = 0.4611485460649114;
    msg.speed_units = 84U;
    msg.type = 165U;
    msg.radius = 0.09665804849597692;
    msg.length = 0.7798362547067436;
    msg.bearing = 0.597952370950892;
    msg.direction = 76U;
    msg.custom.assign("LQRLSQNTYPEBWBJFTWYSYPPRKDXKHEINIKFUBXIMRAIULAXVBZTJGOYOMNDASABTZSMOOFBRWDGOFJDKAXRPDAUVCALMWIR");

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
    msg.setTimeStamp(0.49223719075957684);
    msg.setSource(18330U);
    msg.setSourceEntity(122U);
    msg.setDestination(20378U);
    msg.setDestinationEntity(100U);
    msg.timeout = 41206U;
    msg.lat = 0.5955796928243849;
    msg.lon = 0.4968028267648451;
    msg.z = 0.8615209155130029;
    msg.z_units = 11U;
    msg.duration = 16843U;
    msg.speed = 0.45463762011774744;
    msg.speed_units = 42U;
    msg.type = 158U;
    msg.radius = 0.06108663313989271;
    msg.length = 0.011281691746586331;
    msg.bearing = 0.3427572358392267;
    msg.direction = 142U;
    msg.custom.assign("WETUVVBOSEIZSZHNZLJMRCUTUKIDNK");

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
    msg.setTimeStamp(0.4835836415450553);
    msg.setSource(60571U);
    msg.setSourceEntity(239U);
    msg.setDestination(40698U);
    msg.setDestinationEntity(207U);
    msg.timeout = 54697U;
    msg.lat = 0.7295557228659588;
    msg.lon = 0.9698745613554842;
    msg.z = 0.9815494975759843;
    msg.z_units = 217U;
    msg.duration = 53695U;
    msg.speed = 0.8739875712961702;
    msg.speed_units = 94U;
    msg.type = 240U;
    msg.radius = 0.5713423920455837;
    msg.length = 0.5942598158502064;
    msg.bearing = 0.6338253285794218;
    msg.direction = 220U;
    msg.custom.assign("XTKIENQFRXKRNUYVSATFMECKNLTEPUCCUSJHUPNKSWXZBDWWHGGWEPRIVIAHWLNLKKFDNIXZCUQQTVKJXYMJGFNATWHYJFGVFUAPOLCQEIWCCDYGEOTGBWQ");

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
    msg.setTimeStamp(0.8779197059900855);
    msg.setSource(745U);
    msg.setSourceEntity(169U);
    msg.setDestination(46014U);
    msg.setDestinationEntity(205U);
    msg.duration = 61468U;
    msg.custom.assign("LPTIUZVOTVFVZTSWMLKHXFUJCRMGEFDEOBBIXN");

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
    msg.setTimeStamp(0.8517194983727672);
    msg.setSource(11511U);
    msg.setSourceEntity(92U);
    msg.setDestination(50109U);
    msg.setDestinationEntity(123U);
    msg.duration = 51002U;
    msg.custom.assign("QWKAPCVRMLIEZQVRJPUELLZJVGGFXTTMNPHN");

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
    msg.setTimeStamp(0.016649443198506142);
    msg.setSource(64472U);
    msg.setSourceEntity(114U);
    msg.setDestination(20214U);
    msg.setDestinationEntity(154U);
    msg.duration = 28580U;
    msg.custom.assign("FPCGKCPQDQERWPHDYRMMELRWRHGXFFVILDBSIJAGOUCFLCVWQRBWKIVMVMQEBOARUNOPWCRULBQUDGSGXSYCFPZDUEGJKVXQEUXKMADJJETNWVPZAGKIYQFZHDULQNDAAOSXEYIXZYZBKHJASTMOMIIHGYCOBZDXSEEYFTOMWIJQKKOVNHNCTTHZPOWFXNBYYSQRJOLMVUJJP");

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
    msg.setTimeStamp(0.20086608674656792);
    msg.setSource(16679U);
    msg.setSourceEntity(212U);
    msg.setDestination(34419U);
    msg.setDestinationEntity(222U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1558485751U;
    tmp_msg_0.start_lat = 0.6653681160500127;
    tmp_msg_0.start_lon = 0.43869660182769543;
    tmp_msg_0.start_z = 0.38931315297204827;
    tmp_msg_0.start_z_units = 128U;
    tmp_msg_0.end_lat = 0.5524730903971676;
    tmp_msg_0.end_lon = 0.29937996160757296;
    tmp_msg_0.end_z = 0.2431675349443594;
    tmp_msg_0.end_z_units = 66U;
    tmp_msg_0.speed = 0.6883042731876539;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.lradius = 0.9164159361153084;
    tmp_msg_0.flags = 175U;
    msg.control.set(tmp_msg_0);
    msg.duration = 38795U;
    msg.custom.assign("QFYEUKLWGTYNZVTSUEVCKIFXKGCTQOXLXUWNAAKRBAZEICZSPLYNSGVXRIBAMSYFVRXWEDLUZKPHUVHHBEUJXCLOWBXVSBVTQTRBICOZMIFMMRFYWBPJCHTNFNNYXHMTQOHHBWINQOKPMQYYCBSRRDZTOEQUIDGWJARIKCLAATOPKLJGNSEMQPJSDPFYLTWPAEDHLXEWGVJZIBJYUQGAKDOZJODQLG");

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
    msg.setTimeStamp(0.2196365125117472);
    msg.setSource(55312U);
    msg.setSourceEntity(54U);
    msg.setDestination(32392U);
    msg.setDestinationEntity(74U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4256719962447826;
    tmp_msg_0.speed_units = 36U;
    msg.control.set(tmp_msg_0);
    msg.duration = 61143U;
    msg.custom.assign("HECKEBIIBILUKODXFVJHSKLMDPJVRZCLLTXCPLM");

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
    msg.setTimeStamp(0.8552480032559329);
    msg.setSource(19794U);
    msg.setSourceEntity(97U);
    msg.setDestination(50869U);
    msg.setDestinationEntity(137U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.5976934636085398;
    msg.control.set(tmp_msg_0);
    msg.duration = 47670U;
    msg.custom.assign("IRPZRZZESMCNDMENOAEKWHQQDIUIGSBVPYXXZHBKVGVYTFQYXJQVRAEXYTDZUQLWTSKGGDYKBJWOBFHMUOGUIPQJZURLWHPUPMQZTKKIYMNWRLMJHOCGIHLRONOPCCGQWBIWZIFBNVYEFFFEGLTAP");

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
    msg.setTimeStamp(0.41724674332020895);
    msg.setSource(21374U);
    msg.setSourceEntity(199U);
    msg.setDestination(44120U);
    msg.setDestinationEntity(135U);
    msg.timeout = 20225U;
    msg.lat = 0.07861857211827195;
    msg.lon = 0.13111024678491356;
    msg.z = 0.12458247137004363;
    msg.z_units = 125U;
    msg.speed = 0.4077970611694076;
    msg.speed_units = 173U;
    msg.bearing = 0.2839752364405944;
    msg.cross_angle = 0.318899996400119;
    msg.width = 0.670833021382228;
    msg.length = 0.6160480212414213;
    msg.hstep = 0.04795032888901374;
    msg.coff = 93U;
    msg.alternation = 33U;
    msg.flags = 21U;
    msg.custom.assign("FGSLBFSSBBRHMGQUDMYYDXZAFOEJRYRYLSDYOFOFXTPQHNDCRBTFLJEUWMKKDQNEHVDSWJAOAHTTCMJHSIWNTCIUHEEWSSQKFZJYTWWZYKXONQPPLMGUIDMXIMFHAVVCZUSXPTBWCHJEOMTGCRGLQQUZXZOVTURITJEXVAIEYCKIAPLZ");

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
    msg.setTimeStamp(0.18883406041908324);
    msg.setSource(58116U);
    msg.setSourceEntity(35U);
    msg.setDestination(34199U);
    msg.setDestinationEntity(3U);
    msg.timeout = 33791U;
    msg.lat = 0.02859176430638133;
    msg.lon = 0.22972545513526088;
    msg.z = 0.4628042272220224;
    msg.z_units = 77U;
    msg.speed = 0.925967468482861;
    msg.speed_units = 35U;
    msg.bearing = 0.2656385130262958;
    msg.cross_angle = 0.17267341253275614;
    msg.width = 0.980705047581394;
    msg.length = 0.41578568152287065;
    msg.hstep = 0.25762540541089274;
    msg.coff = 205U;
    msg.alternation = 247U;
    msg.flags = 19U;
    msg.custom.assign("KJYMWDZGWJGPLDFTGBJDSWDCCAOAMUJKXEPIAJEJYNPTWSCOCRKNAIGZVVGXAAHXDFVSXRKGZNWRZ");

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
    msg.setTimeStamp(0.7412885749033059);
    msg.setSource(52410U);
    msg.setSourceEntity(48U);
    msg.setDestination(43437U);
    msg.setDestinationEntity(78U);
    msg.timeout = 57917U;
    msg.lat = 0.9955423251712321;
    msg.lon = 0.4806814261799699;
    msg.z = 0.009093090813125482;
    msg.z_units = 22U;
    msg.speed = 0.03953922821148037;
    msg.speed_units = 224U;
    msg.bearing = 0.1520042234140342;
    msg.cross_angle = 0.21196032196904346;
    msg.width = 0.8821537790011318;
    msg.length = 0.22270199982917316;
    msg.hstep = 0.6222571825961172;
    msg.coff = 228U;
    msg.alternation = 122U;
    msg.flags = 195U;
    msg.custom.assign("LKJFMJMCVLNQHEQENGSHYQJFODXPOJLCREPIWZHBPEHIOJCXVHWQEMQZRAGDHOAFDBTCZPBIACGRWCQWJZHUYLTEFZLIIFRNBZTMTCNOEGKFSSYXUVTYJVZIVCGGEQAGDFBQMGULPDZXWRDSTVRSMTWPWHXALLBVKKDNODMIKSOCJTRMZXHUQIDGNLBPXWUMRWBYJFSSJBNKXCVEYGKAPAIQKTUNDVOEYUSXKRU");

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
    msg.setTimeStamp(0.9771489520371263);
    msg.setSource(13749U);
    msg.setSourceEntity(197U);
    msg.setDestination(23043U);
    msg.setDestinationEntity(2U);
    msg.timeout = 12868U;
    msg.lat = 0.2576211573613576;
    msg.lon = 0.5984128188753463;
    msg.z = 0.3279613812794512;
    msg.z_units = 16U;
    msg.speed = 0.6473908569173059;
    msg.speed_units = 247U;
    msg.custom.assign("IIGXNJVLOHKJUXWOZNCCCRFWOOAQRVDYRBAMULMHWEEEGNIDZQFLKCGZRKSOLYTMDYWGCUOQTIHTIZHWLAAWEZBHEMBKEUJAFRQJBDTCMXLQTVYVGUBOFQLXPZDEOYZTLWIFWIMLQHBIQB");

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
    msg.setTimeStamp(0.22238812957653997);
    msg.setSource(27996U);
    msg.setSourceEntity(119U);
    msg.setDestination(41357U);
    msg.setDestinationEntity(253U);
    msg.timeout = 5018U;
    msg.lat = 0.3546038915649442;
    msg.lon = 0.4915910796997085;
    msg.z = 0.14414631358260632;
    msg.z_units = 48U;
    msg.speed = 0.9338807702610578;
    msg.speed_units = 181U;
    msg.custom.assign("QOHHJYZVWZJRQCNELRYRROIYVVU");

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
    msg.setTimeStamp(0.16680710860515957);
    msg.setSource(23127U);
    msg.setSourceEntity(121U);
    msg.setDestination(46402U);
    msg.setDestinationEntity(247U);
    msg.timeout = 10497U;
    msg.lat = 0.5718320634465928;
    msg.lon = 0.18834871780365947;
    msg.z = 0.6237639227578132;
    msg.z_units = 14U;
    msg.speed = 0.38506487177060766;
    msg.speed_units = 201U;
    msg.custom.assign("HPJHNZWMXVIRXANDXSLDNEDMTLVLSMRQVGOIQZZJYHWJEFZVOZUJPFNNKMAQKRGXJZCHVMAPWQQCHKCXAPKXANEZYSQDVYBBSAWBCPTMRMFUCSZSTF");

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
    msg.setTimeStamp(0.3970985653332918);
    msg.setSource(20414U);
    msg.setSourceEntity(60U);
    msg.setDestination(21727U);
    msg.setDestinationEntity(115U);
    msg.x = 0.8217036796438489;
    msg.y = 0.8828206968303549;
    msg.z = 0.49501034976204383;

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
    msg.setTimeStamp(0.834545085439092);
    msg.setSource(18333U);
    msg.setSourceEntity(184U);
    msg.setDestination(43531U);
    msg.setDestinationEntity(94U);
    msg.x = 0.06719924850680292;
    msg.y = 0.4920840904080035;
    msg.z = 0.6510490535785776;

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
    msg.setTimeStamp(0.41623041917067505);
    msg.setSource(47679U);
    msg.setSourceEntity(111U);
    msg.setDestination(52686U);
    msg.setDestinationEntity(38U);
    msg.x = 0.7990484431254126;
    msg.y = 0.6734931775873284;
    msg.z = 0.4294663828026788;

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
    msg.setTimeStamp(0.004911519226295291);
    msg.setSource(35763U);
    msg.setSourceEntity(131U);
    msg.setDestination(9389U);
    msg.setDestinationEntity(244U);
    msg.timeout = 1504U;
    msg.lat = 0.28493162378689085;
    msg.lon = 0.8511370104154907;
    msg.z = 0.7761808084585041;
    msg.z_units = 240U;
    msg.amplitude = 0.15389040243172003;
    msg.pitch = 0.7339522860825314;
    msg.speed = 0.4644782076352697;
    msg.speed_units = 2U;
    msg.custom.assign("MADIJJIQMWALPTXXKNBFUDNRIQJLYTBFELGTEEAWXMDTDERUPFWAGVEKARXODKVOOZRYJ");

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
    msg.setTimeStamp(0.20506165413783473);
    msg.setSource(30179U);
    msg.setSourceEntity(185U);
    msg.setDestination(13788U);
    msg.setDestinationEntity(240U);
    msg.timeout = 9167U;
    msg.lat = 0.11174318240981584;
    msg.lon = 0.8184974606332148;
    msg.z = 0.7279350583012335;
    msg.z_units = 44U;
    msg.amplitude = 0.6377282890726916;
    msg.pitch = 0.8132318508593342;
    msg.speed = 0.03020583091939688;
    msg.speed_units = 243U;
    msg.custom.assign("PSBAFZDWBMLLQAFGRGNXCRKQCSTLMNIVKNQIWLQADHVTRIFNNZZIHJBPBVCOIGVLJQDCHVQSCZEUCDDXPHEJFFELKHEYFZZGYGMANWJPAXWSXIXCGJDOYZPMINWVJGKEXHRMUTINJMLXDWVXUUTWBYAURMJOYSQYSQDBHLZSUAUOTBAGFTTBKAPPBOWMKWSXZYYNIOLFLHHRFYTOCOKRHUUCJDMKVWKZOSFPQTPEI");

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
    msg.setTimeStamp(0.051503475418992695);
    msg.setSource(19543U);
    msg.setSourceEntity(117U);
    msg.setDestination(5775U);
    msg.setDestinationEntity(177U);
    msg.timeout = 59971U;
    msg.lat = 0.6483926154180762;
    msg.lon = 0.27473448804570255;
    msg.z = 0.8044757641993224;
    msg.z_units = 119U;
    msg.amplitude = 0.9193354723157341;
    msg.pitch = 0.09810303071482518;
    msg.speed = 0.697230430312462;
    msg.speed_units = 47U;
    msg.custom.assign("EFIXJUSNPXKSGRFQPSKOZAZRHYL");

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
    msg.setTimeStamp(0.9096888395563365);
    msg.setSource(2809U);
    msg.setSourceEntity(76U);
    msg.setDestination(5525U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.5789772200946396);
    msg.setSource(10049U);
    msg.setSourceEntity(193U);
    msg.setDestination(21377U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.18742527520505448);
    msg.setSource(978U);
    msg.setSourceEntity(3U);
    msg.setDestination(35392U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.7421503016284975);
    msg.setSource(21822U);
    msg.setSourceEntity(204U);
    msg.setDestination(33658U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.4761950355344209;
    msg.lon = 0.7491761878841732;
    msg.z = 0.5685751859160476;
    msg.z_units = 201U;
    msg.radius = 0.9119768444657852;
    msg.duration = 59981U;
    msg.speed = 0.631251467144919;
    msg.speed_units = 189U;
    msg.custom.assign("SETALNONWRYKQOQRKTKGLLLMMQGZIYEEZAFYHCUCOLTTNMKXTDXSVMGODKRCBJVVMTKOCWJUPBDMPVWGMQQSREONBXBZCFAUVBNFFDWXJLVKHNUYSRHHEJALLNSODFIPBUGQNGEOCOAIPKUASWABIGGPAPWTHRXWBDVCDVDHZUSMLHSMFRJMJUGXRTEWWRFYIJSIQHXBZWQQBYPF");

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
    msg.setTimeStamp(0.37022684656913507);
    msg.setSource(46236U);
    msg.setSourceEntity(74U);
    msg.setDestination(26332U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.09686379538337053;
    msg.lon = 0.5309683620565983;
    msg.z = 0.01530391308729484;
    msg.z_units = 195U;
    msg.radius = 0.9477034911011389;
    msg.duration = 61121U;
    msg.speed = 0.02742325036545379;
    msg.speed_units = 67U;
    msg.custom.assign("VDIWVMYFRFFGOJBMQEZHFRIUHOJCVDPWLWJLROVMIFPXKCKIQTVFMA");

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
    msg.setTimeStamp(0.40463427525433715);
    msg.setSource(39601U);
    msg.setSourceEntity(197U);
    msg.setDestination(10433U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.9519817820260073;
    msg.lon = 0.9343761564032921;
    msg.z = 0.9834477621151948;
    msg.z_units = 46U;
    msg.radius = 0.33830327344883215;
    msg.duration = 53135U;
    msg.speed = 0.11447054263401657;
    msg.speed_units = 68U;
    msg.custom.assign("NLFQQEBWPPCYACGPZOPNBOACNCQGMKKGFASXHSWKBIAZOFCJVLXCTRCCQQJVFPZIZRMUJDLWGENHQSRNOPYAREHUJSFWEKNTXTMGXSWPIOBWXUYXMWIMBDJVEMQGZWEUHYTDZNXYYTRXTKOFGLHSVYGLXPMLITKU");

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
    msg.setTimeStamp(0.0370972855445072);
    msg.setSource(36303U);
    msg.setSourceEntity(69U);
    msg.setDestination(10917U);
    msg.setDestinationEntity(79U);
    msg.timeout = 45352U;
    msg.flags = 120U;
    msg.lat = 0.8821519320078515;
    msg.lon = 0.8437572854284695;
    msg.start_z = 0.8488272012173246;
    msg.start_z_units = 115U;
    msg.end_z = 0.8497498875061309;
    msg.end_z_units = 94U;
    msg.radius = 0.2560159373133899;
    msg.speed = 0.8108554096233931;
    msg.speed_units = 187U;
    msg.custom.assign("KGBRIWMCDBGZPLPAWMJKVGCKCWSRYWGJNESBYSTZDMKRRUBQGPPGOXJZWVJVEDGLAIWSAXFJYVBOTOKMYRHTDBGIDZHATRXXCSVRCDDTLYEWRHYPHLIBIZZNVFWPOOIMMIALHENXETKUWZSTXZAQVJHKXQQLCMELHABMFNFXAZYCNJFFVQONROJZCSEKPLWNL");

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
    msg.setTimeStamp(0.8727981238566769);
    msg.setSource(41938U);
    msg.setSourceEntity(246U);
    msg.setDestination(35941U);
    msg.setDestinationEntity(166U);
    msg.timeout = 54889U;
    msg.flags = 231U;
    msg.lat = 0.38547215270086244;
    msg.lon = 0.1510914784823988;
    msg.start_z = 0.7759281404383929;
    msg.start_z_units = 141U;
    msg.end_z = 0.9241601621721629;
    msg.end_z_units = 172U;
    msg.radius = 0.659208848644979;
    msg.speed = 0.5638987795757371;
    msg.speed_units = 124U;
    msg.custom.assign("EBYXSRRYXRUSZBJTZXYWJJXJHJJHNUSEBPMKGFMTONXDHRLGYQXTRUNMAGBZKFSKIXPEBDDZEWDKIQHEIPWOWX");

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
    msg.setTimeStamp(0.5316029469975692);
    msg.setSource(61497U);
    msg.setSourceEntity(250U);
    msg.setDestination(56095U);
    msg.setDestinationEntity(236U);
    msg.timeout = 2526U;
    msg.flags = 155U;
    msg.lat = 0.2889929138910923;
    msg.lon = 0.8443965000519635;
    msg.start_z = 0.8542866214711717;
    msg.start_z_units = 49U;
    msg.end_z = 0.5737250916565847;
    msg.end_z_units = 133U;
    msg.radius = 0.8341288655740398;
    msg.speed = 0.9216703639099377;
    msg.speed_units = 71U;
    msg.custom.assign("TRVRDZXQGEDRZHGNHNKWDFIWPDPBQYIKSTDPHMIVGMHYQUPYVGAFXIHXEUVRKTVLNORDQOVWBAXLAHOLOIGQPYQOAZAXEHPAFAUJELNTWIMGYGZCTUMUBOSBCCDBLRCMOVVELNSKMZSUIBEANDJQXFUEUMWFZEJYXKXJLGJRBAFXPTBSCNRUGWTNSKQTWFXCHIKZMKGLZJMCOFQYCRFVNTIISDEWBZLCKK");

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
    msg.setTimeStamp(0.4170741873650592);
    msg.setSource(33222U);
    msg.setSourceEntity(74U);
    msg.setDestination(34906U);
    msg.setDestinationEntity(208U);
    msg.timeout = 7139U;
    msg.lat = 0.763561910804373;
    msg.lon = 0.8575969040164904;
    msg.z = 0.47910266031185456;
    msg.z_units = 158U;
    msg.speed = 0.3243693933028895;
    msg.speed_units = 100U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6770818786149548;
    tmp_msg_0.y = 0.8502132947731259;
    tmp_msg_0.z = 0.576308635408586;
    tmp_msg_0.t = 0.6056537613971757;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ITWFNRBREUIBMZRMPDAOXVNYPCIXFUAFJQHWUPLYXTWCRJAJMGCHYJVFJDUDTCUONAGQTPYCGCLUGYBBEYEDGXXCNEFZEHQKOWSZZHDPTNIUIOEVWYNKJPOHSLSOGSSLATHVWIGMAZVUXHVNDGVIHOBOOJLWKGETDKQJWILDCJXYHPBQKAOTMRFKBYATBMNEADRKMTYREHQPZM");

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
    msg.setTimeStamp(0.6490440226593577);
    msg.setSource(53309U);
    msg.setSourceEntity(178U);
    msg.setDestination(59013U);
    msg.setDestinationEntity(168U);
    msg.timeout = 5951U;
    msg.lat = 0.29665677013082326;
    msg.lon = 0.6711949947584777;
    msg.z = 0.3470027545844423;
    msg.z_units = 202U;
    msg.speed = 0.5104667205117639;
    msg.speed_units = 148U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.21021338994027128;
    tmp_msg_0.y = 0.6237832279704096;
    tmp_msg_0.z = 0.1800432717398307;
    tmp_msg_0.t = 0.2404580144905012;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EPCFUMJKBSWAIQKZNTQKXUGANFQIGAKLMYSAYTEYFQWLHOYNPVYBHAIADELWDLQSWPBUNDMZTSJJHRITCXUBKTILGHOFKJVVWNSOXAOWEJPWOR");

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
    msg.setTimeStamp(0.57964188948474);
    msg.setSource(8942U);
    msg.setSourceEntity(238U);
    msg.setDestination(44004U);
    msg.setDestinationEntity(150U);
    msg.timeout = 53260U;
    msg.lat = 0.31651263721547773;
    msg.lon = 0.48772065380146234;
    msg.z = 0.100940719512017;
    msg.z_units = 5U;
    msg.speed = 0.5258811591947947;
    msg.speed_units = 220U;
    msg.custom.assign("TZRMVEKTXFDDLXVKUJBLMMZUPGHQJHGQEDHJJPYSWEAHIRSXCVCJSPFOANGYEBLXLZIGPCMFSRWEIQMOWYAAAKSJSJPVZLDONGBMEDXVHRUXUOIWCTZONKQKMQNIHGIUDYATRAQCSRCXYEFYIWTBYVOZQKGOGDLDLCFZCVTKPBWVVIUYWNBIBHPTJBI");

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
    msg.setTimeStamp(0.7439619179740381);
    msg.setSource(1182U);
    msg.setSourceEntity(121U);
    msg.setDestination(17147U);
    msg.setDestinationEntity(163U);
    msg.x = 0.8287409586807369;
    msg.y = 0.1595690762684422;
    msg.z = 0.025439531293601214;
    msg.t = 0.5043589651153251;

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
    msg.setTimeStamp(0.14782136521585432);
    msg.setSource(40311U);
    msg.setSourceEntity(184U);
    msg.setDestination(13244U);
    msg.setDestinationEntity(61U);
    msg.x = 0.2065415570609106;
    msg.y = 0.23554475640577444;
    msg.z = 0.9171112060223404;
    msg.t = 0.7126414655677582;

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
    msg.setTimeStamp(0.7046817683474421);
    msg.setSource(2182U);
    msg.setSourceEntity(149U);
    msg.setDestination(17835U);
    msg.setDestinationEntity(210U);
    msg.x = 0.8871338192267627;
    msg.y = 0.9337405332465727;
    msg.z = 0.36194284375870067;
    msg.t = 0.7386602054696859;

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
    msg.setTimeStamp(0.7275651878517456);
    msg.setSource(6227U);
    msg.setSourceEntity(157U);
    msg.setDestination(10720U);
    msg.setDestinationEntity(179U);
    msg.timeout = 2155U;
    msg.name.assign("LMTLVZQABBWBGNJHQYRQZZDKIWWHYFMQHBQHSTOSFRMFFKRZRXLMEWIVEPHFSADSSREONMBXIKGYPGFFSAAUXOHDSQGCJEMTTXVEHVFOJRNLMVUTNULAPWUMCJBKDUXZKVOODIKYSLXPXDDKLUJNUHVWVBGZXDKHPNRNFWPTQBSQCDYBP");
    msg.custom.assign("ETDETBDSDSBNLHEASOBQZQEQHIBGSXZOJHUAAQQDIFWNMHCONRBDXNDRTKFHMJVLHFSAVQMPMPJLLBFGNOVIYUHXGKORUVZCUJRRPRWNGHPQEKXIWUXSDYRKEKRZUBBYVSZHYALPLYCVMEEHLYLJXAOIFKITQUAAFJMTXYTUNCOPILVDPNZGVKFMIVKF");

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
    msg.setTimeStamp(0.5370651213226129);
    msg.setSource(4022U);
    msg.setSourceEntity(129U);
    msg.setDestination(14719U);
    msg.setDestinationEntity(154U);
    msg.timeout = 10184U;
    msg.name.assign("OWGNYCIRCKIEFBSLFSWUEMLEZULOWWEMZLDOXBNXGPRWVYWRQYCVMZSGYHQFLFAQHGKJYXCRKUIKHVFQSGUNADYZMPKEKQTJJVZARSBTNBHFYUQSITC");
    msg.custom.assign("INVZYGMQKNHAPQPZDVQZYLHIWAEXDRNFUUQWPZCCNOXKZHXMXTYFTYWYGARMCJSKWBHREEHIDBRTPREWUZQVLDLUVNWDIESOCMVFPOFJRVURIQMASWFSPJFTPNOVNZYUBREDLXCONGHJUZCBJVGLIFPYCHHODALAZWOAIFXFDRTLHKNWLBGBPQECMTSXKKIMMSAZTXYGWQHKKMSOCJSEBDYKGTJRUSPNAGSJCYMVBUDKIOB");

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
    msg.setTimeStamp(0.7863398461010597);
    msg.setSource(33437U);
    msg.setSourceEntity(1U);
    msg.setDestination(39183U);
    msg.setDestinationEntity(11U);
    msg.timeout = 50795U;
    msg.name.assign("BWDJIXLRQSRLLOASHGYOOWZPGRHBGXHTUURCSXZJDPPREZTSF");
    msg.custom.assign("JBCRHIDVGLZCRYJARJACHLSQITMGWCNXGDVMLYTXAYWNTBZSVSTDQWCUTBTQAKHONROSWXOUDN");

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
    msg.setTimeStamp(0.48487096989694767);
    msg.setSource(21362U);
    msg.setSourceEntity(171U);
    msg.setDestination(21912U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.7071481543393777;
    msg.lon = 0.45356400197063684;
    msg.z = 0.07826037170705602;
    msg.z_units = 5U;
    msg.speed = 0.19183805852975666;
    msg.speed_units = 111U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5192006526499429;
    tmp_msg_0.y = 0.284343086606495;
    tmp_msg_0.z = 0.8283149475242995;
    tmp_msg_0.t = 0.6136874973732089;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 11895U;
    tmp_msg_1.off_x = 0.529778337810355;
    tmp_msg_1.off_y = 0.42263478623578965;
    tmp_msg_1.off_z = 0.8837256137531476;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.534389966692557;
    msg.custom.assign("MZHBPKDJFVZHVEFWPOSDFAQYHONKPMJMMAVRNRKOBAPWRSBMJGPBLCLTFTSJBUXCNEILUDYX");

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
    msg.setTimeStamp(0.7457930830929548);
    msg.setSource(45963U);
    msg.setSourceEntity(70U);
    msg.setDestination(1856U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.3242648466838448;
    msg.lon = 0.7690936927428839;
    msg.z = 0.5582328505474872;
    msg.z_units = 64U;
    msg.speed = 0.6262740318193828;
    msg.speed_units = 56U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9694U;
    tmp_msg_0.off_x = 0.09048082473457975;
    tmp_msg_0.off_y = 0.3874352961016577;
    tmp_msg_0.off_z = 0.7531394788745294;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8542469177066984;
    msg.custom.assign("NHIQICSJSFFTSWRCJJUQKRKCBDB");

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
    msg.setTimeStamp(0.25316175298402155);
    msg.setSource(16076U);
    msg.setSourceEntity(216U);
    msg.setDestination(8663U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.4486981205747125;
    msg.lon = 0.988273180956038;
    msg.z = 0.9585518357178593;
    msg.z_units = 215U;
    msg.speed = 0.8980743237496662;
    msg.speed_units = 169U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27362U;
    tmp_msg_0.off_x = 0.9298387656794302;
    tmp_msg_0.off_y = 0.4446765486925741;
    tmp_msg_0.off_z = 0.041584487417041904;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.40552159940755783;
    msg.custom.assign("MAHJRILBKAPNHQSWSPKIMSOKXXSKMJLUITRYTVENTRHHBAJVDLZPHOMCCZJAWNPVFFGWXDLOKZGFQLVVDQRXLPDJSZCBVKEZILXRCPGMWZZFGAONWUDPLUAUTGSXQLTUJMMM");

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
    msg.setTimeStamp(0.8432474945110593);
    msg.setSource(47504U);
    msg.setSourceEntity(251U);
    msg.setDestination(31169U);
    msg.setDestinationEntity(53U);
    msg.vid = 31535U;
    msg.off_x = 0.36303635186550864;
    msg.off_y = 0.19566924485587944;
    msg.off_z = 0.98215280107483;

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
    msg.setTimeStamp(0.6427487443600914);
    msg.setSource(46641U);
    msg.setSourceEntity(137U);
    msg.setDestination(52206U);
    msg.setDestinationEntity(23U);
    msg.vid = 12625U;
    msg.off_x = 0.9812247835427325;
    msg.off_y = 0.7275329790372947;
    msg.off_z = 0.23965108295877602;

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
    msg.setTimeStamp(0.5393217461341614);
    msg.setSource(13891U);
    msg.setSourceEntity(246U);
    msg.setDestination(46800U);
    msg.setDestinationEntity(28U);
    msg.vid = 24078U;
    msg.off_x = 0.11440657289570477;
    msg.off_y = 0.6863639686604601;
    msg.off_z = 0.605182662991278;

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
    msg.setTimeStamp(0.10997906219437148);
    msg.setSource(9762U);
    msg.setSourceEntity(239U);
    msg.setDestination(50494U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.6290820686891062);
    msg.setSource(53576U);
    msg.setSourceEntity(69U);
    msg.setDestination(52489U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.2810991379894844);
    msg.setSource(19709U);
    msg.setSourceEntity(92U);
    msg.setDestination(42347U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.20645222606340974);
    msg.setSource(43709U);
    msg.setSourceEntity(176U);
    msg.setDestination(58735U);
    msg.setDestinationEntity(51U);
    msg.mid = 20311U;

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
    msg.setTimeStamp(0.4977553390454522);
    msg.setSource(47332U);
    msg.setSourceEntity(133U);
    msg.setDestination(11784U);
    msg.setDestinationEntity(172U);
    msg.mid = 43017U;

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
    msg.setTimeStamp(0.032315927384624965);
    msg.setSource(3634U);
    msg.setSourceEntity(6U);
    msg.setDestination(57167U);
    msg.setDestinationEntity(189U);
    msg.mid = 43126U;

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
    msg.setTimeStamp(0.38283324986578393);
    msg.setSource(53937U);
    msg.setSourceEntity(91U);
    msg.setDestination(56739U);
    msg.setDestinationEntity(36U);
    msg.state = 188U;
    msg.eta = 57712U;
    msg.info.assign("JCYDFRQPIFMVNOXEWTASXLRYAHFXLVWXJ");

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
    msg.setTimeStamp(0.8631243269365991);
    msg.setSource(43911U);
    msg.setSourceEntity(120U);
    msg.setDestination(35596U);
    msg.setDestinationEntity(214U);
    msg.state = 143U;
    msg.eta = 40441U;
    msg.info.assign("GJSDNFYUTXUDGZGHVTT");

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
    msg.setTimeStamp(0.042687922046086846);
    msg.setSource(25978U);
    msg.setSourceEntity(100U);
    msg.setDestination(37036U);
    msg.setDestinationEntity(30U);
    msg.state = 93U;
    msg.eta = 23172U;
    msg.info.assign("GTHMXAFQMHWUJJPIOTZUQSHRERTYHFEGZCBVTNMIBQTREPJKJTYLWSARCYAEDLTUANXEMD");

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
    msg.setTimeStamp(0.31151460000866127);
    msg.setSource(57250U);
    msg.setSourceEntity(203U);
    msg.setDestination(43869U);
    msg.setDestinationEntity(151U);
    msg.system = 27469U;
    msg.duration = 1088U;
    msg.speed = 0.7188561214849555;
    msg.speed_units = 20U;
    msg.x = 0.2443571144588299;
    msg.y = 0.4531383265455794;
    msg.z = 0.43689598479013836;
    msg.z_units = 120U;

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
    msg.setTimeStamp(0.8926171347186135);
    msg.setSource(42072U);
    msg.setSourceEntity(164U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(236U);
    msg.system = 46788U;
    msg.duration = 17298U;
    msg.speed = 0.27959288656048487;
    msg.speed_units = 90U;
    msg.x = 0.8048139752069374;
    msg.y = 0.505979876836449;
    msg.z = 0.03982399630482725;
    msg.z_units = 43U;

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
    msg.setTimeStamp(0.23332567820253425);
    msg.setSource(59628U);
    msg.setSourceEntity(179U);
    msg.setDestination(32172U);
    msg.setDestinationEntity(245U);
    msg.system = 46451U;
    msg.duration = 3998U;
    msg.speed = 0.8455651934636819;
    msg.speed_units = 246U;
    msg.x = 0.9078295933048692;
    msg.y = 0.9889831762747002;
    msg.z = 0.8062906136920446;
    msg.z_units = 191U;

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
    msg.setTimeStamp(0.8682290820349738);
    msg.setSource(12689U);
    msg.setSourceEntity(30U);
    msg.setDestination(32659U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.4724901886718196;
    msg.lon = 0.9561831868036728;
    msg.speed = 0.36202484045071937;
    msg.speed_units = 27U;
    msg.duration = 50311U;
    msg.sys_a = 45577U;
    msg.sys_b = 1461U;
    msg.move_threshold = 0.20151212178742473;

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
    msg.setTimeStamp(0.33578325105669093);
    msg.setSource(36846U);
    msg.setSourceEntity(114U);
    msg.setDestination(52160U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.5442339461572508;
    msg.lon = 0.3882850869069113;
    msg.speed = 0.985755396487696;
    msg.speed_units = 180U;
    msg.duration = 37997U;
    msg.sys_a = 64321U;
    msg.sys_b = 11962U;
    msg.move_threshold = 0.7833526518940901;

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
    msg.setTimeStamp(0.010746559555750657);
    msg.setSource(5606U);
    msg.setSourceEntity(175U);
    msg.setDestination(20615U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.1009099235990083;
    msg.lon = 0.8062435071004982;
    msg.speed = 0.37457647312128406;
    msg.speed_units = 254U;
    msg.duration = 24650U;
    msg.sys_a = 23657U;
    msg.sys_b = 29744U;
    msg.move_threshold = 0.6014547828172075;

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
    msg.setTimeStamp(0.39166140091450463);
    msg.setSource(6474U);
    msg.setSourceEntity(170U);
    msg.setDestination(48673U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.43201195753751975;
    msg.lon = 0.812759215744796;
    msg.z = 0.5710589131148635;
    msg.z_units = 81U;
    msg.speed = 0.4830218974132897;
    msg.speed_units = 55U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6194948929836934;
    tmp_msg_0.lon = 0.08297659393368861;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FZKCYSNAQPLVOFVUEOUGMKALDPDHTLMDGLEOQNVIFDQZPRHPSPNKHEBKZWIAQOQIVHCLRIEFIEMVKLEBHLRSOXFMUSTISVAXZAAVNXJXYZTIAWWWZYAGCUMJJWPQRKNLDWUXLIJDBYPXBKCUFGZXGJEBTEHGBCTBCVMOOGVYYOXQYJYWUYDJGLTJEPNJRTCKQWJKFYMMWNDBNUHHCNEMAVRZNFPDRFKZA");

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
    msg.setTimeStamp(0.7751483981236924);
    msg.setSource(10841U);
    msg.setSourceEntity(53U);
    msg.setDestination(56662U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.8164828694537123;
    msg.lon = 0.4142707498516819;
    msg.z = 0.9605944074020135;
    msg.z_units = 64U;
    msg.speed = 0.31766274790090376;
    msg.speed_units = 173U;
    msg.custom.assign("BRFDUBARWZCDZFQPPSQCWGMZPAAJEWMEYXSIOBZUTBCQRITKMGEYWKXZXHVRQGRDWGEZAQHGOIJACJHUHOTJETYQSMUCSOULIWAWPTKRCUDDXJZLNGVAURMLOSFKVY");

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
    msg.setTimeStamp(0.609098434400377);
    msg.setSource(60450U);
    msg.setSourceEntity(121U);
    msg.setDestination(54935U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.22419727796525024;
    msg.lon = 0.6366053355002992;
    msg.z = 0.8493832546979457;
    msg.z_units = 229U;
    msg.speed = 0.5988441235808823;
    msg.speed_units = 182U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5590662951851194;
    tmp_msg_0.lon = 0.5584800612097213;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IZJHWEFUNCUCSZPVFKBITQNXNFMXTXOOIKJJHBGLRIOYWBQXAGMWEMB");

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
    msg.setTimeStamp(0.6699575740008193);
    msg.setSource(23306U);
    msg.setSourceEntity(109U);
    msg.setDestination(55388U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.018460898054113994;
    msg.lon = 0.3449931134991939;

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
    msg.setTimeStamp(0.5933674558301709);
    msg.setSource(40510U);
    msg.setSourceEntity(26U);
    msg.setDestination(21841U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.7274474840231041;
    msg.lon = 0.5116095901144637;

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
    msg.setTimeStamp(0.9015419821218741);
    msg.setSource(14370U);
    msg.setSourceEntity(111U);
    msg.setDestination(59765U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.7051769765813726;
    msg.lon = 0.8358137473794401;

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
    msg.setTimeStamp(0.02114426807892944);
    msg.setSource(6226U);
    msg.setSourceEntity(156U);
    msg.setDestination(48567U);
    msg.setDestinationEntity(72U);
    msg.timeout = 6474U;
    msg.lat = 0.8268643249498584;
    msg.lon = 0.7218712406555969;
    msg.z = 0.28716195432517966;
    msg.z_units = 109U;
    msg.pitch = 0.024549314578076853;
    msg.amplitude = 0.6348158688930429;
    msg.duration = 28127U;
    msg.speed = 0.5237258216274018;
    msg.speed_units = 128U;
    msg.radius = 0.8106132083837644;
    msg.direction = 134U;
    msg.custom.assign("WYNQNGJSPSEBSTHEYXZXOAATCJGOQMMLUCUWAPCGYMUXGMCFENKNEDHVQNULYERSKHEPBWGOGTITIRGWJPAHIDMCLDHQWVTAMKRIJRNDPHVUFOSCCFEDLFPVKWVERTTIBPNZNYNZZSKCLLXJQCXIVRZSMAUJXSLTVDWUJPQUBRQDZOHE");

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
    msg.setTimeStamp(0.6559880793029262);
    msg.setSource(6276U);
    msg.setSourceEntity(177U);
    msg.setDestination(60292U);
    msg.setDestinationEntity(92U);
    msg.timeout = 7327U;
    msg.lat = 0.6450233656007992;
    msg.lon = 0.6010163633930301;
    msg.z = 0.9219050891828676;
    msg.z_units = 171U;
    msg.pitch = 0.0714160345930338;
    msg.amplitude = 0.9979099942789431;
    msg.duration = 19053U;
    msg.speed = 0.10103462154375786;
    msg.speed_units = 34U;
    msg.radius = 0.2336252030588316;
    msg.direction = 192U;
    msg.custom.assign("HIKBBRPHIDHPQWGCGZSTYSYAQSITJRWOXBOAYOGHUOUCWEFSDZLRUDTVMCFBEPZHMDAHLZJFCAEPWABIQJOZCGYSTSMVEYTHDNDXIXLVDRZMEWWZUVTAQEGYXQTPDFCPRNNWEJTCRMMDHVXJFLEZKPFQIHKSNKJWJXLGFNFIQQOXBMPCUSGJLGIYFVURONLKUMQFVKECBNJTNNUBIOVCSGGWXARSPLIV");

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
    msg.setTimeStamp(0.5785377088056616);
    msg.setSource(23233U);
    msg.setSourceEntity(219U);
    msg.setDestination(25453U);
    msg.setDestinationEntity(92U);
    msg.timeout = 35234U;
    msg.lat = 0.524513151558608;
    msg.lon = 0.40720829603476305;
    msg.z = 0.816332359959014;
    msg.z_units = 17U;
    msg.pitch = 0.7140918179460378;
    msg.amplitude = 0.7031537307489747;
    msg.duration = 45886U;
    msg.speed = 0.9592022767681043;
    msg.speed_units = 200U;
    msg.radius = 0.1343114776355604;
    msg.direction = 206U;
    msg.custom.assign("LYJTEQUSSYCEECZLHOBZFUYCEWEVEBQFJCADOQUWWHKJMZGICRKIVZNSTZVBODOHDPTLSOG");

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
    msg.setTimeStamp(0.0018675665192039448);
    msg.setSource(56548U);
    msg.setSourceEntity(243U);
    msg.setDestination(38659U);
    msg.setDestinationEntity(159U);
    msg.formation_name.assign("XXTYPKPUSCIZZVPEWWVZVFJJLJGNGBOSGRHQLHGZWHYCEUECNXDDMTADSUOGSSTKGYTALVGGHVNLBRTTOZANMQLYEBAFAMYYWNMOLCZRIJLRCPKCNESJJTRXMTIDNVDFFBXFRBMAESQBQMBTW");
    msg.reference_frame = 234U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52157U;
    tmp_msg_0.off_x = 0.8257293011690852;
    tmp_msg_0.off_y = 0.6199711667223852;
    tmp_msg_0.off_z = 0.6798151559312972;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("UXCITAHKXYKBQOYHEBZKWWMFVKGMBHCUJEKWGSASKLPIJVJMIGUFPSQAKJLYNHYPAOEXJVGYBFPNJCCCWKDUFXQTNSTRLOVRMIHIRLFRJYTYAPVEDBSMTUDRICFYORNYOBWALNWPGDXQMX");

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
    msg.setTimeStamp(0.48370951921008964);
    msg.setSource(64696U);
    msg.setSourceEntity(26U);
    msg.setDestination(59893U);
    msg.setDestinationEntity(125U);
    msg.formation_name.assign("EGXFPHMTGIJHDVSQEGJJBJETMALQTUAIEYXTXZIHVMZWHWTJODYRKGNT");
    msg.reference_frame = 219U;
    msg.custom.assign("NQJYZZMQFUQGYKNUJLEDKRJAGLSPHXFBECIPATHCBEISLPVTOLWNJASNYTLJWHYGJSHFMIRTMONDBXKRELHFYPAXIJPUMOSJJJRZKFENUUGIWVTEMYWGKMBZUOCRCVVTXPPSFPOKGBWDAOWQISPEGZKHYVTDUCVEDXZBZIRGNTELWDUZGFKLDMPQXARCOHYMDCANIQMQBLCYBAWVZFCE");

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
    msg.setTimeStamp(0.7680601605662927);
    msg.setSource(46519U);
    msg.setSourceEntity(202U);
    msg.setDestination(6941U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("KAKFTFMGOPVVPZYBGPSEQEZVRGSDWKJHISNT");
    msg.reference_frame = 170U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11101U;
    tmp_msg_0.off_x = 0.13542289125279305;
    tmp_msg_0.off_y = 0.8082307288354444;
    tmp_msg_0.off_z = 0.16881531292596985;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZTRUSHPKGMJMLOXGYPLASKYZFJGTDYSRHMWCQFHASFDMNTIWBSFNTBDPKWYQOZQGNFMZXCCOSYPVREOQEMKZWRJBZOQERXVBXNAFSCKLNDETWMYCQLKVEUOUBJQGGLTIRJRIUHAVFXDAWKZJYNVNHTHCELTLYOJEPRGWRKPDYFKEIVOHIJFPLAGDMQCIJEGACHBNPICOUDKVPIBEXHDUUVISIZWMZUCTWVLYALRTQQXJOXMVZBFAGNPA");

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
    msg.setTimeStamp(0.5805954421523544);
    msg.setSource(15926U);
    msg.setSourceEntity(13U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("FUPSZRASIVSNQTJGDTTAWLJOWLPJATUJONEYYCTNPPUKJQWAROUPQNMDPXWAQWYBBKOLMVKNKHDFYMKWDUGTGLBDHXAVJUNJXCQEPCEFIFOHBYEIHLSOGKMGEGMPDFCYIGQJSL");
    msg.formation_name.assign("HBQLFMDKIVCTXSYVLMNWWGUNLASQPOTEUKROXATVPRYFBLWGBTUCCGJPNNHAIYQOFODXHQUIQWODDRKVONAKWMUMWPBEXIQYZPWITEPAEZJKVJZQWPFIVYDSJVZZBMRGHFYXJUN");
    msg.plan_id.assign("EQIMZBGULJDRGKUYSBIRHSOGVTZPLBJYQINWPEIDLHUWEYNTGQRPSVNHETXVNSFHAAOMZDGDYXKMLICONKSALUVRUKUSKFBAXIVEZUHOXBZRFSHMGSOGKOHJGUEFJBB");
    msg.description.assign("NQHNPBHECUTFZZUMIJHAFOYBXBNFHEDKGTSWMRCNGGFVJERGMZJPLMYZVNIZLMFWUSZXRGCODMHYZWKKBDIRFKGKSDDEFEDRGHWHLMBVCXLOLPARPQHMECIYBGVOXCAUINTKNAJJOLIWYXDINVVAVSLWJFJZUTAWFKCWFBYIVSTJLBQJETBPLYSPIXZNQUUEPKXURGXVYW");
    msg.leader_speed = 0.4914581798370026;
    msg.leader_bank_lim = 0.290044944830702;
    msg.pos_sim_err_lim = 0.8707272289834673;
    msg.pos_sim_err_wrn = 0.9934359082234516;
    msg.pos_sim_err_timeout = 46569U;
    msg.converg_max = 0.4488892191528102;
    msg.converg_timeout = 3518U;
    msg.comms_timeout = 55353U;
    msg.turb_lim = 0.8276077748982643;
    msg.custom.assign("VFZCQKJKUIUPUICBETBQDUOROHXYFVMPUALCTGLZWOZCJPDHDPWNQCKFVYGVQPSIAOURZCMRATMGDSBEGTZJ");

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
    msg.setTimeStamp(0.13004823478719052);
    msg.setSource(47461U);
    msg.setSourceEntity(160U);
    msg.setDestination(12602U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("FMXEJKCDUFASIAOKDMVJSUYSZZOFNDBKVRXWXTYAOBVURTNBXNMBQZPOEPIUBVUFAXASYQFIJIUXMDZMDXQTWHNCXEDJWQACLEDLLHKNVHKLCOGYTDQTGRVTQOZJCFJGSJPGUPPHDFZZWBZGYYIITYGPKWWUCWYVUWMRUOFVHNSLZSKFLTP");
    msg.formation_name.assign("MKVISTALRFBZYQZVHGNYDOBNJTMWAIPLMMSHWVRGEJVBXTDDWYTEMXYIVQUUXPMKSZXWFLIBNFIWLLXJWNKEGXGSDORGBCEFJHXANBKZOBVUPXXVTYILNTZFFRJDDYUIYLOPYQEFGOJGWCQPQPSOUBRSHZMTRNDASOHANRBQZCHSHAIAPJCCCCARSUEPKZJRWFKTMPWTFVQQMGVKEHCYLXYTGJDKULCQEKFQ");
    msg.plan_id.assign("SABUYFMISMOMZZTDQUAJVUNZIOMYVPZNOGRBFHGYGMJVYYBLJQPPLEENOAGUACDQGLGTLNFSOKWAWKT");
    msg.description.assign("DHHWJEUMDMHKARGTKKHDGQIAJEUEBVTUXHDOTLLAAYYDOPMBXPYICOBFQWAJTXRGMNCPUPBWNZCKSBCLBJPJMLOXKFYTIXEHZZQGSSKAIBFELOILKVPSSMNQSLN");
    msg.leader_speed = 0.018528881890036986;
    msg.leader_bank_lim = 0.04167511300310389;
    msg.pos_sim_err_lim = 0.7998271298542265;
    msg.pos_sim_err_wrn = 0.47597202234590763;
    msg.pos_sim_err_timeout = 41884U;
    msg.converg_max = 0.9579893267118509;
    msg.converg_timeout = 39437U;
    msg.comms_timeout = 25335U;
    msg.turb_lim = 0.49067728394109666;
    msg.custom.assign("MFOFFDNOSYMILRAMPWOGUABRHAFEDLQCILHPGKGRQFSITZOSDY");

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
    msg.setTimeStamp(0.7217118508060724);
    msg.setSource(56219U);
    msg.setSourceEntity(118U);
    msg.setDestination(38507U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("CFBTGAQLXHZFDCXFFYWJNXIJLOXBGKNJNGWIWTCKHVZGRLGSOHHVOTGTVROQPVNRXMNWJMLEPMICRXHPNNHQPOJCPOAVDWVWCZURBAPEBEMTIHKABYQZRBTSCPCCDHWNEETUYUVUAD");
    msg.formation_name.assign("CEQFUDXPDWEMDJRHQVBJYEDNZIGDFLYNNJLOLGMCOFTIROHSMITXHGHRHQJPCHCKDCTMLMGFMBJWOILVWGSYAKELELUACTREKUBAHPYCGBXBITUPSHPQKPRQVFARWESMIVXKJJLZBZOTZQQRDQGWMWUFXGKZXIVYOUBAUDCBVPTZBJQLNRYLJOUSYSWVWWITAMKNYSVZPKNNDNYZNRFXBETYSUHZFOXOAVTSIAFPKHPWEAKCO");
    msg.plan_id.assign("NDSLYLRAAVOSEDJGTHUTMGCXKNUPQJRKXOQQQGHWWHPCURMZNBZYCUSEWCAMTNLEHBKVXEUOLJLBTZHURCHEUPOAPHIXJKMIQZJVEMM");
    msg.description.assign("UKNQTQBIZDQXMZDRECSANLHLKKIZNEFZDEDOVRSUXDZMRAHAYQPQAZHLJYPJKZRAYKEKLBLEOMUHX");
    msg.leader_speed = 0.2717601510239329;
    msg.leader_bank_lim = 0.9666496114538802;
    msg.pos_sim_err_lim = 0.6144012619860769;
    msg.pos_sim_err_wrn = 0.4073645072663892;
    msg.pos_sim_err_timeout = 37242U;
    msg.converg_max = 0.9546815579581944;
    msg.converg_timeout = 38146U;
    msg.comms_timeout = 31380U;
    msg.turb_lim = 0.3509973024076094;
    msg.custom.assign("DQROKNWZLOWLSUUGYIMCRFGOBGGEFXPPHJWDHUKMZVXLBTIPMOARSIEJJVGDOLOE");

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
    msg.setTimeStamp(0.6832230176285363);
    msg.setSource(53799U);
    msg.setSourceEntity(232U);
    msg.setDestination(43257U);
    msg.setDestinationEntity(232U);
    msg.control_src = 50799U;
    msg.control_ent = 150U;
    msg.timeout = 0.4282747906340658;
    msg.loiter_radius = 0.9078312775532137;
    msg.altitude_interval = 0.43680388180088325;

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
    msg.setTimeStamp(0.7533564963876757);
    msg.setSource(1537U);
    msg.setSourceEntity(175U);
    msg.setDestination(22735U);
    msg.setDestinationEntity(219U);
    msg.control_src = 31959U;
    msg.control_ent = 195U;
    msg.timeout = 0.8550509462208304;
    msg.loiter_radius = 0.06012584049940728;
    msg.altitude_interval = 0.3699012451693027;

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
    msg.setTimeStamp(0.9537197776252823);
    msg.setSource(52978U);
    msg.setSourceEntity(77U);
    msg.setDestination(17981U);
    msg.setDestinationEntity(162U);
    msg.control_src = 487U;
    msg.control_ent = 229U;
    msg.timeout = 0.4518432285351497;
    msg.loiter_radius = 0.31429338047199995;
    msg.altitude_interval = 0.20621854010763174;

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
    msg.setTimeStamp(0.05571624858773372);
    msg.setSource(56782U);
    msg.setSourceEntity(168U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(157U);
    msg.flags = 121U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.43355767095996656;
    tmp_msg_0.speed_units = 208U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.21887473189342033;
    tmp_msg_1.z_units = 131U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.35435839388009593;
    msg.lon = 0.05064623656975109;
    msg.radius = 0.06110986785153871;

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
    msg.setTimeStamp(0.149632405066073);
    msg.setSource(30U);
    msg.setSourceEntity(25U);
    msg.setDestination(42352U);
    msg.setDestinationEntity(128U);
    msg.flags = 234U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.47566925514265856;
    tmp_msg_0.speed_units = 30U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7553006275779295;
    tmp_msg_1.z_units = 98U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.21112303280515066;
    msg.lon = 0.45685837725415357;
    msg.radius = 0.7611956475564365;

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
    msg.setTimeStamp(0.8942763896556414);
    msg.setSource(48459U);
    msg.setSourceEntity(78U);
    msg.setDestination(40391U);
    msg.setDestinationEntity(193U);
    msg.flags = 35U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.19430033360096322;
    tmp_msg_0.speed_units = 124U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7182299224223195;
    tmp_msg_1.z_units = 238U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3324350997192588;
    msg.lon = 0.4859317203874721;
    msg.radius = 0.4462060142713038;

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
    msg.setTimeStamp(0.11446936202574165);
    msg.setSource(21005U);
    msg.setSourceEntity(73U);
    msg.setDestination(55009U);
    msg.setDestinationEntity(89U);
    msg.control_src = 40835U;
    msg.control_ent = 36U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 226U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8482304587880055;
    tmp_tmp_msg_0_0.speed_units = 245U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.32930561473181885;
    tmp_tmp_msg_0_1.z_units = 116U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.34165089150211647;
    tmp_msg_0.lon = 0.029315364686183676;
    tmp_msg_0.radius = 0.8981421638922404;
    msg.reference.set(tmp_msg_0);
    msg.state = 29U;
    msg.proximity = 40U;

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
    msg.setTimeStamp(0.39154634843934744);
    msg.setSource(12241U);
    msg.setSourceEntity(137U);
    msg.setDestination(20484U);
    msg.setDestinationEntity(103U);
    msg.control_src = 19934U;
    msg.control_ent = 253U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 180U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8980924562649646;
    tmp_tmp_msg_0_0.speed_units = 138U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7054002949154221;
    tmp_tmp_msg_0_1.z_units = 81U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9030693239226303;
    tmp_msg_0.lon = 0.908240465093668;
    tmp_msg_0.radius = 0.49368107881553525;
    msg.reference.set(tmp_msg_0);
    msg.state = 193U;
    msg.proximity = 192U;

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
    msg.setTimeStamp(0.5839299539033816);
    msg.setSource(14576U);
    msg.setSourceEntity(182U);
    msg.setDestination(35884U);
    msg.setDestinationEntity(102U);
    msg.control_src = 21968U;
    msg.control_ent = 57U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 80U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.36907904493855703;
    tmp_tmp_msg_0_0.speed_units = 0U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7110466236091516;
    tmp_tmp_msg_0_1.z_units = 115U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5571664400048223;
    tmp_msg_0.lon = 0.6872967818727541;
    tmp_msg_0.radius = 0.6540793075018069;
    msg.reference.set(tmp_msg_0);
    msg.state = 203U;
    msg.proximity = 68U;

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
    msg.setTimeStamp(0.8789282777927311);
    msg.setSource(39722U);
    msg.setSourceEntity(217U);
    msg.setDestination(23876U);
    msg.setDestinationEntity(195U);
    msg.ax_cmd = 0.4128609483666954;
    msg.ay_cmd = 0.3311299121050101;
    msg.az_cmd = 0.6783848570908488;
    msg.ax_des = 0.6270706485426498;
    msg.ay_des = 0.7870329079147149;
    msg.az_des = 0.7944243460359834;
    msg.virt_err_x = 0.22590331045395218;
    msg.virt_err_y = 0.8315301620375682;
    msg.virt_err_z = 0.8782049203179179;
    msg.surf_fdbk_x = 0.4981941766099257;
    msg.surf_fdbk_y = 0.3411871783261886;
    msg.surf_fdbk_z = 0.8016023690289941;
    msg.surf_unkn_x = 0.7106568761838482;
    msg.surf_unkn_y = 0.2969692208893009;
    msg.surf_unkn_z = 0.31200856037760294;
    msg.ss_x = 0.7579075822587248;
    msg.ss_y = 0.44931408711804466;
    msg.ss_z = 0.8193364326427108;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LZRVEVQRZOULQXMGJFDQFRIVMRJDFSGXVCXAENNQMJFWIAUGWONNYZHSIUZXJCGTZBTYDINJXVDQVAXOCGETBEATWRMKUVFBRDZMQUJSPETHMXSKBYASJPDOKOPYFGJQBHVKPSDODWWIBUJKGXFHIBZPCHIWTGSPNDRMQRANDWOKLNMSQCGUEFOPWLLLTYFVHMLRWA");
    tmp_msg_0.dist = 0.19505048067537056;
    tmp_msg_0.err = 0.6989172498037642;
    tmp_msg_0.ctrl_imp = 0.6141420365663185;
    tmp_msg_0.rel_dir_x = 0.5290107632871274;
    tmp_msg_0.rel_dir_y = 0.8974450629595278;
    tmp_msg_0.rel_dir_z = 0.9239090876327849;
    tmp_msg_0.err_x = 0.161637040425765;
    tmp_msg_0.err_y = 0.6632814165943864;
    tmp_msg_0.err_z = 0.23201482853030486;
    tmp_msg_0.rf_err_x = 0.29374670289096516;
    tmp_msg_0.rf_err_y = 0.7242332936407521;
    tmp_msg_0.rf_err_z = 0.5849339853202976;
    tmp_msg_0.rf_err_vx = 0.5518596163225837;
    tmp_msg_0.rf_err_vy = 0.8550281116367957;
    tmp_msg_0.rf_err_vz = 0.4176412510451645;
    tmp_msg_0.ss_x = 0.5244298047022157;
    tmp_msg_0.ss_y = 0.9178620367146537;
    tmp_msg_0.ss_z = 0.4752384717804504;
    tmp_msg_0.virt_err_x = 0.43242135109950575;
    tmp_msg_0.virt_err_y = 0.5914037052494328;
    tmp_msg_0.virt_err_z = 0.13994553631438433;
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
    msg.setTimeStamp(0.21107045991282058);
    msg.setSource(40218U);
    msg.setSourceEntity(208U);
    msg.setDestination(28427U);
    msg.setDestinationEntity(159U);
    msg.ax_cmd = 0.812558493650309;
    msg.ay_cmd = 0.5515966366795497;
    msg.az_cmd = 0.8163538694205266;
    msg.ax_des = 0.9449795603878762;
    msg.ay_des = 0.8366432300599538;
    msg.az_des = 0.8512625622902013;
    msg.virt_err_x = 0.44452105056971325;
    msg.virt_err_y = 0.1604253837055314;
    msg.virt_err_z = 0.6975458007999533;
    msg.surf_fdbk_x = 0.4464958948428135;
    msg.surf_fdbk_y = 0.21739070376083636;
    msg.surf_fdbk_z = 0.218711687297655;
    msg.surf_unkn_x = 0.9460623839659467;
    msg.surf_unkn_y = 0.04940760381759868;
    msg.surf_unkn_z = 0.9864296665068447;
    msg.ss_x = 0.9064185040868576;
    msg.ss_y = 0.8422887835006101;
    msg.ss_z = 0.9927312364390519;

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
    msg.setTimeStamp(0.9853160645831199);
    msg.setSource(26397U);
    msg.setSourceEntity(125U);
    msg.setDestination(13713U);
    msg.setDestinationEntity(217U);
    msg.ax_cmd = 0.4619000978141782;
    msg.ay_cmd = 0.4038377532120062;
    msg.az_cmd = 0.20095377915727264;
    msg.ax_des = 0.1517391990055862;
    msg.ay_des = 0.21701104326576526;
    msg.az_des = 0.9146007979305129;
    msg.virt_err_x = 0.8238493607337588;
    msg.virt_err_y = 0.12597888906024035;
    msg.virt_err_z = 0.4529818865024927;
    msg.surf_fdbk_x = 0.07092984791925216;
    msg.surf_fdbk_y = 0.8499584153215639;
    msg.surf_fdbk_z = 0.8413961102277077;
    msg.surf_unkn_x = 0.9732136792411299;
    msg.surf_unkn_y = 0.06054434625110483;
    msg.surf_unkn_z = 0.1743936228356895;
    msg.ss_x = 0.33682022430697245;
    msg.ss_y = 0.9494657005740081;
    msg.ss_z = 0.041194740959123566;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TWQVAZMMJUHZWITEMFMVPFUNNSDBQAZFDUYFKQGELKAVEQBHFHJBIKEMPSSRQCJGNGJODZGRNBRAJXHMRYBUFPSZKUKCIYTOWHJMYXOALXOBNAQNHFBDCWXISBJZPKGGUGDSIXWYCVKLHVTDGWTPANPUXCZYHWXNRCZULFKUXWVLYDLTEWIYCLGORWDLMQPOEPJRYFSTEGVOYESMHDRVOSPAOLAJTSQZJTMFXCNUKAQLCIVIPDKHRIIBOXEVTR");
    tmp_msg_0.dist = 0.18200193238859452;
    tmp_msg_0.err = 0.5522146111487384;
    tmp_msg_0.ctrl_imp = 0.37749680303468025;
    tmp_msg_0.rel_dir_x = 0.6379882827673571;
    tmp_msg_0.rel_dir_y = 0.200135546584419;
    tmp_msg_0.rel_dir_z = 0.4516155212867883;
    tmp_msg_0.err_x = 0.7270200301003712;
    tmp_msg_0.err_y = 0.6679022344532891;
    tmp_msg_0.err_z = 0.2309717592359004;
    tmp_msg_0.rf_err_x = 0.5819775404730951;
    tmp_msg_0.rf_err_y = 0.65587399669153;
    tmp_msg_0.rf_err_z = 0.1987467904910426;
    tmp_msg_0.rf_err_vx = 0.6297154884444119;
    tmp_msg_0.rf_err_vy = 0.5947427678679192;
    tmp_msg_0.rf_err_vz = 0.04429371828085471;
    tmp_msg_0.ss_x = 0.4562180633443107;
    tmp_msg_0.ss_y = 0.08043171874692212;
    tmp_msg_0.ss_z = 0.9161211667882915;
    tmp_msg_0.virt_err_x = 0.2674439050496059;
    tmp_msg_0.virt_err_y = 0.8231628482096796;
    tmp_msg_0.virt_err_z = 0.7587452662670544;
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
    msg.setTimeStamp(0.5400865367523247);
    msg.setSource(34781U);
    msg.setSourceEntity(78U);
    msg.setDestination(31223U);
    msg.setDestinationEntity(190U);
    msg.s_id.assign("GUOAPGGDXXNMJWLICAEGBMQJIRHDPSCXAVOKYSCJZGOYMBCQBMNDRFBYPIDXYTLRQZHCXHOUARDNVWVNPBEBGSUKNCYUNAOKVVFJTWKPHOXBZJIEVWXTLZHWMRUKRIANZVNOUTFLDETXJWUQLKUIQLHILBHPJH");
    msg.dist = 0.4157045385439121;
    msg.err = 0.035311433308974016;
    msg.ctrl_imp = 0.8552105885048906;
    msg.rel_dir_x = 0.8252183015365897;
    msg.rel_dir_y = 0.05021481287790874;
    msg.rel_dir_z = 0.1468146065093877;
    msg.err_x = 0.18258597521960696;
    msg.err_y = 0.47206091920544335;
    msg.err_z = 0.7594005105875996;
    msg.rf_err_x = 0.5118848446536239;
    msg.rf_err_y = 0.9067024947980644;
    msg.rf_err_z = 0.9048152336377326;
    msg.rf_err_vx = 0.6500679424004441;
    msg.rf_err_vy = 0.7691465988981925;
    msg.rf_err_vz = 0.4430500318064049;
    msg.ss_x = 0.11935856007220158;
    msg.ss_y = 0.2809474470045109;
    msg.ss_z = 0.13688710523763925;
    msg.virt_err_x = 0.9002755562110405;
    msg.virt_err_y = 0.22845442935117133;
    msg.virt_err_z = 0.27312344503166197;

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
    msg.setTimeStamp(0.6242864075848126);
    msg.setSource(43832U);
    msg.setSourceEntity(93U);
    msg.setDestination(51132U);
    msg.setDestinationEntity(158U);
    msg.s_id.assign("MNPDKAPMITIPFTWEGJLCVSZHYYSJHTEGIBPTWMLCLGWKVXCWGGUUOUAMDHAKDJYFEOAAPFQHMUSVAMBZZSUQINGCZJJEYDFUFPIIHKGQTYCWNOIKVZELDXVSKHQKGSJWQJVGQRPZLIOFPEJDLEVVZRHNAXKFUDBLCHTNXYZEBXDRHQCWCYUIOF");
    msg.dist = 0.9767655172831387;
    msg.err = 0.11371876269560832;
    msg.ctrl_imp = 0.0962945231504978;
    msg.rel_dir_x = 0.6467729218318399;
    msg.rel_dir_y = 0.42181206587460074;
    msg.rel_dir_z = 0.08727312071770277;
    msg.err_x = 0.4830330765243349;
    msg.err_y = 0.3351581042632038;
    msg.err_z = 0.5818234854270303;
    msg.rf_err_x = 0.5198729031210947;
    msg.rf_err_y = 0.7713393861443166;
    msg.rf_err_z = 0.8155180766003896;
    msg.rf_err_vx = 0.43064628293243634;
    msg.rf_err_vy = 0.27034489431329145;
    msg.rf_err_vz = 0.05374975964689477;
    msg.ss_x = 0.4779921052413947;
    msg.ss_y = 0.09688379519350598;
    msg.ss_z = 0.2826734934636935;
    msg.virt_err_x = 0.6905421545999437;
    msg.virt_err_y = 0.43096385758968325;
    msg.virt_err_z = 0.6366792734392729;

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
    msg.setTimeStamp(0.2123125379489068);
    msg.setSource(8591U);
    msg.setSourceEntity(247U);
    msg.setDestination(29269U);
    msg.setDestinationEntity(30U);
    msg.s_id.assign("MCAFRPVQEUEZKWIYHMHHLRBQUWVSDNXZFNFHUHIDDNQFMBMOMTLWSPOCBWNZFMJLVUOCWIZAHWXDRPVAUTJOESRHCDIAFGEDKAWLACPINVHQBPFVJGIWUNSKONZSEZXCYHXGXFYSXLWSJTVXBTLECRVEEFQQBURYYJCISYAJFESLIYGIMJXCMTPJPBPIOGJYZECBNLUGAMGDTAGYKKNOOSRKVYXRTQLZKTU");
    msg.dist = 0.05406968577833271;
    msg.err = 0.32187277378412493;
    msg.ctrl_imp = 0.4307428442864458;
    msg.rel_dir_x = 0.6813369062671755;
    msg.rel_dir_y = 0.2168674600628362;
    msg.rel_dir_z = 0.032003322271025314;
    msg.err_x = 0.16337401085821024;
    msg.err_y = 0.07105370620473461;
    msg.err_z = 0.5525623087434097;
    msg.rf_err_x = 0.11335535550389875;
    msg.rf_err_y = 0.9585700815484725;
    msg.rf_err_z = 0.8914989850033482;
    msg.rf_err_vx = 0.09546118084930955;
    msg.rf_err_vy = 0.6326764030405791;
    msg.rf_err_vz = 0.9999568197638727;
    msg.ss_x = 0.05773506292743813;
    msg.ss_y = 0.25005282972446985;
    msg.ss_z = 0.42087200826117854;
    msg.virt_err_x = 0.12504996407293067;
    msg.virt_err_y = 0.410147623988233;
    msg.virt_err_z = 0.39630283574020164;

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
    msg.setTimeStamp(0.6492922751764969);
    msg.setSource(26342U);
    msg.setSourceEntity(89U);
    msg.setDestination(2877U);
    msg.setDestinationEntity(123U);
    msg.timeout = 13103U;
    msg.rpm = 0.531254982218734;
    msg.direction = 251U;
    msg.custom.assign("XZQGVEBDDESYKGRGKHJEWMYSCRTIZFGMNCSXQSBMITPANLHVWHLNXRKAVMJDSSOH");

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
    msg.setTimeStamp(0.5255773037070872);
    msg.setSource(59025U);
    msg.setSourceEntity(126U);
    msg.setDestination(10439U);
    msg.setDestinationEntity(169U);
    msg.timeout = 4541U;
    msg.rpm = 0.9383064220338095;
    msg.direction = 105U;
    msg.custom.assign("BQVEPVSXNKAQGVVMNIBGPYUHOSAFBBLLYUJNDCOMSKBLFGOZDJVGICQXRKNMEMNODTKAESFHEVIRFHZKXROWFAUJWXQKEURYIKVBBZUALQZJNUWFWNXORGAYNRMSMJCFVCYKYLITNPTGOPTELJNTEEGZVHHJRUIWMZPOJCJTXQIJOXWWALIFYHCRQQCPTWSDDYDTWXDGCQZQEK");

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
    msg.setTimeStamp(0.707061257274802);
    msg.setSource(12562U);
    msg.setSourceEntity(129U);
    msg.setDestination(51385U);
    msg.setDestinationEntity(72U);
    msg.timeout = 17401U;
    msg.rpm = 0.1826643332890321;
    msg.direction = 26U;
    msg.custom.assign("WNWRKQCHYVAPHYDKKFBAHJCKVPTOCUNKODREQAKSTTJBMSRLSJYBZBQFEDKMDNZYOSEXGOTEKSWFACCLUIQZIPVHSXNVFVMUEOHYVRHXXMGNWACHQJPIDRWHWEGGVJPIZMONNK");

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
    msg.setTimeStamp(0.6383871274890074);
    msg.setSource(19636U);
    msg.setSourceEntity(124U);
    msg.setDestination(17132U);
    msg.setDestinationEntity(153U);
    msg.formation_name.assign("WEVRKXPLENLARYLAPRHJQNYREELBGQEVXNTHYZTJKZLZPGQICGQQFABCJSFKZNMXFPFCAOHYDUHONBNKETSXCIOIMLFDCJJULUDSJPSWFMVWVGJZIIKJABDZTDAQXYVGWUCJLUBAKIPZXVTNCXSNMPUGGCOBGBMCCKURHRTUPAPDYSWYYNLVFZEBBSSPGRTXMDRJEKMFDLOIKEAOHMUWHQSWNOWFKRVFXZHOTEWVDXHBUGQATYOIOSDTHY");
    msg.type = 207U;
    msg.op = 84U;
    msg.group_name.assign("EJONVKEAZKYANZKGWIORKHCDGXTTXWEMRXDMDVGDAQXYOFWGJBSQW");
    msg.plan_id.assign("VZWFPWDZGJLPAXASDPMECGSFXBBQXLSEFJTRWYKKEAQKTWSVETVJCXUULENSAJZARUMXSUIIUHLYHUGOADMQYFKOCINRBWALOJDZCMMGKCBMPFBXIWHJNVQGEXJQFHNXMVRSODJVRONYMDCGHEATXBHCGSAVWWLBQZNTPILMNWYDITOJFQRWTIFLVTGPVRUYIYSUNQGCHQELHKRARBIRZTUCBCZBPLDOOKDOGTSKVPYOZY");
    msg.description.assign("UJTVVMCHIBPYAFUTHULHMM");
    msg.reference_frame = 16U;
    msg.leader_bank_lim = 0.1690123622483839;
    msg.leader_speed_min = 0.2250105334868311;
    msg.leader_speed_max = 0.07512057206947242;
    msg.leader_alt_min = 0.5362189837640751;
    msg.leader_alt_max = 0.4800726805958372;
    msg.pos_sim_err_lim = 0.337167850881678;
    msg.pos_sim_err_wrn = 0.7708964334866134;
    msg.pos_sim_err_timeout = 50299U;
    msg.converg_max = 0.04537714301622353;
    msg.converg_timeout = 47191U;
    msg.comms_timeout = 64117U;
    msg.turb_lim = 0.2691599416752639;
    msg.custom.assign("ELJVRDGNQKHTXJUOTRPOFLNILYWHMYCZCFPWZFQMVQMGBUBEABYCD");

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
    msg.setTimeStamp(0.2611557087468036);
    msg.setSource(8944U);
    msg.setSourceEntity(127U);
    msg.setDestination(53919U);
    msg.setDestinationEntity(195U);
    msg.formation_name.assign("XDXMLIIFIJJUOOZTTAGUNKLFHWHZGZGFJHBHULJTNEWXIGOEXVLDLQOXWQJKMMYRNOIVSCXCBYRLAEPBSXUBVWZFUGXRCPRTGAYRDHNHCIIFOSFNNWPFVCNQUCKQIKXURKVHMEETZOUNCASMJCQQBRLKPZKYMCJKYQAPOUYIMQDYQHJATOMEDWNVXATPFSNHHDFOBMWYQTZ");
    msg.type = 40U;
    msg.op = 185U;
    msg.group_name.assign("FOBGUDPDLXWRGCWTJAZQWFKNKCBJRBNUXAUAJSUTGD");
    msg.plan_id.assign("IMBXPZRMGFAJANONIQZKHZIOHNNBQTMFMDBIQKEOYYQVWDVFXEGJQYDYKDHUTOPCNKPIOHMXVSCRLCUYMRAVNXWDMONYFYGICQLSGRKGFRICAPBWBEEHSTUKYQMWUINSRVGTYHBOGWRPYZFVUKXRLWTSAAKJZPGTDWQFKUUDUSJNASJ");
    msg.description.assign("LLJSJPUAXJLKZKJHSVEFKQDCLGQUAESPHHDKMMVMQREEDHMCVWXCWFMNRPCEFTTOWRZNHZBYRYJIDOARITWXPIBDIPMBULJQWOGVENYVQKHMMAUTLRNTNOFZUCYTKASXDADYGFYIZKZHTTJZMSXXBGORBPOVKILRBXYQTUVWUNPWGABNRKXCFFPEC");
    msg.reference_frame = 31U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 30836U;
    tmp_msg_0.off_x = 0.3847124332520059;
    tmp_msg_0.off_y = 0.11063870691535616;
    tmp_msg_0.off_z = 0.32517602400862144;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8659351884340702;
    msg.leader_speed_min = 0.36178475790559483;
    msg.leader_speed_max = 0.8594040233738286;
    msg.leader_alt_min = 0.7852372045296001;
    msg.leader_alt_max = 0.7360468037242826;
    msg.pos_sim_err_lim = 0.5129926538977092;
    msg.pos_sim_err_wrn = 0.9451242320407808;
    msg.pos_sim_err_timeout = 28383U;
    msg.converg_max = 0.37130951284837865;
    msg.converg_timeout = 13169U;
    msg.comms_timeout = 41982U;
    msg.turb_lim = 0.14459383075115229;
    msg.custom.assign("SGSHCKELAWFZRIPTPSUUDTPYADIYHYJGUOLGWJYWZDDMNFBRDUKJVQPMDZFTZMUPMRRZIFNGHHNMVIAFMEEAHKBOCSRCQILVHYETIDMCWKERBPZEYSKNORLCXJXQIWOKXTAIJHKQN");

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
    msg.setTimeStamp(0.676659807253631);
    msg.setSource(5340U);
    msg.setSourceEntity(221U);
    msg.setDestination(48996U);
    msg.setDestinationEntity(205U);
    msg.formation_name.assign("IYDGTGNUMVAMWJRLJJFTXWGONIYMIWQIPXLYHSHWHZAOTWOLFQEPOAKLUQLDBEJEJEWHNHRDMLQMQYPBWCXVBDECVRZFUUCRXMDNUFJFIGEAOWLKKPSONHEEDBLYXNMQKPJDQUVFZUKGNGNSOBZXIIVZZRRTSAMPRCBSGZRGFRKTDNCATCXGPIBB");
    msg.type = 49U;
    msg.op = 22U;
    msg.group_name.assign("MLLOZBKTFBQAMPVKJXXZWQXUHTBNEIAKENDDIGMVZNSNUXUZFSPUPSJZWHIWBPIKSHPVRGIHLNZKSRFEGEDRLRNLPTJSCWMCDEOODDWQQCPOGZGCARCPSKFGNJVDCMUYLFUCLHVRWAKFGMOANTCGLPFXYHDLYSQKHGVBAWIUOTDSDMWRTYBQNZMTHOBXFZROJQQSBJWQWCXVENBYIQAXJIKIHZYKRVFBICL");
    msg.plan_id.assign("OAMSAIQNYMZCSHAVLGUBYITEQDWIYUUJBPXKKEMLZGENRRHYKRXLRZQMRKDXJTKHCRSSZFIFLFAPFWSDPDQXUFRGEQINFTFXWPWNMXOHHSPRJCDUVALDSOGRQGDWOCNGBMWTBQMNTLCZXLSWFTNZUMXYTMHVWIAANUYREWBKBIJDZHKVVQCUYIJXJFPQYGHQHKO");
    msg.description.assign("FTCLWNXICSXDVSIULLUJYLKRSFSZDLIXOTPHUZHFTWAOQSPRQNDAYEEZNHCZUXRKDLMEMIVKMFNFUWKXARUOHDIKXPXEJSTBKRIQVJPNTOBMTOPHGHJAARESFGGLZRXQGAVAYAJOMQONEERJMIJYPWYOBUBVSCWNVBRXERFBYSBHGNBMPMOCPGFQDZMIVCBZKVQUWDUSKCFQTVWJDBTCLLYWDZYJWPHUKTCHMCZ");
    msg.reference_frame = 212U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27613U;
    tmp_msg_0.off_x = 0.7742111462492427;
    tmp_msg_0.off_y = 0.24430326908228361;
    tmp_msg_0.off_z = 0.160272674051964;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.058745495087970445;
    msg.leader_speed_min = 0.9401775494970583;
    msg.leader_speed_max = 0.30631304910450374;
    msg.leader_alt_min = 0.7293039324500356;
    msg.leader_alt_max = 0.3543473242358983;
    msg.pos_sim_err_lim = 0.3100660357214021;
    msg.pos_sim_err_wrn = 0.7661261588198536;
    msg.pos_sim_err_timeout = 15201U;
    msg.converg_max = 0.3329156810133318;
    msg.converg_timeout = 35989U;
    msg.comms_timeout = 58750U;
    msg.turb_lim = 0.918218145709952;
    msg.custom.assign("HBZGZVSROZOMIKQTTCOFSVLCJGIKQKREJOORMBWNMQPSYCAISEUXUPODNENRAYRVUJCEEKDHLWAZHLHBLYOASQXTEPYUFWMYOXRWAGFQXUQNJFWIZEANDFVAEKKLDRHFTCPBDCPPNMHYZUXGBXGEUTVMVHIQTGYYSESVVWJDJATMXDOODKNUDLTCRKMXNYMUNDCBRITWHKJLWSFAPQQJZI");

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
    msg.setTimeStamp(0.4989872265526688);
    msg.setSource(7142U);
    msg.setSourceEntity(157U);
    msg.setDestination(15559U);
    msg.setDestinationEntity(138U);
    msg.timeout = 9263U;
    msg.lat = 0.12089934392468982;
    msg.lon = 0.7559051101891713;
    msg.z = 0.8044086123159649;
    msg.z_units = 50U;
    msg.speed = 0.34783534218879686;
    msg.speed_units = 244U;
    msg.custom.assign("HXYJEKWBVQUWBFTWKXXZKMTORYNBBGJLNIUOVBOQCQZPAMRPPALULRM");

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
    msg.setTimeStamp(0.9607149550052895);
    msg.setSource(41178U);
    msg.setSourceEntity(190U);
    msg.setDestination(25346U);
    msg.setDestinationEntity(189U);
    msg.timeout = 28707U;
    msg.lat = 0.3492833668439642;
    msg.lon = 0.4982340042621046;
    msg.z = 0.004158692910060435;
    msg.z_units = 122U;
    msg.speed = 0.5719148909057264;
    msg.speed_units = 4U;
    msg.custom.assign("DQYLUTGNUWKDNFQOUTNIKFGOOFCNBWBVVPKYU");

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
    msg.setTimeStamp(0.6701187034842772);
    msg.setSource(27848U);
    msg.setSourceEntity(239U);
    msg.setDestination(52844U);
    msg.setDestinationEntity(68U);
    msg.timeout = 36634U;
    msg.lat = 0.07092988316764715;
    msg.lon = 0.6809284627876189;
    msg.z = 0.1741385875214737;
    msg.z_units = 239U;
    msg.speed = 0.06638429417812042;
    msg.speed_units = 138U;
    msg.custom.assign("EUSRHQYTQLUQIWGFBVCFIXMEEBKKYNCVACPPNOVBOXLFJEEFIXZOPYYXBOLVRETPNEZCTVPTSYGSNCNRFGURMS");

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
    msg.setTimeStamp(0.7816981194270914);
    msg.setSource(9357U);
    msg.setSourceEntity(28U);
    msg.setDestination(57905U);
    msg.setDestinationEntity(38U);
    msg.timeout = 25659U;
    msg.lat = 0.43640708860651845;
    msg.lon = 0.35600225705285815;
    msg.z = 0.7126186752416643;
    msg.z_units = 238U;
    msg.speed = 0.43843381303510354;
    msg.speed_units = 123U;
    msg.custom.assign("XENVJAJQGXETBEMLHHDTUEIIKQNKUDDYXGIRZEVUTUEYRLMZBLHFCDNQDWNQISMNTKYPHMDYLQLZRLWBWRAMLHACJUZUEFXBCBNPTJASYMWDWOQSJBMECXIOWTCCSOHSBVHPPKHFUSZYGRQRVFDASYNUDLPKTUFJSLIJGSAFQBWVEGLXBFZEWKSKJTVRGTDVOAUIQKY");

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
    msg.setTimeStamp(0.45067051924953316);
    msg.setSource(48745U);
    msg.setSourceEntity(166U);
    msg.setDestination(58417U);
    msg.setDestinationEntity(14U);
    msg.timeout = 44524U;
    msg.lat = 0.07367066800814104;
    msg.lon = 0.5971142568487946;
    msg.z = 0.8265017963857664;
    msg.z_units = 117U;
    msg.speed = 0.9103943878891527;
    msg.speed_units = 162U;
    msg.custom.assign("HGBCCTOTBIKFNPOMOMUFZPDKC");

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
    msg.setTimeStamp(0.1363532009002536);
    msg.setSource(16406U);
    msg.setSourceEntity(70U);
    msg.setDestination(12065U);
    msg.setDestinationEntity(191U);
    msg.timeout = 11502U;
    msg.lat = 0.6974875536342853;
    msg.lon = 0.7976718951160793;
    msg.z = 0.8395006618973827;
    msg.z_units = 47U;
    msg.speed = 0.5543803050941714;
    msg.speed_units = 27U;
    msg.custom.assign("TOVZBVBUQSVCUVWHGTDDZCAKIFSHRXEARNLNVGHLIEYOYRKFDHSAMTCZOVYEDWLXPGVONINNLAKULUAVKCLGBHCEGRTJAQBLOHNWRMBRBRKDMJAPUFWSOPTUXQZYSMXJINWBGSTXKVMZXWPZIJJHGAPETRPMKOCSFCTDJYODYHSRYYIPSJFGFWWMLWPIDQKJBNEUIFZBHUZKNCESXGQUIYADOOEXMNMTIQXZBCXLGHYDFFJQUFCWZJQQRQTPA");

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
    msg.setTimeStamp(0.1818780457207979);
    msg.setSource(44984U);
    msg.setSourceEntity(174U);
    msg.setDestination(4773U);
    msg.setDestinationEntity(74U);
    msg.arrival_time = 0.03381182092314783;
    msg.lat = 0.6197103837406029;
    msg.lon = 0.6984479073630679;
    msg.z = 0.35035032092008767;
    msg.z_units = 92U;
    msg.travel_z = 0.11382534808970413;
    msg.travel_z_units = 207U;
    msg.delayed = 58U;

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
    msg.setTimeStamp(0.09507229606950174);
    msg.setSource(24595U);
    msg.setSourceEntity(29U);
    msg.setDestination(37447U);
    msg.setDestinationEntity(173U);
    msg.arrival_time = 0.8394065895762278;
    msg.lat = 0.6893991416454035;
    msg.lon = 0.08109997485196785;
    msg.z = 0.9563883166593201;
    msg.z_units = 106U;
    msg.travel_z = 0.5079322983007247;
    msg.travel_z_units = 29U;
    msg.delayed = 219U;

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
    msg.setTimeStamp(0.7231048921847055);
    msg.setSource(40946U);
    msg.setSourceEntity(64U);
    msg.setDestination(57383U);
    msg.setDestinationEntity(76U);
    msg.arrival_time = 0.8161622043312874;
    msg.lat = 0.4710101443790494;
    msg.lon = 0.49708684887820864;
    msg.z = 0.22173081031187514;
    msg.z_units = 18U;
    msg.travel_z = 0.30250719930183556;
    msg.travel_z_units = 158U;
    msg.delayed = 78U;

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
    msg.setTimeStamp(0.448971969357123);
    msg.setSource(58491U);
    msg.setSourceEntity(216U);
    msg.setDestination(6717U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.7208857724620421;
    msg.lon = 0.8687471861356119;
    msg.z = 0.5582316540437271;
    msg.z_units = 242U;
    msg.speed = 0.26125586939372003;
    msg.speed_units = 61U;
    msg.bearing = 0.04910946184230125;
    msg.cross_angle = 0.07904949873423361;
    msg.width = 0.03200524277794592;
    msg.length = 0.10705321608218732;
    msg.coff = 155U;
    msg.angaperture = 0.6263675523195773;
    msg.range = 19563U;
    msg.overlap = 15U;
    msg.flags = 171U;
    msg.custom.assign("HOZPFANUAGDIYXXHPWVJQSGGRXAQEIRAWLVEOSQIUOTODTHZFEZXHVESHBFVLHXOLCTUKQLQYRYMTGXJCIWTSDNETCWHNCRQPBGYJZSINRZLWJALFVZHRK");

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
    msg.setTimeStamp(0.12364512739450262);
    msg.setSource(19763U);
    msg.setSourceEntity(71U);
    msg.setDestination(30759U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.64790366262927;
    msg.lon = 0.052148512841480366;
    msg.z = 0.8162651721194766;
    msg.z_units = 19U;
    msg.speed = 0.7408660093240264;
    msg.speed_units = 195U;
    msg.bearing = 0.008514962984074392;
    msg.cross_angle = 0.22204463566488697;
    msg.width = 0.08146014358811726;
    msg.length = 0.3294382485746232;
    msg.coff = 132U;
    msg.angaperture = 0.3646868504089539;
    msg.range = 36268U;
    msg.overlap = 127U;
    msg.flags = 130U;
    msg.custom.assign("YHWVCCBUUNSLSSYVKRPMDEFJDFOYICGJDFMTKBHWMZAMGZNBEZBWFJNPEDFAIRSTQBWXJQCCPZILIMNHQYFFTOPLQHGBBTLBXXPTEDXRZQHVZJEWYURFUHAXHHNJDOSDAKQ");

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
    msg.setTimeStamp(0.17858035229772118);
    msg.setSource(11658U);
    msg.setSourceEntity(87U);
    msg.setDestination(22014U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.014689870014554685;
    msg.lon = 0.47452910529910375;
    msg.z = 0.27824290229697024;
    msg.z_units = 24U;
    msg.speed = 0.27914327026969155;
    msg.speed_units = 177U;
    msg.bearing = 0.853820266278943;
    msg.cross_angle = 0.8118685705624458;
    msg.width = 0.2607866931085022;
    msg.length = 0.770648250581197;
    msg.coff = 158U;
    msg.angaperture = 0.7434431631620968;
    msg.range = 56586U;
    msg.overlap = 140U;
    msg.flags = 9U;
    msg.custom.assign("ZXQBDOPYSEYJAESVSNDDFYJLVDQXCYKGTCZBSUWNIWRGYBJABDTPPTRIVAZVLIXCMUBUPHQJFGIHEEAHTQVRULJVFVAUHPRLMSFUUTHDOLIMRZSVMDMLMAWNGYNQEPLSZRZOJKHJJENCAVWGCBOKOCKORCTOMKFVHWMHQKEGDBNIPKHJHFSWQUBUCAABGTOGBJXTSKRPUKA");

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
    msg.setTimeStamp(0.14428850008593386);
    msg.setSource(32904U);
    msg.setSourceEntity(9U);
    msg.setDestination(44323U);
    msg.setDestinationEntity(222U);
    msg.timeout = 31068U;
    msg.lat = 0.4536279253908728;
    msg.lon = 0.6570509233402568;
    msg.z = 0.7196751785078824;
    msg.z_units = 73U;
    msg.speed = 0.1891616728709843;
    msg.speed_units = 146U;
    msg.syringe0 = 202U;
    msg.syringe1 = 138U;
    msg.syringe2 = 244U;
    msg.custom.assign("EEJFBCFJILVJZKVOHZUEXFDUNGLTWUBVHZIWJOOBXCPPBJOSTAOUFVFLIARHDSQKGTGJFEZLWTUSNAXTRKALQFPOXRRCHKYGMINYZXAOJDJUADJHGMMTFWQQYNHCIKCBWZSRYIKKXISDBIMPDDNHPNFMHUWEGUSYVXESPVQYMQMYSCYTGREGAWTIQ");

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
    msg.setTimeStamp(0.6716088336819415);
    msg.setSource(54436U);
    msg.setSourceEntity(224U);
    msg.setDestination(60892U);
    msg.setDestinationEntity(24U);
    msg.timeout = 44567U;
    msg.lat = 0.03883407575922759;
    msg.lon = 0.6658908947028425;
    msg.z = 0.7913824295654036;
    msg.z_units = 205U;
    msg.speed = 0.603528690607053;
    msg.speed_units = 188U;
    msg.syringe0 = 155U;
    msg.syringe1 = 156U;
    msg.syringe2 = 207U;
    msg.custom.assign("SUDKOAYRGJLILZLBWEMFFERTCNEZHQJLVKPOJNUVFZGEAQVCEQHNUEODLPPLVOUAEYMPOIYHZJLKPRABUFQGYPNJQTYIYSVKXBRDPDKUR");

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
    msg.setTimeStamp(0.47254439411941607);
    msg.setSource(32268U);
    msg.setSourceEntity(8U);
    msg.setDestination(28103U);
    msg.setDestinationEntity(73U);
    msg.timeout = 29059U;
    msg.lat = 0.3341580486710092;
    msg.lon = 0.49237029413383937;
    msg.z = 0.801838979615021;
    msg.z_units = 250U;
    msg.speed = 0.12127070503309201;
    msg.speed_units = 22U;
    msg.syringe0 = 23U;
    msg.syringe1 = 236U;
    msg.syringe2 = 39U;
    msg.custom.assign("NXFUCOROYBRFTLOVUXWSPRYTTLHMAKQZPNNWSLKDYVRYGBXSMZNQAYKFXPTHLEKGGBQMXDNYXABLTFVAMICKAIRXTFOCSHWTBPLVZVCXIDPJZLCZEKGKGHVUONCBNERZWQHCXEMAJPYBSOGCINL");

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
    msg.setTimeStamp(0.7101334836883958);
    msg.setSource(2809U);
    msg.setSourceEntity(180U);
    msg.setDestination(32145U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.32869245201386565);
    msg.setSource(19642U);
    msg.setSourceEntity(243U);
    msg.setDestination(35255U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.9464688077981699);
    msg.setSource(40613U);
    msg.setSourceEntity(154U);
    msg.setDestination(30852U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.36472397482373486);
    msg.setSource(36547U);
    msg.setSourceEntity(20U);
    msg.setDestination(32161U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.5252286519428687;
    msg.lon = 0.044911969265002405;
    msg.z = 0.18186470783071396;
    msg.z_units = 196U;
    msg.speed = 0.5441084567802233;
    msg.speed_units = 15U;
    msg.takeoff_pitch = 0.07152974072860818;
    msg.custom.assign("XNJXDGIAXGIQHQNHIBNRPACVZHJRXDOWJAHQWOFZOBUQZOJYZIMAGNCLBGVXBPYOLNWCHDPLFUETBKRYSMMSLWIVTAPCCREVCXVCVNIXWPTBPRGPMRKJGJMRCALYNKXUEJQJFMRUAEBZTMVQFDFOOHGAOPVEFBLIVNHQBIUYZFTSQXJGUSWHAMXIDNLRMYSPKSSDKJMWUBSTQYDWWGYFYUZNUKEDLFGFWZLEVHEKSITH");

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
    msg.setTimeStamp(0.7907233351248932);
    msg.setSource(27920U);
    msg.setSourceEntity(148U);
    msg.setDestination(63570U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.32541682994673826;
    msg.lon = 0.9945970182401971;
    msg.z = 0.8071302615235283;
    msg.z_units = 53U;
    msg.speed = 0.02024183085332365;
    msg.speed_units = 62U;
    msg.takeoff_pitch = 0.6403103174414841;
    msg.custom.assign("GGPOMITCARSAMUANEGTCTIFBQWQMBEUVFYNONDZEHZADKPLRRVSQSGZTOGWVJDOQVAHCYJNZQYKSURBKIIUERPJFGFUWBEAWMRCHMYBJTLXTONTWNFCKDBILHYIYMSUVWMGSQILRDEECDQQIHUVNUKTXZCKUXHLSLMDWLPJLOVKPJTSYJSRXZXQOCBOACWFMSPTVWKFAQLYIBFGBZZLBJHPEJVNRWNDFIVCXEGYZODXYJAXZKAHOURPEFX");

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
    msg.setTimeStamp(0.6704156347324502);
    msg.setSource(33471U);
    msg.setSourceEntity(230U);
    msg.setDestination(22618U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.15949125655982532;
    msg.lon = 0.6963565742821888;
    msg.z = 0.6244919465516215;
    msg.z_units = 143U;
    msg.speed = 0.1770028415935705;
    msg.speed_units = 177U;
    msg.takeoff_pitch = 0.5454267767714509;
    msg.custom.assign("WKQPLUEDSFVAQTYERSZYNJLBAOOOPYPQXUPREHLMYUXTEJZVEERXZLRUNNHSFQTMUMQSVGHBIVBCWRFRHYDLVQEZFCHTGCYEDBTJTMOUMPDYVVIXGUCUJTSPHTFVRPROWSMEWJQBJANDDZAKQGPBOASOWJLWDFIYXOGSINCIBDLRXMNMAKTPKDSUKWKWKNXGHNXZJUKLFIXFRFCOKCQTFBYHWYWQXEZHJMSVGDGIBAZZPAGVCOBZAIMCCJNHLA");

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
    msg.setTimeStamp(0.7742286439186299);
    msg.setSource(44293U);
    msg.setSourceEntity(219U);
    msg.setDestination(60832U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.7797840063165236;
    msg.lon = 0.4705275989302078;
    msg.z = 0.6031496467783365;
    msg.z_units = 22U;
    msg.speed = 0.5559859317583574;
    msg.speed_units = 250U;
    msg.abort_z = 0.032297639410381884;
    msg.bearing = 0.37660063911530406;
    msg.glide_slope = 33U;
    msg.glide_slope_alt = 0.8979037712180163;
    msg.custom.assign("ILYUPYTAWMIMKUYDOJZXGZDXEQCPSXCNOGRKAWBWDCTNUJMPBJEQCQVAWSGQNIGHEXQQNODESKNUUCRBSOPLCSZIVWAPXSFQLLFJHPNFPEHGXIDJGEO");

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
    msg.setTimeStamp(0.9394513625389691);
    msg.setSource(26809U);
    msg.setSourceEntity(248U);
    msg.setDestination(7688U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.651050981395824;
    msg.lon = 0.35832894310020114;
    msg.z = 0.14259350569403217;
    msg.z_units = 163U;
    msg.speed = 0.41928315698760865;
    msg.speed_units = 112U;
    msg.abort_z = 0.705121104263351;
    msg.bearing = 0.02094553266360555;
    msg.glide_slope = 223U;
    msg.glide_slope_alt = 0.9813571316060985;
    msg.custom.assign("CUXHXONNILUFGJMOZBJHTGYTAPPBLXGZPFAHXUQAMTIUVZIZAXSWMMWFNUSBQCDOFSLCEWECRUBARRJYYQVPPKKTYDOJFFEWXENXOKRBGLMECKUQCHQZMROFLRSFUNLPRRUGRDINMAIXETKTHQKANVVCQBFWLQLLWYZGJBPBBVYEOKCMNTOPYIHSHUMJWHIECYDKTSDGJENNZVCKVIGTGWAFRZBYJSDJHSWVQAZZLIVTASYDKXPEM");

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
    msg.setTimeStamp(0.31370050175841246);
    msg.setSource(2347U);
    msg.setSourceEntity(40U);
    msg.setDestination(36391U);
    msg.setDestinationEntity(119U);
    msg.lat = 0.374176260347455;
    msg.lon = 0.2362373959137417;
    msg.z = 0.5936219275219698;
    msg.z_units = 118U;
    msg.speed = 0.6706970984905865;
    msg.speed_units = 57U;
    msg.abort_z = 0.8060217277317535;
    msg.bearing = 0.7360257395105365;
    msg.glide_slope = 44U;
    msg.glide_slope_alt = 0.19746876092061794;
    msg.custom.assign("NKHKHZMSZDZHHVCMRDGQESJXIWNAOVMVTZABDQACHNQYXKMNYVGCHODCIVBTBRBQSWCJNQMOXEGOPFUDEIFQFZORUKBXVPUJGUJPTUFADTFPHIVXRTXOMPRBYCHYSYVKEPUVZGEJANLUJIWLIQGJ");

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
    msg.setTimeStamp(0.48130295034774473);
    msg.setSource(62210U);
    msg.setSourceEntity(170U);
    msg.setDestination(47294U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.6206363355537305;
    msg.lon = 0.21923813440215711;
    msg.speed = 0.306790477723351;
    msg.speed_units = 184U;
    msg.limits = 97U;
    msg.max_depth = 0.1566118745942887;
    msg.min_alt = 0.44055891988728535;
    msg.time_limit = 0.37336168851859;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.43568069688459876;
    tmp_msg_0.lon = 0.138013515757762;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("FRLZGASXSFQOAGKYKCDACBGHOPQQYRHEGZNNUPRBDQSKPRIMSHLBPEUPFWKKJJAIPRILVGLRPCKFTJDUNLZUTNMBINYBMUOYDYHBTWNITLSOJXYWWSFDZJXKABRTXZIDRIGPSQYFAMVLUITXJLFXGOWXZQHZDKQEMZGAIFOKSJOPSVHEZDTWHABCTHLXNSJFCCNMONTWXVWYRHYVEKERACUTZ");
    msg.custom.assign("FOXQNWKBGIMZQJLBLKDSYLGKBWRWSTQRKKISPD");

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
    msg.setTimeStamp(0.7568391635064718);
    msg.setSource(32207U);
    msg.setSourceEntity(12U);
    msg.setDestination(49654U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.5522677234390315;
    msg.lon = 0.5434417528422875;
    msg.speed = 0.47874657967989487;
    msg.speed_units = 249U;
    msg.limits = 177U;
    msg.max_depth = 0.9968890778652478;
    msg.min_alt = 0.07413528116416235;
    msg.time_limit = 0.010244896630597355;
    msg.controller.assign("CPQEHILKEMDCFNCXIE");
    msg.custom.assign("RFBNVKGFSIAKSQBPQCDGGWMLEDOPNQUIRCOTHIOPQUMZDISGYKSMUEKFHVKCVECQORCJQLNJLBPHAULUFLWWGBVVHXKRERYPJUQHPFIFMFAUTLJASXRABQQYIVRSEZOCTYAZKWOXDTWHCVXXECNTPEQYZLGXMMTZFYMASGWHAZOSXDITGJJU");

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
    msg.setTimeStamp(0.5484672729753081);
    msg.setSource(15181U);
    msg.setSourceEntity(126U);
    msg.setDestination(17170U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.18589031123331257;
    msg.lon = 0.7368738349384681;
    msg.speed = 0.39411963106419456;
    msg.speed_units = 58U;
    msg.limits = 198U;
    msg.max_depth = 0.8885679901871644;
    msg.min_alt = 0.5710670644790508;
    msg.time_limit = 0.09587108976428527;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8317298772272261;
    tmp_msg_0.lon = 0.6784912543325197;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("EJMMQGQBBNQGUATYXIYRRIEFVXMSRMVKLTWMITQWDYLEJNPXCYDWMDSSTZCIOKLHMTJPOYGWGPMDKJCJPZPCPCRRZAONKJWPGYZZCUXBYBJCHEVHJSUYSZQFFHVEN");
    msg.custom.assign("VYCPYKSADDEGMLQELOBCUMSRDPNGAIWTCRTCUAEYBQVEYRBUBKKQGWKXERUMWXVJZAZSTQFBILXSOPYYXLQOQOAZNZWVRKNOQHDFJIHITKNRRCHATDTKJOZAPIZDBTSBWFIVNTXLWGXUEHJJNNBUDKXUOWTDFCJZZFEQIYXVCLTUWCZEHVYPRSJFIPLEHLNPMODXMJV");

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
    msg.setTimeStamp(0.38569366721851284);
    msg.setSource(27039U);
    msg.setSourceEntity(58U);
    msg.setDestination(38933U);
    msg.setDestinationEntity(198U);
    msg.target.assign("UKZJSLLHDMGAOBGTAROXBPJONWCRFCFJNZPOXXOUHZRBIQWLSBQWRG");
    msg.max_speed = 0.4421222132000864;
    msg.speed_units = 49U;
    msg.lat = 0.43710526370634983;
    msg.lon = 0.9474009660825076;
    msg.z = 0.30053195079798534;
    msg.z_units = 0U;
    msg.custom.assign("TUHOJAETPQJGKSMESLTGGLCAKAFBIPUNEDQHHWYSMWYROAKDVBIOVBZORZRSSFWNUVLXPJLRIDVWPXXUBESOGXGLCEIFFTZJNCYNIBJYVLRQEWJTMYGMIXVHVTLDRQLBWBWPMMCIKQXYJBMJVCFDNXTMXOWNSDJUOHSBYLNFNFPWKAKGRODDHAIEGDQZTPMCVQGZNBRRQMTCLCEPOFKAAHRCHUXDHFUAJYASXQKTPOUWZEVNGIZZPZ");

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
    msg.setTimeStamp(0.923176632689753);
    msg.setSource(62215U);
    msg.setSourceEntity(29U);
    msg.setDestination(48863U);
    msg.setDestinationEntity(217U);
    msg.target.assign("CSIJQEREHRLSGNOUXXFOOPLWTQPJRHUIUXCZRWBLXENZJYQAMGKOQEBRMUWCBEPFKQIIRBJLCOYYRENVKPGMTMKLFASJRDHADHDKHWMAQVFVZOAIBNISCZQFUOSNJFQGTKGQDPXXZXTYHDYTWIKUCAVYNFWMCMPAZWJWECPCDZMRAZFTVTVJULFHDYQBIGEUSNTSSIEIVYFXVZLBDSPVPGKZKBDYDCYANWBNUXNLOKGWOJEUXGVAJ");
    msg.max_speed = 0.6577562778044701;
    msg.speed_units = 160U;
    msg.lat = 0.4563550742071226;
    msg.lon = 0.3295312090483734;
    msg.z = 0.5455957751607333;
    msg.z_units = 248U;
    msg.custom.assign("KBUJVPZFIWZHIFOAKWVRWYWODBLSANISJGBEBPMNISCPDBGXTCGPGMOXPWKSXBJITKBXYQDYTNKBMLUEHNZLFQFMDHZOFKZATTAYARQWEVXUCQFHZVRVUKTMCLONVIDXJMWCPADGUGLFMDUOFYQJZSXPPUOEWKFEMKTDCMRBVAHYSZHKJRLVWRZXJTYNWGNHRUTHIIAQPQJSYQIDRE");

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
    msg.setTimeStamp(0.37652312725302495);
    msg.setSource(16070U);
    msg.setSourceEntity(177U);
    msg.setDestination(53544U);
    msg.setDestinationEntity(63U);
    msg.target.assign("VUQDAZJIDILUBQMWWKOKLZEBJJMYZYHVPXANVYFNKGUXPCBHCGKQALVHMTITGDZWZJSRHNO");
    msg.max_speed = 0.04085311027354255;
    msg.speed_units = 141U;
    msg.lat = 0.6266042017420567;
    msg.lon = 0.12969929789257317;
    msg.z = 0.9406876454202265;
    msg.z_units = 206U;
    msg.custom.assign("VGEOFKPSWDTLHOVBYVDGZWDUKZDNTHRDFGIQCKNPCVIGUPEFNZYEJRRLORNPCVFYHVBVMZEOTEUFJTOWCVOROTAQSGVBOGXABBSLKCHU");

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
    msg.setTimeStamp(0.9502260939749663);
    msg.setSource(52759U);
    msg.setSourceEntity(43U);
    msg.setDestination(23198U);
    msg.setDestinationEntity(155U);
    msg.timeout = 13829U;
    msg.lat = 0.7786057152623845;
    msg.lon = 0.8444366690395929;
    msg.speed = 0.32302046183316035;
    msg.speed_units = 160U;
    msg.custom.assign("ORCUOKPCITRMQALIJJVHCCUJQPDQJXEQLNCINVZDFPSLIDVQQMOTKUHAQWUUGLLZGFPYRYOAZQQUMCXBAFRIGFEJGMKOYETUHNGIIGSNEXRXMKVHWANNYXGOVKJWXMTYHDSZAAKBBPWRLNNRSFSYGYCPYXXTWELDSFOKUTQUEWRRATEVGHFUGZMCAJWJBHPYD");

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
    msg.setTimeStamp(0.8743670453114086);
    msg.setSource(47936U);
    msg.setSourceEntity(198U);
    msg.setDestination(61795U);
    msg.setDestinationEntity(46U);
    msg.timeout = 62516U;
    msg.lat = 0.44214846369709115;
    msg.lon = 0.4072905406495446;
    msg.speed = 0.9485353491194433;
    msg.speed_units = 197U;
    msg.custom.assign("YVAIDVGRSAOHTHX");

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
    msg.setTimeStamp(0.004740408179108591);
    msg.setSource(2362U);
    msg.setSourceEntity(165U);
    msg.setDestination(44909U);
    msg.setDestinationEntity(111U);
    msg.timeout = 47219U;
    msg.lat = 0.7986812166751258;
    msg.lon = 0.5340060947772015;
    msg.speed = 0.17659137527126223;
    msg.speed_units = 41U;
    msg.custom.assign("HOLPCBYBLITBNUTHSAIXARSKXZNIXADEJAKCHYKWGTYSFZWUKDKTYSNROEVIGCPOSZSFURTEVFDYAPJOEGELWBXDJKJIILRLTHXWMNVMQCZHDAGNPECSCUQDZGGHIFUWTYUUPYSAKZJBDWVNQYEEEVPAFQPWCXCQZYXGBQHUNHAGBCRZDMOFTPKGLOZYJZJRFVVKKMXMTNJONSBJDOQMJMWLTIPMUVQWVMNAXLXLEDRQFMISRFRBHBFGPORQVU");

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
    msg.setTimeStamp(0.35176785237471564);
    msg.setSource(39626U);
    msg.setSourceEntity(14U);
    msg.setDestination(23799U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.7363853807318944;
    msg.lon = 0.4782668684078777;
    msg.z = 0.2958924804709031;
    msg.z_units = 207U;
    msg.radius = 0.18763056820660007;
    msg.duration = 48238U;
    msg.speed = 0.989626304812623;
    msg.speed_units = 155U;
    msg.popup_period = 54105U;
    msg.popup_duration = 11084U;
    msg.flags = 39U;
    msg.custom.assign("HRRJLZPMELIMMTMIJVLBUCCEFZNAHRKOSNTKZIXOBFHFCZURTBLKQPQNRAAYVRTZKWOCOWWPVVRDPGEQKGWJDXQHJUSGBNAKEETVQULLJOSBWIQWSLSYWHTSLHGXASCZNGFCEQRAJXITFWCYWXAUKIPYCOEZBHIZNAGHSPBERGLSYMNENXPQZWLPMGODSOFFZDRVKMOVUFJID");

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
    msg.setTimeStamp(0.06976328019330791);
    msg.setSource(6543U);
    msg.setSourceEntity(100U);
    msg.setDestination(33286U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.16778817598739648;
    msg.lon = 0.6314110793630635;
    msg.z = 0.5184391165892618;
    msg.z_units = 54U;
    msg.radius = 0.014713782853676971;
    msg.duration = 50598U;
    msg.speed = 0.5043998374426958;
    msg.speed_units = 130U;
    msg.popup_period = 27061U;
    msg.popup_duration = 55053U;
    msg.flags = 88U;
    msg.custom.assign("FSGHDHXLJUCOKJNGUNEMUGEYDLGVDMFBVZAXQRICYFWYCMMQLMTGRDMLBZXKMZSRKXI");

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
    msg.setTimeStamp(0.261630146686593);
    msg.setSource(36628U);
    msg.setSourceEntity(153U);
    msg.setDestination(23947U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.9075664365872548;
    msg.lon = 0.7403372000141385;
    msg.z = 0.6840660841125161;
    msg.z_units = 235U;
    msg.radius = 0.3336840949159148;
    msg.duration = 61134U;
    msg.speed = 0.11733651343291052;
    msg.speed_units = 87U;
    msg.popup_period = 62439U;
    msg.popup_duration = 15722U;
    msg.flags = 15U;
    msg.custom.assign("NMWIHVTMLQQKVONRBUNBIMPYDQMOSYKQSJMHLBIOMDNRVAQAZBCACVKIYWUQEIJTKOXETLHZYMUIXBWSQEOSHYDVVUXZGTUOFAZCMWBLZTAFFPZLDHGACNSPSWQEYNFFIVWPZHURKJRZOEAPRMSYBTCPXXWRLG");

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
    msg.setTimeStamp(0.10804165590152737);
    msg.setSource(24713U);
    msg.setSourceEntity(194U);
    msg.setDestination(51287U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.7604672807512616);
    msg.setSource(17956U);
    msg.setSourceEntity(102U);
    msg.setDestination(14351U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.5461339332581093);
    msg.setSource(24283U);
    msg.setSourceEntity(249U);
    msg.setDestination(62598U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.7088125472956818);
    msg.setSource(64828U);
    msg.setSourceEntity(204U);
    msg.setDestination(36332U);
    msg.setDestinationEntity(179U);
    msg.timeout = 35464U;
    msg.lat = 0.9382805964889916;
    msg.lon = 0.8756349114589492;
    msg.z = 0.6199698689629565;
    msg.z_units = 46U;
    msg.speed = 0.02435267505615102;
    msg.speed_units = 154U;
    msg.bearing = 0.24896479009295303;
    msg.width = 0.947710419853643;
    msg.direction = 44U;
    msg.custom.assign("FKSONZBGRZETUWKHTCFUIEXWLDADBJLKBDLYDYAJJQIIIYNXVEQSMPSZVORHLXSALFQLYZYHBLWFVWMDVBERMAZQBSWECUYUVOIPNJPDCWPTPEXGTJUGUOASHZMFNZOTWANPTCWF");

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
    msg.setTimeStamp(0.17077701899470255);
    msg.setSource(16792U);
    msg.setSourceEntity(128U);
    msg.setDestination(20610U);
    msg.setDestinationEntity(34U);
    msg.timeout = 8138U;
    msg.lat = 0.8786783711006093;
    msg.lon = 0.4171832359374209;
    msg.z = 0.8917760117900545;
    msg.z_units = 8U;
    msg.speed = 0.33335249568552194;
    msg.speed_units = 8U;
    msg.bearing = 0.4445309259417073;
    msg.width = 0.4729187102583188;
    msg.direction = 7U;
    msg.custom.assign("ABTJBQLHFVOEWPLFVGMWNDBSCDHB");

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
    msg.setTimeStamp(0.04882121957123897);
    msg.setSource(61058U);
    msg.setSourceEntity(65U);
    msg.setDestination(42946U);
    msg.setDestinationEntity(24U);
    msg.timeout = 18999U;
    msg.lat = 0.18214636185437272;
    msg.lon = 0.5437982909343889;
    msg.z = 0.45532490933942715;
    msg.z_units = 95U;
    msg.speed = 0.7203600331340732;
    msg.speed_units = 221U;
    msg.bearing = 0.6689202772054027;
    msg.width = 0.6383198503183672;
    msg.direction = 83U;
    msg.custom.assign("EVFIBNGEXOSSJRWECMLQDQLSBFCQAIZRFKPNRIJWLACZLKTESHIDDHMLYVJQTEV");

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
    msg.setTimeStamp(0.30817570844819153);
    msg.setSource(49643U);
    msg.setSourceEntity(170U);
    msg.setDestination(5688U);
    msg.setDestinationEntity(135U);
    msg.op_mode = 121U;
    msg.error_count = 73U;
    msg.error_ents.assign("ROACOIPCVNFUKXEXTHIDSYOOPOBLSQELJNANTSVNMMYADRKQHDBINZGKSGVJDLFRCZLYQQJCBTZM");
    msg.maneuver_type = 44276U;
    msg.maneuver_stime = 0.3544470839836764;
    msg.maneuver_eta = 37981U;
    msg.control_loops = 1312078683U;
    msg.flags = 209U;
    msg.last_error.assign("ACELZSGDSOKAZMTUFKUSUWDUKPGEIEIFCYNDNMOISVJCTPOB");
    msg.last_error_time = 0.7597146326002302;

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
    msg.setTimeStamp(0.977144275928907);
    msg.setSource(50826U);
    msg.setSourceEntity(12U);
    msg.setDestination(47091U);
    msg.setDestinationEntity(153U);
    msg.op_mode = 231U;
    msg.error_count = 222U;
    msg.error_ents.assign("COQTSZTLTYEIZKUZDZPTAZZIKSSVIAEOCQAPUBGYYPDBZKRLJAOWDZHHGNLAXQSBDPGEUKRMJJHFYEOWSCHIWUEJFAMHXKVEQNIIUMBNNVTTEHABVLAYLPXRUGCUFVICVMVURTFUVMLNCDGRQTQNOVYBBWPXJFFMHJGGPWCSFJJRLNVFBUWACMOWP");
    msg.maneuver_type = 43778U;
    msg.maneuver_stime = 0.12116006151119652;
    msg.maneuver_eta = 22223U;
    msg.control_loops = 3500846636U;
    msg.flags = 76U;
    msg.last_error.assign("PTHMFBIKIJDTPLOUIXQGCQMQXJMUQDPTMFYLHIPJZKIAVECTVNIZEFIYRGQQETUVFHZYRKNANDBWJKMEWVVBCWXDDFZFBRJEMNGEYAHYQLFLZDKGVJUGWXRSHXWSNOVHIBYU");
    msg.last_error_time = 0.2058215699384347;

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
    msg.setTimeStamp(0.7056722807826745);
    msg.setSource(28645U);
    msg.setSourceEntity(203U);
    msg.setDestination(31234U);
    msg.setDestinationEntity(45U);
    msg.op_mode = 21U;
    msg.error_count = 141U;
    msg.error_ents.assign("UUTEXGJLKRYHJCZEXHGGLXGQOSIKMGNSVXVIMMSDFCSAJSYGRWJWYKAPMJQFCLRHPKPRKLZAIOMDVDWSTJLJNTNNVLCOAOQNRWXFCFUOQLVNFDFODAVUZZ");
    msg.maneuver_type = 17671U;
    msg.maneuver_stime = 0.9849329223375107;
    msg.maneuver_eta = 56256U;
    msg.control_loops = 2253331397U;
    msg.flags = 131U;
    msg.last_error.assign("EYXIYMKFDQYDSX");
    msg.last_error_time = 0.011049061971510454;

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
    msg.setTimeStamp(0.5440401123332038);
    msg.setSource(15195U);
    msg.setSourceEntity(130U);
    msg.setDestination(29747U);
    msg.setDestinationEntity(140U);
    msg.type = 173U;
    msg.request_id = 6399U;
    msg.command = 25U;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 22175U;
    tmp_msg_0.lat = 0.144550331796219;
    tmp_msg_0.lon = 0.12617456042444342;
    tmp_msg_0.speed = 0.42934056275351984;
    tmp_msg_0.speed_units = 213U;
    tmp_msg_0.custom.assign("DSIHHRXLTYBKJXHXFSIMUBINVVGKHOR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 514U;
    msg.info.assign("DVRIKRHCJUMMPUKYTJTEBXHPQHKSPNNUVTYCHMTJXRMLJXSEHPIVVEGYZTKSPKSCGOAFQWWQQYTJQWQMDRSEOGLCIFMCVZRJZQIKGCPALTIGVGXPWVKVDDKWZDLDTAFUAHJIDFAFOPXBVYWFBRPMAJXLBRECIEL");

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
    msg.setTimeStamp(0.16115651189450453);
    msg.setSource(61789U);
    msg.setSourceEntity(53U);
    msg.setDestination(45251U);
    msg.setDestinationEntity(156U);
    msg.type = 215U;
    msg.request_id = 36318U;
    msg.command = 86U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.4668192178662305;
    tmp_msg_0.lon = 0.15690160227896854;
    tmp_msg_0.z = 0.29957498473706135;
    tmp_msg_0.z_units = 12U;
    tmp_msg_0.speed = 0.3470464922565044;
    tmp_msg_0.speed_units = 236U;
    tmp_msg_0.takeoff_pitch = 0.3381131868766719;
    tmp_msg_0.custom.assign("OGOQORQYPFWLAAITTNGBAXUOTCROVGVYAQUPBZEQNRMQOMYBADZTKNFYUWFQFTFPBQNMIYAFM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32706U;
    msg.info.assign("VJAZPUVSZDFTPKGZGUHNXNWA");

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
    msg.setTimeStamp(0.7615220328379234);
    msg.setSource(60402U);
    msg.setSourceEntity(35U);
    msg.setDestination(40010U);
    msg.setDestinationEntity(103U);
    msg.type = 47U;
    msg.request_id = 41886U;
    msg.command = 92U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 42561U;
    tmp_msg_0.lat = 0.8626357833931871;
    tmp_msg_0.lon = 0.6284268502491307;
    tmp_msg_0.z = 0.49971623021154565;
    tmp_msg_0.z_units = 149U;
    tmp_msg_0.amplitude = 0.5702730087911628;
    tmp_msg_0.pitch = 0.433269080155515;
    tmp_msg_0.speed = 0.03806673894082169;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.custom.assign("LTHBRGJRTOTCKQWMGZPVROSZNKHUNJUMWKECRBFVD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26685U;
    msg.info.assign("WDDYDVVUJBQYREMASKSFUDRAVTUNKYXWGYAEGSJNMIBSCPIBDODJXHTBCZABAHFFDONIRNGSXAEOVVJZXWTZHNZWLFXSUZQNLWKRTKOCUFMKVKWGFQZITYVPQHHPPOOYOCTQTFKLZFPXPLPTWRVIBRXJPPCBJIHUETJANUQLHZFQKRGOURBGIOBELCMGCBKIQAWYSAHGDLXLEMQAMRPMMTUEEMUJFIJLVY");

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
    msg.setTimeStamp(0.3486003909116817);
    msg.setSource(58665U);
    msg.setSourceEntity(32U);
    msg.setDestination(22080U);
    msg.setDestinationEntity(196U);
    msg.command = 134U;
    msg.entities.assign("XCGMFSMUSSSBXEEBPPWUTIGSEDEMKHWHCIBODXTZVXQ");

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
    msg.setTimeStamp(0.06414908942844733);
    msg.setSource(51473U);
    msg.setSourceEntity(29U);
    msg.setDestination(3527U);
    msg.setDestinationEntity(208U);
    msg.command = 127U;
    msg.entities.assign("CQOWLIGJULHUIYVVHZJFINTLPRYNJRMHEJMAKGDQBRFWHXZGUEYFRBESAZSUGOCXHNDTIWZEPRJPFOWZQAOKBLYRNEASC");

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
    msg.setTimeStamp(0.21453578614508395);
    msg.setSource(42906U);
    msg.setSourceEntity(210U);
    msg.setDestination(1825U);
    msg.setDestinationEntity(226U);
    msg.command = 45U;
    msg.entities.assign("BVWXHXBOEYEXKDNOMOFHZLGZJPQVHHBTKNQJJSQAKHBCZSMYODSNNTJFYFLXOTWCYTBZBXZVAVRSMAETVURSYCAWDDFFWBXOFAVUWMNJMZPHDSRLYAVUIKIYNCAGOVAULUQIGXGCIEPWRLTCURKIZDEWGFXIGIGCOYQFDRLQCSJTNBXMEPPAINGVRZHQUPSTBJMBMZGJKEFEZLDINRGRWULFYVDUPIYSLMK");

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
    msg.setTimeStamp(0.06898709088183941);
    msg.setSource(8938U);
    msg.setSourceEntity(228U);
    msg.setDestination(61578U);
    msg.setDestinationEntity(243U);
    msg.mcount = 154U;
    msg.mnames.assign("IGUMNJIHRBLJCHDZBWDCLABGROJWQWUJELNNEPAZPMWQNSLFEKRTEBVDGQAGHNBJDGPEUDUESSBVVSIOZXTDNAZCDKZZHFSUWKNXNZDDXHWAVHOKMKXUPBGLSXVIXJLYMAIIHRAOTUFWSLQVHKVBQVPGYUKCYGCCMEPXCITLGPCYKOFFUWCFYMMAVLTQKBEJAETHOYOPWWJSNIZ");
    msg.ecount = 13U;
    msg.enames.assign("NQTRBIJUPMUCQUSTZPGRBXIMIEONMQDQOFBDHSVIDBD");
    msg.ccount = 22U;
    msg.cnames.assign("BXBHLHFENMLYYXEGPRDGVHQNCANSWCFACFBDHZLMJHXXRFPFJTWKSUBTYRLXLEAQDRWNOUTEDGURGORUKISGZIRDJZZQBFIROPMKXYUTLGNNXSTQUMAPJMAMSTVUHLBGZDMQZNDVIDZPSNYHJIUTKBAFVPWJWBZEKLACROIZCAVGWFSGVAXOKVLIVFDJTDSPANYFC");
    msg.last_error.assign("LHZKZPIMLACKSVVLSIIVOFQCXUURXNOIBINXBKKZNAVSMQHHPIUUGYBGEPTIQPBJNQWCSRHNWKEVYUYBLRPYBXDFSEYTETPHTQUHGUJRONRWRGGEWCDJHWJXCSVQDQAHFDXQO");
    msg.last_error_time = 0.6488285467082485;

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
    msg.setTimeStamp(0.37220148221296034);
    msg.setSource(19841U);
    msg.setSourceEntity(95U);
    msg.setDestination(34258U);
    msg.setDestinationEntity(26U);
    msg.mcount = 72U;
    msg.mnames.assign("ZLIRGDGTJCJPGAWQJXZPOAQHNYKYPUBAIRIYCGTDYEEOMVQEHPSTOMJZFBPOEPNXHRFQDXRKHRDRPDAWKVVQLUGLHKRFMOVVYFHBRIMJBVDILUUWVSRFYCMWISENXKAJWTXHEZYCSQEAGXNALQIFOMIDHTCLV");
    msg.ecount = 5U;
    msg.enames.assign("GNLVNOXEEJHEYMOHNBQOHPUTGHFBNKAGYECNPRZRLDGKSSJFTUCXIOYIZVWYHCYDFQWX");
    msg.ccount = 43U;
    msg.cnames.assign("FSAUTHRIXZPFNPTFXPDTZIRHQLNJDDKNOIRAECAJKFXQZBSNHLUMSOQLQSSYLYEIFMWAGGASKJMJLFCELWADQEXXAWTEKZDZGNUBGIFFOTCWVWRRRNULHNYAPJVWXOLSRXGRBJKNHVQAVOCZECYQRJTFUTNSGNXPIOYVGHGZUVMCYUDOXYIBHCEWCMPJIMKWDKJMUOZYGWDQOPZMAUXJBQQSBBDYEMKKEIFLU");
    msg.last_error.assign("MGYFJQWHTMFTPZYLYAICHZQENAHWQXQUOFTUCBUGUOVAQGMSJYXPXWKDMULYTCWBLIGXCLJLWZRECPJJVEAFOFRGQSAILKTUEPDNTQLNNBHKHNUGVVDLAZXHVEWRPTORSSOVDYKKWRSANOPJNPRBAYI");
    msg.last_error_time = 0.4535331181598068;

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
    msg.setTimeStamp(0.24379089120411812);
    msg.setSource(60442U);
    msg.setSourceEntity(88U);
    msg.setDestination(62438U);
    msg.setDestinationEntity(128U);
    msg.mcount = 110U;
    msg.mnames.assign("BXPFYLWTNCEGQKWMOMALGTFSOQPZCXHHRZXSJLZHKPVLYJKICYNEDY");
    msg.ecount = 120U;
    msg.enames.assign("DYWMNVWUTMTYTOFFJTFOBWKKLRACGSUKVHQKHRMPPLXSSPHGLHFVVVRTQARLMEVPXDNZGZDNWBOUPACSEQFVROZHCNOSFJYGLSVMKAJXHONISYMPNQZAIRXNIUDDQDHELMMLIKSWADJXGCPHWOOCULTKNBMRGUIWJYEZYGTZGIFXDGWAABTJPJOEKQAFLBUHBRGTBYYFEBEISCXPMQFZARIXBCVBCCIJDUKTILDXZYNNQXJ");
    msg.ccount = 125U;
    msg.cnames.assign("WHNEJJSXKCYKHSQBTLFOUYVSJCGBOVBBSOYAMZRCXCVPXPLNYNLQDHEZSLTSFICXOKTAZBJMEKTJAYORGRRHIGGMCZXRKHJSBOHOKEZXUUIVGXNZSZEDWDVFPUPQQDQENIDLPOXWMTLUUGIKEVYMGJPQAMDCVKIVYWNNWPMKFNTRXFFERDHMOWUYLDLEZTXRPZRFQITDYFKBHSIVAZSELNWBN");
    msg.last_error.assign("VUGCIDJZHXDLKXTONQUUNJCXROFXPLYHTLZAZPUDMMMGWCMVFXJVQAJBRAZJCZPTAEFUWHBNBHCQIRYLZRPOMSKIWYANCTWQBDDSMOVBJAEZSEFTBHGNJBKPYFLDSVUKHESFNHZRVKBEP");
    msg.last_error_time = 0.13562879493031976;

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
    msg.setTimeStamp(0.5225791547773396);
    msg.setSource(44710U);
    msg.setSourceEntity(5U);
    msg.setDestination(37833U);
    msg.setDestinationEntity(209U);
    msg.mask = 113U;
    msg.max_depth = 0.5394832103245673;
    msg.min_altitude = 0.5450362327531105;
    msg.max_altitude = 0.040278038112418035;
    msg.min_speed = 0.5024712456281778;
    msg.max_speed = 0.4605654477286565;
    msg.max_vrate = 0.8429919246273234;
    msg.lat = 0.005338052933587023;
    msg.lon = 0.27223328886671205;
    msg.orientation = 0.07530343727729139;
    msg.width = 0.5450500620307777;
    msg.length = 0.8363194798378498;

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
    msg.setTimeStamp(0.5319249235045163);
    msg.setSource(52097U);
    msg.setSourceEntity(125U);
    msg.setDestination(11812U);
    msg.setDestinationEntity(79U);
    msg.mask = 254U;
    msg.max_depth = 0.19558625077112235;
    msg.min_altitude = 0.8384025528757595;
    msg.max_altitude = 0.35577375377886367;
    msg.min_speed = 0.3645009938784377;
    msg.max_speed = 0.7890141330073746;
    msg.max_vrate = 0.9176856575924038;
    msg.lat = 0.32317488160666186;
    msg.lon = 0.7548837189859106;
    msg.orientation = 0.7556287872248354;
    msg.width = 0.2766551060721679;
    msg.length = 0.6105605214786656;

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
    msg.setTimeStamp(0.9227730493469177);
    msg.setSource(38294U);
    msg.setSourceEntity(138U);
    msg.setDestination(14316U);
    msg.setDestinationEntity(57U);
    msg.mask = 170U;
    msg.max_depth = 0.13702197247839853;
    msg.min_altitude = 0.4543145780915854;
    msg.max_altitude = 0.3242813792225987;
    msg.min_speed = 0.35928420343905154;
    msg.max_speed = 0.9718721301241626;
    msg.max_vrate = 0.2153189404714969;
    msg.lat = 0.2868760176033808;
    msg.lon = 0.6157541426662689;
    msg.orientation = 0.7232936575652924;
    msg.width = 0.5517122979663954;
    msg.length = 0.33716433476841623;

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
    msg.setTimeStamp(0.6610343717691466);
    msg.setSource(60625U);
    msg.setSourceEntity(126U);
    msg.setDestination(11357U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.8697803700332564);
    msg.setSource(18580U);
    msg.setSourceEntity(24U);
    msg.setDestination(31715U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.7745710360466007);
    msg.setSource(2423U);
    msg.setSourceEntity(70U);
    msg.setDestination(55913U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.1558469927418078);
    msg.setSource(60733U);
    msg.setSourceEntity(200U);
    msg.setDestination(5978U);
    msg.setDestinationEntity(237U);
    msg.duration = 27286U;

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
    msg.setTimeStamp(0.28156574001170154);
    msg.setSource(460U);
    msg.setSourceEntity(187U);
    msg.setDestination(52327U);
    msg.setDestinationEntity(67U);
    msg.duration = 54338U;

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
    msg.setTimeStamp(0.4731238150737239);
    msg.setSource(58498U);
    msg.setSourceEntity(41U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(157U);
    msg.duration = 33445U;

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
    msg.setTimeStamp(0.23062599753416357);
    msg.setSource(22482U);
    msg.setSourceEntity(182U);
    msg.setDestination(20278U);
    msg.setDestinationEntity(4U);
    msg.enable = 217U;
    msg.mask = 3797124607U;
    msg.scope_ref = 847469709U;

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
    msg.setTimeStamp(0.02514659899979399);
    msg.setSource(25937U);
    msg.setSourceEntity(119U);
    msg.setDestination(24189U);
    msg.setDestinationEntity(3U);
    msg.enable = 248U;
    msg.mask = 2656491183U;
    msg.scope_ref = 3973380003U;

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
    msg.setTimeStamp(0.5108497865007313);
    msg.setSource(43365U);
    msg.setSourceEntity(8U);
    msg.setDestination(54749U);
    msg.setDestinationEntity(183U);
    msg.enable = 195U;
    msg.mask = 1321558553U;
    msg.scope_ref = 1464176181U;

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
    msg.setTimeStamp(0.49128382560960915);
    msg.setSource(43275U);
    msg.setSourceEntity(126U);
    msg.setDestination(63429U);
    msg.setDestinationEntity(90U);
    msg.medium = 138U;

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
    msg.setTimeStamp(0.03566802417349446);
    msg.setSource(12446U);
    msg.setSourceEntity(72U);
    msg.setDestination(23894U);
    msg.setDestinationEntity(10U);
    msg.medium = 204U;

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
    msg.setTimeStamp(0.7087719511125191);
    msg.setSource(45038U);
    msg.setSourceEntity(178U);
    msg.setDestination(34360U);
    msg.setDestinationEntity(207U);
    msg.medium = 171U;

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
    msg.setTimeStamp(0.4406120192578409);
    msg.setSource(39963U);
    msg.setSourceEntity(50U);
    msg.setDestination(38777U);
    msg.setDestinationEntity(135U);
    msg.value = 0.1752393970124998;
    msg.type = 151U;

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
    msg.setTimeStamp(0.6553174240258133);
    msg.setSource(60916U);
    msg.setSourceEntity(243U);
    msg.setDestination(63765U);
    msg.setDestinationEntity(93U);
    msg.value = 0.5170320637778226;
    msg.type = 85U;

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
    msg.setTimeStamp(0.011958544839987706);
    msg.setSource(46576U);
    msg.setSourceEntity(167U);
    msg.setDestination(45581U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5748129872655232;
    msg.type = 81U;

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
    msg.setTimeStamp(0.30447897434235316);
    msg.setSource(14198U);
    msg.setSourceEntity(142U);
    msg.setDestination(5698U);
    msg.setDestinationEntity(122U);
    msg.possimerr = 0.09772851750808309;
    msg.converg = 0.21053582566728402;
    msg.turbulence = 0.3697053718988226;
    msg.possimmon = 201U;
    msg.commmon = 34U;
    msg.convergmon = 128U;

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
    msg.setTimeStamp(0.20421417845833234);
    msg.setSource(63369U);
    msg.setSourceEntity(178U);
    msg.setDestination(25357U);
    msg.setDestinationEntity(220U);
    msg.possimerr = 0.8391292650798786;
    msg.converg = 0.30631874952880556;
    msg.turbulence = 0.7670304037881791;
    msg.possimmon = 124U;
    msg.commmon = 138U;
    msg.convergmon = 79U;

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
    msg.setTimeStamp(0.3474091479197243);
    msg.setSource(12089U);
    msg.setSourceEntity(224U);
    msg.setDestination(5443U);
    msg.setDestinationEntity(122U);
    msg.possimerr = 0.09238279685593509;
    msg.converg = 0.8442034744473947;
    msg.turbulence = 0.12017801486204516;
    msg.possimmon = 89U;
    msg.commmon = 102U;
    msg.convergmon = 56U;

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
    msg.setTimeStamp(0.5010923012514387);
    msg.setSource(53946U);
    msg.setSourceEntity(123U);
    msg.setDestination(34758U);
    msg.setDestinationEntity(220U);
    msg.autonomy = 69U;
    msg.mode.assign("EJEAVFAFKOQQDCZVHWNOBCIPHAMGINIJUCKFRFNKCFYSIGOPHGIMWHNY");

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
    msg.setTimeStamp(0.9119800413364844);
    msg.setSource(34344U);
    msg.setSourceEntity(79U);
    msg.setDestination(18547U);
    msg.setDestinationEntity(200U);
    msg.autonomy = 212U;
    msg.mode.assign("MCZRWXMDLLUMABETISRGUSIFUMACHFVBAURIBZCCACQEDAZLIKPWYKGYXHBRVOAYAPCLOZTDHRAJRMJTCRGCJZTNGHHUMHXEQQTRNVGTSXQEHXGYNFPKOGIQJSWXXFXOTQOSWWTWLTAVVVWOJLWOBBXYUDOLEZIDFPFBEIFPXDUNGZHGYKLLPCJSVOIJPNSMPQMQKRYKZEMTJCNWKBVBYQPDNFKSRMGENKYWAIIHZSFDNJQPKEUDZYNJHSBUFU");

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
    msg.setTimeStamp(0.5039257087602104);
    msg.setSource(31867U);
    msg.setSourceEntity(175U);
    msg.setDestination(44069U);
    msg.setDestinationEntity(113U);
    msg.autonomy = 1U;
    msg.mode.assign("PAUBULZRYOHNJKOGHBXZMMTR");

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
    msg.setTimeStamp(0.12431715908023555);
    msg.setSource(35723U);
    msg.setSourceEntity(204U);
    msg.setDestination(16066U);
    msg.setDestinationEntity(242U);
    msg.type = 149U;
    msg.op = 122U;
    msg.possimerr = 0.8885611935987975;
    msg.converg = 0.03274127229021273;
    msg.turbulence = 0.3011928525046518;
    msg.possimmon = 171U;
    msg.commmon = 222U;
    msg.convergmon = 247U;

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
    msg.setTimeStamp(0.9361223616191033);
    msg.setSource(40424U);
    msg.setSourceEntity(80U);
    msg.setDestination(55950U);
    msg.setDestinationEntity(231U);
    msg.type = 208U;
    msg.op = 7U;
    msg.possimerr = 0.26234070710298707;
    msg.converg = 0.12194944949658892;
    msg.turbulence = 0.890472230350073;
    msg.possimmon = 121U;
    msg.commmon = 9U;
    msg.convergmon = 86U;

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
    msg.setTimeStamp(0.5275506463642786);
    msg.setSource(44907U);
    msg.setSourceEntity(5U);
    msg.setDestination(52012U);
    msg.setDestinationEntity(38U);
    msg.type = 84U;
    msg.op = 81U;
    msg.possimerr = 0.8523208240667011;
    msg.converg = 0.3001469599536277;
    msg.turbulence = 0.5187686121148931;
    msg.possimmon = 254U;
    msg.commmon = 206U;
    msg.convergmon = 104U;

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
    msg.setTimeStamp(0.39107125257482556);
    msg.setSource(23958U);
    msg.setSourceEntity(2U);
    msg.setDestination(42956U);
    msg.setDestinationEntity(120U);
    msg.op = 156U;
    msg.comm_interface = 90U;
    msg.period = 12124U;
    msg.sys_dst.assign("FQKZJIHHWYVBVKVGVWBTHNDPRNVSSJAJNLNFIXRVAAXZMOSILTYYCMCKXD");

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
    msg.setTimeStamp(0.010026046876117412);
    msg.setSource(23401U);
    msg.setSourceEntity(250U);
    msg.setDestination(43993U);
    msg.setDestinationEntity(163U);
    msg.op = 232U;
    msg.comm_interface = 249U;
    msg.period = 22004U;
    msg.sys_dst.assign("GCVKDDYECUIRELHYZVMZQYBPYKOBEVMVFEPXPZTQRVFUJXHCKQLOAGGKTMODLSWUXYBJOILWMGXKXSQHCLSNREDGWPFAGJRKTQWJHMZZBWTJNIYBQTXIRBZVJLXGADNFL");

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
    msg.setTimeStamp(0.3789016632195994);
    msg.setSource(59850U);
    msg.setSourceEntity(126U);
    msg.setDestination(55730U);
    msg.setDestinationEntity(168U);
    msg.op = 154U;
    msg.comm_interface = 111U;
    msg.period = 26446U;
    msg.sys_dst.assign("DYQMXPPEWAYIZXJLLJECNOAXHZXHSLDCZFFLLUGAJXDMMTTMFKCHOMVV");

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
    msg.setTimeStamp(0.768987773067023);
    msg.setSource(28084U);
    msg.setSourceEntity(145U);
    msg.setDestination(54287U);
    msg.setDestinationEntity(16U);
    msg.stime = 1195365643U;
    msg.latitude = 0.9425454478212584;
    msg.longitude = 0.6356190269811013;
    msg.altitude = 19370U;
    msg.depth = 23076U;
    msg.heading = 42984U;
    msg.speed = 11277;
    msg.fuel = 77;
    msg.exec_state = 23;
    msg.plan_checksum = 16967U;

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
    msg.setTimeStamp(0.4879955309298539);
    msg.setSource(49574U);
    msg.setSourceEntity(97U);
    msg.setDestination(17785U);
    msg.setDestinationEntity(223U);
    msg.stime = 575532270U;
    msg.latitude = 0.8338379311700931;
    msg.longitude = 0.6808883784760796;
    msg.altitude = 59832U;
    msg.depth = 10415U;
    msg.heading = 13489U;
    msg.speed = 25916;
    msg.fuel = -84;
    msg.exec_state = -111;
    msg.plan_checksum = 44048U;

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
    msg.setTimeStamp(0.3574204917364653);
    msg.setSource(48252U);
    msg.setSourceEntity(251U);
    msg.setDestination(46710U);
    msg.setDestinationEntity(106U);
    msg.stime = 3927722667U;
    msg.latitude = 0.9852330218232603;
    msg.longitude = 0.11928109278461096;
    msg.altitude = 34033U;
    msg.depth = 38930U;
    msg.heading = 49846U;
    msg.speed = 18551;
    msg.fuel = 67;
    msg.exec_state = -49;
    msg.plan_checksum = 22195U;

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
    msg.setTimeStamp(0.058165395230523);
    msg.setSource(10386U);
    msg.setSourceEntity(146U);
    msg.setDestination(58944U);
    msg.setDestinationEntity(246U);
    msg.req_id = 5825U;
    msg.comm_mean = 163U;
    msg.destination.assign("SVRVYYBKCGJNDBTUKSMMYKUNXKYLDOVPNLRPGTOJPWXAOKCUHRGHVHFFGYZQNSLZKSIJQTTZZXTFBZWHWCOEUCFVFTCIMUFFPPNAXNCJIEIDOQVRQXYPVEMQEGBJSEQOEZVPBRXHHZWTUTBMYAOZ");
    msg.deadline = 0.28241337573335334;
    msg.range = 0.26363983377066835;
    msg.data_mode = 132U;
    IMC::CommSystemsQuery tmp_msg_0;
    tmp_msg_0.type = 136U;
    tmp_msg_0.comm_interface = 27010U;
    tmp_msg_0.model = 52049U;
    tmp_msg_0.list.assign("HIEVXNSPCBVSOGLMJTDU");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GUKEYYQUCDHXNFHTXHYSSWGTWOEXKDRXBANELWRNAVEUUWBYLJVONCPBIMGLDDMBTYGTIOFLFZEQIJZXPGLRCCROVRPMWILW");
    const signed char tmp_msg_1[] = {-77, -127, 109, 36, -72, 12, 124, -97, 36, 105, -121, -19, 41, -60, 57, -32, 9, 32, 27, -13, 87, -86, -4, -82, -74, 43, -80, 65, -115, 67, -55, 34, 102, 93, 55, 4, -79, -110, -73, 76, -37, -117, -107, -116, -112, -103, 48, 15, -92, -89, -127, -24, -13, 80, -8, -83, -8, 70, -59, 22, 29, -65, 64, -64, 91, 21, 97, -29, -50, 107, 17, 54, -94, -48, 86, -23, -86, 66, -117, -61, 29, 70, -17, -111, 119, -1, 79, -19, -96, -100, -107, 44, 97, 68, -69, 25, -124, -78, 55, 60, -109, 84, -66, -95, 32, -87, -82, 109, -42, 120, -22, -87, 60, 97, -120, 106, 55, 103, -84, -53, 85, 121, -7, 73, 85, 96, 78, 20, -21, 108, -19, -56, 49, -84, -4, -97, 95, -13, -115, -41, 54, 94, 1, 42, 57, 37, -45, 37, 43, 18, 43, 83, 68, -1, -53, -19, -73, 108, -121, 71, 103, 31, 109, 93, 120, -4, 24, -11, -22, 29, 101, -79, -101, -25, -114, 48, 105, -4, -51, -58, -48, -94, 2, 98, -42, -20, 103, -128, 116, -119, -25, 35, -10, -113, -73, 30};
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
    msg.setTimeStamp(0.24467876721167137);
    msg.setSource(13585U);
    msg.setSourceEntity(230U);
    msg.setDestination(48904U);
    msg.setDestinationEntity(236U);
    msg.req_id = 7683U;
    msg.comm_mean = 56U;
    msg.destination.assign("OTYKIQLBXPAHKVYENCMINBXITWRMOVOZOQJCZJDFGDUMDLSFADLFTAOFZHUI");
    msg.deadline = 0.05525159388317047;
    msg.range = 0.16942895784108147;
    msg.data_mode = 108U;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 83U;
    tmp_msg_0.period = 1074813670U;
    tmp_msg_0.duty_cycle = 2361278284U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EWNHLEQMALXRZGPHQOGADHCPRSJNNJGCAUQVDINOLTTCDGCAXZBOPBPPLMUYUZCYDTWVRNQJYBUFKWYUMJOIYZLNDDGHEHIWPFKWXMROQUEXGBCRQAPYVFVFTSKCMBKMOMVKQKZBEEZEXRFTRXFGSEIMPIEJSXDAIIWEYPUGMSTSKFVSLOBYLDQQABWKVLUZVHWCRAYXM");
    const signed char tmp_msg_1[] = {105, -114, 49, 60, -54, -87, -70, -78, 30, -128, 112, -118, 69, -116, -109, 10, -127, -19, -42, 27, -58, -96, 35, 117, -9, -50, 52, 70, -47, -97, 70, 11, -84, 102, 58, -75, 2, 61, 55, 87, -98, 95, 50, -67, -122, -17, 97, -56, 41, 15, -109, -79, -36, 38, 80, -101, 36, -69, 57, 8, -97, 77, 73, -52, -49, -26, -104, -75, 49, 89, -17, 43, -107, 65, -92, -83, -91, -111, -24, -47, -100, 86, -98, -15, 19, -52, 18, 6, 108, 106, -60, -28, -71, -38, -41, 14, -1, 115, -67, -15, 109, 118, 25, -7, -78, 98, 105, -109, 117, -86, -36, -39, 92, -78, 53, 78, -53, 31, -119, -39, 22, 56, -83, -61, 67, 112, 62, 74, 20, 68, -39, 117, 62, 42, -82, -78, 53, 109, 10, -32, 77, 53, 71, -115, -58, 114, 120, -46, 15, -33, -38, 64, -20, 94, -70, 89, -44, 26, -58, 83, -36, 107, -62, 24, 113, -103, 68, -35, 80, -92, 100, 84, -101, -8, -20, -15, -97, 123, 124, -61, 126, 50, 88, 74, 46, -119, 77, -75, -127, 112, 124, -121, -97, -7, -8, -68, 118, -9, -41, 22, -15, -86, -63, 89, -39, -125, -67, 27, -125, 99, 114, -83, 72, -86, -81, -125, 15, 126, 73, -109, 39};
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
    msg.setTimeStamp(0.6696325563546948);
    msg.setSource(44258U);
    msg.setSourceEntity(127U);
    msg.setDestination(52895U);
    msg.setDestinationEntity(122U);
    msg.req_id = 37698U;
    msg.comm_mean = 227U;
    msg.destination.assign("VFBPQAGHIUHWHSEOIWSEEVPYDPMHGLEZPPJNIXHORLFNAMTODETAXXMOMJVDAUKKPEYZLYKXXVLCYSHDNAITDYIMQIFCAVDRKINVVSKEOZYRQPWYCXTQSSFMNIJUHGZMJFKWCAAYLZSQRFYATZNQWCOPZBWOVLMKRKJMBTFNEJPGGXRKZXNWSSZUTGBUWPJJQBYORBUUNXTOENQICGIRTHGLQFBJ");
    msg.deadline = 0.7718354288291622;
    msg.range = 0.7404981049862482;
    msg.data_mode = 61U;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 38221U;
    tmp_msg_0.sys_dst.assign("CTDIYMGXEBBKQKPXQCODVDFDWOBQVURVYGZPUBHNHFPGAKLNBTLQZONZJGABTUWKHKSESRNIMJZKEMICUEOAMIUTEIXSWMLJQWFTJA");
    tmp_msg_0.flags = 83U;
    const signed char tmp_tmp_msg_0_0[] = {-85, 84, 119, 74, 94, -83, 97, 90, -109, -102, -7, -4, 29, -70, -89, 95, -127, -53, -42, -122, -79, 104, -69, -21, 13, 19, 119, 66, -99, -100, 58, -77, -8, 1, 54, 24, 0, -116, 95, -35, -126, -13, -11, 83, -20, -68, -61, -66, 71, -2, 97, 86, 66, -66, -111, -25, 35, -47, -69, -91, 31, 44, 24, 1, 31, -125, 54, 119, 48, -72, 65, -85, 16, 40, -98, -10, -80, 113, -11, 70, 54, -31, -30, 42, -50, 72, -3, 94, -75, 58, 126, -127, -92, -14, 15, 38, -73, 3, 33, -126, -67, 96, -47, -104, 107, -59, -21, -3, 120, 32, -113, 34, 81, 119, -45, -40, -44, 119, 7, -128, 119, 98, 120, -95, -13, 66, -16, -48, 102, -70, 46, 81, 33, -114, -60, -98, 81, -51, 100, 68, 106, -66, 103, -82, 110, 21, 50, -84, 116, 52, -62, 126, -63, 79, -46, -23, -47, -76, -115, 16, 79, -69, 11, -47, -7, -5, -39, -118, 67, 51, 25, -41, 120, 46, -23, -18, 81, -16, -76, 112, -10, 40, 21, -127, -34, -29, -82, 53, -16, 16, 22, 109, 75, -14, 21, -122, -37, 78, 20, -73, -46, 121, 90, -70, 52, 80, 90, 7, -29, 23, 31, -101, -48, 107, 4, 77, 99, 33, 29, -109, 12, 107, 4, 26, 111, 25, 17, -80, 34, 88, -6, 60, -4, -55, 112, -80, -37, 77, 70, -2, 35, 66, -26, 57, -98, -125, 11, -27, -38, -86, -80, 69, 58, 98};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PJBHOCOMVWPDYQANXRUBDMNTZFUH");
    const signed char tmp_msg_1[] = {1, -55, 48, -103, 119, -22, -3, -120, 5, -51, 92, -82, -119, -11, -11, -74, -10, -119, -101, 116, -7, 45, 72, -22, -101, -46, 86, -90, -67, 61, 57, -74, 19, 99, 4, 13, -128, -80, 56, 25, 35, 48, 8, -17, -85, 33, 99, -82, 7, 74, -97, 99, 47, 43, 34, -24, -39, 90, 107, 118, 65, -60, -1, 72, -4, 73, -115, -58, 16, -83, -119, -2, -52, -18, -106, -42, 66, -40, -104, -41, 95, -49, 98, 5, 52, 96, -17, 45, 114, -86, 49, -64, -86, -99, 9, 63, -70, 8, -26, 5, -86, 9, 50, 126, 37, -98, 76, 45, -13, -68, 87, -75, -112, -14, -116, -118, 94, -94, 37, -111, 104, 23, -36, 108, -24, -8, -77, -97, -2, 84, 57, -96, -4, -21, -5, 13, -57, 10, 64, 106, -49, 108, 120, -50, -60, 34, 94, -28, 125, 36, 44, 102, -2, -55, 76, 106, -85, -121, -7, -6, -42, -18, -18, -28, 93, 73, -42, -55, -95, 72, -117, -86, -124, 60, 101, -32, 121, 59, 70, -30, 53, -113, 9, -38, -67, 77, -12, -84, 14, 61, 79, 0, -3, 44, 79, 25, 41, 104, -1, -39, -105, 44, 90, -70, 0, -18, 42, -110, 81, -95, -111, 85, 43, -114, 27, -123, -52, 116, 87, 83, 123, 51, -96, 15, -113, 48, -11, -128, -80, 61, 20, -42, -53, 43, 39};
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
    msg.setTimeStamp(0.3834973084003871);
    msg.setSource(47015U);
    msg.setSourceEntity(216U);
    msg.setDestination(41221U);
    msg.setDestinationEntity(253U);
    msg.req_id = 43031U;
    msg.status = 70U;
    msg.range = 0.2808421583214362;
    msg.info.assign("FMZGBAJUITXPCHJGBSCJFTYRRQGKVEDSCTDKEIATHZEKIJHLYYNMEMJXWZCTRYOUUCRTLYVBEKSZDWUROESWNPGWAFZCQJYQYVJDIUAVONPVOTUDONRFNNMKGLEMVUTWIYFWDGZCBRHOWFLMEDXQIRSGLOBNMHXGXQDIKBFPXLAXMECGNZOBWBYBBUPKONQPZXWIVQSLIDKKVFHLVJSQFDRSPAJFWGPSRPAUMLLNEYOAI");

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
    msg.setTimeStamp(0.1727786838338794);
    msg.setSource(13023U);
    msg.setSourceEntity(140U);
    msg.setDestination(40321U);
    msg.setDestinationEntity(241U);
    msg.req_id = 53047U;
    msg.status = 126U;
    msg.range = 0.6417269363973608;
    msg.info.assign("GEYKHULMFMAINHYYDAVUNPNXYRWZBFIVYHBNBJBJNJZOIOUOXQEZJ");

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
    msg.setTimeStamp(0.7786603683806969);
    msg.setSource(151U);
    msg.setSourceEntity(182U);
    msg.setDestination(27194U);
    msg.setDestinationEntity(161U);
    msg.req_id = 55203U;
    msg.status = 177U;
    msg.range = 0.06098804798969415;
    msg.info.assign("HMIDJBXMEYOLXYRBDRPOWIRNQRXUFDABKZEQKKWKTVEFWQSSOKVGIUWBJPWWMKRZSCTKZAWLGENYXQXUPNRVSUJXCZD");

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
    msg.setTimeStamp(0.8471989763852174);
    msg.setSource(56412U);
    msg.setSourceEntity(209U);
    msg.setDestination(23952U);
    msg.setDestinationEntity(138U);
    msg.req_id = 28155U;
    msg.destination.assign("AOHRJWOPDVCWTRSXSUDKULVHIEFANZQCFTYDZKTROGONNKTLAIQUFHBCMJDASFCRQWIDQHKQPJPVPQMYZKLBUFKIGYODSTPBCDNTURETYALIGRLMXFPPCGYPMWTEWNEFZSNAEFEOBMHHUHHR");
    msg.timeout = 0.6477253020570428;
    msg.sms_text.assign("PORMDVGWIBOZDWGYJDUFOIXHXMHHJEOOAZNUDDUENAIENGQCQPXTCNBGSSBPDAZBLHZHFARSBETRSSLTPVTVPMRNKYYCTIOEHXCCZTCKYQPHNCDIQWDJGZSBMWLOSOFUYBKUWRWMQKVQFCRXLJERKLBIZA");

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
    msg.setTimeStamp(0.023774923426525763);
    msg.setSource(16929U);
    msg.setSourceEntity(191U);
    msg.setDestination(35276U);
    msg.setDestinationEntity(233U);
    msg.req_id = 42565U;
    msg.destination.assign("ZSBLMXURUWHMBTTTFDKWLQDDEXDIRIEUWECUXEBQFVPAABEAOBLFGKZQDHYJVGPWWCRMTPKCQFTTSHTZ");
    msg.timeout = 0.5866657647226315;
    msg.sms_text.assign("GNJLQIXYFLKKWIOFKPWTYNGVBXRQKCZCIHRYCRPMGULJAUOTIGNIATWPD");

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
    msg.setTimeStamp(0.4182646084695997);
    msg.setSource(55284U);
    msg.setSourceEntity(75U);
    msg.setDestination(21846U);
    msg.setDestinationEntity(11U);
    msg.req_id = 25397U;
    msg.destination.assign("LIJQDOUXHEEWSDVHILMERCFWXXCBYGTTVWMKLHAAKHUXEYDDALMJRFFQLLBBJZFJUDWWDPBRZXSVRCWHPHPFFPQKRFYQAMQJWGUOXDAVTAYNMBRMEYZOMNEGKDPPNSTUGZXCLTSIGVNPPAMOZIOUZYONKANVIGYXGFHPGZHSCDIYHCQSFKABJBGCCSTNLUCTMVEULYUERKBJTXKSXOQQZ");
    msg.timeout = 0.8491055766937284;
    msg.sms_text.assign("YMJNQGENBUFQTRPVKPDKJNFXSAWWIRVLPQHLIWNNCDEHJOEVMGUKRCTRRIMRDRAZZOYUPLUHHOXFZBHKGPECIYHCOIIEGFVZSCTJJBOXYHTQFVGCAKXPMUKMNMBHWWWABQNKSKXGUTIAOKUHJSQJJFCBIYYRHALWUOQQDTOLSYXCZFQTEFFLGBVICWALBVRSYGPAWP");

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
    msg.setTimeStamp(0.3622411010498987);
    msg.setSource(26178U);
    msg.setSourceEntity(155U);
    msg.setDestination(13079U);
    msg.setDestinationEntity(211U);
    msg.req_id = 50465U;
    msg.status = 250U;
    msg.info.assign("WHQXLAIESZTWWYQIKBJJYFQNRCCPJGFOJJRNXOHCQGKQIGKDTSXCJUYWYPKQDTPWNPLWCNFUVMSWABKLCOMPIVABTDHIWCCKBFRDAVLPMOKZSPYXXVHHOJUWUABEMVRNZFJKFVHKSQPEZMCSNELYZOAHPZLEVSMMSQUVZRDTTDBEIAHKYOLGGDSRLMMUTSOL");

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
    msg.setTimeStamp(0.05004993693334536);
    msg.setSource(27326U);
    msg.setSourceEntity(185U);
    msg.setDestination(64457U);
    msg.setDestinationEntity(250U);
    msg.req_id = 59832U;
    msg.status = 4U;
    msg.info.assign("YSABAGBXASLVLCHMVUHGFLPMYRIJYIQQVBJWEXSXLKUSETSNIJTEDKIXYPURRCICTOWCBNSCPTNGDTNDKUKCLJQMHKHYQFUNWESFYXWGAELXHKTNXEFXRBPLCKZRBJAOWJQCWUZQEVHAHUSRJMZCTGLCYDBXPTVBTAFFFZVMWOKHDWPFDRMAQZSMAZGSTYOIDJVGHZPLOURQAOHNY");

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
    msg.setTimeStamp(0.6082980002930877);
    msg.setSource(3765U);
    msg.setSourceEntity(50U);
    msg.setDestination(63652U);
    msg.setDestinationEntity(40U);
    msg.req_id = 44810U;
    msg.status = 169U;
    msg.info.assign("VHORGOSPREIKUDXUWOPGDYITYDPLBBCNVTUSHMQLCIFKYWZDTXAKVCXRAKZHSRGWQFVMXZ");

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
    msg.setTimeStamp(0.6622776307070668);
    msg.setSource(55455U);
    msg.setSourceEntity(117U);
    msg.setDestination(53691U);
    msg.setDestinationEntity(82U);
    msg.state = 231U;

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
    msg.setTimeStamp(0.8645688233581648);
    msg.setSource(16008U);
    msg.setSourceEntity(104U);
    msg.setDestination(25429U);
    msg.setDestinationEntity(219U);
    msg.state = 241U;

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
    msg.setTimeStamp(0.15643094634394838);
    msg.setSource(21926U);
    msg.setSourceEntity(204U);
    msg.setDestination(34704U);
    msg.setDestinationEntity(72U);
    msg.state = 82U;

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
    msg.setTimeStamp(0.43197723108766195);
    msg.setSource(13861U);
    msg.setSourceEntity(124U);
    msg.setDestination(15038U);
    msg.setDestinationEntity(113U);
    msg.state = 226U;

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
    msg.setTimeStamp(0.3591375871159498);
    msg.setSource(63736U);
    msg.setSourceEntity(36U);
    msg.setDestination(8316U);
    msg.setDestinationEntity(142U);
    msg.state = 69U;

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
    msg.setTimeStamp(0.17940580189755995);
    msg.setSource(61687U);
    msg.setSourceEntity(103U);
    msg.setDestination(48378U);
    msg.setDestinationEntity(140U);
    msg.state = 116U;

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
    msg.setTimeStamp(0.17080304269482804);
    msg.setSource(62931U);
    msg.setSourceEntity(180U);
    msg.setDestination(58822U);
    msg.setDestinationEntity(183U);
    msg.req_id = 6514U;
    msg.destination.assign("RGKQFOHZKNGXOFWFTGCQJOPUVCPZNDLNKO");
    msg.timeout = 0.5787334248436773;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EODSJEQLETWADRIKVPKZHLVSNQBZ");
    tmp_msg_0.value.assign("MCWWTRQNSVSTKXHLNZMPSHUMAOKIVYNLDRDHVHUEXTDTYJIEIODEVMMJZCZFUNHIYMLZKAQZBJVFPVJOQXMYCQRHGAWDKXQOFAJGRTBBBWQECXHPAXWRTPFLFCWADKLOYONILWKXXMRBKQJLCFFPYBRFFIGYEV");
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
    msg.setTimeStamp(0.4779629775366334);
    msg.setSource(41430U);
    msg.setSourceEntity(122U);
    msg.setDestination(43615U);
    msg.setDestinationEntity(177U);
    msg.req_id = 20936U;
    msg.destination.assign("QBDAQKYKVFWCMOUPOYYEIILBOCNAUAKVXTLWN");
    msg.timeout = 0.3332111497426252;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("WTZCWORIFJITRAQQOFVAIBDPZXZIJPUJHNAVKUOEOYFQHMNHCLWMQHRBVRYSMZESKGMMXDXWBGCPNKHYGQPUHTUPAFNYAKEMKDBWGYTLSDMJNEVGNKTWSZWSGLEWLGONQVCRJZXPKMLRJLKZGIPSIA");
    tmp_msg_0.value = 235U;
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
    msg.setTimeStamp(0.13693429180403294);
    msg.setSource(40221U);
    msg.setSourceEntity(58U);
    msg.setDestination(1467U);
    msg.setDestinationEntity(90U);
    msg.req_id = 34673U;
    msg.destination.assign("RNVGCGJIFZGGYFANJJDYRMBMBEETGBUSRTJLLTVFWJFCVZOPTNBIHRJHXWPAPWYVITDCCKKNZEELHXLCMETGDWAKKRMSJDMPPGLRMWKHHZZHFUMYH");
    msg.timeout = 0.4159141459361586;
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 121U;
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
    msg.setTimeStamp(0.8328266357762801);
    msg.setSource(32461U);
    msg.setSourceEntity(46U);
    msg.setDestination(15642U);
    msg.setDestinationEntity(20U);
    msg.req_id = 4354U;
    msg.status = 235U;
    msg.info.assign("AWXCXLTSIXMRAPZQIJETYJV");

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
    msg.setTimeStamp(0.5375541932126406);
    msg.setSource(48025U);
    msg.setSourceEntity(136U);
    msg.setDestination(57866U);
    msg.setDestinationEntity(133U);
    msg.req_id = 12487U;
    msg.status = 47U;
    msg.info.assign("AHEOLLUZCQHDBNXZEYIYQUAIXGQYMBIZQVOABFAZMDPRWLUKHJVUOTPUZXJWGDNTQAIXKJZQRMGVUDCRCJKYQXNJRRNBMAJPRMPMLEBPANLWZFYXCNSQVSSBLWSWGGQHLSVAWENIHBXFKRHXEDGCGYKYGFKDIVHKGFTSOTYTOEQECSGSNIEMPZCWYPRADLSUKCMHWNVFJJFEVHOTCZBNO");

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
    msg.setTimeStamp(0.9893850719658218);
    msg.setSource(24156U);
    msg.setSourceEntity(59U);
    msg.setDestination(50635U);
    msg.setDestinationEntity(236U);
    msg.req_id = 24434U;
    msg.status = 13U;
    msg.info.assign("QRAUHGBGAQTKAERGPFIDEGSXAUFADXUZRILTCMBCQZGYQDMVZUVMFXCFGZASNEBUHECNVWRJDSMRHWKTNIAYFISGTNBPIJXOSWPZYUTRSYCUBKZKEOBVRHVKJJTFWZEKVNOOIDMYXGHCQLWFHOENSLVZPDOLEVBWXKDAESIHRUUMGHBRKRITYXZLLTGOPICJLHBAWQFTFNOMJXKJJENYPQYIDDYAHJCOPJ");

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
    msg.setTimeStamp(0.46098851512717587);
    msg.setSource(11361U);
    msg.setSourceEntity(94U);
    msg.setDestination(27060U);
    msg.setDestinationEntity(145U);
    msg.name.assign("WLOYKSZOMKHLVMO");
    msg.report_time = 0.9741031124645371;
    msg.medium = 75U;
    msg.lat = 0.3587558254008887;
    msg.lon = 0.20658412261491077;
    msg.depth = 0.616472498564905;
    msg.alt = 0.924992877154314;
    msg.sog = 0.06809120062425134;
    msg.cog = 0.3598257404760806;

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
    msg.setTimeStamp(0.5801478454571655);
    msg.setSource(49048U);
    msg.setSourceEntity(90U);
    msg.setDestination(61125U);
    msg.setDestinationEntity(158U);
    msg.name.assign("GKFDUNDVBGRFTSCFIHFWCMARXPBCZKONHJJKGVLYRMCEZIERRORXKXKGLABIBQOOMHHEUCLXNEDAQDRVYJWTKKNETDJTXCPXAPSEOLTEHIUNHTRBZAVLPIMJRCMWVKISNFGAGTOVVUJKOILGSWLFJULYUBZJMSMGTQNVXQDZXYSYYWWMWZFQAUHGHRNYPQ");
    msg.report_time = 0.15838542953124157;
    msg.medium = 239U;
    msg.lat = 0.17889612164967328;
    msg.lon = 0.0606437633059701;
    msg.depth = 0.5436920077478858;
    msg.alt = 0.3121348701402963;
    msg.sog = 0.22481789155346998;
    msg.cog = 0.6256173836818624;
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("HCQJANVBJOTEFUDWNAIBNJULPCYLMXEGZVOBWUKAFTETDPWRBQSKMHIVPLCZUYYOHKVMRQUMDNOJOXQRFGEYIYIZZGFVSEJFRHNHYXPNTXMMRGWHEDGDKYMFVRUMPBNNQYTJLZLCSTFQNNTVFQ");
    tmp_msg_0.htime = 0.35326690333481836;
    tmp_msg_0.lat = 0.8312803905566122;
    tmp_msg_0.lon = 0.8818265620444512;
    const signed char tmp_tmp_msg_0_0[] = {22, -10, 124, -16, 89, 70, 60, -126, -82, 74, 122, -85, -92, -5, -55, 81, 18, -112, 42, -80, 50, -74, -87, 94, 118, 109, -94, 4, 32, -95, -81, 95, -35, -42, 71, 98, 37, 70, -9, -91, -89, 13, 44, -44, 77, 41, -111, -19, -92, -89, -8, -72, 31, 18, 10, 69, 93, 13, -79, 19, -101, 62, -116, 119, 14, 35, -102, 95, -123, 0, 107, -77, -104, -119, 17, -71, 3, -94, -109, -109, -95, 79, -115, -116, 104, -50, 118, -34, -28, 101, -125, 36, 125, 120, 74, 72, 94, -125, -13, -13, 47, -45, -85, -81, 24, -93, -26, -117, -26, 118, -60, -42, 19, 61, -89, -125, 38, -55, 26, -107, -45, -83, -56, 22, 19, -120, 15, -119, -118, -8, 34, -92, -40, 86, -63, 56, -16, 43, 100, 25, 61, -111, 102, -119, 73, 13, 83, 119, 107, -9, 98, -119, -70, 10, 79, 59, 18, -86, -107, -15, -12, -110, -8, -15, -63, -98, -54, 124, 73, -38, -70, 31, -88, 110, 1, -43, 16, -84, 89, -1, -80, -89, -19, -5, -41, -54, -93, -79, -27, 59, 57, -102, -70, 34, -103, 62, -108, -65, -17, 112, 62, 19, 12, -69, -15, 50, 37, 34, -102, 47, 28, -48, 81, 68, -28, -4, -47, 64, -48, 114, -66, -99, 118, -119, -10, -7, 51, -61, 21, 93, 36, 35, -45, 64};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9637219424302998);
    msg.setSource(40885U);
    msg.setSourceEntity(167U);
    msg.setDestination(59940U);
    msg.setDestinationEntity(55U);
    msg.name.assign("PXQOFROWYZYDXIBLYUUDAAQHCTIQJEBZHKJCZTSFTEHRIWNVGBGYIAKFTOTKVHXPEVQDAKKCEAMWIOMBRPGUUDTPNASGFKPCDXSOZGQXLMJOTWXYKKVZLEVSCXCJWOECRIEHPHJCGDTWOJXSSIUNDQLTGFMSBEUZVUVTXWWIDJKISJEYFHBRIGVQJYDOMSRPMNWFYGDAECMMHUNNHLZWABKAHVFRPSXLAYRBNQUNCFMRLZJLNMPG");
    msg.report_time = 0.9405334583585551;
    msg.medium = 207U;
    msg.lat = 0.474131236397348;
    msg.lon = 0.8835461182700906;
    msg.depth = 0.04144006871784389;
    msg.alt = 0.5182306208648166;
    msg.sog = 0.4551599041508996;
    msg.cog = 0.8236250534493815;

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
    msg.setTimeStamp(0.016663656371631475);
    msg.setSource(39965U);
    msg.setSourceEntity(65U);
    msg.setDestination(16058U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.7997747849140966);
    msg.setSource(32807U);
    msg.setSourceEntity(11U);
    msg.setDestination(46800U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.8735774888616028);
    msg.setSource(4288U);
    msg.setSourceEntity(68U);
    msg.setDestination(51701U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.18175854889274967);
    msg.setSource(48949U);
    msg.setSourceEntity(27U);
    msg.setDestination(42370U);
    msg.setDestinationEntity(99U);
    msg.plan_id.assign("SILTDNKAEATOBBFXNJHGSWFMQMFSTKSFKRVOISUINYKCDBJAVXKLRKCTQAPWHUGKJWGCTJKNMZYDJOZPZQWZCWBJSYCGXOUPCFWLUQSYEJFCUUDQAFBRDOHMPCORKWTBEUYUEXMDVDZVUEQLX");
    msg.description.assign("YWLURAEAMYPHDWTUYFJMSARDHKMEGQENZILNNOSVERVDTOYSPLUUALCKHJCGVJOTKDHOOJDWWSENZGDGCTJFXDJQZBFVIUBXLGZNWIJAOGUHOLFXUBXTMVLKEIBKIIPNNQQCSPHMSCWEQVYGZPQFFGQPBWUNSBQLDRRLZFGEMAVKQTZAMWZCXXYMYIBACCCHBSRBCPNUZRYZPMXYIIIRPVFOUEFATLAOREQWHVTKXYXKJKSVHHK");
    msg.vnamespace.assign("WMJMERDQOVEQUPEMJBGRACQZVFMWXOHKBTOHYROUIINJYZPVNTSXZOGTALFVGCCROGUTWYVTAP");
    msg.start_man_id.assign("HGZNAQUZOKVLBLGQS");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("FHAWEREECCRJBQMXCOKNOVQLZRLMNDERIXKICIVHIUSQTBROQEOWAQZMDNPOSBFVQWDRLHOWYBOZJLUFGNXIUNSNXYOIWCNJIHZEXICFDVLYPHQQQVJPTAOV");
    tmp_msg_0.dest_man.assign("LLALJXTNCNKJMURWCMEFEWVIDEYRZCKRMGPBSJIIPIJVHLFWSNDAJAOZKAZQOYUEBHCIQWSSQITHUVJPGXOQWUXGJSAFAUYNJGRSDCALCWUDVTGBMTOFWTHWGSVYNRVDXGVERBBPHEXBVHTHNABQFWTZLMVGSQMADKQKZGIVYLRYILUQWTZGPXZFXQTKYBCKUZNEFMMRCOYHYSZNJKFXFXOXRDDIONPKDHHFUSLBPBIEOOAECPMUDEPYT");
    tmp_msg_0.conditions.assign("LMGKGYSETEHVFXDSEULRPBKGYEZPIQQCJWVEGBCEOMGYMPXWSJFDFKFHFOKKZAWPDFFJ");
    IMC::Frequency tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.13071528277573863;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::VerticalProfile tmp_msg_1;
    tmp_msg_1.parameter = 228U;
    tmp_msg_1.numsamples = 142U;
    IMC::ProfileSample tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.depth = 14991U;
    tmp_tmp_msg_1_0.avg = 0.07551161994333255;
    tmp_msg_1.samples.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.lat = 0.3457556742424799;
    tmp_msg_1.lon = 0.5480301008686352;
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
    msg.setTimeStamp(0.9016873450917507);
    msg.setSource(13658U);
    msg.setSourceEntity(79U);
    msg.setDestination(60391U);
    msg.setDestinationEntity(125U);
    msg.plan_id.assign("EGNEXGQFSYJPTCOA");
    msg.description.assign("HGPPHRBBXYFDYYUJZNRCVAFJEDNLTLHEFCUWPMGVTTOYPWLHDZTBQRQXTYZIPVAILDUMKNV");
    msg.vnamespace.assign("KDMRSKTKJPUJZRBJSIXJDXFIWQUBHCEEXTDHFGUYKPGBOORWETMFDCHARVMNTRWLMGOQASIJOMNMWOJBLFVGMOTEQTKSLALMYQSVCNXIAIASEKXXUPJTONDNCBVAIRZZAFBIZYEVTSLRNVQYGJPZMGNHEWHNYJCBZUFDLPYDQDA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VGFELQCJZPSNSXALFTRMYZTCIUOYAOMQYHMRDXKBRHWRRGSTVOMEZQJBZDPLTUIKFBBFGDMZSUOXKNKWJDGGL");
    tmp_msg_0.value.assign("AQSEULIBOYQBCJTCYNWBNNULTNWIWHXBRCOXVOZFUNRUFWAGZNBHIUXIODIAFHZYYTEVVHRCKNUGDALQFMBSEDVGOHTUWMGLRQPJLFKJRFUQDMLCQRZSIKFPAEXPJOYBUVSMKOTGLXVCOMHSBIPTKSKPGTDJVDPCHXOGJTNRZGNQBSCQZSHEEPEWJZWWQAIKMPDTKTMEXZVDYPCPLRHGQZWALGMSYCUEYRVIIKFYBJFAOD");
    tmp_msg_0.type = 8U;
    tmp_msg_0.access = 200U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MHSYCESKHVGFABUZPTMKBDEOAZNLPUFFCZFLPBTYHEJRUJXDYCXIHKHJHLKMCTQXVVSQGSXYGZB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("CTRTLBWBODQCRQHEODXNYGPIIHGCYXZYNSWTLHQRDZEQVUKPKAQINNBEWUMWMREZHIVHTAPTFDXYXCZMNFDPFCYLHVYRQNXEPAFQLCJPSSAZKSAKBTIYNOJKOJGOOEWPRVJBGXFZGMUUTCZDHIATGFUUBSSKNUJLAXJLFCIPVNCLZDIWJTMAQSGHTWXHIVCEK");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::BeamConfig tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.beam_width = 0.3061856063350289;
    tmp_tmp_msg_1_1.beam_height = 0.22097095987910664;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("VSZKGFONTJKVEPODTAWBVPJBZIBMMHNDEQYTWPRXUSQVCIYGRBGDMXHJPJTRIAMKHWIGCFOASAXBTJEUODIUROUCCXUTYJPWYKYHHSXLLSCIBNMRECZMAGLORMXONNWNJUFXDVFTGHPFYLTQCMZSHNBEL");
    tmp_msg_2.dest_man.assign("TKOWVMOQYFJTLWVZNHGQSPQLW");
    tmp_msg_2.conditions.assign("URMVZKPIGDYYRBDAGZFVFSXMGKOPKNCDORIXMUWSFSWQAHFTOYLFYONPCALUIQWTBWQKFGPRVTJSLEJMOTORSGNHZVAUQVQOZFGZKDVTMAGRAMPPXDVZYCLSDC");
    IMC::SetControlSurfaceDeflection tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.id = 179U;
    tmp_tmp_msg_2_0.angle = 0.7340220340793272;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.5275417506630973);
    msg.setSource(35788U);
    msg.setSourceEntity(178U);
    msg.setDestination(4589U);
    msg.setDestinationEntity(214U);
    msg.plan_id.assign("QQSIKZNCQPXWBERFFQUJBXHWDFLZCTCOYIPUGKFDDIXZPAJNCLRXPVIRTMUHSBFOBJQYWTDTUL");
    msg.description.assign("QHHGADCSWWUKDJXMSAYNSWHPFYSDQJVBVPKI");
    msg.vnamespace.assign("CUCBVJUYMVNFMWMULTOPVBGORPNOKSUHGPFJTKYYLRQMIKCFDIDJRASXMNLSAZIVGXDQGAJZFYRGLYKJCIRFVQNFQOGBQRUNOZWNWRCQSQBLMHWYAUHGZVVWUAISDCTU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZIPXHNQTYKLJJAWOYNMDGEDZPRSNZUDZHIKGZUWPTRSIARGPDQFOPCASFAICZWYJJBENKSJIXQXSWVLUAQBIDQAVJFNCXEPONNSYOVHUCHAVGVUKAUCOTNRXQLMTXWGMVCSLIHKYGIMKJEJBQXQISDEKHTVMBACHRFYZUGBFXTFWENVGYETFYDDFHUWTCOMFHKLQBGMCLLAPNCKPMEVV");
    tmp_msg_0.value.assign("CHYUUHXBTBDIRJUMLGTMFFVJNNRGTYMOLPYNKDOLZAUKIFWBOWISTJEZYOMALSKNVTMDFEELMHGCMTPYPXYTHIQBWFOQPWNBRXKBRHTIEWPEFPKSBGRQLFAHZTIVSVZACPARZNVKDJGGKXQHDAWNMWRRZCIYJJPVQUNCEXCWVOUKGPLOVJTASAUFVGXDBZUSGFQOXLFGCNDDWCZQPQKSBCHVEUUMANDYSXDRQJBIJAEYRWQ");
    tmp_msg_0.type = 131U;
    tmp_msg_0.access = 211U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KVREKKMJXTOETZRFSQQRNHGKREJ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("IRHUNLGGXHFPYWRHMZXYZXGQQKXBLBUMSETYBIBOJOURKJYJJWAZTTUQWDSRKCHCDRFZMYHMJANWVXSVCCQMLMORALMSBDJUZQPWHRCKYAVGKUCQBSENI");
    tmp_msg_1.dest_man.assign("NGQXFVTUCCKPAEEDNERSZFATSCZNLUCBRYNYLYSFQAECSDWGWKIQMBXUCHNURIOLUTZIWLUADXHXOKZFFZMSKCVGMTBBUKJIWZXHACHGCYSKYNOMEOA");
    tmp_msg_1.conditions.assign("UNLBZVULKSEZOCLATDGNVCTDQZQYVCUNPEOJQLLJIMPAZRBNZGIHVOWGHAPMOTTAHAXVDDNPFSUVMNYKQMZKXEBHOKETYGGJOXSBHUBRCEMEABPDHVAYBBIFGJFT");
    IMC::PlanManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.maneuver_id.assign("SQRAFFKSTPXGOPGBJJDXOXOSQVKFPKXTQUDHSRERWNZIASFHZTQRZMDEJWXCDEGZMQEASCSQBARXYLIGVWJRWPJAGLFQKLPHZEKLFOYRESNFMVYQUOHGDYXHIGQPHNUTKCTZNCVYTBVOTBDLUWWAIMKWIXMPBMYJUWZANLNIQEUJCMWVPJERDHZUIHBKTVPGOJMCFUBYNIIUNCFAHADBEXHBESYYLAVGRXINZ");
    IMC::PopUp tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.timeout = 51747U;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.7568627366408277;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.5530281573948991;
    tmp_tmp_tmp_msg_1_0_0.z = 0.5134494108156481;
    tmp_tmp_tmp_msg_1_0_0.z_units = 15U;
    tmp_tmp_tmp_msg_1_0_0.speed = 0.5993077016856493;
    tmp_tmp_tmp_msg_1_0_0.speed_units = 231U;
    tmp_tmp_tmp_msg_1_0_0.duration = 6550U;
    tmp_tmp_tmp_msg_1_0_0.radius = 0.8346417082482315;
    tmp_tmp_tmp_msg_1_0_0.flags = 99U;
    tmp_tmp_tmp_msg_1_0_0.custom.assign("KFDXBSCRPYQRVLTFEWZVXWCVLNDLZEJXYCMGMTCSZMIRUFRUKDJKJCKGUJRF");
    tmp_tmp_msg_1_0.data.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::GroupMembershipState tmp_msg_2;
    tmp_msg_2.group_name.assign("HLPYVCHTSJQYTNKCWJMTSTYSFKDRWIUDYZKFTPQCIALKBGQ");
    tmp_msg_2.links = 1968141480U;
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
    msg.setTimeStamp(0.4348741649295186);
    msg.setSource(15551U);
    msg.setSourceEntity(36U);
    msg.setDestination(56763U);
    msg.setDestinationEntity(198U);
    msg.maneuver_id.assign("UCBKHHRLVIMPVGCCOJFYYGZXDEAQCOHIALVLFSHFOIXYQSLNNNALWKBRVHUNBTUDJEQRTOETGZVRWNKUXJGXLGBIKOFYMBKRUSTRFIVKWAAMJDCLMKBSXXOSWMBUYDZMJRFXCJGDLSKUAQXIWSEPOIVDPJUAXTBOKZY");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 48406U;
    tmp_msg_0.lat = 0.12762303342220405;
    tmp_msg_0.lon = 0.792563476576888;
    tmp_msg_0.z = 0.15849288123824412;
    tmp_msg_0.z_units = 157U;
    tmp_msg_0.speed = 0.7540881044484158;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.bearing = 0.08416360444969473;
    tmp_msg_0.width = 0.4327547125280976;
    tmp_msg_0.direction = 7U;
    tmp_msg_0.custom.assign("IMIRHKEAKGWATDGHEPAROMLURSXWFDFRYXICTTZJONWZPBLKBVBNIMBEUENZGKBHDFPUPVUEZVRJTOQKCLXYWNQXWOOFK");
    msg.data.set(tmp_msg_0);
    IMC::Phycocyanin tmp_msg_1;
    tmp_msg_1.value = 0.057701087256405215;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5544145344455983);
    msg.setSource(13414U);
    msg.setSourceEntity(68U);
    msg.setDestination(54313U);
    msg.setDestinationEntity(124U);
    msg.maneuver_id.assign("SDEEJGKRPHOWJZPNLOSODNEQPXTASTCUFMSEIZSGAFRKWEBVKHITVXRJCBAVCCBZYQRFADYXKJLNCTHXSXQROGGWAUZPLTLQKPYWUOUFWNNVIRALMMZMEWFNQGZMVTGRGAKI");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.8315770534119561;
    tmp_msg_0.lon = 0.10913211603618023;
    tmp_msg_0.z = 0.5667139336490631;
    tmp_msg_0.z_units = 86U;
    tmp_msg_0.speed = 0.10684247591058216;
    tmp_msg_0.speed_units = 199U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8604970005088272;
    tmp_tmp_msg_0_0.y = 0.2947775023911702;
    tmp_tmp_msg_0_0.z = 0.9035311411133045;
    tmp_tmp_msg_0_0.t = 0.7094046215243203;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 61404U;
    tmp_tmp_msg_0_1.off_x = 0.2225698333212398;
    tmp_tmp_msg_0_1.off_y = 0.6977729635115292;
    tmp_tmp_msg_0_1.off_z = 0.8950946049999916;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.45935592426988725;
    tmp_msg_0.custom.assign("GFIAYTJCOEUGQORVVAAMHQGERMEMZYBNKUQEPXTGRDCVONPFMWCFDLWPRUIRSNKCKGQXLNVCLLBKMQXIQQTQYIVSOLFZYHURAYZFAYKAZXUXKZJDJJIUXNTGCTUGHSYEWMHVIZHDWJHBNWMSDBBGDMVLOCUGCHJJNUIOFSTPLSTIYWTCE");
    msg.data.set(tmp_msg_0);
    IMC::TrexPlan tmp_msg_1;
    tmp_msg_1.reactor.assign("FYMOQBUQWRFYFXUYIIZDA");
    IMC::TrexToken tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeline.assign("ALZUFSYXPLHEYEHNVCKFWRWHDKKUDWGFPVJQMVXZWINZZRNVSBLXMEYWIFICLPPTZMYOCYNRAPPQTJCYDHPINEOCUIDJIQXYOURVMJUKIBWKBRSJBVZVMHPTZSTGFJBDMBKDGUOJSLQSFEMETFAGAWAIKFRBDCVETOHONICGUQJNQRKDGAEXJGYTHXAVLLSZDRQLXLTYHALSTFNQGKTZQXOSHSQMUGUEWPZBNVCCUDXMOFNXGR");
    tmp_tmp_msg_1_0.predicate.assign("EDJKZFFOWOXIYVIVKEJBJDVDFZLQTKCFPAIYRHHQ");
    tmp_msg_1.tokens.push_back(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.6011977512954286);
    msg.setSource(20419U);
    msg.setSourceEntity(177U);
    msg.setDestination(48057U);
    msg.setDestinationEntity(87U);
    msg.maneuver_id.assign("UXVNLHVDRSCRYUBIJAWPQWLKO");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 47151U;
    tmp_msg_0.name.assign("ARTBQSBIMFKJTHWIYUTIDNMPHHNTNBHQPMFTHLAGUUAONCQFETKHOKQDOEWLUOXOHOFEOFLYQMNYZUMJXBKGXRKBFUYLGUNRJACYVWAWFXWSJZPIGXVMVASPNKJLRVSQQRIIYDADLBIVZZPVRHSMVSEMZKBDVADEDXQEGDGCNKEQWRCRQRBTISXPIWJFEFZLJVSLRWCSZCVFAG");
    tmp_msg_0.custom.assign("QVQHHJZRATPTDIWIMTHBNBVZAQDVNVZYLKQDILNBINMSWUFTJLFJJCBCHUXYGXKOQFUKYWQMEWZJGYEHMZHBRDTKVARBIEUSCVYJFY");
    msg.data.set(tmp_msg_0);
    IMC::AutonomousSection tmp_msg_1;
    tmp_msg_1.lat = 0.656834844414902;
    tmp_msg_1.lon = 0.7922213710117062;
    tmp_msg_1.speed = 0.34743152529561727;
    tmp_msg_1.speed_units = 119U;
    tmp_msg_1.limits = 142U;
    tmp_msg_1.max_depth = 0.6593718322024672;
    tmp_msg_1.min_alt = 0.8939804507427126;
    tmp_msg_1.time_limit = 0.13848370829484313;
    tmp_msg_1.controller.assign("LQHZPFGURCZEYYQOBJYDFOELJIIMVHWICTKWKNLZ");
    tmp_msg_1.custom.assign("UJYNYRWZIZTGWCAJHTIKEMZAJMFSWVOJTTYFPEVKDAGCXEVLEAWOUVBBOCGKZNGQMXYHSUITRQLNKDOFQSIXWJJZCYYBNZPKXQVTICTFQQGWIOHKVOUCMHLGYWCJRCHHONZIDEFLLVGCMJUPRKPTYKEYSNULYXPKMCDDIEFSPDNHNSAKLZMHPBUHNRUE");
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
    msg.setTimeStamp(0.7970417020863674);
    msg.setSource(59082U);
    msg.setSourceEntity(199U);
    msg.setDestination(2695U);
    msg.setDestinationEntity(5U);
    msg.source_man.assign("HQKPUKRUFCQVRANESAXIAGQJXCFGXIOGYGDQADNLAMJJKNTOLD");
    msg.dest_man.assign("KNSXCAQYEMPGXVCLUKERBAKFBCBETPKTURRINUQSRJXMEJXCEJSODZCARYFLMMCUCXMUADAHJPVEVOFLZEAPDBGXZNCUUWNQRADWWJKPDAKGVLSDIUEMYYSHAFLDLWNGFIEBWOOSPWXFPSHTTRQZVDVQOWHIHJTDHBXILMXXZPHHBVFQJQVTILSZYFKNJPWWNP");
    msg.conditions.assign("KWEDHLISWXUXMZJWYIQBEROVTEWGCHLJWIWVADFSUAMFPPBPBLNLXRVZJMCSPRULDDIYVCQHMXXBYBGFVVHSUXZNJAAXKTNMNVKQIHSFONPSFOHNJTRVEPRKADIDOKBXRLTOBVMKCBYDINWOETKCUMZJEWLD");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 172U;
    tmp_msg_0.entities.assign("DVLBRGGYKDYFMKTKQS");
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
    msg.setTimeStamp(0.0021439035090132785);
    msg.setSource(60641U);
    msg.setSourceEntity(174U);
    msg.setDestination(52109U);
    msg.setDestinationEntity(242U);
    msg.source_man.assign("TTQVBBEVWAUACCGUVCCUYMFQGYBQNJSMZAPWDBWIARHMXBOIRLZHFWNEOTIJ");
    msg.dest_man.assign("IXQZKGIPVPDALVYHWVUFBXNMUJXIRSYPDRBNGWASLRJCWMRVZZBCXLTC");
    msg.conditions.assign("JSBXPTFOUZABRDPCJRSZPCVKXGLRNGQQEPHNBIOBHGNUKNMGYEAXBXOJRTAMYMYSIAJOXYQOQQDCXEPELPHSKINKAEDDYOZS");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9908928598756799;
    tmp_msg_0.lon = 0.2011708523004464;
    tmp_msg_0.height = 0.25007451605744324;
    tmp_msg_0.x = 0.8146234644782855;
    tmp_msg_0.y = 0.9726924576019865;
    tmp_msg_0.z = 0.5569666977562967;
    tmp_msg_0.phi = 0.8615084714141945;
    tmp_msg_0.theta = 0.7507389218293399;
    tmp_msg_0.psi = 0.6919986724256036;
    tmp_msg_0.u = 0.6796101314220637;
    tmp_msg_0.v = 0.40874108822538135;
    tmp_msg_0.w = 0.429232077379359;
    tmp_msg_0.vx = 0.28256619377946135;
    tmp_msg_0.vy = 0.16631618156907357;
    tmp_msg_0.vz = 0.9074357033121015;
    tmp_msg_0.p = 0.6985834409791172;
    tmp_msg_0.q = 0.05514738690125065;
    tmp_msg_0.r = 0.7389249003076752;
    tmp_msg_0.depth = 0.13192948915344127;
    tmp_msg_0.alt = 0.41166389447604645;
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
    msg.setTimeStamp(0.5134780513391506);
    msg.setSource(86U);
    msg.setSourceEntity(2U);
    msg.setDestination(15057U);
    msg.setDestinationEntity(122U);
    msg.source_man.assign("EZRKDZPNPSTZVCAMXKDOGRODMLQGBQSWSJFKNGERNSFKTRWBNIQAVSKPCVEUFSPYXCOCLMQWWJOJOTDMIQUPHXUPEEBKWBJCHFGBICOEMGYZHKGXAGLDATEAMLSWCZNBPEWTOTXTELVZXZRYBCLWZPVQFGFBFTCIGCQQNUDVOKVUNHYMRXDUJAYESVXYYILXOJA");
    msg.dest_man.assign("OTLPZHEPNXLHOJQYNBJQGIZHIHWUPYSQOXFNWCKMTARCAMAKQITRSRVEJSZGCPYRDCUMCORGOEUIXJFUFESYVFGXQPAUQWCKBMLLLCTDMIAKNDKKGGHVBDATJLBJZHJ");
    msg.conditions.assign("TSQOIGFESKXAANMRQCQYXPVKNTHJRVQJVYOXLQQDFXTUKBPSHJYJKRNHXWJSRTRVATEVMURWDKMNBGEHCEYBYAIYIKKPGREJZDIPMLUEMFTQMOCDEIRFXXOUWAZVXDYVIJUZPUNWHSWFAJZLKPOJEWICDZZOZIDGCLNMWCOSNQLEQLCNAOLBGTPHF");

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
    msg.setTimeStamp(0.2647397735627317);
    msg.setSource(18404U);
    msg.setSourceEntity(203U);
    msg.setDestination(3938U);
    msg.setDestinationEntity(157U);
    msg.command = 56U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SMUDJWIIGPOJUIIWOETGQQTECPMYSAIPAFNOBZMFLRYCKTMQYWVSTZMPGNSBNEILKCRUKPZNBKJJVZMCUCUIHHAVFXKFLOIKYIXRAVBZUJMXBPUGQCZQNQDRJOEDZITDMARLKSPGWAOLEXQLRGCXHCAYFDH");
    tmp_msg_0.description.assign("BUOAUMZNOENMCQYAXVWPCIOZVLVWWATMFKHBUBHESYVHZXBGVWQHXGEIWDSTTPCHKOODMIPMUYCGYJWBVARCJLQWRJVNSIPORNUJXDAMQAPLASSLLZDKGNOTNPEUZMEMYUQSPTQOILZEVERCHMXQZRZUFXABEFTIYKBVPOSXWCJYCBEHNYRIFSRDDKEFVIKWSXB");
    tmp_msg_0.vnamespace.assign("JRHWENUFRGZUSVLHYYEKIOMRQPBEEIHPAAOSWLAUGXJJNQRKBPPGOOVYBCHGBRTDOSCIUUMEFIUUNDJIBYZOQCFWYSKKCBWTNSMGWQIZGVKTXWGRIEXNSTNSFRPQCOUZLXDZARNMBVETMAVAQKZRYLYWPXLKTXHBDCMSNQDZLWAOZGMHICAVLRQBIDJJCQSHUSHAYGPDJHOFDPXFNBLVJWZDOTAXVPKHFZWCMTGLYKENVMKVTECYIPEFT");
    tmp_msg_0.start_man_id.assign("UJUWYXXZCYSDOYBGYLVBEUMXISSEHNHBDWKPLPGFGOJHACRCJWKXFEKPRSZHTWDGSNSIAMDPSCUKIOFQZUCMQXLVKBKZSOWVRJAQBPNRUAJACYMZLXTGLHRXGWVPHCRWNQUVDQNWRXIONCWYACBEYLKR");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("SQAEKFIMVHCRPFRWPYHENBCJKSMMJIBOKDWOWLTIGPISKXYUOGAFBUHKQKOOVXVNCQNWIBAQTLHEFTCMAWULVIHBCIZWBVVDFZQRGJJYKMVLAVZTFXQFZDSREMSNMDFTAQWTAOYLXDSNBSCGGRKLZPLFIZYMTGHQ");
    tmp_tmp_msg_0_0.dest_man.assign("ORDPLOWZNQHIICPXMHYWQAOSRCUNCYUFIYKEQYYXBDJZXPAULBSANDIBKZYIMOVSFADPQIDEIGRDSWJPJWNTEYUNOWZUPUNAZBIHCJMATQRQQVTYVNTRGOKAJSQHCEXROEWMJMXKXFDOHLJXLHYPVFQDCBNVFFZTLOX");
    tmp_tmp_msg_0_0.conditions.assign("QQATERIKYMSVJPUOUKOZYWAQILDXPOCTUQEECLEUDFLJZZEQKMVSTMVTUNHQNFWICRWIRWRFPK");
    IMC::FormationEval tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.err_mean = 0.7655084442401942;
    tmp_tmp_tmp_msg_0_0_0.dist_min_abs = 0.43237003330209567;
    tmp_tmp_tmp_msg_0_0_0.dist_min_mean = 0.776930494738568;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Displacement tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.8468929128815672;
    tmp_tmp_msg_0_1.x = 0.2925789519750457;
    tmp_tmp_msg_0_1.y = 0.7414404242102902;
    tmp_tmp_msg_0_1.z = 0.5522837016980645;
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
    msg.setTimeStamp(0.45734681424164114);
    msg.setSource(59187U);
    msg.setSourceEntity(30U);
    msg.setDestination(17900U);
    msg.setDestinationEntity(120U);
    msg.command = 211U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DFMBPIYPQRKJWUYTLRGEUSWTJSLUGRYIDPXEAGWAKFBAOMOZTKLISQS");
    tmp_msg_0.description.assign("YQDRTABMCXXOFLUIMKPDPVTBTWJYKVQFPRFUGILOZCXDZGIJSUIHWKSXCWJGNWWOSOZXASPKJBQKUTEQLQQLEAEQVVYMRILGXJJSKAOJHNACNKCOFTGHCVLEPRBKDWSGVYRIQNWQIWCDHYPRZFPPDRLUVFUDGFKQUAXCBZNHOPRHZNAFHHZZUYIGSKDCMDLNSRLATMEOEVABYBJIRMVOWGMBNNAZBJEIXMNFSSJOHWBHXGTY");
    tmp_msg_0.vnamespace.assign("EDLIIPCAIHEQAVBCTABNMTDYAXHAPSWCKIMWASUOQPIQUHFWNYPWDYWNYKOJZKRTLZMELXYQSOGJVVZGFFWLVLONU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MGFBLYNMDXHEALVXZWAQFZHIOZFSLVRNGAONDEQKAYFQIQURRTWEOORTPSLIJFDOKWRQTPLDANBTLYEJFXGXVUNMXKPAXJVOIWPZRHK");
    tmp_tmp_msg_0_0.value.assign("VKJXMWMHKXNHKFARMZHDVKWETLFMCGQYBOHQCAUWNOOIKQLONCELADCMCYIDMTQOIJMBRHFWPVLJNNYBEAKOUZMPVSRALXQSGSJDYWWBRNTEZACKIIQZFWPUUUSODAEOKILNYQEJRJUYBKHXRLRPIG");
    tmp_tmp_msg_0_0.type = 31U;
    tmp_tmp_msg_0_0.access = 79U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LLGPPTYKXRACQEHQZRAWORHNYWYSONMJWCVUHGTMINDFZFTSKAQTWENJBXYIHBODDGYJPRJYDENGLFMYHLXQIYFCUATNTBSGTRPQVOUBTBDOHMULQLHBYMQBKVJIPENNBAUTGMVFDS");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WXKGSRMPOHDZJCSXIMSILWEHZIMPRFHOKGZGFOVBATPFLZNYSFJHUHVUVMCNKSXYKETSNQLAICBQMJSDEJWJUTWWUEOQAXVORCPVQBAABARMSVCINXGPYBGQJKTNZVYZVXLLWPKDOTDNAYRRHHPWAERNBPITSENOXYZCWFJZDXUFWDHNISGTMLFEAIUQRBRWKYQJTAFQDELFPOHLGIUCOZM");
    tmp_tmp_msg_0_1.dest_man.assign("IRQVAXFLTRCZRUVKXASAYMQOKHWQZDEYORUYBDIHMHPJQUNNAXBTOVGOQHRUCZVVVVIDJYQBCSIGUSMLDKZTGXTMFBIEYWCZWRWLGPESMJGKHFBCPXFCYCVNLBPOXNIFLDGCQFSHHZMLDEHOHVICTEWQZFCZYLPBJMNKYNDQXOYTYEVLJKOIORIXNJLPQTGNNHAJMWJEJAWUWSPXDUAZEPBAKIWRSTUWK");
    tmp_tmp_msg_0_1.conditions.assign("WTKBRPSGXIITNBYNYEHXAHYSKPZEKPBIOFODZDRUNLAYVBJIMCCRHIVYQDZDO");
    IMC::CompressedImage tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.frameid = 86U;
    const signed char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {-79, 111, -10, -91, 31, 18, 78, -82, 103, 8, -100, 88, 103, -10, 104, -77, -58, -77, -113, -63, 53, 40, -87, -99, -51, 37, 37, 79, -87, 24, -74, 97, -59, -98, 8, 120, -121, -53, 124, 15, -122, 80, 86, 0, -51, -54, 36, 36, 108, -83, 66, 91, -41, -65, -68, -35, 96, -46, 104, -120, 44, -6, 45, 50, 58, -30, -128, 123, 118, -127, -51, -46, -50, 60, 5, 88, 16, 70, -111, -7, -40, 68, -87, -125, -5, -71, 49, -21, -107, 45, -53, -96, 50, 85, 18, -114, -110, 104, 78, -87, 123, -61, -108, 77, -61, -128, -42, -94, -104, -33, 6, 52, -93, 34, -8, -81, -67, 89, 59, -63, -64, -81, -77, -67, -52, -111, 9, -21, 111, 28, -102, -85, 80, -71, 1, 18, 96, -126, -55, -97, 35, 20, 25, -110, 10, 26, 78, -113, 100, 43, 8, -114, -29, 114, -26, -65, 90, -53, -66, -28, 92, -33, -23, -106, -85, -35, -12, 17, 78, -81, -115, -9, 118, -44, 75, -31, -87, 23, 88, -84, -128, 20, -1, -28, 20, 63, 116, -53, 34, 2, -93, -97, 72, -57, 46, 112, 49, 82, 71, -62, 108, 41, 111, -68, 17, -18, -93, 22, 75, 63, 115, 44, 98, 115, -92, 90, -23, 68, -102, 125, -70, 75, -49, -94, 66, 17, -48, 117, -32, -24, -26, 93, 88, -31, 25, -61, -111, -4, 40, -6, 81, 11, 44, 53, 68, 58, 114, 52, -27, -119, -89, 29};
    tmp_tmp_tmp_msg_0_1_0.data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.6947939713378477);
    msg.setSource(56529U);
    msg.setSourceEntity(213U);
    msg.setDestination(50612U);
    msg.setDestinationEntity(67U);
    msg.command = 184U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KFDUBJGJLQXCZCBUOXVSKNNOEAMROVJVMQSHRRPVKILBXBYCCKQWWYTEYXCJDQCXWNOMBEMDUXUQJHSJOPXGTBFYUMNAEOAXZWPBILLYLFPLJNNRCEGLAZATACWGQLKDUGEPTPIJQRSOMEZEUBQYFTISPJFFZVISNFFCGADIHRUYWMRHVTAKOUMIBWFZPJXGNNAKZSHDRYNTZXTHBUGGKTHVHDISDQMTPHLYPIALEDORZWZRVYCIHWKOFKSS");
    tmp_msg_0.description.assign("YTQDDMDJCQPGQWRKTOLZDVKKXZLYLAGLSYRTBKGTMTMEEGJBUZNHJORNWYUXKIAWBEFTZPRBLNLRQXHJDTAFFLCSGDJSHDXPMFJELSIYRQSXXEOJHAUIBUHYWMVNGNVNCWOCPDARXMQVVBZQCWECBVPKITYBSUMSZJPAZUFCQHYMXFFIWAAHOLNRHONVCWJIBKRDZEXMCNAVNWITLZ");
    tmp_msg_0.vnamespace.assign("RWKNDTOOXJWBSOKLLPUFSRMOVRTIUDMPNVNBAEWBCQLVUBRVICWIAWLKSXRYVWAARSFYHGQWKCPNYYETNZHIFEPXSJWJLLGASDKHDZXELMPFQUEWIHEIRRMKQRNSBLZYUDPAFPGMQDJLGKTIEKNKBTNJKQCDIVEFBQTTLYCJUDPYZOVCSOHFZEYDSOIEPGG");
    tmp_msg_0.start_man_id.assign("GVZKIBJUEDGUPUDRXKFAGNTTQQKYLAORQIJLHYWFGQFNNKBDUQUSYKZJXEBLUSSJURKXHMPRFOKIMNJRVCBQXOBDPWTVPPLJGRWABYPVODDKHYESTIP");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("XLYFSJYTIEJCKFQIYUANFRFGKDYMZGNRSJWRIMCDFXQQNVMIUUBPOMNVJPEODJBUBDCOHLLHRWBYREWLOHUFVOSIXWCECLBWDYVQLGHSEMJNHHMZMVYOSEDIAJSEMKGBRPZIWVTUCPJORKYZCPFGXASFQGBXHKAFNPROVXUTAZIQCQLCVZLTZIAFGBBUKDGXXJSNCSKOZTHMDRAQPTGWDGABPXWIKEALNHKDVZSTAJKMWVTW");
    tmp_tmp_msg_0_0.dest_man.assign("WUOLKNXSQJOFNBMTADMYOEFUKGRJHOWENDINGGSDOLARNQNKHEGZDFWAWTDWJWWPRTFQKDQJOBYSWAZATHRDBXEYECRZAESB");
    tmp_tmp_msg_0_0.conditions.assign("DXEYZDVXIVUGTNJWLHQPGFYZOTUXKLOPOSBMDGHOGAGEUJXEPCTIPKGNNCOTZPNSATFFYGIAKIPHUWRILARQSOOXKSZEJIDNNJVY");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::UsblFixExtended tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.target.assign("PLHUBSAAOSUSPTAPZFYHYESQK");
    tmp_tmp_msg_0_1.lat = 0.8666195975723188;
    tmp_tmp_msg_0_1.lon = 0.18002045283146018;
    tmp_tmp_msg_0_1.z_units = 124U;
    tmp_tmp_msg_0_1.z = 0.5426838030340481;
    tmp_tmp_msg_0_1.accuracy = 0.5522461422972746;
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
    msg.setTimeStamp(0.835324789662431);
    msg.setSource(46736U);
    msg.setSourceEntity(147U);
    msg.setDestination(57627U);
    msg.setDestinationEntity(226U);
    msg.state = 147U;
    msg.plan_id.assign("YQQWABJQGCSWVSKUJNBCOQRWTWIFIVICNLPZUTOBUTAJZLGATTEXDDRLRCLMDDOEPZYSVFUKUMXPLFQYSIAGHSKZXRGFCKOKXKBCAGMIYPRTGSWAHETF");
    msg.comm_level = 151U;

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
    msg.setTimeStamp(0.9066963832551843);
    msg.setSource(57389U);
    msg.setSourceEntity(248U);
    msg.setDestination(37794U);
    msg.setDestinationEntity(233U);
    msg.state = 111U;
    msg.plan_id.assign("QFIPCSCEZJFPKPHYGAAGMWUMVWWOLETRALTVWWDYCHFLUNIQFXMZPYLLQRRKNBEJZSMKTLIGDFYNHGXFTVTJHIXXQQSGPESBDQZZBJNYJUCNOTROBFKULKLCROSIPFZTRGONKRJEBEBKWCEWSPJONBNOQVIUDHTMRPOYLXVQDADIWVPZAGURAXYBFARKVWHAUCOXZSSDVTMMJEEDGYIKCAJACUCHVSHKQIGXPMNMMNDV");
    msg.comm_level = 241U;

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
    msg.setTimeStamp(0.06992870024780218);
    msg.setSource(52066U);
    msg.setSourceEntity(182U);
    msg.setDestination(2908U);
    msg.setDestinationEntity(86U);
    msg.state = 59U;
    msg.plan_id.assign("KVHZGTTKDHVQMYKBHBWDYRNSMFXVYZORAUWUOTXVNBISROWNULLPCXNZTFNLOQJMJDLGAIFMJMIQVSUKIFAVJOCNVSDETPZGBZVECYMFWBQAOOCXFPPQFPRVAPHYJWDYGSXDIIZDEZJRNWVHUGYGQIWZHDEKIGQKMFWSXCNWFYLUPTIUENPXJDULZGUMABHIJHEJKOLOXWURLCOEKPBAPSXEYTQRTMBLMBYGFAHHCBESLZQASRA");
    msg.comm_level = 231U;

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
    msg.setTimeStamp(0.7532344795343671);
    msg.setSource(58191U);
    msg.setSourceEntity(20U);
    msg.setDestination(26187U);
    msg.setDestinationEntity(93U);
    msg.type = 0U;
    msg.op = 34U;
    msg.request_id = 62859U;
    msg.plan_id.assign("KYXIGQVEHZRNKPWWHVPVQILSAOJCOCHLHBNMAJJFXYXCDMMLQXEOTFPGSZKKICGQPUJGWUAIDFWZSDONQKRNVIIAMEGWZUWZEVESDJSFXKRRHEGYIFDTTTBIAWUOGFLYBYNZTJLBQJVRSPIWGVLUPRYSMCAGDUNANCFJSCYJEKEXDLEWTLFTHUGLOHO");
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.11350411867341603;
    tmp_msg_0.lon = 0.9572862996571326;
    tmp_msg_0.eta = 401309349U;
    tmp_msg_0.duration = 35220U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JVVPJPLMTHGOAQHABUCYIKQKRGTSXNKCUTAKNNYSKYBGPXMLZQTZRIMEFQEHWRUOUBYQURZXPGDVLWCDWYFGSTWATZXUGJWZSFELQLVNCFMIFIDASJTMLRUVCKBEGWHNVORLHXJDIXMJFDNZUQKSYPKPFJIETIOOAHMCHPBEDDZIPAYPSDJYFOIBOXFSVBQLSLWIMERYEAQLGTCJOMBCYX");

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
    msg.setTimeStamp(0.3789264334769886);
    msg.setSource(15472U);
    msg.setSourceEntity(138U);
    msg.setDestination(11145U);
    msg.setDestinationEntity(62U);
    msg.type = 190U;
    msg.op = 157U;
    msg.request_id = 43505U;
    msg.plan_id.assign("AWABPFDQCWEUCPIABEPHXYAMPFUZNLRJRLWKZJGFKIRWXSSOGEYNXLVJMTTMUCGVJOCKJDVYNNQVNVMHFITFWBUXLYPDZZGCPTFOJMSBORATGDQTCNWMQYMYIWRGKRPNYNZJXOYWZHHXFHCPRPFXUKZEZILEBQLGPVIHXACBSHEJAMHIJLRXSZQMVLEOKIDQNEUDJCYREM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 10042U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.32800601026462894;
    tmp_tmp_msg_0_0.lon = 0.18660878388403623;
    tmp_tmp_msg_0_0.eta = 3294009183U;
    tmp_tmp_msg_0_0.duration = 15390U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WZLGRXPWJNXOFGNJCASQAWJYCSRYUEXKQPPHTVRUXTTTGQHQQYHZKQVLIJLWRYKUZNJGINMMBKQBCREFUZIGFGALSCDNCIBZDZJDMXXBKQXPIMESTVIDKHROSOEONKRTFWVEGPMBEALFHTPCEYNAVHETCFVIMZJOUPYTWFVUUHSMX");

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
    msg.setTimeStamp(0.03719909170515934);
    msg.setSource(38716U);
    msg.setSourceEntity(34U);
    msg.setDestination(18213U);
    msg.setDestinationEntity(214U);
    msg.type = 230U;
    msg.op = 223U;
    msg.request_id = 20981U;
    msg.plan_id.assign("FJGOMMIQPMSXVXBDJR");
    IMC::Pulse tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CDDZEZHPFSWTXZAQOMRVRAJXZNQZLZBEMRFXQOFPYGOGUEN");

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
    msg.setTimeStamp(0.007065895449229309);
    msg.setSource(1946U);
    msg.setSourceEntity(79U);
    msg.setDestination(24932U);
    msg.setDestinationEntity(152U);
    msg.plan_count = 58946U;
    msg.plan_size = 1945783531U;
    msg.change_time = 0.3189287453329238;
    msg.change_sid = 14692U;
    msg.change_sname.assign("CUWOBNJHLHXJFZIMVKWLRWOUEHTWOUQZGYOXRJIKRWYBVRQLMZCTUOTYFWSDQDGTK");
    const signed char tmp_msg_0[] = {-35, -108, -84, 12, 14, 15, 120, 39, -45, 30, -13, -32, -9, 43, -103, -43, 8, -117, 7, 26, 67, 2, -73, -84, -23, -9, 100, -76, 120, -63, -116, -113, 94, 121, 99, 111, 23, -107, -9, 83, -84, -37, -72, 27, -18, 108, -33, -10, -52, -90, -81, -88, 15, -63, 121, -3, -49, -61, -50, -45, -81, -38, 102, 106, 104, -23, -12, -34, 76, 24, -104, -49, 56, -57, 119, -88, -121, 42, 118, -88, -44, 0, -125, -64, -114, 101, -66, -124, -8, 37, -83, -81, -50, -51, -56, -10, -27, 70, -45, 115, -108, -33, 61, 72, -59, -9, -97, -124, -33, 16, -94, -17, -77, -115, -79};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JOSTQSGWIWNSRVWZOMRVYYLLWGRMQOEFTKNMBCNKEXAKUSIMFDZPXXOBATBAVJDYASUBLIMPTYZMAPORFHBIZGVQWEVVLGHICDDFWGJQUOHSRNKZJLINKLJTIYTGXWGZOJAUDIKJUSXJHPDPFEEMKHHQWCEAHYCRZENXSZJUAADPPYEPQUGI");
    tmp_msg_1.plan_size = 43199U;
    tmp_msg_1.change_time = 0.34853807539700454;
    tmp_msg_1.change_sid = 63775U;
    tmp_msg_1.change_sname.assign("RCLEJMKZNXERHRLSUUYIRJDIKTIKMNAUDOAFZCDZQTCKSZDS");
    const signed char tmp_tmp_msg_1_0[] = {20, -120, 2, -46, 25, 74, -120, -95, 4, 51, -36, -97, 93, 16, -96, -16, 90, -115, -70, 51, -94, 86, 52, -120, -61, -127, 120, -41, 22, 96, -65, 61, 24, 65, 117, -10, -43, 46, -67, 108, -79, -88, 7, 59, 32, 32, -17, -51, 107, 26, 32, -42, 50, 102, 47, 4, -108, -78, -99, 81, -58, 99, 68, -15, 55, 58, -87, -107, 29, -29, 25, -48, -104, -124, -18, 0, 47, 49, -59, 62, -89, 102, -114, 23, 25, 45, -1, 82, -72, 122, -71, -42, 49, 94, 23, -93, 36, -59, -22, 54, -49, 104, 27, -31, 101, 125, 104, -128, 8, -68, 87, -49, -120, -21, 69, 3, 5, -92, -108, 3, 19, -44, -53, -10, -44, 91, -60, 55, -45, -82, 5, 20, 15, 20, 116, -2, 62, -98, 71, -9, 35, -14, -100, 91, -62, 96, -49, -22, -117, 113, -4, 103, -24, 64, -97, -23, -113, -64, -77, 97, -87, 79, -41, -100, 105, 103, 86, 84, -126, -62, -93, 48, -63, -45, 24, 109, 71, -76, -4, -108, -92, 99, 69, -91, 15, -45, -17, -97, 54, -125, -9, 89, 19, 58, 125, 29, -84};
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
    msg.setTimeStamp(0.11275288744250656);
    msg.setSource(15006U);
    msg.setSourceEntity(144U);
    msg.setDestination(41937U);
    msg.setDestinationEntity(186U);
    msg.plan_count = 23242U;
    msg.plan_size = 551192045U;
    msg.change_time = 0.2695522897209647;
    msg.change_sid = 21851U;
    msg.change_sname.assign("IZXTGHSTNJDJWTNBWPZKXRYOGYMWFSQLMQHVKDEZVHRHAQTUMGFQSGEYRSYBTRRYWDEWDPLFBEDCMKQZUCGALGVRBNOYTMIPUBIBGWLPDPUINYLTJUDEBZLW");
    const signed char tmp_msg_0[] = {74, -52, -101, -90, 99, 5, -35, -109, -84, 8, -73, -28, 125, -97, -65, 118, -21, 7, 102, -48, 3, -117, 45, -87, 27, 54, 76, -5, -17, -112, 83, -127, -86, 19, 90, 23, 45, -33, -126, 30, -54, 24, 107, -8, 34, -46, 65, 96, 26, 88, 60, -61, -26, -22, -107, -2, -46, 13, -105, -2, 27, -67, -22, 59, -14, -27, -2, 59, 84, 105, -74, -91, -6, 49, -86, 42, 32, -89, 1, 54, -70, -6, 67, 111, -100, 41, -63, 83, -38, 58, -49, 41, 83, 9, 123, 71, -5, -123, -15, -102, -32, 24, -71, 20, 80, -33, 91, 46, -68, -88, 18, -115, 99, -49, -12, 120, -38, -57, -72, 20, -17, 36, 66, -126, 85, 39, 113, -2, -74, 17, 66, -67, 69, -21, 64, -101, 68, -3, 7, -23, -104, 14, -35, 80, 109, 59, -71, 109, -90, -94, 38, -111, 32, 92, -60, 112, -103, -35, -82, 99, 75, 100, 18, -126, 63, 74, 52, -12, 53, -6, 93, 48, 16, 1, -102, -86, 70, -119, -77, -2, 117, 83, -14, 32, 12, 15, -61, 76, 67, -21, -18, 88, -23, -55, -75, 21, 106, 62, -112, 114, -55, 34, 70, -16};
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
    msg.setTimeStamp(0.5416872187251829);
    msg.setSource(53374U);
    msg.setSourceEntity(17U);
    msg.setDestination(58559U);
    msg.setDestinationEntity(196U);
    msg.plan_count = 18943U;
    msg.plan_size = 2280114447U;
    msg.change_time = 0.4120690687447063;
    msg.change_sid = 48990U;
    msg.change_sname.assign("LCHTMZUNLXCSNSIJYAHEKHCGZXOIUOOVEOXMDTTJVBQFVWKRRSWJJYNTMXMJQPECNXGWARWSFRSLBJPUIVBJNSZZPDKQOQUYYDDZSXEQIMBOWBBWTPVGPBWOXTMQXCYLJCGTTIZPEEMHZAKIAJNKURIBHNBGUVHUSKDERFKHFKFWIUGQ");
    const signed char tmp_msg_0[] = {-76, 10, -72, 110, 49, 9, 33, -81, -113, 42, -34, -104, 98, 64, 54, -65, 20, 71, 60, 96, 46, 104, -34, -104, -66, 1, -22, 74, 105, -41, 114, -74, -38, -15, 91, -47, 119, -20, 67, 9, 67, 17, 65, 7, 90, 72, 83, 33, 97, -116, -118, -63, 72, 12, -20, 21, 42, 119, -65, -70, -99, 19, -125, 64, -47, 1, 35, 33, 71, -128, -70, 19, 15, -61, -106, 4, 18, -83, 36, -70, 115, 56, -108, 46, 25, -80, -102, 47, 64, -113, -57, 70, 84, 54, 16, -97, 4, 89, 43, -20, 61, -15, 1, -43, -116, 97, 66, 46, 53, -118, -77, -77, 98, 0, -10, -23, 18, 21, 2, 5, 10, -114, -15, 119, 81, 109, 7, 45, -125, 82, 100, 75, -54, 24, -102, -50, -46, 76, -100, 6, 80, -105, -114, 69, -39, -39, -91, -92, -109, -84, -106, 72, 49, 13, -93, 96, -53, 87, 35, -50, -1, 71, -93, 82, 35, 47, -83, -78, -36, -104, 107, 39, -125, 87, -86, -120, -55, 125, -63, -71, 107, -91, 16, -72, -19, -105, 114, 28, 29, 42, -30, -65, 117, 64, 4, 66, 42, 79, 32, -122, -33, 10, -100, 84, 36, 105, 120, 25, 65, -82, 99, 40, 70, 94, 53, -89, 25, 90, -34, -102, -84, -30, -108, -100, 106, -73, 104};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PIBDQKUJXMIAUTQOSJGITSLPVFFZJGDEIWQYYYRUMNTQBEFWFRRFXNEIMTESLR");
    tmp_msg_1.plan_size = 20707U;
    tmp_msg_1.change_time = 0.5225031442969768;
    tmp_msg_1.change_sid = 32820U;
    tmp_msg_1.change_sname.assign("DABCALTTJBKCPLOAHPYPZJENOWNIVXXPNCQRUXWKONFURTRNPLIOHGLDJDSFIEKZKBFYCJZJSHBFKVOIRYOZNYFWSDUVSMUGMWCJTSHETSTMGAILRQSUTFJZPLKQWGMYEYNPZSFXHUMJVXTBYCWPAX");
    const signed char tmp_tmp_msg_1_0[] = {109, 90, 70, 21, 59, 50, 106, 22, -97, -86, 77, -102, 20, 91, 15, 64, 5, 15, -29, 40, 25, 123, 62, 47, 79, 39, -53, 118, 43, -78, -98, -55, 50, 36, 33, -125, -71, 38, 87, -27, -107, 115, -101, -1, -6, -120, -83, 54, -121, 60, -39, 89, 104, 98, -81, 47, 88, -23, -66, -64, 85, 11, -94, 89, 54, -90, -49, 113, 122, -69, -84, -45, -60, 89, -8, 0, 108, 30, 60, 51, -91, 46, -19, 63, 61, 95, 14, 115, -86, -18, 75, -3, 111, 68, -35, 81, -33, 112, 18, -71, 116, 58, -61, 15, -86, -83, 60, 88, -120, -9, 69, -80, -59, 10, 0, -30, 99, -15, 45, 14, -10, 13, 46, 14, 37, 51, -26, 54, 4, 9, 103, -5, 126, -44, -64, -122, 80, 10, -82, -65, -38, 0, 43, 54, 74, 2, 100, 53, -3, -15};
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
    msg.setTimeStamp(0.9877472906018577);
    msg.setSource(20863U);
    msg.setSourceEntity(110U);
    msg.setDestination(41845U);
    msg.setDestinationEntity(157U);
    msg.plan_id.assign("WAXDSCIPBPCRGHMWHEBEQRPBZEWIMGRNCORVXJEMTBKJNTQLQNLRYGHMLMXEWVIFLPIIOGPRRMEPMRWPNBEHUZSVHQUJZMTVBFQCKVVLUGAPFDDOZIHWKDCPVELYAAFDZATOHJ");
    msg.plan_size = 14692U;
    msg.change_time = 0.08135511207516755;
    msg.change_sid = 60136U;
    msg.change_sname.assign("USMXRQCWMZPHKCELZGRGMPIACQSCJTQJAKQVGSXQDWOMDHXWFVZHWXFENACTDDVPPCYRPWLBBOJKOSEGCMDZIFGNKRLNLYTMSIWXGANETZEMOOKGFFSIPFYJAROSISQHFUNGNBHYJWPOMJZDENEBAUTVRLHAZRQLWJOPVCXKDBDMPEBISQMHEGROTVLXDV");
    const signed char tmp_msg_0[] = {44, 67, -100, 111, 96, -50, 49, 22, 117, -91, 88, 105, 30, 38, -118, -46, -122, 114, -70, 88, 83, 8, -97, 81, -95, 31, -4, -29, -98, -121, 99, -9, 122, 84, 21, -22};
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
    msg.setTimeStamp(0.6813467208843117);
    msg.setSource(3008U);
    msg.setSourceEntity(184U);
    msg.setDestination(9618U);
    msg.setDestinationEntity(232U);
    msg.plan_id.assign("EKMXXMCGUBBRVSNKOXZFZVZSAGUARIYMRXFHCMLVVROCMBYWWUPQXBJEWZOGDMSBRIKLHZAZJRMTOE");
    msg.plan_size = 2509U;
    msg.change_time = 0.9924262351076348;
    msg.change_sid = 25295U;
    msg.change_sname.assign("UNHWIOIZFTQSTIMGYIWKEULSLBXGAJRNKKGJDSMMILVVEXINDDCXYZZUPIPUXRSLQXYPTJFNHHBYEVNTQPFTEMUSKRVQLBYJKNLPMBWFYEDPDWAFJOOEFDJZVGJRPCXDCJFPAANKZVATJCERDBFRHWGMAKLSFHCTIHOPFICVSELWBYGBBGNWZWZRVZKCQXXHQVSAESPBQLYHWOKYTQQCQGNVGDOOAMUUUOAMCAOUZJIKSROBEZTRCYMNDTHM");
    const signed char tmp_msg_0[] = {-121, -31, -9, -67, 40, 84, 39, 15, 73, 117, 108, -125, 116, 11, -91, -73, -115, 18, -96, -98, -80, -27, 49, 65, -106, 82, 14, 76, 13, -78, -70, -12, -24, 82, -35, 36, 18, 42, -94, -77, -124, -42, -89, 59, -73, -66, -57, 28, 52, -80, -47, -53, -44, -121, 21, 79, 42, -121, 90, -80, 80, -22, 48, -108, -29, -68, 6, -123, 37, 49, 76, -37, 98, 89, 102, -50, 11, -1, 111, 64, 59, -23, 0, -7, -115, -13, 36, -18, 71, -37, 93, 76, -28, 109, -107, -126, -118, 116, 71, -15, 77, 45, 72, 59, 57, -71, -32, -69, 67, -7, 18, -35, -108, -92, 38, -70, 38, -4, -78, -46, 10, 10, 124, -15, 73, -9, 31, -41, -4, 87, 108, 5, 68, -13, 80, 0, 106, 5, 103, 85, -16, -36, 8, 51, -66, 118, 89, 85, 81, 125, -66, 41, -98, -125, -64, -110, 64, 22, 41, 27, -17, 66, -125, -55, 15, -118, -103, -22, 95, -76, 31, -70, 62, -4, 6, -10, -89, 10, 126, 60, 44, -67, 17, -14, 83, -26, -80, -79, -117, -25, -70, -125, 77, -42, -91, -33, 77, -9, -9, -112, -113, 43, 74, -76, -47, 10, -127, 14, 91, -57, -98, 69, -88, -104, 118, -39, -113, -80, -104, 3, -111, -105, -126, -44, -114, -91, 105, -122, 64, -38, 50, 124};
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
    msg.setTimeStamp(0.13943806487881694);
    msg.setSource(26081U);
    msg.setSourceEntity(6U);
    msg.setDestination(37473U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("ZIOIJHZFEZQTKSEKGWSKOMMAXAUSJPFMAMVQYHDGAKYECRITRPLSDGDMAEKVILCNSULLQAVBYONVHJBKSPVEBTEPJWUDBYPPOFZNBNFEQJUMGVRHIZPNCETONWHLAXOJOZCWGRWCZWIFLPNYRVXTIYP");
    msg.plan_size = 5820U;
    msg.change_time = 0.6807903512443563;
    msg.change_sid = 35939U;
    msg.change_sname.assign("CZQPPHTDQZPEFEAUTCHNCSCUGLBARRWHZGCISPYXMWIOVRWYYXMIMKOJQYIDPGANTAJUIBKSQHYRXDZKRSZKCFNOABWQMULNBSVNSSJZYFDN");
    const signed char tmp_msg_0[] = {-62, 118, -102, 46, -88, 108, 107, -87, -72, -83, -23, -122, 20, 74, 20, 64, 114, -66, -105, -11, -28, 124, -32, 34, 121, 123, -96, 3, -7, -110, -46, 77, -121, -125, 125, 124, 69, 92, 23, -116, -20, 122, 78, -32, -60, 7, -128, -80, 103, -123, 13, -100, -89, -10, -45, 40, -61, 21, 79, -84, 109, 120, -1, -14, 58, -119, -76, 9, -8, 112, -79, -66, -101, 80, 1, -45, 57, -125, 24, -109, 46, 2, 4, -6, -115, 118, -20, -60, -9, -109, 0, -59, -123, -46, 30, -88, -98, -38, -24, -86, 83, 69, 57, 4, -110, -17};
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
    msg.setTimeStamp(0.1381779481139378);
    msg.setSource(37043U);
    msg.setSourceEntity(66U);
    msg.setDestination(33372U);
    msg.setDestinationEntity(62U);
    msg.type = 223U;
    msg.op = 27U;
    msg.request_id = 53329U;
    msg.plan_id.assign("XNFUVLVTYCZNDRHZXAMOGAWCNDTLA");
    msg.flags = 13563U;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.58007477728895;
    tmp_msg_0.lon = 0.1009415412802489;
    tmp_msg_0.depth = 0.9101826343163909;
    tmp_msg_0.roll = 0.18784618843407197;
    tmp_msg_0.pitch = 0.2941791859817128;
    tmp_msg_0.yaw = 0.02657726716192832;
    tmp_msg_0.rcp_time = 0.3449222318013979;
    tmp_msg_0.sid.assign("TQTOKCEEAELGDIOPMDNJACYYKLHNSWLSXRTSMENIXQALKCUNWYVZMRYZBKWJVBKZEATVOTICZQOWMRRPGSBUKNFRVHZADZEXNQSFFNEPQUHCXGUPWWIXRPYDUEGYTCOIADHQOWUZVYVFDARYKJDQXSONMVZBXHWHCDDCZTFLBHUOJIBJCMAAMELMI");
    tmp_msg_0.s_type = 149U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ILHUSKWMGBJNZNIBVIKFYSYDCIUEFBPQUTBETFRAYRMZGOKZDWQHYOPMJSEXNY");

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
    msg.setTimeStamp(0.9964158544109852);
    msg.setSource(1155U);
    msg.setSourceEntity(109U);
    msg.setDestination(26979U);
    msg.setDestinationEntity(177U);
    msg.type = 144U;
    msg.op = 204U;
    msg.request_id = 10370U;
    msg.plan_id.assign("BXYEHBNHZESWPURQCQNSNTSXSUGTYKOIJCGQZAECKVZWYLAXPALONQJOAQOBXBKFWMOQHVUBIFCDSBVHFGNIEROIZJPONVDAZUGCUPRFESNJGFOWDWGSMPZKMSMWLLKLEFCDTDPHTHTFBCOHZDJBFYPCILNXNMEMBQUGZORLGYWHUMXZAFVXVTVWLKDXIKHTJAMIIDERRPR");
    msg.flags = 61650U;
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 241U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MVIFNHEVHDUSGLUFXVDPLHFBKYAKVJQYIVZSDEDWXRDBUVGXVJQUZKJFZQIPYVRMCCLOOOGVZ");

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
    msg.setTimeStamp(0.3787065077702807);
    msg.setSource(19240U);
    msg.setSourceEntity(24U);
    msg.setDestination(479U);
    msg.setDestinationEntity(121U);
    msg.type = 83U;
    msg.op = 18U;
    msg.request_id = 43244U;
    msg.plan_id.assign("HZZJFAMNFRBZBTKCIIZMIONPTHTSQRAKMOYNYZLPFGRWWMIGZPVFEUGORQUMUSQSDCAVBPHCQSNNDGZQISAWUDBUTVOGWLERQKCKRPXYZWZIXBGJLZUBWEVHFKBMMFXLHRYTJWSODJLVFDOHERXAOHCSLFBHDYUEXWDCKOJYJFVTHNPBCGDTEOPIGFKQTCAWXXHSLYPIWYTUPAVNVAJ");
    msg.flags = 13916U;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 33309U;
    tmp_msg_0.priority = -63;
    tmp_msg_0.x = -27691;
    tmp_msg_0.y = 1494;
    tmp_msg_0.z = 18924;
    tmp_msg_0.t = 30376;
    IMC::DvlRejection tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 247U;
    tmp_tmp_msg_0_0.reason = 126U;
    tmp_tmp_msg_0_0.value = 0.07859755397142609;
    tmp_tmp_msg_0_0.timestep = 0.6120386980533385;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MUDPRCPTYZOXCZKNYDXGAQNORVADGDILWZVIUOVZRIDBGAAXEUHUSTGWKWHJWBXQMMCCFRPGTGRMLIUFVDWYMILITXCQQGLBZTSKFHQCIHQXSEOPKSHGLGAHPMBLUBMLNMKJWAPYVPJVKYQLFBRHVJXUMOFCXQNAJWEIKTFZPNSPNJSEI");

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
    msg.setTimeStamp(0.4062139606333297);
    msg.setSource(19443U);
    msg.setSourceEntity(31U);
    msg.setDestination(49067U);
    msg.setDestinationEntity(57U);
    msg.state = 35U;
    msg.plan_id.assign("GKOUTSHVHBWZHCGIAIXYAEDDGOBDQYRVYBRSGMSVVHLMBMFFZWJAGBUELNPLROBPXCHHPPZNQWVQMEFKQINVSULQXMQSJRTCUDOPJGDLWZZDWJEECPBFDTNKXXTCUWNKLBCSENCJEMUKISVBPSHR");
    msg.plan_eta = -772567483;
    msg.plan_progress = 0.21463206365326015;
    msg.man_id.assign("WHTVSZVQHGHAJGGYTBHXACTXQERUZNOSLZDKOCTALQDWOYKBBJFUBXRCQGMTIBXYNBXGADIQYFQTPXAFVBNKIWEIIJF");
    msg.man_type = 50165U;
    msg.man_eta = -2081797137;
    msg.last_outcome = 228U;

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
    msg.setTimeStamp(0.2580793310730546);
    msg.setSource(18870U);
    msg.setSourceEntity(124U);
    msg.setDestination(49318U);
    msg.setDestinationEntity(11U);
    msg.state = 30U;
    msg.plan_id.assign("YEFEGGKUHORQWRLXGQPOGBFYYOLSJNRZYLFERNWPSATFXACAZZHLRIAJHDFVLCEFNNBAKQYVBTUTRLSRVBCTNEEKKCWDPCXSAXIMHAIZBWTYGYIVJPOUSZWHMBJKGUNIGMGYSVXBZDAYAIGHWTZJLNFPBLKDEVZIIOCRUQUQXWVKPFDENFTTJDDCHYQOGXMAJICWKBXLZMMWKSOQMUPXEMCOJKVISFNMVMDDPQQODRJOTSQR");
    msg.plan_eta = 14401682;
    msg.plan_progress = 0.22363970620072926;
    msg.man_id.assign("IXCNTMRTLFQWVZGXSOGYTMWJJCAFJPXSHYELTUAWRYMOUPVMGTDDMCDHBEPKVIDQHSEZNQNQQOGYRBUGAOZPUAWVAAGBXAYMODLUOCRZKUIARSPDWJCZIIFFTVLSVEVB");
    msg.man_type = 37721U;
    msg.man_eta = -131941498;
    msg.last_outcome = 247U;

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
    msg.setTimeStamp(0.8912299503126032);
    msg.setSource(45360U);
    msg.setSourceEntity(49U);
    msg.setDestination(56699U);
    msg.setDestinationEntity(232U);
    msg.state = 234U;
    msg.plan_id.assign("GCAMCODYYDACCTRIOXSIVSKIDA");
    msg.plan_eta = 1684182626;
    msg.plan_progress = 0.08519238374741678;
    msg.man_id.assign("QGJCKVEAKCBMMJCWINMUQDTHSKPNQCPDIHUONIFNX");
    msg.man_type = 36723U;
    msg.man_eta = 457036135;
    msg.last_outcome = 68U;

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
    msg.setTimeStamp(0.5085668903792464);
    msg.setSource(61469U);
    msg.setSourceEntity(209U);
    msg.setDestination(48249U);
    msg.setDestinationEntity(160U);
    msg.name.assign("IWFWTHNOQJBTVHRHKHQ");
    msg.value.assign("SNRNEJPXQJKAIDBFIDDHYICGPFJNNWWMTQMVNWFSJYUDMXTGLBCEWEESDMMTUHKHLIZZLLJJVWQJVOGIRHVGXYUTYAUAAQIOPAHJSRKWVWZKIWGQWNBDCQXUDZE");
    msg.type = 191U;
    msg.access = 106U;

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
    msg.setTimeStamp(0.34249124987569424);
    msg.setSource(54399U);
    msg.setSourceEntity(123U);
    msg.setDestination(32862U);
    msg.setDestinationEntity(100U);
    msg.name.assign("KAIQNSZMDRQSRGHTBJNXOQEMYYHBNTZAKDWRWDXJPGVGJJKGUACYIVRWYTFGUYOMRCYSOCJSPFIHGOBXUZMOCETJAZFTLRVYBVFZIDVAUEIFJRQKRKLUJUNTLMCCHZXDURWGDSIBPDHCNOPIQWEZAMQOXBRNYWNGSQLIGKESFFSYLFCTKLVVKFHZMTMJBWBLISBXEVAQJNDKLLIQWPAVOXBK");
    msg.value.assign("RNFGWESPZOMPNPXDHOXULMACHKDLSLQXUDBDJWCHXSWMAOOYIUKSJWZYCZNFAHDTWSKNJLYLBGDWRWSWCJYZBROXGRAKVTUTWCCRMPTZAQNDFEVYOGFEAJEVPLUZXVOFUHGNSAQEDZEIQJYQTQHHICVZYTYKEQQBEMKPROHG");
    msg.type = 105U;
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
    msg.setTimeStamp(0.1219749335219229);
    msg.setSource(62400U);
    msg.setSourceEntity(211U);
    msg.setDestination(111U);
    msg.setDestinationEntity(197U);
    msg.name.assign("POAAEFBFIEYFGYVKEBPXSKIPGRFZCQTQSJULEJEPN");
    msg.value.assign("VCRBFHWIDLCDNURJUUWFBIPAWKLWVPULMMZEFJLRBKNLJRDWBHIKQJRGAXNHQZOSAFMEVCVXGTXHAFDUVPVNFZROD");
    msg.type = 121U;
    msg.access = 183U;

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
    msg.setTimeStamp(0.7389901881067963);
    msg.setSource(25295U);
    msg.setSourceEntity(114U);
    msg.setDestination(46921U);
    msg.setDestinationEntity(56U);
    msg.cmd = 221U;
    msg.op = 163U;
    msg.plan_id.assign("AVTEMOTZYHCQMOHPBUASEIQKYZWICCOPZXWPNORFIILMU");
    msg.params.assign("OWRXNSJOUDYETXBXYQJCYFJSVSYJTVVQREPQBHXWUMCADONLGPRBLKLURGZMBWSEWVDEKVUWWPMYAOODPFYBLHJTBZRGFHIIHCEOANZ");

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
    msg.setTimeStamp(0.43074596656129593);
    msg.setSource(42436U);
    msg.setSourceEntity(236U);
    msg.setDestination(9324U);
    msg.setDestinationEntity(173U);
    msg.cmd = 150U;
    msg.op = 254U;
    msg.plan_id.assign("TOCCJDRHYWBQYDPFGDOIPRENKODPKQAXZPWRCOXLJDDYCIERQPUKEFTJUSLLHEPJZLFOKMODCNBVNKSNZKNGXJMTYQVYTSHTFZNECAAZOLMOGNGZIUSSRRVTLAXPUJPBEWWMKQCXAYUFFAKHIVBOHQRFGJYTXVIMMZTLJUWITASWNBDPQUKQXWOMIFWZV");
    msg.params.assign("XKCGPNOTIMUZOEVKAWFKMIAOWVHSUGBJZREHDEOZDPWRYPSPLEQKUXVISYZXSCFKCIQJDDIEAJFHYTTROBVWFLBRGASQWQLKYXPMKNNTBAOZQFVIUEUNXJCHFVROGMBHQ");

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
    msg.setTimeStamp(0.9986798563473932);
    msg.setSource(41567U);
    msg.setSourceEntity(139U);
    msg.setDestination(9637U);
    msg.setDestinationEntity(133U);
    msg.cmd = 136U;
    msg.op = 254U;
    msg.plan_id.assign("KBJYDUSHKXNJOIBEWPJMWGURHMGAKMJVNGQDSUDRNDXXSPKRYRILCSHMRTIZHVOZPURCVHKPKLOZULFUJKJFTXWBYVRCUGTTNEMNGIQFRMJEZLLFKBCCMVRPOCLFWFYKLRJUNPQSVQBAVSQEMXBBYVVNOLIYTCGAYCBEWAZOZOOXUIXSGLTNDNDCQPYGTIWDPHGZPQSQNYKCDAETEOQSWXFZDMEJHWZASHPQFMFTALXDBHG");
    msg.params.assign("GPDPZJBSMYKVOUIHCVY");

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
    msg.setTimeStamp(0.5284798060376326);
    msg.setSource(40940U);
    msg.setSourceEntity(220U);
    msg.setDestination(45334U);
    msg.setDestinationEntity(161U);
    msg.group_name.assign("FIXADAWNNEMBKTBVKCOOPNSIRHUURCJUGHRXIF");
    msg.op = 250U;
    msg.lat = 0.4911728048470013;
    msg.lon = 0.03434395801826662;
    msg.height = 0.41019702916625955;
    msg.x = 0.6004629878558959;
    msg.y = 0.852326577531911;
    msg.z = 0.9358395840031902;
    msg.phi = 0.7410715204549577;
    msg.theta = 0.043226265341311354;
    msg.psi = 0.736356547113636;
    msg.vx = 0.9581546150532281;
    msg.vy = 0.6105901949975368;
    msg.vz = 0.9884088455927106;
    msg.p = 0.8168941563421075;
    msg.q = 0.915543892767918;
    msg.r = 0.10193007306762603;
    msg.svx = 0.14540594718853161;
    msg.svy = 0.23638401653793273;
    msg.svz = 0.6543541810539326;

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
    msg.setTimeStamp(0.7858313092064504);
    msg.setSource(20080U);
    msg.setSourceEntity(99U);
    msg.setDestination(18576U);
    msg.setDestinationEntity(207U);
    msg.group_name.assign("IOWZSOJIGXQBYLQWGZDWVVUAAQWANPQDGSLZONRLZLYJPKMOMCFXESUPTZQTAEYBNBIHSJWLMJHOBWHTFLFVRPDONDLXVTSGJBSK");
    msg.op = 32U;
    msg.lat = 0.5434064688201856;
    msg.lon = 0.8551663431190115;
    msg.height = 0.601176840233296;
    msg.x = 0.8512478610609583;
    msg.y = 0.672094830587529;
    msg.z = 0.5982213301506887;
    msg.phi = 0.8486550741493499;
    msg.theta = 0.22176624142321988;
    msg.psi = 0.40588532200538874;
    msg.vx = 0.5050843754854102;
    msg.vy = 0.6714516462948965;
    msg.vz = 0.35573035184366364;
    msg.p = 0.5425453652519394;
    msg.q = 0.8652359072146613;
    msg.r = 0.8831662937356384;
    msg.svx = 0.521583980990496;
    msg.svy = 0.9244742937206132;
    msg.svz = 0.7845158950181254;

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
    msg.setTimeStamp(0.9544082690609047);
    msg.setSource(42008U);
    msg.setSourceEntity(228U);
    msg.setDestination(32508U);
    msg.setDestinationEntity(134U);
    msg.group_name.assign("LGHQOBIACRZEVFGGLCZJGWBYUFCNFZUZXQITLHHUJEKLAKHMMFZNLJSODMEQQKZXEPTCMZOURDCUSVSWVCSAJBJRIAJGKKULPGNJYNGBYYRKODFLNDVRAPPDTUPCIOPTVKWBQPXSBOPMMACSXSDIHEBWYNLWZXEDVQRUMHTJKWFLCINQTEOAYFVUVHOBAIKXLRNIPXROGNJYDSXSAUSAGWKRJHBXDTTF");
    msg.op = 62U;
    msg.lat = 0.16977786123607996;
    msg.lon = 0.44980312973774905;
    msg.height = 0.37019425886471125;
    msg.x = 0.48024364181611345;
    msg.y = 0.21138149104308523;
    msg.z = 0.547149645139025;
    msg.phi = 0.6508557834398941;
    msg.theta = 0.3506845619001616;
    msg.psi = 0.1525526352683223;
    msg.vx = 0.12039055234981477;
    msg.vy = 0.6616363578772161;
    msg.vz = 0.9957357629218716;
    msg.p = 0.17130925219808835;
    msg.q = 0.46408413719581343;
    msg.r = 0.479773536209643;
    msg.svx = 0.13253099159129877;
    msg.svy = 0.9976086538707483;
    msg.svz = 0.054479148214075845;

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
    msg.setTimeStamp(0.937317227615885);
    msg.setSource(50679U);
    msg.setSourceEntity(123U);
    msg.setDestination(24205U);
    msg.setDestinationEntity(176U);
    msg.plan_id.assign("QNBEWVYSBQEZXEXODYDUVLBEFXMIZJCRRFXDICFHCMHXKTZOHMJMZOMOWNAMNNLSAKTDFEJEHQTJPPIHFIPBNSGIHFKPXWTITKDQYBNDMUSNDRGCHUWZDTSJQISZWVLIABBBHRAPGJUSGQALDGXCUBDRPZGEYYEROGRIWIMUAFAYTTSPPKVCPNWOWJXYOSLRFVGLQYLURGVTCVLZXSZKJEZHFOKB");
    msg.type = 215U;
    msg.properties = 83U;
    msg.durations.assign("OWCMGFQTWCKPONJZHKYLAVXTDBBNFYTYRWXYYVBACUXQCHXPWUWKEZAEAVGAKYCXUHGGZKIPJEIKFXKPORAIJQHTJZTLHCTLDFWXZBJQQOVTMPLISGENMUNEOLFJVVISOPOIWTZWAHJBBEKLIDHQGUBUKVTMSONBDVYVQEZADD");
    msg.distances.assign("YJWKZFRIJRQIVSGRXGPTWTIOSYSLVLRIKFHHMABMECJQEIXUVALNANCMWXLLCNZJEIPVDMEXGZDEKEOOXVYUHGHFQLFKKTBUDJGBCFTPDBPVKQTIHAZYVVMOCNH");
    msg.actions.assign("GTWKRFMVUJJJPWKWDXHNY");
    msg.fuel.assign("CLKZOJURMNEVEEITYKANQNEUVVZVBSPUTXYFLGSNFRESPKJKGHMWWYCZKRPJRINTPIBVXHROPWYWYKLDOYTXBWHBQOADJTJQZWSBSNAWRSYGMRMJULLHTJPMBCJFXGARCHFMUIOGCOLSDDHZBVLHMBQDLIFADVTFZGXYIVJEDKOIDSDCWNZVSU");

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
    msg.setTimeStamp(0.20308408528990085);
    msg.setSource(48111U);
    msg.setSourceEntity(212U);
    msg.setDestination(37137U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("JPRLLOJQDAUKWJIWGCMFFVTXHRWDOKRBGZATSYNFDZPOSYXBCMRHYNFAHHQSKFBHAIGABKEUFXFVCVYJCRCIMLVNYAXDTHNTTXBSKOGEIWUAJOMEZGBKNXUSQDYMXPZUQZCUBUHWRCKUDEKSJEDSLPJCSEGMPMQZOOIGZWNTYVALYGRSDYHMIMZTMVNLBBZ");
    msg.type = 123U;
    msg.properties = 42U;
    msg.durations.assign("VWTIXUJNAHOIZLNCFBJFHPPJTENIQCBTNXSDKVJSBJHLUCXBCXPVUYDZRUMHNLSAFQOGYTTMAYSKDKMFPEXOGALMVDOIPZWIRDSLWGFIZIJDYEWKBVRMPZKGAWVUJSPPEROCKQUUOYYGRQXTTBQ");
    msg.distances.assign("MFLGLYGNBCYUAPCZALIVEMUPPDZRRIRTLDWLTLAFJWUXDKNTNIQSCUSNZRBMVOKYIRJQSHHMKOXUZEHSWEPUDRPQBNWAJOYGPYWGSJXFSTKPHHACJMMNCIABBZMOYKACEGTXFIWEYDMROGKUDEJLIUEYFIZJMNYJCGOZROFDXJHSVIWEQODKLXHEVGNNKVVHVZPESOCQJ");
    msg.actions.assign("PLKYYVCXRJGTGKDCWNTPRGWFKNRBVYLXQGHXJQPEGCOWAOPCTYCKISPYQMKYWPKOMZZQMZHGDASVEQIIUACGLHGDHDYTVIPYHMFNEVL");
    msg.fuel.assign("DNPWMYEWBSTAQUHLYGABOZDTDXENVRVPADTEANCUNFMZZAUQGQVRWPWIZRZFNKLHYRDJSLLRKUPCFWONRYYWHIPVZKFZXRWSEKSRGNIJUILFKGHCKIBEUJTKAHLDECPCZJXGWMQMXSKOJQBGXPPOXLULTBTGJSPMFEWCENHXJMTSEHUSMQOYBEBCFTGFOOVYCQBRGJDOLCUQXQOUVBSTCBIHANODID");

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
    msg.setTimeStamp(0.4678380028768281);
    msg.setSource(63519U);
    msg.setSourceEntity(135U);
    msg.setDestination(15628U);
    msg.setDestinationEntity(176U);
    msg.plan_id.assign("CIPRHXYYZYIEVXOXDTNFLRUACMTPKGRKACGREOZXHFERVOTUKKVLCCDKXTSHPOQHNVVTVLGQCUYRJJZOIBJHLNLLHAWPBMIYGQCBGAQLJQPMOZSAEEOCSBYDOMESFSFYFVTGYXWPVEANHSGQLNKUTWURCOKUUYULDYFQPJJHMFASRDWBGXENBBIWSIIHIZWUNIWWQNNZJPEVPOPDZWKDSRMAIZQRG");
    msg.type = 88U;
    msg.properties = 115U;
    msg.durations.assign("QIPHNMFKTNZHIMKEZNZHDQQXXBDDWVFHDTEGDSGBRNJDOAPJLTXCYLQVQPOPRCZXSJSPYKDMVDTCJRNEQRXSLOFDSOIBWUMCCTTSUITAVOOCDTKYGAIYBFVOOLNGRVWHHXXTKLZZRJLQZEIOWRXMECJSWBMTHZXWLIMLABWHFEMCWKYGSLNGFJEZMBOAUUFABJLAPYSANFKWQEVXUHGPFRUPCURKMYKBZVAUAQQIUECYRPIVGJSNGUEW");
    msg.distances.assign("JMJMVYJTVJTZLUWFKQAGGLGECXHUNWOKBOOVZHTMDSBRDKURVULAVMSRMSARFQXBDUSGJEEQJBYLHQDXOIZTRKODKAFHBQTWQYOFCACPQMGNHNYASQGSEEMYTVIZCPPPXQNPORGPEJWAWSZYANLNXUXVUIELLFIJLVHCNNIIEZHWHVSURPJSFFHFIOBNQZIXOIRKJGYWMZBRGZUWGYSRHKWTMEKTD");
    msg.actions.assign("JDZJIAFCULIKUHDNPOUHTILDPAIPCNTXEQSMSYSRLOABKMZTLVFDKUYWZKKGNZDDYAHWWRTJBUMOMHHDEMRVANYWYAGGRZSRWGBDENBCIOVSYRKXQSKEVXLIUAYOLXCHIFBMKEMAYYPPCXXFETPCXNUJBFGJSSFRIDESJVEZWFLMFQGWJOLGM");
    msg.fuel.assign("DTZBXIPTJOIQLSLTCTUDSICEDIHKDTXAWNSEPLSHOCYSNWOKKIQYTZMYEPANAGKZMVCFXXNKWGKKQQVYCEAJYPXJYQLRMAQBSSBRZIHEGIGQYQNVAMWJOVYFMPNUNHGRUAIBMWXNFURAVBEUCFWZONCFWPJXUCFOPQJBHHKBUCHKOUVLPZXVDKDNIGFBZWLRDORGWGGVBEJYLMHRTOPPYXLJUML");

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
    msg.setTimeStamp(0.3008873527220579);
    msg.setSource(40509U);
    msg.setSourceEntity(189U);
    msg.setDestination(42364U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.6382041384988199;
    msg.lon = 0.7346878814107405;
    msg.depth = 0.2709341765258957;
    msg.roll = 0.7561445422349297;
    msg.pitch = 0.016972984169119187;
    msg.yaw = 0.5054880775949321;
    msg.rcp_time = 0.718312609047191;
    msg.sid.assign("XYJQGGCSYDDAGSFRGEZOJYSIFZGFRSBBLCEBXQRRWFFXEWYCOSMANHBAVOYTIFQHCRCZKCSNXUATTLRUQUHUATQMHQGIOEAAMPTZGEZJQDUJKCBNIHXNWLDZEMXEOFPGFPFIPSZQDMPESKMBCWVVKERAQOXPLLOGISVHKWET");
    msg.s_type = 164U;

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
    msg.setTimeStamp(0.5634402013561969);
    msg.setSource(33818U);
    msg.setSourceEntity(202U);
    msg.setDestination(38993U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.16294764994609467;
    msg.lon = 0.21376883790060808;
    msg.depth = 0.07818866633089405;
    msg.roll = 0.311054004077423;
    msg.pitch = 0.9482115660682113;
    msg.yaw = 0.6600245050967639;
    msg.rcp_time = 0.1124008347722496;
    msg.sid.assign("HVBQMUDEMULPYECTIMVUYBQCMBGFFRBDLJUJNMPBFBOAOOPKZVAMNSQXDYJJHKOMNGPQDXQ");
    msg.s_type = 33U;

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
    msg.setTimeStamp(0.9173696824226251);
    msg.setSource(43213U);
    msg.setSourceEntity(145U);
    msg.setDestination(9895U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.4671915712835343;
    msg.lon = 0.0852666745852888;
    msg.depth = 0.7041909905228143;
    msg.roll = 0.8523214118139516;
    msg.pitch = 0.6014833678017764;
    msg.yaw = 0.5452672723088606;
    msg.rcp_time = 0.8140950541388626;
    msg.sid.assign("AKXBERMFYZVBATFJNQKDQNCPVDZNTDIJWREFLCRSOMHQYSFRZVGWLPFLMSABBMEYHRQGPGDAXIPCSHLIHZDEIXGDNDHLM");
    msg.s_type = 68U;

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
    msg.setTimeStamp(0.26978541719050364);
    msg.setSource(58976U);
    msg.setSourceEntity(67U);
    msg.setDestination(53950U);
    msg.setDestinationEntity(19U);
    msg.id.assign("DWTSJRKRWFIEOFHVXDMEZFWLFXBWYTABIALYHRXMGLOPANKDKIOBWCKTPREUGZDNJETUBAQJBOWTNVAZIFIYPJAFHVHSOMDEHMKLHPOBOBLWKIPASXWNFJZKYYNWQBQGYXPIXNSVDAQCJUEOUGZQTOLLDJYKNHIESEIJQCZQMMSNIKHTOPBGVCRNCPDQRZEBCWQVTSGDLURSVMCCRAYXGVMECPRDXGZPQZUYGUFMTHLMZKUJVGFFLSHYCU");
    msg.sensor_class.assign("UIRRCYEXMKLJJWTIHRNUPDJXJBHLSQLHTYALGEGEIUZBURNSLZANVGRJDBYMQLKEHFBIWQRTPHMOAWDIQQVMPMVVSWSTBCKOGRWUDHDNNVNIGFXUPJJFMFRVJYCXLDNXXFWBNZAOFZMAFSKRHOAZQYWCDUZFYOODEXTYKOFS");
    msg.lat = 0.9408383995090764;
    msg.lon = 0.10299955352090262;
    msg.alt = 0.6983696753228491;
    msg.heading = 0.6366499967687587;
    msg.data.assign("YAHWDHCERFPGPJSULPNTIQPWFQBLVXFYCRDUUROMQTRXAZXTEGKWMKWOQNOWTELBBLCBNDSVQWMSAQJOBKNNQORTIKFJGCEQHMKXDJNLSHKPNMHPVXTRVIBOMIIAZCGDFYMXYHUGIHJHCSOEZEDLM");

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
    msg.setTimeStamp(0.8470068025724585);
    msg.setSource(37795U);
    msg.setSourceEntity(29U);
    msg.setDestination(20357U);
    msg.setDestinationEntity(178U);
    msg.id.assign("HNGZFWECRSSFOVATJOYSUOSEYHRGNLWKDZBUWSVHTLACYHIJTIGIQJHSWVPFEDXAGJRIFCQUQFAEKOLDPEYXPOMKULJNBYPTNHTFXLLQRWPAQNQPLUDTLEGRYTKVNPXKHMLCJQYDYVIDMVQEDHIOHADVV");
    msg.sensor_class.assign("NFVXAVIACSXYKLPGWUBYLZBGFWLQJCMJNJLG");
    msg.lat = 0.5684927277769398;
    msg.lon = 0.6665656511255199;
    msg.alt = 0.7148114663891935;
    msg.heading = 0.25434451298065675;
    msg.data.assign("PJIHSEAYUZYKCWRMOMDDAANNCKWIZAFNUBCXJTYZTOEWXFDGPBFHOSXQOLFCYAEERBHZWLUQKHVSGWJPCDWXPVBXVHMQIPAERBJYMGOBRYVIIUERHNFJXLAQMTAWKFQUREZNQSQEPKGCVGZVSLOQTFAUZOSBTXTHCTONUGGADWVIXTJHSCLGMTBJHZNUPDXPRTNUOZDPOCKLLIMILFJYBCWKSUGFRSD");

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
    msg.setTimeStamp(0.9900236382578985);
    msg.setSource(13898U);
    msg.setSourceEntity(244U);
    msg.setDestination(56350U);
    msg.setDestinationEntity(164U);
    msg.id.assign("MOTGZWNEMNPVLJZAAJHASWOLPOMZTYKQCFXRRQQDMVHXTIAEPTGYRHKWOXIAUCBVRGQMWSNQWOZIELEUDZGPIJFGWVDHTCXZBNZELJBLJYXEBOJARTRMJAYPKSGSLKTMGNDXHXRKUVHUUPSHHLUMSOLCPNQIYTIBCBNPBIHINMJYKVZXMPU");
    msg.sensor_class.assign("EMSETOHWQVUBXSWJXSAOBAEJCTWQERSCGBANTRPXBTDQCZJTSKZWZICPEPFMHBKAARDGFSZJYCVFGCIXLNGFHWCLLYDYWLWIYOFEPVPQDURIOTBORUHSGRMHGBKJMLKACRMZCMYBJWAVDULNIZJGLVGUTDWZFZZFJQAPLXVZEPBLQOUYXTHOQYSFRIJHDUUHKMPAHTVOLNEUFGDNVQVXGRPIIPKABNOOVKQTJUXHSYNDKN");
    msg.lat = 0.28930003529938597;
    msg.lon = 0.35989244288657496;
    msg.alt = 0.008525274927455806;
    msg.heading = 0.1583229757983079;
    msg.data.assign("HLWJIDCXFZMEKWATQTFKWIFKFHDCGXRROIWTHLKULRRVVNWHSMWBJCNLBGAHBOYYIJZBETVRZJLTUXDDNKVCJIFJGYZCSQZDLPLXDOZWFJQIVKBYHJLITQQDCPDFESURNIAMVENRYUWGXNN");

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
    msg.setTimeStamp(0.9698394642955425);
    msg.setSource(14644U);
    msg.setSourceEntity(247U);
    msg.setDestination(58635U);
    msg.setDestinationEntity(87U);
    msg.id.assign("AOWCVYZOWQJPXMFRFPDPTXXSGYTLQETBJWGUSDUTNHMWLLDYHJQDFIBGRNNCKFJBLVSRHRDOTUKIMXLAQYVHCXZYJRGAEYYUWHWZPCVGPZIQMAYYULBPKXBORCOHSETHSKKHCIDBBINHPAREAFMJPVXQEWFTEUUVATLCFNBOUPHSGQJVSJGZUCSSLAVFBFZGLDNR");

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
    msg.setTimeStamp(0.6903168755584242);
    msg.setSource(40060U);
    msg.setSourceEntity(209U);
    msg.setDestination(10325U);
    msg.setDestinationEntity(241U);
    msg.id.assign("BTPKWUPCIMBYYUFHGRMGGSWRNVQAIRIKNXKZHIQDVVIZWSUXFSOAVDLVQMTOSCURPJBMAQZNPKSWJLQZMGBDECJJPPUOYBONNJRXYCTMMKLLMTEEAZFUDHWOCOPQCUTIAYFGFVZIWNYFKUVDISACABJTINHNVWMQESQZLUBTSAIHGWXOKTCSEWVXDGXYG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OQRKIZGWSUXSWVVCLBJSHYUVSFPQRTMSPGFTOEXNHNNLXMJIZSOAEGEFIOWYXHVRSFQUGZOHPZTHRFBXDRQICHAANTBIQNIQYKPLTAKYRZUYZMUJNJLCDAQLDRSRZKSPJOVIMVKKTMPKRWZJJXXMBTTYOESUCEECFFHEYWIMBAWFDCQU");
    tmp_msg_0.feature_type = 210U;
    tmp_msg_0.rgb_red = 220U;
    tmp_msg_0.rgb_green = 44U;
    tmp_msg_0.rgb_blue = 101U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.14861027590690434;
    tmp_tmp_msg_0_0.lon = 0.4174275337461095;
    tmp_tmp_msg_0_0.alt = 0.5975322455377834;
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
    msg.setTimeStamp(0.6517239795902541);
    msg.setSource(51838U);
    msg.setSourceEntity(241U);
    msg.setDestination(59126U);
    msg.setDestinationEntity(69U);
    msg.id.assign("WZJMPTYKIEGPRQQKCYZSFMANQBPRCNVTIEJOHRRKPOXUIEFKJQGGOAIGDMNKVQFCXDJGHDXSBZHAVYZIWETXQSLFRKYWBOMWTCLRGESVAXSKFCFZCSYEYAVLBOLKUXBOTDZGUHHLRDFMAQPGLLTOQUVULCEXPYGRNHJHGOL");

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
    msg.setTimeStamp(0.36994134977160953);
    msg.setSource(8408U);
    msg.setSourceEntity(200U);
    msg.setDestination(16303U);
    msg.setDestinationEntity(162U);
    msg.id.assign("ZVGLGXJICSWGYIBKVIHZGQAYTHGYORZBKCOYWQDTYUFXZBZURMXJFXWKQDKQPEMZEFIIDACLWEHFETFBIOEXPPARMMVCVCGFTTTESEFLTJWGWMMMHVRZPSXIPAKKKROUJAPWBBLATUXBVUAYWHSEKQTHFHDJJNVLEIOJKVFCNWCESXBOISSVPZTLMQNNRUPLJQLDCYSMYDUUVHODLNAPNDNMCZSGAFNSZRRGYQDJQXBKLPWUOQRGUJ");
    msg.feature_type = 130U;
    msg.rgb_red = 134U;
    msg.rgb_green = 69U;
    msg.rgb_blue = 210U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.620196913473271;
    tmp_msg_0.lon = 0.47684194728993345;
    tmp_msg_0.alt = 0.42699092689870455;
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
    msg.setTimeStamp(0.24934017648242368);
    msg.setSource(6423U);
    msg.setSourceEntity(226U);
    msg.setDestination(40886U);
    msg.setDestinationEntity(106U);
    msg.id.assign("KAKCUSTWYDQKPLWKQEBIZASAAAPEOHGGUDOPNNDQMIPIBAHZTSEBOKNRPTJPWDEUMGJRXXMFIDFCPMSVJEVCXUTSFGWTRMXRLD");
    msg.feature_type = 112U;
    msg.rgb_red = 237U;
    msg.rgb_green = 38U;
    msg.rgb_blue = 7U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.623022752699058;
    tmp_msg_0.lon = 0.3303879511049238;
    tmp_msg_0.alt = 0.7021586212250149;
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
    msg.setTimeStamp(0.5307853358736541);
    msg.setSource(50750U);
    msg.setSourceEntity(51U);
    msg.setDestination(15682U);
    msg.setDestinationEntity(81U);
    msg.id.assign("OHWUKFFTQJFODWMITBXXCIACFZQDOUSHEACSQJGTNCXBNRPYBFUAJLWKYYPIHFRQJCTHBULMMVDTCKBBAOGAWTDKRTNKMRCYORXPKQXXYRQPNRNGLIHNJVQERMQXHCBZZIWOPFZYGAJGLAEVFILLNZVECZMSMMPELIRWGPDBPSEZMLESFZNVNTVOVADDWFGVZPJKYXNVSHJSYHGHQOGHDUBL");
    msg.feature_type = 21U;
    msg.rgb_red = 202U;
    msg.rgb_green = 198U;
    msg.rgb_blue = 178U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.49473672992017703;
    tmp_msg_0.lon = 0.14198924039823135;
    tmp_msg_0.alt = 0.5409629095435151;
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
    msg.setTimeStamp(0.7843397120161052);
    msg.setSource(27354U);
    msg.setSourceEntity(69U);
    msg.setDestination(65201U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.8722673626544479;
    msg.lon = 0.6839105942056988;
    msg.alt = 0.6329464753569556;

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
    msg.setTimeStamp(0.48944491077511354);
    msg.setSource(21541U);
    msg.setSourceEntity(55U);
    msg.setDestination(36319U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.9480892217027517;
    msg.lon = 0.9675873573291945;
    msg.alt = 0.08475958558884067;

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
    msg.setTimeStamp(0.8794393491838084);
    msg.setSource(5065U);
    msg.setSourceEntity(32U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.3176414239301887;
    msg.lon = 0.8886987329477745;
    msg.alt = 0.6489560193715243;

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
    msg.setTimeStamp(0.19657363138500739);
    msg.setSource(51061U);
    msg.setSourceEntity(41U);
    msg.setDestination(18744U);
    msg.setDestinationEntity(101U);
    msg.type = 198U;
    msg.id.assign("LUMZOXPSXHGNQAYGGKHDAZVCLHDENNICTKGFJHRUQAMEBOIBIBYUWNENEACOSXOFCHCXUTJLYKMQFDGVSKJPVBWRZRUFDUCWXQPLVZTIDQELAPZMDEATGXPKJ");
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.44613652073138454;
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
    msg.setTimeStamp(0.5036458167925636);
    msg.setSource(58371U);
    msg.setSourceEntity(13U);
    msg.setDestination(43833U);
    msg.setDestinationEntity(3U);
    msg.type = 165U;
    msg.id.assign("DGAIPNXDVOUFXCSELOLRRCNUPWKAYGDUWODPZYWFRMEKTRVJIRWDCVIEBIPTGQXARQUKJMZEICUQLCFKJCXYWQVIIUHMXEGNMSHSYZEFXGOONMVWJWOBBPPCVDVAJTAAJZ");
    IMC::TCPRequest tmp_msg_0;
    tmp_msg_0.req_id = 44078U;
    tmp_msg_0.destination.assign("CKRQAKYZKNFUXFQZVWOEOKNHCA");
    tmp_msg_0.timeout = 0.9463288447899475;
    IMC::VehicleOperationalLimits tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 206U;
    tmp_tmp_msg_0_0.speed_min = 0.06111395997861224;
    tmp_tmp_msg_0_0.speed_max = 0.5748260954992944;
    tmp_tmp_msg_0_0.long_accel = 0.964339216840423;
    tmp_tmp_msg_0_0.alt_max_msl = 0.7785771121401291;
    tmp_tmp_msg_0_0.dive_fraction_max = 0.9807379896171414;
    tmp_tmp_msg_0_0.climb_fraction_max = 0.5043392988369819;
    tmp_tmp_msg_0_0.bank_max = 0.9080477573808912;
    tmp_tmp_msg_0_0.p_max = 0.613407163595194;
    tmp_tmp_msg_0_0.pitch_min = 0.25689307954231977;
    tmp_tmp_msg_0_0.pitch_max = 0.9054887716458772;
    tmp_tmp_msg_0_0.q_max = 0.7548910532649991;
    tmp_tmp_msg_0_0.g_min = 0.2590493922224463;
    tmp_tmp_msg_0_0.g_max = 0.3596457908411178;
    tmp_tmp_msg_0_0.g_lat_max = 0.8727024074689426;
    tmp_tmp_msg_0_0.rpm_min = 0.2645099715058927;
    tmp_tmp_msg_0_0.rpm_max = 0.3857053757377137;
    tmp_tmp_msg_0_0.rpm_rate_max = 0.7096243893205892;
    tmp_msg_0.msg_data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.2011075471324667);
    msg.setSource(57892U);
    msg.setSourceEntity(52U);
    msg.setDestination(19673U);
    msg.setDestinationEntity(211U);
    msg.type = 219U;
    msg.id.assign("EVVUQNLRKTULLNXXOIVYBUWZJAUFSJFBXQRGGRSRBJYXYIKAQDVXONESXSQZAWYBJOKPHALRJZLENXFUNSBXCAOKXQNZQEEHHVHVDSKLPHKMZCHSCWVMWOIMUQGIXJFYBPIDYKGRGWJPAKAZ");
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("RMFSPRBNNAOQLGIHEKWQFRSMXLOOUDJBVJFGDLLFUYQWUMLZXSKEDSBPEPJYDAIIFMZAAIURREDIHPHSFYVYAUSOTTHBULXYHTNXXVZQAGVGXDLRHFPQMVHWIVEJNKGCZMYTZZZBSRUCVTCFCAMDWIVJDPBPXTPFTIJNHGSJXSOLCUVWJCIENKMTROJNCWUMBGEAZBDWETMKKPLQTYXJNCWNROVYONBGWLY");
    tmp_msg_0.sensor_class.assign("MUMENOQEALWKUVBYIVXEMUHJDCJZDKJSDOBFGKSYOUTZJJGBWHPYQLCCQHFSSUTYKLVZYYIHHGWWHNGSLDBMDURAFCOUVUNYAVRSRIYEKPTZXTJPLGFMRGNNXPKTAWRBPUSDDKVZTIVBWJPBCDATQJNNAFGUXCINIXGMWZQTXLRMGJFCEVEIPWTLLOLEWCCKFLBQQXE");
    tmp_msg_0.lat = 0.7758352521663757;
    tmp_msg_0.lon = 0.39481025397135905;
    tmp_msg_0.alt = 0.8398065527565454;
    tmp_msg_0.heading = 0.9316269743039558;
    tmp_msg_0.data.assign("XGMBQMOLZAAVSGADUNQPTNKJYDLSEKYNMQAFLZJTBBWZOVIWPVQRETNB");
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
    msg.setTimeStamp(0.9665036576016093);
    msg.setSource(43903U);
    msg.setSourceEntity(38U);
    msg.setDestination(7337U);
    msg.setDestinationEntity(220U);
    msg.localname.assign("WNONBJPIVACVYHBXHTQQMWPSFOBOJAAXUMBUVFYZXRISSGKZODQLPSACMASGDNFEPIDNJFMPFRWUPESYDTTECRVVPDKNLWEJZHLSHYZOELWCYMJQTDSNXVJCQHXYHGSGFLLJXRIWPXWUBHKYZCVMKZOEGTBHSJOKQUHYKGOAVGUAMBTNUBEO");

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
    msg.setTimeStamp(0.8621722223475694);
    msg.setSource(55097U);
    msg.setSourceEntity(243U);
    msg.setDestination(48564U);
    msg.setDestinationEntity(72U);
    msg.localname.assign("KYGMOTWLOMEJPSUYUMVYSYRHBXYBTHHQJUFVWAAPIXIFFHMUDPTOEZFWFXILMAJOSOFELGERILWZZCOZUBVKQZDDNGVBNEBRHJXNZHXSQDKDSGWJRHTNIXKCUMYALVMQPNTHXPDWKQKPJNYSQEJSXCAFQYLRPWIGTNPIHJGLPTIVOOOIDVPDZABQVXUFDBZBBLRBTKCMSROCECLTUWQAYGNAKWQFGCCTRRMEJJNXDGKSZHUNSWCU");

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
    msg.setTimeStamp(0.0944936851983238);
    msg.setSource(38201U);
    msg.setSourceEntity(90U);
    msg.setDestination(37420U);
    msg.setDestinationEntity(31U);
    msg.localname.assign("ZVUDICRWBEJXSKLFCSWFFAKISGFWBQJATXYKMFFWVMNOICUZAPUCNJNIXREWUSRQWKSDAQUVVBLHYPORMCIXMNYGEOEPYFSSCRCSQ");

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
    msg.setTimeStamp(0.4461354641502754);
    msg.setSource(27830U);
    msg.setSourceEntity(129U);
    msg.setDestination(62483U);
    msg.setDestinationEntity(211U);
    msg.timeline.assign("SQUKJOOUZZWOWRJKHRRDPJGICQZOYXVIMKFEETZXQZNREQBPKTXTMKFGVFLBNGBDSUVDWIXLJBTGELLZHORARXGTQCJJMNMLLGYJVZNSKTATOGPMXVHHVIYFMINQPYGAHLMUASBFUBNUGIPEIWAZP");
    msg.predicate.assign("MYCNWVALITWPDTARBCLUILJJTEFSYKFXCDGCJBRHIRNMVBGBJI");
    msg.attributes.assign("MDSGICTOAZZZAEYLRRGNOYFPOMJNJLCIUOGTARGZIGFSKHDMYHTXTZHUGBFAVKORARZYOWKXOGJTCFRJHXVSWZCUNYJETYUHQSELEZCKDFMIMMVEHAHLDP");

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
    msg.setTimeStamp(0.23514121160263934);
    msg.setSource(30889U);
    msg.setSourceEntity(147U);
    msg.setDestination(5410U);
    msg.setDestinationEntity(10U);
    msg.timeline.assign("PAKWPUDRFYWGGXQRXCFSMJOZGGQFFIRNHBQOUDXOV");
    msg.predicate.assign("CNZKUVOCEZAPWVPRLDANSZTCQXFQGCRUETIKHXCYYRGIRWRGONCWZSQAXHLOKIMQUPCOOZEIFSMRKEDQHOKSDMHAULGUBPQLMSVLNOIFSMMTFNRXKJEYFYKEJGTPFKIMMBDPWKYJFWWXIOANMDNRNKJYZXTNGFPQYLUXVJVZJICEQVXCZXDSJQROVPVWIDLHDEGWGYZH");
    msg.attributes.assign("FRQICWLHAZCGZYMZKPLQXYRKJILHNZMMYDDSCLYRBMBFLIKSWELYCLUTCIVNFVPZFQPVMMDOZLADWYEVSNGZWXCFGXPQVORNRUQXJVGZSEUWKBWCJBVUAOFZPMGEVJAYSYETNGUSOETKIRIFCIPJENHKXXUUAKTWTDIHSPRJXRADTOLNJCWBAOEDXEMNZ");

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
    msg.setTimeStamp(0.9176966873983341);
    msg.setSource(48287U);
    msg.setSourceEntity(25U);
    msg.setDestination(32833U);
    msg.setDestinationEntity(49U);
    msg.timeline.assign("WOCIXFMRBLPIKNCRYMTKLKMFDGJITUARRYYQKFKZVCXVBCWDNEXSUGOHTDASNZAWPZHQAJJJFSQBSHQXJEYUPLCQYAXULFXPDLZRUNYVZYTOQPNLTIDSAWUWSXUUKAUTHACXGNFAOHTVYGDWGSFPHBBJEJZHBBWEIYRQGNGUCINOLFBDREBMQCVZPPEXOVXQWDEIGVJMKMFDMCGDOHSHMVZSGPWKTOEEPYIKTSONVRFEL");
    msg.predicate.assign("TPIVHTDAEXWICDQNYXYZRKAFFNQIRQENOMJYYTYDZUSBHLMAQFCIOLZBRJWCBKYPWPJAGZRXHCYQXGBJVMJRCCYGEEAASHTIWLIQNQXIGDSCVLPXZVWOBSOYIDPBAMWMWLSNLNKOUKTCRUPZJGVJEHCCHHVLFRHMIBFTAMULKDSWOMBVAMXGFVGPJDPWTZNRUOGOJBUDZRAKTNDBZGLMKOUSUU");
    msg.attributes.assign("JGJHTCFDIKTJARISYTBXXLKKWIOVFWHBUDONGOASAKWQFYZKMBLHF");

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
    msg.setTimeStamp(0.8601569072721753);
    msg.setSource(38234U);
    msg.setSourceEntity(63U);
    msg.setDestination(43383U);
    msg.setDestinationEntity(245U);
    msg.command = 2U;
    msg.goal_id.assign("FZKIRRQUGTFAXPPKJQOPPTAJRMJB");
    msg.goal_xml.assign("CRMTIXEOMVUZMAZELJPGXAKHPWCDNEFINTTSQHJBWFVMYREFGPUCSMOAPRONOUQHWDBKMCZAOQSJJFKQLENKOIZEQDARVDVAYKCKZHOXDLEQURTMWXMUORKLNBPCNGGUISVVGTLTNHVWWPFXVWJCFORYFXGQIQTSTKHTCFHTIWZSPBHAPIQCNDFLBBWKJYYAIRZXUYIKHERLXUSZGQBHYDYVGOJLSAZDXSXEB");

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
    msg.setTimeStamp(0.30051378859744726);
    msg.setSource(42202U);
    msg.setSourceEntity(161U);
    msg.setDestination(51598U);
    msg.setDestinationEntity(156U);
    msg.command = 141U;
    msg.goal_id.assign("VXNPCYJRCBZMIHWATZTVEJFYTOONTZQFGWFPASWKGHAWKLMKHDNSNGQZEEWBHOAICVIDGRQEBVITXFAJAXSGXGPWZHENQQYCSEBBCTGMNDCRVBXIVBFONENUOMVIHURODUBWDLPTKTORKRGKNQGOZXSPBLYMYZSDKCRRMWMQUGVLPDUJYLIUQVWYXAAJ");
    msg.goal_xml.assign("YVZTUJQBVBPKHVUBANDHOUUNRIDFOGCJPNPMUABWSDJLGMJUEPHHTFYQLYOJNUWPKZAYQFZXBIKAIUEVYDILHFCGRNDSSVOBHFHIIQEXIEPDLRTDQTXCHNNEPLAUZLSCWQTOVJIOOYTPMCTXDEBRKWXWQIWWSZWHJIYJGRUKGXJQZGGLGM");

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
    msg.setTimeStamp(0.8594228504066825);
    msg.setSource(47475U);
    msg.setSourceEntity(33U);
    msg.setDestination(44574U);
    msg.setDestinationEntity(181U);
    msg.command = 133U;
    msg.goal_id.assign("FQJEKAOIEKSKDEOGKLDGFJXVVHVJNLEDISYOFSQXFXWYMHBFPMTJUWDNNKULNCZZHQWYZIBZQMLEWBPFMBHGVHWGMCCXDTASCBTGUZOORUXGLIMFZDTNRMPVTAECAIRZKCLGQJUOFXEQTACONXQWUZ");
    msg.goal_xml.assign("MBSQMDBOWIUGBDEOQFNHAWBORMIHHPOMGCCXVIOYIIEJZZNUSXYHSZWAPPVDOTFWFRKGMKKVXWBNEYNVMDWPVYBGKQUHTXGYHOFOWZLFLASRCZYIXBQGCMQNYCDLINNQFJIDKCBYUMSNLHEDLGWBZMSSUREWVNRRXUSUTNICCZZHXEIDAETQKLJLPQJPZAJMKAWTOLJXGJJFATFRJUVPAXSVQHELVHTPKTRUOYQGJUDTR");

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
    msg.setTimeStamp(0.31952020977687345);
    msg.setSource(35403U);
    msg.setSourceEntity(97U);
    msg.setDestination(28526U);
    msg.setDestinationEntity(21U);
    msg.op = 84U;
    msg.goal_id.assign("IBQAUKAWLWRLCANHGYJNCIIQKJHFYHOBTHAGWYQNDZXHKSDSESIPMGEUVDUSRMSFSUUGKZJEWNTLTHMQYRZYOLUOZBLZACATRDCONVDPSJAJNRYFKLPENBPUPSIFSKXXFFIYDWXFWLYUTQNCJXMZRLCKNMVQXBQHXEBVRVHIPHIRELYOKRKOVWDVPGGMHMIZAQMWSOGRFBPBIDZEUGCTEVALG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZXXEFAHQJBJLZVNMSYFZPKRDYUBTUADZNFNKGLCIGZRCWLSFKNMADJODMCWTUWOISIECJLVYAXADMGKWXOESFCUARYQTKVCLGFFEQHJBJORORCHQPHZQSHVIBPLPVNWWCBVUEZGGTVSZMEMAGMAHGDXSPGYVUOBJXRDXTPQKENCLRYHIEYQOFQWDOETPYAKWTKLHGNOVUDUBIIQVYPRHOZPBHJXD");
    tmp_msg_0.predicate.assign("ZLTAROPECCTNUVPCDDRMTLPJKPIXJFBIEGPLUXBQVUBNGTYYINOAQVBSXZRTKLVOUINQGCWOZKAZQCWKFAYWYNKNZVJTFLEDCXFJHUXOFFBPBPIVIDJYTLPKBKMUHMXNLWSWNAGEHVDVGSBGRERH");
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
    msg.setTimeStamp(0.6638104572012523);
    msg.setSource(15772U);
    msg.setSourceEntity(72U);
    msg.setDestination(50826U);
    msg.setDestinationEntity(166U);
    msg.op = 26U;
    msg.goal_id.assign("DHDCUWGFCTJDPSDTGIDVFFBQXQVOMMVMRSESIAXUIOVPBJUTGOICGEIXKQQPBGTRSXREOOQJYZXYUDBIHLMJZLNPEGWADWBFPKNLYTFLZYFJNPZVJOZIVBLXIZWINCOMPOUWXNJKKDRAOUAQTKBTXEYRCUAHKRVHLARGDSBLRWQUSFCYHHMYDQCHCNQYXJMCPNKHFQCFULETEWBMIVBGLOZWYKZJUSTGRXESANPSVP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GQEZSPJHVIOJHAGBAJPVEVFEKWCKHXCSDLLXJTIUOVCYMEGTEWCXFXLESBQDGJVQSEBTHAIRFXUALWCWVRUMYHNILFRLLISOBRYUGMQXUQSZZPMEIRPFOHVOMFZ");
    tmp_msg_0.predicate.assign("RHKIXHSPLERRTACOQEZHCRVTXIWPKCVMMAKVVJEFNQDDACVTXUEDZHWQBFBUSFLBUJESIBZBOWTDRKLIAUGISQNYJMYPKXSHGBTISPGOGMIGMNDQJMOSYANKSIWQFZZNMPTZKJOVWCWLTLYBWSFBGBOFRLDNZFXHUNUCNIVRTXFZCDGFOHXQQXYVRWLNLZLYJGDQNPQZMFOYOHAEJJYPMYBALJHCGVDARESTCAPIWX");
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
    msg.setTimeStamp(0.9670272925003929);
    msg.setSource(55766U);
    msg.setSourceEntity(243U);
    msg.setDestination(24018U);
    msg.setDestinationEntity(187U);
    msg.op = 28U;
    msg.goal_id.assign("XMYVDHDKERSONSZWLTXGCCZJGQIRNTTJCKGZOVHAPKNMLCLMPCLJOXEAIPAMHSWVBRFHHFJFVRYOW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TELQKMEVLBWJCFBXOGBMHDIRAHYGIUUKPPXNHTLSIKUPRBGXYXGTOCDZVUXHMSEKTNFOGCGIJHYFF");
    tmp_msg_0.predicate.assign("QBNUVXDHVODLSOFYJLINOQTTSBVQAWWRFYMPWZGAGYHGZMBNNMRNXPMEOKCGWLXVIQODEHHXULYDCFUWORZTUQDXCSTFQJUOFIGXGIRLXREQEZSDIMFZNTBPBACHCKYQGZFCAEE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GCRKSYMVULFYXOTLTWJOPSUJIYQFDCDZCONUTNPLWEYPDPZBKLLWQJZOJFAJIAULXSLDOQHDPYXTNKZSYMBFUNQFDGPVVGTCRGQHEXJCFWSIFVCMUCEOZPJARQQKZKGKHPDHXGMVVWEJVL");
    tmp_tmp_msg_0_0.attr_type = 154U;
    tmp_tmp_msg_0_0.min.assign("NUZIWQNQRZYLNILSSBGEOEYAIGXVVVKDVRSHXMUJCBRPWPCQUFMDQXJWGAKESVPAHMGEOIAPELWUSQAIKQRKFXACYYRDNKEUGRGVYDCBJQFEHNQLTAZTRMMOFUZFAMZFZBDJUYOHWWNXPYHLILLTTSUNCXZOORPSCGXJICO");
    tmp_tmp_msg_0_0.max.assign("RLQASZZYAQLXUCRLHGCVYFDTPTXWMNYURWBWXSAQGPDMMGVOTNKEQZDKASJFJYICDNQYHKTLDMDQXBTGSKYNTDY");
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
    msg.setTimeStamp(0.9319540454106318);
    msg.setSource(18341U);
    msg.setSourceEntity(117U);
    msg.setDestination(15455U);
    msg.setDestinationEntity(29U);
    msg.name.assign("DDBFNGWPLYVPDFYQSBBUZWNKNQTGBTBPALSLZDCJKEEOKZLHQXXVEAGYWJMICQOERWIRUGTIDDRHBCWHVGFTXMBOLXUGOUFQSQWSKRKZHXFLFORBMBLSCUPGFCYQPFKRLTYVXVBUHNEPNNMWWJEZAYITOVJTZSIGOA");
    msg.attr_type = 10U;
    msg.min.assign("VYBACHLCOKHROBIBBHETTZAFNDXJATP");
    msg.max.assign("XDQMNXPCIKFNJDAEGPYZCKDYQMT");

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
    msg.setTimeStamp(0.14977718564604248);
    msg.setSource(63302U);
    msg.setSourceEntity(201U);
    msg.setDestination(37264U);
    msg.setDestinationEntity(156U);
    msg.name.assign("UNMGOXNXQVTUGCAQIRRBCKUXDIWEFMUNLCMGPPFFQRQJFIZOBWBCOZLYFEALFFSUUGDXBTMXEHYZWAWIMRNXKXBPTGHUKFOZRGHCGEEINXGJTMRPEIQAYASNDCESPDPBSYQXHFCSPZJWQIHDVZLTWTBKQKUWICSHBOHTQHZVPLWPTQCODDYDANJMERVBJSTAYJGOKXUKBYSSRWEVJDVLKKVWHPLAHNOMYELIZFVAURVJAYS");
    msg.attr_type = 22U;
    msg.min.assign("JOFONCKCHBSNIKECTXJKQONVJIGDYUZGGTGLRKDJQVWYNMHUFUYZMPXEHCEXSGRRJABWQMHIXGBTDCHLNFFROKAYLIMUROFMTKSDYJTIL");
    msg.max.assign("PCSJTDVJYGYTSVMGKQGSNTTCQCEHBJUNLYHXDMIVLIVQFADOQNDIBNBDXUUHHTBRLVKLD");

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
    msg.setTimeStamp(0.18059510259670586);
    msg.setSource(13092U);
    msg.setSourceEntity(250U);
    msg.setDestination(7729U);
    msg.setDestinationEntity(87U);
    msg.name.assign("ALVUNVOXTZONCMOBZCRDWIGYASWJBKAGGQTIAJDLZBEJVKQOTKCKXXPSGRYSSMUXXMERIDUQHFJSSENSKFWCY");
    msg.attr_type = 222U;
    msg.min.assign("GHYEEYRLSDWLQVTIIAYDQPMAZRQPNGTELWQICKDQTHLYJXVSZEJ");
    msg.max.assign("GKULYMJPPVQRGVCFXCFDAGVORQRFDBGOUJMVPKGMNEVODSQKZZOPHUIEDHAAGXHWXDOUTYMJFFTKWVHBRXAARCUMJCVZQQUBTWJ");

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
    msg.setTimeStamp(0.5865779916481269);
    msg.setSource(57034U);
    msg.setSourceEntity(40U);
    msg.setDestination(12917U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("QWIQQWTTECRGOEDIHIDNFOGJGMLSPWDGZRFNHQMJBOOZCKDFQYGXVPL");
    msg.predicate.assign("DWEIVWURFUZOVCEXXBYAMRWEFWCAADNVOYWYGKPYBORYGBGSACUXJJCIKYASRRZOZZDQFBQXSGLCGEHLHHEFOPDTMSKJZZJQNOYZSFMPPIEOLDBFJTIUNJLKMQQUBDDPZWHHODHZIZVHBQFJNRVWNPWAKTYMXUTMEQJCVFUVHKGYTIFPMUANNQKRVOITTMSIUAXXGOWLECSCPKNISLHWTYIBXVLQACGGVLEBKTJSP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LLPSZVWMTJKLHKBQHBXZVKPKNFDZGZLUGIQFJUFRUBNDDNHMASGFODBKBAYBIYPQXYMNWOCWSDMOQCTTZZGMMRUYFRLFSICXRSBLWTWXIOOEMKGTDPXOGHHRSIXLMBBWIYHCDVFOYPOPNVWKJTDIZVIRQGOLHEAUSRKCVAGUPRLENBCDXXAATKQTLYCCUSGDWEJFETWUZYRKUJEVHVNPCANSJAYJPQNQVZITJEEFJQZWHSNHP");
    tmp_msg_0.attr_type = 214U;
    tmp_msg_0.min.assign("WFBHBVLKNKAOYKSXJWRVZJWZEESSTYYAFIZNKQNSJWQSUVSMBMXLHWLMFYHHARVV");
    tmp_msg_0.max.assign("JRHOTZTYNAUQSCMZRHZSITKVTYAVZZSJLAXYUMEDQBEHXJODJRDIMKLCJYPAVOYVLBGHFRVQYSSFKYCCBFDCUNRPAARSQOVCBMAZHPUGF");
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
    msg.setTimeStamp(0.22820553982791658);
    msg.setSource(34610U);
    msg.setSourceEntity(215U);
    msg.setDestination(10866U);
    msg.setDestinationEntity(95U);
    msg.timeline.assign("ESYVJWZUHNAICYQHDWSZHYLNZBWUADKJSUBYGFPCHQWDJPSDIKAQPPXXHCUERILASAEQIYVQNDGVOFBETDKMKRBJNBQLVZDOYTMIMHCFJXXQZSMDPICAOYGRGPTAHEEUZEKUCTMTLOKCITRSEJMSFJRIWTAAMRKBOBMNCBOFCVEEJJXLHVXRZVBLSSTBYUZNUGWR");
    msg.predicate.assign("UBKJKZQFJSPSUGVSXOOHJRPEIQZFQFJXPOETUVYKTNWQGFHYQNPZCVRUEDDBQDKITWKAGPHUILSXLZYAWBXHMCFNMQUKVMZDRIWBNJHDAJZZHLAHXHFLXSYFPWLAILLMKYCJGWVMACXTVVLNGYSHGONMGLTWNTNUNICTDOEYETBCBCIFAFOMRKEJCDAQGHGIYBEASNRPBSQEWZPGTFZMODRK");

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
    msg.setTimeStamp(0.5908243345840359);
    msg.setSource(59796U);
    msg.setSourceEntity(37U);
    msg.setDestination(23502U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("FNDRFTIFSILJVSOZLAFNQUGHYISMPKLRNFOFSMZYPOZFEVWXUGSZKXMTLJOJCBMDW");
    msg.predicate.assign("PFRTVLJMEOOMTAIXXWOJYGKRNRWVSYSJUNSUYVSNXURYPPDVSUAOXQCTGTYOGYHGEEAAHKBTLOFWFLQDGLFHKRIDKWHBCDCBBQSLDAGDYCDNRJXEWUYJHTVGIOAQQFCRVHPVIHWUCKEGAKXBRBPTJZBQXDBHRECZEURIJNVNSQZHMMYCQOZZWGSCFQTTLPWJEJXZXPPZGKBOIWNUILWBDSFEKXZOUZUTMMPMVJNIAIAMIDYHLMPKVAMFZN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RADMBWNDJIOSBXLHDDXNRUIHAGRXOBIQHMUANMTAYEUPVYQIMJTWTUOMCBQBXWHPZPW");
    tmp_msg_0.attr_type = 28U;
    tmp_msg_0.min.assign("BGNFVRPAIUNUCAXPIATFABTTJRFNVBDEWJKIMULISCHJUBVAKESCGHSPUDZIVY");
    tmp_msg_0.max.assign("MINNBYYVPTIMOPXZGXQLNJBSYQNREKOKOGSEBOGF");
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
    msg.setTimeStamp(0.7622671760418721);
    msg.setSource(23449U);
    msg.setSourceEntity(24U);
    msg.setDestination(11510U);
    msg.setDestinationEntity(106U);
    msg.reactor.assign("ERRIONZMEEIXANRBATDFIHCXLOAYDSLQYCPUPPTAWGOXSZSSWMFJZCLRPPCFDOPTQUJYPHPCMNGGJBJZIBNZLXTIRKJKBCUWHGDTHOGZHRTBFXIJKBKDXHNHGBGXGVFJOATSQOYWTLFSYXIDULKREZVQWGDSEFYRNRLKSIMX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CSESUDKRNFPITUMOGZGVJCHDIGGIVNBVZTPFOCKZDTAJHQGVQTQFETXAPTAHKDNRYXRMOYPEOPZKMAHFAJDMRCWWHXXEVYGDKOFLCCBONZLISJWYXBZHJOPWHLXURIJBBEHFQKOSYHWOTBBHWRIUNJFBLQAVLELAZCEZJCVMW");
    tmp_msg_0.predicate.assign("VAPAAERLJHTBZSBSYDWPZHDTQQGBDQLKODVAIELZKGVEUHYVXUFKGRQWYEPBCZPSGWSENMHWJQKWOIGYVXCCKHRMGVBBLYKJXUH");
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
    msg.setTimeStamp(0.3870331601449326);
    msg.setSource(28476U);
    msg.setSourceEntity(34U);
    msg.setDestination(23202U);
    msg.setDestinationEntity(139U);
    msg.reactor.assign("TWAPIIABKYMYNXUDIERSYQAPVJBKWEHNTTDHAUXTVMGMMOUURIJSOXHCFMYEOILQLRURFQAFVWPXVGKCNLUYAWOEMBZZXNLULQHTWFLHPTDCEMVHAVWPVXMLSDUYMRCRQJRCRDXCSBGDHZDILEZIYIZJFCKSBGSWKDEOBKHJVXQDNBPCJPZSWGJLEUNCGOFPSWQGDAZEUQYNVVNFG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ARIJNMZPYCNVYZTTPZDBOOHWACYULDTJVMBSMJCJCRUDYVWQIGUSOBLVGOWJKFFNMLRPUVZECFWMQKNXNEEFYHWGLOFTHORJXVHLHLDVKVZYYU");
    tmp_msg_0.predicate.assign("JRXMBZVTBTQXTSYLWJLYBKFQZKCTYMYFIRECVUEJHRNAUHGISDKJIUZWMRNLFNDQSCOBPYVOQKZOMHWZSM");
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
    msg.setTimeStamp(0.3442353689329378);
    msg.setSource(49695U);
    msg.setSourceEntity(46U);
    msg.setDestination(54523U);
    msg.setDestinationEntity(75U);
    msg.reactor.assign("GBBDRXJAMPEHUSOISKIYJERDKHLMNNVDOIUICJQWOUZQNAFFJQLRWYZAJNZCPCYZBOYXHHVGHEJYIOUPUGYLVRCRNBMOTXWTFSZUUXTCDCBDAPPBHCLSGYZFZWVGXLDXHBTWRYFMQEFTJGMEKM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QVDCVNXDHLZESDWHJABLIYORHWXZLQXGQVVZQWYUMSIZMWBHLTZDPGPIHBNKFFCPSJPFAPGOLCQUEVUITLPYNEBYMTFSRIFWATMSIPXFSFQONKFQYTOFFNOKSPPJSRBHDKTZE");
    tmp_msg_0.predicate.assign("BRHFDFSVTGZSIQZJUQMEDPJGRSN");
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
    msg.setTimeStamp(0.7053627760975947);
    msg.setSource(51125U);
    msg.setSourceEntity(250U);
    msg.setDestination(57262U);
    msg.setDestinationEntity(116U);
    msg.topic.assign("YUPMYJFRNNQWKNJRGDWXYBLCNGTPAHCXPIRPFHZBYFMWZBESAXUMEOCKBNXVDSPMOAAGLYONAVATBEAOJWVYKQJKUGQJBBXWQOFQLZDDDHLHWHKJDIWVGKHUKHMVNWIZEJUSZDTDVXXHONESSGQPHFXSAYIWUJMPGTTKCIZUSJNDFERMGPZCW");
    msg.data.assign("HFOIOFDDQTJCFVWFXMLZUVEUEGVPAJYKUURGDVDMVBPBVIHEQOZGUESKSWNATAUQGBQIFALLLYQJXNUT");

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
    msg.setTimeStamp(0.43810651854565263);
    msg.setSource(9581U);
    msg.setSourceEntity(90U);
    msg.setDestination(39379U);
    msg.setDestinationEntity(178U);
    msg.topic.assign("YGVNKTUZDAHBMIMEWTUHCPALJPCABEVJWQKZWDGTPUFKXMVDGKRUXCBGJBHIMCCQXIQWONWGLECENPIYVCUBTDLVJLQCXFHAHYUNYIJLFRURQMAVQDSSRRTFOZUAFXPOGRFSWEHCPTZRPLEQJQAXWPEJVOEHFJLOGB");
    msg.data.assign("UFPSYWKUCRQWHIAIEXJWRWYNTREFDLHCZIIXNAJMVSHOM");

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
    msg.setTimeStamp(0.9652420414120324);
    msg.setSource(53312U);
    msg.setSourceEntity(26U);
    msg.setDestination(62610U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("VXLYCQJUKBKJJBWZQSIBVYHMWAUSSOZFKEIQOPACKPPXMMBHNHHXUGYLUAGNWUXVGMIZYVBFIQSETYRRTVXAHEZKGLMTYXAIPUVPEODILQQFQCLDZXCNHFNXALLUXDPCQGGFCMSZADDJHRPDJRBPGRINKIVLUCWNUHDTPIOQGOWEAKTOZNRLETFZEEZEBLDRUVKJSFXNMIFHRVEOMYYMNGBWTBMWYJPWVJKWCJTOQHRSDOBFACDSJGYCWZNOTK");
    msg.data.assign("HGOTYBXIXZNNSGDYZZWEQOKOUDTVVSSUQKUZYSLTYCPZJIQRRXGLMJZLJTWHKKFACQCYOKKGFPWXTMSPNFSDMDMHDUSOJEKBWXIBHAYPRPCSVINFRNGVLJRBJIEUWAWHLHNSPGOSGAUFKCEHCLTQOWDLMADWDTFLPMYWEXQJEBLFVWMBVRQZITBFFUOCJRZQBBCVDVDCEBNNAJTUAMECAFONGHIXUXGVVXMPMJTYZRHI");

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
    msg.setTimeStamp(0.9401003353071405);
    msg.setSource(18828U);
    msg.setSourceEntity(203U);
    msg.setDestination(23303U);
    msg.setDestinationEntity(117U);
    msg.frameid = 237U;
    const signed char tmp_msg_0[] = {-10, 81, -39, -84, -106, -18, 79, 42, -22, -85, 77, -25, -119, -120, -29, 92, -17, -96, 86, -21, 54, -51, -38, -113, -42, 82, 121, -67, 63, 121, 5, -9, -18, -24, 100, -15, 109, -6, -41, -30, 23, -100, 121, 6, 49, -65, 66, -94, 49, 80, -110, -94, -11, 40, 27, 112, -62, 19, 73, 59, 42, 39, 91, -18, -54, -20, -60, 81, -116, 73, 44, 82, 71};
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
    msg.setTimeStamp(0.1906532052234292);
    msg.setSource(693U);
    msg.setSourceEntity(125U);
    msg.setDestination(18370U);
    msg.setDestinationEntity(87U);
    msg.frameid = 141U;
    const signed char tmp_msg_0[] = {-87, -15, 2, 76, -6, 95, 51, 91, 82, -48, -48, 24, 125, 73, 40, 110, 40, -111, 126, -60, 110, 41, 99, -88, -19, -12, 81, -25, 81, 42, 94, -26, 114, 74, -106, -105, -102, 56, -120, 91, 122, -121, 102, -126, 10, -114, 79, -46, 106, 33, -44, 9, -70, 76, -38, -76, -61, -74, 19, 34, -1, -115, -86, -121, 39, 106, 25, 92, 100, 115, -48, 62, -28, -6, -77, 73, 126, -75, -86, -126, 49, -29, 4, -34, 76, 23, -23, 27, 37, 33, 3, 48, -32, -43, -106, -109, -103, 41, -41, 88, -20, 110, 11, 113, 44, 48, 56, -17, -57, 73, 49, -101, -36, 37, -115, 90, 64, -51, 98, 52, 10, -94, -123, 111, 7, -11, 2, 40, -28, -78, 37, -37, 68, -126, 56, -122, 7, -107, -86, -87, -1, -75, -90, 28, 31, -8, 34, 112, 61, -116, -113, 65, -122, 120, -109, 85, 122, 111, -94, 77, 102, 59, -46, 83, -105, 32, 41, -110, 49, 27, 25, -74, -62, 23, 34, 40, -60, 114, -2, -6, 51, -31, -96, -5, -79, -39, -36, -21, 119, 83, -101, 75, 48, -87, -113, -76, -90, -85, 19, -90, -63, -81, -38, 80, -104, 83, 126, -22, -80, -12, 50, -125, -52, -52, -72, -118, 5, -102, 101, 27, 11, 48, 3, -33, -1};
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
    msg.setTimeStamp(0.9583223380349571);
    msg.setSource(24321U);
    msg.setSourceEntity(28U);
    msg.setDestination(47706U);
    msg.setDestinationEntity(61U);
    msg.frameid = 47U;
    const signed char tmp_msg_0[] = {-11, 103, 85, -23, 58, 113, 94, 70, -19, -85, 105, -48, 98, -65, 60, -32, -26, -123, -23, 12, -17, 126, 61, -4, 122, -3, -50, -112, -45, -116, -5, 107, 30, 17, -41, 22, -95, -9, 102, -120, -111, 15, 23, -125, -120, 15, 52, -44, 87, 62, 87, 5, 19, -44, 118, -7, 115, 19, 49, 25, 91, 69, -73, 73, 3, -33, 55, -61, -14, -40, -128, -1, 68, 10, 17, -23, -121, 31, -30, -37, 54, 0, -28, 75, -108, 103, -97, 99, -111, -123, 66, 88, 42, -74, 46, 15, 58, -41, 99, 119, -102, -72, 17, -57, -92, 78, -78, 60, -93, 72, 94, 72, -57, 10, 83, 69, 42, 106, -64, 1, 124, 125, 29, -38, 69, -14, 84, -1, 57, -72, 43, 77, -33, 80, 116, 64, 19, -80, -117, -71, -109, 63, -65, 39, 103, 31, 112, -33, -35, 125, -27, -81, -83, 58, 107, 90, 84, 55, -9, 113, -68, -114, -45, -29, -46, -76, 88, 84, -125, -24, -71, -41, -117};
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
    msg.setTimeStamp(0.9070819232722619);
    msg.setSource(53956U);
    msg.setSourceEntity(89U);
    msg.setDestination(49563U);
    msg.setDestinationEntity(43U);
    msg.fps = 209U;
    msg.quality = 233U;
    msg.reps = 87U;
    msg.tsize = 133U;

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
    msg.setTimeStamp(0.3318091163586303);
    msg.setSource(14766U);
    msg.setSourceEntity(208U);
    msg.setDestination(10169U);
    msg.setDestinationEntity(117U);
    msg.fps = 223U;
    msg.quality = 75U;
    msg.reps = 212U;
    msg.tsize = 235U;

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
    msg.setTimeStamp(0.612856948668387);
    msg.setSource(50457U);
    msg.setSourceEntity(124U);
    msg.setDestination(47892U);
    msg.setDestinationEntity(2U);
    msg.fps = 96U;
    msg.quality = 32U;
    msg.reps = 192U;
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
    msg.setTimeStamp(0.3350349173244509);
    msg.setSource(17033U);
    msg.setSourceEntity(254U);
    msg.setDestination(33653U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.15272412021123105;
    msg.lon = 0.7886590227386023;
    msg.depth = 222U;
    msg.speed = 0.7915010125340431;
    msg.psi = 0.6527692637821815;

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
    msg.setTimeStamp(0.615409515682047);
    msg.setSource(61150U);
    msg.setSourceEntity(203U);
    msg.setDestination(28735U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.03480122478380254;
    msg.lon = 0.03319601533122396;
    msg.depth = 155U;
    msg.speed = 0.9449116425713819;
    msg.psi = 0.9641721795329178;

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
    msg.setTimeStamp(0.14676828698923872);
    msg.setSource(27454U);
    msg.setSourceEntity(191U);
    msg.setDestination(54423U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.865455513496393;
    msg.lon = 0.024303777558402295;
    msg.depth = 11U;
    msg.speed = 0.16125497413772927;
    msg.psi = 0.17715282518378062;

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
    msg.setTimeStamp(0.056743098455933505);
    msg.setSource(12884U);
    msg.setSourceEntity(244U);
    msg.setDestination(18187U);
    msg.setDestinationEntity(165U);
    msg.label.assign("ERXLYPRICKIWJDQFPNYHHOVFMYTDNDHYBHFVEHIAIUPGEGJLIWJJQZXAADIFXCARCTXMJCUQRYFRISZSBDCFMIRQSYSUGPRWTOP");
    msg.lat = 0.8596169495748859;
    msg.lon = 0.3360407623748243;
    msg.z = 0.14899298994718413;
    msg.z_units = 185U;
    msg.cog = 0.5869403284976159;
    msg.sog = 0.41013774105049006;

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
    msg.setTimeStamp(0.11340249725179397);
    msg.setSource(46470U);
    msg.setSourceEntity(130U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(171U);
    msg.label.assign("ZJYHUPYMGCHYYMSVFQZTFOHXWWMIZXJBUQFLLFEPCWKEEVEAKKPCUXRPXSPSNRELEUNAMEOTGI");
    msg.lat = 0.6488291708150895;
    msg.lon = 0.4188442552745052;
    msg.z = 0.724195581401718;
    msg.z_units = 167U;
    msg.cog = 0.20280780894746597;
    msg.sog = 0.3122606975671489;

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
    msg.setTimeStamp(0.3928161573479364);
    msg.setSource(27728U);
    msg.setSourceEntity(89U);
    msg.setDestination(8710U);
    msg.setDestinationEntity(7U);
    msg.label.assign("SUFGYGMVOHJQQSKNRNLEWUMYXIQCJTKWBXVZIBNOOBHLZCHWKCGCOICOISLRIHZQCWKWAPLXZYGAIIXYAFQBOISLDDXTUXKPMFFYNCZETPDGSMMVIGJOTOHXVUPFUXSPEZRAGGLYTLWDRJAAVLUFZEBWWFIZYFNGBOVDJKMKRSVZQQHTVPJHCHXVOKDTNAEDRPEUAZWNMMSUPPYXMBRERCFNLBRBKPSN");
    msg.lat = 0.3765023402709532;
    msg.lon = 0.374884736906544;
    msg.z = 0.1052664148957354;
    msg.z_units = 24U;
    msg.cog = 0.9408706489483663;
    msg.sog = 0.4103756237314038;

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
    msg.setTimeStamp(0.6858981602646628);
    msg.setSource(26987U);
    msg.setSourceEntity(187U);
    msg.setDestination(18756U);
    msg.setDestinationEntity(224U);
    msg.name.assign("WSUCTAYNKVHNTBQOMVNSMRFZQSCJFLOGKXMQHALZKGQVXAZEIOWPBRNOTAWSUVARY");
    msg.value.assign("BNKAOAFLRZJMXPKLAQYCIYWFTULZRRIIIQPHJWHJNYIGKDXO");

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
    msg.setTimeStamp(0.8623745829141098);
    msg.setSource(62557U);
    msg.setSourceEntity(198U);
    msg.setDestination(40081U);
    msg.setDestinationEntity(183U);
    msg.name.assign("RQCVJGZLEKPAEQREOHBPIYMENFHBKHSSDZFGBFVVCLNJKTBCKRAQLWDENIUKXWJEOQRIBTQZFXLPNNFYONFMHGWCSJDSDTMJIPYYUUOONOYVRGWJYDYXOHGLJAMATVVGCURVVQPH");
    msg.value.assign("WXVXBAPOHNHNOXIHZFGZXWHTNPXLSKSAMUJNOFRSOGZIZNJKLBLRBHIKPQDQJOEWFWJAFBLAEURZUZJITUEPATZWXMCOMEHRYYGBFBOTJDVR");

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
    msg.setTimeStamp(0.9940585787200891);
    msg.setSource(34436U);
    msg.setSourceEntity(186U);
    msg.setDestination(50242U);
    msg.setDestinationEntity(6U);
    msg.name.assign("JUHILVKCHYWTBXJNLJSWMLAXKQIAPSSAGKGQAERWATSDDHMEQAVVNOJOQKBLQRGDIPTKIWMTJXWSBYZFRWQWZRTWKUMUFRNENOJVZLMQIFTPOGFXHPE");
    msg.value.assign("QGGDFJFUHEISTXDLJVXHBWOIVOCSQEKWHJVQRMQPAXGTUCOAENGQBNUYPZWSDBTAFNQEEYWJENHHIMUFNSPWLXLBXSGBXUZMHDOOFRVZKOPUDFHJWOVIAGNDAOAXPKRUDKFFTCKEOPMFJZMCUNIZVJIERCQJAJJMPPDPTYCXXWEUDZWYBITHTIRLLQARWCDYVCZSWKYAEBLLFNTBYKGGLNNKHLGOSITQCRQCX");

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
    msg.setTimeStamp(0.554568137223592);
    msg.setSource(41311U);
    msg.setSourceEntity(70U);
    msg.setDestination(20655U);
    msg.setDestinationEntity(94U);
    msg.name.assign("YPNUXBULKFKCNXHROSKOYFYSXHYQVVKMJJPSAQUXAVNTZOREITMMSLGDNTARMAKUJEVJSJYBWDANOXAJQYRIIRHE");

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
    msg.setTimeStamp(0.9294502642110665);
    msg.setSource(50658U);
    msg.setSourceEntity(39U);
    msg.setDestination(32920U);
    msg.setDestinationEntity(147U);
    msg.name.assign("TLJMYXXIZQEGTWNALAWROLBTHZBJTFKUREPMROZEENXTCAGVLBOETIHNYDQKOMKYMCZHDZVBXPTWRRQPSWMCVAEQWYAYSUDVBRGGYAWDHJUMKISKSGYIKNLPDCXJPYNKEDHVFWCNHQHHSJIEIQXRTMUOJNOCFXIFLOJFURRULLPXWHTSDBV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XTXWYHZUUHWARBNDHJIDXJKNUIZEXDQCAAPMFEOLMPGSHRXHNZBVEGIMBYTAICAMLVIYSEHALTUBQKQVEDFOIVRCLBYGKPSQJVLGPTWHPLKPTFJLBAWWUHCYAXDXUPGQCJFMQONOFNCJSPMWNNPVMBBTLCZKPDJYTRZDIKUKBZJLMAERKKZDMCNRGZGRXZWFXWOGCOQRUOYNJYIZUHTNIHQIOUEE");
    tmp_msg_0.value.assign("ASYBEGWWODJTRMAZTUCDJYKKYPCFAFCLJZYAFKRLERGCONVUIFIVLJIWUBQHKFBUEBOGMHWBXONYQ");
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
    msg.setTimeStamp(0.8384874495407691);
    msg.setSource(30602U);
    msg.setSourceEntity(80U);
    msg.setDestination(27667U);
    msg.setDestinationEntity(205U);
    msg.name.assign("QEQVMAGKREUVNENWZHLOVGYYCB");

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
    msg.setTimeStamp(0.2305852889105262);
    msg.setSource(54103U);
    msg.setSourceEntity(228U);
    msg.setDestination(24195U);
    msg.setDestinationEntity(25U);
    msg.name.assign("SPPAJFBUVVSGAGUYQBHHMBJWSIHSFPTIKXPCQWQNQIZOHVNFRMSIZJOKCZGDYHNWOVJVCKLKJCYYKUAGCRSXTUGCBPRECRHQLBMEQIXXWPZGBOWGWTOWATZQFTAHJXTUSYOMFWYTURAKANCUDYLWCLDNKMYOAXIRRNXDUTQUUBSHKJOLJLZEMNZNSKJDLDFGEMLSIVIZFXCNEQHOVEMVGXRETPVDFZBKPRDEVQTEYINJELFMGO");
    msg.visibility.assign("AZVSHBXCCQBPMGWFBCNRHESMYLXFRACTIVFKVY");
    msg.scope.assign("OCXWVAGQFVIDSNMJOSZHMSBAKUHGJGNFYZSUGTEDXGJWLIDXOCPRQKDUNIHCPGRTWQKHM");

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
    msg.setTimeStamp(0.6767479878138757);
    msg.setSource(13335U);
    msg.setSourceEntity(198U);
    msg.setDestination(61407U);
    msg.setDestinationEntity(34U);
    msg.name.assign("MCDNNMIQDBAGHUYXKLZFDRVEABZWHRCFFQTMBKKQPFASWZCONHOTHTWAAXRYIJFCOWKCYAZRUHBFIJMLEIBIATESOJVGVSGSDDMQJHIVHQETYGRLRUUAZOKZNBHXBIPUANTCYDDJGWXXJZSUNTVXBZJBXPEIKXPFMPWPUXWOQKTUSENQLTMSNQVCREPLJSGDOBYPXYOVYSLMPKELTLLIVRNOKZVGGR");
    msg.visibility.assign("QJEOKLJQFAZUTSOGSDBCCNWAJGAAGXXWSORNMGAPLHZBHMJXKSTKNKAHUINPFZSVGSHSIUNDNJRUXFERYLXBWYTFLEUNYMTN");
    msg.scope.assign("HPTRDLOBGBSCDJYOIRUBYFKQIDPMAQPUIMILUVWEQBZROJFNOHLQSMCZOMALYUTKWTGCYPBXJWFXISCSVVHELTUEQJQHZKQEPZYSUKFMNUHUXWKTZMAETFIDARJCQRGYRCJNEJEUSNJYTVGNLECCSYCBOWNKWAZDRTBFXPIXDGBYVGVFOGDLVZFUHTWHZIHCLEPVHLMXNDZAWNOHFNP");

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
    msg.setTimeStamp(0.39131828091247944);
    msg.setSource(9594U);
    msg.setSourceEntity(75U);
    msg.setDestination(47570U);
    msg.setDestinationEntity(34U);
    msg.name.assign("CLFFLGJREUHKXHNONFCZWIGRBISYWCKWYTXYWRJGAULOSBETCOPTJXBGDUEJAOXPWEOYZFQDHJWZWOEIBQHQNYPMKNRD");
    msg.visibility.assign("KDIPAUDRBQVBTNNGXZWZJVPPGRLHMNGVDPFGFRTNOSWLZODSAWWPSEYHSGAAYNVEBIPKXHCLSI");
    msg.scope.assign("JOEDNZUUQQIFVTYGOSJMUVJTSIJQLTAZNYOCOHPWCLLFCAKHTVOAZYKFADYLUBATSFIGEGGIOUEZWLLIRNSFBNCFENZNYYWBMIQRDESTJRMBMGABVJDKXFMHKEWIUEHDHSCXHKKKBDWSBVMUDNXBUXQOIAXVIDWPHXROYAPVZCHMGRDYHQPMLBPTLEJWJPGLZFXDXGGOYEKURTCXTPRZUBTRMVCEONQSVFQPCMAGQYPZNZAKJRNVWWQR");

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
    msg.setTimeStamp(0.7548154408896903);
    msg.setSource(21903U);
    msg.setSourceEntity(142U);
    msg.setDestination(20146U);
    msg.setDestinationEntity(254U);
    msg.name.assign("GKHRXGAJXDNDDHEFWCKIBIORNYDZJPWUMUDWLTJBONMTZTTAJGZMVEKMRMAYB");

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
    msg.setTimeStamp(0.3811982926614462);
    msg.setSource(39235U);
    msg.setSourceEntity(235U);
    msg.setDestination(13856U);
    msg.setDestinationEntity(92U);
    msg.name.assign("GFGKTTFWEPAWNJRGBJTFHXMIUYHORKAAOMUFMMAGJSYDRXETIXBECQYIQJRGLEPUJBNJWLVPNOGMCXJBLVHGAHDVLGVVCZIREPZLIQPOLVNQZBNIEABIPNKTLMZERAPFOODUBCXCSSQKTQYSDMLSVWEYQSCCFYFYKZHRMKWLSJVWPBJFUYIVXFDDMBXNPHLTZHEZDKDKSRWHA");

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
    msg.setTimeStamp(0.6545010037779522);
    msg.setSource(50535U);
    msg.setSourceEntity(64U);
    msg.setDestination(43968U);
    msg.setDestinationEntity(33U);
    msg.name.assign("FOIIVJCRUJTPJTPTBDOGVSULAUHYQVPGGQCXLQXFRJRVVMUTCEMNDFMSHYUXBOFMWBFYPJWJNBADHRQXZLELCEMKWAORHKSYXKBNCNWLFIRHSWNIKBITACZRMVJKUMRTPAPGOVGTHWTRADOTUMKSG");

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
    msg.setTimeStamp(0.5759204968682996);
    msg.setSource(63081U);
    msg.setSourceEntity(104U);
    msg.setDestination(47606U);
    msg.setDestinationEntity(253U);
    msg.name.assign("TMMCOEUNRDDIAJLTCDBIBWUCFGNQCEPVXQIIDVVVZZVNXPGSNERXZKPVXASHJFKZYWYPKZBWPUUHMLFGSEMHLZIFXVRFQLULRQCDAVHCYGBMJDJOBYBQCRVGJYBHBPZFONTLCUOMKCOEORAJSXICLITILNWPHDQFFFEIZTUZEUMGWAWN");

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
    msg.setTimeStamp(0.6214151968363405);
    msg.setSource(36039U);
    msg.setSourceEntity(67U);
    msg.setDestination(24830U);
    msg.setDestinationEntity(15U);
    msg.name.assign("QCAAOOVXMWDPXJJXLHNNKATZRXTFZHAPIHUYFIWBZV");

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
    msg.setTimeStamp(0.8411360980047442);
    msg.setSource(20007U);
    msg.setSourceEntity(84U);
    msg.setDestination(31043U);
    msg.setDestinationEntity(238U);
    msg.name.assign("XRGDVXUYFJAFOTLIPSTXJTUTZMGRWYVBOQUKLUKWRAFJIMSMDVHMFFHJCSQPMJSEXETFHGDPFQZZQBYPAHKRMTGLDZWCDTADUVWAZOTDPPRNOAYEITNLJWNTKLMWC");

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
    msg.setTimeStamp(0.01593777989477052);
    msg.setSource(5879U);
    msg.setSourceEntity(31U);
    msg.setDestination(58933U);
    msg.setDestinationEntity(34U);
    msg.timeout = 749070265U;

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
    msg.setTimeStamp(0.5789956286881239);
    msg.setSource(31125U);
    msg.setSourceEntity(198U);
    msg.setDestination(10322U);
    msg.setDestinationEntity(206U);
    msg.timeout = 784355041U;

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
    msg.setTimeStamp(0.9375145194484847);
    msg.setSource(45329U);
    msg.setSourceEntity(146U);
    msg.setDestination(6516U);
    msg.setDestinationEntity(138U);
    msg.timeout = 795423475U;

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
    msg.setTimeStamp(0.07810552469297805);
    msg.setSource(9727U);
    msg.setSourceEntity(163U);
    msg.setDestination(35053U);
    msg.setDestinationEntity(30U);
    msg.sessid = 41695240U;

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
    msg.setTimeStamp(0.06679866801752687);
    msg.setSource(38816U);
    msg.setSourceEntity(238U);
    msg.setDestination(17918U);
    msg.setDestinationEntity(223U);
    msg.sessid = 2958864545U;

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
    msg.setTimeStamp(0.25763615582674715);
    msg.setSource(5719U);
    msg.setSourceEntity(230U);
    msg.setDestination(11188U);
    msg.setDestinationEntity(162U);
    msg.sessid = 4269344576U;

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
    msg.setTimeStamp(0.6562042832118996);
    msg.setSource(7966U);
    msg.setSourceEntity(139U);
    msg.setDestination(49587U);
    msg.setDestinationEntity(66U);
    msg.sessid = 3518851697U;
    msg.messages.assign("SQWWKZHBIACEDYSICHIQIZRLPHXRQKMLZEVWJNLXHWCTSXYQEAEBNSPYUURGJCTOKFUUSMTLKMMYKWFBRFJNVAGBNJDVRSUISGNADTZLOIOYVWBNOXRSSKQPYTBVTALOWFVMDEXZKUQCUJOHTLMFOLPHXXUBZFOPLQWCPQSUANVHMPDPGGFYQHHXFGGRJCBDCVPKVMGFORKBWLCEACPDXYZMJEOYJGWTDIHNJYKGTIADIEETZFJ");

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
    msg.setTimeStamp(0.22787277372007975);
    msg.setSource(39573U);
    msg.setSourceEntity(222U);
    msg.setDestination(64410U);
    msg.setDestinationEntity(69U);
    msg.sessid = 32606466U;
    msg.messages.assign("FZQRAMXXPYJBKZMLVCHOCJDDOEDEMGPIAWSHIQWNBHTBVTHXKMDYNFYZUJMBQFELPSUHGXWRZLHVSNVXDAGRNHAFPRKDITCFYQQUPGTFSBGNLVTQHNVMILOUFJUWYOSYVEIEKUSUSIEABJZYAUOJE");

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
    msg.setTimeStamp(0.4940466651911478);
    msg.setSource(28068U);
    msg.setSourceEntity(81U);
    msg.setDestination(36691U);
    msg.setDestinationEntity(168U);
    msg.sessid = 4144800557U;
    msg.messages.assign("VZGOJEDVNOXKWCJAMRXHHGQUKUULPPDTIQBHA");

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
    msg.setTimeStamp(0.9201660181148388);
    msg.setSource(37717U);
    msg.setSourceEntity(21U);
    msg.setDestination(28951U);
    msg.setDestinationEntity(232U);
    msg.sessid = 2555216066U;

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
    msg.setTimeStamp(0.43256133665767305);
    msg.setSource(21395U);
    msg.setSourceEntity(5U);
    msg.setDestination(16921U);
    msg.setDestinationEntity(161U);
    msg.sessid = 1378833577U;

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
    msg.setTimeStamp(0.4805673045376363);
    msg.setSource(60537U);
    msg.setSourceEntity(191U);
    msg.setDestination(21255U);
    msg.setDestinationEntity(115U);
    msg.sessid = 535236025U;

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
    msg.setTimeStamp(0.7099984622006541);
    msg.setSource(744U);
    msg.setSourceEntity(19U);
    msg.setDestination(47266U);
    msg.setDestinationEntity(253U);
    msg.sessid = 1464945039U;
    msg.status = 194U;

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
    msg.setTimeStamp(0.8629433342775096);
    msg.setSource(59021U);
    msg.setSourceEntity(131U);
    msg.setDestination(11843U);
    msg.setDestinationEntity(48U);
    msg.sessid = 103191852U;
    msg.status = 248U;

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
    msg.setTimeStamp(0.9720453920052214);
    msg.setSource(53046U);
    msg.setSourceEntity(56U);
    msg.setDestination(50060U);
    msg.setDestinationEntity(252U);
    msg.sessid = 2468064463U;
    msg.status = 5U;

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
    msg.setTimeStamp(0.008276605279584404);
    msg.setSource(34766U);
    msg.setSourceEntity(192U);
    msg.setDestination(37280U);
    msg.setDestinationEntity(181U);
    msg.name.assign("IGKDKEWZRLATFSVOWBEXOZMCICBPXY");

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
    msg.setTimeStamp(0.4465157739196992);
    msg.setSource(4375U);
    msg.setSourceEntity(66U);
    msg.setDestination(43090U);
    msg.setDestinationEntity(96U);
    msg.name.assign("WCVFBXQIPPNNERZRJSIIRJBAXLIWPGUDWWFOZIWEXIHGURIPTGPKGKLOCEFGFTFXISTFWTLZPTWHQERBBYBTMZCGSIMIDCYYZAARDXHGVVFVUNMKVDDXLFBAZNKHYQN");

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
    msg.setTimeStamp(0.3534189118554607);
    msg.setSource(26170U);
    msg.setSourceEntity(68U);
    msg.setDestination(29895U);
    msg.setDestinationEntity(216U);
    msg.name.assign("BAHLEUKULWQSOHHPWGOYOZPYVMOJIQRZDFWDWRNS");

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
    msg.setTimeStamp(0.06531603659409213);
    msg.setSource(35942U);
    msg.setSourceEntity(103U);
    msg.setDestination(65391U);
    msg.setDestinationEntity(145U);
    msg.name.assign("JPPJLKKHHRSUDSBNDSZLLIAAHVDZOMCBDWHHIJQUBLCFTZNVMLDMEQYDYRYHWZJLROGBJONAOINKKMF");

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
    msg.setTimeStamp(0.519921301854812);
    msg.setSource(58231U);
    msg.setSourceEntity(57U);
    msg.setDestination(24992U);
    msg.setDestinationEntity(24U);
    msg.name.assign("MJZXJNBEEIWHYEJVVNIIYQMPDZIKHTALJDWATNBYDXAFMRTCNGXMSDPGLECQHZZUIMSFTYQURHPETAUIWPNDHODQPGTJPRNVSHCBWFYGFVDIOBCZSXVLAEGDKMPHLOBFFHQUMBJKVWLVGLRQLVZTRFLXXWHNCNCOMGSWRWZ");

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
    msg.setTimeStamp(0.10975827454078657);
    msg.setSource(38912U);
    msg.setSourceEntity(114U);
    msg.setDestination(36826U);
    msg.setDestinationEntity(22U);
    msg.name.assign("YPUYQVAFATVBOGYOKLNFRFBICAWZQRDTFBZITDDKBXGGOECLPZBISPANTZFTEXHUVBNFDJGEEKOCPPXYMIUMYUMXLHHZGOVTCRWQHWYDUKTRIZRHRAQGMZUXPVINLTIHLSNSEOANMIMDJMYWORUHJPCCPSKTGCKJYENTDGRECQFPAEVWBQXQHUZKFWPDBOGYLNVFMMJAVCJWJFBHDMAGSHLKKRLNEQNWUQVJWZRLB");

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
    msg.setTimeStamp(0.1404947530172005);
    msg.setSource(7036U);
    msg.setSourceEntity(161U);
    msg.setDestination(60783U);
    msg.setDestinationEntity(202U);
    msg.type = 128U;
    msg.error.assign("DJUVGJYQTQCMDVLIBXGVWECLHJADLBUPISQXBQNZQHGMXMSWRUXJNMABQCCZIHQUTSFWYHSJMSSHKGIWMOYIQZWEJSAJYTRZZYORAKSRTHXHVCEKLCKCTGOFOVHONRYIVWKQFKRSTRPIXSHPMCAFRUENORBZULGEADPVQDNFWUWPYERNPFKGTZWD");

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
    msg.setTimeStamp(0.08876369344121637);
    msg.setSource(63475U);
    msg.setSourceEntity(80U);
    msg.setDestination(60235U);
    msg.setDestinationEntity(87U);
    msg.type = 52U;
    msg.error.assign("WYDJWRMBUUYGJMLQHZBIWMQUDOQIWTVGFTLGXWQSPFCJVMLBCDDOLNBOMDXFCCDBKYRLAPSKXJHVCZKSYWRAWQIUFFSRQGTH");

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
    msg.setTimeStamp(0.10196219869846146);
    msg.setSource(63480U);
    msg.setSourceEntity(128U);
    msg.setDestination(18728U);
    msg.setDestinationEntity(210U);
    msg.type = 154U;
    msg.error.assign("IWDTBJAXIONWIOCONPMCOMPQGXPAPDISVHPDHPVL");

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
    msg.setTimeStamp(0.7384305803656059);
    msg.setSource(27965U);
    msg.setSourceEntity(104U);
    msg.setDestination(5051U);
    msg.setDestinationEntity(82U);
    msg.seq = 38035U;
    msg.sys_dst.assign("VQPNIJZGGMSZTSKDNVTWXHDBFGNIHWAKTRMARMJEQQQSEBFXWNXBZPWZADUULWNOJNMQDHFYPMCUMLAALYPOOQANSMFYLNSSWRCZWKUZKYZBHXLXTXDIIGCYJKTETCQZEVOEBKXBLFOOSRCDTIWRVVBEKGIJUWCGOJQHRFCRXUTDHHVMDPGBIBVPGDIOWJFIFAQYJNSGSYPXUEKU");
    msg.flags = 23U;
    const signed char tmp_msg_0[] = {-34, 122, -94, -69, -86, -37, 68, -55, 31, 47, -66, -128, 85, -69, 78, 121, 11, -65, 99, -103, -29, -49, -114, -21, -83, -33, 88, -23, 64, -57, 48, 31, -34, -84, 49, -112, 65, -123, -8, -41, -113, 22, 107, -49, -20, -103, 26, -51, 17, 67, -27, 54, 108, 8, 11, 77, 57, -54, -95, -63, 125, -14, -18, -95, 123, 0, 34, 96, 26, -64, -8, -25, 88, -101, 50, 68, -90, -72, -94, -76, -23, -68, -24, 38, -115, 97, 91, -107, -113, 123, 118, 82, 113, 77, -5, -84, 3, 66, 116, 84, -127, 100, 117};
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
    msg.setTimeStamp(0.35048371528282074);
    msg.setSource(25650U);
    msg.setSourceEntity(108U);
    msg.setDestination(6591U);
    msg.setDestinationEntity(87U);
    msg.seq = 20919U;
    msg.sys_dst.assign("ODPBSVYJOHCNKENOOESBMYTKQNOTHFYVLXIBDOGLXDTYEPGEZNAMLTBFUWFLRSLYWDWTIQSNSKLIIDWHVKMNFMKERGPPGLRRHCAYWRYOHSXJBLXAOZEZAWSGBBJQXPCUPZMVVOTINCCYVJQXIFFKCGUUGDDZEKDBFESWZATSYVJARUZHGZMLVNBIHCWKJYARPPJZMCUJQHRMFASNOARQUZGMB");
    msg.flags = 111U;
    const signed char tmp_msg_0[] = {17, -81, 122, -53, 84, 53, -37, 97, 75, -126, -41, -65, 22, -37, 64, -36, 82, -114, 19, 63, 79, 9, 125, -79, 63, -8, 40, 88, 37, -2, -67, 89, 31, -97, 30, -78, -126, 18, -89, 4, -75, 80, -22, 125, 39, 21, 12, -26, -40, 5, 116, 64, -100, 68, -24, 21, 63, -105, 118, 30, 73, 100, 70, -12, 40, 109, -116, 19, 21, -25, -125, 126, 90, 59, 49, -46, 99, -88, 117, -36, -22, -122, 67, 96, -118, -128, -100, -128, 27, 121, 38, -81, 3, 104, -111, -118, -17, -12, -33, 81, -40, -107, -35, 80, -43, -22, -44, -31, 119, 1, -7, 103, -99, -6, 49, 47, 110, -39, -78, -84, 54, -44, -107, 12, -38, 72, -46, -89, 91, -28, -123, -27, 42, -68, -96, 124, -74, 7, -44, 65, 23, -25, -39, -6, -116, -100, -94, -111, 55, -29, 36, 60, -67, -110, 70, 106, -95, 1, -125, 104, -84, -28, 43};
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
    msg.setTimeStamp(0.7151177522958265);
    msg.setSource(41932U);
    msg.setSourceEntity(103U);
    msg.setDestination(14026U);
    msg.setDestinationEntity(149U);
    msg.seq = 18370U;
    msg.sys_dst.assign("TKFEQIVINAELSZHUWUVYNDESBCPZPQHXRSZEOGXZMYOIAYTGNHKVXOYKTU");
    msg.flags = 118U;
    const signed char tmp_msg_0[] = {55, -125, 89, 117, 42, 80, -17, 34, 63, -45, -80, 116, -1, -113, -114, 25, 102, -108, 35, -20, 119, 37, 24, 106, 15, 5, -83, -112, -53, -31, 60, -14, -44, -42, 97, -109, 118, -48, 22, -106, -82, 19, -103, 119, 38, 65, -39, -55, 35, 40, 32, 48, 21, 99, 116, 94, -61, 74, 27, -40, -46, -106, -76, 9, 101, 61, -81, -94, -80, -57, -13, -21, -114, -25, -9, 17, 56, 117, 31, 49, -54, 51, 39, 9, 66, 72, 105, 22, 115, 78, 109, 120, 91, 90, -68, 85, -42, 125, 14, -43, -80, -90, 93, 107, 124, 61, -66, -43, -80, -110, -113, 85, 67, -93, 6, 19, 4, 5, -103, -26, 65, -54, 30, 108, 38, 45, 44, 89, -26, -19, -109, 113, -39, 101, -109, 87, 92, 0, 11, -47, 97, -100, -13, 68, -51, -119, 87, -51, 47, 64, 61, -116, -107, -88, -61, -7, 107, -17, -116, 73, 93, 9, 74, 32, 82, -10, -99, -27, -85, 101, 25, 78, 15, -107, -110, 124, 42, 126, -52, -120, 84, -12, -14, -16, 67, -19, 80, -38, 125, 98, 18, -108, -101, 80, -35, 11, 99, -59};
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
    msg.setTimeStamp(0.4244600541697625);
    msg.setSource(7050U);
    msg.setSourceEntity(149U);
    msg.setDestination(15920U);
    msg.setDestinationEntity(3U);
    msg.sys_src.assign("GIWZUIXQSQFXDNBXUZKRSCMXFJLMERKZJGZOGDQTARUSQQLDVIFCGUGEBOAUTEJM");
    msg.sys_dst.assign("SRMVSMVDTHXQWVWFEEBPJBULUNLNOGOYNKLYSRFXCKJOPKLQLBLGECNOREOHACHKWDGAZQVEKWCUKUOQDBRDXNHKTSYRGHVACNZFJMNXTTOYKIJFATSXUWQRUPHFMQZBMHZWIISMPDLNTQZRNBGFMPVJPFJVCQAPLZPXQYUTOETOMUVDCXRAEDGZHMMCRITBJCIYDKWYIEEFVOILSLWYRYIJBGQWZFSFUBAUZHAXIZVJIJGYEAPKSXN");
    msg.flags = 172U;
    const signed char tmp_msg_0[] = {84, -85, 41, 46, 28, -6, -39, 126, 58, -112, 6, -51, -75, 87, 53, -123, -92, 85, 102, -10, -59, 66, -24, 51, 50, -77, 100, 125, 59, 126, 57, -52, -45, 108, -124, -99, 18, -114, 82, -57, 75, -105, 0, -70, 74, 118, -68, -86, -75, -37, 15, 88, 20, -95, 108, -64, 79, 51, -63, -122, -13, 105, 110, -37, -25, 99, 69, 44, -53, 36, 23, -81, -96, 92, -19, -57, 20, -71, 106, -63, -99, 73, 51, 32, 117, 12, 114, -45, 66, 21, -87, 47, 77, -88, -50, 12, -82, -31, 46, -104, 119, -14, -116, -102, 112, 95, 56, -41, -74, 63, -120, 87, -105, -86, -58, 53, -68, -33, 80, -63, -124, 116, -46, -111, -30, 50, -80, 29, -125, 5, 53, 97, -69, 70, -56, -75, 0, -72, -92, -83, -65, -118, 105, -111, -18, 84, -21, 73, -124, 10, -53, 33, -102, 95, -61, 78, -128, -86, -47, -39, -82, 110, 54, 70, 61, -33, -6, 62, -35, 92, 114, -8, 93, 44, 61, -55, 61, -7, -49, -98, 53, 65, -24, -110, 70, 19, 88, -8, 58, 54, 47, 102, -66, 61, 4, 51, -53, -23, -106, -128, 118, 100, 82, 119, -2, 60, -102, 118, -66, 120, 70, -92, -88, -37, 91, -18, -112, 78, 48, -42, 34, -8, -10, -111, -27, -126, 103, -126};
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
    msg.setTimeStamp(0.7623391141117072);
    msg.setSource(5236U);
    msg.setSourceEntity(246U);
    msg.setDestination(28170U);
    msg.setDestinationEntity(13U);
    msg.sys_src.assign("XHKNZUVAOKKRDRUXFOQKBPSEHNDTMWTAQZJBENDRLOMTTUAWRTWZXNLENGXHSCGUPWMWFMRSBZBUIDEFQGBFLYCSYHGMRIC");
    msg.sys_dst.assign("DOZMYIMSLCNDTBRHSSMJPKHDLHNMHXKRJFBOEFYHUENJEBWGVEXKYHZOTUAZRVCXAQDCOZAY");
    msg.flags = 224U;
    const signed char tmp_msg_0[] = {47, -13, -117, 29, 98, -76, 103, 76, 42, -51, -69, -14, -7, 91, -93, -82, -65, -47, 26, 114, 94, 72, -82, 46, -14, 90, 58, -118, -1, -105, 35, -50, -121, 37, -30, 37, 35, 58, 82, 57, -15, 59, 22, 69, 23, 121, 70, 34, 64, 32, -55, 92, 18, 47, -88, -34, -26, 4, 20, -123, -95, -115, 109, 121, 112, 7, -10, 34, -48, -94, 44, -126, 55, -124, 88, 47, 99, 84, -44, 64, -65, -57, 10, -70, -55, -85, 59, -125, 0, 20, -118, -93, -30, 6, 113, 81, 36, 105, 92, 24, 87, -83, 114, -40, -103, 20, 9, 10, -76, 37, 126, -69, 14, 100, -28, -20, -118, 91, -12, 94, 119, 63, 59, -24, 10, 5, 42, 82, 93, 93, 49, 120, 71, -58, -4, 103, -64, -75, -68, 117, 27, 72, 27, -118, 0, -3, -1, -30, 101, -111, 7, 21, -95, -86, 73, -126, -22, -78, 10, -40, -74, 17, -86, 56, 2, 65, -95, 63, -1, -98, -30, 58, -11, 73, -101, -117, 96, -127, 125, -43, 109, 95, -24, -106, 11, -60, 45, 97, 62, -119, -96, -82, -40, 114, -36, 88, 20, -46, -69, 59, -92, -101, 27, -115, 42, 108};
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
    msg.setTimeStamp(0.24041438680046034);
    msg.setSource(55666U);
    msg.setSourceEntity(157U);
    msg.setDestination(58146U);
    msg.setDestinationEntity(46U);
    msg.sys_src.assign("JUOEWUEDIBJVWHHWFWZROTSXZEKUBAMVYQIIOXDCGFJAQLXPAYCQOYNOTFREUNKVZYNHNMPUFTDSCWDLQYHCJHETGZNCZXXRCHBJPCAICGISBQNWAIUJ");
    msg.sys_dst.assign("TJGPJWERYICBPUECTJDVPDVPOCHIYBFWPKYBXGCMQRHJVYIOGRKBMZNXTLTVGCBNR");
    msg.flags = 186U;
    const signed char tmp_msg_0[] = {-64, -27, 71, -115, 13, -32, 50, -28, -90, 100, 107, -40, 65, 91, -47, -41, 113, -14, -34, 23, -99, 26, 94, -95, 78, -45, -119, 35};
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
    msg.setTimeStamp(0.30962975830712003);
    msg.setSource(57398U);
    msg.setSourceEntity(183U);
    msg.setDestination(2434U);
    msg.setDestinationEntity(50U);
    msg.seq = 25437U;
    msg.value = 70U;
    msg.error.assign("BHXVIWJXLNFPYOYTXKGFDZXYDZIYJFBCIDAFEOKQLYUOWKCNLLAEIWTMPBRXDEFQUFPAZEFYMJDJPHODHVCBHYMCCJBNLVUMTV");

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
    msg.setTimeStamp(0.3105228908155925);
    msg.setSource(24639U);
    msg.setSourceEntity(20U);
    msg.setDestination(49588U);
    msg.setDestinationEntity(195U);
    msg.seq = 26210U;
    msg.value = 157U;
    msg.error.assign("QSSAHBYPSMCCTSIVHHTGGUZBDUXTNFKKJNYLRHWEORWYVFBNLIOWBFMORMUEWMLJAHKVLDYCNGNXQHPTIIDPYUMWUEQSAAURXFUJVCIZYLCZXACGEGAQMDCLLDCNACEFFNGZZJSWSAPBRXGJTOKYJE");

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
    msg.setTimeStamp(0.2941073930615028);
    msg.setSource(45555U);
    msg.setSourceEntity(135U);
    msg.setDestination(56634U);
    msg.setDestinationEntity(125U);
    msg.seq = 61840U;
    msg.value = 78U;
    msg.error.assign("ESDWCZPLAAKIEYEMBRYBSINAACLWWXGEIWYCPLFVOQXVHEMRUROCKVVXMDMCWSIHFJBWKHVUIXDIBKQLIBJDRQQVZMAUUHRPTJGTOYGVDHPPCGSHEPBGTCQYMQSYNNFDHPVJNSWFLKEJTGXYUZAQZABDXZEIWAOTBIOTNXWBFLFGNCMCULSQOLOPJ");

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
    msg.setTimeStamp(0.3045155600381543);
    msg.setSource(8919U);
    msg.setSourceEntity(210U);
    msg.setDestination(25443U);
    msg.setDestinationEntity(56U);
    msg.seq = 63529U;
    msg.sys.assign("QUBFUOAZOGBLZRYEQJDHFTXVQNQAFVKACMRKKCCQWCJSBSAPPOGTAHNNRADOEHZPILDDWVLBNMEKQUFJNEWEJKANCVTIZKILVWMCBXGMMRVXCFMBEMHXRTXDQOITCYPPULDZWQPSFRJYYBJSLHQNISOCBVFSVOU");
    msg.value = 0.26615874625528224;

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
    msg.setTimeStamp(0.441611944664535);
    msg.setSource(35190U);
    msg.setSourceEntity(85U);
    msg.setDestination(25511U);
    msg.setDestinationEntity(205U);
    msg.seq = 62401U;
    msg.sys.assign("LCSSKHIXGEWLZFBFRJIBPTJMLVZWEKYRLJTSZLDAMPAIONILVILPCDRVTGJHYOVCFWDHABSIQMGBLXDQPGNEJJ");
    msg.value = 0.278612755031479;

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
    msg.setTimeStamp(0.9652115879919663);
    msg.setSource(15339U);
    msg.setSourceEntity(158U);
    msg.setDestination(59699U);
    msg.setDestinationEntity(151U);
    msg.seq = 30436U;
    msg.sys.assign("GRLHUNHTZSKEQRBNKHVXUVIDWACSLDBMBFBMGWMVBKPQZOYTCMCLXLPFZYUDBEGMFJJFAPRJUBDGMKKEYIXJVUKWAOBEWVPTCEAOLENFNAEEXPYPIGTJAITDOJLCDQQXEQRSCMJWYFACXZHHSHTXTPFYMZZGTROANOUUHDHWUOYNDVHVBWSRAQXQZPKLSUZBYFMOSIWFGPFVLONRTCZR");
    msg.value = 0.09665819883874427;

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
    msg.setTimeStamp(0.9132697222922103);
    msg.setSource(64843U);
    msg.setSourceEntity(86U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(8U);
    msg.seq = 50865U;
    msg.sys_dst.assign("ZIZCHVCUHJEIKGGRKTZZAJFEBMYQKZRGOXFADJICFJOFYCSHSRAWSYUDEKNIUKUSYKTABBXSXVRPMVNQWX");
    msg.timeout = 0.965121571449569;

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
    msg.setTimeStamp(0.21653049605542085);
    msg.setSource(16405U);
    msg.setSourceEntity(155U);
    msg.setDestination(34912U);
    msg.setDestinationEntity(212U);
    msg.seq = 55879U;
    msg.sys_dst.assign("KZOIIWDIGSGTLLGTZNTUHUXHBJEUAVVYFHXOBZXXJVUAREQBTJFYDMPKLDVHZPWZRBQJGYZTXWNXVMQSTIIFRCUXCLXPLKFCBDYCTPYXKBGWVRWOHYVFCVJONKPSKZTXADMKBAOKYCHRNUYLMJVBE");
    msg.timeout = 0.09263842025224922;

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
    msg.setTimeStamp(0.5185485864581016);
    msg.setSource(38055U);
    msg.setSourceEntity(111U);
    msg.setDestination(59661U);
    msg.setDestinationEntity(111U);
    msg.seq = 63394U;
    msg.sys_dst.assign("MVSHXSJFLSRNXPGBFHCGFXULRWUUFWUARBODDEFIBWZNDKKNUFZYAOTNYIVJNHFPETHYTGWQJROISHZTPYDQUQOYSYILSOVCIXCHKDTBSBQKGLVRTDMEONEOAZMZGPZMVSEETNMXKAOYXHLLKJPRBCQBKDU");
    msg.timeout = 0.30548790033094897;

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
    msg.setTimeStamp(0.3526914278727915);
    msg.setSource(16328U);
    msg.setSourceEntity(19U);
    msg.setDestination(8870U);
    msg.setDestinationEntity(188U);
    msg.action = 101U;
    msg.longain = 0.4682071958268297;
    msg.latgain = 0.5938710984197746;
    msg.bondthick = 2220796733U;
    msg.leadgain = 0.03021324439069195;
    msg.deconflgain = 0.05213456504736125;

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
    msg.setTimeStamp(0.9653397731575477);
    msg.setSource(6222U);
    msg.setSourceEntity(246U);
    msg.setDestination(49065U);
    msg.setDestinationEntity(135U);
    msg.action = 140U;
    msg.longain = 0.7941209274093831;
    msg.latgain = 0.8543011629332413;
    msg.bondthick = 2317939980U;
    msg.leadgain = 0.693056736190183;
    msg.deconflgain = 0.2829995100624315;

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
    msg.setTimeStamp(0.9530204350361773);
    msg.setSource(39924U);
    msg.setSourceEntity(10U);
    msg.setDestination(18040U);
    msg.setDestinationEntity(22U);
    msg.action = 139U;
    msg.longain = 0.4396708217535775;
    msg.latgain = 0.41796713908615546;
    msg.bondthick = 1446546454U;
    msg.leadgain = 0.4890535969245141;
    msg.deconflgain = 0.5911501504016959;

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
    msg.setTimeStamp(0.8973334834652051);
    msg.setSource(39786U);
    msg.setSourceEntity(64U);
    msg.setDestination(32054U);
    msg.setDestinationEntity(244U);
    msg.err_mean = 0.15609609573020833;
    msg.dist_min_abs = 0.024939484766473674;
    msg.dist_min_mean = 0.2883952464268753;

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
    msg.setTimeStamp(0.4488888724284906);
    msg.setSource(4441U);
    msg.setSourceEntity(45U);
    msg.setDestination(50827U);
    msg.setDestinationEntity(111U);
    msg.err_mean = 0.39963286885009974;
    msg.dist_min_abs = 0.9706509536424195;
    msg.dist_min_mean = 0.19590377243866053;

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
    msg.setTimeStamp(0.6487904140518247);
    msg.setSource(55602U);
    msg.setSourceEntity(135U);
    msg.setDestination(60823U);
    msg.setDestinationEntity(19U);
    msg.err_mean = 0.3081874773683674;
    msg.dist_min_abs = 0.13236207322271876;
    msg.dist_min_mean = 0.605565707670163;

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
    msg.setTimeStamp(0.07672999886479814);
    msg.setSource(50849U);
    msg.setSourceEntity(3U);
    msg.setDestination(3721U);
    msg.setDestinationEntity(161U);
    msg.action = 117U;
    msg.lon_gain = 0.7135335200207075;
    msg.lat_gain = 0.47844966436527425;
    msg.bond_thick = 0.07492268030969362;
    msg.lead_gain = 0.4397949015896143;
    msg.deconfl_gain = 0.0869768878837055;
    msg.accel_switch_gain = 0.215943387704418;
    msg.safe_dist = 0.23251065112321034;
    msg.deconflict_offset = 0.7618937019805182;
    msg.accel_safe_margin = 0.29133004184691724;
    msg.accel_lim_x = 0.24386293116649227;

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
    msg.setTimeStamp(0.4605171432105105);
    msg.setSource(43299U);
    msg.setSourceEntity(237U);
    msg.setDestination(28291U);
    msg.setDestinationEntity(134U);
    msg.action = 1U;
    msg.lon_gain = 0.4839225056798463;
    msg.lat_gain = 0.9821698128700986;
    msg.bond_thick = 0.9874001044882321;
    msg.lead_gain = 0.7696098926626908;
    msg.deconfl_gain = 0.5706712460800877;
    msg.accel_switch_gain = 0.2442831738729715;
    msg.safe_dist = 0.6055391749644677;
    msg.deconflict_offset = 0.3843026820626041;
    msg.accel_safe_margin = 0.8482360455696314;
    msg.accel_lim_x = 0.6238239270790275;

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
    msg.setTimeStamp(0.8864495949984228);
    msg.setSource(17703U);
    msg.setSourceEntity(190U);
    msg.setDestination(44843U);
    msg.setDestinationEntity(196U);
    msg.action = 12U;
    msg.lon_gain = 0.5688987838152467;
    msg.lat_gain = 0.9973866686113555;
    msg.bond_thick = 0.25767170854075505;
    msg.lead_gain = 0.020910688261996935;
    msg.deconfl_gain = 0.04347960163564801;
    msg.accel_switch_gain = 0.2824014338486902;
    msg.safe_dist = 0.5903320166365522;
    msg.deconflict_offset = 0.7674207427986852;
    msg.accel_safe_margin = 0.9835873697447256;
    msg.accel_lim_x = 0.3316046591899756;

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
    msg.setTimeStamp(0.22356973893186471);
    msg.setSource(16309U);
    msg.setSourceEntity(15U);
    msg.setDestination(6650U);
    msg.setDestinationEntity(95U);
    msg.type = 138U;
    msg.op = 107U;
    msg.err_mean = 0.9738004306683755;
    msg.dist_min_abs = 0.330105498065255;
    msg.dist_min_mean = 0.9960278889526364;
    msg.roll_rate_mean = 0.28700845016726684;
    msg.time = 0.6080946135090025;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 115U;
    tmp_msg_0.lon_gain = 0.8383831691050931;
    tmp_msg_0.lat_gain = 0.6948892131642377;
    tmp_msg_0.bond_thick = 0.9348678918075428;
    tmp_msg_0.lead_gain = 0.8129534872451903;
    tmp_msg_0.deconfl_gain = 0.7165150697988368;
    tmp_msg_0.accel_switch_gain = 0.7498997490716451;
    tmp_msg_0.safe_dist = 0.06704829479069652;
    tmp_msg_0.deconflict_offset = 0.29297611319655825;
    tmp_msg_0.accel_safe_margin = 0.712145776624536;
    tmp_msg_0.accel_lim_x = 0.3033992816680784;
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
    msg.setTimeStamp(0.0007024775853496923);
    msg.setSource(10935U);
    msg.setSourceEntity(70U);
    msg.setDestination(45096U);
    msg.setDestinationEntity(180U);
    msg.type = 158U;
    msg.op = 228U;
    msg.err_mean = 0.3082257125426757;
    msg.dist_min_abs = 0.8550497822555663;
    msg.dist_min_mean = 0.5551855173001676;
    msg.roll_rate_mean = 0.8211048628765742;
    msg.time = 0.30518861854455204;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 229U;
    tmp_msg_0.lon_gain = 0.8465286168373435;
    tmp_msg_0.lat_gain = 0.40567093783273545;
    tmp_msg_0.bond_thick = 0.26437626917996726;
    tmp_msg_0.lead_gain = 0.48734140691664396;
    tmp_msg_0.deconfl_gain = 0.3769912931648378;
    tmp_msg_0.accel_switch_gain = 0.958119995628579;
    tmp_msg_0.safe_dist = 0.5673826438548081;
    tmp_msg_0.deconflict_offset = 0.013097149310440148;
    tmp_msg_0.accel_safe_margin = 0.12417373978355406;
    tmp_msg_0.accel_lim_x = 0.13314420769803192;
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
    msg.setTimeStamp(0.1991691483001803);
    msg.setSource(36572U);
    msg.setSourceEntity(55U);
    msg.setDestination(32622U);
    msg.setDestinationEntity(72U);
    msg.type = 122U;
    msg.op = 235U;
    msg.err_mean = 0.294568126565545;
    msg.dist_min_abs = 0.9417850547148248;
    msg.dist_min_mean = 0.9229989324061593;
    msg.roll_rate_mean = 0.28003199191812256;
    msg.time = 0.5591292295189328;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 76U;
    tmp_msg_0.lon_gain = 0.09601374060115875;
    tmp_msg_0.lat_gain = 0.7695553703867567;
    tmp_msg_0.bond_thick = 0.1249660541863955;
    tmp_msg_0.lead_gain = 0.1676501860036298;
    tmp_msg_0.deconfl_gain = 0.1616494719910233;
    tmp_msg_0.accel_switch_gain = 0.10762593623364314;
    tmp_msg_0.safe_dist = 0.28297499270887705;
    tmp_msg_0.deconflict_offset = 0.43429673941919444;
    tmp_msg_0.accel_safe_margin = 0.3281974493160654;
    tmp_msg_0.accel_lim_x = 0.14051042234368105;
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
    msg.setTimeStamp(0.36822222005610605);
    msg.setSource(45615U);
    msg.setSourceEntity(229U);
    msg.setDestination(58570U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.8593499649416045;
    msg.lon = 0.21859548137476348;
    msg.eta = 3666704248U;
    msg.duration = 35909U;

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
    msg.setTimeStamp(0.16403479812516175);
    msg.setSource(58225U);
    msg.setSourceEntity(173U);
    msg.setDestination(20393U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.38281564440075533;
    msg.lon = 0.13353170098653488;
    msg.eta = 1437387807U;
    msg.duration = 13127U;

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
    msg.setTimeStamp(0.7552967841612195);
    msg.setSource(42372U);
    msg.setSourceEntity(218U);
    msg.setDestination(60660U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.9820613928365478;
    msg.lon = 0.21455832958724452;
    msg.eta = 1824060264U;
    msg.duration = 12670U;

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
    msg.setTimeStamp(0.19413700467824946);
    msg.setSource(60097U);
    msg.setSourceEntity(175U);
    msg.setDestination(17406U);
    msg.setDestinationEntity(215U);
    msg.plan_id = 61224U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6955961057236928;
    tmp_msg_0.lon = 0.6366504948499911;
    tmp_msg_0.eta = 1193501233U;
    tmp_msg_0.duration = 25750U;
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
    msg.setTimeStamp(0.022246330828328498);
    msg.setSource(31899U);
    msg.setSourceEntity(164U);
    msg.setDestination(30614U);
    msg.setDestinationEntity(186U);
    msg.plan_id = 36504U;

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
    msg.setTimeStamp(0.5441423094096985);
    msg.setSource(53853U);
    msg.setSourceEntity(159U);
    msg.setDestination(29269U);
    msg.setDestinationEntity(158U);
    msg.plan_id = 33907U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.34391581350822586;
    tmp_msg_0.lon = 0.9258967719332933;
    tmp_msg_0.eta = 1729057940U;
    tmp_msg_0.duration = 37362U;
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
    msg.setTimeStamp(0.4800344986564308);
    msg.setSource(47818U);
    msg.setSourceEntity(7U);
    msg.setDestination(4949U);
    msg.setDestinationEntity(163U);
    msg.type = 171U;
    msg.command = 66U;
    msg.settings.assign("CFZLROTZLPTSUYAWUCQSJADSYNPFHMCGKIRLLOUQCMXMWJAPSDUFNMEWKJCDCWUBZZIWXDYTEVGIREYVVBUDYQOJRETUHRXNNGPQPBJQVDJCBERVLIHGSJSYGVXHTNZNDTCATLEOBLPWQMHRFYFKZUGYJKGHHFICMGJCBVFZTOBKBBFAZOQ");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 25177U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.08805302014446414;
    tmp_tmp_msg_0_0.lon = 0.7528108254001111;
    tmp_tmp_msg_0_0.eta = 2126274229U;
    tmp_tmp_msg_0_0.duration = 6637U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("NXZTTQKTISGNSEBTIDBKFSXFGAIXGKZBWMOAOHOKGUDMBSDDJLKVAUWWWXYRWOLNNQGYDZGPTDQCMPIPQPWDZHBCWIMHKOAFHEAVMJRSWREROGIMPQBVURKHTCVRIFBSRVPNFQCUXVAYFNXQOJCZUCBZOVHSQPYPSXALWCETJTE");

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
    msg.setTimeStamp(0.18196121577657853);
    msg.setSource(15966U);
    msg.setSourceEntity(103U);
    msg.setDestination(43702U);
    msg.setDestinationEntity(254U);
    msg.type = 231U;
    msg.command = 30U;
    msg.settings.assign("XHIYVXGQYJGHWQBNZXBJFMCBYWCOFHFTBWOUGQWJZMKAANOCLQLUYOFMZDXISWPCGLXNROLMQUMACPHTBKGQEWOMAHRLHKBIZTVJHEPLDASLUTWRZORKVIDPBOQIKLTNYFNUNASY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 62535U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("VLKVDEAMFZLGFTXYGQTMZKRFTHNPQZXPDBQIMBAOUBEAIBSIIKXECQYYIFWEJUXPRNGCJNZKQNLXEYHGXTNNIEJPSLWTMUAXWDSUSZOGIILVOWTAAQKUOHMCVXAHXRHGRFGLVLHTWQVOCGHLMCBDNTYOCSUPFDNQUPYTEWNPSCOUFAMBFJKUSZJVWSIHCDZEPPYMJEFZMBVDNQRRJWBKXBUDODTYYREVPJMHZKVBIAJG");

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
    msg.setTimeStamp(0.8476349752574954);
    msg.setSource(47242U);
    msg.setSourceEntity(208U);
    msg.setDestination(14205U);
    msg.setDestinationEntity(31U);
    msg.type = 168U;
    msg.command = 219U;
    msg.settings.assign("RRBVBBNOTBKZAEYNHNGQSUAXHKDCJLACBWFYOIFNMHVEHXQRSAYCXCCVSUALRMQVOHRZWZNMZXPUTLSEPKDUDDIFRLUEHQVAIMHKSMBQIBKNTVHTPSNLWYXIDFNOSKYXWPJESXPOGTBZHWIBGFLRJZQJLVTRPTZXSEUMGICKJKXGGUPDIVDDBFGMJOTSETVDXYFQHCZEYGZDKNFULAFGAJCMQVMFJWWWRYMQPQUAOY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 47658U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7682520383617206;
    tmp_tmp_msg_0_0.lon = 0.6917710682196071;
    tmp_tmp_msg_0_0.eta = 728762265U;
    tmp_tmp_msg_0_0.duration = 14652U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FBJUJFEAFUGHBOARARYMVEFMEXNONKRXCQFKLVXFZQWPJAZZDLDDYSNVKOUHFALCZWRNLXRUGGXKLOGVEQJUVKEVWHWZFSLIIFJDOAHWSDMSZLTYIIMGATG");

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
    msg.setTimeStamp(0.8068903217617233);
    msg.setSource(64901U);
    msg.setSourceEntity(214U);
    msg.setDestination(49348U);
    msg.setDestinationEntity(205U);
    msg.state = 83U;
    msg.plan_id = 2786U;
    msg.wpt_id = 228U;
    msg.settings_chk = 402U;

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
    msg.setTimeStamp(0.031896983041104);
    msg.setSource(47374U);
    msg.setSourceEntity(48U);
    msg.setDestination(43114U);
    msg.setDestinationEntity(222U);
    msg.state = 252U;
    msg.plan_id = 42591U;
    msg.wpt_id = 181U;
    msg.settings_chk = 3044U;

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
    msg.setTimeStamp(0.8503035223192065);
    msg.setSource(28665U);
    msg.setSourceEntity(51U);
    msg.setDestination(1846U);
    msg.setDestinationEntity(42U);
    msg.state = 217U;
    msg.plan_id = 51853U;
    msg.wpt_id = 137U;
    msg.settings_chk = 39797U;

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
    msg.setTimeStamp(0.5915761783230193);
    msg.setSource(64286U);
    msg.setSourceEntity(31U);
    msg.setDestination(32159U);
    msg.setDestinationEntity(254U);
    msg.uid = 65U;
    msg.frag_number = 235U;
    msg.num_frags = 36U;
    const signed char tmp_msg_0[] = {28, -26, -108, 51, -63, -128, 95, -81, -31, 28, 31, -92, 45, -105, -91, -62, 97, -19, -34, -105, -11, -59, 5, 54, -97, 22, 47, 111, -28, -9, 10, 58, -74, -30, -28, 123, -83, -55, -10, 120, 45, -112, -61, 93, -38, -61, 63, -21, 28, 87, 115, -46, -57, -107, 120, 7, -89, 34, -80, 102, 34, -77, -104, -53, -83, -74, -65, 126, -112, 96, 86, 116, -81, -97, -94, -101, -59, 57, -70, -51, -103, -111, -41, 30, 101, -77, -111, 11, -34, 26, 43, 74, -82, -47, 19, 9, 98, 86, -117, 30, 59, -54, 15, 30, 125, -93, -41, -31, -56, 122, -48, -106, 24, -53, -109, -110, -107, -36, -48, -124, -43, 73, 114, 77, -98, 45, 59, 109, -95, -44, 12, -63, -112, -60, 71, 108, 9, -46, -11, -84, -85, 60, 36, -121, -122, 38, -99, -79, 32, 96, -4, -120, -56, -20, -101, 34, -126, -71, 14, -68, 90, -16, -45, 55, -26, -13, -21, -12, -1, 42, 101, -113, -114, -10, -41, -84, 35, -63, -61, -73, -50, -5, -98, 84, -121, 0, 58, 67, -80, -63, 39};
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
    msg.setTimeStamp(0.7535507035336478);
    msg.setSource(49974U);
    msg.setSourceEntity(49U);
    msg.setDestination(27798U);
    msg.setDestinationEntity(211U);
    msg.uid = 119U;
    msg.frag_number = 20U;
    msg.num_frags = 248U;
    const signed char tmp_msg_0[] = {-15, -89, 58, 125, -118, 98, -1, -112, -89, 84, -39, 28, 26, 10, -107, -106, 66, -7, 113, -114, -34, 102, -126, 125, -24, -54, 121, 14, -97, 104, 18, 15, -13, 39, -64, 23, -118, 103, 9, -95, -101, 20, 91, 97, 22, 34, -103, -121, 35, -120, 112, -12, 119, -111, -90, -94, -3, -7, 97, 114, 85, 100, 64, 15, -78, 106, 102, -123, -116, -64, -106, -103, 64, -25, 98, -114, 118, 117, 74, 86, -60, -81, -49, -77, 7, 111, -97, 97, 84, -45, -128, -29, 124, 98, -5, 10, -43, 64, -2, -110, 90, -25, -31, -36, -7, -51, -88, 50, 112, 53, 34, -16, 39, -83, 6, -69, 89, -46, -125, 44, -8, -19};
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
    msg.setTimeStamp(0.6971347223852503);
    msg.setSource(11384U);
    msg.setSourceEntity(214U);
    msg.setDestination(21844U);
    msg.setDestinationEntity(208U);
    msg.uid = 244U;
    msg.frag_number = 198U;
    msg.num_frags = 142U;
    const signed char tmp_msg_0[] = {-53, -98, -89, -39, -64, 11, -69, -39, 123, 1, -39, -107, 118, 76, 115, -106, -66, -2, -120, -35, 81, -114, -16, -32, 85, 99, -13, -8, -54, 56, -87, 67, -37, 21, -57, -47, -84, 107, -37, -12, -66, -7, -47, 89, 23, -4, 39, 52, 73, -80, -19, 28, -123, 76, 3, 72, 54, 44, -17, 24, -63, -85, 44, -79, -20, -55, -56, -23, 96, 107, -99, -65, -80, -124, 36, -32, 23, -75, 119, 15, -70, 5, 115, 30, -88, 86, -105, 86, 28, -123, 100, 9, 120, 68, -26, -17, -102, -128, -12, 120, 103, -53, -78, -128, -53, 26, -104, -16, -25, 94, 86, -119, 72, 61, 47, -62, 12, 7, 68, -2, -72, -26};
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
    msg.setTimeStamp(0.33395580469524544);
    msg.setSource(24817U);
    msg.setSourceEntity(182U);
    msg.setDestination(20267U);
    msg.setDestinationEntity(203U);
    msg.content_type.assign("UMUVHAQTHYAXNJKEXSRLJPYMVNCMCOTPQWTOYLGGPCXFHTRRTHXLDVAEOEUXKIBBDXSKYDLMHEHZJPANMVDKRUZNOSZQDPYRJYNGFYDKQYOSOGWLFLCTGMMRPKFZUBEVCFWUKNQIAXZEBHNQOOFSKRXZVZNEVWRCKEICSJTAEKNTIGPSICBBUFTOGMDLQLDBIWAZHJYHERSIHU");
    const signed char tmp_msg_0[] = {-2, 30, 17, -100, 91, -50, -69, 4, -80, -119, 46, 99, 41, -127, 0, -64, -67, 7};
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
    msg.setTimeStamp(0.9879528177202289);
    msg.setSource(5296U);
    msg.setSourceEntity(54U);
    msg.setDestination(47318U);
    msg.setDestinationEntity(98U);
    msg.content_type.assign("GNBKGLEJPSAFEDYKVZHSJHMJKWBAVAVWOBHQNNJAAUMTYRRXMTXJIKIAKXWPPBJXZDUQIPKCEGBGLCJIVZZRPNFLNHDOYBQMXEYFTDPWOMSFOUEDFRXPWFWQUVVSXTFUPQICGLEZRLSVBZQYAYSCPVSDOJOJHNMYCNSHIMWVLKUIASDCQBIIJORGULXKZOTHQMDZCHGNRLYWEWYLAET");
    const signed char tmp_msg_0[] = {113, -49, -66, 72, -119, -4, 40, 114, 60, -123, -7, 116, 64, -91, -37, -7, -3, 83, -73, 124, 12, 20, 30, 30, -76, -52, 24, 99, 35, -66, -81, -110, 60, -50, -117, 35, 118, 71, -100, -10, 79, -37, 25, 9, -25, 1, 72, 107, 80, -105, 95, -90, -17, -119, 2, 98, 69, 17, -96, -119, 41, 100, -121, 12, -5, 39, -80, -50, -2, 11, 78, -57, 53, 3, -62, 20, -32, 117, -50, 44, -98, 103, -117, -77, 107, 5, -117, -81, 109, -6, -11, -103, 57, -65, 70, 49, -113, -40, 42, -85, -3, 50, 124, -48, 78, -21, -48, 26, -64, -96, -111, -48, 43, -26, 19};
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
    msg.setTimeStamp(0.6510395983574324);
    msg.setSource(25422U);
    msg.setSourceEntity(239U);
    msg.setDestination(32063U);
    msg.setDestinationEntity(150U);
    msg.content_type.assign("VGQBSAKXKFYAFUFTXHLQQCKPQFEHJRKCVCFGWDOHZVKIBNAQYWEVPQIHTFQJCMNRRXULAZIELPPANX");
    const signed char tmp_msg_0[] = {69, -52, 63, -52, 53, 54, 4, -79, -55, 48, 21, 50, 102, -21, 25, 43, 88, 8, 101, -47, -63, 79, -67, -26, -80, 79, -88, 63, -128};
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
    msg.setTimeStamp(0.8405337238541445);
    msg.setSource(44811U);
    msg.setSourceEntity(250U);
    msg.setDestination(7666U);
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
    msg.setTimeStamp(0.8659179469720221);
    msg.setSource(45585U);
    msg.setSourceEntity(49U);
    msg.setDestination(25950U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.7314204058348689);
    msg.setSource(49676U);
    msg.setSourceEntity(235U);
    msg.setDestination(61406U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.5667976794825668);
    msg.setSource(13345U);
    msg.setSourceEntity(193U);
    msg.setDestination(63623U);
    msg.setDestinationEntity(111U);
    msg.target = 17823U;
    msg.bearing = 0.6621477965952802;
    msg.elevation = 0.17236768441986494;

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
    msg.setTimeStamp(0.19492128366864658);
    msg.setSource(62244U);
    msg.setSourceEntity(149U);
    msg.setDestination(12050U);
    msg.setDestinationEntity(225U);
    msg.target = 39807U;
    msg.bearing = 0.4615173554482135;
    msg.elevation = 0.4865275754374019;

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
    msg.setTimeStamp(0.1252653876877532);
    msg.setSource(62551U);
    msg.setSourceEntity(247U);
    msg.setDestination(33193U);
    msg.setDestinationEntity(225U);
    msg.target = 17563U;
    msg.bearing = 0.8095298236776014;
    msg.elevation = 0.8529730853606726;

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
    msg.setTimeStamp(0.3773555717685786);
    msg.setSource(2652U);
    msg.setSourceEntity(193U);
    msg.setDestination(52652U);
    msg.setDestinationEntity(191U);
    msg.target = 58689U;
    msg.x = 0.03198654081995422;
    msg.y = 0.20448169029485097;
    msg.z = 0.6766845952400756;

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
    msg.setTimeStamp(0.9704700721666162);
    msg.setSource(17348U);
    msg.setSourceEntity(202U);
    msg.setDestination(33956U);
    msg.setDestinationEntity(58U);
    msg.target = 26639U;
    msg.x = 0.9799447297850007;
    msg.y = 0.5791760550880841;
    msg.z = 0.060078275778120416;

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
    msg.setTimeStamp(0.020308433371616252);
    msg.setSource(24213U);
    msg.setSourceEntity(116U);
    msg.setDestination(15580U);
    msg.setDestinationEntity(126U);
    msg.target = 49918U;
    msg.x = 0.0703511552738183;
    msg.y = 0.7986902689537058;
    msg.z = 0.5884285944724285;

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
    msg.setTimeStamp(0.32002454038054207);
    msg.setSource(52744U);
    msg.setSourceEntity(88U);
    msg.setDestination(34305U);
    msg.setDestinationEntity(101U);
    msg.target = 21382U;
    msg.lat = 0.31778670679476784;
    msg.lon = 0.41105120163340014;
    msg.z_units = 30U;
    msg.z = 0.508228886751628;

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
    msg.setTimeStamp(0.23746980253008731);
    msg.setSource(42453U);
    msg.setSourceEntity(237U);
    msg.setDestination(28410U);
    msg.setDestinationEntity(2U);
    msg.target = 65096U;
    msg.lat = 0.7102853111312522;
    msg.lon = 0.8653880859296234;
    msg.z_units = 85U;
    msg.z = 0.45956941556225395;

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
    msg.setTimeStamp(0.46184532883989726);
    msg.setSource(12174U);
    msg.setSourceEntity(227U);
    msg.setDestination(16210U);
    msg.setDestinationEntity(84U);
    msg.target = 1627U;
    msg.lat = 0.7119628976368311;
    msg.lon = 0.5126677408954935;
    msg.z_units = 132U;
    msg.z = 0.3498319551110327;

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
    msg.setTimeStamp(0.414412210659032);
    msg.setSource(3730U);
    msg.setSourceEntity(62U);
    msg.setDestination(31832U);
    msg.setDestinationEntity(40U);
    msg.locale.assign("UOSMPPKJFQGURHTEGIQPACUCDWNBSPHHBDRFNTYODSTNSYIKEOJVBYMTGKGVWMKCOQRXSGTUZJMVCDOHOAXWWCSEMXNLEVPTZIRZTFHJMCAYAHZFLS");
    const signed char tmp_msg_0[] = {-2, -34, -55, 120, 81, 101, -44, 97, 96, 89, 88, 40, 100, 123, 17, -83, 68, 91, 17, 110, -81, -122, -67, -87, -125, 51, 74, 110, -39, 63, -66, 113, 4, 60, 123, 13, -33, 89, -110, 108, -39, -112, 82, -78, -88, 75, 106, -118, 5, -97, 91, 71, -85, 114, -44, -60, 119, -16, -101, 65, 49, -85, 74, -63, 125, -32, -25, -100, 11, -107, -82, -25, -99, 57, -46, 29, 24, -125, 94, -49, -116, -36, -49, 100, 70, 35, 7, -107, -59, 97, -105, 57, -105, -102, -53, 99, 7, -74, 70, 106, 61, -14, -57, -11, 66, -33, -16, -115, 120, 103, 77, -79, 49, 56, 53, -28, 37, 109, 101, 54, -119, 76, -118, 123, -117, -121, 46, 90, -93, 111, 43, 62, -51, 105, -21, -16, 109, 39, -31, -121, -19, 105, 82, 54, 30, -28, -118, 5, -63, -16, -11, -74, 62, 67, 70, 9, 13, 54, 78, 85, 95, 55, -64, -101, -64, -92, -49, -90, -67, -56, 30, 94, 61, 37, 98, -80, 7, -51, 108, -7, -80, 62, 13, 114, 9, -39, -41, 61, 79, 47, -65, -109, 63, 8, 110, 110, -100, 92, -41, -44, -60, 2, -89, 91, 45, 66, -84, -44, 13, -66, 9, -83, 88, -49, 80, 63, 76, -23, 116, -39, -104, 120, 11, 72, -126, 90, -109, -34, -109, -2, 73, -51, -43, 35, 68, 35, -124, 41, 27, -119, -72};
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
    msg.setTimeStamp(0.02485042403679072);
    msg.setSource(25819U);
    msg.setSourceEntity(166U);
    msg.setDestination(16890U);
    msg.setDestinationEntity(163U);
    msg.locale.assign("XTXVVPACXHNXLVIKKOTEBZGVSLDDUH");
    const signed char tmp_msg_0[] = {113, -58, 105, -24, -3, -94, -109, -50, -116, 60, -119, -82, 112, -100, 38, 2, -33, 41, 76, 35, 6, 83, -26, -36, -46, -7, 108, 58, -112, 55, 54, 94, -29, 2, 51, -55, -123, 51, 120, -7, -29, -62, 9, -118, -57, -95, 40, 30, -99, 28, -100, -33, 89, -40, -104, 8, -122, -51, -53, -117, -33, 42, -128, 19, 15, -109, 114, 54, 4, 116, 71, 66, -114, 2, -13, -90, -14, -14, -74, -108, -91, -60, -40, 109, -80, -83, 3, -46, 117, -124, 80, 103, 119, -18, 93, 60, -62, -68, 97, -65, -38, -33, 82, -36, 61, -110, -1, -119, -116, -73, 25, 119, -41, -23, -91, -16, -111, -88, 35, -7, 43, 41, -97, 40, -107, 105, -125, 97, -58, -3, -84, 7, 8, -27, -66, 105, -43, 50, 87, -59, 4, 125, 44, -102, 75, 7, 47, -121, 37, -8, 37, 101, 20, 57, 59, -77, -84, -108, 12, -11, 38, 50, -24, 68, 42, -79, 8, -118, -66, -111, 39, 20, -10, -72, -80, -103, -57, -52, -15, -71, 24, -11, -107, 68, 80, -112, 70, 4};
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
    msg.setTimeStamp(0.9970105126223441);
    msg.setSource(48972U);
    msg.setSourceEntity(232U);
    msg.setDestination(22723U);
    msg.setDestinationEntity(36U);
    msg.locale.assign("GVSAYXYCOLFZZTMZLYYUAPDSQBZDEYBAJPTIHSAKOBIRZXPEEFVPIGSFBTRHHOISTHCXCGNNVLKEMDNEXFSUDBJKRJMNNWGO");
    const signed char tmp_msg_0[] = {104, -57, 7, -106, 126, 96, 21, -23, -111, -21, -27, 62, -39, -21, 87, -83, -121, 71, -73, -42, 61, 121, -93, -18, -81, -57, 104, 98, -51, -126, 65, -105, 39, -97, 79, 31, -15, 84, 45, 26, 17, -60, -88, 23, -72, 107, -124, -59, 124, -90, 6, 49, -116, -73, -85, 51, -27, 50, -105, 115, 38, -128, -45, 117, 55, -24, 35, -74, -84, 126, 32, 40, 31, -60, -106, -64, 126, 38, -92, 101, -6, -92, -71, -29, 29, 114, -116, -53, 66, 107, -84, 72, -75, -82, -81, -28, -74, 8, -13, -7, 9, -24, 6, 9, -123, -35, -89, -40, 1, 34, 25, -81, -127, 0, -121, -94, -107, -74, 25, -54, 0, -14, -94, 90, 54, 78, -37, 50, 106, 51, 101, 111, -40, 71, 9, 85, -90, 101, 95, -37, 121, -39, 43, -72, -43, -26, 118, -20, -112, -76, -111, 59, -42, 49, -55, -106, 88, 41, -85, 95, 67, -112};
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
    msg.setTimeStamp(0.9629194011299936);
    msg.setSource(7287U);
    msg.setSourceEntity(152U);
    msg.setDestination(33481U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.6355765311097566);
    msg.setSource(58827U);
    msg.setSourceEntity(220U);
    msg.setDestination(57147U);
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
    msg.setTimeStamp(0.6287230941081854);
    msg.setSource(54707U);
    msg.setSourceEntity(222U);
    msg.setDestination(42899U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.38954356008508007);
    msg.setSource(7187U);
    msg.setSourceEntity(179U);
    msg.setDestination(31348U);
    msg.setDestinationEntity(162U);
    msg.camid = 43U;
    msg.x = 53484U;
    msg.y = 31555U;

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
    msg.setTimeStamp(0.4507191349127325);
    msg.setSource(45306U);
    msg.setSourceEntity(172U);
    msg.setDestination(51722U);
    msg.setDestinationEntity(87U);
    msg.camid = 233U;
    msg.x = 38641U;
    msg.y = 36695U;

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
    msg.setTimeStamp(0.7782253212457149);
    msg.setSource(36319U);
    msg.setSourceEntity(15U);
    msg.setDestination(6975U);
    msg.setDestinationEntity(243U);
    msg.camid = 103U;
    msg.x = 35712U;
    msg.y = 61316U;

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
    msg.setTimeStamp(0.2396182314269083);
    msg.setSource(29512U);
    msg.setSourceEntity(177U);
    msg.setDestination(39749U);
    msg.setDestinationEntity(64U);
    msg.camid = 167U;
    msg.x = 15755U;
    msg.y = 27440U;

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
    msg.setTimeStamp(0.25534452727061174);
    msg.setSource(24372U);
    msg.setSourceEntity(71U);
    msg.setDestination(51165U);
    msg.setDestinationEntity(223U);
    msg.camid = 182U;
    msg.x = 46700U;
    msg.y = 45688U;

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
    msg.setTimeStamp(0.2584839001867616);
    msg.setSource(36781U);
    msg.setSourceEntity(178U);
    msg.setDestination(10597U);
    msg.setDestinationEntity(38U);
    msg.camid = 253U;
    msg.x = 51303U;
    msg.y = 15669U;

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
    msg.setTimeStamp(0.22890652037255832);
    msg.setSource(12394U);
    msg.setSourceEntity(171U);
    msg.setDestination(64174U);
    msg.setDestinationEntity(232U);
    msg.tracking = 58U;
    msg.lat = 0.2689022701981305;
    msg.lon = 0.38081214997211355;
    msg.x = 0.6280485821394723;
    msg.y = 0.802015300032231;
    msg.z = 0.09667043273917608;

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
    msg.setTimeStamp(0.20467148410395752);
    msg.setSource(1114U);
    msg.setSourceEntity(68U);
    msg.setDestination(30967U);
    msg.setDestinationEntity(149U);
    msg.tracking = 57U;
    msg.lat = 0.9548803674056509;
    msg.lon = 0.7385181019147637;
    msg.x = 0.7536739663663714;
    msg.y = 0.4452483749836117;
    msg.z = 0.3962446019675391;

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
    msg.setTimeStamp(0.20457062314261598);
    msg.setSource(37072U);
    msg.setSourceEntity(211U);
    msg.setDestination(20233U);
    msg.setDestinationEntity(135U);
    msg.tracking = 117U;
    msg.lat = 0.16739684699869584;
    msg.lon = 0.38950216269558113;
    msg.x = 0.5939779428759638;
    msg.y = 0.49500780077839623;
    msg.z = 0.6777536454950499;

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
    msg.setTimeStamp(0.45686071390149496);
    msg.setSource(26790U);
    msg.setSourceEntity(136U);
    msg.setDestination(50783U);
    msg.setDestinationEntity(89U);
    msg.target.assign("IAEPAXEHLOVOJFTPRUCKQWOSVRBAPWZTWNZFCCSDRYVTEEIFPOWOSQYNGRKVTQRBDWNLCHUHRMAWQYFHAVJANPZZBXCXTTZIKFZVQHXMEZGJYBDGSLTSRVMLDDNMFKQWKHIKAOGJUDAMOAGEWEULRSSIKGSYMZQEOGXNVIUDPMHECGGLNQJEFILQDXUIFM");
    msg.lbearing = 0.34003338844531106;
    msg.lelevation = 0.3093967439921894;
    msg.bearing = 0.6053688896945466;
    msg.elevation = 0.8721645898214835;
    msg.phi = 0.4016712328540919;
    msg.theta = 0.07073531391829957;
    msg.psi = 0.7462283534701073;
    msg.accuracy = 0.9185480910258688;

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
    msg.setTimeStamp(0.42469883418375676);
    msg.setSource(42557U);
    msg.setSourceEntity(37U);
    msg.setDestination(53728U);
    msg.setDestinationEntity(45U);
    msg.target.assign("RDUIYKKPMBVDHESKYEVZLUMJGGWKUCFCLTPQDUKLZOTLWWNBAXFEIFJVCCNSCBNOPXVIGOHIJOBIHZFZLZJWYUJKVWYFQSYTJTIRARPQNGNVPAVXTZXRWH");
    msg.lbearing = 0.23668006961545074;
    msg.lelevation = 0.6868929922778493;
    msg.bearing = 0.28372216521604765;
    msg.elevation = 0.6938003785611566;
    msg.phi = 0.7501649298232015;
    msg.theta = 0.09345756764860658;
    msg.psi = 0.4371490526945814;
    msg.accuracy = 0.17253994294294694;

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
    msg.setTimeStamp(0.0685334285107041);
    msg.setSource(8798U);
    msg.setSourceEntity(32U);
    msg.setDestination(2948U);
    msg.setDestinationEntity(85U);
    msg.target.assign("VMQLNNHPRSHMAURNDGMUGEUGEIIIOSRPTWRO");
    msg.lbearing = 0.8527571556729874;
    msg.lelevation = 0.36080698244067033;
    msg.bearing = 0.9120720407564241;
    msg.elevation = 0.5604978823229207;
    msg.phi = 0.022298578011397674;
    msg.theta = 0.5202899792686276;
    msg.psi = 0.6954607756994868;
    msg.accuracy = 0.8986504102815227;

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
    msg.setTimeStamp(0.4086251283167799);
    msg.setSource(32473U);
    msg.setSourceEntity(46U);
    msg.setDestination(8509U);
    msg.setDestinationEntity(48U);
    msg.target.assign("BXOZQZUQLCHLHTDWUGKJCPCMBMQVFAZLOMRKRPYHRSYTWHKYNGDMVPXFMZKRXYZVIDFXLLTOIZIERSBBSSMPHLXRXLUWNMNEWXFHAGIBEVDGCLOHIACCVKUCNPDOUDXJCFH");
    msg.x = 0.9926063682210929;
    msg.y = 0.7150771230646006;
    msg.z = 0.2035111506240005;
    msg.n = 0.6387084175998169;
    msg.e = 0.709991295079461;
    msg.d = 0.6132092855224611;
    msg.phi = 0.9942788613500161;
    msg.theta = 0.9556775165866787;
    msg.psi = 0.08836689799555286;
    msg.accuracy = 0.2117107649149983;

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
    msg.setTimeStamp(0.8429053609891589);
    msg.setSource(15862U);
    msg.setSourceEntity(32U);
    msg.setDestination(29511U);
    msg.setDestinationEntity(66U);
    msg.target.assign("FREWNJXWZNGBMCKASEX");
    msg.x = 0.7138413761291077;
    msg.y = 0.08863774561738036;
    msg.z = 0.3414823208297332;
    msg.n = 0.3230838497989569;
    msg.e = 0.8234321035583706;
    msg.d = 0.4193635617456084;
    msg.phi = 0.3078778717839439;
    msg.theta = 0.6068540355764603;
    msg.psi = 0.7839532429188062;
    msg.accuracy = 0.5928455377611911;

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
    msg.setTimeStamp(0.6442089488663306);
    msg.setSource(28371U);
    msg.setSourceEntity(179U);
    msg.setDestination(6572U);
    msg.setDestinationEntity(191U);
    msg.target.assign("QQUAHWFJKAIYWPBQOMIOHIUUUSXQZEEMXRZWTZB");
    msg.x = 0.8124876148559729;
    msg.y = 0.9259991211187402;
    msg.z = 0.4140276222434688;
    msg.n = 0.32267230961772286;
    msg.e = 0.8527651681823883;
    msg.d = 0.4749953169356703;
    msg.phi = 0.4882452782202058;
    msg.theta = 0.5871270127753073;
    msg.psi = 0.9689124669558293;
    msg.accuracy = 0.845531251963408;

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
    msg.setTimeStamp(0.59047527232098);
    msg.setSource(55457U);
    msg.setSourceEntity(120U);
    msg.setDestination(49668U);
    msg.setDestinationEntity(19U);
    msg.target.assign("BGXULOYPONEAKMARBZSUCLFHBOVJUWFOFVYLHWIRGQLPQOUUYQXIMSDEHSBCQUVPJBFCWYAAXIQOHISCERYZJNUEBQFLKAJFDVCOXTHXINMU");
    msg.lat = 0.30252637409897887;
    msg.lon = 0.8446606014774176;
    msg.z_units = 135U;
    msg.z = 0.44475392051593043;
    msg.accuracy = 0.14804197721979873;

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
    msg.setTimeStamp(0.9028275212680201);
    msg.setSource(8110U);
    msg.setSourceEntity(120U);
    msg.setDestination(37713U);
    msg.setDestinationEntity(92U);
    msg.target.assign("HFFMIWRSXBEPOQFJCLOXCZPJLERETRNWDEMDOQYJVXRGXSQOXZUKZKHEGIDHADPFIKJIAJBHFMTQSGDTBPJEDATYZVUJ");
    msg.lat = 0.7839659548200572;
    msg.lon = 0.4396525333048261;
    msg.z_units = 241U;
    msg.z = 0.3500967681073548;
    msg.accuracy = 0.3707917746345518;

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
    msg.setTimeStamp(0.8379387508862599);
    msg.setSource(33182U);
    msg.setSourceEntity(72U);
    msg.setDestination(37067U);
    msg.setDestinationEntity(164U);
    msg.target.assign("SLKOHVQTYBPSGBLEDVEQWBHXCSUJCYOMDXBQNAFRXSIUFEZFWQJKPR");
    msg.lat = 0.09490580718519559;
    msg.lon = 0.37399716175754727;
    msg.z_units = 149U;
    msg.z = 0.34984103338214334;
    msg.accuracy = 0.43833154125740204;

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
    msg.setTimeStamp(0.3662183142847123);
    msg.setSource(2312U);
    msg.setSourceEntity(40U);
    msg.setDestination(45500U);
    msg.setDestinationEntity(174U);
    msg.name.assign("YMXMTUEGLRLNXQNSCVAAQWHYCNHR");
    msg.lat = 0.29405118857560864;
    msg.lon = 0.8113424992691521;
    msg.z = 0.6518633650619151;
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
    msg.setTimeStamp(0.5954314110863657);
    msg.setSource(55315U);
    msg.setSourceEntity(2U);
    msg.setDestination(8588U);
    msg.setDestinationEntity(208U);
    msg.name.assign("HQOZJVCURZAMUELJWQTOYDLFPAMPITUPOSNNRHFUZTQVAUQVPUYTCIJTDOYLOFIBKJSKZAEQUHBGDNIRLNPJRUWCJCKMLEUCGFRHYWKGGTMQCMVADQNYLHAEKBLAXAESMGOGXZKSBNWWOZIPFNTRFRJVPVVMLLBVTBGCXQZZWSKCF");
    msg.lat = 0.8631502818696517;
    msg.lon = 0.7039100949692917;
    msg.z = 0.10199405727641309;
    msg.z_units = 178U;

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
    msg.setTimeStamp(0.7260277516256345);
    msg.setSource(57603U);
    msg.setSourceEntity(157U);
    msg.setDestination(52995U);
    msg.setDestinationEntity(176U);
    msg.name.assign("BALFLWTAZPBFRGHIDKHYFKAYCQRAKXDKQSUNPUUDHCWKMBYHFROENOIKSXXMLZWXDPFJRMSFQYSJIQTNVHJADBWXIHBPDCRAOSZRZNFQJDMHYLKAUULGPDERRVGFHEPIBLFWGEQYRVWOUHVSUVRTJMCUSPMPE");
    msg.lat = 0.46895122752936647;
    msg.lon = 0.6117894420929669;
    msg.z = 0.8027895128067345;
    msg.z_units = 175U;

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
    msg.setTimeStamp(0.9824471603007258);
    msg.setSource(18132U);
    msg.setSourceEntity(216U);
    msg.setDestination(6564U);
    msg.setDestinationEntity(40U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.5570322100951047);
    msg.setSource(54982U);
    msg.setSourceEntity(71U);
    msg.setDestination(52567U);
    msg.setDestinationEntity(207U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.8828483982459647);
    msg.setSource(17156U);
    msg.setSourceEntity(122U);
    msg.setDestination(40533U);
    msg.setDestinationEntity(19U);
    msg.op = 68U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("NDHZFFUXGHOZCLQCGBOIGBFZDACXLJWHISNNWLEVWFFRJQJSVUEKJNPNEBUZNMPYAFRQSGSKRQSVQCUGELIPDNSEGSSQKJXXZKIMTO");
    tmp_msg_0.lat = 0.7709612715846242;
    tmp_msg_0.lon = 0.4830032798164777;
    tmp_msg_0.z = 0.4192483718234201;
    tmp_msg_0.z_units = 152U;
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
    msg.setTimeStamp(0.022225443549841906);
    msg.setSource(34253U);
    msg.setSourceEntity(89U);
    msg.setDestination(49251U);
    msg.setDestinationEntity(122U);
    msg.value = 0.2513771703001163;
    msg.type = 149U;

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
    msg.setTimeStamp(0.8074976959753768);
    msg.setSource(25759U);
    msg.setSourceEntity(28U);
    msg.setDestination(14046U);
    msg.setDestinationEntity(231U);
    msg.value = 0.9977746765155899;
    msg.type = 103U;

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
    msg.setTimeStamp(0.7094172282595369);
    msg.setSource(55588U);
    msg.setSourceEntity(117U);
    msg.setDestination(33152U);
    msg.setDestinationEntity(189U);
    msg.value = 0.1900221416444644;
    msg.type = 57U;

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
    msg.setTimeStamp(0.6438733336428768);
    msg.setSource(18633U);
    msg.setSourceEntity(60U);
    msg.setDestination(3025U);
    msg.setDestinationEntity(106U);
    msg.value = 0.2264950947747113;

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
    msg.setTimeStamp(0.6819430882567645);
    msg.setSource(19839U);
    msg.setSourceEntity(145U);
    msg.setDestination(19263U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6662033601254755;

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
    msg.setTimeStamp(0.9304392481025319);
    msg.setSource(12388U);
    msg.setSourceEntity(151U);
    msg.setDestination(41628U);
    msg.setDestinationEntity(110U);
    msg.value = 0.7220909792778436;

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
    msg.setTimeStamp(0.06214567258273196);
    msg.setSource(10846U);
    msg.setSourceEntity(209U);
    msg.setDestination(32860U);
    msg.setDestinationEntity(32U);
    msg.timestamp_last_service = 0.7009003783691679;
    msg.time_next_service = 0.8063672510188598;
    msg.time_motor_next_service = 0.0004944132167139514;
    msg.time_idle_ground = 0.11958055812873658;
    msg.time_idle_air = 0.5623671926404399;
    msg.time_idle_water = 0.31255624555227346;
    msg.time_idle_underwater = 0.755752404734903;
    msg.time_idle_unknown = 0.2495968371624565;
    msg.time_motor_ground = 0.4844935856363144;
    msg.time_motor_air = 0.9228922770758992;
    msg.time_motor_water = 0.9938909857157827;
    msg.time_motor_underwater = 0.6312523368099393;
    msg.time_motor_unknown = 0.9876747513056312;
    msg.rpm_min = -18673;
    msg.rpm_max = -11220;
    msg.depth_max = 0.7336898324056627;

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
    msg.setTimeStamp(0.6982553060738653);
    msg.setSource(49061U);
    msg.setSourceEntity(149U);
    msg.setDestination(48708U);
    msg.setDestinationEntity(103U);
    msg.timestamp_last_service = 0.5578393508679826;
    msg.time_next_service = 0.07573478959597002;
    msg.time_motor_next_service = 0.1974433464822476;
    msg.time_idle_ground = 0.7588610966809741;
    msg.time_idle_air = 0.6890448880840253;
    msg.time_idle_water = 0.21774371045606755;
    msg.time_idle_underwater = 0.5572956149623542;
    msg.time_idle_unknown = 0.018811248940389658;
    msg.time_motor_ground = 0.8934656216579262;
    msg.time_motor_air = 0.6052789808075841;
    msg.time_motor_water = 0.8137576952457503;
    msg.time_motor_underwater = 0.4812855076012753;
    msg.time_motor_unknown = 0.14254254951797907;
    msg.rpm_min = -4068;
    msg.rpm_max = 8033;
    msg.depth_max = 0.5603239214625716;

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
    msg.setTimeStamp(0.5069425425064075);
    msg.setSource(37102U);
    msg.setSourceEntity(144U);
    msg.setDestination(58434U);
    msg.setDestinationEntity(205U);
    msg.timestamp_last_service = 0.9358380083873232;
    msg.time_next_service = 0.8496833437996196;
    msg.time_motor_next_service = 0.07185148111032147;
    msg.time_idle_ground = 0.9295628827545069;
    msg.time_idle_air = 0.7718399798864618;
    msg.time_idle_water = 0.6304788162470489;
    msg.time_idle_underwater = 0.8062182235952738;
    msg.time_idle_unknown = 0.8629957279967342;
    msg.time_motor_ground = 0.8235121879660391;
    msg.time_motor_air = 0.4715067106400094;
    msg.time_motor_water = 0.5830124634488256;
    msg.time_motor_underwater = 0.3282976446353383;
    msg.time_motor_unknown = 0.9965621029148364;
    msg.rpm_min = -32180;
    msg.rpm_max = 7230;
    msg.depth_max = 0.4697988281029706;

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
    msg.setTimeStamp(0.2318965729607798);
    msg.setSource(42495U);
    msg.setSourceEntity(181U);
    msg.setDestination(44165U);
    msg.setDestinationEntity(156U);
    msg.severity = 146U;
    msg.text.assign("IQMADGRXSJWFKFAYGCPVIWVLYIRKRUTWXTRYRFVULPKZTQPAFOJIYGRYZSTDGIBQUPYXMHNCVVNBQXLLFIJPGIFL");

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
    msg.setTimeStamp(0.89710924492202);
    msg.setSource(39417U);
    msg.setSourceEntity(141U);
    msg.setDestination(36976U);
    msg.setDestinationEntity(59U);
    msg.severity = 174U;
    msg.text.assign("QWVXPQCSYKZ");

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
    msg.setTimeStamp(0.4208266964676318);
    msg.setSource(11796U);
    msg.setSourceEntity(62U);
    msg.setDestination(12847U);
    msg.setDestinationEntity(146U);
    msg.severity = 229U;
    msg.text.assign("UBSNWKBQGXPGEOXONIHOLDZLZADAVOWJIEREMDPPBGQGTPNMLJJAO");

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
    msg.setTimeStamp(0.5340265492576116);
    msg.setSource(17207U);
    msg.setSourceEntity(242U);
    msg.setDestination(64773U);
    msg.setDestinationEntity(110U);
    msg.channel = -76;
    msg.value = 666849284;
    msg.gain = 13U;

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
    msg.setTimeStamp(0.7764473722234542);
    msg.setSource(29692U);
    msg.setSourceEntity(205U);
    msg.setDestination(21010U);
    msg.setDestinationEntity(53U);
    msg.channel = 15;
    msg.value = -1195450904;
    msg.gain = 161U;

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
    msg.setTimeStamp(0.04725278515255027);
    msg.setSource(18105U);
    msg.setSourceEntity(42U);
    msg.setDestination(31229U);
    msg.setDestinationEntity(156U);
    msg.channel = -80;
    msg.value = -980059944;
    msg.gain = 244U;

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
    msg.setTimeStamp(0.3068804926587648);
    msg.setSource(13182U);
    msg.setSourceEntity(253U);
    msg.setDestination(27061U);
    msg.setDestinationEntity(5U);
    msg.ch01 = 0.9062994973091281;
    msg.ch02 = 0.3735232845008474;
    msg.ch03 = 0.6316986170594749;
    msg.ch04 = 0.636182426352397;
    msg.ch05 = 0.3039595087354663;
    msg.ch06 = 0.9701249710633125;
    msg.ch07 = 0.26729099972773285;
    msg.ch08 = 0.6763978333236771;
    msg.ch09 = 0.8647915779440914;
    msg.ch10 = 0.988981852697244;
    msg.ch11 = 0.5089888269201917;
    msg.ch12 = 0.6157829325356033;
    msg.ch13 = 0.6671470382747436;
    msg.ch14 = 0.510679679578687;
    msg.ch15 = 0.37685143577421787;
    msg.ch16 = 0.757076052843649;

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
    msg.setTimeStamp(0.5936880108546541);
    msg.setSource(43952U);
    msg.setSourceEntity(9U);
    msg.setDestination(53354U);
    msg.setDestinationEntity(152U);
    msg.ch01 = 0.0731643693029479;
    msg.ch02 = 0.9534141639613009;
    msg.ch03 = 0.5267838546456719;
    msg.ch04 = 0.0916875174471039;
    msg.ch05 = 0.392522198424648;
    msg.ch06 = 0.667312867739727;
    msg.ch07 = 0.515620135857399;
    msg.ch08 = 0.5388704014548341;
    msg.ch09 = 0.16942300338929428;
    msg.ch10 = 0.002558732633644034;
    msg.ch11 = 0.5166009697523407;
    msg.ch12 = 0.31299295814349726;
    msg.ch13 = 0.7620003359378225;
    msg.ch14 = 0.9062024471368049;
    msg.ch15 = 0.42806719185685393;
    msg.ch16 = 0.4273594896782956;

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
    msg.setTimeStamp(0.033840900538054663);
    msg.setSource(4392U);
    msg.setSourceEntity(153U);
    msg.setDestination(12473U);
    msg.setDestinationEntity(149U);
    msg.ch01 = 0.04644402144141824;
    msg.ch02 = 0.05419925125037228;
    msg.ch03 = 0.811051928710386;
    msg.ch04 = 0.3782036068709953;
    msg.ch05 = 0.3089530040372278;
    msg.ch06 = 0.7846104369356394;
    msg.ch07 = 0.4136407739424445;
    msg.ch08 = 0.5618764870926473;
    msg.ch09 = 0.6931614548304944;
    msg.ch10 = 0.6285982001027164;
    msg.ch11 = 0.4783427252313649;
    msg.ch12 = 0.03374403017214045;
    msg.ch13 = 0.0432415230250458;
    msg.ch14 = 0.6769792825515639;
    msg.ch15 = 0.2020802776230437;
    msg.ch16 = 0.08670251513394445;

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
    msg.setTimeStamp(0.9623988572320871);
    msg.setSource(58546U);
    msg.setSourceEntity(74U);
    msg.setDestination(50327U);
    msg.setDestinationEntity(88U);
    msg.op = 89U;
    msg.lat = 0.8970942752832882;
    msg.lon = 0.9544446937647434;
    msg.height = 0.2925727605895243;
    msg.depth = 0.4642009418512604;
    msg.alt = 0.07291239631394197;

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
    msg.setTimeStamp(0.619778495415692);
    msg.setSource(4190U);
    msg.setSourceEntity(40U);
    msg.setDestination(12443U);
    msg.setDestinationEntity(232U);
    msg.op = 140U;
    msg.lat = 0.14786983454209168;
    msg.lon = 0.3621896188502406;
    msg.height = 0.011372795872534813;
    msg.depth = 0.7980801065404297;
    msg.alt = 0.46425369605078237;

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
    msg.setTimeStamp(0.049660212796512004);
    msg.setSource(12449U);
    msg.setSourceEntity(4U);
    msg.setDestination(48924U);
    msg.setDestinationEntity(40U);
    msg.op = 82U;
    msg.lat = 0.4503509998667352;
    msg.lon = 0.9562658612443645;
    msg.height = 0.4752074094659199;
    msg.depth = 0.8586376916954358;
    msg.alt = 0.4736316860135219;

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
    msg.setTimeStamp(0.3021826649501166);
    msg.setSource(4465U);
    msg.setSourceEntity(228U);
    msg.setDestination(19229U);
    msg.setDestinationEntity(97U);
    msg.direction = 0.9053921300962361;
    msg.speed = 0.5217357592831368;
    msg.turbulence = 0.6822552912556105;

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
    msg.setTimeStamp(0.2873016668794517);
    msg.setSource(44298U);
    msg.setSourceEntity(58U);
    msg.setDestination(44211U);
    msg.setDestinationEntity(130U);
    msg.direction = 0.1902119092859177;
    msg.speed = 0.05303630276624127;
    msg.turbulence = 0.45106325620026466;

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
    msg.setTimeStamp(0.6802572063727366);
    msg.setSource(45019U);
    msg.setSourceEntity(35U);
    msg.setDestination(62719U);
    msg.setDestinationEntity(124U);
    msg.direction = 0.6715754076313023;
    msg.speed = 0.5059733676115818;
    msg.turbulence = 0.6000320746789101;

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
    msg.setTimeStamp(0.02582878252133436);
    msg.setSource(14048U);
    msg.setSourceEntity(105U);
    msg.setDestination(21334U);
    msg.setDestinationEntity(227U);
    msg.msg_type.assign("ARZWLZZUBSDPBSNPHFMIRXKYJXLWEGVNHVXTVVWTMOSDWSNIMCQVCQFRFTGVEYXPYGJOCYMSOTQLBEHPBXMDUTZGBZVNK");
    msg.sensor_class.assign("FOWTGEKSUVPWMSGDNAEBXXJVPBSKTFTHMCQCFICOZEZYZTNKALUZSLRIWFKIQCEWKRDEDTIOAJXCWBXGXAJEWQMROLTQNBJDHAZNLPZKGAQRSVYDXSVPQYYMMJNSJRITUIYRNBAVIBKNOPTJVWMLMQTBHQPRUPPGAHHWGEZZOHJWUXEUUFNVKEFLOOROSDMVREMYYVHC");
    msg.mmsi.assign("CHAFHDFGMDMOWSZUQTNSYUAJVPCLDWLVLMLRITHAPJNDDWHMHQNJTWKIUCSJYOCEYBWCZIZDYTDRYAYAWISXYAOSBMTZFIONTXGKHOEDIADCJKZQAXVAWBHNPSGJCVEIMYFTUGIF");
    msg.callsign.assign("FVAYRTEBEEXGLCXZGUTUIMXUMCKJMTJRRJIPVMSDEDXAJNUYAXGOFKHTIDMIEDWBFNENVXEAEACGOOGXHPQFGBVFQLYLRIZDBQTHVWSTQPJ");
    msg.name.assign("RIIHFVNXIRCBAUHZFPDDSYIMUPLAHVWYNMOVGLXNYDNWZPPFLXQBMGEACXBOMQTEOOBUHUVJINRXZXTECYCYWNSJOMUTUDHLWVRLBAVAVRKAFLJPGUTZRJLBQGFMTDKIGKSLSGRE");
    msg.nav_status = 45U;
    msg.type_and_cargo = 182U;
    msg.lat = 0.294944184764113;
    msg.lon = 0.3303566173875653;
    msg.course = 0.4563677896443151;
    msg.speed = 0.6152554987791938;
    msg.dist = 0.7038136386095794;
    msg.a = 0.43779576049776747;
    msg.b = 0.14288080884133258;
    msg.c = 0.7635934884117594;
    msg.d = 0.7203576347848099;
    msg.draught = 0.8914645122781708;

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
    msg.setTimeStamp(0.3150094084938134);
    msg.setSource(49213U);
    msg.setSourceEntity(195U);
    msg.setDestination(65053U);
    msg.setDestinationEntity(96U);
    msg.msg_type.assign("SYSCCDCWETZMCYFLIJMBPLJWVEZENJBIAVHNMMDUARDXEXUFDJBZYIBQAWPOUHXBOHJHULINZFFFNBKQPBZOSZNIKGWTDYHAYHOVFYLUPVMMRUOROWHKDISDRGNCKDAXLMLHARGRNXQYQTJRPPPAYLONDTSGWGKXSTQLSTJRMSEQHCKEXOPVCGTTYTASFAWBGEIVIVABLZKNKOFET");
    msg.sensor_class.assign("KOWUOIVRGKSSXMAZJEFNAVEHPNACNOJNYMGZDQLISSMAVKOFWDIKVMYGRIRBSPBUVAIZMTVZCUEMQQYHINMPZWNLBBCUYJWNYQVJXLKGJSDTPJSDTYOOEEXMEFQNHBKYBVLEELPLMBRMXOHCQQYLPDXCUWTGEZLCUJHHQAAPCNDRPFFBGGHWQYGPVUWWFRDTDSHXHEIRTUGWAKAZJCPKIFFXXZIXRGTNVXOZSIURJBSCZKQDLARBOKTTJYHDTF");
    msg.mmsi.assign("LKRELCNADCJVCUPHUKZPYDTGBKPQYGSMUMCVSQSAMMCIOIWHIIFADVERNSSCULNRJNTAJUBXTCYNFEXOUMWOAGMQUETBNQSRMJIBPIIGOOXEQEEDSWYKJNGBILHBYGFOXTTEYXPPAEHZWORZPGHUJRNHQGCDPLYZRQGSUL");
    msg.callsign.assign("BJFVKKQQPDAIWXFRLAXYBQASSNPDLJOJUMOBUPCCGRDJSKFRFYRNKRARCMEGWDXOHLFNVAIZBHGDZTGIYUJWRIBR");
    msg.name.assign("URAFYXZVYLCWIYCFLFCHXRIDTTKBIQEOJENJGAYPGTLELSMAKBUOJGHZMBSPFBSRLJNQPACEJBSWGPNWQZOCQODXROQIJYDGOGXUGRMHTKVVAPWYPJHCTZNMKKXQRVFNBSUWXFPKQHWZMFRSLENBPVMSDJDHZLRXTBELFIOJSISZNOHWNDBQGJYHTMTCLHVRDYXCYYKVCDNKUPFEHVAWUQEXMID");
    msg.nav_status = 193U;
    msg.type_and_cargo = 199U;
    msg.lat = 0.06466287745258026;
    msg.lon = 0.8351260387581548;
    msg.course = 0.8979153884098874;
    msg.speed = 0.13648035837977024;
    msg.dist = 0.9029119085187295;
    msg.a = 0.0108408211970622;
    msg.b = 0.006996401684382536;
    msg.c = 0.04606255524426972;
    msg.d = 0.1508717267733446;
    msg.draught = 0.7537548085037755;

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
    msg.setTimeStamp(0.29787255683746283);
    msg.setSource(21344U);
    msg.setSourceEntity(249U);
    msg.setDestination(11776U);
    msg.setDestinationEntity(151U);
    msg.msg_type.assign("MNVOOGWMNILILFQUFLXMTPUFJTDWKHJBQYESZLFQUFPMVHXGCKUKBCXZIEBOMZRXKBLLHGNAXFYNGNBKKOOGZVEDAOACPSJGUWMDWARLNEPZCSQAXGOHRUTQCHYTBAPYWLEFVDYEVVRJGMTYTJUDEYQ");
    msg.sensor_class.assign("PMWZFQJLRERZPQTMKKFZEFQXHAAZYPGXTNWRFSTEYNDSIUNXLJHXXFAPXAOQQVXIUHGCBSEQMPQHUGKLBFZUGOEQDIPOHCLSARSCIEXWJZAIJ");
    msg.mmsi.assign("VNKERQRQTGEKWLOPJVHWZGIATUOXRBVZNUSKZTEARRDCBGYPCHXLENNZTMLDTLUIYXJ");
    msg.callsign.assign("JTIGBZVZWFOXRFHSOFVRKEHUBIWWIZUKHKRGZVOXKFCARFSBVLUVDTXPMSNJCIYQNEXEBPFWEEMRBDWAXONWIYPOHZKUGAHXEKIOYAMVCDNLMQYCQKORLFMPBNGWDOSQYSRICQUQYVYSBQFJANMZLLDG");
    msg.name.assign("MVIVYXWANUZFGSWHYDOURETIUBNEGZYQYKVZHIDGFOFCLAMCVHCEPYHPNUSJWRKOGEAXQLWMPMAMKRXKBUKIZWTJBVTFQTCSRDJZDVLDHUDRGETKZEEOPPTDZIKMCCLJFIWGBFXXIOGAOQGSPTXBARLDNQRWXXOVWNBGLSZYOSBZMOTKCBSNETF");
    msg.nav_status = 6U;
    msg.type_and_cargo = 16U;
    msg.lat = 0.5454282682261532;
    msg.lon = 0.6136481391162822;
    msg.course = 0.5235168739555981;
    msg.speed = 0.5014536444640504;
    msg.dist = 0.08703140392459363;
    msg.a = 0.4186142463170631;
    msg.b = 0.31205356013247376;
    msg.c = 0.5457957060449028;
    msg.d = 0.3231593372359779;
    msg.draught = 0.26483894753226445;

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
    msg.setTimeStamp(0.22533892161672842);
    msg.setSource(2180U);
    msg.setSourceEntity(133U);
    msg.setDestination(61105U);
    msg.setDestinationEntity(73U);
    msg.depth_at_loc.assign("WQGZGBGRKDPPACADKRYEJXXSX");
    msg.danger.assign("CGLBJRXZVTXUSUVHGDWPLVOYWOCGLWZHDOZSQNPIEJTQICOMHAWRHSCRQAYTEQSUFAUWBPPATZEIZSGXWVSUMPOJPYKFJSAMAKTGMONJQSFFNXGLJJNQVIATHXPKMKHOVZNJXLIDQIDMLVMNHHYPDTNVMZY");

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
    msg.setTimeStamp(0.9202963119880765);
    msg.setSource(9744U);
    msg.setSourceEntity(128U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(3U);
    msg.depth_at_loc.assign("ZRSMBZFZCBMZBDUODHHSIJINQYPCKZFUUHKKGMOLTXBQNVIDHXQKBEKUOQVKBGFXOELHACIYTECFULVHRFBWMTJZESMRTDSNVCAUAMYWWGWUWGDEFDCOMJUALMFLRPABSXYQPRORJSYXVCKSQWPKTLUGIAWSTXJYOKPAZFNZQEYXGGETJ");
    msg.danger.assign("QFWRENIKGAPGOHASYOZUMZTFJRWSODBSUEBQCDYTMMDLOUVNBVKNDFHVDUDPJLGPYJTZVLFFOBCBLVMKQCXKAZDSTYXJELHKNSVLUTUWPRQBRIGQIAFQWQKYAHMWRMRVZPNFJOEYXKRUIFXPHKOJGXYENSXZTHGBRHLYVOJEAXAGDJUGQWRZXNZLPGDF");

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
    msg.setTimeStamp(0.4734465990806985);
    msg.setSource(8951U);
    msg.setSourceEntity(98U);
    msg.setDestination(3988U);
    msg.setDestinationEntity(50U);
    msg.depth_at_loc.assign("ABUSJNASVO");
    msg.danger.assign("UAZIKVRYEMNAFZCQBNSVMRVCDOKRVCYTLAQJEFGKWJAUCOCDBBDYYJZKJLPDSDOMOIZKXYIWJVTSNTTXJXVXHYKWRUMUGFTRELNCRGQNSFZEUHUNNPZLOCJZDSCWPWUCMQHSKOQNRDBABQYTGQIFLBLPHGVAZHFDKXXHWFTBPFBPJSLVEYDBGFDWEMHPLPHZWFAKGCLEIS");

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
    msg.setTimeStamp(0.9079258548215514);
    msg.setSource(26230U);
    msg.setSourceEntity(215U);
    msg.setDestination(16950U);
    msg.setDestinationEntity(219U);
    msg.time = 0.7975149526920222;
    msg.x = 0.16841526731091927;
    msg.y = 0.6471843364457633;
    msg.z = 0.9754167849809768;

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
    msg.setTimeStamp(0.7281379945738432);
    msg.setSource(45148U);
    msg.setSourceEntity(253U);
    msg.setDestination(28651U);
    msg.setDestinationEntity(177U);
    msg.time = 0.8912291611342498;
    msg.x = 0.20724852409780392;
    msg.y = 0.3653545949776863;
    msg.z = 0.5380791960969498;

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
    msg.setTimeStamp(0.8983612132998278);
    msg.setSource(4193U);
    msg.setSourceEntity(141U);
    msg.setDestination(17331U);
    msg.setDestinationEntity(180U);
    msg.time = 0.1603434274794524;
    msg.x = 0.7225282055786575;
    msg.y = 0.9014074275691368;
    msg.z = 0.6588898909985115;

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
    msg.setTimeStamp(0.5916198581786014);
    msg.setSource(1463U);
    msg.setSourceEntity(45U);
    msg.setDestination(56315U);
    msg.setDestinationEntity(50U);
    msg.nbeams = 5U;
    msg.ncells = 103U;
    msg.coord_sys = 94U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.05252693851507939;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.6537756859484205;
    tmp_tmp_msg_0_0.amp = 0.2530927815559656;
    tmp_tmp_msg_0_0.cor = -57;
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
    msg.setTimeStamp(0.8877423501398292);
    msg.setSource(11463U);
    msg.setSourceEntity(59U);
    msg.setDestination(29543U);
    msg.setDestinationEntity(56U);
    msg.nbeams = 94U;
    msg.ncells = 38U;
    msg.coord_sys = 48U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.6207245321596233;
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
    msg.setTimeStamp(0.5287707308876334);
    msg.setSource(60486U);
    msg.setSourceEntity(242U);
    msg.setDestination(52285U);
    msg.setDestinationEntity(33U);
    msg.nbeams = 12U;
    msg.ncells = 30U;
    msg.coord_sys = 27U;

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
    msg.setTimeStamp(0.2363794668125473);
    msg.setSource(19419U);
    msg.setSourceEntity(87U);
    msg.setDestination(61185U);
    msg.setDestinationEntity(106U);
    msg.cell_position = 0.3057630841939645;

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
    msg.setTimeStamp(0.44912764235609903);
    msg.setSource(59335U);
    msg.setSourceEntity(224U);
    msg.setDestination(54239U);
    msg.setDestinationEntity(83U);
    msg.cell_position = 0.5890137365053422;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.1962207097921299;
    tmp_msg_0.amp = 0.6082112073489764;
    tmp_msg_0.cor = 23;
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
    msg.setTimeStamp(0.49108969425155147);
    msg.setSource(60984U);
    msg.setSourceEntity(189U);
    msg.setDestination(23756U);
    msg.setDestinationEntity(194U);
    msg.cell_position = 0.9790263134229392;

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
    msg.setTimeStamp(0.2741769407314496);
    msg.setSource(1642U);
    msg.setSourceEntity(57U);
    msg.setDestination(53988U);
    msg.setDestinationEntity(88U);
    msg.vel = 0.8518835985705624;
    msg.amp = 0.8263104310905679;
    msg.cor = 106;

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
    msg.setTimeStamp(0.10841766740013081);
    msg.setSource(31241U);
    msg.setSourceEntity(105U);
    msg.setDestination(1817U);
    msg.setDestinationEntity(95U);
    msg.vel = 0.720214319745235;
    msg.amp = 0.648586440063704;
    msg.cor = 74;

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
    msg.setTimeStamp(0.7784183067203022);
    msg.setSource(34774U);
    msg.setSourceEntity(87U);
    msg.setDestination(30446U);
    msg.setDestinationEntity(172U);
    msg.vel = 0.8168814794753145;
    msg.amp = 0.9466862685961713;
    msg.cor = -57;

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
    msg.setTimeStamp(0.1742684680868949);
    msg.setSource(7059U);
    msg.setSourceEntity(40U);
    msg.setDestination(52556U);
    msg.setDestinationEntity(11U);
    msg.value = 0.15321190875907242;

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
    msg.setTimeStamp(0.2431159928429507);
    msg.setSource(33294U);
    msg.setSourceEntity(226U);
    msg.setDestination(61639U);
    msg.setDestinationEntity(93U);
    msg.value = 0.4152972116259941;

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
    msg.setTimeStamp(0.777633080204557);
    msg.setSource(23186U);
    msg.setSourceEntity(245U);
    msg.setDestination(23083U);
    msg.setDestinationEntity(178U);
    msg.value = 0.14105963867312887;

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
    msg.setTimeStamp(0.8062132723777375);
    msg.setSource(21744U);
    msg.setSourceEntity(242U);
    msg.setDestination(59229U);
    msg.setDestinationEntity(134U);
    msg.name.assign("YTWDEVOWHLMDYJTJCHUKRPAVAAIVXNDGSFGGTZRQOJAVGQUQQVGMAYRNECJQDBYUWRSOUMDVZNNFEOIDMIHPNSLLBVVZIKMXNBIIMOSBIPKCHGBBCQEODRDSUDFPFWFTOHCEPMVTOT");
    msg.value = 31U;

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
    msg.setTimeStamp(0.3921344955808108);
    msg.setSource(49403U);
    msg.setSourceEntity(252U);
    msg.setDestination(26438U);
    msg.setDestinationEntity(154U);
    msg.name.assign("PSEPLMVBZYHTBIODHTOQVGYCFNUGDKHDBTJLIQGXGTBXAC");
    msg.value = 206U;

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
    msg.setTimeStamp(0.953448220232367);
    msg.setSource(55401U);
    msg.setSourceEntity(148U);
    msg.setDestination(17201U);
    msg.setDestinationEntity(141U);
    msg.name.assign("RMKHFEXQCPZLNRQMGLTNORLOREQUWOCJCSHEXIGMIYWQYUDJPSXLVASXEFJYGSLMZGBEUAVHXRXMGSKFYWTTSEBLNKNFHEQCIPWAVRDODNFYQRJLJOKAAHBTVBWGMRCTLNDVWIQXVBYACZJQYPUBGVDSIKFDZBUPUHCVWSDZKCOSXJITDJWUKHAZMBNITSVHNUFOMUFGQJHTEZPOFHACATREKPBPEX");
    msg.value = 3U;

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
    msg.setTimeStamp(0.28036408518432654);
    msg.setSource(63916U);
    msg.setSourceEntity(214U);
    msg.setDestination(13599U);
    msg.setDestinationEntity(145U);
    msg.name.assign("WALHXSPOQMJENGIOBMHBZZRGYZUVCOCGUGKLJELVEFNIHAJXWSPCNGOVOHQZEEITXQTCXCIKYJHREBUFVIFSRYNROHMWPTODNELMQZQDBYADFNWRXQJMRWBIZSGMLBUVOCKSVFKWLVTQTKCDPJSJATXYPTTBGZNVKPPSWYUYERNLKNDMLWKFGYDBHMIADCRLNFMPEJDDPKGRZPGXJIE");

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
    msg.setTimeStamp(0.566213587809608);
    msg.setSource(25169U);
    msg.setSourceEntity(208U);
    msg.setDestination(12583U);
    msg.setDestinationEntity(208U);
    msg.name.assign("RLKFFDUUEKBWWZTWIYLRBPALXKYPWDBGPNC");

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
    msg.setTimeStamp(0.23293438179494386);
    msg.setSource(64727U);
    msg.setSourceEntity(150U);
    msg.setDestination(62334U);
    msg.setDestinationEntity(171U);
    msg.name.assign("ZOUQDHJSGIAOIVXKVPWCDAPQKLSNUEABRTRPUFADGCLHMVZNPYDIAIYWZXHBMXCQXMMVNJZJPXAIFRXFZATTSHNJRZELSSQCNWQFFYZMCTKSUPPTSBTQOYBTLNKPIBEHIOOKDHSHJDEUTUXMZAGFXWCFLOVDLUEGZQCIHOGYRBSQSTKXGYRYBWLKURVJ");

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
    msg.setTimeStamp(0.8825160009185874);
    msg.setSource(20865U);
    msg.setSourceEntity(121U);
    msg.setDestination(31091U);
    msg.setDestinationEntity(71U);
    msg.name.assign("HWIDRMQYUXYELNNIFAZUUKAHIYTZVWTPQILEZAZRGOHLMOBJYKVZUHOGIHRCDXLTJPXYSJZCKFWJW");
    msg.value = 34U;

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
    msg.setTimeStamp(0.2789042030441201);
    msg.setSource(53686U);
    msg.setSourceEntity(93U);
    msg.setDestination(65479U);
    msg.setDestinationEntity(213U);
    msg.name.assign("TLINRESDYZACTTQYLXLWJHNIKQOIYVGKMPVGYCRFNZFDPRNWYMSKCGTPENKSNBOCIOHDASYZTEZSBDQJSPFDXWGUEKKVHLVXPTVFPIFWSDHHCKWTWLRQVCIPVNAUXZYRLLLFQFBBUOPQRNCYMHEAKRXJBSXVGWLZDXJADKJMDUUAGIARMGSHQPIOGRXJAEOUMFY");
    msg.value = 159U;

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
    msg.setTimeStamp(0.13378291504323925);
    msg.setSource(30091U);
    msg.setSourceEntity(180U);
    msg.setDestination(8241U);
    msg.setDestinationEntity(140U);
    msg.name.assign("KGDYLSMGZLTGOWOZADDTHFTZNQWIKOUJRNSRZKYUOCMZHPOXQLLUDANHFHMAVTSGVDPZKKATSLNCWFCAQPSUTDPXDIPXXOAXQLOFZBEFUYQIOIOYEFAPENSIVXKTYMSHAHRJNRANZJFJJRCGTRBBYJBKORYLJMIEGXQVZMVUMHXV");
    msg.value = 191U;

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
    msg.setTimeStamp(0.07208921927506662);
    msg.setSource(55004U);
    msg.setSourceEntity(73U);
    msg.setDestination(64391U);
    msg.setDestinationEntity(226U);
    msg.value = 0.2940965634128494;

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
    msg.setTimeStamp(0.33434137738512126);
    msg.setSource(44226U);
    msg.setSourceEntity(100U);
    msg.setDestination(14224U);
    msg.setDestinationEntity(0U);
    msg.value = 0.4666905414386193;

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
    msg.setTimeStamp(0.4356226931343111);
    msg.setSource(25460U);
    msg.setSourceEntity(29U);
    msg.setDestination(34099U);
    msg.setDestinationEntity(152U);
    msg.value = 0.7158127473539113;

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
    msg.setTimeStamp(0.49355339921058505);
    msg.setSource(3807U);
    msg.setSourceEntity(87U);
    msg.setDestination(63149U);
    msg.setDestinationEntity(27U);
    msg.value = 0.9948325743346754;

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
    msg.setTimeStamp(0.32651158095250254);
    msg.setSource(43915U);
    msg.setSourceEntity(207U);
    msg.setDestination(14220U);
    msg.setDestinationEntity(37U);
    msg.value = 0.6499770932424057;

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
    msg.setTimeStamp(0.46022629745869503);
    msg.setSource(30167U);
    msg.setSourceEntity(166U);
    msg.setDestination(14176U);
    msg.setDestinationEntity(147U);
    msg.value = 0.9320474960073235;

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
    msg.setTimeStamp(0.9098149363410212);
    msg.setSource(56629U);
    msg.setSourceEntity(219U);
    msg.setDestination(14295U);
    msg.setDestinationEntity(130U);
    msg.value = 0.5776633405988851;

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
    msg.setTimeStamp(0.8016481040064677);
    msg.setSource(30281U);
    msg.setSourceEntity(253U);
    msg.setDestination(36192U);
    msg.setDestinationEntity(228U);
    msg.value = 0.23926337549835242;

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
    msg.setTimeStamp(0.977976400156774);
    msg.setSource(37798U);
    msg.setSourceEntity(53U);
    msg.setDestination(58143U);
    msg.setDestinationEntity(76U);
    msg.value = 0.46803578371928367;

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
    msg.setTimeStamp(0.05515866548467829);
    msg.setSource(37792U);
    msg.setSourceEntity(78U);
    msg.setDestination(20831U);
    msg.setDestinationEntity(79U);
    msg.restriction = 22U;
    msg.reason.assign("KHGJXEPZXFKKLJSOWQDFIRBQELGTBFXOOPQFVCKNAHAERNVWQKVWMPRLITNJENAIYRXLOEU");

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
    msg.setTimeStamp(0.37758628211098855);
    msg.setSource(63503U);
    msg.setSourceEntity(92U);
    msg.setDestination(43288U);
    msg.setDestinationEntity(85U);
    msg.restriction = 40U;
    msg.reason.assign("FMDAKDKKSBKHNNTLOMXZHOLHJMWOEDCSGADZLVHTFIQ");

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
    msg.setTimeStamp(0.636805627327963);
    msg.setSource(3409U);
    msg.setSourceEntity(196U);
    msg.setDestination(27096U);
    msg.setDestinationEntity(232U);
    msg.restriction = 195U;
    msg.reason.assign("JSDYUNKLMEMCGZCBDLGABQQHUYODOBEINDECBXXXEIPOEYBENWKPRPEMYFKMIMTCCOCPYGHXGD");

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
