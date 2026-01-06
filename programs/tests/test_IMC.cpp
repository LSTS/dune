//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 8843584cef24468b60bec4fc699ea937                            *
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
    msg.setTimeStamp(0.062005692406832846);
    msg.setSource(36357U);
    msg.setSourceEntity(176U);
    msg.setDestination(61894U);
    msg.setDestinationEntity(76U);
    msg.state = 179U;
    msg.flags = 80U;
    msg.description.assign("SZUACBRGOUXMPTKALQEZRMILESCGRJQVLBQVFTIIGGPIUWLWVECHWZBKDSXCAKDYODNPBIK");

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
    msg.setTimeStamp(0.23686794501146158);
    msg.setSource(54331U);
    msg.setSourceEntity(42U);
    msg.setDestination(47509U);
    msg.setDestinationEntity(166U);
    msg.state = 26U;
    msg.flags = 138U;
    msg.description.assign("LDVPEQLNVMUVHPFWKDTAPVDJHNRGXUFYYLCYJKVPSDUCMEKXRDLEVOFARUKBZHYUZJMTQEFYHJXBFIMTQPPJNELQZKWPSDWIZDUAASDSSSSWOOOTMYNNXIWYBWCWRXFTQVOICQXILZTNITBXJFOSMVWEJHCKOJRZPEIILCZYHAGNARKGZK");

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
    msg.setTimeStamp(0.7758727223125019);
    msg.setSource(64903U);
    msg.setSourceEntity(235U);
    msg.setDestination(28816U);
    msg.setDestinationEntity(80U);
    msg.state = 93U;
    msg.flags = 165U;
    msg.description.assign("NGTQVUSWEUOTKJWCGJHQTACJLYXDRIFWZSMOZZUXEPKSVVSKTMD");

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
    msg.setTimeStamp(0.9250501518239131);
    msg.setSource(5152U);
    msg.setSourceEntity(105U);
    msg.setDestination(1626U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.283508585049283);
    msg.setSource(5423U);
    msg.setSourceEntity(239U);
    msg.setDestination(1806U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.8546649952493087);
    msg.setSource(25066U);
    msg.setSourceEntity(113U);
    msg.setDestination(6982U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.34689199358650225);
    msg.setSource(61434U);
    msg.setSourceEntity(68U);
    msg.setDestination(27333U);
    msg.setDestinationEntity(210U);
    msg.id = 53U;
    msg.label.assign("XINVAKRYSEJRGJBJYKRDVXDWKLFQULXZKNRTAOQIOAGZWSLPISCMPCFGVUZGOWPDRJQBWTXHGUG");
    msg.component.assign("MKQUGWDKXRSNNBDUOIYIHJVEJSUQJ");
    msg.act_time = 49145U;
    msg.deact_time = 5482U;

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
    msg.setTimeStamp(0.11865862166060948);
    msg.setSource(25989U);
    msg.setSourceEntity(78U);
    msg.setDestination(14076U);
    msg.setDestinationEntity(231U);
    msg.id = 222U;
    msg.label.assign("IHJNXPBQSGJPLRBS");
    msg.component.assign("JWDRHSBLZQOIKMOWLSXAJKCXJHGZKVHHMZRXCFHPYKAIVQGIVHRKNIJBPZMDAZDMKWLNMDORYCOAEGELCBELOIPYERJAKAGXZLEWPPRERKUFJXSWRGJFGVCWOMSVEFBNUFDMDIDGGXVMNKGOQIYTVACULFNWVDQEOCPFDOCJTTRCYJESQWTNIQZVJPDSUQYYPUZCUXNBAHNTBYRTYPALBHM");
    msg.act_time = 29888U;
    msg.deact_time = 13570U;

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
    msg.setTimeStamp(0.883880323540357);
    msg.setSource(45695U);
    msg.setSourceEntity(207U);
    msg.setDestination(25492U);
    msg.setDestinationEntity(7U);
    msg.id = 31U;
    msg.label.assign("SZEFABMYBZPPCHEIQMJLRMQVLUORXFNIC");
    msg.component.assign("OMHWWFBIZAHSJYZXWKSALLWSALGBENWBQTTKIHIGJYNCROQBRZVQIQJGQCMONJYEJMFALPYXAYMIZJBCCEUZJCVUDPWNJRAFVSDOSPMIYLRAETOSONDQHPTGUUBRPWEOBEIDYGCNKKPZDKPDHGOXMVKGZGBWTJKOVLVCPQXFLGDYSXHRRPSRLKVCIDBMBEMYRZJHTLXVXZDIFUNNHIUNSF");
    msg.act_time = 63164U;
    msg.deact_time = 41895U;

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
    msg.setTimeStamp(0.4296723018965303);
    msg.setSource(13074U);
    msg.setSourceEntity(18U);
    msg.setDestination(61486U);
    msg.setDestinationEntity(168U);
    msg.id = 76U;

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
    msg.setTimeStamp(0.8782556068981187);
    msg.setSource(33699U);
    msg.setSourceEntity(93U);
    msg.setDestination(40201U);
    msg.setDestinationEntity(241U);
    msg.id = 8U;

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
    msg.setTimeStamp(0.011174029594641866);
    msg.setSource(37490U);
    msg.setSourceEntity(108U);
    msg.setDestination(63226U);
    msg.setDestinationEntity(37U);
    msg.id = 243U;

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
    msg.setTimeStamp(0.30806016774168166);
    msg.setSource(3428U);
    msg.setSourceEntity(119U);
    msg.setDestination(16892U);
    msg.setDestinationEntity(222U);
    msg.op = 69U;
    msg.list.assign("SVASWETKICBVMYJRGLYBRWOHMRVRQWCCMIFMHEEAFNXYZBZQPJITGFTXJXFALHJ");

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
    msg.setTimeStamp(0.9889530760542413);
    msg.setSource(58369U);
    msg.setSourceEntity(191U);
    msg.setDestination(9895U);
    msg.setDestinationEntity(162U);
    msg.op = 251U;
    msg.list.assign("MFZWCHXXAZAYEIPWZONBCNPYLKFETB");

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
    msg.setTimeStamp(0.13030388114125602);
    msg.setSource(20871U);
    msg.setSourceEntity(184U);
    msg.setDestination(48023U);
    msg.setDestinationEntity(172U);
    msg.op = 119U;
    msg.list.assign("JYCPEORKDIXMZTUALWLODSBXVFCIZVLLRCPPLXQYWT");

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
    msg.setTimeStamp(0.8552961413366552);
    msg.setSource(38694U);
    msg.setSourceEntity(241U);
    msg.setDestination(27106U);
    msg.setDestinationEntity(27U);
    msg.value = 198U;

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
    msg.setTimeStamp(0.7116072380982187);
    msg.setSource(11047U);
    msg.setSourceEntity(182U);
    msg.setDestination(2060U);
    msg.setDestinationEntity(166U);
    msg.value = 121U;

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
    msg.setTimeStamp(0.6907625314546859);
    msg.setSource(3643U);
    msg.setSourceEntity(87U);
    msg.setDestination(32691U);
    msg.setDestinationEntity(224U);
    msg.value = 212U;

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
    msg.setTimeStamp(0.7329251865324711);
    msg.setSource(41798U);
    msg.setSourceEntity(132U);
    msg.setDestination(10419U);
    msg.setDestinationEntity(100U);
    msg.consumer.assign("NHWMIKGUGGZTNTJRYHXHHJVDELARNKNSLGZZOPMGBWAFPQWRZEWPNINQVESFFICOZJTTWARLUXCTDQHNLVAIVBUSBPFVDRITUZF");
    msg.message_id = 45954U;

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
    msg.setTimeStamp(0.9773721635994249);
    msg.setSource(53443U);
    msg.setSourceEntity(221U);
    msg.setDestination(7879U);
    msg.setDestinationEntity(159U);
    msg.consumer.assign("VKFTTZHCUAOBKPMLNXTUWQFJQWHDNDAZUXLRSIRZCRDKZZEVRSEATRURMSMBQSYWCXBNGHNAAGNBXWBJOHQMYXVEECRLYQDDZJMIBHNPLBSRRVYGIKXFUYQHYTFEHVJDVLQFLMUIEXCZELLXOOKAODYXBTVCFISAQPQCZFWMJHGLOGOIMPZYTEUGTDWCHYADLGPRNSXIKMJJIE");
    msg.message_id = 55017U;

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
    msg.setTimeStamp(0.6500103036305139);
    msg.setSource(18833U);
    msg.setSourceEntity(204U);
    msg.setDestination(27302U);
    msg.setDestinationEntity(167U);
    msg.consumer.assign("AUVEKKIOBZNGFCCZMDAUVODNKSMSMYXRDKYTESOVHESOIZOGLGBMAQLFYMCS");
    msg.message_id = 35622U;

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
    msg.setTimeStamp(0.7886976194767686);
    msg.setSource(17737U);
    msg.setSourceEntity(249U);
    msg.setDestination(4076U);
    msg.setDestinationEntity(237U);
    msg.type = 64U;

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
    msg.setTimeStamp(0.843570982039264);
    msg.setSource(32920U);
    msg.setSourceEntity(11U);
    msg.setDestination(64783U);
    msg.setDestinationEntity(131U);
    msg.type = 114U;

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
    msg.setTimeStamp(0.8864246208664771);
    msg.setSource(51822U);
    msg.setSourceEntity(40U);
    msg.setDestination(43008U);
    msg.setDestinationEntity(162U);
    msg.type = 207U;

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
    msg.setTimeStamp(0.9498685621163219);
    msg.setSource(23671U);
    msg.setSourceEntity(21U);
    msg.setDestination(39578U);
    msg.setDestinationEntity(32U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.03431090323660879);
    msg.setSource(29950U);
    msg.setSourceEntity(235U);
    msg.setDestination(3982U);
    msg.setDestinationEntity(129U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.3052366196584969);
    msg.setSource(53420U);
    msg.setSourceEntity(45U);
    msg.setDestination(52108U);
    msg.setDestinationEntity(157U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.7924131603005156);
    msg.setSource(61599U);
    msg.setSourceEntity(101U);
    msg.setDestination(60992U);
    msg.setDestinationEntity(210U);
    msg.total_steps = 70U;
    msg.step_number = 102U;
    msg.step.assign("OMWQNGZPJNEOLQMCZFGRRUTGCIGNZBHDXKKVKOTQXEPIRELEHJFZSDUPQVLAOICKXU");
    msg.flags = 110U;

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
    msg.setTimeStamp(0.8151789131762238);
    msg.setSource(42123U);
    msg.setSourceEntity(215U);
    msg.setDestination(25412U);
    msg.setDestinationEntity(68U);
    msg.total_steps = 193U;
    msg.step_number = 217U;
    msg.step.assign("EOKHHBIRNZFNGYZVGTSCIXAQTWYSDRRLEHEQFCTSJQDVLACMOGHZCXFYFYUHPCIQMAXLJOPGATWAJRQRYUYVLBPTNIGWKNYLUJMDBMISFXRWAYZONKRVEJLEEMKMUICBDNPITGEKPUCRUVXUMFUQ");
    msg.flags = 200U;

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
    msg.setTimeStamp(0.6365557528101996);
    msg.setSource(39283U);
    msg.setSourceEntity(225U);
    msg.setDestination(12661U);
    msg.setDestinationEntity(179U);
    msg.total_steps = 60U;
    msg.step_number = 45U;
    msg.step.assign("OYVSXGJXNZZSEDGODDAMQEQNLFOIKIORVHWZCYZPCAZGWXGWCBDBITJRJLTVDVSFPEMBKMDHJWBVIWLRAHAUCYZESPTCDLGNMJEMUPLRLLHSWAJQTOKNUKFQTFYUNFCHWVREVMZRWTFXZNWKPQFTQCXSDJBXUJBHCYOIFPQWGIGQEBHUZGDOLVCIROFVLKRLEUAONTSFBOPYNPKPEYSHINMYXUZDKARJXTYCAUMAJIHUGVGIKNEXQSY");
    msg.flags = 152U;

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
    msg.setTimeStamp(0.7185881884106499);
    msg.setSource(57590U);
    msg.setSourceEntity(206U);
    msg.setDestination(7930U);
    msg.setDestinationEntity(76U);
    msg.state = 16U;
    msg.error.assign("VRATXZIWLSJAGWNTWKIUPCMFHCYADRTBDJTXWFJLOHJMDZLNVGEZICBWJREKXBZUTYGAOZFPSSRKHDGWXOXHUIQCDXWCUHTOUVIGOYPEBHPSMFCYUMJVVNWYTNKGMQHKEQAFQFLSBIAHXGMR");

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
    msg.setTimeStamp(0.5034746532437848);
    msg.setSource(33444U);
    msg.setSourceEntity(12U);
    msg.setDestination(26909U);
    msg.setDestinationEntity(210U);
    msg.state = 143U;
    msg.error.assign("YQZBWMKOFOABKTJZZHYIFFNYILLTEGOXADPKPJWVOPLGAXPJNGGYKUNXGDKD");

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
    msg.setTimeStamp(0.462029979589751);
    msg.setSource(35820U);
    msg.setSourceEntity(187U);
    msg.setDestination(42207U);
    msg.setDestinationEntity(217U);
    msg.state = 192U;
    msg.error.assign("WLPEKBPCOXVJNOYKUZXXVBIEBRHGSNTZMUBUOWXBULTVQJZWDREZJWXURMSWINPUNGQXYOLYTKVPMWBQNSYA");

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
    msg.setTimeStamp(0.7296169694818943);
    msg.setSource(568U);
    msg.setSourceEntity(48U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.66923550653057);
    msg.setSource(17330U);
    msg.setSourceEntity(46U);
    msg.setDestination(9041U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.7230401482471325);
    msg.setSource(63860U);
    msg.setSourceEntity(126U);
    msg.setDestination(7389U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.8256900564125366);
    msg.setSource(43183U);
    msg.setSourceEntity(94U);
    msg.setDestination(39412U);
    msg.setDestinationEntity(80U);
    msg.op = 176U;
    msg.speed_min = 0.5666505115379662;
    msg.speed_max = 0.900450919993614;
    msg.long_accel = 0.28116912672473393;
    msg.alt_max_msl = 0.6670824756112841;
    msg.dive_fraction_max = 0.415051235526924;
    msg.climb_fraction_max = 0.6377317046527443;
    msg.bank_max = 0.4627423038036369;
    msg.p_max = 0.04331364672003968;
    msg.pitch_min = 0.3811235960186591;
    msg.pitch_max = 0.5270450691672877;
    msg.q_max = 0.9130356123026284;
    msg.g_min = 0.22639408286489482;
    msg.g_max = 0.7797590283128901;
    msg.g_lat_max = 0.2653714963617254;
    msg.rpm_min = 0.15657019730715716;
    msg.rpm_max = 0.8154446606903508;
    msg.rpm_rate_max = 0.2952891286237892;

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
    msg.setTimeStamp(0.3888851907456786);
    msg.setSource(11836U);
    msg.setSourceEntity(60U);
    msg.setDestination(2320U);
    msg.setDestinationEntity(19U);
    msg.op = 68U;
    msg.speed_min = 0.7422481836108192;
    msg.speed_max = 0.05688400230860069;
    msg.long_accel = 0.5749327621087661;
    msg.alt_max_msl = 0.20656404649496718;
    msg.dive_fraction_max = 0.8444890954785346;
    msg.climb_fraction_max = 0.17907863377205513;
    msg.bank_max = 0.16637075475084917;
    msg.p_max = 0.1284824593719628;
    msg.pitch_min = 0.5490816885983779;
    msg.pitch_max = 0.12456520103848001;
    msg.q_max = 0.24863588930106317;
    msg.g_min = 0.39281047214677;
    msg.g_max = 0.10065218222333705;
    msg.g_lat_max = 0.14836920453998048;
    msg.rpm_min = 0.19940928652361756;
    msg.rpm_max = 0.5514584447227179;
    msg.rpm_rate_max = 0.23175804183922688;

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
    msg.setTimeStamp(0.19869126242912438);
    msg.setSource(16487U);
    msg.setSourceEntity(196U);
    msg.setDestination(38902U);
    msg.setDestinationEntity(19U);
    msg.op = 60U;
    msg.speed_min = 0.3862926873138426;
    msg.speed_max = 0.02395594371614962;
    msg.long_accel = 0.7631956633075799;
    msg.alt_max_msl = 0.7733908363752305;
    msg.dive_fraction_max = 0.728787956223115;
    msg.climb_fraction_max = 0.6823653330020583;
    msg.bank_max = 0.012367215945436216;
    msg.p_max = 0.610441123872901;
    msg.pitch_min = 0.9152641479478543;
    msg.pitch_max = 0.5414333005565521;
    msg.q_max = 0.7334364946246839;
    msg.g_min = 0.18713713914337193;
    msg.g_max = 0.4056254390897911;
    msg.g_lat_max = 0.04691433317084803;
    msg.rpm_min = 0.2842765437903191;
    msg.rpm_max = 0.1768137111371637;
    msg.rpm_rate_max = 0.8559056118170923;

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
    msg.setTimeStamp(0.8454704509351555);
    msg.setSource(40912U);
    msg.setSourceEntity(226U);
    msg.setDestination(10237U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.5619539908433884);
    msg.setSource(23309U);
    msg.setSourceEntity(39U);
    msg.setDestination(58790U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.2761637694670632);
    msg.setSource(40167U);
    msg.setSourceEntity(68U);
    msg.setDestination(53362U);
    msg.setDestinationEntity(250U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 60191U;
    tmp_msg_0.status = 66U;
    tmp_msg_0.text.assign("HMLZYPGAIIRBCRUBEOBWZWAVKLUDHUXEADNGKIFSWNZDSMMRTFJUNCUXXIKVTESRYEVXOOBUCOISPDAHQBLJYVOTIEQXAZQTFGKGWVDFEQAMVZMPGIKBYCTXPKRNXUJTDMMQLQTL");
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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.7258876818482028);
    msg.setSource(59046U);
    msg.setSourceEntity(171U);
    msg.setDestination(9592U);
    msg.setDestinationEntity(137U);
    msg.value = 0.6247091669017517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.4639934670827697);
    msg.setSource(23086U);
    msg.setSourceEntity(187U);
    msg.setDestination(47654U);
    msg.setDestinationEntity(55U);
    msg.value = 0.7389732888715732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.4236655046986918);
    msg.setSource(50643U);
    msg.setSourceEntity(192U);
    msg.setDestination(12799U);
    msg.setDestinationEntity(1U);
    msg.value = 0.40062768034555085;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.004068559309781006);
    msg.setSource(25593U);
    msg.setSourceEntity(8U);
    msg.setDestination(58135U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.005991619017648442;
    msg.lon = 0.4947056899101565;
    msg.height = 0.47167767254291104;
    msg.x = 0.32936805416912784;
    msg.y = 0.04488891099343939;
    msg.z = 0.22259097710715392;
    msg.phi = 0.6897958256712667;
    msg.theta = 0.958529611256247;
    msg.psi = 0.5343804322450294;
    msg.u = 0.6772412461161612;
    msg.v = 0.6841005235812667;
    msg.w = 0.2029702093713942;
    msg.p = 0.26185672072001176;
    msg.q = 0.5633106369653378;
    msg.r = 0.2066958868934493;
    msg.svx = 0.8972361826556099;
    msg.svy = 0.6133150042979311;
    msg.svz = 0.7726152625693465;

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
    msg.setTimeStamp(0.37220591362537736);
    msg.setSource(25028U);
    msg.setSourceEntity(81U);
    msg.setDestination(19543U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.8139452996234182;
    msg.lon = 0.4264994768805298;
    msg.height = 0.42083258859745065;
    msg.x = 0.9167448952322187;
    msg.y = 0.5975034560414484;
    msg.z = 0.8859304396739037;
    msg.phi = 0.2630672265312918;
    msg.theta = 0.7564970383111896;
    msg.psi = 0.005639198947276269;
    msg.u = 0.25052454555345227;
    msg.v = 0.4256302498664227;
    msg.w = 0.43563306192115137;
    msg.p = 0.4928106527606412;
    msg.q = 0.37202029837036743;
    msg.r = 0.6456211736581673;
    msg.svx = 0.6115461511523951;
    msg.svy = 0.020401066595205464;
    msg.svz = 0.516405788980203;

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
    msg.setTimeStamp(0.6220453075482518);
    msg.setSource(35775U);
    msg.setSourceEntity(6U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.8892982700264661;
    msg.lon = 0.1976674990360725;
    msg.height = 0.4513102071024232;
    msg.x = 0.5524389607533684;
    msg.y = 0.47386441243200483;
    msg.z = 0.9437449320991776;
    msg.phi = 0.9235769408953399;
    msg.theta = 0.4251674436065159;
    msg.psi = 0.5712213972495939;
    msg.u = 0.5538446486581132;
    msg.v = 0.2007939035146562;
    msg.w = 0.6680202337619466;
    msg.p = 0.20838360225220365;
    msg.q = 0.6550261552373251;
    msg.r = 0.6108682098337145;
    msg.svx = 0.5973241149738295;
    msg.svy = 0.2174557254161359;
    msg.svz = 0.8296524698701204;

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
    msg.setTimeStamp(0.06060216833631793);
    msg.setSource(44100U);
    msg.setSourceEntity(196U);
    msg.setDestination(43100U);
    msg.setDestinationEntity(221U);
    msg.op = 184U;
    msg.entities.assign("GXEBMRNKXELPQRIGCVOHMMBKASWOZSPFLOTOBAOQWNDOUSWIYBFJHYRXYPCJCPLEZCGQTBYHTHMXPSVKDXGITMTROWIYJAGFXTYXKJADFEJFCSUFXDVYH");

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
    msg.setTimeStamp(0.018276047214662028);
    msg.setSource(19463U);
    msg.setSourceEntity(101U);
    msg.setDestination(50234U);
    msg.setDestinationEntity(54U);
    msg.op = 231U;
    msg.entities.assign("FZRFPEBLXGOADUKQRWHCAXHEZLETFON");

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
    msg.setTimeStamp(0.23611112594458294);
    msg.setSource(5981U);
    msg.setSourceEntity(71U);
    msg.setDestination(28127U);
    msg.setDestinationEntity(119U);
    msg.op = 247U;
    msg.entities.assign("QMWOOBWSGDXQRQLBMOJMQXCBUTDNS");

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
    msg.setTimeStamp(0.08455022869826212);
    msg.setSource(6388U);
    msg.setSourceEntity(130U);
    msg.setDestination(61802U);
    msg.setDestinationEntity(242U);
    msg.type = 42U;
    msg.speed = 64388U;
    const signed char tmp_msg_0[] = {-43, -97, 101, 8, 76, -96, 116, 62, -72, 92, 69, -50, 81, -94, -96, -9, -27, -38, -49, 56, -99, -47, 62, 66, 16, -71, -60, 115, 116, -22, -58, -86, -14, -41, -64, -128, -88, -1, -119, -33, -62, 72, -18, 106, -127, 117, 24, 84, 23, -111, -56, 87, 90, 45, -72, -100, 84, -93, 12, -43, -13, 91, 11, 3, 7, -51, -89, 9, -102, 45, -82, 93, -58, -32, -80, -39, 122, 120, 50, 43, 46, -41, 22, 39, -86, -86, -90, 53};
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
    msg.setTimeStamp(0.006117415256651659);
    msg.setSource(35980U);
    msg.setSourceEntity(81U);
    msg.setDestination(56188U);
    msg.setDestinationEntity(140U);
    msg.type = 181U;
    msg.speed = 30061U;
    const signed char tmp_msg_0[] = {-65, 109, -24, -74, 105, -3, 17, 113, 79, -39, -58, -34, -81, -124, -91, -2, -17, 116, -127, -27, -98, 15, -120, -21, 26, 30, -124, 3, 19, 88, 3, -61, -13, 53, 63, 11, -28, -15, 47, 39, 98, -33, -37, -105, -19, 67, -112, 123, -42, 98, 117, -107, 48, 91, -125, 85, -20, -5, -95, 105, -93, 63, -118, 114, -59, -108, -85, -15, -91, 80, -31, 57, 108, -102, 38, -100, -28, -26, 36, 97, -100, 65, -76, -31, -23, 117};
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
    msg.setTimeStamp(0.2927095661748351);
    msg.setSource(49973U);
    msg.setSourceEntity(3U);
    msg.setDestination(12299U);
    msg.setDestinationEntity(225U);
    msg.type = 95U;
    msg.speed = 13003U;
    const signed char tmp_msg_0[] = {21, -88, 95, -46, 84, 111, 54, -117, 102, 63, -49, -102, 118, -112, 87, -32, 110, -51, 97, -25, 122, 47, -37, -73, -36, -21, -46, 39, -57, -47, 56, -42, -15, 83, -18, -66, 66, 80, 105, 31, -48, -46, 13, -107, -35, -92, 116};
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
    msg.setTimeStamp(0.4634006219546122);
    msg.setSource(14425U);
    msg.setSourceEntity(43U);
    msg.setDestination(35557U);
    msg.setDestinationEntity(149U);
    msg.op = 133U;
    msg.tas2acc_pgain = 0.7365417870760531;
    msg.bank2p_pgain = 0.3281857286969633;

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
    msg.setTimeStamp(0.12133358166074526);
    msg.setSource(49167U);
    msg.setSourceEntity(78U);
    msg.setDestination(53823U);
    msg.setDestinationEntity(40U);
    msg.op = 194U;
    msg.tas2acc_pgain = 0.8142391926758713;
    msg.bank2p_pgain = 0.40288992134459023;

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
    msg.setTimeStamp(0.14310604420106698);
    msg.setSource(10408U);
    msg.setSourceEntity(51U);
    msg.setDestination(41577U);
    msg.setDestinationEntity(205U);
    msg.op = 230U;
    msg.tas2acc_pgain = 0.12139517907531494;
    msg.bank2p_pgain = 0.13248675717355052;

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
    msg.setTimeStamp(0.6905864474560898);
    msg.setSource(8732U);
    msg.setSourceEntity(112U);
    msg.setDestination(44225U);
    msg.setDestinationEntity(45U);
    msg.available = 3866331886U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.02989221458550506);
    msg.setSource(60877U);
    msg.setSourceEntity(129U);
    msg.setDestination(19364U);
    msg.setDestinationEntity(143U);
    msg.available = 2636914390U;
    msg.value = 184U;

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
    msg.setTimeStamp(0.8228325679390501);
    msg.setSource(29535U);
    msg.setSourceEntity(133U);
    msg.setDestination(43769U);
    msg.setDestinationEntity(144U);
    msg.available = 2309737623U;
    msg.value = 164U;

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
    msg.setTimeStamp(0.2039745602362878);
    msg.setSource(35866U);
    msg.setSourceEntity(230U);
    msg.setDestination(32149U);
    msg.setDestinationEntity(32U);
    msg.op = 207U;
    msg.snapshot.assign("LQBNMGOTJHC");
    IMC::AbsoluteWind tmp_msg_0;
    tmp_msg_0.direction = 0.7709475703190454;
    tmp_msg_0.speed = 0.4368521127296131;
    tmp_msg_0.turbulence = 0.31129986609265103;
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
    msg.setTimeStamp(0.4285245454454204);
    msg.setSource(64231U);
    msg.setSourceEntity(7U);
    msg.setDestination(59487U);
    msg.setDestinationEntity(163U);
    msg.op = 222U;
    msg.snapshot.assign("TIDTYORSGHHIOJOEVHGYBIGKBFYPMAQYOVXTNALFFTSLTUBLNSZUMRPPBBDUFCWZLHGUKUQKUNHBHKOZVSPPHNNMKKEWXWEQMYMIXACKOEZFKRKGUMEBXLPTSRCWFACGJETZMCJFDXZCXWVZHLGVNISMQTRBTDNJVJLELRXCEXDRUJHFVACBDSSCJRIVYVTYWZPKOWQXQGUALIRADWSOQAWDUYNNPQFYIJFIENRAOMX");
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("QDQQUMHFKAYDSEQAPFVUVJMOFXXURFVITRWHAXTKXRZBRHBMUIKBKDUINOZGTOJJRNLCZETCUCQPBUPHYAYSZYPNPOYCGEDCPWJEBNTXOMEWSXZHBBWTOINWVJYFBQDVSQIHX");
    tmp_msg_0.sensor_class.assign("DIGWHGFJBLTHLZYKCNNTKRPAHVWJZPMETYUHUIDIRVCEDASMCSEZZOYPVQPIHOXULRDVCAYZXWVQHNLYMLKWABKNBNEOQMXCJFNEMBYWVCSTHUGFNJYKSWZSATBGFEMQUJXTRAQFXIBMJSGVADPCRDBTCOUYDE");
    tmp_msg_0.lat = 0.4680903799269289;
    tmp_msg_0.lon = 0.6229700316264671;
    tmp_msg_0.alt = 0.8533801460533995;
    tmp_msg_0.heading = 0.7078056539604669;
    tmp_msg_0.data.assign("TLXANQRHOCWPNOAYVXJXQDOGYIYPNBJIJWHZLOUKTDGOIHSZFSCKJRJWKEMTOBTKLSALXLJUMPDBPEMGGPRAIMRVDHHOODBTPFNQKHUOOKYQZEJMMIVDNVVPYRQRITVQRBZFHUNNT");
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
    msg.setTimeStamp(0.9890540246576764);
    msg.setSource(64401U);
    msg.setSourceEntity(241U);
    msg.setDestination(291U);
    msg.setDestinationEntity(252U);
    msg.op = 54U;
    msg.snapshot.assign("EYVNXWMRQHBJISHLRVECVFDIIASXYAHSTJKFXEGBFIJYKFDWDCIECREKFTXVADZWIULNJORRHPSZPFUATPFAWWZKLM");
    IMC::CommSystemsQuery tmp_msg_0;
    tmp_msg_0.type = 55U;
    tmp_msg_0.comm_interface = 41184U;
    tmp_msg_0.model = 24270U;
    tmp_msg_0.list.assign("QZCKDARHPEWQAWEJJOZKGUSKPKOZQBZEUPOMSWJODKJIGAUPMJATBYNTTPGVVITNRUKEQHJMENDDIESXLWHINLSOCGDAAKVBCVHZBNPLZCFIRNUHROAKFWBVDNFBSYWYIBBSLXXLCCPLFZEFLWFALDLQTJERRSMXGBIHDUQBYTIQMUCCHREYTMDPUZWFKUQTXTNQVVJ");
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
    msg.setTimeStamp(0.9644469413651684);
    msg.setSource(59040U);
    msg.setSourceEntity(21U);
    msg.setDestination(58989U);
    msg.setDestinationEntity(216U);
    msg.op = 247U;
    msg.name.assign("CXQRJHFPTGDAZCERHWMZNFPQGBCLOXSLKHDXDIIXSTCANHRFEVKBLMTFPVZKBMUJNFAPEPJEUQTYLIOXUOZHYAMRFAPGIBJTCHOTXZKHTGCXSWS");

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
    msg.setTimeStamp(0.3651591586580898);
    msg.setSource(51636U);
    msg.setSourceEntity(195U);
    msg.setDestination(37423U);
    msg.setDestinationEntity(169U);
    msg.op = 211U;
    msg.name.assign("NOZXPKETPQSIJXKRPGJTIBBFYXYJABZSEBZEGWUAUOIOMYLUQMINIPHYMIHHFDFJHFLHIFCAMRQOTSRABYVNBLKDNTNQDURMPIOYDOWDNVRFTCEGRWTEIKCOVXDNHMAQQFVZLWHUXPGVBSKLKNFXSEXVMMMRLVRKUPWYZNASWZCLHQYGPOJWQXEXNKFHVTSUJASCFSQUMZLPGKACEAJYRCLIJGDZOWYBZ");

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
    msg.setTimeStamp(0.5426684750208274);
    msg.setSource(43723U);
    msg.setSourceEntity(109U);
    msg.setDestination(63198U);
    msg.setDestinationEntity(108U);
    msg.op = 77U;
    msg.name.assign("WIITTECRUGHQIGMBHGPPXXWVQYXYBVEUNGDVNCPKHKLCLXUDTSKPYZLVVYDRRSYMQDFHWXIXLHWQTOHRLRMUEUNLYNHPUCZMQAPSOOPW");

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
    msg.setTimeStamp(0.6004410527606308);
    msg.setSource(31630U);
    msg.setSourceEntity(94U);
    msg.setDestination(5163U);
    msg.setDestinationEntity(81U);
    msg.type = 157U;
    msg.htime = 0.3649896591214391;
    msg.context.assign("ABTDRQJNXQEYYSJERNMGKZBZOGYSPSXEGCXAQGFFOUEXWVJFHVAZPMAOWEUNSGVNJTVHPYBKUOVERDEMNDNA");
    msg.text.assign("UHTIYCOPLSQZHSLTSGAKNVBNRJMYDFJAQOFPGXWDNCHVKELZERVYYVRBINFPLLLCATUKUSRZVGZO");

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
    msg.setTimeStamp(0.0662302110541958);
    msg.setSource(29670U);
    msg.setSourceEntity(143U);
    msg.setDestination(55567U);
    msg.setDestinationEntity(73U);
    msg.type = 41U;
    msg.htime = 0.5955042159248997;
    msg.context.assign("LSYKWMZBCOJXIPJOJSVXPIZSQVHTQKHDKXGRLERFECADDXSYFXJAKMKZSNXQUSYQGOZCNYDGCRWFAMHVTBZBLMFKSGLPJUUZDHDAVIOHFCLFYCEVOMYIFHIJZFQHQQGEMEZEWGNNIASPBTPTDTLBRBJOWBQRKYTUYXUBVDQNWGGRETREPIWTAMBB");
    msg.text.assign("FHAMCGBWQXHTQTLTGUFPYAOGGRYTQOKCTDGRAKVZXSSGZYDZUUICKNVXEFHGQKJUAUIROSDIGQXCANZAITBKSWYHCJGFEUDHJPMRBYJJWLVLVFWIVISBNZJAKPCGFMCDBRVPDNLENJRQHYCCXWPORSEVJNNTBSDHEJRCM");

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
    msg.setTimeStamp(0.09625251222015763);
    msg.setSource(29811U);
    msg.setSourceEntity(143U);
    msg.setDestination(59681U);
    msg.setDestinationEntity(162U);
    msg.type = 190U;
    msg.htime = 0.6461516336849137;
    msg.context.assign("QTHPKKGLFXBELZAMSBMNUIDZJBVAWNXKHJUTLRLGQAOXDOIRYLQRPLEHWEMJBUGNUSHSSPHTCYZOVBCPGZYYTWTVGROJJFHEEDAWLVOOIZUBSUMVQAVZSGYNUNXOUWBGJYKWLRCIDITKZEIAUNLCX");
    msg.text.assign("PIJURBIQAGSYIFTMAQOMYULPKLDPWCVVJCCZWJXEKBFPBSMQAOCAOSIRAVXYETKMVZAEDQJUHKDHRPOR");

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
    msg.setTimeStamp(0.5983008439204808);
    msg.setSource(30195U);
    msg.setSourceEntity(217U);
    msg.setDestination(48575U);
    msg.setDestinationEntity(32U);
    msg.command = 167U;
    msg.htime = 0.8536631291805321;

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
    msg.setTimeStamp(0.5777089675362126);
    msg.setSource(46068U);
    msg.setSourceEntity(217U);
    msg.setDestination(16809U);
    msg.setDestinationEntity(208U);
    msg.command = 158U;
    msg.htime = 0.31363127058534124;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 191U;
    tmp_msg_0.htime = 0.3581751915412976;
    tmp_msg_0.context.assign("YGDUDBHYVHWQYECUYGXHKOXDRYISOVONNPAMCIIQUIGKRPMTWGEWGZRIRLSTJTAOAEZLKSIOZSHGQR");
    tmp_msg_0.text.assign("GNIAYOHDIDSTZQXNCYDMKRLEEVKMNNJDGRKQJXQVMGJGLRKCTKZGUVRFNXTXFRAUAQXUQBURVNYMLVTAKPYEWZJDZEFAGCLINHVBFBHCJZABHLYMUEWDWRYJXHZNVHXZGTPLMSHEMTIPFCSOLCKFFVKCVOCSIJBDIATURDELIHPYURUUDKTGPZSBFWWZPQOLWTBCTSZAVIMPAWGQEOUWOK");
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
    msg.setTimeStamp(0.38409011053235786);
    msg.setSource(27420U);
    msg.setSourceEntity(192U);
    msg.setDestination(29259U);
    msg.setDestinationEntity(203U);
    msg.command = 195U;
    msg.htime = 0.3766843909205537;

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
    msg.setTimeStamp(0.9856971380134406);
    msg.setSource(36122U);
    msg.setSourceEntity(224U);
    msg.setDestination(32662U);
    msg.setDestinationEntity(194U);
    msg.op = 96U;
    msg.file.assign("BHAKBPEIYTGEULCZPIERGSXWJMJFNKNLJBIEMKSOYDRRPBVAGXVOVMCJVXVAWFSHOVRXZGURWNWORQBFEPPLYJBIAHXPLYYHAWDTQISMAFQLZSGTPRTEZZNCNGDQTICOZBHUJOACEVOHRDBKJTXXMKVK");

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
    msg.setTimeStamp(0.4104450629549564);
    msg.setSource(33287U);
    msg.setSourceEntity(84U);
    msg.setDestination(31627U);
    msg.setDestinationEntity(242U);
    msg.op = 76U;
    msg.file.assign("NHKMVSHZOZPIBTMDYFYOSYLUWICJSXPBQIRYZMBRJOSPKWSEDXLXQPNKEESYCSYRCEXVJWCMNVCMYVNISXLUNLDPVWPUQZKDVUGCJ");

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
    msg.setTimeStamp(0.2508008093645926);
    msg.setSource(57082U);
    msg.setSourceEntity(213U);
    msg.setDestination(9183U);
    msg.setDestinationEntity(82U);
    msg.op = 244U;
    msg.file.assign("IZYYSOHEGTUZNAMJSVOTHXSPJYWKMQYDHS");

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
    msg.setTimeStamp(0.06601782165981751);
    msg.setSource(45606U);
    msg.setSourceEntity(59U);
    msg.setDestination(59478U);
    msg.setDestinationEntity(158U);
    msg.op = 133U;
    msg.clock = 0.6347506715091055;
    msg.tz = -33;

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
    msg.setTimeStamp(0.29259066338481743);
    msg.setSource(37043U);
    msg.setSourceEntity(50U);
    msg.setDestination(7372U);
    msg.setDestinationEntity(247U);
    msg.op = 122U;
    msg.clock = 0.9456590036824695;
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
    msg.setTimeStamp(0.33616880860378473);
    msg.setSource(57928U);
    msg.setSourceEntity(10U);
    msg.setDestination(23371U);
    msg.setDestinationEntity(136U);
    msg.op = 37U;
    msg.clock = 0.5359236164002925;
    msg.tz = -64;

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
    msg.setTimeStamp(0.7605604038859146);
    msg.setSource(24431U);
    msg.setSourceEntity(199U);
    msg.setDestination(540U);
    msg.setDestinationEntity(222U);
    msg.conductivity = 0.8126741113037756;
    msg.temperature = 0.6529001100014608;
    msg.depth = 0.27492204987566593;

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
    msg.setTimeStamp(0.667115107263168);
    msg.setSource(49983U);
    msg.setSourceEntity(245U);
    msg.setDestination(34186U);
    msg.setDestinationEntity(28U);
    msg.conductivity = 0.9486789441117716;
    msg.temperature = 0.4821958918789493;
    msg.depth = 0.9651508782819722;

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
    msg.setTimeStamp(0.9233190629544489);
    msg.setSource(45939U);
    msg.setSourceEntity(9U);
    msg.setDestination(38831U);
    msg.setDestinationEntity(36U);
    msg.conductivity = 0.4706640859590302;
    msg.temperature = 0.26168187511908414;
    msg.depth = 0.5200576233488176;

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
    msg.setTimeStamp(0.5244612861307635);
    msg.setSource(63573U);
    msg.setSourceEntity(128U);
    msg.setDestination(57456U);
    msg.setDestinationEntity(177U);
    msg.altitude = 0.04471663449673635;
    msg.roll = 34079U;
    msg.pitch = 38880U;
    msg.yaw = 59926U;
    msg.speed = -25185;

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
    msg.setTimeStamp(0.20343029962611225);
    msg.setSource(8794U);
    msg.setSourceEntity(110U);
    msg.setDestination(3756U);
    msg.setDestinationEntity(238U);
    msg.altitude = 0.8679036191393551;
    msg.roll = 20421U;
    msg.pitch = 4714U;
    msg.yaw = 51755U;
    msg.speed = -27467;

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
    msg.setTimeStamp(0.5445843053261453);
    msg.setSource(22382U);
    msg.setSourceEntity(110U);
    msg.setDestination(26941U);
    msg.setDestinationEntity(176U);
    msg.altitude = 0.2222517262988467;
    msg.roll = 50873U;
    msg.pitch = 64931U;
    msg.yaw = 62630U;
    msg.speed = 19204;

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
    msg.setTimeStamp(0.5427600880959238);
    msg.setSource(50540U);
    msg.setSourceEntity(194U);
    msg.setDestination(19199U);
    msg.setDestinationEntity(133U);
    msg.altitude = 0.04802838451707081;
    msg.width = 0.4221892090740311;
    msg.length = 0.11929346065957658;
    msg.bearing = 0.3056205246600059;
    msg.pxl = 20460;
    msg.encoding = 15U;
    const signed char tmp_msg_0[] = {-120, 113, -39, -43, -7, 88, 53, 124, 16, -14, -3, 82, 90, 71, 59, -16, -89, -112, -60, -106, -108, -11, 120, -28, -88, -121, -89, -12, 77, 75, 10, 74, -60, -66, 20, -29, -92, 64, -111, 98, 121, 4, 50, -9, 62, 113, 125, 73, 80, -64, -111, -4, -19, 109, 110, -34, -33, 8, -74, -27, 19, 71, -113, 113, 10, 106, -79, -3, -127, 98, 82, 54, 79, -25, -23, -76, -127, -2, -17, -76, 26, 30, -28, 14, 98, 85, -37, -33, -54, 14, 108, 57, -56, -36, -85, -29, -91, 52, -117, -98, -26, -75, 24, -87, -33, -94, 52, 112, 71, 96, 94, -71, -36, 88, -81, 56, 98, -125, -32, 7, 47, 105, -9, -37, -20, 80, -9, 106, -19, 105, 33, 9, 112, 23, -11, 114, -27, 114, -35, -50, 77, 2, -119, -97, 17, 7, 4, 3, 8, -64, -114, -56, -115, -80, 73, -76, 62, -7, 27, -62, -87, -109, 51, -84, -122, 36, -105, 22, 91, -99, 46, 105, -59, -48, -29, 64, 116, -19, 89, -73, 4, -37, -70, 42, 14, -35, -7, -48, 58, -31, 42, 28, 16, 64, -31, 60, 107, 38};
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
    msg.setTimeStamp(0.42372629160498143);
    msg.setSource(42693U);
    msg.setSourceEntity(194U);
    msg.setDestination(50566U);
    msg.setDestinationEntity(114U);
    msg.altitude = 0.0363726515257109;
    msg.width = 0.9214481023452245;
    msg.length = 0.31127188358171365;
    msg.bearing = 0.09808487080105543;
    msg.pxl = -12630;
    msg.encoding = 143U;
    const signed char tmp_msg_0[] = {-5, -122, 47, 117, -47, -48, -95, -70, 11, 22, -9, -43, -60, -87, -37, 17, -84, 13, -94, 115, 55, -35, -109, 4, -91, -32, 12, -13, -118, -51, 77, -22, -98, -53, -114, 35, -45, 109, -95, -47, -87, 71, 43, 119, 45, -112, -55, 109, -128, 90, -48, 8, -84, -66, -99, -70, 22, 48, -3};
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
    msg.setTimeStamp(0.6035823264798533);
    msg.setSource(6718U);
    msg.setSourceEntity(253U);
    msg.setDestination(42187U);
    msg.setDestinationEntity(230U);
    msg.altitude = 0.9502336725019475;
    msg.width = 0.37592882955548634;
    msg.length = 0.3071639759118474;
    msg.bearing = 0.11426004375407794;
    msg.pxl = 6953;
    msg.encoding = 92U;
    const signed char tmp_msg_0[] = {-31, 92, 52, -114, 74, 0, 126, 76, 88, 119, -37, -103, 86, 76, 38, -26, -128, 1, 40, 39, 9, -70, -46, -6, 111, -99, -5, 117, -40, -49, 103, 85, -103, 68, -42, 100, 48, 45, 31, -117, -43, -36, -66, -102, -65, -84, -31, -91, 125, 63, 3, -48, -82, -99, 14, 93, 49, 38, -5, -49, -96, 65, 14, -79, 42, 81, 10, 23, -97, 83, -98, -55, -15, -66, 116, 102, -50, -126, 89, 49, 26, 101, 93, -83, -98, 109, 100, -26, -4, -107, 73, -65, 123, 16, -28, -27, -28, -118, -17, -31, -101, 11, 34, 20, 92, -100, -112, -125, 5, 124, -41, -125, 101, 77, 105, -86, -34, 10, 28, 92, -36, 103, -18, -22, -86, 66, 107, -89, 117, 42, 59, 98, -119, 33, 57, 56, 82, 56, 40, 101, 111, 46, -9, 5, -95, 80, -83, -24, -79, -97, -33, -13, 84, -59, 25, -62};
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
    msg.setTimeStamp(0.673380833108897);
    msg.setSource(13683U);
    msg.setSourceEntity(82U);
    msg.setDestination(23848U);
    msg.setDestinationEntity(188U);
    msg.text.assign("KIRFEYLBUBYNQIWVBTUOCMGCWREFFPZRTMMATPIZTBXYPUCXMQZVKDUMJWYDPDOQWFLTKCNHIASNVBRFGYXYJEBORUJQAOJITFHGQPYNBRMOGZISKTJQHSDLLL");
    msg.type = 248U;

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
    msg.setTimeStamp(0.01727902300869344);
    msg.setSource(11459U);
    msg.setSourceEntity(62U);
    msg.setDestination(25274U);
    msg.setDestinationEntity(227U);
    msg.text.assign("GJFCYBMODLXDXBUDAUPCDVVJKCLCJDAUPOMVADTPIQEQKKACHRRWFANNGQBIHGVIFZMLXPWWODTGUWFXRWMSSRMLAEYJNYH");
    msg.type = 80U;

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
    msg.setTimeStamp(0.1467635695942442);
    msg.setSource(7494U);
    msg.setSourceEntity(175U);
    msg.setDestination(23256U);
    msg.setDestinationEntity(179U);
    msg.text.assign("DYRSAHOMSNWSQ");
    msg.type = 39U;

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
    msg.setTimeStamp(0.8845189022972324);
    msg.setSource(11693U);
    msg.setSourceEntity(49U);
    msg.setDestination(30195U);
    msg.setDestinationEntity(147U);
    msg.parameter = 121U;
    msg.numsamples = 14U;
    msg.lat = 0.6328319715148952;
    msg.lon = 0.18260340920813056;

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
    msg.setTimeStamp(0.20249190751335822);
    msg.setSource(29398U);
    msg.setSourceEntity(45U);
    msg.setDestination(63642U);
    msg.setDestinationEntity(41U);
    msg.parameter = 152U;
    msg.numsamples = 43U;
    msg.lat = 0.7341880254955859;
    msg.lon = 0.9668647673973282;

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
    msg.setTimeStamp(0.22478372103069266);
    msg.setSource(65070U);
    msg.setSourceEntity(253U);
    msg.setDestination(40560U);
    msg.setDestinationEntity(10U);
    msg.parameter = 89U;
    msg.numsamples = 19U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 21877U;
    tmp_msg_0.avg = 0.36707518400342054;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.43426467130377944;
    msg.lon = 0.33222277291278957;

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
    msg.setTimeStamp(0.047471476116162536);
    msg.setSource(51074U);
    msg.setSourceEntity(130U);
    msg.setDestination(44685U);
    msg.setDestinationEntity(24U);
    msg.depth = 22750U;
    msg.avg = 0.1365009206743606;

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
    msg.setTimeStamp(0.018545459147330634);
    msg.setSource(1542U);
    msg.setSourceEntity(173U);
    msg.setDestination(35792U);
    msg.setDestinationEntity(156U);
    msg.depth = 37483U;
    msg.avg = 0.7799444441495496;

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
    msg.setTimeStamp(0.5270698058128682);
    msg.setSource(39780U);
    msg.setSourceEntity(218U);
    msg.setDestination(19964U);
    msg.setDestinationEntity(241U);
    msg.depth = 18173U;
    msg.avg = 0.7419715767806329;

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
    msg.setTimeStamp(0.19023898310148735);
    msg.setSource(61586U);
    msg.setSourceEntity(197U);
    msg.setDestination(51397U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.4936853216494471);
    msg.setSource(29246U);
    msg.setSourceEntity(222U);
    msg.setDestination(25104U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.05577811021065304);
    msg.setSource(40576U);
    msg.setSourceEntity(23U);
    msg.setDestination(11557U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.012006842002342255);
    msg.setSource(19341U);
    msg.setSourceEntity(218U);
    msg.setDestination(17163U);
    msg.setDestinationEntity(179U);
    msg.sys_name.assign("YGIPUKTDVCTVSQWMKLPETZZRVIWUDNHZCAZJRMIOKNDQDXOESAHZBFGOIVKLEAFIPPONSKYMGPNVUQLRXGXXWRGQEOCQMODTJUAQTFTAHDXPLBEMYCNHUOOJTGGQWLFFJSTTCOFCMLCYGWEABVGIBJIIZRHKVBDXVKABNRHQEMTHZUKSYAHYFLNJ");
    msg.sys_type = 218U;
    msg.owner = 29049U;
    msg.lat = 0.9074091591883834;
    msg.lon = 0.589736024171903;
    msg.height = 0.22224875546592948;
    msg.services.assign("HTSPGNZGFUQNVOEJBMUORHCNCGPOTSETTJYWSORDFVVFUAKWGFRDZMESULIEFIPIEKXSUBBATQQL");

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
    msg.setTimeStamp(0.16284712373505017);
    msg.setSource(20720U);
    msg.setSourceEntity(31U);
    msg.setDestination(53387U);
    msg.setDestinationEntity(111U);
    msg.sys_name.assign("ZAKKNSLKJQAQEOYBGPUBETNWVPHGHCKRDSMHPBPZDVRJLLKFCBSFBCWXCRCKIYLODIYPTIXTIXUDGBXMWDCOQTRZWSQSFMLXQAHFGERTZGVFOVYYAMBDMDAUEBXWFZS");
    msg.sys_type = 47U;
    msg.owner = 5790U;
    msg.lat = 0.6375601987571866;
    msg.lon = 0.738018402984996;
    msg.height = 0.19746752901539555;
    msg.services.assign("GNNRGSHWGOKXGWAXKVRDHBEMGFALPXBEMUAKROYFBSJNILAWOHITKCIMASKYMZ");

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
    msg.setTimeStamp(0.7920491132250936);
    msg.setSource(24022U);
    msg.setSourceEntity(249U);
    msg.setDestination(46494U);
    msg.setDestinationEntity(183U);
    msg.sys_name.assign("ZYENHXAKHDFSDGNQMNEZIYDLPVGCZPITKEUTKPYTBCSPMPVYJJTBMAYVVFBMKIOFAAFJXYTRMSKSHCOOLWTTHPRXQSKYFWWFIDHHUVSULUENG");
    msg.sys_type = 203U;
    msg.owner = 15733U;
    msg.lat = 0.24477932400427715;
    msg.lon = 0.7904838445273275;
    msg.height = 0.311498773305238;
    msg.services.assign("DSIEVKZPKRWCEPKHCMNJZUSUYVWENJCLEYALVGPOQSFJGUIMGNNVTHPRXMNGXEJWLDBSWEYYZLXQHGXAOWMIAUETJEBOBOWFISRXCHTMZOTFZRCRDXIFA");

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
    msg.setTimeStamp(0.33908759306509473);
    msg.setSource(44572U);
    msg.setSourceEntity(77U);
    msg.setDestination(40620U);
    msg.setDestinationEntity(0U);
    msg.service.assign("HCUORRSEUIJGNCINKHWYOOKSWCJJDTLLGNJKLBSXNIYOBCANFOMGJWFRWQSGDYMAZVLRHKSYYDOQUAWYMQTXQCCJYQISACRFLFHKNWVFMRWZXFPPKUOGMDTBBPHZHNZXHLLY");
    msg.service_type = 117U;

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
    msg.setTimeStamp(0.5311757711641129);
    msg.setSource(52953U);
    msg.setSourceEntity(137U);
    msg.setDestination(23893U);
    msg.setDestinationEntity(169U);
    msg.service.assign("JHVSGEAAVBHTNRHMCFJJRFZBRFXHOKGRTPTOYPWBXDHCIRXKSAPXCQRKFOJKLMYLUBRBDYHEITQDGUTOCJ");
    msg.service_type = 211U;

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
    msg.setTimeStamp(0.45645219387357716);
    msg.setSource(16402U);
    msg.setSourceEntity(97U);
    msg.setDestination(43638U);
    msg.setDestinationEntity(65U);
    msg.service.assign("EHRPSMDLIROFTPTAVVHHQLIAROXZWLYSRZYZPHBWFBIWGWRCXQTJDCLLUXUBFMSICCGYWPJKOAKEMFIMKVZUBYIHQIAXSUJDOMPCGEITBLTQXQYKZKWKIVHEJDHQNTUPFRVPPAEYKSFNOTVJRNHAAYJTASYVDHDWJRGOERBKCADGCXDPGFMPQCSWQJEDGJENMNRSBBOTOCS");
    msg.service_type = 131U;

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
    msg.setTimeStamp(0.9936924190893099);
    msg.setSource(37271U);
    msg.setSourceEntity(2U);
    msg.setDestination(49883U);
    msg.setDestinationEntity(151U);
    msg.value = 0.9882977993252082;

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
    msg.setTimeStamp(0.4948802722148148);
    msg.setSource(48240U);
    msg.setSourceEntity(111U);
    msg.setDestination(6103U);
    msg.setDestinationEntity(52U);
    msg.value = 0.737334186105783;

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
    msg.setTimeStamp(0.06111798907249011);
    msg.setSource(33603U);
    msg.setSourceEntity(141U);
    msg.setDestination(20996U);
    msg.setDestinationEntity(137U);
    msg.value = 0.3271193680832377;

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
    msg.setTimeStamp(0.40132272412896297);
    msg.setSource(35035U);
    msg.setSourceEntity(109U);
    msg.setDestination(32866U);
    msg.setDestinationEntity(189U);
    msg.value = 0.4238221261834051;

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
    msg.setTimeStamp(0.039258195204381785);
    msg.setSource(13019U);
    msg.setSourceEntity(169U);
    msg.setDestination(38310U);
    msg.setDestinationEntity(241U);
    msg.value = 0.11423213337257188;

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
    msg.setTimeStamp(0.1610987403941564);
    msg.setSource(18749U);
    msg.setSourceEntity(67U);
    msg.setDestination(16469U);
    msg.setDestinationEntity(215U);
    msg.value = 0.7801155273029615;

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
    msg.setTimeStamp(0.8920226750311664);
    msg.setSource(30221U);
    msg.setSourceEntity(243U);
    msg.setDestination(11852U);
    msg.setDestinationEntity(16U);
    msg.value = 0.08895596060431554;

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
    msg.setTimeStamp(0.1637356680343396);
    msg.setSource(29619U);
    msg.setSourceEntity(83U);
    msg.setDestination(15429U);
    msg.setDestinationEntity(18U);
    msg.value = 0.7986938253147862;

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
    msg.setTimeStamp(0.20826936282868158);
    msg.setSource(55431U);
    msg.setSourceEntity(16U);
    msg.setDestination(27380U);
    msg.setDestinationEntity(144U);
    msg.value = 0.7356263757325561;

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
    msg.setTimeStamp(0.4787409611561515);
    msg.setSource(9023U);
    msg.setSourceEntity(49U);
    msg.setDestination(45978U);
    msg.setDestinationEntity(129U);
    msg.number.assign("RJFNVWLNWNWIVTFPAWLFEGOMMFGJQOSTCODRUQUUKDTWGCSCBIGIJOLETYYVPDSXUQJHYVNUTCRSHGFSAPMQODJWZTYDMNAEGDVJUWGMMZCXEIWXHJZIVVQGKHFLYHLEBOQZYEREHMVPPPKBTCQBAXZIDNPURZSJNEBABRYPCAELAJFLNIKKTNZKFYSBHISXHJOOWWHPSBFBXRO");
    msg.timeout = 31440U;
    msg.contents.assign("XRNJLZFJSWDECRDBHLWSMARIBIATCZIKPCQMRMZMCXRFLPCFFHUSJ");

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
    msg.setTimeStamp(0.26775877094902056);
    msg.setSource(30813U);
    msg.setSourceEntity(165U);
    msg.setDestination(23562U);
    msg.setDestinationEntity(228U);
    msg.number.assign("FHRWTVDXEIWIOFESDXVRGPXLKPNMHVVWBQAARRNMPEIDUAPLBULYSZKNMYZI");
    msg.timeout = 14604U;
    msg.contents.assign("CVNQROTRGYURTORJLEHDNSMMSMVEOFHAVALWAYAXTOQNYWVJDSVUZEKZLKEFDOWYWDIHQMVKZTLCXOASJXBPJZNYQFBCYFIRZRIHHUSBSQUZKDEVWPPEARTNOLZXWIRIVGIMXMQWCKSFXKJYGBECNYQWDJUCILCAMGNCPUPEOIDWEMUMKPLAMXXXJNCGGKFKLTGGLBHAVZT");

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
    msg.setTimeStamp(0.24782057683556435);
    msg.setSource(5095U);
    msg.setSourceEntity(149U);
    msg.setDestination(8932U);
    msg.setDestinationEntity(65U);
    msg.number.assign("QMYRUZZISWJVOZXTAZDTLVCUDAPTOSDHDNBVSFPUEBITWUADTMNMEZIVXTKCAGGNPPRQJBJHOVROFFCRMWRCX");
    msg.timeout = 45974U;
    msg.contents.assign("WINHXLEDQBVZOEPMPNIPFTMICKOUFKVYOEXGVMCRISKZUWGDCDUKNSGTLEZOTRXJRZLABCSZWABVJBUMPXLFGQKGGARCBPADENCOUAEBBYUNRWSDWZHYVBKHWRVAIOJVTQHYIININFCGMJNPBMVRYTSHOND");

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
    msg.setTimeStamp(0.13519235589428935);
    msg.setSource(13795U);
    msg.setSourceEntity(103U);
    msg.setDestination(54815U);
    msg.setDestinationEntity(44U);
    msg.seq = 2563669835U;
    msg.destination.assign("AAXWVXMIMRCXLMVEDJJVGNUVEOHSZNPXRBVYMCKFXKNRIFGSABSPZGBCAGDULYTWFFFWRCPEZJUXUQSRVZKDYDILQQPYSEZUNETQPOYAHMMNESTTGIFLMMVHXBYXQKKZGQJTHZLJTFHVWRCWYQNWUOFGWZXYTBWCTUONCSOTIDJACJRLYVERWBUNAKGINHJAZEIFCLSIWHSHPQOGGKJOKHQLVQUYPPALDSCBDMXFEZKDUNOP");
    msg.timeout = 22566U;
    const signed char tmp_msg_0[] = {63, 125, 98, 106, -124, -36, 7, 54, 64, 96, -105, -3, 125, -18, 30, 108, -7, -2, -13, 114, 32, 29, 24, 89, -101, 4, -44, 72, 102, 93, -10, -82, 65, -111, -70, -56, -98, -113, 31, -85, -114, -32, -120, -7, -41, -8, -90, 29, 15, -17, 46, 102, -95, 69, 17, -101, 13, 115, -21, 1, 44, -40, -40, 87, -12, -20, -14, -64, 115, 113, 71, -83, -78, -81, -44, -24, 58, -62, -14, -79, 70, 52, -97, -1, -6, 22, 120, 95, -100, -31, 76, -117, -77, -11, -54, -10, 49, 0, 111, -34, -35, -34, -34, 100, 22, -59, 9, 77, 27, -71, 6, -122, -62, 6, 37, 115, -104, 75, 118, -29, -27, -102, 11, 31, -52, 94, 20, -5, -41, 30, -64, 126, 102, -10, -104, -45, 126, 98, -100, -6, -118, 7, 112, 10, 88, -7, -24, 43, 91, 125, -124, 23, 114, -75, -116, 1, -87, 36, -90, 39, 96, -52, 64, -4, 49, -56, 100, 124, -89, -15, 44, -91, 47, 67, 30, -82, -28, -38, 114, -71, -41, -108, 25, 97, 113};
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
    msg.setTimeStamp(0.07756059980303309);
    msg.setSource(18094U);
    msg.setSourceEntity(135U);
    msg.setDestination(37561U);
    msg.setDestinationEntity(153U);
    msg.seq = 1394876069U;
    msg.destination.assign("ESMNUZTQJVDRWLSODDPYBPIXUBBDBRJGVLVXRSQBUKOYVTFQPFESDKEQXAIALNUZMYSRBUAZLZCCNAMEFIQNNRMQYHZXFLRMIMJEDYKYCWNGPUKPEHZFQSQOKSMPWOBGJKHFJDRGOWTYJNVYBXNGZIDTHBLZQMHTJAOSXGIBCWVUOTOTFZGAIOYFWULXECMAHRHTTTIWECCXJNWFVHKACEDPOWKHJARCS");
    msg.timeout = 53846U;
    const signed char tmp_msg_0[] = {-75, -13, 126, 110, -104, -80, 89, -103, 17, 13, 105, -114, 57, 10, -47, -78, 84, -49, -81, 9, -7, -18, 7, -85, -24, -64, -33, 66, 90, 97, 120, -64, -93, -61, 113, -112, 58, 50, -1, -40, 10};
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
    msg.setTimeStamp(0.4220390662089307);
    msg.setSource(9341U);
    msg.setSourceEntity(76U);
    msg.setDestination(2497U);
    msg.setDestinationEntity(147U);
    msg.seq = 1935321425U;
    msg.destination.assign("MCEIUTDLKUNOQVNBBRURTYYHHZZPFISTNCSHDIRCDLSDIZAWFJRFEPCPHLYOEWQJYAWXPDLWTTMNQBRCLGVBMXLVWZNAEGSQJVGVSOKRKTHESNNWEZVXBRMVXBPGFIOGIRGKQWJWHCCZBUBVIIHIUKMYCFDJXANPGNKBEUPNAYFXSLTIF");
    msg.timeout = 42947U;
    const signed char tmp_msg_0[] = {-22, -56, -32, 61, 99, -47, 56, -72, 106, -78, 15, -11, 9, 31, 70, -78, -122, 48, 24, -104, -51, -71, 83, -29, -12, -114, -92, 50, -98, -20, 49, -61, 25, -115, -96, 48, 18, -96, 22, 43, 81, 112, -43, 31, -118, 109, -54, 59, -89, -31, 61, -48, 13, -40, 2, -7, 72, 99, -114, -68, 42, 75, 90, 9, 34, -14, 95, 119, -65, -75, 3, 118, 71, -103, -69, -20, 119, 64, 7, 108, -2, 3, 122, 121, 63, -111, 59, 20, 49, -23, -68, -57, 101, 89, 113, 30, 13, -95, 74, -23, -123, 56, -91, 23, -70, 34, -114, -72, 100, 84, -85, 121, 75, 117, -50, 11, 82, 64, -97, 56, 40, 107, 125, -22, -53, 36, -42, 119, -14, -99, 20, 85, 79, 40, 84, -112, 101, 59, 23, -114, 42, 67, 117, 37, 42, -56, -14, -85, -121, 16, -38, -56, -94, 97, 123, 16, 123, -23, -11, 53, 24, -40, -91, 25, -39, 110, 109, -64, -73, -71, -113, -94, 55, -74, -41, -70, -65, 42, -105, 35, 54, 1, 29, -101, 111, 25, 112, 22, 117, -123, -90, -80, 37, -115, -94, -16, 15, 38, 34, 71, -115, -79, -52, 33, -7, 12, 33, -28};
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
    msg.setTimeStamp(0.6175353565060454);
    msg.setSource(16515U);
    msg.setSourceEntity(128U);
    msg.setDestination(52813U);
    msg.setDestinationEntity(251U);
    msg.source.assign("LJAZJQKGUEIRNYBJLJHJYFRLUXJBAUZWVCVOCFRKXHGXMWEKVJYCQOFDTVLGYJETYBBAIHLPBDPOMRCNTXBCGHEFXMFEXTVNHNIQRYKQTUMDMYUOIUZAYTVVDCGZN");
    const signed char tmp_msg_0[] = {-128, 33, 58, -79, 106, -71, -118, 50, 71, -106, 110};
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
    msg.setTimeStamp(0.7576908677649);
    msg.setSource(17252U);
    msg.setSourceEntity(147U);
    msg.setDestination(18498U);
    msg.setDestinationEntity(135U);
    msg.source.assign("OOOMCOMLSPSAMTEAQKNAQWLYIAJQQTJVOWXKBWZBRANUC");
    const signed char tmp_msg_0[] = {-95, 2, 72, 106, 38, -35, -71, 8, -44, 9, 11, 31, 83, -77, 91, -9, -51, -24, -89, 43, 88, -119, 87, 12, 18, 96, 52, 98, 114, -19, -3, 103, 5, 12, 36, -36, -115, 2, -49, 40, 56, -12, -33, 70, 118, 113, 123, 18, -11, -15, 114, -17, -77, -114, 72, -98, -64, 121, -35, 115, -24, -5, -95, -123, 0, -68, -68, 98, 111, 103, -61, -125, -101, -81, -19, 114, 84, 86, -113, -61, 9, 121, -88, 91, 61, 97, 45, 77, 89, -29, -13, 24, 105, 43, -71, 73, 113, 27, -121, -59, -8, 11, 30, -57, -122, 29, 15, -93, -73, 106, 38, -6, -120, -85, -115, -79, -62, 124, -31, 17, -116, 50, 87, -96, -68, -63, -97, 15, 4, -28, -7, 70, -28, -82, -2, -122, 47, 100, -94, -56, -4, 95, -53, 41, 84, -110, 16, -79, 116, -52, 10, 58, -66, -31, 73, 73, 48, -109, -57, 91, -91, -61, 95, 41, 125, 125, -24, 109, -7, -11, 31, 75, 102, 30, -20, 46, -52, 56, -101, -112, 76, -61, -61, -47, -121, 109, 84, -38, -64, -34, 75, -109, 76, -61, -78, -64, 112, 81, -78, -16, -112, -70, -63, -10, -47, -75, -108, 69, 69, -35, -43, 81, -86, 44, 38, -101, 24, 5, 87, -82, -34, -94, -93, 1, 117, -72, 85, 8, -6, 1, -55, -127, 51, -117, -15, -123, 19, 57, -77, -52, 106, 30, -91, -53, -62, -16, 17, 20, 89, -72, 115, -67, -116, 75};
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
    msg.setTimeStamp(0.4152839035973991);
    msg.setSource(31134U);
    msg.setSourceEntity(183U);
    msg.setDestination(50523U);
    msg.setDestinationEntity(69U);
    msg.source.assign("LBUQYTTSVITQEDMDLYMWSMAYERPZFGEPZMBQNMXINPTBKIOALLIRZTHGCWSTLYYZFMNTRDBBSQDRAAGBGHQKCNEABFZPOXEVVZMHQV");
    const signed char tmp_msg_0[] = {93, -25, 50, 46, 91, -56, -36, 25, -107, -12, 17, 77, 85, 93, 83, -93, 14, 4, -11, 33, -12, -63, 7, -128, 78, -101, 113, -39, -105, -100, 103, 105, 46, 61, 34, 26, -82, 58, -10, -87, -111, -54, -110, 124, -121, 32, 126, 119, -33, -78, 56, -44, 56, 113, 8, 30, 99, -26, -111, -116, 77, -59, -45, -26, 122, -49, 15, -37, 82, 74, 103, 95, -9, 124, 41, 42, 25, 55, -34, 17, -15, 112};
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
    msg.setTimeStamp(0.5075152639099029);
    msg.setSource(16179U);
    msg.setSourceEntity(33U);
    msg.setDestination(60999U);
    msg.setDestinationEntity(78U);
    msg.seq = 3015693838U;
    msg.state = 111U;
    msg.error.assign("MFCERHKNLOAFDBBGFRFBWYPZEJUJXLTBFTYTPHNVODWDBAKRXGOCADAVSHMKAJPOZXLJZPWOTTUKJSTYQHFISXCQVIXQJPUHLHEIAPVEVUQEONQ");

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
    msg.setTimeStamp(0.314461733999022);
    msg.setSource(64937U);
    msg.setSourceEntity(47U);
    msg.setDestination(53820U);
    msg.setDestinationEntity(100U);
    msg.seq = 1345075407U;
    msg.state = 220U;
    msg.error.assign("UMLWYRDSFY");

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
    msg.setTimeStamp(0.19389785688001127);
    msg.setSource(47491U);
    msg.setSourceEntity(213U);
    msg.setDestination(198U);
    msg.setDestinationEntity(252U);
    msg.seq = 1204203133U;
    msg.state = 58U;
    msg.error.assign("IWUWDTEGSNDXXQCYCTPMTVJZBTOILGBVYRBUITLCIRIOQRCAXEYMKJPNOCEIAKLWEQXJRTCHOKNLWDYVSXMNGAAEHDAUVAYTSELMASHHFIQRNOGGCMHZOFBVSVXRHYMCKJRHJFJVZLHAOPKFSUKQWPUQNZWFPGPPPHZFWTBGLLGCEBXIZPMJWL");

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
    msg.setTimeStamp(0.036479766423710425);
    msg.setSource(25938U);
    msg.setSourceEntity(17U);
    msg.setDestination(2878U);
    msg.setDestinationEntity(154U);
    msg.origin.assign("CJCCHBGBDUILFZHECVEQUKDNDYFNGWDRJSEEFXXWGYVMEUSAOLXLYJGALGOVYWDCRWPRZQSRSPWJMPZKHYHTFGOOZHWLZWQENBNTCWTDIVISBPKENSBRYIAXNSFKFAJVUMSOEUAOZARYITTMBXZHMIPQDPFUMNQJMXKRLVT");
    msg.text.assign("CEKPLMBEPHNSCGJTHSAWBYGTRDWBQCFFKLKVNAFPAOGJKQNECFNRAYVJWVDNXWVIVRZSSSGDKWYBDYXCBSFJUIOEIZGONOXTMCXZGOEEFNZCDXNUZZYDRJTXQRILGYKTVLOHUMJDSLATILTFIRMQHEMVRIBYSRM");

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
    msg.setTimeStamp(0.8665845869295523);
    msg.setSource(55969U);
    msg.setSourceEntity(206U);
    msg.setDestination(32463U);
    msg.setDestinationEntity(174U);
    msg.origin.assign("EWYWFIZJNGLZARQBECSUBHPYUOQLPZXBHSPUBASTHFQAXDRVF");
    msg.text.assign("MIOXXHJIZYDNLWFEIAYYNERWYOWXMCSJBSQEOPTYDZWGWFBOHZERZUUTPUXFMPVUVPIUJMRGAJRJBHRWALGUQKBNEBTGKJQCDDHOTREMLPXVWHFTXSBMABEMFGULJIVQTALBNUNIQUVUPBOKYFPDTAMIANKWCFSIIFGDQLQSAIZ");

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
    msg.setTimeStamp(0.5307290236505844);
    msg.setSource(57096U);
    msg.setSourceEntity(187U);
    msg.setDestination(62979U);
    msg.setDestinationEntity(28U);
    msg.origin.assign("UKDIROVGJTCUBYDZQAJFOSDGARNROUQCLKFLADCFDGPASKWQOSQMGQCPGAYJBBETDKOEPNXWXXQYTDYCVGBCILHXPXFNFEHWTPYHBJINZTEQWIMCVDLNJXCWIXYEJFMHXAAHBNRKDVZLUWKZRDBUFZFMEMSETMRKTKYNRSFLIPFGITIUUWKOJZZELVUHQRLHZYSQSBMLSMRZAVTMXPPNHHAJCLXSWYYVGOZOTMCRIJAGWQJPPWEBUVHEON");
    msg.text.assign("NXUWQXPSVJBSGYHUXGDSMJPHPNNRYNBTHIGQIKTRSYFGEZUAQKLTYONTUOLJPCQPTMEIJDCQLLAFIEJCDV");

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
    msg.setTimeStamp(0.9931036471843834);
    msg.setSource(53620U);
    msg.setSourceEntity(212U);
    msg.setDestination(36431U);
    msg.setDestinationEntity(44U);
    msg.origin.assign("KQBDJVWUWVWMBGHLTDDTPJBTQRCPRFGQWJSLCLECLPUXOKZZRUNDFYMRPBMSRUKAMWLINWOMCFUVBDISDPPKJWWIHOXNHFOZUSJTKEVTWBAXYOBNXQIODPWVJMXKVCYQCTUBPNAZATBAOTISIQYAQUZRGHHEJ");
    msg.htime = 0.43271634280814397;
    msg.lat = 0.45343232353518537;
    msg.lon = 0.1377240707306151;
    const signed char tmp_msg_0[] = {-92, 113, 102, -7, 32, 44, -109, -7, 35, -108, 46, -43, -97, 72, -69, -42, 8, -123, 41, 27, 71, 99, 16, -125, 74, 55, -124, -21, -48, 72, -34, 13, -73, 119, 109, -12, -3, 44, -51, -104, 65, 11, -25, -37, -8, 98, -53, -99, -7, 56, 38, -39, -74, 44, 5, 25, 9, 58, 121, -36, 19, 34};
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
    msg.setTimeStamp(0.4981983498042283);
    msg.setSource(25561U);
    msg.setSourceEntity(51U);
    msg.setDestination(57979U);
    msg.setDestinationEntity(197U);
    msg.origin.assign("OPGZVXHHBRLBQTQVFTELAWZOMMBGDJTDLZEGIEVXRWHSVQKICGONFYQHSLJE");
    msg.htime = 0.423556794558803;
    msg.lat = 0.9167862208242479;
    msg.lon = 0.04787005359610064;
    const signed char tmp_msg_0[] = {103, -72, 87, 123, 59, -102, -85, 32, -97, -123, 121, -79, 24, 55, -81, -88, 87, -70, -25, 38, -43, -8, 71, -69, -77, 1, 12, -53, 71, -116, 78, -38, -92, 51, 102, -117, -115, 9, 102, 68, -111, -18, 37, -87, 73, 55, 2, -104, -101, -71, -1, -92, 24, 66, -90, -51, 4, 19, 115, -64, -32, 58, -2, 107, 104, 99, 25, 90, 33, 3, -73, 34, -40, 16, 63, -25, 107, -27, -69, 123, 90, 40, 52, -116, 54, -75, 37, 102, -52, 34, -3, -122, 18, -16, 87, -20, 32, -70, 14, -12, -69, 119, -85, -99, 66, 10, -72, 2, -33, 20, -119, 21, -70, -56, -116, 46, -95, 15, -35, -4, 87, 103, -16, 85, -120, -44, -53, -31, -69, -120, -119, 116, -81, 44, -66, 115, 13, 16, -78, -105, 125, -100, 3, -114, 53, -120, 76, 82, -77, -78, 22, 88, 23, -22, -40, -108, -107, 28, 70, 58, -37, -62, 5, -60, -81, 65, -108, -72, 42, -69, 30, -73, 36, 77, 72, -41, 45, 17, -59, 76, 99, -95, -52, -72, 15, 0, -24, -56, -16, 13, 20, 80, -10, -23, 31, -80, 63, -108, 25, -76, -29};
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
    msg.setTimeStamp(0.22451191254653713);
    msg.setSource(17807U);
    msg.setSourceEntity(7U);
    msg.setDestination(52551U);
    msg.setDestinationEntity(139U);
    msg.origin.assign("ONVIDXCIVIZQFBQGSSFEHZCTSASVIHYTPOZRYXQPOURJYHVSJQEPMOZPABANNKWEIBNEWZOPMQWTRDDBZKTBHDCYNRUEPGIFLJDVSWVOPTEUMQJYSNLTMBKBGBNMKMMKHVWXBAWNLUFUTSAWKFQVRUMCMERXTHCHYGFYOPTCRLDAGRWXHUPXFJFGRLVEKQYXUJVOHCUPIDCJG");
    msg.htime = 0.9376660109469669;
    msg.lat = 0.31183703487554937;
    msg.lon = 0.3918687698188219;
    const signed char tmp_msg_0[] = {93, 76, 71, -56, -44, 112, -15, 62, -102, -53, 64, 38, -30, -13, 107, 39, -19, -29, 9, 119, -47, 85, 41, 50, 120, 51, 69, -21, -60, 12, -128, 44, -42, 82, 118, -7, 0, -26, 96, 16, -23, 53, -77, 57, -71, -30, -105, -98, 121, 88, 8, 121, 23, -68, -95, -33, 51, 121, -18, -13, 104, 81, -40, 19, 42, 23, -93, 92, 32, 42, 58, 62, 12, 83, -63, 9, 41, -31, -97, 0, 87, 28, 60, -41, 60, -116, 11, 10, -1, -24, 106, -71, -55, 20, -49, -104, -42, 50, 25, -103, -48, 38, -105, -47, -23, 25, 108, -55, 97, -60, 126, -120, 102, -83, 95, -59, 20, 101, -121, -54, 61, -64, 119, 56, -13, -12, 88, 31, 118, 47, -36, 58, -85, 68, -113, 19, -92, -38, 100, -67, -12, -60, -12, 66, 83, -109, 84, 70, 12, -40, 52, -128, 83, -108, -46, -124, -128, -2, -55, 78, -21, 112, -25, -103, 26, -59, 20, -26, 123, 97, -105, 96, 113, -59, 13, -36, 112, 71, 27};
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
    msg.setTimeStamp(0.37004535148628015);
    msg.setSource(26907U);
    msg.setSourceEntity(222U);
    msg.setDestination(2735U);
    msg.setDestinationEntity(146U);
    msg.req_id = 56718U;
    msg.ttl = 1130U;
    msg.destination.assign("EMPOBGUCZJYZAYMHNSRTCIFVFUGHMZCNXIAUSOAEGXJCXTVBNNGMGVKXYRDOAUROFYCOCDMP");
    const signed char tmp_msg_0[] = {117, 108, 80, 50, 52, -28, 27, -73, -68, 21, -47, -1, -30, -55, -126, 58, 121, -125, -20, -109, 122, 126, 46, -74, -7, -71, 116, 63, 28, -8, 111, 102, 86, -111, -90, -68, 76, -65, -126, 17, -47, 2, -126, 33, -96, -122, 42, -85, 41, -52, -25, -61, -74, 123, 92, -51, -75, 125, -108, -58, -74, -51, -49, 93, 43, -107, -95, 71, 100, 81, -80, -108, -115, 96, 10, -31, -99, -79, -40, -32, 75, 68, -20, -89, 105, -61, -91, -51, 62, -29, -67, 38, -94, 40, 62, -32, 76, -10, -99, -22, -106, 30, -105, 92, -13, 90, 114, 70, -84, -76, -33, -122, 109, -106, 107, 10, -108, 54, -44, -125, 118, -117, -24, -16, 19, -15, -47, -26, -24, 30, 10, -18, 110, -114, 23, -62, -30};
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
    msg.setTimeStamp(0.1447499813557136);
    msg.setSource(49885U);
    msg.setSourceEntity(248U);
    msg.setDestination(35985U);
    msg.setDestinationEntity(6U);
    msg.req_id = 28164U;
    msg.ttl = 59439U;
    msg.destination.assign("EMVHTHCSAJUVBXWKNWFXDMAWZTZJPRIUDDBPVZOSAWVSEFBBVAURJGDPYURKHFBECOHVSU");
    const signed char tmp_msg_0[] = {13, 108, -98, 107, -60, 24, 121, 117, -128, 52, 112, 124, 4, 126, 70, 33, 102, -89, -112, 65, 119, -22, -122, 36, 83, 87, -105, -19, 52, 50, 91, 88, 17, -40, -102, -115, -10, -21, -53, 112, 111, -7, 28, 37, 104, 57, -80, -42, -92, 47, 122, 53, -125, 33, 5, -70, -14, -3, -54, 57, -119, 70, 2, 74, 66, 88, -18, 60, 27, -85, -101, -120, -55, -54, 50, -4, -54, -114, 108, -98, -26, -101, -31, -77, 53, -1, 97, -94, 46, 110, 119, 6, -57, 4, 115, 30, -117, -111, -71, -24, -3, -7, -109, -4, 31, 68, 80, 23, 17, -27, -89, 116, -1, -86, -50, 24, 19, -85, -54, 54, 84, 104, 80, 3, -50, 110, 82, 119, -15, 52, 86, -83, 121, 26, -79, -32, 9, 80, 58, 0, -13, -9, -64, 82, -18, 35, -66, -58, 57, 119, -65, 64, 105, -119, -91, 126, 105, 83, 76, 13, -1, 53, 74, 87, -8, -73, 112, -82, 9, 49, 114, -74, 77, -8, -105, 114, 116, -34, 75, 72, 48, 116, 106, -122, -25, -33, 69, -11, -80, 111, -104, 80, 113, 110};
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
    msg.setTimeStamp(0.16598967375303475);
    msg.setSource(61016U);
    msg.setSourceEntity(168U);
    msg.setDestination(44205U);
    msg.setDestinationEntity(43U);
    msg.req_id = 39317U;
    msg.ttl = 35479U;
    msg.destination.assign("OGNWTJAYLZPUYRPQATIEIGVDRRIMZNITGMZCKFOROQTDVWHNUWINAPXPMSSTALGBQEEVSLPJLFZCZIOCZXSCGCXVGUKXGUIFMRCGRTCQFQDHWRCAHJKDDHPBVVTNFBUBYYDIHMYAQFJJUSSXLYAEYFJDOMHXCYSRIVWOLMRUPCABTEEZKKUUHWXHHLLXJVKPMLFQZRHWBKWXJVMBSSZEQOQTPJLDXUDKFEKFTJ");
    const signed char tmp_msg_0[] = {32, -116, 2, -13, 31, -119, 84, -7, -31, 39, 118, 21, -113, 100, -119, 16, 23, -80, 37, 115, -123, 101, -12, -41};
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
    msg.setTimeStamp(0.9928213485404831);
    msg.setSource(54005U);
    msg.setSourceEntity(21U);
    msg.setDestination(59061U);
    msg.setDestinationEntity(63U);
    msg.req_id = 47726U;
    msg.status = 226U;
    msg.text.assign("VOOMMNWRMXFSDRENUFTLZDOQFHUWYALSHBGNOKKREKTARYXXUWHWJCDSGTICDUZFOLNFGCVZTHYPIN");

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
    msg.setTimeStamp(0.20747165467187945);
    msg.setSource(64709U);
    msg.setSourceEntity(206U);
    msg.setDestination(11898U);
    msg.setDestinationEntity(202U);
    msg.req_id = 17702U;
    msg.status = 53U;
    msg.text.assign("UEAZXWZMKXHXEWJSZABULRDTYWMALIFFASRRQYLVZRFWKBTVFCYGRXMRDZASPDULPQQRLCCBBFESXGEGHSJTAHFKWTWLUOKKPDSONCXJDUIHKTQJCDELQVLVOJZEJVDSWZVGNSDVOUEYAVJPFUYZMBEBFO");

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
    msg.setTimeStamp(0.17450571217709632);
    msg.setSource(31450U);
    msg.setSourceEntity(216U);
    msg.setDestination(31163U);
    msg.setDestinationEntity(139U);
    msg.req_id = 35438U;
    msg.status = 198U;
    msg.text.assign("BQCAKCUOKOMPKXIFBAJFVVTGTVSGQNEUIOHWQZONDSVTQIJYZJMIYIHMDVANVBWXNYMWQNSJJFCQFLCZGCVHETGDZZMAXWPBMHGGVUSYYEPCWOHILZRBXBYCRXUIQSOXOCALQYCYDSQJDXUAIPTUKBNTZEHPEDHBKSGYRNRQKGLNFYHGEBEWLTZXKDUOUJHRLTZBKFO");

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
    msg.setTimeStamp(0.20361971798745793);
    msg.setSource(22048U);
    msg.setSourceEntity(22U);
    msg.setDestination(33900U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("UEONDXXLOSXVPLHRLCYKFSODHEGYHHTONSGJMZKKIIIQNNBADPLZRIRAAEKDWZIORWGVXUCPQEJBUIFWGQPYJLTKBAKSGATUJQYGTKTFRZUOFSMPOUQMGKVWHZVEUZANVIVWYWCMHDAFMMQWJBVVCFFHZMCXSCKWVYBXD");
    msg.links = 1344723592U;

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
    msg.setTimeStamp(0.11765185688191093);
    msg.setSource(47715U);
    msg.setSourceEntity(35U);
    msg.setDestination(8527U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("XEHMYEAXLFLWXMCGAUNNWDTSKUBREQNPHEGSDSSYCJKZWANQWQDSJRTSALDAWJBPGMUHVAMCZKQIPYJJTRWYCXVHMVW");
    msg.links = 3945692455U;

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
    msg.setTimeStamp(0.1692898627701337);
    msg.setSource(31668U);
    msg.setSourceEntity(88U);
    msg.setDestination(38483U);
    msg.setDestinationEntity(122U);
    msg.group_name.assign("ZKRLOTLXKDFQQFIFWIDSSJPQXNGYYQZPDIXESDECAZNEOOQLHLKVWNTEPZZINUUR");
    msg.links = 1918002646U;

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
    msg.setTimeStamp(0.49638540790703867);
    msg.setSource(50143U);
    msg.setSourceEntity(188U);
    msg.setDestination(25114U);
    msg.setDestinationEntity(251U);
    msg.groupname.assign("MFZDXYZEACQYTKVBHCVSDE");
    msg.action = 64U;
    msg.grouplist.assign("GCJIKUONHGXZEXTHZIYJTMZYOXNJKLHSSAHPDDGNPIGQLPQEPMLYSWDEWHOHWJEZEOTTPFWJFQPUKORGFQAMXRUBAULVBZTWCRDDATFYQJKMYWRFWBEPHHCMALYHGCTDMUBLDCLJXPPBBWLAZQUAZGXENSJCCQBUQMUGYVTHVVUYFVZBCNPDVDRSSTCLGSWJOYNKKIV");

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
    msg.setTimeStamp(0.7246528557160886);
    msg.setSource(4047U);
    msg.setSourceEntity(197U);
    msg.setDestination(49431U);
    msg.setDestinationEntity(139U);
    msg.groupname.assign("BJDFSOZTAXNWIUDMRDOZQBTSRDJQYPCCDELHIZRIVHLBLQLFQVTSNABMNPCWRHWWNJYCIFYCNDXYQZICVVHZRNPIQXSRIENKMXEOBWJFJXURCRJJNMPZETEKHCYLJGZXMPBXMDLBTKSOSPHOHGGWBHWKIKTJONAUSDQQZUFYGYNWTAEASTVUXOTLPVREUGAWGFGKKYQLFOABEKRVMOOSXYEMZFVUDXYAZFPHDGAKMVLMBUHEKCTUCAFPIG");
    msg.action = 98U;
    msg.grouplist.assign("DHBCGBMAUJRQFXLOLQKWTUAXTQCRCIBDGTXTNCLIUWFOBHMVANKSOTKDELGRJWLAPVHQCPEXZJWNDWBXGNPPZKEJITPWCRUYLRDOABKHVSTRFNTFEMFGEYHCFUDTAWBOYHNJMHSSLEDGSGICNWSFSEPHFAXOMIFETQIMARZVZZRS");

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
    msg.setTimeStamp(0.3811857014477391);
    msg.setSource(12681U);
    msg.setSourceEntity(220U);
    msg.setDestination(30865U);
    msg.setDestinationEntity(72U);
    msg.groupname.assign("LQSMGQUUKRLKEHADWIZWAOUPBRFXPZQLTZLKFFFVOGEIQHG");
    msg.action = 64U;
    msg.grouplist.assign("GMJJSYRCYMLPZCFSAKHGQUGZPQAPDBVADHUHHXVNBRBSWPVONIZOAXZJMOOGMTHQNGTBUNZYWEZQNUKGUJANGOSFHEKWSJRDOGRWLHQRXEWDHTOBSULJXDPWRKJ");

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
    msg.setTimeStamp(0.27713591581918895);
    msg.setSource(57334U);
    msg.setSourceEntity(89U);
    msg.setDestination(31458U);
    msg.setDestinationEntity(224U);
    msg.value = 0.9115985367888105;
    msg.sys_src = 16974U;

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
    msg.setTimeStamp(0.010373669938710806);
    msg.setSource(52748U);
    msg.setSourceEntity(50U);
    msg.setDestination(49642U);
    msg.setDestinationEntity(210U);
    msg.value = 0.5816087013268331;
    msg.sys_src = 32458U;

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
    msg.setTimeStamp(0.4618439418181738);
    msg.setSource(19366U);
    msg.setSourceEntity(115U);
    msg.setDestination(31396U);
    msg.setDestinationEntity(51U);
    msg.value = 0.23021050663220877;
    msg.sys_src = 42205U;

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
    msg.setTimeStamp(0.2933484229691605);
    msg.setSource(1041U);
    msg.setSourceEntity(167U);
    msg.setDestination(34252U);
    msg.setDestinationEntity(126U);
    msg.value = 0.214455101444193;
    msg.units = 165U;

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
    msg.setTimeStamp(0.04600436577109923);
    msg.setSource(48054U);
    msg.setSourceEntity(58U);
    msg.setDestination(62010U);
    msg.setDestinationEntity(142U);
    msg.value = 0.9289510845791569;
    msg.units = 7U;

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
    msg.setTimeStamp(0.9372401689701504);
    msg.setSource(28531U);
    msg.setSourceEntity(0U);
    msg.setDestination(5584U);
    msg.setDestinationEntity(98U);
    msg.value = 0.8300081282282498;
    msg.units = 164U;

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
    msg.setTimeStamp(0.3149349818040633);
    msg.setSource(17993U);
    msg.setSourceEntity(139U);
    msg.setDestination(36013U);
    msg.setDestinationEntity(187U);
    msg.base_lat = 0.13394629974740024;
    msg.base_lon = 0.8392330052072084;
    msg.base_time = 0.7212659381665729;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 4255U;
    tmp_msg_0.destination = 14379U;
    tmp_msg_0.timeout = 0.5972817075742471;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("LFPONEVVROFEPZPPMDAJEDPFTJDMDMXNDBYYTRQGGPYLBDUFBABUVQOWAZNUMZNZUVLNGUHZSLCGSSUARLKQBLFZAJYOTTKHAANCWDEYHNIAZKWOXFGXNWXHKIYLJRITPCHIOSKSJVWLDKIRUJRQOAP");
    tmp_tmp_msg_0_0.description.assign("DCSIUXEFJLEMNOJNPLIZJPTVBRARBEVTRSSHZGWWDVFLMUMOHB");
    tmp_tmp_msg_0_0.vnamespace.assign("TFUQMWZWUPZQITNDYURORQYOEULTGLIIHZYJREXFEIRIRGDXKPVKSYUPPDQHKCQXCRRVGALWWGDGSX");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("CHXZYDAIQTGNBSMFZDJQYGDBEUFRASBNHALLECMMSKLRGCEMPMGIIERCYWVNSFDTCXXINGMTQVSRZNJTITFAVWKPOUBKPGWXMHQNKKHWOADBJSGAJNEPDYCRUNJOHFKIONAZBVBYTLCHTEWJDCTPAZQC");
    tmp_tmp_tmp_msg_0_0_0.value.assign("VXSDCYSFXNHNMZUCEWKVJDLQGICBPRSCFLJSHDKQLELZTTKYSGPYIGNAFRSKAIAWNUPAUIJQWYGQUQFUFAHVPLWECMZAMYUIIYMOCQWWWNPBAZOKIMJTEAMRZVXZNQLOJMVXNGDIXGOVJBWLYTFHBQUXEJODREBCRBFMLTLABSJMOZZTJEFDOSVJPPSQUDZKHECBYTXOOGEUFIHNRGVOXVWHDK");
    tmp_tmp_tmp_msg_0_0_0.type = 176U;
    tmp_tmp_tmp_msg_0_0_0.access = 243U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("XSYBAIFJTWUYNZDABOKWAJFRVLSMAMCMNDBCHKVCOPWPSFGPGVIKGJGQEIDWXRTMUFPLSEDVFJUNBLEZCAGNITPPPSKAFXJDBEQNYKHOYCVHMQXIKDFUMWVFYHQVZOIZSBEMQYEERWRIGOTKRQUZZORLHFXDJCLAVGVVTOSJYZNMSQWTSGNLXPJULGWDUZEQLUTNTMXDIGH");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.maneuver_id.assign("EJMQXNKXEWZDDVOOHFZBKALLEWAKISJCDUZHOZFKXFFGHKFPWVVBAZAEDSBJGKHXVUHDNJFILQMGECPREBJVZYRQCBJAGJCURYTBEVUBCOUZULAGNYCDELFNXSWYWWPRRNRM");
    IMC::Takeoff tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.08991776320865508;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.6049861284636322;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.986702373817275;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z_units = 114U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed = 0.5311477962817864;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed_units = 179U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.takeoff_pitch = 0.22269064484285594;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.custom.assign("PPRHAWQAIWQUFJMEXMZEZMMRWPOVXMJKCQGGGOYCPSLDGQLPGIQUVRYIXVNSKMYHZNJKAFJPEDUPKXRDTGULTCBYUKYYCRHQOBKCNNULGSLEXIUEACDSHAVWHFMQICBOINIDLEEVNWSRCJDXVATDZMIJNTGKZBAHJSGZTQJHZSTHSXETKLTRAMEX");
    tmp_tmp_tmp_msg_0_0_1.data.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7985928841373962);
    msg.setSource(16931U);
    msg.setSourceEntity(245U);
    msg.setDestination(47686U);
    msg.setDestinationEntity(144U);
    msg.base_lat = 0.9384006374595232;
    msg.base_lon = 0.8891893048407468;
    msg.base_time = 0.050275099010994806;

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
    msg.setTimeStamp(0.4748905485553273);
    msg.setSource(24004U);
    msg.setSourceEntity(53U);
    msg.setDestination(16268U);
    msg.setDestinationEntity(211U);
    msg.base_lat = 0.9905248935122631;
    msg.base_lon = 0.5229815215843917;
    msg.base_time = 0.7533545085250754;

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
    msg.setTimeStamp(0.6484527718665096);
    msg.setSource(56062U);
    msg.setSourceEntity(165U);
    msg.setDestination(5190U);
    msg.setDestinationEntity(124U);
    msg.base_lat = 0.8826399563402729;
    msg.base_lon = 0.9804227630949958;
    msg.base_time = 0.47115523780196267;
    const signed char tmp_msg_0[] = {12, -68, -75, 118, 19, 118, 88, -113, -55, 93, -63, -58, -125, 115, -120, 87, 78, -93, 56, -76, -88, -25, -83, 102, -70, 9, -99, 125, -36, -16, -85, -118, -30, 42, -114, 32, 2, 18, 83, -18, -36, 18, 5, 9, 108, -76, 0, -104, 74, 95, 14, 81, -96, 53, -28, -85, 125, -70, -85, -41, -120, -87, -80, -83, -127, 31, 64, 71, -77, -93, 113, -79, -33, -52, 76, -85, -116, 86, 98, 54, -114, -108, -64, 19, -24, -42, 52, 83, -19, -116, 105, -5, 40, -91, -8, -124, -61, -123, -126, 107, -87, -104, -62, -67, 48, -106, 17, 93, 33, -10, 64, -48, 121, 59, 125, -35, 98, -64, -27, -110, 117, 54, 34, 109, 15, -117, 55, -128, -114, -37, 42, -67, 110, 77, 55, -77, 57, 90, -38, -127, -57, -110, 7, -13, 38, 59, -5, 112, -100, -101, 63, 79, -104, -29, -100, -49, 64, -83, -54, -110, -7, -95, 24, 106, 96};
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
    msg.setTimeStamp(0.9283926436499135);
    msg.setSource(10220U);
    msg.setSourceEntity(96U);
    msg.setDestination(25022U);
    msg.setDestinationEntity(179U);
    msg.base_lat = 0.2374674018305304;
    msg.base_lon = 0.7533221530509164;
    msg.base_time = 0.42753153826504975;
    const signed char tmp_msg_0[] = {-38, -83, 97, 109, -29, -87, -123, -121, -115, 111, -89, 9, -58, -21, 13, 109, -118, 9, -38, -44, -29, 8, -120, 18, 37, -98, 13, -72, 106, 73, -10, -8, 75, -63, 44, 71, -127, 109, -117, 40, -59, -45, -94, 80, -54, 118, -116, -13, 33, 79, 54, -122, 79, 95, -83, 21, -116, -8, -63, 83, -59, -69, -17, 123, 34, -118, -70, 86, 3, -67, 14, -32, 11, -124, 103, -60, -72, 106, -24, -106, 106, 26, 92, -111, 77, 38, 108, -17, 100, 66, -73, -121, 72, -125, -123, 94, -44, -2, -9, -116, 63, -60, 84, -69, -103, 40, 8, 105, 125, -108, 74, -3, -13, -15, 5, -98, -18, 26, 102, 57, -97, 86, 90, -20, -44, -87, -62, 76, -35, 65, -86, -126, -111, 53, 15, -117, -101, -39, 103, 56, 110, 114, -117, -13, -99, 99, -15};
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
    msg.setTimeStamp(0.34312188663097576);
    msg.setSource(24823U);
    msg.setSourceEntity(221U);
    msg.setDestination(58107U);
    msg.setDestinationEntity(239U);
    msg.base_lat = 0.772632457638751;
    msg.base_lon = 0.8713924532374787;
    msg.base_time = 0.1501368852472278;
    const signed char tmp_msg_0[] = {114, 48, -124, -35, 125, 50, -112, 67, 126, -20, 73, 35, -21, 114, 97, -121, 2, 59, -98, -124, -43, -88, 56, 23, 100, 26, -73, -99, -89, 7, -41, 96, 51, -34, -24, 31, 104, 109, -105, 18, 29, 111, -109, -22, -51, 41, 33, -67, 4, -67, 60, 71, 86, 29, 121, 123, 78, 33, 73, 86, -50, 49, 12, -9, 105, 57, -28, -97, -12, -50, -79, 3, 94, -47, 59, 98, -40, 20, -19, 40, -28, -62, 121, 40, -6, 33, -12, 94, 121, -65, 16, -64, 2, -114, 89, -54, 112, 9, 88, 104, 9, -109, -103, -88, 31, -13, -59, 66, -84, 86, -7, 42, -123, -19, 76, -116, 73, -7, 113, -13, -20, 71, -120, 126, -37, -22, 121, -56, 54, 91, -111, -100, 105, 43, -45, -123};
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
    msg.setTimeStamp(0.9988538120000643);
    msg.setSource(61715U);
    msg.setSourceEntity(214U);
    msg.setDestination(9139U);
    msg.setDestinationEntity(138U);
    msg.sys_id = 47312U;
    msg.priority = -109;
    msg.x = -7290;
    msg.y = 24603;
    msg.z = 21803;
    msg.t = 23199;
    IMC::MsgList tmp_msg_0;
    IMC::SaveEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GENNYDDXWQSSMDZIVQXSWJIPGEWBQHBJJLTMSUAETMTROYRFOBMHZISWDOPEWKXNVGHJKCEEAZMBRCLYOVHXFPLRMYGHVKDFSBZBYRTHFFUDCXPIYPYRLOOLJYNPOHJIYOXDCPZGWLFUGXWQQRZGFLMCUVHBGMNDAFRGSMNKKDHPGOCYTECQJKJQXACUKRKDZSKIWTUNVLINACNIXMVTEETHUPKVAT");
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3366388834100079);
    msg.setSource(36949U);
    msg.setSourceEntity(182U);
    msg.setDestination(47U);
    msg.setDestinationEntity(192U);
    msg.sys_id = 12768U;
    msg.priority = -88;
    msg.x = -12631;
    msg.y = -19121;
    msg.z = 23385;
    msg.t = -32523;
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.7780338547208643;
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
    msg.setTimeStamp(0.6191494855686401);
    msg.setSource(45227U);
    msg.setSourceEntity(44U);
    msg.setDestination(46320U);
    msg.setDestinationEntity(8U);
    msg.sys_id = 18869U;
    msg.priority = -128;
    msg.x = -10069;
    msg.y = 30138;
    msg.z = -19091;
    msg.t = 1156;
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 40274U;
    tmp_msg_0.sys_dst.assign("MJVIHMJROVHGYAXFBNFASLTWUGGMNPALCVCTAFUEGAHKZRXDUPOPQRFBFBDCJJZQOMGWHWMILBLUHUNCDWMFIYNEEODKYJZESLEKZVMFGMSWXRKBPTSQPEOIVTIWHTPYEDYACJVBXRVRYYYLAPSSGSSNDZDKIYRRHIZXUALSHBRFUFUJN");
    tmp_msg_0.flags = 163U;
    const signed char tmp_tmp_msg_0_0[] = {34, 97, -126, -95, -47, 65, -72, 101, 81, -104, 86, -95, 61, 119, -25, 72, 15, -42, -81, -66, -97, -96, 38, 124, 16, -104};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.1646506884264891);
    msg.setSource(13818U);
    msg.setSourceEntity(49U);
    msg.setDestination(34920U);
    msg.setDestinationEntity(163U);
    msg.req_id = 43380U;
    msg.type = 213U;
    msg.max_size = 54450U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.18689518882504885;
    tmp_msg_0.base_lon = 0.41301978363270875;
    tmp_msg_0.base_time = 0.6128269149330816;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 37069U;
    tmp_tmp_msg_0_0.priority = 105;
    tmp_tmp_msg_0_0.x = 6529;
    tmp_tmp_msg_0_0.y = -13351;
    tmp_tmp_msg_0_0.z = -4208;
    tmp_tmp_msg_0_0.t = 25251;
    IMC::ControlLoops tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.enable = 139U;
    tmp_tmp_tmp_msg_0_0_0.mask = 3992890806U;
    tmp_tmp_tmp_msg_0_0_0.scope_ref = 450712971U;
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
    msg.setTimeStamp(0.5163095737668661);
    msg.setSource(18004U);
    msg.setSourceEntity(136U);
    msg.setDestination(47354U);
    msg.setDestinationEntity(81U);
    msg.req_id = 58222U;
    msg.type = 180U;
    msg.max_size = 34878U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.2438235734593046;
    tmp_msg_0.base_lon = 0.38871274617677365;
    tmp_msg_0.base_time = 0.3602330286582399;
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
    msg.setTimeStamp(0.641179762966524);
    msg.setSource(28854U);
    msg.setSourceEntity(38U);
    msg.setDestination(17835U);
    msg.setDestinationEntity(46U);
    msg.req_id = 7115U;
    msg.type = 211U;
    msg.max_size = 24683U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.46365311599995185;
    tmp_msg_0.base_lon = 0.2425243128493909;
    tmp_msg_0.base_time = 0.5050431936041855;
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
    msg.setTimeStamp(0.5241466975463099);
    msg.setSource(20307U);
    msg.setSourceEntity(127U);
    msg.setDestination(21743U);
    msg.setDestinationEntity(18U);
    msg.original_source = 17887U;
    msg.destination = 12268U;
    msg.timeout = 0.2739999941666882;
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("NALHHADRJOFPBBCCTKFAWAVQLGFLXWPPDXYRUUMNJXCZGDYRIZWIUMYUKAHEDEKBEWOXSHHOXBIKZNCKTFKBZBSSMXXUQVIPGVDDOLQQFIBRPOGNGNKJQIRPEFXZKKMUJTSQGJOYCOMNLC");
    tmp_msg_0.predicate.assign("NZHEADHIUXIUXIMFOQQOVRGFHKJFZTYJSCOEBQTAEEJXMAPUZWRSVVLAHVSFJLGGHVUKQWDIPCNMUXDOMIODTMLSHKEDNNQQZGCBJNNDPBDOYYJVLZGVULUSNEKLJRFZRCWOTPMDRRPMAUBJXWZYSQZLNHLCY");
    tmp_msg_0.attributes.assign("TBJRDHTJAUBWVRVQWYCXGCZPAITMRDBZPLEFLPOPQMKKBVRISNZQDJYZMUBKGTOLFFHNHFRDXJNFKOMZGDYULESPRNCJYVWXKIEHMTDPXZGPNBCN");
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
    msg.setTimeStamp(0.5217349666515564);
    msg.setSource(24533U);
    msg.setSourceEntity(142U);
    msg.setDestination(40256U);
    msg.setDestinationEntity(159U);
    msg.original_source = 28257U;
    msg.destination = 11842U;
    msg.timeout = 0.44660938747153356;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 48U;
    tmp_msg_0.actions.assign("QDDCUEHJYGBASRTKESAKHSRGHGQPUTSQWZTKXVLGOADEUSLCOPECLVVNRXJFHNSOMKTNXWKAFRZHUJWEHFYCIEGUFEOTHAVLMJGMBQGTKTONRNKEWHDCEVCPOMWULXQCU");
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
    msg.setTimeStamp(0.4269263497100453);
    msg.setSource(29200U);
    msg.setSourceEntity(244U);
    msg.setDestination(29136U);
    msg.setDestinationEntity(230U);
    msg.original_source = 9415U;
    msg.destination = 57726U;
    msg.timeout = 0.18496001715712185;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.8438004639302769;
    tmp_msg_0.temperature = 0.6284214764273952;
    tmp_msg_0.depth = 0.2919546922642674;
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
    msg.setTimeStamp(0.4253102261809141);
    msg.setSource(43401U);
    msg.setSourceEntity(237U);
    msg.setDestination(6444U);
    msg.setDestinationEntity(141U);
    msg.type = 105U;
    msg.comm_interface = 8945U;
    msg.model = 37426U;
    msg.list.assign("RKIGNLGORIJWAVYCSCFCTNZYILFVZBXBHHKSAPJBFKYEPYGCGCZCJDCGSJAAUIJBTSVNKYWJDMKTOHVYWWZLWVZENEUEKW");

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
    msg.setTimeStamp(0.9790824919506396);
    msg.setSource(53178U);
    msg.setSourceEntity(188U);
    msg.setDestination(65141U);
    msg.setDestinationEntity(71U);
    msg.type = 173U;
    msg.comm_interface = 12714U;
    msg.model = 5514U;
    msg.list.assign("ELSWAKWLSYJIQUSWLTSBDOSMJNPZCRXZVGDFVJPILZMPQZKBNHBRKSQGPWPWLGKQDPVOMHWTCZMECXVRDXUNPXMATGLFOBNNUMEVFCZSEHIWYDCRRKWUHTJKGAQGQXAMZHTCBOSVEGYCILYPMUIXTJHJXAOIARDKNUXWCEQCAYURPHVNIDEQBVOOEJIJZFZRTGYANOLOFTCUAX");

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
    msg.setTimeStamp(0.7955812432186251);
    msg.setSource(10922U);
    msg.setSourceEntity(132U);
    msg.setDestination(43117U);
    msg.setDestinationEntity(173U);
    msg.type = 194U;
    msg.comm_interface = 26772U;
    msg.model = 60800U;
    msg.list.assign("FDWTVWBETLKKIXFKMGLHBSZNAVYHGDHVFRSSUEWMYNQODMYKOERRYQKNOEBYKZSUYZRAKJJJGOQOPSQLDEVMEWVDAPFBHXHIRJNVGXUIRSWBQKDATKSAYFLRCQIPPYSIEFGZMDAJJACVJTWZXCTHNXZGQMQDRGVBWMCCTULOCLCXRZWPDOOTCFGVLBXAAEYDWPQXCICLFPUEHUNGWHUFINPIBSIUP");

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
    msg.setTimeStamp(0.28378393922045997);
    msg.setSource(18110U);
    msg.setSourceEntity(61U);
    msg.setDestination(58490U);
    msg.setDestinationEntity(85U);
    msg.type = 14U;
    msg.req_id = 2344742195U;
    msg.ttl = 11918U;
    msg.code = 5U;
    msg.destination.assign("OADCOZYSGEUJILPZSHGMSQUVEGQYMTDIOYXSHMMKVWZCUFWAVMOXLLPBVUPNNMCBAOTSQNFDDWQNXOEPIHBJNWOWBNCLONBKSWBUITRYFKSPQXFVVFHXTKZRVYEYSTYGXEKDIKTGMNIC");
    msg.source.assign("GUTDGZPBIIVMBDSRZJPLQTSGTYJUNWUANLQROKYBTRMCCAOYLPYHBOXVTPGKPUKCWSORSXHDYSPMQMZDYINQDHGFSILBZGOWVGCFIEXNMSFGEFUHJIFBWCOEKMZWJMOVCAUEHTEXJHHAVQKULTXODMPAYVXFXNFXRSJZWRPNTFIRNRKEOKRKFABLYZHEETDUBPACMHRLCZCBAEZUYIGJQAINJGLWEXQJQVW");
    msg.acknowledge = 133U;
    msg.status = 80U;
    const signed char tmp_msg_0[] = {8, 110, -39, 50, 27, 79, 105, 36, 90, -80, -114, -123, 113, 26, 57, 13, 66, -15, -95, -93, -40, 102, -11, -105, 30, 102, 70, 19, -54, -80, 80, -7, -126, -109, -26, -85, -44, -57, 89, 11, -20, 98, 44, -101, -37, -100, -87, 54, -72, -64, 112, 96, -39, -81, -123, -56, -104, -124, -77, 95, -127, 6, -71, -41, -109, 84, -40, 23, 111, -63, 23, 4, 48, 11, -112, -16, 47, 48, 38, 98, 112, 95, -11, 123, -89, 63, 69, -112, 57, -59, 120, 16, -29, -7, 56, 41, 4, 31, 85, 4, -75, 83, -46, 69, 124, 57, -19, 107, 100, 93, 69, -105, -19, -13, -127, 17, 101, 42, 126, 39, 99, -122, -114, 18, -114, -105, 122, 2, -108, 87, 85, 49, 99, -45, 124, -32, 92, 34, 113, 126, -121, -84, -97, -124, 91, 124, 14, 66, 51, -87, -84, 86, -80, 2, 126, -59, -27, -21, 10, -90, -33, 20, 31, 109, -128, 111, 44, -87, 92, 20, -14, 75, -119, 107, 39, -95, -71, -100, 98, -8, 54, 67, 11, 20, -126, -8, -20, 23, -29, -77, -34, -3, 19, 76, -115, 121, 73, -80, 87, 32, -89, -59, -60, 84, 108, -66, 81, -42, -62, -23, -85, 87, -79, 5, 65, -77, 101, 32, -31, 27, 43, -86, 85, 98, -99, -42, 109, 85, 82, 8, 35, -50, -123, 119, 85, -94, -27, -21, -39, -124, -89, 91, 69, -36};
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
    msg.setTimeStamp(0.5985180243262932);
    msg.setSource(35165U);
    msg.setSourceEntity(108U);
    msg.setDestination(6958U);
    msg.setDestinationEntity(83U);
    msg.type = 205U;
    msg.req_id = 567182815U;
    msg.ttl = 23619U;
    msg.code = 16U;
    msg.destination.assign("DILWECNHKOJRHONJGGZRKOMBZFLGGMUUFBPWOKFZSLBGRPKYSJEXWMFWVXZCPICVQTFEMUGGKHFSRAIHUPAIYNIARXDPXEBTCNSHKEMAMQVUVLFALJIZVTTECTBXAJLSXTDRWXUCDQSOVBIXJFSUYNVVEWQDBTOCYBPEMQHPRAUKXTQADXAUBGVJIYHWKLGSWRQMNEODHHLDMCJYIRFUZPIDSLCASN");
    msg.source.assign("BOKHQSHTJEBWLLQSMUFOLIMDORJPZYYOVPUUPHGHGKDVCIQOVZYEIYORMZFBJDAXKRHCG");
    msg.acknowledge = 24U;
    msg.status = 86U;
    const signed char tmp_msg_0[] = {91, -68, -87, -45, -63, 65, -66, 0, 123, 53, -123, 70, 34, 99, 42, -32, -86, 4, -56, -99, 55, -110, 102, 93, 115, 99, 122, -40, -18, -119, -111, -11, 34, 58, 95, 44, 116, 40, -125, 96, 4, -20, -44, 11, -6, 22, 35, 15, 67, -4, -18, 98, -44, -3, -28, -71, -45, -125, -34, -99, -80, -94, 64, 13, 6, -11, 36, 115, 78, -10, 123, -73, 81, 115, 118, 72, -58, 97, 44, 92, -117, -109, 118, -68, -51, 93, 121, -12, 4, 14, 2, 88};
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
    msg.setTimeStamp(0.24537779081275002);
    msg.setSource(43589U);
    msg.setSourceEntity(224U);
    msg.setDestination(41313U);
    msg.setDestinationEntity(6U);
    msg.type = 163U;
    msg.req_id = 3565173858U;
    msg.ttl = 6693U;
    msg.code = 165U;
    msg.destination.assign("PVSBVEAQGFYALPMBMSUDEMDADPPANGTEFAELWRODPSIKIBNZPQJIOFQOFCHZYUXLDPLCWVMXQNKYELIJTUTSWJUNXZQEWTPMFBWREKGZRSHYHIJNZSTNVBPERZVGDLBJOCNXISOZHESCAKUCAFMYDTYKKUZCTXBZROEGIVYRTTGDKWXNCXJKFHLGAOA");
    msg.source.assign("NSTBGOGVWBNBZRFEMAXWE");
    msg.acknowledge = 159U;
    msg.status = 186U;
    const signed char tmp_msg_0[] = {24, -121, -91, 10, -64, 115, 123, 102, 126, 57, -37, 34, -46, -93, -116, -123, 83, 1, 120, -30, 49};
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
    msg.setTimeStamp(0.0819940563535635);
    msg.setSource(28319U);
    msg.setSourceEntity(119U);
    msg.setDestination(34392U);
    msg.setDestinationEntity(236U);
    msg.id = 242U;
    msg.range = 0.8403959866075941;

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
    msg.setTimeStamp(0.014179671258046644);
    msg.setSource(40458U);
    msg.setSourceEntity(15U);
    msg.setDestination(27879U);
    msg.setDestinationEntity(41U);
    msg.id = 224U;
    msg.range = 0.146322774821813;

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
    msg.setTimeStamp(0.21266484369436645);
    msg.setSource(56282U);
    msg.setSourceEntity(101U);
    msg.setDestination(49990U);
    msg.setDestinationEntity(181U);
    msg.id = 107U;
    msg.range = 0.3404244988481143;

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
    msg.setTimeStamp(0.7299207239412757);
    msg.setSource(747U);
    msg.setSourceEntity(232U);
    msg.setDestination(42646U);
    msg.setDestinationEntity(247U);
    msg.beacon.assign("VXCVBZHQIFNPQQJNODTTCRCVHTUEMYIOYOITVEMWXNYAOGMOGIIULMXWECHCMDDXXKKSKKIPPXHJXUCEGSAKIRNMVNLGCEMDZSBQWGJHTUBTSPNZFDLSSLPJHYKZQQDKAUVDAHMXQAHQSBOEUCJUAZNIZKYRWRPBESNWLACBWZGYHAFXAGPPRYEQUURRXRONFFWBVDOWFAJFZKLYTVMLWRTJGJOZFI");
    msg.lat = 0.627835962453046;
    msg.lon = 0.2578238503119098;
    msg.depth = 0.14075448736555174;
    msg.query_channel = 109U;
    msg.reply_channel = 115U;
    msg.transponder_delay = 24U;

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
    msg.setTimeStamp(0.8651284387198309);
    msg.setSource(35276U);
    msg.setSourceEntity(10U);
    msg.setDestination(53162U);
    msg.setDestinationEntity(57U);
    msg.beacon.assign("EUVJFSHDBXDRPHXTVLIASGETOZUORATQHVNWPJQAIPNXWHLWZECESYLWCBAUYTWEMRGBBUZIELVUPSZGEHVNXMPQPHMCQTNOGLJWFFIOIJAHNMYFJZYMLVKNLSVHDRAXMOTRB");
    msg.lat = 0.6866361718865067;
    msg.lon = 0.6876428955239172;
    msg.depth = 0.4340782006508188;
    msg.query_channel = 35U;
    msg.reply_channel = 193U;
    msg.transponder_delay = 51U;

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
    msg.setTimeStamp(0.797557918732964);
    msg.setSource(32552U);
    msg.setSourceEntity(137U);
    msg.setDestination(50083U);
    msg.setDestinationEntity(21U);
    msg.beacon.assign("WDSHLCIJZJVQBEMIKKUGXWJYDVHFBDJDOSWKWSFTAPSQEXAENNBFKOGBOVSWNKGYCCISPDRRITCEWNUAFPFZUOJGPHQWIEZTPSPHQWQKGJETMBPDVHOMRMLIIMYVQMRRXIVOQOLVDYBJFLYXINUHZXXRZRNWXOPXYVFCOXKCYAEVE");
    msg.lat = 0.750891663191591;
    msg.lon = 0.04243771796973084;
    msg.depth = 0.32989269493330753;
    msg.query_channel = 89U;
    msg.reply_channel = 249U;
    msg.transponder_delay = 171U;

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
    msg.setTimeStamp(0.5492671306417688);
    msg.setSource(53158U);
    msg.setSourceEntity(150U);
    msg.setDestination(47459U);
    msg.setDestinationEntity(231U);
    msg.op = 117U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AFAVDWKAMHUNACTFWOOBUZAXNDKZONXDXEKMXJDXQRKWVJCZPGWNRRILFLKIFZCRLJRIQQVBCXYUFJEZWCQG");
    tmp_msg_0.lat = 0.05952429976147344;
    tmp_msg_0.lon = 0.6255141343278621;
    tmp_msg_0.depth = 0.27922640225401596;
    tmp_msg_0.query_channel = 23U;
    tmp_msg_0.reply_channel = 2U;
    tmp_msg_0.transponder_delay = 207U;
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
    msg.setTimeStamp(0.3069130313342189);
    msg.setSource(42183U);
    msg.setSourceEntity(163U);
    msg.setDestination(37901U);
    msg.setDestinationEntity(171U);
    msg.op = 199U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PEPCJTKHMWZVDIWKXZIEFODXQBONGKPTCDYTZJIUVLYGUNLQKVVWHSKSCRMDPPXPMUYIGVCTYALUWNBLGFEIWYNGSQAFMCKBVESILBEPVPHILYGZGEKNBWRAAXMXRALRKXJODYTWSNIJMPKCQOEEBDUAWORHFMFOFNSUCEZ");
    tmp_msg_0.lat = 0.07822439907658241;
    tmp_msg_0.lon = 0.71937455004973;
    tmp_msg_0.depth = 0.0025177015254995716;
    tmp_msg_0.query_channel = 26U;
    tmp_msg_0.reply_channel = 136U;
    tmp_msg_0.transponder_delay = 195U;
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
    msg.setTimeStamp(0.5873105900061829);
    msg.setSource(20777U);
    msg.setSourceEntity(5U);
    msg.setDestination(12011U);
    msg.setDestinationEntity(114U);
    msg.op = 42U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VZRMQFUPGMHPPTFLRXAMVNZHRBIEIHPZAGFMKWXCLHUUIOGAEDEJJIONGBVZYRNMCTMMQHESPQINQUMKL");
    tmp_msg_0.lat = 0.170574571825426;
    tmp_msg_0.lon = 0.21071351289407014;
    tmp_msg_0.depth = 0.9056156970028593;
    tmp_msg_0.query_channel = 132U;
    tmp_msg_0.reply_channel = 191U;
    tmp_msg_0.transponder_delay = 14U;
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
    msg.setTimeStamp(0.48649435480573444);
    msg.setSource(26134U);
    msg.setSourceEntity(25U);
    msg.setDestination(59400U);
    msg.setDestinationEntity(219U);
    IMC::AisInfo tmp_msg_0;
    tmp_msg_0.msg_type.assign("UOAOCGZQFXYTIQJEPDNPGLTMEWESVDBCZENJUZOCFWCJSAXJNRQVLGBPWJVOSTUNSCTWYRUNQXQAUCOEY");
    tmp_msg_0.sensor_class.assign("YIMLGMGKUOYIMPXPPHZVQLBSENRCZOXETDILWUNOWZWWEAXCHUAUIVBRQFDFERQCSJJKXTAIMJMMUSAQRFQNFSBMIICXPTHZFITLTSAURKRVWBNKVNFOEWMVLXPXAOPTMIKLACGQZGGJU");
    tmp_msg_0.mmsi.assign("NJLULTESKKAHE");
    tmp_msg_0.callsign.assign("UTHNVGCMEAXVDWNLSNOWOOPCFFEZVRVCWJDYFZKLTKILJHCPCEDMQZYDANWBALRPBHUWTRQPCMEQAIAXUUQBRSHUJRRVILPWIHVXQHTYRSMVZICUG");
    tmp_msg_0.name.assign("DPNHVPSRCMTTZPUHDIMTTGZGGQQLRAOXCIJQOHZWJRBOICWOHFYJCPLSMHNTFILVGKBHHVCXVRLFRRWABGYNQLKBNKVVXMXYFRDZBRDMXUKVFYTFAWQALXJLYSJNSCIEJDIQXWUZKKTAUGRJEMVQJVJLYYBAFN");
    tmp_msg_0.nav_status = 206U;
    tmp_msg_0.type_and_cargo = 133U;
    tmp_msg_0.lat = 0.6663404592801279;
    tmp_msg_0.lon = 0.7181590070111301;
    tmp_msg_0.course = 0.27045743921084886;
    tmp_msg_0.speed = 0.7823233390887847;
    tmp_msg_0.dist = 0.5553206593199536;
    tmp_msg_0.a = 0.32118631528242914;
    tmp_msg_0.b = 0.7579338700947741;
    tmp_msg_0.c = 0.5622147158189651;
    tmp_msg_0.d = 0.5912477073706622;
    tmp_msg_0.draught = 0.7752783866334206;
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
    msg.setTimeStamp(0.8099461820875052);
    msg.setSource(47214U);
    msg.setSourceEntity(237U);
    msg.setDestination(33978U);
    msg.setDestinationEntity(168U);
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 52165U;
    tmp_msg_0.lat = 0.4009812742174015;
    tmp_msg_0.lon = 0.17691636436942848;
    tmp_msg_0.z = 0.1786208949040794;
    tmp_msg_0.z_units = 106U;
    tmp_msg_0.speed = 0.1232124450837313;
    tmp_msg_0.speed_units = 139U;
    tmp_msg_0.custom.assign("XEXSBEILNZWCYWIORTCCXTVJLQAMQCQHHMVXLGCMSFZSNKLJZEFDAQWTEICOIAH");
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
    msg.setTimeStamp(0.2441456730472532);
    msg.setSource(35942U);
    msg.setSourceEntity(167U);
    msg.setDestination(39246U);
    msg.setDestinationEntity(0U);
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("MICHISKDNESJYBNINNVZDGSYXUEOIGGZPXMRAAAFBITWJYMCZBPWCEGCKQRQLDJI");
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
    msg.setTimeStamp(0.020225603911859458);
    msg.setSource(65266U);
    msg.setSourceEntity(171U);
    msg.setDestination(55145U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.3146875451192147;
    msg.lon = 0.7797432395098075;
    msg.depth = 0.7310671508694822;
    msg.sentence.assign("QEKRICXVMGIEPKIESRFBYCSVDHRMOFJVNSPIAFPIUIFNMOZQBJLGWYSFTMCWEWAARHNBGTPXLSHBNZXDBLQBRBGRPYGOQHEUTATWQOBMUTERNLYTJYCTKYIULMWRSVVPHXUCUVHPTNTOXZKKVUJXMSBFSUVAZILADZFSEODGYLPFJECJCGRNMADAJQOXYIOWAZKYSKPXBXKCWDDEIDWZQJVJFXMYEOOZLWJMHGKDHLTNNQUKCHRUHCFLPVQDZG");
    msg.txtime = 0.9550106300693663;
    msg.modem_type.assign("SFDBALNXPMFBGMLJRYWWCOQWGWJQABTVGELFQQZSSVKRKYJIRSGNWMTUUAUZCLYJUCIEUASLKZGYZGTIKBICVEVXXTFFUDODFSIJRZBDIDXAVLKPQZXUCGZORQKLIYFSVAMYGHWAOTVBHKIYZCZUKMFUBPMAGDUCODIWXNSRQNTLQEDEWHMPNEPHOSPJQXBGHPNTWTXZJDBNBQHLWOEOEKMOR");
    msg.sys_src.assign("AFUWALHUVLEZDKWPRIESZBBZTAQFOOSNPCKMFOHXSGINGVAZCBXUNKKUHS");
    msg.seq = 50904U;
    msg.sys_dst.assign("YKEBWARWRRQOLAUTBVCNIUITCRUPUDMXPFWKCVFMGGIKRUSOXLMGWSFNDZJSXWYWNEMZQBHOHRVNYPOIAPEUPGXTTPEZTLLGSNYNILDMTVVFASZTXQNWLHZJDDGSIKNRYYAJEBBHTYNQSDIBTZCMHAQQHLWXM");
    msg.flags = 252U;
    const signed char tmp_msg_0[] = {-68, 57, 88, -9, -13, -20, 47, 0, 47, -18, 87, 13, -84, -76, -51, -37, -68, -35, 11, 46, 125, 49, 36, -45, 118, 112, -116, -123, -79, -78, 34, -49, 3, -23, -73, -11, -35, -15, -111, -38, -71, -4, 94, 46, -93, 11, 81, -70, -19, -119, 104, -64, 9, -31, -8, 111, -124, -15, -123, -9, 115, 118, -96, -69, -63, -46, -1, -97, -33, 19, 23, 83, 62, 1, -108, 115, 1, -116, -102, 40, 76, -127, 19, 126, 101, 91, 32, -122, -98, 29, 88, -7, -18, -77, 93, -87, 104, -25, 98, -126, 79, -50, -96, -84, -98, 42, 7, -96, -84, -85, 82, -73, 56, -31, 66, -90, -99, 20, 59, -6, -65, -97, -35, 48, 56, 87, -86, -58, 16, -37, -78, -117, -77, -71, 25, -18, 104, 124, -110, 105, -76};
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
    msg.setTimeStamp(0.3586610494897705);
    msg.setSource(5216U);
    msg.setSourceEntity(134U);
    msg.setDestination(31948U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.19436499241297067;
    msg.lon = 0.2156713631253997;
    msg.depth = 0.16301293007504902;
    msg.sentence.assign("EBQONIQHKVIFGTQYWYFVCAQMRIPRYMYTUOAUVULKSNZRHJSIUKGWCPTEGRYBOYIQZKUQYJOCWGNEKBYKPALNDMCBVBCBVNXMDMUKXFSQDPEFVHIHUOIAHALJDMPTTANJPXGECXSFGWCJDTKDGPZ");
    msg.txtime = 0.4022765168799377;
    msg.modem_type.assign("KZSALWCAXOCB");
    msg.sys_src.assign("OFFDXCPUVFZQZARJXXKHWMYJXTIDZAICESSQSVARLNZECCEMOVAPBSZQLBCWPXBBIENZTARGPDSUWDFHAEOBHMFNTHLEOYQGITEJLKNMUDTIPXMOAEWPY");
    msg.seq = 18218U;
    msg.sys_dst.assign("WFBRONWFHEQWTGTUHUCWEZZMZHACMVHIGCLLPENGSKMICEJLTIPVFGWXAXDRRKBUYMTLKEGNQYHSPFUMOYXAQRHOIKOUBORMYQEUCSLSIFENFBQHUNFGOKCDBTWZWJVEDEDTYTDIYQAO");
    msg.flags = 92U;
    const signed char tmp_msg_0[] = {-91, 119, 12, -19, -10, -24, 33, -72, -124, -100, -2, -108, -99, -97, -52, 19, 81, 90, -56, -92, 12, 67, -128, 84, 27, -46, -38, 88, 46, -100, -15, -49, 124, 41, -111, 76, -60, 0, 31, -128, -119, 67, 100, -14, -18, 70, 81, -15, 44, -104, 53, -53, -59, 15, 89, -46, -79, -105, 76, 116, 78, -111, 85, -98, -100, 97, -35, -31, 30, -91, -52, 42, -8, 109, -104, -44, -60, -111, -124, 6, -16, -50, -89, 17, -77, 63, 98, 71, -57, -105, -93, 41, -34, -67, -56, 125, -95, 46, -111, -4, 79, 81, -114, 77, -23, 79, 19, -58, 39, -2, -109, -37, -46, -102, -10, -128, -64, 79, -28, -126, 1, 101, 98, 118, 16, 113, 117, 61, -59, -12, -15, -93, -97, 94, 110, 100, 29, 123, -127, 62, -53, -118, 57, -71, 58, 53, -108, 41, -80, 44, -93, -62, 96, 87, -14, -12, -21, -17, 14, 101, 118, 40, 11, -13, -88, -97, 22, 41, 94, 111, -39, -70, -117, -24, 22, 97};
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
    msg.setTimeStamp(0.7480946700190555);
    msg.setSource(13730U);
    msg.setSourceEntity(254U);
    msg.setDestination(2623U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.05000499562874616;
    msg.lon = 0.2602073444238584;
    msg.depth = 0.751568591375614;
    msg.sentence.assign("BIXWOKTGICGKLVMWGRISYPANNVNVFYEJVPYRUEZMVECTOUBJLXCKUPZWFTAEVBHVFHCTPFPQEFLSZTFAIBQUZRHDMWMETJKZPFCXIP");
    msg.txtime = 0.24353391457439166;
    msg.modem_type.assign("ZGRLFBHSKIRWVQETPUKYIUKUTHKDNDAVQUEGTDCDYLREGINNNACJOQTKJCWHSCAXHGYHBYGR");
    msg.sys_src.assign("OKBYEDBXZDAGGISARBBYBZSXUARMLBQZMVBJJASJZUTHXTNPXNPEDUGLJWSFHMFMYDQRPRYVCDIYPUGVWUGCSMGEFFYKJCAIBLDSEALQNFXUMVSOEKFHOCKSCKKNRBPUAMTLPIVEWDQOLXIWFMHSPOTIVCQNNGTCNYVZY");
    msg.seq = 13273U;
    msg.sys_dst.assign("JRBOOCEXHWUOLTMYQNVECNNVNCUFFVLCTSRZEMIEAFQQWJIZEDGKNWZXDILCTYXWORWKOFESCMMAUMRULTCVZRKVQBOMEWVBLIPHNHHFWYXIGDJGQJWZXSJZFUJFJKFAPLLKZXJRNCHRQPZRUEASKYG");
    msg.flags = 114U;
    const signed char tmp_msg_0[] = {10, 66, -127, 67, -48, 95, 2, -120, -62, 27, -33, -64, -73, -43, -62, -115, 18, -18, -85, 26, -114, 112, -85, -22, 2, 46, -65, -42, 9, -29, 96, -33, -108, 70, 100, -100, 27, -115, -60, -20, -26, 57, 53, 126, 72, -126, 4, -112, -51, -64, 77, -41, 68, 77, -10, 68, -31, -111, 36, 126, -120, 10, -16, -118, 125, -104, -115, -74, 114, -28, 88, -71, -77, -17, 27, 106, 21, 107, 67, -84, 41, -102, -115, 17, 34, 62, 31, 122, -90, 48, 113, 84, -66, -88, -72, 41, -117, 72, -77, 41, 22, -106, 17, -101, -71, 86, 70, -66, 8, -107, -49, 6, -87, 70, -78, 27, -2, -121, -74, 8, 65, -100, 63, 51, 55, -58, -11, 27, -102, 111, 112, 3, 42, 62, 83, 11, -100, 116, -116, -82, 51, -124, 60, -104, 110, -8, 5, 119, 77, 25, 4, -42, 36, -44, -37, -35, 55, -98, -79, -91, -35, 119, -94, -123, 48, 114, 85, 50, 65, 11, 12, -18, 100, -76, 9, -59, 78, -64, -58, 38, -6, -20, 32, 109, 23, -114, 115, -72, -74, 87, -49, 91, -42, -41, -98, 39, -51, -51, -64, 37, 39, 5, 61, -57, 126, 70, -5, -10, -31, 33, 93, -14, -118, 34, -101, -74, -118, 5, -88, -51};
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
    msg.setTimeStamp(0.5737338809937291);
    msg.setSource(63896U);
    msg.setSourceEntity(54U);
    msg.setDestination(41488U);
    msg.setDestinationEntity(102U);
    msg.op = 165U;
    msg.system.assign("HFBQDWRUOTAWPHAISNGWZYVAIVQRRELSBKXZMZDSUTQHGEWXELNXLWOFPROXDONTNULSYSITMUNWJJFJOYZNHJUSLJKZHAOHHOEAMEEVCDTGRXGCBYBYCLTWXFPPTYBVNLQPGWGPGFZTIICKTCRCNZXXSFFQLENGWDJHUIIKAIJVPALAZJK");
    msg.range = 0.48407890315857327;
    IMC::EulerAngles tmp_msg_0;
    tmp_msg_0.time = 0.7351982298891337;
    tmp_msg_0.phi = 0.5712575478929086;
    tmp_msg_0.theta = 0.9402451752028526;
    tmp_msg_0.psi = 0.9022880505101619;
    tmp_msg_0.psi_magnetic = 0.21874168982132236;
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
    msg.setTimeStamp(0.18511197206556784);
    msg.setSource(52770U);
    msg.setSourceEntity(31U);
    msg.setDestination(45452U);
    msg.setDestinationEntity(55U);
    msg.op = 251U;
    msg.system.assign("SQEGORHVEKGFNDEXQLZVIRCZUPJCAKFZIMSVWZNIWXJBLMLQLXWFRBWJIPOIZNRWMJIOSKZZQSWFQGYSRXGVNSOAPTMUULIFKYITFHLHMVPXBYCNJZJKDGVEQSUUMMOZYGAYDKWWYCTQVAUFSSXCTNAAECYTRHNVHNKEPOKBDB");
    msg.range = 0.5176040501322854;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.15329156139103695;
    tmp_msg_0.amp = 0.10938957735081312;
    tmp_msg_0.cor = 240U;
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
    msg.setTimeStamp(0.21576675561271363);
    msg.setSource(46579U);
    msg.setSourceEntity(168U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(221U);
    msg.op = 10U;
    msg.system.assign("WNAVFOOOOUZSRIUWOZPOKPFMTGQLOHMRZBIPTNSCRIWJZXQGBAFFSOQFAMUOEPBDPLRQMYXDNYTGUDYDXQFGPHSDSSBHAXJVYWTRCISTLLMESVUHBJGTIGHEZURJACKVHKJXQGAMLHPFYULRPAFZMLCBVCARYIELEPN");
    msg.range = 0.4945867234359119;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 108U;
    tmp_msg_0.period = 1202577923U;
    tmp_msg_0.duty_cycle = 1751920820U;
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
    msg.setTimeStamp(0.3807963993874268);
    msg.setSource(36810U);
    msg.setSourceEntity(206U);
    msg.setDestination(11111U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.43030290316082787);
    msg.setSource(61820U);
    msg.setSourceEntity(0U);
    msg.setDestination(39129U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.2865619351558847);
    msg.setSource(44172U);
    msg.setSourceEntity(174U);
    msg.setDestination(47490U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.7934688446848042);
    msg.setSource(51220U);
    msg.setSourceEntity(241U);
    msg.setDestination(37670U);
    msg.setDestinationEntity(15U);
    msg.list.assign("VBACSYORQEZUWUSAQPDCPPYVWNFLGGMAUKIHCTDRHJEZIOFNHSBWUNQZTRUJCIJECXVKYLPRZWMFLKJKGZUDAZTIKMYIJTMSPITDFTKOFXDLDDLONGSPNKLKALQHHHNLNMOYVATGHFBSPONXQXVEUMZNDQTFWEDGXBSKNIGQWJMVXMCQUUEUGRYYBTSWHAABAMBSLGROCFCBVVJWZXJBILRDXWHKV");

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
    msg.setTimeStamp(0.7622126555414043);
    msg.setSource(5789U);
    msg.setSourceEntity(5U);
    msg.setDestination(64644U);
    msg.setDestinationEntity(65U);
    msg.list.assign("PKMUVOELYQGODTZFVDVCRFZMBAKIDTERHDTKSSJCCKQCOSALKGUEYWMFJOWHGJHLHHMZBRPBHRKWUCANZOFQAPSLUQGFDZGEMZZYJNPCKUXJIOYPTHNPQVWEJVLATFOSCWPXTVOUPCXQRHZQU");

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
    msg.setTimeStamp(0.1872209282661691);
    msg.setSource(57376U);
    msg.setSourceEntity(221U);
    msg.setDestination(31285U);
    msg.setDestinationEntity(223U);
    msg.list.assign("FWJESCXLWSVUDZNYXOYRIEMNITCLDWBEISNDUHGAUZKTOOVMJSARGQICWJFPYZNTCPCZUTXHTJLYOIBUZLAGHKOLMVIHHMHXWFSLDKQWRYMBQXANHLZINZCXEYPZKALFACRZAJPRRDUQKQLSYEONJJGSGHPDRKZBWUMRJPGBVQJEWOKAPOBGDUUSKTCTTDBBRGHEFXMEFYFVPTUVKNRPXIVDIXMMQBGVHOVVAICW");

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
    msg.setTimeStamp(0.15916334110848307);
    msg.setSource(6809U);
    msg.setSourceEntity(185U);
    msg.setDestination(10981U);
    msg.setDestinationEntity(221U);
    msg.peer.assign("BIOZTWBXLYUSUVETNSVWQHGAOMKPMHJEYFJWURDYIRCITCJEGIAXEGFUSHDBPFXBNUQFRJHCZNOJYINCEKDOTZWSLPEQMNNERPGXTLKPKRIWHMKQWOQCDFFIUJAYHJHBJPBXFDAHVVMQAHOTGMKTXLEQWNYUBLMGXGADVFTPMTIUSQBCTWGYJNLK");
    msg.rssi = 0.11530803573078796;
    msg.integrity = 19749U;

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
    msg.setTimeStamp(0.9236219098404863);
    msg.setSource(64404U);
    msg.setSourceEntity(201U);
    msg.setDestination(60034U);
    msg.setDestinationEntity(26U);
    msg.peer.assign("YEQSCRTRLAHVYSZRPKCLVWFHIUCNMWSRBCMAWFCIUCOBDDEZQSUFBXPPLBJKQGRGEZQXVLAGOZJBKAONXG");
    msg.rssi = 0.7660899663811486;
    msg.integrity = 29624U;

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
    msg.setTimeStamp(0.32905664760061704);
    msg.setSource(32733U);
    msg.setSourceEntity(18U);
    msg.setDestination(53381U);
    msg.setDestinationEntity(25U);
    msg.peer.assign("YRQVLWBMLKPTMCZSZWNTPYBHHGZKFPTAETDTOMGWJJEKQVMPNGXPBFAZBYIDCOQNPCY");
    msg.rssi = 0.26811557838047706;
    msg.integrity = 3362U;

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
    msg.setTimeStamp(0.14461646885647772);
    msg.setSource(7232U);
    msg.setSourceEntity(212U);
    msg.setDestination(34225U);
    msg.setDestinationEntity(144U);
    msg.req_id = 22428U;
    msg.destination.assign("MSGHNAYGEHDTYWBITYBVZAZFZNRXWTRDZXAGOCRQGPPRHLUWPNYDTSISREXKULPTEFJFZGOBJDOEYUEIQMCKGYIASFXZBWSELVZMRHVIPAXKWQRAZTZIQJCMSYNSBSQFMD");
    msg.timeout = 0.22576685403419172;
    msg.range = 0.17599741513299483;
    msg.type = 85U;
    IMC::Displacement tmp_msg_0;
    tmp_msg_0.time = 0.9528635325183333;
    tmp_msg_0.x = 0.021018377447383108;
    tmp_msg_0.y = 0.7066577080641047;
    tmp_msg_0.z = 0.29159588038799156;
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
    msg.setTimeStamp(0.9598882287369659);
    msg.setSource(17387U);
    msg.setSourceEntity(245U);
    msg.setDestination(6828U);
    msg.setDestinationEntity(46U);
    msg.req_id = 51957U;
    msg.destination.assign("KWLPMBEZDOIFXTCLITXOZKHEQCVTCCOEOGKXRAXTBZZBLSWONOHIFRUFEUYGAHXPDBLSHJHCNDVRIIYMDXPGLQNXAPMLUTSBRIOAJBVNZSMHFQGPQDJBFTYZSSDJGKRENNEYEWSVYHRRORLKAYKBLWEUXVVSWMYIQ");
    msg.timeout = 0.5392307979543102;
    msg.range = 0.741075562382543;
    msg.type = 65U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8359242514399988;
    tmp_msg_0.y = 0.5067712695963841;
    tmp_msg_0.z = 0.7546701863766622;
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
    msg.setTimeStamp(0.319002852728843);
    msg.setSource(61946U);
    msg.setSourceEntity(216U);
    msg.setDestination(64305U);
    msg.setDestinationEntity(115U);
    msg.req_id = 46603U;
    msg.destination.assign("OUAIUMWDYXEBVJGDTSQNAJOPBNMOVCYKBTUNFCKWQULXBSDBUHZNMSPDGQWRIRRWUBVDHJKHLLIBVVUKVECQLLYLEZTQTJCFJMTYKPQOZBKENHZEYVGSSJAJCRHKAAYENQRBJTWIAOXLIUAXWMLMRTGNHGPCUDZFGGXGPOTYDXODEKREZUWMPVSAZVWFOWSXBCPZHIHENZQXPOASFGRLRFXCYDXTFCFPMHSKCIPEJNFMRSLJGZKQIOHYVFAYM");
    msg.timeout = 0.8679906475408774;
    msg.range = 0.5851279978129857;
    msg.type = 214U;
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("JRDRIVCGPABQIMYRKVGCUODYRNPDICGSNIITWYKIZPEHDZLVUAJNKKUNRBXEXCHCXMBCJLIQYHGSQUZPVYZZHWTWWGMKU");
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
    msg.setTimeStamp(0.7416139466395928);
    msg.setSource(64845U);
    msg.setSourceEntity(2U);
    msg.setDestination(38588U);
    msg.setDestinationEntity(203U);
    msg.req_id = 31339U;
    msg.type = 123U;
    msg.status = 136U;
    msg.info.assign("KHEDKCJNHBRYMSJPFVTURNUWOLHFKXLFYHMSXUBVHIJTDIYRWIGDXVHMNWREZFQWJZBQBHMIZRZRORTUBAYNKLXSPI");
    msg.range = 0.6515945342215012;

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
    msg.setTimeStamp(0.032546384742619505);
    msg.setSource(38956U);
    msg.setSourceEntity(22U);
    msg.setDestination(54014U);
    msg.setDestinationEntity(170U);
    msg.req_id = 28271U;
    msg.type = 36U;
    msg.status = 123U;
    msg.info.assign("MEVIXBSWMFYPHTAJIXVIMCP");
    msg.range = 0.35906634647849367;

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
    msg.setTimeStamp(0.529650976097783);
    msg.setSource(28444U);
    msg.setSourceEntity(57U);
    msg.setDestination(6077U);
    msg.setDestinationEntity(27U);
    msg.req_id = 37586U;
    msg.type = 35U;
    msg.status = 9U;
    msg.info.assign("CQUMHSHTGGTJJRVIRJWFTOKMLVWXNCCUVOUIGJLVGROAUEOMGFPWZSBNHFHECYIMQGKYAIEPPBKHQJCLLLFMZPHLQAEWWGZJAZVFRABWLHSWS");
    msg.range = 0.4397812461642311;

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
    msg.setTimeStamp(0.6887526011822395);
    msg.setSource(62562U);
    msg.setSourceEntity(190U);
    msg.setDestination(44511U);
    msg.setDestinationEntity(208U);
    msg.system.assign("AHEFMLCBLAECTXVXOWGSBQPREOWYEKJYZCLMGDGVCZQVQVSBZXUWSRWUZHHXMHNBZPFDTMYZYFGJEXZDEZMVDQQGMNTLMRRCFHGBJHOVVICSKUNCKQFIOLLUANZUFRPQWVSTDHSLQPCJTIDEUJJLYMJBNPLJTYYFBVAKGZOQTWBKEHHRAWUIIJTALKMPAGIROXXKFAUOUNOEYSIAR");
    msg.op = 252U;

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
    msg.setTimeStamp(0.9115293054340787);
    msg.setSource(39930U);
    msg.setSourceEntity(170U);
    msg.setDestination(30356U);
    msg.setDestinationEntity(0U);
    msg.system.assign("EMGLWGWLFHDDYLFJYLRXKWMABZHYKLCEOMXWXXUTVACWEPIANMHEIORZOBSFVUVEKBJWQRTDYUHCNSVAPXGJXIZBEIBJNRZTVGDHQXDJICNDEHTSCKRJCWPNXSAJAQFHNCOOIZVVLKVFQSCHSIBJZBZUZSWPFLDOYZJFTTBUKKGGPFTKCYKHQY");
    msg.op = 148U;

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
    msg.setTimeStamp(0.9645065367245204);
    msg.setSource(28226U);
    msg.setSourceEntity(176U);
    msg.setDestination(14688U);
    msg.setDestinationEntity(76U);
    msg.system.assign("DLYWLNCCVBDQZEUYNALMLBLHCYRBKZXBFJSFUBRSGLYJEPNCGJAIHVMEVZPNSAKGHVHOZMVWPITBGDXAUTDL");
    msg.op = 211U;

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
    msg.setTimeStamp(0.4496346813224973);
    msg.setSource(62938U);
    msg.setSourceEntity(18U);
    msg.setDestination(31614U);
    msg.setDestinationEntity(251U);
    msg.value = 20608;

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
    msg.setTimeStamp(0.39943879749650124);
    msg.setSource(9231U);
    msg.setSourceEntity(175U);
    msg.setDestination(51422U);
    msg.setDestinationEntity(75U);
    msg.value = 26889;

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
    msg.setTimeStamp(0.9684841153548606);
    msg.setSource(47400U);
    msg.setSourceEntity(147U);
    msg.setDestination(38857U);
    msg.setDestinationEntity(50U);
    msg.value = 895;

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
    msg.setTimeStamp(0.6526832487551173);
    msg.setSource(2674U);
    msg.setSourceEntity(74U);
    msg.setDestination(37981U);
    msg.setDestinationEntity(172U);
    msg.value = 0.6798608891898464;

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
    msg.setTimeStamp(0.36736128458476636);
    msg.setSource(59730U);
    msg.setSourceEntity(189U);
    msg.setDestination(21048U);
    msg.setDestinationEntity(5U);
    msg.value = 0.26978047135591965;

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
    msg.setTimeStamp(0.7995071184721438);
    msg.setSource(54601U);
    msg.setSourceEntity(139U);
    msg.setDestination(7893U);
    msg.setDestinationEntity(228U);
    msg.value = 0.9098938427889207;

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
    msg.setTimeStamp(0.9869714859215755);
    msg.setSource(41554U);
    msg.setSourceEntity(122U);
    msg.setDestination(54654U);
    msg.setDestinationEntity(43U);
    msg.value = 0.45769252160683815;

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
    msg.setTimeStamp(0.21277634864260353);
    msg.setSource(41333U);
    msg.setSourceEntity(108U);
    msg.setDestination(29030U);
    msg.setDestinationEntity(153U);
    msg.value = 0.3914186323574862;

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
    msg.setTimeStamp(0.12943325183638033);
    msg.setSource(18099U);
    msg.setSourceEntity(121U);
    msg.setDestination(65283U);
    msg.setDestinationEntity(203U);
    msg.value = 0.9011481098453201;

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
    msg.setTimeStamp(0.40054224903959534);
    msg.setSource(23248U);
    msg.setSourceEntity(93U);
    msg.setDestination(53023U);
    msg.setDestinationEntity(89U);
    msg.validity = 34620U;
    msg.type = 195U;
    msg.utc_year = 35919U;
    msg.utc_month = 25U;
    msg.utc_day = 235U;
    msg.utc_time = 0.04303652068713826;
    msg.lat = 0.13661688165078123;
    msg.lon = 0.927349028586222;
    msg.height = 0.4256398453422965;
    msg.satellites = 161U;
    msg.cog = 0.3841356762629484;
    msg.sog = 0.9291788013736719;
    msg.hdop = 0.45283912793970305;
    msg.vdop = 0.4124303764092466;
    msg.hacc = 0.7072877520119627;
    msg.vacc = 0.06696281187342268;

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
    msg.setTimeStamp(0.7975125262334796);
    msg.setSource(59772U);
    msg.setSourceEntity(176U);
    msg.setDestination(9441U);
    msg.setDestinationEntity(115U);
    msg.validity = 44405U;
    msg.type = 115U;
    msg.utc_year = 5210U;
    msg.utc_month = 27U;
    msg.utc_day = 93U;
    msg.utc_time = 0.2402112511925243;
    msg.lat = 0.8418258892645504;
    msg.lon = 0.4311517156794684;
    msg.height = 0.8555010208395045;
    msg.satellites = 172U;
    msg.cog = 0.12016562852730439;
    msg.sog = 0.283897279479862;
    msg.hdop = 0.5599494587745181;
    msg.vdop = 0.8222488030843903;
    msg.hacc = 0.21992201309676174;
    msg.vacc = 0.5949672058909362;

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
    msg.setTimeStamp(0.09820588970528688);
    msg.setSource(12801U);
    msg.setSourceEntity(76U);
    msg.setDestination(3614U);
    msg.setDestinationEntity(51U);
    msg.validity = 57201U;
    msg.type = 74U;
    msg.utc_year = 44445U;
    msg.utc_month = 252U;
    msg.utc_day = 81U;
    msg.utc_time = 0.8093769087111522;
    msg.lat = 0.02467689003691642;
    msg.lon = 0.9410376160211631;
    msg.height = 0.2832066762692208;
    msg.satellites = 159U;
    msg.cog = 0.6326834451668258;
    msg.sog = 0.12808934939177574;
    msg.hdop = 0.43575449926327026;
    msg.vdop = 0.9794044971572522;
    msg.hacc = 0.5006938865196738;
    msg.vacc = 0.11407122938414072;

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
    msg.setTimeStamp(0.2865194683351625);
    msg.setSource(29575U);
    msg.setSourceEntity(106U);
    msg.setDestination(36772U);
    msg.setDestinationEntity(28U);
    msg.time = 0.2270943180276812;
    msg.phi = 0.8027028189481917;
    msg.theta = 0.8949067655734835;
    msg.psi = 0.47463324287427267;
    msg.psi_magnetic = 0.3004778610978003;

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
    msg.setTimeStamp(0.7375320704392252);
    msg.setSource(1240U);
    msg.setSourceEntity(163U);
    msg.setDestination(47885U);
    msg.setDestinationEntity(253U);
    msg.time = 0.8742300820710959;
    msg.phi = 0.990807065883786;
    msg.theta = 0.8491698744843112;
    msg.psi = 0.5779526569580186;
    msg.psi_magnetic = 0.4643512483129929;

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
    msg.setTimeStamp(0.46449186921721963);
    msg.setSource(40333U);
    msg.setSourceEntity(117U);
    msg.setDestination(56889U);
    msg.setDestinationEntity(227U);
    msg.time = 0.2116861927048932;
    msg.phi = 0.16664004189596138;
    msg.theta = 0.3845965851317702;
    msg.psi = 0.21314817237630534;
    msg.psi_magnetic = 0.05523978631262183;

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
    msg.setTimeStamp(0.9011551929689114);
    msg.setSource(24597U);
    msg.setSourceEntity(229U);
    msg.setDestination(60454U);
    msg.setDestinationEntity(221U);
    msg.time = 0.04705025470533453;
    msg.x = 0.4302750625222057;
    msg.y = 0.42213798621191356;
    msg.z = 0.8136833412200964;
    msg.timestep = 0.5158419941328538;

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
    msg.setTimeStamp(0.5326161750754688);
    msg.setSource(14025U);
    msg.setSourceEntity(182U);
    msg.setDestination(41344U);
    msg.setDestinationEntity(160U);
    msg.time = 0.6443198345201693;
    msg.x = 0.7851714124458896;
    msg.y = 0.3106625102276991;
    msg.z = 0.5270199649812929;
    msg.timestep = 0.090689884490745;

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
    msg.setTimeStamp(0.7743391168620427);
    msg.setSource(24820U);
    msg.setSourceEntity(131U);
    msg.setDestination(5765U);
    msg.setDestinationEntity(192U);
    msg.time = 0.5373020116965062;
    msg.x = 0.015627003130407102;
    msg.y = 0.525392665602499;
    msg.z = 0.7321435214901248;
    msg.timestep = 0.2341828107318441;

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
    msg.setTimeStamp(0.43867689874881666);
    msg.setSource(61523U);
    msg.setSourceEntity(21U);
    msg.setDestination(31494U);
    msg.setDestinationEntity(127U);
    msg.time = 0.34550035066481843;
    msg.x = 0.05261182720415292;
    msg.y = 0.4113000072414815;
    msg.z = 0.5015419325552452;

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
    msg.setTimeStamp(0.9912853614345608);
    msg.setSource(37903U);
    msg.setSourceEntity(85U);
    msg.setDestination(31657U);
    msg.setDestinationEntity(144U);
    msg.time = 0.6943735429835901;
    msg.x = 0.7005409528468023;
    msg.y = 0.6026604720872842;
    msg.z = 0.2397649498371479;

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
    msg.setTimeStamp(0.3563443369796102);
    msg.setSource(8681U);
    msg.setSourceEntity(112U);
    msg.setDestination(466U);
    msg.setDestinationEntity(50U);
    msg.time = 0.3150524949845108;
    msg.x = 0.8840236922203667;
    msg.y = 0.9048563557803408;
    msg.z = 0.9534960116170705;

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
    msg.setTimeStamp(0.39132661005270375);
    msg.setSource(57843U);
    msg.setSourceEntity(198U);
    msg.setDestination(34806U);
    msg.setDestinationEntity(210U);
    msg.time = 0.37411799135093415;
    msg.x = 0.29151053034684005;
    msg.y = 0.7995509116328351;
    msg.z = 0.7863097675967948;

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
    msg.setTimeStamp(0.23460847037855992);
    msg.setSource(31957U);
    msg.setSourceEntity(218U);
    msg.setDestination(31150U);
    msg.setDestinationEntity(194U);
    msg.time = 0.12217468008907573;
    msg.x = 0.5664950638732832;
    msg.y = 0.7093906904544305;
    msg.z = 0.9040075866592128;

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
    msg.setTimeStamp(0.7747511933244912);
    msg.setSource(48697U);
    msg.setSourceEntity(237U);
    msg.setDestination(24328U);
    msg.setDestinationEntity(233U);
    msg.time = 0.6143921672022954;
    msg.x = 0.9031136505457349;
    msg.y = 0.3635948490133625;
    msg.z = 0.5222312601277203;

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
    msg.setTimeStamp(0.34304274459437933);
    msg.setSource(52317U);
    msg.setSourceEntity(241U);
    msg.setDestination(33748U);
    msg.setDestinationEntity(65U);
    msg.time = 0.8699633481166573;
    msg.x = 0.5080736202282774;
    msg.y = 0.9331191969624648;
    msg.z = 0.09936463246861293;

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
    msg.setTimeStamp(0.9518795870139654);
    msg.setSource(59615U);
    msg.setSourceEntity(61U);
    msg.setDestination(65433U);
    msg.setDestinationEntity(55U);
    msg.time = 0.41578314826683127;
    msg.x = 0.16484896211467437;
    msg.y = 0.7778347709302961;
    msg.z = 0.9090426482938849;

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
    msg.setTimeStamp(0.8908634489962136);
    msg.setSource(297U);
    msg.setSourceEntity(201U);
    msg.setDestination(14035U);
    msg.setDestinationEntity(223U);
    msg.time = 0.2586495491826235;
    msg.x = 0.8930432437702217;
    msg.y = 0.6743572666644143;
    msg.z = 0.15496719678473425;

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
    msg.setTimeStamp(0.19419212193758273);
    msg.setSource(25917U);
    msg.setSourceEntity(251U);
    msg.setDestination(39355U);
    msg.setDestinationEntity(162U);
    msg.validity = 161U;
    msg.x = 0.4317785874452741;
    msg.y = 0.4885113292499961;
    msg.z = 0.5725338701830238;

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
    msg.setTimeStamp(0.6333334942404353);
    msg.setSource(915U);
    msg.setSourceEntity(151U);
    msg.setDestination(48606U);
    msg.setDestinationEntity(216U);
    msg.validity = 182U;
    msg.x = 0.5068430010285211;
    msg.y = 0.07642620108279718;
    msg.z = 0.930024956005513;

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
    msg.setTimeStamp(0.38420439541844076);
    msg.setSource(58213U);
    msg.setSourceEntity(2U);
    msg.setDestination(10190U);
    msg.setDestinationEntity(204U);
    msg.validity = 218U;
    msg.x = 0.11811332049299861;
    msg.y = 0.432893395289524;
    msg.z = 0.4812941011360137;

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
    msg.setTimeStamp(0.9168764541553802);
    msg.setSource(64584U);
    msg.setSourceEntity(48U);
    msg.setDestination(20792U);
    msg.setDestinationEntity(216U);
    msg.validity = 16U;
    msg.x = 0.06131188491975892;
    msg.y = 0.8713366638159565;
    msg.z = 0.38207420861972274;

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
    msg.setTimeStamp(0.476073666148486);
    msg.setSource(64449U);
    msg.setSourceEntity(190U);
    msg.setDestination(4661U);
    msg.setDestinationEntity(154U);
    msg.validity = 88U;
    msg.x = 0.43439216273055814;
    msg.y = 0.6393729940039646;
    msg.z = 0.9293153855973838;

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
    msg.setTimeStamp(0.7211277994945128);
    msg.setSource(11598U);
    msg.setSourceEntity(73U);
    msg.setDestination(12509U);
    msg.setDestinationEntity(124U);
    msg.validity = 61U;
    msg.x = 0.9940960283339763;
    msg.y = 0.8716495233162493;
    msg.z = 0.7578311740009761;

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
    msg.setTimeStamp(0.6288470851515912);
    msg.setSource(3247U);
    msg.setSourceEntity(92U);
    msg.setDestination(36789U);
    msg.setDestinationEntity(1U);
    msg.time = 0.392661425457259;
    msg.x = 0.8323154107554688;
    msg.y = 0.5254784067989858;
    msg.z = 0.6060616063787616;

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
    msg.setTimeStamp(0.33255909004933704);
    msg.setSource(37609U);
    msg.setSourceEntity(252U);
    msg.setDestination(1343U);
    msg.setDestinationEntity(71U);
    msg.time = 0.47613324261817525;
    msg.x = 0.8049383548601645;
    msg.y = 0.7695769620258595;
    msg.z = 0.5982915070113839;

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
    msg.setTimeStamp(0.03762376105603149);
    msg.setSource(58883U);
    msg.setSourceEntity(180U);
    msg.setDestination(39631U);
    msg.setDestinationEntity(45U);
    msg.time = 0.6828551480309389;
    msg.x = 0.5620278626489372;
    msg.y = 0.15846484060746924;
    msg.z = 0.43561920489980566;

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
    msg.setTimeStamp(0.27326031460133526);
    msg.setSource(3526U);
    msg.setSourceEntity(75U);
    msg.setDestination(24244U);
    msg.setDestinationEntity(41U);
    msg.validity = 227U;
    msg.value = 0.582190222567087;

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
    msg.setTimeStamp(0.3761751376944431);
    msg.setSource(7014U);
    msg.setSourceEntity(58U);
    msg.setDestination(28433U);
    msg.setDestinationEntity(77U);
    msg.validity = 217U;
    msg.value = 0.7702749788684808;

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
    msg.setTimeStamp(0.4212310985720876);
    msg.setSource(41621U);
    msg.setSourceEntity(189U);
    msg.setDestination(24646U);
    msg.setDestinationEntity(159U);
    msg.validity = 40U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.16915633734550195;
    tmp_msg_0.y = 0.09015623172371356;
    tmp_msg_0.z = 0.7689282968908365;
    tmp_msg_0.phi = 0.3508492628222246;
    tmp_msg_0.theta = 0.6665121245895163;
    tmp_msg_0.psi = 0.7642286138933464;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.35967309956682125;

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
    msg.setTimeStamp(0.22334063690391925);
    msg.setSource(38269U);
    msg.setSourceEntity(47U);
    msg.setDestination(31674U);
    msg.setDestinationEntity(96U);
    msg.value = 0.6403237487609831;

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
    msg.setTimeStamp(0.25868820739444087);
    msg.setSource(5343U);
    msg.setSourceEntity(109U);
    msg.setDestination(12872U);
    msg.setDestinationEntity(0U);
    msg.value = 0.5749961201666363;

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
    msg.setTimeStamp(0.9320219767707222);
    msg.setSource(34394U);
    msg.setSourceEntity(175U);
    msg.setDestination(11211U);
    msg.setDestinationEntity(54U);
    msg.value = 0.0903343208684182;

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
    msg.setTimeStamp(0.7031511030715195);
    msg.setSource(10775U);
    msg.setSourceEntity(158U);
    msg.setDestination(52073U);
    msg.setDestinationEntity(121U);
    msg.value = 0.6535127918020497;

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
    msg.setTimeStamp(0.9113215179205698);
    msg.setSource(24065U);
    msg.setSourceEntity(200U);
    msg.setDestination(843U);
    msg.setDestinationEntity(158U);
    msg.value = 0.056293398500291913;

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
    msg.setTimeStamp(0.18686535714108343);
    msg.setSource(47408U);
    msg.setSourceEntity(28U);
    msg.setDestination(4750U);
    msg.setDestinationEntity(235U);
    msg.value = 0.8593134261205875;

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
    msg.setTimeStamp(0.4425604142371715);
    msg.setSource(22970U);
    msg.setSourceEntity(142U);
    msg.setDestination(50903U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6982760575539422;

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
    msg.setTimeStamp(0.8606111397857792);
    msg.setSource(17307U);
    msg.setSourceEntity(192U);
    msg.setDestination(17996U);
    msg.setDestinationEntity(105U);
    msg.value = 0.3345428994229299;

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
    msg.setTimeStamp(0.39894741553091295);
    msg.setSource(21650U);
    msg.setSourceEntity(167U);
    msg.setDestination(61173U);
    msg.setDestinationEntity(55U);
    msg.value = 0.06298052442733804;

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
    msg.setTimeStamp(0.9357055833642062);
    msg.setSource(29075U);
    msg.setSourceEntity(120U);
    msg.setDestination(52171U);
    msg.setDestinationEntity(114U);
    msg.value = 0.9523403364094959;

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
    msg.setTimeStamp(0.4165471498315526);
    msg.setSource(30397U);
    msg.setSourceEntity(58U);
    msg.setDestination(35397U);
    msg.setDestinationEntity(143U);
    msg.value = 0.9326584683102344;

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
    msg.setTimeStamp(0.043081800674895976);
    msg.setSource(18843U);
    msg.setSourceEntity(33U);
    msg.setDestination(22934U);
    msg.setDestinationEntity(49U);
    msg.value = 0.21726041154930265;

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
    msg.setTimeStamp(0.7463668541781149);
    msg.setSource(57639U);
    msg.setSourceEntity(243U);
    msg.setDestination(61065U);
    msg.setDestinationEntity(4U);
    msg.value = 0.1843665281753616;

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
    msg.setTimeStamp(0.7666425858228553);
    msg.setSource(33040U);
    msg.setSourceEntity(174U);
    msg.setDestination(26972U);
    msg.setDestinationEntity(93U);
    msg.value = 0.4752371787892419;

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
    msg.setTimeStamp(0.19824343752734075);
    msg.setSource(49684U);
    msg.setSourceEntity(174U);
    msg.setDestination(38527U);
    msg.setDestinationEntity(187U);
    msg.value = 0.30918159700279946;

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
    msg.setTimeStamp(0.9690452419309123);
    msg.setSource(4382U);
    msg.setSourceEntity(206U);
    msg.setDestination(9838U);
    msg.setDestinationEntity(39U);
    msg.value = 0.8740319426226304;

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
    msg.setTimeStamp(0.46193932701335116);
    msg.setSource(53892U);
    msg.setSourceEntity(79U);
    msg.setDestination(55152U);
    msg.setDestinationEntity(212U);
    msg.value = 0.25679433039547606;

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
    msg.setTimeStamp(0.17634288833210432);
    msg.setSource(11639U);
    msg.setSourceEntity(65U);
    msg.setDestination(1433U);
    msg.setDestinationEntity(138U);
    msg.value = 0.7008883373659123;

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
    msg.setTimeStamp(0.4893663366597488);
    msg.setSource(49237U);
    msg.setSourceEntity(67U);
    msg.setDestination(55104U);
    msg.setDestinationEntity(65U);
    msg.value = 0.05178690211416792;

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
    msg.setTimeStamp(0.61617357985656);
    msg.setSource(24113U);
    msg.setSourceEntity(81U);
    msg.setDestination(37938U);
    msg.setDestinationEntity(108U);
    msg.value = 0.04393095619814247;

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
    msg.setTimeStamp(0.3420623599495095);
    msg.setSource(64655U);
    msg.setSourceEntity(195U);
    msg.setDestination(59709U);
    msg.setDestinationEntity(118U);
    msg.value = 0.5838441201813461;

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
    msg.setTimeStamp(0.11484628835493038);
    msg.setSource(33277U);
    msg.setSourceEntity(17U);
    msg.setDestination(22211U);
    msg.setDestinationEntity(78U);
    msg.value = 0.4531485085122522;

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
    msg.setTimeStamp(0.4651260843098579);
    msg.setSource(27900U);
    msg.setSourceEntity(209U);
    msg.setDestination(1568U);
    msg.setDestinationEntity(132U);
    msg.value = 0.0628835116031563;

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
    msg.setTimeStamp(0.2422087022301158);
    msg.setSource(40039U);
    msg.setSourceEntity(215U);
    msg.setDestination(57725U);
    msg.setDestinationEntity(188U);
    msg.value = 0.7123722402775218;

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
    msg.setTimeStamp(0.56655382032348);
    msg.setSource(25594U);
    msg.setSourceEntity(121U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(196U);
    msg.direction = 0.6329338883969368;
    msg.speed = 0.3125178087395375;
    msg.turbulence = 0.7723288104655297;

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
    msg.setTimeStamp(0.6780001260372827);
    msg.setSource(3796U);
    msg.setSourceEntity(181U);
    msg.setDestination(33950U);
    msg.setDestinationEntity(51U);
    msg.direction = 0.5770968843861125;
    msg.speed = 0.6450667464518685;
    msg.turbulence = 0.03903972510899356;

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
    msg.setTimeStamp(0.14437130812233334);
    msg.setSource(32958U);
    msg.setSourceEntity(188U);
    msg.setDestination(40637U);
    msg.setDestinationEntity(26U);
    msg.direction = 0.35809934423235845;
    msg.speed = 0.42965585809462703;
    msg.turbulence = 0.25017409483867037;

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
    msg.setTimeStamp(0.10839509901950506);
    msg.setSource(22946U);
    msg.setSourceEntity(143U);
    msg.setDestination(8300U);
    msg.setDestinationEntity(214U);
    msg.value = 0.9184276533883801;

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
    msg.setTimeStamp(0.39535206925129207);
    msg.setSource(53066U);
    msg.setSourceEntity(199U);
    msg.setDestination(27936U);
    msg.setDestinationEntity(19U);
    msg.value = 0.346654835787896;

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
    msg.setTimeStamp(0.5119214857822338);
    msg.setSource(52492U);
    msg.setSourceEntity(154U);
    msg.setDestination(31981U);
    msg.setDestinationEntity(155U);
    msg.value = 0.8785506316109243;

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
    msg.setTimeStamp(0.40810939470660945);
    msg.setSource(48260U);
    msg.setSourceEntity(223U);
    msg.setDestination(183U);
    msg.setDestinationEntity(188U);
    msg.value.assign("PULMWQNAPLLOMIAJLMKRMAKCDBIGDEQYYRMMWSPYONJKZBIXAOAHDEDDGEGFPXMXKZORSAGWXZFEWVHUOCXOJLVPFJGZPWSBXTEGLVBFLHBMIGWCHQVGBNIUHHWVTQFRJ");

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
    msg.setTimeStamp(0.24676005830743142);
    msg.setSource(11369U);
    msg.setSourceEntity(207U);
    msg.setDestination(5261U);
    msg.setDestinationEntity(218U);
    msg.value.assign("LYGBOWJDDFRDNYZGRLXKODVUCDKONGTHRMKEZWMNYXFHOEPGKTQKTYVRIPQBNEZXVOWEQWHEOELVCDSLOFQWXDABGABITQHKFFMAPHTMZYMVIQFTMBZQHJIAJIMGAHWVFPSEQITUFYSBAGCMOEBXUVCNCYZJJSDWKKJGFPSPLSTVDIJLVLOWECSSXZZLBAZGPVQHURUUEIXAFBNUTWPLXPZRIKLAURNSYXKTJWDCQSBNNR");

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
    msg.setTimeStamp(0.11480476152995278);
    msg.setSource(50810U);
    msg.setSourceEntity(105U);
    msg.setDestination(57071U);
    msg.setDestinationEntity(97U);
    msg.value.assign("ITHOPEPXPLMYXACUODWZVAMVIENFWMQUMWFGSVQZAOYSRAKCQNEBRBLTYRMLFMAIGGUNTONBGROQZTWOEYASZTZMSTCFPCWZLVSNIQWLYDOHKKNFRBQBJLDCKRWIRIHYHCRUYTVJMNEXSXQGFWDVESNTQUVKFFHXXHXGAHHDZOKNJPVUJLPPGAJUDIKCYHQDNLKYLEPJCOQLSASCIWGMSXVUDJUETFXGAEBPRGBKUZJCPRJXIJEKOWZD");

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
    msg.setTimeStamp(0.4198643516408369);
    msg.setSource(21079U);
    msg.setSourceEntity(12U);
    msg.setDestination(7661U);
    msg.setDestinationEntity(149U);
    const signed char tmp_msg_0[] = {-63, 81, 98, -26, 85, -69, -38, 36, 122, -78, -15, 57, 84, 112, -33, 94, 7, 89, 64, 99, -81, -105, 6, -118, 84, 56, -59, 119, 98, 104, -96, -41, 119, 29, 50, 31, -26, 37, -81, -115, -47, -122, 89, 83, 32, 25, -119, 13, 29, -121, 72, 86, 125, -87, 27, 17, -24, -116, -85, 97, 73, 79, -114, 93, -56, 59, -71, 113, 97, -86, 58, -30, 120, -37, -101, 87, 99, -39, 113, -117, -119, 39, 104, -126, 123, -21, -42, -102, 4, -119, 104, 0, -18, -36, -88, -21, 94, -125, -35, -33, -116, -56, 18, 17, 53, -49, 86, -57, -97, 87, 20, 102, 83, -62, 23, 42, -110, -84, -24, 17, 115, -77, 8, -19, -9, 0, 97, 56, -49, -92, -118, -90, -29, -68, 115, 99, 75, 6, 110, 14, -40, -92, -73, -3, -15, 51, 38, 112, 89, 28, 47, 96, 45, 65, 58, 4, -96, -121, -101, 36, 59, -77, 55, 66, 41, 47, 107, 91, -12, -26, 25, 70, -84, 0, -11, 100, -118, 24, 17, -23, -13, 55, -76, 72, 78, -100, 112, 13, -90, 126, 29, -25, -115, -1, 109, -53, -53, 22, -30, -27, -86, -80, 42};
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
    msg.setTimeStamp(0.10733541222630472);
    msg.setSource(18890U);
    msg.setSourceEntity(205U);
    msg.setDestination(64084U);
    msg.setDestinationEntity(27U);
    const signed char tmp_msg_0[] = {-26, 34, 114, -35, 0, -20, 78, 53, -115, -5, -7, -11, -109, 116, 97, 37, 118, -127, 17, -126, 66, -47, -92, -122, -33, -25, 34, 103, -63, -74, 75, -31, -100, 97, -31, 85, 114, 120, 36, -68, -34, 3, 94, -84, -81, -14, -51, 28, 90, 34, 62, 64, 55, 38, -125, 31, 17, -31, 116, 2, -115, 11, -18, -67, 79, -36, -6, 71, 101, 70, -55, -92, -18, 125, 101, 43, -50, -37, 4, -72, 121, -115, -120, -3, 79, 112};
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
    msg.setTimeStamp(0.5156710653543402);
    msg.setSource(63354U);
    msg.setSourceEntity(186U);
    msg.setDestination(34100U);
    msg.setDestinationEntity(131U);
    const signed char tmp_msg_0[] = {111, -30, -101, 7, 4, 121, 52, -108, 80, 14, 83, -91, 1, -15, 71, 13, -120, 9, 55, -103, 15, -34, 73, 77, 102, 79, -49, 34, -56, 94, -82, -126, -82, -46, -5, 96, -14, -105, -128, 85, -1, -16, 92, 93, -121, 32, 83, -86, -97, -23, 89, 35, 88, -19, -108, 43, 63, -6, 104, -72, 121, -82, -27, -128, 97, -27, 59, 126, -128, 5, 0, 56, -4, 57, -58, 31, -127, -1, -59, 92, -115, -19, 111, -69, -110, -99, 10, -75, -25, -13, -77, 77, 38, -16, 23, 107, 12, 65, -21, -112, 45, -67, 60, 24, 6, -127, -92, 51, 107, -34, 69, 72, -74, 122, 15, -112, -63, -77, 20, -127, 116, 6, -48, -20, -102, -88, -99, -32, -94, 116, 43, 36, 24, 26, -25, 68, 48, 19, 59, -23, 44, 49, 68, 35, -17, -32, -44, 86, 90, 47, 41, 78, -59, -21, 18, 103, 38, 15, -84, 51, -112, -47, -16, -115, -52, 94, -16, -99, -115, -49, 32, 120, 27, 117, 109, 51, 109, -108, -39, -68, 54, -126, 2, 62, 25, -76, 48, -81, -89, 114, -115, 1, -96, -49, -20, 63, 46, 110, 50, -85, 126, 106, -36, -63, 71, 1, 119, 9, -98};
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
    msg.setTimeStamp(0.9960308028432099);
    msg.setSource(63033U);
    msg.setSourceEntity(9U);
    msg.setDestination(56506U);
    msg.setDestinationEntity(239U);
    msg.value = 0.21957703653875527;

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
    msg.setTimeStamp(0.5292088295021813);
    msg.setSource(59857U);
    msg.setSourceEntity(108U);
    msg.setDestination(34524U);
    msg.setDestinationEntity(5U);
    msg.value = 0.22818892437959737;

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
    msg.setTimeStamp(0.29508543578897495);
    msg.setSource(28578U);
    msg.setSourceEntity(51U);
    msg.setDestination(28451U);
    msg.setDestinationEntity(118U);
    msg.value = 0.1215303328809354;

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
    msg.setTimeStamp(0.6584090013046241);
    msg.setSource(65320U);
    msg.setSourceEntity(189U);
    msg.setDestination(25476U);
    msg.setDestinationEntity(195U);
    msg.type = 73U;
    msg.frequency = 3075527069U;
    msg.min_range = 27672U;
    msg.max_range = 830U;
    msg.bits_per_point = 43U;
    msg.scale_factor = 0.1793985174788727;
    const signed char tmp_msg_0[] = {100, 65, -3, 68, 120, 74, -14, -104, -52, -35, 93, -9, -32, 123, -125, -48, 27, 12, 29, -12, -97, -22, 22, 53, -124, 23, -117, 46, -77, -57, 24, 65, 49, 126, -78, 46, 52, 116, -15, -101, -110, -85, 96, 110, -40, -25, -32, 9, 105, 107, 55, 63, -15, 28, 32, 62, 4, -54, 120, 8, -112, 116, -41, 60, 56, -92, -101, -115, 15, 123, -24, -50, -20, 80, 121, -66, -126, -106, -120, -22, -71, 69, 80, -56, -72, -61, 39, 41, 31, -19, -112, 70, -36, 14, -65, -53, -3, -98, 121, -45, 120, 20, -97, 55, -59, -34, 34, -18, 34, 108, 60, -12, 10, 93, -5, -42};
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
    msg.setTimeStamp(0.40631626748458616);
    msg.setSource(44980U);
    msg.setSourceEntity(146U);
    msg.setDestination(50321U);
    msg.setDestinationEntity(73U);
    msg.type = 95U;
    msg.frequency = 1439448403U;
    msg.min_range = 59892U;
    msg.max_range = 11881U;
    msg.bits_per_point = 96U;
    msg.scale_factor = 0.06906986285964678;
    const signed char tmp_msg_0[] = {-9, -77, 25, -106, -77, -98, -37, 23, 0, -76, -2, 110, -6, 104, -27, -11, 2, 36, -101, -74, -17, 10, 8, -118, -119, -76, -24, 95, -80, 18, 96, 89, 110, -49, -42, 13, 59, 38, -87, -92, 66, 98, 46, 19, -21, 88, -51, 16, 96, 28, -97, -124, -83, -20, -21, 98, -3, 61, 20, 113, 48, 119, -13, 108, 122, 76, 93, 13, 35, 32, -41, 77, -127, 115, -27, 47, -3, -109, 3, 100, 91, 110, 116, 58, -1, -116, 21, -48, -118, -53, -3, 117, -95, 2, -14, -94, 4, -78, -85, 24, 35, 90, 69, 44, 36, -33, 61, 99, -110, 31, 8, -116, -104, 58, -52, -70, -44, -6, 58, -122, 26, -58, -12, -81, 20, 80, 66, -10, 5, 10, 75, 44, -102, 74, -12, 112, -86, 64, -30, 97, 15, 51, -85, 2, -3, -104, -6, 98, -36, -94, 95, -34, 26, 86, 29, -118, -109, -110, -57, -98, -58, 79, 4, 125, -60, -52, 11, -6, -121, -36, -75, 46, 72, -103, -11, -33, 92, -9, 66, 123, 79, -40, 81, -29, -42, -70, -67, 15, -13, 63, 58, -110, 29, -77, -56, 15, 122, -54, 89, -79, -8, 108, -12, -109, -22, -106, -34, 83};
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
    msg.setTimeStamp(0.33654674803243667);
    msg.setSource(25776U);
    msg.setSourceEntity(223U);
    msg.setDestination(8581U);
    msg.setDestinationEntity(217U);
    msg.type = 88U;
    msg.frequency = 4223025099U;
    msg.min_range = 43075U;
    msg.max_range = 55476U;
    msg.bits_per_point = 171U;
    msg.scale_factor = 0.19887468597080327;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6047035000936282;
    tmp_msg_0.beam_height = 0.4530863583425868;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-123, -123, 60, 36, -87, 51, -27, 78, 63, 63, -108, 82, 86, 1, 51, 24, 126, 80, -87, -6, 99, -9, 108, -11, -42, 94, -103, 123, -86, -96, 12, 39, -100, -49, 25, 120, -115, 125, 66, -102, 17, 121, -3, 79, -74, 119, 68, 93, -120, 111, -50, 26, -2, -16, -123, -43, 61, -2, 120, -76, -71, -32, 47, -116, -45, -21, 92, 21, -100, 86, 23, 28, 124, -54, -3, -7, -42, 120, -113, 99, 24, -60, -33, -52, -97, -51, 12, -55, 15, 93, -25, -108, 1, 118, 112, 89, 46, -20, 92, 64, -122, 56, 90, -54, -17, 79, 24};
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
    msg.setTimeStamp(0.6644938616075818);
    msg.setSource(13120U);
    msg.setSourceEntity(41U);
    msg.setDestination(29938U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.15122207273825494);
    msg.setSource(23357U);
    msg.setSourceEntity(10U);
    msg.setDestination(19655U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.30939838755209104);
    msg.setSource(14383U);
    msg.setSourceEntity(79U);
    msg.setDestination(28777U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.18927947652065413);
    msg.setSource(51356U);
    msg.setSourceEntity(234U);
    msg.setDestination(44927U);
    msg.setDestinationEntity(119U);
    msg.op = 111U;

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
    msg.setTimeStamp(0.26841481517420884);
    msg.setSource(9293U);
    msg.setSourceEntity(177U);
    msg.setDestination(26054U);
    msg.setDestinationEntity(224U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.358464287137929);
    msg.setSource(56481U);
    msg.setSourceEntity(143U);
    msg.setDestination(18692U);
    msg.setDestinationEntity(43U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.9471317877997962);
    msg.setSource(32551U);
    msg.setSourceEntity(60U);
    msg.setDestination(61007U);
    msg.setDestinationEntity(68U);
    msg.value = 0.5762200216831683;
    msg.confidence = 0.2270312624279366;
    msg.opmodes.assign("EJUZGFCGMEBCXGYASPEYKIZDKLNRKTPJRLZVYTANGVKAOLBQZHAFPWALKFAQLLNIOXZZVKIMMRYUUPDNHOHFNXEOFNDTZWWTFFKRTUDVYIVNKWTVKNDSOHTRGQUJBESENKDJVOWCHHIGHHFVQRMVLJSGUZRBMIOYLMSCUJWDVQD");

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
    msg.setTimeStamp(0.6496373701697954);
    msg.setSource(54534U);
    msg.setSourceEntity(164U);
    msg.setDestination(60046U);
    msg.setDestinationEntity(156U);
    msg.value = 0.2918078933845625;
    msg.confidence = 0.38193941307287416;
    msg.opmodes.assign("VBIFKXENIJHVBDGKDLACFDLYHSKGCMOCMQJWPXSZIANVYPGDNAGECSXLSHS");

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
    msg.setTimeStamp(0.5525793442922173);
    msg.setSource(52359U);
    msg.setSourceEntity(126U);
    msg.setDestination(14356U);
    msg.setDestinationEntity(206U);
    msg.value = 0.4056084258543764;
    msg.confidence = 0.441979715398376;
    msg.opmodes.assign("BBEZLFNYASWMSNLTTZK");

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
    msg.setTimeStamp(0.6763794907582565);
    msg.setSource(39921U);
    msg.setSourceEntity(100U);
    msg.setDestination(21103U);
    msg.setDestinationEntity(96U);
    msg.itow = 959388651U;
    msg.lat = 0.17438904215321793;
    msg.lon = 0.2397962390444237;
    msg.height_ell = 0.552275179046841;
    msg.height_sea = 0.19736805459180784;
    msg.hacc = 0.09802609401755769;
    msg.vacc = 0.09233027062434629;
    msg.vel_n = 0.7269739110355565;
    msg.vel_e = 0.4526693900447317;
    msg.vel_d = 0.7832026455330524;
    msg.speed = 0.137169909707331;
    msg.gspeed = 0.8334438071750828;
    msg.heading = 0.20133336870171425;
    msg.sacc = 0.9799962241602709;
    msg.cacc = 0.3338313492886913;

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
    msg.setTimeStamp(0.3547310001757702);
    msg.setSource(19118U);
    msg.setSourceEntity(115U);
    msg.setDestination(39679U);
    msg.setDestinationEntity(72U);
    msg.itow = 290276575U;
    msg.lat = 0.28371971537101537;
    msg.lon = 0.9212037074677496;
    msg.height_ell = 0.5941963567210982;
    msg.height_sea = 0.6121846308883651;
    msg.hacc = 0.7873706324535189;
    msg.vacc = 0.8377239997579943;
    msg.vel_n = 0.6349213978505123;
    msg.vel_e = 0.734013019060897;
    msg.vel_d = 0.21210897310995092;
    msg.speed = 0.5020923207109446;
    msg.gspeed = 0.3468253396042579;
    msg.heading = 0.1978134032134906;
    msg.sacc = 0.7181100877576528;
    msg.cacc = 0.4671208589617989;

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
    msg.setTimeStamp(0.9570221720995995);
    msg.setSource(41381U);
    msg.setSourceEntity(11U);
    msg.setDestination(2915U);
    msg.setDestinationEntity(19U);
    msg.itow = 3444386094U;
    msg.lat = 0.3523607583605717;
    msg.lon = 0.9187983768283398;
    msg.height_ell = 0.7755986429513319;
    msg.height_sea = 0.8240915110510879;
    msg.hacc = 0.4492479733694311;
    msg.vacc = 0.005816893017933644;
    msg.vel_n = 0.17995512161390792;
    msg.vel_e = 0.3351659837354344;
    msg.vel_d = 0.2746476479511787;
    msg.speed = 0.9229203194345371;
    msg.gspeed = 0.0656447658743784;
    msg.heading = 0.1487080286416449;
    msg.sacc = 0.10701493067452961;
    msg.cacc = 0.050614073905154155;

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
    msg.setTimeStamp(0.14979638394458483);
    msg.setSource(35742U);
    msg.setSourceEntity(83U);
    msg.setDestination(12876U);
    msg.setDestinationEntity(179U);
    msg.id = 171U;
    msg.value = 0.9097767620043732;

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
    msg.setTimeStamp(0.5283199568382995);
    msg.setSource(64871U);
    msg.setSourceEntity(235U);
    msg.setDestination(59769U);
    msg.setDestinationEntity(166U);
    msg.id = 33U;
    msg.value = 0.6603563626271021;

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
    msg.setTimeStamp(0.008216659983230068);
    msg.setSource(38831U);
    msg.setSourceEntity(208U);
    msg.setDestination(43272U);
    msg.setDestinationEntity(179U);
    msg.id = 20U;
    msg.value = 0.4363442933959104;

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
    msg.setTimeStamp(0.2605280327241336);
    msg.setSource(16816U);
    msg.setSourceEntity(92U);
    msg.setDestination(27173U);
    msg.setDestinationEntity(129U);
    msg.x = 0.73011027741576;
    msg.y = 0.9008507493004144;
    msg.z = 0.5082591258066121;
    msg.phi = 0.3669874795411473;
    msg.theta = 0.5700022206910264;
    msg.psi = 0.21809681128901637;

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
    msg.setTimeStamp(0.30228167346001267);
    msg.setSource(36390U);
    msg.setSourceEntity(8U);
    msg.setDestination(60156U);
    msg.setDestinationEntity(179U);
    msg.x = 0.9918794130291033;
    msg.y = 0.7433132090427821;
    msg.z = 0.03628365456542881;
    msg.phi = 0.7174174016085547;
    msg.theta = 0.20166805304701274;
    msg.psi = 0.8287430218891179;

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
    msg.setTimeStamp(0.8836992596698194);
    msg.setSource(11058U);
    msg.setSourceEntity(110U);
    msg.setDestination(49014U);
    msg.setDestinationEntity(249U);
    msg.x = 0.9203060063665568;
    msg.y = 0.04836485518575451;
    msg.z = 0.7985769455878498;
    msg.phi = 0.1667071297433148;
    msg.theta = 0.19512687453391264;
    msg.psi = 0.021436396286470538;

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
    msg.setTimeStamp(0.7544999651765056);
    msg.setSource(49885U);
    msg.setSourceEntity(125U);
    msg.setDestination(63846U);
    msg.setDestinationEntity(39U);
    msg.beam_width = 0.43497527268518044;
    msg.beam_height = 0.8628253972858442;

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
    msg.setTimeStamp(0.5596730098109365);
    msg.setSource(41751U);
    msg.setSourceEntity(214U);
    msg.setDestination(4358U);
    msg.setDestinationEntity(202U);
    msg.beam_width = 0.18706282091670123;
    msg.beam_height = 0.39354499059283843;

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
    msg.setTimeStamp(0.5917579760508543);
    msg.setSource(30295U);
    msg.setSourceEntity(21U);
    msg.setDestination(6675U);
    msg.setDestinationEntity(211U);
    msg.beam_width = 0.4672968083734682;
    msg.beam_height = 0.5951270883051382;

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
    msg.setTimeStamp(0.36918481115325885);
    msg.setSource(60942U);
    msg.setSourceEntity(192U);
    msg.setDestination(14476U);
    msg.setDestinationEntity(196U);
    msg.sane = 235U;

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
    msg.setTimeStamp(0.9093061992379822);
    msg.setSource(50586U);
    msg.setSourceEntity(144U);
    msg.setDestination(4921U);
    msg.setDestinationEntity(241U);
    msg.sane = 2U;

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
    msg.setTimeStamp(0.25720692794821);
    msg.setSource(58796U);
    msg.setSourceEntity(27U);
    msg.setDestination(15649U);
    msg.setDestinationEntity(178U);
    msg.sane = 156U;

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
    msg.setTimeStamp(0.019518046488868235);
    msg.setSource(47789U);
    msg.setSourceEntity(21U);
    msg.setDestination(9664U);
    msg.setDestinationEntity(254U);
    msg.value = 0.003878508011471049;

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
    msg.setTimeStamp(0.2799304673508114);
    msg.setSource(44528U);
    msg.setSourceEntity(225U);
    msg.setDestination(4200U);
    msg.setDestinationEntity(44U);
    msg.value = 0.33865915068186836;

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
    msg.setTimeStamp(0.41513123671696384);
    msg.setSource(59863U);
    msg.setSourceEntity(211U);
    msg.setDestination(43508U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6958349756563061;

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
    msg.setTimeStamp(0.7125431204700999);
    msg.setSource(55698U);
    msg.setSourceEntity(163U);
    msg.setDestination(3107U);
    msg.setDestinationEntity(111U);
    msg.value = 0.45850766417168665;

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
    msg.setTimeStamp(0.132392522169822);
    msg.setSource(30961U);
    msg.setSourceEntity(35U);
    msg.setDestination(47388U);
    msg.setDestinationEntity(80U);
    msg.value = 0.23723050643649768;

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
    msg.setTimeStamp(0.10575983241155917);
    msg.setSource(50655U);
    msg.setSourceEntity(131U);
    msg.setDestination(3970U);
    msg.setDestinationEntity(233U);
    msg.value = 0.45612402362245585;

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
    msg.setTimeStamp(0.8576706658062412);
    msg.setSource(60818U);
    msg.setSourceEntity(161U);
    msg.setDestination(19369U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8003292639467476;

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
    msg.setTimeStamp(0.4235110540127279);
    msg.setSource(21087U);
    msg.setSourceEntity(84U);
    msg.setDestination(15648U);
    msg.setDestinationEntity(248U);
    msg.value = 0.17193503103640462;

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
    msg.setTimeStamp(0.9412532279928901);
    msg.setSource(4200U);
    msg.setSourceEntity(179U);
    msg.setDestination(55378U);
    msg.setDestinationEntity(202U);
    msg.value = 0.14317108880327567;

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
    msg.setTimeStamp(0.5365940951014235);
    msg.setSource(61685U);
    msg.setSourceEntity(208U);
    msg.setDestination(47544U);
    msg.setDestinationEntity(174U);
    msg.value = 0.8805287191296581;

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
    msg.setTimeStamp(0.17703200716207546);
    msg.setSource(39230U);
    msg.setSourceEntity(149U);
    msg.setDestination(39373U);
    msg.setDestinationEntity(226U);
    msg.value = 0.17712820318173517;

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
    msg.setTimeStamp(0.019974900953177666);
    msg.setSource(13707U);
    msg.setSourceEntity(178U);
    msg.setDestination(19981U);
    msg.setDestinationEntity(106U);
    msg.value = 0.42917262150109314;

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
    msg.setTimeStamp(0.6730598073288585);
    msg.setSource(32545U);
    msg.setSourceEntity(118U);
    msg.setDestination(54421U);
    msg.setDestinationEntity(210U);
    msg.value = 0.930975440588707;

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
    msg.setTimeStamp(0.07976271138754276);
    msg.setSource(22511U);
    msg.setSourceEntity(164U);
    msg.setDestination(40689U);
    msg.setDestinationEntity(63U);
    msg.value = 0.46211705330573705;

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
    msg.setTimeStamp(0.13164340103620642);
    msg.setSource(12000U);
    msg.setSourceEntity(49U);
    msg.setDestination(28046U);
    msg.setDestinationEntity(183U);
    msg.value = 0.7703418642809972;

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
    msg.setTimeStamp(0.09560808181032554);
    msg.setSource(45896U);
    msg.setSourceEntity(7U);
    msg.setDestination(19821U);
    msg.setDestinationEntity(234U);
    msg.value = 0.3979446487999153;

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
    msg.setTimeStamp(0.8356290998245764);
    msg.setSource(48194U);
    msg.setSourceEntity(252U);
    msg.setDestination(13502U);
    msg.setDestinationEntity(54U);
    msg.value = 0.615258352174523;

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
    msg.setTimeStamp(0.599489845001836);
    msg.setSource(2580U);
    msg.setSourceEntity(146U);
    msg.setDestination(31277U);
    msg.setDestinationEntity(190U);
    msg.value = 0.668382136327477;

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
    msg.setTimeStamp(0.25314532668602485);
    msg.setSource(4676U);
    msg.setSourceEntity(185U);
    msg.setDestination(1307U);
    msg.setDestinationEntity(71U);
    msg.value = 0.19064745432251273;

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
    msg.setTimeStamp(0.8997713870567708);
    msg.setSource(36054U);
    msg.setSourceEntity(38U);
    msg.setDestination(46534U);
    msg.setDestinationEntity(87U);
    msg.value = 0.34354986007408894;

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
    msg.setTimeStamp(0.7701538679696858);
    msg.setSource(106U);
    msg.setSourceEntity(199U);
    msg.setDestination(13875U);
    msg.setDestinationEntity(200U);
    msg.value = 0.7510995579685323;

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
    msg.setTimeStamp(0.5205531455247842);
    msg.setSource(42907U);
    msg.setSourceEntity(31U);
    msg.setDestination(52327U);
    msg.setDestinationEntity(189U);
    msg.value = 0.23230118797445254;

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
    msg.setTimeStamp(0.16947692887896526);
    msg.setSource(14437U);
    msg.setSourceEntity(174U);
    msg.setDestination(46501U);
    msg.setDestinationEntity(86U);
    msg.value = 0.09963656302957047;

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
    msg.setTimeStamp(0.24114209217235671);
    msg.setSource(7614U);
    msg.setSourceEntity(214U);
    msg.setDestination(4634U);
    msg.setDestinationEntity(1U);
    msg.value = 0.03441959137786288;

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
    msg.setTimeStamp(0.0012417649807598963);
    msg.setSource(23203U);
    msg.setSourceEntity(172U);
    msg.setDestination(8721U);
    msg.setDestinationEntity(33U);
    msg.validity = 38751U;
    msg.type = 107U;
    msg.tow = 3912819257U;
    msg.base_lat = 0.01471274154111124;
    msg.base_lon = 0.45208965275160906;
    msg.base_height = 0.4459548416820228;
    msg.n = 0.937846368809434;
    msg.e = 0.5296628785920803;
    msg.d = 0.8222258163987929;
    msg.v_n = 0.7201149153029318;
    msg.v_e = 0.8818776556621175;
    msg.v_d = 0.8465944477146604;
    msg.satellites = 168U;
    msg.iar_hyp = 37650U;
    msg.iar_ratio = 0.5974503764789326;

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
    msg.setTimeStamp(0.017815376054706178);
    msg.setSource(42920U);
    msg.setSourceEntity(247U);
    msg.setDestination(29582U);
    msg.setDestinationEntity(79U);
    msg.validity = 57783U;
    msg.type = 191U;
    msg.tow = 2454049514U;
    msg.base_lat = 0.21512108329438562;
    msg.base_lon = 0.9361560196923796;
    msg.base_height = 0.7168802490849676;
    msg.n = 0.393571854964038;
    msg.e = 0.8291343944234779;
    msg.d = 0.6789836077257848;
    msg.v_n = 0.19492520767655863;
    msg.v_e = 0.12627029709079052;
    msg.v_d = 0.3399444131007995;
    msg.satellites = 133U;
    msg.iar_hyp = 30099U;
    msg.iar_ratio = 0.3473404462664641;

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
    msg.setTimeStamp(0.8670668544299984);
    msg.setSource(41405U);
    msg.setSourceEntity(128U);
    msg.setDestination(41264U);
    msg.setDestinationEntity(98U);
    msg.validity = 59598U;
    msg.type = 172U;
    msg.tow = 735750430U;
    msg.base_lat = 0.023111561434397188;
    msg.base_lon = 0.591504744515862;
    msg.base_height = 0.5970243875901772;
    msg.n = 0.12214798531586801;
    msg.e = 0.9373500434151805;
    msg.d = 0.4434300010659512;
    msg.v_n = 0.5506072613856793;
    msg.v_e = 0.044471388462076655;
    msg.v_d = 0.22609928478681673;
    msg.satellites = 160U;
    msg.iar_hyp = 8944U;
    msg.iar_ratio = 0.03733990337893467;

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
    msg.setTimeStamp(0.5988859749133201);
    msg.setSource(28759U);
    msg.setSourceEntity(193U);
    msg.setDestination(36848U);
    msg.setDestinationEntity(60U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.23871444960913324;
    tmp_msg_0.lon = 0.5839979823475195;
    tmp_msg_0.height = 0.38351417642909646;
    tmp_msg_0.x = 0.058412387490327844;
    tmp_msg_0.y = 0.08375439673349439;
    tmp_msg_0.z = 0.7140461198457551;
    tmp_msg_0.phi = 0.8044439452232052;
    tmp_msg_0.theta = 0.5190390347227057;
    tmp_msg_0.psi = 0.760251825846746;
    tmp_msg_0.u = 0.2548075313026945;
    tmp_msg_0.v = 0.5483428815922329;
    tmp_msg_0.w = 0.6111991318485454;
    tmp_msg_0.vx = 0.646350374074957;
    tmp_msg_0.vy = 0.13812593494160819;
    tmp_msg_0.vz = 0.17872950294954737;
    tmp_msg_0.p = 0.7213426380317799;
    tmp_msg_0.q = 0.04008189332929013;
    tmp_msg_0.r = 0.05239789578231002;
    tmp_msg_0.depth = 0.9768716837955246;
    tmp_msg_0.alt = 0.2020177044135989;
    msg.state.set(tmp_msg_0);
    msg.type = 169U;

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
    msg.setTimeStamp(0.8388986759961443);
    msg.setSource(32723U);
    msg.setSourceEntity(216U);
    msg.setDestination(39000U);
    msg.setDestinationEntity(123U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4519626439621798;
    tmp_msg_0.lon = 0.2821627707985285;
    tmp_msg_0.height = 0.7027972807060805;
    tmp_msg_0.x = 0.9335351748623526;
    tmp_msg_0.y = 0.02179547684369676;
    tmp_msg_0.z = 0.03823998639753068;
    tmp_msg_0.phi = 0.4844823944470876;
    tmp_msg_0.theta = 0.5526400379488103;
    tmp_msg_0.psi = 0.5596521071244649;
    tmp_msg_0.u = 0.6647919455981414;
    tmp_msg_0.v = 0.21840655371915096;
    tmp_msg_0.w = 0.6291171043887135;
    tmp_msg_0.vx = 0.4987716448145252;
    tmp_msg_0.vy = 0.6016392947261415;
    tmp_msg_0.vz = 0.4275072176631842;
    tmp_msg_0.p = 0.7637049038739989;
    tmp_msg_0.q = 0.6140156240550718;
    tmp_msg_0.r = 0.5317710013633178;
    tmp_msg_0.depth = 0.3041174041159025;
    tmp_msg_0.alt = 0.11193922068276518;
    msg.state.set(tmp_msg_0);
    msg.type = 192U;

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
    msg.setTimeStamp(0.9124738322374718);
    msg.setSource(29060U);
    msg.setSourceEntity(138U);
    msg.setDestination(36266U);
    msg.setDestinationEntity(195U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5940132198350839;
    tmp_msg_0.lon = 0.34881074503392595;
    tmp_msg_0.height = 0.601469936867113;
    tmp_msg_0.x = 0.6525607895710469;
    tmp_msg_0.y = 0.14497165932524814;
    tmp_msg_0.z = 0.16578420183385445;
    tmp_msg_0.phi = 0.5188189101831934;
    tmp_msg_0.theta = 0.6199820687660489;
    tmp_msg_0.psi = 0.4748686101866376;
    tmp_msg_0.u = 0.42196191287720064;
    tmp_msg_0.v = 0.7274855370238867;
    tmp_msg_0.w = 0.6489291068652425;
    tmp_msg_0.vx = 0.05936500620782026;
    tmp_msg_0.vy = 0.8381451130263566;
    tmp_msg_0.vz = 0.15657438785205047;
    tmp_msg_0.p = 0.12195889330806853;
    tmp_msg_0.q = 0.984912377051406;
    tmp_msg_0.r = 0.818865643293493;
    tmp_msg_0.depth = 0.15947272220356268;
    tmp_msg_0.alt = 0.18199026151956987;
    msg.state.set(tmp_msg_0);
    msg.type = 203U;

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
    msg.setTimeStamp(0.45079380858424645);
    msg.setSource(6410U);
    msg.setSourceEntity(99U);
    msg.setDestination(22009U);
    msg.setDestinationEntity(62U);
    msg.value = 0.9637872362290802;

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
    msg.setTimeStamp(0.4474021817047984);
    msg.setSource(11287U);
    msg.setSourceEntity(206U);
    msg.setDestination(16891U);
    msg.setDestinationEntity(204U);
    msg.value = 0.04663971112809928;

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
    msg.setTimeStamp(0.5745991295948393);
    msg.setSource(5055U);
    msg.setSourceEntity(147U);
    msg.setDestination(25845U);
    msg.setDestinationEntity(28U);
    msg.value = 0.440646114178015;

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
    msg.setTimeStamp(0.9253542873624329);
    msg.setSource(27918U);
    msg.setSourceEntity(144U);
    msg.setDestination(13153U);
    msg.setDestinationEntity(104U);
    msg.value = 0.9541665242700514;

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
    msg.setTimeStamp(0.6963751395901246);
    msg.setSource(19399U);
    msg.setSourceEntity(77U);
    msg.setDestination(31276U);
    msg.setDestinationEntity(203U);
    msg.value = 0.6733595064326292;

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
    msg.setTimeStamp(0.009741405132687286);
    msg.setSource(8826U);
    msg.setSourceEntity(202U);
    msg.setDestination(52863U);
    msg.setDestinationEntity(75U);
    msg.value = 0.6115631932138672;

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
    msg.setTimeStamp(0.4901368517267123);
    msg.setSource(57172U);
    msg.setSourceEntity(181U);
    msg.setDestination(4280U);
    msg.setDestinationEntity(27U);
    msg.value = 0.10164448736582254;

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
    msg.setTimeStamp(0.6108213156660669);
    msg.setSource(62632U);
    msg.setSourceEntity(133U);
    msg.setDestination(52328U);
    msg.setDestinationEntity(27U);
    msg.value = 0.4809816439664417;

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
    msg.setTimeStamp(0.15021119997986798);
    msg.setSource(5253U);
    msg.setSourceEntity(223U);
    msg.setDestination(25695U);
    msg.setDestinationEntity(166U);
    msg.value = 0.4832820740550817;

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
    msg.setTimeStamp(0.7329081863315047);
    msg.setSource(26364U);
    msg.setSourceEntity(53U);
    msg.setDestination(175U);
    msg.setDestinationEntity(132U);
    msg.value = 0.08261491777698537;

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
    msg.setTimeStamp(0.9245390628837397);
    msg.setSource(7931U);
    msg.setSourceEntity(120U);
    msg.setDestination(8898U);
    msg.setDestinationEntity(125U);
    msg.value = 0.7277134301045824;

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
    msg.setTimeStamp(0.7001437375336456);
    msg.setSource(43710U);
    msg.setSourceEntity(34U);
    msg.setDestination(52350U);
    msg.setDestinationEntity(30U);
    msg.value = 0.7731931348364577;

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
    msg.setTimeStamp(0.727588286379496);
    msg.setSource(49173U);
    msg.setSourceEntity(192U);
    msg.setDestination(59489U);
    msg.setDestinationEntity(192U);
    msg.value = 0.5823237630089171;

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
    msg.setTimeStamp(0.31463189757644194);
    msg.setSource(6361U);
    msg.setSourceEntity(85U);
    msg.setDestination(58678U);
    msg.setDestinationEntity(186U);
    msg.value = 0.8999536467422862;

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
    msg.setTimeStamp(0.951270299983309);
    msg.setSource(2618U);
    msg.setSourceEntity(150U);
    msg.setDestination(25079U);
    msg.setDestinationEntity(238U);
    msg.value = 0.03859431637715727;

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
    msg.setTimeStamp(0.34405213920665045);
    msg.setSource(14167U);
    msg.setSourceEntity(216U);
    msg.setDestination(40903U);
    msg.setDestinationEntity(187U);
    msg.id = 6U;
    msg.zoom = 135U;
    msg.action = 20U;

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
    msg.setTimeStamp(0.9942885366128565);
    msg.setSource(14254U);
    msg.setSourceEntity(250U);
    msg.setDestination(40675U);
    msg.setDestinationEntity(103U);
    msg.id = 127U;
    msg.zoom = 240U;
    msg.action = 221U;

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
    msg.setTimeStamp(0.756497948894173);
    msg.setSource(42442U);
    msg.setSourceEntity(237U);
    msg.setDestination(44209U);
    msg.setDestinationEntity(134U);
    msg.id = 166U;
    msg.zoom = 21U;
    msg.action = 249U;

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
    msg.setTimeStamp(0.26911055627569713);
    msg.setSource(45882U);
    msg.setSourceEntity(76U);
    msg.setDestination(20998U);
    msg.setDestinationEntity(53U);
    msg.id = 206U;
    msg.value = 0.353338054063997;

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
    msg.setTimeStamp(0.9782799975061707);
    msg.setSource(15020U);
    msg.setSourceEntity(138U);
    msg.setDestination(31799U);
    msg.setDestinationEntity(53U);
    msg.id = 160U;
    msg.value = 0.4608835495435246;

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
    msg.setTimeStamp(0.4039093699629104);
    msg.setSource(13395U);
    msg.setSourceEntity(220U);
    msg.setDestination(34102U);
    msg.setDestinationEntity(17U);
    msg.id = 154U;
    msg.value = 0.7805439899452162;

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
    msg.setTimeStamp(0.39584423901501997);
    msg.setSource(27149U);
    msg.setSourceEntity(150U);
    msg.setDestination(14156U);
    msg.setDestinationEntity(46U);
    msg.id = 200U;
    msg.value = 0.26216768315404837;

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
    msg.setTimeStamp(0.6120766581025466);
    msg.setSource(2143U);
    msg.setSourceEntity(227U);
    msg.setDestination(48081U);
    msg.setDestinationEntity(239U);
    msg.id = 75U;
    msg.value = 0.7359339681405639;

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
    msg.setTimeStamp(0.3093403058994807);
    msg.setSource(62102U);
    msg.setSourceEntity(191U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(119U);
    msg.id = 20U;
    msg.value = 0.7199081599313109;

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
    msg.setTimeStamp(0.21843507011187302);
    msg.setSource(29574U);
    msg.setSourceEntity(93U);
    msg.setDestination(50147U);
    msg.setDestinationEntity(67U);
    msg.id = 88U;
    msg.angle = 0.24578610751731744;

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
    msg.setTimeStamp(0.9281366685397727);
    msg.setSource(20896U);
    msg.setSourceEntity(173U);
    msg.setDestination(24541U);
    msg.setDestinationEntity(162U);
    msg.id = 44U;
    msg.angle = 0.8579985112052836;

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
    msg.setTimeStamp(0.79623915638055);
    msg.setSource(64857U);
    msg.setSourceEntity(50U);
    msg.setDestination(15558U);
    msg.setDestinationEntity(146U);
    msg.id = 62U;
    msg.angle = 0.49587632293780537;

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
    msg.setTimeStamp(0.4277909100178222);
    msg.setSource(53262U);
    msg.setSourceEntity(221U);
    msg.setDestination(22345U);
    msg.setDestinationEntity(53U);
    msg.op = 209U;
    msg.actions.assign("GKJSOVUXLQJRUSTJYEIMWNCLTJJUEUINIYAWHVNKQRSO");

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
    msg.setTimeStamp(0.8528488043959949);
    msg.setSource(50604U);
    msg.setSourceEntity(41U);
    msg.setDestination(2680U);
    msg.setDestinationEntity(21U);
    msg.op = 88U;
    msg.actions.assign("ECISFYIYLPFBBBGKHCTHXTU");

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
    msg.setTimeStamp(0.7222275281080947);
    msg.setSource(19807U);
    msg.setSourceEntity(5U);
    msg.setDestination(51798U);
    msg.setDestinationEntity(14U);
    msg.op = 47U;
    msg.actions.assign("JQMRCLROLPKFDFYMEIZAPBMAJROZJCLSAVEORWDODVBAHIEHVFNDKDLGYMYWZAPBVNTTKTENIXUJLQYUGGNQRAYKBQPGCECTQORSRPABWOVSZHUGJKLHQPZINNHXIFKWPURSCHYFSLIMZEHGVQKJGESVLESSABEIJXUCCJWNWKDXAURDXMKFRGTTIUXMOZJXB");

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
    msg.setTimeStamp(0.7425410253134869);
    msg.setSource(12702U);
    msg.setSourceEntity(139U);
    msg.setDestination(5932U);
    msg.setDestinationEntity(160U);
    msg.actions.assign("IMCHPGSRGDLTKEOYXINANQNRPUOQRDVSCAREAAYKBRQKUGHPXYQCGGBFLNVNVSUIWGKIAHJFAEVZWVTFTHECOULFZJFQVQHMGZDTEYURXLSRNZMSYWJJSBCDFJEFBHYHUTPLKXAXWJCLXYVKNGTIDDKMLRVVWTYBUMRA");

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
    msg.setTimeStamp(0.6229818405669247);
    msg.setSource(50037U);
    msg.setSourceEntity(144U);
    msg.setDestination(22087U);
    msg.setDestinationEntity(50U);
    msg.actions.assign("FPNOPLICIMDKEARWNFV");

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
    msg.setTimeStamp(0.24822643433565172);
    msg.setSource(12967U);
    msg.setSourceEntity(180U);
    msg.setDestination(33491U);
    msg.setDestinationEntity(241U);
    msg.actions.assign("EXCSGZZLEKUVLDXBRNEJMYYJZBCJUDDCYEOWMIXKSBKQAACDBLMAMWOYWHPILXDUOBBNZEHKKJNPVSZBPPCYPMVWPJRACFHEXOQDCKNTATOJORIUVTLIQHLFNRT");

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
    msg.setTimeStamp(0.3137385485074);
    msg.setSource(15951U);
    msg.setSourceEntity(5U);
    msg.setDestination(14575U);
    msg.setDestinationEntity(149U);
    msg.button = 132U;
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
    msg.setTimeStamp(0.3137081609915998);
    msg.setSource(11566U);
    msg.setSourceEntity(149U);
    msg.setDestination(63203U);
    msg.setDestinationEntity(110U);
    msg.button = 82U;
    msg.value = 67U;

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
    msg.setTimeStamp(0.850813003504342);
    msg.setSource(2793U);
    msg.setSourceEntity(72U);
    msg.setDestination(49193U);
    msg.setDestinationEntity(246U);
    msg.button = 162U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.9304890429522266);
    msg.setSource(38732U);
    msg.setSourceEntity(92U);
    msg.setDestination(41152U);
    msg.setDestinationEntity(203U);
    msg.op = 30U;
    msg.text.assign("DSVBCKFHGOMGPOMJISWCFMHTUYLLZRHBFQERTFSZURQGFBYZIPPLQYGVLKEWPJUJ");

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
    msg.setTimeStamp(0.8051715849894164);
    msg.setSource(11603U);
    msg.setSourceEntity(113U);
    msg.setDestination(23093U);
    msg.setDestinationEntity(89U);
    msg.op = 129U;
    msg.text.assign("YFNZDJIAJNESMBYKMSPISLEXQLOIPVRWDARCJAXJASWEYWXIUBPYNTKWBYDGMTGLAZXPTCGEFINQAQUZVLNOYRVDPEPYVZAMUKHIYFJMQJCXWWRFALXQDIQTUZVOGOOCJBALDEMRTPKMHXTNVELTPOCATCWGUFOJCBGSBOLUEHFKZRICPNZLHQDOJUDFWEGVZKDUNCHSUKMHERVVBLQGQOZPRVFHHHCXKYQFRTSUZNXYINSKFMWDIJTHWBX");

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
    msg.setTimeStamp(0.6571657189906934);
    msg.setSource(36339U);
    msg.setSourceEntity(202U);
    msg.setDestination(35255U);
    msg.setDestinationEntity(193U);
    msg.op = 66U;
    msg.text.assign("OQTCLKYAGUHBQXSDUKFVQDBFZVGGDWUKKVFYHSTWFDEYYYIVIQUXVMEGURZLLCWABYTRPLIMXIOXLELGTXLSSUWRCJNPAFBFSKMJAJIENTOYDJNNXIWJCDLJNCOCZSENNKBHGXVYFPABHAPZARTLEVOMOUZBZOLWJXKTNWBAMYIPSEABZHREKRKHRQSGIHEMZWQGCFUDIRTWDPCDQQNDQSNKOXBRIOZMJWMGF");

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
    msg.setTimeStamp(0.5685798300019624);
    msg.setSource(7819U);
    msg.setSourceEntity(27U);
    msg.setDestination(46714U);
    msg.setDestinationEntity(231U);
    msg.op = 89U;
    msg.time_remain = 0.0007251273299979655;
    msg.sched_time = 0.21362444743858877;

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
    msg.setTimeStamp(0.3458622795433821);
    msg.setSource(30178U);
    msg.setSourceEntity(219U);
    msg.setDestination(44240U);
    msg.setDestinationEntity(1U);
    msg.op = 72U;
    msg.time_remain = 0.8925603540592503;
    msg.sched_time = 0.9043146999422641;

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
    msg.setTimeStamp(0.8955572340584164);
    msg.setSource(7792U);
    msg.setSourceEntity(75U);
    msg.setDestination(23838U);
    msg.setDestinationEntity(6U);
    msg.op = 159U;
    msg.time_remain = 0.2927975964403411;
    msg.sched_time = 0.6062153321296135;

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
    msg.setTimeStamp(0.1907168668857787);
    msg.setSource(17701U);
    msg.setSourceEntity(229U);
    msg.setDestination(47525U);
    msg.setDestinationEntity(129U);
    msg.name.assign("LLYLLFTXHXVZYSCJOJHRBHKMTCGOPAWDWDAXLJLTBSUWVBJOMUHLWYXOFJSNFBPQYYGNCAPIFSZBMMUAARHKUKRMJDZVFCCXKRCEQRNBVHTUAELGITEKVZYLDH");
    msg.op = 5U;
    msg.sched_time = 0.8799407663350745;

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
    msg.setTimeStamp(0.8981174548245523);
    msg.setSource(27682U);
    msg.setSourceEntity(0U);
    msg.setDestination(33389U);
    msg.setDestinationEntity(109U);
    msg.name.assign("SCYPLKBXOVQDFFXQSXZGGEWZTLLVAIGYTPUXUWVQGKTBGBIHYBNBOLITHJLRMACOIQMVNQBVFSTYRIOPOCINDNHKQDPAHVMQCEMSZIRXCABZOQHTJTQZHSLMHEOPDMLZKHQULBMEYDZRFPUDFCRURHSDFTEWYVAZKNPMWJLTREEFSYGXWVWEWUJIJNCNOYDYOJCJWSUAMRPNVGRKXKGADPEACUUJVTLHIECIXDWAMRWKFZANNYBFKSUSJPF");
    msg.op = 117U;
    msg.sched_time = 0.4571832147852064;

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
    msg.setTimeStamp(0.5392474970178605);
    msg.setSource(64090U);
    msg.setSourceEntity(151U);
    msg.setDestination(26171U);
    msg.setDestinationEntity(247U);
    msg.name.assign("WVGCSPTIRRFJTHCMTLMDKPUKIVSJIFXNQXRH");
    msg.op = 174U;
    msg.sched_time = 0.7318227595179015;

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
    msg.setTimeStamp(0.48674182856442494);
    msg.setSource(5392U);
    msg.setSourceEntity(99U);
    msg.setDestination(52897U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.13461860903627154);
    msg.setSource(44546U);
    msg.setSourceEntity(45U);
    msg.setDestination(9458U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.5535576425191179);
    msg.setSource(64737U);
    msg.setSourceEntity(37U);
    msg.setDestination(8141U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.4630370216883769);
    msg.setSource(24937U);
    msg.setSourceEntity(115U);
    msg.setDestination(17114U);
    msg.setDestinationEntity(51U);
    msg.name.assign("TUYYHPYEPMGVKYWTLRKYOTUDNGJUDRDDECZPOVUVCMRVZQPHTKQLQMRDHQSLZMUMKNPINKQZJTSOCBGFHXVHZQJSTLFIEGFDBBYILAZBCFJWCIZDVVMLEQEKYKRCANPHJYSXEZKOSONDSOEWKQRAOEMSHPAPIYFIJWBTVXUEYUXUNHWGLAWBCULH");
    msg.state = 53U;

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
    msg.setTimeStamp(0.7575775747632506);
    msg.setSource(2632U);
    msg.setSourceEntity(135U);
    msg.setDestination(36381U);
    msg.setDestinationEntity(164U);
    msg.name.assign("SCPICQGCOZYKETSHDPUMACWLLTLITKKMDLANBVOAJFMOKXZPGHBAKPEVNRBUXDOFRPCJIYLAPKXWHUCWXYUJAEGBJZMGPFHUMTOTHSDXFTABHQUBMRNZRLSPEXIZZSTJ");
    msg.state = 122U;

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
    msg.setTimeStamp(0.7673284700843365);
    msg.setSource(62763U);
    msg.setSourceEntity(241U);
    msg.setDestination(53572U);
    msg.setDestinationEntity(95U);
    msg.name.assign("YAYPLXDGESHSVOGJOPIEFQQGSQGWVEAKUPHKNWMRETWYLCQGLIBMFCWFEVGKTAVIMPISKDNZTEACTW");
    msg.state = 190U;

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
    msg.setTimeStamp(0.48551382855803715);
    msg.setSource(46345U);
    msg.setSourceEntity(164U);
    msg.setDestination(15955U);
    msg.setDestinationEntity(136U);
    msg.name.assign("OYYQCVXARRKNZGJYIODLJPGJTANYUKMTDNOHVUZDHEVIJVPJMDGMCXGZYFCKEBELKRPZGZLGJXHAZPUSQWLHXOBWDVWKRXISEQHHICKHRLQXWOUXBAVJDLELEDTFNPOWIRHIHNZTEKGBWFUNN");
    msg.value = 144U;

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
    msg.setTimeStamp(0.5058375596458872);
    msg.setSource(21654U);
    msg.setSourceEntity(145U);
    msg.setDestination(2980U);
    msg.setDestinationEntity(160U);
    msg.name.assign("QZNQCRXMKPKWQKDZCHYUBWXWFVAZDVLFGEXYOYHBZNJQHQNMEIVIXBFYJEZBQMZKBNPSDQDWKOGMOAGTCRTBUHOFVUMFIA");
    msg.value = 79U;

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
    msg.setTimeStamp(0.27353525808266477);
    msg.setSource(6361U);
    msg.setSourceEntity(108U);
    msg.setDestination(21317U);
    msg.setDestinationEntity(113U);
    msg.name.assign("VYAGFZQQHSWKLPIDGHWJQRYZQDEWVBHITEUMIKRHDXMWOLZYUSXUMJGJPFUBOTEGTHEZFVNIAFEGLZETCMFUCFHFKYOYYXJKMZNJDYONFECQBKBPIWBWVXBUTGDUJUBVAXRBMTMMSNQNDYSZIZXFRASOKCNWCP");
    msg.value = 209U;

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
    msg.setTimeStamp(0.9059335965064703);
    msg.setSource(48361U);
    msg.setSourceEntity(220U);
    msg.setDestination(59149U);
    msg.setDestinationEntity(52U);
    msg.name.assign("FBFPRZFJQWJONGAOHGSSYUAEDQMPPFCDWOKYHKHVHBUIIACKBIQHZFGZLXTUKRCZBNDPEQECPNFWQNOITGYKKVNKHNZVSAXIUPLGIGXTPSXFZQSOTBDBYDHIUGDGPCEFIDOYJMATLFLVRMASBPYUYSTTCMZEDWC");

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
    msg.setTimeStamp(0.16314016289805278);
    msg.setSource(35983U);
    msg.setSourceEntity(229U);
    msg.setDestination(44658U);
    msg.setDestinationEntity(206U);
    msg.name.assign("HVZAUIZKCZJNVNXEWCLZTIZACFFOAYGABGVQFOWIXJCUQLRHALTOSAUSCRKQDKGNVQXODZLGXBJYIEWFKWPSKQDSDAHWNZNDRNIVETPUPSJMPMJBDQWNLZCBHMLTJOXAYRSMYQTHGEVOXIRWMXOBIPMGRKYKEYOWBSOEDRKPBLDVTIXUCNJFW");

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
    msg.setTimeStamp(0.745539520754753);
    msg.setSource(63409U);
    msg.setSourceEntity(80U);
    msg.setDestination(13731U);
    msg.setDestinationEntity(51U);
    msg.name.assign("VVCLQQTEVKIMRJEXFHFJEVKHVNAMYVBPLINRNNVQJCVPDXWFBHZTGIRCBHVHQJOTZCLCGFYJKKWCSOWXURSNTPM");

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
    msg.setTimeStamp(0.421075275354829);
    msg.setSource(22904U);
    msg.setSourceEntity(155U);
    msg.setDestination(15823U);
    msg.setDestinationEntity(254U);
    msg.name.assign("BQGTFQQEMZVKTVVFUPCNJEGAAXYHPAEBHSIDKIQZUSPGXKLSRSBOWWJDLSEPESRABMPHLWYYZAZEAFKCXKTJOPEDVGGOFOMMISQCBGDIMOLCUQYOXVYDWLDFRLZYGKMKFTEVFJHAMBNXTHXXSNABIDUCRQOFHTBLBDDCNMNFIAWRUYGPLNJFICTXKNNJNIWJVZGRUZRZYOQPHCHTREJ");
    msg.value = 211U;

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
    msg.setTimeStamp(0.6882357773667184);
    msg.setSource(2269U);
    msg.setSourceEntity(137U);
    msg.setDestination(52397U);
    msg.setDestinationEntity(39U);
    msg.name.assign("LQRYIJFRBQKKIOWQWRBXRPSVIGURQELNOVDYHVUOXBYVHCJBLJLQBVCJJJAUDDVAATZGDWNEIZZXVWOFSPSYYEFPTWLIRVRCWXPHXWUESCOHCBMYEFGJODCMZFDSNERLZ");
    msg.value = 120U;

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
    msg.setTimeStamp(0.6668318005269686);
    msg.setSource(47207U);
    msg.setSourceEntity(237U);
    msg.setDestination(11545U);
    msg.setDestinationEntity(160U);
    msg.name.assign("ATRCWRDYKDBRGKXZUEOGPFADSGRVEYEYQPIMVWOAHJBYUQQWHAVCGOEKSTHLXTYLTIZMYVDHYRBVYIXXQFJBCIZGUDMFPCZZOWFTUXXULZRUOJFTMPNNSWUTIBDALNWCBJSSBSUEQLVKGPHFOKFWBLNKRIRKNCGJDLHLTWEGC");
    msg.value = 42U;

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
    msg.setTimeStamp(0.8755153357441112);
    msg.setSource(39965U);
    msg.setSourceEntity(107U);
    msg.setDestination(45386U);
    msg.setDestinationEntity(190U);
    msg.id = 22U;
    msg.period = 2059028948U;
    msg.duty_cycle = 3971090793U;

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
    msg.setTimeStamp(0.6529635296986478);
    msg.setSource(6774U);
    msg.setSourceEntity(81U);
    msg.setDestination(48013U);
    msg.setDestinationEntity(16U);
    msg.id = 254U;
    msg.period = 3812907860U;
    msg.duty_cycle = 1569917446U;

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
    msg.setTimeStamp(0.1858659988349849);
    msg.setSource(54922U);
    msg.setSourceEntity(236U);
    msg.setDestination(55616U);
    msg.setDestinationEntity(45U);
    msg.id = 174U;
    msg.period = 2449474561U;
    msg.duty_cycle = 2072217776U;

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
    msg.setTimeStamp(0.6496493877382262);
    msg.setSource(29168U);
    msg.setSourceEntity(198U);
    msg.setDestination(43565U);
    msg.setDestinationEntity(237U);
    msg.id = 221U;
    msg.period = 2443745071U;
    msg.duty_cycle = 2233552668U;

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
    msg.setTimeStamp(0.412177331630012);
    msg.setSource(55933U);
    msg.setSourceEntity(27U);
    msg.setDestination(34989U);
    msg.setDestinationEntity(3U);
    msg.id = 183U;
    msg.period = 2673754841U;
    msg.duty_cycle = 1109890089U;

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
    msg.setTimeStamp(0.4089873290958008);
    msg.setSource(27905U);
    msg.setSourceEntity(60U);
    msg.setDestination(32285U);
    msg.setDestinationEntity(181U);
    msg.id = 141U;
    msg.period = 583411819U;
    msg.duty_cycle = 986788481U;

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
    msg.setTimeStamp(0.2066744796043034);
    msg.setSource(13415U);
    msg.setSourceEntity(32U);
    msg.setDestination(48498U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.5086695554261187;
    msg.lon = 0.4418676008097284;
    msg.height = 0.4234045591681639;
    msg.x = 0.5368099242753439;
    msg.y = 0.30102879288097717;
    msg.z = 0.5445564510454787;
    msg.phi = 0.8357109898478012;
    msg.theta = 0.0062568501091778694;
    msg.psi = 0.5013894822581322;
    msg.u = 0.42961422177302033;
    msg.v = 0.07133093262367673;
    msg.w = 0.5040669187471873;
    msg.vx = 0.3160338416359615;
    msg.vy = 0.5823155806168339;
    msg.vz = 0.8460293528602705;
    msg.p = 0.9223860716312534;
    msg.q = 0.7065608444301988;
    msg.r = 0.35316288562731646;
    msg.depth = 0.6123298252909234;
    msg.alt = 0.19327438452534262;

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
    msg.setTimeStamp(0.6004442391225981);
    msg.setSource(49395U);
    msg.setSourceEntity(149U);
    msg.setDestination(63538U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.09915272811098996;
    msg.lon = 0.6057306909546125;
    msg.height = 0.883682516035181;
    msg.x = 0.9196683257971306;
    msg.y = 0.5663140740436498;
    msg.z = 0.9112578114488404;
    msg.phi = 0.3647777629183806;
    msg.theta = 0.6701920370499174;
    msg.psi = 0.6211368813810249;
    msg.u = 0.16495929238622142;
    msg.v = 0.4230783467692;
    msg.w = 0.01166551965704199;
    msg.vx = 0.07766565519870972;
    msg.vy = 0.07459206183647371;
    msg.vz = 0.7500490282024638;
    msg.p = 0.46311086161756443;
    msg.q = 0.733184115410681;
    msg.r = 0.436363736108344;
    msg.depth = 0.232392949959921;
    msg.alt = 0.1620169189743571;

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
    msg.setTimeStamp(0.7706311990284245);
    msg.setSource(587U);
    msg.setSourceEntity(38U);
    msg.setDestination(34500U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.06336459208924705;
    msg.lon = 0.8918487698516959;
    msg.height = 0.9493921801977999;
    msg.x = 0.22192532429331047;
    msg.y = 0.019281787112551463;
    msg.z = 0.23245115533756489;
    msg.phi = 0.020480013741347447;
    msg.theta = 0.1395627553225528;
    msg.psi = 0.4712856054002831;
    msg.u = 0.05501839504273798;
    msg.v = 0.1960721836765873;
    msg.w = 0.8771076219907941;
    msg.vx = 0.46492097278827715;
    msg.vy = 0.016457633992868148;
    msg.vz = 0.802825930386452;
    msg.p = 0.7619679997366053;
    msg.q = 0.4264216318661166;
    msg.r = 0.6796409426481059;
    msg.depth = 0.47801720143419424;
    msg.alt = 0.4355824661505603;

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
    msg.setTimeStamp(0.1283741821010722);
    msg.setSource(49485U);
    msg.setSourceEntity(146U);
    msg.setDestination(58372U);
    msg.setDestinationEntity(60U);
    msg.x = 0.09340235498688032;
    msg.y = 0.541862281171439;
    msg.z = 5.5671422328873454e-05;

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
    msg.setTimeStamp(0.8928478649138897);
    msg.setSource(571U);
    msg.setSourceEntity(182U);
    msg.setDestination(52972U);
    msg.setDestinationEntity(230U);
    msg.x = 0.8888039461366806;
    msg.y = 0.5552671379013082;
    msg.z = 0.7845476345385087;

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
    msg.setTimeStamp(0.6073645637152841);
    msg.setSource(47802U);
    msg.setSourceEntity(147U);
    msg.setDestination(62239U);
    msg.setDestinationEntity(17U);
    msg.x = 0.1787074426895222;
    msg.y = 0.19361378911603955;
    msg.z = 0.7472995748096748;

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
    msg.setTimeStamp(0.7909799434596723);
    msg.setSource(26755U);
    msg.setSourceEntity(65U);
    msg.setDestination(5201U);
    msg.setDestinationEntity(102U);
    msg.value = 0.1517756293621565;

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
    msg.setTimeStamp(0.6946951576991769);
    msg.setSource(48073U);
    msg.setSourceEntity(237U);
    msg.setDestination(57679U);
    msg.setDestinationEntity(71U);
    msg.value = 0.06650828196849345;

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
    msg.setTimeStamp(0.5373240920341849);
    msg.setSource(10564U);
    msg.setSourceEntity(204U);
    msg.setDestination(35486U);
    msg.setDestinationEntity(163U);
    msg.value = 0.4692249427038766;

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
    msg.setTimeStamp(0.1807893905796938);
    msg.setSource(3386U);
    msg.setSourceEntity(237U);
    msg.setDestination(23793U);
    msg.setDestinationEntity(73U);
    msg.value = 0.6419653264423351;

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
    msg.setTimeStamp(0.7425030439471342);
    msg.setSource(5015U);
    msg.setSourceEntity(91U);
    msg.setDestination(14792U);
    msg.setDestinationEntity(24U);
    msg.value = 0.02752193861136165;

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
    msg.setTimeStamp(0.2067832253853853);
    msg.setSource(63455U);
    msg.setSourceEntity(60U);
    msg.setDestination(48885U);
    msg.setDestinationEntity(239U);
    msg.value = 0.9814948472946406;

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
    msg.setTimeStamp(0.4813025177470336);
    msg.setSource(27687U);
    msg.setSourceEntity(212U);
    msg.setDestination(33496U);
    msg.setDestinationEntity(245U);
    msg.x = 0.02824781403880905;
    msg.y = 0.7701018417583508;
    msg.z = 0.9659784168258999;
    msg.phi = 0.2784140375281884;
    msg.theta = 0.933304773810641;
    msg.psi = 0.22165626977473718;
    msg.p = 0.8116304341914377;
    msg.q = 0.8645874905557592;
    msg.r = 0.12543195477967695;
    msg.u = 0.34278230518641284;
    msg.v = 0.37208957872830684;
    msg.w = 0.9310108395533218;
    msg.bias_psi = 0.03967648494124576;
    msg.bias_r = 0.5125627878212925;

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
    msg.setTimeStamp(0.3446131792696966);
    msg.setSource(5384U);
    msg.setSourceEntity(196U);
    msg.setDestination(63641U);
    msg.setDestinationEntity(172U);
    msg.x = 0.08240246287441477;
    msg.y = 0.3039475442074183;
    msg.z = 0.25698577846210213;
    msg.phi = 0.40221522791338615;
    msg.theta = 0.26003712439023996;
    msg.psi = 0.5522573560383223;
    msg.p = 0.2543295417434278;
    msg.q = 0.6118965634555198;
    msg.r = 0.7032787147195775;
    msg.u = 0.5573626159081918;
    msg.v = 0.5508213409251722;
    msg.w = 0.666484776525943;
    msg.bias_psi = 0.0847057729197952;
    msg.bias_r = 0.45864428037995264;

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
    msg.setTimeStamp(0.2215774564953199);
    msg.setSource(30350U);
    msg.setSourceEntity(83U);
    msg.setDestination(14010U);
    msg.setDestinationEntity(247U);
    msg.x = 0.08985781293253714;
    msg.y = 0.9455684967128816;
    msg.z = 0.3825189193878087;
    msg.phi = 0.6032424623178898;
    msg.theta = 0.6381975267924579;
    msg.psi = 0.9482104175694764;
    msg.p = 0.09979621892757617;
    msg.q = 0.09494829111691994;
    msg.r = 0.25235951925619304;
    msg.u = 0.6326259897986093;
    msg.v = 0.6824401617731766;
    msg.w = 0.6224454648600362;
    msg.bias_psi = 0.12704145559621616;
    msg.bias_r = 0.8145698165866359;

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
    msg.setTimeStamp(0.3151862930465892);
    msg.setSource(53137U);
    msg.setSourceEntity(238U);
    msg.setDestination(887U);
    msg.setDestinationEntity(182U);
    msg.bias_psi = 0.543214997099592;
    msg.bias_r = 0.958701555195403;
    msg.cog = 0.38124506431391003;
    msg.cyaw = 0.4561104957071729;
    msg.lbl_rej_level = 0.23045055583874552;
    msg.gps_rej_level = 0.692913567934236;
    msg.custom_x = 0.8901735961166148;
    msg.custom_y = 0.2025311928899568;
    msg.custom_z = 0.15684034151851134;

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
    msg.setTimeStamp(0.4659567117397604);
    msg.setSource(37098U);
    msg.setSourceEntity(112U);
    msg.setDestination(23377U);
    msg.setDestinationEntity(204U);
    msg.bias_psi = 0.39814354871669677;
    msg.bias_r = 0.7474618211842923;
    msg.cog = 0.7215229110108318;
    msg.cyaw = 0.6071685969141718;
    msg.lbl_rej_level = 0.21140752974495047;
    msg.gps_rej_level = 0.0077799668777657205;
    msg.custom_x = 0.9292484941633797;
    msg.custom_y = 0.5449960667798917;
    msg.custom_z = 0.5462923884612902;

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
    msg.setTimeStamp(0.4182442092391022);
    msg.setSource(3483U);
    msg.setSourceEntity(98U);
    msg.setDestination(14270U);
    msg.setDestinationEntity(173U);
    msg.bias_psi = 0.7314572716954839;
    msg.bias_r = 0.6459677574838107;
    msg.cog = 0.8758739328737695;
    msg.cyaw = 0.10942041461511864;
    msg.lbl_rej_level = 0.5175003815416701;
    msg.gps_rej_level = 0.09330440420808028;
    msg.custom_x = 0.7636595942503004;
    msg.custom_y = 0.8644565235734285;
    msg.custom_z = 0.48731074868865953;

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
    msg.setTimeStamp(0.522740344819561);
    msg.setSource(46478U);
    msg.setSourceEntity(238U);
    msg.setDestination(27079U);
    msg.setDestinationEntity(74U);
    msg.utc_time = 0.6604994790726898;
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
    msg.setTimeStamp(0.11450454662818388);
    msg.setSource(58889U);
    msg.setSourceEntity(171U);
    msg.setDestination(43533U);
    msg.setDestinationEntity(84U);
    msg.utc_time = 0.33927701003297106;
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
    msg.setTimeStamp(0.49484713553284454);
    msg.setSource(30100U);
    msg.setSourceEntity(51U);
    msg.setDestination(53495U);
    msg.setDestinationEntity(52U);
    msg.utc_time = 0.9369562462815904;
    msg.reason = 159U;

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
    msg.setTimeStamp(0.9967702760979086);
    msg.setSource(57678U);
    msg.setSourceEntity(19U);
    msg.setDestination(4287U);
    msg.setDestinationEntity(42U);
    msg.id = 132U;
    msg.range = 0.09282975347479006;
    msg.acceptance = 215U;

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
    msg.setTimeStamp(0.33602133816842206);
    msg.setSource(22165U);
    msg.setSourceEntity(176U);
    msg.setDestination(29977U);
    msg.setDestinationEntity(192U);
    msg.id = 40U;
    msg.range = 0.40101447269955015;
    msg.acceptance = 10U;

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
    msg.setTimeStamp(0.5833927564271871);
    msg.setSource(7082U);
    msg.setSourceEntity(134U);
    msg.setDestination(1161U);
    msg.setDestinationEntity(231U);
    msg.id = 177U;
    msg.range = 0.8901938732955303;
    msg.acceptance = 17U;

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
    msg.setTimeStamp(0.9516242646967743);
    msg.setSource(39250U);
    msg.setSourceEntity(5U);
    msg.setDestination(59821U);
    msg.setDestinationEntity(51U);
    msg.type = 145U;
    msg.reason = 94U;
    msg.value = 0.27963405051915335;
    msg.timestep = 0.6492756473102408;

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
    msg.setTimeStamp(0.28896620896407665);
    msg.setSource(58940U);
    msg.setSourceEntity(175U);
    msg.setDestination(54896U);
    msg.setDestinationEntity(176U);
    msg.type = 50U;
    msg.reason = 97U;
    msg.value = 0.4441970359668864;
    msg.timestep = 0.13718761398372936;

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
    msg.setTimeStamp(0.9301351862835993);
    msg.setSource(24855U);
    msg.setSourceEntity(17U);
    msg.setDestination(56756U);
    msg.setDestinationEntity(143U);
    msg.type = 104U;
    msg.reason = 154U;
    msg.value = 0.7613848744914812;
    msg.timestep = 0.7799413742997259;

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
    msg.setTimeStamp(0.11537984881699237);
    msg.setSource(43799U);
    msg.setSourceEntity(96U);
    msg.setDestination(59110U);
    msg.setDestinationEntity(160U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AZQAWKLOMW");
    tmp_msg_0.lat = 0.7335226449462082;
    tmp_msg_0.lon = 0.6135223667858247;
    tmp_msg_0.depth = 0.25405829796101054;
    tmp_msg_0.query_channel = 198U;
    tmp_msg_0.reply_channel = 181U;
    tmp_msg_0.transponder_delay = 138U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2926334850712857;
    msg.y = 0.2733280454665876;
    msg.var_x = 0.42925285921712897;
    msg.var_y = 0.5077797439377196;
    msg.distance = 0.40078090968245084;

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
    msg.setTimeStamp(0.8937930212912393);
    msg.setSource(857U);
    msg.setSourceEntity(221U);
    msg.setDestination(54308U);
    msg.setDestinationEntity(228U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BDWPATBUUSWOYDANUGRAPSOGIBTQWMCYJHCEKZDUIRLLMSUFRRLGPABVHMDNKYVJONEDJONYDCIKLHUJAGFFWATLFDEWQEXIQDOZFXQXPFWMCBHZQIYUHJBCNGNHRTPOZSGRPEJZEQGLAOOVXCXZAAKZHLPKVQWCXSIJRYYIZTLUGNJZSVIMKXZDWPIHMWMYE");
    tmp_msg_0.lat = 0.36238581507097434;
    tmp_msg_0.lon = 0.24612944793235503;
    tmp_msg_0.depth = 0.38598520418917237;
    tmp_msg_0.query_channel = 244U;
    tmp_msg_0.reply_channel = 129U;
    tmp_msg_0.transponder_delay = 164U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.21751912379485916;
    msg.y = 0.9394650744711605;
    msg.var_x = 0.7225775803526019;
    msg.var_y = 0.10190703530720668;
    msg.distance = 0.5025396409767046;

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
    msg.setTimeStamp(0.6514664700928704);
    msg.setSource(37200U);
    msg.setSourceEntity(150U);
    msg.setDestination(39761U);
    msg.setDestinationEntity(116U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AVQIEOSLAJADKDYFUAYJJPHIIHOTYIWHSGQGPDKPCXGWSBZUDTYXFFHXIMNQOZJDHJVIWWBWNBTMCCZEJZMEYARSKGGUXKQTIQWRAERWZFQGEURBZTFCWSIYWCMAYNZLFYPVQXXPEFELBMKBRCOKFMYKMGUZMNLNHDUHGEIOEPVDCATPKSKCUMONQRANTMOVSLXCULBVFNVZRRRNAFVPXJJJNHVGSDKUZSRUOBLXDTVJIDGWBOPTQLYELO");
    tmp_msg_0.lat = 0.1904478031231578;
    tmp_msg_0.lon = 0.4004070399365537;
    tmp_msg_0.depth = 0.8888441561943854;
    tmp_msg_0.query_channel = 234U;
    tmp_msg_0.reply_channel = 23U;
    tmp_msg_0.transponder_delay = 47U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8448299349102013;
    msg.y = 0.8922466706794238;
    msg.var_x = 0.31934067587026793;
    msg.var_y = 0.08079813658560753;
    msg.distance = 0.764120899718624;

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
    msg.setTimeStamp(0.002012945506591368);
    msg.setSource(13398U);
    msg.setSourceEntity(10U);
    msg.setDestination(19807U);
    msg.setDestinationEntity(204U);
    msg.state = 215U;

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
    msg.setTimeStamp(0.7807427646473999);
    msg.setSource(4440U);
    msg.setSourceEntity(150U);
    msg.setDestination(43518U);
    msg.setDestinationEntity(136U);
    msg.state = 6U;

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
    msg.setTimeStamp(0.2292047541554716);
    msg.setSource(6220U);
    msg.setSourceEntity(235U);
    msg.setDestination(48122U);
    msg.setDestinationEntity(134U);
    msg.state = 206U;

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
    msg.setTimeStamp(0.013823024429360675);
    msg.setSource(48051U);
    msg.setSourceEntity(119U);
    msg.setDestination(37277U);
    msg.setDestinationEntity(177U);
    msg.x = 0.13986311585490785;
    msg.y = 0.3345222378503987;
    msg.z = 0.3813482455792;

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
    msg.setTimeStamp(0.42454322127012256);
    msg.setSource(3357U);
    msg.setSourceEntity(81U);
    msg.setDestination(58856U);
    msg.setDestinationEntity(254U);
    msg.x = 0.16469963766191764;
    msg.y = 0.1450759574641557;
    msg.z = 0.6345382422510135;

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
    msg.setTimeStamp(0.800073197006319);
    msg.setSource(57120U);
    msg.setSourceEntity(237U);
    msg.setDestination(23665U);
    msg.setDestinationEntity(209U);
    msg.x = 0.08432857993502019;
    msg.y = 0.9119493544156626;
    msg.z = 0.08700345224015549;

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
    msg.setTimeStamp(0.257429107633932);
    msg.setSource(18149U);
    msg.setSourceEntity(78U);
    msg.setDestination(24172U);
    msg.setDestinationEntity(8U);
    msg.va = 0.8445806292210647;
    msg.aoa = 0.9126797470075879;
    msg.ssa = 0.28786680263515074;

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
    msg.setTimeStamp(0.14833050749330878);
    msg.setSource(36591U);
    msg.setSourceEntity(162U);
    msg.setDestination(55398U);
    msg.setDestinationEntity(165U);
    msg.va = 0.6789119860991817;
    msg.aoa = 0.5672817865518287;
    msg.ssa = 0.54752892796582;

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
    msg.setTimeStamp(0.8551631132547193);
    msg.setSource(65050U);
    msg.setSourceEntity(114U);
    msg.setDestination(18094U);
    msg.setDestinationEntity(163U);
    msg.va = 0.7523255314071752;
    msg.aoa = 0.029588436880042313;
    msg.ssa = 0.8921623617474967;

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
    msg.setTimeStamp(0.5286633760747173);
    msg.setSource(11891U);
    msg.setSourceEntity(83U);
    msg.setDestination(30581U);
    msg.setDestinationEntity(34U);
    msg.value = 0.30740302108713646;

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
    msg.setTimeStamp(0.8898852921296236);
    msg.setSource(56914U);
    msg.setSourceEntity(101U);
    msg.setDestination(16377U);
    msg.setDestinationEntity(133U);
    msg.value = 0.5179063590605968;

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
    msg.setTimeStamp(0.8023382678209509);
    msg.setSource(54910U);
    msg.setSourceEntity(104U);
    msg.setDestination(42167U);
    msg.setDestinationEntity(153U);
    msg.value = 0.7007322711769612;

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
    msg.setTimeStamp(0.04195521247806122);
    msg.setSource(58745U);
    msg.setSourceEntity(18U);
    msg.setDestination(36926U);
    msg.setDestinationEntity(1U);
    msg.value = 0.24700740944398547;
    msg.z_units = 208U;

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
    msg.setTimeStamp(0.7105386623963219);
    msg.setSource(9747U);
    msg.setSourceEntity(17U);
    msg.setDestination(46411U);
    msg.setDestinationEntity(247U);
    msg.value = 0.04982481325797872;
    msg.z_units = 104U;

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
    msg.setTimeStamp(0.17388160295089616);
    msg.setSource(48734U);
    msg.setSourceEntity(169U);
    msg.setDestination(35530U);
    msg.setDestinationEntity(79U);
    msg.value = 0.6062170736202844;
    msg.z_units = 182U;

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
    msg.setTimeStamp(0.3692861773214625);
    msg.setSource(31717U);
    msg.setSourceEntity(47U);
    msg.setDestination(35291U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8896491756345619;
    msg.speed_units = 135U;

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
    msg.setTimeStamp(0.9959654967837853);
    msg.setSource(51109U);
    msg.setSourceEntity(102U);
    msg.setDestination(30763U);
    msg.setDestinationEntity(90U);
    msg.value = 0.6972739699424513;
    msg.speed_units = 249U;

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
    msg.setTimeStamp(0.0876698946989678);
    msg.setSource(50422U);
    msg.setSourceEntity(93U);
    msg.setDestination(39389U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6012665268480037;
    msg.speed_units = 121U;

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
    msg.setTimeStamp(0.48587824059780405);
    msg.setSource(41915U);
    msg.setSourceEntity(246U);
    msg.setDestination(50766U);
    msg.setDestinationEntity(88U);
    msg.value = 0.5822050401964707;

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
    msg.setTimeStamp(0.8652122790211356);
    msg.setSource(51163U);
    msg.setSourceEntity(10U);
    msg.setDestination(33860U);
    msg.setDestinationEntity(201U);
    msg.value = 0.3419072376752298;

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
    msg.setTimeStamp(0.9527841797582965);
    msg.setSource(6202U);
    msg.setSourceEntity(87U);
    msg.setDestination(10460U);
    msg.setDestinationEntity(225U);
    msg.value = 0.7152140258433932;

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
    msg.setTimeStamp(0.2904024193033633);
    msg.setSource(27248U);
    msg.setSourceEntity(50U);
    msg.setDestination(30291U);
    msg.setDestinationEntity(147U);
    msg.value = 0.7774236054349062;

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
    msg.setTimeStamp(0.3741381971167319);
    msg.setSource(28222U);
    msg.setSourceEntity(207U);
    msg.setDestination(54605U);
    msg.setDestinationEntity(58U);
    msg.value = 0.4223877198811018;

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
    msg.setTimeStamp(0.9168191635642644);
    msg.setSource(2496U);
    msg.setSourceEntity(197U);
    msg.setDestination(834U);
    msg.setDestinationEntity(203U);
    msg.value = 0.875132090583805;

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
    msg.setTimeStamp(0.8984664994312839);
    msg.setSource(23384U);
    msg.setSourceEntity(25U);
    msg.setDestination(64774U);
    msg.setDestinationEntity(194U);
    msg.value = 0.7456517554111414;

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
    msg.setTimeStamp(0.05381500571377085);
    msg.setSource(55935U);
    msg.setSourceEntity(205U);
    msg.setDestination(7460U);
    msg.setDestinationEntity(191U);
    msg.value = 0.5590396140137336;

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
    msg.setTimeStamp(0.1777804928016764);
    msg.setSource(17786U);
    msg.setSourceEntity(153U);
    msg.setDestination(7077U);
    msg.setDestinationEntity(39U);
    msg.value = 0.1646583108721792;

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
    msg.setTimeStamp(0.4064288421780581);
    msg.setSource(22022U);
    msg.setSourceEntity(192U);
    msg.setDestination(29816U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 3102596277U;
    msg.start_lat = 0.047506687487460675;
    msg.start_lon = 0.5755275454486681;
    msg.start_z = 0.8924639547395002;
    msg.start_z_units = 77U;
    msg.end_lat = 0.9306826037707213;
    msg.end_lon = 0.6813789460645457;
    msg.end_z = 0.5243613783328651;
    msg.end_z_units = 55U;
    msg.speed = 0.2886666762366915;
    msg.speed_units = 24U;
    msg.lradius = 0.1767811009364526;
    msg.flags = 205U;

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
    msg.setTimeStamp(0.5220914049701549);
    msg.setSource(53484U);
    msg.setSourceEntity(210U);
    msg.setDestination(52550U);
    msg.setDestinationEntity(226U);
    msg.path_ref = 1383750195U;
    msg.start_lat = 0.49256092558210773;
    msg.start_lon = 0.5757764837566918;
    msg.start_z = 0.9107187454999387;
    msg.start_z_units = 173U;
    msg.end_lat = 0.15669999923006372;
    msg.end_lon = 0.7848685260138953;
    msg.end_z = 0.047237226511659625;
    msg.end_z_units = 94U;
    msg.speed = 0.4524901450841513;
    msg.speed_units = 61U;
    msg.lradius = 0.16472088766477688;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.42905867932782416);
    msg.setSource(15343U);
    msg.setSourceEntity(238U);
    msg.setDestination(59623U);
    msg.setDestinationEntity(219U);
    msg.path_ref = 2495362184U;
    msg.start_lat = 0.30355122373949817;
    msg.start_lon = 0.1545363463416981;
    msg.start_z = 0.2900857115028611;
    msg.start_z_units = 205U;
    msg.end_lat = 0.1857011736989198;
    msg.end_lon = 0.6394423911417765;
    msg.end_z = 0.7866752901489884;
    msg.end_z_units = 191U;
    msg.speed = 0.05115943000862755;
    msg.speed_units = 246U;
    msg.lradius = 0.2673926819374811;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.4931931471618981);
    msg.setSource(3012U);
    msg.setSourceEntity(241U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(86U);
    msg.x = 0.8702364160761717;
    msg.y = 0.2833956752272264;
    msg.z = 0.9261657439967831;
    msg.k = 0.35778621156905555;
    msg.m = 0.5522164602619357;
    msg.n = 0.25231882867102373;
    msg.flags = 228U;

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
    msg.setTimeStamp(0.939841149910288);
    msg.setSource(11423U);
    msg.setSourceEntity(156U);
    msg.setDestination(2124U);
    msg.setDestinationEntity(147U);
    msg.x = 0.6463073235728258;
    msg.y = 0.9528765039236041;
    msg.z = 0.3658580097543338;
    msg.k = 0.6781021404289033;
    msg.m = 0.05619859160335061;
    msg.n = 0.22508039829920035;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.6746213138431937);
    msg.setSource(24679U);
    msg.setSourceEntity(150U);
    msg.setDestination(21664U);
    msg.setDestinationEntity(74U);
    msg.x = 0.22460762217054564;
    msg.y = 0.9469113315862283;
    msg.z = 0.4856582475469482;
    msg.k = 0.4887094256785942;
    msg.m = 0.3379799837678136;
    msg.n = 0.2890497858001313;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.2438056324371185);
    msg.setSource(54935U);
    msg.setSourceEntity(132U);
    msg.setDestination(25303U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6705243394848757;

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
    msg.setTimeStamp(0.5975015289011594);
    msg.setSource(12827U);
    msg.setSourceEntity(128U);
    msg.setDestination(47096U);
    msg.setDestinationEntity(216U);
    msg.value = 0.298707292119068;

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
    msg.setTimeStamp(0.9621736854102373);
    msg.setSource(21772U);
    msg.setSourceEntity(218U);
    msg.setDestination(6846U);
    msg.setDestinationEntity(211U);
    msg.value = 0.9844397048733906;

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
    msg.setTimeStamp(0.7785636285573712);
    msg.setSource(45149U);
    msg.setSourceEntity(239U);
    msg.setDestination(12970U);
    msg.setDestinationEntity(92U);
    msg.u = 0.30088725360968105;
    msg.v = 0.2847482790172505;
    msg.w = 0.4935272958669702;
    msg.p = 0.36871278137193664;
    msg.q = 0.3382832171050819;
    msg.r = 0.8966146473589168;
    msg.flags = 10U;

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
    msg.setTimeStamp(0.5520289719150605);
    msg.setSource(51762U);
    msg.setSourceEntity(94U);
    msg.setDestination(24804U);
    msg.setDestinationEntity(112U);
    msg.u = 0.09928456830989196;
    msg.v = 0.4341401329898127;
    msg.w = 0.27982175233273576;
    msg.p = 0.6012072524932192;
    msg.q = 0.4590807654992506;
    msg.r = 0.031038578951563034;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.9679276235833628);
    msg.setSource(13890U);
    msg.setSourceEntity(73U);
    msg.setDestination(41447U);
    msg.setDestinationEntity(239U);
    msg.u = 0.6683110739752249;
    msg.v = 0.49390900070418575;
    msg.w = 0.8465491718167163;
    msg.p = 0.9101970520630586;
    msg.q = 0.17343999716727343;
    msg.r = 0.1447943151664377;
    msg.flags = 64U;

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
    msg.setTimeStamp(0.9179269556234578);
    msg.setSource(41107U);
    msg.setSourceEntity(216U);
    msg.setDestination(31141U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 69835170U;
    msg.start_lat = 0.7337520868099645;
    msg.start_lon = 0.2656217529436672;
    msg.start_z = 0.5943100416518351;
    msg.start_z_units = 63U;
    msg.end_lat = 0.012432144072959894;
    msg.end_lon = 0.5051970896221026;
    msg.end_z = 0.3552497988636517;
    msg.end_z_units = 42U;
    msg.lradius = 0.7542936912497066;
    msg.flags = 2U;
    msg.x = 0.3438209706261276;
    msg.y = 0.3318686044097158;
    msg.z = 0.3817486460383369;
    msg.vx = 0.11365183933453604;
    msg.vy = 0.3845106587470817;
    msg.vz = 0.544231402746653;
    msg.course_error = 0.5494663901478648;
    msg.eta = 33257U;

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
    msg.setTimeStamp(0.023147332366750817);
    msg.setSource(33196U);
    msg.setSourceEntity(176U);
    msg.setDestination(38334U);
    msg.setDestinationEntity(137U);
    msg.path_ref = 3827288749U;
    msg.start_lat = 0.4985689347562918;
    msg.start_lon = 0.5099427901907883;
    msg.start_z = 0.6050933267305022;
    msg.start_z_units = 174U;
    msg.end_lat = 0.43878736139460484;
    msg.end_lon = 0.08773962747935538;
    msg.end_z = 0.8515286431666722;
    msg.end_z_units = 160U;
    msg.lradius = 0.5932964707396934;
    msg.flags = 111U;
    msg.x = 0.4124348050697575;
    msg.y = 0.9007729276059483;
    msg.z = 0.23169128811536277;
    msg.vx = 0.4525991790044661;
    msg.vy = 0.023547073280434483;
    msg.vz = 0.9900923256839462;
    msg.course_error = 0.31164427291975527;
    msg.eta = 64255U;

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
    msg.setTimeStamp(0.051948801763927466);
    msg.setSource(42119U);
    msg.setSourceEntity(14U);
    msg.setDestination(48339U);
    msg.setDestinationEntity(33U);
    msg.path_ref = 234862064U;
    msg.start_lat = 0.1610358101098608;
    msg.start_lon = 0.4976297753496194;
    msg.start_z = 0.16753979602384317;
    msg.start_z_units = 131U;
    msg.end_lat = 0.0194820940838768;
    msg.end_lon = 0.08241533434431181;
    msg.end_z = 0.286424267642451;
    msg.end_z_units = 130U;
    msg.lradius = 0.9502520704737407;
    msg.flags = 66U;
    msg.x = 0.0033936872590226708;
    msg.y = 0.4212249813838381;
    msg.z = 0.2900721091148529;
    msg.vx = 0.28517367208562483;
    msg.vy = 0.5828272482305411;
    msg.vz = 0.8615665998834766;
    msg.course_error = 0.30134244475413985;
    msg.eta = 38438U;

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
    msg.setTimeStamp(0.21005630232720107);
    msg.setSource(55501U);
    msg.setSourceEntity(98U);
    msg.setDestination(48304U);
    msg.setDestinationEntity(196U);
    msg.k = 0.45371861164321625;
    msg.m = 0.19350584398311155;
    msg.n = 0.1438279354400367;

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
    msg.setTimeStamp(0.6722545380622996);
    msg.setSource(18177U);
    msg.setSourceEntity(37U);
    msg.setDestination(41022U);
    msg.setDestinationEntity(221U);
    msg.k = 0.10028546465516364;
    msg.m = 0.5973863371860226;
    msg.n = 0.1650782917520205;

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
    msg.setTimeStamp(0.24182717377281593);
    msg.setSource(23231U);
    msg.setSourceEntity(197U);
    msg.setDestination(24933U);
    msg.setDestinationEntity(110U);
    msg.k = 0.6463325280010713;
    msg.m = 0.42200636153848525;
    msg.n = 0.9456421100038116;

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
    msg.setTimeStamp(0.6363039967757009);
    msg.setSource(30503U);
    msg.setSourceEntity(92U);
    msg.setDestination(33339U);
    msg.setDestinationEntity(41U);
    msg.p = 0.9521146395634256;
    msg.i = 0.3853749272655068;
    msg.d = 0.1590937219940275;
    msg.a = 0.39577214631819024;

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
    msg.setTimeStamp(0.6008784509196116);
    msg.setSource(34529U);
    msg.setSourceEntity(127U);
    msg.setDestination(37956U);
    msg.setDestinationEntity(83U);
    msg.p = 0.3546428798836536;
    msg.i = 0.05906680297445732;
    msg.d = 0.17922368497184582;
    msg.a = 0.9903013835770126;

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
    msg.setTimeStamp(0.7562596841470993);
    msg.setSource(44737U);
    msg.setSourceEntity(67U);
    msg.setDestination(16295U);
    msg.setDestinationEntity(206U);
    msg.p = 0.3874104434102482;
    msg.i = 0.9642142941003347;
    msg.d = 0.4680343695737541;
    msg.a = 0.685566453319821;

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
    msg.setTimeStamp(0.17578979438711784);
    msg.setSource(39985U);
    msg.setSourceEntity(247U);
    msg.setDestination(53749U);
    msg.setDestinationEntity(204U);
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
    msg.setTimeStamp(0.7727764210679131);
    msg.setSource(37746U);
    msg.setSourceEntity(125U);
    msg.setDestination(43808U);
    msg.setDestinationEntity(35U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.37170829215948475);
    msg.setSource(46207U);
    msg.setSourceEntity(234U);
    msg.setDestination(35417U);
    msg.setDestinationEntity(24U);
    msg.op = 230U;

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
    msg.setTimeStamp(0.36570898843029753);
    msg.setSource(41415U);
    msg.setSourceEntity(50U);
    msg.setDestination(14468U);
    msg.setDestinationEntity(124U);
    msg.x = 0.6479486776017841;
    msg.y = 0.35167044716269535;
    msg.z = 0.3424330961603227;
    msg.vx = 0.09694133167615038;
    msg.vy = 0.9894350627586479;
    msg.vz = 0.39103958907891423;
    msg.ax = 0.791725125292585;
    msg.ay = 0.20102131829709002;
    msg.az = 0.4924491765942963;
    msg.flags = 19312U;

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
    msg.setTimeStamp(0.22495000253317576);
    msg.setSource(37678U);
    msg.setSourceEntity(147U);
    msg.setDestination(14733U);
    msg.setDestinationEntity(209U);
    msg.x = 0.5295579679664058;
    msg.y = 0.45505657022474355;
    msg.z = 0.8610605041717984;
    msg.vx = 0.8701647374131778;
    msg.vy = 0.7576326431986051;
    msg.vz = 0.043648470293393804;
    msg.ax = 0.4711820572715203;
    msg.ay = 0.5199127014481465;
    msg.az = 0.6022272596626516;
    msg.flags = 39460U;

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
    msg.setTimeStamp(0.7183129458698071);
    msg.setSource(25939U);
    msg.setSourceEntity(229U);
    msg.setDestination(30759U);
    msg.setDestinationEntity(184U);
    msg.x = 0.5464631227251658;
    msg.y = 0.8256684999308593;
    msg.z = 0.33948975136523696;
    msg.vx = 0.7125164917381162;
    msg.vy = 0.34353864595447126;
    msg.vz = 0.2756112215391123;
    msg.ax = 0.993119685049454;
    msg.ay = 0.8485205894559553;
    msg.az = 0.11153205853892822;
    msg.flags = 26174U;

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
    msg.setTimeStamp(0.16035957455180483);
    msg.setSource(53446U);
    msg.setSourceEntity(147U);
    msg.setDestination(13956U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6488421329041086;

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
    msg.setTimeStamp(0.38508709538152786);
    msg.setSource(3502U);
    msg.setSourceEntity(143U);
    msg.setDestination(58459U);
    msg.setDestinationEntity(226U);
    msg.value = 0.25890511558940177;

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
    msg.setTimeStamp(0.7435794341156674);
    msg.setSource(49479U);
    msg.setSourceEntity(15U);
    msg.setDestination(12422U);
    msg.setDestinationEntity(183U);
    msg.value = 0.3053292717399668;

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
    msg.setTimeStamp(0.4225221617420104);
    msg.setSource(21033U);
    msg.setSourceEntity(193U);
    msg.setDestination(45840U);
    msg.setDestinationEntity(214U);
    msg.timeout = 23693U;
    msg.lat = 0.7992630825391225;
    msg.lon = 0.3419810366819592;
    msg.z = 0.1389514991459978;
    msg.z_units = 70U;
    msg.speed = 0.4479508644439524;
    msg.speed_units = 61U;
    msg.roll = 0.8347645597438235;
    msg.pitch = 0.5360867558090542;
    msg.yaw = 0.09546515652212018;
    msg.custom.assign("DMDVTCTVZESDZVBOKLUWBYHYJMFLBBXHZXIUXWUUKKBXVPGTRSKAUETZSAFKYKFMHAUYZZAISXLBQIHLJBPJGWZIROIVVPNXPFNWOYLXCVACYEM");

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
    msg.setTimeStamp(0.7751064367019036);
    msg.setSource(13949U);
    msg.setSourceEntity(31U);
    msg.setDestination(21786U);
    msg.setDestinationEntity(252U);
    msg.timeout = 23337U;
    msg.lat = 0.8347857838554245;
    msg.lon = 0.3832080613673514;
    msg.z = 0.6783505756252703;
    msg.z_units = 66U;
    msg.speed = 0.5580417521454717;
    msg.speed_units = 116U;
    msg.roll = 0.006493614418552673;
    msg.pitch = 0.2867869700129664;
    msg.yaw = 0.2616913808375896;
    msg.custom.assign("GYKQRCSXYPKYXCCGAEBPUPRKWVZVGNKDVJLBGNOZCELNBIOXGBHSEAIFPXFVZTROWLQNQTAMTWTTFZLDXLWJYHASDHQMLSOZWTHQHWFYFCRDDCAVWMNVLIEPKZXUUIYJUIAQRSJJVXTOGYICPAATGKXKPEBCBEFMOSFDLDFCLPZUREVUSUBXNMDKHSZUFFTEOUVAWLOQYZRVSIRHNPZQGHJWQIJSOIBXBNH");

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
    msg.setTimeStamp(0.3546392093956552);
    msg.setSource(11446U);
    msg.setSourceEntity(203U);
    msg.setDestination(52831U);
    msg.setDestinationEntity(211U);
    msg.timeout = 23388U;
    msg.lat = 0.20827273161425564;
    msg.lon = 0.9076485885632358;
    msg.z = 0.6012302297077057;
    msg.z_units = 151U;
    msg.speed = 0.6036867592312185;
    msg.speed_units = 101U;
    msg.roll = 0.07775993940430381;
    msg.pitch = 0.9136714691726198;
    msg.yaw = 0.35346290333061525;
    msg.custom.assign("UNOYMHQDZBWUEXJLPPFBKFNYWSPUAAOOZDVARWBHUHENRFSEYYMNQWQUGVHBMGSFQUREJCDHWZFNZLS");

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
    msg.setTimeStamp(0.3018243866985847);
    msg.setSource(11510U);
    msg.setSourceEntity(124U);
    msg.setDestination(62885U);
    msg.setDestinationEntity(171U);
    msg.timeout = 5097U;
    msg.lat = 0.09296031286224382;
    msg.lon = 0.02046745087101831;
    msg.z = 0.2938238993903529;
    msg.z_units = 169U;
    msg.speed = 0.5573807192949145;
    msg.speed_units = 64U;
    msg.duration = 13624U;
    msg.radius = 0.2569130379224307;
    msg.flags = 31U;
    msg.custom.assign("DOCWOTPYSQPKLHQZMZJHAKERPXJWXUQHEVFTYLBIEYGZVBFFMOIINZFVCKVECEDFUJBXCFRQBNCSGUKNQRWOOXVXLNKODXQFEUSIVNQLUTJCBEQGUZPFARPMUGRBXXGMBRYAHTMJSYHRFMGTZXIKGBISATMDA");

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
    msg.setTimeStamp(0.8879887369408037);
    msg.setSource(43126U);
    msg.setSourceEntity(181U);
    msg.setDestination(10284U);
    msg.setDestinationEntity(254U);
    msg.timeout = 43386U;
    msg.lat = 0.7859359105747091;
    msg.lon = 0.3136404596309549;
    msg.z = 0.4846540283875993;
    msg.z_units = 78U;
    msg.speed = 0.3641874909484121;
    msg.speed_units = 89U;
    msg.duration = 10860U;
    msg.radius = 0.2537926268149996;
    msg.flags = 16U;
    msg.custom.assign("RJGRLQQEKOEKBEDYBANMJRUITGINSFSMYMASKDWZPHFLLVAOZYXTQYDCTRVYMFWNDBDUSEJBTZADTZXSHVJQQUDAGDNAFGKQBPECEZFURCNWZLLGZMQPOTUCGGPMFZPWVUXYMAREQMYNSUIHXVRWOVAKCBJHKIFTJOJXOUIRHTVWPJNPFISLKMFRGCIIOWNYXUQLLIOVXGLCBACBUODWCJSRVCNVYPFKHAJMWPXBTSYHXNSPIBQZDHZOWKT");

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
    msg.setTimeStamp(0.8420868626907637);
    msg.setSource(5491U);
    msg.setSourceEntity(237U);
    msg.setDestination(6262U);
    msg.setDestinationEntity(59U);
    msg.timeout = 2184U;
    msg.lat = 0.5497902143099697;
    msg.lon = 0.9261072121019068;
    msg.z = 0.03295754210255197;
    msg.z_units = 124U;
    msg.speed = 0.763427665927915;
    msg.speed_units = 104U;
    msg.duration = 5924U;
    msg.radius = 0.04036643125747552;
    msg.flags = 31U;
    msg.custom.assign("WFSMHKHKCOHVMREEYRAXLTNWVHYECCPITDMEWJTSOOCSPKBRCOYDKLBAUSQKMXHOIQLKIJDJMEARSRJNZDPWTMEICXPF");

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
    msg.setTimeStamp(0.9703082663601933);
    msg.setSource(56999U);
    msg.setSourceEntity(82U);
    msg.setDestination(46728U);
    msg.setDestinationEntity(166U);
    msg.custom.assign("EOHWETVAJHODPPVKDKIUZVKQGZNAZHBRBRCCFZLJSQUEJMEMWIKRIWXBUBANDSPLFOWBGAFIXJZTMYCUILVMCCVQJXXDGETDSLSYOKMMVTYKZGGFHBNKHXNBDEUFWHFPAAYWPQSBGCFFVSTWUDRXHNGPZKORGJYPENVUUJNDUXRICEHOZILJNSEIWQSPQMQLUJLQZYXSAXYCMGORCKHTVQLJDTAIGYNPTPRLDKHCTWMOYAMWQAYT");

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
    msg.setTimeStamp(0.3473091685004306);
    msg.setSource(54640U);
    msg.setSourceEntity(247U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(36U);
    msg.custom.assign("SMMBBRTMNMCQXIQJBLRERQEPADEOZARJNVPDKMWGXTVGENSYLWIJJAMNHSOCCHEJSBPAYOWD");

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
    msg.setTimeStamp(0.43218037358195116);
    msg.setSource(4022U);
    msg.setSourceEntity(70U);
    msg.setDestination(29750U);
    msg.setDestinationEntity(121U);
    msg.custom.assign("APUFRNRSVZLPHDYFCRBBQDOMKOTENNWOPMXRDYIQBHKCXRCPEKNOFUJVVHAZOHJHFPUKSXZLMGGXEYSUQIEAZLSDIHGOALOUIZABRCUAGTVYTMYCWPCWAQ");

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
    msg.setTimeStamp(0.5769223990002333);
    msg.setSource(48972U);
    msg.setSourceEntity(141U);
    msg.setDestination(47003U);
    msg.setDestinationEntity(116U);
    msg.timeout = 10409U;
    msg.lat = 0.4338156323075062;
    msg.lon = 0.07861778436667954;
    msg.z = 0.6384551857357075;
    msg.z_units = 236U;
    msg.duration = 45789U;
    msg.speed = 0.6373892733978109;
    msg.speed_units = 185U;
    msg.type = 115U;
    msg.radius = 0.3162967623088525;
    msg.length = 0.43478056956501165;
    msg.bearing = 0.7855069655699068;
    msg.direction = 72U;
    msg.custom.assign("HUZCBGZAYBVSXMGCUJVGNAPCCYKXROZFUWQRLXUQTRTZTOYSXQNHXAZFROWFRUSBAOPLANNEKSIIFKBPATINTHDYEUUUXBYEWMPOFYSQIXMADPJKRKPSMVZETGRWXWIDVEJLRZSDJOPNIRPIMMXICOPKXHQNNHELEMJHCDKQCKVCGQCDTPBQUGOSLDLUSBJLVNQEMVTAFWFEDFAJVRLWVJ");

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
    msg.setTimeStamp(0.2842980190722736);
    msg.setSource(17179U);
    msg.setSourceEntity(90U);
    msg.setDestination(52187U);
    msg.setDestinationEntity(234U);
    msg.timeout = 4623U;
    msg.lat = 0.8219457297945366;
    msg.lon = 0.047342207358750166;
    msg.z = 0.6974406157250761;
    msg.z_units = 151U;
    msg.duration = 775U;
    msg.speed = 0.9669600376658067;
    msg.speed_units = 239U;
    msg.type = 43U;
    msg.radius = 0.23502619709413353;
    msg.length = 0.839849447424737;
    msg.bearing = 0.46914313654161743;
    msg.direction = 53U;
    msg.custom.assign("AXVEPEJBNLTJGZYASNFAXIYOMHUTJFVFWMXTENYMWKSMRSXWXFVIMKTKPZGDZRZVDNQBURVPXSZZACHUUTELSLGGRDGUJWKRIDOGDOFOADKRJYHVSJRHI");

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
    msg.setTimeStamp(0.9805864788703197);
    msg.setSource(51544U);
    msg.setSourceEntity(206U);
    msg.setDestination(61056U);
    msg.setDestinationEntity(144U);
    msg.timeout = 41764U;
    msg.lat = 0.018312040822877296;
    msg.lon = 0.6797108467383164;
    msg.z = 0.94071166395171;
    msg.z_units = 134U;
    msg.duration = 13461U;
    msg.speed = 0.2286463865493945;
    msg.speed_units = 15U;
    msg.type = 109U;
    msg.radius = 0.16185915819931962;
    msg.length = 0.8911461312172586;
    msg.bearing = 0.02039180607331459;
    msg.direction = 134U;
    msg.custom.assign("TIXNHFUDCAGNTILCQDFCGBGVOSORQXBPPZXZYCWUKMFUCRDWPVJQEIHHOOSJRJKBDYQBYHSZHUDASJHQRTNANJSKEMUASGGEOEWALTVWTHNLRAWMGAFSLUQHPOFXSPTQUSGVXJBBVLZYBWMCWMPLNXEMOYMKEIDPPVELRTCTKIWJOWKNJKYNUKIAYAFIG");

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
    msg.setTimeStamp(0.48210970769923134);
    msg.setSource(59800U);
    msg.setSourceEntity(113U);
    msg.setDestination(64349U);
    msg.setDestinationEntity(166U);
    msg.duration = 64691U;
    msg.custom.assign("KLBWCDFKPUONOJUNVVWTTDZHUAZCJOSXBMBZXNRJAQITJTVGIBVWAIWSVTRXYXLSLPTPLRXUMXNEDGVYHLCUOFAKVILNLFBMXKOFFGIYHSJALFGGSQPYPPCQZFALOCBGVWRACUPSESMORYPMUSPKIGXTJMEWZQUEUVKYGEUWCHOBDXKOJLAJHZZSHMJQNNYWDNTFGZHRCWWRRKBJXDNMQEEZVEORY");

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
    msg.setTimeStamp(0.3045758731730436);
    msg.setSource(20524U);
    msg.setSourceEntity(55U);
    msg.setDestination(19744U);
    msg.setDestinationEntity(41U);
    msg.duration = 35980U;
    msg.custom.assign("WSCFUZFUCHBJITONUIRJDPRKFIAWJCELQUDGTJ");

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
    msg.setTimeStamp(0.3923789618957817);
    msg.setSource(32370U);
    msg.setSourceEntity(208U);
    msg.setDestination(55722U);
    msg.setDestinationEntity(73U);
    msg.duration = 26724U;
    msg.custom.assign("YTTYPSQPENHASNPBYMWGFZLEUKXOVWXOPZRYXQYSZTJLQLXHOLLNHSDJDRMIXKNBUVCEMVRQCFSCIHBZMDWJCIJXVAWZBPBIPZUSWAHFZQQNBSKA");

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
    msg.setTimeStamp(0.9859437942009183);
    msg.setSource(21716U);
    msg.setSourceEntity(19U);
    msg.setDestination(24929U);
    msg.setDestinationEntity(239U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.08123208127393089;
    msg.control.set(tmp_msg_0);
    msg.duration = 30706U;
    msg.custom.assign("PUWSQJLSFQWNHRKIPQSJZNKFVOVOSCYADGPRXKCSGUJSNLIGLUHQKVWRMEBZPYDSEJBBEXYUSVPIKFQXXZMDQZMBGFEFRVCFNPCOETHMYBJBEVMZCPRAYAOKAIIMBXYBOOFWYKJWRJZQVXZGETCUUTNJFGIAHMVUYUTBI");

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
    msg.setTimeStamp(0.5822099498989195);
    msg.setSource(9355U);
    msg.setSourceEntity(12U);
    msg.setDestination(14368U);
    msg.setDestinationEntity(13U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.47199818436980323;
    msg.control.set(tmp_msg_0);
    msg.duration = 19583U;
    msg.custom.assign("UJKDLXHZOHNUNNNATERDALIAYZRUEMHYMDFGNNXOQXDYRCQRWNTYWKKHULEFEBRQVLWWUAZSPSLYVTAMFUJAKVMAKPRKHUZFXXTGRIOSIMJCNVJSWBVKCVGPCALQOFBCVNFOXYSJSPJPZXTIPYGJOTIOLZFYSOLCEBSQSMIRIYGTGXSMKTDHWAJBIPFQAGCMIGUMEMFHCTPZGBLHPDWWUKVOBNHRUHDDZJEEQDZW");

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
    msg.setTimeStamp(0.36450033074163046);
    msg.setSource(61057U);
    msg.setSourceEntity(20U);
    msg.setDestination(29080U);
    msg.setDestinationEntity(161U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5148696788681434;
    tmp_msg_0.speed_units = 40U;
    msg.control.set(tmp_msg_0);
    msg.duration = 57936U;
    msg.custom.assign("RIROPFZHYOHNZOTXEVMYSKIJTWEPPXXYCOLZEZSQVPYIUEBIQCEKFKDBUIMLJBZEHGKRKCHPULSNSROIYKWLCVOBXCYEBRL");

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
    msg.setTimeStamp(0.7436110853884645);
    msg.setSource(64181U);
    msg.setSourceEntity(151U);
    msg.setDestination(40293U);
    msg.setDestinationEntity(183U);
    msg.timeout = 62999U;
    msg.lat = 0.6140789211543795;
    msg.lon = 0.10774612909342829;
    msg.z = 0.9290852327828124;
    msg.z_units = 43U;
    msg.speed = 0.5520080952241552;
    msg.speed_units = 126U;
    msg.bearing = 0.05541445843618853;
    msg.cross_angle = 0.7646987433708551;
    msg.width = 0.8757003612221406;
    msg.length = 0.6212111244040769;
    msg.hstep = 0.28233875008201426;
    msg.coff = 56U;
    msg.alternation = 60U;
    msg.flags = 168U;
    msg.custom.assign("JFDYUZAIPARFSJXDVASCRAIDYMJKZZKXJBITMIPQGRWHOKWMZWYZBBOWSMIMNEQVJHSQUOEBRECLMCRAUBPXHXPHEHGSLLFGKWLMRNNWOA");

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
    msg.setTimeStamp(0.2412290913711579);
    msg.setSource(8078U);
    msg.setSourceEntity(99U);
    msg.setDestination(15424U);
    msg.setDestinationEntity(216U);
    msg.timeout = 1509U;
    msg.lat = 0.12247399953777582;
    msg.lon = 0.8415076042679362;
    msg.z = 0.8520483219055602;
    msg.z_units = 53U;
    msg.speed = 0.5333544735130366;
    msg.speed_units = 224U;
    msg.bearing = 0.20154888577655627;
    msg.cross_angle = 0.4631621709786752;
    msg.width = 0.3315134921600482;
    msg.length = 0.007651862604450055;
    msg.hstep = 0.603211196461732;
    msg.coff = 7U;
    msg.alternation = 83U;
    msg.flags = 51U;
    msg.custom.assign("FAQDEMKHMVCFVWLRKXGUXIMPKYXWNUCQCCXOCCZVNKAGWZXDRIRUTFOKSHLJCJQRELBIQYIBXBNHPEVUPITQKEWPDQGWSVDHGWKMODDGFLBLHXSVCRRLJHPBNEVHGPQMZJMCYIPUEKYODNXPRYPBHQDWTJEHZNAYOSAFJMEURFLANSNWWUCEMGYNXZJKEVBFGSLOYZQZBOLIRAIFYXSJUVTTTAGJMOBLYDPSJOZFNOSAG");

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
    msg.setTimeStamp(0.20473868728772926);
    msg.setSource(49903U);
    msg.setSourceEntity(153U);
    msg.setDestination(30178U);
    msg.setDestinationEntity(79U);
    msg.timeout = 397U;
    msg.lat = 0.5521559046704405;
    msg.lon = 0.6594384551452981;
    msg.z = 0.8355332307297317;
    msg.z_units = 178U;
    msg.speed = 0.09481583702952334;
    msg.speed_units = 80U;
    msg.bearing = 0.2939563096044264;
    msg.cross_angle = 0.8614871208565171;
    msg.width = 0.6888995419638467;
    msg.length = 0.3639962309755006;
    msg.hstep = 0.06384310541747151;
    msg.coff = 120U;
    msg.alternation = 245U;
    msg.flags = 233U;
    msg.custom.assign("BOLQFZHCTIMFESNVAJUFGRZRLDOMDJTCSZTQCGUICVNPRECHXYIJNVDTICFFBZIJWXMQWIBKEFUOLRKIS");

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
    msg.setTimeStamp(0.5118017722005483);
    msg.setSource(60510U);
    msg.setSourceEntity(45U);
    msg.setDestination(51142U);
    msg.setDestinationEntity(115U);
    msg.timeout = 28209U;
    msg.lat = 0.7044795639198584;
    msg.lon = 0.2920439980848215;
    msg.z = 0.6064251121504883;
    msg.z_units = 53U;
    msg.speed = 0.4970492204912109;
    msg.speed_units = 70U;
    msg.custom.assign("LWIGSYKPPQZMHFGVLBLAAKRFFRFAZZNQXIZAERTJJACFKKEKTTSUDIJASOQPDZAQLDFPHIMNKXIUVZPYCCCWKF");

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
    msg.setTimeStamp(0.6395819133962084);
    msg.setSource(11471U);
    msg.setSourceEntity(78U);
    msg.setDestination(53659U);
    msg.setDestinationEntity(25U);
    msg.timeout = 57270U;
    msg.lat = 0.11121199142814808;
    msg.lon = 0.06578517166971365;
    msg.z = 0.24504914018143176;
    msg.z_units = 220U;
    msg.speed = 0.2949807303437013;
    msg.speed_units = 245U;
    msg.custom.assign("DCOTNCOQPMHCSERTFICEXRAFFCVEALXKPSWKHKKHSPCPYCKMAOPJDBUDGZLRGBOXNIPTFICUIQRROUKJKNCUIERQGZAAEKDMNBEMZSOBATWVQHNLYJFSUZFCYSFABINNPEWDAMDWTUUTGRXVSHHZYHTGPOXYTVTBFUBVYGTJHDUNSZLHDQWFVI");

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
    msg.setTimeStamp(0.2822864814073285);
    msg.setSource(29577U);
    msg.setSourceEntity(192U);
    msg.setDestination(1094U);
    msg.setDestinationEntity(154U);
    msg.timeout = 51054U;
    msg.lat = 0.916662772017378;
    msg.lon = 0.09100402117761286;
    msg.z = 0.05705337052103221;
    msg.z_units = 147U;
    msg.speed = 0.220486500034065;
    msg.speed_units = 51U;
    msg.custom.assign("GWQTCVWNXUBUCDJRWBWVRJSQUQAKNHQAEPGCCDAGSZXFEILTRCOADRSMPKXMXFEHRCQNEELUPHGZ");

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
    msg.setTimeStamp(0.04998931726585276);
    msg.setSource(50272U);
    msg.setSourceEntity(146U);
    msg.setDestination(10922U);
    msg.setDestinationEntity(16U);
    msg.x = 0.658504320475475;
    msg.y = 0.5941315960811421;
    msg.z = 0.7847625981831544;

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
    msg.setTimeStamp(0.30879046881987227);
    msg.setSource(15090U);
    msg.setSourceEntity(17U);
    msg.setDestination(19131U);
    msg.setDestinationEntity(225U);
    msg.x = 0.09573565083164426;
    msg.y = 0.7271465168412086;
    msg.z = 0.4283357297302888;

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
    msg.setTimeStamp(0.9547905346276154);
    msg.setSource(2443U);
    msg.setSourceEntity(253U);
    msg.setDestination(58338U);
    msg.setDestinationEntity(181U);
    msg.x = 0.13686310806549096;
    msg.y = 0.0012610394715666384;
    msg.z = 0.9893131594971212;

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
    msg.setTimeStamp(0.7976414505768968);
    msg.setSource(28745U);
    msg.setSourceEntity(74U);
    msg.setDestination(6885U);
    msg.setDestinationEntity(134U);
    msg.timeout = 17722U;
    msg.lat = 0.7602859714184484;
    msg.lon = 0.23587009718174323;
    msg.z = 0.7558427224236551;
    msg.z_units = 62U;
    msg.amplitude = 0.855231359350823;
    msg.pitch = 0.38499552995441066;
    msg.speed = 0.964703138001281;
    msg.speed_units = 41U;
    msg.custom.assign("UWTNLPKIXPMCZHALYPTQSSEJHBRUINEXTBOCKUCRFSIODGLJDSXYBPQTAHYNHCGFKTEIKFLSKQITEZJJPELOH");

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
    msg.setTimeStamp(0.7997248173175947);
    msg.setSource(13719U);
    msg.setSourceEntity(78U);
    msg.setDestination(37261U);
    msg.setDestinationEntity(208U);
    msg.timeout = 49081U;
    msg.lat = 0.3874408092038193;
    msg.lon = 0.09062482931546767;
    msg.z = 0.9964736956570307;
    msg.z_units = 199U;
    msg.amplitude = 0.8516086464632826;
    msg.pitch = 0.7703159860255253;
    msg.speed = 0.5807886421968089;
    msg.speed_units = 109U;
    msg.custom.assign("PTNOZYDCRLBIEAESZOGQYFTMKQNYXBFATVMCIZOWQFMAHPSACPQLE");

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
    msg.setTimeStamp(0.2608280686560964);
    msg.setSource(58564U);
    msg.setSourceEntity(12U);
    msg.setDestination(47182U);
    msg.setDestinationEntity(216U);
    msg.timeout = 7462U;
    msg.lat = 0.19103508870991903;
    msg.lon = 0.9098312967543108;
    msg.z = 0.17600678536822734;
    msg.z_units = 165U;
    msg.amplitude = 0.7650763622915505;
    msg.pitch = 0.8163295087457847;
    msg.speed = 0.6174048674270265;
    msg.speed_units = 178U;
    msg.custom.assign("HDOZFBOTSHVZFPZWRSYJEGYNDBTWIMJALQFUJAPFOBETEVJEOADPLHSTPXQLXZHFOWSSWRESLXCVCACWYBJVKYKXBMVRBRZFUXCUGGQZGHLUFDKACMMRBELWTUWOLR");

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
    msg.setTimeStamp(0.05895296057945554);
    msg.setSource(36092U);
    msg.setSourceEntity(192U);
    msg.setDestination(27487U);
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
    msg.setTimeStamp(0.07836099859018886);
    msg.setSource(62895U);
    msg.setSourceEntity(141U);
    msg.setDestination(14350U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.9424911844115945);
    msg.setSource(12610U);
    msg.setSourceEntity(211U);
    msg.setDestination(29460U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.9924608662660668);
    msg.setSource(19811U);
    msg.setSourceEntity(51U);
    msg.setDestination(19937U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.026309408059061234;
    msg.lon = 0.2938012140657764;
    msg.z = 0.10324695028181896;
    msg.z_units = 65U;
    msg.radius = 0.47968041035513154;
    msg.duration = 28724U;
    msg.speed = 0.8540990421506122;
    msg.speed_units = 113U;
    msg.custom.assign("SLSMIEKNAXSOPDTANXFSMBIYBLCJZHORSYSYAPGXUCOGZWLJWKQECVPKCQJZJTFBFWHSEILFFJLYUIGQZWZZUDMWGMAUA");

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
    msg.setTimeStamp(0.8082117957409238);
    msg.setSource(58100U);
    msg.setSourceEntity(105U);
    msg.setDestination(41342U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.2367392571727236;
    msg.lon = 0.45514907770027957;
    msg.z = 0.4031227989530275;
    msg.z_units = 175U;
    msg.radius = 0.5385385271844397;
    msg.duration = 31757U;
    msg.speed = 0.8439654857071118;
    msg.speed_units = 66U;
    msg.custom.assign("JIMTXQFRZHAEDLWBMVEJKIUANEXZSIVMNYDTHPFMENUVJKTAVUBMDWJCPSCWFKSFGPUQSOPMTYFNQIQCFNXOLRKWBLDWTZIDOLYGOCUIJLBYPXXPJJXFPLBVOGMDXMQJHWWSQHBCZGDCOSSDQVTGNRCQYIDKWTQFEVMHGLYPGNAGYSZLBSHAIVRUTUYJBZILRFRZAXIU");

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
    msg.setTimeStamp(0.44898791002797966);
    msg.setSource(28641U);
    msg.setSourceEntity(21U);
    msg.setDestination(31412U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.2669827486306505;
    msg.lon = 0.3515782214525449;
    msg.z = 0.9341605474817267;
    msg.z_units = 116U;
    msg.radius = 0.9963740114681927;
    msg.duration = 56312U;
    msg.speed = 0.36737475651790186;
    msg.speed_units = 59U;
    msg.custom.assign("FREZCVIGREYXTKEOAYABWRSEICAVOBDXNPFOMCTJXMYNIQAZGU");

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
    msg.setTimeStamp(0.3664212975872919);
    msg.setSource(35969U);
    msg.setSourceEntity(196U);
    msg.setDestination(63561U);
    msg.setDestinationEntity(251U);
    msg.timeout = 56515U;
    msg.flags = 16U;
    msg.lat = 0.506954735513174;
    msg.lon = 0.08548184598305975;
    msg.start_z = 0.7248135119706771;
    msg.start_z_units = 68U;
    msg.end_z = 0.4093250090227901;
    msg.end_z_units = 16U;
    msg.radius = 0.6563160078882397;
    msg.speed = 0.547474077561787;
    msg.speed_units = 17U;
    msg.custom.assign("CLPNZQGTRFHMRSJSTCYJOMAITCOYVGJTFWDUPNRGYEBUDIPNTKGXWXSVULGUHJPPZSRWUEZVQRHRYTVSPXNIATOLFHMCBWQIXKNOJPYMVWTWKYAYJIOALKPUEVQKQDEYFGMZOCDTRGYEDNMCXFHZBNGAIINLFHCZAAQPFWOZBSZOFMGUDLRHKPBEQISTMOBRJDXNVLEEWBKJZQVGSIXLBDAHIOSKEDJVCULFQFVWMUJDKEBXCCSYWNRAMXLHQ");

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
    msg.setTimeStamp(0.17036489120777276);
    msg.setSource(39571U);
    msg.setSourceEntity(86U);
    msg.setDestination(47750U);
    msg.setDestinationEntity(143U);
    msg.timeout = 50939U;
    msg.flags = 223U;
    msg.lat = 0.17088811545079396;
    msg.lon = 0.8918658565249709;
    msg.start_z = 0.291046417273532;
    msg.start_z_units = 145U;
    msg.end_z = 0.20837802496478885;
    msg.end_z_units = 89U;
    msg.radius = 0.06363719360570275;
    msg.speed = 0.311066328033733;
    msg.speed_units = 215U;
    msg.custom.assign("BFLNMMPRWGXQERNCYDLBYVAHHTWBWJVBNDNWYXVZFEYKKQCGIRFNKTLERPXAJCWHTSPVFIWTSKHZZEAUCVBDHZLOTTBPMDALUJJIPBZGDRQJWSGMRJXFHGCDSLMLYTDUNQOVIQIXGEEORQTVPZALUUOWYRKIPIWKSFADOADDAEEKZXO");

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
    msg.setTimeStamp(0.7642173627844325);
    msg.setSource(49053U);
    msg.setSourceEntity(205U);
    msg.setDestination(15990U);
    msg.setDestinationEntity(72U);
    msg.timeout = 60356U;
    msg.flags = 13U;
    msg.lat = 0.8956815719625504;
    msg.lon = 0.9196168738078454;
    msg.start_z = 0.620966490346981;
    msg.start_z_units = 214U;
    msg.end_z = 0.006651231245753286;
    msg.end_z_units = 163U;
    msg.radius = 0.09115171528056376;
    msg.speed = 0.8284069772673798;
    msg.speed_units = 64U;
    msg.custom.assign("OOKHKHSSNVPDVOTOVIIQKGTIHKHSXBJVAWFEGELRPCRBNUPWZSQRAGTTNTQFTKZIFWRAWJS");

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
    msg.setTimeStamp(0.42848773186046607);
    msg.setSource(7882U);
    msg.setSourceEntity(168U);
    msg.setDestination(38326U);
    msg.setDestinationEntity(69U);
    msg.timeout = 22488U;
    msg.lat = 0.1355291138152993;
    msg.lon = 0.17586264362345128;
    msg.z = 0.8277387129223683;
    msg.z_units = 244U;
    msg.speed = 0.2793950923033899;
    msg.speed_units = 250U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3358537196941874;
    tmp_msg_0.y = 0.5573416753872976;
    tmp_msg_0.z = 0.4299848431769231;
    tmp_msg_0.t = 0.08085539171054179;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QLUDALVGXWGBKHFRZDDZGIUJAOSIHEASWFFWTVWGCROAR");

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
    msg.setTimeStamp(0.4022824988654238);
    msg.setSource(33193U);
    msg.setSourceEntity(93U);
    msg.setDestination(51809U);
    msg.setDestinationEntity(33U);
    msg.timeout = 33379U;
    msg.lat = 0.27593330624652457;
    msg.lon = 0.45369218985699744;
    msg.z = 0.15188499766567043;
    msg.z_units = 85U;
    msg.speed = 0.6646138567832505;
    msg.speed_units = 231U;
    msg.custom.assign("IUUFDTRLPQDWOLWTRDHVSVXATRUCOAXWYSIZHBXMWBWSNEVCJQRXCYR");

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
    msg.setTimeStamp(0.4030675570555514);
    msg.setSource(304U);
    msg.setSourceEntity(95U);
    msg.setDestination(5391U);
    msg.setDestinationEntity(88U);
    msg.timeout = 55447U;
    msg.lat = 0.4532648733015674;
    msg.lon = 0.06680844475695047;
    msg.z = 0.4393010756532293;
    msg.z_units = 73U;
    msg.speed = 0.4381843858787111;
    msg.speed_units = 119U;
    msg.custom.assign("MSBTCNKKQKWRYTAHYFJNZRHCIEXAVSVUOQEKFMPTRYXPVYKYVUJZOOEUIUWHBJVDBZRDRIV");

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
    msg.setTimeStamp(0.8359553784786627);
    msg.setSource(10840U);
    msg.setSourceEntity(237U);
    msg.setDestination(21771U);
    msg.setDestinationEntity(186U);
    msg.x = 0.3202850515138599;
    msg.y = 0.18683507404387167;
    msg.z = 0.39412941587522554;
    msg.t = 0.07196917730841745;

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
    msg.setTimeStamp(0.4257499911341458);
    msg.setSource(55931U);
    msg.setSourceEntity(150U);
    msg.setDestination(4201U);
    msg.setDestinationEntity(101U);
    msg.x = 0.10096000399214022;
    msg.y = 0.8196860303248952;
    msg.z = 0.2976320897345115;
    msg.t = 0.17670137086419957;

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
    msg.setTimeStamp(0.9774075729966064);
    msg.setSource(37737U);
    msg.setSourceEntity(214U);
    msg.setDestination(9447U);
    msg.setDestinationEntity(117U);
    msg.x = 0.9129649657980354;
    msg.y = 0.5725312713162412;
    msg.z = 0.6010345923857171;
    msg.t = 0.1377843795134991;

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
    msg.setTimeStamp(0.4351885550361986);
    msg.setSource(35099U);
    msg.setSourceEntity(19U);
    msg.setDestination(17386U);
    msg.setDestinationEntity(179U);
    msg.timeout = 29869U;
    msg.name.assign("RKLHLBNYLANPBPWYOPCSWZSTPDRJEDZIKAUOTVKB");
    msg.custom.assign("IEPCQYAMQVEGLAEXK");

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
    msg.setTimeStamp(0.8254002316626452);
    msg.setSource(27710U);
    msg.setSourceEntity(18U);
    msg.setDestination(45587U);
    msg.setDestinationEntity(59U);
    msg.timeout = 56515U;
    msg.name.assign("KYFZGORMAQWQUSMVZTWTQOWRFYGOJCNDDZSPENPZOLPCFYFYXIKLCXJMFRAGHXUKBWEDKWTNIUHIGIP");
    msg.custom.assign("VGOHMJIAKTXPIBKLHVAXBOVLIEIANWJCIJPPVUYNQTDHYGNLTVWOSSEFZSRZQBMKSKIYUFYVQZRCHUHOFLKPHMP");

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
    msg.setTimeStamp(0.6694271968655164);
    msg.setSource(64016U);
    msg.setSourceEntity(137U);
    msg.setDestination(461U);
    msg.setDestinationEntity(87U);
    msg.timeout = 14150U;
    msg.name.assign("LQZRJEXJGYYICOKAYLSRLKHNJMNCIOQHXSOVDWRTUFYQXSSGKBAITBACNYUDAKUKPEFBNOQBHGBGWDVMIQEWNCRFQFIMWUGQWBCVGEZTPGRGOFXLJ");
    msg.custom.assign("BOUGIZCKEHGUSKAAPVOXQAEUHRMWGTIXVFPROEQKJNZWZKPFMHWTTJWBUUIPPPNIBAYQJEQRVSULQWSUYDXBNQMYZEKOEJU");

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
    msg.setTimeStamp(0.15997552399702097);
    msg.setSource(29806U);
    msg.setSourceEntity(112U);
    msg.setDestination(40313U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.285457053250766;
    msg.lon = 0.33596359657368646;
    msg.z = 0.9243410252289739;
    msg.z_units = 66U;
    msg.speed = 0.8351407996981342;
    msg.speed_units = 38U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14919U;
    tmp_msg_0.off_x = 0.3490402642717051;
    tmp_msg_0.off_y = 0.28390537288864093;
    tmp_msg_0.off_z = 0.33587485788429683;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5161072835305194;
    msg.custom.assign("YJVERWLCZOCNNGEKAVDBOUVLTRCSZUXUXLDYXXOLPRWUBSBOOXRZHKIYGCHIJQKUMIWWSUFAHFLGFIDGFGDJDZKYGTCTEGHXMIFNGLKMPJQWYRVCVFVUNAKZSAHVAHRMRYQEUQCIDBIDKXIMNBKSQNYKPMWRKMDVAZVTMZTHTWZSUZHQEXYOMWISBBQOCFELNZCPJGOTQNVPYHDINGLMECLRJJ");

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
    msg.setTimeStamp(0.6875334709487472);
    msg.setSource(43496U);
    msg.setSourceEntity(61U);
    msg.setDestination(40078U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.3940581190414616;
    msg.lon = 0.02395112026092061;
    msg.z = 0.2409329064713005;
    msg.z_units = 34U;
    msg.speed = 0.6345148538290327;
    msg.speed_units = 203U;
    msg.start_time = 0.8772678792597971;
    msg.custom.assign("KDEQOEKMWYZBDTFBDHMCMGLGFVKUUTRFQMD");

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
    msg.setTimeStamp(0.1376966281070101);
    msg.setSource(62780U);
    msg.setSourceEntity(111U);
    msg.setDestination(6148U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.314220302620256;
    msg.lon = 0.5695085585167088;
    msg.z = 0.17284329582476377;
    msg.z_units = 163U;
    msg.speed = 0.5519606554974584;
    msg.speed_units = 226U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.40010704763643723;
    tmp_msg_0.y = 0.2924401872023139;
    tmp_msg_0.z = 0.6507892862011462;
    tmp_msg_0.t = 0.047675340273974465;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5393279453683323;
    msg.custom.assign("KADZUVKQHHXCJCWFFVZBXDGQRJIASKNOPAUNCTTOMNQBHAC");

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
    msg.setTimeStamp(0.16907393005528937);
    msg.setSource(17669U);
    msg.setSourceEntity(179U);
    msg.setDestination(39698U);
    msg.setDestinationEntity(119U);
    msg.vid = 19487U;
    msg.off_x = 0.8904007741810028;
    msg.off_y = 0.6089284752352447;
    msg.off_z = 0.40979494574346154;

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
    msg.setTimeStamp(0.0427826773137594);
    msg.setSource(23597U);
    msg.setSourceEntity(128U);
    msg.setDestination(29082U);
    msg.setDestinationEntity(51U);
    msg.vid = 35120U;
    msg.off_x = 0.0712638638795352;
    msg.off_y = 0.92474730527898;
    msg.off_z = 0.5297371745372963;

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
    msg.setTimeStamp(0.9484221603731671);
    msg.setSource(25814U);
    msg.setSourceEntity(187U);
    msg.setDestination(33649U);
    msg.setDestinationEntity(196U);
    msg.vid = 22608U;
    msg.off_x = 0.6743129079556935;
    msg.off_y = 0.21100573339721374;
    msg.off_z = 0.6940417238793054;

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
    msg.setTimeStamp(0.700190643991553);
    msg.setSource(43203U);
    msg.setSourceEntity(50U);
    msg.setDestination(6609U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.31676526592795295);
    msg.setSource(10927U);
    msg.setSourceEntity(130U);
    msg.setDestination(19412U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.8560941780237945);
    msg.setSource(51109U);
    msg.setSourceEntity(53U);
    msg.setDestination(13415U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.7111801709630923);
    msg.setSource(33994U);
    msg.setSourceEntity(89U);
    msg.setDestination(11488U);
    msg.setDestinationEntity(22U);
    msg.mid = 31350U;

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
    msg.setTimeStamp(0.06842708842746625);
    msg.setSource(39330U);
    msg.setSourceEntity(240U);
    msg.setDestination(52015U);
    msg.setDestinationEntity(113U);
    msg.mid = 29489U;

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
    msg.setTimeStamp(0.3223797610706478);
    msg.setSource(59124U);
    msg.setSourceEntity(108U);
    msg.setDestination(43996U);
    msg.setDestinationEntity(105U);
    msg.mid = 23950U;

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
    msg.setTimeStamp(0.03678373350155717);
    msg.setSource(46613U);
    msg.setSourceEntity(67U);
    msg.setDestination(3887U);
    msg.setDestinationEntity(204U);
    msg.state = 106U;
    msg.eta = 12358U;
    msg.info.assign("WVPMGRMNCARRFNBISMX");

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
    msg.setTimeStamp(0.7033004431192539);
    msg.setSource(56434U);
    msg.setSourceEntity(165U);
    msg.setDestination(30671U);
    msg.setDestinationEntity(183U);
    msg.state = 36U;
    msg.eta = 16268U;
    msg.info.assign("FANDPHRGMFNLWOLOCRQTYGKCXUCKCBXZKWDGYPOOEETQTIPLZSYEYWNCYULVNTMODVRJDUMFYWIELYRNRZVSSFJJNKPEOJYDVMUXBRDHFROPQTHQUUIAPHQNXGHPDXKOZIHIQJEALEKYMZ");

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
    msg.setTimeStamp(0.470098451099886);
    msg.setSource(46560U);
    msg.setSourceEntity(57U);
    msg.setDestination(29315U);
    msg.setDestinationEntity(179U);
    msg.state = 128U;
    msg.eta = 12595U;
    msg.info.assign("BLATFLBVYLQVCBSLROZWXIEXZJCUTCUHSBBEKOXOIQVZAUIIENRTXYHMNSDMGSTWGSNTBCCXCHDDMYCVMMDFNMNKPCREXIRVBNJFKUYHAAZVAFQLNYGFGZQCHGSJWUVPDKIVRHTEAQMWPFOONDJMUYKPJVZMJTNEGIMQJBEKYZPPQDIRGHQBFJKJPFTGTLYSLEFZWKOAAHXQZZRSAGDUSWLDUNQLU");

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
    msg.setTimeStamp(0.7790571492056192);
    msg.setSource(39772U);
    msg.setSourceEntity(125U);
    msg.setDestination(6448U);
    msg.setDestinationEntity(171U);
    msg.system = 29931U;
    msg.duration = 57590U;
    msg.speed = 0.23446934730927604;
    msg.speed_units = 167U;
    msg.x = 0.6778879133736877;
    msg.y = 0.49215786751692825;
    msg.z = 0.9075633291659435;
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
    msg.setTimeStamp(0.827928569816472);
    msg.setSource(14829U);
    msg.setSourceEntity(200U);
    msg.setDestination(51710U);
    msg.setDestinationEntity(127U);
    msg.system = 63285U;
    msg.duration = 26605U;
    msg.speed = 0.7415041164543574;
    msg.speed_units = 25U;
    msg.x = 0.5297581061502238;
    msg.y = 0.6723670174675944;
    msg.z = 0.7364754268412504;
    msg.z_units = 114U;

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
    msg.setTimeStamp(0.01352933020308189);
    msg.setSource(26949U);
    msg.setSourceEntity(45U);
    msg.setDestination(51806U);
    msg.setDestinationEntity(1U);
    msg.system = 25349U;
    msg.duration = 19874U;
    msg.speed = 0.818472474349903;
    msg.speed_units = 253U;
    msg.x = 0.006611914141387953;
    msg.y = 0.9283993103880723;
    msg.z = 0.829996072360947;
    msg.z_units = 200U;

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
    msg.setTimeStamp(0.1716363589244826);
    msg.setSource(20157U);
    msg.setSourceEntity(68U);
    msg.setDestination(36956U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.9981105674701984;
    msg.lon = 0.06346950713367583;
    msg.speed = 0.6005173270176254;
    msg.speed_units = 132U;
    msg.duration = 60788U;
    msg.sys_a = 32716U;
    msg.sys_b = 12670U;
    msg.move_threshold = 0.6209119442645437;

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
    msg.setTimeStamp(0.7166486439315455);
    msg.setSource(5103U);
    msg.setSourceEntity(94U);
    msg.setDestination(39906U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.5651553048807593;
    msg.lon = 0.5013535542776564;
    msg.speed = 0.5069238726664912;
    msg.speed_units = 6U;
    msg.duration = 46699U;
    msg.sys_a = 28435U;
    msg.sys_b = 12630U;
    msg.move_threshold = 0.7122262445225171;

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
    msg.setTimeStamp(0.9584783191580841);
    msg.setSource(59609U);
    msg.setSourceEntity(230U);
    msg.setDestination(23550U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.2925073282772327;
    msg.lon = 0.367816014157909;
    msg.speed = 0.5911756029042785;
    msg.speed_units = 94U;
    msg.duration = 37258U;
    msg.sys_a = 50975U;
    msg.sys_b = 39339U;
    msg.move_threshold = 0.5253469001192849;

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
    msg.setTimeStamp(0.743143201404352);
    msg.setSource(10352U);
    msg.setSourceEntity(34U);
    msg.setDestination(26691U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.14732215257435066;
    msg.lon = 0.7793703471652179;
    msg.z = 0.40730172183469626;
    msg.z_units = 111U;
    msg.speed = 0.20956223915084116;
    msg.speed_units = 171U;
    msg.custom.assign("FQFUQNXLKPUYKOGGEIXQSDDTRGRZXJJJDQMGTYOCMAQRZLWFCUCTMXRCEFZTPODBD");

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
    msg.setTimeStamp(0.20037673486867302);
    msg.setSource(49027U);
    msg.setSourceEntity(214U);
    msg.setDestination(57345U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.5859004950399391;
    msg.lon = 0.30529281252375295;
    msg.z = 0.6292198322408514;
    msg.z_units = 34U;
    msg.speed = 0.18424170831399567;
    msg.speed_units = 82U;
    msg.custom.assign("CKTBQIUQAZDCWROZQHTEKDXZXPSDHMTZCVUGPUJGRVEMJZHGRCFNYEAGRAHTFHDVGBFUEAETIVBWNMKJPVXZVHOTLRSXWOOBLWXPMBQMSBFUPSYELBJZPWNMGHLLTQ");

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
    msg.setTimeStamp(0.49752849178252456);
    msg.setSource(36856U);
    msg.setSourceEntity(182U);
    msg.setDestination(63124U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.7388077149868552;
    msg.lon = 0.9091964792955122;
    msg.z = 0.22970285885837372;
    msg.z_units = 167U;
    msg.speed = 0.1092355347038999;
    msg.speed_units = 166U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7966452168352405;
    tmp_msg_0.lon = 0.48289235362323224;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MBGRMWQOVBEHTFNDGACV");

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
    msg.setTimeStamp(0.39031278897891564);
    msg.setSource(51711U);
    msg.setSourceEntity(34U);
    msg.setDestination(13827U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.8824060759269408;
    msg.lon = 0.46053094753592705;

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
    msg.setTimeStamp(0.7262155994211421);
    msg.setSource(57621U);
    msg.setSourceEntity(112U);
    msg.setDestination(36484U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.08625470557337012;
    msg.lon = 0.90385420572301;

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
    msg.setTimeStamp(0.5828908384642553);
    msg.setSource(5664U);
    msg.setSourceEntity(175U);
    msg.setDestination(1397U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.694390070018173;
    msg.lon = 0.8811772893327142;

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
    msg.setTimeStamp(0.7664226061108438);
    msg.setSource(33020U);
    msg.setSourceEntity(210U);
    msg.setDestination(64479U);
    msg.setDestinationEntity(171U);
    msg.timeout = 15844U;
    msg.lat = 0.025297629198927973;
    msg.lon = 0.343070238481762;
    msg.z = 0.29711521112270856;
    msg.z_units = 112U;
    msg.pitch = 0.048828808974669236;
    msg.amplitude = 0.431284792898351;
    msg.duration = 30489U;
    msg.speed = 0.025534353622216233;
    msg.speed_units = 198U;
    msg.radius = 0.6937684944631942;
    msg.direction = 197U;
    msg.custom.assign("HUIMYHDSPGXYPTVLJSLQWDJBJYWUXLATGKICXMCBGGQEQCBZUMBVFGVOTGXVNFXZTVEKFOUPFDCFRJDAEOPYSMLFYRTOHJMZFCRNNNHSIRSRJQPYZHTBSRHERXIBPKOZFQREMIYPICWQJEYKNCHZ");

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
    msg.setTimeStamp(0.171377539565296);
    msg.setSource(52918U);
    msg.setSourceEntity(123U);
    msg.setDestination(20332U);
    msg.setDestinationEntity(105U);
    msg.timeout = 20832U;
    msg.lat = 0.17751215646119356;
    msg.lon = 0.8819317947813058;
    msg.z = 0.26981625570140066;
    msg.z_units = 6U;
    msg.pitch = 0.12816599847113408;
    msg.amplitude = 0.677700842140988;
    msg.duration = 16853U;
    msg.speed = 0.35807210976619475;
    msg.speed_units = 215U;
    msg.radius = 0.21747917897362223;
    msg.direction = 49U;
    msg.custom.assign("MKSZIZGUTYLNLYWHZRITYWFFZSYPFDUPGAPBUYNDKESNXDWOJCHCLPKNGJLSNAFMBTBPIKNCEVTVDFJVBSTWGXFXRJUEZSEBNCQHCFRIHLMVRHTIDAMAEGABLLOALX");

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
    msg.setTimeStamp(0.59732909482377);
    msg.setSource(27941U);
    msg.setSourceEntity(63U);
    msg.setDestination(50605U);
    msg.setDestinationEntity(176U);
    msg.timeout = 51418U;
    msg.lat = 0.10016961641701838;
    msg.lon = 0.5623383841977471;
    msg.z = 0.031565535193484484;
    msg.z_units = 36U;
    msg.pitch = 0.6147095571632715;
    msg.amplitude = 0.32785981657626406;
    msg.duration = 33383U;
    msg.speed = 0.6451741694475696;
    msg.speed_units = 175U;
    msg.radius = 0.0427009745440694;
    msg.direction = 168U;
    msg.custom.assign("BRVICVAAFTPNHXQYAADQIHTONZFTGPJCLINMPNFXKGCUMKZQFEUTJBVUPNDKWPKIJHGWBLGBT");

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
    msg.setTimeStamp(0.2948719310955866);
    msg.setSource(64949U);
    msg.setSourceEntity(29U);
    msg.setDestination(21951U);
    msg.setDestinationEntity(81U);
    msg.formation_name.assign("WXYJHNFBUGQMLNNOEFXDHTVMRNZUHWFIBVCSYYRQMPAYNLOJMYXMUIVPRGIOMOQAMMLEWWYKKXRZ");
    msg.reference_frame = 18U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27648U;
    tmp_msg_0.off_x = 0.7655573786744916;
    tmp_msg_0.off_y = 0.13508346851376007;
    tmp_msg_0.off_z = 0.879573064336431;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ENYNVVLGTSTEVHLCRYROWAHOXGGAYGBLZCQRURHIXJSFWPKGQDFJFUDDFFOCIOSBHLPCCINKFREQJDYMLMHBQIOCDXAYLVHRAPWWK");

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
    msg.setTimeStamp(0.291789567742334);
    msg.setSource(31447U);
    msg.setSourceEntity(130U);
    msg.setDestination(34959U);
    msg.setDestinationEntity(4U);
    msg.formation_name.assign("KQOVTMNBBACKMHWZHMSXAXQDMMURFCPUILVWWFFNTSZRRAHUTOCPOOYNKYEBILXWGZPUQFZTJQNEDFDGJSXAHJTZMJGEUBQVCXYAS");
    msg.reference_frame = 109U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7393U;
    tmp_msg_0.off_x = 0.8181025786432803;
    tmp_msg_0.off_y = 0.2743194683451786;
    tmp_msg_0.off_z = 0.28712735308022586;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZUOYHVQTVRGNFSLXMXOLRBPIMMCJRPVIREBOUJHEMFDNMZSZCCPTBGRETULDLVAYWDONFIGEJABUKHCQJZDUVJYYESHWBSLFNEGVJDDSLSOVWKDGENSAAHGNCHGNBVKWTPUKKFUWMMXOHWFMZRZAQQFURTYRTLQRDCKPGPBVHPNAXIMYLKEKBSSCYKJBIFWPXHQYMXTYBOJIUORVDNEDXCAWFYIAZZG");

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
    msg.setTimeStamp(0.17281384013275702);
    msg.setSource(64665U);
    msg.setSourceEntity(83U);
    msg.setDestination(17150U);
    msg.setDestinationEntity(109U);
    msg.formation_name.assign("NIFWZXOEDQKCSCXOBQNMPWONODHWXXLTYZPWHMGSPQWENTLYJPARZDUVAJNPSAFBQDRQSSMKVMWXLEANJLOKZMCXDEELGLVUTGCUTLBLIKSAZBMBUCKRNPZXIRQJEQRZYTUCMEFMYOVIHFAQXTUSKRPUPJKVHMDGGWSHCULGJORRJWSVCFOYQVKDTVNERSFMFOOYAIXYIIGHFIRDHCBYVHIQAXTNBGTDVWEBNAUPCZ");
    msg.reference_frame = 57U;
    msg.custom.assign("GKMWBEEFGHRWFVW");

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
    msg.setTimeStamp(0.9747052969301834);
    msg.setSource(35026U);
    msg.setSourceEntity(56U);
    msg.setDestination(2377U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("JSJDYTYONZHPXZIPTRAHLKAFHNSKXDFBVTFOVOAVEADZRKANBVULOYYHDQGBRBCKUOKBRQWGGBTOLOKLPFWYNBXIZEXRATCIDEEYUMUDWQPAPGRXMIBQUKPSCUICCWSMBJEFYMSWVXHSZHJXTAMVTLZCYBKQFYGHTMUZN");
    msg.formation_name.assign("GAWLQUDRKBFMURBXXFNBTPDZWQPILHIBTZOZJEWUOZJKHYPCWHQIGQ");
    msg.plan_id.assign("JFLPZXZFRNHJVFRYNGZQUIUCASABVHGRZUQUTVEY");
    msg.description.assign("BAPBIUCIZQDZZYHDVUEWZJNDUICYDIQZNVHUFTUCJYRBMTOSCDLYWSLZJMNWICVVAKKOPRYHFOKLCEXRESQOERNXSMPGFAKHZFTCELDLRTGQJUGOWHDCOAWOQZVPTXGURDNFVPVPTWHOAJFNKJSWVFXYSGLLYSJFHUBLSKAYGMIXBQNIAGCCDHFPXHEBAUMGKVTRZSQTRWRXLAQWAHZEYLBKMPNPGVETGQTFXMBMSRII");
    msg.leader_speed = 0.4834824917923801;
    msg.leader_bank_lim = 0.12302519412583923;
    msg.pos_sim_err_lim = 0.11322788876472656;
    msg.pos_sim_err_wrn = 0.9565970955791362;
    msg.pos_sim_err_timeout = 13665U;
    msg.converg_max = 0.16442637439127172;
    msg.converg_timeout = 58672U;
    msg.comms_timeout = 21041U;
    msg.turb_lim = 0.46000633633932764;
    msg.custom.assign("VURCEYJCBTXRIO");

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
    msg.setTimeStamp(0.698571667569885);
    msg.setSource(57196U);
    msg.setSourceEntity(213U);
    msg.setDestination(7347U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("HSXWGMRYZRNXRUVCRZEKCFONKSPAOEKBQXYBZRMDUSIGWIWZXFLXEIULPKSLMEELBIULOZRJPJLKOQWCUQWRAMETZNYJQINZKIRHUXSDEOCVDIQJODBHDGVSUMOJGLVTTCYNVAMUFHBCFFCHYSFNBHNHKYATDQVKTKYQHPAMPVEFG");
    msg.formation_name.assign("THNJPRYITNUFYATVPYNBLPFSMBPUWIBNOXUNPIGGGYTMDXEGCZQVDXKWCEDJEYAWRALTQPZVVKVEJBPUSLSCHWACAXUZNICMWGHKLLQCNUJBGPBBYUYDLEETSQEKYGLRWKTBHFXZJRFFAIBVOXVOZGOWMNUKWDNTWTGCQSNCOVJKIMJCZFUQLHSVXQYKDFGMRSJQDISHRXEEKQFAZKPYRCUSDZOTMFWRMBAIOFOLXQJXIZLSI");
    msg.plan_id.assign("BJBXWEGRUVDOFQTYMIEALUSCDTZXWW");
    msg.description.assign("TCFBGRXCXHLYTFOOUFAWPVJGACITSOQLKFYQAGZIPDWZPJQVLFAYDHWAGCMICXIBOCYKMIXPHJDKZEPRRXMNFYZITXAPDLYPFFRQTBSUXKJGPWOPMVCIYQFSIEGHVZEVUATUQZJSWUETCUJVHMRWYFEJRWJSNEXOAXXBZBQRRHSJHNYSLBHKQLDSVDCVLGQPEWDOKNNRZDQHAO");
    msg.leader_speed = 0.045872106555757686;
    msg.leader_bank_lim = 0.3721435422479713;
    msg.pos_sim_err_lim = 0.22882937871798237;
    msg.pos_sim_err_wrn = 0.9573125687810686;
    msg.pos_sim_err_timeout = 59727U;
    msg.converg_max = 0.3709696486307812;
    msg.converg_timeout = 6416U;
    msg.comms_timeout = 51377U;
    msg.turb_lim = 0.11389459642659228;
    msg.custom.assign("WUABQOCRLPETBFCKLSKWHVHFBKQBDRRLVRDEIMFNUGIDSAVQCBUOLCSDBJKXXGFGXEFQUINZQZOPXBGKGNQXMDXSJTPYNSXAVLS");

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
    msg.setTimeStamp(0.46139240911243606);
    msg.setSource(6462U);
    msg.setSourceEntity(98U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(182U);
    msg.group_name.assign("VTDLUZWOTXKRXTWHXXZIYEMAQLYYDKSVKJFNZQMGNIPBRWMEFWSCUQRDXVOXIUYLEDOCPYIHAJQBLECJGBVVDKVNSVMZZQWXLVTZFYCEISRLEQKUMGZHQCSJMUCKKGMGUZJFQYTASPZOQIEUNWUAKJOHDAWNBPH");
    msg.formation_name.assign("KNPLGQASRFIKRMCTLRMXVJSFTXBHCKDTGBUWKPNSJEWCGOZYYWOECIHMUNQDJBSWYIOYWBFV");
    msg.plan_id.assign("PINHFFQEOVJNSTDWZJPKBLFLPTQPWYGEEQMOHBDFGMBZRCXEROGAHVQVQOEKVBYDDNRNNTJRIMAAEKZIONNWEXWQXKTHXVQTNOZGBVTVUOARWPCALXHBOLYYJKRLZTCCMECJQFII");
    msg.description.assign("YKUCXUHLFHXGSCDTXWYFNHPFETFAPIHBJEICTNJCYIBEJFTQEQHQJUWRKVLQZUYBVDURMDNOGOIMSMFZSVWASXGCEYBKOFKCQIVCXMYADEPHWZBUWBWZBKBSOMGOXSRAJAZPOILAWPDSGMNOUHXOYRNXGJIVQZLVGPMGQRVQRRZLHNRP");
    msg.leader_speed = 0.4716468096175468;
    msg.leader_bank_lim = 0.8568513171318234;
    msg.pos_sim_err_lim = 0.07013278465025263;
    msg.pos_sim_err_wrn = 0.5460467927174232;
    msg.pos_sim_err_timeout = 2717U;
    msg.converg_max = 0.7884952757894669;
    msg.converg_timeout = 52445U;
    msg.comms_timeout = 7922U;
    msg.turb_lim = 0.7771867565147151;
    msg.custom.assign("MMOKEFBNCNKGBBIBLKKUKBKDAMPOQVHRZQTVHGPARIPUDHNXHBPBRYZOGHVQEQXAJGIHJEQGSAXWIOTRYZZWATXVSAKUVQTVELNLKXJTCSOIJMJEJO");

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
    msg.setTimeStamp(0.1935512513151667);
    msg.setSource(47745U);
    msg.setSourceEntity(62U);
    msg.setDestination(62054U);
    msg.setDestinationEntity(87U);
    msg.control_src = 54103U;
    msg.control_ent = 25U;
    msg.timeout = 0.9427443340686221;
    msg.loiter_radius = 0.4249030569155797;
    msg.altitude_interval = 0.015725268705410578;

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
    msg.setTimeStamp(0.08114820514343912);
    msg.setSource(63488U);
    msg.setSourceEntity(149U);
    msg.setDestination(46513U);
    msg.setDestinationEntity(55U);
    msg.control_src = 20795U;
    msg.control_ent = 112U;
    msg.timeout = 0.28337044780965603;
    msg.loiter_radius = 0.9544026146110703;
    msg.altitude_interval = 0.21836698665859566;

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
    msg.setTimeStamp(0.33788704355566956);
    msg.setSource(49508U);
    msg.setSourceEntity(26U);
    msg.setDestination(6969U);
    msg.setDestinationEntity(6U);
    msg.control_src = 31893U;
    msg.control_ent = 62U;
    msg.timeout = 0.9837938199034709;
    msg.loiter_radius = 0.004118076681008387;
    msg.altitude_interval = 0.5955146002211965;

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
    msg.setTimeStamp(0.7112331386879792);
    msg.setSource(11301U);
    msg.setSourceEntity(51U);
    msg.setDestination(10807U);
    msg.setDestinationEntity(2U);
    msg.flags = 83U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8483519534613957;
    tmp_msg_0.speed_units = 80U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.06455387226833353;
    tmp_msg_1.z_units = 122U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1657929916977482;
    msg.lon = 0.398557724240153;
    msg.radius = 0.6122931570957723;

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
    msg.setTimeStamp(0.07474447554026009);
    msg.setSource(14848U);
    msg.setSourceEntity(23U);
    msg.setDestination(47248U);
    msg.setDestinationEntity(230U);
    msg.flags = 96U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7197905766704853;
    tmp_msg_0.speed_units = 148U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.11192543618175443;
    tmp_msg_1.z_units = 152U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5898858577742367;
    msg.lon = 0.2079805760891571;
    msg.radius = 0.004466296221559252;

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
    msg.setTimeStamp(0.1513499187287286);
    msg.setSource(6240U);
    msg.setSourceEntity(77U);
    msg.setDestination(53622U);
    msg.setDestinationEntity(129U);
    msg.flags = 191U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.616845062567656;
    tmp_msg_0.speed_units = 104U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.011090728525832039;
    tmp_msg_1.z_units = 188U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3161477939471592;
    msg.lon = 0.21515550638569836;
    msg.radius = 0.39633003058735006;

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
    msg.setTimeStamp(0.3305790141778485);
    msg.setSource(13168U);
    msg.setSourceEntity(141U);
    msg.setDestination(45981U);
    msg.setDestinationEntity(51U);
    msg.control_src = 36748U;
    msg.control_ent = 137U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 14U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7365633583044735;
    tmp_tmp_msg_0_0.speed_units = 78U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3687483294287931;
    tmp_tmp_msg_0_1.z_units = 143U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.04766385717432231;
    tmp_msg_0.lon = 0.36873685867517403;
    tmp_msg_0.radius = 0.3833702395793619;
    msg.reference.set(tmp_msg_0);
    msg.state = 178U;
    msg.proximity = 31U;

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
    msg.setTimeStamp(0.6144778680181057);
    msg.setSource(39105U);
    msg.setSourceEntity(114U);
    msg.setDestination(55259U);
    msg.setDestinationEntity(2U);
    msg.control_src = 15987U;
    msg.control_ent = 95U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 216U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.20844247861800946;
    tmp_tmp_msg_0_0.speed_units = 163U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7054280973957487;
    tmp_tmp_msg_0_1.z_units = 138U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7643183356280981;
    tmp_msg_0.lon = 0.46950413917119005;
    tmp_msg_0.radius = 0.9343298263856831;
    msg.reference.set(tmp_msg_0);
    msg.state = 48U;
    msg.proximity = 174U;

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
    msg.setTimeStamp(0.3671024862427098);
    msg.setSource(6U);
    msg.setSourceEntity(111U);
    msg.setDestination(64250U);
    msg.setDestinationEntity(130U);
    msg.control_src = 41158U;
    msg.control_ent = 139U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 52U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9976943775477719;
    tmp_tmp_msg_0_0.speed_units = 35U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7775338343591117;
    tmp_tmp_msg_0_1.z_units = 63U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9691673537049031;
    tmp_msg_0.lon = 0.9367594995419404;
    tmp_msg_0.radius = 0.24065277666188345;
    msg.reference.set(tmp_msg_0);
    msg.state = 90U;
    msg.proximity = 149U;

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
    msg.setTimeStamp(0.18308612277965775);
    msg.setSource(25447U);
    msg.setSourceEntity(155U);
    msg.setDestination(55509U);
    msg.setDestinationEntity(112U);
    msg.ax_cmd = 0.6666718588533348;
    msg.ay_cmd = 0.6803953758343175;
    msg.az_cmd = 0.8111254976827856;
    msg.ax_des = 0.5552031929592899;
    msg.ay_des = 0.9894299121955195;
    msg.az_des = 0.7837401306122993;
    msg.virt_err_x = 0.4316959119785754;
    msg.virt_err_y = 0.6707984594498192;
    msg.virt_err_z = 0.27434624918281536;
    msg.surf_fdbk_x = 0.8591250972452639;
    msg.surf_fdbk_y = 0.7502957695447848;
    msg.surf_fdbk_z = 0.09162341689808173;
    msg.surf_unkn_x = 0.9896844827122517;
    msg.surf_unkn_y = 0.027586493773766207;
    msg.surf_unkn_z = 0.20908463561489576;
    msg.ss_x = 0.948587314660918;
    msg.ss_y = 0.06866745333296898;
    msg.ss_z = 0.18034084413328744;

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
    msg.setTimeStamp(0.4969963529978838);
    msg.setSource(33563U);
    msg.setSourceEntity(136U);
    msg.setDestination(6435U);
    msg.setDestinationEntity(225U);
    msg.ax_cmd = 0.27084432673856684;
    msg.ay_cmd = 0.46846947165762776;
    msg.az_cmd = 0.9164776429795864;
    msg.ax_des = 0.7270108278498512;
    msg.ay_des = 0.5814010748514344;
    msg.az_des = 0.07287667491880812;
    msg.virt_err_x = 0.6438713224653982;
    msg.virt_err_y = 0.5314992431989811;
    msg.virt_err_z = 0.6022898558973678;
    msg.surf_fdbk_x = 0.9304720845600531;
    msg.surf_fdbk_y = 0.5877963530532271;
    msg.surf_fdbk_z = 0.05799742322832013;
    msg.surf_unkn_x = 0.10930671633938815;
    msg.surf_unkn_y = 0.7897143767994697;
    msg.surf_unkn_z = 0.5889888448477281;
    msg.ss_x = 0.3489993027278355;
    msg.ss_y = 0.680805206321231;
    msg.ss_z = 0.2242825078680193;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TZMIGMAENSYPBVYJDNVGSNUTYDHAOOUQWIWEEQXWITKCDCHKZVDHTUUZYWZODRXLBUJWZBPFFMXOUIWJBRVTZWERGXEXJJIRLMCONWLUJGWMIRKWYXLPYTJFDSYFBFLBFERFAHNCPGDM");
    tmp_msg_0.dist = 0.006207632991748424;
    tmp_msg_0.err = 0.8523510680142246;
    tmp_msg_0.ctrl_imp = 0.13072750106380882;
    tmp_msg_0.rel_dir_x = 0.5618254445458211;
    tmp_msg_0.rel_dir_y = 0.8804082844142791;
    tmp_msg_0.rel_dir_z = 0.5026084664647715;
    tmp_msg_0.err_x = 0.31641340028438625;
    tmp_msg_0.err_y = 0.3848606134771415;
    tmp_msg_0.err_z = 0.9502427368652343;
    tmp_msg_0.rf_err_x = 0.9531342934943674;
    tmp_msg_0.rf_err_y = 0.38097413786328915;
    tmp_msg_0.rf_err_z = 0.8017409098368998;
    tmp_msg_0.rf_err_vx = 0.3978332560658119;
    tmp_msg_0.rf_err_vy = 0.5067548879425667;
    tmp_msg_0.rf_err_vz = 0.9135723568270184;
    tmp_msg_0.ss_x = 0.04374007742541697;
    tmp_msg_0.ss_y = 0.5415681066984342;
    tmp_msg_0.ss_z = 0.22799215622029234;
    tmp_msg_0.virt_err_x = 0.25643498269009146;
    tmp_msg_0.virt_err_y = 0.9719326710987516;
    tmp_msg_0.virt_err_z = 0.7824333205457883;
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
    msg.setTimeStamp(0.6465576511452917);
    msg.setSource(14253U);
    msg.setSourceEntity(135U);
    msg.setDestination(17128U);
    msg.setDestinationEntity(203U);
    msg.ax_cmd = 0.8959513303624648;
    msg.ay_cmd = 0.6421155632608483;
    msg.az_cmd = 0.46059196310556605;
    msg.ax_des = 0.08393691827604788;
    msg.ay_des = 0.2543653661504375;
    msg.az_des = 0.016791330844109997;
    msg.virt_err_x = 0.2378923893574587;
    msg.virt_err_y = 0.5628930931863853;
    msg.virt_err_z = 0.14951749662655411;
    msg.surf_fdbk_x = 0.23138093796731707;
    msg.surf_fdbk_y = 0.7546268537898396;
    msg.surf_fdbk_z = 0.7622070617244887;
    msg.surf_unkn_x = 0.9717495946479108;
    msg.surf_unkn_y = 0.5646910415071208;
    msg.surf_unkn_z = 0.7661195005984922;
    msg.ss_x = 0.38381230852900117;
    msg.ss_y = 0.3044893845962692;
    msg.ss_z = 0.24040495964307995;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HTYWUSXBQUEDXTXOAYVVSFKPZBRHQAGBJCWYPHLYDCTMAJNMMDABWXUHSIRNTBUPRJVJTKMIAVRVFVNZLLAZEZHOPMBSNDQURKHCKKFOYDHHIWEOYQEVFJSWI");
    tmp_msg_0.dist = 0.6394666571535536;
    tmp_msg_0.err = 0.1893389121460125;
    tmp_msg_0.ctrl_imp = 0.9434480904780688;
    tmp_msg_0.rel_dir_x = 0.3090788649274314;
    tmp_msg_0.rel_dir_y = 0.9081807402003265;
    tmp_msg_0.rel_dir_z = 0.709721902119677;
    tmp_msg_0.err_x = 0.7715558149423888;
    tmp_msg_0.err_y = 0.6697974055592479;
    tmp_msg_0.err_z = 0.0448683878026912;
    tmp_msg_0.rf_err_x = 0.8979516860289422;
    tmp_msg_0.rf_err_y = 0.536541165347294;
    tmp_msg_0.rf_err_z = 0.5085643516833063;
    tmp_msg_0.rf_err_vx = 0.5037378557677707;
    tmp_msg_0.rf_err_vy = 0.528012353829904;
    tmp_msg_0.rf_err_vz = 0.4442312705965623;
    tmp_msg_0.ss_x = 0.6383212936286751;
    tmp_msg_0.ss_y = 0.3875339674215721;
    tmp_msg_0.ss_z = 0.8753810043069918;
    tmp_msg_0.virt_err_x = 0.5306200582582524;
    tmp_msg_0.virt_err_y = 0.7179348345805224;
    tmp_msg_0.virt_err_z = 0.7122004488054917;
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
    msg.setTimeStamp(0.538925219714242);
    msg.setSource(60533U);
    msg.setSourceEntity(66U);
    msg.setDestination(34153U);
    msg.setDestinationEntity(52U);
    msg.s_id.assign("BTYEYXFKAMGJZUECUKWSHGDOASZTRZWJFTVNXVLDBHRVTCYEEQZVJZSDGLBIKDPBAHZUVNAYMLJRBCMHRP");
    msg.dist = 0.22927655904932132;
    msg.err = 0.9661631615003489;
    msg.ctrl_imp = 0.46423193536354923;
    msg.rel_dir_x = 0.3137808908860661;
    msg.rel_dir_y = 0.6248713546588143;
    msg.rel_dir_z = 0.2599303798805902;
    msg.err_x = 0.769260697439224;
    msg.err_y = 0.33663631309491016;
    msg.err_z = 0.3343123859739834;
    msg.rf_err_x = 0.89872899719266;
    msg.rf_err_y = 0.019472941090309392;
    msg.rf_err_z = 0.681138725692277;
    msg.rf_err_vx = 0.9198157867367676;
    msg.rf_err_vy = 0.221302782225687;
    msg.rf_err_vz = 0.8192518406700577;
    msg.ss_x = 0.44837324862484396;
    msg.ss_y = 0.09862888554668847;
    msg.ss_z = 0.8819906056651188;
    msg.virt_err_x = 0.10333028498050445;
    msg.virt_err_y = 0.3343797622883382;
    msg.virt_err_z = 0.28937855883351904;

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
    msg.setTimeStamp(0.1251467609594613);
    msg.setSource(20031U);
    msg.setSourceEntity(31U);
    msg.setDestination(42309U);
    msg.setDestinationEntity(207U);
    msg.s_id.assign("OXZBQROLOMTMEHOZBAEPPCORAPAQQZEKFJLKWGUYBJGSNRTAERMHXCIXRHIPEEOUZNHUYWGKDFPTHCMMDMKBCWYHIFXNICLGUJZUMOZAJBLUBUWBCXCXBQHRDJNCLNQZPLHBQVTDSJWVHVRPJISZKNKDIXWIGEVSMFQKLCOVDDFXUGRANBWCLXSYJWUPPEFKPYTFKTZWYQFAHYXTO");
    msg.dist = 0.7626876541952436;
    msg.err = 0.4971923265968793;
    msg.ctrl_imp = 0.49970939965726946;
    msg.rel_dir_x = 0.7601705427885105;
    msg.rel_dir_y = 0.804149620144131;
    msg.rel_dir_z = 0.6810289748657766;
    msg.err_x = 0.8232983041662527;
    msg.err_y = 0.6895177864134234;
    msg.err_z = 0.5966839744554469;
    msg.rf_err_x = 0.20050025063028287;
    msg.rf_err_y = 0.5715775219043776;
    msg.rf_err_z = 0.17721878976819128;
    msg.rf_err_vx = 0.07346722980109266;
    msg.rf_err_vy = 0.2390855561302434;
    msg.rf_err_vz = 0.783663946549109;
    msg.ss_x = 0.7314438764779658;
    msg.ss_y = 0.7547714786064134;
    msg.ss_z = 0.5388769344463691;
    msg.virt_err_x = 0.026762532052314825;
    msg.virt_err_y = 0.6722913524346136;
    msg.virt_err_z = 0.5552688318951138;

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
    msg.setTimeStamp(0.7742036376378254);
    msg.setSource(2140U);
    msg.setSourceEntity(1U);
    msg.setDestination(49452U);
    msg.setDestinationEntity(164U);
    msg.s_id.assign("NRQEUOJBNLNZPPWECYFCDDTMQZAVCKQILLVJCBMKIAFHDFESVEJIFYZVHXXWUPGXGZJVZXLPXDHEJTMZMVUTAXIPFDLTUJQIKBKQBTCYQJPRGPCRZDOIXARYFENUFBRIORCNNBJTFQWWSEPUGPIQGSNWEIKXABXHNLGLTSRMWMKRSCMOAOOGSQUN");
    msg.dist = 0.8532790768276894;
    msg.err = 0.5842453702300274;
    msg.ctrl_imp = 0.11324683195309382;
    msg.rel_dir_x = 0.9388015651440911;
    msg.rel_dir_y = 0.7230596068202103;
    msg.rel_dir_z = 0.12145491490281057;
    msg.err_x = 0.8126390711837356;
    msg.err_y = 0.008186430794264288;
    msg.err_z = 0.6052720321473132;
    msg.rf_err_x = 0.5375153870775313;
    msg.rf_err_y = 0.45149760826517993;
    msg.rf_err_z = 0.7429312028378607;
    msg.rf_err_vx = 0.2925681944556384;
    msg.rf_err_vy = 0.29531379547305836;
    msg.rf_err_vz = 0.4342892852241449;
    msg.ss_x = 0.494095299107728;
    msg.ss_y = 0.22924284496828085;
    msg.ss_z = 0.9027414389740137;
    msg.virt_err_x = 0.8105489745466813;
    msg.virt_err_y = 0.56531635704478;
    msg.virt_err_z = 0.8303594804979857;

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
    msg.setTimeStamp(0.8727714323169246);
    msg.setSource(18058U);
    msg.setSourceEntity(253U);
    msg.setDestination(34497U);
    msg.setDestinationEntity(66U);
    msg.timeout = 56030U;
    msg.rpm = 0.6321654621246082;
    msg.direction = 54U;
    msg.custom.assign("SUOPTQEBMFXAAEVYMYHLUFIHKEAGAEPUNOGIRMYSGZRHSKLJJCAOQMGETFCRGKVLJKWRRWMFHDJCULPVBHNNAVGBXMX");

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
    msg.setTimeStamp(0.3710501556309517);
    msg.setSource(43147U);
    msg.setSourceEntity(128U);
    msg.setDestination(62026U);
    msg.setDestinationEntity(41U);
    msg.timeout = 41639U;
    msg.rpm = 0.26680094819177713;
    msg.direction = 80U;
    msg.custom.assign("RRZGJLVHJLESKSICLODVVQERVZFHRZJZQGPFHONAVTPPNPVTKXPCDWCUKIGRWZRQYWUXJHKWGDMBKBQNNGQBFEXGYQBJUFLOS");

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
    msg.setTimeStamp(0.46554168136727625);
    msg.setSource(32747U);
    msg.setSourceEntity(76U);
    msg.setDestination(49377U);
    msg.setDestinationEntity(250U);
    msg.timeout = 22195U;
    msg.rpm = 0.16737381640202065;
    msg.direction = 179U;
    msg.custom.assign("DLJGACTGNUAWKDPWOABSONMSJYDWCHBZGKNBKRGSMTFURZNQJYRJZEVMWEAHPYCXXMVYEZXQWIBVBXUVCEFVTNCDEMHBVBRYNWLHEQWWLRYPEZNRUFFJUGRVDULPDOOZMLMXBIEGFHGUCJZSOLZUGHDYHOAQJWPISKEIOFROIPAKXFCRHDLKIZIOAIBAIPCCSOSMPNXKDMLJQQIVSXSDFXKMQSKYYJA");

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
    msg.setTimeStamp(0.11952228496250339);
    msg.setSource(19307U);
    msg.setSourceEntity(126U);
    msg.setDestination(42309U);
    msg.setDestinationEntity(191U);
    msg.formation_name.assign("RSFDCOCRMGPKXZMFLAPVMNNJRMCSGEJCEGEOIYJSJYIPUISOAGPWVVECKZQZQYAUTYDFIRHMAKISRZZLNBMBLHTFVZESNTWDWLOTODYNRNBBXXNPTHCBXWKUYOHADHAHBYJWSILRUDPMACXJUQUAOKWNFAOTKQZLZUELBLOKFHFWG");
    msg.type = 63U;
    msg.op = 63U;
    msg.group_name.assign("OKJYDUYZCSPAKDNDNMHFXXMHCJRLEQRDAWARPSPJDKWSSOIVCZEBMGKTCMDGBFAFPMCHENRVZJFLXOYLMSOUIWDTMFWJITYBIYNQXMNEWPQVATILYPKLTOFXGQGXERVIQUVPWSGDRECESWKRQJNENLOAQQDZLUEZYPVHJFJKURKYLA");
    msg.plan_id.assign("XUMBJKRCNAXNBBOMKXWNYCPTYUIGYMIOLGVSWCMASYOAAYNAZWKROWTWDLYECLHDIEUMVBSJMVEKCWBKLJXHVURFAYZUTDHVOWUGDCQWUXETTMQFTQEOGTVZNXJUZTPRJWFKSNRAASVDQEISJZJFOQRSEFZFRSIHJQNBADPOGOLBXBAIEPIKYMFBHRNLPGHKMIDHHGENSNPZDLLZRXCVSXLQRTCGUVJVCFPWFG");
    msg.description.assign("IKFMQYGTLWBEETEAWHUSHBPTHACG");
    msg.reference_frame = 85U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34831U;
    tmp_msg_0.off_x = 0.8341424274360584;
    tmp_msg_0.off_y = 0.014080539389113134;
    tmp_msg_0.off_z = 0.5828188217103443;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.9558152601865919;
    msg.leader_speed_min = 0.9684048416319506;
    msg.leader_speed_max = 0.16891420552586756;
    msg.leader_alt_min = 0.34175369468387806;
    msg.leader_alt_max = 0.8966802846735977;
    msg.pos_sim_err_lim = 0.5342060451796209;
    msg.pos_sim_err_wrn = 0.2160072526589184;
    msg.pos_sim_err_timeout = 35519U;
    msg.converg_max = 0.36690780715764193;
    msg.converg_timeout = 58421U;
    msg.comms_timeout = 1722U;
    msg.turb_lim = 0.019537944274062857;
    msg.custom.assign("QKOTNJCAHVUFSHIEPWQNBXKIWWDQAFMPLOYNPZDRPTZIMPGFXJTESHKYTLWBSCIVEOETDMILDBSCVKLGGPSMG");

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
    msg.setTimeStamp(0.33393327731810973);
    msg.setSource(41193U);
    msg.setSourceEntity(2U);
    msg.setDestination(20578U);
    msg.setDestinationEntity(109U);
    msg.formation_name.assign("BSLUAILKQDQGVFWZBQYTJIUMBKPWKNXRZBOOZQKAJYUHZJNDNGXRYNRWKWBYVUSTBCBPFNF");
    msg.type = 30U;
    msg.op = 106U;
    msg.group_name.assign("YYMNNCUQWP");
    msg.plan_id.assign("BCVUIFPSPPBXZHQLLVNDJQQHYDGMWVNIJZHXENAMONRILQVNVKHPNLCKAMABFDAOSOIEHXFZACHHWUFCTWYCWAKTLMFTMZCEJZFLBVSJYJTLQZVFIRMQLXEOBRDXYKZCJYTKVSCWPZIEYMAAOEOJSFTFPKUBGMGTPSRYXDEBKQEURXTGMDHOSNYSPEGNTYWWBLRGRXUDFRUQDJNGIWGSEOHAWOHIURGBOYKVB");
    msg.description.assign("PWZEIMSBNGIJFOLNKJAMPWUZRTQHDOLXGVUZZQIXRJYGORZUWNXYETPUADMSVXRJFODWNKOQDKEGYKECQEDMAECFRPGXJWEOZNZZCTEYXSRHXNQLKTBNEPTAHVWKQIUSDLCJTMKRAHUPFKKBAPLACTAGWFLHWXRVILDUBMICHJSLLJ");
    msg.reference_frame = 88U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52333U;
    tmp_msg_0.off_x = 0.8935038513613228;
    tmp_msg_0.off_y = 0.7229513220084488;
    tmp_msg_0.off_z = 0.3201618151631823;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.09890476972347595;
    msg.leader_speed_min = 0.02800871628421031;
    msg.leader_speed_max = 0.4267365458729512;
    msg.leader_alt_min = 0.8611502473410554;
    msg.leader_alt_max = 0.26634347238177736;
    msg.pos_sim_err_lim = 0.20980840115778254;
    msg.pos_sim_err_wrn = 0.12797499747607888;
    msg.pos_sim_err_timeout = 28879U;
    msg.converg_max = 0.7761113070357307;
    msg.converg_timeout = 58635U;
    msg.comms_timeout = 19906U;
    msg.turb_lim = 0.3439392273031088;
    msg.custom.assign("TDITJOKHXTNSIGEPBIRXSBLSHOZBTEJCYLQPMJQRMOSUDNGMBOAKLJRQB");

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
    msg.setTimeStamp(0.9930942368304191);
    msg.setSource(41397U);
    msg.setSourceEntity(241U);
    msg.setDestination(41897U);
    msg.setDestinationEntity(48U);
    msg.formation_name.assign("ACEFAXXHNGVOBOLBZHUDJXPTNJAJVPQDOSUTJYYMRZFZMGGAGSGLWW");
    msg.type = 27U;
    msg.op = 229U;
    msg.group_name.assign("MOBGGSALZAKLWHBOVONYQLNWRZFGVMFUUQYATSVKCEHJUTRKTUSPFHAAOBKYHGZNHNVFZLKBCRNWQNBJEMQTDQJLBUTYUDRPSOYFYSSAMHKPSXLGI");
    msg.plan_id.assign("CMYCSEDWNPGOWKJHCYVAITTROVIDELFFMXCVYFHMOWZLVKDFSRJZPKKEULGYBHRIOVDAGBWYZJWJVSCSLBXQAHWUNBGQINIRKPGCLATEAHVDYNUDASCSXYEPDAAUATTZZCDPLHAUJKJCBWRRJJNINTHOXXOOGVESEOMQZLPXPRXJQWYBPZSBXHZH");
    msg.description.assign("FDGMLFKLEUEUZAWGNMPQOATNIWSJVICSYCZTYAGSFKDEDRWSZKMQFTVCDOOSXNPQJUWXSBMHEIYKPWKZLMCKIWKPGMMBHHPAFOQDLTLSXWCKJBQVAIYLFCIIQBNGYXRTZPDNSKURVIFFNJGLHODCJOPBWEZKBXMBVURLEVXHJCHZTGVSGFHQXNABAQOLNFGVBJOMUEL");
    msg.reference_frame = 23U;
    msg.leader_bank_lim = 0.5166761070465389;
    msg.leader_speed_min = 0.3557896180778928;
    msg.leader_speed_max = 0.7288351023993498;
    msg.leader_alt_min = 0.058030156064363236;
    msg.leader_alt_max = 0.7907078799462459;
    msg.pos_sim_err_lim = 0.3413712119848752;
    msg.pos_sim_err_wrn = 0.5036875918211446;
    msg.pos_sim_err_timeout = 59291U;
    msg.converg_max = 0.01844656219832086;
    msg.converg_timeout = 20910U;
    msg.comms_timeout = 46761U;
    msg.turb_lim = 0.6021669596903824;
    msg.custom.assign("ZYHNLVJLUMBKOUDEFXKHUJBQTAHJTUNSBDNCMJCCOSRAINJDVMPDGISWMZFES");

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
    msg.setTimeStamp(0.21618353589882466);
    msg.setSource(28838U);
    msg.setSourceEntity(104U);
    msg.setDestination(47048U);
    msg.setDestinationEntity(77U);
    msg.timeout = 5498U;
    msg.lat = 0.7941388840116845;
    msg.lon = 0.9038021405404412;
    msg.z = 0.34247096000977995;
    msg.z_units = 227U;
    msg.speed = 0.4938252073403141;
    msg.speed_units = 103U;
    msg.custom.assign("RAFUHXWDJUECDZKWDAGPHQQESOZPYYMOCDRCEKANNDOSYXCOGWKFRBBCOXINEIDTHZVVAHRIOWLXYMNGXQBJEMTOEHHVZEBPWXNHYRUXFQJLTYLCXSDJKZSQPGMSSHMPOBKBIZGOVUFGFYIFXIKLRWPVHIMYKFPTTILPNTHDJPLABLMUTFEQFZGMZYTQMWDVNTF");

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
    msg.setTimeStamp(0.6954329695733121);
    msg.setSource(40862U);
    msg.setSourceEntity(155U);
    msg.setDestination(37978U);
    msg.setDestinationEntity(182U);
    msg.timeout = 19633U;
    msg.lat = 0.8434036763034826;
    msg.lon = 0.6777779384946849;
    msg.z = 0.14536738304448749;
    msg.z_units = 23U;
    msg.speed = 0.958909651622989;
    msg.speed_units = 113U;
    msg.custom.assign("UXYRPERDLLVVIWXODFAEJBQBASNVJCWCUETUOZJENIBZLOHBNHQYPHETKHKWZVXWXTGJJCADKJIEBUAVRMKPUIRZMGZKCIFIYTYSSRCQAGRHXJCEBBDKTQASIJT");

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
    msg.setTimeStamp(0.4991912810077854);
    msg.setSource(35346U);
    msg.setSourceEntity(124U);
    msg.setDestination(9135U);
    msg.setDestinationEntity(198U);
    msg.timeout = 38664U;
    msg.lat = 0.868263004021654;
    msg.lon = 0.7574795291277588;
    msg.z = 0.9561676492529237;
    msg.z_units = 107U;
    msg.speed = 0.0823599908030187;
    msg.speed_units = 235U;
    msg.custom.assign("GKVWLJZELCUOIVYKDRTMPGGNZYKQAEEYNSAOZCQAIMSQR");

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
    msg.setTimeStamp(0.44080969121438074);
    msg.setSource(38151U);
    msg.setSourceEntity(196U);
    msg.setDestination(45430U);
    msg.setDestinationEntity(142U);
    msg.timeout = 1121U;
    msg.lat = 0.61298053834186;
    msg.lon = 0.7392834531791816;
    msg.z = 0.9981809449422715;
    msg.z_units = 34U;
    msg.speed = 0.03199118975387549;
    msg.speed_units = 76U;
    msg.custom.assign("DOPEVOPXMUWCARJZDNQQHKSVMMT");

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
    msg.setTimeStamp(0.020267584021784746);
    msg.setSource(29415U);
    msg.setSourceEntity(52U);
    msg.setDestination(48720U);
    msg.setDestinationEntity(170U);
    msg.timeout = 20401U;
    msg.lat = 0.45353460141637303;
    msg.lon = 0.6073920748246739;
    msg.z = 0.3644772413536893;
    msg.z_units = 235U;
    msg.speed = 0.6465510786859069;
    msg.speed_units = 74U;
    msg.custom.assign("HNILYHDXSABJMXRIXVFLAAGANHYBJLVMGJNOPTXFASTSVJEIUMNOWBHSTJQNFKWTRQKWBISOYAKUPNQBSJCJDQAFRAYLKQKHEDACATGTEZOSBREWPUDDMZZFWLZTXXXKRLWQYLOWYCNUDPQTFNFDLSIHPJVGVHMBJMCYMRGOPYRKBHBIZDDUEQMWYZSKFFQIQTVWZOGGZOP");

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
    msg.setTimeStamp(0.8237740810248746);
    msg.setSource(15281U);
    msg.setSourceEntity(169U);
    msg.setDestination(6614U);
    msg.setDestinationEntity(53U);
    msg.timeout = 28327U;
    msg.lat = 0.6360697927121163;
    msg.lon = 0.004095676392757097;
    msg.z = 0.8150987467528569;
    msg.z_units = 233U;
    msg.speed = 0.10023860975822285;
    msg.speed_units = 131U;
    msg.custom.assign("FBJHKDAGRBQLDNRCERECNAIPBRZJBRTOMOZTMXNTWGWFWONWRMEAVBRITYEXPFFLKXZWQTXZWCYKIPHRUHTOKBUQYNINFHYSUGRSHQEUOTQLDGSHJVPYXMOVKVL");

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
    msg.setTimeStamp(0.3328589528887478);
    msg.setSource(40794U);
    msg.setSourceEntity(194U);
    msg.setDestination(57803U);
    msg.setDestinationEntity(47U);
    msg.arrival_time = 0.9791488928103552;
    msg.lat = 0.5844738252343745;
    msg.lon = 0.277151309977098;
    msg.z = 0.06614336322655034;
    msg.z_units = 174U;
    msg.travel_z = 0.6550404181003836;
    msg.travel_z_units = 78U;
    msg.delayed = 92U;

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
    msg.setTimeStamp(0.7798263763724016);
    msg.setSource(28137U);
    msg.setSourceEntity(85U);
    msg.setDestination(30729U);
    msg.setDestinationEntity(143U);
    msg.arrival_time = 0.17731542398831968;
    msg.lat = 0.03405125626249417;
    msg.lon = 0.1992469142432991;
    msg.z = 0.6765352171569619;
    msg.z_units = 33U;
    msg.travel_z = 0.772592651353286;
    msg.travel_z_units = 102U;
    msg.delayed = 104U;

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
    msg.setTimeStamp(0.12497223015583414);
    msg.setSource(30954U);
    msg.setSourceEntity(176U);
    msg.setDestination(3887U);
    msg.setDestinationEntity(211U);
    msg.arrival_time = 0.7733777987441611;
    msg.lat = 0.5589422697887408;
    msg.lon = 0.5729172935987596;
    msg.z = 0.017879679175737184;
    msg.z_units = 242U;
    msg.travel_z = 0.46897542330671516;
    msg.travel_z_units = 2U;
    msg.delayed = 196U;

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
    msg.setTimeStamp(0.6165844036303596);
    msg.setSource(23853U);
    msg.setSourceEntity(142U);
    msg.setDestination(58881U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.7828681752760673;
    msg.lon = 0.2849827203375862;
    msg.z = 0.34791303406075025;
    msg.z_units = 248U;
    msg.speed = 0.294829873249535;
    msg.speed_units = 203U;
    msg.bearing = 0.29561235845122924;
    msg.cross_angle = 0.061919608380872515;
    msg.width = 0.09205989274238491;
    msg.length = 0.6154605493966135;
    msg.coff = 38U;
    msg.angaperture = 0.7838260843337679;
    msg.range = 32066U;
    msg.overlap = 63U;
    msg.flags = 65U;
    msg.custom.assign("GVJLAYRNUSLOGNFOHSKUIBINUBXSOERCXPCTNHTAHYYWCKGYEOKYFHJOVRJDGSDOJQZZWULETIE");

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
    msg.setTimeStamp(0.269434528895123);
    msg.setSource(55592U);
    msg.setSourceEntity(25U);
    msg.setDestination(37045U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.7938615656938357;
    msg.lon = 0.3013846112661833;
    msg.z = 0.838883159103833;
    msg.z_units = 253U;
    msg.speed = 0.006726052854766573;
    msg.speed_units = 102U;
    msg.bearing = 0.46482921795996734;
    msg.cross_angle = 0.3603423989848975;
    msg.width = 0.6112303572605206;
    msg.length = 0.7844848741366501;
    msg.coff = 196U;
    msg.angaperture = 0.3618530514340841;
    msg.range = 46125U;
    msg.overlap = 181U;
    msg.flags = 235U;
    msg.custom.assign("UQFXDMCJASXDBGZQXIOOVNFIVYFNWKDBAXRVLCACRMGXBBPPFQEMTRJGHHZIAFRUHBWTNUNPLTHMVTCPKUUPALGS");

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
    msg.setTimeStamp(0.9973363194204401);
    msg.setSource(46421U);
    msg.setSourceEntity(179U);
    msg.setDestination(60676U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.6832333246044139;
    msg.lon = 0.28278567996381376;
    msg.z = 0.5191110454970768;
    msg.z_units = 92U;
    msg.speed = 0.978515044997934;
    msg.speed_units = 171U;
    msg.bearing = 0.9751513635289789;
    msg.cross_angle = 0.36671651107102543;
    msg.width = 0.4046871701631598;
    msg.length = 0.548120623200893;
    msg.coff = 111U;
    msg.angaperture = 0.6461253763991773;
    msg.range = 32021U;
    msg.overlap = 16U;
    msg.flags = 190U;
    msg.custom.assign("JZAFIGJEWQGQPHGZZOIGBNWFKSSWAICTFUCSRQALQDKTVUOINQMPHTODMBJBOSPVEDDXQRYAQLPYLGKKKBPHTFLYDBVUNHXEJXNVSYOLVWMYDHVWHBCLEYBJOUSGZACKSHIECFQPYILUDZDGR");

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
    msg.setTimeStamp(0.7851981069229095);
    msg.setSource(23257U);
    msg.setSourceEntity(184U);
    msg.setDestination(27316U);
    msg.setDestinationEntity(59U);
    msg.timeout = 26594U;
    msg.lat = 0.7574410785525745;
    msg.lon = 0.5582508460447472;
    msg.z = 0.3270763526201379;
    msg.z_units = 128U;
    msg.speed = 0.22590548818429212;
    msg.speed_units = 39U;
    msg.syringe0 = 120U;
    msg.syringe1 = 144U;
    msg.syringe2 = 185U;
    msg.custom.assign("GJLNZZIDQDGWBWKNCELIWAYCCMAYLSIRADYRBZDPOBPDCXWWUWETPLFSEINGNGPGTZYHSBRXMGEKZOAO");

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
    msg.setTimeStamp(0.5541059257190192);
    msg.setSource(2787U);
    msg.setSourceEntity(230U);
    msg.setDestination(58933U);
    msg.setDestinationEntity(56U);
    msg.timeout = 44185U;
    msg.lat = 0.20276452470905204;
    msg.lon = 0.07506253680720443;
    msg.z = 0.24772861986193184;
    msg.z_units = 20U;
    msg.speed = 0.9185275942398047;
    msg.speed_units = 155U;
    msg.syringe0 = 178U;
    msg.syringe1 = 21U;
    msg.syringe2 = 225U;
    msg.custom.assign("PBQBQIRRVCNGKOOMVOPLOXHNVXSUBHOFHCQCKGKSKPQWDLJHSDSPZVZMUCCL");

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
    msg.setTimeStamp(0.6285111490432465);
    msg.setSource(54379U);
    msg.setSourceEntity(102U);
    msg.setDestination(40561U);
    msg.setDestinationEntity(178U);
    msg.timeout = 55690U;
    msg.lat = 0.41126336975567057;
    msg.lon = 0.22697048614964266;
    msg.z = 0.25452818890345086;
    msg.z_units = 31U;
    msg.speed = 0.3806586361633424;
    msg.speed_units = 37U;
    msg.syringe0 = 157U;
    msg.syringe1 = 179U;
    msg.syringe2 = 129U;
    msg.custom.assign("UOQASUYJIZXQRTLONQDLHEVTHJIHDMRXWWFCPVUMVZUNAVXPIKPHQZWYZEZHHTGGRBVAAJPKWJGNFJFNEWIPOFLAYCGXTEYXRDYKFKSHNWSDJCCXWGOZJVDOQIOTHIOANFERVKDMQRWLKXSBFVQDXBAZZLWKLYIDMBPEMSMGCIGYKTIGNDUSERSMARJOPECOMKRPGMBVXTAEBTEQCTBCBMUFVQTF");

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
    msg.setTimeStamp(0.46235533780897253);
    msg.setSource(54370U);
    msg.setSourceEntity(99U);
    msg.setDestination(9536U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.2841742725393307);
    msg.setSource(57703U);
    msg.setSourceEntity(89U);
    msg.setDestination(18804U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.9027735673884637);
    msg.setSource(49844U);
    msg.setSourceEntity(0U);
    msg.setDestination(39440U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.8999497810361231);
    msg.setSource(2913U);
    msg.setSourceEntity(32U);
    msg.setDestination(64742U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.1856034846693828;
    msg.lon = 0.6866961179494487;
    msg.z = 0.45643661702137417;
    msg.z_units = 69U;
    msg.speed = 0.4019747469322822;
    msg.speed_units = 134U;
    msg.takeoff_pitch = 0.9765545715109935;
    msg.custom.assign("ZBEGFCMQSIHSEGVGQIUFVWFNCJCZUHXDMXSEBENFZOPDIIJHKPZKTKADONRZIXPJEDEZMBAQUOWVGBOHJXVHYNZRQNYVVKSLTVNDXRQAHBFFCQJASFYOAYLTQCWMNFXBVEUXVWILTAKAYUSBORLQQPTFJMHRWOSMLGEWMXDWWREJNLPJSIRQZYWVMDHOXHBIJPKOLDLPMRCOGYHGYTUYRXLJ");

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
    msg.setTimeStamp(0.9559015114021603);
    msg.setSource(41394U);
    msg.setSourceEntity(153U);
    msg.setDestination(18189U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.2605716482367594;
    msg.lon = 0.38151254933577017;
    msg.z = 0.3316819640587334;
    msg.z_units = 66U;
    msg.speed = 0.35280519494200924;
    msg.speed_units = 204U;
    msg.takeoff_pitch = 0.7648339404373997;
    msg.custom.assign("AOINXMCRYHGEIFIVGTRBUHIFORTWXRRJRIPJAVOLCHTPQTHYYWLJRNODKFHNGGAJPW");

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
    msg.setTimeStamp(0.7141682070140415);
    msg.setSource(4617U);
    msg.setSourceEntity(166U);
    msg.setDestination(47634U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.8915057024192816;
    msg.lon = 0.6807818273008731;
    msg.z = 0.501371421420172;
    msg.z_units = 102U;
    msg.speed = 0.19375091465960326;
    msg.speed_units = 34U;
    msg.takeoff_pitch = 0.441436398437533;
    msg.custom.assign("PUKEULTLYIKPDFHXPXNCUEVNIXXOGIMIVZRRYGMPEHNDMIWBJWSAFJHBGXQGBAMNFDTUVCDUSNXGRGUQZDYMEGTHAOJYYAVWQBVZACPETCPLZWKKPDOTQAPQMARCJSKLZYJOQXBHANFBEWFQQRIJHLMQZUKNVFPOEFVUYLAEUTVZWTFSHIBSIUONKBOOWLCCMOCSNGTFBVOJIIDLHNXMMJVFZXKCERSLDESWLYJBKCRDTQWDSXGGSARPRKRH");

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
    msg.setTimeStamp(0.98790533049992);
    msg.setSource(39832U);
    msg.setSourceEntity(177U);
    msg.setDestination(24872U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.4513785208616995;
    msg.lon = 0.11700408925699746;
    msg.z = 0.7331806060578399;
    msg.z_units = 168U;
    msg.speed = 0.5086037186710756;
    msg.speed_units = 203U;
    msg.abort_z = 0.4087114907398425;
    msg.bearing = 0.9392484071451316;
    msg.glide_slope = 233U;
    msg.glide_slope_alt = 0.309252744294108;
    msg.custom.assign("IPAPNYZSJDGJKKXBFEFNRFNPIDSGVJXAPDJCQKMKTBUYAFRRPISXUVQYUJRTBPOMGXQPDCNLBBSGDUOZSGOGQZLKEJVYPKNMIWOZXJGNEMFQWTNHULRWTAKVDEEWSOAQHIENYLUJTFIWSPSMRKEMTDGHYCVLVFQZADHFMYTDXOYKAOVIRBBFMSJBCO");

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
    msg.setTimeStamp(0.3987298051732904);
    msg.setSource(23940U);
    msg.setSourceEntity(93U);
    msg.setDestination(3535U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.34013205206882213;
    msg.lon = 0.7080113319814711;
    msg.z = 0.018004714198231575;
    msg.z_units = 5U;
    msg.speed = 0.9521765263591464;
    msg.speed_units = 99U;
    msg.abort_z = 0.0028830589128283624;
    msg.bearing = 0.2393536481008769;
    msg.glide_slope = 170U;
    msg.glide_slope_alt = 0.48589405273902364;
    msg.custom.assign("XGARTDTRFSTKCXOWGWHCMNIGZFVGPMAEYQEJDNRNCVPNQSJQLQRUJIBNKEFSCLIFPFUOCLTMJMMYCTPJQQBRBZLXGZMLAIDLTUZTYBVYNBZZXGTFOPJVKGBWAINSURSHAOZQOJY");

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
    msg.setTimeStamp(0.6258081583375664);
    msg.setSource(59092U);
    msg.setSourceEntity(180U);
    msg.setDestination(27056U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.9442691314588305;
    msg.lon = 0.5522952177193948;
    msg.z = 0.2988303928607128;
    msg.z_units = 250U;
    msg.speed = 0.8730321236837583;
    msg.speed_units = 4U;
    msg.abort_z = 0.5271990070057453;
    msg.bearing = 0.4651341475717399;
    msg.glide_slope = 162U;
    msg.glide_slope_alt = 0.08302792684459859;
    msg.custom.assign("LLZSOORQVSQQZPSXGHEAFEIJQQKEEUWYTBMTEHFOYSXALRHDJMUYXNYNYHCVZKRACBOCHLUSITNIZYHTNTCXKOOTEVCMNJJWPIARQKLCKGBUTNDMDCGMVODSZSUCLINDUWOWHUZEPOIPQBHRYGJRWYNMWDALXVSSGGMGIFPMKPMWFFUBYZZQBDTXNXJYVGGKVKFRBPFAWTUPAZVMBFORSKAERPEXNHFL");

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
    msg.setTimeStamp(0.9593695213253381);
    msg.setSource(57361U);
    msg.setSourceEntity(225U);
    msg.setDestination(47633U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.9014908791911138;
    msg.lon = 0.7317800454014621;
    msg.speed = 0.22875654610823493;
    msg.speed_units = 184U;
    msg.limits = 200U;
    msg.max_depth = 0.5021679880724345;
    msg.min_alt = 0.23452987528866076;
    msg.time_limit = 0.7496251644381655;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6906391873317023;
    tmp_msg_0.lon = 0.43052719960680863;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("BNYDNSQIXGAWABJWAZBEJDGJXAXRNYZVLMGDZWXVKBIQVSSPZROJGTIXURHBODSCCWZOUCMMOQVJVKPEWWESLFDRUNZCSCYOODENBKRQBDXGUMQFIMQJYOLITFHKRXOBSFGIBHUUYTZFJDZTTKWYLWRLERHCFACDKTRQOVUPTGINVTCKJMLCENPMNFJXAYJQMHGMLYAHLKTFYUHOAHIH");
    msg.custom.assign("JJNUAUQCPYAELXSKNZOUIPQIKRSFTQYDEXRXVVBYFOFGNKVCYSQPDWXQREONMHIMTLPPYUAAHEIGOQJHFZZWEZDDDDOXFKRCOLBKMJRCISZIZZHRFYIRTBRWGWJSUQPHJMYLATPMOANBACPSGIJSVWYWNTYWSTUI");

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
    msg.setTimeStamp(0.8442557458892336);
    msg.setSource(29199U);
    msg.setSourceEntity(238U);
    msg.setDestination(27298U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.39132803045258924;
    msg.lon = 0.7543849363980738;
    msg.speed = 0.6544900051231577;
    msg.speed_units = 33U;
    msg.limits = 45U;
    msg.max_depth = 0.5681920290133716;
    msg.min_alt = 0.24593655396061964;
    msg.time_limit = 0.8258890936361851;
    msg.controller.assign("IOYWUKDDMJFBOGZ");
    msg.custom.assign("BTLCHEONXNEAELRQAUDKEAQPBSBTLIONMNJHWPFHYIVZRMJQBSQYULDKPROAVFAXCGNBMKRUWDBZHOFDFIQXIKVXVBMELQSLMEFWSJOJ");

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
    msg.setTimeStamp(0.24673765421918747);
    msg.setSource(52660U);
    msg.setSourceEntity(45U);
    msg.setDestination(21153U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.7444705549854597;
    msg.lon = 0.3526360264882362;
    msg.speed = 0.9316018757348021;
    msg.speed_units = 37U;
    msg.limits = 217U;
    msg.max_depth = 0.13936807297713072;
    msg.min_alt = 0.9934741192004549;
    msg.time_limit = 0.9255924926724024;
    msg.controller.assign("ODFCDTGLBTHPBBARTPANKVHCGZWZMBIPYYC");
    msg.custom.assign("KCEIONSVQBWYNIBUKRGTROOMIFQSAAZEFMZMIQANCWGPFTIRTRDZEAGFQZPHMKUKQDTXBXGOLCCYNTDYTEAXVCHYNQGUMZFXJHYNPHBNRVVNPLBCWYRVEPVTALPUASEWMXSFUZMUZYDHDQRFXHSJNHBCIVZDSJCKCLEALBPYFYQGWVJDJEVOTIUFQDSKNXHUOWJPRG");

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
    msg.setTimeStamp(0.4586960173135901);
    msg.setSource(62830U);
    msg.setSourceEntity(235U);
    msg.setDestination(29964U);
    msg.setDestinationEntity(145U);
    msg.target.assign("WJMMRWDQOYSQPEVBVHTSXUANHTXFRCUZPVQBJLHKKEUZDVPDBDUXQAANAGRVIMQQ");
    msg.max_speed = 0.34959326572871474;
    msg.speed_units = 111U;
    msg.lat = 0.2348352316153478;
    msg.lon = 0.9961724914358171;
    msg.z = 0.7931047180751747;
    msg.z_units = 2U;
    msg.custom.assign("JIICMYADHCVICQWGFPHPNGRRKPOKKNCEBFGBFOXURHWOYBRCTFKDOFQEEBLQUCKRNCUPCISQKIJAMELTMTWAIXMSLCZLJRADZRAGDWTVV");

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
    msg.setTimeStamp(0.561200108660157);
    msg.setSource(34806U);
    msg.setSourceEntity(109U);
    msg.setDestination(55059U);
    msg.setDestinationEntity(197U);
    msg.target.assign("NLCVLFMRFDA");
    msg.max_speed = 0.12255434673445798;
    msg.speed_units = 1U;
    msg.lat = 0.48845822854790655;
    msg.lon = 0.8905587881176276;
    msg.z = 0.011371292291528001;
    msg.z_units = 108U;
    msg.custom.assign("ZPHOPQCLCVKHSXDYVHAMTHQFZBQNIHZVTRRDADLJINIQGTJFXRKNZOSXPGKUHLOEMVFMFLDUYFETCPU");

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
    msg.setTimeStamp(0.9780264777660647);
    msg.setSource(10766U);
    msg.setSourceEntity(243U);
    msg.setDestination(44862U);
    msg.setDestinationEntity(66U);
    msg.target.assign("JBCKQZSWFDKGXQPHELCLAJVFUHNEVXZKKYFRSHNUHMSPGJIOQQBIYTPNUQNSIKYPBMFKWLOPHFSMAXLXBXBNTWQADTDUTUKXRRQIXALYJGRJURESTFALWOZON");
    msg.max_speed = 0.7685195414818987;
    msg.speed_units = 108U;
    msg.lat = 0.8190272815647415;
    msg.lon = 0.022131897800542366;
    msg.z = 0.17408625726752536;
    msg.z_units = 77U;
    msg.custom.assign("IZCRHFVVQVNOVGPQSVWUSZFCZFKYZTBDAURUMQCMNNZXKLRNXXUCFYYGKLEAGBLHKBDADTARFYOJZQXFCWSMYTSQYV");

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
    msg.setTimeStamp(0.09805916868978537);
    msg.setSource(59315U);
    msg.setSourceEntity(72U);
    msg.setDestination(5260U);
    msg.setDestinationEntity(176U);
    msg.timeout = 45696U;
    msg.lat = 0.7417423941917707;
    msg.lon = 0.300425316566719;
    msg.speed = 0.6867568175117497;
    msg.speed_units = 192U;
    msg.custom.assign("RBSHVENWCILRPTZAJHUWGJFPIPQRNDKMKOMTJYMQPFXPGQEVRVUWEZJIAKLGWVRBKXTKVYSQZWJALXCUYTJMQAIHDNCROKYHJJOALGXNZQFDEVDTCTBLNYATSNJYESDZIBMORKNEPD");

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
    msg.setTimeStamp(0.9129023280893854);
    msg.setSource(30813U);
    msg.setSourceEntity(221U);
    msg.setDestination(49559U);
    msg.setDestinationEntity(166U);
    msg.timeout = 29840U;
    msg.lat = 0.6385906031115914;
    msg.lon = 0.4826566656383885;
    msg.speed = 0.22230746319059136;
    msg.speed_units = 123U;
    msg.custom.assign("PJGVICYREMDWSCTKNWRYYQHVANAWQCOUETPBLEDEPQYXVOYZXFIJOHPCVPKLENHHLFAOSQDDNILZNTGGFZSFDQBBXETFTMHHXPKSGWSCRKBGDGJHLTGFQYRGUGSQKMMZIUXZCCNZNADMMJ");

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
    msg.setTimeStamp(0.5318799934387557);
    msg.setSource(45604U);
    msg.setSourceEntity(224U);
    msg.setDestination(42724U);
    msg.setDestinationEntity(9U);
    msg.timeout = 29985U;
    msg.lat = 0.4260284383736299;
    msg.lon = 0.9017080355022933;
    msg.speed = 0.30604522370413356;
    msg.speed_units = 178U;
    msg.custom.assign("POWZBYTYXVHDQRHEEYUHUSDWNRCQIEGKAFXNTOPVFOS");

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
    msg.setTimeStamp(0.5295912541271842);
    msg.setSource(9664U);
    msg.setSourceEntity(81U);
    msg.setDestination(48332U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.4973895449624065;
    msg.lon = 0.5063321006205577;
    msg.z = 0.26879012401205926;
    msg.z_units = 252U;
    msg.radius = 0.949993800792187;
    msg.duration = 32724U;
    msg.speed = 0.25760980645521325;
    msg.speed_units = 241U;
    msg.popup_period = 24267U;
    msg.popup_duration = 8513U;
    msg.flags = 58U;
    msg.custom.assign("JCULETJOTDZMNDJHXEQLNYNHXUHZTAHSGMEAIZWMDUKKKGNRFSBALKLAJEOVYPCARWUWRGFOHXPZBVPHWYDGXNVTIJPFOHYORXQTXLPLUTLDNXVMRVNBUQVACARCIECBDGSIDQZRBKLSYJXGZBKRFFCNUTEQYYZFKSAPUCVTOIKOYQEAW");

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
    msg.setTimeStamp(0.15308538229293922);
    msg.setSource(8163U);
    msg.setSourceEntity(8U);
    msg.setDestination(62049U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.004397693320923546;
    msg.lon = 0.6833544128861356;
    msg.z = 0.057633011491524444;
    msg.z_units = 177U;
    msg.radius = 0.4688815780920509;
    msg.duration = 63981U;
    msg.speed = 0.5850197752683388;
    msg.speed_units = 110U;
    msg.popup_period = 12270U;
    msg.popup_duration = 3966U;
    msg.flags = 75U;
    msg.custom.assign("GSJSIEIALFTQSQPLZCQKYPCSBMUDPSVHVQYUDNKDTBTRHNTXSXIHIFXZHSZDKETAREFCXIYTAVZLWKPFOJOBTZIDBENZYDQFKAYRNQJGGCVEOCVMFOSUCKGFXLPXYJUGDMFPIMWIWUJVJUCVWBZORRLOWBLWTVCKAKOGYZJXXNVABTECHMMTWCMX");

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
    msg.setTimeStamp(0.10529914426926978);
    msg.setSource(42493U);
    msg.setSourceEntity(229U);
    msg.setDestination(17796U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.9106547305925496;
    msg.lon = 0.34440600237044094;
    msg.z = 0.11849754998072448;
    msg.z_units = 5U;
    msg.radius = 0.11034179766090835;
    msg.duration = 64176U;
    msg.speed = 0.38938942768233775;
    msg.speed_units = 247U;
    msg.popup_period = 56460U;
    msg.popup_duration = 42064U;
    msg.flags = 105U;
    msg.custom.assign("NJWCWRZTZDEENYSBHODHIWLNGBTXTBUMAAFLTLJTTFNVKOENDKBUGIAKYEIRNUHIGGUXEYJKSUBVZYPCKQDPMWPSFCLSCAKVQOEDRYXZBJYEUXVLQJQFLKNJARMVWMIOEFRMOUODIHDKYXVMLPWBFPMDXUVZGPPYFCMCRXUOZMUQCARBVRHAPGZSZQWTSBQFAPPDIXRXWNZIVTKFKGSQRTJC");

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
    msg.setTimeStamp(0.87988567386186);
    msg.setSource(10144U);
    msg.setSourceEntity(204U);
    msg.setDestination(32469U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.6036071864823723);
    msg.setSource(21940U);
    msg.setSourceEntity(17U);
    msg.setDestination(52885U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.9731519258586775);
    msg.setSource(23988U);
    msg.setSourceEntity(118U);
    msg.setDestination(22553U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.8287859335227588);
    msg.setSource(47902U);
    msg.setSourceEntity(33U);
    msg.setDestination(30791U);
    msg.setDestinationEntity(115U);
    msg.timeout = 39658U;
    msg.lat = 0.008795772226188991;
    msg.lon = 0.39542074558220097;
    msg.z = 0.09259556420169002;
    msg.z_units = 40U;
    msg.speed = 0.4830831371459786;
    msg.speed_units = 40U;
    msg.bearing = 0.27406024402041373;
    msg.width = 0.15964941881690964;
    msg.direction = 127U;
    msg.custom.assign("FXGNWOKHTWQLRWMUKBGBJNMJKBVYUAGZGGBASROLRQWPDQOWYJJZJNZOXWHDBNEDS");

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
    msg.setTimeStamp(0.12497665667143443);
    msg.setSource(54055U);
    msg.setSourceEntity(146U);
    msg.setDestination(9057U);
    msg.setDestinationEntity(94U);
    msg.timeout = 21996U;
    msg.lat = 0.1616161525822427;
    msg.lon = 0.13168186423310413;
    msg.z = 0.6683728345346153;
    msg.z_units = 229U;
    msg.speed = 0.30952749060354334;
    msg.speed_units = 154U;
    msg.bearing = 0.5652008250413875;
    msg.width = 0.396431340551202;
    msg.direction = 151U;
    msg.custom.assign("ZLSSLVVINJQNGYAXFBRSGXTMYRLJLGYXAHIYXWVYCKOCCKWDWVFQOPRFNHPNCFQDZZIFOXWDGBIKRNTDPPGMQAAVPUXIKCDGWCGTCOJXJOKWLZAMFMEGLOLMMZFUMZXBTBLHZLHOJTCUJWHCQBZRTRQJTSYWFKKYDKZNXFPHLRYQUBKGSQIVAJEUHZEIDUQAXOEIVPUVWSGDPIJBBYUBQNSPTHYKRAAMTPEFEEA");

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
    msg.setTimeStamp(0.32374599043119356);
    msg.setSource(23802U);
    msg.setSourceEntity(27U);
    msg.setDestination(52251U);
    msg.setDestinationEntity(165U);
    msg.timeout = 23657U;
    msg.lat = 0.7530842141923058;
    msg.lon = 0.9114443489510227;
    msg.z = 0.3870739768088387;
    msg.z_units = 5U;
    msg.speed = 0.10589067715862921;
    msg.speed_units = 150U;
    msg.bearing = 0.7603883841700803;
    msg.width = 0.1933999856535472;
    msg.direction = 86U;
    msg.custom.assign("PTPCEBPQHFLPRIFGMQPRYHJBBZTGKLDJHDTAHISYGWKWVEISSALZZACOSPSOFOCFSWCETPMZBFQJVZVD");

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
    msg.setTimeStamp(0.8495050333736185);
    msg.setSource(26915U);
    msg.setSourceEntity(124U);
    msg.setDestination(20356U);
    msg.setDestinationEntity(168U);
    msg.op_mode = 244U;
    msg.error_count = 144U;
    msg.error_ents.assign("ZFDPHGRCEHMEADKAPFTSQKCCMYIEYCMLSYOXUMDMJPWDADKYPFFLZQZTXXGDQAEYNCHOSETHIRLYDOHRWXUNBKHPZNPVMGLQVTUYZFUEITAXTTUWXOFWDRLXUBQRVLFWQQILNISAKBXTSCRKEEQKWWJJTUHKGGCRICLSPQGBUOUMDRSBFOOCF");
    msg.maneuver_type = 32987U;
    msg.maneuver_stime = 0.6747124843044918;
    msg.maneuver_eta = 25348U;
    msg.control_loops = 667270381U;
    msg.flags = 86U;
    msg.last_error.assign("KKONMSMPILUNPBMAGCRZAYDVMFRGLZTAQIHXGLLVTSOGVXXQTDSRQZMZNWIISJNUAFLKVQZDURBYIJFZXEJMWJUGEADUHWRCWDALJFJGQATIPTHPABUJEEYBXCMZTHHZBYXGNDKHKYBW");
    msg.last_error_time = 0.9334726591650664;

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
    msg.setTimeStamp(0.2634596424379061);
    msg.setSource(39376U);
    msg.setSourceEntity(7U);
    msg.setDestination(20654U);
    msg.setDestinationEntity(181U);
    msg.op_mode = 168U;
    msg.error_count = 0U;
    msg.error_ents.assign("BNUEWVZRSPMAYYBLHZODNDZHUPYJIEQXQXKQZOKIMMRHLWJYTBTLANBWACRKWPVSRKFIVSHQLJSGAQQRNPPDBOXDTHOGVCBNHHXRCZCROAKVKPYZVKTICLDFXZOISGNEZCBLSPNFYGCMAKLBNQIMJT");
    msg.maneuver_type = 4147U;
    msg.maneuver_stime = 0.2831047001014957;
    msg.maneuver_eta = 13413U;
    msg.control_loops = 4113980880U;
    msg.flags = 34U;
    msg.last_error.assign("HYCDWKIPROLJEOWTCQNSRIJEEUOCFOKKSDSOTXFQFPLTWDCZGQCNKVUZ");
    msg.last_error_time = 0.023168888704690138;

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
    msg.setTimeStamp(0.08148042218397789);
    msg.setSource(892U);
    msg.setSourceEntity(0U);
    msg.setDestination(7479U);
    msg.setDestinationEntity(42U);
    msg.op_mode = 74U;
    msg.error_count = 131U;
    msg.error_ents.assign("FDYKQSCIXGQNGCJBCCUMOEDIOGWPWBFTXPTKFBMWWRRGDDYPDKDMJESAEUSTPQUNQHGAKOCWZKWDMTLNGKOLNSUVJIYQFJWMHKPINZANZTLQBOJLWVHRXQXPETGCXHVSLTXLJWBQABJXIJEHFONMKIZUAYNZUCNKZFYSORHTNREBLUJPEAYSSMFQYZPRAAOEVKRGFD");
    msg.maneuver_type = 54766U;
    msg.maneuver_stime = 0.7841194975301907;
    msg.maneuver_eta = 24982U;
    msg.control_loops = 2676454100U;
    msg.flags = 183U;
    msg.last_error.assign("WKBSHTPXCRWSUYZSUHXVTVKXIOFBFIPRMFXGJDLGEEXQWJCONOCHRLVVAHJGHEZUSDWHRBRMRYQBUDCKANMDWAKJJESNTAKPZUPQPQNMKEPYDYNCFNOIFITADMVJPSCMNFBQEVYUMBOKNLJUQXWGSFNLH");
    msg.last_error_time = 0.401611783517011;

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
    msg.setTimeStamp(0.45572783574279396);
    msg.setSource(51880U);
    msg.setSourceEntity(9U);
    msg.setDestination(61963U);
    msg.setDestinationEntity(122U);
    msg.type = 97U;
    msg.request_id = 4399U;
    msg.command = 22U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.6996227213520995;
    tmp_msg_0.lat = 0.6041479791101803;
    tmp_msg_0.lon = 0.5845085726579422;
    tmp_msg_0.z = 0.6120174429563306;
    tmp_msg_0.z_units = 120U;
    tmp_msg_0.travel_z = 0.9579004527808415;
    tmp_msg_0.travel_z_units = 63U;
    tmp_msg_0.delayed = 253U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 49522U;
    msg.info.assign("HPOFRQLMARIXCXGYZILLZZMNPONCYDMQPIEYTZSKPBMFBWGEXOVPJNNEFBLFQWRRGUBLAKONOBRYZHVDGVJVMDXNOQSFESHLUWORKAMKAJGAZAWTOTCDETRLBRLKGVQQYSUIQOMWHXWHDWYJWUSXZPDCNSFPLUGXCYJMJBUXNEHTJSDZVKFHBHAGDYMPUGAYUVWJKIDKCNTAFCTSJCBEQLXQTEUHKVDZVRXEKUAGWCIEM");

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
    msg.setTimeStamp(0.07651460089159912);
    msg.setSource(8348U);
    msg.setSourceEntity(63U);
    msg.setDestination(49890U);
    msg.setDestinationEntity(157U);
    msg.type = 128U;
    msg.request_id = 14292U;
    msg.command = 84U;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.166141224864078;
    tmp_msg_0.lat = 0.8997610429696947;
    tmp_msg_0.lon = 0.26272938284686564;
    tmp_msg_0.z = 0.4865028400710293;
    tmp_msg_0.z_units = 150U;
    tmp_msg_0.travel_z = 0.423046479542765;
    tmp_msg_0.travel_z_units = 76U;
    tmp_msg_0.delayed = 234U;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 328U;
    msg.info.assign("RFEIQQTJUAWAXYVJVBCEEIKFRFNMSZSCGZVWAZHCWODNVZKIPPBAVSAYDEWNHTUUUJSTOBIRMWOUTDGTBKNJMDYXDKOSQURLYZHMOKNGXPLHSFZCITDZWPKEHHXLXFVTBCLXPCZEEROTIXMLBPNXCAYULNPBCTRHBWDXSEGUIEWBVOGDXATHKCJRQRMODWAKUKECQSGVRBLMJYPALZHNVPGFYRF");

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
    msg.setTimeStamp(0.8078859183961177);
    msg.setSource(41685U);
    msg.setSourceEntity(74U);
    msg.setDestination(40270U);
    msg.setDestinationEntity(158U);
    msg.type = 158U;
    msg.request_id = 14442U;
    msg.command = 129U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.008185723881261153;
    tmp_msg_0.lon = 0.20024539202701486;
    tmp_msg_0.z = 0.5785558889381385;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.speed = 0.13522735919239082;
    tmp_msg_0.speed_units = 131U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8865027996128387;
    tmp_tmp_msg_0_0.lon = 0.010755635124389262;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("UIFBZUDZULTIBWRYARMSADDRVKVPPDHSIHYAIMNGFKQZKSAYGWTSNAHPXQCZPHQJZQYEGDZOEYWLNZUEGHRYBGBZKFUTFQRIUGDCITWPENKFFJGBIYAFPKVVUMGRSNCBSWCVEUFNOXQLPNMLRXCDKAATMCOLKXLAVMPEQOCRHXWQWBMSKMJ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8792U;
    msg.info.assign("WXHDQGIANMMLSUMUXZSKVLOCVSREZTEZYRJLYNFPCHBJTBWPNJIOFDKWBOQKRJEPXBGCQOIVASOVLRZCMZFVOSMAGVLDJPOYVHBPHUPYVWWR");

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
    msg.setTimeStamp(0.46236417345174186);
    msg.setSource(64039U);
    msg.setSourceEntity(41U);
    msg.setDestination(43782U);
    msg.setDestinationEntity(65U);
    msg.command = 232U;
    msg.entities.assign("RZGLJSULOPUHBAYWLJKYWDWBASAQSFHJZWOIKNLCIMHFJXQFRVPUUXKBZGHHOCJQUETQLPCXYPBUNSMIOTWNVFZACJHMKXJWEROZDLEAQFIICTFGIDMQUKLNGMKJ");

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
    msg.setTimeStamp(0.2972931353847593);
    msg.setSource(50519U);
    msg.setSourceEntity(80U);
    msg.setDestination(17264U);
    msg.setDestinationEntity(33U);
    msg.command = 36U;
    msg.entities.assign("YMANXWGHPLTWVRQCXGUSDMMDJRJTDAHTDHQMPZMKEUXVMXFEDEVZCBNZVWFORFXEIFEBRABZBCOHGLFJKZPKMCUTTZILLYERLSYWSTFYNVKOOAKCKJCAVBBZNUNQGVOHJYFJGJNSQDSUIDTZIHQLHUYJAUFEBPJUBXSQDAPIUJHFYNRSPERLWXVDAGGIOMOGMWZADTCWNYXYTNQRAI");

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
    msg.setTimeStamp(0.7500578349522328);
    msg.setSource(20704U);
    msg.setSourceEntity(163U);
    msg.setDestination(50857U);
    msg.setDestinationEntity(104U);
    msg.command = 68U;
    msg.entities.assign("VIXJAETKBRRZWIPDKZFLBTKCANVEPQCNFMSKISYINPSGGJXRPBORQWDCRJUQQJGDYZVHOHMGAOBQHFXIPLZRXDHUYKMTFKLVTEJUAIVHOFOBSCHLQDVWOYJOASWCJYNKTGXNWOXWTUGULRAYIMAQACGFWRASHPNXBW");

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
    msg.setTimeStamp(0.3895009673083971);
    msg.setSource(44052U);
    msg.setSourceEntity(23U);
    msg.setDestination(627U);
    msg.setDestinationEntity(180U);
    msg.mcount = 41U;
    msg.mnames.assign("KZACFRRFMRMNEFGCNJQNKADUZXDGRBITWVEPZOIMLWVHROUVETLPLACWKFEPLBGTWJKMEZGZXSLCXNDJPQOQVSMXASFWQHOCBCOGTKUGYSLJQKSPFOIQHOT");
    msg.ecount = 145U;
    msg.enames.assign("VYVHUIYENCBYBJFZDRFHMKVYKGMRXEQSVZOSUDIECXZVCCXFLONOPEPOEEEMDCNSWWJFXRGWRTNZWQRDGTSBPVMTPNGRBUQUAIAQKDLPWZOUUPIIBUXNB");
    msg.ccount = 26U;
    msg.cnames.assign("CACJQXHEVKZGETMVCJNJPBIHXVTIHQELMLDBGVUFPDREWYMPKDDAGNYXLJVPPCUFNTGRYQLWDNAPPOOGCZVAUAKIZDPVUX");
    msg.last_error.assign("QRSFBWRTDEPNXUEZBJATHOXPJLVALIOOYFWDWIYCWUBOCWZTQXMEKPDHDGSUSZIZKJVOXLGCAMFJIFIZAIBSTBO");
    msg.last_error_time = 0.3480800847028531;

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
    msg.setTimeStamp(0.9748233866396795);
    msg.setSource(25360U);
    msg.setSourceEntity(152U);
    msg.setDestination(50935U);
    msg.setDestinationEntity(89U);
    msg.mcount = 129U;
    msg.mnames.assign("XOCGIGXYXSODNLCOZEHEZTKDWCQGANPXWKWCHEPMBBNBYOTJCFVNEHYZULIUJTJFQRADJIUVIHGBUZUVQUVIAPFAGXFHLRDSAOWJPDBGTJTQYDIAFDNVBIHMLAGRYRILVJWGWRSXQBOXRHZUENOJPSWQGJMKAFLMXUOWNTSYTTWKKUHMQPSIMSEDZPWTFYUNASCYMRREOKMQGHPXFQIYVYFRBZVKZ");
    msg.ecount = 171U;
    msg.enames.assign("HFHAAGQKOPXGPOIQFONVXUOTTRGJDMVMKYVBBAKXWIFDGEBTDKUDYLUAYLILEEZMBPLJKVNOLDQIAMIUFAJWSOJLJAEXWFHYREVEZEQI");
    msg.ccount = 183U;
    msg.cnames.assign("NIZLUICOKQJOMRVUKKHLBZECDSXKDJRALBDPSYYKHTVCGSDWWJERJYFBXCCUVKSJKZCVXRGZVFOCIAWABAQYGHZFGHDWSBLLBMTLZKIBYZFTEQEJUHXRLQHFODEYNUMBMUVALHMZSNNUG");
    msg.last_error.assign("NLWRWMGXKDTIQFRUNPCYVWDLOOHSBYUFEZQGJMPTQQSVIUCZROWXCMWERAKPKIBNZEDKJFVALETHATNGJBPIQCLCNFIDHFXKIYOFGLVAJKKZYNXFXHCJTAJOLKAHBVDQSPUJOPMBIYVVMW");
    msg.last_error_time = 0.6707039142830827;

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
    msg.setTimeStamp(0.9243192683032716);
    msg.setSource(5486U);
    msg.setSourceEntity(8U);
    msg.setDestination(3073U);
    msg.setDestinationEntity(20U);
    msg.mcount = 160U;
    msg.mnames.assign("OEJPAVJUZYNPXLAYKDQQEYCCRMGENXFKMOYWBFTHIBZFCNFNHZOGRTVKXQYHRYVHQHFFUCTSOUZKCIVEAAIPAZQZKEUWBQJONDRJIHSDGCWOTLEJJYUGVCUNMKMWSAVMNR");
    msg.ecount = 53U;
    msg.enames.assign("YUTGJBIHDCBDAYCMWLKIMCLXBFJPNBCPGOHSRSXVPDQU");
    msg.ccount = 76U;
    msg.cnames.assign("MHKNHNUCMVEEZFYRXQHVCPNGTPOUSIHRCDIRKERXRQLZPGSAIYWCTTZBNMMYQFQYJAJGEFIXOVWHVWUONSAYBJEXJOPZAPDHSFWIKDXGXENURJPSJLBGZVBDZK");
    msg.last_error.assign("AQUCEPYRDPJYRAOT");
    msg.last_error_time = 0.24581260949621364;

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
    msg.setTimeStamp(0.6227618747538931);
    msg.setSource(57751U);
    msg.setSourceEntity(175U);
    msg.setDestination(48031U);
    msg.setDestinationEntity(251U);
    msg.mask = 205U;
    msg.max_depth = 0.2846539333152994;
    msg.min_altitude = 0.4879540905555243;
    msg.max_altitude = 0.6855254124235698;
    msg.min_speed = 0.3859503192997916;
    msg.max_speed = 0.6973515282277122;
    msg.max_vrate = 0.07959405122032404;
    msg.lat = 0.6591866567820338;
    msg.lon = 0.06677984860137398;
    msg.orientation = 0.9665946225408326;
    msg.width = 0.712628856585857;
    msg.length = 0.4302802130023522;

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
    msg.setTimeStamp(0.9738991959971975);
    msg.setSource(45210U);
    msg.setSourceEntity(131U);
    msg.setDestination(27329U);
    msg.setDestinationEntity(46U);
    msg.mask = 71U;
    msg.max_depth = 0.41043195437938174;
    msg.min_altitude = 0.12438462885990775;
    msg.max_altitude = 0.3757711773773761;
    msg.min_speed = 0.46266529737845385;
    msg.max_speed = 0.20808955833920273;
    msg.max_vrate = 0.2021928419620438;
    msg.lat = 0.7793765018631847;
    msg.lon = 0.39698669017549415;
    msg.orientation = 0.9980820724142404;
    msg.width = 0.25929470330351045;
    msg.length = 0.8950931396405746;

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
    msg.setTimeStamp(0.2599778820211116);
    msg.setSource(41841U);
    msg.setSourceEntity(118U);
    msg.setDestination(49019U);
    msg.setDestinationEntity(206U);
    msg.mask = 250U;
    msg.max_depth = 0.2819717632251435;
    msg.min_altitude = 0.3928565342023569;
    msg.max_altitude = 0.5790039090112098;
    msg.min_speed = 0.13773583748993168;
    msg.max_speed = 0.45824037198674983;
    msg.max_vrate = 0.6206955187714495;
    msg.lat = 0.4255360666348813;
    msg.lon = 0.750400780825543;
    msg.orientation = 0.9285102490691773;
    msg.width = 0.36424411980277493;
    msg.length = 0.7747960158737615;

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
    msg.setTimeStamp(0.5224858765914162);
    msg.setSource(40856U);
    msg.setSourceEntity(211U);
    msg.setDestination(21778U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.48672378993575505);
    msg.setSource(21532U);
    msg.setSourceEntity(138U);
    msg.setDestination(39680U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.7805669332870381);
    msg.setSource(23545U);
    msg.setSourceEntity(206U);
    msg.setDestination(41031U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.6320232104163332);
    msg.setSource(16386U);
    msg.setSourceEntity(16U);
    msg.setDestination(49517U);
    msg.setDestinationEntity(199U);
    msg.duration = 56100U;

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
    msg.setTimeStamp(0.6458436997071021);
    msg.setSource(45276U);
    msg.setSourceEntity(112U);
    msg.setDestination(53060U);
    msg.setDestinationEntity(51U);
    msg.duration = 53156U;

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
    msg.setTimeStamp(0.7635517880684828);
    msg.setSource(7198U);
    msg.setSourceEntity(32U);
    msg.setDestination(22242U);
    msg.setDestinationEntity(21U);
    msg.duration = 64580U;

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
    msg.setTimeStamp(0.2968774288885647);
    msg.setSource(17758U);
    msg.setSourceEntity(158U);
    msg.setDestination(20355U);
    msg.setDestinationEntity(155U);
    msg.enable = 112U;
    msg.mask = 2217733604U;
    msg.scope_ref = 3746155159U;

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
    msg.setTimeStamp(0.2558289730579081);
    msg.setSource(38266U);
    msg.setSourceEntity(195U);
    msg.setDestination(56612U);
    msg.setDestinationEntity(216U);
    msg.enable = 181U;
    msg.mask = 2633549163U;
    msg.scope_ref = 3093921716U;

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
    msg.setTimeStamp(0.596539937346647);
    msg.setSource(39314U);
    msg.setSourceEntity(206U);
    msg.setDestination(18827U);
    msg.setDestinationEntity(12U);
    msg.enable = 241U;
    msg.mask = 4244001864U;
    msg.scope_ref = 2537374853U;

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
    msg.setTimeStamp(0.9078506589216381);
    msg.setSource(46619U);
    msg.setSourceEntity(187U);
    msg.setDestination(16248U);
    msg.setDestinationEntity(196U);
    msg.medium = 139U;

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
    msg.setTimeStamp(0.9343932039868621);
    msg.setSource(31595U);
    msg.setSourceEntity(202U);
    msg.setDestination(20056U);
    msg.setDestinationEntity(203U);
    msg.medium = 11U;

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
    msg.setTimeStamp(0.5434200817859905);
    msg.setSource(58665U);
    msg.setSourceEntity(46U);
    msg.setDestination(18658U);
    msg.setDestinationEntity(149U);
    msg.medium = 76U;

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
    msg.setTimeStamp(0.02100469876284139);
    msg.setSource(9614U);
    msg.setSourceEntity(99U);
    msg.setDestination(55112U);
    msg.setDestinationEntity(110U);
    msg.value = 0.1516411671735567;
    msg.type = 152U;

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
    msg.setTimeStamp(0.2914383389625478);
    msg.setSource(52599U);
    msg.setSourceEntity(254U);
    msg.setDestination(14052U);
    msg.setDestinationEntity(135U);
    msg.value = 0.9739357850626436;
    msg.type = 212U;

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
    msg.setTimeStamp(0.8939573377918146);
    msg.setSource(49091U);
    msg.setSourceEntity(230U);
    msg.setDestination(24947U);
    msg.setDestinationEntity(238U);
    msg.value = 0.6589430346523739;
    msg.type = 108U;

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
    msg.setTimeStamp(0.6383726499138933);
    msg.setSource(19084U);
    msg.setSourceEntity(139U);
    msg.setDestination(62960U);
    msg.setDestinationEntity(150U);
    msg.possimerr = 0.6637835613883211;
    msg.converg = 0.32495746647799184;
    msg.turbulence = 0.8457552963842139;
    msg.possimmon = 100U;
    msg.commmon = 63U;
    msg.convergmon = 154U;

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
    msg.setTimeStamp(0.04620473520421975);
    msg.setSource(13797U);
    msg.setSourceEntity(214U);
    msg.setDestination(27587U);
    msg.setDestinationEntity(51U);
    msg.possimerr = 0.2582235563698798;
    msg.converg = 0.8646916601221408;
    msg.turbulence = 0.9886743508004291;
    msg.possimmon = 44U;
    msg.commmon = 34U;
    msg.convergmon = 0U;

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
    msg.setTimeStamp(0.4522626820878344);
    msg.setSource(38251U);
    msg.setSourceEntity(235U);
    msg.setDestination(19031U);
    msg.setDestinationEntity(65U);
    msg.possimerr = 0.11319816557351337;
    msg.converg = 0.952800953891321;
    msg.turbulence = 0.1801245862903217;
    msg.possimmon = 140U;
    msg.commmon = 64U;
    msg.convergmon = 90U;

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
    msg.setTimeStamp(0.8201609365818416);
    msg.setSource(56876U);
    msg.setSourceEntity(220U);
    msg.setDestination(31260U);
    msg.setDestinationEntity(52U);
    msg.autonomy = 244U;
    msg.mode.assign("MQQEDNGYCJCZSVDAXWPMR");

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
    msg.setTimeStamp(0.1589438259084167);
    msg.setSource(2042U);
    msg.setSourceEntity(202U);
    msg.setDestination(20856U);
    msg.setDestinationEntity(46U);
    msg.autonomy = 120U;
    msg.mode.assign("TQCUXDRPAWFIOEBNAOHBUINFQJMTEEFCMRHGSTRJYYOMNAUIGZQSJAALKDSYIIEAPQTN");

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
    msg.setTimeStamp(0.02404563704611773);
    msg.setSource(64892U);
    msg.setSourceEntity(159U);
    msg.setDestination(15603U);
    msg.setDestinationEntity(191U);
    msg.autonomy = 160U;
    msg.mode.assign("XLQFTIWMMOKWCUTOLRDXWXYFZJIYLEISNSMNEQGMMYCCVIRRBMMCGBARVSZVRHSLVTANHKPOUZSEVDLYHAWUNGQFWFOXHJOKJXXQBUIXQVNUDMTCEFEHFGCCJEKFTLUVDNCWIEKHRDSIUBHKPA");

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
    msg.setTimeStamp(0.9852480234277976);
    msg.setSource(40835U);
    msg.setSourceEntity(122U);
    msg.setDestination(62890U);
    msg.setDestinationEntity(145U);
    msg.type = 185U;
    msg.op = 154U;
    msg.possimerr = 0.2617882445534645;
    msg.converg = 0.951665008437337;
    msg.turbulence = 0.6819497617785877;
    msg.possimmon = 232U;
    msg.commmon = 135U;
    msg.convergmon = 120U;

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
    msg.setTimeStamp(0.4645093636082188);
    msg.setSource(44150U);
    msg.setSourceEntity(84U);
    msg.setDestination(59526U);
    msg.setDestinationEntity(102U);
    msg.type = 59U;
    msg.op = 51U;
    msg.possimerr = 0.1605692483013028;
    msg.converg = 0.7090115321510749;
    msg.turbulence = 0.7712123021577291;
    msg.possimmon = 22U;
    msg.commmon = 43U;
    msg.convergmon = 61U;

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
    msg.setTimeStamp(0.18207456380436893);
    msg.setSource(21908U);
    msg.setSourceEntity(139U);
    msg.setDestination(41620U);
    msg.setDestinationEntity(150U);
    msg.type = 241U;
    msg.op = 41U;
    msg.possimerr = 0.5535380809457191;
    msg.converg = 0.30253199592234026;
    msg.turbulence = 0.9857824860340414;
    msg.possimmon = 232U;
    msg.commmon = 139U;
    msg.convergmon = 27U;

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
    msg.setTimeStamp(0.06706940555362717);
    msg.setSource(16807U);
    msg.setSourceEntity(12U);
    msg.setDestination(41879U);
    msg.setDestinationEntity(159U);
    msg.op = 14U;
    msg.comm_interface = 189U;
    msg.period = 27479U;
    msg.sys_dst.assign("TZDKOOPYYYDASIXQVLAKREIFUXVGCWGHENMPJGZAUWNBMSXCHUNFDLVTOROUPUIDECRAXCXGBGYSLLNXJFJTVDHDZLJXSMJZDNCTAEBRTPXMNNPBLBJSRHBKWYTQEPHSSIWGZKVAQOLGYEHRYHFRBJGUYGPM");

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
    msg.setTimeStamp(0.9154232077700573);
    msg.setSource(60601U);
    msg.setSourceEntity(18U);
    msg.setDestination(49279U);
    msg.setDestinationEntity(202U);
    msg.op = 42U;
    msg.comm_interface = 108U;
    msg.period = 5801U;
    msg.sys_dst.assign("XGHLMFHLECAIPVQHIAAZSDKGSWTBAGCNLAKMQY");

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
    msg.setTimeStamp(0.8807874203109376);
    msg.setSource(40256U);
    msg.setSourceEntity(192U);
    msg.setDestination(45439U);
    msg.setDestinationEntity(217U);
    msg.op = 220U;
    msg.comm_interface = 226U;
    msg.period = 16052U;
    msg.sys_dst.assign("JMXLOYNAKACWRLYZJUZNSVETOKBOQYGWENQBWACRSRLTUWJQLHRTXBDBVJTQHFIGRZDAUWYEHJDMUICJZWDTZKFXXUOVSEUJSAXQDZYPKPIFUDZOHNHYLYENGTXZWMGGVVRAGNCMVPMWFUYBSGFDLCOEGOSAIIVQVCQRXSYMRHOEMBFCCQNJTEAJPNBBMQSBDMOFS");

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
    msg.setTimeStamp(0.3006312400162864);
    msg.setSource(18994U);
    msg.setSourceEntity(40U);
    msg.setDestination(6920U);
    msg.setDestinationEntity(61U);
    msg.stime = 1865025389U;
    msg.latitude = 0.544553715837025;
    msg.longitude = 0.16988642554822198;
    msg.altitude = 64812U;
    msg.depth = 38979U;
    msg.heading = 56338U;
    msg.speed = 879;
    msg.fuel = -4;
    msg.exec_state = 84;
    msg.plan_checksum = 1073U;

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
    msg.setTimeStamp(0.6979355571479353);
    msg.setSource(43595U);
    msg.setSourceEntity(227U);
    msg.setDestination(59589U);
    msg.setDestinationEntity(114U);
    msg.stime = 3109673661U;
    msg.latitude = 0.20462260671232702;
    msg.longitude = 0.7799178054117719;
    msg.altitude = 49657U;
    msg.depth = 476U;
    msg.heading = 42199U;
    msg.speed = -20351;
    msg.fuel = -82;
    msg.exec_state = -14;
    msg.plan_checksum = 34070U;

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
    msg.setTimeStamp(0.30465724278983775);
    msg.setSource(18574U);
    msg.setSourceEntity(20U);
    msg.setDestination(11084U);
    msg.setDestinationEntity(36U);
    msg.stime = 3044432332U;
    msg.latitude = 0.9367352669301086;
    msg.longitude = 0.8214641070652993;
    msg.altitude = 63619U;
    msg.depth = 42775U;
    msg.heading = 38938U;
    msg.speed = -4315;
    msg.fuel = -80;
    msg.exec_state = 42;
    msg.plan_checksum = 49826U;

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
    msg.setTimeStamp(0.42122128586251273);
    msg.setSource(40648U);
    msg.setSourceEntity(247U);
    msg.setDestination(64204U);
    msg.setDestinationEntity(135U);
    msg.req_id = 54456U;
    msg.comm_mean = 2U;
    msg.destination.assign("HXVQXUFCRMAMAYQOZFUJFLZLYP");
    msg.deadline = 0.5587998443694994;
    msg.range = 0.42372263176790714;
    msg.data_mode = 33U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 176U;
    tmp_msg_0.request_id = 47241U;
    tmp_msg_0.command = 78U;
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.07256313754412824;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 218U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 42902U;
    tmp_tmp_msg_0_0.custom.assign("CZRRNVKCOHTBINOCUXKTOOYDJBLIJZANLBUNMIQZHDJSTPDGMFUPVZMSKCPKQQGJEIBEXTCENPRPYIUALFBLKTDFTEAHWLAINAVXMMWKXVRDSYFUSTWIVTQJZSFPETVWGSZCEXOQHJBGVYNACMFPZEGBDLRGRWLRIFBHWQGRXWISVTHSCCJXHFFPAHU");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 35117U;
    tmp_msg_0.info.assign("LYUKNCSMCSDPTNSZDWOYFGMYFVHNXIUFPYVEFBVRHJQVPSMWREEQHDRLQFGKBJSHRVODWPOUE");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LNSUBVQISTMQIXZOMYTMGCMBRUZWMXKAKONGZEJLKIXWBEYRFCLUYGTPAFXBOEJQPDPRHYPPRRAUMRBQUOONSPELGZZNVJBBDMSYIXSPCIKJGQBJWXFLE");
    const signed char tmp_msg_1[] = {100, -121, 55, 69, -46, -89, -113, -44, -66, 120, 98, -67, -45, 104, -8, 58, -100, 120, -8, -56, 70, 58, -72, 48, -96, 77, -76, 87, -122, 98, -68, -49, -64, -77, -24, -73, -42, -84, -43, -89, -111, -37, -8, 64, 122, -56, 38, -23, 19, 72, -113, 114, -13, 83, 6, -40, 66, -103, 99, -84, 82, 14, -83, -82, -11, 119, -71, 108, 113, -28, -43, -75, 110, 5, 31, -43, 98, -103, -20, 106, 24, 124, 120, -80, 79, 76, 15, 68, 108, -72, -35, 101, -88, 116, -55, 100, 42, 3, -27, -8, 21, -12, 103, 21, 14, 15, 75, -15, -37, 96, 107, 62, -66, -29, -56, 25, 0, -67, 17, 116, -126, 92, -107, 108, -81, 62, -51, 7, 15, 33, 75, 46, -6, 54};
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
    msg.setTimeStamp(0.15785710619042725);
    msg.setSource(9490U);
    msg.setSourceEntity(170U);
    msg.setDestination(49679U);
    msg.setDestinationEntity(177U);
    msg.req_id = 21143U;
    msg.comm_mean = 4U;
    msg.destination.assign("BNTBAZMTVWNHDDVXSYJOZBPPNFUFXYTXXPIMEOTCJUGEBUREDOMPCWLHVRFYKVJCEVIDWPJMSYQOISPQYERIRKPSEKVWZJEGBDSRUQAIIVDFQKBLEVWHQBUNIZPNCWGAEKLAMXMCQDFZOHJQLTMWXJTGXROLJLDWRGGSKHBHLOESTTULP");
    msg.deadline = 0.012854189168143071;
    msg.range = 0.6013266480637934;
    msg.data_mode = 233U;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 3876U;
    tmp_msg_0.type = 248U;
    tmp_msg_0.utc_year = 21958U;
    tmp_msg_0.utc_month = 183U;
    tmp_msg_0.utc_day = 173U;
    tmp_msg_0.utc_time = 0.4900478717546628;
    tmp_msg_0.lat = 0.1790950838885944;
    tmp_msg_0.lon = 0.15235528052882985;
    tmp_msg_0.height = 0.3602536210014755;
    tmp_msg_0.satellites = 136U;
    tmp_msg_0.cog = 0.2613794952693502;
    tmp_msg_0.sog = 0.6714296903764672;
    tmp_msg_0.hdop = 0.10889338137129823;
    tmp_msg_0.vdop = 0.39995823180722;
    tmp_msg_0.hacc = 0.020009247459506385;
    tmp_msg_0.vacc = 0.6001626732620132;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WWRKEUFDXPXBQCVJWDSPMKANQUDBERTYDYAHRRZRMULGOWTSBLMHZCYHRPBKPIMAZIPJVVWSGLJIFRBQGOMRMKRCQKOBQNTGHLOVJOAFDVNSCLZGKKWXEEFSALIPYOSPFOBJCCAXUUMNHGEWCTEXGZJPTDHNWRVTUSKFZNTIGPNNTZVEIQO");
    const signed char tmp_msg_1[] = {34, 34, 41, 74, 72, -37, 97, -94, -116, -14, 123, -74, -122, -124, 96, 48, 108, 25, -105, -24, -36, 43, -101, -26, 93, -52, 7, -19};
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
    msg.setTimeStamp(0.7930794479838985);
    msg.setSource(42747U);
    msg.setSourceEntity(38U);
    msg.setDestination(65381U);
    msg.setDestinationEntity(96U);
    msg.req_id = 286U;
    msg.comm_mean = 112U;
    msg.destination.assign("AUJMUEXERIGZFKFVNOIBHLVWKOXKJJTDNPDVOUVKZOXGRNSQPBNXUNCAT");
    msg.deadline = 0.9009041969327958;
    msg.range = 0.49429115833223625;
    msg.data_mode = 84U;
    IMC::LblEstimate tmp_msg_0;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("UCZVSSQOROFELD");
    tmp_tmp_msg_0_0.lat = 0.9893906707827307;
    tmp_tmp_msg_0_0.lon = 0.03275866982568543;
    tmp_tmp_msg_0_0.depth = 0.2871782262188224;
    tmp_tmp_msg_0_0.query_channel = 10U;
    tmp_tmp_msg_0_0.reply_channel = 243U;
    tmp_tmp_msg_0_0.transponder_delay = 124U;
    tmp_msg_0.beacon.set(tmp_tmp_msg_0_0);
    tmp_msg_0.x = 0.7573557733982745;
    tmp_msg_0.y = 0.3892012398153548;
    tmp_msg_0.var_x = 0.9818681072606971;
    tmp_msg_0.var_y = 0.17024123889309295;
    tmp_msg_0.distance = 0.9061210678302206;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KGUDRDNQVOVTKLAZYINWYMTYFKNRMIXGYUXPKVBRCFSCKRJGUNBWWFIBPFOTZJBWCLXGHZOCZFRUXLPKEZPTFIQACQBGUZQRWNPONPBMYWLJATJMIIDMWJMJYDJHZUCLJLHVDXECSYIAPEMYEXHDSEUQNJSXUTOEXBDSWMXIQMBDPVBOIMCQFGNOOVVRUCSRHPSH");
    const signed char tmp_msg_1[] = {-85, -48, 45, 60, 56, -34, 100, -103, -87, -114, 70, 67, -120, 98, -57, 62, -72, 33, 66, -63, -69, -33, 108, -109, 100, -16, 87, -4, -7, 62, 27, -48, 118, -13, -65, 8, -80, -29, 14, 93, -70, 63, -86, 75, -89, 121, -35, 74, -109, -88, -15, 90, 62, 112, 50, -75, 122, 25, 26, -56, 90, -41, -80, -98, -121, 26, 91, -94, 30, -19, 59, -58, -13, -28, -46, 6, 98, 54, -34, 22, 58, 38, -119, -60, -29, -96, -117, -123, 83, -48, -86, 47, -115, -11, -83, -14, 29, -3, 44, -22, -117, 104, 75, 71, 37, -39, -113, -90, -115, 122, -16, 18};
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
    msg.setTimeStamp(0.6401578986196063);
    msg.setSource(54989U);
    msg.setSourceEntity(225U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(224U);
    msg.req_id = 4375U;
    msg.status = 162U;
    msg.range = 0.8268745173590014;
    msg.info.assign("ASDGUAJYWLZOLNMJWXKPSSDVFLCIZDTWRLSGXGOMXQRYCGYAJEYQHZHVBRERYHEIRBPXIV");

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
    msg.setTimeStamp(0.19420795479590414);
    msg.setSource(49552U);
    msg.setSourceEntity(4U);
    msg.setDestination(28835U);
    msg.setDestinationEntity(125U);
    msg.req_id = 10793U;
    msg.status = 161U;
    msg.range = 0.08813979206028866;
    msg.info.assign("JDRIZPKSNTLTVRAECIDKCBTNX");

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
    msg.setTimeStamp(0.6590395711654895);
    msg.setSource(1776U);
    msg.setSourceEntity(141U);
    msg.setDestination(12137U);
    msg.setDestinationEntity(148U);
    msg.req_id = 19225U;
    msg.status = 126U;
    msg.range = 0.8072522467554532;
    msg.info.assign("KKLKUNYRCISGJOYEYAYEDYYVMEYAOJMUMIWTIZXGZSWNGQKOZOVTHXJLJOKAJWFHLESRJQLVTIEQBBHHFROVIWZMGDKVJQMVSDRMBQRFVWDURCRDCRPXXPQQLPBGKUGUSSNHWQXBNCSHCAIJMTJXGL");

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
    msg.setTimeStamp(0.5273720701657078);
    msg.setSource(8386U);
    msg.setSourceEntity(230U);
    msg.setDestination(35515U);
    msg.setDestinationEntity(69U);
    msg.req_id = 4542U;
    msg.destination.assign("MQPPXKSSHTSLPOSJPHINABYNMDTHAXPFVGFTRYOWLYAQMUKWIMAYULSWDTPXZQEHVHBAORZWIDZCKQONDXUXUVERTXLOXRAJQIOSOIGZNIBSLCUYCDCHRHWJRVJTOIWLPWFJUWFGUNPFSIJOMTRNGVAXFPNYOEKZGZEWELYHCFLBBKQRTVXKHCKGZBZJMQDZWQVFSPJVNEMDABKUFQBFZSL");
    msg.timeout = 0.9931671385573219;
    msg.sms_text.assign("TISFNABREDHCKBEZEWSNVORAQXTZZIYIRPHDDVRLHMAZIMCFNBRSTWOPLSJISWREU");

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
    msg.setTimeStamp(0.7348487954631969);
    msg.setSource(9507U);
    msg.setSourceEntity(188U);
    msg.setDestination(49101U);
    msg.setDestinationEntity(152U);
    msg.req_id = 38544U;
    msg.destination.assign("OBQIOSTQEQZNLNAOAPBSBRAPVTMGZXMWOXUJEQMIUTNLBOXSAKUCPNHFGZKJJYERT");
    msg.timeout = 0.6374467092879282;
    msg.sms_text.assign("XGBJLAWTTAYSQJXKOPTMNZVQAUMSLNZHHNUNJHCIKEYVVPIWNPWSOAGXTAKFZINCUABEGSMGWOVONTCFXEKNKZFYCJLYMZPQQVZDETCVRIMBRZCDBDDCUUFCEFWZJIYEXAVGZJQPOXFHBSBLXRCLBQELOXWSGFNRGJSRFYXWNCSKYUVQLISVHDUKGHOTPPBROSKQYRMRMKAWEYLRJLLDUDWAD");

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
    msg.setTimeStamp(0.7300764129125917);
    msg.setSource(31260U);
    msg.setSourceEntity(88U);
    msg.setDestination(45938U);
    msg.setDestinationEntity(70U);
    msg.req_id = 37249U;
    msg.destination.assign("WUPBULQDGOJOSDJNXTGCBMSSGXPACKFZHQYWCDSMBIDSAIRHBRTAXQIKVJBAMJOJZCCMVVVUU");
    msg.timeout = 0.39180377267178357;
    msg.sms_text.assign("OQCMJKAREMHFUJDRILOVAMQHCHATWXXNHGSFDCCALTPTWPJORYKMIMBGBDVTYDUOVFEFNBVRMGVZKH");

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
    msg.setTimeStamp(0.7778605523710115);
    msg.setSource(36425U);
    msg.setSourceEntity(166U);
    msg.setDestination(49085U);
    msg.setDestinationEntity(44U);
    msg.req_id = 28039U;
    msg.status = 120U;
    msg.info.assign("XVROCMIDZXVHCFPAPKJVWOLQSHL");

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
    msg.setTimeStamp(0.8980389418697798);
    msg.setSource(35553U);
    msg.setSourceEntity(202U);
    msg.setDestination(30739U);
    msg.setDestinationEntity(108U);
    msg.req_id = 7293U;
    msg.status = 46U;
    msg.info.assign("LSAEHKTLIHPRAUVTYLRZZFTOPYHYDQSHKXTBOPRNMBQZIXCSSKGFWYBOVNNZYKSCQGFBDEWSLEMJHUZILTOPTUGRMJIQNELWCOLURVYXXUIOHQHGDFJMBPJCUEHCDRPCKONIFKIZBXWMYECPXTMMWAZWVWOORRMICFJNWTVUALXPFWGMJDJRE");

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
    msg.setTimeStamp(0.3206456786273423);
    msg.setSource(45091U);
    msg.setSourceEntity(71U);
    msg.setDestination(58510U);
    msg.setDestinationEntity(192U);
    msg.req_id = 61711U;
    msg.status = 36U;
    msg.info.assign("FSFDWDCQKVSQCLDWERAKJNJBIRQAONJZEYLHKOPNTPOBKAKTMXSKFWEXBVFEHOGJRISFULESHLKWGYMXWZNAHXJQMLOAEPCAIHMIPLARODJRIUQTXLRBQDXWLZBVUUTVPZTGGUFAUCOZGDGVSEDNCXVPDBQPLRRNMHTQNYJZUGDLTYPUOHBRWSKNGKJAE");

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
    msg.setTimeStamp(0.387321144408195);
    msg.setSource(32875U);
    msg.setSourceEntity(209U);
    msg.setDestination(3366U);
    msg.setDestinationEntity(180U);
    msg.state = 139U;

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
    msg.setTimeStamp(0.27351586647373927);
    msg.setSource(64148U);
    msg.setSourceEntity(16U);
    msg.setDestination(16520U);
    msg.setDestinationEntity(163U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.7505138229645931);
    msg.setSource(63670U);
    msg.setSourceEntity(5U);
    msg.setDestination(9437U);
    msg.setDestinationEntity(115U);
    msg.state = 3U;

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
    msg.setTimeStamp(0.7673347805400135);
    msg.setSource(14712U);
    msg.setSourceEntity(239U);
    msg.setDestination(45976U);
    msg.setDestinationEntity(169U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.9929306150629688);
    msg.setSource(59460U);
    msg.setSourceEntity(207U);
    msg.setDestination(43301U);
    msg.setDestinationEntity(244U);
    msg.state = 34U;

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
    msg.setTimeStamp(0.2597580910999252);
    msg.setSource(51917U);
    msg.setSourceEntity(101U);
    msg.setDestination(13895U);
    msg.setDestinationEntity(40U);
    msg.state = 67U;

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
    msg.setTimeStamp(0.8324743625556967);
    msg.setSource(38403U);
    msg.setSourceEntity(56U);
    msg.setDestination(35935U);
    msg.setDestinationEntity(192U);
    msg.req_id = 16805U;
    msg.destination.assign("JEJZTNXMDXLIYKZNAMUNNASJYFSTVHSUKKBEPYXKDITTOWVQUEMBPUMPIWQSRDTRXYJGWHRQRUUPIHACGMOAWOGFKJDDPCYDIVZVNTCYLQBDGXSMCVEEFJQGITZDBAHALWBHHXLFTKGYWHSSPKZMGCESBMVCGDALFNTTRKFEHYPCQKVMMVNPFOQXRYZBWJJYJXJZRQAOPWSCKPBRIFBAOOEXULIIBA");
    msg.timeout = 0.42898474831455;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 24345U;
    tmp_msg_0.value = 81U;
    tmp_msg_0.error.assign("OEUXKHFUVUAFFEGPFEHEANIDLDZTQMACOQGMYIGVWPIAHBTGLYOIMBDSREZQGBBXRPIKKFWBMLSOKROJLVNHTSNDISQWVDFVEDDKZCZGJTSREXBQTUVSLCTPRHZLWJYFKOXGSCPLRBQMPYJNTGZFEQDAMXMJMUVESVNJTUJ");
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
    msg.setTimeStamp(0.3102683320447951);
    msg.setSource(40830U);
    msg.setSourceEntity(166U);
    msg.setDestination(8665U);
    msg.setDestinationEntity(154U);
    msg.req_id = 48757U;
    msg.destination.assign("UKCMSQSIXUGQQUXAWJFIZMNHHREXPYLKPGRDVPWMBCBJGAODTISSZTGEKRSGEWECGVXJWHYOVDZHVLFRKODVRNJEQALVPECGFWWJXNDTPPJLNMJCBGHLZEINLRIVQBAYKZPNZWDDOOASAVUHENHWPVMCOITJZBIZYOURTWXXLSLUOKXIFEUMTEGZLYRBYWNRIBXQFTPMSYYF");
    msg.timeout = 0.6589250225100879;
    IMC::Voltage tmp_msg_0;
    tmp_msg_0.value = 0.0723753572361554;
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
    msg.setTimeStamp(0.6284134084033888);
    msg.setSource(33808U);
    msg.setSourceEntity(207U);
    msg.setDestination(19498U);
    msg.setDestinationEntity(205U);
    msg.req_id = 37472U;
    msg.destination.assign("RBCIHMXQWKYJUDOWMNWXOHRVGDPOZUGLAAENZFLTNMZHEQGNRIOTOJFDKRFQMNKPMACIWCHETXHEVBBHZBBTECTAMPXGIUSITVUCFVJPCEEFNFOGXQNISRZKVTWLAQMSTLNZMCEKVAGTSBQ");
    msg.timeout = 0.9707017028784289;
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.11798554256032756);
    msg.setSource(47199U);
    msg.setSourceEntity(115U);
    msg.setDestination(9106U);
    msg.setDestinationEntity(48U);
    msg.req_id = 57934U;
    msg.status = 195U;
    msg.info.assign("DJRAFYYRUOHKHSUSXBQRVHWPVJXIXPXAMCSEXHEEKLOLFUHAUKAODTQSQJDLOMKUWCHSRLRBQISGZBLEFYQESMGCYJPGAJYDKKLKQQTJMLKMDNWTRBZVFGPZQTNHEBEGHIXTIP");

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
    msg.setTimeStamp(0.7054701036281937);
    msg.setSource(13390U);
    msg.setSourceEntity(167U);
    msg.setDestination(14859U);
    msg.setDestinationEntity(178U);
    msg.req_id = 56081U;
    msg.status = 245U;
    msg.info.assign("BFQMFHXULZIOVKTJQEMMEUZHWEJVEWRHMTTLJXDQEXNGSRZYNYQFJYSXGNPZGUCPOCFJGRCUBRBUBDTKPHRQABVWALXVFMKMHNWUMPIUAUDEYRBALWICOQKKXKNXGKSNVJQQIZCGPMRLYTWTS");

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
    msg.setTimeStamp(0.9191580701820917);
    msg.setSource(25598U);
    msg.setSourceEntity(111U);
    msg.setDestination(372U);
    msg.setDestinationEntity(169U);
    msg.req_id = 38112U;
    msg.status = 3U;
    msg.info.assign("GIBCNHUHPJIIWDCUKBJTDSIPMZQVFWOZPCEJBQHVSIZYRUECDQZZWCAOBYPUWBUHEJIOPACWMHWMYKLRRPVEFLIXDSYXMDGQLAVFRTXLMVFXGKSNCGCNQQKOHLKAOFFKXZRBANZLMTCEYNEJAEUSSJNLZRDWLWTSMFKXGDUBEIVRETQVTOOZCQQFXVDXZNYKSOSJYFXGNBOMTDRJIYOAVAXRRKBDUIFMJPVPMHBSTGTPHNJWGYGQYHTAENG");

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
    msg.setTimeStamp(0.35289276579943063);
    msg.setSource(4632U);
    msg.setSourceEntity(107U);
    msg.setDestination(43969U);
    msg.setDestinationEntity(218U);
    msg.name.assign("CZWMYKQWPFYDRSKMIZHTDOWFVXTTE");
    msg.report_time = 0.4693927778728132;
    msg.medium = 33U;
    msg.lat = 0.2614092248854012;
    msg.lon = 0.3372668039776535;
    msg.depth = 0.34477275769390836;
    msg.alt = 0.9207903659721676;
    msg.sog = 0.16748371543315355;
    msg.cog = 0.5574911613156973;

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
    msg.setTimeStamp(0.2626341559082427);
    msg.setSource(61464U);
    msg.setSourceEntity(5U);
    msg.setDestination(19222U);
    msg.setDestinationEntity(252U);
    msg.name.assign("PQGPDLBTPEGCFVAUPZRXYJVMVWMQCPNX");
    msg.report_time = 0.3315404537942367;
    msg.medium = 143U;
    msg.lat = 0.8653845545872337;
    msg.lon = 0.41884244494987055;
    msg.depth = 0.6742864947607783;
    msg.alt = 0.45685131740051577;
    msg.sog = 0.4030782761918943;
    msg.cog = 0.02343174550436944;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3752531373U;
    tmp_msg_0.start_lat = 0.7219540055692555;
    tmp_msg_0.start_lon = 0.2489264366926658;
    tmp_msg_0.start_z = 0.7581630064457333;
    tmp_msg_0.start_z_units = 129U;
    tmp_msg_0.end_lat = 0.8527959913707741;
    tmp_msg_0.end_lon = 0.8834802319155162;
    tmp_msg_0.end_z = 0.5794100297750299;
    tmp_msg_0.end_z_units = 224U;
    tmp_msg_0.speed = 0.703936075552131;
    tmp_msg_0.speed_units = 59U;
    tmp_msg_0.lradius = 0.30200557026570807;
    tmp_msg_0.flags = 71U;
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
    msg.setTimeStamp(0.8945466145986892);
    msg.setSource(58155U);
    msg.setSourceEntity(246U);
    msg.setDestination(11809U);
    msg.setDestinationEntity(88U);
    msg.name.assign("FWBXNJMHDOOSYPIMYDIPEXWXEQHERGGBALZMDVQDVSGYEWLTWKZNDWPYKUMQXKMRIBGWFFRISTVMOGUKQCVFHSMNDRTOLDUIXJKJEKNLIHLLRNSZBIQHHMQHOAMTA");
    msg.report_time = 0.8502904323859904;
    msg.medium = 100U;
    msg.lat = 0.7735362382723736;
    msg.lon = 0.17775819765343082;
    msg.depth = 0.5639799054100088;
    msg.alt = 0.5899570607106606;
    msg.sog = 0.3583072256129969;
    msg.cog = 0.4082767894747108;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 50580U;
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
    msg.setTimeStamp(0.5996680170078492);
    msg.setSource(41323U);
    msg.setSourceEntity(227U);
    msg.setDestination(37733U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.05424080909764528);
    msg.setSource(2450U);
    msg.setSourceEntity(74U);
    msg.setDestination(1475U);
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
    msg.setTimeStamp(0.4836128004617042);
    msg.setSource(34011U);
    msg.setSourceEntity(233U);
    msg.setDestination(49862U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.6228623883128896);
    msg.setSource(33900U);
    msg.setSourceEntity(109U);
    msg.setDestination(7645U);
    msg.setDestinationEntity(59U);
    msg.plan_id.assign("RRSNKBVZRUBDANOQXYGWYTNLESEKTSBFUILMWHFMSPEAEDLPSWVPWASQAYGYJAOAHWUCLHYLHQOSCBQRZEBMD");
    msg.description.assign("HEUKVWAIPEEKLUYWRXPMLJFFKDLIBRLGNQGJTORVSJKNGHUPTXAMCGYHMEAAFFBOXTAYUXXBBPBTSQYMCTWDKXGTZHZVCPZCDNGULIEYPZQZVEMMHDLV");
    msg.vnamespace.assign("IOUQTLVMVKTIMKMYJXRORWVWJWAYPBHPUOEOZSBELVCQUZMIDSLOILJGFWGCYFNPCNXOUVFPUGZQNGMNHRJTYGHASNTPFECWEXDDAXGQRBFINZUYTUVQGSBBPXSKAACKWCZAPPXDVSBIJHGRZBEPWQEYCCKJIBQXIIKYZXCWLHHDRELULAHQRNQJKDPIFASN");
    msg.start_man_id.assign("YGZYCMKZCOMHVJSECOUZYWCKTLNTEQOFYACFRDZBBYVUPBLYJP");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QZVNZSYWJWSLPYVHLEDZEJPEOIHIAENYMAXBHGFPYCKYFSGXUQGWBCRLLGCXUTKKOJFQVMTNDLTCUCEFRNGISPQJVJRUCZRFOTFVHBDGNVCJMIMLVKUGYZLPORDOBMJVXRKADLWTBKSSDJZCTZIWEOUHZQXQWKATFDGPOJAVFUTHEVNRGBBPWTKAMLYDIOSYPDAXUHFQ");
    IMC::StationKeeping tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5969693174153476;
    tmp_tmp_msg_0_0.lon = 0.8974490956447618;
    tmp_tmp_msg_0_0.z = 0.2533698443666095;
    tmp_tmp_msg_0_0.z_units = 6U;
    tmp_tmp_msg_0_0.radius = 0.046007726545912675;
    tmp_tmp_msg_0_0.duration = 9714U;
    tmp_tmp_msg_0_0.speed = 0.150142096802919;
    tmp_tmp_msg_0_0.speed_units = 90U;
    tmp_tmp_msg_0_0.custom.assign("ZSUGAUTTHYHSEBVJPHKRAYHDAZWKVXQFMEPJDEPJTWBFZRMCPJXKXNUDANVLZOIUGRIYIKDRNNDBFJDBMTQFOGQULDUTGLZIJNBPZEUXIZQMBAVFMLBWRVGWTCOWFJEKCYPCNB");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LinkLevel tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.743565930877866;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ADCPBeam tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.vel = 0.025014237478194867;
    tmp_tmp_msg_0_2.amp = 0.4018537869502654;
    tmp_tmp_msg_0_2.cor = 1U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.03201230396996968);
    msg.setSource(62932U);
    msg.setSourceEntity(145U);
    msg.setDestination(10637U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("OKPPKWXPFYTKDFYXWQPNIUEYATUDWFTFCULHNFLYBKXFLXEDUCZHMXYBYBXUJIVOVRCLGVQFJIMEMHLLGLQTBMNUIQHKAXHZPCJDFSVVICVVOAEEXZSKJBVZQBWGAGEKPJTWENODZ");
    msg.description.assign("HLCLSSGAEWPYNGXZUPCGZICKRLEJK");
    msg.vnamespace.assign("YRPXFITBUMYNKCDYSWEXJJOQPSWXRWDZNRQMGAFWRLYVXZODOWXKXEOJZLYNZZMLARQQJWYCKRGMSVFIUZNTBPUWUHXROLVTVGEVZKRCRNMIKJGUVVWDTFIGCHILMHD");
    msg.start_man_id.assign("JGYPWHGUHYKJTZKGHWGLFEXVTMEFARRQPUJDDCMSEXOQEJBIQACILWQZNZQFNQOHYHFRUUNOPVHHKNWIPIPHBXCRTCCIMDAZBLWJQIPTZMCABONMRZCHRIOKDAPPJFSQJZXSWVVDWVGTJNMXYAGBKTGFXBUTMPAYEXATRWCBTYDSLOBYOLLWIDERYHILSLYXEKOLCDSSZEFNFR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FKEQSGCPOGHRMUTKSQRWRGEMXVVWEUOFTCKIWAYYBA");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("CAHPLKYVXZPYVDEJESJJSQHPCATBVJICBHNKDIWEPVJQGNRIBAQKPGSWDRSIVZJSGMCMEUDMMZLNOUOAQNOZUILFEGYURKPBQWFTN");
    tmp_tmp_msg_0_0.formation_name.assign("XGCDACMPUUUQAJOIFIMSFMKRNEWDLZWOKYEJZIGLIBUJQAPNBHTCKLMREQXGPJHRMMZXLIKEHQXXEITWQDOQRZAGHHZDCFKQYFGUOZJUWSKGIHGAMMCYNDUPSNPMSYSXAHNVSIVUYLKRXBOPJBFJPARFLDRIVVOVWVTMEFFHYOTACNWKWEVCQLOJVZBNGQZSZKSSNELFTWEYTDQZUCTLPB");
    tmp_tmp_msg_0_0.plan_id.assign("EBMHUBFELVILRXFQCTRKVWZNYPLYPXQQHMZUDSOEIPSLQPAUAQPAWYKOTOYKKWFMSZZUVNGNLXXJJXSYZICCCCQYTBSRUJBUQXPGTZMNVRLXCJYQEIMTGMDHHAI");
    tmp_tmp_msg_0_0.description.assign("XLHAKBNIRPYNDOCLLEIWOIJUNRZHSHCPYVDXFTLWQWABQPKGUEHGHVNCFGRTZNHGNPAPZQRTFXEDTWKROTCUTGZAUMYFJPMRGXYAKLBNIRGCBBZBLDJSFBBQMMWYOYVFTTQADPYEJIIZAZWVQFVHHXIZTOP");
    tmp_tmp_msg_0_0.leader_speed = 0.37035878500669117;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.3631934631381686;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.490846001677928;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.34244341997118855;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 28224U;
    tmp_tmp_msg_0_0.converg_max = 0.5445614747131761;
    tmp_tmp_msg_0_0.converg_timeout = 22121U;
    tmp_tmp_msg_0_0.comms_timeout = 25131U;
    tmp_tmp_msg_0_0.turb_lim = 0.010259784878454248;
    tmp_tmp_msg_0_0.custom.assign("FPHFDCNJMMBRFPXJEJSAQVQIWISLYHYDIDTZXVYSWERLROMPQCWNPFCDVXAVCOFEXHLETAGRWOKZLGKMDWKZLJSZKKGNUECLYYRJMOWFYLRGQKRRVBAALPNWXGEEHUONRTSIDAVUBOZPNC");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredHeading tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.05496976843635415;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BIFTPOXLZWEKHVJNMODDTR");
    tmp_msg_1.dest_man.assign("UMPFYXWTDQAYWRLSUOEAGEADDFALLRZKFOYLUHKOIXUGVOGILGUBJPRTXFNLXHQBNZKNAIHGABMMZEYNBAIFAAO");
    tmp_msg_1.conditions.assign("CPKLZPRDRIXQKSOIEYEYLEXQFGQTFJAZWEABBUTVPHGHNFHFNFSNWYOGKZHCWGFGOXWPZCL");
    msg.transitions.push_back(tmp_msg_1);
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_2;
    tmp_msg_2.value = 0.29767031848079295;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::Sms tmp_msg_3;
    tmp_msg_3.number.assign("KJXBAYYHWHNNFBPHDVXZSYHUTPMIFKQDPDHZYZZSGSOEMZIYOPPKRTOTPBJLWGMWRHCDFYNYDSAJAQMGVMQBXUBBUXNLZREJCBKKXCIMWSNAWUERJADNLRJZNLLJWNJCOIOAOLCLFZWPSVJTYEXYBIBCOUURCLITLCZKGOMIWNHITDKGFQIESONHAIOWQKR");
    tmp_msg_3.timeout = 31810U;
    tmp_msg_3.contents.assign("VTRLTUPWCRCWEBZACMQCSRDIVSWDMGPSXRQWVORMWTIDHZRDYHMFEJBUGCLOJETGZOETSJEAVOFZNKNQTGRSJAJLNYDSMGWFSPVVL");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.1094622612631182);
    msg.setSource(60796U);
    msg.setSourceEntity(98U);
    msg.setDestination(35177U);
    msg.setDestinationEntity(1U);
    msg.plan_id.assign("DTUOYLXQJSOFLWWMUNWVTZPRGKGPJOQSUVXABWMOXUSPDNIZAZLMYCCSPPXJXGFKYNQVKXRTLOSBICFHBKRMKZDMAFMRPDWGVRMKJVAQUMTIFYVKEFGZIOXGPARJGNZJZWHIQMDBDELHQUUJILNWCEDFQHWUEVDAYYHBWIVJCKPVOHEQZY");
    msg.description.assign("SGHCRVIDDREMDAOROYMWLBOJMADDCIHSRNMQYCOZBAPOHZNMICGDTRSGRSXZMEHFEEJAFADLIXJMYZVGBPEPFPBBNHMOQQNWCJTLEJGETKFPQCXVZSTZDKFACWCLLWWKITZKIBGILLKTVKJYNAVJFQXCLZUAJSSWUTGYMTOPPWHRMYKFPYRHJQSFUVGFXB");
    msg.vnamespace.assign("GCRZNNBXQYOUDEESFBNLVIAU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("KOXZKDUVRDCZQBHFYPVCOQAYFEDJIFFSMGRKQXQZGLMSNPPXRNSHZKWTJXMMBKFAYTLHXVENWJFXSHHNREENOCJLAHEDPDUNRCUSYPTXCGHEZAIAPDYTDMWCDHTBVJWKETJKUFQMXABVUDY");
    tmp_msg_0.value.assign("UAIXWZREAJVPRACMNNVRSLPEEQCRSNFIIUIMDFZTFWOWUJKAAVYUESDQORAWUIURXBGTGGVJGZZDKKYMCOZGURFWYZWOAEMABXHGXOGPSYVPKVFOZSNZWHBGLYLHTACSKDBMDYPVHYTHXLVGLBVIEFJHHTTICTOFISJZSMAWFLTNJFKQNDRPBBSKXXQNPMLJNPQMDRJTPQKEOWPBDWCQNSIDBCUQECOI");
    tmp_msg_0.type = 19U;
    tmp_msg_0.access = 172U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PBNNUJEZWFKRUXFCSXMSHUKEKGXDOKMRFORQTIPTPFGTYKIZIIGLUNNYBWNAPSDVBCVPQOCQZAAWOVKT");
    IMC::EmergencyControlState tmp_msg_1;
    tmp_msg_1.state = 100U;
    tmp_msg_1.plan_id.assign("GMDPISAAKGQLSZUXKPXRJYTSRVYXPIFEYVMYUJHCOUKKHTFJUZEYCBNHFNHNSADWQKIILWMHHWPWTYLACTRZXVIRMB");
    tmp_msg_1.comm_level = 189U;
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
    msg.setTimeStamp(0.8599601143694086);
    msg.setSource(32776U);
    msg.setSourceEntity(216U);
    msg.setDestination(7654U);
    msg.setDestinationEntity(30U);
    msg.maneuver_id.assign("UPWOEKKRKJLSXBULVEASQJPKCRFYWYBFXMMVVXPUGTPBWGDYZVYTFWSYOCXMOPALQQMUSOZOUJUPKPUYNYBRFDUXATEWHGINYPAGAFJKJHPZIRCRIANQROBAZSMHKJIXNGINSEJGFAZVVLDTNKDIHYLWGVTJQMCSXGCEJDUQNCDZFQSLEBOBWMQGIVYWBQODRTEVTRTJPBCNXDRNGEMEWZIBULZRHHOXCOQVDKCFKSLMZFDFHWZMLTIICH");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.9151116588340034;
    tmp_msg_0.lon = 0.2960595876474259;
    tmp_msg_0.z = 0.12041462815967119;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.speed = 0.2498064754408117;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.abort_z = 0.6701369711369801;
    tmp_msg_0.bearing = 0.2590575389163542;
    tmp_msg_0.glide_slope = 253U;
    tmp_msg_0.glide_slope_alt = 0.44786215958875086;
    tmp_msg_0.custom.assign("GAOEZEWPKMTUQVFBNLAXKYLHHGJUCIZVHGIIUGXGKXTMPLLOFKXEYPDKWRELAIYRNKLAHGRMAHNCRSEURJTAMYFJRUIVILBQXZVHZZFOMTALVZSVCOFUVTGDWUZOBEDICPKSWNUIASYGXZV");
    msg.data.set(tmp_msg_0);
    IMC::CompressedHistory tmp_msg_1;
    tmp_msg_1.base_lat = 0.1769178965094762;
    tmp_msg_1.base_lon = 0.09118617685257435;
    tmp_msg_1.base_time = 0.5692746038156856;
    const signed char tmp_tmp_msg_1_0[] = {98, 29, -61, -27, 50, 100, -5, 84, -50, 29, -33, -38, -67, 38, -114, 57, -32, 44, -79, -49, 7, -128, 29, -16, -55, -47, -74, 65, 86, -25, -99, -60, -35, 14, 69, -22};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.44870111310799843);
    msg.setSource(6053U);
    msg.setSourceEntity(244U);
    msg.setDestination(35542U);
    msg.setDestinationEntity(52U);
    msg.maneuver_id.assign("ORJDPEFWOORP");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.20894766765270556;
    tmp_msg_0.lon = 0.6330424022806546;
    tmp_msg_0.z = 0.025781293552633033;
    tmp_msg_0.z_units = 26U;
    tmp_msg_0.speed = 0.37119494026674804;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.start_time = 0.8430505355127289;
    tmp_msg_0.custom.assign("YHHUTCFJDQRFARSYYWLOZLTAAMEYZPJEIRCGPVENJZSPHIMJHXOWMJYYFGOOLHTHEMCMAUFKLQLTEUIFXBXSJWDPGPWYKOBXBORUHTMJAZZULKDHSTOSXGPWBPFZSMFKAVQEVQLDXUDIGQTORMCUWGZXCCVKIHCVDJZUBPANENVRSUMC");
    msg.data.set(tmp_msg_0);
    IMC::PopUp tmp_msg_1;
    tmp_msg_1.timeout = 1440U;
    tmp_msg_1.lat = 0.6169541962753773;
    tmp_msg_1.lon = 0.5539571169289572;
    tmp_msg_1.z = 0.7773446327135101;
    tmp_msg_1.z_units = 81U;
    tmp_msg_1.speed = 0.5808312923860736;
    tmp_msg_1.speed_units = 153U;
    tmp_msg_1.duration = 62115U;
    tmp_msg_1.radius = 0.9765505606425813;
    tmp_msg_1.flags = 97U;
    tmp_msg_1.custom.assign("KVWZQSRQUROHMZXSZBUCKKNPEGWUERQDWTGIGEIBNWMNCKXQOYZGUYDJRPYADMXGJEOHGNQZYBZEFRSOBAKBPPKLWLMOKDDHDPPFOLSIMYQCSDJHUKRRHBUFOGNMKVJIXUHRUTQYCNVCBVDKALVFAIWCINMTIFLFVQE");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Chlorophyll tmp_msg_2;
    tmp_msg_2.value = 0.6974279956962725;
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
    msg.setTimeStamp(0.6336767697542914);
    msg.setSource(3376U);
    msg.setSourceEntity(111U);
    msg.setDestination(61904U);
    msg.setDestinationEntity(218U);
    msg.maneuver_id.assign("EADIGKAAOQKRYGPROGGCUYVSTJTXJFUMGITAMXWWNUAVKRFJDBCRULBZSZDTQNNHESNGDRBXSDEFUXICWPKLGGXYPONGQVXOAOXVWQUWWJBSMLJLPVJKTYMLIYTCKHUWHVHOVRCIBRWQWPEELAPXNMQFEKUTMPTHJEXIBDDYUIBJAHCMHBRDZZIYYSRLCLCKFQHNGM");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 23595U;
    tmp_msg_0.lat = 0.05669477579689974;
    tmp_msg_0.lon = 0.9413034854057271;
    tmp_msg_0.z = 0.8216539594555193;
    tmp_msg_0.z_units = 50U;
    tmp_msg_0.speed = 0.9737176630520152;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.duration = 62314U;
    tmp_msg_0.radius = 0.6739593859831143;
    tmp_msg_0.flags = 115U;
    tmp_msg_0.custom.assign("NZJBRUDUVIEMJCFKUBZJVKSJNWGOKSFNBTVPMELHTRYOHOAPJWIMVVIZBJ");
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
    msg.setTimeStamp(0.26702088680841307);
    msg.setSource(43204U);
    msg.setSourceEntity(33U);
    msg.setDestination(46093U);
    msg.setDestinationEntity(105U);
    msg.source_man.assign("IRVVOLMXYYHQ");
    msg.dest_man.assign("JWINMFQGLRNHXVJWRUYDQPRERPHQOJXVYINCCGJLTCYYKJCSUEZALUSBHDFHZWWXYQFWFVJAHIKUIDMXJIXQORGSDEAGYZBQPDBAMMIWNOOYVLUYHBZALQSFTMGKUHFJIGDMSSDETBTPVUBLEIDLVUSHCXCMWSDGLRNSUMWUZCPKKOCIZXOVHEKMTEKOMFPXZPRQPNCLRPRKPETG");
    msg.conditions.assign("PPHQXTCTNMJCIZUSARSUQBNNIISWDLKGCOGRHVPXWCYOGBRKHJPAFYEVYZOMKGELHOUMTRGCWKSIURCZPEPNUXDRHLJZZANZCPVRVLJRBPKTZMFCLQTNWQHKD");

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
    msg.setTimeStamp(0.0584954870891492);
    msg.setSource(13514U);
    msg.setSourceEntity(108U);
    msg.setDestination(3605U);
    msg.setDestinationEntity(10U);
    msg.source_man.assign("XRKJZRRQZNUGPIILIFVBIMTCWVNQDTPWUOSWREEYAYKYDGVXBUFDHFIZLXAWDDPUBCZCAYBBFEQAZKPQMVRGWHYPFSOTMGIUUKNBAUIVKOMXCZYSXAHDSMFLBAJJXHAODLRXTTFCEOVIEOEKMHMSLSVGYAPHI");
    msg.dest_man.assign("PRPLDIRNOEORDCTWXVAJZZJMKTXBGSPWWMUASSOHTJXQEGFIHQEUDHUYFVHLGLUQZVVAMFOTLBFUXNJKZVXWNTQUKZTBQKWYLOORJQJMKOIZSDFRBXXYXRMTZFN");
    msg.conditions.assign("WEUGYILHISPNSVZAWEFTRRVBQYOFLDTTMYZWTOWCWPIIOPDSHXZFUUQGAEGOVXBWDZQJHHVIBYLKEEEBMMRIFKHPJGSNEHUABNCMRIGKZHBXQ");

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
    msg.setTimeStamp(0.7362861241983837);
    msg.setSource(2516U);
    msg.setSourceEntity(162U);
    msg.setDestination(37915U);
    msg.setDestinationEntity(173U);
    msg.source_man.assign("ALHNWUZUWBXFJGWJKQWWAKMFIKILMHXPBOMMHZQJFSSBXBVEGZOONFGACDYFTTLRIPSUZYDDESSF");
    msg.dest_man.assign("AQFYBYCLMRTGHEPJDEXDRGXCFNBOEJLIVKNQWCUTDMSUDEMWZDARCOMEJPFRFGPTEDJMTGYBRZDNHQZCQWDKSAPVWBHSAJFAWKUXLSUACIVTHNIOXKMMEBFSIPCYOJJTHUEIZLYRAJXGQFNNWKBICRRPVEZCWQBVHWTYULLMOFREPOYIKWGIKNZKBYQBZXLVHRWPGTXDAU");
    msg.conditions.assign("DDQSWSGZHCQWJBBOXIVZYFRHSAYVGCXGKVLGHMLCKYUVNFPKCPKXTUMFSAONDCNKTAPEDENTBZFJBWCUJEVQFXZIROZZLXILKQOPAOBESIJPKIICWNGAZNIAOBZIHOZVYMHNUUKTBFYBSGQJXYNXQMIRJVRLOPWTSVBTWREAHPLYHAENKJJRGICCJEZKUHAQDTQCGGJPDESUPFXLYOULHMLFRTMWQRFWDDH");
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.45187446056659475;
    tmp_msg_0.y = 0.8703965734901795;
    tmp_msg_0.z = 0.17919465750608643;
    tmp_msg_0.t = 0.7403030978905397;
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
    msg.setTimeStamp(0.36053709564713976);
    msg.setSource(1304U);
    msg.setSourceEntity(102U);
    msg.setDestination(60182U);
    msg.setDestinationEntity(139U);
    msg.command = 4U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XNVBJDQUNMWGNIIVKWOGWBZJMKSPLQUKRLWOGZSHIVKUYHGZDECSEFISQJBAXSHHQYEDVMHTENEBLFCGXZNHGQTMEZLUWWOFAPUNRFTTSPFVDJNIAERPPKRHLIJDVXOVNKLVVQYHHYHCZLXMXYRGGKRYSAUWIMTNGBBFFZTCMODLDYRBUFCEORABLIJPFCJCZOEAAYOAJGCOPQUTYPIDASJTXAKUMECYZJMXBITSZKCRDXRLQ");
    tmp_msg_0.description.assign("GYVIODMYUCKOQCOSVFWNTDFHFFNEWDXFDSJHNLVNTHRSZARHPNRRKMVDZTBOHQBLMKZKBKGAPQYIYZTRUTEWCUVJITOWOXQBPHXFOTPGCFXYVBOTJUNKAUIXLCBPEJOFRJNUKDEGRYKHFJGQAJDERZQCMEWXXGUALHBARZEBHSCSBDGLIJQJLTPOEMGKRZMQEVNMWDWJNYAAEZUISSXQC");
    tmp_msg_0.vnamespace.assign("CWXZJMALQDLGLKYELQMZVYBGUVIFTCMFYAWKZYTMUVIHNZDJGAQRKLDEQEVTPPUAYMOPFKEBZOCDUBRYXMWXXWQIWISICEQNRURHOVNQDGAJXCZONUJZAREQYHADWJTJSXKVHLAFN");
    tmp_msg_0.start_man_id.assign("NIMJXCCDGKKUTPGZYKYDXWYRGPLRREOSQSEBFFDMHKIYJVCLVTSVMSUFDGZAQJJCLIQFDXKCOYKXHOKIQDKTAUWGANMLDOIHEPQLADVPSQNKWHXWORZEVMTAQLQWGVEAZWBZFPETABGIGAMOXDHUBTBSOTQJNVDZLMEESWR");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VCDGDSKCLCAPANICUZWUFGWSVKJTFETPHTNGVCURCTVGGRDACHLMXKXENTMHCJAWYYHRGXFJUZSNSYIZNYZCXZEYXVUIDBMQPLRIBFTVFENMPHVDWBSXLOSURDQNAQOQKEGFAPJSJHKWNNRMSUWPWVTPURSMTRXMCQBAQOFAVPEMUGQSUNFWHQEBOTOIBBGRLJDKYTZIYZ");
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.04132132783388753;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6410655834496891;
    tmp_tmp_tmp_msg_0_0_0.z = 0.8842226403974086;
    tmp_tmp_tmp_msg_0_0_0.z_units = 225U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.11502069508921542;
    tmp_tmp_tmp_msg_0_0_0.duration = 37526U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.13033022231925484;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 159U;
    tmp_tmp_tmp_msg_0_0_0.popup_period = 46635U;
    tmp_tmp_tmp_msg_0_0_0.popup_duration = 39101U;
    tmp_tmp_tmp_msg_0_0_0.flags = 19U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NBIVFGOVZLLWKLXFMJNSTESSAKWMVUHMRSUTCBEBFPLUKOQBBJTKJRSEYBDIXICKCEHLBVHODP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Magnetometer tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeout = 45102U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.5171748374937128;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.5954771258614728;
    tmp_tmp_tmp_msg_0_0_1.z = 0.23783390184014286;
    tmp_tmp_tmp_msg_0_0_1.z_units = 98U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.5342037251191203;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 69U;
    tmp_tmp_tmp_msg_0_0_1.bearing = 0.20084897158850634;
    tmp_tmp_tmp_msg_0_0_1.width = 0.6009407698123027;
    tmp_tmp_tmp_msg_0_0_1.direction = 191U;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("FYZQGXEPWEPMSTQTUHBEJZWLJADCVZJBNUVLTCJSZTBFWWJJVSZFYLSDSKGUNBOHIRXCPFURRIPVGDLVVCANAOXUBQORAKETPQMBXNWMJIUAXKCHMVUGIXCNPLYTAGLPBHLTEORCQUSOFFKGGOPJR");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("SRGMYJGMEURPWLGUHDKDBUBHXFWOMVRAIMUDTUOOYSWKNXQSMJXPLLISCBUYONLNBYQWXIRRBRPVXKJPHALKQGBHPWTOQDVUJJHACVTZTQQNYGPMTKSEWHWJEKOTSAYCFQVOABAAIPOJDWNGYWZCZEEFAETFVSCHAPLFCENVTEJRUFRXYNQZVEFUQMNZIIZAHDTSDGXHCBGX");
    tmp_tmp_msg_0_1.dest_man.assign("NQCFBWNMEZPIHNMMNOKCNTVAMTAJVXTJSESYRIZLTYZTFAAGYYEZCFNIBKCUPEHDCKWBOPXPORYFLUWHDDFEOJENQDBGBMJBUEORHLYQKIMLXLGPCQENVKFSAMCBXOUIYSOOESLHSGGWDURBZWTVQPMBUJGDVJQSHYIJHVFYARPAZBDMXAZXRKDDQFNTJGKTUIVYJCIXAPLZUSGLTVSQSXCOFLPZPWWGO");
    tmp_tmp_msg_0_1.conditions.assign("IKYXQKAPECMRZHQTLIUGIKFUT");
    IMC::VehicleMedium tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.medium = 44U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::UsblFix tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.target = 34559U;
    tmp_tmp_msg_0_2.lat = 0.4680761754736641;
    tmp_tmp_msg_0_2.lon = 0.8424823039071788;
    tmp_tmp_msg_0_2.z_units = 64U;
    tmp_tmp_msg_0_2.z = 0.36310588943787336;
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
    msg.setTimeStamp(0.49865549956077393);
    msg.setSource(62234U);
    msg.setSourceEntity(186U);
    msg.setDestination(9219U);
    msg.setDestinationEntity(11U);
    msg.command = 131U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XAHBHTAUJJAHWNHSFAHCDVCC");
    tmp_msg_0.description.assign("HMJVDVYDPXFBHFIGYPZHHAKQIYTRBDKQNMWPNZTOBEDSCFQDICEJSTCCRRQUOUZLTTMZFZRMJJFAUJAYSBMHAVYYSJQLWHPMBGNUEKUGOGNYWWMOPKISEWDMEFVAFJGOOQTCBAGVCQXNLWJNKFGWUFVVTLXBCHERIIMJSIPWXKIVZGZAPJ");
    tmp_msg_0.vnamespace.assign("VREHWFTHQZBTESVGJKAENLXBBHHRBQQGYNCKUBRJOLXOPDNETQJTUWCVYRVDDMVOQLJDTVLHVFIHUPPEGUKSYMLLJCHZSFLRXLOMBASUZTAGAA");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UGNTJWAPLLSJAKYWNUKETUYLIPMSEWEVYFTNBMJACXDASHJZZQGFKAYNTUQELSFJITBUGXGGXKTVCZV");
    tmp_tmp_msg_0_0.value.assign("QHCLZNGJVVPZPEZHSHIBTJMUBGMZXIULMSPHQSEBHDXCDBDAICPYEXADGFIBRWZFVRWBACSUPBPJXUNYSPITOJEIPKCOHGUQS");
    tmp_tmp_msg_0_0.type = 192U;
    tmp_tmp_msg_0_0.access = 34U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KPRFFDZDYHREDWMORDUSAMJKUMMRXHPNIODEOHKYYELIRDVBIETZQZAMQTOYAOMNYEYXCZ");
    IMC::ProfileSample tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.depth = 45927U;
    tmp_tmp_msg_0_1.avg = 0.5054747607335391;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::CommsRelay tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.5430340240455611;
    tmp_tmp_msg_0_2.lon = 0.5186147361436474;
    tmp_tmp_msg_0_2.speed = 0.5889012209705239;
    tmp_tmp_msg_0_2.speed_units = 185U;
    tmp_tmp_msg_0_2.duration = 27204U;
    tmp_tmp_msg_0_2.sys_a = 8050U;
    tmp_tmp_msg_0_2.sys_b = 42183U;
    tmp_tmp_msg_0_2.move_threshold = 0.9757301389873594;
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
    msg.setTimeStamp(0.8232170985674478);
    msg.setSource(4521U);
    msg.setSourceEntity(158U);
    msg.setDestination(8708U);
    msg.setDestinationEntity(159U);
    msg.command = 98U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CSXQCLSQWPEPHUSUNUEDGORXIJGBEHFQNJRFOXMEFIBTPKGCNQMCZSHKCQBDBLUINNYOKVBKLDAEFJKTWCLOHSZBPXVXQXOQINCSMWMDDBFULT");
    tmp_msg_0.description.assign("ONMCYICYSKWEQPXKSEXZHKAK");
    tmp_msg_0.vnamespace.assign("QLBKDCLMVOCQCIOGBICFZVQTTWDLUPVXMQLRMGQDPZZRKYENNI");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DUXQWADKCUGVZSKHKLEWOZIOWDHJXEWBQRSPBKWCHILANIORFBDAGLCSOOTVMVQJNYGRXUYIBATVHJFTPKLEZEHLEMRIMSKFEMHYW");
    tmp_tmp_msg_0_0.value.assign("QMRVJEUBXDQDUIHFGAAGHPHSYRHBLRHGZAETZJTBDNFVCNYKLLMQPWIOHAOBFDZVZFZKZFEDLCHVPEVOCMPQJITWCRUTGAONVKBXCJGEYQEGOSPWMKUCEDLWLRMXZYWFJGSKSNZXUQANGIIMYQSMOAXUVJWQEDVWGKUJTNBTCIKFRTCTBVIRPUSTKPAOPYLUXGIHBPMXNOHOFEYXCSRQLEWORMXNJQIV");
    tmp_tmp_msg_0_0.type = 48U;
    tmp_tmp_msg_0_0.access = 207U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SDTXCUAKTJVNSUROYCQTWJLAQHQVEBNMWKCKOJLFNCHYBRAUOHIXECTOZBZSZNOFAXDFBGJVMPJUEMRHIUAHVLNAGSKYTDXDSEOWRTYQXCUIVULFZGTNXOGBGFIEAGMEKAMLW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("TNHJNYVDPFSSXRQHCLYWVXLNCESCADTWGAMVTQRAHUAMXHSMXACQJICIUGPRINPWWENGRRPEHUNFBFDXAKYSWQWFZDRBULEXXWIMKJAGBEOERIBPBOFIYPDCKLTYXJZQOJCQBMMMPOTOALFYCZOJASVYLUVZKFIHYZGKNKEXDMHV");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.10932428131413596;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.210045442509462;
    tmp_tmp_tmp_msg_0_1_0.z = 0.39262418328309867;
    tmp_tmp_tmp_msg_0_1_0.z_units = 11U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.26219599532203997;
    tmp_tmp_tmp_msg_0_1_0.duration = 59719U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.15877229405246251;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 9U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("PCSEDEANUTUCNGBTYNKBHJXEZLSIGKIBPVFSWEXXSCQZVJTEPZTAOWVWLGORYAIILZQYHMDFXDXGKOJVITFLRWSQKGYWMNKUCAJYPLBZQAGZPTHZSSAWQUFYCUJACGX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::RemoteActionsRequest tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 84U;
    tmp_tmp_tmp_msg_0_1_1.actions.assign("DHZVZYYZUNKBQMZPJMFFNBNFQ");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("XOQNFNPFROWKSLRULHIAJCJKKYKNGFUKVLXNCUMYAKREHXAXMIBWZPPGTMDHXNNTVOWAXUFOCRPUTZIDXIMDRLVBCDICBVQJTDHTGUQSYEJFADGSWOWQSQEVWLVNUYEPQT");
    tmp_tmp_msg_0_2.dest_man.assign("BPRLWHHDPJEKWZSYYEXIYFXNUONIBRGKOFZDMUGISTIOGULZTLOCCKYLRYFKCIEVMUFCPS");
    tmp_tmp_msg_0_2.conditions.assign("FCUZNYYYQBFPJLKRQERZNGSSGKMWSZVOINVNHMWLAVTMJJLIDJGCGNBGOAZBIOXXOSNFOPUSTQPCBWRZBCPQHEJDQNYLZQFJHZBPINYEHFUWEAOKCMBEMMAVTFPXMELTQMBHMDELEGDYROKIWWHZHSPXZDRCKUDXKEYRXAUGBLJVYGARSWCSOHHFDKTTKUBJWAXTQIHVPKIJLQYLVZXUIYVRUNCPAWSTRRNASFUQTGGTEOXXKFMDCDIUPCI");
    IMC::Takeoff tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.6603239372249219;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.8188124424070209;
    tmp_tmp_tmp_msg_0_2_0.z = 0.7304648882571804;
    tmp_tmp_tmp_msg_0_2_0.z_units = 71U;
    tmp_tmp_tmp_msg_0_2_0.speed = 0.7155541562951863;
    tmp_tmp_tmp_msg_0_2_0.speed_units = 207U;
    tmp_tmp_tmp_msg_0_2_0.takeoff_pitch = 0.2595018339039974;
    tmp_tmp_tmp_msg_0_2_0.custom.assign("UITCOKDCBLERJOHKTYSWMAAXIXHSGMHIVRVKXCIPZAKNLLJTSNDUMZKJXWSHHRDOVEGCDRCXBVXMGVQXIXZBBGFAKYJGALUUMQEEWWQFLMTKODZI");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::CacheControl tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 64U;
    tmp_tmp_msg_0_3.snapshot.assign("VPEKSMKKUUEZJHXNUHRWSIMYEQMDZLJIQYMQVDJKROZWRSJXUFBWGBXRCATJHQZZELUSTXIWUDTTAYICMIXJTEQNSPBTTOETGRNAROMFEUQKMFZYJAHHCJALSZPOCWOMSAAXVVZCHCGWVKGBLGMCPFLPAG");
    IMC::TransportBindings tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.consumer.assign("XCMZGSJSSFNCGLXSQNDD");
    tmp_tmp_tmp_msg_0_3_0.message_id = 248U;
    tmp_tmp_msg_0_3.message.set(tmp_tmp_tmp_msg_0_3_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::TotalMagIntensity tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.value = 0.5439915326138;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
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
    msg.setTimeStamp(0.6045950875092533);
    msg.setSource(11142U);
    msg.setSourceEntity(106U);
    msg.setDestination(14019U);
    msg.setDestinationEntity(95U);
    msg.state = 55U;
    msg.plan_id.assign("DWMGLSVJKYOHJEMOZIYWRSLVOFOJBLGWPBFFIXTYDJZHNGFYCZFJEXVZKDUJPORZJBRTKISYAVHRVNXGLBEUPRRWGHUBSIAZCAKKLQGYDNCNFYTPFXKQPEUPJAUTRKCDDXCDXTAIHMLLMVDTDZPWNHGXFNHJZOHMVGUPPMOBCBOQYQEESKSQDNVHEQEUYUMHMBIVXRFGIXWTCBQSWTAWT");
    msg.comm_level = 46U;

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
    msg.setTimeStamp(0.949420324662543);
    msg.setSource(3294U);
    msg.setSourceEntity(153U);
    msg.setDestination(60739U);
    msg.setDestinationEntity(171U);
    msg.state = 184U;
    msg.plan_id.assign("DYLYQICMWVHUWRBEODCT");
    msg.comm_level = 185U;

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
    msg.setTimeStamp(0.4130969489726808);
    msg.setSource(56012U);
    msg.setSourceEntity(154U);
    msg.setDestination(1461U);
    msg.setDestinationEntity(118U);
    msg.state = 244U;
    msg.plan_id.assign("HNCJMXNOMNUNVROTYBXKMXRZKADGUTRGQLBOBPTRTCUSHZHDUQQXXS");
    msg.comm_level = 23U;

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
    msg.setTimeStamp(0.6845526034203967);
    msg.setSource(56528U);
    msg.setSourceEntity(248U);
    msg.setDestination(3940U);
    msg.setDestinationEntity(149U);
    msg.type = 113U;
    msg.op = 36U;
    msg.request_id = 43187U;
    msg.plan_id.assign("TQFWXFNPPINYKGLWQQZYKWGHSLQQPCCLHITNUWHXUZSTOLINWCOYZUBRFJFMHTLWAYFFDYHKNABBSTIGCRYOQPTMAMSOPBRDEOHEPPVLDYQVIPCOVGEYWLAERAJJIRFNMOQEJDNAYXAYOXKBUVJDRJVKENEAGDKQKDIHSZJXULGSIFOBUMGZWFBZR");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 5770U;
    tmp_msg_0.lat = 0.08399823234763737;
    tmp_msg_0.lon = 0.4745631397765083;
    tmp_msg_0.z = 0.7959256759973606;
    tmp_msg_0.z_units = 89U;
    tmp_msg_0.speed = 0.8446930232177753;
    tmp_msg_0.speed_units = 162U;
    tmp_msg_0.syringe0 = 42U;
    tmp_msg_0.syringe1 = 8U;
    tmp_msg_0.syringe2 = 99U;
    tmp_msg_0.custom.assign("JQUKGJCPQZOEBPANVKTZJHLVNTNZITRMJD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KPPNIOBCEXDZJMXHQJPDSC");

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
    msg.setTimeStamp(0.00291642717454188);
    msg.setSource(2381U);
    msg.setSourceEntity(141U);
    msg.setDestination(64178U);
    msg.setDestinationEntity(196U);
    msg.type = 71U;
    msg.op = 220U;
    msg.request_id = 33973U;
    msg.plan_id.assign("WCGZLZAPUXYOSLXVOMLKMWSOQHKOJZYDRQXPNURJXWMTNXNQORJIBWYCOIIQSBJAEAZPZDJDMSNOYLFANYWWKAUNKGCMUAXNXYZFQTRKQIHVWGTKCIRYSQBJUTWTMSJJPVTKUVDACCCEYDQORXLXCDPBTWBKGDSRHOLWKVRGQHTTBTPVFZALHFPNJFIHBEBRYBOIFVUECMDCUDFEQHVBF");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -23075;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MPBHMWAGDNNWNKTXFJEGNQTHNQYUAPPHQANGEVORGBZGQEYSKSQXOKFLMRPUCCRUXRZENTSUPATONKKVTUKVORDADDMFCOXYZYCMIDKKVTXRLICQXTRPASTYZHWFPSUHHJESSJEWAAIJBMBLLILQMGGLFWYZYHQXQEHDIFLCVYJKPMVGZFXBTIAULJZTGIIFVYVJWJFFDVB");

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
    msg.setTimeStamp(0.37552161361778413);
    msg.setSource(4748U);
    msg.setSourceEntity(126U);
    msg.setDestination(21753U);
    msg.setDestinationEntity(36U);
    msg.type = 56U;
    msg.op = 5U;
    msg.request_id = 58615U;
    msg.plan_id.assign("XZXUROHGDHKNWERPENWCYZFFRTSDLQDGMNLAXIVQOVAEZPYRDODXSWVVPJSMQERCLOTTIOWJKOJLRQKQKPXMNCAJBOHZBDGFPBPVFFDICPXQBNTIUHKLRPJMQYYNVLSIFZVUVFGKCCSUEUNUTYAWXKOTDHTZQFBYZCZSBVIPXPJWDSZLHAMTYUFJBZEBHSATWYAHJMNTAEBRWLIWWQKOUQEHGSMRLKFNB");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7587175243145126;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LLIITDSKLYBSYJSCMFVOVAPWFPYSABDSNFIFHLVMCLBHGWMDQKKXPQDVHWVCVEFCTTXZKHCOAFYVRZERNRWJQZAMF");

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
    msg.setTimeStamp(0.06615671966499626);
    msg.setSource(65024U);
    msg.setSourceEntity(147U);
    msg.setDestination(24975U);
    msg.setDestinationEntity(207U);
    msg.plan_count = 59083U;
    msg.plan_size = 3796965911U;
    msg.change_time = 0.35670532572277613;
    msg.change_sid = 39770U;
    msg.change_sname.assign("RXOXJYNJFNZLDTVFMVGMXWPTPLEQEFVYBIKIAAWVRUMKISOOBKHSQGRFXFSKRCDNXCZODZIZNVYYJHHLKQGKNFGZEUIWXBMVBGMSQAZVDOOXMNBIBUWALZIAYPKAFYSGZTGKVGLUTXEFQUTHWIZRPVDDBHMEXJLUJCSNASDJQICWQMSCKHFEHUCTJRCWRDRQIKNDPAYEPYLRULWBYSPBHQTAXPSVJHOPWJRDLGEUOCNWZBNMTTOEHFUJ");
    const signed char tmp_msg_0[] = {56, -116, 82, 20, 77, -88, 76, 17, 80, 50, 43, 59, -110, -87, -38, 11, -43, 86, -38, -39, 110, -117, -67, -120, 103, 56, 104, -113, 54, -118, -79, 78, -113, -12, -48, -68, 118, -2, -69, -78, 90, -34, -119, 19, 26, -43, -123, -36, -98, -72, 17, 26, -37, 112, 124, 51, 94, 14};
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
    msg.setTimeStamp(0.24789073203824918);
    msg.setSource(40343U);
    msg.setSourceEntity(110U);
    msg.setDestination(18072U);
    msg.setDestinationEntity(103U);
    msg.plan_count = 38192U;
    msg.plan_size = 1765825486U;
    msg.change_time = 0.4985321620221568;
    msg.change_sid = 8087U;
    msg.change_sname.assign("OWTMGJVZKCEEIJBCJAUTZQLYBHGFRKSVHVMTNVRGMSENTYZKBMSLWQEEPZKYIQSTOCYARQUYVUDFAVCRGULZPBAVGGOUWFTHPFDNSNKRQQTXOGTUOVREONIKCOKFXIBLYEYJLEAUEBZPBLDKVUMDIBPIXHXPNXQIIQSJDFNNOH");
    const signed char tmp_msg_0[] = {29, 121, -77, 34, -96, -93, 100, -52, -94, 24, -107, 122, 31, -12, -48, 2, -74, -9, -51, 75, -34, -48, -96, 94, -5, -31, 13, 123, -44, 61, 70, -26, -75, 14, -120, 95, 111, 126, 40, 21, -101, 36, 106, 15, -27, 53, -11, 33, -25, 27, -11, 21, 91, 84, -30, 29, -39, -89, 55, -114, -32, -35, -74, 45, -4, -104, 126, 51, -49, 55, 79, 44, -47, -64, 36, 29, 29, 6, 85, -101, -78, 54, -86, -47, 27, -23, 65, -4, -36, -85, 46, 95, 104, -13, 66, -28, -72, -81, -3, 121, -120, -82, -10, -120, -35, -7, 44, -69, 39, -38, -66, 123, 92, 84, -83, -11, -15, -91, -103, -21, -124, 92, -124, 3, -24, 93, 123, -47, -55, 26, 15, -57, 99, -29, -60, -41, -79, 116, -81, 47, -50, 10, -19, 89, 106, 98, 108, 80, 24, 116, -92, -2, 61, -123, 73, -8, -2, -10, 87, 28, -32, -84, 5, 121, -69, -58, -60, 2, 108, 8, 102, 29, 6, -84, 96, -5, 124, -53, -29, 86, -63, 60, -113, 33, 10, 97, 33, 17, 17, 54, -23, -95, -68, 94, 9, 100, -122, 98};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PPNNROVCDUFYLKRLAXBOXSRLAXPVDWLPCPSIUFUVQWMTPNQTTLMKNPNJOWODNVUCIVDQFBCDQTYXDTBWYCBWKBZZAJCMXNWIYHDDZOVXIAKUKEZRRMTMSUHODQRVKVGSWIFACVJBZVROHHHYEZJL");
    tmp_msg_1.plan_size = 35265U;
    tmp_msg_1.change_time = 0.16498085722445643;
    tmp_msg_1.change_sid = 57702U;
    tmp_msg_1.change_sname.assign("VGBSCZVMBWHTEDJLFPYGPVPDWFFEYFZSWCXZRGNDOYCJFUUVUQBOANQQKLOQFEVZYUKNYLYATAFLEHGJNSXTCIICHKSJUKJROVIXMHMBTNVLCPRJYEBUWVNFTISQOYWXWQQPHXOXLZSEYQOXRMRRHDCMTUBTIXRADPQAJDZELAAWDGRNYMVIMDDIDRGSCZHOAOZBATNUBWJJXQGWUPZ");
    const signed char tmp_tmp_msg_1_0[] = {48, -9, 110, 13, -88, 2, 115, -11, 79, 76, -16, 47, 67, -69, -74, -63, 116, -41, -122, -9, 103, 85, -89, 22, -69, 50, 106, 114, 80, 82, 23, -43, 97, 115, 79, 71, -93, 66, 67, -18, -19, 75, 91, -87, -100, 123, 80, 21, -38, 48, -57, -109, -49, -114, 5, -111, 120, 67, 11};
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
    msg.setTimeStamp(0.5507269328604801);
    msg.setSource(49432U);
    msg.setSourceEntity(120U);
    msg.setDestination(29964U);
    msg.setDestinationEntity(242U);
    msg.plan_count = 4663U;
    msg.plan_size = 1556216771U;
    msg.change_time = 0.3671113119178311;
    msg.change_sid = 20155U;
    msg.change_sname.assign("ASMQDLMROIBPSGLZBAWNHKERTBKUUPOCGVWHTVLKPXDSHCMOSDFLKKWNEVXPUZESDNRXORWXWDTQYLYDCXFDZKEYJLIJEOZVQCNAUZXVWXTIWENTJVQMHETTEPR");
    const signed char tmp_msg_0[] = {-12, -115, 23, 79, 23, -96, 37, 10, 24, -111, -65, -86, 54, 80, -74, 109, -104, -5, -95, 103, 12, -124, -5, -22, -11, -107, 120, -12, -36, 92, 114, -118, -58, 60, -36, -127, 102, 87, -1, -123, 110, -69, 93, 19, 126, -85, 23, 90, -7, 34, 23, 111, 35, 80, 23, 112, -104, 68, -27, 20, 98, -36, -99, -49, 54, 17, 45, -43, 57, -114, -79, 70, 87, 17, 9, -34, -45, 9, -63, -58, 14, 46, 57, 120, -4, -124, -97, 104, 108, -50, 89, 122, 12, -64, -5, -90, 34, -28, -48, 21, -7, -54, -39, -116, -47, -128, 92, -86, -13, 98, -4, -58, 47, -41, 93, 18, 95, -96, 83, 77, -25, 77, -125, -44, 0, 66, -7, -18, 54, -76, 118, -8, 72, 101, 125, -107, 31, 93, 108, 28, -28, 62, -125, 6, 40, 55, -2, 98, 80, -83, 6, 104, -120, -120, 117, 35, 85, 71, 69, 29, 10, -81, -2, -4, 8, -50, -111, 3, -91, 44, -85, 101, 39, 81, 124, 109, -118, -99, -105, 2, 46, 7, -64, 51, 8, 85, -33, 9, 61, -101, 67, -66, 108, -20, 0, 90, 111, 67, -123, -66, 51, 96, -64, -11, 106, 23, -40, 76, -81, 8, -40, 65, 41, 68};
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
    msg.setTimeStamp(0.5753337885618313);
    msg.setSource(10238U);
    msg.setSourceEntity(161U);
    msg.setDestination(24390U);
    msg.setDestinationEntity(173U);
    msg.plan_id.assign("MJCWFUWBLDBONEJACGWWWORTVXSHHVESZCOUBVPAIVXRDZGHHUZTENFKXWSYGTDRJFNBXUOUYQFVTSTAOTMJBXEBOMNHJAPPLZPDOTMNQXDDJKQOIABYMBFKC");
    msg.plan_size = 27326U;
    msg.change_time = 0.1247450537567587;
    msg.change_sid = 15271U;
    msg.change_sname.assign("SKPYZMNJBSYGUCNIKSTCRWYCLLXUISZLLZJEGDCVEONPRQPCTXGMJCAJZZNMRQRLACAOLVMJMHJZCRSHIELLTKZHHKBIHNFVDSTMXZNBWAMRWDRDVOQQCFSEYUWPEIOXSSMLYWPXGDAAAGJXIGBMNTJXEYUUQDJZPHFQAGOVDYWCET");
    const signed char tmp_msg_0[] = {-17, -35, -35, 2, 123, 37, -122, -76, 73, 42, -119, 17, 75, -51, 97, 81, 55, -59, 18, 121, -95, 68, -91, 0, 112, 108, 21, -68, 51, -97, -116, -121, 9, -101, -32, -83, -46, -25, 49, 123, -111, -115, 14, -54, 11, 39, 28, 75, 19, -50, -45, 62, 63, -50, 86, -48, -47, -35, -13, -94, -125, 102, 111, 98, 70, -97, -72, -95, 51, -116, 68, -75, 54, -9, 116, -85, 24, 84, 58, 85, -18, 3, 58, -27, -104, -82, -124, 52, 41, 1, -39, 19, 98, 49, -22, 119, -50, 16, -98, 66, -29, -39, -115, 70, -63, -82, -51, -79, 115, 74, 51, -15, 14, 4, -100, -95, -127, -91, -41, 20, 6, 106, -91, -25, 2, -102, 105, 122, 0, -106, 53, 84, 116, -7, -44, -96, -119, -44, 118, 2, 67, -21, 103, -119, 29, 93, 51, 119, 52, -44, -81, -120, 51, 105, 52, -99, 44, -98, -32, -60, -86, 121, -74, 100, 39, -60, -105, -118, -59, -28, 77, -105, -72, 81, -98, 118, 68, -26, 72, -116, -45, -17, 43, -71, 106, 106, -39, 126, 19, 100, 81, 120, 79, -92, -16, 39, 87, -118, 28, 108, 27, -120, 103, 75, 67, 85, 2, -37, -35, -38, -102, -3, -107, -94, -41, -92, -127, -10, 54, -96, 125, -61, 50, 107, -111, 73, -64, 21, -28, 98};
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
    msg.setTimeStamp(0.03530922713266649);
    msg.setSource(31068U);
    msg.setSourceEntity(29U);
    msg.setDestination(45368U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("UIOPUCZHXDSTWYBWDILXMVELQTRZWEWBDIATMWQODYOFIXOGCFJUPCJEOQYAJPXHXNFGRRZVQMGYMWZQNXSHNBBSCFDSENHUKVJCDABPRPLJVMVFKNTLNYHHRWZKDOSWMCWSYGKEFVUJGOCXPLBSKFZIJWGLPLUPXBZNGYBKTUHHAIUNVCAGEFKBJOLJZHCAQTDLKTSGRYPKLDFIYMYDMAQMIERAJHSKSVCXRNMQBUEOAZTVPU");
    msg.plan_size = 23325U;
    msg.change_time = 0.8053210487000053;
    msg.change_sid = 45605U;
    msg.change_sname.assign("MXDYPCDTIPFZEUWOBPLIUVVOCLIPMOVZSSWXCHKYMUHGEQHEHXKRLIXNQBFYLWLJJTHREDAXIAMDNIVBHADSZTYPSAIPMFPJCUCJCQJKGXFLDVGAWGNMHXSBNJMTOJLTGTQSRCYONLOTNWRFABUEHZUCNKMKIFNEORVZ");
    const signed char tmp_msg_0[] = {26, 1, 126, -24, -41, -79, 56, 43, 82, 87, 82, -65, -71, -11, 119, 53, 28, 19, -60, -108, 94, 94, -18, 108, 25, -47, 21, 19, 15, -34, -67, -26, -81, -2, -36, 58, 87, 99, -92, 23, -116, -67, -3, 75, -100, -111, -86, 37, 99, -114, 25, -39, 14, 65, 53, -88, 86, 82, -102, 65, 77, -112, 85, 6, 56, -39, -106, -8, 40, 81, 124, 107, 30, 106, 32, -31, -119, -24, -62, -105, 126, -29, 108, -84, -38, -125, 48, 96, -44, 35, 68, -81, 53, -20, -114, -80, 49, 20, 10, -59, -89, -124, -64, -56, -116, -93, -29, -79, -21, -19, -118, -127, -77, -82, -100, -24, 83, 3, 80, -77, 16, 110, -20, -26, 63, 42, 6, -37, -66, 52, 66, -44, 94, -4, -86, 86, -120, 91, -112, -32, 71, 15, -117, 30, 104, 19, 36, 59, -105, -22, 17, -28, -68, -65, 93, -77, -75, 28, -21, 104, 112, 105, 42, -116, 98, 115, -43, -2, 73, -40, 61, -23, 68, -11, -83, -95, -42, 6, -6, -113, -22, 21, 24, 96, 97, 48, 19, -19, 16, 27, 5, 51, -96, -72, -124, -64, -59, -102, -79, -98, -125, -21, 113, 45, -15};
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
    msg.setTimeStamp(0.5704642924680449);
    msg.setSource(21653U);
    msg.setSourceEntity(223U);
    msg.setDestination(17407U);
    msg.setDestinationEntity(82U);
    msg.plan_id.assign("KRPTGRXQWCIXHTDNRITHUTMWFMFVTJJKNFRGNPFXWSEEBMEUWLLYBRIMNGGJYVLFRNUVBKOPO");
    msg.plan_size = 32418U;
    msg.change_time = 0.1025310366061033;
    msg.change_sid = 24304U;
    msg.change_sname.assign("FOWZFKZIQBHKMHNZDEWOZESVYJAKPNGHQTJWFEVLQSCWMRYQ");
    const signed char tmp_msg_0[] = {-37, 96, 70, 4, 34, 69, 124, 47, 4, 98, -112, 54, 24, -9, 7, -101, -13, 7, -31, -50, 13, -112, 107, -110, -107, 17, 82, 104, -50, 35, -69, 26, -98, 65, -114, -80, -124, -86, 70, 49, 7, -3, 37, -85, 113, 35, -28, 25, 51, 15, -6, 117, 61, -48, -108, 45, -32, 88, 32, 93, -122, 123, 95, 3, 23, 52, 29, -84, -25, 43, 22, -42, 48, 101, 79, -75, -41, 60, -106, 32, -18, 109, -113, 17, -117, 36, 43, 34, 122, -117, 83, 17, 109, -10, -107, 53, 50, 27, 122, -3, -17, 31, 123, 62, -86, -22, -117, -74, -90, 78, -46, -113, 16, -29, 9, -126, -79, -50, 93, 121, -49, 27, -70, 48, 53, 115, 103, 116, 9, -1, -35, -70, -36, 102, 46, -117, 67, -96, -71, 14, -27, 17, -26, -27, 57, -56, 45, -106, 108, 101, -10, 62, -53, -104, -19, -32, 88, 14, 68, -9, 61, -17, -101, -88, 31, 39, 113, -79, 85, -2, 47, 40, -94, -102, 14, 33, 28, -120, 125, 89, 28, -113, 16, 17, -119, 54, 10, 36, 12, -76, 15, 61, 5, -61, 26, -77, -103, -31, 122, -57, -59, -90, -60, 18, 116, 115, 22, -44, -117, 99, -11, 27, -33, -1, 54, -14, 17, -22, -123, 69, -37, 83, 5, -60, -126, 80, -62, -29, 12, -109, 12, 1, -95, 109, 52, -59};
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
    msg.setTimeStamp(0.8706690944169556);
    msg.setSource(27047U);
    msg.setSourceEntity(246U);
    msg.setDestination(55939U);
    msg.setDestinationEntity(132U);
    msg.type = 117U;
    msg.op = 55U;
    msg.request_id = 46309U;
    msg.plan_id.assign("XFRZMUWHIGGPUKMHJZJBOZUSEIZKJKFKZTDBQWBECKFLWCIRJJDHNCOIG");
    msg.flags = 21219U;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.9005531576475218;
    tmp_msg_0.x = 0.8033829311811826;
    tmp_msg_0.y = 0.47668005771560196;
    tmp_msg_0.z = 0.550836844269883;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ROMPFNLLBLPGYBIXFIBRSXDEFZYCQUWBYIMFZWYBVTAFPPVEQAEHPRQDZFDGOENIZUMUHWOUJJKWGOCPZCNDMLNIFXTSEDPBLGHDHLUYHXZCNNJRZSLYCNQPVKXJWGW");

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
    msg.setTimeStamp(0.2358429957984136);
    msg.setSource(58829U);
    msg.setSourceEntity(223U);
    msg.setDestination(16186U);
    msg.setDestinationEntity(216U);
    msg.type = 61U;
    msg.op = 217U;
    msg.request_id = 44229U;
    msg.plan_id.assign("LLQJMZDZGVAUVGSOPFWKOUPJDWLDFNBYHFQU");
    msg.flags = 32260U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 6055U;
    tmp_msg_0.rpm = 0.3666847194566235;
    tmp_msg_0.direction = 221U;
    tmp_msg_0.custom.assign("ABQSQQCXEYHDMLEOJWXRMXTFZXPFIHHCYCBSFBMBJYBYOEIXAWDKSBRSOPDMKSFREGVQYPROVXLRJWOPTKWNHZCENUYOARQKPOAGCINWHAXUETTSVUDSGVUFLFYHCTGHGXMVBFIEXWTZBWZJOMBPKQDNEENNJUDCBPYLGUQIPGNGTJJJMJIDMUOGKYRLCZLWPHMLQUVHAETVDLIJRHQSCVAYXIU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HAXOTWPUNVBKKPJTYQFFATLMQHNCBTOUVTJFJPVBDGLVEIXVXWXTTZMVCNIVRKSBPAGWGLOYJSNZYDLWQZNXENADFFWGZZVCRXSHKPMQVIXKGDYPDCCVUIBRXZSTHYKOHKUOZMNIOI");

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
    msg.setTimeStamp(0.35416837439446003);
    msg.setSource(41995U);
    msg.setSourceEntity(177U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(118U);
    msg.type = 196U;
    msg.op = 108U;
    msg.request_id = 31027U;
    msg.plan_id.assign("USRELNKNQQCMKJZHUPOUIVQGBXFCTENDYGWAIPILJDHZJPREOFLEFG");
    msg.flags = 31943U;
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.ax_cmd = 0.6282496317876871;
    tmp_msg_0.ay_cmd = 0.5074101200743681;
    tmp_msg_0.az_cmd = 0.44884719392485506;
    tmp_msg_0.ax_des = 0.49660983899646816;
    tmp_msg_0.ay_des = 0.4700660617856529;
    tmp_msg_0.az_des = 0.6093040088287037;
    tmp_msg_0.virt_err_x = 0.17986390534931618;
    tmp_msg_0.virt_err_y = 0.048445315320425175;
    tmp_msg_0.virt_err_z = 0.5915740622007679;
    tmp_msg_0.surf_fdbk_x = 0.09556591513572099;
    tmp_msg_0.surf_fdbk_y = 0.14519116874284899;
    tmp_msg_0.surf_fdbk_z = 0.7181740755562054;
    tmp_msg_0.surf_unkn_x = 0.5209753473767812;
    tmp_msg_0.surf_unkn_y = 0.4787600079607188;
    tmp_msg_0.surf_unkn_z = 0.1562619121458576;
    tmp_msg_0.ss_x = 0.7517204996642278;
    tmp_msg_0.ss_y = 0.24590395237242957;
    tmp_msg_0.ss_z = 0.18052142391256398;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WHNZMMTVNKATAVLRWTZHUAWUFABZMAJUOKBSRKWGQFUCSJCETZHQZJRXDVOEVUYTEPKPUAQBSYRLCNEKYLIUCYMYHNCJGFXSWQZBQYJNMNMKSQRFPG");

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
    msg.setTimeStamp(0.9849401984371216);
    msg.setSource(7200U);
    msg.setSourceEntity(189U);
    msg.setDestination(11368U);
    msg.setDestinationEntity(107U);
    msg.state = 63U;
    msg.plan_id.assign("WKWPSOHUPTYLHEYRGXTAWFLVKRYMLGBHYNBKQEFOPIVQHBNFGTHCDUGMXU");
    msg.plan_eta = -1854963147;
    msg.plan_progress = 0.32666647805642834;
    msg.man_id.assign("GJBSASORJLIABYEMYWNQVPWGREVYCYMXOKDNXWNTSHZQEJHUXDKRSJFOCPGTLIFSKJAQJGVMRSFLVPXZMNWDKFCYIERANHJEHBKTUECMDIXFKWOEVDXPNPUMXJILQLUWBCUZZHKPBYRTOAXHDZLFJGAVAYN");
    msg.man_type = 18606U;
    msg.man_eta = -2107956571;
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
    msg.setTimeStamp(0.4723244058580639);
    msg.setSource(41043U);
    msg.setSourceEntity(18U);
    msg.setDestination(9639U);
    msg.setDestinationEntity(157U);
    msg.state = 19U;
    msg.plan_id.assign("LXTDNMLQUEAGAMXNRVBXNEHRHUQZGOXKXYMFQQKJXUODJFSEBPKDEWCCNPONOBFQZMDIOKPTATDFWYGKODTYGKDKLLMPAMWIOCECRZWZZGXTQNDGLPVAVHSOURJYGQWMYSRKTGHVNLEFKEBRTFTRVECJOZKNSJWYBPHISHZQOIHJCIHLXSUDI");
    msg.plan_eta = 761846002;
    msg.plan_progress = 0.47266406731742583;
    msg.man_id.assign("IZCUZAKAXMFUYNRTHGGRB");
    msg.man_type = 30117U;
    msg.man_eta = -1489997739;
    msg.last_outcome = 176U;

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
    msg.setTimeStamp(0.5153330307309355);
    msg.setSource(10560U);
    msg.setSourceEntity(8U);
    msg.setDestination(61012U);
    msg.setDestinationEntity(159U);
    msg.state = 249U;
    msg.plan_id.assign("GKFSDVHKSUJMJKGLYTHPITBHZAOXWPQGQDEUOAAWYOBNRPFIFTCJEZOKYPFFSYLITWBMBCIWBTRIUVNMQTCMBZYGSXBZDWWVRSSFHNYJMLBCHZWYDVUOPWXHFQKTEDELSCTMFUZAELLHABEQIOUJMYHXTZRGUIXLRHQZSJGPXCNMATNXSRVPZVNLKDLNHRJFVVDCJUEAANRDXNUJBWKXFPOMKWLYQ");
    msg.plan_eta = -598156866;
    msg.plan_progress = 0.23990162577410734;
    msg.man_id.assign("VSUERQIRJBUBCEFJYSFSGNUVPRNMXDLYZCTTYNQFENKLBIWZWXASQSFGJCRNJJUZQWASQFTOMADHOCZGYSACBRBMLUFEOYRWAZVBZXHOCGLSOBIXQDVGONGNONSRMEWGIEJWHVIHMYFH");
    msg.man_type = 28721U;
    msg.man_eta = 2069110378;
    msg.last_outcome = 218U;

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
    msg.setTimeStamp(0.3123832468777502);
    msg.setSource(58710U);
    msg.setSourceEntity(102U);
    msg.setDestination(1202U);
    msg.setDestinationEntity(11U);
    msg.name.assign("DZPUZFMIEJBSPKUYUABRSBXMISMQCQAFPDJH");
    msg.value.assign("WRACFSBQZILOWOKFOIWDGNUITZWUUSWAYVBYRFNLEXDPJPFQMHJVONVSUDPJTNHTXLERZMFJMEXWINBURCLZBAGIQSGHPSTFZRGEPGIGZLLLHIEDYXYPCKCNRQGFCQEIZMVTKMSRXXSATBGSYEEBVJKAHRK");
    msg.type = 214U;
    msg.access = 206U;

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
    msg.setTimeStamp(0.3311391742867271);
    msg.setSource(21644U);
    msg.setSourceEntity(161U);
    msg.setDestination(22875U);
    msg.setDestinationEntity(132U);
    msg.name.assign("ZTFSQDDTBMNAJYOKHJXKENXZALEUFQWZONVOVGCDLXLIYYWVJWVOJKPSZOTEPOUNLUBLCDQKIDSUDXCWTESHNGBUGHLIXLADNIQSUHYYXSJPMTMTBGOSFTVMEAKEWPWPQGSMVDUGPQVINVPLLAHKFAEBVXRBDAQZJSCJUMCCCPZPDFGEWBGZTFXNIBWIHHPUKMZOYKCZYFFCJETROHKMEQMRYBYCIQRVYRTNQXOJAMHRLWSIBANRRKRA");
    msg.value.assign("PNGCLVKTDRVSIIAYDMKLUEXCWQPXZEZBALTXZBSAPFYBNJUYDO");
    msg.type = 134U;
    msg.access = 101U;

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
    msg.setTimeStamp(0.0774561167636596);
    msg.setSource(33495U);
    msg.setSourceEntity(205U);
    msg.setDestination(59546U);
    msg.setDestinationEntity(128U);
    msg.name.assign("YCKEMOBSQRLVVJZXIHPCZJXPKUUIIYAVBKRZJTAJZGTWRDFHZYBPCETLWTZANXYJJTOLTKASLEIOCFTKSPXADYGOUFFNEQCIHLRJZFWKQGSSSXAVBXMXJQPLSBHOKKSVQXTUGIHIQIRBDBHWWYLQYVCCMDNFPRVGPUBWZFKRNMKPXINGGNNQDFASPERNVYIUMUMMHOALWDOOEOHFADTDUMJNR");
    msg.value.assign("VZDZEGXPQOVFBBZHURRVZKMQQMRKDDUEQRCUNWCGFXJMIAKZEUWTFVRQVOYDPMTGLBCXUXOVSFJYOYAOKEYQMJKALAUJUSTXLBZIERYFCSDYJRKEKXMAOEDOIUDBWUSIGIAKNNTWGJZTSCWRSGKETGAVLHJFLYBZNRGHUIFFNPPHCCQESTQHWKSLXZPTSCHYAIQGNJDLBIXBLX");
    msg.type = 149U;
    msg.access = 236U;

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
    msg.setTimeStamp(0.608450775607551);
    msg.setSource(15461U);
    msg.setSourceEntity(146U);
    msg.setDestination(56397U);
    msg.setDestinationEntity(15U);
    msg.cmd = 66U;
    msg.op = 173U;
    msg.plan_id.assign("AVVSZOWYTDQUGYFZBPGMNYYSHHJYVXXIISFUXRFHOLYMQXXLIWQDVPATVJEFEGRAHJFCRNWFHUUMOUTWUONNMUDGEJAAPOCKFUUKPMGYLQAFXPDKLWCPECSRMLLSVXQPKSDKJICSNTTSKPEWPOSZNVWYADINBLIAZHROJDOMFTVEGVHKEGLWPZBLGETODIBCGCRIV");
    msg.params.assign("OBXUAOPPLCWKTDJXHSPWSMONRKNNUKNEJNRCXJFPRMBDFRVBTVCDQFASVADNYJWOEPDLNGCUTFKUIIJFBACPGTOGYGLXSIEKTRJZLIFJPJQSCWBIHQRIMYUMSDCWVTLBEDSCEYPVGTKUOHSFPUXLAQHJWKYXZXFCY");

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
    msg.setTimeStamp(0.9669925428659714);
    msg.setSource(48018U);
    msg.setSourceEntity(169U);
    msg.setDestination(61938U);
    msg.setDestinationEntity(174U);
    msg.cmd = 141U;
    msg.op = 39U;
    msg.plan_id.assign("TCYFSLUJFKZNJSQPBKDMPUMVPFUYDAELZBLXCR");
    msg.params.assign("JDEHEXVDPOOZVAVBQPZZKRIXDCBKFQHGWRCMFQACYVGJTKVXLPUQDDTUMTYAJZLWFYYEROKXICSMGUXDSKVPJ");

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
    msg.setTimeStamp(0.12530654158867682);
    msg.setSource(31273U);
    msg.setSourceEntity(160U);
    msg.setDestination(41666U);
    msg.setDestinationEntity(181U);
    msg.cmd = 71U;
    msg.op = 219U;
    msg.plan_id.assign("WMOVRGYOGGNYDFQUSWDUHTYIKARBDJHCQCTEWMTNKKIRBZPGDVRNHYIIWBLVEWOALYCXFUALLGUIMDUSBQJAMSCMDXBJZQRXZIQTJLKIXSNXPLHOQKXRJDXRCPGCOWVZYFJHAWRTOLDPJTIAYMQPAKEPRBFMRMONOQHUZCEISDFUEUEWAHSFCZTAEXWNVKNOEQPZIJQAXHT");
    msg.params.assign("CBJNTCUEWULOQDXZDULQT");

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
    msg.setTimeStamp(0.5333094663124377);
    msg.setSource(37094U);
    msg.setSourceEntity(133U);
    msg.setDestination(35733U);
    msg.setDestinationEntity(191U);
    msg.group_name.assign("NVBWMYGZSKBHJHMXPROZEYLTSPMJBGAUECDDEO");
    msg.op = 216U;
    msg.lat = 0.027764379343413803;
    msg.lon = 0.3299802505111805;
    msg.height = 0.40726266459718674;
    msg.x = 0.016272216321144284;
    msg.y = 0.19697342781621152;
    msg.z = 0.16194662058253217;
    msg.phi = 0.796908798701357;
    msg.theta = 0.25401742917903625;
    msg.psi = 0.8569212097260794;
    msg.vx = 0.494185937577475;
    msg.vy = 0.39720186854242023;
    msg.vz = 0.7967985759750155;
    msg.p = 0.309804121798413;
    msg.q = 0.17323293479545243;
    msg.r = 0.013652300575330845;
    msg.svx = 0.1267305031884174;
    msg.svy = 0.37431188448272756;
    msg.svz = 0.8952857371844153;

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
    msg.setTimeStamp(0.17415060092101498);
    msg.setSource(40429U);
    msg.setSourceEntity(99U);
    msg.setDestination(64691U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("OGEFDFHUBCSTHLQSGUYOKXPUCZPSGKJQURULVWVNQKWLTMLEYQLGIYBBDEUNSJIFMMRHPKXGIXHEMNTUHZXTXWOYRAIWVZDJPZVJJEVUAFNOIQFNCERQCYZPHVLLZCCXQYDC");
    msg.op = 15U;
    msg.lat = 0.11843931462764823;
    msg.lon = 0.963907624911131;
    msg.height = 0.09407420568710123;
    msg.x = 0.4961272937390645;
    msg.y = 0.4866290350755421;
    msg.z = 0.9304907540813174;
    msg.phi = 0.9948923462996397;
    msg.theta = 0.7159512609107277;
    msg.psi = 0.11733385018415576;
    msg.vx = 0.652650592178527;
    msg.vy = 0.9667067597015628;
    msg.vz = 0.6126709607683136;
    msg.p = 0.9095139340681263;
    msg.q = 0.6563239421936595;
    msg.r = 0.45455815088650875;
    msg.svx = 0.0950727323805306;
    msg.svy = 0.8508094447213754;
    msg.svz = 0.2614162498558308;

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
    msg.setTimeStamp(0.8880634815762365);
    msg.setSource(37655U);
    msg.setSourceEntity(167U);
    msg.setDestination(46156U);
    msg.setDestinationEntity(185U);
    msg.group_name.assign("QLAUECLTGLQDHBKIPTSNDRBEADLBAEFAFQIKBNGVTKPGOKMBVZOZHZHEUZDSRHOYCDWNJQJVPZZGKGUUOPFIKGWYCCQEPYOMZIGEFIHLMDJFHZSUFWJAJQUDJBYNXMXCRSBUBAHHENCCKTINTWXNAYUCZPOYLIFRSLYAJPOKIRYUDMWWNSCXEJSTCHTVTJVGVEWXXROQXPWFRPV");
    msg.op = 236U;
    msg.lat = 0.9636936988933235;
    msg.lon = 0.8417537540196303;
    msg.height = 0.1569734324549612;
    msg.x = 0.5874782863585771;
    msg.y = 0.9132387674775932;
    msg.z = 0.0941409849694228;
    msg.phi = 0.035789298301446504;
    msg.theta = 0.4620902174639977;
    msg.psi = 0.04402177872995916;
    msg.vx = 0.4513467884996665;
    msg.vy = 0.41654486112104805;
    msg.vz = 0.2861798672342538;
    msg.p = 0.13778183687587664;
    msg.q = 0.23622261342029405;
    msg.r = 0.1450479196442258;
    msg.svx = 0.44334058113049624;
    msg.svy = 0.30028940743290256;
    msg.svz = 0.29973667494175804;

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
    msg.setTimeStamp(0.1125603226576154);
    msg.setSource(22052U);
    msg.setSourceEntity(58U);
    msg.setDestination(50957U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("REEVMMUJCSDSVONIPMZKNIWLXFSYZCJXAFJBHDVCJMEVHABQUKLGLFSHBEYZSRTMZFKGXCXBJPLMXOLIANXQTGGHFRREWUZCXCOXVQYWIQBYNABGQQKWTUYPSEASCHAVOTTRKLOZDXYFQJUGKEYORZIJQBJLCWTOJGODLWVWRNKAFDKITMDCPVAQDQHPNAI");
    msg.type = 250U;
    msg.properties = 242U;
    msg.durations.assign("COEHCDCRNIYTJORQLFQIZCIVIWZULYONBTNRPNNXPAYJAXFGCLSEYFHLCFKRXEVOVSMXTPYQWXHJUYGSXAEQWBSPSDKMREGTRTLNFLFSIMOPVBVTBVDEYDSJHHTEUVHZXSAZLTHFJAJKSQMNILBQRBEZKQBWUGEJS");
    msg.distances.assign("GJBGLPHYRXWBWDUVZQETKNLLUQSJAMSEXWKTKPSOPTMAKPZZIJWIOABZBUBOQWJPKDZKOVDIRRGUHMATGDJSFFYHFGXKXEAZCTBGZIKTNXBVYVBWS");
    msg.actions.assign("WCRDMVMRYOJDENZEKDZCZDMNHJHPAAGIXSIKDLMUQGHBPRUYPMOKXERZIYKWCYJGBIWZDI");
    msg.fuel.assign("FJZMMZBSRODQBLWBYALXGKKIQJURCICNDXKFVSUQMKIKVVHPOLIJCOZSEVSDPDDBPVIOHXTJRIEFMQAPTITYPYGKZCPGCLRGRJLWFXWFFOUYQCSUSCBEYNEGMMQROQTMNAEVPLOSRJAJBTESN");

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
    msg.setTimeStamp(0.07354596406424296);
    msg.setSource(54163U);
    msg.setSourceEntity(196U);
    msg.setDestination(55988U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("ICJXBXZJUQGTTNXIUCBNDELJRVAFGYVMZQMXQHHYKR");
    msg.type = 102U;
    msg.properties = 106U;
    msg.durations.assign("WBXQPPKAETMKVHIIXJTCPJFQ");
    msg.distances.assign("NFDGOBWJIIUWVFBJBEPRVYRURHWECTGNNDRPESJOOSTJDIFZIBALKHMCXYQKDSXSJSJWQGWXANACCBLLXXPQTCLZOIEESCNEKKAHUYKYYYCMRGALNKBTYPQMFSHVDRUOPWZAQDMPNUFUPWKKWIGEUOSWQGGFPIFCBEHLBAZBDJXJVLEXEZH");
    msg.actions.assign("ZKZGXKVDUGCLMER");
    msg.fuel.assign("AJJOJTFKTWEMSPTJRANRXSGRWHUCQEMMQPFTWAISGZZZBRSXLLRPXWTBREDVULUAPNIBGDOPNDPJDHVOMOAWJTGGEGYCRMYTZEVQJSNYBXSXVVKSUGXBKFELMQWBYBINUZWVFIKDCCCOUSKQKUFFCRDIMXBYSTEQRKHXAFEYEZGMJQALHKWHHVIPLHIGQUZYLKKYNZJNBNXHLHYOPVOGFETJOQDAICUFWMZVLPATSIBIHNVYZ");

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
    msg.setTimeStamp(0.46126498005831873);
    msg.setSource(33346U);
    msg.setSourceEntity(207U);
    msg.setDestination(50959U);
    msg.setDestinationEntity(231U);
    msg.plan_id.assign("PECAUGUPGXBUNBGTPZAMMABRABXZRJGQZPMDTTDHGXXHUHNDUIXAJLQDWSJIWRCDD");
    msg.type = 252U;
    msg.properties = 65U;
    msg.durations.assign("CEEKOWPPXQSMBZVALEFRDTGRYVJFWKFDIUUCRCNXQHUZHHDLLCSLYRKOATQSIYSKXRYKJBIUFEIUDEXYZAJVHWWDLLBQZVDMFTWHGNUNONTRGEXSXEBPDVJMGTTGESVAPTBKUGUZKCAJWJSEOCHIVHRBFZONZMUNDNZCAJBNFMTKOQXSWGOYQYAJYPRTYCLXJYQEWJKMALLIIFNIQOPOHMBXXGDWZIAKCCMGIDRVPBZGHNS");
    msg.distances.assign("PIXINHJSOHCFWRDVAHBLXAJCWQJHRKEQNGWIAAFTBBECKZVSTZVQZIYKPZNLOWCGRAUDNXVPYZNJDKNHPGYWQFDESATQHDL");
    msg.actions.assign("AXQBDSCXFIRQTBENFUGPVVBTUYSENEHPDEGFCHVPHXVWLKEVZKAWLXPULIDZAVBODJDOTKEZR");
    msg.fuel.assign("BEOWDDSPRWIWNJAGGHZOMZRHYJEKOTNTXGHRWIQFYZJIB");

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
    msg.setTimeStamp(0.14112125643679463);
    msg.setSource(51316U);
    msg.setSourceEntity(118U);
    msg.setDestination(19571U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.8200685158302607;
    msg.lon = 0.5695362236800614;
    msg.depth = 0.19449691970839078;
    msg.roll = 0.4323279284901963;
    msg.pitch = 0.2538147948585753;
    msg.yaw = 0.8833855239127885;
    msg.rcp_time = 0.7967594549300698;
    msg.sid.assign("SHQMKLVOPUEEGAMBRSNWJYJVWDQBXNJFNDXCSQLVXPNCQPTTKUZHSZIOWUKGIICRDRUDVZJEYEXJYDGZSKUYEBBWGWPKWERDNPAERPHKJCGH");
    msg.s_type = 216U;

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
    msg.setTimeStamp(0.8864674998834434);
    msg.setSource(56974U);
    msg.setSourceEntity(183U);
    msg.setDestination(38327U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.05641247865129506;
    msg.lon = 0.10234446497860761;
    msg.depth = 0.6100668973844142;
    msg.roll = 0.9596868168067549;
    msg.pitch = 0.2977977027095201;
    msg.yaw = 0.511430879650118;
    msg.rcp_time = 0.8071274038155088;
    msg.sid.assign("RIZZSAETKHQJPYBIUQZVENDOZXULEYVQTBUTNFAVLQVMLICVUYYKHDQSXGIZTTMRYBFFKDKLBCJSWIABOPOROUFVZXQRGXMIMARPYZNTCIJANHXGFNIEBVOUCOIASQBDUSHUDHHWJLRPCGLRSAJMPXTOYYXDHTDRB");
    msg.s_type = 151U;

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
    msg.setTimeStamp(0.588482367640067);
    msg.setSource(63696U);
    msg.setSourceEntity(119U);
    msg.setDestination(64060U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.20091893286268137;
    msg.lon = 0.9096831704521343;
    msg.depth = 0.9954026024868934;
    msg.roll = 0.5024919007824981;
    msg.pitch = 0.7393394724107989;
    msg.yaw = 0.703130585752484;
    msg.rcp_time = 0.19819408915817716;
    msg.sid.assign("PCYHZAOAPDQTDXAPLWLBRGBJUMKMJNDHMRQCVWUELVNTGMFHTILTZLMGOEPKDFYLHAQZSAUVNRVNDNUEBQI");
    msg.s_type = 237U;

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
    msg.setTimeStamp(0.702297440758536);
    msg.setSource(11356U);
    msg.setSourceEntity(85U);
    msg.setDestination(46963U);
    msg.setDestinationEntity(13U);
    msg.id.assign("UCGYZWZEAEMLROJSPSUFSVKMAOFCLFNZLETFLBMJTCXAAXSHIJEHVPNVRTWCKOPCXXOBREFTHALPHJBUPJKMLNKWGSRBSQZRQXGUFECCYWRIQXQOPKVALGVDITNIMXILDPLGSUWQHRX");
    msg.sensor_class.assign("TTZZTWRKARKCTYOVDTRSLHCVVUDBNCKMNUQKLILWLSAHSWCSQOJDGVZSCEDTHNFYJUWUJZLQWYSZXMZLIOZGYISMOGRPFMZNWPORIZAMOJBXSUHUKIXNGLUHXJFAPVEPNGNMFYIJVQEKBHDPIRCERPEPARAMYUODWKRAJXABCFJYZQN");
    msg.lat = 0.7909151174838027;
    msg.lon = 0.9260057399960724;
    msg.alt = 0.5458309406781953;
    msg.heading = 0.8826011963150646;
    msg.data.assign("LTNKTUWRTSABPOOSGIYXOBPJEEMMRHCJIRCYSQKQVQPNXYXJCBGVLADVGKGLTRKIGUOINSSYNZJDZXTHTEFRGFSGJOQBVAVNSDIMUHDIUVDBRHBEZCQKBZPBEIROQXNNJXWFPWVNKPFXOMAUKPYMDWCZQEITDTHYBHFHFWDOO");

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
    msg.setTimeStamp(0.6913979325185887);
    msg.setSource(62432U);
    msg.setSourceEntity(203U);
    msg.setDestination(21346U);
    msg.setDestinationEntity(166U);
    msg.id.assign("NYSEXVBLWACJXBTFKYDKYJVIICPNUGCSNARIXXEFHTYRCUORUEBOLDNEWWZKCFPMQAP");
    msg.sensor_class.assign("ELCAZAVTRCNMDCYPRLOHIHBSCUETKNCXMLNYOJLUXXTVTBGIPQNGDGAQVLKJEGQMAEKHOKNYEJSSQRUUYIPITKXYNMVBIOEKGQORFSHBTJXZYXN");
    msg.lat = 0.6459688076114302;
    msg.lon = 0.32583585869915443;
    msg.alt = 0.3078528289898027;
    msg.heading = 0.7810184470641374;
    msg.data.assign("DSAYSRNPMMVHXKOTXAUWAPEBYYYRTCRUOZENQVEPVGKKKUIJMHHSVSUQXFUHBCVNFMWC");

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
    msg.setTimeStamp(0.6758777031806165);
    msg.setSource(48313U);
    msg.setSourceEntity(146U);
    msg.setDestination(54517U);
    msg.setDestinationEntity(248U);
    msg.id.assign("KLVBNETZLXJFKRXDFENVJGPBFUTDBCABVOLBREPKNUGRZHXCBMTMONXWPNTXSMFEATKHAMIGWXYHSOKUSWQEDV");
    msg.sensor_class.assign("STLPLVEJOSXRKWNAPOBROEDHEHOZXYQLRLWUKMFLCVWITBNVHLYDEXMWOTHUDOVTIKRNYYLEMOKINRGFBQRGDRGJCDVXUMJXPCBMWFHHFQTPAZILUCFVQZSI");
    msg.lat = 0.24797750735703117;
    msg.lon = 0.6289462998627926;
    msg.alt = 0.22236656642079644;
    msg.heading = 0.4257565394021964;
    msg.data.assign("QTKYEVJPXGSQJQJYGJGFVIAJXXZASPLTOICCFPTYPTFDRMBUZBMPKUINXXVQRZAQAWPDFQIPDBHRZOVJTIEMVKKNGMEIKYJWPRAXEJCLHFYFXWHKFIVXMCNEDSWUBOBWSRWMTLSLRDLALIOSEUFMNOHEPHHTZPGVADU");

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
    msg.setTimeStamp(0.17941567168728378);
    msg.setSource(38067U);
    msg.setSourceEntity(192U);
    msg.setDestination(50488U);
    msg.setDestinationEntity(68U);
    msg.id.assign("KAHITVGUMALWELXNWQSWAEVWPFNBRNVFGRDLNWESCXBBUQOHWMECPXRHFZUXLYRFHTBPYMZVBMDRBLEPDOHCNVTICISGESQQGZKBWTGOQMMPJQKQRDLUYGXJRAAJLYOZUKYNNBYERQP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SUNPBZHSEIXQJNATDGCJEGKFLYWBVLEQDVDWTUEFQXZFUCSECNOPBQYYVXMPEWHKYZRJWRTYFNLDFUBQWTBHVLULGHPROUCODYMNFUKHOQKKMDARXZFJOSITPUBEYKXTHWIJWZMIKPUJTHLAGZLDIZJCSCSGFAWNENTZQHLVWKSNVADOGAEMOWSAMQAXGCVLAJHVMRCPOKGDFAPFJXXIBIGVQRUXJPKYTBRBXRNYEVGHSCZTOSOM");
    tmp_msg_0.feature_type = 123U;
    tmp_msg_0.rgb_red = 240U;
    tmp_msg_0.rgb_green = 144U;
    tmp_msg_0.rgb_blue = 23U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.889384324939806;
    tmp_tmp_msg_0_0.lon = 0.8872194461348096;
    tmp_tmp_msg_0_0.alt = 0.7429070193603293;
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
    msg.setTimeStamp(0.3251899908982975);
    msg.setSource(45197U);
    msg.setSourceEntity(42U);
    msg.setDestination(62928U);
    msg.setDestinationEntity(212U);
    msg.id.assign("EMAPAXKZTAJVOMHYYCFEODMTLJOIGJQBMBWZNQYYALXHGSSJSBGDMBYAKXBVNKJERUPKVSCTWKHYEVDIZWUXRZQPLCENLRXBTAULXLWPNRLDAFWCFPMILZGQUVROFZYRL");

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
    msg.setTimeStamp(0.18418209323850943);
    msg.setSource(14508U);
    msg.setSourceEntity(103U);
    msg.setDestination(48254U);
    msg.setDestinationEntity(84U);
    msg.id.assign("TSWMWRASUGZPFKXCJCHUQMIJXVOMPLDJSCVNJURFLDQPEIGQMYONZZJITORAQXSRYMABZKFZDLREPL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZUMJWHJOAVVOSJDDGZEXM");
    tmp_msg_0.feature_type = 160U;
    tmp_msg_0.rgb_red = 37U;
    tmp_msg_0.rgb_green = 224U;
    tmp_msg_0.rgb_blue = 134U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.1957225948748189;
    tmp_tmp_msg_0_0.lon = 0.008553976498349658;
    tmp_tmp_msg_0_0.alt = 0.015745388020391604;
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
    msg.setTimeStamp(0.8452639404676493);
    msg.setSource(54727U);
    msg.setSourceEntity(237U);
    msg.setDestination(43086U);
    msg.setDestinationEntity(41U);
    msg.id.assign("RWANZRZEUXUBEKLDIDFSJOCFIFVPZRLOHFLZYWPZJWPJXTKQNOIPLGDQWTWHJMCRTQVYBVGEISVYKUGNZVGCWICFLJUUDSAWBZNULGBUVYAQUJHZPFRDLEO");
    msg.feature_type = 9U;
    msg.rgb_red = 152U;
    msg.rgb_green = 7U;
    msg.rgb_blue = 107U;

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
    msg.setTimeStamp(0.8226581737041764);
    msg.setSource(29356U);
    msg.setSourceEntity(159U);
    msg.setDestination(533U);
    msg.setDestinationEntity(240U);
    msg.id.assign("QEXJVMUDRQFPIOPJLURCVBRXIIPSSCXVNCITXGIZHDBRBBZHKOTMEGKTQAKGZITSWCBOSVJVODPGSUZLMHLFGYWJJRHWOQEAYQQYGEMULWNEZZEMQUJEWDDHIJZNINFKBYWAQAMATGYPRXAFDUHHKSCCLXFLSUNLOI");
    msg.feature_type = 110U;
    msg.rgb_red = 50U;
    msg.rgb_green = 108U;
    msg.rgb_blue = 47U;

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
    msg.setTimeStamp(0.10607803869753563);
    msg.setSource(21114U);
    msg.setSourceEntity(125U);
    msg.setDestination(59640U);
    msg.setDestinationEntity(164U);
    msg.id.assign("WUTHWBRTWAHIAQMJTGEFSSSIIVXQSODTKGTRFXGFSHPNJSIOMRGABAIYIUEQOYPNAZNNDLZZGERMFGIWRWKJNQZDJAIXPDZFLUUAZJSPQVQHBVDNKBVMYQMGEBKXVDHCCYDREKSHXBFMLCMDNX");
    msg.feature_type = 39U;
    msg.rgb_red = 61U;
    msg.rgb_green = 16U;
    msg.rgb_blue = 73U;

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
    msg.setTimeStamp(0.11988398232160791);
    msg.setSource(59616U);
    msg.setSourceEntity(198U);
    msg.setDestination(55722U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.801640380050951;
    msg.lon = 0.7045209260449561;
    msg.alt = 0.6948658958098148;

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
    msg.setTimeStamp(0.9264535434722934);
    msg.setSource(4964U);
    msg.setSourceEntity(150U);
    msg.setDestination(9433U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.1713737445389345;
    msg.lon = 0.27429291116353505;
    msg.alt = 0.9735809268045957;

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
    msg.setTimeStamp(0.7203017605457747);
    msg.setSource(34886U);
    msg.setSourceEntity(31U);
    msg.setDestination(23448U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.7581920666316387;
    msg.lon = 0.9196888048809848;
    msg.alt = 0.9502746087703906;

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
    msg.setTimeStamp(0.8296403513133948);
    msg.setSource(50399U);
    msg.setSourceEntity(52U);
    msg.setDestination(30652U);
    msg.setDestinationEntity(179U);
    msg.type = 32U;
    msg.id.assign("YYXCPUMNOACPZKWBYOQJPVEPWGEEIAVNQELFFHHTKPZURRCDAVBRXQUDRVAPSGIJQRGHWGJDLXMUXNTKVZFBXOTKGJVWTMUNEJIMI");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 87U;
    tmp_msg_0.op = 67U;
    tmp_msg_0.request_id = 34073U;
    tmp_msg_0.plan_id.assign("TWASOLUVOZAILOKYQKCMNDVHUWEXOZAPAJPVUAQXCBDFEYSQJGPFDTWHLRVNZIYOXRLWFKEVIUGVOFVQFPBHSDRRJGCXTDGJELTYUJQKZUSMREYWRXJGNBXPCGXKIDUTMBESRIOVMLARHPONXWAKLSSFJHBZWDUQJ");
    IMC::CurrentProfile tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.nbeams = 161U;
    tmp_tmp_msg_0_0.ncells = 184U;
    tmp_tmp_msg_0_0.coord_sys = 247U;
    IMC::CurrentProfileCell tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.cell_position = 0.10309704263300234;
    IMC::ADCPBeam tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vel = 0.03468690494032933;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.amp = 0.9738916572466606;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.cor = 1U;
    tmp_tmp_tmp_msg_0_0_0.beams.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.profile.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("XICMPEQTJYNYWCQWDAJZDVTLCMVUCBQYVHGSIGOHKNPEWAKEIFSUJVXSOTVZYRHNMBTWETHMZDSJFPAFREOPIFJRJBVWRYOWCRFOCMCBAXIXSLNWDZXJZDBGKMJWPCGQGZDFVMNKUWOMZAIOK");
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
    msg.setTimeStamp(0.6988070077825361);
    msg.setSource(37759U);
    msg.setSourceEntity(52U);
    msg.setDestination(46530U);
    msg.setDestinationEntity(152U);
    msg.type = 95U;
    msg.id.assign("TWHZMDAPUALEYGJNEECIRNFKECIANFFGQYZDPIIJVGIQMUBVJRGDUTFQTWPDZLIBOOOWRHJOPYKXXSVLKKSKXHJQOKJYBQZZVTJZTBSMQEMXTFXERHMPURESYLJDWAVILWIGCPPZKEFSHGCTHGLVROWCDJBBQZXSSQFNGMYLOWXUFMNOOZAKPURYMBCPWGXMLNLPA");
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.9184249296527927;
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
    msg.setTimeStamp(0.003027049836724305);
    msg.setSource(54745U);
    msg.setSourceEntity(167U);
    msg.setDestination(13277U);
    msg.setDestinationEntity(150U);
    msg.type = 17U;
    msg.id.assign("ULYPALEXMBQXATDYTWVDMPZGXAPAVIZHSDFRONBYGVIHHVBBIXLMGRSODNANBCVHHKGPMUTKMZZCJTDYIKENMHRCJNMMYKYXRFLJJISPLETUCNSSQWGSWSOKQTWXEZGKNUDAZKOANHLVWQBIBDICYWFYXTSJHFRUUWPFGSCQI");
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("SFDIOJMPVAMYRZFWZLIJCIATBGBDEAAEXESZZSYTQAQNKRMIZQZUUSIRJBEQFWAPWYEHQUQMQPKBFGLSBUZTJMHGPRTTWQVALYPNZNKWVOFLKCYDCNKHEUBDXIIYKWUBFDHRVOVDYPVTTVKKJNNGCJLVBJMXSOFRODUJLOWGHPZSZFCEIGMLTGHYXPXSNITLRHTFPJMOUQFBSWXMYNEBDCAQOLJHECXGVOXVRWUMXXICKW");
    tmp_msg_0.htime = 0.9410862107568111;
    tmp_msg_0.lat = 0.03414479061365672;
    tmp_msg_0.lon = 0.786995582019532;
    const signed char tmp_tmp_msg_0_0[] = {-10, 85, -74, 27, 39, 118, 91, -18, -1, 57, 9, 47, -63, 105, -33, -97, 77, -1, 116, -110, 58, -64, -86, 1, -2, 103, 95, 30, 15, -18, 84, 39, -7, 66, 95, 5, 88, -28, 14, -107, 33, 12, 81, 111, 45, -76, 9, 98, -90, 79, 8, -66, 9, -125, 105, 100, -21, -128, 112, -23, -62, 113, 94, -102, -125, -97, -37, 12, -115, -47, 78, 16, 48, -63, 29, -60, 69, 120, -29, -25, 122, 60, -52, 110, 20, -24, 102, -18, -7, -88, -56, 53, -64, 0, -14, 107, -98, -76, 2, 70, 6, -47, 29, -54, 66, -83, 33, -101, -1, 75, -41, 7, -46, -121, -4, 70, -111, -4, -116, -124, 74, 53, -12, 28, -7, -127, 52, -38, -60, -58, -95, -88, 64, -1, 72, 71, -112, -49, -48, -45, 116, 68, 60, 25, 66, -73, -38, -103, 18, -28, -71, -10, -8, 126, -25, -19, -79, 41, -119, 23, 60, -122, -15, 79, 71, 126, -125, 13, 94, -74, -103, 100, 19, 64, -77, 41, -3, 37, -49, -67, 88, -23, -93, 39, 117, 75, -39, 69, 85, 114, 66, 96, 49, 73, 62, 4, -8, 107, 75, 112, -105, 17, -35, 115, -34, 13, -2, -70, -78, 0, 88, -89, 6, 39, -76, 54, -73, 52, -53, 30, 124, 55, -91, -108, -95, 43, 55, 87, -106, -37, 1, 79};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9358719319852203);
    msg.setSource(59301U);
    msg.setSourceEntity(102U);
    msg.setDestination(43820U);
    msg.setDestinationEntity(236U);
    msg.localname.assign("BRUTDTIYBAGPFZKGQTVIEAIVWVROPMAWHHFXXNLNYHUCUELBIUUKVGOZRWXKOGCWFRTEHOGMYZEQXAUFVCOQZLJYLHRXDQPEIT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("IZJYERLILPIDDMSIKXQVNLQGBSERWDWXPJFNFPHGWFXQYKMOQDREJVOTIBIJZYUMVOACHARRTGNOTDRYQLNFHPHAVTTMTRNPNKNSJVQBSDENABAHRZXWTP");
    tmp_msg_0.sys_type = 177U;
    tmp_msg_0.owner = 40832U;
    tmp_msg_0.lat = 0.24392981883096587;
    tmp_msg_0.lon = 0.4169197854440143;
    tmp_msg_0.height = 0.20454154197549856;
    tmp_msg_0.services.assign("LZXSETRBODNVFEMYNOXTQFHNESPOJHAGIUGIQVPNUFFBHEJCIUTFYNWXPZDYHAIWGDKBMFMOVN");
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
    msg.setTimeStamp(0.9165630135566678);
    msg.setSource(42660U);
    msg.setSourceEntity(194U);
    msg.setDestination(8908U);
    msg.setDestinationEntity(124U);
    msg.localname.assign("GILEXFNTLXXDFRMMJENMCJMVFBYYRWUEWBHJQUZHLXKWGAGDFQQINPGHCOIBBAAGVEXOUUVIJOPBHMI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ENRAXAIIEBPXFOIJUWAZMHVDWKNQCNJYYANNVDEOTXAIJWKPCEBYFLHLTGGSTQKYODQTBJAHFUMBKPGBQZVYWXJHSSFDOWGVVEMIZXLSHTZNXVFPBLITVDYTFKMNLUONREIHCK");
    tmp_msg_0.sys_type = 37U;
    tmp_msg_0.owner = 64749U;
    tmp_msg_0.lat = 0.978861446449239;
    tmp_msg_0.lon = 0.5337913482383738;
    tmp_msg_0.height = 0.9222039782454786;
    tmp_msg_0.services.assign("HFMICUPMJWOFOEPKHVAUMRUJSAYEDHRPPCSFXNAHQFRNAPLRQBDMXUKGEQHGUGXPKVHTOIZNSTWHBTOTDXYFDVGJOSLXWJKMLBGEICLBQPVWZHEPQCRUICSUODZVTJYFPIVLWQETTJKYNZNRUETQQNBJXBYANOZJMQDIBNUKTZARGIAZILHJCSKMFBQFWRCXJNRXNYMECAEBCYPWVAYVVXWSLBDGGFOHXWTLUKCGSSZSKVKZGWFIORE");
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
    msg.setTimeStamp(0.4870570894408389);
    msg.setSource(45329U);
    msg.setSourceEntity(249U);
    msg.setDestination(26770U);
    msg.setDestinationEntity(125U);
    msg.localname.assign("XFSEEPPEXAHXUXTRRPJVDYCNPGLSHOPCMMJKHETDEQRFJWSTHUQHSQOAUWUYLEWZVBOBOHZBGFKNANOOZZSQYCFCDMHXYKZGJGWJBURODEUJLTOGIVAITMVUUEUULFITIAZPATWYBMIRPNPRJXBIWVDFHSMIRIPXKCWNCNMDRDWHBAAWBLOVKQSCJXGGMFGAQNWGDYEYNJOYFAQMD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TMFDSIPQQEUTJCOWGUAKEHIFXKTRLOXXPVMRNLEGBLCPWOKLEUDYBXXZWBUPEGWFQETTEFMJAJIASFXNZRDAXVUFFZGATAOCCXSHCJUTONYDJNPVBNMHBKYGQAKZZQHZOIBYYLZ");
    tmp_msg_0.sys_type = 145U;
    tmp_msg_0.owner = 6457U;
    tmp_msg_0.lat = 0.22797381576227727;
    tmp_msg_0.lon = 0.19281239944326523;
    tmp_msg_0.height = 0.6776266817110344;
    tmp_msg_0.services.assign("SSSRRQPJNFBYJYQEGKVPTKUVSHJZAUKEOREWWDWDLLGBQYAMAOVNRDCZIIYXSRLZXABJZFYCPFGVEWQGBMJHVPVBGPEHNZOUOQZGBZANTOUBUJDCQFQUUTDFPGHMKIEIVOXKVMCOYOSRASRZL");
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
    msg.setTimeStamp(0.004003121129343201);
    msg.setSource(63731U);
    msg.setSourceEntity(228U);
    msg.setDestination(28343U);
    msg.setDestinationEntity(86U);
    msg.timeline.assign("RDDBFSEODCUAQYGVCFQBUZSRDCMGWFUJPMALYVKAKDZRFTUFIMCETZJIZUTLPBEBYSUKPPEHMHLBOVNXDRVNHRWFACXJCNXOABEMFQENPSVORBXYGASVQTDBFXYXDHHSTZQWPSUFLONHXFYYRKLKJXKTWCCGQMIIWJIJROSPVQDZ");
    msg.predicate.assign("GPWRSTWVPVCXJ");
    msg.attributes.assign("LDJKJCDYQBMJFFMOZFBADLWTFHTVRUPLOESKNPOQKEZXDUTYXOOVKFTYCDUSGUMWJCDNPPXTGIRUKDUHEZCSRMJAVFLSBKWXRHHZPVFUSGAAULHQXQBCEGYBLZBQLMZEIAIOYBYTGIGSLFNHODRPXKZJMCPUHQYLVWTVKGIQWNGJFWPRSRBPASAEQGLOKXWJZSWWVOZRITIMXEYHTVRNSAEFXWQDOPEZCBMARNGQVN");

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
    msg.setTimeStamp(0.6602038461192552);
    msg.setSource(8638U);
    msg.setSourceEntity(139U);
    msg.setDestination(45308U);
    msg.setDestinationEntity(48U);
    msg.timeline.assign("WAPNQXGIFCAYIHQFDZMMPDNJFVHBIREOSVRIFHOCWEXLKFRSWLVMMNKXWXQOPSKRGNJAVSEDRWGSTCLCPPYMVLIUENGFPLUYMHESTTNOYSEFPHBXTSXIZCSYBKAAEYTONHLBQYGCUZTYWHDOVUHVUXLAOKMWEIKHCLTKHZMFAJDRPLJZJMXNBDERCKCYNWIZJGJGQMPIUIVJTQATROJAUKBGVOJQGQXZWUPVRSDBDUKBERGDQXAZUQZNDYWZFO");
    msg.predicate.assign("ERFGORCLJFVXZOSGAUJZORVXMDUNKKPCUGTWLPWAXLTCQGDHAAFYKKFBORANOOPSPNEUIYBBWQEDZSMVAGGLCT");
    msg.attributes.assign("TAJGVYLINZMPVZMIEUIMHBKAVMPYWPTRQADTQRDXNBLXWEZHWFYUIRXFDZNNGTQSTHEUJZXMFWXULVVDJFPDXQRRELWLRDLEVHTKDTECOIRGYDSMEUUZOYERDDMIPOIHXBKBYUOFXNAVCLYWOHCAJSENCLK");

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
    msg.setTimeStamp(0.48272093885867107);
    msg.setSource(27973U);
    msg.setSourceEntity(34U);
    msg.setDestination(10896U);
    msg.setDestinationEntity(59U);
    msg.timeline.assign("HISHKLXBHKPGGRNYFEJTMYRLWQUDPUCNRYKKANBGNRCOQEZWHIDEXVZGVDTSDMNHXHEMJFVFPGFRKZVFBUGXTIKOIFFXBIIJBUELBWTTXLSATPAUDTHCOOIQOMNQXKBBGQQYHEQMEWVZGJWZTNJJNDSBAYCGZPKMWCUIJTLWRNWXMAARLE");
    msg.predicate.assign("QJRAETQKZZDPNOZRZVCTXDBOHPXKUXRJFGTIOIOXIOZKZGCFPJFGLYETNYCBIQWUSVLCNEFLYXKFMIXDPTLWRBUYUQMFLEJBNJCMXUBIAVDLYXJUQOEHJSCZWXUNGXGLPMUBAWRRSGAQZJVEQGBGVANHEDKHPKNFHSTIUSVFKJOPFKMHETQPZANOTIYRKSCCVJDBHBAISMTVLPDLCWAYDSGNAHMCRZWAODYNELOTVPDMSRI");
    msg.attributes.assign("ITQRBGHDPQZWPBYUGTMCUOEIKVQMQTYCWOISWAKYXGXKDMIIESJCPRVYUVCFAVDSHTORLBVTSALHZDAPRDIYKYLMCTQEQAYZALRDPAZMPVCVQHQSUHOVBHTWGYIFFKKWGNNVFZCANBFMUGHJUUELBXERLWJMFOVSXFGRMQRJNJRTJDHLCYENGFSOBJTXFZLQNZOWDPOSWMBXIDHPUPGTJXKBGSNIZEULLHKMF");

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
    msg.setTimeStamp(0.0446182758046787);
    msg.setSource(44534U);
    msg.setSourceEntity(222U);
    msg.setDestination(5741U);
    msg.setDestinationEntity(193U);
    msg.command = 222U;
    msg.goal_id.assign("ZDAICIQRFGSYURTCZMVXACQKZQUYIQULISMLWLMECFHAKNCMZMFJKUUVWYZBKJGSRXCWGSGJWQNSETLPUHVXBAT");
    msg.goal_xml.assign("DAWYGOSOGTCZXKNJPEVVSKFSSYDJMDAVKXRQTQLTTHOINAFBAMSCBKSMCXHIYXETBJDVXBQDIWGZDUNOBYYBPSFJLKZRMPQGTLYFIJTRURRMWFVCWYLFNFEJAMINPZSCNTZOHPGAUHFEDOKCCPQIYEUZVGLQLXPZWIGMGXORJZPPVUHHBNCXCKUWRGYERQTHYBOEATUNKVSEHRWINLAKWDQJRFDGMUAXAIWDMFQLZP");

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
    msg.setTimeStamp(0.4385272815149326);
    msg.setSource(57542U);
    msg.setSourceEntity(2U);
    msg.setDestination(17311U);
    msg.setDestinationEntity(247U);
    msg.command = 168U;
    msg.goal_id.assign("LOMJRMAHLGXZQCYGTOLHROIBQNDKUENIDINIKTWPTIAXUEFVFEODAWOSHNNTYIJQXHVKDZWCSGAULCRBSUVHDPWZLCPWHTVBVW");
    msg.goal_xml.assign("KJAVBHRQCEALCYFOUSQYTSZXNRLWEGUIRDEBHXHUGCMWFMYCSOFWLFSNADTITETWDUGPQLTAIOCZFBB");

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
    msg.setTimeStamp(0.5155318065738591);
    msg.setSource(59835U);
    msg.setSourceEntity(27U);
    msg.setDestination(51944U);
    msg.setDestinationEntity(218U);
    msg.command = 156U;
    msg.goal_id.assign("NNBZNGPQAJSTMEJQGCDBINMTTNNUNCDOVJDDSAULKMQEYDJRKKCXEEZFVNEGDLVHZRVTBPQLMZPHCAJBUCPNRCVTLUEPYCRAFWLMFRIJBMVWUFWODLASOFRUTOSOSCHHPYWAZVRXSTCKWRIXZJWB");
    msg.goal_xml.assign("XTYZVXVVEANCHPTIDWBYQDFQOHIRZUTRSTNKBTPPERSLGAQODBKUBYJDVNMPWMCLSXFMKBPHHZYWPQTZJQRHQINCCMX");

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
    msg.setTimeStamp(0.9199481923115125);
    msg.setSource(38906U);
    msg.setSourceEntity(213U);
    msg.setDestination(43169U);
    msg.setDestinationEntity(209U);
    msg.op = 90U;
    msg.goal_id.assign("NPFYCTAYHMDBJOXOFUXSUINAADJJXRPQRHZAUOTLQQEWOGNVGYWJUOIBJRFWHQATBYMEQIEJQLGSSDPNGDBIHTPWWXYNCPKXHZJTYZJRSJYXIWGSBVENAAGETKNMPRWORLOQHGHYKKVJZMMLDXKFFVEVPMZCQBVMURRGLHDCBEYDIVZVGHTAAEK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JWPQAOLHDSCNVGXGBMTYNJRJQKUBEKYCUSSDCSTGHZGGRURBNATCNFTZJZFHHJPZGTYTDCDPDOGJVXNAVKNUPSPNHVOLHVYEOPKAFYFOBETQFPIWWXLCOKLGIUAXIJLSBEBLXZDMMFNJDWXZRPFEFMBHFGLEOIMKYQWWYCVLQXSIRYN");
    tmp_msg_0.predicate.assign("IJNRWAYAXYZFQWALDORWSGXJITLIVTTNRBSB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QVOMVPMDCLCJROBWXQIOSAPGGYBPMBUJAKLAFMGRQZYHEYEGKNZSSYDAHUARJJSWKAYPQGBVYMNCOHTDZMLJALUEEUIBREGNTDMFSZLHKGXOXRRKGSOKADTJTFBWTJGVDVYUISGDETHWIPPBBVERTCNHZTIDVMDIWBQZZLFZHFNSCC");
    tmp_tmp_msg_0_0.attr_type = 85U;
    tmp_tmp_msg_0_0.min.assign("PUEKKXYKWYOIQSPCDKRGZHBYTNSPLFOGDNXVCXFMGKRRZQASFMJAYSFOEOZSZLLVPTFKRBROHLJGGUPKMCCWMGJ");
    tmp_tmp_msg_0_0.max.assign("MSKLSPVGGXHBGKZQZZZJMFOUQELDAGAIBRMIAAIVSTWCDREMFVAFOUIWZNXFKSEBGFWOLDFRVNHLQHXHOXRIVGSYGTXHKVBAFPLREBVVOSCMJWRMEOPQYXCIZESQMYCCTDJNILJYTEBTMWHFDCLUCXYJWVTWRNUOPJXFRNJSYZ");
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
    msg.setTimeStamp(0.9455956656562233);
    msg.setSource(8800U);
    msg.setSourceEntity(151U);
    msg.setDestination(48466U);
    msg.setDestinationEntity(9U);
    msg.op = 24U;
    msg.goal_id.assign("DKXILJQGEFMEDICZAULHNIYCYPOVKBHTGGWGEWZRBNWMQJPMYXLRHZCAHTACZFDVJUXCUPLBBZIQUOWJOLXFXVKNKIBFFPSJRPQMCZMWNSVHNTHLKQNFYVEFSCJVUGOOWJXAGDRDSLEOASGQJCTBEFXISDURBPLOQWHODUKIQJZFLAYIPTEVBODVRSRQTRSMUEMGWNXTWMTTTMHXUFMPCZSQYNIR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SZZRYFPPCSFNGGHQZDKMEMAKUKBBWIQOOHUVNYMUPJWFNQECLMMDQLPTMBJRCZPAEOSDIAYBEVKXUMKJEXIKFNYWFTSAEFWBLGRFTZBXKVDWWHFOGJPCXYHGGYUTNCACTDXYGRJRDPJVBOUEDZOXVMQWSMHDYATCQPQHZDJLOTHWUQZGLXGFWAIHJRVHAJPDMESVQVVWCOINATIFRLN");
    tmp_msg_0.predicate.assign("AVSTTUJVNTJZVEYSBZOISFJSDEIULKCQHZWCLGHQCIGTDTJDVOGCDUERBOOKQCBVAUYREULBIKGDZFXZXMTJYVXWLL");
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
    msg.setTimeStamp(0.1992430339959812);
    msg.setSource(5089U);
    msg.setSourceEntity(82U);
    msg.setDestination(46351U);
    msg.setDestinationEntity(11U);
    msg.op = 23U;
    msg.goal_id.assign("IRHEKZUSISGSQIGGTUXPHWNBVEYJGTMPZJKDXHCADVYMEWAXIIOLVVTWLEAAPWOOQHZAMIQLKYCMUVMZINTBRX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CIQKEZDABYANIWTMKCRXPFPIUYSNYJUKKWMXGYIHLIPDSTFKQRYFNWPOJUVJJIUDGPNDROFNRNJDLVJZRARMQEPTKMBLLCFKBLJOXIGUHAYSOZBSTRQPDFXAPTGVKXHXWCCGCVWWUPVYYTHFBYHYEEWHZZFIOXTUGEE");
    tmp_msg_0.predicate.assign("WCJNCMQNLXUDDOBSIFNTTTRLSENHEFVRGXQDEJYSFXDFYTHOOXSABHQJOLUXNRCLWHBWVLVGUMCMBVVVQ");
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
    msg.setTimeStamp(0.12906896060181094);
    msg.setSource(22766U);
    msg.setSourceEntity(193U);
    msg.setDestination(58787U);
    msg.setDestinationEntity(32U);
    msg.name.assign("NLRKBAVGXEJECHJWDGVYDOHPBQJQAMZGTNPYMEHUYFPKJTAXLIBQUXGLRBQVZQYSMPEFAZYBHBAPNRUWCCFDILKUDSXZRSCREMHLCVSHLXYUBOJXVMZAZRJGAGVIIUTNDLJEGIDZUWIBQOZDQZDWKFMATTJKYOHVOTROPLXZLLNMNXYMQFSUEXEGWKHKFFOYDMSIKNOCHQAVONWXWSETPPCTOPVCRPWEGJIGCWUSRFBCDMRIJTU");
    msg.attr_type = 155U;
    msg.min.assign("TEVCJEZXXPYRDHDYUKZETYEFIBMYMBFFZYMOQSCEMWAGWKYSRKLSCCLGVNYOECADDQIWSWZHLWGHGFUVUKVRZMTKMRNAUXOJQPDPKMNKDHVGYSQCJFSZJIUAZLBNFTQUBNPL");
    msg.max.assign("MISCZGMBMJGAOFZFQLGSXHZPUTJEOTYCESYDMCVOPKUWVUPPFJENZWMFXHCHOVAHRSYCFPBMSWMOXJIQRPLCQJQFLPNEYUTBJIQNCAIAUHAOYTDZELSLKOQBVKUWRCEFYCSEARJCWXJSMZWDDIKXNZRJWGXGWWOURDRBJQOSETIOTQTLKYPVIGEVGLFQKNDGQLHNHPGPNGVVZXTZYVHABWDMRKFKNYRMUAXDUNIHT");

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
    msg.setTimeStamp(0.8485585594614252);
    msg.setSource(5057U);
    msg.setSourceEntity(163U);
    msg.setDestination(41282U);
    msg.setDestinationEntity(24U);
    msg.name.assign("GIECNDJDMLMJQKVZUMYTWRPQTMQIBHUVPYHKXOSJNCIGIUKEBSLASGFKRQWKHPHZRZA");
    msg.attr_type = 196U;
    msg.min.assign("FAVHPANSYFYPRUIDWZZIZQXIJUSWQHOGCPBXXTKS");
    msg.max.assign("POFZWDIYOTHHJKEBSQUOGLWUAUATCPRFFRQBHQPPWTUBPOFXCULAMGSCBVTAMVVVGKISBWHRWKDEHEDLMJLOHZPINJSIHKDJGDATRRIWDJJZZSUYVBRXQNIYGFXFHXYJVAXROYJCXQBCNKEGONUDLEWPKMSNKGOPQPKEEGFAUFUNKVQSTNMQFMVXXSBSRYZGWIHYZCVDALWAHZDENXSTOTMQWTBCQKILEJI");

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
    msg.setTimeStamp(0.45671373190897413);
    msg.setSource(12037U);
    msg.setSourceEntity(234U);
    msg.setDestination(16784U);
    msg.setDestinationEntity(160U);
    msg.name.assign("FBUMNDGIXLQUAJHAZEWMNMYDYSRRLJQBYVMUAZGTDSJIWJJWDXMNQRRBZIKSTTOHGYKQQIIWZUKNVWPJNHXFMVTULKNHQNEJDFZHQSUAMYTUEXNDSHVOIYFHXSDFIPHEIUEKUPECMRBWDLPJECAHTZWVXOSHSVKVAXYGLTCKATGGOOFUCCVGCVGPIACBFAL");
    msg.attr_type = 131U;
    msg.min.assign("BMZVGNOFZEDPMVGUKUTBOGIRQIHTBUAQGKYFDLNKRNMFTCSLYCANHIVIJBVBGPQLUSEMSWJDVPISBK");
    msg.max.assign("PKNUXZOUWNWZJVBZZYHJJWLBCGNXOAIWOGXEMVKFPHZSUOLHWQUPCWPRPOJPQYVJTCUSDJAIMVLGNYYQBOSAHTVVRMJCWSKHTZTTPSMDTESROEXPRWJIJBMSCYRUERFAEHQYXMVBCYRLIARCINONHPAFIKEADCIGTQHVXDVAUULLFTSFPZITVEDDAND");

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
    msg.setTimeStamp(0.8827928915348215);
    msg.setSource(28348U);
    msg.setSourceEntity(50U);
    msg.setDestination(51882U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("HOKBOYARQYUCCUVHHJZTQIBOZMOLUMFYDZNXANHERLRBOPXSERZZCNRJTOHQVWPOAYWSDYECPMWIDXJIPGYYWDUPRLVZGRTKKNKQKRLAUJKCLZBXPHRVFSFMQFXIFWZVWOTSQAJWTDBLWGEHXNWTGLYKIIFLNSFSABYUYUPBPIDGTXKIKPJVUSNNH");
    msg.predicate.assign("BNAPEYDQNZXWIZSLEARPUMQUFFMIDXCKQRHHRWLLINBECJPMOLXZZOVIEAMAJTDDVVTXGJKTGAXQGCZBGJNONVVBEQFYECJHQJBAQIBTSTZGKWOEDONUCQLBWOVKLUE");

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
    msg.setTimeStamp(0.006611877233768104);
    msg.setSource(3512U);
    msg.setSourceEntity(9U);
    msg.setDestination(9401U);
    msg.setDestinationEntity(138U);
    msg.timeline.assign("TOEHPLCRWCXYDQZFLHETHUJKCRBIKRBUEY");
    msg.predicate.assign("DYIGZOVEFKXNKHGSIZEVHNJXSBLQKHGPFYAXPEYZSGAERXKUOLPYBCANVJSKXRNXHLLBFFSPMKTDFWGSRINJCFNHLRCQPWYUZNRFVBVZBMEICTGWIDESXTAJTMPRWTTAODQHMPPXDKOLQNGRJKSMQBUCWYQMCOCNLIZUQUXVVRMPHJEWODITIKSRYOTQMOHNLOJTCMOMGWQGAQAEWAKJF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GJXKACEZVIDZSTJQXTVFWDPFKYSCZIESICFGXWQJHKVXNMJZLQADIBASPEMPQRFJJRKUOVBNVUHWPHPXNJPVKUKGTOEVXOTENBRCBOPZWAABGYLHGSMBBAJCLYN");
    tmp_msg_0.attr_type = 46U;
    tmp_msg_0.min.assign("XUNXRXSCDMWSGPNEQDXDQAJHOTIVXJBJXMXBLURHIAHOPVBNYA");
    tmp_msg_0.max.assign("DVFHIDDXNJDNXZGKLQVJFJVJOXZIVISUOBGIOTFOFBNIAHEHLBMQWUPSKRYDXJRVSYPMHVSVUPOSWGGPDZCPJGLYWKTHRURRZAXIIKRBQJOFGHKDMREIWQXLCGZWHBUTUTZZLZEHSBYLAALYUEYTXGMTJFGBWJUSLLCNUMCKXP");
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
    msg.setTimeStamp(0.2385706966482506);
    msg.setSource(17035U);
    msg.setSourceEntity(177U);
    msg.setDestination(8779U);
    msg.setDestinationEntity(143U);
    msg.timeline.assign("MGZRUKVRSDOISNCIAGAJZSCVJNTZGGBFJKZCVTRHUOQYLLGBSYIGPCXCOKMPRUWQZXSUOPENEAYVVHIAMSKRYVWCZLUONTVKHWBILBDOOMIXNYRHFJWDADLYQMXKPJBDIDQMZAEUAHVUGBTKPRJHOFPXFZAWWEECGQYNYFATJJHQNNDTEYLGHWSIHFKWPVLBLFUXDPTDXE");
    msg.predicate.assign("QDRKWWGGBRZBTWTVCAEIDJTVF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RVXULTDOEUSKRGNJFQYPRHVYTWIMWZYAFEAEGMFMHUBGOMZRXMLWPACNMYOTJLEFJIELZHFOPXJQYVODZVQKHJLYOUXIHSHTAACPWNXDWDOEDGWEIBKIINRPKLZXEWKMGPDJXDFPABVYCPQGEUIZBBFUUIDBOUMACNMBKPBKPVRUGXAVCXCYAZJQLONNHSXTUQFRCRGTWJSVLOKDFYTRQGIGZWCICSEVJQWAYTC");
    tmp_msg_0.attr_type = 190U;
    tmp_msg_0.min.assign("HILUYOUHGBPVTGBREKZNDZMCVOZLKUCRDPEJJMGNVAXXVMUHEWHECXAPIMAKOBCPFEMPMPZUVJLHJRZXVQWQPLULYWWFHONZTLAZWOVSFKGCOFSUQIQSLONMPKNRNBIASCFABWGRBVGSCNSHHKTSVEITQWMYYOLJEUEKFIDLYDSYLGUBXXT");
    tmp_msg_0.max.assign("FBQPVTGKZTOGDDRX");
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
    msg.setTimeStamp(0.6594941733690991);
    msg.setSource(60490U);
    msg.setSourceEntity(4U);
    msg.setDestination(44619U);
    msg.setDestinationEntity(47U);
    msg.reactor.assign("IMBRNZSWRFVDSMBLJEDEXZTFNCWJBBKEKVJQOXYVOOAWWYCIUQBTYMUNAVUVGVTHCXZPDXJFCIZLJGWYHLHRUHAKESOSMJXKMMARMGCXFDPONEHAUTXSJQVNPHVNJGEPBNUGZX");

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
    msg.setTimeStamp(0.23335471732648505);
    msg.setSource(51146U);
    msg.setSourceEntity(251U);
    msg.setDestination(18279U);
    msg.setDestinationEntity(169U);
    msg.reactor.assign("BOYUKBLGSOBHQKORC");

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
    msg.setTimeStamp(0.9646178688246968);
    msg.setSource(59128U);
    msg.setSourceEntity(54U);
    msg.setDestination(50207U);
    msg.setDestinationEntity(28U);
    msg.reactor.assign("MGNZBTKPXBMLKLQIPHEYDRWINIUICIGYEVPYSQAEFXTVGEMFVWUBWMZIUWHJQFYPHMPBLAUJDJVYOSDFJSQGVJAGSERCSKJRKWHACVBEMPOVWACRUZQZBMXLWSHXZZJHLRTDYTSESNJMCVDRXOXUQRITKKNYSNXEYGCQPOURPUAGKFDZKBCARLHWHWUQEHOZSTEL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JBETEKVBAQVWAGETDCMBJURWFWENTOVHCINSIMBZAXKRWINNYUUSHECLRMWPUXHFCKGJVIHLOZSVSXTLSOOLWKTDGQHGGVTMZPXCGJYXZCEDUYPDKKFYSLXRSZOQYZYMJLZCEQXLATLTBWDPDDJNAHHBQCXLPVHKRYFIMEGRPCRUMZKDQIUGDGOVHJFJSVIJWOACEOQZMRAQYRNFFYFNAKUMKXABNDHFBXNPOSWJIMQGBU");
    tmp_msg_0.predicate.assign("BNVJUSROGLVYUILBTUSQGVHLJSACJGRHXPOANRQRFIWWCKHGIOASTIQCMLAXDYAQR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EUQLNUBRORKIFHMKONVFQCBHMIDAFOLDZECXRBVGJWZROEKATNALBBCVPWRZISJUFXDHJOAAFLTJYULDTZXFTPKLNJIAYFSZYVNGXKVYVXPTYCSQWIMWGHKKGOHIYEQWMRVJSDTSQQIFJUSPXTGQDIEEMNIKJEWMOPHXANHWMENPICYGVPZDLCUYRPTPRSHGWSBBBRNEAQKHJULFONGAQMWJUUABPMLCH");
    tmp_tmp_msg_0_0.attr_type = 81U;
    tmp_tmp_msg_0_0.min.assign("PXNVBLWGJPYHZQFSHJUIBODFSNZSEDDHNAJKYHKSYXCRVGECMZHBRDMURRUOBNQHXKPZPLWPBIHVRXKKOXQGSDRPEBMTMTFECZLDUANOFCIFTDUAJWKGZ");
    tmp_tmp_msg_0_0.max.assign("KYPKWGVUBTKQHESXJXXHWAQYSOPELYBUSMQIEISMTRPDLPGEWOKAVRMQVZHDYCLIHGEFSWRQFBYDQCNSDOZTVEPJUTCFFIAPXNAMYNJNIEKGRUJENFTZXBILUKLJMKOZBGDCYJ");
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
    msg.setTimeStamp(0.006544173454672952);
    msg.setSource(27283U);
    msg.setSourceEntity(115U);
    msg.setDestination(33110U);
    msg.setDestinationEntity(98U);
    msg.topic.assign("EQUKITIBEXDZCJSCXUPHTOVSZTAEZXNABFWXVKXV");
    msg.data.assign("NBMXFSHCOGWKYSNGKWEZEDMTYTZGVCUWFFTCMLGSDPQVTDKSZJWICPARCLQNGSMNXKBYMIYJYTJGSTDORVJNQUFIAVUDQFBNMLEEIHALQWSHGLNMQUHMJZRVEXJWNHNBSUDPJAKURNJHSQROJBECOWUKWIHBXKKYYTELLRCFCPPGIULHVZPXDTDISBZYIIQPTROBYFMAIUWFHROVRJCFAWZUZLXXADPVOMVKVOXZZTPB");

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
    msg.setTimeStamp(0.30777079607085234);
    msg.setSource(40635U);
    msg.setSourceEntity(34U);
    msg.setDestination(7067U);
    msg.setDestinationEntity(251U);
    msg.topic.assign("WTJZBRYTVWEWZQHVEPXCGFAKNPUYTPIFRHSHWBNFAITMSDRIXYEVWFATNPISGUGEKBMQUJTRGXWGMACDMKJVQIRRMYHTQLDMDZFISCCQENRXIYWVSYQNTLPPADVSCKKDMSZLBOOWMMJQQSYCZJVLFFJEBEROZGIUQTVCBFCADYXTDAHVDVABIUKUUIQBUKLONXJZAHLPNXUKOXJUZOHJORNFEHCEXXYBH");
    msg.data.assign("KUSEQOVULRZWXJNFPDDLXYKPHQWNUHAGDMLGRPRAJYMGYSZMZQIHXCVTHCBZRPNNTCAWYOPMGTSIPFTNJNSWHOIRTQLUZGUJPFBXFWLAKEJJIBWFKOBMRCKUVAAGBCCEQFXYRNPZEIFRGIVVCSRDMHCWJYJGHDLYOFZHZNTCYLIUBWAQOEMTECWQWIRBXMTLPKKNDQEDFBAKXOGEPUZUSDGUDJOXALVJLTVYBBOTAXYQQSVSXZ");

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
    msg.setTimeStamp(0.9924505798217634);
    msg.setSource(22057U);
    msg.setSourceEntity(15U);
    msg.setDestination(45785U);
    msg.setDestinationEntity(11U);
    msg.topic.assign("GOXCZJNXKBGUMQHNMQAVXVTVSITBJGHJNAFORFBPEOORAIIMUNLROGPKLQAQCIBXIDSQSNJFIFJPBZSJKVQKHARLMOHBDTKFIYNKCJPPVAXUCFYRDLOVQDRAWXDALPJFGSXTUETDJZYWUHDCUSSJHUMOTZNLEZDXUWSPBTLEXG");
    msg.data.assign("FGIMUEXEFOEGDJOPLAAOLPBZHFS");

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
    msg.setTimeStamp(0.8111450670680319);
    msg.setSource(39860U);
    msg.setSourceEntity(135U);
    msg.setDestination(37215U);
    msg.setDestinationEntity(0U);
    msg.frameid = 184U;
    const signed char tmp_msg_0[] = {-71, 1, 47, 38, -95, -115, -48, -78, -112, -57, -40, -32, -125, 31, 21, -77, 80, -110, 14, 8, -87, 116, -122, 50, 72, -20, 73, 101, -62, -8, 108, 72, -18, -26, 1, 121, 4, 64, 2, -107, -127, 115, -41, 45, -65, 31, -72, 50, 78, -79, -49, 126, 30, 49, -39, 30, 102, 16, 101, -81, -84, 79, 79, 90, 85, -75, -106, -80, -87, 14, -90, -60, -39, 62, 18, -125, -35, -49, -25, -35, -83, 5, 105, -87, 111, 97, -5, -60, -56, -124, -97, 74, -1, 120, 68};
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
    msg.setTimeStamp(0.15060322415440042);
    msg.setSource(36776U);
    msg.setSourceEntity(67U);
    msg.setDestination(43274U);
    msg.setDestinationEntity(43U);
    msg.frameid = 212U;
    const signed char tmp_msg_0[] = {119, -84, 11, -14, -37, 18, 112, -86, -31, -69, 61, 36, -82, -57, 105, -29, 113, 118, -57, 123, 45, -64, 80, 113, 33, -97, 13, -46, -54, 74, -125, -48, 126, -88, 9, -73, -98, -9, 85, 9, -13, -117, -24, 104, 41, 57, 12, -9, -116, -98, -64, 15, -116, 56, 56, 70, -34, -56, -112, 79, -31, 73, 57, -89, -86, -125, -43, -82, 32, 83, 37, -120, 119, -111, 49, 49, 5, -34, -96, -48, 35, -76, 1, -70, 92, -87, -17, -74, -19, 49, 32, 24, 41, -48, 107, 111, -74, -86, -51, -67, 60, 46, -39, -60, 39, -103, -112, -27, -36, 59, 126, 30, -104, -101, 81, 4, 25, 13, 2, -84, 33, 93, -80, 92, 0, -86, 87, 54, 96, -41, 31, 120, -86, 118, 3, -107, -77, 70, 27, 42, -2, 73, -82, -68, 112, -56, 92, -96, -45, -4, -17, -80, 50, 50, -21, 41, -86, 99, 121, 125, -82, -96, 126, 42, 104, 59, 106, -100, -93, -116, -1, -100, -24, -117, -50, -126, -33, -34, -32, 117, -2, 56, -87, 86, -122, -56, 111, 4, -119, -64, 7, 108, 71, -29, 75, -42, -46, -33, 74, 0, 64, 76, 13, 80, -23, 44, 101, 18, -45};
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
    msg.setTimeStamp(0.2657867360046601);
    msg.setSource(64038U);
    msg.setSourceEntity(111U);
    msg.setDestination(48421U);
    msg.setDestinationEntity(20U);
    msg.frameid = 144U;
    const signed char tmp_msg_0[] = {28, 80, 16, 124, 69, -17, 15, 60, -27, -83, -118, -12, -41, -24, 14, 39, 98, 111, -62, 112};
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
    msg.setTimeStamp(0.5724093582445682);
    msg.setSource(52026U);
    msg.setSourceEntity(193U);
    msg.setDestination(18635U);
    msg.setDestinationEntity(30U);
    msg.fps = 133U;
    msg.quality = 206U;
    msg.reps = 153U;
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
    msg.setTimeStamp(0.30591843190978685);
    msg.setSource(14257U);
    msg.setSourceEntity(116U);
    msg.setDestination(48864U);
    msg.setDestinationEntity(176U);
    msg.fps = 77U;
    msg.quality = 252U;
    msg.reps = 156U;
    msg.tsize = 53U;

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
    msg.setTimeStamp(0.8807941410704798);
    msg.setSource(22327U);
    msg.setSourceEntity(56U);
    msg.setDestination(33744U);
    msg.setDestinationEntity(11U);
    msg.fps = 155U;
    msg.quality = 143U;
    msg.reps = 75U;
    msg.tsize = 74U;

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
    msg.setTimeStamp(0.9730602474053592);
    msg.setSource(35895U);
    msg.setSourceEntity(171U);
    msg.setDestination(7530U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.00040864002640839114;
    msg.lon = 0.41793539533011914;
    msg.depth = 74U;
    msg.speed = 0.15838913189929338;
    msg.psi = 0.22093326180317285;

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
    msg.setTimeStamp(0.5356725889836191);
    msg.setSource(48861U);
    msg.setSourceEntity(60U);
    msg.setDestination(30123U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.9798745600027408;
    msg.lon = 0.9156606488359981;
    msg.depth = 127U;
    msg.speed = 0.5436331151920987;
    msg.psi = 0.3580448721440458;

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
    msg.setTimeStamp(0.37012214186637116);
    msg.setSource(56105U);
    msg.setSourceEntity(24U);
    msg.setDestination(37825U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.569805430946358;
    msg.lon = 0.6107769241469602;
    msg.depth = 193U;
    msg.speed = 0.6144153681302491;
    msg.psi = 0.2618420958275345;

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
    msg.setTimeStamp(0.018316082522819466);
    msg.setSource(57056U);
    msg.setSourceEntity(84U);
    msg.setDestination(15292U);
    msg.setDestinationEntity(190U);
    msg.label.assign("LGZQPBWNZGOKXMWWUPALMBRONUXFQZAHTYYMPMUFZKKGYXNEDJGTWQENMQ");
    msg.lat = 0.2346986508644695;
    msg.lon = 0.2361278019044224;
    msg.z = 0.99932820939475;
    msg.z_units = 157U;
    msg.cog = 0.16395563096710009;
    msg.sog = 0.5738569704662615;

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
    msg.setTimeStamp(0.9628081657778942);
    msg.setSource(8589U);
    msg.setSourceEntity(149U);
    msg.setDestination(42803U);
    msg.setDestinationEntity(120U);
    msg.label.assign("DSXWDSKCIPBODTFSFSZZUIQJGLJCYMBUTKFGMSZBDPMBYRJNGAFIXIVYDMMXZVTHYGQMUJQYGQFNEPWMKESBZGDHEWHPFNHOUNDAILJFXNCZRCKRJYJCGKZXNTXMZUANQVIZXFTRVHLPSPLQVEEXLNMOTFYKGTUSEOMOCUAWWXWXBRJGEGWVHRLKKIQTARWOSHAJAYVPTBKSIVBCOZPHNCLRUPETBOHDCQVHYEQIRNOKOQFA");
    msg.lat = 0.15091112843177978;
    msg.lon = 0.2880317277138583;
    msg.z = 0.083474165285499;
    msg.z_units = 115U;
    msg.cog = 0.059568534033673015;
    msg.sog = 0.8030966816765404;

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
    msg.setTimeStamp(0.18891212864197104);
    msg.setSource(42843U);
    msg.setSourceEntity(9U);
    msg.setDestination(65300U);
    msg.setDestinationEntity(71U);
    msg.label.assign("DABXWUJTMNHEWGFRIRVLVQTJFBEXJOBOEBZGBXQUSXFNOCHCHQYOAAVREXINWWFIDZSHVUDFXLECTMLWSKYKQEXANWLRVXVPILYLMIYWNZOYPWVUXMZBUSTMGLSOYRDAFDJDZNZPHPRMCTQUOTTFNEFZIGTAGBNKFVOHTOYARKPGJDIGXNGUPJHMHUVCJWLAKQVZDTE");
    msg.lat = 0.09027987176744112;
    msg.lon = 0.3253767269887733;
    msg.z = 0.9672673757974275;
    msg.z_units = 231U;
    msg.cog = 0.45715749790302307;
    msg.sog = 0.7047616243059549;

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
    msg.setTimeStamp(0.6531244437675197);
    msg.setSource(48635U);
    msg.setSourceEntity(15U);
    msg.setDestination(38845U);
    msg.setDestinationEntity(73U);
    msg.name.assign("OZVMMEYILFQUAPACYRQETKZEFDIODSVNPJKXNHSJBCFBRYSFGVQHHZMFPKBVYTZRJNFMRIGSNIRXCEIWFZBLZQRUBNPMRGCHXNOAGHCDKWYVGNHSHKBVMKZLTUCOFLRUOKTLUCNGDFTZIWXOMQGSDZVQVXASESXCXPKOULGSWQHIBADIETAJYTMZPUIDLSWYYVWMJWONOKEXRAIAUDPBTJPYPJMQEPHEAQLLTDCCJWJXEGQXVAYNRU");
    msg.value.assign("TGZHCEFRTXAPTRVJYFUEXMNEDUWSKUOKWNMXUHOPEIYCZMWFBNQM");

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
    msg.setTimeStamp(0.7012789338666909);
    msg.setSource(9464U);
    msg.setSourceEntity(84U);
    msg.setDestination(15392U);
    msg.setDestinationEntity(213U);
    msg.name.assign("PNPGKGSCNFGLHXJJHLBAUZERBWSNQKXUZHNTBCOZGKEWKPFXYUHDQGQAUYMMFVZGIQJSUXPSRJAC");
    msg.value.assign("DSVYFFFLYGMCAEWSGRGEQPDBWDORPHSEAUPXPNDMWLICJCCXANKQPTQBDJIHTILYYFWKJZHJWAHQMQKCUTZKGYMYRGRMBJAGGXNUYVFNHIFDWNDMMVXGUJICLIRULTQJHBTZBJBPKEOVCK");

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
    msg.setTimeStamp(0.2241751529373328);
    msg.setSource(47614U);
    msg.setSourceEntity(6U);
    msg.setDestination(61127U);
    msg.setDestinationEntity(245U);
    msg.name.assign("TFLFJUAXPKEYASWVTJKWRUMJQHNAUOXBANALBJMMRSCAMWSNGQQPKRDWBJIIQSQNMHEVTXVRLDSFKSUGDYICRUWGZEUOPMZCHVRXHNEZFXFB");
    msg.value.assign("XTXAWLHTPYKDGNLSUMCYWN");

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
    msg.setTimeStamp(0.0735055507169603);
    msg.setSource(28781U);
    msg.setSourceEntity(160U);
    msg.setDestination(25806U);
    msg.setDestinationEntity(39U);
    msg.name.assign("RUSBKPCNRNVZSXLYMRUNCGJRWOFBLHTUSL");

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
    msg.setTimeStamp(0.6083480518238291);
    msg.setSource(64407U);
    msg.setSourceEntity(94U);
    msg.setDestination(3958U);
    msg.setDestinationEntity(58U);
    msg.name.assign("ZTGLIYJUWXKGPYLPLWOOUGIBOLPSWIWYQXRLQSTHEWQTADFAMVVIPXFTINQSNDBFBIMYCNTLRETNPREUDTZAQFANKHRICMOEEOQAAXXLWOZJBBASMXPJPLTYQJSCZYMYQQSFMQVIMDVSADKSLFOOCGJNCNBNEKNVYSTCORULKXPKC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LJWQQJMVUGWJGSKZSXCOVLPXYGWKKZDTQWBGJTPRAFJYRGIKBFFQGTIJARVRYISEIOBIJHKOXXWPNTOBGNWMQXGCWLNISZUMISNDFLTVQETASDVUNARCETVNBUMMLPUHWQUHLJXZYCRPKQEHOBNVLQYOHDRUPWCDUMHZZGUAYRFCKFMWAHFQMGDHTOIMLPBSEDXPYXMRKTJUTYSZIKXFYACPLN");
    tmp_msg_0.value.assign("MYIOFLBPEKSMAOKPTGTBMDOSPASCCKAUVXAYKPWBGQVUTTHVOJLSBYOZFRVCDCFGBZUVKBJXWYMLJZOZPNSBEEMHNYFRPWHGNHDDKXGVYQLRUQPHDFRTUBXXHAOIURSTWEGACIIKJFXKJHDMCHUTQTSOIUKOVNJNENEPYBFWFXRHLWIIJLMA");
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
    msg.setTimeStamp(0.021760969615668757);
    msg.setSource(4879U);
    msg.setSourceEntity(206U);
    msg.setDestination(48111U);
    msg.setDestinationEntity(190U);
    msg.name.assign("XSFWTRCNTKDOYHKZHKDYAIECCEJQUXNBTIYLIJFNFVGNQURUFDORGHGHCEMAOHOZUYJXAREOYWBUDRDS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NLQYIGZMDPSHWQZFDPHPFNDQSIDYUMBQHNJRPOEMJBLJBPJLKIRGLFJHJCRUPJUKXEELBVCPAWO");
    tmp_msg_0.value.assign("AOSROFNUWMHLWPPMNVWIPAVWPNPIVFSHDLTMNCVUXJYLSDAAERUKRFAMWGEFXF");
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
    msg.setTimeStamp(0.5583999574311197);
    msg.setSource(49580U);
    msg.setSourceEntity(43U);
    msg.setDestination(14341U);
    msg.setDestinationEntity(179U);
    msg.name.assign("RZNSTVRKZGISVCJMXJXXNTYCBJOHIHITQOOAAUFCGRKILDGEEGQXQEIJXTZKTXCRQPHPNEKMUAZBOZDGJPBCYCXQLUKCJHFCMMUCSVLVARRFADMILDKFLOOBWPDHRRJUGTVDGQLVWSLWJEYVHKMGPYSLDZWMVMNAEINPESQNWQOHAYUZYMQCXGUA");
    msg.visibility.assign("DXIRRZOGXIIPEYTINDBMTVWQCUQMGBWCWSUBFDXBJLEYXPRDTUFYGUEKMGHLYGPSPINYQSEMKSRQDPSKPCIFAUFFCLHDMHTORKTRISLWJUMVQQOCHWQLKJHZTXVEPAGEHSJGLDMVVNAZDKGGQRWMRGZSCYYJBCWSZCLEARDZNBOAYKBUOXKASWZELMXBJAVXHUICDUOFWFIHOLVZMJXLNWRNHNIEUJ");
    msg.scope.assign("FMCPACOWCHJUCIYLXUIUYLTQKGQPBWLNHZFUAQHTOXVOHTMDEXLZLHYKVCNKHOPVMDM");

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
    msg.setTimeStamp(0.9287977665494761);
    msg.setSource(43217U);
    msg.setSourceEntity(52U);
    msg.setDestination(9267U);
    msg.setDestinationEntity(28U);
    msg.name.assign("WOTSTHLCFNMVAXXHUVFTOQUYLBDUMIVRIRYBEDJYCRZOLFCTDQVFRPMPZUWXSYZCYJKTTINNKEKMMUHMINIOWVATQLOIIXBYVZLJXVDBDWZCPAWJUZCXXKZNAWUPFPMBZMFESJROFETSAHQXKEAGDZFYQGIHTYRBVDMXUDERBDGAVNGQUCQSEPBPVFJYWXCSOLCQNJBOJJLRGUHKPMKFEWAGEOLSQWGNSHWADKBIINGGSJLNPHHOY");
    msg.visibility.assign("IOBEBQZWLXBVUZQYDASAGRWUMZBGKUFQGGBEKNFFPUQGTRBATUJXKVWEWDNRTZSTBOLNPGLGDENXJVRUYRSJBTEHSMJQUNHINXELLKDOPMIEATAGERVKXJNFICBSIWSHOXJTMZUIXODAGYPMPFRQQLWMKWNCCFWIIDAWRHBDKOMCHDHSHHYQYSCLMXMVNQOLSKNTVFQYJWLUOYCRGKARYPIPCCAYVJZXC");
    msg.scope.assign("ETNGOGIVRQAJJDGWYXFAKRVRFMTLZADLQIFPAWYDMBQBLMSPCUATLFZHCYCNMBOXXINLHRNSQMHBYLAFNVXKBSNKTKKXJEWZFAXQFAPCKRBDEJKZUREBHSZSCEODYOALUKZRWGMQTNKPZJZVRDIJXDTIOTJJSJCFNHCEUPLXBKYQOM");

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
    msg.setTimeStamp(0.779026040294584);
    msg.setSource(24197U);
    msg.setSourceEntity(61U);
    msg.setDestination(4470U);
    msg.setDestinationEntity(130U);
    msg.name.assign("PBQOPNOUBUMHLMFRTATSVREVERHTGLGZKGXRJSRFJWCCPEZHCIZWPDMRSYEXOOYJQHQCEKKLSVFMQPHNFIVTYKUASLCJGZYOWBUOALMPDVYUOZKAIOVOFDCIOGFAXEQUWGMEBYMQIKHBIZACKTBXYTAMHSTMDXIVGFNSAJCJNAIWTHNNXBRWDJWYYRSPXKLUNVKMHPAQP");
    msg.visibility.assign("DJQVMXIKGYFTXXHFOI");
    msg.scope.assign("AXDMOUAHBTUGXCOXELVJNGYLPVKHYOLNAVOXKEIWENNNGMEFPJKFNIRXCEGZZDSLVTLRTMZBAWNMUVDOFBFZEDJGGQUVAMVNXIMBQHGBAZMFRDJYRWADCOQFSHSOOYMPTFKATCUCYB");

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
    msg.setTimeStamp(0.9840657209579211);
    msg.setSource(52188U);
    msg.setSourceEntity(118U);
    msg.setDestination(12282U);
    msg.setDestinationEntity(61U);
    msg.name.assign("CEXZLPFYHYPAQSZUAGJELHXHGDTWXEVCWYFSNPUOOXWFEZVVTVRMPEYYBREFNAUJHWZDGFKRIDGNVMHATBQZUYKDBVMLVTSFIPGEXZWISSHOHWEIRIDAXLUMRFBOTKDCQOGVGHWQCQGSBJJGBQJCOORXFIPGWJVSPZIUJMMOKKBCUIJAPNEMLBLWCXLJRBIWZPQLSLCACMKHSKTCTKKR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JADUSQKFSKRXSVHSMCTJAJTWUEUVENLAFRTIUK");
    tmp_msg_0.value.assign("COLCGYDJAKRPZVQYCVSFZQBURIZHLBSNCUFXXQMYXZQAOTPQDIUMRQBSEMJ");
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
    msg.setTimeStamp(0.6961999575506359);
    msg.setSource(36709U);
    msg.setSourceEntity(128U);
    msg.setDestination(35115U);
    msg.setDestinationEntity(67U);
    msg.name.assign("TMUYXTQDUYPZSZHFBOJIRPERYAYIUZAZKDRNDJTRYPMJJCCKEPQLCNBQTPKTISLWV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OALVCWCVNRQDFSMHCMUNLQBUJERVNWEVGKDDXIZ");
    tmp_msg_0.value.assign("SLWSXSHRUQTDKCTDOPELUHATEOQCZSRQITHBNZDEADBYHQGMMCXHJZZUYYKNVWXLJXFWIYSRDDDLVTEIPKSCVSGVYNGMBWWGWLOOPTBIVAJBIAALMUVIGEPFHFXZLJKYFCVCUZCUAWPVZOCYKGZYQFRLMBBMAXLKGETTUJQXQMNURJIO");
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
    msg.setTimeStamp(0.49864517499273175);
    msg.setSource(7418U);
    msg.setSourceEntity(112U);
    msg.setDestination(48263U);
    msg.setDestinationEntity(237U);
    msg.name.assign("AGLKVQXUMABYOZWLGLBSSJICJRFZDUBIWNCGKUSKGEQKSBKQIKLTMUBMEFXRFHJFATWEDUREVLODSKEHIILWQPDTQTYUHYKZYOPNTCJWSYAXDAQCAIYWWPAJVXEPITGEQNBUIGOGTXUXDNWMZDAVCFSCOHDLVYTPACROJVPZZHCEMOZP");

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
    msg.setTimeStamp(0.6442357373178964);
    msg.setSource(51434U);
    msg.setSourceEntity(76U);
    msg.setDestination(55954U);
    msg.setDestinationEntity(83U);
    msg.name.assign("NOKMUSUSGXWAJQGFVWAQPIQ");

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
    msg.setTimeStamp(0.6221069752694246);
    msg.setSource(29309U);
    msg.setSourceEntity(168U);
    msg.setDestination(14555U);
    msg.setDestinationEntity(120U);
    msg.name.assign("LFBFEFTWYUDUOIPVJXENCLCSCHZRKYBKDIPWWXNVVWLVNTHOWMUMUDVDLIRZQMABPFCGGXSXALBEZBRDSPRJXZARUJTKJIJWIJSNFEEKAHYJPFHPNUEQCMAUGAFXXHRNMZJKBMUP");

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
    msg.setTimeStamp(0.09102278205910141);
    msg.setSource(33921U);
    msg.setSourceEntity(204U);
    msg.setDestination(20890U);
    msg.setDestinationEntity(1U);
    msg.name.assign("WFGTDNTOVCWAIDZSZOOSUYRDQPCCKTMNAFPOYPPSBIFEBCKPJYCSNPWPNHTEDZLMKXJNUVYLRVJPKYDJRFQAAMCIEXNUGWOQUWXVTGDCILHIKNLEUOBYNMWYUMZRZXGKCGMMUHFWRHYUTSALIAVHXHHPFWBIDOXETXVUMBAOZAEUGPVXDEQWRZJMEAWKEBSSYGI");

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
    msg.setTimeStamp(0.7492802630850653);
    msg.setSource(56046U);
    msg.setSourceEntity(221U);
    msg.setDestination(24757U);
    msg.setDestinationEntity(47U);
    msg.timeout = 561606697U;

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
    msg.setTimeStamp(0.9333472428322246);
    msg.setSource(12864U);
    msg.setSourceEntity(125U);
    msg.setDestination(9684U);
    msg.setDestinationEntity(231U);
    msg.timeout = 3471156960U;

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
    msg.setTimeStamp(0.24258541573549608);
    msg.setSource(33232U);
    msg.setSourceEntity(177U);
    msg.setDestination(10572U);
    msg.setDestinationEntity(100U);
    msg.timeout = 163399475U;

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
    msg.setTimeStamp(0.3340127623868556);
    msg.setSource(49763U);
    msg.setSourceEntity(69U);
    msg.setDestination(19388U);
    msg.setDestinationEntity(128U);
    msg.sessid = 3662711364U;

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
    msg.setTimeStamp(0.05727558171005698);
    msg.setSource(46375U);
    msg.setSourceEntity(71U);
    msg.setDestination(39990U);
    msg.setDestinationEntity(138U);
    msg.sessid = 685223068U;

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
    msg.setTimeStamp(0.9682541466832831);
    msg.setSource(53340U);
    msg.setSourceEntity(157U);
    msg.setDestination(58597U);
    msg.setDestinationEntity(43U);
    msg.sessid = 730306099U;

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
    msg.setTimeStamp(0.147892277703905);
    msg.setSource(36381U);
    msg.setSourceEntity(166U);
    msg.setDestination(8659U);
    msg.setDestinationEntity(184U);
    msg.sessid = 2437809436U;
    msg.messages.assign("PUKMXULMXLKDDPFJQTVFUNLSROTOZHJAWLSYQMTRIUJZBGFJNCATLKFHOZZNVLBEUAGERMCQPWCLIXNNEHGFRZSTMQZUYKWDIWQKIDC");

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
    msg.setTimeStamp(0.2136699784551802);
    msg.setSource(19612U);
    msg.setSourceEntity(114U);
    msg.setDestination(63624U);
    msg.setDestinationEntity(103U);
    msg.sessid = 3231646616U;
    msg.messages.assign("QLREEIPVJGCIVHHZFNWJFPKRKSKKZRTCOTQDKMUKGOWNZJUXLPEHTCZQOWVRUIMPDIYMYCHXQSQTCFRJGSWRBPBSRIOKXNAANBBHJLEUXOQUIZJMFKYVJYGLIOFOJFNPXBEVONEPGSVYBRPCENJQBAIDNMXDQHHHHBMDEQUFZDJSDYWFIOMSGKWZSTCCVELYAFLIMLDXZYRVQLFUSGCND");

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
    msg.setTimeStamp(0.6996273018832656);
    msg.setSource(28361U);
    msg.setSourceEntity(38U);
    msg.setDestination(49265U);
    msg.setDestinationEntity(87U);
    msg.sessid = 1052222449U;
    msg.messages.assign("PSQKMFWEEDQPFHWBJMLKWLHIYBVXCGMGBRKYEFPDSXJLFZSQZKPHDISALBMRXSLXFKPOCUIIOIJPMAUNUSDUGJRFSJWTHMUXTUINWVQWYXBMNPECNTRQYREQORTJKBFOWPKKYGIFLGYVYATUAIWYKVDXJLVZSKDGCYZZOOEIZZRWCVQOOBOADPHDNLHP");

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
    msg.setTimeStamp(0.819594947733504);
    msg.setSource(49206U);
    msg.setSourceEntity(170U);
    msg.setDestination(10792U);
    msg.setDestinationEntity(63U);
    msg.sessid = 2779455086U;

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
    msg.setTimeStamp(0.42597159458569955);
    msg.setSource(61305U);
    msg.setSourceEntity(148U);
    msg.setDestination(62705U);
    msg.setDestinationEntity(217U);
    msg.sessid = 4031042375U;

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
    msg.setTimeStamp(0.6600527722390744);
    msg.setSource(48284U);
    msg.setSourceEntity(246U);
    msg.setDestination(17975U);
    msg.setDestinationEntity(185U);
    msg.sessid = 2788482655U;

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
    msg.setTimeStamp(0.16212148619740985);
    msg.setSource(30506U);
    msg.setSourceEntity(152U);
    msg.setDestination(13800U);
    msg.setDestinationEntity(211U);
    msg.sessid = 2402277979U;
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
    msg.setTimeStamp(0.34605939620012305);
    msg.setSource(64165U);
    msg.setSourceEntity(229U);
    msg.setDestination(39580U);
    msg.setDestinationEntity(248U);
    msg.sessid = 3567333342U;
    msg.status = 198U;

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
    msg.setTimeStamp(0.8408918919945874);
    msg.setSource(55603U);
    msg.setSourceEntity(63U);
    msg.setDestination(24962U);
    msg.setDestinationEntity(175U);
    msg.sessid = 2147633962U;
    msg.status = 57U;

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
    msg.setTimeStamp(0.9732423372833432);
    msg.setSource(55871U);
    msg.setSourceEntity(17U);
    msg.setDestination(7009U);
    msg.setDestinationEntity(115U);
    msg.name.assign("LYOTVTMYFDPDFIIOLBXDZYBOIIUXPKBTXJDMBYQRCPMNZT");

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
    msg.setTimeStamp(0.09005529605541862);
    msg.setSource(12540U);
    msg.setSourceEntity(78U);
    msg.setDestination(17036U);
    msg.setDestinationEntity(26U);
    msg.name.assign("TWJKNAAFRIBMNUVUQBJWSFUBFUVFRSZLPXVXZHPFBPEYDEMSSCODSCBPILFYXEHCAAWBIRHPJLQTDQNYDCCLAJIAOTGRBJQMGOZWWKXUQYRWTUAWYVODIPWBQQGYBKFERKZEJHTDOEMOMXMDJTVNXGKUGXXCKSNLNZOHSFMPFLSQRKHYDOGKGTGQIJGPYLWVZJIZMCGNSILXAIVKLEZATQTPHSWYZCACKHHXPUZR");

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
    msg.setTimeStamp(0.2645059043531769);
    msg.setSource(46678U);
    msg.setSourceEntity(37U);
    msg.setDestination(10156U);
    msg.setDestinationEntity(67U);
    msg.name.assign("SKRXHOEWUIMWAPAGFQOVNIEKTPQCQMQNDSUYQHVBQGBPYMCVDCOHIBOZPLVMGPLGTXCTMIMSONCUIWAFTZWAKFDKDJAMNBAERIIOABHQJRUTYENEJKFODFRAJBEGFHLGWHNDRONYGRJKCUFSNCK");

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
    msg.setTimeStamp(0.0009418207729522399);
    msg.setSource(64923U);
    msg.setSourceEntity(230U);
    msg.setDestination(47476U);
    msg.setDestinationEntity(246U);
    msg.name.assign("BNFSRXZPRDVVJWNJXOFYDYNDUHNTTLRYGSBHAKJJRHPUIHXTCGBCMNEVB");

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
    msg.setTimeStamp(0.06954684904281394);
    msg.setSource(51407U);
    msg.setSourceEntity(246U);
    msg.setDestination(37098U);
    msg.setDestinationEntity(147U);
    msg.name.assign("WBFABHEKAYBTXVPRQWUSKXUEEJAVFITZEGOLFUHYJLAPFIFZUESWMAR");

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
    msg.setTimeStamp(0.5342663941726943);
    msg.setSource(62321U);
    msg.setSourceEntity(168U);
    msg.setDestination(42613U);
    msg.setDestinationEntity(123U);
    msg.name.assign("QYUCHSZSBXXVPKBSUKEJMWLPQLOFSNFLOZLVMDIKNUWWXRBEIYPZLKKAQAMVBJUAITNFLMZHXBBIFACICCYZIWEGJRWKWPOVZNMZIQMBTRDFMAMJCYDNUDCBRLGAHOJRGUBOSGUP");

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
    msg.setTimeStamp(0.40597009594452504);
    msg.setSource(36469U);
    msg.setSourceEntity(246U);
    msg.setDestination(44966U);
    msg.setDestinationEntity(245U);
    msg.type = 137U;
    msg.error.assign("HSEUTGFERFDOYZNHLAVOONHMOPUHTEOWZNYDIJDFGWKQVYXOSAINPXYKLQPPDUQRNFCWDHUTNRTDMQSPEUXVLOIBCBWXXFC");

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
    msg.setTimeStamp(0.021127329759922042);
    msg.setSource(42459U);
    msg.setSourceEntity(37U);
    msg.setDestination(2026U);
    msg.setDestinationEntity(195U);
    msg.type = 66U;
    msg.error.assign("MBLJJCUKUNENUPFGKTOGQXIYRQMDDGZYANEICXHGRCNJTEGTASBBDMPUNRBBBWTUVKUFLGLXTBFCOPVNJILMXJVXDYCSIHVOTVZJMAPMITWQXKMDHYJZUSOTOYWRMAEKRKIERRKXFARUKVVNCFADSJKG");

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
    msg.setTimeStamp(0.6040790686764765);
    msg.setSource(51193U);
    msg.setSourceEntity(89U);
    msg.setDestination(306U);
    msg.setDestinationEntity(168U);
    msg.type = 52U;
    msg.error.assign("EEOOEGLSLGHKAGXNYYHPNLAQQTVPIQCBYIYKSCGDFWUNBHWYWAKBZOJDXVQQVRYCPIRKAJDWUMAWUMSMEXUKTRAICXQAVQVHCZNWDLVPVEDFMCCBGFKGIWUSNLYZLRIILEOMBXABPRTDFWHHRBCLITBLUNOJUFUZSOZHQJOHRNSFOIFASREYQGZJXMZJZPTBEBYSJZPKKHDTTPMLMWGXIQDXNSGKTFTCDXVPJVUHMGUJS");

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
    msg.setTimeStamp(0.9793918352324106);
    msg.setSource(7169U);
    msg.setSourceEntity(20U);
    msg.setDestination(22049U);
    msg.setDestinationEntity(211U);
    msg.seq = 61681U;
    msg.sys_dst.assign("EKPUVFUBSWZCLMYYGQMOTFRHVHCSKBLKXHLHMVFVWLZIGFLSQPPRRUKWIMVCEQUILCPCIHNGVZKOLMSYUFDDMNNKQPVKRNDADOGBDOCVBWWWJAWRPEOI");
    msg.flags = 162U;
    const signed char tmp_msg_0[] = {46, -6, 37, 46, -80, 7, 74, 54, 67, -124, 31, 118, 25, -20, 94, -57, -106, 52, 5, 73, 91, -55, -17, 42, -62, -98, 4, 42, -117, -118, -70, 82, -98, 89, -7, -123, 98, -59, 118, -38, -103, -5, -75, -115, -56, 5, 32, 14, -84, 124, -72, 1, -10, -52, 77, 116, -113, 43, -21, -10, -3, 101, 79, 36, -28, 116, -100, 23, -1, -89, -82, 16, 63, -89, 100, -72, 100, -43, -21, -51, -61, 72, -22, 58, -29, 19, -72, 50, -50, -21, 23, 35, -66, -127, -95, 83, 22, -41, -32, 53, 108, -108, 33, -48, -86, -55, -41, 118, 110, -68, -10, 53, 34, -98, 102, 92, -120, 102, -64, 19, -116, 23, 112, -8, 91, 37, -12, -4, -106, -72, 28, 123, -42, -108, -6, 99, 42, -33, -116, 53, 85, -36, -107, 24, -35, -56, -4, 87, 52, 47, 77, 56, 113, -119, 46, 76, -10, 18, -6, -55, 37, -60, -104, -28, -83, -6, -58, 29, -5, -21, 53, -123, -22, 62, -118, -72, -45, 36, -92, -73, 117, -76, -28, -16, -114, -23, 105, 41, 69, -30, 104, -35, -54, 81, 53, 80, 16, -57, -62, -81, -57, 20, 82, 58, 117, 57, 35, -29, 81, -84, -72, 96, -6, 56, -18, 57, -85, 63, 23, 56, -67, 93, -81, -118, 79, 79, 0, 41, -42, 37, 62, 114, -62, 112};
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
    msg.setTimeStamp(0.967155100784642);
    msg.setSource(29357U);
    msg.setSourceEntity(38U);
    msg.setDestination(21194U);
    msg.setDestinationEntity(116U);
    msg.seq = 3762U;
    msg.sys_dst.assign("SNGWCBXZUBCEDIYJLPACUARFQNFTFYCRAJEDIMHFHZHLIQMYLFNFIVUEZMZSLNIZEKBXUDRYCJFQVKETFEAPDQLNAWMMLPWAVPMMVHQVUGAUCQEEOXLWDJUXGNKVSHSXRTJYWAKPGOJRSSVZEOBUIZKRGMOYCXOYEKIDOTNTPKSTNZOCJDTKTJHXIYXRBDOUSLSWMBYJTXYVUGGZOCCHZALRGQKVFHGRNHBBVQFPDSBWXPBWJMIPLD");
    msg.flags = 216U;
    const signed char tmp_msg_0[] = {95, 12, -92, -90, 52, -67, 120, 54, -64, -120, 30, 88, -117, 79, 36, -43, -67, -14, 55, -20, 18, 63, 14, -81, -120, -97, 21, 99, -34, -88, 62, -26, 27, 82, 41, 9, -16, 126, 126, -33, 12, 86, 34, 3, -47, -27, 53, -28, 49, -114, 87, -11, 64, 92, 65, 15, -123, -69, 82, 52, -34, 110, -25, 91, 61, -47, 94, -68, -37, 59, -36, 115, 72, 98, -83, 78, 66, 71, -47, -116, -101, -87, -87, -82, 14, -117, 6, -74, 70, -20, 40, 5, 38, -59, 84, -68, -101, -8, -80, 101, 36, -50, 56, -100, 41, -15, -15, 25, 90, 125, 35, 8, 105, 65, 117, -34, 59, -4, -33, -63, -100, 113, 102, 63, -115, 12, -35, 43, 24, 39, 52, -87, -125, 107, 88, 72, 72, -1, 18, -46, -27, 18, 41, 102, -112, -126, -26, -85, -76, 9, -23, -86, 13, 94, -88, 117, -1, -75, 9, 64, 56, 105, 62, 7, 3, -113, 85, 112, 86, -2, -34, -23, 102, -34, 126, 0, -93, 112, -22, -37, 85, 94, 7, 45, -22, -76, 112, 46, 33, 68, 105, -73, -83, -123, -79, -3, -93, 116, -49, 87, 59, -52, -66, -86, 71, -64, -48, -111, 94, -84, -96, 23, 84, 98, 3, 18, 61, -55, -22, -52, 61, -2, -10, -26, 97, 28, 82, 72, -106, -34, -23, -46, -59, -126, 57, -32, -78, -101, -35, 2, 117, -110, -96, -18, 57, -49};
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
    msg.setTimeStamp(0.6109957836878667);
    msg.setSource(33778U);
    msg.setSourceEntity(37U);
    msg.setDestination(14640U);
    msg.setDestinationEntity(147U);
    msg.seq = 53733U;
    msg.sys_dst.assign("AYCMRHQUYDMAUVIYCLTQWSZJVSWXPYSRLMVCRZFLOHLZNPPBDLWWCZANXETDSDNIJUUOCAIHFEEBGCXCFSTTFYJQPEWZMJULKUWWA");
    msg.flags = 87U;
    const signed char tmp_msg_0[] = {-48, -80, 79, -35, 33, -65, 62, -44, -57, -10, -92, 115, -83, 96, -53, -29, -46, 72, -65, 23, 50, -30, 52, -94, -118, -63, 94, -98, -13, 37, -109, 82, 45, 48, 81, 54, 54, 52, -73, -29, -122, -57, 12, -27, 105, 60, -102, -128, 90, -103, -118, -108, 17, -56, 75, 107, 126, 11, -123, -98, 59, 74, -22, -111, 100, -19, -42, 120, 36, -111, 31, -14, 80, 48, 61, 14, -119, -75, 4, 22, -15, 10, -119, 92, -97, 109, -105, 9, 116, 111, 82, 16, 125, 59, -57, 121, 118, 57, -31, -14, 23, 11, -14, 60, -24, -107, -126, 55, -117, 22, -94, 38, -7, -101, -10, -127, 117, 91, 42, -14, 27, -92, 126, -69, 60, 89, -26, -39, 37, 1, 98, 95, -95, 101, 14, 14, 42, 111, 80, -75, -53, -128, 70, 22, -58, 82, -77, 81, -74, -72, 2, -33, -101, -14, 111, -86, 15, -120, -111, -24, -4, 124, -26, -52, -21, 42, 104, -63, 102, -98, 105, 104, 119, 88, -113, 30, -111, -35, 109, 42, 104, -8, 30, -11, 53, -17, -91, -4, -104, 80, -34, 75, -16, -126, -104, 19, -17, -7, 15, 66, 53, -17, -44, 112, 126, -17, 42, -71, 111, 95, -19, 18, -55, -20, -57, -53, -83, 1, -124, -76, -40, -35, 126, 51, -54, 90, -76, -91, 81, 61, -96, 54, -127, 95, 108, 96, -52, -7, -112, 55, -6, -19, -121, 7, -38, -93, -13, -61, 78};
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
    msg.setTimeStamp(0.6192695713780377);
    msg.setSource(41369U);
    msg.setSourceEntity(123U);
    msg.setDestination(47653U);
    msg.setDestinationEntity(112U);
    msg.sys_src.assign("XAMYMQOVAGABNURLPGVIJSTGSSDEIPSYQVKWROPNSUXJICFPFLLQHZJLXNUBVAXZY");
    msg.sys_dst.assign("PZQCTWVEIGSKRYNVUILQPIKDEQMGOKVMSBTFDCVGFMLNFSDTXHFCMOHFHSUCRXLLQTBJKYEXABGAAHWMODRUFEPEYZAOLU");
    msg.flags = 153U;
    const signed char tmp_msg_0[] = {21, -28, 85, -85, -128, 84, 13, 80, 91, -125, 40, 89, 64, 41, -117, 81, 79, -36, -44, 48, -106, 70, 86, -18, -13, 14, 81, 48, 92, 54, 20, -86, -73, -87, 100, -6, 122, 43, 23, 39, -106, 79, -29, 45, 38, 39, 20, 124, -83, 98, 4, 20, 88, 23, -49, 82, -22, 54, 45, 73, -97, 116, -124, 103, 84, 35, -21, 92, -90, 22, -9, -3, 86, -4, -65, 51, -94, 46, 2, -7, 7, -119, -73, -23, 22, -18, -66, -66, -125, -81, 12, 85, -3, -52, -7, -78, -56, 22, -10, 78, -118, 31, 52, -42, 38, 10, 68, 86, -104, -105, -63, 42, -42, 34, -82, 1, 87, -69, 102, 59, 7, 53, 33, 33, -97, 80};
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
    msg.setTimeStamp(0.8689209095738746);
    msg.setSource(23925U);
    msg.setSourceEntity(166U);
    msg.setDestination(52739U);
    msg.setDestinationEntity(147U);
    msg.sys_src.assign("FNHZNNEOPHMVVOYGMFKGFFLOSUEBHAXJTJAYJLABGMWXTVSYURUETYFCDLWSBLLTC");
    msg.sys_dst.assign("UAMKPHWDWDMQEJJHTLOJUZVIFASILSHJDENYT");
    msg.flags = 183U;
    const signed char tmp_msg_0[] = {16, 115, 124, -8, 103, -21, 99, 33, 63, -55, 20, -90, 114, 109, 124, 42, -61, -103, -16, -20, -53, -36, -35, -92, 58, 43, 36, 59, -79, -37, 104, -97, -73, -128, 117, -51, -64, 15, 35, -4, -119, -61, 93, 122, 49, -6, -122, 18, -54, -99, 83, -77, -110, -114, -70, -88, 73, 90, -9, -11, 5, 34, 111, 9, -88, -93, 62, -51, -109, 92, -36, 7, -93, -50, 105, 92, 93, -17, -77, -126, -105, -73, -5, 120, -9, 9, -100, -7, -44, 119, 26, -66, -10, -62, 20, 113, 62, -57, 24, -86, -74, 73, 74, -56, 121, -8, 97, 13, 119, 62};
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
    msg.setTimeStamp(0.6713052918681731);
    msg.setSource(48277U);
    msg.setSourceEntity(194U);
    msg.setDestination(47806U);
    msg.setDestinationEntity(5U);
    msg.sys_src.assign("QVJOJCDBNYFVJMZFYHQCABPKUGYIEUEWZZXFLDEWWBUUFPLDLVBVVXPYPMKJPWWXKAUMCBBATEQ");
    msg.sys_dst.assign("GUHTHVSBWHTAFFKQKLNGDILYAQELXQHKWHQPOEBMQZFLOWSZQBFIDMHLKFBCEWCVXKRAXJPXEIDSXLKDADGUJNGJGARMCCOUVWWIKTBXAVEZOBOZQ");
    msg.flags = 95U;
    const signed char tmp_msg_0[] = {-66, -84, -7, -85, 118, -116, -9, 64, -88, 65, 25, 49, 68, 70, 13, -18, -69, -118, -125, -6, 76, 67, -81, -114, 71, -14, 105, 97, 112, 41, 14, 20, -78, -86, 64, -119, 77, 62, -14, 55, 77, 30, -99, -120, 113, -45, -96, -120, 62, -5, -124, -16, -32, 41, -16, -2, -89, -104, -27, -50, 94, 15, 108, 98, 113, -52, 87, 111, 3, -74, -122, -73, 13, -109, -88, -29, 69, 0, 87, 97, -113, -46, -24, 101, 88, -117, -48, 121, -63, 1};
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
    msg.setTimeStamp(0.6053584074474966);
    msg.setSource(20389U);
    msg.setSourceEntity(251U);
    msg.setDestination(13549U);
    msg.setDestinationEntity(34U);
    msg.seq = 25491U;
    msg.value = 43U;
    msg.error.assign("YWCCHLMOJXAVHSWYIDMIKWWPPDICJVMQLYNHKJHAKVGAKTJATWAQGRQERSSGMCZT");

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
    msg.setTimeStamp(0.9847863304427577);
    msg.setSource(59166U);
    msg.setSourceEntity(90U);
    msg.setDestination(30225U);
    msg.setDestinationEntity(4U);
    msg.seq = 60607U;
    msg.value = 29U;
    msg.error.assign("CETFTXNTHKAOMRMESRDGSVDBQCLOMYUCXBLOEBBHDIGWTWXHSRXUATRNJXBJLBTSWFPAZMANLBUCLEJXWOZILBVVHEQAEYNPGVYMRRSGFJHSIZZRKQPCFXWTUIIMQASPXOFYGHYQCGGQFTHKYFIUHDCSTOLOFSUAWCWENNZEOBNSQYDVMLAFKKUKDDZWOGPKJHVXNXVMWZKAVVRZPMEV");

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
    msg.setTimeStamp(0.33959896139290524);
    msg.setSource(6431U);
    msg.setSourceEntity(252U);
    msg.setDestination(51221U);
    msg.setDestinationEntity(77U);
    msg.seq = 13224U;
    msg.value = 120U;
    msg.error.assign("PIVUFZSSWSRKFXOAWYJVJOZJNBQVETQBEVWORSMQTCJMUAJMLBRADYJROFZQFUKGTNCYXOURXJZHVXGSQYFPHGBQBGNWMQNOWOBEQLSFWGTRMLRSLTVHZBZDCIUICCPTXHNTGFKDAMAURUMEYAXZUPKPLCMXZDKHINBVEWVGDHAEVPECZCLKKFDGWUINFDGTSNQCEYSRCZXGNKKOAPDOAIPTIHFNLYQDMHIHJXPOYADJ");

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
    msg.setTimeStamp(0.6027175878717858);
    msg.setSource(41015U);
    msg.setSourceEntity(66U);
    msg.setDestination(2258U);
    msg.setDestinationEntity(142U);
    msg.seq = 34835U;
    msg.sys.assign("MUBQVHJHSACIGJBJOOWAZVKNDQOKQKVYCWDPZNMHPCPDOYWJQCUXHXTTSSGGVNGPRYAVFBDRESTSXUXLKSKVITQOEEQQOZJDEMEBOQKKPRWTANHLFPOKUCEGGRNLHBGXMZRYBXXZQBAOHNZCGCTRQRSRGIFFDJFZMDILYNEOPMYSUJTLLWJXIALYVJZLVBPSFVCPKIZAIWEUFCHEFUCDNJUABRUHLWM");
    msg.value = 0.36609936516976127;

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
    msg.setTimeStamp(0.3157671338225442);
    msg.setSource(45869U);
    msg.setSourceEntity(133U);
    msg.setDestination(15550U);
    msg.setDestinationEntity(200U);
    msg.seq = 8094U;
    msg.sys.assign("THXKVLZAHNLKTKVKAURCCDSRYCTIWSBSQPOKJYXSYFBDWGNAIOJDJOBZYPIPEKGW");
    msg.value = 0.392426233077414;

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
    msg.setTimeStamp(0.9516794182939665);
    msg.setSource(31980U);
    msg.setSourceEntity(191U);
    msg.setDestination(1504U);
    msg.setDestinationEntity(48U);
    msg.seq = 36216U;
    msg.sys.assign("KQBQYWNNAWCKFEOZLSZNVJBSHKARNUZYIJJFRHJDMGQTIXNIZRLCJWXKFQUKBGMOHBGPPLLWE");
    msg.value = 0.3540389650412077;

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
    msg.setTimeStamp(0.4274391280055172);
    msg.setSource(41864U);
    msg.setSourceEntity(118U);
    msg.setDestination(34731U);
    msg.setDestinationEntity(4U);
    msg.seq = 24718U;
    msg.sys_dst.assign("DDKISICSJNPKTXXMZFUALRMOMXIHWVCNHOIPQYFTXRJMRYIBXAJCKRFPHKSKMBCEEMVUMNWMJQZNKURPOWLDGQZJRPZHQXLQZBQDQVQVCCXUCOHEJJVNKGGKIDTSHRAGWTISZWWAU");
    msg.timeout = 0.9043635218932145;

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
    msg.setTimeStamp(0.2487256323001854);
    msg.setSource(35845U);
    msg.setSourceEntity(44U);
    msg.setDestination(59726U);
    msg.setDestinationEntity(45U);
    msg.seq = 5896U;
    msg.sys_dst.assign("IKDMYKDOJJKBZXWRPLJKCHNSEBHOPDMJHH");
    msg.timeout = 0.7386940088775269;

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
    msg.setTimeStamp(0.2713203097673845);
    msg.setSource(8529U);
    msg.setSourceEntity(45U);
    msg.setDestination(13663U);
    msg.setDestinationEntity(59U);
    msg.seq = 47520U;
    msg.sys_dst.assign("AVAOBCGKIWZZUNL");
    msg.timeout = 0.7862929985575732;

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
    msg.setTimeStamp(0.058622017905425094);
    msg.setSource(57651U);
    msg.setSourceEntity(230U);
    msg.setDestination(16140U);
    msg.setDestinationEntity(140U);
    msg.action = 36U;
    msg.longain = 0.2107398277762903;
    msg.latgain = 0.15069023004954218;
    msg.bondthick = 766431978U;
    msg.leadgain = 0.4120643617499655;
    msg.deconflgain = 0.00987920685859267;

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
    msg.setTimeStamp(0.026933318478203905);
    msg.setSource(60106U);
    msg.setSourceEntity(124U);
    msg.setDestination(2360U);
    msg.setDestinationEntity(242U);
    msg.action = 46U;
    msg.longain = 0.7006425703744722;
    msg.latgain = 0.9208971464326329;
    msg.bondthick = 781809452U;
    msg.leadgain = 0.029293839007166644;
    msg.deconflgain = 0.5917172728798233;

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
    msg.setTimeStamp(0.28035542939653946);
    msg.setSource(21651U);
    msg.setSourceEntity(31U);
    msg.setDestination(35486U);
    msg.setDestinationEntity(138U);
    msg.action = 72U;
    msg.longain = 0.5680885060987411;
    msg.latgain = 0.38637779176988407;
    msg.bondthick = 1245001186U;
    msg.leadgain = 0.7832853259183663;
    msg.deconflgain = 0.11536068809228028;

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
    msg.setTimeStamp(0.14292893672977092);
    msg.setSource(2829U);
    msg.setSourceEntity(50U);
    msg.setDestination(40909U);
    msg.setDestinationEntity(160U);
    msg.err_mean = 0.050983335878400315;
    msg.dist_min_abs = 0.2070547546985423;
    msg.dist_min_mean = 0.479260889662553;

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
    msg.setTimeStamp(0.7653321749719263);
    msg.setSource(60756U);
    msg.setSourceEntity(125U);
    msg.setDestination(36385U);
    msg.setDestinationEntity(245U);
    msg.err_mean = 0.2310665694436681;
    msg.dist_min_abs = 0.3743303340805666;
    msg.dist_min_mean = 0.8150079410699343;

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
    msg.setTimeStamp(0.06567785183094166);
    msg.setSource(34078U);
    msg.setSourceEntity(136U);
    msg.setDestination(24219U);
    msg.setDestinationEntity(219U);
    msg.err_mean = 0.5891951928365218;
    msg.dist_min_abs = 0.8911808820102584;
    msg.dist_min_mean = 0.8594829776924379;

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
    msg.setTimeStamp(0.6842569091638877);
    msg.setSource(53717U);
    msg.setSourceEntity(216U);
    msg.setDestination(954U);
    msg.setDestinationEntity(92U);
    msg.action = 22U;
    msg.lon_gain = 0.6016266400526875;
    msg.lat_gain = 0.816731036848289;
    msg.bond_thick = 0.9556323124032746;
    msg.lead_gain = 0.6468301334481421;
    msg.deconfl_gain = 0.24157743467165116;
    msg.accel_switch_gain = 0.1732745247077051;
    msg.safe_dist = 0.6418840646523816;
    msg.deconflict_offset = 0.2954536436104519;
    msg.accel_safe_margin = 0.5975003846191488;
    msg.accel_lim_x = 0.999272890077875;

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
    msg.setTimeStamp(0.7278915543429514);
    msg.setSource(41637U);
    msg.setSourceEntity(23U);
    msg.setDestination(64597U);
    msg.setDestinationEntity(204U);
    msg.action = 68U;
    msg.lon_gain = 0.7692760248300905;
    msg.lat_gain = 0.13840804698395837;
    msg.bond_thick = 0.6603472391724327;
    msg.lead_gain = 0.5182751021813273;
    msg.deconfl_gain = 0.4150078772419058;
    msg.accel_switch_gain = 0.7935693175154874;
    msg.safe_dist = 0.46938490453119996;
    msg.deconflict_offset = 0.7528383004615793;
    msg.accel_safe_margin = 0.9585050434244928;
    msg.accel_lim_x = 0.8009461468592374;

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
    msg.setTimeStamp(0.3952982504453668);
    msg.setSource(34097U);
    msg.setSourceEntity(229U);
    msg.setDestination(51755U);
    msg.setDestinationEntity(182U);
    msg.action = 235U;
    msg.lon_gain = 0.6911541142065324;
    msg.lat_gain = 0.2110744610848635;
    msg.bond_thick = 0.6300181625981034;
    msg.lead_gain = 0.466947245715718;
    msg.deconfl_gain = 0.09206114114694286;
    msg.accel_switch_gain = 0.8391347478740085;
    msg.safe_dist = 0.6444023171839749;
    msg.deconflict_offset = 0.29419719472251993;
    msg.accel_safe_margin = 0.6419494443861036;
    msg.accel_lim_x = 0.23677825126015362;

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
    msg.setTimeStamp(0.7839721400734585);
    msg.setSource(14868U);
    msg.setSourceEntity(25U);
    msg.setDestination(16360U);
    msg.setDestinationEntity(219U);
    msg.type = 211U;
    msg.op = 150U;
    msg.err_mean = 0.2439630779736861;
    msg.dist_min_abs = 0.010633214098684007;
    msg.dist_min_mean = 0.1556483873685517;
    msg.roll_rate_mean = 0.9942138710995303;
    msg.time = 0.6947371289926558;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 35U;
    tmp_msg_0.lon_gain = 0.3967389963682675;
    tmp_msg_0.lat_gain = 0.5077338068068233;
    tmp_msg_0.bond_thick = 0.6530774418295375;
    tmp_msg_0.lead_gain = 0.608499535225737;
    tmp_msg_0.deconfl_gain = 0.0833919266388542;
    tmp_msg_0.accel_switch_gain = 0.77927370797741;
    tmp_msg_0.safe_dist = 0.07480948703869794;
    tmp_msg_0.deconflict_offset = 0.5785568679418152;
    tmp_msg_0.accel_safe_margin = 0.5174994033609207;
    tmp_msg_0.accel_lim_x = 0.6297134975797439;
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
    msg.setTimeStamp(0.5461739949156281);
    msg.setSource(18378U);
    msg.setSourceEntity(124U);
    msg.setDestination(24862U);
    msg.setDestinationEntity(36U);
    msg.type = 80U;
    msg.op = 225U;
    msg.err_mean = 0.550247806597247;
    msg.dist_min_abs = 0.4569891858475865;
    msg.dist_min_mean = 0.5039587997949526;
    msg.roll_rate_mean = 0.24178237115689527;
    msg.time = 0.7705362013902316;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 151U;
    tmp_msg_0.lon_gain = 0.4146778582463645;
    tmp_msg_0.lat_gain = 0.8486674737637865;
    tmp_msg_0.bond_thick = 0.411781992514342;
    tmp_msg_0.lead_gain = 0.7955141025850134;
    tmp_msg_0.deconfl_gain = 0.9618018709358948;
    tmp_msg_0.accel_switch_gain = 0.9651547884164027;
    tmp_msg_0.safe_dist = 0.6079731312171044;
    tmp_msg_0.deconflict_offset = 0.3195207551620579;
    tmp_msg_0.accel_safe_margin = 0.8749900322143229;
    tmp_msg_0.accel_lim_x = 0.7097663855681604;
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
    msg.setTimeStamp(0.35135571998779014);
    msg.setSource(12415U);
    msg.setSourceEntity(112U);
    msg.setDestination(16247U);
    msg.setDestinationEntity(82U);
    msg.type = 38U;
    msg.op = 60U;
    msg.err_mean = 0.5101912006665956;
    msg.dist_min_abs = 0.39877989865209007;
    msg.dist_min_mean = 0.08985040686550971;
    msg.roll_rate_mean = 0.6482451607759995;
    msg.time = 0.29889772006636295;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 126U;
    tmp_msg_0.lon_gain = 0.7004006481591725;
    tmp_msg_0.lat_gain = 0.9343655878813164;
    tmp_msg_0.bond_thick = 0.22169652723799238;
    tmp_msg_0.lead_gain = 0.49806066432416374;
    tmp_msg_0.deconfl_gain = 0.34915933133946864;
    tmp_msg_0.accel_switch_gain = 0.6417387860620797;
    tmp_msg_0.safe_dist = 0.6311496291081362;
    tmp_msg_0.deconflict_offset = 0.9270975019211833;
    tmp_msg_0.accel_safe_margin = 0.4648610242604676;
    tmp_msg_0.accel_lim_x = 0.28946023543733645;
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
    msg.setTimeStamp(0.08569723843784682);
    msg.setSource(65504U);
    msg.setSourceEntity(19U);
    msg.setDestination(49180U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.6629670597029933;
    msg.lon = 0.23113871145132203;
    msg.eta = 358866577U;
    msg.duration = 42929U;

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
    msg.setTimeStamp(0.918965046298202);
    msg.setSource(31699U);
    msg.setSourceEntity(132U);
    msg.setDestination(40858U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.7002424606038298;
    msg.lon = 0.9265283611353844;
    msg.eta = 3012454991U;
    msg.duration = 16193U;

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
    msg.setTimeStamp(0.6778783410126967);
    msg.setSource(17476U);
    msg.setSourceEntity(27U);
    msg.setDestination(48094U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.4489690994857837;
    msg.lon = 0.6493095007121624;
    msg.eta = 2029148228U;
    msg.duration = 18728U;

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
    msg.setTimeStamp(0.6234265958349942);
    msg.setSource(7113U);
    msg.setSourceEntity(229U);
    msg.setDestination(30783U);
    msg.setDestinationEntity(72U);
    msg.plan_id = 32034U;

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
    msg.setTimeStamp(0.2495480246205708);
    msg.setSource(47215U);
    msg.setSourceEntity(66U);
    msg.setDestination(13035U);
    msg.setDestinationEntity(17U);
    msg.plan_id = 61841U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.10203552886289047;
    tmp_msg_0.lon = 0.9314645449460931;
    tmp_msg_0.eta = 3364198485U;
    tmp_msg_0.duration = 34800U;
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
    msg.setTimeStamp(0.41689782680806386);
    msg.setSource(31067U);
    msg.setSourceEntity(53U);
    msg.setDestination(41422U);
    msg.setDestinationEntity(92U);
    msg.plan_id = 30687U;

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
    msg.setTimeStamp(0.5709646350993943);
    msg.setSource(61096U);
    msg.setSourceEntity(91U);
    msg.setDestination(40205U);
    msg.setDestinationEntity(211U);
    msg.type = 175U;
    msg.command = 53U;
    msg.settings.assign("XYOPDQVFLKAREQSCAVYJBFWAHHWDZZRXSZUARNGHQJEZDIKFOHDMDLNOMLZTGCHGERAVJPZFRVYEY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 8590U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.002682153618202565;
    tmp_tmp_msg_0_0.lon = 0.44366095251356696;
    tmp_tmp_msg_0_0.eta = 3318573753U;
    tmp_tmp_msg_0_0.duration = 50983U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GVCFXRECBCDQUKXEYXWNVMFUKTHFYRMBQCNZLMUDOAQEJVNPOWWDEBRYAOTFHOLNSPRTIWHRLF");

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
    msg.setTimeStamp(0.6357622580126654);
    msg.setSource(26479U);
    msg.setSourceEntity(176U);
    msg.setDestination(25525U);
    msg.setDestinationEntity(221U);
    msg.type = 220U;
    msg.command = 174U;
    msg.settings.assign("LBZRNKDRSZTEKUGLBESWGIMYOMXUWHDMFOUCTYXLVFEJVEOLQHJDBZHILYHCARJAEEZDQJVKPXGFKOFUYZQMGPCZAQKVQZJWNLSUMFCHBPUYXJPWTPFIWYVEFGYACBDOSMVREUSGZSJCGGZTQLAF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 24673U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7366220719144877;
    tmp_tmp_msg_0_0.lon = 0.48019367125342893;
    tmp_tmp_msg_0_0.eta = 3397387244U;
    tmp_tmp_msg_0_0.duration = 24519U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("KVKOIHLGTOYBVGIDAAFDQBNMSSUIHGENRPJYTUHYJFFMMTLRIMBVQWFWZFSOKSEYIZTHXWBXPOYKE");

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
    msg.setTimeStamp(0.7495277028716325);
    msg.setSource(63392U);
    msg.setSourceEntity(224U);
    msg.setDestination(58459U);
    msg.setDestinationEntity(47U);
    msg.type = 241U;
    msg.command = 143U;
    msg.settings.assign("RVQWELXOKJJHOEDHTGSYXCPVWOJVITXFUYFDAJPGUWTIZUESKQUKZRIQQOKXUTQGHEZMCTCEMQBMSVUDZUFJPMCVDRDCASIA");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 59926U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8829709415900838;
    tmp_tmp_msg_0_0.lon = 0.2509477865223998;
    tmp_tmp_msg_0_0.eta = 659506867U;
    tmp_tmp_msg_0_0.duration = 59978U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MZJFAJQYLDXKSZZTXQVEVEWGFNQGKIULEHMBQDSJIUCBBTLGDFIEYTYINQTDRGHCIFXKZQODGTFGFTZITLOVWFYRREJOKOZMPEBNYTRLGIDHPNOFECUIJOAAAUKJMTMYBJFSWUQUVOTRYWKXWMSGVHIPCPSRDJHACKZYSBCMXLYWVUELARPZNNWOPDXVXHMCCAHSXRUZMNBJRWNGS");

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
    msg.setTimeStamp(0.1184070056794857);
    msg.setSource(45146U);
    msg.setSourceEntity(61U);
    msg.setDestination(27764U);
    msg.setDestinationEntity(227U);
    msg.state = 127U;
    msg.plan_id = 57826U;
    msg.wpt_id = 190U;
    msg.settings_chk = 18268U;

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
    msg.setTimeStamp(0.6740387868453735);
    msg.setSource(2973U);
    msg.setSourceEntity(205U);
    msg.setDestination(48331U);
    msg.setDestinationEntity(249U);
    msg.state = 4U;
    msg.plan_id = 38565U;
    msg.wpt_id = 248U;
    msg.settings_chk = 54190U;

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
    msg.setTimeStamp(0.49753507471139247);
    msg.setSource(63577U);
    msg.setSourceEntity(79U);
    msg.setDestination(31886U);
    msg.setDestinationEntity(27U);
    msg.state = 247U;
    msg.plan_id = 54829U;
    msg.wpt_id = 47U;
    msg.settings_chk = 44053U;

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
    msg.setTimeStamp(0.7382725169513723);
    msg.setSource(31957U);
    msg.setSourceEntity(49U);
    msg.setDestination(62515U);
    msg.setDestinationEntity(234U);
    msg.uid = 124U;
    msg.frag_number = 251U;
    msg.num_frags = 82U;
    const signed char tmp_msg_0[] = {83, 53, -124, 82, 121, 46, 101, -66, -54, -103, -14, -34, -76, 8, 83, -77, 13, 75, -35, 87, 126, -77, -97, 93, -71, 40, 106, -62, -36, -63, 13, -20, -110, -79, 100, 72, -96, -59, 6, -30, 42, 24, -107, -47, -116, -11, -71, 42, -59, -91, 75, 81, -111, -112, -89, -22, -67, -105, -82, -118, -125, -1, -71, -111, -82, -124, 78, -48, 1, -103, 61, -77, -127, -79, -45, 52, 9, -105, -86, -24, 15, 6, 121, 118, -70, 18, -28, 23, -17, 71, -85, 32, -90, -42, 102, 15, 39, 4, -57, -25, -10, 99, 25, -92, 31, -27, 113, -90, -16, -71, -75, -93, 98, -109, 109, 68, 38, 96, -4, -99, -5, -29, 25, -115, -98, -118, 116, 104, 31, -27, 86, -35, -93, -90, -62, -10, -87, 125, 113, -42, -79, 19, -89, 82, 94, 81, -110, 76, 108, -44, -19, -3, 33, 71, 21, -63, 11, -88, -41, 119, -28, -66, -61, -3, -47, -74, 54, -99, 79, 101, 38, 73, -19, 45, -123, -47};
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
    msg.setTimeStamp(0.7926494318797563);
    msg.setSource(2327U);
    msg.setSourceEntity(57U);
    msg.setDestination(18656U);
    msg.setDestinationEntity(49U);
    msg.uid = 134U;
    msg.frag_number = 174U;
    msg.num_frags = 97U;
    const signed char tmp_msg_0[] = {125, -1, -7, -21, -52, -52, -12, -7, 36, -115, 23, -24, 79, -45, -86, 56, -124, 63, 19, 37, -3, -37, 11, 59, 6, 67, -116, -75, 8, 30, -68, -1, -79, -111, 125, -32, 62, 123, 122, -49, -107, -34, -120, -116, 89, -96, -63, -62, -120, 24, -33, 12, -50, 108, 58, 12, 126, 39, -37, 72, -36, -64, 9, -19, 11, 27, -3, -90, -6, -51, -119, 92, 94, 32, 84, -10, -109, 104, 54, -85, 23, -61, -22, 82, 85, 28, -74, -42, 65, 59, -76, -11, 64, -31, 29, -84, -87, -32, 69, -4, 10, 61, 98, 43, -71, 55, 55, 4, -58, -81, 73, 80, 9, 23, 107, 82, -96, -92, -82, 78, 58, 83, -9, 14, -1, -113, 78, -55, -87, 82, 45, 61, -48, 61, 123, 86, 74, -63, -88, -111, 64, 86, 36, -114, 121, -9, -80, 24, 69, 83, -128, 121, 108, -29, -63, 74, -120, -20, -84, 65, -31, 11, 75, 114, -93, 20, -103, 53, -73, -95, -107, -28, 32, -3, 51, -45, -93, -4, 61, 96, 100, 56, 34, 121, -45, -127, 98, 94, -117, 45, 105, 50, -57, 76, 26};
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
    msg.setTimeStamp(0.8727165285890315);
    msg.setSource(19343U);
    msg.setSourceEntity(209U);
    msg.setDestination(44479U);
    msg.setDestinationEntity(232U);
    msg.uid = 148U;
    msg.frag_number = 100U;
    msg.num_frags = 20U;
    const signed char tmp_msg_0[] = {114, -52, 104, -84, -97, 63, 45, -4, 80, 0, -23, 110, 98, 23, 108, -119, 44, -99, -21, 73, 37, 63, 5, 115, -68, 22, -22, -81, -124, 53, 81, 80, 11, -97, -25, 64, -112, -20, -118, -62, 81, 72, 112, -1, 1, -104, -110, -31, 118, 2, 95, -76, -30, -108, -56, -121, -40, -58, 20, -127, -116, 9, -109, 4, -76, -37, 11, 58, 6, 57, -90, 102, -49, 58, -61, 66, -112, -90, -117, -124, 72, 61, -59, 100, -4, 64, -73, 85, -15, 27, -75, 43, -57, -3, 116, -69, -8, -76, 125, -117, 35, 85, 80, -71, 90, -84, -91, -45, -48, 43, 117, -27, 46, -74, -116, -20, 36, -48, 51, 16, -77, 50, -79, -91, -42, 89, -75, -52, 85, -19};
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
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.43548574024492526);
    msg.setSource(59604U);
    msg.setSourceEntity(114U);
    msg.setDestination(2013U);
    msg.setDestinationEntity(131U);
    msg.uid = 62U;
    msg.op = 89U;
    msg.frag_ids.assign("UKYOPEINKZIBYTHUXYWXXLANBKIDHVYLJEEHVVFHTSTCWWHWCKPDJRCJGPHZVRTTTQZMNQSIFVZNUWJDOBXCDTZPUIFLBFZQCGRLEAPRLEVYXVCRKMMGBIAGYWPASXZORRODIHLRGKZFAZFEDSJYJGUEQPAOLNOEWXF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.9688151751259699);
    msg.setSource(21147U);
    msg.setSourceEntity(10U);
    msg.setDestination(53471U);
    msg.setDestinationEntity(224U);
    msg.uid = 212U;
    msg.op = 243U;
    msg.frag_ids.assign("DWFIUKQNDCHIXEFQSGVCRVYEPUPNKWQHDBZCBQDOQIKHRSRKNSIHXQYCLWZDINEWFLWRLRPTVHGGNMGJTFPQUNQKNMNYCIBGSCAPFYETGCOZMWRKFUUMSBXDBGBHTXZLNIVSHSFEHCJDUVEEJYVCXOXRRJWFSXMYJZHZUTQSDMPMIYOWJN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.8041174593032464);
    msg.setSource(29931U);
    msg.setSourceEntity(31U);
    msg.setDestination(4920U);
    msg.setDestinationEntity(239U);
    msg.uid = 193U;
    msg.op = 144U;
    msg.frag_ids.assign("OQLADYMSXZFRNAXPYFQBVWXJIMFVNZXNMPAIISIJQMJNRCQXCULFHFVZOMIOLHQFFERHFXTSJGLJJPTNQCPBXUDCTYOAGFCCVDEPKRLTZHTEDLISXGEICLHAYSOHEZBPHWXNKAWLKDDENUSVWGOYBHTGACRNVBUQKMWWTYCSCZVRVPKHTA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6681586469769233);
    msg.setSource(61955U);
    msg.setSourceEntity(154U);
    msg.setDestination(11674U);
    msg.setDestinationEntity(208U);
    msg.content_type.assign("IMFGMHTUMELMUOGZLBYONFEGPWMBLPLHSYYWZJJKFARWLPIPWZHBQZHOCNACJIPEGBDETQYIVQYVCWKSBSURDKSBXOEFUYSODZIAAUJPZKFRNEOCXBGVQNP");
    const signed char tmp_msg_0[] = {51, 66, -39, -8, -39, 23, -95, -27, -100, 113, -73, -57, 64, 10, 99, 98, 19, 119, -37, 12, -33, -117, -122, -108, 63, 2, -119, -109, 97, 45, -82, 119, -43, -79, -56, -92, 19, 101, -18, -1, -92, 122, 24, 44, -13, 123, 37, -100, -47, 21, 119, 19, 83, 106, 54, -6, 42, 82, 108, -44, -54, 11, 1, 91, -125, -36, -72, -29, 49, 67, -79, 51, -5, -82, -27, -64, 62, -30, -27, -111, -100, -122, -99, -14, 116, 90, 9, 9, 65, -77, 36, 50, -67, -33, -96, -58, -69, -31, -76, -92, -70, -75, 110, -69, 90, 123, -122, 55, 17, 5, 29, -68, 89, -100, 79, 26, 105, 35, -61, -3, 93, -53, -117, 89, 102, 124, -10, 120, 52, 53, 24, 123, 116, 29, 29, 33, -5, -93, -7, -65, 48, -10, -68, -7, 110, 19, -57, -44, 11, 78, -119, 53, -68, 63, -62, -80, 95, 65, -124, -55, -25, -87, 119, -8, 9, -6, -43, 54, -27, 88, -73, 67, -126, -13, -60, -77, -12, -44, -89, 117, -65, 70, 79, 47, -10, -125, 126, 120, -93, 102, 69, 48, -9, 110, -16, 71, 114, -82, -49, -4, -72, 111, 29, -102, -39, -64, -24, 97, 47, 27, 33, 81, 103, -94, -56, 123, 30, -51, 45, -123, -48, -119, 118, -124, -3, 55, -123, -29, -58, -28, 113, 4, -31, -79, -93, -43, -32, -108, -102, 117, -73, 64, -36, 67, 124, -1};
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
    msg.setTimeStamp(0.3291651202466309);
    msg.setSource(30202U);
    msg.setSourceEntity(13U);
    msg.setDestination(37832U);
    msg.setDestinationEntity(249U);
    msg.content_type.assign("NFWYKYNHFTVQBGSVTHYHVGJEEIKVMJFZSCILMSXTSXFATWGKWEZHLDAMDRZVXFCOUAAZILCPXWTSHBYWKEBQVKADOGKREJQLDNNHLPGPRMXUQMQM");
    const signed char tmp_msg_0[] = {-89, -16, -110, 78, 106, -121, 47, 95, -21, -79, -68, -61, -65, -43, 28, -50, -123, 83, 20, -120, -21, -102, 2, 103, 65, 29, -124, -127, -58, 42, -64, -91, 80, -21, 23, 95, 94, 29, -121, -128, 6, 17, 1, 89, 26, 13, -110, 120, -93, -78, -118, 71, 17, 69, 6, -18, -85, 115, -53, 77, 119, -24, -65, -67, 4};
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
    msg.setTimeStamp(0.33870076405397953);
    msg.setSource(6995U);
    msg.setSourceEntity(43U);
    msg.setDestination(60501U);
    msg.setDestinationEntity(235U);
    msg.content_type.assign("QQWRVPIHXBWRKDLORTXQXFAGUBZMSVLOJLRGTGRZORSLHZUUFJWQEFOXSYNEPXDQHTCYGGJTBYWPDXTLDLIOXWEFSKIBWOZWPHGLYJNAOSPEPNNBJMPDHHZFRUHJYAISMCMBQPNVDGAQE");
    const signed char tmp_msg_0[] = {-100, -21, -16, 41, 78, -112, 91, -62, 91, 73, -75, -111, -80, 27, -6, 118, -125, 58, -86, 57, -41, -50, -3, -100, -63, -70, 29, 84, -53, -57, -13, 30, 58, 38, -48, 90, 12, 55, 125, 55, -104, 11, 66, 106, 16, -49, -101, -123, 83, -13, 33, -77, 76, -109, -119, 70, -116, 89, 111, 30, -89, -98, 61, 35, 33, -45, -123, 72, -73, 103, 7, 33, 75, -30, 39, -118, 109, 111, -40, 54, 77, 104, -104, -118, 110, 51, -29, -65, -74, -37, 1, 112, 115, 92, 100, 5, 47, 70, 121, -118, 25, -82, -89, -62, 40, -70, -25, -111, -33, -6, 108, -15, -106, -74, 27, 76, 9, 65, 76, 37, 43, -51, 100, -102, 51, 107, -32, -93, -111, -104, 19, 27, 21, -21, 83, -79, 84, 68, 49, -114, -100, 42, 42, 15, 118, 117, -111, 42, 119, 17, -90, 95, -114, 126, 27, 54, 78, -26, -17, -69, -93, 59, -65, 64, -86, -74, 72, 15, -28, -91, 72, -42, -13, -88, -91, -31, -69, 0, -43, 66, 90, -95, 23, -41, -77, -127, 114, 112, -19, 60, -24, 46, 60, 118, 70, -6, 66, -66, 118, -83, 15, 61, -13, 110, -27, -94, 80, 44, -49, 44, -49, 109, -63, 116, 35, -57, 30, -92, 121, -69, 2, -28, 51, 121, 109, -43, -54, 19, -31, 19, -9, -58, 42, -26, -113, -121, 92, 92, -70, 76, -96, 8, -100, -2, -31, 120, -91, -107, -77, -117, -4};
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
    msg.setTimeStamp(0.606624569629485);
    msg.setSource(49777U);
    msg.setSourceEntity(149U);
    msg.setDestination(35294U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.9029014485728383);
    msg.setSource(50814U);
    msg.setSourceEntity(127U);
    msg.setDestination(11857U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.6445947196129355);
    msg.setSource(49097U);
    msg.setSourceEntity(114U);
    msg.setDestination(34347U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.7774200517240204);
    msg.setSource(1948U);
    msg.setSourceEntity(115U);
    msg.setDestination(62906U);
    msg.setDestinationEntity(100U);
    msg.target = 59351U;
    msg.bearing = 0.3020623093837894;
    msg.elevation = 0.3016469742633049;

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
    msg.setTimeStamp(0.9717385964403352);
    msg.setSource(50888U);
    msg.setSourceEntity(0U);
    msg.setDestination(46895U);
    msg.setDestinationEntity(119U);
    msg.target = 64110U;
    msg.bearing = 0.451659693872966;
    msg.elevation = 0.689434683299818;

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
    msg.setTimeStamp(0.3753915082721676);
    msg.setSource(36437U);
    msg.setSourceEntity(96U);
    msg.setDestination(61562U);
    msg.setDestinationEntity(111U);
    msg.target = 43844U;
    msg.bearing = 0.7380794530817354;
    msg.elevation = 0.3187063208114729;

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
    msg.setTimeStamp(0.7372963918418997);
    msg.setSource(58512U);
    msg.setSourceEntity(26U);
    msg.setDestination(48965U);
    msg.setDestinationEntity(249U);
    msg.target = 60758U;
    msg.x = 0.44753105843053975;
    msg.y = 0.8015691216846592;
    msg.z = 0.37035724601918973;

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
    msg.setTimeStamp(0.7564654252429496);
    msg.setSource(2215U);
    msg.setSourceEntity(94U);
    msg.setDestination(50543U);
    msg.setDestinationEntity(155U);
    msg.target = 63898U;
    msg.x = 0.8270233338059416;
    msg.y = 0.6747445630098591;
    msg.z = 0.759414546407783;

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
    msg.setTimeStamp(0.4611369932713949);
    msg.setSource(64451U);
    msg.setSourceEntity(179U);
    msg.setDestination(36785U);
    msg.setDestinationEntity(4U);
    msg.target = 29732U;
    msg.x = 0.8480856941663021;
    msg.y = 0.2834212968723132;
    msg.z = 0.30014255606657925;

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
    msg.setTimeStamp(0.07974564874091139);
    msg.setSource(28438U);
    msg.setSourceEntity(0U);
    msg.setDestination(57046U);
    msg.setDestinationEntity(216U);
    msg.target = 30512U;
    msg.lat = 0.008361980715673178;
    msg.lon = 0.19319869625785735;
    msg.z_units = 192U;
    msg.z = 0.8475339589100259;

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
    msg.setTimeStamp(0.9734473229588191);
    msg.setSource(52261U);
    msg.setSourceEntity(91U);
    msg.setDestination(4873U);
    msg.setDestinationEntity(16U);
    msg.target = 37194U;
    msg.lat = 0.507685741477102;
    msg.lon = 0.8706599474287572;
    msg.z_units = 128U;
    msg.z = 0.7212087622944896;

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
    msg.setTimeStamp(0.48361373854719314);
    msg.setSource(59296U);
    msg.setSourceEntity(70U);
    msg.setDestination(49407U);
    msg.setDestinationEntity(41U);
    msg.target = 17706U;
    msg.lat = 0.8210205146796297;
    msg.lon = 0.6658962224024135;
    msg.z_units = 37U;
    msg.z = 0.06107287677079842;

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
    msg.setTimeStamp(0.0021922417163585672);
    msg.setSource(39272U);
    msg.setSourceEntity(46U);
    msg.setDestination(27897U);
    msg.setDestinationEntity(106U);
    msg.locale.assign("BPEKGHIOAXVRLXVVAHIAJHNBBFYQRVQUDMSFEOHNJVIWPJDSGEIZEUBPJNXCHGUL");
    const signed char tmp_msg_0[] = {100, 26, -47, -41, 19, 126, -104, -20, 104, 62, -110, 100, 22, 26, 4, -63, -127, -6, 79, -53, -14, 70, 44, -8, 122, 45, 49, -2, 123, 31, 10, -68, -125, -15, -125, 42, 9, 61, -22, 31, 32, -28, 30, 99, 99, -10, 91, 50, -86, -72, 18, 47, -60, 120, -62, 18, 62, 104, -104, -22, 76, 94, -113, -6, -28, -68, -4, -94, 36, -63, -125, 108, -59, 22, -103, -114, -75, 85, -4, 59, -120, -92, -109, -121, -46, -70, -91, -16, -85, -34, -76, -125, -125, 74, -7, -19, -40, -24, 115, 41, 107, 6, -88, -128, 31, 12, 71, -27, -18, 49, 92, -74, -117, 88, -76, 70, -88, 17, 19, -18, -108, 116, -64, -115, 95, 108, -74, -23, -16, -73, -13, -45, -51, 31, 117, 12, 71, -82, 37, 26, 93, -65, -33, -56, 75, 21, 61, -2, 36, -124, 80, -20, -16, 27, -122, -95, 30, 70, 6, -116, -63, 94, -61, 106, 65, 93, 38, -34, 6, -103, 92, 41};
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
    msg.setTimeStamp(0.1981644693138711);
    msg.setSource(18204U);
    msg.setSourceEntity(192U);
    msg.setDestination(64011U);
    msg.setDestinationEntity(4U);
    msg.locale.assign("KIBMBADRNSEEPPJZYGTLFDNFPZJXVSVQXLQAEGKANUUARGDQFCFNDOWVBXAHJLWFFYTJCKOKKXAOZWEJMIAITYJHNS");
    const signed char tmp_msg_0[] = {11, 104, -47, -85, 89, -101, -85, 81, 33, -14, -98, -75, 4, 27, 109, 50, -117, 80, 110, -81, -45, -65, -36, -31, 96, 117, -9, 31, -97, 23, -120, 35, -92, -77, 112, -127, 26, -95, -127, 52, 50, 3, -116, 21, -11, -20, -79, -57, 48, -105, -101, 64, 121, -82, -68, 63, 69, -49, -87, -71, 40, 52, -72, -44, -122, 0, -88, -85, -70, 95, -36, -60, 50, 6, -44, -104, -107, -94, -124, 89};
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
    msg.setTimeStamp(0.16228970217634353);
    msg.setSource(33210U);
    msg.setSourceEntity(91U);
    msg.setDestination(48255U);
    msg.setDestinationEntity(198U);
    msg.locale.assign("GEAVULVVMJLMOJZKKNIKHEHMPKOFUOQVOYBXWGRFVMBCTRUHOTHVLTZULIZYHSRBRQGBVYECLWZIGGXDGYJZBZAEKJKTAHTMQUZQDIMOITRLPFYEWZQXCQDAJFKCAJOFNGUPHXWQISNGLITECADFXFWRAGSPNSUEEKRAMECZPVVBGRYUAD");
    const signed char tmp_msg_0[] = {90, 2, 14, -11, 62, -108, 121, -35, -19, -85, 101, -81, -31, -79, 117, 96, 10, 125, 10, -4, -73, 37, -93, -80, 1, -82, 98, 60};
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
    msg.setTimeStamp(0.5696497625278711);
    msg.setSource(29662U);
    msg.setSourceEntity(35U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.9768151809769318);
    msg.setSource(21381U);
    msg.setSourceEntity(157U);
    msg.setDestination(51978U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.8690619901929109);
    msg.setSource(27889U);
    msg.setSourceEntity(220U);
    msg.setDestination(9023U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.8879993646251765);
    msg.setSource(12259U);
    msg.setSourceEntity(241U);
    msg.setDestination(5945U);
    msg.setDestinationEntity(186U);
    msg.camid = 16U;
    msg.x = 49952U;
    msg.y = 15592U;

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
    msg.setTimeStamp(0.31398130456114826);
    msg.setSource(23512U);
    msg.setSourceEntity(9U);
    msg.setDestination(46705U);
    msg.setDestinationEntity(224U);
    msg.camid = 150U;
    msg.x = 52028U;
    msg.y = 62064U;

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
    msg.setTimeStamp(0.676326952128182);
    msg.setSource(55310U);
    msg.setSourceEntity(167U);
    msg.setDestination(39880U);
    msg.setDestinationEntity(35U);
    msg.camid = 231U;
    msg.x = 49160U;
    msg.y = 28775U;

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
    msg.setTimeStamp(0.8289449788237295);
    msg.setSource(9918U);
    msg.setSourceEntity(208U);
    msg.setDestination(63682U);
    msg.setDestinationEntity(4U);
    msg.camid = 164U;
    msg.x = 2479U;
    msg.y = 18003U;

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
    msg.setTimeStamp(0.6656151105798466);
    msg.setSource(18532U);
    msg.setSourceEntity(148U);
    msg.setDestination(28731U);
    msg.setDestinationEntity(71U);
    msg.camid = 220U;
    msg.x = 50673U;
    msg.y = 1596U;

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
    msg.setTimeStamp(0.08060653800484263);
    msg.setSource(31235U);
    msg.setSourceEntity(47U);
    msg.setDestination(18121U);
    msg.setDestinationEntity(168U);
    msg.camid = 113U;
    msg.x = 41401U;
    msg.y = 23723U;

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
    msg.setTimeStamp(0.6072530670856869);
    msg.setSource(18069U);
    msg.setSourceEntity(3U);
    msg.setDestination(50949U);
    msg.setDestinationEntity(58U);
    msg.tracking = 192U;
    msg.lat = 0.451444151487587;
    msg.lon = 0.06724554760002821;
    msg.x = 0.2099845572791228;
    msg.y = 0.084436298830327;
    msg.z = 0.41918725700033843;

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
    msg.setTimeStamp(0.660417762451514);
    msg.setSource(12903U);
    msg.setSourceEntity(132U);
    msg.setDestination(42424U);
    msg.setDestinationEntity(80U);
    msg.tracking = 118U;
    msg.lat = 0.4478390181087991;
    msg.lon = 0.692882790796348;
    msg.x = 0.0002510860664972636;
    msg.y = 0.3831243536536093;
    msg.z = 0.4877234275483139;

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
    msg.setTimeStamp(0.1628655701185039);
    msg.setSource(58882U);
    msg.setSourceEntity(232U);
    msg.setDestination(31745U);
    msg.setDestinationEntity(151U);
    msg.tracking = 43U;
    msg.lat = 0.3008954017130743;
    msg.lon = 0.3152168561331439;
    msg.x = 0.5422190999361636;
    msg.y = 0.10510420527141007;
    msg.z = 0.8404079926306762;

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
    msg.setTimeStamp(0.45047757152037227);
    msg.setSource(1194U);
    msg.setSourceEntity(247U);
    msg.setDestination(50846U);
    msg.setDestinationEntity(140U);
    msg.target.assign("NSKCBYAIJFWSJFDZVZEJZNRVLPSFQKTRTEMUEUNMJTYCHJCZVONIFFIECFMBHSPAUFTEDUDQVZLNEQR");
    msg.lbearing = 0.47863972586928294;
    msg.lelevation = 0.9545299224315132;
    msg.bearing = 0.24483054621054545;
    msg.elevation = 0.9435731581508723;
    msg.phi = 0.7043909768019087;
    msg.theta = 0.8065936162366547;
    msg.psi = 0.8542604626205172;
    msg.accuracy = 0.6176305396510544;

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
    msg.setTimeStamp(0.4667716610370113);
    msg.setSource(32807U);
    msg.setSourceEntity(57U);
    msg.setDestination(32314U);
    msg.setDestinationEntity(74U);
    msg.target.assign("HSOSMBITFJDZBU");
    msg.lbearing = 0.31460980482086065;
    msg.lelevation = 0.49430565136252125;
    msg.bearing = 0.4877844580655559;
    msg.elevation = 0.3549783532200572;
    msg.phi = 0.8821471391097482;
    msg.theta = 0.15106906203721826;
    msg.psi = 0.01095801066073232;
    msg.accuracy = 0.37805740037230307;

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
    msg.setTimeStamp(0.680139464294133);
    msg.setSource(781U);
    msg.setSourceEntity(26U);
    msg.setDestination(16893U);
    msg.setDestinationEntity(215U);
    msg.target.assign("BYTYTFMDQGAZVECCYTIJILMFHKJFXXXSGRCMMAPDNUQLIFWUPWQRTGAPTWJQQPNGHXEPQUXOSCLIHETBYNDRYODXFHSVOIEMQZDJBKBPSFXE");
    msg.lbearing = 0.3149800991458399;
    msg.lelevation = 0.773815504804905;
    msg.bearing = 0.6491890766799221;
    msg.elevation = 0.5572576094481205;
    msg.phi = 0.163142535662271;
    msg.theta = 0.32667494013280496;
    msg.psi = 0.7234857801214843;
    msg.accuracy = 0.30207031189781275;

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
    msg.setTimeStamp(0.5945785118707463);
    msg.setSource(58742U);
    msg.setSourceEntity(76U);
    msg.setDestination(54394U);
    msg.setDestinationEntity(77U);
    msg.target.assign("YFDLVSEXWHUBGPHRUNNGWLLNPXDHVCYZGXVTZMIOHABWYUCECIFOLWVNNXQCENDAMCG");
    msg.x = 0.5350430626689204;
    msg.y = 0.5100000601949278;
    msg.z = 0.6913951631703326;
    msg.n = 0.9425966877456357;
    msg.e = 0.902965035693805;
    msg.d = 0.7882714796584896;
    msg.phi = 0.6638827045108775;
    msg.theta = 0.6324346335928511;
    msg.psi = 0.7257814599649337;
    msg.accuracy = 0.15373793830436044;

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
    msg.setTimeStamp(0.17136414235902986);
    msg.setSource(64126U);
    msg.setSourceEntity(74U);
    msg.setDestination(42663U);
    msg.setDestinationEntity(61U);
    msg.target.assign("VGSWDQZUQEROMFBKIHZLPYHPDQEMXZNWCNQKMNTSTZMDCVBUXRSBVLJQHPMCULSBFLBNOQRGMKRIYFTFUBTHVWGGUJNBXJQIMOOGAWPZXZDEFYYYOEQOYWKOMSTBSUROI");
    msg.x = 0.6394186332010782;
    msg.y = 0.8779201689678375;
    msg.z = 0.052552949930020576;
    msg.n = 0.7494650886332956;
    msg.e = 0.3102536993989258;
    msg.d = 0.6069808497404965;
    msg.phi = 0.978685630191851;
    msg.theta = 0.17618357394895723;
    msg.psi = 0.821068319189034;
    msg.accuracy = 0.10486996919046876;

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
    msg.setTimeStamp(0.04201373344320902);
    msg.setSource(22358U);
    msg.setSourceEntity(174U);
    msg.setDestination(39923U);
    msg.setDestinationEntity(84U);
    msg.target.assign("FWHAGVBAEUSFMYPZBECTWCZKCPXNSKNUMXTYOQNOHKFZYDDFQSYMJBVKBE");
    msg.x = 0.14505873525745216;
    msg.y = 0.042735085509247206;
    msg.z = 0.9294916528630364;
    msg.n = 0.3838712081388227;
    msg.e = 0.7304959220360336;
    msg.d = 0.15804319424101954;
    msg.phi = 0.8310627038986852;
    msg.theta = 0.3062590288237881;
    msg.psi = 0.060330184118877694;
    msg.accuracy = 0.7634546926528453;

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
    msg.setTimeStamp(0.9985600113007779);
    msg.setSource(45938U);
    msg.setSourceEntity(244U);
    msg.setDestination(50284U);
    msg.setDestinationEntity(56U);
    msg.target.assign("VCJPHTPMDZEHGLKHOXXXYPJFQMRYOCCMLNAQRUMWSDCCZLQFVPJPYLIKGXZKWXBKIH");
    msg.lat = 0.5091692768784949;
    msg.lon = 0.610880232665723;
    msg.z_units = 1U;
    msg.z = 0.06626863639375247;
    msg.accuracy = 0.7534975736768519;

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
    msg.setTimeStamp(0.7778777947140063);
    msg.setSource(58820U);
    msg.setSourceEntity(45U);
    msg.setDestination(38777U);
    msg.setDestinationEntity(125U);
    msg.target.assign("HLWGQTOMBJCPVMHXTMHDEQNJFROQWLLODNGYMPFYWYEHFPHDXNEEHISRUHJZDBSNMYFJRLIAKCLNTDPRWITIVPTSFNZRGCVWIYQFVTIYNZBQKOOZLDSLYRSMFQVEIVWCCBGSJNXAGKVTPRZALUUBSYZBFZYUMLRMAEKJOQROOWZZGEQABTBAZKUCCQWAFFGGWPXRKUXOUGHGUEADAHDPS");
    msg.lat = 0.39317970001508495;
    msg.lon = 0.623665807685613;
    msg.z_units = 93U;
    msg.z = 0.9790955026472625;
    msg.accuracy = 0.21259106210238077;

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
    msg.setTimeStamp(0.8457456841638984);
    msg.setSource(50896U);
    msg.setSourceEntity(68U);
    msg.setDestination(57086U);
    msg.setDestinationEntity(185U);
    msg.target.assign("KNMTTXLAELBZCQCQZHBPCGDVSTIVIZRCZMKXVGLVWHXOLSTHRPLJFIKGYEPYEVLDRRYOPJTMOPZWIJYADXTHKGMBKUSUGBFMOHIDBVLJSSHRWJAKAEEAKFVQCUFKNYGIMVKDQJFHPKYWZXZJONXXGHUQVSUFNQMEAPUL");
    msg.lat = 0.9858517408276999;
    msg.lon = 0.7664705468085059;
    msg.z_units = 194U;
    msg.z = 0.88532242338701;
    msg.accuracy = 0.3821605575389474;

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
    msg.setTimeStamp(0.9441213959584652);
    msg.setSource(61176U);
    msg.setSourceEntity(216U);
    msg.setDestination(27275U);
    msg.setDestinationEntity(88U);
    msg.name.assign("QTBGIDKWLHFEHAFEAVCOINWTKAHTUBOBZSVMCKMPDMWUWUBIYJAHGWBSJJVYIGSAAKTYNTLFISTSROPBBLEGXABLVLLMYERZFHKYDRBXGWHVZETPYPEPQZLSEEXSOSUHMWRGMSGJKBXJMYLTUMQNRLKXUCOAFRFEGZAVCZXOXNDNHCMNKDCTRFGDQHXDNFRQJWZQTHCPNOMIOIOKWO");
    msg.lat = 0.8197756054586567;
    msg.lon = 0.5580007432520462;
    msg.z = 0.546170700254048;
    msg.z_units = 28U;

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
    msg.setTimeStamp(0.7003198269345644);
    msg.setSource(64679U);
    msg.setSourceEntity(63U);
    msg.setDestination(40988U);
    msg.setDestinationEntity(161U);
    msg.name.assign("GBPRMTJWGMMORFARCEYBJWNLQ");
    msg.lat = 0.7235630066927616;
    msg.lon = 0.5032166167817568;
    msg.z = 0.8232878054532659;
    msg.z_units = 9U;

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
    msg.setTimeStamp(0.3214522380849213);
    msg.setSource(31056U);
    msg.setSourceEntity(207U);
    msg.setDestination(14380U);
    msg.setDestinationEntity(22U);
    msg.name.assign("NCMLOBHEWHTUEGOHIVFPARVMKLOAZIJSOTCEMNSSHVLLOFXPQSGYXCNVOIUAHGTKWDWHMMYWFRXHDPYPTZOLRBWGGNZUONXRIEGWWBYQXCCCYLEQJVGTNZJIMDRBKKCKGWTQABSIDMPFQIYUSBPPFJGCLYSZVFMSKLMQKBRBAADNHCRGTANQ");
    msg.lat = 0.49381681238239705;
    msg.lon = 0.8370823722079327;
    msg.z = 0.47267173425757714;
    msg.z_units = 134U;

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
    msg.setTimeStamp(0.09154850390808522);
    msg.setSource(26367U);
    msg.setSourceEntity(117U);
    msg.setDestination(14199U);
    msg.setDestinationEntity(98U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.633034872142425);
    msg.setSource(61448U);
    msg.setSourceEntity(80U);
    msg.setDestination(29302U);
    msg.setDestinationEntity(161U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.9367714315246393);
    msg.setSource(9656U);
    msg.setSourceEntity(15U);
    msg.setDestination(41190U);
    msg.setDestinationEntity(84U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.03173813026686578);
    msg.setSource(54803U);
    msg.setSourceEntity(55U);
    msg.setDestination(59794U);
    msg.setDestinationEntity(119U);
    msg.value = 0.030358516879486208;
    msg.type = 0U;

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
    msg.setTimeStamp(0.06990425585560278);
    msg.setSource(22766U);
    msg.setSourceEntity(172U);
    msg.setDestination(5158U);
    msg.setDestinationEntity(206U);
    msg.value = 0.8662089561653672;
    msg.type = 167U;

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
    msg.setTimeStamp(0.6936152930903948);
    msg.setSource(43624U);
    msg.setSourceEntity(247U);
    msg.setDestination(55919U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7774699928221338;
    msg.type = 218U;

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
    msg.setTimeStamp(0.3424079428881336);
    msg.setSource(22827U);
    msg.setSourceEntity(219U);
    msg.setDestination(52628U);
    msg.setDestinationEntity(242U);
    msg.value = 0.2024753140863499;

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
    msg.setTimeStamp(0.4135963932386564);
    msg.setSource(41U);
    msg.setSourceEntity(72U);
    msg.setDestination(18721U);
    msg.setDestinationEntity(188U);
    msg.value = 0.9039866998013556;

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
    msg.setTimeStamp(0.5850504916056807);
    msg.setSource(61346U);
    msg.setSourceEntity(171U);
    msg.setDestination(22661U);
    msg.setDestinationEntity(40U);
    msg.value = 0.2736946506767379;

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
    msg.setTimeStamp(0.4958717405149615);
    msg.setSource(38548U);
    msg.setSourceEntity(36U);
    msg.setDestination(976U);
    msg.setDestinationEntity(194U);
    msg.timestamp_last_service = 0.06402136819915805;
    msg.time_next_service = 0.13912798048198138;
    msg.time_motor_next_service = 0.0458330710368241;
    msg.time_idle_ground = 0.3577103943474944;
    msg.time_idle_air = 0.6459170080228488;
    msg.time_idle_water = 0.9321852892000861;
    msg.time_idle_underwater = 0.20679632509940682;
    msg.time_idle_unknown = 0.06768687544738217;
    msg.time_motor_ground = 0.39811795284243745;
    msg.time_motor_air = 0.1858726317796635;
    msg.time_motor_water = 0.5025210943934448;
    msg.time_motor_underwater = 0.47815916862054175;
    msg.time_motor_unknown = 0.8117402579753201;
    msg.rpm_min = -411;
    msg.rpm_max = 4934;
    msg.depth_max = 0.4112864105051288;

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
    msg.setTimeStamp(0.6444003691108017);
    msg.setSource(49054U);
    msg.setSourceEntity(92U);
    msg.setDestination(22169U);
    msg.setDestinationEntity(250U);
    msg.timestamp_last_service = 0.8594240953966839;
    msg.time_next_service = 0.7319389470345185;
    msg.time_motor_next_service = 0.353663897781357;
    msg.time_idle_ground = 0.9959595188355125;
    msg.time_idle_air = 0.8230505495840682;
    msg.time_idle_water = 0.3950067111281387;
    msg.time_idle_underwater = 0.7585675525179101;
    msg.time_idle_unknown = 0.20457096457929325;
    msg.time_motor_ground = 0.6700278159467744;
    msg.time_motor_air = 0.45244950995737254;
    msg.time_motor_water = 0.2577383135667506;
    msg.time_motor_underwater = 0.06132098195085012;
    msg.time_motor_unknown = 0.3907317560214759;
    msg.rpm_min = 11541;
    msg.rpm_max = 11158;
    msg.depth_max = 0.7664202453218019;

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
    msg.setTimeStamp(0.7146070379382664);
    msg.setSource(4614U);
    msg.setSourceEntity(178U);
    msg.setDestination(56061U);
    msg.setDestinationEntity(17U);
    msg.timestamp_last_service = 0.279049597201414;
    msg.time_next_service = 0.9899355452859651;
    msg.time_motor_next_service = 0.539943403598958;
    msg.time_idle_ground = 0.1606421810642561;
    msg.time_idle_air = 0.0711916949421566;
    msg.time_idle_water = 0.7751668169574315;
    msg.time_idle_underwater = 0.7117475755994441;
    msg.time_idle_unknown = 0.9018556317385723;
    msg.time_motor_ground = 0.2986038114481534;
    msg.time_motor_air = 0.6212989974164057;
    msg.time_motor_water = 0.16003153481175814;
    msg.time_motor_underwater = 0.6461958457346381;
    msg.time_motor_unknown = 0.13064972856010493;
    msg.rpm_min = -13774;
    msg.rpm_max = 15557;
    msg.depth_max = 0.38495042354514375;

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
    msg.setTimeStamp(0.1493199525677621);
    msg.setSource(8188U);
    msg.setSourceEntity(151U);
    msg.setDestination(3570U);
    msg.setDestinationEntity(123U);
    msg.severity = 166U;
    msg.text.assign("DXSBMJPMGIWAXXPCZUUVONBMULKZDVQLIIAEEZZFABEKZAEOWDOQHQRKYOCCYVVLWSEWJKNRLAYHNIGLNFTSOIFVCWPYGVDGZWCZUDRIHEWJBTRQMKYOGSRSIHPQMYTXTPDOCHPRBTQOKVPSDDUKRXAFLHXJBYGUYXSEQTWJAHTDUKILETFJMSRPIRLFGIQOQ");

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
    msg.setTimeStamp(0.3371167941910569);
    msg.setSource(34951U);
    msg.setSourceEntity(118U);
    msg.setDestination(54189U);
    msg.setDestinationEntity(18U);
    msg.severity = 1U;
    msg.text.assign("PARAVSDRWHPISREHZHNITQWNVTKCVHSYHZTGQVOPXBZCKYELSRBVEYJMUAJUHLIMWBEUNMBCOTXJVVOZMIAGUFIKCEAHWRAYRGWVBALENPTLKSYRNGTDFQLCLGCWBSBHKZUQXSJZDBODQAYINIYCFKGDDKSZWOIDIJOPIZVOEFUQXKPGETFQTFFMNWPMXZWBBKTSCUVRQA");

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
    msg.setTimeStamp(0.660005426156192);
    msg.setSource(30463U);
    msg.setSourceEntity(88U);
    msg.setDestination(2899U);
    msg.setDestinationEntity(178U);
    msg.severity = 97U;
    msg.text.assign("CLQZTDAAOUNUWXXZWOTCRRNKJEYILYVEIZORPQEJDUSMHQXWTXBPPCWUPKDQEHYDFNGRGQLSJVCVWOJLVXEFOJHITMZOHFCKIELBAILUVARSBSZLGYOXHHDWBJQBTWKHENGAMCBSPVQHABVFKWHOGRLRDPEZPIZRNEM");

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
    msg.setTimeStamp(0.5513215340483599);
    msg.setSource(55443U);
    msg.setSourceEntity(237U);
    msg.setDestination(50902U);
    msg.setDestinationEntity(100U);
    msg.channel = -22;
    msg.value = -1471536101;
    msg.gain = 169U;

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
    msg.setTimeStamp(0.3128446961530532);
    msg.setSource(56346U);
    msg.setSourceEntity(235U);
    msg.setDestination(1893U);
    msg.setDestinationEntity(233U);
    msg.channel = -25;
    msg.value = -226003072;
    msg.gain = 130U;

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
    msg.setTimeStamp(0.5109514423842143);
    msg.setSource(48580U);
    msg.setSourceEntity(5U);
    msg.setDestination(10564U);
    msg.setDestinationEntity(247U);
    msg.channel = -72;
    msg.value = 1671035756;
    msg.gain = 144U;

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
    msg.setTimeStamp(0.13077147304542436);
    msg.setSource(28532U);
    msg.setSourceEntity(155U);
    msg.setDestination(13304U);
    msg.setDestinationEntity(26U);
    msg.ch01 = 0.22239247120729522;
    msg.ch02 = 0.37715484629239127;
    msg.ch03 = 0.5124952305050385;
    msg.ch04 = 0.9995843815303488;
    msg.ch05 = 0.6770455733239273;
    msg.ch06 = 0.5394216430820239;
    msg.ch07 = 0.6024758993656791;
    msg.ch08 = 0.5609874496925167;
    msg.ch09 = 0.3042131401346948;
    msg.ch10 = 0.3792288407996346;
    msg.ch11 = 0.12497104665217285;
    msg.ch12 = 0.9690157025736872;
    msg.ch13 = 0.9828832872165673;
    msg.ch14 = 0.8146469882269208;
    msg.ch15 = 0.8404177471174176;
    msg.ch16 = 0.18898110848755512;

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
    msg.setTimeStamp(0.9302467820273418);
    msg.setSource(21073U);
    msg.setSourceEntity(70U);
    msg.setDestination(35463U);
    msg.setDestinationEntity(227U);
    msg.ch01 = 0.9584245905979454;
    msg.ch02 = 0.012321358805106764;
    msg.ch03 = 0.3444478890586449;
    msg.ch04 = 0.6995271494623163;
    msg.ch05 = 0.3194620805844379;
    msg.ch06 = 0.5074867148072484;
    msg.ch07 = 0.4364782449692097;
    msg.ch08 = 0.4768760165094582;
    msg.ch09 = 0.05415090641304032;
    msg.ch10 = 0.9872385542759977;
    msg.ch11 = 0.6306266623277084;
    msg.ch12 = 0.49535268727388604;
    msg.ch13 = 0.5389251214892377;
    msg.ch14 = 0.5941601502096621;
    msg.ch15 = 0.9778428902398582;
    msg.ch16 = 0.1491326971980087;

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
    msg.setTimeStamp(0.280303775761489);
    msg.setSource(21246U);
    msg.setSourceEntity(123U);
    msg.setDestination(19893U);
    msg.setDestinationEntity(129U);
    msg.ch01 = 0.7460415072268464;
    msg.ch02 = 0.029956443998445992;
    msg.ch03 = 0.020086037723657135;
    msg.ch04 = 0.1654155264361853;
    msg.ch05 = 0.8834181226827578;
    msg.ch06 = 0.407243896644515;
    msg.ch07 = 0.03535994272995868;
    msg.ch08 = 0.02984556854034226;
    msg.ch09 = 0.6120157302284406;
    msg.ch10 = 0.9858511217770144;
    msg.ch11 = 0.4015545479102832;
    msg.ch12 = 0.3742863476093875;
    msg.ch13 = 0.49314530047273575;
    msg.ch14 = 0.191299638219956;
    msg.ch15 = 0.9090939820774947;
    msg.ch16 = 0.12770475383089508;

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
    msg.setTimeStamp(0.6953990527256708);
    msg.setSource(30856U);
    msg.setSourceEntity(89U);
    msg.setDestination(41434U);
    msg.setDestinationEntity(228U);
    msg.op = 91U;
    msg.lat = 0.4109937861992382;
    msg.lon = 0.1408829632847296;
    msg.height = 0.9869772616107851;
    msg.depth = 0.5747657763034772;
    msg.alt = 0.5614448396374072;

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
    msg.setTimeStamp(0.8642039268844798);
    msg.setSource(47687U);
    msg.setSourceEntity(196U);
    msg.setDestination(9527U);
    msg.setDestinationEntity(38U);
    msg.op = 158U;
    msg.lat = 0.018859152007395852;
    msg.lon = 0.12188430172204534;
    msg.height = 0.9785727851743109;
    msg.depth = 0.8391653311558703;
    msg.alt = 0.5269106620370887;

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
    msg.setTimeStamp(0.2441796728480392);
    msg.setSource(28760U);
    msg.setSourceEntity(198U);
    msg.setDestination(43379U);
    msg.setDestinationEntity(72U);
    msg.op = 105U;
    msg.lat = 0.3128383975067599;
    msg.lon = 0.32827432893317054;
    msg.height = 0.911903407418863;
    msg.depth = 0.4652661191800884;
    msg.alt = 0.9745740287814122;

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
    msg.setTimeStamp(0.6886921158708657);
    msg.setSource(35866U);
    msg.setSourceEntity(251U);
    msg.setDestination(31280U);
    msg.setDestinationEntity(174U);
    msg.direction = 0.5430369566800173;
    msg.speed = 0.18248931804108826;
    msg.turbulence = 0.47002674617731954;

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
    msg.setTimeStamp(0.2713748371657261);
    msg.setSource(21134U);
    msg.setSourceEntity(60U);
    msg.setDestination(33886U);
    msg.setDestinationEntity(154U);
    msg.direction = 0.9732519190662848;
    msg.speed = 0.8715087403675014;
    msg.turbulence = 0.3755877732995815;

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
    msg.setTimeStamp(0.5522747984079915);
    msg.setSource(44145U);
    msg.setSourceEntity(94U);
    msg.setDestination(18231U);
    msg.setDestinationEntity(235U);
    msg.direction = 0.7585392956148702;
    msg.speed = 0.8667976693977721;
    msg.turbulence = 0.5169642973672087;

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
    msg.setTimeStamp(0.22942816381752285);
    msg.setSource(61474U);
    msg.setSourceEntity(94U);
    msg.setDestination(50743U);
    msg.setDestinationEntity(118U);
    msg.msg_type.assign("HSMASNMUNFZCBAWOHTQMXJEWLQUNRKONYMGXZVPNMCRGMIQEERRRXNHDJQOZXSEXFVCQPVZWIYYTNQLKGFGDUTEZUVKIOTLBRWODIAVVAQBDHTXVLIUYYFDWWVHRBIBPOJTNZFWJSAEMCXWCLDAYGFTPNSLDULSMOZOBQUMTDRONYXEJSCGQWLPDZHIGPBSYJAPPHHZUFVKKWRICFAAKICBDPSFXLEPACJKKMUOTYUBKQTVC");
    msg.sensor_class.assign("JXHATZPSNVQLWTNWBWDHEFCWRFTPGTZSFPWEOJUZKLVOQZDOQCFPUUAYHKSNKCMSKCVAPXZQPYQCRMGTDDNVFTMCMQS");
    msg.mmsi.assign("HHURYTCQWMEDCOLZIKFNYXLKKAHEUNLCISWPFGOHBVACKLYCMWKKTPVGIFQITZTIDSZQGLWEKNDZNYBJJLEPAWYPFXOPXXJMRBBGOPVJMNOOZQYNRIJYVUSFSEHAHDVSNVAD");
    msg.callsign.assign("ZMOGMVNPVGYCDEWBOJMDRGIEFRGJHTQLXNFSKIOCQKKXBSQPUIRYNKQPUEKALOIMNUBCKTJVQYCGVPSXCSCFWSXFLRHZPMDJWHYBDJBBRCOLRFGIOWQTPHSGATXUMAI");
    msg.name.assign("KIDYOKNBXIWVHXNDZWVSNQLZXJFBDGLKJEBCQENIVWBQRUEHIFCEOVLDKFHKKKQHBIMPNVIJAEYUQMFNBGTJGYCYTPPGROZRPHHZWMPTXSBNVDOPXCUCECPQKZLMONUOJYYEOSXQGLMJRBUVCVTMLJUMXFDSPAYETMXHBYGAZGOGOSHYQZAXBASYWTUZSF");
    msg.nav_status = 151U;
    msg.type_and_cargo = 44U;
    msg.lat = 0.005395359275512046;
    msg.lon = 0.6863660939912413;
    msg.course = 0.8333967343552838;
    msg.speed = 0.017422460046911503;
    msg.dist = 0.9481359968217529;
    msg.a = 0.6898741557462784;
    msg.b = 0.5390370404790211;
    msg.c = 0.5760926167342081;
    msg.d = 0.36784774304946755;
    msg.draught = 0.7569642777038468;

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
    msg.setTimeStamp(0.3774108675460103);
    msg.setSource(19620U);
    msg.setSourceEntity(211U);
    msg.setDestination(40093U);
    msg.setDestinationEntity(165U);
    msg.msg_type.assign("ISYYODLEWOIOTZLCRJFCMSHSTVALJJPMTYSRPERGHMFMIRKOBZJOEDQFEDHZNAVSUBTXGWWKPAFKQYDMUHPWEKBTCHJPCVMEXKLQNABOXQIVXODIIQOPKDLZFZ");
    msg.sensor_class.assign("FULHDBLCVITGYQLTHORPCRADNJSJUMWPUBHJPGBIOTKRUBYGTZADDBKYOOKBWABJZGQWXNHAYXEZMQFUEEOLGXTMIRSVPICYZQJSKDBDOLYQETJVDTNFLWMAZSVOCZCMEUBKWVEUHNHGUQSPYXDMCPWRAD");
    msg.mmsi.assign("ODREOMXZBNNDGUWOHWMOWCUTDIKXITJFRKRGACYYEJUMDLTIAABXIHDFNQBJKBUKSGDKTJQYJJDPZLTEQAGXNMKCNXRIRIQBMGQFQKHMLASVIQHWTTAFCC");
    msg.callsign.assign("OJMKZKFWBVGZKCHEXTQYNJMALYIJMSXVFV");
    msg.name.assign("TXSWEBORZDEPIDPYGLLLWCMZTPNQGSXDRQFVYYXEXWSQNIEDIALVYHHPUYWITEQPOFCOAUENZLNDXGTOJNLJCFUKABQQHBEODIMMJBAUVMEJZTXSWMJJFEHZKPVJTRLWK");
    msg.nav_status = 206U;
    msg.type_and_cargo = 95U;
    msg.lat = 0.330268177747029;
    msg.lon = 0.19602879474361;
    msg.course = 0.3742548926736279;
    msg.speed = 0.4432000483112897;
    msg.dist = 0.0752075242011887;
    msg.a = 0.8659361629182941;
    msg.b = 0.5580405629340516;
    msg.c = 0.601569893793344;
    msg.d = 0.17987867423358062;
    msg.draught = 0.7535751627148141;

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
    msg.setTimeStamp(0.5615204254448735);
    msg.setSource(21676U);
    msg.setSourceEntity(139U);
    msg.setDestination(9297U);
    msg.setDestinationEntity(172U);
    msg.msg_type.assign("ZKGYOPXJDRGQUDIHESWDEIRVOLKFTDJDOMNVWLPZAWNAMPCTYBRVQKLSERSGBCXHFOJYYSMCHINWBVZBDXVTIZFMVNURIGAMYCFPLBFGXWACMUTAFBJCRHXVOROROSSAGHUKPFQUUWTJDZCXARQLPKXHJBEGFXWKJSE");
    msg.sensor_class.assign("CHNHFTIDWYMUBWYVPCBQBZNTVZOWPOLWEZMLPEGRMIWECESMAMNLWFGNZFEQKRQTLQFIOBVVMYDGSKXP");
    msg.mmsi.assign("FTBIWKWYKDAZEPFYTQEFPMNZQHSVHWTXNQLPVWDMJ");
    msg.callsign.assign("LBZUXEQJEHJRIZTVMWATHBMSOKBUDYNUKKWPJGDDXLUDHABJRLIHBOYTLCGJKXHVUEFWFRLZVJXIIQOTCWGNQTQTWWYZZPEXOAQMICMIGEXPMZVAYRBHRWO");
    msg.name.assign("TYJXBDGILLOZQIOHVWCXDZEENVYWWVQXFQVNNPFZLABCHEEOMBMOWLIXWSSSMZRRBGYJVPMSZPUYVTQPKJXSOWDRCYATGGAULTQKFGPRZTIEINJJSDFGMTRDXSCPQPJPFXBKCHNDLUAZSYG");
    msg.nav_status = 60U;
    msg.type_and_cargo = 155U;
    msg.lat = 0.8865524728154718;
    msg.lon = 0.8148477219328694;
    msg.course = 0.32297760498296524;
    msg.speed = 0.7248338660805507;
    msg.dist = 0.1762472085121346;
    msg.a = 0.41766859346933594;
    msg.b = 0.1382648500804431;
    msg.c = 0.5059217771562401;
    msg.d = 0.4873933050417101;
    msg.draught = 0.2633155693080743;

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
    msg.setTimeStamp(0.01463394460969103);
    msg.setSource(50799U);
    msg.setSourceEntity(11U);
    msg.setDestination(16914U);
    msg.setDestinationEntity(6U);
    msg.depth_at_loc.assign("UDPSRYHLLWXCHIOQORAFNVWUZCWSEIBRSVNDJYDRQAHVFRXKXJVXVLTZTMNRAFTJTKEQYLEDZAUKDXDQMFXNHSGILDUOELIHPELKRJYAIGWFCMWEQEHL");
    msg.danger.assign("NCLPZASZHQZLWIRSPTEHYUABZMRUFNSAJAPRMKXMJBOECUTXTKBXDZGAOXIVJPYSSCBLPCKDGUVZHMVBIQGVLELQOGRDHOQHPKSMY");

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
    msg.setTimeStamp(0.4933755845136274);
    msg.setSource(3417U);
    msg.setSourceEntity(21U);
    msg.setDestination(22618U);
    msg.setDestinationEntity(9U);
    msg.depth_at_loc.assign("XIIUJSBYYGNHNKIHRWTEZVDQOJNOCCRGYAHBNHPEEXHMACDUYOXROAVHLZMSGJOTRLGYZURSFSZRCJVQBVPLCXZLIMTVLSDDJCXARQSGFHFJIDXKBYNUKVBPFAJDQWPRRUUMMEWIPCCFQSBDAMQQGGYPFZLDBACJWESINVLVTZZJTTEKYMPWXEXHVOMKFOEKLUIKATOPLUZMWMYQTB");
    msg.danger.assign("YAUETBWKCAKDNPIHRJWSYSXEMKPXXCRQZJUGCQIOEWSEFPJULKOYUATOFAJBOFSOAKYGVQPZBOWLXHPAVCWUTKSVMULIJZAELZDQLNMJVSVGYZJQIFPEYJLEXYCNJWLZ");

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
    msg.setTimeStamp(0.23221431256285419);
    msg.setSource(54779U);
    msg.setSourceEntity(77U);
    msg.setDestination(57913U);
    msg.setDestinationEntity(4U);
    msg.depth_at_loc.assign("BWTLGKSBPGYTQDXGFXCJEONRKFIBTIUGAPTCXZJQLRHQAVZCNSQRNMVEWEQRALGLNHCZYKDTCCNNUONWJWYHBXABFOXKQZVIKITNDNCIFJFM");
    msg.danger.assign("BCIKUKAZGNFFIFGUXNOPLPWNBYRCHMDEMZCDSVTIXUQQDOYASHSOGIMURXMISKGCTPBOMKXVCUUFHOIXDNDLYQWVEZP");

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
    msg.setTimeStamp(0.40517253256930474);
    msg.setSource(16560U);
    msg.setSourceEntity(140U);
    msg.setDestination(556U);
    msg.setDestinationEntity(228U);
    msg.time = 0.6946919002728423;
    msg.x = 0.7062277817318773;
    msg.y = 0.03179304411938633;
    msg.z = 0.7889071994642409;

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
    msg.setTimeStamp(0.43670742257025097);
    msg.setSource(45910U);
    msg.setSourceEntity(148U);
    msg.setDestination(15073U);
    msg.setDestinationEntity(78U);
    msg.time = 0.07229656870094703;
    msg.x = 0.4489756737210865;
    msg.y = 0.08837113905936889;
    msg.z = 0.7344304764009989;

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
    msg.setTimeStamp(0.962587089653964);
    msg.setSource(43258U);
    msg.setSourceEntity(121U);
    msg.setDestination(51601U);
    msg.setDestinationEntity(191U);
    msg.time = 0.7939647560925276;
    msg.x = 0.3158308765963318;
    msg.y = 0.34442983769200375;
    msg.z = 0.029167700410750008;

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
    msg.setTimeStamp(0.04478400405539418);
    msg.setSource(56827U);
    msg.setSourceEntity(136U);
    msg.setDestination(2282U);
    msg.setDestinationEntity(95U);
    msg.nbeams = 50U;
    msg.ncells = 145U;
    msg.coord_sys = 141U;

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
    msg.setTimeStamp(0.9273930327969707);
    msg.setSource(55450U);
    msg.setSourceEntity(123U);
    msg.setDestination(15294U);
    msg.setDestinationEntity(212U);
    msg.nbeams = 133U;
    msg.ncells = 195U;
    msg.coord_sys = 176U;

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
    msg.setTimeStamp(0.6873678125920337);
    msg.setSource(22572U);
    msg.setSourceEntity(185U);
    msg.setDestination(50230U);
    msg.setDestinationEntity(1U);
    msg.nbeams = 251U;
    msg.ncells = 77U;
    msg.coord_sys = 40U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.10872291188028538;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.8470593852817242;
    tmp_tmp_msg_0_0.amp = 0.9802185169166951;
    tmp_tmp_msg_0_0.cor = 12U;
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
    msg.setTimeStamp(0.01103302084459623);
    msg.setSource(16336U);
    msg.setSourceEntity(244U);
    msg.setDestination(63561U);
    msg.setDestinationEntity(111U);
    msg.cell_position = 0.6594853749486458;

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
    msg.setTimeStamp(0.36420554301222785);
    msg.setSource(40304U);
    msg.setSourceEntity(116U);
    msg.setDestination(16530U);
    msg.setDestinationEntity(58U);
    msg.cell_position = 0.16688139826246873;

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
    msg.setTimeStamp(0.927323978271509);
    msg.setSource(55672U);
    msg.setSourceEntity(20U);
    msg.setDestination(1056U);
    msg.setDestinationEntity(75U);
    msg.cell_position = 0.2807724032235236;

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
    msg.setTimeStamp(0.1268933964725586);
    msg.setSource(46201U);
    msg.setSourceEntity(245U);
    msg.setDestination(8770U);
    msg.setDestinationEntity(77U);
    msg.vel = 0.824435672620649;
    msg.amp = 0.6190065274592382;
    msg.cor = 53U;

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
    msg.setTimeStamp(0.1008872059335102);
    msg.setSource(32061U);
    msg.setSourceEntity(239U);
    msg.setDestination(57658U);
    msg.setDestinationEntity(11U);
    msg.vel = 0.02425175682046099;
    msg.amp = 0.5320905001033184;
    msg.cor = 114U;

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
    msg.setTimeStamp(0.9679072069970334);
    msg.setSource(64471U);
    msg.setSourceEntity(85U);
    msg.setDestination(6903U);
    msg.setDestinationEntity(14U);
    msg.vel = 0.6947034115228513;
    msg.amp = 0.333166296128075;
    msg.cor = 100U;

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
    msg.setTimeStamp(0.5169175379697898);
    msg.setSource(18452U);
    msg.setSourceEntity(211U);
    msg.setDestination(45488U);
    msg.setDestinationEntity(10U);
    msg.value = 0.010716558770805129;

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
    msg.setTimeStamp(0.402717839214912);
    msg.setSource(49287U);
    msg.setSourceEntity(117U);
    msg.setDestination(45967U);
    msg.setDestinationEntity(193U);
    msg.value = 0.07845095624904086;

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
    msg.setTimeStamp(0.3306928587996233);
    msg.setSource(29133U);
    msg.setSourceEntity(185U);
    msg.setDestination(9312U);
    msg.setDestinationEntity(161U);
    msg.value = 0.0821477289856416;

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
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.4434402270890282);
    msg.setSource(51607U);
    msg.setSourceEntity(50U);
    msg.setDestination(18781U);
    msg.setDestinationEntity(142U);
    msg.sig_wave_height_hm0 = 0.24806214119663295;
    msg.wave_peak_direction = 0.4360856091584835;
    msg.wave_peak_period = 0.38190502492018685;
    msg.wave_height_wind_hm0 = 0.9435473019631935;
    msg.wave_height_swell_hm0 = 0.9559849790381509;
    msg.wave_peak_period_wind = 0.7406520572246729;
    msg.wave_peak_period_swell = 0.5187275249091443;
    msg.wave_peak_direction_wind = 0.4138912269747559;
    msg.wave_peak_direction_swell = 0.6550842733255771;
    msg.wave_mean_direction = 0.7733196312671897;
    msg.wave_mean_period_tm02 = 0.9803127381595117;
    msg.wave_height_hmax = 0.27376888884993855;
    msg.wave_height_crest = 0.09490711181464961;
    msg.wave_height_trough = 0.07941188041483482;
    msg.wave_period_tmax = 0.5015432812542487;
    msg.wave_period_tz = 0.6005332750969132;
    msg.significant_wave_height_h1_3 = 0.2480258183215196;
    msg.mean_spreading_angle = 0.6658268629726982;
    msg.first_order_spread = 0.4091474733123045;
    msg.long_crestedness_parameters = 0.1490687218844663;
    msg.heading = 0.606691201380858;
    msg.pitch = 0.3334117766768576;
    msg.roll = 0.631704333677226;
    msg.external_heading = 0.36887057808268386;
    msg.stdev_heading = 0.31764128248144574;
    msg.stdev_pitch = 0.5849580088827754;
    msg.stdev_roll = 0.13265002177997898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.1718579973408786);
    msg.setSource(26123U);
    msg.setSourceEntity(17U);
    msg.setDestination(24722U);
    msg.setDestinationEntity(131U);
    msg.sig_wave_height_hm0 = 0.6581004966136887;
    msg.wave_peak_direction = 0.95396063476709;
    msg.wave_peak_period = 0.7942617331276771;
    msg.wave_height_wind_hm0 = 0.06458975453625648;
    msg.wave_height_swell_hm0 = 0.2697731915091378;
    msg.wave_peak_period_wind = 0.14573381604058178;
    msg.wave_peak_period_swell = 0.49850376740265046;
    msg.wave_peak_direction_wind = 0.09931546962734972;
    msg.wave_peak_direction_swell = 0.5835180382279916;
    msg.wave_mean_direction = 0.3503957725191875;
    msg.wave_mean_period_tm02 = 0.5003124473277744;
    msg.wave_height_hmax = 0.07192114305843611;
    msg.wave_height_crest = 0.5979396624938155;
    msg.wave_height_trough = 0.2691698131083661;
    msg.wave_period_tmax = 0.7058829770549753;
    msg.wave_period_tz = 0.5184232474044788;
    msg.significant_wave_height_h1_3 = 0.89646049680717;
    msg.mean_spreading_angle = 0.6880135724301231;
    msg.first_order_spread = 0.1304949032036984;
    msg.long_crestedness_parameters = 0.31258769116293805;
    msg.heading = 0.019728916940941477;
    msg.pitch = 0.48503145166578;
    msg.roll = 0.2853914604738307;
    msg.external_heading = 0.017465489741365525;
    msg.stdev_heading = 0.32381169895055406;
    msg.stdev_pitch = 0.31644359322660254;
    msg.stdev_roll = 0.6013952883341869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.9011533588365448);
    msg.setSource(38413U);
    msg.setSourceEntity(132U);
    msg.setDestination(29541U);
    msg.setDestinationEntity(151U);
    msg.sig_wave_height_hm0 = 0.4167568780305617;
    msg.wave_peak_direction = 0.5779246633454458;
    msg.wave_peak_period = 0.9812386403542155;
    msg.wave_height_wind_hm0 = 0.7941871462541319;
    msg.wave_height_swell_hm0 = 0.7197287323179631;
    msg.wave_peak_period_wind = 0.050630151667392154;
    msg.wave_peak_period_swell = 0.29449297166225463;
    msg.wave_peak_direction_wind = 0.6422432273718602;
    msg.wave_peak_direction_swell = 0.8193500132186573;
    msg.wave_mean_direction = 0.5944879800381332;
    msg.wave_mean_period_tm02 = 0.006675070128943528;
    msg.wave_height_hmax = 0.88763424978413;
    msg.wave_height_crest = 0.8062567103250959;
    msg.wave_height_trough = 0.6415930335223833;
    msg.wave_period_tmax = 0.7086860685454661;
    msg.wave_period_tz = 0.3032552158063644;
    msg.significant_wave_height_h1_3 = 0.7233339616208847;
    msg.mean_spreading_angle = 0.9779209672409972;
    msg.first_order_spread = 0.32983808863162645;
    msg.long_crestedness_parameters = 0.48095660802028983;
    msg.heading = 0.8747181511831142;
    msg.pitch = 0.07793786074491904;
    msg.roll = 0.947915086980607;
    msg.external_heading = 0.46250344378684793;
    msg.stdev_heading = 0.08216529462459277;
    msg.stdev_pitch = 0.5265050625711956;
    msg.stdev_roll = 0.633183482432903;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7823906083042013);
    msg.setSource(32846U);
    msg.setSourceEntity(164U);
    msg.setDestination(39674U);
    msg.setDestinationEntity(107U);
    msg.name.assign("FOVGXWFPPJTGYWJCTHBWDOQFSQNVYNLEWRACOOWNWALZVUXVOXNQWJXXQJXQLUKAZZBPPREVSCHUYGPAEDKRJLHITSVQAOBITNPQGDZDSCNDEJTIPMJKBPYSGCAHRKTMKXHYLQDHABJWIMMGXURGIJDNYTZRRVYLCODZUMHMAGKAFVGSZUXFBYTRWWNOVBYQCZURVETFBEMDBEOCXEIKSSPRQGH");
    msg.value = 203U;

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
    msg.setTimeStamp(0.9808716238711109);
    msg.setSource(39251U);
    msg.setSourceEntity(58U);
    msg.setDestination(25738U);
    msg.setDestinationEntity(11U);
    msg.name.assign("MAHYAGXRTFMEODLHJNKSVZOHCSVBHAYNMIHRJFCWPZKENAEDDYBDZFPYOJFWOCGSRAVWISQFLTYLNATWVLDJGIEIIWQTWTEMEYZSRQKTZPZDZQUSIGPKKXHAYBJCAX");
    msg.value = 29U;

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
    msg.setTimeStamp(0.048967717817670064);
    msg.setSource(44825U);
    msg.setSourceEntity(174U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(4U);
    msg.name.assign("TYWDZQJCXSAANZTULDRBBYLTDDUTHYGNOJYXOCWNALNSTWHQPDOKRLGQSUJYLGXGIHGGSFBKZBQUALIMZPNBNRFE");
    msg.value = 143U;

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
    msg.setTimeStamp(0.07699126898823572);
    msg.setSource(7441U);
    msg.setSourceEntity(64U);
    msg.setDestination(62539U);
    msg.setDestinationEntity(165U);
    msg.name.assign("QJNGEWJIDBDVCMNZCYIKRRFVVZDIZYISRGPJZROMRLLBOOZVFKXWEEHIZCXIHHFDCTCGPIWMJUUXATAYXDHPHOCAIONGWMSNDJQTMLHNVNCXSEEUAMPLGTYODFUMBTBELQQBHIYBHKUWCPZQBYEGVTDW");

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
    msg.setTimeStamp(0.6959366273391103);
    msg.setSource(64173U);
    msg.setSourceEntity(14U);
    msg.setDestination(10739U);
    msg.setDestinationEntity(29U);
    msg.name.assign("BGPKFZXHBOIEOJZRTIRALRQOVOFTTRXMQEZMZJXLGFWSBXLWLWSDHKGSBCDYQDWTSXGVHWRFGNIAEKWKSYNHQPELABBENBEULLHPYMBMZXUXXWPTUFTDWDPUSNXLCMAHXTQYPNZCVJMQ");

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
    msg.setTimeStamp(0.9861654414560831);
    msg.setSource(22255U);
    msg.setSourceEntity(40U);
    msg.setDestination(34110U);
    msg.setDestinationEntity(192U);
    msg.name.assign("DXSROMNKIDTFCVHILMCJMAXOOGLWXBWELNATSOTLKEKRATURUNZTQVIVOGNVUTREGPYWSFZEBRPFSJZYYUGTNJECUKVWAPJQLANBZBGNSIZWKXQHWDYKMPYQDZWFTBZOVJFEPUKXQDHUDKLJODMYCFZIKQANCGDQHMCDBLVFNMVHEGYYLTOIBHCCARYXUBZSYGAOVJIEWWSPERFHPZGJQ");

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
    msg.setTimeStamp(0.2282828019169777);
    msg.setSource(24388U);
    msg.setSourceEntity(158U);
    msg.setDestination(31972U);
    msg.setDestinationEntity(112U);
    msg.name.assign("KCUUVGTLHLFGMXLANQBOSCGYSAQXPTSJNFECQOGJMGFVXTPXLAPXIIYHARUJBUVMZLGANNEVMJFCKHRQMAYUIRBKZWTJFWYOZOITIUOHJXIRFTYBHYFKBVARDCIW");
    msg.value = 239U;

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
    msg.setTimeStamp(0.8857667230055426);
    msg.setSource(56291U);
    msg.setSourceEntity(153U);
    msg.setDestination(49469U);
    msg.setDestinationEntity(249U);
    msg.name.assign("CZTUGRAJYJEBYLKQPMECHXDLBVWPNWWHVOPAPXUEIXQGZHDDSBFNXDNOHMPDFPCFIKRTUQPXYMSICNEYTWURGSWWOCJTLSEUOAOAQQUSZEBLQYMTVSZVRIKXMJVLRRMSCVJAGTLUCJJMGJZNBAGWLZDRATHOCIBYXZVQANELUNIWHVHCTHRKAQMFKSZNAFUZPGGEHLKFFNWGCXXISQXIPDSJTOIRRZKVMDMOYBFBEVLYDWOFTJ");
    msg.value = 111U;

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
    msg.setTimeStamp(0.1394594312524169);
    msg.setSource(61670U);
    msg.setSourceEntity(61U);
    msg.setDestination(56161U);
    msg.setDestinationEntity(63U);
    msg.name.assign("CBUOVAUBBIRSLSNUJYTRIMTIBLTWYRGVNCNZSOLTUVPNDEWCGBFOA");
    msg.value = 35U;

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
    msg.setTimeStamp(0.30800400380619586);
    msg.setSource(51982U);
    msg.setSourceEntity(149U);
    msg.setDestination(64521U);
    msg.setDestinationEntity(138U);
    msg.value = 0.12559495595001824;

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
    msg.setTimeStamp(0.12553710168080567);
    msg.setSource(22804U);
    msg.setSourceEntity(196U);
    msg.setDestination(29011U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5062455429752784;

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
    msg.setTimeStamp(0.8171785771139441);
    msg.setSource(6902U);
    msg.setSourceEntity(139U);
    msg.setDestination(1350U);
    msg.setDestinationEntity(31U);
    msg.value = 0.7849807968434745;

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
    msg.setTimeStamp(0.8029203227066278);
    msg.setSource(28060U);
    msg.setSourceEntity(109U);
    msg.setDestination(52393U);
    msg.setDestinationEntity(164U);
    msg.value = 0.4683515117809418;

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
    msg.setTimeStamp(0.9068296838607368);
    msg.setSource(16177U);
    msg.setSourceEntity(99U);
    msg.setDestination(28089U);
    msg.setDestinationEntity(57U);
    msg.value = 0.9492561375851133;

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
    msg.setTimeStamp(0.6983847622411398);
    msg.setSource(3286U);
    msg.setSourceEntity(236U);
    msg.setDestination(31951U);
    msg.setDestinationEntity(11U);
    msg.value = 0.5189652280972697;

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
    msg.setTimeStamp(0.18363547911722133);
    msg.setSource(46890U);
    msg.setSourceEntity(20U);
    msg.setDestination(11011U);
    msg.setDestinationEntity(177U);
    msg.value = 0.1775500557852081;

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
    msg.setTimeStamp(0.17384193932769476);
    msg.setSource(64210U);
    msg.setSourceEntity(87U);
    msg.setDestination(51966U);
    msg.setDestinationEntity(37U);
    msg.value = 0.41979742613892956;

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
    msg.setTimeStamp(0.5878316918139531);
    msg.setSource(47417U);
    msg.setSourceEntity(1U);
    msg.setDestination(5397U);
    msg.setDestinationEntity(3U);
    msg.value = 0.2306296747050316;

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
    msg.setTimeStamp(0.07838044834697211);
    msg.setSource(48622U);
    msg.setSourceEntity(46U);
    msg.setDestination(49037U);
    msg.setDestinationEntity(223U);
    msg.restriction = 64U;
    msg.reason.assign("GQLXESCNRITHKSAFUVJQNPXE");

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
    msg.setTimeStamp(0.6997894786688564);
    msg.setSource(34456U);
    msg.setSourceEntity(136U);
    msg.setDestination(52311U);
    msg.setDestinationEntity(12U);
    msg.restriction = 24U;
    msg.reason.assign("AOBASPWYFJKDENMAZFHBSHAVBGQKDYAKJYBSBNSVUPIRYBWKLBGBZEMYLOZCTMGOWSVLSVWXKZCZTLOIAQXTVITZHKHFTRNWMIPQRQRDPMWIJTEVPKFLPTEXSDCDRRDDOWPAPUNXLCWYLOICQNHCJYCFWXMBHNYAO");

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
    msg.setTimeStamp(0.991241909066448);
    msg.setSource(38771U);
    msg.setSourceEntity(70U);
    msg.setDestination(60493U);
    msg.setDestinationEntity(131U);
    msg.restriction = 235U;
    msg.reason.assign("JCOGIMXDJLGSTJYUGXIAXLFEPWHKODXREHFZWBKURRKFGACSSTABLVCERWTNZRIOFAMONCEYJAKLMFSVXQEHMMYCMQZRCSDONVHVSASUZIADDNPTZLKUKFQULDWJIQJXBGTBPUPWGW");

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
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.3027081616068763);
    msg.setSource(5674U);
    msg.setSourceEntity(166U);
    msg.setDestination(14883U);
    msg.setDestinationEntity(62U);
    msg.op = 144U;
    msg.request_id = 1617656703U;
    msg.entity_name.assign("OWNOWXKNZLYMGQFVOBTYMZAHOYLUIDINFTEKCKZIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.5929242885093199);
    msg.setSource(34103U);
    msg.setSourceEntity(199U);
    msg.setDestination(9770U);
    msg.setDestinationEntity(184U);
    msg.op = 51U;
    msg.request_id = 580648690U;
    msg.entity_name.assign("EIMMCGNWYBZEKUTUNEORQQSFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.8891298891912237);
    msg.setSource(51641U);
    msg.setSourceEntity(52U);
    msg.setDestination(23928U);
    msg.setDestinationEntity(22U);
    msg.op = 175U;
    msg.request_id = 1398274959U;
    msg.entity_name.assign("DJQRQXDCWHRGHCMKLCYSAZHPOUAFKLNLRSZEFOFXOUBGLAQYOTUAZJZDOSDPWNQUHENJOVVSUVUWWIJCYTZBOUFMTGJRJRPDECPLBZNWTKDSVTQCAZIZOMPRHNXTOBTRSIMXLULULKNBMREHEVPLFOVFZMWWNAGYETFUTEVJIJJBIXVDGBBMXCJEYXKVYNGKBVLZCDYMFAYIPGIXXDHSGMHNQHGWXKSHPQQTNKDIAERQCFQBF");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VTKMKFFNKBHLSJVFZFJTQZLLORMSKXKNEZABCXTFIKDJUJUFXSEJMCZWBKZCEDUQYRGRTLYRBIZGBNWJLWTKVVHCGBEAMFYIAAGCIBOHITRGWCPKROXNWBVKRGJINWPUHJLCOLLDPDDDOYDMVDLSXCSOXARDQLTYMPZSUCUVHFZGQGPTZHXPYTPQOWYRYMQNMEETWNIMXPQJMGUHAQ");
    tmp_msg_0.type = 52U;
    tmp_msg_0.default_value.assign("ULPHAJOSRZTRLCYOBEETPGWGLPFZWVSRLMWWGISMUUQAHAUYCDLDSTPHKZQSUENJNXBVEKNOCIQKNUTMEKVENYVXMEFDAIYVQWWGILTHQDOUR");
    tmp_msg_0.units.assign("DSDVQOQVXMBFETUNPVDZSMRWMKXTKZUQMBGUHTAJZJEBNNZFJFDOICDWEISTGQSKZYAOONCIEPJLBZNZTGFJFUNXHXDGCCRTEGHHTUWKSUDBKBVNWYJXGXYQM");
    tmp_msg_0.description.assign("OTTYCNWIQGMSXRIJQNNITDZGJOYBQLKLIEYCDTLDLZQASUWFHRSFPRNAKJFFFMBBOVSUMWHBXZMVXFWAGZXDJVTCHKEEPFEUSPXYJGOAHXDJDHYIUQXILAPUVAQNXOCMCPRJPFHGMRTAOAUGUBPMJLRDZETVRIPHNFKUHWKRHTGWGEPOZTYOIMWEGFIVCWS");
    tmp_msg_0.values_list.assign("QZRPZVFTLPVRLXVDGDHCIXMPBNFNPRMRYQSSLAYHLRGBDZJSXATQKHLMIKDVEZNSRSMYKUTTSTVIDHYKJCXUVATEGSVBPXTAOIIJFFNXGEAGOHHCNUPJOUABVCSROKDGSNKOJLPOBFAGWDJQXDEAWYUBXWTOANDEMJOTOWZLGJUGHQXRZQHEMCYYFFWKZJQCAHYUNKQEL");
    tmp_msg_0.min_value = 0.7427611840793276;
    tmp_msg_0.max_value = 0.06573751230115121;
    tmp_msg_0.list_min_size = 98U;
    tmp_msg_0.list_max_size = 52U;
    tmp_msg_0.visibility = 164U;
    tmp_msg_0.scope = 247U;
    msg.parameters.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryTypedEntityParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.2358080960653417);
    msg.setSource(55785U);
    msg.setSourceEntity(242U);
    msg.setDestination(30156U);
    msg.setDestinationEntity(174U);
    msg.name.assign("TDWKYLOULHZPXAVVKGHWCIYNBJSGMJNOOWHYERYPBAREXCFDWAJMUDFLCFNFHZIQLOGZVSETUDTQIDOIDJAZYVBKBITPGVSDENAPJCRZQLNTAZZHPQBMPHUMCJESSINBFSNXCSUQLJPFRFXNZTBKSEMIMRQYHXGG");
    msg.type = 103U;
    msg.default_value.assign("SFFIWCDIDMUOXLRNHSTHKKUDGKZGSSQDOLSWPATPOMNMZSYWBFQMOHOZJSPLQXHQ");
    msg.units.assign("ICGRMXRVNOVXIWPWLZANZPNIAMDCUDKYHQWLQVWBUSJXJTRQAOYMWWNBHUEPKCYFKYSXUHKQGDHHTFFBWZPXVGJALNGMABRHSLARNEUI");
    msg.description.assign("ZAQCNTXIOIWEJHFCDZGSDGOQFWTLUBQHR");
    msg.values_list.assign("GLHWSSHZEHRZQWIORD");
    msg.min_value = 0.4708777330194024;
    msg.max_value = 0.2386683891402679;
    msg.list_min_size = 147U;
    msg.list_max_size = 199U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("OAJSNGWUFDBFKFBAPJDUEDRMDRPBBZSQDFHGMQNKKZTFPJKLBMXUQLGMULGVBSWGGBYRBKQTDWIEEICNZK");
    tmp_msg_0.value.assign("BSYTKCZZCWJOGYCSXFCYTAKOIOTEGGWDDHAWRNUEUDSDHJMLLLWMYJTCPWRPQFEBUQNZLMBMQAXWFANFQHPLISMSZHPSYEJZSUXRXO");
    tmp_msg_0.values_list.assign("ZHAKURETELJWJJHSAONSLXAMGYYKMAECSRRTTKCQEPVDLOZMCHXTVMVFJQYAUOGVEEHYZNYTNTIYGHOYVTGINTHJRIFXXOVKFRFWGKGBQLUWJZSDIFRZIGXXBTCRLQLEUWZBUENSTUBBJONWMLDDESCMNCXXIHKFSJMGINCPPAYWLSDNQBQPLQUOAXIBUH");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 6U;
    msg.scope = 87U;

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
    msg.setTimeStamp(0.5582558610805517);
    msg.setSource(30470U);
    msg.setSourceEntity(54U);
    msg.setDestination(16698U);
    msg.setDestinationEntity(73U);
    msg.name.assign("JYLZUBOQNIJLJUYCAZYJXHNGYGACEMMEZMAZUBSXUIHFCRVQGMRREVKMDTDKRKIYZRFDHMFWVKIBGFTYROBPOODEISJSSLOHVVETPPPYKYHFEWSSJUCEJVCPXXTOTSWQASBCFLRPBQQQISEAWVHDOULWIKNLLFWMKIWZDFYPWUHTQDJXGTTDOTVUJDAXYRFCBASPNNOEZNCUWHJGZRPQHZCVCBXVNDBGAL");
    msg.type = 88U;
    msg.default_value.assign("HIYSBMOYPCIGAKXFLAPZATDNRFCMWBRXJZNLZSYPWLG");
    msg.units.assign("ZYMRQMIJIGFTGVRKCBLPPCDNRGZQKOSHNZAFMVAFHTDQBPLTPFBSSYETPJNOQJKEULMHANQCVVECWUNRXFUAFCODIVGWLMASVECKVRVJEYMTOZNJQXARWGTUEWGEFHYJYTYHDUJRJWLJYXQHGIXBVMEZXSLRHNLDDSORNMCAKULFTIOSOHAIKGDZAPZPUQYXECWYUTOBXCKGIQD");
    msg.description.assign("CVZBGATRFMGCRHUVHCJZJVPMISFHAHSPHHVGMUUNZRRWDXQLMFCATGSNYVJIAEOSKY");
    msg.values_list.assign("UDEMNOZDQIVCMASZUWUTESRDBLLNRPXWJNOVDNXBUNJLZMPAXAAPCFIVRQFKQTSKEBJDXBLRYKSMCIOPMLZZZVJAGNKLGIQFSTQUHGJJHTCRVTFKEMRIRPQGHFDRTOBXWYWBEEOGBKIHCCZNRWIKWSGZCLMRUTYCLTKXAHJPECIWEFLNYYQFSSXTDYYSGAKXEV");
    msg.min_value = 0.3109341519327463;
    msg.max_value = 0.04333447259743228;
    msg.list_min_size = 45U;
    msg.list_max_size = 172U;
    msg.visibility = 78U;
    msg.scope = 48U;

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
    msg.setTimeStamp(0.9776402566562102);
    msg.setSource(56433U);
    msg.setSourceEntity(252U);
    msg.setDestination(23191U);
    msg.setDestinationEntity(213U);
    msg.name.assign("GUPLGPXREZARZGSQDFKXWHELPDHGQRPNVORYGJYQRNEPKHMCXFVCEXNBOHMCYMBHWYERJJVJQIQXXIERTQNLJBLCNFIT");
    msg.type = 17U;
    msg.default_value.assign("GWOMNSULWPVCJNDQEFUIIOQWYOADXGTETEWSKJKYZIKSRYRMJEQYUIKNYIDIMGQVXZQXZFEGKLTRCWTTOVZALREYNGTZUMIUQPRQZDKUWNVHCZAPEXYDMRFBJUYOXPTRWOQZAGAHGPXAJXAWDLUHZJHPCHYBSTPFEJHILFTVZOXLLNLNHRSCHJH");
    msg.units.assign("TRZSUPPSNQXHHNTGJKUYFHNRGCLLRKTZYXOROMEOEDOUIAMVTVMIRCMOUWIXFICIVHBCRKCUJDKZUWYQOJGWFVREXZURYTZCJSPBYYYDOJGQLDWIGUSWKQQEZKXNAXBHFEVYLDCAFWJZPTPPFTBRVLWWAUCTIGNQOFHOVZIALEZKQVBGIKLVECBAAXGDZEFGQJIHWMWGPTNSTHXXBJAPPXYQEFHJSHKDFMDSLLMLDRMYNUBBNVSNNA");
    msg.description.assign("LWUBODNVBVXAJIEZTYSJPCZNYNQSGRNHEHRHCWXNFNCZOCJMFWSQMBMUNJKDBPASTLRPVFHPGOFUWSHXZEFACOENEVPVVSLOOAPBKRYIXTQUXDGUBXSKDMUGPJT");
    msg.values_list.assign("DWFUWZMCMMJDFRXBHBJCASWXJRAINOUFIFIJOVAZTZDTRVUFXATDNCRQEMNXKABHUCLMUQUQMOGHQPNKYAHSDYNSOQGTZVRWCSFNJVGYTJNTHGZVWJCHCELJQZILLDCLNVJIKXGWBCQLBGWIZPIBXEVHODEUFVLYNTZYYEQKSQMXHRHPFPCSPWMZOTTDWXGWBPYFOTIGRR");
    msg.min_value = 0.46504086514775644;
    msg.max_value = 0.4206639811655095;
    msg.list_min_size = 253U;
    msg.list_max_size = 35U;
    msg.visibility = 71U;
    msg.scope = 113U;

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
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.8293180937838401);
    msg.setSource(55037U);
    msg.setSourceEntity(65U);
    msg.setDestination(9486U);
    msg.setDestinationEntity(37U);
    msg.param.assign("EMKRJNARYNXFZUXPQMAFNFBMEPLLKJNVZKFVWHEVDKSRPCJFVOJDUJXFQVLIAIQETYOTTBESGBBBGAGXAFWLHXTSUTNCUDEEUIGAZOCPAHIWPOKTOKUKRSVTORYCGAZEMBAUCTNZVTUJPLGQIDDHLWSZYQVQCYNRWDEJGYJZZMDLYCIDIGKRESNRHXOCHNPCWORI");
    msg.value.assign("MFAOQKIMDNWQPNSBTZIYBIBTCFEEIRBWDHETOBFUOAZCSCKSRJIDWDNYOVFYJJAGK");
    msg.values_list.assign("IRGOKVAOVXZNOPZFOSNQLTILHNYRWPTQBOPYAFTSYXZFLLJSEAVVJKXDPQBHYUVEDAVYMIBUFXAFHMPMRDFACNHNKLVFYCFHVYLRDIHTGIMQKGDXKTZRWTSIJZLAYZKGPBGNEJPRXIA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.9678387455977966);
    msg.setSource(23989U);
    msg.setSourceEntity(170U);
    msg.setDestination(61139U);
    msg.setDestinationEntity(107U);
    msg.param.assign("XUCNPZCGLZXWHMOSOMILXYCETAEFGARQPWHKQYMESFQUYIYXNNTBVLDIXSRAAPGLVLQLXGJHBELEDFBUWBHULHWGNOQBRVIPGYEXKPILXNFPMAZZKKCHBFKVZIOJEVNCMJHCRSRYRBUODKMYIOEJISWQVSPJTJAFHRWIFWUZAQNUMGJRBOUTRYTGDSONSOZEVDTLQDWMDKFOIDDFXFTZQACESVV");
    msg.value.assign("GHPELGLEVZXJMMXSHYCGTPPHIRNCRZMFFNIBNACTFMTVUZNSAUVEJBUVGZFGLHZOQPQPCNDQKWDEOA");
    msg.values_list.assign("FLZZJRJXAIYBGAUFTWZJMXRWPLOVFRBLZGHWQPYUEKSQQUJARJVGRTYKPNTHNICRKLTDOOZIRNBZACBHMTDORLVCCESSIDPVEFAYBAHYWQKSMMSPQDIZYNDSPBGGWXIAHDVYFVLJGDODPYBHNQUQKHIWNCANSXEWEFKHWYTFUBPMWFMCUTJLPFVVLEQERYBNWQTTCVJSOUZCKXTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ValuesIf msg;
    msg.setTimeStamp(0.5667103131782868);
    msg.setSource(54843U);
    msg.setSourceEntity(159U);
    msg.setDestination(54015U);
    msg.setDestinationEntity(200U);
    msg.param.assign("CRXNDHRUKVKWKFNJCDYQJIRZADVYBZLWJFTPGVIJAVYSBXHULD");
    msg.value.assign("GKTPMGVZSFLHTULRJOWDIWSNWYGDDUXSCXGZFJLLDFMMVQRDEUPOCGUNWQAOJKHMNWPWBPYXCRNEZQAZNKOAXRCXIADUBTWIUOZMZEQVXUTIZYBIOTMXOYFNHSBBCZKEAVEQSYQEJJQLXWFPPSCHJSKOS");
    msg.values_list.assign("VFUSQAIJONIQTQJDUEGSFEBUKYXACDFCBMKYPCPYDLEJLDIYQFYMXDMAJLZUTTBYNBQCDAGZWKZMUWSHWDBGWBGOXQNYWWSJOYFVJAVQAPFOHNDRAXYPZIIURNTSFISOQHZRKRLANRGSBDXWIJJEVSCEXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ValuesIf #2", msg == *msg_d);
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
    msg.setTimeStamp(0.768593267906637);
    msg.setSource(27274U);
    msg.setSourceEntity(33U);
    msg.setDestination(39376U);
    msg.setDestinationEntity(69U);
    msg.op = 0U;
    msg.version.assign("GJEOBSQIFFYDSUNBWSDMQYEZBTOOAJIPGPCIAQJSXUHFFOYEBQERUACDVMVAPQUMBVVGZYXRXRPWKDSKEUPOJMYYXGIRRCBDLGLOZEFZYK");
    msg.description.assign("DLURTFUWOTUWPWFUZTMMKZYPIYRZUEHZAOAQYQRFPWGWBUPMDFCPVODHNEKYBQTQDBSBOHGHMVITBTXJTMVMOALSOFTTFCNTZLSLMHAGGVXHFQKWJFVXUYGKNNENOJWCEXOCILNRJEYRGIZSDMQXYXUJCMDQFDVJSCDAVJOHAUDBNQRYISVZVEHZRBQSHASNKKEPEGINRAXIPGCICWICWYUENJCK");

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
    msg.setTimeStamp(0.14821810026795346);
    msg.setSource(40219U);
    msg.setSourceEntity(116U);
    msg.setDestination(20287U);
    msg.setDestinationEntity(15U);
    msg.op = 14U;
    msg.version.assign("PDKPWLWBNHGANJOZDSDFOUZEAQWIXZRXVNAGYMIZLSYGJXQRCHFJGULBDXFAILEUHXQAPLFJVVVTRHZBSI");
    msg.description.assign("UOJJFRWFMDKMTCPNMCXTWYLLCTIAPDSAHXHBOCNVYWKBMKWIXZEWBZZQJLMAQZUZSBAFOCSTAHOTDWXIICAVGRRBYOJMCVJEFKNRFJYVKAGNLIUZHRDLUBGUYHCQFYHFXNEJOOVZEOMBPILPTDNZQMGEEJGHZGNBPAGBKUPKZWSSDQWANVQLRFROSESIPJCHUOMLDKQNPTJVNTIXHDUXEYRSSALXRTKPPBTERQGXFWEIVUMIDVQYYSKFD");

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
    msg.setTimeStamp(0.05835489879747413);
    msg.setSource(5166U);
    msg.setSourceEntity(176U);
    msg.setDestination(5111U);
    msg.setDestinationEntity(157U);
    msg.op = 239U;
    msg.version.assign("LFAPDJKQUKHRTPWFATVUJRWONHVWFSBUYSNSBAFTLNEXBHMRDOXICBGIAPDTQKCBOOTXUOSFUOVOPWESEYYSRBYCHFRLXSOHALLQWSZNJMWDJGZUGFEJVDHNXXPZTIPYFKLUPDD");
    msg.description.assign("BAVJVGMNYHBFLECTXFGDCLSMVMLYLCDTIJWKPQHZRFDPUQANLRKPKLOEXERZBKTDCYERDIPAMRGUTJMQBPNKFTRLHOLIKXQYXSSYOVZWOQNWUOZSFLAYGWWVGMBNBBJMZIBMJIZUAAMXMXXVNGWU");

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

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.6131428852876297);
    msg.setSource(58272U);
    msg.setSourceEntity(39U);
    msg.setDestination(57707U);
    msg.setDestinationEntity(227U);
    msg.value = 0.6604893247273571;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.24045728207725325);
    msg.setSource(54610U);
    msg.setSourceEntity(182U);
    msg.setDestination(58588U);
    msg.setDestinationEntity(156U);
    msg.value = 0.1232762778886829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.586097598572772);
    msg.setSource(17490U);
    msg.setSourceEntity(225U);
    msg.setDestination(13542U);
    msg.setDestinationEntity(254U);
    msg.value = 0.19361064281919127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.7562529426539224);
    msg.setSource(19590U);
    msg.setSourceEntity(19U);
    msg.setDestination(34661U);
    msg.setDestinationEntity(233U);
    msg.value.assign("EZOUVVYQESCMQFKQNREOZZSBMGRYJLDWZMHAQGYCHVAPJUGRXDIWDWEHVCRNOOEBTTVLHJDYBPGEWPXAYJXDUBLBZPWFPHSHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.9439876670468841);
    msg.setSource(37306U);
    msg.setSourceEntity(152U);
    msg.setDestination(48934U);
    msg.setDestinationEntity(163U);
    msg.value.assign("EXHEJZLBXYGPGQSKNAVRTLJOKJNYYBAQSSBNGTJDPJDOIYIRRIMUOYQESCTEDQUSGHPFCXCCTAXVLDFXYMAAUWNYEROAHMUHHUQWMPSUIEWGVIMCLVZDXMZGEGBQWN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.4914760109474924);
    msg.setSource(22600U);
    msg.setSourceEntity(132U);
    msg.setDestination(55174U);
    msg.setDestinationEntity(161U);
    msg.value.assign("ZJIVUDQEWWSORIJPXONPMBQLGHFJZNNZXUKRWHWHPCSTREBOKPAIGXYDTYXTJIDYCDSZFCIERBUZVTQMAOGUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #2", msg == *msg_d);
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
