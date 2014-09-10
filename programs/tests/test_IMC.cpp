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
// IMC XML MD5: bc9d825ba1981fbb15950278b9fa89ba                            *
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
    msg.setTimeStamp(0.5292469807650044);
    msg.setSource(54381U);
    msg.setSourceEntity(1U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(131U);
    msg.state = 222U;
    msg.flags = 116U;
    msg.description.assign("CDQYMNBIWKPZDFXUJXPWDDVVQIDLTNHJFMXQKICRZREBMIBGMHZGOORAIHTGXGQATPLKUJDGZXTLDPEUBQLNTCJZGIAEFPFYHANZDQJHZSMLUMNMRKCPWBAWCKUVXXIILQFRWNHVGVUOFJSTLRVLGUOFMEPXZQUYSLZYBOLFERSOHBHEOCNSTEI");

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
    msg.setTimeStamp(0.743537504260296);
    msg.setSource(44144U);
    msg.setSourceEntity(57U);
    msg.setDestination(36676U);
    msg.setDestinationEntity(56U);
    msg.state = 171U;
    msg.flags = 199U;
    msg.description.assign("IXIYNIPZDFAWQPRFRUNITMWHQYKNMNWBJPCHUOUXYRULECDSNQTOJQAYHGAWAGSGIVJQOWPDYXXHULQTOPANBRXOKFBMGKVCEODJEDXTPVJLZFTBNKZUDKKVESMJOKIYIAYEMTPSDBKFMSRCZZOARBHHOHCMZGHGUU");

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
    msg.setTimeStamp(0.9715675140211252);
    msg.setSource(27712U);
    msg.setSourceEntity(15U);
    msg.setDestination(65347U);
    msg.setDestinationEntity(242U);
    msg.state = 144U;
    msg.flags = 58U;
    msg.description.assign("OMXBNVWHBONAQTYISLVYPHMPJYXLNSFKTCQZLFDZYCIONMPKUMSBSQBJDTHMZDLXFRLKGPWFTUEQIHCARJEJLSEZATBKTMNWPTIFJAGYVQAFOBDGTVAKXDYVUWHNOHRGHOHAVXJPNDQNUSSZPBEIAEJYCERJFEYROHDZDJRFGVOLFVXZR");

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
    msg.setTimeStamp(0.6742644265653678);
    msg.setSource(34810U);
    msg.setSourceEntity(194U);
    msg.setDestination(43365U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.14746710912884065);
    msg.setSource(2474U);
    msg.setSourceEntity(152U);
    msg.setDestination(50894U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.4215379313394324);
    msg.setSource(60U);
    msg.setSourceEntity(39U);
    msg.setDestination(43885U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.3380830258648181);
    msg.setSource(64857U);
    msg.setSourceEntity(99U);
    msg.setDestination(51228U);
    msg.setDestinationEntity(173U);
    msg.id = 191U;
    msg.label.assign("AYXQUTRZPKEKXQZHKMDWRAEOCKTCAJSMMLWCCOAUFREWJXMPQGEJGQQZZIDSMMRWSKTVQVNIKTBYYLSCFFJPDWZZTUWVYRQAIOCWGOOSBTUJLPJHQAPSBLHGJTHENAOXPGKFPEGZBRHIYOZCYJSNNZXDDEOMHIZNUAUCJRJTYBHGYILXQNNANMSMNBVCYLEFDBACVGVRYUBWXVOFLIFIHMVBB");
    msg.component.assign("UYTXKEVVKTFEIZZFFDYOBHZETPEZKLONHZXLEJGFDXGMCXCFJUYBSIKZAVZUJMROGPQANEBILVHWRCUSGFPBGSONUWCMIGKXJFENRVFBJRNNPQKHFOYYTSBQIJLZVQLWSWKBSTOGDOUJJIKGJGWBMLRTQYUEXKHXMLDDMYBCWVWITAXPJHMAWVLONRAIPSQZNNSNDWCXUSQPDAUTCHTDILAYRZXGR");
    msg.act_time = 32851U;
    msg.deact_time = 44583U;

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
    msg.setTimeStamp(0.03072179521981);
    msg.setSource(36675U);
    msg.setSourceEntity(132U);
    msg.setDestination(52183U);
    msg.setDestinationEntity(165U);
    msg.id = 65U;
    msg.label.assign("CFIYKXJNKFLWTJZIZHRAZMSGUOPJPRQMUMFORZDWGTYBGAYMB");
    msg.component.assign("TEQDNPVOJWNGTXS");
    msg.act_time = 28859U;
    msg.deact_time = 56598U;

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
    msg.setTimeStamp(0.9185175557336954);
    msg.setSource(55821U);
    msg.setSourceEntity(192U);
    msg.setDestination(47321U);
    msg.setDestinationEntity(218U);
    msg.id = 33U;
    msg.label.assign("XGBHBJSYNEIHGKBPZZJCIJZPOXSHVRWKHRASZITDDKVMTGKCNVBFEGDXZNIMPW");
    msg.component.assign("SZKVBNZFEXISMAQVFGHWDMNOJHKNKQOEHPRZJOCPIKXVAUJIIWWVICICOSFL");
    msg.act_time = 53007U;
    msg.deact_time = 60254U;

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
    msg.setTimeStamp(0.9071036783495481);
    msg.setSource(32805U);
    msg.setSourceEntity(215U);
    msg.setDestination(51558U);
    msg.setDestinationEntity(218U);
    msg.id = 219U;

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
    msg.setTimeStamp(0.28253676403791084);
    msg.setSource(32745U);
    msg.setSourceEntity(185U);
    msg.setDestination(24232U);
    msg.setDestinationEntity(43U);
    msg.id = 197U;

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
    msg.setTimeStamp(0.7804328233217506);
    msg.setSource(65225U);
    msg.setSourceEntity(105U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(163U);
    msg.id = 249U;

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
    msg.setTimeStamp(0.020301741800835216);
    msg.setSource(64560U);
    msg.setSourceEntity(85U);
    msg.setDestination(27179U);
    msg.setDestinationEntity(176U);
    msg.op = 34U;
    msg.list.assign("MWEQLAWUUKEIIDTNGSOAUPBWUCTNIHUSSFUX");

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
    msg.setTimeStamp(0.2018173770548375);
    msg.setSource(46855U);
    msg.setSourceEntity(220U);
    msg.setDestination(31303U);
    msg.setDestinationEntity(4U);
    msg.op = 232U;
    msg.list.assign("BDYLKHXBSQQBGZOAJOAIONTOADIGUCHCXMRNIDOHYRUBGSYIGPOQVAPDSZFENGCEOMNOXGRLWXUWKDHLVTADHX");

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
    msg.setTimeStamp(0.3514616776568419);
    msg.setSource(14950U);
    msg.setSourceEntity(165U);
    msg.setDestination(30805U);
    msg.setDestinationEntity(95U);
    msg.op = 196U;
    msg.list.assign("AETTNHHNZGPGLUGFTLIIKURBNSXOZJBGVESJQLSQTABTFDUTRBBZPMKAPQJSNSYWRECAJAHPPVHNQEHRNHHZOUGYOCWPASCUYPEZKZXFOSGANCCKMQGZIVDOYRYMFYOPDQBYVZELWPSXKRIJIQXMOSLDVROBXZJCWHCUVKWLLMVEIECQIRNQCSTIAYMAXORFEKUFBZLTTWCKMHDTLVMNHIQJMPFOUUDWJGKRFDDD");

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
    msg.setTimeStamp(0.5067792145178719);
    msg.setSource(3767U);
    msg.setSourceEntity(158U);
    msg.setDestination(20111U);
    msg.setDestinationEntity(223U);
    msg.value = 27U;

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
    msg.setTimeStamp(0.05339095324390997);
    msg.setSource(1665U);
    msg.setSourceEntity(186U);
    msg.setDestination(59815U);
    msg.setDestinationEntity(50U);
    msg.value = 212U;

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
    msg.setTimeStamp(0.8272352677253216);
    msg.setSource(56675U);
    msg.setSourceEntity(249U);
    msg.setDestination(24701U);
    msg.setDestinationEntity(48U);
    msg.value = 103U;

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
    msg.setTimeStamp(0.24420573440101034);
    msg.setSource(52559U);
    msg.setSourceEntity(170U);
    msg.setDestination(29524U);
    msg.setDestinationEntity(186U);
    msg.consumer.assign("MYUPPOQSQRFBMBRELJIUZCWBQNJVALWPZCCGBCWLKSLHWZHROQRKADHAZFGGTMKZWTARRNMTAPOEMNKOYXCJZQYCDVYBSMNNIUEHCZPORIYTXVLGXTVKLUEVDELMWFJGCHXDJKKZZUURZANDYFDVNCPYTHDIIJGDJSXFLXBORB");
    msg.message_id = 25777U;

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
    msg.setTimeStamp(0.733471667838305);
    msg.setSource(40579U);
    msg.setSourceEntity(172U);
    msg.setDestination(21191U);
    msg.setDestinationEntity(152U);
    msg.consumer.assign("RYSHCLLJGXQZPGOOJCAQXGJIAKOZOVEBMQMFRQZJHZFAARVYFUQDFYBDQVASTHTTIVERLNMZKBVWBUJCMOQEPVUNPAQKBFGGHHTWMLYDIIRWIFCLKWVANUELEOTSVYIGSGCRXGYESUDXUTEKYRNUZTMOJZEPBVKRKDNCFZICBPWEJKLLHGHXNOAFZWDUADYNXHJCYW");
    msg.message_id = 59807U;

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
    msg.setTimeStamp(0.17606722364637362);
    msg.setSource(29139U);
    msg.setSourceEntity(59U);
    msg.setDestination(59022U);
    msg.setDestinationEntity(138U);
    msg.consumer.assign("BPWMZIBMTXCTPRNPZWKGBVUSSQGLFLZQJFEGX");
    msg.message_id = 520U;

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
    msg.setTimeStamp(0.6240552732263356);
    msg.setSource(15217U);
    msg.setSourceEntity(15U);
    msg.setDestination(40821U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.19602582940621482);
    msg.setSource(32710U);
    msg.setSourceEntity(53U);
    msg.setDestination(9651U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.8748988285552984);
    msg.setSource(18917U);
    msg.setSourceEntity(63U);
    msg.setDestination(39197U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.5657713362095041);
    msg.setSource(32695U);
    msg.setSourceEntity(252U);
    msg.setDestination(1854U);
    msg.setDestinationEntity(132U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.21381373262759396);
    msg.setSource(61194U);
    msg.setSourceEntity(66U);
    msg.setDestination(26106U);
    msg.setDestinationEntity(175U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.6422449148298753);
    msg.setSource(14611U);
    msg.setSourceEntity(210U);
    msg.setDestination(39861U);
    msg.setDestinationEntity(138U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.4897442821218546);
    msg.setSource(51855U);
    msg.setSourceEntity(164U);
    msg.setDestination(27438U);
    msg.setDestinationEntity(162U);
    msg.total_steps = 157U;
    msg.step_number = 230U;
    msg.step.assign("GEACNXFVBHSWMRXMJJRTSUNNDUGNILKZNBHQFSTLIZREXTCDYYEWCTOLZEHLQADTFMFUMIXVYQVOAWASTLGQBOMYAXBPFPKJKGDEKGTMWGUSNIJHCRQIOWANAGPDGJYZXOUCXNZLQVCFZWVQRAPZIOYYFBHTGCVRMRRZFZOFVXCVJQQXBDS");
    msg.flags = 33U;

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
    msg.setTimeStamp(0.23486583057594212);
    msg.setSource(21804U);
    msg.setSourceEntity(91U);
    msg.setDestination(40298U);
    msg.setDestinationEntity(50U);
    msg.total_steps = 116U;
    msg.step_number = 178U;
    msg.step.assign("WJKDTQKNHMHBEQMARYSXSDXHGFUWSGMMSZAVPLKYXMYHDSVZWCWHBVOTPRPMCJFPCYJGPORHIXSAVLXHEGLQUQELMJTJVCWUSBYOBTFYZUZVODRGATDDLQHACMRCINBTLKFIOXIKYNCRCNODBHOPKEMQYOIWSGCXARIWG");
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
    msg.setTimeStamp(0.13502012509879113);
    msg.setSource(45310U);
    msg.setSourceEntity(182U);
    msg.setDestination(51048U);
    msg.setDestinationEntity(130U);
    msg.total_steps = 175U;
    msg.step_number = 235U;
    msg.step.assign("EFTCEDAJQQLYXVRPYWYIQMSYUGNEUFWLEVYSMCXTKDPIITGMFJOYBTWREARSVWCNHHWNWZPZNXCHSLNJLGKVOMEDIJFWSRZKUBMIJJCYUSXICDYURKHDUZABATLGKHDXAUDWZJFVOTNACHHMXEBRCGITLOKXAANPDZOQMTPIMYVZSBJCNFQJQGGAFPGLGORCSBUDFKFZZJUWAIDHMERSZBOVRBOBERIHQTPXTGHQBLLNKKQLFPVPUPVMONW");
    msg.flags = 135U;

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
    msg.setTimeStamp(0.6070729038767353);
    msg.setSource(50982U);
    msg.setSourceEntity(213U);
    msg.setDestination(46135U);
    msg.setDestinationEntity(25U);
    msg.state = 88U;
    msg.error.assign("UBTZOSNUKEQKYMLTENLHBSMZRRTMXAHLVJPTRZYFGAAPLMHEXDAVKYNVMCAUVOEWQBCSCZWQFQPRFBA");

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
    msg.setTimeStamp(0.5085812742147121);
    msg.setSource(1927U);
    msg.setSourceEntity(146U);
    msg.setDestination(38910U);
    msg.setDestinationEntity(87U);
    msg.state = 157U;
    msg.error.assign("MOBNLAFYQKFUOMOKDRGSBXXJUQBZBMIHVZPRFYNNPQADRIKFCZPOASKPIQPLEBREGRNUJGWAZQINFEPWJZXQLUSEJLUTGMXWCJHDZIDJKDTBWABNJWSLCWNHEAUHYSMYKRIVHFYC");

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
    msg.setTimeStamp(0.7302258456737545);
    msg.setSource(61095U);
    msg.setSourceEntity(64U);
    msg.setDestination(6831U);
    msg.setDestinationEntity(63U);
    msg.state = 134U;
    msg.error.assign("PBZPZCLHNVPPNYKSTKACYJRWZHYLCNQKXNTGHVKNXUCQKOQAEAARBQDAZJBOLZSFXXWGQPIRWPUOGHGIDIXFUBNTSFORJ");

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
    msg.setTimeStamp(0.16950336508020014);
    msg.setSource(38686U);
    msg.setSourceEntity(233U);
    msg.setDestination(8112U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.45697723344750274);
    msg.setSource(28399U);
    msg.setSourceEntity(89U);
    msg.setDestination(13398U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.541405402237607);
    msg.setSource(54224U);
    msg.setSourceEntity(250U);
    msg.setDestination(14819U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.7519258133476253);
    msg.setSource(34847U);
    msg.setSourceEntity(83U);
    msg.setDestination(5967U);
    msg.setDestinationEntity(38U);
    msg.op = 244U;
    msg.speed_min = 0.2457888928463119;
    msg.speed_max = 0.5413623612627448;
    msg.long_accel = 0.20536344081337332;
    msg.alt_max_msl = 0.03941663762435765;
    msg.dive_fraction_max = 0.9818846513625739;
    msg.climb_fraction_max = 0.9696285988998651;
    msg.bank_max = 0.7426387386325795;
    msg.p_max = 0.8452302774336315;
    msg.pitch_min = 0.5906243618334827;
    msg.pitch_max = 0.988476394661862;
    msg.q_max = 0.951707351855492;
    msg.g_min = 0.273743949477413;
    msg.g_max = 0.5530930248686992;
    msg.g_lat_max = 0.6223795429128866;
    msg.rpm_min = 0.8790264246030716;
    msg.rpm_max = 0.28409463620942277;
    msg.rpm_rate_max = 0.10907205334863834;

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
    msg.setTimeStamp(0.6044817466374454);
    msg.setSource(38921U);
    msg.setSourceEntity(97U);
    msg.setDestination(49198U);
    msg.setDestinationEntity(52U);
    msg.op = 73U;
    msg.speed_min = 0.45691321226066506;
    msg.speed_max = 0.9293085342105485;
    msg.long_accel = 0.19683372221883222;
    msg.alt_max_msl = 0.12217590120518484;
    msg.dive_fraction_max = 0.8748985547752136;
    msg.climb_fraction_max = 0.39874706269490545;
    msg.bank_max = 0.6358489670202395;
    msg.p_max = 0.6086382937292845;
    msg.pitch_min = 0.9240162715727711;
    msg.pitch_max = 0.8556579524346215;
    msg.q_max = 0.6593800888195729;
    msg.g_min = 0.4779318218649875;
    msg.g_max = 0.16115782613749297;
    msg.g_lat_max = 0.17576669093262764;
    msg.rpm_min = 0.5547902705039287;
    msg.rpm_max = 0.738175390730488;
    msg.rpm_rate_max = 0.3833685773862494;

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
    msg.setTimeStamp(0.9445458891380938);
    msg.setSource(56892U);
    msg.setSourceEntity(221U);
    msg.setDestination(61035U);
    msg.setDestinationEntity(182U);
    msg.op = 70U;
    msg.speed_min = 0.3043733671022396;
    msg.speed_max = 0.09708693623496611;
    msg.long_accel = 0.8056699918835608;
    msg.alt_max_msl = 0.13996430389680015;
    msg.dive_fraction_max = 0.0877482643132883;
    msg.climb_fraction_max = 0.04097502183616286;
    msg.bank_max = 0.09369908763566104;
    msg.p_max = 0.9861511486108004;
    msg.pitch_min = 0.9019002369254913;
    msg.pitch_max = 0.5582794585798171;
    msg.q_max = 0.20422787222653815;
    msg.g_min = 0.5288319127669869;
    msg.g_max = 0.12849706227953817;
    msg.g_lat_max = 0.30483182786603724;
    msg.rpm_min = 0.7310489015346889;
    msg.rpm_max = 0.271024780849199;
    msg.rpm_rate_max = 0.6902161794137617;

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
    msg.setTimeStamp(0.019031709419293996);
    msg.setSource(27093U);
    msg.setSourceEntity(60U);
    msg.setDestination(20U);
    msg.setDestinationEntity(1U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.16014589532704193;
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
    msg.setTimeStamp(0.3998802608750992);
    msg.setSource(42693U);
    msg.setSourceEntity(59U);
    msg.setDestination(33179U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.939060427955495);
    msg.setSource(43226U);
    msg.setSourceEntity(155U);
    msg.setDestination(24940U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.9283231182397803);
    msg.setSource(13644U);
    msg.setSourceEntity(247U);
    msg.setDestination(61023U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.29159490597457793;
    msg.lon = 0.08056953238813347;
    msg.height = 0.3259542084086833;
    msg.x = 0.47154117978971155;
    msg.y = 0.7324437882020898;
    msg.z = 0.18095237913280227;
    msg.phi = 0.10791190093364134;
    msg.theta = 0.09200162854691352;
    msg.psi = 0.8513955912309941;
    msg.u = 0.6982448170780948;
    msg.v = 0.4170327870666585;
    msg.w = 0.6434850307660491;
    msg.p = 0.022170845676768636;
    msg.q = 0.973262684341534;
    msg.r = 0.5729014660449603;
    msg.svx = 0.33632311180926744;
    msg.svy = 0.5005984946357119;
    msg.svz = 0.7176144098518363;

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
    msg.setTimeStamp(0.13870458858111323);
    msg.setSource(38764U);
    msg.setSourceEntity(126U);
    msg.setDestination(16840U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.02962876785302304;
    msg.lon = 0.01982354619778648;
    msg.height = 0.2244784413509101;
    msg.x = 0.9610114082945151;
    msg.y = 0.9074265656615886;
    msg.z = 0.770431371025943;
    msg.phi = 0.8998647257114355;
    msg.theta = 0.8507436353179518;
    msg.psi = 0.9921437645132061;
    msg.u = 0.35753964706262753;
    msg.v = 0.5752992620576668;
    msg.w = 0.7395575410770954;
    msg.p = 0.27391977572245574;
    msg.q = 0.11945867721878345;
    msg.r = 0.714494522605834;
    msg.svx = 0.6807757694406418;
    msg.svy = 0.5775579452586872;
    msg.svz = 0.21836930333116167;

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
    msg.setTimeStamp(0.8411321989302204);
    msg.setSource(28790U);
    msg.setSourceEntity(189U);
    msg.setDestination(64743U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.5835942873159253;
    msg.lon = 0.7406574988741854;
    msg.height = 0.7622093221981584;
    msg.x = 0.7252427017966309;
    msg.y = 0.44715795370691624;
    msg.z = 0.9038129335305024;
    msg.phi = 0.6464341660413954;
    msg.theta = 0.3385003579919429;
    msg.psi = 0.004885316941187434;
    msg.u = 0.31292707320254076;
    msg.v = 0.09970718744123597;
    msg.w = 0.730021724742639;
    msg.p = 0.030079134280897812;
    msg.q = 0.7414577694349369;
    msg.r = 0.13569447044831162;
    msg.svx = 0.7659396535053262;
    msg.svy = 0.6268582380921176;
    msg.svz = 0.6736246700221004;

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
    msg.setTimeStamp(0.8796440560539991);
    msg.setSource(32067U);
    msg.setSourceEntity(41U);
    msg.setDestination(60156U);
    msg.setDestinationEntity(219U);
    msg.op = 135U;
    msg.entities.assign("FXKPMGTJNKDESWZIIRYHYOKZPURVHLFBOGDLJYWHHXNDFURFNTLITSIUPYPBRCZUSHYYLFMAKGQQDEHUKGO");

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
    msg.setTimeStamp(0.09199151548826856);
    msg.setSource(431U);
    msg.setSourceEntity(51U);
    msg.setDestination(55969U);
    msg.setDestinationEntity(213U);
    msg.op = 89U;
    msg.entities.assign("EHNALLTAPGQYFCIZLKHOXCDUJROEKDFUPMWDVPFREZYSYXEQJSGPBDIVVJTYSNQFQWLXXKMZVKWMJTCZYWGGMNNFUFWISLQIJHMQXFGCJYVJAHHEABCEQTAAXMGGCJRKKUOANICTDKORXSBBRPVSXIKITVLMSXTSNUQBUZNTSWWZMONUOCNOG");

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
    msg.setTimeStamp(0.9104368154990901);
    msg.setSource(51416U);
    msg.setSourceEntity(200U);
    msg.setDestination(43045U);
    msg.setDestinationEntity(232U);
    msg.op = 132U;
    msg.entities.assign("GDPOSZMBEFVIHNYPOEUVXNHEBBUZMIOLGIDIVREWZMEFXAHVPGDQYVDLPIBFJGKNESMAEHJGOUSPJOYYDFNAZTBIUKRWXEQTTQCVMJEIYTWMTZLNZKLZRXWFCJUOAFFOAEJDJAGDRUYPWBADSDQCSGCKYBWCTXQUKRIXHBTNLMXQCZJBNPLOOZDCSPLUKKLTQUXQHTKFV");

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
    msg.setTimeStamp(0.09344594024669639);
    msg.setSource(61760U);
    msg.setSourceEntity(88U);
    msg.setDestination(57452U);
    msg.setDestinationEntity(24U);
    msg.type = 203U;
    msg.speed = 54185U;
    const char tmp_msg_0[] = {-29, 11, 122, 74, 87, -49, 45, -59, 100, -56, 47, -10, -80, -25, -114, 108, -28, 125, -68, -124, 21, 78, 70, 96, 49, -75, -100, -8, -41, 56, -81, -122, -30, -82, -101, 37, -92, 64, -79, -24, -59, 101, -96, -44, 125, 123, -97, 72, -89, -89, -33, 85, -81, 82, 124, -78, 77, 34, -13, -53, -5, 39, 92, -100, 64, -116, 70, -31, -4, 118, -112, 78, 73, -109, -22, -111, -29, 11, 111, 78, 110, 91, 89, 9, -89, 29, 49, -28, -80, 41, -52, -97, -50, -47, -40, 68, 90, 76, -92, 67, -85, -7, -107, 99, -96, -60, 7, -84, 56, 68, 5, -104, -20, -44, -36, 116, 43, -45, 1, 96, 70, -50, -108, 6, 112, 2, 37, -20, -24, 39, 117, -48, -18, 24, -40, 85, 114, -37, -29, -63, -33, -125, 21, -52, -101, -56, -93, -42, -68, 5, 86, -26, -7, -93, 23, -62, 105, -89, -110, -115, 11, 99, 3, -111, -89, -17, -94, 71, -73, 106, 5, 101, 70, 77, -74, -126, -109, -29, 36, 59, -46, 55, -77, -103, 102, -120, -69, 30, 48, -66, 4, -55, -35, 35, 6, -80, 121, -11, -87, 124, -3, -69, -44, 84, 9, 18, -3, -95, -17, 113, 80, 31, 1, 35, 39, 84, -46, -57, -110, -7, -25, -81, -53, 4, -5, 119, -48, 15, -44, -57, 45, 16, 110, -79, -100, -108};
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
    msg.setTimeStamp(0.28793577183045294);
    msg.setSource(41261U);
    msg.setSourceEntity(210U);
    msg.setDestination(21324U);
    msg.setDestinationEntity(174U);
    msg.type = 110U;
    msg.speed = 731U;
    const char tmp_msg_0[] = {15, -84, 15, -57, 92, -49, -89, 85, 5, 94, 48, 28, 32, 49, 7, 105, 77, -87, 120, 58, 55, 116, -42, -60, -38, 109, 113, -112, -10, 79, 52, 124, 15, 4, -6, 122, 6, 105, -110, -61, -19, 6, 47, 25, 26, 95, 112, 11, -22, 100, -89, -91, 77, 20, 9, 25, -49, -79, -66, 125, -127, 32, 88, -96, 16, -106, -12, -38, -38, -45, 37, -38, -123, 110, 28, 121, 25, -106, 27, -12, -6, -7, 5, 64, 61, -29, 63, 79, 65, 105, -42, 124, 61, -103, 72, -31, -38, 60, 36, -85, 94, 96, 114, 95, 89, 108, 66, 89, 87, -115, 23, -86, -24, 116, -34, -24, 51, 26, -47, 113, 121, -24, 55, -66, 58, -7, 69};
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
    msg.setTimeStamp(0.847528577908577);
    msg.setSource(9120U);
    msg.setSourceEntity(50U);
    msg.setDestination(27495U);
    msg.setDestinationEntity(161U);
    msg.type = 181U;
    msg.speed = 34052U;
    const char tmp_msg_0[] = {-48, 124, -65, 32, -90, -55, -113, -9, 98, -84, 64, 89, -73, 5, -49, 101, 7, -54, -68, 94, -60, -108, 35, 110, 73, 91, 23, 17, -114, -37, 38, 93, -64, 116, 54, -82, 88, 96, -71, 51, -101, 103, -81, 21, -118, -121, 74, 49, -94, -37, 126, -25, -120, 89, -30, -24, -88, 17, 59, -55, 53, 19, 8, 52, 125, 121, -61, -33, 41, -85, 6, -15, -38, 23, 13, -23, -37, -43, 89, 10, 77, 35, -12, -127, 83, -40, 110, -63, 3, 10, -55, -112, 11, -66, -35, -37, -109, -14, 41, 24, 47, 13, 32, -34, -32, 38, 120, 46, -78, 21, 56, -98, -17, 58, -104, -81, 102, -64, -112, 31, -54, -123, 25, 59, -112, -66, 84, -110, 84, 22, 48, 110, 61, 21, 104, 89, 20, 88, -39, 105, -38, 111, 59, -75, -125, -85, 101, -5, -71};
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
    msg.setTimeStamp(0.211785445907948);
    msg.setSource(11664U);
    msg.setSourceEntity(169U);
    msg.setDestination(33826U);
    msg.setDestinationEntity(18U);
    msg.op = 108U;
    msg.tas2acc_pgain = 0.9925639684473727;
    msg.bank2p_pgain = 0.7181472195187448;

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
    msg.setTimeStamp(0.9770765932085924);
    msg.setSource(31164U);
    msg.setSourceEntity(238U);
    msg.setDestination(46976U);
    msg.setDestinationEntity(158U);
    msg.op = 179U;
    msg.tas2acc_pgain = 0.012738108382492896;
    msg.bank2p_pgain = 0.44343713811907925;

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
    msg.setTimeStamp(0.819732868166256);
    msg.setSource(8664U);
    msg.setSourceEntity(136U);
    msg.setDestination(37934U);
    msg.setDestinationEntity(25U);
    msg.op = 153U;
    msg.tas2acc_pgain = 0.057316211487272395;
    msg.bank2p_pgain = 0.8741968782867693;

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
    msg.setTimeStamp(0.39128820852650403);
    msg.setSource(29764U);
    msg.setSourceEntity(185U);
    msg.setDestination(32204U);
    msg.setDestinationEntity(96U);
    msg.available = 3367604559U;
    msg.value = 197U;

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
    msg.setTimeStamp(0.48693225531957784);
    msg.setSource(53121U);
    msg.setSourceEntity(102U);
    msg.setDestination(11015U);
    msg.setDestinationEntity(191U);
    msg.available = 3271120982U;
    msg.value = 37U;

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
    msg.setTimeStamp(0.8577297700306189);
    msg.setSource(37160U);
    msg.setSourceEntity(200U);
    msg.setDestination(34473U);
    msg.setDestinationEntity(46U);
    msg.available = 2321868918U;
    msg.value = 121U;

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
    msg.setTimeStamp(0.08475187310212051);
    msg.setSource(60649U);
    msg.setSourceEntity(165U);
    msg.setDestination(10337U);
    msg.setDestinationEntity(118U);
    msg.op = 106U;
    msg.snapshot.assign("GPLGRZELCHFFAUNJQWSHCJKMJXSPBSFQTHDDWTWLMFAITYQLDURPYQAWJJLOTXGRPVXDOLMCTVZOHILAWKKZHBAABFGVKQVVOZUMEQQMFYWOZDEDIGJZJQVDPZUCBPRXQZFROSNSBITPFHNKPEDYCBNYEBSNZUWVNUGNYSRHAACWQGWYWOJTKDBCXVVRFOEUXICKHSPCGEYKEORISHJNXN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VSLQFWLXFFDNEEZOTGYMTYTHQTEXCRLBCUGGCEEMPDJJSR");
    tmp_msg_0.value.assign("XULOAGCTTYPIPNVXDGLRCAZDSIYEUCMZTHCJLZAFMVSELPDSJMDGKCXWRGWTRMONEWQHKBAUOEBJQUHDHXINWOQYXJHLPOPYIDTMBHAFNZKUAHBNFLZZBMFZKQXRRLTVEQLKLNPBDPKWSBWFFDGBFXGQCOFKSZUVMVITPSCDYDCTWSQAUJBYAJEGZFOGNIULPUECYGVIHMAVURWN");
    tmp_msg_0.type = 64U;
    tmp_msg_0.access = 14U;
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
    msg.setTimeStamp(0.28512701053596357);
    msg.setSource(25245U);
    msg.setSourceEntity(206U);
    msg.setDestination(15942U);
    msg.setDestinationEntity(79U);
    msg.op = 42U;
    msg.snapshot.assign("MFGANSFEFTBXWUKBCNGGOMUAZRHZONLGYBELJVQWDHICGWZSRYXMLWTRUJHBNYIGFRMEVXDFEBWGTQINMKSPVKYFLKCIACKWNOWTRBWSKERMWLAAXIOZOTVPYDOSUQJDXZOQPYHYGMWJRHYTLV");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 239U;
    tmp_msg_0.file.assign("ZCPHXSYNYIKERGDTGKDNYSQFHGDTMOIIAWYLZXDPESTUQMAIPXJPDVPEFEJPZIOBRCJUWXLNZHFTBVABFXUNIKWTWZQGYCTMJMAMJUOSVOCKEZKTPK");
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
    msg.setTimeStamp(0.0968588364477152);
    msg.setSource(28836U);
    msg.setSourceEntity(102U);
    msg.setDestination(56739U);
    msg.setDestinationEntity(88U);
    msg.op = 227U;
    msg.snapshot.assign("EIUCAWHJBYQYUMSVXKZIEMFGKGBZPFACIONOMQRWKLTXEYYFTKENXUUQHRDMJYUIGFVANPVKPT");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 225U;
    tmp_msg_0.speed = 54038U;
    const char tmp_tmp_msg_0_0[] = {-6, 5, -107, -101, -19, -101, 98, -44, 72, 56, 63, 107, -77, -8, -29, -95, -67, -114, 12, 101, -116, -109, 48, -91, -128, 87, -101, -49, 59, -85, -90, 55, 123, 1, 68, -96, -66, 81, 67, 94, -75, -67, -72, -60, 96, 50, -69, 56, -43, -39, 114, -3, 71, -64, -42, -41, -49, 66, 36, 71, 104, -52, -95, 43, -122, 79, 106, -9, -115, -48, 65, -34, 89, 43, -25, -81, -59, -15, 114, -16, -12, -82, -63, -31, 110, 105, -112, 37, -110, 18, 66, 24, 90, 72, -53, 121, 89, 63, 23, 125, 3, -97, 78, 122, 88, -27, -9, -105, -118, 117, 117, -98, 60, -120, 7, 51, -49, 6, 98, -122, -70, 88, 90, 54, -1, 39, -2, -85, -74, -24, 84, -32, 5, 6, 29, -75, -58, -11, -37, 114, -1, 28, -119, -14, 104, 64, 10, -106, -99, 122, -98, -64, 12, -93, -56};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.18901203765966246);
    msg.setSource(3566U);
    msg.setSourceEntity(244U);
    msg.setDestination(21265U);
    msg.setDestinationEntity(27U);
    msg.op = 130U;
    msg.name.assign("LJVWONRMRBBAVLAJWUJWZPXMWMTIGMQRAKYSRHLXGRHDHXTHVUNBFZEIYYHBPNTMQKQMXGFAVEAKRZNLPCGGDEUWELBSKJXRVFFDISMCUISFVUIDVFICWLHJLNOJDTWQFJOEAHDPUNBYXPEOSTVCICANXP");

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
    msg.setTimeStamp(0.19885493070421845);
    msg.setSource(19815U);
    msg.setSourceEntity(64U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(127U);
    msg.op = 226U;
    msg.name.assign("YNNHRTYREIVQLIKMLGHGKTXEUXOHOFOUAKSFNVJYAEHEJHGYVORPZZFIKKTOJSQQYJAULYZGKPYYISXILAVVSRHWVQMZWXTBXLULRTMQCIFTUGVCCKQWLOMWMUMGIUSHVZMPDEGCKDBVAYJEWXZNRXDODFZDXKBTCBFIVQQBHSMPKNANEQMOSFEDULCCBXHTGSWJPIDNRJCZHWAEPGGLPOMNDFWEQOCDNJBXBBBTPICUA");

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
    msg.setTimeStamp(0.06150931953016969);
    msg.setSource(14681U);
    msg.setSourceEntity(109U);
    msg.setDestination(34768U);
    msg.setDestinationEntity(240U);
    msg.op = 153U;
    msg.name.assign("UITLJDJMVOCXEB");

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
    msg.setTimeStamp(0.6369362434447653);
    msg.setSource(1691U);
    msg.setSourceEntity(33U);
    msg.setDestination(3119U);
    msg.setDestinationEntity(101U);
    msg.type = 253U;
    msg.htime = 0.5209628700927325;
    msg.context.assign("BFBMJDWZHCMGXDYRHNOIEAVOZAPBXYJGABYGSY");
    msg.text.assign("ZJEXPQVJYTIBWXGYWLNRGOHVUTAMOSIJNDONRATFSVDUTUWIEZYFJWSAQHPY");

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
    msg.setTimeStamp(0.0762814312221668);
    msg.setSource(8576U);
    msg.setSourceEntity(1U);
    msg.setDestination(52968U);
    msg.setDestinationEntity(16U);
    msg.type = 174U;
    msg.htime = 0.07421823947817596;
    msg.context.assign("ZGLOCQGXDZOJMKYJIXQRAMSCGBXCKIFUOPITYCBQVZDEDULHAWBUIRLSGJLSJWXKBZYINFVMBSDEPEVXYUTQSUCBRKYNBHJLOUTIXIFFVCPQHPLWRDNVREHYNNTEFRFJOCDDRZIMSJNXUPMQMVGNIHSITJBFZVOLNWYTXEHHWYFYKEGAKPSABQAGDOKARXEGSAMMTRVHVFZZOLJDZJHTNXAKUWGLWDOPMTGCFP");
    msg.text.assign("PWOWGGTDPUZNL");

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
    msg.setTimeStamp(0.07331580311130981);
    msg.setSource(25784U);
    msg.setSourceEntity(39U);
    msg.setDestination(4260U);
    msg.setDestinationEntity(68U);
    msg.type = 106U;
    msg.htime = 0.06237926208929523;
    msg.context.assign("OVQQTCIKUGFBXOFQHNPKDXLFLRUHKLMNREITZMHUVYGAXLETFJPKG");
    msg.text.assign("CPGBTDFEVYLSNULPGGAIPXJUIYCRBLZRHLFEDNKQOIORAQKVTWYLGNPWMHECSZVKBYYMXMHSUJVNUEZTDCIXTQWJRGZABTHADVNACWMKFQIHDKUOBWOEOFWQIVNBJNPLXXQKXDEXFAMTDFLIJRM");

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
    msg.setTimeStamp(0.9175897285955991);
    msg.setSource(6611U);
    msg.setSourceEntity(219U);
    msg.setDestination(52232U);
    msg.setDestinationEntity(195U);
    msg.command = 157U;
    msg.htime = 0.8327392769557285;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 112U;
    tmp_msg_0.htime = 0.19405785246571816;
    tmp_msg_0.context.assign("YHKOZYYFNIEQVVXORLOQHPSNDAQJVUTNMEBXUUGHQRENXRRCDRLXUZCJGMAFYWKUAX");
    tmp_msg_0.text.assign("PRIJCRQBZQRLNKOKJWLQULEPKHVAATCOBDUHMTN");
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
    msg.setTimeStamp(0.934660075439378);
    msg.setSource(52532U);
    msg.setSourceEntity(236U);
    msg.setDestination(3429U);
    msg.setDestinationEntity(177U);
    msg.command = 225U;
    msg.htime = 0.6119609554281662;

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
    msg.setTimeStamp(0.9558532531253151);
    msg.setSource(62890U);
    msg.setSourceEntity(22U);
    msg.setDestination(22615U);
    msg.setDestinationEntity(27U);
    msg.command = 87U;
    msg.htime = 0.3045711676913212;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 254U;
    tmp_msg_0.htime = 0.10341620345168467;
    tmp_msg_0.context.assign("AAQNAORTGIZKFNSWPMKEJIRSUMKAOPAIZVLRDATTKLYMPUCHYCMOELYLTDWEE");
    tmp_msg_0.text.assign("MHHZUYMPWYOWPLVVKYOLXMGLKNPAWRTJNQRBRRHGSQAZGWXEHYZSIQSKHJDBBOBAWFCVTBRVGNARHMKFAXSDXAQZKPANEKBNJSDDUKMFYVPETGSUEDZLBVXVTZJMFJZXIQLSMNTWQRMICIAHLYPCKDKUXFDBQZFWOUMTCPNQLAUIEJO");
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
    msg.setTimeStamp(0.3799678709749892);
    msg.setSource(51067U);
    msg.setSourceEntity(231U);
    msg.setDestination(16426U);
    msg.setDestinationEntity(224U);
    msg.op = 225U;
    msg.file.assign("XOSUBJXGLESKWOFRQIQPIGZCNRYECREMPXBIFXJCUSNMKFWHFDSIQRECNOGRAPCZJAWMPPMTUKBTIDXVFLHJLKACMERSQUCISUAJNZGBGLOMWDKTKKEGVDWYNZDMAYOHUHQLKCWMNSVLOSTAQKOTLZBGYRNBBTY");

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
    msg.setTimeStamp(0.9010732219222799);
    msg.setSource(63744U);
    msg.setSourceEntity(204U);
    msg.setDestination(50200U);
    msg.setDestinationEntity(222U);
    msg.op = 47U;
    msg.file.assign("KFWBPQWXZJHHWRZEJMTIIDQRBADEHEYHMAYLLXNYUBRNFVSUUIOPVDKMTBCBAYKCXKXKUAYBNSRPZOWJVYXQE");

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
    msg.setTimeStamp(0.7041299982475608);
    msg.setSource(23040U);
    msg.setSourceEntity(26U);
    msg.setDestination(22461U);
    msg.setDestinationEntity(167U);
    msg.op = 126U;
    msg.file.assign("UPQKJZQVBUZKFWMLRJIHJLISFLXFBEIXYBYAMETZSRNCVHZPWHALZVIGRVEGFTNLVHLKGJYTYCAACWDCZODDNGQWNUEYKKUWOTDJWFSCESG");

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
    msg.setTimeStamp(0.2929036117912718);
    msg.setSource(45335U);
    msg.setSourceEntity(10U);
    msg.setDestination(25959U);
    msg.setDestinationEntity(150U);
    msg.op = 149U;
    msg.clock = 0.6128186167635253;
    msg.tz = 49;

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
    msg.setTimeStamp(0.7593523777395066);
    msg.setSource(32397U);
    msg.setSourceEntity(49U);
    msg.setDestination(31508U);
    msg.setDestinationEntity(45U);
    msg.op = 85U;
    msg.clock = 0.7568374424391768;
    msg.tz = 61;

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
    msg.setTimeStamp(0.1880636222986325);
    msg.setSource(2774U);
    msg.setSourceEntity(25U);
    msg.setDestination(63993U);
    msg.setDestinationEntity(53U);
    msg.op = 24U;
    msg.clock = 0.5665652704026071;
    msg.tz = 60;

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
    msg.setTimeStamp(0.05808322723261494);
    msg.setSource(35396U);
    msg.setSourceEntity(181U);
    msg.setDestination(42827U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.8646707883982274);
    msg.setSource(27730U);
    msg.setSourceEntity(206U);
    msg.setDestination(22057U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.2567514199637022);
    msg.setSource(63114U);
    msg.setSourceEntity(9U);
    msg.setDestination(29019U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.23963694482122);
    msg.setSource(47564U);
    msg.setSourceEntity(211U);
    msg.setDestination(22042U);
    msg.setDestinationEntity(138U);
    msg.sys_name.assign("DGCJECXKSFAFUVOEANVCQASAFRVBBDOQFBOXPLKJRZBWJDAM");
    msg.sys_type = 206U;
    msg.owner = 7033U;
    msg.lat = 0.9120881018414343;
    msg.lon = 0.2148675700550835;
    msg.height = 0.214804770440838;
    msg.services.assign("VBSZMVYKYGSIXCHPZXPMHOTDBID");

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
    msg.setTimeStamp(0.049526352864330714);
    msg.setSource(6555U);
    msg.setSourceEntity(1U);
    msg.setDestination(35418U);
    msg.setDestinationEntity(217U);
    msg.sys_name.assign("RSJNBLLYORLAOPDZWIIEYYQOEJWTUPKCLRVXCYVYKPXCKHJZFDEZNLVUGOGWWHJBGEMDSJUNKSDEECOYRDBNVIXUATMXNHIAVEUAZHBRXVZCQDAHXIZHCTQFXNGSTCVVVDGCMQTIOWF");
    msg.sys_type = 242U;
    msg.owner = 17972U;
    msg.lat = 0.5641367514089296;
    msg.lon = 0.5548781817668871;
    msg.height = 0.7181239015856085;
    msg.services.assign("JFEWYHHEIGZLLGNKFSNWMTWLNMTCAKXYGEACYBBUVTQYAOBP");

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
    msg.setTimeStamp(0.37859066186009394);
    msg.setSource(25542U);
    msg.setSourceEntity(231U);
    msg.setDestination(9105U);
    msg.setDestinationEntity(35U);
    msg.sys_name.assign("XLXYTBJRYKNHHDTCOGFQURNXFSPSVHQJORLTGGNGMXITCCGQALDQLPYEKXWYAWNREVNQZVOEOMSFOSNIHIPCRLHKQEXTBVYUAZWRVDMXUYVUJMAJTBLTRBWDBZDFENSMZAKASIVGFMKCCZWVJGHTWHZTFIPHBSQSMENJOZOQCFDCBAWPJNAGWQVIWKLZJXYUMQHRIFEXGPSPAZGNFROIOLAPBWUCVOUMEYBEKMXLUHJP");
    msg.sys_type = 250U;
    msg.owner = 16056U;
    msg.lat = 0.25398220499271407;
    msg.lon = 0.6075492928085535;
    msg.height = 0.5613659061206251;
    msg.services.assign("UZOMLFBPCVZDVZCXVSWBGOCQFZQRJKTYJIIGWDCXVFMPPKPCZIQRK");

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
    msg.setTimeStamp(0.807713679943331);
    msg.setSource(19434U);
    msg.setSourceEntity(112U);
    msg.setDestination(4205U);
    msg.setDestinationEntity(162U);
    msg.service.assign("RILKSZGCKQYGPAAW");
    msg.service_type = 94U;

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
    msg.setTimeStamp(0.051099942085243266);
    msg.setSource(59098U);
    msg.setSourceEntity(201U);
    msg.setDestination(47233U);
    msg.setDestinationEntity(236U);
    msg.service.assign("NACOTWMIDWRHUPEUJJERMMBLFKGOXLAKDAYBGAQWJRJOVXFMBHAUQUFNTZVDKEPSQHRKYVPTZMKPAVVOIBMDMNLWTTOLDHSNUCIYRHCPUVQBCRZZCKLMHWGEFFTDCIOGEKKVPNARIMPYYYSWJXOLNFPIXQXGDZOLDZLGWASEUPBYTGPECQOJHSIUEXYHCHWZZZNJZANSSYBLIKVTFNFFEJTBKSXQGQT");
    msg.service_type = 28U;

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
    msg.setTimeStamp(0.4178798189548857);
    msg.setSource(28606U);
    msg.setSourceEntity(64U);
    msg.setDestination(9552U);
    msg.setDestinationEntity(93U);
    msg.service.assign("XWAXFWHQOMMLWPJUPPLRSHEWINNVGKIPGYSYKULXZCRFULMKDEWUNIMTLRQCGBVNCJTESKWDIIKSZQFEDZSGEZYCAAULATZRTPZGDTTMWRRPSYXYKZBUUXBPDYLDEFAJGPYSKXAHJYQRVGEZHCQTIHOTOHNQWEFQONKJBCHGINPVBVGBJLXYOHMXMDJROVGTBCIUKIQBNYANRRDVFHMHSUOZLZMOB");
    msg.service_type = 74U;

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
    msg.setTimeStamp(0.8673722839393201);
    msg.setSource(62446U);
    msg.setSourceEntity(209U);
    msg.setDestination(6322U);
    msg.setDestinationEntity(245U);
    msg.value = 0.9732935653754237;

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
    msg.setTimeStamp(0.9336881384694021);
    msg.setSource(60327U);
    msg.setSourceEntity(135U);
    msg.setDestination(59433U);
    msg.setDestinationEntity(218U);
    msg.value = 0.3965465852779877;

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
    msg.setTimeStamp(0.14472034444268211);
    msg.setSource(9502U);
    msg.setSourceEntity(102U);
    msg.setDestination(28407U);
    msg.setDestinationEntity(190U);
    msg.value = 0.8288101610225705;

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
    msg.setTimeStamp(0.7917293020604161);
    msg.setSource(15010U);
    msg.setSourceEntity(162U);
    msg.setDestination(38930U);
    msg.setDestinationEntity(193U);
    msg.value = 0.9712867374065854;

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
    msg.setTimeStamp(0.7659842962582054);
    msg.setSource(41534U);
    msg.setSourceEntity(119U);
    msg.setDestination(9896U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8316734305801333;

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
    msg.setTimeStamp(0.19695993613989593);
    msg.setSource(25094U);
    msg.setSourceEntity(3U);
    msg.setDestination(5503U);
    msg.setDestinationEntity(173U);
    msg.value = 0.5203440947597396;

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
    msg.setTimeStamp(0.06604378519661114);
    msg.setSource(7099U);
    msg.setSourceEntity(187U);
    msg.setDestination(40575U);
    msg.setDestinationEntity(248U);
    msg.value = 0.5300657702783006;

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
    msg.setTimeStamp(0.5152563546963284);
    msg.setSource(22754U);
    msg.setSourceEntity(172U);
    msg.setDestination(8726U);
    msg.setDestinationEntity(242U);
    msg.value = 0.7658121249670992;

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
    msg.setTimeStamp(0.06925454761078431);
    msg.setSource(56018U);
    msg.setSourceEntity(24U);
    msg.setDestination(25454U);
    msg.setDestinationEntity(199U);
    msg.value = 0.6141057131169515;

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
    msg.setTimeStamp(0.7393413306804811);
    msg.setSource(60900U);
    msg.setSourceEntity(21U);
    msg.setDestination(2383U);
    msg.setDestinationEntity(103U);
    msg.number.assign("YGLZFFRRUXKHCWXPRCFBOKSDAKONEYIUJMHGLSZHLUXQQHVJXUQECNPHWASNMJTLKOMUPOVRHPDSYDCKVTPYZUUETDQZJRMXLWCINTEFVALIMGC");
    msg.timeout = 45904U;
    msg.contents.assign("WCHJRFKBNWSCRGIPNTJBMOWMOQACHURXFQQDBYOJGPFZSHFUIYPKZNPEBXLWFNWCHWGBHSNTRYSQPNAJUOXHMKHSISDXOINYHQCZLHUEIKAJLGKCVQGIZDYOZEDPCAMRUMGLKVKUAPELTRPUNRZTTZPVDXBLOYLAJILMEPZYFCEXRBAIUDMADMFVCZBNDOEJQTROKUSEEQDXGYJXIWMTQBCWGHFOL");

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
    msg.setTimeStamp(0.7068744237385284);
    msg.setSource(13806U);
    msg.setSourceEntity(9U);
    msg.setDestination(37465U);
    msg.setDestinationEntity(233U);
    msg.number.assign("TEQFIFOUAPLHIZIKCOJTNEEJLUJEMMSFYMITIKETAGWAOMYUOLNCGBCGMNYC");
    msg.timeout = 29245U;
    msg.contents.assign("WXGERTONQGKOTXNWIASJTMFQWWTKI");

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
    msg.setTimeStamp(0.11311114061342653);
    msg.setSource(9098U);
    msg.setSourceEntity(207U);
    msg.setDestination(10541U);
    msg.setDestinationEntity(182U);
    msg.number.assign("ICGPSYVCOMKKBOZGUSAHQHUVLLRGUTESEXMAYODUQJUNUCCAFPJJITTCYNHQNSOXFJMFZXIMKXFMJDPAZKMTBAVSBPKUW");
    msg.timeout = 32531U;
    msg.contents.assign("OYRBRVMZASGJOMUTDTFVCOPPBSJLKUVGMHEXZGPXAKBCSLJFDQZPOGPDGSRFLHRJGWIHHWNUJESQDTTTLHNAZNNQBKJKOQYBVOKPIIDMHCGHOWVMLWEYNMYXXURYUFUENDIPNLEPWXDIWBZQOEVYCTYVQBHMKKANUURFRMSXFJWEYGVTCXJSKZDHIMIWPELSXUBIMFCEKBARHWXGKGSFTOVCN");

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
    msg.setTimeStamp(0.6293411098582302);
    msg.setSource(29638U);
    msg.setSourceEntity(32U);
    msg.setDestination(26799U);
    msg.setDestinationEntity(102U);
    msg.seq = 1231826889U;
    msg.destination.assign("QQQSGIJHVWZJRSRYYUICBWBDWBIQPJPLAKYLMWRLKOWNALOOCVGNDJRPVSUPMEUTDIFMICRCXZFMROABIXQQQUYODVAUPKKEGPEYGTCZMGQKCFRPTFRBAXOHJAGKIZTJFEHXSAQKDMQELEFHPELYOCNWVJBHNVZNZFV");
    msg.timeout = 55707U;
    const char tmp_msg_0[] = {89, -77, 20, -56, -95, 101, -22, 98, -59, 45, 27, -124, 34, -1, -74, -82, -74, -12, -25, 10, 102, 25, 34, 120, 74, -87, -39, 68, -67, 56, 66, -63, 23, 114, 48, 81, 124, -92, 48, -20, 72, -120, 91, -105, -41, -84, 32, -52, 107, 10, 21, -90, -98, -90, 27, -19, 31, -43, -52, 93, -96, -123, 75, 72, 88, -109, 11, 90, 32, -41, -79, 126, -26, 32, 27, 55, -40, -61, -39, 61, -90, -109, -118, -37, -114, 14, 28, 103, 33, 7, 96};
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
    msg.setTimeStamp(0.7210516153772045);
    msg.setSource(1149U);
    msg.setSourceEntity(205U);
    msg.setDestination(62989U);
    msg.setDestinationEntity(80U);
    msg.seq = 3793848765U;
    msg.destination.assign("CGVJSPYBAKEZHQRNFLUYTMYYWXXZESSCNARULNOPNBQZKYRWHKOADDURXKIQZKPEGHTUBIXNLLNRYCKVKJXDNEFFJZGXFKAG");
    msg.timeout = 11798U;
    const char tmp_msg_0[] = {-65, 44, -94, 75, 35, -33, -68, 1, 64, -32, -76, 97, -11, 17, -85, -54, 57, -103, -54, -14, -57, -72, -60, 35, -79, -100, 58, 28, -118, -20, -38, 87, -10, 123, -20, 40, 11, 47, -43, -29, 26, 61, -126, 83, -35, -7, -17, -103, -9, 96, -92, 105, -72, 116, -32, -100, -103, 123, -6, -128, 105, 76, -76, -98, 93, 53, -87, 113, 124, -85, 112, 26, 30, -53, 41, 108, 111, -31, 97, 72, -58, -112, -23, 19, 104, -127, 33, 126, 126, -105, 121, -2, -7, 122, -23, -43, -100, -100, -38, -81, 1, -26, 3, 35, -105, -52, 43, 14, -128, -80, 102, 29, 24, -79, 80, 33, -62, -78, -99, -123, 19, 114, 55, 112, -83, -51, -98, -49, -35, -75, -53, -52, 67, -21, -27, 9, 42, 99, 35, -106, 28, 41, 119, 34, 37, 54, -12, -111, 80, -108, -21, 89, -19, 59, 56, 30, -6, -108, -44, -74, -62, -35, 37, -80, -104, 58, 19, -17, -76, 3, 81, -49, -65, 114, 97, 26, 60, -82, 21, 82, 22, 48, -106, -116, -72, 110, 17, 109, -105, -39, -49, 87, -93, 48, -108, -118, 6, -68, -17, -15, 47, 87, -96, 107, -126, 29, 103, -121, 5, -1, -126, 105, -56, 115, 74, -10, -66, -43, 53, 86, -63};
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
    msg.setTimeStamp(0.41550385956363156);
    msg.setSource(23845U);
    msg.setSourceEntity(195U);
    msg.setDestination(51708U);
    msg.setDestinationEntity(156U);
    msg.seq = 1925051262U;
    msg.destination.assign("HKVQHPAKRAOTYUIDVETKOGMABQEJGCVUKQJOZNGIYA");
    msg.timeout = 61076U;
    const char tmp_msg_0[] = {54, 124, 36, 12, 24, -55, 116, 117, 6, 26, -66, 116, -22, -38, -53, -1, -120, 125, 34, -34, -64, -64, 49, 76, 30, -120, -100, -83, -6, 31, 88, -51, -15, 75, -112, -82, -86, -3, -5, -19, 84, -77, -52, -122, 104, -74, 70, 100, -71, -102, 82, -75, 81, 26, -126, -60, -72, 4, 66, -126, 71, 109, 56, -41, -18, -57, 48, -42, -32, 0, 66, -105, 51, 30, 36, -2, -87, -71, 101, -100, -83, 108, -126, 11, -87, 20, 97, -128, 64, 43, 108, 23, 69, 0, -5, -51, 10, 99, -118, 92, -10, 63, 21, 59, -50, -32, -59, -116, -126, -3, 85, -75, 52, -11, -23, 10, -51, 122, -41, 77, 32, 8, 71, 6, -60, 32, 21, -127, 79, 52, -27, 116, -3, 101, -95, 84, -78, -31, -56, -7, 40, -12, -33, 93, -87, -20, 60, -112, 94, 84, -50, -14, -36, 90, -24, 69, 86, -7, 109, -25, -60, -46, -125, -99, -17, -104, -103, -63, -81, 3, -10, -50, 109, 126, -3, 17, -3, -70, -118, 27, -14, 61, 17, -28, -39, 112, 49, 13, -64, 22, 63, 33, -68, -64, 1, -50, -87, 49, 123, 45, -81, -92, 102, -21, -12, -79, 32, 105, 118, -27, 53, -60, -72, -5, 53, 64, -66, 47, -16, 48, -77, 81, -67, 123, -85, -125, -127, 27, -42, -36};
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
    msg.setTimeStamp(0.026340890401968853);
    msg.setSource(15692U);
    msg.setSourceEntity(250U);
    msg.setDestination(7089U);
    msg.setDestinationEntity(88U);
    msg.source.assign("HRSPUMISCOUHNNVMZDKWAGUFWCFCXCQASEYDYFBJTXLNHNYGEFJWAOAALRFLEJXTRCOKESTXJHQJPLQWQIRRQGEVOHRQGIMUSKRQXHADLLWUZFOSUMNPTQGXWWWBJBHQLOKTKOXJPPXJVRVGCPZSDMIYEMYIBHBPAITQ");
    const char tmp_msg_0[] = {-111, 45, -53, -51, 64, 6, -63, 114, 65, 121, -25, -68, 117, -104, 27, -57, -69, 77, 54, 123, 101, 78, -6, 124, 55, -16, 26, 84, 47, -70, -121, -66, 74, 101, -37, -37, 95, 50, 45, -97, 23, 45, -4, 46, -122, -120, 19, -112, 57, 21, -96, -82, -15, -38, -78, 68, 24, 71, 22, 97, -124, -115, -49, -57, 81, -31, 84, -3, -124, 73, -28, 104, 105, 67, -32, 98, 68, -88, -93, -88, -112, 108, -63, 124, -46, -102, 0, -95, 56, -15, -119, -14, -64, -25, -57, -1, -34, 8, 86, 47, -33, 31, -59, -118, 22, -93, -18, 85, -16, 105, 14, 55, 9, -106, 119, 106, 9, -10, 82, 11, 109, -126, 119, 103, 47, 105, 110, 96, 0, -75, -22, -109, 123, 49, -28, 16, -66, 83, 126, -14, -46, 125, 66, 120, 51, 91, -43, 57, 79, -54, -48, 18, -98, 63, 85, -60, 104, -42, 118, -66, 62, 72, 9, -36, 94, -125, -12, 88, -87, -19, -74, 106, 95, 16, 124, -44, -111, -23, 42, -45, 0, -38, -9, 1, -15, 49, 0, 36, 44, -106, 79, -68, -119, -76};
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
    msg.setTimeStamp(0.2604214742052595);
    msg.setSource(35470U);
    msg.setSourceEntity(181U);
    msg.setDestination(50255U);
    msg.setDestinationEntity(9U);
    msg.source.assign("RYFVONQMWUZSAMXFVGHTRINBFOJTZHTSLNWQDETICJNMYSHQIYUXPZVSBFRIFLCECJRYRBEBURRVGNQCLFXXMLGKDSEPNKJMPLVAVSCXMRGMKT");
    const char tmp_msg_0[] = {3, -105, -125, 52, -124, -27, 62, -95, 74, 117, 118, -99, -44, -105, -92, 50, 15, -19, -18, -28, -119, -35, 53, 56, 27, -117, -78, 23, 2, 46, -69, 29, -54, 2, -95, 50, -102, 36, -96, 1, -125, -13, -120, 78, -118, -50, -112, -50, 114, -41, -5, 24, 56, -86, 87, -47, 58, 93, 95, 84, -127, -90, -46, -22, -27, 109, -101, -125, -78, -58, -112, 97, -70, 74, 66, 96, 76, 47, 76, 70, 96, 21, 107, 77, 96, 101, -46, 37, 49, -105, -1, 106, -10, 31, 94, 27, -99, -68, 59, 19, -63, 60, -83, 12, 2, 100, 2, 70, 5, -40, 73, -35, -116, 60, -49, 121};
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
    msg.setTimeStamp(0.9547149536804179);
    msg.setSource(24809U);
    msg.setSourceEntity(50U);
    msg.setDestination(40748U);
    msg.setDestinationEntity(51U);
    msg.source.assign("CKHMNJEZKUAGCTFXZAOQOAUCJTKHLVFQLZHNROFADXNCQPEVVGGHMFHQWGJDUBBGSGYCVVXQDCTOCHZYWSURFYYEZQIEXFVEALBWHZAHRDXPPAXGCQPREMSTIMIIWM");
    const char tmp_msg_0[] = {-13, -120, -110, 110, -21, -90, 54, 106, 16, -112, 71, -79, 54, 16, 79, 48, -43, 125, -68, -38, -83, -37, 12, -125, 107, -51, -90, 88, 89, 10, -88, 16, -106, -74, 33, -65, 23, 121, 90, -59, -38, -74, 123, 94, -118, -6, 17, 54, 83, 83, 32, -106, -41, -125, 27, -18, -68, 13, 82, 119, -66, -69, -53, -30, 13, -5, -121, 68, -38, -104, -38, -48, 89, 97, -88, -2, -64, 91, -15, -115, 28, -88, 12, 6, -76, -92, 108, -49, 104, -120, 8, -16, -90, 48, 56, -64, -55, -7, 10, -116, 22, 45, 100, -41, 16, -128, 73, 98, -115, 38, 75, -124, -5, 91, 126, 27, 68, 50, 48, -113, 121, 120, -36, -86, 98, 55, -50, 12, -46, 109, 99, -40, -27, 37, -69, -112, -92, -98, 45, 35, 115, 3, -15, 72, -7, 93, -124, 123, 85, -38, 79, -25, -124, 99, 62, 11, 58, 120, -51, -99, -77, 38, -25, -28, -71, -53, -128, 4, -86, -20, 115, -82, -128, 26, -14, 24, -64, 49, -71, -48, 49, -118, -35, -104, -87, 5, 8, 121, 103, 60, -85, 31, -116, 32, 29, -121, 62, -128, 123, -45, 41, -121, 105, 112, -49, -58, -70, 55, -20};
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
    msg.setTimeStamp(0.6142792924400404);
    msg.setSource(32553U);
    msg.setSourceEntity(168U);
    msg.setDestination(42809U);
    msg.setDestinationEntity(238U);
    msg.seq = 3214570205U;
    msg.state = 143U;
    msg.error.assign("YKTZDNVEWJNFYJUIZEDNPVIMWKELYLESAPHOUIZCPOAHGFZDXVKDGNJXXZMUFWBXJLRCRBAMXXEOKLBARTJFYOGZNVUPMZXKTUCNJGKBAPGSTHSYVBBQRSH");

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
    msg.setTimeStamp(0.746092776269479);
    msg.setSource(26182U);
    msg.setSourceEntity(47U);
    msg.setDestination(9687U);
    msg.setDestinationEntity(136U);
    msg.seq = 1443690369U;
    msg.state = 162U;
    msg.error.assign("LQWAJBTTSCDIEVGCSYYTGOPICMMCSFTSNCWUEJVEYHCEFAFSMBYWJWVLVBFF");

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
    msg.setTimeStamp(0.8770899884943354);
    msg.setSource(34053U);
    msg.setSourceEntity(9U);
    msg.setDestination(33642U);
    msg.setDestinationEntity(188U);
    msg.seq = 3796502564U;
    msg.state = 47U;
    msg.error.assign("ZPNOVBHORMSARDETWMGTGNXRJKDZHOKDUPFCJLBRMDWFEPBTGSHCESWQJIPJIWMQVCJRYFHKECTOVAZMAISQYRKRQIHVBVLCLZUJMQENECKQEUIHLFJGXALZLDHQPSGTSXIZBTGUOIJBXJWMPWSSYUOEVLOZGQZDWRHYTAFCNCKPXWQLCKBRCXFWDTSPAXNPUOBVL");

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
    msg.setTimeStamp(0.5978984338483171);
    msg.setSource(20523U);
    msg.setSourceEntity(254U);
    msg.setDestination(37392U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("RCJDYQPKFHKWDRGKHSMPXQXRNWDVICTFQAXSMDAGDVTXPTWLDNYSIFHGXWGJIEBXFOUHQCCIFUVALNZKARCTODFJZLJQHOLXYUFVAMAQXQE");
    msg.text.assign("MYPYHNFFBPVOYOLIANKIZCOSJVIHZJCYPXIHESDGTLRZDQLNQCCHWCMKKGVLPMXKNMWWENXXGAVMWIRGQJFMWTNDEXRUSOHABOKDZUJLHZDHRSQTSYXOMAKJHWZGEQVPEPEDOPTDVWXZUQCFECHGPCGIJGFXLHBTMACELIWYALCIJNYRSUSBUQTUFVFEBOKPKNQFFJQBIGFVRETX");

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
    msg.setTimeStamp(0.039764430879609014);
    msg.setSource(3911U);
    msg.setSourceEntity(94U);
    msg.setDestination(48538U);
    msg.setDestinationEntity(85U);
    msg.origin.assign("YHBYRQBISSMHXWUVGJWYEIEWMMFSWWOMNFXPJVNYUHCYEGOVLFTTNPRELYJULFNGAHXKKUTOXAVAUGPASDYNPRVCHEFTVSBZYGQCZKGIRBSFCPMLSQKTXMAUWEXXRECVPTXHERJCPANSOOZVJZVOPCIJI");
    msg.text.assign("IWERQUZFCHOCTPVCZZKZXBJEMVCTQHMQZLULLFSQDSCOAPXBVNKHASAAUMGFBXLKPORZELEMOOWXBMVRQVJNNTFGOEGXDUEADUWI");

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
    msg.setTimeStamp(0.14586956356091996);
    msg.setSource(1269U);
    msg.setSourceEntity(170U);
    msg.setDestination(47113U);
    msg.setDestinationEntity(102U);
    msg.origin.assign("MYNUDWBPDCNJMOHDRQNHETWUAVDUHFQXRDJSUONYYPWXRFJCLGNBPPVPZGQEXGLBSZCWZDVECPAURTIRHXIOZPQIQLKCGWLQHWDLJXBUFZSAMBATHMIQBCFIYAGOYRVDMCFIOESERBQVHQWOZOZALHC");
    msg.text.assign("ZIHVUNEIDGWKJITUFDLTQCYRRVAFIELLXTVMSRZHGMDPEBGLJJMEJVTXSOAAGSZRMV");

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
    msg.setTimeStamp(0.578635166879104);
    msg.setSource(63123U);
    msg.setSourceEntity(198U);
    msg.setDestination(43930U);
    msg.setDestinationEntity(174U);
    msg.origin.assign("PRXBQHASJQGQEBTZCKDGVDALDXIPEQVRJOKJNKNKCZALUPYGQEDFYHAORJAXRETUKSCQYRJBNKYSODOWFJOGXBVTUMJPZTBZVTYBUNYQYVABHXWKVMNITUELBQLXCNMPIGHZWHRGOPCJGMUWSAGBHEVDVRLEIIZKQXUJZWGIMNVNQJAOXCTMFZITCLEXWFFBWNLUOELWHARDNFVAPYFSHRUYGZDWPTSLKXHYULFRPTWEMZSMCKSOPFCS");
    msg.htime = 0.14667791214319503;
    msg.lat = 0.665460016791242;
    msg.lon = 0.11247896858584572;
    const char tmp_msg_0[] = {93, 68, -109, -91, 98, 13, 89, 114, 13, -35, -12, -67, 84, 27, -24, -98, 111, -91, -5, -74, -106, -103, 108, -71, -75, 114, 2, -115, -111, -120, -55, 106, 123, -120, 50, -70, -60, 116, -88, -15, -39, -29, -17, -116, -106, 69, 120, -114, 26, -111, 19, -40, 59, 68, 35, 67, -18, 52, -95, -96, -52, -48};
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
    msg.setTimeStamp(0.8213048097730646);
    msg.setSource(12968U);
    msg.setSourceEntity(198U);
    msg.setDestination(6544U);
    msg.setDestinationEntity(75U);
    msg.origin.assign("AWXUXWOUAZWZBTPWFVYIEIWX");
    msg.htime = 0.3690382138490208;
    msg.lat = 0.8645756490807462;
    msg.lon = 0.18844901766406597;
    const char tmp_msg_0[] = {-4, -15, 21, 35, -22, -113, 116, -34, -110, 82, -114, 121, 81, -105, 68, -75, -97, -64, 12, -77, -69, 69, 25, -21, -71, -10, 39, -77, -77, 68, -45, 66, -103, -57, 79, 74, -6, 66, 48, 125, 3, -10, -57, -47, -107, -71, 49, 44, -6, 13, 86, -101, 123, -94, 44, 11, 10, 105, -16, 56, -83, -30, 63, -40, -49, -73, 36, -95, -2, -93, 49, 121, 119, -100, 114, -20, 64, -105, -91, -25, 10, -39, 91, -114, 98, 41, 111, -31, 120, 112, -26, 21, 95, -27, 107, -53, -29, -128, -110, 10, -115, 8, -31, -28, -90, -7, -71, -72, -89, 43, 23, 47, 34, 84, 100, -34, 105, -128, -112, 87, 38, 81, 50, -87, 102, 96, -127, -26, 120, 62, -55, 69, 60, 112, -70, -119, 81, 118, 44, -122, -82, -39, -75, 71, -74, -108, -34, 104, -61, -20, -51, 71, -65, 9, -85, -17, -58, -20, -25, -25, 115, -50, -97, -30, -53, -89, -29, 29, 88, 19, 78, -81, -82, -59, 34, -44, -74, 55, 32, 11, -46, 69, -107, -99, -43, 94, -92, -32, -34, 110, -30, -46, 85, -125, 39, -118, -43, 117, 73, -43, 94, 105, -86, 108, 91, -100, 81, -33, 106, 57, -124, -104, -66, -103, -73, -4, 7, -28, 16};
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
    msg.setTimeStamp(0.5971881688921352);
    msg.setSource(3236U);
    msg.setSourceEntity(155U);
    msg.setDestination(24934U);
    msg.setDestinationEntity(60U);
    msg.origin.assign("GYZPREXQUUSZTDJNTVHRJTHCLLTSDBH");
    msg.htime = 0.7235178246038535;
    msg.lat = 0.18758620622891098;
    msg.lon = 0.858241412338721;
    const char tmp_msg_0[] = {-127, -81, 56, 112, 79, 80, -51, -116, -29, -118, -81, -121, -104, -4, 40, -68, 9, -63, -58, -41, -21, 27, -108, 91, -9, -50, 69, -61, 66, -48, -123, -119, -6, -3, 87, 50, -54, 75, 19, 11, -46, 55, -69, 115, 101, -85, 14, 122, 102, 75, 41, -89, -33, -76, 83, -124, -77, -18, 87, -25, 94, -126, -21, 63, -11, 6, 50, 88, 101, -103, 77, 33, 15, 0, 125, -22, -50, 87, -101, 113, -45, -41, -79, -49, -29, -25, 22, 102, 51, -4, 100, 86, 68, 65, -97, -4, 46, 46, 39, -49, -54, -114, 40, 101, -59, 55, -9, -82, -98, 33, 57, 120, -34, 79, 80, -57, -86, 51, -42, 90, -49, 21, -9, 22, 81, 90, 48, 95, 56, -117, -59, -1, 59, -51, 109, -106, -76, -49, -12, -9, -70, 111, -112, -63, -88, 110, 33, 52, -116, -12, 9, 28, -89, -19, 44, 104, -40, -35, 115, 4, -93, 29, -107, -114, 120, 58, -87, 76, -72, -15, 91, -98, -34, 125, 92, -116, -107, -98, 60, -93, 3, 56, -13, 106, 82, -28, 84, 119, 38, 106, 33, -35, -39, -10, 60, -87, -33, -54, 119, 62, -102, -122, -60, -41, 109, 115, -112, -57, 28, 71, -26, -34, 68, 22, 42, -116, 55, 81, 20, -8, -58, 102, -81, 119, 41, 11, -94, -35, -62, -67, -42, 33};
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
    msg.setTimeStamp(0.2948124762329186);
    msg.setSource(22582U);
    msg.setSourceEntity(23U);
    msg.setDestination(53021U);
    msg.setDestinationEntity(1U);
    msg.req_id = 4401U;
    msg.ttl = 54079U;
    msg.destination.assign("RINSXMDWSILWJXLGNFTTZMUJGYPYHMLLUVMXZFNWSNVJGTIEHMNCAFEDQKQPVTZRVFPURGBOAADUHEANHZGCDFOFVIPYXRLEQTBBKKSKMUMNPXSTAZLWZVXEVQQZQKOQYXVKEWBUGOKCYZRRACDHIWMIIYEDLCOFSASWCCELDPHRVYYGAWJXCEZHODQBFIYUHGKBPURDBTJGGT");
    const char tmp_msg_0[] = {105, 62, -38, -106, 68, -106, -16, 57, 118, -14, -73, -97, -49, 28, 111, -54, 1, 107, -30, 125, 111, -16, -44, 4, 41, -60, -43, 103, -40, 125, -73, 59, -86, -25, 77, -57, -111, 32, -108, 74, -92, 55, 86, -55, 108, 75, -73, 99, 58, -56, 111, -68, 39, 41, 91, -83, -77, 97, -6, -101, 60, -48, -126, -87, 115, -114, 29, -1, 75, -77, 30, 79, -44, 76, 14, 117, -118, -48, -69, -67, -54, -115, -54, -62, 113, -65, -29, -101, -78, -86, 115, -51, -79, 40, 39, -84, 97, 125, 84, -29, 9, -96, -78, -47, 117, -87, -80, 1, -18, 32, -66, -121, 14, 17, -3, 42, -99, 75, -32, 95};
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
    msg.setTimeStamp(0.05170475500914906);
    msg.setSource(17592U);
    msg.setSourceEntity(183U);
    msg.setDestination(20241U);
    msg.setDestinationEntity(134U);
    msg.req_id = 51722U;
    msg.ttl = 40974U;
    msg.destination.assign("GACSJNCOAYXYRXPWTUQAXRMFMKHBGXWWRNZLXJVTDYFLQCSZOGOVQPVUPZIQHEOADSMAZJPXKTFTXHEGCVLYMVEYMETUDXNNTRUQRMCGHEPLLJFYGNFWUZHOBWWEQERSTIWEKJSFNPZVLBJWSNIKUANTSOBBBGRYRXWCKBHAJHPKYDHJVIACHVNUYTDMINGAFSFFVLZDOKEBQHQJLUCQTODIDOMROA");
    const char tmp_msg_0[] = {31, -43, -23, 56, 56, -32, 69, -94, -24, 71, -10, -88, -92, 57, -96, 114, 3, -2, 6, -75, 74, -118, -83};
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
    msg.setTimeStamp(0.42288262816639044);
    msg.setSource(38724U);
    msg.setSourceEntity(206U);
    msg.setDestination(59427U);
    msg.setDestinationEntity(130U);
    msg.req_id = 39991U;
    msg.ttl = 42552U;
    msg.destination.assign("QAFDEBCRLV");
    const char tmp_msg_0[] = {-21, 37, -9, 4, -35, -38, 58, 63, 106, -74, -1, -16, 25, 15, -100, 52, -19, -118, 67, -25, -69, 46, -13, -61, -86, -47, -48, -46, -14, 108, 91, 37, -37, 54, -71, 69, -35, 94, 63, -74, 101, -45, 99, 125, -10, 71, -112, -32, -103, -124, 20, -57, 19, 118, -61, -108, -69, -4, -21, -56, 43, 46, -99, -97, -126, 119, 64, -34, -87, 116, -65, 43, -29, -79, -53, -121, 45, -56, -9, 26, 23};
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
    msg.setTimeStamp(0.8921271320768435);
    msg.setSource(23458U);
    msg.setSourceEntity(250U);
    msg.setDestination(39231U);
    msg.setDestinationEntity(26U);
    msg.req_id = 3486U;
    msg.status = 38U;
    msg.text.assign("RAYADHBHWHZGCDETBVLWXXSUUNBCOQJCVSCGEZIFTFBGVMNYAFJHFSVOANCPCRHMHVIJUXAOJRMPLITZNKKMIL");

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
    msg.setTimeStamp(0.06097239738661131);
    msg.setSource(34559U);
    msg.setSourceEntity(80U);
    msg.setDestination(27439U);
    msg.setDestinationEntity(99U);
    msg.req_id = 30255U;
    msg.status = 231U;
    msg.text.assign("SKKWNAOHZPBWAMANZEIBMDJSPKMUXLUTHWKHYMEWRUNTJCTHYOJKNLOYFDFYHQDCDXGKZQCKQHIKZSDFIZXVDVTALJNQOCSHJMERUSCNGRVBZTH");

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
    msg.setTimeStamp(0.9051407413323522);
    msg.setSource(8997U);
    msg.setSourceEntity(251U);
    msg.setDestination(13328U);
    msg.setDestinationEntity(232U);
    msg.req_id = 16170U;
    msg.status = 12U;
    msg.text.assign("QIXGOADTSMHBYEGAWJPSSIWLGRFEOESVBKMRACMHNLZQBMUJKIMDCAKZNYJQTFZIIOQXTDTJVADVHWGFAXPQHVUPJJIZNVUBUUYOQSXGSXUHBPFWFTEIECDXIW");

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
    msg.setTimeStamp(0.3272541432441042);
    msg.setSource(2430U);
    msg.setSourceEntity(68U);
    msg.setDestination(57429U);
    msg.setDestinationEntity(185U);
    msg.group_name.assign("BVEESRRKQWAVBJSUDXAQXUMWWVFH");
    msg.links = 3310670453U;

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
    msg.setTimeStamp(0.6739937774603688);
    msg.setSource(8602U);
    msg.setSourceEntity(142U);
    msg.setDestination(16714U);
    msg.setDestinationEntity(144U);
    msg.group_name.assign("KQIOJUAGFJPRFMHPLFIZTQUIDXGYLUBNTBMWTQMNAKXOXVMXCQGTHKTZMKQTFVUPAKQVHORVXOCYEUDEJJILESVHWHSLUFWCBGFQCPTYEEDUSTFPXFRYGBSNVROTTOESSIYWRWPAMNFRXJOKDJQUACACNYHYDKBGZBKNLSZKHACLCWAVPKEJLSEMA");
    msg.links = 3943648165U;

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
    msg.setTimeStamp(0.6098918405517281);
    msg.setSource(22476U);
    msg.setSourceEntity(29U);
    msg.setDestination(31483U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("RJQDLEIOACROTZVMMHBERRHBUN");
    msg.links = 3566030586U;

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
    msg.setTimeStamp(0.48574108106626923);
    msg.setSource(58008U);
    msg.setSourceEntity(239U);
    msg.setDestination(36307U);
    msg.setDestinationEntity(212U);
    msg.groupname.assign("ESYKFJDVHGYZPIQTRKBCKNTLPEZZMGJNEAWWQZQRAYGGRPTJNDRVLAKXOIPHXZSJIRVUNGKRHFPZAFDYQDUMXLDNKEMJUHFKBSYVQDBKXIHLXHGNSOYALYPOATMCQMUQTUUANRGXUOWOFJJFBDQCWTSHNAHETCNKGAVEISDDHQFWIECICVEVUVPZZUVTTLFBCGPDZKCCIMW");
    msg.action = 124U;
    msg.grouplist.assign("XCWMRZJEWSBNCONVTLHTAYTTLJGZSMHMKVIGPQUGJVKXZQCHYTKBQUEAFHRGXEPYBWRKHDXSBSKZKRF");

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
    msg.setTimeStamp(0.8249878039127149);
    msg.setSource(18406U);
    msg.setSourceEntity(203U);
    msg.setDestination(58279U);
    msg.setDestinationEntity(206U);
    msg.groupname.assign("LNKCIEGUCJSLAQUSDMBRMXBFPXHVKUJTKOTYKKLVYVXXTSVWTUSGWELVZRGNZFYRAWRGMHBZEHNZRRRSOCGOBLOFKMPOBENIDKJBCGEUKELZRIHTAZIUJUTIUPYJQENYNSTZPUJWILGXMDHQNQVDFAHXBZXNHMGVWPVRFCTWKNEJWSETOCDAOYEMTLVSXQF");
    msg.action = 119U;
    msg.grouplist.assign("GADNPCBIWCTUTUOLVKPYSDPYMQLMFJOKRLJBMMYBS");

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
    msg.setTimeStamp(0.16426642542193748);
    msg.setSource(11413U);
    msg.setSourceEntity(252U);
    msg.setDestination(9779U);
    msg.setDestinationEntity(35U);
    msg.groupname.assign("ZQHQNOQRIZRDFHPZATNMZQIVIFDITDZXJAJGNURSUCYJPCFVHLYXMYJNJKTVQZIOPDWBCJNCNDXTYZHQHZTNQYOSSUGOIOSHUWQBHYDLLBRR");
    msg.action = 116U;
    msg.grouplist.assign("HUHSNIFHIIHKUUMZODJNNFSRZTIUDXMJEUNSBVCXFWHTPRDRFDIOGVLNOSQNKARTVAUHXAGZROXBMLZAPQXBVTQYLKKYFWVDPNQGJHCWBECWAWFICJVPBPDMVOTZQQPUTXGKDPRDCQMBJRZYVLNMXOEGACK");

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
    msg.setTimeStamp(0.5275967207288613);
    msg.setSource(36144U);
    msg.setSourceEntity(171U);
    msg.setDestination(13454U);
    msg.setDestinationEntity(53U);
    msg.id = 48U;
    msg.range = 0.13896860179674675;

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
    msg.setTimeStamp(0.5123382006235109);
    msg.setSource(21451U);
    msg.setSourceEntity(13U);
    msg.setDestination(26322U);
    msg.setDestinationEntity(37U);
    msg.id = 229U;
    msg.range = 0.46463728947018823;

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
    msg.setTimeStamp(0.13080633403012276);
    msg.setSource(20024U);
    msg.setSourceEntity(165U);
    msg.setDestination(17542U);
    msg.setDestinationEntity(86U);
    msg.id = 24U;
    msg.range = 0.9672919659134764;

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
    msg.setTimeStamp(0.250625944753887);
    msg.setSource(6451U);
    msg.setSourceEntity(141U);
    msg.setDestination(13052U);
    msg.setDestinationEntity(151U);
    msg.beacon.assign("ZXBZEQRPPQCXDHBHZZFOPIMGQRRWWMBVLKPLWJZAQWFSUYJUHTQCCRDHVIWKZXFEQIYWDHHNKLRPEAKVKJTMV");
    msg.lat = 0.6268203282871281;
    msg.lon = 0.21872690379856807;
    msg.depth = 0.8634562003143272;
    msg.query_channel = 63U;
    msg.reply_channel = 171U;
    msg.transponder_delay = 29U;

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
    msg.setTimeStamp(0.2741312296736814);
    msg.setSource(32975U);
    msg.setSourceEntity(149U);
    msg.setDestination(1975U);
    msg.setDestinationEntity(33U);
    msg.beacon.assign("CZLOTXCTSEIZNMRGPHACCJVPBIZKLCQUGLQVISBZEBNYRTXIHYWRTBWZXDUPVQDAGNLRLXYCQHTDKIEFOWGSLNBJEMSTVQKXNWFTCPJDRDFDRIEUVAZCYDQJLSPLZFKGWTQNSGAURVXPD");
    msg.lat = 0.9582308068602949;
    msg.lon = 0.7721220975184693;
    msg.depth = 0.6977632318778458;
    msg.query_channel = 178U;
    msg.reply_channel = 28U;
    msg.transponder_delay = 248U;

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
    msg.setTimeStamp(0.1382563467318254);
    msg.setSource(11292U);
    msg.setSourceEntity(254U);
    msg.setDestination(13176U);
    msg.setDestinationEntity(141U);
    msg.beacon.assign("UFVQFQJUQRFNKXGRIRBNZPDMJTWLEBP");
    msg.lat = 0.1331001623905842;
    msg.lon = 0.8381643945780792;
    msg.depth = 0.5467826357249944;
    msg.query_channel = 30U;
    msg.reply_channel = 52U;
    msg.transponder_delay = 175U;

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
    msg.setTimeStamp(0.4261405537205004);
    msg.setSource(36163U);
    msg.setSourceEntity(183U);
    msg.setDestination(8378U);
    msg.setDestinationEntity(13U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.003339931987911715);
    msg.setSource(22412U);
    msg.setSourceEntity(206U);
    msg.setDestination(28983U);
    msg.setDestinationEntity(156U);
    msg.op = 24U;

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
    msg.setTimeStamp(0.9674696395515185);
    msg.setSource(40389U);
    msg.setSourceEntity(63U);
    msg.setDestination(39891U);
    msg.setDestinationEntity(14U);
    msg.op = 131U;

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
    msg.setTimeStamp(0.7832968134320876);
    msg.setSource(43165U);
    msg.setSourceEntity(27U);
    msg.setDestination(51490U);
    msg.setDestinationEntity(189U);
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 87U;
    tmp_msg_0.entities.assign("IVVKQMGSCNFTIUEDNOMDAPJWKRVYYQFZMUOGXDFIQDOLX");
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
    msg.setTimeStamp(0.8714829612146958);
    msg.setSource(57291U);
    msg.setSourceEntity(43U);
    msg.setDestination(31785U);
    msg.setDestinationEntity(153U);
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("XOJGMWHAXPQOSRCDDBIHSZVQWJBVYTTKJUFSEHUFUPTAKQFEAPZBYVPGMD");
    tmp_msg_0.value = 195U;
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
    msg.setTimeStamp(0.513163891074068);
    msg.setSource(23657U);
    msg.setSourceEntity(190U);
    msg.setDestination(59484U);
    msg.setDestinationEntity(99U);
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.9271311717561332;
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
    msg.setTimeStamp(0.5887260006677567);
    msg.setSource(50579U);
    msg.setSourceEntity(83U);
    msg.setDestination(24996U);
    msg.setDestinationEntity(65U);
    msg.op = 10U;
    msg.system.assign("FDWGIZQUYQNIGPQBBVTBLAJTZNYNSMFVRZQXMSEYODVSYTHWZEAIAEDDKJLSSECUCGEQFXULHHMKKZXIGOEGAVNEOUZCPGRJTVWOAZSMKEFITMHMACFGSRJKNDEZGSLMTLVJOUCIBPWK");
    msg.range = 0.3112138373380623;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.09797399350113278;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 22790U;
    tmp_msg_0.custom.assign("MWLMWXRAZNESWCXLCRMCSZVOLHTVNRIKAOUGWPZJKCXJRYHSJOWTFTOMUSXQXJDOLPQYLMAHLJAZEJCWNLGGOFVLBERETSHDIHHTEQUPPZNWVELBDUAMAQJ");
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
    msg.setTimeStamp(0.1631481840000204);
    msg.setSource(42728U);
    msg.setSourceEntity(65U);
    msg.setDestination(56532U);
    msg.setDestinationEntity(55U);
    msg.op = 19U;
    msg.system.assign("ZYNYPXWTUQOQBJLHECOPPOUIRRMPMWAZVQIGJTWEBXIHAEKKIEKXAOALHDYQMPGUJSJNHGYQYLLEMGDFZWCXXCUHLEDVJKJMCJHWAZPKXWXRUGISRXWXLMNFEOALQMGAUDSZCHABVABYKTKGSIOOKFVZQNZBZMIDPURGMYUCHNISNFEVTVSNPNTVFWCLQOSNVNGTDPFDRBLVWMTWRRSSOTEHFTEFICKJRH");
    msg.range = 0.39280237782876526;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 13544U;
    tmp_msg_0.lat = 0.9966281493007753;
    tmp_msg_0.lon = 0.33074673463072246;
    tmp_msg_0.z = 0.4094910292886337;
    tmp_msg_0.z_units = 26U;
    tmp_msg_0.speed = 0.9605882447973855;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.duration = 60442U;
    tmp_msg_0.radius = 0.5862065629865324;
    tmp_msg_0.flags = 118U;
    tmp_msg_0.custom.assign("XEAEZZKNFKDDKBNCMHWLKYMASOOGSBLVKFDITYWUPAPLHIFGKGHHASCZVJZWMRTXBSTCAPVCNWUPNVMFRSXKEVUYGETIIOOABXKSUCUFMELA");
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
    msg.setTimeStamp(0.9363875732869446);
    msg.setSource(11410U);
    msg.setSourceEntity(160U);
    msg.setDestination(28247U);
    msg.setDestinationEntity(247U);
    msg.op = 24U;
    msg.system.assign("FSHJMREIHYZPATBAMVGHEGCYCSEWIYTHMFLNWVUCLMXMIVTKRE");
    msg.range = 0.24395973846004393;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PXIUDWXERVIQLNQREAOXXLOXYXOZECFELHZUYPTUEBUDOTBGKRJXRYBSIJYGFNVDKZFQEQKCYZVQIAGCLNYZWNIMBOJFIKJJETHGQDSZFVDNNHFQYVRQCCWDFUWIMOAS");
    tmp_msg_0.feature_type = 2U;
    tmp_msg_0.rgb_red = 233U;
    tmp_msg_0.rgb_green = 140U;
    tmp_msg_0.rgb_blue = 155U;
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
    msg.setTimeStamp(0.3999677048438687);
    msg.setSource(32195U);
    msg.setSourceEntity(147U);
    msg.setDestination(44132U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.7820154101843566);
    msg.setSource(20550U);
    msg.setSourceEntity(36U);
    msg.setDestination(62220U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.9371742649914494);
    msg.setSource(31258U);
    msg.setSourceEntity(248U);
    msg.setDestination(4333U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.220599955885056);
    msg.setSource(24348U);
    msg.setSourceEntity(43U);
    msg.setDestination(52449U);
    msg.setDestinationEntity(2U);
    msg.list.assign("DJMUQHIFMLCYKUCDXGYXX");

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
    msg.setTimeStamp(0.5028042347006677);
    msg.setSource(33592U);
    msg.setSourceEntity(107U);
    msg.setDestination(10313U);
    msg.setDestinationEntity(206U);
    msg.list.assign("KGTZEFXAHEQKFNDXVSRLQADPBYSLOPAIEHVYYZOTUXASSKZMBPARWUWEMLGVYCWSJSUZRFWUBABPSZHTZXXCBZPYQFJCDYCXHBLXGUEKWDFLBZSNUVNCIENMSTUEYVTUUFDCRTAPYIHXATMSOVGNMPKNTMRVOQIRRPMJAOTJBQDYQHCGBVXKRNUGKXQDBHVLFOF");

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
    msg.setTimeStamp(0.7703842768667424);
    msg.setSource(33347U);
    msg.setSourceEntity(59U);
    msg.setDestination(35266U);
    msg.setDestinationEntity(130U);
    msg.list.assign("JZBUACTVEAVHJJKKKZFTYMLUHACAZSZIXOESMJCTRHUFMDRZOZBQFPCHLWSLGXMGAOYTIJFDMENDRWOCIPVVSOULZIKNMGPNRABLMVNRQOOJRGOSKXIMHINYYEUWYLPSXSQVNWFQCNWKFSXDJREPZXWMA");

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
    msg.setTimeStamp(0.545138639894324);
    msg.setSource(41013U);
    msg.setSourceEntity(18U);
    msg.setDestination(18649U);
    msg.setDestinationEntity(252U);
    msg.value = 8348;

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
    msg.setTimeStamp(0.40636447764268735);
    msg.setSource(64908U);
    msg.setSourceEntity(36U);
    msg.setDestination(534U);
    msg.setDestinationEntity(69U);
    msg.value = 12802;

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
    msg.setTimeStamp(0.9603758649854419);
    msg.setSource(33484U);
    msg.setSourceEntity(82U);
    msg.setDestination(41110U);
    msg.setDestinationEntity(158U);
    msg.value = 1209;

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
    msg.setTimeStamp(0.5199333994759812);
    msg.setSource(23420U);
    msg.setSourceEntity(242U);
    msg.setDestination(10515U);
    msg.setDestinationEntity(161U);
    msg.value = 0.5652287176601277;

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
    msg.setTimeStamp(0.664517694138053);
    msg.setSource(13141U);
    msg.setSourceEntity(208U);
    msg.setDestination(34135U);
    msg.setDestinationEntity(250U);
    msg.value = 0.6619017909551221;

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
    msg.setTimeStamp(0.2352470311484991);
    msg.setSource(9970U);
    msg.setSourceEntity(159U);
    msg.setDestination(13141U);
    msg.setDestinationEntity(173U);
    msg.value = 0.6625840327846833;

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
    msg.setTimeStamp(0.9673203270356563);
    msg.setSource(35763U);
    msg.setSourceEntity(196U);
    msg.setDestination(30292U);
    msg.setDestinationEntity(8U);
    msg.value = 0.6668739365076616;

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
    msg.setTimeStamp(0.9677261808693862);
    msg.setSource(12727U);
    msg.setSourceEntity(195U);
    msg.setDestination(3857U);
    msg.setDestinationEntity(227U);
    msg.value = 0.9192257495637162;

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
    msg.setTimeStamp(0.3877134533040226);
    msg.setSource(10173U);
    msg.setSourceEntity(54U);
    msg.setDestination(36876U);
    msg.setDestinationEntity(220U);
    msg.value = 0.26757620656632974;

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
    msg.setTimeStamp(0.6892002169031151);
    msg.setSource(27236U);
    msg.setSourceEntity(230U);
    msg.setDestination(21095U);
    msg.setDestinationEntity(106U);
    msg.validity = 22519U;
    msg.type = 133U;
    msg.utc_year = 1136U;
    msg.utc_month = 71U;
    msg.utc_day = 19U;
    msg.utc_time = 0.19742776107752535;
    msg.lat = 0.7541547253835038;
    msg.lon = 0.56661155026151;
    msg.height = 0.5906682685289786;
    msg.satellites = 158U;
    msg.cog = 0.20627314880176306;
    msg.sog = 0.13597452043770353;
    msg.hdop = 0.815314705604894;
    msg.vdop = 0.6234931488332649;
    msg.hacc = 0.13764843305536012;
    msg.vacc = 0.8558527145537048;

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
    msg.setTimeStamp(0.5238061895438048);
    msg.setSource(40742U);
    msg.setSourceEntity(7U);
    msg.setDestination(58961U);
    msg.setDestinationEntity(109U);
    msg.validity = 4108U;
    msg.type = 230U;
    msg.utc_year = 3809U;
    msg.utc_month = 161U;
    msg.utc_day = 131U;
    msg.utc_time = 0.890724105973292;
    msg.lat = 0.0768928004029712;
    msg.lon = 0.258713582624841;
    msg.height = 0.2205487649363208;
    msg.satellites = 217U;
    msg.cog = 0.44544301976674405;
    msg.sog = 0.027636715143574908;
    msg.hdop = 0.8032078040343609;
    msg.vdop = 0.9203096183957741;
    msg.hacc = 0.09307810995551513;
    msg.vacc = 0.9009512422478687;

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
    msg.setTimeStamp(0.4931813366861869);
    msg.setSource(29395U);
    msg.setSourceEntity(38U);
    msg.setDestination(50091U);
    msg.setDestinationEntity(251U);
    msg.validity = 28008U;
    msg.type = 132U;
    msg.utc_year = 34484U;
    msg.utc_month = 91U;
    msg.utc_day = 55U;
    msg.utc_time = 0.6120758527383424;
    msg.lat = 0.0870447414227522;
    msg.lon = 0.25273276227514474;
    msg.height = 0.8490964636094124;
    msg.satellites = 22U;
    msg.cog = 0.5669098288134438;
    msg.sog = 0.7931008767843618;
    msg.hdop = 0.42794754611919616;
    msg.vdop = 0.2881848087029635;
    msg.hacc = 0.32895840068816884;
    msg.vacc = 0.9204904199594592;

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
    msg.setTimeStamp(0.7459425871836439);
    msg.setSource(1680U);
    msg.setSourceEntity(220U);
    msg.setDestination(64217U);
    msg.setDestinationEntity(198U);
    msg.time = 0.629256500603807;
    msg.phi = 0.9654409275656483;
    msg.theta = 0.16270701926221165;
    msg.psi = 0.9895770783375483;
    msg.psi_magnetic = 0.014431133124930273;

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
    msg.setTimeStamp(0.07206703566815031);
    msg.setSource(38916U);
    msg.setSourceEntity(196U);
    msg.setDestination(29285U);
    msg.setDestinationEntity(10U);
    msg.time = 0.4236138749528735;
    msg.phi = 0.6726511772664857;
    msg.theta = 0.9280552880177161;
    msg.psi = 0.567746244798578;
    msg.psi_magnetic = 0.05601415075012872;

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
    msg.setTimeStamp(0.8141312417838312);
    msg.setSource(7956U);
    msg.setSourceEntity(65U);
    msg.setDestination(30101U);
    msg.setDestinationEntity(151U);
    msg.time = 0.7206815210240797;
    msg.phi = 0.8331892496458256;
    msg.theta = 0.47822227385185667;
    msg.psi = 0.9336295199009087;
    msg.psi_magnetic = 0.20852657577738276;

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
    msg.setTimeStamp(0.2169345501626666);
    msg.setSource(10158U);
    msg.setSourceEntity(123U);
    msg.setDestination(2154U);
    msg.setDestinationEntity(46U);
    msg.time = 0.1608261671854483;
    msg.x = 0.5311526404828886;
    msg.y = 0.5317508404665928;
    msg.z = 0.4630538041681933;
    msg.timestep = 0.6550297102100275;

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
    msg.setTimeStamp(0.43369287664024103);
    msg.setSource(34388U);
    msg.setSourceEntity(166U);
    msg.setDestination(45960U);
    msg.setDestinationEntity(120U);
    msg.time = 0.6231350889644715;
    msg.x = 0.0528950793468248;
    msg.y = 0.8348489472029826;
    msg.z = 0.06891960560158805;
    msg.timestep = 0.2728628859306106;

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
    msg.setTimeStamp(0.5733178612046772);
    msg.setSource(64915U);
    msg.setSourceEntity(239U);
    msg.setDestination(10127U);
    msg.setDestinationEntity(29U);
    msg.time = 0.6825809665896277;
    msg.x = 0.9270955475684092;
    msg.y = 0.23477187734485605;
    msg.z = 0.578764257939391;
    msg.timestep = 0.8775106021526679;

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
    msg.setTimeStamp(0.9822204755429432);
    msg.setSource(59211U);
    msg.setSourceEntity(58U);
    msg.setDestination(29504U);
    msg.setDestinationEntity(46U);
    msg.time = 0.07272288617203981;
    msg.x = 0.15448905357473797;
    msg.y = 0.40857296333066506;
    msg.z = 0.6755469971821502;

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
    msg.setTimeStamp(0.6171566421554017);
    msg.setSource(3703U);
    msg.setSourceEntity(181U);
    msg.setDestination(18662U);
    msg.setDestinationEntity(71U);
    msg.time = 0.04443136574491513;
    msg.x = 0.17299898288550353;
    msg.y = 0.08804001711676124;
    msg.z = 0.43030989070990044;

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
    msg.setTimeStamp(0.7687623380755337);
    msg.setSource(20815U);
    msg.setSourceEntity(164U);
    msg.setDestination(15588U);
    msg.setDestinationEntity(65U);
    msg.time = 0.9800104027720228;
    msg.x = 0.9221969940874254;
    msg.y = 0.48915628468908834;
    msg.z = 0.4341572008334871;

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
    msg.setTimeStamp(0.33448415085749417);
    msg.setSource(4432U);
    msg.setSourceEntity(233U);
    msg.setDestination(52317U);
    msg.setDestinationEntity(197U);
    msg.time = 0.9957742870517964;
    msg.x = 0.18901764759324946;
    msg.y = 0.548638065449774;
    msg.z = 0.8819591986847893;

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
    msg.setTimeStamp(0.5476929260093408);
    msg.setSource(25701U);
    msg.setSourceEntity(26U);
    msg.setDestination(31975U);
    msg.setDestinationEntity(158U);
    msg.time = 0.48335499864458364;
    msg.x = 0.13074951113131572;
    msg.y = 0.7761918113589914;
    msg.z = 0.31148627081516456;

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
    msg.setTimeStamp(0.31180346761466093);
    msg.setSource(7283U);
    msg.setSourceEntity(201U);
    msg.setDestination(47732U);
    msg.setDestinationEntity(112U);
    msg.time = 0.42015887571123134;
    msg.x = 0.43652593191871525;
    msg.y = 0.8917264919133188;
    msg.z = 0.5746125835878086;

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
    msg.setTimeStamp(0.6722990856711643);
    msg.setSource(1684U);
    msg.setSourceEntity(114U);
    msg.setDestination(35649U);
    msg.setDestinationEntity(230U);
    msg.time = 0.35177771570182603;
    msg.x = 0.7073684570151131;
    msg.y = 0.621767224058383;
    msg.z = 0.2128442936479804;

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
    msg.setTimeStamp(0.9197222688401652);
    msg.setSource(60968U);
    msg.setSourceEntity(69U);
    msg.setDestination(6199U);
    msg.setDestinationEntity(186U);
    msg.time = 0.15744341904439607;
    msg.x = 0.5872790261147731;
    msg.y = 0.2855240773445842;
    msg.z = 0.6273708435875643;

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
    msg.setTimeStamp(0.8475865495775714);
    msg.setSource(5852U);
    msg.setSourceEntity(119U);
    msg.setDestination(51221U);
    msg.setDestinationEntity(190U);
    msg.time = 0.939693640974822;
    msg.x = 0.798597295389419;
    msg.y = 0.8300085927288267;
    msg.z = 0.6134686597211834;

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
    msg.setTimeStamp(0.4876194584416378);
    msg.setSource(44171U);
    msg.setSourceEntity(37U);
    msg.setDestination(14940U);
    msg.setDestinationEntity(235U);
    msg.validity = 71U;
    msg.x = 0.7489999313137151;
    msg.y = 0.03403007516467227;
    msg.z = 0.03958932252384628;

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
    msg.setTimeStamp(0.900798020026944);
    msg.setSource(65191U);
    msg.setSourceEntity(9U);
    msg.setDestination(14087U);
    msg.setDestinationEntity(145U);
    msg.validity = 174U;
    msg.x = 0.45675690018492543;
    msg.y = 0.195388389869659;
    msg.z = 0.03226909557251467;

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
    msg.setTimeStamp(0.42520814926889205);
    msg.setSource(18770U);
    msg.setSourceEntity(210U);
    msg.setDestination(60042U);
    msg.setDestinationEntity(168U);
    msg.validity = 69U;
    msg.x = 0.9293562215352025;
    msg.y = 0.19095290607563375;
    msg.z = 0.9697061323954308;

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
    msg.setTimeStamp(0.10821139529214274);
    msg.setSource(32637U);
    msg.setSourceEntity(19U);
    msg.setDestination(28286U);
    msg.setDestinationEntity(48U);
    msg.validity = 203U;
    msg.x = 0.41480889176812885;
    msg.y = 0.5353322414629602;
    msg.z = 0.19162103650160967;

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
    msg.setTimeStamp(0.3878443017430825);
    msg.setSource(57891U);
    msg.setSourceEntity(94U);
    msg.setDestination(11935U);
    msg.setDestinationEntity(208U);
    msg.validity = 150U;
    msg.x = 0.5152706732933436;
    msg.y = 0.08816721446842346;
    msg.z = 0.42013595583081587;

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
    msg.setTimeStamp(0.06893838940492969);
    msg.setSource(10254U);
    msg.setSourceEntity(104U);
    msg.setDestination(32534U);
    msg.setDestinationEntity(168U);
    msg.validity = 221U;
    msg.x = 0.6286264611642964;
    msg.y = 0.9836303921918788;
    msg.z = 0.5666697107268049;

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
    msg.setTimeStamp(0.3078592993623076);
    msg.setSource(49220U);
    msg.setSourceEntity(254U);
    msg.setDestination(19841U);
    msg.setDestinationEntity(179U);
    msg.time = 0.42318325207312624;
    msg.x = 0.1492613567461749;
    msg.y = 0.6401477096073537;
    msg.z = 0.9248829480282809;

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
    msg.setTimeStamp(0.8546056194951543);
    msg.setSource(11050U);
    msg.setSourceEntity(160U);
    msg.setDestination(44972U);
    msg.setDestinationEntity(144U);
    msg.time = 0.521965847442857;
    msg.x = 0.788721709267309;
    msg.y = 0.27014160408161325;
    msg.z = 0.03874852984335553;

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
    msg.setTimeStamp(0.263596915740953);
    msg.setSource(1684U);
    msg.setSourceEntity(18U);
    msg.setDestination(29546U);
    msg.setDestinationEntity(220U);
    msg.time = 0.8267062258301309;
    msg.x = 0.6981481678264001;
    msg.y = 0.17668892694773364;
    msg.z = 0.1310303690777317;

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
    msg.setTimeStamp(0.9421119795342981);
    msg.setSource(24732U);
    msg.setSourceEntity(62U);
    msg.setDestination(500U);
    msg.setDestinationEntity(67U);
    msg.validity = 25U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5845228033646437;
    tmp_msg_0.y = 0.05151504983853372;
    tmp_msg_0.z = 0.3852010878825056;
    tmp_msg_0.phi = 0.0407066725761992;
    tmp_msg_0.theta = 0.1756060525666966;
    tmp_msg_0.psi = 0.5272118812823776;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.02424333304516324;
    tmp_msg_1.beam_height = 0.924222314000108;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5005197943265012;

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
    msg.setTimeStamp(0.7093635352369749);
    msg.setSource(21383U);
    msg.setSourceEntity(49U);
    msg.setDestination(49621U);
    msg.setDestinationEntity(106U);
    msg.validity = 29U;
    msg.value = 0.7162700156936674;

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
    msg.setTimeStamp(0.889071414091409);
    msg.setSource(41534U);
    msg.setSourceEntity(178U);
    msg.setDestination(16379U);
    msg.setDestinationEntity(95U);
    msg.validity = 220U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9988790938242349;
    tmp_msg_0.beam_height = 0.8478566525404875;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.5964312677272696;

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
    msg.setTimeStamp(0.08361711221893309);
    msg.setSource(18915U);
    msg.setSourceEntity(173U);
    msg.setDestination(16084U);
    msg.setDestinationEntity(52U);
    msg.value = 0.4654347100957864;

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
    msg.setTimeStamp(0.9778899788793158);
    msg.setSource(25726U);
    msg.setSourceEntity(141U);
    msg.setDestination(44950U);
    msg.setDestinationEntity(6U);
    msg.value = 0.1537262393524217;

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
    msg.setTimeStamp(0.44261163845784546);
    msg.setSource(7783U);
    msg.setSourceEntity(223U);
    msg.setDestination(47302U);
    msg.setDestinationEntity(109U);
    msg.value = 0.7850561192760774;

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
    msg.setTimeStamp(0.6297690454740811);
    msg.setSource(3202U);
    msg.setSourceEntity(79U);
    msg.setDestination(49354U);
    msg.setDestinationEntity(90U);
    msg.value = 0.9123960760209826;

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
    msg.setTimeStamp(0.34644311245198545);
    msg.setSource(60277U);
    msg.setSourceEntity(187U);
    msg.setDestination(15689U);
    msg.setDestinationEntity(37U);
    msg.value = 0.7205867700305956;

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
    msg.setTimeStamp(0.29429999302410637);
    msg.setSource(2875U);
    msg.setSourceEntity(82U);
    msg.setDestination(49630U);
    msg.setDestinationEntity(60U);
    msg.value = 0.487223987383524;

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
    msg.setTimeStamp(0.4269174514469476);
    msg.setSource(247U);
    msg.setSourceEntity(74U);
    msg.setDestination(62770U);
    msg.setDestinationEntity(70U);
    msg.value = 0.2684335009419322;

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
    msg.setTimeStamp(0.3094516951461672);
    msg.setSource(15998U);
    msg.setSourceEntity(83U);
    msg.setDestination(61530U);
    msg.setDestinationEntity(2U);
    msg.value = 0.5510342878242277;

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
    msg.setTimeStamp(0.8166478449568408);
    msg.setSource(6293U);
    msg.setSourceEntity(247U);
    msg.setDestination(24538U);
    msg.setDestinationEntity(134U);
    msg.value = 0.9143072281533827;

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
    msg.setTimeStamp(0.3388165186941515);
    msg.setSource(43252U);
    msg.setSourceEntity(120U);
    msg.setDestination(2204U);
    msg.setDestinationEntity(64U);
    msg.value = 0.974951962210716;

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
    msg.setTimeStamp(0.2068608289537932);
    msg.setSource(7555U);
    msg.setSourceEntity(169U);
    msg.setDestination(29300U);
    msg.setDestinationEntity(239U);
    msg.value = 0.8033566573677564;

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
    msg.setTimeStamp(0.66879881922517);
    msg.setSource(36391U);
    msg.setSourceEntity(161U);
    msg.setDestination(51056U);
    msg.setDestinationEntity(196U);
    msg.value = 0.27790337002737175;

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
    msg.setTimeStamp(0.29549151056516987);
    msg.setSource(56289U);
    msg.setSourceEntity(177U);
    msg.setDestination(33947U);
    msg.setDestinationEntity(96U);
    msg.value = 0.668532440389719;

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
    msg.setTimeStamp(0.48968960058366195);
    msg.setSource(36533U);
    msg.setSourceEntity(185U);
    msg.setDestination(26025U);
    msg.setDestinationEntity(50U);
    msg.value = 0.39086567623194124;

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
    msg.setTimeStamp(0.03716365852646697);
    msg.setSource(7791U);
    msg.setSourceEntity(169U);
    msg.setDestination(27316U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6100451530762326;

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
    msg.setTimeStamp(0.6057817446670306);
    msg.setSource(50438U);
    msg.setSourceEntity(92U);
    msg.setDestination(29431U);
    msg.setDestinationEntity(107U);
    msg.value = 0.9464437324372432;

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
    msg.setTimeStamp(0.31383520693856126);
    msg.setSource(57775U);
    msg.setSourceEntity(81U);
    msg.setDestination(46934U);
    msg.setDestinationEntity(154U);
    msg.value = 0.07957709557898152;

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
    msg.setTimeStamp(0.4426269369984869);
    msg.setSource(6115U);
    msg.setSourceEntity(15U);
    msg.setDestination(6117U);
    msg.setDestinationEntity(12U);
    msg.value = 0.7021068953242221;

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
    msg.setTimeStamp(0.976907244884596);
    msg.setSource(44108U);
    msg.setSourceEntity(34U);
    msg.setDestination(38171U);
    msg.setDestinationEntity(238U);
    msg.value = 0.47157909621590566;

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
    msg.setTimeStamp(0.026243549686562506);
    msg.setSource(58949U);
    msg.setSourceEntity(186U);
    msg.setDestination(35094U);
    msg.setDestinationEntity(180U);
    msg.value = 0.5513505734547002;

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
    msg.setTimeStamp(0.8498834936179112);
    msg.setSource(10495U);
    msg.setSourceEntity(99U);
    msg.setDestination(14277U);
    msg.setDestinationEntity(187U);
    msg.value = 0.12699289667527203;

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
    msg.setTimeStamp(0.9621929142168073);
    msg.setSource(49180U);
    msg.setSourceEntity(174U);
    msg.setDestination(33312U);
    msg.setDestinationEntity(64U);
    msg.value = 0.9879172783372681;

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
    msg.setTimeStamp(0.6893287224076164);
    msg.setSource(3215U);
    msg.setSourceEntity(251U);
    msg.setDestination(29748U);
    msg.setDestinationEntity(31U);
    msg.value = 0.5788212214090043;

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
    msg.setTimeStamp(0.8795550902017416);
    msg.setSource(3796U);
    msg.setSourceEntity(26U);
    msg.setDestination(32101U);
    msg.setDestinationEntity(183U);
    msg.value = 0.9746688125155318;

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
    msg.setTimeStamp(0.6256841235923918);
    msg.setSource(43926U);
    msg.setSourceEntity(134U);
    msg.setDestination(39442U);
    msg.setDestinationEntity(236U);
    msg.direction = 0.9393894660470764;
    msg.speed = 0.4689403275514422;
    msg.turbulence = 0.19285121107306302;

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
    msg.setTimeStamp(0.7930767966780717);
    msg.setSource(59915U);
    msg.setSourceEntity(129U);
    msg.setDestination(50921U);
    msg.setDestinationEntity(154U);
    msg.direction = 0.8721403537762569;
    msg.speed = 0.4995902492740292;
    msg.turbulence = 0.822760680232208;

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
    msg.setTimeStamp(0.7754525681735925);
    msg.setSource(16571U);
    msg.setSourceEntity(99U);
    msg.setDestination(32788U);
    msg.setDestinationEntity(163U);
    msg.direction = 0.5838080154635402;
    msg.speed = 0.11694682204933649;
    msg.turbulence = 0.5559269003654285;

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
    msg.setTimeStamp(0.28635356023811276);
    msg.setSource(15299U);
    msg.setSourceEntity(92U);
    msg.setDestination(36581U);
    msg.setDestinationEntity(193U);
    msg.value = 0.16221880060243266;

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
    msg.setTimeStamp(0.22314480555959293);
    msg.setSource(46569U);
    msg.setSourceEntity(57U);
    msg.setDestination(19803U);
    msg.setDestinationEntity(179U);
    msg.value = 0.22325155286279952;

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
    msg.setTimeStamp(0.9701915637829287);
    msg.setSource(40450U);
    msg.setSourceEntity(169U);
    msg.setDestination(35958U);
    msg.setDestinationEntity(91U);
    msg.value = 0.030965633820664196;

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
    msg.setTimeStamp(0.9368569105798553);
    msg.setSource(16105U);
    msg.setSourceEntity(226U);
    msg.setDestination(63503U);
    msg.setDestinationEntity(171U);
    msg.value.assign("IBYKTDJXHWJXOSFRTRNGUPCBQNDLNISMKKUHSYRVVWWBOEZGOXNKCTQGGUYRYMBIYVBLSGHKPCZCXOOXVZBSEAERPBGCLFPTSAIZLMTHMTIYADUCEFXFRMFVJQWQKNEOBKECRANSLEUXQJGUVVPPEHRFOSJILKMHPQVWGZZLNTHPWZLXMWWWMAZTXEYFJUQPSIARNPJDADMJQFLUQD");

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
    msg.setTimeStamp(0.2847842595267501);
    msg.setSource(27338U);
    msg.setSourceEntity(99U);
    msg.setDestination(43154U);
    msg.setDestinationEntity(253U);
    msg.value.assign("IAQXUYRVSJRSBCRMQXIDNOVHTYGYSUAYRLAKDFUWRMUJVP");

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
    msg.setTimeStamp(0.7744461084451484);
    msg.setSource(29591U);
    msg.setSourceEntity(50U);
    msg.setDestination(2155U);
    msg.setDestinationEntity(210U);
    msg.value.assign("KPJSHKNHXQTYISGAYHEILTMESFIQQUWVRTMPYVDGBRXVTIYIHUNEDIYQXBVQZMBPMHTQXHPFCVBNXMDDUGKEDSKWNOCVOKKPOGVHRWDTZZPAROWOVFAZLUFOTOURJDEZYJLMSKHALCZCXWMMJNCFOZWRXGUQJGTOEZKBLHMAWWIAOAMFCLYJPSYGGGVQFCNLZHRBUXJEPYGQ");

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
    msg.setTimeStamp(0.3196401030783431);
    msg.setSource(54994U);
    msg.setSourceEntity(218U);
    msg.setDestination(54210U);
    msg.setDestinationEntity(105U);
    const char tmp_msg_0[] = {65, -125, -14, 122, -35, -88, -126, -114, -22, 88, 115, -2, 95, -42, -5, -115, -26, -47, 79, 124, 12, -12, 97, -70, -72, -28, 122, 5, 23, 119, 75, 37, 37, -100, 123, 125, 63, 37, -64, 13, -122, 71, -31, 6, 64, -77, -30, 58, 56, 56, 35, -67, 89, -31, -113, 3, -19, -128, 60, -81, 117, -69, 111};
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
    msg.setTimeStamp(0.9535229732884799);
    msg.setSource(63336U);
    msg.setSourceEntity(139U);
    msg.setDestination(52297U);
    msg.setDestinationEntity(198U);
    const char tmp_msg_0[] = {54, -64, 115, -112, 114, 73, -72, -92, -22, -93, 56, -123, 5, -26, 60, -112, -112, 79, -20, -15, 4, 67, 68, 108, -58, 49, -5, -3, 100, -27, -81, -108, -88, -85, 79, 97, 82, 22, 88, -106, 123, 113, -11, -56, -24, 26, -41, -56, 36, -98, -113, -6, -64, 97, -90, -11, 61, 112, 46, -67, -36, 45, 26, 15, -84, 16, -33, 68, -38, -91, -120, 71, -54, 0, 36, 125, -102, -114, -65, 52, 26, -115, -118, -23, 75, -39, -8, 106, 24, -9, -35, -38, -41, -13, 61, -89, 74, 5, 78, -125, -105, 68, 84, -9, 40, 18, 90, -108, 57, -44, -16, 40, -69, 21, 83, -34, 52, 112, 94, -90, -42, -36, -128, 124, -83, -44, 11, 68, 89, -7, 33, -9, 18, -38, -39, -116, -36, -105, -109, -77, -6, 86, 22, 68, 72, -79, -23, -35, 29, -71, 12, -127, -56, -85, 43, 83, -40, 26, -44, -107, -42, -114, 70, -65, -58, -121, -96, 81, 69, 126, 10, -32, -75, 62, 19, 58, -37, 51, 29, 88, -96, 118, 35, -1, 86, 91, -91, 44, 52, 7, -49, -25, -17, 31, 40, -32, -123, 22, -54, -109, 8, 66, 79, 113, 23, 48, 98, -71, -53, 51, -57, 77, 96, 68, -3, 15, -86, -76, -47, 50, -78, 45, -68, -102, -86, -89, -55, -19, 32, 71, 111, 79, -23, 70, -94, -81, 47, -7, 67};
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
    msg.setTimeStamp(0.3846998267469949);
    msg.setSource(21976U);
    msg.setSourceEntity(42U);
    msg.setDestination(23079U);
    msg.setDestinationEntity(101U);
    const char tmp_msg_0[] = {-77, -22, -101, -21, 81, -83, -83, -122, -6, -20, -30, 84, 40, -10, -1, 40, -71, -39, 23, 44, -52, 109, -89, 45, 39, -63, 0, 88, 112, 82, 121, 108, 60, -105, 3, 10, -91, -68, 93, 60, -33, -19, 5, -109, -53, 84, -116, 82, 87, -55, -111, -77, -21, 26, -46, 70, -106, -25, 100, 105, 47, -14, -25, -39, -26, 121, 109, -26, 71, 42, 108, 71};
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
    msg.setTimeStamp(0.8230018151611852);
    msg.setSource(48405U);
    msg.setSourceEntity(98U);
    msg.setDestination(48671U);
    msg.setDestinationEntity(151U);
    msg.type = 103U;
    msg.frequency = 1042080575U;
    msg.min_range = 7040U;
    msg.max_range = 5230U;
    msg.bits_per_point = 24U;
    msg.scale_factor = 0.16116492068436017;
    const char tmp_msg_0[] = {20, -58, 68, -32, 24, 4, -103, -34, 71, -86, -96, 125, 18, 58, -105, -65, -61, 37, -40, -87, -91, 125, 16, -26, 69, 36, 95, 17, 90, 34, 80, -118, -49, -12, 105, -99, 11, 55, -12, 52, -25, 94, 25, 90, 25, 78, -105, -20, 97, -13, -22, -19, 25, -101, 41, 5, 125, 1, -105, 98, 107, -20, -40, -29, 14, -90, 35, -127, 125, -78, 94};
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
    msg.setTimeStamp(0.6843315725070603);
    msg.setSource(12527U);
    msg.setSourceEntity(152U);
    msg.setDestination(11596U);
    msg.setDestinationEntity(234U);
    msg.type = 1U;
    msg.frequency = 1041800699U;
    msg.min_range = 817U;
    msg.max_range = 8611U;
    msg.bits_per_point = 193U;
    msg.scale_factor = 0.9595258654231564;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.15271841777683148;
    tmp_msg_0.beam_height = 0.009355995699068975;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-103, -69, -56, 45, 32, 22, 117, -20, -70, -18, 92, 29, -60, -119, 9, -64, 73, -73, -36, -122, 7, -80, 104, -63, 8, 65, 88, 94, 124};
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
    msg.setTimeStamp(0.0907883385405387);
    msg.setSource(47842U);
    msg.setSourceEntity(88U);
    msg.setDestination(56410U);
    msg.setDestinationEntity(102U);
    msg.type = 81U;
    msg.frequency = 1643265604U;
    msg.min_range = 32475U;
    msg.max_range = 22482U;
    msg.bits_per_point = 143U;
    msg.scale_factor = 0.09212869924843814;
    const char tmp_msg_0[] = {25, -83, -81, 78, 59, 77, -27, -84, 56, 12, -127, 6, -59, -7, 26, -55, 121, -15, 69, -93, -47, -94, 67, -26, -84, -48, -57, 48, -59, 44, -78, -6, 8, 23, -112, -117, -47, -33, -17, 44, 54, 92, -3, 39, 10, -32, -16, -51, 93, -104, 112, -122, 23, 92, 2, 25, -63, 98, 108, -43, -33, -68, -16, 92, 75, -13, -86, 11, 52, -81, 54, 76, -21, 101, -73, 104, 84, -30, 109, 24, 109, -78, -37, -77, 11, 54, 44, 110, -26, -31, -116, -27, -57, 89, -46, -26, -17, -28, 105, 31, 35, -28, -94, -95, 80, 86, 49, -126, -71, -8, -90, 83, 52, 22, 88, 77, 86, -23, -60, 97, -71, 3, 71, 56, -88, 34, 98, -99, -50, 23, 112, 66, 58, -112, 6, -45, -108, 11, -26, -44, -121, -42, -28, 108, -72, 16, 65, -18, -34, -108, -28, -56, 122, 100, -65, 97, -63, -80, 9, -13, -65, 84, 31, -76, -43, -108, -73, -98, -72, -111, 43, 54, 124, 40, 65, -37, 65, -97, 56, -2, 11, -104, 41, -43, 54, -97, -68, -32};
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
    msg.setTimeStamp(0.4403473346133834);
    msg.setSource(47336U);
    msg.setSourceEntity(184U);
    msg.setDestination(9157U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.10841996576624036);
    msg.setSource(27834U);
    msg.setSourceEntity(78U);
    msg.setDestination(4252U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.6379874167274026);
    msg.setSource(20787U);
    msg.setSourceEntity(176U);
    msg.setDestination(191U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.027727805618080525);
    msg.setSource(3379U);
    msg.setSourceEntity(189U);
    msg.setDestination(56395U);
    msg.setDestinationEntity(164U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.6852534454864375);
    msg.setSource(16061U);
    msg.setSourceEntity(182U);
    msg.setDestination(61074U);
    msg.setDestinationEntity(228U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.9000090943747612);
    msg.setSource(44925U);
    msg.setSourceEntity(144U);
    msg.setDestination(46998U);
    msg.setDestinationEntity(23U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.6664502415470686);
    msg.setSource(47875U);
    msg.setSourceEntity(153U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(103U);
    msg.value = 0.0003799233390141543;
    msg.confidence = 0.864569749828441;
    msg.opmodes.assign("BKNZEYVXPAUNGYFTWYWVPZQRZCBDVNYBZAKOQESJNDUWQVLIEJHMIBTXQRWDEOPMCYGZLLOYUYTNTGSITAFGPDHJLZKOCCFSHRYCLHZTAJNOJEMNIBUJSPSDSWKPAKCORLWGTUOWKHNGMRAUDFFTNFBARBWGJHPZFISLL");

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
    msg.setTimeStamp(0.10139994331784419);
    msg.setSource(18350U);
    msg.setSourceEntity(171U);
    msg.setDestination(13442U);
    msg.setDestinationEntity(41U);
    msg.value = 0.023897193905417113;
    msg.confidence = 0.8320605541477551;
    msg.opmodes.assign("RYYCVJNCJXGTTATHBJXGGOVNAHOBPSIJQQHWCKMJTNHIVDMGDNZTITEZYVUDLKCNWWSWVCADMJQKDTIUKHUQKVMVZMFZDLZSIBAPHQMXRRJNFHKSROXOZPEYYAWFGLCBRECLBBKYPOGZZBTMFGZEYRHPYPSILQNEWRRAMEOLPKEJSPXGDIP");

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
    msg.setTimeStamp(0.9345624695998499);
    msg.setSource(13283U);
    msg.setSourceEntity(65U);
    msg.setDestination(4084U);
    msg.setDestinationEntity(98U);
    msg.value = 0.605794474796281;
    msg.confidence = 0.12719735379508734;
    msg.opmodes.assign("RXMVGGJAFXBWVMLYSHTJUGAWUVPMSNTOTWEFKMUULKHFXGSLZFQVNKFDRJISLIQVDPPCCRF");

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
    msg.setTimeStamp(0.9309263103923997);
    msg.setSource(57374U);
    msg.setSourceEntity(235U);
    msg.setDestination(29637U);
    msg.setDestinationEntity(55U);
    msg.itow = 3872385146U;
    msg.lat = 0.9050778430163191;
    msg.lon = 0.8658563869436975;
    msg.height_ell = 0.7783428296447304;
    msg.height_sea = 0.6932455455427762;
    msg.hacc = 0.4150471657485012;
    msg.vacc = 0.5590018698975766;
    msg.vel_n = 0.4158422839295015;
    msg.vel_e = 0.7789431223505778;
    msg.vel_d = 0.8708996514838248;
    msg.speed = 0.03299326494226429;
    msg.gspeed = 0.9577562597157772;
    msg.heading = 0.1723853420260888;
    msg.sacc = 0.3593272070991128;
    msg.cacc = 0.45568057544130225;

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
    msg.setTimeStamp(0.9839019844999473);
    msg.setSource(59131U);
    msg.setSourceEntity(86U);
    msg.setDestination(60514U);
    msg.setDestinationEntity(149U);
    msg.itow = 3219849830U;
    msg.lat = 0.09131306533193695;
    msg.lon = 0.41672604971487137;
    msg.height_ell = 0.820126845033402;
    msg.height_sea = 0.8526559587596003;
    msg.hacc = 0.5614542725410056;
    msg.vacc = 0.3059883925101585;
    msg.vel_n = 0.33685571904511513;
    msg.vel_e = 0.5166875024099717;
    msg.vel_d = 0.24885903628120631;
    msg.speed = 0.3975068890305875;
    msg.gspeed = 0.22022490136438255;
    msg.heading = 0.8712396574943596;
    msg.sacc = 0.9032526484681549;
    msg.cacc = 0.7257501007847006;

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
    msg.setTimeStamp(0.15949730321568456);
    msg.setSource(7258U);
    msg.setSourceEntity(34U);
    msg.setDestination(18746U);
    msg.setDestinationEntity(14U);
    msg.itow = 2921471057U;
    msg.lat = 0.36160153796772176;
    msg.lon = 0.9157941638263898;
    msg.height_ell = 0.7577529878511355;
    msg.height_sea = 0.37403379679670423;
    msg.hacc = 0.5703446691218468;
    msg.vacc = 0.46718818027379605;
    msg.vel_n = 0.7904784061609637;
    msg.vel_e = 0.37651178010303477;
    msg.vel_d = 0.5311054605026301;
    msg.speed = 0.10508483017329984;
    msg.gspeed = 0.03091378225344954;
    msg.heading = 0.07437163153181914;
    msg.sacc = 0.0075900262458658;
    msg.cacc = 0.2682440859250431;

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
    msg.setTimeStamp(0.49147477458506006);
    msg.setSource(12505U);
    msg.setSourceEntity(93U);
    msg.setDestination(7494U);
    msg.setDestinationEntity(204U);
    msg.id = 77U;
    msg.value = 0.5828904813229365;

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
    msg.setTimeStamp(0.724324023295658);
    msg.setSource(60099U);
    msg.setSourceEntity(209U);
    msg.setDestination(51799U);
    msg.setDestinationEntity(47U);
    msg.id = 90U;
    msg.value = 0.30275480198145577;

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
    msg.setTimeStamp(0.0679972776383494);
    msg.setSource(55313U);
    msg.setSourceEntity(126U);
    msg.setDestination(6448U);
    msg.setDestinationEntity(101U);
    msg.id = 95U;
    msg.value = 0.3114238344606779;

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
    msg.setTimeStamp(0.18288503420567104);
    msg.setSource(60625U);
    msg.setSourceEntity(182U);
    msg.setDestination(41941U);
    msg.setDestinationEntity(150U);
    msg.x = 0.7325453595248096;
    msg.y = 0.7034751719781401;
    msg.z = 0.14164011249621078;
    msg.phi = 0.9870925412092649;
    msg.theta = 0.23792782071448082;
    msg.psi = 0.4981990512386516;

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
    msg.setTimeStamp(0.04069281968059979);
    msg.setSource(50387U);
    msg.setSourceEntity(238U);
    msg.setDestination(22831U);
    msg.setDestinationEntity(89U);
    msg.x = 0.5672120662550424;
    msg.y = 0.2087249924069451;
    msg.z = 0.5897363501296258;
    msg.phi = 0.1281933184480809;
    msg.theta = 0.4944293535855434;
    msg.psi = 0.17612378056691302;

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
    msg.setTimeStamp(0.46305308669017964);
    msg.setSource(11000U);
    msg.setSourceEntity(123U);
    msg.setDestination(44292U);
    msg.setDestinationEntity(23U);
    msg.x = 0.6683559793200746;
    msg.y = 0.6369457456849879;
    msg.z = 0.8685187892994538;
    msg.phi = 0.40102464242502556;
    msg.theta = 0.41044482649341174;
    msg.psi = 0.23658705005587732;

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
    msg.setTimeStamp(0.7200785954941011);
    msg.setSource(5318U);
    msg.setSourceEntity(94U);
    msg.setDestination(39814U);
    msg.setDestinationEntity(230U);
    msg.beam_width = 0.09271747707558975;
    msg.beam_height = 0.5665469867067155;

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
    msg.setTimeStamp(0.627237610035333);
    msg.setSource(17523U);
    msg.setSourceEntity(107U);
    msg.setDestination(61265U);
    msg.setDestinationEntity(244U);
    msg.beam_width = 0.9093967474533473;
    msg.beam_height = 0.6609201046952639;

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
    msg.setTimeStamp(0.44529723834334956);
    msg.setSource(64674U);
    msg.setSourceEntity(126U);
    msg.setDestination(30570U);
    msg.setDestinationEntity(164U);
    msg.beam_width = 0.553855161071229;
    msg.beam_height = 0.7493575408193577;

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
    msg.setTimeStamp(0.08536646970624484);
    msg.setSource(19174U);
    msg.setSourceEntity(188U);
    msg.setDestination(51139U);
    msg.setDestinationEntity(7U);
    msg.sane = 67U;

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
    msg.setTimeStamp(0.24827451697239922);
    msg.setSource(48261U);
    msg.setSourceEntity(200U);
    msg.setDestination(22439U);
    msg.setDestinationEntity(60U);
    msg.sane = 77U;

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
    msg.setTimeStamp(0.8049077176910262);
    msg.setSource(9363U);
    msg.setSourceEntity(194U);
    msg.setDestination(56335U);
    msg.setDestinationEntity(153U);
    msg.sane = 151U;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.1446905230350416);
    msg.setSource(19267U);
    msg.setSourceEntity(25U);
    msg.setDestination(7470U);
    msg.setDestinationEntity(75U);
    msg.id = 109U;
    msg.zoom = 107U;
    msg.action = 234U;

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
    msg.setTimeStamp(0.6006054773474832);
    msg.setSource(3885U);
    msg.setSourceEntity(161U);
    msg.setDestination(14931U);
    msg.setDestinationEntity(110U);
    msg.id = 190U;
    msg.zoom = 82U;
    msg.action = 211U;

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
    msg.setTimeStamp(0.06825767822329665);
    msg.setSource(56721U);
    msg.setSourceEntity(192U);
    msg.setDestination(36534U);
    msg.setDestinationEntity(36U);
    msg.id = 198U;
    msg.zoom = 214U;
    msg.action = 69U;

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
    msg.setTimeStamp(0.49905501166422384);
    msg.setSource(50275U);
    msg.setSourceEntity(66U);
    msg.setDestination(24772U);
    msg.setDestinationEntity(46U);
    msg.id = 51U;
    msg.value = 0.40338278343467715;

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
    msg.setTimeStamp(0.11025980883177178);
    msg.setSource(62240U);
    msg.setSourceEntity(11U);
    msg.setDestination(33597U);
    msg.setDestinationEntity(89U);
    msg.id = 140U;
    msg.value = 0.4922641331381644;

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
    msg.setTimeStamp(0.3342381850131897);
    msg.setSource(64080U);
    msg.setSourceEntity(249U);
    msg.setDestination(29856U);
    msg.setDestinationEntity(17U);
    msg.id = 248U;
    msg.value = 0.38838004358740286;

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
    msg.setTimeStamp(0.7708199242866222);
    msg.setSource(44959U);
    msg.setSourceEntity(24U);
    msg.setDestination(33451U);
    msg.setDestinationEntity(157U);
    msg.id = 1U;
    msg.value = 0.7936208958592889;

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
    msg.setTimeStamp(0.7789260676286595);
    msg.setSource(56454U);
    msg.setSourceEntity(168U);
    msg.setDestination(16832U);
    msg.setDestinationEntity(69U);
    msg.id = 53U;
    msg.value = 0.7251145117507457;

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
    msg.setTimeStamp(0.23074832101103238);
    msg.setSource(6857U);
    msg.setSourceEntity(233U);
    msg.setDestination(62830U);
    msg.setDestinationEntity(227U);
    msg.id = 238U;
    msg.value = 0.04340581400581156;

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
    msg.setTimeStamp(0.09669452316311045);
    msg.setSource(23713U);
    msg.setSourceEntity(188U);
    msg.setDestination(58763U);
    msg.setDestinationEntity(94U);
    msg.id = 4U;
    msg.angle = 0.3305939613294494;

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
    msg.setTimeStamp(0.7215416750598481);
    msg.setSource(24245U);
    msg.setSourceEntity(216U);
    msg.setDestination(9934U);
    msg.setDestinationEntity(186U);
    msg.id = 28U;
    msg.angle = 0.8766144260276654;

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
    msg.setTimeStamp(0.8127110301268712);
    msg.setSource(1223U);
    msg.setSourceEntity(235U);
    msg.setDestination(17188U);
    msg.setDestinationEntity(253U);
    msg.id = 100U;
    msg.angle = 0.8321174638038722;

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
    msg.setTimeStamp(0.9694090493900087);
    msg.setSource(48246U);
    msg.setSourceEntity(112U);
    msg.setDestination(56772U);
    msg.setDestinationEntity(11U);
    msg.op = 107U;
    msg.actions.assign("WUEVOUERFOQUKBSBYDRPJOGUJDKDGBZAPDHCTJYOBWTBFNLOLYWXKOYLCJCTWHV");

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
    msg.setTimeStamp(0.9817215157883515);
    msg.setSource(15244U);
    msg.setSourceEntity(163U);
    msg.setDestination(62860U);
    msg.setDestinationEntity(108U);
    msg.op = 13U;
    msg.actions.assign("TKLWZEDBARKVXRXRGZPYSROBZCCXSGHNWCZTBEMMXITNBLKDCUGGRPIYFHDJLQOUAWKYHWOYOHMEFSKTRWINMVYESYZQLNUIJONLHSUUKOPTFEWORTCWPOGOLMUNQREJBFVUCCVDDJWLYTDZHQMYEPMLJXYXNAZGRAVBIGDUIJQFMQANIHXKFZASVZXP");

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
    msg.setTimeStamp(0.7485201020317552);
    msg.setSource(47259U);
    msg.setSourceEntity(148U);
    msg.setDestination(6994U);
    msg.setDestinationEntity(44U);
    msg.op = 153U;
    msg.actions.assign("EXWGQCIAKEQCKNVCYATFNVDANGRVSBMSEJFTUEGLIIDXOIZDUYLWMCFZRPKVQJFLBSYERLJIDBFWOLAQUOAHCNYOPKUHBZGYNSZKCPRAYJCLDQQ");

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
    msg.setTimeStamp(0.663655522642325);
    msg.setSource(35917U);
    msg.setSourceEntity(129U);
    msg.setDestination(46048U);
    msg.setDestinationEntity(251U);
    msg.actions.assign("ZGFQHNEJENVZGXKTAVSOOVFVMJUYTPMLKXHHCJWKEYQCSNJMNUWTNWBTIALDLPOGVORBMATCLXKOBMUNAGDHOEDQEOPIKWUHQQMSUXTSDZWUCYBFXUFA");

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
    msg.setTimeStamp(0.18963543806724203);
    msg.setSource(49468U);
    msg.setSourceEntity(134U);
    msg.setDestination(15892U);
    msg.setDestinationEntity(80U);
    msg.actions.assign("YTSVXYKRVVDKFTPCGZXGUZDYUNXHTQVMRUWUCULZFJHMTPSXDEUBZXJJZKEUTNFGPLWRDBIARJWHFQNYNYZNBOOIFKKMIRQAWOKWAMPTAHVZIHELZVGWULEFQQOPAJQACOXLNESFYLAGOOHYNIHZLYKSYUXCRHQTDSAKVPSBONOQVQLRBMSICDRHJALVPWMZEBLWDBKCVSEXAFIMEMKFOUNGCXBTMJGJPPMNEWC");

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
    msg.setTimeStamp(0.5376202747481308);
    msg.setSource(44313U);
    msg.setSourceEntity(44U);
    msg.setDestination(18570U);
    msg.setDestinationEntity(47U);
    msg.actions.assign("WSPWILNYKOUZQGMLNZHHMVPUXSYIEKNIQOZEYTBEMPIFJOHWYNKDNFKCRZIBRLJTWQVFXAJVSVPPQGMFDTURIQPILGQEOAACJGVAAOXTBXLCVQCREBWHQSDSZMOBCTPEMWEGBLHYJJTDPYXSMPZVRABWTFYNBEAJRXDSNSRVQGYXHPKAMXRKDJFKDFHCHUNKQVR");

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
    msg.setTimeStamp(0.37034360715494996);
    msg.setSource(12358U);
    msg.setSourceEntity(94U);
    msg.setDestination(38488U);
    msg.setDestinationEntity(109U);
    msg.button = 106U;
    msg.value = 171U;

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
    msg.setTimeStamp(0.3608099399698508);
    msg.setSource(28600U);
    msg.setSourceEntity(103U);
    msg.setDestination(14593U);
    msg.setDestinationEntity(150U);
    msg.button = 183U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.44943389208321294);
    msg.setSource(55025U);
    msg.setSourceEntity(55U);
    msg.setDestination(52729U);
    msg.setDestinationEntity(214U);
    msg.button = 253U;
    msg.value = 218U;

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
    msg.setTimeStamp(0.24904891716782007);
    msg.setSource(4505U);
    msg.setSourceEntity(48U);
    msg.setDestination(37889U);
    msg.setDestinationEntity(92U);
    msg.op = 14U;
    msg.text.assign("HPBRFGBXAKBDBLJTQBJJIROUXLMXVVZJLDFVZFHYVMSSDEIGLKBWCTCKPTVUQPQZUYHSSKGAWIILOWYVJVODECQGVBKXQKCMEWXOTGNTMPZIMLNQYHNYTMFBNSHUHAXHNOOEFIMFCESZAHJOGWZGVUPCOAGRSQYHWPTVLYADR");

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
    msg.setTimeStamp(0.8737514115586557);
    msg.setSource(57257U);
    msg.setSourceEntity(144U);
    msg.setDestination(34213U);
    msg.setDestinationEntity(94U);
    msg.op = 206U;
    msg.text.assign("NDTOIPWLLOBGGKKFCVQLYKUNYTJNJNACXDSRIRMJOBKBFMFIBILWYQBJHOXOXMZ");

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
    msg.setTimeStamp(0.8792211720592993);
    msg.setSource(53433U);
    msg.setSourceEntity(147U);
    msg.setDestination(17912U);
    msg.setDestinationEntity(100U);
    msg.op = 147U;
    msg.text.assign("EQBELLINZPZRLTHSWUAERDQFITUTIYGMKVZPCBMHFXAIAMCCXIAYCFDNYYZWVIKCDKMPRCCKOOASYRJTGKAFQGRWZOJIQLHDJEYGBFIGTHNABHQXYSKQJHQVWCOKVMXBEEBDAVXX");

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
    msg.setTimeStamp(0.6318543139002516);
    msg.setSource(46646U);
    msg.setSourceEntity(0U);
    msg.setDestination(11256U);
    msg.setDestinationEntity(41U);
    msg.op = 120U;
    msg.time_remain = 0.6934175840785989;
    msg.sched_time = 0.8675117695133745;

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
    msg.setTimeStamp(0.7513460563958065);
    msg.setSource(36529U);
    msg.setSourceEntity(179U);
    msg.setDestination(53673U);
    msg.setDestinationEntity(215U);
    msg.op = 40U;
    msg.time_remain = 0.008511757001539277;
    msg.sched_time = 0.3883167377645166;

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
    msg.setTimeStamp(0.929828022286028);
    msg.setSource(46348U);
    msg.setSourceEntity(252U);
    msg.setDestination(54749U);
    msg.setDestinationEntity(42U);
    msg.op = 138U;
    msg.time_remain = 0.15565401217220776;
    msg.sched_time = 0.3202605901595913;

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
    msg.setTimeStamp(0.5237984636657287);
    msg.setSource(7527U);
    msg.setSourceEntity(128U);
    msg.setDestination(59925U);
    msg.setDestinationEntity(116U);
    msg.name.assign("HPGVOGRJFFNQALLUFQXTITVZURJXVEJANQDCLUHVIBYNFPSIGEZLZRZWPGLLSMTDLDCYGY");
    msg.op = 105U;
    msg.sched_time = 0.14992706388601518;

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
    msg.setTimeStamp(0.9705678880054922);
    msg.setSource(21199U);
    msg.setSourceEntity(161U);
    msg.setDestination(7672U);
    msg.setDestinationEntity(205U);
    msg.name.assign("KMAPKPCALXQLHUEDYSTDTNDWSQTDJDKOKPZVSPGGLIIIYFYUZTQLWWSJCEHBBVRFCIXISGJMNYVFEGXBKWPVOPWUKKNCRNVZJJTNLQLSORJAUXQVKMUGGEEPOZNBAJDOYKFATHBCZOFXOCGONKQXERVUQRTZWEUMRMXGPECWEBUIATNBHVMVD");
    msg.op = 77U;
    msg.sched_time = 0.17994442753858186;

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
    msg.setTimeStamp(0.29066531645049953);
    msg.setSource(33999U);
    msg.setSourceEntity(75U);
    msg.setDestination(44536U);
    msg.setDestinationEntity(152U);
    msg.name.assign("OZJTVSLZVUULGMKGBBNJYDCGRXABQAKYWKUSNVCNSFSBMDOAESYDGCKHQIBACRCHTQXBLHUEHYEZREUPFHZDGPLHJYTZMOIRNAPKPUBKCPIPLTTTONKIFLHJTWZJMDCZGROVCJGTQFQPTWDAOVFFJYNCVCDJMGWLAUQRGSKEPDHODZWYQXIRWYEEXBMFXFMWNQXXBAWWNFZAVOXYIFTBAOVSEXPG");
    msg.op = 250U;
    msg.sched_time = 0.6279840677485696;

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
    msg.setTimeStamp(0.35610748628925415);
    msg.setSource(60384U);
    msg.setSourceEntity(3U);
    msg.setDestination(27602U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.8702474715665183);
    msg.setSource(41067U);
    msg.setSourceEntity(6U);
    msg.setDestination(21230U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.03187458799518916);
    msg.setSource(31022U);
    msg.setSourceEntity(170U);
    msg.setDestination(43900U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.42976121745967466);
    msg.setSource(58634U);
    msg.setSourceEntity(9U);
    msg.setDestination(19349U);
    msg.setDestinationEntity(29U);
    msg.name.assign("EGSATMVPGWNLITRXE");
    msg.state = 181U;

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
    msg.setTimeStamp(0.32802002058606916);
    msg.setSource(13862U);
    msg.setSourceEntity(191U);
    msg.setDestination(18745U);
    msg.setDestinationEntity(150U);
    msg.name.assign("JZTZRKXJTWPISHPTAGDUBMHGBRBCTAOQYTXSPUSTYNPDMFOCQMCUJZRQYHYZPHAOJEDSFDEAIMXNVYIHXTRGUOPXWZ");
    msg.state = 129U;

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
    msg.setTimeStamp(0.5274538921819413);
    msg.setSource(51157U);
    msg.setSourceEntity(53U);
    msg.setDestination(523U);
    msg.setDestinationEntity(82U);
    msg.name.assign("XCTAUYUFMAQKKSMGWWHONVEWDNUEJFYXCOCOGRYLPZ");
    msg.state = 118U;

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
    msg.setTimeStamp(0.2725820644572612);
    msg.setSource(15940U);
    msg.setSourceEntity(82U);
    msg.setDestination(15147U);
    msg.setDestinationEntity(239U);
    msg.name.assign("GTCADHMSPZGCTMEIONVFKDOQBITDGVVRPYPRYMLVADEHOSFLUBRELFABYNGQSWJPDKVMZOJTROWADBTLWHHMOIGXSNJVAFOCJKKQMINMYCAIMHDTDARZHZEPWPEIVCXPS");
    msg.value = 149U;

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
    msg.setTimeStamp(0.8383168382110461);
    msg.setSource(55434U);
    msg.setSourceEntity(6U);
    msg.setDestination(61318U);
    msg.setDestinationEntity(133U);
    msg.name.assign("NOHXMEWVMMESCPHAPLBYBCDQPFFLIFJCVBSGUZWOODQPZSHBNZDXFLVBQZTBRUDACDMXPLOIYISNEYC");
    msg.value = 208U;

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
    msg.setTimeStamp(0.1853036316385127);
    msg.setSource(18301U);
    msg.setSourceEntity(1U);
    msg.setDestination(24594U);
    msg.setDestinationEntity(167U);
    msg.name.assign("ETATKYAUPCHJDLTOHKCYLWUIYDQWLMAANZBSNRRNUMYUDOFQTOLTRGXMJDWBVYINSOXHTSNBYVMVVXXWFQDIPIOKPFRGDIGFO");
    msg.value = 210U;

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
    msg.setTimeStamp(0.37401476381229304);
    msg.setSource(53367U);
    msg.setSourceEntity(227U);
    msg.setDestination(14044U);
    msg.setDestinationEntity(160U);
    msg.name.assign("XORLIUXNXZUBHXXTXPAWGSVSENAFCZIMUZIFXYZLPQVQVDPCLIKBUNEEMDGRSTJKLVZMHQLDZJCFHKIBJRQVBNMEAQHYRDNYHEVVORLCHBTS");

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
    msg.setTimeStamp(0.22631955408447013);
    msg.setSource(64464U);
    msg.setSourceEntity(134U);
    msg.setDestination(46929U);
    msg.setDestinationEntity(65U);
    msg.name.assign("XSAHTFREUKXBLDZGCYOVGHLSVDMXQXVHVXJZWCBKZUQIBAMWZOVKNRGXTAVQNDPBLXPZBLHVYORKIPMWTWDDJWCTRQSUTGVFIHAJGEFTHOCAUKSGQIOYNWGTYOXBLIBMHLVNNKLKYQFLMJPBDVUOCDBXEESZCERG");

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
    msg.setTimeStamp(0.9843591966478262);
    msg.setSource(1624U);
    msg.setSourceEntity(53U);
    msg.setDestination(17913U);
    msg.setDestinationEntity(207U);
    msg.name.assign("ZZHMEBVECJSDVJRWUNMHYTDVPFBSSCDDQIYSCDFVRVFMXB");

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
    msg.setTimeStamp(0.46152295420413336);
    msg.setSource(61888U);
    msg.setSourceEntity(221U);
    msg.setDestination(33356U);
    msg.setDestinationEntity(6U);
    msg.name.assign("SNEQIGBDXKLYHPDKZGDEAUSGLINCQYGLHWRM");
    msg.value = 141U;

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
    msg.setTimeStamp(0.4098081995909759);
    msg.setSource(22800U);
    msg.setSourceEntity(212U);
    msg.setDestination(41126U);
    msg.setDestinationEntity(117U);
    msg.name.assign("NQEZMLCLXGQUTTBKLISPFUGHNIVTPRZTAJGUMNFGUQIQTWHJPFPEBYNYWOTCNYKNSXOSASORJHBVJNPLOKRRJLGZWHJVPURQFMHHDUDRHWKQZFEPUSZSXNOVXBCFRAKOPWSOCMHERZSKLEBTUNFADMLQLUHDWVVD");
    msg.value = 246U;

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
    msg.setTimeStamp(0.8722740747732158);
    msg.setSource(1891U);
    msg.setSourceEntity(50U);
    msg.setDestination(33725U);
    msg.setDestinationEntity(242U);
    msg.name.assign("SVGDXUUVWUDJVTITDOZNRCXVCIGLOYAKXATQRSZDNPNRRYHQKYEOAYZCESIRDSYKUVAIHDPLZQMPRQUJTLAVDJZOMHFUOPZNTZGBJNMMRPBMDKMKUPPKIHBXSFCGFBWBXNFTIEZJCAKMSUBWKPLEZFCBLAWGHESXXPQNOEWRAQWAXNJGBYHWGSTEVWOSKJGIVYDYHEQOFGLLMTRCA");
    msg.value = 203U;

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
    msg.setTimeStamp(0.47504253793107987);
    msg.setSource(65482U);
    msg.setSourceEntity(9U);
    msg.setDestination(28165U);
    msg.setDestinationEntity(70U);
    msg.id = 86U;
    msg.period = 1753904568U;
    msg.duty_cycle = 1565878096U;

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
    msg.setTimeStamp(0.6826607294206405);
    msg.setSource(22442U);
    msg.setSourceEntity(157U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(206U);
    msg.id = 103U;
    msg.period = 1968534070U;
    msg.duty_cycle = 1534531708U;

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
    msg.setTimeStamp(0.3840498551733762);
    msg.setSource(34086U);
    msg.setSourceEntity(30U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(5U);
    msg.id = 111U;
    msg.period = 266617718U;
    msg.duty_cycle = 1062656628U;

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
    msg.setTimeStamp(0.4940118161522883);
    msg.setSource(38835U);
    msg.setSourceEntity(155U);
    msg.setDestination(30539U);
    msg.setDestinationEntity(47U);
    msg.id = 37U;
    msg.period = 2193339137U;
    msg.duty_cycle = 3447817427U;

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
    msg.setTimeStamp(0.27003908768677276);
    msg.setSource(24305U);
    msg.setSourceEntity(32U);
    msg.setDestination(6168U);
    msg.setDestinationEntity(34U);
    msg.id = 1U;
    msg.period = 911743614U;
    msg.duty_cycle = 176316805U;

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
    msg.setTimeStamp(0.42912592099598523);
    msg.setSource(35650U);
    msg.setSourceEntity(29U);
    msg.setDestination(39154U);
    msg.setDestinationEntity(113U);
    msg.id = 154U;
    msg.period = 1053692483U;
    msg.duty_cycle = 3169650002U;

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
    msg.setTimeStamp(0.5226378276214491);
    msg.setSource(222U);
    msg.setSourceEntity(221U);
    msg.setDestination(18293U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.8499547853867528;
    msg.lon = 0.5647975385318603;
    msg.height = 0.936686358242884;
    msg.x = 0.12104717130832587;
    msg.y = 0.7345572150744447;
    msg.z = 0.13770690707247024;
    msg.phi = 0.6979667797372421;
    msg.theta = 0.7846381526888799;
    msg.psi = 0.357333921545011;
    msg.u = 0.14109789192592248;
    msg.v = 0.16054715171121925;
    msg.w = 0.5677607958133859;
    msg.vx = 0.7853552539405866;
    msg.vy = 0.19340009231884037;
    msg.vz = 0.19265254319829161;
    msg.p = 0.9486498047227908;
    msg.q = 0.22199890153080892;
    msg.r = 0.9839458813293482;
    msg.depth = 0.614686429462044;
    msg.alt = 0.6685504126827961;

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
    msg.setTimeStamp(0.6979665830210944);
    msg.setSource(50430U);
    msg.setSourceEntity(145U);
    msg.setDestination(55769U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.35114416745892285;
    msg.lon = 0.15001173239298515;
    msg.height = 0.21882679389860193;
    msg.x = 0.2670709391546574;
    msg.y = 0.7575466110068085;
    msg.z = 0.9101676423463946;
    msg.phi = 0.5725463105697123;
    msg.theta = 0.7286584264585272;
    msg.psi = 0.011331067453430932;
    msg.u = 0.08936734850746841;
    msg.v = 0.15600260554688727;
    msg.w = 0.8541334603255625;
    msg.vx = 0.12686911163466585;
    msg.vy = 0.9432613433475961;
    msg.vz = 0.22521272632351286;
    msg.p = 0.8263399628086614;
    msg.q = 0.8394940395781828;
    msg.r = 0.7156599956698031;
    msg.depth = 0.5644353831330129;
    msg.alt = 0.7214317268175708;

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
    msg.setTimeStamp(0.46366072889404775);
    msg.setSource(17495U);
    msg.setSourceEntity(35U);
    msg.setDestination(56428U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.3313182408765769;
    msg.lon = 0.5755147593412198;
    msg.height = 0.4106244359653284;
    msg.x = 0.0022429924918013766;
    msg.y = 0.38193788252877003;
    msg.z = 0.6818604791356132;
    msg.phi = 0.32132527167210223;
    msg.theta = 0.6779828584694443;
    msg.psi = 0.8356220015452028;
    msg.u = 0.6050278397956838;
    msg.v = 0.07941584416410608;
    msg.w = 0.38758018788897075;
    msg.vx = 0.6504547733731328;
    msg.vy = 0.39566352421592565;
    msg.vz = 0.257397856852447;
    msg.p = 0.2464913762761607;
    msg.q = 0.6640675301164584;
    msg.r = 0.6686921536226924;
    msg.depth = 0.7893132406901431;
    msg.alt = 0.34776201401096507;

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
    msg.setTimeStamp(0.3523117849360321);
    msg.setSource(9827U);
    msg.setSourceEntity(236U);
    msg.setDestination(15341U);
    msg.setDestinationEntity(153U);
    msg.x = 0.7369983551903547;
    msg.y = 0.44274226628386737;
    msg.z = 0.07977870644067642;

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
    msg.setTimeStamp(0.519754383081292);
    msg.setSource(25365U);
    msg.setSourceEntity(229U);
    msg.setDestination(34429U);
    msg.setDestinationEntity(88U);
    msg.x = 0.16531914864173458;
    msg.y = 0.5915023309281585;
    msg.z = 0.2201610063202859;

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
    msg.setTimeStamp(0.5724441874559639);
    msg.setSource(39664U);
    msg.setSourceEntity(165U);
    msg.setDestination(28609U);
    msg.setDestinationEntity(146U);
    msg.x = 0.0060839688340806886;
    msg.y = 0.411216789619841;
    msg.z = 0.7997332411861104;

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
    msg.setTimeStamp(0.5270521033944797);
    msg.setSource(13644U);
    msg.setSourceEntity(178U);
    msg.setDestination(32525U);
    msg.setDestinationEntity(74U);
    msg.value = 0.14260286936557454;

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
    msg.setTimeStamp(0.9427576116538142);
    msg.setSource(61805U);
    msg.setSourceEntity(159U);
    msg.setDestination(42620U);
    msg.setDestinationEntity(162U);
    msg.value = 0.03601784731234303;

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
    msg.setTimeStamp(0.9775050220340449);
    msg.setSource(36148U);
    msg.setSourceEntity(232U);
    msg.setDestination(39558U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9367555439667589;

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
    msg.setTimeStamp(0.17174405113709845);
    msg.setSource(42929U);
    msg.setSourceEntity(114U);
    msg.setDestination(32953U);
    msg.setDestinationEntity(4U);
    msg.value = 0.5170107453367395;

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
    msg.setTimeStamp(0.08941413190680003);
    msg.setSource(12401U);
    msg.setSourceEntity(99U);
    msg.setDestination(12330U);
    msg.setDestinationEntity(226U);
    msg.value = 0.40122470835021073;

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
    msg.setTimeStamp(0.2811758202687953);
    msg.setSource(31495U);
    msg.setSourceEntity(8U);
    msg.setDestination(35644U);
    msg.setDestinationEntity(224U);
    msg.value = 0.8279714873948762;

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
    msg.setTimeStamp(0.2878751683665367);
    msg.setSource(54995U);
    msg.setSourceEntity(141U);
    msg.setDestination(9020U);
    msg.setDestinationEntity(130U);
    msg.x = 0.754035211902985;
    msg.y = 0.13792702328332818;
    msg.z = 0.37665415785181644;
    msg.phi = 0.5704201832838663;
    msg.theta = 0.9989332375026783;
    msg.psi = 0.3645196106513551;
    msg.p = 0.17604801151157734;
    msg.q = 0.04445159645896368;
    msg.r = 0.20175566933042954;
    msg.u = 0.43307051162913823;
    msg.v = 0.756644484601412;
    msg.w = 0.5789358726926025;
    msg.bias_psi = 0.29548580920499423;
    msg.bias_r = 0.6959062804376123;

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
    msg.setTimeStamp(0.9936848497217964);
    msg.setSource(8724U);
    msg.setSourceEntity(22U);
    msg.setDestination(56776U);
    msg.setDestinationEntity(218U);
    msg.x = 0.5502864272172924;
    msg.y = 0.13341219750082733;
    msg.z = 0.2967419007051988;
    msg.phi = 0.5500004614307146;
    msg.theta = 0.05789387661144563;
    msg.psi = 0.315804317114306;
    msg.p = 0.8308946506706215;
    msg.q = 0.49848277999302815;
    msg.r = 0.22343894944047094;
    msg.u = 0.9528822241934358;
    msg.v = 0.1861455222480477;
    msg.w = 0.47994181299039596;
    msg.bias_psi = 0.6125923861668272;
    msg.bias_r = 0.08211292289976801;

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
    msg.setTimeStamp(0.7143042903711664);
    msg.setSource(19004U);
    msg.setSourceEntity(92U);
    msg.setDestination(38006U);
    msg.setDestinationEntity(88U);
    msg.x = 0.42748651453909714;
    msg.y = 0.9212807703584105;
    msg.z = 0.6177441435855772;
    msg.phi = 0.30643744749401414;
    msg.theta = 0.9948950260661326;
    msg.psi = 0.150596684800821;
    msg.p = 0.19123658473913385;
    msg.q = 0.3870080961077391;
    msg.r = 0.08097952495529148;
    msg.u = 0.28968256103689416;
    msg.v = 0.4772462644565131;
    msg.w = 0.08951746053151588;
    msg.bias_psi = 0.9736450567016567;
    msg.bias_r = 0.6740938146886228;

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
    msg.setTimeStamp(0.06694814688599049);
    msg.setSource(33599U);
    msg.setSourceEntity(182U);
    msg.setDestination(56959U);
    msg.setDestinationEntity(36U);
    msg.bias_psi = 0.8862553410925925;
    msg.bias_r = 0.38396990333471026;
    msg.cog = 0.3887297011137738;
    msg.cyaw = 0.5881971340009002;
    msg.lbl_rej_level = 0.951381451608197;
    msg.gps_rej_level = 0.513939407390872;
    msg.custom_x = 0.12013364340737342;
    msg.custom_y = 0.7251710507349404;
    msg.custom_z = 0.3324374079525575;

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
    msg.setTimeStamp(0.0017050701306886573);
    msg.setSource(12637U);
    msg.setSourceEntity(78U);
    msg.setDestination(63498U);
    msg.setDestinationEntity(12U);
    msg.bias_psi = 0.7443468504313737;
    msg.bias_r = 0.34810521081814194;
    msg.cog = 0.435961646870459;
    msg.cyaw = 0.699104096525089;
    msg.lbl_rej_level = 0.5263864147021012;
    msg.gps_rej_level = 0.1159492594948911;
    msg.custom_x = 0.8964282174337433;
    msg.custom_y = 0.6254837164694973;
    msg.custom_z = 0.22881169673216117;

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
    msg.setTimeStamp(0.5068627832662788);
    msg.setSource(52489U);
    msg.setSourceEntity(2U);
    msg.setDestination(58510U);
    msg.setDestinationEntity(160U);
    msg.bias_psi = 0.7395122139310518;
    msg.bias_r = 0.7675754163763188;
    msg.cog = 0.4170298828201662;
    msg.cyaw = 0.9707395330158112;
    msg.lbl_rej_level = 0.3979646684687721;
    msg.gps_rej_level = 0.5691868787090091;
    msg.custom_x = 0.6928387349063959;
    msg.custom_y = 0.6280705472958886;
    msg.custom_z = 0.18578471931601004;

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
    msg.setTimeStamp(0.1156452079504563);
    msg.setSource(60087U);
    msg.setSourceEntity(221U);
    msg.setDestination(43880U);
    msg.setDestinationEntity(166U);
    msg.utc_time = 0.1779797097749699;
    msg.reason = 120U;

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
    msg.setTimeStamp(0.997447337480389);
    msg.setSource(33706U);
    msg.setSourceEntity(25U);
    msg.setDestination(13273U);
    msg.setDestinationEntity(53U);
    msg.utc_time = 0.11843878607304881;
    msg.reason = 181U;

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
    msg.setTimeStamp(0.4630092897163113);
    msg.setSource(47034U);
    msg.setSourceEntity(46U);
    msg.setDestination(54271U);
    msg.setDestinationEntity(238U);
    msg.utc_time = 0.368287912350139;
    msg.reason = 8U;

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
    msg.setTimeStamp(0.08412535491331508);
    msg.setSource(16904U);
    msg.setSourceEntity(181U);
    msg.setDestination(3547U);
    msg.setDestinationEntity(225U);
    msg.id = 17U;
    msg.range = 0.26952531860399387;
    msg.acceptance = 219U;

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
    msg.setTimeStamp(0.22331324908847727);
    msg.setSource(60016U);
    msg.setSourceEntity(10U);
    msg.setDestination(10033U);
    msg.setDestinationEntity(0U);
    msg.id = 190U;
    msg.range = 0.5721709557596251;
    msg.acceptance = 100U;

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
    msg.setTimeStamp(0.23072382630615662);
    msg.setSource(3544U);
    msg.setSourceEntity(29U);
    msg.setDestination(18233U);
    msg.setDestinationEntity(29U);
    msg.id = 193U;
    msg.range = 0.8455702281862576;
    msg.acceptance = 197U;

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
    msg.setTimeStamp(0.3055557180813744);
    msg.setSource(10098U);
    msg.setSourceEntity(230U);
    msg.setDestination(54919U);
    msg.setDestinationEntity(208U);
    msg.type = 28U;
    msg.reason = 26U;
    msg.value = 0.6518883702592901;
    msg.timestep = 0.628809231464657;

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
    msg.setTimeStamp(0.03593021405416641);
    msg.setSource(50644U);
    msg.setSourceEntity(223U);
    msg.setDestination(12570U);
    msg.setDestinationEntity(63U);
    msg.type = 152U;
    msg.reason = 185U;
    msg.value = 0.3898629393953329;
    msg.timestep = 0.5440260885391036;

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
    msg.setTimeStamp(0.5005353579548012);
    msg.setSource(5696U);
    msg.setSourceEntity(2U);
    msg.setDestination(52398U);
    msg.setDestinationEntity(244U);
    msg.type = 93U;
    msg.reason = 75U;
    msg.value = 0.9300076949129655;
    msg.timestep = 0.270276589756705;

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
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.9838225404964237);
    msg.setSource(1353U);
    msg.setSourceEntity(200U);
    msg.setDestination(5318U);
    msg.setDestinationEntity(100U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.09860164279382266);
    msg.setSource(2759U);
    msg.setSourceEntity(163U);
    msg.setDestination(23335U);
    msg.setDestinationEntity(144U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.09707245861761704);
    msg.setSource(36878U);
    msg.setSourceEntity(107U);
    msg.setDestination(28915U);
    msg.setDestinationEntity(189U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #2", msg == *msg_d);
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
    msg.setTimeStamp(0.35759593725090155);
    msg.setSource(9043U);
    msg.setSourceEntity(104U);
    msg.setDestination(62894U);
    msg.setDestinationEntity(66U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RKQEYCGTSHXPAFMOWXESGNKZNFFFBJHCIYNNLWOJVXJTTRTDHJAVTZPLYBCAAKWGNDUBFGMNEINYSHSKLHYADSZDVDWDFHSETDCZJXIIDIVDXHHBWGKNSOYWLKVAIKULDMMUMGOARKVUBXJUHCCVYATPZRFBHOCQCQUIQ");
    tmp_msg_0.lat = 0.42123152185918555;
    tmp_msg_0.lon = 0.11425974995391053;
    tmp_msg_0.depth = 0.09589459975239312;
    tmp_msg_0.query_channel = 125U;
    tmp_msg_0.reply_channel = 243U;
    tmp_msg_0.transponder_delay = 4U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.38195824672595646;
    msg.y = 0.46307797480427126;
    msg.var_x = 0.9286052694430871;
    msg.var_y = 0.32329737001246206;
    msg.distance = 0.04313255174259634;

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
    msg.setTimeStamp(0.2409364103083108);
    msg.setSource(4166U);
    msg.setSourceEntity(3U);
    msg.setDestination(516U);
    msg.setDestinationEntity(93U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JVQNUVFJQELLEKPBQXMKPUI");
    tmp_msg_0.lat = 0.8579828401257046;
    tmp_msg_0.lon = 0.10933014450454503;
    tmp_msg_0.depth = 0.12711150500726887;
    tmp_msg_0.query_channel = 63U;
    tmp_msg_0.reply_channel = 2U;
    tmp_msg_0.transponder_delay = 200U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.42676873260391346;
    msg.y = 0.4433919820281853;
    msg.var_x = 0.38070028982858906;
    msg.var_y = 0.6355200663185082;
    msg.distance = 0.25370620145907175;

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
    msg.setTimeStamp(0.5702807519883707);
    msg.setSource(627U);
    msg.setSourceEntity(100U);
    msg.setDestination(21563U);
    msg.setDestinationEntity(131U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HOQQSKAAJFCBBLDXQEJKIMFBGXXUBMCKEEUAHWOPYNUITEONJRPGRXXUTIMFIXNDWHDTHWYVRPEQOVOFRPPTNJAAGZPLSFZMOOLJLAFKFGXQBDZBGESUDSWDEYLSWBLCJYEAYQXXJEUSZIDJPVVRUICKTYBDANVDZGWRFVCGSPGEHJMIIUORZNCVPBWTZRSZTLSNYMWCCKWILVMPMHXHUNKQQGVCOMRHHIUYD");
    tmp_msg_0.lat = 0.8338374207172791;
    tmp_msg_0.lon = 0.9188973816860424;
    tmp_msg_0.depth = 0.20535826915399635;
    tmp_msg_0.query_channel = 146U;
    tmp_msg_0.reply_channel = 49U;
    tmp_msg_0.transponder_delay = 83U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.20169405189613543;
    msg.y = 0.637132155504586;
    msg.var_x = 0.4642260433665867;
    msg.var_y = 0.49056353522542695;
    msg.distance = 0.9699218431570121;

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
    msg.setTimeStamp(0.744982148530268);
    msg.setSource(11510U);
    msg.setSourceEntity(177U);
    msg.setDestination(8926U);
    msg.setDestinationEntity(188U);
    msg.state = 168U;

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
    msg.setTimeStamp(0.6971840893358442);
    msg.setSource(25816U);
    msg.setSourceEntity(129U);
    msg.setDestination(28628U);
    msg.setDestinationEntity(162U);
    msg.state = 223U;

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
    msg.setTimeStamp(0.14804883577611905);
    msg.setSource(59301U);
    msg.setSourceEntity(141U);
    msg.setDestination(4530U);
    msg.setDestinationEntity(81U);
    msg.state = 98U;

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
    msg.setTimeStamp(0.7970655716063046);
    msg.setSource(3051U);
    msg.setSourceEntity(18U);
    msg.setDestination(26723U);
    msg.setDestinationEntity(45U);
    msg.x = 0.6414114052910782;
    msg.y = 0.8461155058536133;
    msg.z = 0.7481278354300892;

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
    msg.setTimeStamp(0.6724184198461212);
    msg.setSource(34103U);
    msg.setSourceEntity(14U);
    msg.setDestination(12252U);
    msg.setDestinationEntity(72U);
    msg.x = 0.8334816215172163;
    msg.y = 0.8259471571272081;
    msg.z = 0.723274634321335;

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
    msg.setTimeStamp(0.6786933593735734);
    msg.setSource(58792U);
    msg.setSourceEntity(193U);
    msg.setDestination(56668U);
    msg.setDestinationEntity(190U);
    msg.x = 0.22736421435680254;
    msg.y = 0.2924758799003587;
    msg.z = 0.4631484872185423;

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
    msg.setTimeStamp(0.9207496912288893);
    msg.setSource(50533U);
    msg.setSourceEntity(177U);
    msg.setDestination(13664U);
    msg.setDestinationEntity(80U);
    msg.value = 0.35914872727232483;

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
    msg.setTimeStamp(0.2275208329552375);
    msg.setSource(2068U);
    msg.setSourceEntity(121U);
    msg.setDestination(56711U);
    msg.setDestinationEntity(51U);
    msg.value = 0.377299971438105;

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
    msg.setTimeStamp(0.8676936951744301);
    msg.setSource(10044U);
    msg.setSourceEntity(10U);
    msg.setDestination(23067U);
    msg.setDestinationEntity(152U);
    msg.value = 0.6081991208892955;

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
    msg.setTimeStamp(0.4540009368000848);
    msg.setSource(34464U);
    msg.setSourceEntity(245U);
    msg.setDestination(58283U);
    msg.setDestinationEntity(247U);
    msg.value = 0.6174351572509685;
    msg.z_units = 39U;

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
    msg.setTimeStamp(0.2230285689545367);
    msg.setSource(49228U);
    msg.setSourceEntity(198U);
    msg.setDestination(27468U);
    msg.setDestinationEntity(115U);
    msg.value = 0.3357167556259192;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.05460987873063772);
    msg.setSource(28294U);
    msg.setSourceEntity(121U);
    msg.setDestination(35360U);
    msg.setDestinationEntity(137U);
    msg.value = 0.005048686124045743;
    msg.z_units = 45U;

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
    msg.setTimeStamp(0.2389106551404111);
    msg.setSource(10331U);
    msg.setSourceEntity(37U);
    msg.setDestination(50854U);
    msg.setDestinationEntity(61U);
    msg.value = 0.6971218513812933;
    msg.speed_units = 123U;

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
    msg.setTimeStamp(0.2102151351251812);
    msg.setSource(37543U);
    msg.setSourceEntity(23U);
    msg.setDestination(64384U);
    msg.setDestinationEntity(121U);
    msg.value = 0.20272692377294543;
    msg.speed_units = 182U;

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
    msg.setTimeStamp(0.8168089519672417);
    msg.setSource(21561U);
    msg.setSourceEntity(232U);
    msg.setDestination(49199U);
    msg.setDestinationEntity(114U);
    msg.value = 0.18448808193816546;
    msg.speed_units = 251U;

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
    msg.setTimeStamp(0.329620560739471);
    msg.setSource(65319U);
    msg.setSourceEntity(225U);
    msg.setDestination(41267U);
    msg.setDestinationEntity(116U);
    msg.value = 0.3504694604164176;

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
    msg.setTimeStamp(0.24211266747527405);
    msg.setSource(39495U);
    msg.setSourceEntity(64U);
    msg.setDestination(6641U);
    msg.setDestinationEntity(127U);
    msg.value = 0.9991324716234058;

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
    msg.setTimeStamp(0.6487036944302187);
    msg.setSource(54151U);
    msg.setSourceEntity(111U);
    msg.setDestination(20979U);
    msg.setDestinationEntity(162U);
    msg.value = 0.4274252771297694;

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
    msg.setTimeStamp(0.8413495440866228);
    msg.setSource(7954U);
    msg.setSourceEntity(221U);
    msg.setDestination(20649U);
    msg.setDestinationEntity(82U);
    msg.value = 0.4510571786371994;

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
    msg.setTimeStamp(0.3106321362276002);
    msg.setSource(9706U);
    msg.setSourceEntity(243U);
    msg.setDestination(29924U);
    msg.setDestinationEntity(216U);
    msg.value = 0.7733360519504341;

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
    msg.setTimeStamp(0.24761724109604066);
    msg.setSource(36249U);
    msg.setSourceEntity(234U);
    msg.setDestination(44293U);
    msg.setDestinationEntity(222U);
    msg.value = 0.5678734291009391;

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
    msg.setTimeStamp(0.0472633581042351);
    msg.setSource(56470U);
    msg.setSourceEntity(148U);
    msg.setDestination(6558U);
    msg.setDestinationEntity(87U);
    msg.value = 0.9108239581986468;

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
    msg.setTimeStamp(0.28745776691641667);
    msg.setSource(48372U);
    msg.setSourceEntity(83U);
    msg.setDestination(37847U);
    msg.setDestinationEntity(88U);
    msg.value = 0.3959882519933472;

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
    msg.setTimeStamp(0.7360579504340224);
    msg.setSource(0U);
    msg.setSourceEntity(99U);
    msg.setDestination(58451U);
    msg.setDestinationEntity(220U);
    msg.value = 0.38092494428328294;

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
    msg.setTimeStamp(0.28602092523246003);
    msg.setSource(46668U);
    msg.setSourceEntity(134U);
    msg.setDestination(25363U);
    msg.setDestinationEntity(10U);
    msg.path_ref = 3763026749U;
    msg.start_lat = 0.22320903386110935;
    msg.start_lon = 0.6193582665015593;
    msg.start_z = 0.39468579483138133;
    msg.start_z_units = 252U;
    msg.end_lat = 0.7483351018404836;
    msg.end_lon = 0.43502870143521666;
    msg.end_z = 0.4223562918901407;
    msg.end_z_units = 205U;
    msg.speed = 0.26468900011590957;
    msg.speed_units = 21U;
    msg.lradius = 0.5902296945021515;
    msg.flags = 64U;

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
    msg.setTimeStamp(0.36040298955760275);
    msg.setSource(20976U);
    msg.setSourceEntity(227U);
    msg.setDestination(61043U);
    msg.setDestinationEntity(127U);
    msg.path_ref = 689032939U;
    msg.start_lat = 0.25182977555051633;
    msg.start_lon = 0.917641395355431;
    msg.start_z = 0.3137961432046188;
    msg.start_z_units = 221U;
    msg.end_lat = 0.9670020825139655;
    msg.end_lon = 0.1492588787458582;
    msg.end_z = 0.3884583701949771;
    msg.end_z_units = 176U;
    msg.speed = 0.9142278024181129;
    msg.speed_units = 54U;
    msg.lradius = 0.8770967277920855;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.5906166841634872);
    msg.setSource(58116U);
    msg.setSourceEntity(33U);
    msg.setDestination(58688U);
    msg.setDestinationEntity(187U);
    msg.path_ref = 631417847U;
    msg.start_lat = 0.773337052168889;
    msg.start_lon = 0.3472127980344918;
    msg.start_z = 0.29459299490334423;
    msg.start_z_units = 16U;
    msg.end_lat = 0.14221130038453966;
    msg.end_lon = 0.8998729299579036;
    msg.end_z = 0.6261222019768509;
    msg.end_z_units = 4U;
    msg.speed = 0.5148919537095682;
    msg.speed_units = 134U;
    msg.lradius = 0.1866294383538153;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.9277737227344428);
    msg.setSource(12561U);
    msg.setSourceEntity(100U);
    msg.setDestination(58869U);
    msg.setDestinationEntity(27U);
    msg.x = 0.3696604149434286;
    msg.y = 0.6187630627352051;
    msg.z = 0.9217729269872188;
    msg.k = 0.24743763129146457;
    msg.m = 0.004735621332991324;
    msg.n = 0.7537538852506446;
    msg.flags = 2U;

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
    msg.setTimeStamp(0.30233443825429407);
    msg.setSource(20004U);
    msg.setSourceEntity(123U);
    msg.setDestination(36384U);
    msg.setDestinationEntity(179U);
    msg.x = 0.6456509354199159;
    msg.y = 0.9317965143348458;
    msg.z = 0.4750729284280103;
    msg.k = 0.3392951925128994;
    msg.m = 0.6196876451206563;
    msg.n = 0.5037097948600411;
    msg.flags = 245U;

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
    msg.setTimeStamp(0.42570525688226135);
    msg.setSource(11252U);
    msg.setSourceEntity(168U);
    msg.setDestination(28458U);
    msg.setDestinationEntity(3U);
    msg.x = 0.5804057923479536;
    msg.y = 0.5932738464625238;
    msg.z = 0.9287289670809796;
    msg.k = 0.6723546833204488;
    msg.m = 0.28812986974990784;
    msg.n = 0.4915751952482027;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.7189804267133636);
    msg.setSource(38052U);
    msg.setSourceEntity(64U);
    msg.setDestination(33834U);
    msg.setDestinationEntity(191U);
    msg.value = 0.013857757626215217;

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
    msg.setTimeStamp(0.7780956133364715);
    msg.setSource(47035U);
    msg.setSourceEntity(206U);
    msg.setDestination(7680U);
    msg.setDestinationEntity(115U);
    msg.value = 0.17329016902400185;

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
    msg.setTimeStamp(0.20162413630265907);
    msg.setSource(21687U);
    msg.setSourceEntity(12U);
    msg.setDestination(17104U);
    msg.setDestinationEntity(34U);
    msg.value = 0.6236712220828279;

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
    msg.setTimeStamp(0.4036570424470919);
    msg.setSource(59859U);
    msg.setSourceEntity(185U);
    msg.setDestination(58025U);
    msg.setDestinationEntity(37U);
    msg.u = 0.024107120319156516;
    msg.v = 0.06880865463377228;
    msg.w = 0.8738531274124006;
    msg.p = 0.04003621016798187;
    msg.q = 0.18717193073251848;
    msg.r = 0.21795575348119745;
    msg.flags = 47U;

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
    msg.setTimeStamp(0.531663905215025);
    msg.setSource(47562U);
    msg.setSourceEntity(153U);
    msg.setDestination(16883U);
    msg.setDestinationEntity(58U);
    msg.u = 0.7540925302896021;
    msg.v = 0.9538842809275241;
    msg.w = 0.9731242447623941;
    msg.p = 0.26907935954365514;
    msg.q = 0.9387626323855747;
    msg.r = 0.20129923093214797;
    msg.flags = 230U;

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
    msg.setTimeStamp(0.24800086820717693);
    msg.setSource(58303U);
    msg.setSourceEntity(236U);
    msg.setDestination(64575U);
    msg.setDestinationEntity(165U);
    msg.u = 0.3268055626147164;
    msg.v = 0.3930629607233608;
    msg.w = 0.15307937070919042;
    msg.p = 0.35395312595080497;
    msg.q = 0.03962113029423675;
    msg.r = 0.7897212128508384;
    msg.flags = 168U;

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
    msg.setTimeStamp(0.10347463401073098);
    msg.setSource(40468U);
    msg.setSourceEntity(67U);
    msg.setDestination(4953U);
    msg.setDestinationEntity(59U);
    msg.path_ref = 1476187408U;
    msg.start_lat = 0.23089821186814086;
    msg.start_lon = 0.719874770294661;
    msg.start_z = 0.10082633937997298;
    msg.start_z_units = 169U;
    msg.end_lat = 0.862106760791164;
    msg.end_lon = 0.24302322746124805;
    msg.end_z = 0.9239585773313166;
    msg.end_z_units = 141U;
    msg.lradius = 0.6146128239100175;
    msg.flags = 116U;
    msg.x = 0.2924414434016064;
    msg.y = 0.2876659822095482;
    msg.z = 0.6188900481262352;
    msg.vx = 0.15829592589577124;
    msg.vy = 0.45395243941977337;
    msg.vz = 0.01423804551338137;
    msg.course_error = 0.20639328420733305;
    msg.eta = 40685U;

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
    msg.setTimeStamp(0.7364935846931377);
    msg.setSource(8540U);
    msg.setSourceEntity(152U);
    msg.setDestination(57898U);
    msg.setDestinationEntity(7U);
    msg.path_ref = 2944204858U;
    msg.start_lat = 0.4754811464053821;
    msg.start_lon = 0.35826017987641445;
    msg.start_z = 0.9389388754417177;
    msg.start_z_units = 52U;
    msg.end_lat = 0.5040082039044589;
    msg.end_lon = 0.5232249251608716;
    msg.end_z = 0.41428178509894664;
    msg.end_z_units = 200U;
    msg.lradius = 0.7983458955329297;
    msg.flags = 9U;
    msg.x = 0.770460333089097;
    msg.y = 0.1665947540113727;
    msg.z = 0.43803364762756736;
    msg.vx = 0.5961189539070336;
    msg.vy = 0.9537139117770642;
    msg.vz = 0.25268237405918115;
    msg.course_error = 0.06787883368283643;
    msg.eta = 63581U;

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
    msg.setTimeStamp(0.9094882263089026);
    msg.setSource(59095U);
    msg.setSourceEntity(116U);
    msg.setDestination(5064U);
    msg.setDestinationEntity(243U);
    msg.path_ref = 4277717023U;
    msg.start_lat = 0.07411108562421964;
    msg.start_lon = 0.7533321852464334;
    msg.start_z = 0.10131418064462827;
    msg.start_z_units = 53U;
    msg.end_lat = 0.2304627628087459;
    msg.end_lon = 0.16192334087924676;
    msg.end_z = 0.2730035831820178;
    msg.end_z_units = 245U;
    msg.lradius = 0.773243579742543;
    msg.flags = 46U;
    msg.x = 0.13220167065425215;
    msg.y = 0.4971754551854858;
    msg.z = 0.9515213950028842;
    msg.vx = 0.7135733228443606;
    msg.vy = 0.022925263228714576;
    msg.vz = 0.8674365509602706;
    msg.course_error = 0.22443161685051105;
    msg.eta = 51032U;

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
    msg.setTimeStamp(0.30149061431118274);
    msg.setSource(44971U);
    msg.setSourceEntity(64U);
    msg.setDestination(13132U);
    msg.setDestinationEntity(170U);
    msg.k = 0.46862220392555565;
    msg.m = 0.7055511535688246;
    msg.n = 0.7871207281376608;

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
    msg.setTimeStamp(0.49094186645492355);
    msg.setSource(21919U);
    msg.setSourceEntity(152U);
    msg.setDestination(53013U);
    msg.setDestinationEntity(235U);
    msg.k = 0.6844939910483023;
    msg.m = 0.36684419964080084;
    msg.n = 0.0400232614870254;

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
    msg.setTimeStamp(0.49989323211629877);
    msg.setSource(30757U);
    msg.setSourceEntity(106U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(73U);
    msg.k = 0.816303835601873;
    msg.m = 0.2716324936155209;
    msg.n = 0.6990556445045535;

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
    msg.setTimeStamp(0.8335081963188311);
    msg.setSource(38498U);
    msg.setSourceEntity(79U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(87U);
    msg.p = 0.8805160197893803;
    msg.i = 0.5329302377685673;
    msg.d = 0.5198542798544057;
    msg.a = 0.6193488374124466;

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
    msg.setTimeStamp(0.2846669810354234);
    msg.setSource(39552U);
    msg.setSourceEntity(197U);
    msg.setDestination(26114U);
    msg.setDestinationEntity(195U);
    msg.p = 0.8059550753462427;
    msg.i = 0.4431240411536539;
    msg.d = 0.9402696586286117;
    msg.a = 0.6658605901493431;

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
    msg.setTimeStamp(0.7247581212122518);
    msg.setSource(21276U);
    msg.setSourceEntity(143U);
    msg.setDestination(7710U);
    msg.setDestinationEntity(68U);
    msg.p = 0.17079162051903674;
    msg.i = 0.8077886008936466;
    msg.d = 0.04102028568178362;
    msg.a = 0.1503948599579159;

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
    msg.setTimeStamp(0.2804818195879718);
    msg.setSource(38608U);
    msg.setSourceEntity(70U);
    msg.setDestination(23672U);
    msg.setDestinationEntity(81U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.021663503809035367);
    msg.setSource(64704U);
    msg.setSourceEntity(109U);
    msg.setDestination(34917U);
    msg.setDestinationEntity(127U);
    msg.op = 94U;

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
    msg.setTimeStamp(0.22181889028474466);
    msg.setSource(4839U);
    msg.setSourceEntity(185U);
    msg.setDestination(8909U);
    msg.setDestinationEntity(147U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.17003585851256464);
    msg.setSource(42226U);
    msg.setSourceEntity(166U);
    msg.setDestination(33485U);
    msg.setDestinationEntity(159U);
    msg.timeout = 8862U;
    msg.lat = 0.816154172447239;
    msg.lon = 0.7420161656445822;
    msg.z = 0.8059595821450241;
    msg.z_units = 125U;
    msg.speed = 0.12267709076558031;
    msg.speed_units = 191U;
    msg.roll = 0.3545325718189476;
    msg.pitch = 0.7021536865846923;
    msg.yaw = 0.783057645820249;
    msg.custom.assign("VKLOAAIAFAKYEYTCSRZDKGEJSQPUAYOXSQYVBMYYVRWXPAQPOXODFDWBCEYGETUYTZOKXLWFIOMXRMUJXDKXIBANPZFLJJCNCLNDOPMBGXVHZIRQSIUGRHOKTZUF");

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
    msg.setTimeStamp(0.7785120240340824);
    msg.setSource(22248U);
    msg.setSourceEntity(209U);
    msg.setDestination(19377U);
    msg.setDestinationEntity(141U);
    msg.timeout = 3536U;
    msg.lat = 0.7179971053954077;
    msg.lon = 0.6281409277699942;
    msg.z = 0.10182403934949646;
    msg.z_units = 46U;
    msg.speed = 0.5157182748068414;
    msg.speed_units = 222U;
    msg.roll = 0.30592592994929824;
    msg.pitch = 0.43170979627848627;
    msg.yaw = 0.37576012263673886;
    msg.custom.assign("ZGALKNVKSCJOJHMMBMCVZZHMODKBODWVMRFGPNJYHBAXUIXBOIULLTJXCNUCSTDMPPEDJDWIERSMJFKPNTLQBPWUZURFCVNDXIDELWAEALFMVRUIQEYNOLPWIPZFFJTZOOQIETLBIVMNZCHWQCGHNXGPQVOMNYCUYEBFERVQXSZLUAVFZGOWGYYVXDBGASOKUAKTPXBJGIICRYRQAQSSSAYHXNZRFBKSHLHCWDGTEJAKRQYKDS");

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
    msg.setTimeStamp(0.7621189293216639);
    msg.setSource(38714U);
    msg.setSourceEntity(229U);
    msg.setDestination(17529U);
    msg.setDestinationEntity(27U);
    msg.timeout = 1389U;
    msg.lat = 0.5769543921880976;
    msg.lon = 0.3429852497496222;
    msg.z = 0.17235065065991295;
    msg.z_units = 230U;
    msg.speed = 0.18430798683100869;
    msg.speed_units = 214U;
    msg.roll = 0.5711240978884919;
    msg.pitch = 0.728754374204355;
    msg.yaw = 0.8101573041412412;
    msg.custom.assign("STCDTMTBSUOKZFCRKGTLUIIGDFLRNDFMYUYSRLSVIPDPNKAXLAFRYHCYUKBYAEJHEPAFOHHJAWZMRUVCXWPOLQREOTPLX");

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
    msg.setTimeStamp(0.41770141920990866);
    msg.setSource(15564U);
    msg.setSourceEntity(252U);
    msg.setDestination(56731U);
    msg.setDestinationEntity(240U);
    msg.timeout = 10521U;
    msg.lat = 0.2381873640041714;
    msg.lon = 0.12009714349372902;
    msg.z = 0.6084566631737041;
    msg.z_units = 57U;
    msg.speed = 0.32105923206890874;
    msg.speed_units = 31U;
    msg.duration = 61302U;
    msg.radius = 0.7716489981096015;
    msg.flags = 93U;
    msg.custom.assign("KPLRBLMVJZSBPSVVFQVWTQHKDEEGCBRKBSMLQVEAOPZQDJFKBSOVCPWUEEPRLRNZIIQDXOOKHNETEWGGLYZB");

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
    msg.setTimeStamp(0.1446052684625453);
    msg.setSource(1748U);
    msg.setSourceEntity(20U);
    msg.setDestination(11241U);
    msg.setDestinationEntity(15U);
    msg.timeout = 61929U;
    msg.lat = 0.0571535802658778;
    msg.lon = 0.6359205517762156;
    msg.z = 0.05493260367995301;
    msg.z_units = 185U;
    msg.speed = 0.7629592748399011;
    msg.speed_units = 29U;
    msg.duration = 56078U;
    msg.radius = 0.5253203979854346;
    msg.flags = 207U;
    msg.custom.assign("BKFXMCMEZGYQOGCNAYZERYTFQFRCJISYWNXTUAJAAXTJOPJMDAEFQEDMHRPINDIZSBSNKHZDHMUBWYLKUMKERNROKKLJNBJVFDEHOEOPPPZTELVJRUNRGMIUDTYYOWXAKLGGFLSHDOX");

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
    msg.setTimeStamp(0.061064013955466234);
    msg.setSource(53268U);
    msg.setSourceEntity(137U);
    msg.setDestination(54201U);
    msg.setDestinationEntity(132U);
    msg.timeout = 62828U;
    msg.lat = 0.9024322081742236;
    msg.lon = 0.11389126240870184;
    msg.z = 0.6890527977287356;
    msg.z_units = 234U;
    msg.speed = 0.25024305698398364;
    msg.speed_units = 154U;
    msg.duration = 468U;
    msg.radius = 0.8726644876736599;
    msg.flags = 100U;
    msg.custom.assign("DPRLSDRZXULWLIKCWAYYZFWDQIEJTEFKKVIUOPXCOJILSNALBSJARWMKZCAZMMEVOEBPJBBSKXNOICHKBMHHUUZJWVXQTPQYCHKSGNHYJCCEYXATXDDENQMAHFQGXVNZAVASXULFTCILVDIUOTJNNLZNCHFLKUVRSFNEKFWUYBHASRWMHPBQYPTPBXMHIPSLDOTEAWTRGOGYPMWZNTGJWXIIFVGFRDORQQ");

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
    msg.setTimeStamp(0.6385468243466401);
    msg.setSource(21739U);
    msg.setSourceEntity(181U);
    msg.setDestination(9906U);
    msg.setDestinationEntity(254U);
    msg.custom.assign("CPWWUVNSEJQYUXBZJRRLHLBQFNDIPXVISKMIPVCWZAXGVMGGSWYMODSZIYKFBDSCXCUBJTQIIOESFSXHOLYFGCETNKLOFBUOQJBGNHPRZZCUOLXGS");

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
    msg.setTimeStamp(0.41316394807297807);
    msg.setSource(45885U);
    msg.setSourceEntity(113U);
    msg.setDestination(43210U);
    msg.setDestinationEntity(149U);
    msg.custom.assign("CLXRTLVZXAFOLFGVNOUMSNSDYPAFMAFEKQGPQKTNPSABMHUDAIQWMETENTIJQHOUBBFWYDGLZBWJSWSYIIZJSNPXZZSYKOWMLDNQNFQRRMASPCDNMEZCVJHUROXAIRFLRIEEDKWJQTVGZXOGVVJBUIDKHWYCBQC");

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
    msg.setTimeStamp(0.38341237018078633);
    msg.setSource(17035U);
    msg.setSourceEntity(220U);
    msg.setDestination(44380U);
    msg.setDestinationEntity(160U);
    msg.custom.assign("LVWISBHMBEWLAQBKDCMGOGSDTECUWPLAOZIYQEVDLIGOSUASMKFOIFZROYUJQZHFYSIXQFEPNVLCRPYZJQCJAHSUHKMNTKWPGEKXGAPIVEHDARHYRJHKZQHNUMBVYKYXZVUEZNTUCJZTELANROQOWHFTTNDQNQTGVGTPIXIJBMLEHFJMNIKTITDSVQMCRBJVVWNXWLXGSBGCD");

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
    msg.setTimeStamp(0.6034182941118669);
    msg.setSource(48031U);
    msg.setSourceEntity(19U);
    msg.setDestination(10121U);
    msg.setDestinationEntity(80U);
    msg.timeout = 5510U;
    msg.lat = 0.6136288843727836;
    msg.lon = 0.622282772169351;
    msg.z = 0.23240915735010526;
    msg.z_units = 2U;
    msg.duration = 39071U;
    msg.speed = 0.13972040229061355;
    msg.speed_units = 131U;
    msg.type = 45U;
    msg.radius = 0.46700994411822705;
    msg.length = 0.40303491319784446;
    msg.bearing = 0.7891247914931315;
    msg.direction = 111U;
    msg.custom.assign("MRCAURAWYMTNUDXDMGJWXMYXVRSRNZHANAWWRZVWNQSHUEGCMKEHBKTHOWEPDLPNYUBGPPGFCMUHPOLGCFGLIBBSXMUCGSSVMQPO");

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
    msg.setTimeStamp(0.45459077802606873);
    msg.setSource(12176U);
    msg.setSourceEntity(107U);
    msg.setDestination(53996U);
    msg.setDestinationEntity(96U);
    msg.timeout = 59511U;
    msg.lat = 0.11608663163745869;
    msg.lon = 0.08966277011477797;
    msg.z = 0.8439258848002995;
    msg.z_units = 33U;
    msg.duration = 46798U;
    msg.speed = 0.45255456549847384;
    msg.speed_units = 223U;
    msg.type = 19U;
    msg.radius = 0.6039683171445169;
    msg.length = 0.24339978167879062;
    msg.bearing = 0.11347450534636605;
    msg.direction = 17U;
    msg.custom.assign("UKCVCSQDZXIARZXGXLJBUBQMPULIY");

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
    msg.setTimeStamp(0.6701682406647453);
    msg.setSource(49734U);
    msg.setSourceEntity(180U);
    msg.setDestination(23884U);
    msg.setDestinationEntity(116U);
    msg.timeout = 9241U;
    msg.lat = 0.8529261454583782;
    msg.lon = 0.48032333798136206;
    msg.z = 0.17405217922442306;
    msg.z_units = 8U;
    msg.duration = 22756U;
    msg.speed = 0.28411805847117033;
    msg.speed_units = 239U;
    msg.type = 243U;
    msg.radius = 0.4380233424836115;
    msg.length = 0.6740570789941104;
    msg.bearing = 0.8840017189450571;
    msg.direction = 120U;
    msg.custom.assign("BZURLLTTHKVACFRKMUCPSWXEWBBDYTFTBVIDYFTESKAGAVHKRUAPRVIFPTGSYDMLFFEM");

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
    msg.setTimeStamp(0.9545571887882788);
    msg.setSource(52805U);
    msg.setSourceEntity(54U);
    msg.setDestination(52022U);
    msg.setDestinationEntity(252U);
    msg.duration = 56257U;
    msg.custom.assign("DXHNLVXIIQKDIXSAXVDERDRUKKEQFWHDHPEICGVZMMCTDZUHTLOQYPNQJRXAAXVEYWNSFDKJFEWOQ");

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
    msg.setTimeStamp(0.5953898425794651);
    msg.setSource(63573U);
    msg.setSourceEntity(232U);
    msg.setDestination(30786U);
    msg.setDestinationEntity(43U);
    msg.duration = 45597U;
    msg.custom.assign("KKNQGADLMQUITNPYKCCOMTMRFKZFRYVYCSHRWLAWFXPZADECWWFSDBZ");

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
    msg.setTimeStamp(0.6388935390870293);
    msg.setSource(21443U);
    msg.setSourceEntity(98U);
    msg.setDestination(5457U);
    msg.setDestinationEntity(125U);
    msg.duration = 11956U;
    msg.custom.assign("TKXNHKONROSTTHRDWEEZRNVMVWUTR");

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
    msg.setTimeStamp(0.8975357844290649);
    msg.setSource(16253U);
    msg.setSourceEntity(211U);
    msg.setDestination(41637U);
    msg.setDestinationEntity(166U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.7428033735125266;
    msg.control.set(tmp_msg_0);
    msg.duration = 57753U;
    msg.custom.assign("FTSLMKAMDIDZVERRMBFCRWXODCYHAMJMTQGJEWIGEYGPUQATJPNRJEYFUNXKZYKSPFMEIZQWHWOUJFSEAYIBSRAEFXGAAPILGZWWHSKWYOEWCMMUFSIUXGTRJXXUNBWCOHYLDTNPGVAUHOQGIBLOQXBT");

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
    msg.setTimeStamp(0.7081510097698787);
    msg.setSource(59448U);
    msg.setSourceEntity(162U);
    msg.setDestination(15987U);
    msg.setDestinationEntity(221U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7870070336734432;
    tmp_msg_0.speed_units = 251U;
    msg.control.set(tmp_msg_0);
    msg.duration = 6049U;
    msg.custom.assign("LGJTXROOFWJLUAAIKSWFTMBUDDBZGHIPAKXDFEXXDCSGGJMYRVPUOQVZKKXPAHFHQBJMGVQBQAJVYEFMEQPACSLLYZBXPOKCTLFNGBUVNCPRUPHMADRIPVCUYUZFEAITHBKYOXGWLDJSWCGJVYXYZNHNDCWNNYDKEVTMSLSZVWOPIHQGVWDNBECZUQERTORQWNKJTIQITOEDZOM");

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
    msg.setTimeStamp(0.9207414755831234);
    msg.setSource(36339U);
    msg.setSourceEntity(175U);
    msg.setDestination(13710U);
    msg.setDestinationEntity(250U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.789089929925993;
    msg.control.set(tmp_msg_0);
    msg.duration = 38880U;
    msg.custom.assign("IPZNWIWCIJJDFCNHTKZUUGMWHZTPVQYLXRZWHOVSLBBXIJWJOAPHBEKENQLCBRANOWCMVGZMXITMPFDZCMCTYHJFALVRUSDKMETLHSLJYOOTHDXIRYZVELG");

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
    msg.setTimeStamp(0.7896018579174762);
    msg.setSource(60619U);
    msg.setSourceEntity(211U);
    msg.setDestination(15242U);
    msg.setDestinationEntity(38U);
    msg.timeout = 34632U;
    msg.lat = 0.5576449161805739;
    msg.lon = 0.49631177173442265;
    msg.z = 0.4679713470885002;
    msg.z_units = 120U;
    msg.speed = 0.9848486159849742;
    msg.speed_units = 156U;
    msg.bearing = 0.07491882690532392;
    msg.cross_angle = 0.5356759648099246;
    msg.width = 0.7080911455595496;
    msg.length = 0.5713750126155881;
    msg.hstep = 0.8110758294226345;
    msg.coff = 25U;
    msg.alternation = 36U;
    msg.flags = 11U;
    msg.custom.assign("EMDSZAUPPOVTCIXDTFORQXRJMBMHQWLVUGKLANZIOIYOWLTAETFIGQWKTRGRYRJQRSTKECYLTANQCVDVJVRQEZIXJKUCBZXODHFWQCZDUBJKNWJXJBSNIAAPTABSCHPVBKHEVOJQNNLYMWYOMEORMLGTZGEDEGKHSUFIZFAKCKHIPSZUERFBYWJPYX");

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
    msg.setTimeStamp(0.5569820462803152);
    msg.setSource(23038U);
    msg.setSourceEntity(125U);
    msg.setDestination(7858U);
    msg.setDestinationEntity(42U);
    msg.timeout = 46674U;
    msg.lat = 0.8218984294280581;
    msg.lon = 0.015060893661123842;
    msg.z = 0.9283647659218517;
    msg.z_units = 39U;
    msg.speed = 0.9274279080105838;
    msg.speed_units = 220U;
    msg.bearing = 0.08558879923545737;
    msg.cross_angle = 0.9917751377347517;
    msg.width = 0.3918557361652871;
    msg.length = 0.863460224781776;
    msg.hstep = 0.17042360491812614;
    msg.coff = 198U;
    msg.alternation = 207U;
    msg.flags = 10U;
    msg.custom.assign("KFKAJDPMIJHXUSQPMKBTZMELTCQBCPTYRICEEUVKAYWFZQHFVUXJMLWOSVFGFRROQGDFULGTTWQHKOGXNOVPGYMTHJBUDGIWEJYQYLHTPCBJWSADJPCTDCYZOCBQHZAGIOZSBXUEGYZRXEBNEGRXNLLTSDIJQTHWIXIKJWFHXNWBLLMENEPRPANWXZAKHNVFAVMBSZDJISDVKVUWSROLBCKIMEMRIYFUXYSSRRHPYOV");

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
    msg.setTimeStamp(0.08971654642664717);
    msg.setSource(26375U);
    msg.setSourceEntity(172U);
    msg.setDestination(19785U);
    msg.setDestinationEntity(75U);
    msg.timeout = 58921U;
    msg.lat = 0.9503840328296718;
    msg.lon = 0.03863755362333432;
    msg.z = 0.29228227555047936;
    msg.z_units = 225U;
    msg.speed = 0.7479994061484428;
    msg.speed_units = 198U;
    msg.bearing = 0.7062719287209663;
    msg.cross_angle = 0.27954555811812143;
    msg.width = 0.13856114863997615;
    msg.length = 0.019650020251528955;
    msg.hstep = 0.08734005494027286;
    msg.coff = 248U;
    msg.alternation = 98U;
    msg.flags = 65U;
    msg.custom.assign("VEOJBLTNGMHFIZPMJMYWYEZDSBCIQMTBXKPIXXXDUVZHJLZIXXEOSFCSBZJZHWPRVTFXDXREQDPQZCCTNGUKVMOWFNLIBUQBERJUWPSKLYYTUBKVRFCKQLYWMHMPTHACAGEXQIPYSOIKZNNBAHRYBDVPDVRXWOSZKRDWSKLPAKDTAJRHVAEGQWCI");

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
    msg.setTimeStamp(0.27647831064954775);
    msg.setSource(32882U);
    msg.setSourceEntity(5U);
    msg.setDestination(10566U);
    msg.setDestinationEntity(148U);
    msg.timeout = 35940U;
    msg.lat = 0.836152817940522;
    msg.lon = 0.6693121550856881;
    msg.z = 0.9938261480878977;
    msg.z_units = 16U;
    msg.speed = 0.7297123114312948;
    msg.speed_units = 63U;
    msg.custom.assign("XLYUQXUFOQBKQOMLESTZLHDIJJEZKRQAUQHVTIRAOTRIJYTURSSGIYXBMPIQRRGCLHWCWMGNDMRHZEUZTLGCSKXNAFBACXQDDFWEPEPVFKDBVHGXRLFPBABGIYCPVFWOKTGLNJBUANILORWYVF");

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
    msg.setTimeStamp(0.5748794315973038);
    msg.setSource(38917U);
    msg.setSourceEntity(161U);
    msg.setDestination(26786U);
    msg.setDestinationEntity(90U);
    msg.timeout = 61031U;
    msg.lat = 0.7498904455335885;
    msg.lon = 0.07596018096973056;
    msg.z = 0.023993661021043944;
    msg.z_units = 27U;
    msg.speed = 0.5699381377002334;
    msg.speed_units = 84U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.1805250366033624;
    tmp_msg_0.y = 0.6579941373462569;
    tmp_msg_0.z = 0.8931017029797169;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BXNXQHZFDCGNXOZTWLGYLTIOJOVJEBNUYZGDMNVILMZZGXUAVUQVVWIDRLJGTWRFTDDRKPOLVSOMBMETZOLENPFHLMKNABDCKHIKAHCQOSYIHGIFLKBGNPCYYJQEFJPUPONUFSQMMPPDZEQKMJEDWHLSQUSQKXAHGBBPVVKWNWZCCJOFMUZCAFAJSPGRTEWMJWASZFIRURRBDYUVLYWSWDSIHNXCT");

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
    msg.setTimeStamp(0.6166660571876692);
    msg.setSource(16064U);
    msg.setSourceEntity(159U);
    msg.setDestination(47316U);
    msg.setDestinationEntity(151U);
    msg.timeout = 14643U;
    msg.lat = 0.1468614939896682;
    msg.lon = 0.9153624058641736;
    msg.z = 0.8803805818969843;
    msg.z_units = 102U;
    msg.speed = 0.42023633937688476;
    msg.speed_units = 151U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.033672104801698466;
    tmp_msg_0.y = 0.9831407905961976;
    tmp_msg_0.z = 0.1460227754088298;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GUAXWYZJDVIRESDCFJDWAULHTSFJQHMPYJFWVMBBVRXNAZBDGKQWXKERTNXFIZWASACAQYNJMDAUMMFEXRGAOBQHKRBHTQDYPZSKXWTBAYWIZKZHSMOTODTMPUJNYDJZKMEHQSIFFVX");

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
    msg.setTimeStamp(0.6058178570736762);
    msg.setSource(43621U);
    msg.setSourceEntity(116U);
    msg.setDestination(52796U);
    msg.setDestinationEntity(4U);
    msg.x = 0.5009573887451034;
    msg.y = 0.0919033760484802;
    msg.z = 0.3437347980860994;

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
    msg.setTimeStamp(0.06381212219021015);
    msg.setSource(52769U);
    msg.setSourceEntity(197U);
    msg.setDestination(45695U);
    msg.setDestinationEntity(130U);
    msg.x = 0.7863471482520051;
    msg.y = 0.7959672511155503;
    msg.z = 0.9333057898922384;

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
    msg.setTimeStamp(0.41033040438385626);
    msg.setSource(27324U);
    msg.setSourceEntity(164U);
    msg.setDestination(1261U);
    msg.setDestinationEntity(70U);
    msg.x = 0.5705073108862542;
    msg.y = 0.09344020377562423;
    msg.z = 0.48866952156169907;

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
    msg.setTimeStamp(0.17106581545133792);
    msg.setSource(1766U);
    msg.setSourceEntity(60U);
    msg.setDestination(47691U);
    msg.setDestinationEntity(168U);
    msg.timeout = 43276U;
    msg.lat = 0.22349753280748041;
    msg.lon = 0.5370982978237944;
    msg.z = 0.808715850978099;
    msg.z_units = 24U;
    msg.amplitude = 0.21127317655897848;
    msg.pitch = 0.6907592711852791;
    msg.speed = 0.3416655236547511;
    msg.speed_units = 173U;
    msg.custom.assign("GYYAGSSFDRKTRVVDRDKETAAOCKBHBZLECAUBOQ");

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
    msg.setTimeStamp(0.4338153065936019);
    msg.setSource(61457U);
    msg.setSourceEntity(63U);
    msg.setDestination(31133U);
    msg.setDestinationEntity(241U);
    msg.timeout = 8638U;
    msg.lat = 0.5473873828052548;
    msg.lon = 0.8335834207919384;
    msg.z = 0.8347246316258415;
    msg.z_units = 249U;
    msg.amplitude = 0.6060028623687304;
    msg.pitch = 0.3721846168629859;
    msg.speed = 0.6727312203058317;
    msg.speed_units = 80U;
    msg.custom.assign("INTVEUXCBONHSOBYUYOBHLLMDZUGHEZAZJEGSEWQQZZGQEVERUJNMBKNFSPLJWHKQKHVDLYQIPPGGTORASTSVIMIDUAXIPCUSQJFVZNJWDQJINEWLZCSOENSFXLMPYTRCFYVWGGHOIBXKKKDOPPAYYWHASACSGRTAGRQRQFJWXMOJDK");

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
    msg.setTimeStamp(0.48901832497973385);
    msg.setSource(14523U);
    msg.setSourceEntity(139U);
    msg.setDestination(8000U);
    msg.setDestinationEntity(107U);
    msg.timeout = 9327U;
    msg.lat = 0.4280056522214494;
    msg.lon = 0.5091763628158331;
    msg.z = 0.9199517480745163;
    msg.z_units = 179U;
    msg.amplitude = 0.8104840790680286;
    msg.pitch = 0.05519788438880846;
    msg.speed = 0.21213784264179647;
    msg.speed_units = 61U;
    msg.custom.assign("WMKZOJEQMUONXCRVENQOLTKCUWCOIHIUSYBRIYBLIYZJAHUCXXDPLOUMIPWBZQFRJGSWWRS");

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
    msg.setTimeStamp(0.5753398492990179);
    msg.setSource(5951U);
    msg.setSourceEntity(97U);
    msg.setDestination(61630U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.0006835180198615509);
    msg.setSource(12325U);
    msg.setSourceEntity(50U);
    msg.setDestination(59795U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.06398483905239027);
    msg.setSource(18323U);
    msg.setSourceEntity(219U);
    msg.setDestination(60685U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.2582691557108042);
    msg.setSource(55257U);
    msg.setSourceEntity(187U);
    msg.setDestination(46865U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.6975503369927812;
    msg.lon = 0.49040214654090053;
    msg.z = 0.7544923676757771;
    msg.z_units = 74U;
    msg.radius = 0.11457802889500368;
    msg.duration = 21434U;
    msg.speed = 0.02039371358042985;
    msg.speed_units = 3U;
    msg.custom.assign("QZUEGTUSVACHZIKLWUXVWUXYFQGPQKEXBSNEVYKZAQKBRSMVJHIPFWEYPZMNYLZBDNSVAXBOKLAOCGFDIWTCMFVUMLHMTGYLUWGJCOZAJQNDKSKMNAIGWQOQKEYOUJPHDINXPXJVGFDCGRTSEJQVGTIXRNDWPHEBDRNHNDTYFAMXZYRUFYAHRZFHUBZSBIYLTPOECHKADLJBQSRRWOHXJVCARETTDCSXEKCBNMWZIIFSUTRILVWO");

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
    msg.setTimeStamp(0.38386677671340896);
    msg.setSource(48565U);
    msg.setSourceEntity(194U);
    msg.setDestination(8569U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.48220904528522623;
    msg.lon = 0.4256149683942497;
    msg.z = 0.17761579384500092;
    msg.z_units = 10U;
    msg.radius = 0.566482363403312;
    msg.duration = 12451U;
    msg.speed = 0.04281852880902748;
    msg.speed_units = 187U;
    msg.custom.assign("CNPQJHAPRBSWKFGGGRXQFDJGYGVCUQQNHC");

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
    msg.setTimeStamp(0.7444421968131619);
    msg.setSource(52029U);
    msg.setSourceEntity(9U);
    msg.setDestination(45597U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.6158308434266638;
    msg.lon = 0.869905035831356;
    msg.z = 0.3844843480215214;
    msg.z_units = 190U;
    msg.radius = 0.09210419485757404;
    msg.duration = 55777U;
    msg.speed = 0.23048058007405647;
    msg.speed_units = 95U;
    msg.custom.assign("IRMMTEZFWTLEDQKQTPLYOJDVCGWPJYQMNCHWCMWSJOCNYZQFAEKFUADXACJKHLADKGTYVXVYUAKFUZUQIDPTKJKYWFDR");

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
    msg.setTimeStamp(0.8248500274514255);
    msg.setSource(57684U);
    msg.setSourceEntity(253U);
    msg.setDestination(21336U);
    msg.setDestinationEntity(99U);
    msg.timeout = 22214U;
    msg.flags = 185U;
    msg.lat = 0.6490143994669574;
    msg.lon = 0.7505756999577026;
    msg.start_z = 0.003343058823302214;
    msg.start_z_units = 251U;
    msg.end_z = 0.9038167302256827;
    msg.end_z_units = 17U;
    msg.radius = 0.15151335091284313;
    msg.speed = 0.14207254785997814;
    msg.speed_units = 253U;
    msg.custom.assign("ANFDPSXGVLYOTAEQSCVISAIANUDTRFBGAQCHQVAJXYETZXFZAYRIFJPLDWEIMWDRDQWGCBCMIJUTBDYZSITLSPONFNWPGLOLUOWJKCXAHGRHZRMGEKPKQVKLSMWNPFHXCVSRLRUOCBJYOZJETMPNQZIKULUWXFUNGCQLOEHDRKHKUCDKBRWJTYJXVTNDGZGQMHOYSYJBOZJNGKI");

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
    msg.setTimeStamp(0.021429221969404);
    msg.setSource(47655U);
    msg.setSourceEntity(134U);
    msg.setDestination(36516U);
    msg.setDestinationEntity(64U);
    msg.timeout = 60258U;
    msg.flags = 64U;
    msg.lat = 0.7122946784250546;
    msg.lon = 0.7881101178453956;
    msg.start_z = 0.9586914622566985;
    msg.start_z_units = 241U;
    msg.end_z = 0.48332228273824285;
    msg.end_z_units = 70U;
    msg.radius = 0.46498301679612253;
    msg.speed = 0.578411907297136;
    msg.speed_units = 126U;
    msg.custom.assign("JEJSFTXHIBPTIAZZDZBMWDGTRQGOBVOCCXNIINKAIYNEYCWENFMLTXYERZVHSQVPHKJXHQFSQIPIXKADHALUWUEVIUARMQDGFRXEJBKHOSFGT");

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
    msg.setTimeStamp(0.4926892961325616);
    msg.setSource(62855U);
    msg.setSourceEntity(218U);
    msg.setDestination(59029U);
    msg.setDestinationEntity(52U);
    msg.timeout = 57942U;
    msg.flags = 98U;
    msg.lat = 0.22106142299391984;
    msg.lon = 0.36658433387629863;
    msg.start_z = 0.31792583331197655;
    msg.start_z_units = 79U;
    msg.end_z = 0.24900268734325937;
    msg.end_z_units = 73U;
    msg.radius = 0.22046566574375248;
    msg.speed = 0.8699420649389776;
    msg.speed_units = 84U;
    msg.custom.assign("LTUSWOSGTKXPEJCJDAYFZSOJDPAHSZXHAEDMZEKFOIMOGGBVHLPYZODEGUWWOBDUDAPYELXARYIDENUFFVGEFYYJWGCBTLRMTICVNCMCQDTBXNSCHIHMQWKWFVRLQABBQICWUNKZYJLZKDGVJUFXHERQNWJRTSIEUQGLSXBTNX");

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
    msg.setTimeStamp(0.9435239068109106);
    msg.setSource(31767U);
    msg.setSourceEntity(47U);
    msg.setDestination(36836U);
    msg.setDestinationEntity(210U);
    msg.timeout = 61578U;
    msg.lat = 0.3102929602405977;
    msg.lon = 0.29392584103728514;
    msg.z = 0.023077173331811696;
    msg.z_units = 28U;
    msg.speed = 0.19089519962913504;
    msg.speed_units = 121U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.002324450048479587;
    tmp_msg_0.y = 0.451856049042181;
    tmp_msg_0.z = 0.24913282139625814;
    tmp_msg_0.t = 0.6239198197580733;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AFWXRYSKPKXIXMNXBVTDH");

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
    msg.setTimeStamp(0.11148355339963611);
    msg.setSource(20497U);
    msg.setSourceEntity(115U);
    msg.setDestination(583U);
    msg.setDestinationEntity(21U);
    msg.timeout = 3398U;
    msg.lat = 0.6848641639840413;
    msg.lon = 0.20935474839073565;
    msg.z = 0.7645457370088242;
    msg.z_units = 176U;
    msg.speed = 0.8738807724025793;
    msg.speed_units = 179U;
    msg.custom.assign("WVDOJTQLNCCQ");

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
    msg.setTimeStamp(0.98425117573575);
    msg.setSource(3715U);
    msg.setSourceEntity(141U);
    msg.setDestination(20751U);
    msg.setDestinationEntity(67U);
    msg.timeout = 64472U;
    msg.lat = 0.17909049130042642;
    msg.lon = 0.7449930764375052;
    msg.z = 0.6801229202519663;
    msg.z_units = 182U;
    msg.speed = 0.41794787316764104;
    msg.speed_units = 249U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.14295698970254223;
    tmp_msg_0.y = 0.2784015612758073;
    tmp_msg_0.z = 0.8408998311910086;
    tmp_msg_0.t = 0.5424314055094294;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QUHHPOZXNPKTWTFGDJXLENZWUCUVXRVJLDXZOXAOMGLEUATGPPSULIAJSSPDIAJRVVEBKOQTFYFNIHRBMMBPMRGWKMYZHJKBTIQESETZADIPOJEISFAJODHGMHEHGKMTEYHWNHCXBGDASQCZZUFLCTYVZNWOUGSWRDONPJQKSOQVUOYBLCNMRFBJUFBWXLPIPCRUMZCTGKLDARCIYAEKVFYWWKIREXWYHSBSRQQLNDYVQTVVDFMNG");

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
    msg.setTimeStamp(0.8686097307015835);
    msg.setSource(45234U);
    msg.setSourceEntity(155U);
    msg.setDestination(47697U);
    msg.setDestinationEntity(238U);
    msg.x = 0.7272600289493482;
    msg.y = 0.46216171018861796;
    msg.z = 0.7277288641568391;
    msg.t = 0.6449103374519318;

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
    msg.setTimeStamp(0.6891342180255507);
    msg.setSource(1960U);
    msg.setSourceEntity(41U);
    msg.setDestination(33608U);
    msg.setDestinationEntity(79U);
    msg.x = 0.6190730985778294;
    msg.y = 0.21665441780778605;
    msg.z = 0.25703505459790466;
    msg.t = 0.4604114016805766;

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
    msg.setTimeStamp(0.4481147138204844);
    msg.setSource(12824U);
    msg.setSourceEntity(172U);
    msg.setDestination(17773U);
    msg.setDestinationEntity(206U);
    msg.x = 0.3914364181373332;
    msg.y = 0.43021393785626993;
    msg.z = 0.30738527001134464;
    msg.t = 0.6555450730160473;

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
    msg.setTimeStamp(0.02012520729781453);
    msg.setSource(53844U);
    msg.setSourceEntity(173U);
    msg.setDestination(38635U);
    msg.setDestinationEntity(227U);
    msg.timeout = 33851U;
    msg.name.assign("JGUSHYVXTYLUYLDZJSROJIQFLCCXHQKGDABKJHWTENSVIWJBPQTOYGHBFHKTBRVEIRYNNATDYODRYEEBFUNOOXJLXQSWDSGMEBQIJVAETUIRVCITLUSUALCGVCKKDVCPMHZMFNTHVLHJXDADGQKZLRXZRQZNGEZBSGSCPKOIAOTBSOEJERMNJFIPHBFZWFAAKMQVLMYIEUFRMGWWLCPDTZNORPQCZCPWKFNFUASBMPX");
    msg.custom.assign("ELGIVGMHKBMDNAXEMKZHRTBNAKNFAAPQDUAXZAQZESXKFVRWTJTYZUGWIXWKOALUOOCONKPPXGPDHGYQUJRIJBGYIUSICYSSERUKLFPMFKLVWFWTZUOQLDBNYJJZFYDJYJFWAIUBYCGKWQSNOLDQEFSMSVGENPPQXHZTYIHPNHFTPOBVLZDTCDHSCIBHNRLEBDUGCKHEXIMBVOCTYAHQRRJGJURMQWVXWFZC");

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
    msg.setTimeStamp(0.44550763107875335);
    msg.setSource(62223U);
    msg.setSourceEntity(128U);
    msg.setDestination(8429U);
    msg.setDestinationEntity(120U);
    msg.timeout = 5011U;
    msg.name.assign("TFJIFVNFGDVXPOVBDTWCZEKRZZXMCRHLEKZNTVIDYFDMSBPQMWWU");
    msg.custom.assign("POTEPZYXFLGIDFGWFDZPDBFULTGHKZMMJZARNFCJGQEVBXQCYBISEMWSCV");

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
    msg.setTimeStamp(0.5912884989819727);
    msg.setSource(735U);
    msg.setSourceEntity(6U);
    msg.setDestination(55373U);
    msg.setDestinationEntity(122U);
    msg.timeout = 20868U;
    msg.name.assign("QEXXBVQKHRDDICYCYSHSFLOPSIHJOQJZMZHAMFNGTBSFWAFUJ");
    msg.custom.assign("KJMYDAQNAGWKWSGGXQQJYFTXVJPVCFKAZYPEUMSORURJZFKTCXYDLDELQNSQGJXABCRAEVAWOPPIBECCVROYZCDNHSLMVSALSHFVTBARMN");

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
    msg.setTimeStamp(0.23554559257853613);
    msg.setSource(45936U);
    msg.setSourceEntity(188U);
    msg.setDestination(50516U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.42316378726003356;
    msg.lon = 0.26592529413238897;
    msg.z = 0.6478998488012331;
    msg.z_units = 122U;
    msg.speed = 0.6456253756998986;
    msg.speed_units = 79U;
    msg.start_time = 0.01618417641294767;
    msg.custom.assign("VIPEUIMHXKHHDSKMFMIVBBDOZVHPWH");

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
    msg.setTimeStamp(0.16286089004530324);
    msg.setSource(51163U);
    msg.setSourceEntity(229U);
    msg.setDestination(50468U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.8977910255881136;
    msg.lon = 0.7172293902030143;
    msg.z = 0.1365129041730978;
    msg.z_units = 234U;
    msg.speed = 0.3437161094704354;
    msg.speed_units = 150U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7397953292196934;
    tmp_msg_0.y = 0.9721793796580239;
    tmp_msg_0.z = 0.9940248738226934;
    tmp_msg_0.t = 0.7861021951631862;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7481612629381248;
    msg.custom.assign("VYXWTEMLVTGYHCQGTBPFZPEMKSISKVQRGTXKYDCWVTCKCRUXUUMUKXSWFCSWDLRJFEATPJYGGOQBVNISHP");

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
    msg.setTimeStamp(0.8829436388048374);
    msg.setSource(50108U);
    msg.setSourceEntity(190U);
    msg.setDestination(43758U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.3366591013146252;
    msg.lon = 0.6412589129016588;
    msg.z = 0.8046200297535058;
    msg.z_units = 26U;
    msg.speed = 0.4974713363006399;
    msg.speed_units = 182U;
    msg.start_time = 0.26582209664420586;
    msg.custom.assign("TXJVBTMVIMJUJGPTXNTEACBULKLPFKZVPXHGETSJVWYADIACRPXIAPVYBHZMOAZWKQCLYOQSSMGMNXPLWVUFWWJQHGUUYDVKQGDLYUTQFDBHYWLWYFMXFYXIZDUGUEZFMGHOFCHQRFOEWGVZTHAGLLSNMAONBMOSGSLFSUASESTJIWLCCRDEN");

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
    msg.setTimeStamp(0.0250388272626908);
    msg.setSource(46116U);
    msg.setSourceEntity(107U);
    msg.setDestination(18930U);
    msg.setDestinationEntity(94U);
    msg.vid = 62650U;
    msg.off_x = 0.013766879480256677;
    msg.off_y = 0.18911968004067337;
    msg.off_z = 0.19987897359008722;

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
    msg.setTimeStamp(0.37651636406771394);
    msg.setSource(13006U);
    msg.setSourceEntity(7U);
    msg.setDestination(17019U);
    msg.setDestinationEntity(251U);
    msg.vid = 19430U;
    msg.off_x = 0.30046756213602877;
    msg.off_y = 0.5310332293361679;
    msg.off_z = 0.8134267159424733;

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
    msg.setTimeStamp(0.37106986167511);
    msg.setSource(33245U);
    msg.setSourceEntity(233U);
    msg.setDestination(8218U);
    msg.setDestinationEntity(228U);
    msg.vid = 48826U;
    msg.off_x = 0.31599657970232664;
    msg.off_y = 0.9248525887849537;
    msg.off_z = 0.03118401676192084;

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
    msg.setTimeStamp(0.30199593292473736);
    msg.setSource(24434U);
    msg.setSourceEntity(44U);
    msg.setDestination(1103U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.2940333142874124);
    msg.setSource(59955U);
    msg.setSourceEntity(32U);
    msg.setDestination(11947U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.3886164195740518);
    msg.setSource(4735U);
    msg.setSourceEntity(111U);
    msg.setDestination(10781U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.26123505634239097);
    msg.setSource(62746U);
    msg.setSourceEntity(162U);
    msg.setDestination(6407U);
    msg.setDestinationEntity(197U);
    msg.mid = 65134U;

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
    msg.setTimeStamp(0.8841734160019926);
    msg.setSource(37707U);
    msg.setSourceEntity(169U);
    msg.setDestination(35078U);
    msg.setDestinationEntity(199U);
    msg.mid = 22997U;

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
    msg.setTimeStamp(0.8151414269714388);
    msg.setSource(57860U);
    msg.setSourceEntity(46U);
    msg.setDestination(7850U);
    msg.setDestinationEntity(74U);
    msg.mid = 31924U;

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
    msg.setTimeStamp(0.975616463276013);
    msg.setSource(38052U);
    msg.setSourceEntity(226U);
    msg.setDestination(36783U);
    msg.setDestinationEntity(219U);
    msg.state = 124U;
    msg.eta = 47498U;
    msg.info.assign("GNCJZTKVVDFCKYQJNJOZJLPWOKFUWQBXMUXKHEDIIGKNYEKNYWUEYGBKSUHFPEYZSPWIAIVUNDRJTOTFICGTFRQFAMBXPXXJHFMDODRIGNHZTITVNOSECEQVTDOLLPMQLECSTIDQAUUAVYCJMKDSXCWUAEKASDZQFJBYZXBEPGRJPZLGYHQBNPZRBTWLHAXBISHRXMQRDMFWSNPXMKWLVB");

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
    msg.setTimeStamp(0.21686726212992646);
    msg.setSource(53300U);
    msg.setSourceEntity(187U);
    msg.setDestination(52220U);
    msg.setDestinationEntity(128U);
    msg.state = 197U;
    msg.eta = 39091U;
    msg.info.assign("UNWUCBHDWEXELCAAARHPMIHKZNQRPVNXTOZHJREWLTYZQHVPFAFDIRGWDIVGLTZTBXYEPBBBOSUSJYZMUUCEMCWMDCWDECIWHLQLODDOYPSIQ");

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
    msg.setTimeStamp(0.29363165623790666);
    msg.setSource(41802U);
    msg.setSourceEntity(3U);
    msg.setDestination(36232U);
    msg.setDestinationEntity(196U);
    msg.state = 123U;
    msg.eta = 1851U;
    msg.info.assign("IUZXZFEQUDFQFNDNHLXIMLMJKKJXBTMRVMPZVORDXYHFPHWVYHTTJVFBRWAKLDNOAI");

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
    msg.setTimeStamp(0.5705367688665123);
    msg.setSource(23042U);
    msg.setSourceEntity(12U);
    msg.setDestination(39619U);
    msg.setDestinationEntity(33U);
    msg.system = 53650U;
    msg.duration = 34432U;
    msg.speed = 0.8601898358715574;
    msg.speed_units = 220U;
    msg.x = 0.28553442640427174;
    msg.y = 0.6674846743207888;
    msg.z = 0.3626156912790446;
    msg.z_units = 35U;

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
    msg.setTimeStamp(0.24822958056832667);
    msg.setSource(62840U);
    msg.setSourceEntity(86U);
    msg.setDestination(48577U);
    msg.setDestinationEntity(185U);
    msg.system = 45087U;
    msg.duration = 10138U;
    msg.speed = 0.3428886563442297;
    msg.speed_units = 136U;
    msg.x = 0.028359921364096263;
    msg.y = 0.8254230079802152;
    msg.z = 0.9975252224938569;
    msg.z_units = 9U;

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
    msg.setTimeStamp(0.6601167605610659);
    msg.setSource(1627U);
    msg.setSourceEntity(219U);
    msg.setDestination(18721U);
    msg.setDestinationEntity(1U);
    msg.system = 52310U;
    msg.duration = 11846U;
    msg.speed = 0.8250205746327466;
    msg.speed_units = 174U;
    msg.x = 0.4686076122207713;
    msg.y = 0.2092094137507866;
    msg.z = 0.7156772469433383;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.4339027727219309);
    msg.setSource(47100U);
    msg.setSourceEntity(191U);
    msg.setDestination(40170U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.9761325627987932;
    msg.lon = 0.6294591218651338;
    msg.speed = 0.09139648769624209;
    msg.speed_units = 172U;
    msg.duration = 9134U;
    msg.sys_a = 42028U;
    msg.sys_b = 31746U;
    msg.move_threshold = 0.21830549762440454;

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
    msg.setTimeStamp(0.42577057245659355);
    msg.setSource(46963U);
    msg.setSourceEntity(171U);
    msg.setDestination(26004U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.543787603759989;
    msg.lon = 0.8866225607085365;
    msg.speed = 0.8124267301919808;
    msg.speed_units = 100U;
    msg.duration = 54743U;
    msg.sys_a = 18304U;
    msg.sys_b = 32256U;
    msg.move_threshold = 0.4983495559375659;

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
    msg.setTimeStamp(0.5061729095051043);
    msg.setSource(47136U);
    msg.setSourceEntity(143U);
    msg.setDestination(38984U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.9371708638666215;
    msg.lon = 0.8142140480136565;
    msg.speed = 0.4359414103493301;
    msg.speed_units = 132U;
    msg.duration = 27011U;
    msg.sys_a = 32163U;
    msg.sys_b = 34479U;
    msg.move_threshold = 0.618502423764088;

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
    msg.setTimeStamp(0.4760541769869674);
    msg.setSource(20416U);
    msg.setSourceEntity(231U);
    msg.setDestination(46525U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.6641381849833231;
    msg.lon = 0.6269840919281179;
    msg.z = 0.030230118092027802;
    msg.z_units = 213U;
    msg.speed = 0.1842651401983998;
    msg.speed_units = 128U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9921098885129883;
    tmp_msg_0.lon = 0.8032156108510508;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ZEJKVFLQBYCFGRQBSOBDMEISLMHITDCZGYMNGYAZ");

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
    msg.setTimeStamp(0.016570383222360707);
    msg.setSource(6655U);
    msg.setSourceEntity(178U);
    msg.setDestination(64923U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.4729890753134893;
    msg.lon = 0.0716189654003182;
    msg.z = 0.9004601219876361;
    msg.z_units = 194U;
    msg.speed = 0.8041634840147658;
    msg.speed_units = 198U;
    msg.custom.assign("YRUNZYJUHQSDWQGYMIYSZOZFKCENCGDEXGTFHBFQNYDFIHMEAETVONCFJKMCNSHQOK");

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
    msg.setTimeStamp(0.25992771408432436);
    msg.setSource(41895U);
    msg.setSourceEntity(188U);
    msg.setDestination(28852U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.5599448616887095;
    msg.lon = 0.7063108802043253;
    msg.z = 0.36165148340385966;
    msg.z_units = 212U;
    msg.speed = 0.03864950230237707;
    msg.speed_units = 143U;
    msg.custom.assign("ZIOJHSTVOGGMGCTELQDUEVWLURSJXMZMJBTNDGTXISSYYXADRYDGOQWMZJCQI");

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
    msg.setTimeStamp(0.3377373331380894);
    msg.setSource(40525U);
    msg.setSourceEntity(36U);
    msg.setDestination(12119U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.10413042990082466;
    msg.lon = 0.8118577680653877;

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
    msg.setTimeStamp(0.12821098561020494);
    msg.setSource(5214U);
    msg.setSourceEntity(47U);
    msg.setDestination(49109U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.3901894520703675;
    msg.lon = 0.9590730827096844;

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
    msg.setTimeStamp(0.9548046770185891);
    msg.setSource(11777U);
    msg.setSourceEntity(215U);
    msg.setDestination(33502U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.028666421176827606;
    msg.lon = 0.6171091483224339;

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
    msg.setTimeStamp(0.49456854237661885);
    msg.setSource(15600U);
    msg.setSourceEntity(179U);
    msg.setDestination(57446U);
    msg.setDestinationEntity(247U);
    msg.timeout = 48616U;
    msg.lat = 0.44094593142965366;
    msg.lon = 0.5080255954261549;
    msg.z = 0.5027494437497805;
    msg.z_units = 3U;
    msg.pitch = 0.9881812602747749;
    msg.amplitude = 0.7500078641082449;
    msg.duration = 23290U;
    msg.speed = 0.46377466867213635;
    msg.speed_units = 198U;
    msg.radius = 0.2427887332773092;
    msg.direction = 96U;
    msg.custom.assign("RKEXPJVKEWDBCVPHOURSWVXMLYZUJTIFIIWJFSYHAZGUDOFJMKZLRUISNGFTEFAGNQWHSJZOECGHDGADDQHNMXJOOCSDQGWRXHYMRPRWCUKNWHLEEPLXJJGGKYLBRDKAVNUVXNRQOLQFOMLZDPGRJIWSFGATZMTNUQHVMVKFXPEXBBQVIQBIZPZEZTTWYPEIYMPSCAKBBFSBIVASLQOBDNNMBCHUUOF");

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
    msg.setTimeStamp(0.15426883253398038);
    msg.setSource(10837U);
    msg.setSourceEntity(147U);
    msg.setDestination(27989U);
    msg.setDestinationEntity(111U);
    msg.timeout = 8285U;
    msg.lat = 0.7477279551418243;
    msg.lon = 0.23856064882204298;
    msg.z = 0.5415717139249082;
    msg.z_units = 75U;
    msg.pitch = 0.660151938125973;
    msg.amplitude = 0.15371380199980833;
    msg.duration = 64958U;
    msg.speed = 0.23404908230007915;
    msg.speed_units = 67U;
    msg.radius = 0.01845347474127812;
    msg.direction = 106U;
    msg.custom.assign("RLFOXFDDMNORZPXMHEUFLMLZRSOGMKSPDYGBZFPKNVAGNCTRGAKIHBAYEZIWULYWXDQQEPPITYVOLJJIDVPZZLKAIMQOJKHPACESEBCCDFRPUCBIWMHVRKLCGOSNQXSYCUFIHYMBW");

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
    msg.setTimeStamp(0.8067681369215017);
    msg.setSource(5000U);
    msg.setSourceEntity(128U);
    msg.setDestination(30766U);
    msg.setDestinationEntity(81U);
    msg.timeout = 26974U;
    msg.lat = 0.45506172530126154;
    msg.lon = 0.845687362475297;
    msg.z = 0.6894516470133543;
    msg.z_units = 172U;
    msg.pitch = 0.8790302716573354;
    msg.amplitude = 0.09928977610413647;
    msg.duration = 13223U;
    msg.speed = 0.3853964676716256;
    msg.speed_units = 12U;
    msg.radius = 0.46666822175904676;
    msg.direction = 97U;
    msg.custom.assign("JCJTMQIFMPIKOEEPBNKYNBUQIFQEJKTDRFUWBHXOFDAAUDKCJQGZLXQDQWWZWHPIMBJJBLAROMSFRNABMCRDVYHDROWSYFUCSWRSSTTPECTOUOCDWFCTOKFUPXVPBEXGVWRIQHHCNOFUIJERDLIQZXEXMLAVNSYRLAGJ");

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
    msg.setTimeStamp(0.38173678157349433);
    msg.setSource(25815U);
    msg.setSourceEntity(251U);
    msg.setDestination(3110U);
    msg.setDestinationEntity(72U);
    msg.formation_name.assign("YHAAOVCMSOJFBBUNCRBPFEDQBDQYWKRWEBAZJONALKVVIFEMLCMUVZNSZGKQUGFVXNDTGIZCRUVSNPDOKTDTXOFHNPCJVGSYMKWIQPXEBELEARMRHZQYVDHOEMLHYATZA");
    msg.reference_frame = 153U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38798U;
    tmp_msg_0.off_x = 0.5195412197443142;
    tmp_msg_0.off_y = 0.1359506208066611;
    tmp_msg_0.off_z = 0.6698830767960624;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ROBZEWMVTXALXNCFWZCJBBUWCFZKTQPPYFORWBUTSDUTISTNAWBYPCJAZVFNDXNKLMOTPDDAKNQLYVWSIOYLSORVJTNVXHNVYFGESFMKTALZWQMOZAZVUKUDLURBURNQNPZYLSCOPFOPRXYXEFIHBWVBDGIQMEJIUHMQEFDLRMKDZBCJECQIEKQHJAUHKASCWTHDXMSVHGTJJVGO");

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
    msg.setTimeStamp(0.782426549003038);
    msg.setSource(65327U);
    msg.setSourceEntity(55U);
    msg.setDestination(2818U);
    msg.setDestinationEntity(233U);
    msg.formation_name.assign("XCWUEBTHHVBZEMLBTXGMLDGBVBHARFQTKCSITHSRWDESYDSAKMKGZCDYOVIXUQURJJUVYHZKPGFYQXYAFIFDIUPNMWDZPKLXMGUBRFEKPJCQWXIUEJXRJQVWNGUAWYOYBZHG");
    msg.reference_frame = 60U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 57283U;
    tmp_msg_0.off_x = 0.4281585205785481;
    tmp_msg_0.off_y = 0.13401763855202609;
    tmp_msg_0.off_z = 0.7077239674637005;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WFUPDPIIUGHKEAYUIQEUHKNTYICONCITVMKZKHKLZEBOJYTCUIAEVEMLYQOZCRRAAOSKFWBMYTVSIGDGSDKWFXPXJQCWHBGJWZHLBQZXUDRPAMRGDTWPHGXOBZDYRULMUYTRXSGSJCJCLZKDGFLPXQVXWEUMMSFDXIAMYNWWJYFCQNHGPAAZROVTILBMECOFZNMSNPAVXJTBHSGJQIEFYFTJQDDPNQNL");

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
    msg.setTimeStamp(0.3615379290538452);
    msg.setSource(11286U);
    msg.setSourceEntity(15U);
    msg.setDestination(5164U);
    msg.setDestinationEntity(230U);
    msg.formation_name.assign("DFILQOOPZOQGNELOERAKOAFCSNNIMDWCTXPEEFGZAJSRCAW");
    msg.reference_frame = 88U;
    msg.custom.assign("WIVLIVFYVFCJRJBXMHCZXZEQCPHANYTDHQBQZMTYRHTPXXVWZ");

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
    msg.setTimeStamp(0.2692223023795889);
    msg.setSource(53312U);
    msg.setSourceEntity(253U);
    msg.setDestination(8606U);
    msg.setDestinationEntity(101U);
    msg.group_name.assign("HITXHDWVNFEXXFPJBKKAYWDWUFVAYHTKVBGHFZUURMFGQGBZEWAYAIKJWDKKXOEILLWZCVJFERLJWRDNVPOTPMTITDONNUYWZRAFPPASOSEFCNYQRSNWXXCULJEXY");
    msg.formation_name.assign("EBALAHAHYZHJSNONCFIDPXLJFDZXYLCSJMADPKPWZEBSVJXJRIPLLIRVVIGVRSUKLKNNUBBFLFXUEYVWLMPFQXCEUAGOVNCYWOFDSRQ");
    msg.plan_id.assign("JQVUOBILNTUBCRZXFMPJKGOTDHWBAXPGAOQXFCIQMJHRGZJXLFQFEFLWDJRSLZHTYOJUMFWHYIKDHTZWQSZLMOSOEJRSCREWXKZVZZBVRAMMTLRWEIYXRUDNQGLSFNCVAHKBCISGGQPGKZKGAVAKASVWXDXNYOYUFCWYMRQPIDJLHHSWNBDSBVTEQMZKPAOFUUNHGUJTMDUARYLEDWPABYVPIJITEPLEQDIOYKTBFUSKYVENPOXIPHCTVEX");
    msg.description.assign("GHURDFHZWUUQX");
    msg.leader_speed = 0.2771395785095091;
    msg.leader_bank_lim = 0.23696648315141522;
    msg.pos_sim_err_lim = 0.5263749519491612;
    msg.pos_sim_err_wrn = 0.5168268243056892;
    msg.pos_sim_err_timeout = 43861U;
    msg.converg_max = 0.6582521056319118;
    msg.converg_timeout = 61399U;
    msg.comms_timeout = 43119U;
    msg.turb_lim = 0.5336547089206719;
    msg.custom.assign("HZJTVMDVAYTMPYOIGXKYJSRJQFZBJLSFWRVXDCDACUIIYXLAKHGKMJORAEAQGRJCLUPPHDOPMYNFXFVEYFBTPWINWOVLGWLSTMGXZFBU");

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
    msg.setTimeStamp(0.4850757979484731);
    msg.setSource(45859U);
    msg.setSourceEntity(216U);
    msg.setDestination(39723U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("XMLRAMJKSRFBBYENVRJDSZVEVFJFWJXSVPYHJIGGPTEHMUFWZYRHCNDANKPHEOLNAVDEQTBJSAOQZOTTXSPCUSQUKXIXXTKAMWFQOHGIMNZKUSNQHZUBCDYBTPMCOUYZAIUVFHEXZRPHXWIRLHMNJAEKSTAWCOZGIHSMFKKQEBWLBPMLKPTLGGCVATWQITNCWGWCACYGYOYDDVCX");
    msg.formation_name.assign("UZTPOIBZEQXLGUFWMBQWNXNJFRYYEOSZFIKJXJSDFDCWODOEQPSRBEKADJULRYNZQTEUESMQTYPWZLHJSXLCOJSHYRKXKFXSFVRXYNBINIKRGIXJGLEGARKHXTWMMRAVARNPKMOCUKHJFZBVOLDQCDANSUVSPFLEIPKGWACNYZCQVACWLMJRHAGMVBDWDOPZIHVUEIMTUGOMFVGDTVYLBWLPAVCGIQTKNNBFWTUXB");
    msg.plan_id.assign("FLHSUIMFOCIXSUYYLKKHEWFOXNSSHJBVDXTTAKTNZB");
    msg.description.assign("FDGAMXWRMGFBHZXLQHMYVDFRAIBJILTGWDCWUFQBAPEGIJWINYQLJQONMLRPASHICTCRFTZEVPONHWWOSMSEKWHZPDMTKPFAGUBALYRCAYLPVEZETZDSKDZEDRHHAVGHWYUVJTBQGTPZOJYXFYKJEKOYWSKDRUXZCOPR");
    msg.leader_speed = 0.6828798733305155;
    msg.leader_bank_lim = 0.5063809268298692;
    msg.pos_sim_err_lim = 0.08261186739376303;
    msg.pos_sim_err_wrn = 0.4982247024615072;
    msg.pos_sim_err_timeout = 6921U;
    msg.converg_max = 0.2946306544900362;
    msg.converg_timeout = 57975U;
    msg.comms_timeout = 44997U;
    msg.turb_lim = 0.9875094003570559;
    msg.custom.assign("ENOUECDHJPCILWR");

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
    msg.setTimeStamp(0.9315382015535886);
    msg.setSource(61932U);
    msg.setSourceEntity(203U);
    msg.setDestination(27833U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("VZQWKJPJJXIASROTIFSLQZCAKNPGIRTQLSMTHB");
    msg.formation_name.assign("KUAFLWHXBHIRKEUKWRHAEWNVWHCHURKPOAGHMRRBEKNICHQPBQOIFJYIYUESRSNZMMIDMMKJYP");
    msg.plan_id.assign("NHRPLFOJAEFVRJYLQCFGRBOUDCCDIHOFQGTNJHLOTVVMRVDZPZSVBEYRQDSARISLBNKCELIWQNPTKHOQJETYEYOOTXYZGJPAHWWYPUAHYSJNRHWKNXDHZPUWQUWLMYWSRXZAKOXJVZZLXDFUTNWBVRPQGXEAIFVAWIVTAUSGUVILCJNMFMIPMFFQDNIXKYFUCGDCHBZKKOQAXGIEJSJUKOR");
    msg.description.assign("FKDTZONKLXXNEXRXNDFXCTCYBSIJJSLMRGKGMJHCZTQCDYGBHQVAJHPHIUQWLPIXHXHJBFEZJMTQTKEVMCWAMKBRKDWWIUTJUHUVYCNPAQSPKGOQREVUYYVLS");
    msg.leader_speed = 0.3317599133777899;
    msg.leader_bank_lim = 0.5455834322924117;
    msg.pos_sim_err_lim = 0.30830859843512703;
    msg.pos_sim_err_wrn = 0.7003960395642734;
    msg.pos_sim_err_timeout = 12970U;
    msg.converg_max = 0.46665004340269556;
    msg.converg_timeout = 29633U;
    msg.comms_timeout = 58588U;
    msg.turb_lim = 0.06601202990841704;
    msg.custom.assign("UTZUMCTSVCGYIGPNOWFCBUNGZSIMAGDXTGNRBWTEJAHYRBVESILOHOLRTNQFFDFMLHDIPCPRDPEOEXXRNORBUACJIXZQQZUSUHLOTZRQJXDGWSLBKDYQKJOLCAEXFMWUGMZXAYKXNEHVGIHGGPWHYWNDJFRZKERVVWKJADSVKZOTL");

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
    msg.setTimeStamp(0.2649329909473265);
    msg.setSource(31773U);
    msg.setSourceEntity(17U);
    msg.setDestination(4821U);
    msg.setDestinationEntity(79U);
    msg.control_src = 38535U;
    msg.control_ent = 28U;
    msg.timeout = 0.3169702879180514;
    msg.loiter_radius = 0.3464091799175909;
    msg.altitude_interval = 0.010722387153843993;

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
    msg.setTimeStamp(0.6870891418423567);
    msg.setSource(11206U);
    msg.setSourceEntity(253U);
    msg.setDestination(24321U);
    msg.setDestinationEntity(62U);
    msg.control_src = 54615U;
    msg.control_ent = 141U;
    msg.timeout = 0.1161235576648566;
    msg.loiter_radius = 0.0469455611236963;
    msg.altitude_interval = 0.9955128453763521;

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
    msg.setTimeStamp(0.7951671747030084);
    msg.setSource(27841U);
    msg.setSourceEntity(128U);
    msg.setDestination(33831U);
    msg.setDestinationEntity(236U);
    msg.control_src = 26118U;
    msg.control_ent = 46U;
    msg.timeout = 0.4201263549824914;
    msg.loiter_radius = 0.1656997555719345;
    msg.altitude_interval = 0.7076328589981599;

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
    msg.setTimeStamp(0.009642781379535448);
    msg.setSource(52571U);
    msg.setSourceEntity(174U);
    msg.setDestination(34035U);
    msg.setDestinationEntity(149U);
    msg.flags = 115U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6493114134086153;
    tmp_msg_0.speed_units = 113U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9292626498680838;
    tmp_msg_1.z_units = 52U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6490533973709217;
    msg.lon = 0.9686413544343335;
    msg.radius = 0.6866797281123164;

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
    msg.setTimeStamp(0.271966481246281);
    msg.setSource(3678U);
    msg.setSourceEntity(227U);
    msg.setDestination(31263U);
    msg.setDestinationEntity(28U);
    msg.flags = 147U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7568950589277224;
    tmp_msg_0.speed_units = 163U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.48615026241100034;
    tmp_msg_1.z_units = 67U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.17597137342249625;
    msg.lon = 0.9215168621373804;
    msg.radius = 0.6784172650566802;

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
    msg.setTimeStamp(0.5784610958319688);
    msg.setSource(51947U);
    msg.setSourceEntity(116U);
    msg.setDestination(31323U);
    msg.setDestinationEntity(78U);
    msg.flags = 99U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2053485226728773;
    tmp_msg_0.speed_units = 38U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9376774111265492;
    tmp_msg_1.z_units = 149U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.33315804028646;
    msg.lon = 0.026319808909158082;
    msg.radius = 0.45061409181193046;

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
    msg.setTimeStamp(0.7707767858381049);
    msg.setSource(62583U);
    msg.setSourceEntity(225U);
    msg.setDestination(62249U);
    msg.setDestinationEntity(192U);
    msg.control_src = 16687U;
    msg.control_ent = 205U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 52U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3870245322818592;
    tmp_tmp_msg_0_0.speed_units = 238U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8560405758859172;
    tmp_tmp_msg_0_1.z_units = 13U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8696005171838097;
    tmp_msg_0.lon = 0.7828045299942269;
    tmp_msg_0.radius = 0.33897170509205865;
    msg.reference.set(tmp_msg_0);
    msg.state = 224U;
    msg.proximity = 57U;

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
    msg.setTimeStamp(0.28318568604592964);
    msg.setSource(33332U);
    msg.setSourceEntity(194U);
    msg.setDestination(53034U);
    msg.setDestinationEntity(74U);
    msg.control_src = 55577U;
    msg.control_ent = 3U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 173U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.44840874997608804;
    tmp_tmp_msg_0_0.speed_units = 242U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9533481791697047;
    tmp_tmp_msg_0_1.z_units = 181U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4521212127042803;
    tmp_msg_0.lon = 0.14242024749606141;
    tmp_msg_0.radius = 0.4077110314423692;
    msg.reference.set(tmp_msg_0);
    msg.state = 202U;
    msg.proximity = 51U;

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
    msg.setTimeStamp(0.9104067091570756);
    msg.setSource(14297U);
    msg.setSourceEntity(100U);
    msg.setDestination(14556U);
    msg.setDestinationEntity(12U);
    msg.control_src = 42017U;
    msg.control_ent = 235U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 219U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6257480990928198;
    tmp_tmp_msg_0_0.speed_units = 247U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.48293665008037767;
    tmp_tmp_msg_0_1.z_units = 187U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9938746059990001;
    tmp_msg_0.lon = 0.7861439841200744;
    tmp_msg_0.radius = 0.15456475613329035;
    msg.reference.set(tmp_msg_0);
    msg.state = 62U;
    msg.proximity = 199U;

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
    msg.setTimeStamp(0.07982378831807302);
    msg.setSource(54809U);
    msg.setSourceEntity(167U);
    msg.setDestination(24118U);
    msg.setDestinationEntity(192U);
    msg.ax_cmd = 0.4364256552394128;
    msg.ay_cmd = 0.9501597328692665;
    msg.az_cmd = 0.10607835851545544;
    msg.ax_des = 0.16296215655495117;
    msg.ay_des = 0.046869487971008206;
    msg.az_des = 0.5342470158592888;
    msg.virt_err_x = 0.9943256054651772;
    msg.virt_err_y = 0.524785716400228;
    msg.virt_err_z = 0.7760991376320026;
    msg.surf_fdbk_x = 0.8340937689842856;
    msg.surf_fdbk_y = 0.16590500551093434;
    msg.surf_fdbk_z = 0.014724185380841526;
    msg.surf_unkn_x = 0.803259548479919;
    msg.surf_unkn_y = 0.9910299981665575;
    msg.surf_unkn_z = 0.5495405023293027;
    msg.ss_x = 0.3487487040826005;
    msg.ss_y = 0.06951283309792577;
    msg.ss_z = 0.2282292862019547;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IVAQSBETOQQZNKMJYGLHDHQKXRZNEIJZOJTGUZZFPYCWMYMAVMPFNCEIDPALTCWSJCKRJXDRBWHVMXJDEWEDTNDLWHNBLNWRCHPQWLHGGCDEMIZMAXAYFKRIRTGITPWKTWUBUCFJHNUGUUBHOXAMUVFIECDPQOYOEOFBLFAXKOCXTOLAPGXRVYNSZKKPHNZBUVSVYTPDSSQJFUAOMSGYIBXJQTXZFPEMYCRZIVQBGDNULESKAJ");
    tmp_msg_0.dist = 0.10647115840137777;
    tmp_msg_0.err = 0.27656016778250925;
    tmp_msg_0.ctrl_imp = 0.6477094275109131;
    tmp_msg_0.rel_dir_x = 0.17111815045400713;
    tmp_msg_0.rel_dir_y = 0.32271884573287113;
    tmp_msg_0.rel_dir_z = 0.0049500451938740975;
    tmp_msg_0.err_x = 0.9786128126734172;
    tmp_msg_0.err_y = 0.05401103391020745;
    tmp_msg_0.err_z = 0.5734441067672471;
    tmp_msg_0.rf_err_x = 0.35390072232899816;
    tmp_msg_0.rf_err_y = 0.7795062190116304;
    tmp_msg_0.rf_err_z = 0.06413538271675867;
    tmp_msg_0.rf_err_vx = 0.9309279325027127;
    tmp_msg_0.rf_err_vy = 0.2823858287173747;
    tmp_msg_0.rf_err_vz = 0.4429998176333584;
    tmp_msg_0.ss_x = 0.6654103177101277;
    tmp_msg_0.ss_y = 0.8956751482569756;
    tmp_msg_0.ss_z = 0.3308642407283703;
    tmp_msg_0.virt_err_x = 0.9897483988203446;
    tmp_msg_0.virt_err_y = 0.3608108350992716;
    tmp_msg_0.virt_err_z = 0.49672448358155774;
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
    msg.setTimeStamp(0.15366826369434328);
    msg.setSource(12695U);
    msg.setSourceEntity(250U);
    msg.setDestination(50705U);
    msg.setDestinationEntity(16U);
    msg.ax_cmd = 0.4832759310401733;
    msg.ay_cmd = 0.6771032979552764;
    msg.az_cmd = 0.7083697518672631;
    msg.ax_des = 0.25404115326152366;
    msg.ay_des = 0.42039513164560527;
    msg.az_des = 0.06410022647165647;
    msg.virt_err_x = 0.5619219572493096;
    msg.virt_err_y = 0.5300055649251033;
    msg.virt_err_z = 0.1356124981661182;
    msg.surf_fdbk_x = 0.1462530534564005;
    msg.surf_fdbk_y = 0.5034863037051268;
    msg.surf_fdbk_z = 0.1851265777675577;
    msg.surf_unkn_x = 0.5202068712403294;
    msg.surf_unkn_y = 0.43317609679090074;
    msg.surf_unkn_z = 0.8775977941543122;
    msg.ss_x = 0.6161461897228446;
    msg.ss_y = 0.23440317112545273;
    msg.ss_z = 0.11386605639697978;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("VGQXPKHSMJQFYMVYWSOTEDHCBDJHUJMMYLWGZEMSSUALBKKOIKFCDEOTVVXSFWPJRDSRWQOSOABEPCRRJVHXBSALNPGSUCTVQTNNEINLTRIFORWMVEFZVLEOKNPALCVEDKGKDBILBIRXKGENXJUYWIZFQTWJTMXJYDYFHAAIGZZUBVPPPYHURBCTCCQKIXOULPNRCZHCWSUGXZDGBOOUUJTFYBWXD");
    tmp_msg_0.dist = 0.9754827059872285;
    tmp_msg_0.err = 0.11874821258249513;
    tmp_msg_0.ctrl_imp = 0.9724499800267967;
    tmp_msg_0.rel_dir_x = 0.8854357531032407;
    tmp_msg_0.rel_dir_y = 0.849880203310162;
    tmp_msg_0.rel_dir_z = 0.9445926944326023;
    tmp_msg_0.err_x = 0.9499138384367509;
    tmp_msg_0.err_y = 0.959070460578786;
    tmp_msg_0.err_z = 0.4170420510356786;
    tmp_msg_0.rf_err_x = 0.7854465416421843;
    tmp_msg_0.rf_err_y = 0.11036922828946816;
    tmp_msg_0.rf_err_z = 0.011165157369070533;
    tmp_msg_0.rf_err_vx = 0.6190016566251563;
    tmp_msg_0.rf_err_vy = 0.525464140094921;
    tmp_msg_0.rf_err_vz = 0.04423264758569545;
    tmp_msg_0.ss_x = 0.8841521560228712;
    tmp_msg_0.ss_y = 0.18315333840870396;
    tmp_msg_0.ss_z = 0.8108211946176246;
    tmp_msg_0.virt_err_x = 0.2979883358386739;
    tmp_msg_0.virt_err_y = 0.06316787180856198;
    tmp_msg_0.virt_err_z = 0.2048569588818624;
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
    msg.setTimeStamp(0.6809366033958978);
    msg.setSource(57306U);
    msg.setSourceEntity(8U);
    msg.setDestination(43385U);
    msg.setDestinationEntity(198U);
    msg.ax_cmd = 0.7706512330055288;
    msg.ay_cmd = 0.4699440641828777;
    msg.az_cmd = 0.5146282732142189;
    msg.ax_des = 0.9327615760263785;
    msg.ay_des = 0.08622226927921972;
    msg.az_des = 0.7700551765259368;
    msg.virt_err_x = 0.786312002192251;
    msg.virt_err_y = 0.26863921555371306;
    msg.virt_err_z = 0.5411386060012668;
    msg.surf_fdbk_x = 0.9454063913644156;
    msg.surf_fdbk_y = 0.8012234574688833;
    msg.surf_fdbk_z = 0.7047226295171913;
    msg.surf_unkn_x = 0.8658667123548417;
    msg.surf_unkn_y = 0.04732806916077348;
    msg.surf_unkn_z = 0.1566468905700239;
    msg.ss_x = 0.7630350011616931;
    msg.ss_y = 0.8242899880657101;
    msg.ss_z = 0.8199843638925436;

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
    msg.setTimeStamp(0.06732857904787715);
    msg.setSource(34909U);
    msg.setSourceEntity(123U);
    msg.setDestination(17842U);
    msg.setDestinationEntity(251U);
    msg.s_id.assign("BEKLEBDKVTTETAXZJZILUVCPHRKANGJHJPOBWZZMMSUZJSEQCSHVBZVRXJQKVDHPPQMDKTGWUBCROJAVFBCMIUOCRLQJUBRDOHAKCKPWCNIU");
    msg.dist = 0.6354679902527606;
    msg.err = 0.43984871166122586;
    msg.ctrl_imp = 0.16374330794573166;
    msg.rel_dir_x = 0.026053903186369576;
    msg.rel_dir_y = 0.3047182001563977;
    msg.rel_dir_z = 0.09555268508533177;
    msg.err_x = 0.8264987873428539;
    msg.err_y = 0.5314559600579575;
    msg.err_z = 0.6723900109261312;
    msg.rf_err_x = 0.37106777144477376;
    msg.rf_err_y = 0.6500295518903648;
    msg.rf_err_z = 0.5821874747143444;
    msg.rf_err_vx = 0.7639766636798009;
    msg.rf_err_vy = 0.2596972082932464;
    msg.rf_err_vz = 0.17305478573928101;
    msg.ss_x = 0.1432456345172991;
    msg.ss_y = 0.9980342124365856;
    msg.ss_z = 0.6625529881458507;
    msg.virt_err_x = 0.24896821723671836;
    msg.virt_err_y = 0.853726025643846;
    msg.virt_err_z = 0.7247617940301632;

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
    msg.setTimeStamp(0.7692479927924251);
    msg.setSource(59745U);
    msg.setSourceEntity(48U);
    msg.setDestination(16018U);
    msg.setDestinationEntity(219U);
    msg.s_id.assign("FRBKBDIUADAJEMMSAQNPCNKTQXKN");
    msg.dist = 0.44920305114140846;
    msg.err = 0.6181799270000476;
    msg.ctrl_imp = 0.3935507304703093;
    msg.rel_dir_x = 0.41871969999149283;
    msg.rel_dir_y = 0.8391232518885139;
    msg.rel_dir_z = 0.22709622699193288;
    msg.err_x = 0.2295299108775546;
    msg.err_y = 0.2953725056118527;
    msg.err_z = 0.5193058080312616;
    msg.rf_err_x = 0.6525561672059009;
    msg.rf_err_y = 0.5301083728932489;
    msg.rf_err_z = 0.3167116739446194;
    msg.rf_err_vx = 0.29999880190274697;
    msg.rf_err_vy = 0.6707038484918704;
    msg.rf_err_vz = 0.955351450286083;
    msg.ss_x = 0.9755300375549583;
    msg.ss_y = 0.6106113046488377;
    msg.ss_z = 0.05501950293972435;
    msg.virt_err_x = 0.3905533941407243;
    msg.virt_err_y = 0.44399759872515376;
    msg.virt_err_z = 0.16898648292338414;

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
    msg.setTimeStamp(0.5706911547772807);
    msg.setSource(30941U);
    msg.setSourceEntity(45U);
    msg.setDestination(59572U);
    msg.setDestinationEntity(159U);
    msg.s_id.assign("FTDNUKZSXKYTOZUKBAFRKHBSXYDJTYHITWLCHXNFWIYMMGQTJPHZSFKACLFSWRFDUNCTEBBPAPYZZMENQLCVAGHUKIJGE");
    msg.dist = 0.49899716465279287;
    msg.err = 0.8217069210854034;
    msg.ctrl_imp = 0.10800020855869796;
    msg.rel_dir_x = 0.268820697981479;
    msg.rel_dir_y = 0.13050119536118843;
    msg.rel_dir_z = 0.7115641103914964;
    msg.err_x = 0.7991106654988449;
    msg.err_y = 0.5521499099021789;
    msg.err_z = 0.02739039533704446;
    msg.rf_err_x = 0.42005767805830874;
    msg.rf_err_y = 0.014382531477751925;
    msg.rf_err_z = 0.8386871109408666;
    msg.rf_err_vx = 0.7763402053376373;
    msg.rf_err_vy = 0.8006821202691319;
    msg.rf_err_vz = 0.3798045275717762;
    msg.ss_x = 0.37448859561887693;
    msg.ss_y = 0.06461810304698756;
    msg.ss_z = 0.8146898459544605;
    msg.virt_err_x = 0.6182235178173572;
    msg.virt_err_y = 0.7219828325180384;
    msg.virt_err_z = 0.5082205916479271;

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
    msg.setTimeStamp(0.9111388561195078);
    msg.setSource(18672U);
    msg.setSourceEntity(106U);
    msg.setDestination(32509U);
    msg.setDestinationEntity(254U);
    msg.timeout = 31938U;
    msg.rpm = 0.49062820643914096;
    msg.direction = 12U;
    msg.custom.assign("PLSBFGJGPYUQNQRMHHPMDICAYQPBJVEUIFMAEISURGYLNOBWEHSSAEVLEZQMCWZDRIKBQHATJGZJQOHKVUUYTRODMVSOBZKZHEYFDKTUYNAVCMTGDLXJIXBSCZWOOEOFFWIFSYBKTDVTTGYRLRPKDWCCRTLXXDIACTWVGMQNILRLCZNYQE");

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
    msg.setTimeStamp(0.27923690024638126);
    msg.setSource(42776U);
    msg.setSourceEntity(244U);
    msg.setDestination(61878U);
    msg.setDestinationEntity(42U);
    msg.timeout = 19030U;
    msg.rpm = 0.36467605805873926;
    msg.direction = 66U;
    msg.custom.assign("OMOQDMSGGECNFHNRJGAPHOJXTEHSAFVQYJDWNSXTAGCRFUBBPWWNZJPKFVDSHMJWREKDARPJJKSRFLNWKYVGPINHRVHZTDKQLCHLFVMM");

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
    msg.setTimeStamp(0.5710286734418721);
    msg.setSource(2578U);
    msg.setSourceEntity(230U);
    msg.setDestination(21518U);
    msg.setDestinationEntity(215U);
    msg.timeout = 19766U;
    msg.rpm = 0.6708869269399729;
    msg.direction = 182U;
    msg.custom.assign("YIZEFAYJLIVLDKCIZSNHFCUOZEPKXSVWVYHPFQXJHERFKSJNEICNDHRXUOKBDJCFZBTXETVMJWBWLHGALSVAVDRMTVGZGTWMOKHRDAKPIKMCTSBPQSOMQUNXYGCCMGLTLHQKWCGYEUNPEXELYAUYFNJZ");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.5554003812718868);
    msg.setSource(52732U);
    msg.setSourceEntity(80U);
    msg.setDestination(8891U);
    msg.setDestinationEntity(195U);
    msg.op_mode = 99U;
    msg.error_count = 67U;
    msg.error_ents.assign("XKEMTRZELDEJYKRMTMZGLNGOSNIEBTBVDUXWAZRPAWTMTAFPSVUKJOEPVYVCHLXTHFZSASSFORDHJWYDARTIOVOFDNWWXSJTIGIUNHRQGKLAHCCBQWKGSWYNRYLLTHVEUGRCHUBGTYJMPPGOXOQGOFDMPFHI");
    msg.maneuver_type = 35903U;
    msg.maneuver_stime = 0.4697661539851753;
    msg.maneuver_eta = 65007U;
    msg.control_loops = 530414862U;
    msg.flags = 71U;
    msg.last_error.assign("CBBEAFWGCMOFXXQEQOMUBKOYIIVIJTATCBNVODEJLNYNSIPYOZDXJZUTRQUXRIMKMDDGXYMJJKNEILZYGFKNBARVEMTAQDUZOQAJEQBVTGBHSPFFZSURSXEJQGPWPVCNKENJLCTRGYKRMOKMOUQHWNHTWEWSPIPTPRALHLZWXFQBPAIWCZDSZWFHHKSBXGIBELUGDVNSSM");
    msg.last_error_time = 0.6482377640841733;

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
    msg.setTimeStamp(0.2767807284635757);
    msg.setSource(16656U);
    msg.setSourceEntity(244U);
    msg.setDestination(18911U);
    msg.setDestinationEntity(153U);
    msg.op_mode = 235U;
    msg.error_count = 218U;
    msg.error_ents.assign("CRMYJAKXNEJQMKYKFICUJXMWXALHJPZYBOWKQLOBXAIROIXVLSMYTZWVKUZHLPIFRTDSZESJBDQZUGJRMGCNFGGVGHPWSLEBDMSNKRYDOHFUQRQTOCLZCWTUAMLHCNOBONHTCIPJZYDQOIPAYVVBEYJDHBQIVSWFKDUZTLQEOKGEARCAWCUPNRDVWGLESNAMRNWRBUHFPSDGXEFXDPFNCITEZJMTOEQBXFG");
    msg.maneuver_type = 60541U;
    msg.maneuver_stime = 0.18796826610141693;
    msg.maneuver_eta = 46961U;
    msg.control_loops = 3036720664U;
    msg.flags = 73U;
    msg.last_error.assign("JUDGUWDCKKRBRNJVDTPAVJYWJWUIHYZRPJRQWOKIEQQODWQXBUUHENHRYRODABZYJZEGSPZZGNGLXOFXMYZIJTTBMCQVNZSOJBPXHFWIOPLGLFVNCYVUWQAWFSKTCXZPMNTSIALSCVRAFSKKJXCEFUYGTYSCPPNHXTWAELADWATAKTIHUOHEJMBDNMYFIUGEBZOZNEQMRSNVGCGQEVBMVPFKXADLXCDQFXTISCLMH");
    msg.last_error_time = 0.4359864981046143;

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
    msg.setTimeStamp(0.5004706230929304);
    msg.setSource(61133U);
    msg.setSourceEntity(156U);
    msg.setDestination(23266U);
    msg.setDestinationEntity(246U);
    msg.op_mode = 237U;
    msg.error_count = 141U;
    msg.error_ents.assign("MFDCBBWAYRYWPLRVCGWTQZVJXSBSTRKIORYDFXSJJYKESACGEUNHQLYQMLCPGSEMTKVSZFXQOTUWPQVQHUDMNAOPACZYGJFMEJXDPWCTJFPNAHNHFB");
    msg.maneuver_type = 40347U;
    msg.maneuver_stime = 0.9081751975483262;
    msg.maneuver_eta = 27116U;
    msg.control_loops = 4051240191U;
    msg.flags = 147U;
    msg.last_error.assign("KTNFVOCMAPFDFHIGFZEKQMBSGO");
    msg.last_error_time = 0.45792155453328354;

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
    msg.setTimeStamp(0.4625977827147826);
    msg.setSource(28659U);
    msg.setSourceEntity(187U);
    msg.setDestination(26183U);
    msg.setDestinationEntity(226U);
    msg.type = 245U;
    msg.request_id = 27592U;
    msg.command = 252U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 33281U;
    tmp_msg_0.flags = 222U;
    tmp_msg_0.lat = 0.872581902577632;
    tmp_msg_0.lon = 0.31870283742591277;
    tmp_msg_0.start_z = 0.9960922098076392;
    tmp_msg_0.start_z_units = 153U;
    tmp_msg_0.end_z = 0.32295478821291124;
    tmp_msg_0.end_z_units = 237U;
    tmp_msg_0.radius = 0.060773786702547516;
    tmp_msg_0.speed = 0.4603442885759613;
    tmp_msg_0.speed_units = 108U;
    tmp_msg_0.custom.assign("LKENMLCTJOCZXXYIJAMHOQFYPILYFEAJUPZBIOZARBMANDQNPDXQXNPUVIDNELHULKRFCOSANZGVAGURGYWWUNTLJJDGTSMKWJCCKRUGWBULFPQEUOVFAOZWISHNXTLWAXBIQGSFYEMYDMRGMVYTCNHGAEGOSREIIKTHSWURYSIOXFCYPSMZJDBQRXTQKKTXJZKHWLDHVSVZHNEQUQLPMSDKBBVCHFGWB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36342U;
    msg.info.assign("TVJVJBTWFELEWMLLFUSKUMNAGCUXYWPAVTTLVVRVGRXBQNMRXPCNCDOLBAPYKJJPFRTTAEFQMCRHUGDYMJPVQVKCBGXAISTSDQINIJYOZCWWIXJHBSFILYHPEJMTVHZMZIHSZ");

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
    msg.setTimeStamp(0.6075349420471904);
    msg.setSource(1696U);
    msg.setSourceEntity(125U);
    msg.setDestination(58783U);
    msg.setDestinationEntity(69U);
    msg.type = 45U;
    msg.request_id = 2877U;
    msg.command = 35U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 61328U;
    tmp_msg_0.lat = 0.4969888001719245;
    tmp_msg_0.lon = 0.744539189637543;
    tmp_msg_0.z = 0.7223437999106859;
    tmp_msg_0.z_units = 206U;
    tmp_msg_0.pitch = 0.3895372098812132;
    tmp_msg_0.amplitude = 0.6538055285476352;
    tmp_msg_0.duration = 56063U;
    tmp_msg_0.speed = 0.17754157813947846;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.radius = 0.7648352816718154;
    tmp_msg_0.direction = 138U;
    tmp_msg_0.custom.assign("FBVLUMRWUPOXEAHZOXSJBOZMXWUZGRNTBMRQVMEZPCQSIHGHEEPZXPGLMXBAQQLPHCTSHDCIDAYLUYVLKCVBFEGWNBDVNHEJLTANVJSIVRCFAMYBCJBICGKIEFRJMNYWRBOTMPIUSTCJPYOTOXZKLPSNQJNHFQZIQEDIDOGUZZMJEQFTTLKKUGHJPWXWNASOZS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 33670U;
    msg.info.assign("JSRFWZVGAKBONMUYJSXFFSRSVZWZAOOPQHGAXLTMCEEEZZCDMBVYUWMAJLJKGKXGPKPPOZNLEDDDHTXKCDQTAIWATTZNSMQDRONIYHXFDVULNMSCIXJAZLRLCYQMHHJQLSQPPUKMVVZBQHXAFSPCEKXUEJURYWNUIXHBBWIIBBJSXOQPFQCCRMEYMDWPTGOCKFFBUWPVDKBUOKNVLFTQVRJIREYOSUGGVGWEWRLY");

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
    msg.setTimeStamp(0.1747474017967623);
    msg.setSource(20968U);
    msg.setSourceEntity(223U);
    msg.setDestination(18418U);
    msg.setDestinationEntity(145U);
    msg.type = 136U;
    msg.request_id = 8736U;
    msg.command = 85U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 61500U;
    tmp_msg_0.control_ent = 226U;
    tmp_msg_0.timeout = 0.31854938583905135;
    tmp_msg_0.loiter_radius = 0.43927785996797275;
    tmp_msg_0.altitude_interval = 0.7119436600312874;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59758U;
    msg.info.assign("GZDBCRLKJDMPMNUEYYCIPSKWFUPJLOWKTQIECSLGINXQDYDJUNNGVJWQCKKXNFLQLAEIHQDTAASTYPTFIAXHCHKDXIEOHVSGPZSEMNSWQOVGCWXRMARWAZMPNLOAGOJRFGIGVLCGYBSLHZRVXZBUFUYQIUIYFKFCXGMVQJRVMXMBBHTRFLABZEBYMDSOZNSFYVLJBUEZTOOMNJVEX");

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
    msg.setTimeStamp(0.9601407340107718);
    msg.setSource(11470U);
    msg.setSourceEntity(161U);
    msg.setDestination(19360U);
    msg.setDestinationEntity(8U);
    msg.command = 197U;
    msg.entities.assign("DYKCTXFPCDULBCEVRDPNRLEYQOWFBSVAAICFDAXJOAQJEBMDSNWURMZSHHZALBUNLYRZWDYARPNGPVAGBZVOOEQKQFSMFKKIJLSZWEFVUHEXUGWFZHGXZLVROLFMGWNQOEVTENNTKXASCVURWJMKBTYXWLNCDZIGIROQUSPBJOTMHCAIOGBWYJEGUICTCLIPVNSHJIGIWEKTACB");

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
    msg.setTimeStamp(0.2248708137794393);
    msg.setSource(17398U);
    msg.setSourceEntity(146U);
    msg.setDestination(25752U);
    msg.setDestinationEntity(231U);
    msg.command = 141U;
    msg.entities.assign("GIWFUTQIADWZWXRTJSDCZSRFBFLHNOMOPVOPJOTXKBFCKYNGYSQZWQAGKAADUBMQODINTRHDLLAQHLEEMRCJHUVEJNFIMUJYJBOSCHRELZIUCKGXHIKQKBPYKTOZXEHVKGPSTRVMOKJOQZTVJAMMIDYGBUWHBQIZSSOXRPPVRVSIHLEYUGHLPXUPAYRVYNPMFILBYETBFLBCWD");

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
    msg.setTimeStamp(0.5417981589124251);
    msg.setSource(35457U);
    msg.setSourceEntity(39U);
    msg.setDestination(2533U);
    msg.setDestinationEntity(200U);
    msg.command = 116U;
    msg.entities.assign("ATLRJRPAYORHWWPHGUCXSZLJQIAIWHOVNUNQBRYBVAFSDJXFSLDZ");

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
    msg.setTimeStamp(0.79472295719644);
    msg.setSource(20771U);
    msg.setSourceEntity(5U);
    msg.setDestination(22784U);
    msg.setDestinationEntity(89U);
    msg.mcount = 74U;
    msg.mnames.assign("ZNBXJSPCIABLTPGQKJUZOYSPEDSIWYNNDZRJQCKMYCATBPFOVRJGMRHESLPBQRWXKDTSYHLJNWGIGTAVSCILKZAZMNECTXOWVLSJOHCZFAMUVPJUWBEXVVMHRQOQQHTDWGZDCZIRDXOFOEUJBYQVGFMLWEHDIGPFCJRULLCBWAIMN");
    msg.ecount = 96U;
    msg.enames.assign("HBGVDAHNKYSOEGTMSPBALLOBNIMVEHVRJUREUTHKAPKZYZRIIRZRGGGTTNQSCZYDEODQKXINYAWEPOPEACTOPRNLJBFYLHTFGSJUXOBLHCWZCHEXFCYBOMUBJKSAFCFUEGYDMUZKZSJHUXDMYVIBNSGLIRPIWDDAJKRAWFTQGOXHQPL");
    msg.ccount = 51U;
    msg.cnames.assign("PKFIEHRPBGFMGSPWSOYZXGINVYAYBMQJNTBSWSQJZBMIZDVRMTBUUAPPLVHNFVCZFQJCVZYLUBCLNZCNAMBXLAUTQKUYSMOJKKHPCOWDDFQJTOPHL");
    msg.last_error.assign("SVVOTENUHDEJNGKEWALARTQZYKVSYBUEYLOWXFPQWRUWWSKNHSDNQYIPCRYKTHVADCBJULQTFMKGDARNFYANTJILZEBVPOGLXAEHCKUGMARRCVHBMKRSPIQOEKPFYTXOHMIOGMJXTSUOBGCVYQLFZUGFWJVDGQTOCJUFCIWYAMIPDZQSMPKXFIPLZJBLABFQOZRZHSDXXYXUDTHNJIISSIEOEPZKJNRNBXCDNJWRZEFCPWHBZVACTMBXQ");
    msg.last_error_time = 0.2456034560606979;

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
    msg.setTimeStamp(0.3240755120197455);
    msg.setSource(23727U);
    msg.setSourceEntity(23U);
    msg.setDestination(37656U);
    msg.setDestinationEntity(42U);
    msg.mcount = 181U;
    msg.mnames.assign("GUUMPDFEXJRGKFMAFPQPDVUMBSVWFRRCQHWQYQRUYZONJUXDPWNYNTOMDJRALTFRQUU");
    msg.ecount = 9U;
    msg.enames.assign("STSEAOFATHKXNWWNZPSFMGKPRKSRGSBFJCCEDHVOFYWRGLFDWGHJUXUYTPWRYTTXWCBNASHMJIROVLVKFGACSYLEOKOLDNDZTMCBYUNEPDOQCHBPQXOBIHAKMWBZA");
    msg.ccount = 214U;
    msg.cnames.assign("CMPIKNWSEPXQAYZLMALKFAJSHQGIDOTYQUCLOVKLICYZHYHIBOMZCQCJZESQTHVZNPDZITFRVMDPEWTVWRQPFSNDODCMDFDNARAEQMUGPWXKGXVMGFGTJKNYUGNVWMMBLDANNJJQOUWSJXLXCHNESVFZKYOLEIOBUKREUZBUPXGZRKOGCTQHXXTRRBYESUJBYVYDYFBPBHUFRLMCIQKVJWGW");
    msg.last_error.assign("VZCNJNUUABISPORVVRLZQHETKCJIPOSGSWKVHAJDOZCEJYDSLEGIX");
    msg.last_error_time = 0.22167537020395467;

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
    msg.setTimeStamp(0.6095560987416785);
    msg.setSource(14937U);
    msg.setSourceEntity(44U);
    msg.setDestination(38482U);
    msg.setDestinationEntity(7U);
    msg.mcount = 203U;
    msg.mnames.assign("UMSCTWXFHOGNFVTEAQITXUZWPUCHVJCGZMGCKNDJIGCDIKQXUWHRUBSMLLNAIERCMNSRDXOQGGPMGTQEBJYS");
    msg.ecount = 13U;
    msg.enames.assign("VKAWBNFOVWFKQFMDRGQHSMCUXOXNMYAXTRIACWKCASTXGZNJRMKHIAIDISVHBKODMVRBCMVMNNFXIDJWABOHPMLNGCEQESFZDGYUZPFOOXYHRSHILTTVGE");
    msg.ccount = 148U;
    msg.cnames.assign("LOLFZLLFNRKZAILYLVBBTOIPNSEGXKTOGVIEDMJJGXIVBJRVKPJQKCZNSHDBSISWSSZYBHWUTYSDRJDCTPHQGHNCYMEVCWJHQKQIYTDYNZWUGHYCURKHFXFTIAVAUFVXEPGBCBIALPASOZATHYUDUODQLZUSKKX");
    msg.last_error.assign("DEVCDKYORXBUYTCUJXWVHFIE");
    msg.last_error_time = 0.7680974052405716;

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
    msg.setTimeStamp(0.4354943101825888);
    msg.setSource(64988U);
    msg.setSourceEntity(40U);
    msg.setDestination(2473U);
    msg.setDestinationEntity(57U);
    msg.mask = 209U;
    msg.max_depth = 0.2465576904597615;
    msg.min_altitude = 0.6792615156375518;
    msg.max_altitude = 0.5796030812072509;
    msg.min_speed = 0.4728418281142365;
    msg.max_speed = 0.4929104755500485;
    msg.max_vrate = 0.4468018194554253;
    msg.lat = 0.4611828483426038;
    msg.lon = 0.23672728676377486;
    msg.orientation = 0.4795578503230947;
    msg.width = 0.5061606992728911;
    msg.length = 0.05178500885838322;

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
    msg.setTimeStamp(0.5385302088814929);
    msg.setSource(36283U);
    msg.setSourceEntity(94U);
    msg.setDestination(19774U);
    msg.setDestinationEntity(136U);
    msg.mask = 27U;
    msg.max_depth = 0.39542940297510365;
    msg.min_altitude = 0.0426106904610325;
    msg.max_altitude = 0.6931745508964359;
    msg.min_speed = 0.04433367668721233;
    msg.max_speed = 0.3067616194822329;
    msg.max_vrate = 0.789761578944892;
    msg.lat = 0.12899149426869128;
    msg.lon = 0.6089267682973778;
    msg.orientation = 0.2926839289246804;
    msg.width = 0.09016887788193018;
    msg.length = 0.27589993319728334;

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
    msg.setTimeStamp(0.451305763650217);
    msg.setSource(22007U);
    msg.setSourceEntity(65U);
    msg.setDestination(35184U);
    msg.setDestinationEntity(182U);
    msg.mask = 10U;
    msg.max_depth = 0.9502021284835731;
    msg.min_altitude = 0.9504860940377114;
    msg.max_altitude = 0.2742705050579183;
    msg.min_speed = 0.25135460891424255;
    msg.max_speed = 0.38871481854685686;
    msg.max_vrate = 0.7676680361577585;
    msg.lat = 0.04547300570055457;
    msg.lon = 0.2515711023427486;
    msg.orientation = 0.8831168039064508;
    msg.width = 0.8743618463467274;
    msg.length = 0.4397108950520624;

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
    msg.setTimeStamp(0.4544934565047948);
    msg.setSource(46011U);
    msg.setSourceEntity(89U);
    msg.setDestination(40657U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.4539235211098779);
    msg.setSource(46843U);
    msg.setSourceEntity(159U);
    msg.setDestination(43839U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.9199932980662411);
    msg.setSource(35562U);
    msg.setSourceEntity(68U);
    msg.setDestination(41608U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.754769183888464);
    msg.setSource(26935U);
    msg.setSourceEntity(175U);
    msg.setDestination(10351U);
    msg.setDestinationEntity(73U);
    msg.duration = 46530U;

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
    msg.setTimeStamp(0.7721365939374653);
    msg.setSource(295U);
    msg.setSourceEntity(128U);
    msg.setDestination(1633U);
    msg.setDestinationEntity(106U);
    msg.duration = 34537U;

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
    msg.setTimeStamp(0.9989815580337732);
    msg.setSource(32667U);
    msg.setSourceEntity(133U);
    msg.setDestination(3800U);
    msg.setDestinationEntity(84U);
    msg.duration = 23206U;

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
    msg.setTimeStamp(0.764957273411175);
    msg.setSource(51012U);
    msg.setSourceEntity(11U);
    msg.setDestination(10114U);
    msg.setDestinationEntity(223U);
    msg.enable = 161U;
    msg.mask = 1108746529U;
    msg.scope_ref = 124685254U;

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
    msg.setTimeStamp(0.8718950595047362);
    msg.setSource(14634U);
    msg.setSourceEntity(230U);
    msg.setDestination(4446U);
    msg.setDestinationEntity(204U);
    msg.enable = 176U;
    msg.mask = 3394909119U;
    msg.scope_ref = 535339354U;

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
    msg.setTimeStamp(0.8469337147065559);
    msg.setSource(60363U);
    msg.setSourceEntity(237U);
    msg.setDestination(49731U);
    msg.setDestinationEntity(9U);
    msg.enable = 92U;
    msg.mask = 729537952U;
    msg.scope_ref = 1579719522U;

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
    msg.setTimeStamp(0.4207182633521209);
    msg.setSource(45439U);
    msg.setSourceEntity(96U);
    msg.setDestination(62890U);
    msg.setDestinationEntity(139U);
    msg.medium = 36U;

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
    msg.setTimeStamp(0.8565794420497921);
    msg.setSource(48823U);
    msg.setSourceEntity(235U);
    msg.setDestination(61528U);
    msg.setDestinationEntity(107U);
    msg.medium = 87U;

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
    msg.setTimeStamp(0.2113575242407173);
    msg.setSource(51829U);
    msg.setSourceEntity(222U);
    msg.setDestination(8113U);
    msg.setDestinationEntity(228U);
    msg.medium = 218U;

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
    msg.setTimeStamp(0.46097412823099004);
    msg.setSource(43867U);
    msg.setSourceEntity(111U);
    msg.setDestination(21550U);
    msg.setDestinationEntity(172U);
    msg.value = 0.9100366990553288;
    msg.type = 1U;

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
    msg.setTimeStamp(0.19685518209275177);
    msg.setSource(62007U);
    msg.setSourceEntity(15U);
    msg.setDestination(1933U);
    msg.setDestinationEntity(142U);
    msg.value = 0.9071515815300918;
    msg.type = 181U;

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
    msg.setTimeStamp(0.7409242149491292);
    msg.setSource(4262U);
    msg.setSourceEntity(80U);
    msg.setDestination(10712U);
    msg.setDestinationEntity(112U);
    msg.value = 0.5034040915438498;
    msg.type = 134U;

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
    msg.setTimeStamp(0.6209312758294837);
    msg.setSource(4817U);
    msg.setSourceEntity(135U);
    msg.setDestination(10093U);
    msg.setDestinationEntity(246U);
    msg.possimerr = 0.021450383641326898;
    msg.converg = 0.5585969720443735;
    msg.turbulence = 0.08955800659199442;
    msg.possimmon = 101U;
    msg.commmon = 184U;
    msg.convergmon = 29U;

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
    msg.setTimeStamp(0.029642343119760883);
    msg.setSource(20165U);
    msg.setSourceEntity(30U);
    msg.setDestination(42599U);
    msg.setDestinationEntity(212U);
    msg.possimerr = 0.22378749990671543;
    msg.converg = 0.6262320874784293;
    msg.turbulence = 0.2550562498379375;
    msg.possimmon = 133U;
    msg.commmon = 194U;
    msg.convergmon = 105U;

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
    msg.setTimeStamp(0.2761426452172441);
    msg.setSource(40133U);
    msg.setSourceEntity(119U);
    msg.setDestination(44761U);
    msg.setDestinationEntity(46U);
    msg.possimerr = 0.7755509542662102;
    msg.converg = 0.7068297172646055;
    msg.turbulence = 0.9829005542620589;
    msg.possimmon = 58U;
    msg.commmon = 186U;
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
    msg.setTimeStamp(0.6522406547304116);
    msg.setSource(33634U);
    msg.setSourceEntity(8U);
    msg.setDestination(14254U);
    msg.setDestinationEntity(203U);
    msg.autonomy = 225U;
    msg.mode.assign("QPTIAZDMMRXVCXCHGDAAEZYBOPLZXDQDOSUYBCSMFDLQMLGCRONJKNMWSBPSXQZWCZNZIAVNUZEHNJKCRKWYTPUCJVVQNJQMTPGSVRGWJJOOSSIRABWYIDDVGYPXHKXPEJIQERGTLRNHEFAGUXBLX");

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
    msg.setTimeStamp(0.6352493929858909);
    msg.setSource(25702U);
    msg.setSourceEntity(243U);
    msg.setDestination(51100U);
    msg.setDestinationEntity(176U);
    msg.autonomy = 126U;
    msg.mode.assign("NJOMFIKPOUTGVTVINNWPMHJHUWJMNFHTSDYECEXKYWHKDIL");

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
    msg.setTimeStamp(0.18193862029671104);
    msg.setSource(22259U);
    msg.setSourceEntity(95U);
    msg.setDestination(34219U);
    msg.setDestinationEntity(84U);
    msg.autonomy = 124U;
    msg.mode.assign("QOYIBXPCMISPMKOBDGTQQYVRVMQQRUXLXVYCULIWNAFJWPNGVXQNICHKPYEGJJRKTQKJLLMUHDPWERSOFZBTXEJFNCYNWPBBOVSGGOZCLEEMAFHWXDGHYAKITSTHHIMERTUDSAFDRUMYWKOBRHOPUVCLGKHLLJSSZREWKAAZUETGJMUTOIECJQZRBULMGWWZFNBVFLTYCUPCZYRBCPVHQA");

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
    msg.setTimeStamp(0.3258041264291123);
    msg.setSource(28590U);
    msg.setSourceEntity(80U);
    msg.setDestination(37640U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.6422909603912635);
    msg.setSource(30770U);
    msg.setSourceEntity(181U);
    msg.setDestination(42013U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.5896781938155552);
    msg.setSource(24396U);
    msg.setSourceEntity(124U);
    msg.setDestination(49141U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.48988694353518614);
    msg.setSource(63962U);
    msg.setSourceEntity(161U);
    msg.setDestination(51563U);
    msg.setDestinationEntity(33U);
    msg.plan_id.assign("UFRTDXEYKVXKMIPCFDQXSESEVOUPLFCUDJSWIYETPVUJWACRAMZZUWBBUBNXMPOVZGOOQOKYDNNHDIMAAILEXRWGNOCEYCPKYNBJDINVTLMZVOHUZGLSRZHXGZRBJLFYIBNMAMQYFRSPEIJAKRIWYJKHYDMPUHWQQVMNFIRGVPFXBSDHETNWKXGSJAXCLOVLKOSGETGHAJFFHTV");
    msg.description.assign("ZBLVLTFIADPLAFIRGYOAUVYCYNGPWZXBWDHQVWEUZMEXNYMZMTRCVOAPKUSCDUWTZPMYKHWIGUODWKWIMGLJOJANQJVNNVAUHJKTUVBSHQKYLQQBOLUJPPHWNLCEDHVCVDMITLOPHHQEMQKNFJEZG");
    msg.vnamespace.assign("AIKRQAHZROYIU");
    msg.start_man_id.assign("FQLJTQREPFGPANTIBPAKGMVBPXKSKJOWGULTNSUENSLWWEKZIBDVUDUFYVSLBCHBKEYAYCRLFTZJXGNIXHKLCVUZWOOUCHPPGOMSARWEKZQTORFMMFOLQNHIFYDVGXATSMCWDZIMIDLVEBDMAJZISYWFKNSLCQAVBZXXNFHQETDRDDVARTTNJXIRCNXSB");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TOJFCSCYKECTTFCYYJLFRNIOBJAXOLRSDUKPTGXGNO");
    IMC::CommsRelay tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6451551998816046;
    tmp_tmp_msg_0_0.lon = 0.10951486629823992;
    tmp_tmp_msg_0_0.speed = 0.41682313785255043;
    tmp_tmp_msg_0_0.speed_units = 75U;
    tmp_tmp_msg_0_0.duration = 41988U;
    tmp_tmp_msg_0_0.sys_a = 22205U;
    tmp_tmp_msg_0_0.sys_b = 42837U;
    tmp_tmp_msg_0_0.move_threshold = 0.12383374399319291;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BFIKYYNGYTSHRQYULZPWUPYPKNHRNAWMIJDPTMDEJMBTOKPCUIZGYVPCVZAGXBJGSOIAYIUTHDGOOY");
    tmp_msg_1.dest_man.assign("WWFUHMTQUGULAVDOKVGFMHFTARLZJZBYIJCZPNUPEINPITAHEYZRKUVKSYLSHHVWNKGLDZMTPJHJIWKTMWJLLDKJFZGNXCPHXOL");
    tmp_msg_1.conditions.assign("BQELUGAXTENCFSXVRTLRKOSOFHBBTJTTGXVNBEMLOUVZDKIQUDWWWOCGUPZRSPAZTQDENEIRRTXFYQNYYZCDKJFHZNDQZFALGEOGPDSMWUYLYCZEWJYEARSJHSBBQPFHSXMQFICJYLMVHQ");
    msg.transitions.push_back(tmp_msg_1);
    IMC::UamTxStatus tmp_msg_2;
    tmp_msg_2.seq = 17898U;
    tmp_msg_2.value = 141U;
    tmp_msg_2.error.assign("YVCVMEYFRRETBRRQMZWIZCLUQRMYJFKNLVPIZLDCMKOUIYSUOGINDHCDVXMXYGSTTJSCAZHAWPGLJFTGQKYOGNGQULXDJLZKUMPKXHLKFAOPEMTFTFSNIIXNUPPNKZJZAKYCOCGPLOOQVKOUSAABRCZERVDEGELSKYZHIYPNDSITANDJDMSDBDUARMWQWSHBCQGWOVZHRJFQBJIMHYEJXFVBXWPNH");
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.6289010127380205);
    msg.setSource(12151U);
    msg.setSourceEntity(194U);
    msg.setDestination(38138U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("XIUMNOHAAXFJFOZMRIPTWAVHTNVITVLHREYCVGGXBEWBUQPEXGUDGOGCIZNMKMEJTRCNNBRJMMKHSAPDJJPWRCUWEFWVPEMZ");
    msg.description.assign("MZEZGHTDIGUIQBVAVSUQYHRLQLAMXMTOOZGSEUHXFJYMBEWDPFIJBMWOPFBETTKGBVFSTACGSZPNQNJWLPMNGGQFVMBXTNUPZWFADHEZSGTNHXWKNQCVORSALYIUEEPPSVLVLQRQNKBPJYCTKDHNYVHYNRGJDVLUTCYCOODPAUFKKIQHZXECBWITUAIWAJRIXBYMWSCGJZRVEQJXRCAHSZWDFCDMKKXNYDXR");
    msg.vnamespace.assign("ZBOTKDAOFXOFIKKEKZDLQZMNCQDXPBIBHLXCWEAHYJJWGYBIHASGMRTRWOQFDJYMZLXKCDRMKMAJLVRMUPYZBWSSJPEEJHZVDVTSCUGITYQOCDSSPWGRXXTCHYHQAFIXNSKNOACNUUDVGFLEERGULPEMWRAGIPVBBPNYYNUHUZVVUOYJRXRGTFNICJTYKALHTOVVVXMMSDSPWAIGJTKGNPNOEDNFPLXEHBZQFZSUB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("AREKUUNWBTYIBNGBRMMNNNHVNCRJEFUAYHUUIQRZCSTJQ");
    tmp_msg_0.value.assign("CKEXVFXSRRCYYHXLIVNGAJTVLSJUGHJGEYYAINEMAWKKPMFPUNZTRANMPZUZVEXDWQFDHAISFPTDOGEDKWUUKHWFDQNNVOVOPRGTJBCXHFTZBDAAUQISPXBCFZWRCMEHIKBGEPRTXYWSMCYOXUBIWZKKNVJOMIWMJAXHDBSSMLYOLHYBDF");
    tmp_msg_0.type = 180U;
    tmp_msg_0.access = 175U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("OTEAHJQCYUNKLUKYHGTIEIPYGHHRZBJPLZMNQGWISEPKJUWBMFLLSSHCDPEJIXJIAUMMLOILALCPDOIWEDUUNCXFCSKIIXHRDNBYVEPTJBKIMQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("UCYTXXJMUDENYTICLQFVBVGWDVGCXLTQMXXRVQBTURONERQPI");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 25909U;
    tmp_tmp_msg_1_0.lat = 0.3112271308613783;
    tmp_tmp_msg_1_0.lon = 0.2771808172653616;
    tmp_tmp_msg_1_0.z = 0.62975330531958;
    tmp_tmp_msg_1_0.z_units = 15U;
    tmp_tmp_msg_1_0.speed = 0.5979496922952807;
    tmp_tmp_msg_1_0.speed_units = 248U;
    tmp_tmp_msg_1_0.duration = 4769U;
    tmp_tmp_msg_1_0.radius = 0.409697606981568;
    tmp_tmp_msg_1_0.flags = 237U;
    tmp_tmp_msg_1_0.custom.assign("YLETUGMLILIKMNVHSFOYFLKNIWTMJLMPSCFPTQKREVTVVXGTSHGFHZNEPXUCMUJLZOJBSEOGYYEIHGKWNJDVHWYAQJLMAQDBMRCVDXZVRDXBTWIPXNBJHXYDXWDSACDJIIHPSVQMFZYDRFNYBRG");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DevCalibrationState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.total_steps = 235U;
    tmp_tmp_msg_1_1.step_number = 66U;
    tmp_tmp_msg_1_1.step.assign("ZGRVXSLZPMKBCLNVTFXCBZZPUPUFLFKWSIIYMOCEHMIHDSFRWJWPIPBZREPVYJFVCUDVNORBYKOXGVCBTANNBXKHRJULSFVNKAVLHUIPGETNCOEEQLEKMSIJUTQWJITYMUUSQQAHNSRXFMOYQZRAMNOKRHGHMZXWLKIDQBEJZPALEQOTCFCYGBVGDWHAQOSYAWPUDSNZGDVACTTBJJBTIIJSZJODMGKHFWMCQDRXYKUEWWRQOYYEGLDDXAFGTP");
    tmp_tmp_msg_1_1.flags = 237U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::QueryEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("XVRIBRWUWGIROZAXJBMDOFYGKCILBUJBPDEGNLZETHSWMMYKYKEMNQRVJCCSAAZFHPWHDFTYUAYXGXESFKGOVTUXJLEJAJTALWLQKBYQNHEQYQFHGCDZHJZBXPACIOITSNRLWSYSCSUMLQKIAERVTCFVJGNLOWOYBTMORIVNAOQFMPCJLAPXXPZMKEGIBNNBCZ");
    tmp_msg_2.visibility.assign("KAWDKKASPQHJZPZSHITSZHLHHTEMGEBLDTFZJBFQYRJQOVFBCANVMORMMKZCYNACXARPPJZNMYQKCSXGHSYWWTWUCHRIOAWQYGOHVKBQQJUCWRLPSAEKEVGEJEBBCEMAUUJIWFTOPUNVOMSFRVVGTCLXJBGNXDBXQFBG");
    tmp_msg_2.scope.assign("HITEPQFPGUJLOWWCGYSZXOWNHASTHLJ");
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
    msg.setTimeStamp(0.15633307198640733);
    msg.setSource(31348U);
    msg.setSourceEntity(137U);
    msg.setDestination(51504U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("LCFRBWLXXNXZAKCKQWDBOWSVDDSNFMZPEQYODLYDLSKJJOCSZXQBOYWBIT");
    msg.description.assign("OVTFLEWLDKQSGSMCJRKWYHPUFYGZPKIONGOKCJWJDNZTDICFHAGHJWWSBOBXPYXMNMNHYAAZILDQAUHARMQBUVCILNRUBVHKQUUJBUOPBI");
    msg.vnamespace.assign("KGQWHDQOBXJMFZQLHDSKLMKPGNOWBCEXIRQZGYCFEYHHVDNTZXAHWOMJAWMJZSIYBVALYTWYCIBBNOVIUVBXTWHTGNVOOLUFNKKAXTURBCCQUFREUGPUTMWILXWDFKBRYPEIAJQJHEBZJCLVSDVFMVPMJDEQUEYBFWXISXFGHIDHNNTRKCVRUJCZZTYMOK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BPLJWQVSSUHWMOELRVCFDUSVHMRLZVETTEGAIOFKSFSQKWXYXBZKSXRCDOAJWYNGNBHWJNIOFZOWTECZMIAVMCGPDPDEGYAIZPTKUYRYJIDOFMKPPEOTXVYLXYAIENHLFUNCQMVBSRBBDQSMGUNAONXWERUFJSJPUVTKGIPHTGAZLITLDIHNDCMRYZJQBDQPYAHHXNWJJMYEFFZQGGUTKLPXQHZUCWGOCFSNRHW");
    tmp_msg_0.value.assign("PYIBAAJTMPDWSPBFQWYCLLJGUJVLRUOHRVITZGEUGUNUVNYPTMQGOKASRCXEOMYVUUIWERTGLDMXFIXIFEHQSFJGJTXHBNWQDJOZHDFDUIKQUCWFHEXKWODMAXJYJFHYHNH");
    tmp_msg_0.type = 74U;
    tmp_msg_0.access = 66U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KEPRKRCQOORQPQZZVIXUVFHNWYPIFEHWCFTKNBWEVHPXLIMRLAOCOKVBADMRDLJOMGLAEXEPKEGQUUUSUYOWGOMLQAILCDCEFQQYHKSVOIXFYPWBREJCGODWXJ");
    IMC::EntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("RBSLFZBQYDGMDZTWAOLJQUANROYEQIZHOQCIHRCWBJPBWPIGPXITIKNPLLXOGDRFATVOAGMKEZUNMKQFIOMYLZVFMSIDVSEQXBGMIKONCCW");
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
    msg.setTimeStamp(0.7476292247701046);
    msg.setSource(10303U);
    msg.setSourceEntity(183U);
    msg.setDestination(20305U);
    msg.setDestinationEntity(193U);
    msg.maneuver_id.assign("ZTQNXGSCZHMOLKMOLDZMUGOSYEEGJOGSJIIVSXKDTPYXWWOQWTXRDBEBLIMPBLTRYPFDMMLHAROFCEHRHCLSKQAFHLALJKBIFYNDPMEYORWEZJKPKFZWGBSAD");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.8110317326161522;
    tmp_msg_0.lon = 0.19977267281450273;
    tmp_msg_0.speed = 0.27527601766746224;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.duration = 47423U;
    tmp_msg_0.sys_a = 20559U;
    tmp_msg_0.sys_b = 13923U;
    tmp_msg_0.move_threshold = 0.6284755099590906;
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
    msg.setTimeStamp(0.2911114499669387);
    msg.setSource(11224U);
    msg.setSourceEntity(220U);
    msg.setDestination(35512U);
    msg.setDestinationEntity(83U);
    msg.maneuver_id.assign("ZROOSWQFXBXWUMVBDUIHPRLWFCRGVMEHSSJNOIUOQWRAVFSFNVJZUPCHMVQTTTIFJLAXQAKPUVJQANRDEJOPZHREBEDSXQUUFTZIPGPDGXKVTKOWTLOWJKMHFLSRWLMTXCCYZGSSFXEEPWSMWCYGXDOMYLALZKYHLNQ");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 13002U;
    tmp_msg_0.lat = 0.8676133903000189;
    tmp_msg_0.lon = 0.3917080829596159;
    tmp_msg_0.z = 0.9023724424425069;
    tmp_msg_0.z_units = 190U;
    tmp_msg_0.duration = 21119U;
    tmp_msg_0.speed = 0.784806444519312;
    tmp_msg_0.speed_units = 228U;
    tmp_msg_0.type = 241U;
    tmp_msg_0.radius = 0.6837660428709055;
    tmp_msg_0.length = 0.044603076651515305;
    tmp_msg_0.bearing = 0.47776889149756163;
    tmp_msg_0.direction = 123U;
    tmp_msg_0.custom.assign("SKPOUOZKHTIQEJVHKIGVCRMQFAWSHNTCWNNCMNBYPRLSMXOCSTFLQITOGEWQVTUXUPXMZXZTUCJMSMDCHYOYGIUAKJAYAVLWDAJPDSNOAEFGZHIFXFYOIZBNQQLSOEZDEBUWPNICBNB");
    msg.data.set(tmp_msg_0);
    IMC::SetEntityParameters tmp_msg_1;
    tmp_msg_1.name.assign("OUSFDSBMMGRYTCLXJJQDIVYIZTGNERRBLDZVWWOVEZMCEQIWTERUETIWJLOQJCNAFUOWHGSHFDJXXBFNIAMKJMIZGJKQLUEGGTXKVPHICLHKUFTSPNHFQMAXDQZOHCTHLBCPBQKAOAMRSXY");
    IMC::EntityParameter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("LJQSFHIVYUGWTVILESTIOSUVPLLBGPUDEDOQNNOXBZNZKUGZNKCFBPFZMCHEJJKCMGXPNAQGPHBMTIGDCUAZKRAUVUWVZOSWATNYNIGMPTAXUMYZNGOQJYQF");
    tmp_tmp_msg_1_0.value.assign("VFXUOWXGFGUNSHSWPXRLXNTBACKCJVEBCDQADITTNFKSUCSYMQBAIHRXACCWXQQNQOMTJDYWPCYJSASIBGBALDYKMFIGTIYVQZKUDDZPPLLGIOYHKUTIPXXDZBFXVOMAJZHOXNUVHCMGJLHNELYDKOMLEVMYSPHHDEZCREVFLRGJKRPUBQSSZLFMTHTERBIOQNVFFWZCAPZGRW");
    tmp_msg_1.params.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SetEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("MBAEKNGNTQZCTRKXFCEMMCSPPSIGQDRUTZGQHLHBYASCZLGGEZJCBNTLVCILPNXOKDTXVBGVXWGEKQUWQZJMJBBVDHONUHGFUSAHERTOIPKKIOALFLRWTEYLIAYCRVUKWONHEDWVZOUPVUMKMADRXYFFEDGSZTJIDUSXSJWISQDUMFTFBYARLBDAZINBAHYQPXGQXEPQLWAZOOWJRTHFEYCJMYNNCCQSMXOB");
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
    msg.setTimeStamp(0.7170346529828644);
    msg.setSource(43648U);
    msg.setSourceEntity(238U);
    msg.setDestination(38152U);
    msg.setDestinationEntity(7U);
    msg.maneuver_id.assign("MATNHQEVBRMTADZZTLPCHKTIXTZXAPHOZMLCGFESUSADPOZMFLLIOMKJYLNIFBRNKRWPSOMLNYYIQZLWVVEMFRWOAGZXVBBWHRTKUQNEHOUJOVMKPTADJIAWVPHGLKBTAXJCEDWNSLOVBQYSIUGYIBSPNUSQCCRYWWJFPADYEHUFHRUXXNIZ");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("QSIUDQBPGUOXFMJRZVZDKRXJZVKGJHXDNNWWDFWZQJDGFQEOUYIROGEYRVMPBYONSCESQERLKTHRVQYMCHXJPJFIOUOAFDVMRGLSTCTTAHWWKIPPODMLIEQSJAMBVGLCOMWNYYHKXTPW");
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
    msg.setTimeStamp(0.047813869599910186);
    msg.setSource(4280U);
    msg.setSourceEntity(5U);
    msg.setDestination(21638U);
    msg.setDestinationEntity(83U);
    msg.source_man.assign("JNETECFUMOKOSWQDTGYTIYSKRJUZNLKBQMHSZHSWCALKZQVGDLFUTTMJZCQVXKWYNMP");
    msg.dest_man.assign("DYYNNGULGTZADSTRPSJIVBVOGVKHJNKLJBSQEZAFTOCMKDYFQUBWNQXVZTWCLLZSDYNTUDADTIMCELSRXKCBVEDUPXIJYGVGLTRWPABHEEHQTWNMXISUAOXHQIDNFIFMCWVOKUHIARGVTRPOAHACNHZFKKUOWMXWQZKKURCNRWFGMEHNRZQCBGJMJYLRYOVLYXESXHIOPYAJIMPSRFIZWUJEEFCFE");
    msg.conditions.assign("IWAOVSRDYQFFZZDEHVDAZDHCJULHQNTRPRVKSHKBKMUQWFNAOHPUTLJEEXYNGYKRUOTYIOTYEFIGSTYLJIAUPBSFGDCCMKUCBKCJLLUZQRWSPNWBORPUQXAPMDFLOCHVVXHLWAYDVJGAWLCTOPDJXEMBXALFCFMCLGIIPNANDGIHVTQSJRAQHZMJIGGEBBNWXSEBVCPJXTBTVYQGNYIZEMQKMDEZQSRXVGOXRUWBRWMTIFKUJYZ");
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 123U;
    tmp_msg_0.reason = 22U;
    tmp_msg_0.value = 0.956481322274413;
    tmp_msg_0.timestep = 0.8724004628047313;
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
    msg.setTimeStamp(0.2006059589802086);
    msg.setSource(36552U);
    msg.setSourceEntity(67U);
    msg.setDestination(49368U);
    msg.setDestinationEntity(175U);
    msg.source_man.assign("ZXUVJIZVZOYGCIEFWCCEBIGEUPEGQBIURJHDNEYMDLARDETGEJFYOACAUOUVSYTLXZHKXORFQYWMDJGPWSZAXXYLBGKDWJZOIFWBVLATMHHKUUTKDRJCYGO");
    msg.dest_man.assign("DPIWKYODBPZSBOJUPBDFFFQGFKFIZJEZLMQYTQNSMUYIKZYNAIMJTCUIOGWIAQDW");
    msg.conditions.assign("KBUSEKOWAPQUTBDCOHPQWWFPMDENMYMYBADVWOUGELTUPSLLXIEHBZZLAMTJVHSXGPRNTIJYIIDFCPSXRZBFTLJUZRLOORKZORRMXFXHQZNZQGYUTXUTFKPWCNSPANRFGIBSQVRDZVMITVVDGNFSXNZWLUVDNIOPYLBWCVWQLPGJDKMNICAMJG");
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.8919894693656685);
    msg.setSource(60299U);
    msg.setSourceEntity(104U);
    msg.setDestination(57960U);
    msg.setDestinationEntity(244U);
    msg.source_man.assign("DRSZWNYAXKQJVNAOWZUFCRSDAFNHQDXSRQNLDYVQMMPGPBJGIZWTMIEKJOXOLXBUIYVSNBOJWYVYTUERZFMSOUIGTHEAKBWHEHEPLOTTQKCQRNNUXJPHPHK");
    msg.dest_man.assign("KICYZEEGWCHATKTEYYGAMWWGPWLPSSMSWBQGVANJKZOTHOZXSHFPDRGPLYRKHWOBJMKNDPIVDUHRPMZXLPXVBGQRZNLPUGXXNRYAFESQRKALVEIBDXTSFNATOCVNUOWJYCGNEUOGHXYZKFWTDCJQCKMYPRJUHFMBGJWSNCBRQDURIEFLRSMNXJISVVVTPJTVBJDXUQBZDQOLCMLA");
    msg.conditions.assign("UFWOQYYGDGQJBGQMISYLXULGEHXVZYQBVZQJHTPQPZGOUOHADZWSWKJEWUEPUXXDKIEWVUFQSXRVCLXRORGEFXJNISFZSAZFKCJKGTLACMLHBOKAWTDYOAIGLUJMNCTH");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 251U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("ULNIOSNVKYFXWUVECZKMHBIDMQDQPLXAWORQBSVZYKIQIDYDWPZMOUJAUVDGWOYKFJKFBNVHRZOKHIXGNYHRVZWAPEQFOESWHECBAEFGAOJRFYLTJNGUEFJQHKHZABRYFBLTXZLAEDOXSZAKNTPULWXSKDHTPGXBUWLCVUPYKEBBDAOFUNOQPYXSJDNMMJLIPDMCWTCXTCJXJCRTPGGPFIHMUVWMTTSCQSAGVZRSYREICQCMGMNGVBHRNJ");
    tmp_tmp_msg_0_0.description.assign("KHYZJVTRUNUFUNKPGKIOMASTEMVBSNXXOJTRYRNIBTHBJDPVBJCEWMPDDVACMPKMYEZZUGLNURBNLOXQLIVHBSHPRGLMJLSWGHIEQQYFFYKQMKWPRFFXPUFAFAEUTDCNCLHCJLLXQEFZBWTTROXCUWJUMN");
    tmp_tmp_msg_0_0.vnamespace.assign("HAWVVSGWRNRLHCQBNQWVNDTKYOBJFSUIJDQJIYSGZMKTCNVIARKYTDNNQOCDRDVZHELMCIUTXJZDWPOUNBTDBDXTKGLAKVZMSBSZJSP");
    tmp_tmp_msg_0_0.start_man_id.assign("DCVYRYBOPFRMJLNTAZMZMSBDAPJBGLHPOADCWKBQSNBBQWTNHEWKLGEMIEVAIFSFOONPQJCKMHBLTTTKSERMQMWRVNFIVPSBZIKJBZAUHONAWWMACRPPKLAYTOGYGRHFJXORYSMNRRCMBSGESODFVEEZNZISGZ");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("SSXGKDEDOXXWNQWNNOSBUIG");
    IMC::Teleoperation tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("LPJQWEGEWWZDSUNSNJOSMCTTKYFJGHFLIUXCROCMUO");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::IridiumTxStatus tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.req_id = 55166U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.status = 3U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.text.assign("BAWXTKMKUKIHAVGSRFUDOHONJNRIKXKMYZRMMLPGUXPVOLUOBDNZFHQBVZODCXAEBUWHSJIVCVFVVNMXIJVLUIECMQLXDFLXSTSRKWVZDONKFJPIHHICFUOZSTEQGYGXNRIRGWJYZJSTCQQCEPEAREMWGJGTOYZDQPEHBJKDWYPBYCSJBPDXYXTSFBDRMBBTMMHRHNAA");
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::SetThrusterActuation tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.id = 250U;
    tmp_tmp_tmp_msg_0_0_1.value = 0.33960294667035085;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.10163295047242438);
    msg.setSource(55433U);
    msg.setSourceEntity(135U);
    msg.setDestination(56362U);
    msg.setDestinationEntity(154U);
    msg.command = 18U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VHTCJBPHSALXRSSOOXZVAQIZFKLBWAANULXRXMHSHPLBENKEGJQGGMFCBGQDBPTEMZKHBCD");
    tmp_msg_0.description.assign("ZMXTNHHUDNBQEYAQISQUPSFXVVLOOUDKHWWWLIZRZQGPMMQVTRYJBGKHSEYEVFGIJSGLJGOMBTQJUIAKSVXRBTANOQWWKKTIYMKHXPXXEXXORACUSEHDFYKSUCOGRTWTDPDFPLABGAFWZCDBSOBKCHSNDPPIVTIQLLEVVRFCECTGDGBCOZABNHLQLPGVFUZNJAJYVZOMAKYPCUDNIURNYJIEMJRZJEMXWPIYHEOJ");
    tmp_msg_0.vnamespace.assign("SPKJNZDKTCNHKVZLSBJQHTHQWSRWWXYMDMHNFCPWAFZME");
    tmp_msg_0.start_man_id.assign("SKEVORJLUJMZQBVWQAHWTDFWCZCAUCELDMLVFCMBFDCYBORQOMZTHHAKPTUVADZBUQKDEWSMDIPBEYFAGN");
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
    msg.setTimeStamp(0.24440688432362367);
    msg.setSource(124U);
    msg.setSourceEntity(51U);
    msg.setDestination(63909U);
    msg.setDestinationEntity(200U);
    msg.command = 252U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QUUYWTJEZPWSLBXDHFFEGIDEXINIWHTJVDPQRAFUIZNDKDAKZOTFVRQMPBZQYUGFMHSDJYBZAONBKVXCBVVOSCNZKWFG");
    tmp_msg_0.description.assign("RRQAHLRZUBFFHJDUTPNRDZUUMWGXNQTKSCFSRYBSJDEMSYVXIEJSEECUNVQUTLVMOYBAIALKHCAKGRZXJNPDOGHLWFZZSHCIEOBOXNCEXQMLUETFSWVXAYLIULURJQFJLFUD");
    tmp_msg_0.vnamespace.assign("PVKDJFZUOMBPHRYEDLEHXNCBSBXIFQPGBZOPRFJHGHTJWIMBSOTLYDQQDWGFLUNHXOFDMHLFEKMXCIZLENVULCGZYZCWYYZUJAAQUEZBVKRMJOWOEENFCRUPQAKCQKWSRMWBAQGQBQOXVAD");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WLGCVHTWRGVTXQTHJOIKNYBPZADKDDVCIBZQSRIIJXZGXNGEEGBDPFUOHOGIHSRRCZAICMUJQTXOYUYLYSMRVHFJLDNOJFFAFMSZCCLVZLKYUCYPERPVPLDARJMQEKKNJAHRWFBMZKUHAUPUXYSBFGJEFDPXOKCYENTLEOMVSXKPNYQSRWQBA");
    tmp_tmp_msg_0_0.value.assign("NNQEEZMPBLYRTCSCXJBMICRUOKSOUOEWDXOJIRTVBENPGMWXWVVUHBPWMWVADKWFJOAYZXSRPKQCAJRKDCPZKHBDRQUFSCVTWGUFMIKBIGNLOZMLSZCWAQIJHINAUYPNHTQDPEAVMTDIONHHUGTUHBOSZANMFEDEQSVYJPDOGGBSQHAAWFGLEMRSYMXGJQDIGKHXTFBQIRLCHLZXLNVAPBYIVJUPWCJLRKSJTYXRYDNZLFGTOQVZLZTEFY");
    tmp_tmp_msg_0_0.type = 250U;
    tmp_tmp_msg_0_0.access = 30U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("ZQJKDKYFSMYTOOSKMRRKEMUYGHPLQHCJOUFWXTBYMLXIANMVLYZHM");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("FZLZBAUKPGYMMUDOPONQGEISOVKAJVMRECSDOWYWMKQQBSEM");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 57424U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.24275775531576427;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.5047317731804709;
    tmp_tmp_tmp_msg_0_1_0.z = 0.9919682744502878;
    tmp_tmp_tmp_msg_0_1_0.z_units = 70U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.03745372997947338;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.17341493654837348;
    tmp_tmp_tmp_msg_0_1_0.duration = 22320U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.226942873111604;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 217U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.6874853700221121;
    tmp_tmp_tmp_msg_0_1_0.direction = 206U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("POUOLTLLEUPP");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TrexOperation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 129U;
    tmp_tmp_tmp_msg_0_1_1.goal_id.assign("WOVFNPDOCHZMIEXNGCETUXAJRKORASEFXCMAMKCAXKUZUMLHUVYZUWMOJAXNIHVDFRFKPJLQLWLCVVEIMHWTTGXMYERYBTZYHIGJMMPMRNLAEKQDDCLQUPRLZNUHFOIBFGHSAZXAQEJCFZCNJNLFWWEBEXYPWKSTCBQPIVTAIDKQTSDOYFOSKGLITQKJBHPQWZTBWNSHIOBDQQR");
    IMC::TrexToken tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.timeline.assign("YWSDZYZCKQTHHUZKZJLNQHJVXQNJXTFICQLYGQOYSLLGSOPCONTUBAAPIETKSKWDLFJAFYAEXXPLZIJGEWIQHMZWHIDGANPRFMBRDESWHNVHFMKXMAPJJYFPIXVXNDKNPSWGIHAXFGOQKZSMTSIWBCVPBMEUTEKARHWAZVEVYPWBQDLGXTOEXC");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.predicate.assign("PGHJYLUQNNEUGLQSTFJCKYCMNJDHMNBIKTWW");
    tmp_tmp_tmp_msg_0_1_1.token.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("WNGZPFFURJYMCOZYRAUGVCIMRRPXNFSOZMHKKNYIGBXAGKIPJEXITJLSMVWBOOKBAYDQGQRCXCLFZLXWFVJJCTXMXSVIONDJZEUUTUBLVWOTHHARLOCDABHRWAHKVCGEYMGTWNDTUCVVSSBTCYEIDPQSLEQZNVUORYXGHZTPLWPQDMPSBSLNKFQWTJIFHRKMW");
    tmp_tmp_msg_0_2.dest_man.assign("VESMIQCQPXIVDZMXIFSGQTXZFYXBLUKPDPHOGMNWVKURSNEIWMLYJLRYYXWZSKTLRZOSCOYDVXBRFXSLJLMNPXESCCNVWCCVJFEEHNQPRDATCHKPUQUOJFLKHDYAZWETTWYNFCWMJESARQWFIUMQJUBBAVINHSSANYBFQOJDLMZAFYCDBDAGZGHOIKXUME");
    tmp_tmp_msg_0_2.conditions.assign("CCYTQRAFDPIUZPJEACYXDMIRCCSXJQXWBNWHJVZWEGSACFGYHIXNXZLPINMJPKZJVSNPEJESMXHXYSHBBUFSMKTRIDSMANAHTDYLOVGGCADOISHLFROFVWOPPI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PushEntityParameters tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("HBMBSHXRYRTIRJSEJQYBPGWPSVKDWDLWWKMULFCAKZJRGTOTDBTUKNBOEYTYBUOFVEUBJMAIINHCSZDNVJF");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.7563196739009709);
    msg.setSource(23772U);
    msg.setSourceEntity(198U);
    msg.setDestination(41326U);
    msg.setDestinationEntity(194U);
    msg.command = 119U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YTKGLSOKAPRPNMSLANRDIXCLVRKFCJNWEKQSBRPAMZFSAIPEYFNTSDDLCYGIH");
    tmp_msg_0.description.assign("NUZJABCYXITQMRBJDFZLSCXTYSHPUQKPUAJPYPRJDRXASXKYTWWIKSZVTROBNQMPMVF");
    tmp_msg_0.vnamespace.assign("NPMSYDNKMAIZDZMDHFXSCPUFKPVIPXXYNMREOQADZOTYTRKYKBOHIYQZWDTAEALYCJILIFGBIERLOAMRUKKLWPFVPOQMIZBJUFVEVFZHRPAHFMMFXHTYSVWODCNAQINTGPQLRNAPWJHFBZWCAUHJRSDXOWRAYPIMBCWELQOJQEXHCKTYFUBOLZGUGGNGVSZJMXELWTGVLHQSBDENCVJVBGKXHNUIBNCTW");
    tmp_msg_0.start_man_id.assign("EIUWSGOGSMGPHOJSIKQPVPSXCUZFLKJOOQMLREIMJNPBZNYXZYMGGKTATXKZHMJRHICEUDARNDHAIWLQHZMGLVCVWYIGPWHUIZVFAOBCWQFVKQPXLKJRBNHXJADVAWSBYVJZRWOCCDXCNYYULLQOBY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("WJZXJNCLIVPLMBHKWKFCOLMFUDUJQXRAZHZWAXWVRVIENDKGSGWKCMOGKHVFUBGWSYXVLIICYUDHP");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BQHVRECBDYMMSNHYVYRTJFLVLWYFWJOQWJEUFZUTP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::MapPoint tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.48958344802034437;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.21884828300076753;
    tmp_tmp_tmp_msg_0_0_1.alt = 0.2093880211027056;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
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
    msg.setTimeStamp(0.8658527989948225);
    msg.setSource(35628U);
    msg.setSourceEntity(32U);
    msg.setDestination(60851U);
    msg.setDestinationEntity(107U);
    msg.state = 74U;
    msg.plan_id.assign("JYPHJERQAIFEGBQYTYGXIIVRPAMFFBQCVSNVSFTNZUOCUNSZLIXKIQDGJALTMKVZGIBPUJBRZTDYYSLAV");
    msg.comm_level = 41U;

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
    msg.setTimeStamp(0.014619842327817323);
    msg.setSource(23432U);
    msg.setSourceEntity(68U);
    msg.setDestination(22969U);
    msg.setDestinationEntity(245U);
    msg.state = 169U;
    msg.plan_id.assign("DGOTQOOVKBYJQIGLVTUWJEICZQHMVEZWFHWLPPKOAZCACXFHIUADMZOLNOKXBCGPXMJZIZZSAFHTQBKQGPRDDZCRFZHMKWLAOIMUPTFGPJ");
    msg.comm_level = 19U;

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
    msg.setTimeStamp(0.7342950448276091);
    msg.setSource(30276U);
    msg.setSourceEntity(78U);
    msg.setDestination(24622U);
    msg.setDestinationEntity(68U);
    msg.state = 24U;
    msg.plan_id.assign("OGJBPRDJEIHLQDPALSHOKHCTGPTNBJTNCQZXFAXXVUUSOZEYUHKYAFFRFRDGIGSDTKSBYCZMBYCZOIHIZGVNCAPIGYWQRSLZRJHDLBALPVWVMMCODKITQBXFKYELRDSRQBFGRB");
    msg.comm_level = 81U;

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
    msg.setTimeStamp(0.37397830327098414);
    msg.setSource(37472U);
    msg.setSourceEntity(176U);
    msg.setDestination(9981U);
    msg.setDestinationEntity(161U);
    msg.type = 134U;
    msg.op = 101U;
    msg.request_id = 33703U;
    msg.plan_id.assign("ETJWVQZPUTZIVMKSCUKQBSZWFPITRPNURDQEPVDYSFPFWGBI");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 38U;
    tmp_msg_0.file.assign("ZDXGSSGDKAKWKUPDLCCQMESBRKXDTXUM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HZDKNAUPOLSRFVWR");

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
    msg.setTimeStamp(0.8503550575770845);
    msg.setSource(13996U);
    msg.setSourceEntity(110U);
    msg.setDestination(5583U);
    msg.setDestinationEntity(42U);
    msg.type = 104U;
    msg.op = 128U;
    msg.request_id = 12956U;
    msg.plan_id.assign("SCZOIPIHKMVGHNHNTTIBCBZVKJBWWLXUZCOUFVSKRAEPTMOBCEMHWJTMNJZJCPFHXSBQYLYDUSROWXZFYBYREQBDYCREBUCHPVPXPQMGZTKHAAHRIOLKDQSDFIQPXNEWNVWSLNXRA");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 57U;
    tmp_msg_0.zoom = 79U;
    tmp_msg_0.action = 44U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HDLEOPEDAJHXCAEYJSBWUSQEMIWXGGMFBXXBYHRNTJNEUHQOMPEYJZZOZGIMUUGTNFMFBWOOTWCVZIWAUSCARRLIAZRWERUDXHXRIQGKJFJFNAPPRDSYKUWNWEAMIFQBDVTLSVBSKGPYWADVOYZSPSNQXCOUCTXAFHRDYJTNBQRTKCCPMLTZXVUYGLZHHBFAOERJKDDWVLMPGCGKVNXMZOF");

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
    msg.setTimeStamp(0.8786599643328131);
    msg.setSource(13944U);
    msg.setSourceEntity(211U);
    msg.setDestination(17006U);
    msg.setDestinationEntity(68U);
    msg.type = 1U;
    msg.op = 60U;
    msg.request_id = 55177U;
    msg.plan_id.assign("WVFFSJIOZKMHXNZOLMQUUTXCNHHUQGDAUPAWABHL");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("YXXCQNTGBSGEFWUKCRAVYVTZOJUVFJIJAVFBIQWIVHMMYUKLNPHTVZMGCDQAGPJSSRXRMNNUZLHHGYXKXQMWBNKPWPFRCBCLOFLBTJYOLCOBHTRHKGXUDWBHC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JCFZZIOKMTMBUTLAWGHYMTVYMDQPOFJGNNUJHYGYFIDDAFSDBRIQLPBNQDDDYITFMCQZEUAPEPILBCAHTSCNQESUWOFURNACEKPYZBAMBJJNVWYXTQSVQHODPLKVYHWOQBQEPATAHUBSHDSYERKZWEGMXEJZRUVIPRSXGPYMRGWKIFLMAKZRXFLSJEHTFKUWLJCKOWSNGBXOQJKLVTNWWUV");

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
    msg.setTimeStamp(0.06758121521601645);
    msg.setSource(44221U);
    msg.setSourceEntity(65U);
    msg.setDestination(60535U);
    msg.setDestinationEntity(237U);
    msg.plan_count = 34936U;
    msg.plan_size = 4238222929U;
    msg.change_time = 0.7451880649172079;
    msg.change_sid = 17493U;
    msg.change_sname.assign("WAKHHJUSUDFHADCDMQTUTXZAOPPCETGYEUIXKPAXLQIGMIABSCHLRWYRFYVMVICBNYNYJSPDWJLNVINOKNUWSDCLAQXZKPEPQGDQDILRRDZBXZQGAYMYJKVSIOGK");
    const char tmp_msg_0[] = {-94, -78, 62, -63, -20, 71, 38, 102, -44, -97, 76, 92, 74, -76, 63, -106, 98, 49, -109, -106, -8, -12, -34, 117, 49, -59, 36, 16, -28, -35, -105, 125, 17, -86, 29, -59, -38, 94, -9, -110, -65, 116, -65, 68, 69, -64, -3, -40, -118, 8, 38, 85, -18, -79, 3, 49, -68, 5, -10, -46, -104, -9, -50, -63, -14, 83, 2, 79, 116, 123, 72, -94, -35, 24, 10, 53, 105, -128, 5, 104, -15, 17, -56, 89, -107, -11, 112, 118, 35, -7, 18, 98, 22, 5, -104, 31, 99, -65, -86, -70, -82, 123, -103, 11, -55, -100, 61, 51, -67, 70, 26, -73, -125, 119, -101, -104, 75, 104, -111, 78, 9, 94, 24, 2, 6, -100, -108, -93, 39, 48, 104, -104, 0, -7, 79, 68, -56, 14, -120, -128, 74, -100, 48, 108, -92, -49, 84, 92, -123, 6, -121, 79, -122, -45, 80, -10, 31, -90, 95, 41, -53, -31, -4, -96, 74, -107, 31, -33, 105, -36, 126, 74, -87, 12, 28, -125, -86, -43, -14, -99, 57, -94, -108, -87, 47, 33, 84, -33, 35, -88, -111, -70, -125, 95, -85, -59, -28, 49, 76, 115, -57, -83, -1, 2, 111, 55, -17, 79, -44, 105, -7, 115, -58, 121, 39, 124, 88, -115, 86, 80};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LLEPUZGXNKHIAJKAMCZYDJWKCXGCNNSXUCCGUHYDSUWQGLOBZYGPCLRNIESIDVNGXANROBAPXRLQFFHJTMNQGEQQHVTRZJBBBCUYDHKUDTIBVRWWNTEAFZGYHXSMODHSK");
    tmp_msg_1.plan_size = 28278U;
    tmp_msg_1.change_time = 0.8711961257969321;
    tmp_msg_1.change_sid = 11846U;
    tmp_msg_1.change_sname.assign("WYCWSJSKGNXVYVFDZCYNSRRXTDGOFMHVVTPNQINDBEBQTKDNPLSKFJRFMFWOEZZUVLHHEGWLPTHKUAZIXLGJISFZUUMFMQAXMMQWTNNPQUQDXZOLCSOEILSXOBGRCTWCTTVIIQOSGBKJQXJHIBYIPZYJPUYMHFJUXLJRPUFBNOAYELKSUVCLWSREUTJGVYVPEJDDZOYDQKHAXKMGBZFACH");
    const char tmp_tmp_msg_1_0[] = {17, -55, 43, 72, 99, -39, 28, 112, -111, -18, 15, 75, -25, 37, 0, -57, -112, 83, -115, 55, -76, -60, 20, 102, 79, 10, -53, 31, 28, 17, -107, 20, 44, 126, -4, 72, 25, -122, 113, -86, -38, 10, 81, 8, -117, 81, 104, -57, -34, 51, 45, -106, 63, 55, 117, 94, -31, 107, -73, 109, 98, 101, -61, -98, -61, 116, -11, 98, 55, -120, -118, -38, 58, 71, -50, 15, 103, -53, -87, 102};
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
    msg.setTimeStamp(0.7965727423226423);
    msg.setSource(13817U);
    msg.setSourceEntity(77U);
    msg.setDestination(36546U);
    msg.setDestinationEntity(135U);
    msg.plan_count = 9779U;
    msg.plan_size = 1998688855U;
    msg.change_time = 0.43564362037275306;
    msg.change_sid = 40946U;
    msg.change_sname.assign("CGIQNFKHGNKOFJGYIMSUAYUGZVZKZDSVYMA");
    const char tmp_msg_0[] = {-2, 5, 25, 66, 17, -5, -99, -103, 0, -23, -4, 66, -80, -72, -100, -10, -40, -57, -62, 54, -108, 34, -13, -34, 57, -19, -68, -76, 30, -100, -5, 79, 5, -108, -97, 117, -93, -13, 86, 12, 11, -40, 42, -75, 25, 91, -104, 19, -58, -22, 44, 39, 85, -11, 75, -94, 117, -30, 56, 12, -62, -32, -2, -52, -70, 111, 109, -38, 37, 85, -9, -101, -79, -5, -89, 77, -48, 59, -67, 72, -87, 45, 51, -82, -43, -74, -118, -120, -69, -64, -60, 19, -52, -58, -61, -34, -124, -110, 46, 29, -123, 113, 0, -110, -53, -108, -6, -47, -10, -77, 55, 90, -12, 2, -119, 113, 102, 42, 112, -97, 38, 32, -41, -8, -19, -26, -40, -67, 22, 125, 92, -20, -123, -125, -12, 40, 52, 64, 92, 39, 14, -12, -56, -18, 20, -6, -21, 92, 126, -19, 5, -59, -125, 84, 102, -39, -115, -60, 74, -11, -117, 35, 88, -63, -28, 28, -14, 25, 13, 115, -87, 89, -52, -102, 82, 3, 13, -27, 33, 59, -55, -10, 59, 90, -124, -90, 4, -75, -67, 44, -90, 50, 69, 23, 31, -92, -26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JMEQRKPNPZIUYCOBYARLOPHKOEDUZTDGXXNIETRESSPAQCYVJFBUJZGWJIXTRLWYQVQYSZAYREUKQSGWDDJOINTFLGLHUEQVSSFLZDAKBTPLVMWADJRCNUOYCQGGOFQXSCUPUFFNJBWMLHTZINPBHCRWWIVXOXVCWIAYGBYEZITMKHCTELFJVPRNONZTEDQBSSDRXHHGMBXGAXBVIFFDMADAUZHGKIFJMKHMS");
    tmp_msg_1.plan_size = 37412U;
    tmp_msg_1.change_time = 0.9199493203044063;
    tmp_msg_1.change_sid = 6728U;
    tmp_msg_1.change_sname.assign("CHRZMTTLMQFZYOOOZSFMKDDJZKWBNGRBFMIFUYVBLCTHOMXSKBKWTHZHVJMPFCVRTJHCBLAGJADIEOLEAWPOBZFMFNRLTYNGNLRIEWGWVGGMSBENIBVHTXLYCTKIIZK");
    const char tmp_tmp_msg_1_0[] = {121, 55, -19, 50, 12, 74, 100, -65, 123, 87, 2, 89, 24, 70, 102, 69, -120, -45, -84, -104, -65, 37, -25, 0, 85, 106, 86, -113, 46, 77, 10, 122, -47, -80, 102, 29, -96, -115, -28, -24, 40, -119, -128, -11, -50, -108, -101, 72, -75, -118, 61, 72, 43, -82, 97, -13, 27, -28, 63, 112, 43, -13, -48, 83, -43, -42, 1, -41, 26, 22, 20, 85, 51, 24, -112, -52, 65, -101, -47, -105, 89, -29, -79, 6, 23, 95, -63, -39, -73, 69, -57, -68, 29, -3, -97, -78, -9, 21, -80, -24, -107, 70, 77, 23, -104, -96, 48, 110, -49, 36, 7, -106, 116, 66, 4, -98, -63, -1, -67, -21, 116, 74, -59, 86, 48, 10, 120, 6, -98, -22, -58, -4, 78, 111, -10, 53, 63, -14, -36, -5, -128, -38, 31, -98, 91, 30, -22, -127, -60, -119, 123, -91, -17};
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
    msg.setTimeStamp(0.287440782878568);
    msg.setSource(17486U);
    msg.setSourceEntity(208U);
    msg.setDestination(6030U);
    msg.setDestinationEntity(83U);
    msg.plan_count = 53589U;
    msg.plan_size = 213115091U;
    msg.change_time = 0.7889187373031984;
    msg.change_sid = 27468U;
    msg.change_sname.assign("JRYTKJUHEPJYYNGWCHHZUNBHTBXUVPLDQJCRCYLDFADVCLJTVOUZHINXEGPKSIAMVRAOUCIVGFTMPPRREZLYSQEASEVJAIRQUUBHSONZWDRYDXZEHFOLOBQIVXDCRGGMCMQUKFPYHMDYLS");
    const char tmp_msg_0[] = {-86, 90, 39, -31, 23, -60, -35, 1, -40, 101, 74, 46, -103, -103, 10, -57, -109, 83, -21, 78, -14, 111, -115, -39, 84, 99, -42, -30, 44, 77, 112, 0, 112, -52, -116, 16, 54, -109, 106, -92, -23, 45, -81, -79, -35, 74, 83, -65, 72, -101, 2, 92, -93, 22, -33, -6, 14, 0, -82, 24, -125, -25, -27, 65, -98, 72, 5, -53, 52, -122, 85, 87, -109, -53, -39, -52, -125, 47, -81, 39, -98, -102, -43, -2, 24, 26, 15, 32, 21, 45, 7, -72, -120, 8, 124, 4, 60, -97, -103, -29, -96, -55, 96, -26, -125, 6, -112, -70, 86, -78, -100, -104, -30, 28, 77, 90, 52, -86, -67, 121, -57, -100};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JBNIBMUOKBQMTAZMFLVJFJVZCXSPMCLKWGCLGYFSTFDRWMJWUNTRJDETBAVZYPZGSVIAPTDNLJHKNXKWROEEDDNGLSRNUBYAWAPXRKXMXRTQMWIQEGNARIQZWIKJZCWPNFIIABJBXKJUFEERMBOSFCOHTFLKPAWREAIMZTKVOYEPWFYHSOVCDYQSVZQVUVGXGMQPLGHICLGB");
    tmp_msg_1.plan_size = 52690U;
    tmp_msg_1.change_time = 0.31171829191013645;
    tmp_msg_1.change_sid = 26993U;
    tmp_msg_1.change_sname.assign("KMKJFYOYGMHBJAZCOEDZVHBYANEMQCHSUAVXMDDSQVAUXAVDPPFZBMDVTXJQRLHUOWMOFVPOUXTCYDVAGJUWVIXNWFRLLTGXLZLECEWOLQQCPCBWILXJRCYUUWTEIFLUQNWJGAAPAIDHZKKOMZHZLPSNYXSDTHWJZTEISBJRUFMTNETHYGSRSBKGGX");
    const char tmp_tmp_msg_1_0[] = {26, 82, 70, 64, 10, 125, -75, -58, 79, -89, -12, -39, 93, 3, -82, -38, 59, 81, 36, -40, 108, 8, -10, 118, 34, 5, 79, 16, -8, -102, -16, -80, -21, 97, 98, -109, 7, 26, 109, 97, 30, -71, 19, -103, 44, -37, -8, -27, -105, 75, 33, -44, -116, -25, -5, -9, -114, -46, 112, 86, -82, -73, -100, -33, -49, 67, 5, 75, 95, -118, 31, 81, 113, -40, -110, -23, -64, 113, -40, -7, -66, -88, -126, 29, 115, -122, -53, 96, -22, -119, 40, 104, 123, -98, -92, -112, -47, -118, -84, -28, 1, 126, 69, 72, 103, -58, 111, -34, 81, 113, -55, -89, -89, 74, -74, 67, 121, 64, 119, 73, 63, -38, -110, 66, -122, -118, -1, 7, 8, -123, 126, 26, -107, -27, 16, 53, 6, 72, 71, 13, 8, 121, -94, 21, 7, -20, -65, 8, 7, -37, 110, -68, 3, -30, -47};
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
    msg.setTimeStamp(0.3007443861465119);
    msg.setSource(47900U);
    msg.setSourceEntity(187U);
    msg.setDestination(64447U);
    msg.setDestinationEntity(41U);
    msg.plan_id.assign("UTRVIZUCRCEBVJSNNGTGKIXHHTTLHBHTXOKIDFUJURIWQXHVBBPEABIPAWGWJEEVZZTDGPDJXLZVHSQLCKZAZKVHPDNKBYNUWOGOYHKFMRQFYULBFTOXVSLQKYLGFSMGEHTQATDKMYDSOLVNZMRYSNNDDWIYINAPJMORADEQOCZHMATSCCMRWSNIEXFPPZQYSYCOEERFLCKOJXIFGBWLBKUPIVJWLWRAZEDGYCGAXN");
    msg.plan_size = 4938U;
    msg.change_time = 0.8431963396613867;
    msg.change_sid = 13895U;
    msg.change_sname.assign("AMPGEHOGHWAHQVEDZTNYTHVXTMPCYHQLDEMUHITYNOOQDVSIGSPZKXBVRAJXCZJUAFDYOWGKKEKBCFFYTZQTRKJMRZINVFIOVEFHVPPWRMGFWEQALLBNJRRZURLPFWWEZBAXFGQOLDXRELX");
    const char tmp_msg_0[] = {38, 86, -74, 98, -6, 10, 11, -41, -126, 72, 67, 83, -8, -116, 116, -64, -75, 100, -87, 120, -109, -62, 116, -78, -128, -1, -11, 78, -84, 59, -62, -58, 34, 71, 69, 25, -105, -54, -17, 19, -78, 31, 91, 111, -50, -125, 112, -24, -114, -51, -1, 119, -39, -99, 98, 51, 104, 99, 52, 0, -95, 78, 24, -40, -100, 116, -96, -10, -69, -34, 97, -19, -46, 6, -32, 106, -111, -44, -49, 11, -116, -126, -126, -40, 16, 104, -69, 92, -54, -51, 0, 63, -53, 53, 122, -61, 124, 29, -85, 104, 51, 113, -119, 48, -41, 3, -87, 81, -95, 18, 68, -110, -67, 62, 20, -13, 21, 40, 118, -19, -102, -36, -45, -105, -68, -26, -36, -31};
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
    msg.setTimeStamp(0.4752331400359536);
    msg.setSource(17321U);
    msg.setSourceEntity(61U);
    msg.setDestination(46791U);
    msg.setDestinationEntity(84U);
    msg.plan_id.assign("PLDPCJXROBEZBVGHFUENDIFUTAEBQMJAPDZTJINTBDSWGFMTHQEWUOARAXSXFSVIDTIZNSXRKQXYOVKCUNHMEFHZOABUALGGZPHPAFKGCVCVOYLRZXYZMRDYMEEQEMUIPOUKUNQWCBUGKFNMDTGSVXELYYAZBOYTPTFVZNIRILOKKGHWISVXZNRPCQLJOWYSQHSXWFDJJOCQMJIXY");
    msg.plan_size = 20102U;
    msg.change_time = 0.576126178326927;
    msg.change_sid = 16582U;
    msg.change_sname.assign("UTIIGWVNNKFDGPGQKXCCBNPJWVXSOZFTJWGROMNMLQKWXCVUABJZZEBHENTLDTSMGOWVFWFPJXREBXBMDQQOJOEJSHDKLHSOACAPLQUFHMXGMUWDOYYELRHYDYRIXKSQBAGFRDEAI");
    const char tmp_msg_0[] = {-98, 42, 44, -28, 62, -124, -71, -94, -49, 58, 113, 88, -109, -91, -85, -86, -50, 21, -95, -27, 102, -115, -68, -119, -98, -34, 38, 0, -99, -100, -84, 105, -71, -54, 119, 14, -110, 116, 47, -96, -110, 49, 125, -27, -58, -76, 45, 12, -94, -126, 65, -114, -69, 24, 92, -107, -84, 3, -100, 119, -34, 34, 37, 27, 11, -69, -118, 76, -19, -6, 1, -93, 49, 39, -5, -47};
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
    msg.setTimeStamp(0.9425495258038838);
    msg.setSource(30160U);
    msg.setSourceEntity(119U);
    msg.setDestination(40232U);
    msg.setDestinationEntity(215U);
    msg.plan_id.assign("ZVGNVGLIWHJXCBZYGGIZRDQIEBZMJPLXFBBJMOHPMROUQHTEXYYANFHUIDKLBDIKGQNNAOMBSOSEAVHDFEHKFJNFISYEBHIGMJWXGMLCWAJSJ");
    msg.plan_size = 31844U;
    msg.change_time = 0.6814800814824628;
    msg.change_sid = 40628U;
    msg.change_sname.assign("MVXGPQUGCEKBKKKDWUUDYGIDHCBJLTKQOAQRNQFFFBZLSYQJRBLBIPWKOSQDFNHVFIDAYJOJIGMGOPOXHPBIIWTBCQWXETZMANKMNAMNSTTSVRHZDYEUUUDKPJJWNLHKRLNZAECLFXOAATOSOYXIZIEACQWMYGBWRFJYYYMRSGPLNX");
    const char tmp_msg_0[] = {32, -27, -31, -66, 74, 20, -15, -41, 48, 87, 104, 25, -16, 20, 18, 46, -85, 54, -42, 64, -46, -96, -41, -89, 100, 85, -82, -57, -58, 26, -53, -48, -48, -19, -2, 8, -42, 81, -115, 86, 62, 46, 14, 40, -101, 41, -42, -18, 121, 82, -102, 75, -116, 92, 46, -1, 119, -108, 32, -122, 64, -57, -106, -48, 22, 43, -20, 68, 80, -59, 6, 78, 67, 52, -98, -17, -34, 35, 86, 74, -35, -111, -32, -6, -40, -110, 65, -43, -51, -7, 110, -3, 73, 89, 47, 107, 40, 76, -72, 121, -68, -92, -37, -10, 66, -52, 45, 8, -73, -120, -120, 22, 46, -46, -104, 17, 59, 76, -63, 38, -100, -87, -45, 121, 11, 27, -83, 90, 23, 37, -36, -118, -103, -128, 9, 74, 17, -104, -23, 85, 4, -1, 67, 67, -85, -73};
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
    msg.setTimeStamp(0.36655617973086596);
    msg.setSource(2427U);
    msg.setSourceEntity(233U);
    msg.setDestination(36892U);
    msg.setDestinationEntity(38U);
    msg.type = 205U;
    msg.op = 139U;
    msg.request_id = 41761U;
    msg.plan_id.assign("IBJLPAVZOIJBRQCNIKNDIM");
    msg.flags = 48515U;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 85U;
    tmp_msg_0.frequency = 2786858308U;
    tmp_msg_0.min_range = 28340U;
    tmp_msg_0.max_range = 44855U;
    tmp_msg_0.bits_per_point = 122U;
    tmp_msg_0.scale_factor = 0.68887261749513;
    const char tmp_tmp_msg_0_0[] = {25, -59, -120, 50, 15, -70, 95, -28, -80, -71, -34, -111, -97, 13, 28, -98, -57, -29, 97, -9, 115, 116, -54, -59, 62, 97, -118, 76, 71, -35, 74, 122, -76, -99, -8, -128, 90, 55, -106, 0, 119, 74, -38, -44, 51, -96, 26, -67, 44, -113, -54, -104, -72, -6, -91, 122, 123, 84, 120, -65, 42, -75, -75, -27, -101};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZZPJQEXUOYKXVQYSRTLOCBWPBUOLAHFCDTDLWWYOKAZYFMITUUZ");

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
    msg.setTimeStamp(0.517167999040027);
    msg.setSource(65294U);
    msg.setSourceEntity(28U);
    msg.setDestination(48090U);
    msg.setDestinationEntity(26U);
    msg.type = 54U;
    msg.op = 254U;
    msg.request_id = 48659U;
    msg.plan_id.assign("BIXSCELGQM");
    msg.flags = 50024U;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.21215203681295314;
    tmp_msg_0.reason = 31U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CZQWMJZOLJRUSVVIWYDPAVIFUSWYQHDEOJXYIJUFBVQZQYDDKNXWKBJIXRMDGYFNKASSGMKOFKXBMLRMQBVHOUAU");

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
    msg.setTimeStamp(0.012887749899969103);
    msg.setSource(32076U);
    msg.setSourceEntity(194U);
    msg.setDestination(44403U);
    msg.setDestinationEntity(61U);
    msg.type = 215U;
    msg.op = 176U;
    msg.request_id = 21365U;
    msg.plan_id.assign("SVBCLFPNXPPXKDEJDGIEGFRBMT");
    msg.flags = 7069U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2764164698755748;
    tmp_msg_0.y = 0.5142337291523165;
    tmp_msg_0.z = 0.24263119607289918;
    tmp_msg_0.t = 0.8946988787697876;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SNUNPOUJDLYNMWXHTCLFHTWCQWBWDBECMVVTVRWKLZGPNTOHXSAHOAIWRPZKSTSVUARDSLBZNSUXWJGQJQYWEEMZCFGHOZLEDCPEXTJVDAOSRYWGMCPLGEEDMIKMPQHYUSBHFBGGKAINRBNVHIYAVXBQURVCJKXJNIMDFYGIFQMFMZBYFSPUMDOYWKTECAVGFNK");

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
    msg.setTimeStamp(0.23178592776863838);
    msg.setSource(35980U);
    msg.setSourceEntity(43U);
    msg.setDestination(42224U);
    msg.setDestinationEntity(213U);
    msg.state = 5U;
    msg.plan_id.assign("RDRUGATAKNNUFGSXNRLPXIMAPBYXHQBUONARSFUDQVOVLHECGYCFLJWMEOQZYZMMYQHDKLUGPNJTMUETUYZVFICLXPZKWBCUEZZAJLNRAHBFFQCBTIGSDYFLIRAOEVVLYNBMPSWWARMBESNPBHEDDZGHWCSHFJIZWVWESEODJTVSPUXRXORPZMNJTTAYWWEZSXIYICBXVTTKJVKQQQWOJHPOKKIQAYO");
    msg.plan_eta = 1621245310;
    msg.plan_progress = 0.5087610521356192;
    msg.man_id.assign("IPBZDYCTAZVQBAQYSIPGFHKEMLCOKXOAGYTLRGCMUZHRIYUWSZIFCYEVMOJVWNBYAWQFNAXRMSSWRUSTVXXJHYGKVMXKSLZUHVWOXLZQGCWJTUEFMJAPMPPJFUXOZKEAVPKQFMLNYSPHZSXBQQHBQNNPRQPGLEHSNYUCEERXROGCIV");
    msg.man_type = 21351U;
    msg.man_eta = 499372095;
    msg.last_outcome = 222U;

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
    msg.setTimeStamp(0.19961648473458193);
    msg.setSource(58309U);
    msg.setSourceEntity(254U);
    msg.setDestination(56614U);
    msg.setDestinationEntity(35U);
    msg.state = 140U;
    msg.plan_id.assign("SUFACDZWLZPCUWQJJZDEHIHCQXAWFKVWZYJTEXBEWTYUMFQPKBDIOFWXIEDILXDNZJFSMYMEBMEHNTIWRVYSHSXIRRPAHOORBMJIIZCSBPQGMATHSKOGCYFRNFQXVQ");
    msg.plan_eta = -1323818635;
    msg.plan_progress = 0.5844398382259695;
    msg.man_id.assign("LTSGPNXNUSFIBEXVZVAWBGPWJAHTYOHFOIECHXCJPWQYNMJUDMVLMQWOADLTCKJWNLDMKBYLQMDVEDQHOMQPSOGMSHRWXAFLQIKIXBXMSQRVEFJZNUOWVJIBYLGBUFHKIZIDFTKATJXCGKGDKCHRGCVFECKZGSQLJSYYUUNAORZEZAADHPEFGOIFZJOBRQX");
    msg.man_type = 57657U;
    msg.man_eta = -978431218;
    msg.last_outcome = 213U;

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
    msg.setTimeStamp(0.06930035021552405);
    msg.setSource(52159U);
    msg.setSourceEntity(28U);
    msg.setDestination(741U);
    msg.setDestinationEntity(147U);
    msg.state = 55U;
    msg.plan_id.assign("SXDQQVETUYYMVUYUGZFDNMLQRWJHQEMAOXYVAANHXHKRBOFELEXNRHQOLKKUMSZZZNAKPWCRSCRTFPYLWFYSBKJIZODBMTDOSZQXKELVXZPGPRIXGPTBTAPKGYADWYAFGCOECPGQSBJCNBLFTICMIVVDUXHFNQRWEDHIIBQENDLMOVAWYNVRUNWOJZQFGBLLKIATMGJJOUWNPZSGFZKPWXUVPHBCTBKDDS");
    msg.plan_eta = 36043946;
    msg.plan_progress = 0.04898586748379474;
    msg.man_id.assign("EXGHSZEZTRWCBPYSRLCUUMOPXSWGVSTPQDTEPQLEGFJMPWYBGFFBQLCITMWWRQGUDZTVQKUIYLDUXYJKRGGJHROOOSUZDOUSJQIXVXYEZMLCWIWCACILDJZGJIKFVVKNIPDKNCTNTMSIEDWDAGJQRRTFMO");
    msg.man_type = 13366U;
    msg.man_eta = 230615326;
    msg.last_outcome = 29U;

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
    msg.setTimeStamp(0.27264206627271836);
    msg.setSource(49157U);
    msg.setSourceEntity(56U);
    msg.setDestination(25280U);
    msg.setDestinationEntity(177U);
    msg.name.assign("FGCZYKGIPUUFMLNBDITHLVCLNZPFLQFDGCAVTLBHSGSRORORJNKJXNKZVVBXFVAOEAXBHQCAZNUHGLTUJP");
    msg.value.assign("QDPDGFKNIMCZODCVPNFXAVD");
    msg.type = 138U;
    msg.access = 15U;

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
    msg.setTimeStamp(0.37318432942724644);
    msg.setSource(20348U);
    msg.setSourceEntity(47U);
    msg.setDestination(21601U);
    msg.setDestinationEntity(83U);
    msg.name.assign("RYYQWVCCOMAJLIHXFSDWTDYJNIJFRMYPNVEOZCUTBZVEGYEUEOIXBKIZMELKGEKSBZHXHDDEDGCRMJTQLXTEKDGMPHUWOZCPYNBMAKXFWGPZUNVSFBMAONVSJNBLQCSVGHPDQVARBLLFTUDGNEPUIIT");
    msg.value.assign("EYNXUWBXMRYTNESIMHDQGCWCSAICVBRQOFFJDASUGOVWEJMLNKQGLBSWEEOWRVCJBZZUQIJYNTAMJLPKJPPGVKTXRLLKWLMMFJFEVHVQRKGXMLTKOZVTPIHNVOKQUZKFUDUPGAAZTRBRWOIXPPRXYJHLDAPJIQFHRYZHSSYBYPHUEFVBWUDKZNXMDAIGQZOBGGEBTOSNCD");
    msg.type = 126U;
    msg.access = 18U;

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
    msg.setTimeStamp(0.6716153382495791);
    msg.setSource(12388U);
    msg.setSourceEntity(222U);
    msg.setDestination(45547U);
    msg.setDestinationEntity(228U);
    msg.name.assign("TUFQRIAMXYEZKCXJCUDRENDXQVQDLMDEXQVOVPKGQAZNNKYWGWVPZSHJKBLYCKZVLCZPTDWELLPPAJBCLTLKZIRBOAIJXQ");
    msg.value.assign("NGRCOHOXIECULAXMCWWZIRLVEKFFKXLAHUYRKQFTAJHGAGPKXBLPKFELPOEQCOTVHVSSBAVYMMVVKNPXILBQJMVVUTCODZHKTZMJRDNKOWSSDTPJXJTTPNRWJNDSRBFQBAGWZQEHLGQWIJXSUIOMDZEI");
    msg.type = 103U;
    msg.access = 144U;

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
    msg.setTimeStamp(0.9904507900234056);
    msg.setSource(63891U);
    msg.setSourceEntity(40U);
    msg.setDestination(65210U);
    msg.setDestinationEntity(47U);
    msg.cmd = 221U;
    msg.op = 122U;
    msg.plan_id.assign("CCNVWRARDXRGOKRZHDFPDXJHPCVQBLZBWWVDSQUIUEOWDGWAYNVUCZTJZANSTTSMKETEPYJPGHNNQKMFOETORQLAETSBHQHNXLBFUXBSIATYNFACPMKMGGMUVJFWBKDMTDUJDYSFYRVBXZYZTSHKLXCXAOAYBHNZWWCPAMIZJQLESQODZIOOUMEWEUEFVLYXVXEHKLICQKIAGBLLHJDBMRYLNMWPIFSHPPRUKCSGJXYRPTGQKVRIZNIFJG");
    msg.params.assign("WAPRTGSBIURWMAVZKKSWPBOICWGTOEGURXMXEJCYNVIATKLZNLJRHYUHKDHAANFFZTTEJECNB");

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
    msg.setTimeStamp(0.6735984716012284);
    msg.setSource(42283U);
    msg.setSourceEntity(0U);
    msg.setDestination(54753U);
    msg.setDestinationEntity(96U);
    msg.cmd = 73U;
    msg.op = 61U;
    msg.plan_id.assign("ORWUDABREAOXBNTVFQHIVHYXSEEDUKWQCPYBXDEVXHZSCGCYJIWWATWTVKILDNVZSGPCBJKLDMVTHJGVGQBIOMNKATLUMUOFZOZEJWDFGEFGSTSYDHIPUIOCJATNYXHOXCQGCFREGMLPSQMJRHQGQIQKXPELBIM");
    msg.params.assign("SLVIYOSKQZDQXHZAYHMSNBGOOLFBRPNCFSNEYVIYWSBEFVBLHKTPMXPPLMCJNCLMXHSZQUNJDSWEDANTIZRTSBEQEYKNBGUYLAWZOUUXPRGXRTAGVEKFAMIEASMZJDXDMCGTOQFOUFHQVTAUDAC");

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
    msg.setTimeStamp(0.7097064875640842);
    msg.setSource(37089U);
    msg.setSourceEntity(161U);
    msg.setDestination(4662U);
    msg.setDestinationEntity(65U);
    msg.cmd = 84U;
    msg.op = 152U;
    msg.plan_id.assign("MKHJYMWQIRGBAAPZPGDWRCNTVAPHWMMLCHVDYQSCIZUMVJECNJMLVEQCDGOPXFGSIKQXRJYCIDHKLTUVBWWBNSEURFTLGHYJVSZMFFBHRQ");
    msg.params.assign("NFGQAKVCABZFYYIWEKDGIRTZVTGUOEJHJRWGFBUSBVUXYOINGWCCULLNBZMMIKRNIWFHCFDRMVOXFTVPKVPGHVAQOPLGPOQQSZHPUNCYJBDBZYRBDCPOHWB");

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
    msg.setTimeStamp(0.1321829939877085);
    msg.setSource(2162U);
    msg.setSourceEntity(30U);
    msg.setDestination(10321U);
    msg.setDestinationEntity(95U);
    msg.group_name.assign("NYPTNAZCFXGQSCJHANFVALKEMEGKIOZCXZDUZWTQWQTOBVHCLYHJJTTKARDGJANKIBZBWPNGDXYVDNSSMDPNRXNSAPASKUVGQUFHFRSOCRZCITDXLVVTQJQFHLHWVSUFMMLPMJLQEDPYBABPWUWJRFYEIURGNQJIQGMATMDPBCLEDLEEXAUXRTYMECBFHOEWLMKOUVPGYLUOIWHJKBOKHOYYIMIUROIPFOHKZCWTRSYICBQEJ");
    msg.op = 63U;
    msg.lat = 0.33803987019053294;
    msg.lon = 0.648530682260255;
    msg.height = 0.8300518027258529;
    msg.x = 0.8354675289980152;
    msg.y = 0.22567815890355136;
    msg.z = 0.7375746788902222;
    msg.phi = 0.9299287038782929;
    msg.theta = 0.7307910339697018;
    msg.psi = 0.9514962530822167;
    msg.vx = 0.36332138093391153;
    msg.vy = 0.45176613666698606;
    msg.vz = 0.21101412684294207;
    msg.p = 0.9984802871172068;
    msg.q = 0.4922901611096351;
    msg.r = 0.7422344132626828;
    msg.svx = 0.3072855250850436;
    msg.svy = 0.620257118533777;
    msg.svz = 0.06493788105711873;

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
    msg.setTimeStamp(0.10767738219887257);
    msg.setSource(10157U);
    msg.setSourceEntity(61U);
    msg.setDestination(61636U);
    msg.setDestinationEntity(87U);
    msg.group_name.assign("OKLOLQMMXQIUESIJKAJZOBBXUEFNLTBBGFTRKVFLZFFHTCWSVJZSMESPXXQZOZKBRQSGQVHVWHPXCAGXKPZGZCMNNFGQRHSWKMBDWUWJPPMTXYXEHXCUJGWYBCCTIQUPARVMHOPOAFYITFIQHYJPWUTKAYLNOLXSDYMMOUOISSNDAWUFNEYTEDJVUDIGHILRLCNLNCZRDYDTGIHJKENDVLYANZARVWSAWJZI");
    msg.op = 130U;
    msg.lat = 0.34786997736931446;
    msg.lon = 0.3443532419563451;
    msg.height = 0.4908255239832152;
    msg.x = 0.5838297046521779;
    msg.y = 0.8422708246331233;
    msg.z = 0.9514341869038184;
    msg.phi = 0.6197209089800978;
    msg.theta = 0.311479316137546;
    msg.psi = 0.3964207011102523;
    msg.vx = 0.9210840351712992;
    msg.vy = 0.05635644261801043;
    msg.vz = 0.2314367098777942;
    msg.p = 0.7956702546758688;
    msg.q = 0.49996533091204753;
    msg.r = 0.08761131758435947;
    msg.svx = 0.6055220940493637;
    msg.svy = 0.527913589870263;
    msg.svz = 0.18834383707597946;

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
    msg.setTimeStamp(0.11956527712112164);
    msg.setSource(37560U);
    msg.setSourceEntity(89U);
    msg.setDestination(45876U);
    msg.setDestinationEntity(176U);
    msg.group_name.assign("VBJYSFBUEQUTPGKYGYJDKXPUJQGHXZOVEYIWWTASFOZZSEXQMJILPEGNKPWITPOUCXJDACHSWHIHBIOBDQRMOYHDRDU");
    msg.op = 48U;
    msg.lat = 0.4223337223787754;
    msg.lon = 0.06649153887007087;
    msg.height = 0.7720815408115475;
    msg.x = 0.3932869122267836;
    msg.y = 0.045409674785220955;
    msg.z = 0.13890097119733646;
    msg.phi = 0.12750671611947162;
    msg.theta = 0.3513874298294687;
    msg.psi = 0.9539883956649606;
    msg.vx = 0.41410595765200164;
    msg.vy = 0.6028213033253882;
    msg.vz = 0.28335447367179367;
    msg.p = 0.038330855715066;
    msg.q = 0.09341955044038963;
    msg.r = 0.16770659134974364;
    msg.svx = 0.1398279400852186;
    msg.svy = 0.1452819478082651;
    msg.svz = 0.1061464134723139;

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.13444378732649087);
    msg.setSource(41497U);
    msg.setSourceEntity(231U);
    msg.setDestination(27713U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.30370071696860723;
    msg.lon = 0.8449730706118214;
    msg.depth = 0.22738892563424473;
    msg.roll = 0.6398847839198977;
    msg.pitch = 0.6686359759842471;
    msg.yaw = 0.8820874438771865;
    msg.rcp_time = 0.4443507612904638;
    msg.sid.assign("ZOTDZVHILBAEJPTNRYKSMJFCOZYPCXABHFHGESDWGJFEBISHRBIAVENDSMRS");
    msg.s_type = 228U;

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
    msg.setTimeStamp(0.8303396052646971);
    msg.setSource(46388U);
    msg.setSourceEntity(125U);
    msg.setDestination(25351U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.7235267708168766;
    msg.lon = 0.3399287726089053;
    msg.depth = 0.23946910040181846;
    msg.roll = 0.8346263749161035;
    msg.pitch = 0.2943809573407433;
    msg.yaw = 0.04557859574046452;
    msg.rcp_time = 0.6362877738508929;
    msg.sid.assign("XZLVYNWKFAGXFOVGWBHNDTMVFGLBZQATWMQBMAMQRTZMVTHJCFURSIKXGTEHXEUVMNKGBUBTKAMJLRAOHCMTKEDSGQNMWEIHPSLIYAXGHEDJCZNCQHOCYIKRZKEOOQXUXUNJUWZJFRE");
    msg.s_type = 242U;

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
    msg.setTimeStamp(0.4320909248021704);
    msg.setSource(5911U);
    msg.setSourceEntity(200U);
    msg.setDestination(51821U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.3493259796610466;
    msg.lon = 0.15883850801507504;
    msg.depth = 0.11390998713351552;
    msg.roll = 0.006986722875634399;
    msg.pitch = 0.33823519457688833;
    msg.yaw = 0.007024065419946379;
    msg.rcp_time = 0.03386593767060275;
    msg.sid.assign("IHSTNAVROEUA");
    msg.s_type = 221U;

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
    msg.setTimeStamp(0.021399889437350383);
    msg.setSource(24256U);
    msg.setSourceEntity(216U);
    msg.setDestination(59076U);
    msg.setDestinationEntity(9U);
    msg.id.assign("ZZYMSOIJAPMHRXORZNHSIMEBLSHKKCBULBFNNAERHSDOSODUGVAIAHRPLBCCDFUWWBTWTATVYAOZWJGSHFRFXENTLZMTIDPONXFMSRQVXWQCT");
    msg.sensor_class.assign("GEUQQKLQXOOSXWZUOSWZTKZDZVICPEDQPQNWLUVXNWAQBVPOFGJQYBKCELENTSBMWTQMASXITUPGGFMDJJILXCMYFFRYJCRDRCKFQNG");
    msg.lat = 0.5615296131248368;
    msg.lon = 0.9363607010016958;
    msg.alt = 0.5781297858149776;
    msg.heading = 0.17284196616755887;
    msg.data.assign("MXLRFMZUUBCPJOWBKUUANJXKYPLDFMQLETVWLSGCPJLKFYLQBFBXNLRXQRBCTOXYBCYSEPNZZIVAYUIIUWAYISDFVNCRGANDBVTSKKTMDMFCVCVZFKTNTAIZWGH");

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
    msg.setTimeStamp(0.1426458852520327);
    msg.setSource(42808U);
    msg.setSourceEntity(86U);
    msg.setDestination(24084U);
    msg.setDestinationEntity(195U);
    msg.id.assign("MVORABNMGFZHKUCERCBVOUIVNPWPKACDJBVXKWFEKPWYHKNBTMOREYYJOEBEIULBWXGVUSSCZSYGZMCIQLUGIVEYNMJFBXBQFPLKXJACPTWNAKEMIAVSQDRILHOQHQIBLYCTXQUDRNINXJTDGJDYRQZGFKDFSWMXHDAGOCHUZKCOZDPJGPCUZVAOSXJZFZRJAW");
    msg.sensor_class.assign("IAQRQAROWLPLPHOCYAIKIBCZBNWYXLHSPUDNPJBDHWNVCKSDWFYULDYKQBGUWHXZYXWTODPHHF");
    msg.lat = 0.966962067266382;
    msg.lon = 0.02024428319024596;
    msg.alt = 0.9174822054952726;
    msg.heading = 0.7529579397533105;
    msg.data.assign("KVODIWPOZDJPPSNCLDYQLALLFQJQQYITJTMXTRBYOVTXRSANIGOJINIGGXRVSCFMLCWZCNVSNHYSPBYFCEAXF");

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
    msg.setTimeStamp(0.6706517638664313);
    msg.setSource(14702U);
    msg.setSourceEntity(86U);
    msg.setDestination(35589U);
    msg.setDestinationEntity(111U);
    msg.id.assign("GJTAGUNUIQCWKGARSNDMJFXHKOIAPQARHZDAIXZVLRSLMFCMFZNPNBRIFTGAINCJDFUCSYQQXFNLGGSBDSCOPISAMERGOVKLLVPJMADZCEPWSZTUWMLTXSIROBWDIUOEOYSRBTHGKYKJABNTXGZGYYNUBTHZHHE");
    msg.sensor_class.assign("VDRHAFLSPSMHVRXOTIXJGEMRCWIGWEEJIZJUBZVNCHOBJUPIAUUFIIREXOBOZGOOXWZJKWUSIKAYLBFDSXQNCQKABMAJXZGUUZHLVPQNTFITRJBHCVJNWDEDB");
    msg.lat = 0.5710450931054278;
    msg.lon = 0.5164691559465411;
    msg.alt = 0.44475365614186435;
    msg.heading = 0.3992573323531885;
    msg.data.assign("TTHUAQDWQFMXPUOETJVBRXXYGGZQTFMYCLIGYSJFGLFYFWOHKGQJHKIGAPJPNZIKHRWPZQXPWWTSOLTBVGBDTKVAARUWKCSHVLIPXMLZPLRZQBEDEPMRONSMTBMDYNQLNVCWWLNIPUEAAJKUBIIDNEVJOQTJIOECYCZLFNSFGRQYKVMDPFHEF");

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
    msg.setTimeStamp(0.194855193376395);
    msg.setSource(23131U);
    msg.setSourceEntity(184U);
    msg.setDestination(26561U);
    msg.setDestinationEntity(160U);
    msg.id.assign("VXICNUDYDG");

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
    msg.setTimeStamp(0.6379706119247467);
    msg.setSource(2993U);
    msg.setSourceEntity(53U);
    msg.setDestination(30130U);
    msg.setDestinationEntity(22U);
    msg.id.assign("PTKTVWVQEFEDRSKGMAMIGSPYYSEUNFRDMHMUVDOLBBEZDQFWGIXOQWZBFRNVPOBMWQTMIBQCTOGVSQNATLJDIPYCALUNXJOAHWXVKJVYZODDRIWEUARYQKPERMBSEXAEZPGRKNVJUAT");

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
    msg.setTimeStamp(0.4504353489908792);
    msg.setSource(36429U);
    msg.setSourceEntity(205U);
    msg.setDestination(25929U);
    msg.setDestinationEntity(237U);
    msg.id.assign("GVLMFUSZMAMCJWIRLUXEZYPAZQGXITSSAOOZQVTMARRJMRJESAYYSXLOHOJL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YOMKQQWYQSAP");
    tmp_msg_0.feature_type = 170U;
    tmp_msg_0.rgb_red = 127U;
    tmp_msg_0.rgb_green = 78U;
    tmp_msg_0.rgb_blue = 69U;
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
    msg.setTimeStamp(0.4632454983307871);
    msg.setSource(25487U);
    msg.setSourceEntity(80U);
    msg.setDestination(31164U);
    msg.setDestinationEntity(174U);
    msg.id.assign("BPZYADNTTMVEZHKADTFPWIRKEGSGLYAJFKICDMNYLGBEWMNVJVRCDMTBBQJICHQAEPJXBNDXEJOWTCOVTGDSQQPQWZIVFVVODFKPPVYSAKGYUHOIRDLMXDBJSUMXSYUURXRAUGXAL");
    msg.feature_type = 27U;
    msg.rgb_red = 60U;
    msg.rgb_green = 72U;
    msg.rgb_blue = 242U;

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
    msg.setTimeStamp(0.3907882334721181);
    msg.setSource(4169U);
    msg.setSourceEntity(188U);
    msg.setDestination(3567U);
    msg.setDestinationEntity(146U);
    msg.id.assign("RACVGPNFKYALHVEZ");
    msg.feature_type = 145U;
    msg.rgb_red = 246U;
    msg.rgb_green = 126U;
    msg.rgb_blue = 131U;

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
    msg.setTimeStamp(0.28360502783656993);
    msg.setSource(62738U);
    msg.setSourceEntity(6U);
    msg.setDestination(15693U);
    msg.setDestinationEntity(26U);
    msg.id.assign("AHGLAPKKFCMZGTENJUOWCSHDSMHRAFTOXMWDYZIFSNIIONCQJJCFFBFINZUXXMYYRZKDUQILVNRYKYLBOSYBKGIGDVMWLCYAMVQFJSXGWBFPODNLRALTPBASZQHMVAVNBRMNTJIUUVWKPLUSTGWCEIRWIAZDQGXVSTH");
    msg.feature_type = 142U;
    msg.rgb_red = 85U;
    msg.rgb_green = 103U;
    msg.rgb_blue = 172U;

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
    msg.setTimeStamp(0.9010254588610737);
    msg.setSource(6322U);
    msg.setSourceEntity(152U);
    msg.setDestination(58823U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.7321631229311967;
    msg.lon = 0.6902370820999508;
    msg.alt = 0.9654445446740555;

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
    msg.setTimeStamp(0.06935471082892719);
    msg.setSource(52397U);
    msg.setSourceEntity(166U);
    msg.setDestination(30606U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.9321377900686778;
    msg.lon = 0.5337820024429382;
    msg.alt = 0.5457135380875272;

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
    msg.setTimeStamp(0.6011685754207126);
    msg.setSource(27323U);
    msg.setSourceEntity(9U);
    msg.setDestination(17948U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.3491102638031759;
    msg.lon = 0.3474256211522154;
    msg.alt = 0.9931669018007206;

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
    msg.setTimeStamp(0.203168883696206);
    msg.setSource(26356U);
    msg.setSourceEntity(114U);
    msg.setDestination(224U);
    msg.setDestinationEntity(110U);
    msg.type = 114U;
    msg.id.assign("MGEJTKQXYALDQCNLMVVRAJHOFCMTOPFSGW");
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 1474U;
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
    msg.setTimeStamp(0.6603372132400924);
    msg.setSource(50117U);
    msg.setSourceEntity(129U);
    msg.setDestination(30638U);
    msg.setDestinationEntity(41U);
    msg.type = 77U;
    msg.id.assign("UHTOWPMVQUJPBRXCHWATDFKLBUKPBPKVYDRTAVOEGNHQJGCJCZEXTJQNFKVMICTBNHFVJYMKFOSXENZPUKMKPRJZXXSMWRCMZWATEYPPQNN");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.6682573551760846;
    tmp_msg_0.lon = 0.8668795726536157;
    tmp_msg_0.z = 0.497094058857372;
    tmp_msg_0.z_units = 50U;
    tmp_msg_0.speed = 0.8493938078684433;
    tmp_msg_0.speed_units = 254U;
    tmp_msg_0.custom.assign("SDNHGFQLCQYCXFVZSJWZOTISQQHLHZHZHMEIBILCZWFQHU");
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
    msg.setTimeStamp(0.6683308929730254);
    msg.setSource(65101U);
    msg.setSourceEntity(231U);
    msg.setDestination(33315U);
    msg.setDestinationEntity(87U);
    msg.type = 86U;
    msg.id.assign("LIJRGVJFNHTXAPFHEWABCUESUDYXYEMECADZNIJJJGASPTRNLBAKHNSQVISWMRZDAKOERGDCWSEJWLRXYUKESMYVQBPUPBEXOJNACGZOQYGBMDGDNFFYQFQDKHKQXROHUPLGLXCKCQNTXMGGKIPJYMWC");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 221U;
    tmp_msg_0.value = 0.8365557260149424;
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
    msg.setTimeStamp(0.34319707279370415);
    msg.setSource(51455U);
    msg.setSourceEntity(188U);
    msg.setDestination(60278U);
    msg.setDestinationEntity(80U);
    msg.localname.assign("ZGKGZLSMBODJ");

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
    msg.setTimeStamp(0.30260756325496396);
    msg.setSource(27498U);
    msg.setSourceEntity(173U);
    msg.setDestination(19119U);
    msg.setDestinationEntity(208U);
    msg.localname.assign("WHVMCQFTHZAMIKQFDTPSRGXPKCWGBELGUQAKWCBCTZEVNPYRSSNZMAIWFJODJOILKQNQEQRFJMACRXYNUESYMSIPECSQVYAYUUKKRLXHQHNUJPTDQEZAB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WWEAGIXIMQFNCLZAOMSIYSZMIYTBQWPVXTMFPAFLJZMWHCBNLTJYUUGUXPOEZDNJXONNYDQTGNDXNVEGODKVCOWPQMJGRVPDAVZFBKXVPDRXIWVYLGHGJXUTDCKFCPBBNBSGIBPQORQVSZURWDLRHBOKJXMSIPSJGSJKZSZKQMVFOBWALEJULFUQRVBIESYETRNWIQHRYOEKYAR");
    tmp_msg_0.sys_type = 62U;
    tmp_msg_0.owner = 44508U;
    tmp_msg_0.lat = 0.01408820789447518;
    tmp_msg_0.lon = 0.6943296700422482;
    tmp_msg_0.height = 0.9877637701921527;
    tmp_msg_0.services.assign("OBBDEVWFFDXZCCTZGMNLXUNJAQAWYXHSYYOXEVVNLUUKLULLWNPISZRXBOOHKA");
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
    msg.setTimeStamp(0.06741274097915151);
    msg.setSource(29334U);
    msg.setSourceEntity(63U);
    msg.setDestination(43550U);
    msg.setDestinationEntity(76U);
    msg.localname.assign("WDIBBEHETTAERPCFWLWXIGKNNBFMBEQEGSXKKXWWEDCQSAWCYBYOQPDOCJNZDUJNQAMTLORUGKWZPOXHYZRHCFIMOTYXRELUNLFIVAZMVTYPFCCVGXFJFJTLJSADMCXSHIZHZQSVQLRVEPHPTWDGQNYZKPNOLCHANMOCJIFVTIBLRVJYGRVIVYSETBXDBYHKPJLBDYKHSXRBKOKMGMJARDGUZUSQQWMMX");

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
    msg.setTimeStamp(0.9311923656273863);
    msg.setSource(25826U);
    msg.setSourceEntity(215U);
    msg.setDestination(54665U);
    msg.setDestinationEntity(196U);
    msg.timeline.assign("LTSIEJHBXAUFWGQCQRZQFUSJROZICVEUIKMTSOTYEZVEMONYCAPJJXGSKOVSNWZARLLMVZPVUQYARNYWR");
    msg.predicate.assign("FADQJGVUYFADKAQMYZUVUHCUFJFCWJYJEXQYIVYSIMGXVPGLRGWEOKHPHWLLKVQPLBEGWKMNTPPIOECMANKLXHDUZEKKEONGSCCACXTPWXAARJEMHSTASFQUBOOWQLZNQDRTCSYXSKRFV");
    msg.attributes.assign("MNCCCYOYUXHTQVMWDAMXHKZIKUJXKTZDVBFXVBPUKRGBSJWGVNMFMRDBVJCOLOEQZYB");

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
    msg.setTimeStamp(0.3459734122802294);
    msg.setSource(14568U);
    msg.setSourceEntity(150U);
    msg.setDestination(64844U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("AZLRDFGPWOQCWKMXTVASEBFLIAERRMMONHYYSJCIAJZMXDQTJLRYADVLIXAFYXFNXNKCTSFVEARUHBNMPYFZUSBLJLZQZBHUUSWUMTBYUSMICNOLKPHWUYXDBIASROGPODDQHKTBVGTZPVKDPS");
    msg.predicate.assign("IRFMJHEGJLNFNWATMBGJXOIMLJBNGRTOKDCCZTFDKKOXWREIYTNHQHGRVABAZCKPPGOQDLRSZDHLFWBAPHXKFFGIESXNDPWSLLAZIEZQFXJNOYWZNQMITSLCCMLRTWESKEUAMDZHYUYSNMTYBVWPMCAECKFJRUEUQSIBVBPEGTHJEYOOUPUXYYBXVXDRI");
    msg.attributes.assign("ESFSAVNFPHMRQDJIUKVDVKKEDBIILACFZGPUPXHVOJWNBRUOKFZLCYPQRZCNBMOKTMIQINBSLLRLUJRDEDQMPXMRXQYFCQQIWGKARDSHTXLCVFAIVMSGSPLABWDZRGNGCZFPEWLKJCNGCFKHOQZECGSCJEZHQVRYYX");

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
    msg.setTimeStamp(0.6029820446485032);
    msg.setSource(4177U);
    msg.setSourceEntity(233U);
    msg.setDestination(27590U);
    msg.setDestinationEntity(196U);
    msg.timeline.assign("EENATYYIKIFNUMRFJEJWJDDLLDNBXCJZICWGUDXJZQHFKOPXMEMHBTQYGFCPUBTGILOBFPUDGNWRHECIXPRSSLASLCVZFYMQAJBYJNRXWWNFMSG");
    msg.predicate.assign("XLPVSJPSFTJXCJUIIZOCDEBUSVRVAWZXZGMGFYLRCUUXMGKOWOKAOBPHEGNQNNTJHCANALZDUFCLGFGVGZEUSTOQYPBEFYEANDTEMWKWUHWPRMHAXDMHINPLWIGZDSBYIJMTBBRGKKSOVLLQYFLFPPOALNJIEDXPRSIZZVOJVMQORKLAQYYSAXYBWXTTDCCYDRHVZTXUIVEDRINGORQIK");
    msg.attributes.assign("KAPPEMIZBXLCQZNLFEFENPQYQYCJYERPYMQGUKSXFJYMEXLLDERRCUDNQYSEJFTFHI");

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
    msg.setTimeStamp(0.3408916716452197);
    msg.setSource(19145U);
    msg.setSourceEntity(100U);
    msg.setDestination(25452U);
    msg.setDestinationEntity(168U);
    msg.command = 20U;
    msg.goal_id.assign("LKLKFGPTXFSIROGYXMZBZSHTDTUPCOGWBSUWCPSXOPKOCJEGHNFNGMCWYCECUJXNIDODAVSYEAVVQYJDTHGPUJVHUMJRPUSQILOKZLRNLKNFOWPZNFFAWVTMLKRZMHMBKMAUEAWP");
    msg.goal_xml.assign("FYHVFQRTHMXWGFUGIHTXOBQVIMQSMCRQLEBLRSQGJASTVCJNMIYPVNCWBCRPRANROKFIJXXUCBGVXFASJVKBYAAWWPCEOFETYOMUQSLDHICCDEHONODEODUQLCDYNLKEIPNTSIOPYGKJXFBAXZSLDGZBOKDWUZNGHTVDMYUPLESZTWMKWMZQWRDPHIRYQWSFCZNQAUKXNLVGPFZPTIGSUYAUXIBFEHVNVJJZAPKEBORAE");

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
    msg.setTimeStamp(0.005329697210187834);
    msg.setSource(1584U);
    msg.setSourceEntity(43U);
    msg.setDestination(11486U);
    msg.setDestinationEntity(242U);
    msg.command = 116U;
    msg.goal_id.assign("CVBZYWQHJKNCGKZJJDGUQUXPMHUPDAFVUKALQKWIMECKONZPVDGFATEAOPMIMIJ");
    msg.goal_xml.assign("MMEXTIIEOAYYCOBXHNJCNLJCALDHSBWWQFMOXIOMGZSTORYLUYEHYTWPHE");

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
    msg.setTimeStamp(0.98371335871176);
    msg.setSource(29822U);
    msg.setSourceEntity(91U);
    msg.setDestination(15692U);
    msg.setDestinationEntity(87U);
    msg.command = 177U;
    msg.goal_id.assign("MCHXZTFSQPPVTGNWPUWHAXKQKFONIVJQVCOWROTUABCNPDDLWFEGEKYONDLLYFZLRXLIBYVMJGMARSWTCQXZMFORRJUDPBKKXXZVJYKOIAWALVTFMFGQUMSJHINFHRJEIZHNEQ");
    msg.goal_xml.assign("XQQCJNTMYIOFXFTLPYUZENWMOCHUDZJRXALPGSMOXPKWSCLBJBHDUOCTADPHSBGMLO");

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
    msg.setTimeStamp(0.1629646876535079);
    msg.setSource(46710U);
    msg.setSourceEntity(60U);
    msg.setDestination(12843U);
    msg.setDestinationEntity(38U);
    msg.op = 1U;
    msg.goal_id.assign("KJXILKMGLTYQWGDWZLASPKZDDURCVKEAUBGMV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JTCRYDFUXKSDULBDCFUPSRQFRKIMQWQLLXVOFEDDCLZGIPFFPBTWKEBRYAMVGNYTSXIXRPVMKBHSRKCOFJSXPKHUSUUBDHVRJNFHEKWILWUAJGAGNNAUXYQZTUZTXQYWOVNJHMGKEMBTCEPOPPLWNJOWJARADQSPCYMSOWZNFOVAJADNPTEEMEZWKXBENGGYNZIVXCVYZLACHHIYBZYWMRRFMOVI");
    tmp_msg_0.predicate.assign("LMKASLQCQRQFEJOHZZBCQNUTWKRAVDGNMHKFDJVOHSZBHRBWDEXKMFXMAYGKBKBUPVTCEPYPYEIJTIZLXIFDGNDJ");
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
    msg.setTimeStamp(0.44723330838167186);
    msg.setSource(56236U);
    msg.setSourceEntity(76U);
    msg.setDestination(58600U);
    msg.setDestinationEntity(153U);
    msg.op = 161U;
    msg.goal_id.assign("ZPTIHJIPCZHYOZOQYRXWDODGWFHLRRRLHMHUMRYKOTKSZCFQBUUEAWGYYJRJVMICSUYNMWTXKMQOQSGVWGHPPZFYHQWAGFLKVBSUNDHSCEMMEDQLDFNNACVSUAVJRNGWXBKBQGEYUSNWJIJCSTLVXXKTVIEEEUBZUDLTKCANQTZIXGEPVQOX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OLXNBNFAEKAAPWBYSPKYSKPFEYKAVZHXRHWUCGGIZCYUCTFZETMQABRDOLCTPDHZIKOOCHSBJRIOEJUKGZJLWHZLKLFDRMOIFSCTLEXYFWASSIEEGPIJLJBMDPNPMTOQSXGVHXDWLCSPVXP");
    tmp_msg_0.predicate.assign("SSDCRSPYFTSMFCMAGKRKOGSTQCKFVHXIPZIVQWOWWJOJHNLXKSPAFVEYHCHONWTLYDRIJUHLPYQBBTJNXBILIKRAPPJFOUZNFNJJQGFLATGPZQCVWDJXDIELGOWKSMXTDKAHMYZLAYEHDSTMPBFBHBZBGCMYWVFBGCWUGQXESIGUKZQKIQVDDMLJNMTQCAWHNXEAURLOOIPUULDXRDBRTAVSVRBCGEZNXZIEJYHEURPMOYZKUWMFTE");
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
    msg.setTimeStamp(0.5657577873616239);
    msg.setSource(34790U);
    msg.setSourceEntity(113U);
    msg.setDestination(58822U);
    msg.setDestinationEntity(51U);
    msg.op = 4U;
    msg.goal_id.assign("IKUUBPSWAAMVCKJQDEJGCJWUFVUOJJNJKFBSKEGWQLILVDWDNHPGLAHADMCDNSHNYTHXWSOPOBXCUHPBZJQRYEEXOIFNNFTKRVAHHXMHNKYSLCMSZRZQGRZUDAHLCHVBZNATRLZZBAFQMXMGOBTFEEYYKRJJKOBSDXLTFQWUMLEUTYIQYCPRFNUNWXEIKLBMMJZT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OQWZGBLBNJZLKNLHSSJJLRVNNBTHRTCCKKHGEDCXTTQZIKEKGXTBYHNCVHNPGGWMCCAYSDQMUPHWLDCOMVRKFF");
    tmp_msg_0.predicate.assign("YGHNSOZJXWESVWPESQRIIKUOZGTJACADOLQAYLKTEPVCFKLOGHBANRRVTGGXFXDBBRHWKQYGDPOXRSIVVUWQCOMHBCSNWTAUFQQEECHYWGNOXMFMFZHPCSDCIGKFYFEZHQKRHNKBBTISIODYUMONASJDVWNPWU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LIRKRLCHRBJDTIEZBUVQTXEPPSEGCQRTTZKOSFVXOGOGOMIBPEPEUCQCTVGJTULBQOANBSOXXNGMAGRMZMVUIWUASHDBKGTWITKNPTYNAFJYYFFVIVWFLEPYGSDINUSAMNWFROXJHDKLOIHWZYDZYSCQUHCDUYQJDVDMXRLBZLCNYXYVSQQFPF");
    tmp_tmp_msg_0_0.attr_type = 230U;
    tmp_tmp_msg_0_0.min.assign("IYUSQCGTNDPTXFGPWIXSFJGWJOFEOLKNGVNMHFYJQZJICALPYDYBNIAEPQQBAZQUHBTTQHJTMQEOPUSVZZBAXDYBR");
    tmp_tmp_msg_0_0.max.assign("HOHCNWBEUFLYO");
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
    msg.setTimeStamp(0.10110814495687082);
    msg.setSource(43911U);
    msg.setSourceEntity(43U);
    msg.setDestination(39011U);
    msg.setDestinationEntity(244U);
    msg.name.assign("FYKJCVHMFHCLONILXJNNDAMQSLTFLXBMOJUNZBJPRIGKQIQIPNWVSETDAKIXUWWPEEYKBGNJVFAMNERZZRTBTAIREFPYLQEPDCKSHMMGQTPDZQOIFCUGPDYYMPDVOZLDJJALHYZFYIUHPKCXSYKUYHPLWXXVWENVNCSSBWHGGSRMFRGUHQODHQFQGFZABGAMEBKSASOIXTBVLDWXKERUJRXLDBUAROVVBWTJUUGHAZCTOJZISQNCWKEZM");
    msg.attr_type = 39U;
    msg.min.assign("FILAJOXJTBGQENWFJVSHMPOCKEPHQGYYHDOTBFNNKNVZLRU");
    msg.max.assign("JZKBKZPXJUONPBUCQGFRWHJIYULNTMFZVFFBBLXHDVWFHXZGRCAZYSNUWMZSIXYOVCPAQKQIMSHKGOBPGLEZNUGVKMWUQSHNXJERNFYYAQROJMYJRRUXGUMEVQKZBSWWGEMBCRNUTGLDTCTIAHFYPPTWLFPJTDAVSRVQEXLOLFAVTAMHICIJVWTVIDNMSDHHLOENQCGCYELABXWZFJOXYDCIKJKOAIUTDAZEKDBCMSGDIPTYHSOPOKSRNQRLDQ");

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
    msg.setTimeStamp(0.24850345348055347);
    msg.setSource(15611U);
    msg.setSourceEntity(40U);
    msg.setDestination(28180U);
    msg.setDestinationEntity(134U);
    msg.name.assign("CKKKFJVZKUMRNTHSXOBJMSCARUQQXKHRAWJFSNZWGLTKHFGOBEVSYHQHSZJGYXILQGDUOPDXLVTUTYVASCLRDWAFFCUONJHPADPAAF");
    msg.attr_type = 175U;
    msg.min.assign("ESUPWQGDXOGJCZTUSGVALRXPWBITICFMGHRRFWEPPSDNKESOALYBFUQLMEFVHPKFSCGZZWYTFJBLLHOIFQGVZYXRRLICGMHMAUQKQBFTTEWBFIHVCAYYRHYMORISZHRINKZQHIQNANKFJSCSDTLGJWXLPKMZAWQMXUJCGNUDDAVDCPMPEBH");
    msg.max.assign("MHTFJLJCSPYEWODOFFSGDHQGAVLUKHTVALGBKANCTBFVRJXVPRRPFZFRNNLYZGTCIVOCMWOY");

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
    msg.setTimeStamp(0.18639814937277766);
    msg.setSource(22548U);
    msg.setSourceEntity(235U);
    msg.setDestination(63921U);
    msg.setDestinationEntity(103U);
    msg.name.assign("WJJLXLNUXSHSTRVJJOQGFOSRUJLXZIGSKDGBAWYPLGEZZOHUKV");
    msg.attr_type = 128U;
    msg.min.assign("UDRNLWDHDXHLJPKSQWIQJFGDJBEAOZSWOQIZRGFKTRIQAPGLGLWCCBTFEPCQOKXKPFUGGBLJRCSASMOPBVIUGWTXJYDCIXNBZRGUEPLKFPAI");
    msg.max.assign("PYDXTAFYGROLNQISKHQQICFXYOREMPACZGFOHHCUZXTIYEKPAWMRVSXTQYWLENVLQCNHBBJURIIPFGVABCIGGIPSUMCDHOTTEWYJIMRUSJLKOEMSYMKBRNGUTXWLWLIBCMQBXZGPGECYTJAXMZTPSJCKMDPOWVNSFBFL");

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
    msg.setTimeStamp(0.869837174980843);
    msg.setSource(56656U);
    msg.setSourceEntity(26U);
    msg.setDestination(30975U);
    msg.setDestinationEntity(100U);
    msg.timeline.assign("VPAQCEIFUTWFZJVKELRTUMAWOGJBREYVPDNZNSMLDQHBWWCNDZLULLICQKQDTUQVCYNQYJXUUKMHEPJTTGSEXCISGFQJYMWWBDTWBDPXKEMKQTYPZVXAZAPHKAXSRAVBMJTYIVYRGZJOCRREOIYIZ");
    msg.predicate.assign("SUMZVWIPOAMBGCGXRGHEOAQLGUEFKKLLQMIMVLBTKZBYWOYPUUWICQRQWXHUGRIZRDEWJZPCTBJKBXDFEYQYSLQDEXBHIUUCWWGRVSDQFSHZHXJVDYOBRYNUDDCTZTQJOAFPIZHYUJDVOETAQXKPHZXTBNGYXMYGCPCSOMILXJVVNEDCXLDSLRIVNTAAKRWUKFLJSFJAMTFQCKROHKESJNEIZFPFILPORCNATNAOB");

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
    msg.setTimeStamp(0.5517051193800654);
    msg.setSource(20484U);
    msg.setSourceEntity(124U);
    msg.setDestination(86U);
    msg.setDestinationEntity(19U);
    msg.timeline.assign("ALVXQZHJZUHUOUTVGEGSZMOWBYBFLXKYRNUCUXXPTNAECYUPMXIJLLYKOHKOTONVFFPMIPWZFNBKWTSSLHIENSYKMYZEMUBQFYJRSXAJQPWINOMGZBETIQRIRWCB");
    msg.predicate.assign("EUJMYDNQWBZWCQDNTNIIFCLASXGRHCXNIMEFMZQWAOZWWNGWKOBVDGSZOFVCFIZULROGJXESJCZIKLYJBPEPLGLXSALWXJCQVPOHBDMUXHFIJKTXZVNASKKEWPVKBJBXSCRUGSPUOVOLTXQODKYKITDMMWNDYQYKSHIDQGBLXAUEHMKHYFTRQLCRUPEMENHT");

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
    msg.setTimeStamp(0.1724759581693578);
    msg.setSource(44071U);
    msg.setSourceEntity(103U);
    msg.setDestination(57211U);
    msg.setDestinationEntity(96U);
    msg.timeline.assign("PCUDBXBILNZZCRDXNXVQYZBHMVEHYOWSSHHQIAJFJODSITTIUQMNIAXUZMMZUYOTLPVMUWHHNJOURGUEVYQUBKHSYIRAHJNTDSLSWXWWJAZLABDGPBAZQRGQKVXJTSWWGYGELXLMANKDOYLYEFFOOMIBNWHPZOPSRTELEKGTIKCRPZPUNGHSXGQVDFEBLJVBVCPVV");
    msg.predicate.assign("ENQVVGTLYGAHQAZUXGBNFTCBJCXANTHRLANBNLMPDSESSNXKIHQNMRIPJVQVRMCFEHOOMGUYIPKMCEKOXGZSQEFYJMBAEZZWASRLULKSFJOWIIYUXJKXYNATEWWKUTYFIVZTDTUIFFDMIBZKERSNOJODWWHDMGQXJSPGZLCOWHHUEPCCVVYGWQVMOXYGLLYRHHSQUJQXSIVFKARXPABKJUOPYBZZDACPDHDUWBNRDMIKRFTBDVQRLWZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OGTVIBBGXMJKYRCYWEKAOPYVOBLCXWKQJVLYWNPGPFJSCMHKUMPSXAJZSBE");
    tmp_msg_0.attr_type = 47U;
    tmp_msg_0.min.assign("YHBPHYIRKZEBVLTKGBCDUDXQLSAGSPDDJCBJFPZSVZSQWIPDWJRTYKFBEFDQFSMMAYFEETJMOIZVKCNELACCEVRCRBQSXVOIANTIKJYVJWWQXYJSNUWYIBKZTMUBHQJOMWLPRCSZPGCWDQFMJIAGXRIMPHVIHMVWTAACNWATZGKTOEJHBNOCQSRMVUONGDLOEKQFMRYYO");
    tmp_msg_0.max.assign("LHGWPCMRGAHXBEKVXHCRDSULJAPFQPJVEUGZFOGFEIYIKJDMDYOROZYLQRAVPTWNZQHPJBCGDYRJUJZQCVAFYZMNREOOEBYGLFSNUJOXKVTLPGYICEFDXQWSSBVSLYNOZTAZHPWJWTOBBDUGRHMCIVYHAZHNNPMEQPDZRBWNXDFSXKTIKLJQKSVUUECA");
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
    msg.setTimeStamp(0.799489567964139);
    msg.setSource(7410U);
    msg.setSourceEntity(125U);
    msg.setDestination(431U);
    msg.setDestinationEntity(55U);
    msg.reactor.assign("AIJULDQPIUIHQHVAJFLHRGVQRHKMHWCYDOCJRREYDZEJCQRZBSZQKBAE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("APUWEARSPJJATNHQHPRMJBFWQIMYOVMG");
    tmp_msg_0.predicate.assign("DQISDAKFCFIZKHDIOBQGNKVEXXKCFDUXTPYZCOKHKPNBWLUSRNDHWABVPJMQWMIDGMAPVAOZENXNSBMTBTHAXRKZUYSRJREBURAMCLCYVQHKJJWGVIZOSQSXGCEPIZEHGY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZZVISUMUADVWECWTVCQIFRPOKLLZBJYKDGIDHNCJRBGIKFYAKKQFEVWFSRWELH");
    tmp_tmp_msg_0_0.attr_type = 47U;
    tmp_tmp_msg_0_0.min.assign("ZHCJTURTHXCBKMHOERAOSXFXWZGKAZMJLAYURZPGPUTPQWHDWINHKBWWEEJZGGCQKZMNHSGDWWPMY");
    tmp_tmp_msg_0_0.max.assign("MXUMIFFJAVACPTYKVLFZUONWDLPLXHXVUZVZVJHSHIHUJGJOBYRQHGFKRFOJDXUAPOQBRFXPZSSXWETSYYFICLOMGGSRDGDQLCECBXLVZQNFWDOUBOAECTYTJMNMHWAKBKIKKCGMKULRIZETQE");
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
    msg.setTimeStamp(0.8281537491914954);
    msg.setSource(55394U);
    msg.setSourceEntity(108U);
    msg.setDestination(5500U);
    msg.setDestinationEntity(122U);
    msg.reactor.assign("ZOWOLGGYZAJVHXWMHCNBDPMJQBNNBUXYOJEJXNVDKFQBEJPXIXSZPQYWKDHKHTFDBTTIWGSOJPDUAKVMMVCQRNKZIIH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WIQEWHKFTILZUBLHCLLKENVYSPIFBUDSBHRTTXMNGPMOAYQJOYIDMAQIMRFIYHGVRDGCUHHGPTWVZDSQJIQVGBHJKIOHPQAXCSAEJXRNMPCYMONNUXLLPNARPVEVQGBCKZVYBXZHUSAAZXTVJMOF");
    tmp_msg_0.predicate.assign("SFMJESCNWTQUGKARQYIRVCQBHLSQENRPZKJCEFDJXSEOJKTNWVUZYYFHFMIADFRCYJIOPRPDZIWQKQCBNA");
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
    msg.setTimeStamp(0.11188275507566559);
    msg.setSource(27252U);
    msg.setSourceEntity(106U);
    msg.setDestination(58845U);
    msg.setDestinationEntity(48U);
    msg.reactor.assign("NPUSMBVDXBAWGOYUZZBPWBCQKSCXSKIZVKNJHEUOZFTOEDVEVHLILGRBPUJAIIFTGDITPJGIFTMDGIGLZHLBYLRUFRHZOLSTQVGRMUUAQHNDMBPYTSARPAAZGYXQSBDSUSBFVEAWPHWFDULECYLKNIVHZWIPYRT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FQTOVZLDTTNHZYGIBOMSNTXTFPWQHYQAEBCECSQRAAABSQLRLCGUXRKICRISKQUGHTFYQCIZTXWFXSRWBOSJETEGPHVENFLSKNJMIYRIZHLOXJAXVWPDKUD");
    tmp_msg_0.predicate.assign("VMTXYMYLQOEYJQGBYLVTLQGWJHVNVHBSWNLLSCUZJAUJQPQOWSHMOMJXIADUIZWSJUVCBIOSUYBLUEZEGGSSEXKIECQEAAIXAWNFFMYXLUUZZJPWOPHVQPLRRRDZWS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JJRRFMWRUXDMPGCSYLDZSPZQLZVAJNIAEZGBWPJFSDNXHXXFHPIVHQRIZHONWWGRSFSMGMKLWJOKYRLAZZVQDJITOBITNEJZCUQLQBWVETYPXGBDQJOHYPIFGKYVBOVVNXMEPKOSXWJNVMOTIMYCKYMBKDEFAOYIBPTCLUAUFDPFGQ");
    tmp_tmp_msg_0_0.attr_type = 57U;
    tmp_tmp_msg_0_0.min.assign("JXCUMSEOES");
    tmp_tmp_msg_0_0.max.assign("LDOJCTKHJVNIHPYESKMUGLSPFGSPADOYZSIPMLRQYMYZRKBKBVNFRQWMGSJAUXLAQGNLBDMWEZJEDOZTUHTYHBIMCTJQIGFDWCVCNWAO");
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
    msg.setTimeStamp(0.7549787401866171);
    msg.setSource(14820U);
    msg.setSourceEntity(235U);
    msg.setDestination(26426U);
    msg.setDestinationEntity(221U);
    msg.topic.assign("HZVARBAWNXISYQINZXHTKHJZTNJPBNFJUGFDPBCFGMPQSIWQTWHIXZOMYLZYMHVUWYTVDZELYFTWGYJXCKYUPPFARTHBCSPEPAVGGTPBWKWIWEHCLGSOIDISOELXQVTGNRPKMJWXNDZJNODYUISRNKBDZUKSREAEOXBSRVGNEGYUVFFNLZQMCLDMOVSIFKZBMDDJRFXALJMUSUKROCXUTG");
    msg.data.assign("KOAJDZBUWHGAWKZXGQBATPVMRUHJRBVOZQOVXCATLVUILCJHJSSBFOBFKIWGGEHEMJCFUSNFQLJAGTFETVGZNOREPDXUFTETUTXGIJPEDVVIBMEOMSRBYTWCDYWWTLNHGQWJLRLYAXIPNUKCMMOZHYNSUREHPPWBJWNXLDIFZCEUMCJPTRNURQKNKEXAMIKZFCVQADYXSSBHYMZKSZQVHBDLO");

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
    msg.setTimeStamp(0.39908747965871194);
    msg.setSource(12610U);
    msg.setSourceEntity(250U);
    msg.setDestination(8841U);
    msg.setDestinationEntity(74U);
    msg.topic.assign("HXPPKTOQVSYBYREPAPUINHKODSXSOWJPAYHHEEMIJWAXNJGSVGOCZNMVBDDCTAHQLBWGLBKKWOQLMCNRUVSJNLNAMVLQTRQZRUWRRZPCBIDJ");
    msg.data.assign("LGPJZCZIWTCKTOAZEJBWQGRKNTBXEUDRHAHLELJQDNLKBYHJKFJLETTLAVDNOPEGIUYOUFGWCHFEAFOQQCWDZMZPIIYNIMKHKIXPOORMNVYKSSAHHVOUZMYGVWGVFRDKFMNNSSRSXHUVACFCQRSEMKDWLLLOFUSCBZUVYBVTGXRZWXIKSAPJEBUMPLAQJYRNPNADUIWXZQIWPQTXGBTQFXIWVYXVCERCHJBUMZGNBOERXDMFCPYJJGOSP");

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
    msg.setTimeStamp(0.6322180177591471);
    msg.setSource(42390U);
    msg.setSourceEntity(6U);
    msg.setDestination(41441U);
    msg.setDestinationEntity(101U);
    msg.topic.assign("TRTAWLSBIRAUJYBLMKMGLNMSREHKBXEHKXWRIWCIRFFSHTUUWPMYNPPUGSATFZSZJVGTKQJRRGGDECDIAFGWVNDJZYNEDTUTZQMXLJDUHJUVBPXCOHQLOKXGACMPBYIXCVVRUSWHTOZKCBVBCPXAKBFXIMYILGSEJODDHYDOKOHALPN");
    msg.data.assign("PYCLHZVUUNJRMTAAYKNANOCIERVXDHYNCXBIMIBDZNTSNMRAWPPDHGNQFUJSUFFLUAJBJYTWKJZDOXFECBPKWGDZFLENGQFSSRAFBXAMILYOGWPGSLNBJVMRVJYKWTXWDQUZBBOXODEEHAHOQQFWVADLLOPJBVCWMQSTPQZCCGIZSEKQFSDRKCITPEORCHOTGKEKMXTIAUXSMQVZUIVWCDYJXYQYWRZUYLREGXLJKHGBSHMIVLHEPFNHVZTMK");

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
    msg.setTimeStamp(0.0942575989086607);
    msg.setSource(3058U);
    msg.setSourceEntity(165U);
    msg.setDestination(28041U);
    msg.setDestinationEntity(219U);
    msg.frameid = 41U;
    const char tmp_msg_0[] = {89, -43, -26, -47, 83, -71, -3, -89, -6, 19, 15, 98, -120, -51, -42, -75, 21, 1, -111, -49, 43, 21, -24, -62, 118, 117, 63, -74, -77, 76, -56, -30, 68, 120, 92, 109, 6, -102, -92, 110, -34, 43, -25, -124, -56, 85, 126, 34, 19, -65, 59, 43, 81, -20, 61, -39, -105, 80, -7, -109, -115, -15, 109, -42, -33, -78, 73, 4, -51, -35, -69, 86, -2, -62, -125, 17, -15, -111, 21, 66, 120, 34, 101, -99, 41, 95, 49, -69, -57, -96, 90, -124, 2, 38, -33};
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
    msg.setTimeStamp(0.4441305559296347);
    msg.setSource(32442U);
    msg.setSourceEntity(149U);
    msg.setDestination(7074U);
    msg.setDestinationEntity(227U);
    msg.frameid = 27U;
    const char tmp_msg_0[] = {19, -117, 50, -79, 95, -105, -58, 85, -125, -37, -9, -48, 97, -79, -127, 13, -106, 28, -92, 49, -33, -61, 86, 66, -73, 0, -103, 83, -43, -16, -37, 102, -127, 15, -49, -53, -7, 67, 44, 73, 103, 22, -83, 66, 114, -128, 23, -103, 21, -116, 103, 37, -116, 20, -54, -92, -102, -121, 29, -128, 21, 120, -55, -81, -22, -27, 118, 35, 114, -66, 83, 14, 17, -4, 73, -63, 52, 74, 96, -43, 21, -46, 1, 86, 60, -103, -123, 110, -114, -13, 100, -83, -127, 39, 99, 47, 27, -107, 5, 90, 45, -38, -102, -4, 92, 70, 0, -64, -29, 36, -90, 16, -48, -68, -54, -14, 124, -90, 21, -70, -72, 93, -45, 112, 78, -83, 25, -72, -3, 35, 42, -86, 15, -58, -12, 40, 20};
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
    msg.setTimeStamp(0.980353613859938);
    msg.setSource(54172U);
    msg.setSourceEntity(94U);
    msg.setDestination(3510U);
    msg.setDestinationEntity(41U);
    msg.frameid = 142U;
    const char tmp_msg_0[] = {-101, 86, 101, -60, -55, 110, -116, -9, 38, 52, -107, -21, 10, -102, -110, 23, -90, -115, -51, 104, -38, -101, -74, -41, 4, -75, 79, 4, 67, 95, -121, 33, 29, -81, 42, -84, 96, -76, 49, 31, 33, 44, 80, -95, 111, -18, -10, 37, 71, 64, 118, 3, 115, 45, 120, 37, 10, -19, 33, 110, 87, 31, 34, -71, -40, -15, 57, 73, 86, -21, -74, 71, -104, 8, -48, -86, 104, -112, 72, -28, -10, 34, 68, 83, 32, -50, 54, 69, 92, -15, -103, 125, -33, 15, -25, -96, -74, -117, 32, -77, -81, -120, 37, 13, 100, 68, -112, -62, 30, 109, -119, 62, 71, 99, -73, 28, -92, 11, 65, -2, -58, -115, 83, 45, -62, -34, -42, 18, -95, 47, -93, -111, 33, 93, 55, 84, 28, -9, -75, -34, 90, 115, -71, 107, -92, 1, -67, -66, 83, 41, -57, 91, -46, -28, -68, -105, -61, -86, 53, 80, -16, 44, -115, -15, 108, -43, 18, 27, -9, -121, 103, 27, 54, -53, 0, 63, -9, -66, -83, -72, 34, 25, 32, 70, 58, -99, -38, 97, -10, -11, 59, -60, 47, 84, 33, 88};
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
    msg.setTimeStamp(0.7175367392630198);
    msg.setSource(56429U);
    msg.setSourceEntity(154U);
    msg.setDestination(47748U);
    msg.setDestinationEntity(73U);
    msg.fps = 42U;
    msg.quality = 233U;
    msg.reps = 162U;
    msg.tsize = 18U;

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
    msg.setTimeStamp(0.7104312006438267);
    msg.setSource(6154U);
    msg.setSourceEntity(249U);
    msg.setDestination(44853U);
    msg.setDestinationEntity(51U);
    msg.fps = 173U;
    msg.quality = 27U;
    msg.reps = 195U;
    msg.tsize = 40U;

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
    msg.setTimeStamp(0.8035146100299955);
    msg.setSource(20089U);
    msg.setSourceEntity(23U);
    msg.setDestination(29067U);
    msg.setDestinationEntity(198U);
    msg.fps = 247U;
    msg.quality = 141U;
    msg.reps = 173U;
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
    IMC::RemoteState msg;
    msg.setTimeStamp(0.6736766845418009);
    msg.setSource(13459U);
    msg.setSourceEntity(156U);
    msg.setDestination(10653U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.6845388901750414;
    msg.lon = 0.5125341500527859;
    msg.depth = 154U;
    msg.speed = 0.9456791752861714;
    msg.psi = 0.5658449838853314;

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
    msg.setTimeStamp(0.892238371217097);
    msg.setSource(40508U);
    msg.setSourceEntity(212U);
    msg.setDestination(30668U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.35745964037178046;
    msg.lon = 0.7769326491679914;
    msg.depth = 226U;
    msg.speed = 0.6391827535861733;
    msg.psi = 0.26151829156621365;

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
    msg.setTimeStamp(0.27912495967179185);
    msg.setSource(40522U);
    msg.setSourceEntity(179U);
    msg.setDestination(46821U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.21157722105758414;
    msg.lon = 0.15357715456091714;
    msg.depth = 132U;
    msg.speed = 0.1605977840773578;
    msg.psi = 0.6541625126395291;

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
    msg.setTimeStamp(0.021771543673576588);
    msg.setSource(30403U);
    msg.setSourceEntity(0U);
    msg.setDestination(50298U);
    msg.setDestinationEntity(170U);
    msg.label.assign("DAYUWJRKUTMOXNDAEKIEAAHXUBZDRIQTSVUDGBGAEXZWCMHBIOQCGPDNUJUKXVOEWIESVBERDFHLUFKSGFYHQNLLXJJECGLHFDWMVDFPKKXROTSVZZJMYHYTWPFLISRITUAVORBRQFQSPIZCMVBNMOGWBSVTKLRYQSNUCDYUQABKCVCQDJCHGHMWZHQJ");
    msg.lat = 0.9048288572885621;
    msg.lon = 0.13836018065160605;
    msg.z = 0.850208463345778;
    msg.z_units = 161U;
    msg.cog = 0.03643778768748385;
    msg.sog = 0.44105892527787605;

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
    msg.setTimeStamp(0.538627140497644);
    msg.setSource(39351U);
    msg.setSourceEntity(20U);
    msg.setDestination(56846U);
    msg.setDestinationEntity(104U);
    msg.label.assign("NHGJNFRYWGHTVUFRCBXQISJOVMBKMC");
    msg.lat = 0.8078593846313095;
    msg.lon = 0.1175957783586723;
    msg.z = 0.7715378217101556;
    msg.z_units = 157U;
    msg.cog = 0.5889176529880916;
    msg.sog = 0.6850936332030674;

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
    msg.setTimeStamp(0.9864167017275491);
    msg.setSource(37752U);
    msg.setSourceEntity(165U);
    msg.setDestination(41123U);
    msg.setDestinationEntity(171U);
    msg.label.assign("QRPRBGYRPQXYIKDXWJKVCMJGTXLTJUGYOUCHSOJSKZRDFOMKERERJXTWVWEGMCLAEBEPTAFXCQNBAZDHHASIAOTBZBLFSQZJOMBGIVNXWDMQVTPPDZQHDDRNZD");
    msg.lat = 0.801232355750093;
    msg.lon = 0.955248096743126;
    msg.z = 0.8058375227325443;
    msg.z_units = 228U;
    msg.cog = 0.2923779366133813;
    msg.sog = 0.6546806456149847;

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
    msg.setTimeStamp(0.5122499903885592);
    msg.setSource(64080U);
    msg.setSourceEntity(227U);
    msg.setDestination(63863U);
    msg.setDestinationEntity(55U);
    msg.name.assign("WRHWZDLUMTZRVDOHYAZXMHKZLIMUCNPCCWFRBQKGTWOXGSUZCQFAAJITFDDXSBN");
    msg.value.assign("BTHPIMNFQHVAVVWWJRYTUSRYIPIIKPCGICPTMVMAHVKJYWU");

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
    msg.setTimeStamp(0.09245407104668668);
    msg.setSource(25115U);
    msg.setSourceEntity(93U);
    msg.setDestination(13626U);
    msg.setDestinationEntity(228U);
    msg.name.assign("QJWJSCPGSKOHSFLCFXUYQMSRRHDGKVBKHUGIZWXDRHPSOEKRLVORCWANQWSVTOABHSCDVTIAMZVPODGWMXWJKLPNLTEHMGYQRTAAEIFVWNUNZHEVJRDORSYMEFNZYAINZUNGKCBKXJEUELQCEFBJGAADCCMZXGBXFIVXDQRYHGILAFXMLQRNVJVOCFPUDKBOIZFIPZEBFKZLHO");
    msg.value.assign("VACDRHIWJFFMRIFALSNSHQSCSMXYCQROYRGFQOHTTDYXXKOLPKLVZMZBWPVCXBGHNUPEIQWYGRULLPDTFBVEACDHSFMKMSISOHBRUTBUY");

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
    msg.setTimeStamp(0.13080744368262764);
    msg.setSource(54809U);
    msg.setSourceEntity(38U);
    msg.setDestination(4785U);
    msg.setDestinationEntity(66U);
    msg.name.assign("JJMSMPRKBLHDESZQWJNVLQUKSUXMZMEMEWHHYVOAJKSDVAXSQMOFQOTVTHYZSDLOTLRCJADBWQHACCDGBJQYLUMZYZBWXXNFPGTQNRDWOYHIUXXDNBBTAEAYNNFPPNRWPZZSXXCGIGHSYCJIDGAVRVBTYFKRI");
    msg.value.assign("PMTBKZJUISHTEBXWMMUXJQSYYMORSUTNZLBEBNCIRSANQGTKJNURGPCAZWQTIERHGOCJXUPODQSINCHWPDLHENRNHFLWCCAQXFBHFZQODYJRYFRUKOZSZAWAYADELKSOKIVZWWFXGOVJASZFAVTPUETBWDHCVNIYERFQPYTZMVKQGLJLYEOVPVIBUKRFHOQJLYCTWEGTLBXBFWKJGMKDDNHFSCYISULVPIHBQUXOXDVJPAC");

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
    msg.setTimeStamp(0.183239146413249);
    msg.setSource(14739U);
    msg.setSourceEntity(39U);
    msg.setDestination(35377U);
    msg.setDestinationEntity(122U);
    msg.name.assign("GHCSSTBHSVXQOAKWRIDVGZBCDCFQBMWCKEMYYMTZNLYEQGDRWQMNHLZUJGADQLKLPWKAEYTHLKTRAALTPUFMKGSUVGYXPFQLFCJDZXENZTFINOJIBUTBXAINZGOMAVVWQIVVSWR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XJQRUZOZDEDMASAIUPZEHYKDOGHCSJGGUQCYEYKVQYUUQWSCGYRWCVTIYHNJEMBYGNPBKXTPJXW");
    tmp_msg_0.value.assign("LTDKHNFCXJIZYARHPINBFBYXZTPOGFJKOVSPJYUGWDXOJSAPUTOEUULQVMZMASALBKJYBFCMWJXEFNMLRBBUSGYVTZXGHVMNROLIAIVNZFUWFVHQIWEQLKYDZAPOQLXPNBIXHPEWGAGDDTLXBLCNQQWSJAXQRUUOVKJGRDCKWHSHOMTYVYQDMEVNRXWKPEYASCKOCTHNIWLEI");
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
    msg.setTimeStamp(0.09247879269225223);
    msg.setSource(49295U);
    msg.setSourceEntity(247U);
    msg.setDestination(59794U);
    msg.setDestinationEntity(55U);
    msg.name.assign("ZDYBFNEHJPBKDVDERJWKHVADIJYJIZVAWXZFCZP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BBCXEKPBZGWSRPZXYOEKVFXZUDBJHMDMAAKQWTLPMNE");
    tmp_msg_0.value.assign("XXHKALAQQSDDXLROYUYQZTPHMSISWVVHYIPPBNTQBLBIDTMJGCIUCXYOUTVQBJVTCVOOGCXZFTZSJARJEMTOEFXBWEESKEWYUHZYOVYJCSAZRDD");
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
    msg.setTimeStamp(0.32369651270257127);
    msg.setSource(6450U);
    msg.setSourceEntity(100U);
    msg.setDestination(55976U);
    msg.setDestinationEntity(20U);
    msg.name.assign("KVXETWFTUZVVXRZRFMJCDBTOKNLRDHYGIIWSZVCJYPEMUSPLKGCSRSAIGGNORDSNXMBIPUQOCZKUNEAYPYESKHDXZZABBQLAIQNGJTBKFHQCGWYBJOMAYTQHEPJLFQTWDFNAMWKECOTWBOMFHERIABSVEWCODYLLGAJTRMVVLFTU");

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
    msg.setTimeStamp(0.6424235060007581);
    msg.setSource(8531U);
    msg.setSourceEntity(20U);
    msg.setDestination(1217U);
    msg.setDestinationEntity(163U);
    msg.name.assign("WMZXLPUEWABCIEOGFJZMUVSFGKWIYGGNOSQNWOXJZTTLQMSLVPKNHPMUWZAMLSHJJCJLRATRISWRBHVHEXCVTSQYXPBNKAQLAZDDJLIBRRWIAFFLFYZHJSPRTCQFGZAGKULQKTXTKVCURUKBEPAYNPSVMPXACREUTGVJUDPIMWBXZHIUVOYGCDYQIDETQCBDRDHVOCINOAKPQSEOGBIEWNRXCDDYHYYOHOKYKZFXJJOMBVBULFEGNQHM");
    msg.visibility.assign("EJHXCAPBJFFHUAHQEIKNRWWFMRFCSPZDINRHCFNGWHOLUYAAVUDHXRSLYJXGKQDANPQLFVLPSDATVMSNEAGLGRCRYOUTRXCOCEBQSRZEWGTOTEMXOKYKGLJBPFVYSTOXOAY");
    msg.scope.assign("UCOEGAVBHFEBJFYXKQEYFKYTEIITTNKDZTOYQBHDCBCSNGCTIRAXXINUEPODXHNRAMRHDEAJLSRAXKYSBPHFTGQSWLYEGGRBSUEPWGKLCPDZFKJMVYOESTEVQRAZNQRWZHBUUIUWDVUMYGLHBCTJMWFXSPCKQVJJMUFIZAASSLRLDIQLRDWHOMBFSJYPILPAYXPMOTJKCIQUHZVCWGMTVWHZLNMKWLJDONZOIXXVWNUBVFQGNXFNVP");

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
    msg.setTimeStamp(0.023680446052262827);
    msg.setSource(26602U);
    msg.setSourceEntity(252U);
    msg.setDestination(13700U);
    msg.setDestinationEntity(77U);
    msg.name.assign("WSNTGPVVKIFNRSKBJBZKZYFCYOXQHTTZZSCYVTJUKIIJJMWKKFNQXKQHDIYAVFAEGDCWQLBONDOKOHHLAXHFKFIZDLAWRBQJWUVUTOEBNWASBYZBOXCNEIYGRTDWMWRDORNQCOCJQBPSDBHXJFXUGLQDMAMIPYVBFLJPJHXPHMGVHAXEZCCWMPZTEPNGZUPAOARMGF");
    msg.visibility.assign("WOJCEWCWHEEEOYPCUFVVYHXDVHXULCYJTJTAUIOLVLAXASNOOQGTYXLGKDBQNZRRFUSVPYJXHEQSAFRMIRGBYPJCWHHBEZSZNMSBVECDJZMGLTDZUZQMAIMHWYWTIEDDKDKKTFRSDPQSWNHAFIVLVOBJAGLGYCSRIUQUQMBFOUGMDSOLSAYEMJZHFXCTMVQOFNRKIKIKRWNJYPINZRNAZPTOTJULPWBX");
    msg.scope.assign("NTHMXREFCAFFZWDHAVTYHQJKCPTUKLKMQOPISZRGRFMJUPPEVYTJLLSTRANYJXJYXLECVNPDZUZOTXKYKOXTIPRAMWQYOYLDGFGJZEILHMLDGIODRICCBONYMHREBCMUXNFBSZNDECBSTKEECJBNOASNOVCB");

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
    msg.setTimeStamp(0.545049475420389);
    msg.setSource(2760U);
    msg.setSourceEntity(130U);
    msg.setDestination(60711U);
    msg.setDestinationEntity(172U);
    msg.name.assign("MUWESYHWJWV");
    msg.visibility.assign("KJTFLHDLVPGHFGAWNHPKQGUETQUTEAWHKFDPAQIT");
    msg.scope.assign("RLYZIXMIFJ");

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
    msg.setTimeStamp(0.5564777705649334);
    msg.setSource(28389U);
    msg.setSourceEntity(170U);
    msg.setDestination(3456U);
    msg.setDestinationEntity(153U);
    msg.name.assign("ADRPMWPXCARXUPWYRGNZGDZXWGZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VWMANZWPHWRNNADKFISYZTGXLTQYKWBHQZAKUFUGUCPOBPUIGVPHXLHWH");
    tmp_msg_0.value.assign("LSKKXWUYQPKLLUFBDBIFWCFGWZFDVOJTVXAIWWVSXEQAPMNFQVFMNWBVLAGLVGZRAEQCKPBGSLOCYQUHBEGYBRBQIEPJKMSRXNQJABRDPZJZSJHUGPDNTECHUDYCB");
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
    msg.setTimeStamp(0.879049290353368);
    msg.setSource(46712U);
    msg.setSourceEntity(224U);
    msg.setDestination(41269U);
    msg.setDestinationEntity(183U);
    msg.name.assign("LNBTNWROYVFMPKLRFHLUKVKNHPCYXPESDQEEAQZBAPDZWUJKODSLLDXBTTCTZTOSINLTWFMOHXPIGQBQZHOUMARVXMGCPXXPHFNJUGLDUWSD");

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
    msg.setTimeStamp(0.7897682345825955);
    msg.setSource(3787U);
    msg.setSourceEntity(21U);
    msg.setDestination(801U);
    msg.setDestinationEntity(60U);
    msg.name.assign("RODVJUOTDCVWYJOVRGJXFNEBXMMKILSLTQJAIAVSPPWFSLPRZEJSRDRMZIMBVRGEWYHUAKUXOXMGMTUEKNYPFIICSFTTCGSNVGDXWUBNEZXUROAWBMYCWGSBLVEWGYTLKCFIIPQODQZWUYYRJQKZSXBBOHRZCKPXDZNTHNUKQZBNPFTLANHXVAPFFJN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YZDSFNVIGMOCXUXTWVMOUSUSYVPPDSXNTBWECXZWGKALKABANADVFLRQZZHBPCOIXTALTAOAPCWCGIDNPYHTOSVHUFCFKDMNLNELIBOLEVOYWERGBCGJZQBQQQTDOJRGZQJXKLEHZPLRZWVTAZYOUXFJWI");
    tmp_msg_0.value.assign("ZBIUSNWBFREFWVVSEWACTIWQNMJPHDBYDAOOALBAFTTRDTHTIPOOPDKTGJHSNKHHWERUMAXREFIMNGIQYEGIREJXYSWFIVYWKPZQSGCEUYPJAJHLVCPKDJPKLCANLTUBROFMWZXPRAUWSKQMPUDKHYBOLDVPJUTCFNZ");
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
    msg.setTimeStamp(0.5034159103143111);
    msg.setSource(6419U);
    msg.setSourceEntity(14U);
    msg.setDestination(18940U);
    msg.setDestinationEntity(49U);
    msg.name.assign("ABIVOFERJOIRVPJNRPATHXDGBBLRHLHABZRMZWFEVUESYCSSSLDGTSUTMKBVWDIONYFWQWBNTKMERCYAKLVFDHTSGTMRLITKHGMHAQLPBJKSYMNJKQIYGDKWRUZPPMDHUDWIBQOXZCXJEVVNYXWLPAUUXBJXCZXGPCPQERKQCHNCNPAZUNOJUAOOTPXFMOGXAVGFFNZSROKIMVOULKQHQZEWTJWDGFCZGFBLXNWYVIYQLDEQHZTJSAUJECYMDC");

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
    msg.setTimeStamp(0.36720600306065854);
    msg.setSource(42277U);
    msg.setSourceEntity(136U);
    msg.setDestination(56058U);
    msg.setDestinationEntity(92U);
    msg.name.assign("VZZQVQWXRPPKHESRKOYMQWCSDSRYMKHOGXFJDHHZNFPVRWJBOQBIBPNSKXYLLQQCUKXBYUECLMVIHWUATNYLNLAHBNIMWLVUZDBVGNTYAIEJZKRMDJRGJLXZHKXSBOYNTGCFPTMEFWPREEHKXGGARZOINIQCBGQODDALCTUMFCYSJDKMIIOZFKUMEPQOIASBXSUHCJAXEOWJVRGADUWHUCFVDGSADWZJVPTZMPGREFTSUXLNYEFLBPNOIWTQYF");

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
    msg.setTimeStamp(0.12493728781530489);
    msg.setSource(36852U);
    msg.setSourceEntity(52U);
    msg.setDestination(61748U);
    msg.setDestinationEntity(66U);
    msg.name.assign("RJROUACOZWSAZLHMTBBKGHWTQZLBSHUUVTGPDLETWNDBWNAODFUKHCQESJQLPUFHCPQXHTXIYJKEDVFDFBLGYIYPYZUGPZQAERJZIPCMCNKWFQDWAAZCKXIJBGEJFMZRFYWIBZYDBVKQKANHEJCO");

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
    msg.setTimeStamp(0.8074891710028592);
    msg.setSource(15792U);
    msg.setSourceEntity(148U);
    msg.setDestination(19158U);
    msg.setDestinationEntity(116U);
    msg.timeout = 1591906918U;

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
    msg.setTimeStamp(0.7575904988282743);
    msg.setSource(60001U);
    msg.setSourceEntity(40U);
    msg.setDestination(45U);
    msg.setDestinationEntity(224U);
    msg.timeout = 1055575401U;

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
    msg.setTimeStamp(0.006531013204997271);
    msg.setSource(64942U);
    msg.setSourceEntity(103U);
    msg.setDestination(61872U);
    msg.setDestinationEntity(96U);
    msg.timeout = 1645265883U;

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
    msg.setTimeStamp(0.6172088928396572);
    msg.setSource(62813U);
    msg.setSourceEntity(155U);
    msg.setDestination(63653U);
    msg.setDestinationEntity(156U);
    msg.sessid = 2248232146U;

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
    msg.setTimeStamp(0.8974123008657072);
    msg.setSource(14335U);
    msg.setSourceEntity(96U);
    msg.setDestination(9102U);
    msg.setDestinationEntity(183U);
    msg.sessid = 2676783966U;

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
    msg.setTimeStamp(0.056560687974158474);
    msg.setSource(59728U);
    msg.setSourceEntity(180U);
    msg.setDestination(64187U);
    msg.setDestinationEntity(93U);
    msg.sessid = 1983438681U;

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
    msg.setTimeStamp(0.36760412583716195);
    msg.setSource(40663U);
    msg.setSourceEntity(79U);
    msg.setDestination(27152U);
    msg.setDestinationEntity(97U);
    msg.sessid = 3093509051U;
    msg.messages.assign("VFXHMYHXIONSSYONFHSYWSUXAODRENBTHVNURLYKGNCW");

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
    msg.setTimeStamp(0.9115340132839457);
    msg.setSource(40916U);
    msg.setSourceEntity(59U);
    msg.setDestination(12401U);
    msg.setDestinationEntity(205U);
    msg.sessid = 3959557499U;
    msg.messages.assign("DBMLUQBDLIOEYMDPXTJWO");

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
    msg.setTimeStamp(0.15899133237883067);
    msg.setSource(43172U);
    msg.setSourceEntity(83U);
    msg.setDestination(61664U);
    msg.setDestinationEntity(234U);
    msg.sessid = 264494217U;
    msg.messages.assign("SJXNXPFFNSIMISROWWHIPQKKPXEDEPIIJEGUUMDKNGWQKOXLJDMYBXJWMIAEUCTOKOBBXHADCMLHCOQZUUSLIJJCNQZBVGMSUSMRLYWJQDVFZHGBPDHLBVRDLYQWVYHKWANVNTTASCHEVELUBPRNCKHZBGYGEKAYLREQKTFPAIAZNZRXDSWSWTZYFPCAABFHDGITTGTQFLFXOVVELZFZIGPQYXVCMJRCAWFGJUYYNUKJZN");

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
    msg.setTimeStamp(0.9818798523697896);
    msg.setSource(59492U);
    msg.setSourceEntity(210U);
    msg.setDestination(1184U);
    msg.setDestinationEntity(207U);
    msg.sessid = 2480444209U;

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
    msg.setTimeStamp(0.46934496942674875);
    msg.setSource(51148U);
    msg.setSourceEntity(238U);
    msg.setDestination(60727U);
    msg.setDestinationEntity(244U);
    msg.sessid = 3148230685U;

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
    msg.setTimeStamp(0.4730999072639629);
    msg.setSource(1893U);
    msg.setSourceEntity(148U);
    msg.setDestination(53748U);
    msg.setDestinationEntity(206U);
    msg.sessid = 1699149570U;

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
    msg.setTimeStamp(0.9064080588425061);
    msg.setSource(1268U);
    msg.setSourceEntity(109U);
    msg.setDestination(40031U);
    msg.setDestinationEntity(54U);
    msg.sessid = 159434704U;
    msg.status = 206U;

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
    msg.setTimeStamp(0.4338223726457672);
    msg.setSource(47513U);
    msg.setSourceEntity(164U);
    msg.setDestination(61037U);
    msg.setDestinationEntity(139U);
    msg.sessid = 1873821379U;
    msg.status = 224U;

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
    msg.setTimeStamp(0.18516638271670205);
    msg.setSource(46325U);
    msg.setSourceEntity(45U);
    msg.setDestination(29683U);
    msg.setDestinationEntity(198U);
    msg.sessid = 1881044917U;
    msg.status = 43U;

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
    msg.setTimeStamp(0.811263701048837);
    msg.setSource(6605U);
    msg.setSourceEntity(225U);
    msg.setDestination(1580U);
    msg.setDestinationEntity(244U);
    msg.name.assign("FGTFZSXYPZEEUNNZWDZTHJDPGKFOOTCTQQO");

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
    msg.setTimeStamp(0.6516036026045461);
    msg.setSource(13565U);
    msg.setSourceEntity(57U);
    msg.setDestination(51391U);
    msg.setDestinationEntity(164U);
    msg.name.assign("WFAEJUAFCLLRMCKDWATNMBXIHJOUPZXO");

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
    msg.setTimeStamp(0.38781572102859563);
    msg.setSource(39970U);
    msg.setSourceEntity(67U);
    msg.setDestination(53759U);
    msg.setDestinationEntity(166U);
    msg.name.assign("DPFPMJCSKGDPKEXKKVVLWEHVBAGLWUUTTOAVXBBRCOSSEWJCCPZCKVOBONEIQCHNXZRECHWYOGIYXQPOQBHWRXITIXRSYCJDDHBQSPZEFDAHFUQJKMEQHMJSTULZTSMAAABCRZYRNLPPROQELIUYRKROZWVFFGVANUHTQMWVSJYYILNWFOAHZLUFINFPDSINLXYVTWM");

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
    msg.setTimeStamp(0.709874710798137);
    msg.setSource(64631U);
    msg.setSourceEntity(75U);
    msg.setDestination(30545U);
    msg.setDestinationEntity(1U);
    msg.name.assign("YQTSGWTSAJZADLLEWSQCEZFTZVMKWNGYMILDBGFUVMCCLSMOIQXPAQJISLLPUTHFHPXKOULQSJWUZVQHVBRIAJCOVFRSRUWTMJITXBVORNPIXAGDINOPOBTKWJEVMRDEIJYGLZ");

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
    msg.setTimeStamp(0.5844028586595965);
    msg.setSource(20507U);
    msg.setSourceEntity(111U);
    msg.setDestination(46452U);
    msg.setDestinationEntity(125U);
    msg.name.assign("KFHKBNMDNKMDHEAJURYSBRFKFPZTISIJQYULXIOOQPQNDFZVSHTGJUKWRXEUOPWYUKBOTUAHEWLOTDSXTWYJGWTWRRCVGVSGYFZARDAMAQFREYMQDLAEMVXUEASVSMCKBADGGLCPMNYVCZEBLPNFLILOWTHYJVVWHCGPKMMHUCJISIZPIWBKVCYTFZUPDTZCOBXIFKOONZGENZASRLIJEXTB");

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
    msg.setTimeStamp(0.3550146512813228);
    msg.setSource(1945U);
    msg.setSourceEntity(172U);
    msg.setDestination(39855U);
    msg.setDestinationEntity(211U);
    msg.name.assign("IZGRDSVPRBLWANCHAZQMHJMTWNMFOADHYRQPDYNVBPETARJLNJKIBFPMFSKGEBSMZXLICSWTSFYXNQSDESWFUQZHVKETLYIUUQJOPBRUPEWXDUHXIRHNAGRGFCPJCGWYUVPJYVCBMVDNOQYDZMBBNJHGLLCADUQGPULEXMIAQHAICETREZDKGKSIYLZMBAVGX");

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
    msg.setTimeStamp(0.01206130798763494);
    msg.setSource(14635U);
    msg.setSourceEntity(64U);
    msg.setDestination(22132U);
    msg.setDestinationEntity(250U);
    msg.type = 231U;
    msg.error.assign("VSSJFTMNZJMTQBEYIGNQFIXXSYNFJWWEHHUCMDQBCBLLROAKFZRZGDOVMQGCPVKDBNNDIMPJKLIVLAWJJAWFOKRGPCBWOMAZPP");

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
    msg.setTimeStamp(0.5075569502155166);
    msg.setSource(4139U);
    msg.setSourceEntity(0U);
    msg.setDestination(39790U);
    msg.setDestinationEntity(219U);
    msg.type = 128U;
    msg.error.assign("JQDBTLUWHJYCZNCMWYKLQAIZLTYHWLQXRPHJQFNHIJKGCMBFROYGVASSXPXFJOHSOCLEUCVXNDBIXCXNVFDAYDSLMMKQEVLZHMHXUOFIPPZSATONAFNVFGAXYKEJDHXUKWBSEIGKAPPCFIBVTDVVDOERZGVBZNUYSRGOOCPWMGEWNWCTWROJRKYTPLBTLSEHQABKIHJURUGIXZQPINTDEERFCNLRKRVSFPQTYOSYQJAKZIWDGEBMTUWJZG");

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
    msg.setTimeStamp(0.12688920034578166);
    msg.setSource(39004U);
    msg.setSourceEntity(99U);
    msg.setDestination(37992U);
    msg.setDestinationEntity(121U);
    msg.type = 235U;
    msg.error.assign("GTQSIWXOMOZYUOWHPAETIIIRDHBLGDSLBAKVTTHCBMAAPZHDPPQSVJGAULWONGBNCXNNNWHZVKUYIEQEQUKVBYRBFXBOKFUZZFIMRJFHXVXHSFAZPXHVQUCREGKTLIQDOTJGJYJQEFPOPCPHOUJITMWIFYXZSAVYKDXWOLENQASTWMRLCWVMPEFSCM");

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
    msg.setTimeStamp(0.44795902531970866);
    msg.setSource(11701U);
    msg.setSourceEntity(129U);
    msg.setDestination(56554U);
    msg.setDestinationEntity(201U);
    msg.seq = 3444U;
    msg.sys_dst.assign("LZBGPDACWFHZUFBYYJKTYTDPPTPJGBNSANIDJPJFOUKGWHQVNKMYBKVIDBCABWTMBSEXVFLSFRFDWQOPQREVRNSMOLMZKLPNHFNYCYPQQKQMKEOXJIZIQHMGBRZHVURRFDKDLTTVTKHXQWKJVUVZVIDEXUEGWGSPOEYWAMIODHSGJXRMSLIBGOQRCEAYGHAROLSNSNLIUXXGCTNCAMQXCJDATCVZYYMWI");
    msg.flags = 204U;
    const char tmp_msg_0[] = {-11, 1, -14, 9, -36, 98, -67, -88, 18, -113, -4, -51, -72, 115, -68, 30, -91, -63, -126, -49, 38, -27, -44, -124, 57, 117, -21, -116, 65, -11, -91, -47, 101, -58, -15, 92, -6, 107, -62, -85, 42, 19, 19, -123, 117, 53, 55, 35, 0, -21, -126, -89, -63, 9, 72, 50, -53, 101, 28, 99, -18, 58, -46, 49, -117, 118, -6, 2, -18, -75, -64, -52, -20, 69, -101, -53, -36, -84, -12, -9, -52, 28, -54, -81, -102, 59, -45, -29, -2, 20, 113, -103, -49, 121, -92, 46, -112, -42, 33, -14, -90, -12, -46, -127, 30, -121, -25, 123, 57};
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
    msg.setTimeStamp(0.12507290363570023);
    msg.setSource(7560U);
    msg.setSourceEntity(220U);
    msg.setDestination(61253U);
    msg.setDestinationEntity(224U);
    msg.seq = 37642U;
    msg.sys_dst.assign("EREAVJLHZGJDRKSJCNCYSRDPVPLQGCHUGTAUEOHLQWSFSSFGYTJZPRKFGZGKITEXBGOVMIBTOJMXFQPRVGVFWKTDHINKRWBOYSINSUQYZNMCNROZBNUPBTHSMZBSCJBAWQQTPEQAMCHVEPDMKKABDYUAPPRVLMTVZOWYFINCVJEIBZMHRAJFXKZSVHIYAWDLQFOKXYYRABJUMXIZDWLNOUKNHELDGXCXXEOQGIXEJIULU");
    msg.flags = 148U;
    const char tmp_msg_0[] = {118, 84, -15, -68, 98, 75, 79, 30, 65, -107, 47, -99, -97, 50, 60, 84, 104, -72, -85, -52, -97, 119, -14, 35, 69, 94, 110, 105, 55, -108, -91, -3, -43, -94, 83, 1, 10, 21, -41, 57, -100, 41, -35, 9, 120, 112, -20, 33, -17, 1, 59, 11, 16, -107, -110, 38, 59, -124, -59, -39, -13, -68, -12, -128, -117, -77, -61, -83, -13, -118, 89, 119, 77, 82, -78, 26, 43, -56, -125, -116, 12, -107, -27, -13, 76, 7, -62, 7, -7, 72, 43, 124, 125, -79, -34, 92, 68, 21, 88, -115, -28, -125, -54, 28, -1, -31, 38, -95, 108, -66, -97, -98, 69, 71, 106, -110, -90, 63, -6, -39, 57, -59, -26, 125, 46, -92, 126, -115, -55};
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
    msg.setTimeStamp(0.07368262271937631);
    msg.setSource(43203U);
    msg.setSourceEntity(233U);
    msg.setDestination(32504U);
    msg.setDestinationEntity(96U);
    msg.seq = 34170U;
    msg.sys_dst.assign("MGDWLMPXPSIMPIUFHYJVDBKPFCKOXAKYGPMIVOWXXFVHUJRNXPGDGKRYUWQUHKKFELRTJYDZQWYBZJWUSYSEIHYZBWGJINMFYESSKTKKOSPCGZRHBBTHOEJZZHURRSZCWWBUHGDVADFENXMRKTEQEAOJJZDTOQQLLTVLMBQNGMPNATE");
    msg.flags = 101U;
    const char tmp_msg_0[] = {20, 126, -119, 43, 40, 92, 39, -45, -53, 100, -55, -124, 107, -50, -6, 90, -94, 78, -6, -106, 74, -49, -106, -67, 77, 67, 117, -121, -39, -113, 121, -24, -107, 101, -77, -83, -70, -111, 112, -32, 19, 26, -88, -22, 12, 69, 62, 116, -38, -65, 50, 53, -117, -85, 124, -58, -79, 59, 41, 2, -118, -17, 78, -14, -76, 107, 29, 17, 83, -2, -117, 14, 20, -54, -50, 43, 61, -29, -21, 25, -37, -107, -70, -128, -76, 73, -35, -42, -22, 48, 94, 39, -93, 116, -33, -21, -57, 100, -97, -104, 82, -29, 6, -87, -42, -122, -96, 119, -121, -73, -21, 48, 32, 59, 8, -110, -94, -66, -1};
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
    msg.setTimeStamp(0.586512004222751);
    msg.setSource(45530U);
    msg.setSourceEntity(118U);
    msg.setDestination(57360U);
    msg.setDestinationEntity(74U);
    msg.sys_src.assign("JJXLYRODPUESGFAVDRCRQQSBWSVZXHVYBSQXGIQZWDWTHNXNROYAQIHCKNJKEGQOXVYUIAOFWQKLVJMPSRWGCACZTKSMBUBMPHLXPTDSKGBWFERDHSUIRISRJDJZXQHNNLAUKZQLBCMRAVTMOAHTIS");
    msg.sys_dst.assign("HCOCBCRAYQMLZMUOLJYXPKZSXGWSZTZNBDVTGTYAMVAMKWUITIYKHSZGNAFVGKFBXGNVDRUEEWBWES");
    msg.flags = 238U;
    const char tmp_msg_0[] = {-126, 78, 32, -29, 92, -47, 21, -101, 44, -11, 34, -71, -73, 61, 119, -7, -124, -52, -32, -16, -125, 74, -99, -105, -16, 97, 85, 78, -122, -67, -33, 29, 78, 42, -72, -113, 32, -76, 96, -78, -55, 5, -64, -41, 1, -88, 78, -48, -23, -46, 42, 22, -31, 35, -29, -45, 124, 79, -120, 36, 19, -99, 114, -91, -114, 14, -52, -29, -53, 81, 80, -58, -56, 62, -55, -75, -121, -42, 94, 58, -91, -113, 61, 117, -91, -30, 53, -25, 16, -120, -92, 70, 81, -62, -107, -20, 20, -86, 104, 16, 0, -13, 41, 62, -5, 81, -56, -101, 119, 40, -107, -81, -1, 62, -99, 5, 35, -48, 109, -83, 32, 52, 101, 10, -106, 6, -93, 45, -66, 84, -102, -101, -118, -9, -56, -30, 24, 58, -91, 48, 126, -120, -87, -8, 53, 9, -38, 114, 114, 37, -39, 55, 4, 30, -12, 95, -102, 68, 81, -75, 53, -49, 36, -8, 46, -38, -65, 62, -114, 120, 99, 31, -9, 96, 80, 20, -128, -5, -77, 47, -73, -103, 61, 36, 78, -2, 16, -76, -98, -10, -74, 98, 59, -26, -92, 108, -98, -24, 70, 117, -1, -7, 63, 119, 17, 35, 103, -93, 122, -104, -56, 120, -60, 116, 32, -81, -27, -65, 96, 48, 123, 56, 69, 14, 125, 19, 77, -31, 94, -22, -119, 70};
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
    msg.setTimeStamp(0.8150815860824968);
    msg.setSource(41305U);
    msg.setSourceEntity(215U);
    msg.setDestination(26784U);
    msg.setDestinationEntity(209U);
    msg.sys_src.assign("IPPEGTXNYKUVEBZPOJAVMNQDIMPVLTBYOQVNCTZGLSPRHWIXWMYGMMEPFUCHJSXGQ");
    msg.sys_dst.assign("MSPYJIZMEFQQUU");
    msg.flags = 148U;
    const char tmp_msg_0[] = {87, 5, 90, -76, -78, 41, 39, 95, 113, 38, 108, 92, -118, 107, 41, 71, 77, -11, -37, 11, 25, -25, -90, -36, 69, 89, -13, 93, 56, 34, 8, 31, 108, 119, -89, 53, -62, 100, -68, -5, -122, -57, 125, -122, 15, -47, 28, -95, -119, -46, 72, 106, 30, -87, 79, 12, 39, -124, 19, 48, 106, -16, 37, 120, 45, 117, -124, 124, -3, 39, 88, 75, 19, -18, 118, 111, 83, -44, -110, -32, -86, 72, 106, -30, 7, -56, 110, 100, 28, 24, 81, -27, 45, 35, 3, -32, -41, 60, -25, -34, 121, -39, -86, -65, 92, 70, 56, 42, -114, 56, 39, 46, -21, 14, -21, -55, -8, -127, 73, -99, -21, 0, 116, 76, -119, -122, -73, -3, 81, 79, -79, 99, 51, 81, 43, 54, -72, -28, 29, 10, -72, -103, -125, -36, 1, 67, -52, 104, 103, -106, -60, 15, 20, 66, -111, -100, 56, -109, -48, -69, 77, 37, -7, -73, -67, 76, 7, -97, 27, -38, -65, -46, 51, -70, 95, -52, -88, -34, 71, 111, 35, 108, -111, -79, 82, 60, 98, 57, 125, 67, -70, -97, 0, 109, 99, -34, -105, -64, 67, -77, -95, 102, 71, 87, -80, 51, 21, -75, -40, 65, 78, -45, -77, 82, -88, -69, 103, 102, -67, 106, 0, -57, 118, 108, 77, 1, -39, -40, 63, 16, 40, 67, 41, 40, -128, 13, 115};
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
    msg.setTimeStamp(0.9270050932153433);
    msg.setSource(4194U);
    msg.setSourceEntity(128U);
    msg.setDestination(32824U);
    msg.setDestinationEntity(202U);
    msg.sys_src.assign("RCGRIIZUHFNHMGBHKOLMCQFGUBTPRRMPGOZHJCVNSAQIFENTYBMDYKYWPLKOIUHJHEJDDUQDCDDXNECFQQLEJXXCZRIONVSOGIEYCAMVSUAJLFOEFSBD");
    msg.sys_dst.assign("RPPKBGIUHVSDMFLGBBYJQMZWXPJQQCEXMFOHECJHMLEDSWGLYXLIJOQZFCTALIAATZRKAUWWKKRB");
    msg.flags = 92U;
    const char tmp_msg_0[] = {-87, -72, 73, -125, 49, 13, 59, 91, 27, 18, -105, -70, 54, 11, 80, 39, -64, -107, -43, 98, 67, 41, 76, 91, -54, 15, -64, -91, -98, 57, -110, 77, -91, 7, 39, -99, -60, -10, 32, 120, -3, 76, 33, -5, -100, 62, 9, 37, 38};
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
    msg.setTimeStamp(0.03417500216484881);
    msg.setSource(10825U);
    msg.setSourceEntity(71U);
    msg.setDestination(36275U);
    msg.setDestinationEntity(84U);
    msg.seq = 3904U;
    msg.value = 161U;
    msg.error.assign("LOXFQXBFWQFJKDYAWLWEZKI");

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
    msg.setTimeStamp(0.7177369866223451);
    msg.setSource(57312U);
    msg.setSourceEntity(95U);
    msg.setDestination(20198U);
    msg.setDestinationEntity(52U);
    msg.seq = 42279U;
    msg.value = 96U;
    msg.error.assign("DYCBAZAKWMOGLPZVGDPXYOKXEYMTMFPRUJNPOMKXBHAZEDLGSHBXUGWFTDKIJGJRVPSYCTOLVGM");

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
    msg.setTimeStamp(0.9528512969906446);
    msg.setSource(55814U);
    msg.setSourceEntity(106U);
    msg.setDestination(61923U);
    msg.setDestinationEntity(95U);
    msg.seq = 41430U;
    msg.value = 38U;
    msg.error.assign("PZQIFVTMZTQFO");

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
    msg.setTimeStamp(0.9023438581232835);
    msg.setSource(50274U);
    msg.setSourceEntity(134U);
    msg.setDestination(60347U);
    msg.setDestinationEntity(116U);
    msg.seq = 54700U;
    msg.sys.assign("CHJPWYDGTCVXLHWOHJRDYHJXGBLPZBKLYAXBXYVUJBSFCMRVZAVSNKNCNESNIGCKTZSQIDWYIHOLAJSNQEBTWQDVNQWYPEVJJRJFAXIJQIVSGKTWMXOATFRLBSWOUQCORECORUSDBYZTKDDRUCKPRGASOADQADCXTYBHVUKGUMONZO");
    msg.value = 0.8978257825531603;

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
    msg.setTimeStamp(0.7285725243070816);
    msg.setSource(45813U);
    msg.setSourceEntity(161U);
    msg.setDestination(51955U);
    msg.setDestinationEntity(132U);
    msg.seq = 42169U;
    msg.sys.assign("DPOFRVHSBGCTLJIHJRSWLWQUBZPUYZCNZNFAFKYEOVNISQEBHOSWXOJMIWPPFZXTUTWXNCCXUUXMBQASHUEQBPYJDSHAKFLURYGVKWFSHSHDFZRLXLIZRFARVMK");
    msg.value = 0.21848028858135193;

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
    msg.setTimeStamp(0.21917232167342804);
    msg.setSource(30889U);
    msg.setSourceEntity(223U);
    msg.setDestination(32874U);
    msg.setDestinationEntity(248U);
    msg.seq = 41035U;
    msg.sys.assign("HYSTEIJPIHPVOKBYLOBQCLUNFAFGZVEPWRTQKTFKZRJIIJULYZRXZLXXONHHYLOXEHTIZCTYDZOOCLGPIIBPSUPAQWRONKFALFDRPNGVMVNSWTAVUJKQGSWLVPXKZQSIVID");
    msg.value = 0.6517831817867592;

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
    msg.setTimeStamp(0.11223316000495898);
    msg.setSource(48104U);
    msg.setSourceEntity(105U);
    msg.setDestination(30099U);
    msg.setDestinationEntity(180U);
    msg.action = 167U;
    msg.longain = 0.6515903061871954;
    msg.latgain = 0.007608076806119413;
    msg.bondthick = 2006909329U;
    msg.leadgain = 0.4206872020402497;
    msg.deconflgain = 0.9433518356800978;

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
    msg.setTimeStamp(0.8073462563314161);
    msg.setSource(43507U);
    msg.setSourceEntity(138U);
    msg.setDestination(21797U);
    msg.setDestinationEntity(181U);
    msg.action = 6U;
    msg.longain = 0.3352700655390407;
    msg.latgain = 0.5514912676682436;
    msg.bondthick = 1430333974U;
    msg.leadgain = 0.48994446619354526;
    msg.deconflgain = 0.9648433379245315;

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
    msg.setTimeStamp(0.9693895172343231);
    msg.setSource(54620U);
    msg.setSourceEntity(235U);
    msg.setDestination(33888U);
    msg.setDestinationEntity(216U);
    msg.action = 72U;
    msg.longain = 0.7798357703812848;
    msg.latgain = 0.057173937128717434;
    msg.bondthick = 1959943504U;
    msg.leadgain = 0.040395244957236454;
    msg.deconflgain = 0.8608876426531897;

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
    msg.setTimeStamp(0.11143577212511735);
    msg.setSource(51906U);
    msg.setSourceEntity(150U);
    msg.setDestination(47716U);
    msg.setDestinationEntity(92U);
    msg.err_mean = 0.17520140068985246;
    msg.dist_min_abs = 0.4463154116493695;
    msg.dist_min_mean = 0.8433036602715792;

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
    msg.setTimeStamp(0.5177344053507308);
    msg.setSource(47977U);
    msg.setSourceEntity(84U);
    msg.setDestination(30645U);
    msg.setDestinationEntity(74U);
    msg.err_mean = 0.8862999931684653;
    msg.dist_min_abs = 0.10450083945263433;
    msg.dist_min_mean = 0.5316070783193412;

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
    msg.setTimeStamp(0.7994381923728759);
    msg.setSource(48457U);
    msg.setSourceEntity(176U);
    msg.setDestination(27436U);
    msg.setDestinationEntity(75U);
    msg.err_mean = 0.00031351204818674816;
    msg.dist_min_abs = 0.2812025261730504;
    msg.dist_min_mean = 0.6873530400437351;

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
    msg.setTimeStamp(0.6647253956818128);
    msg.setSource(29271U);
    msg.setSourceEntity(36U);
    msg.setDestination(20248U);
    msg.setDestinationEntity(134U);
    msg.uid = 157U;
    msg.frag_number = 47U;
    msg.num_frags = 174U;
    const char tmp_msg_0[] = {86, -109, 118, 7, -71, -11, 114, 3, 106, 83, -84, -70, 29, -78, 120, -56, -101, 88, 52, 22, -82, 98, 74, -65, 5, 56, 70, 82, -99, 12, -75, -67, 100, -46, 7, -88, 27, -117, -23, 93, -12, -126, -28, 114, -95, -74, 78, -57, -102, -38, 2, -89, -62, 29, -90, 36, 85, -27, -66, -81, 2, -32, -69, -126, -23, -55, 14, -26, -121, 92, 79, -9, 68, 21, 12};
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
    msg.setTimeStamp(0.9607035015486668);
    msg.setSource(24558U);
    msg.setSourceEntity(84U);
    msg.setDestination(12566U);
    msg.setDestinationEntity(106U);
    msg.uid = 52U;
    msg.frag_number = 82U;
    msg.num_frags = 166U;
    const char tmp_msg_0[] = {77, -66, 34, -83, -91, -118, -120, 37, -100, -105, 116, -121, -91, 93, 23, 18, 98, -122, 93, -83, -9, -100, 12, -94, 21, -94, -105, 60, -112, 22, 121, 45, 82, -113, -42, -62, 89, 118, 124, 42, -115, -93, 8, 22, 85, 57, 18, -93, 0, -8, -71, -54, -106, -61, 28, -122, 53, -108, -114, 71, -110, -43, -50, -71, 61, 125, 87, -121, -33, 53, -79, -37, -51, -57, 105, -103, 47, 18, 72, -29, 13, -53, -81};
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
    msg.setTimeStamp(0.5691626362025138);
    msg.setSource(22348U);
    msg.setSourceEntity(200U);
    msg.setDestination(63980U);
    msg.setDestinationEntity(5U);
    msg.uid = 250U;
    msg.frag_number = 27U;
    msg.num_frags = 114U;
    const char tmp_msg_0[] = {80, -20, 21, -8, 125, 66, -32, 102, 44, -10, -77, -18, -44, 17, -81, -45, -37, -8, -75, -117, 81, 46, 33, -34, 38, 126, 116, 99, -112, -112, -56, 78, -72, 58, -3, -101, 103, 106, -52, -54, -53, 78, 90, -89, -121, 107, -51, 109, 81, -111, -102, 97, -42, -7, 66, 5, 44, -64, 124, -73, -112, -103, -49, 124, -25, 51, 62, 67, 38, 124, -41, 125, -41, 101, -39, -86, -120, -107, -119, -34, 39, 35, -15, 126, 59, -111, 76, 97, -5, -57, 41, 57, 68, -97, 54, 70, -114, -5, -87, 3, -114, -30, 80, -80, -88, -11, -71, -74, 10, -20, 111, 126, 62, 113, 15, -7, 82, 3, 55, 58, -74, 73, 124, 21, -18, -107, 42, 33, -120, -97, -126, 64, 120, 102, 93, -64, -113, -20, 7, -22, 105, -97, 71, -92, 55, -103, -75, -63, 23, -17, 14, -63, 107, -36, -25, -91, -29, -100, 75, -48, -15, 19, 103, -67, 25, 16, 103, 102, -72, 72, 89, 39, -97, 34, 106, 98, -107, -35, -118, 96, -1, -128, 105, -10, 39};
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
    msg.setTimeStamp(0.7589215411880044);
    msg.setSource(44719U);
    msg.setSourceEntity(26U);
    msg.setDestination(18140U);
    msg.setDestinationEntity(233U);
    msg.content_type.assign("NFGWZFCQQSTWLJOUVBUYRJYUSCIRKHBMEJNQPPMVYWSJPCGLWWJORSINHGNDOZMVALEZIESPNDVAIGIXVKUEADHTAFVRLVBAJLYWRGFMHFTKLMDUJRIYITQMRWCGZTJSOIDTDLCKUTPQFBEBIXJUUIZFXBORAHPKQAEGHQSDKZXXHCAEC");
    const char tmp_msg_0[] = {118, -17, 51, -66, 63, -89, -34, 15, 44, -49, -49, 27, -93, 86, 125, 91, -47, -125, -105, 113, -30, -43, 17, 92, 44, 91, -63, 6, -68, -100, -52, -103, -127, 102, -125, 77, -93, -77, -33, 8, -81, 36, -55, -27, -73, 99, -55, 54, -51, 74, -69, 121, 79, 26, -65, 2};
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
    msg.setTimeStamp(0.47133156972449297);
    msg.setSource(51980U);
    msg.setSourceEntity(185U);
    msg.setDestination(52178U);
    msg.setDestinationEntity(197U);
    msg.content_type.assign("YZDHGIBQENCONBRKWCPLRIUZFVYRHOHNAEAUALFFBULNHCUINFGKUXSJOTTQEVYUGSUGXRWVUVXZAOIZWPANNCJXGMLERQCZETGLXMHBJBHFDDSJFCSTGVRZFTRANYMTQYDOVZPLZHXTSDJMTPKGVMCQRYLBODBQAJMLCFDXOGPYKOJEWYIWEDW");
    const char tmp_msg_0[] = {51, -38, -19, 10, 105, -52, 123, -51, -59, -60, -68, -49, -45, -74, 79, -108, 3, -89, 77, -2, 115, -2, -127, 6, 100, 72, 19, -67, 66, -46, 12, -20, 43, -122, -127, -42, 85, 28};
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
    msg.setTimeStamp(0.05326350989041939);
    msg.setSource(7516U);
    msg.setSourceEntity(144U);
    msg.setDestination(22063U);
    msg.setDestinationEntity(187U);
    msg.content_type.assign("PBKEXKQTXSBIPDTUEEPKRTJXDMAHPUKOLFUDFGOJRUJEUUMPIVIKRUCGQPGYJODMKKSJAYFNAHCHDDGUSQBHNWLJIYORVHRDDXCIWQQBBFIGQLARLMZZBWCHWXZBVRUCWQOZLNAZTNWTIULPBILLJNPFFYWDZHKVCZJEENXMSSDEELMGZYPKPTTTCOFOBCJGFVOOLSXQZRRSNSTHYCVHAJ");
    const char tmp_msg_0[] = {-17, 21, -17, -11, 17, -37, -73, -55, 29, -46, 48, 54, -55, -39, -102, 5, -20, -95, 93, 22, -7, -128, 29, 76, 63, -24, -81, -31, 97, 73, -76, 57, 53, -43, -108, -101, 26, 29, -112, 111, 54, 121, 25, -12, 100, -48, 12, -64, 34, -105, -22, 62, -110, 95, 83, -33, 0, 15, -13, 124, 43, -63, -101, -77, 41, -91, -28, 66, -66, -23, -102, -81, -95, 21, 20};
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
    msg.setTimeStamp(0.47997510356878403);
    msg.setSource(7068U);
    msg.setSourceEntity(44U);
    msg.setDestination(51011U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.32869957532839156);
    msg.setSource(51365U);
    msg.setSourceEntity(5U);
    msg.setDestination(49311U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.23926920327313983);
    msg.setSource(25593U);
    msg.setSourceEntity(153U);
    msg.setDestination(45251U);
    msg.setDestinationEntity(184U);

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

  return test.getReturnValue();
}
