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
    msg.setTimeStamp(0.725067194351);
    msg.setSource(38872U);
    msg.setSourceEntity(115U);
    msg.setDestination(48590U);
    msg.setDestinationEntity(21U);
    msg.state = 181U;
    msg.flags = 140U;
    msg.description.assign("CNLNAKNKFXYZHQGUZPOJMGHSFCOAIYRZOBOUOQACFBSMXUIBVTCDUKJVZIXDBSTXGHFLWYWQELZACIPRWMDLUKPGTKLMTNBYTVFVWRKIWNPVNWOSMIPUJYYTAPVWXEMTLVKQCFJDXBOJYGHJWVDIVRIGAQIBTHGQXEGVOLHLLJFEWCCNYZFCZPJRSESXIOTDATXHFBDWLAMQUUPRSRCSZUMDNSFNEEMQDJREGAUHRDXKASPOGYBKKENP");

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
    msg.setTimeStamp(0.148739572878);
    msg.setSource(23797U);
    msg.setSourceEntity(75U);
    msg.setDestination(24514U);
    msg.setDestinationEntity(66U);
    msg.state = 6U;
    msg.flags = 220U;
    msg.description.assign("MRLVYPWFYXTDQRJLHXSLLNIBKFUSDNXLRSZYORZZYJUJEQXWCKMOHCHDBVLXOKVOPFJPLGCGXIAGDQNUOJVTYRDGAJYAQZEUMWCNKQHRVDYSTSEZAGNIQIEFWHLMPAKRPKGYCHPOQEPVJN");

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
    msg.setTimeStamp(0.933990321991);
    msg.setSource(27943U);
    msg.setSourceEntity(87U);
    msg.setDestination(39256U);
    msg.setDestinationEntity(180U);
    msg.state = 251U;
    msg.flags = 59U;
    msg.description.assign("XJKOXGVTMFHNQURXIVYSIEVGBBFSEKABOOMAXDZDEDVWPQHTXCZFOQCNWGUVAEICDWFRFABNTWCWCKXJNBNRIBVRHWGLQKIMGLTUJQPDWYLTURTJQWKFGOEPNYGXLTMXURIQHMQBKKSDLPGNUONNIXGBPZLARAKRBYCJM");

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
    msg.setTimeStamp(0.731037223416);
    msg.setSource(33345U);
    msg.setSourceEntity(129U);
    msg.setDestination(49988U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.546190444512);
    msg.setSource(60961U);
    msg.setSourceEntity(91U);
    msg.setDestination(2618U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.111115018851);
    msg.setSource(62413U);
    msg.setSourceEntity(41U);
    msg.setDestination(52557U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.330887682195);
    msg.setSource(873U);
    msg.setSourceEntity(141U);
    msg.setDestination(48681U);
    msg.setDestinationEntity(41U);
    msg.id = 65U;
    msg.label.assign("TRHQAQNQNOXZRTYYODVKMTTZYTXSJMSCZLFFCPIBAJHCIUEMALOKCDSGDSWRVUXQSHWUIZKWLXLGJXSGAKQNROWEJTBYDGXMTAVOXQNBNRZPVLPQLUNWCBQZKCS");
    msg.component.assign("UACXOWSBZJVMPVXGIQUVWFBMMBFWJPZBMZMRVOIVHLTGWJWBMQJGPRAURDZHYKHIRWEJAALUYPJYTOCXVL");
    msg.act_time = 6465U;
    msg.deact_time = 51768U;

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
    msg.setTimeStamp(0.456529628425);
    msg.setSource(14830U);
    msg.setSourceEntity(248U);
    msg.setDestination(36173U);
    msg.setDestinationEntity(225U);
    msg.id = 176U;
    msg.label.assign("HWQDVASWWJBFGDZUPTXVJHUIGWWWRNQLMYVHNHJGPVNNMIYQKXHSIROHJUAKDCOOLINZCCFWAWVIZYBSLJJCZPDFXPKTOCVZSQVKNIBSVHIHSFOCFQRMGBFBKPSGJBZANYMXNOKZQUESTCXUCBEDMXTRPAXWYGTARVOBDJMGPRPQPIGXMRFLLEFYFELKDBYURORPYT");
    msg.component.assign("PMFIEILKOSDJNAXJOZDSPILBCHWBFNWDYUYZTZVSNICYPOAHVYUGDANEREJKJOCBTFLNRQHVYDKXPFUQLZMXKGAWAUKKHUSIFZIEJHTZKNLLUBWCZRUEBHELQOGWBGGXEOTE");
    msg.act_time = 38222U;
    msg.deact_time = 22402U;

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
    msg.setTimeStamp(0.883077444822);
    msg.setSource(11966U);
    msg.setSourceEntity(13U);
    msg.setDestination(15770U);
    msg.setDestinationEntity(128U);
    msg.id = 221U;
    msg.label.assign("FHZBPWDVZJGKYTGLMRAJGVUWOVBFEUPTHRWUNPFZMMDRGEBLZVTKFALUAIMTFXJNHJEQAMVYROTXHEWDYKGHRRUSQCJKTRNXSQZXVGGYVMXCYNCYCIWSJHKAEYDBEQSMFXPNARLWHDBMXSVAZEMUJKOIJLCSPISOSFWLTCTFOXHUUWLAFG");
    msg.component.assign("GCMWGNAUPVHWTKBQYUNJDQZWUWSREBIVJLMNJPIHGZAQBQUOAMSTVHZNTOXKOSRSIJBVLEVQX");
    msg.act_time = 33917U;
    msg.deact_time = 47092U;

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
    msg.setTimeStamp(0.0678541146261);
    msg.setSource(16529U);
    msg.setSourceEntity(17U);
    msg.setDestination(22362U);
    msg.setDestinationEntity(225U);
    msg.id = 179U;

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
    msg.setTimeStamp(0.660437261615);
    msg.setSource(32351U);
    msg.setSourceEntity(73U);
    msg.setDestination(35901U);
    msg.setDestinationEntity(230U);
    msg.id = 108U;

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
    msg.setTimeStamp(0.733237158993);
    msg.setSource(64393U);
    msg.setSourceEntity(143U);
    msg.setDestination(40723U);
    msg.setDestinationEntity(163U);
    msg.id = 91U;

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
    msg.setTimeStamp(0.0945376091693);
    msg.setSource(34741U);
    msg.setSourceEntity(191U);
    msg.setDestination(54928U);
    msg.setDestinationEntity(63U);
    msg.op = 90U;
    msg.list.assign("KAHGBEBFHTBPSMPVGAWHJFQRXMKHQLEICPFDAJVOBHGSYXZUQDAKXXCOLZMJCTEJYCMTOSFVJK");

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
    msg.setTimeStamp(0.81356635562);
    msg.setSource(62176U);
    msg.setSourceEntity(154U);
    msg.setDestination(34428U);
    msg.setDestinationEntity(1U);
    msg.op = 232U;
    msg.list.assign("BRPIPSTKTXYHXRHWQLAELGBFEVYFWDPNDDDGFISSEQLOGBAMCHTXSHYEVVYIKMKWJXLUKUBLACFIJZYQVUTOGJPKAXOJY");

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
    msg.setTimeStamp(0.611733242437);
    msg.setSource(60345U);
    msg.setSourceEntity(237U);
    msg.setDestination(16651U);
    msg.setDestinationEntity(133U);
    msg.op = 158U;
    msg.list.assign("HPZTKWBPQNVYFIHLYNRUYOAIDKJMFHDTBROOXOW");

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
    IMC::EntityControl msg;
    msg.setTimeStamp(0.285410398794);
    msg.setSource(47695U);
    msg.setSourceEntity(114U);
    msg.setDestination(62772U);
    msg.setDestinationEntity(27U);
    msg.op = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.0968085855567);
    msg.setSource(19631U);
    msg.setSourceEntity(183U);
    msg.setDestination(10087U);
    msg.setDestinationEntity(137U);
    msg.op = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.20033072385);
    msg.setSource(62451U);
    msg.setSourceEntity(9U);
    msg.setDestination(44444U);
    msg.setDestinationEntity(50U);
    msg.op = 200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.119515175108);
    msg.setSource(9266U);
    msg.setSourceEntity(133U);
    msg.setDestination(30737U);
    msg.setDestinationEntity(156U);
    msg.value = 97U;

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
    msg.setTimeStamp(0.496935229921);
    msg.setSource(48889U);
    msg.setSourceEntity(35U);
    msg.setDestination(57285U);
    msg.setDestinationEntity(65U);
    msg.value = 140U;

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
    msg.setTimeStamp(0.15104845289);
    msg.setSource(10343U);
    msg.setSourceEntity(81U);
    msg.setDestination(775U);
    msg.setDestinationEntity(241U);
    msg.value = 6U;

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
    msg.setTimeStamp(0.939726451154);
    msg.setSource(23753U);
    msg.setSourceEntity(155U);
    msg.setDestination(51294U);
    msg.setDestinationEntity(118U);
    msg.consumer.assign("AJRMDKJMVSYRZCGATFUSMYNPLDQCSZDZNGSEOVIRENTSRFZLAUGQXMHMVWKNQGDSUJXLPGHQTTBYRAYVKBOHQTOLALIQSLEKBVXYGKWFMMPEGNFJTRSWEIAZMYLHNJPXFQRSOYZCQRNTDWPOJFKOXUHZKVFWDFPVXHCDDCJEERFIJPITVXAUPUEMUOJBNABVYSVCOGLCUIWOKHEMBWBBBNTAYDWNIFQ");
    msg.message_id = 12700U;

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
    msg.setTimeStamp(0.868968819652);
    msg.setSource(16182U);
    msg.setSourceEntity(185U);
    msg.setDestination(28105U);
    msg.setDestinationEntity(193U);
    msg.consumer.assign("YAZUVXUQIROWTTUZXUNBIDKVJGANXKXLWDKWHXUVATQQWBBXMHLNFGCISAOITJHKKAPYSOBPFRZCYGQNVSGJCGNDNPIGJGPMLVSZF");
    msg.message_id = 59368U;

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
    msg.setTimeStamp(0.653428670433);
    msg.setSource(45297U);
    msg.setSourceEntity(165U);
    msg.setDestination(1558U);
    msg.setDestinationEntity(5U);
    msg.consumer.assign("LVGCFVJBDOYSBTAUSMOVCGJXQVLZYVHYYXZODPCWMZQGUGPKGJAIKBIKAZLXQKDTYSHYFWMRCYIXJBEFOCRNDTXGRPQXEWLUVNUWIRYGKNCFAFWCKPXPHWTKJOPICDOZDNKDBXNPIHEHRNQMKGOJVPAOJFBWNHERPZTFSAZZTAWAYLEDUHZNSEJTWRBXIVEZEFMRBSQRNMU");
    msg.message_id = 28402U;

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
    msg.setTimeStamp(0.835121585282);
    msg.setSource(62472U);
    msg.setSourceEntity(149U);
    msg.setDestination(24802U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.969788904912);
    msg.setSource(41149U);
    msg.setSourceEntity(229U);
    msg.setDestination(40504U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.685490232453);
    msg.setSource(5652U);
    msg.setSourceEntity(201U);
    msg.setDestination(18096U);
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
    IMC::Parameter msg;
    msg.setTimeStamp(0.66579606299);
    msg.setSource(24728U);
    msg.setSourceEntity(233U);
    msg.setDestination(45056U);
    msg.setDestinationEntity(152U);
    msg.section.assign("UWURNOWEVJGPEMUHDWCRHMQCYTHSASOCIXSNSKNXDWZVROTLQQWLORJZQ");
    msg.param.assign("QYCGNLPSBJYKQPZLTKHLMHBAGBHWLKFQINTBFEIXDVEOSWRBYKJSXAOSJMMQLPQE");
    msg.value.assign("IOORWYOTTIEACAVVJLULTJXILNRKFSRWGKBFFZTSZLQQXBDSHPCOPALGIHRZVIMQJZOGQLOFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.840885939747);
    msg.setSource(10181U);
    msg.setSourceEntity(56U);
    msg.setDestination(46653U);
    msg.setDestinationEntity(239U);
    msg.section.assign("YHYWAZVPWRNIVYJDXMOZXTPZMAYQCWHINEJMZCOJRMUXVSDDTGAZBTBHIFABZKZEQQMBDJKCVFKAIEUYPDVRLEQFJSHQFCGXXLNTIFOIVMQEODXFQIOMBUTTPGEAWLAYPGHUFKTARGPCONLRUWJQSCPCWXNKNXFPCFMKGQKBTVEWLEMEOM");
    msg.param.assign("IKCJEJMMGWEIKAQZZXLSVVTCPKPTHGGFRUCMKGYEVTVRYUSOPLVCPTSABXFLBENWUJAYWRSQRIMLGNLWXDXLYHPQIZOBEVVOCGWKRBSNWGMXZQ");
    msg.value.assign("NJAUGQJSUCVLRLMASWICARZBEDCLIMIDKXOWDNHYPIAHVOPBHYEFGKAZUYSYCQHEWWDCUKNHFSKENKZMRRVMCRUUUTJBJGGQTTUDOESBLPQZPNYIBMSQVZRXKTAGGDJIFJPBTMLFIKNLIQCGALXFPFHXRNOYXWWDMZLNHCUQVDZYBJOOWIEORFWTMJVHXNKTLWJAGDHXXSPWQGZSSYUBXOFIVPQEKLES");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.314464382188);
    msg.setSource(4930U);
    msg.setSourceEntity(43U);
    msg.setDestination(49785U);
    msg.setDestinationEntity(130U);
    msg.section.assign("TEQCEQQAHWIWHBSANSGWVBDTFTONYJFEPPMLVWVQEARQNIRFGUSQWPQGBUAMOOCKWISYRJPYXFKPETCIHEEVSXOBIICDATQPDLSBZCOYJLHFOPGD");
    msg.param.assign("RJZPKZVQMNRNIIRJYXDYAOFLENPQHGKYUEFNEDIHRYSKCJMRPGTIRWHJYOBMGDPSFJGIXWCQMNJVLBWIVLCATJDLLDXGBKVLITMOQMSONIKUKICQYKOUFFZNTIXTKDBGTQQJBCFFEYRHWTHB");
    msg.value.assign("EPZBIEWYVGEUIFNIVWGBNZMQGZHAXIOGOFTZWWERZXDCEXTPHECOEOQBJISPQYYKMRBKMFGCKLKYYJDKXIHZNPXRXMKDAGZENVSXPUBNPTHNULLACQJGCDJUAUCIXWFZVDJMQAPAJHTTSRSLZZBDRSOXVNFHMOGBJHBVKLQACVWAJKALBMWCNEURTBKTESPMDMMDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.995212764481);
    msg.setSource(27466U);
    msg.setSourceEntity(216U);
    msg.setDestination(41278U);
    msg.setDestinationEntity(214U);
    msg.op = 149U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("WDHVUCXNGNOKTP");
    tmp_msg_0.param.assign("SOMPEVKPXDYTJDJPZWBVRIZSSMUCEQS");
    tmp_msg_0.value.assign("BYHINGTQNBGVLCDUPFERGZFCXNOQGXJLTEHPNGVWEMOPQHWANWDVDIJBBPDSHZGELNRN");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.634460546569);
    msg.setSource(55170U);
    msg.setSourceEntity(62U);
    msg.setDestination(21518U);
    msg.setDestinationEntity(160U);
    msg.op = 106U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("VZSIVMMXFAAQRAYZFIHEXSGGXQERDINGQISXJKICQMVVLLWKGFATYKEPYIZLNYDEHUWRQGWJUEOFOIBOKJAUSDHGUXATRMRNYRNDCUTJKVWYNTVXYCARNBXNWWOMOOKKPPXCPHNFZLAUWSUTDRLRBLBFPZCHNYJVHQFDUZMJSQSQHIEJKGFOCLARUJBBPBEPSCCEWODTMWZDFWYDFDHOKVHISLAZCMXQJEGTHMCNOU");
    tmp_msg_0.param.assign("IVIXQZDAVFVDFNNJBYPMUVVHSQHXPJMCIWHCRQMRKKJMIVXUGEGVAJMXZADJVLJBHAAWWFSNOSWTLZWPLJTMWICNUDBZFOGLCYUOBRPKNLKUPXGDTRXQQ");
    tmp_msg_0.value.assign("LJFVGOSYKTJJYKPGPNYEOXDRDQEDKVMAQSJYMIVINOFBAGECBAOKJZTCTWRMOQBYOWINOZKORNXXQWLHQDIXDYJDCMSAIINRTHMSVLFCEQAQXJXWUEWLMSUYBKQAQVXPPGSWBRCVEZXHZNDJW");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.608041226892);
    msg.setSource(60355U);
    msg.setSourceEntity(167U);
    msg.setDestination(43565U);
    msg.setDestinationEntity(193U);
    msg.op = 105U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("FDNMMNFKPRJAQOXEEZANTUZDKKVHCHRWDRTUHEFLCRSMLQQAGJOOCIMUDRGLQHJRAWYYJNUIBGDIMWPSPUPPWFAKEXIFXIXCVLLOUXEGXXNQJAHZRFAQFXZSZVKDKSRJVIZUKVKBJDVZETZFB");
    tmp_msg_0.param.assign("RWTVGFDPGLXVHZVKDVBDLTPUBDXESWBEBYKAXNEXRPAQZQWQDSWQOHXCTMOKJLRIJCYPMTZAQWCQBUZTQKGOSAPICHKCPECYIWSNSMOEBIRMDTKQYYDGNBTUQURHJAKGCZOMPFYFINRMAADLFGUJJWLWTEWOILURV");
    tmp_msg_0.value.assign("JELGHHBPAHIYCREWKVWBLVUTANLFMPFWDGKZWMRXFCKIROABWEYRGQJJNUYMGQQMZQNFGTQERPOVSEZIAZWJFWHZH");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.422862728774);
    msg.setSource(7930U);
    msg.setSourceEntity(80U);
    msg.setDestination(52061U);
    msg.setDestinationEntity(69U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.0906850026746);
    msg.setSource(60187U);
    msg.setSourceEntity(177U);
    msg.setDestination(28352U);
    msg.setDestinationEntity(226U);
    msg.op = 66U;

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
    msg.setTimeStamp(0.88452039081);
    msg.setSource(16461U);
    msg.setSourceEntity(221U);
    msg.setDestination(5155U);
    msg.setDestinationEntity(215U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.190908481964);
    msg.setSource(53383U);
    msg.setSourceEntity(184U);
    msg.setDestination(55019U);
    msg.setDestinationEntity(79U);
    msg.total_steps = 2U;
    msg.step_number = 129U;
    msg.step.assign("NUEJLKSKFOYKWOTWHPZGEZRQMYPQGVBAXYDDSOIOKFKZWPMXPYQSTRLSQWVIEQGSCPPRLDEBGHLTRUGGVBJYFOCGOXHMWHEGTZABWKXVCQTRHREMBFMIKWZPFHWAJJILDCTDASCCBWUVLRGLFEOMDLNWRY");
    msg.flags = 118U;

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
    msg.setTimeStamp(0.00353685792885);
    msg.setSource(516U);
    msg.setSourceEntity(70U);
    msg.setDestination(21622U);
    msg.setDestinationEntity(231U);
    msg.total_steps = 12U;
    msg.step_number = 3U;
    msg.step.assign("JFBXOLDBPKREXTYJQQRVPQQMDQ");
    msg.flags = 100U;

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
    msg.setTimeStamp(0.498274735049);
    msg.setSource(27788U);
    msg.setSourceEntity(16U);
    msg.setDestination(50908U);
    msg.setDestinationEntity(50U);
    msg.total_steps = 175U;
    msg.step_number = 183U;
    msg.step.assign("KGSIEBAOHBHDGAOEYRNYJLIHKTBLBNVLDDKYBYTWXJMPSDUSJXZZLTGNEKGCKQQWAMKVROSKNQQWAEIZGYRMILSJEVXXTFNXTCZIUFBPPJGTPRYBCMOLUDWXCUGSHSVKROMZZGMYBPSWDADAXQOVRWRKLVNHDIDHBUEFLAMAFTPSCFWZUFPHJNIOVNAWPQHCQUWFFCNUGRVZMSMURTLU");
    msg.flags = 11U;

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
    msg.setTimeStamp(0.16813339246);
    msg.setSource(24332U);
    msg.setSourceEntity(167U);
    msg.setDestination(2291U);
    msg.setDestinationEntity(87U);
    msg.state = 26U;
    msg.error.assign("VWHBSAQCDQZLCHRPUHIOWTGYDTAZWRMTPEFQIMKVQVOBYEJXCREEKZOPXISGAUFEXJHGLGFDKMCNHYXNABIFGZRLLUYYGJTBQXBIZGOKDOFLMREHSRJTFIDJQNIAFOUUQXDTPDVNZGSZMHWPZBMEMKTLAKJTRYHBEVFULBYYJXRZ");

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
    msg.setTimeStamp(0.529455828647);
    msg.setSource(12062U);
    msg.setSourceEntity(18U);
    msg.setDestination(27832U);
    msg.setDestinationEntity(130U);
    msg.state = 138U;
    msg.error.assign("WVDITAQSFCDEXKZQVGTBDKTMIPXHJHWOSPXLPYCNJSZYCHSLWIDMCIQN");

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
    msg.setTimeStamp(0.780997024415);
    msg.setSource(21543U);
    msg.setSourceEntity(153U);
    msg.setDestination(9634U);
    msg.setDestinationEntity(185U);
    msg.state = 195U;
    msg.error.assign("SUERJEWBIYTZXDCMQGPGJVE");

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
    msg.setTimeStamp(0.268874685175);
    msg.setSource(61183U);
    msg.setSourceEntity(160U);
    msg.setDestination(52619U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.25668110496);
    msg.setSource(41803U);
    msg.setSourceEntity(116U);
    msg.setDestination(3520U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.135910004949);
    msg.setSource(40636U);
    msg.setSourceEntity(206U);
    msg.setDestination(49044U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.040390576081);
    msg.setSource(26230U);
    msg.setSourceEntity(27U);
    msg.setDestination(30072U);
    msg.setDestinationEntity(162U);
    msg.op = 21U;
    msg.speed_min = 0.493218453883;
    msg.speed_max = 0.653715471784;
    msg.long_accel = 0.330152899358;
    msg.alt_max_msl = 0.940696980235;
    msg.dive_fraction_max = 0.729884475816;
    msg.climb_fraction_max = 0.502514135002;
    msg.bank_max = 0.848655965998;
    msg.p_max = 0.38074515523;
    msg.pitch_min = 0.438149210991;
    msg.pitch_max = 0.981331506256;
    msg.q_max = 0.00983794322451;
    msg.g_min = 0.111596494477;
    msg.g_max = 0.717935696343;
    msg.g_lat_max = 0.175936674808;
    msg.rpm_min = 0.593380708187;
    msg.rpm_max = 0.929156156523;
    msg.rpm_rate_max = 0.186143874954;

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
    msg.setTimeStamp(0.815933191429);
    msg.setSource(49628U);
    msg.setSourceEntity(71U);
    msg.setDestination(51530U);
    msg.setDestinationEntity(201U);
    msg.op = 149U;
    msg.speed_min = 0.658750892499;
    msg.speed_max = 0.250558663606;
    msg.long_accel = 0.0575052560725;
    msg.alt_max_msl = 0.542990060748;
    msg.dive_fraction_max = 0.584499149275;
    msg.climb_fraction_max = 0.965524874158;
    msg.bank_max = 0.599442569032;
    msg.p_max = 0.210065946864;
    msg.pitch_min = 0.472515730556;
    msg.pitch_max = 0.553240568186;
    msg.q_max = 0.818084615797;
    msg.g_min = 0.912115644645;
    msg.g_max = 0.246202659279;
    msg.g_lat_max = 0.959386321675;
    msg.rpm_min = 0.63421122153;
    msg.rpm_max = 0.900053931638;
    msg.rpm_rate_max = 0.658231554584;

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
    msg.setTimeStamp(0.418688568269);
    msg.setSource(42590U);
    msg.setSourceEntity(99U);
    msg.setDestination(8331U);
    msg.setDestinationEntity(251U);
    msg.op = 117U;
    msg.speed_min = 0.495616272319;
    msg.speed_max = 0.521240344406;
    msg.long_accel = 0.723102730483;
    msg.alt_max_msl = 0.487288549266;
    msg.dive_fraction_max = 0.878665049632;
    msg.climb_fraction_max = 0.462539115482;
    msg.bank_max = 0.691867897085;
    msg.p_max = 0.440264940791;
    msg.pitch_min = 0.253684701128;
    msg.pitch_max = 0.315231017509;
    msg.q_max = 0.989758609401;
    msg.g_min = 0.0169751867817;
    msg.g_max = 0.0273033000916;
    msg.g_lat_max = 0.413378572645;
    msg.rpm_min = 0.107211557446;
    msg.rpm_max = 0.816964318778;
    msg.rpm_rate_max = 0.177568055224;

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
    msg.setTimeStamp(0.200216597036);
    msg.setSource(57793U);
    msg.setSourceEntity(48U);
    msg.setDestination(27486U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.713609440723);
    msg.setSource(16215U);
    msg.setSourceEntity(150U);
    msg.setDestination(19391U);
    msg.setDestinationEntity(96U);
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.798962325389);
    msg.setSource(51578U);
    msg.setSourceEntity(17U);
    msg.setDestination(51355U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.889502071366);
    msg.setSource(10757U);
    msg.setSourceEntity(200U);
    msg.setDestination(40035U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.679089650981;
    msg.lon = 0.669545257204;
    msg.height = 0.733088597213;
    msg.x = 0.433264299853;
    msg.y = 0.761491267152;
    msg.z = 0.197285352004;
    msg.phi = 0.436408461682;
    msg.theta = 0.82084243941;
    msg.psi = 0.87851031886;
    msg.u = 0.166549147527;
    msg.v = 0.961378111235;
    msg.w = 0.478593466979;
    msg.p = 0.804464541595;
    msg.q = 0.610138432754;
    msg.r = 0.961641659267;
    msg.svx = 0.390956774946;
    msg.svy = 0.620273429288;
    msg.svz = 0.0917607141935;

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
    msg.setTimeStamp(0.635820593693);
    msg.setSource(51850U);
    msg.setSourceEntity(92U);
    msg.setDestination(26476U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.348627539581;
    msg.lon = 0.590648498679;
    msg.height = 0.141280278405;
    msg.x = 0.555205523339;
    msg.y = 0.290115337624;
    msg.z = 0.486507806672;
    msg.phi = 0.715369184714;
    msg.theta = 0.68382225672;
    msg.psi = 0.222357262435;
    msg.u = 0.452266377585;
    msg.v = 0.885857904564;
    msg.w = 0.527714732127;
    msg.p = 0.674010871396;
    msg.q = 0.460043322304;
    msg.r = 0.425282571618;
    msg.svx = 0.160232879114;
    msg.svy = 0.547004005575;
    msg.svz = 0.0481056755851;

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
    msg.setTimeStamp(0.0110302243391);
    msg.setSource(36332U);
    msg.setSourceEntity(209U);
    msg.setDestination(65246U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.960251201127;
    msg.lon = 0.163467531188;
    msg.height = 0.866953073392;
    msg.x = 0.866620935019;
    msg.y = 0.818156527774;
    msg.z = 0.948479576748;
    msg.phi = 0.467260076406;
    msg.theta = 0.0538789995721;
    msg.psi = 0.243509938661;
    msg.u = 0.0277863457684;
    msg.v = 0.351490340074;
    msg.w = 0.245648398685;
    msg.p = 0.536380535968;
    msg.q = 0.839106706163;
    msg.r = 0.648097410184;
    msg.svx = 0.564511443319;
    msg.svy = 0.321744950506;
    msg.svz = 0.435147273659;

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
    msg.setTimeStamp(0.676757529035);
    msg.setSource(10969U);
    msg.setSourceEntity(123U);
    msg.setDestination(59253U);
    msg.setDestinationEntity(27U);
    msg.op = 117U;
    msg.entities.assign("HKDNBRJPBJTJOUREBMKSJRGOCSMTFAWQEJIMJUQMAYDOOWNNLFCVRHFTIIJVXIGULNSXXIWYIZGAVDAPYHMOZMVEZBKZLPMHWXPBDOKHRLQEYNLRGNTITCPKKLBXPCESANDJMPUSYYVVUUFOIDZDHEFSAJGEZCKMBRXNGVXQBHLCSZKVWVFSKHYTAIWTGRBWYLUUXGSTLSPDNRUEHRZHKLGFQYFNBZQCUEQWDACWXVFOPXJPYEDAQCZFQGTW");

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
    msg.setTimeStamp(0.650991585507);
    msg.setSource(24681U);
    msg.setSourceEntity(243U);
    msg.setDestination(16981U);
    msg.setDestinationEntity(70U);
    msg.op = 127U;
    msg.entities.assign("JQHABKAMFCIIFGKCSNEMVFCYZPRSQTEEINJVMSXPKOWQWKXSELQJEAQVNPUILZTOMVNYBFYXLZOERKGCM");

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
    msg.setTimeStamp(0.00240820965522);
    msg.setSource(43588U);
    msg.setSourceEntity(116U);
    msg.setDestination(34305U);
    msg.setDestinationEntity(51U);
    msg.op = 14U;
    msg.entities.assign("BEJROIPFHETSKEEEQXRICBFYNYCUTHKSLEGVMYMFYCPJVYSTXNBZCHJWQVWDCQCSDAPXSAZNLPDGFJASPSMKAACSVLYKXMHZBZUOHGINAYVUVCJPLWPTWFXQPZCEIUOLBAIFWGITDFFSIGXULJO");

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
    msg.setTimeStamp(0.444170216557);
    msg.setSource(12520U);
    msg.setSourceEntity(88U);
    msg.setDestination(45769U);
    msg.setDestinationEntity(147U);
    msg.type = 152U;
    msg.speed = 51389U;
    const char tmp_msg_0[] = {89, 18, 98, -31, 25, -23, -10, 120, -41, 16, -39, -64, 38, -26, -7, -63, -30, 22, 88, 67, -111, -100, 52, -35, -57, 70, 111, -99, 2, 27, 39, -55, 91, 118, -127, 22, 76, -18, -43, -128, -62, 90, 88, 104, 98, -45, -53, 95, 59, 38, 30, -46, -41, 97, -57, 31, 93, -47, -2, 26, -79, -110, -2, -114, 50, -127, 119, -40, 109, -61, 9, -29, 14, 87, 83, -18, -57, -109, 38, -5, 117, 47, 32, -102, -103, 96, 53, 97, -26, 109, -80, -105, 52, -98, 84, -1, 87, 123, -90, -51, -117, -17, 30, 80, -123, 77, -26, 14, 32, -116, 57, 62, 102, -97, -18, 33, 36, -83, 23, 35, 5, -128, -101, 64, -46, -23, -99, 37, 114, 5, -11, 99, 59, -54, -108, 96, 102, 76, -103, 11, 60, -17, 15, -61, -2, 16, -83, 12, -88, -104, -18, 33, 60, 54, 87, -9, 126, 43, -75, -24, 60, -29, 81, -65, -98, 121, 3, 6, -37, -100, 58, 43, -74, -1, 11, 59, -99, 71, 30, -55, -122, -14, 52, -37, -96, 76, 95, -89, 91, -78, -122, -64, -112, 49, 16, -45, 97, -73, -112, 6, -61, 61, 97, 30, -29, 15, 108, 90, 30, 104, 27, 38, 3, -54, -71, 62, 28, 19, 13, 47, 85, -85, -59, -52, 49, -6, 71};
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
    msg.setTimeStamp(0.450878486056);
    msg.setSource(55026U);
    msg.setSourceEntity(1U);
    msg.setDestination(1247U);
    msg.setDestinationEntity(54U);
    msg.type = 161U;
    msg.speed = 60033U;
    const char tmp_msg_0[] = {2, -10, 106, 61, 47, -55, 26, -45, 113, 34, 14, 10, 65, -83, -125, 3, -69, 115, -125, -110, -100, 60, 88, -89, 63, 95, -14, -64, -61, -37, 79, -62, -52, -77, 101, 126, 37, -10, -35, -66, 17, 95, 58, 94, -56, 2, 59, 28, -107, -14, 5, -105, 97, 107, -88, -54, -49, 63, -7, 76, 11, -128, 59, -78, -34, -106, -3, 86, 23, -122, 91, -72, 2, 122, -52, -42, -54, -117, -82, 93, -101, -52, -68, 67, -32, 38, 99, 16, -24, -127, 97, 49, -59, -22, 37, 111, -69, 84, 110, -42, 105, -36, -96, 114, 84, -84, -96, -10, -92, -122, -61, -27, -90, -41, 52, -59, 93, 67, -102, -75, -43, 61, -3, 58, -55, -116, 40, -126, -10, 25, -18, -120, -25, 36, 5, 38, 34, 97, -56, 118, -62, 79, -98, -9, 75, -71, -53, -40, 47, -65, -25, 30, 38, 12, -28, 35, -48, 104, 125, -52, -55, -70, 91, -13, -124, -62, 38, 40};
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
    msg.setTimeStamp(0.915930091285);
    msg.setSource(35281U);
    msg.setSourceEntity(170U);
    msg.setDestination(42499U);
    msg.setDestinationEntity(137U);
    msg.type = 3U;
    msg.speed = 63727U;
    const char tmp_msg_0[] = {-48, 104, 60, 99, -25, -78, 41, -98, 77, 111, -67, 39, 21, 85, -97, -52, 50, 25, -47, -40, -28, -25, 54, -115, 31, 66, 120, -126, 125, 13, 43, -128, 53, -48, -119, -102, -88, 34, 55, -21, -71, 112, -5, -121, 106, 107, 34, -68, 70, -27, 49, -45, -118, -46, -56, -107, -7, -105, -86, -80, -51, 99, 81, -23, -112, 120, -23, 85, -50, -77, -48, -53, -48, -49, 86, -58, -23, -46, 11, 109, -99, -29, -55, 47, 112, 67, 65, -66, 106, -78, 85, -38, -15, -54, -20, -26, 3, 85, 95, 68, -123, -7, 96, -87, 15, -3, -116, 44, 80, 40, 0, -60, -125, -124, -87, -87, 119, 41, 50, -110, 123, 80, 86, -89, 10, -4, -99, 20, 94, 122};
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
    msg.setTimeStamp(0.0353780612479);
    msg.setSource(34988U);
    msg.setSourceEntity(125U);
    msg.setDestination(39314U);
    msg.setDestinationEntity(161U);
    msg.op = 54U;
    msg.tas2acc_pgain = 0.679083164306;
    msg.bank2p_pgain = 0.352941054174;

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
    msg.setTimeStamp(0.754808455392);
    msg.setSource(12631U);
    msg.setSourceEntity(250U);
    msg.setDestination(16362U);
    msg.setDestinationEntity(142U);
    msg.op = 88U;
    msg.tas2acc_pgain = 0.571776479691;
    msg.bank2p_pgain = 0.289829013781;

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
    msg.setTimeStamp(0.0561080999496);
    msg.setSource(2840U);
    msg.setSourceEntity(48U);
    msg.setDestination(7270U);
    msg.setDestinationEntity(223U);
    msg.op = 173U;
    msg.tas2acc_pgain = 0.626787329944;
    msg.bank2p_pgain = 0.81229355146;

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
    msg.setTimeStamp(0.0542521637615);
    msg.setSource(26283U);
    msg.setSourceEntity(35U);
    msg.setDestination(64983U);
    msg.setDestinationEntity(137U);
    msg.available = 4083285850U;
    msg.value = 209U;

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
    msg.setTimeStamp(0.134010760558);
    msg.setSource(57687U);
    msg.setSourceEntity(204U);
    msg.setDestination(637U);
    msg.setDestinationEntity(237U);
    msg.available = 1158301015U;
    msg.value = 39U;

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
    msg.setTimeStamp(0.571430449327);
    msg.setSource(42918U);
    msg.setSourceEntity(105U);
    msg.setDestination(41417U);
    msg.setDestinationEntity(162U);
    msg.available = 2020572400U;
    msg.value = 219U;

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
    msg.setTimeStamp(0.555312328232);
    msg.setSource(33956U);
    msg.setSourceEntity(19U);
    msg.setDestination(51252U);
    msg.setDestinationEntity(81U);
    msg.op = 57U;
    msg.snapshot.assign("RXCDRFTHNXRNOTASXJIFCOXEQIZAPLKVQVLOMJKSIRWGLCHDPDAPNYUNQORJBHMDAPENUTJFWFEHOWSEAULZYTSQCPWUWYZLBZHLMTGKODAHIJQARIIWIZSTJNVVDJUGSEYDFMEPPCEDSMJKOBRPIYMTANDNBWZIZNWVGVLQILPUXHGFRQFKEDTYCGXLGO");
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 217U;
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
    msg.setTimeStamp(0.7534962662);
    msg.setSource(5629U);
    msg.setSourceEntity(192U);
    msg.setDestination(5084U);
    msg.setDestinationEntity(169U);
    msg.op = 33U;
    msg.snapshot.assign("MUDQLXVIMRQTEATRUAXBMILZMSGEBKTSZVDFLLPEQRKRYFBPTDWCFNSBNLNDSIIBVCVGXTUHBZQPVAWUDGJYOIWWTELVNTOKYRQONODIHRJYWFBMDCCLEOXFLBOKSAGZDTVCIBMRJZFAWTJRCPYGNUHHPXDSQPGWCFXAEZKYAPQJZQWGWEIHKHJXXCHNMYPVXNZ");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40838U;
    tmp_msg_0.off_x = 0.677025527639;
    tmp_msg_0.off_y = 0.885163103469;
    tmp_msg_0.off_z = 0.0881982502651;
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
    msg.setTimeStamp(0.250844284842);
    msg.setSource(2449U);
    msg.setSourceEntity(149U);
    msg.setDestination(24568U);
    msg.setDestinationEntity(105U);
    msg.op = 161U;
    msg.snapshot.assign("CAHRRBFVPMGOPAVEJWSRQSUKTOJJDOWTHDZYPFCMOGQKXKLQPNJNKLYVJAXFLAHHTFPUKUGMCJAEHLZRODSKBUGVFMHSMGVQLTZRDZVSWMANVBNIHLVTORWHKZQXLYEYCPZWBGUDYOMHYWGPDR");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 244U;
    tmp_msg_0.actions.assign("VSONQNBOXPIYXOJQVYWGECUPULDCROPNIOQDUGVQHFBAQKYBGPDMEODEHFGYLLDYTRNEYEZWAFSXSAHLRZVIYXHBEAJATNUEMWZHNRTTSZRZEUXEXCHSTCRCSZQCMFSTJKOQUKKJJYXBCJRWTQLXKGZPMCCJJOWOLHCFTLSVRLEINPIKJMKIBAVMHHVTGKDXVZKDQLSAWGUNAPPHIIFZGIBLFMMGGPDZKMRIVONXNQWAWFPUBUJFD");
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
    msg.setTimeStamp(0.287391983028);
    msg.setSource(8271U);
    msg.setSourceEntity(53U);
    msg.setDestination(36583U);
    msg.setDestinationEntity(120U);
    msg.op = 206U;
    msg.name.assign("OGAEWYTGRCPKNIFUWUPUELJKMSCHADTQUJTXAWLTTKJMNEOYKKPILSGQSAYREXI");

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
    msg.setTimeStamp(0.0758216368143);
    msg.setSource(36289U);
    msg.setSourceEntity(238U);
    msg.setDestination(58244U);
    msg.setDestinationEntity(112U);
    msg.op = 247U;
    msg.name.assign("KMXGVFMVBPPPPFTNTAEXSVKBTDOHDCLGTKIYWQMEOYZJXNAKQNUGEZJHINRKBWMAYPDIZULVQBNOSDNOLUWJIDLXXMILWAQFPVIIWH");

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
    msg.setTimeStamp(0.238368788721);
    msg.setSource(64854U);
    msg.setSourceEntity(130U);
    msg.setDestination(33876U);
    msg.setDestinationEntity(6U);
    msg.op = 3U;
    msg.name.assign("DYNUNAWJOLTZEMPIHDUFETKZRFDHKYRUYOQWAOJLPNLSQBDUTGOCXVMTSRJXPKOVJJGIOYANMDBMCXIVSUHXNPBLCCYWXBFWHBDEVPWZKEAQYMBQGWISHAOVVQGURPFQEAAHQWEZDGIMKJLSBGOHDPCYVLKFHCCRNGG");

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
    msg.setTimeStamp(0.721997303542);
    msg.setSource(7568U);
    msg.setSourceEntity(214U);
    msg.setDestination(18466U);
    msg.setDestinationEntity(116U);
    msg.type = 124U;
    msg.htime = 0.434800362369;
    msg.context.assign("AQMMPICIEVMNGANKCQOXEYAUSXHVVOYVXEXWINMIWZQYLYYTRKWHJMSBKOIVKFOYSEVGFKCTRCYNBSJHDDCJBGHMOUVLWHRRKEUXSSLWFRNJPUKLYXUIMFNGTXQPPISNGDTNNTFVZM");
    msg.text.assign("DAJVKQVKUKAZALGZOLVTKTBUMEPGNOACIDOADPIXWDNFREBQSUDBJPVYKWSDUHXNBQCEZBUSXXGHRESJASUOOQTPMMHRXSWLELBLWPIBMCFFIIQNNIOOSRDGXMJNFCRKGGYQQJEKCFEX");

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
    msg.setTimeStamp(0.657180190349);
    msg.setSource(59439U);
    msg.setSourceEntity(79U);
    msg.setDestination(38708U);
    msg.setDestinationEntity(151U);
    msg.type = 46U;
    msg.htime = 0.0553271505511;
    msg.context.assign("WIRSUARFDLHGIOEZSFLNSMRTSEBFXNZVKMSFKXPJGTCQGYYOEBJQGYRPHVKHNFLMEDNXVIBQFPHPRHXVZEXSYOLTACJZGOXYMXKAQBA");
    msg.text.assign("JNUDQMTDTJYGATTZKLKBGMTEIEWIPNFJZPPTEAKGOUVMIQMWOOZUIMIHQEPRBNSDYQCKVKZNLJYWNRZOLWBQUQKOHUXGRS");

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
    msg.setTimeStamp(0.286381818127);
    msg.setSource(65064U);
    msg.setSourceEntity(133U);
    msg.setDestination(54163U);
    msg.setDestinationEntity(140U);
    msg.type = 85U;
    msg.htime = 0.914800668135;
    msg.context.assign("KDOGOQZXOOPYKBIHGOLCEMMLULTFDGXRCMEN");
    msg.text.assign("AMTRINIJDYDDEDHIQPQLLIDTTSOFGLXRBOOFZCKUZFYJSUVJBADXPDUUQKOLNAXXETDWSLCWRXJSRQMKOYQMZPRHYCVMUJLSEEBKPQCAKVSYVFUP");

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
    msg.setTimeStamp(0.54326560425);
    msg.setSource(52985U);
    msg.setSourceEntity(205U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(39U);
    msg.command = 97U;
    msg.htime = 0.83090201591;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 224U;
    tmp_msg_0.htime = 0.738468220747;
    tmp_msg_0.context.assign("BYKCNZEZDREOGSTSVGLFLPBOYAYQAHTLYTRLZZQUMS");
    tmp_msg_0.text.assign("UWZEMKUMIPRBFQKMIRWTVGLGOARTXWUGYRHDLAUOQOBWPKXFYGNDWVDDAHENSPXRARRFZMZIJFE");
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
    msg.setTimeStamp(0.85687274993);
    msg.setSource(46425U);
    msg.setSourceEntity(51U);
    msg.setDestination(56961U);
    msg.setDestinationEntity(223U);
    msg.command = 159U;
    msg.htime = 0.115075393684;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 118U;
    tmp_msg_0.htime = 0.572263022131;
    tmp_msg_0.context.assign("PGPVAFOZVLFJEMRUMVTRWAKRREBHRMZHDFWAYOEGCCJREBCVDLXSXQIIOSADBLCYSQTJKXTDWHOVULQGUAKDSGYJTZFNNPDSMKQHYPQXPLHKJJKSAFKWDZVQB");
    tmp_msg_0.text.assign("WICBUUESITWJRGNDTMIKHELMUCCDJVOQXWGYCKHZOGONWAWTBOVHKZFSYIDVPRBBAFRSHOVJMQUSREFFGYISQFPLMFVXLGUYDGMHLBFLTOFXRHOVJBJMPBNZKDRBUXRCPXOSMXSMIZTNKPOMNDZRQACKCDLNIJJKKWJJBFZKECMTO");
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
    msg.setTimeStamp(0.71612116441);
    msg.setSource(7576U);
    msg.setSourceEntity(141U);
    msg.setDestination(43541U);
    msg.setDestinationEntity(191U);
    msg.command = 39U;
    msg.htime = 0.425792056979;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 12U;
    tmp_msg_0.htime = 0.595195728172;
    tmp_msg_0.context.assign("RSUPCFOZPFGTWIEKPDCLFMKJEEXFDUKMQGLOEB");
    tmp_msg_0.text.assign("LBEGNDXWKSCUZDRCNHQYMUGRFYFOEIRXZUMJVHWHSHKQEDMPTDXFNFRGYNABZICRRISKZDSGPKQAXTLIFKBMFBIKD");
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
    msg.setTimeStamp(0.682756409056);
    msg.setSource(41431U);
    msg.setSourceEntity(99U);
    msg.setDestination(13956U);
    msg.setDestinationEntity(73U);
    msg.op = 116U;
    msg.file.assign("JDYVRKUGFOVPSQCPL");

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
    msg.setTimeStamp(0.31048702664);
    msg.setSource(48433U);
    msg.setSourceEntity(64U);
    msg.setDestination(43701U);
    msg.setDestinationEntity(128U);
    msg.op = 33U;
    msg.file.assign("FLGZILWUHPRUNXOZXCFLMQFCHKQGAVXHOVUKNVFUXEWUYIQJBNBCTMTBEEVSVCJAHEPEBCDHVDPIVHASRMONIDQPFKABTBIIKYYCUSHVVFZYCJGSBUHOZYUTPSOAZFQENJSNKAGWBSDSKLJDIWDAYXK");

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
    msg.setTimeStamp(0.723343562611);
    msg.setSource(15958U);
    msg.setSourceEntity(229U);
    msg.setDestination(56340U);
    msg.setDestinationEntity(160U);
    msg.op = 72U;
    msg.file.assign("OFBPOBIKTWOLOLGJAUXFFQSEZZYDRONTGSSNWVQPZSGQSUXDIPNKPGJOAOCHNXQXPUZBYBPNYZJBVJGKFQKYAKFHZUHFEBHXCGSMOVAVMIRQSWDLCXEGVRMMBERQEKXBEWVRDWJINLZNDWTFQRUPMJZDTSWURYYCKHYWGFI");

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
    msg.setTimeStamp(0.853516649946);
    msg.setSource(55383U);
    msg.setSourceEntity(165U);
    msg.setDestination(24686U);
    msg.setDestinationEntity(163U);
    msg.op = 122U;
    msg.clock = 0.453509593693;
    msg.tz = -90;

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
    msg.setTimeStamp(0.00874414643984);
    msg.setSource(16352U);
    msg.setSourceEntity(25U);
    msg.setDestination(48460U);
    msg.setDestinationEntity(117U);
    msg.op = 124U;
    msg.clock = 0.155632067764;
    msg.tz = -56;

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
    msg.setTimeStamp(0.0147031322274);
    msg.setSource(57967U);
    msg.setSourceEntity(51U);
    msg.setDestination(25622U);
    msg.setDestinationEntity(67U);
    msg.op = 91U;
    msg.clock = 0.108767177158;
    msg.tz = 53;

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
    msg.setTimeStamp(0.419895519494);
    msg.setSource(62287U);
    msg.setSourceEntity(101U);
    msg.setDestination(28094U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.165339861886);
    msg.setSource(13542U);
    msg.setSourceEntity(241U);
    msg.setDestination(9801U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.110567267649);
    msg.setSource(17268U);
    msg.setSourceEntity(173U);
    msg.setDestination(26832U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.713269309387);
    msg.setSource(61815U);
    msg.setSourceEntity(95U);
    msg.setDestination(27398U);
    msg.setDestinationEntity(105U);
    msg.sys_name.assign("DLYRDEKJPBCROZTKRUAVZDLJDJWTHIFWUELMHWTCYPNXIUXGHISXUUDFBQAYCNXGPNBNGKSYSRUOIDPZNMECBOVQXGIQAQEEAJVWANCTXOMBPZOBNIYLWDNISMHORYVCMMVBWRRHWDKPSTWDRWGWPSEUMXLGZLXVUZHQQVEZMCVPGQOQACGLOFJTMFBK");
    msg.sys_type = 225U;
    msg.owner = 38193U;
    msg.lat = 0.563324375915;
    msg.lon = 0.861836470714;
    msg.height = 0.415985466216;
    msg.services.assign("CWYPJNSJXISZAQFNKKGJBTDBUIKETUUOSOQZRAZWASFQRCGM");

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
    msg.setTimeStamp(0.176730531063);
    msg.setSource(1638U);
    msg.setSourceEntity(16U);
    msg.setDestination(40784U);
    msg.setDestinationEntity(82U);
    msg.sys_name.assign("OCVNYSJZNUMJODLNXBRVJPIUHIYEQVAHVSFWFYJPHVWJ");
    msg.sys_type = 193U;
    msg.owner = 3318U;
    msg.lat = 0.026116931771;
    msg.lon = 0.267546225146;
    msg.height = 0.422260399018;
    msg.services.assign("OWNQEVIJXBRANQYMUBKORQASROLRHDBTPXLWXVDYYDWABJOVIHEKCVZPOANOTUSYMGICJMJSOFSPNZQZPWUCCEXOIHYLUTMJFFKTCFTO");

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
    msg.setTimeStamp(0.685998971986);
    msg.setSource(48939U);
    msg.setSourceEntity(230U);
    msg.setDestination(48920U);
    msg.setDestinationEntity(58U);
    msg.sys_name.assign("MXTKEZRPFYWLWTRSLDVVWLQBVHZSPXVHQIRFAHNCDZCEMRNNXUSYVJSDFOQHWTFGMNJXJLZC");
    msg.sys_type = 21U;
    msg.owner = 33343U;
    msg.lat = 0.131868552367;
    msg.lon = 0.811448931933;
    msg.height = 0.772131945657;
    msg.services.assign("WXLJNAXDMQHIKCVVZSHTYUQJYUICADQGPAXGEDWALTQKPDZKUCFXWBQWSVCYFBJMSIOKAJLVTFYNSXGHVGFLFNHTRUONVOTOQYRVARPIDACYPEJEGNZMMGBEOGELWRHQRIRXXTZYFTVJJIRXAKQDOWRDSRIGOUASVKGWQTCKNMFPEYWTDBUUCIWSNHLYMPJKLZCZEUAXZEPLENDBMFOSOBYQDUJHMBBZLNPXILPRSWBZBKHN");

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
    msg.setTimeStamp(0.844951554126);
    msg.setSource(43890U);
    msg.setSourceEntity(116U);
    msg.setDestination(10204U);
    msg.setDestinationEntity(184U);
    msg.service.assign("IDTPIMDTDUCRAVKIKTJTJB");
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
    msg.setTimeStamp(0.057996538448);
    msg.setSource(1961U);
    msg.setSourceEntity(176U);
    msg.setDestination(26056U);
    msg.setDestinationEntity(42U);
    msg.service.assign("QXUSKBMJPQOMLRPHDFXJBOWJESHKJMIFYJGEBVUXRVDUWWQOCDPHVBSUBOCPQODJFZEJIGEXYRNXLGFKZSHUNGCHSVDROWGUNCPXFPQJEEAGLRNYAZMLAOHUCUTWQVECGMTVCBTKVVAALPBZAQYZZSWISASRPWKMYMNHKKBLKAIZNWHWTUIMXXEFFMZDPJXNVRVDGNRFCLEOZSKLPZTRTMUNITCH");
    msg.service_type = 214U;

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
    msg.setTimeStamp(0.321056256605);
    msg.setSource(42293U);
    msg.setSourceEntity(129U);
    msg.setDestination(47735U);
    msg.setDestinationEntity(125U);
    msg.service.assign("XWKCTWLXEZTWDKUEDPXQSCNRIBFMJZKVVYRHLUUOTVLEGZQBABPYNLVLBFYTONAZESONHGZCHJYNUPTQVSIHZUMPDBBJDDCCIINUTMRLGAISMUGMAMHNKVVOCHFPSWQDEYRPUSXBKMQOCWVGMBALEQPWTRSOQLDEYJZJPPLPHF");
    msg.service_type = 209U;

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
    msg.setTimeStamp(0.256703378439);
    msg.setSource(5440U);
    msg.setSourceEntity(242U);
    msg.setDestination(26657U);
    msg.setDestinationEntity(176U);
    msg.value = 0.727917238518;

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
    msg.setTimeStamp(0.185880976339);
    msg.setSource(57828U);
    msg.setSourceEntity(115U);
    msg.setDestination(18260U);
    msg.setDestinationEntity(64U);
    msg.value = 0.703277207792;

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
    msg.setTimeStamp(0.326921209318);
    msg.setSource(53378U);
    msg.setSourceEntity(19U);
    msg.setDestination(28910U);
    msg.setDestinationEntity(17U);
    msg.value = 0.70639369941;

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
    msg.setTimeStamp(0.725418684205);
    msg.setSource(9267U);
    msg.setSourceEntity(128U);
    msg.setDestination(28486U);
    msg.setDestinationEntity(12U);
    msg.value = 0.930500666192;

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
    msg.setTimeStamp(0.129753107158);
    msg.setSource(62751U);
    msg.setSourceEntity(18U);
    msg.setDestination(10676U);
    msg.setDestinationEntity(140U);
    msg.value = 0.341277741878;

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
    msg.setTimeStamp(0.858657562467);
    msg.setSource(59231U);
    msg.setSourceEntity(126U);
    msg.setDestination(15327U);
    msg.setDestinationEntity(14U);
    msg.value = 0.804830707573;

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
    msg.setTimeStamp(0.876661239235);
    msg.setSource(9349U);
    msg.setSourceEntity(154U);
    msg.setDestination(782U);
    msg.setDestinationEntity(133U);
    msg.value = 0.07479747784;

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
    msg.setTimeStamp(0.51580127682);
    msg.setSource(40174U);
    msg.setSourceEntity(190U);
    msg.setDestination(35249U);
    msg.setDestinationEntity(72U);
    msg.value = 0.36589148721;

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
    msg.setTimeStamp(0.38822455833);
    msg.setSource(61491U);
    msg.setSourceEntity(159U);
    msg.setDestination(59427U);
    msg.setDestinationEntity(85U);
    msg.value = 0.408612970144;

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
    msg.setTimeStamp(0.95539142094);
    msg.setSource(29U);
    msg.setSourceEntity(49U);
    msg.setDestination(41051U);
    msg.setDestinationEntity(7U);
    msg.number.assign("JYNLEYUESLTWWPFIOHNMZLPJEOOSSUUKIIQLRVAAUVUFTXIFHOIDKRJCGTSMXNYRAVVVYHINXKBUKHBCEBNZMGLGJQVDQTDDCLFWBNXUGLHOTQADPTENWLCRZMZAPTQZNSYQTJZSNIGPKAHSXHRYFWYJIWFJUDXKHMEAKCBZMCODVCIBMTKHPRDGWPGOQSQZMPAXZRXMJDFCBRQVLYICMWXBEQWTOKAEFSFWGSN");
    msg.timeout = 39158U;
    msg.contents.assign("XXNQONCQIRJGZPVZRWNGCDDDIKBGBYKIMHMZZARIVWSJKWSTGFOEFVHWDKLPAFXDUYGRRBHJKDPHPMWBVTPVWZCFJNZVFTRJOPYIXMQHBJXRVNUGOKMQDSLYQAREFCNCAVOYZJLVCMKYXDUBSTALQXXHCOWAQWGUBUIYYSZLLOFUJ");

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
    msg.setTimeStamp(0.0425183400849);
    msg.setSource(22117U);
    msg.setSourceEntity(54U);
    msg.setDestination(9498U);
    msg.setDestinationEntity(133U);
    msg.number.assign("IIKXAPQTERPSFLXINCDBZZZKLGWJTEORKYBHCESUJKGPQSGNJSTFNDPWZXLDJGBJDRTIAPWDOQBQGOYVKMQQTZMYNX");
    msg.timeout = 16284U;
    msg.contents.assign("HEHLNSPHFVYVXOPOZICZSBQZWVIERLXYBJSXTLYEIEMNTOHTUMKKOWRRCUMLEPFALVRAVTYGDUDQUUNAKXLFKWDQEQPRNMMTBTCCITBBNHWBICCGVEFOHGPZXJAXFXTVOWMPJZANMIQICNQDRJMXFSEYVGFUZJRGBOKWPGRTAMSDNGYALZRQATLKKASDEURCXWHLFYXHIUFUVJCOZFIJDJZPSOLPKQBK");

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
    msg.setTimeStamp(0.563128845031);
    msg.setSource(62794U);
    msg.setSourceEntity(97U);
    msg.setDestination(19459U);
    msg.setDestinationEntity(21U);
    msg.number.assign("SKVYHCNFQVJFPWKVXNNEUWHFSFQFNYDDNFRJBORIJRCTOTVBFFXTDTJIXSRKLZDZAIQLHRT");
    msg.timeout = 8442U;
    msg.contents.assign("DNSFHJIFTHQDTKGHWAMEHRKZMHEEXTISIXVBANMFJVSVTRCGUPFWWVXBFCYQGPTDSZKWVFVNYVKQLDMGZLNRYHQBDVJSUFPNQCWZADZJUMQVECCXDITESOYLNXXBGPTBKJLLEZEJCBLOPTXFCHLLXOBGOJTJHDYRYLBKONLAAOKEUINMMOWTSDOCIJR");

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
    msg.setTimeStamp(0.431711626664);
    msg.setSource(42932U);
    msg.setSourceEntity(90U);
    msg.setDestination(46096U);
    msg.setDestinationEntity(184U);
    msg.seq = 1296050667U;
    msg.destination.assign("KDKLKYKQAGJVXJUCCGIF");
    msg.timeout = 59415U;
    const char tmp_msg_0[] = {-112, 10, 15, -48, 63, -117, -40, 58, -94, -1, 123, 80, 108, 64, -123, -10, 6, 15, -117, -125, 80, 103, -116, 56, 16, -46, 32, -111, 47, 66, -62, -64, 123, -29, 58, 6, -47, -33, -120, -40, 84, -116, 97, 86, -120, 126, -57, 17, -115, -62, -116, 87, 0, 119, 11, 108, 48, 62, -1, 33, -80, -38, 62, 48, 43, -56, 105, -97, -104, -89, -122, -25, -94, 19, -123, 49, -43, -30, 40, 75, -81, -41, -31, 50, 64, 38, 105, -74, 86, -116, 26, 44, -33, 21, 91, -107, -39, 72, -7, 33, -112, 8, -40, 75, 68, -14, 124, -66, -73, -56, 36};
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
    msg.setTimeStamp(0.4067051676);
    msg.setSource(53477U);
    msg.setSourceEntity(167U);
    msg.setDestination(39778U);
    msg.setDestinationEntity(189U);
    msg.seq = 3788076475U;
    msg.destination.assign("WJTORWFYCALDQIUVAHGTYHUTWGLMGGVUVWXDZTSRIZFFYNNJNIZIECFYZTSQIBVESFGTPUMMQGIXQRTDJAUBMBHYZEMRXACCOBK");
    msg.timeout = 38853U;
    const char tmp_msg_0[] = {46, -31, 110, 41, -124, 99, 96, 55, -91, 42, -104, -82, 67, 67, -56, 83, -103, -77, 75, -77, -107, 5, -86, 26, 16, -59, -45, -29, 124, -46, -54, 22, 104, 18, 65, -116, 91, 20, 70, -24, 96, -27, 119, 41, 126, 55, -86, 123, -93, 72, 6, -122, 105, -65, -105, -127, 4, 91, 81, -41, 74, -56, 112, 4, 43, 67, 18, 113, -105, -49, 107, 126, -26, 26, 123, 117, -84, -68, -69, -85, 100, -49, 101, -7, -114, 124, 37, 95, -9, 25, -65, 23, 94, -31, -52, 48, -72, -23, 85, 34, -90, 66, 100, -97, 88, -44, -120, 21, 106, 18, -34, -80, -112, 64, 8, -122, -99, -106, -61, -76, 124, 33, 112, 29, 55, -85, 14, -51, 2, 0, 113, 122, 10, 11, -79, 32, -105, -75, 38, 10, -128, 118, 64, 65, -115, -54, 51, 12, -96, 102, -70, -59, 101, 111, 34, -111, 34, 97, 4, -85, -126, -106, 37, 11, -123, 117, -88, 79, -109, 56};
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
    msg.setTimeStamp(0.546134690089);
    msg.setSource(32039U);
    msg.setSourceEntity(40U);
    msg.setDestination(63173U);
    msg.setDestinationEntity(215U);
    msg.seq = 1071149322U;
    msg.destination.assign("HRNEIKWNJQMYKVBAW");
    msg.timeout = 45494U;
    const char tmp_msg_0[] = {83, 104, 26, 30, -77, -69, -14, -25, -98, 93, -35, -110, -23, -23, 112, 18, 90, -74, -114, 72, 19, 57, 118, -73, -78, 7, -94, 16, -82, 96, -90, 105, 86, 125, 12, 92, 40, -99, 8, -51, -58, 119, 90, 46, 84, -110, 87, 7, -121, 8, 11, -55, -20, 61, 13, -87, -25, 20, 101, -55, -116, -92, -72, -15, -29, -66, 80, -55, -119, 114, -88, -48, -115, -90, -109, 30, -4, -100, -53, -125, -97, 97, -28, -67, 72, -107, -32, 33, 46, 17, 52, 76, -23, 110, 124, 13, -52, 89, 24, 16, -112, -106, -39, 63, -48, -77, -83, 111, 112, 6, -64, -102, 110, 85, -64, -8, 116, 1, 121, -126, -35, 95, -49, 108, -126, 71, -98, -57, -16, 63, 2, -1, 18, -61, -30, -88, 120, 56, -41, 49, -124, 122, 41, 66, 30, 20, 109, 58, -86, -30, -79, 98, -1, 11, -60, 96, -66, -88, 12, -97, 119, -55, -126, 36, -49, 15, -89, -77, -37, 26, 6, 105, 124, 17, 22, 86, -90, 29, 39, 117, -92, 64, 49, 30, -59, 16, -78, 49, 31, -66, 21, -123, -111, 13, -55, 37, 58, 83, 99, -65, 17, 86, -107, 85, 77, -51, -66, -63, -106, 59, 77, -116, 124, -31, 72, 75, 69, -38, -85, -14, -88, -44};
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
    msg.setTimeStamp(0.670348018652);
    msg.setSource(40267U);
    msg.setSourceEntity(198U);
    msg.setDestination(58514U);
    msg.setDestinationEntity(41U);
    msg.source.assign("YQKQILNLQSPVWNGYWCDZUBSFRIAURTRJYEOKACEOHMSUV");
    const char tmp_msg_0[] = {89, -114, -29, -3, 2, -124, 84, 82, -57, 76, -110, -25, -62, -103, 25, 51, 84, -118, -99, 109, 70, -2, -117, -25, -85, 31, -79, 18, 114, 38, 17, 92, 2, -88, 8, -62, -113, -119, -35, 57, 64, -64, -64, 84, 90, 4, -21, -75, 36, 42, 121, 121, -45, -122, -47, 93, 90, 35, -78, 36, 63, 55, 49, 115, -77, 99, -43, -14, -34, 69, 24, -8, 73, 63, 6, 120, -113, -22, 62, -118, 74, 25, 123, 24, 118, 101, -9, -42, -123, -61, 101, -87, -78, -73, -46, -85, -69, 23, 3, 36, -27, -58, -71, -106, 109, 43, -120, -32, -115, 67, -99, -75, 119, -106, -112, -122, 66, -15, 31, 93, 104, -105, -27, -96, -102, -88, 1, 87, -36, -87, 20, 18, 122, -51, -93, -5, -57, 87, 111, 97, 30, 52, 48, 61, -97, -46, 106, -32, -99, 32, 24, -54, 116, -53, -19, -51, -114, 68, 1, -56, 30, 55, -48, -116, 120, -29, 84, -52, -1, -99, 22, -116, 95, -64, -120, 34, -91, -32, 67, -21, 47, -99, 101, 33, -124, -119, -115, 28, -43, -17, -90, -73, -15, -25, -42, 66, 71, -86, 116, 56, 12, 71, -16, 67, -58, -77, 43, -55, 39, -62, -80, 7, -64, -97, -89, -24, -72, -35, 34, 82, -127, -10, -64, 21, -31, 20, 40, -90, -23, 113, -22, 107, 32, 44};
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
    msg.setTimeStamp(0.343003708506);
    msg.setSource(15966U);
    msg.setSourceEntity(143U);
    msg.setDestination(45321U);
    msg.setDestinationEntity(3U);
    msg.source.assign("SWTWLPJVGYPAYCPVSVAIJIUKMNXERSJUWBPLEISDKEWAZBSUMTHXGPD");
    const char tmp_msg_0[] = {-103, -17, 57, -96, -127, -97, 82, 114, -92, 67, -36, -127, -121, 41, 89};
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
    msg.setTimeStamp(0.727786615941);
    msg.setSource(62468U);
    msg.setSourceEntity(184U);
    msg.setDestination(28122U);
    msg.setDestinationEntity(51U);
    msg.source.assign("ORHEFPFXTIJMYDOSBXYPSCVZNRHLOSIRGWYUWRRTMRCTDYNVLUQYHJXSASJCYXUPMNOFNGQGBJEOUWWTAJIXBSMKZVPOBVUKLNONXYUDSHGZWCAKHTAHLSOZWGHPQMZNKMTK");
    const char tmp_msg_0[] = {69, -10, 45, -69, 94, 28, 14, 14, 45, -120, -74, -72, 28, -5, 74, -30, -25, 37, 26, 124, 91, 105, -65, 46, -124, 102, 91, -43, -83, -22, -52, -69, -67, -27, -88, 32, 3, 82, -79, -13, -62, -20, 70, -113, 107, -123, 81, 26, 30, -110, 98, 104, -24, -28, -47, -18, -38, 30, -104, 12, -19, -68, -126, 47, 15, -70, 121, 112, -72, 2, -58, 90, -37, 41, 68, 6, -78, 78, -24, -112, 10, -102, -84, -64, -104, -7, -14, 49, -28, 75, -59, 88, 0, -77, -33, -80, 124, -85, -54, 58, 124, 72, -89, -111, 9, 124, -115, 115, 105, -3, 48, 105, -6, -31, -107, 91, 79, 95, -9, -83, -114, -24, 42, 98, -98, -106, -94, -91, -82, 13, 58, 40, -15, 56, -51, 126, 45, 106, -64, 18, -99, 46, -12, -37, 67, 34, 58, -80, -78, -37, 58, 117, 118, -127, -39, 86, 75, -14, -47, -101, 65, -111, 126, -52, 69, 98, -38, 111, 15, -15, -10, 2, 86, -114, 103, -18, -67, 16, 118, -78, 75, -79, -16, -108, 32, -77, -122, 23, 31};
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
    msg.setTimeStamp(0.969242439997);
    msg.setSource(9372U);
    msg.setSourceEntity(248U);
    msg.setDestination(43230U);
    msg.setDestinationEntity(203U);
    msg.seq = 4128070792U;
    msg.state = 195U;
    msg.error.assign("XVNWILVKNSEGHWEHDJBBJKBQRLYYPKOXRCTWDFSAOQKCLAPPHFZXKFBIJNNQGSLZQHMVTPVWNUYKRIZPPPUXSHZSZUMQSCFCOMIVWXFIOTTRKYAMJZBVEVOMZEYLNSPQTIEJEUAYLAM");

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
    msg.setTimeStamp(0.256720681192);
    msg.setSource(57123U);
    msg.setSourceEntity(84U);
    msg.setDestination(32207U);
    msg.setDestinationEntity(109U);
    msg.seq = 3125462140U;
    msg.state = 59U;
    msg.error.assign("PCLUKBSDXONNLQRIRGXSGWFDOCD");

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
    msg.setTimeStamp(0.0835914108036);
    msg.setSource(41523U);
    msg.setSourceEntity(135U);
    msg.setDestination(27403U);
    msg.setDestinationEntity(211U);
    msg.seq = 71408824U;
    msg.state = 139U;
    msg.error.assign("LGZXWZRSBUVBCWADEWQYJZONNAJLLKJHPAVTDZXNICCSJHCBSZDOKJLLVFEGQQSUUSUFOG");

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
    msg.setTimeStamp(0.895618641719);
    msg.setSource(38019U);
    msg.setSourceEntity(221U);
    msg.setDestination(50366U);
    msg.setDestinationEntity(69U);
    msg.origin.assign("PFBREMMUXCWKSNJQVQTPQTVBNPSYSWSGAIDUJAOITIKEVNX");
    msg.text.assign("KBLZUKOHOHFAFZWGFPOFRTNTHSITIXFUVDHPEJHNGCYQQTNVATJMKOBEUTLINENKZMURGNKVLOYQZLVVQSHZCPCDOVEYKLMGVRTIEPEJGQTJNJXZJ");

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
    msg.setTimeStamp(0.359152872009);
    msg.setSource(18142U);
    msg.setSourceEntity(43U);
    msg.setDestination(8038U);
    msg.setDestinationEntity(3U);
    msg.origin.assign("FSCAWFOCYIXAQGEJOFVPACGSTQFRUQMBDGCXZEBWKEROJEID");
    msg.text.assign("WISEQFPLQCZMRUFBFPINAYHCTGBGKXXBOJKEWKENAEVWTOKRYHAWSNQNPGNDZJBNEIWCFGVIWRUKDAOCVOICX");

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
    msg.setTimeStamp(0.353890292163);
    msg.setSource(60830U);
    msg.setSourceEntity(38U);
    msg.setDestination(2195U);
    msg.setDestinationEntity(164U);
    msg.origin.assign("EAZKWMMCKONYSGABAYZAKIKYRIJFTBSZNTHRJBUUBXQGOADWIQGOLMEVVZWFMTNIITEUXTPCNMMSHULQKHUBBUCYDGOVPDWCXLGCRJQGYXFRUJPLAAADLMWZZFCTYQUJKLVIAUVHOJXECURPLZEPHQOCTRNFJZTLKFRSTMJIDINBHEYVCHIWVX");
    msg.text.assign("JUCSKIZJTILXZMWOLRMDEFBALCBLBMNUYGFGQKWVAVKSQBRISWJICPVYINSFERGCBLOSHKZFEIWXXGSJPGCUMIWXNJZSOFVD");

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
    msg.setTimeStamp(0.403519912472);
    msg.setSource(17026U);
    msg.setSourceEntity(212U);
    msg.setDestination(5883U);
    msg.setDestinationEntity(128U);
    msg.origin.assign("MMRSLMTODANBNFVSBOLKGFJMSJWDAUSUDROEHLCYCHAFKCHHJKOIULOKZXXJYJQPORZMI");
    msg.htime = 0.414208492889;
    msg.lat = 0.127552782318;
    msg.lon = 0.0793605711317;
    const char tmp_msg_0[] = {-21, -40, -12, -70, 40, 30, -5, 97, 35, 125, 63, -109, -2, -101, -68, -70, -97, -62, -15, -18, -3, 89, -3, 47, -87, 76, 77, -13, 28, -2, -21, 126, -73, -30, -18};
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
    msg.setTimeStamp(0.972379658667);
    msg.setSource(55365U);
    msg.setSourceEntity(208U);
    msg.setDestination(29860U);
    msg.setDestinationEntity(144U);
    msg.origin.assign("SPYTYEDUQXQXJBHKYUMSVYUTX");
    msg.htime = 0.435867504545;
    msg.lat = 0.642110340648;
    msg.lon = 0.96237465777;
    const char tmp_msg_0[] = {81, -49, 79, -78, -59, 109, -5, 84, -46, 33, -104, 13, 26, 116, -1, 96, -47, 66, 74, 27, -68, 64, -52, 112, 83, -99, -114, -93, 5, 120, 28, 98, -45, -96, 60, 81, -106, 35, -109, -52, 120, 111, 0, 23, 17, -70, 105, -123, 105, 18, -65, -6, 4, 25, 124, -8, -87, -43, 90, -66, -118, 71, -60, 30, -107, -86, 82, -11, 82, 48, -123, -54, 28, 15, 22, 92, 98, -85, -114, 30, -90, 31, -61, -47, 74, 25, 79, -90, 5, -21, 73, -120, 19, -72, 32, -99, 32, 55, -61, -60, 39, 67, -110, -120, 51, -113, 124, 31, 12, -41, 92, -78, 42, -54, -111, 31, -77, 21, 33, -105, 87, -35, -113, 84, 41, 113, 111, 95, 53, -117, -29, 50, -99, 53, 64, 91, -99, -64};
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
    msg.setTimeStamp(0.230134740433);
    msg.setSource(48544U);
    msg.setSourceEntity(150U);
    msg.setDestination(47908U);
    msg.setDestinationEntity(126U);
    msg.origin.assign("WAEICVHFDPIVXCKHGXMROPQROVZYLKBPMVITUWVJYBQMIWJLPLWSUQTMQPWRVUDHBLETGYODWFOEUMFZBMIHGFLFZOPPJECSSLVFDNSLWSYABTDWSZCTJCBTWYTDPUFDSNCGBNHYXOAJNDHPRABXDQTUCQKKNH");
    msg.htime = 0.152541191244;
    msg.lat = 0.962880609826;
    msg.lon = 0.888737959956;
    const char tmp_msg_0[] = {22, 18, 65, -76, -10, 38, 55, -109, 16, 103, 0, 59, -18, -99, -9, 18, -105, 21, 28, -33, -49, 74, -51, -111, -80, 105, 21, 41, 95, -70, 18, 30, 116};
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
    msg.setTimeStamp(0.207554305968);
    msg.setSource(1522U);
    msg.setSourceEntity(253U);
    msg.setDestination(37068U);
    msg.setDestinationEntity(89U);
    msg.req_id = 21250U;
    msg.ttl = 44924U;
    msg.destination.assign("VSKQCPSLRLWINRJEKCIENGJCDQCUVNRBSNTRMTYXQSOUDIGBPOMNLPXPIIXRNDNIXQUFELETUMFCQVWBTQ");
    const char tmp_msg_0[] = {-33, -126, 18, 91, -105, -56, -123, 51, 39, 108, 116, 60, -34, 18, -84, -51, -64, 62, 30, -108, 64, 21, 82, 65, 118, -56, -115, -20, -120, 94, 25, 47, 15, 34, -121, 53, -56, 56, 70, 14, 73, -40, 51, -103, 23};
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
    msg.setTimeStamp(0.609065059399);
    msg.setSource(64675U);
    msg.setSourceEntity(161U);
    msg.setDestination(28457U);
    msg.setDestinationEntity(94U);
    msg.req_id = 28538U;
    msg.ttl = 2568U;
    msg.destination.assign("LTXMITQVUKNVPVRQFPHDMQXREPHWVMOSCTKRZOUSUXLSAWEJJUIGYPOHMTCZZKSODHLNFHJYQRRTBHBAVJTMRBTSYCGMFOVFDERGNXGDYAYDFNBFZQUPNJHYFKWWEEYZIPIQSCZRPCJHMAXRPEAG");
    const char tmp_msg_0[] = {61, 100, 82, 77, 30, -84, 62, -10, 64, -54, 116, 47, 48, -32, 7, 2, -111, 18, -52, -47, -6, -45, -10, 68, 83, 118, -112, -93, 54, -61, 105, 28, 22, 121, 23, 58, 98, -108, -90, 97, 7, -96, -115, -95, 88, -28, 17, 113, -13, 100, 90, -16, 66, -116, -89, 73, -112, 73, 88, 51, -31, 68, -116, -35, -90, -91, -58, 105, 119, 102, 53, -92, -21, -72, -13, 56, 77, 91, 18, 91, -66, 55, 70, -14, -114, 88, 84, -17, -90};
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
    msg.setTimeStamp(0.664940276216);
    msg.setSource(63316U);
    msg.setSourceEntity(115U);
    msg.setDestination(54127U);
    msg.setDestinationEntity(0U);
    msg.req_id = 27467U;
    msg.ttl = 44142U;
    msg.destination.assign("OLOKQWAGEJOGOTAEJOCNHCSGIIFLOSVCLWNLHBUXWPFPJCNBXNSUBNDQWDVPOEKDMRBPRROFUYJXKRZEHATNYAJDZIQGGZYSTYIFVRRDYCIERWUPVCYHBSZDCZCLHYAMOWFKJHILKBYXFLGUTBJBCVLVFUUSQTFCAVXMYMOHUNGDXXWTVEWITAZADPHAEMGHQTRGILHRBTNTMEIFWQMWMZSKGVZPJREUNKQADMQMLX");
    const char tmp_msg_0[] = {-29, -78, 80, 79, -77, 49, -113, 28, 104, -36, -63, -47, -19, -109, -110, 33, -97, -67, -41, -122, -5, 47, 61, -35, 21, 39, -26, -97, 25, -87, -7, -48, -29, 16, 113, 85, -26, 54, 117, 73, -84, 107, -126, -111, -29, -29, -102, -19, 79, 46, 44, 123, -86, 14, 75, 31, 116, 1, 80, -121, -60, -114, 106, 39, 53, 65, 125, -12, 80, -48, 108, -60, -61, -73, 116, 40, -75, 13, -43, -96, -87, -110, 122, 123};
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
    msg.setTimeStamp(0.578893307783);
    msg.setSource(51241U);
    msg.setSourceEntity(51U);
    msg.setDestination(35600U);
    msg.setDestinationEntity(69U);
    msg.req_id = 10587U;
    msg.status = 60U;
    msg.text.assign("NFFUNZRABSUCLOPRAJNXNSCTJBIWZOAULENCCVPEGYKLXRBPKQCLWDHBLMCSZFHOBMNEJVHZVTPNVASTQUGMFUECHRSRERMHJOOYWTCIJHLYDSPFGOWCHQVOZUDWVTNXFUEIJJWLXVG");

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
    msg.setTimeStamp(0.0488042914993);
    msg.setSource(38718U);
    msg.setSourceEntity(186U);
    msg.setDestination(2169U);
    msg.setDestinationEntity(107U);
    msg.req_id = 63336U;
    msg.status = 34U;
    msg.text.assign("ILWDNMHJPGYYGNCXRCJUDIADPVSMHDEXZQEGIBPMFXQAKCDXUSTEBUDDAMCQCXNIJOLMUXFKLKWLCXVWYNAASZQQUGUXGHOZNTWLLRBTJHIOSBULKOPQMREIHYAOWCIRWGTQGNWPMEVTHJPVJYIWNGEIHLVQBAOTZHQVBYNZSBPP");

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
    msg.setTimeStamp(0.17310461428);
    msg.setSource(53272U);
    msg.setSourceEntity(176U);
    msg.setDestination(54183U);
    msg.setDestinationEntity(23U);
    msg.req_id = 27541U;
    msg.status = 151U;
    msg.text.assign("AUXRVVSKYHGPPWAXZACTJTNBLOQXDKPBAIIUBZEVMNLAYSQTGRWVURLBGJDDZMQEOPNYTMQQPEDESSKUMEFSXJPYXZCTIKGGMRRLHWXVWSWZXWRMWBUQGOPBGKCDUHQEDYXAMCHOCOHNJODLJZFJQAMEIOLKLACBYUTJDRQJVJHTBEYNUULHIMZLIVFJFOCSFZMDSYRCVFVKXDYWEATNT");

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
    msg.setTimeStamp(0.751839199435);
    msg.setSource(18169U);
    msg.setSourceEntity(129U);
    msg.setDestination(35786U);
    msg.setDestinationEntity(237U);
    msg.group_name.assign("WQUZJKJZPWSOIFHWTMSNPBMGGPVSXFYDDOCJDRNWRXPZUTNVDWPRCURKIOWEMKMSLLEIAQPBFNGYRGWVAEBOPOSRYEJFZBRAFCNOHHMTINGKTLJLFDWFGNVEEYETHGIVBVVSDRKHQGXQIOCTCLULIYSCXRCUVEXATVBLXFHQUFFVDEJDZJHLACXAYUKMOOAZTZ");
    msg.links = 761129789U;

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
    msg.setTimeStamp(0.312747121231);
    msg.setSource(16873U);
    msg.setSourceEntity(65U);
    msg.setDestination(32058U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("HMSVTNUKKXXCACOCHZRMTSNBQLVSIVMMRLUEBLYDFVILCHJCVSFZQTXRIGFIMMLUHESYKQPRUVCUMNFJGDVRKDGTESYJEQTBWKYFZARNBXWKZAPQTZVJELMJQPJCZEXWNIGIPNDSUDSFNAKKPVWF");
    msg.links = 3666939740U;

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
    msg.setTimeStamp(0.275669932922);
    msg.setSource(1951U);
    msg.setSourceEntity(149U);
    msg.setDestination(14304U);
    msg.setDestinationEntity(170U);
    msg.group_name.assign("OZPOFFCLCUKYMAOQOLGZUVGZBQVGSSRRYCNARBXGWDIRKQXPKTCHWSDHMSMECPNPXVVAVFAQTEIZXOZYQOQJAZJBCBKYGNYFAEJWNCEMWHVATMIDFWKYHLDUSTWDLJVKTKITTPXIHOJMNJDREKERJWBBFPMMAGMVWZBLIEIJAK");
    msg.links = 2869456219U;

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
    msg.setTimeStamp(0.341787029288);
    msg.setSource(59214U);
    msg.setSourceEntity(55U);
    msg.setDestination(11993U);
    msg.setDestinationEntity(17U);
    msg.groupname.assign("ZRIFDFVEXSYDCGPLCILNVRWRCOJGJSYXYAHSGYZTNAYRTUROKZSGIZEIWGJFESIHBTSNDSJPFHGUJRIKFXOUTKQUZVPSDUESHKBLOZJBJAMYLAOHTQOSTVNUXTMZKQXHJWLFJBVWLDWHOCUQWMODUXNYJKMMGYAHPDCEIMQCCQBRMXDIHURIRNBPQXDWZEAYZXGNN");
    msg.action = 40U;
    msg.grouplist.assign("JSKYFTQMSAJTCVPRWGFKZPRUTYGWPMUUIIWKDQXRPGQIZLATVBGKMHRKWHBNEXKEMADEWONFINNFHGDPVSXWQATEJTUQSXNFLKUPBCVYUPNX");

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
    msg.setTimeStamp(0.372741467475);
    msg.setSource(43U);
    msg.setSourceEntity(199U);
    msg.setDestination(49495U);
    msg.setDestinationEntity(138U);
    msg.groupname.assign("MZBNEWRDEQYWXTOTJBFLZJHTPKCNRAXGRFMRPNYQLRCIVUUVLQDJWBVEGFBFYVWDOTUCPWMWNDYQHDLMVKGEYKMYHYKIECZLWHOBC");
    msg.action = 205U;
    msg.grouplist.assign("SQBKWISDFODUUNWHMTYIXHYCOXMVYSCTDKLZDHIJZUMUXSLQNPBWYOOTYCGFJUIOGNRALDXRWQNBXFWTRTPIGZKTUXPNFWWELGUGPMQCLRIMIWBFVKCXIZQJRFEVTLPARSOVJYCPBZEDZLM");

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
    msg.setTimeStamp(0.298087345411);
    msg.setSource(57460U);
    msg.setSourceEntity(82U);
    msg.setDestination(3545U);
    msg.setDestinationEntity(76U);
    msg.groupname.assign("OWXRRYZDLDMSRSEZVOEUMFOZKQNONIHOPGPKBSTACYWDCMEIJQSUCKUSQTYXEOQSYRGINXASFMHLJVIMPRWJWHUAJUGGCCTAGDZWWKHIMPXNEOJHUCYPLRINVWTAUIYDXGWPBFAQOAEMBAOSGOFPMKILUYXBZTJVDWTHQYFNZSQLKCVFVNLXLAFVEPFWRJGJGQJNBSVBKMDEQBRXNMYDKXVCRTPBHPZVLBTGEHEAXFTZFHRICU");
    msg.action = 214U;
    msg.grouplist.assign("YOQVCALCJLCCEGBVTTGEISJFXNQOIXJOMNVYABQHVZZBDLRKVHWEQLUDZJXYYCKKEYOABQJGPVNPHJPIHDVDMXOS");

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
    msg.setTimeStamp(0.513806224873);
    msg.setSource(23007U);
    msg.setSourceEntity(144U);
    msg.setDestination(24395U);
    msg.setDestinationEntity(19U);
    msg.id = 57U;
    msg.range = 0.30556787356;

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
    msg.setTimeStamp(0.557902859905);
    msg.setSource(36129U);
    msg.setSourceEntity(132U);
    msg.setDestination(51347U);
    msg.setDestinationEntity(155U);
    msg.id = 226U;
    msg.range = 0.254815871852;

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
    msg.setTimeStamp(0.0213314027234);
    msg.setSource(35232U);
    msg.setSourceEntity(182U);
    msg.setDestination(37937U);
    msg.setDestinationEntity(33U);
    msg.id = 180U;
    msg.range = 0.720178760696;

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
    IMC::LblDetection msg;
    msg.setTimeStamp(0.687361928907);
    msg.setSource(2464U);
    msg.setSourceEntity(242U);
    msg.setDestination(38915U);
    msg.setDestinationEntity(180U);
    msg.tx = 35U;
    msg.channel = 9U;
    msg.timer = 60973U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.942733643746);
    msg.setSource(26210U);
    msg.setSourceEntity(109U);
    msg.setDestination(34471U);
    msg.setDestinationEntity(197U);
    msg.tx = 22U;
    msg.channel = 161U;
    msg.timer = 52165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.880141937862);
    msg.setSource(1681U);
    msg.setSourceEntity(206U);
    msg.setDestination(37789U);
    msg.setDestinationEntity(245U);
    msg.tx = 66U;
    msg.channel = 167U;
    msg.timer = 59839U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #2", msg == *msg_d);
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
    msg.setTimeStamp(0.788364671105);
    msg.setSource(786U);
    msg.setSourceEntity(214U);
    msg.setDestination(29003U);
    msg.setDestinationEntity(158U);
    msg.beacon.assign("MJJSCNKWNTMWVANIJOQFYWBQBNKTFEWPJXAJBABYBYMPDZBVJRGHSDHDPPTYFKVKZGHDLKCGUBMCZOIQPSXHEKYVUQEZOFFFONBTCVQYQUAYIZDRLIWQQLTGFCXNSNUSE");
    msg.lat = 0.102917454167;
    msg.lon = 0.886946345799;
    msg.depth = 0.761044553942;
    msg.query_channel = 51U;
    msg.reply_channel = 66U;
    msg.transponder_delay = 188U;

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
    msg.setTimeStamp(0.968904199963);
    msg.setSource(26768U);
    msg.setSourceEntity(49U);
    msg.setDestination(64128U);
    msg.setDestinationEntity(60U);
    msg.beacon.assign("JBWMREMGZHZEWTVCNTEIRTHFYZYRKCHGHXYDBBSNLSTDFXVZGZNXYAEJQAOPPWXLMOMLFPHQGCJADSTIUJKRJPSZTBTFFIHLNVNLMUZPBAOKQXKIUMAHSWTFYQ");
    msg.lat = 0.423774497126;
    msg.lon = 0.653054873401;
    msg.depth = 0.907877797009;
    msg.query_channel = 2U;
    msg.reply_channel = 196U;
    msg.transponder_delay = 187U;

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
    msg.setTimeStamp(0.613022484695);
    msg.setSource(57165U);
    msg.setSourceEntity(226U);
    msg.setDestination(3408U);
    msg.setDestinationEntity(242U);
    msg.beacon.assign("COYRGGKGRIUTPXNEKXRHGBDJUMOQLKAABHVUGVTXPOYQWKER");
    msg.lat = 0.589475931545;
    msg.lon = 0.943240351055;
    msg.depth = 0.236287149914;
    msg.query_channel = 210U;
    msg.reply_channel = 244U;
    msg.transponder_delay = 66U;

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
    msg.setTimeStamp(0.832253875646);
    msg.setSource(57483U);
    msg.setSourceEntity(44U);
    msg.setDestination(54379U);
    msg.setDestinationEntity(87U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.852778255225);
    msg.setSource(38997U);
    msg.setSourceEntity(75U);
    msg.setDestination(11897U);
    msg.setDestinationEntity(110U);
    msg.op = 132U;

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
    msg.setTimeStamp(0.737811307354);
    msg.setSource(34349U);
    msg.setSourceEntity(148U);
    msg.setDestination(12079U);
    msg.setDestinationEntity(66U);
    msg.op = 171U;

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
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.686862986525);
    msg.setSource(53411U);
    msg.setSourceEntity(89U);
    msg.setDestination(64947U);
    msg.setDestinationEntity(228U);
    msg.address = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.322484247863);
    msg.setSource(49330U);
    msg.setSourceEntity(170U);
    msg.setDestination(24806U);
    msg.setDestinationEntity(166U);
    msg.address = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.0975501958265);
    msg.setSource(61306U);
    msg.setSourceEntity(74U);
    msg.setDestination(27622U);
    msg.setDestinationEntity(60U);
    msg.address = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.352233297794);
    msg.setSource(11830U);
    msg.setSourceEntity(152U);
    msg.setDestination(3989U);
    msg.setDestinationEntity(107U);
    msg.address = 18U;
    msg.status = 242U;
    msg.range = 0.251500182036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.415480237125);
    msg.setSource(18327U);
    msg.setSourceEntity(154U);
    msg.setDestination(25069U);
    msg.setDestinationEntity(100U);
    msg.address = 110U;
    msg.status = 119U;
    msg.range = 0.446415645069;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.314911741566);
    msg.setSource(27815U);
    msg.setSourceEntity(37U);
    msg.setDestination(13555U);
    msg.setDestinationEntity(12U);
    msg.address = 215U;
    msg.status = 156U;
    msg.range = 0.600076156499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #2", msg == *msg_d);
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
    msg.setTimeStamp(0.513042489004);
    msg.setSource(51625U);
    msg.setSourceEntity(42U);
    msg.setDestination(40251U);
    msg.setDestinationEntity(25U);
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -1809;
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
    msg.setTimeStamp(0.442216298058);
    msg.setSource(15542U);
    msg.setSourceEntity(223U);
    msg.setDestination(44780U);
    msg.setDestinationEntity(163U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FBCZRFGFWOEAKJNWWPLGDHYXGQRVQOACHWVBAOSLQYXDSHETTONXOBIOXGBGGWDSEFSVWMWOJTBFFJTA");
    tmp_msg_0.lat = 0.148091555301;
    tmp_msg_0.lon = 0.155542457662;
    tmp_msg_0.depth = 0.0929202367676;
    tmp_msg_0.query_channel = 26U;
    tmp_msg_0.reply_channel = 208U;
    tmp_msg_0.transponder_delay = 87U;
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
    msg.setTimeStamp(0.32381286274);
    msg.setSource(48141U);
    msg.setSourceEntity(136U);
    msg.setDestination(31451U);
    msg.setDestinationEntity(221U);
    IMC::EntityControl tmp_msg_0;
    tmp_msg_0.op = 8U;
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
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.59557202001);
    msg.setSource(33278U);
    msg.setSourceEntity(183U);
    msg.setDestination(60091U);
    msg.setDestinationEntity(151U);
    msg.enable = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.596586003948);
    msg.setSource(51668U);
    msg.setSourceEntity(50U);
    msg.setDestination(17909U);
    msg.setDestinationEntity(224U);
    msg.enable = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.589795739196);
    msg.setSource(12785U);
    msg.setSourceEntity(244U);
    msg.setDestination(43336U);
    msg.setDestinationEntity(194U);
    msg.enable = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.353228258721);
    msg.setSource(10582U);
    msg.setSourceEntity(212U);
    msg.setDestination(55881U);
    msg.setDestinationEntity(146U);
    msg.summary = 93U;
    msg.level = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.767111677301);
    msg.setSource(45857U);
    msg.setSourceEntity(91U);
    msg.setDestination(54818U);
    msg.setDestinationEntity(109U);
    msg.summary = 241U;
    msg.level = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.420053812505);
    msg.setSource(61896U);
    msg.setSourceEntity(5U);
    msg.setDestination(59611U);
    msg.setDestinationEntity(58U);
    msg.summary = 247U;
    msg.level = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.978169264655);
    msg.setSource(21850U);
    msg.setSourceEntity(4U);
    msg.setDestination(21144U);
    msg.setDestinationEntity(101U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.743658689874);
    msg.setSource(42975U);
    msg.setSourceEntity(123U);
    msg.setDestination(20366U);
    msg.setDestinationEntity(2U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.998877477018);
    msg.setSource(27981U);
    msg.setSourceEntity(244U);
    msg.setDestination(42693U);
    msg.setDestinationEntity(200U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.261686077454);
    msg.setSource(47023U);
    msg.setSourceEntity(218U);
    msg.setDestination(59288U);
    msg.setDestinationEntity(49U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.89610740926);
    msg.setSource(2388U);
    msg.setSourceEntity(243U);
    msg.setDestination(19489U);
    msg.setDestinationEntity(48U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.823595428482);
    msg.setSource(34571U);
    msg.setSourceEntity(207U);
    msg.setDestination(19274U);
    msg.setDestinationEntity(163U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #2", msg == *msg_d);
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
    msg.setTimeStamp(0.176647088704);
    msg.setSource(38845U);
    msg.setSourceEntity(135U);
    msg.setDestination(42640U);
    msg.setDestinationEntity(97U);
    msg.op = 92U;
    msg.system.assign("TWQJPRJOMLMMEJLQKEXIHRCDJXPMBDZZYLTSPEXMYDTESGZBYNZGNQXUCFNFVXWRNKARVXHRACTGJHVWIGXDGHUCLKIHLTICAJGTOZKUOFEYFRSIPWYIBGBTIMUNLKNCMYKUUAHVYNCDOTPLZWELLQGPZSCOYKWTAVCZPEIDURAUEGWFHXNQBP");
    msg.range = 0.640527616474;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 25246U;
    tmp_msg_0.lat = 0.0851274969102;
    tmp_msg_0.lon = 0.263079325208;
    tmp_msg_0.z = 0.819614686859;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.speed = 0.119313375511;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.custom.assign("GFHWZMEPSGXZNNGRUSIRYCMSDTFDIDSYHBPZEDWVOXEFQBYVPRUQAAFSFRESTMSDLCXBGKVLQPWFMNCWY");
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
    msg.setTimeStamp(0.292645594363);
    msg.setSource(30166U);
    msg.setSourceEntity(146U);
    msg.setDestination(10917U);
    msg.setDestinationEntity(21U);
    msg.op = 137U;
    msg.system.assign("OCZDOSEPAVXQXVIMAUCVGEBSUOXIINDYHJMQBZGFGISBTHZYXFEWHWWGDJQBNPEMPBLYPN");
    msg.range = 0.108723502531;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 253U;
    tmp_msg_0.error_count = 188U;
    tmp_msg_0.error_ents.assign("GOTJSCKMEHNJZQILXZUOGFGWDVJSBSDFLCSQBBWMWXPEVWBXYHSZVTKZKMQEZZIVVHHWLXTAZOPZEODEIKTKXYSGSYRUTXRXPWBMHEISPYJATUOTYEVGNCCIMDFBNAUFCJDVBTLDMQCTPDRLKCRRELMHOHEY");
    tmp_msg_0.maneuver_type = 21113U;
    tmp_msg_0.maneuver_stime = 0.156778696989;
    tmp_msg_0.maneuver_eta = 35574U;
    tmp_msg_0.control_loops = 4182028516U;
    tmp_msg_0.flags = 89U;
    tmp_msg_0.last_error.assign("TNINZWQCWYMBQOUZMVFVELAACULQSBIQLFNJNKWFOFR");
    tmp_msg_0.last_error_time = 0.376238220912;
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
    msg.setTimeStamp(0.236291058096);
    msg.setSource(31333U);
    msg.setSourceEntity(215U);
    msg.setDestination(60097U);
    msg.setDestinationEntity(212U);
    msg.op = 229U;
    msg.system.assign("RLFKMTVDQIBUWYMRQYBHJJDZQMCPSYAVVJEAIHAKRNNAMHSVZNXINFXTGNETYQUJZGCLBCWCJESARJNMUIHJXDKHNCKOFZIDIOGFOEOCKSQPZBBPHEXVOKCRMLHWGETJYDPRMMWFCUTZOXGKUSHNTBZFAPXYPZKVZDRVFDWVXQITLOSBLEKYH");
    msg.range = 0.323978828616;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.278407600574;
    tmp_msg_0.y = 0.307604725047;
    tmp_msg_0.z = 0.489436610835;
    tmp_msg_0.k = 0.900599486842;
    tmp_msg_0.m = 0.307336748545;
    tmp_msg_0.n = 0.393117079001;
    tmp_msg_0.flags = 5U;
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
    msg.setTimeStamp(0.226976121199);
    msg.setSource(35586U);
    msg.setSourceEntity(142U);
    msg.setDestination(49860U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.742144023071);
    msg.setSource(27041U);
    msg.setSourceEntity(162U);
    msg.setDestination(1117U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.219861156093);
    msg.setSource(19200U);
    msg.setSourceEntity(254U);
    msg.setDestination(50892U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.0287750529358);
    msg.setSource(37518U);
    msg.setSourceEntity(158U);
    msg.setDestination(13414U);
    msg.setDestinationEntity(228U);
    msg.list.assign("QBGSZEPPHHIYJIFCPMBDCTMKLPKBJHHR");

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
    msg.setTimeStamp(0.0999979530452);
    msg.setSource(41191U);
    msg.setSourceEntity(7U);
    msg.setDestination(85U);
    msg.setDestinationEntity(43U);
    msg.list.assign("TZHNEPOYVFUYSCKSYKXWDMVPPDCQVCVROJDZSMQBBZVLWYKGDJHUWRDMVWBHZIYWXPJEOURXCGWOTQVOMILXJRWIIWFOLIUBYUGRSPJOGYODGASQZGNZVCJFINBTOZKCLMLEXSRPABYAHFEDXBFYYUFIABXMLFTZNMBTSDXWOEELQFUNTNHCGLQVNQQKVNUSDLACIKIRUTHNMRAEEAE");

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
    msg.setTimeStamp(0.187835705983);
    msg.setSource(57908U);
    msg.setSourceEntity(242U);
    msg.setDestination(2185U);
    msg.setDestinationEntity(220U);
    msg.list.assign("XKASNBIIJHBGJRSYWJWYZCWATRQLRDVBOFPJMRLCFIGKCSIVQXMHKKXQUBJQMYSFALEOTZFRSZUYGWVRPYSMFPXPBVKTEUJNOQEXIVECUQGQQSFAWZPODBZD");

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
    msg.setTimeStamp(0.632592788496);
    msg.setSource(37970U);
    msg.setSourceEntity(12U);
    msg.setDestination(57595U);
    msg.setDestinationEntity(13U);
    msg.value = -10088;

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
    msg.setTimeStamp(0.182388709687);
    msg.setSource(56401U);
    msg.setSourceEntity(223U);
    msg.setDestination(15083U);
    msg.setDestinationEntity(62U);
    msg.value = 21123;

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
    msg.setTimeStamp(0.0459809861566);
    msg.setSource(43026U);
    msg.setSourceEntity(181U);
    msg.setDestination(62936U);
    msg.setDestinationEntity(105U);
    msg.value = -11871;

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
    msg.setTimeStamp(0.422231035889);
    msg.setSource(24823U);
    msg.setSourceEntity(251U);
    msg.setDestination(58611U);
    msg.setDestinationEntity(53U);
    msg.value = 0.888698823619;

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
    msg.setTimeStamp(0.0995260807742);
    msg.setSource(61396U);
    msg.setSourceEntity(177U);
    msg.setDestination(23414U);
    msg.setDestinationEntity(156U);
    msg.value = 0.376577463671;

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
    msg.setTimeStamp(0.454652325908);
    msg.setSource(10717U);
    msg.setSourceEntity(81U);
    msg.setDestination(56524U);
    msg.setDestinationEntity(147U);
    msg.value = 0.124330301108;

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
    msg.setTimeStamp(0.929141148896);
    msg.setSource(45902U);
    msg.setSourceEntity(24U);
    msg.setDestination(54394U);
    msg.setDestinationEntity(153U);
    msg.value = 0.0604261708659;

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
    msg.setTimeStamp(0.0730786210441);
    msg.setSource(60825U);
    msg.setSourceEntity(45U);
    msg.setDestination(50593U);
    msg.setDestinationEntity(14U);
    msg.value = 0.78961040075;

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
    msg.setTimeStamp(0.0410182771564);
    msg.setSource(11632U);
    msg.setSourceEntity(125U);
    msg.setDestination(18951U);
    msg.setDestinationEntity(111U);
    msg.value = 0.0990153888577;

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
    msg.setTimeStamp(0.535263904477);
    msg.setSource(40500U);
    msg.setSourceEntity(42U);
    msg.setDestination(27820U);
    msg.setDestinationEntity(218U);
    msg.validity = 27979U;
    msg.type = 68U;
    msg.utc_year = 41267U;
    msg.utc_month = 113U;
    msg.utc_day = 93U;
    msg.utc_time = 0.46828859871;
    msg.lat = 0.447182117033;
    msg.lon = 0.255645429971;
    msg.height = 0.00762094247081;
    msg.satellites = 24U;
    msg.cog = 0.271681945664;
    msg.sog = 0.476990285978;
    msg.hdop = 0.305626260146;
    msg.vdop = 0.588061064048;
    msg.hacc = 0.202099224072;
    msg.vacc = 0.357812229087;

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
    msg.setTimeStamp(0.972073894138);
    msg.setSource(9594U);
    msg.setSourceEntity(234U);
    msg.setDestination(41043U);
    msg.setDestinationEntity(183U);
    msg.validity = 787U;
    msg.type = 74U;
    msg.utc_year = 12767U;
    msg.utc_month = 99U;
    msg.utc_day = 240U;
    msg.utc_time = 0.440099864629;
    msg.lat = 0.298375923761;
    msg.lon = 0.609293159172;
    msg.height = 0.404666348924;
    msg.satellites = 247U;
    msg.cog = 0.631295541364;
    msg.sog = 0.559427243209;
    msg.hdop = 0.668486756961;
    msg.vdop = 0.571299705635;
    msg.hacc = 0.0838977783303;
    msg.vacc = 0.848785951725;

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
    msg.setTimeStamp(0.97587486476);
    msg.setSource(39016U);
    msg.setSourceEntity(52U);
    msg.setDestination(3459U);
    msg.setDestinationEntity(147U);
    msg.validity = 23036U;
    msg.type = 119U;
    msg.utc_year = 46287U;
    msg.utc_month = 234U;
    msg.utc_day = 226U;
    msg.utc_time = 0.189400561678;
    msg.lat = 0.275789841945;
    msg.lon = 0.0952770460667;
    msg.height = 0.265426498118;
    msg.satellites = 198U;
    msg.cog = 0.839387096861;
    msg.sog = 0.720846257998;
    msg.hdop = 0.850494741452;
    msg.vdop = 0.274626355555;
    msg.hacc = 0.783788937614;
    msg.vacc = 0.890848463238;

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
    msg.setTimeStamp(0.473285486871);
    msg.setSource(49032U);
    msg.setSourceEntity(145U);
    msg.setDestination(44214U);
    msg.setDestinationEntity(177U);
    msg.time = 0.909694369488;
    msg.phi = 0.868985859903;
    msg.theta = 0.840065433974;
    msg.psi = 0.0780999187471;
    msg.psi_magnetic = 0.398237285515;

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
    msg.setTimeStamp(0.241141673659);
    msg.setSource(23017U);
    msg.setSourceEntity(78U);
    msg.setDestination(63403U);
    msg.setDestinationEntity(99U);
    msg.time = 0.567280136285;
    msg.phi = 0.804453499503;
    msg.theta = 0.590867207832;
    msg.psi = 0.0773317575745;
    msg.psi_magnetic = 0.497042938203;

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
    msg.setTimeStamp(0.918884783125);
    msg.setSource(4527U);
    msg.setSourceEntity(194U);
    msg.setDestination(59018U);
    msg.setDestinationEntity(155U);
    msg.time = 0.546346700921;
    msg.phi = 0.780668319349;
    msg.theta = 0.305625775608;
    msg.psi = 0.377287534722;
    msg.psi_magnetic = 0.639823398535;

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
    msg.setTimeStamp(0.237786010172);
    msg.setSource(50397U);
    msg.setSourceEntity(208U);
    msg.setDestination(28180U);
    msg.setDestinationEntity(35U);
    msg.time = 0.638608966884;
    msg.x = 0.942739626559;
    msg.y = 0.933313203658;
    msg.z = 0.12076484648;
    msg.timestep = 0.850192837611;

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
    msg.setTimeStamp(0.548092199859);
    msg.setSource(35054U);
    msg.setSourceEntity(211U);
    msg.setDestination(26255U);
    msg.setDestinationEntity(145U);
    msg.time = 0.130276170316;
    msg.x = 0.927117640744;
    msg.y = 0.866582690375;
    msg.z = 0.697227533909;
    msg.timestep = 0.480081276524;

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
    msg.setTimeStamp(0.285805998926);
    msg.setSource(52554U);
    msg.setSourceEntity(27U);
    msg.setDestination(51713U);
    msg.setDestinationEntity(28U);
    msg.time = 0.478836495491;
    msg.x = 0.696156157813;
    msg.y = 0.61134463739;
    msg.z = 0.0994811872153;
    msg.timestep = 0.938597291506;

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
    msg.setTimeStamp(0.0498420082566);
    msg.setSource(19071U);
    msg.setSourceEntity(0U);
    msg.setDestination(30253U);
    msg.setDestinationEntity(235U);
    msg.time = 0.0064437380689;
    msg.x = 0.080065837764;
    msg.y = 0.929491909942;
    msg.z = 0.238382247796;

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
    msg.setTimeStamp(0.908073435532);
    msg.setSource(6213U);
    msg.setSourceEntity(206U);
    msg.setDestination(44781U);
    msg.setDestinationEntity(144U);
    msg.time = 0.258415257982;
    msg.x = 0.944828375963;
    msg.y = 0.708285488093;
    msg.z = 0.742040899245;

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
    msg.setTimeStamp(0.200130469886);
    msg.setSource(53322U);
    msg.setSourceEntity(105U);
    msg.setDestination(53173U);
    msg.setDestinationEntity(219U);
    msg.time = 0.492278795047;
    msg.x = 0.566647855637;
    msg.y = 0.205242537832;
    msg.z = 0.653117564891;

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
    msg.setTimeStamp(0.740363583051);
    msg.setSource(13379U);
    msg.setSourceEntity(153U);
    msg.setDestination(48171U);
    msg.setDestinationEntity(141U);
    msg.time = 0.181626884411;
    msg.x = 0.786938608346;
    msg.y = 0.517771993566;
    msg.z = 0.73830989718;

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
    msg.setTimeStamp(0.0396483865246);
    msg.setSource(38570U);
    msg.setSourceEntity(165U);
    msg.setDestination(16029U);
    msg.setDestinationEntity(69U);
    msg.time = 0.299241552113;
    msg.x = 0.0121863299815;
    msg.y = 0.265264414624;
    msg.z = 0.690185062231;

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
    msg.setTimeStamp(0.978362476901);
    msg.setSource(39742U);
    msg.setSourceEntity(243U);
    msg.setDestination(13610U);
    msg.setDestinationEntity(81U);
    msg.time = 0.55850601932;
    msg.x = 0.307688996033;
    msg.y = 0.927827128382;
    msg.z = 0.0401979147714;

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
    msg.setTimeStamp(0.870803988467);
    msg.setSource(4011U);
    msg.setSourceEntity(214U);
    msg.setDestination(11877U);
    msg.setDestinationEntity(193U);
    msg.time = 0.894216729385;
    msg.x = 0.593494477117;
    msg.y = 0.670867968598;
    msg.z = 0.0326447159925;

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
    msg.setTimeStamp(0.46794726206);
    msg.setSource(46490U);
    msg.setSourceEntity(152U);
    msg.setDestination(57417U);
    msg.setDestinationEntity(215U);
    msg.time = 0.181189027997;
    msg.x = 0.110623849363;
    msg.y = 0.636801961976;
    msg.z = 0.646921119433;

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
    msg.setTimeStamp(0.0683038671494);
    msg.setSource(14647U);
    msg.setSourceEntity(26U);
    msg.setDestination(16224U);
    msg.setDestinationEntity(149U);
    msg.time = 0.277573593352;
    msg.x = 0.0919348926199;
    msg.y = 0.350578849369;
    msg.z = 0.189449559479;

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
    msg.setTimeStamp(0.506028309308);
    msg.setSource(59257U);
    msg.setSourceEntity(193U);
    msg.setDestination(15162U);
    msg.setDestinationEntity(43U);
    msg.validity = 247U;
    msg.x = 0.575071787724;
    msg.y = 0.933086276844;
    msg.z = 0.939346887552;

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
    msg.setTimeStamp(0.27198132692);
    msg.setSource(37771U);
    msg.setSourceEntity(215U);
    msg.setDestination(25821U);
    msg.setDestinationEntity(172U);
    msg.validity = 51U;
    msg.x = 0.0991592877383;
    msg.y = 0.662118826665;
    msg.z = 0.218949986571;

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
    msg.setTimeStamp(0.676314973772);
    msg.setSource(48005U);
    msg.setSourceEntity(37U);
    msg.setDestination(7122U);
    msg.setDestinationEntity(28U);
    msg.validity = 181U;
    msg.x = 0.166456458525;
    msg.y = 0.526799526652;
    msg.z = 0.54918739222;

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
    msg.setTimeStamp(0.12482834951);
    msg.setSource(26837U);
    msg.setSourceEntity(30U);
    msg.setDestination(3611U);
    msg.setDestinationEntity(95U);
    msg.validity = 66U;
    msg.x = 0.043116925315;
    msg.y = 0.796706716404;
    msg.z = 0.515039178566;

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
    msg.setTimeStamp(0.798066432979);
    msg.setSource(32773U);
    msg.setSourceEntity(59U);
    msg.setDestination(4306U);
    msg.setDestinationEntity(215U);
    msg.validity = 107U;
    msg.x = 0.132786645133;
    msg.y = 0.372491243201;
    msg.z = 0.812262754848;

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
    msg.setTimeStamp(0.691723242834);
    msg.setSource(51257U);
    msg.setSourceEntity(70U);
    msg.setDestination(26042U);
    msg.setDestinationEntity(243U);
    msg.validity = 113U;
    msg.x = 0.598281116519;
    msg.y = 0.339441242085;
    msg.z = 0.224702530034;

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
    msg.setTimeStamp(0.932374932325);
    msg.setSource(62914U);
    msg.setSourceEntity(202U);
    msg.setDestination(17659U);
    msg.setDestinationEntity(247U);
    msg.time = 0.711187077709;
    msg.x = 0.522847719904;
    msg.y = 0.205690156004;
    msg.z = 0.312647996047;

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
    msg.setTimeStamp(0.0714771391694);
    msg.setSource(4324U);
    msg.setSourceEntity(102U);
    msg.setDestination(21203U);
    msg.setDestinationEntity(63U);
    msg.time = 0.086172924892;
    msg.x = 0.477650097009;
    msg.y = 0.218220140879;
    msg.z = 0.38340445363;

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
    msg.setTimeStamp(0.28925976123);
    msg.setSource(41213U);
    msg.setSourceEntity(28U);
    msg.setDestination(38210U);
    msg.setDestinationEntity(65U);
    msg.time = 0.102635599776;
    msg.x = 0.831793376514;
    msg.y = 0.337801408812;
    msg.z = 0.0022369863922;

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
    msg.setTimeStamp(0.763522226959);
    msg.setSource(4263U);
    msg.setSourceEntity(21U);
    msg.setDestination(17967U);
    msg.setDestinationEntity(0U);
    msg.validity = 77U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.304053964157;
    tmp_msg_0.beam_height = 0.404768385082;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.794384267655;

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
    msg.setTimeStamp(0.731417771269);
    msg.setSource(16509U);
    msg.setSourceEntity(115U);
    msg.setDestination(37986U);
    msg.setDestinationEntity(59U);
    msg.validity = 237U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.925047787344;
    tmp_msg_0.beam_height = 0.671012562825;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.0494218074902;

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
    msg.setTimeStamp(0.0351362845032);
    msg.setSource(64186U);
    msg.setSourceEntity(207U);
    msg.setDestination(57526U);
    msg.setDestinationEntity(205U);
    msg.validity = 49U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0936963847095;
    tmp_msg_0.y = 0.988233945879;
    tmp_msg_0.z = 0.507944410313;
    tmp_msg_0.phi = 0.554760645715;
    tmp_msg_0.theta = 0.4384319388;
    tmp_msg_0.psi = 0.819553456353;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.361720937263;
    tmp_msg_1.beam_height = 0.913101924408;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.180647452148;

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
    msg.setTimeStamp(0.256396453621);
    msg.setSource(32125U);
    msg.setSourceEntity(179U);
    msg.setDestination(21154U);
    msg.setDestinationEntity(151U);
    msg.value = 0.90470394879;

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
    msg.setTimeStamp(0.348648274653);
    msg.setSource(54125U);
    msg.setSourceEntity(104U);
    msg.setDestination(11013U);
    msg.setDestinationEntity(139U);
    msg.value = 0.0257593851992;

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
    msg.setTimeStamp(0.541803950351);
    msg.setSource(24825U);
    msg.setSourceEntity(81U);
    msg.setDestination(54724U);
    msg.setDestinationEntity(149U);
    msg.value = 0.887739520375;

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
    msg.setTimeStamp(0.743697833348);
    msg.setSource(12642U);
    msg.setSourceEntity(27U);
    msg.setDestination(54462U);
    msg.setDestinationEntity(220U);
    msg.value = 0.231283096227;

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
    msg.setTimeStamp(0.9943685541);
    msg.setSource(905U);
    msg.setSourceEntity(137U);
    msg.setDestination(59305U);
    msg.setDestinationEntity(0U);
    msg.value = 0.4675075617;

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
    msg.setTimeStamp(0.758960814846);
    msg.setSource(19837U);
    msg.setSourceEntity(145U);
    msg.setDestination(52734U);
    msg.setDestinationEntity(137U);
    msg.value = 0.139409462112;

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
    msg.setTimeStamp(0.822771928658);
    msg.setSource(37704U);
    msg.setSourceEntity(205U);
    msg.setDestination(53014U);
    msg.setDestinationEntity(34U);
    msg.value = 0.279445951388;

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
    msg.setTimeStamp(0.209698075988);
    msg.setSource(15531U);
    msg.setSourceEntity(244U);
    msg.setDestination(11434U);
    msg.setDestinationEntity(96U);
    msg.value = 0.234251099965;

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
    msg.setTimeStamp(0.630676522863);
    msg.setSource(60497U);
    msg.setSourceEntity(168U);
    msg.setDestination(26378U);
    msg.setDestinationEntity(236U);
    msg.value = 0.689747095644;

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
    msg.setTimeStamp(0.67222239953);
    msg.setSource(8839U);
    msg.setSourceEntity(134U);
    msg.setDestination(17528U);
    msg.setDestinationEntity(193U);
    msg.value = 0.377651279183;

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
    msg.setTimeStamp(0.403040864453);
    msg.setSource(22438U);
    msg.setSourceEntity(90U);
    msg.setDestination(41262U);
    msg.setDestinationEntity(132U);
    msg.value = 0.383961145733;

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
    msg.setTimeStamp(0.0932750612686);
    msg.setSource(53469U);
    msg.setSourceEntity(41U);
    msg.setDestination(49437U);
    msg.setDestinationEntity(27U);
    msg.value = 0.496936512261;

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
    msg.setTimeStamp(0.367246506114);
    msg.setSource(60821U);
    msg.setSourceEntity(42U);
    msg.setDestination(13221U);
    msg.setDestinationEntity(25U);
    msg.value = 0.952623717222;

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
    msg.setTimeStamp(0.453695111055);
    msg.setSource(56075U);
    msg.setSourceEntity(189U);
    msg.setDestination(33123U);
    msg.setDestinationEntity(35U);
    msg.value = 0.355654237744;

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
    msg.setTimeStamp(0.45486808218);
    msg.setSource(11023U);
    msg.setSourceEntity(206U);
    msg.setDestination(5343U);
    msg.setDestinationEntity(28U);
    msg.value = 0.706809958716;

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
    msg.setTimeStamp(0.373060597965);
    msg.setSource(35588U);
    msg.setSourceEntity(13U);
    msg.setDestination(31623U);
    msg.setDestinationEntity(96U);
    msg.value = 0.339704630375;

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
    msg.setTimeStamp(0.861121540056);
    msg.setSource(56317U);
    msg.setSourceEntity(183U);
    msg.setDestination(34389U);
    msg.setDestinationEntity(204U);
    msg.value = 0.613650726996;

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
    msg.setTimeStamp(0.947097214152);
    msg.setSource(4563U);
    msg.setSourceEntity(105U);
    msg.setDestination(57200U);
    msg.setDestinationEntity(182U);
    msg.value = 0.664145689229;

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
    msg.setTimeStamp(0.394416560485);
    msg.setSource(64521U);
    msg.setSourceEntity(127U);
    msg.setDestination(263U);
    msg.setDestinationEntity(107U);
    msg.value = 0.296794149054;

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
    msg.setTimeStamp(0.471216201967);
    msg.setSource(54315U);
    msg.setSourceEntity(161U);
    msg.setDestination(14278U);
    msg.setDestinationEntity(193U);
    msg.value = 0.476797520742;

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
    msg.setTimeStamp(0.612756000593);
    msg.setSource(26311U);
    msg.setSourceEntity(4U);
    msg.setDestination(60175U);
    msg.setDestinationEntity(87U);
    msg.value = 0.413039987262;

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
    msg.setTimeStamp(0.0955149915715);
    msg.setSource(55341U);
    msg.setSourceEntity(61U);
    msg.setDestination(1000U);
    msg.setDestinationEntity(97U);
    msg.value = 0.0183905240203;

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
    msg.setTimeStamp(0.0916878555999);
    msg.setSource(23054U);
    msg.setSourceEntity(9U);
    msg.setDestination(40384U);
    msg.setDestinationEntity(2U);
    msg.value = 0.663958541705;

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
    msg.setTimeStamp(0.969036081093);
    msg.setSource(20848U);
    msg.setSourceEntity(124U);
    msg.setDestination(44644U);
    msg.setDestinationEntity(116U);
    msg.value = 0.639454870469;

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
    msg.setTimeStamp(0.23949646082);
    msg.setSource(28199U);
    msg.setSourceEntity(168U);
    msg.setDestination(1200U);
    msg.setDestinationEntity(154U);
    msg.direction = 0.147834374581;
    msg.speed = 0.0505546528903;
    msg.turbulence = 0.766179349618;

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
    msg.setTimeStamp(0.381249534036);
    msg.setSource(2884U);
    msg.setSourceEntity(46U);
    msg.setDestination(24549U);
    msg.setDestinationEntity(194U);
    msg.direction = 0.0269611372381;
    msg.speed = 0.295148281344;
    msg.turbulence = 0.527803028889;

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
    msg.setTimeStamp(0.0683579842475);
    msg.setSource(13518U);
    msg.setSourceEntity(207U);
    msg.setDestination(59874U);
    msg.setDestinationEntity(46U);
    msg.direction = 0.969617339964;
    msg.speed = 0.039418741472;
    msg.turbulence = 0.514213392768;

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
    msg.setTimeStamp(0.764063574161);
    msg.setSource(17589U);
    msg.setSourceEntity(97U);
    msg.setDestination(6958U);
    msg.setDestinationEntity(64U);
    msg.value = 0.532758474524;

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
    msg.setTimeStamp(0.971535838643);
    msg.setSource(26685U);
    msg.setSourceEntity(153U);
    msg.setDestination(40806U);
    msg.setDestinationEntity(202U);
    msg.value = 0.0667330796799;

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
    msg.setTimeStamp(0.526950845891);
    msg.setSource(35291U);
    msg.setSourceEntity(214U);
    msg.setDestination(44381U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0162523116858;

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
    msg.setTimeStamp(0.975849307699);
    msg.setSource(54359U);
    msg.setSourceEntity(169U);
    msg.setDestination(39546U);
    msg.setDestinationEntity(239U);
    msg.value.assign("FDJSZLELVRULXLXMOXVFZXFTTRVTAETDBUDPPSLOBGZEFHWPDJXDAZJGPOHXKZVRSCMAQVLYUMKWVHSYEJMYPQVRSUPRYTNFGMUIAWBRGUPJCKKHYBEUOEJLNWBAHSEQTJIIFGYWEYCNNIIRWTOHDNQCKIUFRESHPQBOMNZCFAIGGNZWVRBAXDWXZKNZVQ");

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
    msg.setTimeStamp(0.950490782425);
    msg.setSource(16543U);
    msg.setSourceEntity(149U);
    msg.setDestination(49618U);
    msg.setDestinationEntity(70U);
    msg.value.assign("PJEPBFVPKLUKPVDIEFSLFNHQUOIYUJNWMMXTNGZOUJRMTYYWVWRXVWETACEMBKBZSSSQDIFKBWHCAFYMMKAJHYNDDIGILOFQONLEZCFGPKOJLCHZJCOTEWQENTZELKAIKHRGQMTOJSDTNVZAYNABMSWTDASTPJZQUIQMBUVVLRWJHOPBGRXDBQIXQGAGAKCJIXXGDWKO");

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
    msg.setTimeStamp(0.414970423527);
    msg.setSource(38472U);
    msg.setSourceEntity(108U);
    msg.setDestination(19954U);
    msg.setDestinationEntity(168U);
    msg.value.assign("XFADZVPFIGUWNEPBZSHVK");

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
    msg.setTimeStamp(0.238234554859);
    msg.setSource(28862U);
    msg.setSourceEntity(230U);
    msg.setDestination(38555U);
    msg.setDestinationEntity(247U);
    const char tmp_msg_0[] = {-20, -42, 67, -36, 98, -61, -18, 89, -58, 34, -24, 18, -47, -83, 84, -3, 89, 35, -99, 12, -65, 58, 37, 100, -24, 5, 85, -99, 49, 41, 76, 3, -41, 112, 50, 75, 121, -37, 86, 97, -16, -11, -35, 104, -116, 114, -47, -121, 26, 92, 105, -83, -25, -65, 104, -6, 101, -125, -90, -11, 54, 33, 86, -123, 13, 0, -44, 93, 15, 82, 48, -128, -71, 47, 33, -112, -15, -67, -18, 58, 47, 42, 67};
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
    msg.setTimeStamp(0.711385131916);
    msg.setSource(46224U);
    msg.setSourceEntity(143U);
    msg.setDestination(43723U);
    msg.setDestinationEntity(193U);
    const char tmp_msg_0[] = {-23, 87, 83, 114, 38, -98, -85, 51, 101, -98, -25, -12, -74, -98, -101, -106, 24, -26, 43, 121, -49, 72, -122, 34, -82, -12, -112, -6, 115, -121, -68, -33, -38, 41, 63, -37, -93, -42, 93, 74, 28, 11, 6, 15, 89, 108, -1, -104, 112, -84, -78, 102, 20, -119, 88, -29, -4, 117, -25, -6, 20, -53, 107, -43, 84, -89, -77, -87, 94, 121, 12, -55, -5, -96, -108, 71};
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
    msg.setTimeStamp(0.983261443018);
    msg.setSource(21570U);
    msg.setSourceEntity(31U);
    msg.setDestination(690U);
    msg.setDestinationEntity(235U);
    const char tmp_msg_0[] = {-26, 12, -9, -22, -17, 31, 67, 105, -91, -126, -46, 0, 10, 26, -125, 15, 49, 89, -57, -109, 74, -21, -77, 83, -50, 38, -11, 110, -28, -79, -11, 73, 36, -84, -102, 95, 44, -85, -33, 29, -67, -113, -88, 68, -27, 98, 28, -55, 3, 43, -79, -63, -63, 56, -118, 10, -64, 35, -64, -96, -103, 70, 34, 61, 115, -88, 119, 37, 114, 42, -57, -29, -122, 77, -93, -75, -30, 3, 35, -77, 36, -128, -36, -49, -103, -3, 122, -105, 11, 105, -35, -100, 44};
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
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.635143628789);
    msg.setSource(34994U);
    msg.setSourceEntity(71U);
    msg.setDestination(2073U);
    msg.setDestinationEntity(147U);
    msg.frequency = 3109077654U;
    msg.min_range = 38791U;
    msg.max_range = 53019U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.405142571134);
    msg.setSource(44423U);
    msg.setSourceEntity(146U);
    msg.setDestination(50477U);
    msg.setDestinationEntity(67U);
    msg.frequency = 3492794195U;
    msg.min_range = 40336U;
    msg.max_range = 33988U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.0256848163917);
    msg.setSource(33932U);
    msg.setSourceEntity(239U);
    msg.setDestination(22447U);
    msg.setDestinationEntity(148U);
    msg.frequency = 734774654U;
    msg.min_range = 47257U;
    msg.max_range = 17796U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #2", msg == *msg_d);
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
    msg.setTimeStamp(0.501784156712);
    msg.setSource(39805U);
    msg.setSourceEntity(80U);
    msg.setDestination(30181U);
    msg.setDestinationEntity(197U);
    msg.type = 107U;
    msg.frequency = 1689433376U;
    msg.min_range = 49826U;
    msg.max_range = 50065U;
    msg.bits_per_point = 101U;
    msg.scale_factor = 0.812310270979;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0805465253655;
    tmp_msg_0.beam_height = 0.244035264674;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {83, -104, 53, -122, 57, 48, 69, 66, 62, -28, -58, 27, -47, -115, 121, 26, -92, 74, -9, 112, -63, 103, -55, -76, -23, -75, -62, -2, 81, -35, -122, 51, -125, -126, 34, 120, 115, 74, 18, -62, -46, -99, 44, -60, -1, -85, -67, -32, -12, 71, 120, -32, -89, 69, 36, -81, -23, 101, -21, 104, 96, -28, 103, 105, 24, 6, 97, 56, 12, 24, -75, 21, 2, 19, 62, 23, 67, -101, 16, -72, -43, -124, -54, -105, 72, -4, 83, 76, -47, 65, 81, 25, 80, -54, -100, 60, 104, -54, -30, -104, -33, 102, -53, -127, -128, 124, -49, 47, -126, -42, -128, 82, -97, 13, 120, -60, 51, -60, 3, 10, 102, -111, 98, -13, -31, -52, -70, -111, -80, 84, -91, -23, 28, 14, -71, -27, 30, -57, -73, 37, -40, -68, 17, -6, 1, 96, -78, -26, -107, 51, -78, -85, -81, -68, -10, -24, 50, 22, -103, -62, 40, -65, -13, 115, -82, -100, -23, -52, -105, -127, 120, -8, 104, 73, 43, 90, 87, 23, -19, -30, -18, 61, -115, -12, -9, 41, 81, 76, 26, 80, -73, 37, 39, 104, -88, 95, -39, 107, -85, -64, -52, 59, 71, 62, -8, 94, -70, 41, 94, 94, 41, 67, -48, 26, 4, -80, -1, -14, 109, 57, -9, 83, -38, -46, 119, 23, -49, -24, 83, -22, -103, -34, 12, -97, -49, 122, 18, -127, 77, -24, -81, 23, -82, 31};
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
    msg.setTimeStamp(0.903736507689);
    msg.setSource(29237U);
    msg.setSourceEntity(104U);
    msg.setDestination(30771U);
    msg.setDestinationEntity(124U);
    msg.type = 239U;
    msg.frequency = 4285246322U;
    msg.min_range = 61583U;
    msg.max_range = 40046U;
    msg.bits_per_point = 55U;
    msg.scale_factor = 0.0467475940169;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.887105385168;
    tmp_msg_0.beam_height = 0.390156561048;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-95, -90, 38, 115, 90, -111, 87, -39, -81, 115, 27, -14, 120, 106, -100, 66, 60, -27, 51, -57, 85, 118, -101, -45, 63, -112, -113, -87, 112, -92, 46, -5, 99, -70, 82, 2, -39, -62, 100, -22, -6, -74, 104, 74, -75, 52, -20, 20, -43, -32, -35, 55, 83, -77, 117, -28, -22, 51, 75, -22, 96, 70, -71, 45, -2, -10, 84, 101, 94, -25, -35, 120, -38, 107, 90, -65, -122, -111, -45, -95, -43, 80, -116, -73, -28, -79, -51, -114, -2, -42, -103, -79, -48, -38, -9, -29, 113, 69, -29, -7, -112, 24, -25, -12, -123, -114, 71, -96, -116, 40, 36, -90, -73, -24, -123, -31, 28, -97, 112, -23, 80, -31, -98, -37, 100, -38, -43, 87, 102, 22, -128, -9, -123, -34, -24, -53, -15, 1, 33, -110, 120, -4, -84, -41, 83, 42, 40, 124, -115, -21, -16, -72, -92, -55, 38, 36, -98, -93, -46, -53, 49, 120, -85, 120, 97, -51, -9, 41, 33, -67, -40, -5, 115, 91, -105, 98, 35, 114, -114, 70, -57, 82, -38, -15, 55, -21, -31, 4, -20, 49, -24, 114, 72, -10, -91, -78, 80, 125, -127, 4, -96, -108, 115, -120, -126, 44, -100, -115, 9, -47, 31, 20, 123, -106, 78, 34, 103, -100, -28, 86, 70, 6, 4, 112, 3, -97, 70, 12, 96, 100, 92, -80, -5, -78, -87, 29, 49};
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
    msg.setTimeStamp(0.699069392499);
    msg.setSource(63935U);
    msg.setSourceEntity(220U);
    msg.setDestination(42839U);
    msg.setDestinationEntity(240U);
    msg.type = 135U;
    msg.frequency = 297238578U;
    msg.min_range = 50276U;
    msg.max_range = 60286U;
    msg.bits_per_point = 228U;
    msg.scale_factor = 0.7437216159;
    const char tmp_msg_0[] = {-64, 74, 120, -25, 49, -63, 26, 123, -61, 59, 113, 45, -5, 85, -126, -62, 123, 121, -10, 98, 10, 35, 64, -104, 79, -103, 99, 70, -104, -62, -39, -62, -24, -2, 89, 36, -57, 60, 97, 65, 57, -25, 54, -69, 29, 93, 48, -114, 75, -60, -65, -108, 40, 84, -101, 121, -64, -77, -126, -97, 4, -70, -45, -53, 94, 49, 35, 24, -52, -19, -76, -44, 70, -115, 63, -113, -122, 41, -59, 95, -72, -77, 42, 44, -19, -102, 29, 120, 16, -53, 101, -40, 2, -100, -95, 22, 33, 61, -128, -93, -52, 54, 49, -13, 87, 29, 84, -42, 70, 124, 85, 45, 23, -99, 106, -65, 0, -120, -49, -83, 72};
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
    msg.setTimeStamp(0.990097803744);
    msg.setSource(26945U);
    msg.setSourceEntity(182U);
    msg.setDestination(25527U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.983738763234);
    msg.setSource(24268U);
    msg.setSourceEntity(176U);
    msg.setDestination(42094U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.74133454297);
    msg.setSource(22071U);
    msg.setSourceEntity(37U);
    msg.setDestination(44928U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.0700415888716);
    msg.setSource(25293U);
    msg.setSourceEntity(101U);
    msg.setDestination(17450U);
    msg.setDestinationEntity(211U);
    msg.op = 224U;

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
    msg.setTimeStamp(0.636868662244);
    msg.setSource(7831U);
    msg.setSourceEntity(150U);
    msg.setDestination(16797U);
    msg.setDestinationEntity(90U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.178993762455);
    msg.setSource(60888U);
    msg.setSourceEntity(187U);
    msg.setDestination(11371U);
    msg.setDestinationEntity(147U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.97279953474);
    msg.setSource(43565U);
    msg.setSourceEntity(71U);
    msg.setDestination(42324U);
    msg.setDestinationEntity(97U);
    msg.value = 0.369346541023;
    msg.confidence = 0.907887510008;
    msg.opmodes.assign("BAUPQGSVPWZWWSKCIXARX");

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
    msg.setTimeStamp(0.495457383601);
    msg.setSource(32237U);
    msg.setSourceEntity(63U);
    msg.setDestination(29429U);
    msg.setDestinationEntity(157U);
    msg.value = 0.276937332303;
    msg.confidence = 0.503183835387;
    msg.opmodes.assign("IXQNKCSLYWBAGDLEINO");

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
    msg.setTimeStamp(0.706555786627);
    msg.setSource(21590U);
    msg.setSourceEntity(122U);
    msg.setDestination(24729U);
    msg.setDestinationEntity(55U);
    msg.value = 0.226401841235;
    msg.confidence = 0.880072973312;
    msg.opmodes.assign("UPXDUGEAZWAOLRCMVFBBO");

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
    msg.setTimeStamp(0.447489860542);
    msg.setSource(4715U);
    msg.setSourceEntity(249U);
    msg.setDestination(19941U);
    msg.setDestinationEntity(204U);
    msg.itow = 2576955036U;
    msg.lat = 0.527505329603;
    msg.lon = 0.284359616094;
    msg.height_ell = 0.269972898076;
    msg.height_sea = 0.014704102859;
    msg.hacc = 0.235139068729;
    msg.vacc = 0.64128518863;
    msg.vel_n = 0.162671016651;
    msg.vel_e = 0.0360000433646;
    msg.vel_d = 0.229788290285;
    msg.speed = 0.698890046668;
    msg.gspeed = 0.773736692549;
    msg.heading = 0.184346432887;
    msg.sacc = 0.171816139841;
    msg.cacc = 0.170362343914;

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
    msg.setTimeStamp(0.395764646005);
    msg.setSource(49727U);
    msg.setSourceEntity(147U);
    msg.setDestination(56885U);
    msg.setDestinationEntity(232U);
    msg.itow = 156062656U;
    msg.lat = 0.375065511912;
    msg.lon = 0.804500952295;
    msg.height_ell = 0.95691035443;
    msg.height_sea = 0.686002480455;
    msg.hacc = 0.949936026259;
    msg.vacc = 0.34745695613;
    msg.vel_n = 0.808299880467;
    msg.vel_e = 0.149881724658;
    msg.vel_d = 0.707681850728;
    msg.speed = 0.492956023658;
    msg.gspeed = 0.675874240858;
    msg.heading = 0.237769780955;
    msg.sacc = 0.312092095993;
    msg.cacc = 0.282138295921;

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
    msg.setTimeStamp(0.109207403771);
    msg.setSource(30116U);
    msg.setSourceEntity(229U);
    msg.setDestination(64507U);
    msg.setDestinationEntity(248U);
    msg.itow = 2374460561U;
    msg.lat = 0.572781379706;
    msg.lon = 0.434869166395;
    msg.height_ell = 0.983533562972;
    msg.height_sea = 0.562356946115;
    msg.hacc = 0.649144585052;
    msg.vacc = 0.850958802184;
    msg.vel_n = 0.450473771116;
    msg.vel_e = 0.69235309349;
    msg.vel_d = 0.735878826266;
    msg.speed = 0.855068572799;
    msg.gspeed = 0.440016091264;
    msg.heading = 0.732504165083;
    msg.sacc = 0.985447775519;
    msg.cacc = 0.800130290563;

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
    msg.setTimeStamp(0.608805807422);
    msg.setSource(58615U);
    msg.setSourceEntity(45U);
    msg.setDestination(15557U);
    msg.setDestinationEntity(222U);
    msg.id = 104U;
    msg.value = 0.0911109803373;

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
    msg.setTimeStamp(0.154136653496);
    msg.setSource(35066U);
    msg.setSourceEntity(230U);
    msg.setDestination(32145U);
    msg.setDestinationEntity(90U);
    msg.id = 135U;
    msg.value = 0.666031621488;

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
    msg.setTimeStamp(0.638429936668);
    msg.setSource(16866U);
    msg.setSourceEntity(157U);
    msg.setDestination(26180U);
    msg.setDestinationEntity(182U);
    msg.id = 203U;
    msg.value = 0.317714446132;

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
    msg.setTimeStamp(0.310472364463);
    msg.setSource(21830U);
    msg.setSourceEntity(76U);
    msg.setDestination(21230U);
    msg.setDestinationEntity(25U);
    msg.x = 0.510525300624;
    msg.y = 0.477304674701;
    msg.z = 0.993291756846;
    msg.phi = 0.717600588534;
    msg.theta = 0.479601711746;
    msg.psi = 0.248821030064;

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
    msg.setTimeStamp(0.848274437376);
    msg.setSource(22497U);
    msg.setSourceEntity(11U);
    msg.setDestination(13569U);
    msg.setDestinationEntity(49U);
    msg.x = 0.507680301057;
    msg.y = 0.318214172788;
    msg.z = 0.975883323245;
    msg.phi = 0.453062107321;
    msg.theta = 0.824774853847;
    msg.psi = 0.114419606197;

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
    msg.setTimeStamp(0.0886172215861);
    msg.setSource(17784U);
    msg.setSourceEntity(27U);
    msg.setDestination(24226U);
    msg.setDestinationEntity(217U);
    msg.x = 0.204613997949;
    msg.y = 0.483896483833;
    msg.z = 0.0948433666149;
    msg.phi = 0.451464101406;
    msg.theta = 0.817593125456;
    msg.psi = 0.60230577082;

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
    msg.setTimeStamp(0.651120357498);
    msg.setSource(63606U);
    msg.setSourceEntity(126U);
    msg.setDestination(44751U);
    msg.setDestinationEntity(82U);
    msg.beam_width = 0.232094440403;
    msg.beam_height = 0.605164042986;

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
    msg.setTimeStamp(0.308708140368);
    msg.setSource(24162U);
    msg.setSourceEntity(14U);
    msg.setDestination(19615U);
    msg.setDestinationEntity(108U);
    msg.beam_width = 0.733639477118;
    msg.beam_height = 0.0909440580225;

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
    msg.setTimeStamp(0.124798816966);
    msg.setSource(6216U);
    msg.setSourceEntity(233U);
    msg.setDestination(55064U);
    msg.setDestinationEntity(99U);
    msg.beam_width = 0.609218645323;
    msg.beam_height = 0.0765585495488;

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
    msg.setTimeStamp(0.541865076392);
    msg.setSource(33354U);
    msg.setSourceEntity(184U);
    msg.setDestination(51544U);
    msg.setDestinationEntity(62U);
    msg.sane = 116U;

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
    msg.setTimeStamp(0.653038980549);
    msg.setSource(46985U);
    msg.setSourceEntity(199U);
    msg.setDestination(13880U);
    msg.setDestinationEntity(33U);
    msg.sane = 40U;

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
    msg.setTimeStamp(0.525090087964);
    msg.setSource(16519U);
    msg.setSourceEntity(211U);
    msg.setDestination(45904U);
    msg.setDestinationEntity(176U);
    msg.sane = 72U;

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
    msg.setTimeStamp(0.797690349342);
    msg.setSource(53191U);
    msg.setSourceEntity(77U);
    msg.setDestination(42776U);
    msg.setDestinationEntity(20U);
    msg.id = 36U;
    msg.zoom = 239U;
    msg.action = 232U;

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
    msg.setTimeStamp(0.774863109865);
    msg.setSource(6848U);
    msg.setSourceEntity(97U);
    msg.setDestination(40741U);
    msg.setDestinationEntity(213U);
    msg.id = 185U;
    msg.zoom = 228U;
    msg.action = 139U;

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
    msg.setTimeStamp(0.971514525468);
    msg.setSource(54880U);
    msg.setSourceEntity(117U);
    msg.setDestination(62511U);
    msg.setDestinationEntity(36U);
    msg.id = 248U;
    msg.zoom = 243U;
    msg.action = 247U;

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
    msg.setTimeStamp(0.199732714997);
    msg.setSource(48924U);
    msg.setSourceEntity(184U);
    msg.setDestination(7411U);
    msg.setDestinationEntity(241U);
    msg.id = 211U;
    msg.value = 0.606364948496;

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
    msg.setTimeStamp(0.633661842426);
    msg.setSource(17370U);
    msg.setSourceEntity(78U);
    msg.setDestination(5891U);
    msg.setDestinationEntity(202U);
    msg.id = 128U;
    msg.value = 0.075055929661;

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
    msg.setTimeStamp(0.0603704782679);
    msg.setSource(25799U);
    msg.setSourceEntity(56U);
    msg.setDestination(47811U);
    msg.setDestinationEntity(175U);
    msg.id = 190U;
    msg.value = 0.0615090563044;

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
    msg.setTimeStamp(0.973963796788);
    msg.setSource(60066U);
    msg.setSourceEntity(24U);
    msg.setDestination(10001U);
    msg.setDestinationEntity(150U);
    msg.id = 226U;
    msg.value = 0.734066104356;

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
    msg.setTimeStamp(0.39897777423);
    msg.setSource(42463U);
    msg.setSourceEntity(136U);
    msg.setDestination(21653U);
    msg.setDestinationEntity(128U);
    msg.id = 136U;
    msg.value = 0.322041106094;

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
    msg.setTimeStamp(0.774623555518);
    msg.setSource(15322U);
    msg.setSourceEntity(61U);
    msg.setDestination(27648U);
    msg.setDestinationEntity(97U);
    msg.id = 28U;
    msg.value = 0.470688984226;

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
    msg.setTimeStamp(0.220351779476);
    msg.setSource(35338U);
    msg.setSourceEntity(46U);
    msg.setDestination(62205U);
    msg.setDestinationEntity(52U);
    msg.id = 201U;
    msg.angle = 0.42719850207;

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
    msg.setTimeStamp(0.083475410589);
    msg.setSource(14637U);
    msg.setSourceEntity(7U);
    msg.setDestination(56999U);
    msg.setDestinationEntity(34U);
    msg.id = 91U;
    msg.angle = 0.382569225695;

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
    msg.setTimeStamp(0.729281611255);
    msg.setSource(56358U);
    msg.setSourceEntity(222U);
    msg.setDestination(5911U);
    msg.setDestinationEntity(142U);
    msg.id = 184U;
    msg.angle = 0.565557850078;

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
    msg.setTimeStamp(0.451587639103);
    msg.setSource(55466U);
    msg.setSourceEntity(87U);
    msg.setDestination(52167U);
    msg.setDestinationEntity(152U);
    msg.op = 66U;
    msg.actions.assign("FINOVNDCXCWOLHUERLHUFCRIAJYKIBHATTNDPITNNUJRVTIPQSTGMMKROJZJDKWMCPLCJNVQSYRVADXDAFMZESFLGXBAWZQLEFMEXYSCYFMOYCAGFBELSWZSXCICW");

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
    msg.setTimeStamp(0.652293353695);
    msg.setSource(47512U);
    msg.setSourceEntity(177U);
    msg.setDestination(18565U);
    msg.setDestinationEntity(30U);
    msg.op = 56U;
    msg.actions.assign("PHUWUZZVMTLXUDCHGSEGHUGWYWKKSCKIJGEWOJOCQKHPTTZMMVNFHHVDBKIYNGOPZEXVJEFUUHBXWLQFVQYPCWBLOOMKWGPNSYVMKTJSOLCTTUIPDMBZKIJNKGIFCQMTJDRPYAZICLOCOFJRAATRXDZADVXULABUOXIGHRFSWNNPMICBINFWJLNMZZRLGJBGYFSYVNQNHXRALBBDEHEQIYEQTFXCSOMDSUFRAJTZQYEVDEADASBXK");

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
    msg.setTimeStamp(0.187147109427);
    msg.setSource(37378U);
    msg.setSourceEntity(218U);
    msg.setDestination(26930U);
    msg.setDestinationEntity(12U);
    msg.op = 249U;
    msg.actions.assign("NDJEOOICWDVMMFXGFILFWWFDGZTUQUICNUAMJQTUGQXTQOYKQIBCQAHXFYBVZARIPBMOCBECDIIRPGVORXJNABNUYLPPPFOBKCKVNTEAIYJYGLHVXHDDRYHWRV");

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
    msg.setTimeStamp(0.877925180222);
    msg.setSource(65254U);
    msg.setSourceEntity(90U);
    msg.setDestination(12464U);
    msg.setDestinationEntity(26U);
    msg.actions.assign("DPLKFHIXKEHXPKSRUTRTPRMWVCUFRDSAMHQULAFEATGIJYADWPQHFMMYIZFXFAOZJVAXUNT");

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
    msg.setTimeStamp(0.785508165083);
    msg.setSource(15736U);
    msg.setSourceEntity(35U);
    msg.setDestination(44890U);
    msg.setDestinationEntity(137U);
    msg.actions.assign("QRORKEXQGDSEWOCKMYPVJRJFHNQFACPHJOHNGWJFEGBDZVMPDTNUISAXWNJBGSWESCQXZPYOCUENLNWGOJHMMWH");

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
    msg.setTimeStamp(0.405649229598);
    msg.setSource(16229U);
    msg.setSourceEntity(1U);
    msg.setDestination(42303U);
    msg.setDestinationEntity(31U);
    msg.actions.assign("JVUZCGWODXCHRVWHTTYHQONQYHIZDQORMLWCKFSOMWQVXCDNNZFLIAHZVEBACAEASFDYUPEEJGBXJVBVWSZ");

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
    msg.setTimeStamp(0.799593763319);
    msg.setSource(57130U);
    msg.setSourceEntity(10U);
    msg.setDestination(63193U);
    msg.setDestinationEntity(83U);
    msg.button = 32U;
    msg.value = 131U;

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
    msg.setTimeStamp(0.601019741228);
    msg.setSource(22296U);
    msg.setSourceEntity(165U);
    msg.setDestination(6342U);
    msg.setDestinationEntity(137U);
    msg.button = 249U;
    msg.value = 133U;

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
    msg.setTimeStamp(0.715603789937);
    msg.setSource(35269U);
    msg.setSourceEntity(81U);
    msg.setDestination(42886U);
    msg.setDestinationEntity(220U);
    msg.button = 21U;
    msg.value = 43U;

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
    msg.setTimeStamp(0.823648579634);
    msg.setSource(39236U);
    msg.setSourceEntity(101U);
    msg.setDestination(2116U);
    msg.setDestinationEntity(175U);
    msg.op = 32U;
    msg.text.assign("NXJRFUKKAWXZDFDBZKEMXRKGNSQIJYBDVOVYNMYICWMHCTOAXIGHMMZCYKXLGIQNEGAZUKKWFMLHWCJSLTZXIHQGTVEHANFYBLGOASZJUDIUDLVKVHHRSQGORQEJEYZBEMNBUPVBCSTUNJDPGCLCTRQDZNPFDILYKEOEORVPNLGWXOWZWMBSWSJPPUARETHRXAFLTXPSHUJMTQCMPRGPZXDUYNITCYOIVLJCPHRSWIBKFOYOVVEFQD");

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
    msg.setTimeStamp(0.130891337993);
    msg.setSource(14534U);
    msg.setSourceEntity(160U);
    msg.setDestination(55030U);
    msg.setDestinationEntity(205U);
    msg.op = 59U;
    msg.text.assign("XHOUXKGWDODZRDYKKKSXCOVVTVDCSTEYICTBZZLLZLJRIMUHKWHGNSOCLHQDOCLRHBORNPBBKZPGIBMZVSNSPBWSMTEERHOJYTEGRGBDNAPDQWOCUYYGRFQPIRIAMTMAEQCJZXHEDNLWGXOTHPMAMJYOUTEFLAUNVQEXLCQFCQWNYGNSZEUAWSCMAIKQYJASKRXAMPPVVFWZZV");

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
    msg.setTimeStamp(0.289789414421);
    msg.setSource(1137U);
    msg.setSourceEntity(187U);
    msg.setDestination(42355U);
    msg.setDestinationEntity(18U);
    msg.op = 142U;
    msg.text.assign("BJPWDCLHJKQVRZMCSPAKDOTMYQYDCPOPURDHKZKIIYPLQTBKPNZXXKFJXBGYEWWQLMDZLOJUPHQZHVOVCREGDCTNTRUXSYERJFFNSKIKVEGBOGASPRLXPQFOAVTCTGNMVBMEREFJAPAAEFZANUUFGBXLRKZWISIUDETOHWWCYCWRRDSWNBYVBJYZYJMMILGEALQQBVVOFWNUUF");

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
    msg.setTimeStamp(0.991376775671);
    msg.setSource(4958U);
    msg.setSourceEntity(187U);
    msg.setDestination(15871U);
    msg.setDestinationEntity(59U);
    msg.op = 214U;
    msg.time_remain = 0.70291864541;
    msg.sched_time = 0.285624004883;

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
    msg.setTimeStamp(0.572509019368);
    msg.setSource(3552U);
    msg.setSourceEntity(149U);
    msg.setDestination(63609U);
    msg.setDestinationEntity(153U);
    msg.op = 70U;
    msg.time_remain = 0.887729163804;
    msg.sched_time = 0.456874803763;

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
    msg.setTimeStamp(0.00816265619793);
    msg.setSource(37979U);
    msg.setSourceEntity(70U);
    msg.setDestination(29807U);
    msg.setDestinationEntity(189U);
    msg.op = 25U;
    msg.time_remain = 0.545337775969;
    msg.sched_time = 0.691763539409;

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
    msg.setTimeStamp(0.957911951621);
    msg.setSource(14974U);
    msg.setSourceEntity(138U);
    msg.setDestination(62542U);
    msg.setDestinationEntity(87U);
    msg.name.assign("DKKQFCSRQMFCLPXOTGXTDUXFQGZJRNWNLBSUDGMJRNTGRCW");
    msg.op = 0U;
    msg.sched_time = 0.889833753647;

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
    msg.setTimeStamp(0.46201497742);
    msg.setSource(38049U);
    msg.setSourceEntity(142U);
    msg.setDestination(1834U);
    msg.setDestinationEntity(28U);
    msg.name.assign("SCEBMQNEJOWILVCLPTLBRGDRVUIHAQDDKCBPQTVVYXVXNVOXKUJIWXGCEBLKKVIOACUNBFJQOWREHKJNXNNUBZLPIZQGEKTODFGZYTPLLS");
    msg.op = 238U;
    msg.sched_time = 0.544802192595;

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
    msg.setTimeStamp(0.252407800386);
    msg.setSource(2130U);
    msg.setSourceEntity(182U);
    msg.setDestination(11376U);
    msg.setDestinationEntity(129U);
    msg.name.assign("RQXDSFMSMIKETAFEHMFFQCTLWHWQMQEPEKDWUEGLKUPXZLOWMUJLXTKWBCXLZAJUFIQVRMKLEOTJIOEHRZNVTNYYXJVDWEKXLSBAWVWRYFNQAIJDGVNOFBACZZSNPJPYQLMUIHUSYSDYV");
    msg.op = 49U;
    msg.sched_time = 0.257039556616;

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
    msg.setTimeStamp(0.698526213075);
    msg.setSource(25504U);
    msg.setSourceEntity(205U);
    msg.setDestination(22731U);
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
    msg.setTimeStamp(0.186942079037);
    msg.setSource(3654U);
    msg.setSourceEntity(119U);
    msg.setDestination(42315U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.4646237705);
    msg.setSource(31062U);
    msg.setSourceEntity(21U);
    msg.setDestination(7789U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.108357255518);
    msg.setSource(22900U);
    msg.setSourceEntity(170U);
    msg.setDestination(47214U);
    msg.setDestinationEntity(18U);
    msg.name.assign("LYLWXGJMSQBBPAWTTXCFGJLKMRMXMEODMRWUYSHTYTXMACLGIVWHCWZOETYGELRSIPKPHIGMWNRMYQNPNDVBLAUUJOSXCQTMXJZKPXFNIHFKZEMIPEQSGNVGZHQCDLABULVVRLARAQIUAEKN");
    msg.state = 242U;

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
    msg.setTimeStamp(0.478404865859);
    msg.setSource(56941U);
    msg.setSourceEntity(193U);
    msg.setDestination(50618U);
    msg.setDestinationEntity(79U);
    msg.name.assign("AFZOPFXNPQGLIPFPVVVSRBCOYHRHGOWZIBEDYYJMLAJEMFNBXYULDPESHHATEUAGIJDCTXCKOHQLJOXOWGGSRQFZOJQJHEWXLVUTDNHUAEKYOEJWAOIFUTDZYQPSPVUCFDBXQSIKRPBICBFRGRKUWYTNKZIGVRFDXKOTMJNTYVCXPDCMHJWTVCUBBZSVZXSNYRDCLMQLHZJLALFZNQZWKVMEUXQTMSRQNDYPWAGRWTIUKMBKGASKABINMCN");
    msg.state = 175U;

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
    msg.setTimeStamp(0.956590617693);
    msg.setSource(7701U);
    msg.setSourceEntity(221U);
    msg.setDestination(20474U);
    msg.setDestinationEntity(63U);
    msg.name.assign("SOWOQDXRTMURYKZJNLQPOFKTAKKKXRSNKMKYCTZWUCMUHQNVNPQSZCRKCSAIHBDYNWDLHOXFPMGTIJLHAUGKEBDHODBAITDORPWYBTCECSZPTYIJIVSLPRRLIEMFBFZRNMYESHZGVVVXMOPUQAMJJVNJHZJCLEIFBIUYDSXOAACXFVQVRZXMDGJUNLEQLONYZHGBVWHCGPQEUBRAOAGWYFWGDJYXPUVEQWLBTMFSZPIAUTXSHGWEXWGETNKJFB");
    msg.state = 244U;

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
    msg.setTimeStamp(0.948276044114);
    msg.setSource(6737U);
    msg.setSourceEntity(190U);
    msg.setDestination(30037U);
    msg.setDestinationEntity(1U);
    msg.name.assign("HZFZBVDAZVBNTSRQJWWIWHUGSDPFTYGMDUMGOVQDYJETUFHGONPPOHCHFSDBMHUARMKQQYRERUKYUUKZMYUSEDBLPVZQXEIGXGBTLJXFZKDVCZAVLOTALBTGOWCPJOSDARTICENJAYQJEVVUIIQUXMLOBIWTVAQQGXXPKNJNDCMHITWBNRFRCROAKSBJLPERDPPKVWXHHCAFMZHFJOWXITJSCLWRWCYGFYQLMEILN");
    msg.value = 191U;

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
    msg.setTimeStamp(0.610761938721);
    msg.setSource(58064U);
    msg.setSourceEntity(179U);
    msg.setDestination(55743U);
    msg.setDestinationEntity(240U);
    msg.name.assign("QHOYFMQRMZXEAJLRPKFBBAEGCMEVBVOTONPLRCDRAKCQTQSKYFAFVUJGKQJGZSGZXVXVHYKZHDCQLLTCUCJWVNI");
    msg.value = 220U;

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
    msg.setTimeStamp(0.73612360112);
    msg.setSource(52075U);
    msg.setSourceEntity(104U);
    msg.setDestination(3455U);
    msg.setDestinationEntity(109U);
    msg.name.assign("REKKLUEWWZQSELJSCVBPHZXSTZEKPXYRSKMJSEFDRPGRMGRATXFHDMTDSQQTAIXVOHUMSYQVUTFXBVYIIMXGRCPYTEOICRULPUQWLZIFWIKYEVWNWGSYUBANLVDFXHWBLCPJJZBTOGBXONFHDYWURDQDSCJLMKKXOUEDINJZUBCHLAAOCFFGBIALAVOHMZNNGNZQJEBPSDHPIJKYRFCTZWGCUMYEVTQNZAFOPKVJTRGLGIWJABMPNAYDMHOQVK");
    msg.value = 208U;

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
    msg.setTimeStamp(0.612322390711);
    msg.setSource(18634U);
    msg.setSourceEntity(223U);
    msg.setDestination(52318U);
    msg.setDestinationEntity(216U);
    msg.name.assign("AJUHQWGPYHCFNAUXFEXWNPZRVDIUMHQOKIGCYAKZTLEMGUFCJFLBLXGKKQYRSBAPEYZPDIGHVNRISYHTCVLISFROQBXMJ");

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
    msg.setTimeStamp(0.685371316555);
    msg.setSource(31613U);
    msg.setSourceEntity(111U);
    msg.setDestination(14420U);
    msg.setDestinationEntity(4U);
    msg.name.assign("WXSOHDCFGICPJZQTRBWVFRZSTTRHYCMELJPHMATGBBFOYIFMZCXPDWLODNNTVNPEKECYBGSLTJQPGWMYFOPRADFONJOHBYVKUSZBVYUFFIQFAUKWTGREPHAYZIONVILHJYDWSMIHEGKCGIOQWBOZYAXRAKQXRSVBUMDKUMDILCUUXXXCIQJPNDEWHAEUDCKMKWUPVGNYJXQISAM");

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
    msg.setTimeStamp(0.226683958666);
    msg.setSource(63911U);
    msg.setSourceEntity(238U);
    msg.setDestination(22039U);
    msg.setDestinationEntity(50U);
    msg.name.assign("EOBCSRQITZFTBJEQZDUYKKHANMCJOBDMFJXXAGWOSMPCRNWKRFRSHKANRUHZSNFIWLQZECIGQYXTTQJZPOGVDNSKILJPRJAYMIHEGKIVLVEXYLVYSVEWCLAUXCAIAFZIYFSGDXXJFMJWPWDTMXYVMJYZUQSQFDRZNYGNOHFNMTEBQNRSCWDHMQBQZLUAARPTOUCTIPKMWHXCUGEDKKVWOWVXETBHPHRHUGIBNTKACLUBGFPLSLBEDOBP");

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
    msg.setTimeStamp(0.665543304681);
    msg.setSource(32181U);
    msg.setSourceEntity(134U);
    msg.setDestination(44283U);
    msg.setDestinationEntity(191U);
    msg.name.assign("OGOCCUEWSCMGMZ");
    msg.value = 142U;

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
    msg.setTimeStamp(0.739256131279);
    msg.setSource(64083U);
    msg.setSourceEntity(210U);
    msg.setDestination(17005U);
    msg.setDestinationEntity(183U);
    msg.name.assign("EHACVKGJALRPFRFCQVCHROPNWHXGKWQMDNGNHDNLAKPDCKJRTGEAWOLBENDMZYK");
    msg.value = 245U;

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
    msg.setTimeStamp(0.170671034378);
    msg.setSource(37364U);
    msg.setSourceEntity(32U);
    msg.setDestination(52440U);
    msg.setDestinationEntity(115U);
    msg.name.assign("SCAKWCZDKHFDWJNRMJLIFYFMQVYGHONIXMOUVKNCKWSBKJR");
    msg.value = 166U;

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
    msg.setTimeStamp(0.867941644568);
    msg.setSource(25867U);
    msg.setSourceEntity(166U);
    msg.setDestination(59707U);
    msg.setDestinationEntity(193U);
    msg.id = 134U;
    msg.period = 1678731022U;
    msg.duty_cycle = 272276600U;

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
    msg.setTimeStamp(0.574133609009);
    msg.setSource(44158U);
    msg.setSourceEntity(12U);
    msg.setDestination(29534U);
    msg.setDestinationEntity(45U);
    msg.id = 201U;
    msg.period = 1524894636U;
    msg.duty_cycle = 3998772076U;

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
    msg.setTimeStamp(0.577949302621);
    msg.setSource(5106U);
    msg.setSourceEntity(114U);
    msg.setDestination(32495U);
    msg.setDestinationEntity(113U);
    msg.id = 213U;
    msg.period = 210908691U;
    msg.duty_cycle = 1353887621U;

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
    msg.setTimeStamp(0.215041176368);
    msg.setSource(57235U);
    msg.setSourceEntity(26U);
    msg.setDestination(13553U);
    msg.setDestinationEntity(252U);
    msg.id = 40U;
    msg.period = 455739314U;
    msg.duty_cycle = 2517926617U;

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
    msg.setTimeStamp(0.314805347394);
    msg.setSource(34907U);
    msg.setSourceEntity(197U);
    msg.setDestination(29913U);
    msg.setDestinationEntity(124U);
    msg.id = 29U;
    msg.period = 3124741042U;
    msg.duty_cycle = 2295293761U;

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
    msg.setTimeStamp(0.451214381978);
    msg.setSource(64398U);
    msg.setSourceEntity(9U);
    msg.setDestination(38119U);
    msg.setDestinationEntity(142U);
    msg.id = 18U;
    msg.period = 1733862960U;
    msg.duty_cycle = 3982402008U;

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
    msg.setTimeStamp(0.57788261118);
    msg.setSource(23257U);
    msg.setSourceEntity(130U);
    msg.setDestination(21169U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.157377951025;
    msg.lon = 0.15253584566;
    msg.height = 0.597044924852;
    msg.x = 0.27866465065;
    msg.y = 0.00295352204726;
    msg.z = 0.346468192282;
    msg.phi = 0.910565199267;
    msg.theta = 0.470706737799;
    msg.psi = 0.0522349042388;
    msg.u = 0.285974192549;
    msg.v = 0.36560154404;
    msg.w = 0.224330244103;
    msg.vx = 0.271756250533;
    msg.vy = 0.716314005276;
    msg.vz = 0.103713573979;
    msg.p = 0.131950519461;
    msg.q = 0.463004942775;
    msg.r = 0.0278472836934;
    msg.depth = 0.19783991968;
    msg.alt = 0.634344209899;

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
    msg.setTimeStamp(0.111312807908);
    msg.setSource(17561U);
    msg.setSourceEntity(72U);
    msg.setDestination(40235U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.504074930886;
    msg.lon = 0.321229286001;
    msg.height = 0.867583881789;
    msg.x = 0.280310431453;
    msg.y = 0.534856527494;
    msg.z = 0.173174251548;
    msg.phi = 0.317060898789;
    msg.theta = 0.177699829007;
    msg.psi = 0.500491263258;
    msg.u = 0.988890218694;
    msg.v = 0.258160393931;
    msg.w = 0.300435421859;
    msg.vx = 0.440622730131;
    msg.vy = 0.480227995722;
    msg.vz = 0.762738868855;
    msg.p = 0.697295305764;
    msg.q = 0.292137852694;
    msg.r = 0.285192481376;
    msg.depth = 0.765864064045;
    msg.alt = 0.322885069708;

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
    msg.setTimeStamp(0.84582834343);
    msg.setSource(38357U);
    msg.setSourceEntity(241U);
    msg.setDestination(61367U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.0208875084156;
    msg.lon = 0.240625390037;
    msg.height = 0.57132720781;
    msg.x = 0.923951613598;
    msg.y = 0.979218186329;
    msg.z = 0.0881817517153;
    msg.phi = 0.600261984054;
    msg.theta = 0.810348243311;
    msg.psi = 0.7916217514;
    msg.u = 0.369048599856;
    msg.v = 0.152385073085;
    msg.w = 0.22886540645;
    msg.vx = 0.450649686998;
    msg.vy = 0.882953202997;
    msg.vz = 0.718269852475;
    msg.p = 0.495421531811;
    msg.q = 0.967924511486;
    msg.r = 0.58592801656;
    msg.depth = 0.358344679969;
    msg.alt = 0.0809697913342;

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
    msg.setTimeStamp(0.466155808215);
    msg.setSource(52558U);
    msg.setSourceEntity(190U);
    msg.setDestination(39065U);
    msg.setDestinationEntity(188U);
    msg.x = 0.440160323517;
    msg.y = 0.541173505254;
    msg.z = 0.450196215884;

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
    msg.setTimeStamp(0.935723001936);
    msg.setSource(57836U);
    msg.setSourceEntity(180U);
    msg.setDestination(33900U);
    msg.setDestinationEntity(148U);
    msg.x = 0.441595646417;
    msg.y = 0.12063105067;
    msg.z = 0.448624614932;

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
    msg.setTimeStamp(0.418289021132);
    msg.setSource(54802U);
    msg.setSourceEntity(143U);
    msg.setDestination(22344U);
    msg.setDestinationEntity(219U);
    msg.x = 0.0470573492056;
    msg.y = 0.780162277731;
    msg.z = 0.42718863864;

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
    msg.setTimeStamp(0.177477512085);
    msg.setSource(17042U);
    msg.setSourceEntity(136U);
    msg.setDestination(3132U);
    msg.setDestinationEntity(37U);
    msg.value = 0.454631453583;

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
    msg.setTimeStamp(0.784763304832);
    msg.setSource(51858U);
    msg.setSourceEntity(114U);
    msg.setDestination(64071U);
    msg.setDestinationEntity(139U);
    msg.value = 0.784076695907;

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
    msg.setTimeStamp(0.109598155599);
    msg.setSource(7668U);
    msg.setSourceEntity(73U);
    msg.setDestination(25156U);
    msg.setDestinationEntity(28U);
    msg.value = 0.119922854365;

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
    msg.setTimeStamp(0.765546062017);
    msg.setSource(64107U);
    msg.setSourceEntity(238U);
    msg.setDestination(38017U);
    msg.setDestinationEntity(31U);
    msg.value = 0.270198049464;

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
    msg.setTimeStamp(0.0507034278726);
    msg.setSource(64166U);
    msg.setSourceEntity(252U);
    msg.setDestination(51101U);
    msg.setDestinationEntity(30U);
    msg.value = 0.541315064113;

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
    msg.setTimeStamp(0.917758116791);
    msg.setSource(11079U);
    msg.setSourceEntity(232U);
    msg.setDestination(7942U);
    msg.setDestinationEntity(220U);
    msg.value = 0.71867775255;

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
    msg.setTimeStamp(0.166861358771);
    msg.setSource(15384U);
    msg.setSourceEntity(250U);
    msg.setDestination(43638U);
    msg.setDestinationEntity(181U);
    msg.x = 0.760546486958;
    msg.y = 0.237920902911;
    msg.z = 0.748382865474;
    msg.phi = 0.843075359623;
    msg.theta = 0.255303658593;
    msg.psi = 0.185135774882;
    msg.p = 0.519378575057;
    msg.q = 0.802517852066;
    msg.r = 0.13022353988;
    msg.u = 0.957251866172;
    msg.v = 0.836709331262;
    msg.w = 0.631900043436;
    msg.bias_psi = 0.261099683102;
    msg.bias_r = 0.627201437157;

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
    msg.setTimeStamp(0.903485603384);
    msg.setSource(29214U);
    msg.setSourceEntity(54U);
    msg.setDestination(59407U);
    msg.setDestinationEntity(56U);
    msg.x = 0.730778396424;
    msg.y = 0.439206515439;
    msg.z = 0.775019187656;
    msg.phi = 0.8746136836;
    msg.theta = 0.35282322152;
    msg.psi = 0.671289279526;
    msg.p = 0.542084052715;
    msg.q = 0.910824067136;
    msg.r = 0.349561070741;
    msg.u = 0.681540326273;
    msg.v = 0.308913287308;
    msg.w = 0.979079325939;
    msg.bias_psi = 0.905436650656;
    msg.bias_r = 0.0902264905375;

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
    msg.setTimeStamp(0.38935131246);
    msg.setSource(32687U);
    msg.setSourceEntity(44U);
    msg.setDestination(7479U);
    msg.setDestinationEntity(173U);
    msg.x = 0.515175229549;
    msg.y = 0.713672001459;
    msg.z = 0.0947776951896;
    msg.phi = 0.315781087472;
    msg.theta = 0.881889533555;
    msg.psi = 0.275706441896;
    msg.p = 0.805335145952;
    msg.q = 0.0831406715465;
    msg.r = 0.16654565456;
    msg.u = 0.232185344515;
    msg.v = 0.620133196784;
    msg.w = 0.0613440056645;
    msg.bias_psi = 0.498312148637;
    msg.bias_r = 0.104473335431;

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
    msg.setTimeStamp(0.425267002809);
    msg.setSource(29772U);
    msg.setSourceEntity(144U);
    msg.setDestination(23427U);
    msg.setDestinationEntity(75U);
    msg.bias_psi = 0.704264204147;
    msg.bias_r = 0.857112666472;
    msg.cog = 0.851264125824;
    msg.cyaw = 0.340929804807;
    msg.lbl_rej_level = 0.0412410679619;
    msg.gps_rej_level = 0.959865254122;
    msg.custom_x = 0.926379285997;
    msg.custom_y = 0.443010255007;
    msg.custom_z = 0.198393538694;

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
    msg.setTimeStamp(0.177747550976);
    msg.setSource(54889U);
    msg.setSourceEntity(113U);
    msg.setDestination(27340U);
    msg.setDestinationEntity(199U);
    msg.bias_psi = 0.546854057302;
    msg.bias_r = 0.750992788406;
    msg.cog = 0.755425691608;
    msg.cyaw = 0.569260675915;
    msg.lbl_rej_level = 0.417078111683;
    msg.gps_rej_level = 0.83736012749;
    msg.custom_x = 0.723123448419;
    msg.custom_y = 0.117752718361;
    msg.custom_z = 0.654794714558;

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
    msg.setTimeStamp(0.885599556989);
    msg.setSource(41062U);
    msg.setSourceEntity(120U);
    msg.setDestination(18606U);
    msg.setDestinationEntity(163U);
    msg.bias_psi = 0.578006209367;
    msg.bias_r = 0.810537602693;
    msg.cog = 0.428805166937;
    msg.cyaw = 0.452850413211;
    msg.lbl_rej_level = 0.162014771289;
    msg.gps_rej_level = 0.0420736610887;
    msg.custom_x = 0.122512500957;
    msg.custom_y = 0.578301207548;
    msg.custom_z = 0.858256766915;

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
    msg.setTimeStamp(0.202734315261);
    msg.setSource(56472U);
    msg.setSourceEntity(247U);
    msg.setDestination(5478U);
    msg.setDestinationEntity(210U);
    msg.utc_time = 0.435411101786;
    msg.reason = 107U;

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
    msg.setTimeStamp(0.257277822859);
    msg.setSource(53887U);
    msg.setSourceEntity(72U);
    msg.setDestination(57792U);
    msg.setDestinationEntity(235U);
    msg.utc_time = 0.597814828062;
    msg.reason = 198U;

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
    msg.setTimeStamp(0.809867651511);
    msg.setSource(42188U);
    msg.setSourceEntity(74U);
    msg.setDestination(4124U);
    msg.setDestinationEntity(177U);
    msg.utc_time = 0.0110274189306;
    msg.reason = 58U;

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
    msg.setTimeStamp(0.614923661182);
    msg.setSource(27153U);
    msg.setSourceEntity(173U);
    msg.setDestination(4918U);
    msg.setDestinationEntity(112U);
    msg.id = 76U;
    msg.range = 0.938849486568;
    msg.acceptance = 7U;

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
    msg.setTimeStamp(0.991877320508);
    msg.setSource(16263U);
    msg.setSourceEntity(96U);
    msg.setDestination(46787U);
    msg.setDestinationEntity(108U);
    msg.id = 121U;
    msg.range = 0.357828821253;
    msg.acceptance = 119U;

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
    msg.setTimeStamp(0.682628115132);
    msg.setSource(19960U);
    msg.setSourceEntity(61U);
    msg.setDestination(48248U);
    msg.setDestinationEntity(181U);
    msg.id = 239U;
    msg.range = 0.603801617644;
    msg.acceptance = 236U;

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
    msg.setTimeStamp(0.376943875407);
    msg.setSource(41990U);
    msg.setSourceEntity(68U);
    msg.setDestination(11909U);
    msg.setDestinationEntity(211U);
    msg.type = 141U;
    msg.reason = 86U;
    msg.value = 0.303559886659;
    msg.timestep = 0.929518886332;

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
    msg.setTimeStamp(0.313654094104);
    msg.setSource(64637U);
    msg.setSourceEntity(190U);
    msg.setDestination(11826U);
    msg.setDestinationEntity(2U);
    msg.type = 165U;
    msg.reason = 206U;
    msg.value = 0.38745919893;
    msg.timestep = 0.772657152138;

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
    msg.setTimeStamp(0.772032429052);
    msg.setSource(11052U);
    msg.setSourceEntity(45U);
    msg.setDestination(6000U);
    msg.setDestinationEntity(63U);
    msg.type = 150U;
    msg.reason = 17U;
    msg.value = 0.716074392509;
    msg.timestep = 0.72223396581;

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
    msg.setTimeStamp(0.582812258088);
    msg.setSource(29688U);
    msg.setSourceEntity(137U);
    msg.setDestination(54487U);
    msg.setDestinationEntity(101U);

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
    msg.setTimeStamp(0.686644187022);
    msg.setSource(20645U);
    msg.setSourceEntity(33U);
    msg.setDestination(21117U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.163722235943);
    msg.setSource(43945U);
    msg.setSourceEntity(226U);
    msg.setDestination(49288U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.00485468932915);
    msg.setSource(47138U);
    msg.setSourceEntity(69U);
    msg.setDestination(35042U);
    msg.setDestinationEntity(189U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BQMPIWGWEZGOHPWEAHLMOXGWZOBBBOVAHBUANVPKPRYLBCPWDOMZITWVIKXELYMAFKTEOQLRLNECFBMHIKZ");
    tmp_msg_0.lat = 0.898070560786;
    tmp_msg_0.lon = 0.760271838239;
    tmp_msg_0.depth = 0.983779541635;
    tmp_msg_0.query_channel = 48U;
    tmp_msg_0.reply_channel = 129U;
    tmp_msg_0.transponder_delay = 210U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.715464860664;
    msg.y = 0.967510372474;
    msg.var_x = 0.687590945074;
    msg.var_y = 0.713269052416;
    msg.distance = 0.378106102669;

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
    msg.setTimeStamp(0.284578764848);
    msg.setSource(48186U);
    msg.setSourceEntity(15U);
    msg.setDestination(43116U);
    msg.setDestinationEntity(4U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GMJXZVVVPYSLIKZLLYZPDYXJQWHPYWOOOQHVAKGWEOSBXCEGZAPATYUIQGTJWCFIHLTNRXRFBMINWUJDQPWLLTJZZXMGJATNAKGCMMNOHCTHUGQDADRFODONNYVSRLFWKKMKFYVEEDECNZRDWUKZRCJHMOARBUXTFJLNLXOICQIFSHPPDHZFJVSHEWAGRBKFSZAVGVMFMLBKPXNOXYRBYDKUICNSSBCAXHTVMWP");
    tmp_msg_0.lat = 0.384794154825;
    tmp_msg_0.lon = 0.282121328418;
    tmp_msg_0.depth = 0.0209781793039;
    tmp_msg_0.query_channel = 117U;
    tmp_msg_0.reply_channel = 152U;
    tmp_msg_0.transponder_delay = 159U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.385695608015;
    msg.y = 0.433063987322;
    msg.var_x = 0.613897010537;
    msg.var_y = 0.813335228634;
    msg.distance = 0.726415286211;

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
    msg.setTimeStamp(0.651405324718);
    msg.setSource(1169U);
    msg.setSourceEntity(18U);
    msg.setDestination(20001U);
    msg.setDestinationEntity(217U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OVFOLCFNDIGHWWMSJVCVGRDPIRUAOSTOHYXFADAGEXKAXFECAXTQBVAEJQVNMCPCYSHUIKWBZUCWBSQDTNLZSCLQYDFPBKVBEAGNNPUSMUXNJWNELGSZCWMUQGBHYPBUUAJ");
    tmp_msg_0.lat = 0.393001742054;
    tmp_msg_0.lon = 0.182601170814;
    tmp_msg_0.depth = 0.410263700907;
    tmp_msg_0.query_channel = 193U;
    tmp_msg_0.reply_channel = 74U;
    tmp_msg_0.transponder_delay = 42U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.727828121533;
    msg.y = 0.495300630433;
    msg.var_x = 0.579850307995;
    msg.var_y = 0.183416988806;
    msg.distance = 0.00946241337731;

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
    msg.setTimeStamp(0.926422769081);
    msg.setSource(56728U);
    msg.setSourceEntity(200U);
    msg.setDestination(20071U);
    msg.setDestinationEntity(132U);
    msg.state = 247U;

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
    msg.setTimeStamp(0.593865675044);
    msg.setSource(57904U);
    msg.setSourceEntity(15U);
    msg.setDestination(1779U);
    msg.setDestinationEntity(121U);
    msg.state = 42U;

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
    msg.setTimeStamp(0.0944895449661);
    msg.setSource(8824U);
    msg.setSourceEntity(53U);
    msg.setDestination(36600U);
    msg.setDestinationEntity(111U);
    msg.state = 23U;

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
    msg.setTimeStamp(0.880437712967);
    msg.setSource(24011U);
    msg.setSourceEntity(242U);
    msg.setDestination(41856U);
    msg.setDestinationEntity(24U);
    msg.x = 0.694191773148;
    msg.y = 0.0563271142392;
    msg.z = 0.261592794147;

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
    msg.setTimeStamp(0.902771495733);
    msg.setSource(60506U);
    msg.setSourceEntity(189U);
    msg.setDestination(17199U);
    msg.setDestinationEntity(128U);
    msg.x = 0.812143340312;
    msg.y = 0.141975356903;
    msg.z = 0.482446369256;

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
    msg.setTimeStamp(0.660177726684);
    msg.setSource(61426U);
    msg.setSourceEntity(54U);
    msg.setDestination(20654U);
    msg.setDestinationEntity(165U);
    msg.x = 0.585216469662;
    msg.y = 0.760118050909;
    msg.z = 0.73444948261;

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
    msg.setTimeStamp(0.790280632197);
    msg.setSource(30958U);
    msg.setSourceEntity(159U);
    msg.setDestination(5162U);
    msg.setDestinationEntity(82U);
    msg.value = 0.105999285988;

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
    msg.setTimeStamp(0.145673829854);
    msg.setSource(9308U);
    msg.setSourceEntity(115U);
    msg.setDestination(54942U);
    msg.setDestinationEntity(3U);
    msg.value = 0.273367041484;

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
    msg.setTimeStamp(0.496933430655);
    msg.setSource(28108U);
    msg.setSourceEntity(191U);
    msg.setDestination(57248U);
    msg.setDestinationEntity(252U);
    msg.value = 0.233585777421;

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
    msg.setTimeStamp(0.0953906074015);
    msg.setSource(48763U);
    msg.setSourceEntity(85U);
    msg.setDestination(16244U);
    msg.setDestinationEntity(215U);
    msg.value = 0.903987498732;
    msg.z_units = 155U;

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
    msg.setTimeStamp(0.773205340162);
    msg.setSource(7043U);
    msg.setSourceEntity(101U);
    msg.setDestination(27892U);
    msg.setDestinationEntity(141U);
    msg.value = 0.322482376362;
    msg.z_units = 125U;

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
    msg.setTimeStamp(0.621616792305);
    msg.setSource(16291U);
    msg.setSourceEntity(120U);
    msg.setDestination(57813U);
    msg.setDestinationEntity(180U);
    msg.value = 0.625113149186;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.886465674654);
    msg.setSource(8071U);
    msg.setSourceEntity(228U);
    msg.setDestination(39316U);
    msg.setDestinationEntity(11U);
    msg.value = 0.684264804055;
    msg.speed_units = 26U;

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
    msg.setTimeStamp(0.817085946146);
    msg.setSource(54411U);
    msg.setSourceEntity(46U);
    msg.setDestination(44124U);
    msg.setDestinationEntity(242U);
    msg.value = 0.993879206728;
    msg.speed_units = 221U;

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
    msg.setTimeStamp(0.877649459338);
    msg.setSource(42329U);
    msg.setSourceEntity(14U);
    msg.setDestination(30734U);
    msg.setDestinationEntity(126U);
    msg.value = 0.594678004949;
    msg.speed_units = 239U;

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
    msg.setTimeStamp(0.253858092341);
    msg.setSource(64689U);
    msg.setSourceEntity(18U);
    msg.setDestination(14341U);
    msg.setDestinationEntity(177U);
    msg.value = 0.931843835362;

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
    msg.setTimeStamp(0.892532038582);
    msg.setSource(22878U);
    msg.setSourceEntity(130U);
    msg.setDestination(21910U);
    msg.setDestinationEntity(95U);
    msg.value = 0.321961775272;

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
    msg.setTimeStamp(0.402850849733);
    msg.setSource(28302U);
    msg.setSourceEntity(154U);
    msg.setDestination(39116U);
    msg.setDestinationEntity(106U);
    msg.value = 0.387718375385;

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
    msg.setTimeStamp(0.649870380245);
    msg.setSource(60263U);
    msg.setSourceEntity(131U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(159U);
    msg.value = 0.329785568128;

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
    msg.setTimeStamp(0.167609239651);
    msg.setSource(44755U);
    msg.setSourceEntity(98U);
    msg.setDestination(52113U);
    msg.setDestinationEntity(208U);
    msg.value = 0.67374247017;

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
    msg.setTimeStamp(0.590568001958);
    msg.setSource(19851U);
    msg.setSourceEntity(57U);
    msg.setDestination(28625U);
    msg.setDestinationEntity(212U);
    msg.value = 0.348766453922;

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
    msg.setTimeStamp(0.434055611153);
    msg.setSource(800U);
    msg.setSourceEntity(212U);
    msg.setDestination(32833U);
    msg.setDestinationEntity(215U);
    msg.value = 0.808737548662;

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
    msg.setTimeStamp(0.269403136672);
    msg.setSource(42438U);
    msg.setSourceEntity(226U);
    msg.setDestination(6968U);
    msg.setDestinationEntity(50U);
    msg.value = 0.321551081269;

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
    msg.setTimeStamp(0.968940622618);
    msg.setSource(16078U);
    msg.setSourceEntity(145U);
    msg.setDestination(53364U);
    msg.setDestinationEntity(152U);
    msg.value = 0.875790406668;

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
    msg.setTimeStamp(0.666455290069);
    msg.setSource(64775U);
    msg.setSourceEntity(138U);
    msg.setDestination(20582U);
    msg.setDestinationEntity(234U);
    msg.start_lat = 0.399376461486;
    msg.start_lon = 0.815741885467;
    msg.start_z = 0.420383281861;
    msg.start_z_units = 12U;
    msg.end_lat = 0.795838601675;
    msg.end_lon = 0.128440059867;
    msg.end_z = 0.65817768869;
    msg.end_z_units = 28U;
    msg.speed = 0.217159972737;
    msg.speed_units = 201U;
    msg.lradius = 0.0974058408687;
    msg.flags = 252U;

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
    msg.setTimeStamp(0.885051789892);
    msg.setSource(13553U);
    msg.setSourceEntity(207U);
    msg.setDestination(54822U);
    msg.setDestinationEntity(183U);
    msg.start_lat = 0.989414574997;
    msg.start_lon = 0.854329980787;
    msg.start_z = 0.23138969105;
    msg.start_z_units = 10U;
    msg.end_lat = 0.483801875452;
    msg.end_lon = 0.795620366023;
    msg.end_z = 0.582343022273;
    msg.end_z_units = 176U;
    msg.speed = 0.367660438537;
    msg.speed_units = 83U;
    msg.lradius = 0.979680361835;
    msg.flags = 20U;

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
    msg.setTimeStamp(0.831424031829);
    msg.setSource(49345U);
    msg.setSourceEntity(232U);
    msg.setDestination(52094U);
    msg.setDestinationEntity(213U);
    msg.start_lat = 0.386372293873;
    msg.start_lon = 0.151306764847;
    msg.start_z = 0.766169385337;
    msg.start_z_units = 157U;
    msg.end_lat = 0.686478027594;
    msg.end_lon = 0.0301826910266;
    msg.end_z = 0.743879340563;
    msg.end_z_units = 68U;
    msg.speed = 0.935867770499;
    msg.speed_units = 181U;
    msg.lradius = 0.613091729287;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.287249153069);
    msg.setSource(7835U);
    msg.setSourceEntity(249U);
    msg.setDestination(2876U);
    msg.setDestinationEntity(240U);
    msg.x = 0.122488311922;
    msg.y = 0.783259632289;
    msg.z = 0.348334650158;
    msg.k = 0.89177249689;
    msg.m = 0.728768360526;
    msg.n = 0.217613489363;
    msg.flags = 143U;

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
    msg.setTimeStamp(0.949106879972);
    msg.setSource(17258U);
    msg.setSourceEntity(226U);
    msg.setDestination(56863U);
    msg.setDestinationEntity(27U);
    msg.x = 0.84708249706;
    msg.y = 0.202186318948;
    msg.z = 0.650828638825;
    msg.k = 0.938259586222;
    msg.m = 0.298452367309;
    msg.n = 0.484829314235;
    msg.flags = 155U;

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
    msg.setTimeStamp(0.307529690554);
    msg.setSource(38019U);
    msg.setSourceEntity(56U);
    msg.setDestination(32413U);
    msg.setDestinationEntity(27U);
    msg.x = 0.26888361986;
    msg.y = 0.139012911284;
    msg.z = 0.263658768803;
    msg.k = 0.267397797024;
    msg.m = 0.664708901245;
    msg.n = 0.178584208364;
    msg.flags = 215U;

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
    msg.setTimeStamp(0.0466275462983);
    msg.setSource(15131U);
    msg.setSourceEntity(20U);
    msg.setDestination(5698U);
    msg.setDestinationEntity(116U);
    msg.value = 0.426384702162;

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
    msg.setTimeStamp(0.912633147409);
    msg.setSource(30593U);
    msg.setSourceEntity(156U);
    msg.setDestination(19993U);
    msg.setDestinationEntity(168U);
    msg.value = 0.824370401678;

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
    msg.setTimeStamp(0.531736815257);
    msg.setSource(61414U);
    msg.setSourceEntity(72U);
    msg.setDestination(50087U);
    msg.setDestinationEntity(204U);
    msg.value = 0.274382793501;

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
    msg.setTimeStamp(0.534736482931);
    msg.setSource(10617U);
    msg.setSourceEntity(179U);
    msg.setDestination(9733U);
    msg.setDestinationEntity(83U);
    msg.u = 0.243819101835;
    msg.v = 0.609548834416;
    msg.w = 0.957694791641;
    msg.p = 0.258744659127;
    msg.q = 0.595380094463;
    msg.r = 0.213979355932;
    msg.flags = 43U;

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
    msg.setTimeStamp(0.57854089273);
    msg.setSource(36035U);
    msg.setSourceEntity(9U);
    msg.setDestination(26196U);
    msg.setDestinationEntity(127U);
    msg.u = 0.0931826110946;
    msg.v = 0.199138719524;
    msg.w = 0.96143794836;
    msg.p = 0.35878665948;
    msg.q = 0.242138278;
    msg.r = 0.890164741965;
    msg.flags = 91U;

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
    msg.setTimeStamp(0.398383143703);
    msg.setSource(62073U);
    msg.setSourceEntity(64U);
    msg.setDestination(18233U);
    msg.setDestinationEntity(7U);
    msg.u = 0.856606015518;
    msg.v = 0.349980532247;
    msg.w = 0.764731632887;
    msg.p = 0.223544210269;
    msg.q = 0.71485879004;
    msg.r = 0.506929328291;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.426017107957);
    msg.setSource(42046U);
    msg.setSourceEntity(5U);
    msg.setDestination(5301U);
    msg.setDestinationEntity(42U);
    msg.start_lat = 0.222296282505;
    msg.start_lon = 0.682536466818;
    msg.start_z = 0.512766475678;
    msg.start_z_units = 54U;
    msg.end_lat = 0.527138064039;
    msg.end_lon = 0.0376860742013;
    msg.end_z = 0.0993674372128;
    msg.end_z_units = 8U;
    msg.lradius = 0.392232640931;
    msg.flags = 204U;
    msg.x = 0.261011244325;
    msg.y = 0.0797229717866;
    msg.z = 0.833901627193;
    msg.vx = 0.479836676177;
    msg.vy = 0.641961049257;
    msg.vz = 0.705595829528;
    msg.course_error = 0.399330506243;
    msg.eta = 39121U;

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
    msg.setTimeStamp(0.76375535166);
    msg.setSource(13093U);
    msg.setSourceEntity(19U);
    msg.setDestination(64432U);
    msg.setDestinationEntity(170U);
    msg.start_lat = 0.99586749181;
    msg.start_lon = 0.973261793036;
    msg.start_z = 0.227807828868;
    msg.start_z_units = 232U;
    msg.end_lat = 0.0453013256347;
    msg.end_lon = 0.701948698161;
    msg.end_z = 0.880006902685;
    msg.end_z_units = 163U;
    msg.lradius = 0.289391910992;
    msg.flags = 62U;
    msg.x = 0.509726527343;
    msg.y = 0.602832264613;
    msg.z = 0.327500640814;
    msg.vx = 0.084140418917;
    msg.vy = 0.389258279987;
    msg.vz = 0.862175047019;
    msg.course_error = 0.717399243042;
    msg.eta = 5837U;

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
    msg.setTimeStamp(0.652720701176);
    msg.setSource(27036U);
    msg.setSourceEntity(61U);
    msg.setDestination(45826U);
    msg.setDestinationEntity(161U);
    msg.start_lat = 0.6318200016;
    msg.start_lon = 0.357582628791;
    msg.start_z = 0.60030613885;
    msg.start_z_units = 151U;
    msg.end_lat = 0.199567002302;
    msg.end_lon = 0.253582613199;
    msg.end_z = 0.772939739968;
    msg.end_z_units = 28U;
    msg.lradius = 0.196920104542;
    msg.flags = 194U;
    msg.x = 0.364021680988;
    msg.y = 0.934185125227;
    msg.z = 0.984972354319;
    msg.vx = 0.54181181062;
    msg.vy = 0.704058869609;
    msg.vz = 0.291185985798;
    msg.course_error = 0.497428755189;
    msg.eta = 52151U;

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
    msg.setTimeStamp(0.230962346036);
    msg.setSource(23884U);
    msg.setSourceEntity(145U);
    msg.setDestination(59817U);
    msg.setDestinationEntity(84U);
    msg.k = 0.450935339338;
    msg.m = 0.0279450729275;
    msg.n = 0.1537558057;

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
    msg.setTimeStamp(0.364345154075);
    msg.setSource(28544U);
    msg.setSourceEntity(42U);
    msg.setDestination(42960U);
    msg.setDestinationEntity(211U);
    msg.k = 0.137075089115;
    msg.m = 0.989276730956;
    msg.n = 0.675901944125;

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
    msg.setTimeStamp(0.476603462024);
    msg.setSource(64539U);
    msg.setSourceEntity(22U);
    msg.setDestination(65365U);
    msg.setDestinationEntity(70U);
    msg.k = 0.837056264487;
    msg.m = 0.857233143207;
    msg.n = 0.759706523621;

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
    msg.setTimeStamp(0.401136661232);
    msg.setSource(56231U);
    msg.setSourceEntity(55U);
    msg.setDestination(17836U);
    msg.setDestinationEntity(161U);
    msg.p = 0.1165549054;
    msg.i = 0.154933900234;
    msg.d = 0.0809412591896;
    msg.a = 0.1352613307;

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
    msg.setTimeStamp(0.382006704512);
    msg.setSource(16895U);
    msg.setSourceEntity(30U);
    msg.setDestination(22416U);
    msg.setDestinationEntity(143U);
    msg.p = 0.847444362055;
    msg.i = 0.326348095578;
    msg.d = 0.824825615549;
    msg.a = 0.135177004869;

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
    msg.setTimeStamp(0.817341672234);
    msg.setSource(57587U);
    msg.setSourceEntity(220U);
    msg.setDestination(26462U);
    msg.setDestinationEntity(85U);
    msg.p = 0.796465007981;
    msg.i = 0.675542412515;
    msg.d = 0.0552009033845;
    msg.a = 0.454443369834;

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
    msg.setTimeStamp(0.0383946430991);
    msg.setSource(27009U);
    msg.setSourceEntity(112U);
    msg.setDestination(51756U);
    msg.setDestinationEntity(70U);
    msg.op = 170U;

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
    msg.setTimeStamp(0.930806597165);
    msg.setSource(15585U);
    msg.setSourceEntity(4U);
    msg.setDestination(44366U);
    msg.setDestinationEntity(197U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.0907006270777);
    msg.setSource(47022U);
    msg.setSourceEntity(51U);
    msg.setDestination(11373U);
    msg.setDestinationEntity(120U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.220402957648);
    msg.setSource(51189U);
    msg.setSourceEntity(4U);
    msg.setDestination(30245U);
    msg.setDestinationEntity(194U);
    msg.timeout = 49883U;
    msg.lat = 0.948024433802;
    msg.lon = 0.926607291275;
    msg.z = 0.70559113501;
    msg.z_units = 65U;
    msg.speed = 0.998894144585;
    msg.speed_units = 105U;
    msg.roll = 0.578425689261;
    msg.pitch = 0.825310625935;
    msg.yaw = 0.449506607412;
    msg.custom.assign("JIBZKABUQTNMAWVFIPAYUQGFMYLENRFADNRVSXHODNNCTMDZOCWRKR");

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
    msg.setTimeStamp(0.598486250923);
    msg.setSource(17010U);
    msg.setSourceEntity(36U);
    msg.setDestination(47979U);
    msg.setDestinationEntity(182U);
    msg.timeout = 50906U;
    msg.lat = 0.231326148537;
    msg.lon = 0.756339106583;
    msg.z = 0.481612744937;
    msg.z_units = 12U;
    msg.speed = 0.467131533646;
    msg.speed_units = 32U;
    msg.roll = 0.0707898589225;
    msg.pitch = 0.898621660252;
    msg.yaw = 0.773500383019;
    msg.custom.assign("YSGXLNXXZCVSSPHREHSRJBIZZNBZOMKIACCEIXUQHHXIGANJYODDGEIRAGCUJYZNGIYVNMAUQOIKGLUCPWRPVOJJHTUVBYMZCOJSJVHCDZAVACNUGUDKPKHWRBTPOLTBTQYQHKQWCEOWMNFEZINJPDFGFNPVFRZP");

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
    msg.setTimeStamp(0.695815591396);
    msg.setSource(41538U);
    msg.setSourceEntity(211U);
    msg.setDestination(44743U);
    msg.setDestinationEntity(37U);
    msg.timeout = 38378U;
    msg.lat = 0.528035291147;
    msg.lon = 0.652453638347;
    msg.z = 0.722387061178;
    msg.z_units = 38U;
    msg.speed = 0.225152780463;
    msg.speed_units = 18U;
    msg.roll = 0.618383741776;
    msg.pitch = 0.303457617798;
    msg.yaw = 0.560829983025;
    msg.custom.assign("UCFGFGOKWRVBOFHXMDYKYDDOJHAKBDDHCJWEQEFQYMAYFLOMLCIWUOBDWVUJIZHWVBVMPLURCVUIIZYSTVVTMSFSHSXQKIGNPFQXZQEPWOBHJKCKMKDAVQRJASMNRXPXTGDIGBLNBZQTBLAIBLWHFZTRYGCZTNRRXEYUMETPNTYHWESCEOGNUAZHJMICDPTKRNOFPXWCYXISGZJUABHAJXVNEELDERAAFNKSUUPCJONRLQ");

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
    msg.setTimeStamp(0.280498295479);
    msg.setSource(26965U);
    msg.setSourceEntity(103U);
    msg.setDestination(38021U);
    msg.setDestinationEntity(230U);
    msg.timeout = 42644U;
    msg.lat = 0.78733914595;
    msg.lon = 0.859010942653;
    msg.z = 0.0240662621439;
    msg.z_units = 159U;
    msg.speed = 0.985297837481;
    msg.speed_units = 175U;
    msg.duration = 25969U;
    msg.radius = 0.94190785825;
    msg.flags = 65U;
    msg.custom.assign("DCZLRSGUGXWIYMTQBJEOUWCAXGSTNYFKZJGVNAZJQLDEOBYPAYULSAMTWUQEQLNRVPGXQACDQSNOJMZPHBAGWUBTVEXSKIRXLJZXCOKRKLD");

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
    msg.setTimeStamp(0.917211644592);
    msg.setSource(19991U);
    msg.setSourceEntity(216U);
    msg.setDestination(20159U);
    msg.setDestinationEntity(96U);
    msg.timeout = 6545U;
    msg.lat = 0.376674006677;
    msg.lon = 0.621180321918;
    msg.z = 0.935169749157;
    msg.z_units = 89U;
    msg.speed = 0.338041386445;
    msg.speed_units = 237U;
    msg.duration = 28559U;
    msg.radius = 0.654664853072;
    msg.flags = 9U;
    msg.custom.assign("JDPRIDFKABYJIWPPCQWFFNSYLOKKFMNBMZSRWUTWDJCMFEBTUHPMZRWWFHNAQLFXHUDTQJRGABYTYVDIMUFRROIAVNSYOMCPQVOLEEDTECNGZZLNHNDUYAQJQVYGVSOGULHKPGJKXNVPWEGIZSRVSFORLKKJYISKSOKZACQHAOPHB");

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
    msg.setTimeStamp(0.509929123487);
    msg.setSource(49555U);
    msg.setSourceEntity(176U);
    msg.setDestination(8728U);
    msg.setDestinationEntity(70U);
    msg.timeout = 50043U;
    msg.lat = 0.151260053985;
    msg.lon = 0.303993219156;
    msg.z = 0.412056071209;
    msg.z_units = 230U;
    msg.speed = 0.467162695842;
    msg.speed_units = 174U;
    msg.duration = 8999U;
    msg.radius = 0.118168704762;
    msg.flags = 150U;
    msg.custom.assign("JREZNBHODSLGOMOGEKWUOUOCTPHQFRVFTHQFYMNTSBSKYDAMEJHIAWBQIETVZSSVFVABMYPBWYPHGLGVXGBGDSXAJIDXBKONJUFRZNUUVYZERETHTOMTEZQACSNFIWCYHSXLHJLYJDNQZMTOWLJMPBVI");

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
    msg.setTimeStamp(0.766796728349);
    msg.setSource(11534U);
    msg.setSourceEntity(79U);
    msg.setDestination(41566U);
    msg.setDestinationEntity(85U);
    msg.custom.assign("BXGVNNZAJTKOVTKBWZYSEHN");

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
    msg.setTimeStamp(0.0920762713876);
    msg.setSource(28371U);
    msg.setSourceEntity(51U);
    msg.setDestination(22837U);
    msg.setDestinationEntity(94U);
    msg.custom.assign("JPIZGMQSMTKWFXAONHQWNBHFCSQXLBWYGKIBMPWQYMUXRVEFBYSJUKJOHNQTTLIFZYFFPPGDCHBYXAYJSXZLGFDLYCEUMWRTGKVSGUJVHPRCYEDMVRJPACNDCXLRHZHWXMKUAEQTQEVHFZTMYAKNGLMDGXFPPZTNEVAEUKIVCOVIJTQSTXSUFAGSQPOOZWLBUWISSCNNLIGRTVIRDAKQOBXKDIBBZAEJYBZKZOOWJWLA");

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
    msg.setTimeStamp(0.780728595443);
    msg.setSource(27615U);
    msg.setSourceEntity(56U);
    msg.setDestination(19850U);
    msg.setDestinationEntity(14U);
    msg.custom.assign("SUXABGMAUDLMNJCCZHYUTIVTKKSOUMTCCWNBHURMUPRHQRLGENOIQFPRIPE");

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
    msg.setTimeStamp(0.248517698114);
    msg.setSource(27741U);
    msg.setSourceEntity(45U);
    msg.setDestination(55995U);
    msg.setDestinationEntity(57U);
    msg.timeout = 56846U;
    msg.lat = 0.945206481406;
    msg.lon = 0.471408078929;
    msg.z = 0.171512394008;
    msg.z_units = 108U;
    msg.duration = 59029U;
    msg.speed = 0.656099699942;
    msg.speed_units = 88U;
    msg.type = 27U;
    msg.radius = 0.775260951843;
    msg.length = 0.883283956418;
    msg.bearing = 0.87468520713;
    msg.direction = 90U;
    msg.custom.assign("OXCMRDPLZMLKFR");

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
    msg.setTimeStamp(0.131438947945);
    msg.setSource(56027U);
    msg.setSourceEntity(241U);
    msg.setDestination(27059U);
    msg.setDestinationEntity(21U);
    msg.timeout = 63959U;
    msg.lat = 0.768718786797;
    msg.lon = 0.333821425623;
    msg.z = 0.0623258807078;
    msg.z_units = 116U;
    msg.duration = 32943U;
    msg.speed = 0.873619467057;
    msg.speed_units = 136U;
    msg.type = 59U;
    msg.radius = 0.914325948642;
    msg.length = 0.887550442552;
    msg.bearing = 0.499410675596;
    msg.direction = 153U;
    msg.custom.assign("JUNFNMIBIBIAQLTFCLVHHGUEPXFQBUGXVKGOFTRNVBHLEUVCGFWHQVOFNTKMMZUBEDYPZAWMUPCKSESDQHOQONTJCBBAHKJJSDLYAHZUYQTOETGRRRLRLQPHAQFOPMWYDXPHTNSBITIYYJFDYGY");

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
    msg.setTimeStamp(0.351158375702);
    msg.setSource(33151U);
    msg.setSourceEntity(83U);
    msg.setDestination(16352U);
    msg.setDestinationEntity(141U);
    msg.timeout = 21388U;
    msg.lat = 0.391338336319;
    msg.lon = 0.601784505393;
    msg.z = 0.620980750325;
    msg.z_units = 90U;
    msg.duration = 63791U;
    msg.speed = 0.561264448094;
    msg.speed_units = 177U;
    msg.type = 43U;
    msg.radius = 0.436259394669;
    msg.length = 0.528180105333;
    msg.bearing = 0.145229172023;
    msg.direction = 35U;
    msg.custom.assign("LCKTQHQHSLNPLHRAIZLPCXMZOCXKFURBPXZGNAZIWGSQVFQKMTLTKXLBSFIDEHFPQTWWUIOIVQYZDVXVMPATEUSXJCANTMTUKDGOXKACJYZVPUZEIMIWKOPUJYYLDNATGMDRBYVKENBMJSIGWCSOGFNRCUMFLOOVPSGHYJKLXHBSAOGJASWVS");

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
    msg.setTimeStamp(0.706243102367);
    msg.setSource(31232U);
    msg.setSourceEntity(48U);
    msg.setDestination(16003U);
    msg.setDestinationEntity(232U);
    msg.duration = 216U;
    msg.custom.assign("OFLCYXDKTHTVPHWIZJDMGNGSUETJWJREVLKJSKAUPTTAYEBDIDEWGUKBCSEDPYRCVONXKFZDPKVRTSWLMSOYVIWFSUQISERWGRYRYLBMWZQOFMZZFEVQNYVNWMCGIUUSJHAPMPFLPVPLKBDHJCABDXRVHQZWNTQJAKQXJLGDYMJEXXGQADOTHARBMINZIOMHQZQBWQSCXLPLHCZUNIRRBGOCX");

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
    msg.setTimeStamp(0.573956691246);
    msg.setSource(40817U);
    msg.setSourceEntity(185U);
    msg.setDestination(17827U);
    msg.setDestinationEntity(40U);
    msg.duration = 62961U;
    msg.custom.assign("PYCPIHTLTWFUPSFDBESFLOIBLEICERLRNPZNHIMJMUETPBTKHTXZYUUBWSMSZKCFVBZUCMHHALBYFYZEXKMUKZTOGUVJILZKKXSWYDRUFGTEQWQXXCVDXFKGJBNEJVBQVOAQFOVVZNAZNOYVHOOOQQJSRRKODIGMWPVXAQPPMGHWKBUEGQYMIAYDDBQUAMGXAQSAYJERPRALGSOHRJGXYTIFSMLIDCCJINWGLTHWDKCJPDWNRSZWFNNXVNETL");

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
    msg.setTimeStamp(0.0482991031685);
    msg.setSource(33594U);
    msg.setSourceEntity(224U);
    msg.setDestination(14804U);
    msg.setDestinationEntity(243U);
    msg.duration = 44807U;
    msg.custom.assign("XCURKOGCMQZWFRNONNCYMVLCHQDRMKZQWVCBMSHHEXJISXPAUMBIVEKSNNWXTEEAHJMQTFSYFSZMOFCTHNSYQFDMKODLKBKVPWROI");

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
    msg.setTimeStamp(0.245275768941);
    msg.setSource(1950U);
    msg.setSourceEntity(173U);
    msg.setDestination(35214U);
    msg.setDestinationEntity(206U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.18127764285;
    msg.control.set(tmp_msg_0);
    msg.duration = 41988U;
    msg.custom.assign("HYPYBKCJTAOABTUNCDFMDALPSTXEMURHFCHHMFMEDTGZDFGRCCWGFQOLIBRKQKYKWYRNPARITETKBZEBWTBFDUAIHNVGJUVCNKXPXFUXEAQLUYOSGIWNWWZWLXGEKEWXCDQYZBZOODVJDGDZUSPQZUIPFVREMOVWMOZQWUXKVSRYQLXFVSJVVPNENLKICTJRBPTSNLXGMLSQCYNJJINAPBLIZUVAQBXMSJPRKTJAYHRHSHI");

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
    msg.setTimeStamp(0.96107818026);
    msg.setSource(3259U);
    msg.setSourceEntity(215U);
    msg.setDestination(10190U);
    msg.setDestinationEntity(93U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.152387118054;
    tmp_msg_0.z_units = 75U;
    msg.control.set(tmp_msg_0);
    msg.duration = 28445U;
    msg.custom.assign("UFAXHHTVUOXAIACMNVRZWCRMPXDUINYBELRAYPMOHRSKQNDQKPBGSOXDTBLSYWMWRNVEBGMUWXGMTTILOOBALOESCKHHQCJJNIPUMCHNFGFTDFCITWSTX");

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
    msg.setTimeStamp(0.856650477651);
    msg.setSource(33500U);
    msg.setSourceEntity(141U);
    msg.setDestination(27730U);
    msg.setDestinationEntity(153U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.197585783579;
    msg.control.set(tmp_msg_0);
    msg.duration = 44577U;
    msg.custom.assign("QEOVYMZNXIQWKAHCQTESFRXUHBPBVTHKZRMAEYGGMIFHLXVYDBDMQFZNEWAEROPCBKZCZWIHJCTFPLOZUPQTDSQQVKSOAISYLXIKKIXTLALMZNGWSAXHGJHHRDOFEOADPEEBTBXFOTDATUYCMJKULHOVPKJWYN");

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
    msg.setTimeStamp(0.618753930763);
    msg.setSource(12020U);
    msg.setSourceEntity(6U);
    msg.setDestination(17881U);
    msg.setDestinationEntity(175U);
    msg.timeout = 37501U;
    msg.lat = 0.273715262945;
    msg.lon = 0.392482855496;
    msg.z = 0.847403728046;
    msg.z_units = 103U;
    msg.speed = 0.651661413422;
    msg.speed_units = 5U;
    msg.bearing = 0.0772946374037;
    msg.cross_angle = 0.417651948987;
    msg.width = 0.988553129946;
    msg.length = 0.20055407367;
    msg.hstep = 0.381309649775;
    msg.coff = 82U;
    msg.alternation = 135U;
    msg.flags = 164U;
    msg.custom.assign("VEPODTQBNURTTJMREBDKQGSGWUBXDWQIFMBDTDFOMAHRBFCXFDZZRUJJLAMLYPLFZCVUUACCTASKIXUDVKCOBFVOPNEMUKJWLNRIUXHLOKNKPTYPBSHKVIEHFIMGNGOSXTDYSHWQVATPHEMCBJOJXKSGGYXNPOERFFQCDZFWQQJRCEXHEIOMBKYT");

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
    msg.setTimeStamp(0.460656095859);
    msg.setSource(27860U);
    msg.setSourceEntity(247U);
    msg.setDestination(15107U);
    msg.setDestinationEntity(19U);
    msg.timeout = 29434U;
    msg.lat = 0.249752158758;
    msg.lon = 0.906421738739;
    msg.z = 0.741365178378;
    msg.z_units = 134U;
    msg.speed = 0.897615474302;
    msg.speed_units = 160U;
    msg.bearing = 0.817223889903;
    msg.cross_angle = 0.70976275924;
    msg.width = 0.122553954538;
    msg.length = 0.689919039239;
    msg.hstep = 0.715247180893;
    msg.coff = 8U;
    msg.alternation = 197U;
    msg.flags = 226U;
    msg.custom.assign("TDISHQCAAYSWOKIMZJGXVOOEWVBGHTEDXSACEPRKSRZGTXMUUUHSNDAQRLUGARZRDIYSLUKBYNSELPZCPHGFKGVFUVUGXZVTIKWYEOFKCWNEBDTIBIXJYWJOCWSSVXAXFDXOACMINAARLLIGMYGDTPEJKFZWRYDAMQBLFQDTHJPNUHVNWBNIYZTLFOXJMQYJQZMMQQYECBBPFGZRLUNHBEVORTDOVPBMJNFWZXRTLKVMPUCPJJESKQ");

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
    msg.setTimeStamp(0.565024694651);
    msg.setSource(10837U);
    msg.setSourceEntity(237U);
    msg.setDestination(43022U);
    msg.setDestinationEntity(140U);
    msg.timeout = 11377U;
    msg.lat = 0.191524640529;
    msg.lon = 0.304975684418;
    msg.z = 0.521034956796;
    msg.z_units = 46U;
    msg.speed = 0.684199599632;
    msg.speed_units = 53U;
    msg.bearing = 0.0445157560564;
    msg.cross_angle = 0.610250097815;
    msg.width = 0.967975785688;
    msg.length = 0.121237800319;
    msg.hstep = 0.468763167382;
    msg.coff = 199U;
    msg.alternation = 43U;
    msg.flags = 108U;
    msg.custom.assign("LEPATMBSCEPUKBONPRMXGFIDSHIUFUNMAUNTDHAXOOCZACYJLZCNAZGEFNTQMWGIRDEEZKVCJDQAFOZIMWAOZXZQJQDGYBURGKMWYQOCDXTFTVJLHBPBPQAJYJOUPZYDVIWINFSYIHCQL");

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
    msg.setTimeStamp(0.930565722579);
    msg.setSource(6512U);
    msg.setSourceEntity(222U);
    msg.setDestination(9632U);
    msg.setDestinationEntity(224U);
    msg.timeout = 15715U;
    msg.lat = 0.362376319343;
    msg.lon = 0.040656819257;
    msg.z = 0.115395838967;
    msg.z_units = 234U;
    msg.speed = 0.425577958941;
    msg.speed_units = 71U;
    msg.custom.assign("OZDGKZCCHWGVMWNPTAJJXBGNYTSTQNFPASFIGXBSKLTHYZOBMDIUKCXXSERKIMXLXFKHVHCTSXFCJPPYEMZIEUFNQDRHVOEMSXOLOUUVQZTCBIFWVLPTIMJNFHSFGEUVMYQCGXMPAVFHNNFDWLQRSIYYSWVRPLARHIRMJZG");

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
    msg.setTimeStamp(0.983002430965);
    msg.setSource(797U);
    msg.setSourceEntity(65U);
    msg.setDestination(30891U);
    msg.setDestinationEntity(78U);
    msg.timeout = 58700U;
    msg.lat = 0.627291198406;
    msg.lon = 0.412376533196;
    msg.z = 0.701057104119;
    msg.z_units = 65U;
    msg.speed = 0.0686955141802;
    msg.speed_units = 167U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.683795170089;
    tmp_msg_0.y = 0.90353595134;
    tmp_msg_0.z = 0.888616764211;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WMAWLNPBEBQPIHWASBUJXLOJXUUYSVZEOOHBJZZP");

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
    msg.setTimeStamp(0.773417478952);
    msg.setSource(55754U);
    msg.setSourceEntity(75U);
    msg.setDestination(58947U);
    msg.setDestinationEntity(191U);
    msg.timeout = 52024U;
    msg.lat = 0.496392384716;
    msg.lon = 0.59352142269;
    msg.z = 0.725815834941;
    msg.z_units = 232U;
    msg.speed = 0.274446429317;
    msg.speed_units = 239U;
    msg.custom.assign("SGIGFGUXXFUSUOIYFCJ");

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
    msg.setTimeStamp(0.640703356799);
    msg.setSource(52822U);
    msg.setSourceEntity(234U);
    msg.setDestination(26047U);
    msg.setDestinationEntity(249U);
    msg.x = 0.121133285338;
    msg.y = 0.230470453144;
    msg.z = 0.532974159112;

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
    msg.setTimeStamp(0.485433624811);
    msg.setSource(20658U);
    msg.setSourceEntity(130U);
    msg.setDestination(56264U);
    msg.setDestinationEntity(142U);
    msg.x = 0.787883578102;
    msg.y = 0.489535353636;
    msg.z = 0.964327245369;

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
    msg.setTimeStamp(0.783700471609);
    msg.setSource(63198U);
    msg.setSourceEntity(165U);
    msg.setDestination(18196U);
    msg.setDestinationEntity(11U);
    msg.x = 0.0310091922001;
    msg.y = 0.957417484828;
    msg.z = 0.0270308371011;

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
    msg.setTimeStamp(0.0459725084662);
    msg.setSource(58253U);
    msg.setSourceEntity(26U);
    msg.setDestination(58518U);
    msg.setDestinationEntity(75U);
    msg.timeout = 44745U;
    msg.lat = 0.847119735202;
    msg.lon = 0.841265046377;
    msg.z = 0.545355253563;
    msg.z_units = 119U;
    msg.amplitude = 0.236337624167;
    msg.pitch = 0.825406861938;
    msg.speed = 0.454087061667;
    msg.speed_units = 231U;
    msg.custom.assign("DIXWZSQLWMMNGUYITCJTTCFKUGRPNPKZQSNRUBHXBRVEEYETCJVNRSMLEPBVY");

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
    msg.setTimeStamp(0.503167014205);
    msg.setSource(26204U);
    msg.setSourceEntity(155U);
    msg.setDestination(39164U);
    msg.setDestinationEntity(204U);
    msg.timeout = 63595U;
    msg.lat = 0.932897507025;
    msg.lon = 0.0306683425141;
    msg.z = 0.950038628123;
    msg.z_units = 122U;
    msg.amplitude = 0.704398067916;
    msg.pitch = 0.89390790559;
    msg.speed = 0.152893393958;
    msg.speed_units = 137U;
    msg.custom.assign("JNPJAYMZHSBGRCLDWDSRTABIUQDFOXGBPFMPELKQRUZIEWXEWLJYKPBXDLEPXWFZSRAYWKCELLAPMHRWAZYHQCWKLHOEIJBODXXRQJFJCHKUAZXUCSMRCITUVGEMKMILSTEVBSIHMOSSYGCRWUDQQDOQFPTITYVGKRYBHUWUPGMKQIAGATEVOIXZMNBNDFXCAZIPKHGNJNTSLJOCYGJWDOOFUYYNTCVNLVKTZRUQVVJNNHZ");

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
    msg.setTimeStamp(0.513471032645);
    msg.setSource(43397U);
    msg.setSourceEntity(50U);
    msg.setDestination(40517U);
    msg.setDestinationEntity(210U);
    msg.timeout = 1636U;
    msg.lat = 0.491090600659;
    msg.lon = 0.333927591863;
    msg.z = 0.672374052941;
    msg.z_units = 162U;
    msg.amplitude = 0.143682857648;
    msg.pitch = 0.499568169965;
    msg.speed = 0.428709763913;
    msg.speed_units = 225U;
    msg.custom.assign("AGRBRDEAMRXPFQZEEDJBKJQLRHIKJNBCBUFHEMMXSCXFOSCKNSDYSCQYUTPBVRYIAHZELNTIQIUNWTFUWKMGZCGJCLGLOZKYXQVYIAUQCZMXLCPMZJVTNINLSRZMZN");

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
    msg.setTimeStamp(0.354967951934);
    msg.setSource(23847U);
    msg.setSourceEntity(123U);
    msg.setDestination(62675U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.643871304651);
    msg.setSource(50479U);
    msg.setSourceEntity(253U);
    msg.setDestination(9425U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.69336589069);
    msg.setSource(62132U);
    msg.setSourceEntity(75U);
    msg.setDestination(7881U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.264690192043);
    msg.setSource(10401U);
    msg.setSourceEntity(200U);
    msg.setDestination(14321U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.20627468187;
    msg.lon = 0.53112253116;
    msg.z = 0.500534780227;
    msg.z_units = 194U;
    msg.radius = 0.162610114468;
    msg.duration = 10769U;
    msg.speed = 0.355549524085;
    msg.speed_units = 65U;
    msg.custom.assign("BITJNNUTNVIPIRRIRKSMUKCMJPMRUFKHUPPOAXCUTAHFXCGRRNBUTKYARUQAFVEZEDFZOUGBMBQHM");

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
    msg.setTimeStamp(0.0508595494291);
    msg.setSource(32446U);
    msg.setSourceEntity(201U);
    msg.setDestination(58118U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.721266617666;
    msg.lon = 0.0805950811536;
    msg.z = 0.216214269083;
    msg.z_units = 18U;
    msg.radius = 0.878029070506;
    msg.duration = 26509U;
    msg.speed = 0.78884784702;
    msg.speed_units = 42U;
    msg.custom.assign("ORZBRAWYBULKFMHCEJJUFRNMLGEHHOPSNLHSPSRYFWEPKCCKNVTQCKCRWQWTAJFPCIFSVPNRBSYIYIJYODIENCEKPAXZGDTTVUKAZEYXCXCDKJQJGAWHGIPWKRLHYA");

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
    msg.setTimeStamp(0.718302155296);
    msg.setSource(1803U);
    msg.setSourceEntity(171U);
    msg.setDestination(63697U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.102167469139;
    msg.lon = 0.0199642617096;
    msg.z = 0.823373471241;
    msg.z_units = 229U;
    msg.radius = 0.600292897936;
    msg.duration = 14646U;
    msg.speed = 0.481716419822;
    msg.speed_units = 101U;
    msg.custom.assign("DGIWQZOBICFDJEIOOPFOTXYHRZEQVTHKNVKJTVZVFSHROABNHQODCPYKTRRTHCTAFAFMKFJDYPJRCMUQHPDARUANCXWEVLQXLWKUOEIMNDGSXPKMKKBEVIQYUGCEJDQVDUYJGSLMBESDCZLLSXIOGOQ");

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
    msg.setTimeStamp(0.544330652573);
    msg.setSource(45275U);
    msg.setSourceEntity(181U);
    msg.setDestination(3664U);
    msg.setDestinationEntity(45U);
    msg.timeout = 41489U;
    msg.flags = 37U;
    msg.lat = 0.732692408135;
    msg.lon = 0.00192245461611;
    msg.start_z = 0.102357566838;
    msg.start_z_units = 9U;
    msg.end_z = 0.967290582015;
    msg.end_z_units = 174U;
    msg.radius = 0.0890745983712;
    msg.speed = 0.558579477714;
    msg.speed_units = 73U;
    msg.custom.assign("FFKAOBHSYUSBKCEJCQWURNCLHIXFXAXO");

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
    msg.setTimeStamp(0.817485805619);
    msg.setSource(9748U);
    msg.setSourceEntity(39U);
    msg.setDestination(1085U);
    msg.setDestinationEntity(7U);
    msg.timeout = 4759U;
    msg.flags = 124U;
    msg.lat = 0.480840594511;
    msg.lon = 0.499830836579;
    msg.start_z = 0.417706314577;
    msg.start_z_units = 119U;
    msg.end_z = 0.676754528488;
    msg.end_z_units = 195U;
    msg.radius = 0.0340291731152;
    msg.speed = 0.574091606256;
    msg.speed_units = 251U;
    msg.custom.assign("LJPQEOYVOCUXQZSMPILOBSAOSOSXNZEKLEFYHEEJVPADSTLYYIDPNHLBKOZHRBRINAIHZCLEXMQIQHQAPHPKJWUYCFFVNVLXBBGNAURSZEWMAFGJJMCPMMDVFYYOLANVYWXRBHHZUWFDEDZNKRHZIUCRWUDFWSGUASXVTUKNKVGSJKCETZFCTMQWXBDNVRIEARXZDOITVDLCGBTIJQCSPWROGTLWGK");

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
    msg.setTimeStamp(0.437510310157);
    msg.setSource(2077U);
    msg.setSourceEntity(80U);
    msg.setDestination(2515U);
    msg.setDestinationEntity(71U);
    msg.timeout = 60609U;
    msg.flags = 242U;
    msg.lat = 0.223536342965;
    msg.lon = 0.961034574354;
    msg.start_z = 0.887703247414;
    msg.start_z_units = 187U;
    msg.end_z = 0.905794898478;
    msg.end_z_units = 171U;
    msg.radius = 0.978555927145;
    msg.speed = 0.247837514723;
    msg.speed_units = 181U;
    msg.custom.assign("YGVSZJGIOKGIMVROGLAMFKGYMDCQPIHCNPTRIYDLFCQTSWFTNX");

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
    msg.setTimeStamp(0.422715517913);
    msg.setSource(34991U);
    msg.setSourceEntity(69U);
    msg.setDestination(51842U);
    msg.setDestinationEntity(49U);
    msg.timeout = 26859U;
    msg.lat = 0.936311260677;
    msg.lon = 0.452126107009;
    msg.z = 0.712275849549;
    msg.z_units = 146U;
    msg.speed = 0.186378277962;
    msg.speed_units = 88U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.671541016748;
    tmp_msg_0.y = 0.258281196339;
    tmp_msg_0.z = 0.140693318022;
    tmp_msg_0.t = 0.246522298858;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("EBTPYALGWUACMQBVSOFHYJSTOGXZUKPYYPGEVLKNBBQJLAQWPPNAMKCXSYZHRJZRGWWDICHTJLRQVQIOHDXBEIEWBAKARSTVUKIETJLJSEJPKPSYXZWQDYLNLUXUXDPRAMBCQQFBGDZFOGCEVRFOJMMXVKDOVMIIMDNIGTBWECTSN");

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
    msg.setTimeStamp(0.584375060837);
    msg.setSource(13858U);
    msg.setSourceEntity(70U);
    msg.setDestination(21459U);
    msg.setDestinationEntity(232U);
    msg.timeout = 36218U;
    msg.lat = 0.938611443591;
    msg.lon = 0.478512266811;
    msg.z = 0.939228081955;
    msg.z_units = 101U;
    msg.speed = 0.985057298874;
    msg.speed_units = 137U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.258038662945;
    tmp_msg_0.y = 0.301796026013;
    tmp_msg_0.z = 0.233144980805;
    tmp_msg_0.t = 0.836549665822;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("VGRLOPOYFHMNUDKYVRUVHDRIQECBRQPJAZLFYVFNMKNRGCFKOHOYJHMSGBJZTXFDMPGCWFLSUFGJKBXVTNAIMKWTBOBVZYYOHNBHUFULMIGTOKEQCHQLVLT");

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
    msg.setTimeStamp(0.105484105064);
    msg.setSource(64573U);
    msg.setSourceEntity(114U);
    msg.setDestination(41023U);
    msg.setDestinationEntity(27U);
    msg.timeout = 22612U;
    msg.lat = 0.958178104415;
    msg.lon = 0.686966896036;
    msg.z = 0.319021934248;
    msg.z_units = 22U;
    msg.speed = 0.337586007474;
    msg.speed_units = 69U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.223921045079;
    tmp_msg_0.y = 0.732336667706;
    tmp_msg_0.z = 0.589161697738;
    tmp_msg_0.t = 0.414265750852;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OEWUBEITTPLQCGLXV");

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
    msg.setTimeStamp(0.107764438205);
    msg.setSource(53088U);
    msg.setSourceEntity(34U);
    msg.setDestination(27492U);
    msg.setDestinationEntity(2U);
    msg.x = 0.722236626184;
    msg.y = 0.282473027674;
    msg.z = 0.664763002074;
    msg.t = 0.934704412119;

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
    msg.setTimeStamp(0.00598462726659);
    msg.setSource(5875U);
    msg.setSourceEntity(177U);
    msg.setDestination(63727U);
    msg.setDestinationEntity(114U);
    msg.x = 0.0212711026749;
    msg.y = 0.578846190948;
    msg.z = 0.634120283811;
    msg.t = 0.0869601998423;

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
    msg.setTimeStamp(0.737968564879);
    msg.setSource(52219U);
    msg.setSourceEntity(234U);
    msg.setDestination(49709U);
    msg.setDestinationEntity(0U);
    msg.x = 0.348124350013;
    msg.y = 0.5649858813;
    msg.z = 0.924875185408;
    msg.t = 0.236464062596;

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
    msg.setTimeStamp(0.784841611633);
    msg.setSource(46173U);
    msg.setSourceEntity(159U);
    msg.setDestination(7140U);
    msg.setDestinationEntity(206U);
    msg.timeout = 38507U;
    msg.name.assign("TLIQXFHBRWJSXENWTOHJGWIJEUBHOEDNWIZJVPNZDJKBXZWQLYNMAMDHXCKVNTEPFKDREQQVDNABVOWLMTJDEBFEFSCPSSKZBCHNNOOOVZGMUYDYPCAHKFXVGBAOEYIALXGNSLPMZUYPGLUUPQHFRJGSYCSGBPRLRAVAFQKCIDMOLYJDZAAQGKQ");
    msg.custom.assign("QQARRNXTLWC");

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
    msg.setTimeStamp(0.0375124731965);
    msg.setSource(18722U);
    msg.setSourceEntity(67U);
    msg.setDestination(33984U);
    msg.setDestinationEntity(12U);
    msg.timeout = 27246U;
    msg.name.assign("CPKMHJPJILRVAFBPYMCFOLFTJANMKCTNPLUBWTISIROGIJCBPYRYKDOPVUMGHGHIKOZVQMUVONGWDAQEOZDABHLGMQCCMXSEOEYGNUBFWXXXNTRFTHYRILEAXZLWEPUTORNZFXOEWKJZGSJADWYNCQZXWQNODYCIXSSQEGVLVLXUZTQEIKAVMSKBDYRKDS");
    msg.custom.assign("FABWWYPHEJSAEXVZPOPNVFHARABRFYSSJKKOHFMYUEQORQAFGCAZZMTHFZOYWNTHYOXULGYUPEFZAICDGTIDHCGSAILYMPLETFRWQBMIQOXBEHVQBZORDWQMXTJSSLKECNYSDUMKXHDEZOGHXWMJGUMPIP");

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
    msg.setTimeStamp(0.52116879799);
    msg.setSource(2820U);
    msg.setSourceEntity(241U);
    msg.setDestination(14042U);
    msg.setDestinationEntity(171U);
    msg.timeout = 40467U;
    msg.name.assign("NQLSEYHPTSIJLRCGHUMSODQNTWEEBLZARBGIUNKIOWBEIYJFWGPRZCFSITKXWFXQKEDJYPBUZKOUFMNISWZAOPMJQZRSAQVXNUEVFOYVWRMVQREAQMPXKRSVGBPUVFTJUP");
    msg.custom.assign("NQCOTNCMTTDRUFXECOCUOHBYVNQVKTDOOLPHEFDONCZONDJAGRWYEUUITYAWDJKXSZZAVFWQKGUGMKEATYAVMZXJBESMFAYDHSPQKOFZQRPXWJBLXGRMCIPLJLHXEVIHUKMLBRFBILOWURSIBRDPJRSLSATBZZPCQDZGKJBIFBGSUXLCJJZWMHIJXPKKFV");

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
    msg.setTimeStamp(0.43575523762);
    msg.setSource(36990U);
    msg.setSourceEntity(96U);
    msg.setDestination(36842U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.136095684398;
    msg.lon = 0.926975772462;
    msg.z = 0.368763225458;
    msg.z_units = 47U;
    msg.speed = 0.495127816114;
    msg.speed_units = 194U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.447710568806;
    tmp_msg_0.y = 0.215427932203;
    tmp_msg_0.z = 0.876035676938;
    tmp_msg_0.t = 0.465115634776;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.871715579763;
    msg.custom.assign("KGJYDZHADCLWUAWFGHGETSQKFBQQXCUZPXCMKUBXEKEXKJWNQHSXILRFPQTNJIEYRHRFWSDMLHSZNUFFPKLBSUYKZPOERUTBDF");

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
    msg.setTimeStamp(0.622491970965);
    msg.setSource(16121U);
    msg.setSourceEntity(125U);
    msg.setDestination(11414U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.737847548963;
    msg.lon = 0.0650857949104;
    msg.z = 0.127833888571;
    msg.z_units = 139U;
    msg.speed = 0.903161774574;
    msg.speed_units = 148U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.735910890783;
    tmp_msg_0.y = 0.0538484306409;
    tmp_msg_0.z = 0.597167538108;
    tmp_msg_0.t = 0.984801453695;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 30474U;
    tmp_msg_1.off_x = 0.660286984368;
    tmp_msg_1.off_y = 0.548094177196;
    tmp_msg_1.off_z = 0.561310536277;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.834621688667;
    msg.custom.assign("AAQUKTVRAUORKIQAJQJAWGXFCWOQOLGFVBDAGULNIMHRSTADVLVCXYICBSWDPZJYRZFZQDFXVXPWJQLUNIMBCGWVOEV");

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
    msg.setTimeStamp(0.101618378616);
    msg.setSource(35205U);
    msg.setSourceEntity(146U);
    msg.setDestination(1092U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.64624354833;
    msg.lon = 0.742501043111;
    msg.z = 0.646821710271;
    msg.z_units = 183U;
    msg.speed = 0.674068615805;
    msg.speed_units = 192U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42793U;
    tmp_msg_0.off_x = 0.0221725104487;
    tmp_msg_0.off_y = 0.605935704226;
    tmp_msg_0.off_z = 0.95859854965;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.671018805704;
    msg.custom.assign("RNUFVHMDIDNGTKDSUJQBVVHRNGCDJITRUOHTJXSOZGEXSZAWZKRVTPDUZVYYZFVHQ");

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
    msg.setTimeStamp(0.160513388309);
    msg.setSource(32649U);
    msg.setSourceEntity(30U);
    msg.setDestination(18888U);
    msg.setDestinationEntity(138U);
    msg.vid = 34651U;
    msg.off_x = 0.221019413476;
    msg.off_y = 0.606642270254;
    msg.off_z = 0.840730087042;

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
    msg.setTimeStamp(0.65467339379);
    msg.setSource(39696U);
    msg.setSourceEntity(50U);
    msg.setDestination(12016U);
    msg.setDestinationEntity(81U);
    msg.vid = 47474U;
    msg.off_x = 0.655240456127;
    msg.off_y = 0.873155829861;
    msg.off_z = 0.420486383039;

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
    msg.setTimeStamp(0.431958911535);
    msg.setSource(25801U);
    msg.setSourceEntity(50U);
    msg.setDestination(35966U);
    msg.setDestinationEntity(39U);
    msg.vid = 9258U;
    msg.off_x = 0.933209166819;
    msg.off_y = 0.164973785857;
    msg.off_z = 0.319179069306;

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
    msg.setTimeStamp(0.39814404726);
    msg.setSource(26538U);
    msg.setSourceEntity(104U);
    msg.setDestination(41247U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.686814667989);
    msg.setSource(26906U);
    msg.setSourceEntity(161U);
    msg.setDestination(6722U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.923099293989);
    msg.setSource(25493U);
    msg.setSourceEntity(101U);
    msg.setDestination(57208U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.710784438362);
    msg.setSource(21274U);
    msg.setSourceEntity(229U);
    msg.setDestination(40255U);
    msg.setDestinationEntity(83U);
    msg.mid = 43037U;

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
    msg.setTimeStamp(0.308782034212);
    msg.setSource(54935U);
    msg.setSourceEntity(36U);
    msg.setDestination(11821U);
    msg.setDestinationEntity(45U);
    msg.mid = 56810U;

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
    msg.setTimeStamp(0.794124542832);
    msg.setSource(44255U);
    msg.setSourceEntity(249U);
    msg.setDestination(13368U);
    msg.setDestinationEntity(76U);
    msg.mid = 4117U;

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
    msg.setTimeStamp(0.254940055264);
    msg.setSource(33680U);
    msg.setSourceEntity(170U);
    msg.setDestination(11108U);
    msg.setDestinationEntity(202U);
    msg.state = 192U;
    msg.eta = 29669U;
    msg.info.assign("MNURZWIQPQJDMXNTCSOSCGRCKMJHIGWZRJFYKKXTBZIOEGPVIPHOQBSKROLHVPWKACBVXTODBZHHWTDFWDYXRXDBDUILBQVUAMWNPQYEMMOJTUYJLDKZLAGO");

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
    msg.setTimeStamp(0.593094062722);
    msg.setSource(61722U);
    msg.setSourceEntity(5U);
    msg.setDestination(50794U);
    msg.setDestinationEntity(58U);
    msg.state = 35U;
    msg.eta = 34845U;
    msg.info.assign("PJJPTEJMIWAFGVPYUJWPUQSLLTLAFOPINVSRKIQMKLCHJDKECHSTLXLZGIMRYEGSCBRYEJHLQQTTQGSRVNFOVSAEGRCRAQHEJJMUGBGORZLXNBXZVWUTBZDXFWZMADDNQPVBVRWIOUOONIXYURXBUFNCXUBVWDEDQAONWEKFXZWSAZGOAMYMAKXBTPWMUSOPHDEGXJBTIAHIIKVPCKYLYWEYPSDHOSHTHYFNBHFDMYKZ");

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
    msg.setTimeStamp(0.47374391438);
    msg.setSource(43626U);
    msg.setSourceEntity(190U);
    msg.setDestination(25162U);
    msg.setDestinationEntity(100U);
    msg.state = 100U;
    msg.eta = 15972U;
    msg.info.assign("KBMPCIGNXXWCLYQHNJUVAWIICYZXEYMSPZVOGYZPKMXOLXVCGYREUFMVAITJTHQPDJBPIORIJBTZEKDDRXOBNGGEKLGVGJRQQLNECQAUTLWBSMVZKEBCZFDWHBFJBRAFOHLYTZFJFMAWUCHZAJATUVEPRZCWSSMVHUVTOKQKBWUUDQVYGSWRNHLNNMRBNCDIAIKKPLAHXMSXRNHQFLPOIDYQMDIZYFPSHTLOEOTKJOFAQDGUSWNSWUEPR");

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
    msg.setTimeStamp(0.0248080825006);
    msg.setSource(20474U);
    msg.setSourceEntity(132U);
    msg.setDestination(61212U);
    msg.setDestinationEntity(127U);
    msg.system = 58067U;
    msg.duration = 46445U;
    msg.speed = 0.583188546559;
    msg.speed_units = 225U;
    msg.x = 0.0854991319447;
    msg.y = 0.571568918675;
    msg.z = 0.99967028095;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.430827895076);
    msg.setSource(26955U);
    msg.setSourceEntity(114U);
    msg.setDestination(22446U);
    msg.setDestinationEntity(38U);
    msg.system = 16680U;
    msg.duration = 7484U;
    msg.speed = 0.924073367311;
    msg.speed_units = 209U;
    msg.x = 0.422377800389;
    msg.y = 0.305910695341;
    msg.z = 0.532285657667;
    msg.z_units = 180U;

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
    msg.setTimeStamp(0.0599092582665);
    msg.setSource(9540U);
    msg.setSourceEntity(141U);
    msg.setDestination(13051U);
    msg.setDestinationEntity(7U);
    msg.system = 20223U;
    msg.duration = 17334U;
    msg.speed = 0.10347653813;
    msg.speed_units = 185U;
    msg.x = 0.618590293131;
    msg.y = 0.151277344532;
    msg.z = 0.593392008183;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.723941950349);
    msg.setSource(49177U);
    msg.setSourceEntity(207U);
    msg.setDestination(52996U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.224959958073;
    msg.lon = 0.289031201607;
    msg.speed = 0.550157444871;
    msg.speed_units = 154U;
    msg.duration = 47654U;
    msg.sys_a = 16144U;
    msg.sys_b = 15184U;
    msg.move_threshold = 0.0590784214732;

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
    msg.setTimeStamp(0.337880435305);
    msg.setSource(36152U);
    msg.setSourceEntity(127U);
    msg.setDestination(46288U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.963859486142;
    msg.lon = 0.4930185678;
    msg.speed = 0.606314199495;
    msg.speed_units = 233U;
    msg.duration = 45677U;
    msg.sys_a = 14940U;
    msg.sys_b = 10830U;
    msg.move_threshold = 0.214659035186;

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
    msg.setTimeStamp(0.198633511323);
    msg.setSource(59686U);
    msg.setSourceEntity(194U);
    msg.setDestination(58174U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.870886780697;
    msg.lon = 0.953452792938;
    msg.speed = 0.380180981538;
    msg.speed_units = 228U;
    msg.duration = 18879U;
    msg.sys_a = 8231U;
    msg.sys_b = 4365U;
    msg.move_threshold = 0.304800285593;

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
    msg.setTimeStamp(0.936409875881);
    msg.setSource(39850U);
    msg.setSourceEntity(20U);
    msg.setDestination(36167U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.0909307392964;
    msg.lon = 0.989184969157;
    msg.z = 0.962858239695;
    msg.z_units = 69U;
    msg.speed = 0.830305720228;
    msg.speed_units = 7U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.366455074069;
    tmp_msg_0.lon = 0.611244665073;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YZUPZGMEWJHBHLORHSEEBKRFADSEKHMFNPPFZDSDTIVCGQVLYRUQOEQYWNDLTRFUXMAKKMDHIKCCELHFLBMVFGAJEWRVXICHMWLGJAQNJAAUBNJFNEZSSJJPTBPWHFOAWGIQRLKGSLXQGHCMXFOUHUCYSCZKCMZBIQTMYDUQYVYBWBIFODUOEWXZTPPPRSZBIVVGGSK");

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
    msg.setTimeStamp(0.387831818222);
    msg.setSource(55157U);
    msg.setSourceEntity(208U);
    msg.setDestination(45409U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.709889568648;
    msg.lon = 0.541019958085;
    msg.z = 0.513280895333;
    msg.z_units = 228U;
    msg.speed = 0.115189874722;
    msg.speed_units = 222U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.712348548813;
    tmp_msg_0.lon = 0.248615526334;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OGTIKRIYUOIAFWDCYLUCUUXKRPZFRZKWLENIEQECJBKTK");

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
    msg.setTimeStamp(0.640760108378);
    msg.setSource(5684U);
    msg.setSourceEntity(170U);
    msg.setDestination(14803U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.367444115109;
    msg.lon = 0.169215848879;
    msg.z = 0.394473905689;
    msg.z_units = 151U;
    msg.speed = 0.98770969751;
    msg.speed_units = 37U;
    msg.custom.assign("XTJDBVDTQSKMFQQRWITCBKYMPGFHBNKUQORVIYHRVQ");

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
    msg.setTimeStamp(0.181976365998);
    msg.setSource(39758U);
    msg.setSourceEntity(142U);
    msg.setDestination(27002U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.723519848028;
    msg.lon = 0.550099161134;

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
    msg.setTimeStamp(0.356686176817);
    msg.setSource(12480U);
    msg.setSourceEntity(36U);
    msg.setDestination(33323U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.537944746733;
    msg.lon = 0.757811739316;

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
    msg.setTimeStamp(0.314599826717);
    msg.setSource(24895U);
    msg.setSourceEntity(203U);
    msg.setDestination(30806U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.518978547729;
    msg.lon = 0.0955611134946;

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
    msg.setTimeStamp(0.878201188186);
    msg.setSource(27235U);
    msg.setSourceEntity(35U);
    msg.setDestination(33442U);
    msg.setDestinationEntity(18U);
    msg.timeout = 15204U;
    msg.lat = 0.894245810058;
    msg.lon = 0.69480929111;
    msg.z = 0.627626422269;
    msg.z_units = 217U;
    msg.pitch = 0.161646336481;
    msg.amplitude = 0.795190017581;
    msg.duration = 64535U;
    msg.speed = 0.627895666533;
    msg.speed_units = 110U;
    msg.radius = 0.0546267076619;
    msg.direction = 7U;
    msg.custom.assign("MMJSYVVTPYLZEDDVRGGXCSCKGOFJKGQOPVRLCGXJNDLFZQTNDANVHNAKCYUOCBLNIJFAFHMIQLKSFXXNJTXTHVJZZAPCMFQSKSYEGALDILYXCZOONQJXZWGKBKYREWSUXOEZWUKVBMMNURIOTTUKHXWGQAQYUGXVZJZDPAWSMQBIRFNUNHTMPFSHIBPTRLEAPOHDEBIO");

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
    msg.setTimeStamp(0.183171014279);
    msg.setSource(7275U);
    msg.setSourceEntity(124U);
    msg.setDestination(13533U);
    msg.setDestinationEntity(224U);
    msg.timeout = 9536U;
    msg.lat = 0.704227972171;
    msg.lon = 0.807365504723;
    msg.z = 0.471152597356;
    msg.z_units = 134U;
    msg.pitch = 0.404121187957;
    msg.amplitude = 0.841531627911;
    msg.duration = 46346U;
    msg.speed = 0.865862821432;
    msg.speed_units = 96U;
    msg.radius = 0.625554554521;
    msg.direction = 201U;
    msg.custom.assign("JMRDYUTQRJVANEQFQDCQFGMXQTGZKQPUWLGZMKVAFUGNCLQOLZCHEXJROLAOYZSTZNGEVBYHIKDGIJJIRPIKYERDJFZWSNOPBFBDNDPMKZJAUVSSSOCYVCHRWXFVSLIFWJNPROBFXTZOIKTQLWATGWFKWLHOGQYECT");

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
    msg.setTimeStamp(0.657068713033);
    msg.setSource(37688U);
    msg.setSourceEntity(241U);
    msg.setDestination(43600U);
    msg.setDestinationEntity(14U);
    msg.timeout = 15075U;
    msg.lat = 0.429549195298;
    msg.lon = 0.866525512985;
    msg.z = 0.338684716768;
    msg.z_units = 11U;
    msg.pitch = 0.892203077535;
    msg.amplitude = 0.865168972888;
    msg.duration = 35894U;
    msg.speed = 0.462916685391;
    msg.speed_units = 190U;
    msg.radius = 0.594458481261;
    msg.direction = 124U;
    msg.custom.assign("UHDRYZAAKYGQICRNUPXJQWOWQPLMDJLJISMRCDVTUIZZCGFKDFUUWXJMNVYNVAXSTTGBMUNVCGBSCKFBOOHGW");

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
    msg.setTimeStamp(0.81003624443);
    msg.setSource(50411U);
    msg.setSourceEntity(81U);
    msg.setDestination(25844U);
    msg.setDestinationEntity(24U);
    msg.formation_name.assign("KZZVDDTGJBGEIGSQNZAXCSVMUIRPFVNKXXNKBGDARMJQRAGYVTNLYPVOEJLBWFODRMXXHMQVPQXPPLVJKZATKNESYDWUWEWDAACDAEKWSLOUTMUORQMFIHKAJLFZEUDCZLNARNJNXAYYVDLKTUMKJGFRITTTHCIROWVCSHZLCWQTOFBCIHSHLRWUEFSYPHFWHQXOCEIHNWGJQCJMZDMUOSGNYECBPTSGUEBIIFZQMLYO");
    msg.reference_frame = 57U;
    msg.custom.assign("XMWKNYFSOVDYTDGBBWSTQMKUOQCCPGWTNPRPUXZXPJGYHOSRZJUINQ");

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
    msg.setTimeStamp(0.134317111325);
    msg.setSource(64151U);
    msg.setSourceEntity(208U);
    msg.setDestination(45515U);
    msg.setDestinationEntity(84U);
    msg.formation_name.assign("WZCMJSHBWKEBOJILHYROVRRJUNGVPNPRLXOVOYISNHBRLZXGUNAWLUWDYUXTRCCQXXIVFPQCRAGIPZDRFXYKCUVSJMVUYBCGJYQEVFWQUQNPLKGZLEXRXZISYTSGSFDEUQWPDGEZSOKJOTKLBHZKTNZBYIKKFMFPAJDHELMEPJQAQJQZBOYTMSCAOWFEREHQGOIWAMVTMVDKAWNEALMBDTSXTINGHLFAIUYWPCHHNFUCNFKBBMJTVC");
    msg.reference_frame = 226U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23774U;
    tmp_msg_0.off_x = 0.0747525712127;
    tmp_msg_0.off_y = 0.380175129913;
    tmp_msg_0.off_z = 0.52267428213;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WKOYMCRMLJYPVOVCFWUGGPGIEQYRHKFULXWNTJVOSCNCAZRCEXUHILBMVQQEUIYROZZSYDFSLDBYWDISKLHUQQQZIKYDDJZTF");

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
    msg.setTimeStamp(0.185494643314);
    msg.setSource(11824U);
    msg.setSourceEntity(52U);
    msg.setDestination(47629U);
    msg.setDestinationEntity(99U);
    msg.formation_name.assign("OERUQACIFZQXCNTZVVMAJBXMHUEHDKJWUGFMNSUYWDXRVCJVXKKOXXOSPUGNTHSAVFIIILGHFMYJQLYDPVNCNNVUOUGOJXYMXEMYYXERNNCTQSUTFBESGGILDPWRQZOKAPCEVAUATHBSKLHRWKDWFHWODGPARTFPOHCSDPLNIBZIYRMJWZISQBHOAAQCFMFZKZDKAPBZER");
    msg.reference_frame = 207U;
    msg.custom.assign("BWEDCPVAGQJCTNITROFOLMRVWDCCMRQWRTGIMGERVQMJOQFHJZLKHFNKLDEXZWXWDSATUXTSPRIEUMEFKJEGXDQIJBBAZPROZCKCEJXAHDYOKQNIHDQSUTFBYVWOAELUMESNRIYPUHXYHQPKCM");

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
    msg.setTimeStamp(0.747919282806);
    msg.setSource(47941U);
    msg.setSourceEntity(235U);
    msg.setDestination(41440U);
    msg.setDestinationEntity(197U);
    msg.group_name.assign("WYGFDRGDZZNUBHYZRCIAWCHQZGXPHOWJIXKIPGCRMJMKNYDPGLGPLYDVQ");
    msg.formation_name.assign("PFUEZFRGZFUAOAXIPXLGQJZLLKTFUZERNEMWKLOKYHRVBGLBFUTPOWHDAKJKPELUTEVCEABHYIROQOXHGDSMZMZDHBQBAGLEYDGRSFCWCOXSPSHYVFKKHULJBAOCWANVAAXPEOINUYGQXF");
    msg.plan_id.assign("QGGYCBMLXURLQORHIWBWNOPRTXHXKFOYIAQTVFBOYVPGGVIPANCDPLZXEWJOEMKFLWRMDTBQMCSANBSFJWACMJYHRXSBCRDNVXQIBUZYOSRDMTFONYHTLCOZLQIIYPKZJKXKIISZJFDLZZEQVHRYHFFQOWMVUUGRTDDMTGJZUWYWNKOUZKJJKEPPCDELKAUCPLFDHQYTJSNCRVETHLEAZAPHGUVFVSTK");
    msg.description.assign("IGCYSPVDYTXWFSFVWXNUITEBFPHQVHAGQLEMYBJKYTOILJZLMBWAZJDCJOVFKNGIXXSVYLNJKXLOEOQGDWDRNCUGMKGDCOQHIUXTVWVUZAENJBTOJIALKVXSZRTGNYHPPGFMLUREUBBUWBCBJFMYOSRIZBAOYWIDZMYAXNSRLSATKQITRGHWOKWCCHVHCKBUUNXOQIJQHSHZCPZTFMZPWRRMNFADDPMRTHPPSEJFEDAARQYNVLQQLS");
    msg.leader_speed = 0.535303675198;
    msg.leader_bank_lim = 0.537093915558;
    msg.pos_sim_err_lim = 0.834899789446;
    msg.pos_sim_err_wrn = 0.0954608469033;
    msg.pos_sim_err_timeout = 64652U;
    msg.converg_max = 0.828988144541;
    msg.converg_timeout = 4741U;
    msg.comms_timeout = 21115U;
    msg.turb_lim = 0.883138102503;
    msg.custom.assign("FOCZUUQCQGPIQJYFSFWOCKITVKMGFCVTYCVQLJYXABXLAAYRPZOISRHEULKWRUHBVKVTKBNAFWZJXXJGRHGEYLUDOREHALIDEMLRNFWASFPSNJGWRYDJVPEIIPSCXYJMXTYIIMBUQZTOLWFHRAQKNOKUGKKE");

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
    msg.setTimeStamp(0.090472039747);
    msg.setSource(18384U);
    msg.setSourceEntity(65U);
    msg.setDestination(4865U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("GYXSAVKAHNAQVDSQCOTLNYLEZTYCKBNLJROETYZQYFQJAAXGAGWYWUVMJPDDKRHVURZUFGUOMLJVODNNIPAWUESRFJMKTENPFXLPDMYISOXFQHBBFRTJOTVUP");
    msg.formation_name.assign("EDMFWZQCZZVWJXDRTZEFQDMQFWSRHIMCSOMRQQHSUACRSDFIUNEYAEAZPMFKSPRJROUZJNPUTBTHXGBTDCYGFECTOARCFJQVBUIXVENHZZJARDDKLOIKIXPFOCXGLKLESYPSNTYTPQCMLBXPIIKWYKZMDWPVMGDAWNDJHRNJAGWEVQSLYYLKTTHGXCQOMPYYBCKAUQNXIBFVOXUHWEGIJFPELXNZBV");
    msg.plan_id.assign("DLANLCADMLSJNCDLBMBCBHFGTVIULMAXKZKVIMZKCUOMJCKVRUTJTTHCFXFPZURYHUSWMPKOREYFERMLQTAOYYSRCBXVJQ");
    msg.description.assign("LWGKIIFUWKFOMORHCILZCPELQAOKBTJYWXWNBXDLZIWDQVDSDHROZMZUQEZJPRXCIVWA");
    msg.leader_speed = 0.439894025238;
    msg.leader_bank_lim = 0.625811302998;
    msg.pos_sim_err_lim = 0.664947363289;
    msg.pos_sim_err_wrn = 0.316193961449;
    msg.pos_sim_err_timeout = 37273U;
    msg.converg_max = 0.872184312707;
    msg.converg_timeout = 56193U;
    msg.comms_timeout = 6277U;
    msg.turb_lim = 0.885764844114;
    msg.custom.assign("RBZEALAYTQKALEQXTKANNVCPBHSGZTJLFTYEHOSFCAFVYNEIEAFDILJUTBCJPBTEPWHSXVMZGYBRIEAVZLXRIZWVMYCOAITRJRXKWPHQBGYKEDPDKPSVCNUTJUZHKUFGNPSSQVGCURQSMGINGRKRSLFQMZNVUD");

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
    msg.setTimeStamp(0.335691813647);
    msg.setSource(50515U);
    msg.setSourceEntity(13U);
    msg.setDestination(19110U);
    msg.setDestinationEntity(140U);
    msg.group_name.assign("UJSUXCSOQQHBGVINZPYJQYHAXIBNUBGMHFHVNUZYRRXZWCPPNUFZMDBZJRRTULDXOAPPUNEKIXDKVMZJEAHAUMDMYWSAJFSGCASYFGBODGRPHYWTOOSHPGFXLZNKREKGJTOVBEWKHHKGLTPOMNSDMPMDWVLE");
    msg.formation_name.assign("JYBLFHOLRMDBOUQROPYNAXVZVVILZUJEVCPJMKBJSVKWDTNMNDIOWSXUYHZNMOQOEISLEJMDSUPEEDUNSBYAXTXFDJRGLSKJRRRGEBKWERMCDSNTZOOMQEWYIWTGLHFYPNKXEUHITUYMGJCFJAQRZPQ");
    msg.plan_id.assign("WAUCOOBEKMADTBUUYKKCUQQVPDNILAWMGREHXPNDRAPSEVFZHSWEQJVSNDTRIOBNJTTULOJHFHIYPMNRESTIKOZUWLWCNQOCWODIYKGZPWJUAIEISVXNJNCXZPGUGLXGBAQVPSMXLKYPCPGQGTQDNWRIFZDZYDYBPYKTLBRLEFHAFGYSFXYHJCDTQEEHZIJEHAIQMJRSK");
    msg.description.assign("COHZKFIEQSUIQLQA");
    msg.leader_speed = 0.233444337909;
    msg.leader_bank_lim = 0.584470713894;
    msg.pos_sim_err_lim = 0.220915782712;
    msg.pos_sim_err_wrn = 0.352847543908;
    msg.pos_sim_err_timeout = 42450U;
    msg.converg_max = 0.246201626918;
    msg.converg_timeout = 15625U;
    msg.comms_timeout = 27761U;
    msg.turb_lim = 0.82593823241;
    msg.custom.assign("VCGDWOSTTIHVMVSZYUJDEDEYKXOZECBYITYYPGCADBERWNJGPAUEYNKGJQQHVKDGNLCZUWXPUOMYNMMBH");

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
    msg.setTimeStamp(0.84825129867);
    msg.setSource(18950U);
    msg.setSourceEntity(235U);
    msg.setDestination(50442U);
    msg.setDestinationEntity(144U);
    msg.control_src = 59422U;
    msg.control_ent = 55U;
    msg.timeout = 0.654545696348;
    msg.loiter_radius = 0.00156482589057;
    msg.altitude_interval = 0.169111279749;

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
    msg.setTimeStamp(0.86267149909);
    msg.setSource(61074U);
    msg.setSourceEntity(37U);
    msg.setDestination(38459U);
    msg.setDestinationEntity(24U);
    msg.control_src = 43498U;
    msg.control_ent = 93U;
    msg.timeout = 0.626414794722;
    msg.loiter_radius = 0.790408691332;
    msg.altitude_interval = 0.148060111694;

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
    msg.setTimeStamp(0.745604991747);
    msg.setSource(57398U);
    msg.setSourceEntity(109U);
    msg.setDestination(40798U);
    msg.setDestinationEntity(227U);
    msg.control_src = 56226U;
    msg.control_ent = 180U;
    msg.timeout = 0.68516892533;
    msg.loiter_radius = 0.589694322837;
    msg.altitude_interval = 0.241843620968;

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
    msg.setTimeStamp(0.611043007582);
    msg.setSource(692U);
    msg.setSourceEntity(69U);
    msg.setDestination(9285U);
    msg.setDestinationEntity(63U);
    msg.flags = 4U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.522973537566;
    tmp_msg_0.speed_units = 67U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.988611336327;
    tmp_msg_1.z_units = 104U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0343977138651;
    msg.lon = 0.740414309347;
    msg.radius = 0.205782062087;

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
    msg.setTimeStamp(0.924989818593);
    msg.setSource(14398U);
    msg.setSourceEntity(73U);
    msg.setDestination(36024U);
    msg.setDestinationEntity(123U);
    msg.flags = 8U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.636831595856;
    tmp_msg_0.speed_units = 195U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.655155568817;
    tmp_msg_1.z_units = 237U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.186275368355;
    msg.lon = 0.843987962467;
    msg.radius = 0.700141695555;

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
    msg.setTimeStamp(0.40083380792);
    msg.setSource(21794U);
    msg.setSourceEntity(63U);
    msg.setDestination(5866U);
    msg.setDestinationEntity(246U);
    msg.flags = 145U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.361592275643;
    tmp_msg_0.speed_units = 206U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.246826929455;
    tmp_msg_1.z_units = 246U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.252632334863;
    msg.lon = 0.0746275229978;
    msg.radius = 0.741567436563;

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
    msg.setTimeStamp(0.422885000191);
    msg.setSource(3487U);
    msg.setSourceEntity(171U);
    msg.setDestination(10964U);
    msg.setDestinationEntity(37U);
    msg.control_src = 51900U;
    msg.control_ent = 60U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 232U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.257596218096;
    tmp_tmp_msg_0_0.speed_units = 231U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.287495054153;
    tmp_tmp_msg_0_1.z_units = 12U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.549404305521;
    tmp_msg_0.lon = 0.422443476094;
    tmp_msg_0.radius = 0.72469883952;
    msg.reference.set(tmp_msg_0);
    msg.state = 40U;
    msg.proximity = 150U;

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
    msg.setTimeStamp(0.865451869652);
    msg.setSource(58375U);
    msg.setSourceEntity(64U);
    msg.setDestination(37378U);
    msg.setDestinationEntity(35U);
    msg.control_src = 52984U;
    msg.control_ent = 138U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 150U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.248042270732;
    tmp_tmp_msg_0_0.speed_units = 85U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.581797977246;
    tmp_tmp_msg_0_1.z_units = 155U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.260141140564;
    tmp_msg_0.lon = 0.300434397308;
    tmp_msg_0.radius = 0.398189985664;
    msg.reference.set(tmp_msg_0);
    msg.state = 185U;
    msg.proximity = 160U;

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
    msg.setTimeStamp(0.347870627534);
    msg.setSource(16987U);
    msg.setSourceEntity(218U);
    msg.setDestination(57191U);
    msg.setDestinationEntity(203U);
    msg.control_src = 28452U;
    msg.control_ent = 243U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 0U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.583213420792;
    tmp_tmp_msg_0_0.speed_units = 198U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.880385430546;
    tmp_tmp_msg_0_1.z_units = 6U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.746016425207;
    tmp_msg_0.lon = 0.599119246815;
    tmp_msg_0.radius = 0.240830017073;
    msg.reference.set(tmp_msg_0);
    msg.state = 5U;
    msg.proximity = 125U;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.685357946386);
    msg.setSource(21539U);
    msg.setSourceEntity(21U);
    msg.setDestination(13368U);
    msg.setDestinationEntity(140U);
    msg.op_mode = 5U;
    msg.error_count = 66U;
    msg.error_ents.assign("XYZCUMJHMLMBNOIORNNGJIQWFOPUFRKZTNPVZEDLPIVARDJSCQABDTYDVGINPMEDVOPWRGUCPQBBJMDBXHKQUZLBSFXSBDXEGWZVXENSKHAVCITBCRZVCKHZKMOWEPZRZFWLIQSKA");
    msg.maneuver_type = 36105U;
    msg.maneuver_stime = 0.488513191352;
    msg.maneuver_eta = 24302U;
    msg.control_loops = 3407274212U;
    msg.flags = 54U;
    msg.last_error.assign("FVDYJUXTGDRILWRCLFPCWVGKTQAECMHDFXNYAQMGAJVPDBSNDBINVVTXTZQAJBYPOTMXJUUPKFITEELZVYKGQENYHOLRKQJFWHWIZPRQQEGGNJAZUAXGDHKZJIRBMHMQLMOCXYBWOCUHJPOWHMEBHN");
    msg.last_error_time = 0.949279333285;

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
    msg.setTimeStamp(0.203036785534);
    msg.setSource(33620U);
    msg.setSourceEntity(203U);
    msg.setDestination(63466U);
    msg.setDestinationEntity(35U);
    msg.op_mode = 185U;
    msg.error_count = 171U;
    msg.error_ents.assign("WVSTYHSBBWRDLGTKTSFAGWBWJIRWNUWHQEEOLVAMUNXFWGFRPXYZIDQRKKZTOCUXPCAKMYJFMQOIRSKUDGMFBLXAYSXNXJYKCEEBMBJLZWOHCDBNPZCVYRZTDJENSCYFDBAGIVKSEXRVEMTOHDPMJBRHPDYVRZJTVYPIHDUEZIOMAMACKANIOQULWCSLJLLAPTQOGIGAPKOKUZUDHEJQPZECVN");
    msg.maneuver_type = 63058U;
    msg.maneuver_stime = 0.886786690396;
    msg.maneuver_eta = 49201U;
    msg.control_loops = 449376945U;
    msg.flags = 122U;
    msg.last_error.assign("TDXTZNHCUIKHUKJDTOQAEPYHATBJAOYFSBBDIMSQRWMLWLCXWBNIRAOKATUGCYZKQXHCTJYAERQXOPITZZEWXCDKIGVGXIYHOUCGDAZSEUJYLUQDSBIWCOMPDVXNMBQEKPUNCLJVIHGBORFTFHUSSKZVLSEPGEZJSVGWNDXLMQTZLE");
    msg.last_error_time = 0.532688011287;

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
    msg.setTimeStamp(0.908471605322);
    msg.setSource(6644U);
    msg.setSourceEntity(208U);
    msg.setDestination(31836U);
    msg.setDestinationEntity(22U);
    msg.op_mode = 12U;
    msg.error_count = 253U;
    msg.error_ents.assign("ZAMBRAIDUPZTNKJCEZEHKLMBVNVYGGZXNNUDYHCDGHBUNIRDRNSMLZQBIXYBTAVIPHKFNJKOTURYQIXLHYJDLKSUJSOMWFOSCCQFPTACPJAKODCXZECSQAFKPCOCIG");
    msg.maneuver_type = 41408U;
    msg.maneuver_stime = 0.98245777918;
    msg.maneuver_eta = 58761U;
    msg.control_loops = 309866999U;
    msg.flags = 48U;
    msg.last_error.assign("MMZYEOEJLPAIQIDTNXYCRWQTSRKUBNRVDWU");
    msg.last_error_time = 0.383989901637;

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
    msg.setTimeStamp(0.764796185585);
    msg.setSource(36483U);
    msg.setSourceEntity(188U);
    msg.setDestination(57780U);
    msg.setDestinationEntity(180U);
    msg.type = 25U;
    msg.request_id = 26630U;
    msg.command = 157U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.428957941034;
    tmp_tmp_msg_0_0.speed_units = 66U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 42062U;
    tmp_msg_0.custom.assign("ZXJAATUUKVFRWMFHZEITAMYFBNUPQWSTAZNPDMEFFQLQYACWTGXINSGSPWNTHLITCKUBAHZMPHPFQYOCRGUESEXFGOWLKWHEZJQOLMEIXRRDMOKCJZLYXECDOYNRDFISVTWCTDJARYYGTVKKVNRAJAQGUCHVMXPVYRCDOBIBWEFEZBKKLJBMHSQMUNGXYJLLCOSJVIHWIFDZXEQOPLNGXUKZVDM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 51741U;
    msg.info.assign("FHWKIGCGCSDCEOLDRLATIQCMGDNELLVNFAJMICTQQIJOOARORVXQPPKYSUTIPVPUGKOVCJMBFFZQVXAAKHZBYYMUGXINTILTWRHSSXTWAOETJJOFCPWDIBMUSSCENGGHSBKPNUBNPGJBWHUWFOSJXIGZFFYPYDAEBZSZHRXBRDNNJMTQEWYLZFOQSXBOHERWZTRHKCXUDEMHZZFUGYUQEHLUZKMYWPXYQMRMLKLADBLV");

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
    msg.setTimeStamp(0.829200302097);
    msg.setSource(4699U);
    msg.setSourceEntity(2U);
    msg.setDestination(35052U);
    msg.setDestinationEntity(178U);
    msg.type = 140U;
    msg.request_id = 45961U;
    msg.command = 210U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 17059U;
    tmp_msg_0.lat = 0.376740627399;
    tmp_msg_0.lon = 0.999593352016;
    tmp_msg_0.z = 0.313854217233;
    tmp_msg_0.z_units = 72U;
    tmp_msg_0.speed = 0.579555543531;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.bearing = 0.154936213655;
    tmp_msg_0.cross_angle = 0.543963692075;
    tmp_msg_0.width = 0.86329881193;
    tmp_msg_0.length = 0.797099966873;
    tmp_msg_0.hstep = 0.888160582189;
    tmp_msg_0.coff = 51U;
    tmp_msg_0.alternation = 61U;
    tmp_msg_0.flags = 3U;
    tmp_msg_0.custom.assign("VSYOFORNUZPWNFFHKHDGCGRONGDCNUJJNZPXMXCVCHNHXWODSAYUGWIZEBJWGQZQJFBFHFQJOIKSKREHFPAYGLDCVSQGZSZXVPIEXZULVHQBQUCOTRXTBZLVUUPVEDTFKCSMNIRIKMLLDJMAJU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28630U;
    msg.info.assign("IBUKFOZCEWPGGCZIKIMTVTHNBKGCFNQRZDQWIABFLMFSPZMHNTLDXQOBVUYQHWXJEFGWLMHDRSYYUWUIOHYUOPZROREHIWLPBZPVFWHOIIYMBRWMPQXGODWKYMAGWERUOEKCZJJUNEDOZDXBJGAJTJXDQFASKFJRAXEEYCGTUEVOUVVPLSDNKURSHSYAACDHEKPNZTPMSAVPALBYBJGQXTSINM");

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
    msg.setTimeStamp(0.407807064782);
    msg.setSource(37116U);
    msg.setSourceEntity(128U);
    msg.setDestination(12978U);
    msg.setDestinationEntity(229U);
    msg.type = 251U;
    msg.request_id = 16708U;
    msg.command = 14U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 52692U;
    tmp_msg_0.lat = 0.623616804549;
    tmp_msg_0.lon = 0.713370551625;
    tmp_msg_0.z = 0.616295977904;
    tmp_msg_0.z_units = 100U;
    tmp_msg_0.duration = 924U;
    tmp_msg_0.speed = 0.69024094092;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.type = 228U;
    tmp_msg_0.radius = 0.694508490943;
    tmp_msg_0.length = 0.670761115594;
    tmp_msg_0.bearing = 0.131358436097;
    tmp_msg_0.direction = 120U;
    tmp_msg_0.custom.assign("UYVEWDARNWNSQTTPOMTMYMRKBBEHNELXIDIUHNVIAJQGCWOOXTXUDRQPWELDTFQBLLOMLWZYCCVJWNICMZDVJMSIUQNROTJGMHUGKBVFQHPSDULHGTYKJSEQAMYWUYABUZZDPFXSOULNCYIYKXJHKBJBWDQFHOZXVDAURCRSKNKCGOZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27038U;
    msg.info.assign("BGJHOGTNFYVBAIEUZIPVHMWOUNHKQSOKRQAMQPTEHWZIWHOGQLXWMXLUNQLDSMZNBKPRAHBDGWVJMCXRYWLSPFUCMEUYXUCQDAFPZJXJCEIBDFGPSPESRLKGXL");

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
    msg.setTimeStamp(0.700320901662);
    msg.setSource(2393U);
    msg.setSourceEntity(254U);
    msg.setDestination(17424U);
    msg.setDestinationEntity(25U);
    msg.command = 115U;
    msg.entities.assign("NVPQCYCCGJHFZQJAKIOACUVVAIOWNPXCPDEAXNEKVYSFKRQVMEQUZZOWBBQOLXKRXXOWTMVIFVHHGNWFTJAISASBISIUUDOBKFQPPMNLCNHJXJBLKPJISEY");

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
    msg.setTimeStamp(0.994011642086);
    msg.setSource(13808U);
    msg.setSourceEntity(99U);
    msg.setDestination(54916U);
    msg.setDestinationEntity(211U);
    msg.command = 9U;
    msg.entities.assign("JBRYPUKPQBFVEKQZHRUSUEEBNMONSCJGOXWSLLNBLEYMXOPIZYWZJJITWGAKEAYMFCIYVTITNBIOUGMBNUYODJBRKTCJPPAHDQPAJUCAHEYSDFSMETYGSQNKWTMWOHLQXMRRCITVFWAIETNDDXFQPQGHZKFLWOVVWGMCHLUXATAJZWXSDGBRHODZVPOMCHELCRILBLALZNYSADVIYZKUCG");

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
    msg.setTimeStamp(0.625654444488);
    msg.setSource(58880U);
    msg.setSourceEntity(56U);
    msg.setDestination(63890U);
    msg.setDestinationEntity(132U);
    msg.command = 49U;
    msg.entities.assign("RGRQBUCXFNDNBEPXZUTNTVVXICSJJMDGHVYSHKILTJVYZYZJZXZHWXMWEFWWREUKDFJMFEKDXENVPBCAXIUMPPSLODSCYSGTPQATQLQZNCDGOTAUUKHMHBVBZNHJFAJAFXRIGUPLMTZGVQUIEYKJIITRMOTEEDLWORNRMKQOYWPUYSWCCIOEOBPBARQFYUNFINFOWSKXQRFDGCLDAOQVDPSMLBWZRQHCTYBLVOALHSBPCAKMJYWLG");

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
    msg.setTimeStamp(0.356454728663);
    msg.setSource(28519U);
    msg.setSourceEntity(109U);
    msg.setDestination(60704U);
    msg.setDestinationEntity(168U);
    msg.mcount = 190U;
    msg.mnames.assign("UGACCWTKJEYSEVLYAQOEMHOIPTCLSMOQGLUDWSYBDJCMFYBXQNOYLOOONEHIQDRIQWBLZICJPJRTBWBVNSZINWREGPOOZILZWSCGRTZSPYYXPEVIUXFMQFYGEMHNYDPDMKTEMDSGJNMFIUXKGZWQTNHHWGVFJNALEVBHVULDUTVXRMFACTOAYTBHVWEIKPLSRQHRKRXMSAUDJKXPVKHAXKCFZVXPXFUQJTHGBNNBJBDZJKLD");
    msg.ecount = 113U;
    msg.enames.assign("IWYNAOQKIKFOWJLPDHPJUQHWQASQZIBTHYXNBTYUWBFHHTERTDWBQMCURGARKBSSYOSNVDXOFCMAUESXXZRULIZWXWUCYCQVEJHRTGORJGZSALAVICTZLDZUMXPDLFJOGTBYLGVTAGPNXXFPRDMPKPMFVPQBWNDFUFYXJJDYKN");
    msg.ccount = 46U;
    msg.cnames.assign("PONDJWYXYDYCVMKZTEUGMWJZRSOENKRLCIRRZOBKHIXTCGWQYWSMZDCJQWRIICZGFOJUFEAVEVVBXXZYWXFCNYDJTIKSLOLMTNVAUEMXHDCPSQLAKSURHFHWGUNEYUOZPKTTGPHFTOEJNKUXHNJPBCJXUPGYRILAZBAELNWGUBQBJOKCRPFDBHMIWCTPHDMFAAHLMLSJXVIZQARYKKQDYMMZVDAOEQIUSL");
    msg.last_error.assign("QSIGHZSMIYUYHVDKLKFJJFXBCECORVIBTHQAKBNJLLWTLXUJZQJSDKYRMLBCOJYGXSGTAHWITKDHELADQTAMBDUPONVYNMFQGSSGPFCRZFXZZARPHILDXEKTVEBPPANUWMBCFMNOEMMQIDJA");
    msg.last_error_time = 0.196897996489;

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
    msg.setTimeStamp(0.939933056013);
    msg.setSource(36419U);
    msg.setSourceEntity(177U);
    msg.setDestination(53900U);
    msg.setDestinationEntity(24U);
    msg.mcount = 117U;
    msg.mnames.assign("PSDOKTNOZNFCKURVWVPMCZYWJDVYOMBXTRJLKGPVHVRACUJJOLJIFVINYHOEVRNAKXJZDPAHWIKNTBKSTJLBBFRFYSAPBFFLZRODDRPXATIOSOKSGGQENETZHVFGIEMXLBQCFBNBQIMWTGBKXHMYUMYANHMGENJZIXDSEIHCFTSANJIL");
    msg.ecount = 234U;
    msg.enames.assign("IGLFCIHQJLHRERROCJSOQUIDTGBYQRZGEZECNWKEJAJQRPMCNZXSKBVDXGMQTLUIHXUTYWVOGFFBNUWTPYLAASQXIGFXLXBZOKCJPJSLZVVYESXNCH");
    msg.ccount = 115U;
    msg.cnames.assign("JIMJKPTIIYMKPSVWHXNSPCIK");
    msg.last_error.assign("XEJYMMYEGLJZSJNIYBJPJTFXMXFEPBXSRGPDVMNWNFBPITZEKSARCRCXOVAUCMWDQPUAAXQVNJGSIQHCHHCSRTQDIBENCAUIRWUIMCDOSDSRVQGMMKYHOMWANDDBUQBFVJUHLYMIJWHTOOKYKTGCAHJWLKRXGNVVNOOKDZUAZQPNZWXDZLLNTBOPYREBFHLWEKLCZDYGHLUUKGUEOYZSPE");
    msg.last_error_time = 0.00364205458922;

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
    msg.setTimeStamp(0.105199425623);
    msg.setSource(17149U);
    msg.setSourceEntity(252U);
    msg.setDestination(29916U);
    msg.setDestinationEntity(69U);
    msg.mcount = 57U;
    msg.mnames.assign("ZPAUSYQLMNHKIOGXISZUUVPNZETIFBGRUAOHLEJOMQUHYFZKGSXJWSAKERXIYQMIWQOYVTYVNKDEQXAWTSVYRJUJFMAJCUNLACVUAWNWCDSMZYRBJLIGKPLLWGGHBCBVENXMDHYRUTLRJZQDWBXIDJBETPHTUVDLQSJMHCORFCJIKQTRGTZLFETKSCGXDZPBWOFKYYABZOADVPKVARZCCFGKGPIWODQNFMWSX");
    msg.ecount = 139U;
    msg.enames.assign("BYTABEROFPZRNSKZAFQYUBQVHDGIZYBCGOYUMCUHJTOPGAYWEZGAVWNSIPMQVHKEYGBSSISWLLCGCNAKRLVXMIPBLKEVKXGYMPRJBEOUAZOIZRRLSOJDMQCWSXNFOHDYJUDHSTRPWIQQWTKZNVDRWKWALTNUCYPVTZIJJVFKDZORXUJSKFCNNLQUQMNRGEJHUANQE");
    msg.ccount = 2U;
    msg.cnames.assign("ISIXVGWSGGTVQPXCJMTTEDDZNTOJCYXZUOZRKJLCMYFDANPAWJUZVCAZDOBCXSJJYKWYVMFZIAPBTVBFTXQVJWFNCGOUYQHRHYHBALNFTBNOEHDCHYIUOHJHEJGUKWLWGSHZPYXOCAQLQCQFWRWERNSFLGEGDBXAWUZLIRQBQFNPUVTKPMLMIBZIUXPLYVMOKMITSKANXDXUESDMVUQVASGRFE");
    msg.last_error.assign("OIEHUDBQPVLWXNGQGLAHTOFEAMSHQKZBBCFMFJBAVMMTWEUKOGRXPDQZCIKJLPETARTWWYRKRPJXGKDWFYPQMVYFUIRKHELUNLASAZCJZTQFAWMLFWDFJKOXFUTCWEQCZXSUBSISDHVHBICLAYOLRMXXMISEGYYON");
    msg.last_error_time = 0.265563178812;

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
    msg.setTimeStamp(0.642878640765);
    msg.setSource(19791U);
    msg.setSourceEntity(147U);
    msg.setDestination(55166U);
    msg.setDestinationEntity(174U);
    msg.mask = 7U;
    msg.max_depth = 0.0539165085324;
    msg.min_altitude = 0.766046929516;
    msg.max_altitude = 0.931860669977;
    msg.min_speed = 0.320930847592;
    msg.max_speed = 0.577413482495;
    msg.max_vrate = 0.620518299857;
    msg.lat = 0.460412992685;
    msg.lon = 0.445860296513;
    msg.orientation = 0.471759304315;
    msg.width = 0.325810723899;
    msg.length = 0.880873641237;

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
    msg.setTimeStamp(0.905157674712);
    msg.setSource(47599U);
    msg.setSourceEntity(8U);
    msg.setDestination(4606U);
    msg.setDestinationEntity(44U);
    msg.mask = 64U;
    msg.max_depth = 0.33301531731;
    msg.min_altitude = 0.95695141338;
    msg.max_altitude = 0.0994058422217;
    msg.min_speed = 0.793940908546;
    msg.max_speed = 0.0440405096722;
    msg.max_vrate = 0.627355485437;
    msg.lat = 0.0273462281061;
    msg.lon = 0.367064321261;
    msg.orientation = 0.301282867316;
    msg.width = 0.205429681657;
    msg.length = 0.844721379471;

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
    msg.setTimeStamp(0.997120001175);
    msg.setSource(22733U);
    msg.setSourceEntity(241U);
    msg.setDestination(60790U);
    msg.setDestinationEntity(226U);
    msg.mask = 177U;
    msg.max_depth = 0.193965185199;
    msg.min_altitude = 0.0523731261534;
    msg.max_altitude = 0.240841378297;
    msg.min_speed = 0.16134414953;
    msg.max_speed = 0.849842756497;
    msg.max_vrate = 0.553462863293;
    msg.lat = 0.217846079156;
    msg.lon = 0.28906522061;
    msg.orientation = 0.389711499207;
    msg.width = 0.883808379692;
    msg.length = 0.380520770502;

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
    msg.setTimeStamp(0.313563462794);
    msg.setSource(22726U);
    msg.setSourceEntity(130U);
    msg.setDestination(35422U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.0833156678356);
    msg.setSource(56742U);
    msg.setSourceEntity(204U);
    msg.setDestination(55953U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.216589478411);
    msg.setSource(9687U);
    msg.setSourceEntity(187U);
    msg.setDestination(63902U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.974930509772);
    msg.setSource(8569U);
    msg.setSourceEntity(104U);
    msg.setDestination(55477U);
    msg.setDestinationEntity(129U);
    msg.duration = 18091U;

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
    msg.setTimeStamp(0.568601501682);
    msg.setSource(22303U);
    msg.setSourceEntity(237U);
    msg.setDestination(39401U);
    msg.setDestinationEntity(247U);
    msg.duration = 19055U;

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
    msg.setTimeStamp(0.643594761734);
    msg.setSource(11320U);
    msg.setSourceEntity(206U);
    msg.setDestination(18151U);
    msg.setDestinationEntity(27U);
    msg.duration = 21501U;

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
    msg.setTimeStamp(0.282255056316);
    msg.setSource(36612U);
    msg.setSourceEntity(53U);
    msg.setDestination(39046U);
    msg.setDestinationEntity(176U);
    msg.enable = 65U;
    msg.mask = 4084891897U;
    msg.scope_ref = 3253969441U;

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
    msg.setTimeStamp(0.274671948347);
    msg.setSource(1037U);
    msg.setSourceEntity(223U);
    msg.setDestination(53406U);
    msg.setDestinationEntity(22U);
    msg.enable = 238U;
    msg.mask = 1413256903U;
    msg.scope_ref = 3451426651U;

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
    msg.setTimeStamp(0.797211529396);
    msg.setSource(306U);
    msg.setSourceEntity(176U);
    msg.setDestination(40775U);
    msg.setDestinationEntity(251U);
    msg.enable = 217U;
    msg.mask = 3218134316U;
    msg.scope_ref = 598735194U;

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
    msg.setTimeStamp(0.305539385859);
    msg.setSource(43703U);
    msg.setSourceEntity(111U);
    msg.setDestination(45151U);
    msg.setDestinationEntity(104U);
    msg.medium = 146U;

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
    msg.setTimeStamp(0.330162506276);
    msg.setSource(53981U);
    msg.setSourceEntity(112U);
    msg.setDestination(52524U);
    msg.setDestinationEntity(188U);
    msg.medium = 196U;

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
    msg.setTimeStamp(0.893728700989);
    msg.setSource(36931U);
    msg.setSourceEntity(23U);
    msg.setDestination(6935U);
    msg.setDestinationEntity(75U);
    msg.medium = 106U;

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
    msg.setTimeStamp(0.575111064244);
    msg.setSource(21525U);
    msg.setSourceEntity(174U);
    msg.setDestination(54647U);
    msg.setDestinationEntity(16U);
    msg.value = 0.163587925103;
    msg.type = 125U;

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
    msg.setTimeStamp(0.718289387745);
    msg.setSource(37506U);
    msg.setSourceEntity(17U);
    msg.setDestination(52956U);
    msg.setDestinationEntity(147U);
    msg.value = 0.630989125727;
    msg.type = 191U;

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
    msg.setTimeStamp(0.715627719687);
    msg.setSource(1426U);
    msg.setSourceEntity(146U);
    msg.setDestination(8230U);
    msg.setDestinationEntity(74U);
    msg.value = 0.106021153402;
    msg.type = 189U;

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
    msg.setTimeStamp(0.619554169065);
    msg.setSource(42430U);
    msg.setSourceEntity(253U);
    msg.setDestination(54696U);
    msg.setDestinationEntity(122U);
    msg.possimerr = 0.655216977043;
    msg.converg = 0.996712890302;
    msg.turbulence = 0.614234390529;
    msg.possimmon = 103U;
    msg.commmon = 222U;
    msg.convergmon = 136U;

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
    msg.setTimeStamp(0.10922394242);
    msg.setSource(64896U);
    msg.setSourceEntity(157U);
    msg.setDestination(64463U);
    msg.setDestinationEntity(161U);
    msg.possimerr = 0.984872678589;
    msg.converg = 0.358626397602;
    msg.turbulence = 0.308339585909;
    msg.possimmon = 212U;
    msg.commmon = 197U;
    msg.convergmon = 101U;

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
    msg.setTimeStamp(0.389744268471);
    msg.setSource(23511U);
    msg.setSourceEntity(49U);
    msg.setDestination(52172U);
    msg.setDestinationEntity(45U);
    msg.possimerr = 0.523447647685;
    msg.converg = 0.462775152411;
    msg.turbulence = 0.493320995101;
    msg.possimmon = 142U;
    msg.commmon = 49U;
    msg.convergmon = 213U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.148179790356);
    msg.setSource(25032U);
    msg.setSourceEntity(76U);
    msg.setDestination(29536U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.860526978336);
    msg.setSource(10651U);
    msg.setSourceEntity(113U);
    msg.setDestination(38696U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.774954962247);
    msg.setSource(61513U);
    msg.setSourceEntity(225U);
    msg.setDestination(44341U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.906899915824);
    msg.setSource(13803U);
    msg.setSourceEntity(156U);
    msg.setDestination(18714U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("HXGPIJAKJAFMUMSFUXCUYXJDSFCVEHKDWRFQAUOIMMDCKBFBPBRZ");
    msg.description.assign("TMHZXKWKGRXVZKAHLMQWOOZOWBXRALSHKOAKQVFHYRKLUFXMEHSJOQSLRPXIUISDERPKQYJUBNCSJXIJCTKTHBQERMABLJSPHJBQGIOTZKQHPZVENOJPMAWODYDMPSNFFUDRYRYSEGGMWLLJFGBNYAYGEFQZUCUDINYFCWMJBDDZVLWADOCPQXFXBVTPEZJILSENDLFWANVIBXZF");
    msg.vnamespace.assign("HYXLXEMZWJEYSECPSCOZXWGKBIBPTQRTYFNBDREPGHGIALPYCIFBDXKEMRQKKGAJGNASCFZMUHQOEEDPESXJDVVNIZHWUOXUMCCDUJFWFSFIAIANAXKJILWKFGTWYBJKXSQROLKMVWKANYUORWJZGHJSNNZRHTI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("YTERAADKZNVLEEIUFBNHHHGYKZICCPXXHJRFUTSQONNEJAFANTTJDUHCVDGCINGEMGFGIKPATWAUVEQILNPBWAYSPXSLHQELSOPVGMLOGQTTVWNUBOOVOMDHKXZKLIMYXNUPJSBWYUNIYHVKYCTXRAKQODVFPVZDFRHQIZWGAJBTKKSFBVDZWSRRCWWQSOYCQPUJJUCMRDPUCSKOZMXJRGRFWEEGHXZLBYILQIOCBMQMTRLFADPMYLZ");
    tmp_msg_0.value.assign("XHGOKSZQDUYPBGKFVJFMRKOCRRGSEBZWLYHPAJKKUDSUQHGWSNFFWRQIGPDPGAAZMWTFDNCEAZTQAYXNDTJJRJYQEVKUPUFWSRLHJLOCCOLSAGIBVMVQIAIILKXSICUBTNEJQDKGXYQCYOOJDPYNLMVXTHHHZAERBDVRKDNGYNFEWXNEMIGHLOZFKTV");
    tmp_msg_0.type = 129U;
    tmp_msg_0.access = 19U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IKFMPCVCZYCREVCRGJHTOHSMIZNCQLUDOAFKKXTERSNR");
    IMC::Depth tmp_msg_1;
    tmp_msg_1.value = 0.0875543141643;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.645067761111);
    msg.setSource(29267U);
    msg.setSourceEntity(113U);
    msg.setDestination(33043U);
    msg.setDestinationEntity(99U);
    msg.plan_id.assign("QSGTKKZIYPGXHDGAXOOGLNRTTBJSTHUKELFMCCTRPDVWVBAJEQYPJLXYWHBIQHNPFFZMNANEGLBCRRMVLTVSCRLIWCHOFGYXMKBWVQAHZYQKRFPISMEDQVIKGNXNIFAAXLZQGJHIECROMDTQBEDTDUBWAWCSZTWFVOEBZIREWFDPOFDODMJJOXYYRHOUUYMAEIMGXRYZKUJKHSUBU");
    msg.description.assign("MDDVVVMCKOZGJARJMRDTVXCIXJWMVJWSPONWKBVEFAYUNQTPWVJBQALBPPEPTMKSXFRBCMEFUTWXBNKPFQRDVEJGKUIOXZLZAOLHTKPQCHAVCYUUSABAREUDQGRSVTDWHEALCQHGDDUBFGUHGNPZQLSZNLZUOIYSEMYSMKOWWDJKFYFTZZALURHLCQMGQSTYG");
    msg.vnamespace.assign("YFJCBKVQKBLHLOYPQVWALENULGEIPZYRFXTWSKUIYYQQCGWMSLAVTEVHHSFKOGJAJGPLQZSEBBWCPMSQXJOLNNLQEUDHNHSXCPYIYBATYRMURVFXFINUUVYGEIVOEOTNMKJVDULZNWEATVSFTAZIMFQCWXXPIJFKWDCTOHPGRAHBDXPQKRAWKBSGTYCZTRNNRKCMZRTGGFUHJDRGMQDABCWUJDHMVSZEAMONOSXOZMXBZZJOEFPIJRBKDDUL");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FDVIMGBNXLRPDCHNZPUHHJXGRAYBUSEZVOTYXEMDSOEIHYMIKVUMOTEWARMDJJJUWJWRBQLKWDFXRTUAZOSREMICUBIABFPQSBGSPILZYYHOCADAPUPCYKFQTHCJPTNODJLNFOBZWNUAWPZCHJZXGERKKBNVERDZUUQGQLKLXGLMIZNKVGJGNFFVOYPINSQISWBHKSTXODHMVLQDXYGGIOPMEQJBLCQZ");
    tmp_msg_0.value.assign("VILQIQDSIP");
    tmp_msg_0.type = 65U;
    tmp_msg_0.access = 36U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QCKEKRUMOLDFXZMYLBVUOOTPVNDVVJSQRHDNHOASUMJGFBNOEVCWNMRGTAKNCZXEBIBHTIZRKEWJQAOHJTUDCSHGGJQKLPEMDIXTPMFKPFWZESJHFXRUCXSITYCTZQZDWRJZPMYHLUDHOLCOGEKYXBWWXFNVYOTSGPZYBXVFCSIXCBNQHKVSKJRRQIB");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("SWYMAVHPPRPQDRSTTDYGTXLYCRVTXUECXQDJQAOXJNFUXAOIAIELNZDFQCLSDNDIWPJEWPYSGNZROEXCLFRCYTPNWSHBNHBZERVWGHTPGJBHOUFMZSPMYLBMBC");
    tmp_msg_1.dest_man.assign("YVCOENCPZNAMGUDXVXPGYSHHUPOEISMPJKDKHPHUONKRDOUILYBQVWEEWIQTCXFLHUSZYZBHBQXYWVZEIJPGJDANZCEILXBRJFGXMJNKGXUTLAFEWIKDZFRMVXJMNPWUAJKDBKQTFKBRWHAOHMWFSNTRVDSYHPLLCRIFOTTREKAOZRCQVJBMDLQZLJCWTOAFGYNLNV");
    tmp_msg_1.conditions.assign("YJDPVBGFDRUPLHZLCXNESYPAXZYLKEMQFTSQZRBIPPRNEILYAMHBSGVNFKKBHIQEIFKQNLDJERWXBENHOAVFRRGFHBCGOAQSJASVZTAUJTJMMZHOYXDUDCFXFMMLKGCLYOFBCCGVPGWJCXJSEGVHMWTBDZNAWHLIOQXTCWKXOMZ");
    IMC::PlanVariable tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("BVUPOECEVHLTSMPHKGNVJYKTHHIENDTELSROMVWRYPLOMQWGJJCJOVXIZPKCBJHQQFCYBLZCGETXGASYJFPKXAVXNDQLAOIBRRDCVNDAIWAIOMZIKMTEOEFSNHDMYBRGDHSRZEYNZUJPFUVLXVIKZGJIAWBWINRJQJALMBDCBFNPD");
    tmp_tmp_msg_1_0.value.assign("UMQNZAKNTLCBDROUBKYOJORFKFTPEIXVSSOUMSJFGNFRJHCLXVNZWSKWNHEGQTCZURXXESMFCWZDWVBATWUJSEVRLCZUMDSPRUQPJYHCGXXVLJHAWKGOEDPYGZJBUCVFEADXVLGWIZPTAGCPIXZYIPUZJMRYOHQMZMKBODDBMASNHBGULNHMQEWDNGWXPEIILACSHHBRTASTTKCTWPMFLLFIYKTNFQVOOQDH");
    tmp_tmp_msg_1_0.type = 250U;
    tmp_tmp_msg_1_0.access = 214U;
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
    msg.setTimeStamp(0.776519711098);
    msg.setSource(25873U);
    msg.setSourceEntity(88U);
    msg.setDestination(54738U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("WOTFYZEUDQGFDXKJUELUBFEHSNPAKFEMQONXEDVBJZUKOCALORWQTFPPOKHPVFWSDQIZRZMDTLLTNAPIHBAIDNOCGVHJSCBRCZGYKAGEQMWSBZEAPTYQRXURCFUOQXGVNTHWFKRBXNNQVUPTWYIGYGLISAAJNYTZLDWHNSMSGFMGULOORCTAJRXEMYPVVIRBUELMHUCWEQSKXZYJDIJMBJCCRLIQTFGAXWMXBHDIYZMVCVJSYIKLOPWH");
    msg.description.assign("GUPVDOYRTPLNIMCSAUNLYRLEDEKLYENZAMXQRTCGVMDHOVBRKBSALSVNQJEIWSBPOWZCVRDRBMTREFWCXKDMFQBHXAZINZGJGFFIWREGFUCCMUAQKVYUUJTTBFFRUDHLNEXJWCXFKBQYZFXQINCLOLAPPTILDMVHXONXQTVBBLH");
    msg.vnamespace.assign("YOVMFAUFIPELKGZEWZFKRIOZNAINTIBMFRBGFQXXSYROBACAVKVGDDCGAETWR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IYAQNERSARKYXRDBGJIWGFOXOIKNWWJHHFUQZVEMFYTFBSHAKDACVSWVWWZPHVZYGBPSXTQBLEZPDUXJGIXPEYKUVLGOBOUJRBXTRKZCEGU");
    tmp_msg_0.value.assign("XBMDKUWDGMEVKAISPPACWUYPOWSBNKTLHLVDDWCPAEXNGOHCTRDWQVFNKFFIMZYNIZTASRMMAOUGCDPVAEHKHLVSCTEJCPCWDGQYQKBGUZMJNPOVRWFDNUKFVSNIULFJRZKBJZLFZT");
    tmp_msg_0.type = 29U;
    tmp_msg_0.access = 212U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PFMRXZNZYAKVZRNMPZWSCCHALNBZCTDDBVYLYAYVOVTTCWSATOEJEPQTJFANEUCGPGHDFGCLBEBAUZJETMBZYCSPKKQOWWHDLHUKPURRSTKLXITGQJWIXJCKXDBMHQGQVIAQUKDDRGOOIEPXRWBFQACVSLXSPUHSIQYHJMLWJETYKIFNOUGMSGNQNIDWZRMLEOIVEXFSBKCIBTMFUMY");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("JHZCQVLLIYFQHAME");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 4431U;
    tmp_tmp_msg_1_0.control_ent = 246U;
    tmp_tmp_msg_1_0.timeout = 0.820574821451;
    tmp_tmp_msg_1_0.loiter_radius = 0.00933658993796;
    tmp_tmp_msg_1_0.altitude_interval = 0.519216620402;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("EUCMXTRKSGBWCUZZKVVQHXOAZEJVITORM");
    tmp_msg_2.dest_man.assign("HXORQCBTASWELEVZGPIVYMUXAAHCATLQDFTNLMDNFLNNXQTPSLSRCQZDHEUASQCODNZQCBXAEBFUPRIEHHJ");
    tmp_msg_2.conditions.assign("FPCLWXOQEOOGYDRHDSLZXUKIQNIBBMGPMCPJFIJHYKRKYSZHRZDORFKLHCMSZDXUPSWSZZQUNPOGDGFJHVCXLLIVVJWAMEYQZLUAKNI");
    IMC::NavigationUncertainty tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.x = 0.508551379547;
    tmp_tmp_msg_2_0.y = 0.486013744972;
    tmp_tmp_msg_2_0.z = 0.0151950000952;
    tmp_tmp_msg_2_0.phi = 0.183643120694;
    tmp_tmp_msg_2_0.theta = 0.902336139535;
    tmp_tmp_msg_2_0.psi = 0.0156187565243;
    tmp_tmp_msg_2_0.p = 0.712490518008;
    tmp_tmp_msg_2_0.q = 0.436266066473;
    tmp_tmp_msg_2_0.r = 0.0322739583243;
    tmp_tmp_msg_2_0.u = 0.627739466453;
    tmp_tmp_msg_2_0.v = 0.124427166303;
    tmp_tmp_msg_2_0.w = 0.0574963184969;
    tmp_tmp_msg_2_0.bias_psi = 0.10358357712;
    tmp_tmp_msg_2_0.bias_r = 0.915713248271;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::WindSpeed tmp_msg_3;
    tmp_msg_3.direction = 0.328449720224;
    tmp_msg_3.speed = 0.994857406989;
    tmp_msg_3.turbulence = 0.00305424454449;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::DesiredZ tmp_msg_4;
    tmp_msg_4.value = 0.800267039984;
    tmp_msg_4.z_units = 188U;
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
    msg.setTimeStamp(0.572634942621);
    msg.setSource(23617U);
    msg.setSourceEntity(183U);
    msg.setDestination(15214U);
    msg.setDestinationEntity(4U);
    msg.maneuver_id.assign("YRIFMCQYLPUZCFXLOXSDMJDXGJKMSULAAFWJIHSANVCWEEEITLZOIPUEUXNPDOAERTMJQ");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 53923U;
    tmp_msg_0.lat = 0.548560757853;
    tmp_msg_0.lon = 0.763868813619;
    tmp_msg_0.z = 0.836854914159;
    tmp_msg_0.z_units = 66U;
    tmp_msg_0.speed = 0.184846614932;
    tmp_msg_0.speed_units = 37U;
    tmp_msg_0.roll = 0.63353345967;
    tmp_msg_0.pitch = 0.0738682898698;
    tmp_msg_0.yaw = 0.834975022;
    tmp_msg_0.custom.assign("JADPRTORTVPBPCFHFRUIPMWCXYWFAPMYAGEAHEGDNUKMXXVSZGWWUEFGUTTFXZNGCZUANONJBDOYHDGWRTCUE");
    msg.data.set(tmp_msg_0);
    IMC::AcousticRange tmp_msg_1;
    tmp_msg_1.address = 244U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ManeuverControlState tmp_msg_2;
    tmp_msg_2.state = 82U;
    tmp_msg_2.eta = 46548U;
    tmp_msg_2.info.assign("ZFWKXCTRIOFXBRCHINTUPNQXRJCDTRVJVYAMUHBGFHAYMPSSCKLBVAWDXUFZDMPHAVJIPWAOHSDHJQGHCKMR");
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
    msg.setTimeStamp(0.642832800371);
    msg.setSource(48860U);
    msg.setSourceEntity(24U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(253U);
    msg.maneuver_id.assign("CHRWNLGWSPPJKVNPMJGEUZIUMFQVLSQDIRWAKMNBDFNLEATTUKJWUESZVPHLXDHQOVLWYBYRQALHRRWQDFIOYUJQZEGHODWRBLJXTYINLITAQEOQFXVAEOKRNTIXDRICYOHJTYT");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.391856014;
    tmp_tmp_msg_0_0.speed_units = 18U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 33930U;
    tmp_msg_0.custom.assign("PEYJBMAKDEPMKLMZPSWTGMHVZOGCQETWDDBNSFUVAOWSULZNJRACVAIKHIDKNILCDRZHDNVQFVBIMRIDFFAEGQYZCLSTOOGODHTPYWXFDUBYRNBEGSSOQJBQXYCQXAQFNAMIUFIMCGLGVYDYSZSBPXLJLHRGNVQRYKPNFMECIGKUXXZUVCZWUCPTURPJFTRHNFURNXTJCJKQEEEJXYIWOPMKX");
    msg.data.set(tmp_msg_0);
    IMC::VehicleCommand tmp_msg_1;
    tmp_msg_1.type = 56U;
    tmp_msg_1.request_id = 41432U;
    tmp_msg_1.command = 51U;
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.548964267723;
    tmp_tmp_msg_1_0.lon = 0.428441153129;
    tmp_tmp_msg_1_0.z = 0.48387067454;
    tmp_tmp_msg_1_0.z_units = 65U;
    tmp_tmp_msg_1_0.speed = 0.212919131577;
    tmp_tmp_msg_1_0.speed_units = 246U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.0262095586698;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.0992128010151;
    tmp_tmp_msg_1_0.polygon.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("MLNIAWVOEDJIUGLTWZPWZZSBODDRDFSQRBOQPVILHNTITOJTKBUOAEDKYVPZIGUSPGLAGCMVJDGRJTCFWYUWQZWOQGDBMCWGRKUFMQPJHAXIVRMUOTENBCVLAVJMSKQSBPQCZJEBHKMYLHYCGVXFFIKXZQAMPCTMCQFHCZNBXWOXCXKHLUFXSHSEARWNAFVTYGPRYEJPUZEGKEEYJSXSXLYYQIRNPDMKRJ");
    tmp_msg_1.maneuver.set(tmp_tmp_msg_1_0);
    tmp_msg_1.calib_time = 23226U;
    tmp_msg_1.info.assign("YSIOGXQVOVZMJXTVHKYGXCEOXAJMRLLUGFOXRPYDLCOBRWCYJFDHYIPLYSVWSIUGEKJDWMILMCVTPJXAGCQJDLIZNHXDTBBIZKZGUBAFETNWBEYHQQRKJPRPBSGUYZEQFMNQWIKJVNXABZBFANLRULSVEHDRXEINFOSRQTCBKZEC");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.654757332912);
    msg.setSource(2372U);
    msg.setSourceEntity(212U);
    msg.setDestination(8746U);
    msg.setDestinationEntity(135U);
    msg.maneuver_id.assign("DNMJCFHCPGAIHNALCYUBVHBNXHFQFTDYQZCZMQIZUOFGVGWYTFFHAMLQFSMXNSMDXDWCKUXTVCEWLWGVOKIOBRQTCSPSSKYJUQDPFTONJZJPAALVWSILOQMTOUQBJZRBMXYHQHMEZUOUKVXFKUKZOPEJURT");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 29144U;
    tmp_msg_0.lat = 0.0159321311074;
    tmp_msg_0.lon = 0.130438086125;
    tmp_msg_0.z = 0.046778194038;
    tmp_msg_0.z_units = 138U;
    tmp_msg_0.amplitude = 0.97540067721;
    tmp_msg_0.pitch = 0.502463717358;
    tmp_msg_0.speed = 0.216050178272;
    tmp_msg_0.speed_units = 165U;
    tmp_msg_0.custom.assign("QYHHNWEHDFIOITDQTNGUPAULRMZCTQBVKUYSNUEMIMKWPJJXWNGDYMXQXFOJCYXPVJOLURJGCTXDWZBDVASCGLWSQMTETOKZXYMDGBIZNQFVMOKVJDZKWRWZLAYNHZAKKKPURNDBHMIPSNLJIQAEXWJVEYVGYATBBZCWCUQOEGNMYWRKSHLCJJRAMKSHFCNTREGECRCAYLPLBPZFVOIHITIAFXODUA");
    msg.data.set(tmp_msg_0);
    IMC::DesiredControl tmp_msg_1;
    tmp_msg_1.x = 0.643782232962;
    tmp_msg_1.y = 0.256174205158;
    tmp_msg_1.z = 0.569987302781;
    tmp_msg_1.k = 0.648191569854;
    tmp_msg_1.m = 0.522720991583;
    tmp_msg_1.n = 0.559484290056;
    tmp_msg_1.flags = 179U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EntityParameter tmp_msg_2;
    tmp_msg_2.name.assign("PUODDYUSBLGSRX");
    tmp_msg_2.value.assign("XVNKBWTFMZZFYZLTFGJGUKSFRSVIIONTNEHWSTOABTDRLCRYXDWKMIIPGIJVHSJZFRLWHYYUJCCEPXIRZHZJVLVTHESBCPVOWTX");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.131524903913);
    msg.setSource(15210U);
    msg.setSourceEntity(66U);
    msg.setDestination(21751U);
    msg.setDestinationEntity(183U);
    msg.source_man.assign("MILQOFVPEAMYGEEHCVZUJMQBOQMHWYWUDBCPBWCGNDNQXDZKXRZXKPSZATUOHGJTQYOKSBCHYOFFFLIKDELWRRAREDIFTVCSGHFXAWTL");
    msg.dest_man.assign("RZGMBZVGBBXJQXVSGKUDYUREEYXADEIZGHIQJSKANKFOIKRTXOMUPCQQTOFEAAXGWWNPCGWECODBJTFTUFXHUNHTJPNLFRKIMVNDQOHYVXKTEWERXIQTFNRFGRIKPZLBPOUOBCVUBIBZLQWHFOZAWJWWQMGBUGXJKPNDNMJJKVWY");
    msg.conditions.assign("WUUPEWHYRCPCWOBPETWYHPDUSOAAXMAODILEMXJELGBOUUBRVTRDJVXULBLZTDAFXLOJKFRTYZHZHWNTSQBSIXIIGCRHCLFRYVCFFPMNGVDCHIKYVUOMBGSLGKGVIUVTZVSBZKWRFNASFDDNMYROVFCIXNNHSTCLVLHKT");
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 30512U;
    tmp_msg_0.type = 112U;
    tmp_msg_0.utc_year = 57110U;
    tmp_msg_0.utc_month = 49U;
    tmp_msg_0.utc_day = 169U;
    tmp_msg_0.utc_time = 0.957810614891;
    tmp_msg_0.lat = 0.307478758008;
    tmp_msg_0.lon = 0.29048983019;
    tmp_msg_0.height = 0.27101919457;
    tmp_msg_0.satellites = 98U;
    tmp_msg_0.cog = 0.35042851271;
    tmp_msg_0.sog = 0.419042449826;
    tmp_msg_0.hdop = 0.308627679034;
    tmp_msg_0.vdop = 0.643252470804;
    tmp_msg_0.hacc = 0.0716665229301;
    tmp_msg_0.vacc = 0.480365889953;
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
    msg.setTimeStamp(0.976214006437);
    msg.setSource(46278U);
    msg.setSourceEntity(234U);
    msg.setDestination(17188U);
    msg.setDestinationEntity(155U);
    msg.source_man.assign("UWJMSSKWVAQZC");
    msg.dest_man.assign("PEEYMQWBEKGLPUHNOYODXVTFTJKZPUUFGBZGXYOTDETRYLTQCEAADERCOIQCNHDWSYDUNHIOWXLIVAKD");
    msg.conditions.assign("YHLRKZMJPALOFINNOHRTMNEUQHVDLJILFSPMDGZVWYZHZVKNDPEOMIYCFZZBUETSDCNYBRMGQHPWYXZWOXIUCHCJXLHDIKUQAKYWYEGWZWFVYOQLRCRLJDXSSIIUFTJZDEVSTORUKSCWERDOPXKPJRAAGTLJANNABBFGJTGVCBUFPKTQQIKNTJXSFXGSHIPSYSUMORXABVCXLXVUOEHQKAICGBAKGHZJNTBDW");
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 20U;
    tmp_msg_0.value = 0.841488139097;
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
    msg.setTimeStamp(0.857629516903);
    msg.setSource(41867U);
    msg.setSourceEntity(43U);
    msg.setDestination(38424U);
    msg.setDestinationEntity(67U);
    msg.source_man.assign("BDUXMFRADGJLENURFSLULAQQCPFQJSKJHCDFUXINMWNAQLTDZHTIACWQWYDIIWVIRGQRCLLKXUGOJPOQWCYUEGSGWJLMYRXYNZTVMVTVXPCPBYBVHHDIRNDUJVJLGQIOBMQGFMYEHYZVAAFAMAIPHG");
    msg.dest_man.assign("ODKMRJTELTCJOPSDEDNIWUUIEQPAUBZGXDQNANCALJCJCBHAWVRMYENUSLURRCXZRELMCMKCNKAPOBFKMLIHLJPNPFHTMHURIIKDAIHGUWWKNJFG");
    msg.conditions.assign("NUMMDNXBTQSDGMNDREFWTXJXQXKWLHHVIWJBBZFZKOIZXZMXGVBKTIEQCVZUKTQLVWENYFNIGAOYJKYEVJSGJDGFLHTYMAGPHCALAPAAWNUCXNDSQGDKTYCHLFOPNUROTGAHYSOHRRTEALKCBMZJPTYEKBRQ");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 204U;
    tmp_msg_0.goal_id.assign("ZMBHJFVDDYALZHDJSUREGXXQXHLHNPWRKLLGGFEHICYSZTYKOQNAZUECBGOOJQUTDHPARBAYVKOJDVPGZDSLLXEDJTIQWWNRJTQOWNMQDMEEVCJIRHIIVYWXTMSNEPEHOJINSPWQRGPKBLLKTNOKPQRWUGALKCZZQTAMQJX");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("DWNZZNOFMQJOXMUPRUWSTLMVGAYAMOHTSAUEEFUHBCFJXHCEVGHQFQFGXNPOUKGCTGOUVTDHYIMDLWFZPDWEUQBZMOZXAPZJTFSNYHXZLIBFULYCDTYLKVSKBNHBTLQRWOIEAKHJVQGBNZQVSEMHMOJWSGJRBEDIILPDOVYFPYCTAXAKJSASLRBBRIEAMYNNIRKVEPCSZNLERQKXYTGJDIXHRPLCGRJMIDSVCIJXBRPQWA");
    tmp_tmp_msg_0_0.predicate.assign("TKGNYWBOCZRFAWDOXJDSJRNWENHCKVSBLCGOVIMURVAYKSWKMMEDHCNLJPYAXFOTKY");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.168465454942);
    msg.setSource(23001U);
    msg.setSourceEntity(152U);
    msg.setDestination(4488U);
    msg.setDestinationEntity(0U);
    msg.command = 184U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WOUBOCRBNXGZCYASKZTKTEYLLPDTEIUVZCXQPWVHAYOAFJODNHGXKLDJDEWJKTQUR");
    tmp_msg_0.description.assign("EIGQZENKMQLZUGNCBBOMGDXAHKCFMKZIPYHVNAYMYBZDSKFHTKDBGXVZOJOYRMCLOZGJDKCIHVQTBQGRNUKSMRTWOISWATVRHBJLTCRWBYUFAUWSRAGTPOFLPWWMTNQEYECFWVWPSFNJURRODMYSZNUOXJADIVKWN");
    tmp_msg_0.vnamespace.assign("RJMFLVDLHJMGVJYWOWURSLOYUKPCJKPNEFDNCHZTZSJGOCSRQVTRZCDXENEFARYEBAEXEKBIWMTSPUATAINGXIDDYQBTWOHLBHGBEPWDBNIZYAUA");
    tmp_msg_0.start_man_id.assign("TKGMMTNUQYVRZSODCVFPDM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FATTHGPIRDUEDNSNHEBFAVIPWPKDDXGEURHLQKBJ");
    IMC::Loiter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 19309U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.78784755127;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.306748213433;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0514816626566;
    tmp_tmp_tmp_msg_0_0_0.z_units = 45U;
    tmp_tmp_tmp_msg_0_0_0.duration = 17145U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.257471553342;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 167U;
    tmp_tmp_tmp_msg_0_0_0.type = 250U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.169351215315;
    tmp_tmp_tmp_msg_0_0_0.length = 0.636282040514;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.57371715744;
    tmp_tmp_tmp_msg_0_0_0.direction = 223U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("FKMKYZUSWUKDBOTMZWQAKHMBAIUEZYNDMVFCVZJXOLBRPDTXS");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::ReportedState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.160393731237;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.893590073308;
    tmp_tmp_tmp_msg_0_0_1.depth = 0.200135993928;
    tmp_tmp_tmp_msg_0_0_1.roll = 0.950203122931;
    tmp_tmp_tmp_msg_0_0_1.pitch = 0.194244842983;
    tmp_tmp_tmp_msg_0_0_1.yaw = 0.0454158080044;
    tmp_tmp_tmp_msg_0_0_1.rcp_time = 0.685297706822;
    tmp_tmp_tmp_msg_0_0_1.sid.assign("SVGKIZKCIRMRNVMIQHXEMQRNXLNAFGQAAPEZEDNTDROPNBFKCHIDTFJHQZPIMVJMAFTBQWSJYPWCLPDLNAXEWQLTDXWHFZMLI");
    tmp_tmp_tmp_msg_0_0_1.s_type = 172U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::QueryEntityParameters tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.name.assign("UUYSHTFMIFGFPCOIYFFATEFUJQOSVOVPAIXIWSEIKRPNLLYBJOVCSCPOWOBLTYTGLDDKCFMQKOTRQFSOITJXJEVZJMEGQHPEJQQPZZETNLUGAKRXATIXEYDUIWFDIQXRWALQCNARYGWLSHNKPHTXGDONZQMPBVJHJZBNCCPHGCHBEWBVDUNEKXBENRUHTPLAROWUKYUVRSZCGMKJAJMYNGBYIQWRCGBMSMVVXLSLAZDFHRMY");
    tmp_tmp_tmp_msg_0_0_2.visibility.assign("AUPRLPYJPIOSYPPOSYEGMIYYNQQAWUNOKMSQRRHSOPRZZUELBJLWOBGCHGUFNYFUDQTF");
    tmp_tmp_tmp_msg_0_0_2.scope.assign("RLLAFWXFSUCOCCEQKKIZKUJRTIGIVWLONHYWKSGVBXZZJWGZPBFZSNXGUTQUOVRDXWBUXLXRMSSTFAEOPTZDMNIVKPRLVQVWRYBAVARPQBGACUDXCRFIYETRGMNPGSVMCKEDELDDJNHXPOOIAYYOIEMYYJLCAWPFJYKUENDOEIABKQOTAWXRHTUHNMLIDQTWEOTHGDHVBHFQBE");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("XWTJJDOAOAOHCVJQEFRNYGLKTUIGVLILDEHQODPBIXGIQEGXRFGEPRJZCNZNKNQWBDJSWVAPPCKTWKQJSTLFRXACYME");
    tmp_tmp_msg_0_1.dest_man.assign("QUZPVKOWHFWSHZQGKYLULMNHQYMUWNFHYHIGNDWXKQNWLDMKVWRMXIQATPATWQETJJPBTKRAMUAPMKOWTHJGJYYECEJXRKEUBVLYFRHAZDROVVLZSODSLPILTXDSERUEZEOMCVQOZGCJOKFFTUFQNINEMHEDBCRI");
    tmp_tmp_msg_0_1.conditions.assign("VDEPAEQLYVBIQWWYCJTEWXQCTGSKLXBPCMBJNRXYJNGPPKBQAJLNDJIHOPOGTHOVPKMNCSRPTMEGIVSHLOOEUKRHUXQCIQZHEXYRMGFXISVUAFYDFJFAZEMLYYCFIOGMIWDKENCWVKSBQTLAEFBBMDNMTTQCPULRJONGPZSFDJUKBIZAVCGTQRDAHRZGVZARYZPSLHWVRNCIFZDNWOZBSDOEHHSAKQUHJMXLWDRKKUSFTAUTXX");
    IMC::NavigationUncertainty tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.507488429714;
    tmp_tmp_tmp_msg_0_1_0.y = 0.287422549283;
    tmp_tmp_tmp_msg_0_1_0.z = 0.539611258431;
    tmp_tmp_tmp_msg_0_1_0.phi = 0.121364324071;
    tmp_tmp_tmp_msg_0_1_0.theta = 0.861291666701;
    tmp_tmp_tmp_msg_0_1_0.psi = 0.943754457301;
    tmp_tmp_tmp_msg_0_1_0.p = 0.0816535059237;
    tmp_tmp_tmp_msg_0_1_0.q = 0.952859589556;
    tmp_tmp_tmp_msg_0_1_0.r = 0.388256794139;
    tmp_tmp_tmp_msg_0_1_0.u = 0.409681589334;
    tmp_tmp_tmp_msg_0_1_0.v = 0.0749521878641;
    tmp_tmp_tmp_msg_0_1_0.w = 0.364391602477;
    tmp_tmp_tmp_msg_0_1_0.bias_psi = 0.182908217579;
    tmp_tmp_tmp_msg_0_1_0.bias_r = 0.622909351596;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SimulatedState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.323187176081;
    tmp_tmp_msg_0_2.lon = 0.815059431808;
    tmp_tmp_msg_0_2.height = 0.0262523655435;
    tmp_tmp_msg_0_2.x = 0.418374574089;
    tmp_tmp_msg_0_2.y = 0.976362837203;
    tmp_tmp_msg_0_2.z = 0.319978678509;
    tmp_tmp_msg_0_2.phi = 0.376601197922;
    tmp_tmp_msg_0_2.theta = 0.974539308357;
    tmp_tmp_msg_0_2.psi = 0.452599409531;
    tmp_tmp_msg_0_2.u = 0.178524042415;
    tmp_tmp_msg_0_2.v = 0.770690169486;
    tmp_tmp_msg_0_2.w = 0.906878705217;
    tmp_tmp_msg_0_2.p = 0.574271948054;
    tmp_tmp_msg_0_2.q = 0.416161238874;
    tmp_tmp_msg_0_2.r = 0.429794341543;
    tmp_tmp_msg_0_2.svx = 0.0481428905663;
    tmp_tmp_msg_0_2.svy = 0.136206141466;
    tmp_tmp_msg_0_2.svz = 0.643544030159;
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
    msg.setTimeStamp(0.97905507012);
    msg.setSource(3251U);
    msg.setSourceEntity(102U);
    msg.setDestination(39361U);
    msg.setDestinationEntity(170U);
    msg.command = 53U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IXIJMRAURSPIYDTNMVKHVUUWRTSBVSOGJXG");
    tmp_msg_0.description.assign("MPMJZHNNHWXPVFKTPBZAEITKYYNEGJSQWCEERVN");
    tmp_msg_0.vnamespace.assign("EULDOSNURWLZIMSJJOYDXFAHHAHBZCYBPMVBUKBXKQTHMSQSFCOGXGNRAWXZXUETTWMNNFXIPCHTWZGQYUXNIIFAFIOJROOGSMHEOJSVAXTIHNNMVJZICWCIZJZTBGQCPC");
    tmp_msg_0.start_man_id.assign("ZVSXRCHJRFPZEEVRZSMMQXOTNSQPVRSJBLDQADAHLWCHBLGAVWZFUBEBRMUUVNMESFZICLHUZNDVXAXJMWDGYETKPODUBZGZLJGRWGKNWQRPQTQIMCOXOAKVYIYELKUCQSWUEFYNRBPJWTLMWIWVONJXMJNLUHIQKAV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("ELRGFMNHIVJTFEJELARRDVWRHRDNVCRUIKSBLWYUMJEGYAGQHWPAHYFCXOCYEMUUBQEGFBTWVUPZNTCWFHZTNBIEJUSAZJYCKHOGDIPRHSKMYMLZXNSEJGUPGQMBD");
    IMC::LowLevelControl tmp_tmp_tmp_msg_0_0_0;
    IMC::DesiredPitch tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 0.0660536997808;
    tmp_tmp_tmp_msg_0_0_0.control.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.duration = 10630U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("AGRNWUJALPROYZUJNSMYFKMOBOGCXSOFGUBLFPPTLTBZIEEZTVIZOPVFKNXGQZVJDRBSGTJEAWIRCBVZYHJVDXUTIC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FDNFGJPVMESFEPQXNLFQIKFLGSZICWREBRWRJBEBZHOGFPXSMVPFYRCGNTUAKLJQKRVLGBJLWXZDCTMNQDQDYIXDIQTKHHPVWMAKMEUAQJGUDYBGRKSJIEUCBFNTZZAVMINCRUEHZMROOYTZTMYDOWYALJHVNWCOPYLJVZGP");
    tmp_tmp_msg_0_1.dest_man.assign("WSWQNWHGRHNIJEHEAGRFQMHOKLUFPRVXQPZLQYVLGPCSUVEAUDBSBXGKSZQDLZDTRMZKFBTRBXJNQNYAPVZMAPRNBNVXJKEAXCYXBFJYDKBJQACUSKFUMXJVOMDKWUCFJODQUGXCWSDWUSVCIJYIEOOJCYTZWRITNKEVDIZGPP");
    tmp_tmp_msg_0_1.conditions.assign("BETITGLGNYOKXOJCPQGSUAOJAHUBLWMVGAZMWPTLGHRZBITPRTJIOMUTNHOTBNZYXEICWOLUYKCMWFZOWMFKSVAVMJD");
    IMC::TrexCommand tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.command = 112U;
    tmp_tmp_tmp_msg_0_1_0.goal_id.assign("SKCIGAWNBTDRXHGZ");
    tmp_tmp_tmp_msg_0_1_0.goal_xml.assign("BZUUVLGSLSJMOKFKHOWXIBAYARTMVVJHXFNVFBTKWQEKTIXNC");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::AcousticOperation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 7U;
    tmp_tmp_msg_0_2.system.assign("EKRWJPMNPJJUUSOOJWSZDASDUSXCGVUCLAYXEVQGQEZEGSREURDLJZBLCWTMGFBSVLVAJWF");
    tmp_tmp_msg_0_2.range = 0.329341628138;
    IMC::AbortAcked tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_msg_0_2.msg.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.189987792171);
    msg.setSource(63689U);
    msg.setSourceEntity(148U);
    msg.setDestination(22895U);
    msg.setDestinationEntity(246U);
    msg.command = 223U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DNSNJXLDXXSXJDUYNIVKHBQIOUTMJSH");
    tmp_msg_0.description.assign("FEDWMJVQIWKCLNKVTZEUDUXARGTUGXXMXPCIBEEILRNQBJGFJOLOCYBOYLDTPTPGBIGBEYIWDWLTUSDZXZMAXYZPSJBOSSFLQNZGXBZNPUHGHKYWJCWVDFYCVQISMNAMQCKERARBZWNPCOGJFJOJNVDUWTVFHZRQGMXPEIVYRRHKOEFHBZJFMACKHCNPTIYPNFROSXTKDWTUERSKTHGSLOJQAYDMAFCPSHQVUVSXZBHDLUQUILNQI");
    tmp_msg_0.vnamespace.assign("FGUOLCINFIRWMJKLSSDKTAYURRMYMLVWSEBUKKCLQPZJNZZIXPGHMVFLIDRSXEJMRHPLVSRAUCNCYDGWOOWDNKBBZTFFEXUZCHYXTNCNFGKPUUP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FLEAKZVYMSIGCRLOUGXJPDKTHBIRWJZRYWYAJKZATVEULVXEQWPVKGJTHPSZINIDRFVXPZNBZXCBOFUUIZCXISKPGCVBTQUIDVVDQTYJPCJBMBYONAOSRBKAMANEARHRPOWFEFDTPMKZSFCOWFXTUXMQLKML");
    tmp_tmp_msg_0_0.value.assign("SKNAJLHBGPRSYAJ");
    tmp_tmp_msg_0_0.type = 0U;
    tmp_tmp_msg_0_0.access = 17U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("HAYPSZJWNTKABCXFBEDDLQKJYVFVUJBDRCFVGXNUGNZJYOPNJFUINYNTESQZSZPQKJWGTVUHXUGEHFMHCHOYBUKQRWQOIMRSXRURKVLWGZTTVIZFOEHIGKTHLPMWRAYIVIGUJPZLLZGCNQCLTAHYSSYNIBLAMRRXUESDPOTCAMA");
    IMC::CpuUsage tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 225U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredHeading tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.535362910296;
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
    msg.setTimeStamp(0.440930987065);
    msg.setSource(45592U);
    msg.setSourceEntity(39U);
    msg.setDestination(50345U);
    msg.setDestinationEntity(201U);
    msg.state = 150U;
    msg.plan_id.assign("FUOQNIOSIAVTAUWVRTKVRJNNCSTKHGENCRBEYPOGBBJKERPUODQSISVNYJHGSBUBZHGAUYBATWEDTGAQLKCCLTGHLDPFXIXFYVGDTPXBCFJUXTFZJNIREQCENHJTJYTZLIXXCQAPLNMEWCEEMXFAKYSOMFGOWZAIURVUF");
    msg.comm_level = 235U;

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
    msg.setTimeStamp(0.4323253313);
    msg.setSource(21873U);
    msg.setSourceEntity(228U);
    msg.setDestination(35779U);
    msg.setDestinationEntity(31U);
    msg.state = 61U;
    msg.plan_id.assign("UIFJHNNKOGOTTOLLNVMBTXZXYHJPNVBORMKBUQMDZZCDSIWZONMGBSOPTLRDSHDFW");
    msg.comm_level = 134U;

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
    msg.setTimeStamp(0.503130123761);
    msg.setSource(39770U);
    msg.setSourceEntity(224U);
    msg.setDestination(33690U);
    msg.setDestinationEntity(164U);
    msg.state = 90U;
    msg.plan_id.assign("CKSXEQUTIBFNOIAVQRXTDNSBWMQALNAWYRJYTYZJUGKGJIRQOXABKHWXECVBBJLGCOVPPRKDZNPVZDAWDQFPRMQLFEAHNHOFIZEYJJUGVCHNPCYGOUKKQFIBNQLWIUMPLNRJHXMIDKIYUUHXGCYAVBQKZMMEUKBXWEAFZFHCPOSBORYJESSVNZRMTLTAWSBQGOTTSDDTLO");
    msg.comm_level = 58U;

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
    msg.setTimeStamp(0.730164762626);
    msg.setSource(53003U);
    msg.setSourceEntity(175U);
    msg.setDestination(603U);
    msg.setDestinationEntity(87U);
    msg.type = 89U;
    msg.op = 87U;
    msg.request_id = 57523U;
    msg.plan_id.assign("VEVZILPIFHHMOJKQ");
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.545420821785;
    tmp_msg_0.x = 0.896023562798;
    tmp_msg_0.y = 0.351820387237;
    tmp_msg_0.z = 0.299095130238;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BXCIXMONWYCPYODVXJKQYUAWNYOGRXGKISOBUZSFKBZHARWVPIGUOATDRVWMAMELVUECEOSTTBIAYTGYVFSGJSXFKXPLLLVWDFHHUJJJZJRUQURFHYXQDCXYKFTFNMTIBHSZSTNIOAJVGBYHDDWGCMAQIEDAJVNYKWOJKREUEZZXIHLOQNPCFGLBDPNSOWETEVML");

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
    msg.setTimeStamp(0.399537490848);
    msg.setSource(55100U);
    msg.setSourceEntity(92U);
    msg.setDestination(47115U);
    msg.setDestinationEntity(28U);
    msg.type = 32U;
    msg.op = 156U;
    msg.request_id = 52840U;
    msg.plan_id.assign("IEPCTOEMGPIPNCBBRATSZRYQYKCIVHAZTGSXXXWPJDK");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 29U;
    tmp_msg_0.mask = 244370696U;
    tmp_msg_0.scope_ref = 238804220U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VHAYALGBBTAHXZHFDUIKVKLPNAJAQKJCRVSTDZEOETNNTKQURLDHLZJCCKVRVHBXDEWJUMWJICMMCHHCXWUWGGJKVZMXFRLNFSTPFETJUWNQYSPYSABLXDLWEMCIEFCJVCOMFJKNRKXPOBPUXDIGIMQPAZVROSZPYRLTIVWBWGOTQZAMXINRQUDEBGJXUEYGYFIPFEGOAHTUQXWZYDSDSAOTBQHZSICNN");

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
    msg.setTimeStamp(0.506440328323);
    msg.setSource(15933U);
    msg.setSourceEntity(200U);
    msg.setDestination(52839U);
    msg.setDestinationEntity(136U);
    msg.type = 164U;
    msg.op = 9U;
    msg.request_id = 31084U;
    msg.plan_id.assign("VEJOPYFTUCSJAMXEFIAIMDUIMPEFCYPVVBHBZVUQNZBHQXUVAINSKGOQBANPHHXYKSMJBAMSCGAQKKLEYEHOTWZRILSJTWGRQRNIQGLKREQKAXUXRWTBGSJPDIOGMPXKRCXLWUJNVEGVDLDCTPBNOJSRQTIKDUPOZKGYCLRZZDGYGWERTIZWWOPIHAFFTUQNCJZODETHMFFDSFXAZFSUM");
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 12U;
    tmp_msg_0.htime = 0.832966878869;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YQRETTJBDNMCSKBAEDHHPHNSYAXDFGNMTHDIXAEXEGTGVCFBAMDVHPJIVMDLKTOPMMIZMQQGXLAVAYCQJXPCZPLCNZWXRYTMURIFKLRI");

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
    msg.setTimeStamp(0.903453129347);
    msg.setSource(28820U);
    msg.setSourceEntity(85U);
    msg.setDestination(37765U);
    msg.setDestinationEntity(226U);
    msg.plan_count = 5436U;
    msg.plan_size = 2873554396U;
    msg.change_time = 0.568796703727;
    msg.change_sid = 37640U;
    msg.change_sname.assign("TDIKRUYWHUMJKV");
    const char tmp_msg_0[] = {-117, 68, -32, 55, 48, -33, -73, 71, 60, 4, 24, -98, 86, -64, 56, -73, -47, -6, 62, -81, -4, -83, 109, -100, -30, -59, -79, -81, -64, 22, 100, 22, -38, -50, 37};
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
    msg.setTimeStamp(0.00355462450441);
    msg.setSource(1235U);
    msg.setSourceEntity(38U);
    msg.setDestination(31352U);
    msg.setDestinationEntity(67U);
    msg.plan_count = 20769U;
    msg.plan_size = 1109005190U;
    msg.change_time = 0.37591729376;
    msg.change_sid = 62428U;
    msg.change_sname.assign("NNNZSLLOXJPKPJHKYEL");
    const char tmp_msg_0[] = {-5, -70, 82, 8, 57, 31, 81, -16, -65, -53, -89, 51, 52, 22, 45, -102, 113, 9, 42, 116, 21, 81, 44, 11, 71, 25, -62, -70, -81, -39, 78, 42, 91, -48, -97, -97, -85, -111, 59, -62, 61, 98, 126, 114, 16, 124, 18, -1, 94, 106, 57, -57, -119, 72, -127, -57, 52, -68, -25, 102, 13, -77, -42, 97, 111, 54, 113, 19, -17, 97, -28, 70, 15, 38, 121, -100, 5, 105, -22, -112, 118, -120, 47, 48, 114, 70, -37, 71, -15, 49, -105, 65, 19, 69, 89, -83, 73, -126, 92, -86, -3, -19, 59, 49, -2, -62, -114, -121, -12, 20, -74, -118, -27, 104, -41, -93, 105, 29, -99, 68, -101, 11, -14, -123, -94, 44, -28, 14, -101, 76, 10, 63, -37, -42, 94, 27, 39, 62, 73, 111, 114, 67, 87, -67, 85, -60, 87, 11, 18, -71};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("POGMUZZWXLTHNGKENSBTLRXOETKRACSODYUJPSKGBSNUVDHLPWJJEIDQOGTXZMUDYHCLMCHNNHCQQR");
    tmp_msg_1.plan_size = 1136U;
    tmp_msg_1.change_time = 0.264181456583;
    tmp_msg_1.change_sid = 31591U;
    tmp_msg_1.change_sname.assign("NIULLOREWJYAHQUBQIBDMCEVT");
    const char tmp_tmp_msg_1_0[] = {-123, 75, 56, 41, 41, -83, -81, 70, -118, -7, 73, 90, -12, 109, -47, -5, 125, -29, -43, 2, -110, 64, 70, 14, 88, -44, 1, -39, -88, -115, -48, -47, 2, -22, 66, -86, 57, -20, -14, -48, 66, 121, -17, -43, -98, 94, 124, -94, -39, 103, -124, 11, 31, 103, -47, 56, -45, -61, 18, 119, -126, -26, 36, -58, 48, 49, -96, 90, -38, -123, 10, -3, -123, 122, -43, 86, -25, -49, 19, -94, 86, -2, -50, -109, -122, -78, 31, 30, -121, 75, 92, -103, 95, 15, 95, 52, 45, 57, -50, -20, 0, 41, -59, -82, -32, -128, 63, -95, 44, 30, 60, -99, 15, 45, 54, -64, 63, -124, -67, 20, -42, -69, 66, -7, -22, 27, 11, 109, 66, -80, 16, 52, 105, -79, 29, 118, 100, -34, 30, 71, -77, -9, -36, 73, 2, -115, -54, 123, 120, -123, -30, 30, -65, 34, 81, 112, -12, -60, 124, -111, 69, -16, 31, -95, 57, -73, 22, 71, 78, 97, 54, -1, -24, -55, 61, -98, -2, -88, -37, 18, -25, 35, -68, -114, 27, 118, -80, 31, 100, 10, -101, 86, -91, 119, 86, 23, 89, 118, -110, 88, 22, 117, -56, 18, 92, -51, -79, -102, 115, -80, 121, 2, -65, 5, 26, 53, -50, 74, 94, -32, 75, -105, 100, 121, 54, 54, -32, 7, -41, -72, 41, -121, 60, -59, 27, 82, 37, -85, -59, 64, -37, 22, 75, -80, 50, -95, 120, 97, 80, -9, 55, 40, -38};
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
    msg.setTimeStamp(0.75952887864);
    msg.setSource(10123U);
    msg.setSourceEntity(191U);
    msg.setDestination(38746U);
    msg.setDestinationEntity(168U);
    msg.plan_count = 49947U;
    msg.plan_size = 3656968827U;
    msg.change_time = 0.576819166973;
    msg.change_sid = 35529U;
    msg.change_sname.assign("BLLFSYSSQGSGKFURHWXNBAYMLAFUKUIEZKPLXXDKATHJUNMDRMAOGVQVGWQCFXUPSMVQWPIHWJFGYOGZPYFSZWAIBWYLXHDQHEMLYPWUOBJQDRQXITBDCEKCDGWHTCQXJZVWAXRHAOBNQFRJNY");
    const char tmp_msg_0[] = {-114, -106, -54, -114, 46, -7, -86, 82, 56, 122, 0, -1, 85, 45, 117, -70, 5, -40};
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
    msg.setTimeStamp(0.681888529156);
    msg.setSource(19495U);
    msg.setSourceEntity(138U);
    msg.setDestination(7018U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("BFIEXFRVPEBMXWKQTDMOEPAGWEPJYQKFUEHLVLXZZXIDTHLIJPJRKVYAOKCRODRTOIOIPTVIPEIJAHADVTYUAGDJMLUNODLISVUWEQNSJFVFTSZDMGWABGNGXOWRHWQYASCRCNMOMKZBBHNFWNKLTRZYSGXZ");
    msg.plan_size = 4457U;
    msg.change_time = 0.900962761197;
    msg.change_sid = 18108U;
    msg.change_sname.assign("DZKNVTFYOHMWIBPZARXCATNLSYSYAAIPRIROQABJNKSULWKBYZOXKWTPVUAYWWQMZECQBZZCQIUBHKFTGXJXENTVHMVOGUCXPOCUQIMPNZGDBEWEMNURYIZFAFSXTIEXHGHQGLIVKNHMDRJMDU");
    const char tmp_msg_0[] = {118, 41, -6, 67, -57, 123, -120, 62, -91, -77, -9, 121, -7, -38, 6, 80, 14, -87, -111, 113, -46, 18, -101, 20, 31, 45, 66, 63, -80, -10, -42, -126, -54, -102, -69, 70, -96, 102, 96, -121, 14, 4, -74, -68, -18, 102, 47, 30, 3, -26, -41, 64, 97, 3, -99, 43, -90, -33, 29, 16, -67, 30, -76, 70, 54, -13, -37, -19, -14, 28, -51, 30, 71, -112, 126, -3, 31, 28, 18, 37, -3, -1, -100, 54, 81, -58, 31, 66, 3, -45, -113, 123, -109, 13, -50, -43, -124, -27, -31, -117, 31, 45, 30, 91, 58, 124, -33, -55, 88, 99, 88, 81, 106, -18, 85, -26, 119, 75, -48, 62, 17, 97, -42, 8, -41, 116, 103, -22, -90, 30, -35, -31, 80, -103, -10, 14, 17, 63, -107, -105, 0, 33, 90, -4, -28, -28, -126, 125, 47, 70, 2, 108, 16, 87, 57, -74, 126, -2, 17, 8, -127, 113, 57, 30, 41, -66, -57, -47, 4, -86, -39, -119, -127, -68, 102, -96, 10, 59, -93, -53, -50, 46, 12, 4, -62, -75, 64, -123, -35, -10, 33, -53, -54, 21, 57, 22, 101, -10, 31, 101, -72, 68, -113, -34, 97, 75, 4, 36, -98, 55, -104, -49, -18, 31, 112, 41, 20, -122, -118, 36, 38, -68, -56, -2, 53, -3, 10, 10, -18, 2, 66, 85, 105, -43, -29, 65, 45, 47, -13, 39, 29, -68, -7, -124, -100, 71};
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
    msg.setTimeStamp(0.840707830856);
    msg.setSource(7987U);
    msg.setSourceEntity(136U);
    msg.setDestination(14186U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("CSOALZTMMWGZEIDYGYWYZKEOBVZNXCSXPNYTXVJQRWFCPMPFUBKKXZLWCFVYLBXJROSRSBSBUDSTIBBYQJSOUAXHZILKOADPRLFHUMODPFTKPVLZHLEZHTPFLQCUFDREOIYOHEQXUDUKEDGPRGBFSXKJLCQUMPUZTTHMNVECKJSTXONVRFJXGGHWZAMTW");
    msg.plan_size = 28864U;
    msg.change_time = 0.626087173415;
    msg.change_sid = 37091U;
    msg.change_sname.assign("LBQUESVKAKJIHBKBNDHQOVMXXCATHWXILRDHGZYWTEYAOFYXGWDMZRRILGHMXHAOKTUTXZICQTJYKQEUINJPRVYG");
    const char tmp_msg_0[] = {-27, 52, 7, -108, 83, 80, -116, 27, -96, 34, -28, -77, 64, -61, 25, 123, -1, -85, -59, -31, 12, 103, -76, -18, 12, 110, 122, 32, -46, 41, 8, 100, 26, -84, -55, -29, -72, 113, 58, 93, -40, -125, -80, 5, 126, -29, -77, -20, -32, -125, -116, 121, 58, 124, 13, -98, -75, 114, -116, -79, 16, 10, -122, -80, -125, -16, -84, -71, -69, 93, 115, -107, 100, -79, 85, -59, 12, 23, 109, -62, -108, 47, -26, 9, -107, 78, 85, -62, 47, -22, 86, 1, -17, -7, -109, -47, -15, 6, 119, -58, -47, -10, 31, -79, 91, -3, 89, -19, -47, 38, 28, 60, 10, 50, 86, -87, 85, 48, -49, -60, -43, -77, -63, 15, 93, -62, -13, -59, -38, -116, -39, -102, -107, 100, -97, 9, 33, -103};
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
    msg.setTimeStamp(0.750735471862);
    msg.setSource(37350U);
    msg.setSourceEntity(201U);
    msg.setDestination(6923U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("FVCHICALKSZRFDVMYZOIWJKARBNDIEZOQPGAVJIVVJHKTAQGPUOXXWTMMGWIRLVEUQGZJMGYJFXUUBEYBIRPWJNOUKKWHIGAPMDCJYRCZAXSHOKTNTFDFUYBZDFCSAWCVTDXOSDPMBCPVCFHUROBDKLTBPGEEDJDGSXIWSJFKZNQVELHUBUUETKHRTNYYHTHQOLMFMKQNLIPTXNLLNVO");
    msg.plan_size = 40657U;
    msg.change_time = 0.557919703009;
    msg.change_sid = 50222U;
    msg.change_sname.assign("IDXOHKDWPNUTPIZGITXOEQIZRRKSWKRYOAHCPMZHUCOXQTJYCOEPANJLSENJFWEAXVGUHGLJDQTGABYBWZPEVJD");
    const char tmp_msg_0[] = {-34, -67, -46, -3, -98, -63, 77, -22, 80, -13, -37, 35, 14, -114, -74, -77, -124, 72, -67, 61, 118, 26, 31, -56, -66, 44, -24, 126, -64, 44, -78, -84, -20, -36, 0, -102, -45, -32, 120, -119, -89, 99, 61, 96, 4, 47, 126, 50, 61, 31, -79, -7, -38, 11, 25, 3, -90, 66, 1, 57, -127, 60, -73, 83, -89, 82, -86, 85, 39, -76, -53, -63, 46, 51, -2, 33, 101, 29, 119, -42, -16, -38, -103, -42, -55, 96, 52, -45, -44, -15, 113, 80, 48, 12, 65, 29, 12, 50, 79, 30, 15, 111, 83, -94, 66, -71, -23, -46, 59, 85, 9, 9, 51, -101, -20, -116, -70, 53, 79, -115, -58, -22, -62, -113, 34, 92, 11, -33, -38, -12, 59, -67, -47, -18, -12, -3, -77, -126, 65, 105, 122, -14, -115, -32, 90, 18, -58, 117, -85, -39, 45, 69, -94, 107, -98, 77, -56, 52, -36, 25, -102, -25, -79, 17, 123, -105, -57, 76, -78, -125, 20, -117, 92, -30, -97, -60, -40, -59, 22, -123, 41, -52, 111, 5};
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
    msg.setTimeStamp(0.450987491101);
    msg.setSource(8333U);
    msg.setSourceEntity(93U);
    msg.setDestination(8198U);
    msg.setDestinationEntity(101U);
    msg.type = 97U;
    msg.op = 70U;
    msg.request_id = 17836U;
    msg.plan_id.assign("GBREESSSGLLAANTJIOEYMKNGLDCPVHWHNCWZJYVPLFXMRUUBOVEIBVCQAAJKWIQYLIHOAPHTIKJWFKGVZNRCEGGYGDNBKOJCXQKZZISHXFCQNHQTMFFMBPURROQNRELXXFISIRZTYHCRYGDLWJHZGSQXMKUPNP");
    msg.flags = 54513U;
    IMC::DevCalibrationControl tmp_msg_0;
    tmp_msg_0.op = 154U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TACXQTJJXQOTKGXGFMNGPSMHVJUNZNVOZWGWQSWXPQAMEVSCZYEYUFDNSSITTRFKNYDRAPMEZIYGZBDOJAICMALEEXZCYSUYQPZKTOMJHVSDXGLMOMUBPLZOI");

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
    msg.setTimeStamp(0.904493502756);
    msg.setSource(21423U);
    msg.setSourceEntity(86U);
    msg.setDestination(48729U);
    msg.setDestinationEntity(80U);
    msg.type = 71U;
    msg.op = 221U;
    msg.request_id = 3315U;
    msg.plan_id.assign("ZBMFDDZMHVWDDRPKISDJNZJXYJIMTJNPCWHABKEXQKHGHLSPZMARIWOJFETWVPEQSGANLYNUVYOWSRFSLIJMDNYPZFFWINVNXWVYZTYNCOBXUFWIEOTIRESCEURCAFERHBFMIPVAGLVTQKXDMLJTDBBUJTDILMS");
    msg.flags = 8835U;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 221U;
    tmp_msg_0.id.assign("AZNOAXFIXCRSTLHZMLPTMYCVOHBYONJREGUSLNVUEVENUREWBDKJRXBAXIDYJPEYWAZBBTONDGFNFOMMJEWRGVYDVKXPAFCIBJSHSIGPKGBGSMDARHRWQDDUFXQAUMNHKZZHMKWZTBSEOSEWOZVACUDXXBKCTJSIVGHALKKYSDCCYWPJGRZMFOTNGPIELNZRHQVQVPQLQWIOLVLKOCQIUIRTCXP");
    IMC::SmsTx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 58789441U;
    tmp_tmp_msg_0_0.destination.assign("WQJQFVFCFJLWASNTDSUVOXUIYXTBIYVIQJBLWTOGFTDRJKHHTLPVQGRMAGIYZNUYUEPZRSENRBZKSNLCEZZXXTBLZJZEEMKECHWOHDNLAAYHUFRZDU");
    tmp_tmp_msg_0_0.timeout = 2959U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {-62, 104, 46, 97, 110, 121, 108, 109, -111, 108, -120, -52, 16, 107, -15, -98, 102, -127, 28, -119, 115, 116, 56, -49, -125, 56, -73, 46, 113, -34, 42, 125, -79, -115, -123, -59, -101, -68, -65, 95, 108, -40, 75, -114, -14, -2, -123, -44, 72, -7, -9, 25, 44, -8, 24, 57, 4, 106, 82, 18, -42, -67, 50, -111, 17, -122, 23, -32, -76, 114, -113, -27, 32, -102, 6, -89, 55, 94, 107, -50, -89, 81, 97, 52, -107, -66, 59, 76, 55, -76, -18, -3, 12, -15, -8, -74, 87, 93, 88, -29, -47, -44};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XXISHGGMOPLXOMLFWJUKQSYTTDLFDJNPEBJVYQSIVOHZNCDTWGTCAGQANMWOSUZGAJMFBCOAEJDHQTZFZGZSYAPIZHFNNZJDWPUTXSKLDXLIPYXRUYUEFPIQHAGHGESWEXYWRAEBHUNNRXMJBYJJVKVNRFBVIRBVEVOTHQOMJRLPLKFTYSLFXCOPKWCBRAWBRDMDTLKPKXSCCCCRUVZZUAHNDQWDHPQTNCEVBLOSVEKIFWAU");

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
    msg.setTimeStamp(0.402433394014);
    msg.setSource(40846U);
    msg.setSourceEntity(144U);
    msg.setDestination(17902U);
    msg.setDestinationEntity(178U);
    msg.type = 247U;
    msg.op = 197U;
    msg.request_id = 55542U;
    msg.plan_id.assign("QRQTZDLIERNLASTQZYBDXLVFOKOTWIGYJFCFAMNDLPAKKOTECIDOHAPTDHKLJEUVKJGSPBVNGGMRE");
    msg.flags = 7544U;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("GZAOLFNKSTBATLWDKFQAWJMIHFQVPLFATNJZIVLVWSDLLQREWHPNEDQIKQJNVTHMDHDBYKBJEJBHFUEIGUEYYBAYMGGCCGDTNYUK");
    tmp_msg_0.service_type = 75U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZURCNSUDCABEVHUYJFSXQKVNTMRZGJXLJMQGOAIANAYDAGSERUSKQBNIYWTAPOFXFTVKVBSEZQXKFFUZJVOYRLWEREGJNRNVPCHPIWNIBIZIXXBDETOBVALHENSDYXPCALYWRWFSZZTZJLGLYDPCRHPCBKBWJEWLKFVCUWYIYMGUQQDQPTBMUKVHCDNDFMRMY");

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
    msg.setTimeStamp(0.280289138765);
    msg.setSource(63587U);
    msg.setSourceEntity(228U);
    msg.setDestination(14975U);
    msg.setDestinationEntity(74U);
    msg.state = 79U;
    msg.plan_id.assign("LXACLIGZUXWZVBMBIEQTEJEVQNHBRIIJDYHWJSZLZECRAPMPGVBSGQUFDJBRKXJOGKTMATQSCOFFRXDEONPYALMRLXDFMNUCFBVHNRLHOWRVIEMIYSGLSUKCETSHBQTOBAX");
    msg.plan_eta = 1785644199;
    msg.plan_progress = 0.293019045486;
    msg.man_id.assign("DLCWSVPSERFGEFPHBVKXDKZVMUJQOJSXZKCNTWNGUEGDJTLAJTUBUKSHQBKMLGSGNILQRHPOWYUAFWUJGRRGBHCAILFABRSYQQBLRMMTPIVTUIBSQSIJXPEODPIFMBLZGNOQXVJYCYHDTEPOVZVAOZLPIXJAYIKTZMNMZQCWERXAEAYKNCLWVHHS");
    msg.man_type = 35388U;
    msg.man_eta = -871204132;
    msg.last_outcome = 21U;

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
    msg.setTimeStamp(0.750415207638);
    msg.setSource(29962U);
    msg.setSourceEntity(237U);
    msg.setDestination(21598U);
    msg.setDestinationEntity(76U);
    msg.state = 231U;
    msg.plan_id.assign("WMKMFDHHXGJZWWQHGMYGIHMWQVTGGAQSODALQYOBRHVNTLFFLKXMSCUCRRSKPULEJEAXOPZOYTMPRCZYRDXYEWVBIUVNUJEQJSUVCRZHYKEEDGFWKCIJJBBZXPRYGSKCXQPKJYLWVXJTTHNABFOIBZPL");
    msg.plan_eta = -719097398;
    msg.plan_progress = 0.919570825767;
    msg.man_id.assign("LIYNTESBMU");
    msg.man_type = 44847U;
    msg.man_eta = 387133476;
    msg.last_outcome = 8U;

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
    msg.setTimeStamp(0.936443031139);
    msg.setSource(170U);
    msg.setSourceEntity(243U);
    msg.setDestination(736U);
    msg.setDestinationEntity(135U);
    msg.state = 234U;
    msg.plan_id.assign("GTFAQZJQYDSWWRJOCNRKAPNUBLFASRGNZEJWTOIXVRIXACWISZSTKBBMVIPBLHTVUONRGUCJKZUSTGPQQMSTBMEJXWVXGNNUUHRKTECEPBWAKKHYHALZUPQTJFMOACMECETHPMVSRZLGOIRQABOLDGD");
    msg.plan_eta = -1356394954;
    msg.plan_progress = 0.790536183635;
    msg.man_id.assign("GUKMJOEGYCEBIPAWRIRLJORBGJYPPHVZTDLRFOBTAHYEHDNIEAIPJVNZMXTUVONDIWHNRTJWHJFCSCYNQXNDXXAROZWKXXPUMMZQCUCUPKRDTQSPMACFBNTIHMWGLTJUYOKSRLEWPETIYASOHZYKXKROGGOXIBI");
    msg.man_type = 64918U;
    msg.man_eta = -1990367520;
    msg.last_outcome = 40U;

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
    msg.setTimeStamp(0.482384042997);
    msg.setSource(57963U);
    msg.setSourceEntity(24U);
    msg.setDestination(7278U);
    msg.setDestinationEntity(92U);
    msg.name.assign("NHMNVVTCUDMRPJLWNBMMJLHXDYCSYSMBOKIVVMIKGAKJLNYJPHZMXTAWAWEWGTXSUWKHBKLDLIQGDEZPIBDRATHHCKGYTQQSPUSOPSMZFPTYTECQUBQSFJCYGZTNFHEDTUFXRSQCQOZVOK");
    msg.value.assign("LVMJWUJKUSFXMJVIVZOUMEGABYYVCDUYAWFNTNSTANNORWTTCZSKILRJODRMBUXPKILWDAOHMVTACGKNQLVGZEPCIOEXBFTOHIUFFEJSKFSKBPQLRERILHOLJYCOXYZRBYHMOMKQGXLZSJEEPBIGGMUDAKEHDFHYBFFZQEBVPUNAR");
    msg.type = 214U;
    msg.access = 167U;

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
    msg.setTimeStamp(0.7000137703);
    msg.setSource(55247U);
    msg.setSourceEntity(118U);
    msg.setDestination(62514U);
    msg.setDestinationEntity(205U);
    msg.name.assign("FCTXMNBYRUHWVYNMGQAXGSTEAXZQWYPIDCDIXNUSOKZMZJDMHDMCOHWIZPCGEMVFVTKBTOXLHPXDERZLAHCSFKLVGSKGHNVRUVEWYYEQJQSRBDIUCKRBOJTLOXEYLESEFCZCLJOTTNHMVBTMKSGBPIWUBVDMWJVOEBNUAJKRXRPDCNTAKPCILJBJAXZQQSEVZYUQJZMAYDIQOSGHNORWYAGORFFPKFZPIFHUHADFNL");
    msg.value.assign("TNSSJUDEHCLQNCSHDLBSTBXZMMEMXEVZPQSLBDTKTYXVTOQCGONMIFVYXAZPYYGPNXMXOCCCYCMNNRDOGIKWOWBQJQVZEPTKCTAKFGJWY");
    msg.type = 35U;
    msg.access = 131U;

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
    msg.setTimeStamp(0.524868566043);
    msg.setSource(12383U);
    msg.setSourceEntity(84U);
    msg.setDestination(17276U);
    msg.setDestinationEntity(89U);
    msg.name.assign("VNFJNNCHKWVPSEYAFGKNEIWIAPZOLXWQMBOVXFDKZMWYXMDSNAKHTSMEUNAIVCHSPDXBEERVTIJNRDBRXMKDRLCSBHINUFJTQGMXXLBH");
    msg.value.assign("DEGYYHQGALMFAUTXBPQDNLDXMDPTNYLFQFNHHVRTRZNKATKXMBAH");
    msg.type = 45U;
    msg.access = 186U;

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
    msg.setTimeStamp(0.234515316035);
    msg.setSource(41440U);
    msg.setSourceEntity(59U);
    msg.setDestination(42830U);
    msg.setDestinationEntity(6U);
    msg.cmd = 154U;
    msg.op = 68U;
    msg.plan_id.assign("SRUNQKOQXAUSECUDYXGBVRTGYTYNGNZSGWOZEDNFIKBQSDOCSOHJGNCAYCFOAIYNTUMKLZNBEMZDBWZFFMUKEZTTBMKAOJVPGOWPMPBNLPLZPJLAESFMNHIJBHLCEFHGDXTCXFIIRFWXEWQPLIDRHWXPWMJXNCOMOHZMJXQRECYQ");
    msg.params.assign("AXCKGBQJOMBVIQDHCJNZHCFVFPULJVCDXCECYJZFIFGXPJODVXBPTKMQLEVCHRFXZPBUMPBSWWSDIYEODRWONXSMKSBUTENRXIACGLVMKZUWQNMIXW");

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
    msg.setTimeStamp(0.327416315031);
    msg.setSource(49242U);
    msg.setSourceEntity(7U);
    msg.setDestination(59431U);
    msg.setDestinationEntity(183U);
    msg.cmd = 140U;
    msg.op = 254U;
    msg.plan_id.assign("KVTGLRKQVDBWHDGLTZLXOABUOVPANGUPJGNGCNADPFKUYNASGKIWCEVRQZPSHKBMGOCALBJLXSEOOTTIFYHAAHBEFFAMHPLTBJFDXCOZHCITBTMCROXLYN");
    msg.params.assign("LCKZCUMCPQALYDTGHQBAVPFOJVTZMZNGKIIQWUBBTHUEDENYNKASXXOGPHUYPECLARDPQNUGHIONIJVWYSDSBOMBQOLXZJNWJFIXXJQZVEAEFTYFDEXIVVAGFRDZSDHVUFOYKGBHKLSVPCBADXXTDKAANCNMYFISQMHGEMPYCVBYFTQXSZCTZERTQCRLORMFWHMDZOKULOHJSCBNJEMEUTGRZUTWRNFPLKWQGLKJIIXWWSWKIWJV");

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
    msg.setTimeStamp(0.467309742988);
    msg.setSource(59701U);
    msg.setSourceEntity(38U);
    msg.setDestination(31668U);
    msg.setDestinationEntity(116U);
    msg.cmd = 57U;
    msg.op = 126U;
    msg.plan_id.assign("WMARDZNREDJM");
    msg.params.assign("GAXIXBDCXCCAPCQLRDJEIDQIXVOKORNIJESZNZDQBVLDRSXALXHJEZYPGYHLMELJDSNBHFBHDFGZUXTDOUZBICQJNHKGWKBMTRJTONMEAVEVUIYFCZQKUOOABRITRQUHSMHAHFSJGSHWYNQLBWLUXMAKMDWUNAWUJFBTJVZGMSAPXSRNPKKVRCMLYIILPQFOKXGLGBSCPKMYOWVWDKTNJTPQZNEYVWVZWRUYGEOE");

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
    msg.setTimeStamp(0.252858607127);
    msg.setSource(45792U);
    msg.setSourceEntity(145U);
    msg.setDestination(44843U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("BIUCNRBIXLCPAZYERKDJRPZBQQKGYRNHPSIIFFZNYAMZJYOKUDSIGDUVAAJOUORGYLNTSNMCQXTUOVFILXLWPBHEZGWFMANEQPIAGBZWSVNAOESHMBRUPLMHKNIHWBKKKIXVEJJWTDKVYMYPOXZ");
    msg.op = 192U;
    msg.lat = 0.529150939123;
    msg.lon = 0.935575558826;
    msg.height = 0.156781918857;
    msg.x = 0.834025165722;
    msg.y = 0.102426987301;
    msg.z = 0.15886617522;
    msg.phi = 0.820181568319;
    msg.theta = 0.649479828634;
    msg.psi = 0.71357504678;
    msg.vx = 0.0523229902887;
    msg.vy = 0.724771615253;
    msg.vz = 0.669090905057;
    msg.p = 0.644951872118;
    msg.q = 0.86059191787;
    msg.r = 0.556536945143;
    msg.svx = 0.643489649379;
    msg.svy = 0.377846612269;
    msg.svz = 0.835948210723;

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
    msg.setTimeStamp(0.18111492817);
    msg.setSource(41662U);
    msg.setSourceEntity(222U);
    msg.setDestination(33934U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("FNNASTMXWBEHEQGCZRPQPFCYGZRHESIWYDVDGUOXBPLAXHWWMONYOKHVCRTNDEPDBAHFQERPCKMJRVOBLNJSFHCTKERUSDNZQITJGIFRLZYQDIYFMCGABUJWRWDHDQYZPZIFLNBUSEVXJXYITIZXWYPUJKIGZUNXQUCVQCVREJPWZRKLANLGJOPOALOBHAFHTIHVVSXYDJMTXGM");
    msg.op = 137U;
    msg.lat = 0.0251674659197;
    msg.lon = 0.300754069235;
    msg.height = 0.913611231694;
    msg.x = 0.780537238683;
    msg.y = 0.148146635486;
    msg.z = 0.957152084173;
    msg.phi = 0.731828362271;
    msg.theta = 0.390682197524;
    msg.psi = 0.230453258431;
    msg.vx = 0.207831735547;
    msg.vy = 0.23141056965;
    msg.vz = 0.601873371094;
    msg.p = 0.968315137516;
    msg.q = 0.631119477575;
    msg.r = 0.65000153207;
    msg.svx = 0.706495505156;
    msg.svy = 0.84781741018;
    msg.svz = 0.334466515478;

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
    msg.setTimeStamp(0.526087659792);
    msg.setSource(6138U);
    msg.setSourceEntity(43U);
    msg.setDestination(20987U);
    msg.setDestinationEntity(228U);
    msg.group_name.assign("INEIMCKHGEMTDOVIJLLSPJCFJVBCBFVGCYXHYAVZJPNSLGHYLOLZNDTDWAXJVERQQXOHIHFKCWKFUUIUZFQBVRSBDLEAOWGUDXTIWOXOGABZVDAHMXMPHURJWTTWZUIPWMQFEMFPYDQSOVTRNNFPXIQSCRKQYOAIMDKEOTKRBQFAGWSEQWXSMW");
    msg.op = 171U;
    msg.lat = 0.012016694114;
    msg.lon = 0.87226084181;
    msg.height = 0.789271382165;
    msg.x = 0.0927976043811;
    msg.y = 0.802404915362;
    msg.z = 0.206772421053;
    msg.phi = 0.0966417581976;
    msg.theta = 0.867826927107;
    msg.psi = 0.375680189297;
    msg.vx = 0.913742094641;
    msg.vy = 0.266858492942;
    msg.vz = 0.667846978024;
    msg.p = 0.915329972892;
    msg.q = 0.209475437602;
    msg.r = 0.696434222183;
    msg.svx = 0.270055065306;
    msg.svy = 0.545226564049;
    msg.svz = 0.148862950966;

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
    msg.setTimeStamp(0.471225756525);
    msg.setSource(56786U);
    msg.setSourceEntity(122U);
    msg.setDestination(32519U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.605447193185;
    msg.lon = 0.155999882462;
    msg.depth = 0.252512645072;
    msg.roll = 0.537517595884;
    msg.pitch = 0.0478090373642;
    msg.yaw = 0.643337148995;
    msg.rcp_time = 0.143510725479;
    msg.sid.assign("VXOXYNUQIJFZPWBDDZMTXYRAWDHWHFXPNYANZMGQJFLASJJEZQGEPCSWBLU");
    msg.s_type = 76U;

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
    msg.setTimeStamp(0.856633239234);
    msg.setSource(46587U);
    msg.setSourceEntity(195U);
    msg.setDestination(16259U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.350755572343;
    msg.lon = 0.846898820673;
    msg.depth = 0.0994871345407;
    msg.roll = 0.140265490767;
    msg.pitch = 0.00685440047941;
    msg.yaw = 0.586765073227;
    msg.rcp_time = 0.0379416887238;
    msg.sid.assign("AXTRMCCVYHMUXNTBRHICPWGYUQHUBJXDMTIJCAVNPMLNFXNELNCBSSXEDYGKZZGEVFWSXZWKWZWXLQSLWWSKWBKDNTFXRVUFDYDZWUGJICQBEOUUSHYENOGQRHLMPPVVVPKHKZINPKATRJOCBMTJKMRMMLHGAGQEIPVLDORYFSBOWKF");
    msg.s_type = 199U;

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
    msg.setTimeStamp(0.310153267701);
    msg.setSource(52284U);
    msg.setSourceEntity(37U);
    msg.setDestination(2366U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.694319642854;
    msg.lon = 0.54556292766;
    msg.depth = 0.137584019613;
    msg.roll = 0.323446382162;
    msg.pitch = 0.0329101080943;
    msg.yaw = 0.678402050729;
    msg.rcp_time = 0.0139777518245;
    msg.sid.assign("FAXJZLQSLXXCVOVPWDMIGLXUHFTBDR");
    msg.s_type = 200U;

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
    msg.setTimeStamp(0.60848286732);
    msg.setSource(20553U);
    msg.setSourceEntity(22U);
    msg.setDestination(64717U);
    msg.setDestinationEntity(72U);
    msg.id.assign("BXGVDDDONAKPPWQKRYSRNMYHQKXOYRVYHIUMSWBHUPUIYCTFDBPWRMPLLMJGSETODVFSPBMJGWCWLXFUEFNMQAYDBTIJGHESBHEREAQKJWOZVAQNXBXZSLAAFPZIJEEJKIRZHDXYNGCQMQWPWUU");
    msg.sensor_class.assign("FPSZGKQAVEFVIRRPZPYBBCQOGBAKOFKHTVKGXMNJDGTJVMLEMFDEKEMTPWCSIDJYSSHAPLKIXMDLDULXTIHTRKVIPXSSLGBJEIMTBRCARWIQQOQASYJFVWOSNPUWYFYJUNPRILWASZJAFLMYHCXORKMCCMHT");
    msg.lat = 0.088432863919;
    msg.lon = 0.480313052342;
    msg.alt = 0.445048875227;
    msg.heading = 0.264964614869;
    msg.data.assign("BSTTJHZHOQUXSKVDMDTAIZHUSGFOXZDCZUUGOUWWQWSISRWKDKENMCEXTNYKCCVLNJOJDRWBVJKHWRXXZVYHXYLBALTLPYGAWHPIEOBCMLIREDPAOVBFIAFGUENREPOLIYXHXJSWVGKJMKFFGJERMPMFABBFD");

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
    msg.setTimeStamp(0.313580418181);
    msg.setSource(25190U);
    msg.setSourceEntity(25U);
    msg.setDestination(43137U);
    msg.setDestinationEntity(190U);
    msg.id.assign("LUOWEPXVHNBTDBLOSIHUZEHRSCWPMZZXDNXOOFLRJAOHYHLEBXJPWRBAJINSYKQJJSJIIFMXSMZYGDBGBNBAYDCWFHIOELNLKUIGCYNKUSULCNFHKKCBWMGZVQDPMAPJLYFKCJQUXCVFDSOXPMQG");
    msg.sensor_class.assign("FJWLTBFBOSPUDSWNYNKKNXDPQFNYGRGRCIVHJZHBIOFOTAHMCORSWKWSSDLPJHKXAOGULBGSBBHZNDSKOCIXOQXVQZRVPRPVJLETCKRTHJMMJMLLFYWWGYUEEWHUZTDJIMJXLTTFSVLZEAKYNTMEPCDRAFWAGBYXIMEPZZARMUTVZQHMUIIYEIIVAKD");
    msg.lat = 0.277930206638;
    msg.lon = 0.259688144477;
    msg.alt = 0.411168537653;
    msg.heading = 0.199080330783;
    msg.data.assign("JPLZFLVQNRLIFBLFCZMMPSJGWOXTGXADAMITYBFHRAIOKTSKXFCVUYRYMJWZPSTUKCIXWOLUWQBCYKZRDGAQFNZUWJOGKPUQJMAMGZFCBPDSNHHRSCLHKRDNYYZEJQCAOTMIDLUZECEAHXWEQXNLZHYEXUGNGVOTWMOTXSHJXBQQPKYIEQNOCGXAORZKEVTFWFPIIENENNDDVRTIKQEDMDPSL");

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
    msg.setTimeStamp(0.171957620402);
    msg.setSource(47105U);
    msg.setSourceEntity(61U);
    msg.setDestination(62403U);
    msg.setDestinationEntity(219U);
    msg.id.assign("EOTFEUTTZHJXRWUEJQOGSECLIPQNJYWOYBMSNJLRIVGBHXKKKXMSJSIIKJVDDUCCKWALUPQFNGOCUJFQYTMYZYNYUVINUMQLPRWEOIJWMESXSZAWPKECFECCJOVZBBFGZ");
    msg.sensor_class.assign("UXBLBHPJPUSQQDWHSMHRMNKDCFDJIGCXNIAMKESVVZCWJQAQKPQKNHLMLGYJROGTAEUXITRTSSWOWUOAXCVTCIAZCDIOULV");
    msg.lat = 0.395702329814;
    msg.lon = 0.605795327616;
    msg.alt = 0.295215881034;
    msg.heading = 0.630880555795;
    msg.data.assign("MWQOTSCQLOAPBEOSBMONJMYKOSSWNFBLALMKFJYVEUGCUQHMIPWBIRAJLUJWIJCXNIHPERCMHSAZTRFTTOTNIWDVXXZTFIBGUREHZBIEFPVYKJWYQNRKXZRKHUTUCRPIYRXOQ");

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
    msg.setTimeStamp(0.00265071610972);
    msg.setSource(20916U);
    msg.setSourceEntity(252U);
    msg.setDestination(8091U);
    msg.setDestinationEntity(184U);
    msg.id.assign("KGMSEPFKBIWUEBRSYUOAPRPNXGKXPVYAMJJBCVJTMTTSWREPKQWFMXEXIUONTUZPVTNZSCBYYOWJHHSMCCFDOAIJBXQBLTULZXWHFFDLFWNAMKDZTDKAULDDLBJDOOENSSCKRBKDDOEVECPZZBXWCSXWTCNGYMJUQZFHQOUAIFEJPIIGJAHNOHGYGZVRLHHLIIAZGYOTVXRQIGFPWHLNERYY");

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
    msg.setTimeStamp(0.96535526206);
    msg.setSource(9112U);
    msg.setSourceEntity(217U);
    msg.setDestination(36510U);
    msg.setDestinationEntity(208U);
    msg.id.assign("NWXIUXQTAEELYFACUARKDVGPHEGJUNBOVQBRZUYEJPXWFSOLVNHFTPMFBTYLZQLBDBLOSKFBIWFKDVEXICPHSJSNCRHCPMOTEO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IOGXYCGJIIAURTDNIYOJXZTEMSQHBHJNWWTCAUFUBCKELDXWGUYZZRIDYYVNJLMTXLDLKPSBGANVUTKAHOQMZVDRDSPNMPOCWDBXDKRZDCMCPISLVIZPYVYBATUMETFKATLQUSMHSRFJOVQGNNXWXKWJTFOHXWHKRAJVXBWJUPOIAPFIKDGEYQCWSKQCVEQFCPSZHCFBEMRNHGQJEURLFAGEBPJHYPLZGNFLMEAOOTE");
    tmp_msg_0.feature_type = 214U;
    tmp_msg_0.rgb_red = 124U;
    tmp_msg_0.rgb_green = 203U;
    tmp_msg_0.rgb_blue = 244U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0895222748927;
    tmp_tmp_msg_0_0.lon = 0.348583764448;
    tmp_tmp_msg_0_0.alt = 0.0170631184639;
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
    msg.setTimeStamp(0.2151314395);
    msg.setSource(34409U);
    msg.setSourceEntity(51U);
    msg.setDestination(21739U);
    msg.setDestinationEntity(104U);
    msg.id.assign("AYVKUGJIVBSQGEJYXKOYIITLKSPDEVOOCIYRPBONHMNNPQDRFTYDNIXLNQWYQTRXWHOWPPGNZTZJOGWDTUTFBAZFTMRUMEHKEFMOSSRWZFIDWVADIPUZYCJMRHSUKFHMCESDNVEODUJVJTAAPQLCATBRLXUKSWAWKXBMZNCFKVGHGBMCPHJLNLEXGIMBQZGLHJBUFYWPAQJRN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DQCZRJKMFSEPCNTPJQVLDTRRUNIBHKPDFSCZNNTEJZOGIIAFHEOKVUCGSCBMMSMFOGDEIWOEQBVLCYJQQYMWUDULFXOHHYUSPAPZCRZAEXYYMYPIIZRBKDQHEXETQWWBYXOZOTVFACNORMFULSOTHGKMXOVPCKWUSTJLZTGVEWNVGRNKQDXVQQWBILUG");
    tmp_msg_0.feature_type = 230U;
    tmp_msg_0.rgb_red = 78U;
    tmp_msg_0.rgb_green = 168U;
    tmp_msg_0.rgb_blue = 170U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.40302481961;
    tmp_tmp_msg_0_0.lon = 0.363860494865;
    tmp_tmp_msg_0_0.alt = 0.150245876726;
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
    msg.setTimeStamp(0.767308999468);
    msg.setSource(15839U);
    msg.setSourceEntity(123U);
    msg.setDestination(30770U);
    msg.setDestinationEntity(92U);
    msg.id.assign("WUKRJTAOIWRAVKNEWHHZNTHUJKDWKADZGWKEXYGJWOSLEHFUOEFKDXDBQZMMGUORAWFIIBJAZMDDTICZJNKPBBCBNDGYLWUZBMFNTGSJZEKCXEECIVIWSXKCVBHHUMPGWMTIJQFXLNSRUVRFULNHKOOYZNLQYVQRYUQQILJZLRPQYNSBFIATXPOVAFDPGTMGSPYBEDXPJMGIGLYJMXCASXOOAVREXSHNPY");
    msg.feature_type = 242U;
    msg.rgb_red = 94U;
    msg.rgb_green = 183U;
    msg.rgb_blue = 132U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.482545826203;
    tmp_msg_0.lon = 0.413831115148;
    tmp_msg_0.alt = 0.483881293508;
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
    msg.setTimeStamp(0.855581973478);
    msg.setSource(34552U);
    msg.setSourceEntity(225U);
    msg.setDestination(59117U);
    msg.setDestinationEntity(37U);
    msg.id.assign("ATXBQTKRGFKUBTVYVNAYOWANDMMCYQRPCKWUHPHCGEKNCWKRPPXBCHJJKBABEDJBTNDYZAMGZIXUJTZMABOASSXRGKIQLELVRDKWVUXJPWYTEWUJGDTMMDZIVRMXGSKKXRIE");
    msg.feature_type = 98U;
    msg.rgb_red = 234U;
    msg.rgb_green = 39U;
    msg.rgb_blue = 226U;

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
    msg.setTimeStamp(0.774543487689);
    msg.setSource(37991U);
    msg.setSourceEntity(251U);
    msg.setDestination(42200U);
    msg.setDestinationEntity(132U);
    msg.id.assign("YLQMYBUDAARXMAHVPNDTKSNYWBIUQGOQESEPRTTWEVZVWIWSHMMCBTFHMFBDVUHSIJMJRJYRATHCRILCUUAMQJUOFWIKXXNCPIYTURKXZDKKVEIZQFGLVJVKYKTVBGNLXZXOFQOTXPOILVGBIGCHNKPDDNGUDFRDBPRASPBUWEWAISMWLJOYEHXQSJYGHQFEZUJ");
    msg.feature_type = 177U;
    msg.rgb_red = 193U;
    msg.rgb_green = 46U;
    msg.rgb_blue = 107U;

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
    msg.setTimeStamp(0.918845050841);
    msg.setSource(31503U);
    msg.setSourceEntity(173U);
    msg.setDestination(33423U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.821499673146;
    msg.lon = 0.457672291895;
    msg.alt = 0.780393994694;

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
    msg.setTimeStamp(0.551639499642);
    msg.setSource(45999U);
    msg.setSourceEntity(68U);
    msg.setDestination(32845U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.633147813305;
    msg.lon = 0.609496906545;
    msg.alt = 0.791450445897;

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
    msg.setTimeStamp(0.43308041846);
    msg.setSource(61411U);
    msg.setSourceEntity(105U);
    msg.setDestination(39141U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.47772338298;
    msg.lon = 0.577649091821;
    msg.alt = 0.675194068272;

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
    msg.setTimeStamp(0.987729922724);
    msg.setSource(13808U);
    msg.setSourceEntity(107U);
    msg.setDestination(42250U);
    msg.setDestinationEntity(27U);
    msg.type = 153U;
    msg.id.assign("TDGLQBGZVTDCERQFNEKTRWGZAFPOWMKFAZCSSUOBATDGLOWDUDVQEKIIAHQPCJHUBNCUAYTFPVIVXXPMIRELNRZTDSWZCEKJFUAAFUGVRXUBJPSFNW");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 18772U;
    tmp_msg_0.flags = 242U;
    tmp_msg_0.lat = 0.614417087134;
    tmp_msg_0.lon = 0.60816878759;
    tmp_msg_0.start_z = 0.216260678446;
    tmp_msg_0.start_z_units = 250U;
    tmp_msg_0.end_z = 0.715881333683;
    tmp_msg_0.end_z_units = 140U;
    tmp_msg_0.radius = 0.558577266782;
    tmp_msg_0.speed = 0.345482954474;
    tmp_msg_0.speed_units = 161U;
    tmp_msg_0.custom.assign("EWMAGJFDTAWPPPAOBCKCOLMQQRJWQGLZIFAIZKLFQARVCCRBLNIKHLFUBZZFZYSDERXPHDJKHDGSIHVUUNZPXQKDZVHAWIUSUPSRXMWTKMEBTNPQMRKMTV");
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
    msg.setTimeStamp(0.677624341933);
    msg.setSource(5232U);
    msg.setSourceEntity(56U);
    msg.setDestination(25934U);
    msg.setDestinationEntity(157U);
    msg.type = 31U;
    msg.id.assign("VMPAVSVRBSUBJUUAOEFDOCCOPQWMYSXGIBZGXQZEFXBFCGTZSECQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NYRWQXZPBACJHMAOBNMPLUMJGBUGTEQBQHWYQOUSDORZWKFEVCUGWISUFNYPPZBGPFQQDTYVKXPEUTWZDJFYMZDCCXHHKREPXWRVXXQESADQBGVNTHCIDCJDLIJAIRNYOEDKSLXLTVAPHEPHH");
    tmp_msg_0.predicate.assign("QYIAQUUOQMBKRRGCFWBENDFGKDXXJVEHCPWLHLFTUWZCXSKCAPAWJBVTLLNSOWPMBEQPHGOTAJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UVTEDWOQZBOUBJUWUUGTPWLQIXXILMCDUHVBNBZEWKKIFYNZORPRCVZMNHMJBFGQCYHLZFPVNJZLXSIWEBQESMMWGCHPEBTLTGYCBGGSYIOPKVMDTYCRPVJDYAAFADQPTRRGHGUAOCJNWSYRKHQDZIPRAXXREGJOWTFBPBEDF");
    tmp_tmp_msg_0_0.attr_type = 227U;
    tmp_tmp_msg_0_0.min.assign("XEVLXHBFITFDWZLMUKNIJEHNHVEYCRNKZUPPWNEBKDCAEVABJCQKBUOKTQBRSVHMXFQRWKPRMIURXJINOOAHOBNYYJUZCQFDYGMIZVTJJKHASBDVHDHSWRDZLXLIQSAEFPQBPECDJPALVXPSWSZEMLUMOTLXNGCAOILFQGMGYCYRYVNVJWCGWPXSBJURWIATAFFHSZCOIXOBEFLNYJOMUZGMZAOQF");
    tmp_tmp_msg_0_0.max.assign("BXOZCUVOJCVGEWBMIIXVFNQEXAGQKWTLMWDYUSXCTALAWKDIZGNTUCDCOMIVZKAJKSDIKFHZQFHMATBHC");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.546923417177);
    msg.setSource(50107U);
    msg.setSourceEntity(7U);
    msg.setDestination(1185U);
    msg.setDestinationEntity(222U);
    msg.type = 36U;
    msg.id.assign("KNZPKVWQXSIYAPWVNGQKPCAOLLLEEZKDVWDHCEVXJTVBECOCWGJWXIDBQZMJMLTMAFNHBSEQZYYRVHCPIDIYRYEXGUKNJANSGDJBTWADRSHLPHPANICFDMOMUYBHHKUFJTLCFDWOSSQILBFJO");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 164U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("FQOSSZVNYRBTMVHFTVQCWBCTLVLTYEIGRDEYEHHZZJMCHEGBMLZRQZOWLBOUEIARONAKAQOEABGPWYFOTPUIKSFITIOGNSSFQKFKGPWXCSCXYQVJKTOAKDDFPNMGRSDDJINKRIPPJDPYTLLYEVGYHMPGSJHWXBCFJUWEJNXZETNSMGM");
    tmp_tmp_msg_0_0.lat = 0.760956377419;
    tmp_tmp_msg_0_0.lon = 0.0672536667917;
    tmp_tmp_msg_0_0.depth = 0.757587608235;
    tmp_tmp_msg_0_0.query_channel = 199U;
    tmp_tmp_msg_0_0.reply_channel = 113U;
    tmp_tmp_msg_0_0.transponder_delay = 56U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.279459134581);
    msg.setSource(42426U);
    msg.setSourceEntity(219U);
    msg.setDestination(48196U);
    msg.setDestinationEntity(6U);
    msg.localname.assign("XGWOTMQNVPFXLHXDRKSJZFOYTCBMSQDDTNRJXSEQFONEKAAUQSRIHMJIQYGMRZZUGOYXPCJTIUPVPHUSYLGMZKPLRCWVWTFTFZLCHUDGNBJABFZOELABFC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QRGUQQZRZUJPEACOPSCSTGKPSZHXVXYIBFQTLVCMSWXKFROONEHZFFDBCANYPMJIIAXFQEVYKTMWGLRFFBRRNKASELIJ");
    tmp_msg_0.sys_type = 181U;
    tmp_msg_0.owner = 10731U;
    tmp_msg_0.lat = 0.555368159691;
    tmp_msg_0.lon = 0.532936645915;
    tmp_msg_0.height = 0.657130880208;
    tmp_msg_0.services.assign("WAUWIXKMHBXKPJPSEFRVORQBQEIPHWLIKYURBCOTJOCPVBCVIJYRPXLAZOJZCYUATALUECMEPKOLDGNMQVSTYVMNZGJTAOEKZNAWYERROMVNTJD");
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
    msg.setTimeStamp(0.0760575391668);
    msg.setSource(63750U);
    msg.setSourceEntity(224U);
    msg.setDestination(46679U);
    msg.setDestinationEntity(239U);
    msg.localname.assign("SSRWSTCZXWSIHIMUWJEMGQKFANNUQFTRWNWGDQMOMFSWBKPWXPBEFNBXSPMKZDOATRPGBKQZCEVSURVTGYCCNECJUTVNXZXAGPUVONE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TVQHGFKUAOZJXWYABXRZEESRMGZGOATJEXXPMROAIWAIRIWAUKNKEBZSHMIFUFJLWSVDSHFECKGPXXNFBTPICOLORDNTLEWJBDYDTCJVYQ");
    tmp_msg_0.sys_type = 44U;
    tmp_msg_0.owner = 61746U;
    tmp_msg_0.lat = 0.852657777855;
    tmp_msg_0.lon = 0.378880749038;
    tmp_msg_0.height = 0.59234000853;
    tmp_msg_0.services.assign("HUYRGDBUBLNCXHYRAMEATWYJVXKFQJEKSVMCGTUXITLHRPZIDURHYGISLXLDQQJPGUSPYWVQTSYNRIZOSQLKIZXIJFPPQZHSZFWABVESMVVTBKGGNIJFFJCDSMLWUHMAGXYBNNKCDOCDFNMGROZGZGQMHCAE");
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
    msg.setTimeStamp(0.557572681584);
    msg.setSource(8649U);
    msg.setSourceEntity(46U);
    msg.setDestination(50526U);
    msg.setDestinationEntity(127U);
    msg.localname.assign("XUBTWZDWNIVXFANHTZVJWEGATSKOTELXLIAGKDJOZUBBZSDYIXPPQUXECPMFJ");

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
    msg.setTimeStamp(0.465432909504);
    msg.setSource(38656U);
    msg.setSourceEntity(238U);
    msg.setDestination(59313U);
    msg.setDestinationEntity(75U);
    msg.timeline.assign("IYUSOPTLWFGLRKELLPEYALYHTUTGPRVZYNRSICJXWGFZMSYFWKEXSTRZQRMDLVZANIWOEAPONJKQDJGSOBTOABFYFYPFGKCCUJPXQRPIFDXANHISMZMXMXUKVOIWJBLLOIANHVUGDLINGHZLMYSYEWFCJTCUUBTBHXQJXEMDSMVEDKQXGPCGKABBYNAMEQWHIVTZPQORUHDNECDWBSQTFEQJPOZICCAHKZRGW");
    msg.predicate.assign("MAJQFFOTMIDRHULBLQRVKJNOASWFQGSKGPMAYPPPVBVMVCNWTENEFBXUPDXFXCMHMQZPUNSXYYTFSIDRRMZJPNWNNXRQDIYMSXJTXHURYZGHVAOQTBDQJDPBFKZFISDEKSZJQNLLBBKZAVHWJQZKIVUOLEUBMGCWBOJXYCOIJCDQYSGVLXCAWHSHEFTWJEKGUAHUTRNTGLEVOUYIWGZHKKEFCOEOCDANGHWWRICYRCGIZLSDROKIUM");
    msg.attributes.assign("CQGINROBKBQTVWQCJCAHXWXBTMUBULOPYKVOOGABDV");

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
    msg.setTimeStamp(0.486790642497);
    msg.setSource(38564U);
    msg.setSourceEntity(70U);
    msg.setDestination(30488U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("KGPYTXSXAKFSXUAJEPVKVAWIDLDJJTHMUNNAVXDIVHWLVHJWCQZQOYDOFVTXCICQSYXRGFWPZZEZONWKBCGFTJLQDHMEMTURLESPGRBLJNUXOZQICSRKWGJSECBYFLORZNXVNZYLWEYOYPHARLYQXVSDWTNMACBIVALKIRAZSKMEGJJBSKQTOIHKHRMBMEADXTHDIRERNGUWDPZMQFNHBPLKTWOCUFQHBJNUSGMUIODUTGUMCFIFGZQYBP");
    msg.predicate.assign("XENXSHYJYSAKLMBDCSVWLDDVHBZFFTDTREEANIQKZCCXWELYHKJOCJUUVNVVNRVCGQEFLZDTOL");
    msg.attributes.assign("UTMIVBFSEZSVBATMWNLLYTBPETCWPGTEBHORRXFPKM");

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
    msg.setTimeStamp(0.875674873121);
    msg.setSource(4268U);
    msg.setSourceEntity(26U);
    msg.setDestination(26123U);
    msg.setDestinationEntity(190U);
    msg.timeline.assign("UEQFTFWSEYCIWZBHZDXNPDXLTUHVCONMXHGJTSMFQIIAMFSNVIZYOUWOTWNOBOQKVBGLYQWEYLLUEDYVJKGJEXJ");
    msg.predicate.assign("DJBCSIHVJEEWFXEJQQCHFUDBPAROWMEZCCVAECREYWEHZRGOYZRUDQCNPKNQMNNETWPDPBUTTPVYNQYKRRHKGJDMVRINPILZMFUTMQHKALKOFASFTMNXZVCZPLMQCYBNLAPVWRINSIXOOLJLJCDGKFXMDXAXYEUPULMYXAIJHNOQHZGXZHVBKTDHSQWYGVSFHWQFWTGSTEIGIWPBOVJKLODGOIISGXAWKULBCZTUBJFDS");
    msg.attributes.assign("WTJUYJVLFOYAIWNOEOUXUSJUZFHADDPKNWUDXVABEZCKSEQDYRNXXLFOBRSGSTIDZHYMQOQJVSHRWZNPRLUTZRTLAXGLUMAONWAISIIICWMNEYK");

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
    msg.setTimeStamp(0.307682709284);
    msg.setSource(10930U);
    msg.setSourceEntity(152U);
    msg.setDestination(29636U);
    msg.setDestinationEntity(156U);
    msg.command = 122U;
    msg.goal_id.assign("RLLRCSAIXQHFLYRDDHZFZEIGUYWINJJOZFEPCASWMNXQNCDYNWYRHJRBWDZQOKURBZTKBSYCDYIFFJUOGYQVYKVTKSAMAQQKOHXPZXWVJUNHOEMXGTCIITJWGVJGFHTANZLXVJPPJEXMBDIURE");
    msg.goal_xml.assign("WVZLBSENIFTMRYJYHIUDAOVGOQPMCPLKYUMXOITZOVQALMLZAOXCEFSIYZTUTDCHNKHZXMDRSQFUAKOQYBFIFGNWSVRYGCIWGACHFDKTNAVFSLBRQJQWHRLXEEJKUGIDPJWGRVCETCDMGJJAWSOYZKDBHDKPLQVXNNMGISCMCXETSWXPLVQUKBBEMEJEGHXZKWNMROQHFAXUJNWVORQTJHXUPW");

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
    msg.setTimeStamp(0.975788111264);
    msg.setSource(35212U);
    msg.setSourceEntity(236U);
    msg.setDestination(1388U);
    msg.setDestinationEntity(67U);
    msg.command = 241U;
    msg.goal_id.assign("ZIFWNXJILRXFFWGQVCYMBPOPGJVALQIKRWSOAPM");
    msg.goal_xml.assign("YXDWQEJVFMJVCQXZOQPCJJKLIDLRTJCEAQKUTQSCBNVBNBLNENLRUEPCRFRYIPHKISTNRGGNRPLVZXGRFHJOWYVKCYHKURADEEQTUHVIDIPSFTEXSXTWYWLLAKHJLWCBUSOGTMNYXGYOMCAWWIQUKONBIZFMURWHSAUHSBBMEZYIOUDANJQANXGMUMTHFVMXPBTAQOAPCSZZXDZWFOMLXZZJIVWZYFQSODDDBB");

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
    msg.setTimeStamp(0.395816216333);
    msg.setSource(23019U);
    msg.setSourceEntity(189U);
    msg.setDestination(1968U);
    msg.setDestinationEntity(17U);
    msg.command = 154U;
    msg.goal_id.assign("JWLSCQRSOKRVEMHBKVAVREJXPPFOKUGDBCYPAVRONBRFKTVIMAUMBTFWHEWQAYLSNMRQFEYTJOYWGSVXYZVGPAXTXFCYGMEDJTOIPNWJODHKBMUIHXPCYMLNIBRLCDHXIRQQENGZGQFXJDLNTVZMICUYHSZKLFAHZSRDBZC");
    msg.goal_xml.assign("YHTCIIZZLZGSZXRYHINMCYCDHDONOYLXANFOGSDXTJFVPKPMBDOWMPRVTUKAFZVQXCRVISVCIOMGUQZTSPIAZ");

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
    msg.setTimeStamp(0.477584065936);
    msg.setSource(64488U);
    msg.setSourceEntity(187U);
    msg.setDestination(58420U);
    msg.setDestinationEntity(232U);
    msg.op = 248U;
    msg.goal_id.assign("NXHKQGWMNDVXPN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BFVIOHUOTMVP");
    tmp_msg_0.predicate.assign("ZCSAAELHPZMEFKUREGENELNSDFFXDSSHKOEMQUVBSHFEYUWCVCGBXZQXLNBKQJGQGRVNFKKAJPZUYBTVQTWJOJJOJXXNOSHMWYHZHKDMCXJC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZKJPPTGWHEJVXQGXAYKZFEGUZBWLNQUBRWKJXINBIXPEARZLVQJYUMSLWCSGKKWUNWTPLOHLDQHIGXAJONEGDZCSBFMXFKVAUSVTRYJMMTHFOMYUBDOJRTYHCZXHM");
    tmp_tmp_msg_0_0.attr_type = 103U;
    tmp_tmp_msg_0_0.min.assign("HCSSILPCZZIXQQRQFXHLUTEWZTOZXHFEVXMXPXRTNSWCEFFQDZSHKULMHHTVYSXJEKOZHNDX");
    tmp_tmp_msg_0_0.max.assign("MAMTBOSBUFJZPGLCIPZGODG");
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
    msg.setTimeStamp(0.76413925782);
    msg.setSource(23604U);
    msg.setSourceEntity(254U);
    msg.setDestination(32306U);
    msg.setDestinationEntity(204U);
    msg.op = 33U;
    msg.goal_id.assign("NCFUUKZUOPTHEXSWRFSOSEKAEPEGQLICIUCGTYHZFZYFVZUOJFVGNULVZSQBIBSESQMKODJZFRMOXQAYTGWGQYZDPXQPZLPJXPJVWBTVQWAUFSCMIMCHINJYVLMJY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TTMTEPHGIWOMRWCLPFNGBGCKWJAICXDVCXDPUPFXSFNSBWKXBRFROMEZWSLRIXQRRNLLYCNSYEQWZOCXZUMDZHBFTVRHABRJJZKXGBQJTDRENQAGKKCUAHTBAWDIMFETUTOLALHODISDUKBXWPGNUCPTZOYVBQIYLNMVEIRLFNJYEVWMYPVXCQPQUKUKJVHLMOPZTAISYHGZEDZNUMOKPAJOQQLAIMSJSXOEFBHFUHGFVGJDCQ");
    tmp_msg_0.predicate.assign("KDHAFDAUTGIKXHNUCJMSDLRMTJUVWPRSTSLEEARFOUMAVZLGVZRJPZWQFCMZEINGSZBKBFHPDNKMGIXYWYODCDUTMSEZHQRBGCEKVOHSVRXRWYTESBKZAN");
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
    msg.setTimeStamp(0.943821142124);
    msg.setSource(19369U);
    msg.setSourceEntity(49U);
    msg.setDestination(1242U);
    msg.setDestinationEntity(68U);
    msg.op = 166U;
    msg.goal_id.assign("ZEZQKAVDWYPWRMLBIHXDFCETMUAAWUVQUKKOGBBMLGFZFWBKODSQVPNEBLRBFXJOLERDHHEGDLYJFHESHXFTFLXUGJTVRJNGP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TMBQNVNUGLOTBELIQYPWLORRXDETSVRSDGPRVJYMQJZXBWTPDCJUMZBOPVJKMKAWCKAHINRGLECMGYXVSEPKNAVICJKKTUDOVGYYDSPVFPQUHACHBHOQZMFVJWRNLFJKMZSCDEBFHWSFONQZLGSBIFQOXIMUMNEPBSWADSALIHCHCLUATXAXRGOWWQGNXDXZUVFFFZNINRAGUHIAGZOYOMCJFZIJTYERHWLTCTBIHWUKDLZKEJU");
    tmp_msg_0.predicate.assign("FYVPQCPKXPUDHMJKQEYEIRJLQSQXFLMVPQAAXBSRVKGEBKNDATPNCPIVPOKINDBTSNBAPEOUBZZHBTAZZOSYSVUGUGTWGJYLOYLMXOPLTNXWESZYFMXQFMOLYKTWHUMAWCKVCRWRIHLPZZSIMHIZDMUHHBJIJSMUJTSGXRCEROBATJWVQFTWGSGRQYLDNEZHNRUCEFOWWLZMCOUGDJCDRQRNIFJNDIXNVBKYACJOUXAQGHXVFDE");
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
    msg.setTimeStamp(0.564558303628);
    msg.setSource(42243U);
    msg.setSourceEntity(87U);
    msg.setDestination(33963U);
    msg.setDestinationEntity(34U);
    msg.name.assign("ZXCNYFBZKESDPNADZQAMSIHICUHHRMKDMG");
    msg.attr_type = 40U;
    msg.min.assign("NSWWUVMRDIJLFSPAQMPUBPICRVTARODSEPBQRM");
    msg.max.assign("DHJKDZSKTUMIZFOQWKECCSSVCDLVPPDWLONPSMRZHNHBLTCHRXCTFXFOQNRCWTCKMVAHYDUQLDFWWPKBZSAPFVDOMMCZAFBJYIBGPNRNPULVUZPMWEKRXUJPBYXSBLEENMBTIIMGUXDTJRQKJGSGSYTWWRIFELBXOOWGEZKOATRQIAKIXMYEIXLUGUXJ");

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
    msg.setTimeStamp(0.0890422010196);
    msg.setSource(38898U);
    msg.setSourceEntity(51U);
    msg.setDestination(48235U);
    msg.setDestinationEntity(237U);
    msg.name.assign("ZXAWAAPCMDFPTUSYOIFVGRGFJQJETCZSCYQUBWBGAGDIGFDRZQZIXOCUQTIZPJWTWVNRVLKFWCRMLHJEZMKUKRTPKUYUVJHUSJBIQUEYFZKTOSXMNZLPXEBREMWTOFBNKQLBLDHBCDZSTHRGXV");
    msg.attr_type = 1U;
    msg.min.assign("RIVBYABBFXEEQWOHHJNVDOHMKNBHHCECBHOWLFHGAGFZCENUONVXLUMIIIFFQSZDJGTWLYTKDEIRQQIFMGFAQAWPKJBXTWGDAPZASUMZHQBXMESWWADZYCAVKPZSAJTOLRUXPTMTRMULYXBZITMKQTZDFBVVZUMNVNEXGOOWVMWGAPCIFDOUSRTVKNYYSVWXOKEJLGPINJZQFLHKUQR");
    msg.max.assign("TZDUQCKNMUETEOKTPMHFSTVCZARFZLURNDBVXVBWTOZLOZBDGIXXLPDGJAQISSHWHYWVMYGXQIHUSAVQUPWCKKPCMLTMBERVAIXLTGGBACRJFCFDQLSPQOKODRQDLXNKLIFJPEFSWPACSOEGIJBRJMWZDTXRZOMFEBEWODXMUNQCJGOAECHABTJTJILURRKPYE");

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
    msg.setTimeStamp(0.897538991811);
    msg.setSource(37339U);
    msg.setSourceEntity(224U);
    msg.setDestination(15714U);
    msg.setDestinationEntity(194U);
    msg.name.assign("QKDNNICXNSTOKYEJOZDLDPTYMPFZCLNUSMBWUZQVZHPTKIGCAGHAORSCBBDVHNEUQVWFEYYUMMTPCUYHCVHXGFACMRKSAHILQRJVQXXZQBPRAZDNNOYISUFDBMBEKRHEJFXWQIHJUQQWVYBWUVRDYJGHRGFWTLFPSEWPOOPTPABMTIFAEJSJGXDRNWNPKLCSGGZVUAETLILNAMDKDVYSEZWWZKMVIOLFQGCOIMBUXLKBKZTTCXJHOEJYXGA");
    msg.attr_type = 201U;
    msg.min.assign("ERGQBZGKFCPYYHJFQJNQNRGEPXRXOMFTKZAYKWZCLDZCUUUVLMQMTKZENBIWCZPSVXMOASHBUEUDKGVYNPRMNMJARNWGWWXAVBWPUJYOLGE");
    msg.max.assign("WTUUNUVEGBHMUACMJYDPVUSDLSWXFFCMQLGNEBYLYFACQMCMBVCODYKICEDTWXLZKKUQCRWOZZIJQWLOREFZAROBRQTTLGZZGRUUSRQFYUOCEIHXIJFWLPHPHCJNELJTXAMSJEISVCZFQHFGQIDRGNIFLSYSJIPZMRBNYIH");

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
    msg.setTimeStamp(0.359137553691);
    msg.setSource(44395U);
    msg.setSourceEntity(83U);
    msg.setDestination(53025U);
    msg.setDestinationEntity(185U);
    msg.timeline.assign("OJSPUXSQPFYRWVGUZADIQIOLEHKOVFBUGGACZBUSJAFXBSIMPCEVSEF");
    msg.predicate.assign("UFUJCEJVXAWKBPHNTLXASQEYDLGTGDSUVFPDPNOZQPZKGYWNTKFUJZCKERNEEQRLNRXQCPCNGYBJLTTRESKOMOFVCGSANASQYELGIOYBBKCQTMAMJEKULOVMOSULHAPQOHXMQVIPUWBUNJORFKSCHJUJZXWTZYLFBIYFIBNRMFDMZAAIXPHIFRWRCZFIKCSXHLRSDVDIVTBHXZYWBHHBEVWDGJGTY");

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
    msg.setTimeStamp(0.802369593128);
    msg.setSource(61168U);
    msg.setSourceEntity(164U);
    msg.setDestination(11784U);
    msg.setDestinationEntity(48U);
    msg.timeline.assign("XUWKGEVVVHZBKJNKFEBZEAPOACYPBLUQLQFPJDWFCXBJGHLJYOERKUSXPIEZJTANAQSBHQHRDSUSIBYGTXXMFFKSVYHOQOYSRHXDUTYATDEXEBPTXVCWCELLAGAZMXGFWZMIGVAQDMNECPHHGWCUHKHMIPOQQGNZWUQMVNNOOCRGJJVRZNJKDFWOI");
    msg.predicate.assign("TDSLMPNZMQLDYEHHUXNFHKQUZHLOGGJRWXCLGJEAYDWPOLKUSJFKCHJTJUPUQKNRYZYVRLFOLXKDKFKWIPSVIFGQZL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TJZCLZXVSKRUEOIGVFEGVPACGPCUEFJHWSYIZILIWXDVNHHLATMGRM");
    tmp_msg_0.attr_type = 40U;
    tmp_msg_0.min.assign("GJWGNGPPUWSBIGQAZMERDLGKYNXWVSFDYVSIUUASODLYFXFFRQWAVZHVKFTLFWMYPYMR");
    tmp_msg_0.max.assign("UASHQRMIGLKGNCSESMEWNSFYDETYGIYFZINJPZGWQAESPDAYYRIZYQBXHURPNLLHFDFTCFBYOPZWYNRSCXPJDVXXAPKLWJTRCQLHCUMGSOPKKQLOJWVEGUBPWJTADCLHQNVMIAMGNSDEKRYMKXHTQBLDPHIIXDKRZHEHUHVMYNCOEAOQISTJTFOLWPFUAEABIMMKGJDWBLU");
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
    msg.setTimeStamp(0.427143101993);
    msg.setSource(45222U);
    msg.setSourceEntity(163U);
    msg.setDestination(37014U);
    msg.setDestinationEntity(16U);
    msg.timeline.assign("QMKNEPDZEAYVFPKTCTHVQHTGBOMVQVEEEUROTLHHUUFQESPRZKNRYXFDBZKWPWGJSTQNZAACVMAUNPLSJXOZBBSOLBQCICVHZGCTNAMXHFJULJLJQXMRTDSQHDMFFVPYZDYGNWHXODOEGSIBBKCLIXQUOVTJANSVFMCGAEYPIILIIX");
    msg.predicate.assign("DDKGBIHFTXHZUUQSQXJALINSNWRMYCTSMDFLBFHLWCMYXFFVRWZYJHRDROPMMESBKZAZNSTMMTJSQJQNRSBCIULOSETEPZGONXTWAVGIFZIGLRPPUBAMIYKFWZKWNBHUCVGABNEBJLGOECYYGVOTLGGWQMUDXPVTRUOVWFEAYIPZTLUHKOKPRFAFSYCSYIJOJZVOQJXKAINDENHDEHWLRGLC");

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
    msg.setTimeStamp(0.590090459795);
    msg.setSource(14346U);
    msg.setSourceEntity(154U);
    msg.setDestination(50464U);
    msg.setDestinationEntity(219U);
    msg.reactor.assign("BWGYIUGRGJCCCKUIMBAUXIJESEDYQRPDOYGKZJPOLJYGAFXHMVLWSKJOTEVUSFHQPMZPTNTONCZNTCEPFHEZIMTQXKDVEOWZQQHIYWSTUEDXRSINJYCJUPYXWBZHVSXLBRSAKBBRHFEAHPZGQRWNCAZAMRYQDSAHTHRLGJGMBDDBFPUPCMQTOMVQODCFNBIALNKLIZNLWXYKWLLKUVGXOMBASUUFVJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LRHJOMVQQDBDRXBTXVSAYAROYWFLMZYQDALIWNUSVDHQZLVLZHBVKCPIFGVBZEDLSCNGHCMEEGMSDWAJPNEIIEAGQGYFWQXFISZQMZPOWKMAJWEJUGIBZEMCHSVBHWFQSCYTXHRXBCSJKZHKCZUKJQXTIOGEULAMIRAXOTYMPSRUCCKNVXTUUTDKNNEWRYAYLQJLXRYFAUVIPPYNMGJEVCNRXOONPGPTPWDTPTGFWHZBFJ");
    tmp_msg_0.predicate.assign("MNAIKXMECQYDVGDQVHWWOUPQHVUOMJPGZDPTFWQYTFUMWBXJERUWKZJWOQAFESANDIMBDIYRWLFFHHVQNCLCATNLONAGHTYMNGHRFJVYZKKSKGXPHFLTWKQWBRQFICIBCZTYMTRXYDPGDOEOYTAS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GUVTJDPZWETCIZBAYDPKOIOLAQELLXAVVZMPNMEUWRCGHAJEKZLBLIWJSRLGXLYXVMNVKDXSOKQWRPHAZIHHOYJXKKVGQQMRCRBSHNRUHSBQVAZIAWHNPGIEEDVFYQG");
    tmp_tmp_msg_0_0.attr_type = 241U;
    tmp_tmp_msg_0_0.min.assign("EGEJVZRDVOTGAWJVMVUJLDJDRIOSXRIBJHZHXXEHUVFKNOFSAMHSANWGRQGTRCBNRUMURXJUJALQFFBAKWMFOPGNVNHBZOWPYITGFZMSKKIFVQCBYYQIKHLNXTYXEQBCZXISINUSSOEDYADJSZOXLB");
    tmp_tmp_msg_0_0.max.assign("BTAGPHKQYMDEARGAJHXYXOTUSWZTYPDGQQSEIZNEGIAUQSFIYZLVIJMXAFDQKOBIRLYJMCUBGDCEBXXNQUWCLEFJERWNZZFSSVPJLFKOUFQOLGOPXTHIYZBCLDWHMJX");
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
    msg.setTimeStamp(0.881848311688);
    msg.setSource(3856U);
    msg.setSourceEntity(236U);
    msg.setDestination(55806U);
    msg.setDestinationEntity(102U);
    msg.reactor.assign("MFNVHAZIBEWBCCUXNYZRYKIIGITONSKWMDDQEPOFHQZSWAZCBPXPOLXMQQMZNCUGGDOAVRBVFGLNNZFKHGYMUVZQYPHEWPIGMDKNSKLTAADWOTADXVPPHALURTCKKQUWZSJJMHCGDXTSUJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LLIKYGRITHWLTSGKIUBVVUYHBDOEPAVNEWIDJQPAKMRCOMLTYZSZRLISEQFRJXZGCBMQHXOZ");
    tmp_msg_0.predicate.assign("EXILYQBCLBYAXOHQKWSJVASJCYPMYSIROKSKXGXCOKCVYGTGLNXIWJAWMOZMTFVHEVQNCSQUABPRWFLNMPGZTZHKOBREFFYCFDRTUUDEBKLYZIIHLQBMBOWXAMOTKVONYABUXWNUVPKIZNEOFRURHZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AZYKDZAKRWFVBCQACXVGITACTGBDHRBRXNFCSODTPPJYSWMEHSGCADKNIUPHESOVKQOXBMVFNVRCSPXZEJZFNINLMQOBESOTUNYIPNPJYHONBRAAICQXMXKEQIWUT");
    tmp_tmp_msg_0_0.attr_type = 79U;
    tmp_tmp_msg_0_0.min.assign("TKVBCDATLYMADDPSZFABFCPEAJMZYEZAJTSTNPMHCJWFQVVJWUHRARFCLZYKUBGHEHPWJTGHNICUKXSNVWROS");
    tmp_tmp_msg_0_0.max.assign("XJWASIUZCUVNOEWUTIKSPSDMOQ");
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
    msg.setTimeStamp(0.326554356229);
    msg.setSource(60139U);
    msg.setSourceEntity(231U);
    msg.setDestination(28810U);
    msg.setDestinationEntity(19U);
    msg.reactor.assign("ODDXDRNUDAJVQSCWPBJRRWXTGJNYRBYOOPYIMKLROGZVWTZLKANWWHUBKWSWVQAEFAFUHAHNDRYEKGNBIXGFJLDGLHHORXCMFPPIQKMCZEPCLSYSKVXTMCMSXCNJXWZJKUYLBIZSPZSJCSGPXVUAEUFEPPYHJTBBLVQDZIMTFKQPYNEHICCVUBCFAQRFNULIHEMKWMOA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZSAQMZSFMZWTRYTCALPJYFVUJLEIOBGASVRUQSDCDGAGAVTIKBABUMFJHNUHWUJEEITSCKVBPFDSCGZOQENFDNKVOGCKUNYWPSGFAIONCSXPQMTBODCBTWRHQRKXWXXIUBKXQCIZZAFCWDUWVPYOHHPVZXMGEZUMNOOKMNTUNEELRMDKYLZOLKRBAHDWQDLXHJRVTHQXQYHWXFYIPTRGJMPNL");
    tmp_msg_0.predicate.assign("FENLAFBZOABBSARTPBSRQBHGCVUCIACVIKUQPQTNXUZQZGAYJTAJOPHLOESSLLIBMWGDUCWJHVEUIELVNZHPGLKOFKXQEWTHVDONSLLXVZDUTMNYSGXIJSQMDKKNCOFMKNYGDFGITVKVRHD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QHORVAVOSKESWDACYUKEFXOSZTRWUWTIRSJMOEHDDKGALQIFLGECQPIXCHIYSEYFKNDACIPGXLYHZQSQOIRBKXOIUKNMNBTHNJVQDUOLZGGSXGPVYZOWYWHWAMRWLCZNSMRYBWXZJSMVYFMPVUTCNLIZBHJTQBBVTKLPIJFDZEGUXYEBCKDOHRLRMCUJTXEQAJDFPAMNPYTVCKKDDLVGTZH");
    tmp_tmp_msg_0_0.attr_type = 119U;
    tmp_tmp_msg_0_0.min.assign("WOMVGZRFDEQDWQCSPJLUBEJRJOYVFSMLXTVDDOANDWCMNZLNIROBYJVEPODWVCPWMVKGBZXYVRRYITGRJLENXTHGTGPHANGWSUKSCFSXDUCJXKVXMEFZKQYOFYHSSIRTEKERQNALCDOAUFPQWYQZZTCKBJBPENHADKPUPBXLKIFHFGUCOUQISTUSHNTGOWLMBMTQMSLWHYHMHNIUJMAILKVJWFXQYEVAZRZIDEH");
    tmp_tmp_msg_0_0.max.assign("NPYPJYZDUZOSBMIZXPOUTLHJVGOMIRHKLGTIHQDZKEPFTJKABBRSVKLIDCNEDHFNZQCVRNTXJUOQUKOZFWLQSWBYLCOIMXCWDMRDOBFRZOINWZGYEPUSXNBOIUAPYGCPXNELPHPYNCGGDASAJEJQJLLEEFHKLHHXMBFMQKYTQIBUAXJSVPAHUDCVFSRGDFHWXLKTXQGWRETESFVUIMZGJQVVRFIKTABJTNVSBKCEMWUWRAMDCA");
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
    IMC::VideoData msg;
    msg.setTimeStamp(0.402245997643);
    msg.setSource(15622U);
    msg.setSourceEntity(88U);
    msg.setDestination(62300U);
    msg.setDestinationEntity(185U);
    msg.id = 56U;
    msg.width = 44488U;
    msg.height = 55716U;
    msg.widthstep = 40520U;
    msg.channels = 15U;
    msg.depth = 89U;
    msg.finaldata = 73U;
    const char tmp_msg_0[] = {-86, 96, 122, -90, 106, 108, 38, -106, 60, -38, 82, -113, 77, -45, 84, 91, 111, -44, -101, 105, -65, 33, -45, 63, -105, -117, -121, 33, -42, 72, 109, -69, -104, 26, -105, 104, 108, -58, 26, -51, 86, 18, -75, -80, -94, 110, 40, -94, 125, 41, 66, -24, 105, -103, -97, 37, 104, 104, 2, -73, -19, 5, 113, 108, -73, 57, -21, -51, -35, -78, 65, 1, 75, 112, -106, 60, 92, 56, 111, -104, 12, -74, 43, -16, 69, 63, 32, -121, -2, -83, -106, 2, 41, -121, 95, 80, -40, -9, -36, -39, -51, 123, -38, -55, -64, 83, 13, -120, -124, -15, -89, 79, -112, -20, 98, 97, 107, 92, -112, -72, -10, 48, 57, 77, 44, 0, 84, 100, -124, -66, -61, -105, -72, 71, -71, 47, -63, 84, -14, -44, -120, -105, -7, 113, 119, -55, 76, -36, -20, -78, 40, 104, -26, 44, 67, -59, -120, -121, 33, 54, 93, -95, 104, -94, 90, -23, 97, -1, -105, 65, -19, -54, 116, 76, -81, 54, 0, -110, -88, 67, 41, 63, 76, 67, -16, -93, -115, 61, -16, 100, -116, -48, -112, 77, -36, -10, -1, 72, 6, 93, -9, -110, 41, -9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.875887834029);
    msg.setSource(39375U);
    msg.setSourceEntity(82U);
    msg.setDestination(36748U);
    msg.setDestinationEntity(111U);
    msg.id = 236U;
    msg.width = 5440U;
    msg.height = 42021U;
    msg.widthstep = 42096U;
    msg.channels = 217U;
    msg.depth = 9U;
    msg.finaldata = 42U;
    const char tmp_msg_0[] = {-1, 37, -95, 79, -36, 104, 61, -126, -41, 59, 20, 69, -96, 5, 126, 66, 82, 77, 121, 74, 81, 83, -121, 25, 10, 27, 87, -97, 118, 101, 117, 9, 13, -123, 46, 6, 125, 89, -29, -104, 96, -11, 2, 57, 102, -50, -5, -80, -103, -13, 81, 12, 116, 29, 6, 32, 57, -92, 103, -74, 92, 80, 84, 17, -15, 63, 9, 102, 35, 23, 85, -76, -2, 75, -14, -106, 124, 6, 11, 47, 59, -49, 86, 106, -93, -56, -11, -109, 73, 40, -118, 45, 111, -47, -31, 83, 68, -123, 57, -95, -1, -124, 2, -69, -89, -86, -120, -21, 20, 38, 34, -107, 92, -74, -48, -109, 23, 88, -42, -4, -92, 75, -109, 72, -112, 88, 62, -36, 119, 19, -11, 108, 21, 43, 69, -94, 5, -4, 37, 19, -65, -90, -74, 75, 67, 85, -11, 84, -127, -98, -78, -100, -80, -99, 66, 95, 81, 42, -98, 113, 57, -72, 66};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.314593159105);
    msg.setSource(56412U);
    msg.setSourceEntity(124U);
    msg.setDestination(3331U);
    msg.setDestinationEntity(52U);
    msg.id = 21U;
    msg.width = 39321U;
    msg.height = 56610U;
    msg.widthstep = 60798U;
    msg.channels = 19U;
    msg.depth = 133U;
    msg.finaldata = 181U;
    const char tmp_msg_0[] = {-56, 95, -78, 75, -6, 60, -110, -66, -109, -24, 121, 126, 31, 49, -40, 51, -39, -46, 26, -105, -21, -30, 120, 46, 84};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.330780449527);
    msg.setSource(906U);
    msg.setSourceEntity(62U);
    msg.setDestination(64874U);
    msg.setDestinationEntity(117U);
    msg.width = 64113U;
    msg.height = 42008U;
    msg.channels = 209U;
    msg.depth = 66U;
    const char tmp_msg_0[] = {110, -27, 59, 13, 2, 91, -34, 96, -61, -84, 82, 11, 96, -34, 111, -50, -94, -101, 39, 16, -80, -15, -111, -83, 104, -92, 24, 16, 122, 84, -33, 108, 111, 22, -22, -71, -55, 8, -97, 108, -21, -109, 84, -120, 39, 15, -22, 106, -25, 97, -103, -86, -99, 115, 24, -119, 53, 86, 51, -40, -46, -46, 125, -92, 120, -79, -22, -43, 8, -81, 61, 92, 40, -43, -87, -65, 110, -107, 95, -67, -25, 90, -4, -68, -114, -37, -88, 99, 57, 89, 50, 48, 16, 112, -11, -81, 56, -83, -40, -123, -115, 60, -124, -19};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.374305048078);
    msg.setSource(65006U);
    msg.setSourceEntity(185U);
    msg.setDestination(25766U);
    msg.setDestinationEntity(139U);
    msg.width = 33279U;
    msg.height = 23437U;
    msg.channels = 203U;
    msg.depth = 129U;
    const char tmp_msg_0[] = {-114, 95, 61, -33, -14, 11, -126, 71, 3, 38, -60, 57, 123, 72, -118, -7, 59, 114, -39, 120, 75, -67, -84, -22, 55, 93, -84, -112, 117, 93, -27, 48, 39, -31, -32, 90, 87, 5, 28, 64, 39, 60, -69, -78, -9, -12, -41, -32, -73, 123, -66, -25, 119, -31, 80, 80, 122, -57, -31, 82, -42, -30, -110, -15, 97, 17, 23, -78, 67, 115, -93, -48, 34, -2, -92, -123, -83, -41, -86, -9, 73, 48, 99, 85, -20, -95, -80, 56, -54, 20, 62, 39, 16, 54, 50, -122, 86, 29, -105, 38, 83, -6, 19, -32, 47, -11, -83, 104, 113, 49, 12, 110, 35, -55, -86, 77, 116, 119, 51, 113, 69, 20, -53, 33, 11, -73, -116, -122, -111, -112, -45, 91, -97, -93, 57, 24, 106, 30, 114, -18, -20, 49, 33, 25, -62, 61, -81, -69, 70, 33, -8, -28, -128, 124, 39, 21, 23, 6, 63, -98, -106, 48, 97, -58, 106, 8, 84, -122, 2, 11, 115, 123, -98, 19, -112, -115, -3, 82, -105, -121, 57, -56, -22, -104, 78, -94, 38, -69, -118, 9, 112, 93, -99, 94, 21, 54, 96, -24, -4, 101, -79, -21, -116, -102, -45, 41, -70, -81, 91, -43, -51, -17, -19, 33, 90, -95, 111, -65, -60, -118, -8, 75, 78, 47, -78};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.929265376204);
    msg.setSource(6672U);
    msg.setSourceEntity(73U);
    msg.setDestination(10583U);
    msg.setDestinationEntity(219U);
    msg.width = 14327U;
    msg.height = 3676U;
    msg.channels = 212U;
    msg.depth = 234U;
    const char tmp_msg_0[] = {-75, 122, -116, 106, 125, 22, 10, -113, 126, -90, 124, -125, 24, 113, -75, 96};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.785011225093);
    msg.setSource(6049U);
    msg.setSourceEntity(81U);
    msg.setDestination(35515U);
    msg.setDestinationEntity(190U);
    msg.frameid = 158U;
    const char tmp_msg_0[] = {5, -91, 114, 42, -3, -97, 68, 9, -101, -55, -117, -64, 18, 112, -109, 49, 70, -5, 44, -20, -92, -82, 80, 108, 123, 91, 32, -42, 106, 19, 8, -13, -31, 45, -11, 13, 85, 23, 78, -59, 91, 41, -87, 16, 41, -117, 109, -27, -37, -62, 1, 114, 82, 115, 16, 1, 84, -11, -123, 98, 80, 110, -34, -51, -38, -128, 110, 16, 81, -24, 25, -18, 60, 10, -57, 104, 84, 107, -58, -54, 122, -103, 53, -80, -98, -49, 49, 22, 7, -55, 30, -56, 53, 25, -112, -45, -99, 15, 66, -59, -42, 1, 93, 51, 22, 6, -76, 62, 6, 10, -60, -85, 19, -19, -113, -127, -41, -116, 35, 5, -31, 50, 83, 11, -33, -50, -82, -20, -109, -49, -47, -74, -36, 20, 17, -62, -114, -16, -123, -111, 47, 0, 50, -79, 35, 38, -82, -108, -55, 31, -76, -53, -48, -33, 60, -101, 72, 28, -39, 28, -11, -93, -37, -54, -52, 113, 25, 20, 8, 107, -54, 61, -118, -8, 20, -95, -117, 36, -93, -128, -41, -76, 112, 64, 15, -96, 14, 71, -84, 40, -43, -62, -40, 18, 67, -3, -107, 65, 31, -85, -59, -19, 31, 72, 36, 97, 51, 57, 121, -77, 9, -116, 51, 112, 94, -44, -126, -66, -111, 116, 49, -20, -6, 87, -116, -125, -53, 96, 114, -10, -81, 50, -94, -38, -128, -7, 60};
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
    msg.setTimeStamp(0.411299801352);
    msg.setSource(43496U);
    msg.setSourceEntity(166U);
    msg.setDestination(42437U);
    msg.setDestinationEntity(151U);
    msg.frameid = 202U;
    const char tmp_msg_0[] = {43, 116, 82, -128, 3, 40, -94, 20, -44, 26, -37, 66, -38, 35, -81, -38, -54, -75, 39, -107, 57, 63, 29, 47, -76, 36, 34, -12, 9, -42, 115, -21, 17, -64, -107};
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
    msg.setTimeStamp(0.32680832801);
    msg.setSource(9348U);
    msg.setSourceEntity(251U);
    msg.setDestination(34567U);
    msg.setDestinationEntity(89U);
    msg.frameid = 95U;
    const char tmp_msg_0[] = {106, 35, 8, 4, -35, -36, 119, 73, 8, -99, 98, 99, -77, 30, 105, 19, 92, 93, 90, 111, 123, 108, -118, -37, 88, 122, 122, 51, 116, 2, -22, 113, 6, 33, 16, -3, 4, 98, -64, 21, -84, 7, -128, -64, -128, -50, 126, -48, -8, -15, 54, -80, 65, 77};
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
    msg.setTimeStamp(0.755450500609);
    msg.setSource(34514U);
    msg.setSourceEntity(83U);
    msg.setDestination(17526U);
    msg.setDestinationEntity(31U);
    msg.fps = 169U;
    msg.quality = 43U;
    msg.reps = 148U;
    msg.tsize = 138U;

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
    msg.setTimeStamp(0.188804965116);
    msg.setSource(10282U);
    msg.setSourceEntity(162U);
    msg.setDestination(46396U);
    msg.setDestinationEntity(149U);
    msg.fps = 70U;
    msg.quality = 169U;
    msg.reps = 121U;
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
    msg.setTimeStamp(0.557964714169);
    msg.setSource(24296U);
    msg.setSourceEntity(77U);
    msg.setDestination(55712U);
    msg.setDestinationEntity(57U);
    msg.fps = 55U;
    msg.quality = 98U;
    msg.reps = 155U;
    msg.tsize = 105U;

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
    msg.setTimeStamp(0.184703764236);
    msg.setSource(42890U);
    msg.setSourceEntity(12U);
    msg.setDestination(58715U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.437191163393;
    msg.lon = 0.385818719273;
    msg.depth = 87U;
    msg.speed = 0.828690189991;
    msg.psi = 0.625603682449;

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
    msg.setTimeStamp(0.151291098482);
    msg.setSource(34703U);
    msg.setSourceEntity(194U);
    msg.setDestination(54779U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.766019842695;
    msg.lon = 0.93437476689;
    msg.depth = 6U;
    msg.speed = 0.125063274064;
    msg.psi = 0.514871245539;

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
    msg.setTimeStamp(0.0967207745538);
    msg.setSource(16105U);
    msg.setSourceEntity(215U);
    msg.setDestination(49484U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.816430144677;
    msg.lon = 0.084689815034;
    msg.depth = 218U;
    msg.speed = 0.252970416856;
    msg.psi = 0.803759037419;

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
    msg.setTimeStamp(0.615449498006);
    msg.setSource(53115U);
    msg.setSourceEntity(21U);
    msg.setDestination(9592U);
    msg.setDestinationEntity(116U);
    msg.label.assign("FBLGMWNBOBKSOHGIVWQNYGWTJPYUFCZIPQEQEDNDMWNJEPCOPRKOUQHSJVTAOYAHKJXZQDTUIDIJBXLKTLJMRLLFMTLSKHEZVEUWAUHBLUSCIOOZLESAIDNXYXETKYFXGPMSSRGBFOBWCMVQZNX");
    msg.lat = 0.135261416135;
    msg.lon = 0.585430372117;
    msg.z = 0.122012321864;
    msg.z_units = 122U;
    msg.cog = 0.485138153319;
    msg.sog = 0.551257188793;

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
    msg.setTimeStamp(0.746966289036);
    msg.setSource(64694U);
    msg.setSourceEntity(149U);
    msg.setDestination(18801U);
    msg.setDestinationEntity(31U);
    msg.label.assign("FZAVUBLVHGIEUWIKROIQNDFPM");
    msg.lat = 0.187891073077;
    msg.lon = 0.858704254262;
    msg.z = 0.422062143409;
    msg.z_units = 2U;
    msg.cog = 0.572674364472;
    msg.sog = 0.300685272409;

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
    msg.setTimeStamp(0.00577369099457);
    msg.setSource(3119U);
    msg.setSourceEntity(139U);
    msg.setDestination(61644U);
    msg.setDestinationEntity(206U);
    msg.label.assign("SQXLSYIXJIOHPYUMYIVWJYCIPGJKEMECLBWPOKVVEMNZESRPCXINOFXQGADZASWATJDFEHMGKGNOIDXLVTGQJZNJFKORMZAHZHSYBPBHVPGMBBRQAYXUEWUPCZDWREFQSXNFMBPTRXPDLMRKVHHRHTLEQKOFDC");
    msg.lat = 0.814767868006;
    msg.lon = 0.787023260657;
    msg.z = 0.664009814147;
    msg.z_units = 0U;
    msg.cog = 0.0837431948094;
    msg.sog = 0.473007871565;

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
    msg.setTimeStamp(0.586036294783);
    msg.setSource(24075U);
    msg.setSourceEntity(66U);
    msg.setDestination(59716U);
    msg.setDestinationEntity(173U);
    msg.name.assign("VKYYPIRTYAEMJMXXASPKYJRDMKAFFXLEPLLPOJMFLZQWQRCOUQGLGALZNFDJXTJBBARLDXTPUAUSPSAZZDVYUZQIXHSRPOOHQRWWDCVEWDTGWCNVEXNEJYEKPVTYTQWAACMEJHMNIXTVCGSZQVHJQUQHBZZHNIKKERTUDNLTSRBBOLFM");
    msg.value.assign("VHYXVJHXWAQTBTFZQIIPLEVFSKDPUFCGGCXLRNPORHXUQARRSKEQRZBHBODQFMILTKBVCIMRXJEEGPSYVLFNYRTIZTFSAOZUESNWMOINVHNDHPARBPDRTDWRZAECXGYYMZKGDBCCMVXSDSLBOMBKHVGJATCLLEWFQHKTJFKLMWWZNQEJWUQYSGBAMPWFNUFOGHYGAJJHNKOMKOSPXTWXUNULZOYIZPOJLXCJJZTPNMCCEYBUVQUVIGSKADEIQ");

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
    msg.setTimeStamp(0.274672515546);
    msg.setSource(15489U);
    msg.setSourceEntity(92U);
    msg.setDestination(61478U);
    msg.setDestinationEntity(49U);
    msg.name.assign("FULXHSNONUERKUZBAEGPPIGMAWNYSTGYOSWJMINZCTRKXZBUPNZDJKJHHTDBKQGVHDIAQGMXQUDWSFEVFBJEEKFXRKJXDFUDMUZJBLYVSHTQNPAVESYYGLRBOYXWUNAPSCQWCFM");
    msg.value.assign("PNDZYVIYOXSGPFUHLLWCXQFSPZHUXDUVGKFIUXZPPYAUFWEVSEQZHMCVIEDMIOVIJZSREHWJEOJMMGTWOSFHMBKVLNJRPEDGBMGVLANHLFBENNEBQSPYIRTNLEQRGIWRRDOLTBUMZNRDFUDTCBZOXIKKOWJZKQRVECSPKAXBCZQGHSTHDNTPJNJYMYMASUTCAQQVLFBH");

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
    msg.setTimeStamp(0.813693710539);
    msg.setSource(28337U);
    msg.setSourceEntity(140U);
    msg.setDestination(64107U);
    msg.setDestinationEntity(101U);
    msg.name.assign("VKZSJJSKFUEIYMMMBTYPTZAXYQSOPEDZEXACVWULPZPLOFTHQNEVOHCAFZQWKKKCWOTHNWGGURHNIPKBQRASOFMYYOXDQGWSRNWDDYMJOJBGSXRFFVCOWWYXLDBLAKCVLGZSUAXEXRNGRTMEAUUAITMUAQVPCWZKMVTQKPEGRLCOGQNVJBVWSGJBCQUSOZDCJANSZGMRFPXIJKDDLFNFLL");
    msg.value.assign("JSMIPHFPGAHXZTCZHJYFAQQVHVJNBIIYGFEEMLXOSURPUMBVTXKYKEJZTUSDWCNRVJFLFLCAPYOCDVDTAOWDNQGSNBMPXCZPEKBRHBNYESKLBNQZADMOWKQIXXWYNDUACYGRZWOGGATELSCKUOYTHMMUSAK");

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
    msg.setTimeStamp(0.802726169253);
    msg.setSource(52118U);
    msg.setSourceEntity(190U);
    msg.setDestination(49788U);
    msg.setDestinationEntity(155U);
    msg.name.assign("XWENEHKUWMVPOTTRMZCHTVCNRWMOTUQXYRRQGNIDSCMLAXOAFAELBXSMYIWGHSSEMUZCLYMITBJPBMJIWAPFJEFEVWXSIVYUYQPLVBBNNLEZQHONKRCZFTYJASAVZQCDHRFHKYIOFHCFFNCIPJEJNKQDHRUAJZWKAASOXHPKVDUZGKPWXFWKUZDXQ");

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
    msg.setTimeStamp(0.319302298079);
    msg.setSource(209U);
    msg.setSourceEntity(95U);
    msg.setDestination(26439U);
    msg.setDestinationEntity(58U);
    msg.name.assign("PSXCWKLETSJJJPCDHIPAHUGGCIFFAAARETZBZZKDUEOHLXWLODTFSTQCZVAFYVKRMSOGVNONPXEGMDPUHAXMMLSHHGCRVMNJHDYMIQXEPRBCWUWBCSJGQIVKEIWBIMYJWDRDZIXSYJQNKYBLALRCXQBZMYLVFPHBSUEVUBKHQWQDXWQITUZBNFBLIXFEQGTOMSVTZPJYUTWLDOACAYPGKKRQVNCVZTKI");

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
    msg.setTimeStamp(0.00399822541656);
    msg.setSource(36152U);
    msg.setSourceEntity(34U);
    msg.setDestination(16576U);
    msg.setDestinationEntity(220U);
    msg.name.assign("CGNGERIJYBPMQWUUFGOWQOJHUTSJJAEZFKOVXFOBCRHSFNJXSZYNWIMDTSTRAXCGBMNALIJQTNDBAEQLRWKKZZLQHSBZHITJWPDZIIGNVWOVADDGYCXDDEQWRFELYIVVPLFOCMIACYFK");

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
    msg.setTimeStamp(0.301988420315);
    msg.setSource(22774U);
    msg.setSourceEntity(225U);
    msg.setDestination(64119U);
    msg.setDestinationEntity(147U);
    msg.name.assign("FMGVSLHNIPPCCIQGAHAKEHMTJNTLLUEDZSYVNDWTPOGBHXZVVAVMDGLZIYFLRDONFBMQXRDWCRLFGWJAYJUYPPNHOHCEPKSZWVUAFTVXMOKZEBAFJBJQIB");
    msg.visibility.assign("WRVYSSHGHNFCUESFFQPYRJITNGHJSOFNFQBULKREXWSKJJMCDMQYGWLEGKPTTZJZFMPLAQMOEKCEIMIBLRJRARHSAFQONCGAJLVTZFYDEQKETWVAAPWIUEDOLMDUJNXCOVBVUGSDUXYQFKDTTNZGMIKCKIPGNOAARUZSZUEQBHCJXNZGBBOTOYLXFOHIYIJLZMWMWXHHDTHXYWVCQU");
    msg.scope.assign("WXHMYJHRVGSVWRRBELJTSIGEPSKYRQ");

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
    msg.setTimeStamp(0.980347522767);
    msg.setSource(57988U);
    msg.setSourceEntity(206U);
    msg.setDestination(4269U);
    msg.setDestinationEntity(220U);
    msg.name.assign("JHQODVQSKJIXWSGWKURUZSRELSDDXTXVMAHJEBGLHGJNMUSIYDJUKTNYYWHRHIPACVEWROLERDARHITIEBNWKOZENCMPKWJYQXMAYMSPXGTLMQXBJHZMTHPBNVVQOSUCZVLQYGGOBWYHFA");
    msg.visibility.assign("YWNYXRTQSRDPFPNFTFTZLIREEJGF");
    msg.scope.assign("WYTPTTRWBSCFVBXEJXUMUODNQSSVSGWDGXZUSRZBUOAGPWLOCBNOIAMPJJZBNCQUDADPPNOLZRULGDTCRQUBIYEFXGCEPY");

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
    msg.setTimeStamp(0.315226195118);
    msg.setSource(9881U);
    msg.setSourceEntity(125U);
    msg.setDestination(50727U);
    msg.setDestinationEntity(163U);
    msg.name.assign("LPPCSBCGEQELTHBACKVEEVZFJPTBRIJWBCCODPKMAVOPWNXJMASLCHKAVFXBWBMHTLSLUGJXAGRWORBIRTHTNKSFIYMVHGKPMECBRDYUNMUQNXQTPKSEYFESDSIUJTZCMGSPJNRZDOXJINVJOFYHZLLONYRNVFSMXGYSTOQKFPTLDBUYKUXEPBURXDIWHZWUKDZIMATQIEFDYGHEAWDUUYAA");
    msg.visibility.assign("XIPKOABTAIJMIFPLMAJUECQRTXAVCKGMZOYXKTIZKFKOUHTPDHQRKFMNIQLQSUUNAEOBYUHZDQWLTASUDOVPLNEZXUVJGVKQFBDNRRZMDYYFPTFTVLBSCAEUZSVBYMICMDNWRBBNNCMEZPNGGPDCVVYEJQEJDOTGPEOCFMGOBDGSQEGVTWWDCHXJHTS");
    msg.scope.assign("QRCTHGYPMRIXSDPJSWLZZTESFSAZGTHLLNCETSIFYGHTZOXMSACFHUJWEXCVDKEDGAXMRGLXK");

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
    msg.setTimeStamp(0.755263064954);
    msg.setSource(11283U);
    msg.setSourceEntity(103U);
    msg.setDestination(37351U);
    msg.setDestinationEntity(168U);
    msg.name.assign("LBZBJQVDYKNLENLCTNBCPMXXIMWMFKGCIEUNNGGFCUHOJFPUOABLXVYRPLAGRJAQGNSYVPQWHRYOPGVZGJOIXVGLOITUDCWRJWUSGUESFQXAZBZPQEEIEKWSJPZV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PZKJGFZVUAPFMDUVVCGTCBIQWDSQZYIJNPEUYSQKOMH");
    tmp_msg_0.value.assign("ZTNDPEPVXXQXIUPMOAWIFJUIPTNOYAZVTRLRYEOMGXNNW");
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
    msg.setTimeStamp(0.29345010705);
    msg.setSource(55433U);
    msg.setSourceEntity(253U);
    msg.setDestination(46283U);
    msg.setDestinationEntity(86U);
    msg.name.assign("JQJZYSDNKOYSHWHLSWRNEMVCKRZVANOXSOMQQRKIRADWYGJXAYOTZTFWGEP");

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
    msg.setTimeStamp(0.620818089195);
    msg.setSource(60153U);
    msg.setSourceEntity(69U);
    msg.setDestination(21974U);
    msg.setDestinationEntity(63U);
    msg.name.assign("QVYWJFLXODBMCMYEZOEKBUGGPPXUMADZLSSHZZAHNMUXTGRBKEEUGYWMXJQGAZFAKCGKIKROBNCUOVTFNSUMHHXVFUWWDDIZPSURORBQKPJOBMSNKMKPFCBPJGDRHFWOEIETRLAQNVJSVH");

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
    msg.setTimeStamp(0.425693053596);
    msg.setSource(31277U);
    msg.setSourceEntity(201U);
    msg.setDestination(19449U);
    msg.setDestinationEntity(192U);
    msg.name.assign("JOYTQAPHXCIETAGXYBIAZOFSDNXOLKMKHOACKWKFGWRFHANAKVHCPEFALBJMQULVFKBCNLWNNEZEPRAXRKYZPULZMWSCBXBOJVFVCQANQEHZTHTMBJSBRDYGUBSMFGQRWIPHDLUQGKFQCIUQDRLRGXVV");

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
    msg.setTimeStamp(0.477318816407);
    msg.setSource(9114U);
    msg.setSourceEntity(115U);
    msg.setDestination(15181U);
    msg.setDestinationEntity(219U);
    msg.name.assign("DVKGTNPRRONHVPJSAZFBULABXEZPTNIFBCLHASJRHHSALNECYIMQWGFHBORMOJ");

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
    msg.setTimeStamp(0.764318953915);
    msg.setSource(41705U);
    msg.setSourceEntity(166U);
    msg.setDestination(56946U);
    msg.setDestinationEntity(53U);
    msg.name.assign("JGOBVBORVIQJXGUBTEB");

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
    msg.setTimeStamp(0.0200541338233);
    msg.setSource(56732U);
    msg.setSourceEntity(187U);
    msg.setDestination(19054U);
    msg.setDestinationEntity(68U);
    msg.timeout = 1527084246U;

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
    msg.setTimeStamp(0.85646654821);
    msg.setSource(43549U);
    msg.setSourceEntity(48U);
    msg.setDestination(5516U);
    msg.setDestinationEntity(229U);
    msg.timeout = 2858733684U;

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
    msg.setTimeStamp(0.381775987535);
    msg.setSource(20400U);
    msg.setSourceEntity(5U);
    msg.setDestination(44551U);
    msg.setDestinationEntity(17U);
    msg.timeout = 3719029926U;

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
    msg.setTimeStamp(0.481105267245);
    msg.setSource(3416U);
    msg.setSourceEntity(183U);
    msg.setDestination(13651U);
    msg.setDestinationEntity(4U);
    msg.sessid = 4203615877U;

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
    msg.setTimeStamp(0.870237665777);
    msg.setSource(47857U);
    msg.setSourceEntity(118U);
    msg.setDestination(52471U);
    msg.setDestinationEntity(50U);
    msg.sessid = 1836432310U;

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
    msg.setTimeStamp(0.486065344002);
    msg.setSource(16923U);
    msg.setSourceEntity(47U);
    msg.setDestination(54187U);
    msg.setDestinationEntity(160U);
    msg.sessid = 2887982927U;

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
    msg.setTimeStamp(0.603791310526);
    msg.setSource(63027U);
    msg.setSourceEntity(103U);
    msg.setDestination(7322U);
    msg.setDestinationEntity(204U);
    msg.sessid = 3161236256U;
    msg.messages.assign("FLWVEPNEWVSWGOURBRHVHWSXYLWMJWYZWUZFDUZIZLXQVSBTIDGQXRATGTCUMEOFKPDLCCZRSDVNMEJEVHEUQCIQNCKHMYITOUAQDDGSBBNAZONNOIOBAMKLFJYBGELFTQROYUAGCAFXCMVNNXCGPVQKDIEDKLXRZSPKIVTYGZLCTFJCWTMNDHEFGYYUQAANJKDMHFJPRXRAQTOJLPKJTUBSXIMHUPXYSWGIP");

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
    msg.setTimeStamp(0.839035555608);
    msg.setSource(26492U);
    msg.setSourceEntity(75U);
    msg.setDestination(48537U);
    msg.setDestinationEntity(4U);
    msg.sessid = 707743984U;
    msg.messages.assign("FQPVCAJDTHMJDPBBPXSSRKVPQSJYYGRWXWNTLADTEOYPHGJOSUDCTDRWGNKWZHZSVXJYYPFFCWSFXKBGXQMBCMQUQGOZLEUNEUYNHGFNQMVCLHCOCKDIEIRN");

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
    msg.setTimeStamp(0.374422568091);
    msg.setSource(19518U);
    msg.setSourceEntity(61U);
    msg.setDestination(14336U);
    msg.setDestinationEntity(230U);
    msg.sessid = 1744857548U;
    msg.messages.assign("CWMIFOTMFZSDCADUCASEKJQGQVDXHYCSLRDYCGTEANUTNOZNDSKDRMWMMYYZJALNVZXMRPKJIQYEONULWFUOSLNQEALKBTOFIGNVQRBEYGHFTJGHBHXRZMCWLUVWVAWCBIIJBGXYQDVPLGVLTHHTGEQMKJPKWLMFNSJIWCNSQOIHYJW");

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
    msg.setTimeStamp(0.621357769892);
    msg.setSource(57674U);
    msg.setSourceEntity(168U);
    msg.setDestination(58042U);
    msg.setDestinationEntity(114U);
    msg.sessid = 1551197106U;

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
    msg.setTimeStamp(0.651794343119);
    msg.setSource(26309U);
    msg.setSourceEntity(192U);
    msg.setDestination(49196U);
    msg.setDestinationEntity(231U);
    msg.sessid = 347729919U;

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
    msg.setTimeStamp(0.766524049243);
    msg.setSource(53585U);
    msg.setSourceEntity(4U);
    msg.setDestination(47413U);
    msg.setDestinationEntity(21U);
    msg.sessid = 3888246290U;

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
    msg.setTimeStamp(0.79424349805);
    msg.setSource(51593U);
    msg.setSourceEntity(107U);
    msg.setDestination(34711U);
    msg.setDestinationEntity(227U);
    msg.sessid = 2006578431U;
    msg.status = 95U;

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
    msg.setTimeStamp(0.859019314065);
    msg.setSource(2291U);
    msg.setSourceEntity(43U);
    msg.setDestination(19426U);
    msg.setDestinationEntity(120U);
    msg.sessid = 3239236858U;
    msg.status = 109U;

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
    msg.setTimeStamp(0.692904044329);
    msg.setSource(62158U);
    msg.setSourceEntity(41U);
    msg.setDestination(38392U);
    msg.setDestinationEntity(50U);
    msg.sessid = 2354270186U;
    msg.status = 100U;

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
    msg.setTimeStamp(0.0106045059569);
    msg.setSource(32263U);
    msg.setSourceEntity(230U);
    msg.setDestination(63804U);
    msg.setDestinationEntity(33U);
    msg.name.assign("SOFPKNFGYXOCDTOFHMFJSGYULVSYTWISDYXIHBPRFJNKJDZYLFPQUNSSMKCMJRGFZYHQARFMPEORZOQFXMMLRSPPGEHLQMQWGDEGZQXLZXIEWRCOXZEHNCILNGQQBFPHVUUXZVGNZLRKEDOCSYTATXHKRDTKLWTZIMVYMOTHQVCRSPYQBLIDEWCBJIOAPWVLHBSHAVIWWNYBU");

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
    msg.setTimeStamp(0.909494231663);
    msg.setSource(53274U);
    msg.setSourceEntity(133U);
    msg.setDestination(8138U);
    msg.setDestinationEntity(83U);
    msg.name.assign("UCCCKSWQODXGVDMGWNTQRBNGRNJHWQKZLRYVHAFAJKIYJLGILYPVXKYWOPHXRVELQRGRNOGCEIPPLQSRGAUYMMSKCDPUITIROBWSVDFTEJSPEOKQKHXABBBYQDCLVDUMKXWDBMATZUHANAZXFXEFWFDMTYNICEAJHTZOZSUOLJIHCTQNZKJXAVGUWNUEYO");

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
    msg.setTimeStamp(0.734233740864);
    msg.setSource(26513U);
    msg.setSourceEntity(45U);
    msg.setDestination(39402U);
    msg.setDestinationEntity(238U);
    msg.name.assign("AXYSNTQJUTWQZNNTHJECSPZICFBIQMNRINJPVZRXRRGNSLQWDDIHZDLWVTXAGLLYUX");

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
    msg.setTimeStamp(0.39440289416);
    msg.setSource(64781U);
    msg.setSourceEntity(20U);
    msg.setDestination(9394U);
    msg.setDestinationEntity(154U);
    msg.name.assign("VDTUEFOFXMZPEEMJIFCCZN");

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
    msg.setTimeStamp(0.475796414494);
    msg.setSource(43668U);
    msg.setSourceEntity(212U);
    msg.setDestination(5292U);
    msg.setDestinationEntity(120U);
    msg.name.assign("CKHPWHYJEYTLIZURKFCQBONAJBOEXAQOQYULHUMHFCGKIHEKALPCOKFNAWPWNPHRDUQXETIBYLWTOEJGBVMDVLRRNEHMJDT");

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
    msg.setTimeStamp(0.906071490726);
    msg.setSource(36021U);
    msg.setSourceEntity(154U);
    msg.setDestination(16421U);
    msg.setDestinationEntity(116U);
    msg.name.assign("ZCPCSBAZZEYHVQCUKKVTVDTZNTFKCKZEDMOQINKVJBOAXKSXDUXL");

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
    msg.setTimeStamp(0.513908063136);
    msg.setSource(43822U);
    msg.setSourceEntity(115U);
    msg.setDestination(53433U);
    msg.setDestinationEntity(63U);
    msg.type = 121U;
    msg.error.assign("NVPMKJUGOAPZYRHRQTWXUCWIVCJMMXIQTKHVGOOLP");

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
    msg.setTimeStamp(0.277096310581);
    msg.setSource(64068U);
    msg.setSourceEntity(95U);
    msg.setDestination(1848U);
    msg.setDestinationEntity(95U);
    msg.type = 25U;
    msg.error.assign("VWSVCMGOTVQYFYNQJVRALQDNQUAEKHGHKLEJZFEEFNLTSMNADYGUJZHWBNRLSPQDZKVVCIMOSTEDCZAGONBLUOZUYLQUBJSSHRXTFDQAWGILZOEKJRW");

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
    msg.setTimeStamp(0.145657718405);
    msg.setSource(58314U);
    msg.setSourceEntity(239U);
    msg.setDestination(56885U);
    msg.setDestinationEntity(104U);
    msg.type = 101U;
    msg.error.assign("BIOBLFCQHHUCJDVZZWONKDFFPLHLKVGIVWFJCRQDETFGAYHRGEPVPEXKQSFZJKGAROUBNYQTECMILQZLSRDBTQOFYIHFMQSGPWXESGENQPXKUCTWVTXMSAIKYPJEPJUURSYOTLKDHXBMODPDWOMKZKWOTVIRJBIBBRZOVSCNQJMHAVDEZSCRMHXIPGAYNQVCZWLYWTY");

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
    msg.setTimeStamp(0.480144574165);
    msg.setSource(43855U);
    msg.setSourceEntity(160U);
    msg.setDestination(26807U);
    msg.setDestinationEntity(233U);
    msg.seq = 1585U;
    msg.sys_dst.assign("FRVXVYXDCTNSLOWSKPBGLKQIAMQJRGNIGPMHZSZYLQRHZJXPHACFDCCLZEFPNMMBVFLBUFTSGEGPMFWYAKKJWYQFRADYOUGKMAEEOOQSKAWOVOVEEVRGZXCITQTBHXSINBLVGQUCJJRVCKMHDDWJUXLMZGDHECOLHSTOTNKTPLAHUOXNGZAISIQVJJYKPIVQYUNXDMYIHNYWXEJXUZB");
    msg.flags = 52U;
    const char tmp_msg_0[] = {115, 14, 40, 83, -52, 113, 119, 108, -23, 32, 19, -30, -50, -110, -54, -3, -63, -121, 72, 99, -71, 63, 22, -119, -39, 58, -42, -5, 118, 48, 118, -125, 101, -106, -93, 106, 68, -49, 56, -36, -27, -44, 50, 7, -54, -72, 76, -116, -87, 78, -99, 118, 82, 75, -55, 1, 11, 106, -34, 102, -97, -119, 0, 16, 93, -108, 47, -14, -110, 75, -95, -112};
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
    msg.setTimeStamp(0.622425659024);
    msg.setSource(45561U);
    msg.setSourceEntity(130U);
    msg.setDestination(34748U);
    msg.setDestinationEntity(130U);
    msg.seq = 23152U;
    msg.sys_dst.assign("OEJZBKHVWPKAANFNICTNZERDHJJUHIQHEXQOAJVPBMVSPLATGSIMDBPOPWROXDXZOFBUCNETBNKTLWDSNRYCFEAYFXCLADCUMLIOVSKKMOQYEXVRJBNMWGUPKQFLXJQGMPDRZNHMALDIRZMPUEYJHRHSYUEZWQUYELPOJANQYPNWTTZOSJTQIFVURRGQKSFXHFAWWYBZUXGIZCCJCUGDMKYOG");
    msg.flags = 87U;
    const char tmp_msg_0[] = {5, 55, 15, 87, -49, 96, 100, 2, 27, -115, 46, 98, -74, -122, -84, 19, -116, 115, -65, 71, 14, 31, -128, 69, -79, -25, 82, 105, -29, -15, -29, -96, -94, 41, 99, -46, -107, -127, -23, -96, -1, 18, 48, 58, -110, 87, -31, -10, -108, -37, -81, -107, 46, 88, -115, 46, 71, 99, 82, 38, -8, -15, -104, 68, 31, -13, -118, -5, 122, -32, 63, -74, -121, 60, 54, -101, -41, -95, 33, -87, 118, 25, -32, -49, -23, 77, 37, -58, 4, -2, -96, -41, 104, -89, -53, 1, -92, -25, 27, 7, 87, -74, 44, 73, -39, -116, 53, 121, 42, 126, 61, -107, 10, 108, 88, 3, -51, -79, -27, 100, -124, -38, -105, -92, 92, -91, -48, 108, 21, -111, -123, -3, -76, 113, -56, 13, -5, -97, -19, 126, 12, -114, 85, -99, 50, 97, -32, 114, -96, -20, -16, 3, -48, -47, 0, 32, -47, -96, 95, 116, 2, 53, -52, -87, 4, -73, 114, -91, -111, -40, -5, 68, -38, -18, 27, -19, -24, -51, 30, -53, -36, -31, -44, -47, 119, -46, 73, 72, -69, 96, -125, 113, -24, 4, -51};
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
    msg.setTimeStamp(0.135978966189);
    msg.setSource(53112U);
    msg.setSourceEntity(214U);
    msg.setDestination(6679U);
    msg.setDestinationEntity(222U);
    msg.seq = 31143U;
    msg.sys_dst.assign("SZMACSCRQBAHRUEWVUFOQTSKMILWUEKPHEWOLQUBVWBMVPSHQJLONIMFDNBBAPERYZUUJVZXDLNRQGZYBOLUTSZFGMWJAIQWKSYANBPFSSJZPPTYSXRKAGDZBMKYGAJQECVOHFEBFCQCLPRTTJMKVXKXKHODWTCHTTGOAWQRYGJVCRZZUEHNDRDTAMZYGOHEFXN");
    msg.flags = 139U;
    const char tmp_msg_0[] = {-19, -9, -99, -29, 120, -63, -46, 96, -2, 37, -13, 120, -98, -72, -128, 4, -32, -24, 74, 101, -6, -74, 103, 69, 28, 39, 19, 42, -74, 102, -123, 69, 64, 21, -110, -74, -32, 103, 32, 4, -1, -101, 5, 1, -67, 23, -62, 8, 121, -10, -120, 42, 122, 46, 40, -124, 107, -104, 9, 14, 59, -15, -22, 102, -95, 21, -2, 120, 114, -2, -93, -15, -51, 70, -18, 40, 118, -36, -29, 111, 117, -29, 101, -61};
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
    msg.setTimeStamp(0.779009657247);
    msg.setSource(45495U);
    msg.setSourceEntity(83U);
    msg.setDestination(28647U);
    msg.setDestinationEntity(29U);
    msg.sys_src.assign("RVUODIZTRMPVXHGJFZIYSNGWE");
    msg.sys_dst.assign("NRSCVFGDFNGOYUYWNSCFPQBHKOTPURDZMNCFYUAFRUBPDFWBEKDNMNSDXZRIDZJLVEQLJVIAAUSIPKNCOUOLIPVTTTAMHIPUBCXYRWCQKWKWZBUVOYQMHNFPSEPGSJEKLLSWUVXBELEAWMJJZMTWSXGOTGZHDKGCIMRXNHIJGEJKQHATAOJOXQXYSBHIVLALFVYEXHRQTCQFTFZBEDJBDGORZVMVNWHYZQKPMDRGUIWGZ");
    msg.flags = 183U;
    const char tmp_msg_0[] = {66, -87, 84, 30, -44, 107, 5, -12, -50, 56, 76, -90, -8, -3, 92, -84, -93, -2, 43, -1, -88, 115, 25, -79, -10, 55, 115, -44, -38, -64, -48, 108, -109, 110, -87, 38, 67, 80, -78, -45, -124, -1, -63, -6, 15, 48, -13, -1, 101, 82, -121, 28, 34, -83, -97, -109, 34, -118, 23, 7, 16, -39, 97, -90, 124, 116, -33, -78, 66, -29, 79, 39, -52, 65, -56, -63, -4, -4, 57, 73, 125, 54, 29, 26, -14, -28, -2, 29, -33, -123, -2, 34, 23, 100, 42, -102, 18, 125, 90, 98, 49, -18, -64, -81, -69, 48, 20, -127, -78, 88, -70, 101, -32, -104, -120, 50, -51, -83, 44, -114, 0};
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
    msg.setTimeStamp(0.37562853389);
    msg.setSource(58998U);
    msg.setSourceEntity(24U);
    msg.setDestination(14589U);
    msg.setDestinationEntity(154U);
    msg.sys_src.assign("ZZMIJGBAAMCSQIZMJNYPWXXEDGOCQVUIPSTYANALLXHPHRNEIOKEFUJCOWDHGYFSCKTQLYKVDCXHUYPXDPBSHVNXWAAKWZGEUAANDWUIIQYZVFEQMMFCRTZITFJUOETDMKJVPHWBPYYLIPJOBGAEZIVWQ");
    msg.sys_dst.assign("LJCDAJTCCRJMOTBSVNAQCMBLVZXSDDNKFYXZLSDEZZPRVKLQDKOHFQCUBVVEIKEORAWEITEGOKJDWAEVJFYIL");
    msg.flags = 9U;
    const char tmp_msg_0[] = {-107, -19, -112, -67, -25, -20, 26, 74, 3, -91, 55, 53, 92, -97, 17, -28, 74, -41, 16, 51, 103, 60, 94, 30, 2, 49, 7, 73, 17, 42, 88, 76, -118, -80, -1, 104, -87, 81, -46, 114, 68, -97, 92, -46, -52, 26, -122, -13, -123, -61, 118, -88, 29, 67, 9, -81, -51, -82, 84, 90, 9, 113, -72, -71, 65, -84, -113, -42, 34, -51, -1, -61, 86, -111, 55, -57, 49, 30, -41, -5, 29, -89, -61, 70, -65, 22, -13, 41, -83, 45, 58, -18, -40, -104, 38, 24, -120, 54, 79, -69, 31, -87, -88, 27, 85, 16, 122, 7, -22, 88, -22, -38, 108, 10, 11, -20, -59, -66, -47, 102, 5, -85, -24, 9, -4, 25, 125, 100, -37, -56, 109, 29, -43, -66, -107, -51, -60, -119, -79, 72, -17, 69, 121, -106, -66, -120, 49, -119, 47, 6, -101, 28, -121, -5, -17, 97, -124, -32, 48, -11, -19, 10, 26, 7, -41, -92, 99, 120, 64, 28, 28, 112, -128, 60, -76, -68, -103, -90, -117, 49, 11, -11, -19, 68};
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
    msg.setTimeStamp(0.155127648735);
    msg.setSource(25813U);
    msg.setSourceEntity(254U);
    msg.setDestination(41560U);
    msg.setDestinationEntity(72U);
    msg.sys_src.assign("OUKIJGFEDFMPZCABAUENCMXWSNKJQBTLLBWDOAZCVNOQOQNUIOZJGGXVYUFFMJMYQDKZSDVEYJKKGXOSYMRYSXUTQUVSPENONRPQTAXPGLTZLCRSKENQGELRFLILWGWBYTOKVGDRTWUBOFCAXXPTIYBZQKVUNIXEVVRQTIECEYJGIAWHSOUCPHVMBBJDDBZHRNJVSXXLJRFIMWYIZCHDTPMPTHHPGWFWAYMPMJLDSDBR");
    msg.sys_dst.assign("YJXKCGBXVEDGHGTMSWNMLWIXPDAGYDOMMEASTTBNOYLTZIPDNYGHXRXRDPPRVZIP");
    msg.flags = 97U;
    const char tmp_msg_0[] = {-47, -91, 57, 95, -45, 48, 60, 89, -54, 104, -24, -126, -45, -41, -83, 88, -114, 95, 98, -15, 124, -125, -109, -63, -90, -43, -30, -2, 65, -15, 104, -10, 101, -46, 5, 63, 82, 3, -60, -98, -80, 75, 76, -3, 101, -102, 103, 78, 93, -17};
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
    msg.setTimeStamp(0.114018257581);
    msg.setSource(39817U);
    msg.setSourceEntity(186U);
    msg.setDestination(52331U);
    msg.setDestinationEntity(56U);
    msg.seq = 19851U;
    msg.value = 192U;
    msg.error.assign("LTHHSXZJWOLDWJXUTWAXEIYOKFFYXFTYEHRDZLZTEPMQGLULMEIKYQREMUBPKQDHZMYHSVJYKVTGTZKIJMUSCPARGWSMKMPTOGJCJOLAVDDOBYFNSAODJBHPQSYREAJBBFCEXZKNNMXNUUKOROASDCIIYASCWQ");

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
    msg.setTimeStamp(0.744672241097);
    msg.setSource(58796U);
    msg.setSourceEntity(202U);
    msg.setDestination(43271U);
    msg.setDestinationEntity(97U);
    msg.seq = 63393U;
    msg.value = 147U;
    msg.error.assign("VSNWKRDCGXNZBQNKLWDNCKIELZMEXRGCMSFLYRNKDBYSPHPHAJVBHZHJHQSAKF");

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
    msg.setTimeStamp(0.94406402665);
    msg.setSource(63589U);
    msg.setSourceEntity(136U);
    msg.setDestination(1119U);
    msg.setDestinationEntity(200U);
    msg.seq = 21018U;
    msg.value = 180U;
    msg.error.assign("AFMNKTWJRHAZWDOISCCSIESQB");

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
    msg.setTimeStamp(0.620004108238);
    msg.setSource(56295U);
    msg.setSourceEntity(157U);
    msg.setDestination(40464U);
    msg.setDestinationEntity(111U);
    msg.seq = 64365U;
    msg.sys.assign("WUSHHFYYNV");
    msg.value = 0.194381279909;

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
    msg.setTimeStamp(0.192888730468);
    msg.setSource(42632U);
    msg.setSourceEntity(104U);
    msg.setDestination(8568U);
    msg.setDestinationEntity(38U);
    msg.seq = 55524U;
    msg.sys.assign("UDCXULWDRTMBQJUKSBSJEUFAMJDZKBIWNKAEGRIQOGWEKCDOIHNYLSILGBJPHYGLSEPSSQVMJBAHHDAQPEMROXGWANXAWZLNOI");
    msg.value = 0.335549851489;

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
    msg.setTimeStamp(0.590716236527);
    msg.setSource(13888U);
    msg.setSourceEntity(173U);
    msg.setDestination(42380U);
    msg.setDestinationEntity(198U);
    msg.seq = 21455U;
    msg.sys.assign("PGXMUQPXPLRRVQEKBPLZTZSFFIHKUPGSYDHJYMTPQSRKLJFQZMNOCNKLUBKCLDWSAMOHFUSKYEJQKOUQUCGVOMSEQHCWKMXXQIIOECJZVBAVOJSDGTNFHVZNTYLFVNVXZUOWUBZDMRDHJRDGWZGIHREAHYNCWXWBJPLNMWQACVPKYONKLVYCFNG");
    msg.value = 0.929464502818;

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
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.66726083925);
    msg.setSource(28222U);
    msg.setSourceEntity(89U);
    msg.setDestination(54836U);
    msg.setDestinationEntity(197U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.298232321385);
    msg.setSource(36684U);
    msg.setSourceEntity(50U);
    msg.setDestination(6200U);
    msg.setDestinationEntity(93U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.502250830828);
    msg.setSource(55599U);
    msg.setSourceEntity(179U);
    msg.setDestination(36886U);
    msg.setDestinationEntity(189U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
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
    msg.setTimeStamp(0.309395378694);
    msg.setSource(19916U);
    msg.setSourceEntity(192U);
    msg.setDestination(49120U);
    msg.setDestinationEntity(120U);
    msg.action = 126U;
    msg.longain = 2082439030U;
    msg.latgain = 2136509707U;
    msg.bondthick = 645466174U;
    msg.leadgain = 1860472270U;
    msg.deconflgain = 2269609642U;

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
    msg.setTimeStamp(0.642725254955);
    msg.setSource(56807U);
    msg.setSourceEntity(207U);
    msg.setDestination(58642U);
    msg.setDestinationEntity(44U);
    msg.action = 25U;
    msg.longain = 1628162322U;
    msg.latgain = 3291610647U;
    msg.bondthick = 2472253880U;
    msg.leadgain = 2775920969U;
    msg.deconflgain = 1521336299U;

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
    msg.setTimeStamp(0.76123817767);
    msg.setSource(44635U);
    msg.setSourceEntity(92U);
    msg.setDestination(20276U);
    msg.setDestinationEntity(17U);
    msg.action = 145U;
    msg.longain = 687786112U;
    msg.latgain = 748819552U;
    msg.bondthick = 3937086784U;
    msg.leadgain = 3610755188U;
    msg.deconflgain = 481590619U;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.766343146344);
    msg.setSource(8675U);
    msg.setSourceEntity(55U);
    msg.setDestination(10461U);
    msg.setDestinationEntity(41U);
    msg.uid = 150U;
    msg.frag_number = 156U;
    msg.num_frags = 244U;
    const char tmp_msg_0[] = {-14, 114, 7, -29, -90, -12, 78, -98, -105, 89, -37, -115, 107, 3, 37, -121, -110, -31, -61, 88, 117, 71, 18, 75, 89, -111, 86, 19, -18, 5, -79, -68, 49, -13, 1, 10, -56, 124, 67, -9, -42, -73, 80, 7, 104, 24, 106, 18, 115, 99, -46, -54, 100, 55, -111, -5, -102, -121, 89, -26, 27, 105, 39, -66, -24, -92, 103, -24, -111, -24, -95, 37, 123, -5, 41, 125, -128, 85, 55, -28, 50, -95, -34, 69, 100, -43, -48, 79, -60, -78, -2, 3, -71, 57, -38, -19, 86, -99, -30, -103, 15, -49, 91, 64, -81, -18, 71, 35, -127, 5, -45, -26, -52, -14, 21, 82, 39, 10, 14, 15, -16, -9, -96, 47, 16, -74, 29, 87, 64, -59, -71, 105, -101, 107, -68, 52, -106, -82, -24, 45, -63, 14, 43, -40, 113, -122, -42, -28, 103, -50, -18, 7, -99, -19, 100, 39, -9, 43, 113, -41, 108, 4, 120, 98, -79, 72, 57, -40, -71, 13, 75, -13, -27, 84, 72, -64, -82, 39, -56, 25, 78, 96, -36, -121, 18, -72, 96, -95, -68, -28, -59, 17, -110, -60, 51, -48, -91, -63, 89, 36, 22, -8, -54, -27, -79, -85, -101, 17, -68, -11, 114, -29, 64, -98, -15, 10, 78, -40};
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
    msg.setTimeStamp(0.32372880282);
    msg.setSource(31111U);
    msg.setSourceEntity(51U);
    msg.setDestination(34759U);
    msg.setDestinationEntity(101U);
    msg.uid = 19U;
    msg.frag_number = 156U;
    msg.num_frags = 252U;
    const char tmp_msg_0[] = {-17, 45, -76, -31, 57, 63, 60, -73, -99, -14, -14, 1, -70, 89, -6, -124, -67, 37, 70, -124, 73, -53, 116, -77, 111, -85, 83, -69, -128, 78, 31, 98, -128, -120, 62, -122, 11, -9, -119, -78, 60, 95, -107, 108, -99, -103, -31, 65, -27, 62, -12, -24, 17, -110, -41, 79, 29, -64, -96, -34, -22, -63, 57, -64, -36, -76, 120, -51, 79, 75, -64, -61, -82, -99, -50, -77, 9, 2, 117, -82, -17, 0, -30, -87, -82, -88, -63, 52, -120, -79, 16, 113, -33, -42, 66, 64, -117, 94, 82, 96, -51, 2, 46, -1, -48, 73, -37, 117, 60, 96, 120, 75, 108, 46, -28};
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
    msg.setTimeStamp(0.679171178067);
    msg.setSource(25683U);
    msg.setSourceEntity(193U);
    msg.setDestination(57202U);
    msg.setDestinationEntity(2U);
    msg.uid = 84U;
    msg.frag_number = 253U;
    msg.num_frags = 116U;
    const char tmp_msg_0[] = {-124, 112, -5, -33, 103, -36, -9, 46, 25, 40, 30, -101, -65, -63, 26, -79, -33, 18, -62, -94, 91, -77, -62, -13, -44, 101, 35, -90, -16, 126, 39, 11, 68, -101, -45, -63, 82, 97, -124, 76, 44, -45, -24, 29, -1, 22, 71, 101, -18, -114, 125, 4, -64, 86, 121, -20, 115, 5, 60, 51, -104, 75, -4, -85, -59, 12, -4, 35, -22, 120, 34, -75, 87, 34, -58, 114, 113, -113, -7, -68, 43, 99, -95, -123, -22, -77, -118, -69, -42, 25, -73, 116, -20, -23, -40, -82, 6, 58, -71, 79, -8, -115, 104, -68};
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
    msg.setTimeStamp(0.0206434108201);
    msg.setSource(37476U);
    msg.setSourceEntity(241U);
    msg.setDestination(54287U);
    msg.setDestinationEntity(75U);
    msg.content_type.assign("MDQVWLTQILLQRVFCOXCLYYQBPFHTRFDOKAGQYTXZWGIYTPMFHIEZWNAILBOLMPKUFLNCKJQMYLZVJGYPMMNEXIKYRXHTIDAUAWVVUTJPUQHXNROBKARNBHZDYJRIDCOEXHWBIYDFEMAXPREXSRWEBKAZJXGGSDTLJBCNEUSKHGGUSBFVWDNOUIJRKDUEWOUSNFQJKVBECSVGBZHSTZJFVEH");
    const char tmp_msg_0[] = {14, 78, 25, 109, -47, -36, 97, 15, 116, 50, -116, -117, 22, -96, -50, -74, 41, 82, -10, 26, 8, -3, -118, -84, 1, -55, 60, -115, 86, 41, 122, 22, 22, 110, 21, 18, 95, -88, -100, 120, 122};
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
    msg.setTimeStamp(0.144493326336);
    msg.setSource(15316U);
    msg.setSourceEntity(129U);
    msg.setDestination(15996U);
    msg.setDestinationEntity(103U);
    msg.content_type.assign("PZYRYUSEUGEHWQLACBULFZVXYRMRKDPMASVCXJAKHCJNUNZPIHTHJSCEDYVLDZRJGAISVKXZQEYOIOWCDQHJWNPOXXKOABPTRXBRBGFSCFAJDWLMTXTCVGCSAZHAYWLNELQBCAZHNOHYKONMUFQY");
    const char tmp_msg_0[] = {12, -118, -43, 30, -83, 112, 104, -25, 90, 69, 48, 45, -95, 123, -52, -95, -116, -78, 114, -32, 80, 44, 39, -55, -13, -101, -30, 107, -24, -44, -91, 19, -98, -122, -117, 95, 41, 103, 118, 91, 69, -98, -123, 56, -124, 86, -2, -21, -93, -44, 65, -27, 50, 66, -92, 85, -5, -58, 2, 37, -1, 60, -55, 93, -82, -43, -45, 109, 5, -13, 77, 34, -18, 37, 46, 103, 25, 44, -2, -73, -48, -87, -105, -78, -117, 19, 98, -8, 4, 95, 57, -98, 52, -98, 23, -49, 62, 84, 123, -34, 35, -36, -25, -70, -62, 124, 74, 106, 124, -109, 104, 34, 77, 117, -64, -30, 52, 12, -77, -82, 91, -82, 61, -59, 103, -82, -66, 98, 13, 82, -22, -35, 115, -61, 28, 57, 84, -9, 64, -53, 35, 88, 39, 50, 90, 126, 71, -69, -128, 41, 72, 79, -97, 119, -45, 87, -22, 64, -67, -105, -122, -23, -116, -74, -117, 79, -55, 21, 6, 46, 17, 30, -78, -117, -35, -72, -69, 122, 107, 47, -127, -74, -3, 123, -107, -99, 44, -112, -69, 4, -40, -69, 15, 71, -19, 19, 10, 45, -113, -114, -72, -65, -124, 120, -15, 26, -36, 20, -18, -32, -117, -93, -94, 11, 87, 30, -128, 118, -99, 75, 98, 34, -102, 117, -12, -36, 81, 21, 41, -32, 38};
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
    msg.setTimeStamp(0.00439295036189);
    msg.setSource(61870U);
    msg.setSourceEntity(8U);
    msg.setDestination(17760U);
    msg.setDestinationEntity(84U);
    msg.content_type.assign("OWGNVYDRBTJCWKPHGCSRRMCVNEXUDXHTAQHKZRMGUYJJSYXKFQEQLNHSKIYNMJLWAJHLUNOZSPWDCVNCOWFALQXYIACNZODIUZRBTLYEHWCNMWFCCKPKWZRDQPRGFDMQDMAJXGPMBPSTCHOAOOLVWSUOGM");
    const char tmp_msg_0[] = {109, -91, -2, 43, 9, -61, -109, -20, -34, -109, 104, -64, -78, 9, -117, 125, 45, 49, -55, -77, -105, 91, 27, -23, -68, -67, -47, -102, 50, -39, 4, -50, -115, 96, -91, -103, -44, 62, -127, -1, -68, -43, -88, -121, 62, 85, -69, 12, 111, 70, -32, 101, 8, 5, 75, 122, -20, -88, 1, -2, -23, 75, -33, 40, 10, 30, 108, -6, 101, 78, -16, -113, -63, -86, 108, -45, 54, 88, 27, -2, -53, 105, -26, -119, 106, 50, 58, 117, -100, 80, 10, 108, 34, -55, -39, -127, -65, -8, -63, 8, 65, 44, 35, -125, 66, -27, 107, -81, -9, -128, -49, -87, 78, -9, -97, 31, -42, 100, 34, 75, -42, -10, -83, 64, 118, 50, -22, -104, 65, -65, -73, -8, -108, 122, 126, 76, -31, 45, -60, 37, 119, 89, -24, -77, -95, -21, 110, -51, -49, -57, 96, -124, -73, 121, 24, 98, -91, -36, -122, -101, -13, 96, 22, -95, 8, -70, 109, -115, -84, 35, 16, 75, 92, 49, 5, 42, 52, -94, 46, 51, -90, 5, -35, -44, 46, 34, -89, -96, -22, -105, 123, -49, -34, 4, 88, 9, 70, -31, -16, 70, 82, 62, 75, 19, 61, 92, 55, -107, 24, 78, -106, -81, 28, 58};
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

  return test.getReturnValue();
}
